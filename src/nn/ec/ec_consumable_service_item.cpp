#include "nn/ec/ec_consumable_service_item.hpp"

#include <string.h>

#include <algorithm>

#include "nn/crypto/sha256_generator.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/util/string_util.hpp"

namespace nn::err {

struct ErrorCode {
  uint32_t category;
  uint32_t number;
};

}

namespace nn::ec {

namespace {

// Serialized right data start with an 8 byte header.
constexpr size_t SerializedHeaderSize = 8;

constexpr int32_t SerializedVersion = 1;

constexpr Result ResultOutOfMemory = {0xb4a4};
constexpr Result ResultInvalidSerializedData = {0x258a4};
constexpr Result ResultInsufficientBuffer = {0x25ca4};
constexpr Result ResultItemNotFound = {0x25ea4};

struct SerializedHeader {
  int32_t version;
  int32_t count;
};

void ConstructAllocator(mem::StandardAllocator* allocator)
  asm("_ZN2nn3mem17StandardAllocatorC1Ev");

}

bool ConsumableServiceItemId::IsValid() const {
  return value[0] != '\0';
}

// The right data accessors live in another translation unit of the SDK, so
// callers know nothing about them.
[[gnu::weak]] ConsumableServiceItemId
ConsumableServiceItemRightData::GetConsumableServiceItemId() const {
  return itemId;
}

[[gnu::weak]] bool
ConsumableServiceItemRightData::IsServiceProvidableOnLocal() const {
  return isServiceProvidableOnLocal;
}

void ConsumableServiceItemAsyncRequestBase::Initialize(
  ShopServiceAccessor* accessor, ConsumableServiceItemManager* manager,
  const account::Uid& user) {
  m_pAccessor = accessor;
  m_pManager = manager;
  m_User = user;
  m_IsInitialized = true;
}

void ConsumableServiceItemAsyncRequestBase::Cancel() {
  m_Response.Cancel();
}

void ConsumableServiceItemAsyncRequestBase::Wait() {
  m_Response.Wait();
}

bool ConsumableServiceItemAsyncRequestBase::TryWait() {
  return m_Response.TryWait();
}

os::SystemEvent& ConsumableServiceItemAsyncRequestBase::GetEvent() {
  return m_Response.GetEvent();
}

err::ErrorCode ConsumableServiceItemAsyncRequestBase::GetErrorCode() const {
  return m_Response.GetErrorCode();
}

Result ConsumableServiceItemAsyncRequestBase::GetSize(size_t* size) {
  return m_Response.GetSize(size);
}

Result ConsumableServiceItemAsyncRequestBase::Get(void* buffer, size_t size) {
  return m_Response.Get(buffer, size);
}

ShopServiceAccessor* ConsumableServiceItemAsyncRequestBase::GetAccessor() {
  return m_pAccessor;
}

ConsumableServiceItemManager*
ConsumableServiceItemAsyncRequestBase::GetRightDataManager() {
  return m_pManager;
}

account::Uid ConsumableServiceItemAsyncRequestBase::GetUser() {
  return m_User;
}

ShopServiceAccessor::AsyncResponse*
ConsumableServiceItemAsyncRequestBase::GetAsyncResponse() {
  return &m_Response;
}

bool ConsumableServiceItemAsyncRequestBase::IsInitialized() {
  return m_IsInitialized;
}

bool ConsumableServiceItemManager::IsInitialized() {
  return m_IsInitialized;
}

bool ConsumableServiceItemManager::CanQueryNewData() {
  return m_RightDataCount < RightDataCountMax &&
    m_RequiredState != RequiredState_Recover;
}

bool ConsumableServiceItemManager::IsRecoveryRequired() {
  return m_RequiredState == RequiredState_Recover;
}

bool ConsumableServiceItemManager::IsConsumptionRequired() {
  return m_RequiredState == RequiredState_Consume;
}

void ConsumableServiceItemManager::SetupAsyncRequest(
  AsyncGetConsumableRightDataRequest* request) {
  request->Initialize(m_pAccessor, this, m_User);
}

void ConsumableServiceItemManager::SetupAsyncRequest(
  AsyncConsumeRightDataRequest* request) {
  request->Initialize(m_pAccessor, this, m_User);
}

void ConsumableServiceItemManager::SetupAsyncRequest(
  AsyncRecoverRightDataRequest* request) {
  request->Initialize(m_pAccessor, this, m_User);
}

void ConsumableServiceItemManager::SetRecoverRequired() {
  m_RequiredState = RequiredState_Recover;
}

void ConsumableServiceItemManager::SetConsumeRequired() {
  m_RequiredState = RequiredState_Consume;
}

void ConsumableServiceItemManager::SetRecoverDone() {
  m_RequiredState = RequiredState_None;
}

void ConsumableServiceItemManager::SetConsumeDone() {
  m_RequiredState = RequiredState_None;
}

size_t ConsumableServiceItemManager::
  GetRequiredBufferSizeToExportSerializedRightData() const {
  return GetRequiredBufferSizeToSerializeConsumableServiceItemRightData(
    m_pRightData, m_RightDataCount);
}

Result ConsumableServiceItemManager::MarkServiceProvided(
  const ConsumableServiceItemId& id) {
  uint64_t count;
  return MarkServiceProvided(&count, id);
}

int ConsumableServiceItemManager::GetRightDataCount() {
  return m_RightDataCount;
}

ConsumableServiceItemRightData* ConsumableServiceItemManager::GetRightData() {
  return m_pRightData;
}

int ConsumableServiceItemManager::GetRightDataCountMax() {
  return RightDataCountMax;
}

mem::StandardAllocator* ConsumableServiceItemManager::GetAllocator() {
  return &m_Allocator;
}

size_t GetRequiredBufferSizeToSerializeConsumableServiceItemRightData(
  const ConsumableServiceItemRightData*, int count) {
  return SerializedHeaderSize +
    static_cast<size_t>(count) * sizeof(ConsumableServiceItemRightData);
}

ConsumableServiceItemManager::ConsumableServiceItemManager()
  : m_IsInitialized(false), m_pRightData(nullptr), m_RightDataCount(0) {
  ConstructAllocator(&m_Allocator);
  m_RequiredState = RequiredState_None;
  m_User = {};
  m_pAccessor = nullptr;
}

ConsumableServiceItemManager::~ConsumableServiceItemManager() {
  if (m_IsInitialized) {
    m_Allocator.Finalize();
  }
  // The allocator destructor finalizes it while its first byte is set.
  if (*reinterpret_cast<const bool*>(&m_Allocator)) {
    m_Allocator.Finalize();
  }
}

Result ConsumableServiceItemManager::Initialize(ShopServiceAccessor* accessor,
  const account::Uid& user, void* buffer, size_t size) {
  m_Allocator.Initialize(buffer, size);
  m_pRightData = static_cast<ConsumableServiceItemRightData*>(
    m_Allocator.Allocate(RightDataCountMax *
      sizeof(ConsumableServiceItemRightData)));
  if (m_pRightData == nullptr) {
    return ResultOutOfMemory;
  }
  m_RightDataCount = 0;
  m_pAccessor = accessor;
  m_User = user;
  m_IsInitialized = true;
  return Result();
}

Result GetSerializedConsumableServiceItemRightDataInfo(
  SerializedConsumableServiceItemRightDataInfo* pOutInfo, const void* data,
  size_t size) {
  if (size < sizeof(int32_t) || size < sizeof(SerializedHeader)) {
    return ResultInvalidSerializedData;
  }
  const SerializedHeader* header = static_cast<const SerializedHeader*>(data);
  if (header->version != SerializedVersion ||
    SerializedHeaderSize + header->count *
      sizeof(ConsumableServiceItemRightData) > size) {
    return ResultInvalidSerializedData;
  }
  pOutInfo->count = header->count;
  return Result();
}

Result ConsumableServiceItemManager::ImportSerializedRightData(
  const void* data, size_t size) {
  SerializedConsumableServiceItemRightDataInfo info;
  NN_RESULT_DO(GetSerializedConsumableServiceItemRightDataInfo(&info, data,
    size));
  memcpy(m_pRightData, static_cast<const char*>(data) + SerializedHeaderSize,
    info.count * sizeof(ConsumableServiceItemRightData));
  m_RightDataCount = info.count;
  for (int i = 0; i < info.count; i++) {
    if (!m_pRightData[i].IsServiceProvidableOnLocal()) {
      SetRecoverRequired();
      break;
    }
  }
  return Result();
}

Result ConsumableServiceItemManager::Initialize(ShopServiceAccessor* accessor,
  const account::Uid& user, void* buffer, size_t size, const void* data,
  size_t dataSize) {
  SerializedConsumableServiceItemRightDataInfo info;
  NN_RESULT_DO(GetSerializedConsumableServiceItemRightDataInfo(&info, data,
    dataSize));
  NN_RESULT_DO(Initialize(accessor, user, buffer, size));
  return ImportSerializedRightData(data, dataSize);
}

int DeserializeConsumableServiceItemRightData(
  ConsumableServiceItemRightData* pOutData, int, const void* data,
  size_t size) {
  SerializedConsumableServiceItemRightDataInfo info = {};
  GetSerializedConsumableServiceItemRightDataInfo(&info, data, size);
  memcpy(pOutData, static_cast<const char*>(data) + SerializedHeaderSize,
    info.count * sizeof(ConsumableServiceItemRightData));
  return info.count;
}

size_t SerializeConsumableServiceItemRightData(void* buffer, size_t,
  const ConsumableServiceItemRightData* data, int count) {
  SerializedHeader* header = static_cast<SerializedHeader*>(buffer);
  header->version = SerializedVersion;
  header->count = count;
  size_t size = count * sizeof(ConsumableServiceItemRightData);
  memcpy(header + 1, data, size);
  return SerializedHeaderSize + size;
}

size_t ConsumableServiceItemManager::ExportSerializedRightData(void* buffer,
  size_t size) const {
  return SerializeConsumableServiceItemRightData(buffer, size, m_pRightData,
    m_RightDataCount);
}

int ConsumableServiceItemManager::GetProvidableItemIdCount() const {
  int count = 0;
  for (int i = 0; i < m_RightDataCount; i++) {
    ConsumableServiceItemRightData data = m_pRightData[i];
    if (data.IsServiceProvidableOnLocal()) {
      count++;
    }
  }
  return count;
}

Result ConsumableServiceItemManager::GetProvidableItemIds(int* pOutCount,
  ConsumableServiceItemId* pOutIds, int count) {
  int providableCount = GetProvidableItemIdCount();
  if (providableCount > count) {
    return ResultInsufficientBuffer;
  }
  ConsumableServiceItemRightData* providable =
    static_cast<ConsumableServiceItemRightData*>(m_Allocator.Allocate(
      providableCount * sizeof(ConsumableServiceItemRightData)));
  if (providable == nullptr) {
    return ResultOutOfMemory;
  }
  std::copy_if(m_pRightData, m_pRightData + m_RightDataCount, providable,
    [](ConsumableServiceItemRightData data) {
      return data.IsServiceProvidableOnLocal();
    });
  for (int i = 0; i < providableCount; i++) {
    pOutIds[i] = providable[i].GetConsumableServiceItemId();
  }
  *pOutCount = providableCount;
  m_Allocator.Free(providable);
  return Result();
}

Result ConsumableServiceItemManager::MarkServiceProvided(uint64_t* count,
  const ConsumableServiceItemId& id) {
  ConsumableServiceItemRightData* begin = m_pRightData;
  ConsumableServiceItemRightData* end = begin + m_RightDataCount;
  ConsumableServiceItemRightData* found = std::find_if(begin, end,
    [&id](const ConsumableServiceItemRightData& data) {
      // The flag byte is compared against one, not tested for zero.
      if (*reinterpret_cast<const uint8_t*>(
            &data.isServiceProvidableOnLocal) != 1) {
        return false;
      }
      ConsumableServiceItemId itemId = data.itemId;
      return util::Strncmp(itemId.value, id.value, sizeof(id.value)) == 0;
    });
  if (found == end) {
    return ResultItemNotFound;
  }
  uint64_t hash[4] = {};
  crypto::GenerateSha256Hash(hash, sizeof(hash), found->serviceProvidedKey,
    sizeof(found->serviceProvidedKey));
  *count = hash[0];
  ConsumableServiceItemRightData* last = std::remove_if(begin, end,
    [found](const ConsumableServiceItemRightData& data) {
      return util::Strncmp(data.rightsId, found->rightsId,
        sizeof(data.rightsId)) == 0;
    });
  if (last == end) {
    return ResultItemNotFound;
  }
  m_RightDataCount--;
  return Result();
}

int ConsumableServiceItemManager::CopyRightData(void* buffer, int) {
  memcpy(buffer, m_pRightData,
    m_RightDataCount * sizeof(ConsumableServiceItemRightData));
  return m_RightDataCount;
}

void ConsumableServiceItemManager::SetRightData(const void* data,
  int count) {
  memcpy(m_pRightData, data, count * sizeof(ConsumableServiceItemRightData));
  m_RightDataCount = count;
}

Result ConsumableServiceItemManager::AddRightData(bool* pOutAdded,
  const void* data, int count) {
  *pOutAdded = false;
  const ConsumableServiceItemRightData* source =
    static_cast<const ConsumableServiceItemRightData*>(data);
  if (m_RightDataCount == 0) {
    SetRightData(data, count);
    *pOutAdded = true;
    return Result();
  }
  ConsumableServiceItemRightData* merged =
    static_cast<ConsumableServiceItemRightData*>(m_Allocator.Allocate(
      RightDataCountMax * sizeof(ConsumableServiceItemRightData)));
  if (merged == nullptr) {
    return ResultOutOfMemory;
  }
  memcpy(merged, m_pRightData,
    m_RightDataCount * sizeof(ConsumableServiceItemRightData));
  int mergedCount = m_RightDataCount;
  ConsumableServiceItemRightData* end = merged + mergedCount;
  for (int i = 0; i < count; i++) {
    if (mergedCount >= RightDataCountMax) {
      break;
    }
    const ConsumableServiceItemRightData& candidate = source[i];
    bool exists = std::find_if(merged, end,
      [&candidate](const ConsumableServiceItemRightData& existing) {
        return util::Strncmp(candidate.rightsId, existing.rightsId,
          sizeof(candidate.rightsId)) == 0;
      }) != end;
    if (!exists) {
      merged[mergedCount++] = candidate;
      *pOutAdded = true;
    }
  }
  SetRightData(merged, mergedCount);
  m_Allocator.Free(merged);
  return Result();
}

bool ConsumableServiceItemAsyncRequestBase::IsRequestAvailable() const {
  return m_pAccessor->IsAvailable() & m_IsInitialized;
}

Result AsyncGetConsumableRightDataRequest::BeginImpl(int offset, int count) {
  NN_RESULT_DO(BeginGetConsumableRightData(GetAsyncResponse(), GetUser(),
    offset, count, GetAccessor(), GetRightDataManager()->GetAllocator()));
  m_Offset = offset;
  m_Count = count;
  m_IsBegun = true;
  return Result();
}

Result AsyncGetConsumableRightDataRequest::EndImpl(int* pOutCount,
  ConsumableServiceItemRightData* pOutData, int count) {
  return EndGetConsumableRightData(pOutCount, pOutData, count,
    GetAsyncResponse(), GetRightDataManager()->GetAllocator());
}

Result AsyncRecoverRightDataRequest::BeginImpl(
  const ConsumableServiceItemRightData* data, int count) {
  NN_RESULT_DO(BeginProvidableRightDataInquiry(GetAsyncResponse(), GetUser(),
    data, count, GetAccessor(), GetRightDataManager()->GetAllocator()));
  m_pData = data;
  m_Count = count;
  m_IsBegun = true;
  return Result();
}

Result AsyncRecoverRightDataRequest::EndImpl(int* pOutCount,
  ConsumableServiceItemRightData* pOutData, int count) {
  return EndProvidableRightDataInquiryWithKeepingUnconsumedRightData(
    pOutCount, pOutData, count, m_pData, m_Count, GetAsyncResponse(),
    GetRightDataManager()->GetAllocator());
}

Result AsyncConsumeRightDataRequest::BeginImpl(
  const ConsumableServiceItemRightData* data, int count) {
  NN_RESULT_DO(BeginConsumeRightData(GetAsyncResponse(), GetUser(), data,
    count, GetAccessor(), GetRightDataManager()->GetAllocator()));
  m_pData = data;
  m_Count = count;
  m_IsBegun = true;
  return Result();
}

Result AsyncConsumeRightDataRequest::EndImpl(int* pOutCount,
  ConsumableServiceItemRightData* pOutData, int count) {
  return EndConsumeRightData(pOutCount, pOutData, count, m_pData, m_Count,
    GetAsyncResponse(), GetRightDataManager()->GetAllocator());
}

Result AsyncGetConsumableRightDataRequest::Begin() {
  return BeginImpl(0, ConsumableServiceItemManager::RightDataCountMax);
}

Result AsyncGetConsumableRightDataRequest::End() {
  ConsumableServiceItemManager* manager = GetRightDataManager();
  int count = 0;
  ConsumableServiceItemRightData* data =
    static_cast<ConsumableServiceItemRightData*>(
      manager->GetAllocator()->Allocate(
        m_Count * sizeof(ConsumableServiceItemRightData)));
  if (data == nullptr) {
    return ResultOutOfMemory;
  }
  Result result = EndImpl(&count, data, m_Count);
  if (result.IsSuccess() && count > 0) {
    bool added;
    result = GetRightDataManager()->AddRightData(&added, data, count);
    if (result.IsSuccess() && added) {
      GetRightDataManager()->SetConsumeRequired();
    }
  }
  manager->GetAllocator()->Free(data);
  return result;
}

Result AsyncRecoverRightDataRequest::Begin() {
  ConsumableServiceItemManager* manager = GetRightDataManager();
  return BeginImpl(manager->GetRightData(), manager->GetRightDataCount());
}

Result AsyncRecoverRightDataRequest::End() {
  ConsumableServiceItemManager* manager = GetRightDataManager();
  ConsumableServiceItemRightData* data =
    static_cast<ConsumableServiceItemRightData*>(
      manager->GetAllocator()->Allocate(
        m_Count * sizeof(ConsumableServiceItemRightData)));
  if (data == nullptr) {
    return ResultOutOfMemory;
  }
  int count = 0;
  Result result = EndImpl(&count, data, m_Count);
  if (result.IsSuccess()) {
    GetRightDataManager()->SetRightData(data, count);
    bool providable = std::none_of(data, data + count,
      [](const ConsumableServiceItemRightData& rightData) {
        return rightData.isServiceProvidableOnLocal == false;
      });
    if (providable) {
      GetRightDataManager()->SetRecoverDone();
    }
    else {
      GetRightDataManager()->SetConsumeRequired();
    }
  }
  manager->GetAllocator()->Free(data);
  return result;
}

Result AsyncConsumeRightDataRequest::Begin() {
  ConsumableServiceItemManager* manager = GetRightDataManager();
  return BeginImpl(manager->GetRightData(), manager->GetRightDataCount());
}

Result AsyncConsumeRightDataRequest::End() {
  ConsumableServiceItemManager* manager = GetRightDataManager();
  ConsumableServiceItemRightData* data =
    static_cast<ConsumableServiceItemRightData*>(
      manager->GetAllocator()->Allocate(
        m_Count * sizeof(ConsumableServiceItemRightData)));
  if (data == nullptr) {
    return ResultOutOfMemory;
  }
  int count = 0;
  Result result = EndImpl(&count, data, m_Count);
  if (result.IsSuccess()) {
    GetRightDataManager()->SetRightData(data, count);
    GetRightDataManager()->SetConsumeDone();
  }
  else {
    GetRightDataManager()->SetRecoverRequired();
  }
  manager->GetAllocator()->Free(data);
  return result;
}

}
