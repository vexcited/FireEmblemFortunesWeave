#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a934d0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fbf780[])();
extern __int64 (*GameData_1fd1908[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 wld_MapCrowdLoader_MapCrowdLoader(unsigned __int64 a1, __int64 a2,
                                          unsigned __int64 a3);

__int64 wld_MapCrowdLoader_MapCrowdLoader(unsigned __int64 a1, __int64 a2,
                                          unsigned __int64 a3)
{
  _QWORD* v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  long double v11;
  char* v12;
  unsigned __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  unsigned __int64 v21;
  __int64 v22;
  long double v23;
  __int64 result;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64* v34;

  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_DWORD*)(a1 + 32) = 1065353216;
  *(_BYTE*)(a1 + 100) = 1;
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(a1);
  }
  v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (a3 >= 0x17) {
    v7 = a2;
    if ((a3 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (a3 | 7) + 1;
    }
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v8, 16, 0);
    a2 = v7;
    v6 = (char*)v9;
    v32 = a3;
    v33 = v9;
    v31 = v8 | 1;
  }
  else {
    LOBYTE(v31) = 2 * a3;
    v6 = (char*)&v31 + 1;
    if (a3 == 0) {
      goto LABEL_10;
    }
  }
  memmove(v6, a2, a3);
LABEL_10:
  v6[a3] = 0;
  v10 = (__int64*)GameRoutine_1a09ce0(&v31, ".crowd", 6);
  v13 = v10[1];
  v12 = (char*)v10[2];
  v28 = *v10;
  v29 = v13;
  v30 = v12;
  v10[1] = 0;
  v10[2] = 0;
  *v10 = 0;
  if ((v31 & 1) != 0 && v33 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*v5 + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*v5 + v14, v11);
  }
  v15 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 80, 16, 0);
  v15[2] = 0;
  v16 = *(_QWORD*)(a1 + 80);
  v15[8] = 0;
  *v15 = GameData_1fbf780;
  v15[1] = 0;
  *(_QWORD*)(a1 + 72) = v15 + 4;
  *(_QWORD*)(a1 + 80) = v15;
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  v17 = *(_QWORD*)(a1 + 72);
  v31 = (__int64)GameData_1fd1908;
  v32 = a1;
  v34 = &v31;
  GameRoutine_a934d0(&v31, v17);
  if (v34 == &v31) {
    v18 = 32;
  }
  else {
    if (v34 == nullptr) {
      goto LABEL_23;
    }
    v18 = 40;
  }
  (*(void (**)(__int64))(*v34 + v18))((__int64)v34);
LABEL_23:
  *(_DWORD*)(a1 + 96) = 1;
  v19 = *(_QWORD*)(game_g_frame_clock + 13432);
  if ((v28 & 1) != 0) {
    v20 = v30;
  }
  else {
    v20 = (char*)&v28 + 1;
  }
  if ((v28 & 1) != 0) {
    v21 = v29;
  }
  else {
    v21 = (unsigned __int64)(unsigned __int8)v28 >> 1;
  }
  v22 = *(_QWORD*)(a1 + 80);
  v26 = *(_QWORD*)(a1 + 72);
  v27 = v22;
  if (v22 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 64) =
      (*(__int64 (**)(__int64, char*, unsigned __int64, __int64*))(
          *(_QWORD*)v19 + 24LL))(v19, v20, v21, &v26);
  result = v27;
  if (v27 != 0) {
    result = std___1___shared_weak_count___release_weak(v27);
  }
  if ((v28 & 1) != 0 && v30 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(*v5 + 200LL) == 0) {
      v25 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v5 + v25, v23);
  }
  return result;
}

#pragma GCC visibility pop
