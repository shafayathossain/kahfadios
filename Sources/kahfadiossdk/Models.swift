//
//  Models.swift
//  
//
//  Created by Shafayat Hossain on 12/6/25.
//

import Foundation
import ComposeApp

// MARK: - AdConfig
public struct AdConfig: Sendable {
    public let publisherId: String
    public let campaignTypes: String
    public let format: String
    
    public init(
        publisherId: String,
        campaignTypes: String = "paid|publisher-house|community|house",
        format: String = "json"
    ) {
        self.publisherId = publisherId
        self.campaignTypes = campaignTypes
        self.format = format
    }
    
    internal func toSharedConfig() -> ComposeApp.AdConfig {
        return ComposeApp.AdConfig(
            publisherId: publisherId,
            campaignTypes: campaignTypes,
            format: format
        )
    }
}

// MARK: - AdPlacementId
public enum AdPlacementId {
    case epom(String)
    case ethical(String)
    
    public var id: String {
        switch self {
        case .epom(let id), .ethical(let id):
            return id
        }
    }
    
    internal func toSharedPlacementId() -> ComposeApp.AdPlacementId {
        switch self {
        case .epom(let id):
            return ComposeApp.AdPlacementId.Epom(id: id)
        case .ethical(let id):
            return ComposeApp.AdPlacementId.Ethical(id: id)
        }
    }
}

// MARK: - AdViewConfig
public struct AdViewConfig {
    public let adType: AdType
    public let placementId: AdPlacementId
    public let screenName: String
    public let refreshRateInMillis: Int64
    
    public init(
        adType: AdType,
        placementId: AdPlacementId,
        screenName: String,
        refreshRateInMillis: Int64 = 30000
    ) {
        self.adType = adType
        self.placementId = placementId
        self.screenName = screenName
        self.refreshRateInMillis = refreshRateInMillis
    }
    
    internal func toSharedConfig() -> ComposeApp.AdViewConfig {
        return ComposeApp.AdViewConfig(
            adType: adType.toSharedAdType(),
            placementId: placementId.toSharedPlacementId(),
            screenName: screenName,
            refreshRateInMillis: refreshRateInMillis
        )
    }
}

// MARK: - AdType
public enum AdType {
    case bannerSmall
    case bannerMedium
    case mediumLarge
    case videoShorts
    
    public var width: Int {
        switch self {
        case .bannerSmall: return 640
        case .bannerMedium: return 600
        case .mediumLarge: return 300
        case .videoShorts: return 0
        }
    }
    
    public var height: Int {
        switch self {
        case .bannerSmall: return 200
        case .bannerMedium: return 94
        case .mediumLarge: return 250
        case .videoShorts: return 0
        }
    }
    
    public var ratio: String {
        switch self {
        case .bannerSmall: return "16:5"
        case .bannerMedium: return "32:5"
        case .mediumLarge: return "6:5"
        case .videoShorts: return "1:1"
        }
    }
    
    public var adTypeName: String {
        switch self {
        case .bannerSmall: return "image-640x200"
        case .bannerMedium: return "banner-600x94"
        case .mediumLarge: return "image-300x250"
        case .videoShorts: return "video_shorts"
        }
    }
    
    internal func toSharedAdType() -> ComposeApp.AdType {
        switch self {
        case .bannerSmall: return ComposeApp.AdType.banner640x200
        case .bannerMedium: return ComposeApp.AdType.banner600x94
        case .mediumLarge: return ComposeApp.AdType.banner300x250
        case .videoShorts: return ComposeApp.AdType.videoShortsAd
        }
    }
}

// MARK: - AdImpressionListener
public protocol AdImpressionListener {
    func onAdLoaded()
    func onAdFailedToLoad(error: any Error)
    func onAdClicked()
}

// MARK: - AdImpressionListenerAdapter
internal class AdImpressionListenerAdapter: ComposeApp.AdImpressionListener {
    private let listener: AdImpressionListener
    
    init(listener: AdImpressionListener) {
        self.listener = listener
        super.init()
    }
    
    override func onAdLoaded() {
        listener.onAdLoaded()
    }
    
    override func onAdFailedToLoad(error: KotlinThrowable) {
        listener.onAdFailedToLoad(error: error.asError())
    }
    
    override func onAdClicked() {
        listener.onAdClicked()
    }
}
