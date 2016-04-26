Pod::Spec.new do |s|

    s.name     = 'PendoE'
    s.version  = '0.0.3'
    s.summary  = 'Pengo agent for iOS'
    s.homepage = 'http://www.pendo.io'
    s.license  = 'Commercial'
    s.authors  = { 'Antonio Rodriguez' => 'antonio@pendo.io' }
    s.source   = { :git => 'https://github.com/pendo-io/pendo-ios-external.git', :tag => s.version}
    s.social_media_url = 'https://twitter.com/pendoio'

    s.platform = :ios, '8.0'
    s.requires_arc = true

    s.public_header_files = 'Pendo/Pendo.h', 'Pendo/PDOAccount.h', 'Pendo/PDOVisitor.h', 'Pendo/PDOEnvironment.h', 'Pendo/PDOSerialize.h'
    s.source_files = 'Pendo/*', 'Pendo/Decorators/*', 'Pendo/EventCapture/*', 'Pendo/EventUpload/*', 'Pendo/Helpers/*', 'Pendo/Logger/*', 'Pendo/Serializers/*'

    s.frameworks = 'UIKit', 'Security'
    s.module_name = 'PendoE'

end
