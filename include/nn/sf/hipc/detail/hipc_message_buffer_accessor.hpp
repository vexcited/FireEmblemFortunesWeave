#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::sf::hipc::detail {

struct HipcMessageHeaderInfo {
  bool hasPid;
  uint8_t copyHandleCount;
  uint8_t moveHandleCount;
  uint8_t pointerCount;
  uint8_t sendCount;
  uint8_t receiveCount;
  uint8_t exchangeCount;
  uint16_t rawDataByteSize;
  uint8_t receiveListCount;
  uint8_t receiveListMode;
};

struct HipcPointerData {
  uintptr_t address;
  size_t size;
};

struct HipcBufferData {
  uintptr_t address;
  size_t size;
  uint32_t mode;
  uint32_t reserved;
};

class HipcMessageBufferAccessor {
public:
  static uint32_t GetTag(void* buffer, size_t size);

  bool SetupHeader(void* buffer, size_t size,
    const HipcMessageHeaderInfo& info);
  bool ParseHeader(HipcMessageHeaderInfo* pOutInfo, void* buffer,
    size_t size);

  void SetTag(uint16_t tag);
  uint16_t GetTag() const;
  void SetProcessId(uint64_t processId);
  uint64_t GetProcessId() const;
  void SetCopyHandle(int index, uint32_t handle);
  uint32_t GetCopyHandle(int index) const;
  void SetMoveHandle(int index, uint32_t handle);
  uint32_t GetMoveHandle(int index) const;
  void SetPointer(int index, uintptr_t address, size_t size,
    int receiveIndex);
  HipcPointerData GetPointer(int index) const;
  int GetPointerReceiveIndex(int index) const;
  void SetSend(int index, uintptr_t address, size_t size, uint32_t mode);
  HipcBufferData GetSend(int index) const;
  void SetReceive(int index, uintptr_t address, size_t size, uint32_t mode);
  HipcBufferData GetReceive(int index) const;
  void SetExchange(int index, uintptr_t address, size_t size, uint32_t mode);
  HipcBufferData GetExchange(int index) const;
  void* GetRawPointer() const;
  void SetReceiveList(int index, uintptr_t address, size_t size);
  HipcPointerData GetReceiveList(int index) const;

private:
  bool SetHeadPointers(const HipcMessageHeaderInfo& info,
    uint16_t receiveListOffset);

  void* m_Buffer;
  size_t m_BufferSize;
  size_t m_MessageSize;
  uint32_t* m_Header;
  uint32_t* m_SpecialHeader;
  uint64_t* m_ProcessId;
  uint32_t* m_CopyHandles;
  uint32_t* m_MoveHandles;
  uint32_t* m_Pointers;
  uint32_t* m_Sends;
  uint32_t* m_Receives;
  uint32_t* m_Exchanges;
  void* m_RawData;
  uint32_t* m_ReceiveList;
};

}
