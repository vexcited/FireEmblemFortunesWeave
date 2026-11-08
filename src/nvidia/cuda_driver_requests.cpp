#include <stdint.h>

using U8 = uint8_t;
using U32 = uint32_t;
using U64 = uint64_t;

// Packed requests start with their size, smaller ones are refused.
constexpr U32 kTooSmall = 2;
constexpr U32 kBusy = 304;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

using Visitor = U32 (*)(U64, U64, U32*);

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d070(U64, int64_t, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d0d0(U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d0f0(U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d110(U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_25d150(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d1d0(U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d230(U64, U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_25d270(U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_25d2b0(U64, U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_25d2e0(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d2f0(U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d310(U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d330(U64, U8);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d3a0(U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d3c0(U64, U32, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d420(U32, U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d430(U32, U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d440(U32, U32, U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_25d450(U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d460(U32, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d470(U32, U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d540(U64, U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_25d580(U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d590(U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d5b0(U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d5c0(U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d5d0(U32, U64, U64,
  U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d5e0(U32, U64, U64,
  U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_25d600(U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d610(U64, U8);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_25d640(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_25d650(U64);

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d080(U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d090(U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d0a0(U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d0b0(U64, U32, U64*,
  U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d100(U64*, U32);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_25d160(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_25d170(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_25d180(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_25d190(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d1a0(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d1b0(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d200(U64, U64, U64*,
  U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d290(U64*);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_25d2c0(U64, U64, U64,
  U32, U32);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_25d2d0(U64, U64*);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d300(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d340(U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d350(U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d3d0(U64, U32, U32,
  U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d4c0(U64, U32, U64*);
[[gnu::visibility("hidden")]] extern const U32 CudaDriverData_1130d58[3];

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_222b80(U64, Visitor,
  U32*);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_76a00(U64, U64, U32*);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_76d00(U64, U64, U32*);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_766e0(U64, U64, U32*);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_768a0(U64, U64, U32*);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_76970(U64, U64, U32*);

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_10ac30(U64, U64, U32,
  U64, U64, U32);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_12db70(U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_12db90(U64);

namespace {

[[gnu::always_inline]] inline U32 Size(U64 request) {
  return At<U32>(request, 0);
}

}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_658d0(U64 request) {
  if (Size(request) < 0x18) {
    return kTooSmall;
  }

  return CudaDriverRoutine_25d070(At<U64>(request, 0xc),
    At<int32_t>(request, 0x14), At<U64>(request, 4));
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_66b30(U64 request) {
  if (Size(request) < 0x14) {
    return kTooSmall;
  }

  return CudaDriverRoutine_25d0d0(At<U64>(request, 4), At<U64>(request, 0xc));
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_66b80(U64 request) {
  if (Size(request) < 0x10) {
    return kTooSmall;
  }

  return CudaDriverRoutine_25d0f0(At<U64>(request, 8), At<U32>(request, 4));
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_66c00(U64 request) {
  if (Size(request) < 0x14) {
    return kTooSmall;
  }

  At<U64>(request, 4) = CudaDriverRoutine_25d110(At<U64>(request, 0xc));
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_66dc0(U64 request) {
  if (Size(request) < 0x10) {
    return kTooSmall;
  }

  At<U32>(request, 0xc) = CudaDriverRoutine_25d150(At<U64>(request, 4));
  return 0;
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_67040(U64 request) {
  if (Size(request) < 0x10) {
    return kTooSmall;
  }

  return CudaDriverRoutine_25d1d0(At<U64>(request, 4), At<U32>(request, 0xc));
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_67220(U64 request) {
  if (Size(request) < 0x14) {
    return kTooSmall;
  }

  return CudaDriverRoutine_25d230(At<U64>(request, 4), At<U64>(request, 0xc));
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_673f0(U64 request) {
  if (Size(request) < 0x10) {
    return kTooSmall;
  }

  At<U32>(request, 4) = CudaDriverRoutine_25d270(At<U64>(request, 8));
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_67530(U64 request,
  U64 argument) {
  if (Size(request) < 8) {
    return kTooSmall;
  }

  At<U32>(request, 4) = CudaDriverRoutine_25d2b0(request, argument);
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_67620(U64 request) {
  if (Size(request) < 0x10) {
    return kTooSmall;
  }

  At<U32>(request, 0xc) = CudaDriverRoutine_25d2e0(At<U64>(request, 4));
  return 0;
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_67670(U64 request) {
  if (Size(request) < 0x14) {
    return kTooSmall;
  }

  return CudaDriverRoutine_25d2f0(At<U64>(request, 0xc), At<U64>(request, 4));
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_676e0(U64 request) {
  if (Size(request) < 0x14) {
    return kTooSmall;
  }

  return CudaDriverRoutine_25d310(At<U64>(request, 4), At<U64>(request, 0xc));
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_67730(U64 request) {
  if (Size(request) < 0x10) {
    return kTooSmall;
  }

  return CudaDriverRoutine_25d330(At<U64>(request, 4), At<U8>(request, 0xc));
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_678e0(U64 request) {
  if (Size(request) < 0x14) {
    return kTooSmall;
  }

  return CudaDriverRoutine_25d3a0(At<U64>(request, 4), request + 0xc);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_67930(U64 request) {
  if (Size(request) < 0x18) {
    return kTooSmall;
  }

  return CudaDriverRoutine_25d3c0(At<U64>(request, 4), At<U32>(request, 0xc),
    At<U64>(request, 0x10));
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_67b50(U64 request) {
  if (Size(request) < 0x18) {
    return kTooSmall;
  }

  return CudaDriverRoutine_25d420(At<U32>(request, 0x14),
    At<U64>(request, 4), At<U64>(request, 0xc));
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_67b80(U64 request) {
  if (Size(request) < 0x18) {
    return kTooSmall;
  }

  return CudaDriverRoutine_25d430(At<U32>(request, 0x14),
    At<U64>(request, 4), At<U64>(request, 0xc));
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_67bc0(U64 request) {
  if (Size(request) < 0x14) {
    return kTooSmall;
  }

  return CudaDriverRoutine_25d440(At<U32>(request, 4), At<U32>(request, 8),
    At<U64>(request, 0xc));
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_67bf0(U64 request) {
  if (Size(request) < 8) {
    return kTooSmall;
  }

  CudaDriverRoutine_25d450(At<U32>(request, 4));
  return 0;
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_67c30(U64 request) {
  if (Size(request) < 0x10) {
    return kTooSmall;
  }

  return CudaDriverRoutine_25d460(At<U32>(request, 0xc), At<U64>(request, 4));
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_67c60(U64 request) {
  if (Size(request) < 0x18) {
    return kTooSmall;
  }

  return CudaDriverRoutine_25d470(At<U32>(request, 4), At<U64>(request, 8),
    At<U64>(request, 0x10));
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_68640(U64 request) {
  if (Size(request) < 0x14) {
    return kTooSmall;
  }

  return CudaDriverRoutine_25d540(At<U64>(request, 4), At<U64>(request, 0xc));
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_68920(U64 request) {
  if (Size(request) < 0xc) {
    return kTooSmall;
  }

  At<U32>(request, 8) = CudaDriverRoutine_25d580(At<U32>(request, 4));
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_68990(U64 request) {
  if (Size(request) < 0x10) {
    return kTooSmall;
  }

  At<U64>(request, 8) = CudaDriverRoutine_25d590(At<U32>(request, 4));
  return 0;
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_68a20(U64 request) {
  if (Size(request) < 0x10) {
    return kTooSmall;
  }

  return CudaDriverRoutine_25d5b0(At<U64>(request, 4), At<U32>(request, 0xc));
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_68a50(U64 request) {
  if (Size(request) < 0x14) {
    return kTooSmall;
  }

  return CudaDriverRoutine_25d5c0(At<U64>(request, 4), At<U64>(request, 0xc));
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_68a80(U64 request) {
  if (Size(request) < 0x20) {
    return kTooSmall;
  }

  return CudaDriverRoutine_25d5d0(At<U32>(request, 4), At<U64>(request, 8),
    At<U64>(request, 0x10), At<U64>(request, 0x18));
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_68ab0(U64 request) {
  if (Size(request) < 0x20) {
    return kTooSmall;
  }

  return CudaDriverRoutine_25d5e0(At<U32>(request, 4), At<U64>(request, 8),
    At<U64>(request, 0x10), At<U64>(request, 0x18));
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_68b00(U64 request,
  U64 argument) {
  if (Size(request) < 0xc) {
    return kTooSmall;
  }

  const U8 flag = CudaDriverRoutine_25d600(request, argument);
  return CudaDriverRoutine_25d610(At<U64>(request, 4), flag);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_68c80(U64 request) {
  if (Size(request) < 0xc) {
    return kTooSmall;
  }

  CudaDriverRoutine_25d640(At<U64>(request, 4));
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_68cc0(U64 request) {
  if (Size(request) < 0xc) {
    return kTooSmall;
  }

  CudaDriverRoutine_25d650(At<U64>(request, 4));
  return 0;
}

namespace {

// Missing tables report which level of the lookup failed.
template <U64 kOffset, Visitor kVisit, U32 kMissing>
[[gnu::always_inline]] inline U32 VisitTable(U64 table, U32* pResult) {
  if (table == 0) {
    *pResult = kMissing;
    return 1;
  }

  return CudaDriverRoutine_222b80(At<U64>(table, kOffset), kVisit, pResult);
}

}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_76870(U64, U64 table,
  U32* pResult) {
  return VisitTable<0x58, CudaDriverRoutine_768a0, 3>(table, pResult);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_766b0(U64, U64 table,
  U32* pResult) {
  return VisitTable<0x58, CudaDriverRoutine_766e0, 3>(table, pResult);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_76650(U64, U64 table,
  U32* pResult) {
  return VisitTable<0x20, CudaDriverRoutine_766b0, 33>(table, pResult);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_76680(U64, U64 table,
  U32* pResult) {
  return VisitTable<0x58, CudaDriverRoutine_766e0, 10>(table, pResult);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_76810(U64, U64 table,
  U32* pResult) {
  return VisitTable<0x20, CudaDriverRoutine_76870, 33>(table, pResult);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_76840(U64, U64 table,
  U32* pResult) {
  return VisitTable<0x58, CudaDriverRoutine_768a0, 3>(table, pResult);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_76940(U64, U64 table,
  U32* pResult) {
  return VisitTable<0x20, CudaDriverRoutine_76970, 33>(table, pResult);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_769a0(U64, U64 table,
  U32* pResult) {
  return VisitTable<0x20, CudaDriverRoutine_76a00, 33>(table, pResult);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_6b9a0(U64, U64 table,
  U32* pResult) {
  return VisitTable<0x18, CudaDriverRoutine_76940, 29>(table, pResult);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_6fe80(U64 table,
  U32* pResult) {
  if (table == 0 || pResult == nullptr) {
    return 4;
  }

  return CudaDriverRoutine_222b80(At<U64>(table, 0x18),
    CudaDriverRoutine_76d00, pResult) != 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_61ac0(U64 object) {
  return CudaDriverRoutine_12db90(object + 0x83c0) != 0 ? kBusy : 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_8ea00(U64 lock) {
  return CudaDriverRoutine_12db70(lock) != 0 ? kBusy : 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_8e850(U64 lock,
  const U32* pValue) {
  return CudaDriverRoutine_12db70(lock) != 0 ? kBusy : *pValue;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_69b70(U64 graph,
  U64 isEnabled) {
  if (graph == 0 || At<U32>(graph, 4) != 1) {
    return 1;
  }

  At<U32>(graph, 0x1f8) = isEnabled != 0;
  return 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverRoutine_9acc0(U64 device) {
  if (At<U32>(device, 0xc50) != 7) {
    return false;
  }

  const U32 implementation = At<U32>(device, 0xc54);
  return implementation == 3 || implementation == 5;
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_515b0(U64 context,
  U64 function, U64 pBlocks, U32 blockSize, U64 sharedSize) {
  if (context == 0 || pBlocks == 0) {
    return 400;
  }

  return CudaDriverRoutine_10ac30(context, pBlocks, blockSize, function,
    sharedSize, 0);
}

// Writes a method header and returns the next free slot.
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_a70(U64 out,
  U64 address) {
  At<U32>(out, 0) = 0x200120ad;
  At<U32>(out, 4) = address >> 8;
  At<U64>(out, 8) = 0x3200120b0;
  return out + 0x10;
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_130b0(U64 out,
  U64 address) {
  At<U32>(out, 0) = 0x200120ad;
  At<U32>(out, 4) = address >> 8;
  At<U64>(out, 8) = 0x3200120b0;
  return out + 0x10;
}

namespace {

// Two state enumerations map 1 and 2 to false and true.
template <U64 (*Set)(U64, U32)>
[[gnu::always_inline]] inline U64 SetSwitch(U64 request) {
  if (Size(request) < 0x10) {
    return kTooSmall;
  }

  const U32 state = At<U32>(request, 0xc);
  if (state == 1) {
    return Set(At<U64>(request, 4), 0);
  }

  if (state == 2) {
    return Set(At<U64>(request, 4), 1);
  }

  return 4;
}

template <void (*Release)(U64)>
[[gnu::always_inline]] inline U32 ReleaseHandle(U64 request) {
  if (Size(request) < 0xc) {
    return kTooSmall;
  }

  Release(At<U64>(request, 4));
  At<U64>(request, 4) = 0;
  return 0;
}

template <U64 (*Run)(U64), U32 kLast>
[[gnu::always_inline]] inline U64 RunWithMode(U64 request) {
  if (Size(request) < 0x10) {
    return kTooSmall;
  }

  if (At<U32>(request, 0xc) - 1 > kLast - 1) {
    return 4;
  }

  return Run(At<U64>(request, 4));
}

}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_65900(U64 request) {
  return SetSwitch<CudaDriverRoutine_25d080>(request);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_65950(U64 request) {
  return SetSwitch<CudaDriverRoutine_25d090>(request);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_659a0(U64 request) {
  return SetSwitch<CudaDriverRoutine_25d0a0>(request);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_677a0(U64 request) {
  return SetSwitch<CudaDriverRoutine_25d350>(request);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_66e10(U64 request) {
  return ReleaseHandle<CudaDriverRoutine_25d160>(request);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_66e60(U64 request) {
  return ReleaseHandle<CudaDriverRoutine_25d170>(request);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_66eb0(U64 request) {
  return ReleaseHandle<CudaDriverRoutine_25d180>(request);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_66f00(U64 request) {
  return ReleaseHandle<CudaDriverRoutine_25d190>(request);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_66f50(U64 request) {
  return RunWithMode<CudaDriverRoutine_25d1a0, 3>(request);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_66f90(U64 request) {
  return RunWithMode<CudaDriverRoutine_25d1b0, 4>(request);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_676a0(U64 request) {
  return RunWithMode<CudaDriverRoutine_25d300, 3>(request);
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_659f0(U64 request) {
  if (Size(request) < 0xc) {
    return kTooSmall;
  }

  *At<U64*>(request, 4) = 1;
  return 0;
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_65a40(U64 request) {
  if (Size(request) < 0x18) {
    return kTooSmall;
  }

  U64 output = 0;
  return CudaDriverRoutine_25d0b0(At<U64>(request, 4), At<U32>(request, 0xc),
    &output, At<U64>(request, 0x10));
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_66bb0(U64 request) {
  if (Size(request) < 0x18) {
    return kTooSmall;
  }

  U64 handle = At<U64>(request, 4);
  At<U64>(request, 0x10) = CudaDriverRoutine_25d100(&handle,
    At<U32>(request, 0xc));
  return 0;
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_67150(U64 request) {
  if (Size(request) < 0x1c) {
    return kTooSmall;
  }

  U64 output = 0;
  return CudaDriverRoutine_25d200(At<U64>(request, 4), At<U64>(request, 0xc),
    &output, At<U64>(request, 0x14));
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_67460(U64 request) {
  if (Size(request) < 0x10) {
    return kTooSmall;
  }

  U64 output = 0;
  At<U64>(request, 8) = CudaDriverRoutine_25d290(&output);
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_67570(U64 request) {
  if (Size(request) < 0x28) {
    return kTooSmall;
  }

  const U32 mode = (At<U32>(request, 0x24) & 3) != 0 ? 3 : 0;
  CudaDriverRoutine_25d2c0(At<U64>(request, 4), At<U64>(request, 0xc),
    At<U64>(request, 0x14), 1, mode);
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_675d0(U64 request) {
  if (Size(request) < 0x14) {
    return kTooSmall;
  }

  U64 output;
  const U32 result = CudaDriverRoutine_25d2d0(At<U64>(request, 4), &output);
  At<U64>(request, 0xc) = output;
  return result;
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_67760(U64 request) {
  if (Size(request) < 0x10) {
    return kTooSmall;
  }

  const U32 index = At<U32>(request, 0xc) - 1;
  if (index > 2) {
    return 4;
  }

  return CudaDriverRoutine_25d340(At<U64>(request, 4),
    CudaDriverData_1130d58[index]);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_67960(U64 request) {
  if (Size(request) < 0x18) {
    return kTooSmall;
  }

  return CudaDriverRoutine_25d3d0(At<U64>(request, 4), At<U32>(request, 0xc),
    At<U32>(request, 0x10), At<U32>(request, 0x14));
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_680e0(U64 request) {
  if (Size(request) < 0x14) {
    return kTooSmall;
  }

  U64 flags;
  reinterpret_cast<U8*>(&flags)[0] = At<U8>(request, 0xc);
  return CudaDriverRoutine_25d4c0(At<U64>(request, 4), At<U32>(request, 0x10),
    &flags);
}
