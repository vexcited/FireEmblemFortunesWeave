#include "nn/bcat/bcat_api.hpp"
#include "nn/bcat/bcat_result.hpp"
#include "nn/bcat/detail/bcat_shim.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/fs/fs_save_data_management.hpp"
#include "nn/fs/fs_save_data_types.hpp"
#include "nn/nifm/nifm_types.hpp"
#include "nn/util/string_util.hpp"

namespace nn::nifm {

ClientId GetClientId();
bool IsAnyInternetRequestAccepted(ClientId clientId);

}

namespace nn::bcat {

namespace {

constexpr int PassphraseLengthMax = 64;

shim::ShimLibraryGlobal& GetShimLibraryGlobal() {
  return shim::ShimLibraryGlobal::GetInstance();
}

}

void Initialize() {
  GetShimLibraryGlobal().Initialize();
}

Result MountDeliveryCacheStorage() {
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result,
    GetShimLibraryGlobal().MountDeliveryCacheStorage(), "");
  return shim::HandleIpcError(result);
}

void UnmountDeliveryCacheStorage() {
  NN_BCAT_DETAIL_ACCESS_LOG_APPLICATION_VOID(
    GetShimLibraryGlobal().UnmountDeliveryCacheStorage(), "");
}

Result EnumerateDeliveryCacheDirectory(int* pOutCount,
  DirectoryName* pOutNames, int count) {
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result,
    GetShimLibraryGlobal().EnumerateDeliveryCacheDirectory(pOutCount,
      pOutNames, count), "");
  return shim::HandleIpcError(result);
}

Result RequestSyncDeliveryCache(DeliveryCacheProgress* pOutProgress) {
  NN_ABORT_UNLESS(!GetShimLibraryGlobal().IsDeliveryCacheStorageMounted());
  if (!nifm::IsAnyInternetRequestAccepted(nifm::GetClientId())) {
    return ResultInternetRequestNotAccepted();
  }

  sf::SharedPointer<ipc::IDeliveryCacheProgressService> service;
  const Result result = shim::HandleIpcError(
    GetShimLibraryGlobal().GetSession()->RequestSyncDeliveryCache(
      sf::Out(&service)));
  if (result.IsSuccess()) {
    pOutProgress->Attach(service.Detach());
  }
  return result;
}

Result RequestSyncDeliveryCache(DeliveryCacheProgress* pOutProgress,
  const char* directoryName) {
  DirectoryName name;
  const int length = util::Strlcpy(name.value, directoryName,
    static_cast<int>(sizeof(name.value)));
  if (length < 0 || length >= static_cast<int>(sizeof(name.value))) {
    return ResultInvalidArgument();
  }
  if (!name.IsValid()) {
    return ResultInvalidArgument();
  }

  NN_ABORT_UNLESS(!GetShimLibraryGlobal().IsDeliveryCacheStorageMounted());
  if (!nifm::IsAnyInternetRequestAccepted(nifm::GetClientId())) {
    return ResultInternetRequestNotAccepted();
  }

  sf::SharedPointer<ipc::IDeliveryCacheProgressService> service;
  const Result result = shim::HandleIpcError(
    GetShimLibraryGlobal().GetSession()
      ->RequestSyncDeliveryCacheWithDirectoryName(sf::Out(&service), name));
  if (result.IsSuccess()) {
    pOutProgress->Attach(service.Detach());
  }
  return result;
}

void CancelSyncDeliveryCacheRequest() {
  NN_ABORT_UNLESS(!GetShimLibraryGlobal().IsDeliveryCacheStorageMounted());
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetShimLibraryGlobal().GetSession()->CancelSyncDeliveryCacheRequest());
}

Result DeleteDeliveryCacheStorage(ApplicationId applicationId) {
  ipc::IBcatService* session = GetShimLibraryGlobal().GetSession();
  NN_RESULT_DO(
    shim::HandleIpcError(session->BlockDeliveryTask(applicationId)));

  const Result result = [&]() -> Result {
    fs::SaveDataFilter filter;
    filter.useProgramId = true;
    filter.useSaveDataType = true;
    filter.useUserId = false;
    filter.useSaveDataId = false;
    filter.useIndex = false;
    filter.rank = fs::SaveDataRank::Primary;
    filter.attribute = {};
    filter.attribute.programId.value = applicationId.value;
    filter.attribute.type = fs::SaveDataType::Bcat;

    fs::SaveDataInfo info = {};
    const Result findResult = fs::FindSaveDataWithFilter(&info,
      fs::SaveDataSpaceId::User, filter);
    if (findResult.IsFailure()) {
      if (fs::IsResultIncluded(findResult, fs::ResultTargetNotFound())) {
        return ResultStorageNotFound();
      }
      return findResult;
    }

    NN_RESULT_DO(fs::DeleteSaveData(fs::SaveDataSpaceId::User,
      info.saveDataId));
    return shim::HandleIpcError(
      session->UnregisterDeliveryTask(applicationId));
  }();

  NN_ABORT_UNLESS_RESULT_SUCCESS(session->UnblockDeliveryTask(applicationId));
  return result;
}

