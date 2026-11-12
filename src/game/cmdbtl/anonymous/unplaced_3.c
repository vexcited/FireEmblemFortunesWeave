#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* game_UnitPool_Find_6ead60(__int64*, _DWORD*);
_QWORD* ui_LayoutAccessor_Setup_155dda0(__int64*, __int64*);
__attribute__((swiftcall)) void GameRoutine_1572840(PSEUDO_X8, __int64*,
                                                    const char**);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 Alignment_56b600(__int64 result);
__int64 AutoPlay_f83060();
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameHr_155d480(__int64 result, const char*, const char*);
__int64 GameHr_1562680(__int64 result, unsigned int*, float);
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameRoutine_155da20(__int64 result, float);
__int64 GameRoutine_1585290(__int64*, const char*, const char*);
__int64 GameRoutine_1595c40(__int64, const char*);
__int64 GameRoutine_16247c0(__int64 result, int, char);
__int64 GameRoutine_1627ea0(__int64, __int64, int);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 StatusLV_18a30a0(__int64 result, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_UnitPool_GetFirst(int*);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
__int64 ui_LayoutAccessor_IsPaneVisible(__int64*, const char*);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, const char*, char);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
extern _UNKNOWN GameData_1adb75f;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* GameData_212ea58;
extern __int64* GameData_212f4e0[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_21c9608;
extern __int64 GameData_21ca310;
extern __int64 GameData_225ca88;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char* GameData_206d3e8[3];
float GameRoutine_155db10(__int64*);
void* GameHr_67ed20(_QWORD*);
void* game_97b2f0(__int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_1591240(__int64*, char, char, __int64**);
void GameRoutine_190a0c0(float*, __int64, float*, _QWORD*, __int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_740050();
void game_menu_PageTab_Update(int*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_cmdbtl_anonymous_1625100();
_QWORD* game_cmdbtl_anonymous_16268a0(_QWORD* result);
void game_cmdbtl_anonymous_16278c0(__int64 result);
void game_cmdbtl_anonymous_1628590(__int64 a1, int a2, int a3, int a4);
void game_cmdbtl_anonymous_1628980(__int64* a1, char a2);

void game_cmdbtl_anonymous_1625100()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  int i;
  char* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  struct {
    __int64 v19;
    void* v20;
  } v19_;

  v0 = GameData_225ca88;
  if (GameData_225ca88 == 0) {
    return;
  }
  v1 = *(_QWORD*)(GameData_225ca88 + 1912);
  v2 = *(_QWORD*)(GameData_225ca88 + 1896);
  *(_DWORD*)(GameData_225ca88 + 1904) = 0;
  *(_QWORD*)(v0 + 1960) = 0;
  *(_QWORD*)(v0 + 1920) = v1;
  *(_QWORD*)(v0 + 1944) = *(_QWORD*)(v0 + 1936);
  if (v2 == 0) {
    goto LABEL_24;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_24;
  }
  v4 = *(__int64**)(v0 + 1888);
  v5 = v3;
  if (v4 == nullptr) {
    goto LABEL_22;
  }
  for (i = 0; i != 10; ++i) {
    v7 = game_util_Format("L_Destination%02d", i);
    LayoutAccessor_1560070((void*)(&v19_.v19), v4, v7);
    if (v19_.v20 == nullptr) {
      continue;
    }
    v8 = std___1___shared_weak_count_lock((__int64)v19_.v20);
    v9 = (__int64*)v19_.v19;
    if (v19_.v20 != nullptr) {
      std___1___shared_weak_count___release_weak((__int64)v19_.v20);
    }
    if (v8 != 0 && v9 != nullptr) {
      ui_LayoutAccessor_SetPaneVisible((__int64)v9, "T_Txt", 1);
      LayoutAccessor_1562cf0((__int64)v9, (unsigned int*)"Type_Default");
      v10 = ui_LayoutAccessor_FindPane(v9, "Bg");
      if (v10 != 0) {
        v11 = __dynamic_cast(v10, GameData_212d670[0], GameData_212d678[0], 0);
        if (v11 != 0) {
          *(_BYTE*)(v11 + 88) |= 1u;
        }
      }
      LayoutAccessor_155e830((__int64)v9, 0);
      ui_LayoutAccessor_SetPaneVisible((__int64)v9, "IconPosStatus", 0);
    }
    else if (v8 == 0) {
      continue;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
  }
  ui_LayoutAccessor_SetPaneVisible((__int64)v4, "T_Start", 0);
  v12 = ui_LayoutAccessor_FindPane(v4, "Start_Bg");
  if (v12 != 0) {
    v13 = __dynamic_cast(v12, GameData_212d670[0], GameData_212d678[0], 0);
    if (v13 != 0) {
      *(_BYTE*)(v13 + 88) &= ~1u;
    }
  }
LABEL_22:
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
LABEL_24:
  *(_BYTE*)(v0 + 1908) = 0;
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v14 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 200LL);
    if (v14 != 0) {
      v15 = *(_QWORD*)(v14 + 8);
      v16 = *(_QWORD*)(v14 + 16);
      if (v16 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v15 != 0) {
        v19_.v20 = &GameData_1adb75f;
        v19_.v19 = game_HashString((__int64)&GameData_1adb75f);
        v17 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v18 = game_GameVariableTable_Find(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)&v19_.v19);
          v17 = v18 != 0 && (signed __int32)*(_DWORD*)(v18 + 32) > 0;
        }
        *(_BYTE*)(v0 + 1908) = v17;
      }
      if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        std___1___shared_weak_count___release_weak(v16);
      }
    }
  }
}

