#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

constexpr U32 kNotPermitted = 801;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

struct CudaRange {
  U64 bounds;
  U32 flags;
};

struct CudaVisitArgs {
  U64 first;
  U64 second;
};

struct CudaStreamQuery {
  U32 kind;
  U32 reserved[7];
};

using Visitor = U64 (*)(U64, CudaVisitArgs*);

[[gnu::visibility("hidden")]] extern U32 CudaDriverData_143bd48;

[[gnu::visibility("hidden")]] U64 CudaFree(U64 address);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_12db60(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_12db80(U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_12dce0(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_12d120(U64, Visitor,
  CudaVisitArgs*);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_11af10(U64,
  CudaVisitArgs*);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_11afc0(U64,
  CudaVisitArgs*);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1b72e0(U64*);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_238a80(U64, U64, U64,
  CudaRange*, U64, U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_5f100(U64,
  CudaStreamQuery*);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_9afb0(U64, U64*);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_9aa20(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_f0f50(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_5d860(U64, U64);

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1e5100(U64, U64* pObject) {
  const U64 result = CudaFree(*pObject);
  *pObject = 0;
  return result;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_1e3d80(U64 device) {
  CudaDriverRoutine_9aa20(device);
  At<U16>(device, 0x41d0) &= ~0x20;
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_21f130(U64 target,
  U64 source) {
  At<U64>(target, 0x350) |= At<U64>(source, 0x350);
  At<U64>(target, 0x358) |= At<U64>(source, 0x358);
  return 0;
}

// Mixes both halves of a 64 bit key into a 32 bit hash.
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_222190(U64 key) {
  const U32 low = static_cast<U32>(key);
  const U32 high = static_cast<U32>(key >> 32);
  int32_t hash = (high ^ ~low) + ((high ^ low) << 15);
  hash = 5 * (hash ^ (hash >> 12));
  hash = 2057 * (hash ^ (hash >> 4));
  return hash ^ (hash >> 16);
}

// The whole 40 bit address space starting at 4 GiB.
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_2380f0(U64 a1, U64 a2) {
  CudaRange range = {0x100000000, 0};
  return CudaDriverRoutine_238a80(a1, a2, 0, &range, 0, 0xffffffffff);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_238210(U64 a1, U64 a2,
  U64 a3) {
  CudaRange range = {0x100000000, 0};
  return CudaDriverRoutine_238a80(a1, a2, a3, &range, 0, 0xffffffffff);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_2386e0(U64 a1, U64 a2,
  U64 a3, U64 a4, U64 a5) {
  CudaRange range = {0x100000000, 0};
  return CudaDriverRoutine_238a80(a1, a2, a3, &range, a4, a5);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_246b70(U64 device) {
  U64 found = 0;
  CudaDriverRoutine_9afb0(device, &found);
  return kNotPermitted;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_10c450() {
  const U32 value = CudaDriverRoutine_12dce0(0);
  CudaDriverData_143bd48 = value;
  return value;
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_11aed0(U64 table, U64 a2,
  U64 a3) {
  CudaVisitArgs args = {a2, a3};
  return CudaDriverRoutine_12d120(table + 8, CudaDriverRoutine_11af10,
    &args);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_11af80(U64 table, U64 a2,
  U64 a3) {
  CudaVisitArgs args = {a2, a3};
  return CudaDriverRoutine_12d120(table + 8, CudaDriverRoutine_11afc0,
    &args);
}

// The owner keeps its record at 0xd8 and the lock at 0x90.
[[gnu::visibility("hidden")]] void CudaDriverRoutine_1dff10(U64* owner) {
  CudaDriverRoutine_1b72e0(At<U64*>(owner[0], 0xd8));
  CudaDriverRoutine_12db60(reinterpret_cast<U64>(owner) + 0x90);
}

[[gnu::visibility("hidden")]] void CudaDriverRoutine_1dff50(U64* owner) {
  CudaDriverRoutine_1b72e0(At<U64*>(owner[0], 0xd8));
  CudaDriverRoutine_12db80(reinterpret_cast<U64>(owner) + 0x90);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_2075f0(U64 object) {
  const U64 pool = At<U64>(object, 0x18);
  return CudaDriverRoutine_5d860(pool, CudaDriverRoutine_f0f50(pool));
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_5f7d0(U64 stream,
  U32 kind) {
  CudaStreamQuery query = {};
  query.kind = kind;
  return CudaDriverRoutine_5f100(stream, &query);
}

[[gnu::visibility("hidden")]] void CudaDriverRoutine_5f800(U64 object,
  U32 value) {
  At<U32>(object, 0x8650) = value;
}
