#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18e3c20(__int64*, _QWORD*, _QWORD*, _QWORD*, __int64);
__int64 GameRoutine_b48e70(__int64, __int64);
__int64 GameRoutine_b48f90(__int64, __int64);
__int64 GameRoutine_b4a3f0(__int64, __int64);
__int64 GameRoutine_b4f220(__int64, __int64);
__int64 GameRoutine_b50c60(__int64, __int64, __int64*);
__int64 GameRoutine_b5acb0(__int64, __int64, __int64*);
__int64 GameRoutine_b60f30(__int64*, __int64, __int64);
__int64 GameRoutine_b79fc0(_DWORD*, __int64, __int64, __int64);
__int64 ResourceBuilder_b5a4b0(__int64, __int64);
__int64 TaskDeferredLit_b57f50(unsigned int*, _QWORD*, __int64);
__int64 TaskDeferredLit_b58ad0(__int64, _QWORD**, _QWORD*, __int64*, __int64);
__int64 TaskDeferredLit_b58e40(__int64, _QWORD**, _QWORD*, __int64*, __int64);
__int64 TaskSSAO_b7a910(__int64, __int64, _QWORD*, _QWORD*);
__int64 gfxa_MainPassLighting_SetupAOPass1_lambda1_Invoke(__int64 a1,
                                                          __int64 a2,
                                                          _QWORD* a3);
__int64 gfxa_MainPassLighting_SetupAOPass1_lambda2_Invoke(__int64 a1,
                                                          __int64 a2,
                                                          __int64 a3);
__int64 gfxa_MainPassLighting_SetupAOPass1_lambda5_Invoke(__int64 a1,
                                                          __int64 a2,
                                                          _QWORD* a3);
__int64 gfxa_MainPassLighting_SetupAOPass2_lambda0_Invoke(__int64 a1,
                                                          __int64** a2,
                                                          __int64* a3);
__int64 gfxa_MainPassLighting_SetupLightingPass_lambda1_Invoke(__int64 a1,
                                                               __int64 a2,
                                                               __int64* a3);
__int64 gfxa_TaskLocalShadow_Execute(__int64, __int64, _QWORD*, __int64);
__int64 gfxa_MainPassLighting_SetupLocalShadowPass_lambda1_Invoke(__int64 a1,
                                                                  __int64* a2,
                                                                  _QWORD* a3);
