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
            url: "https://github.com/shafayathossain/kahfadios/releases/download/0.0.1/ComposeApp.xcframework.zip",
            checksum: "d80e573cb14edd269ee25a5aa47881da4fc069feac176de5313557e40b051a06"
        )
    ]
)
