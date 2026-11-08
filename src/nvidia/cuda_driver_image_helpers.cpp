#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

constexpr U32 kInvalidValue = 1;
constexpr U32 kInvalidHandle = 400;
constexpr U32 kTooSmall = 2;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] extern const U32 CudaDriverData_1130324[5];

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_57450(U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_25d630(U64*, U64);
[[gnu::visibility("hidden")]] int32_t CudaDriverRoutine_25d690(U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1db800(U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_ea9e0(U64*, U64, U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_bae90(U64, U64, U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_222b80(U64,
  U32 (*)(U64, U64, U64*), U64*);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_6b800(U64, U64, U64*);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_6b9a0(U64, U64, U64*);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_6ba20(U64, U64, U64*);

// ELF images keep their header behind the offset at 0x10, section and
// program header entries are counted from the table offsets in it.
namespace {

[[gnu::always_inline]] inline U64 SectionIndex(U64 object, U64 slot) {
  const U64 entry = At<U64>(object, slot);
  if (entry == 0) {
    return 0;
  }

  const U64 image = object + At<U64>(object, 0x10);
  const U64 header = CudaDriverRoutine_57450(image);
  return (entry - image - At<U32>(header, 0x20)) / At<U16>(header, 0x2e);
}

[[gnu::always_inline]] inline U64 SectionIndex64(U64 object, U64 slot) {
  const U64 entry = At<U64>(object, slot);
  if (entry == 0) {
    return 0;
  }

  const U64 image = object + At<U64>(object, 0x10);
  const U64 header = CudaDriverRoutine_57450(image);
  return (entry - image - At<U64>(header, 0x28)) / At<U16>(header, 0x3a);
}

}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_a3280(U64 object) {
  return SectionIndex(object, 0x50);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_a3350(U64 object) {
  return SectionIndex(object, 0x58);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_a3420(U64 object) {
  return SectionIndex(object, 0x60);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_a3640(U64 object) {
  return SectionIndex(object, 0x38);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_a36a0(U64 object) {
  return SectionIndex(object, 0x48);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_a7c00(U64 object) {
  return SectionIndex64(object, 0x38);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_a7c60(U64 object) {
  return SectionIndex64(object, 0x50);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_a7cc0(U64 object) {
  return SectionIndex64(object, 0x58);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_a7d20(U64 object) {
  return SectionIndex64(object, 0x60);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_a7d80(U64 object) {
  return SectionIndex64(object, 0x48);
}

namespace {

[[gnu::always_inline]] inline U32* WriteFormat(U32* out, U64 surface,
  U32 kind) {
  out[0] = At<U64>(surface, 8) >> 8;
  out[1] = kind > 4 ? 0 : CudaDriverData_1130324[kind];
  return out;
}

}

[[gnu::visibility("hidden")]] U32* CudaDriverRoutine_7770(U32* out,
  U64 surface, U32 kind) {
  return WriteFormat(out, surface, kind);
}

[[gnu::visibility("hidden")]] U32* CudaDriverRoutine_1be20(U32* out,
  U64 surface, U32 kind) {
  return WriteFormat(out, surface, kind);
}

namespace {

// The default sampler state.
[[gnu::always_inline]] inline U32 ResetSampler(U64 state) {
  At<U64>(state, 0x1c) = 0;
  At<U64>(state, 0xc) = 0;
  At<U64>(state, 0x14) = 0;
  At<U32>(state, 0x10) = 0xfffdc0;
  At<U32>(state, 8) = 0xfffdc4;
  At<U64>(state, 0) = 0x9000fffe00;
  return 0;
}

}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_12340(U64 state) {
  return ResetSampler(state);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_21640(U64 state) {
  return ResetSampler(state);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_50900(U64 context,
  U32* pDevice) {
  if (context == 0) {
    return kInvalidHandle;
  }

  if (pDevice == nullptr) {
    return kInvalidValue;
  }

  *pDevice = *At<U32*>(context, 0x40);
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_68c20(U64 request) {
  if (At<U32>(request, 0) < 0x14) {
    return kTooSmall;
  }

  U64 value;
  const U32 result = CudaDriverRoutine_25d630(&value, At<U64>(request, 4));
  if (result == 0) {
    At<U64>(request, 0xc) = value;
  }

  return result;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_69f30(U32* state,
  U32 a, U32 b, U32 c) {
  if (state[1] != 0) {
    return kInvalidValue;
  }

  state[232] = a;
  state[233] = b;
  state[234] = c;
  return 0;
}

namespace {

template <U32 (*Visit)(U64, U64, U64*)>
[[gnu::always_inline]] inline U32 CountEntries(U64 table, U64 argument) {
  U64 pair[2] = {0, argument};
  if (table == 0) {
    return 11;
  }

  CudaDriverRoutine_222b80(At<U64>(table, 0x20), Visit, pair);
  return static_cast<U32>(pair[0]);
}

}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_6b7b0(U64 table,
  U64 argument) {
  return CountEntries<CudaDriverRoutine_6b800>(table, argument);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_76d10(U64, U64 entry,
  U64 query) {
  if (CudaDriverRoutine_25d690(At<U64>(entry, 0x10), At<U64>(query, 0)) ==
    0) {
    At<U64>(query, 8) = At<U64>(entry, 0x30);
    At<U8>(query, 0x10) = 1;
  }

  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_97e30(U64 context,
  U32 bank) {
  const U32* device = At<U32*>(context, 0x40);
  if (bank == device[2934]) {
    return device[2935] + 0x800;
  }

  if (bank == device[2932]) {
    return device[2941] + device[2940];
  }

  return 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_9acf0(U64 device) {
  const U32 architecture = At<U32>(device, 0xc50);
  if (architecture > 7) {
    return true;
  }

  if (architecture == 7) {
    return At<U32>(device, 0xc54) > 2;
  }

  return false;
}

[[gnu::visibility("hidden")]] int64_t CudaDriverRoutine_b9e20(U64* first,
  U64* second) {
  const U64 a = CudaDriverRoutine_1db800(At<U64>(first[0], 0x60));
  const U64 b = CudaDriverRoutine_1db800(At<U64>(second[0], 0x60));
  if (a < b) {
    return 0xffffffff;
  }

  return a > b;
}

// Resolves a kernel to its function in the module of a context.
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_e8dd0(U64 pFunction,
  U64 kernel, U64 context) {
  U64 module = 0;
  const U32 result = CudaDriverRoutine_ea9e0(&module, At<U64>(kernel, 0x10),
    context);
  if (result != 0) {
    return result;
  }

  return CudaDriverRoutine_bae90(module, At<U64>(kernel, 8), pFunction);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_c5d50(U64 source,
  U64 target, U32* pChanged) {
  if (At<U32>(target, 0x12c) < At<U32>(source, 0x524)) {
    *pChanged = 1;
    At<U32>(target, 0x12c) = At<U32>(source, 0x524);
  }

  return source;
}
