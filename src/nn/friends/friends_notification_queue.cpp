#include "nn/diag/diag_abort.hpp"
#include "nn/friends/friends_async_context.hpp"
#include "nn/friends/friends_types.hpp"

namespace nn::friends {

namespace {

const Result ResultNotInitialized = {0x279};

}

NotificationQueue::NotificationQueue()
  : m_Mutex(true), m_Uid(), m_Service(nullptr) {}

NotificationQueue::~NotificationQueue() {
  Finalize();
}

[[gnu::noinline]] Result NotificationQueue::Initialize(
  const account::Uid& uid) {
  NN_RESULT_DO(detail::CheckUserStatus(uid));
  m_Mutex.Lock();
  detail::ipc::INotificationService* service = nullptr;
  Result result = detail::ShimLibraryGlobal::GetInstance()
    .CreateNotificationService(&service, uid);
  if (result.IsSuccess()) {
    sf::NativeHandle handle;
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      service->GetEvent(sf::Out<sf::NativeHandle>(&handle)));
    m_Event.AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
      os::EventClearMode(0));
    handle.Detach();
    m_Uid = uid;
    m_Service = service;
  }
  m_Mutex.Unlock();
  return result;
}

Result NotificationQueue::Initialize() {
  return Initialize(detail::GetCurrentUser());
}

void NotificationQueue::Finalize() {
  m_Mutex.Lock();
  m_Uid = account::Uid();
  if (m_Service != nullptr) {
    m_Service->Release();
    m_Service = nullptr;
    os::DestroySystemEvent(m_Event.GetBase());
  }
  m_Mutex.Unlock();
}

const account::Uid& NotificationQueue::GetUid() const {
  m_Mutex.Lock();
  m_Mutex.Unlock();
  return m_Uid;
}

os::SystemEvent* NotificationQueue::GetSystemEvent() {
  m_Mutex.Lock();
  os::SystemEvent* pEvent = m_Service != nullptr ? &m_Event : nullptr;
  m_Mutex.Unlock();
  return pEvent;
}

Result NotificationQueue::Clear() {
  m_Mutex.Lock();
  Result result;
  if (m_Service != nullptr) {
    result = m_Service->Clear();
  }
  else {
    result = ResultNotInitialized;
  }
  m_Mutex.Unlock();
  return result;
}

Result NotificationQueue::Pop(NotificationInfo* pOutInfo) {
  m_Mutex.Lock();
  Result result;
  if (m_Service != nullptr) {
    NotificationInfo info = {};
    result = m_Service->Pop(sf::Out<NotificationInfo>(&info));
    if (result.IsSuccess()) {
      *pOutInfo = info;
    }
  }
  else {
    result = ResultNotInitialized;
  }
  m_Mutex.Unlock();
  return result;
}

}
