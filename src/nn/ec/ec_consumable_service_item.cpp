#include "nn/ec/ec_consumable_service_item.hpp"

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

}

bool ConsumableServiceItemId::IsValid() const {
  return value[0] != '\0';
}

ConsumableServiceItemId
ConsumableServiceItemRightData::GetConsumableServiceItemId() const {
  return itemId;
}

bool ConsumableServiceItemRightData::IsServiceProvidableOnLocal() const {
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

Result ConsumableServiceItemAsyncRequestBase::Wait() {
  return m_Response.Wait();
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

void* ConsumableServiceItemManager::GetAllocator() {
  return m_Allocator;
}

size_t GetRequiredBufferSizeToSerializeConsumableServiceItemRightData(
  const ConsumableServiceItemRightData*, int count) {
  return SerializedHeaderSize +
    static_cast<size_t>(count) * sizeof(ConsumableServiceItemRightData);
}

}
