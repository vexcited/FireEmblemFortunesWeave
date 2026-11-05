#include <mutex>

#include "nn/diag/diag_abort.hpp"
#include "nn/nsd/detail/nsd_manager.hpp"
#include "nn/oe/oe_server_environment_type.hpp"
#include "nn/os/sdk_mutex.hpp"

namespace nn::nsd::detail::ipc {

namespace {

const Result ResultServiceUnavailable = {0xe8d};

bool g_IsInitialized;
os::SdkMutex g_Mutex;
sf::SharedPointer<IManager> g_pManager;

// The admin service is preferred, the user service is the fallback.
IManager* GetManager() {
  if (!g_IsInitialized) {
    if (GetServiceObjectByHipc(&g_pManager, ServiceType_Admin).IsFailure() &&
      GetServiceObjectByHipc(&g_pManager, ServiceType_User).IsFailure()) {
      NN_ABORT_UNLESS_RESULT_SUCCESS(ResultServiceUnavailable);
    }
    g_IsInitialized = true;
  }
  return g_pManager.Get();
}

}

Result GetSettingUrl(Url* pOutUrl) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  return GetManager()->GetSettingUrl(sf::Out<Url>(pOutUrl));
}

Result GetSettingName(SettingName* pOutName) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  return GetManager()->GetSettingName(sf::Out<SettingName>(pOutName));
}

Result GetEnvironmentIdentifier(EnvironmentIdentifier* pOutIdentifier) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  return GetManager()->GetEnvironmentIdentifier(
    sf::Out<EnvironmentIdentifier>(pOutIdentifier));
}

Result GetDeviceId(DeviceId* pOutId) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  return GetManager()->GetDeviceId(sf::Out<DeviceId>(pOutId));
}

Result DeleteSettings(DeleteMode mode) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  return GetManager()->DeleteSettings(mode);
}

Result ImportSettings(const void* pData, size_t dataSize, void* pWork,
  size_t workSize, ImportMode mode) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  return GetManager()->ImportSettings(sf::InBuffer(pData, dataSize),
    sf::OutBuffer(pWork, workSize), mode);
}

Result Resolve(Fqdn* pOutFqdn, const Fqdn& fqdn) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  return GetManager()->Resolve(sf::Out<Fqdn>(pOutFqdn), fqdn);
}

Result ResolveEx(Result* pOutResult, Fqdn* pOutFqdn, const Fqdn& fqdn) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  Result result = {};
  const Result ipcResult = GetManager()->ResolveEx(sf::Out<Result>(&result),
    sf::Out<Fqdn>(pOutFqdn), fqdn);
  *pOutResult = result;
  return ipcResult;
}

Result GetNasServiceSetting(NasServiceSetting* pOutSetting,
  const NasServiceName& name) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  return GetManager()->GetNasServiceSetting(
    sf::Out<NasServiceSetting>(pOutSetting), name);
}

Result GetNasServiceSettingEx(Result* pOutResult,
  NasServiceSetting* pOutSetting, const NasServiceName& name) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  Result result = {};
  const Result ipcResult = GetManager()->GetNasServiceSettingEx(
    sf::Out<Result>(&result), sf::Out<NasServiceSetting>(pOutSetting), name);
  *pOutResult = result;
  return ipcResult;
}

Result GetNasRequestFqdn(Fqdn* pOutFqdn) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  return GetManager()->GetNasRequestFqdn(sf::Out<Fqdn>(pOutFqdn));
}

Result GetNasRequestFqdnEx(Result* pOutResult, Fqdn* pOutFqdn) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  Result result = {};
  const Result ipcResult = GetManager()->GetNasRequestFqdnEx(
    sf::Out<Result>(&result), sf::Out<Fqdn>(pOutFqdn));
  *pOutResult = result;
  return ipcResult;
}

Result GetNasApiFqdn(Fqdn* pOutFqdn) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  return GetManager()->GetNasApiFqdn(sf::Out<Fqdn>(pOutFqdn));
}

Result GetNasApiFqdnEx(Result* pOutResult, Fqdn* pOutFqdn) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  Result result = {};
  const Result ipcResult = GetManager()->GetNasApiFqdnEx(
    sf::Out<Result>(&result), sf::Out<Fqdn>(pOutFqdn));
  *pOutResult = result;
  return ipcResult;
}

Result GetCurrentSetting(SaveData* pOutSaveData) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  return GetManager()->GetCurrentSetting(
    sf::OutBuffer(pOutSaveData, sizeof(SaveData)));
}

Result WriteSaveDataToFsForTest(const SaveData& saveData) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  return GetManager()->WriteSaveDataToFsForTest(
    sf::InBuffer(&saveData, sizeof(SaveData)));
}

Result ReadSaveDataFromFsForTest(SaveData* pOutSaveData) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  return GetManager()->ReadSaveDataFromFsForTest(
    sf::OutBuffer(pOutSaveData, sizeof(SaveData)));
}

Result DeleteSaveDataOfFsForTest() {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  return GetManager()->DeleteSaveDataOfFsForTest();
}

Result SetChangeEnvironmentIdentifierDisabled(bool isDisabled) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  return GetManager()->SetChangeEnvironmentIdentifierDisabled(isDisabled);
}

Result IsChangeEnvironmentIdentifierDisabled(bool* pOutIsDisabled) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  return GetManager()->IsChangeEnvironmentIdentifierDisabled(
    sf::Out<bool>(pOutIsDisabled));
}

Result WriteTestParameter(const TestParameter& parameter) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  return GetManager()->WriteTestParameter(
    sf::InBuffer(&parameter, sizeof(TestParameter)));
}

Result ReadTestParameter(TestParameter* pOutParameter) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  return GetManager()->ReadTestParameter(
    sf::OutBuffer(pOutParameter, sizeof(TestParameter)));
}

Result SetWithoutDomainExchangeFqdns(Fqdn* pFqdns, int count) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  return GetManager()->SetWithoutDomainExchangeFqdns(
    sf::InArray<Fqdn>(pFqdns, count));
}

Result GetApplicationServerEnvironmentType(
  oe::ServerEnvironmentType* pOutType) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  uint8_t type = 0;
  NN_RESULT_DO(GetManager()->GetApplicationServerEnvironmentType(
    sf::Out<uint8_t>(&type)));
  *pOutType = static_cast<oe::ServerEnvironmentType>(type);
  return Result{0};
}

Result SetApplicationServerEnvironmentType(oe::ServerEnvironmentType type) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  return GetManager()->SetApplicationServerEnvironmentType(
    static_cast<uint8_t>(type));
}

Result DeleteApplicationServerEnvironmentType() {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  return GetManager()->DeleteApplicationServerEnvironmentType();
}

}
