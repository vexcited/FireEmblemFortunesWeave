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
__int64* GameRoutine_b3f6c0(_QWORD*, __int64);
__int64* GameRoutine_b3f800(_QWORD*, __int64);
__int64 GameRoutine_ad6000(__int64, unsigned __int64);
__int64 GameRoutine_b4fad0(_DWORD*, _QWORD*, _QWORD*, __int64*, __int64);
__int64 ResourceBuilder_b52130(int*, _QWORD*, _QWORD*, __int64*, __int64);
__int64 TaskCharaSceneBuffers_bfcea0(__int64 result, _QWORD*, int8x16_t*);
__int64 gfxa_MainPassChara_SetupOutlinePass_lambda1_Invoke(__int64 a1,
                                                           __int64 a2,
                                                           __int64* a3);
__int64 gfxa_MainPassChara_SetupMainPass_lambda3_Invoke(__int64 a1, __int64 a2,
                                                        __int64* a3);
__int64 gfxa_MainPassChara_SetupTransparentPass_lambda3_Invoke(__int64 a1,
                                                               __int64 a2,
                                                               __int64* a3);
__int64 gfxa_MainPassChara_SetupSceneBuffersPass_lambda1_Invoke(__int64 a1,
                                                                __int64 a2);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_b32f30_alt1() __asm__("GameRoutine_b32f30");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
extern __int64 (*GameData_1fc85e8[])();
extern __int64 (*GameData_1fc8678[])();
extern __int64 (*GameData_1fc8708[])();
extern __int64 (*GameData_1fc8a20[])();
extern __int64 (*GameData_1fc8ab0[])();
extern __int64 (*GameData_1fc8b40[])();
extern __int64 (*GameData_1fc8b88[])();
extern __int64 (*GameData_1fc8c08[])();
extern __int64 (*GameData_1fc8df0[])();
extern __int64 (*GameData_1fc8e80[])();
extern __int64 (*GameData_1fc8f10[])();
extern __int64 (*GameData_1fc8f58[])();
extern __int64 (*GameData_1fc8fe8[])();
extern __int64 (*GameData_1fc9078[])();
extern __int64 (*GameData_1fc90c0[])();
extern __int64 (*GameData_1fc9150[])();
extern __int64 (*GameData_1fc91e0[])();
extern __int64 (*GameData_1fc9228[])();
extern __int64 (*GameData_1fc92b8[])();
extern __int64 (*GameData_1fc9348[])();
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 gfxa_MainPassChara_SetupOutlinePass(__int64 a1, __int64 a2, __int64 a3);
__int64 gfxa_MainPassChara_SetupTransparentPass(__int64 a1, __int64 a2,
                                                __int64 a3);
__int64 gfxa_MainPassChara_SetupPostOutlinePass(__int64 result, __int64 a2,
                                                _QWORD* a3, __int64* a4);
__int64 gfxa_MainPassChara_SetupDiffusionPass(__int64 result, __int64 a2,
                                              _QWORD* a3, __int64* a4);
__int64 MainPassChara_b8ac30(__int64 a1, __int64 a2, _QWORD* a3);
__int64 gfxa_MainPassChara_SetupSilhouettePass(__int64 result, __int64 a2,
                                               _QWORD* a3, __int64* a4);

__int64 gfxa_MainPassChara_SetupOutlinePass(__int64 a1, __int64 a2, __int64 a3)
{
  int v3;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  signed __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  struct {
    __int64 (**v24)();
    __int64 v25;
    __int64* v26;
    char gap24_[8];
    __int64 (***v27)();
  } v24_;
  __int64 v28;

  v28 = a3;
  v3 = *(_DWORD*)(a2 + 96);
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 240, 16, 0);
  *(_QWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_DWORD*)(v7 + 80) = v3;
  *(_QWORD*)(v7 + 128) = 0;
  *(_QWORD*)(v7 + 136) = 0;
  v24_.v26 = &v28;
  v24_.v24 = GameData_1fc85e8;
  v24_.v25 = a1;
  v24_.v27 = &v24_.v24;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 88) = 0;
  *(_QWORD*)(v7 + 200) = a1;
  strcpy((char*)(v7 + 8), " CharaOutlinePass");
  *(_BYTE*)(v7 + 84) = 1;
  *(_QWORD*)(v7 + 192) = GameData_1fc8678;
  *(_QWORD*)v7 = GameData_1fc8708;
  *(_QWORD*)(v7 + 144) = GameData_1fc85e8;
  *(_QWORD*)(v7 + 224) = v7 + 192;
  *(_QWORD*)(v7 + 176) = v7 + 144;
  v8 = v24_.v26;
  *(_QWORD*)(v7 + 152) = v24_.v25;
  *(_QWORD*)(v7 + 160) = v8;
  v10 = *(__int64**)(a2 + 8);
  v9 = *(_QWORD*)(a2 + 16);
  if ((unsigned __int64)v10 >= v9) {
    v12 = *(_QWORD*)a2;
    v13 = (signed __int64)v10 - *(_QWORD*)a2;
    v14 = (v13 >> 3) + 1;
    if (v14 >> 61 != 0) {
      GameRoutine_b32f30_alt1();
    }
    v15 = v9 - v12;
    if (v15 >> 2 > v14) {
      v14 = v15 >> 2;
    }
    if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL) {
      v16 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v16 = v14;
    }
    if (v16 != 0) {
      if (v16 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v17 = v7;
      v18 = fw_memory_HeapManager_Allocate_alt1(*v6, 8 * v16, 16, 0);
      v7 = v17;
    }
    else {
      v18 = 0;
    }
    v19 = v18 + 8 * v16;
    v20 = v18 + v13 - 8 * (v13 >> 3);
    *(_QWORD*)(v18 + v13) = v7;
    v11 = v18 + v13 + 8;
    memcpy_alt1(v20, v12, v13);
    *(_QWORD*)a2 = v20;
    *(_QWORD*)(a2 + 8) = v11;
    *(_QWORD*)(a2 + 16) = v19;
    if (v12 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v6 + v21, v12);
    }
  }
  else {
    *v10 = v7;
    v11 = (__int64)(v10 + 1);
  }
  *(_QWORD*)(a2 + 8) = v11;
  v22 = *(_QWORD*)(v11 - 8);
  v24_.v24 = (__int64 (**)(void))a2;
  v24_.v25 = v22;
  return (*(__int64 (**)(__int64, __int64 (***)(void)))(*(_QWORD*)v22 + 16LL))(
      v22, &v24_.v24);
}

