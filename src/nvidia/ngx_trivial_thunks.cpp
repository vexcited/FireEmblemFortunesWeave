#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] extern const U64 NgxSlot_9521a8;
[[gnu::visibility("hidden")]] U64 NgxRoutine_baf00(U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_430(U64, U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_659c0(U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_70b00(U64);
[[gnu::visibility("hidden")]] extern const U64 NgxSlot_952a88;
[[gnu::visibility("hidden")]] U64 NgxRoutine_77080(U64);
[[gnu::visibility("hidden")]] extern const U64 NgxSlot_952a90;
[[gnu::visibility("hidden")]] extern const U64 NgxSlot_952a98;
[[gnu::visibility("hidden")]] extern const U64 NgxSlot_952aa0;
[[gnu::visibility("hidden")]] extern const U64 NgxSlot_952aa8;
[[gnu::visibility("hidden")]] extern const U64 NgxSlot_952ab0;
[[gnu::visibility("hidden")]] extern const U64 NgxSlot_952ab8;
[[gnu::visibility("hidden")]] extern const U64 NgxSlot_952ac0;
[[gnu::visibility("hidden")]] extern const U64 NgxSlot_952ac8;
[[gnu::visibility("hidden")]] extern const U64 NgxSlot_952ad0;
[[gnu::visibility("hidden")]] extern const U64 NgxSlot_952ad8;
[[gnu::visibility("hidden")]] U64 NgxRoutine_a6360(U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_b6b00(U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_bbc60(U64, U32);
[[gnu::visibility("hidden")]] U64 NgxRoutine_bc480(U64, U32);
[[gnu::visibility("hidden")]] U64 NgxRoutine_bc9e0(U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_bca20(U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_bd3d0(U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_be570(U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_be660(U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_bed80(U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_c0410(U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_db000(U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_db710(U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_df900(U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_dd7e0(U64);
[[gnu::visibility("hidden")]] U64 NgxRoutine_dd870(U64);

[[gnu::visibility("hidden")]] U64 NgxStub_28c40(U64 object) {
  At<U64>(object, 0) = NgxSlot_9521a8 + 0x10;
  NgxRoutine_baf00(object);
  return NgxRoutine_430(object, 0x40);
}

[[gnu::visibility("hidden")]] U64 NgxStub_65c60(U64 object) {
  NgxRoutine_659c0(object);
  return NgxRoutine_430(object, 0x88);
}

[[gnu::visibility("hidden")]] U64 NgxStub_6b700(U64 object) {
  NgxRoutine_70b00(object);
  return NgxRoutine_430(object, 0x140);
}

[[gnu::visibility("hidden")]] U64 NgxStub_70a60(U64 object) {
  NgxRoutine_baf00(object);
  return NgxRoutine_430(object, 0x20);
}

[[gnu::visibility("hidden")]] U64 NgxStub_76880(U64 object) {
  At<U64>(object, 0) = NgxSlot_952a88 + 0x10;
  NgxRoutine_baf00(object);
  return NgxRoutine_430(object, 0x358);
}

[[gnu::visibility("hidden")]] U64 NgxStub_77160(U64 object) {
  NgxRoutine_77080(object);
  return NgxRoutine_430(object, 0x340);
}

[[gnu::visibility("hidden")]] U64 NgxStub_772d0(U64 object) {
  At<U64>(object, 0) = NgxSlot_952a90 + 0x10;
  NgxRoutine_baf00(object);
  return NgxRoutine_430(object, 0x358);
}

[[gnu::visibility("hidden")]] U64 NgxStub_77ac0(U64 object) {
  At<U64>(object, 0) = NgxSlot_952a98 + 0x10;
  NgxRoutine_baf00(object);
  return NgxRoutine_430(object, 0x358);
}

[[gnu::visibility("hidden")]] U64 NgxStub_782c0(U64 object) {
  At<U64>(object, 0) = NgxSlot_952aa0 + 0x10;
  NgxRoutine_baf00(object);
  return NgxRoutine_430(object, 0x358);
}

[[gnu::visibility("hidden")]] U64 NgxStub_78ac0(U64 object) {
  At<U64>(object, 0) = NgxSlot_952aa8 + 0x10;
  NgxRoutine_baf00(object);
  return NgxRoutine_430(object, 0x358);
}

[[gnu::visibility("hidden")]] U64 NgxStub_792c0(U64 object) {
  At<U64>(object, 0) = NgxSlot_952ab0 + 0x10;
  NgxRoutine_baf00(object);
  return NgxRoutine_430(object, 0x358);
}

[[gnu::visibility("hidden")]] U64 NgxStub_79ac0(U64 object) {
  At<U64>(object, 0) = NgxSlot_952ab8 + 0x10;
  NgxRoutine_baf00(object);
  return NgxRoutine_430(object, 0x358);
}

[[gnu::visibility("hidden")]] U64 NgxStub_7a2c0(U64 object) {
  At<U64>(object, 0) = NgxSlot_952ac0 + 0x10;
  NgxRoutine_baf00(object);
  return NgxRoutine_430(object, 0x358);
}

[[gnu::visibility("hidden")]] U64 NgxStub_7aac0(U64 object) {
  At<U64>(object, 0) = NgxSlot_952ac8 + 0x10;
  NgxRoutine_baf00(object);
  return NgxRoutine_430(object, 0x358);
}

[[gnu::visibility("hidden")]] U64 NgxStub_7b2c0(U64 object) {
  At<U64>(object, 0) = NgxSlot_952ad0 + 0x10;
  NgxRoutine_baf00(object);
  return NgxRoutine_430(object, 0x358);
}

[[gnu::visibility("hidden")]] U64 NgxStub_7bac0(U64 object) {
  At<U64>(object, 0) = NgxSlot_952ad8 + 0x10;
  NgxRoutine_baf00(object);
  return NgxRoutine_430(object, 0x358);
}

[[gnu::visibility("hidden")]] U64 NgxStub_a8810(U64 object) {
  NgxRoutine_a6360(object);
  return NgxRoutine_430(object, 0x358);
}

[[gnu::visibility("hidden")]] U64 NgxStub_ba3c0(U64 object) {
  NgxRoutine_b6b00(object);
  return NgxRoutine_430(object, 0x688);
}

[[gnu::visibility("hidden")]] U64 NgxStub_bbaf0(U64 object) {
  return NgxRoutine_bbc60(object, 0x0);
}

[[gnu::visibility("hidden")]] U64 NgxStub_bc320(U64 object) {
  return NgxRoutine_bc480(object, 0x0);
}

[[gnu::visibility("hidden")]] U64 NgxStub_bc9f0(U64 object) {
  NgxRoutine_bc9e0(object);
  return NgxRoutine_430(object, 0x98);
}

[[gnu::visibility("hidden")]] U64 NgxStub_bca40(U64 object) {
  NgxRoutine_bca20(object);
  return NgxRoutine_430(object, 0x40);
}

[[gnu::visibility("hidden")]] U64 NgxStub_bd3f0(U64 object) {
  NgxRoutine_bd3d0(object);
  return NgxRoutine_430(object, 0x40);
}

[[gnu::visibility("hidden")]] U64 NgxStub_be580(U64 object) {
  NgxRoutine_be570(object);
  return NgxRoutine_430(object, 0x20);
}

[[gnu::visibility("hidden")]] U64 NgxStub_be710(U64 object) {
  NgxRoutine_be660(object);
  return NgxRoutine_430(object, 0x88);
}

[[gnu::visibility("hidden")]] U64 NgxStub_be890(U64 object) {
  NgxRoutine_baf00(object);
  return NgxRoutine_430(object, 0x8);
}

[[gnu::visibility("hidden")]] U64 NgxStub_bed90(U64 object) {
  NgxRoutine_bed80(object);
  return NgxRoutine_430(object, 0x20);
}

[[gnu::visibility("hidden")]] U64 NgxStub_c0420(U64 object) {
  NgxRoutine_c0410(object);
  return NgxRoutine_430(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 NgxStub_db0f0(U64 object) {
  NgxRoutine_db000(object);
  return NgxRoutine_430(object, 0x138);
}

[[gnu::visibility("hidden")]] U64 NgxStub_db760(U64 object) {
  NgxRoutine_db710(object);
  return NgxRoutine_430(object, 0x20);
}

[[gnu::visibility("hidden")]] U64 NgxStub_dbcd0(U64 object) {
  NgxRoutine_df900(object);
  return NgxRoutine_430(object, 0x18);
}

[[gnu::visibility("hidden")]] U64 NgxStub_dd840(U64 object) {
  NgxRoutine_dd7e0(object);
  return NgxRoutine_430(object, 0x30);
}

[[gnu::visibility("hidden")]] U64 NgxStub_dd8d0(U64 object) {
  NgxRoutine_dd870(object);
  return NgxRoutine_430(object, 0x30);
}

[[gnu::visibility("hidden")]] U64 NgxStub_df9c0(U64 object) {
  NgxRoutine_baf00(object);
  return NgxRoutine_430(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 NgxStub_df9f0(U64 object) {
  NgxRoutine_baf00(object);
  return NgxRoutine_430(object, 0x18);
}
