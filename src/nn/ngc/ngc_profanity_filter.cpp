#include "nn/ngc/ngc_profanity_filter.hpp"

#include <string.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/util/utf.hpp"

namespace nn::ngc {

size_t wcslen(const char16_t* string);
void* memset(void* pDestination, int value, size_t size);

namespace {

// Filters share one service session, released with the last of them.
os::SdkMutexType g_ServiceMutex;
int32_t g_ServiceReferenceCount;
sf::SharedPointer<detail::IService> g_Service;

const uint32_t ResultNotInitialized = 0x292;
const uint32_t ResultAlreadyInitialized = 0x492;
const uint32_t ResultInvalidPointer = 0x692;
const uint32_t ResultInvalidSize = 0x892;
const uint32_t ResultInvalidFormat = 0xa92;
const uint32_t ResultServiceUnavailable = 0xd092;

const size_t MaxWordCount = 16;
const size_t MinWorkMemorySize = 0x20000;
const int HeapOption = 4;
const uint32_t AllPatterns = 0x3ffff;

// Words keep 63 characters and texts 511, longer ones are cut there.
const int MaxWordLength = 63;
const int MaxTextLength = 511;

[[gnu::always_inline]] bool IsUtf8Continuation(char c) {
  return (static_cast<uint8_t>(c) & 0xc0) == 0x80;
}

// Returns the byte length of the first maxLength characters, or zero when
// the string ends earlier or is not valid UTF-8.
[[gnu::always_inline]] size_t GetCutLength(const char* pString,
  int maxLength) {
  size_t offset = 0;
  for (int i = 0; i < maxLength; i++) {
    const uint8_t c = static_cast<uint8_t>(pString[offset]);
    if (c == 0) {
      return 0;
    }
    if (c < 0x80) {
      offset += 1;
    }
    else if (c >= 0xc2 && c <= 0xdf) {
      if (!IsUtf8Continuation(pString[offset + 1])) {
        return 0;
      }
      offset += 2;
    }
    else if ((c & 0xf0) == 0xe0) {
      if (!IsUtf8Continuation(pString[offset + 1]) ||
          !IsUtf8Continuation(pString[offset + 2])) {
        return 0;
      }
      offset += 3;
    }
    else if ((c & 0xf8) == 0xf0) {
      if (!IsUtf8Continuation(pString[offset + 1]) ||
          !IsUtf8Continuation(pString[offset + 2]) ||
          !IsUtf8Continuation(pString[offset + 3])) {
        return 0;
      }
      offset += 4;
    }
    else {
      return 0;
    }
  }
  return offset;
}

// Same for UTF-16, a broken surrogate pair returns -1. The original also
// treats 0xe000 as a surrogate.
[[gnu::always_inline]] ptrdiff_t GetCutLength(const char16_t* pString,
  int maxLength) {
  size_t offset = 0;
  for (int i = 0; i < maxLength; i++) {
    const char16_t c = pString[offset];
    if (c == 0) {
      return 0;
    }
    if (c >= 0xd800 && c <= 0xe000) {
      if (c > 0xdbff || (pString[offset + 1] & 0xfc00) != 0xdc00) {
        return -1;
      }
      offset += 2;
    }
    else {
      offset += 1;
    }
  }
  return offset;
}

}

ProfanityFilter::ProfanityFilter() : m_IsInitialized(false), m_SkipMode(),
  m_MaskMode(), m_NormalizationOption(0), m_pWorkMemory(nullptr),
  m_WorkMemorySize(0), m_pHeap(nullptr) {}

ProfanityFilter::ProfanityFilter(void* pWorkMemory, size_t workMemorySize,
  bool checkDesiredLanguage) : m_IsInitialized(false), m_pHeap(nullptr) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    Initialize(pWorkMemory, workMemorySize, checkDesiredLanguage));
}

ProfanityFilter::ProfanityFilter(void* pWorkMemory, size_t workMemorySize) :
  m_IsInitialized(false), m_pHeap(nullptr) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    Initialize(pWorkMemory, workMemorySize, true));
}

ProfanityFilter::~ProfanityFilter() {
  Finalize();
}

