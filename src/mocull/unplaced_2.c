#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_1943370();
void __attribute__((noreturn)) GameRoutine_1943390();
void __attribute__((noreturn)) GameRoutine_60a210();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void mocull_1942c80(__int64 a1, int a2, int a3, unsigned int a4);

void mocull_1942c80(__int64 a1, int a2, int a3, unsigned int a4)
{
  __int64 v4;
  unsigned int v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  signed __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  signed __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  int v47;
  _QWORD* v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned int* v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;

  v4 = (unsigned int)(a3 * a2);
  *(_DWORD*)a1 = a2;
  *(_DWORD*)(a1 + 4) = a3;
  *(_BYTE*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 20) = 0;
  v6 = a4;
  *(_DWORD*)(a1 + 8) = v4;
  *(_DWORD*)(a1 + 12) = a4;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  v7 = (__int64*)(a1 + 40);
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      24 * v4, 16, 0);
  if ((_DWORD)v4 != 0) {
    v10 = 24 * v4 - 24;
    v11 = (_QWORD*)v9;
    if ((~(v10 / 0x18) & 7) != 0) {
      v12 = ((unsigned __int8)(v10 / 0x18) + 1) & 7;
      v11 = (_QWORD*)v9;
      do {
        v11[1] = 0x43800000780LL;
        v11[2] = 0;
        *v11 = 0;
        v11 += 3;
        --v12;
      } while (v12 != 0);
    }
    if (v10 >= 0xA8) {
      do {
        *v11 = 0;
        v11[1] = 0x43800000780LL;
        v11[2] = 0;
        v11[3] = 0;
        v11[4] = 0x43800000780LL;
        v11[5] = 0;
        v11[6] = 0;
        v11[7] = 0x43800000780LL;
        v11[8] = 0;
        v11[9] = 0;
        v11[10] = 0x43800000780LL;
        v11[11] = 0;
        v11[12] = 0;
        v11[13] = 0x43800000780LL;
        v11[16] = 0;
        v11[17] = 0;
        v11[14] = 0;
        v11[15] = 0;
        v11[16] = 0x43800000780LL;
        v11[18] = 0;
        v11[19] = 0x43800000780LL;
        v11[20] = 0;
        v11[21] = 0;
        v11[22] = 0x43800000780LL;
        v11[23] = 0;
        v11 += 24;
      } while (v11 != (_QWORD*)(v9 + 24 * v4));
    }
  }
  *(_QWORD*)(a1 + 32) = v9;
  v13 = fw_memory_HeapManager_Allocate(*v8, (unsigned __int64)v6 << 6, 16, 0);
  v14 = v13;
  if (v6 != 0) {
    memset(v13, 0, (unsigned __int64)v6 << 6);
  }
  *(_QWORD*)(a1 + 88) = v14;
  v15 = 192 * v6 * (unsigned int)v4;
  if ((_DWORD)v15 != 0) {
    v17 = *(_QWORD*)(a1 + 48);
    v16 = *(_QWORD*)(a1 + 56);
    if (0x8E38E38E38E38E39LL * ((v16 - v17) >> 4) >= v15) {
      memset(*(_QWORD*)(a1 + 48), 0,
             144 * ((144 * (unsigned __int64)(unsigned int)v15 - 144) / 0x90) +
                 144);
      *(_QWORD*)(a1 + 48) =
          v17 +
          144 * ((144 * (unsigned __int64)(unsigned int)v15 - 144) / 0x90) +
          144;
    }
    else {
      v18 = *v7;
      v19 = v17 - *v7;
      v20 = v15 - 0x71C71C71C71C71C7LL * (v19 >> 4);
      if (v20 > 0x1C71C71C71C71C7LL) {
        GameRoutine_1943370();
      }
      v21 = 0x8E38E38E38E38E39LL * ((v16 - v18) >> 4);
      v22 = 2 * v21;
      if (2 * v21 <= v20) {
        v22 = v15 - 0x71C71C71C71C71C7LL * (v19 >> 4);
      }
      if (v21 >= 0xE38E38E38E38E3LL) {
        v23 = 0x1C71C71C71C71C7LL;
      }
      else {
        v23 = v22;
      }
      if (v23 != 0) {
        if (v23 > 0x1C71C71C71C71C7LL) {
          goto LABEL_64;
        }
        v24 = fw_memory_HeapManager_Allocate(*v8, 144 * v23, 16, 0);
      }
      else {
        v24 = 0;
      }
      v27 = 144 * ((144 * (unsigned __int64)(unsigned int)v15 - 144) / 0x90) +
            144;
      memset(v24 + v19, 0, v27);
      memcpy(v24, v18, v19);
      *(_QWORD*)(a1 + 40) = v24;
      *(_QWORD*)(a1 + 48) = v24 + v19 + v27;
      *(_QWORD*)(a1 + 56) = v24 + 144 * v23;
      if (v18 != 0) {
        v28 = 128;
        if (*(_QWORD*)(*v8 + 200) == 0) {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free(*v8 + v28, v18);
      }
    }
    LODWORD(v4) = *(_DWORD*)(a1 + 8);
    v6 = *(_DWORD*)(a1 + 12);
    v25 = *(_QWORD*)(a1 + 64);
    v26 = *(_QWORD*)(a1 + 72);
  }
  else {
    v25 = 0;
    v26 = 0;
  }
  v29 = v6 * (unsigned int)v4;
  v30 = 0xAAAAAAAAAAAAAAABLL * ((v26 - v25) >> 3);
  v31 = v29 - v30;
  if (v29 > v30) {
    v33 = *(_QWORD*)(a1 + 72);
    v32 = *(_QWORD*)(a1 + 80);
    if (0xAAAAAAAAAAAAAAABLL * ((v32 - v33) >> 3) >= v31) {
      memset(*(_QWORD*)(a1 + 72), 0,
             24 * ((24 * (unsigned __int64)(unsigned int)v31 - 24) / 0x18) +
                 24);
      *(_QWORD*)(a1 + 72) =
          v33 + 24 * ((24 * (unsigned __int64)(unsigned int)v31 - 24) / 0x18) +
          24;
      goto LABEL_59;
    }
    v34 = *(_QWORD*)(a1 + 64);
    v35 = v33 - v34;
    v36 = v31 - 0x5555555555555555LL * (v35 >> 3);
    if (v36 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_1943390();
    }
    v37 = 0xAAAAAAAAAAAAAAABLL * ((v32 - v34) >> 3);
    if (2 * v37 > v36) {
      v36 = 2 * v37;
    }
    if (v37 >= 0x555555555555555LL) {
      v38 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v38 = v36;
    }
    if (v38 == 0) {
      v39 = 0;
    LABEL_55:
      v52 = 24 * ((24 * (unsigned __int64)(unsigned int)v31 - 24) / 0x18) + 24;
      memset(v39 + v35, 0, v52);
      memcpy(v39, v34, v35);
      *(_QWORD*)(a1 + 64) = v39;
      *(_QWORD*)(a1 + 72) = v39 + v35 + v52;
      *(_QWORD*)(a1 + 80) = v39 + 24 * v38;
      if (v34 != 0) {
        v53 = 128;
        if (*(_QWORD*)(*v8 + 200) == 0) {
          v53 = 56;
        }
        nn_mem_StandardAllocator_Free(*v8 + v53, v34);
      }
    LABEL_59:
      v25 = *(_QWORD*)(a1 + 64);
      if (*(_DWORD*)(a1 + 12) == 0) {
        goto LABEL_60;
      }
      goto LABEL_42;
    }
    if (v38 <= 0xAAAAAAAAAAAAAAALL) {
      v39 = fw_memory_HeapManager_Allocate(*v8, 24 * v38, 16, 0);
      goto LABEL_55;
    }
  LABEL_64:
    GameRoutine_60a210();
  }
  if (v29 < v30) {
    *(_QWORD*)(a1 + 72) = v25 + 24LL * (unsigned int)v29;
  }
  if (v6 == 0) {
  LABEL_60:
    atomic_store(0, (unsigned int*)(a1 + 20));
    atomic_store(0, (unsigned int*)(a1 + 24));
    if (*(_DWORD*)(a1 + 8) == 0) {
      return;
    }
    goto LABEL_61;
  }
LABEL_42:
  v40 = *v7;
  LODWORD(v41) = *(_DWORD*)(a1 + 8);
  v42 = 0;
  do {
    v44 = *(_QWORD*)(a1 + 88) + (v42 << 6);
    *(_QWORD*)(v44 + 48) = v25 + 24LL * (unsigned int)(v41 * v42);
    *(_QWORD*)(v44 + 56) = (unsigned int)v41;
    LODWORD(v41) = *(_DWORD*)(a1 + 8);
    if ((_DWORD)v41 != 0) {
      v45 = 0;
      v46 = 0;
      do {
        v47 = v46++ + v42 * v41;
        v48 = (_QWORD*)(*(_QWORD*)(v44 + 48) + v45);
        v45 += 24;
        v48[2] = 192;
        *v48 = 0;
        v48[1] = v40 + 144LL * (unsigned int)(192 * v47);
        v41 = *(unsigned int*)(a1 + 8);
      } while (v46 < v41);
    }
    v43 = *(unsigned int*)(a1 + 12);
    ++v42;
  } while (v42 < v43);
  atomic_store(0, (unsigned int*)(a1 + 20));
  atomic_store(0, (unsigned int*)(a1 + 24));
  if ((_DWORD)v43 != 0) {
    v49 = 0;
    v50 = 0;
    do {
      ++v50;
      atomic_store(0xFFFFFFFF, (unsigned int*)(*(_QWORD*)(a1 + 88) + v49 + 4));
      v51 = (unsigned int*)(*(_QWORD*)(a1 + 88) + v49);
      v49 += 64;
      atomic_store(0xFFFFFFFF, v51);
    } while (v50 < *(unsigned int*)(a1 + 12));
  }
  if (*(_DWORD*)(a1 + 8) != 0) {
  LABEL_61:
    v54 = 0;
    v55 = 0;
    do {
      ++v55;
      v56 = *(_QWORD*)(a1 + 32) + v54;
      v54 += 24;
      atomic_store(0, (unsigned int*)(v56 + 16));
      atomic_store(0, (unsigned __int8*)(v56 + 20));
    } while (v55 < *(unsigned int*)(a1 + 8));
  }
}

#pragma GCC visibility pop
