#include <stddef.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/nsd/detail/nsd_manager.hpp"
#include "nn/oe/oe_server_environment_type.hpp"

namespace nn::nsd {

namespace detail::ipc {

Result GetSettingUrl(Url* pOutUrl);
Result GetSettingName(SettingName* pOutName);
Result GetEnvironmentIdentifier(EnvironmentIdentifier* pOutIdentifier);
Result DeleteSettings(DeleteMode mode);
Result ImportSettings(const void* pData, size_t dataSize, void* pWork,
  size_t workSize, ImportMode mode);
Result Resolve(Fqdn* pOutFqdn, const Fqdn& fqdn);
Result ResolveEx(Result* pOutResult, Fqdn* pOutFqdn, const Fqdn& fqdn);
Result GetNasServiceSetting(NasServiceSetting* pOutSetting,
  const NasServiceName& name);
Result GetNasServiceSettingEx(Result* pOutResult,
  NasServiceSetting* pOutSetting, const NasServiceName& name);
Result GetNasRequestFqdn(Fqdn* pOutFqdn);
Result GetNasRequestFqdnEx(Result* pOutResult, Fqdn* pOutFqdn);
Result GetNasApiFqdn(Fqdn* pOutFqdn);
Result GetNasApiFqdnEx(Result* pOutResult, Fqdn* pOutFqdn);
Result GetCurrentSetting(SaveData* pOutSaveData);
Result WriteSaveDataToFsForTest(const SaveData& saveData);
Result ReadSaveDataFromFsForTest(SaveData* pOutSaveData);
Result DeleteSaveDataOfFsForTest();
Result SetChangeEnvironmentIdentifierDisabled(bool isDisabled);
Result IsChangeEnvironmentIdentifierDisabled(bool* pOutIsDisabled);
Result WriteTestParameter(const TestParameter& parameter);
Result ReadTestParameter(TestParameter* pOutParameter);
Result SetWithoutDomainExchangeFqdns(Fqdn* pFqdns, int count);
Result GetApplicationServerEnvironmentType(
  oe::ServerEnvironmentType* pOutType);
Result SetApplicationServerEnvironmentType(oe::ServerEnvironmentType type);
Result DeleteApplicationServerEnvironmentType();

}

namespace {

bool IsResultTestParameterNotFound(Result result) {
  return result.GetInnerValueForDebug() == ((5 << 9) | 141);
}

}

oe::ServerEnvironmentType GetApplicationServerEnvironmentType() {
  oe::ServerEnvironmentType type = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::ipc::GetApplicationServerEnvironmentType(&type));
  return type;
}

void SetApplicationServerEnvironmentType(oe::ServerEnvironmentType type) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::ipc::SetApplicationServerEnvironmentType(type));
}

void DeleteApplicationServerEnvironmentType() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::ipc::DeleteApplicationServerEnvironmentType());
}

void GetSettingUrl(Url* pOutUrl) {
  NN_ABORT_UNLESS_NOT_NULL(pOutUrl);
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::ipc::GetSettingUrl(pOutUrl));
}

Result GetSettingName(SettingName* pOutName) {
  NN_ABORT_UNLESS_NOT_NULL(pOutName);
  return detail::ipc::GetSettingName(pOutName);
}

Result GetEnvironmentIdentifier(EnvironmentIdentifier* pOutIdentifier) {
  NN_ABORT_UNLESS_NOT_NULL(pOutIdentifier);
  return detail::ipc::GetEnvironmentIdentifier(pOutIdentifier);
}

Result DeleteSettings(DeleteMode mode) {
  return detail::ipc::DeleteSettings(mode);
}

Result ImportSettings(const void* pData, size_t dataSize, void* pWork,
  size_t workSize, ImportMode mode) {
  NN_ABORT_UNLESS_NOT_NULL(pData);
  NN_ABORT_UNLESS_NOT_NULL(pWork);
  NN_ABORT_UNLESS(workSize >= 0x40000);
  return detail::ipc::ImportSettings(pData, dataSize, pWork, workSize, mode);
}

