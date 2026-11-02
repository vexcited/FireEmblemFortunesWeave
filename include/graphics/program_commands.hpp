#pragma once

#include <stddef.h>
#include <stdint.h>

namespace fw::graphics {

struct ProgramProfile {
  int32_t revision;
  uint32_t mode;
};

struct ProgramCommandMemory {
  uint32_t* cursor;
  uint32_t* limit;
  uint8_t unknown_010[88];
  uint32_t reserved;
};

struct ProgramCommandContext {
  uint8_t unknown_000[11240];
  ProgramCommandMemory memory;
};

static_assert(offsetof(ProgramCommandMemory, reserved) == 104);
static_assert(offsetof(ProgramCommandContext, memory) == 11240);

void GrowProgramCommandMemory(
  ProgramCommandMemory*, uint32_t* cursor, uint64_t request
);

void EmitProgramCommands(
  const ProgramProfile*, ProgramCommandContext*, uint32_t channel
);

}
