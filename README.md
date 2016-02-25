iOS DZAdvertising framework
==================
##丁仔网络广告联盟SDK使用说明（iOS）
### 1. 将 SDK 添加到 Xcode 项目中
您可以使用以下两种方法将 SDK 添加到 Xcode 项目中：
*使用 CocoaPods（精简方式）
*使用 SDK 下载（手动方式）
####使用 CocoaPods（精简方式)
使用 CocoaPods 可以管理 Xcode 项目的库依赖关系，建议您使用它来部署DZAdvertising移动广告SDK。如果您尚未在设备上安装 CocoaPods，请参阅 CocoaPods [安装指南]http://guides.cocoapods.org/using/getting-started.html

#####创建 Podfile
在 `xxx.xcodeproj` 您项目工程文件所在的同一目录中，创建一个包含以下内容的名为 `Podfile` 的文件：

```
source 'https://github.com/CocoaPods/Specs.git' 

platform :ios, '8.0'
#use_frameworks!
#inhibit_all_warnings!

pod 'DingZaiAdvertising', :git => 'https://github.com/AndyCC1023/DZAdvertisingFramework.git'
```

####运行 pod install
在 `Podfile` 文件所在的目录中，从终端运行 `pod install` 安装完毕后，关闭 xxx.xcodeproj 并打开您新的`xxx.xcworkspace`项目工程文件。
*注意：要更新为最新的 SDK，请在 Podfile 所在的目录中从终端运行 pod update。此命令会自动提取最新的 pod 并在您的应用中引用它们。

####使用 SDK 下载（手动方式）
在本页面点击`DownloadZIP`下载的`DZAdvertising.bundle`以及`DZAdvertising.framework`就是所需的SDK文件。右键点击您"xxx"项目，然后选择“Add Files To "xxx"”（将文件添加到“xxx”）

*动态库需要在项目工程`general > embedded Binaries > DZAdvertising.framework`处手动添加。

### 2. 配置Info Http请求支持(解决iOS9.0以上版本非https访问限制)
	info > custom iOS target Properties 
	App Transport Security Settings > Allow Arbitrary Loads = YES 
	
### 3. 广告视图使用
引用 SDK
```
import DZAdvertising//swift
```
```
@import DZAdvertising;//Object-C
```
使用添加Banner
```
let view = DZBannberView(frame: CGRectMake((self.view.frame.width - 320)/2.0,self.view.frame.height - 50 - 10,320,50))
view.delegate = self
view.rootViewController = self;
view.loadRequest(DZRequest("879281/871983"))
self.view.addSubview(view)
```
```
DZBannberView *view = [[DZBannberView alloc] initWithFrame:CGRectMake(0, 0, 100, 100)];
view.backgroundColor = [UIColor blackColor];
[self.view addSubview:view];
```
