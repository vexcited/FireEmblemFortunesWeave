#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_64dde0(void);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
_BYTE* SkillReinforceSceneDiff_1476ca0(_QWORD* a1, __int64* a2, __int64* a3);

_BYTE* SkillReinforceSceneDiff_1476ca0(_QWORD* a1, __int64* a2, __int64* a3)
{
  __int64* v4;
  __int64 v6;
  __int64 v7;
  _BYTE* result;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;

  v4 = a1 + 1;
  if (v4 != a2) {
    if ((*(_BYTE*)v4 & 1) != 0) {
      GameRoutine_64dde0();
    }
    else if ((*(_BYTE*)a2 & 1) != 0) {
      GameRoutine_64df20(v4, a2[2], a2[1]);
    }
    else {
      v6 = *a2;
      v7 = a2[2];
      v4[1] = a2[1];
      v4[2] = v7;
      *v4 = v6;
    }
  }
  result = a1 + 4;
  if (a1 + 4 == a3) {
  LABEL_13:
    if (a1[10] == 0) {
      return result;
    }
    goto LABEL_14;
  }
  if ((*result & 1) != 0) {
    result = (_BYTE*)GameRoutine_64dde0();
    goto LABEL_13;
  }
  if ((*(_BYTE*)a3 & 1) != 0) {
    result = (_BYTE*)GameRoutine_64df20(result, a3[2], a3[1]);
    if (a1[10] == 0) {
      return result;
    }
  }
  else {
    v9 = *a3;
    v10 = a3[2];
    a1[5] = a3[1];
    a1[6] = v10;
    *(_QWORD*)result = v9;
    if (a1[10] == 0) {
      return result;
    }
  }

LABEL_14:
  v11 = (_QWORD*)a1[9];
  if (v11 != nullptr) {
    v12 = fw_memory_g_heap_manager_ptr;
    do {
      v14 = v11;
      v11 = (_QWORD*)*v11;
      v15 = (_QWORD*)v14[10];
      if (v15 == v14 + 6) {
        v16 = 32;
      }
      else {
        if (v15 == nullptr) {
          goto LABEL_25;
        }
        v16 = 40;
      }
      (*(void (**)(void))(*v15 + v16))();
    LABEL_25:
      if ((v14[2] & 1) != 0) {
        v17 = v14[4];
        if (v17 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
            v18 = 128;
          }
          else {
            v18 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v18, v17);
        }
      }
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
        v13 = 128;
      }
      else {
        v13 = 56;
      }
      result = (_BYTE*)nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v13, v14);
    } while (v11 != nullptr);
  }
  v19 = a1[8];
  a1[9] = 0;
  if (v19 != 0) {
    v20 = v19 & 7;
    if (v19 >= 8) {
      v22 = v19 & 0xFFFFFFFFFFFFFFF8LL;
      v21 = 0;
      do {
        *(_QWORD*)(a1[7] + 8 * v21) = 0;
        *(_QWORD*)(a1[7] + 8 * v21 + 8) = 0;
        *(_QWORD*)(a1[7] + 8 * v21 + 16) = 0;
        *(_QWORD*)(a1[7] + 8 * v21 + 24) = 0;
        *(_QWORD*)(a1[7] + 8 * v21 + 32) = 0;
        *(_QWORD*)(a1[7] + 8 * v21 + 40) = 0;
        *(_QWORD*)(a1[7] + 8 * v21 + 48) = 0;
        v23 = a1[7] + 8 * v21;
        v21 += 8;
        *(_QWORD*)(v23 + 56) = 0;
      } while (v22 != v21);
    }
    else {
      v21 = 0;
    }
    if (v20 != 0) {
      v24 = 8 * v21;
      do {
        --v20;
        *(_QWORD*)(a1[7] + v24) = 0;
        v24 += 8;
      } while (v20 != 0);
    }
  }
  a1[10] = 0;
  return result;
}

#pragma GCC visibility pop
