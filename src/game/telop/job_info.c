#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1386f80(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_20bc808[])();
extern __int64 (*GameData_20bc8c8[])();
extern __int64 (*game_telop_JobInfo_vtable[])();
extern __int64 GameData_2263be8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
char* JobInfo_GetInAnimation(__int64 a1);
char* JobInfo_GetOutAnimation(__int64 a1);
__int64 JobInfo_Unknown44(__int64 result);
__int64 JobInfo_Destructor(__int64 a1);
__int64 JobInfo_DeletingDestructor(__int64 a1);
__int64 TelopReliance_1386f80(_QWORD);
__int64 JobInfo_Destructor_175e660(__int64 a1);
__int64 JobInfo_DeletingDestructor_175e700(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_1587740(PSEUDO_X8, __int64*,
                                                    const char**);
__int64* game_9a28e0(int);
__int64 GameRoutine_19a8d80(__int64, __int64, char, unsigned int*, __int64, int,
                            char, char, __int16);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 JobIcon_19a9d50(__int64, __int64, char, unsigned __int8, __int64, int,
                        char, __int64, char, __int16);
__int64 JobInfo_175e1b0_alt1(__int64*, unsigned int) __asm__("JobInfo_175e1b0");
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, const char*, char);
__int64 ui_LayoutAccessor_SetPriority(__int64 result, int);
char* GameHr_675980(__int64, __int64*);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern _UNKNOWN GameData_2259440;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_21c9988;
extern __int64 game_GameModeData_instance_;
extern char* GameData_20bc8e8[3];
extern char** msg_MessageManager_empty_text__ptr;
extern int* GameData_20bc900[2];
unsigned __int64 GameRoutine_1581fc0(__int64, __int64, _QWORD*);
void GameRoutine_156c5d0(__int64, __int64, char);
void game_gameui_Util_SetSkillExpBonus(__int64*, __int64);
void JobInfo_Unknown33(__int64 a1);
_QWORD* JobInfo_175e110(_QWORD* result, __int64 a2, char a3);
__int64 JobInfo_175e1b0(__int64* a1, unsigned __int8 a2);

char* JobInfo_GetInAnimation(__int64 a1)
{
  if (*(_DWORD*)(a1 + 848) == 1) {
    return &GameData_1a9f09e;
  }
  else {
    return "In";
  }
}

char* JobInfo_GetOutAnimation(__int64 a1)
{
  if (*(_DWORD*)(a1 + 848) == 1) {
    return &GameData_1a9f09e;
  }
  else {
    return "Out";
  }
}

