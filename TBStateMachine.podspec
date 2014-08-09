Pod::Spec.new do |s|
  s.name             = "TBStateMachine"
  s.version          = "0.9.0"
  s.summary          = "A lightweight statemachine implementation in Objective-C."
  s.description      = <<-DESC
                       A lightweight statemachine implementation in Objective-C.

                       Features:
                       * nested and parallel states
                       * event handling
                       * block based API
                       
                       DESC
  s.homepage         = "https://github.com/tarbrain/TBStateMachine"
  s.license          = 'MIT'
  s.author           = { "Julian Krumow" => "julian.krumow@tarbrain.com" }
  s.source           = { :git => "https://github.com/tarbrain/TBStateMachine.git", :tag => s.version.to_s }

  s.ios.deployment_target = '5.0'
  s.osx.deployment_target = '10.7'
  s.requires_arc = true

  s.source_files = 'Pod/Classes'

end
