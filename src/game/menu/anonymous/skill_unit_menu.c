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
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane_alt1(_QWORD, _QWORD) __asm__(
    "ui_LayoutAccessor_FindPane");
__n128 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
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
__int64
SkillUnitMenu_Unknown128_alt1(__int64 a1,
                              __n128 a2) __asm__("SkillUnitMenu_Unknown128");
__int64 SkillUnitMenu_15ba470(__int64 a1, __int64 a2, __int64 a3,
                              unsigned int a4);
__int64 SkillUnitMenu_15ba6a0_alt2(__int64 a1, int32x2_t* a2, __int64 a3,
                                   __int64 a4, __int64 a5, __int64 a6,
                                   __int64 a7,
                                   __int64 a8) __asm__("SkillUnitMenu_15ba6a0");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
char* game_util_Format_alt2(const char*, ...) __asm__("game_util_Format");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 SkillUnitMenu_15ba6a0(__int64 a1, int32x2_t* a2, int a3);
void BasicMenuCursor_16e0c00_alt1(_QWORD*,
                                  __int64) __asm__("BasicMenuCursor_16e0c00");
void game_menu_anonymous_SkillUnitMenu_OnAddSkillMenuItem_closure_Invoke(
    __int64 a1, int* a2);
__int64*
LayoutAccessor_155fbe0_alt1(__int64*,
                            const char*) __asm__("LayoutAccessor_155fbe0");
__int64
LayoutAccessor_1562cf0_alt2(__int64 result,
                            unsigned int*) __asm__("LayoutAccessor_1562cf0");
