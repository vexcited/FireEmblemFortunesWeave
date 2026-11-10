#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* std___1_to_string_1a0a790(_QWORD* __return_ptr, _QWORD);
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
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, v29);
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
      std___1_to_string_1a0a790(v59, v37);
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
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v43, v42);
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
      std___1_to_string_1a0a790(v59, v51);
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
        result =
            nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v56, v55);
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
