#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fs_detail_TempBuffer_CreateBuffer_closure_Invoke(__int64 a1,
                                                         _QWORD* a2);
__int64 GameRoutine_637b00(__int64 result, _QWORD*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memset(__int64, int, unsigned __int64);
__int64 nn_fs_CloseFile(_QWORD);
__int64 nn_fs_GetFileSize(_QWORD, _QWORD);
__int64 nn_fs_OpenFile(__int64, const char*, int);
__int64 nn_fs_ReadFile_1a0b000(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 strncpy(__int64, const char*, unsigned __int64);
extern __int64 (***GameData_212c3c8)();
extern __int64 (*GameData_20d9d60[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_637c90();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 fs_detail_TempBuffer_CreateBuffer(__int64* a1, unsigned __int64* a2,
                                          char* a3, unsigned __int64 a4,
                                          __int64 (***a5)(), __int64 a6,
                                          __int64 a7, __int64 a8);

__int64 fs_detail_TempBuffer_CreateBuffer(__int64* a1, unsigned __int64* a2,
                                          char* a3, unsigned __int64 a4,
                                          __int64 (***a5)(), __int64 a6,
                                          __int64 a7, __int64 a8)
{
  __int64 (***v13)();
  char* v15;
  char* v16;
  unsigned int v17;
  __int64 v18;
  unsigned int FileENS0_10FileHandleElPvm;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  unsigned __int64 v44;
  __int64 v45;
  struct {
    __int64* v46;
    __int64 v47;
    unsigned __int64 v48;
    __int64* v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    char* v62;
  } v46_;
  __int64 v63;
  __int64 v64;

  v46_.v60 = 0;
  v46_.v61 = 0;
  v46_.v59 = 0;
  v46_.v57 = 0;
  v46_.v58 = 0;
  v46_.v55 = 0;
  v46_.v56 = 0;
  if (a5 != nullptr) {
    v13 = a5;
  }
  else {
    v13 = GameData_212c3c8;
  }
  v46_.v53 = 0;
  v46_.v54 = 0;
  v46_.v51 = 0;
  v46_.v52 = 0;
  v46_.v49 = nullptr;
  v46_.v50 = 0;
  v46_.v47 = 0;
  v46_.v48 = 0;
  v45 = 0;
  v46_.v46 = nullptr;
  if (a4 != 0) {
    if (a3[a4] != 0) {
      if (a4 - 128 > 0xFFFFFFFFFFFFFF7ELL) {
        v16 = (const char*)&v46_.v46;
      }
      else {
        v15 = a3;
        v16 = (const char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, a4 + 1, 16, 0);
        memset((__int64)v16, 0, a4 + 1);
        a3 = v15;
        v45 = (__int64)v16;
      }
      strncpy((__int64)v16, a3, a4);
      v16[a4] = 0;
    }
    else {
      v16 = a3;
    }
  }
  else {
    v16 = &GameData_1a9f09e;
  }
  v46_.v62 = v16;
  v17 = nn_fs_OpenFile((__int64)&v63, v16, 1);
  v18 = v45;
  FileENS0_10FileHandleElPvm = v17;
  v45 = 0;
  if (v18 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20,
                                  v18);
  }
  if ((FileENS0_10FileHandleElPvm & 0x3FFFFF) == 0x202) {
    return FileENS0_10FileHandleElPvm;
  }
  nn_fs_GetFileSize(&v44, v63);
  if (a2 != nullptr) {
    *a2 = v44;
  }
  if (a8 != 0) {
    v21 = a8 + a7;
    if (v44 < a8 + a7) {
      v21 = v44;
    }
    v22 = v21 - a7;
    if (v21 == a7) {
      goto LABEL_53;
    }
  }
  else {
    v22 = v44 - a7;
    if (v44 == a7) {
      goto LABEL_53;
    }
  }
  v23 = ((__int64 (*)(__int64 (***)(void), __int64, __int64))(*v13)[2])(
      v13, v22, a6);
  v24 = a1[2];
  v25 = (__int64*)a1[1];
  if ((unsigned __int64)v25 < v24) {
    *v25 = v23;
    v25[3] = (__int64)v13;
    v25[2] = (__int64)GameData_20d9d60;
    v25[8] = v22;
    v26 = v25 + 8;
    v25[6] = (__int64)(v25 + 2);
    a1[1] = (__int64)(v25 + 10);
    goto LABEL_52;
  }
  v27 = *a1;
  v28 = (__int64)v25 - *a1;
  v29 = 1 - 0x3333333333333333LL * (v28 >> 4);
  if (v29 > 0x333333333333333LL) {
    GameRoutine_637c90();
  }
  v46_.v49 = a1 + 2;
  v30 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v24 - v27) >> 4);
  if (2 * v30 > v29) {
    v29 = 2 * v30;
  }
  if (v30 >= 0x199999999999999LL) {
    v31 = 0x333333333333333LL;
  }
  else {
    v31 = v29;
  }
  if (v31 != 0) {
    if (v31 > 0x333333333333333LL) {
      GameRoutine_60a210();
    }
    v32 = v23;
    v33 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 80 * v31, 16,
                                         0);
    v23 = v32;
  }
  else {
    v33 = 0;
  }
  v34 = (__int64*)(v33 + v28);
  v45 = v33;
  v46_.v46 = v34;
  *v34 = v23;
  v34[3] = (__int64)v13;
  v34[8] = v22;
  v34[2] = (__int64)GameData_20d9d60;
  v34[6] = (__int64)(v34 + 2);
  v46_.v47 = v33 + v28 + 80;
  v46_.v48 = v33 + 80 * v31;
  GameRoutine_637b00((__int64)a1, &v45);
  v35 = a1[1];
  v36 = v46_.v46;
  while (1) {
    v38 = v46_.v47;
    if (v36 == (__int64*)v46_.v47) {
      break;
    }
    v46_.v47 -= 80;
    v39 = *(_QWORD*)(v38 - 80);
    *(_QWORD*)(v38 - 80) = 0;
    if (v39 != 0) {
      v64 = v39;
      v40 = *(_QWORD*)(v38 - 32);
      if (v40 == 0) {
        GameRoutine_60a310();
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v40 + 48LL))(v40, &v64);
    }
    v41 = *(_QWORD**)(v38 - 32);
    if (v41 == (_QWORD*)(v38 - 64)) {
      v37 = 32;
      goto LABEL_39;
    }
    if (v41 != nullptr) {
      v37 = 40;
    LABEL_39:
      (*(void (**)(__int64))(*v41 + v37))((__int64)v41);
    }
  }
  if (v45 != 0) {
    v42 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v42 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v42,
                                  v45);
  }
  v25 = (__int64*)(v35 - 80);
  v26 = (_QWORD*)(v35 - 16);
  a1[1] = v35;
LABEL_52:
  FileENS0_10FileHandleElPvm = nn_fs_ReadFile_1a0b000(v63, a7, *v25, *v26);
LABEL_53:
  nn_fs_CloseFile(v63);
  return FileENS0_10FileHandleElPvm;
}

__int64 fs_detail_TempBuffer_CreateBuffer_closure_Invoke(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64))(
      **(_QWORD**)(a1 + 8) + 24LL))(*(_QWORD*)(a1 + 8), *a2, 0, 16);
}

#pragma GCC visibility pop
