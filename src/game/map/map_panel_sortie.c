#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_fa4400(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_map_MapPanelSortie_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapPanelSortie_Destructor(_QWORD* a1);
__int64 MapPanelSortie_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_64dfe0(_QWORD, _QWORD);
extern __int64* GameData_212f8b0[14];
_DWORD** game_map_MapPanelSortie_UpdateSortie_lambda1_Invoke(_DWORD** result,
                                                             _DWORD* a2,
                                                             _DWORD* a3,
                                                             _DWORD* a4);
_QWORD* MapPanelSortie_fa4540(_QWORD* a1, _QWORD* a2);

__int64 MapPanelSortie_Destructor(_QWORD* a1)
{
  *a1 = game_map_MapPanelSortie_vtable;
  GameRoutine_fa4400(a1[12]);
  GameRoutine_fa4400(a1[9]);
  GameRoutine_fa4400(a1[6]);
  return GameRoutine_fa4400(a1[3]);
}

__int64 MapPanelSortie_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;

  *a1 = game_map_MapPanelSortie_vtable;
  GameRoutine_fa4400(a1[12]);
  GameRoutine_fa4400(a1[9]);
  GameRoutine_fa4400(a1[6]);
  GameRoutine_fa4400(a1[3]);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
}

_DWORD** game_map_MapPanelSortie_UpdateSortie_lambda1_Invoke(_DWORD** result,
                                                             _DWORD* a2,
                                                             _DWORD* a3,
                                                             _DWORD* a4)
{
  if (*result[1] == *a2 && *result[2] == *a3) {
    *result[3] = *a4;
  }
  return result;
}

_QWORD* MapPanelSortie_fa4540(_QWORD* a1, _QWORD* a2)
{
  _QWORD* v2;
  _QWORD* v4;
  _QWORD* v5;
  bool v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  void (***v12)(_QWORD);
  void (***v13)(_QWORD);
  void (***v14)(_QWORD);
  void (***v15)(_QWORD);
  void (**v16)(_QWORD);
  __int64 v17;
  __int64 v18;
  __int64 v19;

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
  v8 = a2[21];
  a2[6] = GameData_212f8b0[0] + 2;
  v9 = fw_memory_g_heap_manager_ptr;
  if (v8 != 0) {
    v10 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a2[22] = v8;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11);
  }
  v12 = (void (***)(_QWORD))a2[18];
  if (v12 != nullptr) {
    v13 = (void (***)(_QWORD))a2[19];
    if (v12 == v13) {
      goto LABEL_19;
    }
    v14 = v13 - 8;
    v15 = v13 - 8;
    do {
      v16 = *v15;
      v15 -= 8;
      (*v16)(v14);
      v6 = v14 == v12;
      v14 = v15;
    } while (!v6);
    v17 = a2[18];
    a2[19] = v12;
    if (v17 != 0) {
    LABEL_19:
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v18);
    }
  }
  v19 = 128;
  if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
    v19 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v19);
  return v4;
}

#pragma GCC visibility pop