__attribute__((swiftcall)) void std___1_to_string_1a0a790(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void std___1_to_string_1a0ab70(PSEUDO_X8, _QWORD);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 ResourceBuilder_b528e0(__int64*, unsigned __int8*, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
extern __int64 (*GameData_1fcd8c0[])();
extern __int64 (*GameData_1fcd950[])();
extern __int64 (*GameData_1fcd9e0[])();
extern __int64 (*GameData_1fcda28[])();
extern __int64 (*GameData_1fcdaa8[])();
extern __int64 (*GameData_1fcdb28[])();
extern __int64 (*GameData_1fcdbb8[])();
extern __int64 (*GameData_1fcdc48[])();
extern __int64 (*GameData_1fcdc90[])();
extern __int64 (*GameData_1fcdd20[])();
extern __int64 (*GameData_1fcddb0[])();
extern __int64 (*GameData_1fce0c8[])();
extern __int64 (*GameData_1fce158[])();
extern __int64 (*GameData_1fce1e8[])();
extern __int64 (*GameData_1fce230[])();
extern __int64 (*GameData_1fce2c0[])();
extern __int64 (*GameData_1fce350[])();
extern __int64 (*GameData_1fce398[])();
extern __int64 (*GameData_1fce428[])();
extern __int64 (*GameData_1fce4b8[])();
extern __int64 (*GameData_1fce668[])();
extern __int64 (*GameData_1fce6f8[])();
extern __int64 (*GameData_1fce788[])();
extern __int64 (*GameData_1fce7d0[])();
extern __int64 (*GameData_1fce860[])();
extern __int64 (*GameData_1fce8f0[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_b32f30();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 gfxa_MainPassLighting_SetupAOPass1(__int64* a1, __int64 a2, __int64 a3,
                                           __int64* a4);
__int64 gfxa_MainPassLighting_SetupMainShadowPass(__int64 a1, __int64 a2,
                                                  _QWORD* a3, _QWORD* a4);
__int64 gfxa_MainPassLighting_SetupCharaShadowPass(__int64 result, __int64 a2,
                                                   _QWORD* a3, _QWORD* a4,
                                                   __int64 a5);
void gfxa_MainPassLighting_SetupMainShadowPass_lambda2_Invoke(__int64 a1,
                                                              __int64** a2,
                                                              __int64* a3);
void gfxa_MainPassLighting_SetupMainShadowPass_lambda4_Invoke(__int64 a1,
                                                              __int64 a2,
                                                              __int64* a3);
__int64 TaskCapsuleAO_18dff40(__int64*, _QWORD*, _QWORD*, _QWORD*, __int64);
__int64 gfxa_MainPassLighting_SetupAOPass2_lambda1_Invoke(__int64 a1,
                                                          __int64 a2,
                                                          _QWORD* a3);

__int64 gfxa_MainPassLighting_SetupAOPass1(__int64* a1, __int64 a2, __int64 a3,
                                           __int64* a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64* v16;
  unsigned __int64 v17;
  __int64* v18;
  __int64 v19;
  signed __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64* v39;
  unsigned __int64 v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  signed __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64* v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  int v55;
  __int64 v56;
  __int64* v57;
  unsigned __int64 v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  signed __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64* v71;
  __int64 result;
  __int64 v73;
  __int64 v74;
  struct {
    __int64 (**v75)();
    __int64* v76;
    __int64* v77;
    __int64* v78;
    __int64 (***v79)();
  } v75_;

  v4 = *a4;
  v73 = 0;
  v74 = a3;
  v8 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 56LL);
  v9 = 280;
  if (*(_BYTE*)(v8 + 250) != 0) {
    v9 = 249;
  }
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(v8 + v9) & 1) != 0) {
    v11 = 600;
    if (*(_BYTE*)(v8 + 568) != 0) {
      v11 = 564;
    }
    if (*(float*)(v8 + v11) > 0x0.0p+0f) {
      v13 = *(_QWORD*)a2;
      v12 = *(_QWORD*)(a2 + 8);
      v14 = *(_DWORD*)(a2 + 96);
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 256, 16, 0);
      *(_BYTE*)(v15 + 8) = 16;
      *(_QWORD*)(v15 + 32) = 0;
      *(_QWORD*)(v15 + 40) = 0;
      *(_QWORD*)(v15 + 48) = 0;
      *(_QWORD*)(v15 + 56) = 0;
      *(_QWORD*)(v15 + 64) = 0;
      *(_QWORD*)(v15 + 72) = 0;
      *(_DWORD*)(v15 + 80) = v14;
      *(_QWORD*)v15 = GameData_1fcd9e0;
      v75_.v77 = &v74;
      v75_.v75 = GameData_1fcd8c0;
      v75_.v76 = a1;
      v75_.v79 = &v75_.v75;
      *(_QWORD*)(v15 + 208) = GameData_1fcd950;
      *(_QWORD*)(v15 + 88) = 0;
      *(_QWORD*)(v15 + 96) = 0;
      *(_QWORD*)(v15 + 104) = 0;
      *(_QWORD*)(v15 + 112) = 0;
      *(_QWORD*)(v15 + 120) = 0;
      *(_QWORD*)(v15 + 128) = 0;
      *(_QWORD*)(v15 + 136) = 0;
      *(_QWORD*)(v15 + 144) = 0;
      *(_QWORD*)(v15 + 152) = 0;
      *(_QWORD*)(v15 + 240) = v15 + 208;
      *(_QWORD*)(v15 + 216) = a1;
      strcpy((char*)(v15 + 9), "SSAOPass");
      *(_BYTE*)(v15 + 84) = 1;
      *(_QWORD*)(v15 + 160) = GameData_1fcd8c0;
      *(_QWORD*)(v15 + 192) = v15 + 160;
      v16 = v75_.v77;
      *(_QWORD*)(v15 + 168) = v75_.v76;
      *(_QWORD*)(v15 + 176) = v16;
      v18 = *(__int64**)(a2 + 8);
      v17 = *(_QWORD*)(a2 + 16);
      if ((unsigned __int64)v18 < v17) {
        goto LABEL_18;
      }
    LABEL_8:
      v19 = *(_QWORD*)a2;
      v20 = (signed __int64)v18 - *(_QWORD*)a2;
      v21 = (v20 >> 3) + 1;
      if (v21 >> 61 != 0) {
        goto LABEL_62;
      }
      v22 = v17 - v19;
      if (v22 >> 2 > v21) {
        v21 = v22 >> 2;
      }
      if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF8LL) {
        v23 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v23 = v21;
      }
      if (v23 != 0) {
        if (v23 >> 61 != 0) {
          goto LABEL_63;
        }
        v24 = v15;
        v25 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v23, 16, 0);
        v15 = v24;
      }
      else {
        v25 = 0;
      }
      v28 = v25 + 8 * v23;
      v29 = v25 + v20 - 8 * (v20 >> 3);
      *(_QWORD*)(v25 + v20) = v15;
      v27 = v25 + v20 + 8;
      memcpy(v29, v19, v20);
      *(_QWORD*)a2 = v29;
      *(_QWORD*)(a2 + 8) = v27;
      *(_QWORD*)(a2 + 16) = v28;
      v10 = (__int64*)fw_memory_g_heap_manager_ptr;
      if (v19 != 0) {
        v30 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v30 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, v19);
      }
    LABEL_24:
      *(_QWORD*)(a2 + 8) = v27;
      v31 = v12 - v13;
      v32 = *(__int64**)(v27 - 8);
      v75_.v75 = (__int64 (**)(void))a2;
      v75_.v76 = v32;
      (*(void (**)(__int64*, __int64 (***)(void)))(*v32 + 16))(v32, &v75_.v75);
      v34 = *(_QWORD*)a2;
      v33 = *(_QWORD*)(a2 + 8);
      v73 =
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + (v31 & 0x7FFFFFFF8LL)) + 120LL);
      v35 = *(_QWORD*)(*(_QWORD*)(*a4 + 8) + 40LL);
      v36 = 120;
      if (*(_BYTE*)(v35 + 90) != 0) {
        v36 = 89;
      }
      if ((*(_BYTE*)(v35 + v36) & 1) != 0) {
        v37 = *(_DWORD*)(a2 + 96);
        v38 = fw_memory_HeapManager_Allocate(*v10, 240, 16, 0);
        *(_QWORD*)(v38 + 32) = 0;
        *(_QWORD*)(v38 + 40) = 0;
        *(_QWORD*)(v38 + 48) = 0;
        *(_QWORD*)(v38 + 56) = 0;
        *(_QWORD*)(v38 + 64) = 0;
        *(_QWORD*)(v38 + 72) = 0;
        *(_DWORD*)(v38 + 80) = v37;
        *(_QWORD*)(v38 + 120) = 0;
        *(_QWORD*)(v38 + 128) = 0;
        *(_QWORD*)(v38 + 104) = 0;
        *(_QWORD*)(v38 + 112) = 0;
        *(_QWORD*)(v38 + 88) = 0;
        *(_QWORD*)(v38 + 96) = 0;
        v75_.v77 = &v73;
        v75_.v75 = GameData_1fcdb28;
        v75_.v76 = &v74;
        v75_.v79 = &v75_.v75;
        *(_QWORD*)(v38 + 200) = a1;
        strcpy((char*)(v38 + 8), "\"ContactShadowPass");
        *(_BYTE*)(v38 + 84) = 1;
        *(_QWORD*)(v38 + 192) = GameData_1fcdbb8;
        *(_QWORD*)v38 = GameData_1fcdc48;
        *(_QWORD*)(v38 + 144) = GameData_1fcdb28;
        *(_QWORD*)(v38 + 224) = v38 + 192;
        *(_QWORD*)(v38 + 176) = v38 + 144;
        v39 = v75_.v77;
        *(_QWORD*)(v38 + 152) = v75_.v76;
        *(_QWORD*)(v38 + 160) = v39;
        v41 = *(__int64**)(a2 + 8);
        v40 = *(_QWORD*)(a2 + 16);
        if ((unsigned __int64)v41 >= v40) {
          v43 = *(_QWORD*)a2;
          v44 = (signed __int64)v41 - *(_QWORD*)a2;
          v45 = (v44 >> 3) + 1;
          if (v45 >> 61 != 0) {
            goto LABEL_62;
          }
          v46 = v40 - v43;
          v47 = v10;
          if (v46 >> 2 > v45) {
            v45 = v46 >> 2;
          }
          if ((unsigned __int64)v46 >= 0x7FFFFFFFFFFFFFF8LL) {
            v48 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v48 = v45;
          }
          if (v48 != 0) {
            if (v48 >> 61 != 0) {
              goto LABEL_63;
            }
            v49 = v38;
            v50 = fw_memory_HeapManager_Allocate(*v47, 8 * v48, 16, 0);
            v38 = v49;
          }
          else {
            v50 = 0;
          }
          v51 = v50 + 8 * v48;
          v52 = v50 + v44 - 8 * (v44 >> 3);
          *(_QWORD*)(v50 + v44) = v38;
          v42 = v50 + v44 + 8;
          memcpy(v52, v43, v44);
          *(_QWORD*)a2 = v52;
          *(_QWORD*)(a2 + 8) = v42;
          *(_QWORD*)(a2 + 16) = v51;
          if (v43 != 0) {
            v10 = v47;
            v53 = 128;
            if (*(_QWORD*)(*v47 + 200) == 0) {
              v53 = 56;
            }
            nn_mem_StandardAllocator_Free(*v47 + v53, v43);
          }
          else {
            v10 = v47;
          }
        }
        else {
          *v41 = v38;
          v42 = (__int64)(v41 + 1);
        }
        *(_QWORD*)(a2 + 8) = v42;
        v54 = *(__int64**)(v42 - 8);
        v75_.v75 = (__int64 (**)(void))a2;
        v75_.v76 = v54;
        (*(void (**)(__int64*, __int64 (***)(void)))(*v54 + 16))(v54,
                                                                 &v75_.v75);
        v73 = *(
            _QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v33 - v34) & 0x7FFFFFFF8LL)) +
                     128LL);
      }
      v55 = *(_DWORD*)(a2 + 96);
      v56 = fw_memory_HeapManager_Allocate(*v10, 224, 16, 0);
      *(_QWORD*)(v56 + 32) = 0;
      *(_QWORD*)(v56 + 40) = 0;
      *(_QWORD*)(v56 + 48) = 0;
      *(_QWORD*)(v56 + 56) = 0;
      *(_QWORD*)(v56 + 64) = 0;
      *(_QWORD*)(v56 + 72) = 0;
      *(_DWORD*)(v56 + 80) = v55;
      *(_QWORD*)(v56 + 112) = 0;
      *(_QWORD*)(v56 + 120) = 0;
      *(_QWORD*)(v56 + 96) = 0;
      *(_QWORD*)(v56 + 104) = 0;
      *(_QWORD*)(v56 + 88) = 0;
      *(_QWORD*)(v56 + 184) = a1;
      v75_.v77 = &v74;
      v75_.v78 = &v73;
      v75_.v79 = &v75_.v75;
      *(_BYTE*)(v56 + 8) = 18;
      v75_.v75 = GameData_1fcdc90;
      v75_.v76 = a1;
      strcpy((char*)(v56 + 9), "DecalPass");
      *(_BYTE*)(v56 + 84) = 1;
      *(_QWORD*)v56 = GameData_1fcddb0;
      *(_QWORD*)(v56 + 128) = GameData_1fcdc90;
      *(_QWORD*)(v56 + 136) = a1;
      *(_QWORD*)(v56 + 144) = &v74;
      v57 = v75_.v78;
      *(_QWORD*)(v56 + 176) = GameData_1fcdd20;
      *(_QWORD*)(v56 + 208) = v56 + 176;
      *(_QWORD*)(v56 + 152) = v57;
      *(_QWORD*)(v56 + 160) = v56 + 128;
      v59 = *(__int64**)(a2 + 8);
      v58 = *(_QWORD*)(a2 + 16);
      if ((unsigned __int64)v59 < v58) {
        *v59 = v56;
        v60 = (__int64)(v59 + 1);
        goto LABEL_61;
      }
      v61 = *(_QWORD*)a2;
      v62 = (signed __int64)v59 - *(_QWORD*)a2;
      v63 = (v62 >> 3) + 1;
      if (v63 >> 61 != 0) {
      LABEL_62:
        GameRoutine_b32f30();
      }
      v64 = v58 - v61;
      if (v64 >> 2 > v63) {
        v63 = v64 >> 2;
      }
      if ((unsigned __int64)v64 >= 0x7FFFFFFFFFFFFFF8LL) {
        v65 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v65 = v63;
      }
      if (v65 != 0) {
        if (v65 >> 61 == 0) {
          v66 = v56;
          v67 = fw_memory_HeapManager_Allocate(*v10, 8 * v65, 16, 0);
          v56 = v66;
          goto LABEL_57;
        }
      LABEL_63:
        GameRoutine_60a210();
      }
      v67 = 0;
    LABEL_57:
      v68 = v67 + 8 * v65;
      v69 = v67 + v62 - 8 * (v62 >> 3);
      *(_QWORD*)(v67 + v62) = v56;
      v60 = v67 + v62 + 8;
      memcpy(v69, v61, v62);
      *(_QWORD*)a2 = v69;
      *(_QWORD*)(a2 + 8) = v60;
      *(_QWORD*)(a2 + 16) = v68;
      if (v61 != 0) {
        v70 = 128;
        if (*(_QWORD*)(*v10 + 200) == 0) {
          v70 = 56;
        }
        nn_mem_StandardAllocator_Free(*v10 + v70, v61);
      }
    LABEL_61:
      *(_QWORD*)(a2 + 8) = v60;
      v71 = *(__int64**)(v60 - 8);
      v75_.v75 = (__int64 (**)(void))a2;
      v75_.v76 = v71;
      result = (*(__int64 (**)(__int64*, __int64 (***)(void)))(*v71 + 16))(
          v71, &v75_.v75);
      *(_QWORD*)(v74 + 80) = v73;
      return result;
    }
  }
  v13 = *(_QWORD*)a2;
  v12 = *(_QWORD*)(a2 + 8);
  v26 = *(_DWORD*)(a2 + 96);
  v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       256, 16, 0);
  *(_QWORD*)(v15 + 32) = 0;
  *(_QWORD*)(v15 + 40) = 0;
  *(_QWORD*)(v15 + 48) = 0;
  *(_QWORD*)(v15 + 56) = 0;
  *(_QWORD*)(v15 + 64) = 0;
  *(_QWORD*)(v15 + 72) = 0;
  *(_DWORD*)(v15 + 80) = v26;
  *(_QWORD*)v15 = GameData_1fcd9e0;
  *(_QWORD*)(v15 + 88) = 0;
  *(_QWORD*)(v15 + 96) = 0;
  *(_QWORD*)(v15 + 104) = 0;
  *(_QWORD*)(v15 + 112) = 0;
  *(_QWORD*)(v15 + 120) = 0;
  *(_QWORD*)(v15 + 128) = 0;
  *(_QWORD*)(v15 + 136) = 0;
  *(_QWORD*)(v15 + 144) = 0;
  *(_BYTE*)(v15 + 8) = 30;
  *(_BYTE*)(v15 + 84) = 1;
  *(_QWORD*)(v15 + 152) = 0;
  *(_QWORD*)(v15 + 168) = a1;
  *(_QWORD*)(v15 + 216) = a1;
  strcpy((char*)(v15 + 9), "SSAOPass(dummy)");
  *(_QWORD*)(v15 + 160) = GameData_1fcda28;
  *(_QWORD*)(v15 + 192) = v15 + 160;
  *(_QWORD*)(v15 + 208) = GameData_1fcdaa8;
  v18 = *(__int64**)(a2 + 8);
  v17 = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(v15 + 240) = v15 + 208;
  if ((unsigned __int64)v18 >= v17) {
    goto LABEL_8;
  }
