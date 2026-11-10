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
_QWORD* SortiePlanBottomUpArgs_Destructor(_QWORD* result);
_QWORD* SortiePlanBottomUpArgs_1427640(_QWORD* result);
__int64 SortiePlanBottomUpArgs_DeletingDestructor(_QWORD* a1);
__int64 SortiePlanBottomUpArgs_1427840(_QWORD* a1);
__int64 SortiePlanBottomUpArgs_1427b00(__int64 a1, __int64 a2);
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

_QWORD* SortiePlanBottomUpArgs_Destructor(_QWORD* result)
{
  _QWORD* v1;
  _QWORD** v2;
  _QWORD** v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = result;
  v2 = (_QWORD**)result[5];
  v3 = (_QWORD**)result[6];
  result[1] = GameData_212ddc0[0] + 2;
  result[3] = result[2];
  if (v2 != v3) {
    do {
      result = *v2;
      if (*v2 != nullptr) {
        result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
      ++v2;
    } while (v2 != v3);
    v2 = (_QWORD**)v1[5];
  }
  v1[6] = v2;
  if (v2 != nullptr) {
    v4 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v4 = 56;
    }
    result =
        (_QWORD*)nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v4);
  }
  v5 = v1[2];
  if (v5 != 0) {
    v6 = fw_memory_g_heap_manager;
    v1[3] = v5;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(v6 + v7);
  }
  return result;
}

_QWORD* SortiePlanBottomUpArgs_1427640(_QWORD* result)
{
  _QWORD* v1;
  _QWORD** v2;
  _QWORD** v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = result;
  v2 = (_QWORD**)result[4];
  v3 = (_QWORD**)result[5];
  *result = GameData_212ddc0[0] + 2;
  result[2] = result[1];
  if (v2 != v3) {
    do {
      result = *v2;
      if (*v2 != nullptr) {
        result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
      ++v2;
    } while (v2 != v3);
    v2 = (_QWORD**)v1[4];
  }
  v1[5] = v2;
  if (v2 != nullptr) {
    v4 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v4 = 56;
    }
    result =
        (_QWORD*)nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v4);
  }
  v5 = v1[1];
  if (v5 != 0) {
    v6 = fw_memory_g_heap_manager;
    v1[2] = v5;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(v6 + v7);
  }
  return result;
}

__int64 SortiePlanBottomUpArgs_DeletingDestructor(_QWORD* a1)
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
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v4);
  }
  v5 = a1[2];
  if (v5 != 0) {
    v6 = fw_memory_g_heap_manager;
    a1[3] = v5;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(v6 + v7);
  }
  v8 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v8);
}

__int64 SortiePlanBottomUpArgs_1427840(_QWORD* a1)
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
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v4);
  }
  v5 = a1[1];
  if (v5 != 0) {
    v6 = fw_memory_g_heap_manager;
    a1[2] = v5;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(v6 + v7);
  }
  v8 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v8);
}

__int64 SortiePlanBottomUpArgs_1427b00(__int64 a1, __int64 a2)
{
  _QWORD* v3;
  __int64*** v4;
  __int64** v5;
  __int64** v6;
  __int64* v7;
  __int64* v8;
  _BOOL4 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[4];
  _QWORD* v17;
  __int64 v18;

  v3 = v16;
  v4 = *(__int64****)(game_UnitListSet_instance_ + 8);
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v17 = v16;
  v16[0] = GameData_212dde0[0] + 16;
  v16[1] = &v13;
  v5 = *v4;
  v6 = v4[1];
  if (*v4 == v6) {
    goto LABEL_19;
  }
  do {
    v7 = *v5;
    v8 = v5[1];
    if (v8 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 1), 1u,
                                memory_order_relaxed);
    }
    if (v7 != nullptr) {
      v9 = (v7[6] & 0x3F) == 0;
      if (v8 == nullptr) {
        goto LABEL_11;
      }
    }
    else {
      v9 = false;
      if (v8 == nullptr) {
        goto LABEL_11;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64*))(*v8 + 16))(v8);
      std___1___shared_weak_count___release_weak(v8);
      if (!v9) {
        goto LABEL_3;
      }
      goto LABEL_12;
    }
  LABEL_11:
    if (v9) {
    LABEL_12:
      v18 = **v5;
      if (v17 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      (*(void (**)(_QWORD*, __int64*))(*v17 + 48LL))(v17, &v18);
    }
  LABEL_3:
    v5 += 2;
  } while (v5 != v6);
  v3 = v17;
  if (v17 != v16) {
    if (v17 != nullptr) {
      v10 = 40;
      goto LABEL_20;
    }
    goto LABEL_21;
  }

LABEL_19:
  v10 = 32;

LABEL_20:
  (*(void (**)(void))(*v3 + v10))();

LABEL_21:
  result = GameRoutine_940640(a1 + 8, &v13);
  if (v13 != 0) {
    v14 = v13;
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
  }
  return result;
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
