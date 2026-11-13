#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void std___1_to_string_1a0a790(PSEUDO_X8, _QWORD);
__int64 GameRoutine_1a0a680(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b509c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b97a20(_QWORD, _QWORD);
__int64 ResourceBuilder_b53170(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 TaskPassNodes_b978e0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_b32f50(void);
__int64 gfxa_MainPassGeneral_SetupPrePass_lambda0_Invoke(__int64 a1, __int64 a2,
                                                         __int64* a3);
__int64 ResourceBuilder_b7b290(_QWORD*, __int64, _QWORD*);
__int64 ResourceBuilder_b7b380(__int64*, __int64*, __int64);
__int64 gfxa_TaskGBuffer_Execute(_QWORD*, _QWORD*, __int64*, __int64);
__int64 gfxa_MainPassGeneral_SetupGeometryPass_lambda3_Invoke(__int64 a1,
                                                              __int64 a2,
                                                              __int64* a3);
__int64 gfxa_MainPassGeneral_SetupForwardPass_lambda2_Invoke(_QWORD* a1,
                                                             _QWORD** a2,
                                                             __int64* a3);
__int64 gfxa_MainPassGeneral_SetupForwardPass_lambda4_Invoke(__int64 a1,
                                                             __int64 a2,
                                                             __int64* a3);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
extern __int64 (*GameData_1fca2d0[])();
extern __int64 (*GameData_1fca360[])();
extern __int64 (*GameData_1fca3f0[])();
extern __int64 (*GameData_1fca5a0[])();
extern __int64 (*GameData_1fca630[])();
extern __int64 (*GameData_1fca6c0[])();
extern __int64 (*GameData_1fca708[])();
extern __int64 (*GameData_1fca788[])();
extern __int64 (*GameData_1fca808[])();
extern __int64 (*GameData_1fca898[])();
extern __int64 (*GameData_1fca928[])();
extern __int64 (*GameData_1fca970[])();
extern __int64 (*GameData_1fcaa00[])();
extern __int64 (*GameData_1fcaa90[])();
extern __int64 (*GameData_1fcaad8[])();
extern __int64 (*GameData_1fcab68[])();
extern __int64 (*GameData_1fcabf8[])();
extern __int64 (*GameData_1fcac40[])();
extern __int64 (*GameData_1fcacc0[])();
extern __int64 (*GameData_1fcad40[])();
extern __int64 (*GameData_1fcae20[])();
extern __int64 (*GameData_1fcaeb0[])();
extern __int64 (*GameData_1fcaef8[])();
extern __int64 (*GameData_1fcaf88[])();
extern __int64 (*GameData_1fcb018[])();
extern __int64 (*GameData_1fcb060[])();
extern __int64 (*GameData_1fcb0f0[])();
extern __int64 (*GameData_1fcb180[])();
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_b32f30();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 gfxa_MainPassGeneral_SetupLightCullingPass(__int64 a1, __int64 a2,
                                                   __int64 a3);
__int64 gfxa_MainPassGeneral_SetupGeometryPass(__int64 a1, __int64 a2,
                                               __int64 a3);
__int64 gfxa_MainPassGeneral_SetupSkyPass(__int64 a1, __int64 a2, _QWORD* a3);
__int64 gfxa_MainPassGeneral_SetupForwardPass(_QWORD* a1, __int64 a2,
                                              _QWORD* a3, __int64 a4);
__int64 MainPassGeneral_b96ec0(__int64 result, __int64 a2, __int64 a3,
                               __int64 a4);

__int64 gfxa_MainPassGeneral_SetupLightCullingPass(__int64 a1, __int64 a2,
                                                   __int64 a3)
{
  __int64 v3;
  __int64 v4;
  int v7;
  __int64* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  signed __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 result;
  _QWORD v25[2];
  __int64 v26;

  v26 = a3;
  v4 = *(_QWORD*)a2;
  v3 = *(_QWORD*)(a2 + 8);
  v7 = *(_DWORD*)(a2 + 96);
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 240, 16, 0);
  *(_DWORD*)(v9 + 80) = v7;
  *(_QWORD*)(v9 + 32) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)(v9 + 96) = 0;
  *(_QWORD*)(v9 + 104) = 0;
  *(_QWORD*)(v9 + 112) = 0;
  *(_QWORD*)(v9 + 120) = 0;
  *(_QWORD*)(v9 + 128) = 0;
  strcpy((char*)(v9 + 8), " LightCullingPass");
  *(_BYTE*)(v9 + 84) = 1;
  *(_QWORD*)v9 = GameData_1fca3f0;
  *(_QWORD*)(v9 + 136) = 0;
  *(_QWORD*)(v9 + 200) = a1;
  *(_QWORD*)(v9 + 144) = GameData_1fca2d0;
  *(_QWORD*)(v9 + 152) = &v26;
  v11 = *(__int64**)(a2 + 8);
  v10 = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(v9 + 176) = v9 + 144;
  *(_QWORD*)(v9 + 192) = GameData_1fca360;
  *(_QWORD*)(v9 + 224) = v9 + 192;
  if ((unsigned __int64)v11 >= v10) {
    v13 = *(_QWORD*)a2;
    v14 = (signed __int64)v11 - *(_QWORD*)a2;
    v15 = (v14 >> 3) + 1;
    if (v15 >> 61 != 0) {
      GameRoutine_b32f30();
    }
    v16 = v10 - v13;
    if (v16 >> 2 > v15) {
      v15 = v16 >> 2;
    }
    if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF8LL) {
      v17 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v17 = v15;
    }
    if (v17 != 0) {
      if (v17 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v18 = v9;
      v19 = fw_memory_HeapManager_Allocate_alt1(*v8, 8 * v17, 16, 0);
      v9 = v18;
    }
    else {
      v19 = 0;
    }
    v20 = v19 + 8 * v17;
    v21 = v19 + v14 - 8 * (v14 >> 3);
    *(_QWORD*)(v19 + v14) = v9;
    v12 = v19 + v14 + 8;
    memcpy_alt1(v21, v13, v14);
    *(_QWORD*)a2 = v21;
    *(_QWORD*)(a2 + 8) = v12;
    *(_QWORD*)(a2 + 16) = v20;
    if (v13 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*v8 + 200) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v8 + v22, v13);
    }
  }
  else {
    *v11 = v9;
    v12 = (__int64)(v11 + 1);
  }
  *(_QWORD*)(a2 + 8) = v12;
  v23 = *(_QWORD*)(v12 - 8);
  v25[0] = a2;
  v25[1] = v23;
  result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v23 + 16LL))(v23, v25);
  *(_QWORD*)(v26 + 104) = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v3 - v4) & 0x7FFFFFFF8LL)) + 136LL);
  return result;
}