void DisableChangeEnvironmentIdentifier() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::ipc::SetChangeEnvironmentIdentifierDisabled(true));
}

Result Resolve(Fqdn* pOutFqdn, const Fqdn& fqdn) {
  return detail::ipc::Resolve(pOutFqdn, fqdn);
}

Result ResolveEx(Fqdn* pOutFqdn, const Fqdn& fqdn) {
  Result result = {};
  return detail::ipc::ResolveEx(&result, pOutFqdn, fqdn);
}

void GetCurrentSaveData(SaveData* pOutSaveData) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::ipc::GetCurrentSetting(pOutSaveData));
}

Result DeleteSettingsEx(DeleteMode mode) {
  return detail::ipc::DeleteSettings(mode);
}

Result WriteSaveDataToFsForTest(const SaveData& saveData) {
  return detail::ipc::WriteSaveDataToFsForTest(saveData);
}

Result ReadSaveDataFromFsForTest(SaveData* pOutSaveData) {
  return detail::ipc::ReadSaveDataFromFsForTest(pOutSaveData);
}

Result DeleteSaveDataOfFsForTest() {
  return detail::ipc::DeleteSaveDataOfFsForTest();
}

void EnableChangeEnvironmentIdentifier() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::ipc::SetChangeEnvironmentIdentifierDisabled(false));
}

bool IsChangeEnvironmentIdentifierDisabled() {
  bool isDisabled = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::ipc::IsChangeEnvironmentIdentifierDisabled(&isDisabled));
  return isDisabled;
}

void EnableForcedGlobalServerAccess() {
  detail::TestParameter parameter = {};
  const Result result = detail::ipc::ReadTestParameter(&parameter);
  if (result.IsFailure()) {
    if (!IsResultTestParameterNotFound(result)) {
      NN_ABORT_UNLESS_RESULT_SUCCESS(result);
    }
    parameter = {};
  }
  parameter.isForcedGlobalServerAccessEnabled = true;
  parameter.isForcedGlobalServerAccessAvailable = true;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::ipc::WriteTestParameter(parameter));
}

bool IsForcedGlobalServerAccessEnabled() {
  detail::TestParameter parameter = {};
  const Result result = detail::ipc::ReadTestParameter(&parameter);
  if (result.IsFailure()) {
    if (IsResultTestParameterNotFound(result)) {
      return false;
    }
    NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  }
  return parameter.isForcedGlobalServerAccessEnabled &&
    parameter.isForcedGlobalServerAccessAvailable;
}

void SetWithoutDomainExchangeFqdns(Fqdn* pFqdns, int count) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::ipc::SetWithoutDomainExchangeFqdns(pFqdns, count));
}

Result GetNasRequestFqdn(Fqdn* pOutFqdn) {
  return detail::ipc::GetNasRequestFqdn(pOutFqdn);
}

Result GetNasRequestFqdnEx(Fqdn* pOutFqdn) {
  Result result = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::ipc::GetNasRequestFqdnEx(&result, pOutFqdn));
  return Result{0};
}

Result GetNasApiFqdn(Fqdn* pOutFqdn) {
  return detail::ipc::GetNasApiFqdn(pOutFqdn);
}

Result GetNasApiFqdnEx(Fqdn* pOutFqdn) {
  Result result = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::ipc::GetNasApiFqdnEx(&result,
    pOutFqdn));
  return Result{0};
}

Result GetNasServiceSetting(NasServiceSetting* pOutSetting,
  const NasServiceName& name) {
  return detail::ipc::GetNasServiceSetting(pOutSetting, name);
}

Result GetNasServiceSettingEx(NasServiceSetting* pOutSetting,
  const NasServiceName& name) {
  Result result = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::ipc::GetNasServiceSettingEx(&result, pOutSetting, name));
  return Result{0};
}

}
