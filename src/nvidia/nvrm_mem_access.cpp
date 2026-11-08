#include <stddef.h>
#include <stdint.h>

using NvRmMemHandle = uint32_t;

extern "C" int32_t NvRmMemRead(NvRmMemHandle handle, uint64_t offset,
  void* pDestination, size_t size);
extern "C" int32_t NvRmMemWrite(NvRmMemHandle handle, uint64_t offset,
  const void* pSource, size_t size);

extern "C" uint8_t NvRmMemRd08(NvRmMemHandle handle, uint32_t offset) {
  uint32_t value = 0;
  NvRmMemRead(handle, offset, &value, 1);
  return static_cast<uint8_t>(value);
}

extern "C" uint16_t NvRmMemRd16(NvRmMemHandle handle, uint32_t offset) {
  uint32_t value = 0;
  NvRmMemRead(handle, offset, &value, 2);
  return static_cast<uint16_t>(value);
}

extern "C" uint32_t NvRmMemRd32(NvRmMemHandle handle, uint32_t offset) {
  uint32_t value = 0;
  NvRmMemRead(handle, offset, &value, 4);
  return value;
}

extern "C" void NvRmMemWr08(NvRmMemHandle handle, uint32_t offset,
  uint8_t data) {
  uint32_t value = 0;
  *reinterpret_cast<uint8_t*>(&value) = data;
  NvRmMemWrite(handle, offset, &value, 1);
}

extern "C" void NvRmMemWr16(NvRmMemHandle handle, uint32_t offset,
  uint16_t data) {
  uint32_t value = 0;
  *reinterpret_cast<uint16_t*>(&value) = data;
  NvRmMemWrite(handle, offset, &value, 2);
}

extern "C" void NvRmMemWr32(NvRmMemHandle handle, uint32_t offset,
  uint32_t data) {
  uint32_t value = data;
  NvRmMemWrite(handle, offset, &value, 4);
}