__int64 gfxa_MainPassGeneral_SetupGeometryPass(__int64 a1, __int64 a2,
                                               __int64 a3)
{
  int v3;
  __int64* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  signed __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  signed __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD v39[2];
  __int64 v40;

  v40 = a3;
  v3 = *(_DWORD*)(a2 + 96);
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 272, 16, 0);
  *(_DWORD*)(v7 + 80) = v3;
  *(_QWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 152) = 0;
  *(_QWORD*)(v7 + 160) = 0;
  *(_QWORD*)(v7 + 136) = 0;
  *(_QWORD*)(v7 + 144) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_QWORD*)(v7 + 128) = 0;
  strcpy((char*)(v7 + 8), "&DepthAndGBufferPass");
  *(_BYTE*)(v7 + 84) = 1;
  *(_QWORD*)v7 = GameData_1fca6c0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 88) = 0;
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 232) = a1;
  *(_QWORD*)(v7 + 176) = GameData_1fca5a0;
  *(_QWORD*)(v7 + 184) = &v40;
  *(_QWORD*)(v7 + 208) = v7 + 176;
  *(_QWORD*)(v7 + 224) = GameData_1fca630;
  v9 = *(__int64**)(a2 + 8);
  v8 = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(v7 + 256) = v7 + 224;
  if ((unsigned __int64)v9 >= v8) {
    v11 = *(_QWORD*)a2;
    v12 = (signed __int64)v9 - *(_QWORD*)a2;
    v13 = (v12 >> 3) + 1;
    if (v13 >> 61 != 0) {
      goto LABEL_34;
    }
    v14 = v8 - v11;
    if (v14 >> 2 > v13) {
      v13 = v14 >> 2;
    }
    if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v13;
    }
    if (v15 != 0) {
      if (v15 >> 61 != 0) {
        goto LABEL_35;
      }
      v16 = v7;
      v17 = fw_memory_HeapManager_Allocate_alt1(*v6, 8 * v15, 16, 0);
      v7 = v16;
    }
    else {
      v17 = 0;
    }
    v18 = v17 + 8 * v15;
    v19 = v17 + v12 - 8 * (v12 >> 3);
    *(_QWORD*)(v17 + v12) = v7;
    v10 = v17 + v12 + 8;
    memcpy_alt1(v19, v11, v12);
    *(_QWORD*)a2 = v19;
    *(_QWORD*)(a2 + 8) = v10;
    *(_QWORD*)(a2 + 16) = v18;
    if (v11 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v6 + v20, v11);
    }
  }
  else {
    *v9 = v7;
    v10 = (__int64)(v9 + 1);
  }
  *(_QWORD*)(a2 + 8) = v10;
  v21 = *(_QWORD*)(v10 - 8);
  v39[0] = a2;
  v39[1] = v21;
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v21 + 16LL))(v21, v39);
  v22 = *(_DWORD*)(a2 + 96);
  v23 = fw_memory_HeapManager_Allocate_alt1(*v6, 272, 16, 0);
  *(_DWORD*)(v23 + 80) = v22;
  *(_QWORD*)(v23 + 32) = 0;
  *(_QWORD*)(v23 + 40) = 0;
  *(_QWORD*)(v23 + 48) = 0;
  *(_QWORD*)(v23 + 56) = 0;
  *(_QWORD*)(v23 + 64) = 0;
  *(_QWORD*)(v23 + 72) = 0;
  *(_QWORD*)v23 = GameData_1fca6c0;
  *(_QWORD*)(v23 + 88) = 0;
  *(_QWORD*)(v23 + 96) = 0;
  *(_QWORD*)(v23 + 104) = 0;
  *(_QWORD*)(v23 + 112) = 0;
  *(_QWORD*)(v23 + 120) = 0;
  *(_QWORD*)(v23 + 128) = 0;
  *(_BYTE*)(v23 + 8) = 22;
  *(_BYTE*)(v23 + 84) = 1;
  *(_QWORD*)(v23 + 136) = 0;
  *(_QWORD*)(v23 + 144) = 0;
  *(_QWORD*)(v23 + 152) = 0;
  *(_QWORD*)(v23 + 160) = 0;
  *(_QWORD*)(v23 + 232) = a1;
  strcpy((char*)(v23 + 9), "GBufferPass");
  *(_QWORD*)(v23 + 176) = GameData_1fca708;
  *(_QWORD*)(v23 + 184) = &v40;
  v25 = *(__int64**)(a2 + 8);
  v24 = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(v23 + 208) = v23 + 176;
  *(_QWORD*)(v23 + 224) = GameData_1fca788;
  *(_QWORD*)(v23 + 256) = v23 + 224;
  if ((unsigned __int64)v25 < v24) {
    *v25 = v23;
    v26 = (__int64)(v25 + 1);
    goto LABEL_33;
  }
  v27 = *(_QWORD*)a2;
  v28 = (signed __int64)v25 - *(_QWORD*)a2;
  v29 = (v28 >> 3) + 1;
  if (v29 >> 61 != 0) {
  LABEL_34:
    GameRoutine_b32f30();
  }
  v30 = v24 - v27;
  if (v30 >> 2 > v29) {
    v29 = v30 >> 2;
  }
  if ((unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFF8LL) {
    v31 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v31 = v29;
  }
  if (v31 != 0) {
    if (v31 >> 61 == 0) {
      v32 = v23;
      v33 = fw_memory_HeapManager_Allocate_alt1(*v6, 8 * v31, 16, 0);
      v23 = v32;
      goto LABEL_29;
    }
  LABEL_35:
    GameRoutine_60a210_alt1();
  }
  v33 = 0;
LABEL_29:
  v34 = v33 + 8 * v31;
  v35 = v33 + v28 - 8 * (v28 >> 3);
  *(_QWORD*)(v33 + v28) = v23;
  v26 = v33 + v28 + 8;
  memcpy_alt1(v35, v27, v28);
  *(_QWORD*)a2 = v35;
  *(_QWORD*)(a2 + 8) = v26;
  *(_QWORD*)(a2 + 16) = v34;
  if (v27 != 0) {
    v36 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v36, v27);
  }
LABEL_33:
  *(_QWORD*)(a2 + 8) = v26;
  v37 = *(_QWORD*)(v26 - 8);
  v39[0] = a2;
  v39[1] = v37;
  return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v37 + 16LL))(v37, v39);
}

__int64 gfxa_MainPassGeneral_SetupSkyPass(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 v3;
  __int64 v4;
  int v7;
  __int64* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  signed __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 result;
  _QWORD v25[2];
  _QWORD* v26;

  v26 = a3;
  v4 = *(_QWORD*)a2;
  v3 = *(_QWORD*)(a2 + 8);
  v7 = *(_DWORD*)(a2 + 96);
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 208, 16, 0);
  *(_DWORD*)(v9 + 80) = v7;
  *(_BYTE*)(v9 + 8) = 22;
  *(_QWORD*)(v9 + 32) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)(v9 + 96) = 0;
  *(_QWORD*)(v9 + 168) = a1;
  *(_BYTE*)(v9 + 84) = 1;
  *(_QWORD*)v9 = GameData_1fca928;
  *(_QWORD*)(v9 + 144) = v9 + 112;
  strcpy((char*)(v9 + 9), "SkyCompPass");
  *(_QWORD*)(v9 + 104) = 0;
  *(_QWORD*)(v9 + 112) = GameData_1fca808;
  *(_QWORD*)(v9 + 120) = &v26;
  *(_QWORD*)(v9 + 160) = GameData_1fca898;
  v11 = *(__int64**)(a2 + 8);
  v10 = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(v9 + 192) = v9 + 160;
  if ((unsigned __int64)v11 >= v10) {
    v13 = *(_QWORD*)a2;
    v14 = (signed __int64)v11 - *(_QWORD*)a2;
    v15 = (v14 >> 3) + 1;
    if (v15 >> 61 != 0) {
      GameRoutine_b32f30();
    }
    v16 = v10 - v13;
    if (v16 >> 2 > v15) {
      v15 = v16 >> 2;
    }
    if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF8LL) {
      v17 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v17 = v15;
    }
    if (v17 != 0) {
      if (v17 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v18 = v9;
      v19 = fw_memory_HeapManager_Allocate_alt1(*v8, 8 * v17, 16, 0);
      v9 = v18;
    }
    else {
      v19 = 0;
    }
    v20 = v19 + 8 * v17;
    v21 = v19 + v14 - 8 * (v14 >> 3);
    *(_QWORD*)(v19 + v14) = v9;
    v12 = v19 + v14 + 8;
    memcpy_alt1(v21, v13, v14);
    *(_QWORD*)a2 = v21;
    *(_QWORD*)(a2 + 8) = v12;
    *(_QWORD*)(a2 + 16) = v20;
    if (v13 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*v8 + 200) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v8 + v22, v13);
    }
  }
  else {
    *v11 = v9;
    v12 = (__int64)(v11 + 1);
  }
  *(_QWORD*)(a2 + 8) = v12;
  v23 = *(_QWORD*)(v12 - 8);
  v25[0] = a2;
  v25[1] = v23;
  result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v23 + 16LL))(v23, v25);
  *v26 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v3 - v4) & 0x7FFFFFFF8LL)) +
                    104LL);
  return result;
}

