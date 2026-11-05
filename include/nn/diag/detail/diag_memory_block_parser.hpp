#pragma once

#include <stdint.h>

#include "nn/svc/svc_api.hpp"

namespace nn::diag::detail {

class MemoryBlockParser {
 public:
  MemoryBlockParser();

  void SetRange(uintptr_t begin, uintptr_t end);
  bool MoveNext();
  const svc::MemoryInfo* GetInfo() const;

 private:
  uintptr_t m_Address;
  bool m_HasEnd;
  uintptr_t m_End;
  bool m_IsFinished;
  svc::MemoryInfo m_Info;
};

}
