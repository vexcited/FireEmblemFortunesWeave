#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_4f840(U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_87110(U32, U32);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_874c0(U32);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_8f360(U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_8f480();
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_943d0(U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_944a0(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_98340(U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_9aa60(U64, U32);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_9ac80(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_10fe40(U64, U64, U64, U64,
  U64, U64, U64, U32, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1d9ac0(U64, U64, U64,
  U64, U32, U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1dbab0(U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_1fc720(U64, U64, U32);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_246fe0(U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_247640(U64);

// Devices describe their architecture at 0xc50 and its implementation at
// 0xc54.
namespace {

[[gnu::always_inline]] inline U32 Architecture(U64 device) {
  return At<U32>(device, 0xc50);
}

[[gnu::always_inline]] inline U32 Implementation(U64 device) {
  return At<U32>(device, 0xc54);
}

}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_9ab80(U64 device) {
  return Architecture(device) == 5 && Implementation(device) > 1;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_9abb0(U64 device) {
  return Architecture(device) == 5 && Implementation(device) == 3;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_9ac20(U64 device) {
  return Architecture(device) == 6 && Implementation(device) == 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_9ac50(U64 device) {
  return Architecture(device) == 6 && Implementation(device) == 2;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_9ac90(U64 device) {
  return Architecture(device) == 7 && (Implementation(device) & ~2u) == 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_9ad20(U64 device) {
  return Architecture(device) == 8 && Implementation(device) == 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_9ad50(U64 device) {
  return Architecture(device) == 8 && Implementation(device) < 9;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_9adc0(U64 device) {
  return Architecture(device) == 8 && Implementation(device) == 8;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_9adf0(U64 device) {
  return Architecture(device) == 8 && Implementation(device) == 9;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_9ae20(U64 device) {
  return Architecture(device) == 9 && Implementation(device) == 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_9af70(U64 device) {
  return (At<U8>(device, 0x42ac) & 1) == 0 || At<U8>(device, 0x42c8) == 0 ||
    Architecture(device) <= 8;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_99720(U64 device) {
  return At<U8>(device, 0x4048) != 0 || At<U8>(device, 0x4508) != 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_99760(U64 device) {
  return (At<U8>(device, 0x4508) != 0 || At<U8>(device, 0x4509) != 0) &&
    At<U64>(device, 0x3ed0) == 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_99f10(U64 device) {
  return At<U32>(device, 0x5568) == 0 &&
    (At<U16>(device, 0x41d0) & 0x2000) != 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_86fe0(U64 array) {
  return (At<U32>(array, 8) & ~3u) == 4 && At<U64>(array, 0xc8) != 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_8a640(U64 device,
  const U32* extent) {
  return extent[2] != 0 || extent[0] > At<U32>(device, 0xf80) ||
    extent[1] > At<U32>(device, 0xf84);
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_b76f0(U64 object) {
  return At<U32>(object, 0x60) == 8 && At<U8>(object, 0x64) == 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_f7b30(U64 object) {
  return At<U32>(object, 0) == 3 && At<U8>(object, 0x58) == 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_f78d0(U64 object) {
  return At<U32>(object, 0) == 0 &&
    CudaDriverRoutine_874c0(At<U32>(At<U64>(object, 8), 0x18)) != 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_11c4f0(U64 context) {
  return At<U64>(At<U64>(context, 0x40), 0xc38) >= 0xc0 &&
    (At<U64>(context, 0x928) & 0x3ffffffff7fff8) != 0;
}

// Allocations keep their owner at 0x48 and their mapping at 0x210.
[[gnu::visibility("hidden")]] bool CudaDriverRoutine_1dc6f0(U64 allocation) {
  return At<U64>(allocation, 0x210) == 0 &&
    (At<U8>(At<U64>(allocation, 0x48), 0xf9) & 6) != 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_1dc820(U64 allocation) {
  return At<U64>(allocation, 0x210) == 0 &&
    (At<U64>(At<U64>(allocation, 0x48), 0xf0) & 7) == 1;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_1dc850(U64 allocation) {
  return At<U64>(allocation, 0x210) != 0 ||
    (At<U64>(At<U64>(allocation, 0x48), 0xf0) & 0x8000000000007) != 1;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_1dc900(U64 allocation) {
  return At<U64>(allocation, 0x210) == 0 &&
    (At<U64>(At<U64>(allocation, 0x48), 0xf0) & 0x30) == 0x10;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_1dc9c0(U64 allocation) {
  return At<U64>(allocation, 0x210) == 0 &&
    (At<U64>(At<U64>(allocation, 0x48), 0xf0) & 0x7e00) == 0x1e00;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_1dd250(U64 allocation) {
  return At<U64>(allocation, 0x210) == 0 &&
    (At<U64>(At<U64>(allocation, 0x48), 0xf0) & 0xe0000000000) ==
    0x20000000000;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_efe40(U64 device) {
  return CudaDriverRoutine_4f840(device) != 0 &&
    CudaDriverRoutine_9ac80(device) != 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_92190(U64 device) {
  return CudaDriverRoutine_8f360(device) != 0 ||
    CudaDriverRoutine_943d0(device) != 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_92440(U64 device) {
  return CudaDriverRoutine_8f480() != 0 ||
    CudaDriverRoutine_944a0(device) != 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_1eba10(U64* device) {
  return CudaDriverRoutine_9ac80(*device) == 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_2097a0(U64, U32 format,
  U32 channels) {
  return CudaDriverRoutine_87110(format, channels) == 0;
}

// Contexts map their peers through the table at 0xb8 of their device.
[[gnu::visibility("hidden")]] bool CudaDriverRoutine_10e3a0(U64 context,
  U64 peer) {
  return CudaDriverRoutine_1fc720(At<U64>(peer, 0x50) + 0xb8,
    At<U64>(context, 0x50), 0) != 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_10a0f0(U64 object,
  U64 size) {
  const U64 base = CudaDriverRoutine_1dbab0(
    At<U64>(At<U64>(object, 8), 0x50));
  return size <= At<U32>(base, At<U64>(object, 0x20));
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_235f20(U64 context) {
  if (context == 0) {
    return 1;
  }

  return CudaDriverRoutine_9aa60(At<U64>(context, 0x40), 1);
}

[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_2361e0(U64 context) {
  return (At<U8>(CudaDriverRoutine_98340(context), 0x3f50) >> 3) & 1;
}

// Objects find their header through the offset at 0x10.
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_a3160(U64 object) {
  return CudaDriverRoutine_246fe0(object + At<U64>(object, 0x10));
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_a7990(U64 object) {
  return CudaDriverRoutine_247640(object + At<U64>(object, 0x10));
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_97e00(U64, U64* device,
  U64 size, U64 address) {
  return CudaDriverRoutine_1d9ac0(reinterpret_cast<U64>(device), address, 0,
    0x100000000, At<U32>(*device, 0x39a0), size, 4);
}

// Thirty two and sixty four bit variants of one mapping routine.
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_10fe00(U64 a1, U64 a2,
  U64 a3, U64 a4, U64 a5, U64 a6) {
  return CudaDriverRoutine_10fe40(a1, a2, a3, a4, a5, 0, 0, 32, a6);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1107f0(U64 a1, U64 a2,
  U64 a3, U64 a4, U64 a5, U64 a6) {
  return CudaDriverRoutine_10fe40(a1, a2, a3, a4, a5, 0, 0, 64, a6);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_110820(U64 a1, U64 a2,
  U64 a3, U64 a4, U64 a5, U64 a6, U64 a7) {
  return CudaDriverRoutine_10fe40(a1, a2, a3, a4, a5, a6, 0, 32, a7);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_110850(U64 a1, U64 a2,
  U64 a3, U64 a4, U64 a5, U64 a6, U64 a7) {
  return CudaDriverRoutine_10fe40(a1, a2, a3, a4, a5, a6, 0, 64, a7);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_111440(U64 a1, U64 a2,
  U64 a3, U64 a4, U64 a5, U64 a6, U64 a7) {
  return CudaDriverRoutine_10fe40(a1, a2, a3, a4, a5, 0, a6, 32, a7);
}
