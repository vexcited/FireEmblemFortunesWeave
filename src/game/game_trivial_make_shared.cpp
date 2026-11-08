#include <stdint.h>

#include "memory/heap_manager.hpp"

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

// A std::shared_ptr, returned in memory like the original.
struct SharedPointer {
  U64 object;
  U64 control;

  SharedPointer() = default;
  SharedPointer(const SharedPointer& other);
  ~SharedPointer();
};

[[gnu::visibility("hidden")]] extern U8 GameData_1fd9a88[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd89d8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9ad8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd8a30[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9b28[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd8a88[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9b78[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd8ae0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9bc8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd8b38[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9c18[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd8b90[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9c68[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd8be8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9cb8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd8c40[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9d08[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd8c98[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9d58[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd8cf0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9da8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd8d48[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9df8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd8da0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9e48[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd8df8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9e98[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd8e50[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9ee8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd8ea8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9f38[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd8f00[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9f88[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd8f58[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9fd8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd8fb0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda028[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9008[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda078[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9060[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda0c8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd90b8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda118[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9110[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda168[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9168[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda1b8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd91c0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda208[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9218[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda258[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9270[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda2a8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd92c8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda348[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9378[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda398[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd93d0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda3e8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9428[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda438[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9480[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda488[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd94d8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda4d8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9530[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda528[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9588[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda578[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd95e0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda5c8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9638[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda618[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9690[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda668[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd96e8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda6b8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9740[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda708[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9798[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda758[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd97f0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda7a8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd9848[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda7f8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd98a0[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dc178[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dc1c8[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dc220[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dc270[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dc2c8[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dc318[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dc370[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dc3c0[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dc4c0[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dc510[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dc568[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dc5b8[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dc760[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dc7b0[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dcaa8[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dcaf8[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dce98[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dcee8[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dd288[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dd2d8[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dd330[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dd380[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dd678[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dd6c8[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dd720[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dd770[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dd7c8[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dd818[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dd870[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dd8c0[];
[[gnu::visibility("hidden")]] extern U8 GameData_20dda68[];
[[gnu::visibility("hidden")]] extern U8 GameData_20ddab8[];

[[gnu::visibility("hidden")]] SharedPointer GameStub_d01c40() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x38, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fd9a88);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd89d8);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d01d10() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x38, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fd9ad8);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd8a30);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d01de0() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x38, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fd9b28);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd8a88);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d01eb0() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x38, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fd9b78);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd8ae0);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d01f80() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x38, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fd9bc8);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd8b38);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d02050() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x38, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fd9c18);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd8b90);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d02120() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x38, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fd9c68);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd8be8);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d021f0() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x40, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fd9cb8);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd8c40);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d022c0() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x40, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fd9d08);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd8c98);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d02390() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x50, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x40) = 0;
  At<U64>(control, 0x48) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fd9d58);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd8cf0);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d02460() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x40, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fd9da8);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd8d48);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d02530() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x40, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fd9df8);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd8da0);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d02600() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x38, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fd9e48);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd8df8);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d026d0() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x58, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  At<U64>(control, 0x40) = 0;
  At<U64>(control, 0x48) = 0;
  At<U64>(control, 0x50) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fd9e98);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd8e50);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d027a0() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x50, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x40) = 0;
  At<U64>(control, 0x48) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fd9ee8);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd8ea8);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d02870() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x40, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fd9f38);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd8f00);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d02940() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x40, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fd9f88);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd8f58);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d02a10() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x38, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fd9fd8);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd8fb0);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d02ae0() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x38, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fda028);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd9008);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d02bb0() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x40, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fda078);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd9060);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d02c80() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x40, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fda0c8);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd90b8);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d02d50() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x38, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fda118);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd9110);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d02e20() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x40, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fda168);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd9168);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d02ef0() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x38, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fda1b8);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd91c0);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d02fc0() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x58, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  At<U64>(control, 0x40) = 0;
  At<U64>(control, 0x48) = 0;
  At<U64>(control, 0x50) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fda208);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd9218);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d03090() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x40, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fda258);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd9270);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d03160() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x40, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fda2a8);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd92c8);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d03330() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x58, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  At<U64>(control, 0x40) = 0;
  At<U64>(control, 0x48) = 0;
  At<U64>(control, 0x50) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fda348);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd9378);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d03400() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x38, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fda398);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd93d0);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d034d0() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x60, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  At<U64>(control, 0x40) = 0;
  At<U64>(control, 0x48) = 0;
  At<U64>(control, 0x50) = 0;
  At<U64>(control, 0x58) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fda3e8);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd9428);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d035a0() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x40, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fda438);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd9480);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d03670() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x58, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x48) = 0;
  At<U64>(control, 0x50) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  At<U64>(control, 0x40) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fda488);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd94d8);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d03740() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x58, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x48) = 0;
  At<U64>(control, 0x50) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  At<U64>(control, 0x40) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fda4d8);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd9530);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d03810() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x58, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x48) = 0;
  At<U64>(control, 0x50) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  At<U64>(control, 0x40) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fda528);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd9588);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d038e0() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x38, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fda578);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd95e0);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d039b0() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x48, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x38) = 0;
  At<U64>(control, 0x40) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fda5c8);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd9638);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d03a80() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x48, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x38) = 0;
  At<U64>(control, 0x40) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fda618);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd9690);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d03b50() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x40, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fda668);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd96e8);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d03c20() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x40, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fda6b8);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd9740);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d03cf0() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x40, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fda708);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd9798);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d03dc0() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x50, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x40) = 0;
  At<U64>(control, 0x48) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fda758);
  At<U64>(control, 0x20) = reinterpret_cast<U64>(GameData_1fd97f0);
  result.object = control + 0x20;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d03e90() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x58, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  At<U64>(control, 0x40) = 0;
  At<U64>(control, 0x48) = 0;
  At<U64>(control, 0x50) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fda7a8);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd9848);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_d03f60() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x58, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  At<U64>(control, 0x40) = 0;
  At<U64>(control, 0x48) = 0;
  At<U64>(control, 0x50) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_1fda7f8);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_1fd98a0);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_17e7e90() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x30, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_20dc178);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_20dc1c8);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_17e7f60() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x70, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  At<U64>(control, 0x40) = 0;
  At<U64>(control, 0x48) = 0;
  At<U64>(control, 0x50) = 0;
  At<U64>(control, 0x58) = 0;
  At<U64>(control, 0x60) = 0;
  At<U64>(control, 0x68) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_20dc220);
  At<U64>(control, 0x20) = reinterpret_cast<U64>(GameData_20dc270);
  result.object = control + 0x20;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_17e8040() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x50, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  At<U64>(control, 0x40) = 0;
  At<U64>(control, 0x48) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_20dc2c8);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_20dc318);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_17e8110() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x30, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_20dc370);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_20dc3c0);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_17e8240() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x50, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  At<U64>(control, 0x40) = 0;
  At<U64>(control, 0x48) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_20dc4c0);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_20dc510);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_17e8310() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x50, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  At<U64>(control, 0x40) = 0;
  At<U64>(control, 0x48) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_20dc568);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_20dc5b8);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_17e84a0() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x70, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  At<U64>(control, 0x40) = 0;
  At<U64>(control, 0x48) = 0;
  At<U64>(control, 0x50) = 0;
  At<U64>(control, 0x58) = 0;
  At<U64>(control, 0x60) = 0;
  At<U64>(control, 0x68) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_20dc760);
  At<U64>(control, 0x20) = reinterpret_cast<U64>(GameData_20dc7b0);
  result.object = control + 0x20;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_17e89e0() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x68, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x58) = 0;
  At<U64>(control, 0x60) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  At<U64>(control, 0x40) = 0;
  At<U64>(control, 0x48) = 0;
  At<U64>(control, 0x50) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_20dcaa8);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_20dcaf8);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_17e9040() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x90, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  At<U64>(control, 0x40) = 0;
  At<U64>(control, 0x48) = 0;
  At<U64>(control, 0x50) = 0;
  At<U64>(control, 0x58) = 0;
  At<U64>(control, 0x60) = 0;
  At<U64>(control, 0x68) = 0;
  At<U64>(control, 0x70) = 0;
  At<U64>(control, 0x78) = 0;
  At<U64>(control, 0x80) = 0;
  At<U64>(control, 0x88) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_20dce98);
  At<U64>(control, 0x20) = reinterpret_cast<U64>(GameData_20dcee8);
  result.object = control + 0x20;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_17e9480() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x50, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  At<U64>(control, 0x40) = 0;
  At<U64>(control, 0x48) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_20dd288);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_20dd2d8);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_17e9550() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x50, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  At<U64>(control, 0x40) = 0;
  At<U64>(control, 0x48) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_20dd330);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_20dd380);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_17e99b0() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x90, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  At<U64>(control, 0x40) = 0;
  At<U64>(control, 0x48) = 0;
  At<U64>(control, 0x50) = 0;
  At<U64>(control, 0x58) = 0;
  At<U64>(control, 0x60) = 0;
  At<U64>(control, 0x68) = 0;
  At<U64>(control, 0x70) = 0;
  At<U64>(control, 0x78) = 0;
  At<U64>(control, 0x80) = 0;
  At<U64>(control, 0x88) = 0;
  At<U64>(control, 0x40) = 0;
  At<U64>(control, 0x48) = 0;
  At<U64>(control, 0x38) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_20dd678);
  At<U64>(control, 0x20) = reinterpret_cast<U64>(GameData_20dd6c8);
  result.object = control + 0x20;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_17e9aa0() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x48, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  At<U64>(control, 0x40) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_20dd720);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_20dd770);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_17e9b70() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x60, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  At<U64>(control, 0x40) = 0;
  At<U64>(control, 0x48) = 0;
  At<U64>(control, 0x50) = 0;
  At<U64>(control, 0x58) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_20dd7c8);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_20dd818);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_17e9c40() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x70, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x60) = 0;
  At<U64>(control, 0x68) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  At<U64>(control, 0x40) = 0;
  At<U64>(control, 0x48) = 0;
  At<U64>(control, 0x50) = 0;
  At<U64>(control, 0x58) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_20dd870);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_20dd8c0);
  result.object = control + 0x18;
  return result;
}

[[gnu::visibility("hidden")]] SharedPointer GameStub_17e9f30() {
  SharedPointer result;
  const U64 control = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x58, 16, 0));
  At<U64>(control, 0x8) = 0;
  At<U64>(control, 0x10) = 0;
  At<U64>(control, 0x20) = 0;
  At<U64>(control, 0x28) = 0;
  At<U64>(control, 0x48) = 0;
  At<U64>(control, 0x50) = 0;
  At<U64>(control, 0x30) = 0;
  At<U64>(control, 0x38) = 0;
  At<U64>(control, 0x40) = 0;
  result.control = control;
  At<U64>(control, 0x0) = reinterpret_cast<U64>(GameData_20dda68);
  At<U64>(control, 0x18) = reinterpret_cast<U64>(GameData_20ddab8);
  result.object = control + 0x18;
  return result;
}
