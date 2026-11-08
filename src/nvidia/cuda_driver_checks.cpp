#include <stdint.h>

using U8 = uint8_t;
using U32 = uint32_t;
using U64 = uint64_t;

constexpr U32 kInvalidValue = 1;
constexpr U32 kNotSupported = 304;
constexpr U32 kNotPermitted = 801;
constexpr U32 kUpdateNotPermitted = 5;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] extern const U8 CudaDriverData_11318a4[23];

[[gnu::visibility("hidden")]] void CudaLog(const char* tag, U32 level,
  const char* format, ...);
[[gnu::visibility("hidden")]] void CudaLockShared(U64 mutex, U32, U64);
[[gnu::visibility("hidden")]] void CudaUnlockShared(U64 mutex);
[[gnu::visibility("hidden")]] U64 CudaFree(U64 address);

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_2471e0(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_2477e0(U64);
[[gnu::visibility("hidden")]] int32_t CudaDriverRoutine_25d770(U64,
  const char*, U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_25d700(const char*);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_9aa30(U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_9aa40(U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_915c0(U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_95a40(U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_91460(U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_958e0(U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_bab60(U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_fcce0(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_107f60(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_12db50(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_b8470(U64, U64, U64, U64,
  U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_b8480(U64, U64, U64, U64);

namespace {

// Module sections are found through the image offset at 0x10.
template <U64 (*Find)(U64)>
[[gnu::always_inline]] inline bool IsSection(U64 object, const char* prefix,
  U64 length) {
  const U64 name = Find(object + At<U64>(object, 0x10));
  if (name == 0) {
    return false;
  }

  return CudaDriverRoutine_25d770(name, prefix, length) == 0;
}

}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_a3f90(U64 object) {
  return IsSection<CudaDriverRoutine_2471e0>(object, ".nv.shared.reserved.",
    20);
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_a3fd0(U64 object) {
  return IsSection<CudaDriverRoutine_2477e0>(object, ".nv.shared.reserved.",
    20);
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_a4010(U64 object) {
  return IsSection<CudaDriverRoutine_2471e0>(object, ".nv.local.", 10);
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_a4050(U64 object) {
  return IsSection<CudaDriverRoutine_2477e0>(object, ".nv.local.", 10);
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_a4090(U64 object) {
  return IsSection<CudaDriverRoutine_2471e0>(object, ".nv.shared.", 11);
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_a40d0(U64 object) {
  return IsSection<CudaDriverRoutine_2477e0>(object, ".nv.shared.", 11);
}

// Carveouts are percentages, -1 asks for the default.
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_baf20(int32_t carveout) {
  if (static_cast<U32>(carveout - 101) > 0xffffff99) {
    return 0;
  }

  CudaLog("CUDA", 0, "Requested preferred shared mem carveout invalid %d\n",
    carveout);
  return kInvalidValue;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_baff0(int32_t dimension) {
  if (dimension >= 0) {
    return 0;
  }

  CudaLog("CUDA", 0, "Cluster dimension cannot be negative %d.\n", dimension);
  return kInvalidValue;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_bb030(U32 policy) {
  if (policy < 3) {
    return 0;
  }

  CudaLog("CUDA", 0, "Invalid cluster scheduling policy (%d)\n", policy);
  return kInvalidValue;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_da230(const U64* params) {
  if (params[0] != 0) {
    return 0;
  }

  CudaLog("CUDA", 0, "Callback function cannot be NULL");
  return kUpdateNotPermitted;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_da430(const U64* current,
  const U64* next) {
  if (*current == *next) {
    return 0;
  }

  CudaLog("CUDA", 0, "Event context cannot change during update");
  return kUpdateNotPermitted;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_da480(U64 node,
  U64 params) {
  if (At<U32>(node, 0x30) == At<U32>(params, 0x10)) {
    return 0;
  }

  CudaLog("CUDA", 0, "Changing the number of semaphores is not supported");
  return kUpdateNotPermitted;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_e30b0(U64 device) {
  if (CudaDriverRoutine_9aa40(device) != 0 &&
    CudaDriverRoutine_9aa30(device) == 0) {
    return kNotPermitted;
  }

  CudaLog("CUDA", 0, "Interprocess features are not available on this "
    "Operating System");
  return kNotSupported;
}

// Parses the version of an "sm_" architecture name.
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_e3120(const char* name) {
  if (name[0] != 's' || name[1] != 'm' || name[2] != '_') {
    return 0;
  }

  return CudaDriverRoutine_25d700(name + 3);
}

[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_87c60(U32 format) {
  const U8 index = format + 0x61;
  if (index > 0x16) {
    return 0;
  }

  return CudaDriverData_11318a4[index];
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_92630(U64 device) {
  const U32 result = CudaDriverRoutine_915c0(device);
  if (result != 0) {
    return result;
  }

  return CudaDriverRoutine_95a40(device);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_926b0(U64 device) {
  const U32 result = CudaDriverRoutine_91460(device);
  if (result != 0) {
    return result;
  }

  return CudaDriverRoutine_958e0(device);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_baca0(U64 function,
  U32 size) {
  const U32 result = CudaDriverRoutine_bab60(function, size);
  if (result == 0) {
    At<U32>(function, 0x84) = size;
  }

  return result;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_e7c60(U64 object,
  U64 function, U32 size) {
  const U32 result = CudaDriverRoutine_bab60(function, size);
  if (result == 0) {
    At<U32>(object, 0x120) = size;
  }

  return result;
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_fcca0(U64 object,
  U64 state) {
  At<U32>(state, 0x1c) = 3;
  const U64 result = CudaDriverRoutine_fcce0(object);
  At<U32>(state, 0x1c) = 0;
  return result;
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_101ff0(U64 object) {
  CudaLockShared(object + 0x28, 0, 0);
  CudaUnlockShared(object + 0x28);
  CudaDriverRoutine_107f60(object + 0x28);
  return CudaFree(object);
}

[[gnu::visibility("hidden")]] void CudaDriverRoutine_107f60(U64* lock) {
  CudaDriverRoutine_12db50(reinterpret_cast<U64>(lock));
  lock[0] = 0;
  lock[1] = 0;
}

// Pages are tracked per 512 MiB slot from the base at 0x18.
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1033d0(U64 table,
  U32 slot, U64 argument) {
  U64* entry = At<U64**>(table, 0x50)[slot];
  if (entry == nullptr) {
    return 0;
  }

  return CudaDriverRoutine_b8470(reinterpret_cast<U64>(entry), argument,
    At<U64>(table, 0x18) + (static_cast<U64>(slot) << 29), entry[0], 0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_103410(U64 table,
  U32 slot, U64 argument) {
  U64* entry = At<U64**>(table, 0x50)[slot];
  if (entry == nullptr) {
    return 0;
  }

  return CudaDriverRoutine_b8480(reinterpret_cast<U64>(entry), argument,
    At<U64>(table, 0x18) + (static_cast<U64>(slot) << 29), entry[0]);
}