void JobInfo_Unknown33(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  unsigned int v16;
  const char* v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  const char* v28;
  __int64 v29;
  int v30;
  __int64 v31;
  unsigned __int8 v32;
  int v33;
  __int64* v34;
  __int64 v35;
  char* v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  const char** v39;
  const char* v40;
  __int64 v41;
  char* v42;
  const char* v43;
  __int64 v44;
  char* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  const char* v49[2];
  struct {
    const char* v50;
    __int64 v51;
  } v50_;
  struct {
    __int64* v52;
    __int64 v53;
    unsigned __int64 v54;
    unsigned __int64 v55;
    int v56;
    int v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    __int64 v65;
    __int64 v66;
    __int64 v67;
    __int64 v68;
    __int64 v69;
    __int64 v70;
  } v52_;

  ui_LayoutAccessor_SetPriority(a1 + 168, 80);
  v2 = *(_QWORD*)(a1 + 832);
  v3 = *(_QWORD*)(a1 + 840);
  if (v3 != 0) {
    v3 = *(_QWORD*)(v3 + 392);
  }
  v52_.v52 = (__int64*)v3;
  v4 = GameHr_675980(v2, (__int64*)&v52_.v52);
  if (v4 != nullptr) {
    v5 = (__int64)v4;
    v6 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 168), "T_Txt");
    if (v6 != 0) {
      GameRoutine_156c5d0(v6, v5, 0);
    }
  }
  if (*(_DWORD*)(a1 + 848) == 2) {
    v7 = *(_QWORD**)(a1 + 840);
    v8 = a1 + 168;
    v9 = 0;
  }
  else {
    v9 = *(_QWORD*)(a1 + 832);
    v8 = a1 + 168;
    v7 = nullptr;
  }
  GameRoutine_1581fc0(v8, v9, v7);
  v10 = *(_QWORD*)(a1 + 832);
  v11 = *(_QWORD*)(a1 + 840);
  v12 = msg_MessageManager_instance__ptr[0];
  v13 = GameData_212e348;
  if (v11 == 0) {
    goto LABEL_19;
  }
  v14 = *(_QWORD*)(v11 + 392);
  if (v14 == 0 || v10 != GameData_21c9988) {
    goto LABEL_19;
  }
  if (*(_QWORD*)(*(_QWORD*)(v14 + 24) + 1784LL) != 0) {
    v14 = *(_QWORD*)(*(_QWORD*)(v14 + 24) + 1784LL);
  }
  v16 = *(unsigned __int8*)(v14 + 52) - 1;
  if (v16 < 3) {
    v17 = GameData_20bc8e8[(unsigned __int8)v16];
  }
  else {
  LABEL_19:
    v17 = *(const char**)(v10 + 40);
    if (v17 == nullptr) {
      goto LABEL_23;
    }
  }
  v18 = *msg_MessageManager_instance__ptr[0];
  v52_.v58 = -1;
  v52_.v59 = -1;
  v52_.v60 = -1;
  v52_.v61 = -1;
  v52_.v62 = -1;
  v52_.v63 = -1;
  v52_.v64 = -1;
  v52_.v65 = -1;
  v52_.v66 = -1;
  v52_.v67 = -1;
  v52_.v68 = -1;
  v52_.v69 = -1;
  v52_.v52 = GameData_212e348 + 2;
  v52_.v53 = 0xFFFF0001FFFF0000LL;
  v52_.v54 = 0xFFFF0004FFFF0002LL;
  v52_.v55 = 0xFFFF0006FFFF0005LL;
  v52_.v70 = 8;
  v52_.v56 = -65529;
  v52_.v57 = -65528;
  v19 = GameRoutine_a4dbe0(v18, v17, 0);
  if (v19 != nullptr) {
    v20 = (__int64)v19;
    v21 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 168), "T_Message");
    if (v21 != 0) {
      GameRoutine_156c5d0(v21, v20, 0);
    }
  }
LABEL_23:
  v50_.v50 = "L_JobIconM";
  v50_.v51 = 10;
  GameRoutine_1587740((void*)(&v52_.v52), (__int64*)(a1 + 168), &v50_.v50);
  if (v52_.v53 != 0) {
    v22 = std___1___shared_weak_count_lock(v52_.v53);
    v23 = (__int64)v52_.v52;
    if (v52_.v53 != 0) {
      std___1___shared_weak_count___release_weak(v52_.v53);
    }
    if (v22 != 0 && v23 != 0) {
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)v23 + 40LL))(v23, 0);
    }
    else if (v22 == 0) {
      goto LABEL_32;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      std___1___shared_weak_count___release_weak(v22);
    }
  }
LABEL_32:
  v50_.v50 = "L_JobIconF";
  v50_.v51 = 10;
  GameRoutine_1587740((void*)(&v52_.v52), (__int64*)(a1 + 168), &v50_.v50);
  if (v52_.v53 != 0) {
    v24 = std___1___shared_weak_count_lock(v52_.v53);
    v25 = (__int64)v52_.v52;
    if (v52_.v53 != 0) {
      std___1___shared_weak_count___release_weak(v52_.v53);
    }
    if (v24 != 0 && v25 != 0) {
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)v25 + 40LL))(v25, 0);
    }
    else if (v24 == 0) {
      goto LABEL_41;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      std___1___shared_weak_count___release_weak(v24);
    }
  }
