#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14552a0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*GameData_203f490[])();
extern __int64 (*game_facility_SceneCameraWorkUpdater_StateEndFront_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* StateBlackOutWait_Unknown4(__int64 a1, _QWORD* a2);

_QWORD* StateBlackOutWait_Unknown4(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  _QWORD* result;
  unsigned __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v3 = fw_memory_g_heap_manager_ptr;
  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v5 = a2[9];
  result[1] = 0;
  result[2] = 0;
  v6 = result;
  *result = GameData_203f490;
  result[3] = game_facility_SceneCameraWorkUpdater_StateEndFront_vtable;
  v7 = result + 3;
  v8 = (char*)a2[6];
  v9 = *(_QWORD*)(*(_QWORD*)&v8[8 * (v5 >> 9)] + 8 * (v5 & 0x1FF));
  if ((*(_BYTE*)(v9 + 200) & 4) != 0) {
    v11 = (char*)a2[7];
    if (v11 == v8) {
      v12 = 0;
    }
    else {
      v12 = ((v11 - v8) << 6) - 1;
    }
    v13 = a2[10] + v5;
    if (v12 == v13) {
      result = (_QWORD*)GameRoutine_14552a0(a2 + 5);
      v8 = (char*)a2[6];
      v13 = a2[10] + a2[9];
    }
    *(_QWORD*)(*(_QWORD*)&v8[8 * (v13 >> 9)] + 8 * (v13 & 0x1FF)) = v9;
    v8 = (char*)a2[6];
    v5 = a2[9];
    v10 = a2[10];
  }
  else {
    v10 = a2[10] - 1LL;
  }
  v14 = v5 + 1;
  a2[9] = v14;
  a2[10] = v10;
  if (v14 >= 0x400) {
    if (*(_QWORD*)v8 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v15 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v15,
                                                      *(_QWORD*)v8);
      v8 = (char*)a2[6];
      v14 = a2[9];
    }
    a2[6] = v8 + 8;
    a2[9] = v14 - 512;
  }
  v16 = a2[17];
  a2[16] = v7;
  a2[17] = v6;
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    return (_QWORD*)std___1___shared_weak_count___release_weak();
  }
  return result;
}

#pragma GCC visibility pop
