#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] U64 NgxRoutine_29510(U64, U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_293c0(U64, U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_29450(U64, U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_297f0(U64, U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_29610(U64, U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_296f0(U64, U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_29a30(U64, U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_29970(U64, U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_299d0(U64, U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_29ba0(U64, U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_29ad0(U64, U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_29b30(U64, U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_27b30(U64, U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_a5000(U64, U64, U64, U32, U64,
  U32);
[[gnu::visibility("hidden")]] extern U8 NgxData_2b70a48[];
[[gnu::visibility("hidden")]] U64 NgxRoutine_ae290(U64, U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_ae320(U64, U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_ad920(U64, U64, U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_ae220(U64, U64);

[[gnu::visibility("hidden")]] U64 NgxStub_27e10(U64 object) {
  return NgxRoutine_29510(object + 0x68, object + 0x58);
}

[[gnu::visibility("hidden")]] U64 NgxStub_27e60(U64 object) {
  return NgxRoutine_293c0(object + 0x68, object + 0x58);
}

[[gnu::visibility("hidden")]] U64 NgxStub_27e70(U64 object) {
  return NgxRoutine_29450(object + 0x68, object + 0x58);
}

[[gnu::visibility("hidden")]] U64 NgxStub_280f0(U64 object) {
  return NgxRoutine_297f0(object + 0x68, object + 0x58);
}

[[gnu::visibility("hidden")]] U64 NgxStub_28140(U64 object) {
  return NgxRoutine_29610(object + 0x68, object + 0x58);
}

[[gnu::visibility("hidden")]] U64 NgxStub_28150(U64 object) {
  return NgxRoutine_296f0(object + 0x68, object + 0x58);
}

[[gnu::visibility("hidden")]] U64 NgxStub_28480(U64 object) {
  return NgxRoutine_29a30(object + 0x68, object + 0x58);
}

[[gnu::visibility("hidden")]] U64 NgxStub_284d0(U64 object) {
  return NgxRoutine_29970(object + 0x68, object + 0x58);
}

[[gnu::visibility("hidden")]] U64 NgxStub_284e0(U64 object) {
  return NgxRoutine_299d0(object + 0x68, object + 0x58);
}

[[gnu::visibility("hidden")]] U64 NgxStub_28730(U64 object) {
  return NgxRoutine_29ba0(object + 0x68, object + 0x58);
}

[[gnu::visibility("hidden")]] U64 NgxStub_28780(U64 object) {
  return NgxRoutine_29ad0(object + 0x68, object + 0x58);
}

[[gnu::visibility("hidden")]] U64 NgxStub_28790(U64 object) {
  return NgxRoutine_29b30(object + 0x68, object + 0x58);
}

[[gnu::visibility("hidden")]] U64 NgxStub_29a20(U64 object, U64 a1) {
  return NgxRoutine_27b30(At<U64>(a1, 0x0), object + 0x38);
}

[[gnu::visibility("hidden")]] U64 NgxStub_29b90(U64 object, U64 a1) {
  return NgxRoutine_27b30(At<U64>(a1, 0x0), object + 0x68);
}

[[gnu::visibility("hidden")]] U64 NgxStub_a55c0(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return NgxRoutine_a5000(object, a1, a2, 0x1, a3, At<U32>(object, 0x340));
}

[[gnu::visibility("hidden")]] U64 NgxStub_af1b0(U64 object) {
  return NgxRoutine_ae290(At<U64>(reinterpret_cast<U64>(NgxData_2b70a48),
    0x0), object);
}

[[gnu::visibility("hidden")]] U64 NgxStub_af1c0(U64 object) {
  return NgxRoutine_ae320(At<U64>(reinterpret_cast<U64>(NgxData_2b70a48),
    0x0), object);
}

[[gnu::visibility("hidden")]] U64 NgxStub_afb10(U64 object, U64 a1) {
  return NgxRoutine_ad920(reinterpret_cast<U64>(NgxData_2b70a48), object, a1);
}

[[gnu::visibility("hidden")]] U64 NgxStub_afb30(U64 object) {
  return NgxRoutine_ae220(At<U64>(reinterpret_cast<U64>(NgxData_2b70a48),
    0x0), object);
}
