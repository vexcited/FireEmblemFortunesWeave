#include <stdint.h>

using U8 = uint8_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

// A counter and a flag the table visitors fill.
struct CudaVisitCount {
  U32 count;
  U8 isFound;
};

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_98340(U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_99720(U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_222b80(U64,
  U32 (*)(U64, U64, CudaVisitCount*), CudaVisitCount*);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_6b9a0(U64, U64,
  CudaVisitCount*);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_6ba20(U64, U64,
  CudaVisitCount*);

namespace {

// Splits the stride at 0x8 of the surface layout into tiles.
[[gnu::always_inline]] inline void Layout(U64 object, U32 index,
  U64 out) {
  const U64 layout = At<U64>(object, 0x840);
  At<U32>(out, 0) = At<U32>(layout, 8);
  At<U64>(out, 0x10) = At<U64>(layout, 0xb0);
  At<U32>(out, 4) = (At<U32>(layout, 8) >> 4) * index;
  At<U32>(out, 8) = (At<U32>(layout, 8) >> 4) * index +
    (At<U32>(layout, 8) >> 4);
}

template <U32 (*Visit)(U64, U64, CudaVisitCount*)>
[[gnu::always_inline]] inline U32 CountTable(U64 table) {
  CudaVisitCount count = {0, 0};
  if (table == 0) {
    return 11;
  }

  CudaDriverRoutine_222b80(At<U64>(table, 0x20), Visit, &count);
  return count.count;
}

}

[[gnu::visibility("hidden")]] void CudaDriverRoutine_31d0(U64 object,
  U32 index, U64 out) {
  Layout(object, index, out);
}

[[gnu::visibility("hidden")]] void CudaDriverRoutine_15a00(U64 object,
  U32 index, U64 out) {
  Layout(object, index, out);
}

// Toggles bit 0 of the current entry flags, set when the value is zero.
[[gnu::visibility("hidden")]] void CudaDriverRoutine_5ab70(U64 object,
  U8 value) {
  const U64 list = At<U64>(object, 0x30);
  const U64 entry = At<U64>(list, 0x40) + 0x38ull * At<U32>(list, 0x48);
  U8 flags = At<U8>(entry, 0x18) & 0xfe;
  if (value == 0) {
    flags++;
  }

  At<U8>(entry, 0x18) = flags;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_9aaa0(U64 device) {
  const U64 context = CudaDriverRoutine_98340(At<U64>(device, 0x41e0));
  if (At<U32>(context, 0xbc) == 3) {
    return false;
  }

  if (CudaDriverRoutine_99720(context) != 0) {
    return false;
  }

  return At<U32>(device, 0x108c) != 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_6b950(U64 table) {
  return CountTable<CudaDriverRoutine_6b9a0>(table);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_6b9d0(U64 table) {
  return CountTable<CudaDriverRoutine_6ba20>(table);
}
