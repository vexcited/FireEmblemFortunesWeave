#include "nn/ro/ro_symbol_table_parser.hpp"

#include "nn/diag/diag_abort.hpp"

namespace nn::ro {

namespace detail {

struct ModuleVersion {
  uint8_t value[16];
};

struct ModuleHeader {
  uint32_t magic;
  uint32_t dynamicOffset;
};

namespace {

struct DynamicEntry {
  int64_t tag;
  uint64_t value;
};

constexpr int64_t DynamicTag_Null = 0;
constexpr int64_t DynamicTag_Hash = 4;
constexpr int64_t DynamicTag_StringTable = 5;
constexpr int64_t DynamicTag_SymbolTable = 6;
constexpr int64_t DynamicTag_GnuHash = 0x6ffffef5;

struct GnuHashHeader {
  uint32_t bucketCount;
  uint32_t symbolOffset;
  uint32_t bloomCount;
  uint32_t bloomShift;
};

}

bool FindModuleHeader(const ModuleHeader** ppOutHeader,
  ModuleVersion* pOutVersion, uintptr_t address) asm(
  "_ZN2nn2ro6detail16FindModuleHeaderIXadL_ZNS_3svc7aarch644lp6411QueryMemo"
  "ryEPNS3_4lp6410MemoryInfoEPNS3_8PageInfoEmEEEEbPPKNS_5rocrt12ModuleHeader"
  "EPNS1_13ModuleVersionEm");

namespace {

// The chains of the last used bucket end the symbols the hash covers.
[[gnu::always_inline]] uint32_t CountGnuHashSymbols(
  const GnuHashHeader* pHeader, uint32_t previous) {
  if (pHeader->bucketCount == 0) {
    return 0;
  }
  const uint32_t* pBuckets = reinterpret_cast<const uint32_t*>(
    reinterpret_cast<const uint64_t*>(pHeader + 1) + pHeader->bloomCount);
  const uint32_t* pChains = pBuckets + pHeader->bucketCount;
  uint32_t last = 0;
  for (size_t i = pHeader->bucketCount; i != 0; i--) {
    last = pBuckets[i - 1];
    if (last != 0) {
      break;
    }
  }
  if (last == 0) {
    return previous;
  }
  if (last < pHeader->symbolOffset) {
    return pHeader->symbolOffset;
  }
  uint32_t index = last;
  uint32_t chain;
  do {
    chain = pChains[index - pHeader->symbolOffset];
    index++;
  } while ((chain & 1) == 0);
  return index;
}

}

bool SymbolTableParser::Initialize(uintptr_t base) {
  const ModuleHeader* pHeader = nullptr;
  ModuleVersion version = {};
  if (!FindModuleHeader(&pHeader, &version, base)) {
    return false;
  }
  const uintptr_t dynamic =
    reinterpret_cast<uintptr_t>(pHeader) + pHeader->dynamicOffset;
  if (dynamic == 0) {
    return false;
  }
  const SymbolEntry* pSymbols = nullptr;
  const char* pStrings = nullptr;
  uint32_t hashCount = 0;
  uint32_t gnuHashCount = 0;
  bool hasGnuHash = false;
  for (const DynamicEntry* pEntry =
       reinterpret_cast<const DynamicEntry*>(dynamic);
       pEntry->tag != DynamicTag_Null; pEntry++) {
    switch (pEntry->tag) {
      case DynamicTag_Hash:
        hashCount =
          reinterpret_cast<const uint32_t*>(base + pEntry->value)[1];
        break;
      case DynamicTag_StringTable:
        pStrings = reinterpret_cast<const char*>(base + pEntry->value);
        break;
      case DynamicTag_SymbolTable:
        pSymbols = reinterpret_cast<const SymbolEntry*>(base + pEntry->value);
        break;
      case DynamicTag_GnuHash:
        gnuHashCount = CountGnuHashSymbols(
          reinterpret_cast<const GnuHashHeader*>(base + pEntry->value),
          gnuHashCount);
        hasGnuHash = true;
        break;
      default:
        break;
    }
  }
  const int count = static_cast<int>(hasGnuHash ? gnuHashCount : hashCount);
  if (pSymbols == nullptr || pStrings == nullptr || count < 1) {
    return false;
  }
  m_pSymbols = pSymbols;
  m_pStrings = pStrings;
  m_Base = base;
  m_Count = count;
  m_Index = -1;
  return true;
}

bool SymbolTableParser::MoveNext() {
  const int next = m_Index + 1;
  if (next < m_Count) {
    m_Index = next;
  }
  return next < m_Count;
}

void SymbolTableParser::MoveTo(int index) {
  m_Index = index;
}

int SymbolTableParser::GetIndex() const {
  return m_Index;
}

int SymbolTableParser::GetCount() const {
  return m_Count;
}

const char* SymbolTableParser::GetName() const {
  return m_pStrings + m_pSymbols[m_Index].nameOffset;
}

size_t SymbolTableParser::GetSize() const {
  return m_pSymbols[m_Index].size;
}

uintptr_t SymbolTableParser::GetAddress() const {
  return m_pSymbols[m_Index].value + m_Base;
}

uint8_t SymbolTableParser::GetType() const {
  return m_pSymbols[m_Index].info & 0xf;
}

void Puts(const char*) {}

void Unexpected(const char*) {
  NN_ABORT_UNLESS(false);
}

}

namespace {

constexpr uint32_t NroMagic = 0x304f524e;
constexpr Result ResultInvalidNroImage = {(4 << 9) | 22};

struct NroHeader {
  uint8_t reserved00[0x10];
  uint32_t magic;
  uint8_t reserved14[0x24];
  uint32_t size;
};

}

Result GetBufferSize(size_t* pOutSize, const void* pImage) {
  const NroHeader* pHeader = static_cast<const NroHeader*>(pImage);
  if (pHeader->magic != NroMagic) {
    return ResultInvalidNroImage;
  }
  *pOutSize = pHeader->size;
  return Result{0};
}

}