Result SetPassphrase(ApplicationId applicationId, const char* passphrase) {
  const int length = util::Strnlen(passphrase, PassphraseLengthMax + 1);
  return shim::HandleIpcError(GetShimLibraryGlobal().GetSession()
    ->SetPassphrase(applicationId, sf::InArray<char>(passphrase,
      static_cast<uint32_t>(length + 1))));
}

Result RegisterDeliveryTask(ApplicationId applicationId, uint32_t version) {
  return shim::HandleIpcError(GetShimLibraryGlobal().GetSession()
    ->RegisterDeliveryTask(applicationId, version));
}

Result UnregisterDeliveryTask(ApplicationId applicationId) {
  return shim::HandleIpcError(GetShimLibraryGlobal().GetSession()
    ->UnregisterDeliveryTask(applicationId));
}

Result SetDeliveryTaskTimer(ApplicationId applicationId, int seconds,
  SelectWaitTimePolicy policy) {
  return shim::HandleIpcError(GetShimLibraryGlobal().GetSession()
    ->SetDeliveryTaskTimer(applicationId, seconds, policy));
}

Result RegisterSystemApplicationDeliveryTasks() {
  return shim::HandleIpcError(GetShimLibraryGlobal().GetSession()
    ->RegisterSystemApplicationDeliveryTasks());
}

Result GetDeliveryTaskList(int* pOutCount, TaskInfo* pOutInfos, int count) {
  int32_t value = 0;
  NN_RESULT_DO(shim::HandleIpcError(GetShimLibraryGlobal().GetSession()
    ->GetDeliveryTaskList(sf::Out(&value),
      sf::OutArray<TaskInfo>(pOutInfos, count))));
  *pOutCount = value;
  return Result{0};
}

Result GetDeliveryTaskListForSystem(int* pOutCount, TaskInfo* pOutInfos,
  int count) {
  int32_t value = 0;
  NN_RESULT_DO(shim::HandleIpcError(GetShimLibraryGlobal().GetSession()
    ->GetDeliveryTaskListForSystem(sf::Out(&value),
      sf::OutArray<TaskInfo>(pOutInfos, count))));
  *pOutCount = value;
  return Result{0};
}

Result BlockDeliveryTask(ApplicationId applicationId) {
  return shim::HandleIpcError(GetShimLibraryGlobal().GetSession()
    ->BlockDeliveryTask(applicationId));
}

Result UnblockDeliveryTask(ApplicationId applicationId) {
  return shim::HandleIpcError(GetShimLibraryGlobal().GetSession()
    ->UnblockDeliveryTask(applicationId));
}

Result GetDeliveryList(size_t* pOutSize, void* buffer, size_t size,
  ApplicationId applicationId) {
  uint64_t value = 0;
  NN_RESULT_DO(shim::HandleIpcError(GetShimLibraryGlobal().GetSession()
    ->GetDeliveryList(sf::Out(&value), sf::OutBuffer(buffer, size),
      applicationId)));
  *pOutSize = value;
  return Result{0};
}

Result GetDeliveryCacheStorageUsage(DeliveryCacheStorageUsage* pOutUsage,
  ApplicationId applicationId) {
  return shim::HandleIpcError(GetShimLibraryGlobal().GetSession()
    ->GetDeliveryCacheStorageUsage(sf::Out(pOutUsage), applicationId));
}

Result ClearDeliveryCacheStorage(ApplicationId applicationId) {
  return shim::HandleIpcError(GetShimLibraryGlobal().GetSession()
    ->ClearDeliveryCacheStorage(applicationId));
}

Result ClearDeliveryTaskSubscriptionStatus() {
  return shim::HandleIpcError(GetShimLibraryGlobal().GetSession()
    ->ClearDeliveryTaskSubscriptionStatus());
}