LABEL_41:
  v26 = *(_DWORD*)(a1 + 848);
  v52_.v52 = (__int64*)a1;
  v52_.v53 = a1;
  v52_.v54 = a1;
  if ((unsigned int)(v26 - 1) >= 2) {
    if (v26 == 0) {
      JobInfo_175e1b0_alt1((__int64*)&v52_.v52, 1u);
      JobInfo_175e1b0_alt1((__int64*)&v52_.v52, 2u);
    }
  }
  else if ((JobInfo_175e1b0_alt1((__int64*)&v52_.v52, 1u) & 1) == 0 &&
           (JobInfo_175e1b0_alt1((__int64*)&v52_.v52, 2u) & 1) == 0 &&
           *(_QWORD*)(a1 + 840) != 0 &&
           (unsigned int)*(unsigned __int8*)(*(_QWORD*)(a1 + 832) + 50LL) - 1 >=
               2) {
    v49[0] = "L_JobIconM";
    v49[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 2);
    GameRoutine_1587740((void*)(&v50_.v50), (__int64*)(a1 + 168), v49);
    if (v50_.v51 != 0) {
      v27 = std___1___shared_weak_count_lock(v50_.v51);
      v28 = v50_.v50;
      if (v50_.v51 != 0) {
        std___1___shared_weak_count___release_weak(v50_.v51);
      }
      if (v27 != 0 && v28 != nullptr) {
        *((_BYTE*)v28 + 1105) = 0;
        v29 = *(_QWORD*)(a1 + 840);
        if (*(_QWORD*)(v29 + 408) != 0 || (v48 = *(_QWORD*)(v29 + 392)) == 0) {
          LOBYTE(v30) = 0;
        }
        else {
          v30 = *(unsigned __int8*)(v48 + 441);
          if (v30 == 3) {
            if (*(unsigned __int8*)(v29 + 2136) <= 1u) {
              LOBYTE(v30) = 1;
            }
            else {
              LOBYTE(v30) = *(_BYTE*)(v29 + 2136);
            }
          }
        }
        v31 = *(_QWORD*)(v29 + 440);
        if (v31 != 0) {
          v32 = *(_BYTE*)(v31 + 16);
        }
        else {
          v32 = 9;
        }
        JobIcon_19a9d50((__int64)v28, *(_QWORD*)(a1 + 832), v30, v32, 0, -1, 0,
                        v29, 0, 0);
        (*(void (**)(const char*, __int64))(*(_QWORD*)v28 + 40LL))(v28, 1);
      }
      else if (v27 == 0) {
        goto LABEL_57;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
        std___1___shared_weak_count___release_weak(v27);
      }
    }
  }