__int64 gfxa_MainPassChara_SetupTransparentPass(__int64 a1, __int64 a2,
                                                __int64 a3)
{
  int v3;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  signed __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  __int64 (***v27)();
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  signed __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v45;
  struct {
    _QWORD v46[4];
    _QWORD* v47;
  } v46_;
  struct {
    __int64 (**v48)();
    __int64 v49;
    __int64* v50;
    char gap88_[8];
    __int64 (***v51)();
  } v48_;

  v45 = a3;
  v3 = *(_DWORD*)(a2 + 96);
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
  *(_QWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_DWORD*)(v7 + 80) = v3;
  *(_QWORD*)(v7 + 184) = 0;
  *(_QWORD*)(v7 + 192) = 0;
  v48_.v50 = &v45;
  v48_.v48 = GameData_1fc8a20;
  v48_.v49 = a1;
  v48_.v51 = &v48_.v48;
  *(_QWORD*)(v7 + 168) = 0;
  *(_QWORD*)(v7 + 176) = 0;
  *(_QWORD*)(v7 + 152) = 0;
  *(_QWORD*)(v7 + 160) = 0;
  *(_QWORD*)(v7 + 136) = 0;
  *(_QWORD*)(v7 + 144) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_QWORD*)(v7 + 128) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 88) = 0;
  *(_QWORD*)(v7 + 96) = 0;
  strcpy((char*)(v7 + 8), "(CharaTransparentPass");
  *(_QWORD*)(v7 + 256) = GameData_1fc8ab0;
  *(_QWORD*)(v7 + 264) = a1;
  *(_BYTE*)(v7 + 84) = 1;
  *(_QWORD*)(v7 + 288) = v7 + 256;
  *(_QWORD*)v7 = GameData_1fc8b40;
  *(_QWORD*)(v7 + 208) = GameData_1fc8a20;
  *(_QWORD*)(v7 + 240) = v7 + 208;
  v8 = v48_.v50;
  *(_QWORD*)(v7 + 216) = v48_.v49;
  *(_QWORD*)(v7 + 224) = v8;
  v10 = *(__int64**)(a2 + 8);
  v9 = *(_QWORD*)(a2 + 16);
  if ((unsigned __int64)v10 >= v9) {
    v12 = *(_QWORD*)a2;
    v13 = (signed __int64)v10 - *(_QWORD*)a2;
    v14 = (v13 >> 3) + 1;
    if (v14 >> 61 != 0) {
      goto LABEL_54;
    }
    v15 = v9 - v12;
    if (v15 >> 2 > v14) {
      v14 = v15 >> 2;
    }
    if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL) {
      v16 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v16 = v14;
    }
    if (v16 != 0) {
      if (v16 >> 61 != 0) {
        goto LABEL_55;
      }
      v17 = v7;
      v18 = fw_memory_HeapManager_Allocate_alt1(*v6, 8 * v16, 16, 0);
      v7 = v17;
    }
    else {
      v18 = 0;
    }
    v19 = v18 + 8 * v16;
    v20 = v18 + v13 - 8 * (v13 >> 3);
    *(_QWORD*)(v18 + v13) = v7;
    v11 = v18 + v13 + 8;
    memcpy_alt1(v20, v12, v13);
    *(_QWORD*)a2 = v20;
    *(_QWORD*)(a2 + 8) = v11;
    *(_QWORD*)(a2 + 16) = v19;
    if (v12 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v6 + v21, v12);
    }
  }
  else {
    *v10 = v7;
    v11 = (__int64)(v10 + 1);
  }
  *(_QWORD*)(a2 + 8) = v11;
  v22 = *(_QWORD*)(v11 - 8);
  v48_.v48 = (__int64 (**)(void))a2;
  v48_.v49 = v22;
  (*(void (**)(__int64, __int64 (***)(void)))(*(_QWORD*)v22 + 16LL))(v22,
                                                                     &v48_.v48);
  v23 = *(_DWORD*)(a2 + 96);
  v24 = fw_memory_HeapManager_Allocate_alt1(*v6, 240, 16, 0);
  v25 = *v6;
  v48_.v51 = &v48_.v48;
  v48_.v48 = GameData_1fc8b88;
  v48_.v49 = a1;
  v48_.v50 = &v45;
  v46_.v46[0] = GameData_1fc8c08;
  v46_.v46[1] = a1;
  v46_.v47 = v46_.v46;
  v26 = (char*)fw_memory_HeapManager_Allocate_alt1(v25, 32, 16, 0);
  *(_DWORD*)(v24 + 80) = v23;
  *(_QWORD*)(v24 + 32) = 0;
  *(_QWORD*)(v24 + 40) = 0;
  *(_QWORD*)(v24 + 16) = 27;
  *(_QWORD*)(v24 + 24) = v26;
  *(_QWORD*)(v24 + 48) = 0;
  *(_QWORD*)(v24 + 56) = 0;
  *(_QWORD*)(v24 + 64) = 0;
  *(_QWORD*)(v24 + 72) = 0;
  *(_QWORD*)(v24 + 88) = 0;
  *(_QWORD*)(v24 + 96) = 0;
  *(_QWORD*)(v24 + 104) = 0;
  *(_QWORD*)(v24 + 112) = 0;
  *(_QWORD*)(v24 + 120) = 0;
  *(_QWORD*)(v24 + 128) = 0;
  *(_QWORD*)(v24 + 136) = 0;
  strcpy(v26, "CharaTransparentOutlinePass");
  v27 = v48_.v51;
  *(_BYTE*)(v24 + 84) = 1;
  *(_QWORD*)v24 = GameData_1fc8708;
  *(_QWORD*)(v24 + 8) = 33;
  if (v27 == nullptr) {
    *(_QWORD*)(v24 + 176) = 0;
    v28 = v46_.v47;
    if (v46_.v47 != nullptr) {
      goto LABEL_22;
    }
    goto LABEL_25;
  }
  if (v27 == &v48_.v48) {
    *(_QWORD*)(v24 + 176) = v24 + 144;
    ((void (*)(__int64 (***)(void)))(*v27)[3])(v27);
    v28 = v46_.v47;
    if (v46_.v47 != nullptr) {
      goto LABEL_22;
    }
  LABEL_25:
    *(_QWORD*)(v24 + 224) = 0;
    goto LABEL_32;
  }
  *(_QWORD*)(v24 + 176) = ((__int64 (*)(__int64 (***)(void)))(*v27)[2])(v27);
  v28 = v46_.v47;
  if (v46_.v47 == nullptr) {
    goto LABEL_25;
  }
