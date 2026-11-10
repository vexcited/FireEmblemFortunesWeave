#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_211eeb8[])();
extern __int64 (*game_RelianceCheck_vtable[])();
extern __int64 GameData_21c9708;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_RelianceCheck_unknown_;
extern int GameData_2272240;
_QWORD* RelianceCheck_Destructor(_QWORD* result);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_19a85a0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 RelianceCheck_19a7f00(__int64 result, __int64 a2, int a3);
void RelianceCheck_19a8310();

_QWORD* RelianceCheck_Destructor(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = result;
  *result = game_RelianceCheck_vtable;
  if (game_RelianceCheck_unknown_ != 0) {
    v2 = fw_memory_g_heap_manager_ptr;
    if (*(_QWORD*)game_RelianceCheck_unknown_ != 0) {
      v3 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      *(_QWORD*)(game_RelianceCheck_unknown_ + 8) =
          *(_QWORD*)game_RelianceCheck_unknown_;
      v4 = 128;
      if (*(_QWORD*)(v3 + 200) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(v3 + v4);
    }
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5);
    game_RelianceCheck_unknown_ = 0;
  }
  *v1 = GameData_211eeb8;
  if ((_QWORD*)GameData_21c9708 == v1) {
    GameData_21c9708 = 0;
    GameData_2272240 = 0;
  }
  return result;
}

__int64 RelianceCheck_19a7f00(__int64 result, __int64 a2, int a3)
{
  __int64* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;

  v3 = (__int64*)game_RelianceCheck_unknown_;
  v5 = *(_QWORD*)(game_RelianceCheck_unknown_ + 8);
  v4 = *(_QWORD*)(game_RelianceCheck_unknown_ + 16);
  if (v5 >= v4) {
    v7 = *(_QWORD*)game_RelianceCheck_unknown_;
    v8 = v5 - *(_QWORD*)game_RelianceCheck_unknown_;
    v9 = 1 - 0x5555555555555555LL * (v8 >> 3);
    if (v9 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_19a85a0();
    }
    v10 = fw_memory_g_heap_manager_ptr;
    v11 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v4 - v7) >> 3);
    if (2 * v11 > v9) {
      v9 = 2 * v11;
    }
    if (v11 >= 0x555555555555555LL) {
      v12 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210(result);
      }
      v13 = result;
      v14 = a2;
      v15 = a3;
      v16 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v12, 16, 0);
      a3 = v15;
      a2 = v14;
      result = v13;
    }
    else {
      v16 = 0;
    }
    v17 = v16 + v8;
    v18 = v16 + 24 * v12;
    *(_QWORD*)v17 = result;
    *(_QWORD*)(v17 + 8) = a2;
    *(_DWORD*)(v17 + 16) = a3;
    v6 = v16 + v8 + 24;
    result = memcpy(v16, v7, v8);
    *v3 = v16;
    v3[1] = v6;
    v3[2] = v18;
    if (v7 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v19 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v19);
    }
  }
  else {
    *(_QWORD*)v5 = result;
    *(_QWORD*)(v5 + 8) = a2;
    v6 = v5 + 24;
    *(_DWORD*)(v5 + 16) = a3;
  }
  v3[1] = v6;
  return result;
}

void RelianceCheck_19a8310()
{
  __int64 v0;
  __int64 v1;

  v0 = game_RelianceCheck_unknown_;
  v1 = *(_QWORD*)game_RelianceCheck_unknown_;
  *(_DWORD*)(game_RelianceCheck_unknown_ + 24) = 0;
  *(_QWORD*)(v0 + 8) = v1;
}

#pragma GCC visibility pop
