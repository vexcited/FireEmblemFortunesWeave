#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/result.hpp"

namespace nn::err {

struct ErrorCode;

}

namespace nn::os {

struct SystemEvent;

}

namespace nn::ec {

class ShopServiceAccessor {
public:
  class AsyncResponse {
  public:
    void Cancel();
    Result Wait();
    bool TryWait();
    os::SystemEvent& GetEvent();
    err::ErrorCode GetErrorCode() const;
    Result GetSize(size_t* size);
    Result Get(void* buffer, size_t size);

  private:
    uint8_t m_Storage[0x50];
  };
};

struct ConsumableServiceItemId {
  char value[17];

  bool IsValid() const;
};

struct ConsumableServiceItemRightData {
  uint8_t reserved_00[0x25];
  ConsumableServiceItemId itemId;
  uint8_t reserved_36;
  bool isServiceProvidableOnLocal;
  uint8_t reserved_38[0x30];

  ConsumableServiceItemId GetConsumableServiceItemId() const;
  bool IsServiceProvidableOnLocal() const;
};

static_assert(sizeof(ConsumableServiceItemRightData) == 0x68);

class ConsumableServiceItemManager;
class AsyncGetConsumableRightDataRequest;
class AsyncConsumeRightDataRequest;
class AsyncRecoverRightDataRequest;

class ConsumableServiceItemAsyncRequestBase {
public:
  void Initialize(ShopServiceAccessor* accessor,
    ConsumableServiceItemManager* manager, const account::Uid& user);
  void Cancel();
  Result Wait();
  bool TryWait();
  os::SystemEvent& GetEvent();
  err::ErrorCode GetErrorCode() const;
  Result GetSize(size_t* size);
  Result Get(void* buffer, size_t size);
  ShopServiceAccessor* GetAccessor();
  ConsumableServiceItemManager* GetRightDataManager();
  account::Uid GetUser();
  ShopServiceAccessor::AsyncResponse* GetAsyncResponse();
  bool IsInitialized();

private:
  ShopServiceAccessor* m_pAccessor;
  ConsumableServiceItemManager* m_pManager;
  account::Uid m_User;
  ShopServiceAccessor::AsyncResponse m_Response;
  bool m_IsInitialized;
};

class AsyncGetConsumableRightDataRequest
  : public ConsumableServiceItemAsyncRequestBase {};
class AsyncConsumeRightDataRequest
  : public ConsumableServiceItemAsyncRequestBase {};
class AsyncRecoverRightDataRequest
  : public ConsumableServiceItemAsyncRequestBase {};

class ConsumableServiceItemManager {
public:
  static constexpr int RightDataCountMax = 100;

  bool IsInitialized();
  bool CanQueryNewData();
  bool IsRecoveryRequired();
  bool IsConsumptionRequired();
  void SetupAsyncRequest(AsyncGetConsumableRightDataRequest* request);
  void SetupAsyncRequest(AsyncConsumeRightDataRequest* request);
  void SetupAsyncRequest(AsyncRecoverRightDataRequest* request);
  void SetRecoverRequired();
  void SetConsumeRequired();
  void SetRecoverDone();
  void SetConsumeDone();
  size_t GetRequiredBufferSizeToExportSerializedRightData() const;
  Result MarkServiceProvided(uint64_t* count,
    const ConsumableServiceItemId& id);
  Result MarkServiceProvided(const ConsumableServiceItemId& id);
  int GetRightDataCount();
  ConsumableServiceItemRightData* GetRightData();
  int GetRightDataCountMax();
  void* GetAllocator();

private:
  enum RequiredState : int32_t {
    RequiredState_None,
    RequiredState_Recover,
    RequiredState_Consume,
  };

  bool m_IsInitialized;
  ConsumableServiceItemRightData* m_pRightData;
  int32_t m_RightDataCount;
  alignas(8) uint8_t m_Allocator[0x48];
  ShopServiceAccessor* m_pAccessor;
  account::Uid m_User;
  RequiredState m_RequiredState;
};

size_t GetRequiredBufferSizeToSerializeConsumableServiceItemRightData(
  const ConsumableServiceItemRightData* data, int count);

}