LABEL_18:
  *v18 = v15;
  v27 = (__int64)(v18 + 1);
  goto LABEL_24;
}

__int64 gfxa_MainPassLighting_SetupMainShadowPass(__int64 a1, __int64 a2,
                                                  _QWORD* a3, _QWORD* a4)
{
  __int64 v4;
  __int64 v5;
  __int64* v6;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 result;
  _QWORD* v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64* v52;
  int v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  _QWORD* v69;
  _QWORD* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  __int64 v79;
  _QWORD* v80;
  _QWORD* v81;
  __int64 v82;
  _QWORD* v83;
  _QWORD* v84;
  struct {
    __int64 (**v85)();
    _QWORD* v86;
    __int64 v87;
    _QWORD* v88;
    __int64 (***v89)();
  } v85_;

  v4 = *a4;
  v83 = a4;
  v84 = a3;
  v5 = *(_QWORD*)a2;
  v6 = *(__int64**)(a2 + 8);
  v9 = *(_DWORD*)(a2 + 96);
  v10 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 24LL);
  v11 = 120;
  if (*(_BYTE*)(v10 + 90) != 0) {
    v11 = 89;
  }
  v12 = (__int64*)fw_memory_g_heap_manager_ptr;
  v13 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(v10 + v11) & 1) == 0) {
    v21 = fw_memory_HeapManager_Allocate(v13, 240, 16, 0);
    *(_DWORD*)(v21 + 80) = v9;
    *(_QWORD*)(v21 + 32) = 0;
    *(_QWORD*)(v21 + 40) = 0;
    *(_QWORD*)(v21 + 48) = 0;
    *(_QWORD*)(v21 + 56) = 0;
    *(_QWORD*)(v21 + 64) = 0;
    *(_QWORD*)(v21 + 72) = 0;
    *(_QWORD*)(v21 + 88) = 0;
    *(_QWORD*)(v21 + 96) = 0;
    *(_QWORD*)(v21 + 104) = 0;
    *(_QWORD*)(v21 + 112) = 0;
    *(_QWORD*)(v21 + 120) = 0;
    *(_QWORD*)(v21 + 128) = 0;
    strcpy((char*)(v21 + 8), "*MainShadowPass(dummy)");
    *(_BYTE*)(v21 + 84) = 1;
    *(_QWORD*)v21 = GameData_1fce4b8;
    *(_QWORD*)(v21 + 136) = 0;
    *(_QWORD*)(v21 + 144) = GameData_1fce398;
    *(_QWORD*)(v21 + 176) = v21 + 144;
    *(_QWORD*)(v21 + 192) = GameData_1fce428;
    v22 = *(_QWORD*)(a2 + 16);
    *(_QWORD*)(v21 + 224) = v21 + 192;
    if ((unsigned __int64)v6 >= v22) {
      v24 = (unsigned __int64)v6 - v5;
      v31 = ((__int64)v6 - v5) >> 3;
      v32 = v31 + 1;
      if ((unsigned __int64)(v31 + 1) >> 61 != 0) {
        goto LABEL_59;
      }
      v33 = v22 - v5;
      if (v33 >> 2 > v32) {
        v32 = v33 >> 2;
      }
      if ((unsigned __int64)v33 >= 0x7FFFFFFFFFFFFFF8LL) {
        v34 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v34 = v32;
      }
      if (v34 != 0) {
        if (v34 >> 61 != 0) {
          goto LABEL_60;
        }
        v35 = v21;
        v36 = fw_memory_HeapManager_Allocate(*v12, 8 * v34, 16, 0);
        v21 = v35;
      }
      else {
        v36 = 0;
      }
      v66 = v36 + 8 * v34;
      v67 = v36 + v24 - 8 * v31;
      *(_QWORD*)(v36 + v24) = v21;
      v23 = v36 + v24 + 8;
      memcpy(v67, v5, v24);
      *(_QWORD*)a2 = v67;
      *(_QWORD*)(a2 + 8) = v23;
      *(_QWORD*)(a2 + 16) = v66;
      if (v5 != 0) {
        v68 = 128;
        if (*(_QWORD*)(*v12 + 200) == 0) {
          v68 = 56;
        }
        nn_mem_StandardAllocator_Free(*v12 + v68, v5);
      }
    }
    else {
      *v6 = v21;
      v23 = (__int64)(v6 + 1);
      v24 = (unsigned __int64)v6 - v5;
    }
    *(_QWORD*)(a2 + 8) = v23;
    v69 = *(_QWORD**)(v23 - 8);
    v85_.v85 = (__int64 (**)(void))a2;
    v85_.v86 = v69;
    result = (*(__int64 (**)(_QWORD*, __int64 (***)(void)))(*v69 + 16LL))(
        v69, &v85_.v85);
    v70 = *(_QWORD**)(*(_QWORD*)a2 + (v24 & 0x7FFFFFFF8LL));
    v71 = v70[15];
    v73 = v70[12];
    v72 = v70[13];
    a3[20] = v70[14];
    a3[21] = v71;
    a3[18] = v73;
    a3[19] = v72;
    a3[17] = v70[11];
    v74 = *(_QWORD*)(*(_QWORD*)a2 + (v24 & 0x7FFFFFFF8LL));
    v76 = *(_QWORD*)(v74 + 128);
    v75 = *(_QWORD*)(v74 + 136);
    a3[22] = v76;
    a3[23] = v75;
    return result;
  }
  v14 = fw_memory_HeapManager_Allocate(v13, 320, 16, 0);
  *(_QWORD*)(v14 + 32) = 0;
  *(_QWORD*)(v14 + 40) = 0;
  *(_QWORD*)(v14 + 48) = 0;
  *(_QWORD*)(v14 + 56) = 0;
  *(_QWORD*)(v14 + 64) = 0;
  *(_QWORD*)(v14 + 72) = 0;
  *(_DWORD*)(v14 + 80) = v9;
  *(_DWORD*)(v14 + 168) = 0;
  *(_QWORD*)(v14 + 152) = 0;
  *(_QWORD*)(v14 + 160) = 0;
  *(_QWORD*)(v14 + 136) = 0;
  *(_QWORD*)(v14 + 144) = 0;
  *(_QWORD*)(v14 + 120) = 0;
  *(_QWORD*)(v14 + 128) = 0;
  v85_.v89 = &v85_.v85;
  v85_.v87 = a1;
  v85_.v88 = &v84;
  *(_BYTE*)(v14 + 8) = 28;
  *(_QWORD*)(v14 + 112) = 0;
  *(_QWORD*)(v14 + 200) = 0;
  *(_QWORD*)(v14 + 208) = 0;
  *(_QWORD*)(v14 + 184) = 0;
  *(_QWORD*)(v14 + 192) = 0;
  *(_QWORD*)(v14 + 176) = 0;
  v85_.v85 = GameData_1fce0c8;
  v85_.v86 = &v83;
  strcpy((char*)(v14 + 9), "MainShadowPass");
  *(_BYTE*)(v14 + 84) = 1;
  *(_QWORD*)v14 = GameData_1fce1e8;
  *(_QWORD*)(v14 + 224) = GameData_1fce0c8;
  v15 = v85_.v86;
  v16 = v85_.v87;
  *(_QWORD*)(v14 + 248) = &v84;
  *(_QWORD*)(v14 + 256) = v14 + 224;
  *(_QWORD*)(v14 + 304) = v14 + 272;
  v17 = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(v14 + 232) = v15;
  *(_QWORD*)(v14 + 240) = v16;
  *(_QWORD*)(v14 + 272) = GameData_1fce158;
  *(_QWORD*)(v14 + 280) = a1;
  if ((unsigned __int64)v6 >= v17) {
    v19 = (unsigned __int64)v6 - v5;
    v25 = ((__int64)v6 - v5) >> 3;
    v26 = v25 + 1;
    if ((unsigned __int64)(v25 + 1) >> 61 != 0) {
      goto LABEL_59;
    }
    v27 = v17 - v5;
    if (v27 >> 2 > v26) {
      v26 = v27 >> 2;
    }
    if ((unsigned __int64)v27 >= 0x7FFFFFFFFFFFFFF8LL) {
      v28 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v28 = v26;
    }
    if (v28 != 0) {
      if (v28 >> 61 != 0) {
        goto LABEL_60;
      }
      v29 = v14;
      v30 = fw_memory_HeapManager_Allocate(*v12, 8 * v28, 16, 0);
      v14 = v29;
    }
    else {
      v30 = 0;
    }
    v37 = v30 + 8 * v28;
    v38 = v30 + v19 - 8 * v25;
    *(_QWORD*)(v30 + v19) = v14;
    v18 = v30 + v19 + 8;
    memcpy(v38, v5, v19);
    *(_QWORD*)a2 = v38;
    *(_QWORD*)(a2 + 8) = v18;
    *(_QWORD*)(a2 + 16) = v37;
    if (v5 != 0) {
      v39 = 128;
      if (*(_QWORD*)(*v12 + 200) == 0) {
        v39 = 56;
      }
      nn_mem_StandardAllocator_Free(*v12 + v39, v5);
    }
  }
  else {
    *v6 = v14;
    v18 = (__int64)(v6 + 1);
    v19 = (unsigned __int64)v6 - v5;
  }
  *(_QWORD*)(a2 + 8) = v18;
  v40 = *(_QWORD**)(v18 - 8);
  v85_.v85 = (__int64 (**)(void))a2;
  v85_.v86 = v40;
  result = (*(__int64 (**)(_QWORD*, __int64 (***)(void)))(*v40 + 16LL))(
      v40, &v85_.v85);
  v42 = *(_QWORD**)(*(_QWORD*)a2 + (v19 & 0x7FFFFFFF8LL));
  v43 = v84;
  v84[17] = v42[22];
  v44 = v42[23];
  v45 = v42[24];
  v47 = v42[25];
  v46 = v42[26];
  v43[20] = v47;
  v43[21] = v46;
  v48 = v83;
  v43[18] = v44;
  v43[19] = v45;
  v49 = *(_QWORD*)(*(_QWORD*)(*v48 + 8LL) + 224LL);
  v50 = 1712;
  if (*(_BYTE*)(v49 + 1682) != 0) {
    v50 = 1681;
  }
  if ((*(_BYTE*)(v49 + v50) & 1) == 0) {
    v59 = v43[18];
    v43[22] = v43[17];
    v43[23] = v59;
    return result;
  }
  v51 = *(_QWORD*)a2;
  v52 = *(__int64**)(a2 + 8);
  v53 = *(_DWORD*)(a2 + 96);
  v54 = fw_memory_HeapManager_Allocate(*v12, 224, 16, 0);
  v85_.v87 = a1;
  v85_.v89 = &v85_.v85;
  *(_QWORD*)(v54 + 32) = 0;
  *(_QWORD*)(v54 + 40) = 0;
  *(_QWORD*)(v54 + 48) = 0;
  *(_QWORD*)(v54 + 56) = 0;
  *(_QWORD*)(v54 + 64) = 0;
  *(_QWORD*)(v54 + 72) = 0;
  *(_DWORD*)(v54 + 80) = v53;
  *(_QWORD*)(v54 + 104) = 0;
  *(_QWORD*)(v54 + 112) = 0;
  v85_.v85 = GameData_1fce230;
  v85_.v86 = &v84;
  *(_BYTE*)(v54 + 8) = 28;
  *(_QWORD*)(v54 + 88) = 0;
  *(_QWORD*)(v54 + 96) = 0;
  strcpy((char*)(v54 + 9), "ShadowCopyPass");
  *(_BYTE*)(v54 + 84) = 1;
  *(_QWORD*)v54 = GameData_1fce350;
  *(_QWORD*)(v54 + 128) = GameData_1fce230;
  *(_QWORD*)(v54 + 160) = v54 + 128;
  v55 = v85_.v87;
  *(_QWORD*)(v54 + 136) = v85_.v86;
  *(_QWORD*)(v54 + 144) = v55;
  *(_QWORD*)(v54 + 176) = GameData_1fce2c0;
  v56 = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(v54 + 208) = v54 + 176;
  if ((unsigned __int64)v52 >= v56) {
    v58 = (unsigned __int64)v52 - v51;
    v60 = ((__int64)v52 - v51) >> 3;
    v61 = v60 + 1;
    if ((unsigned __int64)(v60 + 1) >> 61 == 0) {
      v62 = v56 - v51;
      if (v62 >> 2 > v61) {
        v61 = v62 >> 2;
      }
      if ((unsigned __int64)v62 >= 0x7FFFFFFFFFFFFFF8LL) {
        v63 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v63 = v61;
      }
      if (v63 == 0) {
        v65 = 0;
      LABEL_53:
        v77 = v65 + 8 * v63;
        v78 = v65 + v58 - 8 * v60;
        *(_QWORD*)(v65 + v58) = v54;
        v57 = v65 + v58 + 8;
        memcpy(v78, v51, v58);
        *(_QWORD*)a2 = v78;
        *(_QWORD*)(a2 + 8) = v57;
        *(_QWORD*)(a2 + 16) = v77;
        if (v51 != 0) {
          v79 = 128;
          if (*(_QWORD*)(*v12 + 200) == 0) {
            v79 = 56;
          }
          nn_mem_StandardAllocator_Free(*v12 + v79, v51);
        }
        goto LABEL_57;
      }
      if (v63 >> 61 == 0) {
        v64 = v54;
        v65 = fw_memory_HeapManager_Allocate(*v12, 8 * v63, 16, 0);
        v54 = v64;
        goto LABEL_53;
      }
    LABEL_60:
      GameRoutine_60a210();
    }
  LABEL_59:
    GameRoutine_b32f30();
  }
  *v52 = v54;
  v57 = (__int64)(v52 + 1);
  v58 = (unsigned __int64)v52 - v51;