__int64 gfxa_MainPassGeneral_SetupForwardPass(_QWORD* a1, __int64 a2,
                                              _QWORD* a3, __int64 a4)
{

#pragma clang fp contract(off)
  __int64* v4;
  __int64 v5;
  int v9;
  __int64* v10;
  __int64 v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD** v25;
  __int64 v26;
  _BYTE* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int* v33;
  int v34;
  int v35;
  __int64 v36;
  float v37;
  float v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  int* v45;
  int v46;
  int v47;
  __int64 v48;
  float v49;
  float v50;
  __int64* v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  float v57;
  int v58;
  __int64 v59;
  int v60;
  float v61;
  __int64 v62;
  float v63;
  int v64;
  __int64 v65;
  char v66;
  __int64 v67;
  int v68;
  __int64 v69;
  __int64 v70;
  char v71;
  __int64 v72;
  char v73;
  __int64 v74;
  int v75;
  __int64 v76;
  int v77;
  __int64 v78;
  int v79;
  char v80;
  char v81;
  __int64* v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  int v88;
  _QWORD* v89;
  __int64 v90;
  _QWORD* v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  _QWORD* v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  __int64* v119;
  _QWORD* v120;
  __int64 v121;
  __int64 v122;
  signed __int64 v123;
  unsigned __int64 v124;
  __int64 v125;
  unsigned __int64 v126;
  __int64 v127;
  unsigned __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  int v133;
  int v134;
  int v135;
  float v136;
  int v137;
  __int64 v138;
  int v139;
  float v140;
  __int64 v141;
  float v142;
  int v143;
  __int64 v144;
  char v145;
  __int64 v146;
  int v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  char v151;
  __int64 v152;
  int v153;
  __int64 v154;
  int v155;
  __int64 v156;
  int v157;
  char v158;
  char v159;
  __int64 v160;
  __int64 v161;
  _QWORD* v162;
  __int64 v163;
  int v164;
  _QWORD* v165;
  __int64 v166;
  _QWORD* v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  _QWORD* v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  unsigned __int64 v194;
  __int64* v195;
  __int64 v196;
  signed __int64 v197;
  unsigned __int64 v198;
  __int64 v199;
  unsigned __int64 v200;
  __int64 v201;
  unsigned __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  _QWORD** v206;
  __int64 v207;
  _QWORD* v208;
  _QWORD* v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  _QWORD* v217;
  __int64 v218;
  __int64 (*v219)();
  int v220;
  __int64 v221;
  _QWORD* v222;
  __int64 v223;
  _QWORD* v224;
  __int64 v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  __int64 v229;
  unsigned __int64 v230;
  __int64* v231;
  __int64 v232;
  __int64 v233;
  signed __int64 v234;
  unsigned __int64 v235;
  __int64 v236;
  unsigned __int64 v237;
  __int64 v238;
  unsigned __int64 v239;
  __int64 v240;
  __int64 v241;
  _QWORD** v242;
  int v243;
  __int64 v244;
  char* v245;
  unsigned __int64 v246;
  __int64* v247;
  __int64 v248;
  __int64 v249;
  signed __int64 v250;
  unsigned __int64 v251;
  __int64 v252;
  unsigned __int64 v253;
  __int64 v254;
  unsigned __int64 v255;
  __int64 v256;
  __int64 v257;
  _QWORD** v258;
  __int64 v260;
  __int64 v261;
  __int64 (*v262)();
  __int64 v263;
  int v264;
  __int64 v265;
  int v266;
  __int64 v267;
  __int64 v268;
  char v269;
  __int64 v270;
  char v271;
  int v272;
  char v273;
  _QWORD* v274;
  __int64 v275;
  __int64 v276;
  _QWORD* v277;
  struct {
    __int64 (**v278)();
    _QWORD** v279;
    _QWORD* v280;
    char gap136_[8];
    __int64 (***v281)();
  } v278_;

  v276 = a4;
  v277 = a3;
  v5 = *(_QWORD*)a2;
  v4 = *(__int64**)(a2 + 8);
  v9 = *(_DWORD*)(a2 + 96);
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  v11 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 224, 16, 0);
  v278_.v280 = a1;
  *(_QWORD*)(v11 + 32) = 0;
  *(_QWORD*)(v11 + 40) = 0;
  *(_QWORD*)(v11 + 48) = 0;
  *(_QWORD*)(v11 + 56) = 0;
  *(_QWORD*)(v11 + 64) = 0;
  *(_QWORD*)(v11 + 72) = 0;
  *(_DWORD*)(v11 + 80) = v9;
  *(_QWORD*)(v11 + 104) = 0;
  *(_QWORD*)(v11 + 112) = 0;
  *(_QWORD*)(v11 + 88) = 0;
  *(_QWORD*)(v11 + 96) = 0;
  v278_.v278 = GameData_1fca970;
  v278_.v279 = &v277;
  v278_.v281 = &v278_.v278;
  v275 = a2;
  *(_QWORD*)(v11 + 184) = a1;
  strcpy((char*)(v11 + 8), " ForwardDepthPass");
  *(_BYTE*)(v11 + 84) = 1;
  *(_QWORD*)v11 = GameData_1fcaa90;
  *(_QWORD*)(v11 + 128) = GameData_1fca970;
  *(_QWORD*)(v11 + 160) = v11 + 128;
  v12 = v278_.v280;
  *(_QWORD*)(v11 + 136) = v278_.v279;
  *(_QWORD*)(v11 + 144) = v12;
  *(_QWORD*)(v11 + 176) = GameData_1fcaa00;
  v13 = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(v11 + 208) = v11 + 176;
  if ((unsigned __int64)v4 >= v13) {
    v15 = (unsigned __int64)v4 - v5;
    v16 = ((__int64)v4 - v5) >> 3;
    v17 = v16 + 1;
    if ((unsigned __int64)(v16 + 1) >> 61 != 0) {
      goto LABEL_183;
    }
    v18 = v13 - v5;
    if (v18 >> 2 > v17) {
      v17 = v18 >> 2;
    }
    if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF8LL) {
      v19 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v19 = v17;
    }
    if (v19 != 0) {
      if (v19 >> 61 != 0) {
        goto LABEL_184;
      }
      v20 = v11;
      v21 = fw_memory_HeapManager_Allocate_alt1(*v10, 8 * v19, 16, 0);
      v11 = v20;
    }
    else {
      v21 = 0;
    }
    v22 = v21 + 8 * v19;
    v23 = v21 + v15 - 8 * v16;
    *(_QWORD*)(v21 + v15) = v11;
    v14 = v21 + v15 + 8;
    memcpy_alt1(v23, v5, v15);
    *(_QWORD*)a2 = v23;
    *(_QWORD*)(a2 + 8) = v14;
    *(_QWORD*)(a2 + 16) = v22;
    if (v5 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*v10 + 200) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v10 + v24, v5);
    }
  }
  else {
    *v4 = v11;
    v14 = (__int64)(v4 + 1);
    v15 = (unsigned __int64)v4 - v5;
  }
  *(_QWORD*)(a2 + 8) = v14;
  v25 = *(_QWORD***)(v14 - 8);
  v278_.v278 = (__int64 (**)(void))a2;
  v278_.v279 = v25;
  ((void (*)(_QWORD**, __int64 (***)(void)))(*v25)[2])(v25, &v278_.v278);
  v26 = a4;
  v274 = a1;
  v277[4] =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + (v15 & 0x7FFFFFFF8LL)) + 112LL);
  v27 = *(_BYTE**)(*(_QWORD*)(*(_QWORD*)a4 + 8LL) + 48LL);
  if (v27 != nullptr) {
    v28 = 120;
    if (v27[90] != 0) {
      v28 = 89;
    }
    if ((v27[v28] & 1) != 0) {
      v29 = 324;
      v30 = 404;
      v31 = 796;
      v32 = 484;
      v272 = 0;
      if (v27[328] == 0) {
        v29 = 360;
      }
      if (v27[408] == 0) {
        v30 = 440;
      }
      if (v27[800] == 0) {
        v31 = 832;
      }
      if (v27[488] == 0) {
        v32 = 520;
      }
      v33 = (int*)(*(_QWORD*)(*a1 + 16672LL) + 24LL);
      if (*(_BYTE*)(*a1 + 16700LL) == 0) {
        v33 = (int*)(*a1 + 13304LL);
      }
      v34 = v33[1];
      v35 = *v33;
      v36 = 200;
      if (v27[168] != 0) {
        v36 = 164;
      }
      v37 = (float)v35;
      v38 = 0x0.0p+0f;
      v39 = *(_DWORD*)&v27[v36];
      if (v39 > 1) {
        if (v39 == 2) {
          v38 = 0x1.8000000000000p-1f;
          goto LABEL_105;
        }
        if (v39 == 3) {
          v53 = (int)v37;
          v38 = 0x1.0000000000000p+0f;
        LABEL_106:
          v272 = v53;
        }
      }
      else {
        if (v39 == 0) {
          v38 = 0x1.0000000000000p-2f;
          goto LABEL_105;
        }
        if (v39 == 1) {
          v38 = 0x1.0000000000000p-1f;
        LABEL_105:
          v53 = (int)(float)(v37 * v38);
          goto LABEL_106;
        }
      }
      v133 = *(_DWORD*)&v27[v29];
      v134 = *(_DWORD*)&v27[v30];
      v135 = *(_DWORD*)&v27[v31];
      v136 = v38 * (float)v34;
      v137 = *(_DWORD*)&v27[v32];
      v138 = 280;
      if (v27[248] != 0) {
        v138 = 244;
      }
      v139 = (int)v136;
      v140 = *(float*)&v27[v138];
      v141 = 600;
      if (v27[568] != 0) {
        v141 = 564;
      }
      v142 = 0x1.0000000000000p+0f - v140;
      v143 = *(_DWORD*)&v27[v141];
      v144 = 904;
      if (v27[874] != 0) {
        v144 = 873;
      }
      v145 = v27[v144];
      v146 = 680;
      if (v27[648] != 0) {
        v146 = 644;
      }
      v147 = *(_DWORD*)&v27[v146];
      v148 = 752;
      if (v27[722] != 0) {
        v148 = 721;
      }
      v271 = v27[v148];
      v149 = 1120;
      if (v27[1090] != 0) {
        v149 = 1089;
      }
      v269 = v27[v149];
      v150 = 1048;
      if (v27[1018] != 0) {
        v150 = 1017;
      }
      v151 = v27[v150];
      v152 = 1200;
      if (v27[1168] != 0) {
        v152 = 1164;
      }
      v153 = *(_DWORD*)&v27[v152];
      v265 = *(_QWORD*)(a1[7] + 1228LL);
      v267 = *(_QWORD*)(a1[7] + 1220LL);
      v154 = 1280;
      if (v27[1248] != 0) {
        v154 = 1244;
      }
      v155 = *(_DWORD*)&v27[v154];
      v156 = 1360;
      if (v27[1328] != 0) {
        v156 = 1324;
      }
      v157 = *(_DWORD*)&v27[v156];
      v158 = 1;
      if (*(_DWORD*)(v26 + 112) == v39) {
        v158 = *(_BYTE*)(v26 + 120);
      }
      v159 = v158 & 1;
      v260 = *(_QWORD*)a2;
      v261 = *(_QWORD*)(a2 + 8);
      v264 = *(_DWORD*)(a2 + 96);
      v160 = fw_memory_HeapManager_Allocate_alt1(*v10, 352, 16, 0);
      v161 = fw_memory_HeapManager_Allocate_alt1(*v10, 104, 16, 0);
      *(_DWORD*)(v161 + 12) = v134;
      *(_DWORD*)(v161 + 16) = v135;
      v162 = (_QWORD*)v161;
      *(_BYTE*)(v161 + 44) = v145;
      *(_QWORD*)v161 = GameData_1fcaad8;
      *(_BYTE*)(v161 + 57) = v151;
      *(_DWORD*)(v161 + 8) = v133;
      *(_DWORD*)(v161 + 20) = v137;
      *(float*)(v161 + 32) = v142;
      *(_DWORD*)(v161 + 36) = 5;
      *(_DWORD*)(v161 + 40) = v143;
      *(_DWORD*)(v161 + 48) = v147;
      *(_DWORD*)(v161 + 60) = v153;
      *(_DWORD*)(v161 + 80) = v155;
      *(_DWORD*)(v161 + 84) = v157;
      *(_DWORD*)(v161 + 88) = v157;
      *(_BYTE*)(v161 + 92) = v159;
      *(_BYTE*)(v161 + 56) = v269;
      *(_BYTE*)(v161 + 58) = v271;
      *(_QWORD*)(v161 + 64) = v267;
      *(_QWORD*)(v161 + 72) = v265;
      *(_DWORD*)(v161 + 24) = v272;
      *(_DWORD*)(v161 + 28) = v139;
      *(_DWORD*)(v161 + 52) = 1045220557;
      *(_QWORD*)(v161 + 96) = &v277;
      v163 = fw_memory_HeapManager_Allocate_alt1(*v10, 104, 16, 0);
      v164 = v139;
      v165 = (_QWORD*)v163;
      *(_DWORD*)(v163 + 16) = v133;
      *(_DWORD*)(v163 + 28) = v137;
      *(float*)(v163 + 40) = v142;
      *(_DWORD*)(v163 + 48) = v143;
      *(_QWORD*)v163 = GameData_1fcab68;
      *(_DWORD*)(v163 + 56) = v147;
      *(_BYTE*)(v163 + 64) = v269;
      *(_BYTE*)(v163 + 66) = v271;
      *(_DWORD*)(v163 + 68) = v153;
      *(_QWORD*)(v163 + 72) = v267;
      *(_QWORD*)(v163 + 80) = v265;
      *(_DWORD*)(v163 + 88) = v155;
      *(_DWORD*)(v163 + 92) = v157;
      *(_DWORD*)(v163 + 96) = v157;
      *(_BYTE*)(v163 + 100) = v159;
      *(_QWORD*)(v160 + 32) = 0;
      *(_QWORD*)(v160 + 40) = 0;
      *(_QWORD*)(v160 + 48) = 0;
      *(_QWORD*)(v160 + 56) = 0;
      *(_QWORD*)(v160 + 64) = 0;
      *(_QWORD*)(v160 + 72) = 0;
      *(_QWORD*)(v160 + 88) = 0;
      *(_QWORD*)(v160 + 96) = 0;
      *(_QWORD*)(v160 + 104) = 0;
      *(_QWORD*)(v160 + 112) = 0;
      *(_QWORD*)(v160 + 120) = 0;
      *(_QWORD*)(v160 + 128) = 0;
      *(_QWORD*)(v160 + 136) = 0;
      *(_QWORD*)(v160 + 144) = 0;
      *(_QWORD*)(v160 + 152) = 0;
      *(_QWORD*)(v160 + 160) = 0;
      *(_QWORD*)(v160 + 168) = 0;
      *(_QWORD*)(v160 + 176) = 0;
      *(_QWORD*)(v160 + 184) = 0;
      *(_QWORD*)(v160 + 192) = 0;
      *(_QWORD*)(v160 + 200) = 0;
      *(_QWORD*)(v160 + 208) = 0;
      *(_QWORD*)(v160 + 216) = 0;
      *(_QWORD*)(v160 + 224) = 0;
      *(_QWORD*)(v160 + 232) = 0;
      *(_QWORD*)(v160 + 240) = 0;
      *(_QWORD*)(v160 + 248) = 0;
      *(_DWORD*)(v163 + 20) = v134;
      *(_DWORD*)(v163 + 24) = v135;
      *(_QWORD*)(v163 + 8) = v274;
      *(_DWORD*)(v163 + 32) = v272;
      *(_DWORD*)(v163 + 36) = v164;
      *(_DWORD*)(v163 + 44) = 5;
      *(_BYTE*)(v163 + 52) = v145;
      *(_DWORD*)(v163 + 60) = 1045220557;
      *(_BYTE*)(v163 + 65) = v151;
      v166 = *v10;
      *(_BYTE*)(v160 + 8) = 14;
      strcpy((char*)(v160 + 9), "SSRPass");
      *(_DWORD*)(v160 + 80) = v264;
      *(_BYTE*)(v160 + 84) = 1;
      *(_QWORD*)v160 = GameData_1fcabf8;
      v167 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v166, 104, 16, 0);
      v168 = v162[9];
      v169 = v162[10];
      v170 = v162[11];
      v171 = v162[12];
      *(_QWORD*)(v160 + 288) = v167;
      v167[10] = v169;
      v167[11] = v170;
      v172 = v162[5];
      v173 = v162[6];
      v167[12] = v171;
      v174 = v162[7];
      v175 = v162[8];
      v167[6] = v173;
      v167[7] = v174;
      v167[8] = v175;
      v167[9] = v168;
      v176 = v162[1];
      v177 = v162[2];
      *v167 = GameData_1fcaad8;
      v167[1] = v176;
      v178 = v162[3];
      v179 = v162[4];
      v167[2] = v177;
      v167[3] = v178;
      v167[4] = v179;
      v167[5] = v172;
      v180 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v10, 104, 16, 0);
      v181 = v165[9];
      v182 = v165[10];
      v183 = v165[11];
      v184 = v165[12];
      *(_QWORD*)(v160 + 336) = v180;
      v180[10] = v182;
      v180[11] = v183;
      v180[12] = v184;
      v185 = v165[5];
      v186 = v165[7];
      v187 = v165[8];
      v180[6] = v165[6];
      v180[7] = v186;
      v180[8] = v187;
      v180[9] = v181;
      v188 = v165[1];
      v189 = v165[2];
      *v180 = GameData_1fcab68;
      v180[1] = v188;
      v190 = v165[3];
      v191 = v165[4];
      v180[2] = v189;
      v180[3] = v190;
      v192 = *v10;
      v180[4] = v191;
      v180[5] = v185;
      v193 = 128;
      if (*(_QWORD*)(v192 + 200) == 0) {
        v193 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v192 + v193, (__int64)v165);
      (*(void (**)(_QWORD*))(*v162 + 40LL))(v162);
      v195 = *(__int64**)(a2 + 8);
      v194 = *(_QWORD*)(a2 + 16);
      if ((unsigned __int64)v195 >= v194) {
        v196 = *(_QWORD*)a2;
        v197 = (signed __int64)v195 - *(_QWORD*)a2;
        v198 = (v197 >> 3) + 1;
        if (v198 >> 61 != 0) {
          goto LABEL_183;
        }
        v199 = v194 - v196;
        v120 = v274;
        if (v199 >> 2 > v198) {
          v198 = v199 >> 2;
        }
        if ((unsigned __int64)v199 >= 0x7FFFFFFFFFFFFFF8LL) {
          v200 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v200 = v198;
        }
        if (v200 != 0) {
          if (v200 >> 61 != 0) {
            goto LABEL_184;
          }
          v201 = fw_memory_HeapManager_Allocate_alt1(*v10, 8 * v200, 16, 0);
        }
        else {
          v201 = 0;
        }
        v202 = v201 + 8 * v200;
        v203 = v201 + v197 - 8 * (v197 >> 3);
        *(_QWORD*)(v201 + v197) = v160;
        v121 = v201 + v197 + 8;
        memcpy_alt1(v203, v196, v197);
        *(_QWORD*)a2 = v203;
        *(_QWORD*)(a2 + 8) = v121;
        *(_QWORD*)(a2 + 16) = v202;
        if (v196 != 0) {
          v204 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v204 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v10 + v204, v196);
        }
      }
      else {
        v120 = v274;
        *v195 = v160;
        v121 = (__int64)(v195 + 1);
      }
      v132 = v260;
      v131 = v261;
    LABEL_148:
      v205 = v131 - v132;
      *(_QWORD*)(v275 + 8) = v121;
      v206 = *(_QWORD***)(v121 - 8);
      v278_.v278 = (__int64 (**)(void))v275;
      v278_.v279 = v206;
      ((void (*)(_QWORD**, __int64 (***)(void)))(*v206)[2])(v206, &v278_.v278);
      v207 = *v10;
      v208 = *(_QWORD**)(*(_QWORD*)v275 + (v205 & 0x7FFFFFFF8LL));
      v209 = v277;
      v210 = v208[27];
      v212 = v208[24];
      v211 = v208[25];
      v277[42] = v208[26];
      v209[43] = v210;
      v209[40] = v212;
      v209[41] = v211;
      v213 = v208[30];
      v214 = v208[31];
      v217 = v208 + 28;
      v215 = v208[28];
      v216 = v217[1];
      v209[46] = v213;
      v209[47] = v214;
      v209[44] = v215;
      v209[45] = v216;
      v219 = *(__int64 (**)(void))v275;
      v218 = *(_QWORD*)(v275 + 8);
      v220 = *(_DWORD*)(v275 + 96);
      v221 = fw_memory_HeapManager_Allocate_alt1(v207, 432, 16, 0);
      v222 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v10, 40, 16, 0);
      v222[2] = v120;
      *(_QWORD*)(v221 + 32) = 0;
      *(_QWORD*)(v221 + 40) = 0;
      *(_QWORD*)(v221 + 48) = 0;
      *(_QWORD*)(v221 + 56) = 0;
      *(_QWORD*)(v221 + 64) = 0;
      *(_QWORD*)(v221 + 72) = 0;
      v222[3] = v275;
      v222[4] = &v276;
      *(_DWORD*)(v221 + 80) = v220;
      *(_QWORD*)(v221 + 88) = 0;
      *(_QWORD*)(v221 + 96) = 0;
      *(_QWORD*)(v221 + 104) = 0;
      *(_QWORD*)(v221 + 128) = 0;
      *(_QWORD*)(v221 + 136) = 0;
      *(_QWORD*)(v221 + 144) = 0;
      *(_QWORD*)(v221 + 152) = 0;
      *(_QWORD*)(v221 + 160) = 0;
      *(_QWORD*)(v221 + 168) = 0;
      *(_QWORD*)(v221 + 176) = 0;
      *(_QWORD*)(v221 + 184) = 0;
      *(_QWORD*)(v221 + 192) = 0;
      *(_QWORD*)(v221 + 200) = 0;
      *(_QWORD*)(v221 + 208) = 0;
      *(_QWORD*)(v221 + 216) = 0;
      *(_QWORD*)(v221 + 224) = 0;
      *(_QWORD*)(v221 + 232) = 0;
      *(_BYTE*)(v221 + 8) = 22;
      *(_QWORD*)(v221 + 240) = 0;
      *(_QWORD*)(v221 + 248) = 0;
      *(_QWORD*)(v221 + 256) = 0;
      *(_QWORD*)(v221 + 264) = 0;
      *(_QWORD*)(v221 + 272) = 0;
      *(_QWORD*)(v221 + 280) = 0;
      *(_QWORD*)(v221 + 288) = 0;
      *(_QWORD*)(v221 + 296) = 0;
      *(_QWORD*)(v221 + 304) = 0;
      *(_QWORD*)(v221 + 312) = 0;
      *(_QWORD*)(v221 + 320) = 0;
      *v222 = GameData_1fcad40;
      v222[1] = &v277;
      v223 = *v10;
      strcpy((char*)(v221 + 9), "ForwardPass");
      *(_BYTE*)(v221 + 84) = 1;
      *(_QWORD*)v221 = GameData_1fcaeb0;
      *(_DWORD*)(v221 + 112) = -1;
      *(_DWORD*)(v221 + 328) = 1065353216;
      v224 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v223, 40, 16, 0);
      v225 = v222[1];
      v226 = v222[2];
      *(_QWORD*)(v221 + 368) = v224;
      *v224 = GameData_1fcad40;
      v224[1] = v225;
      v227 = v222[3];
      v228 = v222[4];
      v224[2] = v226;
      v224[3] = v227;
      v224[4] = v228;
      *(_QWORD*)(v221 + 416) = v221 + 384;
      *(_QWORD*)(v221 + 384) = GameData_1fcae20;
      *(_QWORD*)(v221 + 392) = v120;
      v229 = 128;
      if (*(_QWORD*)(*v10 + 200) == 0) {
        v229 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v10 + v229, (__int64)v222);
      v231 = *(__int64**)(v275 + 8);
      v230 = *(_QWORD*)(v275 + 16);
      if ((unsigned __int64)v231 >= v230) {
        v233 = *(_QWORD*)v275;
        v234 = (signed __int64)v231 - *(_QWORD*)v275;
        v235 = (v234 >> 3) + 1;
        if (v235 >> 61 != 0) {
          goto LABEL_183;
        }
        v236 = v230 - v233;
        if (v236 >> 2 > v235) {
          v235 = v236 >> 2;
        }
        if ((unsigned __int64)v236 >= 0x7FFFFFFFFFFFFFF8LL) {
          v237 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v237 = v235;
        }
        if (v237 != 0) {
          if (v237 >> 61 != 0) {
            goto LABEL_184;
          }
          v238 = fw_memory_HeapManager_Allocate_alt1(*v10, 8 * v237, 16, 0);
        }
        else {
          v238 = 0;
        }
        v239 = v238 + 8 * v237;
        v240 = v238 + v234 - 8 * (v234 >> 3);
        *(_QWORD*)(v238 + v234) = v221;
        v232 = v238 + v234 + 8;
        memcpy_alt1(v240, v233, v234);
        *(_QWORD*)v275 = v240;
        *(_QWORD*)(v275 + 8) = v232;
        *(_QWORD*)(v275 + 16) = v239;
        if (v233 != 0) {
          v241 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v241 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v10 + v241, v233);
        }
      }
      else {
        *v231 = v221;
        v232 = (__int64)(v231 + 1);
      }
      *(_QWORD*)(v275 + 8) = v232;
      v242 = *(_QWORD***)(v232 - 8);
      v278_.v278 = (__int64 (**)(void))v275;
      v278_.v279 = v242;
      ((void (*)(_QWORD**, __int64 (***)(void)))(*v242)[2])(v242, &v278_.v278);
      *v277 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v275 +
                                    ((v218 - (_QWORD)v219) & 0x7FFFFFFF8LL)) +
                         304LL);
      v243 = *(_DWORD*)(v275 + 96);
      v244 = fw_memory_HeapManager_Allocate_alt1(*v10, 224, 16, 0);
      v245 = (char*)fw_memory_HeapManager_Allocate_alt1(*v10, 32, 16, 0);
      *(_QWORD*)(v244 + 32) = 0;
      *(_QWORD*)(v244 + 40) = 0;
      *(_QWORD*)(v244 + 48) = 0;
      *(_QWORD*)(v244 + 56) = 0;
      *(_QWORD*)(v244 + 64) = 0;
      *(_QWORD*)(v244 + 72) = 0;
      *(_DWORD*)(v244 + 80) = v243;
      *(_QWORD*)(v244 + 88) = 0;
      *(_QWORD*)(v244 + 96) = 0;
      *(_QWORD*)(v244 + 104) = 0;
      *(_QWORD*)(v244 + 112) = 0;
      *(_QWORD*)(v244 + 16) = 24;
      *(_QWORD*)(v244 + 24) = v245;
      *(_BYTE*)(v244 + 84) = 1;
      strcpy(v245, "CaptureColorAndDepthPass");
      *(_QWORD*)v244 = GameData_1fcb018;
      *(_QWORD*)(v244 + 8) = 33;
      *(_QWORD*)(v244 + 128) = GameData_1fcaef8;
      *(_QWORD*)(v244 + 136) = &v277;
      v247 = *(__int64**)(v275 + 8);
      v246 = *(_QWORD*)(v275 + 16);
      *(_QWORD*)(v244 + 176) = GameData_1fcaf88;
      *(_QWORD*)(v244 + 160) = v244 + 128;
      *(_QWORD*)(v244 + 208) = v244 + 176;
      if ((unsigned __int64)v247 < v246) {
        *v247 = v244;
        v248 = (__int64)(v247 + 1);
        goto LABEL_182;
      }
      v249 = *(_QWORD*)v275;
      v250 = (signed __int64)v247 - *(_QWORD*)v275;
      v251 = (v250 >> 3) + 1;
      if (v251 >> 61 != 0) {
      LABEL_183:
        GameRoutine_b32f30();
      }
      v252 = v246 - v249;
      if (v252 >> 2 > v251) {
        v251 = v252 >> 2;
      }
      if ((unsigned __int64)v252 >= 0x7FFFFFFFFFFFFFF8LL) {
        v253 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v253 = v251;
      }
      if (v253 != 0) {
        if (v253 >> 61 == 0) {
          v254 = fw_memory_HeapManager_Allocate_alt1(*v10, 8 * v253, 16, 0);
          goto LABEL_178;
        }
      LABEL_184:
        GameRoutine_60a210_alt1();
      }
      v254 = 0;
    LABEL_178:
      v255 = v254 + 8 * v253;
      v256 = v254 + v250 - 8 * (v250 >> 3);
      *(_QWORD*)(v254 + v250) = v244;
      v248 = v254 + v250 + 8;
      memcpy_alt1(v256, v249, v250);
      *(_QWORD*)v275 = v256;
      *(_QWORD*)(v275 + 8) = v248;
      *(_QWORD*)(v275 + 16) = v255;
      if (v249 != 0) {
        v257 = 128;
        if (*(_QWORD*)(*v10 + 200) == 0) {
          v257 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v10 + v257, v249);
      }
    LABEL_182:
      *(_QWORD*)(v275 + 8) = v248;
      v258 = *(_QWORD***)(v248 - 8);
      v278_.v278 = (__int64 (**)(void))v275;
      v278_.v279 = v258;
      return ((__int64 (*)(_QWORD**, __int64 (***)(void)))(*v258)[2])(
          v258, &v278_.v278);
    }
  }
  v40 = 324;
  v41 = 404;
  v42 = 796;
  v43 = 484;
  v44 = 0;
  if (v27[328] == 0) {
    v40 = 360;
  }
  if (v27[408] == 0) {
    v41 = 440;
  }
  if (v27[800] == 0) {
    v42 = 832;
  }
  if (v27[488] == 0) {
    v43 = 520;
  }
  v45 = (int*)(*(_QWORD*)(*a1 + 16672LL) + 24LL);
  if (*(_BYTE*)(*a1 + 16700LL) == 0) {
    v45 = (int*)(*a1 + 13304LL);
  }
  v46 = v45[1];
  v47 = *v45;
  v48 = 200;
  if (v27[168] != 0) {
    v48 = 164;
  }
  v49 = (float)v47;
  v50 = 0x0.0p+0f;
  v51 = v10;
  v52 = *(_DWORD*)&v27[v48];
  if (v52 > 1) {
    if (v52 != 2) {
      if (v52 == 3) {
        v44 = (int)v49;
        v50 = 0x1.0000000000000p+0f;
      }
      goto LABEL_62;
    }
    v50 = 0x1.8000000000000p-1f;
  }
  else if (v52 != 0) {
    if (v52 != 1) {
    LABEL_62:
      v54 = *(_DWORD*)&v27[v40];
      v55 = *(_DWORD*)&v27[v41];
      v56 = *(_DWORD*)&v27[v42];
      v57 = v50 * (float)v46;
      v58 = *(_DWORD*)&v27[v43];
      v59 = 280;
      if (v27[248] != 0) {
        v59 = 244;
      }
      v60 = (int)v57;
      v61 = *(float*)&v27[v59];
      v62 = 600;
      if (v27[568] != 0) {
        v62 = 564;
      }
      v63 = 0x1.0000000000000p+0f - v61;
      v64 = *(_DWORD*)&v27[v62];
      v65 = 904;
      if (v27[874] != 0) {
        v65 = 873;
      }
      v66 = v27[v65];
      v67 = 680;
      if (v27[648] != 0) {
        v67 = 644;
      }
      v68 = *(_DWORD*)&v27[v67];
      v69 = 752;
      if (v27[722] != 0) {
        v69 = 721;
      }
      v273 = v27[v69];
      v70 = 1120;
      if (v27[1090] != 0) {
        v70 = 1089;
      }
      v71 = v27[v70];
      v72 = 1048;
      if (v27[1018] != 0) {
        v72 = 1017;
      }
      v73 = v27[v72];
      v74 = 1200;
      if (v27[1168] != 0) {
        v74 = 1164;
      }
      v75 = *(_DWORD*)&v27[v74];
      v268 = *(_QWORD*)(a1[7] + 1228LL);
      v270 = *(_QWORD*)(a1[7] + 1220LL);
      v76 = 1280;
      if (v27[1248] != 0) {
        v76 = 1244;
      }
      v77 = *(_DWORD*)&v27[v76];
      v78 = 1360;
      if (v27[1328] != 0) {
        v78 = 1324;
      }
      v79 = *(_DWORD*)&v27[v78];
      v80 = 1;
      if (*(_DWORD*)(v26 + 112) == v52) {
        v80 = *(_BYTE*)(v26 + 120);
      }
      v81 = v80 & 1;
      v82 = v51;
      v262 = *(__int64 (**)(void))v275;
      v263 = *(_QWORD*)(v275 + 8);
      v266 = *(_DWORD*)(v275 + 96);
      v83 = fw_memory_HeapManager_Allocate_alt1(*v51, 352, 16, 0);
      v84 = fw_memory_HeapManager_Allocate_alt1(*v82, 104, 16, 0);
      *(_DWORD*)(v84 + 12) = v55;
      *(_DWORD*)(v84 + 16) = v56;
      *(_DWORD*)(v84 + 24) = v44;
      *(_DWORD*)(v84 + 28) = v60;
      v85 = v84;
      *(_QWORD*)v84 = GameData_1fcac40;
      *(_BYTE*)(v84 + 57) = v73;
      *(_DWORD*)(v84 + 8) = v54;
      *(_DWORD*)(v84 + 20) = v58;
      *(float*)(v84 + 32) = v63;
      *(_DWORD*)(v84 + 40) = v64;
      *(_BYTE*)(v84 + 44) = v66;
      *(_DWORD*)(v84 + 48) = v68;
      *(_BYTE*)(v84 + 56) = v71;
      *(_DWORD*)(v84 + 36) = 5;
      *(_DWORD*)(v84 + 60) = v75;
      *(_DWORD*)(v84 + 80) = v77;
      *(_DWORD*)(v84 + 84) = v79;
      *(_DWORD*)(v84 + 88) = v79;
      *(_DWORD*)(v84 + 52) = 1045220557;
      *(_BYTE*)(v84 + 58) = v273;
      *(_QWORD*)(v84 + 64) = v270;
      *(_QWORD*)(v84 + 72) = v268;
      *(_QWORD*)(v84 + 96) = &v277;
      v86 = fw_memory_g_heap_manager;
      *(_BYTE*)(v85 + 92) = v81;
      v87 = fw_memory_HeapManager_Allocate_alt1(v86, 104, 16, 0);
      v88 = v60;
      *(_DWORD*)(v87 + 16) = v54;
      v89 = (_QWORD*)v87;
      *(_DWORD*)(v87 + 28) = v58;
      *(float*)(v87 + 40) = v63;
      *(_QWORD*)v87 = GameData_1fcacc0;
      *(_DWORD*)(v87 + 48) = v64;
      *(_BYTE*)(v87 + 52) = v66;
      *(_DWORD*)(v87 + 56) = v68;
      *(_DWORD*)(v87 + 20) = v55;
      *(_DWORD*)(v87 + 24) = v56;
      *(_QWORD*)(v87 + 8) = v274;
      *(_DWORD*)(v87 + 32) = v44;
      *(_DWORD*)(v87 + 36) = v88;
      *(_DWORD*)(v87 + 44) = 5;
      *(_DWORD*)(v87 + 60) = 1045220557;
      v10 = (__int64*)fw_memory_g_heap_manager_ptr;
      *(_BYTE*)(v83 + 8) = 14;
      *(_BYTE*)(v87 + 64) = v71;
      *(_BYTE*)(v87 + 65) = v73;
      *(_BYTE*)(v87 + 66) = v273;
      *(_DWORD*)(v87 + 68) = v75;
      *(_QWORD*)(v87 + 72) = v270;
      *(_QWORD*)(v87 + 80) = v268;
      *(_DWORD*)(v87 + 88) = v77;
      *(_DWORD*)(v87 + 92) = v79;
      *(_DWORD*)(v87 + 96) = v79;
      *(_BYTE*)(v87 + 100) = v81;
      *(_QWORD*)(v83 + 32) = 0;
      *(_QWORD*)(v83 + 40) = 0;
      *(_QWORD*)(v83 + 48) = 0;
      *(_QWORD*)(v83 + 56) = 0;
      *(_QWORD*)(v83 + 64) = 0;
      *(_QWORD*)(v83 + 72) = 0;
      *(_QWORD*)(v83 + 88) = 0;
      *(_QWORD*)(v83 + 96) = 0;
      *(_QWORD*)(v83 + 104) = 0;
      *(_QWORD*)(v83 + 112) = 0;
      *(_QWORD*)(v83 + 120) = 0;
      *(_QWORD*)(v83 + 128) = 0;
      *(_QWORD*)(v83 + 136) = 0;
      *(_QWORD*)(v83 + 144) = 0;
      *(_QWORD*)(v83 + 152) = 0;
      *(_QWORD*)(v83 + 160) = 0;
      v90 = *v10;
      strcpy((char*)(v83 + 9), "SSRPass");
      *(_QWORD*)(v83 + 168) = 0;
      *(_QWORD*)(v83 + 176) = 0;
      *(_QWORD*)(v83 + 184) = 0;
      *(_QWORD*)(v83 + 192) = 0;
      *(_QWORD*)(v83 + 200) = 0;
      *(_QWORD*)(v83 + 208) = 0;
      *(_QWORD*)(v83 + 216) = 0;
      *(_QWORD*)(v83 + 224) = 0;
      *(_QWORD*)(v83 + 232) = 0;
      *(_QWORD*)(v83 + 240) = 0;
      *(_QWORD*)(v83 + 248) = 0;
      *(_DWORD*)(v83 + 80) = v266;
      *(_BYTE*)(v83 + 84) = 1;
      *(_QWORD*)v83 = GameData_1fcabf8;
      v91 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v90, 104, 16, 0);
      v92 = *(_QWORD*)(v85 + 72);
      v93 = *(_QWORD*)(v85 + 80);
      v94 = *(_QWORD*)(v85 + 88);
      v95 = *(_QWORD*)(v85 + 96);
      *(_QWORD*)(v83 + 288) = v91;
      v91[10] = v93;
      v91[11] = v94;
      v96 = *(_QWORD*)(v85 + 40);
      v97 = *(_QWORD*)(v85 + 48);
      v91[12] = v95;
      v98 = *(_QWORD*)(v85 + 56);
      v99 = *(_QWORD*)(v85 + 64);
      v91[6] = v97;
      v91[7] = v98;
      v91[8] = v99;
      v91[9] = v92;
      v100 = *(_QWORD*)(v85 + 8);
      v101 = *(_QWORD*)(v85 + 16);
      *v91 = GameData_1fcac40;
      v91[1] = v100;
      v102 = *(_QWORD*)(v85 + 24);
      v103 = *(_QWORD*)(v85 + 32);
      v91[2] = v101;
      v91[3] = v102;
      v91[4] = v103;
      v91[5] = v96;
      v104 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v10, 104, 16, 0);
      v105 = v89[9];
      v106 = v89[10];
      v107 = v89[11];
      v108 = v89[12];
      *(_QWORD*)(v83 + 336) = v104;
      v104[10] = v106;
      v104[11] = v107;
      v104[12] = v108;
      v109 = v89[5];
      v110 = v89[7];
      v111 = v89[8];
      v104[6] = v89[6];
      v104[7] = v110;
      v104[8] = v111;
      v104[9] = v105;
      v112 = v89[1];
      v113 = v89[2];
      *v104 = GameData_1fcacc0;
      v104[1] = v112;
      v114 = v89[3];
      v115 = v89[4];
      v104[2] = v113;
      v104[3] = v114;
      v116 = *v10;
      v104[4] = v115;
      v104[5] = v109;
      v117 = 128;
      if (*(_QWORD*)(v116 + 200) == 0) {
        v117 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v116 + v117, (__int64)v89);
      (*(void (**)(__int64))(*(_QWORD*)v85 + 40LL))(v85);
      v119 = *(__int64**)(v275 + 8);
      v118 = *(_QWORD*)(v275 + 16);
      if ((unsigned __int64)v119 >= v118) {
        v122 = *(_QWORD*)v275;
        v123 = (signed __int64)v119 - *(_QWORD*)v275;
        v124 = (v123 >> 3) + 1;
        if (v124 >> 61 != 0) {
          goto LABEL_183;
        }
        v125 = v118 - v122;
        v120 = v274;
        if (v125 >> 2 > v124) {
          v124 = v125 >> 2;
        }
        if ((unsigned __int64)v125 >= 0x7FFFFFFFFFFFFFF8LL) {
          v126 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v126 = v124;
        }
        if (v126 != 0) {
          if (v126 >> 61 != 0) {
            goto LABEL_184;
          }
          v127 = fw_memory_HeapManager_Allocate_alt1(*v10, 8 * v126, 16, 0);
        }
        else {
          v127 = 0;
        }
        v128 = v127 + 8 * v126;
        v129 = v127 + v123 - 8 * (v123 >> 3);
        *(_QWORD*)(v127 + v123) = v83;
        v121 = v127 + v123 + 8;
        memcpy_alt1(v129, v122, v123);
        *(_QWORD*)v275 = v129;
        *(_QWORD*)(v275 + 8) = v121;
        *(_QWORD*)(v275 + 16) = v128;
        if (v122 != 0) {
          v130 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v130 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v10 + v130, v122);
        }
      }
      else {
        v120 = v274;
        *v119 = v83;
        v121 = (__int64)(v119 + 1);
      }
      v132 = (__int64)v262;
      v131 = v263;
      goto LABEL_148;
    }
    v50 = 0x1.0000000000000p-1f;
  }
  else {
    v50 = 0x1.0000000000000p-2f;
  }
  v44 = (int)(float)(v49 * v50);
  goto LABEL_62;
}

