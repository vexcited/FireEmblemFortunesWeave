#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterAppearance_10735d0(_QWORD);
__int64 GameRoutine_1015950(void);
__int64 GameRoutine_1072580(_QWORD, _QWORD);
__int64 GameRoutine_10784f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a867a0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2001e18[])();
extern __int64 (*game_cmdbtl_FieldUnit_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d3c8[3];
__n128 FieldUnit_Destructor(__int64 a1);
__int64 game_cmdbtl_FieldUnit_Build(_QWORD* a1, __int64 a2);
__int64 game_cmdbtl_FieldUnit_Build_lambda0_Invoke(__int64 a1, _QWORD* a2);

__n128 FieldUnit_Destructor(__int64 a1)
{
  _QWORD* v2;
  __n128 result;
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = game_cmdbtl_FieldUnit_vtable;
  v2 = (_QWORD*)(a1 + 24);
  if (*(_QWORD*)(a1 + 24) != 0) {
    v8 = *(_QWORD*)(a1 + 24);
    GameRoutine_a867a0(&v8);
  }
  v4 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    result = std___1___shared_weak_count___release_weak(v4);
  }
  v5 = *(_BYTE*)(a1 + 72);
  *v2 = 0;
  v2[1] = 0;
  if ((v5 & 1) != 0 && *(_QWORD*)(a1 + 88) != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
  }
  v7 = *(_QWORD*)(a1 + 16);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    return std___1___shared_weak_count___release_weak(v7);
  }
  return result;
}

__int64 game_cmdbtl_FieldUnit_Build(_QWORD* a1, __int64 a2)
{
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  _QWORD v11[4];
  _QWORD* v12;

  v4 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 11832, 16, 0);
  v4[2] = 0;
  v5 = v4 + 3;
  v6 = v4;
  *v4 = GameData_212d3c8[0] + 2;
  v4[1] = 0;
  CharacterAppearance_10735d0(v4 + 3);
  GameRoutine_1072580(v5, a2);
  a1[1] = v5;
  v7 = a1 + 1;
  v8 = a1[2];
  a1[2] = v6;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
    v7 = a1 + 1;
  }
  v11[0] = GameData_2001e18;
  v11[1] = a1;
  v12 = v11;
  a1[3] = GameRoutine_10784f0(v7, 0, v11);
  result = (__int64)v12;
  if (v12 == v11) {
    v10 = 32;
  }
  else {
    if (v12 == nullptr) {
      return result;
    }
    v10 = 40;
  }
  return (*(__int64 (**)(__int64))(*v12 + v10))((__int64)v12);
}

__int64 game_cmdbtl_FieldUnit_Build_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL) = *a2;
  return GameRoutine_1015950();
}

#pragma GCC visibility pop
