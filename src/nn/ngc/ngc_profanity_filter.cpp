#include "nn/ngc/ngc_profanity_filter.hpp"

#include "nn/diag/diag_abort.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/util/utf.hpp"

namespace nn::ngc {

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
