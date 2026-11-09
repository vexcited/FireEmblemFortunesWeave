#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_606010(_QWORD);
__int64 GameRoutine_606190(_QWORD, _QWORD);
__int64 GameRoutine_606680(_QWORD);
__int64 GameRoutine_606770(_QWORD, _QWORD);
extern _UNKNOWN** GameData_2130ef8;
extern __int64* GameData_2130f00[5];
extern __int64* GameData_21361d0[2];
void GameRoutine_651250(void*, unsigned __int64);
__int64 RenderTargetTextureInfo_Unknown3(__int64 a1, __int64 a2);
__int64 RenderTargetTextureInfo_DeletingDestructor(_QWORD* a1);
void RenderTargetTextureInfo_Unknown2(_QWORD* a1);

__int64 RenderTargetTextureInfo_Unknown3(__int64 a1, __int64 a2)
{
  __int64 result;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1);
  if ((result & 1) != 0) {
    GameRoutine_606190(a1 + 136, a2);
    GameRoutine_606770(a1 + 64, a2);
    result = ((__int64 (*)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD))*GameData_2130ef8)(
        *(_QWORD*)(a1 + 24), *(_QWORD*)(a1 + 32), *(_QWORD*)(a1 + 40),
        *(_QWORD*)(a1 + 48), *GameData_2130f00[0], *(unsigned int*)(a1 + 212));
    *(_DWORD*)(a1 + 208) = 0;
    *(_QWORD*)(a1 + 24) = 0;
    *(_QWORD*)(a1 + 32) = 0;
    *(_QWORD*)(a1 + 40) = 0;
  }
  return result;
}

__int64 RenderTargetTextureInfo_DeletingDestructor(_QWORD* a1)
{
  *a1 = GameData_21361d0[0] + 2;
  GameRoutine_606010(a1 + 17);
  return GameRoutine_606680(a1 + 8);
}

void RenderTargetTextureInfo_Unknown2(_QWORD* a1)
{
  *a1 = GameData_21361d0[0] + 2;
  GameRoutine_606010(a1 + 17);
  GameRoutine_606680(a1 + 8);
  GameRoutine_651250(a1, 0xD8u);
}

#pragma GCC visibility pop
