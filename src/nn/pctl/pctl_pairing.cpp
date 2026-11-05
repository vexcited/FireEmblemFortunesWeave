#include "nn/diag/diag_abort.hpp"
#include "nn/nifm/nifm_client_id.hpp"
#include "nn/os/system_event.hpp"
#include "nn/pctl/detail/pctl_service.hpp"
#include "nn/pctl/pctl_result.hpp"
#include "nn/pctl/pctl_types.hpp"

namespace nn::pctl {

namespace {

using detail::AbortIfUnexpectResultImpl;
using detail::AsyncData;
using detail::GetServiceObjectForWatcher;

void WaitAsyncEvent(sf::NativeHandle& handle) {
  os::SystemEventType event;
  os::AttachReadableHandleToSystemEvent(&event, handle.GetOsHandle(),
    handle.IsManaged(), os::EventClearMode_ManualClear);
  handle.Detach();
  os::WaitSystemEvent(&event);
  os::DestroySystemEvent(&event);
}

}

PairingAccountInfo::PairingAccountInfo() {
  m_Info.id = 0;
}

PairingAccountInfo::~PairingAccountInfo() {
  m_Info.id = 0;
}

bool PairingAccountInfo::GetAccountState(
  PairingAccountState* pOutState) const {
  int state = 0;
  Result result = GetServiceObjectForWatcher()->GetAccountState(
    sf::Out<int>(&state), m_Info);

  if (ResultPairingAccountNotFound::Includes(result)) {
    return false;
  }

  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  *pOutState = static_cast<PairingAccountState>(state);
  return true;
}

size_t PairingAccountInfo::GetNickname(char* pOutNickname,
  size_t size) const {
  uint32_t length = 0;
  sf::OutArray<char> array(pOutNickname, size);
  Result result = GetServiceObjectForWatcher()->GetAccountNickname(
    sf::Out<uint32_t>(&length), array, m_Info);

  if (ResultPairingAccountNotFound::Includes(result)) {
    return 0;
  }

  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  return length;
}

Result PairingAccountInfo::GetMiiImage(size_t* pOutSize, void* pOutImage,
  size_t size) const {
  if (!nifm::IsAnyInternetRequestAccepted(nifm::GetClientId())) {
    return ResultInternetRequestNotAccepted::Make();
  }

  uint32_t imageSize = 0;
  sf::NativeHandle handle;
  AsyncData data = {};
  Result result = GetServiceObjectForWatcher()->GetAccountMiiImageAsync(
    sf::Out<AsyncData>(&data), sf::Out<sf::NativeHandle>(&handle),
    sf::Out<uint32_t>(&imageSize), sf::OutBuffer(pOutImage, size), m_Info);
  AbortIfUnexpectResultImpl(result);

  if (result.IsSuccess()) {
    if (handle.GetOsHandle() != 0) {
      WaitAsyncEvent(handle);
      result = GetServiceObjectForWatcher()->FinishGetAccountMiiImage(
        sf::Out<uint32_t>(&imageSize), sf::OutBuffer(pOutImage, size), data);
      AbortIfUnexpectResultImpl(result);
    }

    if (result.IsSuccess()) {
      result = Result{0};
      *pOutSize = imageSize;
    }
  }

  return result;
}

Result PairingAccountInfo::GetMiiImageContentType(size_t* pOutSize,
  char* pOutContentType, size_t size) const {
  if (!nifm::IsAnyInternetRequestAccepted(nifm::GetClientId())) {
    return ResultInternetRequestNotAccepted::Make();
  }

  uint32_t typeSize = 0;
  sf::NativeHandle handle;
  AsyncData data = {};
  Result result =
    GetServiceObjectForWatcher()->GetAccountMiiImageContentTypeAsync(
      sf::Out<AsyncData>(&data), sf::Out<sf::NativeHandle>(&handle),
      sf::Out<uint32_t>(&typeSize),
      sf::OutArray<char>(pOutContentType, size), m_Info);
  AbortIfUnexpectResultImpl(result);

  if (result.IsSuccess()) {
    if (handle.GetOsHandle() != 0) {
      WaitAsyncEvent(handle);
      result =
        GetServiceObjectForWatcher()->FinishGetAccountMiiImageContentType(
          sf::Out<uint32_t>(&typeSize),
          sf::OutArray<char>(pOutContentType, size), data);
      AbortIfUnexpectResultImpl(result);
    }

    if (result.IsSuccess()) {
      result = Result{0};
      *pOutSize = typeSize;
    }
  }

  return result;
}

bool PairingAccountInfo::IsInstanceValid() const {
  return m_Info.id != 0;
}

PairingInfo::PairingInfo() {
  m_Info.id = 0;
}

PairingInfo::~PairingInfo() {
  m_Info.id = 0;
}

bool PairingInfo::GetAccountInfo(PairingAccountInfo* pOutInfo) const {
  Result result = GetServiceObjectForWatcher()->GetPairingAccountInfo(
    sf::Out<detail::PairingAccountInfoBase>(&pOutInfo->m_Info), m_Info);
  AbortIfUnexpectResultImpl(result);
  return true;
}

PairingState PairingInfo::GetState() const {
  return static_cast<PairingState>(m_Info.state);
}

bool PairingInfo::IsInstanceValid() const {
  return m_Info.id != 0;
}

}