__int64 MainPassGeneral_b96ec0(__int64 result, __int64 a2, __int64 a3,
                               __int64 a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  signed __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD v28[2];

  v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a4 + 8LL) + 232LL);
  v5 = 2216;
  if (*(_BYTE*)(v4 + 2184) != 0) {
    v5 = 2180;
  }
  if (*(float*)(v4 + v5) > 0x0.0p+0f) {
    v7 = *(_QWORD*)a2;
    v6 = *(_QWORD*)(a2 + 8);
    v8 = *(_DWORD*)(a2 + 96);
    v9 = result;
    v12 = (__int64*)fw_memory_g_heap_manager_ptr;
    v13 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 240, 16, 0);
    *(_DWORD*)(v13 + 80) = v8;
    *(_QWORD*)(v13 + 32) = 0;
    *(_QWORD*)(v13 + 40) = 0;
    *(_QWORD*)(v13 + 48) = 0;
    *(_QWORD*)(v13 + 56) = 0;
    *(_QWORD*)(v13 + 64) = 0;
    *(_QWORD*)(v13 + 72) = 0;
    *(_QWORD*)(v13 + 88) = 0;
    *(_QWORD*)(v13 + 96) = 0;
    *(_QWORD*)(v13 + 104) = 0;
    *(_QWORD*)(v13 + 128) = 0;
    *(_QWORD*)(v13 + 136) = 0;
    strcpy((char*)(v13 + 8), " MapCharaMaskPass");
    *(_BYTE*)(v13 + 84) = 1;
    *(_QWORD*)v13 = GameData_1fcb180;
    *(_QWORD*)(v13 + 152) = a3;
    *(_QWORD*)(v13 + 200) = v9;
    *(_DWORD*)(v13 + 112) = -1;
    *(_QWORD*)(v13 + 144) = GameData_1fcb060;
    *(_QWORD*)(v13 + 176) = v13 + 144;
    *(_QWORD*)(v13 + 192) = GameData_1fcb0f0;
    v15 = *(__int64**)(a2 + 8);
    v14 = *(_QWORD*)(a2 + 16);
    *(_QWORD*)(v13 + 224) = v13 + 192;
    if ((unsigned __int64)v15 >= v14) {
      v17 = *(_QWORD*)a2;
      v18 = (signed __int64)v15 - *(_QWORD*)a2;
      v19 = (v18 >> 3) + 1;
      if (v19 >> 61 != 0) {
        GameRoutine_b32f30();
      }
      v20 = v14 - v17;
      if (v20 >> 2 > v19) {
        v19 = v20 >> 2;
      }
      if ((unsigned __int64)v20 >= 0x7FFFFFFFFFFFFFF8LL) {
        v21 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v21 = v19;
      }
      if (v21 != 0) {
        if (v21 >> 61 != 0) {
          GameRoutine_60a210_alt1();
        }
        v22 = v13;
        v23 = fw_memory_HeapManager_Allocate_alt1(*v12, 8 * v21, 16, 0);
        v13 = v22;
      }
      else {
        v23 = 0;
      }
      v24 = v23 + 8 * v21;
      v25 = v23 + v18 - 8 * (v18 >> 3);
      *(_QWORD*)(v23 + v18) = v13;
      v16 = v23 + v18 + 8;
      memcpy_alt1(v25, v17, v18);
      *(_QWORD*)a2 = v25;
      *(_QWORD*)(a2 + 8) = v16;
      *(_QWORD*)(a2 + 16) = v24;
      if (v17 != 0) {
        v26 = 128;
        if (*(_QWORD*)(*v12 + 200) == 0) {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v12 + v26, v17);
      }
    }
    else {
      *v15 = v13;
      v16 = (__int64)(v15 + 1);
    }
    *(_QWORD*)(a2 + 8) = v16;
    v27 = *(_QWORD*)(v16 - 8);
    v28[0] = a2;
    v28[1] = v27;
    result =
        (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v27 + 16LL))(v27, v28);
    *(_QWORD*)(a3 + 120) =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v6 - v7) & 0x7FFFFFFF8LL)) +
                   128LL);
  }
  return result;
}

