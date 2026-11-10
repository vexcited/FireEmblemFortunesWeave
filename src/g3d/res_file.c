#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a934d0(_QWORD, _QWORD);
__int64 GameRoutine_ad7390(_QWORD);
__int64 GameRoutine_ad8640(_QWORD);
__int64 GameRoutine_ad8980(__int64 result);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fbf780[])();
extern __int64 (*GameData_1fc2618[])();
extern __int64 (*GameData_1fc2698[])();
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 GameRoutine_ad7640(_QWORD*);
_QWORD* g3d_ResFile_prepareAsyncLoading(_QWORD* result, _QWORD* a2);
__int64 g3d_ResFile_prepareAsyncLoading_lambda0_Invoke(__int64 result);
__int64 g3d_ResFile_prepareAsyncLoading_lambda1_Invoke(__int64 a1);

_QWORD* g3d_ResFile_prepareAsyncLoading(_QWORD* result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[4];
  _QWORD* v23;
  __int64 v24;
  __int64 v25;

  if (result[10] == 0) {
    v24 = v2;
    v25 = v3;
    v4 = result;
    if (result[12] == 0) {
      v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v7 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
      v7[2] = 0;
      v8 = v4[11];
      v7[8] = 0;
      *v7 = GameData_1fbf780;
      v7[1] = 0;
      v4[10] = v7 + 4;
      v4[11] = v7;
      if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v8);
      }
      v9 = v4[10];
      v22[0] = GameData_1fc2618;
      v22[1] = v4;
      v23 = v22;
      GameRoutine_a934d0(v22, v9);
      if (v23 == v22) {
        v10 = 32;
      }
      else {
        if (v23 == nullptr) {
          goto LABEL_12;
        }
        v10 = 40;
      }
      (*(void (**)(__int64))(*v23 + v10))((__int64)v23);
    LABEL_12:
      v11 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 80, 16, 0);
      v12 = v4[13];
      v11[1] = 0;
      v11[2] = 0;
      v11[8] = 0;
      *v11 = GameData_1fbf780;
      v4[12] = v11 + 4;
      v4[13] = v11;
      if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak(v12);
      }
      v13 = v4[12];
      v22[0] = GameData_1fc2698;
      v22[1] = v4;
      v23 = v22;
      GameRoutine_a934d0(v22, v13);
      if (v23 == v22) {
        v14 = 32;
      }
      else {
        if (v23 == nullptr) {
          goto LABEL_20;
        }
        v14 = 40;
      }
      (*(void (**)(__int64))(*v23 + v14))((__int64)v23);
    LABEL_20:
      v15 = (_QWORD*)a2[4];
      v16 = a2;
      if (v15 == nullptr) {
        v23 = nullptr;
        goto LABEL_29;
      }
      if (v15 != a2) {
        v23 = (_QWORD*)a2[4];
        goto LABEL_29;
      }
      v23 = v22;
      (*(void (**)(_QWORD*, _QWORD*))(*v15 + 24LL))(v15, v22);
      v17 = (_QWORD*)a2[4];
      a2[4] = 0;
      if (v17 == a2) {
        v18 = 32;
      }
      else {
        v16 = a2;
        if (v17 == nullptr) {
          goto LABEL_29;
        }
        v18 = 40;
      }
      (*(void (**)(__int64))(*v17 + v18))((__int64)v17);
      v16 = a2;
    LABEL_29:
      v16[4] = 0;
      v19 = (_QWORD*)v4[18];
      v4[18] = 0;
      if (v19 == v4 + 14) {
        v20 = 32;
      }
      else {
        if (v19 == nullptr) {
          goto LABEL_34;
        }
        v20 = 40;
      }
      (*(void (**)(__int64))(*v19 + v20))((__int64)v19);
    LABEL_34:
      result = v23;
      if (v23 == nullptr) {
        v4[18] = 0;
        return result;
      }
      if (v23 != v22) {
        v4[18] = v23;
        return result;
      }
      v4[18] = v4 + 14;
      (*(void (**)(_QWORD*, _QWORD*))(*result + 24LL))(result, v4 + 14);
      result = v23;
      if (v23 == v22) {
        v21 = 32;
      }
      else {
        if (v23 == nullptr) {
          return result;
        }
        v21 = 40;
      }
      return (_QWORD*)(*(__int64 (**)(__int64))(*v23 + v21))((__int64)v23);
    }
  }
  return result;
}

__int64 g3d_ResFile_prepareAsyncLoading_lambda0_Invoke(__int64 result)
{
  __int64 v1;
  unsigned int v2;

  v1 = *(_QWORD*)(result + 8);
  if ((*(_BYTE*)(v1 + 164) & 1) == 0) {
    result = GameRoutine_ad7390(*(_QWORD*)(result + 8));
    if ((result & 1) != 0) {
      if (*(_QWORD*)(v1 + 16) != 0) {
        GameRoutine_ad7640((_QWORD*)v1);
        result = GameRoutine_ad8640(v1);
      }
      *(_BYTE*)(v1 + 164) = 1;
      v2 = atomic_load((unsigned int*)(v1 + 160));
      if (v2 == 0) {
        return GameRoutine_ad8980(v1);
      }
    }
  }
  return result;
}

__int64 g3d_ResFile_prepareAsyncLoading_lambda1_Invoke(__int64 a1)
{
  __int64 result;
  unsigned int v2;

  result = *(_QWORD*)(a1 + 8);
  atomic_fetch_add((atomic_uint* volatile)(result + 160), 0xFFFFFFFF);
  if (*(_BYTE*)(result + 164) == 1) {
    v2 = atomic_load((unsigned int*)(result + 160));
    if (v2 == 0) {
      return GameRoutine_ad8980(result);
    }
  }
  return result;
}

#pragma GCC visibility pop
