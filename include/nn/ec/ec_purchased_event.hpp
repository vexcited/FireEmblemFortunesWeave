#pragma once

#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/ec/ec_shop_api.hpp"
#include "nn/result.hpp"
#include "nn/span.hpp"

namespace nn::os {

class SystemEvent;

}

namespace nn::ec {

struct PurchasedItemInfo {
  int32_t kind;
  ApplicationId applicationId;
  ConsumableId consumableId;
};

struct PurchasedItemInfoForPrivate {
  int32_t kind;
  ApplicationId applicationId;
  uint64_t reserved;
  ConsumableId consumableId;
};

void SetRequiredAddOnContentsOnContentsAvailabilityTransition(
  Span<const int> indices);
void InitializePurchasedEvent();
void InitializeAllPurchasedEvent();
void InitializeAllPurchasedEvent(const ApplicationId& applicationId);
os::SystemEvent* GetPurchasedEvent();
bool PopPurchasedItemInfo(PurchasedItemInfo* pOutInfo);
bool PopPurchasedItemInfo(PurchasedItemInfo* pOutInfo,
  const account::Uid& user);
void FinalizePurchasedEvent();

}
