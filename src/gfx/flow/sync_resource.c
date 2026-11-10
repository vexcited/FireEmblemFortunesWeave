#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b33800(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN GameData_22030f0;
extern _UNKNOWN* GameData_1f50948;
extern __int64 (*GameData_212e730)();
extern __int64 GameData_2203088;
extern __int64 GameData_22030d0;
extern __int64 GameData_22030d8;
__int64 SyncResource_Unknown3(__int64 a1);
__int64 SyncResource_Unknown4(__int64 result);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 fw_memory_g_heap_manager_ptr;
struct PseudoSret GameRoutine_53ae0(_QWORD, _QWORD);
struct PseudoSret GameRoutine_53c20(_QWORD);
struct PseudoSret GameRoutine_53c70(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_b340b0(_QWORD);
void __attribute__((noreturn)) GameRoutine_b340d0(_QWORD);
void __attribute__((noreturn)) GameRoutine_b340f0(_QWORD);
__int64 SyncResource_b33240(__int64* a1, __int64* a2);
__int64 SyncResource_b33520(__int64* a1, __int64* a2);
__int64 SyncResource_b33800(_QWORD* a1, int a2);
__attribute__((swiftcall)) void
GameRoutine_53ae0_alt1(PSEUDO_X8, __int64) __asm__("GameRoutine_53ae0");
__attribute__((swiftcall)) void
GameRoutine_53c20_alt1(PSEUDO_X8, __int64) __asm__("GameRoutine_53c20");
__attribute__((swiftcall)) void
GameRoutine_53c70_alt1(PSEUDO_X8, __int64) __asm__("GameRoutine_53c70");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 nn_mem_StandardAllocator_Free_alt2(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_b340b0_alt1() __asm__("GameRoutine_b340b0");
void __attribute__((noreturn))
GameRoutine_b340d0_alt1() __asm__("GameRoutine_b340d0");
void __attribute__((noreturn))
GameRoutine_b340f0_alt1() __asm__("GameRoutine_b340f0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 SyncResource_Unknown3(__int64 a1)
{
  __int64 v1;
  __int64 result;
  int v4;
  unsigned int v5;

  v1 = *(unsigned int*)(a1 + 48);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22030f0,
                            memory_order_acquire) &
       1) == 0) {
    v5 = v1;
    v4 = __cxa_guard_acquire(&GameData_22030f0);
    v1 = v5;
    if (v4 != 0) {
      GameRoutine_2b0(GameData_212e730, &GameData_2203088, &GameData_1f50948);
      __cxa_guard_release(&GameData_22030f0);
      v1 = v5;
    }
  }
  result = GameRoutine_b33800(&GameData_2203088, v1);
  *(_QWORD*)(a1 + 40) = result;
  return result;
}

__int64 SyncResource_Unknown4(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(result + 40);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22030f0,
                            memory_order_acquire) &
       1) == 0) {
    v3 = v1;
    result = __cxa_guard_acquire(&GameData_22030f0);
    v1 = v3;
    if ((_DWORD)result != 0) {
      GameRoutine_2b0(GameData_212e730, &GameData_2203088, &GameData_1f50948);
      result = __cxa_guard_release(&GameData_22030f0);
      v1 = v3;
    }
  }
  v2 = GameData_22030d0;
  if (GameData_22030d0 != GameData_22030d8) {
    while (*(_QWORD*)(v2 + 8) != v1) {
      v2 += 24;
      if (v2 == GameData_22030d8) {
        return result;
      }
    }
  }
  if (v2 != GameData_22030d8) {
    *(_BYTE*)v2 = 0;
  }
  return result;
}

