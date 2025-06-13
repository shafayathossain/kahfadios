// swift-tools-version: 6.1
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "kahfadiossdk",
    platforms: [.iOS(.v14)],
    products: [
        .library(
            name: "KahfAdsIosSdk",
            targets: ["KahfAdsIosSdk"]
        )
    ],
    targets: [
        .target(
            name: "KahfAdsIosSdk",
            dependencies: ["ComposeApp"],
            path: "./Sources/kahfadiossdk"
        ),
        .binaryTarget(
            name: "ComposeApp",
            path: "./composeApp.xcframework"
        )
    ]
)
