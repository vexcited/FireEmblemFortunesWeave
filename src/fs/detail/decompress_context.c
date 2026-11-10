#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_17d59a0(_QWORD*);
__int64 GameRoutine_17d57c0(__int64, __int64**);
__int64 fw_compression_GetFrameContentSize(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64* GameRoutine_17d5f20(__int64* result, __int64);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64* DecompressContext_17d62a0(__int64 a1, __int64** a2);

__int64* DecompressContext_17d62a0(__int64 a1, __int64** a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64* result;
  __int64 v16;
  __int64 v17;
  char* v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  _QWORD v37[2];
  __int16 v38;

  v2 = *a2;
  v3 = a2[1];
  v24 = nullptr;
  v25 = nullptr;
  v26 = 0;
  v27 = 0;
  v35 = nullptr;
  v36 = 0;
  v29 = nullptr;
  v30 = 0;
  v31 = 0;
  v33 = 0;
  if (v2 == v3) {
    v6 = 0;
    v7 = 0;
  }
  else {
    v6 = *v2;
    v7 = v2[8];
  }
  v38 = 0;
  v37[0] = 0;
  v37[1] = 0;
  if (v7 >= 0x12) {
    v8 = 18;
  }
  else {
    v8 = v7;
  }
  memcpy(v37, v6, v8);
  v9 = fw_compression_GetFrameContentSize(v37, 18);
  v32 = a1;
  GameRoutine_17d57c0((__int64)&v24, a2);
  v30 = v9;
  v31 = 0;
  if (0xCCCCCCCCCCCCCCCDLL * ((v25 - v24) >> 4) < 2) {
    GameRoutine_17d5f20((__int64*)&v24, 0);
  }
  else {
    GameRoutine_17d59a0(&v24);
  }
  v11 = v33;
  v33 = 0;
  if (v11 != 0) {
    v12 = v35;
    v37[0] = v11;
    if (v35 == nullptr) {
      goto LABEL_43;
    }
    (*(void (**)(__int64*, _QWORD*))(*v35 + 48))(v35, v37);
  }
  if (v35 == &v34) {
    v13 = 32;
  }
  else {
    if (v35 == nullptr) {
      goto LABEL_18;
    }
    v13 = 40;
  }
  (*(void (**)(void))(*v35 + v13))();
LABEL_18:
  v14 = v27;
  v27 = 0;
  if (v14 == 0) {
    goto LABEL_21;
  }
  v12 = v29;
  v37[0] = v14;
  if (v29 == nullptr) {
  LABEL_43:
    GameRoutine_60a310(v12, v10);
  }
  (*(void (**)(__int64*, _QWORD*))(*v29 + 48))(v29, v37);
LABEL_21:
  result = v29;
  if (v29 == &v28) {
    v16 = 32;
    goto LABEL_25;
  }
  if (v29 != nullptr) {
    v16 = 40;
  LABEL_25:
    result = (__int64*)(*(__int64 (**)(void))(*v29 + v16))();
  }
  v17 = (__int64)v24;
  if (v24 == nullptr) {
    return result;
  }
  v18 = v25;
  if (v24 == v25) {
    goto LABEL_39;
  }
  v19 = v25;
  do {
    v22 = *((_QWORD*)v19 - 10);
    v19 -= 80;
    v21 = v22;
    *(_QWORD*)v19 = 0;
    if (v22 != 0) {
      v37[0] = v21;
      v12 = *((__int64**)v18 - 4);
      if (v12 == nullptr) {
        goto LABEL_43;
      }
      (*(void (**)(__int64*, _QWORD*))(*v12 + 48))(v12, v37);
    }
    result = *((__int64**)v18 - 4);
    if (v18 - 64 == (char*)result) {
      v20 = 32;
    LABEL_30:
      result = (__int64*)(*(__int64 (**)(void))(*result + v20))();
      goto LABEL_31;
    }
    if (result != nullptr) {
      v20 = 40;
      goto LABEL_30;
    }
  LABEL_31:
    v18 = v19;
  } while (v19 != (char*)v17);
  v25 = (char*)v17;
  v17 = (__int64)v24;
  if (v24 != nullptr) {
  LABEL_39:
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    return (__int64*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v17);
  }
  return result;
}

#pragma GCC visibility pop
