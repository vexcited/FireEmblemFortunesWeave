#include "nn/bcat/bcat_api.hpp"
#include "nn/bcat/detail/bcat_ipc.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::bcat {

DeliveryTaskSuspension::DeliveryTaskSuspension()
  : m_Service(nullptr), m_Event() {}

DeliveryTaskSuspension::~DeliveryTaskSuspension() {
  Detach();
}

void DeliveryTaskSuspension::Detach() {
  if (m_Service != nullptr) {
    m_Service->Release();
    m_Service = nullptr;
  }
}

void DeliveryTaskSuspension::Resume() {
  // Releasing the suspension service ends the suspension.
  if (m_Service != nullptr) {
    m_Service->Release();
    m_Service = nullptr;
  }
}

os::SystemEvent* DeliveryTaskSuspension::GetEvent() {
  return &m_Event;
}

void DeliveryTaskSuspension::Attach(
  ipc::IDeliveryTaskSuspensionService* service) {
  m_Service = service;

  sf::NativeHandle handle;
  NN_ABORT_UNLESS_RESULT_SUCCESS(m_Service->GetSystemEvent(sf::Out(&handle)));
  m_Event.AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
    os::EventClearMode_ManualClear);
  handle.Detach();
}

}
