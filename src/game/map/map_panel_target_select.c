#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_64dfe0(_QWORD, _QWORD);
__int64 GameRoutine_74e080(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212f8b0[14];
__int64 MapPanelTargetSelect_f17ac0(__int64 result, _QWORD* a2);
_QWORD* MapPanelTargetSelect_f17c00(_QWORD* a1, _QWORD* a2);
__int64 game_map_MapPanelTargetSelect_UpdateTarget_lambda0_Invoke(__int64 a1,
                                                                  __int64 a2);
__int64 game_map_MapPanelTargetSelect_UpdateTarget_lambda1_Invoke(__int64 a1,
                                                                  _DWORD* a2,
                                                                  _DWORD* a3);
__int64* fw_containers_BalanceAfterInsert(__int64* result, __int64*);
__int64 CharacterController_d42d20(__int64 result, char*, char*,
                                   unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_map_f54910(__int64);
char** GameRoutine_f155c0(char** result, char*, char*, unsigned __int64);
void __attribute__((noreturn)) String_60a250(const char*);
__int64 MapPanelTargetSelect_f176c0(__int64** a1, __int64 a2);

__int64 MapPanelTargetSelect_f176c0(__int64** a1, __int64 a2)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64** v6;
  unsigned __int64 v7;
  __int64* v8;
  __int64** v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int128 v18;
  __int128 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  unsigned int v29;
  __int64 v30;
  int v31;

  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 32LL))(a2);
  v6 = a1 + 1;
  v5 = (__int64)a1[1];
  v7 = v4;
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = a1 + 1;
  v10 = (__int64)(a1 + 1);
  if (v5 != 0) {
    v11 = a1[1];
    while (1) {
      v12 = v11[4];
      if (v4 >= v12) {
        if (v12 >= v4) {
          while (1) {
            while (1) {
              v13 = *(_QWORD*)(v5 + 32);
              if (v4 >= v13) {
                break;
              }
              v5 = *(_QWORD*)v5;
              if (v5 == 0) {
                goto LABEL_11;
              }
            }
            if (v13 >= v4) {
              break;
            }
            v5 = *(_QWORD*)(v5 + 8);
            if (v5 == 0) {
            LABEL_11:
              String_60a250("map::at:  key not found");
            }
          }
          v29 = 0;
          goto LABEL_34;
        }
        ++v11;
      }
      v11 = (__int64*)*v11;
      if (v11 == nullptr) {
        while (1) {
          while (1) {
            v14 = *(_QWORD*)(v5 + 32);
            v10 = v5;
            if (v4 >= v14) {
              break;
            }
            v5 = *(_QWORD*)v5;
            v9 = (__int64**)v10;
            if (*(_QWORD*)v10 == 0) {
              goto LABEL_17;
            }
          }
          if (v14 >= v4) {
            goto LABEL_20;
          }
          v5 = *(_QWORD*)(v5 + 8);
          if (v5 == 0) {
            v9 = (__int64**)(v10 + 8);
            goto LABEL_17;
          }
        }
      }
    }
  }
LABEL_17:
  v15 = v10;
  v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       304, 16, 0);
  *(_QWORD*)(v10 + 32) = v7;
  game_map_f54910(v10 + 48);
  *(_QWORD*)v10 = 0;
  *(_QWORD*)(v10 + 8) = 0;
  *(_QWORD*)(v10 + 16) = v15;
  v16 = (__int64*)v10;
  *v9 = (__int64*)v10;
  v17 = (__int64*)**a1;
  if (v17 != nullptr) {
    *a1 = v17;
    v16 = *v9;
  }
  fw_containers_BalanceAfterInsert(a1[1], v16);
  a1[2] = (__int64*)((char*)a1[2] + 1);
