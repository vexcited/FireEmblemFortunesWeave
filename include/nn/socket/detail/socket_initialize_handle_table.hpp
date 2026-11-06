#pragma once

#include <stdint.h>

namespace nn::socket::detail {

class InitializeHandleTable {
 public:
  static constexpr int HandleCountMax = 28;

  int AcquireHandleForConcurrency(int concurrency);
  int GetConcurrencyAndReleaseHandle(int handle);

  int GetCount() const {
    return m_Count;
  }

 private:
  int32_t m_Concurrency[HandleCountMax];
  int32_t m_NextHandle;
  int32_t m_Count;
};

}
