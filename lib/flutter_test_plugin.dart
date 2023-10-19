
import 'flutter_test_plugin_platform_interface.dart';

class FlutterTestPlugin {
  Future<String?> getPlatformVersion() {
    return FlutterTestPluginPlatform.instance.getPlatformVersion();
  }

  String getPluginName() {
    String string_plugin= "这是我的第一个flutter插件，哈哈哈";
    return string_plugin;
  }
}
