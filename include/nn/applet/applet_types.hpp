#pragma once

#include <stdint.h>

namespace nn::applet {

struct AppletResourceUserId {
  uint64_t lower;
};

struct ApplicationSpec {
  uint32_t value;
};

AppletResourceUserId GetAppletResourceUserId();

}
