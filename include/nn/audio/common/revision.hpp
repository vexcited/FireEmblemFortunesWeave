#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::audio::common {

uint32_t GetSplitterInParamHeaderMagic();
uint32_t GetSplitterInfoMagic();
uint32_t GetSplitterSendDataMagic();
int GetRevisionNumber(uint32_t revision);
bool CheckValidRevision(uint32_t revision);
uint32_t GetCurrentRevision();
uint32_t GetInitialReleaseRevision();
bool CheckFeatureSupported(uint32_t (*feature)(), uint32_t revision);
bool IsNXApplication(uint32_t revision);
bool IsOunceApplication(uint32_t revision);

class UpdateDataHeader {
public:
  void Initialize(uint32_t revision);
  uint32_t GetRevision() const;
  uint32_t GetTotalSize() const;
  uintptr_t GetCurrentPtr(uintptr_t base) const;

private:
  uint32_t m_Revision;
  uint32_t m_Sizes[14];
  uint32_t m_TotalSize;
};

static_assert(sizeof(UpdateDataHeader) == 64);

class WorkBufferAllocator {
public:
  WorkBufferAllocator(void* buffer, size_t size);
  void* Allocate(size_t size, size_t alignment);

private:
  uintptr_t m_Buffer;
  size_t m_Size;
  size_t m_Offset;
};

}