LABEL_57:
  game_gameui_Util_SetSkillExpBonus((__int64*)(a1 + 168), *(_QWORD*)(a1 + 832));
  v33 = *(_DWORD*)(a1 + 848);
  if (*(_BYTE*)(*(_QWORD*)(a1 + 832) + 49LL) == 5 && v33 != 1) {
    v34 = game_9a28e0(29);
    if (game_GameModeData_instance_ == 0 ||
        (v35 = game_GameVariableTable_Find(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)v34)) == 0 ||
        *(_DWORD*)(v35 + 32) == 0) {
      LayoutAccessor_1562cf0(a1 + 168, (unsigned int*)"Bonus_Secret");
    }
    v33 = *(_DWORD*)(a1 + 848);
  }
  if (v33 != 0) {
    v36 = "Change_JobInfo";
  }
  else {
    v36 = "Change_Temple";
  }
  LayoutAccessor_1562cf0(a1 + 168, (unsigned int*)v36);
  v37 = *(unsigned __int8*)(a1 + 856);
  if ((v37 & 1) != 0) {
    v38 = *(_QWORD*)(a1 + 864);
  }
  else {
    v38 = v37 >> 1;
  }
  if (v38 != 0) {
    ui_LayoutAccessor_SetPaneVisible(a1 + 168, "N_Txt", 1);
    v39 = (const char**)msg_MessageManager_empty_text__ptr;
    if ((*(_BYTE*)(a1 + 856) & 1) != 0) {
      v40 = *(const char**)(a1 + 872);
    }
    else {
      v40 = (const char*)(a1 + 857);
    }
    if (v40 != nullptr && *v40 != 0) {
      v41 = *v12;
      v52_.v58 = -1;
      v52_.v59 = -1;
      v52_.v60 = -1;
      v52_.v61 = -1;
      v52_.v62 = -1;
      v52_.v63 = -1;
      v52_.v64 = -1;
      v52_.v65 = -1;
      v52_.v66 = -1;
      v52_.v67 = -1;
      v52_.v68 = -1;
      v52_.v69 = -1;
      v52_.v52 = v13 + 2;
      v52_.v53 = 0xFFFF0001FFFF0000LL;
      v52_.v54 = 0xFFFF0004FFFF0002LL;
      v52_.v55 = 0xFFFF0006FFFF0005LL;
      v52_.v70 = 8;
      v52_.v56 = -65529;
      v52_.v57 = -65528;
      v42 = GameRoutine_a4dbe0(v41, v40, 0);
    }
    else {
      v42 = *msg_MessageManager_empty_text__ptr;
    }
    if (v42 != nullptr) {
      v43 = v42;
    }
    else {
      v43 = *v39;
    }
    GameRoutine_60a020(*v12 + 14704, v43);
    v44 = *v12;
    v52_.v58 = -1;
    v52_.v59 = -1;
    v52_.v60 = -1;
    v52_.v61 = -1;
    v52_.v62 = -1;
    v52_.v63 = -1;
    v52_.v64 = -1;
    v52_.v65 = -1;
    v52_.v66 = -1;
    v52_.v67 = -1;
    v52_.v68 = -1;
    v52_.v69 = -1;
    v52_.v52 = v13 + 2;
    v52_.v53 = 0xFFFF0001FFFF0000LL;
    v52_.v54 = 0xFFFF0004FFFF0002LL;
    v52_.v55 = 0xFFFF0006FFFF0005LL;
    v52_.v70 = 8;
    v52_.v56 = -65529;
    v52_.v57 = -65528;
    v45 = GameRoutine_a4dbe0(v44, "MID_CrownJobInfo_Message", 0);
    if (v45 != nullptr) {
      v46 = (__int64)v45;
      v47 =
          ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 168), "T_Message_Pass");
      if (v47 != 0) {
        GameRoutine_156c5d0(v47, v46, 0);
      }
    }
  }
  else {
    ui_LayoutAccessor_SetPaneVisible(a1 + 168, "N_Txt", 0);
  }
}

_QWORD* JobInfo_175e110(_QWORD* result, __int64 a2, char a3)
{
  _QWORD* v3;
  const char* v4;
  __int64 v5;
  __int64 v6;
  const char* v7[2];
  struct {
    __int64 v8;
    _QWORD* v9;
  } v8_;

  v3 = result;
  *result = 0;
  result[1] = 0;
  if (a3 == 2) {
    v4 = "L_JobIconF";
  }
  else {
    if (a3 != 1) {
      return result;
    }
    v4 = "L_JobIconM";
  }
  v7[0] = v4;
  v7[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 2);
  GameRoutine_1587740((void*)(&v8_.v8), (__int64*)(a2 + 168), v7);
  result = v8_.v9;
  if (v8_.v9 != nullptr) {
    v5 = std___1___shared_weak_count_lock((__int64)v8_.v9);
    v6 = v8_.v8;
    result = v8_.v9;
    if (v5 == 0) {
      v6 = 0;
    }
    *v3 = v6;
    v3[1] = v5;
    if (result != nullptr) {
      return (_QWORD*)std___1___shared_weak_count___release_weak(
          (__int64)result);
    }
  }
  else {
    *v3 = 0;
    v3[1] = 0;
  }
  return result;
}

