#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _QWORD GameData_1c13200[17];
__int64
game_facility_ItemShopMenuInfo_ItemShopMenuInfo_lambda0_Invoke(__int64 result,
                                                               __int64 a2);
__int64 GameRoutine_8a29c0(__int64 result, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
extern __int64 (*GameData_20f47f0[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_6e5a20();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_facility_ItemShopMenuInfo_ItemShopMenuInfo(__int64* a1, __int64 a2,
                                                     char a3);

void game_facility_ItemShopMenuInfo_ItemShopMenuInfo(__int64* a1, __int64 a2,
                                                     char a3)
{
  __int64* v3;
  _DWORD* v5;
  int v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  signed __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  _DWORD* v20;
  __int64 v21;
  __int64 v22;
  signed __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 i;
  __int64 v32;
  unsigned __int64 v33;
  _DWORD* v34;
  __int64 v35;
  signed __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  struct {
    _QWORD v44[4];
    _QWORD* v45;
  } v44_;
  __int64 v46;

  a1[1] = 0;
  v3 = a1 + 1;
  *a1 = a2;
  a1[2] = 0;
  a1[3] = 0;
  if ((a3 & 1) != 0) {
    v5 = nullptr;
    v6 = 0;
    v7 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v8 = a1[3];
      if ((unsigned __int64)v5 < v8) {
        *v5++ = v6;
      }
      else {
        v9 = *v3;
        v10 = (signed __int64)v5 - *v3;
        v11 = (v10 >> 2) + 1;
        if (v11 >> 62 != 0) {
          goto LABEL_64;
        }
        v12 = v8 - v9;
        if (v12 >> 1 > v11) {
          v11 = v12 >> 1;
        }
        if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFFCLL) {
          v13 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v13 = v11;
        }
        if (v13 != 0) {
          if (v13 >> 62 != 0) {
            goto LABEL_65;
          }
          v14 = fw_memory_HeapManager_Allocate(*v7, 4 * v13, 16, 0);
        }
        else {
          v14 = 0;
        }
        v15 = v14 + 4 * v13;
        v16 = v14 + v10 - 4 * (v10 >> 2);
        *(_DWORD*)(v14 + v10) = v6;
        v5 = (_DWORD*)(v14 + v10 + 4);
        memcpy(v16, v9, v10);
        a1[1] = v16;
        a1[2] = (__int64)v5;
        a1[3] = v15;
        if (v9 != 0) {
          v17 = 128;
          if (*(_QWORD*)(*v7 + 200) == 0) {
            v17 = 56;
          }
          nn_mem_StandardAllocator_Free(*v7 + v17, v9);
        }
      }
      ++v6;
      a1[2] = (__int64)v5;
      if (v6 == 8) {
        return;
      }
    }
  }
  v46 = 0;
  v44_.v44[0] = GameData_20f47f0;
  v44_.v44[1] = &v46;
  v44_.v45 = v44_.v44;
  GameRoutine_8a29c0(a2, (__int64)v44_.v44);
  if (v44_.v45 == v44_.v44) {
    v18 = 32;
  }
  else {
    if (v44_.v45 == nullptr) {
      goto LABEL_25;
    }
    v18 = 40;
  }
  (*(void (**)(__int64))(*v44_.v45 + v18))((__int64)v44_.v45);
LABEL_25:
  if (BYTE2(v46) + BYTE1(v46) + BYTE3(v46) + BYTE4(v46) + BYTE5(v46) +
          BYTE6(v46) + (unsigned int)HIBYTE(v46) >=
      2) {
    v20 = (_DWORD*)a1[2];
    v19 = a1[3];
    if ((unsigned __int64)v20 >= v19) {
      v22 = *v3;
      v23 = (signed __int64)v20 - *v3;
      v24 = (v23 >> 2) + 1;
      if (v24 >> 62 != 0) {
      LABEL_64:
        GameRoutine_6e5a20();
      }
      v25 = v19 - v22;
      if (v25 >> 1 > v24) {
        v24 = v25 >> 1;
      }
      if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFFCLL) {
        v26 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v26 = v24;
      }
      if (v26 != 0) {
        if (v26 >> 62 != 0) {
        LABEL_65:
          GameRoutine_60a210();
        }
        v27 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v26, 16, 0);
      }
      else {
        v27 = 0;
      }
      v28 = v27 + 4 * v26;
      v29 = v27 + v23 - 4 * (v23 >> 2);
      *(_DWORD*)(v27 + v23) = 0;
      v21 = v27 + v23 + 4;
      memcpy(v29, v22, v23);
      a1[1] = v29;
      a1[2] = v21;
      a1[3] = v28;
      if (v22 != 0) {
        v30 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v30 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, v22);
      }
    }
    else {
      *v20 = 0;
      v21 = (__int64)(v20 + 1);
    }
    a1[2] = v21;
  }
  for (i = 1; i != 8; ++i) {
    if (*((_BYTE*)&v46 + i) == 1) {
      v34 = (_DWORD*)a1[2];
      v33 = a1[3];
      if ((unsigned __int64)v34 < v33) {
        *v34 = i;
        v32 = (__int64)(v34 + 1);
      }
      else {
        v35 = *v3;
        v36 = (signed __int64)v34 - *v3;
        v37 = (v36 >> 2) + 1;
        if (v37 >> 62 != 0) {
          goto LABEL_64;
        }
        v38 = v33 - v35;
        if (v38 >> 1 > v37) {
          v37 = v38 >> 1;
        }
        if ((unsigned __int64)v38 >= 0x7FFFFFFFFFFFFFFCLL) {
          v39 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v39 = v37;
        }
        if (v39 != 0) {
          if (v39 >> 62 != 0) {
            goto LABEL_65;
          }
          v40 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v39, 16, 0);
        }
        else {
          v40 = 0;
        }
        v41 = v40 + 4 * v39;
        v42 = v40 + v36 - 4 * (v36 >> 2);
        *(_DWORD*)(v40 + v36) = i;
        v32 = v40 + v36 + 4;
        memcpy(v42, v35, v36);
        a1[1] = v42;
        a1[2] = v32;
        a1[3] = v41;
        if (v35 != 0) {
          v43 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v43 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, v35);
        }
      }
      a1[2] = v32;
    }
  }
}

__int64

game_facility_ItemShopMenuInfo_ItemShopMenuInfo_lambda0_Invoke(__int64 result,
                                                               __int64 a2)
{
  unsigned __int64 v2;
  __int64 v3;

  v2 = *(unsigned __int8*)(*(_QWORD*)(**(_QWORD**)a2 + 48LL) + 72LL);
  if (v2 > 0x10) {
    v3 = 7;
  }
  else {
    v3 = GameData_1c13200[v2];
  }
  *(_BYTE*)(*(_QWORD*)(result + 8) + v3) = 1;
  return result;
}

#pragma GCC visibility pop
