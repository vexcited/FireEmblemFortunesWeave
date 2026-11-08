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

[[gnu::visibility("hidden")]] U64 GameRoutine_727ca0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_742af0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_78f680(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_7b9d30(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_824380(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_888e70(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1495040(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_a0ecc0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_c8b340(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_d8a4f0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_db7ec0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_e66fa0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_eac5a0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_eaca20(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1027620(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1053c60(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_107b100(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_10b2f90(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_10b85b0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_10d68d0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_10e4580(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_112a0e0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1130ae0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1149600(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1194e80(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1259360(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_127bc20(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_12b49e0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_12bc960(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_12daf80(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_12f4740(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_135fcc0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_13e2550(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_14084c0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1437cc0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_146f400(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_15f0d90(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_16dd440(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_16d1ca0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_17c7f60(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1828a40(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1888840(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_18a2440(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_18abec0(U64);

[[gnu::visibility("hidden")]] void GameStub_728d60(U64 object) {
  const U64 base = object - 0xd0;
  GameRoutine_727ca0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_728e40(U64 object) {
  const U64 base = object - 0xd8;
  GameRoutine_727ca0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_742c60(U64 object) {
  const U64 base = object - 0x98;
  GameRoutine_742af0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_78fec0(U64 object) {
  const U64 base = object - 0xd0;
  GameRoutine_78f680(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_7bacf0(U64 object) {
  const U64 base = object - 0xa0;
  GameRoutine_7b9d30(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_824760(U64 object) {
  const U64 base = object - 0x18;
  GameRoutine_824380(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_889560(U64 object) {
  const U64 base = object - 0xd0;
  GameRoutine_888e70(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_a0ea50(U64 object) {
  const U64 base = object - 0x98;
  GameRoutine_1495040(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_a0f1e0(U64 object) {
  const U64 base = object - 0x98;
  GameRoutine_a0ecc0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_c8b4c0(U64 object) {
  const U64 base = object - 0x8;
  GameRoutine_c8b340(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_d8af20(U64 object) {
  const U64 base = object - 0xd0;
  GameRoutine_d8a4f0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_db84e0(U64 object) {
  const U64 base = object - 0x8;
  GameRoutine_db7ec0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_e67320(U64 object) {
  const U64 base = object - 0xd0;
  GameRoutine_e66fa0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_eac7b0(U64 object) {
  const U64 base = object - 0x8;
  GameRoutine_eac5a0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_eacbc0(U64 object) {
  const U64 base = object - 0x8;
  GameRoutine_eaca20(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_10278b0(U64 object) {
  const U64 base = object - 0x98;
  GameRoutine_1027620(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_1053f90(U64 object) {
  const U64 base = object - 0x8;
  GameRoutine_1053c60(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_107b520(U64 object) {
  const U64 base = object - 0x18;
  GameRoutine_107b100(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_10b30e0(U64 object) {
  const U64 base = object - 0x38;
  GameRoutine_10b2f90(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_10b8720(U64 object) {
  const U64 base = object - 0x38;
  GameRoutine_10b85b0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_10d6b90(U64 object) {
  const U64 base = object - 0x98;
  GameRoutine_10d68d0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_10e4740(U64 object) {
  const U64 base = object - 0x28;
  GameRoutine_10e4580(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_112a2a0(U64 object) {
  const U64 base = object - 0x18;
  GameRoutine_112a0e0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_1131130(U64 object) {
  const U64 base = object - 0x98;
  GameRoutine_1130ae0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_1131190(U64 object) {
  const U64 base = object - 0xa0;
  GameRoutine_1130ae0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_1149d80(U64 object) {
  const U64 base = object - 0x98;
  GameRoutine_1149600(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_1195190(U64 object) {
  const U64 base = object - 0x98;
  GameRoutine_1194e80(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_1259610(U64 object) {
  const U64 base = object - 0x8;
  GameRoutine_1259360(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_127bda0(U64 object) {
  const U64 base = object - 0x8;
  GameRoutine_127bc20(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_12b4bd0(U64 object) {
  const U64 base = object - 0x8;
  GameRoutine_12b49e0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_12bcad0(U64 object) {
  const U64 base = object - 0x8;
  GameRoutine_12bc960(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_12db2b0(U64 object) {
  const U64 base = object - 0x8;
  GameRoutine_12daf80(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_12f48b0(U64 object) {
  const U64 base = object - 0x8;
  GameRoutine_12f4740(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_135ff90(U64 object) {
  const U64 base = object - 0x8;
  GameRoutine_135fcc0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_13e29b0(U64 object) {
  const U64 base = object - 0x98;
  GameRoutine_13e2550(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_1408ed0(U64 object) {
  const U64 base = object - 0x98;
  GameRoutine_14084c0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_14383c0(U64 object) {
  const U64 base = object - 0xd0;
  GameRoutine_1437cc0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_1470630(U64 object) {
  const U64 base = object - 0xd0;
  GameRoutine_146f400(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_1479820(U64 object) {
  const U64 base = object - 0x98;
  GameRoutine_1495040(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_1479f60(U64 object) {
  const U64 base = object - 0x98;
  GameRoutine_1495040(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_15f1320(U64 object) {
  const U64 base = object - 0xd0;
  GameRoutine_15f0d90(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_16c6d70(U64 object) {
  const U64 base = object - 0x420;
  GameRoutine_16dd440(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_16c75f0(U64 object) {
  const U64 base = object - 0x58;
  GameRoutine_16d1ca0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_16c8600(U64 object) {
  const U64 base = object - 0x58;
  GameRoutine_16d1ca0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_16c9510(U64 object) {
  const U64 base = object - 0x58;
  GameRoutine_16d1ca0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_16cbd50(U64 object) {
  const U64 base = object - 0x420;
  GameRoutine_16dd440(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_16cc410(U64 object) {
  const U64 base = object - 0x58;
  GameRoutine_16d1ca0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_16ccc50(U64 object) {
  const U64 base = object - 0x58;
  GameRoutine_16d1ca0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_16d1e80(U64 object) {
  const U64 base = object - 0x58;
  GameRoutine_16d1ca0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_16d3a70(U64 object) {
  const U64 base = object - 0x420;
  GameRoutine_16dd440(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_16d4050(U64 object) {
  const U64 base = object - 0x58;
  GameRoutine_16d1ca0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_16d4110(U64 object) {
  const U64 base = object - 0x58;
  GameRoutine_16d1ca0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_16d4260(U64 object) {
  const U64 base = object - 0x58;
  GameRoutine_16d1ca0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_16d47b0(U64 object) {
  const U64 base = object - 0x58;
  GameRoutine_16d1ca0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_16d5cb0(U64 object) {
  const U64 base = object - 0x58;
  GameRoutine_16d1ca0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_16d6680(U64 object) {
  const U64 base = object - 0x58;
  GameRoutine_16d1ca0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_16d6bc0(U64 object) {
  const U64 base = object - 0x58;
  GameRoutine_16d1ca0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_17c81e0(U64 object) {
  const U64 base = object - 0x18;
  GameRoutine_17c7f60(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_1828c70(U64 object) {
  const U64 base = object - 0x18;
  GameRoutine_1828a40(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_18858d0(U64 object) {
  const U64 base = object - 0x48;
  GameRoutine_1888840(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_188f900(U64 object) {
  const U64 base = object - 0x48;
  GameRoutine_1888840(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_18a25c0(U64 object) {
  const U64 base = object - 0x8;
  GameRoutine_18a2440(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_18a4c20(U64 object) {
  const U64 base = object - 0x48;
  GameRoutine_1888840(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_18ac190(U64 object) {
  const U64 base = object - 0x8;
  GameRoutine_18abec0(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}

[[gnu::visibility("hidden")]] void GameStub_18b4140(U64 object) {
  const U64 base = object - 0x48;
  GameRoutine_1888840(base);
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(base));
}
