#include <stdint.h>

#include "nn/os/tls.hpp"
#include "nn/socket/detail/socket_api.hpp"

namespace nn::socket::resolver::tls {

namespace {

constexpr Result ResultTlsUnavailable = {0x7fe03};
constexpr uintptr_t GenerationMask = 0xf;

struct TlsBlock {
  void* pClientData;
  void (*clientDestructor)(void*);
  void* pServerData;
  void (*serverDestructor)(void*);
};

bool g_IsInitialized;
os::TlsSlot g_TlsSlot;

void DestroyTlsBlock(uintptr_t value) {
  TlsBlock* pBlock = reinterpret_cast<TlsBlock*>(value & ~GenerationMask);
  if (pBlock == nullptr ||
    !detail::AllocatorIsAvailable(static_cast<int>(value & GenerationMask))) {
    return;
  }
  if (pBlock->pClientData != nullptr) {
    if (pBlock->clientDestructor != nullptr) {
      pBlock->clientDestructor(pBlock->pClientData);
    }
    pBlock->pClientData = nullptr;
  }
  pBlock->clientDestructor = nullptr;
  if (pBlock->pServerData != nullptr) {
    if (pBlock->serverDestructor != nullptr) {
      pBlock->serverDestructor(pBlock->pServerData);
    }
    pBlock->pServerData = nullptr;
  }
  pBlock->serverDestructor = nullptr;
  detail::Free(pBlock);
}

[[gnu::noinline]] Result GetTlsBlock(TlsBlock** ppOutBlock) {
  if (g_IsInitialized != true) {
    return ResultTlsUnavailable;
  }
  uintptr_t* pOutValue = reinterpret_cast<uintptr_t*>(ppOutBlock);
  *pOutValue = os::GetTlsValue(g_TlsSlot);
  if (detail::AllocatorIsAvailable(
    static_cast<int>(*pOutValue & GenerationMask))) {
    if (*pOutValue != 0) {
      *pOutValue &= ~GenerationMask;
      return Result{0};
    }
  }
  else {
    os::SetTlsValue(g_TlsSlot, 0);
    *pOutValue = 0;
  }
  TlsBlock* pBlock = static_cast<TlsBlock*>(detail::Alloc(sizeof(TlsBlock)));
  if (pBlock == nullptr) {
    *pOutValue = 0;
    return ResultTlsUnavailable;
  }
  *pBlock = {};
  *pOutValue = reinterpret_cast<uintptr_t>(pBlock);
  *pOutValue = static_cast<uintptr_t>(static_cast<intptr_t>(
    detail::GetAllocatorGeneration())) | reinterpret_cast<uintptr_t>(pBlock);
  os::SetTlsValue(g_TlsSlot, *pOutValue);
  *pOutValue &= ~GenerationMask;
  return Result{0};
}

}

Result Initialize() {
  if (g_IsInitialized) {
    return Result{0};
  }
  const Result result = os::SdkAllocateTlsSlot(&g_TlsSlot, DestroyTlsBlock);
  if (result.IsFailure()) {
    return result;
  }
  os::SetTlsValue(g_TlsSlot, 0);
  g_IsInitialized = true;
  return Result{0};
}

Result Finalize() {
  return Result{0};
}

Result GetServerTLS(void*& pOutData) {
  pOutData = nullptr;
  TlsBlock* pBlock = nullptr;
  const Result result = GetTlsBlock(&pBlock);
  if (result.IsSuccess() && pBlock != nullptr) {
    pOutData = pBlock->pServerData;
  }
  return result;
}

Result SetServerTLS(void (*destructor)(void*), void* pData) {
  TlsBlock* pBlock = nullptr;
  const Result result = GetTlsBlock(&pBlock);
  if (result.IsSuccess() && pBlock != nullptr) {
    if (pBlock->pServerData != pData) {
      if (pBlock->pServerData != nullptr &&
        pBlock->serverDestructor != nullptr) {
        pBlock->serverDestructor(pBlock->pServerData);
      }
      pBlock->pServerData = pData;
    }
    pBlock->serverDestructor = destructor;
  }
  return result;
}

Result GetClientTLS(void*& pOutData) {
  pOutData = nullptr;
  TlsBlock* pBlock = nullptr;
  const Result result = GetTlsBlock(&pBlock);
  if (result.IsSuccess() && pBlock != nullptr) {
    pOutData = pBlock->pClientData;
  }
  return result;
}

Result SetClientTLS(void (*destructor)(void*), void* pData) {
  TlsBlock* pBlock = nullptr;
  const Result result = GetTlsBlock(&pBlock);
  if (result.IsSuccess() && pBlock != nullptr) {
    if (pBlock->pClientData != pData) {
      if (pBlock->pClientData != nullptr &&
        pBlock->clientDestructor != nullptr) {
        pBlock->clientDestructor(pBlock->pClientData);
      }
      pBlock->pClientData = pData;
    }
    pBlock->clientDestructor = destructor;
  }
  return result;
}

}
