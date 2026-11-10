#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_201e128[])();
extern __int64 GameData_2240088;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_22401a4;
__int64 AIHistory_Destructor(__int64 result);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 AIHistory_126bd60(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6);

__int64 AIHistory_Destructor(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = *(_QWORD*)(result + 40);
  *(_QWORD*)(result + 40) = 0;
  v2 = (_QWORD*)result;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  v5 = v2[4];
  v2[4] = 0;
  if (v5 != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v6 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6);
  }
  v7 = v2[3];
  v2[3] = 0;
  if (v7 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v8 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
  }
  v9 = v2[2];
  v2[2] = 0;
  if (v9 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v10 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10);
  }
  *v2 = GameData_201e128;
  if ((_QWORD*)GameData_2240088 == v2) {
    GameData_2240088 = 0;
    GameData_22401a4 = 0;
  }
  return result;
}

__int64 AIHistory_126bd60(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6)
{
  __int64 v6;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  int v17;
  unsigned int v18;
  __int64 v19;
  __int64 result;
  __int16 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _BYTE* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _BYTE* v36;
  __int64 v37;
  bool v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _BYTE* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  _BYTE* v52;
  __int64 v53;

  v6 = *(int*)(a2 + 20);
  v8 = v6 + 2;
  v9 = *(_QWORD*)(a2 + 8) + v6;
  *(_DWORD*)(a2 + 20) = v8;
  **(_BYTE**)(a1 + 32) = *(_BYTE*)(v9 + 1);
  v10 = *(int*)(a2 + 20);
  v11 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  v12 = *(unsigned __int8*)(v11 + v10);
  *(_DWORD*)(a2 + 20) = v10 + 2;
  v13 = v12 | (*(unsigned __int8*)(v11 + v10 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v10 + 3;
  v14 = *(unsigned __int8*)(v11 + v10 + 2);
  *(_DWORD*)(a2 + 20) = v10 + 4;
  *(_DWORD*)(*(_QWORD*)(a1 + 32) + 4LL) =
      v13 | (v14 << 16) | (*(unsigned __int8*)(v11 + v10 + 3) << 24);
  v15 = *(int*)(a2 + 20);
  v16 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v15 + 1;
  v17 = *(unsigned __int8*)(v16 + v15);
  *(_DWORD*)(a2 + 20) = v15 + 2;
  v18 = v17 | (*(unsigned __int8*)(v16 + v15 + 1) << 8);
  v19 = *(_QWORD*)(a1 + 32);
  result = v19 + 8;
  if (v18 == 0) {
    v23 = 252;
    memset(result, 0, 252, a4, a5, a6);
    v24 = *(_QWORD*)(a1 + 32);
    return memset(v24 + v18 + 260, 0, v23, a4, a5, a6);
  }
  if (v18 >= 0xFC) {
    v21 = 252;
  }
  else {
    v21 = v18;
  }
  if (v18 < 8) {
    v22 = 0;
    if ((v21 & 7) == 0) {
      goto LABEL_15;
    }
    goto LABEL_12;
  }
  v25 = (_BYTE*)(v19 + 15);
  v26 = 0;
  do {
    v27 = *(int*)(a2 + 20);
    v26 -= 8;
    *(_DWORD*)(a2 + 20) = v27 + 1;
    *(v25 - 7) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v27);
    v28 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v28 + 1;
    *(v25 - 6) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v28);
    v29 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v29 + 1;
    *(v25 - 5) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v29);
    v30 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v30 + 1;
    *(v25 - 4) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v30);
    v31 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v31 + 1;
    *(v25 - 3) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v31);
    v32 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v32 + 1;
    *(v25 - 2) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v32);
    v33 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v33 + 1;
    *(v25 - 1) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v33);
    v34 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v34 + 1;
    *v25 = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v34);
    v25 += 8;
  } while (-(__int64)((unsigned __int16)v21 & 0xFFF8) != v26);
  v22 = -v26;
  if ((v21 & 7) != 0) {
  LABEL_12:
    v35 = -(__int64)(v21 & 7);
    v36 = (_BYTE*)(v22 + v19 + 8);
    do {
      v37 = *(int*)(a2 + 20);
      v38 = __CFADD__(v35++, 1);
      *(_DWORD*)(a2 + 20) = v37 + 1;
      *v36++ = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v37);
    } while (!v38);
  }
LABEL_15:
  if (v18 < 0xFD) {
    if (v18 != 252) {
      v39 = a2;
      result = memset(result + v18, 0, 252 - v18, a4, a5, a6);
      a2 = v39;
    }
  }
  else {
    *(_DWORD*)(a2 + 20) = *(_DWORD*)(a2 + 20) + v18 - 252;
  }
  v24 = *(_QWORD*)(a1 + 32);
  if (v18 < 8) {
    v40 = 0;
    if ((v21 & 7) == 0) {
      goto LABEL_28;
    }
    goto LABEL_25;
  }
  v41 = 0;
  v42 = (_BYTE*)(v24 + 267);
  do {
    v43 = *(int*)(a2 + 20);
    v41 -= 8;
    *(_DWORD*)(a2 + 20) = v43 + 1;
    *(v42 - 7) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v43);
    v44 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v44 + 1;
    *(v42 - 6) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v44);
    v45 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v45 + 1;
    *(v42 - 5) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v45);
    v46 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v46 + 1;
    *(v42 - 4) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v46);
    v47 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v47 + 1;
    *(v42 - 3) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v47);
    v48 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v48 + 1;
    *(v42 - 2) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v48);
    v49 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v49 + 1;
    *(v42 - 1) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v49);
    v50 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v50 + 1;
    *v42 = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v50);
    v42 += 8;
  } while (-(__int64)((unsigned __int16)v21 & 0xFFF8) != v41);
  v40 = -v41;
  if ((v21 & 7) != 0) {
  LABEL_25:
    v51 = -(__int64)(v21 & 7);
    v52 = (_BYTE*)(v40 + v24 + 260);
    do {
      v53 = *(int*)(a2 + 20);
      v38 = __CFADD__(v51++, 1);
      *(_DWORD*)(a2 + 20) = v53 + 1;
      *v52++ = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v53);
    } while (!v38);
  }
LABEL_28:
  if (v18 >= 0xFD) {
    *(_DWORD*)(a2 + 20) = *(_DWORD*)(a2 + 20) + v18 - 252;
    return result;
  }
  if (v18 != 252) {
    v23 = 252 - v18;
    return memset(v24 + v18 + 260, 0, v23, a4, a5, a6);
  }
  return result;
}

#pragma GCC visibility pop