__int64 gfxa_MainPassGeneral_SetupPrePass_lambda0_Invoke(__int64 a1, __int64 a2,
                                                         __int64* a3)
{
  unsigned __int64* v3;
  _QWORD* v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  int v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  char* v27;
  __int64 v28;
  long double v29;
  __int64 v30;
  unsigned __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  int* v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned int v37;
  int v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  long double v42;
  __int64 v43;
  __int64 v44;
  __int64 result;
  __int64* v46;
  __int64* v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  int v50;
  unsigned int v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  long double v55;
  __int64 v56;
  __int64 v57;
  int* v58;
  _QWORD v59[2];
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  int v66;
  __int64 v67;
  char v68;
  int v69;

  v3 = *(unsigned __int64**)(a1 + 8);
  LODWORD(v64) = 0;
  v69 = 0;
  v4 = *(_QWORD**)(a2 + 8);
  v67 = 0x100000001LL;
  v6 = *v3;
  if ((*(_BYTE*)(*v3 + 16700) & 1) != 0) {
    v7 = *(_QWORD*)(*(_QWORD*)(v6 + 16672) + 24LL);
    v65 = v7;
    v6 = HIDWORD(v7);
  }
  else {
    v8 = *(_DWORD*)(v6 + 13304);
    LODWORD(v6) = *(_DWORD*)(v6 + 13308);
    v65 = v8;
  }
  v66 = v6;
  v68 = 1;
  HIDWORD(v64) = 13;
  *v4 = GameRoutine_b509c0(a3, "Lighting", &v64);
  v68 = 0;
  HIDWORD(v64) = 5;
  v4[1] = GameRoutine_b509c0(a3, "GBuffer0", &v64);
  HIDWORD(v64) = 4;
  v4[2] = GameRoutine_b509c0(a3, "GBuffer1", &v64);
  HIDWORD(v64) = 4;
  v4[3] = GameRoutine_b509c0(a3, "GBuffer2", &v64);
  HIDWORD(v64) = 20;
  v4[4] = GameRoutine_b509c0(a3, "GBuffer3", &v64);
  HIDWORD(v64) = 11;
  v4[5] = GameRoutine_b509c0(a3, "GBuffer4", &v64);
  v68 = 1;
  v69 = 0;
  v64 = 0x1500000000LL;
  v67 = 0x100000001LL;
  v9 = *v3;
  if ((*(_BYTE*)(*v3 + 16700) & 1) != 0) {
    v10 = *(_QWORD*)(*(_QWORD*)(v9 + 16672) + 24LL);
    v65 = v10;
    v9 = HIDWORD(v10);
  }
  else {
    v11 = *(_DWORD*)(v9 + 13304);
    LODWORD(v9) = *(_DWORD*)(v9 + 13308);
    v65 = v11;
  }
  v12 = *a3;
  v66 = v9;
  v13 = ResourceBuilder_b53170(v12, "Depth", 5, &v64);
  v14 = (_QWORD*)a3[1];
  v15 = v13;
  v17 = (__int64*)v14[5];
  v16 = v14[6];
  if ((unsigned __int64)v17 >= v16) {
    v19 = v14[4];
    v20 = (char*)v17 - v19;
    v21 = ((__int64)v17 - v19) >> 3;
    v22 = v21 + 1;
    if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
      GameRoutine_b32f50();
    }
    v23 = v16 - v19;
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
        GameRoutine_60a210(v13);
      }
      v25 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v24, 16, 0);
    }
    else {
      v25 = 0;
    }
    v26 = v25 + 8 * v24;
    v27 = (char*)v17 - v19;
    v28 = (__int64)&v20[v25 + -8 * v21];
    *(_QWORD*)&v20[v25] = v15;
    v18 = (__int64)&v20[v25 + 8];
    memcpy(v28, v19, v27);
    v14[4] = v28;
    v14[5] = v18;
    v14[6] = v26;
    if (v19 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v30 = 56;
      }
      ((__int64 (*)(__int64, __int64))nn_mem_StandardAllocator_Free)(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, (__int64)v19);
    }
  }
  else {
    *v17 = v13;
    v18 = (__int64)(v17 + 1);
  }
  v14[5] = v18;
  v4[6] = v15;
  v31 = v3[1];
  v32 = (_QWORD*)v4[7];
  v33 = (_QWORD*)v4[8];
  v34 = *(int**)(v31 + 288);
  v35 = v33 - v32;
  v36 = v34[236];
  v58 = v34;
  if (v36 <= v35) {
    if (v36 < v35) {
      v33 = &v32[v36];
      v4[8] = v33;
    }
  }
  else {
    GameRoutine_b97a20(v4 + 7, v36 - v35);
    v32 = (_QWORD*)v4[7];
    v33 = (_QWORD*)v4[8];
  }
  if (v32 != v33) {
    v37 = 0;
    v38 = v58[241];
    do {
      v67 = 0x100000001LL;
      v68 = 1;
      v69 = 0;
      v64 = 0x1700000003LL;
      v65 = v38;
      v66 = v38;
      std___1_to_string_1a0a790((void*)v59, v37);
      v39 = (__int64*)GameRoutine_1a0a680(v59, 0, "PointShadowMap", 14);
      v41 = v39[1];
      v40 = v39[2];
      v61 = *v39;
      v62 = v41;
      v63 = v40;
      v39[1] = 0;
      v39[2] = 0;
      *v39 = 0;
      *v32 = TaskPassNodes_b978e0(a3, &v61, &v64);
      if ((v61 & 1) != 0 && v63 != 0) {
        v43 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v43 = 56;
        }
        ((__int64 (*)(__int64, __int64))nn_mem_StandardAllocator_Free)(
            fw_memory_g_heap_manager + v43, (__int64)v63);
      }
      if ((v59[0] & 1) != 0 && v60 != 0) {
        v44 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v44 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v44, v42);
      }
      ++v32;
      ++v37;
    } while (v32 != v33);
  }
  v46 = (__int64*)v4[10];
  v47 = (__int64*)v4[11];
  result = (__int64)(v4 + 10);
  v48 = v58[237];
  v49 = v47 - v46;
  if (v48 <= v49) {
    if (v48 < v49) {
      v47 = &v46[v48];
      v4[11] = v47;
    }
  }
  else {
    result = GameRoutine_b97a20(result, v48 - v49);
    v46 = (__int64*)v4[10];
    v47 = (__int64*)v4[11];
  }
  if (v46 != v47) {
    v50 = v58[242];
    v51 = 0;
    do {
      v64 = 0x1700000000LL;
      v67 = 0x100000001LL;
      v68 = 1;
      v69 = 0;
      v65 = v50;
      v66 = v50;
      std___1_to_string_1a0a790((void*)v59, v51);
      v52 = (__int64*)GameRoutine_1a0a680(v59, 0, "SpotShadowMap", 13);
      v54 = v52[1];
      v53 = v52[2];
      v61 = *v52;
      v62 = v54;
      v63 = v53;
      v52[1] = 0;
      v52[2] = 0;
      *v52 = 0;
      result = TaskPassNodes_b978e0(a3, &v61, &v64);
      *v46 = result;
      if ((v61 & 1) != 0 && v63 != 0) {
        v56 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v56 = 56;
        }
        result = ((__int64 (*)(__int64, __int64))nn_mem_StandardAllocator_Free)(
            fw_memory_g_heap_manager + v56, (__int64)v63);
      }
      if ((v59[0] & 1) != 0 && v60 != 0) {
        v57 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v57 = 56;
        }
        result =
            nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v57, v55);
      }
      ++v46;
      ++v51;
    } while (v46 != v47);
  }
  return result;
}

