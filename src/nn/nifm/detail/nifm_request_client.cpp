#include "nn/applet/applet_api.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/nifm/detail/nifm_request_client.hpp"

namespace {

struct NnmuslFileDescriptor {
  uint16_t type;
  uint16_t native;
};

constexpr uint16_t NnmuslFileDescriptorType_Socket = 4;

}

// Unexported nnmusl table lookup at 0xaf3d0, it packs the descriptor type
// and the native socket of an nnmusl file descriptor.
extern "C" NnmuslFileDescriptor nnmuslLookupFileDescriptor(int fd);

namespace nn::nifm::detail {

namespace {

constexpr Result ResultLibraryAppletArgumentBroken = {0x2586e};

int ToNativeSocket(int socket) {
  NnmuslFileDescriptor descriptor = nnmuslLookupFileDescriptor(socket);
  return descriptor.type == NnmuslFileDescriptorType_Socket ?
    descriptor.native : -1;
}

}

RequestClient::RequestClient(RequirementPreset preset,
  os::EventClearMode clearMode)
  : m_Request(), m_Mutex(), m_State(RequestState_Invalid),
    m_Result(ResultNotSubmitted) {
  ::nn::sf::SharedPointer<IGeneralService> service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetGeneralServicePointer(&service));

  ::nn::sf::SharedPointer<IRequest> request;
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->CreateRequest(
    ::nn::sf::Out<::nn::sf::SharedPointer<IRequest>>(&request), preset));

  ::nn::sf::NativeHandle updateHandle;
  ::nn::sf::NativeHandle userHandle;
  NN_ABORT_UNLESS_RESULT_SUCCESS(request->GetSystemEventReadableHandles(
    ::nn::sf::Out<::nn::sf::NativeHandle>(&updateHandle),
    ::nn::sf::Out<::nn::sf::NativeHandle>(&userHandle)));

  m_UpdateEvent.AttachReadableHandle(updateHandle.GetOsHandle(),
    updateHandle.IsManaged(), os::EventClearMode_AutoClear);
  updateHandle.Detach();
  m_SystemEvent.AttachReadableHandle(userHandle.GetOsHandle(),
    userHandle.IsManaged(), clearMode);
  userHandle.Detach();

  m_Request = request;
  m_State = RequestState_Free;
}

RequestClient::~RequestClient() {}

void RequestClient::UpdateInternalState() const {
  if (!m_Request) {
    m_State = RequestState_Invalid;
    m_Result = ResultNotInitialized;
    return;
  }

  int32_t state = 0;
  Result result = m_Request->GetRequestState(
    ::nn::sf::Out<int32_t>(&state));
  m_State = result.IsSuccess() ? static_cast<RequestState>(state) :
    RequestState_Invalid;
  m_Result = m_Request->GetResult();
}

RequestState RequestClient::GetRequestState() const {
  m_Mutex.Lock();
  if (const_cast<os::SystemEvent&>(m_UpdateEvent).TryWait()) {
    const_cast<os::SystemEvent&>(m_UpdateEvent).Clear();
    UpdateInternalState();
  }
  RequestState state = m_State;
  m_Mutex.Unlock();
  return state;
}

void RequestClient::Submit() {
  m_Mutex.Lock();
  switch (GetRequestState()) {
    case RequestState_Free:
    case RequestState_OnHold:
    case RequestState_Accepted:
    case RequestState_Rejected:
      NN_ABORT_UNLESS_RESULT_SUCCESS(m_Request->Submit());
      UpdateInternalState();
      break;
    default:
      break;
  }
  m_Mutex.Unlock();
}

void RequestClient::SubmitAndWait() {
  Submit();
  while (GetRequestState() == RequestState_OnHold) {
    if (m_UpdateEvent.TimedWait(TimeSpan{10000000000})) {
      m_Mutex.Lock();
      m_UpdateEvent.Clear();
      UpdateInternalState();
      m_Mutex.Unlock();
      break;
    }
  }
}

void RequestClient::Cancel() {
  m_Mutex.Lock();
  NN_ABORT_UNLESS_RESULT_SUCCESS(m_Request->Cancel());
  m_Mutex.Unlock();
}

Result RequestClient::GetResult() {
  m_Mutex.Lock();
  if (m_UpdateEvent.TryWait()) {
    m_UpdateEvent.Clear();
    UpdateInternalState();
  }
  Result result = m_Result;
  m_Mutex.Unlock();
  return result;
}

NetworkAccessStatus RequestClient::GetNetworkAccessStatus() const {
  NetworkAccessInfo info = {};
  Result result = m_Request->GetNetworkAccessStatus(
    ::nn::sf::Out<NetworkAccessInfo>(&info));
  return result.IsSuccess() ? static_cast<NetworkAccessStatus>(info.status) :
    NetworkAccessStatus{};
}

os::SystemEvent& RequestClient::GetSystemEvent() {
  return m_SystemEvent;
}

