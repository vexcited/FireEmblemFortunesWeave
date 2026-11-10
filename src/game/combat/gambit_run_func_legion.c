#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e51940(_QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fe6170[])();
extern __int64 (*game_combat_GambitRunFuncLegion_vtable[])();
extern __int64 (*game_combat_IGambitKey_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 game_combat_GambitRunFuncLegion_Run(__int64 a1);
__n128 GambitRunFuncLegion_Destructor(__int64 a1);
__n128 GambitRunFuncLegion_DeletingDestructor(__int64 a1);
__int64 game_combat_GambitRunFuncLegion_Run_lambda0_Invoke(__int64 a1,
                                                           __int64* a2,
                                                           int* a3);
__attribute__((swiftcall)) void GambitRunFuncLegion_Unknown3(PSEUDO_X8 x8_);

__int64 game_combat_GambitRunFuncLegion_Run(__int64 a1)
{
  __int64 result;
  __int64 v2;
  _QWORD v3[4];
  _QWORD* v4;

  v3[0] = GameData_1fe6170;
  v3[1] = a1;
  v4 = v3;
  GameRoutine_e51940(a1, v3);
  result = (__int64)v4;
  if (v4 == v3) {
    v2 = 32;
  }
  else {
    if (v4 == nullptr) {
      return result;
    }
    v2 = 40;
  }
  return (*(__int64 (**)(__int64))(*v4 + v2))((__int64)v4);
}

__n128 GambitRunFuncLegion_Destructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __n128 result;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = game_combat_GambitRunFuncLegion_vtable;
  v2 = (_QWORD*)(a1 + 64);
  v3 = *(_QWORD**)(a1 + 96);
  if (v3 == v2) {
    v4 = 32;
    goto LABEL_5;
  }
  if (v3 != nullptr) {
    v4 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
  }
  *(_QWORD*)a1 = &game_combat_IGambitKey_vtable;
  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 40);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
    }
  }
  return result;
}

__n128 GambitRunFuncLegion_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = game_combat_GambitRunFuncLegion_vtable;
  v2 = (_QWORD*)(a1 + 64);
  v3 = *(_QWORD**)(a1 + 96);
  if (v3 == v2) {
    v4 = 32;
    goto LABEL_5;
  }
  if (v3 != nullptr) {
    v4 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
  }
  *(_QWORD*)a1 = &game_combat_IGambitKey_vtable;
  v5 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 40);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v6);
    }
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v8, a1);
}

__attribute__((swiftcall)) void GambitRunFuncLegion_Unknown3(PSEUDO_X8 x8_)
{
  _BYTE* a1 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  *a1 = 26;
  strcpy(a1 + 1, "RunFuncLegion");
}

__int64 game_combat_GambitRunFuncLegion_Run_lambda0_Invoke(__int64 a1,
                                                           __int64* a2, int* a3)
{
  __int64 result;
  int v4;
  int v5;
  __int64 v6;

  result = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 96LL);
  if (result != 0) {
    v4 = *a3;
    v6 = *a2;
    v5 = v4;
    return (*(__int64 (**)(__int64, __int64*, int*))(*(_QWORD*)result + 48LL))(
        result, &v6, &v5);
  }
  return result;
}

#pragma GCC visibility pop
