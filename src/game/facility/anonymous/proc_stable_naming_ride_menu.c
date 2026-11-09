#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1862ec0(_QWORD, _QWORD);
__int64 GameRoutine_19efcc0(_QWORD, _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_facility_anonymous_NamingRideMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcStableNamingRideMenu_Unknown149(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, int a5, int a6);
__int64 ProcStableNamingRideMenu_Unknown150(__int64 a1, _DWORD* a2, _DWORD* a3);
__int64 ProcStableNamingRideMenu_Unknown149(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, int a5, int a6)
{
  __int64 result;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
  *(_DWORD*)(result + 40) = a5;
  *(_QWORD*)(result + 88) = a4;
  *(_QWORD*)(result + 96) = a3;
  *(_DWORD*)(result + 104) = a6;
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_WORD*)(result + 80) = 257;
  *(_BYTE*)(result + 82) = 1;
  *(_QWORD*)result = game_facility_anonymous_NamingRideMenuItem_vtable;
  *(_QWORD*)(result + 8) = 0;
  return result;
}

__int64 ProcStableNamingRideMenu_Unknown150(__int64 a1, _DWORD* a2, _DWORD* a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  char v13;
  _BYTE* v14;
  __int64 v15;
  _BYTE* v16;
  __int64 v17;
  _QWORD v19[2];
  int v20;
  int v21;
  int v22;
  char v23;
  _QWORD v24[2];
  int v25;
  int v26;
  int v27;
  char v28;
  __int64 v29;
  int v30;
  _QWORD* v31;
  _BYTE* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _BYTE* v36;
  __int64 v37;
  int v38;
  _QWORD* v39;
  _BYTE* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _BYTE* v44;

  v6 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a2 + 560LL))(a2);
  WORD1(v37) = 0;
  HIDWORD(v37) = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = nullptr;
  v39 = &v40;
  v40 = nullptr;
  GameRoutine_930b90(&v37, v6);
  v7 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a3 + 560LL))(a3);
  WORD1(v29) = 0;
  HIDWORD(v29) = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = nullptr;
  v31 = &v32;
  v32 = nullptr;
  GameRoutine_930b90(&v29, v7);
  if (BYTE3(v37) != 0) {
    v8 = game_UnitPool_Get((char*)&v37 + 3);
    if (BYTE3(v29) != 0) {
    LABEL_3:
      v9 = game_UnitPool_Get((char*)&v29 + 3);
      goto LABEL_6;
    }
  }
  else {
    v8 = 0;
    if (BYTE3(v29) != 0) {
      goto LABEL_3;
    }
  }
  v9 = 0;

LABEL_6:
  v10 = a2[26];
  v11 = a3[26];
  v12 = GameRoutine_1862ec0(a1, &v37);
  v20 = GameRoutine_1862ec0(a1, &v29);
  v21 = v11;
  v24[0] = &v37;
  v24[1] = v8;
  v25 = v12;
  v26 = v10;
  v27 = 0;
  v28 = 0;
  v19[0] = &v29;
  v19[1] = v9;
  v22 = 0;
  v23 = 0;
  v13 = GameRoutine_19efcc0(v24, v19);
  v29 = 0;
  v30 = 0;
  if ((v34 & 1) != 0) {
    *v36 = 0;
    v35 = 0;
  }
  else {
    LOWORD(v34) = 0;
  }
  GameRoutine_6e3b50(&v31, v32);
  v32 = nullptr;
  v33 = 0;
  v31 = &v32;
  if ((v34 & 1) != 0) {
    v14 = v36;
    if (v36 != nullptr) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v36);
      v14 = v32;
    }
  }
  else {
    v14 = nullptr;
  }
  GameRoutine_6e3b50(&v31, v14);
  v37 = 0;
  v38 = 0;
  if ((v42 & 1) != 0) {
    *v44 = 0;
    v43 = 0;
  }
  else {
    LOWORD(v42) = 0;
  }
  GameRoutine_6e3b50(&v39, v40);
  v40 = nullptr;
  v41 = 0;
  v39 = &v40;
  if ((v42 & 1) != 0) {
    v16 = v44;
    if (v44 != nullptr) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v44);
      v16 = v40;
    }
  }
  else {
    v16 = nullptr;
  }
  GameRoutine_6e3b50(&v39, v16);
  return v13 & 1;
}

#pragma GCC visibility pop