LABEL_22:
  if (v28 == v46_.v46) {
    *(_QWORD*)(v24 + 224) = v24 + 192;
    (*(void (**)(_QWORD*))(*v28 + 24LL))(v28);
  }
  else {
    *(_QWORD*)(v24 + 224) = (*(__int64 (**)(_QWORD*))(*v28 + 16LL))(v28);
  }
  if (v46_.v47 == v46_.v46) {
    v29 = 32;
  }
  else {
    if (v46_.v47 == nullptr) {
      goto LABEL_32;
    }
    v29 = 40;
  }
  (*(void (**)(__int64))(*v46_.v47 + v29))((__int64)v46_.v47);
LABEL_32:
  if (v48_.v51 == &v48_.v48) {
    v30 = 4;
  }
  else {
    if (v48_.v51 == nullptr) {
      goto LABEL_37;
    }
    v30 = 5;
  }
  ((__int64 (*)(__int64))(*v48_.v51)[v30])((__int64)v48_.v51);
LABEL_37:
  v32 = *(__int64**)(a2 + 8);
  v31 = *(_QWORD*)(a2 + 16);
  if ((unsigned __int64)v32 < v31) {
    *v32 = v24;
    v33 = (__int64)(v32 + 1);
    goto LABEL_53;
  }
  v34 = *(_QWORD*)a2;
  v35 = (signed __int64)v32 - *(_QWORD*)a2;
  v36 = (v35 >> 3) + 1;
  if (v36 >> 61 != 0) {
  LABEL_54:
    GameRoutine_b32f30_alt1();
  }
  v37 = v31 - v34;
  if (v37 >> 2 > v36) {
    v36 = v37 >> 2;
  }
  if ((unsigned __int64)v37 >= 0x7FFFFFFFFFFFFFF8LL) {
    v38 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v38 = v36;
  }
  if (v38 != 0) {
    if (v38 >> 61 == 0) {
      v39 = fw_memory_HeapManager_Allocate_alt1(*v6, 8 * v38, 16, 0);
      goto LABEL_49;
    }
  LABEL_55:
    GameRoutine_60a210_alt1();
  }
  v39 = 0;
LABEL_49:
  v40 = v39 + 8 * v38;
  v41 = v39 + v35 - 8 * (v35 >> 3);
  *(_QWORD*)(v39 + v35) = v24;
  v33 = v39 + v35 + 8;
  memcpy_alt1(v41, v34, v35);
  *(_QWORD*)a2 = v41;
  *(_QWORD*)(a2 + 8) = v33;
  *(_QWORD*)(a2 + 16) = v40;
  if (v34 != 0) {
    v42 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v42 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v6 + v42, v34);
  }
LABEL_53:
  *(_QWORD*)(a2 + 8) = v33;
  v43 = *(_QWORD*)(v33 - 8);
  v48_.v48 = (__int64 (**)(void))a2;
  v48_.v49 = v43;
  return (*(__int64 (**)(__int64, __int64 (***)(void)))(*(_QWORD*)v43 + 16LL))(
      v43, &v48_.v48);
}

__int64 gfxa_MainPassChara_SetupPostOutlinePass(__int64 result, __int64 a2,
                                                _QWORD* a3, __int64* a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64* v12;
  __int64 v13;
  _QWORD** v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  signed __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  struct {
    __int64 (**v29)();
    __int64 v30;
    _QWORD** v31;
    char gap24_[8];
    __int64 (***v32)();
  } v29_;
  _QWORD* v33;

  v4 = *a4;
  v33 = a3;
  v5 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 216LL);
  v6 = 608;
  if (*(_BYTE*)(v5 + 576) != 0) {
    v6 = 572;
  }
  if (*(_DWORD*)(v5 + v6) != 0) {
    v8 = *(_QWORD*)a2;
    v7 = *(_QWORD*)(a2 + 8);
    v9 = *(_DWORD*)(a2 + 96);
    v10 = result;
    v12 = (__int64*)fw_memory_g_heap_manager_ptr;
    v13 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 256, 16, 0);
    *(_QWORD*)(v13 + 32) = 0;
    *(_QWORD*)(v13 + 40) = 0;
    *(_QWORD*)(v13 + 48) = 0;
    *(_QWORD*)(v13 + 56) = 0;
    *(_QWORD*)(v13 + 64) = 0;
    *(_QWORD*)(v13 + 72) = 0;
    *(_DWORD*)(v13 + 80) = v9;
    *(_QWORD*)(v13 + 144) = 0;
    *(_QWORD*)(v13 + 152) = 0;
    v29_.v31 = &v33;
    v29_.v29 = GameData_1fc8df0;
    v29_.v30 = v10;
    v29_.v32 = &v29_.v29;
    *(_QWORD*)(v13 + 128) = 0;
    *(_QWORD*)(v13 + 136) = 0;
    *(_QWORD*)(v13 + 112) = 0;
    *(_QWORD*)(v13 + 120) = 0;
    *(_QWORD*)(v13 + 96) = 0;
    *(_QWORD*)(v13 + 104) = 0;
    *(_QWORD*)(v13 + 88) = 0;
    *(_QWORD*)(v13 + 216) = v10;
    strcpy((char*)(v13 + 8), "(PostCharaOutlinePass");
    *(_BYTE*)(v13 + 84) = 1;
    *(_QWORD*)(v13 + 208) = GameData_1fc8e80;
    *(_QWORD*)v13 = GameData_1fc8f10;
    *(_QWORD*)(v13 + 160) = GameData_1fc8df0;
    *(_QWORD*)(v13 + 240) = v13 + 208;
    *(_QWORD*)(v13 + 192) = v13 + 160;
    v14 = v29_.v31;
    *(_QWORD*)(v13 + 168) = v29_.v30;
    *(_QWORD*)(v13 + 176) = v14;
    v16 = *(__int64**)(a2 + 8);
    v15 = *(_QWORD*)(a2 + 16);
    if ((unsigned __int64)v16 >= v15) {
      v18 = *(_QWORD*)a2;
      v19 = (signed __int64)v16 - *(_QWORD*)a2;
      v20 = (v19 >> 3) + 1;
      if (v20 >> 61 != 0) {
        GameRoutine_b32f30_alt1();
      }
      v21 = v15 - v18;
      if (v21 >> 2 > v20) {
        v20 = v21 >> 2;
      }
      if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF8LL) {
        v22 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v22 = v20;
      }
      if (v22 != 0) {
        if (v22 >> 61 != 0) {
          GameRoutine_60a210_alt1();
        }
        v23 = v13;
        v24 = fw_memory_HeapManager_Allocate_alt1(*v12, 8 * v22, 16, 0);
        v13 = v23;
      }
      else {
        v24 = 0;
      }
      v25 = v24 + 8 * v22;
      v26 = v24 + v19 - 8 * (v19 >> 3);
      *(_QWORD*)(v24 + v19) = v13;
      v17 = v24 + v19 + 8;
      memcpy_alt1(v26, v18, v19);
      *(_QWORD*)a2 = v26;
      *(_QWORD*)(a2 + 8) = v17;
      *(_QWORD*)(a2 + 16) = v25;
      if (v18 != 0) {
        v27 = 128;
        if (*(_QWORD*)(*v12 + 200) == 0) {
          v27 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v12 + v27, v18);
      }
    }
    else {
      *v16 = v13;
      v17 = (__int64)(v16 + 1);
    }
    *(_QWORD*)(a2 + 8) = v17;
    v28 = *(_QWORD*)(v17 - 8);
    v29_.v29 = (__int64 (**)(void))a2;
    v29_.v30 = v28;
    result = (*(__int64 (**)(__int64, __int64 (***)(void)))(
        *(_QWORD*)v28 + 16LL))(v28, &v29_.v29);
    *v33 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v7 - v8) & 0x7FFFFFFF8LL)) +
                      144LL);
  }
  return result;
}

