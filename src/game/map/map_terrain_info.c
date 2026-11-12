#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Alignment_56b600(void);
__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_155ea30(_QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_1827b90(_QWORD*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 (*GameData_20e2220[])();
extern __int64 (*GameData_20e22f8[])();
extern __int64 (*game_map_MapTerrainInfo_vtable[])();
extern __int64 GameData_212d690;
extern __int64 GameData_21ed0a0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d560[9];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212fc70[2];
extern char* GameData_20e2230[8];
extern int GameData_226b240;
__int64 MapTerrainInfo_Destructor(_QWORD* a1);
__int64 MapTerrainInfo_1827f00(__int64 a1, int a2, int a3, char a4);
__int64 MapTerrainInfo_18280a0(__int64 a1);
__int64 MapTerrainInfo_Unknown4(_QWORD* a1);
__int64 MapTerrainInfo_1828150(__int64 a1);
__int64 MapTerrainInfo_Unknown5(__int64 result);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155ea30(_QWORD);
__int64 UnitSkillList_844040(_QWORD, _QWORD);
__int64 UnitSkillList_84cc00(_QWORD);
extern __int64* GameData_212c880[5];
__int64 MapTerrainInfo_DeletingDestructor(__int64 result);
__int64 game_map_MapTerrainInfo_SetSkillIcon_lambda0_Invoke(__int64 result,
                                                            _DWORD* a2);
__int64 game_map_MapTerrainInfo_SetSkillIcon_lambda1_Invoke(__int64 a1,
                                                            __int64 a2);
__attribute__((swiftcall)) void Pane_58dfa0(PSEUDO_X8, __int64);
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* game_util_Format(const char*, ...);
const char* Pane_58fac0(__int64, const char*);
__int64 MapTerrainInfo_1824db0(__int64 a1);

__int64 MapTerrainInfo_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 result;
  __int64 v25;

  *a1 = game_map_MapTerrainInfo_vtable;
  a1[1] = GameData_20e2220;
  v2 = a1[3];
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = a1[4];
  a1[3] = 0;
  a1[4] = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_155e140(a1 + 5);
  v4 = a1[48];
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v4 != 0) {
    v6 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[49] = v4;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(v6 + v7, v4);
  }
  v8 = a1[45];
  if (v8 != 0) {
    v9 = *v5;
    a1[46] = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(v9 + v10, v8);
  }
  v11 = a1[41];
  if (v11 != 0) {
    v12 = *v5;
    a1[42] = v11;
    v13 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(v12 + v13, v11);
  }
  v14 = a1[36];
  if (v14 != 0) {
    v15 = *v5;
    a1[37] = v14;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(v15 + v16, v14);
  }
  v17 = a1[33];
  if (v17 != 0) {
    v18 = *v5;
    a1[34] = v17;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(v18 + v19, v17);
  }
  v20 = a1[29];
  if (v20 != 0) {
    v21 = *v5;
    a1[30] = v20;
    v22 = 128;
    if (*(_QWORD*)(v21 + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(v21 + v22, v20);
  }
  GameRoutine_155e140(a1 + 5);
  v23 = a1[17];
  if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak(v23);
  }
  GameRoutine_1564060(a1 + 11);
  GameRoutine_1563f90(a1 + 8, a1[9]);
  result = a1[6];
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v25 = a1[4];
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    result = std___1___shared_weak_count___release_weak(v25);
  }
  *a1 = GameData_20e22f8;
  if ((_QWORD*)GameData_21ed0a0 == a1) {
    GameData_21ed0a0 = 0;
    GameData_226b240 = 0;
  }
  return result;
}

