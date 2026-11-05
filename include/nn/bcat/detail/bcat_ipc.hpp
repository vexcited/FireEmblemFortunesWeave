#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/bcat/bcat_types.hpp"
#include "nn/ncm/ncm_ids.hpp"
#include "nn/os/process_id.hpp"
#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::bcat::ipc {

class IDeliveryCacheProgressService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetEvent(sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result GetImpl(sf::Out<DeliveryCacheProgressImpl> pOutImpl) = 0;
};

class INotifierService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetSystemEvent(sf::Out<sf::NativeHandle> pOutHandle) = 0;
};

class IDeliveryTaskSuspensionService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetSystemEvent(sf::Out<sf::NativeHandle> pOutHandle) = 0;
};

class IDeliveryCacheFileService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result Open(const DirectoryName& directoryName,
    const FileName& fileName) = 0;
  virtual Result Read(sf::Out<uint64_t> pOutSize, int64_t offset,
    const sf::OutBuffer& buffer) = 0;
  virtual Result GetSize(sf::Out<int64_t> pOutSize) = 0;
  virtual Result GetDigest(sf::Out<Digest> pOutDigest) = 0;
};

class IDeliveryCacheDirectoryService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result Open(const DirectoryName& directoryName) = 0;
  virtual Result Read(sf::Out<int32_t> pOutCount,
    const sf::OutArray<DeliveryCacheDirectoryEntry>& entries) = 0;
  virtual Result GetCount(sf::Out<int32_t> pOutCount) = 0;
};

class IDeliveryCacheStorageService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result CreateFileService(
    const sf::Out<sf::SharedPointer<IDeliveryCacheFileService>>&
      pOutService) = 0;
  virtual Result CreateDirectoryService(
    const sf::Out<sf::SharedPointer<IDeliveryCacheDirectoryService>>&
      pOutService) = 0;
  virtual Result EnumerateDeliveryCacheDirectory(sf::Out<int32_t> pOutCount,
    const sf::OutArray<DirectoryName>& names) = 0;
};

class IBcatService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result RequestSyncDeliveryCache(
    const sf::Out<sf::SharedPointer<IDeliveryCacheProgressService>>&
      pOutService) = 0;
  virtual Result RequestSyncDeliveryCacheWithDirectoryName(
    const sf::Out<sf::SharedPointer<IDeliveryCacheProgressService>>&
      pOutService, const DirectoryName& directoryName) = 0;
  virtual Result CancelSyncDeliveryCacheRequest() = 0;
  virtual Result RequestSyncDeliveryCacheWithApplicationId(
    const sf::Out<sf::SharedPointer<IDeliveryCacheProgressService>>&
      pOutService, ApplicationId applicationId, uint32_t version) = 0;
  virtual Result RequestSyncDeliveryCacheWithApplicationIdAndDirectoryName(
    const sf::Out<sf::SharedPointer<IDeliveryCacheProgressService>>&
      pOutService, ApplicationId applicationId, uint32_t version,
    const DirectoryName& directoryName) = 0;
  virtual Result GetDeliveryCacheStorageUpdateNotifier(
    const sf::Out<sf::SharedPointer<INotifierService>>& pOutService,
    ApplicationId applicationId) = 0;
  virtual Result RequestSuspendDeliveryTask(
    const sf::Out<sf::SharedPointer<IDeliveryTaskSuspensionService>>&
      pOutService, ApplicationId applicationId) = 0;
  virtual Result RegisterSystemApplicationDeliveryTask(
    ApplicationId applicationId) = 0;
  virtual Result UnregisterSystemApplicationDeliveryTask(
    ApplicationId applicationId) = 0;
  virtual Result SetSystemApplicationDeliveryTaskTimer(
    ApplicationId applicationId, int32_t seconds,
    SelectWaitTimePolicy policy) = 0;
  virtual Result StopBackgroundService() = 0;
  virtual Result SetPassphrase(ApplicationId applicationId,
    const sf::InArray<char>& passphrase) = 0;
  virtual Result RegisterDeliveryTask(ApplicationId applicationId,
    uint32_t version) = 0;
  virtual Result UnregisterDeliveryTask(ApplicationId applicationId) = 0;
  virtual Result BlockDeliveryTask(ApplicationId applicationId) = 0;
  virtual Result UnblockDeliveryTask(ApplicationId applicationId) = 0;
  virtual Result SetDeliveryTaskTimer(ApplicationId applicationId,
    int32_t seconds, SelectWaitTimePolicy policy) = 0;
  virtual Result RegisterSystemApplicationDeliveryTasks() = 0;
  virtual Result GetDeliveryTaskList(sf::Out<int32_t> pOutCount,
    const sf::OutArray<TaskInfo>& infos) = 0;
  virtual Result GetDeliveryTaskListForSystem(sf::Out<int32_t> pOutCount,
    const sf::OutArray<TaskInfo>& infos) = 0;
  virtual Result GetDeliveryList(sf::Out<uint64_t> pOutSize,
    const sf::OutBuffer& buffer, ApplicationId applicationId) = 0;
  virtual Result ClearDeliveryCacheStorage(ApplicationId applicationId) = 0;
  virtual Result ClearDeliveryTaskSubscriptionStatus() = 0;
  virtual Result GetPushNotificationLog(sf::Out<int32_t> pOutCount,
    const sf::OutArray<PushNotificationLog>& logs) = 0;
  virtual Result GetDeliveryCacheStorageUsage(
    sf::Out<DeliveryCacheStorageUsage> pOutUsage,
    ApplicationId applicationId) = 0;
};

class IServiceCreator : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result CreateBcatService(
    const sf::Out<sf::SharedPointer<IBcatService>>& pOutService,
    os::ProcessId processId) = 0;
  virtual Result CreateDeliveryCacheStorageService(
    const sf::Out<sf::SharedPointer<IDeliveryCacheStorageService>>&
      pOutService, os::ProcessId processId) = 0;
  virtual Result CreateDeliveryCacheStorageServiceWithApplicationId(
    const sf::Out<sf::SharedPointer<IDeliveryCacheStorageService>>&
      pOutService, ApplicationId applicationId) = 0;
};

void Initialize();
void Finalize();
Result CreateBcatService(IBcatService** pOutService);
Result CreateDeliveryCacheStorageService(
  IDeliveryCacheStorageService** pOutService);
Result CreateDeliveryCacheStorageService(
  IDeliveryCacheStorageService** pOutService, ApplicationId applicationId);

}
