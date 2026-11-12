#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_d9b060(PSEUDO_X8);
__attribute__((swiftcall)) void Manager_d9b420(PSEUDO_X8, _QWORD*,
                                               unsigned __int8*);
__attribute__((swiftcall)) void game_hub_d99f80(PSEUDO_X8);
__attribute__((swiftcall)) void game_hub_fb48a0(PSEUDO_X8, _QWORD, _QWORD);
__int64 HubCharacterNatives_cabfc0(__int64 result, char);
__int64 as_627e70(__int64, __int64, char, __int64, char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_hub_Character_RebuildAppearance(__int64);
__int64 game_zview_d12d30(__int64 result, int32x2_t*, char);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
bool llvm_libcxx_21_libcxx_include___memory_d2d4e0();
extern _QWORD as_g_context_slots[16384];
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN GameData_1a95d15;
extern __int64 (*GameData_1fdee00[14])();
extern __int64* as_g_script_manager_ptr;
extern __int64 GameData_212dc50[4];
extern __int64 GameData_21ec7c0;
extern __int64 GameData_2212268;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void CharacterRotate_d519c0(int8x16_t*);
void __attribute__((noreturn)) GameRoutine_8123d0();
void __attribute__((noreturn)) String_60a1d0();
void as_d9b900(__int64, __int64, __int64, __int64, __int64, __int64, __int64,
               __int64*);
void game_hub_d9a500_alt1(__int64, __int64, __int64) __asm__("game_hub_d9a500");
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_hub_d99d20(__int64 a1);
void game_hub_d9a500(_QWORD* a1, __int64 a2, __int64 a3);
void game_hub_d9a760(_QWORD* a1);
void game_hub_d9a9c0(_QWORD* a1);
void game_hub_d9ac20(_QWORD* a1);
__int64 game_hub_e1dce0();
__int64 game_hub_f8ad80(__int64 result);

void game_hub_d99d20(__int64 a1)
{
  unsigned __int8* v2;
  unsigned __int8* v3;
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  char* v14;
  char* v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int8* v19;
  unsigned __int8* v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    unsigned __int64 v26;
    char* v27;
  } v26_;
  struct {
    unsigned __int8* v28;
    unsigned __int8* v29;
  } v28_;

  game_hub_d99f80((void*)((__int64*)&v28_.v28));
  v2 = v28_.v28;
  v3 = v28_.v29;
  if (v28_.v28 != v28_.v29) {
    do {
      v4 = *v2;
      v5 = (v4 & 1) == 0;
      v6 = v4 >> 1;
      if (v5) {
        v7 = v6;
      }
      else {
        v7 = *((_QWORD*)v2 + 1);
      }
      if (v5) {
        v8 = (__int64)(v2 + 1);
      }
      else {
        v8 = *((_QWORD*)v2 + 2);
      }
      v9 = v7 + 10;
      if (v7 + 10 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      if (v9 > 0x16) {
        if ((v9 | 7) == 0x17) {
          v12 = 26;
        }
        else {
          v12 = (v9 | 7) + 1;
        }
        v11 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v12, 16,
                                             0);
        v26_.v26 = v7 + 10;
        v26_.v27 = (char*)v11;
        v25 = v12 | 1;
        v10 = v12 | 1;
      }
      else {
        v10 = 2 * v9;
        v11 = 0;
        v26_.v26 = 0;
        v26_.v27 = nullptr;
        v25 = (unsigned __int8)(2 * v9);
      }
      v13 = (v10 & 1) == 0;
      if ((v10 & 1) != 0) {
        v14 = (char*)v11;
      }
      else {
        v14 = (char*)&v25 + 1;
      }
      *(_QWORD*)v14 = *(_QWORD*)"Initialize";
      *((_WORD*)v14 + 4) = 25978;
      if (v13) {
        v15 = (char*)&v26_.v26 + 3;
      }
      else {
        v15 = (char*)(v11 + 10);
      }
      if (v7 != 0) {
        memmove((__int64)v15, v8, v7);
      }
      v15[v7] = 0;
      if ((v25 & 1) != 0) {
        v16 = v26_.v27;
      }
      else {
        v16 = (char*)&v25 + 1;
      }
      if ((v25 & 1) != 0) {
        v17 = v26_.v26;
      }
      else {
        v17 = (unsigned __int64)(unsigned __int8)v25 >> 1;
      }
      game_hub_d9a500_alt1(a1, (__int64)v16, v17);
      if ((v25 & 1) != 0 && v26_.v27 != nullptr) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, (__int64)v26_.v27);
      }
      v2 += 24;
    } while (v2 != v3);
    v2 = v28_.v28;
  }
  if (v2 != nullptr) {
    v19 = v28_.v29;
    if (v2 == v28_.v29) {
      goto LABEL_48;
    }
    v20 = v28_.v29;
    do {
      v21 = *(v20 - 24);
      v20 -= 24;
      if ((v21 & 1) != 0) {
        v22 = *((_QWORD*)v19 - 1);
        if (v22 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v23 = 128;
          }
          else {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v23, v22);
        }
      }
      v19 = v20;
    } while (v20 != v2);
    v28_.v29 = v2;
    v2 = v28_.v28;
    if (v28_.v28 != nullptr) {
    LABEL_48:
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, (__int64)v2);
    }
  }
}