__int64 MapTerrainInfo_1824db0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v6;
  float v7;
  float v8;
  int v9;
  char* v10;
  __int64 v11;
  float v12;
  float v13;
  __int64 result;
  int v15;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  char v20;
  struct {
    float v21;
    float v22;
    float v23;
    float v24;
  } v21_;
  struct {
    float v25;
    float v26;
    float v27;
    float v28;
  } v25_;

  if (*(int*)(a1 + 428) < 1) {
    return ui_LayoutAccessor_SetPaneVisible(a1 + 40, (__int64)"Skill_Bg", 0);
  }
  ui_LayoutAccessor_SetPaneVisible(a1 + 40, (__int64)"Skill_Bg", 1);
  v6 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 40),
                                       (__int64)"L_Skill00");
  v7 = *(float*)(v6 + 124);
  v8 = *(float*)(v6 + 140);
  Pane_58dfa0((void*)(&v25_.v25), v6);
  v9 = *(_DWORD*)(a1 + 428) - 1;
  v25_.v25 = v7 + v25_.v25;
  v25_.v26 = v8 + v25_.v26;
  v25_.v27 = v7 + v25_.v27;
  v25_.v28 = v8 + v25_.v28;
  v10 = game_util_Format("L_Skill%02d", v9);
  v11 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 40), (__int64)v10);
  v12 = *(float*)(v11 + 124);
  v13 = *(float*)(v11 + 140);
  Pane_58dfa0((void*)(&v21_.v21), v11);
  v21_.v21 = v12 + v21_.v21;
  v21_.v22 = v13 + v21_.v22;
  v21_.v23 = v12 + v21_.v23;
  v21_.v24 = v13 + v21_.v24;
  result =
      ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 40), (__int64)"Skill_Bg");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212fc70[0], 0);
    if (result != 0) {
      v15 = *(_DWORD*)(result + 84);
      v16 = result;
      result = (__int64)Pane_58fac0(result, "Margin_Width");
      if (result != 0) {
        v17 = (float)*(int*)(result + *(unsigned int*)(result + 4));
      }
      else {
        v17 = 0x0.0p+0f;
      }
      v18 = v21_.v23;
      v19 = v25_.v25;
      v20 = *(_BYTE*)(v16 + 88) | 0x10;
      *(_DWORD*)(v16 + 84) = v15;
      *(_BYTE*)(v16 + 88) = v20;
      *(float*)(v16 + 80) = v17 + (float)(v18 - v19);
    }
  }
  return result;
}

__int64 MapTerrainInfo_1827f00(__int64 a1, int a2, int a3, char a4)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v7 = GameRoutine_155fbe0(a1 + 40, GameData_20e2230[a2]);
  v8 = v7;
  if (a3 != 0 || (a4 & 1) != 0) {
    GameRoutine_155e830(v7, 1);
    if ((unsigned int)(a2 - 4) >= 4 && a2 != 0) {
      v16 = ui_LayoutAccessor_FindPane(v8, "T_Minus");
      *(_BYTE*)(v16 + 88) = *(_BYTE*)(v16 + 88) & 0xFE | (a3 < 0);
      v12 = ui_LayoutAccessor_FindPane(v8, "T_Plus");
      v13 = *(_BYTE*)(v12 + 88) & 0xFE;
      if (a3 > 0) {
        ++v13;
      }
    }
    else {
      v11 = ui_LayoutAccessor_FindPane(v8, "T_Plus");
      *(_BYTE*)(v11 + 88) &= ~1u;
      v12 = ui_LayoutAccessor_FindPane(v8, "T_Minus");
      v13 = *(_BYTE*)(v12 + 88) & 0xFE;
    }
    *(_BYTE*)(v12 + 88) = v13;
    v14 = ui_LayoutAccessor_FindPane(v8, "T_Num");
    if (v14 != 0) {
      v15 = __dynamic_cast(v14, GameData_212d670[0], GameData_212d690, 0);
      if (v15 != 0) {
        GameRoutine_156c910(v15, "%d", 1);
      }
    }
    result = ui_LayoutAccessor_FindAlignment(v8, "A_Num");
    if (result != 0) {
      return Alignment_56b600();
    }
  }
  else {
    v9 = ui_LayoutAccessor_FindPane(v7, "T_Plus");
    *(_BYTE*)(v9 + 88) &= ~1u;
    result = ui_LayoutAccessor_FindPane(v8, "T_Minus");
    *(_BYTE*)(result + 88) &= ~1u;
  }
  return result;
}

__int64 MapTerrainInfo_18280a0(__int64 a1)
{
  __int64 result;

  result = ui_LayoutAccessor_FindPane(a1, "Skill_Bg");
  if (result != 0) {
    return __dynamic_cast(result, GameData_212d670[0], GameData_212fc70[0], 0);
  }
  return result;
}

__int64 MapTerrainInfo_Unknown4(_QWORD* a1)
{
  int v2;
  __int64 result;

  v2 = GameRoutine_155ea30(a1 + 5) & 1;
  GameRoutine_155e830(a1 + 5, 0);
  result = GameRoutine_155ea30(a1 + 5);
  if (v2 != (result & 1)) {
    return GameRoutine_1827b90(a1);
  }
  return result;
}

