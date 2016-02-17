##使用丁仔网络广告联盟SDK说明（iOS-Swift）
### 1. 导入framework
    general > embedded Binaries > DZAdvertising.framework
### 2. 配置Info Http请求支持
	info > custom iOS target Properties 
	App Transport Security Settings > Allow Arbitrary Loads = YES 
	
### 3. 广告视图使用
	import DZAdvertising
	
	let bannerView = DZAdvertising.bannerView("999999/88888", self)
    bannerView.frame = CGRectMake((view.frame.width - 320)/2, view.frame.height - 20 - 50, 320, 50)
    self.view.addSubview(bannerView)
	