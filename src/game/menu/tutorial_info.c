#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e0e00(void);
__int64 GameRoutine_17e5830(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17e6660(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17e67b0(_QWORD);
__int64 GameRoutine_17e68f0(_QWORD, _QWORD);
__int64 GameRoutine_579160(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_206dab8[])();
extern __int64 (*GameData_206db08[])();
extern __int64 game_g_game_setting;
__int64 TutorialInfo_Unknown114(__int64 a1);
__int64 TutorialInfo_Unknown135(__int64 a1);
__int64 TutorialInfo_162ba40(__int64 a1);
__int64 TutorialInfo_Unknown136(__int64 a1, __int64 a2);
__int64 TutorialInfo_162ba90(__int64 a1, __int64 a2);
__int64 TutorialInfo_Unknown115(__int64 a1);
__int64 TutorialInfo_Unknown84(_QWORD* a1);
__int64 GameRoutine_162aea0(__int64, _QWORD*);
__int64 GameRoutine_887920(_QWORD, _QWORD);
__int64 GameRoutine_97ee10(_QWORD, _QWORD);
__int64 GameRoutine_97f0c0(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameVariable_828800(_QWORD, _QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcList_9bd480(_QWORD);
__int64 TutorialInfo_162b900(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_ProcList_Call_9bcfa0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_206db40[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 game_menu_TutorialInfo_CreateBind(__int64 a1, __int64** a2);
__int64 TutorialInfo_162b5f0(__int64 a1, __int64* a2);
__int64 game_menu_TutorialInfo_CreateBind_lambda0_Invoke(__int64 a1,
                                                         __int64* a2);

__int64 game_menu_TutorialInfo_CreateBind(__int64 a1, __int64** a2)
{
  __int64* v2;
  __int64* v3;
  _BOOL8 v6;
  __int64 v7;
  char* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64** v16;
  __int64* v17;
  __int64* v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _BYTE* v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  _QWORD* v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  char v34;
  _QWORD* v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD v44[4];
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  int v59;

  v2 = *a2;
  v3 = a2[1];
  if (*a2 != v3) {
    while (1) {
      if ((*(_BYTE*)v2 & 1) != 0) {
        v8 = (char*)v2[2];
      }
      else {
        v8 = (char*)v2 + 1;
      }
      GameRoutine_887920(v44, v8);
      if (v44[0] != 0) {
        v9 = **(__int64***)(v44[0] + 40LL);
        if ((int)((*(_QWORD*)(*(_QWORD*)(v44[0] + 40LL) + 8LL) - (_QWORD)v9) >>
                  3) < 1) {
          goto LABEL_5;
        }
        v10 = *v9;
        if (v10 == 0 || *(_BYTE*)(v10 + 99) != 2 ||
            game_GameModeData_instance_ == 0) {
          goto LABEL_5;
        }
        v11 = *(_QWORD*)(v10 + 24);
        v12 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), v44[0]);
        if (v12 != 0) {
          break;
        }
        v6 = false;
        v7 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          goto LABEL_4;
        }
      }
    LABEL_5:
      v2 += 3;
      if (v2 == v3) {
        v2 = *a2;
        v3 = a2[1];
        goto LABEL_18;
      }
    }
    v6 = *(_BYTE*)(v12 + 32) != 0;
    v7 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_5;
    }
  LABEL_4:
    GameVariable_828800(v7 + 40, v11, v6);
    goto LABEL_5;
  }
LABEL_18:
  if (v2 == v3) {
    return 0;
  }
  v13 = GameData_212e348 + 2;
  while (1) {
    v14 = (*(_BYTE*)v2 & 1) != 0 ? (__int64*)v2[2] : (__int64*)((char*)v2 + 1);
    GameRoutine_887920(&v43, v14);
    v15 = v43;
    if (v43 != 0 && (GameRoutine_97f0c0(v43) & 1) != 0) {
      v16 = *(__int64***)(v15 + 40);
      v18 = *v16;
      v17 = v16[1];
      if (*v16 != v17) {
        break;
      }
    }
  LABEL_21:
    v2 += 3;
    if (v2 == v3) {
      return 0;
    }
  }
  v19 = 0;
  while (1) {
    v20 = *v18++;
    v21 = *(_QWORD*)(v20 + 48);
    if (v21 == 0) {
      break;
    }
    v46 = -1;
    v47 = -1;
    v48 = -1;
    v49 = -1;
    v50 = -1;
    v51 = -1;
    v52 = -1;
    v53 = -1;
    v22 = *msg_MessageManager_instance__ptr[0];
    v54 = -1;
    v55 = -1;
    v56 = -1;
    v57 = -1;
    v58 = 8;
    v59 = 0;
    v44[0] = v13;
    v44[1] = 0xFFFF0001FFFF0000LL;
    v44[2] = 0xFFFF0004FFFF0002LL;
    v44[3] = 0xFFFF0006FFFF0005LL;
    v45 = 0xFFFF0008FFFF0007LL;
    v23 = (_BYTE*)GameRoutine_a4dbe0(v22, v21, 0, v44);
    if (v23 == nullptr || *v23 == 0) {
      break;
    }
    --v19;
    if (v18 == v17) {
      goto LABEL_33;
    }
  }
  if (v19 == 0) {
    goto LABEL_21;
  }
LABEL_33:
  v24 = ProcList_9bd480(a1);
  if (v24 != 0) {
    v25 = *a2;
    v26 = a2[1];
    if (*a2 != v26) {
      v27 = v24;
      v28 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      do {
        v29 = *(unsigned __int8*)v25;
        v30 = v29 >> 1;
        if ((v29 & 1) != 0) {
          v30 = v25[1];
        }
        if (v30 != 0) {
          if ((v29 & 1) != 0) {
            fw_text_String_CopyTerminated(&v40, v25[2], v25[1]);
          }
          else {
            v31 = *v25;
            v32 = v25[2];
            v41 = v25[1];
            v42 = v32;
            v40 = v31;
          }
          v33 = (_QWORD*)fw_memory_HeapManager_Allocate(*v28, 32, 16, 0);
          v34 = v40;
          v35 = v33;
          *v33 = GameData_206db40;
          v36 = v33 + 1;
          if ((v34 & 1) != 0) {
            fw_text_String_CopyTerminated(v36, v42, v41);
          }
          else {
            v37 = v41;
            *v36 = v40;
            v36[1] = v37;
            v36[2] = v42;
          }
          v45 = (unsigned __int64)v35;
          game_ProcList_Call_9bcfa0(v27, v44);
          (*(void (**)(_QWORD*))(*v35 + 40LL))(v35);
          if ((v40 & 1) != 0 && v42 != 0) {
            if (*(_QWORD*)(*v28 + 200LL) != 0) {
              v38 = 128;
            }
            else {
              v38 = 56;
            }
            nn_mem_StandardAllocator_Free(*v28 + v38, v42);
          }
        }
        v25 += 3;
      } while (v25 != v26);
    }
  }
  return 1;
}

__int64 TutorialInfo_162b5f0(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 result;

  v2 = *a2;
  if (*a2 == 0) {
    return 0;
  }
  GameRoutine_97ee10(v2, 1);
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1088, 16, 0);
  TutorialInfo_162b900(v4, v2);
  result = ProcInst_657850(v4, GameData_212c730, "TutorialInfo", 1, a1);
  *(_BYTE*)(v4 + 1080) = 1;
  return result;
}

__int64 TutorialInfo_Unknown114(__int64 a1)
{
  if ((*(_BYTE*)(a1 + 1080) & 1) != 0) {
    return 3;
  }
  else {
    return GameRoutine_16e0e00();
  }
}

__int64 TutorialInfo_Unknown135(__int64 a1)
{
  GameRoutine_17e67b0(*(_QWORD*)(a1 + 1064));
  return 0;
}

__int64 TutorialInfo_162ba40(__int64 a1)
{
  GameRoutine_17e67b0(*(_QWORD*)(a1 + 888));
  return 0;
}

__int64 TutorialInfo_Unknown136(__int64 a1, __int64 a2)
{
  GameRoutine_17e6660(*(_QWORD*)(a1 + 1064), a2, 0);
  return 0;
}

__int64 TutorialInfo_162ba90(__int64 a1, __int64 a2)
{
  GameRoutine_17e6660(*(_QWORD*)(a1 + 888), a2, 0);
  return 0;
}

__int64 TutorialInfo_Unknown115(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int8 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(_QWORD*)(a1 + 1064);
  v3 = *(_QWORD*)(v1 + 272);
  if (v3 != 0) {
    v4 = std___1___shared_weak_count_lock(v3);
    if (v4 != 0) {
      v5 = *(_QWORD*)(v1 + 264);
      if (v5 != 0) {
        if ((*(_BYTE*)(v5 + 240) & 1) != 0) {
          v6 = 1;
        }
        else {
          v8 = v4;
          v6 =
              (unsigned __int8)(*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD))(
                  *(_QWORD*)v5 + 160LL))((_QWORD*)v5, *(_QWORD*)(v1 + 264));
          v4 = v8;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if ((v6 & 1) == 0) {
            goto LABEL_13;
          }
          return 0;
        }
        v9 = v4;
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v9);
        if ((v6 & 1) != 0) {
          return 0;
        }
      }
      else if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
        v7 = v4;
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v7);
      }
    }
  }