Result ProfanityFilter::Initialize(void* pWorkMemory, size_t workMemorySize,
  bool checkDesiredLanguage) {
  if (pWorkMemory == nullptr) {
    return Result{ResultInvalidPointer};
  }
  if (workMemorySize < MinWorkMemorySize) {
    return Result{ResultInvalidSize};
  }
  if (m_IsInitialized) {
    return Result{ResultAlreadyInitialized};
  }
  CleanUpVariables();
  m_pWorkMemory = pWorkMemory;
  m_WorkMemorySize = workMemorySize;
  m_pHeap = lmem::CreateExpHeap(pWorkMemory, workMemorySize, HeapOption);

  g_ServiceMutex.Lock();
  if (g_ServiceReferenceCount == 0) {
    sf::SharedPointer<detail::IService> service =
      detail::CreateServiceByHipc();
    sf::SharedPointer<detail::IService> moved(service.Detach(), false);
    g_Service.Swap(moved);
  }
  ++g_ServiceReferenceCount;
  Result result;
  if (g_Service == nullptr) {
    result = Result{ResultServiceUnavailable};
  }
  else {
    m_CheckDesiredLanguage = checkDesiredLanguage;
    m_IsInitialized = true;
    result = Result{0};
  }
  g_ServiceMutex.Unlock();
  return result;
}

Result ProfanityFilter::Initialize(void* pWorkMemory, size_t workMemorySize) {
  return Initialize(pWorkMemory, workMemorySize, true);
}

void ProfanityFilter::Finalize() {
  // The original tests the whole flag byte here, not its low bit.
  if (*reinterpret_cast<const uint8_t*>(&m_IsInitialized) != 0) {
    g_ServiceMutex.Lock();
    if (g_ServiceReferenceCount > 0 && --g_ServiceReferenceCount == 0) {
      g_Service.Reset();
    }
    lmem::DestroyExpHeap(m_pHeap);
    m_pHeap = nullptr;
    m_IsInitialized = false;
    g_ServiceMutex.Unlock();
  }
}

uint32_t ProfanityFilter::GetContentVersion() {
  uint32_t version = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_Service->GetContentVersion(sf::Out<uint32_t>(&version)));
  return version;
}

[[gnu::always_inline]] inline detail::ProfanityFilterOption
  ProfanityFilter::MakeOption() const {
  detail::ProfanityFilterOption option = {};
  option.skipAtSignCheck = m_SkipMode;
  option.maskMode = m_MaskMode;
  option.normalizationOption = m_NormalizationOption;
  option.languages = detail::GetLanguageSetting(m_CheckDesiredLanguage);
  return option;
}

Result ProfanityFilter::CheckProfanityWords(uint32_t* pOutChecks,
  uint32_t patterns, const char** ppWords, size_t wordCount) {
  Result result = CheckArgumentsWord(pOutChecks, ppWords, wordCount);
  if (result.IsFailure()) {
    return result;
  }
  for (size_t i = 0; i < wordCount; i++) {
    pOutChecks[i] = 0;
  }
  const detail::ProfanityFilterOption option = MakeOption();
  for (size_t i = 0; i < wordCount; i++) {
    const char* pWord = ppWords[i];
    const size_t length = GetCutLength(pWord, MaxWordLength);
    if (length != 0) {
      const size_t size = length + 1;
      char* pCopy = static_cast<char*>(lmem::AllocateFromExpHeap(m_pHeap,
        size));
      if (pCopy == nullptr) {
        return Result{ResultInvalidSize};
      }
      ::memcpy(pCopy, ppWords[i], length);
      pCopy[length] = '\0';
      result = g_Service->Check2(sf::Out<uint32_t>(&pOutChecks[i]),
        sf::InBuffer(pCopy, size), patterns & AllPatterns, option);
      lmem::FreeToExpHeap(m_pHeap, pCopy);
    }
    else {
      result = g_Service->Check2(sf::Out<uint32_t>(&pOutChecks[i]),
        sf::InBuffer(pWord, ::strlen(pWord) + 1), patterns & AllPatterns,
        option);
    }
    if (result.IsFailure()) {
      return result;
    }
  }
  return Result{0};
}

