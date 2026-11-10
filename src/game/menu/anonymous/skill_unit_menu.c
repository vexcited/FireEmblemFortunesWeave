#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 ControlCreator_13633c0(_QWORD);
__int64 GameRoutine_15ba6a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15d2c40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN* GameData_212c8a8;
extern __int64 GameData_204fdb0;
extern __int64* GameData_21319e8[10];
struct PseudoSret GameRoutine_1560070(_QWORD, _QWORD);
__int64 SkillUnitMenu_Unknown88(__int64 a1);
__int64 SkillUnitMenu_Unknown90(_QWORD* a1);
__int64 SkillUnitMenu_Unknown139(__int64 a1);
bool GameRoutine_157b780(_BOOL8 result, _DWORD*);
bool game_menu_anonymous_SkillUnitMenu_OnAddArtsMenuItem_closure_Invoke(
    __int64 a1, int* a2);
_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
_QWORD* GameRoutine_6d7e80(__int64, __int64, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__attribute__((swiftcall)) void
game_gameui_Util_CollectArtsInfoList(PSEUDO_X8, __int64, int, __int64, char);
__int64* LayoutAccessor_155fbe0(__int64*, __int64);
__int64 GameRoutine_932360(unsigned __int8*, __int64*);
__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(__int64 result, __int64);
__int64 LayoutAccessor_1562cf0_alt1(_QWORD,
                                    _QWORD) __asm__("LayoutAccessor_1562cf0");
__int64 SkillUnitMenu_15ba470_alt1(__int64, __int64, __int64,
                                   __int64) __asm__("SkillUnitMenu_15ba470");
__int64 SkillUnitMenu_15ba6a0_alt1(_QWORD, _QWORD,
                                   _QWORD) __asm__("SkillUnitMenu_15ba6a0");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_15df0e0(__int64 result, _DWORD*);
__int64 game_UnitSkillList_GetMaxValue(_QWORD*, __int64*);
__int64 game_util_Format(const char*, ...);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane_alt1(_QWORD, _QWORD) __asm__(
    "ui_LayoutAccessor_FindPane");
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n64 GameRoutine_16e54e0(__int64);
char* game_util_Format_alt1(__int64, __int64, __int64, __int64, __int64,
                            __int64, __int64, __int64,
                            char) __asm__("game_util_Format");
extern __int64 (*GameData_20503e8[])();
extern __int64 (*GameData_2051170[])();
extern __int64 (*game_menu_anonymous_EquipMenuItem_SkillEquip_vtable[])();
extern __int64 (*game_menu_anonymous_EquipMenuItem_SkillFix_vtable[])();
extern __int64 (*game_menu_anonymous_EquipMenuItem_Skill_vtable[])();
extern __int64* GameData_212e008[9];
extern __int64 GameData_20506c0;
extern __int64 GameData_2259380;
extern __int64 GameData_2259388;
extern __int64 GameData_2259398;
extern __int64 GameData_22593a0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
int* GameRoutine_932460(unsigned __int8*, __int64*);
void GameRoutine_157e0f0(__int64*, __int64, _BYTE*);
void __attribute__((noreturn)) GameRoutine_15baa10();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void __attribute__((noreturn)) String_60a230();
void SkillUnitMenu_Unknown85(__int64 a1);
__int64 SkillUnitMenu_Unknown128(__int64 a1, __n128 a2);
__int64 SkillUnitMenu_15ba470(__int64 a1, __int64 a2, __int64 a3,
                              unsigned int a4);
__int64 SkillUnitMenu_15ba6a0(__int64 a1, int32x2_t* a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8);

void SkillUnitMenu_Unknown85(__int64 a1)
{
  __int64 v2;
  __int64 i;
  int v4;
  __int64* v5;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;

  v2 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 952), (__int64)"SubInfoList");
  if (v2 != 0) {
    for (i = *(_QWORD*)(v2 + 40); i != v2 + 32; i = *(_QWORD*)(i + 8)) {
      *(_BYTE*)(i + 80) &= ~1u;
    }
  }
  v4 = *(unsigned __int8*)(a1 + 1080);
  v5 = LayoutAccessor_155fbe0((__int64*)(a1 + 952), (__int64)"L_MenuItem_Info");
  if (v4 == 2) {
    GameRoutine_157e0f0(v5, (__int64)"MID_SysMenu_Arts",
                        "MID_BtlMenu_WeaponCost");
    if (GameData_22593a0 != GameData_2259398) {
      SkillUnitMenu_15ba470_alt1(a1, *(_QWORD*)(GameData_2259398 + 8),
                                 *(_QWORD*)(GameData_2259398 + 16), 0);
      v14 = GameData_2259398;
      if ((unsigned __int64)(GameData_22593a0 - GameData_2259398) >= 0x21) {
        v15 = 1;
        v16 = 0;
        v17 = (__int64*)fw_memory_g_heap_manager_ptr;
        do {
          v19 = SkillUnitMenu_15ba470_alt1(a1, *(_QWORD*)(v14 + v16 + 40),
                                           *(_QWORD*)(v14 + v16 + 48),
                                           (unsigned int)v15);
          if (v19 != 0) {
            v20 = *(_QWORD*)(a1 + 1096);
            v21 = *(_QWORD*)(a1 + 1104);
            if (v20 < v21) {
              *(_QWORD*)v20 = v19;
              *(_DWORD*)(v20 + 8) = v15;
              v18 = v20 + 16;
            }
            else {
              v22 = *(_QWORD*)(a1 + 1088);
              v23 = v20 - v22;
              v24 = (__int64)(v20 - v22) >> 4;
              v25 = v24 + 1;
              if ((unsigned __int64)(v24 + 1) >> 60 != 0) {
                GameRoutine_15baa10();
              }
              v26 = v21 - v22;
              if (v26 >> 3 > v25) {
                v25 = v26 >> 3;
              }
              if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFF0LL) {
                v27 = 0xFFFFFFFFFFFFFFFLL;
              }
              else {
                v27 = v25;
              }
              if (v27 != 0) {
                if (v27 >> 60 != 0) {
                  GameRoutine_60a210();
                }
                v28 = v19;
                v29 = fw_memory_HeapManager_Allocate(*v17, 16 * v27, 16, 0);
                v19 = v28;
              }
              else {
                v29 = 0;
              }
              v30 = v29 + v23;
              v31 = v29 + 16 * v27;
              v32 = v29 + v23 - 16 * v24;
              *(_QWORD*)v30 = v19;
              *(_DWORD*)(v30 + 8) = v15;
              v18 = v29 + v23 + 16;
              memcpy(v32, v22, v23);
              *(_QWORD*)(a1 + 1088) = v32;
              *(_QWORD*)(a1 + 1096) = v18;
              *(_QWORD*)(a1 + 1104) = v31;
              if (v22 != 0) {
                v33 = 128;
                if (*(_QWORD*)(*v17 + 200) == 0) {
                  v33 = 56;
                }
                nn_mem_StandardAllocator_Free(*v17 + v33);
              }
            }
            *(_QWORD*)(a1 + 1096) = v18;
          }
          v14 = GameData_2259398;
          ++v15;
          v16 += 32;
        } while (v15 < (GameData_22593a0 - GameData_2259398) >> 5);
      }
    }
  }
  else {
    GameRoutine_157e0f0(v5, (__int64)"MID_Sys_Skill", nullptr);
    v38 = GameData_2259380;
    if (GameData_2259388 != GameData_2259380) {
      v39 = 0;
      v40 = 0;
      do {
        SkillUnitMenu_15ba470_alt1(a1, *(_QWORD*)(v38 + v39 + 8),
                                   *(_QWORD*)(v38 + v39 + 16),
                                   (unsigned int)v40);
        v38 = GameData_2259380;
        ++v40;
        v39 += 32;
      } while (v40 < (GameData_2259388 - GameData_2259380) >> 5);
    }
  }
}

