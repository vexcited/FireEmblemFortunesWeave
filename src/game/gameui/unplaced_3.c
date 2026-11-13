#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* Element_1886290(__int64, const char**);
_QWORD* LayoutAccessor_1560520(__int64*, __int64, const char*, __int64);
_QWORD* ui_LayoutAccessor_Setup_155dda0(__int64*, __int64*);
_QWORD* ui_LayoutAccessor_Setup_155dda0_alt1(_QWORD*, _QWORD*) __asm__(
    "ui_LayoutAccessor_Setup_155dda0");
_QWORD* ui_LayoutAccessor_Setup_155dea0(_QWORD*, _QWORD*, __int64);
__attribute__((swiftcall)) void GameRoutine_1572700(PSEUDO_X8, __int64*,
                                                    const char**);
__attribute__((swiftcall)) void GameRoutine_1572840(PSEUDO_X8, __int64*,
                                                    const char**);
__attribute__((swiftcall)) void GameRoutine_1587740(PSEUDO_X8, __int64*,
                                                    const char**);
__attribute__((swiftcall)) void GameRoutine_17d8560(PSEUDO_X8, int, __int64,
                                                    _QWORD*);
__attribute__((swiftcall)) void GameRoutine_9d52c0(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void GameRoutine_eb5ba0(PSEUDO_X8, int);
__attribute__((swiftcall)) void GameRoutine_fa73c0(PSEUDO_X8, __int64*,
                                                   const char**);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void
Layout_1363e00(PSEUDO_X8, unsigned __int64 result, __int64);
__attribute__((swiftcall)) void game_1366bd0(PSEUDO_X8, __int64, __int64,
                                             __int64);
__attribute__((swiftcall)) void game_Unit_GetParams(PSEUDO_X8, __int64);
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
__int64 GameHr_1562680(__int64 result, unsigned int*, float);
__int64 GameHr_1562680_alt1(__int64 result, const char*,
                            float) __asm__("GameHr_1562680");
__int64 GameRoutine_156d580(__int64);
__int64 GameRoutine_1597cc0(__int64, __int64, int, int);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_809fd0(__int64 result, long double, long double);
__int64 GameRoutine_975940(__int64);
__int64 JobIcon_19a9be0(__int64, __int64, __int64);
__int64 LayoutAccessor_155ca60(__int64);
__int64 LayoutAccessor_155e140(__int64*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562060_alt1(__int64 result, __int64,
                                    __int64) __asm__("LayoutAccessor_1562060");
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 LayoutAccessor_1563030(__int64 result, __int64, char);
__int64 LayoutAccessor_1563280(__int64*, __int64, char);
__int64 LayoutAccessor_1571860(__int64*, __int64, char, char, char, char);
__int64 StatusClass_189ce00(__int64*);
__int64 StatusClass_189d120(__int64*, _QWORD*, char, char, char, char, char);
__int64 StatusHP_18922b0(_QWORD*);
__int64 StatusLV_18a34f0(__int64*);
__int64 UnitItemList_710640(__int64);
__int64 UnitItemList_710b30(__int64);
__int64 Util_15792c0(__int64*, unsigned __int16*, char, unsigned __int8,
                     __int64, const char*, const char*, int);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_809ba0(__int64, float);
__int64 game_ProcInst_Unregister(__int64 result);
__int64 game_Unit_GetJob(__int64);
__int64 game_Unit_GetParam(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindPartsLayout(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, const char*, char);
__int64 ui_LayoutAccessor_SetPriority(__int64 result, int);
bool GameSituation_906560(__int64, __int64*);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
extern _UNKNOWN* GameData_212dfd0;
extern __int64 (*GameData_204cf28)();
extern __int64 (*GameData_204e398[])();
extern __int64 (*GameData_204e418[])();
extern __int64 (*GameData_204e498[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gameui_MouseCursor_vtable[])();
extern __int64 (*game_gameui_SavingIcon_vtable[])();
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* GameData_212c880[5];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212dfc0[2];
extern __int64* GameData_212dfc8;
extern __int64* GameData_212e348;
extern __int64* GameData_212fc70[2];
extern __int64* GameData_21300f0[2];
extern __int64* GameData_2130610[4];
extern __int64* game_g_empty_item_ptr;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212d690;
extern __int64 GameData_212d6e0[2];
extern __int64 GameData_212d8a8[4];
extern __int64 GameData_21759e0;
extern __int64 GameData_21c9608;
extern __int64 GameData_21c9988;
extern __int64 GameData_21f3d10;
extern __int64 GameData_21f4cc0;
extern __int64 GameData_2203490;
extern __int64 GameData_2216820;
extern __int64 GameData_2259348;
extern __int64 GameData_2259350;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_g_game_setting_ptr;
extern __int64 game_gameui_Footer_instance_;
extern char* GameData_204f080[89];
extern char GameData_2216858;
extern int GameData_2264534;
extern int GameData_2272248;
float ui_LayoutAccessor_GetPaneSize(__int64*, const char*);
float ui_LayoutAccessor_SetPaneTranslate(__int64*, __int64, __int64);
float ui_LayoutAccessor_SetTranslate(__int64*, __int64);
int __cxa_guard_acquire(__int64);
unsigned __int64 strlen(const char*);
void BlnPopup_19f1f60(__int64);
__attribute__((swiftcall)) void GameRoutine_1366ac0(PSEUDO_X8, __int64,
                                                    __int64);
void GameRoutine_1563f90(__int64, __int64);
void GameRoutine_1564060(__int64*);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_156c910(__int64 result, const char*, int, ...);
void GameRoutine_658c00(__int64*);
void LayoutAccessor_1562060(__int64*, __int64, const char*);
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_8123d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_gameui_1569b40(__int64 a1);
void game_gameui_157cff0(__int64* a1, const char* a2, int a3, char a4);
void game_gameui_157d1a0(__int64* a1, const char* a2, int a3);
void game_gameui_1589740(__int64 a1, _QWORD* a2);
void game_gameui_1589a10(__int64 a1, _QWORD* a2);
int* game_gameui_158cbc0(__int64 a1, __int64 a2);
__int64 game_gameui_15997d0(__int64 result, __int64 a2, char a3);
__int64 game_gameui_1599e20();
void game_gameui_15d9250(__int64* a1, __int64 a2);
void game_gameui_1718860(__int64 a1, const char* a2);
__int64 game_gameui_17aa8e0(__int64 a1);
__int64 game_gameui_17ba570(long double a1, long double a2);
__int64 game_gameui_18a2660(_QWORD* a1, __int64 a2, __int64 a3);
void game_gameui_18a2880(__int64* a1);
void game_gameui_19adee0(_QWORD* a1);
void game_gameui_19ae1e0(__int64 a1);
__int64 game_gameui_19aeaf0(__int64 a1);

void game_gameui_1569b40(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = &GameData_204cf28;
  v2 = *(_QWORD*)(a1 + 152);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  LayoutAccessor_155e140((__int64*)(a1 + 168));
  v4 = *(_QWORD**)(a1 + 480);
  if (v4 == (_QWORD*)(a1 + 448)) {
    v5 = 32;
    goto LABEL_10;
  }
  if (v4 != nullptr) {
    v5 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
  }
  LayoutAccessor_155ca60(a1 + 272);
  LayoutAccessor_155e140((__int64*)(a1 + 168));
  v6 = *(_QWORD*)(a1 + 264);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  GameRoutine_1564060((__int64*)(a1 + 216));
  GameRoutine_1563f90(a1 + 192, *(_QWORD*)(a1 + 200));
  v7 = *(_QWORD*)(a1 + 176);
  if (v7 != 0) {
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = *(_QWORD*)(a1 + 160);
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  game_gameui_Footer_instance_ = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00((__int64*)(a1 + 88));
}

void game_gameui_157cff0(__int64* a1, const char* a2, int a3, char a4)
{
  const char* v8;
  __int64 v9;
  char* v10;
  char* v11;
  const char* v12;
  __int64 v13;
  __int64 v14;
  struct {
    __int64 v15[2];
    const char* v16;
  } v15_;
  char v17;
  __int64 v18;
  char v19;
  __int64 (**v20)();
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;

  v19 = 0;
  v39 = GameData_21759e0;
  v18 = 0x200000000LL;
  v17 = 3;
  GameRoutine_17d8560((void*)(v15_.v15), a3, (__int64)&v39, &v17);
  if ((a4 & 1) != 0 && a3 >= 1) {
    if ((v15_.v15[0] & 1) != 0) {
      v8 = v15_.v16;
    }
    else {
      v8 = (char*)v15_.v15 + 1;
    }
    v26 = -1;
    v27 = -1;
    v28 = -1;
    v29 = -1;
    v30 = -1;
    v31 = -1;
    v32 = -1;
    v33 = -1;
    v9 = *msg_MessageManager_instance__ptr[0];
    v34 = -1;
    v35 = -1;
    v36 = -1;
    v37 = -1;
    v20 = msg_TagSelector_vtable;
    v21 = 0xFFFF0001FFFF0000LL;
    v22 = 0xFFFF0004FFFF0002LL;
    v23 = 0xFFFF0006FFFF0005LL;
    v38 = 8;
    v24 = -65529;
    v25 = -65528;
    v10 = GameRoutine_a4dbe0(v9, "MID_Sys_Plus", 0);
    v11 = game_util_Format("%s%s", v10, v8);
    GameRoutine_60a020((__int64)v15_.v15, v11);
  }
  if ((v15_.v15[0] & 1) != 0) {
    v12 = v15_.v16;
  }
  else {
    v12 = (char*)v15_.v15 + 1;
  }
  if (a2 != nullptr && v12 != nullptr) {
    v13 = ui_LayoutAccessor_FindTextBox(a1, a2);
    if (v13 != 0) {
      GameRoutine_156c5d0(v13, (__int64)v12, 0);
    }
  }
  if ((v15_.v15[0] & 1) != 0 && v15_.v16 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                  (__int64)v15_.v16);
  }
}

void game_gameui_157d1a0(__int64* a1, const char* a2, int a3)
{
  const char* v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  struct {
    __int64 v9[2];
    char* v10;
  } v9_;
  char v11;
  __int64 v12;
  char v13;
  __int64 v14;

  v13 = 0;
  v14 = GameData_21759e0;
  v12 = 0x200000000LL;
  v11 = 2;
  GameRoutine_17d8560((void*)(v9_.v9), a3, (__int64)&v14, &v11);
  v5 = a2;
  if ((v9_.v9[0] & 1) != 0) {
    v6 = v9_.v10;
  }
  else {
    v6 = (char*)v9_.v9 + 1;
  }
  if (v5 != nullptr && v6 != nullptr) {
    v7 = ui_LayoutAccessor_FindTextBox(a1, v5);
    if (v7 != 0) {
      GameRoutine_156c5d0(v7, (__int64)v6, 0);
    }
  }
  if ((v9_.v9[0] & 1) != 0 && v9_.v10 != nullptr) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                  (__int64)v9_.v10);
  }
}

void game_gameui_1589740(__int64 a1, _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  const char* v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  const char* v21[2];
  struct {
    __int64 (**v22)();
    __int64 v23;
    unsigned __int64 v24;
    unsigned __int64 v25;
    int v26;
    int v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
  } v22_;

  if (a2 != nullptr) {
    v4 = game_Unit_GetJob((__int64)a2);
    if (v4 != 0) {
      v5 = v4;
      v6 = *(_QWORD*)(a1 + 8);
      if (v6 != 0) {
        v7 = std___1___shared_weak_count_lock(v6);
        if (v7 != 0) {
          v8 = *(__int64**)a1;
          v9 = v7;
          if (v8 == nullptr) {
            goto LABEL_34;
          }
          LayoutAccessor_1562cf0((__int64)v8, (unsigned int*)"Secret");
          v21[0] = "L_Class";
          v21[1] = (_BYTE*)((_UNKNOWN*)0x7LL);
          GameRoutine_fa73c0((void*)(&v22_.v22), v8, v21);
          if (v22_.v23 != 0) {
            v10 = std___1___shared_weak_count_lock(v22_.v23);
            v11 = (__int64*)v22_.v22;
            if (v22_.v23 != 0) {
              std___1___shared_weak_count___release_weak(v22_.v23);
            }
            if (v10 != 0 && v11 != nullptr) {
              StatusClass_189d120(v11, a2, 0, 0, 0, 1, 1);
            }
            else if (v10 == 0) {
              goto LABEL_15;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
              std___1___shared_weak_count___release_weak(v10);
            }
          }
        LABEL_15:
          v21[0] = "L_JobIcon";
          v21[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 1);
          GameRoutine_1587740((void*)(&v22_.v22), v8, v21);
          if (v22_.v23 != 0) {
            v12 = std___1___shared_weak_count_lock(v22_.v23);
            v13 = (__int64)v22_.v22;
            if (v22_.v23 != 0) {
              std___1___shared_weak_count___release_weak(v22_.v23);
            }
            if (v12 != 0 && v13 != 0) {
              *(_WORD*)(v13 + 1104) = 0;
              *(_BYTE*)(v13 + 1109) = 2;
              *(_BYTE*)(v13 + 1106) = 1;
              JobIcon_19a9be0(v13, (__int64)a2, v5);
              goto LABEL_22;
            }
            if (v12 != 0) {
            LABEL_22:
              if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
                std___1___shared_weak_count___release_weak(v12);
              }
            }
          }
          v14 = a2[49];
          if (v14 != 0 && v5 == GameData_21c9988) {
            if (*(_QWORD*)(*(_QWORD*)(v14 + 24) + 1784LL) != 0) {
              v14 = *(_QWORD*)(*(_QWORD*)(v14 + 24) + 1784LL);
            }
            v15 = *(unsigned __int8*)(v14 + 52) - 1;
            if (v15 < 3) {
              v16 = GameData_204f080[(unsigned __int8)v15];
            LABEL_31:
              v22_.v28 = -1;
              v22_.v29 = -1;
              v22_.v30 = -1;
              v22_.v31 = -1;
              v17 = *msg_MessageManager_instance__ptr[0];
              v22_.v32 = -1;
              v22_.v33 = -1;
              v22_.v34 = -1;
              v22_.v35 = -1;
              v22_.v36 = -1;
              v22_.v37 = -1;
              v22_.v38 = -1;
              v22_.v39 = -1;
              v22_.v22 = msg_TagSelector_vtable;
              v22_.v23 = 0xFFFF0001FFFF0000LL;
              v22_.v24 = 0xFFFF0004FFFF0002LL;
              v22_.v25 = 0xFFFF0006FFFF0005LL;
              v22_.v40 = 8;
              v22_.v26 = -65529;
              v22_.v27 = -65528;
              v18 = GameRoutine_a4dbe0(v17, v16, 0);
              if (v18 != nullptr) {
                v19 = (__int64)v18;
                v20 = ui_LayoutAccessor_FindTextBox(v8, "T_Message");
                if (v20 != 0) {
                  GameRoutine_156c5d0(v20, v19, 0);
                }
              }
              goto LABEL_34;
            }
          }
          v16 = *(const char**)(v5 + 40);
          if (v16 != nullptr) {
            goto LABEL_31;
          }
        LABEL_34:
          if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
            std___1___shared_weak_count___release_weak(v9);
          }
        }
      }
    }
  }
}

