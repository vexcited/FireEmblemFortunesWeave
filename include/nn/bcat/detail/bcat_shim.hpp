#pragma once

#include "nn/bcat/detail/bcat_ipc.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/os/synchronization.hpp"

namespace nn::bcat::shim {

class ShimLibraryGlobal {
 public:
  ShimLibraryGlobal();

  void Initialize();
  void CreateIpcSession();
  ipc::IBcatService* GetSession();
  Result MountDeliveryCacheStorage();
  Result MountDeliveryCacheStorage(ApplicationId applicationId);
  void UnmountDeliveryCacheStorage();
  bool IsDeliveryCacheStorageMounted();
  Result CreateFileService(ipc::IDeliveryCacheFileService** pOutService);
  Result CreateDirectoryService(
    ipc::IDeliveryCacheDirectoryService** pOutService);
  void IncrementDeliveryCacheFileCount();
  void DecrementDeliveryCacheFileCount();
  void IncrementDeliveryCacheDirectoryCount();
  void DecrementDeliveryCacheDirectoryCount();
  Result EnumerateDeliveryCacheDirectory(int* pOutCount,
    DirectoryName* pOutNames, int count);

  static ShimLibraryGlobal& GetInstance() {
    static ShimLibraryGlobal s_Instance;
    return s_Instance;
  }

 private:
  os::SdkMutexType m_Mutex;
  ipc::IBcatService* m_Session;
  ipc::IDeliveryCacheStorageService* m_Storage;
  int m_FileCount;
  int m_DirectoryCount;
};

Result HandleIpcError(Result result);

}

#define NN_BCAT_DETAIL_ACCESS_LOG(result, handle, expression, ...) \
  do { \
    if (::nn::fs::detail::IsEnabledAccessLog() && \
      ::nn::fs::detail::IsEnabledHandleAccessLog( \
        ::nn::fs::detail::IdentifyAccessLogHandle::MakeValue(handle))) { \
      const ::nn::os::Tick bcatStart_ = ::nn::os::GetSystemTick(); \
      result = (expression); \
      const ::nn::os::Tick bcatEnd_ = ::nn::os::GetSystemTick(); \
      ::nn::fs::detail::OutputAccessLog(result, bcatStart_, bcatEnd_, \
        __FUNCTION__, \
        ::nn::fs::detail::IdentifyAccessLogHandle::MakeValue(handle), \
        __VA_ARGS__); \
    } \
    else { \
      result = (expression); \
    } \
  } while (0)

#define NN_BCAT_DETAIL_ACCESS_LOG_VOID(handle, statement, ...) \
  do { \
    if (::nn::fs::detail::IsEnabledAccessLog() && \
      ::nn::fs::detail::IsEnabledHandleAccessLog( \
        ::nn::fs::detail::IdentifyAccessLogHandle::MakeValue(handle))) { \
      const ::nn::os::Tick bcatStart_ = ::nn::os::GetSystemTick(); \
      statement; \
      const ::nn::os::Tick bcatEnd_ = ::nn::os::GetSystemTick(); \
      ::nn::fs::detail::OutputAccessLog(::nn::Result{0}, bcatStart_, \
        bcatEnd_, __FUNCTION__, \
        ::nn::fs::detail::IdentifyAccessLogHandle::MakeValue(handle), \
        __VA_ARGS__); \
    } \
    else { \
      statement; \
    } \
  } while (0)

#define NN_BCAT_DETAIL_ACCESS_LOG_APPLICATION_VOID(statement, ...) \
  do { \
    if (::nn::fs::detail::IsEnabledAccessLog() && \
      ::nn::fs::detail::IsEnabledHandleAccessLog( \
        static_cast<const void*>(nullptr))) { \
      const ::nn::os::Tick bcatStart_ = ::nn::os::GetSystemTick(); \
      statement; \
      const ::nn::os::Tick bcatEnd_ = ::nn::os::GetSystemTick(); \
      ::nn::fs::detail::OutputAccessLog(::nn::Result{0}, bcatStart_, \
        bcatEnd_, __FUNCTION__, static_cast<const void*>(nullptr), \
        __VA_ARGS__); \
    } \
    else { \
      statement; \
    } \
  } while (0)
