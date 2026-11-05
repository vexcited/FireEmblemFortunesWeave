#include "nn/hid/detail/hid_touch_screen_accessor.hpp"

namespace nn::hid::detail {

Result InitializeTouchScreen(int width, int height) {
  TouchScreenSharedMemoryAccessor& accessor =
    GetTouchScreenSharedMemoryAccessor();
  NN_RESULT_DO(
    accessor.SetAppletResourceUserId(utility::GetAppletResourceUserId()));
  accessor.SetResolution(width, height);
  return accessor.Activate();
}

Result FinalizeTouchScreen() {
  return GetTouchScreenSharedMemoryAccessor().Deactivate();
}

}