__int64 MapTerrainInfo_1828150(__int64 a1)
{
  int v2;
  __int64 result;

  v2 = GameRoutine_155ea30(a1 + 32) & 1;
  GameRoutine_155e830(a1 + 32, 0);
  result = GameRoutine_155ea30(a1 + 32);
  if (v2 != (result & 1)) {
    return GameRoutine_1827b90((_QWORD*)(a1 - 8));
  }
  return result;
}

__int64 MapTerrainInfo_Unknown5(__int64 result)
{
  __int64 v1;
  int v2;

  if (*(_QWORD*)(result + 152) != 0) {
    v1 = result;
    if (*GameData_212d560[0] == 0 || *(int*)(*GameData_212d560[0] + 16) <= 0) {
      v2 = GameRoutine_155ea30(result + 40) & 1;
      GameRoutine_155e830(v1 + 40, 1);
      result = GameRoutine_155ea30(v1 + 40);
      if (v2 != (result & 1)) {
        *(_BYTE*)(v1 + 425) = 1;
      }
    }
  }
  return result;
}

__int64 MapTerrainInfo_DeletingDestructor(__int64 result)
{
  __int64 v1;
  int v2;

  if (*(_QWORD*)(result + 144) != 0) {
    v1 = result;
    if (*GameData_212d560[0] == 0 || *(int*)(*GameData_212d560[0] + 16) <= 0) {
      v2 = LayoutAccessor_155ea30(result + 32) & 1;
      LayoutAccessor_155e830(v1 + 32, 1);
      result = LayoutAccessor_155ea30(v1 + 32);
      if (v2 != (result & 1)) {
        *(_BYTE*)(v1 + 417) = 1;
      }
    }
  }
  return result;
}

__int64 game_map_MapTerrainInfo_SetSkillIcon_lambda0_Invoke(__int64 result,
                                                            _DWORD* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int* v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;

  v2 = GameData_212c880[0];
  v3 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  if (v3 != 0 && (*(_WORD*)(v3 + 754) & 0x10) != 0) {
    v4 = *(_QWORD*)(result + 8);
    result = UnitSkillList_84cc00(v4 + 328);
    if ((result & 1) != 0) {
      v5 = *(_QWORD*)(v4 + 360);
      v6 = *(_QWORD*)(v4 + 368);
      *(_QWORD*)(v4 + 408) = 0;
      *(_QWORD*)(v4 + 416) = 0;
      v7 = v6 - v5;
      if ((int)((unsigned __int64)(v6 - v5) >> 2) >= 1) {
        v8 = *v2;
        v9 = (int)(v7 >> 2);
        if (v9 <= 1) {
          v10 = 1;
        }
        else {
          v10 = (int)(v7 >> 2);
        }
        if (v9 >= 2) {
          v16 = (int*)(v5 + 4);
          v11 = 0;
          v12 = 0;
          v13 = 0;
          v14 = 0;
          v15 = 0;
          do {
            v15 += 2;
            v17 = *(_QWORD*)(*(_QWORD*)(v8 + 64) + 8LL * (*(v16 - 1) & 0xFFF));
            v18 = v14 | (1 << *(_BYTE*)(v17 + 104));
            *(_WORD*)(v4 + 408) = v18;
            v19 = (1LL << *(_BYTE*)(v17 + 250)) | v13;
            *(_QWORD*)(v4 + 416) = v19;
            v20 = (1 << *(_BYTE*)(v17 + 115)) | v12;
            *(_DWORD*)(v4 + 412) = v20;
            v21 = *(unsigned __int16*)(*(_QWORD*)(v17 + 24) + 1064LL) | v11;
            *(_WORD*)(v4 + 410) = v21;
            v22 = *v16;
            v16 += 2;
            v23 = *(_QWORD*)(*(_QWORD*)(v8 + 64) + 8LL * (v22 & 0xFFF));
            v14 = v18 | (1 << *(_BYTE*)(v23 + 104));
            *(_WORD*)(v4 + 408) = v14;
            v13 = (1LL << *(_BYTE*)(v23 + 250)) | v19;
            *(_QWORD*)(v4 + 416) = v13;
            v12 = (1 << *(_BYTE*)(v23 + 115)) | v20;
            *(_DWORD*)(v4 + 412) = v12;
            result = *(unsigned __int16*)(*(_QWORD*)(v23 + 24) + 1064LL);
            v11 = result | v21;
            *(_WORD*)(v4 + 410) = v11;
          } while ((v10 & 0x7FFFFFFFFFFFFFFELL) != v15);
        }
        else {
          LOWORD(v11) = 0;
          v12 = 0;
          v13 = 0;
          LOWORD(v14) = 0;
          v15 = 0;
        }
        if ((v10 & 1) != 0) {
          v24 = *(_QWORD*)(*(_QWORD*)(v8 + 64) +
                           8LL * (*(_DWORD*)(v5 + 4 * v15) & 0xFFF));
          *(_WORD*)(v4 + 408) = v14 | (1 << *(_BYTE*)(v24 + 104));
          *(_QWORD*)(v4 + 416) = (1LL << *(_BYTE*)(v24 + 250)) | v13;
          *(_DWORD*)(v4 + 412) = (1 << *(_BYTE*)(v24 + 115)) | v12;
          *(_WORD*)(v4 + 410) = *(_WORD*)(*(_QWORD*)(v24 + 24) + 1064LL) | v11;
        }
      }
    }
  }
  return result;
}

