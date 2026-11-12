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
void HubScript_Destructor_alt1(__int64 a1,
                               __n128 a2) __asm__("HubScript_Destructor");
void HubScript_d98960_alt1(_QWORD* a1, __int64 a2,
                           __n128 a3) __asm__("HubScript_d98960");
__attribute__((swiftcall)) void HubScript_d99940(PSEUDO_X8 x8_, __int64 a1);
__attribute__((swiftcall)) void game_eec580_alt1(PSEUDO_X8, _QWORD,
                                                 _QWORD) __asm__("game_eec580");
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64 GameRoutine_629ac0_alt1(__int64 result,
                                __int64) __asm__("GameRoutine_629ac0");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_7a8220_alt1(__int64*, _QWORD*) __asm__("GameRoutine_7a8220");
void GameRoutine_d99480_alt1(_QWORD*, const char*,
                             char) __asm__("GameRoutine_d99480");
void GameRoutine_d9d640_alt1(__int64*) __asm__("GameRoutine_d9d640");
void Manager_d9d980_alt1(_QWORD*) __asm__("Manager_d9d980");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void HubScript_Destructor(__int64 a1);
void HubScript_d98960(_QWORD* a1, __int64 a2);

void HubScript_Destructor(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
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
  __int64 v30;

  v1 = *(__int64**)(a1 + 32);
  v2 = *(__int64**)(a1 + 40);
  *(_QWORD*)a1 = game_hub_HubScript_vtable;
  if (v1 != v2) {
    do {
      v4 = *v1;
      v1 += 3;
      GameRoutine_629ac0_alt1(as_g_script_manager, v4);
    } while (v1 != v2);
    v1 = *(__int64**)(a1 + 32);
    v2 = *(__int64**)(a1 + 40);
  }
  for (; v2 != v1; v2 -= 3) {
    v5 = *(v2 - 2);
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak_alt1(v5);
    }
  }
  *(_QWORD*)(a1 + 40) = v1;
  Manager_d9d980_alt1((_QWORD*)(a1 + 96));
  if (GameData_22127d0 != 0) {
    v6 = GameData_22127d8-- <= 1;
    if (v6) {
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
    v6 = GameData_22127c8-- <= 1;
    if (v6) {
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
    v6 = GameData_22127b8-- <= 1;
    if (v6) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_22127b0 + 24LL))(
          (__int64)GameData_22127b0);
      if (GameData_22127b0 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_22127b0 + 8LL))(
            GameData_22127b0);
      }
      GameData_22127b0 = 0;
    }
  }
  GameRoutine_d9d640_alt1((__int64*)(a1 + 440));
  GameRoutine_d9d640_alt1((__int64*)(a1 + 400));
  GameRoutine_d9d640_alt1((__int64*)(a1 + 360));
  GameRoutine_d9d640_alt1((__int64*)(a1 + 320));
  GameRoutine_d9d640_alt1((__int64*)(a1 + 280));
  GameRoutine_d9d640_alt1((__int64*)(a1 + 240));
  GameRoutine_d9d640_alt1((__int64*)(a1 + 200));
  GameRoutine_d9d640_alt1((__int64*)(a1 + 160));
  v7 = *(_QWORD*)(a1 + 136);
  v8 = fw_memory_g_heap_manager_ptr;
  if (v7 != 0) {
    v9 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 144) = v7;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v9 + v10, v7);
  }
  v11 = *(_QWORD**)(a1 + 112);
  while (v11 != nullptr) {
    v13 = (__int64)v11;
    v11 = (_QWORD*)*v11;
    v14 = *(_QWORD*)(v13 + 48);
    if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak_alt1(v14);
      if ((*(_BYTE*)(v13 + 16) & 1) != 0) {
      LABEL_41:
        v15 = *(_QWORD*)(v13 + 32);
        if (v15 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
            v16 = 128;
          }
          else {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v8 + v16, v15);
        }
      }
    }
    else if ((*(_BYTE*)(v13 + 16) & 1) != 0) {
      goto LABEL_41;
    }
    if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
      v12 = 128;
    }
    else {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v8 + v12, v13);
  }
  v17 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)(a1 + 96) = 0;
  if (v17 != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v8 + v18, v17);
  }
  v19 = *(_QWORD**)(a1 + 72);
  if (v19 != nullptr) {
    do {
      v20 = (_QWORD*)*v19;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
        v21 = 128;
      }
      else {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v8 + v21, (__int64)v19);
      v19 = v20;
    } while (v20 != nullptr);
  }
  v22 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 56) = 0;
  if (v22 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v8 + v23, v22);
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
        std___1___shared_weak_count___release_weak_alt1(v26);
      }
      v25 -= 24;
    } while (v25 != v24);
    v27 = *(_QWORD*)(a1 + 32);
    *(_QWORD*)(a1 + 40) = v24;
    v24 = v27;
    if (v27 != 0) {
    LABEL_69:
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v8 + v28, v24);
    }
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v29 = *(_QWORD*)(a1 + 24);
    if (v29 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v8 + v30, v29);
    }
  }
}

