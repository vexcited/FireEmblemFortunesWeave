#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] U64 GameRoutine_101a70(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_651250(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1126e0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_128860(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1322c0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1414a0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_145700(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_153b20(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1679b0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_178880(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_276be0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_27b680(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_27f3d0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_28dca0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_2914a0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_2acf30(U64);

[[gnu::visibility("hidden")]] U64 GameStub_101ba0(U64 object) {
  const U64 base = object - 0x28;
  GameRoutine_101a70(base);
  return GameRoutine_651250(base, 0x1688);
}

[[gnu::visibility("hidden")]] U64 GameStub_1127f0(U64 object) {
  const U64 base = object - 0x28;
  GameRoutine_1126e0(base);
  return GameRoutine_651250(base, 0x1688);
}

[[gnu::visibility("hidden")]] U64 GameStub_128e40(U64 object) {
  const U64 base = object - 0x28;
  GameRoutine_128860(base);
  return GameRoutine_651250(base, 0x17e8);
}

[[gnu::visibility("hidden")]] U64 GameStub_132780(U64 object) {
  const U64 base = object - 0x28;
  GameRoutine_1322c0(base);
  return GameRoutine_651250(base, 0x1758);
}

[[gnu::visibility("hidden")]] U64 GameStub_141680(U64 object) {
  const U64 base = object - 0x28;
  GameRoutine_1414a0(base);
  return GameRoutine_651250(base, 0x1808);
}

[[gnu::visibility("hidden")]] U64 GameStub_145b20(U64 object) {
  const U64 base = object - 0x28;
  GameRoutine_145700(base);
  return GameRoutine_651250(base, 0x17b8);
}

[[gnu::visibility("hidden")]] U64 GameStub_153ce0(U64 object) {
  const U64 base = object - 0x28;
  GameRoutine_153b20(base);
  return GameRoutine_651250(base, 0x1a40);
}

[[gnu::visibility("hidden")]] U64 GameStub_167a70(U64 object) {
  const U64 base = object - 0x28;
  GameRoutine_1679b0(base);
  return GameRoutine_651250(base, 0x1630);
}

[[gnu::visibility("hidden")]] U64 GameStub_16dc30(U64 object) {
  const U64 base = object - 0x28;
  GameRoutine_1679b0(base);
  return GameRoutine_651250(base, 0x1640);
}

[[gnu::visibility("hidden")]] U64 GameStub_170030(U64 object) {
  const U64 base = object - 0x28;
  GameRoutine_1679b0(base);
  return GameRoutine_651250(base, 0x1630);
}

[[gnu::visibility("hidden")]] U64 GameStub_178a40(U64 object) {
  const U64 base = object - 0x28;
  GameRoutine_178880(base);
  return GameRoutine_651250(base, 0x1668);
}

[[gnu::visibility("hidden")]] U64 GameStub_190830(U64 object) {
  const U64 base = object - 0x28;
  GameRoutine_1679b0(base);
  return GameRoutine_651250(base, 0x1630);
}

[[gnu::visibility("hidden")]] U64 GameStub_276ca0(U64 object) {
  const U64 base = object - 0xd0;
  GameRoutine_276be0(base);
  return GameRoutine_651250(base, 0x120);
}

[[gnu::visibility("hidden")]] U64 GameStub_27b6d0(U64 object) {
  const U64 base = object - 0x18;
  GameRoutine_27b680(base);
  return GameRoutine_651250(base, 0x240);
}

[[gnu::visibility("hidden")]] U64 GameStub_27f470(U64 object) {
  const U64 base = object - 0xc8;
  GameRoutine_27f3d0(base);
  return GameRoutine_651250(base, 0x780);
}

[[gnu::visibility("hidden")]] U64 GameStub_28dd60(U64 object) {
  const U64 base = object - 0xc8;
  GameRoutine_28dca0(base);
  return GameRoutine_651250(base, 0x3b0);
}

[[gnu::visibility("hidden")]] U64 GameStub_28dda0(U64 object) {
  const U64 base = object - 0xe0;
  GameRoutine_28dca0(base);
  return GameRoutine_651250(base, 0x3b0);
}

[[gnu::visibility("hidden")]] U64 GameStub_291560(U64 object) {
  const U64 base = object - 0x18;
  GameRoutine_2914a0(base);
  return GameRoutine_651250(base, 0x2c8);
}

[[gnu::visibility("hidden")]] U64 GameStub_2acfe0(U64 object) {
  const U64 base = object - 0xc8;
  GameRoutine_2acf30(base);
  return GameRoutine_651250(base, 0x1b8);
}

[[gnu::visibility("hidden")]] U64 GameStub_2ad020(U64 object) {
  const U64 base = object - 0xe0;
  GameRoutine_2acf30(base);
  return GameRoutine_651250(base, 0x1b8);
}