Result ProfanityFilter::CheckProfanityWords(uint32_t* pOutChecks,
  uint32_t patterns, const char16_t** ppWords, size_t wordCount) {
  Result result = CheckArgumentsWord(pOutChecks, ppWords, wordCount);
  if (result.IsFailure()) {
    return result;
  }
  const size_t tableSize = sizeof(char*) * wordCount;
  char** ppUtf8Words = static_cast<char**>(
    lmem::AllocateFromExpHeap(m_pHeap, tableSize));
  if (ppUtf8Words == nullptr) {
    return Result{ResultInvalidSize};
  }
  ngc::memset(ppUtf8Words, 0, tableSize);

  const int count = static_cast<int>(wordCount);
  for (int i = 0; i < count; i++) {
    const ptrdiff_t length = GetCutLength(ppWords[i], MaxWordLength);
    if (length < 0) {
      result = Result{ResultInvalidFormat};
      goto Cleanup;
    }
    if (length != 0) {
      const size_t bytes = sizeof(char16_t) * length;
      char16_t* pCopy = static_cast<char16_t*>(
        lmem::AllocateFromExpHeap(m_pHeap, bytes + sizeof(char16_t)));
      if (pCopy == nullptr) {
        result = Result{ResultInvalidSize};
        goto Cleanup;
      }
      ::memcpy(pCopy, ppWords[i], bytes);
      pCopy[length] = u'\0';
      int utf8Size = 0;
      if (util::GetLengthOfConvertedStringUtf16NativeToUtf8(&utf8Size,
            pCopy) != util::CharacterEncodingResult_Success) {
        result = Result{ResultInvalidFormat};
        lmem::FreeToExpHeap(m_pHeap, pCopy);
        goto Cleanup;
      }
      utf8Size += 1;
      ppUtf8Words[i] = static_cast<char*>(
        lmem::AllocateFromExpHeap(m_pHeap, utf8Size));
      if (ppUtf8Words[i] == nullptr) {
        result = Result{ResultInvalidSize};
        lmem::FreeToExpHeap(m_pHeap, pCopy);
        goto Cleanup;
      }
      if (util::ConvertStringUtf16NativeToUtf8(ppUtf8Words[i], utf8Size,
            pCopy) != util::CharacterEncodingResult_Success) {
        result = Result{ResultInvalidFormat};
        lmem::FreeToExpHeap(m_pHeap, pCopy);
        goto Cleanup;
      }
      lmem::FreeToExpHeap(m_pHeap, pCopy);
    }
    else {
      int utf8Size = 0;
      if (util::GetLengthOfConvertedStringUtf16NativeToUtf8(&utf8Size,
            ppWords[i]) != util::CharacterEncodingResult_Success) {
        result = Result{ResultInvalidFormat};
        goto Cleanup;
      }
      utf8Size += 1;
      ppUtf8Words[i] = static_cast<char*>(
        lmem::AllocateFromExpHeap(m_pHeap, utf8Size));
      if (ppUtf8Words[i] == nullptr) {
        result = Result{ResultInvalidSize};
        goto Cleanup;
      }
      if (util::ConvertStringUtf16NativeToUtf8(ppUtf8Words[i], utf8Size,
            ppWords[i]) != util::CharacterEncodingResult_Success) {
        result = Result{ResultInvalidFormat};
        goto Cleanup;
      }
    }
  }
  result = CheckProfanityWords(pOutChecks, patterns,
    const_cast<const char**>(ppUtf8Words), wordCount);

Cleanup:
  for (int i = 0; i < count; i++) {
    if (ppUtf8Words[i] != nullptr) {
      lmem::FreeToExpHeap(m_pHeap, ppUtf8Words[i]);
    }
  }
  lmem::FreeToExpHeap(m_pHeap, ppUtf8Words);
  return result;
}