__int64 SkillUnitMenu_Unknown88(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
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

  result = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                          &GameData_204fdb0, 0);
  v13 = *(_QWORD*)(a1 + 336);
  if (v13 == 0) {
    return result;
  }
  v18 = v20;
  v19 = v21;
  v23 = v22;
  v1 = v13;
  v2 = result;
  if (*(_QWORD*)(v13 + 88) != 0) {
    v3 = *(_DWORD*)(v13 + 112);
    *(struct PseudoSret*)(&v16) =
        GameRoutine_1560070(result + 200, "L_InfoDetail");
    result = v17;
    if (v17 == 0) {
      return result;
    }
    v4 = *(unsigned __int8*)(v2 + 376);
    v5 = *(_QWORD*)(v2 + 360);
    v6 = std___1___shared_weak_count_lock(v17);
    if (v6 != 0) {
      v7 = v6;
      if (v16 != 0) {
        GameRoutine_15d2c40(v16, v1 + 108, v4, v5, v3, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v7);
      }
    }
    result = v17;
    if (v17 == 0) {
      return result;
    }
    return std___1___shared_weak_count___release_weak(result);
  }
  *(struct PseudoSret*)(&v14) =
      GameRoutine_1560070(result + 200, "L_InfoDetail");
  result = v15;
  if (v15 != 0) {
    v8 = *(unsigned __int8*)(v2 + 376);
    v9 = std___1___shared_weak_count_lock(v15);
    if (v9 != 0) {
      v10 = v9;
      if (v14 != 0) {
        GameRoutine_15d2c40(v14, GameData_212c8a8, v8, 0, 0, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
    result = v15;
    if (v15 != 0) {
      return std___1___shared_weak_count___release_weak(result);
    }
  }
  return result;
}

__int64 SkillUnitMenu_Unknown90(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 i;

  result = a1[120];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = result;
      result = a1[119];
      if (result != 0) {
        result = ControlCreator_13633c0(result);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        result = std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
  v4 = a1[136];
  for (i = a1[137]; v4 != i; v4 += 16) {
    result = GameRoutine_15ba6a0(a1, *(_QWORD*)v4, *(unsigned int*)(v4 + 8));
  }
  return result;
}

__int64 SkillUnitMenu_Unknown128(__int64 a1, __n128 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  long double v8;
  __int64 v9;
  unsigned __int8* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  int v18;
  unsigned int v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  bool v28;
  int v29;
  __int64 v30;
  __int64 v31;
  char v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  char v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 i;
  __int64 v41;
  char v42;
  __int64 v43;
  int v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  int v48;
  int v49;
  int v50;
  __int64 v51;
  char v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  char v57;
  __int64 v58;
  int v59;
  __int64 v60;
  __int64 v61;
  int v63;
  _DWORD* v64;
  int v65;
  int v66;
  __int64 v67;
  char v68;
  __int64 v69;
  __int64 v70;
  __int64 v72;
  int v73;
  unsigned __int8* v74;
  struct {
    __int64 v75;
    __int64 v76;
  } v75_;
  struct {
    __int64 v77[4];
    __int64* v78;
  } v77_;
  int v79;
  __int64 v80;

  if (*(_BYTE*)(a1 + 1080) != 2) {
    v4 = *(_QWORD*)(a1 + 1056);
    v75_.v75 = 0;
    if (v4 != 0) {
      v5 = __dynamic_cast(v4, GameData_21319e8[0], &GameData_204fdb0, 0);
    }
    else {
      v5 = 0;
    }
    v10 = (unsigned __int8*)GameData_2259380;
    v70 = GameData_2259388;
    if (GameData_2259380 == GameData_2259388) {
    LABEL_41:
      v38 = a1;
      goto LABEL_61;
    }
    v11 = (__int64*)fw_memory_g_heap_manager_ptr;
    v72 = v5;
    while (1) {
      v18 = *((_DWORD*)v10 + 6);
      LODWORD(v80) = 0;
      v19 = *v10;
      v20 = v18 >= 0 ? v18 : 5;
      if (v19 != 12) {
        break;
      }
      v21 = 0;
      v79 = 0;
      v22 = *(_QWORD*)(a1 + 1072);
      if (v22 != 0 && *(_BYTE*)(v22 + 1880) != 0) {
        v77_.v77[0] = *(_QWORD*)(v22 + 392);
        v77_.v77[1] = v22;
        v21 = *(_DWORD*)GameRoutine_932360((unsigned __int8*)(v22 + 1880),
                                           v77_.v77);
        v79 = v21;
        if ((v21 & 0xFFF) == 0) {
          v77_.v77[0] = *(_QWORD*)(v22 + 392);
          v77_.v77[1] = v22;
          v21 = *GameRoutine_932460((unsigned __int8*)(v22 + 1880), v77_.v77);
          v79 = v21;
        }
      }
      v12 = fw_memory_HeapManager_Allocate(*v11, 128, 16, 0);
      v13 = *((_QWORD*)v10 + 1);
      *(_WORD*)(v12 + 16) = 0;
      *(_QWORD*)(v12 + 64) = 0;
      *(_QWORD*)(v12 + 72) = 0;
      *(_QWORD*)(v12 + 48) = 0;
      *(_QWORD*)(v12 + 56) = 0;
      *(_WORD*)(v12 + 80) = 257;
      v14 = *(_BYTE*)(a1 + 1080);
      v15 = *(_QWORD*)(a1 + 1072);
      *(_BYTE*)(v12 + 82) = 1;
      *(_DWORD*)(v12 + 40) = -1;
      *(_QWORD*)v12 = game_menu_anonymous_EquipMenuItem_Skill_vtable;
      *(_QWORD*)(v12 + 8) = 0;
      *(_DWORD*)(v12 + 108) = v21;
      *(_QWORD*)(v12 + 120) = v13;
      *(_QWORD*)(v12 + 88) = v15;
      *(_QWORD*)(v12 + 96) = v5;
      *(_BYTE*)(v12 + 104) = v14;
      *(_DWORD*)(v12 + 112) = game_15df0e0(v15, &v79);
      *(_QWORD*)v12 = game_menu_anonymous_EquipMenuItem_SkillFix_vtable;
      BasicMenuCursor_16e0c00((_QWORD*)a1, v12);
      v16 = v5;
      v17 = v11;
    LABEL_14:
      v10 += 32;
      v11 = v17;
      v5 = v16;
      if (v10 == (unsigned __int8*)v70) {
        goto LABEL_41;
      }
    }
    v24 = *(_QWORD*)(a1 + 1072);
    v25 = fw_memory_HeapManager_Allocate(*v11, 64, 16, 0);
    *(_BYTE*)(v25 + 40) = v19 == 1;
    *(_QWORD*)(v25 + 48) = v5;
    *(_DWORD*)(v25 + 56) = v20;
    v77_.v78 = (__int64*)v25;
    *(_QWORD*)v25 = GameData_2051170;
    *(_QWORD*)(v25 + 8) = a1;
    *(_QWORD*)(v25 + 16) = &v75_.v75;
    *(_QWORD*)(v25 + 24) = &v80;
    *(_QWORD*)(v25 + 32) = v10;
    GameRoutine_6d7e80(v24, v19, (__int64)v77_.v77);
    if (v77_.v78 == v77_.v77) {
      v26 = 32;
    }
    else {
      if (v77_.v78 == nullptr) {
        goto LABEL_30;
      }
      v26 = 40;
    }
    (*(void (**)(__int64))(*v77_.v78 + v26))((__int64)v77_.v78);
  LABEL_30:
    v27 = v80;
    v73 = v20;
    v29 = v20 - v80;
    v28 = v20 <= (int)v80;
    v16 = v5;
    v17 = v11;
    if (!v28) {
      v74 = v10;
      if (v19 == 1) {
        v17 = (__int64*)fw_memory_g_heap_manager_ptr;
        v16 = v72;
        do {
          v30 = fw_memory_HeapManager_Allocate(*v17, 128, 16, 0);
          v31 = *((_QWORD*)v10 + 1);
          *(_WORD*)(v30 + 16) = 0;
          *(_QWORD*)(v30 + 64) = 0;
          *(_QWORD*)(v30 + 72) = 0;
          v32 = *(_BYTE*)(a1 + 1080);
          *(_QWORD*)(v30 + 48) = 0;
          *(_QWORD*)(v30 + 56) = 0;
          v33 = *(_QWORD*)(a1 + 1072);
          *(_WORD*)(v30 + 80) = 257;
          *(_BYTE*)(v30 + 82) = 1;
          *(_DWORD*)(v30 + 40) = -1;
          *(_QWORD*)v30 = game_menu_anonymous_EquipMenuItem_Skill_vtable;
          *(_QWORD*)(v30 + 8) = 0;
          *(_DWORD*)(v30 + 108) = 0;
          *(_QWORD*)(v30 + 88) = v33;
          *(_QWORD*)(v30 + 96) = v16;
          *(_BYTE*)(v30 + 104) = v32;
          *(_QWORD*)(v30 + 120) = v31;
          *(_DWORD*)(v30 + 112) = game_15df0e0(v33, GameData_212c8a8);
          *(_QWORD*)v30 = game_menu_anonymous_EquipMenuItem_SkillEquip_vtable;
          if (v27 != (_DWORD)v80) {
            *(_BYTE*)(v30 + 80) = 0;
          }
          if (v75_.v75 == 0) {
            v75_.v75 = v30;
          }
          BasicMenuCursor_16e0c00((_QWORD*)a1, v30);
          ++v27;
          v17 = (__int64*)fw_memory_g_heap_manager_ptr;
          v16 = v72;
          v10 = v74;
        } while (v73 != v27);
      }
      else {
        v17 = (__int64*)fw_memory_g_heap_manager_ptr;
        v16 = v72;
        do {
          v34 = fw_memory_HeapManager_Allocate(*v17, 128, 16, 0);
          v35 = *((_QWORD*)v10 + 1);
          *(_WORD*)(v34 + 16) = 0;
          *(_QWORD*)(v34 + 64) = 0;
          *(_QWORD*)(v34 + 72) = 0;
          v36 = *(_BYTE*)(a1 + 1080);
          *(_QWORD*)(v34 + 48) = 0;
          *(_QWORD*)(v34 + 56) = 0;
          v37 = *(_QWORD*)(a1 + 1072);
          *(_WORD*)(v34 + 80) = 257;
          *(_BYTE*)(v34 + 82) = 1;
          *(_DWORD*)(v34 + 40) = -1;
          *(_QWORD*)v34 = game_menu_anonymous_EquipMenuItem_Skill_vtable;
          *(_QWORD*)(v34 + 8) = 0;
          *(_DWORD*)(v34 + 108) = 0;
          *(_QWORD*)(v34 + 88) = v37;
          *(_QWORD*)(v34 + 96) = v72;
          *(_BYTE*)(v34 + 104) = v36;
          *(_QWORD*)(v34 + 120) = v35;
          *(_DWORD*)(v34 + 112) = game_15df0e0(v37, GameData_212c8a8);
          *(_QWORD*)v34 = game_menu_anonymous_EquipMenuItem_SkillFix_vtable;
          BasicMenuCursor_16e0c00((_QWORD*)a1, v34);
          --v29;
        } while (v29 != 0);
      }
    }
    goto LABEL_14;
  }
  v2 = *(_QWORD*)(a1 + 1056);
  if (v2 != 0) {
    v3 = __dynamic_cast(v2, GameData_21319e8[0], &GameData_204fdb0, 0);
  }
  else {
    v3 = 0;
  }
  v77_.v78 = v77_.v77;
  v6 = *(_QWORD*)(a1 + 1072);
  v77_.v77[0] = (__int64)GameData_20503e8;
  v77_.v77[1] = a1;
  *(__n128*)&v8 =
      X8CALL_V0(__n128, game_gameui_Util_CollectArtsInfoList(
                            (void*)(&v75_.v75), v6, 0, (__int64)v77_.v77, 0));
  if (v77_.v78 == v77_.v77) {
    v9 = 32;
    goto LABEL_43;
  }
  if (v77_.v78 != nullptr) {
    v9 = 40;
  LABEL_43:
    (*(void (**)(long double))(*v77_.v78 + v9))(v8);
  }
  v39 = v75_.v75;
  for (i = v75_.v76; v39 != i; v39 += 8) {
    if ((*(_BYTE*)(v39 + 4) & 1) == 0) {
      v41 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
      *(_WORD*)(v41 + 16) = 0;
      *(_QWORD*)(v41 + 48) = 0;
      *(_QWORD*)(v41 + 56) = 0;
      v42 = *(_BYTE*)(a1 + 1080);
      v43 = *(_QWORD*)(a1 + 1072);
      *(_QWORD*)(v41 + 64) = 0;
      *(_QWORD*)(v41 + 72) = 0;
      *(_WORD*)(v41 + 80) = 257;
      *(_BYTE*)(v41 + 82) = 1;
      *(_DWORD*)(v41 + 40) = -1;
      *(_QWORD*)v41 = game_menu_anonymous_EquipMenuItem_Skill_vtable;
      *(_QWORD*)(v41 + 8) = 0;
      *(_QWORD*)(v41 + 88) = v43;
      *(_QWORD*)(v41 + 96) = v3;
      *(_BYTE*)(v41 + 104) = v42;
      v44 = *(_DWORD*)v39;
      *(_QWORD*)(v41 + 120) = "Info00";
      *(_DWORD*)(v41 + 108) = v44;
      *(_DWORD*)(v41 + 112) = game_15df0e0(v43, (_DWORD*)v39);
      *(_QWORD*)v41 = game_menu_anonymous_EquipMenuItem_SkillEquip_vtable;
      BasicMenuCursor_16e0c00((_QWORD*)a1, v41);
    }
  }
  v45 = a1;
  v46 = *(_QWORD**)(a1 + 1072);
  v47 = (v46[151] - v46[150]) >> 2;
  v80 = 32;
  v48 = game_UnitSkillList_GetMaxValue(v46 + 218, &v80);
  v49 = v48 + 3;
  if (v48 + 3 > (int)v47) {
    v50 = v48;
    v51 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         128, 16, 0);
    *(_QWORD*)(v51 + 8) = 0;
    v52 = *(_BYTE*)(a1 + 1080);
    *(_WORD*)(v51 + 16) = 0;
    v53 = *(_QWORD*)(a1 + 1072);
    *(_QWORD*)(v51 + 48) = 0;
    *(_QWORD*)(v51 + 56) = 0;
    *(_QWORD*)(v51 + 64) = 0;
    *(_QWORD*)(v51 + 72) = 0;
    *(_WORD*)(v51 + 80) = 257;
    *(_DWORD*)(v51 + 40) = -1;
    *(_DWORD*)(v51 + 108) = 0;
    *(_QWORD*)(v51 + 120) = "Info00";
    *(_BYTE*)(v51 + 82) = 1;
    *(_QWORD*)(v51 + 88) = v53;
    *(_QWORD*)(v51 + 96) = v3;
    *(_BYTE*)(v51 + 104) = v52;
    *(_DWORD*)(v51 + 112) = game_15df0e0(v53, GameData_212c8a8);
    *(_QWORD*)v51 = game_menu_anonymous_EquipMenuItem_SkillEquip_vtable;
    BasicMenuCursor_16e0c00((_QWORD*)a1, v51);
    if ((_DWORD)v47 + 1 != v49) {
      v63 = v50 - v47;
      v64 = GameData_212c8a8;
      v65 = v63 + 2;
      v66 = -1;
      do {
        v67 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
        *(_WORD*)(v67 + 16) = 0;
        v68 = *(_BYTE*)(v45 + 1080);
        *(_QWORD*)(v67 + 48) = 0;
        *(_QWORD*)(v67 + 56) = 0;
        v69 = *(_QWORD*)(v45 + 1072);
        *(_QWORD*)(v67 + 64) = 0;
        *(_QWORD*)(v67 + 72) = 0;
        *(_DWORD*)(v67 + 40) = -1;
        *(_QWORD*)v67 = game_menu_anonymous_EquipMenuItem_Skill_vtable;
        *(_QWORD*)(v67 + 8) = 0;
        *(_DWORD*)(v67 + 108) = 0;
        *(_QWORD*)(v67 + 120) = "Info00";
        *(_WORD*)(v67 + 80) = 257;
        *(_BYTE*)(v67 + 82) = 1;
        *(_QWORD*)(v67 + 88) = v69;
        *(_QWORD*)(v67 + 96) = v3;
        *(_BYTE*)(v67 + 104) = v68;
        *(_DWORD*)(v67 + 112) = game_15df0e0(v69, v64);
        *(_QWORD*)v67 = game_menu_anonymous_EquipMenuItem_SkillEquip_vtable;
        if (v66 != 0) {
          *(_BYTE*)(v67 + 80) = 0;
        }
        v45 = a1;
        BasicMenuCursor_16e0c00((_QWORD*)a1, v67);
        --v65;
        --v66;
      } while (v65 != 0);
    }
  }
  v54 = v75_.v75;
  v55 = v75_.v76;
  if (v75_.v75 != v75_.v76) {
    do {
      if (*(_BYTE*)(v54 + 4) == 1) {
        v56 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
        *(_WORD*)(v56 + 16) = 0;
        *(_QWORD*)(v56 + 48) = 0;
        *(_QWORD*)(v56 + 56) = 0;
        v57 = *(_BYTE*)(a1 + 1080);
        v58 = *(_QWORD*)(a1 + 1072);
        *(_QWORD*)(v56 + 64) = 0;
        *(_QWORD*)(v56 + 72) = 0;
        *(_WORD*)(v56 + 80) = 257;
        *(_BYTE*)(v56 + 82) = 1;
        *(_DWORD*)(v56 + 40) = -1;
        *(_QWORD*)v56 = game_menu_anonymous_EquipMenuItem_Skill_vtable;
        *(_QWORD*)(v56 + 8) = 0;
        *(_QWORD*)(v56 + 88) = v58;
        *(_QWORD*)(v56 + 96) = v3;
        *(_BYTE*)(v56 + 104) = v57;
        v59 = *(_DWORD*)v54;
        *(_QWORD*)(v56 + 120) = "Info01";
        *(_DWORD*)(v56 + 108) = v59;
        *(_DWORD*)(v56 + 112) = game_15df0e0(v58, (_DWORD*)v54);
        *(_QWORD*)v56 = game_menu_anonymous_EquipMenuItem_SkillFix_vtable;
        BasicMenuCursor_16e0c00((_QWORD*)a1, v56);
      }
      v54 += 8;
    } while (v54 != v55);
    v54 = v75_.v75;
  }
  v38 = a1;
  if (v54 != 0) {
    v75_.v76 = v54;
    v60 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v60 = 56;
    }
    a2 = nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v60);
  }
LABEL_61:
  v61 = (*(__int64 (**)(__int64, long double))(*(_QWORD*)v38 + 1288LL))(
      v38, *(long double*)&a2);
  return LayoutAccessor_1562cf0(v38 + 952, v61);
}

