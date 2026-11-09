#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ProcReinforceSkillMenu_16d76e0(__int64, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212dcd0;
extern __int64* GameData_212e008[9];
extern __int64* GameData_2131a48;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 ProcReinforceUnitMenu_Unknown100(__int64 a1);

__int64 ProcReinforceUnitMenu_Unknown100(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 == 0) {
    return 1;
  }
  v3 = __dynamic_cast(v2, GameData_212e008[0], GameData_2131a48, 0);
  if (v3 == 0) {
    return 1;
  }
  v4 = v3;
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 464LL))(v3);
  if ((v5 & 1) == 0) {
    return 1;
  }
  v6 = *(_QWORD*)(v4 + 88);
  if (v6 != 0) {
    v7 = (_QWORD*)*GameData_212dcd0;
    v8 = *(_QWORD**)(*GameData_212dcd0 + 48);
    v9 = *(_QWORD*)(*GameData_212dcd0 + 64);
    *(_QWORD*)(*GameData_212dcd0 + 56) = v8;
    if ((unsigned __int64)v8 >= v9) {
      v13 = v9 - (_QWORD)v8;
      v14 = v13 >> 2;
      if ((unsigned __int64)(v13 >> 2) <= 1) {
        v14 = 1;
      }
      if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
        v15 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v15 = v14;
      }
      if (v15 >> 61 != 0) {
        GameRoutine_60a210(v5);
      }
      v16 = fw_memory_g_heap_manager_ptr;
      v17 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0);
      *v17 = v6;
      v10 = v17 + 1;
      v7[6] = v17;
      v7[7] = v17 + 1;
      v7[8] = &v17[v15];
      if (v8 != nullptr) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v18, v8);
      }
    }
    else {
      *v8 = v6;
      v10 = v8 + 1;
    }
    v7[7] = v10;
    v12 = *(_QWORD*)(v4 + 88);
  }
  else {
    v12 = 0;
  }
  ProcReinforceSkillMenu_16d76e0(a1, v12);
  return 9;
}

#pragma GCC visibility pop
