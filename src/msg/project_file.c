#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6315e0(_QWORD);
__int64 GameRoutine_a4a6a0(__int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_21fdd18)(__int64);
extern __int64 (*msg_ProjectFile_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProjectFile_DeletingDestructor(_QWORD* a1);
__int64 ProjectFile_Unknown2(__int64 a1);
extern __int64 (*GameData_21fdd10)(__int64);
__int64 ProjectFile_a4a6a0(__int64 a1);

__int64 ProjectFile_a4a6a0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  _BYTE* v16;
  __int64 v17;
  _BYTE* v18;
  __int64 v19;
  _BYTE* v20;
  __int64 v21;
  _BYTE* v22;
  __int64 v23;
  _BYTE* v24;
  __int64 v25;
  _BYTE* v26;
  __int64 v27;
  _BYTE* v28;
  __int64 v29;
  _BYTE* v30;
  __int64 v31;
  _BYTE* v32;
  __int64 v33;
  _BYTE* v34;
  __int64 v35;
  _BYTE* v36;
  __int64 v37;
  _BYTE* v38;

  result = GameData_21fdd10(80);
  *(_QWORD*)result = a1;
  *(_BYTE*)(result + 16) = *(_BYTE*)(a1 + 12);
  v3 = *(unsigned __int16*)(a1 + 14);
  *(_WORD*)(result + 18) = v3;
  if (v3 == 0) {
    *(_QWORD*)(result + 24) = 0;
    *(_QWORD*)(result + 8) = *(unsigned int*)(a1 + 18);
  LABEL_14:
    LODWORD(v17) = -1;
    *(_QWORD*)(result + 56) = -1;
    *(_QWORD*)(result + 64) = -1;
    *(_QWORD*)(result + 40) = -1;
    *(_QWORD*)(result + 48) = -1;
    *(_QWORD*)(result + 32) = -1;
    *(_DWORD*)(result + 72) = -1;
    goto LABEL_104;
  }
  v4 = result;
  v5 = GameData_21fdd10(24 * v3);
  v6 = *(_QWORD*)v4;
  *(_QWORD*)(v4 + 24) = v5;
  v7 = *(unsigned __int16*)(v4 + 18);
  result = v4;
  *(_QWORD*)(v4 + 8) = *(unsigned int*)(v6 + 18);
  if (v7 == 0) {
    goto LABEL_14;
  }
  v8 = 32;
  v9 = 0;
  v10 = 0;
  do {
    ++v10;
    v11 = *(_QWORD*)(v4 + 24) + v9;
    v9 += 24;
    *(_QWORD*)v11 = *(_QWORD*)v4 + v8 + 16;
    *(_BYTE*)(v11 + 8) = *(_BYTE*)(*(_QWORD*)v4 + v8);
    *(_BYTE*)(v11 + 9) = *(_BYTE*)(*(_QWORD*)v4 + v8 + 1);
    *(_BYTE*)(v11 + 10) = *(_BYTE*)(*(_QWORD*)v4 + v8 + 2);
    *(_BYTE*)(v11 + 11) = *(_BYTE*)(*(_QWORD*)v4 + v8 + 3);
    v12 = *(unsigned int*)(*(_QWORD*)v4 + (v8 | 4));
    *(_DWORD*)(v11 + 12) = v12;
    *(_WORD*)(v11 + 16) = *(_WORD*)(*(_QWORD*)v4 + (v8 | 4) + 4);
    v8 = (v8 + v12 + 31) & 0xFFFFFFFFFFFFFFF0LL;
    v13 = *(unsigned __int16*)(v4 + 18);
  } while (v10 < v13);
  if (*(_WORD*)(v4 + 18) == 0) {
    goto LABEL_14;
  }
  v14 = *(_QWORD*)(v4 + 24);
  v15 = 0;
  v16 = (_BYTE*)(v14 + 11);
  while (*(v16 - 3) != 67 || *(v16 - 2) != 76 || *(v16 - 1) != 82 ||
         *v16 != 49) {
    ++v15;
    v16 += 24;
    if (v13 == v15) {
      LODWORD(v15) = -1;
      break;
    }
  }
  *(_DWORD*)(v4 + 36) = v15;
  v18 = (_BYTE*)(v14 + 11);
  v19 = 0;
  while (*(v18 - 3) != 67 || *(v18 - 2) != 76 || *(v18 - 1) != 66 ||
         *v18 != 49) {
    ++v19;
    v18 += 24;
    if (v13 == v19) {
      LODWORD(v19) = -1;
      break;
    }
  }
  *(_DWORD*)(v4 + 32) = v19;
  v20 = (_BYTE*)(v14 + 11);
  v21 = 0;
  while (*(v20 - 3) != 65 || *(v20 - 2) != 84 || *(v20 - 1) != 73 ||
         *v20 != 50) {
    ++v21;
    v20 += 24;
    if (v13 == v21) {
      LODWORD(v21) = -1;
      break;
    }
  }
  *(_DWORD*)(v4 + 44) = v21;
  v22 = (_BYTE*)(v14 + 11);
  v23 = 0;
  while (*(v22 - 3) != 65 || *(v22 - 2) != 76 || *(v22 - 1) != 66 ||
         *v22 != 49) {
    ++v23;
    v22 += 24;
    if (v13 == v23) {
      LODWORD(v23) = -1;
      break;
    }
  }
  *(_DWORD*)(v4 + 40) = v23;
  v24 = (_BYTE*)(v14 + 11);
  v25 = 0;
  while (*(v24 - 3) != 65 || *(v24 - 2) != 76 || *(v24 - 1) != 73 ||
         *v24 != 50) {
    ++v25;
    v24 += 24;
    if (v13 == v25) {
      LODWORD(v25) = -1;
      break;
    }
  }
  *(_DWORD*)(v4 + 48) = v25;
  v26 = (_BYTE*)(v14 + 11);
  v27 = 0;
  while (*(v26 - 3) != 84 || *(v26 - 2) != 71 || *(v26 - 1) != 71 ||
         *v26 != 50) {
    ++v27;
    v26 += 24;
    if (v13 == v27) {
      LODWORD(v27) = -1;
      break;
    }
  }
  *(_DWORD*)(v4 + 52) = v27;
  v28 = (_BYTE*)(v14 + 11);
  v29 = 0;
  while (*(v28 - 3) != 84 || *(v28 - 2) != 65 || *(v28 - 1) != 71 ||
         *v28 != 50) {
    ++v29;
    v28 += 24;
    if (v13 == v29) {
      LODWORD(v29) = -1;
      break;
    }
  }
  *(_DWORD*)(v4 + 56) = v29;
  v30 = (_BYTE*)(v14 + 11);
  v31 = 0;
  while (*(v30 - 3) != 84 || *(v30 - 2) != 71 || *(v30 - 1) != 80 ||
         *v30 != 50) {
    ++v31;
    v30 += 24;
    if (v13 == v31) {
      LODWORD(v31) = -1;
      break;
    }
  }
  *(_DWORD*)(v4 + 60) = v31;
  v32 = (_BYTE*)(v14 + 11);
  v33 = 0;
  while (*(v32 - 3) != 84 || *(v32 - 2) != 71 || *(v32 - 1) != 76 ||
         *v32 != 50) {
    ++v33;
    v32 += 24;
    if (v13 == v33) {
      LODWORD(v33) = -1;
      break;
    }
  }
  *(_DWORD*)(v4 + 64) = v33;
  v34 = (_BYTE*)(v14 + 11);
  v35 = 0;
  while (*(v34 - 3) != 83 || *(v34 - 2) != 89 || *(v34 - 1) != 76 ||
         *v34 != 51) {
    ++v35;
    v34 += 24;
    if (v13 == v35) {
      LODWORD(v35) = -1;
      break;
    }
  }
  *(_DWORD*)(v4 + 68) = v35;
  v36 = (_BYTE*)(v14 + 11);
  v37 = 0;
  while (*(v36 - 3) != 83 || *(v36 - 2) != 76 || *(v36 - 1) != 66 ||
         *v36 != 49) {
    ++v37;
    v36 += 24;
    if (v13 == v37) {
      LODWORD(v37) = -1;
      break;
    }
  }
  v38 = (_BYTE*)(v14 + 11);
  v17 = 0;
  *(_DWORD*)(v4 + 72) = v37;
  while (*(v38 - 3) != 67 || *(v38 - 2) != 84 || *(v38 - 1) != 73 ||
         *v38 != 49) {
    ++v17;
    v38 += 24;
    if (v13 == v17) {
      LODWORD(v17) = -1;
      break;
    }
  }

LABEL_104:
  *(_DWORD*)(result + 76) = v17;
  return result;
}

__int64 ProjectFile_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;

  v1 = a1[100];
  *a1 = msg_ProjectFile_vtable;
  v3 = *(_QWORD*)(v1 + 24);
  if (v3 != 0) {
    GameData_21fdd18(v3);
  }
  GameData_21fdd18(v1);
  GameRoutine_6315e0(a1);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v4, (_QWORD)(a1));
}

__int64 ProjectFile_Unknown2(__int64 a1)
{
  __int64 result;

  result = GameRoutine_a4a6a0(*(_QWORD*)(a1 + 592));
  *(_QWORD*)(a1 + 800) = result;
  return result;
}

#pragma GCC visibility pop