void game_hub_d9a500(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  struct {
    __int64 v19;
    __int64 v20;
    __int64 v21;
  } v19_;
  struct {
    __int64 v22;
    __int64 v23;
    __int64 v24;
  } v22_;
  struct {
    _QWORD v25[2];
    __int64 v26;
    char gap104_[8];
    __int64 v27;
  } v25_;

  v22_.v23 = 0;
  v22_.v24 = 0;
  v22_.v22 = 0;
  GameRoutine_d9b060((void*)(v25_.v25));
  Manager_d9b420((void*)(&v19_.v19), a1, (unsigned __int8*)v25_.v25);
  v7 = v19_.v19;
  v6 = v19_.v20;
  if (v19_.v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19_.v20 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
    if ((v25_.v25[0] & 1) == 0) {
      goto LABEL_9;
    }
  }
  else if ((v25_.v25[0] & 1) == 0) {
    goto LABEL_9;
  }
  if (v25_.v26 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                  v25_.v26);
  }
LABEL_9:
  v9 = v22_.v22;
  if (v22_.v22 != 0) {
    v10 = v22_.v23;
    if (v22_.v22 == v22_.v23) {
      goto LABEL_16;
    }
    do {
      v11 = *(unsigned int*)(v10 - 8);
      v12 = v10 - 32;
      if ((_DWORD)v11 != -1) {
        ((void (*)(_QWORD*, __int64))GameData_1fdee00[v11])(v25_.v25, v10 - 32);
      }
      *(_DWORD*)(v10 - 8) = -1;
      v10 -= 32;
    } while (v12 != v9);
    v9 = v22_.v22;
    if (v22_.v22 != 0) {
    LABEL_16:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v9);
    }
  }
  if (v7 != 0) {
    v19_.v20 = 0;
    v19_.v21 = 0;
    v19_.v19 = 0;
    v22_.v23 = 0;
    v22_.v24 = 0;
    v22_.v22 = 0;
    as_d9b900((__int64)a1, (__int64)"void", 4, a2, a3, (__int64)&v19_.v19, 0,
              &v22_.v22);
    if (v18 != 0x2000) {
      v14 = &as_g_context_slots[2 * v18];
      v15 = v14[1];
      if (v15 != 0 && *v14 == v17 && *(_DWORD*)(v15 + 52) == 1) {
        v25_.v27 = 0;
        as_627e70(*as_g_script_manager_ptr, v15, 0, (__int64)v25_.v25, 0);
      }
    }
    if ((v22_.v22 & 1) != 0 && v22_.v24 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v22_.v24);
    }
  }
}