__int64 gfxa_MainPassChara_SetupDiffusionPass(__int64 result, __int64 a2,
                                              _QWORD* a3, __int64* a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64* v12;
  __int64 v13;
  _QWORD** v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  signed __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  struct {
    __int64 (**v29)();
    __int64 v30;
    _QWORD** v31;
    char gap24_[8];
    __int64 (***v32)();
  } v29_;
  _QWORD* v33;

  v4 = *a4;
  v33 = a3;
  v5 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 144LL);
  v6 = 208;
  if (*(_BYTE*)(v5 + 176) != 0) {
    v6 = 172;
  }
  if (*(float*)(v5 + v6) > 0x0.0p+0f) {
    v8 = *(_QWORD*)a2;
    v7 = *(_QWORD*)(a2 + 8);
    v9 = *(_DWORD*)(a2 + 96);
    v10 = result;
    v12 = (__int64*)fw_memory_g_heap_manager_ptr;
    v13 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 240, 16, 0);
    *(_QWORD*)(v13 + 32) = 0;
    *(_QWORD*)(v13 + 40) = 0;
    *(_QWORD*)(v13 + 48) = 0;
    *(_QWORD*)(v13 + 56) = 0;
    *(_QWORD*)(v13 + 64) = 0;
    *(_QWORD*)(v13 + 72) = 0;
    *(_DWORD*)(v13 + 80) = v9;
    *(_QWORD*)(v13 + 120) = 0;
    *(_QWORD*)(v13 + 128) = 0;
    v29_.v31 = &v33;
    v29_.v29 = GameData_1fc8f58;
    v29_.v30 = v10;
    v29_.v32 = &v29_.v29;
    *(_QWORD*)(v13 + 104) = 0;
    *(_QWORD*)(v13 + 112) = 0;
    *(_QWORD*)(v13 + 88) = 0;
    *(_QWORD*)(v13 + 96) = 0;
    *(_QWORD*)(v13 + 200) = v10;
    strcpy((char*)(v13 + 8), "$CharaDiffusionPass");
    *(_BYTE*)(v13 + 84) = 1;
    *(_QWORD*)(v13 + 192) = GameData_1fc8fe8;
    *(_QWORD*)v13 = GameData_1fc9078;
    *(_QWORD*)(v13 + 144) = GameData_1fc8f58;
    *(_QWORD*)(v13 + 224) = v13 + 192;
    *(_QWORD*)(v13 + 176) = v13 + 144;
    v14 = v29_.v31;
    *(_QWORD*)(v13 + 152) = v29_.v30;
    *(_QWORD*)(v13 + 160) = v14;
    v16 = *(__int64**)(a2 + 8);
    v15 = *(_QWORD*)(a2 + 16);
    if ((unsigned __int64)v16 >= v15) {
      v18 = *(_QWORD*)a2;
      v19 = (signed __int64)v16 - *(_QWORD*)a2;
      v20 = (v19 >> 3) + 1;
      if (v20 >> 61 != 0) {
        GameRoutine_b32f30_alt1();
      }
      v21 = v15 - v18;
      if (v21 >> 2 > v20) {
        v20 = v21 >> 2;
      }
      if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF8LL) {
        v22 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v22 = v20;
      }
      if (v22 != 0) {
        if (v22 >> 61 != 0) {
          GameRoutine_60a210_alt1();
        }
        v23 = v13;
        v24 = fw_memory_HeapManager_Allocate_alt1(*v12, 8 * v22, 16, 0);
        v13 = v23;
      }
      else {
        v24 = 0;
      }
      v25 = v24 + 8 * v22;
      v26 = v24 + v19 - 8 * (v19 >> 3);
      *(_QWORD*)(v24 + v19) = v13;
      v17 = v24 + v19 + 8;
      memcpy_alt1(v26, v18, v19);
      *(_QWORD*)a2 = v26;
      *(_QWORD*)(a2 + 8) = v17;
      *(_QWORD*)(a2 + 16) = v25;
      if (v18 != 0) {
        v27 = 128;
        if (*(_QWORD*)(*v12 + 200) == 0) {
          v27 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v12 + v27, v18);
      }
    }
    else {
      *v16 = v13;
      v17 = (__int64)(v16 + 1);
    }
    *(_QWORD*)(a2 + 8) = v17;
    v28 = *(_QWORD*)(v17 - 8);
    v29_.v29 = (__int64 (**)(void))a2;
    v29_.v30 = v28;
    result = (*(__int64 (**)(__int64, __int64 (***)(void)))(
        *(_QWORD*)v28 + 16LL))(v28, &v29_.v29);
    *v33 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v7 - v8) & 0x7FFFFFFF8LL)) +
                      128LL);
  }
  return result;
}

