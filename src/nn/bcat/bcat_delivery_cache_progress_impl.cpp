#include <string.h>

#include "nn/bcat/bcat_types.hpp"

namespace nn::bcat {

void DeliveryCacheProgressImpl::Clear() {
  // The service clears 508 bytes, the last word of the reserved area stays.
  memset(this, 0, 508);
}

void DeliveryCacheProgressImpl::NotifyStartConnect() {
  status = DeliveryCacheProgressStatus_Connect;
}

void DeliveryCacheProgressImpl::NotifyStartProcessList() {
  status = DeliveryCacheProgressStatus_ProcessList;
}

void DeliveryCacheProgressImpl::SetWholeDownloadSize(int64_t size) {
  wholeTotal = size;
}

void DeliveryCacheProgressImpl::SetDownloadProgress(int64_t downloaded,
  const DirectoryName& directoryName) {
  wholeDownloaded = downloaded;
  currentDirectoryName = directoryName;
}

void DeliveryCacheProgressImpl::NotifyStartDownloadFile(
  const DirectoryName& directoryName, const FileName& fileName,
  int64_t size) {
  wholeDownloaded += currentDownloaded;
  status = DeliveryCacheProgressStatus_Download;
  currentDirectoryName = directoryName;
  currentFileName = fileName;
  currentDownloaded = 0;
  currentTotal = size;
}

bool DeliveryCacheProgressImpl::UpdateDownloadFileProgress(
  int64_t downloaded) {
  if (currentDownloaded < downloaded) {
    currentDownloaded = downloaded;
    return true;
  }
  return false;
}

void DeliveryCacheProgressImpl::NotifyStartCommitDirectory(
  const DirectoryName& directoryName) {
  wholeDownloaded += currentDownloaded;
  status = DeliveryCacheProgressStatus_Commit;
  currentDirectoryName = directoryName;
  currentFileName.value[0] = '\0';
  currentDownloaded = 0;
  currentTotal = 0;
}

void DeliveryCacheProgressImpl::NotifyDone(Result doneResult) {
  status = DeliveryCacheProgressStatus_Done;
  result = doneResult;
}

}
