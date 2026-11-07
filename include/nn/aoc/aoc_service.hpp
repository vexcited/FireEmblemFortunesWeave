#pragma once

#include <stdint.h>

#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::aoc::detail {

class IPurchaseEventManager;

// The add-on content service, the client passes zero for its process id.
class IAddOnContentManager : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result CountAddOnContent(sf::Out<int32_t> pOutCount,
    uint64_t processId) = 0;
  virtual Result ListAddOnContent(sf::Out<int32_t> pOutCount,
    const sf::OutArray<int32_t>& pOutIndices, uint64_t processId,
    int32_t offset, int32_t count) = 0;
  virtual Result GetAddOnContentBaseId(sf::Out<uint64_t> pOutId,
    uint64_t processId) = 0;
  virtual Result PrepareAddOnContent(int32_t index, uint64_t processId) = 0;
  virtual void Reserved8() = 0;
  virtual void Reserved9() = 0;
  virtual void Reserved10() = 0;
  virtual Result NotifyMountAddOnContent(uint64_t dataId,
    uint64_t processId) = 0;
  virtual Result NotifyUnmountAddOnContent(uint64_t dataId,
    uint64_t processId) = 0;
  virtual Result IsAddOnContentMountedForDebug(sf::Out<bool> pOutIsMounted,
    uint64_t dataId, uint64_t processId) = 0;
  virtual Result CheckAddOnContentMountStatus(uint64_t processId) = 0;
  virtual Result CreateEcPurchasedEventManager(
    const sf::Out<sf::SharedPointer<IPurchaseEventManager>>& manager) = 0;
  virtual Result CreatePermanentEcPurchasedEventManager(
    const sf::Out<sf::SharedPointer<IPurchaseEventManager>>& manager,
    uint64_t processId) = 0;
  virtual void Reserved17() = 0;
  virtual Result SetRequiredAddOnContentsOnContentsAvailabilityTransition(
    uint64_t processId, const sf::InArray<int32_t>& indices) = 0;
  virtual Result SetupHostAddOnContent(uint64_t processId) = 0;
  virtual Result GetRegisteredAddOnContentPath(const sf::OutBuffer& path,
    int32_t index, uint64_t processId) = 0;
};

}
