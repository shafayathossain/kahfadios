//
//  KahfAdViewController.swift
//  kahfadiossdk
//
//  Created by Shafayat Hossain on 13/6/25.
//

import UIKit
import ComposeApp

public class KahfAdViewController: UIViewController {
    private let adViewConfig: AdViewConfig
    private let callback: AdImpressionListener?
    
    public init(adViewConfig: AdViewConfig, callback: AdImpressionListener? = nil) {
        self.adViewConfig = adViewConfig
        self.callback = callback
        super.init(nibName: nil, bundle: nil)
    }
    
    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    public override func viewDidLoad() {
        super.viewDidLoad()
        setupComposeViewController()
    }
    
    private func setupComposeViewController() {
        // Create the Compose view controller
        let composeVC = ComposeApp.AdViewControllerKt.AdViewController(
            adViewConfig: adViewConfig.toSharedConfig(),
            impressionListener: createImpressionListener()
        )
        
        // Add as child view controller
        addChild(composeVC)
        view.addSubview(composeVC.view)
        composeVC.view.frame = view.bounds
        composeVC.view.autoresizingMask = [.flexibleWidth, .flexibleHeight]
        composeVC.didMove(toParent: self)
    }
    
    private func createImpressionListener() -> ComposeApp.AdImpressionListener {
        return KahfAdImpressionListener(callback: callback)
    }
    
    // Reuse the same listener implementation
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
