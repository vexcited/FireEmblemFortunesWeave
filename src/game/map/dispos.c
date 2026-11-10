#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_742cc0(void);
__int64 GameRoutine_74d660(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_containers_BalanceAfterInsert(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_Unit_CanSwitchMount(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1f94c58[])();
extern __int64 GameData_21ca240;
extern __int64 GameData_21ca248;
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 game_map_Dispos_GetSortiePos(_DWORD* a1, _DWORD* a2);
__int64 game_map_Dispos_GetSortiePos_lambda0_Invoke(__int64 a1, _DWORD* a2,
                                                    _DWORD* a3);
__int64 GameRoutine_6c47b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_73bf60(_QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_map_73c7c0(__int64 result, int, int, long double);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*GameData_1f94d58[])();
extern __int64* GameData_212ce98[2];
extern __int64 game_GameModeData_instance_;
long double UnitActor_8194d0(_QWORD);
__int64 game_map_Dispos_DeploySortie_lambda0_Invoke(__int64 a1, int* a2,
                                                    int* a3);

__int64 game_map_Dispos_GetSortiePos(_DWORD* a1, _DWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  char* v24;
  int v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  unsigned int v31;
  unsigned int v32;
  _QWORD* v33;
  _QWORD* v34;
  __int64 v35;
  _QWORD* v36;
  _QWORD* v37;
  unsigned int v39;
  _QWORD v42[4];
  _QWORD* v43;
  int v44;
  char* v45;
  char* v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  _QWORD v50[2];
  int v51;
  int v52;

  v50[0] = 0;
  v50[1] = 0;
  v49 = v50;
  LODWORD(v42[0]) = 17;
  v2 = game_UnitPool_GetFirst(v42);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 432);
    v4 = v2;
    if (v3 == 0) {
      v3 = *(_QWORD*)(v2 + 440);
      if (v3 != 0) {
        v5 = *(unsigned __int8*)(v3 + 16);
        if (v5 <= 8) {
          v39 = v5 - 3;
          while (1) {
            if (v39 == 0) {
              v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v3 != 0) {
                break;
              }
            }
            if (++v39 == 6) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v3 = 0;
        }
      }
    }
    v6 = 1;
    while (1) {
    LABEL_8:
      v7 = *(_DWORD*)(v4 + 592);
      v8 = v3;
      if ((game_Unit_CanSwitchMount(v4) & 1) != 0) {
        v9 = *(_QWORD*)(v4 + 400);
        v10 = *(_QWORD*)(v9 + 88);
        if ((*(_BYTE*)(v4 + 418) & 4) == 0) {
          v9 = *(_QWORD*)(v9 + 88);
        }
        if (v10 != 0 && v9 != 0) {
          v12 = *(unsigned __int8*)(v9 + 417);
          if (v7 <= v12) {
            v7 = v12;
          }
        }
      }
      if (v6 <= v7) {
        v6 = v7;
      }
      if (v8 == 0) {
        break;
      }
      v3 = *(_QWORD*)(v8 + 432);
      v4 = v8;
      if (v3 == 0) {
        v13 = *(_QWORD*)(v8 + 440);
        v4 = v8;
        if (v13 != 0) {
          v14 = *(unsigned __int8*)(v13 + 16);
          v3 = 0;
          v4 = v8;
          if (v14 <= 8) {
            v15 = v14 - 3;
            while (1) {
              if (v15 == 0) {
                v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v3 != 0) {
                  break;
                }
              }
              if (++v15 == 6) {
                v3 = 0;
                v4 = v8;
                goto LABEL_8;
              }
            }
            v4 = v8;
          }
        }
      }
    }
  }
  else {
    v6 = 1;
  }
  v16 = (__int64*)GameData_21ca240;
  v17 = GameData_21ca248;
  if (GameData_21ca240 != GameData_21ca248) {
    while (1) {
      v18 = *v16;
      v44 = 0;
      v45 = nullptr;
      v46 = nullptr;
      v19 = *(unsigned __int8*)(v18 + 56);
      v20 = (unsigned int)*(char*)(v18 + 54);
      v21 = (unsigned int)*(char*)(v18 + 55);
      v48 = v18;
      v47 = 0;
      v22 = v6 >= v19 ? (unsigned int)v19 : (unsigned int)v6;
      GameRoutine_74d660(&v44, v22, v20, v21);
      v23 = v45;
      v24 = v46;
      v42[0] = GameData_1f94c58;
      v42[1] = &v49;
      v42[2] = &v48;
      v43 = v42;
      if (v45 == v46) {
        break;
      }
      do {
        v25 = *v23;
        v51 = v23[1];
        v52 = v25;
        if (v43 == nullptr) {
          GameRoutine_60a310(0);
        }
        (*(void (**)(_QWORD*, int*, int*))(*v43 + 48LL))(v43, &v52, &v51);
        v23 += 4;
      } while (v23 != v24);
      v26 = v43;
      if (v43 == v42) {
        goto LABEL_42;
      }
      if (v43 != nullptr) {
        v27 = 40;
        goto LABEL_43;
      }
    LABEL_44:
      if (v45 != nullptr) {
        v46 = v45;
        v28 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v45);
      }
      if (++v16 == (__int64*)v17) {
        goto LABEL_48;
      }
    }
    v26 = v42;
  LABEL_42:
    v27 = 32;
  LABEL_43:
    (*(void (**)(__int64))(*v26 + v27))((__int64)v26);
    goto LABEL_44;
  }