__int64
SkillUnitMenu_15ba470_alt2(__int64, unsigned int*, const char*,
                           unsigned int) __asm__("SkillUnitMenu_15ba470");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 ui_LayoutAccessor_FindPane_alt2(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindPane");
extern int* GameData_212c8a8_alt1[22] __asm__("GameData_212c8a8");
void GameHr_157e0f0(__int64*, const char*, const char*);
__int64 SkillUnitMenu_Unknown128(__int64 a1);

void SkillUnitMenu_Unknown85(__int64 a1)
{
  __int64 v2;
  __int64 i;
  int v4;
  __int64* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;

  v2 = ui_LayoutAccessor_FindPane_alt2((__int64*)(a1 + 952), "SubInfoList");
  if (v2 != 0) {
    for (i = *(_QWORD*)(v2 + 40); i != v2 + 32; i = *(_QWORD*)(i + 8)) {
      *(_BYTE*)(i + 80) &= ~1u;
    }
  }
  v4 = *(unsigned __int8*)(a1 + 1080);
  v5 = LayoutAccessor_155fbe0_alt1((__int64*)(a1 + 952), "L_MenuItem_Info");
  if (v4 == 2) {
    GameHr_157e0f0(v5, "MID_SysMenu_Arts", "MID_BtlMenu_WeaponCost");
    if (GameData_22593a0 != GameData_2259398) {
      SkillUnitMenu_15ba470_alt2(a1, *(unsigned int**)(GameData_2259398 + 8),
                                 *(const char**)(GameData_2259398 + 16), 0);
      v6 = GameData_2259398;
      if ((unsigned __int64)(GameData_22593a0 - GameData_2259398) >= 0x21) {
        v7 = 1;
        v8 = 0;
        v9 = (__int64*)fw_memory_g_heap_manager_ptr;
        do {
          v11 = SkillUnitMenu_15ba470_alt2(a1, *(unsigned int**)(v6 + v8 + 40),
                                           *(const char**)(v6 + v8 + 48), v7);
          if (v11 != 0) {
            v12 = *(_QWORD*)(a1 + 1096);
            v13 = *(_QWORD*)(a1 + 1104);
            if (v12 < v13) {
              *(_QWORD*)v12 = v11;
              *(_DWORD*)(v12 + 8) = v7;
              v10 = v12 + 16;
            }
            else {
              v14 = *(_QWORD*)(a1 + 1088);
              v15 = v12 - v14;
              v16 = (__int64)(v12 - v14) >> 4;
              v17 = v16 + 1;
              if ((unsigned __int64)(v16 + 1) >> 60 != 0) {
                GameRoutine_15baa10();
              }
              v18 = v13 - v14;
              if (v18 >> 3 > v17) {
                v17 = v18 >> 3;
              }
              if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF0LL) {
                v19 = 0xFFFFFFFFFFFFFFFLL;
              }
              else {
                v19 = v17;
              }
              if (v19 != 0) {
                if (v19 >> 60 != 0) {
                  GameRoutine_60a210();
                }
                v20 = v11;
                v21 = fw_memory_HeapManager_Allocate(*v9, 16 * v19, 16, 0);
                v11 = v20;
              }
              else {
                v21 = 0;
              }
              v22 = v21 + v15;
              v23 = v21 + 16 * v19;
              v24 = v21 + v15 - 16 * v16;
              *(_QWORD*)v22 = v11;
              *(_DWORD*)(v22 + 8) = v7;
              v10 = v21 + v15 + 16;
              memcpy_alt1(v24, v14, v15);
              *(_QWORD*)(a1 + 1088) = v24;
              *(_QWORD*)(a1 + 1096) = v10;
              *(_QWORD*)(a1 + 1104) = v23;
              if (v14 != 0) {
                v25 = 128;
                if (*(_QWORD*)(*v9 + 200) == 0) {
                  v25 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v9 + v25, v14);
              }
            }
            *(_QWORD*)(a1 + 1096) = v10;
          }
          v6 = GameData_2259398;
          ++v7;
          v8 += 32;
        } while (v7 < (GameData_22593a0 - GameData_2259398) >> 5);
      }
    }
  }
  else {
    GameHr_157e0f0(v5, "MID_Sys_Skill", nullptr);
    v26 = GameData_2259380;
    if (GameData_2259388 != GameData_2259380) {
      v27 = 0;
      v28 = 0;
      do {
        SkillUnitMenu_15ba470_alt2(a1, *(unsigned int**)(v26 + v27 + 8),
                                   *(const char**)(v26 + v27 + 16), v28);
        v26 = GameData_2259380;
        ++v28;
        v27 += 32;
      } while (v28 < (GameData_2259388 - GameData_2259380) >> 5);
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

__int64 SkillUnitMenu_Unknown128(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  unsigned __int8* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  bool v26;
  int v27;
  __int64 v28;
  __int64 v29;
  char v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 i;
  __int64 v39;
  char v40;
  __int64 v41;
  int v42;
  __int64 v43;
  _QWORD* v44;
  __int64 v45;
  int v46;
  int v47;
  int v48;
  __int64 v49;
  char v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  char v55;
  __int64 v56;
  int v57;
  __int64 v58;
  unsigned int* v59;
  int v61;
  int* v62;
  int v63;
  int v64;
  __int64 v65;
  char v66;
  __int64 v67;
  __int64 v68;
  __int64 v70;
  int v71;
  unsigned __int8* v72;
  struct {
    __int64 v73;
    __int64 v74;
  } v73_;
  struct {
    __int64 v75[4];
    __int64* v76;
  } v75_;
  int v77;
  __int64 v78;

  if (*(_BYTE*)(a1 + 1080) != 2) {
    v3 = *(_QWORD*)(a1 + 1056);
    v73_.v73 = 0;
    if (v3 != 0) {
      v4 = __dynamic_cast(v3, GameData_21319e8[0], &GameData_204fdb0, 0);
    }
    else {
      v4 = 0;
    }
    v8 = (unsigned __int8*)GameData_2259380;
    v68 = GameData_2259388;
    if (GameData_2259380 == GameData_2259388) {
    LABEL_41:
      v36 = a1;
      goto LABEL_61;
    }
    v9 = (__int64*)fw_memory_g_heap_manager_ptr;
    v70 = v4;
    while (1) {
      v16 = *((_DWORD*)v8 + 6);
      LODWORD(v78) = 0;
      v17 = *v8;
      v18 = v16 >= 0 ? v16 : 5;
      if (v17 != 12) {
        break;
      }
      v19 = 0;
      v77 = 0;
      v20 = *(_QWORD*)(a1 + 1072);
      if (v20 != 0 && *(_BYTE*)(v20 + 1880) != 0) {
        v75_.v75[0] = *(_QWORD*)(v20 + 392);
        v75_.v75[1] = v20;
        v19 = *(_DWORD*)GameRoutine_932360((unsigned __int8*)(v20 + 1880),
                                           v75_.v75);
        v77 = v19;
        if ((v19 & 0xFFF) == 0) {
          v75_.v75[0] = *(_QWORD*)(v20 + 392);
          v75_.v75[1] = v20;
          v19 = *GameRoutine_932460((unsigned __int8*)(v20 + 1880), v75_.v75);
          v77 = v19;
        }
      }
      v10 = fw_memory_HeapManager_Allocate(*v9, 128, 16, 0);
      v11 = *((_QWORD*)v8 + 1);
      *(_WORD*)(v10 + 16) = 0;
      *(_QWORD*)(v10 + 64) = 0;
      *(_QWORD*)(v10 + 72) = 0;
      *(_QWORD*)(v10 + 48) = 0;
      *(_QWORD*)(v10 + 56) = 0;
      *(_WORD*)(v10 + 80) = 257;
      v12 = *(_BYTE*)(a1 + 1080);
      v13 = *(_QWORD*)(a1 + 1072);
      *(_BYTE*)(v10 + 82) = 1;
      *(_DWORD*)(v10 + 40) = -1;
      *(_QWORD*)v10 = game_menu_anonymous_EquipMenuItem_Skill_vtable;
      *(_QWORD*)(v10 + 8) = 0;
      *(_DWORD*)(v10 + 108) = v19;
      *(_QWORD*)(v10 + 120) = v11;
      *(_QWORD*)(v10 + 88) = v13;
      *(_QWORD*)(v10 + 96) = v4;
      *(_BYTE*)(v10 + 104) = v12;
      *(_DWORD*)(v10 + 112) = game_15df0e0(v13, &v77);
      *(_QWORD*)v10 = game_menu_anonymous_EquipMenuItem_SkillFix_vtable;
      BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v10);
      v14 = v4;
      v15 = v9;
    LABEL_14:
      v8 += 32;
      v9 = v15;
      v4 = v14;
      if (v8 == (unsigned __int8*)v68) {
        goto LABEL_41;
      }
    }
    v22 = *(_QWORD*)(a1 + 1072);
    v23 = fw_memory_HeapManager_Allocate(*v9, 64, 16, 0);
    *(_BYTE*)(v23 + 40) = v17 == 1;
    *(_QWORD*)(v23 + 48) = v4;
    *(_DWORD*)(v23 + 56) = v18;
    v75_.v76 = (__int64*)v23;
    *(_QWORD*)v23 = GameData_2051170;
    *(_QWORD*)(v23 + 8) = a1;
    *(_QWORD*)(v23 + 16) = &v73_.v73;
    *(_QWORD*)(v23 + 24) = &v78;
    *(_QWORD*)(v23 + 32) = v8;
    GameRoutine_6d7e80(v22, v17, (__int64)v75_.v75);
    if (v75_.v76 == v75_.v75) {
      v24 = 32;
    }
    else {
      if (v75_.v76 == nullptr) {
        goto LABEL_30;
      }
      v24 = 40;
    }
    (*(void (**)(__int64))(*v75_.v76 + v24))((__int64)v75_.v76);
  LABEL_30:
    v25 = v78;
    v71 = v18;
    v27 = v18 - v78;
    v26 = v18 <= (int)v78;
    v14 = v4;
    v15 = v9;
    if (!v26) {
      v72 = v8;
      if (v17 == 1) {
        v15 = (__int64*)fw_memory_g_heap_manager_ptr;
        v14 = v70;
        do {
          v28 = fw_memory_HeapManager_Allocate(*v15, 128, 16, 0);
          v29 = *((_QWORD*)v8 + 1);
          *(_WORD*)(v28 + 16) = 0;
          *(_QWORD*)(v28 + 64) = 0;
          *(_QWORD*)(v28 + 72) = 0;
          v30 = *(_BYTE*)(a1 + 1080);
          *(_QWORD*)(v28 + 48) = 0;
          *(_QWORD*)(v28 + 56) = 0;
          v31 = *(_QWORD*)(a1 + 1072);
          *(_WORD*)(v28 + 80) = 257;
          *(_BYTE*)(v28 + 82) = 1;
          *(_DWORD*)(v28 + 40) = -1;
          *(_QWORD*)v28 = game_menu_anonymous_EquipMenuItem_Skill_vtable;
          *(_QWORD*)(v28 + 8) = 0;
          *(_DWORD*)(v28 + 108) = 0;
          *(_QWORD*)(v28 + 88) = v31;
          *(_QWORD*)(v28 + 96) = v14;
          *(_BYTE*)(v28 + 104) = v30;
          *(_QWORD*)(v28 + 120) = v29;
          *(_DWORD*)(v28 + 112) = game_15df0e0(v31, GameData_212c8a8_alt1[0]);
          *(_QWORD*)v28 = game_menu_anonymous_EquipMenuItem_SkillEquip_vtable;
          if (v25 != (_DWORD)v78) {
            *(_BYTE*)(v28 + 80) = 0;
          }
          if (v73_.v73 == 0) {
            v73_.v73 = v28;
          }
          BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v28);
          ++v25;
          v15 = (__int64*)fw_memory_g_heap_manager_ptr;
          v14 = v70;
          v8 = v72;
        } while (v71 != v25);
      }
      else {
        v15 = (__int64*)fw_memory_g_heap_manager_ptr;
        v14 = v70;
        do {
          v32 = fw_memory_HeapManager_Allocate(*v15, 128, 16, 0);
          v33 = *((_QWORD*)v8 + 1);
          *(_WORD*)(v32 + 16) = 0;
          *(_QWORD*)(v32 + 64) = 0;
          *(_QWORD*)(v32 + 72) = 0;
          v34 = *(_BYTE*)(a1 + 1080);
          *(_QWORD*)(v32 + 48) = 0;
          *(_QWORD*)(v32 + 56) = 0;
          v35 = *(_QWORD*)(a1 + 1072);
          *(_WORD*)(v32 + 80) = 257;
          *(_BYTE*)(v32 + 82) = 1;
          *(_DWORD*)(v32 + 40) = -1;
          *(_QWORD*)v32 = game_menu_anonymous_EquipMenuItem_Skill_vtable;
          *(_QWORD*)(v32 + 8) = 0;
          *(_DWORD*)(v32 + 108) = 0;
          *(_QWORD*)(v32 + 88) = v35;
          *(_QWORD*)(v32 + 96) = v70;
          *(_BYTE*)(v32 + 104) = v34;
          *(_QWORD*)(v32 + 120) = v33;
          *(_DWORD*)(v32 + 112) = game_15df0e0(v35, GameData_212c8a8_alt1[0]);
          *(_QWORD*)v32 = game_menu_anonymous_EquipMenuItem_SkillFix_vtable;
          BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v32);
          --v27;
        } while (v27 != 0);
      }
    }
    goto LABEL_14;
  }
  v1 = *(_QWORD*)(a1 + 1056);
  if (v1 != 0) {
    v2 = __dynamic_cast(v1, GameData_21319e8[0], &GameData_204fdb0, 0);
  }
  else {
    v2 = 0;
  }
  v75_.v76 = v75_.v75;
  v5 = *(_QWORD*)(a1 + 1072);
  v75_.v75[0] = (__int64)GameData_20503e8;
  v75_.v75[1] = a1;
  game_gameui_Util_CollectArtsInfoList((void*)(&v73_.v73), v5, 0,
                                       (__int64)v75_.v75, 0);
  if (v75_.v76 == v75_.v75) {
    v7 = 32;
    goto LABEL_43;
  }
  if (v75_.v76 != nullptr) {
    v7 = 40;
  LABEL_43:
    (*(void (**)(__int64))(*v75_.v76 + v7))((__int64)v75_.v76);
  }
  v37 = v73_.v73;
  for (i = v73_.v74; v37 != i; v37 += 8) {
    if ((*(_BYTE*)(v37 + 4) & 1) == 0) {
      v39 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
      *(_WORD*)(v39 + 16) = 0;
      *(_QWORD*)(v39 + 48) = 0;
      *(_QWORD*)(v39 + 56) = 0;
      v40 = *(_BYTE*)(a1 + 1080);
      v41 = *(_QWORD*)(a1 + 1072);
      *(_QWORD*)(v39 + 64) = 0;
      *(_QWORD*)(v39 + 72) = 0;
      *(_WORD*)(v39 + 80) = 257;
      *(_BYTE*)(v39 + 82) = 1;
      *(_DWORD*)(v39 + 40) = -1;
      *(_QWORD*)v39 = game_menu_anonymous_EquipMenuItem_Skill_vtable;
      *(_QWORD*)(v39 + 8) = 0;
      *(_QWORD*)(v39 + 88) = v41;
      *(_QWORD*)(v39 + 96) = v2;
      *(_BYTE*)(v39 + 104) = v40;
      v42 = *(_DWORD*)v37;
      *(_QWORD*)(v39 + 120) = "Info00";
      *(_DWORD*)(v39 + 108) = v42;
      *(_DWORD*)(v39 + 112) = game_15df0e0(v41, (_DWORD*)v37);
      *(_QWORD*)v39 = game_menu_anonymous_EquipMenuItem_SkillEquip_vtable;
      BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v39);
    }
  }
  v43 = a1;
  v44 = *(_QWORD**)(a1 + 1072);
  v45 = (v44[151] - v44[150]) >> 2;
  v78 = 32;
  v46 = game_UnitSkillList_GetMaxValue(v44 + 218, &v78);
  v47 = v46 + 3;
  if (v46 + 3 > (int)v45) {
    v48 = v46;
    v49 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         128, 16, 0);
    *(_QWORD*)(v49 + 8) = 0;
    v50 = *(_BYTE*)(a1 + 1080);
    *(_WORD*)(v49 + 16) = 0;
    v51 = *(_QWORD*)(a1 + 1072);
    *(_QWORD*)(v49 + 48) = 0;
    *(_QWORD*)(v49 + 56) = 0;
    *(_QWORD*)(v49 + 64) = 0;
    *(_QWORD*)(v49 + 72) = 0;
    *(_WORD*)(v49 + 80) = 257;
    *(_DWORD*)(v49 + 40) = -1;
    *(_DWORD*)(v49 + 108) = 0;
    *(_QWORD*)(v49 + 120) = "Info00";
    *(_BYTE*)(v49 + 82) = 1;
    *(_QWORD*)(v49 + 88) = v51;
    *(_QWORD*)(v49 + 96) = v2;
    *(_BYTE*)(v49 + 104) = v50;
    *(_DWORD*)(v49 + 112) = game_15df0e0(v51, GameData_212c8a8_alt1[0]);
    *(_QWORD*)v49 = game_menu_anonymous_EquipMenuItem_SkillEquip_vtable;
    BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v49);
    if ((_DWORD)v45 + 1 != v47) {
      v61 = v48 - v45;
      v62 = GameData_212c8a8_alt1[0];
      v63 = v61 + 2;
      v64 = -1;
      do {
        v65 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
        *(_WORD*)(v65 + 16) = 0;
        v66 = *(_BYTE*)(v43 + 1080);
        *(_QWORD*)(v65 + 48) = 0;
        *(_QWORD*)(v65 + 56) = 0;
        v67 = *(_QWORD*)(v43 + 1072);
        *(_QWORD*)(v65 + 64) = 0;
        *(_QWORD*)(v65 + 72) = 0;
        *(_DWORD*)(v65 + 40) = -1;
        *(_QWORD*)v65 = game_menu_anonymous_EquipMenuItem_Skill_vtable;
        *(_QWORD*)(v65 + 8) = 0;
        *(_DWORD*)(v65 + 108) = 0;
        *(_QWORD*)(v65 + 120) = "Info00";
        *(_WORD*)(v65 + 80) = 257;
        *(_BYTE*)(v65 + 82) = 1;
        *(_QWORD*)(v65 + 88) = v67;
        *(_QWORD*)(v65 + 96) = v2;
        *(_BYTE*)(v65 + 104) = v66;
        *(_DWORD*)(v65 + 112) = game_15df0e0(v67, v62);
        *(_QWORD*)v65 = game_menu_anonymous_EquipMenuItem_SkillEquip_vtable;
        if (v64 != 0) {
          *(_BYTE*)(v65 + 80) = 0;
        }
        v43 = a1;
        BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v65);
        --v63;
        --v64;
      } while (v63 != 0);
    }
  }
  v52 = v73_.v73;
  v53 = v73_.v74;
  if (v73_.v73 != v73_.v74) {
    do {
      if (*(_BYTE*)(v52 + 4) == 1) {
        v54 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
        *(_WORD*)(v54 + 16) = 0;
        *(_QWORD*)(v54 + 48) = 0;
        *(_QWORD*)(v54 + 56) = 0;
        v55 = *(_BYTE*)(a1 + 1080);
        v56 = *(_QWORD*)(a1 + 1072);
        *(_QWORD*)(v54 + 64) = 0;
        *(_QWORD*)(v54 + 72) = 0;
        *(_WORD*)(v54 + 80) = 257;
        *(_BYTE*)(v54 + 82) = 1;
        *(_DWORD*)(v54 + 40) = -1;
        *(_QWORD*)v54 = game_menu_anonymous_EquipMenuItem_Skill_vtable;
        *(_QWORD*)(v54 + 8) = 0;
        *(_QWORD*)(v54 + 88) = v56;
        *(_QWORD*)(v54 + 96) = v2;
        *(_BYTE*)(v54 + 104) = v55;
        v57 = *(_DWORD*)v52;
        *(_QWORD*)(v54 + 120) = "Info01";
        *(_DWORD*)(v54 + 108) = v57;
        *(_DWORD*)(v54 + 112) = game_15df0e0(v56, (_DWORD*)v52);
        *(_QWORD*)v54 = game_menu_anonymous_EquipMenuItem_SkillFix_vtable;
        BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v54);
      }
      v52 += 8;
    } while (v52 != v53);
    v52 = v73_.v73;
  }
  v36 = a1;
  if (v52 != 0) {
    v73_.v74 = v52;
    v58 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v58 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, v52);
  }
