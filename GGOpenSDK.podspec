#
#  Be sure to run `pod spec lint OpenSDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|


  spec.name         = "GGOpenSDK"
  spec.version      = "1.2.3"
  spec.summary      = "OpenSDK des"


  spec.description  = <<-DESC
  TODO: Add long description of the pod here.
                   DESC

  spec.homepage     = "http://gamegoing.com"

  spec.author           = { 'developer' => 'developer@gamegoing.net' }

  spec.license          = { :type => 'MIT', :file => 'LICENSE' }

# 
  spec.platform     = :ios, "12.0"

  spec.requires_arc = true
  
  spec.source       = { :git => "https://github.com/GameGoingGZ/opensdk.git", :tag => "#{spec.version}" }

  spec.vendored_frameworks = 'FrameworkBuild/Universal/OpenSDK.framework'
  spec.pod_target_xcconfig = {
      'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64', # 排除模拟器的 arm64
      'ARCHS' => 'arm64', # 只编译 arm64 架构
  }
  
  spec.user_target_xcconfig = { 
      'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64', 
      'ARCHS' => 'arm64', 
  }
end