void game_gameui_1589a10(__int64 a1, _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  const char* v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  const char* v21[2];
  struct {
    __int64 (**v22)();
    __int64 v23;
    unsigned __int64 v24;
    unsigned __int64 v25;
    int v26;
    int v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
  } v22_;

  if (a2 != nullptr) {
    v4 = game_Unit_GetJob((__int64)a2);
    if (v4 != 0) {
      v5 = v4;
      v6 = *(_QWORD*)(a1 + 8);
      if (v6 != 0) {
        v7 = std___1___shared_weak_count_lock(v6);
        if (v7 != 0) {
          v8 = *(__int64**)a1;
          v9 = v7;
          if (v8 == nullptr) {
            goto LABEL_34;
          }
          LayoutAccessor_1562cf0((__int64)v8, (unsigned int*)"Secret");
          v21[0] = "L_Class";
          v21[1] = (_BYTE*)((_UNKNOWN*)0x7LL);
          GameRoutine_fa73c0((void*)(&v22_.v22), v8, v21);
          if (v22_.v23 != 0) {
            v10 = std___1___shared_weak_count_lock(v22_.v23);
            v11 = (__int64*)v22_.v22;
            if (v22_.v23 != 0) {
              std___1___shared_weak_count___release_weak(v22_.v23);
            }
            if (v10 != 0 && v11 != nullptr) {
              StatusClass_189d120(v11, a2, 0, 0, 0, 0, 1);
            }
            else if (v10 == 0) {
              goto LABEL_15;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
              std___1___shared_weak_count___release_weak(v10);
            }
          }
        LABEL_15:
          v21[0] = "L_JobIcon";
          v21[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 1);
          GameRoutine_1587740((void*)(&v22_.v22), v8, v21);
          if (v22_.v23 != 0) {
            v12 = std___1___shared_weak_count_lock(v22_.v23);
            v13 = (__int64)v22_.v22;
            if (v22_.v23 != 0) {
              std___1___shared_weak_count___release_weak(v22_.v23);
            }
            if (v12 != 0 && v13 != 0) {
              *(_BYTE*)(v13 + 1109) = 0;
              *(_WORD*)(v13 + 1104) = 0;
              *(_BYTE*)(v13 + 1106) = 1;
              JobIcon_19a9be0(v13, (__int64)a2, v5);
              goto LABEL_22;
            }
            if (v12 != 0) {
            LABEL_22:
              if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
                std___1___shared_weak_count___release_weak(v12);
              }
            }
          }
          v14 = a2[49];
          if (v14 != 0 && v5 == GameData_21c9988) {
            if (*(_QWORD*)(*(_QWORD*)(v14 + 24) + 1784LL) != 0) {
              v14 = *(_QWORD*)(*(_QWORD*)(v14 + 24) + 1784LL);
            }
            v15 = *(unsigned __int8*)(v14 + 52) - 1;
            if (v15 < 3) {
              v16 = GameData_204f080[(unsigned __int8)v15];
            LABEL_31:
              v22_.v28 = -1;
              v22_.v29 = -1;
              v22_.v30 = -1;
              v22_.v31 = -1;
              v17 = *msg_MessageManager_instance__ptr[0];
              v22_.v32 = -1;
              v22_.v33 = -1;
              v22_.v34 = -1;
              v22_.v35 = -1;
              v22_.v36 = -1;
              v22_.v37 = -1;
              v22_.v38 = -1;
              v22_.v39 = -1;
              v22_.v22 = msg_TagSelector_vtable;
              v22_.v23 = 0xFFFF0001FFFF0000LL;
              v22_.v24 = 0xFFFF0004FFFF0002LL;
              v22_.v25 = 0xFFFF0006FFFF0005LL;
              v22_.v40 = 8;
              v22_.v26 = -65529;
              v22_.v27 = -65528;
              v18 = GameRoutine_a4dbe0(v17, v16, 0);
              if (v18 != nullptr) {
                v19 = (__int64)v18;
                v20 = ui_LayoutAccessor_FindTextBox(v8, "T_Message");
                if (v20 != 0) {
                  GameRoutine_156c5d0(v20, v19, 0);
                }
              }
              goto LABEL_34;
            }
          }
          v16 = *(const char**)(v5 + 40);
          if (v16 != nullptr) {
            goto LABEL_31;
          }
        LABEL_34:
          if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
            std___1___shared_weak_count___release_weak(v9);
          }
        }
      }
    }
  }
}

