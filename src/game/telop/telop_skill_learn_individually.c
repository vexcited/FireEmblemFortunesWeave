#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_1760e40(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 (*game_telop_TelopSkillLearn_vtable[])();
extern __int64 GameData_212d690;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d670[3];
void GameRoutine_17644e0(_QWORD*, __int64, __int64, __int64);
__int64 TelopSkillLearnIndividually_Unknown57(__int64 a1);
void TelopSkillLearnIndividually_Unknown63(_QWORD* a1, int* a2, char* a3);
__int64 TelopSkillLearnIndividually_DeletingDestructor(_QWORD* a1);

__int64 TelopSkillLearnIndividually_Unknown57(__int64 a1)
{
  _BYTE v3[4];
  int v4;

  *(_DWORD*)(a1 + 876) = 0;
  *(_DWORD*)(a1 + 940) = 0;
  v4 = 0;
  v3[0] = 0;
  *(_QWORD*)(a1 + 868) = 0;
  (*(void (**)(__int64, int*, _BYTE*))(*(_QWORD*)a1 + 496LL))(a1, &v4, v3);
  (*(void (**)(__int64, int*, _BYTE*))(*(_QWORD*)a1 + 504LL))(a1, &v4, v3);
  return (*(__int64 (**)(__int64, int*, _BYTE*))(*(_QWORD*)a1 + 512LL))(a1, &v4,
                                                                        v3);
}

void TelopSkillLearnIndividually_Unknown63(_QWORD* a1, int* a2, char* a3)
{
  int v3;
  __int64 v5;
  __int64 v6;
  __int64 v9;
  int v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD v24[6];

  v3 = *a2;
  if (*a2 > 0) {
    *a3 = 1;
    return;
  }
  v5 = a1[148];
  v6 = a1[147];
  if (v5 != v6 && (*a3 & 1) == 0) {
    v9 = 0;
    v10 = 0;
    do {
      v11 = *(_QWORD*)(v6 + 8 * v9);
      v12 = *(_BYTE*)(v11 + 32);
      if (v12 != 0) {
        v13 = *(_QWORD*)(v11 + 48);
        if (*(_QWORD*)(v13 + 552) == 0 && *(_BYTE*)(v13 + 104) != 3 &&
            *(_BYTE*)(v13 + 250) != 46) {
          v16 = (_QWORD*)GameRoutine_1760e40(a1, 19);
          GameRoutine_1562cf0(v16, "UnitSkill");
          v17 = ui_LayoutAccessor_FindPane(v16, "T_NumLv");
          if (v17 != 0) {
            v18 = __dynamic_cast(v17, GameData_212d670[0], GameData_212d690, 0);
            if (v18 != 0) {
              GameRoutine_156c910(v18, "%d", 1);
            }
          }
          v19 = a1[146];
          v20 = *(_QWORD*)(v11 + 48);
          v24[4] = 0;
          GameRoutine_17644e0(v16, v19, v20, (__int64)v24);
          v21 = a1[147] + 8 * v9;
          v22 = a1[148];
          v23 = v22 - (v21 + 8);
          if (v22 != v21 + 8) {
            memmove(a1[147] + 8 * v9, v21 + 8, v22 - (v21 + 8));
          }
          a1[148] = v21 + v23;
          ++*a2;
          return;
        }
        v14 = v6 + 8 * v9;
        v15 = v5 - (v14 + 8);
        if (v5 != v14 + 8) {
          memmove(v14, v14 + 8, v5 - (v14 + 8));
          v6 = a1[147];
        }
        v5 = v14 + v15;
        a1[148] = v14 + v15;
        v3 = *a2;
        v12 = *a3;
      }
      else {
        ++v10;
      }
      v9 = v10;
    } while (v10 < (unsigned __int64)((v5 - v6) >> 3) && v3 <= 5 &&
             (v12 & 1) == 0);
  }
}

__int64 TelopSkillLearnIndividually_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = a1[151];
  *a1 = game_telop_TelopSkillLearn_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[152] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = a1[147];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    a1[148] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  game_telop_TelopResult_Destroy_TelopResult(a1);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9, a1);
}

#pragma GCC visibility pop
