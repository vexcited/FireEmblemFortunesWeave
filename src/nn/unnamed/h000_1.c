#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 SdkRoutine_87c7a0(_QWORD);
__int64 SdkRoutine_87c8d0(_QWORD);

void __attribute__((noreturn)) SdkHr_817db0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned __int64 v7;

  SdkRoutine_857220(v2, 24);
  v4 = SdkRoutine_87c7a0(a1);
  v5 = *(_QWORD*)(v1 + 16);
  if (*(_QWORD*)(v1 + 24) != v5) {
    goto LABEL_3;
  }
  while (1) {
    SdkRoutine_87c8d0(v4);
  LABEL_3:
    v6 = 1;
    v7 = 0;
    do {
      v4 = *(_QWORD*)(v5 + 8 * v7);
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      }
      v5 = *(_QWORD*)(v1 + 16);
      v7 = v6++;
    } while (v7 < (*(_QWORD*)(v1 + 24) - v5) >> 3);
  }
}

#pragma GCC visibility pop