LABEL_20:
  *(_DWORD*)(v10 + 56) = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(v10 + 60) = *(_DWORD*)(a2 + 12);
  *(_OWORD*)(v10 + 64) = *(_OWORD*)(a2 + 16);
  *(_OWORD*)(v10 + 80) = *(_OWORD*)(a2 + 32);
  *(_OWORD*)(v10 + 96) = *(_OWORD*)(a2 + 48);
  *(_OWORD*)(v10 + 112) = *(_OWORD*)(a2 + 64);
  *(_QWORD*)(v10 + 136) = *(_QWORD*)(a2 + 88);
  *(_QWORD*)(v10 + 128) = *(_QWORD*)(a2 + 80);
  if (v10 + 48 != a2) {
    GameRoutine_f155c0(
        (char**)(v10 + 144), *(char**)(a2 + 96), *(char**)(a2 + 104),
        (__int64)(*(_QWORD*)(a2 + 104) - *(_QWORD*)(a2 + 96)) >> 6);
    CharacterController_d42d20(
        v10 + 168, *(char**)(a2 + 120), *(char**)(a2 + 128),
        (__int64)(*(_QWORD*)(a2 + 128) - *(_QWORD*)(a2 + 120)) >> 4);
  }
  v5 = (__int64)(a1 + 1);
  *(_DWORD*)(v10 + 192) = *(_DWORD*)(a2 + 144);
  *(_DWORD*)(v10 + 196) = *(_DWORD*)(a2 + 148);
  v18 = *(_OWORD*)(v10 + 192);
  *((_QWORD*)&v18 + 1) = *(unsigned int*)(a2 + 152);
  *(_OWORD*)(v10 + 192) = v18;
  *(_QWORD*)(v10 + 216) = *(_QWORD*)(a2 + 168);
  *(_QWORD*)(v10 + 208) = *(_QWORD*)(a2 + 160);
  *(_DWORD*)(v10 + 224) = *(_DWORD*)(a2 + 176);
  *(_DWORD*)(v10 + 228) = *(_DWORD*)(a2 + 180);
  v19 = *(_OWORD*)(v10 + 224);
  *((_QWORD*)&v19 + 1) = *(unsigned int*)(a2 + 184);
  *(_OWORD*)(v10 + 224) = v19;
  v20 = *(_QWORD*)(a2 + 232);
  v21 = *(_DWORD*)(a2 + 240);
  *(_QWORD*)(v10 + 264) = *(_QWORD*)(a2 + 216);
  *(_QWORD*)(v10 + 280) = v20;
  *(_QWORD*)(v10 + 248) = *(_QWORD*)(a2 + 200);
  v22 = *(_QWORD*)(a2 + 192);
  *(_QWORD*)(v10 + 256) = *(_QWORD*)(a2 + 208);
  *(_QWORD*)(v10 + 240) = v22;
  v23 = *(_QWORD*)(a2 + 224);
  *(_DWORD*)(v10 + 288) = v21;
  *(_QWORD*)(v10 + 272) = v23;
  v24 = *v6;
  if (*v6 != nullptr) {
    while (1) {
      while (1) {
        v5 = (__int64)v24;
        v25 = v24[4];
        if (v7 >= v25) {
          break;
        }
        v24 = *(__int64**)v5;
        v6 = (__int64**)v5;
        if (*(_QWORD*)v5 == 0) {
          goto LABEL_29;
        }
      }
      if (v25 >= v7) {
        break;
      }
      v24 = *(__int64**)(v5 + 8);
      if (v24 == nullptr) {
        v6 = (__int64**)(v5 + 8);
        goto LABEL_29;
      }
    }
  }
  else {
  LABEL_29:
    v26 = v5;
    v5 = fw_memory_HeapManager_Allocate(*v8, 304, 16, 0);
    *(_QWORD*)(v5 + 32) = v7;
    game_map_f54910(v5 + 48);
    *(_QWORD*)v5 = 0;
    *(_QWORD*)(v5 + 8) = 0;
    *(_QWORD*)(v5 + 16) = v26;
    v27 = (__int64*)v5;
    *v6 = (__int64*)v5;
    v28 = (__int64*)**a1;
    if (v28 != nullptr) {
      *a1 = v28;
      v27 = *v6;
    }
    fw_containers_BalanceAfterInsert(a1[1], v27);
    a1[2] = (__int64*)((char*)a1[2] + 1);
  }
  v29 = 1;
LABEL_34:
  v30 = *(_QWORD*)(v5 + 48);
  *(_BYTE*)(v5 + 272) = 1;
  if (((*(__int64 (**)(__int64))(v30 + 48))((__int64)(v5 + 48)) & 1) != 0) {
    v31 = 1036831949;
  }
  else {
    v31 = 0;
    *(_DWORD*)(v5 + 276) = 1065353216;
  }
  *(_DWORD*)(v5 + 280) = v31;
  return v29;
}

