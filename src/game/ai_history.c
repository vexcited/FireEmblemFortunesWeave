#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_201e128[])();
extern __int64 GameData_2240088;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_22401a4;
__int64
AIHistory_Destructor_alt1(__int64 result) __asm__("AIHistory_Destructor");
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 AIHistory_126bd60_alt1(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                               __int64 a5,
                               __int64 a6) __asm__("AIHistory_126bd60");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void AIHistory_Destructor(_QWORD* a1);
__int64 AIHistory_126bd60(__int64 a1, __int64 a2);

void AIHistory_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = a1[5];
  a1[5] = 0;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v1);
  }
  v5 = a1[4];
  a1[4] = 0;
  if (v5 != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v6, v5);
  }
  v7 = a1[3];
  a1[3] = 0;
  if (v7 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v8, v7);
  }
  v9 = a1[2];
  a1[2] = 0;
  if (v9 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v10, v9);
  }
  *a1 = GameData_201e128;
  if ((_QWORD*)GameData_2240088 == a1) {
    GameData_2240088 = 0;
    GameData_22401a4 = 0;
  }
}

__int64 AIHistory_126bd60(__int64 a1, __int64 a2)
{
  __int64 v2;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  unsigned int v14;
  __int64 v15;
  __int64 result;
  __int16 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  _BYTE* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _BYTE* v32;
  __int64 v33;
  bool v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _BYTE* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _BYTE* v48;
  __int64 v49;

  v2 = *(int*)(a2 + 20);
  v4 = v2 + 2;
  v5 = *(_QWORD*)(a2 + 8) + v2;
  *(_DWORD*)(a2 + 20) = v4;
  **(_BYTE**)(a1 + 32) = *(_BYTE*)(v5 + 1);
  v6 = *(int*)(a2 + 20);
  v7 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  v8 = *(unsigned __int8*)(v7 + v6);
  *(_DWORD*)(a2 + 20) = v6 + 2;
  v9 = v8 | (*(unsigned __int8*)(v7 + v6 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v6 + 3;
  v10 = *(unsigned __int8*)(v7 + v6 + 2);
  *(_DWORD*)(a2 + 20) = v6 + 4;
  *(_DWORD*)(*(_QWORD*)(a1 + 32) + 4LL) =
      v9 | (v10 << 16) | (*(unsigned __int8*)(v7 + v6 + 3) << 24);
  v11 = *(int*)(a2 + 20);
  v12 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v11 + 1;
  v13 = *(unsigned __int8*)(v12 + v11);
  *(_DWORD*)(a2 + 20) = v11 + 2;
  v14 = v13 | (*(unsigned __int8*)(v12 + v11 + 1) << 8);
  v15 = *(_QWORD*)(a1 + 32);
  result = v15 + 8;
  if (v14 == 0) {
    v19 = 252;
    memset_alt1(result, 0, 0xFCu);
    v20 = *(_QWORD*)(a1 + 32);
    return memset_alt1(v20 + v14 + 260, 0, v19);
  }
  if (v14 >= 0xFC) {
    v17 = 252;
  }
  else {
    v17 = v14;
  }
  if (v14 < 8) {
    v18 = 0;
    if ((v17 & 7) == 0) {
      goto LABEL_15;
    }
    goto LABEL_12;
  }
  v21 = (_BYTE*)(v15 + 15);
  v22 = 0;
  do {
    v23 = *(int*)(a2 + 20);
    v22 -= 8;
    *(_DWORD*)(a2 + 20) = v23 + 1;
    *(v21 - 7) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23);
    v24 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v24 + 1;
    *(v21 - 6) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v24);
    v25 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v25 + 1;
    *(v21 - 5) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v25);
    v26 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v26 + 1;
    *(v21 - 4) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v26);
    v27 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v27 + 1;
    *(v21 - 3) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v27);
    v28 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v28 + 1;
    *(v21 - 2) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v28);
    v29 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v29 + 1;
    *(v21 - 1) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v29);
    v30 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v30 + 1;
    *v21 = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v30);
    v21 += 8;
  } while (-(__int64)((unsigned __int16)v17 & 0xFFF8) != v22);
  v18 = -v22;
  if ((v17 & 7) != 0) {
  LABEL_12:
    v31 = -(__int64)(v17 & 7);
    v32 = (_BYTE*)(v18 + v15 + 8);
    do {
      v33 = *(int*)(a2 + 20);
      v34 = __CFADD__(v31++, 1);
      *(_DWORD*)(a2 + 20) = v33 + 1;
      *v32++ = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v33);
    } while (!v34);
  }
LABEL_15:
  if (v14 < 0xFD) {
    if (v14 != 252) {
      v35 = a2;
      result = memset_alt1(result + v14, 0, 252 - v14);
      a2 = v35;
    }
  }
  else {
    *(_DWORD*)(a2 + 20) = *(_DWORD*)(a2 + 20) + v14 - 252;
  }
  v20 = *(_QWORD*)(a1 + 32);
  if (v14 < 8) {
    v36 = 0;
    if ((v17 & 7) == 0) {
      goto LABEL_28;
    }
    goto LABEL_25;
  }
  v37 = 0;
  v38 = (_BYTE*)(v20 + 267);
  do {
    v39 = *(int*)(a2 + 20);
    v37 -= 8;
    *(_DWORD*)(a2 + 20) = v39 + 1;
    *(v38 - 7) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v39);
    v40 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v40 + 1;
    *(v38 - 6) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v40);
    v41 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v41 + 1;
    *(v38 - 5) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v41);
    v42 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v42 + 1;
    *(v38 - 4) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v42);
    v43 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v43 + 1;
    *(v38 - 3) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v43);
    v44 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v44 + 1;
    *(v38 - 2) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v44);
    v45 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v45 + 1;
    *(v38 - 1) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v45);
    v46 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v46 + 1;
    *v38 = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v46);
    v38 += 8;
  } while (-(__int64)((unsigned __int16)v17 & 0xFFF8) != v37);
  v36 = -v37;
  if ((v17 & 7) != 0) {
  LABEL_25:
    v47 = -(__int64)(v17 & 7);
    v48 = (_BYTE*)(v36 + v20 + 260);
    do {
      v49 = *(int*)(a2 + 20);
      v34 = __CFADD__(v47++, 1);
      *(_DWORD*)(a2 + 20) = v49 + 1;
      *v48++ = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v49);
    } while (!v34);
  }
LABEL_28:
  if (v14 >= 0xFD) {
    *(_DWORD*)(a2 + 20) = *(_DWORD*)(a2 + 20) + v14 - 252;
    return result;
  }
  if (v14 != 252) {
    v19 = 252 - v14;
    return memset_alt1(v20 + v14 + 260, 0, v19);
  }
  return result;
}

#pragma GCC visibility pop