__int64 gfxa_MainPassGeneral_SetupGeometryPass_lambda3_Invoke(__int64 a1,
                                                              __int64 a2,
                                                              __int64* a3)
{
  __int64* v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  char v10;
  int v11;
  struct {
    _QWORD v13[2];
    int v14;
    int v15;
    char v16;
  } v13_;

  v3 = *(__int64**)(a1 + 8);
  v4 = *(_QWORD*)(a2 + 24);
  v5 = *(_QWORD**)a2;
  v6 = *(_QWORD**)(a2 + 8);
  v7 = *v3;
  v8 = v3[5];
  LODWORD(v4) = *(unsigned __int8*)(v4 + 117);
  v9 = *((_DWORD*)v3 + 23);
  v13_.v13[0] = v7;
  v13_.v13[1] = v8;
  v10 = v4 ^ 1;
  if ((_DWORD)v4 != 0) {
    v11 = 0;
  }
  else {
    v11 = 2;
  }
  v13_.v16 = v10;
  v13_.v14 = v9;
  v13_.v15 = v11;
  return gfxa_TaskGBuffer_Execute(v5, v6, a3, (__int64)v13_.v13);
}

__int64 gfxa_MainPassGeneral_SetupForwardPass_lambda2_Invoke(_QWORD* a1,
                                                             _QWORD** a2,
                                                             __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64** v11;
  _QWORD* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  struct {
    _QWORD v22[9];
    _BYTE v23[13];
    char gap93_[3];
    __int64 v24;
    __int64 v25;
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
  } v22_;

  v4 = a1[5];
  v3 = a1[6];
  v22_.v24 = 0;
  v22_.v22[4] = v4;
  v22_.v22[5] = v3;
  *(_QWORD*)&v22_.v23[5] = *(_QWORD*)((char*)a1 + 85);
  v7 = a1[10];
  v22_.v22[8] = a1[9];
  *(_QWORD*)v22_.v23 = v7;
  v8 = a1[8];
  v22_.v22[6] = a1[7];
  v22_.v22[7] = v8;
  v9 = a1[2];
  v22_.v22[0] = a1[1];
  v22_.v22[1] = v9;
  v10 = a1[4];
  v22_.v22[2] = a1[3];
  v22_.v22[3] = v10;
  v11 = (__int64**)a1[12];
  v12 = *a2;
  v13 = *v11;
  v15 = v13[59];
  v14 = v13[60];
  v22_.v32 = v13[5];
  v22_.v29 = v13[6];
  v22_.v31 = v13[7];
  v16 = v13[1];
  v22_.v34 = v14;
  v17 = v13[63];
  v22_.v30 = v16;
  v22_.v33 = v13[9];
  v18 = *v13;
  v22_.v35 = v15;
  v19 = v13[65];
  v20 = v13[66];
  v22_.v25 = v17;
  v22_.v26 = v19;
  v22_.v27 = v20;
  v22_.v28 = v18;
  ResourceBuilder_b7b290(v12, (__int64)a3, v22_.v22);
  return ResourceBuilder_b7b380(a2[1], a3, (__int64)v22_.v22);
}

