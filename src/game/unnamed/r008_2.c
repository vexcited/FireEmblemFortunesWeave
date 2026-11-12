#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char GameData_1ae3834[];
extern __int64 GameData_212bf68;
extern __int64 GameData_212dce8;
extern __int64 GameData_2265ee0;
__int64 GameRoutine_138e5e0(_QWORD, _QWORD);
__int64 GameRoutine_14107c0(_QWORD, _QWORD);
__int64 GameRoutine_14127e0(_QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_144f120(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7a7dc0(const char*, ...);
__attribute__((swiftcall)) void game_facility_144f120(PSEUDO_X8, __int64,
                                                      __int64);
__int64 SceneManager_138e5e0(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
char* game_util_Format(const char*, ...);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
float game_facility_14107c0(__int64, __int64);
unsigned __int64 strlen(const char*);
void GameHr_14127e0(__int64, unsigned __int8*);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void GameHr_1495a90();

void GameHr_1495a90()
{
  __int64* v0;
  char* v1;
  __int64 v2;
  __int64 v3;
  char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
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
  struct {
    __int64 v31;
    __int64 v32;
  } v31_;
  struct {
    _QWORD v33[2];
    __int64 v34;
  } v33_;
  struct {
    __int64 v35;
    unsigned __int64 v36;
    char* v37;
  } v35_;

  v0 = (__int64*)GameData_212dce8;
  v1 = (char*)&v35_.v35 + 1;
  v2 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8);
  if (v2 == 0) {
    goto LABEL_26;
  }
  v3 = v2;
  v4 = game_util_Format(GameData_1ae3834, 0);
  v5 = strlen(v4);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_65;
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16,
                                               0);
    v35_.v36 = v6;
    v35_.v37 = v7;
    v35_.v35 = v8 | 1;
    goto LABEL_10;
  }
  v7 = (char*)&v35_.v35 + 1;
  LOBYTE(v35_.v35) = 2 * v5;
  if (v5 != 0) {
  LABEL_10:
    memmove((__int64)v7, (__int64)v4, v6);
  }
  v7[v6] = 0;
  game_facility_14107c0((__int64)v33_.v33, (__int64)&v35_.v35);
  v9 = *(_QWORD*)(v3 + 112);
  v10 = *(_QWORD*)(v3 + 120);
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    GameHr_14127e0(v9, (unsigned __int8*)v33_.v33);
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
    }
    if ((v33_.v33[0] & 1) == 0) {
      goto LABEL_21;
    }
    goto LABEL_17;
  }
  GameHr_14127e0(v9, (unsigned __int8*)v33_.v33);
  if ((v33_.v33[0] & 1) != 0) {
  LABEL_17:
    if (v33_.v34 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v33_.v34);
    }
  }
LABEL_21:
  if ((v35_.v35 & 1) != 0 && v35_.v37 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12,
                                  (__int64)v35_.v37);
  }
LABEL_26:
  v13 = SceneManager_138e5e0(*v0);
  if (v13 == 0) {
    goto LABEL_51;
  }
  v14 = v13;
  v15 = game_util_Format(GameData_1ae3834, 1);
  v16 = strlen(v15);
  if (v16 > 0xFFFFFFFFFFFFFFF6LL) {
  LABEL_65:
    String_60a1d0();
  }
  v17 = v16;
  if (v16 >= 0x17) {
    if ((v16 | 7) == 0x17) {
      v18 = 26;
    }
    else {
      v18 = (v16 | 7) + 1;
    }
    v1 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v18,
                                               16, 0);
    v35_.v36 = v17;
    v35_.v37 = v1;
    v35_.v35 = v18 | 1;
    goto LABEL_35;
  }
  LOBYTE(v35_.v35) = 2 * v16;
  if (v16 != 0) {
  LABEL_35:
    memmove((__int64)v1, (__int64)v15, v17);
  }
  v1[v17] = 0;
  game_facility_14107c0((__int64)v33_.v33, (__int64)&v35_.v35);
  v19 = *(_QWORD*)(v14 + 112);
  v20 = *(_QWORD*)(v14 + 120);
  if (v20 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                              memory_order_relaxed);
    GameHr_14127e0(v19, (unsigned __int8*)v33_.v33);
    if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      std___1___shared_weak_count___release_weak(v20);
    }
    if ((v33_.v33[0] & 1) == 0) {
      goto LABEL_46;
    }
    goto LABEL_42;
  }
  GameHr_14127e0(v19, (unsigned __int8*)v33_.v33);
  if ((v33_.v33[0] & 1) != 0) {
  LABEL_42:
    if (v33_.v34 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v33_.v34);
    }
  }
LABEL_46:
  if ((v35_.v35 & 1) != 0 && v35_.v37 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  (__int64)v35_.v37);
  }
LABEL_51:
  v23 = *(_QWORD*)(*v0 + 264);
  if (v23 != 0) {
    v24 = *(_QWORD*)(*v0 + 256);
    v25 = *(_QWORD*)(*v0 + 264);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 16), 1u,
                              memory_order_relaxed);
    v26 = std___1___shared_weak_count_lock(v25);
    std___1___shared_weak_count___release_weak(v23);
    if (v26 != 0) {
      if (v24 != 0) {
        v27 = fw_memory_g_heap_manager_ptr;
        v28 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
        v33_.v33[0] = 49;
        v33_.v33[1] = 41;
        v33_.v34 = v28;
        *(_WORD*)(v28 + 40) = 173;
        *(_QWORD*)(v28 + 16) = 0x83E38683E35FAF82LL;
        *(_QWORD*)(v28 + 24) = 0x5FA882E39E83E3ABLL;
        *(_QWORD*)(v28 + 32) = 0xB8E4B1A9E89ABCE4LL;
        *(_QWORD*)v28 = 0x83E3A183E3AB82E3LL;
        *(_QWORD*)(v28 + 8) = 0xE3BC83E3AF83E3A9LL;
        game_facility_144f120((void*)(&v31_.v31), v24, (__int64)v33_.v33);
        v29 = v31_.v32;
        if (v31_.v32 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v31_.v32 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
          std___1___shared_weak_count___release_weak(v29);
        }
        if ((v33_.v33[0] & 1) != 0 && v33_.v34 != 0) {
          v30 = 128;
          if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) == 0) {
            v30 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v27 + v30, v33_.v34);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
        std___1___shared_weak_count___release_weak(v26);
      }
    }
  }
}

#pragma GCC visibility pop