LABEL_13:
  if ((*(_BYTE*)(game_g_game_setting + 807) == 1 &&
           ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
            *(_BYTE*)(game_g_game_setting + 940) == 1 &&
                (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
                (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0) ||
       *(_BYTE*)(game_g_game_setting + 903) == 1 &&
           ((*(_BYTE*)(game_g_game_setting + 900) & 1) != 0 ||
            *(_BYTE*)(game_g_game_setting + 940) == 1 &&
                (*(_BYTE*)(game_g_game_setting + 901) & 1) != 0 &&
                (*(_BYTE*)(game_g_game_setting + 902) & 1) != 0)) &&
      (*(_BYTE*)(a1 + 1080) & 1) != 0 &&
      (*(_BYTE*)(game_g_game_setting + 952) & 3) == 0) {
    return 0;
  }
  if ((GameRoutine_17e6660(*(_QWORD*)(a1 + 1064), 1, 1) & 1) != 0) {
    return 13;
  }
  else {
    return 3;
  }
}

__int64 TutorialInfo_Unknown84(_QWORD* a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;

  if (a1[108] == 0) {
    goto LABEL_17;
  }
  v3 = a1[107];
  if (v3 == 0) {
    goto LABEL_17;
  }
  v4 = std___1___shared_weak_count_lock(v3);
  if (v4 != 0) {
    v5 = a1[106];
    if (v5 != 0) {
      v1 = *(unsigned __int8*)(v5 + 24);
      v6 = v5 + 152;
      if (v1 == 0) {
        v6 = 0;
      }
      v7 = v6 != a1[108];
    }
    else {
      v7 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v7) {
        goto LABEL_11;
      }
    }
    else {
      v13 = v4;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v13);
      if (v7) {
        goto LABEL_11;
      }
    }
    if ((v1 & 1) != 0) {
      goto LABEL_13;
    }
  LABEL_17:
    v9 = 0;
    v10 = a1[107];
    if (v10 == 0) {
      goto LABEL_14;
    }
    goto LABEL_18;
  }

