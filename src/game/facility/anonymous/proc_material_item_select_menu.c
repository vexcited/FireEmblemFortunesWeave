#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_15d2a40(_QWORD, _QWORD);
__int64 GameRoutine_186ad20(_QWORD, _QWORD);
__int64 GameRoutine_667ea0(_QWORD, _QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e010[8];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcMaterialItemSelectMenu_Unknown88(__int64 a1);
__int64 ProcMaterialItemSelectMenu_Unknown110(_BYTE* a1, char a2);
_BYTE* ProcMaterialItemSelectMenu_Unknown150(_BYTE* result, __int64* a2);

__int64 ProcMaterialItemSelectMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212e008[0], GameData_212e010[0], 0);
    if (result != 0) {
      v3 = result;
      v4 = GameRoutine_155fbe0(a1 + 848, "L_InfoDetail");
      v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 560LL))(v3);
      return GameRoutine_15d2a40(v4, v5);
    }
  }
  return result;
}

__int64 ProcMaterialItemSelectMenu_Unknown110(_BYTE* a1, char a2)
{
  __int64 v2;
  __int64 v3;
  int v6;
  __int64 v7;
  __int64 v8;
  _BYTE v9[32];
  _BYTE* v10;
  __int64 v11;
  __int64 v12;
  const char* v13;

  if (a1[1128] == 1) {
    return (*(__int64 (**)(_BYTE*, _QWORD))(*(_QWORD*)a1 + 848LL))(a1, a2 & 1);
  }
  if ((a2 & 1) == 0) {
    return 0;
  }
  v11 = v2;
  v12 = v3;
  v6 = GameRoutine_186ad20(a1 + 1096, 0);
  if (v6 == 2) {
    v13 = "MID_Shop_FullItem_Material_Message";
    v7 = GameRoutine_667ea0(a1, &v13);
    if (v7 != 0) {
      v10 = nullptr;
      GameRoutine_6680e0(v9, v7 + 1248);
      if (v10 == v9) {
        v8 = 32;
        goto LABEL_14;
      }
      if (v10 != nullptr) {
        v8 = 40;
      LABEL_14:
        (*(void (**)(void))(*(_QWORD*)v10 + v8))();
      }
    }
    return 12;
  }
  if (v6 != 0) {
    return 1;
  }
  (*(void (**)(_BYTE*))(*(_QWORD*)a1 + 1128LL))(a1);
  game_menu_BasicMenu_Unknown16dd9a0(a1);
  return 13;
}

_BYTE* ProcMaterialItemSelectMenu_Unknown150(_BYTE* result, __int64* a2)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;

  if ((result[1128] & 1) == 0) {
    result =
        (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)result + 192LL))(result);
    v3 = a2[1];
    v4 = a2[2];
    if (v3 >= v4) {
      v6 = *a2;
      v7 = v3 - *a2;
      v8 = 1 - 0x3333333333333333LL * (v7 >> 3);
      if (v8 > 0x666666666666666LL) {
        GameRoutine_874520(result);
      }
      v9 = fw_memory_g_heap_manager_ptr;
      v10 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v4 - v6) >> 3);
      if (2 * v10 > v8) {
        v8 = 2 * v10;
      }
      if (v10 >= 0x333333333333333LL) {
        v11 = 0x666666666666666LL;
      }
      else {
        v11 = v8;
      }
      if (v11 != 0) {
        if (v11 > 0x666666666666666LL) {
          GameRoutine_60a210(result);
        }
        v12 = (int)result;
        v13 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v11, 16, 0);
        LODWORD(result) = v12;
      }
      else {
        v13 = 0;
      }
      v14 = v13 + v7;
      *(_QWORD*)v14 = "MultiSelection";
      *(_QWORD*)(v14 + 8) = "MID_KeyHelp_MultiSelection";
      *(_BYTE*)(v14 + 28) = 0;
      *(_QWORD*)(v14 + 32) = 0;
      *(_BYTE*)(v14 + 16) = 1;
      v15 = v13 + 40 * v11;
      v5 = v13 + v7 + 40;
      *(_DWORD*)(v14 + 20) = 7;
      *(_DWORD*)(v14 + 24) = (_DWORD)result;
      result = (_BYTE*)memcpy(v13, v6, v7);
      *a2 = v13;
      a2[1] = v5;
      a2[2] = v15;
      if (v6 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
          v16 = 56;
        }
        result = (_BYTE*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v16, v6);
      }
    }
    else {
      *(_BYTE*)(v3 + 28) = 0;
      *(_QWORD*)(v3 + 32) = 0;
      *(_QWORD*)v3 = "MultiSelection";
      *(_QWORD*)(v3 + 8) = "MID_KeyHelp_MultiSelection";
      v5 = v3 + 40;
      *(_BYTE*)(v3 + 16) = 1;
      *(_DWORD*)(v3 + 20) = 7;
      *(_DWORD*)(v3 + 24) = (_DWORD)result;
    }
    a2[1] = v5;
  }
  return result;
}

#pragma GCC visibility pop