__int64 gfxa_MainPassGeneral_SetupForwardPass_lambda4_Invoke(__int64 a1,
                                                             __int64 a2,
                                                             __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v11[9];
    _BYTE v12[13];
    char gap93_[3];
    __int64 v13;
    __int64 v14;
    __int64 v15;
    __int64 v16;
    __int64 v17;
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
  } v11_;

  v4 = *(_QWORD*)(a1 + 40);
  v3 = *(_QWORD*)(a1 + 48);
  v11_.v23 = 0;
  v11_.v24 = 0;
  v11_.v21 = 0;
  v11_.v22 = 0;
  v11_.v19 = 0;
  v11_.v20 = 0;
  v11_.v17 = 0;
  v11_.v18 = 0;
  v5 = *(__int64**)(a2 + 8);
  v11_.v15 = 0;
  v11_.v16 = 0;
  v11_.v14 = 0;
  v11_.v11[4] = v4;
  v11_.v11[5] = v3;
  *(_QWORD*)&v11_.v12[5] = *(_QWORD*)(a1 + 85);
  v6 = *(_QWORD*)(a1 + 80);
  v11_.v11[8] = *(_QWORD*)(a1 + 72);
  *(_QWORD*)v11_.v12 = v6;
  v7 = *(_QWORD*)(a1 + 64);
  v11_.v11[6] = *(_QWORD*)(a1 + 56);
  v11_.v11[7] = v7;
  v8 = *(_QWORD*)(a1 + 16);
  v11_.v11[0] = *(_QWORD*)(a1 + 8);
  v11_.v11[1] = v8;
  v9 = *(_QWORD*)(a1 + 32);
  v11_.v11[2] = *(_QWORD*)(a1 + 24);
  v11_.v11[3] = v9;
  v11_.v13 = ***(_QWORD***)(a1 + 96);
  return ResourceBuilder_b7b380(v5, a3, (__int64)v11_.v11);
}

#pragma GCC visibility pop
