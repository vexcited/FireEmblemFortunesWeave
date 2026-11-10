#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_1862a60(_QWORD);
__int64 GameRoutine_1862ec0(_QWORD, _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
bool GameRoutine_19efcc0(_QWORD*, _QWORD*);
extern __int64 (*game_menu_anonymous_DeleteAnimalMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_ReleaseAnimalMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting;
__int64 ProcDeleteAnimalMenu_Unknown149(__int64 a1, __int64 a2, __int64 a3,
                                        __int64 a4, int a5, int a6);
bool ProcDeleteAnimalMenu_Unknown150(__int64 a1, _DWORD* a2, _DWORD* a3);
__int64 ProcDeleteAnimalMenu_Unknown151(__int64 a1);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(_QWORD, _QWORD);
__int64
game_menu_anonymous_ProcDeleteAnimalMenu_CreateBind_closure_Invoke(__int64 a1,
                                                                   __int64* a2);
__int64

game_menu_anonymous_ProcDeleteAnimalMenu_CreateBind_closure_Invoke(__int64 a1,
                                                                   __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  _BYTE v5[32];
  _BYTE* v6;
  const char* v7;

  v2 = *a2;
  v7 = "MID_StableMenu_FullRelease_Message";
  result = game_menu_Dialog__CreateBind_game_menu_Dialog(v2, &v7);
  if (result != 0) {
    v6 = nullptr;
    GameRoutine_6680e0(v5, result + 1248);
    result = (__int64)v6;
    if (v6 == v5) {
      v4 = 32;
    }
    else {
      if (v6 == nullptr) {
        return result;
      }
      v4 = 40;
    }
    return (*(__int64 (**)(void))(*(_QWORD*)v6 + v4))();
  }
  return result;
}

__int64 ProcDeleteAnimalMenu_Unknown149(__int64 a1, __int64 a2, __int64 a3,
                                        __int64 a4, int a5, int a6)
{
  __int64 result;
  __int64 v12;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 120, 16, 0);
  v12 = *(_QWORD*)(a1 + 1080);
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
  *(_QWORD*)result = game_menu_anonymous_DeleteAnimalMenuItem_vtable;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 112) = v12;
  return result;
}

bool ProcDeleteAnimalMenu_Unknown150(__int64 a1, _DWORD* a2, _DWORD* a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  bool v11;
  int v12;
  int v13;
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
  if (v10 == -99) {
    v11 = true;
  }
  else {
    v12 = a3[26];
    if (v12 == -99) {
      v11 = false;
    }
    else {
      v13 = GameRoutine_1862ec0(a1, &v37);
      v20 = GameRoutine_1862ec0(a1, &v29);
      v21 = v12;
      v25 = v13;
      v26 = v10;
      v27 = 0;
      v28 = 0;
      v22 = 0;
      v23 = 0;
      v24[0] = &v37;
      v24[1] = v8;
      v19[0] = &v29;
      v19[1] = v9;
      v11 = GameRoutine_19efcc0(v24, v19);
    }
  }
  v30 = 0;
  v29 = 0;
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
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v15);
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
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v17);
      v16 = v40;
    }
  }
  else {
    v16 = nullptr;
  }
  GameRoutine_6e3b50(&v39, v16);
  return v11;
}

__int64 ProcDeleteAnimalMenu_Unknown151(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  int v6;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      120, 16, 0);
  v3 = *(_QWORD*)(a1 + 1080);
  v4 = v2;
  *(_WORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_DWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)(v2 + 96) = 0;
  *(_WORD*)(v2 + 80) = 257;
  *(_BYTE*)(v2 + 82) = 1;
  *(_DWORD*)(v2 + 104) = -99;
  *(_QWORD*)v2 = game_menu_anonymous_ReleaseAnimalMenuItem_vtable;
  *(_QWORD*)(v2 + 8) = 0;
  *(_QWORD*)(v2 + 112) = v3;
  GameRoutine_16e0c00(a1, v2);
  GameRoutine_1862a60(a1);
  result = *(_QWORD*)(a1 + 336);
  if (result != v4) {
    if (result != 0) {
      (*(void (**)(__int64))(*(_QWORD*)result + 168LL))(result);
    }
    *(_QWORD*)(a1 + 336) = v4;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 0, 1, 0);
    result = *(_QWORD*)(a1 + 336);
    if (result == 0) {
      v6 = 4;
      goto LABEL_11;
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 160LL))(result);
    game_IsVibrationEnabled(game_g_game_setting + 712);
    result = *(_QWORD*)(a1 + 336);
  }
  v6 = 4;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 120LL))(result);
    if ((result & 1) != 0) {
      v6 = 4;
    }
    else {
      v6 = 0;
    }
  }

LABEL_11:
  *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v6;
  return result;
}

#pragma GCC visibility pop