__int64 MainPassChara_b8ac30(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 v3;
  __int64 v4;
  int v7;
  __int64* v8;
  __int64 v9;
  _QWORD** v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  signed __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 result;
  struct {
    __int64 (**v26)();
    __int64 v27;
    _QWORD** v28;
    char gap24_[8];
    __int64 (***v29)();
  } v26_;
  _QWORD* v30;

  v30 = a3;
  v4 = *(_QWORD*)a2;
  v3 = *(_QWORD*)(a2 + 8);
  v7 = *(_DWORD*)(a2 + 96);
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 240, 16, 0);
  *(_QWORD*)(v9 + 32) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_DWORD*)(v9 + 80) = v7;
  *(_QWORD*)(v9 + 128) = 0;
  *(_QWORD*)(v9 + 136) = 0;
  *(_QWORD*)(v9 + 112) = 0;
  *(_QWORD*)(v9 + 120) = 0;
  *(_QWORD*)(v9 + 96) = 0;
  *(_QWORD*)(v9 + 104) = 0;
  v26_.v27 = a1;
  v26_.v28 = &v30;
  v26_.v29 = &v26_.v26;
  strcpy((char*)(v9 + 8), "*PostCharaRimlightPass");
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)(v9 + 200) = a1;
  *(_BYTE*)(v9 + 84) = 1;
  v26_.v26 = GameData_1fc90c0;
  *(_QWORD*)(v9 + 192) = GameData_1fc9150;
  *(_QWORD*)v9 = GameData_1fc91e0;
  *(_QWORD*)(v9 + 144) = GameData_1fc90c0;
  *(_QWORD*)(v9 + 224) = v9 + 192;
  *(_QWORD*)(v9 + 176) = v9 + 144;
  v10 = v26_.v28;
  *(_QWORD*)(v9 + 152) = v26_.v27;
  *(_QWORD*)(v9 + 160) = v10;
  v12 = *(__int64**)(a2 + 8);
  v11 = *(_QWORD*)(a2 + 16);
  if ((unsigned __int64)v12 >= v11) {
    v14 = *(_QWORD*)a2;
    v15 = (signed __int64)v12 - *(_QWORD*)a2;
    v16 = (v15 >> 3) + 1;
    if (v16 >> 61 != 0) {
      GameRoutine_b32f30_alt1();
    }
    v17 = v11 - v14;
    if (v17 >> 2 > v16) {
      v16 = v17 >> 2;
    }
    if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF8LL) {
      v18 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v18 = v16;
    }
    if (v18 != 0) {
      if (v18 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v19 = v9;
      v20 = fw_memory_HeapManager_Allocate_alt1(*v8, 8 * v18, 16, 0);
      v9 = v19;
    }
    else {
      v20 = 0;
    }
    v21 = v20 + 8 * v18;
    v22 = v20 + v15 - 8 * (v15 >> 3);
    *(_QWORD*)(v20 + v15) = v9;
    v13 = v20 + v15 + 8;
    memcpy_alt1(v22, v14, v15);
    *(_QWORD*)a2 = v22;
    *(_QWORD*)(a2 + 8) = v13;
    *(_QWORD*)(a2 + 16) = v21;
    if (v14 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*v8 + 200) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v8 + v23, v14);
    }
  }
  else {
    *v12 = v9;
    v13 = (__int64)(v12 + 1);
  }
  *(_QWORD*)(a2 + 8) = v13;
  v24 = *(_QWORD*)(v13 - 8);
  v26_.v26 = (__int64 (**)(void))a2;
  v26_.v27 = v24;
  result = (*(__int64 (**)(__int64, __int64 (***)(void)))(
      *(_QWORD*)v24 + 16LL))(v24, &v26_.v26);
  *v30 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v3 - v4) & 0x7FFFFFFF8LL)) +
                    136LL);
  return result;
}

