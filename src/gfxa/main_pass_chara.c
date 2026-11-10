#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 (*GameData_1fc9390[])();
extern __int64 (*GameData_1fc9420[])();
extern __int64 (*GameData_1fc94b0[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_b32f30(_QWORD);
__int64 gfxa_MainPassChara_SetupSceneBuffersPass(__int64 a1, __int64* a2,
                                                 __int64 a3, __int64 a4,
                                                 __int64 a5);

__int64 gfxa_MainPassChara_SetupSceneBuffersPass(__int64 a1, __int64* a2,
                                                 __int64 a3, __int64 a4,
                                                 __int64 a5)
{
  int v5;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  long double v29;
  __int64 v30;
  __int64 v31;
  __int64 v33;
  _QWORD v34[4];
  _QWORD* v35;
  _QWORD v36[4];
  _QWORD* v37;

  v33 = a3;
  v5 = *((_DWORD*)a2 + 24);
  v9 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       400, 16, 0);
  v11 = *v9;
  v36[2] = a5;
  v34[2] = a5;
  v36[0] = GameData_1fc9390;
  v36[1] = &v33;
  v37 = v36;
  v34[0] = GameData_1fc9420;
  v34[1] = a1;
  v35 = v34;
  v12 = (char*)fw_memory_HeapManager_Allocate(v11, 32, 16, 0);
  *(_DWORD*)(v10 + 80) = v5;
  *(_QWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_QWORD*)(v10 + 16) = 27;
  *(_QWORD*)(v10 + 24) = v12;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_QWORD*)(v10 + 88) = 0;
  *(_QWORD*)(v10 + 96) = 0;
  *(_QWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 112) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_QWORD*)(v10 + 128) = 0;
  *(_QWORD*)(v10 + 136) = 0;
  *(_QWORD*)(v10 + 144) = 0;
  *(_QWORD*)(v10 + 152) = 0;
  *(_QWORD*)(v10 + 160) = 0;
  *(_QWORD*)(v10 + 168) = 0;
  *(_QWORD*)(v10 + 176) = 0;
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 192) = 0;
  *(_QWORD*)(v10 + 200) = 0;
  *(_QWORD*)(v10 + 208) = 0;
  *(_QWORD*)(v10 + 216) = 0;
  *(_QWORD*)(v10 + 224) = 0;
  *(_QWORD*)(v10 + 232) = 0;
  *(_QWORD*)(v10 + 240) = 0;
  *(_QWORD*)(v10 + 248) = 0;
  *(_QWORD*)(v10 + 256) = 0;
  *(_QWORD*)(v10 + 264) = 0;
  *(_QWORD*)(v10 + 272) = 0;
  *(_QWORD*)(v10 + 280) = 0;
  strcpy(v12, "CharaSceneBuffersUpdatePass");
  v13 = v37;
  *(_BYTE*)(v10 + 84) = 1;
  *(_QWORD*)v10 = GameData_1fc94b0;
  *(_QWORD*)(v10 + 8) = 33;
  if (v13 == nullptr) {
    *(_QWORD*)(v10 + 336) = 0;
    v14 = v35;
    if (v35 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_9;
  }
  if (v13 == v36) {
    *(_QWORD*)(v10 + 336) = v10 + 304;
    (*(void (**)(_QWORD*))(*v13 + 24LL))(v13);
    v14 = v35;
    if (v35 != nullptr) {
      goto LABEL_6;
    }
  LABEL_9:
    *(_QWORD*)(v10 + 384) = 0;
    goto LABEL_16;
  }
  *(_QWORD*)(v10 + 336) = (*(__int64 (**)(_QWORD*))(*v13 + 16LL))(v13);
  v14 = v35;
  if (v35 == nullptr) {
    goto LABEL_9;
  }
LABEL_6:
  if (v14 == v34) {
    *(_QWORD*)(v10 + 384) = v10 + 352;
    (*(void (**)(_QWORD*))(*v14 + 24LL))(v14);
  }
  else {
    *(_QWORD*)(v10 + 384) = (*(__int64 (**)(_QWORD*))(*v14 + 16LL))(v14);
  }
  if (v35 == v34) {
    v15 = 32;
  }
  else {
    if (v35 == nullptr) {
      goto LABEL_16;
    }
    v15 = 40;
  }
  (*(void (**)(__int64))(*v35 + v15))((__int64)v35);
LABEL_16:
  v16 = (__int64)v37;
  if (v37 == v36) {
    v17 = 32;
  }
  else {
    if (v37 == nullptr) {
      goto LABEL_21;
    }
    v17 = 40;
  }
  v16 = (*(__int64 (**)(__int64))(*v37 + v17))((__int64)v37);
LABEL_21:
  v19 = (__int64*)a2[1];
  v18 = a2[2];
  if ((unsigned __int64)v19 >= v18) {
    v21 = *a2;
    v22 = (__int64)v19 - *a2;
    v23 = (v22 >> 3) + 1;
    if (v23 >> 61 != 0) {
      GameRoutine_b32f30(v16);
    }
    v24 = v18 - v21;
    if (v24 >> 2 > v23) {
      v23 = v24 >> 2;
    }
    if ((unsigned __int64)v24 >= 0x7FFFFFFFFFFFFFF8LL) {
      v25 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v25 = v23;
    }
    if (v25 != 0) {
      if (v25 >> 61 != 0) {
        GameRoutine_60a210(v16);
      }
      v26 = fw_memory_HeapManager_Allocate(*v9, 8 * v25, 16, 0);
    }
    else {
      v26 = 0;
    }
    v27 = v26 + 8 * v25;
    v28 = v26 + v22 - 8 * (v22 >> 3);
    *(_QWORD*)(v26 + v22) = v10;
    v20 = v26 + v22 + 8;
    memcpy(v28, v21, v22);
    *a2 = v28;
    a2[1] = v20;
    a2[2] = v27;
    if (v21 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*v9 + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free(*v9 + v30, v29);
    }
  }
  else {
    *v19 = v10;
    v20 = (__int64)(v19 + 1);
  }
  a2[1] = v20;
  v31 = *(_QWORD*)(v20 - 8);
  v36[0] = a2;
  v36[1] = v31;
  return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v31 + 16LL))(v31, v36);
}

#pragma GCC visibility pop
