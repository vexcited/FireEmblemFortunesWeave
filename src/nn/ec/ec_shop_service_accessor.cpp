#include "nn/diag/diag_abort.hpp"
#include "nn/ec/detail/ec_shop_service_access_server.hpp"
#include "nn/err/err_types.hpp"
#include "nn/os/system_event_class.hpp"

namespace nn::ec {

namespace {

constexpr Result ResultNotAttached = {0x190a4};
constexpr Result ResultShopServiceError = {0x1b8a4};
constexpr Result ResultShopServiceUnavailable = {0x1cca4};
constexpr Result ResultBufferTooSmall = {0x192a4};
constexpr uint32_t ResultNimShopServiceErrorInner = 0xb5a89;
constexpr err::ErrorCode UnavailableErrorCode = {0x905, 0x606};

Result ResolveShopServiceError(nim::detail::IShopServiceAsync* async) {
  if (async == nullptr) {
    return ResultShopServiceError;
  }

  err::ErrorCode code = {};
  Result result = async->GetErrorCode(&code);
  if (code.category == UnavailableErrorCode.category
    && code.number == UnavailableErrorCode.number && result.IsSuccess()) {
    return ResultShopServiceUnavailable;
  }
  return ResultShopServiceError;
}

Result QuerySize(nim::detail::IShopServiceAsync* async, size_t* size) {
  if (async == nullptr) {
    return ResultNotAttached;
  }

  uint64_t value = 0;
  Result result =
    detail::ShopServiceAccessServer::ToResult(async->GetSize(&value));
  if (result.IsFailure()) {
    *size = 0;
    if (result.GetInnerValueForDebug() == ResultNimShopServiceErrorInner) {
      return ResolveShopServiceError(async);
    }
    return result;
  }

  *size = value;
  return result;
}

Result ReadData(nim::detail::IShopServiceAsync* async, void* buffer,
  size_t size) {
  if (async == nullptr) {
    return ResultNotAttached;
  }

  uint64_t readSize = 0;
  Result result = detail::ShopServiceAccessServer::ToResult(
    async->Read(&readSize, 0, sf::OutBuffer(buffer, size)));
  if (result.IsFailure()
    && result.GetInnerValueForDebug() == ResultNimShopServiceErrorInner) {
    return ResolveShopServiceError(async);
  }
  return result;
}

}

ShopServiceAccessor::ShopServiceAccessor()
  : m_Node(), m_pInterface(nullptr), m_Responses() {}

ShopServiceAccessor::~ShopServiceAccessor() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(Finalize());
}

Result ShopServiceAccessor::Finalize() {
  m_Mutex.Lock();
  nim::detail::IShopServiceAccessor* pInterface = m_pInterface;
  if (pInterface == nullptr) {
    m_Mutex.Unlock();
    return Result{0};
  }

  while (!m_Responses.empty()) {
    m_Responses.front().Detach();
  }
  pInterface->Release();
  m_pInterface = nullptr;
  m_Mutex.Unlock();

  detail::ShopServiceAccessServer::ProxyStore::GetInstance().m_pProxy->Detach(
    this);
  return Result{0};
}

Result ShopServiceAccessor::Initialize(const ShopService& service) {
  detail::ShopServiceAccessServer::Proxy* proxy =
    detail::ShopServiceAccessServer::ProxyStore::GetInstance().m_pProxy;
  m_Mutex.Lock();

  sf::SharedPointer<nim::detail::IShopServiceAccessor> accessor;
  uint8_t type = service.type;
  Result result = detail::ShopServiceAccessServer::ToResult(
    proxy->CreateAccessorInterface(&accessor, type));
  if (result.IsFailure()) {
    accessor.Reset();
    m_Mutex.Unlock();
    return result;
  }

  m_pInterface = accessor.Detach();
  m_Mutex.Unlock();
  proxy->Attach(this);
  return result;
}

bool ShopServiceAccessor::IsAvailable() const {
  m_Mutex.Lock();
  bool isAvailable = m_pInterface != nullptr;
  m_Mutex.Unlock();
  return isAvailable;
}

