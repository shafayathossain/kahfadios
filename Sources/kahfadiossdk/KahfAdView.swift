//
//  KahfAdView.swift
//  kahfadiossdk
//
//  Created by Shafayat Hossain on 12/6/25.
//

import SwiftUI
import ComposeApp

public struct KahfAdView: UIViewControllerRepresentable {
    private let adViewConfig: AdViewConfig
    private let callback: AdImpressionListener?
    
    public init(adViewConfig: AdViewConfig, callback: AdImpressionListener? = nil) {
        self.adViewConfig = adViewConfig
        self.callback = callback
    }
    
    public func makeUIViewController(context: Context) -> UIViewController {
        return ComposeApp.AdViewControllerKt.AdViewController(
            adViewConfig: adViewConfig.toSharedConfig(),
            impressionListener: createImpressionListener()
        )
    }
    
    public func updateUIViewController(_ uiViewController: UIViewController, context: Context) {
        // Update logic if needed
    }
    
    private func createImpressionListener() -> ComposeApp.AdImpressionListener {
        return KahfAdImpressionListener(callback: callback)
    }
    
    private class KahfAdImpressionListener: ComposeApp.AdImpressionListener {
        private let callback: AdImpressionListener?
        
        init(callback: AdImpressionListener?) {
            self.callback = callback
            super.init()
        }
        
        override func onAdLoaded() {
            callback?.onAdLoaded()
        }
        
        override func onAdFailedToLoad(error: KotlinThrowable) {
            callback?.onAdFailedToLoad(error: error.asError())
        }
        
        override func onAdClicked() {
            callback?.onAdClicked()
        }
    }
}