__int64 SkillUnitMenu_Unknown139(__int64 a1)
{
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 240LL))(a1, 1);
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 248LL))(a1, 1);
}

__int64 SkillUnitMenu_15ba470(__int64 a1, __int64 a2, __int64 a3,
                              unsigned int a4)
{
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v23;
  __int64 v24;
  _QWORD v25[2];
  char* v26;

  v8 = game_util_Format("L_SubInfo%02d", a4);
  v9 = strlen(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v9);
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v9 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v12, 16, 0);
    v25[1] = v10;
    v26 = v11;
    v25[0] = v12 | 1;
    goto LABEL_9;
  }
  LOBYTE(v25[0]) = 2 * v9;
  v11 = (char*)v25 + 1;
  if (v9 != 0) {
  LABEL_9:
    memmove(v11, v8, v10);
  }
  v11[v10] = 0;
  if ((v25[0] & 1) != 0) {
    v13 = v26;
  }
  else {
    v13 = (char*)v25 + 1;
  }
  LayoutAccessor_1560070((void*)(&v23), (__int64*)(a1 + 952), (__int64)v13);
  if (v24 != 0) {
    v14 = std___1___shared_weak_count_lock(v24);
    if (v14 != 0) {
      v15 = v23;
    }
    else {
      v15 = 0;
    }
    if (v24 != 0) {
      std___1___shared_weak_count___release_weak(v24);
    }
  }
  else {
    v14 = 0;
    v15 = 0;
  }
  if ((v25[0] & 1) != 0) {
    v16 = v26;
  }
  else {
    v16 = (char*)v25 + 1;
  }
  v17 = ui_LayoutAccessor_FindPane_alt1(a1 + 952, v16);
  if ((v15 | v17) != 0) {
    v18 = v17;
    LayoutAccessor_1562060(v15, "T_Txt", a3);
    LayoutAccessor_1562cf0_alt1(v15, a2);
    v19 = SkillUnitMenu_15ba6a0_alt1(a1, v18, a4);
    if ((v19 & 1) != 0) {
      v20 = v18;
    }
    else {
      v20 = 0;
    }
    *(_BYTE*)(v18 + 88) = *(_BYTE*)(v18 + 88) & 0xFE | v19 & 1;
    if (v14 == 0) {
    LABEL_31:
      if ((v25[0] & 1) == 0) {
        return v20;
      }
      goto LABEL_32;
    }
  }
  else {
    v20 = 0;
    if (v14 == 0) {
      goto LABEL_31;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_31;
  }
  (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
  std___1___shared_weak_count___release_weak(v14);
  if ((v25[0] & 1) == 0) {
    return v20;
  }
LABEL_32:
  if (v26 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v21);
  }
  return v20;
}