LABEL_48:
  if (v50[0] != 0) {
    v29 = v50[0];
    v30 = v50;
    v31 = *a1 + (*a2 << 8);
    do {
      v32 = *(_DWORD*)(v29 + 28);
      v33 = (_QWORD*)v29;
      v34 = v30;
      v35 = v32 < v31;
      if (v32 >= v31) {
        v30 = v33;
      }
      v29 = v33[v35];
    } while (v29 != 0);
    if (v30 != v50) {
      v36 = v32 >= v31 ? v33 : v34;
      if (v31 >= *((_DWORD*)v36 + 7)) {
        if (v32 >= v31) {
          v37 = v33;
        }
        else {
          v37 = v34;
        }
        *a1 = *((char*)v37 + 32);
        *a2 = *((char*)v37 + 33);
      }
    }
  }
  return GameRoutine_742cc0();
}

__int64 game_map_Dispos_GetSortiePos_lambda0_Invoke(__int64 a1, _DWORD* a2,
                                                    _DWORD* a3)
{
  __int64** v3;
  unsigned int v4;
  __int16 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64* v11;
  unsigned int v12;
  __int64* v13;
  __int64 result;
  __int64 v15;

  v3 = *(__int64***)(a1 + 8);
  v4 = *a2 + (*a3 << 8);
  v5 = *(_WORD*)(**(_QWORD**)(a1 + 16) + 54LL);
  v6 = fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      40, 16, 0);
  *(_DWORD*)(v7 + 28) = v4;
  *(_WORD*)(v7 + 32) = v5;
  v8 = v7;
  *(_WORD*)(v7 + 34) = 0;
  v9 = (__int64*)(v3 + 1);
  v10 = v3[1];
  if (v10 != nullptr) {
    while (1) {
      while (1) {
        v12 = *((_DWORD*)v10 + 7);
        v11 = v10;
        if (v4 >= v12) {
          break;
        }
        v10 = (__int64*)*v10;
        v9 = v11;
        if (*v11 == 0) {
          goto LABEL_8;
        }
      }
      if (v12 >= v4) {
        break;
      }
      v10 = (__int64*)v10[1];
      if (v10 == nullptr) {
        v9 = v11 + 1;
        goto LABEL_8;
      }
    }
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v15 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v15, v7);
  }
  else {
    v11 = (__int64*)(v3 + 1);
  LABEL_8:
    *(_QWORD*)v7 = 0;
    *(_QWORD*)(v7 + 8) = 0;
    *(_QWORD*)(v7 + 16) = v11;
    *v9 = v7;
    v13 = (__int64*)**v3;
    if (v13 != nullptr) {
      *v3 = v13;
      v8 = *v9;
    }
    result = fw_containers_BalanceAfterInsert(v3[1], v8);
    v3[2] = (__int64*)((char*)v3[2] + 1);
  }
  return result;
}

__int64 game_map_Dispos_DeploySortie_lambda0_Invoke(__int64 a1, int* a2,
                                                    int* a3)
{
  int v3;
  int v4;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  bool v9;
  char v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  long double v18;
  _QWORD v19[4];
  _QWORD* v20;
  _BYTE v21[4];

  v3 = *a2;
  v4 = *a3;
  LODWORD(v6) = *a2 + 32 * *a3;
  if ((unsigned int)v6 >= 0x400) {
    v6 = 0;
  }
  else {
    v6 = (unsigned int)v6;
  }
  v7 = *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v6 + 8);
  if (*(_BYTE*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v6 + 8) == 0) {
    goto LABEL_18;
  }
  v8 = *(_QWORD*)(GameData_21ca310 + 56) +
       2224LL *
           *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v6 + 8);
  v9 = v7 > 0xFA || v8 == 2224;
  if (v9 || *(_QWORD*)(v8 - 1832) == 0) {
    goto LABEL_18;
  }
  v19[0] = GameData_1f94d58;
  v19[1] = v8 - 2224;
  v20 = v19;
  v10 = GameRoutine_73bf60(v8 - 2224, v19);
  result = (__int64)v20;
  if (v20 == v19) {
    v12 = 32;
    goto LABEL_14;
  }
  if (v20 != nullptr) {
    v12 = 40;
  LABEL_14:
    result = (*(__int64 (**)(__int64))(*v20 + v12))((__int64)v20);
  }
  if ((v10 & 1) == 0) {
    return result;
  }
  v13 = *(_QWORD*)(a1 + 64);
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 48LL))(v13);
  }
LABEL_18:
  v14 = *(_QWORD*)(a1 + 16);
  v21[0] = 0;
  v15 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v15 = *(_QWORD*)(game_GameModeData_instance_ + 96);
  }
  if (*(_QWORD*)(v14 + 392) == v15 || (*(_BYTE*)(v14 + 418) & 8) != 0) {
    v17 = 0;
  }
  else {
    v16 = v14;
    LODWORD(v19[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                 game_g_shared_system_skills_ptr) &
                      0xFFF;
    v17 = game_HasSkill(v14 + 1744, v19) ^ 1;
    v14 = v16;
  }
  GameRoutine_6c47b0(v14, v21, v17 & 1, 0);
  v18 = UnitActor_8194d0(*(_QWORD*)(a1 + 16));
  return game_map_73c7c0(*(_QWORD*)(a1 + 16), v3, v4, v18);
}

#pragma GCC visibility pop
