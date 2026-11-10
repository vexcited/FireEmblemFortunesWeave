#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1045980(_QWORD);
__int64 GameRoutine_1045ac0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 (*game_map_MapPanelDeployMove_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapPanelDeployMove_Destructor(_QWORD* a1, long double a2);
__int64 MapPanelDeployMove_DeletingDestructor(_QWORD* a1, long double a2);
__int64 GameRoutine_64dfe0(_QWORD, _QWORD);
__int64 GameRoutine_f097d0(_QWORD);
__int64 game_Unit_IsImmobile(void);
extern __int64 GameData_212d020[5];
extern __int64* GameData_212f8b0[14];
_QWORD* MapPanelDeployMove_1045c00(_QWORD* a1, _QWORD* a2);
bool game_map_MapPanelDeployMove_UpdateMesh_lambda0_Invoke(__int64 a1, int* a2,
                                                           int* a3);

__int64 MapPanelDeployMove_Destructor(_QWORD* a1, long double a2)
{
  __int64 v2;
  __int64 v4;

  v2 = a1[11];
  *a1 = game_map_MapPanelDeployMove_vtable;
  if (v2 != 0) {
    a1[12] = v2;
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                  a2);
  }
  GameRoutine_1045980(a1[9]);
  GameRoutine_1045ac0(a1[6]);
  return GameRoutine_1045ac0(a1[3]);
}

__int64 MapPanelDeployMove_DeletingDestructor(_QWORD* a1, long double a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  long double v7;
  __int64 v8;

  v2 = a1[11];
  *a1 = game_map_MapPanelDeployMove_vtable;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[12] = v2;
    v6 = 128;
    if (*(_QWORD*)(v5 + 200) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(v5 + v6, a2);
  }
  GameRoutine_1045980(a1[9]);
  GameRoutine_1045ac0(a1[6]);
  GameRoutine_1045ac0(a1[3]);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, v7);
}

_QWORD* MapPanelDeployMove_1045c00(_QWORD* a1, _QWORD* a2)
{
  _QWORD* v2;
  _QWORD* v4;
  _QWORD* v5;
  bool v6;
  __int64 v7;
  long double v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  void (***v13)(_QWORD);
  void (***v14)(_QWORD);
  void (***v15)(_QWORD);
  void (***v16)(_QWORD);
  void (**v17)(_QWORD);
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v2 = (_QWORD*)a2[1];
  if (v2 != nullptr) {
    do {
      v4 = v2;
      v2 = (_QWORD*)*v2;
    } while (v2 != nullptr);
  }
  else {
    v5 = a2;
    do {
      v4 = (_QWORD*)v5[2];
      v6 = v5 == (_QWORD*)*v4;
      v5 = v4;
    } while (!v6);
  }
  if ((_QWORD*)*a1 == a2) {
    *a1 = v4;
  }
  v7 = a1[1];
  --a1[2];
  GameRoutine_64dfe0(v7, a2);
  v9 = a2[21];
  a2[6] = GameData_212f8b0[0] + 2;
  v10 = fw_memory_g_heap_manager_ptr;
  if (v9 != 0) {
    v11 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a2[22] = v9;
    v12 = 128;
    if (*(_QWORD*)(v11 + 200) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(v11 + v12, v8);
  }
  v13 = (void (***)(_QWORD))a2[18];
  if (v13 != nullptr) {
    v14 = (void (***)(_QWORD))a2[19];
    if (v13 == v14) {
      goto LABEL_19;
    }
    v15 = v14 - 8;
    v16 = v14 - 8;
    do {
      v17 = *v16;
      v16 -= 8;
      (*v17)(v15);
      v6 = v15 == v13;
      v15 = v16;
    } while (!v6);
    v18 = a2[18];
    a2[19] = v13;
    if (v18 != 0) {
    LABEL_19:
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v19, v8);
    }
  }
  v20 = 128;
  if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
    v20 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v20, v8);
  return v4;
}

bool game_map_MapPanelDeployMove_UpdateMesh_lambda0_Invoke(__int64 a1, int* a2,
                                                           int* a3)
{
  int v3;
  int v4;
  __int64 v5;

  v3 = *a2;
  v4 = *a3;
  v5 = *(_QWORD*)GameData_212d020[0];
  return GameRoutine_f097d0(*(_QWORD*)GameData_212d020[0]) != 0 &&
         (game_Unit_IsImmobile() & 1) == 0 &&
         ((*(_DWORD*)(v5 + 4408 + 4LL * ((v3 + 32 * v4) >> 5)) >> v3) & 1) != 0;
}

#pragma GCC visibility pop
