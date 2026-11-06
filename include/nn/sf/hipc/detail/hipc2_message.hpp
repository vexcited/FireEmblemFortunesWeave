#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/result.hpp"

namespace nn::sf::hipc::detail {

enum class MessageType : uint16_t {
  Invalid = 0,
  CmifRequest = 4,
  Close = 2,
  CmifRequestWithContext = 6,
};

struct Hipc2MessageHeaderInfo {
  bool hasProcessId;
  uint8_t copyHandleCount;
  uint8_t moveHandleCount;
  uint8_t pointerCount;
  uint8_t sendCount;
  uint8_t receiveCount;
  uint8_t exchangeCount;
  uint8_t reserved;
  uint16_t rawDataByteSize;
  uint16_t reserved2;
  uint16_t tag;
  bool hasSpecialHeader;
  uint8_t reserved3;
  uint16_t receiveListMode;
};

static_assert(sizeof(Hipc2MessageHeaderInfo) == 0x12);

struct Hipc2MessageOffsets {
  uint8_t specialHeader;
  uint8_t processId;
  uint8_t copyHandles;
  uint8_t moveHandles;
  uint8_t pointers;
  uint8_t sends;
  uint8_t receives;
  uint8_t rawData;
  uint8_t receiveList;
  uint8_t reserved;
  uint16_t messageWordCount;
};

static_assert(sizeof(Hipc2MessageOffsets) == 12);

class Hipc2MessageReader {
public:
  void Initialize(void* buffer);

  uint32_t* GetRawData() const {
    return static_cast<uint32_t*>(m_Buffer) + m_Offsets.rawData;
  }

private:
  void* m_Buffer;
  Hipc2MessageHeaderInfo m_Info;
  Hipc2MessageOffsets m_Offsets;
  uint8_t m_Reserved[2];
};

static_assert(sizeof(Hipc2MessageReader) == 0x28);

}