_QWORD* game_cmdbtl_anonymous_16268a0(_QWORD* result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  char v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int8* v38;
  unsigned int v39;
  struct {
    __int64 v40;
    __int64 v41;
  } v40_;
  struct {
    __int64 v42;
    __int64 v43;
  } v42_;
  __int64 v44[2];
  struct {
    __int64* v45;
    __int64 v46;
    unsigned __int64 v47;
    unsigned __int64 v48;
    int v49;
    int v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
  } v45_;
  float v64;
  _QWORD v65[3];

  v3 = result[20];
  if (*(_BYTE*)(v3 + 24) != 1) {
    return result;
  }
  v65[1] = v1;
  v65[2] = v2;
  v4 = result[21];
  v5 = (__int64)result;
  v44[0] = v3;
  v44[1] = v4;
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0(result + 22, v44);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0(result + 22, v44);
  }
  GameRoutine_16247c0(v5, *(_DWORD*)(v5 + 152), 1);
  GameRoutine_1627ea0(v5 + 280, v5 + 176, 0);
  GameRoutine_1627ea0(v5 + 1352, v5 + 176, 2);
  GameRoutine_1627ea0(v5 + 816, v5 + 176, 1);
  LayoutAccessor_1560070((void*)(&v42_.v42), (__int64*)(v5 + 176),
                         "L_DestinationBar");
  v7 = v42_.v42;
  v6 = v42_.v43;
  if (v42_.v43 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v42_.v43 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(v5 + 1888) = v7;
  v8 = *(_QWORD*)(v5 + 1896);
  *(_QWORD*)(v5 + 1896) = v6;
  if (v8 != 0) {
    std___1___shared_weak_count___release_weak(v8);
    v6 = v42_.v43;
  }
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak(v6);
  }
  LayoutAccessor_1560070((void*)(&v40_.v40), (__int64*)(v5 + 176),
                         "L_FieldKill");
  GameRoutine_1595c40((__int64)&v40_.v40, "MID_Dungeon_FieldKill");
  if (v40_.v41 != 0) {
    std___1___shared_weak_count___release_weak(v40_.v41);
  }
  LayoutAccessor_1560070((void*)(&v45_.v45), (__int64*)(v5 + 176), "L_Open");
  if (v45_.v46 != 0) {
    v9 = std___1___shared_weak_count_lock(v45_.v46);
    v10 = v45_.v45;
    if (v45_.v46 != 0) {
      std___1___shared_weak_count___release_weak(v45_.v46);
    }
    if (v9 != 0 && v10 != nullptr) {
      LayoutAccessor_1562cf0((__int64)v10, (unsigned int*)"Unopen");
      v45_.v51 = -1;
      v45_.v52 = -1;
      v45_.v53 = -1;
      v45_.v54 = -1;
      v11 = *msg_MessageManager_instance__ptr[0];
      v45_.v55 = -1;
      v45_.v56 = -1;
      v45_.v57 = -1;
      v45_.v58 = -1;
      v45_.v59 = -1;
      v45_.v60 = -1;
      v45_.v61 = -1;
      v45_.v62 = -1;
      v45_.v45 = GameData_212e348 + 2;
      v45_.v46 = 0xFFFF0001FFFF0000LL;
      v45_.v47 = 0xFFFF0004FFFF0002LL;
      v45_.v48 = 0xFFFF0006FFFF0005LL;
      v45_.v63 = 8;
      v45_.v49 = -65529;
      v45_.v50 = -65528;
      v12 = GameRoutine_a4dbe0(
          v11, "MID_Gmap_SpotInfo_Dungeon_Traverse_CanTraverse", 0);
      if (v12 != nullptr) {
        v13 = (__int64)v12;
        v14 = ui_LayoutAccessor_FindTextBox(v10, "T_Txt");
        if (v14 != 0) {
          GameRoutine_156c5d0(v14, v13, 0);
        }
      }
      v15 = ui_LayoutAccessor_FindTextBox(v10, "T_Txt");
      if (v15 != 0) {
        v16 = v15;
        v17 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v10, "T_Txt");
        if (v17 != nullptr) {
          GameRoutine_190a0c0((float*)&v45_.v45, (__int64)v65, &v64, v17,
                              v17[27]);
          v18 = v65[0];
        }
        else {
          v18 = 0;
        }
        v19 = *(_BYTE*)(v16 + 88);
        *(_QWORD*)(v16 + 80) = v18;
        *(_BYTE*)(v16 + 88) = v19 | 0x10;
      }
      GameRoutine_1585290(v10, "A_Txt", "Bg");
    }
    else if (v9 == 0) {
      goto LABEL_32;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    }
  }