LABEL_61:
  v59 = (unsigned int*)(*(__int64 (**)(__int64))(*(_QWORD*)v36 + 1288LL))(v36);
  return LayoutAccessor_1562cf0_alt2(v36 + 952, v59);
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
                                       v21, (_QWORD)(v26));
  }
  return v20;
}

__int64 SkillUnitMenu_15ba6a0(__int64 a1, int32x2_t* a2, int a3)
{

#pragma clang fp contract(off)
  char* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  char* v12;
  char* v13;
  signed __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  int v17;
  int v18;
  int v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  int v24;
  char* v25;
  int v26;
  unsigned __int64 v27;
  int v28;
  __int64 v29;
  int v30;
  int v31;
  int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned int v39;
  __int64 v40;
  unsigned int v42;
  int32x2_t* v43;
  float32x4_t v44;
  float32x4_t v45;
  int32x2_t* v46;
  __int64 v47;
  __int64 v48;
  unsigned __int32 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  struct {
    __int64 v52;
    unsigned __int64 v53;
    char* v54;
  } v52_;

  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s1", "=w"));
  v5 = game_util_Format_alt2("Info%02d", a3),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s1", "=w"));
  v6 = strlen_alt1(v5),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v9, 16, 0),
    v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s1", "=w"));
    v52_.v53 = v7;
    v52_.v54 = v8;
    v52_.v52 = v9 | 1;
  }
  else {
    LOBYTE(v52_.v52) = 2 * v6;
    v8 = (char*)&v52_.v52 + 1;
    if (v6 == 0) {
      goto LABEL_10;
    }
  }
  memmove_alt1((__int64)v8, (__int64)v5, v7),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s1", "=w"));
