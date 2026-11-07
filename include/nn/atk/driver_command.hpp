#pragma once

#include <cstddef>
#include <cstdint>

namespace nn::atk::detail {

enum DriverCommandId {
  DriverCommandId_AuxBusVolume = 0x4f,
};

struct Command {
  Command* next;
  int id;
  uint8_t reserved[0xc];
};

struct AuxBusVolumeCommand : Command {
  int bus;
  int subMix;
  float volume;
  int fadeFrames;
};

class DriverCommand {
public:
  static DriverCommand& GetInstance();

  void* AllocMemory(size_t size, size_t alignment, bool force);
  uint32_t PushCommand(Command* command);

  template<typename T>
  T* AllocCommand() {
    return static_cast<T*>(AllocMemory(sizeof(T), alignof(T), true));
  }
};

}
