#include "nn/audio/common/revision.hpp"

namespace nn::audio::common {
namespace {

constexpr uint32_t MakeMagic(char a, char b, char c, char d) {
  return static_cast<uint32_t>(a) | static_cast<uint32_t>(b) << 8 |
    static_cast<uint32_t>(c) << 16 | static_cast<uint32_t>(d) << 24;
}

constexpr uint32_t NxRevisionBase = MakeMagic('R', 'E', 'V', '0');
constexpr uint32_t OunceRevisionBase = MakeMagic('R', 'E', 'v', '0');
constexpr int CurrentRevisionNumber = 16;

}

uint32_t GetSplitterInParamHeaderMagic() {
  return MakeMagic('S', 'N', 'D', 'H');
}

uint32_t GetSplitterInfoMagic() {
  return MakeMagic('S', 'N', 'D', 'I');
}

uint32_t GetSplitterSendDataMagic() {
  return MakeMagic('S', 'N', 'D', 'D');
}

bool IsNXApplication(uint32_t revision) {
  return (revision & 0xffffff) == (NxRevisionBase & 0xffffff);
}

bool IsOunceApplication(uint32_t revision) {
  return (revision & 0xffffff) == (OunceRevisionBase & 0xffffff);
}

int GetRevisionNumber(uint32_t revision) {
  uint32_t base;
  if (IsNXApplication(revision)) {
    base = NxRevisionBase;
  }
  else if (IsOunceApplication(revision)) {
    base = OunceRevisionBase;
  }
  else {
    return -1;
  }
  uint32_t number = (revision - base) >> 24;
  if (number < 1 || number > CurrentRevisionNumber) {
    return -1;
  }
  return static_cast<int>(number);
}

bool CheckValidRevision(uint32_t revision) {
  return GetRevisionNumber(revision) != -1;
}

uint32_t GetCurrentRevision() {
  return OunceRevisionBase + (CurrentRevisionNumber << 24);
}

uint32_t GetInitialReleaseRevision() {
  return NxRevisionBase + (1 << 24);
}

bool CheckFeatureSupported(uint32_t (*feature)(), uint32_t revision) {
  int required = GetRevisionNumber(feature());
  int user = GetRevisionNumber(revision);
  if (required < 0 || user < 0) {
    return false;
  }
  return user >= required;
}

void UpdateDataHeader::Initialize(uint32_t revision) {
  m_Revision = revision;
  for (uint32_t& size : m_Sizes) {
    size = 0;
  }
  m_TotalSize = sizeof(UpdateDataHeader);
}

uint32_t UpdateDataHeader::GetRevision() const {
  return m_Revision;
}

uint32_t UpdateDataHeader::GetTotalSize() const {
  return m_TotalSize;
}

uintptr_t UpdateDataHeader::GetCurrentPtr(uintptr_t base) const {
  return base + m_TotalSize;
}

WorkBufferAllocator::WorkBufferAllocator(void* buffer, size_t size)
  : m_Buffer(reinterpret_cast<uintptr_t>(buffer)), m_Size(size),
    m_Offset(0) {}

void* WorkBufferAllocator::Allocate(size_t size, size_t alignment) {
  if (size == 0) {
    return nullptr;
  }
  uintptr_t address =
    (m_Buffer + m_Offset + alignment - 1) & ~(alignment - 1);
  if (address + size > m_Buffer + m_Size) {
    return nullptr;
  }
  m_Offset = address + size - m_Buffer;
  return reinterpret_cast<void*>(address);
}

}