__int64 gfxa_MainPassChara_SetupSilhouettePass(__int64 result, __int64 a2,
                                               _QWORD* a3, __int64* a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64* v12;
  __int64 v13;
  _QWORD** v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  signed __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  struct {
    __int64 (**v29)();
    __int64 v30;
    _QWORD** v31;
    char gap24_[8];
    __int64 (***v32)();
  } v29_;
  _QWORD* v33;

  v4 = *a4;
  v33 = a3;
  v5 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 232LL);
  v6 = 2216;
  if (*(_BYTE*)(v5 + 2184) != 0) {
    v6 = 2180;
  }
  if (*(float*)(v5 + v6) > 0x0.0p+0f) {
    v8 = *(_QWORD*)a2;
    v7 = *(_QWORD*)(a2 + 8);
    v9 = *(_DWORD*)(a2 + 96);
    v10 = result;
    v12 = (__int64*)fw_memory_g_heap_manager_ptr;
    v13 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 224, 16, 0);
    *(_QWORD*)(v13 + 32) = 0;
    *(_QWORD*)(v13 + 40) = 0;
    *(_QWORD*)(v13 + 48) = 0;
    *(_QWORD*)(v13 + 56) = 0;
    *(_QWORD*)(v13 + 64) = 0;
    *(_QWORD*)(v13 + 72) = 0;
    *(_DWORD*)(v13 + 80) = v9;
    *(_QWORD*)(v13 + 112) = 0;
    *(_QWORD*)(v13 + 120) = 0;
    v29_.v31 = &v33;
    v29_.v29 = GameData_1fc9228;
    v29_.v30 = v10;
    v29_.v32 = &v29_.v29;
    *(_QWORD*)(v13 + 96) = 0;
    *(_QWORD*)(v13 + 104) = 0;
    *(_QWORD*)(v13 + 88) = 0;
    *(_QWORD*)(v13 + 184) = v10;
    strcpy((char*)(v13 + 8), "&CharaSilhouettePass");
    *(_BYTE*)(v13 + 84) = 1;
    *(_QWORD*)(v13 + 176) = GameData_1fc92b8;
    *(_QWORD*)v13 = GameData_1fc9348;
    *(_QWORD*)(v13 + 128) = GameData_1fc9228;
    *(_QWORD*)(v13 + 208) = v13 + 176;
    *(_QWORD*)(v13 + 160) = v13 + 128;
    v14 = v29_.v31;
    *(_QWORD*)(v13 + 136) = v29_.v30;
    *(_QWORD*)(v13 + 144) = v14;
    v16 = *(__int64**)(a2 + 8);
    v15 = *(_QWORD*)(a2 + 16);
    if ((unsigned __int64)v16 >= v15) {
      v18 = *(_QWORD*)a2;
      v19 = (signed __int64)v16 - *(_QWORD*)a2;
      v20 = (v19 >> 3) + 1;
      if (v20 >> 61 != 0) {
        GameRoutine_b32f30_alt1();
      }
      v21 = v15 - v18;
      if (v21 >> 2 > v20) {
        v20 = v21 >> 2;
      }
      if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF8LL) {
        v22 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v22 = v20;
      }
      if (v22 != 0) {
        if (v22 >> 61 != 0) {
          GameRoutine_60a210_alt1();
        }
        v23 = v13;
        v24 = fw_memory_HeapManager_Allocate_alt1(*v12, 8 * v22, 16, 0);
        v13 = v23;
      }
      else {
        v24 = 0;
      }
      v25 = v24 + 8 * v22;
      v26 = v24 + v19 - 8 * (v19 >> 3);
      *(_QWORD*)(v24 + v19) = v13;
      v17 = v24 + v19 + 8;
      memcpy_alt1(v26, v18, v19);
      *(_QWORD*)a2 = v26;
      *(_QWORD*)(a2 + 8) = v17;
      *(_QWORD*)(a2 + 16) = v25;
      if (v18 != 0) {
        v27 = 128;
        if (*(_QWORD*)(*v12 + 200) == 0) {
          v27 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v12 + v27, v18);
      }
    }
    else {
      *v16 = v13;
      v17 = (__int64)(v16 + 1);
    }
    *(_QWORD*)(a2 + 8) = v17;
    v28 = *(_QWORD*)(v17 - 8);
    v29_.v29 = (__int64 (**)(void))a2;
    v29_.v30 = v28;
    result = (*(__int64 (**)(__int64, __int64 (***)(void)))(
        *(_QWORD*)v28 + 16LL))(v28, &v29_.v29);
    *v33 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v7 - v8) & 0x7FFFFFFF8LL)) +
                      120LL);
  }
  return result;
}

__int64 gfxa_MainPassChara_SetupSceneBuffersPass(__int64 a1, __int64* a2,
                                                 __int64 a3, __int64 a4,
                                                 __int64 a5)
{
  int v5;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v31;
  struct {
    _QWORD v32[4];
    _QWORD* v33;
  } v32_;
  struct {
    _QWORD v34[4];
    _QWORD* v35;
  } v34_;

  v31 = a3;
  v5 = *((_DWORD*)a2 + 24);
  v9 = (__int64*)fw_memory_g_heap_manager_ptr;
  v10 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 400, 16, 0);
  v11 = *v9;
  v34_.v34[2] = a5;
  v32_.v32[2] = a5;
  v34_.v34[0] = GameData_1fc9390;
  v34_.v34[1] = &v31;
  v34_.v35 = v34_.v34;
  v32_.v32[0] = GameData_1fc9420;
  v32_.v32[1] = a1;
  v32_.v33 = v32_.v32;
  v12 = (char*)fw_memory_HeapManager_Allocate_alt1(v11, 32, 16, 0);
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
  v13 = v34_.v35;
  *(_BYTE*)(v10 + 84) = 1;
  *(_QWORD*)v10 = GameData_1fc94b0;
  *(_QWORD*)(v10 + 8) = 33;
  if (v13 == nullptr) {
    *(_QWORD*)(v10 + 336) = 0;
    v14 = v32_.v33;
    if (v32_.v33 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_9;
  }
  if (v13 == v34_.v34) {
    *(_QWORD*)(v10 + 336) = v10 + 304;
    (*(void (**)(_QWORD*))(*v13 + 24LL))(v13);
    v14 = v32_.v33;
    if (v32_.v33 != nullptr) {
      goto LABEL_6;
    }
  LABEL_9:
    *(_QWORD*)(v10 + 384) = 0;
    goto LABEL_16;
  }
  *(_QWORD*)(v10 + 336) = (*(__int64 (**)(_QWORD*))(*v13 + 16LL))(v13);
  v14 = v32_.v33;
  if (v32_.v33 == nullptr) {
    goto LABEL_9;
  }
LABEL_6:
  if (v14 == v32_.v32) {
    *(_QWORD*)(v10 + 384) = v10 + 352;
    (*(void (**)(_QWORD*))(*v14 + 24LL))(v14);
  }
  else {
    *(_QWORD*)(v10 + 384) = (*(__int64 (**)(_QWORD*))(*v14 + 16LL))(v14);
  }
  if (v32_.v33 == v32_.v32) {
    v15 = 32;
  }
  else {
    if (v32_.v33 == nullptr) {
      goto LABEL_16;
    }
    v15 = 40;
  }
  (*(void (**)(__int64))(*v32_.v33 + v15))((__int64)v32_.v33);
LABEL_16:
  if (v34_.v35 == v34_.v34) {
    v16 = 32;
  }
  else {
    if (v34_.v35 == nullptr) {
      goto LABEL_21;
    }
    v16 = 40;
  }
  (*(void (**)(__int64))(*v34_.v35 + v16))((__int64)v34_.v35);
LABEL_21:
  v18 = (__int64*)a2[1];
  v17 = a2[2];
  if ((unsigned __int64)v18 >= v17) {
    v20 = *a2;
    v21 = (__int64)v18 - *a2;
    v22 = (v21 >> 3) + 1;
    if (v22 >> 61 != 0) {
      GameRoutine_b32f30_alt1();
    }
    v23 = v17 - v20;
    if (v23 >> 2 > v22) {
      v22 = v23 >> 2;
    }
    if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL) {
      v24 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v24 = v22;
    }
    if (v24 != 0) {
      if (v24 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v25 = fw_memory_HeapManager_Allocate_alt1(*v9, 8 * v24, 16, 0);
    }
    else {
      v25 = 0;
    }
    v26 = v25 + 8 * v24;
    v27 = v25 + v21 - 8 * (v21 >> 3);
    *(_QWORD*)(v25 + v21) = v10;
    v19 = v25 + v21 + 8;
    memcpy(v27, v20, v21);
    *a2 = v27;
    a2[1] = v19;
    a2[2] = v26;
    if (v20 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*v9 + 200) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v9 + v28, v20);
    }
  }
  else {
    *v18 = v10;
    v19 = (__int64)(v18 + 1);
  }
  a2[1] = v19;
  v29 = *(_QWORD*)(v19 - 8);
  v34_.v34[0] = a2;
  v34_.v34[1] = v29;
  return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v29 + 16LL))(v29,
                                                                   v34_.v34);
}

