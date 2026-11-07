#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <utility>

#include "nn/diag/detail/diag_module_parser.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/result.hpp"

namespace nn::ro {

bool GetModuleAddressRange(uintptr_t* pOutBase, uintptr_t* pOutSize,
  uintptr_t address);
Result GetModuleName(char* pOutName, size_t size, uintptr_t base);
Result GetUpperBoundSymbol(uintptr_t* pOutAddress, uintptr_t* pOutSize,
  char* pOutName, size_t nameSize, uintptr_t address);

}

namespace nn::diag {

struct DevNotificationHeader;

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

bool ModuleParser::MoveNext(char* pOutName, size_t nameSize) {
  if (!MoveToCodeSection()) {
    return false;
  }
  return GetModuleInfoImpl(&m_ModuleInfo,
    MemoryBlockParser::GetInfo()->baseAddress, pOutName, nameSize);
}

}

}
