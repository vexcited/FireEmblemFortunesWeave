#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_64dfe0(_QWORD, _QWORD);
__int64 MapPanelRage_f1a700_alt1(_QWORD, _QWORD) __asm__("MapPanelRage_f1a700");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212f8b0[14];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_74e1f0(_QWORD);
__int64 MapPanelRage_f19700(__int64 result, _QWORD* a2);
_QWORD* MapPanelRage_f19840(_QWORD* a1, _QWORD* a2);
__int64 game_map_MapPanelRage_UpdateRage_lambda0_Invoke_f1a670(__int64 a1,
                                                               __int64 a2);
_BYTE* MapPanelRage_f1a700(_QWORD* a1, __int64 a2);
__int64 game_map_MapPanelRage_UpdateRage_lambda0_Invoke_f1a940(__int64 a1,
                                                               _DWORD* a2,
                                                               _DWORD* a3);
__int64 game_map_MapPanelRage_UpdateRage_lambda0_Invoke_f1aaa0(__int64 a1,
                                                               _DWORD* a2,
                                                               _DWORD* a3);
__int64 game_map_MapPanelRage_UpdateRage_lambda0_Invoke_f1ac00(__int64 a1,
                                                               _DWORD* a2,
                                                               _DWORD* a3);
__int64 game_map_MapPanelRage_UpdateRage_lambda0_Invoke_f1ad60(__int64 a1,
                                                               _DWORD* a2,
                                                               _DWORD* a3);

__int64 MapPanelRage_f19700(__int64 result, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  void (***v8)(_QWORD);
  void (***v9)(_QWORD);
  void (***v10)(_QWORD);
  void (***v11)(_QWORD);
  void (**v12)(_QWORD);
  bool v13;
  void (***v14)(_QWORD);
  __int64 v15;
  __int64 v16;

  if (a2 != nullptr) {
    v3 = result;
    MapPanelRage_f19700(result, *a2);
    MapPanelRage_f19700(v3, a2[1]);
    v4 = a2[21];
    a2[6] = GameData_212f8b0[0] + 2;
    v5 = fw_memory_g_heap_manager_ptr;
    if (v4 != 0) {
      v6 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      a2[22] = v4;
      v7 = 128;
      if (*(_QWORD*)(v6 + 200) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(v6 + v7, v4);
    }
    v8 = (void (***)(_QWORD))a2[18];
    if (v8 != nullptr) {
      v9 = (void (***)(_QWORD))a2[19];
      if (v8 == v9) {
        goto LABEL_12;
      }
      v10 = v9 - 8;
      v11 = v9 - 8;
      do {
        v12 = *v11;
        v11 -= 8;
        (*v12)(v10);
        v13 = v10 == v8;
        v10 = v11;
      } while (!v13);
      v14 = (void (***)(_QWORD))a2[18];
      a2[19] = v8;
      v8 = v14;
      if (v14 != nullptr) {
      LABEL_12:
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v15, v8);
      }
    }
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v16 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v16, a2);
  }
  return result;
}

_QWORD* MapPanelRage_f19840(_QWORD* a1, _QWORD* a2)
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

__int64 game_map_MapPanelRage_UpdateRage_lambda0_Invoke_f1a670(__int64 a1,
                                                               __int64 a2)
{
  __int16 v2;
  _QWORD* v3;
  _WORD v5[2];

  v2 = *(_WORD*)(a2 + 1);
  v3 = (_QWORD*)(a1 + 8);
  v5[1] = 0;
  v5[0] = v2;
  if ((*(_BYTE*)(a2 + 4) & 8) == 0) {
    v3 = (_QWORD*)(a1 + 16);
  }
  return MapPanelRage_f1a700_alt1(*v3, v5);
}

_BYTE* MapPanelRage_f1a700(_QWORD* a1, __int64 a2)
{
  unsigned __int64 v2;
  _BYTE* v3;
  _BYTE* v6;
  _BYTE* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  _DWORD* v15;
  _BYTE* v16;
  _BYTE* v17;
  _BYTE* v18;
  char v19;
  __int64 v20;

  v3 = (_BYTE*)a1[1];
  v2 = a1[2];
  if ((unsigned __int64)v3 >= v2) {
    v7 = (_BYTE*)*a1;
    v8 = (__int64)&v3[-*a1];
    v9 = v8 >> 2;
    v10 = (v8 >> 2) + 1;
    if (v10 >> 62 != 0) {
      GameRoutine_74e1f0(a1);
    }
    v11 = v2 - (_QWORD)v7;
    if (v11 >> 1 > v10) {
      v10 = v11 >> 1;
    }
    if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFFCLL) {
      v12 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v10;
    }
    if (v12 >> 62 != 0) {
      GameRoutine_60a210(a1);
    }
    v13 = fw_memory_g_heap_manager_ptr;
    v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         4 * v12, 16, 0);
    v15 = (_DWORD*)(v14 + v8);
    v16 = &v15[-v9];
    *v15 = *(_DWORD*)a2;
    v6 = v15 + 1;
    if (v7 != v3) {
      v17 = v7;
      v18 = v16;
      do {
        *v18 = *v17;
        v18[1] = v17[1];
        v18[2] = v17[2];
        v19 = v17[3];
        v17 += 4;
        v18[3] = v19;
        v18 += 4;
      } while (v17 != v3);
    }
    *a1 = v16;
    a1[1] = v6;
    a1[2] = v14 + 4 * v12;
    if (v7 != nullptr) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v20, v7);
    }
  }
  else {
    v6 = v3 + 4;
    *v3 = *(_BYTE*)a2;
    v3[1] = *(_BYTE*)(a2 + 1);
    v3[2] = *(_BYTE*)(a2 + 2);
    v3[3] = *(_BYTE*)(a2 + 3);
  }
  a1[1] = v6;
  return v6 - 4;
}

__int64 game_map_MapPanelRage_UpdateRage_lambda0_Invoke_f1a940(__int64 a1,
                                                               _DWORD* a2,
                                                               _DWORD* a3)
{
  char** v3;
  char* v4;
  char* v5;

  v3 = *(char***)(a1 + 16);
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

__int64 game_map_MapPanelRage_UpdateRage_lambda0_Invoke_f1aaa0(__int64 a1,
                                                               _DWORD* a2,
                                                               _DWORD* a3)
{
  char** v3;
  char* v4;
  char* v5;

  v3 = *(char***)(a1 + 16);
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

__int64 game_map_MapPanelRage_UpdateRage_lambda0_Invoke_f1ac00(__int64 a1,
                                                               _DWORD* a2,
                                                               _DWORD* a3)
{
  char** v3;
  char* v4;
  char* v5;

  v3 = *(char***)(a1 + 16);
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

__int64 game_map_MapPanelRage_UpdateRage_lambda0_Invoke_f1ad60(__int64 a1,
                                                               _DWORD* a2,
                                                               _DWORD* a3)
{
  char** v3;
  char* v4;
  char* v5;

  v3 = *(char***)(a1 + 16);
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
