#include "graphics/program_commands.hpp"

namespace fw::graphics {
namespace {

struct Packet {
  const uint32_t* words;
  uint16_t count;
  uint16_t required;
  bool second_channel_word;
};

#include "program_packets.inc"

}

void EmitProgramCommands(
  const ProgramProfile* profile, ProgramCommandContext* context,
  uint32_t channel
) {
  const bool revised = profile->revision >= 1;
  const bool compact = profile->mode == 1;
  const uint16_t* sequence;
  size_t count;

  if (compact) {
    sequence = revised ? kProfile11 : kProfile01;
    count = sizeof(kProfile01) / sizeof(kProfile01[0]);
  }
  else {
    sequence = revised ? kProfile10 : kProfile00;
    count = sizeof(kProfile00) / sizeof(kProfile00[0]);
  }

  const uint32_t channel_bits = channel << 13;
  ProgramCommandMemory* memory = &context->memory;

  for (size_t i = 0; i < count; ++i) {
    const Packet& packet = kPackets[sequence[i]];
    uint32_t* cursor = memory->cursor;

    if (reinterpret_cast<uintptr_t>(cursor) + packet.required >
        reinterpret_cast<uintptr_t>(memory->limit)) {
      uint32_t request = memory->reserved + packet.required / 4;
      GrowProgramCommandMemory(memory, cursor, uint64_t(request) << 2);
      cursor = memory->cursor;
    }

    for (unsigned word = 0; word < packet.count; ++word) {
      uint32_t value = packet.words[word];

      if (word == 0 || (word == 3 && packet.second_channel_word)) {
        value |= channel_bits;
      }

      cursor[word] = value;
    }

    memory->cursor = cursor + packet.count;
  }
}

}
