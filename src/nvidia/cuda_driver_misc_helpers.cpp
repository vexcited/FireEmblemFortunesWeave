#include <stdint.h>

using U8 = uint8_t;
using U32 = uint32_t;
using U64 = uint64_t;

constexpr U32 kInvalidValue = 1;
constexpr U32 kInvalidContext = 201;
constexpr U32 kInvalidHandle = 400;
constexpr U32 kContextDestroyed = 709;
constexpr U32 kStreamCaptureUnsupported = 900;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

// A process wide option, it can only be set once.
struct CudaProcessOption {
  U32 value;
  U8 reserved[0x33];
  U8 isSet;
};

[[gnu::visibility("hidden")]] extern const U32 CudaDriverData_1130344[3];
[[gnu::visibility("hidden")]] extern CudaProcessOption CudaDriverData_14325d4;

[[gnu::visibility("hidden")]] U64 CudaFree(U64 address);
[[gnu::visibility("hidden")]] U32 CudaGetThreadState(U64* pState);
[[gnu::visibility("hidden")]] U32 CudaGetThreadContext(U64 state,
  U64* pContext, U32 apiVersion);

[[gnu::visibility("hidden")]] void CudaDriverRoutine_640d0(U64, U64, U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_8e850(U64, U64*);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_98490(U64, U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_985a0(U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_9ae50(U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_bb530(U64, U32, U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_deeb0(U64, U32);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_ee330(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_102040(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_117c40(U64, U32, U32,
  U32);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_122010(U64, U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_122020(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_12db50(U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_222b80(U64,
  U32 (*)(U64, U64, U32*), U32*);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_6b8d0(U64, U64, U32*);

// Devices from 0x1101 on split their register file in two halves.
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_3ac0(U64 context,
  U64 module) {
  const U32* device = At<U32*>(context, 0x40);
  if (At<U32>(module, 0xf0) < 0x1101) {
    return device[950];
  }

  return device[2937] + device[2936];
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_162c0(U64 context,
  U64 module) {
  const U32* device = At<U32*>(context, 0x40);
  if (At<U32>(module, 0xf0) < 0x1101) {
    return device[950];
  }

  return device[2937] + device[2936];
}

namespace {

[[gnu::always_inline]] inline U32 RegisterLimit(const U32* device,
  U32 extra, U64 module) {
  if (module != 0 && At<U8>(module, 0x440) != 0) {
    return device[2937] + device[2936] + At<U32>(module, 0xf0);
  }

  if (extra != 0) {
    return device[2936] + extra;
  }

  return device[2943] + device[2942];
}

}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_3af0(const U32* device,
  U32 extra, U64 module) {
  return RegisterLimit(device, extra, module);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_162f0(const U32* device,
  U32 extra, U64 module) {
  return RegisterLimit(device, extra, module);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_81e0(U32 kind,
  U32* pValue) {
  const U32 index = kind - 1;
  if (index > 2) {
    return kInvalidValue;
  }

  *pValue = CudaDriverData_1130344[index];
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_1c880(U32 kind,
  U32* pValue) {
  const U32 index = kind - 1;
  if (index > 2) {
    return kInvalidValue;
  }

  *pValue = CudaDriverData_1130344[index];
  return 0;
}

// Writes a method header and the 256 byte payload after it.
[[gnu::visibility("hidden")]] U32* CudaDriverRoutine_5ab0(U32* out,
  U64 address, U64 data) {
  out[2] = address >> 8;
  out[0] = 0x204220c6;
  out[1] = address >> 40;
  CudaDriverRoutine_640d0(reinterpret_cast<U64>(out + 3), data, 0x100);
  return out + 67;
}

[[gnu::visibility("hidden")]] U32* CudaDriverRoutine_19180(U32* out,
  U64 address, U64 data) {
  out[2] = address >> 8;
  out[0] = 0x204220c6;
  out[1] = address >> 40;
  CudaDriverRoutine_640d0(reinterpret_cast<U64>(out + 3), data, 0x100);
  return out + 67;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_50d00(U64 pValue,
  U32 attribute, U64 function) {
  if (function == 0) {
    return kInvalidHandle;
  }

  if (pValue == 0) {
    return kInvalidValue;
  }

  return CudaDriverRoutine_bb530(function, attribute, pValue);
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_5e9b0(U64 object) {
  const U64 first = At<U64>(object, 0x83e8);
  if (first != 0 && At<U32>(first, 0x18) != 0) {
    return true;
  }

  const U64 second = At<U64>(object, 0x83e0);
  return second != 0 && At<U32>(second, 0x18) != 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_61770(U64 first,
  U64 second) {
  if (first != 0) {
    CudaFree(first);
  }

  if (second != 0) {
    CudaFree(second);
  }

  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_6b880(U64 table) {
  U32 count = 0;
  if (table == 0) {
    return 11;
  }

  CudaDriverRoutine_222b80(At<U64>(table, 0x20), CudaDriverRoutine_6b8d0,
    &count);
  return count;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_781f0(U32 value,
  U8 isSet) {
  if ((CudaDriverData_14325d4.isSet & 1) != 0) {
    return 4;
  }

  CudaDriverData_14325d4.value = value;
  CudaDriverData_14325d4.isSet = isSet != 0;
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_78cb0(U64* object) {
  if (object == nullptr || object[0] == 0) {
    return kInvalidValue;
  }

  At<U32>(reinterpret_cast<U64>(object), 0x50) = At<U32>(object[0], 0x520);
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_857c0(U64 entry,
  U64 owner) {
  if (At<U64>(entry, 8) != At<U64>(owner, 0) ||
    (At<U8>(entry, 0x56) & 1) != 0) {
    return 0;
  }

  At<U8>(entry, 0x56) = 1;
  At<U8>(owner, 8) = 1;
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_87cd0(U64 array) {
  if (At<U32>(array, 4) == 0) {
    return 1;
  }

  if (At<U32>(array, 8) != 0 && (At<U8>(array, 0x14) & 5) == 0) {
    return 3;
  }

  return 2;
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_8adb0(U64* vector) {
  const U64 result = CudaFree(vector[2]);
  vector[0] = 0;
  vector[1] = 0;
  vector[2] = 0;
  return result;
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_108490(U64* lock) {
  const U64 result = CudaDriverRoutine_12db50(reinterpret_cast<U64>(lock));
  lock[0] = 0;
  lock[1] = 0;
  lock[2] = 0;
  return result;
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_ea9a0(U64, U64* list) {
  CudaDriverRoutine_ee330(list[2]);
  list[0] = 0;
  list[1] = 0;
  list[2] = 0;
  return CudaFree(reinterpret_cast<U64>(list));
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_8f360(U64 context) {
  if (CudaDriverRoutine_9ae50(At<U64>(context, 0x40)) != 0) {
    return false;
  }

  if ((At<U8>(At<U64>(context, 0x40), 0x4250) & 0x40) != 0) {
    return CudaDriverRoutine_122020(context) != 0;
  }

  return false;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_94440(U64 function) {
  if (CudaDriverRoutine_985a0(At<U64>(At<U64>(function, 0x20), 0x18)) != 0) {
    return false;
  }

  if ((At<U64>(function, 0x358) & 0x7fffffffe) != 0) {
    return true;
  }

  return (At<U8>(function, 0x357) & 0xe0) != 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_980c0(U64 context,
  U64 argument) {
  const U64 channel = At<U64>(context, 0x58);
  if (At<U32>(channel, 0xd0) == 0) {
    return CudaDriverRoutine_98490(context, argument);
  }

  CudaDriverRoutine_117c40(At<U64>(channel, 8), 2, 1, 0);
  return kStreamCaptureUnsupported;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_99870(U64 device) {
  if (At<U8>(device, 0x4508) != 0) {
    return 1;
  }

  if (At<U8>(device, 0x4509) != 0) {
    return 2;
  }

  return 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_9aa60(U64 device,
  U32 kind) {
  if (kind == 0) {
    return true;
  }

  if (kind != 1 || (At<U8>(device, 0x4264) & 1) == 0) {
    return false;
  }

  return At<U32>(device, 0x42c0) == 0 || At<U8>(device, 0x42c5) != 0;
}

// Green contexts are tagged 3 and validate their primary from 0xa8.
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_de220(U64 green,
  U32 flags) {
  if (green == 0) {
    return kInvalidContext;
  }

  if (At<U32>(green, 8) == 3) {
    return CudaDriverRoutine_deeb0(At<U64>(green, 0xa8), flags);
  }

  return kContextDestroyed;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_df060(U64* pContext) {
  U64 state = 0;
  const U32 result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  return CudaGetThreadContext(state, pContext, 0);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_6a2e0(U64 argument) {
  U64 state = 0;
  const U32 result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  return CudaDriverRoutine_122010(state, argument);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_60b40(U64 lock,
  U32* pValue) {
  U64 value = 0;
  const U32 result = CudaDriverRoutine_8e850(lock, &value);
  if (pValue != nullptr) {
    *pValue = value >> 32;
  }

  return result;
}

// Pool records keep their granule size in the page record at 0x8.
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_f1f00(U64* record,
  U64* pRange) {
  const U64 page = CudaDriverRoutine_102040(record[0]);
  const U64 granule = At<U32>(page, 8);
  pRange[0] = record[3];
  pRange[1] = record[5] * granule;
  return page;
}
