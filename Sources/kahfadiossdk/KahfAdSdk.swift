//
//  KahfAdSdk.swift
//  kahfadiossdk
//
//  Created by Shafayat Hossain on 12/6/25.
//

import ComposeApp
import Foundation

public actor KahfAdSdk {
    private static var _instance: KahfAdSdk?

    private let adConfig: AdConfig

    private init(adConfig: AdConfig) {
        self.adConfig = adConfig
    }

    public static func initialize(publisherId: String, campaignTypes: String = "paid|publisher-house|community|house", format: String = "json") -> KahfAdSdk {
        // Use Task to call the async initialize method
        var instance: KahfAdSdk?
        Task {
            instance = await initializeAsync(publisherId: publisherId, campaignTypes: campaignTypes, format: format)
        }
        while instance == nil {
            Thread.sleep(forTimeInterval: 0.1) // Simple sleep to avoid busy-waiting
        }
        return instance!
    }

    private static func initializeAsync(publisherId: String, campaignTypes: String, format: String) async -> KahfAdSdk {
        if let existingInstance = _instance {
            return existingInstance
        }

        // Create a thread-safe configuration
        let config = AdConfig(
            publisherId: publisherId,
            campaignTypes: campaignTypes,
            format: format
        )

        let sdk = KahfAdSdk(adConfig: config)

        // Create a copy of the configuration data for ComposeApp
        let sharedConfig = config.toSharedConfig()
        let publisherIdCopy = sharedConfig.publisherId
        let campaignTypesCopy = sharedConfig.campaignTypes
        let formatCopy = sharedConfig.format

        ComposeApp.KahfAdSdk.companion.initialize(
            config: ComposeApp.AdConfig(
                publisherId: publisherIdCopy,
                campaignTypes: campaignTypesCopy,
                format: formatCopy
            )
        )

        _instance = sdk
        return sdk
    }

    public static func getInstance() -> KahfAdSdk {
        var instance: KahfAdSdk?
         Task {
             instance = await getInstanceAsync()
         }
         while instance == nil {
             Thread.sleep(forTimeInterval: 0.1) // Simple sleep to avoid busy-waiting
         }
         return instance!
    }

    private static func getInstanceAsync() async -> KahfAdSdk? {
        guard let instance = _instance else {
            fatalError("KahfAdSdk not initialized. Call initialize() first.")
        }
        return instance
    }
}
