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
__int64 BaseNx_2a0820(__int64, __int64, __int64);
__int64 BaseNx_2a0cc0(__int64, char);
__int64 BaseNx_2a0e80(__int64, _QWORD*);
__int64 StreamHeaderLoadTask_29be70(__int64);
__int64 StreamHeaderLoadTask_29bfb0(__int64);
void* BaseNx_2a18e0();
void nn_detail_UnexpectedDefaultImpl_alt1() __asm__(
    "nn_detail_UnexpectedDefaultImpl");
void nn_diag_detail_AbortImpl_1a0a590_alt1() __asm__(
    "nn_diag_detail_AbortImpl_1a0a590");

__int64 StreamHeaderLoadTask_Unknown2(__int64 a1)
{
  int v2;
  __int64 v4;
  void* v5;
  __int64 v6;
  _QWORD v7[4];

  v2 = StreamHeaderLoadTask_29be70(*(_QWORD*)(a1 + 72));
  if ((v2 & 0x80000000) == 0) {
    return StreamHeaderLoadTask_29bfb0(*(_QWORD*)(a1 + 72));
  }
  memset(v7, 0, sizeof(v7));
  if ((unsigned int)(v2 + 2130706432) >= 4) {
    nn_detail_UnexpectedDefaultImpl_alt1();
  }
  nn_util_SNPrintf(
      v7, 32,
      (const char*)&GameData_1b0f658 +
          *((int*)&GameData_1b0f658 + (unsigned int)(v2 + 2130706432)));
  v4 = *(_QWORD*)(a1 + 72);
  if (*(_BYTE*)(v4 + 88) == 1) {
    nn_diag_detail_AbortImpl_1a0a590_alt1();
  }
  v5 = BaseNx_2a18e0();
  v6 = BaseNx_2a0820((__int64)v5, 32, 8);
  *(_DWORD*)(v6 + 8) = 56;
  *(_QWORD*)(v6 + 24) = *(_QWORD*)(v4 + 32);
  BaseNx_2a0e80((__int64)v5, (_QWORD*)v6);
  return BaseNx_2a0cc0((__int64)v5, 1);
}

#pragma GCC visibility pop
