#include "nn/am/service/am_controllers.hpp"
#include "nn/oe/initialization.hpp"
#include "nn/os/system_event.hpp"

namespace nn::oe {

namespace {

constexpr uint32_t ResultNoMessage = 0x680;

void ConvertInvalid(uint32_t result) asm(
  "_ZN2nn6result6detail18ConvertInvalidImplENS_6ResultE");

// An empty queue is the only failure that is not an error.
[[gnu::always_inline]] Result ReceiveMessage(uint32_t* pOutMessage) {
  const Result result = am::service::GetCommonStateGetterObject()
    ->ReceiveMessage(sf::Out<uint32_t>(pOutMessage));
  if (result.IsFailure() &&
      (result.GetInnerValueForDebug() & 0x3fffff) != ResultNoMessage) {
    ConvertInvalid(result.value);
  }
  return result;
}

}

uint32_t PopNotificationMessage() {
  uint32_t message;
  Result result;
  do {
    os::WaitSystemEvent(&detail::NotificationEvent);
    message = 0;
    result = ReceiveMessage(&message);
  } while (result.IsFailure() || message == 0);
  return message;
}

bool TryPopNotificationMessage(uint32_t* pOutMessage) {
  if (!os::TryWaitSystemEvent(&detail::NotificationEvent)) {
    return false;
  }
  uint32_t message = 0;
  if (ReceiveMessage(&message).IsFailure()) {
    return false;
  }
  *pOutMessage = message;
  return true;
}

os::SystemEventType* GetNotificationMessageEvent() {
  return &detail::NotificationEvent;
}

}
