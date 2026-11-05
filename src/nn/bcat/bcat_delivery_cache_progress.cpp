#include "nn/bcat/bcat_api.hpp"
#include "nn/bcat/detail/bcat_ipc.hpp"
#include "nn/bcat/detail/bcat_shim.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::bcat {

DeliveryCacheProgress::DeliveryCacheProgress()
  : m_Mutex(true), m_Service(nullptr), m_Event(), m_Impl() {}

DeliveryCacheProgress::~DeliveryCacheProgress() {
  Detach();
}

void DeliveryCacheProgress::Detach() {
  if (m_Service != nullptr) {
    m_Service->Release();
    m_Service = nullptr;
    os::DestroySystemEvent(m_Event.GetBase());
  }
}

void DeliveryCacheProgress::Update() {
  m_Mutex.Lock();
  if (m_Service != nullptr && m_Event.TryWait()) {
    m_Event.Clear();
    NN_ABORT_UNLESS_RESULT_SUCCESS(m_Service->GetImpl(sf::Out(&m_Impl)));
  }
  m_Mutex.Unlock();
}

DeliveryCacheProgressStatus DeliveryCacheProgress::GetStatus() const {
  m_Mutex.Lock();
  const DeliveryCacheProgressStatus status = m_Impl.status;
  m_Mutex.Unlock();
  return status;
}

DirectoryName DeliveryCacheProgress::GetCurrentDirectoryName() const {
  m_Mutex.Lock();
  const DirectoryName name = m_Impl.currentDirectoryName;
  m_Mutex.Unlock();
  return name;
}

FileName DeliveryCacheProgress::GetCurrentFileName() const {
  m_Mutex.Lock();
  const FileName name = m_Impl.currentFileName;
  m_Mutex.Unlock();
  return name;
}

int64_t DeliveryCacheProgress::GetCurrentDownloaded() const {
  m_Mutex.Lock();
  const int64_t downloaded = m_Impl.currentDownloaded;
  m_Mutex.Unlock();
  return downloaded;
}

int64_t DeliveryCacheProgress::GetCurrentTotal() const {
  m_Mutex.Lock();
  const int64_t total = m_Impl.currentTotal;
  m_Mutex.Unlock();
  return total;
}

int64_t DeliveryCacheProgress::GetWholeDownloaded() const {
  m_Mutex.Lock();
  const int64_t downloaded =
    m_Impl.wholeDownloaded + m_Impl.currentDownloaded;
  m_Mutex.Unlock();
  return downloaded;
}

int64_t DeliveryCacheProgress::GetWholeTotal() const {
  m_Mutex.Lock();
  const int64_t total = m_Impl.wholeTotal;
  m_Mutex.Unlock();
  return total;
}

Result DeliveryCacheProgress::GetResult() const {
  m_Mutex.Lock();
  const Result result = shim::HandleIpcError(m_Impl.result);
  m_Mutex.Unlock();
  return result;
}

void DeliveryCacheProgress::Attach(
  ipc::IDeliveryCacheProgressService* service) {
  m_Mutex.Lock();
  Detach();

  sf::NativeHandle handle;
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->GetEvent(sf::Out(&handle)));
  m_Event.AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
    os::EventClearMode_ManualClear);
  handle.Detach();

  NN_ABORT_UNLESS_RESULT_SUCCESS(service->GetImpl(sf::Out(&m_Impl)));
  m_Service = service;
  m_Mutex.Unlock();
}

}
