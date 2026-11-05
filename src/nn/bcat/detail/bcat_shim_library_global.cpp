#include "nn/bcat/bcat_result.hpp"
#include "nn/bcat/detail/bcat_shim.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/fs/fs_result.hpp"

namespace nn::bcat::shim {

ShimLibraryGlobal::ShimLibraryGlobal()
  : m_Mutex{}, m_Session(nullptr), m_Storage(nullptr), m_FileCount(0),
    m_DirectoryCount(0) {}

void ShimLibraryGlobal::Initialize() {
  m_Mutex.Lock();
  if (m_Session == nullptr) {
    CreateIpcSession();
  }
  m_Mutex.Unlock();
}

void ShimLibraryGlobal::CreateIpcSession() {
  ipc::Initialize();
  NN_ABORT_UNLESS_RESULT_SUCCESS(ipc::CreateBcatService(&m_Session));
}

ipc::IBcatService* ShimLibraryGlobal::GetSession() {
  m_Mutex.Lock();
  if (m_Session == nullptr) {
    CreateIpcSession();
  }
  ipc::IBcatService* session = m_Session;
  m_Mutex.Unlock();
  return session;
}

Result ShimLibraryGlobal::MountDeliveryCacheStorage() {
  m_Mutex.Lock();
  if (m_Session == nullptr) {
    CreateIpcSession();
  }

  Result result;
  if (m_Storage != nullptr) {
    result = ResultAlreadyMounted();
  }
  else {
    result = ipc::CreateDeliveryCacheStorageService(&m_Storage);
  }
  m_Mutex.Unlock();
  return result;
}

Result ShimLibraryGlobal::MountDeliveryCacheStorage(
  ApplicationId applicationId) {
  m_Mutex.Lock();
  if (m_Session == nullptr) {
    CreateIpcSession();
  }

  Result result;
  if (m_Storage != nullptr) {
    result = ResultAlreadyMounted();
  }
  else {
    result = ipc::CreateDeliveryCacheStorageService(&m_Storage,
      applicationId);
  }
  m_Mutex.Unlock();
  return result;
}

void ShimLibraryGlobal::UnmountDeliveryCacheStorage() {
  m_Mutex.Lock();
  NN_ABORT_UNLESS_NOT_NULL(m_Storage);
  NN_ABORT_UNLESS(m_FileCount == 0);
  NN_ABORT_UNLESS(m_DirectoryCount == 0);
  m_Storage->Release();
  m_Storage = nullptr;
  m_Mutex.Unlock();
}

bool ShimLibraryGlobal::IsDeliveryCacheStorageMounted() {
  m_Mutex.Lock();
  const bool isMounted = m_Storage != nullptr;
  m_Mutex.Unlock();
  return isMounted;
}

Result ShimLibraryGlobal::CreateFileService(
  ipc::IDeliveryCacheFileService** pOutService) {
  m_Mutex.Lock();
  Result result;
  if (m_Storage != nullptr) {
    sf::SharedPointer<ipc::IDeliveryCacheFileService> service;
    result = m_Storage->CreateFileService(sf::Out(&service));
    if (result.IsSuccess()) {
      *pOutService = service.Detach();
    }
  }
  else {
    result = ResultNotMounted();
  }
  m_Mutex.Unlock();
  return result;
}

Result ShimLibraryGlobal::CreateDirectoryService(
  ipc::IDeliveryCacheDirectoryService** pOutService) {
  m_Mutex.Lock();
  Result result;
  if (m_Storage != nullptr) {
    sf::SharedPointer<ipc::IDeliveryCacheDirectoryService> service;
    result = m_Storage->CreateDirectoryService(sf::Out(&service));
    if (result.IsSuccess()) {
      *pOutService = service.Detach();
    }
  }
  else {
    result = ResultNotMounted();
  }
  m_Mutex.Unlock();
  return result;
}

void ShimLibraryGlobal::IncrementDeliveryCacheFileCount() {
  m_Mutex.Lock();
  m_FileCount++;
  m_Mutex.Unlock();
}

void ShimLibraryGlobal::DecrementDeliveryCacheFileCount() {
  m_Mutex.Lock();
  m_FileCount--;
  m_Mutex.Unlock();
}

void ShimLibraryGlobal::IncrementDeliveryCacheDirectoryCount() {
  m_Mutex.Lock();
  m_DirectoryCount++;
  m_Mutex.Unlock();
}

void ShimLibraryGlobal::DecrementDeliveryCacheDirectoryCount() {
  m_Mutex.Lock();
  m_DirectoryCount--;
  m_Mutex.Unlock();
}

Result ShimLibraryGlobal::EnumerateDeliveryCacheDirectory(int* pOutCount,
  DirectoryName* pOutNames, int count) {
  m_Mutex.Lock();
  NN_ABORT_UNLESS_NOT_NULL(m_Storage);

  int32_t value = 0;
  const Result result = m_Storage->EnumerateDeliveryCacheDirectory(
    sf::Out(&value), sf::OutArray<DirectoryName>(pOutNames, count));
  if (result.IsSuccess()) {
    *pOutCount = value;
  }
  m_Mutex.Unlock();
  return result;
}

}

namespace nn::bcat::shim {

Result HandleIpcError(Result result) {
  // A corrupted delivery cache storage is fatal for the application.
  if (fs::IsResultDataCorrupted(result)) {
    diag::detail::AbortImpl(&result);
  }
  return result;
}

}
