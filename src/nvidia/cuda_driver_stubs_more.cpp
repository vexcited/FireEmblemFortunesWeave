#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_19a600(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_139470(U64);
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_11327c8[];
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_b4840(U64, U64);

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1e190(U64 object) {
  CudaDriverRoutine_19a600(object);
  return CudaDriverRoutine_139470(object);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_51e90(U64 object) {
  return CudaDriverRoutine_b4840(object,
    reinterpret_cast<U64>(CudaDriverData_11327c8));
}

[[gnu::visibility("hidden")]] void CudaDriverStub_972d0(U64 object, U64 a1,
    U64 a2) {
  using Method = void (*)(U64, U64, U64);
  At<Method>(At<U64>(object, 0), 0x20)(object, a1, a2);
}
