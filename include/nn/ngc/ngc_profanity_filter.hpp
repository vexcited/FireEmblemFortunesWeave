#pragma once

#include <stddef.h>
#include <stdint.h>
#include <uchar.h>

#include "nn/lmem/exp_heap.hpp"
#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::ngc {

namespace detail {

struct ProfanityFilterOption {
  int32_t skipAtSignCheck;
  int32_t maskMode;
  int32_t normalizationOption;
  uint32_t languages;
  uint32_t reserved;
};

class IService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetContentVersion(sf::Out<uint32_t> pOutVersion) = 0;
  virtual void Reserved5() = 0;
  virtual void Reserved6() = 0;
  virtual void Reserved7() = 0;
  virtual Result Check(sf::Out<uint32_t> pOutCheck, const sf::InBuffer& word,
    uint32_t patterns, const ProfanityFilterOption& option) = 0;
  virtual Result Mask(sf::Out<int32_t> pOutCount, const sf::OutBuffer& text,
    const sf::InBuffer& source, uint32_t patterns,
    const ProfanityFilterOption& option) = 0;
};

sf::SharedPointer<IService> CreateServiceByHipc();
uint32_t GetLanguageSetting(bool checkDesiredLanguage);

}

class ProfanityFilterBase {
 public:
  virtual ~ProfanityFilterBase() {}

  virtual uint32_t GetContentVersion() = 0;
  virtual Result CheckProfanityWords(uint32_t* pOutChecks, uint32_t patterns,
    const char** ppWords, size_t wordCount) = 0;
  virtual Result MaskProfanityWordsInText(int* pOutCount, char* pText,
    uint32_t patterns) = 0;
  virtual Result CheckProfanityWords(uint32_t* pOutChecks, uint32_t patterns,
    const uint16_t** ppWords, size_t wordCount) = 0;
  virtual Result CheckProfanityWords(uint32_t* pOutChecks, uint32_t patterns,
    const char16_t** ppWords, size_t wordCount) = 0;
  virtual Result MaskProfanityWordsInText(int* pOutCount, uint16_t* pText,
    uint32_t patterns) = 0;
  virtual Result MaskProfanityWordsInText(int* pOutCount, char16_t* pText,
    uint32_t patterns) = 0;
};

class ProfanityFilter : public ProfanityFilterBase {
 public:
  enum MaskMode : int32_t {};
  enum SkipMode : int32_t {};

  ProfanityFilter();
  ProfanityFilter(void* pWorkMemory, size_t workMemorySize,
    bool checkDesiredLanguage);
  ProfanityFilter(void* pWorkMemory, size_t workMemorySize);
  ~ProfanityFilter() override;

  Result Initialize(void* pWorkMemory, size_t workMemorySize,
    bool checkDesiredLanguage);
  Result Initialize(void* pWorkMemory, size_t workMemorySize);
  void Finalize();

  uint32_t GetContentVersion() override;
  Result CheckProfanityWords(uint32_t* pOutChecks, uint32_t patterns,
    const char** ppWords, size_t wordCount) override;
  Result MaskProfanityWordsInText(int* pOutCount, char* pText,
    uint32_t patterns) override;
  Result CheckProfanityWords(uint32_t* pOutChecks, uint32_t patterns,
    const uint16_t** ppWords, size_t wordCount) override;
  Result CheckProfanityWords(uint32_t* pOutChecks, uint32_t patterns,
    const char16_t** ppWords, size_t wordCount) override;
  Result MaskProfanityWordsInText(int* pOutCount, uint16_t* pText,
    uint32_t patterns) override;
  Result MaskProfanityWordsInText(int* pOutCount, char16_t* pText,
    uint32_t patterns) override;

  void SetMaskMode(MaskMode mode);
  void SkipAtSignCheck(SkipMode mode);
  void SetNormalizationOption(int option);

 private:
  void CleanUpVariables();
  Result CheckArgumentsWord(const uint32_t* pOutChecks,
    const char16_t** ppWords, size_t wordCount) const;
  Result CheckArgumentsWord(const uint32_t* pOutChecks, const char** ppWords,
    size_t wordCount) const;
  Result CheckArgumentsText(const char16_t* pText) const;
  Result CheckArgumentsText(const char* pText) const;
  detail::ProfanityFilterOption MakeOption() const;

  bool m_CheckDesiredLanguage;
  bool m_IsInitialized;
  SkipMode m_SkipMode;
  MaskMode m_MaskMode;
  int32_t m_NormalizationOption;
  void* m_pWorkMemory;
  size_t m_WorkMemorySize;
  lmem::detail::HeapHead* m_pHeap;
};

}
