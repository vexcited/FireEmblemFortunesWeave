#include <new>

#include "nn/nifm/detail/nifm_request_client.hpp"
#include "nn/nifm/nifm_request.hpp"

namespace nn::nifm {

namespace {

detail::RequestClient* GetClient(void* storage) {
  return static_cast<detail::RequestClient*>(storage);
}

const detail::RequestClient* GetClient(const void* storage) {
  return static_cast<const detail::RequestClient*>(storage);
}

}

Request::Request(const RequestParameters& parameters) : m_Storage() {
  new (m_Storage) detail::RequestClient(parameters.requirementPreset,
    os::EventClearMode_AutoClear);
}

Request::Request(const RequestParameters& parameters,
  os::EventClearMode clearMode) : m_Storage() {
  new (m_Storage) detail::RequestClient(parameters.requirementPreset,
    clearMode);
}

Request::~Request() {
  GetClient(m_Storage)->~RequestClient();
}

void Request::Submit() {
  GetClient(m_Storage)->Submit();
}

void Request::SubmitAndWait() {
  GetClient(m_Storage)->SubmitAndWait();
}

void Request::Cancel() {
  GetClient(m_Storage)->Cancel();
}

NetworkAccessStatus Request::GetNetworkAccessStatus() const {
  return GetClient(m_Storage)->GetNetworkAccessStatus();
}

RequestState Request::GetRequestState() const {
  return GetClient(m_Storage)->GetRequestState();
}

Result Request::GetResult() {
  return GetClient(m_Storage)->GetResult();
}

RequestHandle Request::GetHandle() {
  return RequestHandle{m_Storage};
}

os::SystemEvent& Request::GetSystemEvent() {
  return GetClient(m_Storage)->GetSystemEvent();
}

TemporaryNetworkProfile::TemporaryNetworkProfile(
  const NetworkProfileDataV2& networkProfile) {
  new (m_Storage) detail::TemporaryNetworkProfileClient(networkProfile);
}

TemporaryNetworkProfile::~TemporaryNetworkProfile() {
  static_cast<detail::TemporaryNetworkProfileClient*>(
    static_cast<void*>(m_Storage))->~TemporaryNetworkProfileClient();
}

const util::Uuid& TemporaryNetworkProfile::GetId() const {
  return static_cast<const detail::TemporaryNetworkProfileClient*>(
    static_cast<const void*>(m_Storage))->GetId();
}

Result TemporaryNetworkProfile::Update(
  const NetworkProfileDataV2& networkProfile) {
  return static_cast<detail::TemporaryNetworkProfileClient*>(
    static_cast<void*>(m_Storage))->Update(networkProfile);
}

NetworkProfileHandle TemporaryNetworkProfile::GetHandle() {
  return NetworkProfileHandle{m_Storage};
}

}
