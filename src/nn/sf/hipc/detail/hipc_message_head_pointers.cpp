#include "nn/sf/hipc/detail/hipc_message_buffer_accessor.hpp"

namespace nn::sf::hipc::detail {

bool HipcMessageBufferAccessor::SetHeadPointers(
  const HipcMessageHeaderInfo& info, uint16_t receiveListOffset) {
  uint8_t* buffer = static_cast<uint8_t*>(m_Buffer);
  m_Header = reinterpret_cast<uint32_t*>(buffer);
  uint8_t* current = buffer + 8;

  if (!info.hasPid && info.copyHandleCount == 0 &&
      info.moveHandleCount == 0) {
    m_SpecialHeader = nullptr;
  }
  else {
    m_SpecialHeader = reinterpret_cast<uint32_t*>(current);
    current = buffer + 12;

    if (info.hasPid) {
      m_ProcessId = reinterpret_cast<uint64_t*>(current);
      current = buffer + 20;
    }

    if (info.copyHandleCount != 0) {
      m_CopyHandles = reinterpret_cast<uint32_t*>(current);
      current += 4 * info.copyHandleCount;
    }

    if (info.moveHandleCount != 0) {
      m_MoveHandles = reinterpret_cast<uint32_t*>(current);
      current += 4 * info.moveHandleCount;
    }
  }

  if (info.pointerCount != 0) {
    m_Pointers = reinterpret_cast<uint32_t*>(current);
    current += 8 * info.pointerCount;
  }

  if (info.sendCount != 0) {
    m_Sends = reinterpret_cast<uint32_t*>(current);
    current += 12 * info.sendCount;
  }

  if (info.receiveCount != 0) {
    m_Receives = reinterpret_cast<uint32_t*>(current);
    current += 12 * info.receiveCount;
  }

  if (info.exchangeCount != 0) {
    m_Exchanges = reinterpret_cast<uint32_t*>(current);
    current += 12 * info.exchangeCount;
  }

  if (info.rawDataByteSize != 0) {
    m_RawData = current;
    current += info.rawDataByteSize;
  }

  if (info.receiveListCount != 0) {
    if (receiveListOffset != 0) {
      current = buffer + 4 * receiveListOffset;
    }

    m_ReceiveList = reinterpret_cast<uint32_t*>(current);
    current += 8 * info.receiveListCount;
  }

  size_t messageSize = current - buffer;
  if (messageSize > m_BufferSize) {
    return false;
  }

  m_MessageSize = messageSize;
  return true;
}

}
