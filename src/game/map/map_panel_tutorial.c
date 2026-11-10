#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_74e080(_QWORD, _QWORD);
__int64 GameRoutine_f4c840(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1ff5668[])();
extern __int64 (*game_map_MapPanelTutorial_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapPanelTutorial_Destructor(_QWORD* a1);
__n128 MapPanelTutorial_DeletingDestructor(_QWORD* a1);
__int64
game_map_MapPanelTutorial_UpdateTarget_lambda0_Invoke_f4ca30(__int64 a1,
                                                             __int64* a2);
_QWORD* game_map_MapPanelTutorial_UpdateTarget_lambda0_Invoke_f4cbc0(__int64 a1,
                                                                     int* a2,
                                                                     int* a3);
__int64 game_map_MapPanelTutorial_UpdateTarget_lambda1_Invoke(__int64 a1,
                                                              _DWORD* a2,
                                                              _DWORD* a3);

__int64 MapPanelTutorial_Destructor(_QWORD* a1)
{
  *a1 = game_map_MapPanelTutorial_vtable;
  return GameRoutine_f4c840(a1[3]);
}

__n128 MapPanelTutorial_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;

  *a1 = game_map_MapPanelTutorial_vtable;
  GameRoutine_f4c840(a1[3]);
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v1);
}

__int64

game_map_MapPanelTutorial_UpdateTarget_lambda0_Invoke_f4ca30(__int64 a1,
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
  v7[0] = GameData_1ff5668;
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

_QWORD* game_map_MapPanelTutorial_UpdateTarget_lambda0_Invoke_f4cbc0(__int64 a1,
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

__int64 game_map_MapPanelTutorial_UpdateTarget_lambda1_Invoke(__int64 a1,
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
