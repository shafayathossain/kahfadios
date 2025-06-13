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
            url: "https://github.com/shafayathossain/kahfadios/releases/download/0.0.2/ComposeApp.xcframework.zip",
            checksum: "87b72cd20c35775e99433040218586f2d00e7b84589bda710b499d303e43d895"
        )
    ]
)