int* game_gameui_158cbc0(__int64 a1, __int64 a2)
{
  _DWORD* v4;
  int v5;
  int* result;
  _QWORD* v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  char v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  bool v44;
  _WORD v45[8];
  int v46;
  _WORD v47[11];
  __int64 v48;
  __int64 v49;
  struct {
    _QWORD v50[4];
    _QWORD* v51;
  } v50_;
  __int64 v52;

  v48 = a2;
  v49 = a1;
  game_Unit_GetParams((void*)(v47), a1);
  game_Unit_GetParams((void*)(v45), a2);
  v4 = (_DWORD*)GameData_2259348;
  if (GameData_2259348 == GameData_2259350) {
    v44 = false;
  LABEL_11:
    v7 = v50_.v50;
    v52 = 0;
    v50_.v50[0] = GameData_204e418;
    v50_.v50[1] = (char*)&v52 + 4;
    v8 = *(_BYTE*)(a1 + 1152);
    v50_.v51 = v50_.v50;
    if ((v8 & 2) == 0) {
      goto LABEL_21;
    }
    v9 = *(_QWORD*)(a1 + 1112);
    v10 = *(_QWORD*)(a1 + 1104);
    if ((int)((unsigned __int64)(v9 - v10) >> 2) < 1) {
      goto LABEL_21;
    }
    v11 = 0;
    v12 = 0;
    v13 = GameData_212c880[0];
    v14 = *GameData_212c880[0];
    do {
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v14 + 64) +
                               8LL * (*(_DWORD*)(v10 + v11) & 0xFFF)) +
                    104LL) == 1) {
        if (v50_.v51 == nullptr) {
        LABEL_55:
          GameRoutine_60a310();
        }
        (*(void (**)(_QWORD*, __int64))(*v50_.v51 + 48LL))(v50_.v51, v10 + v11);
        v14 = *v13;
        v9 = *(_QWORD*)(a1 + 1112);
        v10 = *(_QWORD*)(a1 + 1104);
      }
      ++v12;
      v11 += 4;
    } while (v12 < (int)((unsigned __int64)(v9 - v10) >> 2));
    v7 = v50_.v51;
    if (v50_.v51 == v50_.v50) {
    LABEL_21:
      v15 = 32;
    }
    else {
      if (v50_.v51 == nullptr) {
        goto LABEL_23;
      }
      v15 = 40;
    }
    (*(void (**)(__int64))(*v7 + v15))((__int64)v7);
  LABEL_23:
    v16 = v50_.v50;
    v50_.v50[0] = GameData_204e498;
    v50_.v50[1] = &v52;
    v17 = *(_BYTE*)(a2 + 1152);
    v50_.v51 = v50_.v50;
    if ((v17 & 2) == 0) {
      goto LABEL_33;
    }
    v18 = *(_QWORD*)(a2 + 1112);
    v19 = *(_QWORD*)(a2 + 1104);
    if ((int)((unsigned __int64)(v18 - v19) >> 2) < 1) {
      goto LABEL_33;
    }
    v20 = 0;
    v21 = 0;
    v22 = GameData_212c880[0];
    v23 = *GameData_212c880[0];
    do {
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v23 + 64) +
                               8LL * (*(_DWORD*)(v19 + v20) & 0xFFF)) +
                    104LL) == 1) {
        if (v50_.v51 == nullptr) {
          goto LABEL_55;
        }
        (*(void (**)(_QWORD*, __int64))(*v50_.v51 + 48LL))(v50_.v51, v19 + v20);
        v23 = *v22;
        v18 = *(_QWORD*)(a2 + 1112);
        v19 = *(_QWORD*)(a2 + 1104);
      }
      ++v21;
      v20 += 4;
    } while (v21 < (int)((unsigned __int64)(v18 - v19) >> 2));
    v16 = v50_.v51;
    if (v50_.v51 == v50_.v50) {
    LABEL_33:
      v24 = 32;
    }
    else {
      if (v50_.v51 == nullptr) {
        goto LABEL_35;
      }
      v24 = 40;
    }
    (*(void (**)(__int64))(*v16 + v24))((__int64)v16);
  LABEL_35:
    if (SHIDWORD(v52) > (int)v52) {
      return (_DWORD*)(((_UNKNOWN*)0x0LL) + 1);
    }
    v25 = v50_.v50;
    v52 = 0;
    v50_.v50[0] = GameData_204e418;
    v50_.v50[1] = (char*)&v52 + 4;
    v26 = *(_BYTE*)(a1 + 1152);
    v50_.v51 = v50_.v50;
    if ((v26 & 4) == 0) {
      goto LABEL_46;
    }
    v27 = *(_QWORD*)(a1 + 1112);
    v28 = *(_QWORD*)(a1 + 1104);
    if ((int)((unsigned __int64)(v27 - v28) >> 2) < 1) {
      goto LABEL_46;
    }
    v29 = 0;
    v30 = 0;
    v31 = GameData_212c880[0];
    v32 = *GameData_212c880[0];
    do {
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v32 + 64) +
                               8LL * (*(_DWORD*)(v28 + v29) & 0xFFF)) +
                    104LL) == 2) {
        if (v50_.v51 == nullptr) {
          goto LABEL_55;
        }
        (*(void (**)(_QWORD*, __int64))(*v50_.v51 + 48LL))(v50_.v51, v28 + v29);
        v32 = *v31;
        v27 = *(_QWORD*)(a1 + 1112);
        v28 = *(_QWORD*)(a1 + 1104);
      }
      ++v30;
      v29 += 4;
    } while (v30 < (int)((unsigned __int64)(v27 - v28) >> 2));
    v25 = v50_.v51;
    if (v50_.v51 == v50_.v50) {
    LABEL_46:
      v33 = 32;
    }
    else {
      if (v50_.v51 == nullptr) {
        goto LABEL_48;
      }
      v33 = 40;
    }
    (*(void (**)(__int64))(*v25 + v33))((__int64)v25);
  LABEL_48:
    v34 = v50_.v50;
    v50_.v50[0] = GameData_204e498;
    v50_.v50[1] = &v52;
    v35 = *(_BYTE*)(a2 + 1152);
    v50_.v51 = v50_.v50;
    if ((v35 & 4) == 0) {
      goto LABEL_59;
    }
    v36 = *(_QWORD*)(a2 + 1112);
    v37 = *(_QWORD*)(a2 + 1104);
    if ((int)((unsigned __int64)(v36 - v37) >> 2) < 1) {
      goto LABEL_59;
    }
    v38 = 0;
    v39 = 0;
    v40 = GameData_212c880[0];
    v41 = *GameData_212c880[0];
    do {
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v41 + 64) +
                               8LL * (*(_DWORD*)(v37 + v38) & 0xFFF)) +
                    104LL) == 2) {
        if (v50_.v51 == nullptr) {
          goto LABEL_55;
        }
        (*(void (**)(_QWORD*, __int64))(*v50_.v51 + 48LL))(v50_.v51, v37 + v38);
        v41 = *v40;
        v36 = *(_QWORD*)(a2 + 1112);
        v37 = *(_QWORD*)(a2 + 1104);
      }
      ++v39;
      v38 += 4;
    } while (v39 < (int)((unsigned __int64)(v36 - v37) >> 2));
    v34 = v50_.v51;
    if (v50_.v51 == v50_.v50) {
    LABEL_59:
      v42 = 32;
    }
    else {
      if (v50_.v51 == nullptr) {
        goto LABEL_61;
      }
      v42 = 40;
    }
    (*(void (**)(__int64))(*v34 + v42))((__int64)v34);
  LABEL_61:
    v44 = SHIDWORD(v52) > (int)v52;
    if (SHIDWORD(v52) > (int)v52) {
      return (_DWORD*)(((_UNKNOWN*)0x0LL) + 1);
    }
    v50_.v50[0] = GameData_204e398;
    v50_.v50[1] = &v48;
    v50_.v51 = v50_.v50;
    v50_.v50[2] = &v49;
    v50_.v50[3] = &v44;
    GameRoutine_156d580((__int64)v50_.v50);
    if (v50_.v51 == v50_.v50) {
      v43 = 32;
    }
    else {
      if (v50_.v51 == nullptr) {
        goto LABEL_67;
      }
      v43 = 40;
    }
    (*(void (**)(__int64))(*v50_.v51 + v43))((__int64)v50_.v51);
  LABEL_67:
    if (!v44) {
      return (int*)((signed __int32)*(_DWORD*)(v48 + 504) <
                    (signed __int32)*(_DWORD*)(v49 + 504));
    }
    return (_DWORD*)(((_UNKNOWN*)0x0LL) + 1);
  }
  v5 = 0;
  result = &v46;
  while ((unsigned int)(*v4 - 28) > 9) {
    ++v4;
    if ((unsigned __int16)v48 != v47[0]) {
      ++v5;
    }
    if (v4 == (_DWORD*)GameData_2259350) {
      if (v5 != 0) {
        return (_DWORD*)(((_UNKNOWN*)0x0LL) + 1);
      }
      goto LABEL_11;
    }
  }
  return result;
}

