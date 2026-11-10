#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f85d20(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_map_MapPanelTrickTarget_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapPanelTrickTarget_Destructor(_QWORD* a1);
__int64 MapPanelTrickTarget_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_74e080(_QWORD, _QWORD);
__int64 game_map_MapPanelTrickTarget_UpdateTarget_lambda0_Invoke(__int64 a1,
                                                                 _DWORD* a2,
                                                                 _DWORD* a3);
__int64 game_map_MapPanelTrickTarget_UpdateTarget_lambda1_Invoke(__int64 a1,
                                                                 _DWORD* a2,
                                                                 _DWORD* a3);
bool game_map_MapPanelTrickTarget_UpdateTarget_lambda2_Invoke(__int64 a1,
                                                              _DWORD* a2,
                                                              _DWORD* a3);
__int64 game_map_MapPanelTrickTarget_UpdateTarget_lambda3_Invoke(__int64 a1,
                                                                 _DWORD* a2,
                                                                 _DWORD* a3);

__int64 MapPanelTrickTarget_Destructor(_QWORD* a1)
{
  *a1 = game_map_MapPanelTrickTarget_vtable;
  return GameRoutine_f85d20(a1[3]);
}

__int64 MapPanelTrickTarget_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;

  *a1 = game_map_MapPanelTrickTarget_vtable;
  GameRoutine_f85d20(a1[3]);
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v1);
}

__int64 game_map_MapPanelTrickTarget_UpdateTarget_lambda0_Invoke(__int64 a1,
                                                                 _DWORD* a2,
                                                                 _DWORD* a3)
{
  char v3;
  __int64 v4;
  _BYTE v6[2];
  __int16 v7;

  v3 = *a2;
  v4 = *(_QWORD*)(a1 + 8);
  v7 = 0;
  v6[0] = v3;
  v6[1] = *a3;
  return GameRoutine_74e080(v4, v6);
}

__int64 game_map_MapPanelTrickTarget_UpdateTarget_lambda1_Invoke(__int64 a1,
                                                                 _DWORD* a2,
                                                                 _DWORD* a3)
{
  char v3;
  __int64 v4;
  _BYTE v6[2];
  __int16 v7;

  v3 = *a2;
  v4 = *(_QWORD*)(a1 + 8);
  v7 = 0;
  v6[0] = v3;
  v6[1] = *a3;
  return GameRoutine_74e080(v4, v6);
}

bool game_map_MapPanelTrickTarget_UpdateTarget_lambda2_Invoke(__int64 a1,
                                                              _DWORD* a2,
                                                              _DWORD* a3)
{
  char* v3;

  v3 = *(char**)(a1 + 8);
  return *a2 == *v3 && *a3 == v3[1];
}

__int64 game_map_MapPanelTrickTarget_UpdateTarget_lambda3_Invoke(__int64 a1,
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