LABEL_57:
  *(_QWORD*)(a2 + 8) = v57;
  v80 = *(_QWORD**)(v57 - 8);
  v85_.v85 = (__int64 (**)(void))a2;
  v85_.v86 = v80;
  result = (*(__int64 (**)(_QWORD*, __int64 (***)(void)))(*v80 + 16LL))(
      v80, &v85_.v85);
  v81 = v84;
  v82 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + (v58 & 0x7FFFFFFF8LL)) + 112LL);
  v84[22] =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + (v58 & 0x7FFFFFFF8LL)) + 104LL);
  v81[23] = v82;
  return result;
}

__int64 gfxa_MainPassLighting_SetupCharaShadowPass(__int64 result, __int64 a2,
                                                   _QWORD* a3, _QWORD* a4,
                                                   __int64 a5)
{
  __int64 v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  signed __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  _QWORD* v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64* v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  signed __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  _QWORD* v60;
  _QWORD* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  _QWORD* v75;
  _QWORD* v76;
  _QWORD* v77;
  struct {
    __int64 (**v78)();
    _QWORD* v79;
    __int64 v80;
    _QWORD* v81;
    __int64 (***v82)();
  } v78_;

  v5 = *a4;
  v76 = a4;
  v77 = a3;
  v8 = result;
  v9 = *(_QWORD*)(v5 + 8);
  v10 = *(_QWORD*)(v9 + 24);
  v11 = 120;
  if (*(_BYTE*)(v10 + 90) != 0) {
    v11 = 89;
  }
  if ((*(_BYTE*)(v10 + v11) & 1) != 0) {
    v12 = *(_QWORD*)(v9 + 224);
    v13 = 1712;
    if (*(_BYTE*)(v12 + 1682) != 0) {
      v13 = 1681;
    }
    if ((*(_BYTE*)(v12 + v13) & 1) != 0) {
      v15 = *(_QWORD*)a2;
      v14 = *(_QWORD*)(a2 + 8);
      v16 = *(_DWORD*)(a2 + 96);
      v17 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
      *(_QWORD*)(v17 + 32) = 0;
      *(_QWORD*)(v17 + 40) = 0;
      *(_QWORD*)(v17 + 48) = 0;
      *(_QWORD*)(v17 + 56) = 0;
      *(_QWORD*)(v17 + 64) = 0;
      *(_QWORD*)(v17 + 72) = 0;
      *(_DWORD*)(v17 + 80) = v16;
      *(_DWORD*)(v17 + 152) = 0;
      *(_QWORD*)(v17 + 136) = 0;
      *(_QWORD*)(v17 + 144) = 0;
      *(_QWORD*)(v17 + 120) = 0;
      *(_QWORD*)(v17 + 128) = 0;
      *(_QWORD*)(v17 + 112) = 0;
      v78_.v82 = &v78_.v78;
      v78_.v80 = v8;
      v78_.v81 = &v77;
      *(_BYTE*)(v17 + 8) = 30;
      *(_QWORD*)(v17 + 184) = 0;
      *(_QWORD*)(v17 + 192) = 0;
      *(_QWORD*)(v17 + 168) = 0;
      *(_QWORD*)(v17 + 176) = 0;
      *(_QWORD*)(v17 + 160) = 0;
      v78_.v78 = GameData_1fce668;
      v78_.v79 = &v76;
      strcpy((char*)(v17 + 9), "CharaShadowPass");
      *(_BYTE*)(v17 + 84) = 1;
      *(_QWORD*)v17 = GameData_1fce788;
      *(_QWORD*)(v17 + 208) = GameData_1fce668;
      v18 = v78_.v79;
      v19 = v78_.v80;
      *(_QWORD*)(v17 + 232) = &v77;
      *(_QWORD*)(v17 + 240) = v17 + 208;
      *(_QWORD*)(v17 + 288) = v17 + 256;
      v21 = *(__int64**)(a2 + 8);
      v20 = *(_QWORD*)(a2 + 16);
      *(_QWORD*)(v17 + 256) = GameData_1fce6f8;
      *(_QWORD*)(v17 + 264) = v8;
      *(_QWORD*)(v17 + 216) = v18;
      *(_QWORD*)(v17 + 224) = v19;
      if ((unsigned __int64)v21 >= v20) {
        v23 = *(_QWORD*)a2;
        v24 = (signed __int64)v21 - *(_QWORD*)a2;
        v25 = (v24 >> 3) + 1;
        if (v25 >> 61 != 0) {
          goto LABEL_43;
        }
        v26 = v20 - v23;
        if (v26 >> 2 > v25) {
          v25 = v26 >> 2;
        }
        if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFF8LL) {
          v27 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v27 = v25;
        }
        if (v27 != 0) {
          if (v27 >> 61 != 0) {
            goto LABEL_44;
          }
          v28 = v17;
          v29 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v27, 16, 0);
          v17 = v28;
        }
        else {
          v29 = 0;
        }
        v30 = v29 + 8 * v27;
        v31 = v29 + v24 - 8 * (v24 >> 3);
        *(_QWORD*)(v29 + v24) = v17;
        v22 = v29 + v24 + 8;
        memcpy(v31, v23, v24);
        *(_QWORD*)a2 = v31;
        *(_QWORD*)(a2 + 8) = v22;
        *(_QWORD*)(a2 + 16) = v30;
        if (v23 != 0) {
          v32 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v32 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v23);
        }
      }
      else {
        *v21 = v17;
        v22 = (__int64)(v21 + 1);
      }
      *(_QWORD*)(a2 + 8) = v22;
      v33 = *(_QWORD**)(v22 - 8);
      v78_.v78 = (__int64 (**)(void))a2;
      v78_.v79 = v33;
      result = (*(__int64 (**)(_QWORD*, __int64 (***)(void)))(*v33 + 16LL))(
          v33, &v78_.v78);
      v34 = *(_QWORD**)(*(_QWORD*)a2 + ((v14 - v15) & 0x7FFFFFFF8LL));
      v35 = v77;
      v77[17] = v34[20];
      v36 = v34[23];
      v37 = v34[24];
      v40 = v34 + 21;
      v38 = v34[21];
      v39 = v40[1];
      v35[20] = v36;
      v35[21] = v37;
      v35[18] = v38;
      v35[19] = v39;
    }
  }
  if (*(_BYTE*)(a5 + 92) != 1) {
    return result;
  }
  v42 = *(_QWORD*)a2;
  v41 = *(_QWORD*)(a2 + 8);
  v43 = *(_DWORD*)(a2 + 96);
  v44 = (__int64*)fw_memory_g_heap_manager_ptr;
  v45 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       384, 16, 0);
  *(_DWORD*)(v45 + 80) = v43;
  *(_QWORD*)(v45 + 32) = 0;
  *(_QWORD*)(v45 + 40) = 0;
  *(_QWORD*)(v45 + 48) = 0;
  *(_QWORD*)(v45 + 56) = 0;
  *(_QWORD*)(v45 + 64) = 0;
  *(_QWORD*)(v45 + 72) = 0;
  *(_QWORD*)(v45 + 264) = 0;
  *(_QWORD*)(v45 + 272) = 0;
  *(_QWORD*)(v45 + 248) = 0;
  *(_QWORD*)(v45 + 256) = 0;
  *(_QWORD*)(v45 + 232) = 0;
  *(_QWORD*)(v45 + 240) = 0;
  strcpy((char*)(v45 + 8), "&CharaSelfShadowPass");
  *(_BYTE*)(v45 + 84) = 1;
  *(_QWORD*)v45 = GameData_1fce8f0;
  *(_QWORD*)(v45 + 216) = 0;
  *(_QWORD*)(v45 + 224) = 0;
  *(_QWORD*)(v45 + 200) = 0;
  *(_QWORD*)(v45 + 208) = 0;
  *(_QWORD*)(v45 + 184) = 0;
  *(_QWORD*)(v45 + 192) = 0;
  *(_QWORD*)(v45 + 168) = 0;
  *(_QWORD*)(v45 + 176) = 0;
  *(_QWORD*)(v45 + 152) = 0;
  *(_QWORD*)(v45 + 160) = 0;
  *(_QWORD*)(v45 + 352) = a5;
  *(_QWORD*)(v45 + 320) = v45 + 288;
  *(_QWORD*)(v45 + 336) = GameData_1fce860;
  *(_QWORD*)(v45 + 344) = v8;
  *(_QWORD*)(v45 + 288) = GameData_1fce7d0;
  *(_QWORD*)(v45 + 296) = a5;
  *(_QWORD*)(v45 + 368) = v45 + 336;
  v47 = *(__int64**)(a2 + 8);
  v46 = *(_QWORD*)(a2 + 16);
  if ((unsigned __int64)v47 >= v46) {
    v49 = *(_QWORD*)a2;
    v50 = (signed __int64)v47 - *(_QWORD*)a2;
    v51 = (v50 >> 3) + 1;
    if (v51 >> 61 == 0) {
      v52 = v46 - v49;
      if (v52 >> 2 > v51) {
        v51 = v52 >> 2;
      }
      if ((unsigned __int64)v52 >= 0x7FFFFFFFFFFFFFF8LL) {
        v53 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v53 = v51;
      }
      if (v53 == 0) {
        v55 = 0;
      LABEL_37:
        v56 = v55 + 8 * v53;
        v57 = v55 + v50 - 8 * (v50 >> 3);
        *(_QWORD*)(v55 + v50) = v45;
        v48 = v55 + v50 + 8;
        memcpy(v57, v49, v50);
        *(_QWORD*)a2 = v57;
        *(_QWORD*)(a2 + 8) = v48;
        *(_QWORD*)(a2 + 16) = v56;
        if (v49 != 0) {
          v58 = 128;
          if (*(_QWORD*)(*v44 + 200) == 0) {
            v58 = 56;
          }
          nn_mem_StandardAllocator_Free(*v44 + v58, v49);
        }
        goto LABEL_41;
      }
      if (v53 >> 61 == 0) {
        v54 = v45;
        v55 = fw_memory_HeapManager_Allocate(*v44, 8 * v53, 16, 0);
        v45 = v54;
        goto LABEL_37;
      }
    LABEL_44:
      GameRoutine_60a210();
    }
  LABEL_43:
    GameRoutine_b32f30();
  }
  *v47 = v45;
  v48 = (__int64)(v47 + 1);