__int64 game_gameui_15997d0(__int64 result, __int64 a2, char a3)
{
  __int64 v3;
  __int64* v5;
  __int64 v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  struct {
    __int64 v15[4];
    int v16;
    int v17;
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
    __int64 v28;
    __int64 v29;
    __int64 v30;
  } v15_;

  if (a2 != 0) {
    v3 = *(_QWORD*)(a2 + 392);
    if (v3 != 0) {
      v5 = (__int64*)result;
      result = *(_QWORD*)(v3 + 288);
      if (result != 0) {
        result = GameRoutine_975940(result);
        if (result != 0) {
          v7 = result;
          v15_.v18 = -1;
          v15_.v19 = -1;
          v15_.v20 = -1;
          v15_.v21 = -1;
          v8 = *msg_MessageManager_instance__ptr[0];
          v15_.v22 = -1;
          v15_.v23 = -1;
          v15_.v24 = -1;
          v15_.v25 = -1;
          v15_.v26 = -1;
          v15_.v27 = -1;
          v15_.v28 = -1;
          v15_.v29 = -1;
          v15_.v15[0] = (__int64)(GameData_212e348 + 2);
          v15_.v15[1] = 0xFFFF0001FFFF0000LL;
          v15_.v15[2] = 0xFFFF0004FFFF0002LL;
          v15_.v15[3] = 0xFFFF0006FFFF0005LL;
          v15_.v30 = 8;
          v15_.v16 = -65529;
          v15_.v17 = -65528;
          v9 = GameRoutine_a4dbe0(v8, "MID_ProfileMenu_Like", 0);
          if (v9 != nullptr) {
            v10 = (__int64)v9;
            v11 = ui_LayoutAccessor_FindTextBox_alt1(
                v5, (__int64)"L_MenuItem_Info/T_Title");
            if (v11 != 0) {
              GameRoutine_156c5d0(v11, v10, 0);
            }
          }
          LayoutAccessor_1562060(v5, (__int64)"T_Help",
                                 *(const char**)(v7 + 144));
          if ((a3 & 1) != 0) {
            v12 = *(_QWORD*)(a2 + 392);
            v15_.v15[0] = 0;
            v15_.v15[1] = v12;
            if (GameSituation_906560(game_GameModeData_instance_ + 136,
                                     v15_.v15) &&
                ((v13 = *(_QWORD*)(a2 + 440)) == 0
                     ? (v14 = 9)
                     : (v14 = *(_BYTE*)(v13 + 16)),
                 ((1 << v14) & 0xF1) == 0)) {
              LayoutAccessor_1562cf0_alt1((__int64)v5, "Condition_CanScout");
              return GameRoutine_1597cc0((__int64)v5, v12, 1, 1);
            }
            else {
              return LayoutAccessor_1562cf0_alt1((__int64)v5,
                                                 "Condition_CannotScout");
            }
          }
          else {
            return LayoutAccessor_1562cf0_alt1((__int64)v5,
                                               "Condition_Default");
          }
        }
      }
    }
  }
  return result;
}

__int64 game_gameui_1599e20()
{
  int v0;
  __int64 result;
  int v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64* v6;
  __int64 v7;
  int v8;
  __int64* v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  struct {
    __int64 v13[3];
    char gap32_[28];
    char v14;
  } v13_;

  if (GameData_2203490 != 0) {
    if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) == 0) {
      if ((GameData_2216858 & 1) == 0) {
        GameRoutine_8123d0();
      }
      if ((GameData_2216820 & 8) != 0) {
        return 0;
      }
    }
    v0 =
        *(_DWORD*)(GameData_2203490 + 692) + *(_DWORD*)(GameData_2203490 + 688);
    if (v0 <= 1) {
      v0 = 1;
    }
    return (signed __int32)*(_DWORD*)(GameData_2203490 + 684) < v0;
  }
  if (GameData_21f3d10 == 0 || *(_BYTE*)(GameData_21f3d10 + 9) != 1 ||
      *(_DWORD*)(GameData_21f3d10 + 136) != 1 || GameData_21c9608 == 0) {
    return 0;
  }
  if ((*(_QWORD*)(GameData_21c9608 + 328) & 4LL) != 0) {
    v2 = 1;
  }
  else {
    v2 = *(_DWORD*)(GameData_21c9608 + 308);
  }
  GameRoutine_eb5ba0((void*)(v13_.v13), v2);
  v3 = v13_.v13[0];
  v4 = v13_.v13[1];
  if (v13_.v13[1] == v13_.v13[0]) {
    result = 0;
  }
  else {
    v5 = 0;
    v6 = (__int64*)v13_.v13[0];
    do {
      v7 = *v6++;
      v5 += *(__int16*)(v7 + 492);
    } while (v6 != (__int64*)v13_.v13[1]);
    v8 = 0;
    v9 = (__int64*)v13_.v13[0];
    do {
      v10 = *v9++;
      v13_.v14 = 0;
      v8 += game_Unit_GetParam(v10);
    } while (v9 != (__int64*)v4);
    result = v5 < v8;
  }
  if (v3 != 0) {
    v11 = result;
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12,
                                  v3);
    return v11;
  }
  return result;
}