__int64 JobInfo_175e1b0(__int64* a1, unsigned __int8 a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int* v16;
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;
  unsigned int v20;

  v3 = *a1;
  JobInfo_175e110(&v18_.v18, a1[2], a2);
  v5 = v18_.v18;
  if (v18_.v18 != 0) {
    v6 = a1[1];
    if (*(_BYTE*)(*(_QWORD*)(v6 + 832) + 50LL) == 0 ||
        *(unsigned __int8*)(*(_QWORD*)(v6 + 832) + 50LL) == a2) {
      v9 = *(_QWORD*)(v6 + 840);
      if (v9 == 0) {
        goto LABEL_14;
      }
      v10 = *(_QWORD*)(v9 + 392);
      if (v10 != 0) {
        v11 = *(unsigned __int8*)(v10 + 441);
        if (v11 == 3) {
          v12 = *(unsigned __int8*)(v9 + 2136);
          if (v12 <= 1) {
            v11 = 1;
          }
          else {
            v11 = v12;
          }
        }
        if (v11 == a2) {
        LABEL_14:
          v13 = *(_QWORD*)(v3 + 840);
          if (v13 != 0) {
            v13 = *(_QWORD*)(v13 + 440);
            if (v13 != 0) {
              LODWORD(v13) = *(unsigned __int8*)(v13 + 16);
            }
            else {
              LODWORD(v13) = 9;
            }
          }
          *(_BYTE*)(v18_.v18 + 1105) = 0;
          v14 = *(_QWORD*)(v3 + 832);
          if (v14 != 0) {
            v15 = *(_QWORD*)(v3 + 840);
            if ((unsigned int)v13 > 9) {
              v16 = (unsigned int*)&GameData_2259440;
            }
            else {
              v16 = (unsigned int*)GameData_20bc900[(unsigned int)v13];
            }
            v20 = *v16;
            GameRoutine_19a8d80(v5, v14, a2, &v20, v15, -1, 0, 0, 0);
          }
          v7 = 1;
          (*(void (**)(__int64, __int64))(*(_QWORD*)v5 + 40LL))(v5, 1);
          v8 = v18_.v19;
          if (v18_.v19 != 0) {
          LABEL_5:
            if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
              std___1___shared_weak_count___release_weak(v8);
            }
          }
          return v7;
        }
      }
    }
  }
  v7 = 0;
  v8 = v18_.v19;
  if (v18_.v19 == 0) {
    return v7;
  }
  goto LABEL_5;
}

__int64 JobInfo_Unknown44(__int64 result)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;

  if (*(_BYTE*)(result + 880) == 1) {
    v1 = *(unsigned __int8**)(result + 16);
    *(_BYTE*)(result + 880) = 0;
    if (v1 != nullptr) {
      v2 = *v1;
      v3 = v2 > 0x10;
      v4 = (1 << v2) & 0x1CE00;
      if (!v3 && v4 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    *(_WORD*)(result + 136) |= 8u;
  }
  return result;
}

__int64 JobInfo_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  *(_QWORD*)a1 = game_telop_JobInfo_vtable;
  *(_QWORD*)(a1 + 824) = GameData_20bc808;
  if ((*(_BYTE*)(a1 + 856) & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 872);
    if (v1 != 0) {
      v2 = a1;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v1);
      a1 = v2;
    }
  }
  *(_QWORD*)(a1 + 824) = GameData_20bc8c8;
  if (GameData_2263be8 == a1) {
    GameData_2263be8 = 0;
  }
  return GameRoutine_1386f80(a1);
}

__int64 JobInfo_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_telop_JobInfo_vtable;
  *(_QWORD*)(a1 + 824) = GameData_20bc808;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 856) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 872);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  *(_QWORD*)(a1 + 824) = GameData_20bc8c8;
  if (GameData_2263be8 == a1) {
    GameData_2263be8 = 0;
  }
  GameRoutine_1386f80(a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5, a1);
}

__int64 JobInfo_Destructor_175e660(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;

  v2 = (_QWORD*)(a1 - 824);
  *v2 = game_telop_JobInfo_vtable;
  *(_QWORD*)a1 = GameData_20bc808;
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 48);
    if (v3 != 0) {
      v4 = v2;
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v3);
      v2 = v4;
    }
  }
  *(_QWORD*)a1 = GameData_20bc8c8;
  if ((_QWORD*)GameData_2263be8 == v2) {
    GameData_2263be8 = 0;
  }
  return TelopReliance_1386f80(v2);
}

__int64 JobInfo_DeletingDestructor_175e700(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = a1 - 824;
  *(_QWORD*)(a1 - 824) = game_telop_JobInfo_vtable;
  *(_QWORD*)a1 = GameData_20bc808;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 48);
    if (v3 != 0) {
      v4 = a1;
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v3);
      a1 = v4;
    }
  }
  *(_QWORD*)a1 = GameData_20bc8c8;
  if (GameData_2263be8 == v1) {
    GameData_2263be8 = 0;
  }
  TelopReliance_1386f80(v1);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6, v1);
}

#pragma GCC visibility pop
