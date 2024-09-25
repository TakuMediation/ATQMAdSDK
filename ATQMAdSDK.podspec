Pod::Spec.new do |s|
  s.name             = 'ATQMAdSDK'
  s.version          = '1.0.9.05.01'
  s.summary          = 'Taku QMAdSDK'
  s.description      = '趣盟'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'qushiyu' => 'qushiyu@qutoutiao.net' }
  s.source           = { :git => 'https://github.com/TakuMediation/ATQMAdSDK.git', :tag => s.version.to_s }
  s.homepage         = 'https://git.qutoutiao.net/CPC/qmios'
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '11.0'                  #支持的平台和版本号
  s.swift_version = '5.1'
  s.xcconfig = { 'ENABLE_BITCODE' => 'NO', 'OTHER_LDFLAGS' =>'-ObjC'}
  
  s.vendored_frameworks = '*.{xcframework,framework}'
  
  s.weak_frameworks = 'AdSupport', 'AppTrackingTransparency', 'WebKit'
  s.frameworks = 'StoreKit', 'SystemConfiguration', 'CoreTelephony', 'AVKit', 'AVFoundation', 'CoreMedia', 'DeviceCheck', 'CoreMotion'

  s.requires_arc = true
  s.static_framework = true
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    
end
