#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f19700(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_map_MapPanelRageBalor_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapPanelRageBalor_Destructor(_QWORD* a1);
__int64 MapPanelRageBalor_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_74e080(_QWORD, _QWORD);
extern __int64 (*GameData_1ffed50[])();
__int64
game_map_MapPanelRageBalor_UpdateRage_lambda0_Invoke_feb2a0(__int64 a1,
                                                            __int64* a2);
_QWORD* game_map_MapPanelRageBalor_UpdateRage_lambda0_Invoke_feb430(__int64 a1,
                                                                    int* a2,
                                                                    int* a3);
__int64 game_map_MapPanelRageBalor_UpdateRage_lambda1_Invoke(__int64 a1,
                                                             _DWORD* a2,
                                                             _DWORD* a3);

__int64 MapPanelRageBalor_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;

  v1 = a1[5];
  *a1 = game_map_MapPanelRageBalor_vtable;
  if (v1 != 0) {
    a1[6] = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  return GameRoutine_f19700(a1 + 2, a1[3]);
}

__int64 MapPanelRageBalor_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = a1[5];
  *a1 = game_map_MapPanelRageBalor_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[6] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  GameRoutine_f19700(a1 + 2, a1[3]);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6);
}

__int64 game_map_MapPanelRageBalor_UpdateRage_lambda0_Invoke_feb2a0(__int64 a1,
                                                                    __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  _QWORD v7[4];
  _QWORD* v8;
  __int64 v9;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v7[0] = GameData_1ffed50;
  v7[1] = &v9;
  v8 = v7;
  v9 = v4;
  v7[2] = v2;
  v7[3] = v3;
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v4 + 744LL))(v4, v7);
  result = (__int64)v8;
  if (v8 == v7) {
    v6 = 32;
  }
  else {
    if (v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(__int64))(*v8 + v6))((__int64)v8);
}

_QWORD* game_map_MapPanelRageBalor_UpdateRage_lambda0_Invoke_feb430(__int64 a1,
                                                                    int* a2,
                                                                    int* a3)
{
  int v4;
  int v5;
  _QWORD* result;
  __int64 v7;
  _BYTE v8[2];
  __int16 v9;

  v4 = *a2;
  v5 = *a3;
  result = (_QWORD*)(*(__int64 (**)(_QWORD))(***(_QWORD***)(a1 + 8) + 224LL))(
      **(_QWORD**)(a1 + 8));
  if (*result == **(_QWORD**)(a1 + 16)) {
    v7 = *(_QWORD*)(a1 + 24);
    v8[0] = v4;
    v8[1] = v5;
    v9 = 0;
    return (_QWORD*)GameRoutine_74e080(v7, v8);
  }
  return result;
}

__int64 game_map_MapPanelRageBalor_UpdateRage_lambda1_Invoke(__int64 a1,
                                                             _DWORD* a2,
                                                             _DWORD* a3)
{
  char** v3;
  char* v4;
  char* v5;

  v3 = **(char****)(a1 + 8);
  v4 = *v3;
  v5 = v3[1];
  if (v4 == v5) {
    return 0;
  }
  while (*a2 != *v4 || *a3 != v4[1]) {
    v4 += 4;
    if (v4 == v5) {
      return 0;
    }
  }
  return 1;
}

#pragma GCC visibility pop