LABEL_32:
  LayoutAccessor_1560070((void*)(&v45_.v45), (__int64*)(v5 + 176),
                         "L_Treasure");
  if (v45_.v46 != 0) {
    v20 = std___1___shared_weak_count_lock(v45_.v46);
    v21 = v45_.v45;
    if (v45_.v46 != 0) {
      std___1___shared_weak_count___release_weak(v45_.v46);
    }
    if (v20 != 0 && v21 != nullptr) {
      v22 = ui_LayoutAccessor_FindTextBox(v21, "T_Remaining");
      if (v22 != 0) {
        v23 = v22;
        v24 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v21, "T_Remaining");
        if (v24 != nullptr) {
          GameRoutine_190a0c0((float*)&v45_.v45, (__int64)v65, &v64, v24,
                              v24[27]);
          v25 = v65[0];
        }
        else {
          v25 = 0;
        }
        v26 = *(_BYTE*)(v23 + 88);
        *(_QWORD*)(v23 + 80) = v25;
        *(_BYTE*)(v23 + 88) = v26 | 0x10;
      }
      v27 = ui_LayoutAccessor_FindTextBox(v21, "T_Complete");
      if (v27 != 0) {
        v28 = v27;
        v29 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v21, "T_Complete");
        if (v29 != nullptr) {
          GameRoutine_190a0c0((float*)&v45_.v45, (__int64)v65, &v64, v29,
                              v29[27]);
          v30 = v65[0];
        }
        else {
          v30 = 0;
        }
        v31 = *(_BYTE*)(v28 + 88);
        *(_QWORD*)(v28 + 80) = v30;
        *(_BYTE*)(v28 + 88) = v31 | 0x10;
      }
      goto LABEL_49;
    }
    if (v20 != 0) {
    LABEL_49:
      if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        std___1___shared_weak_count___release_weak(v20);
      }
    }
  }
  ui_LayoutAccessor_SetPaneVisible(v5 + 176, "N_FieldKill", 0);
  ui_LayoutAccessor_SetPaneVisible(v5 + 176, "L_Open", 0);
  ui_LayoutAccessor_SetPaneVisible(v5 + 176, "L_Treasure", 0);
  v32 = ui_LayoutAccessor_FindAlignment((__int64*)(v5 + 176), "A_Info");
  if (v32 != 0) {
    Alignment_56b600(v32);
    v33 = *(_QWORD*)(v5 + 184);
    if (v33 != 0) {
      v34 = std___1___shared_weak_count_lock(v33);
      if (v34 != 0) {
        v35 = v34;
        v36 = *(_QWORD*)(v5 + 176);
        if (v36 != 0) {
          ControlCreator_13633c0(v36);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
          std___1___shared_weak_count___release_weak(v35);
        }
      }
    }
  }
  result =
      (_QWORD*)ui_LayoutAccessor_FindAlignment((__int64*)(v5 + 176), "A_Help");
  if (result != nullptr) {
    Alignment_56b600((__int64)result);
    result = *(_QWORD**)(v5 + 184);
    if (result != nullptr) {
      result = (_QWORD*)std___1___shared_weak_count_lock((__int64)result);
      if (result != nullptr) {
        v37 = (__int64)result;
        result = *(_QWORD**)(v5 + 176);
        if (result != nullptr) {
          result = (_QWORD*)ControlCreator_13633c0((__int64)result);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
          result = (_QWORD*)std___1___shared_weak_count___release_weak(v37);
        }
      }
    }
  }
  v38 = *(unsigned __int8**)(v5 + 16);
  if (v38 != nullptr) {
    v39 = *v38;
    if (v39 <= 0x10 && ((1 << v39) & 0x1CE00) != 0) {
      *(_WORD*)(v5 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(v5 + 136) |= 8u;
  return result;
}

void game_cmdbtl_anonymous_16278c0(__int64 result)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _BOOL4 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64* v19;
  void* v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  const char* v24[2];
  struct {
    __int64 v25;
    __int64 v26;
  } v25_;

  if (*GameData_212f4e0[0] == 0) {
    v5 = "RandomOn";
    goto LABEL_36;
  }
  v2 = *GameData_212ea58;
  v3 = *(__int64**)(*GameData_212ea58 + 712);
  v4 = *(__int64**)(*GameData_212ea58 + 720);
  if (v3 == v4) {
    v5 = "RandomOn_Disable";
    v7 = *(_QWORD*)(*(_QWORD*)(result + 16) + 400LL);
    if ((v7 & 0x100000000LL) == 0) {
      goto LABEL_36;
    }
  }
  else {
    v5 = "RandomOn_Disable";
    while (1) {
      v6 = *v3;
      v3 += 2;
      if (*(_BYTE*)(v6 + 190) == 1) {
        break;
      }
      if (v3 == v4) {
        goto LABEL_35;
      }
    }
    v5 = "RandomOn";
  LABEL_35:
    v7 = *(_QWORD*)(*(_QWORD*)(result + 16) + 400LL);
    if ((v7 & 0x100000000LL) == 0) {
    LABEL_36:
      if ((*(_BYTE*)(result + 170) & 1) != 0) {
        return;
      }
      goto LABEL_37;
    }
  }
  if ((v7 & 0x80000000) != 0 || (int)AutoPlay_f83060() <= (int)v7) {
    v9 = 0;
    goto LABEL_25;
  }
  v8 = (__int64*)(*(_QWORD*)(v2 + 712) + 16 * (v7 & 0x7FFFFFFF));
  v9 = v8[1];
  if (v9 == 0) {
  LABEL_25:
    LOBYTE(v11) = 1;
  LABEL_26:
    v12 = false;
    *(_BYTE*)(result + 168) = 1;
    goto LABEL_27;
  }
  v10 = *v8;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                            memory_order_relaxed);
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  v11 = std___1___shared_weak_count_lock(v9);
  if (v11 == 0) {
    goto LABEL_26;
  }
  v12 = v10 != 0;
  if (v10 != 0) {
    v13 = ui_LayoutAccessor_FindPane(*(__int64**)result, "Face");
    if (v13 != 0) {
      v13 = __dynamic_cast(v13, GameData_212d670[0], GameData_212d678[0], 0);
    }
    GameHr_1840740(v13, 0, *(_QWORD*)(v10 + 16), 6u, 1);
    v14 = *(__int64**)result;
    v24[0] = "L_Lv";
    v24[1] = (_BYTE*)((_UNKNOWN*)0x4LL);
    GameRoutine_1572840((void*)(&v25_.v25), v14, v24);
    if (v25_.v26 == 0) {
      goto LABEL_43;
    }
    v15 = std___1___shared_weak_count_lock(v25_.v26);
    v16 = v25_.v25;
    if (v25_.v26 != 0) {
      std___1___shared_weak_count___release_weak(v25_.v26);
    }
    if (v15 != 0 && v16 != 0) {
      StatusLV_18a30a0(v16, *(_QWORD*)(v10 + 16));
    }
    else if (v15 == 0) {
    LABEL_43:
      v18 = *(_QWORD*)(v10 + 16);
      v19 = *(__int64**)result;
      if (*(_BYTE*)(v18 + 2136) != 0) {
        v20 = game_97b2f0(v18 + 2104);
      }
      else {
        v20 = GameHr_67ed20(*(_QWORD**)(v18 + 392));
      }
      v21 = (__int64)v20;
      if (v20 != nullptr) {
        v22 = ui_LayoutAccessor_FindTextBox(v19, "L_UnitName/T_Txt");
        if (v22 != 0) {
          GameRoutine_156c5d0(v22, v21, 0);
        }
      }
      if (*(_BYTE*)(v10 + 190) != 0) {
        v23 = "FaceOn";
      }
      else {
        v23 = "FaceOn_Disable";
      }
      GameHr_1562680(*(_QWORD*)result, (unsigned int*)v23,
                     0x1.0000000000000p+0f);
      goto LABEL_53;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak(v15);
    }
    goto LABEL_43;
  }
  *(_BYTE*)(result + 168) = 1;
LABEL_53:
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  LOBYTE(v11) = 0;
LABEL_27:
  if ((ui_LayoutAccessor_IsPaneVisible(*(__int64**)result, "L_PageTab") & 1) !=
      0) {
    v17 = *(_DWORD*)(result + 36);
    if (v17 != (_DWORD)v7 + 1) {
      *(_DWORD*)(result + 36) = v7 + 1;
      *(_DWORD*)(result + 40) = v17;
      game_menu_PageTab_Update((int*)(result + 32));
    }
  }
  if ((v11 & 1) == 0) {
    std___1___shared_weak_count___release_weak(v9);
  }
  if (((v12 | *(unsigned __int8*)(result + 170)) & 1) == 0) {
  LABEL_37:
    LayoutAccessor_1562cf0(*(_QWORD*)result, (unsigned int*)v5);
  }
}