LABEL_41:
  *(_QWORD*)(a2 + 8) = v48;
  v59 = *(_QWORD**)(v48 - 8);
  v78_.v78 = (__int64 (**)(void))a2;
  v78_.v79 = v59;
  result = (*(__int64 (**)(_QWORD*, __int64 (***)(void)))(*v59 + 16LL))(
      v59, &v78_.v78);
  v60 = *(_QWORD**)(*(_QWORD*)a2 + ((v41 - v42) & 0x7FFFFFFF8LL));
  v61 = v77;
  v62 = v60[22];
  v64 = v60[19];
  v63 = v60[20];
  v77[26] = v60[21];
  v61[27] = v62;
  v61[24] = v64;
  v61[25] = v63;
  v65 = v60[26];
  v67 = v60[23];
  v66 = v60[24];
  v61[30] = v60[25];
  v61[31] = v65;
  v61[28] = v67;
  v61[29] = v66;
  v68 = v60[30];
  v70 = v60[27];
  v69 = v60[28];
  v61[34] = v60[29];
  v61[35] = v68;
  v61[32] = v70;
  v61[33] = v69;
  v71 = v60[33];
  v72 = v60[34];
  v75 = v60 + 31;
  v73 = v60[31];
  v74 = v75[1];
  v61[38] = v71;
  v61[39] = v72;
  v61[36] = v73;
  v61[37] = v74;
  return result;
}