__int64 gfxa_MainPassChara_SetupOutlinePass_lambda1_Invoke(__int64 a1,
                                                           __int64 a2,
                                                           __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int8x16_t* v11;
  _QWORD* v12;
  _QWORD* v13;
  bool v14;
  int v15;
  unsigned __int64 v16;
  __int64 v17;
  int8x16_t v18;
  struct {
    __int64 v20;
    bool v21;
    char v22;
    char gap10_[6];
    __int64 v23;
    int v24;
  } v20_;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(a2 + 24);
  v20_.v22 = 0;
  v20_.v20 = *(_QWORD*)(v3 + 24);
  v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v4 + 8LL) + 216LL);
  v8 = 608;
  if (*(_BYTE*)(v7 + 576) != 0) {
    v8 = 572;
  }
  v20_.v21 = *(_DWORD*)(v7 + v8) != 1;
  v9 = GameRoutine_ad6000((__int64)"CharaOutline", 0xCu);
  v10 = v3 + 128;
  v11 = *(int8x16_t**)(v3 + 80);
  v20_.v24 = v9;
  v13 = *(_QWORD**)a2;
  v12 = *(_QWORD**)(a2 + 8);
  v20_.v23 = v10;
  LODWORD(v10) = LANES128(v11[1]).n128_u32[2];
  v14 = (int)v10 < -1;
  v15 = ((_BYTE)v10 + 1) & 1;
  if (v14) {
    v15 = -v15;
  }
  LANES128(v11[1]).n128_u32[2] = v15;
  v16 = LANES128(*(v11)).n128_u64[v15 + 1];
  v17 = (*(__int64 (**)(unsigned __int64))(*(_QWORD*)v16 + 56LL))(v16);
  v18 = v11[4];
  *(_QWORD*)v17 = LANES128(v18).n128_u64[0];
  *(_QWORD*)(v17 + 8) = LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0];
  *(_DWORD*)(v17 + 16) = LANES128(v11[5]).n128_u32[0];
  *(_DWORD*)(v17 + 20) = LANES128(v11[5]).n128_u32[1];
  (*(void (**)(unsigned __int64))(*(_QWORD*)v16 + 64LL))(v16);
  return ResourceBuilder_b52130((int*)v11, v13, v12, a3, (__int64)&v20_.v20);
}

__int64 gfxa_MainPassChara_SetupMainPass_lambda3_Invoke(__int64 a1, __int64 a2,
                                                        __int64* a3)
{

#pragma clang fp contract(off)
  _QWORD* v3;
  _BYTE* v4;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  int8x16_t* v15;
  int8x16_t v16;
  int8x16_t v17;
  unsigned int v18;
  __int64* v19;
  int8x16_t v20;
  _QWORD* v21;
  _QWORD* v22;
  unsigned int v23;
  int8x16_t v24;
  char v25;
  _DWORD* v26;
  struct {
    _QWORD v28[4];
    bool v29;
    char v30;
    char gap34_[14];
    int8x16_t v31;
    __int64 v32;
    __int64 v33;
  } v28_;

  v3 = *(_QWORD**)(a1 + 8);
  v4 = *(_BYTE**)(a2 + 24);
  v28_.v28[0] = v3[3];
  v8 = (_QWORD*)(*v3 + 13304LL);
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v8 = (_QWORD*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v28_.v28[1] = *v8;
  v9 = v3[10] + 8LL;
  v28_.v28[2] = v3 + 16;
  v28_.v28[3] = v9;
  v10 = *(_QWORD*)(*(_QWORD*)v4 + 8LL);
  v11 = *(_QWORD*)(v10 + 232);
  v12 = 2216;
  if (*(_BYTE*)(v11 + 2184) != 0) {
    v12 = 2180;
  }
  v28_.v29 = *(float*)(v11 + v12) > 0x0.0p+0f;
  v28_.v32 = *(_QWORD*)(v10 + 8);
  v13 = v3[1];
  v14 = GameRoutine_b3f6c0((_QWORD*)(*(_QWORD*)(v13 + 288) + 592LL),
                           (__int64)"Sun");
  v16 = *((int8x16_t*)v14 + 3);
  v15 = (int8x16_t*)(v14 + 6);
  v17 = v16;
  if (LANES128(v15[4]).n128_u8[0] != 0) {
    v18 = -1;
  }
  else {
    v18 = 0;
  }
  if (LANES128_OF(vbslq_s8(vdupq_n_s32(v18), v15[3], v17)).n128_f32[1] >
      0x0.0p+0f) {
    v19 = GameRoutine_b3f800((_QWORD*)(*(_QWORD*)(v13 + 288) + 592LL),
                             (__int64)"Moon");
    v20 = *((int8x16_t*)v19 + 3);
    v15 = (int8x16_t*)(v19 + 6);
    v17 = v20;
  }
  v21 = *(_QWORD**)a2;
  v22 = *(_QWORD**)(a2 + 8);
  if (LANES128(v15[4]).n128_u8[0] != 0) {
    v23 = -1;
  }
  else {
    v23 = 0;
  }
  v24 = vbslq_s8(vdupq_n_s32(v23), v15[3], v17);
  v28_.v33 = *(_QWORD*)(a1 + 16);
  v25 = v4[118];
  v26 = (_DWORD*)v3[8];
  v28_.v31 = v24;
  v28_.v30 = v25;
  return GameRoutine_b4fad0(v26, v21, v22, a3, (__int64)v28_.v28);
}

__int64 gfxa_MainPassChara_SetupTransparentPass_lambda3_Invoke(__int64 a1,
                                                               __int64 a2,
                                                               __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  int8x16_t* v12;
  bool v13;
  int v14;
  unsigned __int64 v15;
  __int64 v16;
  int8x16_t v17;
  struct {
    __int64 v19;
    bool v20;
    char v21;
    char gap10_[6];
    __int64 v22;
    int v23;
  } v19_;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(a2 + 24);
  v19_.v19 = *(_QWORD*)(v3 + 24);
  v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v4 + 8LL) + 216LL);
  v8 = 608;
  if (*(_BYTE*)(v7 + 576) != 0) {
    v8 = 572;
  }
  v19_.v20 = *(_DWORD*)(v7 + v8) != 1;
  v19_.v23 = GameRoutine_ad6000((__int64)"CharaTransparentOutline", 0x17u);
  v10 = *(_QWORD**)a2;
  v9 = *(_QWORD**)(a2 + 8);
  v19_.v21 = 1;
  v11 = v3 + 128;
  v12 = *(int8x16_t**)(v3 + 80);
  v19_.v22 = v11;
  LODWORD(v11) = LANES128(v12[1]).n128_u32[2];
  v13 = (int)v11 < -1;
  v14 = ((_BYTE)v11 + 1) & 1;
  if (v13) {
    v14 = -v14;
  }
  LANES128(v12[1]).n128_u32[2] = v14;
  v15 = LANES128(*(v12)).n128_u64[v14 + 1];
  v16 = (*(__int64 (**)(unsigned __int64))(*(_QWORD*)v15 + 56LL))(v15);
  v17 = v12[4];
  *(_QWORD*)v16 = LANES128(v17).n128_u64[0];
  *(_QWORD*)(v16 + 8) = LANES128_OF(vextq_s8(v17, v17, 8u)).n128_u64[0];
  *(_DWORD*)(v16 + 16) = LANES128(v12[5]).n128_u32[0];
  *(_DWORD*)(v16 + 20) = LANES128(v12[5]).n128_u32[1];
  (*(void (**)(unsigned __int64))(*(_QWORD*)v15 + 64LL))(v15);
  return ResourceBuilder_b52130((int*)v12, v10, v9, a3, (__int64)&v19_.v19);
}