__int64 SyncResource_b33240(__int64* a1, __int64* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  int v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  unsigned __int64 v35;
  _QWORD* v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v46;
  struct {
    _DWORD v47[6];
    char v48;
    char v49;
    char v50;
    char gap43_[5];
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
  } v47_;

  v3 = a1[3];
  v2 = a1[4];
  v4 = *((_DWORD*)a2 + 1);
  v6 = *((unsigned __int8*)a2 + 24);
  v7 = *((_DWORD*)a2 + 2);
  v8 = *((_DWORD*)a2 + 3);
  v9 = *((_DWORD*)a2 + 4);
  v10 = *((_DWORD*)a2 + 5);
  if (v3 != v2) {
    while ((*(_BYTE*)v3 & 1) != 0 || *(_DWORD*)(v3 + 16) != *(_DWORD*)a2 ||
           *(_DWORD*)(v3 + 20) != v4 || *(_DWORD*)(v3 + 24) != v7 ||
           *(_DWORD*)(v3 + 28) != v8 || *(_DWORD*)(v3 + 32) != v9 ||
           *(_DWORD*)(v3 + 36) != v10 || *(unsigned __int8*)(v3 + 40) != v6 ||
           *(_DWORD*)(v3 + 44) != *((_DWORD*)a2 + 7)) {
      v3 += 48LL;
      if (v3 == v2) {
        goto LABEL_15;
      }
    }
  }
  if (v3 == v2) {
  LABEL_15:
    v11 = *a2;
    v12 = a2[1];
    v47_.v47[4] = *(_DWORD*)a2;
    v47_.v47[5] = v4;
    v47_.v49 = v6;
    v47_.v50 = 0;
    v47_.v47[0] = v7;
    v47_.v47[1] = v8;
    v47_.v47[2] = v9;
    v47_.v47[3] = v10;
    v47_.v48 = 1;
    v47_.v53 = v11;
    v47_.v54 = v12;
    v13 = *a1;
    v14 = a2[2];
    v15 = a2[3];
    v47_.v51 = a1[1];
    v47_.v52 = v13;
    v47_.v55 = v14;
    v47_.v56 = v15;
    GameRoutine_53c20_alt1((void*)(&v46), (__int64)v47_.v47);
    v16 = v46;
    v3 = a1[4];
    v17 = a1[5];
    if (v3 >= v17) {
      v21 = a1[3];
      v22 = v3 - v21;
      v23 = 1 - 0x5555555555555555LL * (v22 >> 4);
      if (v23 > 0x555555555555555LL) {
        GameRoutine_b340b0_alt1();
      }
      v24 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v17 - v21) >> 4);
      v25 = 2 * v24;
      if (2 * v24 <= v23) {
        v25 = 1 - 0x5555555555555555LL * (v22 >> 4);
      }
      if (v24 >= 0x2AAAAAAAAAAAAAALL) {
        v26 = 0x555555555555555LL;
      }
      else {
        v26 = v25;
      }
      if (v26 > 0x555555555555555LL) {
        GameRoutine_60a210_alt1();
      }
      v27 = 3 * v26;
      v28 = fw_memory_g_heap_manager_ptr;
      v29 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v26, 16, 0);
      v3 = v29 + v22;
      v30 = v29 + 16 * v27;
      *(_QWORD*)v3 = 1;
      *(_QWORD*)(v3 + 8) = v16;
      v31 = v47_.v54;
      v32 = a1[3];
      v33 = (_QWORD*)a1[4];
      v18 = v3 + 48;
      *(_QWORD*)(v3 + 16) = v47_.v53;
      *(_QWORD*)(v3 + 24) = v31;
      v34 = v47_.v56;
      *(_QWORD*)(v3 + 32) = v47_.v55;
      *(_QWORD*)(v3 + 40) = v34;
      v35 = v3 + v32 - (_QWORD)v33;
      if ((_QWORD*)v32 != v33) {
        v36 = (_QWORD*)v32;
        v37 = (_QWORD*)(v3 + v32 - (_QWORD)v33);
        do {
          *v37 = *v36;
          v38 = v36[1];
          v36[1] = 0;
          v37[1] = v38;
          v39 = v36[2];
          v40 = v36[3];
          v41 = v36[4];
          v42 = v36[5];
          v36 += 6;
          v37[4] = v41;
          v37[5] = v42;
          v37[2] = v39;
          v37[3] = v40;
          v37 += 6;
        } while (v36 != v33);
        do {
          v43 = *(_QWORD*)(v32 + 8);
          *(_QWORD*)(v32 + 8) = 0;
          if (v43 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v43 + 8LL))(v43);
          }
          v32 += 48;
        } while ((_QWORD*)v32 != v33);
        v32 = a1[3];
      }
      a1[3] = v35;
      a1[4] = v18;
      a1[5] = v30;
      if (v32 != 0) {
        v44 = 128;
        if (*(_QWORD*)(*(_QWORD*)v28 + 200LL) == 0) {
          v44 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v28 + v44, v32);
      }
    }
    else {
      v18 = v3 + 48;
      *(_QWORD*)v3 = 1;
      *(_QWORD*)(v3 + 8) = v16;
      v19 = v47_.v54;
      *(_QWORD*)(v3 + 16) = v47_.v53;
      *(_QWORD*)(v3 + 24) = v19;
      v20 = v47_.v56;
      *(_QWORD*)(v3 + 32) = v47_.v55;
      *(_QWORD*)(v3 + 40) = v20;
    }
    a1[4] = v18;
  }
  else {
    *(_DWORD*)(v3 + 4) = 0;
    *(_BYTE*)v3 = 1;
  }
  return *(_QWORD*)(v3 + 8);
}

