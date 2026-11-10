#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_7a8220(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void game_eec580(PSEUDO_X8, _QWORD, _QWORD,
                                            long double);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d9d640(__int64 result);
__int64 Manager_d9d980(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
__n128 GameRoutine_d99480(_QWORD*, __int64, char);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN** GameData_212f0f0;
extern _UNKNOWN GameData_1ac690d;
extern __int64 (*game_hub_HubScript_vtable[])();
extern __int64* GameData_212f098[2];
extern __int64 GameData_22127b0;
extern __int64 GameData_22127c0;
extern __int64 GameData_22127d0;
extern __int64 as_g_script_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern int GameData_22127b8;
extern int GameData_22127c8;
extern int GameData_22127d8;
void GameRoutine_629ac0(__int64, __int64, __n128);
void __attribute__((noreturn)) String_60a1d0();
void HubScript_Destructor(__int64 a1, __n128 a2);
void HubScript_d98960(_QWORD* a1, __int64 a2, __n128 a3);
__attribute__((swiftcall)) void HubScript_d99940(PSEUDO_X8 x8_, __int64 a1);

void HubScript_Destructor(__int64 a1, __n128 a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;

  v2 = *(__int64**)(a1 + 32);
  v3 = *(__int64**)(a1 + 40);
  *(_QWORD*)a1 = game_hub_HubScript_vtable;
  if (v2 != v3) {
    do {
      v5 = *v2;
      v2 += 3;
      GameRoutine_629ac0(as_g_script_manager, v5, a2);
    } while (v2 != v3);
    v2 = *(__int64**)(a1 + 32);
    v3 = *(__int64**)(a1 + 40);
  }
  for (; v3 != v2; v3 -= 3) {
    v6 = *(v3 - 2);
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  *(_QWORD*)(a1 + 40) = v2;
  Manager_d9d980(a1 + 96);
  if (GameData_22127d0 != 0) {
    v7 = GameData_22127d8-- <= 1;
    if (v7) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_22127d0 + 24LL))(
          (__int64)GameData_22127d0);
      if (GameData_22127d0 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_22127d0 + 8LL))(
            GameData_22127d0);
      }
      GameData_22127d0 = 0;
    }
  }
  if (GameData_22127c0 != 0) {
    v7 = GameData_22127c8-- <= 1;
    if (v7) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_22127c0 + 24LL))(
          (__int64)GameData_22127c0);
      if (GameData_22127c0 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_22127c0 + 8LL))(
            GameData_22127c0);
      }
      GameData_22127c0 = 0;
    }
  }
  if (GameData_22127b0 != 0) {
    v7 = GameData_22127b8-- <= 1;
    if (v7) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_22127b0 + 24LL))(
          (__int64)GameData_22127b0);
      if (GameData_22127b0 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_22127b0 + 8LL))(
            GameData_22127b0);
      }
      GameData_22127b0 = 0;
    }
  }
  GameRoutine_d9d640(a1 + 440);
  GameRoutine_d9d640(a1 + 400);
  GameRoutine_d9d640(a1 + 360);
  GameRoutine_d9d640(a1 + 320);
  GameRoutine_d9d640(a1 + 280);
  GameRoutine_d9d640(a1 + 240);
  GameRoutine_d9d640(a1 + 200);
  GameRoutine_d9d640(a1 + 160);
  v8 = *(_QWORD*)(a1 + 136);
  v9 = fw_memory_g_heap_manager_ptr;
  if (v8 != 0) {
    v10 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 144) = v8;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11);
  }
  v12 = *(_QWORD**)(a1 + 112);
  while (v12 != nullptr) {
    v14 = v12;
    v12 = (_QWORD*)*v12;
    v15 = v14[6];
    if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak(v15);
      if ((v14[2] & 1) != 0) {
      LABEL_41:
        if (v14[4] != 0) {
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v16 = 128;
          }
          else {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v16);
        }
      }
    }
    else if ((v14[2] & 1) != 0) {
      goto LABEL_41;
    }
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
      v13 = 128;
    }
    else {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v13);
  }
  v17 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)(a1 + 96) = 0;
  if (v17 != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v18);
  }
  v19 = *(_QWORD**)(a1 + 72);
  if (v19 != nullptr) {
    do {
      v20 = (_QWORD*)*v19;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
        v21 = 128;
      }
      else {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v21);
      v19 = v20;
    } while (v20 != nullptr);
  }
  v22 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 56) = 0;
  if (v22 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v23);
  }
  v24 = *(_QWORD*)(a1 + 32);
  if (v24 != 0) {
    v25 = *(_QWORD*)(a1 + 40);
    if (v24 == v25) {
      goto LABEL_69;
    }
    do {
      v26 = *(_QWORD*)(v25 - 16);
      if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
        std___1___shared_weak_count___release_weak(v26);
      }
      v25 -= 24;
    } while (v25 != v24);
    v27 = *(_QWORD*)(a1 + 32);
    *(_QWORD*)(a1 + 40) = v24;
    if (v27 != 0) {
    LABEL_69:
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v28);
    }
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0 && *(_QWORD*)(a1 + 24) != 0) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v29);
  }
}