void game_cmdbtl_anonymous_1628590(__int64 a1, int a2, int a3, int a4)
{

#pragma clang fp contract(off)
  int v4;
  float v9;
  char* v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BOOL4 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  float v22;
  float v23;
  __int64 v24;
  float v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _BOOL4 v29;
  float v30;
  __int64 v31;
  float v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _BOOL4 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  float v41;
  __int64 v42;
  float v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _BOOL4 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;

  v9 = GameRoutine_155db10((__int64*)a1);
  v10 = game_util_Format("%s_InsideChange",
                         GameData_206d3e8[*(unsigned int*)(a1 + 528)]);
  if (a4 <= 100) {
    v11 = 100;
  }
  else {
    v11 = a4;
  }
  if (v11 >= 500) {
    v12 = 500;
  }
  else {
    v12 = v11;
  }
  if (*(_QWORD*)(a1 + 16) == 0) {
    goto LABEL_24;
  }
  v13 = *(_QWORD*)(a1 + 8);
  if (v13 == 0) {
    goto LABEL_24;
  }
  v14 = std___1___shared_weak_count_lock(v13);
  if (v14 == 0) {
    goto LABEL_17;
  }
  v15 = *(_QWORD*)a1;
  if (*(_QWORD*)a1 != 0) {
    v4 = *(unsigned __int8*)(v15 + 24);
    v16 = v15 + 152;
    if (v4 == 0) {
      v16 = 0;
    }
    v17 = v16 != *(_QWORD*)(a1 + 16);
  }
  else {
    v17 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v17) {
    LABEL_17:
      v18 = *(_QWORD*)(a1 + 8);
      if (v18 == 0 || *(_QWORD*)(v18 + 8) == -1) {
        goto LABEL_24;
      }
      goto LABEL_22;
    }
  }
  else {
    v19 = v14;
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v19);
    if (v17) {
      goto LABEL_17;
    }
  }
  if ((v4 & 1) != 0) {
  LABEL_22:
    v20 = *(_QWORD*)(a1 + 104);
    if (v20 != 0) {
      *(float*)(v20 + 32) =
          (float)((float)(unsigned int)(v12 - 100) / 0x1.9000000000000p+8f) *
          v9;
    }
  }
