#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6315e0(_QWORD);
__int64 GameRoutine_a4a0e0(__int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_21fdd18)(__int64);
extern __int64 (*msg_MessageFile_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64
MessageFile_Destructor_alt1(__int64 a1) __asm__("MessageFile_Destructor");
__int64 MessageFile_DeletingDestructor_alt1(__int64 a1) __asm__(
    "MessageFile_DeletingDestructor");
__int64 MessageFile_Unknown2(__int64 a1);
extern __int64 (*GameData_21fdd10)(__int64);
__int64 MessageFile_a4a0e0(__int64 a1);
void fs_6315e0(_QWORD*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MessageFile_Destructor(__int64 a1);
void MessageFile_DeletingDestructor(__int64 a1);

__int64 MessageFile_a4a0e0(__int64 a1)
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

  result = GameData_21fdd10(56);
  *(_QWORD*)result = a1;
  *(_BYTE*)(result + 16) = *(_BYTE*)(a1 + 12);
  v3 = *(unsigned __int16*)(a1 + 14);
  *(_WORD*)(result + 18) = v3;
  if (v3 == 0) {
    *(_QWORD*)(result + 24) = 0;
    *(_QWORD*)(result + 8) = *(unsigned int*)(a1 + 18);
    goto LABEL_14;
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
  LABEL_14:
    *(_QWORD*)(result + 32) = -1;
    *(_QWORD*)(result + 40) = -1;
  LABEL_15:
    LODWORD(v17) = -1;
    goto LABEL_16;
  }
  v14 = *(_QWORD*)(v4 + 24);
  v15 = 0;
  v16 = (_BYTE*)(v14 + 11);
  while (*(v16 - 3) != 76 || *(v16 - 2) != 66 || *(v16 - 1) != 76 ||
         *v16 != 49) {
    ++v15;
    v16 += 24;
    if (v13 == v15) {
      LODWORD(v15) = -1;
      break;
    }
  }
  *(_DWORD*)(v4 + 32) = v15;
  v18 = (_BYTE*)(v14 + 11);
  v19 = 0;
  while (*(v18 - 3) != 84 || *(v18 - 2) != 88 || *(v18 - 1) != 84 ||
         *v18 != 50) {
    ++v19;
    v18 += 24;
    if (v13 == v19) {
      LODWORD(v19) = -1;
      break;
    }
  }
  *(_DWORD*)(v4 + 36) = v19;
  v20 = (_BYTE*)(v14 + 11);
  v21 = 0;
  while (*(v20 - 3) != 65 || *(v20 - 2) != 84 || *(v20 - 1) != 82 ||
         *v20 != 49) {
    ++v21;
    v20 += 24;
    if (v13 == v21) {
      LODWORD(v21) = -1;
      break;
    }
  }
  v22 = (_BYTE*)(v14 + 11);
  v23 = 0;
  *(_DWORD*)(v4 + 40) = v21;
  while (*(v22 - 3) != 65 || *(v22 - 2) != 84 || *(v22 - 1) != 79 ||
         *v22 != 49) {
    ++v23;
    v22 += 24;
    if (v13 == v23) {
      LODWORD(v23) = -1;
      break;
    }
  }
  v24 = (_BYTE*)(v14 + 11);
  v17 = 0;
  *(_DWORD*)(v4 + 44) = v23;
  while (*(v24 - 3) != 84 || *(v24 - 2) != 83 || *(v24 - 1) != 89 ||
         *v24 != 49) {
    ++v17;
    v24 += 24;
    if (v13 == v17) {
      goto LABEL_15;
    }
  }

LABEL_16:
  *(_DWORD*)(result + 48) = v17;
  return result;
}

void MessageFile_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = *(_QWORD*)(a1 + 800);
  *(_QWORD*)a1 = msg_MessageFile_vtable;
  v3 = *(_QWORD*)(v1 + 24);
  if (v3 != 0) {
    GameData_21fdd18(v3);
  }
  GameData_21fdd18(v1);
  if ((*(_BYTE*)(a1 + 808) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 824);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  fs_6315e0((_QWORD*)a1);
}

void MessageFile_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = *(_QWORD*)(a1 + 800);
  *(_QWORD*)a1 = msg_MessageFile_vtable;
  v3 = *(_QWORD*)(v1 + 24);
  if (v3 != 0) {
    GameData_21fdd18(v3);
  }
  GameData_21fdd18(v1);
  v4 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 808) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 824);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
    }
  }
  fs_6315e0((_QWORD*)a1);
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v7 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v7, a1);
}

__int64 MessageFile_Unknown2(__int64 a1)
{
  __int64 result;

  result = GameRoutine_a4a0e0(*(_QWORD*)(a1 + 592));
  *(_QWORD*)(a1 + 800) = result;
  return result;
}

#pragma GCC visibility pop
