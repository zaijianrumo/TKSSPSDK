#
#  Be sure to run `pod spec lint TKSSPSDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  These will help people to find your library, and whilst it
  #  can feel like a chore to fill in it's definitely to your advantage. The
  #  summary should be tweet-length, and the description more in depth.
  #

  spec.name         = "TKSSPSDK"
  spec.version      = "0.0.1"
  spec.summary      = "A short description of TKSSPSDK."

  spec.description  = <<-DESC
   塔肯SSP广告
                   DESC

  spec.homepage     = "https://github.com/zaijianrumo/TKSSPSDK.git"

  spec.license      = { :type => "MIT", :file => "FILE_LICENSE" }



  spec.author             = { "zaijianrumo" => "2245190733@qq.com" }

  spec.platform     = :ios, "9.0"


  spec.ios.deployment_target = "9.0"

  spec.source       = { :git => "https://github.com/zaijianrumo/TKSSPSDK.git", :tag => "#{spec.version}" }
   spec.ios.vendored_frameworks = "TKSSPSDK.xcframework"
   spec.resources               = 'TKSSPSDK.bundle'


  spec.requires_arc = true
  spec.frameworks = "CoreLocation","SystemConfiguration","CoreTelephony","MediaPlayer","AVFoundation","AVKit","WebKit","StoreKit","AdSupport"

   spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64'}
   spec.pod_target_xcconfig =   {'OTHER_LDFLAGS' => ['-lObjC']}
   spec.dependency "Protobuf"

end