void game_hub_d9a760(_QWORD* a1)
{
  unsigned __int8* v2;
  unsigned __int8* v3;
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  char* v14;
  char* v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int8* v19;
  unsigned __int8* v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    unsigned __int64 v26;
    char* v27;
  } v26_;
  struct {
    unsigned __int8* v28;
    unsigned __int8* v29;
  } v28_;

  game_hub_d99f80((void*)((__int64*)&v28_.v28));
  v2 = v28_.v28;
  v3 = v28_.v29;
  if (v28_.v28 != v28_.v29) {
    do {
      v4 = *v2;
      v5 = (v4 & 1) == 0;
      v6 = v4 >> 1;
      if (v5) {
        v7 = v6;
      }
      else {
        v7 = *((_QWORD*)v2 + 1);
      }
      if (v5) {
        v8 = (__int64)(v2 + 1);
      }
      else {
        v8 = *((_QWORD*)v2 + 2);
      }
      v9 = v7 + 9;
      if (v7 + 9 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      if (v9 > 0x16) {
        if ((v9 | 7) == 0x17) {
          v12 = 26;
        }
        else {
          v12 = (v9 | 7) + 1;
        }
        v11 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v12, 16,
                                             0);
        v26_.v26 = v7 + 9;
        v26_.v27 = (char*)v11;
        v25 = v12 | 1;
        v10 = v12 | 1;
      }
      else {
        v10 = 2 * v9;
        v11 = 0;
        v26_.v26 = 0;
        v26_.v27 = nullptr;
        v25 = (unsigned __int8)(2 * v9);
      }
      v13 = (v10 & 1) == 0;
      if ((v10 & 1) != 0) {
        v14 = (char*)v11;
      }
      else {
        v14 = (char*)&v25 + 1;
      }
      *(_QWORD*)v14 = *(_QWORD*)"PreReload";
      v14[8] = 100;
      if (v13) {
        v15 = (char*)&v26_.v26 + 2;
      }
      else {
        v15 = (char*)(v11 + 9);
      }
      if (v7 != 0) {
        memmove((__int64)v15, v8, v7);
      }
      v15[v7] = 0;
      if ((v25 & 1) != 0) {
        v16 = v26_.v27;
      }
      else {
        v16 = (char*)&v25 + 1;
      }
      if ((v25 & 1) != 0) {
        v17 = v26_.v26;
      }
      else {
        v17 = (unsigned __int64)(unsigned __int8)v25 >> 1;
      }
      game_hub_d9a500(a1, (__int64)v16, v17);
      if ((v25 & 1) != 0 && v26_.v27 != nullptr) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, (__int64)v26_.v27);
      }
      v2 += 24;
    } while (v2 != v3);
    v2 = v28_.v28;
  }
  if (v2 != nullptr) {
    v19 = v28_.v29;
    if (v2 == v28_.v29) {
      goto LABEL_48;
    }
    v20 = v28_.v29;
    do {
      v21 = *(v20 - 24);
      v20 -= 24;
      if ((v21 & 1) != 0) {
        v22 = *((_QWORD*)v19 - 1);
        if (v22 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v23 = 128;
          }
          else {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v23, v22);
        }
      }
      v19 = v20;
    } while (v20 != v2);
    v28_.v29 = v2;
    v2 = v28_.v28;
    if (v28_.v28 != nullptr) {
    LABEL_48:
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, (__int64)v2);
    }
  }
}

