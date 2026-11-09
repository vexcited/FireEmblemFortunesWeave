#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c880[5];
extern __int64* GameData_2130190[17];
extern __int64* GameData_21301b8[12];
void __attribute__((noreturn)) GameRoutine_1a02350(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_705570(void);
__int64 MapView_1a020c0(__int64* a1, __int64 a2);
__int64 MapView_1a02440(__int64 result, _DWORD* a2);

__int64 MapView_1a020c0(__int64* a1, __int64 a2)
{
  void (***v2)(_QWORD);
  void (***v3)(_QWORD);
  __int64 v4;
  unsigned __int64 v5;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  void (***v17)(_QWORD);
  void (***v18)(_QWORD);
  __int64* v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  __int64* v30;
  __int64 v31;
  void (***v32)(_QWORD);
  int v33;
  void (**v34)(_QWORD);
  void (**v35)(_QWORD);
  void (**v36)(_QWORD);
  _QWORD* v37;
  __int64 v38;
  void (**v39)(_QWORD);
  void (**v40)(_QWORD);
  void (***v41)(_QWORD);
  void (**v42)(_QWORD);
  __int64 v43;
  __int64 v45;
  __int64 v46;

  v3 = (void (***)(_QWORD))*a1;
  v2 = (void (***)(_QWORD))a1[1];
  v4 = (__int64)v2 - *a1;
  v5 = 1 - 0x3333333333333333LL * (v4 >> 4);
  if (v5 > 0x333333333333333LL) {
    GameRoutine_1a02350();
  }
  if (0x999999999999999ALL * ((a1[2] - (__int64)v3) >> 4) > v5) {
    v5 = 0x999999999999999ALL * ((a1[2] - (__int64)v3) >> 4);
  }
  if (0xCCCCCCCCCCCCCCCDLL * ((a1[2] - (__int64)v3) >> 4) >=
      0x199999999999999LL) {
    v5 = 0x333333333333333LL;
  }
  if (v5 > 0x333333333333333LL) {
    GameRoutine_60a210(a1, a2);
  }
  v7 = 5 * v5;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      80 * v5, 16, 0);
  v10 = v9 + v4;
  v11 = v9;
  v12 = GameData_2130190[0];
  v13 = (_QWORD*)(v9 + v4);
  *v13 = GameData_2130190[0] + 2;
  v14 = v13 + 1;
  if ((*(_BYTE*)(a2 + 8) & 1) != 0) {
    v19 = v12;
    fw_text_String_CopyTerminated(v14, *(_QWORD*)(a2 + 24),
                                  *(_QWORD*)(a2 + 16));
    v12 = v19;
    v17 = (void (***)(_QWORD))*a1;
    v18 = (void (***)(_QWORD))a1[1];
    v4 = (__int64)v18 - *a1;
  }
  else {
    v15 = *(_QWORD*)(a2 + 16);
    v16 = *(_QWORD*)(a2 + 24);
    v17 = v3;
    v18 = v2;
    *v14 = *(_QWORD*)(a2 + 8);
    v14[1] = v15;
    v14[2] = v16;
  }
  v20 = v11 + 16 * v7;
  v21 = GameData_21301b8[0] + 2;
  v22 = *(_QWORD*)(a2 + 56);
  v23 = *(_QWORD*)(a2 + 64);
  *(_DWORD*)(v10 + 32) = *(_DWORD*)(a2 + 32);
  *(_QWORD*)v10 = v21;
  *(_QWORD*)(v10 + 56) = v22;
  *(_QWORD*)(v10 + 64) = v23;
  *(_DWORD*)(v10 + 72) = *(_DWORD*)(a2 + 72);
  v25 = *(_QWORD*)(a2 + 40);
  v24 = *(_QWORD*)(a2 + 48);
  v26 = v10 + 80;
  *(_QWORD*)(v10 + 40) = v25;
  *(_QWORD*)(v10 + 48) = v24;
  v27 = v10 - v4;
  if (v17 != v18) {
    v45 = v10 - v4;
    v46 = v20;
    v28 = 0;
    v29 = (char*)&v2[-2 * (v4 >> 4)];
    v30 = v12 + 2;
    v31 = v29 - (char*)v3 + v11 + 8;
    do {
      v37 = (_QWORD*)(v31 + v28 * 8);
      *(_QWORD*)(v31 + v28 * 8 - 8) = v30;
      v38 = v31 + v28 * 8 - 8;
      if (((__int64)v17[v28 + 1] & 1) != 0) {
        fw_text_String_CopyTerminated(v37, v17[v28 + 3], v17[v28 + 2]);
      }
      else {
        v39 = v17[v28 + 1];
        v40 = v17[v28 + 3];
        v37[1] = v17[v28 + 2];
        v37[2] = v40;
        *v37 = v39;
      }
      v32 = &v17[v28];
      v28 += 10;
      v33 = *((_DWORD*)v32 + 8);
      *(_QWORD*)v38 = v21;
      *(_DWORD*)(v38 + 32) = v33;
      *(_QWORD*)(v38 + 40) = v32[5];
      v34 = v32[6];
      v35 = v32[7];
      v36 = v32[8];
      *(_DWORD*)(v38 + 72) = *((_DWORD*)v32 + 18);
      *(_QWORD*)(v38 + 56) = v35;
      *(_QWORD*)(v38 + 64) = v36;
      *(_QWORD*)(v38 + 48) = v34;
    } while (&v17[v28] != v18);
    v41 = v17;
    do {
      v42 = *v41;
      v41 += 10;
      (*v42)(v17);
      v17 = v41;
    } while (v41 != v18);
    v17 = (void (***)(_QWORD))*a1;
    v27 = v45;
    v20 = v46;
  }
  *a1 = v27;
  a1[1] = v26;
  a1[2] = v20;
  if (v17 != nullptr) {
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v43);
  }
  return v26;
}

__int64 MapView_1a02440(__int64 result, _DWORD* a2)
{
  __int64 v2;
  __int64* v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  if (**(_BYTE**)(result + 8) != 1 || v2 != **(_QWORD**)(result + 16)) {
    v3 = *(__int64**)(result + 24);
    v5 = (_QWORD*)v3[1];
    v4 = v3[2];
    if ((unsigned __int64)v5 >= v4) {
      v7 = *v3;
      v8 = (__int64)v5 - *v3;
      v9 = (v8 >> 3) + 1;
      if (v9 >> 61 != 0) {
        GameRoutine_705570();
      }
      v10 = v4 - v7;
      v11 = fw_memory_g_heap_manager_ptr;
      if (v10 >> 2 > v9) {
        v9 = v10 >> 2;
      }
      if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
        v12 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v12 = v9;
      }
      if (v12 != 0) {
        if (v12 >> 61 != 0) {
          GameRoutine_60a210(result, a2);
        }
        v13 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
      }
      else {
        v13 = 0;
      }
      v14 = v13 + 8 * v12;
      v15 = v13 + v8 - 8 * (v8 >> 3);
      *(_QWORD*)(v13 + v8) = v2;
      v6 = v13 + v8 + 8;
      result = memcpy(v15, v7, v8);
      *v3 = v15;
      v3[1] = v6;
      v3[2] = v14;
      if (v7 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
          v16 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16);
      }
    }
    else {
      *v5 = v2;
      v6 = (__int64)(v5 + 1);
    }
    v3[1] = v6;
  }
  return result;
}

#pragma GCC visibility pop
