#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
_BYTE* TheaterSceneDiff_1424140(_QWORD* a1, _QWORD* a2, _QWORD* a3);

_BYTE* TheaterSceneDiff_1424140(_QWORD* a1, _QWORD* a2, _QWORD* a3)
{
  _QWORD* v4;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  bool v10;
  unsigned __int64 v11;
  char* v12;
  unsigned __int64 v13;
  _BYTE* result;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  bool v18;
  unsigned __int64 v19;
  char* v20;
  unsigned __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;

  v4 = a1 + 1;
  if (v4 != a2) {
    v6 = *(unsigned __int8*)a2;
    if ((*(_BYTE*)v4 & 1) != 0) {
      v9 = a2[1];
      v10 = (v6 & 1) == 0;
      v11 = v6 >> 1;
      if (v10) {
        v12 = (char*)a2 + 1;
      }
      else {
        v12 = (char*)a2[2];
      }
      if (v10) {
        v13 = v11;
      }
      else {
        v13 = v9;
      }
      GameRoutine_64dde0(v4, v12, v13);
    }
    else if ((v6 & 1) != 0) {
      GameRoutine_64df20(v4, a2[2], a2[1]);
    }
    else {
      v7 = *a2;
      v8 = a2[2];
      v4[1] = a2[1];
      v4[2] = v8;
      *v4 = v7;
    }
  }
  result = a1 + 4;
  if (a1 + 4 == a3) {
  LABEL_25:
    if (a1[10] == 0) {
      return result;
    }
    goto LABEL_26;
  }
  v15 = *(unsigned __int8*)a3;
  if ((*result & 1) != 0) {
    v18 = (v15 & 1) == 0;
    v19 = v15 >> 1;
    if (v18) {
      v20 = (char*)a3 + 1;
    }
    else {
      v20 = (char*)a3[2];
    }
    if (v18) {
      v21 = v19;
    }
    else {
      v21 = a3[1];
    }
    result = (_BYTE*)GameRoutine_64dde0(result, v20, v21);
    goto LABEL_25;
  }
  if ((v15 & 1) != 0) {
    result = (_BYTE*)GameRoutine_64df20(result, a3[2], a3[1]);
    if (a1[10] == 0) {
      return result;
    }
  }
  else {
    v16 = *a3;
    v17 = a3[2];
    a1[5] = a3[1];
    a1[6] = v17;
    *(_QWORD*)result = v16;
    if (a1[10] == 0) {
      return result;
    }
  }

LABEL_26:
  v22 = (_QWORD*)a1[9];
  if (v22 != nullptr) {
    v23 = fw_memory_g_heap_manager_ptr;
    do {
      v25 = v22;
      v22 = (_QWORD*)*v22;
      v26 = (_QWORD*)v25[10];
      if (v26 == v25 + 6) {
        v27 = 32;
      }
      else {
        if (v26 == nullptr) {
          goto LABEL_37;
        }
        v27 = 40;
      }
      (*(void (**)(void))(*v26 + v27))();
    LABEL_37:
      if ((v25[2] & 1) != 0 && v25[4] != 0) {
        if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) != 0) {
          v28 = 128;
        }
        else {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v23 + v28);
      }
      if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) != 0) {
        v24 = 128;
      }
      else {
        v24 = 56;
      }
      result = (_BYTE*)nn_mem_StandardAllocator_Free(*(_QWORD*)v23 + v24);
    } while (v22 != nullptr);
  }
  v29 = a1[8];
  a1[9] = 0;
  if (v29 != 0) {
    v30 = v29 & 7;
    if (v29 >= 8) {
      v32 = v29 & 0xFFFFFFFFFFFFFFF8LL;
      v31 = 0;
      do {
        *(_QWORD*)(a1[7] + 8 * v31) = 0;
        *(_QWORD*)(a1[7] + 8 * v31 + 8) = 0;
        *(_QWORD*)(a1[7] + 8 * v31 + 16) = 0;
        *(_QWORD*)(a1[7] + 8 * v31 + 24) = 0;
        *(_QWORD*)(a1[7] + 8 * v31 + 32) = 0;
        *(_QWORD*)(a1[7] + 8 * v31 + 40) = 0;
        *(_QWORD*)(a1[7] + 8 * v31 + 48) = 0;
        v33 = a1[7] + 8 * v31;
        v31 += 8;
        *(_QWORD*)(v33 + 56) = 0;
      } while (v32 != v31);
    }
    else {
      v31 = 0;
    }
    if (v30 != 0) {
      v34 = 8 * v31;
      do {
        --v30;
        *(_QWORD*)(a1[7] + v34) = 0;
        v34 += 8;
      } while (v30 != 0);
    }
  }
  a1[10] = 0;
  return result;
}

#pragma GCC visibility pop
