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
  _QWORD* v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  long double v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  char* v35;
  __int64 v36;
  unsigned __int64 v37;
  char* v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v48;
  _DWORD v49[6];
  char v50;
  char v51;
  char v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;

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
    v49[4] = *(_DWORD*)a2;
    v49[5] = v4;
    v51 = v6;
    v52 = 0;
    v49[0] = v7;
    v49[1] = v8;
    v49[2] = v9;
    v49[3] = v10;
    v50 = 1;
    v55 = v11;
    v56 = v12;
    v13 = *a1;
    v14 = a2[2];
    v15 = a2[3];
    v53 = a1[1];
    v54 = v13;
    v57 = v14;
    v58 = v15;
    v16 = (*(struct PseudoSret*)(&v48) = GameRoutine_53c20(v49), (void*)(&v48));
    v17 = v48;
    v3 = a1[4];
    v18 = a1[5];
    if (v3 >= v18) {
      v22 = a1[3];
      v23 = v3 - v22;
      v24 = 1 - 0x5555555555555555LL * (v23 >> 4);
      if (v24 > 0x555555555555555LL) {
        GameRoutine_b340b0(v16);
      }
      v25 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v18 - v22) >> 4);
      v26 = 2 * v25;
      if (2 * v25 <= v24) {
        v26 = 1 - 0x5555555555555555LL * (v23 >> 4);
      }
      if (v25 >= 0x2AAAAAAAAAAAAAALL) {
        v27 = 0x555555555555555LL;
      }
      else {
        v27 = v26;
      }
      if (v27 > 0x555555555555555LL) {
        GameRoutine_60a210(v16);
      }
      v28 = 3 * v27;
      v29 = fw_memory_g_heap_manager_ptr;
      v30 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v27, 16, 0);
      v3 = v30 + v23;
      v32 = v30 + 16 * v28;
      *(_QWORD*)v3 = 1;
      *(_QWORD*)(v3 + 8) = v17;
      v33 = v56;
      v34 = (char*)a1[3];
      v35 = (char*)a1[4];
      v19 = v3 + 48;
      *(_QWORD*)(v3 + 16) = v55;
      *(_QWORD*)(v3 + 24) = v33;
      v36 = v58;
      *(_QWORD*)(v3 + 32) = v57;
      *(_QWORD*)(v3 + 40) = v36;
      v37 = v3 + v34 - v35;
      if (v34 != v35) {
        v38 = v34;
        v39 = (_QWORD*)(v3 + v34 - v35);
        do {
          *v39 = *(_QWORD*)v38;
          v40 = *((_QWORD*)v38 + 1);
          *((_QWORD*)v38 + 1) = 0;
          v39[1] = v40;
          v41 = *((_QWORD*)v38 + 2);
          v42 = *((_QWORD*)v38 + 3);
          v43 = *((_QWORD*)v38 + 4);
          v44 = *((_QWORD*)v38 + 5);
          v38 += 48;
          v39[4] = v43;
          v39[5] = v44;
          v39[2] = v41;
          v39[3] = v42;
          v39 += 6;
        } while (v38 != v35);
        do {
          v45 = *((_QWORD*)v34 + 1);
          *((_QWORD*)v34 + 1) = 0;
          if (v45 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v45 + 8LL))(v45);
          }
          v34 += 48;
        } while (v34 != v35);
        v34 = (char*)a1[3];
      }
      a1[3] = v37;
      a1[4] = v19;
      a1[5] = v32;
      if (v34 != nullptr) {
        v46 = 128;
        if (*(_QWORD*)(*(_QWORD*)v29 + 200LL) == 0) {
          v46 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v29 + v46, v31);
      }
    }
    else {
      v19 = v3 + 48;
      *(_QWORD*)v3 = 1;
      *(_QWORD*)(v3 + 8) = v17;
      v20 = v56;
      *(_QWORD*)(v3 + 16) = v55;
      *(_QWORD*)(v3 + 24) = v20;
      v21 = v58;
      *(_QWORD*)(v3 + 32) = v57;
      *(_QWORD*)(v3 + 40) = v21;
    }
    a1[4] = v19;
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
  _QWORD* v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  long double v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  char* v35;
  __int64 v36;
  unsigned __int64 v37;
  char* v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v48;
  _DWORD v49[5];
  char v50;
  char v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;

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
    v49[3] = *(_DWORD*)a2;
    v49[4] = v4;
    v51 = v7;
    v49[0] = v8;
    v49[1] = v9;
    v49[2] = v6;
    v50 = 1;
    v13 = *a1;
    v12 = a1[1];
    v54 = v10;
    v55 = v11;
    v14 = a2[2];
    v15 = a2[3];
    v52 = v12;
    v53 = v13;
    v56 = v14;
    v57 = v15;
    v16 = (*(struct PseudoSret*)(&v48) = GameRoutine_53c70(v49), (void*)(&v48));
    v17 = v48;
    v3 = a1[7];
    v18 = a1[8];
    if (v3 >= v18) {
      v22 = a1[6];
      v23 = v3 - v22;
      v24 = 1 - 0x5555555555555555LL * (v23 >> 4);
      if (v24 > 0x555555555555555LL) {
        GameRoutine_b340d0(v16);
      }
      v25 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v18 - v22) >> 4);
      v26 = 2 * v25;
      if (2 * v25 <= v24) {
        v26 = 1 - 0x5555555555555555LL * (v23 >> 4);
      }
      if (v25 >= 0x2AAAAAAAAAAAAAALL) {
        v27 = 0x555555555555555LL;
      }
      else {
        v27 = v26;
      }
      if (v27 > 0x555555555555555LL) {
        GameRoutine_60a210(v16);
      }
      v28 = 3 * v27;
      v29 = fw_memory_g_heap_manager_ptr;
      v30 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v27, 16, 0);
      v3 = v30 + v23;
      v32 = v30 + 16 * v28;
      *(_QWORD*)v3 = 1;
      *(_QWORD*)(v3 + 8) = v17;
      v33 = v55;
      v34 = (char*)a1[6];
      v35 = (char*)a1[7];
      v19 = v3 + 48;
      *(_QWORD*)(v3 + 16) = v54;
      *(_QWORD*)(v3 + 24) = v33;
      v36 = v57;
      *(_QWORD*)(v3 + 32) = v56;
      *(_QWORD*)(v3 + 40) = v36;
      v37 = v3 + v34 - v35;
      if (v34 != v35) {
        v38 = v34;
        v39 = (_QWORD*)(v3 + v34 - v35);
        do {
          *v39 = *(_QWORD*)v38;
          v40 = *((_QWORD*)v38 + 1);
          *((_QWORD*)v38 + 1) = 0;
          v39[1] = v40;
          v41 = *((_QWORD*)v38 + 2);
          v42 = *((_QWORD*)v38 + 3);
          v43 = *((_QWORD*)v38 + 4);
          v44 = *((_QWORD*)v38 + 5);
          v38 += 48;
          v39[4] = v43;
          v39[5] = v44;
          v39[2] = v41;
          v39[3] = v42;
          v39 += 6;
        } while (v38 != v35);
        do {
          v45 = *((_QWORD*)v34 + 1);
          *((_QWORD*)v34 + 1) = 0;
          if (v45 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v45 + 8LL))(v45);
          }
          v34 += 48;
        } while (v34 != v35);
        v34 = (char*)a1[6];
      }
      a1[6] = v37;
      a1[7] = v19;
      a1[8] = v32;
      if (v34 != nullptr) {
        v46 = 128;
        if (*(_QWORD*)(*(_QWORD*)v29 + 200LL) == 0) {
          v46 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v29 + v46, v31);
      }
    }
    else {
      v19 = v3 + 48;
      *(_QWORD*)v3 = 1;
      *(_QWORD*)(v3 + 8) = v17;
      v20 = v55;
      *(_QWORD*)(v3 + 16) = v54;
      *(_QWORD*)(v3 + 24) = v20;
      v21 = v57;
      *(_QWORD*)(v3 + 32) = v56;
      *(_QWORD*)(v3 + 40) = v21;
    }
    a1[7] = v19;
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
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  long double v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char v32;
  __int64 v33;

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
    v7 = (*(struct PseudoSret*)(&v33) = GameRoutine_53ae0(&v32, 0),
          (void*)(&v33));
    v8 = v33;
    v10 = a1[10];
    v9 = a1[11];
    if (v10 >= v9) {
      v12 = a1[9];
      v13 = v10 - v12;
      v14 = 1 - 0x5555555555555555LL * ((__int64)(v10 - v12) >> 3);
      if (v14 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_b340f0(v7);
      }
      v15 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v9 - v12) >> 3);
      if (2 * v15 > v14) {
        v14 = 2 * v15;
      }
      if (v15 >= 0x555555555555555LL) {
        v16 = 0xAAAAAAAAAAAAAAALL;
      }
      else {
        v16 = v14;
      }
      if (v16 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210(v7);
      }
      v17 = 3 * v16;
      v18 = fw_memory_g_heap_manager_ptr;
      v19 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v16, 16, 0);
      v21 = v19 + v13;
      v22 = v19 + 8 * v17;
      *(_DWORD*)(v21 + 16) = a2;
      v23 = a1[9];
      v24 = a1[10];
      *(_QWORD*)v21 = 1;
      *(_QWORD*)(v21 + 8) = v8;
      v11 = v21 + 24;
      v25 = v21 + v23 - v24;
      if (v23 != v24) {
        v26 = v23;
        v27 = v25;
        do {
          *(_QWORD*)v27 = *(_QWORD*)v26;
          v28 = *(_QWORD*)(v26 + 8);
          *(_QWORD*)(v26 + 8) = 0;
          *(_QWORD*)(v27 + 8) = v28;
          LODWORD(v28) = *(_DWORD*)(v26 + 16);
          v26 += 24;
          *(_DWORD*)(v27 + 16) = v28;
          v27 += 24;
        } while (v26 != v24);
        do {
          v29 = *(_QWORD*)(v23 + 8);
          *(_QWORD*)(v23 + 8) = 0;
          if (v29 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v29 + 8LL))(v29);
          }
          v23 += 24;
        } while (v23 != v24);
        v23 = a1[9];
      }
      a1[9] = v25;
      a1[10] = v11;
      a1[11] = v22;
      if (v23 != 0) {
        v30 = 128;
        if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
          v30 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v30, v20);
      }
    }
    else {
      *(_DWORD*)(v10 + 16) = a2;
      *(_QWORD*)v10 = 1;
      *(_QWORD*)(v10 + 8) = v8;
      v11 = v10 + 24;
    }
    v6 = v11 - 16;
    a1[10] = v11;
  }
  else {
    *(_DWORD*)(v2 + 4) = 0;
    *(_BYTE*)v2 = 1;
    v6 = v2 + 8;
  }
  return *(_QWORD*)v6;
}

#pragma GCC visibility pop