Result RequestClient::GetAdditionalInfo(AdditionalInfo* pOutInfo,
  uint32_t* pOutRevision) {
  return m_Request->GetAdditionalInfo(
    ::nn::sf::Out<AdditionalInfo>(pOutInfo),
    ::nn::sf::Out<uint32_t>(pOutRevision));
}

Result RequestClient::SetRequirement(const Requirement& requirement) {
  return m_Request->SetRequirement(requirement);
}

Result RequestClient::GetRequirement(Requirement* pOutRequirement) const {
  return m_Request->GetRequirement(
    ::nn::sf::Out<Requirement>(pOutRequirement));
}

Result RequestClient::GetSubmitId(uint32_t* pOutSubmitId) const {
  return m_Request->GetRevision(::nn::sf::Out<uint32_t>(pOutSubmitId));
}

Result RequestClient::SetRequirementPreset(RequirementPreset preset) {
  return m_Request->SetRequirementPreset(preset);
}

Result RequestClient::SetRequirementBySubmitId(uint32_t submitId) {
  return m_Request->SetRequirementByRevision(submitId);
}

Result RequestClient::SetPriority(uint8_t priority) {
  return m_Request->SetPriority(priority);
}

Result RequestClient::SetRawPriority(uint8_t priority) {
  return m_Request->SetRawPriority(priority);
}

Result RequestClient::SetNetworkProfileId(util::Uuid id) {
  return m_Request->SetNetworkProfileId(id);
}

Result RequestClient::SetRejectable(bool isRejectable) {
  return m_Request->SetRejectable(isRejectable);
}

Result RequestClient::SetConnectionConfirmationOption(
  ConnectionConfirmationOption option) {
  if (option > ConnectionConfirmationOption_Forced) {
    return ResultOutOfRange;
  }
  return m_Request->SetConnectionConfirmationOption(option);
}

Result RequestClient::SetPersistent(bool isPersistent) {
  return m_Request->SetPersistent(isPersistent);
}

Result RequestClient::SetInstant(bool isInstant) {
  return m_Request->SetInstant(isInstant);
}

Result RequestClient::SetSustainable(bool isSustainable) {
  return m_Request->SetSustainable(isSustainable, 0);
}

Result RequestClient::SetGreedy(bool isGreedy) {
  return m_Request->SetGreedy(isGreedy);
}

Result RequestClient::SetSharable(bool isSharable) {
  return m_Request->SetSharable(isSharable);
}

Result RequestClient::SetKeptInSleep(bool isKeptInSleep) {
  return m_Request->SetKeptInSleep(isKeptInSleep);
}

Result RequestClient::RegisterSocketDescriptor(int socket) {
  return m_Request->RegisterSocketDescriptor(ToNativeSocket(socket));
}

Result RequestClient::UnregisterSocketDescriptor(int socket) {
  return m_Request->UnregisterSocketDescriptor(ToNativeSocket(socket));
}

Result RequestClient::PrepareLibraryApplet(
  applet::LibraryAppletHandle* pOutHandle) {
  uint32_t appletId = 0;
  uint32_t mode = 0;
  uint32_t size = 0;
  uint8_t buffer[0x1000] = {};
  ::nn::sf::OutBuffer outBuffer(buffer, sizeof(buffer));
  NN_RESULT_DO(m_Request->GetAppletInfo(::nn::sf::Out<uint32_t>(&appletId),
    ::nn::sf::Out<uint32_t>(&mode), ::nn::sf::Out<uint32_t>(&size),
    outBuffer, applet::GetExpectedThemeColorForSystem()));

  applet::StorageHandle storage = {};
  NN_RESULT_DO(applet::CreateLibraryApplet(pOutHandle,
    static_cast<applet::AppletId>(appletId),
    static_cast<applet::LibraryAppletMode>(mode)));

  // The argument is a sequence of storages, each led by its 32 bit size and
  // terminated by a size of 0xffffffff.
  const uint8_t* current = buffer;
  size_t remaining = size;
  while (remaining >= sizeof(uint32_t)) {
    uint32_t length = *reinterpret_cast<const uint32_t*>(current);
    current += sizeof(uint32_t);
    remaining -= sizeof(uint32_t);
    if (length == 0xffffffff) {
      return Result{};
    }
    if (remaining <= length) {
      return ResultLibraryAppletArgumentBroken;
    }

    Result result = applet::CreateStorage(&storage, length);
    if (result.IsSuccess()) {
      result = applet::WriteToStorage(storage, 0, current, length);
    }
    if (result.IsFailure()) {
      if (storage._p != nullptr) {
        applet::ReleaseStorage(storage);
        if (pOutHandle->_p != nullptr) {
          applet::CloseLibraryApplet(*pOutHandle);
          pOutHandle->_p = nullptr;
        }
      }
      return result;
    }

    applet::PushToInChannel(*pOutHandle, storage);
    storage = {};
    remaining -= length;
    current += length;
  }
  return ResultInvalidArgument;
}