__int64 game_map_MapTerrainInfo_SetSkillIcon_lambda1_Invoke(__int64 a1,
                                                            __int64 a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  int* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;

  v2 = *(_QWORD*)(a1 + 8);
  result = UnitSkillList_844040(a2, **(_QWORD**)(a1 + 16));
  if ((result & 1) != 0) {
    result = UnitSkillList_84cc00(v2 + 328);
    if ((result & 1) != 0) {
      v4 = *(_QWORD*)(v2 + 360);
      v5 = *(_QWORD*)(v2 + 368);
      *(_QWORD*)(v2 + 408) = 0;
      *(_QWORD*)(v2 + 416) = 0;
      v6 = v5 - v4;
      if ((int)((unsigned __int64)(v5 - v4) >> 2) >= 1) {
        v7 = (int)(v6 >> 2);
        if (v7 <= 1) {
          v8 = 1;
        }
        else {
          v8 = (int)(v6 >> 2);
        }
        v9 = *GameData_212c880[0];
        if (v7 >= 2) {
          v15 = (int*)(v4 + 4);
          v10 = 0;
          v11 = 0;
          v12 = 0;
          v13 = 0;
          v14 = 0;
          do {
            v14 += 2;
            v16 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8LL * (*(v15 - 1) & 0xFFF));
            v17 = v13 | (1 << *(_BYTE*)(v16 + 104));
            *(_WORD*)(v2 + 408) = v17;
            v18 = (1LL << *(_BYTE*)(v16 + 250)) | v12;
            *(_QWORD*)(v2 + 416) = v18;
            v19 = (1 << *(_BYTE*)(v16 + 115)) | v11;
            *(_DWORD*)(v2 + 412) = v19;
            v20 = *(unsigned __int16*)(*(_QWORD*)(v16 + 24) + 1064LL) | v10;
            *(_WORD*)(v2 + 410) = v20;
            v21 = *v15;
            v15 += 2;
            v22 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8LL * (v21 & 0xFFF));
            v13 = v17 | (1 << *(_BYTE*)(v22 + 104));
            *(_WORD*)(v2 + 408) = v13;
            v12 = (1LL << *(_BYTE*)(v22 + 250)) | v18;
            *(_QWORD*)(v2 + 416) = v12;
            v11 = (1 << *(_BYTE*)(v22 + 115)) | v19;
            *(_DWORD*)(v2 + 412) = v11;
            result = *(unsigned __int16*)(*(_QWORD*)(v22 + 24) + 1064LL);
            v10 = result | v20;
            *(_WORD*)(v2 + 410) = v10;
          } while ((v8 & 0x7FFFFFFFFFFFFFFELL) != v14);
        }
        else {
          LOWORD(v10) = 0;
          v11 = 0;
          v12 = 0;
          LOWORD(v13) = 0;
          v14 = 0;
        }
        if ((v8 & 1) != 0) {
          v23 = *(_QWORD*)(*(_QWORD*)(v9 + 64) +
                           8LL * (*(_DWORD*)(v4 + 4 * v14) & 0xFFF));
          *(_WORD*)(v2 + 408) = v13 | (1 << *(_BYTE*)(v23 + 104));
          *(_QWORD*)(v2 + 416) = (1LL << *(_BYTE*)(v23 + 250)) | v12;
          *(_DWORD*)(v2 + 412) = (1 << *(_BYTE*)(v23 + 115)) | v11;
          *(_WORD*)(v2 + 410) = *(_WORD*)(*(_QWORD*)(v23 + 24) + 1064LL) | v10;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