__int64 MapPanelTargetSelect_f17ac0(__int64 result, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  void (***v8)(_QWORD);
  void (***v9)(_QWORD);
  void (***v10)(_QWORD);
  void (***v11)(_QWORD);
  void (**v12)(_QWORD);
  bool v13;
  void (***v14)(_QWORD);
  __int64 v15;
  __int64 v16;

  if (a2 != nullptr) {
    v3 = result;
    MapPanelTargetSelect_f17ac0(result, *a2);
    MapPanelTargetSelect_f17ac0(v3, a2[1]);
    v4 = a2[21];
    a2[6] = GameData_212f8b0[0] + 2;
    v5 = fw_memory_g_heap_manager_ptr;
    if (v4 != 0) {
      v6 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      a2[22] = v4;
      v7 = 128;
      if (*(_QWORD*)(v6 + 200) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(v6 + v7, v4);
    }
    v8 = (void (***)(_QWORD))a2[18];
    if (v8 != nullptr) {
      v9 = (void (***)(_QWORD))a2[19];
      if (v8 == v9) {
        goto LABEL_12;
      }
      v10 = v9 - 8;
      v11 = v9 - 8;
      do {
        v12 = *v11;
        v11 -= 8;
        (*v12)(v10);
        v13 = v10 == v8;
        v10 = v11;
      } while (!v13);
      v14 = (void (***)(_QWORD))a2[18];
      a2[19] = v8;
      v8 = v14;
      if (v14 != nullptr) {
      LABEL_12:
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v15, v8);
      }
    }
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v16 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v16, a2);
  }
  return result;
}

_QWORD* MapPanelTargetSelect_f17c00(_QWORD* a1, _QWORD* a2)
{
  _QWORD* v2;
  _QWORD* v4;
  _QWORD* v5;
  bool v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  void (***v12)(_QWORD);
  void (***v13)(_QWORD);
  void (***v14)(_QWORD);
  void (***v15)(_QWORD);
  void (**v16)(_QWORD);
  void (***v17)(_QWORD);
  __int64 v18;
  __int64 v19;

  v2 = (_QWORD*)a2[1];
  if (v2 != nullptr) {
    do {
      v4 = v2;
      v2 = (_QWORD*)*v2;
    } while (v2 != nullptr);
  }
  else {
    v5 = a2;
    do {
      v4 = (_QWORD*)v5[2];
      v6 = v5 == (_QWORD*)*v4;
      v5 = v4;
    } while (!v6);
  }
  if ((_QWORD*)*a1 == a2) {
    *a1 = v4;
  }
  v7 = a1[1];
  --a1[2];
  GameRoutine_64dfe0(v7, a2);
  v8 = a2[21];
  a2[6] = GameData_212f8b0[0] + 2;
  v9 = fw_memory_g_heap_manager_ptr;
  if (v8 != 0) {
    v10 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a2[22] = v8;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11, v8);
  }
  v12 = (void (***)(_QWORD))a2[18];
  if (v12 != nullptr) {
    v13 = (void (***)(_QWORD))a2[19];
    if (v12 == v13) {
      goto LABEL_19;
    }
    v14 = v13 - 8;
    v15 = v13 - 8;
    do {
      v16 = *v15;
      v15 -= 8;
      (*v16)(v14);
      v6 = v14 == v12;
      v14 = v15;
    } while (!v6);
    v17 = (void (***)(_QWORD))a2[18];
    a2[19] = v12;
    v12 = v17;
    if (v17 != nullptr) {
    LABEL_19:
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v18, v12);
    }
  }
  v19 = 128;
  if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
    v19 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v19, a2);
  return v4;
}

__int64 game_map_MapPanelTargetSelect_UpdateTarget_lambda0_Invoke(__int64 a1,
                                                                  __int64 a2)
{
  __int64 v2;
  int v4;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = *(unsigned __int16*)(a2 + 1);
  return GameRoutine_74e080(v2, &v4);
}

__int64 game_map_MapPanelTargetSelect_UpdateTarget_lambda1_Invoke(__int64 a1,
                                                                  _DWORD* a2,
                                                                  _DWORD* a3)
{
  char** v3;
  char* v4;
  char* v5;

  v3 = **(char****)(a1 + 8);
  v4 = *v3;
  v5 = v3[1];
  if (v4 == v5) {
    return 0;
  }
  while (*a2 != *v4 || *a3 != v4[1]) {
    v4 += 4;
    if (v4 == v5) {
      return 0;
    }
  }
  return 1;
}

#pragma GCC visibility pop