void HubScript_d98960(_QWORD* a1, __int64 a2, __n128 a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64* v4;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  long double v13;
  __int64 v14;
  __int64 i;
  __int64 v16;
  unsigned __int8* v17;
  unsigned __int8* v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  bool v22;
  unsigned __int64 v23;
  unsigned __int8* v24;
  unsigned __int64 v25;
  char* v26;
  __int64 v27;
  unsigned __int8* v28;
  unsigned __int8* v29;
  char v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  char v36;
  __int64 v37;
  __int64 v38;
  struct {
    __int64 v39[2];
    char* v40;
  } v39_;
  struct {
    unsigned __int8* v41;
    unsigned __int8* v42;
  } v41_;
  struct {
    __int64 v43;
    __int64 v44;
  } v43_;

  v3 = a1[4];
  v4 = (__int64*)a1[5];
  if ((__int64*)v3 != v4) {
    do {
      if (*(_BYTE*)(v3 + 16) == 1) {
        GameRoutine_629ac0(as_g_script_manager, *(_QWORD*)v3, a3);
      }
      v3 += 24;
    } while ((__int64*)v3 != v4);
    v3 = a1[4];
    v4 = (__int64*)a1[5];
  }
  if ((__int64*)v3 != v4) {
    while ((*(_BYTE*)(v3 + 16) & 1) == 0) {
      v3 += 24;
      if ((__int64*)v3 == v4) {
        goto LABEL_28;
      }
    }
  }
  if ((__int64*)v3 != v4) {
    v7 = (__int64*)(v3 + 24);
    if ((__int64*)(v3 + 24) != v4) {
      do {
        if ((v7[2] & 1) == 0) {
          v8 = *v7;
          v9 = v7[1];
          *v7 = 0;
          v7[1] = 0;
          v10 = *(_QWORD*)(v3 + 8);
          *(_QWORD*)v3 = v8;
          *(_QWORD*)(v3 + 8) = v9;
          if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
            std___1___shared_weak_count___release_weak(v10);
          }
          *(_BYTE*)(v3 + 16) = *((_BYTE*)v7 + 16);
          v3 += 24;
        }
        v7 += 3;
      } while (v7 != v4);
      v4 = (__int64*)a1[5];
    }
  }
  if ((__int64*)v3 != v4) {
    do {
      v11 = *(v4 - 2);
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak(v11);
      }
      v4 -= 3;
    } while (v4 != (__int64*)v3);
    a1[5] = v3;
  }
