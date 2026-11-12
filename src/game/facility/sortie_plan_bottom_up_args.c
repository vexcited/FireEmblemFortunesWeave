#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_940640(_QWORD, _QWORD);
__int64 GameRoutine_94d840(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_212dde0[2];
extern __int64 GameData_21d9968;
extern __int64 GameData_21d9970;
extern __int64 GameData_2246cb0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_UnitListSet_instance_;
extern __int64* GameData_212ddc0[3];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
_QWORD* SortiePlanBottomUpArgs_Destructor_alt1(_QWORD* result) __asm__(
    "SortiePlanBottomUpArgs_Destructor");
_QWORD* SortiePlanBottomUpArgs_1427640_alt1(_QWORD* result) __asm__(
    "SortiePlanBottomUpArgs_1427640");
__int64 SortiePlanBottomUpArgs_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "SortiePlanBottomUpArgs_DeletingDestructor");
__int64 SortiePlanBottomUpArgs_1427840_alt1(_QWORD* a1) __asm__(
    "SortiePlanBottomUpArgs_1427840");
__int64 SortiePlanBottomUpArgs_1427b00_alt1(__int64 a1, __int64 a2) __asm__(
    "SortiePlanBottomUpArgs_1427b00");
__int64 SortiePlanBottomUpArgs_Unknown4(__int64 a1);
__int64 SortiePlanBottomUpArgs_1427cd0(__int64 a1);
__int64 SortiePlanBottomUpArgs_Unknown6(__int64 result, __int64 a2, __int64 a3);
__int64 SortiePlanBottomUpArgs_Unknown5(__int64 result, __int64 a2, __int64 a3);
__attribute__((swiftcall)) void
game_12dd620(PSEUDO_X8, unsigned __int16* result, int, int, int);
__int64 game_VariableManager_SetFlag(__int64 result, int);
extern __int64 GameData_212c6c0[2];
extern __int64 GameData_22492a8;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
__int64 SortiePlanBottomUpArgs_Unknown5_1427d10();
__int64 SortiePlanBottomUpArgs_Unknown4_1427da0();
__int64 GameRoutine_940640_alt1(_QWORD*,
                                __int64**) __asm__("GameRoutine_940640");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SortiePlanBottomUpArgs_Destructor(_QWORD* a1);
void SortiePlanBottomUpArgs_1427640(_QWORD* a1);
void SortiePlanBottomUpArgs_DeletingDestructor(_QWORD* a1);
void SortiePlanBottomUpArgs_1427840(_QWORD* a1);
void SortiePlanBottomUpArgs_1427b00(__int64 a1);

void SortiePlanBottomUpArgs_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = (_QWORD*)a1[5];
  v3 = (_QWORD*)a1[6];
  a1[1] = GameData_212ddc0[0] + 2;
  a1[3] = a1[2];
  if (v2 != v3) {
    do {
      if (*v2 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v2 + 8LL))(*v2);
      }
      ++v2;
    } while (v2 != v3);
    v2 = (_QWORD*)a1[5];
  }
  a1[6] = v2;
  if (v2 != nullptr) {
    v4 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v4,
                                       (__int64)v2);
  }
  v5 = a1[2];
  if (v5 != 0) {
    v6 = fw_memory_g_heap_manager;
    a1[3] = v5;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v6 + v7, v5);
  }
}

void SortiePlanBottomUpArgs_1427640(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = (_QWORD*)a1[4];
  v3 = (_QWORD*)a1[5];
  *a1 = GameData_212ddc0[0] + 2;
  a1[2] = a1[1];
  if (v2 != v3) {
    do {
      if (*v2 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v2 + 8LL))(*v2);
      }
      ++v2;
    } while (v2 != v3);
    v2 = (_QWORD*)a1[4];
  }
  a1[5] = v2;
  if (v2 != nullptr) {
    v4 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v4,
                                       (__int64)v2);
  }
  v5 = a1[1];
  if (v5 != 0) {
    v6 = fw_memory_g_heap_manager;
    a1[2] = v5;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v6 + v7, v5);
  }
}