LABEL_24:
  v21 = (__int64*)(a1 + 352);
  if (a3 > a2) {
    GameHr_155d480(a1 + 352, "GaugeChangeType_Heal", v10);
    GameHr_155d480(a1 + 352, "GaugeChangeUp", v10);
    GameRoutine_155da20(a1 + 352, 0x0.0p+0f);
    v22 = GameRoutine_155db10((__int64*)(a1 + 352));
    v23 = (float)a4;
    if (*(_QWORD*)(a1 + 368) == 0) {
      goto LABEL_55;
    }
    v24 = *(_QWORD*)(a1 + 360);
    if (v24 == 0) {
      goto LABEL_55;
    }
    v25 = v22;
    v26 = std___1___shared_weak_count_lock(v24);
    if (v26 != 0) {
      v27 = *v21;
      if (*v21 != 0) {
        a4 = *(unsigned __int8*)(v27 + 24);
        v28 = v27 + 152;
        if (a4 == 0) {
          v28 = 0;
        }
        v29 = v28 != *(_QWORD*)(a1 + 368);
      }
      else {
        v29 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v29) {
          goto LABEL_42;
        }
      }
      else {
        v39 = v26;
        (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
        std___1___shared_weak_count___release_weak(v39);
        if (v29) {
          goto LABEL_42;
        }
      }
      if ((a4 & 1) == 0) {
      LABEL_55:
        v21 = (__int64*)(a1 + 176);
        goto LABEL_56;
      }
    LABEL_53:
      v40 = *(_QWORD*)(a1 + 456);
      if (v40 != 0) {
        *(float*)(v40 + 32) = (float)((float)a3 / v23) * v25;
      }
      goto LABEL_55;
    }
  LABEL_42:
    v37 = *(_QWORD*)(a1 + 360);
    if (v37 == 0 || *(_QWORD*)(v37 + 8) == -1) {
      goto LABEL_55;
    }
    goto LABEL_53;
  }
  GameHr_155d480(a1 + 352, "GaugeChangeType_Damage", v10);
  GameHr_155d480(a1 + 352, "GaugeChangeUp", v10);
  GameRoutine_155da20(a1 + 352, 0x0.0p+0f);
  v30 = GameRoutine_155db10((__int64*)(a1 + 176));
  v23 = (float)a4;
  if (*(_QWORD*)(a1 + 192) != 0) {
    v31 = *(_QWORD*)(a1 + 184);
    if (v31 != 0) {
      v32 = v30;
      v33 = std___1___shared_weak_count_lock(v31);
      if (v33 != 0) {
        v34 = *(_QWORD*)(a1 + 176);
        if (v34 != 0) {
          LODWORD(v10) = *(unsigned __int8*)(v34 + 24);
          v35 = v34 + 152;
          if ((_DWORD)v10 == 0) {
            v35 = 0;
          }
          v36 = v35 != *(_QWORD*)(a1 + 192);
        }
        else {
          v36 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v36) {
            goto LABEL_48;
          }
        }
        else {
          v51 = v33;
          (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
          std___1___shared_weak_count___release_weak(v51);
          if (v36) {
            goto LABEL_48;
          }
        }
        if (((unsigned __int8)v10 & 1) == 0) {
          goto LABEL_56;
        }
      LABEL_76:
        v52 = *(_QWORD*)(a1 + 280);
        if (v52 != 0) {
          *(float*)(v52 + 32) = (float)((float)a3 / v23) * v32;
        }
        goto LABEL_56;
      }
    LABEL_48:
      v38 = *(_QWORD*)(a1 + 184);
      if (v38 == 0 || *(_QWORD*)(v38 + 8) == -1) {
        goto LABEL_56;
      }
      goto LABEL_76;
    }
  }
