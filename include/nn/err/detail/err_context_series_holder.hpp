#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/err/context_series.hpp"
#include "nn/result.hpp"

namespace nn::err {

struct ContextDescriptor {
  uint32_t value;
};

}

namespace nn::err::detail {

struct ContextSeriesArray::SeriesHolder {
  static constexpr uint32_t InvalidDescriptorValue = 0xffffffff;

  void Initialize(ContextDescriptor descriptor, Result result);
  bool IsInitialized() const;
  void Reset();
  ContextDescriptor GetDescriptor() const;
  Result GetInitialOriginalResult() const;
  Result GetCurrentOriginalResult() const;
  int64_t GetTick() const;
  const ContextSeries& GetContextSeries() const;
  void UpdateTick();
  void AppendContext(ContextSeriesEntry* entry, Result result);
  void UpdateCurrentOriginalResult(Result result);

  ContextDescriptor descriptor;
  Result initialOriginalResult;
  Result currentOriginalResult;
  int64_t tick;
  ContextSeries series;
};

class SerializedContextSeries {
public:
  class ConstIterator {
  public:
    bool operator==(const ConstIterator& other) const;
    bool operator!=(const ConstIterator& other) const;
    const RawContext& operator*() const;
    const RawContext* operator->() const;
    size_t GetPosition() const;

  private:
    const SerializedContextSeries* m_pSeries;
    size_t m_Position;
    RawContext m_Context;
  };

  const void* GetData() const;
  size_t GetSize() const;
  int GetCount() const;

private:
  bool m_IsInitialized;
  void* m_pData;
  MemoryResourceDeleter m_Deleter;
  size_t m_Size;
  int m_Count;
};

}