void game_gameui_15d9250(__int64* a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64* v5;
  char* v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  __int64* v21;
  int v22;
  int v23;
  int v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  const char* v28[2];
  struct {
    char* v29;
    __int64 v30;
    unsigned __int64 v31;
    unsigned __int64 v32;
    int v33;
    int v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
  } v29_;

  if (a2 == 0) {
    ui_LayoutAccessor_SetPaneVisible((__int64)a1, "Face", 0);
    v29_.v35 = -1;
    v29_.v36 = -1;
    v29_.v37 = -1;
    v29_.v38 = -1;
    v7 = *msg_MessageManager_instance__ptr[0];
    v29_.v39 = -1;
    v29_.v40 = -1;
    v29_.v41 = -1;
    v29_.v42 = -1;
    v29_.v43 = -1;
    v29_.v44 = -1;
    v29_.v45 = -1;
    v29_.v46 = -1;
    v29_.v29 = (char*)(GameData_212e348 + 2);
    v29_.v30 = 0xFFFF0001FFFF0000LL;
    v29_.v31 = 0xFFFF0004FFFF0002LL;
    v29_.v32 = 0xFFFF0006FFFF0005LL;
    v29_.v47 = 8;
    v29_.v33 = -65529;
    v29_.v34 = -65528;
    v8 = GameRoutine_a4dbe0(v7, "MID_Sys_ValueEmptyLong", 0);
    if (v8 != nullptr) {
      v9 = (__int64)v8;
      v10 = ui_LayoutAccessor_FindTextBox(a1, "L_Name/T_Txt");
      if (v10 != 0) {
        GameRoutine_156c5d0(v10, v9, 0);
      }
    }
    v28[0] = "L_ClassGroup";
    v28[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 4);
    GameRoutine_fa73c0((void*)(&v29_.v29), a1, v28);
    if (v29_.v30 != 0) {
      v11 = std___1___shared_weak_count_lock(v29_.v30);
      v12 = (__int64*)v29_.v29;
      if (v29_.v30 != 0) {
        std___1___shared_weak_count___release_weak(v29_.v30);
      }
      if (v11 != 0 && v12 != nullptr) {
        StatusClass_189ce00(v12);
        v13 = v12[135];
        if (v13 != 0 && (*(_BYTE*)(v13 + 88) & 1) != 0) {
          v29_.v29 = "Gauge";
          v29_.v30 = 5;
          v14 = Element_1886290((__int64)v12, (const char**)&v29_.v29);
          if (v14 != nullptr) {
            *((_BYTE*)v14 + 88) &= ~1u;
            ui_LayoutAccessor_SetPaneVisible((__int64)(v12 + 11), "GaugeBorder",
                                             1);
          }
        }
      }
      else if (v11 == 0) {
        goto LABEL_26;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak(v11);
      }
    }
  LABEL_26:
    v28[0] = "L_LvGroup";
    v28[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 1);
    GameRoutine_1572840((void*)(&v29_.v29), a1, v28);
    if (v29_.v30 == 0) {
      goto LABEL_36;
    }
    v15 = std___1___shared_weak_count_lock(v29_.v30);
    v16 = (__int64*)v29_.v29;
    if (v29_.v30 != 0) {
      std___1___shared_weak_count___release_weak(v29_.v30);
    }
    if (v15 != 0 && v16 != nullptr) {
      StatusLV_18a34f0(v16);
      v17 = v16[137];
      if (v17 != 0) {
        *(_BYTE*)(v17 + 88) &= ~1u;
        ui_LayoutAccessor_SetPaneVisible((__int64)(v16 + 11), "Border", 1);
      }
    }
    else if (v15 == 0) {
      goto LABEL_36;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak(v15);
    }
  LABEL_36:
    v28[0] = "L_HPGroup";
    v28[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 1);
    GameRoutine_1572700((void*)(&v29_.v29), a1, v28);
    if (v29_.v30 != 0) {
      v18 = std___1___shared_weak_count_lock(v29_.v30);
      v19 = v29_.v29;
      if (v29_.v30 != 0) {
        std___1___shared_weak_count___release_weak(v29_.v30);
      }
      if (v18 != 0 && v19 != nullptr) {
        StatusHP_18922b0(v19);
      }
      else if (v18 == 0) {
        goto LABEL_45;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak(v18);
      }
    }
  LABEL_45:
    LayoutAccessor_1560070((void*)(&v29_.v29), a1, "L_EquipItem");
    if (v29_.v30 != 0) {
      v20 = std___1___shared_weak_count_lock(v29_.v30);
      v21 = (__int64*)v29_.v29;
      if (v29_.v30 != 0) {
        std___1___shared_weak_count___release_weak(v29_.v30);
      }
      if (v20 != 0 && v21 != nullptr) {
        Util_15792c0(v21, (unsigned __int16*)game_g_empty_item_ptr, 1, 1u, 0,
                     "L_Icon", "T_Txt", 1);
        LayoutAccessor_1562cf0((__int64)v21,
                               (unsigned int*)"EquipEmptyDefault");
        goto LABEL_52;
      }
      if (v20 != 0) {
      LABEL_52:
        if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
          std___1___shared_weak_count___release_weak(v20);
        }
      }
    }
    ui_LayoutAccessor_SetPaneVisible((__int64)a1, "N_MagicEndure", 0);
    return;
  }
  ui_LayoutAccessor_SetPaneVisible((__int64)a1, "Face", 1);
  ui_LayoutAccessor_SetPaneVisible((__int64)a1, "L_ClassGroup/IconMax", 1);
  LayoutAccessor_1571860(a1, a2, 1, 0, 0, 0);
  LayoutAccessor_1560070((void*)(&v29_.v29), a1, "L_EquipItem");
  if (v29_.v30 != 0) {
    v4 = std___1___shared_weak_count_lock(v29_.v30);
    v5 = (__int64*)v29_.v29;
    if (v29_.v30 != 0) {
      std___1___shared_weak_count___release_weak(v29_.v30);
    }
    if (v4 != 0 && v5 != nullptr) {
      LayoutAccessor_1562cf0((__int64)v5, (unsigned int*)"Info");
      if (*(_WORD*)(a2 + 1952) != 0) {
        v29_.v29 = *(char**)(a2 + 1952);
        Util_15792c0(v5, (unsigned __int16*)&v29_.v29, 1, 1u, 0, "L_Icon",
                     "T_Txt", 1);
        v6 = "EquipDefault";
      }
      else {
        Util_15792c0(v5, (unsigned __int16*)game_g_empty_item_ptr, 1, 1u, 0,
                     "L_Icon", "T_Txt", 1);
        v6 = "EquipEmptyDefault";
      }
      LayoutAccessor_1562cf0((__int64)v5, (unsigned int*)v6);
    LABEL_57:
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v4);
      }
      goto LABEL_59;
    }
    if (v4 != 0) {
      goto LABEL_57;
    }
  }
LABEL_59:
  v22 = UnitItemList_710b30(a2 + 828);
  ui_LayoutAccessor_SetPaneVisible((__int64)a1, "N_MagicEndure", v22 > 0);
  if (v22 >= 1) {
    v23 = UnitItemList_710640(a2 + 828);
    v24 = UnitItemList_710b30(a2 + 828);
    if (v24 < 1) {
      v25 = 0;
    }
    else {
      v25 = (int)(float)((float)(100 * v23) / (float)(unsigned int)v24);
    }
    v26 = ui_LayoutAccessor_FindPane(a1, "T_MagicEndureNum");
    if (v26 != 0) {
      v27 = __dynamic_cast(v26, GameData_212d670[0], GameData_212d690, 0);
      if (v27 != 0) {
        GameRoutine_156c910(v27, "%d", 1, v25);
      }
    }
  }
}

