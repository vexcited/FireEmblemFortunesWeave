#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
_QWORD* GameRoutine_16e0c00(_QWORD* result, __int64);
__int64 GameRoutine_120c6c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15d2540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15de9d0(_QWORD, _QWORD);
__int64 GameRoutine_15dea90(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8ae490(_QWORD);
__int64 GameRoutine_8aed00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8af4b0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_menu_anonymous_UnitItemMenu_vtable[])();
extern __int64 GameData_20a3328;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212e008[9];
extern __int64* game_g_empty_item_ptr;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
_QWORD* SendUnitItemMenu_Unknown128(_QWORD* result);
__int64 SendUnitItemMenu_Unknown88(__int64 a1);
__int64 SendUnitItemMenu_Unknown101(__int64 a1);
__int64 SendUnitItemMenu_16fb620(_QWORD* a1);
_BYTE* SendUnitItemMenu_Unknown142(_BYTE* result, __int64* a2);
__int64 SendUnitItemMenu_Unknown143(__int64 a1);

_QWORD* SendUnitItemMenu_Unknown128(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = (_QWORD*)result[134];
  if (v1[1] != *v1) {
    v2 = result;
    v3 = 0;
    v4 = 0;
    v5 = game_g_empty_item_ptr;
    do {
      v6 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
      v7 = v2[133];
      *(_WORD*)(v6 + 16) = 0;
      *(_QWORD*)(v6 + 48) = 0;
      *(_QWORD*)(v6 + 56) = 0;
      v8 = v6;
      *(_QWORD*)(v6 + 64) = 0;
      *(_QWORD*)(v6 + 72) = 0;
      *(_WORD*)(v6 + 80) = 257;
      *(_BYTE*)(v6 + 82) = 1;
      *(_DWORD*)(v6 + 40) = v4;
      *(_QWORD*)v6 = game_menu_anonymous_UnitItemMenu_vtable;
      *(_QWORD*)(v6 + 8) = 0;
      *(_BYTE*)(v6 + 104) = 0;
      *(_QWORD*)(v6 + 88) = v7;
      *(_QWORD*)(v6 + 96) = v1;
      if ((__int64)(v1[1] - *v1) >> 3 <= (unsigned __int64)(v3 >> 32)) {
        v9 = (__int64)v5;
      }
      else {
        v9 = *v1 + (v3 >> 29);
      }
      *(_BYTE*)(v8 + 104) = GameRoutine_8ae490(v9);
      result = GameRoutine_16e0c00(v2, v8);
      v1 = (_QWORD*)v2[134];
      ++v4;
      v3 += 0x100000000LL;
    } while (v4 < (__int64)(v1[1] - *v1) >> 3);
  }
  return result;
}

__int64 SendUnitItemMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20a3328, 0);
    if (result != 0) {
      v3 = result;
      GameRoutine_1560070(&v10, a1 + 848, "L_ItemDetail");
      v4 = *(_QWORD**)(v3 + 96);
      v5 = *(int*)(v3 + 40);
      result = v11;
      v6 = v5 >= (__int64)(v4[1] - *v4) >> 3 ? game_g_empty_item_ptr
                                             : (__int64*)(*v4 + 8 * v5);
      if (v11 != 0) {
        v7 = *(_QWORD*)(a1 + 1064);
        v8 = std___1___shared_weak_count_lock(v11);
        if (v8 != 0) {
          v9 = v8;
          if (v10 != 0) {
            GameRoutine_15d2540(v10, v6, v7);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
            std___1___shared_weak_count___release_weak(v9);
          }
        }
        result = v11;
        if (v11 != 0) {
          return std___1___shared_weak_count___release_weak(v11);
        }
      }
    }
  }
  return result;
}

__int64 SendUnitItemMenu_Unknown101(__int64 a1)
{
  __int64 v2;

  if ((*(_BYTE*)(a1 + 1080) & 1) != 0) {
    return 1;
  }
  v2 = *(_QWORD*)(a1 + 1168);
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
  }
  return 3;
}

