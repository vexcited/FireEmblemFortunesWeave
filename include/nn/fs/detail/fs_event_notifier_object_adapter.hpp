#pragma once

#include "nn/fs/detail/fs_memory.hpp"
#include "nn/fs/fs_event_notifier.hpp"
#include "nn/fssrv/sf/fssrv_sf_ifile_system_proxy.hpp"

namespace nn::fs::detail {

class EventNotifierObjectAdapter : public IEventNotifier {
public:
  explicit EventNotifierObjectAdapter(
    nn::sf::SharedPointer<fssrv::sf::IEventNotifier>&& object);
  ~EventNotifierObjectAdapter() override;

  static void* operator new(size_t size) noexcept {
    return Allocate(size);
  }

  static void operator delete(void* pointer, size_t size) noexcept {
    Deallocate(pointer, size);
  }

private:
  Result DoBindEvent(os::SystemEventType* event,
    os::EventClearMode clearMode) override;

  fssrv::sf::IEventNotifier* m_pObject;
};

}
