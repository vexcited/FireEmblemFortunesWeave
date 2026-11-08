#include "nn/diag/diag_abort.hpp"
#include "nn/ncm/ncm_ids.hpp"
#include "nn/prepo/detail/prepo_shim_library_global.hpp"

namespace nn::prepo {

enum TransmissionStatus : int32_t {};

namespace {

detail::ipc::IPrepoService* GetSession() {
  return detail::ShimLibraryGlobal::GetInstance().GetSession();
}

}

void Initialize() {
  detail::ShimLibraryGlobal::GetInstance().Initialize();
}

Result GetTransmissionStatus(TransmissionStatus* pOutStatus) {
  int32_t status = 0;
  const Result result =
    GetSession()->GetTransmissionStatus(sf::Out<int32_t>(&status));
  if (result.IsSuccess()) {
    *pOutStatus = static_cast<TransmissionStatus>(status);
  }
  return result;
}

// Both settings are ignored by this version.
void SetApplicationInfo(ApplicationId /* applicationId */,
  uint16_t /* version */) {}

void SetNplnServiceAccountToken(const char* /* pToken */) {}

Result IsUserAgreementCheckEnabled(bool* pOutIsEnabled) {
  return GetSession()->IsUserAgreementCheckEnabled(
    sf::Out<bool>(pOutIsEnabled));
}

Result SetUserAgreementCheckEnabled(bool isEnabled) {
  return GetSession()->SetUserAgreementCheckEnabled(isEnabled);
}

Result ClearStorage() {
  return GetSession()->ClearStorage();
}

Result ClearStatistics() {
  return GetSession()->ClearStatistics();
}

Result GetStorageUsage(int64_t* pOutUsage, int64_t* pOutCapacity) {
  return GetSession()->GetStorageUsage(
    sf::Out<int64_t>(pOutUsage), sf::Out<int64_t>(pOutCapacity));
}

void GetStatistics(Statistics* pOutStatistics) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSession()->GetStatistics(sf::Out<Statistics>(pOutStatistics)));
}

void GetThroughputHistory(
  int* pOutCount, ThroughputRecord* pOutRecords, int count) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetSession()->GetThroughputHistory(
    sf::Out<int32_t>(pOutCount),
    sf::OutArray<ThroughputRecord>(pOutRecords, count)));
}

Result GetLastUploadError() {
  return GetSession()->GetLastUploadError();
}

void GetApplicationUploadSummary(uint64_t* pOutCount, uint64_t* pOutSize) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetSession()->GetApplicationUploadSummary(
    sf::Out<uint64_t>(pOutCount), sf::Out<uint64_t>(pOutSize)));
}

Result ReadAllReportFiles(size_t* pOutSize, void* buffer, size_t size) {
  uint64_t readSize = 0;
  NN_RESULT_DO(GetSession()->ReadAllReportFiles(
    sf::Out<uint64_t>(&readSize), sf::OutBuffer(buffer, size)));
  *pOutSize = readSize;
  return Result{0};
}

Result ReadAllApplicationReportFiles(
  size_t* pOutSize, void* buffer, size_t size) {
  uint64_t readSize = 0;
  NN_RESULT_DO(GetSession()->ReadAllApplicationReportFiles(
    sf::Out<uint64_t>(&readSize), sf::OutBuffer(buffer, size)));
  *pOutSize = readSize;
  return Result{0};
}

void SetOperationMode(int64_t mode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetSession()->SetOperationMode(mode));
}

}