void ShopServiceAccessor::Attach(AsyncResponse* response) {
  LinkResponse(response);
}

void ShopServiceAccessor::Detach(AsyncResponse* response) {
  UnlinkResponse(response);
}

ShopServiceAccessor::AsyncResponse::AsyncResponse()
  : m_pAccessor(nullptr), m_pAsync(nullptr) {
  m_Event.state = 0;
}

ShopServiceAccessor::AsyncResponse::~AsyncResponse() {
  Detach();
  if (m_Event.state != 0) {
    os::DestroySystemEvent(&m_Event);
  }
}

void ShopServiceAccessor::AsyncResponse::Finalize() {
  Detach();
}

void ShopServiceAccessor::AsyncResponse::Attach(
  ShopServiceAccessor* accessor, nim::detail::IShopServiceAsync* async,
  const sf::NativeHandle& handle
) {
  Detach();
  NN_ABORT_UNLESS(m_Event.state == 0);
  os::AttachReadableHandleToSystemEvent(
    &m_Event, handle.GetOsHandle(), handle.IsManaged(),
    os::EventClearMode_ManualClear);
  m_pAsync = async;
  accessor->LinkResponse(this);
  m_pAccessor = accessor;
}

void ShopServiceAccessor::AsyncResponse::Detach() {
  nim::detail::IShopServiceAsync* async = m_pAsync;
  if (async != nullptr) {
    async->Cancel();
    os::WaitSystemEvent(&m_Event);
    if (m_Event.state != 0) {
      os::DestroySystemEvent(&m_Event);
    }
    m_Event.state = 0;
    async->Release();
    m_pAsync = nullptr;
  }

  if (m_pAccessor != nullptr) {
    m_pAccessor->UnlinkResponse(this);
  }
  m_pAccessor = nullptr;
}

Result ShopServiceAccessor::AsyncResponse::GetSizeImpl(size_t* size) {
  return QuerySize(m_pAsync, size);
}

err::ErrorCode ShopServiceAccessor::AsyncResponse::GetErrorCode() const {
  if (m_pAsync == nullptr) {
    return {};
  }

  err::ErrorCode code = {};
  if (m_pAsync->GetErrorCode(&code).IsFailure()) {
    return {};
  }
  return code;
}

Result ShopServiceAccessor::AsyncResponse::GetSize(size_t* size) {
  if (m_pAsync == nullptr) {
    return ResultNotAttached;
  }

  os::WaitSystemEvent(&m_Event);
  return QuerySize(m_pAsync, size);
}

void ShopServiceAccessor::AsyncResponse::Wait() {
  if (m_pAsync != nullptr) {
    os::WaitSystemEvent(&m_Event);
  }
}

Result ShopServiceAccessor::AsyncResponse::GetImpl(void* buffer, size_t size) {
  return ReadData(m_pAsync, buffer, size);
}

Result ShopServiceAccessor::AsyncResponse::Get(void* buffer, size_t size) {
  if (m_pAsync == nullptr) {
    return ResultNotAttached;
  }

  os::WaitSystemEvent(&m_Event);
  size_t dataSize;
  NN_RESULT_DO(QuerySize(m_pAsync, &dataSize));
  if (dataSize == 0) {
    return Result{0};
  }

  if (size < dataSize) {
    return ResultBufferTooSmall;
  }

  return ReadData(m_pAsync, buffer, size);
}

bool ShopServiceAccessor::AsyncResponse::TryWait() {
  if (m_pAsync == nullptr) {
    return true;
  }
  return os::TryWaitSystemEvent(&m_Event);
}

void ShopServiceAccessor::AsyncResponse::Cancel() {
  if (m_pAsync != nullptr) {
    m_pAsync->Cancel();
  }
}

os::SystemEvent& ShopServiceAccessor::AsyncResponse::GetEvent() {
  return reinterpret_cast<os::SystemEvent&>(m_Event);
}

}
