#include "nn/diag/diag_abort.hpp"
#include "nn/sf/hipc/detail/hipc_message_buffer_accessor.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::sf::hipc::detail {

namespace {

// Fields are packed without masking the inserted value.
template <int Position, int Width>
void SetField(uint32_t* word, uint32_t value) {
  constexpr uint32_t Mask = ((1u << Width) - 1) << Position;
  *word = (*word & ~Mask) | value << Position;
}

template <int Position, int Width>
uint32_t GetField(const uint32_t* word) {
  return (*word >> Position) & ((1u << Width) - 1);
}

void SetBuffer(uint32_t* descriptor, uintptr_t address, size_t size,
  uint32_t mode) {
  uint32_t attribute = descriptor[2];
  descriptor[0] = size;
  descriptor[1] = address;

  attribute = (attribute & ~0x3u) | mode;
  attribute = (attribute & ~0x1cu) | ((address >> 36) & 0x7) << 2;
  attribute = (attribute & ~0xf000000u) | ((size >> 32) & 0xf) << 24;
  attribute = (attribute & ~0xf0000000u) | ((address >> 32) & 0xf) << 28;
  descriptor[2] = attribute;
}

HipcBufferData GetBuffer(const uint32_t* descriptor) {
  uint32_t attribute = descriptor[2];
  uintptr_t address = descriptor[1] |
    static_cast<uintptr_t>((attribute >> 28) & 0xf) << 32 |
    static_cast<uintptr_t>((attribute >> 2) & 0x7) << 36;
  size_t size = descriptor[0] |
    static_cast<size_t>((attribute >> 24) & 0xf) << 32;

  return {address, size, attribute & 0x3, 0};
}

}

uint32_t HipcMessageBufferAccessor::GetTag(void* buffer, size_t size) {
  NN_ABORT_UNLESS(size > 4);
  return *static_cast<uint32_t*>(buffer);
}