LABEL_10:
  v8[v7] = 0;
  v10 = (__int64)v52_.v54;
  if ((v52_.v52 & 1) != 0) {
    v11 = v52_.v54;
  }
  else {
    v11 = (char*)&v52_.v52 + 1;
  }
  v13 = *(char**)(a1 + 232);
  v12 = *(char**)(a1 + 240);
  if (v13 == v12 ||
      (v14 = v12 - v13,
       (unsigned int)(v15 = (unsigned __int64)(v14 + 0x7FFFFFFF8LL) >> 3) >
           0x7FFFFFFE)) {
  LABEL_47:
    v39 = 0;
    goto LABEL_48;
  }
  v16 = v14 - 8;
  v47 = (__int64)v52_.v54;
  v48 = (__int64)v11;
  v46 = a2;
  v17 = 0;
  v18 = 0;
  v19 = (v15 + 1) & ~(((int)v15 + 1) >> 31);
  v20 = ((unsigned __int64)(v14 - 8) >> 3) + 1;
  v21 = v20 & 3;
  v22 = v20 & 0x3FFFFFFFFFFFFFFCLL;
  if ((v52_.v52 & 1) != 0) {
    v23 = v52_.v53;
  }
  else {
    v23 = (unsigned __int8)v52_.v52 >> 1;
  }
  v50 = v23;
  while (v16 < 0x18) {
    v24 = 0;
    v25 = v13;
    if (v21 != 0) {
    LABEL_22:
      v26 = v24 + v17;
      v27 = v21;
      while (v26 != 0) {
        v25 += 8;
        ++v26;
        if (--v27 == 0) {
          goto LABEL_19;
        }
      }
      goto LABEL_37;
    }
  LABEL_19:
    ++v18;
    --v17;
    if (v18 == v19) {
      v10 = v47;
      goto LABEL_47;
    }
  }
  v28 = 0;
  v29 = v22;
  v25 = v13;
  while (v18 != v28) {
    v30 = v28;
    v31 = v28 + 1;
    if (v18 == v31) {
      v34 = *((_QWORD*)v25 + 1);
      if (v34 != 0) {
        goto LABEL_38;
      }
      goto LABEL_19;
    }
    v32 = v31 + 1;
    if (v18 == v32) {
      v25 += 16;
      break;
    }
    v33 = v32 + 1;
    if (v18 == v33) {
      v34 = *((_QWORD*)v25 + 3);
      if (v34 != 0) {
        goto LABEL_38;
      }
      goto LABEL_19;
    }
    v25 += 32;
    v29 -= 4;
    v28 = v33 + 1;
    if (v29 == 0) {
      v24 = v30 + 4;
      if (v21 != 0) {
        goto LABEL_22;
      }
      goto LABEL_19;
    }
  }
