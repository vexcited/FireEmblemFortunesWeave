#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/result.hpp"

namespace nn::ro {

Result GetBufferSize(size_t* pOutSize, const void* pImage);

namespace detail {

struct SymbolEntry {
  uint32_t nameOffset;
  uint8_t info;
  uint8_t other;
  uint16_t sectionIndex;
  uint64_t value;
  uint64_t size;
};

class SymbolTableParser {
 public:
  bool Initialize(uintptr_t base);
  bool MoveNext();
  void MoveTo(int index);
  int GetIndex() const;
  int GetCount() const;
  const char* GetName() const;
  size_t GetSize() const;
  uintptr_t GetAddress() const;
  uint8_t GetType() const;

 private:
  const SymbolEntry* m_pSymbols;
  const char* m_pStrings;
  uintptr_t m_Base;
  int m_Count;
  int m_Index;
};

void Puts(const char* pText);
[[noreturn]] void Unexpected(const char* pText);

}

}