void HubScript_d98960(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  const char* v11;
  __int64 v12;
  __int64 i;
  const char* v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  bool v20;
  unsigned __int64 v21;
  const char* v22;
  unsigned __int64 v23;
  const char* v24;
  __int64 v25;
  unsigned __int8* v26;
  unsigned __int8* v27;
  char v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  char v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  struct {
    __int64 v39[2];
    const char* v40;
  } v39_;
  struct {
    unsigned __int8* v41;
    unsigned __int8* v42;
  } v41_;
  struct {
    __int64 v43;
    __int64 v44;
  } v43_;

  v2 = a1[4];
  v3 = (__int64*)a1[5];
  if ((__int64*)v2 != v3) {
    do {
      if (*(_BYTE*)(v2 + 16) == 1) {
        GameRoutine_629ac0_alt1(as_g_script_manager, *(_QWORD*)v2);
      }
      v2 += 24;
    } while ((__int64*)v2 != v3);
    v2 = a1[4];
    v3 = (__int64*)a1[5];
  }
  if ((__int64*)v2 != v3) {
    while ((*(_BYTE*)(v2 + 16) & 1) == 0) {
      v2 += 24;
      if ((__int64*)v2 == v3) {
        goto LABEL_28;
      }
    }
  }
  if ((__int64*)v2 != v3) {
    v6 = (__int64*)(v2 + 24);
    if ((__int64*)(v2 + 24) != v3) {
      do {
        if ((v6[2] & 1) == 0) {
          v7 = *v6;
          v8 = v6[1];
          *v6 = 0;
          v6[1] = 0;
          v9 = *(_QWORD*)(v2 + 8);
          *(_QWORD*)v2 = v7;
          *(_QWORD*)(v2 + 8) = v8;
          if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
            std___1___shared_weak_count___release_weak_alt1(v9);
          }
          *(_BYTE*)(v2 + 16) = *((_BYTE*)v6 + 16);
          v2 += 24;
        }
        v6 += 3;
      } while (v6 != v3);
      v3 = (__int64*)a1[5];
    }
  }
  if ((__int64*)v2 != v3) {
    do {
      v10 = *(v3 - 2);
      if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak_alt1(v10);
      }
      v3 -= 3;
    } while (v3 != (__int64*)v2);
    a1[5] = v2;
  }
LABEL_28:
  Manager_d9d980_alt1(a1 + 12);
  if ((*(_BYTE*)a2 & 1) != 0) {
    v11 = *(const char**)(a2 + 16);
  }
  else {
    v11 = (const char*)(a2 + 1);
  }
  GameRoutine_d99480_alt1(a1, v11, 1);
  game_eec580_alt1((void*)(&v43_.v43), *GameData_212f098[0], a2);
  v12 = v43_.v43;
  for (i = v43_.v44; v12 != i; v12 += 24) {
    if ((*(_BYTE*)v12 & 1) != 0) {
      v14 = *(const char**)(v12 + 16);
    }
    else {
      v14 = (const char*)(v12 + 1);
    }
    GameRoutine_d99480_alt1(a1, v14, 1);
  }
  HubScript_d99940((void*)((__int64*)&v41_.v41), (__int64)a1);
  v15 = v41_.v41;
  v16 = v41_.v42;
  v17 = fw_memory_g_heap_manager_ptr;
  if (v41_.v41 != v41_.v42) {
    do {
      if ((*(_BYTE*)a2 & 1) != 0) {
        fw_text_String_CopyTerminated(v39_.v39, *(_QWORD*)(a2 + 16),
                                      *(_QWORD*)(a2 + 8));
      }
      else {
        v18 = *(_QWORD*)(a2 + 8);
        v39_.v39[0] = *(_QWORD*)a2;
        v39_.v39[1] = v18;
        v39_.v40 = *(const char**)(a2 + 16);
      }
      GameRoutine_1a09ce0_alt1((__int64)v39_.v39, "_", 1u);
      v19 = *v15;
      v20 = (v19 & 1) == 0;
      v21 = v19 >> 1;
      if (v20) {
        v22 = (const char*)(v15 + 1);
      }
      else {
        v22 = *((const char**)v15 + 2);
      }
      if (v20) {
        v23 = v21;
      }
      else {
        v23 = *((_QWORD*)v15 + 1);
      }
      GameRoutine_1a09ce0_alt1((__int64)v39_.v39, v22, v23);
      if ((v39_.v39[0] & 1) != 0) {
        v24 = v39_.v40;
      }
      else {
        v24 = (char*)v39_.v39 + 1;
      }
      GameRoutine_d99480_alt1(a1, v24, 1);
      if ((v39_.v39[0] & 1) != 0 && v39_.v40 != nullptr) {
        if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
          v25 = 128;
        }
        else {
          v25 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v17 + v25,
                                           (__int64)v39_.v40);
      }
      v15 += 24;
    } while (v15 != v16);
    v15 = v41_.v41;
  }
  if (v15 != nullptr) {
    v26 = v41_.v42;
    if (v15 == v41_.v42) {
      goto LABEL_69;
    }
    v27 = v41_.v42;
    do {
      v28 = *(v27 - 24);
      v27 -= 24;
      if ((v28 & 1) != 0) {
        v29 = *((_QWORD*)v26 - 1);
        if (v29 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
            v30 = 128;
          }
          else {
            v30 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v17 + v30, v29);
        }
      }
      v26 = v27;
    } while (v27 != v15);
    v41_.v42 = v15;
    v15 = v41_.v41;
    if (v41_.v41 != nullptr) {
    LABEL_69:
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v17 + v31, (__int64)v15);
    }
  }
  v32 = v43_.v43;
  if (v43_.v43 != 0) {
    v33 = v43_.v44;
    if (v43_.v43 == v43_.v44) {
      goto LABEL_83;
    }
    v34 = v43_.v44;
    do {
      v35 = *(_BYTE*)(v34 - 24);
      v34 -= 24;
      if ((v35 & 1) != 0) {
        v36 = *(_QWORD*)(v33 - 8);
        if (v36 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
            v37 = 128;
          }
          else {
            v37 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v17 + v37, v36);
        }
      }
      v33 = v34;
    } while (v34 != v32);
    v43_.v44 = v32;
    v32 = v43_.v43;
    if (v43_.v43 != 0) {
    LABEL_83:
      v38 = 128;
      if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v17 + v38, v32);
    }
  }
}