LABEL_37:
  v34 = *(_QWORD*)v25;
  if (*(_QWORD*)v25 == 0) {
    goto LABEL_19;
  }
LABEL_38:
  v35 = __dynamic_cast(v34, GameData_212e008[0], &GameData_20506c0, 0),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v35 == 0) {
    goto LABEL_19;
  }
  v36 = *(_QWORD*)(v35 + 120);
  v37 = v35;
  if (v36 == 0) {
    goto LABEL_19;
  }
  v38 = strlen_alt1(*(const char**)(v35 + 120)),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v38 != v50) {
    goto LABEL_19;
  }
  if (v38 == -1) {
    String_60a230(),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  if (memcmp_alt1(v48, v36, v38) != 0) {
    goto LABEL_19;
  }
  if (v46 != nullptr) {
    v49 = LANES64_OF(vdup_lane_s32(v46[15], 1)).n64_u32[0];
    v51 = LANES64(v46[19]).n64_u32[1];
    GameRoutine_16e54e0(v37),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s1", "=w"));
    LANES128(v44).n128_u64[0] = __PAIR64__(v42, v49);
    v43 = (int32x2_t*)LANES64(v46[3]).n64_u64[0];
    LANES128(v44).n128_u64[1] = v51;
    if (v43 != nullptr) {
      LANES128(v45).n128_u64[0] =
          LANES64_OF(vzip2_s32(v43[15], v43[17])).n64_u64[0];
      LANES128(v45).n128_u64[1] = LANES64(v43[19]).n64_u32[1];
      v44 = vsubq_f32(v44, v45);
    }
    v10 = v47;
    LANES64(v46[6]).n64_u64[0] = LANES128(v44).n128_u64[0];
    LANES64(v46[7]).n64_u32[0] = LANES128(v44).n128_u32[2];
    LANES64(v46[11]).n64_u8[0] |= 0x10u;
    v39 = 1;
  }
  else {
    GameRoutine_16e54e0(v37),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s1", "=w"));
    v10 = v47;
    v39 = 1;
  }
LABEL_48:
  if ((v52_.v52 & 1) != 0 && v10 != 0) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v10),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  return v39;
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

