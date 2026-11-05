#pragma once

#include <stdint.h>

#include "nn/os/synchronization.hpp"
#include "nn/result.hpp"

namespace nn::ssl::detail {

class SslApiBase {
 public:
  ~SslApiBase();

  virtual Result Initialize();
  virtual Result Finalize();

  static Result GetSslResultFromValue(Result* pOutValue, const char* value,
    uint32_t valueSize);

 private:
  uint64_t m_ReferenceCount = 0;
  os::SdkMutexType m_Mutex = {};
};

}
