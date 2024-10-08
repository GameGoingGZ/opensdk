#
#  Be sure to run `pod spec lint OpenSDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|


  spec.name         = "OpenSDK"
  spec.version      = "0.0.1"
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

  spec.vendored_frameworks = 'FrameworkBuild/Release-iphoneos/OpenSDK.framework'
  spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'arm64' }

end