void game_hub_d9a9c0(_QWORD* a1)
{
  unsigned __int8* v2;
  unsigned __int8* v3;
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  char* v14;
  char* v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int8* v19;
  unsigned __int8* v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    unsigned __int64 v26;
    char* v27;
  } v26_;
  struct {
    unsigned __int8* v28;
    unsigned __int8* v29;
  } v28_;

  game_hub_d99f80((void*)((__int64*)&v28_.v28));
  v2 = v28_.v28;
  v3 = v28_.v29;
  if (v28_.v28 != v28_.v29) {
    do {
      v4 = *v2;
      v5 = (v4 & 1) == 0;
      v6 = v4 >> 1;
      if (v5) {
        v7 = v6;
      }
      else {
        v7 = *((_QWORD*)v2 + 1);
      }
      if (v5) {
        v8 = (__int64)(v2 + 1);
      }
      else {
        v8 = *((_QWORD*)v2 + 2);
      }
      v9 = v7 + 10;
      if (v7 + 10 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      if (v9 > 0x16) {
        if ((v9 | 7) == 0x17) {
          v12 = 26;
        }
        else {
          v12 = (v9 | 7) + 1;
        }
        v11 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v12, 16,
                                             0);
        v26_.v26 = v7 + 10;
        v26_.v27 = (char*)v11;
        v25 = v12 | 1;
        v10 = v12 | 1;
      }
      else {
        v10 = 2 * v9;
        v11 = 0;
        v26_.v26 = 0;
        v26_.v27 = nullptr;
        v25 = (unsigned __int8)(2 * v9);
      }
      v13 = (v10 & 1) == 0;
      if ((v10 & 1) != 0) {
        v14 = (char*)v11;
      }
      else {
        v14 = (char*)&v25 + 1;
      }
      *(_QWORD*)v14 = *(_QWORD*)"PostReload";
      *((_WORD*)v14 + 4) = 25697;
      if (v13) {
        v15 = (char*)&v26_.v26 + 3;
      }
      else {
        v15 = (char*)(v11 + 10);
      }
      if (v7 != 0) {
        memmove((__int64)v15, v8, v7);
      }
      v15[v7] = 0;
      if ((v25 & 1) != 0) {
        v16 = v26_.v27;
      }
      else {
        v16 = (char*)&v25 + 1;
      }
      if ((v25 & 1) != 0) {
        v17 = v26_.v26;
      }
      else {
        v17 = (unsigned __int64)(unsigned __int8)v25 >> 1;
      }
      game_hub_d9a500(a1, (__int64)v16, v17);
      if ((v25 & 1) != 0 && v26_.v27 != nullptr) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, (__int64)v26_.v27);
      }
      v2 += 24;
    } while (v2 != v3);
    v2 = v28_.v28;
  }
  if (v2 != nullptr) {
    v19 = v28_.v29;
    if (v2 == v28_.v29) {
      goto LABEL_48;
    }
    v20 = v28_.v29;
    do {
      v21 = *(v20 - 24);
      v20 -= 24;
      if ((v21 & 1) != 0) {
        v22 = *((_QWORD*)v19 - 1);
        if (v22 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v23 = 128;
          }
          else {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v23, v22);
        }
      }
      v19 = v20;
    } while (v20 != v2);
    v28_.v29 = v2;
    v2 = v28_.v28;
    if (v28_.v28 != nullptr) {
    LABEL_48:
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, (__int64)v2);
    }
  }
}

void game_hub_d9ac20(_QWORD* a1)
{
  unsigned __int8* v2;
  unsigned __int8* v3;
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  char* v14;
  char* v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int8* v19;
  unsigned __int8* v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  struct {
    __int64 v25;
    unsigned __int64 v26;
    char* v27;
  } v25_;
  struct {
    unsigned __int8* v28;
    unsigned __int8* v29;
  } v28_;

  game_hub_d99f80((void*)((__int64*)&v28_.v28));
  v2 = v28_.v28;
  v3 = v28_.v29;
  if (v28_.v28 != v28_.v29) {
    do {
      v4 = *v2;
      v5 = (v4 & 1) == 0;
      v6 = v4 >> 1;
      if (v5) {
        v7 = v6;
      }
      else {
        v7 = *((_QWORD*)v2 + 1);
      }
      if (v5) {
        v8 = (__int64)(v2 + 1);
      }
      else {
        v8 = *((_QWORD*)v2 + 2);
      }
      v9 = v7 + 5;
      if (v7 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      if (v9 > 0x16) {
        if ((v9 | 7) == 0x17) {
          v12 = 26;
        }
        else {
          v12 = (v9 | 7) + 1;
        }
        v11 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v12, 16,
                                             0);
        v25_.v26 = v7 + 5;
        v25_.v27 = (char*)v11;
        v25_.v25 = v12 | 1;
        v10 = v12 | 1;
      }
      else {
        v10 = 2 * v9;
        v11 = 0;
        v25_.v26 = 0;
        v25_.v27 = nullptr;
        v25_.v25 = (unsigned __int8)(2 * v9);
      }
      v13 = (v10 & 1) == 0;
      if ((v10 & 1) != 0) {
        v14 = (char*)v11;
      }
      else {
        v14 = (char*)&v25_.v25 + 1;
      }
      v14[4] = 114;
      *(_DWORD*)v14 = 1702129221;
      if (v13) {
        v15 = (char*)&v25_.v25 + 6;
      }
      else {
        v15 = (char*)(v11 + 5);
      }
      if (v7 != 0) {
        memmove((__int64)v15, v8, v7);
      }
      v15[v7] = 0;
      if ((v25_.v25 & 1) != 0) {
        v16 = v25_.v27;
      }
      else {
        v16 = (char*)&v25_.v25 + 1;
      }
      if ((v25_.v25 & 1) != 0) {
        v17 = v25_.v26;
      }
      else {
        v17 = (unsigned __int64)(unsigned __int8)v25_.v25 >> 1;
      }
      game_hub_d9a500(a1, (__int64)v16, v17);
      if ((v25_.v25 & 1) != 0 && v25_.v27 != nullptr) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, (__int64)v25_.v27);
      }
      v2 += 24;
    } while (v2 != v3);
    v2 = v28_.v28;
  }
  if (v2 != nullptr) {
    v19 = v28_.v29;
    if (v2 == v28_.v29) {
      goto LABEL_48;
    }
    v20 = v28_.v29;
    do {
      v21 = *(v20 - 24);
      v20 -= 24;
      if ((v21 & 1) != 0) {
        v22 = *((_QWORD*)v19 - 1);
        if (v22 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v23 = 128;
          }
          else {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v23, v22);
        }
      }
      v19 = v20;
    } while (v20 != v2);
    v28_.v29 = v2;
    v2 = v28_.v28;
    if (v28_.v28 != nullptr) {
    LABEL_48:
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, (__int64)v2);
    }
  }
}

