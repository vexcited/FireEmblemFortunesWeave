#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_cfa2a0(__int64 result, long double);
__int64 GameRoutine_daa180(_QWORD, _QWORD);
__int64 StateActionBase_d48970(__int64, float);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_zview_CharacterController_StateActionBase_vtable[])();
extern __int64 (*game_zview_CharacterController_StateDamage_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ed48[5];
float GameRoutine_d48540(__int64, long double);
float StateActionBase_Unknown5(__int64, long double);
__int64 StateDamage_Unknown5(__int64 a1, long double a2);
void StateDamage_Unknown4(__int64 a1, long double a2);
_QWORD* StateDamage_Destructor(_QWORD* result);
__int64 StateDamage_DeletingDestructor(_QWORD* a1);
__int64 StateDamage_Unknown2(__int64 result);

__int64 StateDamage_Unknown5(__int64 a1, long double a2)
{
  float v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v3 = StateActionBase_Unknown5(a1, a2);
  v4 = a1;
  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 488LL);
  v6 = *(_QWORD*)(v5 + 192);
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = 0;
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v7 = v4;
    (*(void (**)(__int64, float))(*(_QWORD*)v6 + 16LL))(v6, v3);
    std___1___shared_weak_count___release_weak(v6);
    v4 = v7;
  }
  return StateActionBase_d48970(v4, 0.4);
}

void StateDamage_Unknown4(__int64 a1, long double a2)
{
  long double v3;
  __int64 v4;
  int v5;
  int v7;

  GameRoutine_d48540(a1, a2);
  LODWORD(v3) = *(_DWORD*)(a1 + 80);
  if (*(float*)&v3 >= *(float*)(*(_QWORD*)(a1 + 96) + 136LL)) {
    v7 = 8;
    if ((GameRoutine_daa180(
             *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 32LL), &v7) &
         1) != 0) {
      return;
    }
    LODWORD(v3) = *(_DWORD*)(a1 + 80);
  }
  if (*(float*)&v3 >= *(float*)(a1 + 112)) {
    v4 = *(_QWORD*)(a1 + 8);
    v5 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 32LL) != 0 ? 5 : 0;
    if ((*(_BYTE*)(v4 + 848) & 1) == 0) {
      if (*(_BYTE*)(v4 + 28) != 1 || *(_DWORD*)(v4 + 24) != v5) {
        *(_DWORD*)(v4 + 32) = v5;
        *(_BYTE*)(v4 + 36) = 1;
      }
      if ((*(_BYTE*)(v4 + 112) & 1) == 0 && (*(_BYTE*)(v4 + 113) & 1) != 0) {
        GameRoutine_cfa2a0(v4 + 16, v3);
      }
    }
  }
}

_QWORD* StateDamage_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = result[13];
  v2 = result;
  *result = game_zview_CharacterController_StateDamage_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v1);
  }
  v3 = v2[7];
  *v2 = game_zview_CharacterController_StateActionBase_vtable;
  if (v3 != 0) {
    v2[8] = v3;
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
  }
  v5 = v2[6];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    return (_QWORD*)std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

__int64 StateDamage_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = a1[13];
  *a1 = game_zview_CharacterController_StateDamage_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v3 = a1[7];
  *a1 = GameData_212ed48[0] + 2;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v3 != 0) {
    v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[8] = v3;
    v6 = 128;
    if (*(_QWORD*)(v5 + 200) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(v5 + v6, v3);
  }
  v7 = a1[6];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, a1);
}

__int64 StateDamage_Unknown2(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(result + 48);
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0xFFFFFFFE00000000LL;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v2 = result;
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
    result = v2;
  }
  v3 = *(_QWORD*)(result + 56);
  *(_QWORD*)(result + 80) = 0;
  *(_DWORD*)(result + 112) = 0;
  *(_QWORD*)(result + 64) = v3;
  return result;
}

#pragma GCC visibility pop
