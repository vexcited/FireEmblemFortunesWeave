#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f14f80(_QWORD);
__int64 GameRoutine_f150c0(_QWORD);
__int64 GameRoutine_f15200(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_map_MapPanelDanger_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapPanelDanger_Destructor(_QWORD* a1);
__int64 MapPanelDanger_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_64dfe0(_QWORD, _QWORD);
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212f8b0[14];
_QWORD* MapPanelDanger_f15340(_QWORD* a1, _QWORD* a2);
bool game_map_MapPanelDanger_UpdateMeshDanger_lambda0_Invoke(__int64 a1,
                                                             _DWORD* a2,
                                                             _DWORD* a3);
__int64 game_map_MapPanelDanger_UpdateMeshDanger_lambda1_Invoke(__int64 a1,
                                                                _DWORD* a2,
                                                                _DWORD* a3);

__int64 MapPanelDanger_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;

  v1 = a1[14];
  *a1 = game_map_MapPanelDanger_vtable;
  if (v1 != 0) {
    a1[15] = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v1);
  }
  GameRoutine_f14f80(a1[12]);
  GameRoutine_f150c0(a1[9]);
  GameRoutine_f15200(a1[6]);
  return GameRoutine_f15200(a1[3]);
}

__int64 MapPanelDanger_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = a1[14];
  *a1 = game_map_MapPanelDanger_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[15] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  GameRoutine_f14f80(a1[12]);
  GameRoutine_f150c0(a1[9]);
  GameRoutine_f15200(a1[6]);
  GameRoutine_f15200(a1[3]);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, a1);
}

_QWORD* MapPanelDanger_f15340(_QWORD* a1, _QWORD* a2)
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
  void (***v17)(_QWORD);
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
    nn_mem_StandardAllocator_Free(v10 + v11, v8);
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
    v17 = (void (***)(_QWORD))a2[18];
    a2[19] = v12;
    v12 = v17;
    if (v17 != nullptr) {
    LABEL_19:
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v18, v12);
    }
  }
  v19 = 128;
  if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
    v19 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v19, a2);
  return v4;
}

bool game_map_MapPanelDanger_UpdateMeshDanger_lambda0_Invoke(__int64 a1,
                                                             _DWORD* a2,
                                                             _DWORD* a3)
{
  __int64 v3;

  LODWORD(v3) = *a2 + 32 * *a3;
  if ((unsigned int)v3 >= 0x400) {
    v3 = 0;
  }
  else {
    v3 = (unsigned int)v3;
  }
  return *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 152) + v3 + 8) >
         1u;
}

__int64 game_map_MapPanelDanger_UpdateMeshDanger_lambda1_Invoke(__int64 a1,
                                                                _DWORD* a2,
                                                                _DWORD* a3)
{
  __int64 v3;

  LODWORD(v3) = *a2 + 32 * *a3;
  if ((unsigned int)v3 >= 0x400) {
    v3 = 0;
  }
  else {
    v3 = (unsigned int)v3;
  }
  return *(_BYTE*)(*GameData_212ce90[0] + 21) &
         (*(_BYTE*)(*(_QWORD*)(*GameData_212ce98[0] + 152) + v3 + 8) != 0);
}

#pragma GCC visibility pop
