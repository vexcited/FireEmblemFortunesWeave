#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_29be70(__int64);
__int64 GameRoutine_29bfb0(__int64);
__int64 GameRoutine_2a0820(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a0cc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a0e80(_QWORD, _QWORD);
__int64 GameRoutine_2a18e0(_QWORD);
__int64 nn_detail_UnexpectedDefaultImpl(_QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, const char*, ...);
extern _UNKNOWN GameData_1b0f658;
__int64 StreamHeaderLoadTask_Unknown2(__int64 a1);

__int64 StreamHeaderLoadTask_Unknown2(__int64 a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD v8[4];

  v2 = GameRoutine_29be70(*(_QWORD*)(a1 + 72));
  if ((v2 & 0x80000000) == 0) {
    return GameRoutine_29bfb0(*(_QWORD*)(a1 + 72));
  }
  memset(v8, 0, sizeof(v8));
  if ((unsigned int)(v2 + 2130706432) >= 4) {
    v4 = nn_detail_UnexpectedDefaultImpl(v2);
  LABEL_7:
    nn_diag_detail_AbortImpl_1a0a590(v4);
    __udf(0);
  }
  v4 = nn_util_SNPrintf(
      v8, 32,
      (const char*)&GameData_1b0f658 +
          *((int*)&GameData_1b0f658 + (unsigned int)(v2 + 2130706432)));
  v5 = *(_QWORD*)(a1 + 72);
  if (*(_BYTE*)(v5 + 88) == 1) {
    goto LABEL_7;
  }
  v6 = GameRoutine_2a18e0(v4);
  v7 = GameRoutine_2a0820(v6, 32, 8, 0);
  *(_DWORD*)(v7 + 8) = 56;
  *(_QWORD*)(v7 + 24) = *(_QWORD*)(v5 + 32);
  GameRoutine_2a0e80(v6, v7);
  return GameRoutine_2a0cc0(v6, 1, 0);
}

#pragma GCC visibility pop
