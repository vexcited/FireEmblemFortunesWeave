#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <utility>

#include "libc/cxx_guard.hpp"
#include "nn/diag/detail/diag_module_parser.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/result.hpp"

extern "C" void nnMain();

namespace nn::ro {

struct ModuleId {
  uint8_t value[0x20];
  size_t size;
};

bool GetModuleAddressRange(uintptr_t* pOutBase, uintptr_t* pOutSize,
  uintptr_t address);
Result GetModuleName(char* pOutName, size_t size, uintptr_t base);
Result GetModuleNamePointer(const char** ppOutName, size_t* pOutLength,
  uintptr_t base);
Result GetModuleId(ModuleId* pOutModuleId, uintptr_t base);
Result LookupModuleSymbol(uintptr_t* pOutAddress, uintptr_t address,
  const char* pName);
Result GetUpperBoundSymbol(uintptr_t* pOutAddress, uintptr_t* pOutSize,
  char* pOutName, size_t nameSize, uintptr_t address);

}

namespace nn::diag {

struct DevNotificationHeader;

struct ModuleInfo {
  const char* pPath;
  uintptr_t baseAddress;
  size_t size;
  const uint8_t* pModuleId;
  size_t moduleIdSize;
  uint32_t reserved;
};

size_t GetProcessName(char* pOutName, size_t size);

namespace detail {

void GetProcessNamePointer(const char** ppOutName, size_t* pOutLength);
const char* Translate(const uint8_t* pCatalog, const char* pText);
bool DevNotifyImpl(DevNotificationHeader&& header, const char* pFormat, ...);
bool DevVNotifyImpl(DevNotificationHeader&& header, const char* pFormat,
  va_list arguments);
void GetFileNameWithoutExtension(const char** ppOutName,
  size_t* pOutLength, const char* pPath, size_t length);
int GetValidSizeAsUtf8String(const char* pText, size_t size);
uintptr_t GetModulePathImpl(char* pOutPath, size_t size, uintptr_t address);
bool IsSystemSymbolImpl(uintptr_t address);
size_t GetSymbolSizeImpl(uintptr_t address);
uintptr_t GetSymbolNameImpl(char* pOutName, size_t size, uintptr_t address);
bool GetReadOnlyDataSectionRangeImpl(uintptr_t* pOutStart,
  uintptr_t* pOutEnd, uintptr_t address);
int GetAllModuleInfoImpl(size_t* pOutSize, void* pBuffer, size_t bufferSize,
  bool isSizeOnly);

// The original reaches this one through its import here, while the
// symbol lookup inlines it.
[[gnu::visibility("hidden")]] bool IsSystemSymbolImplImported(
  uintptr_t address);

struct ProcessName {
  const char* pName;
  size_t length;
};

[[gnu::visibility("hidden")]] extern uint64_t g_ProcessNameGuard;
[[gnu::visibility("hidden")]] extern ProcessName g_ProcessName;

namespace {

// Message catalogs use the gettext layout.
constexpr uint8_t CatalogMagic[4] = {0xde, 0x12, 0x04, 0x95};
constexpr uint32_t ResultModuleNameTruncated = 0x1816;

struct CatalogHeader {
  uint8_t magic[4];
  uint32_t revision;
  uint32_t count;
  uint32_t originalOffset;
  uint32_t translationOffset;
};

struct CatalogEntry {
  uint32_t length;
  uint32_t offset;
};

[[gnu::always_inline]] int GetUtf8CodeLength(uint8_t c) {
  if ((c & 0x80) == 0) {
    return 1;
  }
  if ((c & 0xe0) == 0xc0) {
    return 2;
  }
  if ((c & 0xf0) == 0xe0) {
    return 3;
  }
  if ((c & 0xf8) == 0xf0) {
    return 4;
  }
  return 0;
}

}

}

size_t GetProcessName(char* pOutName, size_t size) {
  const char* pName = nullptr;
  size_t length = 0;
  detail::GetProcessNamePointer(&pName, &length);
  const size_t copied = size - 1 < length ? size - 1 : length;
  memcpy(pOutName, pName, copied);
  pOutName[copied] = '\0';
  return length;
}

namespace detail {

const char* Translate(const uint8_t* pCatalog, const char* pText) {
  const CatalogHeader* pHeader =
    reinterpret_cast<const CatalogHeader*>(pCatalog);
  if (pHeader->magic[0] != CatalogMagic[0] ||
      pHeader->magic[1] != CatalogMagic[1] ||
      pHeader->magic[2] != CatalogMagic[2] ||
      pHeader->magic[3] != CatalogMagic[3] || pHeader->revision != 0) {
    return pText;
  }
  const CatalogEntry* pOriginals = reinterpret_cast<const CatalogEntry*>(
    pCatalog + pHeader->originalOffset);
  const CatalogEntry* pTranslations = reinterpret_cast<const CatalogEntry*>(
    pCatalog + pHeader->translationOffset);
  for (uint32_t i = 0; i < pHeader->count; i++) {
    const char* pOriginal =
      reinterpret_cast<const char*>(pCatalog + pOriginals[i].offset);
    if (strcmp(pOriginal, pText) == 0) {
      return reinterpret_cast<const char*>(pCatalog +
        pTranslations[i].offset);
    }
  }
  return pText;
}

bool DevNotifyImpl(DevNotificationHeader&& header, const char* pFormat, ...) {
  va_list arguments;
  va_start(arguments, pFormat);
  const bool result = DevVNotifyImpl(std::move(header), pFormat, arguments);
  va_end(arguments);
  return result;
}

// The name runs from the last backslash to the last dot after it. The scan
// compares raw addresses, so an empty path at address zero still reads.
void GetFileNameWithoutExtension(const char** ppOutName,
  size_t* pOutLength, const char* pPath, size_t length) {
  const uintptr_t begin = reinterpret_cast<uintptr_t>(pPath);
  const uintptr_t end = begin + length;
  uintptr_t separator = 0;
  for (uintptr_t p = end - 1; p >= begin; p--) {
    if (*reinterpret_cast<const char*>(p) == '\\') {
      separator = p;
      break;
    }
  }
  const uintptr_t start = separator != 0 ? separator + 1 : begin;
  uintptr_t stop = end;
  for (uintptr_t p = end - 1; p >= begin; p--) {
    if (*reinterpret_cast<const char*>(p) == '.') {
      if (p >= start) {
        stop = p;
      }
      break;
    }
  }
  *ppOutName = reinterpret_cast<const char*>(start);
  *pOutLength = stop - start;
}

// A trailing incomplete character is cut, a malformed one fails.
int GetValidSizeAsUtf8String(const char* pText, size_t size) {
  if (size == 0) {
    return 0;
  }
  size_t scanned = 0;
  for (const char* p = pText + size - 1; p >= pText; p--) {
    scanned++;
    const uint8_t c = static_cast<uint8_t>(*p);
    if ((c & 0xc0) == 0x80) {
      continue;
    }
    const size_t length = GetUtf8CodeLength(c);
    if (length == 0) {
      return -1;
    }
    if (scanned >= length) {
      return scanned == length ? static_cast<int>(size) : -1;
    }
    return scanned >= size ? -1 : static_cast<int>(size - scanned);
  }
  return -1;
}

uintptr_t GetModulePathImpl(char* pOutPath, size_t size, uintptr_t address) {
  uintptr_t base = 0;
  uintptr_t moduleSize = 0;
  if (!ro::GetModuleAddressRange(&base, &moduleSize, address)) {
    return 0;
  }
  const Result result = ro::GetModuleName(pOutPath, size, base);
  if (result.IsFailure() &&
      result.GetInnerValueForDebug() != ResultModuleNameTruncated) {
    pOutPath[0] = '\0';
  }
  return base;
}

// The system module is the one holding this very function.
bool IsSystemSymbolImpl(uintptr_t address) {
  uintptr_t base = 0;
  uintptr_t size = 0;
  NN_ABORT_UNLESS(ro::GetModuleAddressRange(&base, &size,
    reinterpret_cast<uintptr_t>(&IsSystemSymbolImpl)));
  return base <= address && address < base + size;
}

// Symbols of the system module are not named.
uintptr_t GetSymbolNameImpl(char* pOutName, size_t size, uintptr_t address) {
  if (IsSystemSymbolImpl(address)) {
    return 0;
  }
  uintptr_t symbolAddress = 0;
  uintptr_t symbolSize = 0;
  const Result result = ro::GetUpperBoundSymbol(&symbolAddress, &symbolSize,
    pOutName, size, address);
  if (result.IsSuccess() ||
      result.GetInnerValueForDebug() == ResultModuleNameTruncated) {
    return symbolAddress;
  }
  return 0;
}

size_t GetSymbolSizeImpl(uintptr_t address) {
  uintptr_t symbolAddress = 0;
  uintptr_t size = 0;
  const Result result = ro::GetUpperBoundSymbol(&symbolAddress, &size,
    nullptr, 0, address);
  if (symbolAddress == address && result.IsSuccess()) {
    return size;
  }
  return 0;
}

// The name is the main module's file name without its extension.
[[gnu::visibility("hidden"), gnu::noinline]] void InitializeProcessName() {
  ModuleInfoImpl info = {};
  if (GetModuleInfoImpl(&info, reinterpret_cast<uintptr_t>(&nnMain), nullptr,
    0)) {
    GetFileNameWithoutExtension(&g_ProcessName.pName, &g_ProcessName.length,
      info.pName, info.nameLength);
    return;
  }

  g_ProcessName.pName = "";
  g_ProcessName.length = 0;
}

[[gnu::noinline]] void GetProcessNamePointer(const char** ppOutName,
  size_t* pOutLength) {
  auto* pInitialized = reinterpret_cast<uint8_t*>(&g_ProcessNameGuard);
  if (!(__atomic_load_n(pInitialized, __ATOMIC_ACQUIRE) & 1) &&
    __cxa_guard_acquire(&g_ProcessNameGuard)) {
    InitializeProcessName();
    __cxa_guard_release(&g_ProcessNameGuard);
  }

  *ppOutName = g_ProcessName.pName;
  *pOutLength = g_ProcessName.length;
}

// The name falls back to the empty string, counted with its terminator.
[[gnu::noinline]] bool GetModuleInfoImpl(ModuleInfoImpl* pOutInfo,
  uintptr_t address, char* pOutName, size_t nameSize) {
  if (address == 0) {
    return false;
  }

  uintptr_t base = 0;
  uintptr_t size = 0;
  const bool isFound = ro::GetModuleAddressRange(&base, &size, address);
  if (!isFound) {
    return isFound;
  }

  const char* pName = nullptr;
  size_t nameLength = 0;
  if (nameSize != 0) {
    if (ro::GetModuleName(pOutName, nameSize, base).IsFailure()) {
      pOutName[0] = '\0';
    }

    pName = pOutName;
    nameLength = strlen(pOutName);
  }
  else if (ro::GetModuleNamePointer(&pName, &nameLength, base).IsFailure()) {
    pName = "";
    nameLength = 1;
  }

  ro::ModuleId moduleId = {};
  if (ro::GetModuleId(&moduleId, base).IsFailure()) {
    moduleId = {};
  }

  pOutInfo->pName = pName;
  pOutInfo->nameLength = nameLength;
  pOutInfo->baseAddress = base;
  pOutInfo->size = size;
  memcpy(pOutInfo->moduleId, moduleId.value, sizeof(moduleId.value));
  pOutInfo->moduleIdSize = moduleId.size;
  return isFound;
}

// Modules export accessors for their read-only data bounds.
bool GetReadOnlyDataSectionRangeImpl(uintptr_t* pOutStart,
  uintptr_t* pOutEnd, uintptr_t address) {
  if (IsSystemSymbolImplImported(address)) {
    return false;
  }

  uintptr_t getStart = 0;
  if (ro::LookupModuleSymbol(&getStart, address, "nndetailRoGetRoDataStart")
    .IsFailure()) {
    return false;
  }

  uintptr_t getEnd = 0;
  if (ro::LookupModuleSymbol(&getEnd, address, "nndetailRoGetRoDataEnd")
    .IsFailure()) {
    return false;
  }

  *pOutStart = reinterpret_cast<uintptr_t (*)()>(getStart)();
  *pOutEnd = reinterpret_cast<uintptr_t (*)()>(getEnd)();
  return true;
}

// A code section is the first code block after a gap whose permission is
// executable or read only.
[[gnu::noinline]] bool ModuleParser::MoveToCodeSection() {
  bool isAfterGap = false;
  while (MemoryBlockParser::MoveNext()) {
    if (MemoryBlockParser::GetInfo()->state == 3 ||
      MemoryBlockParser::GetInfo()->state == 8) {
      if (isAfterGap && ((MemoryBlockParser::GetInfo()->permission & 4) != 0 ||
        MemoryBlockParser::GetInfo()->permission == 1)) {
        return true;
      }
    }
    else {
      isAfterGap = true;
    }
  }

  return false;
}

// Entries fill the buffer from the front, names and ids from the back. The
// name is first read into the free space between them.
int GetAllModuleInfoImpl(size_t* pOutSize, void* pBuffer, size_t bufferSize,
  bool isSizeOnly) {
  ModuleParser parser;
  int count = 0;
  size_t requiredSize = 0;
  if (isSizeOnly) {
    while (parser.MoveNext(static_cast<char*>(pBuffer), bufferSize)) {
      const ModuleInfoImpl* pInfo = parser.GetInfo();
      count++;
      requiredSize += pInfo->nameLength + pInfo->moduleIdSize +
        sizeof(ModuleInfo) + 1;
    }
  }
  else if (bufferSize > sizeof(ModuleInfo)) {
    ModuleInfo* pOut = static_cast<ModuleInfo*>(pBuffer);
    char* pTail = static_cast<char*>(pBuffer) + bufferSize;
    while (parser.MoveNext(reinterpret_cast<char*>(pOut),
      pTail - reinterpret_cast<char*>(pOut))) {
      const ModuleInfoImpl* pInfo = parser.GetInfo();
      requiredSize += pInfo->nameLength + pInfo->moduleIdSize +
        sizeof(ModuleInfo) + 1;
      if (requiredSize > bufferSize) {
        break;
      }

      pTail -= pInfo->nameLength + 1;
      if (pInfo->nameLength != 0) {
        memmove(pTail, pInfo->pName, pInfo->nameLength);
      }

      pTail[pInfo->nameLength] = '\0';
      pOut->pPath = pTail;
      pOut->baseAddress = pInfo->baseAddress;
      pOut->size = pInfo->size;

      const uint8_t* pModuleId = nullptr;
      if (pInfo->moduleIdSize != 0) {
        pTail -= pInfo->moduleIdSize;
        memcpy(pTail, pInfo->moduleId, pInfo->moduleIdSize);
        pModuleId = reinterpret_cast<const uint8_t*>(pTail);
      }

      pOut->pModuleId = pModuleId;
      pOut->moduleIdSize = pInfo->moduleIdSize;
      pOut->reserved = 0;
      count++;
      pOut++;
      if (static_cast<size_t>(pTail - reinterpret_cast<char*>(pOut)) <=
        sizeof(ModuleInfo)) {
        break;
      }
    }
  }

  *pOutSize = requiredSize;
  return count;
}

[[gnu::noinline]] bool ModuleParser::MoveNext(char* pOutName,
  size_t nameSize) {
  if (!MoveToCodeSection()) {
    return false;
  }
  return GetModuleInfoImpl(&m_ModuleInfo,
    MemoryBlockParser::GetInfo()->baseAddress, pOutName, nameSize);
}

// Kept opaque, the original asks for the info again on every module.
[[gnu::noinline, clang::optnone]] const ModuleInfoImpl*
  ModuleParser::GetInfo() const {
  return &m_ModuleInfo;
}

}

}
