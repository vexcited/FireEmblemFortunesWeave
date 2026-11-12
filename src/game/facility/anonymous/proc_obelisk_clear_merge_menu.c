#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_178a2c0(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcObeliskClearMergeMenu_Unknown139_alt1(
    __int64 a1, __int64* a2) __asm__("ProcObeliskClearMergeMenu_Unknown139");
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_158c7c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_158cbc0(_QWORD, _QWORD);
__int64 GameRoutine_6c2b50(_QWORD, long double);
__int64 GameRoutine_6c3980(_QWORD, _QWORD);
__int64 MapSortieMenu_871860(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcObeliskUnitMergeRouteSelectMenu_158c260(_QWORD, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__int64 ProcObeliskUnitMergeRouteSelectMenu_158ca00(_QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1ffc230[])();
extern __int64 (*GameData_1ffc2b0[])();
extern __int64 (*game_facility_anonymous_ObeliskClearMergeMenuItem_vtable[])();
extern __int64 GameData_1ffc208;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212e008[9];
struct PseudoSret GameRoutine_1560070(_QWORD, _QWORD);
__n128 ProcObeliskClearMergeMenu_Unknown88(__int64 a1);
__int64 ProcObeliskClearMergeMenu_Unknown100(__int64 a1);
__int64 ProcObeliskClearMergeMenu_Unknown101(__int64 a1);
__int64
game_facility_anonymous_ProcObeliskClearMergeMenu_CreateBind_closure_Invoke_alt1(
    __int64 a1,
    __int64 a2) __asm__("game_facility_anonymous_ProcObeliskClearMergeMenu_"
                        "CreateBind_closure_Invoke");
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
void GameRoutine_156c5d0(__int64, __int64, char);
__int64 ProcObeliskClearMergeMenu_Unknown85(__int64 a1);
__int64 ProcObeliskUnitMergeRouteSelectMenu_158ca00_alt1(
    _QWORD*, __int64,
    unsigned int) __asm__("ProcObeliskUnitMergeRouteSelectMenu_158ca00");
__n128 ProcObeliskUnitMergeRouteSelectMenu_158c260_alt1(
    __int64**, __int64, __int64, unsigned int,
    char) __asm__("ProcObeliskUnitMergeRouteSelectMenu_158c260");
__int64 GameRoutine_6c2b50_alt1(__int64) __asm__("GameRoutine_6c2b50");
__int64 GameRoutine_6c3980_alt1(__int64 result,
                                __int64) __asm__("GameRoutine_6c3980");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
bool GameRoutine_158c7c0_alt1(char, __int64,
                              __int64) __asm__("GameRoutine_158c7c0");
int* GameRoutine_158cbc0_alt1(__int64, __int64) __asm__("GameRoutine_158cbc0");
void BasicMenuCursor_16e0c00_alt1(_QWORD*,
                                  __int64) __asm__("BasicMenuCursor_16e0c00");
void game_facility_anonymous_ProcObeliskClearMergeMenu_CreateBind_closure_Invoke(
    __int64 a1, __int64 a2);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void GameRoutine_178a2c0_alt1(__int64, __int64*) __asm__("GameRoutine_178a2c0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_874520_alt1() __asm__("GameRoutine_874520");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcObeliskClearMergeMenu_Unknown139(__int64 a1, __int64* a2);

__int64 ProcObeliskClearMergeMenu_Unknown85(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64* v3;
  __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  struct {
    __int64* v9;
    unsigned __int64 v10;
    unsigned __int64 v11;
    unsigned __int64 v12;
    int v13;
    int v14;
    __int64 v15;
    __int64 v16;
    __int64 v17;
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
  } v9_;

  LayoutAccessor_1560070((void*)(&v9_.v9), (__int64*)(a1 + 848),
                         (__int64)"L_CompareInfo");
  result = v9_.v10;
  if (v9_.v10 != 0) {
    v2 = std___1___shared_weak_count_lock(v9_.v10);
    v3 = v9_.v9;
    result = v9_.v10;
    if (v9_.v10 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v9_.v10);
    }
    if (v2 == 0 || v3 == nullptr) {
      if (v2 == 0) {
        return result;
      }
    }
    else {
      v9_.v15 = -1;
      v9_.v16 = -1;
      v9_.v17 = -1;
      v9_.v18 = -1;
      v5 = *msg_MessageManager_instance__ptr[0];
      v9_.v19 = -1;
      v9_.v20 = -1;
      v9_.v21 = -1;
      v9_.v22 = -1;
      v9_.v23 = -1;
      v9_.v24 = -1;
      v9_.v25 = -1;
      v9_.v26 = -1;
      v9_.v9 = GameData_212e348 + 2;
      v9_.v10 = 0xFFFF0001FFFF0000LL;
      v9_.v11 = 0xFFFF0004FFFF0002LL;
      v9_.v12 = 0xFFFF0006FFFF0005LL;
      v9_.v27 = 8;
      v9_.v13 = -65529;
      v9_.v14 = -65528;
      v6 = GameRoutine_a4dbe0(v5, "MID_Sys_SkillLv", 0);
      if (v6 != nullptr) {
        v7 = (__int64)v6;
        v8 = ui_LayoutAccessor_FindTextBox(v3, (__int64)"T_Title");
        if (v8 != 0) {
          GameRoutine_156c5d0(v8, v7, 0);
        }
      }
      result = ui_LayoutAccessor_SetPaneVisible((__int64)v3,
                                                (__int64)"T_PageHelp", 0);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      return std___1___shared_weak_count___release_weak_alt1(v2);
    }
  }
  return result;
}

__n128 ProcObeliskClearMergeMenu_Unknown88(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __n128 result;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  struct {
    __int64* v9;
    __int64 v10;
  } v9_;
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *(_QWORD*)(a1 + 336);
  if (v2 == 0) {
    return result;
  }
  v3 = __dynamic_cast(v2, GameData_212e008[0], &GameData_1ffc208, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v3 == 0) {
    return result;
  }
  v5 = v3;
  if (*(_BYTE*)(v3 + 4547) == 1) {
    LayoutAccessor_1560070((void*)(&v11_.v11), (__int64*)(a1 + 848),
                           (__int64)"L_CompareInfo"),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (game_GameModeData_instance_ != 0) {
      v6 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    }
    else {
      v6 = 0;
    }
    ProcObeliskUnitMergeRouteSelectMenu_158ca00_alt1(&v11_.v11, v5 + 2320, v6),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v8 = v11_.v12;
    if (v11_.v12 == 0) {
      return result;
    }
    return std___1___shared_weak_count___release_weak(v8);
  }
  LayoutAccessor_1560070((void*)(&v9_.v9), (__int64*)(a1 + 848),
                         (__int64)"L_CompareInfo"),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (game_GameModeData_instance_ != 0) {
    v7 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  else {
    v7 = 0;
  }
  result = ProcObeliskUnitMergeRouteSelectMenu_158c260_alt1(&v9_.v9, v5 + 96,
                                                            v5 + 2320, v7, 1);
  v8 = v9_.v10;
  if (v9_.v10 != 0) {
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

__int64 ProcObeliskClearMergeMenu_Unknown100(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD v5[4];
  _QWORD* v6;
  _QWORD v7[4];
  _QWORD* v8;
  _QWORD v9[4];
  _QWORD* v10;
  const char* v11;

  v11 = "MID_SysMenu_Progress_Confirm";
  v9[0] = GameData_1ffc230;
  v6 = v5;
  v10 = v9;
  v8 = v7;
  v7[0] = GameData_1ffc2b0;
  v5[0] = GameData_1ffc2b0;
  MapSortieMenu_871860(a1, &v11, v9, v7, v5);
  if (v6 == v5) {
    v1 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_6;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*v6 + v1))((__int64)v6);
LABEL_6:
  if (v8 == v7) {
    v2 = 32;
  }
  else {
    if (v8 == nullptr) {
      goto LABEL_11;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v8 + v2))((__int64)v8);
LABEL_11:
  if (v10 == v9) {
    v3 = 32;
    goto LABEL_15;
  }
  if (v10 != nullptr) {
    v3 = 40;
  LABEL_15:
    (*(void (**)(__int64))(*v10 + v3))((__int64)v10);
  }
  return 12;
}

__int64 ProcObeliskClearMergeMenu_Unknown101(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD v5[4];
  _QWORD* v6;
  _QWORD v7[4];
  _QWORD* v8;
  _QWORD v9[4];
  _QWORD* v10;
  const char* v11;

  v11 = "MID_SysMenu_Progress_Confirm";
  v9[0] = GameData_1ffc230;
  v6 = v5;
  v10 = v9;
  v8 = v7;
  v7[0] = GameData_1ffc2b0;
  v5[0] = GameData_1ffc2b0;
  MapSortieMenu_871860(a1, &v11, v9, v7, v5);
  if (v6 == v5) {
    v1 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_6;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*v6 + v1))((__int64)v6);
LABEL_6:
  if (v8 == v7) {
    v2 = 32;
  }
  else {
    if (v8 == nullptr) {
      goto LABEL_11;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v8 + v2))((__int64)v8);
LABEL_11:
  if (v10 == v9) {
    v3 = 32;
    goto LABEL_15;
  }
  if (v10 != nullptr) {
    v3 = 40;
  LABEL_15:
    (*(void (**)(__int64))(*v10 + v3))((__int64)v10);
  }
  return 12;
}

void ProcObeliskClearMergeMenu_Unknown139(__int64 a1, __int64* a2)
{
  int v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  signed __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;

  GameRoutine_178a2c0_alt1(a1, a2);
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v5 = a2[1];
  v6 = a2[2];
  if (v5 >= v6) {
    v8 = *a2;
    v9 = v5 - *a2;
    v10 = 1 - 0x3333333333333333LL * (v9 >> 3);
    if (v10 > 0x666666666666666LL) {
      GameRoutine_874520_alt1();
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v6 - v8) >> 3);
    if (2 * v12 > v10) {
      v10 = 2 * v12;
    }
    if (v12 >= 0x333333333333333LL) {
      v13 = 0x666666666666666LL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 > 0x666666666666666LL) {
        GameRoutine_60a210_alt1();
      }
      v14 = v4;
      v15 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v13, 16, 0);
      v4 = v14;
    }
    else {
      v15 = 0;
    }
    v16 = v15 + v9;
    *(_QWORD*)v16 = &GameData_1a9f09e;
    *(_QWORD*)(v16 + 8) = "MID_KeyHelp_Next";
    *(_DWORD*)(v16 + 20) = 0;
    *(_DWORD*)(v16 + 24) = v4;
    *(_BYTE*)(v16 + 28) = 0;
    *(_QWORD*)(v16 + 32) = 0;
    *(_BYTE*)(v16 + 16) = 1;
    v17 = v15 + 40 * v13;
    v7 = v15 + v9 + 40;
    memcpy_alt1(v15, v8, v9);
    *a2 = v15;
    a2[1] = v7;
    a2[2] = v17;
    if (v8 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v11 + v18, v8);
    }
  }
  else {
    *(_DWORD*)(v5 + 20) = 0;
    *(_DWORD*)(v5 + 24) = v4;
    *(_BYTE*)(v5 + 28) = 0;
    *(_QWORD*)(v5 + 32) = 0;
    v7 = v5 + 40;
    *(_QWORD*)v5 = &GameData_1a9f09e;
    *(_QWORD*)(v5 + 8) = "MID_KeyHelp_Next";
    *(_BYTE*)(v5 + 16) = 1;
  }
  a2[1] = v7;
}