bool HipcMessageBufferAccessor::SetupHeader(void* buffer, size_t size,
  const HipcMessageHeaderInfo& info) {
  m_Buffer = buffer;
  m_BufferSize = size;

  if (!SetHeadPointers(info, 0)) {
    return false;
  }

  uint32_t receiveListFlags;
  switch (info.receiveListMode) {
    case 0:
      NN_ABORT_UNLESS(info.receiveListCount == 0);
      receiveListFlags = 0;
      break;
    case 1:
      NN_ABORT_UNLESS(info.receiveListCount == 0);
      receiveListFlags = 1;
      break;
    case 2:
      NN_ABORT_UNLESS(info.receiveListCount == 1);
      receiveListFlags = 2;
      break;
    case 3:
      NN_ABORT_UNLESS(info.receiveListCount < 14);
      receiveListFlags =
        info.receiveListCount != 0 ? info.receiveListCount + 2 : 0;
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  m_Header[0] = 0;
  SetField<16, 4>(&m_Header[0], info.pointerCount);
  SetField<20, 4>(&m_Header[0], info.sendCount);
  SetField<24, 4>(&m_Header[0], info.receiveCount);
  SetField<28, 4>(&m_Header[0], info.exchangeCount);
  m_Header[1] = 0;
  SetField<0, 10>(&m_Header[1], info.rawDataByteSize / 4);
  SetField<10, 4>(&m_Header[1], receiveListFlags);

  if (m_SpecialHeader == nullptr) {
    SetField<31, 1>(&m_Header[1], 0);
    return true;
  }

  SetField<31, 1>(&m_Header[1], 1);
  m_SpecialHeader[0] = 0;
  SetField<0, 1>(m_SpecialHeader, info.hasPid);
  SetField<1, 4>(m_SpecialHeader, info.copyHandleCount);
  SetField<5, 4>(m_SpecialHeader, info.moveHandleCount);
  return true;
}

bool HipcMessageBufferAccessor::ParseHeader(
  HipcMessageHeaderInfo* pOutInfo, void* buffer, size_t size) {
  m_Buffer = buffer;
  m_BufferSize = size;
  const uint32_t* header = static_cast<const uint32_t*>(buffer);

  pOutInfo->pointerCount = GetField<16, 4>(&header[0]);
  pOutInfo->sendCount = GetField<20, 4>(&header[0]);
  pOutInfo->receiveCount = GetField<24, 4>(&header[0]);
  pOutInfo->exchangeCount = GetField<28, 4>(&header[0]);
  pOutInfo->rawDataByteSize = GetField<0, 10>(&header[1]) * 4;
  pOutInfo->receiveListCount = GetField<10, 4>(&header[1]);

  uint32_t receiveListFlags = GetField<10, 4>(&header[1]);
  switch (receiveListFlags) {
    case 0:
      pOutInfo->receiveListMode = 0;
      pOutInfo->receiveListCount = 0;
      break;
    case 1:
      pOutInfo->receiveListMode = 1;
      pOutInfo->receiveListCount = 0;
      break;
    case 2:
      pOutInfo->receiveListMode = 2;
      pOutInfo->receiveListCount = 1;
      break;
    default:
      pOutInfo->receiveListMode = 3;
      pOutInfo->receiveListCount = receiveListFlags - 2;
      break;
  }

  if (GetField<31, 1>(&header[1]) != 0) {
    const uint32_t* specialHeader = reinterpret_cast<const uint32_t*>(
      static_cast<uint8_t*>(m_Buffer) + 8);
    pOutInfo->hasPid = GetField<0, 1>(specialHeader);
    pOutInfo->copyHandleCount = GetField<1, 4>(specialHeader);
    pOutInfo->moveHandleCount = GetField<5, 4>(specialHeader);
  }
  else {
    pOutInfo->hasPid = false;
    pOutInfo->copyHandleCount = 0;
    pOutInfo->moveHandleCount = 0;
  }

  return SetHeadPointers(*pOutInfo, GetField<20, 11>(&header[1]));
}

void HipcMessageBufferAccessor::SetTag(uint16_t tag) {
  *reinterpret_cast<uint16_t*>(m_Header) = tag;
}

uint16_t HipcMessageBufferAccessor::GetTag() const {
  return *m_Header;
}

void HipcMessageBufferAccessor::SetProcessId(uint64_t processId) {
  *m_ProcessId = processId;
}

uint64_t HipcMessageBufferAccessor::GetProcessId() const {
  return *m_ProcessId;
}

void HipcMessageBufferAccessor::SetCopyHandle(int index, uint32_t handle) {
  m_CopyHandles[index] = handle;
}

uint32_t HipcMessageBufferAccessor::GetCopyHandle(int index) const {
  return m_CopyHandles[index];
}

void HipcMessageBufferAccessor::SetMoveHandle(int index, uint32_t handle) {
  m_MoveHandles[index] = handle;
}

uint32_t HipcMessageBufferAccessor::GetMoveHandle(int index) const {
  return m_MoveHandles[index];
}

void HipcMessageBufferAccessor::SetPointer(int index, uintptr_t address,
  size_t size, int receiveIndex) {
  uint32_t* descriptor = &m_Pointers[index * 2];
  uint32_t value = receiveIndex;

  value = (value & ~0x1c0u) | ((address >> 36) & 0x7) << 6;
  value = (value & ~0xf000u) | ((address >> 32) & 0xf) << 12;
  value = (value & 0xffffu) | size << 16;
  descriptor[0] = value;
  descriptor[1] = address;
}

HipcPointerData HipcMessageBufferAccessor::GetPointer(int index) const {
  const uint32_t* descriptor = &m_Pointers[index * 2];
  uintptr_t address = descriptor[1] |
    static_cast<uintptr_t>((descriptor[0] >> 12) & 0xf) << 32 |
    static_cast<uintptr_t>((descriptor[0] >> 6) & 0x7) << 36;

  return {address, descriptor[0] >> 16};
}

int HipcMessageBufferAccessor::GetPointerReceiveIndex(int index) const {
  return m_Pointers[index * 2] & 0xf;
}

void HipcMessageBufferAccessor::SetSend(int index, uintptr_t address,
  size_t size, uint32_t mode) {
  SetBuffer(&m_Sends[index * 3], address, size, mode);
}

HipcBufferData HipcMessageBufferAccessor::GetSend(int index) const {
  return GetBuffer(&m_Sends[index * 3]);
}

void HipcMessageBufferAccessor::SetReceive(int index, uintptr_t address,
  size_t size, uint32_t mode) {
  SetBuffer(&m_Receives[index * 3], address, size, mode);
}

HipcBufferData HipcMessageBufferAccessor::GetReceive(int index) const {
  return GetBuffer(&m_Receives[index * 3]);
}

void HipcMessageBufferAccessor::SetExchange(int index, uintptr_t address,
  size_t size, uint32_t mode) {
  SetBuffer(&m_Exchanges[index * 3], address, size, mode);
}

HipcBufferData HipcMessageBufferAccessor::GetExchange(int index) const {
  return GetBuffer(&m_Exchanges[index * 3]);
}

void* HipcMessageBufferAccessor::GetRawPointer() const {
  return m_RawData;
}

void HipcMessageBufferAccessor::SetReceiveList(int index, uintptr_t address,
  size_t size) {
  uint32_t* descriptor = &m_ReceiveList[index * 2];
  descriptor[0] = address;
  descriptor[1] = static_cast<uint16_t>(address >> 32) | size << 16;
}

HipcPointerData HipcMessageBufferAccessor::GetReceiveList(int index) const {
  const uint32_t* descriptor = &m_ReceiveList[index * 2];
  uintptr_t address = descriptor[0] |
    static_cast<uintptr_t>(descriptor[1] & 0x7f) << 32;

  return {address, descriptor[1] >> 16};
}

}
