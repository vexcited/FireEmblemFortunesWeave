#include <stddef.h>
#include <string.h>

#include "nn/hid/hid_controller_support.hpp"

namespace nn::hid {

namespace {

constexpr int8_t DefaultPlayerCountMax = 4;

}

void ControllerSupportArg::SetDefault() {
  playerCountMin = 0;
  playerCountMax = DefaultPlayerCountMax;
  enableTakeOverConnection = true;
  enableLeftJustify = true;
  enablePermitJoyDual = true;
  memset(&enableSingleMode, 0,
    sizeof(*this) - offsetof(ControllerSupportArg, enableSingleMode));
}

void ControllerFirmwareUpdateArg::SetDefault() {
  *this = {};
}

}

namespace nn::hid::system {

void ControllerKeyRemappingArg::SetDefault() {
  *this = {};
}

}
