#include "include/flutter_test_plugin/flutter_test_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "flutter_test_plugin.h"

void FlutterTestPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  flutter_test_plugin::FlutterTestPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