LABEL_28:
  Manager_d9d980((__int64)(a1 + 12));
  if ((*(_BYTE*)a2 & 1) != 0) {
    v12 = *(_QWORD*)(a2 + 16);
  }
  else {
    v12 = a2 + 1;
  }
  *(__n128*)&v13 = GameRoutine_d99480(a1, v12, 1);
  game_eec580((void*)(&v43_.v43), *GameData_212f098[0], a2, v13);
  v14 = v43_.v43;
  for (i = v43_.v44; v14 != i; v14 += 24) {
    if ((*(_BYTE*)v14 & 1) != 0) {
      v16 = *(_QWORD*)(v14 + 16);
    }
    else {
      v16 = v14 + 1;
    }
    GameRoutine_d99480(a1, v16, 1);
  }
  HubScript_d99940((void*)(&v41_.v41), (__int64)a1);
  v17 = v41_.v41;
  v18 = v41_.v42;
  v19 = fw_memory_g_heap_manager_ptr;
  if (v41_.v41 != v41_.v42) {
    do {
      if ((*(_BYTE*)a2 & 1) != 0) {
        fw_text_String_CopyTerminated(v39_.v39, *(_QWORD*)(a2 + 16),
                                      *(_QWORD*)(a2 + 8));
      }
      else {
        v20 = *(_QWORD*)(a2 + 8);
        v39_.v39[0] = *(_QWORD*)a2;
        v39_.v39[1] = v20;
        v39_.v40 = *(char**)(a2 + 16);
      }
      GameRoutine_1a09ce0(v39_.v39, &GameData_1ac690d, 1);
      v21 = *v17;
      v22 = (v21 & 1) == 0;
      v23 = v21 >> 1;
      if (v22) {
        v24 = v17 + 1;
      }
      else {
        v24 = *((unsigned __int8**)v17 + 2);
      }
      if (v22) {
        v25 = v23;
      }
      else {
        v25 = *((_QWORD*)v17 + 1);
      }
      GameRoutine_1a09ce0(v39_.v39, v24, v25);
      if ((v39_.v39[0] & 1) != 0) {
        v26 = v39_.v40;
      }
      else {
        v26 = (char*)v39_.v39 + 1;
      }
      GameRoutine_d99480(a1, (__int64)v26, 1);
      if ((v39_.v39[0] & 1) != 0 && v39_.v40 != nullptr) {
        if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
          v27 = 128;
        }
        else {
          v27 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v27);
      }
      v17 += 24;
    } while (v17 != v18);
    v17 = v41_.v41;
  }
  if (v17 != nullptr) {
    v28 = v41_.v42;
    if (v17 == v41_.v42) {
      goto LABEL_69;
    }
    v29 = v41_.v42;
    do {
      v30 = *(v29 - 24);
      v29 -= 24;
      if ((v30 & 1) != 0 && *((_QWORD*)v28 - 1) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
          v31 = 128;
        }
        else {
          v31 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v31);
      }
      v28 = v29;
    } while (v29 != v17);
    v41_.v42 = v17;
    if (v41_.v41 != nullptr) {
    LABEL_69:
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v32);
    }
  }
  v33 = v43_.v43;
  if (v43_.v43 != 0) {
    v34 = v43_.v44;
    if (v43_.v43 == v43_.v44) {
      goto LABEL_83;
    }
    v35 = v43_.v44;
    do {
      v36 = *(_BYTE*)(v35 - 24);
      v35 -= 24;
      if ((v36 & 1) != 0 && *(_QWORD*)(v34 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
          v37 = 128;
        }
        else {
          v37 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v37);
      }
      v34 = v35;
    } while (v35 != v33);
    v43_.v44 = v33;
    if (v43_.v43 != 0) {
    LABEL_83:
      v38 = 128;
      if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v38);
    }
  }
}

