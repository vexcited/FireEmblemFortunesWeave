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
__int64 wld_MapCrowdLoader_MapCrowdLoader_alt1(
    unsigned __int64 a1, __int64 a2,
    unsigned __int64 a3) __asm__("wld_MapCrowdLoader_MapCrowdLoader");
_QWORD* GameRoutine_a934d0_alt1(_QWORD* result,
                                _QWORD*) __asm__("GameRoutine_a934d0");
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void wld_MapCrowdLoader_MapCrowdLoader(unsigned __int64 a1, __int64 a2,
                                       unsigned __int64 a3);

void wld_MapCrowdLoader_MapCrowdLoader(unsigned __int64 a1, __int64 a2,
                                       unsigned __int64 a3)
{
  __int64* v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;
  struct {
    __int64 v25;
    unsigned __int64 v26;
    char* v27;
  } v25_;
  struct {
    __int64 v28;
    unsigned __int64 v29;
    __int64 v30;
    char gap72_[8];
    __int64* v31;
  } v28_;

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
    String_60a1d0_alt1();
  }
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (a3 >= 0x17) {
    v7 = a2;
    if ((a3 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (a3 | 7) + 1;
    }
    v9 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v8, 16, 0);
    a2 = v7;
    v6 = (char*)v9;
    v28_.v29 = a3;
    v28_.v30 = v9;
    v28_.v28 = v8 | 1;
  }
  else {
    LOBYTE(v28_.v28) = 2 * a3;
    v6 = (char*)&v28_.v28 + 1;
    if (a3 == 0) {
      goto LABEL_10;
    }
  }
  memmove_alt1((__int64)v6, a2, a3);
LABEL_10:
  v6[a3] = 0;
  v10 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v28_.v28, ".crowd", 6u);
  v12 = v10[1];
  v11 = v10[2];
  v25_.v25 = *v10;
  v25_.v26 = v12;
  v25_.v27 = (char*)v11;
  v10[1] = 0;
  v10[2] = 0;
  *v10 = 0;
  if ((v28_.v28 & 1) != 0 && v28_.v30 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v5 + v13, v28_.v30);
  }
  v14 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v5, 80, 16, 0);
  v14[2] = 0;
  v15 = *(_QWORD*)(a1 + 80);
  v14[8] = 0;
  *v14 = GameData_1fbf780;
  v14[1] = 0;
  *(_QWORD*)(a1 + 72) = v14 + 4;
  *(_QWORD*)(a1 + 80) = v14;
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak_alt1(v15);
  }
  v16 = *(_QWORD**)(a1 + 72);
  v28_.v28 = (__int64)GameData_1fd1908;
  v28_.v29 = a1;
  v28_.v31 = &v28_.v28;
  GameRoutine_a934d0_alt1(&v28_.v28, v16);
  if (v28_.v31 == &v28_.v28) {
    v17 = 32;
  }
  else {
    if (v28_.v31 == nullptr) {
      goto LABEL_23;
    }
    v17 = 40;
  }
  (*(void (**)(__int64))(*v28_.v31 + v17))((__int64)v28_.v31);
LABEL_23:
  *(_DWORD*)(a1 + 96) = 1;
  v18 = *(_QWORD*)(game_g_frame_clock + 13432);
  if ((v25_.v25 & 1) != 0) {
    v19 = v25_.v27;
  }
  else {
    v19 = (char*)&v25_.v25 + 1;
  }
  if ((v25_.v25 & 1) != 0) {
    v20 = v25_.v26;
  }
  else {
    v20 = (unsigned __int64)(unsigned __int8)v25_.v25 >> 1;
  }
  v21 = *(_QWORD*)(a1 + 80);
  v23_.v23 = *(_QWORD*)(a1 + 72);
  v23_.v24 = v21;
  if (v21 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 64) =
      (*(__int64 (**)(__int64, char*, unsigned __int64, __int64*))(
          *(_QWORD*)v18 + 24LL))(v18, v19, v20, &v23_.v23);
  if (v23_.v24 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v23_.v24);
  }
  if ((v25_.v25 & 1) != 0 && v25_.v27 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v5 + v22, (__int64)v25_.v27);
  }
}

#pragma GCC visibility pop
