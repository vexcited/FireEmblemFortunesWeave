#include "nn/ssl/detail/ssl_api_base.hpp"
#include "nn/ssl/ssl_result.hpp"

namespace nn::ssl::detail {

SslApiBase::~SslApiBase() {}

Result SslApiBase::Initialize() {
  m_Mutex.Lock();
  Result result = m_ReferenceCount++ != 0 ?
    ResultLibraryAlreadyInitialized() : Result{};
  m_Mutex.Unlock();
  return result;
}

Result SslApiBase::Finalize() {
  m_Mutex.Lock();
  Result result;
  if (m_ReferenceCount == 0) {
    result = ResultLibraryNotInitialized();
  }
  else {
    result = --m_ReferenceCount != 0 ?
      ResultLibraryStillReferenced() : Result{};
  }

  m_Mutex.Unlock();
  return result;
}

Result SslApiBase::GetSslResultFromValue(Result* pOutValue, const char* value,
  uint32_t valueSize) {
  if (pOutValue == nullptr || value == nullptr) {
    return ResultInvalidPointer();
  }

  if (valueSize < sizeof(Result)) {
    return ResultBufferTooShort();
  }

  *pOutValue = *reinterpret_cast<const Result*>(value);
  return Result{};
}

}