Result ProfanityFilter::MaskProfanityWordsInText(int* pOutCount, char* pText,
  uint32_t patterns) {
  Result result = CheckArgumentsText(pText);
  if (result.IsFailure()) {
    return result;
  }
  const detail::ProfanityFilterOption option = MakeOption();
  const size_t length = GetCutLength(pText, MaxTextLength);
  if (length != 0) {
    const size_t size = length + 1;
    char* pMasked = static_cast<char*>(lmem::AllocateFromExpHeap(m_pHeap,
      size));
    if (pMasked == nullptr) {
      return Result{ResultInvalidSize};
    }
    // The cut is masked alone, then the rest of the text is moved back.
    const char saved = pText[length];
    pText[length] = '\0';
    int32_t maskedCount = 0;
    result = g_Service->Mask2(sf::Out<int32_t>(&maskedCount),
      sf::OutBuffer(pMasked, size), sf::InBuffer(pText, size),
      patterns & AllPatterns, option);
    if (result.IsFailure()) {
      lmem::FreeToExpHeap(m_pHeap, pMasked);
      return result;
    }
    pText[length] = saved;
    if (pOutCount != nullptr) {
      *pOutCount = maskedCount;
    }
    const int maskedLength = static_cast<int>(::strlen(pMasked));
    ::memcpy(pText, pMasked, maskedLength);
    const int shift = static_cast<int>(length) - maskedLength;
    char* p = pText + maskedLength;
    char c;
    do {
      c = p[shift];
      *p++ = c;
    } while (c != '\0');
    lmem::FreeToExpHeap(m_pHeap, pMasked);
  }
  else {
    const size_t size = ::strlen(pText) + 1;
    char* pSource = static_cast<char*>(lmem::AllocateFromExpHeap(m_pHeap,
      size));
    if (pSource == nullptr) {
      return Result{ResultInvalidSize};
    }
    ::memcpy(pSource, pText, size);
    int32_t maskedCount = 0;
    result = g_Service->Mask2(sf::Out<int32_t>(&maskedCount),
      sf::OutBuffer(pText, size), sf::InBuffer(pSource, size),
      patterns & AllPatterns, option);
    if (result.IsFailure()) {
      lmem::FreeToExpHeap(m_pHeap, pSource);
      return result;
    }
    if (pOutCount != nullptr) {
      *pOutCount = maskedCount;
    }
    lmem::FreeToExpHeap(m_pHeap, pSource);
  }
  return Result{0};
}

Result ProfanityFilter::MaskProfanityWordsInText(int* pOutCount,
  char16_t* pText, uint32_t patterns) {
  Result result = CheckArgumentsText(pText);
  if (result.IsFailure()) {
    return result;
  }
  const ptrdiff_t length = GetCutLength(pText, MaxTextLength);
  if (length < 0) {
    return Result{ResultInvalidFormat};
  }
  if (length != 0) {
    const size_t bytes = sizeof(char16_t) * length;
    char16_t* pCopy = static_cast<char16_t*>(
      lmem::AllocateFromExpHeap(m_pHeap, bytes + sizeof(char16_t)));
    if (pCopy == nullptr) {
      return Result{ResultInvalidSize};
    }
    ::memcpy(pCopy, pText, bytes);
    pCopy[length] = u'\0';
    int utf8Size = 0;
    if (util::GetLengthOfConvertedStringUtf16NativeToUtf8(&utf8Size,
          pCopy) != util::CharacterEncodingResult_Success) {
      result = Result{ResultInvalidFormat};
    }
    else {
      utf8Size += 1;
      // The original never frees this buffer.
      char* pUtf8 = static_cast<char*>(
        lmem::AllocateFromExpHeap(m_pHeap, utf8Size));
      if (pUtf8 == nullptr) {
        result = Result{ResultInvalidSize};
      }
      else if (util::ConvertStringUtf16NativeToUtf8(pUtf8, utf8Size,
                 pCopy) != util::CharacterEncodingResult_Success) {
        result = Result{ResultInvalidFormat};
      }
      else {
        result = MaskProfanityWordsInText(pOutCount, pUtf8, patterns);
        if (result.IsSuccess()) {
          if (util::ConvertStringUtf8ToUtf16Native(pCopy,
                static_cast<int>(length) + 1, pUtf8) !=
              util::CharacterEncodingResult_Success) {
            result = Result{ResultInvalidFormat};
          }
          else {
            const int maskedLength = static_cast<int>(ngc::wcslen(pCopy));
            ::memcpy(pText, pCopy, sizeof(char16_t) * maskedLength);
            const int shift = static_cast<int>(length) - maskedLength;
            char16_t* p = pText + maskedLength;
            char16_t c;
            do {
              c = p[shift];
              *p++ = c;
            } while (c != u'\0');
          }
        }
      }
    }
    lmem::FreeToExpHeap(m_pHeap, pCopy);
    return result;
  }
  int utf8Size = 0;
  if (util::GetLengthOfConvertedStringUtf16NativeToUtf8(&utf8Size, pText) !=
      util::CharacterEncodingResult_Success) {
    return Result{ResultInvalidFormat};
  }
  utf8Size += 1;
  char* pUtf8 = static_cast<char*>(lmem::AllocateFromExpHeap(m_pHeap,
    utf8Size));
  if (pUtf8 == nullptr) {
    return Result{ResultInvalidSize};
  }
  if (util::ConvertStringUtf16NativeToUtf8(pUtf8, utf8Size, pText) !=
      util::CharacterEncodingResult_Success) {
    result = Result{ResultInvalidFormat};
  }
  else {
    result = MaskProfanityWordsInText(pOutCount, pUtf8, patterns);
    if (result.IsSuccess() &&
        util::ConvertStringUtf8ToUtf16Native(pText,
          static_cast<int>(ngc::wcslen(pText)) + 1, pUtf8) !=
        util::CharacterEncodingResult_Success) {
      result = Result{ResultInvalidFormat};
    }
  }
  lmem::FreeToExpHeap(m_pHeap, pUtf8);
  return result;
}