__int64 game_hub_e1dce0()
{
  __int64* v0;
  __int64* i;
  __int64 v2;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = *(__int64**)(GameData_21ec7c0 + 24);
  for (i = *(__int64**)(GameData_21ec7c0 + 32); v0 != i;
       result = game_hub_Character_RebuildAppearance(v2)) {
    v2 = *v0;
    v0 += 2;
  }
  return result;
}

__int64 game_hub_f8ad80(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float32x4_t* v20;
  __int64 v21;
  __int64 v22;
  float v24;
  float32x4_t v25;
  int8x16_t v26;
  __int64 v27;
  unsigned int v28;
  float32x4_t v29;
  _QWORD* v30;
  float v31;
  __int64 v32;
  int8x16_t* v33;
  int v34;
  __int64 v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  bool v43;
  float v44;
  float v45;
  float v46;
  float v47;
  unsigned int v48;
  float32x4_t v49;
  float32x4_t v50;
  float v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  __int128 v55;
  float32x4_t v56;
  struct {
    __int64 v57;
    int v58;
    char v59;
  } v57_;
  struct {
    int32x2_t v60;
    void* v61;
    float v62;
  } v60_;

  if ((*(_BYTE*)(result + 168) & 1) == 0) {
    if ((*(_BYTE*)(GameData_2212268 + 24) & 1) == 0) {
      GameRoutine_8123d0();
    }
    v1 = result;
    v2 = *(_QWORD*)GameData_212dc50[0];
    v3 = *(unsigned __int8*)(GameData_2212268 + 12);
    v4 = *(unsigned int*)(GameData_2212268 + 16);
    v5 = v4 << 32;
    if ((_DWORD)v3 == 9 || (_DWORD)v4 == 3) {
      v7 = 9;
      v8 = v5 | 9;
    }
    else {
      v8 = v5 | v3;
      if ((_DWORD)v4 == 2) {
        v9 = *(_QWORD*)GameData_212dc50[0];
        v60_.v61 = &GameData_1a95d15;
        LANES64(v60_.v60).n64_u64[0] =
            game_HashString((__int64)&GameData_1a95d15);
        if (game_GameModeData_instance_ != 0 &&
            (v10 = game_GameVariableTable_Find(
                 *(_QWORD**)(game_GameModeData_instance_ + 48),
                 LANES64(v60_.v60).n64_u64)) != 0) {
          v11 = *(_DWORD*)(v10 + 32);
          v2 = v9;
          v43 = v11 <= 0;
          v7 = 8;
          if (!v43) {
            v7 = 0x100000008LL;
          }
        }
        else {
          v7 = 8;
          v2 = v9;
        }
      }
      else {
        v12 = 7;
        v13 = 6;
        v14 = 5;
        v15 = 3;
        if ((_DWORD)v3 != 8) {
          v12 = 0;
        }
        if ((_DWORD)v3 != 7) {
          v13 = v12;
        }
        v16 = 4;
        if ((_DWORD)v3 != 6) {
          v14 = 0;
        }
        if ((_DWORD)v3 != 5) {
          v16 = v14;
        }
        v17 = 2;
        if (*(unsigned __int8*)(GameData_2212268 + 12) <= 6u) {
          v13 = v16;
        }
        v18 = 1;
        if ((_DWORD)v3 != 4) {
          v15 = 0;
        }
        if ((_DWORD)v3 != 3) {
          v17 = v15;
        }
        if ((_DWORD)v3 != 2) {
          v18 = v17;
        }
        if (*(unsigned __int8*)(GameData_2212268 + 12) <= 4u) {
          v7 = v18;
        }
        else {
          v7 = v13;
        }
      }
    }
    v57_.v58 = v7;
    v57_.v57 = v8;
    v57_.v59 = BYTE4(v7);
    result = (__int64)X8CALL_X0(
        void*, game_hub_fb48a0((void*)(&v60_.v60), v2, &v57_.v57));
    v19 = *(_QWORD*)(GameData_21ec7c0 + 80);
    if (v19 == 0) {
      goto LABEL_77;
    }
    v20 = *(float32x4_t**)(GameData_21ec7c0 + 72);
    v21 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
    v22 = std___1___shared_weak_count_lock(v21);
    result = std___1___shared_weak_count___release_weak(v19);
    if (v22 == 0 || v20 == nullptr) {
      if (v22 == 0) {
      LABEL_77:
        *(_BYTE*)(v1 + 168) = 1;
        return result;
      }
    LABEL_75:
      if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        result = std___1___shared_weak_count___release_weak(v22);
      }
      goto LABEL_77;
    }
    v24 = v60_.v62;
    game_zview_d12d30(*(_QWORD*)(LANES128(v20[1]).n128_u64[1] + 16), &v60_.v60,
                      1);
    v25 = vsubq_f32(
        v20[79],
        *(float32x4_t*)(*(_QWORD*)(LANES128(v20[1]).n128_u64[1] + 16) + 560LL));
    v26 = vmulq_f32(v25, v25);
    LANES128(v26).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
            .n64_f32[0] > 0x1.0000000000000p-23f) {
      v27 = *(_QWORD*)(GameData_21ec7c0 + 120);
      if ((*(_BYTE*)(v27 + 12) & 1) == 0) {
        *(_BYTE*)(v27 + 12) = 1;
      }
    }
    v28 = (unsigned int)v60_.v61;
    LANES128(v20[79]).n128_u64[0] = LANES64(v60_.v60).n64_u64[0];
    v29 = v20[79];
    LANES128(v29).n128_u64[1] = v28;
    v20[79] = v29;
    HubCharacterNatives_cabfc0((__int64)v20, 1);
    if ((LANES128(v20[83]).n128_u8[1] & 1) == 0) {
      LANES128(v20[83]).n128_u8[1] = 1;
    }
    v30 = *(_QWORD**)(LANES128(v20[1]).n128_u64[1] + 16);
    v31 = v24 * 0x1.1df46a0000000p-6f;
    if (v30[107] != 0) {
      v32 = v30[108];
      v30[107] = 0;
      v30[108] = 0;
      if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
        std___1___shared_weak_count___release_weak(v32);
      }
    }
    v33 = (int8x16_t*)v30[61];
    v34 = LANES128(v33[11]).n128_u8[4];
    LANES128(v33[2]).n128_f32[0] = v31;
    LANES128(v33[2]).n128_f32[1] = v31;
    if (v34 == 1) {
      LANES128(v33[11]).n128_u8[4] = 0;
    }
    CharacterRotate_d519c0(v33);
    v35 = *(_QWORD*)(LANES128(v20[1]).n128_u64[1] + 24);
    if (*(_BYTE*)(v35 + 96) == 1) {
      *(_BYTE*)(v35 + 96) = 0;
    }
    *(_BYTE*)(v35 + 25) = 0;
    v36 = v24 +
          (float)(roundf(v24 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
    if (v36 <= 0x1.921fb60000000p+0f) {
      v38 = v36;
      if (v36 >= -0x1.921fb60000000p+0f) {
      LABEL_61:
        v39 =
            v38 *
            (float)((float)((float)-(
                                float)(*(float*)((char*)((__int128*)0x10LL) +
                                                 (_QWORD)GameData_212c190) -
                                       (float)((float)(*(float*)((char*)((
                                                                     _UNKNOWN**)0x8LL) +
                                                                 (_QWORD)
                                                                     GameData_212c190 +
                                                                 4) +
                                                       (float)((float)-(
                                                                   float)(*(float*)((char*)((
                                                                                        _UNKNOWN**)0x8LL) +
                                                                                    (_QWORD)
                                                                                        GameData_212c190) -
                                                                          (float)((float)(*((float*)
                                                                                                GameData_212c190 +
                                                                                            1) -
                                                                                          (float)(*(float*)
                                                                                                      GameData_212c190 *
                                                                                                  (float)(v38 *
                                                                                                          v38))) *
                                                                                  (float)(v38 *
                                                                                          v38))) *
                                                               (float)(v38 *
                                                                       v38))) *
                                               (float)(v38 * v38))) *
                            (float)(v38 * v38)) +
                    0x1.0000000000000p+0f);
        if (v36 < -0x1.921fb60000000p+0f) {
          v40 = -0x1.0000000000000p+0f;
        }
        else {
          v40 = 0x1.0000000000000p+0f;
        }
        v41 = -0x1.921fb60000000p+1f - v36;
        if (v36 >= -0x1.921fb60000000p+0f) {
          v41 = v36;
        }
        v42 = 0x1.921fb60000000p+1f - v36;
        v43 = v36 <= 0x1.921fb60000000p+0f;
        if (v36 > 0x1.921fb60000000p+0f) {
          v44 = -0x1.0000000000000p+0f;
        }
        else {
          v44 = v40;
        }
        if (v43) {
          v45 = v41;
        }
        else {
          v45 = v42;
        }
        v46 = v45 * v45;
        v47 = *(float*)(LANES128(v20[1]).n128_u64[1] + 548);
        *(float*)&v48 =
            v44 *
            (float)((float)((float)-(
                                float)(*(float*)((char*)((__int128*)0x10LL) +
                                                 (_QWORD)GameData_212c188) -
                                       (float)((float)(*(float*)((char*)((
                                                                     _UNKNOWN**)0x8LL) +
                                                                 (_QWORD)
                                                                     GameData_212c188 +
                                                                 4) +
                                                       (float)((float)-(
                                                                   float)(*(float*)((char*)((
                                                                                        _UNKNOWN**)0x8LL) +
                                                                                    (_QWORD)
                                                                                        GameData_212c188) -
                                                                          (float)((float)(*((float*)
                                                                                                GameData_212c188 +
                                                                                            1) -
                                                                                          (float)(*(float*)
                                                                                                      GameData_212c188 *
                                                                                                  v46)) *
                                                                                  v46)) *
                                                               v46)) *
                                               v46)) *
                            v46) +
                    0x1.0000000000000p+0f);
        LANES128(v49).n128_u64[0] = LODWORD(v39);
        LANES128(v49).n128_u64[1] = v48;
        v56 = v49;
        result = llvm_libcxx_21_libcxx_include___memory_d2d4e0();
        LANES128(v50).n128_u32[0] = 0;
        LANES128(v50).n128_u64[1] = 0;
        v51 = v47 * 0x1.3333340000000p-1f;
        if ((result & 1) == 0) {
          v51 = v47;
        }
        LANES128(v50).n128_f32[1] = v51;
        v52 = vaddq_f32(
            v50, *(float32x4_t*)(*(_QWORD*)(LANES128(v20[1]).n128_u64[1] + 16) +
                                 560LL));
        LANES128(v53).n128_u64[0] = 0x41F0000041F00000LL;
        LANES128(v53).n128_u64[1] = 0x41F0000041F00000LL;
        v54 = vaddq_f32(vmulq_f32(v56, v53), v52);
        *(_QWORD*)(v1 + 176) = LANES128(v54).n128_u64[0];
        v55 = *(_OWORD*)(v1 + 176);
        *((_QWORD*)&v55 + 1) = LANES128(v54).n128_u32[2];
        *(_OWORD*)(v1 + 176) = v55;
        goto LABEL_75;
      }
      v37 = -0x1.921fb60000000p+1f;
    }
    else {
      v37 = 0x1.921fb60000000p+1f;
    }
    v38 = v37 - v36;
    goto LABEL_61;
  }
  return result;
}

#pragma GCC visibility pop
