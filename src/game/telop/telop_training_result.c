#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1750310(__int64, int);
__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_telop_TelopTrainingResult_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TelopTrainingResult_Destructor(_QWORD* a1);
__int64 TelopTrainingResult_Unknown43(__int64 a1);
__int64 GaugeUtil_1750310(__int64, int);

__int64 TelopTrainingResult_Destructor(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  bool v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;

  v1 = (_QWORD*)a1[147];
  *a1 = game_telop_TelopTrainingResult_vtable;
  v3 = (_QWORD*)a1[148];
  if (v1 != v3) {
    v4 = v3 - 20;
    v5 = v3 - 20;
    do {
      v6 = *v5;
      v5 -= 20;
      (*(void (**)(_QWORD*))(v6 + 24))(v4);
      v7 = v4 == v1;
      v4 = v5;
    } while (!v7);
  }
  a1[148] = v1;
  v8 = (_QWORD*)a1[151];
  v9 = (_QWORD*)a1[150];
  v10 = v9;
  if (v9 != v8) {
    v11 = v8 - 20;
    v12 = v8 - 20;
    do {
      v13 = *v12;
      v12 -= 20;
      (*(void (**)(_QWORD*))(v13 + 24))(v11);
      v7 = v11 == v9;
      v11 = v12;
    } while (!v7);
    v10 = (_QWORD*)a1[150];
  }
  a1[151] = v9;
  if (v10 != nullptr) {
    if (v10 == v9) {
      a1[151] = v10;
    }
    else {
      v14 = v9 - 20;
      v15 = v14;
      do {
        v16 = *v15;
        v15 -= 20;
        (*(void (**)(_QWORD*))(v16 + 24))(v14);
        v7 = v14 == v10;
        v14 = v15;
      } while (!v7);
      v17 = (_QWORD*)a1[150];
      a1[151] = v10;
      v10 = v17;
      if (v17 == nullptr) {
        goto LABEL_21;
      }
    }
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18,
                                  v10);
  }

LABEL_21:
  v19 = (_QWORD*)a1[147];
  if (v19 != nullptr) {
    v20 = (_QWORD*)a1[148];
    if (v19 == v20) {
      goto LABEL_27;
    }
    v21 = v20 - 20;
    v22 = v20 - 20;
    do {
      v23 = *v22;
      v22 -= 20;
      (*(void (**)(_QWORD*))(v23 + 24))(v21);
      v7 = v21 == v19;
      v21 = v22;
    } while (!v7);
    v24 = (_QWORD*)a1[147];
    a1[148] = v19;
    v19 = v24;
    if (v24 != nullptr) {
    LABEL_27:
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v19);
    }
  }
  return game_telop_TelopResult_Destroy_TelopResult(a1);
}

__int64 TelopTrainingResult_Unknown43(__int64 a1)
{
  __int64 v1;
  char v2;
  unsigned __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;

  v1 = *(_QWORD*)(a1 + 1168);
  if (*(_QWORD*)(v1 + 24) == *(_QWORD*)(v1 + 16)) {
    v2 = 1;
  }
  else {
    v2 = 1;
    v4 = 0;
    do {
      if (v4 != 0) {
        v5 = 1200;
      }
      else {
        v5 = 1176;
      }
      v6 = (__int64*)(a1 + v5);
      v7 = *(_QWORD*)(a1 + v5);
      if ((int)(-858993459 * ((unsigned __int64)(v6[1] - v7) >> 5)) >= 1) {
        v8 = 0;
        v9 = 0;
        do {
          v10 = GaugeUtil_1750310(v7 + v8, 1);
          ++v9;
          v8 += 160;
          v2 &= v10 ^ 1;
          v7 = *v6;
        } while (v9 <
                 (int)(-858993459 * ((unsigned __int64)(v6[1] - *v6) >> 5)));
        v1 = *(_QWORD*)(a1 + 1168);
      }
      ++v4;
    } while (v4 < (__int64)(*(_QWORD*)(v1 + 24) - *(_QWORD*)(v1 + 16)) >> 3);
  }
  return v2 & 1;
}

#pragma GCC visibility pop