Result ProfanityFilter::CheckProfanityWords(uint32_t* pOutChecks,
  uint32_t patterns, const uint16_t** ppWords, size_t wordCount) {
  return CheckProfanityWords(pOutChecks, patterns,
    reinterpret_cast<const char16_t**>(ppWords), wordCount);
}

Result ProfanityFilter::MaskProfanityWordsInText(int* pOutCount,
  uint16_t* pText, uint32_t patterns) {
  return MaskProfanityWordsInText(pOutCount,
    reinterpret_cast<char16_t*>(pText), patterns);
}

void ProfanityFilter::SetMaskMode(MaskMode mode) {
  m_MaskMode = mode;
}

void ProfanityFilter::SkipAtSignCheck(SkipMode mode) {
  m_SkipMode = mode;
}

void ProfanityFilter::SetNormalizationOption(int option) {
  m_NormalizationOption = option;
}

void ProfanityFilter::CleanUpVariables() {
  m_SkipMode = SkipMode();
  m_MaskMode = MaskMode();
  m_NormalizationOption = 0;
  m_pWorkMemory = nullptr;
  m_WorkMemorySize = 0;
  if (m_pHeap != nullptr) {
    lmem::DestroyExpHeap(m_pHeap);
  }
  m_pHeap = nullptr;
}

Result ProfanityFilter::CheckArgumentsWord(const uint32_t* pOutChecks,
  const char16_t** ppWords, size_t wordCount) const {
  if (!m_IsInitialized) {
    return Result{ResultNotInitialized};
  }
  if (pOutChecks == nullptr || ppWords == nullptr) {
    return Result{ResultInvalidPointer};
  }
  if (wordCount > MaxWordCount) {
    return Result{ResultInvalidSize};
  }
  int length = 0;
  for (size_t i = 0; i < wordCount; i++) {
    if (util::GetLengthOfConvertedStringUtf16NativeToUtf8(&length,
          ppWords[i]) == util::CharacterEncodingResult_InvalidFormat) {
      return Result{ResultInvalidFormat};
    }
  }
  return Result{0};
}

Result ProfanityFilter::CheckArgumentsWord(const uint32_t* pOutChecks,
  const char** ppWords, size_t wordCount) const {
  if (!m_IsInitialized) {
    return Result{ResultNotInitialized};
  }
  if (pOutChecks == nullptr || ppWords == nullptr) {
    return Result{ResultInvalidPointer};
  }
  if (wordCount > MaxWordCount) {
    return Result{ResultInvalidSize};
  }
  int length = 0;
  for (size_t i = 0; i < wordCount; i++) {
    if (util::GetLengthOfConvertedStringUtf8ToUtf16Native(&length,
          ppWords[i]) == util::CharacterEncodingResult_InvalidFormat) {
      return Result{ResultInvalidFormat};
    }
  }
  return Result{0};
}

Result ProfanityFilter::CheckArgumentsText(const char16_t* pText) const {
  if (!m_IsInitialized) {
    return Result{ResultNotInitialized};
  }
  if (pText == nullptr) {
    return Result{ResultInvalidPointer};
  }
  int length = 0;
  if (util::GetLengthOfConvertedStringUtf16NativeToUtf8(&length, pText) ==
      util::CharacterEncodingResult_InvalidFormat) {
    return Result{ResultInvalidFormat};
  }
  return Result{0};
}

Result ProfanityFilter::CheckArgumentsText(const char* pText) const {
  if (!m_IsInitialized) {
    return Result{ResultNotInitialized};
  }
  if (pText == nullptr) {
    return Result{ResultInvalidPointer};
  }
  int length = 0;
  if (util::GetLengthOfConvertedStringUtf8ToUtf16Native(&length, pText) ==
      util::CharacterEncodingResult_InvalidFormat) {
    return Result{ResultInvalidFormat};
  }
  return Result{0};
}

}
