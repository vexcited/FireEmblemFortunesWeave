#pragma once

#include "nn/os/sdk_mutex.hpp"
#include "nn/os/system_event_class.hpp"

namespace nn::pctl::detail {

struct EventHolder {
  os::SystemEvent event;
  os::SdkMutex mutex;
  bool isInitialized = false;
};

}