void game_menu_anonymous_SkillUnitMenu_OnAddSkillMenuItem_closure_Invoke(
    __int64 a1, int* a2)
{
  __int64 v2;
  int v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64* v11;

  if ((signed __int32)**(_DWORD**)(a1 + 24) <
      (signed __int32)*(_DWORD*)(a1 + 56)) {
    v2 = *(_QWORD*)(a1 + 8);
    v3 = *(unsigned __int8*)(a1 + 40);
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        128, 16, 0);
    v7 = *(_QWORD*)(v2 + 1072);
    v8 = *(_QWORD*)(a1 + 48);
    v9 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8LL);
    *(_BYTE*)(v6 + 104) = *(_BYTE*)(v2 + 1080);
    v10 = *a2;
    *(_WORD*)(v6 + 80) = 257;
    *(_QWORD*)(v6 + 8) = 0;
    *(_WORD*)(v6 + 16) = 0;
    *(_QWORD*)(v6 + 48) = 0;
    *(_QWORD*)(v6 + 56) = 0;
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 0;
    *(_QWORD*)(v6 + 88) = v7;
    *(_QWORD*)(v6 + 96) = v8;
    *(_BYTE*)(v6 + 82) = 1;
    *(_DWORD*)(v6 + 40) = -1;
    *(_DWORD*)(v6 + 108) = v10;
    *(_QWORD*)(v6 + 120) = v9;
    *(_DWORD*)(v6 + 112) = game_15df0e0(v7, a2);
    if (v3 == 1) {
      *(_QWORD*)v6 = game_menu_anonymous_EquipMenuItem_SkillEquip_vtable;
      v11 = *(__int64**)(a1 + 16);
      if (*v11 == 0) {
        *v11 = v6;
      }
    }
    else {
      *(_QWORD*)v6 = game_menu_anonymous_EquipMenuItem_SkillFix_vtable;
    }
    BasicMenuCursor_16e0c00_alt1((_QWORD*)v2, v6);
    ++**(_DWORD**)(a1 + 24);
  }
}

#pragma GCC visibility pop
