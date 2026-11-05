#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/mem/standard_allocator.hpp"
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
  bool IsAvailable() const;

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
  char rightsId[37];
  ConsumableServiceItemId itemId;
  uint8_t reserved_36;
  bool isServiceProvidableOnLocal;
  uint8_t reserved_38[8];
  char serviceProvidedKey[37];
  uint8_t reserved_65[3];

  ConsumableServiceItemId GetConsumableServiceItemId() const;
  bool IsServiceProvidableOnLocal() const;
  bool IsValid() const;
};

static_assert(sizeof(ConsumableServiceItemRightData) == 0x68);

struct SerializedConsumableServiceItemRightDataInfo {
  int32_t count;
};

Result GetSerializedConsumableServiceItemRightDataInfo(
  SerializedConsumableServiceItemRightDataInfo* pOutInfo, const void* data,
  size_t size);
int DeserializeConsumableServiceItemRightData(
  ConsumableServiceItemRightData* pOutData, int count, const void* data,
  size_t size);
size_t SerializeConsumableServiceItemRightData(void* buffer, size_t size,
  const ConsumableServiceItemRightData* data, int count);

Result BeginGetConsumableRightData(
  ShopServiceAccessor::AsyncResponse* response, const account::Uid& user,
  int offset, int count,
  ShopServiceAccessor* accessor, mem::StandardAllocator* allocator);
Result EndGetConsumableRightData(int* pOutCount,
  ConsumableServiceItemRightData* pOutData, int count,
  ShopServiceAccessor::AsyncResponse* response,
  mem::StandardAllocator* allocator);
Result BeginProvidableRightDataInquiry(
  ShopServiceAccessor::AsyncResponse* response, const account::Uid& user,
  const ConsumableServiceItemRightData* data, int count,
  ShopServiceAccessor* accessor, mem::StandardAllocator* allocator);
Result EndProvidableRightDataInquiryWithKeepingUnconsumedRightData(
  int* pOutCount, ConsumableServiceItemRightData* pOutData, int outCount,
  const ConsumableServiceItemRightData* data, int count,
  ShopServiceAccessor::AsyncResponse* response,
  mem::StandardAllocator* allocator);
Result BeginConsumeRightData(ShopServiceAccessor::AsyncResponse* response,
  const account::Uid& user, const ConsumableServiceItemRightData* data,
  int count, ShopServiceAccessor* accessor,
  mem::StandardAllocator* allocator);
Result EndConsumeRightData(int* pOutCount,
  ConsumableServiceItemRightData* pOutData, int outCount,
  const ConsumableServiceItemRightData* data, int count,
  ShopServiceAccessor::AsyncResponse* response,
  mem::StandardAllocator* allocator);

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
  bool IsRequestAvailable() const;

protected:
  ShopServiceAccessor* m_pAccessor;
  ConsumableServiceItemManager* m_pManager;
  account::Uid m_User;
  ShopServiceAccessor::AsyncResponse m_Response;
  bool m_IsInitialized;
};

class AsyncGetConsumableRightDataRequest
  : public ConsumableServiceItemAsyncRequestBase {
public:
  Result Begin();
  Result BeginImpl(int offset, int count);
  Result End();
  Result EndImpl(int* pOutCount, ConsumableServiceItemRightData* pOutData,
    int count);

private:
  int32_t m_Offset;
  int32_t m_Count;
  bool m_IsBegun;
};

class AsyncConsumeRightDataRequest
  : public ConsumableServiceItemAsyncRequestBase {
public:
  Result Begin();
  Result BeginImpl(const ConsumableServiceItemRightData* data, int count);
  Result End();
  Result EndImpl(int* pOutCount, ConsumableServiceItemRightData* pOutData,
    int count);

private:
  const ConsumableServiceItemRightData* m_pData;
  int32_t m_Count;
  bool m_IsBegun;
};

class AsyncRecoverRightDataRequest
  : public ConsumableServiceItemAsyncRequestBase {
public:
  Result Begin();
  Result BeginImpl(const ConsumableServiceItemRightData* data, int count);
  Result End();
  Result EndImpl(int* pOutCount, ConsumableServiceItemRightData* pOutData,
    int count);

private:
  const ConsumableServiceItemRightData* m_pData;
  int32_t m_Count;
  bool m_IsBegun;
};

class ConsumableServiceItemManager {
public:
  static constexpr int RightDataCountMax = 100;

  ConsumableServiceItemManager();
  ~ConsumableServiceItemManager();
  Result Initialize(ShopServiceAccessor* accessor, const account::Uid& user,
    void* buffer, size_t size);
  Result Initialize(ShopServiceAccessor* accessor, const account::Uid& user,
    void* buffer, size_t size, const void* data, size_t dataSize);
  Result ImportSerializedRightData(const void* data, size_t size);
  size_t ExportSerializedRightData(void* buffer, size_t size) const;
  int GetProvidableItemIdCount() const;
  Result GetProvidableItemIds(int* pOutCount,
    ConsumableServiceItemId* pOutIds, int count);
  int CopyRightData(void* buffer, int count);
  void SetRightData(const void* data, int count);
  Result AddRightData(bool* pOutAdded, const void* data, int count);
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
  mem::StandardAllocator* GetAllocator();

private:
  enum RequiredState : int32_t {
    RequiredState_None,
    RequiredState_Recover,
    RequiredState_Consume,
  };

  bool m_IsInitialized;
  ConsumableServiceItemRightData* m_pRightData;
  int32_t m_RightDataCount;
  mem::StandardAllocator m_Allocator;
  ShopServiceAccessor* m_pAccessor;
  account::Uid m_User;
  RequiredState m_RequiredState;
};

size_t GetRequiredBufferSizeToSerializeConsumableServiceItemRightData(
  const ConsumableServiceItemRightData* data, int count);

}