__int64 gfxa_MainPassChara_SetupSceneBuffersPass_lambda1_Invoke(__int64 a1,
                                                                __int64 a2)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  __int64 v3;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  int8x16_t* v14;
  int8x16_t v15;
  int8x16_t v16;
  unsigned int v17;
  __int64* v18;
  int8x16_t v19;
  int8x16_t v20;
  __int64 v21;
  unsigned int v22;
  _QWORD* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int128 v27;
  __int64 v28;
  _QWORD* v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  struct {
    int8x16_t v38;
    __int64 v39;
    int v40;
    char gap28_[4];
    __int64 v41;
    int v42;
    char gap44_[4];
    __int64 v43;
    char gap56_[8];
    int8x16_t v44;
    __int128 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
  } v38_;

  v2 = *(_QWORD**)(a2 + 24);
  v3 = *(_QWORD*)(a1 + 8);
  v6 = *(_QWORD*)(v3 + 8);
  LANES128(v38_.v38).n128_u64[0] = v2[6];
  LANES128(v38_.v38).n128_u32[2] = *((_DWORD*)v2 + 14);
  v38_.v39 = v2[8];
  v38_.v40 = *((_DWORD*)v2 + 18);
  v7 = *(_QWORD**)(*v2 + 8LL);
  v38_.v43 = v2[1];
  v8 = *(_QWORD*)(v6 + 288);
  v9 = v7[27];
  v10 = v7[28];
  v11 = v7[2];
  v38_.v47 = v9;
  v38_.v48 = v10;
  v12 = *(_QWORD*)(v8 + 1008);
  v38_.v53 = v11;
  v38_.v41 = v12;
  v38_.v42 = *(_DWORD*)(v8 + 1016);
  v13 = GameRoutine_b3f6c0((_QWORD*)(v8 + 592), (__int64)"Sun");
  v15 = *((int8x16_t*)v13 + 3);
  v14 = (int8x16_t*)(v13 + 6);
  v16 = v15;
  if (LANES128(v14[4]).n128_u8[0] != 0) {
    v17 = -1;
  }
  else {
    v17 = 0;
  }
  if (LANES128_OF(vbslq_s8(vdupq_n_s32(v17), v14[3], v16)).n128_f32[1] >
      0x0.0p+0f) {
    v18 = GameRoutine_b3f800((_QWORD*)(*(_QWORD*)(v6 + 288) + 592LL),
                             (__int64)"Moon");
    v19 = *((int8x16_t*)v18 + 3);
    v14 = (int8x16_t*)(v18 + 6);
    v16 = v19;
  }
  v20 = v14[3];
  v21 = *(_QWORD*)(v3 + 8);
  if (LANES128(v14[4]).n128_u8[0] != 0) {
    v22 = -1;
  }
  else {
    v22 = 0;
  }
  v23 = (_QWORD*)(*(_QWORD*)(v21 + 288) + 592LL);
  v38_.v44 = vbslq_s8(vdupq_n_s32(v22), v20, v16);
  v24 = GameRoutine_b3f6c0(v23, (__int64)"Sun");
  v25 = 6;
  if (*((_BYTE*)v24 + 112) != 0) {
    v25 = 12;
  }
  if (*((float*)&v24[v25] + 1) > 0x0.0p+0f) {
    v24 = GameRoutine_b3f800((_QWORD*)(*(_QWORD*)(v21 + 288) + 592LL),
                             (__int64)"Moon");
  }
  v26 = *(_QWORD*)(a1 + 16);
  v27 = *((_OWORD*)v24 + 4);
  v28 = *(_QWORD*)(v3 + 120);
  v29 = *(_QWORD**)a2;
  v30 = *(__int64**)(*v2 + 8LL);
  v38_.v54 = v2[5];
  v31 = *(_QWORD*)(v3 + 8);
  v38_.v46 = v26;
  v38_.v45 = v27;
  v33 = *v30;
  v32 = v30[1];
  v34 = v30[10];
  v35 = v30[11];
  v36 = *(_QWORD*)(v31 + 288);
  v38_.v49 = v32;
  v38_.v50 = v33;
  v38_.v51 = v34;
  v38_.v52 = v35;
  v38_.v55 = v36;
  return TaskCharaSceneBuffers_bfcea0(v28, v29, &v38_.v38);
}

#pragma GCC visibility pop
