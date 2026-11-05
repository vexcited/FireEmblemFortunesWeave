#pragma once

#include <stdint.h>

#include "nn/result.hpp"

namespace nn::bcat {

struct DirectoryName {
  char value[32];

  bool IsValid() const;
};

struct FileName {
  char value[32];

  bool IsValid() const;
};

struct Digest {
  uint8_t value[16];
};

struct DeliveryCacheDirectoryEntry {
  FileName name;
  int64_t size;
  Digest digest;
};

struct TaskInfo;
struct PushNotificationLog;
struct DeliveryCacheStorageUsage;

enum SelectWaitTimePolicy : int32_t {};

enum DeliveryCacheProgressStatus : int32_t {
  DeliveryCacheProgressStatus_None = 0,
  DeliveryCacheProgressStatus_Queued = 1,
  DeliveryCacheProgressStatus_Connect = 2,
  DeliveryCacheProgressStatus_ProcessList = 3,
  DeliveryCacheProgressStatus_Download = 4,
  DeliveryCacheProgressStatus_Commit = 5,
  DeliveryCacheProgressStatus_Done = 9
};

struct DeliveryCacheProgressImpl {
  DeliveryCacheProgressStatus status;
  Result result;
  DirectoryName currentDirectoryName;
  FileName currentFileName;
  int64_t currentDownloaded;
  int64_t currentTotal;
  int64_t wholeDownloaded;
  int64_t wholeTotal;
  uint8_t reserved[408];

  void Clear();
  void NotifyStartConnect();
  void NotifyStartProcessList();
  void SetWholeDownloadSize(int64_t size);
  void SetDownloadProgress(int64_t downloaded,
    const DirectoryName& directoryName);
  void NotifyStartDownloadFile(const DirectoryName& directoryName,
    const FileName& fileName, int64_t size);
  bool UpdateDownloadFileProgress(int64_t downloaded);
  void NotifyStartCommitDirectory(const DirectoryName& directoryName);
  void NotifyDone(Result result);
};

static_assert(sizeof(DeliveryCacheProgressImpl) == 512);

}
