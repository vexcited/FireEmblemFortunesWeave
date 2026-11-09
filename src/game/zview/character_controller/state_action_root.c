#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d3e100(_QWORD, _QWORD);
extern __int64 GameData_21d96b8;
float StateActionRoot_Unknown3(__int64 a1);
__int64 StateActionRoot_Unknown5(__int64 a1);
__int64 StateActionRoot_Unknown2(__int64 result);

float StateActionRoot_Unknown3(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  float result;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(a1 + 16) =
      (*(_DWORD*)(*(_QWORD*)(v1 + 8) + 384LL) & 0x40000000) != 0;
  *(_DWORD*)(v1 + 128) |= 4u;
  *(_DWORD*)(*(_QWORD*)(a1 + 8) + 128LL) |= 0x100u;
  v2 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(a1 + 28) = *(_DWORD*)(v2 + 592);
  result = *(float*)(v2 + 596);
  *(float*)(a1 + 32) = result;
  return result;
}

__int64 StateActionRoot_Unknown5(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 result;

  if (*(_BYTE*)(a1 + 16) == 1 && *(_BYTE*)(a1 + 17) != 0) {
    *(_BYTE*)(a1 + 17) = 0;
    v2 = GameData_21d96b8;
    v3 = *(_DWORD*)(GameData_21d96b8 + 40) - 1;
    *(_DWORD*)(GameData_21d96b8 + 40) = v3;
    if (v3 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v2 + 32) + 8LL))(v2 + 32);
    }
  }
  result = GameRoutine_d3e100(a1, 0);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 632LL) + 24LL) =
      0;
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 632LL) + 20LL) =
      0;
  return result;
}

__int64 StateActionRoot_Unknown2(__int64 result)
{
  *(_WORD*)(result + 16) = 0;
  *(_BYTE*)(result + 18) = 0;
  *(_DWORD*)(result + 52) = 0;
  *(_DWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 20) = 0;
  *(_QWORD*)(result + 28) = 0;
  *(_QWORD*)(result + 36) = 0;
  *(_QWORD*)(result + 41) = 0;
  return result;
}

#pragma GCC visibility pop
