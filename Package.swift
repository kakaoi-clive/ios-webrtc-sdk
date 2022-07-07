// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "ConnectLive-WebRTC",
    platforms: [
        .iOS(.v12),
    ],
    products: [
        .library(
            name: "ConnectLive-WebRTC",
            targets:["WebRTC"]
        ),
    ],
    dependencies: [],
    targets: [
        .binaryTarget(name: "WebRTC", path: "WebRTC.xcframework")
    ]
)