__int64 SkillUnitMenu_15ba6a0(__int64 a1, int32x2_t* a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{

#pragma clang fp contract(off)
  char* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  char* v15;
  char* v16;
  char* v17;
  char* v18;
  signed __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  int v22;
  int v23;
  int v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  int v29;
  char* v30;
  int v31;
  unsigned __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  int v36;
  int v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  __int64 v45;
  unsigned int v47;
  int32x2_t* v48;
  float32x4_t v49;
  float32x4_t v50;
  char v51;
  int32x2_t* v52;
  char* v53;
  char* v54;
  unsigned __int32 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  struct {
    __int64 v58;
    unsigned __int64 v59;
    char* v60;
  } v58_;

  v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s1", "=w"));
  v10 = game_util_Format_alt1((__int64)"Info%02d", (unsigned int)a3, a3, a4, a5,
                              a6, a7, a8, v51),
  v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s1", "=w"));
  v11 = strlen(v10),
  v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v12 = v11;
  if (v11 >= 0x17) {
    if ((v11 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (v11 | 7) + 1;
    }
    v13 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v14, 16, 0),
    v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s1", "=w"));
    v58_.v59 = v12;
    v58_.v60 = v13;
    v58_.v58 = v14 | 1;
  }
  else {
    LOBYTE(v58_.v58) = 2 * v11;
    v13 = (char*)&v58_.v58 + 1;
    if (v11 == 0) {
      goto LABEL_10;
    }
  }
  memmove(v13, v10, v12),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s1", "=w"));
LABEL_10:
  v13[v12] = 0;
  v15 = v58_.v60;
  if ((v58_.v58 & 1) != 0) {
    v16 = v58_.v60;
  }
  else {
    v16 = (char*)&v58_.v58 + 1;
  }
  v18 = *(char**)(a1 + 232);
  v17 = *(char**)(a1 + 240);
  if (v18 == v17 ||
      (v19 = v17 - v18,
       (unsigned int)(v20 = (unsigned __int64)(v19 + 0x7FFFFFFF8LL) >> 3) >
           0x7FFFFFFE)) {
  LABEL_47:
    v44 = 0;
    goto LABEL_48;
  }
  v21 = v19 - 8;
  v53 = v58_.v60;
  v54 = v16;
  v52 = a2;
  v22 = 0;
  v23 = 0;
  v24 = (v20 + 1) & ~(((int)v20 + 1) >> 31);
  v25 = ((unsigned __int64)(v19 - 8) >> 3) + 1;
  v26 = v25 & 3;
  v27 = v25 & 0x3FFFFFFFFFFFFFFCLL;
  if ((v58_.v58 & 1) != 0) {
    v28 = v58_.v59;
  }
  else {
    v28 = (unsigned __int8)v58_.v58 >> 1;
  }
  v56 = v28;
  while (v21 < 0x18) {
    v29 = 0;
    v30 = v18;
    if (v26 != 0) {
    LABEL_22:
      v31 = v29 + v22;
      v32 = v26;
      while (v31 != 0) {
        v30 += 8;
        ++v31;
        if (--v32 == 0) {
          goto LABEL_19;
        }
      }
      goto LABEL_37;
    }
  LABEL_19:
    ++v23;
    --v22;
    if (v23 == v24) {
      v15 = v53;
      goto LABEL_47;
    }
  }
  v33 = 0;
  v34 = v27;
  v30 = v18;
  while (v23 != v33) {
    v35 = v33;
    v36 = v33 + 1;
    if (v23 == v36) {
      v39 = *((_QWORD*)v30 + 1);
      if (v39 != 0) {
        goto LABEL_38;
      }
      goto LABEL_19;
    }
    v37 = v36 + 1;
    if (v23 == v37) {
      v30 += 16;
      break;
    }
    v38 = v37 + 1;
    if (v23 == v38) {
      v39 = *((_QWORD*)v30 + 3);
      if (v39 != 0) {
        goto LABEL_38;
      }
      goto LABEL_19;
    }
    v30 += 32;
    v34 -= 4;
    v33 = v38 + 1;
    if (v34 == 0) {
      v29 = v35 + 4;
      if (v26 != 0) {
        goto LABEL_22;
      }
      goto LABEL_19;
    }
  }
LABEL_37:
  v39 = *(_QWORD*)v30;
  if (*(_QWORD*)v30 == 0) {
    goto LABEL_19;
  }
LABEL_38:
  v40 = __dynamic_cast(v39, GameData_212e008[0], &GameData_20506c0, 0),
  v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v40 == 0) {
    goto LABEL_19;
  }
  v41 = *(_QWORD*)(v40 + 120);
  v42 = v40;
  if (v41 == 0) {
    goto LABEL_19;
  }
  v43 = strlen(*(_QWORD*)(v40 + 120)),
  v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v43 != v56) {
    goto LABEL_19;
  }
  if (v43 == -1) {
    String_60a230(),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  if ((unsigned int)memcmp(v54, v41, v43) != 0) {
    goto LABEL_19;
  }
  if (v52 != nullptr) {
    v55 = LANES64_OF(vdup_lane_s32(v52[15], 1)).n64_u32[0];
    v57 = LANES64(v52[19]).n64_u32[1];
    GameRoutine_16e54e0(v42),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s1", "=w"));
    LANES128(v49).n128_u64[0] = __PAIR64__(v47, v55);
    v48 = (int32x2_t*)LANES64(v52[3]).n64_u64[0];
    LANES128(v49).n128_u64[1] = v57;
    if (v48 != nullptr) {
      LANES128(v50).n128_u64[0] =
          LANES64_OF(vzip2_s32(v48[15], v48[17])).n64_u64[0];
      LANES128(v50).n128_u64[1] = LANES64(v48[19]).n64_u32[1];
      v49 = vsubq_f32(v49, v50);
    }
    v15 = v53;
    LANES64(v52[6]).n64_u64[0] = LANES128(v49).n128_u64[0];
    LANES64(v52[7]).n64_u32[0] = LANES128(v49).n128_u32[2];
    LANES64(v52[11]).n64_u8[0] |= 0x10u;
    v44 = 1;
  }
  else {
    GameRoutine_16e54e0(v42),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s1", "=w"));
    v15 = v53;
    v44 = 1;
  }
LABEL_48:
  if ((v58_.v58 & 1) != 0 && v15 != nullptr) {
    v45 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v45),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  return v44;
}

bool game_menu_anonymous_SkillUnitMenu_OnAddArtsMenuItem_closure_Invoke(
    __int64 a1, int* a2)
{
  __int64 v2;
  int v4;

  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 1072LL);
  v4 = *a2;
  return GameRoutine_157b780(v2, &v4);
}

#pragma GCC visibility pop
