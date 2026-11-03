#include "nn/os/native_handle.hpp"

#include "nn/os/system_event.hpp"

namespace nn::os {

void CloseNativeHandle(uint32_t handle) {
  detail::InterProcessEventImplByHorizon::Close(handle);
}

}