__int64 gfxa_MainPassLighting_SetupAOPass1_lambda1_Invoke(__int64 a1,
                                                          __int64 a2,
                                                          _QWORD* a3)
{
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  _DWORD* v7;
  _QWORD* v8;
  __int64 v9;
  _BYTE* v10;
  __int64 v11;
  int v12;
  bool v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  struct {
    _QWORD v20[2];
    int v21;
    int v22;
    int v23;
    int v24;
    int v25;
  } v20_;

  v3 = *(_QWORD**)(a1 + 8);
  v4 = *(_QWORD*)a2;
  v5 = *(_QWORD**)(a2 + 8);
  v20_.v25 = 3;
  v7 = (_DWORD*)v3[21];
  v8 = (_QWORD*)(*v3 + 13304LL);
  v9 = v3[3];
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v8 = (_QWORD*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v10 = *(_BYTE**)(*(_QWORD*)(**(_QWORD**)(a2 + 24) + 8LL) + 56LL);
  v20_.v20[0] = *v8;
  v20_.v20[1] = v9;
  v11 = 360;
  if (v10[328] != 0) {
    v11 = 324;
  }
  v12 = *(_DWORD*)&v10[v11];
  v13 = v10[408] == 0;
  v14 = 440;
  v20_.v21 = v12;
  if (!v13) {
    v14 = 404;
  }
  v15 = *(_DWORD*)&v10[v14];
  v13 = v10[488] == 0;
  v16 = 520;
  v20_.v22 = v15;
  if (!v13) {
    v16 = 484;
  }
  v17 = *(_DWORD*)&v10[v16];
  v13 = v10[568] == 0;
  v18 = 600;
  v20_.v23 = v17;
  if (!v13) {
    v18 = 564;
  }
  v20_.v24 = *(_DWORD*)&v10[v18];
  GameRoutine_b79fc0(v7, v4, (__int64)v5, (__int64)v20_.v20);
  return TaskSSAO_b7a910((__int64)v7, v4, v5, a3);
}

__int64 gfxa_MainPassLighting_SetupAOPass1_lambda2_Invoke(__int64 a1,
                                                          __int64 a2,
                                                          __int64 a3)
{
  unsigned __int64* v3;
  __int64* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  int v7;
  __int64 result;
  struct {
    __int64 v9;
    int v10;
    int v11;
    __int64 v12;
    char v13;
    char gap25_[3];
    int v14;
  } v9_;

  v3 = *(unsigned __int64**)(a1 + 8);
  v9_.v14 = 0;
  v4 = *(__int64**)(a2 + 8);
  v9_.v13 = 1;
  v9_.v12 = 0x100000001LL;
  v9_.v9 = 0x400000000LL;
  v5 = *v3;
  if ((*(_BYTE*)(v5 + 16700) & 1) != 0) {
    v6 = *(_QWORD*)(*(_QWORD*)(v5 + 16672) + 24LL);
    v9_.v10 = v6;
    v5 = HIDWORD(v6);
  }
  else {
    v7 = *(_DWORD*)(v5 + 13304);
    LODWORD(v5) = *(_DWORD*)(v5 + 13308);
    v9_.v10 = v7;
  }
  v9_.v11 = v5;
  result = GameRoutine_b50c60(a3, (__int64)"OcclusionDst", &v9_.v9);
  *v4 = result;
  return result;
}

__int64 gfxa_MainPassLighting_SetupAOPass1_lambda5_Invoke(__int64 a1,
                                                          __int64 a2,
                                                          _QWORD* a3)
{
  __int64* v3;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  _QWORD* v8;
  int v9;
  int* v10;
  _QWORD* v11;
  int* v12;
  _BYTE* v13;
  int v14;
  __int64 v15;
  __int64 v16;
  int v17;
  bool v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  int v24;
  __int64 v25;
  int v26;
  __int64 v27;
  int v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  int v33;
  struct {
    _BYTE v35[4];
    int v36;
    int v37;
    int v38;
    int v39;
    int v40;
    int v41;
    int v42;
    int v43;
    int v44;
    int v45;
    int v46;
    int v47;
    char v48;
    char gap53_[3];
    int v49;
    int v50;
  } v35_;

  v3 = *(__int64**)(a1 + 8);
  v5 = *v3;
  v6 = **(_QWORD**)(a2 + 24);
  v35_.v35[0] = 0;
  v7 = (__int64*)v3[25];
  v8 = *(_QWORD**)(a2 + 8);
  v9 = *(unsigned __int8*)(v5 + 16700);
  v10 = (int*)(v5 + 13304);
  v11 = *(_QWORD**)a2;
  v12 = (int*)(*(_QWORD*)(v5 + 16672) + 24LL);
  v13 = *(_BYTE**)(*(_QWORD*)(v6 + 8) + 40LL);
  if (v9 == 0) {
    v12 = v10;
  }
  v14 = v12[1];
  v35_.v36 = *v12;
  v35_.v37 = v14;
  v35_.v38 = v35_.v36;
  v35_.v39 = v14;
  v15 = 280;
  if (v13[248] != 0) {
    v15 = 244;
  }
  v35_.v40 = *(_DWORD*)&v13[v15];
  v16 = 200;
  if (v13[168] != 0) {
    v16 = 164;
  }
  v17 = *(_DWORD*)&v13[v16];
  v18 = v13[328] == 0;
  v19 = 360;
  v35_.v41 = v17;
  if (!v18) {
    v19 = 324;
  }
  v20 = *(_DWORD*)&v13[v19];
  v18 = v13[408] == 0;
  v21 = 440;
  v35_.v42 = v20;
  if (!v18) {
    v21 = 404;
  }
  v22 = *(_DWORD*)&v13[v21];
  v18 = v13[488] == 0;
  v23 = 520;
  v35_.v43 = v22;
  if (!v18) {
    v23 = 484;
  }
  v24 = *(_DWORD*)&v13[v23];
  v18 = v13[568] == 0;
  v25 = 600;
  v35_.v44 = v24;
  if (!v18) {
    v25 = 564;
  }
  v26 = *(_DWORD*)&v13[v25];
  v18 = v13[648] == 0;
  v27 = 680;
  v35_.v45 = v26;
  if (!v18) {
    v27 = 644;
  }
  v28 = *(_DWORD*)&v13[v27];
  v18 = v13[728] == 0;
  v29 = 760;
  v35_.v46 = v28;
  if (!v18) {
    v29 = 724;
  }
  v30 = *(_DWORD*)&v13[v29];
  v18 = v13[802] == 0;
  v31 = 832;
  v35_.v47 = v30;
  if (!v18) {
    v31 = 801;
  }
  v35_.v48 = v13[v31];
  v32 = 912;
  if (v13[880] != 0) {
    v32 = 876;
  }
  v33 = *(_DWORD*)&v13[v32];
  v35_.v50 = 1;
  v35_.v49 = v33;
  return GameRoutine_18e3c20(v7, v11, v8, a3, (__int64)v35_.v35);
}

__int64 gfxa_MainPassLighting_SetupAOPass2_lambda0_Invoke(__int64 a1,
                                                          __int64** a2,
                                                          __int64* a3)
{
  __int64* v3;
  __int64* v5;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 result;
  struct {
    __int64 v18;
    int v19;
    int v20;
    __int64 v21;
    char v22;
    char gap25_[3];
    int v23;
  } v18_;

  v3 = *(__int64**)(a1 + 8);
  v5 = *a2;
  *v5 =
      GameRoutine_b48f90((__int64)a3, *(_QWORD*)(**(_QWORD**)(a1 + 16) + 48LL));
  v5[1] = ResourceBuilder_b5a4b0((__int64)a3,
                                 *(_QWORD*)(**(_QWORD**)(a1 + 16) + 8LL));
  v5[2] = GameRoutine_b48f90((__int64)a3,
                             *(_QWORD*)(**(_QWORD**)(a1 + 16) + 104LL));
  v5[3] = GameRoutine_b4a3f0((__int64)a3,
                             *(_QWORD*)(**(_QWORD**)(a1 + 16) + 504LL));
  v5[4] = GameRoutine_b4a3f0((__int64)a3,
                             *(_QWORD*)(**(_QWORD**)(a1 + 16) + 520LL));
  v5[5] = GameRoutine_b4f220((__int64)a3,
                             *(_QWORD*)(**(_QWORD**)(a1 + 16) + 656LL));
  v8 = a2[1];
  *v8 = GameRoutine_b48e70((__int64)a3, **(_QWORD**)(a1 + 24));
  v18_.v23 = 0;
  v18_.v22 = 1;
  v18_.v21 = 0x100000001LL;
  v18_.v18 = 0x400000000LL;
  v9 = *v3;
  if ((*(_BYTE*)(*v3 + 16700) & 1) != 0) {
    v10 = *(_QWORD*)(v9 + 16672);
    v12 = *(_DWORD*)(v10 + 24);
    v11 = *(_DWORD*)(v10 + 28);
  }
  else {
    v12 = *(_DWORD*)(v9 + 13304);
    v11 = *(_DWORD*)(v9 + 13308);
  }
  v18_.v19 = v12 / 2;
  v18_.v20 = v11 / 2;
  v8[2] = GameRoutine_b5acb0((__int64)a3, (__int64)"HalfAO", &v18_.v18);
  v18_.v23 = 0;
  v18_.v22 = 1;
  v18_.v21 = 0x100000001LL;
  v18_.v18 = 0x1500000000LL;
  v13 = *v3;
  if ((*(_BYTE*)(*v3 + 16700) & 1) != 0) {
    v14 = *(_QWORD*)(v13 + 16672);
    v16 = *(_DWORD*)(v14 + 24);
    v15 = *(_DWORD*)(v14 + 28);
  }
  else {
    v16 = *(_DWORD*)(v13 + 13304);
    v15 = *(_DWORD*)(v13 + 13308);
  }
  v18_.v19 = v16 / 2;
  v18_.v20 = v15 / 2;
  result = GameRoutine_b60f30(a3, (__int64)"HalfDepth", (__int64)&v18_.v18);
  v8[1] = result;
  return result;
}

__int64 gfxa_MainPassLighting_SetupAOPass2_lambda1_Invoke(__int64 a1,
                                                          __int64 a2,
                                                          _QWORD* a3)
{
  __int64* v3;
  __int64 v5;
  __int64* v6;
  int v7;
  unsigned __int64* v8;
  unsigned __int64* v9;
  unsigned __int64 v10;
  int v11;
  unsigned __int64 v12;
  __int64* v13;
  _QWORD* v14;
  _QWORD* v15;
  char v17[4];
  unsigned __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  unsigned __int64 v22;
  int v23;

  {
    v3 = *(__int64**)(a1 + 8);
    __asm__ volatile("" ::"r"(v3));
  }
  {
    v5 = *v3;
    __asm__ volatile("" ::"r"(v5));
  }
  v17[0] = 1;
  {
    v6 = (__int64*)v3[22];
    __asm__ volatile("" ::"r"(v6));
  }
  {
    v7 = *(unsigned __int8*)(v5 + 16700);
    __asm__ volatile("" ::"r"(v7));
  }
  v8 = (unsigned __int64*)(v5 + 13304);
  {
    v9 = (unsigned __int64*)(*(_QWORD*)(v5 + 16672) + 24LL);
    __asm__ volatile("" ::"r"(v9));
  }
  if (v7 == 0) {
    v9 = v8;
  }
  {
    v10 = *v9;
    __asm__ volatile("" ::"r"(v10));
  }
  v11 = v10;
  v12 = v10 >> 63;
  v18 = v10;
  {
    v13 = (__int64*)v3[15];
    __asm__ volatile("" ::"r"(v13));
  }
  {
    v15 = *(_QWORD**)a2;
    __asm__ volatile("" ::"r"(v15));
  }
  {
    v14 = *(_QWORD**)(a2 + 8);
    __asm__ volatile("" ::"r"(v14));
  }
  v19 = v11 / 2;
  v20 = (HIDWORD(v18) + (int)v12) >> 1;
  {
    v21 = *v13;
    __asm__ volatile("" ::"r"(v21));
  }
  {
    v22 = 0xCCCCCCCCCCCCCCCDLL * ((v13[1] - v21) >> 4);
    __asm__ volatile("" ::"r"(v22));
  }
  v23 = 1065353216;
  return TaskCapsuleAO_18dff40(v6, v15, v14, a3, (__int64)v17);
}

__int64 gfxa_MainPassLighting_SetupLightingPass_lambda1_Invoke(__int64 a1,
                                                               __int64 a2,
                                                               __int64* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64* v4;
  _QWORD** v5;
  _QWORD* v6;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int* v12;
  __int64* v13;
  int v14;
  __int64 v15;
  __int64* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  bool v24;
  __int64 v25;
  float v26;
  struct {
    __int64 v28;
    int v29;
    char gap20_[4];
    __int64 v30;
    int v31;
    char gap36_[4];
    __int64 v32;
    int v33;
    char gap52_[4];
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    char v39;
    bool v40;
    char gap98_[6];
    __int64 v41;
  } v28_;

  v3 = *(_QWORD*)(a2 + 24);
  v4 = *(__int64**)(a1 + 8);
  v5 = *(_QWORD***)a2;
  v6 = *(_QWORD**)(a2 + 8);
  v8 = *(_QWORD**)a2;
  v9 = *(_QWORD*)(v3 + 40);
  v10 = *v4;
  v11 = v4[1];
  v12 = (unsigned int*)v4[20];
  v28_.v28 = *(_QWORD*)(v3 + 48);
  v13 = (__int64*)(v10 + 13304);
  v28_.v29 = *(_DWORD*)(v3 + 56);
  v28_.v30 = *(_QWORD*)(v3 + 64);
  v28_.v31 = *(_DWORD*)(v3 + 72);
  v14 = *(unsigned __int8*)(v10 + 16700);
  v15 = *(_QWORD*)(v10 + 16672) + 24LL;
  if (v14 != 0) {
    v16 = (__int64*)v15;
  }
  else {
    v16 = v13;
  }
  v28_.v32 = *v16;
  v28_.v33 = *(_DWORD*)(v3 + 104);
  v17 = *(_QWORD**)(*(_QWORD*)v3 + 8LL);
  v28_.v39 = *(_BYTE*)(v3 + 121);
  v18 = v17[9];
  v28_.v34 = v17[7];
  v28_.v35 = v18;
  v19 = *(_QWORD*)(v11 + 248);
  v20 = v17[4];
  v22 = v17[2];
  v21 = v17[3];
  v23 = *(unsigned __int8*)(v21 + 248);
  v28_.v36 = v19;
  v28_.v37 = v22;
  v28_.v38 = v20;
  v24 = v23 == 0;
  v25 = 280;
  if (!v24) {
    v25 = 244;
  }
  v26 = *(float*)(v21 + v25);
  v28_.v41 = v9;
  v28_.v40 = v26 > 0x0.0p+0f;
  TaskDeferredLit_b57f50(v12, v8, (__int64)&v28_.v28);
  if (v9 != 0) {
    return TaskDeferredLit_b58ad0((__int64)v12, v5, v6, a3, (__int64)&v28_.v28);
  }
  else {
    return TaskDeferredLit_b58e40((__int64)v12, v5, v6, a3, (__int64)&v28_.v28);
  }
}

void gfxa_MainPassLighting_SetupMainShadowPass_lambda2_Invoke(__int64 a1,
                                                              __int64** a2,
                                                              __int64* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  int v10;
  const char* v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  float v21;
  const char* v22;
  unsigned __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  struct {
    __int64 v30;
    unsigned __int64 v31;
    const char* v32;
  } v30_;
  __int64 v33[3];
  struct {
    __int64 v34;
    __int64 v35;
    __int64 v36;
  } v34_;
  struct {
    int v37;
    int v38;
    int v39;
    int v40;
    __int64 v41;
    char v42;
    char gap105_[3];
    int v43;
  } v37_;

  v3 = *(_QWORD*)(a1 + 16);
  **a2 = ResourceBuilder_b5a4b0((__int64)a3,
                                *(_QWORD*)(**(_QWORD**)(a1 + 8) + 136LL));
  v7 = ResourceBuilder_b5a4b0((__int64)a3,
                              *(_QWORD*)(**(_QWORD**)(a1 + 8) + 144LL));
  v8 = *a2;
  v37_.v37 = 0;
  v8[1] = v7;
  v37_.v41 = 0x100000001LL;
  v37_.v42 = 1;
  v9 = *(_QWORD*)(*(_QWORD*)v3 + 16632LL);
  if (*(_QWORD*)(*(_QWORD*)v3 + 16616LL) != 0) {
    v9 = *(_QWORD*)(*(_QWORD*)v3 + 16616LL);
  }
  v10 = (int)(float)(*(float*)(v9 + 20) * (float)*(int*)(v9 + 16));
  v37_.v38 = 21;
  v37_.v39 = v10;
  v37_.v40 = v10;
  v37_.v43 = 6;
  strcpy((char*)v33, "\"ShadowMapForChara");
  std___1_to_string_1a0a790((void*)(&v30_.v30), 0);
  if ((v30_.v30 & 1) != 0) {
    v11 = v30_.v32;
  }
  else {
    v11 = (char*)&v30_.v30 + 1;
  }
  if ((v30_.v30 & 1) != 0) {
    v12 = v30_.v31;
  }
  else {
    v12 = (unsigned __int64)(unsigned __int8)v30_.v30 >> 1;
  }
  v13 = (__int64*)GameRoutine_1a09ce0((__int64)v33, v11, v12);
  v15 = v13[1];
  v14 = v13[2];
  v34_.v34 = *v13;
  v34_.v35 = v15;
  v34_.v36 = v14;
  v13[1] = 0;
  v13[2] = 0;
  *v13 = 0;
  if ((v30_.v30 & 1) != 0 && v30_.v32 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v16,
                                  (__int64)v30_.v32);
  }
  if ((v33[0] & 1) != 0 && v33[2] != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17,
                                  v33[2]);
  }
  *a2[1] = ResourceBuilder_b528e0(a3, (unsigned __int8*)&v34_.v34,
                                  (__int64)&v37_.v37);
  if ((v34_.v34 & 1) != 0 && v34_.v36 != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18,
                                  v34_.v36);
  }
  v37_.v37 = 0;
  v37_.v43 = 0;
  v37_.v41 = 0x100000001LL;
  v37_.v42 = 1;
  v19 = *(_QWORD*)(*(_QWORD*)v3 + 16632LL);
  if (*(_QWORD*)(*(_QWORD*)v3 + 16616LL) != 0) {
    v19 = *(_QWORD*)(*(_QWORD*)v3 + 16616LL);
  }
  v20 = *(_DWORD*)(v19 + 16);
  v21 = *(float*)(v19 + 24);
  v37_.v38 = 21;
  v37_.v39 = (int)(float)(v21 * (float)v20);
  v37_.v40 = v37_.v39;
  strcpy((char*)v33, "\"ShadowMapForChara");
  v37_.v43 = 7;
  std___1_to_string_1a0a790((void*)(&v30_.v30), 1);
  if ((v30_.v30 & 1) != 0) {
    v22 = v30_.v32;
  }
  else {
    v22 = (char*)&v30_.v30 + 1;
  }
  if ((v30_.v30 & 1) != 0) {
    v23 = v30_.v31;
  }
  else {
    v23 = (unsigned __int64)(unsigned __int8)v30_.v30 >> 1;
  }
  v24 = (__int64*)GameRoutine_1a09ce0((__int64)v33, v22, v23);
  v26 = v24[1];
  v25 = v24[2];
  v34_.v34 = *v24;
  v34_.v35 = v26;
  v34_.v36 = v25;
  v24[1] = 0;
  v24[2] = 0;
  *v24 = 0;
  if ((v30_.v30 & 1) != 0 && v30_.v32 != nullptr) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v27,
                                  (__int64)v30_.v32);
  }
  if ((v33[0] & 1) != 0 && v33[2] != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v28,
                                  v33[2]);
  }
  a2[1][1] = ResourceBuilder_b528e0(a3, (unsigned __int8*)&v34_.v34,
                                    (__int64)&v37_.v37);
  if ((v34_.v34 & 1) != 0 && v34_.v36 != 0) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v29,
                                  v34_.v36);
  }
}