void game_gameui_1718860(__int64 a1, const char* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[2];
  struct {
    __int64 v16;
    __int64 v17;
  } v16_;
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;
  struct {
    __int64 v20;
    __int64 v21;
  } v20_;

  v15[0] = a2;
  v15[1] = strlen(a2);
  v5 = *(_QWORD*)(a1 + 856);
  if (v5 != 0) {
    v6 = std___1___shared_weak_count_lock(v5);
    if (v6 != 0) {
      v7 = *(_QWORD*)(a1 + 848);
      v8 = v6;
      if (v7 != 0) {
        Layout_1363e00((void*)(&v16_.v16), v7, (__int64)v15);
        v18_.v18 = 0;
        v18_.v19 = 0;
        if (v16_.v17 != 0 &&
            (v9 = std___1___shared_weak_count_lock(v16_.v17), v18_.v19 = v9,
             v9 != 0) &&
            (v18_.v18 = v16_.v16, v16_.v16 != 0) &&
            (v10 = v9, (v11 = __dynamic_cast(v16_.v16, GameData_212dfc0[0],
                                             GameData_21300f0[0], 0)) != 0)) {
          v12 = &v18_.v18;
          v20_.v20 = v11;
          v20_.v21 = v10;
        }
        else {
          v12 = &v20_.v20;
        }
        *v12 = 0;
        v12[1] = 0;
        v2 = v20_.v20;
        v3 = v20_.v21;
        if (v20_.v21 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v20_.v21 + 16),
                                    1u, memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
            std___1___shared_weak_count___release_weak(v3);
          }
        }
        v13 = v18_.v19;
        if (v18_.v19 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v18_.v19 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak(v13);
        }
        if (v16_.v17 != 0) {
          std___1___shared_weak_count___release_weak(v16_.v17);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v7 == 0) {
          return;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v8);
        if (v7 == 0) {
          return;
        }
      }
      if (v3 != 0) {
        v14 = std___1___shared_weak_count_lock(v3);
        std___1___shared_weak_count___release_weak(v3);
        if (v14 != 0 && v2 != 0) {
          BlnPopup_19f1f60(v2);
        }
        else if (v14 == 0) {
          return;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
          std___1___shared_weak_count___release_weak(v14);
        }
      }
    }
  }
}

__int64 game_gameui_17aa8e0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64 v11[2];
    __int64 v12;
    __int64 v13;
  } v11_;

  if (*(_QWORD*)GameData_212d8a8[0] == 0) {
    *(_QWORD*)GameData_212d8a8[0] = a1;
    GameData_2264534 = 1;
  }
  *(_QWORD*)(a1 + 24) = 0;
  v2 = (__int64*)(a1 + 24);
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)a1 = game_gameui_MouseCursor_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = a1 + 56;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_DWORD*)(a1 + 104) = 1065353216;
  LayoutAccessor_155e140((__int64*)(a1 + 24));
  v3 = *(_QWORD*)(a1 + 8);
  if (v3 != 0) {
    *(_BYTE*)(v3 + 2376) = 1;
    v4 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 8) = 0;
    *(_QWORD*)(a1 + 16) = 0;
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
  GameRoutine_1366ac0((void*)(&v11_.v12), (__int64)"Layout/Common.arc",
                      (__int64)"Common_System_MouseCursor");
  v5 = v11_.v12;
  v6 = v11_.v13;
  v7 = *(_QWORD*)(a1 + 16);
  v11_.v12 = 0;
  v11_.v13 = 0;
  *(_QWORD*)(a1 + 8) = v5;
  *(_QWORD*)(a1 + 16) = v6;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  if (v11_.v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11_.v13 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11_.v13 + 16LL))(v11_.v13);
    std___1___shared_weak_count___release_weak(v11_.v13);
  }
  v8 = *(_QWORD*)(a1 + 8);
  v9 = *(_QWORD*)(a1 + 16);
  v11_.v11[0] = v8;
  v11_.v11[1] = v9;
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0(v2, v11_.v11);
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0(v2, v11_.v11);
  }
  ui_LayoutAccessor_SetPriority((__int64)v2, 1210);
  GameHr_1562680((__int64)v2, (unsigned int*)"Idle", 0x1.0000000000000p+0f);
  return LayoutAccessor_155e830((__int64)v2, 0);
}

__int64 game_gameui_17ba570(long double a1, long double a2)
{

#pragma clang fp contract(off)
  __int64 result;
  char v3;

  *(_QWORD*)&a1 = 0;
  result = GameRoutine_809fd0(0, a1, a2);
  if (game_ProcFadeView_instance_ != 0) {
    v3 = *(_BYTE*)(game_ProcFadeView_instance_ + 480);
    *(_BYTE*)(game_ProcFadeView_instance_ + 480) = 1;
    result = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      result = game_809ba0(game_ProcFadeView_instance_, 0x1.0000000000000p-2f);
      if (game_ProcFadeView_instance_ != 0) {
        *(_BYTE*)(game_ProcFadeView_instance_ + 480) = v3;
      }
    }
  }
  return result;
}

__int64 game_gameui_18a2660(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    _QWORD v13[2];
    __int64 v14;
    __int64 v15;
  } v13_;

  LayoutAccessor_155e140(a1 + 4);
  v6 = a1[2];
  if (v6 != 0) {
    *(_BYTE*)(v6 + 2376) = 1;
    v7 = a1[3];
    a1[2] = 0;
    a1[3] = 0;
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
  }
  GameRoutine_1366ac0((void*)(&v13_.v14), a2, a3);
  v8 = v13_.v14;
  v9 = v13_.v15;
  v10 = a1[3];
  v13_.v14 = 0;
  v13_.v15 = 0;
  a1[2] = v8;
  a1[3] = v9;
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  if (v13_.v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13_.v15 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13_.v15 + 16LL))(v13_.v15);
    std___1___shared_weak_count___release_weak(v13_.v15);
  }
  v11 = a1[3];
  v13_.v13[0] = a1[2];
  v13_.v13[1] = v11;
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0_alt1(a1 + 4, v13_.v13);
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0_alt1(a1 + 4, v13_.v13);
  }
  LayoutAccessor_155e830((__int64)(a1 + 4), 0);
  return GameHr_1562680_alt1((__int64)(a1 + 4), "Idle", 0x1.0000000000000p+0f);
}

void game_gameui_18a2880(__int64* a1)
{
  atomic_uchar* v2;
  __int64* v3;
  _QWORD* v4;
  __int64* v5;
  const char* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64* v11;
  struct {
    const char* v13;
    __int64 v14;
  } v13_;

  v2 = (atomic_uchar*)GameData_212dfd0;
  v3 = GameData_212dfc8;
  if (a1[10] != 0) {
    v13_.v13 = "Num";
    v13_.v14 = 3;
    v4 = Element_1886290((__int64)a1, &v13_.v13);
    if ((atomic_load_explicit(v2, memory_order_acquire) & 1) == 0 &&
        __cxa_guard_acquire((__int64)GameData_212dfd0) != 0) {
      *v3 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      __cxa_guard_release((__int64)GameData_212dfd0);
    }
    if (v4 != nullptr) {
      v5 = (__int64*)(*(__int64 (**)(_QWORD*))(*v4 + 16LL))(v4);
      if (v5 == v3) {
        goto LABEL_31;
      }
      do {
        v5 = (__int64*)*v5;
      } while (v5 != v3 && v5 != nullptr);
      if (v5 != nullptr) {
      LABEL_31:
        GameRoutine_9d52c0((void*)((__int64*)&v13_.v13), a1[10], (__int64)v4);
        v7 = v13_.v13;
        v8 = v13_.v14;
        v9 = a1[136];
        v13_.v13 = nullptr;
        v13_.v14 = 0;
        a1[135] = (__int64)v7;
        a1[136] = v8;
        if (v9 != 0) {
          std___1___shared_weak_count___release_weak(v9);
          if (v13_.v14 != 0) {
            std___1___shared_weak_count___release_weak(v13_.v14);
          }
        }
      }
    }
  }
  v13_.v13 = "Gauge";
  v13_.v14 = 5;
  v10 = Element_1886290((__int64)a1, &v13_.v13);
  if ((atomic_load_explicit(v2, memory_order_acquire) & 1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212dfd0) != 0) {
    *v3 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
    __cxa_guard_release((__int64)GameData_212dfd0);
  }
  if (v10 == nullptr) {
    goto LABEL_23;
  }
  v11 = (__int64*)(*(__int64 (**)(_QWORD*))(*v10 + 16LL))(v10);
  if (v11 != v3) {
    do {
      v11 = (__int64*)*v11;
    } while (v11 != v3 && v11 != nullptr);
    if (v11 == nullptr) {
    LABEL_23:
      v10 = nullptr;
    }
  }
  a1[137] = (__int64)v10;
}

