#include <stdlib.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/friends/detail/friends_shim_library_global.hpp"

namespace nn::friends::detail {

namespace {

void* DefaultAllocate(size_t size) {
  return malloc(size);
}

void DefaultFree(void* pointer, size_t size) {
  static_cast<void>(size);
  free(pointer);
}

struct GlobalAllocator {
  AllocateFunction allocate;
  FreeFunction free;
};

os::SdkMutexType g_GlobalAllocatorMutex;
GlobalAllocator g_GlobalAllocator = {DefaultAllocate, DefaultFree};

}

void SetGlobalAllocator(AllocateFunction allocate, FreeFunction free) {
  g_GlobalAllocatorMutex.Lock();
  g_GlobalAllocator.allocate = allocate;
  g_GlobalAllocator.free = free;
  g_GlobalAllocatorMutex.Unlock();
}

void GetGlobalAllocator(AllocateFunction* pOutAllocate,
  FreeFunction* pOutFree) {
  g_GlobalAllocatorMutex.Lock();
  *pOutAllocate = g_GlobalAllocator.allocate;
  *pOutFree = g_GlobalAllocator.free;
  g_GlobalAllocatorMutex.Unlock();
}

ShimLibraryGlobal::ShimLibraryGlobal() : m_Mutex{}, m_SyncSession(nullptr) {}

void ShimLibraryGlobal::Initialize() {
  m_Mutex.Lock();
  if (m_SyncSession == nullptr) {
    CreateIpcSession();
  }
  m_Mutex.Unlock();
}

ipc::IFriendService* ShimLibraryGlobal::GetSyncSession() {
  m_Mutex.Lock();
  if (m_SyncSession == nullptr) {
    CreateIpcSession();
  }
  ipc::IFriendService* session = m_SyncSession;
  m_Mutex.Unlock();
  return session;
}

Result ShimLibraryGlobal::CreateAsyncSession(
  ipc::IFriendService** pOutSession) {
  m_Mutex.Lock();
  if (m_SyncSession == nullptr) {
    CreateIpcSession();
  }
  Result result = ipc::CreateFriendService(pOutSession);
  m_Mutex.Unlock();
  return result;
}

Result ShimLibraryGlobal::CreateNotificationService(
  ipc::INotificationService** pOutService, const account::Uid& uid) {
  m_Mutex.Lock();
  if (m_SyncSession == nullptr) {
    CreateIpcSession();
  }
  Result result = ipc::CreateNotificationService(pOutService, uid);
  m_Mutex.Unlock();
  return result;
}

Result ShimLibraryGlobal::CreateDaemonSuspendSessionService(
  ipc::IDaemonSuspendSessionService** pOutService) {
  m_Mutex.Lock();
  if (m_SyncSession == nullptr) {
    CreateIpcSession();
  }
  Result result = ipc::CreateDaemonSuspendSessionService(pOutService);
  m_Mutex.Unlock();
  return result;
}

void ShimLibraryGlobal::CreateIpcSession() {
  ipc::Initialize();
  NN_ABORT_UNLESS_RESULT_SUCCESS(ipc::CreateFriendService(&m_SyncSession));
}

}