__int64 SendUnitItemMenu_16fb620(_QWORD* a1)
{
  __int64 result;
  unsigned __int64 v3;
  __int64 v4;
  int v5;
  _QWORD* v6;
  __int64* v7;
  char v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  _BOOL4 v12;
  __int64 v13;
  unsigned int v14;
  _QWORD* v15;
  unsigned __int64 v16;
  _DWORD* v17;
  _DWORD* v18;
  _DWORD* v19;
  int v20;
  int v21;
  _DWORD* v22;

  result = a1[42];
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20a3328, 0);
    if (result != 0) {
      v3 = *(int*)(result + 40);
      v4 = result;
      v5 = a1[30] == a1[29]
               ? -1
               : (unsigned __int64)(a1[30] - a1[29] + 0x7FFFFFFF8LL) >> 3;
      v6 = *(_QWORD**)(result + 96);
      v7 = v3 >= (__int64)(v6[1] - *v6) >> 3 ? game_g_empty_item_ptr
                                             : (__int64*)(*v6 + 8 * v3);
      v8 = *((_BYTE*)v7 + 3);
      v9 = *(unsigned __int16*)v7;
      v10 = *GameData_212c878[0];
      if ((v8 & 1) != 0) {
        v13 = *(_QWORD*)(*(_QWORD*)(v10 + 64) + 8 * v9);
        v11 = *(unsigned __int8*)(v13 + 72) < 8u;
        v12 = *(unsigned __int8*)(v13 + 72) == 13;
      }
      else {
        v11 = false;
        v12 = false;
        v13 = *(_QWORD*)(*(_QWORD*)(v10 + 64) + 8 * v9);
      }
      v14 = *(unsigned __int8*)(v13 + 73);
      result = GameRoutine_8aed00(a1[134], a1[133], (unsigned int)v3);
      if ((result & 1) != 0) {
        v15 = (_QWORD*)a1[134];
        v16 = *(int*)(v4 + 40);
        v17 = (_DWORD*)v15[1];
        if (v16 < ((__int64)v17 - *v15) >> 3) {
          v18 = (_DWORD*)(*v15 + 8 * v16);
          if (v18 + 2 != v17) {
            v19 = v18;
            do {
              v20 = v19[2];
              v19 += 2;
              v21 = v18[3];
              *v18 = v20;
              v18[1] = v21;
              v22 = v18 + 4;
              v18 = v19;
            } while (v22 != v17);
            v18 = v19;
          }
          v15[1] = v18;
          v15 = (_QWORD*)a1[134];
        }
        GameRoutine_8af4b0(v15, a1[133]);
        if ((_DWORD)v3 != v5) {
          GameRoutine_120c6c0(a1[133], 5, 1);
          if (v11) {
            GameRoutine_15de9d0(a1[133], 1);
          }
          else if (v12) {
            GameRoutine_15dea90(a1[133], v14, 1);
          }
        }
        result = a1[140];
        if (result != 0) {
          return (*(__int64 (**)(__int64))(*(_QWORD*)result + 48LL))(result);
        }
      }
    }
  }
  return result;
}

_BYTE* SendUnitItemMenu_Unknown142(_BYTE* result, __int64* a2)
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

  if ((result[1080] & 1) == 0) {
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
      *(_QWORD*)v14 = &GameData_1a9f09e;
      *(_QWORD*)(v14 + 8) = "MID_KeyHelp_Cancel";
      *(_BYTE*)(v14 + 28) = 0;
      *(_QWORD*)(v14 + 32) = 0;
      *(_BYTE*)(v14 + 16) = 1;
      v15 = v13 + 40 * v11;
      *(_DWORD*)(v14 + 20) = 1;
      *(_DWORD*)(v14 + 24) = (_DWORD)result;
      v5 = v13 + v7 + 40;
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
      *(_QWORD*)v3 = &GameData_1a9f09e;
      *(_QWORD*)(v3 + 8) = "MID_KeyHelp_Cancel";
      v5 = v3 + 40;
      *(_BYTE*)(v3 + 16) = 1;
      *(_DWORD*)(v3 + 20) = 1;
      *(_DWORD*)(v3 + 24) = (_DWORD)result;
    }
    a2[1] = v5;
  }
  return result;
}

__int64 SendUnitItemMenu_Unknown143(__int64 a1)
{
  return 2 * (unsigned int)*(unsigned __int8*)(a1 + 1081);
}

#pragma GCC visibility pop
