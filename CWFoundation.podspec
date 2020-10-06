
Pod::Spec.new do |s|
  s.name             = 'CWFoundation'
  s.version="0.1.6"
  s.summary          = 'A short description of CWFoundation.'


  s.description      ='CWFoundation'
  s.homepage         = 'https://github.com/JackWchen2015/CWFoundation'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'JackWchen2015' => 'chenwu@roobo.com' }
  s.source           = { :git => 'https://github.com/JackWchen2015/CWFoundation.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'CWFoundation/*{h,m}'
  s.public_header_files = 'CWFoundation/*.h'
  s.xcconfig = { 'OTHER_LDFLAGS' => '-ObjC' }  
end
