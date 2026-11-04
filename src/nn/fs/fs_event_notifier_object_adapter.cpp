#include "nn/fs/detail/fs_event_notifier_object_adapter.hpp"

#include "nn/fs/detail/fs_log.hpp"

namespace nn::fs::detail {

EventNotifierObjectAdapter::EventNotifierObjectAdapter(
  nn::sf::SharedPointer<fssrv::sf::IEventNotifier>&& object)
  : m_pObject(object.operator->()) {
  if (m_pObject != nullptr) {
    m_pObject->AddReference();
  }
}

EventNotifierObjectAdapter::~EventNotifierObjectAdapter() {
  if (m_pObject != nullptr) {
    m_pObject->Release();
  }
}

Result EventNotifierObjectAdapter::DoBindEvent(os::SystemEventType* event,
  os::EventClearMode clearMode) {
  nn::sf::NativeHandle handle;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_pObject->GetEventHandle(
    nn::sf::Out<nn::sf::NativeHandle>(&handle)));
  os::AttachReadableHandleToSystemEvent(event, handle.GetOsHandle(),
    handle.IsManaged(), clearMode);
  handle.Detach();
  return ResultSuccess();
}

}