LABEL_11:
  v8 = a1[107];
  if (v8 == 0 || *(_QWORD*)(v8 + 8) == -1) {
    goto LABEL_17;
  }

LABEL_13:
  v9 = a1[108];
  v10 = a1[107];
  if (v10 == 0) {
  LABEL_14:
    v11 = 0;
    v12 = 0;
    goto LABEL_21;
  }

LABEL_18:
  v12 = std___1___shared_weak_count_lock(v10);
  if (v12 != 0) {
    v11 = a1[106];
  }
  else {
    v11 = 0;
  }

LABEL_21:
  v14 = (_QWORD*)GameRoutine_579160(352, 16);
  v15 = v14 + 4;
  v16 = v14;
  v14[1] = 0;
  v14[2] = 0;
  *v14 = GameData_206dab8;
  GameRoutine_17e5830(v14 + 4, v9, v11, 1);
  v16[4] = GameData_206db08;
  a1[133] = v15;
  v17 = a1[134];
  a1[134] = v16;
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak(v17);
  }
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  return GameRoutine_17e68f0(a1[133], a1[132]);
}

__int64 game_menu_TutorialInfo_CreateBind_lambda0_Invoke(__int64 a1,
                                                         __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;

  v2 = *a2;
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 24);
  }
  else {
    v3 = a1 + 9;
  }
  GameRoutine_887920(&v5, v3);
  return GameRoutine_162aea0(v2, &v5);
}

#pragma GCC visibility pop
