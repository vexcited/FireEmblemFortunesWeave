#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/diag/detail/diag_memory_block_parser.hpp"

namespace nn::diag::detail {

struct ModuleInfoImpl {
  const char* pName;
  size_t nameLength;
  uintptr_t baseAddress;
  size_t size;
  uint8_t moduleId[0x28];
};

// Steps through the code sections of the loaded modules.
class ModuleParser : public MemoryBlockParser {
 public:
  bool MoveToCodeSection();
  bool MoveNext(char* pOutName, size_t nameSize);
  const ModuleInfoImpl* GetInfo() const;

 private:
  ModuleInfoImpl m_ModuleInfo;
  uint8_t m_Reserved[0x10];
};

static_assert(sizeof(ModuleParser) == 0xa0);

bool GetModuleInfoImpl(ModuleInfoImpl* pOutInfo, uintptr_t address,
  char* pOutName, size_t nameSize);

}
