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
__int64 MapView_1a02440_alt1(__int64 result,
                             _DWORD* a2) __asm__("MapView_1a02440");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_1a02350_alt1() __asm__("GameRoutine_1a02350");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_705570_alt1() __asm__("GameRoutine_705570");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MapView_1a02440(__int64 a1, _DWORD* a2);

__int64 MapView_1a020c0(__int64* a1, __int64 a2)
{
  void (***v2)(__int64);
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  _QWORD* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  void (***v18)(__int64);
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
  void (***v29)(__int64);
  __int64* v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  void (***v41)(__int64);
  void (**v42)(__int64);
  __int64 v43;
  __int64 v45;
  __int64 v46;

  v3 = *a1;
  v2 = (void (***)(__int64))a1[1];
  v4 = (__int64)v2 - *a1;
  v5 = 1 - 0x3333333333333333LL * (v4 >> 4);
  if (v5 > 0x333333333333333LL) {
    GameRoutine_1a02350_alt1();
  }
  if (0x999999999999999ALL * ((a1[2] - v3) >> 4) > v5) {
    v5 = 0x999999999999999ALL * ((a1[2] - v3) >> 4);
  }
  if (0xCCCCCCCCCCCCCCCDLL * ((a1[2] - v3) >> 4) >= 0x199999999999999LL) {
    v5 = 0x333333333333333LL;
  }
  if (v5 > 0x333333333333333LL) {
    GameRoutine_60a210_alt1();
  }
  v7 = 5 * v5;
  v9 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80 * v5, 16, 0);
  v10 = v9 + v4;
  v11 = v9;
  v12 = GameData_2130190[0];
  v13 = (_QWORD*)(v9 + v4);
  *v13 = GameData_2130190[0] + 2;
  v14 = v13 + 1;
  if ((*(_BYTE*)(a2 + 8) & 1) != 0) {
    v19 = v12;
    fw_text_String_CopyTerminated_alt1(v14, *(_QWORD*)(a2 + 24),
                                       *(_QWORD*)(a2 + 16));
    v12 = v19;
    v17 = *a1;
    v18 = (void (***)(__int64))a1[1];
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
  if ((void (***)(__int64))v17 != v18) {
    v45 = v10 - v4;
    v46 = v20;
    v28 = 0;
    v29 = &v2[-2 * (v4 >> 4)];
    v30 = v12 + 2;
    v31 = (__int64)v29 + v11 - v3 + 8;
    do {
      v37 = (__int64*)(v31 + v28);
      *(_QWORD*)(v31 + v28 - 8) = v30;
      v38 = v31 + v28 - 8;
      if ((*(_BYTE*)(v17 + v28 + 8) & 1) != 0) {
        fw_text_String_CopyTerminated_alt1(v37, *(_QWORD*)(v17 + v28 + 24),
                                           *(_QWORD*)(v17 + v28 + 16));
      }
      else {
        v39 = *(_QWORD*)(v17 + v28 + 8);
        v40 = *(_QWORD*)(v17 + v28 + 24);
        v37[1] = *(_QWORD*)(v17 + v28 + 16);
        v37[2] = v40;
        *v37 = v39;
      }
      v32 = v17 + v28;
      v28 += 80;
      v33 = *(_DWORD*)(v32 + 32);
      *(_QWORD*)v38 = v21;
      *(_DWORD*)(v38 + 32) = v33;
      *(_QWORD*)(v38 + 40) = *(_QWORD*)(v32 + 40);
      v34 = *(_QWORD*)(v32 + 48);
      v35 = *(_QWORD*)(v32 + 56);
      v36 = *(_QWORD*)(v32 + 64);
      *(_DWORD*)(v38 + 72) = *(_DWORD*)(v32 + 72);
      *(_QWORD*)(v38 + 56) = v35;
      *(_QWORD*)(v38 + 64) = v36;
      *(_QWORD*)(v38 + 48) = v34;
    } while ((void (***)(__int64))(v17 + v28) != v18);
    v41 = (void (***)(__int64))v17;
    do {
      v42 = *v41;
      v41 += 10;
      (*v42)(v17);
      v17 = (__int64)v41;
    } while (v41 != v18);
    v17 = *a1;
    v27 = v45;
    v20 = v46;
  }
  *a1 = v27;
  a1[1] = v26;
  a1[2] = v20;
  if (v17 != 0) {
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, v17);
  }
  return v26;
}

void MapView_1a02440(__int64 a1, _DWORD* a2)
{
  __int64 v2;
  __int64* v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  signed __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  if (**(_BYTE**)(a1 + 8) != 1 || v2 != **(_QWORD**)(a1 + 16)) {
    v3 = *(__int64**)(a1 + 24);
    v5 = (_QWORD*)v3[1];
    v4 = v3[2];
    if ((unsigned __int64)v5 >= v4) {
      v7 = *v3;
      v8 = (signed __int64)v5 - *v3;
      v9 = (v8 >> 3) + 1;
      if (v9 >> 61 != 0) {
        GameRoutine_705570_alt1();
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
          GameRoutine_60a210_alt1();
        }
        v13 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
      }
      else {
        v13 = 0;
      }
      v14 = v13 + 8 * v12;
      v15 = v13 + v8 - 8 * (v8 >> 3);
      *(_QWORD*)(v13 + v8) = v2;
      v6 = v13 + v8 + 8;
      memcpy_alt1(v15, v7, v8);
      *v3 = v15;
      v3[1] = v6;
      v3[2] = v14;
      if (v7 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v11 + v16, v7);
      }
    }
    else {
      *v5 = v2;
      v6 = (__int64)(v5 + 1);
    }
    v3[1] = v6;
  }
}

#pragma GCC visibility pop
