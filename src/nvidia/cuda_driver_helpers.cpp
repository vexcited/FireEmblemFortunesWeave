#include <stdint.h>

using U8 = uint8_t;
using U32 = uint32_t;
using U64 = uint64_t;

constexpr U32 kNotPermitted = 801;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] void CudaLog(const char* tag, U32 level,
  const char* format, ...);
[[gnu::visibility("hidden")]] void CudaLock(U64 mutex, U32, U64, U32);
[[gnu::visibility("hidden")]] void CudaUnlock(U64 mutex);
[[gnu::visibility("hidden")]] void CudaLockShared(U64 mutex, U32, U64);
[[gnu::visibility("hidden")]] void CudaUnlockShared(U64 mutex);
[[gnu::visibility("hidden")]] U64 CudaFree(U64 address);
[[gnu::visibility("hidden")]] void CudaZero(U64 address, U32 value,
  U64 size);

[[gnu::visibility("hidden")]] void CudaDriverRoutine_4ce20(U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_8e230(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_972c0(U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_972d0(U64, U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_98340(U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_99700(U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_9aa20(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_d2f00(U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_e5960(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_fcce0(U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_f94a0(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_102040(U64);
[[gnu::visibility("hidden")]] U64* CudaDriverRoutine_102050();
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_10dd50(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_112310(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_11ca80(U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1d8ec0(U64, U64*);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_1db280(U64*);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1db380(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1db800(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1dbb80(U64, U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_1dc9c0(U64, U64*);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_205860(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_205940(U64, U64, U64,
  U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_207630(U64, U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_207710(U64, U64, U64);

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_9abe0(U64 device) {
  const U32 architecture = At<U32>(device, 0xc50);
  return (architecture == 5 && At<U32>(device, 0xc54) > 1) ||
    architecture > 5;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_9ad90(U64 device) {
  const U32 architecture = At<U32>(device, 0xc50);
  return (architecture == 8 && At<U32>(device, 0xc54) > 5) ||
    architecture > 8;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_5e980(U64 object) {
  const U64 entry = At<U64>(object, 0x83e8);
  return entry != 0 && At<U32>(entry, 0x18) != 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_5e9f0(U64 object) {
  const U64 entry = At<U64>(object, 0x8398);
  return entry != 0 && At<U32>(entry, 0x18) != 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_b9310(U64 object) {
  const U32 state = At<U32>(object, 0xbc);
  return CudaDriverRoutine_9aa20(At<U64>(object, 0x40)) != 0 && state != 3;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_116ff0(U64 stream) {
  return (At<U8>(stream, 0x38) & 3) == 0 ||
    ((At<U8>(stream, 0x38) & 1) != 0 &&
    At<U8>(At<U64>(stream, 0x28), 0x19) != 0);
}

[[gnu::visibility("hidden"), gnu::noinline]] bool CudaDriverRoutine_122020(
  U64 device) {
  return (CudaDriverRoutine_99700(device) == 0 ||
    At<U8>(device, 0x3f23) != 0) && At<U8>(device, 0x3ff5) == 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_943d0(U64 context) {
  return (At<U8>(At<U64>(context, 0x40), 0x4250) & 0x40) != 0 &&
    CudaDriverRoutine_122020(context) &&
    CudaDriverRoutine_e5960(context) == 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_126f50(U64 context,
  U64* allocation) {
  CudaDriverRoutine_1dc9c0(context, allocation);
  return allocation[161] == 0 &&
    (At<U8>(allocation[0], 0x41d0) & 0x20) != 0;
}

// Handle kinds sit in bits 26 to 30 of the flags at 0xf0.
[[gnu::visibility("hidden")]] bool CudaDriverRoutine_1db9c0(U64 allocation) {
  const U32 flags = At<U32>(At<U64>(allocation, 0x48), 0xf0);
  return (flags & 0x78000000) == 0x8000000 || ((flags >> 26) & 0x1f) - 7 < 2;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_1dc9f0(U64 allocation) {
  return (At<U64>(At<U64>(allocation, 0x48), 0xf0) & 0x7e00) == 0x1e00 &&
    (At<U64>(At<U64>(allocation, 0x48), 0xf0) & 0x8000000000007) != 1;
}

[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_1dce60(U64 allocation) {
  U64 local = allocation;
  return CudaDriverRoutine_1db280(&local);
}

[[gnu::visibility("hidden")]] void CudaDriverRoutine_36560(U64,
  U64 device, U32* pCount) {
  if ((At<U8>(device, 0x3618) & 3) == 2) {
    ++*pCount;
  }
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_24460(U64, U64,
  U64 object) {
  CudaDriverRoutine_fcce0(object);
  return CudaFree(object);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_ea960(U64, U64 object) {
  CudaZero(object, 0, 0x3620);
  return CudaFree(object);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_1e64e0(U64, U64 object) {
  CudaZero(object, 0, 0x7a8);
  return 0;
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1122e0(U64 object) {
  CudaDriverRoutine_112310(object);
  return CudaFree(object);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_64030(U64 object,
  U64 a2, U64 a3) {
  return CudaDriverRoutine_972d0(CudaDriverRoutine_972c0(object, 0), a2, a3);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_8aaa0(U64 object,
  U64 other) {
  const U64 range = CudaDriverRoutine_1dbb80(At<U64>(object, 0x50),
    At<U64>(other, 0x50));
  return At<U64>(object, 0x60) + CudaDriverRoutine_1db800(range);
}

namespace {

template <U64 (*Create)(U64)>
[[gnu::always_inline]] inline void CreateOnce(U64 source, U64* pValue) {
  if (*pValue == 0) {
    *pValue = Create(source);
  }
}

}

[[gnu::visibility("hidden")]] void CudaDriverRoutine_127720(U64, U64 source,
  U64* pValue) {
  CreateOnce<CudaDriverRoutine_10dd50>(source, pValue);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_f1060() {
  return At<U64>(CudaDriverRoutine_102040(*CudaDriverRoutine_102050()),
    0x18);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_f4320(U64 object) {
  CudaDriverRoutine_1db380(object + 8);
  return CudaDriverRoutine_d2f00(object);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_f9450(U64 copy,
  U64 endpoints) {
  const U32 first = CudaDriverRoutine_f94a0(copy, endpoints, 1);
  return CudaDriverRoutine_f94a0(copy, endpoints + 200, 0) + first;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_1985a0() {
  CudaLog("CUDA", 0, "cuEtblDevSmResourceSplitByUgpu is not supported\n");
  return kNotPermitted;
}

[[gnu::visibility("hidden")]] void CudaDriverRoutine_1db1c0(U64 allocation,
  U64* mapping) {
  CudaDriverRoutine_1d8ec0(At<U64>(allocation, 0x48), mapping);
  mapping[21] = allocation;
}

// Bit sets of 64 bit words.
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1fc900(U64 bits,
  U32 index) {
  At<U64>(bits, (static_cast<U64>(index) >> 3) & 0x1ffffff8) |=
    1ull << (index & 63);
  return bits;
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1fc930(U64 bits,
  U32 index) {
  At<U64>(bits, (static_cast<U64>(index) >> 3) & 0x1ffffff8) &=
    ~(1ull << (index & 63));
  return bits;
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_205dd0(U64 a1, U64 a2,
  U64 a3) {
  CudaDriverRoutine_205860(a2);
  return CudaDriverRoutine_205940(a1, a2, a3, 0);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_20d000(U64 context,
  U8 value) {
  At<U8>(CudaDriverRoutine_98340(context), 0x3fd8) = value;
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_51640(U64 context) {
  CudaDriverRoutine_11ca80(CudaDriverRoutine_98340(context), 1);
  return 0;
}

// The device dispatch table converts addresses at 0x49d0 and 0x49d8.
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_221420(U64* pValue,
  U64 context) {
  using Convert = U64 (*)(U64);
  *pValue = At<Convert>(At<U64>(context, 0x40), 0x49d0)(*pValue);
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_221460(U64* pValue,
  U64 context) {
  using Convert = U64 (*)(U64, U64);
  *pValue = At<Convert>(At<U64>(context, 0x40), 0x49d8)(*pValue, 0x40000000);
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_2214a0(U64* pValue,
  U64 context) {
  using Convert = U64 (*)(U64, U64);
  *pValue = At<Convert>(At<U64>(context, 0x40), 0x49d8)(*pValue, 0x80000000);
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_227fe0(U64 a1, U64 a2,
  U64* pValue) {
  *pValue = CudaDriverRoutine_207630(a1, a2, *pValue);
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_228010(U64 a1, U64 a2,
  U64* pValue) {
  *pValue = CudaDriverRoutine_207710(a1, a2, *pValue);
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverRoutine_86e30(U64 object) {
  CudaLock(At<U64>(object, 0x30) + 0x28, 0, 0, 0);
  CudaDriverRoutine_4ce20(At<U64>(object, 0x30), object);
  CudaUnlock(At<U64>(object, 0x30) + 0x28);
}

// Rounds a region up to the alignment at 0xf30.
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_99f40(U64 device,
  const U32* region, U32 extra) {
  const U32 alignment = At<U32>(device, 0xf30);
  return (extra + region[0] + region[3] + region[2] + alignment - 1) /
    alignment * alignment;
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_b7ea0(U64 object) {
  U64 local = object;
  CudaFree(At<U64>(object, 0x208));
  return CudaDriverRoutine_1db380(reinterpret_cast<U64>(&local));
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_d3910(U64 object) {
  const U64 result = CudaDriverRoutine_d2f00(At<U64>(object, 0x28));
  At<U64>(object, 0x28) = 0;
  return result;
}

[[gnu::visibility("hidden")]] void CudaDriverRoutine_1b6910(U64 object,
  U32 value) {
  CudaLockShared(object + 0x30, 0, 0);
  At<U32>(object, 0x58) = value;
  CudaUnlockShared(object + 0x30);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1b72e0(U64* object) {
  if (object != nullptr) {
    return CudaDriverRoutine_8e230(*object);
  }

  return 0;
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1b7cd0(U64* pObject) {
  const U64 result = CudaFree(*pObject);
  *pObject = 0;
  return result;
}

// Partitions are 0x16490 bytes apart, their engines 0x590.
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_1c32b0(U64 base,
  U32 partition, U32 engine, U32* pValue) {
  const U64 entry = base + 0x16490ull * partition + 0x590ull * engine;
  *pValue = At<U32*>(entry, 0x6a8)[At<U32>(entry, 0x6c0)];
  return 0;
}
