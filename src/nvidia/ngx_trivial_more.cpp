#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] extern const U64 NgxSlot_952a78;
[[gnu::visibility("hidden")]] extern const U64 NgxSlot_952a80;
[[gnu::visibility("hidden")]] extern const U64 NgxSlot_954728;

[[gnu::visibility("hidden")]] void NgxStub_70a90(U64 object) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(object, 0x18);
  if (target != 0) {
    At<Method>(At<U64>(target, 0), 0x8)(target);
  }
}

[[gnu::visibility("hidden")]] U64 NgxStub_70ab0(U64 object, U64 type) {
  return At<U64>(type, 8) == NgxSlot_952a78 ? object + 0x18 : 0;
}

[[gnu::visibility("hidden")]] U64 NgxStub_70ae0(U64 object, U64 type) {
  return At<U64>(type, 8) == NgxSlot_952a80 ? object + 0x18 : 0;
}

[[gnu::visibility("hidden")]] U64 NgxStub_b10a0(U64 object, U64 type) {
  return At<U64>(type, 8) == NgxSlot_954728 ? object + 0x18 : 0;
}

[[gnu::visibility("hidden")]] void NgxStub_b3540(U64 object) {
  At<U64>(object, 0x0) = 0;
}