LABEL_56:
  v41 = GameRoutine_155db10(v21);
  if (v21[2] != 0) {
    v42 = v21[1];
    if (v42 != 0) {
      v43 = v41;
      v44 = std___1___shared_weak_count_lock(v42);
      if (v44 != 0) {
        v45 = *v21;
        if (*v21 != 0) {
          a3 = *(unsigned __int8*)(v45 + 24);
          v46 = v45 + 152;
          if (a3 == 0) {
            v46 = 0;
          }
          v47 = v46 != v21[2];
        }
        else {
          v47 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v47) {
            goto LABEL_66;
          }
        }
        else {
          v49 = v44;
          (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
          std___1___shared_weak_count___release_weak(v49);
          if (v47) {
            goto LABEL_66;
          }
        }
        if ((a3 & 1) == 0) {
          return;
        }
        goto LABEL_71;
      }
    LABEL_66:
      v48 = v21[1];
      if (v48 == 0 || *(_QWORD*)(v48 + 8) == -1) {
        return;
      }
    LABEL_71:
      v50 = v21[13];
      if (v50 != 0) {
        *(float*)(v50 + 32) = (float)((float)a2 / v23) * v43;
      }
    }
  }
}

void game_cmdbtl_anonymous_1628980(__int64* a1, char a2)
{
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  unsigned __int64 v10;
  char* v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  __int64* v26;
  __int64 v27;
  _QWORD* v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64** v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  unsigned __int64 v37;
  char* v38;
  char* v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  signed __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned int v58;
  __int64 v59;
  __int64* v60;
  struct {
    __int64* v61;
    __int64* v62;
    __int64* v63;
  } v61_;
  int v64;
  __int64 v65;

  v3 = a1;
  v4 = LayoutAccessor_155fbe0(a1 + 22, "L_Corps");
  v61_.v62 = nullptr;
  v61_.v63 = nullptr;
  v61_.v61 = nullptr;
  v5 = *GameData_212ea58;
  if (GameData_21c9608 != 0 && (*(_BYTE*)(GameData_21c9608 + 328) & 4) != 0) {
    v27 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v27 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    }
    v65 = v27;
    v64 = 241;
    v28 = game_UnitPool_Find_6ead60(&v65, &v64);
    v29 = (__int64*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
    *v29 = (__int64)v28;
    v11 = (char*)(v29 + 1);
    v26 = v29;
    v61_.v61 = v29;
    v61_.v62 = v29 + 1;
    v61_.v63 = v29 + 1;
  }
  else {
    LODWORD(v65) = 17;
    v6 = game_UnitPool_GetFirst((int*)&v65);
    if (v6 != 0) {
      v7 = *(_QWORD*)(v6 + 432);
      v8 = v6;
      if (v7 == 0) {
        v7 = *(_QWORD*)(v6 + 440);
        if (v7 != 0) {
          v9 = *(unsigned __int8*)(v7 + 16);
          if (v9 <= 8) {
            v58 = v9 - 3;
            while (1) {
              if (v58 == 0) {
                v7 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v7 != 0) {
                  break;
                }
              }
              if (++v58 == 6) {
                goto LABEL_7;
              }
            }
          }
          else {
          LABEL_7:
            v7 = 0;
          }
        }
      }
      v59 = v5;
      v10 = 0;
      v11 = nullptr;
      v60 = v3;
      v12 = (__int64*)fw_memory_g_heap_manager_ptr;
      while (1) {
        v13 = v8;
        v8 = v7;
        if ((unsigned __int64)v11 >= v10) {
          v14 = v61_.v61;
          v15 = v11 - (char*)v61_.v61;
          v16 = (v11 - (char*)v61_.v61) >> 3;
          v17 = v16 + 1;
          if ((unsigned __int64)(v16 + 1) >> 61 != 0) {
            goto LABEL_90;
          }
          v18 = v10 - (_QWORD)v61_.v61;
          if (v18 >> 2 > v17) {
            v17 = v18 >> 2;
          }
          v19 = (unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF8LL
                    ? 0x1FFFFFFFFFFFFFFFLL
                    : v17;
          if (v19 != 0) {
            if (v19 >> 61 != 0) {
              GameRoutine_60a210();
            }
            v20 = fw_memory_HeapManager_Allocate(*v12, 8 * v19, 16, 0);
          }
          else {
            v20 = 0;
          }
          v21 = v20 + 8 * v19;
          v22 = (__int64*)(v20 + v15 - 8 * v16);
          *(_QWORD*)(v20 + v15) = v13;
          v11 = (char*)(v20 + v15 + 8);
          memcpy((__int64)v22, (__int64)v14, v15);
          v61_.v61 = v22;
          v61_.v63 = (__int64*)v21;
          if (v14 != nullptr) {
            v23 = 128;
            if (*(_QWORD*)(*v12 + 200) == 0) {
              v23 = 56;
            }
            nn_mem_StandardAllocator_Free(*v12 + v23, (__int64)v14);
          }
        }
        else {
          *(_QWORD*)v11 = v13;
          v11 += 8;
        }
        v61_.v62 = (__int64*)v11;
        if (v8 == 0) {
          break;
        }
        v7 = *(_QWORD*)(v8 + 432);
        if (v7 == 0) {
          v7 = *(_QWORD*)(v8 + 440);
          if (v7 != 0) {
            v24 = *(unsigned __int8*)(v7 + 16);
            if (v24 > 8) {
            LABEL_9:
              v7 = 0;
            }
            else {
              v25 = v24 - 3;
              while (1) {
                if (v25 == 0) {
                  v7 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                  if (v7 != 0) {
                    break;
                  }
                }
                if (++v25 == 6) {
                  goto LABEL_9;
                }
              }
            }
          }
        }
        v10 = (unsigned __int64)v61_.v63;
      }
      v3 = v60;
      v26 = v61_.v61;
      v5 = v59;
    }
    else {
      v26 = nullptr;
      v11 = nullptr;
    }
  }
  v30 = v3[250];
  v31 = v3[249];
  v32 = (__int64**)(v3 + 249);
  if (v30 - v31 == v11 - (char*)v26) {
    if (v30 == v31) {
    LABEL_53:
      if ((a2 & 1) == 0) {
        goto LABEL_55;
      }
    }
    else {
      v33 = (v30 - v31) >> 3;
      v34 = 0;
      v35 = (__int64*)v11;
      while (1) {
        v36 = *(_QWORD*)(*(_QWORD*)(v31 + 8 * v34) + 392LL);
        if (v36 != 0) {
          break;
        }
      LABEL_44:
        if (++v34 == v33) {
          goto LABEL_53;
        }
      }
      if (v35 != v26) {
        v37 = 0;
        v38 = (char*)v35;
        do {
          v41 = *(_QWORD*)(v26[v37] + 392);
          if (v41 != 0) {
            v39 = v11;
            v42 = *(_QWORD*)(*(_QWORD*)(v41 + 24) + 1672LL);
            v40 = v33;
            v38 = v11;
            if (*(_QWORD*)(*(_QWORD*)(v36 + 24) + 1672LL) == v42) {
              goto LABEL_44;
            }
          }
          else {
            v39 = (char*)v35;
            v40 = (v38 - (char*)v26) >> 3;
          }
          ++v37;
          v35 = (__int64*)v39;
        } while (v37 < v40);
      }
    }
  }
  GameRoutine_1591240(v4, v5 == 0, 0, &v61_.v61);
  v26 = v61_.v61;
LABEL_55:
  if (v32 == &v61_.v61) {
    goto LABEL_80;
  }
  v43 = v61_.v62;
  v44 = v3[251];
  v45 = v3[249];
  v46 = (char*)v61_.v62 - (char*)v26;
  if ((char*)v61_.v62 - (char*)v26 <= (unsigned __int64)(v44 - v45)) {
    v53 = v3[250];
    v54 = v53 - v45;
    if (v46 > (unsigned __int64)(v53 - v45)) {
      v55 = (__int64)v26 + v54;
      if (v53 != v45) {
        memmove(v3[249], (__int64)v26, v54);
        v53 = v3[250];
      }
      if (v43 != (__int64*)v55) {
        memmove(v53, v55, (unsigned __int64)v43 - v55);
      }
      v56 = (__int64)v43 + v53 - v55;
      goto LABEL_79;
    }
    if (v61_.v62 != v26) {
      memmove(v3[249], (__int64)v26, (char*)v61_.v62 - (char*)v26);
    }
  }
  else {
    v47 = v46 >> 3;
    v48 = (__int64)v26;
    if (v45 != 0) {
      v3[250] = v45;
      v49 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v49 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v49, v45);
      v44 = 0;
      v3[250] = 0;
      v3[251] = 0;
      *v32 = nullptr;
    }
    if (v47 >> 61 != 0) {
      goto LABEL_90;
    }
    v50 = v44 >> 2;
    if (v44 >> 2 <= v47) {
      v50 = v46 >> 3;
    }
    v51 = (unsigned __int64)v44 >= 0x7FFFFFFFFFFFFFF8LL ? 0x1FFFFFFFFFFFFFFFLL
                                                        : v50;
    if (v51 >> 61 != 0) {
    LABEL_90:
      GameRoutine_740050();
    }
    v52 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * v51, 16, 0);
    v45 = v52;
    v3[249] = v52;
    v3[250] = v52;
    v3[251] = v52 + 8 * v51;
    if (v43 != (__int64*)v48) {
      memcpy(v52, v48, v46);
    }
  }
  v56 = v45 + v46;
LABEL_79:
  v26 = v61_.v61;
  v3[250] = v56;
LABEL_80:
  if (v26 != nullptr) {
    v61_.v62 = v26;
    v57 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v57 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v57,
                                  (__int64)v26);
  }
}

#pragma GCC visibility pop
