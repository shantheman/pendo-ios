Pod::Spec.new do |s|

    s.name     = 'Pendo'
    s.version  = '0.0.6'
    s.summary  = 'Pengo agent for iOS'
    s.homepage = 'http://www.pendo.io'
    s.license  = 'Commercial'
    s.authors  = { 'Antonio Rodriguez' => 'antonio@pendo.io' }
    s.source   = { :git => 'https://github.com/pendo-io/pendo-ios.git', :tag => s.version}
    s.social_media_url = 'https://twitter.com/pendoio'

    s.platform = :ios, '8.0'
    s.requires_arc = true

    s.ios.source_files = 'pendo-ios/*.h'
    s.ios.public_header_files = 'pendo-ios/*.h'
    s.ios.vendored_library = 'pendo-ios/libPendo.a'

    s.frameworks = 'UIKit', 'Security'
    s.module_name = 'Pendo'

end