void game_facility_anonymous_ProcObeliskClearMergeMenu_CreateBind_closure_Invoke(
    __int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  bool v8;

  v2 = **(_QWORD***)(a1 + 8);
  v3 = *(_QWORD*)(*(_QWORD*)a2 + 24LL);
  v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + 8LL) + 392LL);
  if (v4 != 0) {
    v5 = *(_QWORD*)(*(_QWORD*)a2 + 8LL);
  }
  else {
    v5 = *(_QWORD*)(*(_QWORD*)a2 + 24LL);
  }
  v6 = v4 == 0;
  v7 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 4560, 16, 0);
  *(_WORD*)(v7 + 16) = 0;
  *(_DWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 88) = v5;
  *(_WORD*)(v7 + 80) = 257;
  *(_BYTE*)(v7 + 82) = 1;
  *(_QWORD*)v7 = game_facility_anonymous_ObeliskClearMergeMenuItem_vtable;
  *(_QWORD*)(v7 + 8) = 0;
  GameRoutine_6c2b50_alt1(v7 + 96);
  GameRoutine_6c2b50_alt1(v7 + 2320);
  *(_DWORD*)(v7 + 4544) = 0;
  GameRoutine_6c3980_alt1(v7 + 96, v5);
  GameRoutine_6c3980_alt1(v7 + 2320, v3);
  *(_BYTE*)(v7 + 4544) =
      (unsigned __int8)GameRoutine_158cbc0_alt1(v7 + 2320, v7 + 96) & 1;
  *(_BYTE*)(v7 + 4545) = GameRoutine_158c7c0_alt1(1, v7 + 2320, v7 + 96);
  v8 = GameRoutine_158c7c0_alt1(2, v7 + 2320, v7 + 96);
  *(_BYTE*)(v7 + 4547) = v6;
  *(_BYTE*)(v7 + 4546) = v8;
  BasicMenuCursor_16e0c00_alt1(v2, v7);
}

#pragma GCC visibility pop
