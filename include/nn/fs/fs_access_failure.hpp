#pragma once

#include <stdint.h>

#include <memory>

#include "nn/fs/detail/fs_newable.hpp"
#include "nn/fssrv/sf/fssrv_sf_ifile_system_proxy.hpp"
#include "nn/os/system_event_class.hpp"
#include "nn/result.hpp"

namespace nn::fs {

void AbandonAccessFailure(uint64_t processId);

class AccessFailureResolver : public detail::Newable {
public:
  AccessFailureResolver(
    const nn::sf::SharedPointer<fssrv::sf::IEventNotifier>& notifier,
    uint64_t processId) : m_Notifier(notifier), m_ProcessId(processId) {}

  ~AccessFailureResolver() {
    AbandonAccessFailure(m_ProcessId);
  }

private:
  nn::sf::SharedPointer<fssrv::sf::IEventNotifier> m_Notifier;
  uint64_t m_ProcessId;
};

Result GetAccessFailureDetectionEvent(os::SystemEvent* outEvent);
Result OpenAccessFailureResolver(
  std::unique_ptr<AccessFailureResolver>* outResolver, uint64_t processId,
  bool notifyOnDeepRetry);

}
