#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/diag/detail/diag_memory_block_parser.hpp"

namespace nn::diag::detail {

struct ModuleInfoImpl {
  uint8_t storage[0x58];
};

// Steps through the code sections of the loaded modules.
class ModuleParser : public MemoryBlockParser {
 public:
  bool MoveToCodeSection();
  bool MoveNext(char* pOutName, size_t nameSize);
  const ModuleInfoImpl* GetInfo() const;

 private:
  ModuleInfoImpl m_ModuleInfo;
};

static_assert(sizeof(ModuleParser) == 0xa0);

bool GetModuleInfoImpl(ModuleInfoImpl* pOutInfo, uintptr_t address,
  char* pOutName, size_t nameSize);

}
