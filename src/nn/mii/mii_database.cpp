#include "nn/mii/mii_database.hpp"

#include "nn/diag/diag_abort.hpp"
#include "nn/mii/mii_color.hpp"

namespace nn::mii {

namespace {

// Formatting or exporting an already formatted database is not an error.
const uint32_t ResultAlreadyFormattedValue = 0x1987e;

[[gnu::always_inline]] Result CheckFormatResult(Result result) {
  if (result.IsFailure() &&
      (result.GetInnerValueForDebug() & 0x3fffff) !=
        ResultAlreadyFormattedValue) {
    diag::detail::AbortImpl(&result);
  }
  return result;
}

[[gnu::always_inline]] Result OpenDatabaseService(
  sf::SharedPointer<detail::IDatabaseService>* pOut) {
  Result result = detail::g_ServiceProviderClient.Initialize();
  if (result.IsFailure()) {
    return result;
  }
  return detail::g_ServiceProviderClient.GetDatabaseServiceSharedPointer(
    pOut, GetSpecialMiiKeyCode());
}

}

Database::~Database() {}

Result Database::Initialize() {
  Result result = OpenDatabaseService(&service_);
  if (result.IsFailure()) {
    return result;
  }
  return service_->SetInterfaceVersion(1);
}

void Database::Finalize() {
  service_.Reset();
}

bool Database::IsAvailable() const {
  return service_ != nullptr;
}

bool Database::IsUpdated(int flag) {
  bool isUpdated = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service_->IsUpdated(sf::Out<bool>(&isUpdated), flag));
  return isUpdated;
}

bool Database::IsFullDatabase() const {
  bool isFull = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service_->IsFullDatabase(sf::Out<bool>(&isFull)));
  return isFull;
}

int Database::GetCount(int flag) const {
  int32_t count = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service_->GetCount(sf::Out<int32_t>(&count), flag));
  return count;
}

Result Database::GetIndex(int* pOutIndex, const CharInfo& info) const {
  return service_->GetIndex(sf::Out<int32_t>(pOutIndex), info);
}

Result Database::Get(int* pOutCount, CharInfoElement* pElements, int count,
  int flag) {
  return service_->Get(sf::Out<int32_t>(pOutCount),
    sf::OutArray<CharInfoElement>(pElements, count), flag);
}

Result Database::Get(int* pOutCount, CharInfo* pInfos, int count, int flag) {
  return service_->Get1(sf::Out<int32_t>(pOutCount),
    sf::OutArray<CharInfo>(pInfos, count), flag);
}

Result Database::UpdateLatest(CharInfo* pInfo, int flag) const {
  return service_->UpdateLatest(sf::Out<CharInfo>(pInfo), *pInfo, flag);
}

Result Database::Convert(CharInfo* pOut, const Ver3StoreData& data) {
  return service_->Convert(sf::Out<CharInfo>(pOut), data);
}

void Database::BuildRandom(CharInfo* pOut, const RandomDesc& desc) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(service_->BuildRandom(
    sf::Out<CharInfo>(pOut), desc.age, desc.gender, desc.race));
}

void Database::BuildDefault(CharInfo* pOut, int index) const {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service_->BuildDefault(sf::Out<CharInfo>(pOut), index));
}

Result Database::Format() {
  return CheckFormatResult(service_->Format());
}

Result Database::Import(const void* buffer, size_t size) {
  return service_->Import(sf::InBuffer(buffer, size));
}

Result Database::Export(void* buffer, size_t size) const {
  return CheckFormatResult(service_->Export(sf::OutBuffer(buffer, size)));
}

PrivateDatabase::~PrivateDatabase() {}

bool PrivateDatabase::IsBrokenDatabaseWithClearFlag() {
  sf::SharedPointer<detail::IDatabaseService> service;
  if (OpenDatabaseService(&service).IsFailure()) {
    return false;
  }
  bool isBroken = false;
  Result result =
    service->IsBrokenDatabaseWithClearFlag(sf::Out<bool>(&isBroken));
  return result.IsSuccess() & isBroken;
}

Result PrivateDatabase::Initialize() {
  Result result = OpenDatabaseService(&service_);
  if (result.IsFailure()) {
    return result;
  }
  return service_->SetInterfaceVersion(1);
}

void PrivateDatabase::Finalize() {
  service_.Reset();
}

bool PrivateDatabase::IsAvailable() const {
  return service_ != nullptr;
}

bool PrivateDatabase::IsUpdated(int flag) {
  bool isUpdated = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service_->IsUpdated(sf::Out<bool>(&isUpdated), flag));
  return isUpdated;
}

bool PrivateDatabase::IsFullDatabase() const {
  bool isFull = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service_->IsFullDatabase(sf::Out<bool>(&isFull)));
  return isFull;
}

int PrivateDatabase::GetCount(int flag) const {
  int32_t count = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service_->GetCount(sf::Out<int32_t>(&count), flag));
  return count;
}

Result PrivateDatabase::Get(int* pOutCount, StoreDataElement* pElements,
  int count, int flag) {
  return service_->Get2(sf::Out<int32_t>(pOutCount),
    sf::OutArray<StoreDataElement>(pElements, count), flag);
}

Result PrivateDatabase::Get(int* pOutCount, StoreData* pData, int count,
  int flag) {
  return service_->Get3(sf::Out<int32_t>(pOutCount),
    sf::OutArray<StoreData>(pData, count), flag);
}

Result PrivateDatabase::UpdateLatest(StoreData* pData, int flag) const {
  return service_->UpdateLatest1(sf::Out<StoreData>(pData), *pData, flag);
}

int PrivateDatabase::FindIndex(const CreateId& id,
  bool isEnabledSpecialMii) const {
  int32_t index = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(service_->FindIndex(
    sf::Out<int32_t>(&index), id, isEnabledSpecialMii));
  return index;
}

Result PrivateDatabase::Move(int index, const CreateId& id) {
  return service_->Move(index, id);
}

Result PrivateDatabase::AddOrReplace(const StoreData& data) {
  return service_->AddOrReplace(data);
}

Result PrivateDatabase::Delete(const CreateId& id) {
  return service_->Delete(id);
}

Result PrivateDatabase::DestroyFile() {
  return service_->DestroyFile();
}

Result PrivateDatabase::DeleteFile() {
  return service_->DeleteFile();
}

Result PrivateDatabase::Format() {
  return CheckFormatResult(service_->Format());
}

Result PrivateDatabase::Import(const void* buffer, size_t size) {
  return service_->Import(sf::InBuffer(buffer, size));
}

Result PrivateDatabase::Export(void* buffer, size_t size) const {
  return CheckFormatResult(service_->Export(sf::OutBuffer(buffer, size)));
}

}
