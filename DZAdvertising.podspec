#
# Be sure to run `pod lib lint rdio-framework.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = "DZAdvertising"
  s.version          = "0.0.2"
  s.summary          = "Backup of the Test iOS SDK."
  s.description      = "This is a backup of the Test iOS SDK."
  s.homepage         = "https://github.com/AndyCC1023/DZAdvertisingFramework"
  s.license          = 'MIT'
  s.author           = { "Jared Sinclair" => "jaredsinclair.rn@gmail.com" }
  s.source           = { :git => "https://github.com/AndyCC1023/DZAdvertisingFramework.git", :tag => s.version.to_s }
  s.public_header_files = 'DZAdvertising.framework/Headers/*.h'
  s.platform     = :ios, '8.0'
  s.requires_arc = true

  s.vendored_frameworks = 'DZAdvertising.framework'
  #s.vendored_frameworks = 'DZAdvertisingOC.framework'
  s.frameworks = 'AudioToolbox', 'CFNetwork', 'CoreGraphics', 'CoreMedia', 'Security', 'SystemConfiguration'  
end
