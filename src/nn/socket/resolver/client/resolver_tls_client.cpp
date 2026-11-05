#include <string.h>

#include "nn/socket/detail/socket_api.hpp"
#include "nn/socket/resolver/serializer/dns_serializer.hpp"
#include "nn/socket/socket_types.hpp"

namespace nn::socket::resolver::tls {

Result Initialize();
Result Finalize();
Result GetClientTLS(void*& pOutData);
Result SetClientTLS(void (*destructor)(void*), void* pData);

}

namespace nn::socket::resolver::tls::Client {

namespace {

constexpr Result ResultSetClientTlsFailed = {0x81b};
constexpr Result ResultOutOfMemory = {0x1003};

struct ClientData {
  int hostErrno;
  HostEnt* pCurrentHostent;
  hostent* pCurrentHostentOld;
  char* pHErrorString;
  char* pGaiErrorString;
};

int g_FallbackHostErrno = -1;

[[gnu::noinline]] void ClearClientData(ClientData* pData) {
  if (pData->pCurrentHostent != nullptr) {
    serializer::FreeHostentContents(*pData->pCurrentHostent);
    detail::Free(pData->pCurrentHostent);
    pData->pCurrentHostent = nullptr;
  }
  if (pData->pCurrentHostentOld != nullptr) {
    serializer::FreeHostentContents(*pData->pCurrentHostentOld);
    detail::Free(pData->pCurrentHostentOld);
    pData->pCurrentHostentOld = nullptr;
  }
  if (pData->pHErrorString != nullptr) {
    detail::Free(pData->pHErrorString);
    pData->pHErrorString = nullptr;
  }
  if (pData->pGaiErrorString != nullptr) {
    detail::Free(pData->pGaiErrorString);
    pData->pGaiErrorString = nullptr;
  }
}

void DestroyClientData(void* pData) {
  if (pData == nullptr) {
    return;
  }
  ClearClientData(static_cast<ClientData*>(pData));
  detail::Free(pData);
}

[[gnu::noinline]] Result GetClientData(ClientData** ppOutData) {
  *ppOutData = nullptr;
  void*& pData = reinterpret_cast<void*&>(*ppOutData);
  if (GetClientTLS(pData).IsSuccess() && *ppOutData != nullptr) {
    return Result{0};
  }
  const Result result = tls::Initialize();
  if (result.IsFailure()) {
    return result;
  }
  ClientData* pNew = static_cast<ClientData*>(detail::Alloc(
    sizeof(ClientData)));
  if (pNew == nullptr) {
    *ppOutData = nullptr;
    return ResultOutOfMemory;
  }
  *pNew = {};
  *ppOutData = pNew;
  if (SetClientTLS(DestroyClientData, pNew).IsSuccess()) {
    return Result{0};
  }
  if (ClientData* pData = *ppOutData) {
    ClearClientData(pData);
    detail::Free(pData);
  }
  *ppOutData = nullptr;
  return ResultSetClientTlsFailed;
}

[[gnu::always_inline]] inline char* SetString(char** ppString,
  const char* pString) {
  if (*ppString != nullptr) {
    detail::Free(*ppString);
    *ppString = nullptr;
  }
  if (pString == nullptr) {
    return nullptr;
  }
  const size_t length = strlen(pString);
  if (length == 0) {
    return nullptr;
  }
  *ppString = static_cast<char*>(detail::Alloc(length + 1));
  if (*ppString == nullptr) {
    return nullptr;
  }
  memmove(*ppString, pString, length + 1);
  return *ppString;
}

}

Result Initialize() {
  return tls::Initialize();
}

Result Finalize() {
  return tls::Finalize();
}

int* InternalHostErrno() {
  ClientData* pData = nullptr;
  const Result result = GetClientData(&pData);
  if (pData != nullptr && result.IsSuccess()) {
    return &pData->hostErrno;
  }
  return &g_FallbackHostErrno;
}

HostEnt* GetCurrentHostent() {
  ClientData* pData = nullptr;
  if (GetClientData(&pData).IsFailure() || pData == nullptr) {
    return nullptr;
  }
  return pData->pCurrentHostent;
}

hostent* GetCurrentHostentOld() {
  ClientData* pData = nullptr;
  if (GetClientData(&pData).IsFailure() || pData == nullptr) {
    return nullptr;
  }
  return pData->pCurrentHostentOld;
}

bool SetCurrentHostent(HostEnt* pHostent) {
  ClientData* pData = nullptr;
  if (GetClientData(&pData).IsFailure() || pData == nullptr) {
    return false;
  }
  if (pData->pCurrentHostent != nullptr) {
    serializer::FreeHostentContents(*pData->pCurrentHostent);
    detail::Free(pData->pCurrentHostent);
  }
  pData->pCurrentHostent = pHostent;
  return pHostent != nullptr;
}

bool SetCurrentHostentOld(hostent* pHostent) {
  ClientData* pData = nullptr;
  if (GetClientData(&pData).IsFailure() || pData == nullptr) {
    return false;
  }
  if (pData->pCurrentHostentOld != nullptr) {
    serializer::FreeHostentContents(*pData->pCurrentHostentOld);
    detail::Free(pData->pCurrentHostentOld);
  }
  pData->pCurrentHostentOld = pHostent;
  return pHostent != nullptr;
}

const char* GetCurrentHErrorString() {
  ClientData* pData = nullptr;
  if (GetClientData(&pData).IsFailure() || pData == nullptr) {
    return nullptr;
  }
  return pData->pHErrorString;
}

const char* SetCurrentHErrorString(const char* pString) {
  ClientData* pData = nullptr;
  if (GetClientData(&pData).IsFailure() || pData == nullptr) {
    return nullptr;
  }
  return SetString(&pData->pHErrorString, pString);
}

const char* GetCurrentGaiErrorString() {
  ClientData* pData = nullptr;
  if (GetClientData(&pData).IsFailure() || pData == nullptr) {
    return nullptr;
  }
  return pData->pGaiErrorString;
}

const char* SetCurrentGaiErrorString(const char* pString) {
  ClientData* pData = nullptr;
  if (GetClientData(&pData).IsFailure() || pData == nullptr) {
    return nullptr;
  }
  return SetString(&pData->pGaiErrorString, pString);
}

}
