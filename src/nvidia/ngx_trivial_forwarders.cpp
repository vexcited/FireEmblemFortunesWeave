#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] U64 NgxRoutine_430(U64, U32);
[[gnu::visibility("hidden")]] U64 NgxRoutine_b59c0(U64, U32);
[[gnu::visibility("hidden")]] U64 NgxRoutine_bbc60(U64, U32);
[[gnu::visibility("hidden")]] U64 NgxRoutine_bc480(U64, U32);

[[gnu::visibility("hidden")]] U64 NgxStub_28d10(U64 object) {
  return NgxRoutine_430(object, 0x40);
}

[[gnu::visibility("hidden")]] U64 NgxStub_29c50(U64 object) {
  return NgxRoutine_430(object, 0x1c0);
}

[[gnu::visibility("hidden")]] U64 NgxStub_29c60(U64 object) {
  return NgxRoutine_430(object, 0x308);
}

[[gnu::visibility("hidden")]] U64 NgxStub_29c70(U64 object) {
  return NgxRoutine_430(object, 0xd0);
}

[[gnu::visibility("hidden")]] U64 NgxStub_29c80(U64 object) {
  return NgxRoutine_430(object, 0x100);
}

[[gnu::visibility("hidden")]] U64 NgxStub_39820(U64 object) {
  return object + 0x8;
}

[[gnu::visibility("hidden")]] U64 NgxStub_70ad0(U64 object) {
  return NgxRoutine_430(object, 0x20);
}

[[gnu::visibility("hidden")]] U64 NgxStub_768d0(U64 object) {
  return NgxRoutine_430(object, 0x358);
}

[[gnu::visibility("hidden")]] U64 NgxStub_a9b60(U64 object) {
  return NgxRoutine_430(object, 0x18);
}

[[gnu::visibility("hidden")]] U64 NgxStub_b5cc0(U64 object) {
  return NgxRoutine_b59c0(object, 0x1);
}

[[gnu::visibility("hidden")]] U64 NgxStub_bbb00(U64 object) {
  return NgxRoutine_bbc60(object, 0x1);
}

[[gnu::visibility("hidden")]] U64 NgxStub_bc330(U64 object) {
  return NgxRoutine_bc480(object, 0x1);
}

[[gnu::visibility("hidden")]] void NgxStub_db3a0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}
