#include "nn/ec/ec_purchased_event.hpp"

#include "nn/aoc/aoc_add_on_content.hpp"
#include "nn/aoc/aoc_service.hpp"
#include "nn/aoc/initialization.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/system_event_class.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"
#include "nn/util/optional.hpp"

namespace nn::aoc::detail {

struct PurchasedProductInfo {
  uint64_t applicationId;
  int32_t kind;
  uint8_t reserved_0c[0xc];
  ec::ConsumableId consumableId;
  uint8_t reserved_29[0x57];
};

class IPurchaseEventManager : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result SetDefaultDeliveryTarget(uint64_t processId,
    const sf::InArray<int32_t>& targets) = 0;
  virtual Result SetDeliveryTarget(ApplicationId applicationId,
    const sf::InArray<int32_t>& targets) = 0;
  virtual Result GetPurchasedEventReadableHandle(
    sf::Out<sf::NativeHandle> handle) = 0;
  virtual Result PopPurchasedProductInfo(
    sf::Out<PurchasedProductInfo> info) = 0;
  virtual Result PopPurchasedProductInfoWithUid(
    sf::Out<PurchasedProductInfo> info, const account::Uid& user) = 0;
};

}

namespace nn::ec {

namespace {

const uint32_t ResultNoPurchasedProductInfoAvailableValue = 0x320a4;
const uint32_t ResultAocNotPermittedValue = 0x102c10;
const uint32_t ResultAocInvalidIndexValue = 0xc8a6;
const Result ResultNotPermittedOnTransition = {0x3eea4};
const Result ResultInvalidIndexOnTransition = {0x3eca4};

sf::SharedPointer<aoc::detail::IPurchaseEventManager> g_PurchaseEventManager;
util::optional<os::SystemEvent> g_PurchasedEvent;

aoc::detail::IAddOnContentManager* GetAddOnContentManager() {
  return reinterpret_cast<aoc::detail::IAddOnContentManager*>(
    aoc::detail::GetObjectHolder()->object);
}

[[gnu::always_inline]] void SetupPurchasedEvent(
  const sf::InArray<int32_t>& targets, const ApplicationId* pApplicationId) {
  if (pApplicationId != nullptr) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(g_PurchaseEventManager->SetDeliveryTarget(
      *pApplicationId, targets));
  }
  else {
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      g_PurchaseEventManager->SetDefaultDeliveryTarget(0, targets));
  }
  sf::NativeHandle handle;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_PurchaseEventManager->GetPurchasedEventReadableHandle(
      sf::Out<sf::NativeHandle>(&handle)));
  g_PurchasedEvent.emplace();
  g_PurchasedEvent->AttachReadableHandle(handle.GetOsHandle(),
    handle.IsManaged(), os::EventClearMode_ManualClear);
  handle.Detach();
}

void SetPurchaseEventManager(
  sf::SharedPointer<aoc::detail::IPurchaseEventManager>& manager) {
  sf::SharedPointer<aoc::detail::IPurchaseEventManager>(manager.Detach(),
    false).Swap(g_PurchaseEventManager);
}

[[gnu::always_inline]] void InitializePurchasedEventImpl(
  const int32_t* targets, int count, const ApplicationId* pApplicationId) {
  if (g_PurchaseEventManager) {
    return;
  }
  sf::SharedPointer<aoc::detail::IPurchaseEventManager> manager;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetAddOnContentManager()->CreateEcPurchasedEventManager(
      sf::Out<sf::SharedPointer<aoc::detail::IPurchaseEventManager>>(
        &manager)));
  SetPurchaseEventManager(manager);
  SetupPurchasedEvent(sf::InArray<int32_t>(targets, count), pApplicationId);
}

template<typename Info>
bool PopPurchasedItemInfoImpl(Info* pOutInfo,
  const util::optional<account::Uid>& user) {
  aoc::detail::PurchasedProductInfo info = {};
  sf::Out<aoc::detail::PurchasedProductInfo> out(&info);
  Result result = user ?
    g_PurchaseEventManager->PopPurchasedProductInfoWithUid(out, *user) :
    g_PurchaseEventManager->PopPurchasedProductInfo(out);
  bool popped = result.GetInnerValueForDebug() !=
    ResultNoPurchasedProductInfoAvailableValue;
  if (popped) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(result);
    *pOutInfo = {};
    pOutInfo->applicationId = {info.applicationId};
    pOutInfo->kind = info.kind;
    if (info.kind == 0) {
      pOutInfo->consumableId = info.consumableId;
    }
  }
  return popped;
}

}

void SetRequiredAddOnContentsOnContentsAvailabilityTransition(
  Span<const int> indices) {
  Result result =
    aoc::SetRequiredAddOnContentsOnContentsAvailabilityTransition(indices);
  if (result.IsSuccess()) {
    return;
  }
  if (result.GetInnerValueForDebug() == ResultAocInvalidIndexValue) {
    result = ResultInvalidIndexOnTransition;
  }
  else if (result.GetInnerValueForDebug() == ResultAocNotPermittedValue) {
    result = ResultNotPermittedOnTransition;
  }
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
}

void InitializePurchasedEvent() {
  const int32_t targets[] = {0, 1};
  InitializePurchasedEventImpl(targets, 2, nullptr);
}

void InitializeAllPurchasedEvent() {
  const int32_t targets[] = {0, 1, 2, 3};
  InitializePurchasedEventImpl(targets, 4, nullptr);
}

void InitializeAllPurchasedEvent(const ApplicationId& applicationId) {
  const int32_t targets[] = {0, 1, 2, 3};
  InitializePurchasedEventImpl(targets, 4, &applicationId);
}

os::SystemEvent* GetPurchasedEvent() {
  return &*g_PurchasedEvent;
}

bool PopPurchasedItemInfo(PurchasedItemInfo* pOutInfo) {
  return PopPurchasedItemInfoImpl(pOutInfo, util::optional<account::Uid>());
}

bool PopPurchasedItemInfo(PurchasedItemInfo* pOutInfo,
  const account::Uid& user) {
  return PopPurchasedItemInfoImpl(pOutInfo,
    util::optional<account::Uid>(user));
}

void FinalizePurchasedEvent() {
  g_PurchaseEventManager.Reset();
  g_PurchasedEvent.reset();
}

}