Result GetPushNotificationLog(int* pOutCount, PushNotificationLog* pOutLogs,
  int count) {
  int32_t value = 0;
  NN_RESULT_DO(shim::HandleIpcError(GetShimLibraryGlobal().GetSession()
    ->GetPushNotificationLog(sf::Out(&value),
      sf::OutArray<PushNotificationLog>(pOutLogs, count))));
  *pOutCount = value;
  return Result{0};
}

Result GetDeliveryCacheStorageUpdateNotifier(Notifier* pOutNotifier,
  ApplicationId applicationId) {
  sf::SharedPointer<ipc::INotifierService> service;
  const Result result = shim::HandleIpcError(
    GetShimLibraryGlobal().GetSession()
      ->GetDeliveryCacheStorageUpdateNotifier(sf::Out(&service),
        applicationId));
  if (result.IsSuccess()) {
    pOutNotifier->Attach(service.Detach());
  }
  return result;
}

Result RequestSuspendDeliveryTask(DeliveryTaskSuspension* pOutSuspension,
  ApplicationId applicationId) {
  sf::SharedPointer<ipc::IDeliveryTaskSuspensionService> service;
  const Result result = shim::HandleIpcError(
    GetShimLibraryGlobal().GetSession()->RequestSuspendDeliveryTask(
      sf::Out(&service), applicationId));
  if (result.IsSuccess()) {
    pOutSuspension->Attach(service.Detach());
  }
  return result;
}

Result MountDeliveryCacheStorage(ApplicationId applicationId) {
  return shim::HandleIpcError(
    GetShimLibraryGlobal().MountDeliveryCacheStorage(applicationId));
}

Result RequestSyncDeliveryCache(DeliveryCacheProgress* pOutProgress,
  ApplicationId applicationId, uint32_t version) {
  NN_ABORT_UNLESS(!GetShimLibraryGlobal().IsDeliveryCacheStorageMounted());
  if (!nifm::IsAnyInternetRequestAccepted(nifm::GetClientId())) {
    return ResultInternetRequestNotAccepted();
  }

  sf::SharedPointer<ipc::IDeliveryCacheProgressService> service;
  const Result result = shim::HandleIpcError(
    GetShimLibraryGlobal().GetSession()
      ->RequestSyncDeliveryCacheWithApplicationId(sf::Out(&service),
        applicationId, version));
  if (result.IsSuccess()) {
    pOutProgress->Attach(service.Detach());
  }
  return result;
}

Result RequestSyncDeliveryCache(DeliveryCacheProgress* pOutProgress,
  ApplicationId applicationId, uint32_t version, const char* directoryName) {
  DirectoryName name;
  const int length = util::Strlcpy(name.value, directoryName,
    static_cast<int>(sizeof(name.value)));
  if (length < 0 || length >= static_cast<int>(sizeof(name.value))) {
    return ResultInvalidArgument();
  }
  if (!name.IsValid()) {
    return ResultInvalidArgument();
  }

  NN_ABORT_UNLESS(!GetShimLibraryGlobal().IsDeliveryCacheStorageMounted());
  if (!nifm::IsAnyInternetRequestAccepted(nifm::GetClientId())) {
    return ResultInternetRequestNotAccepted();
  }

  sf::SharedPointer<ipc::IDeliveryCacheProgressService> service;
  const Result result = shim::HandleIpcError(
    GetShimLibraryGlobal().GetSession()
      ->RequestSyncDeliveryCacheWithApplicationIdAndDirectoryName(
        sf::Out(&service), applicationId, version, name));
  if (result.IsSuccess()) {
    pOutProgress->Attach(service.Detach());
  }
  return result;
}

Result RegisterSystemApplicationDeliveryTask(ApplicationId applicationId) {
  return shim::HandleIpcError(GetShimLibraryGlobal().GetSession()
    ->RegisterSystemApplicationDeliveryTask(applicationId));
}

Result UnregisterSystemApplicationDeliveryTask(ApplicationId applicationId) {
  return shim::HandleIpcError(GetShimLibraryGlobal().GetSession()
    ->UnregisterSystemApplicationDeliveryTask(applicationId));
}

Result SetSystemApplicationDeliveryTaskTimer(ApplicationId applicationId,
  int seconds, SelectWaitTimePolicy policy) {
  return shim::HandleIpcError(GetShimLibraryGlobal().GetSession()
    ->SetSystemApplicationDeliveryTaskTimer(applicationId, seconds, policy));
}

Result StopBackgroundService() {
  return shim::HandleIpcError(
    GetShimLibraryGlobal().GetSession()->StopBackgroundService());
}

}