__int64 SyncResource_b33520(__int64* a1, __int64* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  int v4;
  int v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  char* v32;
  char* v33;
  __int64 v34;
  unsigned __int64 v35;
  char* v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v46;
  struct {
    _DWORD v47[5];
    char v48;
    char v49;
    char gap30_[2];
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
  } v47_;

  v3 = a1[6];
  v2 = a1[7];
  v4 = *((_DWORD*)a2 + 1);
  v6 = *((_DWORD*)a2 + 4);
  v7 = *((unsigned __int8*)a2 + 24);
  v8 = *((_DWORD*)a2 + 2);
  v9 = *((_DWORD*)a2 + 3);
  if (v3 != v2) {
    while ((*(_BYTE*)v3 & 1) != 0 || *(_DWORD*)(v3 + 16) != *(_DWORD*)a2 ||
           *(_DWORD*)(v3 + 20) != v4 || *(_DWORD*)(v3 + 24) != v8 ||
           *(_DWORD*)(v3 + 28) != v9 || *(_DWORD*)(v3 + 32) != v6 ||
           *(_DWORD*)(v3 + 36) != *((_DWORD*)a2 + 5) ||
           *(unsigned __int8*)(v3 + 40) != v7 ||
           *(_DWORD*)(v3 + 44) != *((_DWORD*)a2 + 7)) {
      v3 += 48LL;
      if (v3 == v2) {
        goto LABEL_15;
      }
    }
  }
  if (v3 == v2) {
  LABEL_15:
    v10 = *a2;
    v11 = a2[1];
    v47_.v47[3] = *(_DWORD*)a2;
    v47_.v47[4] = v4;
    v47_.v49 = v7;
    v47_.v47[0] = v8;
    v47_.v47[1] = v9;
    v47_.v47[2] = v6;
    v47_.v48 = 1;
    v13 = *a1;
    v12 = a1[1];
    v47_.v52 = v10;
    v47_.v53 = v11;
    v14 = a2[2];
    v15 = a2[3];
    v47_.v50 = v12;
    v47_.v51 = v13;
    v47_.v54 = v14;
    v47_.v55 = v15;
    GameRoutine_53c70_alt1((void*)(&v46), (__int64)v47_.v47);
    v16 = v46;
    v3 = a1[7];
    v17 = a1[8];
    if (v3 >= v17) {
      v21 = a1[6];
      v22 = v3 - v21;
      v23 = 1 - 0x5555555555555555LL * (v22 >> 4);
      if (v23 > 0x555555555555555LL) {
        GameRoutine_b340d0_alt1();
      }
      v24 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v17 - v21) >> 4);
      v25 = 2 * v24;
      if (2 * v24 <= v23) {
        v25 = 1 - 0x5555555555555555LL * (v22 >> 4);
      }
      if (v24 >= 0x2AAAAAAAAAAAAAALL) {
        v26 = 0x555555555555555LL;
      }
      else {
        v26 = v25;
      }
      if (v26 > 0x555555555555555LL) {
        GameRoutine_60a210_alt1();
      }
      v27 = 3 * v26;
      v28 = fw_memory_g_heap_manager_ptr;
      v29 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v26, 16, 0);
      v3 = v29 + v22;
      v30 = v29 + 16 * v27;
      *(_QWORD*)v3 = 1;
      *(_QWORD*)(v3 + 8) = v16;
      v31 = v47_.v53;
      v32 = (char*)a1[6];
      v33 = (char*)a1[7];
      v18 = v3 + 48;
      *(_QWORD*)(v3 + 16) = v47_.v52;
      *(_QWORD*)(v3 + 24) = v31;
      v34 = v47_.v55;
      *(_QWORD*)(v3 + 32) = v47_.v54;
      *(_QWORD*)(v3 + 40) = v34;
      v35 = v3 + v32 - v33;
      if (v32 != v33) {
        v36 = v32;
        v37 = (_QWORD*)(v3 + v32 - v33);
        do {
          *v37 = *(_QWORD*)v36;
          v38 = *((_QWORD*)v36 + 1);
          *((_QWORD*)v36 + 1) = 0;
          v37[1] = v38;
          v39 = *((_QWORD*)v36 + 2);
          v40 = *((_QWORD*)v36 + 3);
          v41 = *((_QWORD*)v36 + 4);
          v42 = *((_QWORD*)v36 + 5);
          v36 += 48;
          v37[4] = v41;
          v37[5] = v42;
          v37[2] = v39;
          v37[3] = v40;
          v37 += 6;
        } while (v36 != v33);
        do {
          v43 = *((_QWORD*)v32 + 1);
          *((_QWORD*)v32 + 1) = 0;
          if (v43 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v43 + 8LL))(v43);
          }
          v32 += 48;
        } while (v32 != v33);
        v32 = (char*)a1[6];
      }
      a1[6] = v35;
      a1[7] = v18;
      a1[8] = v30;
      if (v32 != nullptr) {
        v44 = 128;
        if (*(_QWORD*)(*(_QWORD*)v28 + 200LL) == 0) {
          v44 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v28 + v44, v32);
      }
    }
    else {
      v18 = v3 + 48;
      *(_QWORD*)v3 = 1;
      *(_QWORD*)(v3 + 8) = v16;
      v19 = v47_.v53;
      *(_QWORD*)(v3 + 16) = v47_.v52;
      *(_QWORD*)(v3 + 24) = v19;
      v20 = v47_.v55;
      *(_QWORD*)(v3 + 32) = v47_.v54;
      *(_QWORD*)(v3 + 40) = v20;
    }
    a1[7] = v18;
  }
  else {
    *(_DWORD*)(v3 + 4) = 0;
    *(_BYTE*)v3 = 1;
  }
  return *(_QWORD*)(v3 + 8);
}

