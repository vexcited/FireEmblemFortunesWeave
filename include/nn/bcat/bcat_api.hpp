#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/bcat/bcat_types.hpp"
#include "nn/ncm/ncm_ids.hpp"
#include "nn/os/mutex.hpp"
#include "nn/os/system_event_class.hpp"
#include "nn/result.hpp"

namespace nn::bcat {

namespace ipc {

class IDeliveryCacheProgressService;
class INotifierService;
class IDeliveryTaskSuspensionService;
class IDeliveryCacheFileService;
class IDeliveryCacheDirectoryService;

}

class DeliveryCacheProgress {
 public:
  DeliveryCacheProgress();
  ~DeliveryCacheProgress();

  void Attach(ipc::IDeliveryCacheProgressService* service);
  void Detach();
  void Update();
  DeliveryCacheProgressStatus GetStatus() const;
  DirectoryName GetCurrentDirectoryName() const;
  FileName GetCurrentFileName() const;
  int64_t GetCurrentDownloaded() const;
  int64_t GetCurrentTotal() const;
  int64_t GetWholeDownloaded() const;
  int64_t GetWholeTotal() const;
  Result GetResult() const;

 private:
  mutable os::Mutex m_Mutex;
  ipc::IDeliveryCacheProgressService* m_Service;
  os::SystemEvent m_Event;
  DeliveryCacheProgressImpl m_Impl;
};

class Notifier {
 public:
  Notifier();
  ~Notifier();

  void Attach(ipc::INotifierService* service);
  os::SystemEvent* GetEvent();

 private:
  ipc::INotifierService* m_Service;
  os::SystemEvent m_Event;
};

class DeliveryTaskSuspension {
 public:
  DeliveryTaskSuspension();
  ~DeliveryTaskSuspension();

  void Attach(ipc::IDeliveryTaskSuspensionService* service);
  void Detach();
  void Resume();
  os::SystemEvent* GetEvent();

 private:
  ipc::IDeliveryTaskSuspensionService* m_Service;
  os::SystemEvent m_Event;
};

class DeliveryCacheDirectory {
 public:
  DeliveryCacheDirectory();
  DeliveryCacheDirectory(DeliveryCacheDirectory&& other);
  ~DeliveryCacheDirectory();

  DeliveryCacheDirectory& operator=(DeliveryCacheDirectory&& other);

  Result Open(const char* path);
  Result Open(const DirectoryName& directoryName);
  void Close();
  Result Read(int* pOutCount, DeliveryCacheDirectoryEntry* pOutEntries,
    int count);
  int GetCount();

 private:
  ipc::IDeliveryCacheDirectoryService* m_Service;
};

class DeliveryCacheFile {
 public:
  DeliveryCacheFile();
  DeliveryCacheFile(DeliveryCacheFile&& other);
  ~DeliveryCacheFile();

  DeliveryCacheFile& operator=(DeliveryCacheFile&& other);

  Result Open(const char* path);
  Result Open(const DirectoryName& directoryName, const FileName& fileName);
  void Close();
  Result Read(size_t* pOutSize, int64_t offset, void* buffer, size_t size);
  int64_t GetSize();
  Digest GetDigest();

 private:
  ipc::IDeliveryCacheFileService* m_Service;
};

void Initialize();
Result MountDeliveryCacheStorage();
Result MountDeliveryCacheStorage(ApplicationId applicationId);
void UnmountDeliveryCacheStorage();
Result EnumerateDeliveryCacheDirectory(int* pOutCount,
  DirectoryName* pOutNames, int count);
Result RequestSyncDeliveryCache(DeliveryCacheProgress* pOutProgress);
Result RequestSyncDeliveryCache(DeliveryCacheProgress* pOutProgress,
  const char* directoryName);
Result RequestSyncDeliveryCache(DeliveryCacheProgress* pOutProgress,
  ApplicationId applicationId, uint32_t version);
Result RequestSyncDeliveryCache(DeliveryCacheProgress* pOutProgress,
  ApplicationId applicationId, uint32_t version, const char* directoryName);
void CancelSyncDeliveryCacheRequest();
Result DeleteDeliveryCacheStorage(ApplicationId applicationId);
Result SetPassphrase(ApplicationId applicationId, const char* passphrase);
Result RegisterDeliveryTask(ApplicationId applicationId, uint32_t version);
Result UnregisterDeliveryTask(ApplicationId applicationId);
Result SetDeliveryTaskTimer(ApplicationId applicationId, int seconds,
  SelectWaitTimePolicy policy);
Result RegisterSystemApplicationDeliveryTasks();
Result GetDeliveryTaskList(int* pOutCount, TaskInfo* pOutInfos, int count);
Result GetDeliveryTaskListForSystem(int* pOutCount, TaskInfo* pOutInfos,
  int count);
Result BlockDeliveryTask(ApplicationId applicationId);
Result UnblockDeliveryTask(ApplicationId applicationId);
Result GetDeliveryList(size_t* pOutSize, void* buffer, size_t size,
  ApplicationId applicationId);
Result GetDeliveryCacheStorageUsage(DeliveryCacheStorageUsage* pOutUsage,
  ApplicationId applicationId);
Result ClearDeliveryCacheStorage(ApplicationId applicationId);
Result ClearDeliveryTaskSubscriptionStatus();
Result GetPushNotificationLog(int* pOutCount, PushNotificationLog* pOutLogs,
  int count);
Result GetDeliveryCacheStorageUpdateNotifier(Notifier* pOutNotifier,
  ApplicationId applicationId);
Result RequestSuspendDeliveryTask(DeliveryTaskSuspension* pOutSuspension,
  ApplicationId applicationId);
Result RegisterSystemApplicationDeliveryTask(ApplicationId applicationId);
Result UnregisterSystemApplicationDeliveryTask(ApplicationId applicationId);
Result SetSystemApplicationDeliveryTaskTimer(ApplicationId applicationId,
  int seconds, SelectWaitTimePolicy policy);
Result StopBackgroundService();

}
