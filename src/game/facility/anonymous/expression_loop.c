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
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameHr_14127e0(__int64, unsigned __int8*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

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
  const char** v9;
  const char* v10;
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
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  struct {
    __int64 v31;
    unsigned __int64 v32;
    char* v33;
  } v31_;
  struct {
    __int64 v34;
    unsigned __int64 v35;
    __int64 v36;
    int v37;
    char v38;
    char gap61_[3];
    _BYTE v39[14];
  } v34_;

  if (GameData_2246330 == GameData_2246328) {
    v9 = (const char**)&GameData_1bd2570;
  }
  else {
    v2 = (unsigned __int64)(GameData_2246330 - GameData_2246328) >> 3;
    nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
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
    nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
    v9 = (const char**)(GameData_2246328 + 8LL * (unsigned int)(v8 % (int)v2));
  }
  v10 = *v9;
  v11 = strlen_alt1(*v9);
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
    v31_.v32 = v12;
    v31_.v33 = v13;
    v31_.v31 = v14 | 1;
    goto LABEL_12;
  }
  LOBYTE(v31_.v31) = 2 * v11;
  v13 = (char*)&v31_.v31 + 1;
  if (v11 != 0) {
  LABEL_12:
    memmove_alt1((__int64)v13, (__int64)v10, v12);
  }
  v13[v12] = 0;
  v15 = *(_DWORD*)(a1 + 64);
  v16 = *(_DWORD*)(a1 + 68);
  v17 = *(_DWORD*)(a1 + 72);
  v18 = *(_DWORD*)(a1 + 56);
  v19 = *(_BYTE*)(a1 + 60);
  v20 = *(_WORD*)(a1 + 76);
  v21 = (unsigned __int8*)(a1 + 32);
  if ((v31_.v31 & 1) != 0) {
    fw_text_String_CopyTerminated(&v34_.v34, (__int64)v31_.v33, v31_.v32);
  }
  else {
    v34_.v34 = v31_.v31;
    v34_.v35 = v31_.v32;
    v34_.v36 = (__int64)v31_.v33;
  }
  v22 = *v21;
  v34_.v37 = v18;
  v34_.v38 = v19;
  *(_DWORD*)v34_.v39 = v15;
  *(_DWORD*)&v34_.v39[4] = v16;
  *(_DWORD*)&v34_.v39[8] = v17;
  *(_WORD*)&v34_.v39[12] = v20;
  if ((v22 & 1) != 0) {
    v23 = *(_QWORD*)(a1 + 48);
    if (v23 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v23);
      v18 = v34_.v37;
      v19 = v34_.v38;
    }
  }
  v25 = v34_.v34;
  v26 = v34_.v35;
  LOWORD(v34_.v34) = 0;
  *(_DWORD*)(a1 + 56) = v18;
  *(_BYTE*)(a1 + 60) = v19;
  *(_QWORD*)v21 = v25;
  *(_QWORD*)(a1 + 40) = v26;
  *(_QWORD*)(a1 + 48) = v34_.v36;
  *(_QWORD*)(a1 + 64) = *(_QWORD*)v34_.v39;
  *(_QWORD*)(a1 + 70) = *(_QWORD*)&v34_.v39[6];
  if ((v31_.v31 & 1) != 0 && v31_.v33 != nullptr) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, (__int64)v31_.v33);
  }
  v28 = *(_QWORD*)(a1 + 16);
  v29 = *(_QWORD*)(v28 + 112);
  v30 = *(_QWORD*)(v28 + 120);
  if (v30 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8), 1u,
                              memory_order_relaxed);
    GameHr_14127e0(v29, v21);
    if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
      std___1___shared_weak_count___release_weak_alt1(v30);
    }
  }
  else {
    GameHr_14127e0(v29, v21);
  }
}

#pragma GCC visibility pop