Result RequestClient::GetLibaryAppletArgument(applet::AppletId* pOutAppletId,
  applet::LibraryAppletMode* pOutMode, size_t* pOutSize, void* buffer,
  size_t bufferSize) {
  uint32_t appletId = 0;
  uint32_t mode = 0;
  uint32_t size = 0;
  ::nn::sf::OutBuffer outBuffer(buffer, bufferSize);
  NN_RESULT_DO(m_Request->GetAppletInfo(::nn::sf::Out<uint32_t>(&appletId),
    ::nn::sf::Out<uint32_t>(&mode), ::nn::sf::Out<uint32_t>(&size),
    outBuffer, applet::GetExpectedThemeColorForSystem()));
  *pOutAppletId = static_cast<applet::AppletId>(appletId);
  *pOutMode = static_cast<applet::LibraryAppletMode>(mode);
  *pOutSize = size;
  return Result{};
}

applet::AppletId RequestClient::GetLibraryAppletId() {
  uint32_t appletId = 0;
  uint32_t mode = 0;
  uint32_t size = 0;
  uint8_t buffer[0x1000] = {};
  ::nn::sf::OutBuffer outBuffer(buffer, sizeof(buffer));
  Result result = m_Request->GetAppletInfo(
    ::nn::sf::Out<uint32_t>(&appletId), ::nn::sf::Out<uint32_t>(&mode),
    ::nn::sf::Out<uint32_t>(&size), outBuffer,
    applet::GetExpectedThemeColorForSystem());
  return static_cast<applet::AppletId>(result.IsSuccess() ? appletId : 0);
}

ScanRequestClient::ScanRequestClient(os::EventClearMode clearMode)
  : m_ScanRequest() {
  ::nn::sf::SharedPointer<IGeneralService> service;
  if (GetGeneralServicePointer(&service).IsFailure()) {
    return;
  }

  ::nn::sf::SharedPointer<IScanRequest> scanRequest;
  if (service->CreateScanRequest(
    ::nn::sf::Out<::nn::sf::SharedPointer<IScanRequest>>(&scanRequest))
    .IsFailure()) {
    return;
  }

  ::nn::sf::NativeHandle handle;
  if (scanRequest->GetSystemEventReadableHandle(
    ::nn::sf::Out<::nn::sf::NativeHandle>(&handle)).IsFailure()) {
    return;
  }

  m_SystemEvent.AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
    clearMode);
  handle.Detach();
  m_ScanRequest = scanRequest;
}

ScanRequestClient::~ScanRequestClient() {}

void ScanRequestClient::Submit() {
  if (!m_ScanRequest) {
    return;
  }
  m_SystemEvent.Clear();
  NN_ABORT_UNLESS_RESULT_SUCCESS(m_ScanRequest->Submit());
}

bool ScanRequestClient::IsProcessing() {
  if (!m_ScanRequest) {
    return false;
  }
  bool isProcessing = false;
  return m_ScanRequest->IsProcessing(::nn::sf::Out<bool>(&isProcessing))
    .IsSuccess() && isProcessing;
}

Result ScanRequestClient::GetResult() {
  if (!m_ScanRequest) {
    return ResultNotInitialized;
  }
  return m_ScanRequest->GetResult();
}

os::SystemEvent& ScanRequestClient::GetSystemEvent() {
  return m_SystemEvent;
}

Result ScanRequestClient::SetChannels(const int16_t* channels, int count) {
  if (!m_ScanRequest) {
    return ResultNotInitialized;
  }
  if (count < 0) {
    return ResultInvalidArgument;
  }
  return m_ScanRequest->SetChannels(
    ::nn::sf::InArray<int16_t>(channels, static_cast<uint32_t>(count)));
}

TemporaryNetworkProfileClient::TemporaryNetworkProfileClient(
  const NetworkProfileDataV2& networkProfile)
  : m_NetworkProfile(), m_Id() {
  ::nn::sf::SharedPointer<IGeneralService> service;
  if (GetGeneralServicePointer(&service).IsFailure()) {
    return;
  }

  sf::NetworkProfileDataV2 data = {};
  ConvertNetworkProfileDataToSfFromNifm(&data, networkProfile);
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->CreateTemporaryNetworkProfile(
    ::nn::sf::Out<::nn::sf::SharedPointer<INetworkProfile>>(
      &m_NetworkProfile),
    ::nn::sf::Out<util::Uuid>(&m_Id), data));
}

TemporaryNetworkProfileClient::~TemporaryNetworkProfileClient() {}

const util::Uuid& TemporaryNetworkProfileClient::GetId() const {
  return m_Id;
}

Result TemporaryNetworkProfileClient::Update(
  const NetworkProfileDataV2& networkProfile) {
  sf::NetworkProfileDataV2 data = {};
  ConvertNetworkProfileDataToSfFromNifm(&data, networkProfile);
  return m_NetworkProfile->Update(::nn::sf::Out<util::Uuid>(&m_Id), data);
}

Result TemporaryNetworkProfileClient::Persist() {
  util::Uuid id = {};
  Result result = m_NetworkProfile->Persist(::nn::sf::Out<util::Uuid>(&id));
  if (result.IsSuccess()) {
    m_Id = id;
  }
  return result;
}

}