void SortiePlanBottomUpArgs_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = (_QWORD*)a1[5];
  v3 = (_QWORD*)a1[6];
  a1[1] = GameData_212ddc0[0] + 2;
  a1[3] = a1[2];
  if (v2 != v3) {
    do {
      if (*v2 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v2 + 8LL))(*v2);
      }
      ++v2;
    } while (v2 != v3);
    v2 = (_QWORD*)a1[5];
  }
  a1[6] = v2;
  if (v2 != nullptr) {
    v4 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v4,
                                       (__int64)v2);
  }
  v5 = a1[2];
  if (v5 != 0) {
    v6 = fw_memory_g_heap_manager;
    a1[3] = v5;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v6 + v7, v5);
  }
  v8 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v8,
                                     (__int64)a1);
}

void SortiePlanBottomUpArgs_1427840(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = (_QWORD*)a1[4];
  v3 = (_QWORD*)a1[5];
  *a1 = GameData_212ddc0[0] + 2;
  a1[2] = a1[1];
  if (v2 != v3) {
    do {
      if (*v2 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v2 + 8LL))(*v2);
      }
      ++v2;
    } while (v2 != v3);
    v2 = (_QWORD*)a1[4];
  }
  a1[5] = v2;
  if (v2 != nullptr) {
    v4 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v4,
                                       (__int64)v2);
  }
  v5 = a1[1];
  if (v5 != 0) {
    v6 = fw_memory_g_heap_manager;
    a1[2] = v5;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v6 + v7, v5);
  }
  v8 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v8,
                                     (__int64)(a1 - 1));
}

void SortiePlanBottomUpArgs_1427b00(__int64 a1)
{
  _QWORD* v2;
  __int64*** v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64 v7;
  _BOOL4 v8;
  __int64 v9;
  __int64 v10;
  struct {
    __int64* v11;
    __int64* v12;
    __int64 v13;
  } v11_;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;
  __int64 v16;

  v2 = v14_.v14;
  v3 = *(__int64****)(game_UnitListSet_instance_ + 8);
  v11_.v11 = nullptr;
  v11_.v12 = nullptr;
  v11_.v13 = 0;
  v14_.v15 = v14_.v14;
  v14_.v14[0] = GameData_212dde0[0] + 16;
  v14_.v14[1] = &v11_.v11;
  v4 = *v3;
  v5 = v3[1];
  if (*v3 == v5) {
    goto LABEL_19;
  }
  do {
    v6 = *v4;
    v7 = (__int64)v4[1];
    if (v7 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v6 != nullptr) {
      v8 = (v6[6] & 0x3F) == 0;
      if (v7 == 0) {
        goto LABEL_11;
      }
    }
    else {
      v8 = false;
      if (v7 == 0) {
        goto LABEL_11;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_alt1(v7);
      if (!v8) {
        goto LABEL_3;
      }
      goto LABEL_12;
    }
  LABEL_11:
    if (v8) {
    LABEL_12:
      v16 = **v4;
      if (v14_.v15 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(_QWORD*, __int64*))(*v14_.v15 + 48LL))(v14_.v15, &v16);
    }
  LABEL_3:
    v4 += 2;
  } while (v4 != v5);
  v2 = v14_.v15;
  if (v14_.v15 != v14_.v14) {
    if (v14_.v15 != nullptr) {
      v9 = 40;
      goto LABEL_20;
    }
    goto LABEL_21;
  }
LABEL_19:
  v9 = 32;
LABEL_20:
  (*(void (**)(__int64))(*v2 + v9))((__int64)v2);
LABEL_21:
  GameRoutine_940640_alt1((_QWORD*)(a1 + 8), &v11_.v11);
  if (v11_.v11 != nullptr) {
    v11_.v12 = v11_.v11;
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, (__int64)v11_.v11);
  }
}

__int64 SortiePlanBottomUpArgs_Unknown4(__int64 a1)
{
  __int64 result;

  if (GameData_2246cb0 != 0) {
    *(_QWORD*)(GameData_2246cb0 + 160) = *(_QWORD*)(GameData_2246cb0 + 152);
  }
  result = GameRoutine_94d840();
  *(_DWORD*)(a1 + 64) = result;
  return result;
}

