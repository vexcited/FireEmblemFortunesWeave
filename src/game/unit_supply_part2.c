#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6dacc0(_QWORD);
__int64 GameRoutine_6e5900(_QWORD, _QWORD);
__int64 GameRoutine_7172c0(void);
__int64 GameRoutine_7173a0(_QWORD);
__int64 GameRoutine_8af240(_QWORD, _QWORD);
__int64 ItemSeq_8af940(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 LegionPool_937de0(_QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_212cf80[5];
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* game_vstring_kEmpty_ptr[2];
__int64 game_UnitSupplyPart2_Setup_lambda0_Invoke(__int64 result,
                                                  unsigned __int16* a2);
__int64 game_UnitSupplyPart2_End_lambda0_Invoke();
__int64 game_UnitSupplyPart2_End_lambda1_Invoke(__int64 a1, __int64* a2);
__int64 game_UnitSupplyPart2_End_lambda2_Invoke();

__int64 game_UnitSupplyPart2_Setup_lambda0_Invoke(__int64 result,
                                                  unsigned __int16* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  int* v5;
  int v6;
  int v7;
  int v8;

  v2 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * a2[2]);
  if ((((0x10000000000LL << *(_BYTE*)(v2 + 72)) | (1LL << *(_BYTE*)(v2 + 73))) &
       0xFFBFFFFFFFA39FFFLL) != 0) {
    if ((*((_BYTE*)a2 + 7) & 0x40) == 0) {
      return result;
    }
    v3 = *(_QWORD*)(result + 8);
    v4 = *a2;
    v5 = &v7;
    v7 = v4;
  }
  else {
    v6 = *a2;
    v3 = *(_QWORD*)(result + 8);
    v5 = &v8;
    v8 = v6;
  }
  return GameRoutine_6e5900(v3, v5);
}

__int64 game_UnitSupplyPart2_End_lambda0_Invoke()
{
  __int64 v0;
  __int64 result;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  _BYTE* v10;

  v0 = GameRoutine_7172c0();
  result = GameRoutine_7173a0(v0);
  v2 = 0;
  v3 = (__int64*)GameData_212cf80[0];
  v4 = *(_QWORD*)GameData_212cf80[0];
  do {
    v5 = *(_QWORD*)(v4 + 8);
    v6 = *(_QWORD*)(v5 + 48) + 8 * v2;
    if (*(_BYTE*)v6 != 0 && (*(_BYTE*)(v6 + 2) & 1) != 0) {
      if (*(_BYTE*)(v6 + 1) != 0) {
        v7 = game_UnitPool_Get(v6 + 1);
      }
      else {
        v7 = 0;
      }
      result = LegionPool_937de0(v5, v7);
      *(_QWORD*)v6 = 0;
      v8 = 300;
      v9 = 0;
      *(_DWORD*)(v5 + 72) = 0;
      v4 = *v3;
      v10 = (_BYTE*)(*(_QWORD*)(v5 + 48) + 56LL);
      do {
        if (*(v10 - 56) != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (*(v10 - 48) != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (*(v10 - 40) != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (*(v10 - 32) != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (*(v10 - 24) != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (*(v10 - 16) != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (*(v10 - 8) != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (*v10 != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (v10[8] != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (v10[16] != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (v10[24] != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (v10[32] != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (v10[40] != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (v10[48] != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (v10[56] != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        v8 -= 15;
        v10 += 120;
      } while (v8 != 0);
    }
    ++v2;
  } while (v2 != 300);
  return result;
}

__int64 game_UnitSupplyPart2_End_lambda1_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  _QWORD v5[3];
  const char* v6;

  v2 = *a2;
  GameRoutine_8af240(v5, *(_QWORD*)(a1 + 8));
  v6 = "MID_Part2Clear_Reward_Message";
  result = ItemSeq_8af940(v2, v5, 0, &v6, game_vstring_kEmpty_ptr[0], 0);
  if (v5[0] != 0) {
    v5[1] = v5[0];
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  return result;
}

__int64 game_UnitSupplyPart2_End_lambda2_Invoke()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  int v9;

  v9 = 17;
  result = game_UnitPool_GetFirst(&v9);
  if (result != 0) {
    v1 = *(_QWORD*)(result + 432);
    if (v1 == 0) {
      v6 = *(_QWORD*)(result + 440);
      if (v6 == 0) {
        return GameRoutine_6dacc0(result);
      }
      v7 = *(unsigned __int8*)(v6 + 16);
      if (v7 > 8) {
        return GameRoutine_6dacc0(result);
      }
      v8 = v7 - 3;
      while (1) {
        if (v8 == 0) {
          v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
          if (v1 != 0) {
            break;
          }
        }
        if (++v8 == 6) {
          return GameRoutine_6dacc0(result);
        }
      }
    }
    while (1) {
      do {
        v2 = v1;
        GameRoutine_6dacc0(result);
        v1 = *(_QWORD*)(v2 + 432);
        result = v2;
      } while (v1 != 0);
      v3 = *(_QWORD*)(v2 + 440);
      if (v3 == 0) {
        break;
      }
      v4 = *(unsigned __int8*)(v3 + 16);
      if (v4 > 8) {
        break;
      }
      v5 = v4 - 3;
      while (1) {
        if (v5 == 0) {
          v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
          if (v1 != 0) {
            break;
          }
        }
        if (++v5 == 6) {
          goto LABEL_11;
        }
      }
      result = v2;
    }
  LABEL_11:
    result = v2;
    return GameRoutine_6dacc0(result);
  }
  return result;
}

#pragma GCC visibility pop
