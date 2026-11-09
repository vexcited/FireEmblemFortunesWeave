#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17356e0(_QWORD*, __int64);
__int64 GameRoutine_1760e40(__int64, unsigned int);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 (*game_telop_TelopCommonResult_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char** msg_MessageManager_empty_text__ptr;
__int64 TelopCommonResult_Unknown57(__int64 a1);
__int64 TelopCommonResult_Destructor(__int64 a1);
__int64 TelopCommonResult_DeletingDestructor(__int64 a1);

__int64 TelopCommonResult_Unknown57(__int64 a1)
{
  _BYTE* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  char v13;
  _QWORD v15[4];
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _BYTE v31[4];
  _DWORD v32[2];

  if ((*(_BYTE*)(a1 + 1168) & 1) != 0) {
    v1 = *(_BYTE**)(a1 + 1184);
  }
  else {
    v1 = (_BYTE*)(a1 + 1169);
  }
  if (v1 != nullptr && *v1 != 0) {
    v2 = a1;
    v18 = -1;
    v19 = -1;
    v20 = -1;
    v21 = -1;
    v3 = *msg_MessageManager_instance__ptr[0];
    v22 = -1;
    v23 = -1;
    v24 = -1;
    v25 = -1;
    v26 = -1;
    v27 = -1;
    v28 = -1;
    v29 = -1;
    v15[0] = GameData_212e348 + 2;
    v15[1] = 0xFFFF0001FFFF0000LL;
    v15[2] = 0xFFFF0004FFFF0002LL;
    v15[3] = 0xFFFF0006FFFF0005LL;
    v30 = 8;
    v16 = -65529;
    v17 = -65528;
    v4 = GameRoutine_a4dbe0(v3, v1, 0, v15);
    a1 = v2;
  }
  else {
    v4 = (__int64)*msg_MessageManager_empty_text__ptr;
  }
  v5 = GameRoutine_1760e40(a1, 0);
  v6 = (_QWORD*)v5;
  if (v4 != 0) {
    v7 = ui_LayoutAccessor_FindTextBox(v5, "L_Txt/T_Txt");
    if (v7 != 0) {
      GameRoutine_156c5d0(v7, v4, 0);
    }
  }
  v8 = ui_LayoutAccessor_FindTextBox(v6, "L_Txt/T_Txt");
  if (v8 != 0) {
    v9 = v8;
    v10 = ui_LayoutAccessor_FindTextBox(v6, "L_Txt/T_Txt");
    if (v10 != 0) {
      GameRoutine_190a0c0(v15, v32, v31, v10, *(_QWORD*)(v10 + 216));
      v11 = v32[0];
      v12 = v32[1];
    }
    else {
      v11 = 0;
      v12 = 0;
    }
    v13 = *(_BYTE*)(v9 + 88);
    *(_DWORD*)(v9 + 80) = v11;
    *(_DWORD*)(v9 + 84) = v12;
    *(_BYTE*)(v9 + 88) = v13 | 0x10;
  }
  return GameRoutine_17356e0(v6, (__int64)"L_Txt");
}

__int64 TelopCommonResult_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  *(_QWORD*)a1 = game_telop_TelopCommonResult_vtable;
  if ((*(_BYTE*)(a1 + 1168) & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 1184);
    if (v1 != 0) {
      v2 = a1;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v1);
      a1 = v2;
    }
  }
  return game_telop_TelopResult_Destroy_TelopResult(a1);
}

__int64 TelopCommonResult_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_telop_TelopCommonResult_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 1168) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 1184);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  game_telop_TelopResult_Destroy_TelopResult(a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5, a1);
}

#pragma GCC visibility pop