__int64 SortiePlanBottomUpArgs_1427cd0(__int64 a1)
{
  __int64 result;

  if (GameData_2246cb0 != 0) {
    *(_QWORD*)(GameData_2246cb0 + 160) = *(_QWORD*)(GameData_2246cb0 + 152);
  }
  result = GameRoutine_94d840();
  *(_DWORD*)(a1 + 56) = result;
  return result;
}

__int64 SortiePlanBottomUpArgs_Unknown5_1427d10()
{
  __int16* v0;
  _WORD v2[6];

  if (game_gmap_GmapClock_instance_ != 0) {
    v0 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v0 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  game_12dd620((void*)((__int64)v2), *(unsigned __int16**)GameData_212c6c0[0],
               *v0, v0[1], v0[2]);
  return game_VariableManager_SetFlag((__int64)&GameData_22492a8,
                                      10000 * v2[0] + 100 * v2[1] + v2[2]);
}

__int64 SortiePlanBottomUpArgs_Unknown4_1427da0()
{
  __int16* v0;
  _WORD v2[6];

  if (game_gmap_GmapClock_instance_ != 0) {
    v0 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v0 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  game_12dd620((void*)((__int64)v2), *(unsigned __int16**)GameData_212c6c0[0],
               *v0, v0[1], v0[2]);
  return game_VariableManager_SetFlag((__int64)&GameData_22492a8,
                                      10000 * v2[0] + 100 * v2[1] + v2[2]);
}

__int64 SortiePlanBottomUpArgs_Unknown6(__int64 result, __int64 a2, __int64 a3)
{
  int v3;
  int v4;

  v3 = *(_DWORD*)(result + 64);
  if (v3 <= *(unsigned __int8*)(a3 + 498)) {
    v4 = 0;
  }
  else {
    if (v3 >=
        (int)((unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2)) {
      v3 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
    }
    v4 = (*(_DWORD*)(GameData_21d9968 + 4LL * v3 - 4) - *(_DWORD*)(a3 + 504)) &
         ~((*(_DWORD*)(GameData_21d9968 + 4LL * v3 - 4) -
            *(_DWORD*)(a3 + 504)) >>
           31);
  }
  *(_DWORD*)(a2 + 8) = v4;
  *(_QWORD*)a2 = a3;
  *(_QWORD*)(a2 + 12) = 0;
  *(_QWORD*)(a2 + 20) = 0;
  *(_QWORD*)(a2 + 28) = 0;
  *(_QWORD*)(a2 + 36) = 0;
  *(_QWORD*)(a2 + 44) = 0;
  *(_QWORD*)(a2 + 52) = 0;
  *(_QWORD*)(a2 + 60) = 0;
  *(_QWORD*)(a2 + 68) = 0;
  *(_QWORD*)(a2 + 76) = 0;
  *(_QWORD*)(a2 + 82) = 0;
  *(_BYTE*)(a2 + 90) = 7;
  return result;
}

__int64 SortiePlanBottomUpArgs_Unknown5(__int64 result, __int64 a2, __int64 a3)
{
  int v3;
  int v4;

  v3 = *(_DWORD*)(result + 56);
  if (v3 <= *(unsigned __int8*)(a3 + 498)) {
    v4 = 0;
  }
  else {
    if (v3 >=
        (int)((unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2)) {
      v3 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
    }
    v4 = (*(_DWORD*)(GameData_21d9968 + 4LL * v3 - 4) - *(_DWORD*)(a3 + 504)) &
         ~((*(_DWORD*)(GameData_21d9968 + 4LL * v3 - 4) -
            *(_DWORD*)(a3 + 504)) >>
           31);
  }
  *(_DWORD*)(a2 + 8) = v4;
  *(_QWORD*)a2 = a3;
  *(_QWORD*)(a2 + 12) = 0;
  *(_QWORD*)(a2 + 20) = 0;
  *(_QWORD*)(a2 + 28) = 0;
  *(_QWORD*)(a2 + 36) = 0;
  *(_QWORD*)(a2 + 44) = 0;
  *(_QWORD*)(a2 + 52) = 0;
  *(_QWORD*)(a2 + 60) = 0;
  *(_QWORD*)(a2 + 68) = 0;
  *(_QWORD*)(a2 + 76) = 0;
  *(_QWORD*)(a2 + 82) = 0;
  *(_BYTE*)(a2 + 90) = 7;
  return result;
}

#pragma GCC visibility pop
