#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_108c760(_QWORD);
__int64 GameRoutine_e412a0(_QWORD, _QWORD);
__int64 GameRoutine_e414c0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212eda0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212ed98;
__int64 LegionStateNone_Unknown3(__int64 result);
__int64 LegionStateNone_DeletingDestructor();

__int64 LegionStateNone_Unknown3(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  atomic_uchar* v5;
  unsigned __int8 explicit;
  int* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  _QWORD* v14;
  __int64 v15;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  char v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  unsigned int v31;
  __int64 v32;
  char v33;
  __int64 v34;
  int v35;
  __int64 v36;
  _QWORD* v37;
  int v38;
  int v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;

  v1 = *(_QWORD*)(*(_QWORD*)(result + 8) + 176LL);
  if (v1 == 0) {
    return result;
  }
  result = *(_QWORD*)(v1 + 104);
  v2 = *(_QWORD**)(result + 8);
  v3 = v2[6];
  if (v3 != 0) {
    if (*(_QWORD*)(v3 + 8) == -1 || v2[7] == 0) {
      v3 = 0;
    }
    else {
      v3 = v2[1];
    }
  }
  v5 = (atomic_uchar*)GameData_212eda0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212eda0,
                                  memory_order_acquire);
  v7 = GameData_212ed98;
  if ((explicit & 1) == 0) {
    v34 = v3;
    v42 = result;
    v35 = __cxa_guard_acquire(GameData_212eda0);
    result = v42;
    v3 = v34;
    if (v35 != 0) {
      *v7 = wld_Crc32(0, "CharacterAnimator", 17);
      __cxa_guard_release(GameData_212eda0);
      result = v42;
      v3 = v34;
    }
  }
  v8 = *(_QWORD*)(v3 + 512);
  v9 = v8;
  do {
    v10 = *(_DWORD*)(v9 - 16);
    v9 -= 16;
    v8 -= 16;
  } while (v10 != *v7);
  v11 = *(_DWORD*)(*(_QWORD*)(v8 + 8) + 120LL);
  if (v11 > -574916403) {
    if (v11 == -574916402 || v11 == 119788728) {
      return result;
    }
  }
  else if (v11 == -1101902990 || v11 == -589947500) {
    return result;
  }
  if (*(_DWORD*)(result + 32) != 1) {
    goto LABEL_38;
  }
  v14 = *(_QWORD**)(result + 8);
  v15 = v14[6];
  if (v15 != 0) {
    if (*(_QWORD*)(v15 + 8) == -1 || v14[7] == 0) {
      v15 = 0;
    }
    else {
      v15 = v14[1];
    }
  }
  if ((atomic_load_explicit(v5, memory_order_acquire) & 1) == 0) {
    v40 = v15;
    v43 = result;
    v41 = __cxa_guard_acquire(GameData_212eda0);
    result = v43;
    v15 = v40;
    if (v41 != 0) {
      *v7 = wld_Crc32(0, "CharacterAnimator", 17);
      __cxa_guard_release(GameData_212eda0);
      result = v43;
      v15 = v40;
    }
  }
  v17 = *(_QWORD*)(v15 + 512);
  v18 = result;
  v19 = v17;
  do {
    v20 = *(_DWORD*)(v19 - 16);
    v19 -= 16;
    v17 -= 16;
  } while (v20 != *v7);
  v21 = GameRoutine_108c760(*(unsigned int*)(*(_QWORD*)(v17 + 8) + 120LL));
  result = v18;
  if ((v21 & 1) != 0) {
  LABEL_38:
    v22 = *(_QWORD**)(result + 8);
    v23 = (_QWORD*)v22[6];
    if (v23 != nullptr) {
      if (v23[1] == -1 || v22[7] == 0) {
        v23 = nullptr;
      }
      else {
        v23 = (_QWORD*)v22[1];
      }
    }
    if ((atomic_load_explicit(v5, memory_order_acquire) & 1) == 0) {
      v36 = result;
      v37 = v23;
      v38 = __cxa_guard_acquire(GameData_212eda0);
      v23 = v37;
      v39 = v38;
      result = v36;
      if (v39 != 0) {
        *v7 = wld_Crc32(0, "CharacterAnimator", 17);
        __cxa_guard_release(GameData_212eda0);
        v23 = v37;
        result = v36;
      }
    }
    v26 = v23[63];
    v25 = v23[64];
    v27 = v25;
    v28 = v25;
    while (v28 != v26) {
      v29 = *(_DWORD*)(v28 - 16);
      v28 -= 16;
      v27 -= 16;
      if (v29 == *v7) {
        if (v25 != v27) {
          v30 = *(_QWORD*)(v27 + 8);
          if (v30 != 0 && (*(_BYTE*)(v30 + 88) & 1) != 0) {
            v31 = -589947500;
            goto LABEL_54;
          }
        }
        break;
      }
    }
    v31 = 119788728;
  LABEL_54:
    v32 = result;
    result = GameRoutine_e412a0(result, v31);
    if ((result & 1) != 0) {
      *(_DWORD*)(v32 + 48) = v31;
      v33 = *(_BYTE*)(v32 + 80);
      *(_DWORD*)(v32 + 52) = 0;
      *(_BYTE*)(v32 + 56) = 0;
      *(_DWORD*)(v32 + 60) = 0;
      *(_BYTE*)(v32 + 64) = 0;
      *(_DWORD*)(v32 + 68) = 0;
      *(_BYTE*)(v32 + 72) = 0;
      *(_DWORD*)(v32 + 76) = 0;
      if ((v33 & 1) == 0) {
        *(_BYTE*)(v32 + 80) = 1;
      }
      if ((*(_BYTE*)(v32 + 44) & 1) == 0) {
        result = GameRoutine_e414c0(v32);
        if ((result & 1) != 0 && (*(_BYTE*)(v32 + 80) & 1) != 0) {
          *(_BYTE*)(v32 + 80) = 0;
        }
      }
    }
  }
  return result;
}

__int64 LegionStateNone_DeletingDestructor()
{
  __int64 v0;

  v0 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v0 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v0);
}

#pragma GCC visibility pop
