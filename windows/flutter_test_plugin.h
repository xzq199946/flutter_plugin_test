#ifndef FLUTTER_PLUGIN_FLUTTER_TEST_PLUGIN_H_
#define FLUTTER_PLUGIN_FLUTTER_TEST_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace flutter_test_plugin {

class FlutterTestPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  FlutterTestPlugin();

  virtual ~FlutterTestPlugin();

  // Disallow copy and assign.
  FlutterTestPlugin(const FlutterTestPlugin&) = delete;
  FlutterTestPlugin& operator=(const FlutterTestPlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace flutter_test_plugin

#endif  // FLUTTER_PLUGIN_FLUTTER_TEST_PLUGIN_H_
