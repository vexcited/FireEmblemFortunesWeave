#include <mutex>

#include "nn/diag/diag_abort.hpp"
#include "nn/pctl/detail/pctl_event_holder.hpp"
#include "nn/pctl/detail/pctl_service.hpp"
#include "nn/pctl/pctl_api.hpp"

namespace nn::pctl {

os::SystemEvent* GetErrorContextChangedEvent() {
  static bool s_IsUnsupported = false;
  static detail::EventHolder s_Holder;
  std::lock_guard<os::SdkMutex> lock(s_Holder.mutex);

  if (!s_IsUnsupported && !s_Holder.isInitialized) {
    sf::NativeHandle handle;
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      detail::GetServiceObject()->GetErrorContextChangedEvent(
        sf::Out<sf::NativeHandle>(&handle)));

    if (handle.GetOsHandle() != 0) {
      s_Holder.event.AttachReadableHandle(handle.GetOsHandle(),
        handle.IsManaged(), os::EventClearMode_AutoClear);
      handle.Detach();
      s_Holder.isInitialized = true;
      s_IsUnsupported = false;
    }
    else {
      s_IsUnsupported = true;
    }
  }

  return s_IsUnsupported ? nullptr : &s_Holder.event;
}

}