void gfxa_MainPassLighting_SetupMainShadowPass_lambda4_Invoke(__int64 a1,
                                                              __int64 a2,
                                                              __int64* a3)
{
  __int64 i;
  const char* v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  const char* v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  const char* v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  struct {
    __int64 v30;
    unsigned __int64 v31;
    const char* v32;
  } v30_;
  __int64 v33[3];
  struct {
    __int64 v34;
    __int64 v35;
    __int64 v36;
  } v34_;
  struct {
    __int64 v37;
    __int64 v38;
    __int64 v39;
    char v40;
    char gap121_[3];
    int v41;
  } v37_;

  for (i = 0; i != 5; ++i) {
    v37_.v38 = 0x100000001LL;
    v37_.v39 = 0x100000001LL;
    v37_.v40 = 1;
    v37_.v41 = 0;
    LOBYTE(v33[0]) = 18;
    strcpy((char*)v33 + 1, "ShadowMap");
    v37_.v37 = 0x1500000000LL;
    std___1_to_string_1a0ab70((void*)(&v30_.v30), (unsigned int)i);
    if ((v30_.v30 & 1) != 0) {
      v4 = v30_.v32;
    }
    else {
      v4 = (char*)&v30_.v30 + 1;
    }
    if ((v30_.v30 & 1) != 0) {
      v5 = v30_.v31;
    }
    else {
      v5 = (unsigned __int64)(unsigned __int8)v30_.v30 >> 1;
    }
    v6 = (__int64*)GameRoutine_1a09ce0((__int64)v33, v4, v5);
    v8 = v6[1];
    v7 = v6[2];
    v34_.v34 = *v6;
    v34_.v35 = v8;
    v34_.v36 = v7;
    v6[1] = 0;
    v6[2] = 0;
    *v6 = 0;
    if ((v30_.v30 & 1) != 0 && v30_.v32 != nullptr) {
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
        v9 = 128;
      }
      else {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v9,
                                    (__int64)v30_.v32);
    }
    if ((v33[0] & 1) != 0 && v33[2] != 0) {
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
        v10 = 128;
      }
      else {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v10, v33[2]);
    }
    *(_QWORD*)(*(_QWORD*)(a2 + 8) + 8 * i) = ResourceBuilder_b528e0(
        a3, (unsigned __int8*)&v34_.v34, (__int64)&v37_.v37);
    if ((v34_.v34 & 1) != 0 && v34_.v36 != 0) {
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
        v11 = 128;
      }
      else {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v11, v34_.v36);
    }
  }
  v37_.v41 = 0;
  v37_.v37 = 0x1500000000LL;
  v37_.v38 = 0x100000001LL;
  v37_.v39 = 0x100000001LL;
  v37_.v40 = 1;
  strcpy((char*)v33, "\"ShadowMapForChara");
  std___1_to_string_1a0ab70((void*)(&v30_.v30), 0);
  if ((v30_.v30 & 1) != 0) {
    v12 = v30_.v32;
  }
  else {
    v12 = (char*)&v30_.v30 + 1;
  }
  if ((v30_.v30 & 1) != 0) {
    v13 = v30_.v31;
  }
  else {
    v13 = (unsigned __int64)(unsigned __int8)v30_.v30 >> 1;
  }
  v14 = (__int64*)GameRoutine_1a09ce0((__int64)v33, v12, v13);
  v16 = v14[1];
  v15 = v14[2];
  v34_.v34 = *v14;
  v34_.v35 = v16;
  v34_.v36 = v15;
  v14[1] = 0;
  v14[2] = 0;
  *v14 = 0;
  if ((v30_.v30 & 1) != 0 && v30_.v32 != nullptr) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17,
                                  (__int64)v30_.v32);
  }
  if ((v33[0] & 1) != 0 && v33[2] != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18,
                                  v33[2]);
  }
  *(_QWORD*)(*(_QWORD*)(a2 + 8) + 40LL) = ResourceBuilder_b528e0(
      a3, (unsigned __int8*)&v34_.v34, (__int64)&v37_.v37);
  if ((v34_.v34 & 1) != 0 && v34_.v36 != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19,
                                  v34_.v36);
  }
  v37_.v41 = 0;
  v37_.v37 = 0x1500000000LL;
  v37_.v38 = 0x100000001LL;
  v37_.v39 = 0x100000001LL;
  v37_.v40 = 1;
  strcpy((char*)v33, "\"ShadowMapForChara");
  std___1_to_string_1a0ab70((void*)(&v30_.v30), 1);
  if ((v30_.v30 & 1) != 0) {
    v20 = v30_.v32;
  }
  else {
    v20 = (char*)&v30_.v30 + 1;
  }
  if ((v30_.v30 & 1) != 0) {
    v21 = v30_.v31;
  }
  else {
    v21 = (unsigned __int64)(unsigned __int8)v30_.v30 >> 1;
  }
  v22 = (__int64*)GameRoutine_1a09ce0((__int64)v33, v20, v21);
  v24 = v22[1];
  v23 = v22[2];
  v34_.v34 = *v22;
  v34_.v35 = v24;
  v34_.v36 = v23;
  v22[1] = 0;
  v22[2] = 0;
  *v22 = 0;
  if ((v30_.v30 & 1) != 0 && v30_.v32 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v25,
                                  (__int64)v30_.v32);
  }
  if ((v33[0] & 1) != 0 && v33[2] != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26,
                                  v33[2]);
  }
  *(_QWORD*)(*(_QWORD*)(a2 + 8) + 48LL) = ResourceBuilder_b528e0(
      a3, (unsigned __int8*)&v34_.v34, (__int64)&v37_.v37);
  if ((v34_.v34 & 1) != 0 && v34_.v36 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v27,
                                  v34_.v36);
  }
}

