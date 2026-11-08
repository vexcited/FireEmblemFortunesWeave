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

[[gnu::visibility("hidden")]] extern U8 GameData_1f8f4e0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f8f570[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f90100[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f902c0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1faf3d8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1faf458[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fb7780[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fb7b68[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fbf688[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fbfad0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd01c0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda848[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fe2b80[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fe9808[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ff1de8[];
[[gnu::visibility("hidden")]] extern U8 GameData_2007178[];
[[gnu::visibility("hidden")]] extern U8 GameData_2007208[];
[[gnu::visibility("hidden")]] extern U8 GameData_20075d8[];
[[gnu::visibility("hidden")]] extern U8 GameData_20167d0[];
[[gnu::visibility("hidden")]] extern U8 GameData_2016950[];
[[gnu::visibility("hidden")]] extern U8 GameData_20184e8[];
[[gnu::visibility("hidden")]] extern U8 GameData_2018948[];
[[gnu::visibility("hidden")]] extern U8 GameData_2032be0[];
[[gnu::visibility("hidden")]] extern U8 GameData_20378d0[];
[[gnu::visibility("hidden")]] extern U8 GameData_20433d8[];
[[gnu::visibility("hidden")]] extern U8 GameData_207b3a8[];
[[gnu::visibility("hidden")]] extern U8 GameData_2088c00[];
[[gnu::visibility("hidden")]] extern U8 GameData_2088cf0[];
[[gnu::visibility("hidden")]] extern U8 GameData_2088e80[];
[[gnu::visibility("hidden")]] extern U8 GameData_2088ef0[];
[[gnu::visibility("hidden")]] extern U8 GameData_209a608[];
[[gnu::visibility("hidden")]] extern U8 GameData_20a34c0[];
[[gnu::visibility("hidden")]] extern U8 GameData_20b60d8[];
[[gnu::visibility("hidden")]] extern U8 GameData_20b6158[];
[[gnu::visibility("hidden")]] extern U8 GameData_20c9238[];
[[gnu::visibility("hidden")]] extern U8 GameData_20c92b8[];
[[gnu::visibility("hidden")]] extern U8 GameData_20e5fe0[];
[[gnu::visibility("hidden")]] extern U8 GameData_20e8ba8[];
[[gnu::visibility("hidden")]] extern U8 GameData_20e8c28[];
[[gnu::visibility("hidden")]] extern U8 GameData_20e9028[];
[[gnu::visibility("hidden")]] extern U8 GameData_211d4a8[];

[[gnu::visibility("hidden")]] U64 GameStub_6547e0(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x20, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1f8f4e0);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  At<U64>(copy, 0x18) = At<U64>(self, 0x18);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_6549c0(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x18, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1f8f570);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_667fe0(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x10, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1f90100);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_66cdb0(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x18, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1f902c0);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_94e470(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x10, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1faf3d8);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_94e6a0(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x10, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1faf458);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_9d0850(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x10, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fb7780);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_9d1760(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x10, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fb7b68);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_a49e90(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x10, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fbf688);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_a52dc0(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x18, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fbfad0);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_bc9350(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x20, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fd01c0);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  At<U64>(copy, 0x18) = At<U64>(self, 0x18);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_d0b960(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x10, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fda848);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_e143c0(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x10, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fe2b80);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_e92960(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x10, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fe9808);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_f0e800(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x18, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1ff1de8);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_10891e0(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x10, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_2007178);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_1089300(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x10, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_2007208);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_108a1b0(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x30, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_20075d8);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  At<U64>(copy, 0x18) = At<U64>(self, 0x18);
  At<U64>(copy, 0x20) = At<U64>(self, 0x20);
  At<U64>(copy, 0x28) = At<U64>(self, 0x28);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_11c3680(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x18, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_20167d0);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_11c6b10(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x60, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_2016950);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  At<U64>(copy, 0x20) = At<U64>(self, 0x20);
  At<U64>(copy, 0x28) = At<U64>(self, 0x28);
  At<U64>(copy, 0x30) = At<U64>(self, 0x30);
  At<U64>(copy, 0x38) = At<U64>(self, 0x38);
  At<U64>(copy, 0x40) = At<U64>(self, 0x40);
  At<U64>(copy, 0x48) = At<U64>(self, 0x48);
  At<U64>(copy, 0x50) = At<U64>(self, 0x50);
  At<U64>(copy, 0x58) = At<U64>(self, 0x58);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_11f7570(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x18, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_20184e8);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_11ffda0(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x10, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_2018948);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_1388140(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x20, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_2032be0);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  At<U64>(copy, 0x18) = At<U64>(self, 0x18);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_13fa9f0(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x10, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_20378d0);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_148d770(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x30, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_20433d8);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  At<U64>(copy, 0x18) = At<U64>(self, 0x18);
  At<U64>(copy, 0x20) = At<U64>(self, 0x20);
  At<U64>(copy, 0x28) = At<U64>(self, 0x28);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_166b300(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x20, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_207b3a8);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  At<U64>(copy, 0x18) = At<U64>(self, 0x18);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_16a8940(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x10, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_2088c00);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_16a9000(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x10, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_2088cf0);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_16a9350(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x10, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_2088e80);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_16a94b0(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x10, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_2088ef0);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_16d8b10(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x10, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_209a608);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_16fc7f0(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x10, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_20a34c0);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_1733880(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x18, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_20b60d8);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_17341d0(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x18, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_20b6158);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_1793040(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x18, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_20c9238);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_1794430(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x18, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_20c92b8);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_1849f40(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x10, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_20e5fe0);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_18524c0(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x10, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_20e8ba8);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_18525c0(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x10, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_20e8c28);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_1853f70(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x10, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_20e9028);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  return copy;
}

[[gnu::visibility("hidden")]] U64 GameStub_1988080(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x20, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_211d4a8);
  At<U64>(copy, 0x8) = At<U64>(self, 0x8);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  At<U64>(copy, 0x18) = At<U64>(self, 0x18);
  return copy;
}
