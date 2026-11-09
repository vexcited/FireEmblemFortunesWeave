#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1563280(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_167f810(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_173fe30(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_2032950[])();
extern __int64 GameData_225e7a0;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TelopShowDestination_Unknown35(_QWORD* a1);
__int64 TelopShowDestination_Unknown37(_QWORD* a1);

__int64 TelopShowDestination_Unknown35(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v14;
  _QWORD v15[4];
  _QWORD* v16;
  _QWORD v17[3];

  v2 = GameRoutine_155fbe0(a1 + 21, "L_Tlp");
  GameRoutine_1562680(v2, "In", 1.0);
  v3 = a1[109];
  v4 = fw_memory_g_heap_manager_ptr;
  v6 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  v17[0] = v6;
  v7 = a1[22];
  *v6 = v3;
  v17[1] = v6 + 1;
  v17[2] = v6 + 1;
  if (v7 == 0) {
    goto LABEL_7;
  }
  v8 = std___1___shared_weak_count_lock(v7);
  if (v8 == 0) {
    goto LABEL_7;
  }
  v9 = a1[21];
  if (v9 != 0) {
    LODWORD(v3) = *(_DWORD*)(v9 + 2372);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v9 != 0) {
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  v14 = v8;
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  std___1___shared_weak_count___release_weak(v14);
  if (v9 == 0) {
  LABEL_7:
    LODWORD(v3) = 0;
  }

LABEL_8:
  v15[0] = GameData_2032950;
  v15[1] = a1;
  v16 = v15;
  if (GameData_225e7a0 != 0) {
    v10 = 32;
    v11 = v15;
  LABEL_10:
    (*(void (**)(_QWORD*, __int64))(*v11 + v10))(v11, v5);
    goto LABEL_11;
  }
  GameRoutine_167f810(a1, 5, v17, 0, (unsigned int)v3, v15);
  v11 = v16;
  if (v16 == v15) {
    v10 = 32;
    goto LABEL_10;
  }
  if (v16 != nullptr) {
    v10 = 40;
    goto LABEL_10;
  }

LABEL_11:
  v12 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v12 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v12);
}

__int64 TelopShowDestination_Unknown37(_QWORD* a1)
{
  __int64 v2;
  char v3;

  v2 = (*(__int64 (**)(_QWORD*))(*a1 + 208LL))(a1);
  if (a1[99] != 0 && (GameRoutine_173fe30() & 1) != 0 ||
      (GameRoutine_1563280(a1 + 21, v2, 0) & 1) != 0) {
    v3 = 0;
  }
  else {
    v3 = GameData_225e7a0;
    if (GameData_225e7a0 != 0) {
      v3 = *(_BYTE*)(GameData_225e7a0 + 408);
    }
  }
  return v3 & 1;
}

#pragma GCC visibility pop