__int64 gfxa_MainPassLighting_SetupLocalShadowPass_lambda1_Invoke(__int64 a1,
                                                                  __int64* a2,
                                                                  _QWORD* a3)
{
  __int64 v3;
  __int64 v4;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    _QWORD v21[33];
    int v22;
    int v23;
    int v24;
    int v25;
  } v21_;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(v3 + 104);
  v21_.v24 = *(_DWORD*)(v4 + 180);
  v5 = *(_DWORD*)(v4 + 232);
  v21_.v25 = v5;
  v21_.v21[0] = *(_QWORD*)(v3 + 8);
  if (v21_.v24 >= 1) {
    v6 = *(__int64**)(v3 + 72);
    v7 = *(_QWORD*)(v4 + 208);
    v8 = 0;
    do {
      v9 = *v6;
      v6 += 2;
      v10 = &v21_.v21[v8];
      v11 = 8 * v8++;
      v10[17] = v9;
      v10[1] = *(_QWORD*)(v7 + v11);
    } while (v8 < v21_.v24);
    v5 = v21_.v25;
  }
  if (v5 >= 1) {
    v12 = *(__int64**)(v3 + 88);
    v13 = *(_QWORD*)(v4 + 264);
    v14 = 0;
    do {
      v15 = *v12;
      v12 += 2;
      v16 = &v21_.v21[v14];
      v17 = 8 * v14++;
      v16[25] = v15;
      v16[9] = *(_QWORD*)(v13 + v17);
    } while (v14 < v21_.v25);
  }
  v18 = *a2;
  v19 = a2[1];
  v21_.v22 = *(_DWORD*)(v3 + 144);
  v21_.v23 = *(_DWORD*)(v3 + 148);
  return gfxa_TaskLocalShadow_Execute(v18, v19, a3, (__int64)v21_.v21);
}

#pragma GCC visibility pop