__attribute__((swiftcall)) void HubScript_d99940(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
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
  const char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  const char* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  struct {
    __int64 v27;
    unsigned __int64 v28;
    char* v29;
  } v27_;

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
          strcpy((char*)&v27_.v27, "\nPart3");
          goto LABEL_38;
        default:
          v10 = 0;
          break;
        }
      }
      v13 = (const char*)v5[2 * v10];
      v14 = strlen_alt1(v13);
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
        v27_.v28 = v15;
        v27_.v29 = v16;
        v27_.v27 = v17 | 1;
      }
      else {
        v16 = (char*)&v27_.v27 + 1;
        LOBYTE(v27_.v27) = 2 * v14;
        if (v14 == 0) {
          goto LABEL_37;
        }
      }
      memmove_alt1((__int64)v16, (__int64)v13, v15);
    LABEL_37:
      v16[v15] = 0;
    LABEL_38:
      GameRoutine_7a8220_alt1(a2, &v27_.v27);
      if ((v27_.v27 & 1) != 0 && v27_.v29 != nullptr) {
        v18 = 128;
        if (*(_QWORD*)(*v6 + 200) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v6 + v18, (__int64)v27_.v29);
      }
      if (++v3 == v2) {
        return;
      }
    }
  }
  if (game_GameModeData_instance_ == 0) {
    v20 = 0;
    goto LABEL_52;
  }
  v19 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  v20 = 0;
  if (v19 <= 4) {
    if (*(unsigned __int8*)(game_GameModeData_instance_ + 15) > 2u) {
      if (v19 == 3) {
        v20 = 3;
      }
      else if (v19 == 4) {
        v20 = 8;
      }
    }
    else if (v19 == 1) {
      v20 = 1;
    }
    else if (v19 == 2) {
      v20 = 2;
    }
  LABEL_52:
    v21 = (const char*)GameData_212f0f0[2 * v20];
    v22 = strlen_alt1(v21);
    if (v22 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_83:
      String_60a1d0();
    }
    v23 = v22;
    if (v22 >= 0x17) {
      if ((v22 | 7) == 0x17) {
        v25 = 26;
      }
      else {
        v25 = (v22 | 7) + 1;
      }
      v24 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v25, 16, 0);
      v27_.v28 = v23;
      v27_.v29 = v24;
      v27_.v27 = v25 | 1;
    }
    else {
      LOBYTE(v27_.v27) = 2 * v22;
      v24 = (char*)&v27_.v27 + 1;
      if (v22 == 0) {
        goto LABEL_61;
      }
    }
    memmove_alt1((__int64)v24, (__int64)v21, v23);
  LABEL_61:
    v24[v23] = 0;
    goto LABEL_62;
  }
  if (*(unsigned __int8*)(game_GameModeData_instance_ + 15) <= 6u) {
    if (v19 == 5) {
      v20 = 5;
    }
    else if (v19 == 6) {
      v20 = 6;
    }
    goto LABEL_52;
  }
  if (v19 == 7) {
    v20 = 4;
    goto LABEL_52;
  }
  if (v19 == 8) {
    v20 = 7;
    goto LABEL_52;
  }
  if (v19 != 9) {
    goto LABEL_52;
  }
  strcpy((char*)&v27_.v27, "\nPart3");
LABEL_62:
  GameRoutine_7a8220_alt1(a2, &v27_.v27);
  if ((v27_.v27 & 1) != 0 && v27_.v29 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, (__int64)v27_.v29);
  }
}

#pragma GCC visibility pop
