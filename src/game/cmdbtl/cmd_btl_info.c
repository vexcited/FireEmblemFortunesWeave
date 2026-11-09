#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BattleSide_Destructor(_QWORD);
__int64 GameRoutine_799290(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_21d40b8;
extern _UNKNOWN GameData_21d41b0;
extern __int64 (*game_map_BattleArea_vtable[])();
extern __int64 GameData_212d238[2];
extern __int64 GameData_2219088;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d258[2];
_QWORD* CmdBtlInfo_Unknown2(_QWORD* result);
__int64 CmdBtlInfo_DeletingDestructor(_QWORD* a1);

_QWORD* CmdBtlInfo_Unknown2(_QWORD* result)
{
  __int64 v1;
  int v2;
  __int64 v3;
  _WORD* v4;
  int v5;
  __int64 v6;
  _WORD* v7;
  int v8;
  __int64 v9;
  _WORD* v10;
  int v11;
  __int64 v12;
  _WORD* v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  __int16 v22;
  __int16 v23;
  __int16 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int16 v28;
  _QWORD* v29;
  _QWORD* v30;
  _QWORD* v31;
  _QWORD* v32;

  v1 = GameData_2219088;
  if (GameData_2219088 != 0) {
    if (result[5] != 0 && *(_BYTE*)(GameData_2219088 + 12) == 1) {
      v2 = *(_DWORD*)(GameData_2219088 + 8);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                                memory_order_acquire) &
           1) == 0) {
        v29 = result;
        v25 = v1;
        v22 = v2;
        v14 = __cxa_guard_acquire(&GameData_21d41b0);
        LOWORD(v2) = v22;
        v1 = v25;
        v15 = v14;
        result = v29;
        if (v15 != 0) {
          GameRoutine_799290(&GameData_21d40b8);
          __cxa_guard_release(&GameData_21d41b0);
          LOWORD(v2) = v22;
          v1 = v25;
          result = v29;
        }
      }
      v3 = result[23];
      if (v3 != 0) {
        v4 = (_WORD*)(*(_QWORD*)(result[19] +
                                 8 * ((unsigned __int64)(v3 + result[22] - 1) >>
                                      4)) +
                      244LL *
                          (((_DWORD)v3 + *((_DWORD*)result + 44) - 1) & 0xF));
      }
      else {
        v4 = &GameData_21d40b8;
      }
      *v4 = v2;
    }
    if (result[100] != 0 && *(_BYTE*)(v1 + 20) == 1) {
      v5 = *(_DWORD*)(v1 + 16);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                                memory_order_acquire) &
           1) == 0) {
        v30 = result;
        v26 = v1;
        v23 = v5;
        v16 = __cxa_guard_acquire(&GameData_21d41b0);
        LOWORD(v5) = v23;
        v1 = v26;
        v17 = v16;
        result = v30;
        if (v17 != 0) {
          GameRoutine_799290(&GameData_21d40b8);
          __cxa_guard_release(&GameData_21d41b0);
          LOWORD(v5) = v23;
          v1 = v26;
          result = v30;
        }
      }
      v6 = result[118];
      if (v6 != 0) {
        v7 =
            (_WORD*)(*(_QWORD*)(result[114] +
                                8 * ((unsigned __int64)(v6 + result[117] - 1) >>
                                     4)) +
                     244LL *
                         (((_DWORD)v6 + *((_DWORD*)result + 234) - 1) & 0xF));
      }
      else {
        v7 = &GameData_21d40b8;
      }
      *v7 = v5;
    }
    if (result[195] != 0 && *(_BYTE*)(v1 + 28) == 1) {
      v8 = *(_DWORD*)(v1 + 24);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                                memory_order_acquire) &
           1) == 0) {
        v31 = result;
        v27 = v1;
        v24 = v8;
        v18 = __cxa_guard_acquire(&GameData_21d41b0);
        LOWORD(v8) = v24;
        v1 = v27;
        v19 = v18;
        result = v31;
        if (v19 != 0) {
          GameRoutine_799290(&GameData_21d40b8);
          __cxa_guard_release(&GameData_21d41b0);
          LOWORD(v8) = v24;
          v1 = v27;
          result = v31;
        }
      }
      v9 = result[213];
      if (v9 != 0) {
        v10 =
            (_WORD*)(*(_QWORD*)(result[209] +
                                8 * ((unsigned __int64)(v9 + result[212] - 1) >>
                                     4)) +
                     244LL *
                         (((_DWORD)v9 + *((_DWORD*)result + 424) - 1) & 0xF));
      }
      else {
        v10 = &GameData_21d40b8;
      }
      *v10 = v8;
    }
    if (result[290] != 0 && *(_BYTE*)(v1 + 36) == 1) {
      v11 = *(_DWORD*)(v1 + 32);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                                memory_order_acquire) &
           1) == 0) {
        v32 = result;
        v28 = v11;
        v20 = __cxa_guard_acquire(&GameData_21d41b0);
        LOWORD(v11) = v28;
        v21 = v20;
        result = v32;
        if (v21 != 0) {
          GameRoutine_799290(&GameData_21d40b8);
          __cxa_guard_release(&GameData_21d41b0);
          LOWORD(v11) = v28;
          result = v32;
        }
      }
      v12 = result[308];
      if (v12 != 0) {
        v13 = (_WORD*)(*(_QWORD*)(result[304] +
                                  8 * ((unsigned __int64)(v12 + result[307] -
                                                          1) >>
                                       4)) +
                       244LL * (((_DWORD)v12 + *((_DWORD*)result + 614) - 1) &
                                0xF));
      }
      else {
        v13 = &GameData_21d40b8;
      }
      *v13 = v11;
    }
  }
  return result;
}

__int64 CmdBtlInfo_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = GameData_212d238[0] + 16;
  a1[1412] = game_map_BattleArea_vtable;
  v2 = a1[1413];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    a1[1413] = 0;
  }
  a1[1] = GameData_212d258[0] + 2;
  BattleSide_Destructor(a1 + 287);
  BattleSide_Destructor(a1 + 192);
  BattleSide_Destructor(a1 + 97);
  BattleSide_Destructor(a1 + 2);
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

#pragma GCC visibility pop
