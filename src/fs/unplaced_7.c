#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Manager_a4fd20(PSEUDO_X8, __int64, const char*,
                                               __int64, char);
__int64* GameRoutine_a542c0(_QWORD*, const char**);
__int64 Registration_18d7720(__int64, int, int);
__int64 Registration_a50100(__int64*, const char*, __int64);
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 snd_g_fileIndex;
void nn_mem_StandardAllocator_Free(__int64, __int64);
__attribute__((swiftcall)) void fs_a50740(PSEUDO_X8 x8_, __int64 a1,
                                          const char* a2);
__attribute__((swiftcall)) void fs_a51060(PSEUDO_X8 x8_, __int64 a1,
                                          const char* a2);

__attribute__((swiftcall)) void fs_a50740(PSEUDO_X8 x8_, __int64 a1,
                                          const char* a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  const char* v9;
  int v10;
  __int64 v11;
  const char* v12;
  unsigned int v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 v18[2];
    const char* v19;
  } v18_;
  struct {
    __int64 v20;
    unsigned __int64 v21;
    __int64 v22;
  } v20_;
  const char* v23;

  Manager_a4fd20((void*)(&v20_.v20), a1 + 15176, a2, (__int64)"Expression", 0);
  if ((v20_.v20 & 1) != 0) {
    v6 = v20_.v21;
  }
  else {
    v6 = (unsigned __int64)(unsigned __int8)v20_.v20 >> 1;
  }
  if (v6 != 0) {
    v7 = v20_.v21;
    *a3 = v20_.v20;
    a3[1] = v7;
    a3[2] = v20_.v22;
    return;
  }
  Manager_a4fd20((void*)(v18_.v18), a1 + 15176, a2, (__int64)"ReferenceJPja",
                 0);
  v8 = *msg_MessageManager_instance__ptr[0];
  if ((v18_.v18[0] & 1) != 0) {
    v9 = v18_.v19;
  }
  else {
    v9 = (char*)v18_.v18 + 1;
  }
  v23 = v9;
  if (GameRoutine_a542c0((_QWORD*)(v8 + 14648), &v23) == nullptr) {
    goto LABEL_24;
  }
  v10 = Registration_a50100((__int64*)(v8 + 15176), v9, (__int64)"Section");
  if (v10 == 0) {
    goto LABEL_14;
  }
  v11 = *(_QWORD*)(snd_g_fileIndex + 4752);
  if (v11 == 0) {
    goto LABEL_14;
  }
  if ((v10 & 0x80000000) == 0) {
    if ((unsigned int)Registration_18d7720(*(_QWORD*)(snd_g_fileIndex + 4752),
                                           0, v10) != 0) {
      goto LABEL_14;
    }
  LABEL_24:
    *(_WORD*)a3 = 0;
    if ((v18_.v18[0] & 1) == 0) {
      goto LABEL_29;
    }
  LABEL_25:
    if (v18_.v19 != nullptr) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, (__int64)v18_.v19);
    }
    goto LABEL_29;
  }
  v13 = -1;
  v14 = 0;
  v15 = 0;
  do {
    if ((v13 & 1) == 0) {
      v15 |= Registration_18d7720(v11, 0, v14);
    }
    v13 >>= 1;
    ++v14;
  } while (v14 != 32);
  if ((v15 | ((v15 & 0xFFFFFFFE & ((v15 & 0xFFFFFFFE) - 1)) != 0)) == 0) {
    goto LABEL_24;
  }
LABEL_14:
  if ((v18_.v18[0] & 1) != 0) {
    v12 = v18_.v19;
  }
  else {
    v12 = (char*)v18_.v18 + 1;
  }
  fs_a50740((void*)(a3), a1, v12);
  if ((v18_.v18[0] & 1) != 0) {
    goto LABEL_25;
  }
LABEL_29:
  if ((v20_.v20 & 1) != 0 && v20_.v22 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17,
                                  v20_.v22);
  }
}

__attribute__((swiftcall)) void fs_a51060(PSEUDO_X8 x8_, __int64 a1,
                                          const char* a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  const char* v9;
  int v10;
  __int64 v11;
  const char* v12;
  unsigned int v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 v18[2];
    const char* v19;
  } v18_;
  struct {
    __int64 v20;
    unsigned __int64 v21;
    __int64 v22;
  } v20_;
  const char* v23;

  Manager_a4fd20((void*)(&v20_.v20), a1 + 15176, a2, (__int64)"Event", 1);
  if ((v20_.v20 & 1) != 0) {
    v6 = v20_.v21;
  }
  else {
    v6 = (unsigned __int64)(unsigned __int8)v20_.v20 >> 1;
  }
  if (v6 != 0) {
    v7 = v20_.v21;
    *a3 = v20_.v20;
    a3[1] = v7;
    a3[2] = v20_.v22;
    return;
  }
  Manager_a4fd20((void*)(v18_.v18), a1 + 15176, a2, (__int64)"ReferenceJPja",
                 0);
  v8 = *msg_MessageManager_instance__ptr[0];
  if ((v18_.v18[0] & 1) != 0) {
    v9 = v18_.v19;
  }
  else {
    v9 = (char*)v18_.v18 + 1;
  }
  v23 = v9;
  if (GameRoutine_a542c0((_QWORD*)(v8 + 14648), &v23) == nullptr) {
    goto LABEL_24;
  }
  v10 = Registration_a50100((__int64*)(v8 + 15176), v9, (__int64)"Section");
  if (v10 == 0) {
    goto LABEL_14;
  }
  v11 = *(_QWORD*)(snd_g_fileIndex + 4752);
  if (v11 == 0) {
    goto LABEL_14;
  }
  if ((v10 & 0x80000000) == 0) {
    if ((unsigned int)Registration_18d7720(*(_QWORD*)(snd_g_fileIndex + 4752),
                                           0, v10) != 0) {
      goto LABEL_14;
    }
  LABEL_24:
    *(_WORD*)a3 = 0;
    if ((v18_.v18[0] & 1) == 0) {
      goto LABEL_29;
    }
  LABEL_25:
    if (v18_.v19 != nullptr) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, (__int64)v18_.v19);
    }
    goto LABEL_29;
  }
  v13 = -1;
  v14 = 0;
  v15 = 0;
  do {
    if ((v13 & 1) == 0) {
      v15 |= Registration_18d7720(v11, 0, v14);
    }
    v13 >>= 1;
    ++v14;
  } while (v14 != 32);
  if ((v15 | ((v15 & 0xFFFFFFFE & ((v15 & 0xFFFFFFFE) - 1)) != 0)) == 0) {
    goto LABEL_24;
  }
LABEL_14:
  if ((v18_.v18[0] & 1) != 0) {
    v12 = v18_.v19;
  }
  else {
    v12 = (char*)v18_.v18 + 1;
  }
  fs_a51060((void*)(a3), a1, v12);
  if ((v18_.v18[0] & 1) != 0) {
    goto LABEL_25;
  }
LABEL_29:
  if ((v20_.v20 & 1) != 0 && v20_.v22 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17,
                                  v20_.v22);
  }
}

#pragma GCC visibility pop