void game_gameui_19adee0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64 v14;
    __int64 v15;
  } v14_;
  struct {
    _QWORD v16[6];
    int v17;
    char gap68_[4];
    __int64 v18;
    __int64 v19;
    __int64 v20;
  } v16_;

  v16_.v18 = 0;
  v16_.v19 = 0;
  v16_.v20 = 0;
  v16_.v17 = 0;
  v16_.v16[0] = 0x800000018LL;
  v16_.v16[1] = 0x500000030LL;
  v16_.v16[2] = 0x10000000100000LL;
  memset(&v16_.v16[3], 0, 24);
  game_1366bd0((void*)(&v14_.v14), (__int64)"Layout/Common.arc",
               (__int64)"Common_MovieCaption_All", (__int64)v16_.v16);
  v2 = v14_.v14;
  v3 = v14_.v15;
  v4 = a1[1];
  v14_.v14 = 0;
  v14_.v15 = 0;
  *a1 = v2;
  a1[1] = v3;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = v14_.v15;
  if (v14_.v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14_.v15 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = v16_.v18;
  if (v16_.v18 != 0) {
    v7 = v16_.v19;
    v8 = fw_memory_g_heap_manager_ptr;
    if (v16_.v18 == v16_.v19) {
      goto LABEL_18;
    }
    v9 = v16_.v19;
    do {
      v10 = *(_BYTE*)(v9 - 24);
      v9 -= 24;
      if ((v10 & 1) != 0) {
        v11 = *(_QWORD*)(v7 - 8);
        if (v11 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v12, v11);
        }
      }
      v7 = v9;
    } while (v9 != v6);
    v16_.v19 = v6;
    v6 = v16_.v18;
    if (v16_.v18 != 0) {
    LABEL_18:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v13, v6);
    }
  }
}