__attribute__((swiftcall)) void HubScript_d99940(PSEUDO_X8 x8_, __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned __int8* v2;
  unsigned __int8* v3;
  _UNKNOWN** v5;
  __int64* v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  void* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  _QWORD* result;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  void* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  struct {
    __int64 v28;
    unsigned __int64 v29;
    char* v30;
  } v28_;

  v3 = *(unsigned __int8**)(a1 + 136);
  v2 = *(unsigned __int8**)(a1 + 144);
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  if (v2 != v3) {
    v5 = GameData_212f0f0;
    v6 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v7 = *v3;
      if (v7 <= 4) {
        v8 = 8;
        if (v7 != 4) {
          v8 = 0;
        }
        if (v7 == 3) {
          v8 = 3;
        }
        v9 = 2;
        if (v7 != 2) {
          v9 = 0;
        }
        if (v7 == 1) {
          v9 = 1;
        }
        if (*v3 <= 2u) {
          v10 = v9;
        }
        else {
          v10 = v8;
        }
      }
      else if (*v3 <= 6u) {
        v11 = 6;
        if (v7 != 6) {
          v11 = 0;
        }
        v12 = v7 == 5;
        v10 = 5;
        if (!v12) {
          v10 = v11;
        }
      }
      else {
        switch (v7) {
        case 7u:
          v10 = 4;
          break;
        case 8u:
          v10 = 7;
          break;
        case 9u:
          strcpy((char*)&v28_.v28, "\nPart3");
          goto LABEL_38;
        default:
          v10 = 0;
          break;
        }
      }
      v13 = v5[2 * v10];
      v14 = strlen(v13);
      if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_83;
      }
      v15 = v14;
      if (v14 >= 0x17) {
        if ((v14 | 7) == 0x17) {
          v17 = 26;
        }
        else {
          v17 = (v14 | 7) + 1;
        }
        v16 = (char*)fw_memory_HeapManager_Allocate(*v6, v17, 16, 0);
        v28_.v29 = v15;
        v28_.v30 = v16;
        v28_.v28 = v17 | 1;
      }
      else {
        v16 = (char*)&v28_.v28 + 1;
        LOBYTE(v28_.v28) = 2 * v14;
        if (v14 == 0) {
          goto LABEL_37;
        }
      }
      memmove(v16, v13, v15);
    LABEL_37:
      v16[v15] = 0;
    LABEL_38:
      result = GameRoutine_7a8220(a2, &v28_.v28);
      if ((v28_.v28 & 1) != 0 && v28_.v30 != nullptr) {
        v19 = 128;
        if (*(_QWORD*)(*v6 + 200) == 0) {
          v19 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*v6 + v19);
      }
      if (++v3 == v2) {
        result;
        return;
      }
    }
  }
  if (game_GameModeData_instance_ == 0) {
    v21 = 0;
    goto LABEL_52;
  }
  v20 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  v21 = 0;
  if (v20 <= 4) {
    if (*(unsigned __int8*)(game_GameModeData_instance_ + 15) > 2u) {
      if (v20 == 3) {
        v21 = 3;
      }
      else if (v20 == 4) {
        v21 = 8;
      }
    }
    else if (v20 == 1) {
      v21 = 1;
    }
    else if (v20 == 2) {
      v21 = 2;
    }
  LABEL_52:
    v22 = GameData_212f0f0[2 * v21];
    v23 = strlen(v22);
    if (v23 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_83:
      String_60a1d0();
    }
    v24 = v23;
    if (v23 >= 0x17) {
      if ((v23 | 7) == 0x17) {
        v26 = 26;
      }
      else {
        v26 = (v23 | 7) + 1;
      }
      v25 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v26, 16, 0);
      v28_.v29 = v24;
      v28_.v30 = v25;
      v28_.v28 = v26 | 1;
    }
    else {
      LOBYTE(v28_.v28) = 2 * v23;
      v25 = (char*)&v28_.v28 + 1;
      if (v23 == 0) {
        goto LABEL_61;
      }
    }
    memmove(v25, v22, v24);
  LABEL_61:
    v25[v24] = 0;
    goto LABEL_62;
  }
  if (*(unsigned __int8*)(game_GameModeData_instance_ + 15) <= 6u) {
    if (v20 == 5) {
      v21 = 5;
    }
    else if (v20 == 6) {
      v21 = 6;
    }
    goto LABEL_52;
  }
  if (v20 == 7) {
    v21 = 4;
    goto LABEL_52;
  }
  if (v20 == 8) {
    v21 = 7;
    goto LABEL_52;
  }
  if (v20 != 9) {
    goto LABEL_52;
  }
  strcpy((char*)&v28_.v28, "\nPart3");
LABEL_62:
  result = GameRoutine_7a8220(a2, &v28_.v28);
  if ((v28_.v28 & 1) != 0 && v28_.v30 != nullptr) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    {
      (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
      return;
    }
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
