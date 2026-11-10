#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14127e0(__int64, unsigned __int8*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 strlen(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
__n128 std___1___shared_weak_count___release_weak();
extern _UNKNOWN GameData_1bd2570;
extern _UNKNOWN game_g_random_mutex;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_2246328;
extern __int64 GameData_2246330;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) String_60a1d0();
void ExpressionLoop_anonymousnamespace_SceneCharacterBehaviorRandomExpression_Start(
    __int64 a1);

void ExpressionLoop_anonymousnamespace_SceneCharacterBehaviorRandomExpression_Start(
    __int64 a1)
{
  unsigned __int64 v2;
  __int64* v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  int v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  int v18;
  char v19;
  __int16 v20;
  unsigned __int8* v21;
  unsigned __int8 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  struct {
    __int64 v30;
    unsigned __int64 v31;
    char* v32;
  } v30_;
  struct {
    __int64 v33;
    unsigned __int64 v34;
    __int64 v35;
    int v36;
    char v37;
    char gap61_[3];
    _BYTE v38[14];
  } v33_;

  if (GameData_2246330 == GameData_2246328) {
    v9 = &GameData_1bd2570;
  }
  else {
    v2 = (unsigned __int64)(GameData_2246330 - GameData_2246328) >> 3;
    nn_os_LockMutex(&game_g_random_mutex);
    v3 = game_map_MapRandom_instance__ptr[0];
    v4 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((_UNKNOWN**)0x8LL));
    v5 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
    v6 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
         (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
    *((_DWORD*)v3 + 1) = v4;
    v7 = (v6 >> 8) ^ (v5 >> 19) ^ v6 ^ v5;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3) = v5;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4) = v7;
    v8 = v7 & 0x7FFFFFFF;
    nn_os_UnlockMutex(&game_g_random_mutex);
    v9 = (_QWORD*)(GameData_2246328 + 8LL * (unsigned int)(v8 % (int)v2));
  }
  v10 = *v9;
  v11 = strlen(*v9);
  if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v12 = v11;
  if (v11 >= 0x17) {
    if ((v11 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (v11 | 7) + 1;
    }
    v13 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v14,
                                                16, 0);
    v30_.v31 = v12;
    v30_.v32 = v13;
    v30_.v30 = v14 | 1;
    goto LABEL_12;
  }
  LOBYTE(v30_.v30) = 2 * v11;
  v13 = (char*)&v30_.v30 + 1;
  if (v11 != 0) {
  LABEL_12:
    memmove(v13, v10, v12);
  }
  v13[v12] = 0;
  v15 = *(_DWORD*)(a1 + 64);
  v16 = *(_DWORD*)(a1 + 68);
  v17 = *(_DWORD*)(a1 + 72);
  v18 = *(_DWORD*)(a1 + 56);
  v19 = *(_BYTE*)(a1 + 60);
  v20 = *(_WORD*)(a1 + 76);
  v21 = (unsigned __int8*)(a1 + 32);
  if ((v30_.v30 & 1) != 0) {
    fw_text_String_CopyTerminated(&v33_.v33, (__int64)v30_.v32, v30_.v31);
  }
  else {
    v33_.v33 = v30_.v30;
    v33_.v34 = v30_.v31;
    v33_.v35 = (__int64)v30_.v32;
  }
  v22 = *v21;
  v33_.v36 = v18;
  v33_.v37 = v19;
  *(_DWORD*)v33_.v38 = v15;
  *(_DWORD*)&v33_.v38[4] = v16;
  *(_DWORD*)&v33_.v38[8] = v17;
  *(_WORD*)&v33_.v38[12] = v20;
  if ((v22 & 1) != 0 && *(_QWORD*)(a1 + 48) != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v23);
    v18 = v33_.v36;
    v19 = v33_.v37;
  }
  v24 = v33_.v33;
  v25 = v33_.v34;
  LOWORD(v33_.v33) = 0;
  *(_DWORD*)(a1 + 56) = v18;
  *(_BYTE*)(a1 + 60) = v19;
  *(_QWORD*)v21 = v24;
  *(_QWORD*)(a1 + 40) = v25;
  *(_QWORD*)(a1 + 48) = v33_.v35;
  *(_QWORD*)(a1 + 64) = *(_QWORD*)v33_.v38;
  *(_QWORD*)(a1 + 70) = *(_QWORD*)&v33_.v38[6];
  if ((v30_.v30 & 1) != 0 && v30_.v32 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26);
  }
  v27 = *(_QWORD*)(a1 + 16);
  v28 = *(_QWORD*)(v27 + 112);
  v29 = *(_QWORD*)(v27 + 120);
  if (v29 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_14127e0(v28, v21);
    if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
      std___1___shared_weak_count___release_weak();
    }
  }
  else {
    GameRoutine_14127e0(v28, v21);
  }
}

#pragma GCC visibility pop