void game_gameui_19ae1e0(__int64 a1)
{
  int v1;
  float v3;
  int v4;
  float v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  int v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  float v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  __int64 v21;
  float v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  char v28;
  __int64 v29;
  float v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _BOOL4 v34;
  __int64 v35;
  __int64 v36;
  float v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _BOOL4 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  float v46;
  float v47;
  float v48;
  float v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned int v54;
  unsigned int v55;
  float v56;
  int v57;
  int v58;
  unsigned int v59;
  __int64 v60;
  __int64 v61;
  unsigned int v62;
  unsigned int v63;
  float v64;
  _QWORD v65[2];
  float v66[3];
  struct {
    __int64* v67;
    __int64 v68;
  } v67_;

  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((*(_BYTE*)(a1 + 252) & 1) == 0) {
    if (*(_QWORD*)a1 == 0 || *(_BYTE*)(*(_QWORD*)a1 + 24LL) != 1) {
      return;
    }
    v6 = *(_QWORD*)(a1 + 8);
    v65[0] = *(_QWORD*)a1;
    v65[1] = v6;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
      ui_LayoutAccessor_Setup_155dda0_alt1((_QWORD*)(a1 + 16), v65),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v6),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
      }
    }
    else {
      ui_LayoutAccessor_Setup_155dda0_alt1((_QWORD*)(a1 + 16), v65),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    ui_LayoutAccessor_SetPriority(a1 + 16, 2),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
    *(_BYTE*)(a1 + 252) = 1;
    v7 = GameData_2130610[0];
    v8 = *(_QWORD*)(*GameData_2130610[0] + 72) -
         *(_QWORD*)(*GameData_2130610[0] + 64);
    v9 = v8 >> 3;
    *(_BYTE*)(a1 + 254) = (int)(v8 >> 3) > 0;
    if ((int)(v8 >> 3) < 1) {
      return;
    }
    v10 = 0;
    do {
      v11 = game_util_Format("ScrollItem_%02d", v10),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
      LayoutAccessor_1560520((__int64*)(a1 + 16), (__int64)"L_ScrollPane",
                             "ack", (__int64)v11),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
      ++v10;
    } while ((_DWORD)v9 != v10);
    ui_LayoutAccessor_GetPaneSize((__int64*)(a1 + 16), "L_ScrollPane"),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
    v12 = (v8 >> 3) & 0x7FFFFFFF;
    v13 = 0;
    *(float*)(a1 + 244) = v14 + 0x1.0000000000000p+3f;
    do {
      v15 = game_util_Format("ScrollItem_%02d", v13),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
      LayoutAccessor_1560070((void*)(&v67_.v67), (__int64*)(a1 + 16), v15),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v67_.v68 != 0) {
        if (*(_QWORD*)(v67_.v68 + 8) != -1) {
          v16 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v7 + 64) + 8 * v13) + 32LL);
          v17 = std___1___shared_weak_count_lock(v67_.v68),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
          if (v17 != 0) {
            v18 = v17;
            LayoutAccessor_1562060_alt1((__int64)v67_.v67, (__int64)"T_Text",
                                        v16),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(float, "s1", "=w"));
            if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(float, "s1", "=w"));
              std___1___shared_weak_count___release_weak(v18),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(float, "s1", "=w"));
            }
          }
          else {
            LayoutAccessor_1562060_alt1(0, (__int64)"T_Text", v16),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(float, "s1", "=w"));
          }
          v19 = std___1___shared_weak_count_lock(v67_.v68),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
          v20 = *(float*)(a1 + 244);
          v21 = v19;
          v66[0] = 0x0.0p+0f;
          v66[2] = 0x0.0p+0f;
          v66[1] = -(float)(v20 * (float)(unsigned int)v13);
          v22 = ui_LayoutAccessor_SetTranslate(v67_.v67, (__int64)v66),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
          if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64, float))(*(_QWORD*)v21 + 16LL))(v21, v22),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(float, "s1", "=w"));
            std___1___shared_weak_count___release_weak(v21),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(float, "s1", "=w"));
          }
        }
        if (v67_.v68 != 0) {
          std___1___shared_weak_count___release_weak(v67_.v68),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(float, "s1", "=w"));
        }
      }
      ++v13;
    } while (v12 != v13);
    *(float*)(a1 + 248) =
        (float)((float)((float)(*(float*)(a1 + 244) * (float)(unsigned int)v9) +
                        0x1.4000000000000p+8f) +
                -0x1.0e00000000000p+10f) +
        0x1.9000000000000p+7f;
    v23 = ui_LayoutAccessor_FindPartsLayout((__int64*)(a1 + 16),
                                            (__int64)"L_ScrollBar"),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v23 != 0) {
      v24 = v23;
      v25 = *(_QWORD*)(a1 + 24);
      if (v25 != 0 && (v26 = std___1___shared_weak_count_lock(v25)) != 0) {
        v27 = v26;
        v28 = 0;
        v67_.v67 = *(__int64**)(a1 + 16);
        v67_.v68 = v26;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                                  memory_order_relaxed);
      }
      else {
        v27 = 0;
        v67_.v67 = nullptr;
        v67_.v68 = 0;
        v28 = 1;
      }
      ui_LayoutAccessor_Setup_155dea0((_QWORD*)(a1 + 120), &v67_.v67, v24),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
      v35 = v67_.v68;
      if (v67_.v68 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v67_.v68 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v35),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      if ((v28 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v27),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      if (*(_QWORD*)(a1 + 136) != 0) {
        v36 = *(_QWORD*)(a1 + 128);
        if (v36 != 0) {
          v37 = *(float*)(a1 + 248);
          v38 = std___1___shared_weak_count_lock(v36),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
          if (v38 == 0) {
            goto LABEL_76;
          }
          v39 = *(_QWORD*)(a1 + 120);
          if (v39 != 0) {
            LODWORD(v35) = *(unsigned __int8*)(v39 + 24);
            v40 = v39 + 152;
            if ((_DWORD)v35 == 0) {
              v40 = 0;
            }
            v41 = v40 != *(_QWORD*)(a1 + 136);
          }
          else {
            v41 = true;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v50 = v38;
            (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(float, "s1", "=w"));
            std___1___shared_weak_count___release_weak(v50),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(float, "s1", "=w"));
          }
          if (!v41) {
            if ((v35 & 1) == 0) {
              goto LABEL_88;
            }
          }
          else {
          LABEL_76:
            v51 = *(_QWORD*)(a1 + 128);
            if (v51 == 0 || *(_QWORD*)(v51 + 8) == -1) {
              goto LABEL_88;
            }
          }
          LayoutAccessor_155e830(a1 + 120, 1),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          v52 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 120),
                                                (__int64)"Frm"),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
          if (v52 == 0) {
            goto LABEL_84;
          }
          v53 =
              __dynamic_cast(v52, GameData_212d670[0], GameData_212fc70[0], 0),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
          if (v53 == 0) {
            goto LABEL_84;
          }
          LOWORD(v54) = *(_WORD*)(v53 + 222);
          LOWORD(v55) = *(_WORD*)(v53 + 224);
          v56 = *(float*)(v53 + 84) * 0x1.0000000000000p-1f;
          v57 = (int)(float)((float)v54 - v56);
          v58 = (int)(float)(v56 - (float)v55);
          *(_DWORD*)(a1 + 224) = v57;
          *(_DWORD*)(a1 + 228) = v58;
          v59 = ((v58 - v57) / (int)v9) & ~(((v58 - v57) / (int)v9) >> 31);
          *(_DWORD*)(a1 + 232) = v59;
          if ((float)(v37 + -0x1.4000000000000p+8f) >= (float)v59) {
            *(_DWORD*)(a1 + 224) = v59 + v57;
          LABEL_84:
            v60 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 120),
                                                  (__int64)"Box"),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
            if (v60 != 0) {
              v61 = __dynamic_cast(v60, GameData_212d670[0],
                                   GameData_212fc70[0], 0),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(float, "s1", "=w"));
              if (v61 != 0) {
                LOWORD(v62) = *(_WORD*)(v61 + 222);
                LOWORD(v63) = *(_WORD*)(v61 + 224);
                v64 = (float)*(int*)(a1 + 232);
                *(_BYTE*)(v61 + 88) |= 0x10u;
                *(float*)(v61 + 84) = (float)((float)v62 + v64) + (float)v63;
              }
            }
            *(_DWORD*)(a1 + 232) = *(_DWORD*)(a1 + 228);
            goto LABEL_88;
          }
          LayoutAccessor_155e830(a1 + 120, 0),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(float, "s1", "=w"));
        }
      }
    }
  LABEL_88:
    LayoutAccessor_155e830(a1 + 16, 0),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
    return;
  }
  if (*(_BYTE*)(a1 + 254) == 1) {
    if (*(_BYTE*)(a1 + 255) == 1 &&
        (LayoutAccessor_1563280((__int64*)(a1 + 16), (__int64)"FadeOut", 0) &
         1) == 0) {
      LayoutAccessor_155e830(a1 + 16, 0),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
      *(_BYTE*)(a1 + 255) = 0;
    }
    if (*(_BYTE*)(a1 + 253) == 1) {
      v3 = 0x1.8000000000000p+5f;
      v4 = *(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 944LL);
      if ((v4 & 8) == 0) {
        v3 = 0x1.0000000000000p+4f;
      }
      if ((v4 & 0x88000) != 0) {
        v5 = *(float*)(a1 + 240) - v3;
      }
      else {
        v5 = *(float*)(a1 + 240);
        if ((v4 & 0x110000) == 0) {
        LABEL_39:
          if (*(_QWORD*)(a1 + 136) == 0) {
            goto LABEL_71;
          }
          v29 = *(_QWORD*)(a1 + 128);
          if (v29 == 0) {
            goto LABEL_71;
          }
          v30 = *(float*)(a1 + 248);
          v31 = std___1___shared_weak_count_lock(v29),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
          if (v31 == 0) {
            goto LABEL_64;
          }
          v32 = *(_QWORD*)(a1 + 120);
          if (v32 != 0) {
            v1 = *(unsigned __int8*)(v32 + 24);
            v33 = v32 + 152;
            if (v1 == 0) {
              v33 = 0;
            }
            v34 = v33 != *(_QWORD*)(a1 + 136);
          }
          else {
            v34 = true;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v42 = v31;
            (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(float, "s1", "=w"));
            std___1___shared_weak_count___release_weak(v42),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(float, "s1", "=w"));
          }
          if (!v34) {
            if ((v1 & 1) == 0) {
            LABEL_71:
              v47 = *(float*)(a1 + 240);
              v48 = *(float*)(a1 + 248);
              LODWORD(v67_.v67) = 0;
              LODWORD(v67_.v68) = 0;
              v49 = fminf(fmaxf(v47, 0x1.4000000000000p+8f), v48);
              *(float*)(a1 + 240) = v49;
              *((float*)&v67_.v67 + 1) = v49;
              ui_LayoutAccessor_SetPaneTranslate(
                  (__int64*)(a1 + 16), (__int64)"ack", (__int64)&v67_.v67),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(float, "s1", "=w"));
              return;
            }
          }
          else {
          LABEL_64:
            v43 = *(_QWORD*)(a1 + 128);
            if (v43 == 0 || *(_QWORD*)(v43 + 8) == -1) {
              goto LABEL_71;
            }
          }
          v44 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 120),
                                                (__int64)"Box"),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
          if (v44 != 0) {
            v45 = __dynamic_cast(v44, GameData_212d670[0], GameData_212fc70[0],
                                 0),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
            if (v45 != 0) {
              v46 = -(
                  float)((float)(*(_DWORD*)(a1 + 228) - *(_DWORD*)(a1 + 224)) *
                         fminf(fmaxf((float)(v5 + -0x1.4000000000000p+8f) /
                                         (float)(v30 + -0x1.4000000000000p+8f),
                                     0x0.0p+0f),
                               0x1.0000000000000p+0f));
              *(_BYTE*)(v45 + 88) |= 0x10u;
              *(float*)(v45 + 52) = v46;
            }
          }
          goto LABEL_71;
        }
        v5 = v3 + v5;
      }
      *(float*)(a1 + 240) = v5;
      goto LABEL_39;
    }
  }
}

__int64 game_gameui_19aeaf0(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v11[2];
    __int64 v12;
    __int64 v13;
  } v11_;

  if (*(_QWORD*)GameData_212d6e0[0] == 0) {
    *(_QWORD*)GameData_212d6e0[0] = a1;
    GameData_2272248 = 1;
  }
  *(_QWORD*)(a1 + 24) = 0;
  v2 = (_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)a1 = game_gameui_SavingIcon_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = a1 + 56;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_DWORD*)(a1 + 104) = 1065353216;
  LayoutAccessor_155e140((__int64*)(a1 + 24));
  v3 = *(_QWORD*)(a1 + 8);
  if (v3 != 0) {
    *(_BYTE*)(v3 + 2376) = 1;
    v4 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 8) = 0;
    *(_QWORD*)(a1 + 16) = 0;
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
  GameRoutine_1366ac0((void*)(&v11_.v12), (__int64)"Layout/Common.arc",
                      (__int64)"Common_IconSave");
  v5 = v11_.v12;
  v6 = v11_.v13;
  v7 = *(_QWORD*)(a1 + 16);
  v11_.v12 = 0;
  v11_.v13 = 0;
  *(_QWORD*)(a1 + 8) = v5;
  *(_QWORD*)(a1 + 16) = v6;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  if (v11_.v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11_.v13 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11_.v13 + 16LL))(v11_.v13);
    std___1___shared_weak_count___release_weak(v11_.v13);
  }
  v8 = *(_QWORD*)(a1 + 8);
  v9 = *(_QWORD*)(a1 + 16);
  v11_.v11[0] = v8;
  v11_.v11[1] = v9;
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0_alt1(v2, v11_.v11);
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0_alt1(v2, v11_.v11);
  }
  ui_LayoutAccessor_SetPriority((__int64)v2, 1310);
  LayoutAccessor_155e830((__int64)v2, 0);
  return LayoutAccessor_1563030((__int64)v2, 0, 0);
}

#pragma GCC visibility pop
