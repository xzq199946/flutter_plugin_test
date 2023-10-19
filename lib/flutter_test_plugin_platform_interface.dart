import 'package:plugin_platform_interface/plugin_platform_interface.dart';

import 'flutter_test_plugin_method_channel.dart';

abstract class FlutterTestPluginPlatform extends PlatformInterface {
  /// Constructs a FlutterTestPluginPlatform.
  FlutterTestPluginPlatform() : super(token: _token);

  static final Object _token = Object();

  static FlutterTestPluginPlatform _instance = MethodChannelFlutterTestPlugin();

  /// The default instance of [FlutterTestPluginPlatform] to use.
  ///
  /// Defaults to [MethodChannelFlutterTestPlugin].
  static FlutterTestPluginPlatform get instance => _instance;

  /// Platform-specific implementations should set this with their own
  /// platform-specific class that extends [FlutterTestPluginPlatform] when
  /// they register themselves.
  static set instance(FlutterTestPluginPlatform instance) {
    PlatformInterface.verifyToken(instance, _token);
    _instance = instance;
  }

  Future<String?> getPlatformVersion() {
    throw UnimplementedError('platformVersion() has not been implemented.');
  }
}