__int64 SyncResource_b33800(_QWORD* a1, int a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char v30;
  __int64 v31;

  v2 = a1[9];
  v3 = a1[10];
  if (v2 != v3) {
    while ((*(_BYTE*)v2 & 1) != 0 || *(_DWORD*)(v2 + 16) != a2) {
      v2 += 24;
      if (v2 == v3) {
        goto LABEL_8;
      }
    }
  }
  if (v2 == v3) {
  LABEL_8:
    GameRoutine_53ae0_alt1((void*)(&v31), (__int64)&v30);
    v7 = v31;
    v9 = a1[10];
    v8 = a1[11];
    if (v9 >= v8) {
      v11 = a1[9];
      v12 = v9 - v11;
      v13 = 1 - 0x5555555555555555LL * ((__int64)(v9 - v11) >> 3);
      if (v13 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_b340f0_alt1();
      }
      v14 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v8 - v11) >> 3);
      if (2 * v14 > v13) {
        v13 = 2 * v14;
      }
      if (v14 >= 0x555555555555555LL) {
        v15 = 0xAAAAAAAAAAAAAAALL;
      }
      else {
        v15 = v13;
      }
      if (v15 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210_alt1();
      }
      v16 = 3 * v15;
      v17 = fw_memory_g_heap_manager_ptr;
      v18 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v15, 16, 0);
      v19 = v18 + v12;
      v20 = v18 + 8 * v16;
      *(_DWORD*)(v19 + 16) = a2;
      v21 = a1[9];
      v22 = a1[10];
      *(_QWORD*)v19 = 1;
      *(_QWORD*)(v19 + 8) = v7;
      v10 = v19 + 24;
      v23 = v19 + v21 - v22;
      if (v21 != v22) {
        v24 = v21;
        v25 = v23;
        do {
          *(_QWORD*)v25 = *(_QWORD*)v24;
          v26 = *(_QWORD*)(v24 + 8);
          *(_QWORD*)(v24 + 8) = 0;
          *(_QWORD*)(v25 + 8) = v26;
          LODWORD(v26) = *(_DWORD*)(v24 + 16);
          v24 += 24;
          *(_DWORD*)(v25 + 16) = v26;
          v25 += 24;
        } while (v24 != v22);
        do {
          v27 = *(_QWORD*)(v21 + 8);
          *(_QWORD*)(v21 + 8) = 0;
          if (v27 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v27 + 8LL))(v27);
          }
          v21 += 24;
        } while (v21 != v22);
        v21 = a1[9];
      }
      a1[9] = v23;
      a1[10] = v10;
      a1[11] = v20;
      if (v21 != 0) {
        v28 = 128;
        if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) == 0) {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v17 + v28, v21);
      }
    }
    else {
      *(_DWORD*)(v9 + 16) = a2;
      *(_QWORD*)v9 = 1;
      *(_QWORD*)(v9 + 8) = v7;
      v10 = v9 + 24;
    }
    v6 = v10 - 16;
    a1[10] = v10;
  }
  else {
    *(_DWORD*)(v2 + 4) = 0;
    *(_BYTE*)v2 = 1;
    v6 = v2 + 8;
  }
  return *(_QWORD*)v6;
}

#pragma GCC visibility pop
