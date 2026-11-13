#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 FogSetting_Destructor(_QWORD);
__int64 GameRoutine_b60f30(_QWORD, _QWORD, _QWORD);
__int64 ResourceBuilder_b5a4b0(__int64, __int64);
__int64 ResourceBuilder_b5a9c0(__int64, _QWORD*, _QWORD*, __int64*, int*);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _UNKNOWN** GameData_212e738;
extern __int64 (*GameData_1fcb600[])();
extern __int64 (*GameData_1fcb690[])();
extern __int64 (*GameData_1fcb720[])();
extern __int64 (*GameData_1fcb768[])();
extern __int64 (*GameData_1fcb7f8[])();
extern __int64 (*GameData_1fcb888[])();
extern __int64 (*GameData_1fcd758[])();
extern __int64 (*GameData_1fcd7e8[])();
extern __int64 (*GameData_1fcd878[])();
extern __int64 GameData_212e520[4];
extern __int64 GameData_212e528[3];
extern __int64 GameData_212e530[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e548[27];
extern __int64* GameData_212e550[26];
extern __int64* GameData_212e558[25];
extern __int64* GameData_212e560[24];
extern __int64* GameData_212e568[23];
extern __int64* GameData_212e570[22];
extern __int64* GameData_212e578[21];
extern __int64* GameData_212e588[19];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_a9fd80(_QWORD);
void __attribute__((noreturn)) GameRoutine_aa0e00(_QWORD);
void __attribute__((noreturn)) GameRoutine_ab9110(_QWORD);
void __attribute__((noreturn)) GameRoutine_abae00(_QWORD);
void __attribute__((noreturn)) GameRoutine_abc340(_QWORD);
void __attribute__((noreturn)) GameRoutine_b32f30(void);
void __attribute__((noreturn))
GameRoutine_b32f30_alt1(_QWORD) __asm__("GameRoutine_b32f30");
__int64 gfxa_MainPassImageProcess_SetupFogPass(__int64 a1, __int64 a2,
                                               _QWORD* a3, __int64* a4);
__int64 gfxa_MainPassImageProcess_SetupHeightFogPass_alt1(
    __int64 result, __int64* a2, _QWORD* a3,
    _QWORD* a4) __asm__("gfxa_MainPassImageProcess_SetupHeightFogPass");
__int64 gfxa_MainPassImageProcess_SetupLensFlareSystemPass(
    __int64 result, __int64 a2, __int64 a3, __int64 a4, unsigned int a5);
__int64 gfxa_MainPassImageProcess_SetupDLSSPass_lambda1_Invoke(__int64 a1,
                                                               __int64 a2,
                                                               __int64* a3);
__int64 gfxa_MainPassImageProcess_SetupDepthUpscalePass_lambda0_Invoke(
    __int64 a1, __int64** a2, __int64 a3);
__int64* GameRoutine_b3f6c0(_QWORD*, __int64);
__int64* GameRoutine_b3f800(_QWORD*, __int64);
__int64 GameRoutine_b48f90(__int64, __int64);
__int64 GameRoutine_b494f0(__int64, __int64, __int64*);
__int64 GameRoutine_b4a3f0(__int64, __int64);
__int64 GameRoutine_b4ba10(__int64*, __int64, __int64);
__int64 GameRoutine_b509c0(__int64, __int64, __int64*);
__int64 GameRoutine_b53d40(__int64, __int64, __int64*);
__int64 GameRoutine_b54ca0(__int64, __int64, __int64*);
__int64 GameRoutine_b5a5d0(__int64, __int64, __int64*);
__int64 GameRoutine_b5acb0(__int64, __int64, __int64*);
__int64 GameRoutine_b5b7e0(__int64, _QWORD*, _QWORD*, _QWORD*, __int64);
__int64 GameRoutine_b6b560(__int64, _QWORD*, _QWORD*, __int64*, float32x4_t*);
__int64 TaskMotionBlur_b6ef60(__int64, _QWORD*, _QWORD*, __int64*,
                              unsigned int*);
__int64 nn_os_ConvertToTimeSpan(_QWORD);
extern __int128 GameData_1a82d20;
extern __int128 GameData_1a834b0;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a83620;
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 as_g_base_frame_counter;
float exp2f(float);
__int64 gfxa_MainPassImageProcess_SetupHeightFogPass_lambda0_Invoke(
    __int64 a1, float32x4_t** a2, __int64 a3);
__int64 gfxa_MainPassImageProcess_SetupPostProcessPass1_lambda0_Invoke(
    __int64 a1, __int64** a2, __int64 a3);
__int64 gfxa_MainPassImageProcess_SetupPostProcessPass3_lambda1_Invoke(
    __int64 a1, __int64 a2, __int64* a3);
__int64 gfxa_MainPassImageProcess_SetupPostProcessPass4_lambda0_Invoke(
    __int64 a1, _QWORD* a2, __int64 a3);
__int64 gfxa_MainPassImageProcess_SetupPostProcessPass4_lambda1_Invoke(
    __int64 a1, __int64 a2, _QWORD* a3);
__int64 gfxa_MainPassImageProcess_SetupPostProcessPass4_lambda4_Invoke(
    __int64 a1, __int64** a2, __int64 a3);
__int64 gfxa_MainPassImageProcess_SetupOffscreenPostProcessPass_lambda0_Invoke(
    __int64 a1, __int64** a2, __int64* a3);
__int64 gfxa_MainPassImageProcess_SetupLensFlareSystemPass_lambda1_Invoke(
    __int64 a1, __int64 a2, __int64* a3);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_b32f30_alt2() __asm__("GameRoutine_b32f30");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 gfxa_MainPassImageProcess_SetupHeightFogPass(__int64 result, __int64 a2,
                                                     _QWORD* a3, _QWORD* a4);
__int64 GameRoutine_b60f30_alt1(__int64, const char*,
                                __int64*) __asm__("GameRoutine_b60f30");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 memset(__int64, int, unsigned __int64);
extern __int64 (*GameData_1fcb1c8[])();
extern __int64 (*GameData_1fcb258[])();
extern __int64 (*GameData_1fcb2e8[])();
extern __int64 (*GameData_1fcb330[])();
extern __int64 (*GameData_1fcb3c0[])();
extern __int64 (*GameData_1fcb450[])();
extern __int64 (*GameData_1fcb498[])();
extern __int64 (*GameData_1fcb528[])();
extern __int64 (*GameData_1fcb5b8[])();
extern __int64 (*GameData_1fcbd08[])();
extern __int64 (*GameData_1fcbd98[])();
extern __int64 (*GameData_1fcbe28[])();
extern __int64 (*GameData_1fcbe70[])();
extern __int64 (*GameData_1fcbf00[])();
extern __int64 (*GameData_1fcbf90[])();
extern __int64 (*GameData_1fcc260[])();
extern __int64 (*GameData_1fcc2a8[])();
extern __int64 (*GameData_1fcc338[])();
extern __int64 (*GameData_1fcc3c8[])();
extern __int64 (*GameData_1fcc410[])();
extern __int64 (*GameData_1fcc4a0[])();
extern __int64 (*GameData_1fcc530[])();
extern __int64 (*GameData_1fcc578[])();
extern __int64 (*GameData_1fcc608[])();
extern __int64 (*GameData_1fcc698[])();
extern __int64 (*GameData_1fcc6e0[])();
extern __int64 (*GameData_1fcc770[])();
extern __int64 (*GameData_1fcc800[])();
extern __int64 (*GameData_1fcc848[])();
extern __int64 (*GameData_1fcc8d8[])();
extern __int64 (*GameData_1fcc968[])();
extern __int64 (*GameData_1fcc9b0[])();
extern __int64 (*GameData_1fcca40[])();
extern __int64 (*GameData_1fccad0[])();
extern __int64 (*GameData_1fccb18[])();
extern __int64 (*GameData_1fccba8[])();
extern __int64 (*GameData_1fccc38[])();
extern __int64 (*GameData_1fccc80[])();
extern __int64 (*GameData_1fccd10[])();
extern __int64 (*GameData_1fccda0[])();
extern __int64 (*GameData_1fccde8[])();
extern __int64 (*GameData_1fcce78[])();
extern __int64 (*GameData_1fccf08[])();
extern __int64 (*GameData_1fccf50[])();
extern __int64 (*GameData_1fccfe0[])();
extern __int64 (*GameData_1fcd070[])();
extern __int64 (*GameData_1fcd0b8[])();
extern __int64 (*GameData_1fcd148[])();
extern __int64 (*GameData_1fcd1d8[])();
extern __int64 (*GameData_1fcd220[])();
extern __int64 (*GameData_1fcd2b0[])();
extern __int64 (*GameData_1fcd340[])();
extern __int64 (*GameData_1fcd388[])();
extern __int64 (*GameData_1fcd418[])();
extern __int64 (*GameData_1fcd4a8[])();
extern __int64 (*GameData_1fcd4f0[])();
extern __int64 (*GameData_1fcd580[])();
extern __int64 (*GameData_1fcd610[])();
extern __int64 (*GameData_1fcd658[])();
extern __int64 (*GameData_1fcd6d8[])();
extern __int64 (*gfx_flow_PassNodeBase_vtable)();
extern __int64* GameData_212e598[17];
extern __int64* GameData_212e760[2];
extern __int64* GameData_212e8a0;
extern __int64 eft_g_effectSystem;
extern __int64 fw_memory_g_heap_manager;
void GaussianBlurSetting_Destructor(__int64);
void __attribute__((noreturn))
GameRoutine_a9fd80_alt1() __asm__("GameRoutine_a9fd80");
void __attribute__((noreturn))
GameRoutine_aa0e00_alt1() __asm__("GameRoutine_aa0e00");
void __attribute__((noreturn))
GameRoutine_ab9110_alt1() __asm__("GameRoutine_ab9110");
void __attribute__((noreturn))
GameRoutine_abae00_alt1() __asm__("GameRoutine_abae00");
__int64 gfxa_MainPassImageProcess_SetupExposureCalcPass(__int64 result,
                                                        __int64 a2, __int64 a3,
                                                        __int64 a4, char a5);
__int64 gfxa_MainPassImageProcess_SetupExposureCompPass(__int64 a1, __int64 a2,
                                                        _QWORD* a3, __int64 a4);
__int64 gfxa_MainPassImageProcess_SetupPostProcessPass2(__int64 result,
                                                        __int64 a2, _QWORD* a3,
                                                        __int64* a4,
                                                        __int64 a5);
__int64 gfxa_MainPassImageProcess_SetupPostProcessPass4(__int64 result,
                                                        __int64 a2, _QWORD* a3,
                                                        _QWORD* a4);
void gfxa_MainPassImageProcess_SetupPostProcessPass5(_QWORD** a1, __int64 a2,
                                                     _QWORD* a3, _QWORD* a4);
__int64 gfxa_MainPassImageProcess_SetupPreDoFPass(__int64 result, __int64 a2,
                                                  __int64 a3, __int64* a4);
__int64 gfxa_MainPassImageProcess_SetupDLSSPass(__int64 result, __int64 a2,
                                                _QWORD* a3, __int64 a4,
                                                __int64 a5);
__int64 gfxa_MainPassImageProcess_SetupDepthUpscalePass(__int64 result,
                                                        __int64 a2, __int64 a3);
__int64 gfxa_MainPassImageProcess_SetupOffscreenPostProcessPass(__int64 result,
                                                                __int64 a2,
                                                                __int64 a3,
                                                                __int64 a4);
__int64 TaskDoFTemporalFilter_b7d920(__int64, _QWORD*, _QWORD*, __int64*,
                                     float*);
__int64 TaskMirage_b6dbe0(__int64, _QWORD*, _QWORD*, _QWORD*, _QWORD*);
__int64 gfxa_MainPassImageProcess_SetupPostProcessPass1_lambda1_Invoke(
    __int64 a1, __int64 a2, _QWORD* a3);
__int64 gfxa_MainPassImageProcess_SetupPreDoFPass_lambda3_Invoke(__int64 a1,
                                                                 __int64 a2,
                                                                 __int64* a3);

__int64 gfxa_MainPassImageProcess_SetupExposureCalcPass(__int64 result,
                                                        __int64 a2, __int64 a3,
                                                        __int64 a4, char a5)
{
  __int64 v5;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  char* v13;
  __int64 (***v14)();
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  signed __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  int v33;
  __int64 v34;
  __int64* v35;
  __int64* v36;
  unsigned __int64 v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  signed __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  struct {
    _QWORD v54[4];
    _QWORD* v55;
  } v54_;
  struct {
    __int64 (**v56)();
    __int64* v57;
    __int64* v58;
    __int64* v59;
    __int64 (***v60)();
  } v56_;

  v5 = *(_QWORD*)(a4 + 8);
  v52 = a4;
  v53 = a3;
  if ((a5 & 1) != (*(_DWORD*)v5 == 0)) {
    v51 = 0;
    v7 = result;
    v8 = (__int64*)fw_memory_g_heap_manager_ptr;
    if ((*(_BYTE*)(v5 + 112) & 1) == 0) {
      goto LABEL_41;
    }
    v9 = *(_QWORD*)a2;
    v10 = *(_QWORD*)(a2 + 8);
    v11 = *(_DWORD*)(a2 + 96);
    v12 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 288, 16, 0);
    v56_.v56 = GameData_1fcb1c8;
    v56_.v57 = &v53;
    v56_.v60 = &v56_.v56;
    v54_.v54[0] = GameData_1fcb258;
    v54_.v54[1] = v7;
    v54_.v55 = v54_.v54;
    *(_QWORD*)v12 = &gfx_flow_PassNodeBase_vtable;
    v13 = (char*)fw_memory_HeapManager_Allocate_alt1(*v8, 32, 16, 0);
    *(_QWORD*)(v12 + 32) = 0;
    *(_QWORD*)(v12 + 40) = 0;
    *(_QWORD*)(v12 + 48) = 0;
    *(_QWORD*)(v12 + 56) = 0;
    *(_QWORD*)(v12 + 64) = 0;
    *(_QWORD*)(v12 + 72) = 0;
    *(_DWORD*)(v12 + 80) = v11;
    *(_QWORD*)(v12 + 88) = 0;
    *(_QWORD*)(v12 + 96) = 0;
    *(_QWORD*)(v12 + 104) = 0;
    *(_QWORD*)(v12 + 112) = 0;
    *(_QWORD*)(v12 + 16) = 24;
    *(_QWORD*)(v12 + 24) = v13;
    *(_BYTE*)(v12 + 84) = 1;
    *(_QWORD*)(v12 + 120) = 0;
    *(_QWORD*)(v12 + 128) = 0;
    *(_QWORD*)(v12 + 136) = 0;
    *(_QWORD*)(v12 + 144) = 0;
    *(_QWORD*)(v12 + 152) = 0;
    *(_QWORD*)(v12 + 160) = 0;
    *(_QWORD*)(v12 + 168) = 0;
    *(_QWORD*)(v12 + 184) = 0;
    strcpy(v13, "ExposureSpotLightingPass");
    v14 = v56_.v60;
    *(_QWORD*)v12 = GameData_1fcb2e8;
    *(_QWORD*)(v12 + 8) = 33;
    if (v14 != nullptr) {
      if (v14 != &v56_.v56) {
        *(_QWORD*)(v12 + 224) =
            ((__int64 (*)(__int64 (***)(void)))(*v14)[2])(v14);
        v15 = v54_.v55;
        if (v54_.v55 == nullptr) {
          goto LABEL_11;
        }
      LABEL_8:
        if (v15 == v54_.v54) {
          *(_QWORD*)(v12 + 272) = v12 + 240;
          (*(void (**)(_QWORD*))(*v15 + 24LL))(v15);
        }
        else {
          *(_QWORD*)(v12 + 272) = (*(__int64 (**)(_QWORD*))(*v15 + 16LL))(v15);
        }
        if (v54_.v55 == v54_.v54) {
          v16 = 32;
        }
        else {
          if (v54_.v55 == nullptr) {
            goto LABEL_18;
          }
          v16 = 40;
        }
        (*(void (**)(__int64))(*v54_.v55 + v16))((__int64)v54_.v55);
      LABEL_18:
        if (v56_.v60 == &v56_.v56) {
          v17 = 4;
        }
        else {
          if (v56_.v60 == nullptr) {
          LABEL_23:
            v19 = *(__int64**)(a2 + 8);
            v18 = *(_QWORD*)(a2 + 16);
            if ((unsigned __int64)v19 >= v18) {
              v21 = *(_QWORD*)a2;
              v22 = (signed __int64)v19 - *(_QWORD*)a2;
              v23 = (v22 >> 3) + 1;
              if (v23 >> 61 != 0) {
                goto LABEL_59;
              }
              v24 = v18 - v21;
              v25 = v9;
              if (v24 >> 2 > v23) {
                v23 = v24 >> 2;
              }
              if ((unsigned __int64)v24 >= 0x7FFFFFFFFFFFFFF8LL) {
                v26 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v26 = v23;
              }
              if (v26 != 0) {
                if (v26 >> 61 != 0) {
                  goto LABEL_60;
                }
                v27 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v26, 16, 0);
              }
              else {
                v27 = 0;
              }
              v28 = v27 + 8 * v26;
              v29 = v27 + v22 - 8 * (v22 >> 3);
              *(_QWORD*)(v27 + v22) = v12;
              v20 = v27 + v22 + 8;
              memcpy_alt1(v29, v21, v22);
              *(_QWORD*)a2 = v29;
              *(_QWORD*)(a2 + 8) = v20;
              *(_QWORD*)(a2 + 16) = v28;
              if (v21 != 0) {
                v30 = fw_memory_g_heap_manager_ptr;
                v31 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v31 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v21);
                v9 = v25;
                v8 = (__int64*)v30;
              }
              else {
                v9 = v25;
                v8 = &fw_memory_g_heap_manager;
              }
            }
            else {
              *v19 = v12;
              v20 = (__int64)(v19 + 1);
            }
            *(_QWORD*)(a2 + 8) = v20;
            v32 = *(__int64**)(v20 - 8);
            v56_.v56 = (__int64 (**)(void))a2;
            v56_.v57 = v32;
            (*(void (**)(__int64*, __int64 (***)(void)))(*v32 + 16))(v32,
                                                                     &v56_.v56);
            v51 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 +
                                        ((v10 - v9) & 0x7FFFFFFF8LL)) +
                             184LL);
          LABEL_41:
            v33 = *(_DWORD*)(a2 + 96);
            v34 = fw_memory_HeapManager_Allocate_alt1(*v8, 224, 16, 0);
            *(_QWORD*)(v34 + 32) = 0;
            *(_QWORD*)(v34 + 40) = 0;
            *(_QWORD*)(v34 + 48) = 0;
            *(_QWORD*)(v34 + 56) = 0;
            *(_QWORD*)(v34 + 64) = 0;
            *(_QWORD*)(v34 + 72) = 0;
            *(_DWORD*)(v34 + 80) = v33;
            *(_QWORD*)(v34 + 112) = 0;
            *(_QWORD*)(v34 + 120) = 0;
            *(_QWORD*)(v34 + 96) = 0;
            *(_QWORD*)(v34 + 104) = 0;
            *(_QWORD*)(v34 + 88) = 0;
            v56_.v58 = &v51;
            v56_.v59 = &v53;
            *(_QWORD*)(v34 + 184) = v7;
            v56_.v60 = &v56_.v56;
            strcpy((char*)(v34 + 8), " ExposureCalcPass");
            v56_.v56 = GameData_1fcb330;
            v56_.v57 = &v52;
            *(_BYTE*)(v34 + 84) = 1;
            *(_QWORD*)v34 = GameData_1fcb450;
            *(_QWORD*)(v34 + 128) = GameData_1fcb330;
            v35 = v56_.v58;
            *(_QWORD*)(v34 + 136) = v56_.v57;
            *(_QWORD*)(v34 + 144) = v35;
            v36 = v56_.v59;
            *(_QWORD*)(v34 + 176) = GameData_1fcb3c0;
            *(_QWORD*)(v34 + 208) = v34 + 176;
            *(_QWORD*)(v34 + 152) = v36;
            *(_QWORD*)(v34 + 160) = v34 + 128;
            v38 = *(__int64**)(a2 + 8);
            v37 = *(_QWORD*)(a2 + 16);
            if ((unsigned __int64)v38 < v37) {
              *v38 = v34;
              v39 = (__int64)(v38 + 1);
            LABEL_57:
              *(_QWORD*)(a2 + 8) = v39;
              v50 = *(__int64**)(v39 - 8);
              v56_.v56 = (__int64 (**)(void))a2;
              v56_.v57 = v50;
              return (*(__int64 (**)(__int64*, __int64 (***)(void)))(
                  *v50 + 16))(v50, &v56_.v56);
            }
            v40 = *(_QWORD*)a2;
            v41 = (signed __int64)v38 - *(_QWORD*)a2;
            v42 = (v41 >> 3) + 1;
            if (v42 >> 61 == 0) {
              v43 = v37 - v40;
              if (v43 >> 2 > v42) {
                v42 = v43 >> 2;
              }
              if ((unsigned __int64)v43 >= 0x7FFFFFFFFFFFFFF8LL) {
                v44 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v44 = v42;
              }
              if (v44 == 0) {
                v46 = 0;
              LABEL_53:
                v47 = v46 + 8 * v44;
                v48 = v46 + v41 - 8 * (v41 >> 3);
                *(_QWORD*)(v46 + v41) = v34;
                v39 = v46 + v41 + 8;
                memcpy_alt1(v48, v40, v41);
                *(_QWORD*)a2 = v48;
                *(_QWORD*)(a2 + 8) = v39;
                *(_QWORD*)(a2 + 16) = v47;
                if (v40 != 0) {
                  v49 = 128;
                  if (*(_QWORD*)(*v8 + 200) == 0) {
                    v49 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v8 + v49, v40);
                }
                goto LABEL_57;
              }
              if (v44 >> 61 == 0) {
                v45 = v34;
                v46 = fw_memory_HeapManager_Allocate_alt1(*v8, 8 * v44, 16, 0);
                v34 = v45;
                goto LABEL_53;
              }
            LABEL_60:
              GameRoutine_60a210_alt1();
            }
          LABEL_59:
            GameRoutine_b32f30_alt2();
          }
          v17 = 5;
        }
        ((__int64 (*)(__int64))(*v56_.v60)[v17])((__int64)v56_.v60);
        goto LABEL_23;
      }
      *(_QWORD*)(v12 + 224) = v12 + 192;
      ((void (*)(__int64 (***)(void)))(*v14)[3])(v14);
      v15 = v54_.v55;
      if (v54_.v55 != nullptr) {
        goto LABEL_8;
      }
    }
    else {
      *(_QWORD*)(v12 + 224) = 0;
      v15 = v54_.v55;
      if (v54_.v55 != nullptr) {
        goto LABEL_8;
      }
    }
  LABEL_11:
    *(_QWORD*)(v12 + 272) = 0;
    goto LABEL_18;
  }
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupExposureCompPass(__int64 a1, __int64 a2,
                                                        _QWORD* a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  int v8;
  __int64* v9;
  __int64 v10;
  _QWORD** v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  signed __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 result;
  __int64 v28;
  struct {
    __int64 (**v29)();
    __int64 v30;
    _QWORD** v31;
    __int64* v32;
    __int64 (***v33)();
  } v29_;
  _QWORD* v34;

  v34 = a3;
  v28 = a4;
  v5 = *(_QWORD*)a2;
  v4 = *(_QWORD*)(a2 + 8);
  v8 = *(_DWORD*)(a2 + 96);
  v9 = (__int64*)fw_memory_g_heap_manager_ptr;
  v10 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 272, 16, 0);
  *(_QWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_DWORD*)(v10 + 80) = v8;
  *(_QWORD*)(v10 + 152) = 0;
  *(_QWORD*)(v10 + 160) = 0;
  *(_QWORD*)(v10 + 136) = 0;
  *(_QWORD*)(v10 + 144) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_QWORD*)(v10 + 128) = 0;
  *(_QWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 112) = 0;
  v29_.v31 = &v34;
  v29_.v32 = &v28;
  v29_.v33 = &v29_.v29;
  *(_QWORD*)(v10 + 88) = 0;
  *(_QWORD*)(v10 + 96) = 0;
  *(_QWORD*)(v10 + 232) = a1;
  strcpy((char*)(v10 + 8), " ExposureCompPass");
  v29_.v29 = GameData_1fcb498;
  v29_.v30 = a1;
  *(_BYTE*)(v10 + 84) = 1;
  *(_QWORD*)v10 = GameData_1fcb5b8;
  *(_QWORD*)(v10 + 176) = GameData_1fcb498;
  v11 = v29_.v31;
  *(_QWORD*)(v10 + 184) = v29_.v30;
  *(_QWORD*)(v10 + 192) = v11;
  v12 = v29_.v32;
  *(_QWORD*)(v10 + 224) = GameData_1fcb528;
  *(_QWORD*)(v10 + 256) = v10 + 224;
  *(_QWORD*)(v10 + 200) = v12;
  *(_QWORD*)(v10 + 208) = v10 + 176;
  v14 = *(__int64**)(a2 + 8);
  v13 = *(_QWORD*)(a2 + 16);
  if ((unsigned __int64)v14 >= v13) {
    v16 = *(_QWORD*)a2;
    v17 = (signed __int64)v14 - *(_QWORD*)a2;
    v18 = (v17 >> 3) + 1;
    if (v18 >> 61 != 0) {
      GameRoutine_b32f30_alt2();
    }
    v19 = v13 - v16;
    if (v19 >> 2 > v18) {
      v18 = v19 >> 2;
    }
    if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF8LL) {
      v20 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v20 = v18;
    }
    if (v20 != 0) {
      if (v20 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v21 = v10;
      v22 = fw_memory_HeapManager_Allocate_alt1(*v9, 8 * v20, 16, 0);
      v10 = v21;
    }
    else {
      v22 = 0;
    }
    v23 = v22 + 8 * v20;
    v24 = v22 + v17 - 8 * (v17 >> 3);
    *(_QWORD*)(v22 + v17) = v10;
    v15 = v22 + v17 + 8;
    memcpy_alt1(v24, v16, v17);
    *(_QWORD*)a2 = v24;
    *(_QWORD*)(a2 + 8) = v15;
    *(_QWORD*)(a2 + 16) = v23;
    if (v16 != 0) {
      v25 = 128;
      if (*(_QWORD*)(*v9 + 200) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v9 + v25, v16);
    }
  }
  else {
    *v14 = v10;
    v15 = (__int64)(v14 + 1);
  }
  *(_QWORD*)(a2 + 8) = v15;
  v26 = *(_QWORD*)(v15 - 8);
  v29_.v29 = (__int64 (**)(void))a2;
  v29_.v30 = v26;
  result = (*(__int64 (**)(__int64, __int64 (***)(void)))(
      *(_QWORD*)v26 + 16LL))(v26, &v29_.v29);
  *v34 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v4 - v5) & 0x7FFFFFFF8LL)) +
                    120LL);
  v34[54] = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v4 - v5) & 0x7FFFFFFF8LL)) +
                       152LL);
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupFogPass(__int64 a1, __int64 a2,
                                               _QWORD* a3, __int64* a4)
{
  __int64 v4;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char v18;
  __int64 v19;
  __int16 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  char v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  char v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  char v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
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
  __int64 v75;
  __int64 v76;
  int v77;
  char v78;
  __int64 v79;
  __int64 v80;
  __int16 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  int v94;
  _QWORD* v95;
  char v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  int v111;
  char v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  int v120;
  char v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  int v129;
  char v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  int v138;
  char v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  int v147;
  char v148;
  __int64 v149;
  __int16 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int16 v169;
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
  __int64 v180;
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
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  int v216;
  char v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  int v226;
  char v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  int v236;
  __int64 v237;
  __int64 v238;
  __int64 (*v239)();
  int v240;
  __int64 v241;
  __int64 v242;
  unsigned __int64 v243;
  __int64* v244;
  __int64 v245;
  __int64 (*v246)();
  __int64 v247;
  unsigned __int64 v248;
  __int64 v249;
  unsigned __int64 v250;
  __int64 v251;
  __int64 v252;
  unsigned __int64 v253;
  __int64 v254;
  __int64 v255;
  _QWORD** v256;
  __int64 v258;
  __int64 v259;
  __int64* v260;
  _QWORD v261[3];
  __int64 v262;
  __int64 v263;
  __int64 v264;
  __int64* v265;
  _QWORD v266[3];
  char v267;
  __int16 v268;
  __int64 v269;
  __int64 v270;
  __int64 v271;
  char v272;
  __int64 v273;
  _QWORD v274[3];
  char v275;
  __int64 v276;
  __int64 v277;
  __int64 v278;
  __int64 v279;
  int v280;
  __int64 v281;
  _QWORD v282[3];
  char v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  __int64 v287;
  int v288;
  __int64 v289;
  _QWORD v290[3];
  char v291;
  __int64 v292;
  __int64 v293;
  __int64 v294;
  __int64 v295;
  int v296;
  __int64* v297;
  _QWORD v298[3];
  char v299;
  __int64 v300;
  __int64 v301;
  __int64 v302;
  __int64 v303;
  __int64 v304;
  __int64 v305;
  __int64 v306;
  __int64 v307;
  __int64 v308;
  __int64 v309;
  _QWORD v310[3];
  char v311;
  __int64 v312;
  __int64 v313;
  __int64 v314;
  __int64 v315;
  int v316;
  __int64* v317;
  _QWORD v318[3];
  char v319;
  __int16 v320;
  __int64 v321;
  __int64 v322;
  __int64 v323;
  char v324;
  __int64 v325;
  _QWORD v326[3];
  char v327;
  __int64 v328;
  __int64 v329;
  __int64 v330;
  __int64 v331;
  int v332;
  __int64* v333;
  _QWORD v334[3];
  char v335;
  __int64 v336;
  __int64 v337;
  __int64 v338;
  __int64 v339;
  int v340;
  __int64 v341;
  _QWORD v342[3];
  char v343;
  __int64 v344;
  __int64 v345;
  __int64 v346;
  __int64 v347;
  int v348;
  __int64 v349;
  _QWORD v350[3];
  char v351;
  __int64 v352;
  __int64 v353;
  __int64 v354;
  __int64 v355;
  int v356;
  __int64 v357;
  _QWORD v358[3];
  char v359;
  __int64 v360;
  __int64 v361;
  __int64 v362;
  __int64 v363;
  int v364;
  __int64 v365;
  _QWORD v366[3];
  char v367;
  __int64 v368;
  __int64 v369;
  __int64 v370;
  __int64 v371;
  int v372;
  __int64 v373;
  _QWORD v374[3];
  char v375;
  __int64 v376;
  __int64 v377;
  __int64 v378;
  __int64 v379;
  int v380;
  __int64* v381;
  _QWORD v382[3];
  char v383;
  __int16 v384;
  __int64 v385;
  __int64 v386;
  __int64 v387;
  char v388;
  __int64* v389;
  _QWORD v390[3];
  char v391;
  __int64 v392;
  __int64 v393;
  __int64 v394;
  __int64 v395;
  __int64 v396;
  __int64 v397;
  __int64 v398;
  __int64 v399;
  __int64 v400;
  __int64* v401;
  _QWORD v402[3];
  char v403;
  __int16 v404;
  __int64 v405;
  __int64 v406;
  __int64 v407;
  char v408;
  __int64* v409;
  _QWORD v410[3];
  char v411;
  __int64 v412;
  __int64 v413;
  __int64 v414;
  __int64 v415;
  __int64 v416;
  __int64 v417;
  __int64 v418;
  __int64 v419;
  __int64 v420;
  __int64* v421;
  _QWORD v422[3];
  char v423;
  __int64 v424;
  __int64 v425;
  __int64 v426;
  __int64 v427;
  __int64 v428;
  __int64 v429;
  __int64 v430;
  __int64 v431;
  __int64 v432;
  __int64* v433;
  _QWORD v434[3];
  char v435;
  __int64 v436;
  __int64 v437;
  __int64 v438;
  __int64 v439;
  __int64 v440;
  __int64 v441;
  __int64 v442;
  __int64 v443;
  __int64 v444;
  __int64 v445;
  _QWORD v446[3];
  char v447;
  __int64 v448;
  __int64 v449;
  __int64 v450;
  __int64 v451;
  int v452;
  __int64 v453;
  _QWORD v454[3];
  char v455;
  __int64 v456;
  __int64 v457;
  __int64 v458;
  __int64 v459;
  int v460;
  __int64 v461;
  _QWORD v462[3];
  char v463;
  __int64 v464;
  __int64 v465;
  __int64 v466;
  __int64 v467;
  int v468;
  _QWORD* v469;
  __int64 (**v470)();
  _QWORD** v471;
  __int64 v472;
  __int64 (***v473)();

  v4 = *a4;
  v469 = a3;
  v7 = v261;
  v8 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 104LL);
  v260 = GameData_212e548[0] + 2;
  if ((*(_BYTE*)(v8 + 8) & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v261, *(_QWORD*)(v8 + 24),
                                                *(_QWORD*)(v8 + 16));
  }
  else {
    v9 = *(_QWORD*)(v8 + 8);
    v10 = *(_QWORD*)(v8 + 24);
    v261[1] = *(_QWORD*)(v8 + 16);
    v261[2] = v10;
    v261[0] = v9;
  }
  v263 = 0;
  v264 = 0;
  v262 = 0;
  v12 = *(_QWORD*)(v8 + 32);
  v11 = *(_QWORD*)(v8 + 40);
  v13 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v14 = v11 - v12;
  if (v11 != v12) {
    if (v14 < 0) {
      GameRoutine_a9fd80(v7);
    }
    v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v11 - v12, 16, 0);
    v16 = v15 + v14;
    v262 = v15;
    v263 = v15;
    v264 = v15 + v14;
    v7 = (_QWORD*)memcpy(v15, v12, v14);
    v263 = v16;
  }
  v17 = GameData_212e530[0];
  v265 = (__int64*)(GameData_212e530[0] + 16);
  v18 = *(_BYTE*)(v8 + 64);
  v260 = GameData_212e588[0] + 2;
  if ((v18 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v266, *(_QWORD*)(v8 + 80),
                                                *(_QWORD*)(v8 + 72));
  }
  else {
    v266[1] = *(_QWORD*)(v8 + 72);
    v19 = *(_QWORD*)(v8 + 64);
    v266[2] = *(_QWORD*)(v8 + 80);
    v266[0] = v19;
  }
  v267 = *(_BYTE*)(v8 + 88);
  v265 = GameData_212e568[0] + 2;
  v20 = *(_WORD*)(v8 + 89);
  v270 = 0;
  v271 = 0;
  v269 = 0;
  v268 = v20;
  v22 = *(_QWORD*)(v8 + 96);
  v21 = *(_QWORD*)(v8 + 104);
  v23 = v21 - v22;
  if (v21 != v22) {
    if (v23 < 0) {
      goto LABEL_168;
    }
    v24 = fw_memory_HeapManager_Allocate(*v13, v21 - v22, 16, 0);
    v25 = v24 + v23;
    v269 = v24;
    v270 = v24;
    v271 = v24 + v23;
    v7 = (_QWORD*)memcpy(v24, v22, v23 - 2);
    v270 = v25;
  }
  v26 = *(_BYTE*)(v8 + 136);
  v272 = *(_BYTE*)(v8 + 120);
  v265 = GameData_212e560[0] + 2;
  v273 = v17 + 16;
  if ((v26 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v274, *(_QWORD*)(v8 + 152),
                                                *(_QWORD*)(v8 + 144));
  }
  else {
    v27 = *(_QWORD*)(v8 + 136);
    v28 = *(_QWORD*)(v8 + 152);
    v274[1] = *(_QWORD*)(v8 + 144);
    v274[2] = v28;
    v274[0] = v27;
  }
  v275 = *(_BYTE*)(v8 + 160);
  v29 = GameData_212e528[0];
  v273 = GameData_212e528[0] + 16;
  v30 = *(_QWORD*)(v8 + 164);
  v278 = 0;
  v279 = 0;
  v277 = 0;
  v276 = v30;
  v32 = *(_QWORD*)(v8 + 176);
  v31 = *(_QWORD*)(v8 + 184);
  v33 = v31 - v32;
  if (v31 != v32) {
    if (0xAAAAAAAAAAAAAAABLL * (v33 >> 2) > 0x1555555555555555LL) {
      goto LABEL_166;
    }
    v34 = fw_memory_HeapManager_Allocate(*v13, v33, 16, 0);
    v35 = v34 + v33;
    v277 = v34;
    v278 = v34;
    v279 = v34 + v33;
    v7 = (_QWORD*)memcpy(v34, v32, v33);
    v278 = v35;
  }
  v36 = *(_BYTE*)(v8 + 216);
  v258 = a1;
  v259 = a2;
  v280 = *(_DWORD*)(v8 + 200);
  v37 = GameData_212e520[0];
  v273 = GameData_212e520[0] + 16;
  v281 = v17 + 16;
  if ((v36 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v282, *(_QWORD*)(v8 + 232),
                                                *(_QWORD*)(v8 + 224));
  }
  else {
    v38 = *(_QWORD*)(v8 + 216);
    v39 = *(_QWORD*)(v8 + 232);
    v282[1] = *(_QWORD*)(v8 + 224);
    v282[2] = v39;
    v282[0] = v38;
  }
  v283 = *(_BYTE*)(v8 + 240);
  v281 = v29 + 16;
  v40 = *(_QWORD*)(v8 + 244);
  v286 = 0;
  v287 = 0;
  v285 = 0;
  v284 = v40;
  v42 = *(_QWORD*)(v8 + 256);
  v41 = *(_QWORD*)(v8 + 264);
  v43 = v41 - v42;
  if (v41 != v42) {
    if (0xAAAAAAAAAAAAAAABLL * (v43 >> 2) > 0x1555555555555555LL) {
      goto LABEL_166;
    }
    v44 = fw_memory_HeapManager_Allocate(*v13, v43, 16, 0);
    v45 = v44 + v43;
    v285 = v44;
    v286 = v44;
    v287 = v44 + v43;
    v7 = (_QWORD*)memcpy(v44, v42, v43);
    v286 = v45;
  }
  v46 = *(_DWORD*)(v8 + 280);
  v47 = *(_BYTE*)(v8 + 296);
  v281 = v37 + 16;
  v289 = v17 + 16;
  v288 = v46;
  if ((v47 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v290, *(_QWORD*)(v8 + 312),
                                                *(_QWORD*)(v8 + 304));
  }
  else {
    v48 = *(_QWORD*)(v8 + 296);
    v49 = *(_QWORD*)(v8 + 312);
    v290[1] = *(_QWORD*)(v8 + 304);
    v290[2] = v49;
    v290[0] = v48;
  }
  v291 = *(_BYTE*)(v8 + 320);
  v289 = v29 + 16;
  v50 = *(_QWORD*)(v8 + 324);
  v294 = 0;
  v295 = 0;
  v293 = 0;
  v292 = v50;
  v52 = *(_QWORD*)(v8 + 336);
  v51 = *(_QWORD*)(v8 + 344);
  v53 = v51 - v52;
  if (v51 != v52) {
    if (0xAAAAAAAAAAAAAAABLL * (v53 >> 2) > 0x1555555555555555LL) {
      goto LABEL_166;
    }
    v54 = fw_memory_HeapManager_Allocate(*v13, v53, 16, 0);
    v55 = v54 + v53;
    v293 = v54;
    v294 = v54;
    v295 = v54 + v53;
    v7 = (_QWORD*)memcpy(v54, v52, v53);
    v294 = v55;
  }
  v56 = *(_DWORD*)(v8 + 360);
  v57 = *(_BYTE*)(v8 + 376);
  v289 = v37 + 16;
  v297 = (__int64*)(v17 + 16);
  v296 = v56;
  if ((v57 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v298, *(_QWORD*)(v8 + 392),
                                                *(_QWORD*)(v8 + 384));
  }
  else {
    v58 = *(_QWORD*)(v8 + 376);
    v59 = *(_QWORD*)(v8 + 392);
    v298[1] = *(_QWORD*)(v8 + 384);
    v298[2] = v59;
    v298[0] = v58;
  }
  v61 = *(_QWORD*)(v8 + 416);
  v60 = *(_QWORD*)(v8 + 424);
  v299 = *(_BYTE*)(v8 + 400);
  v297 = GameData_212e578[0] + 2;
  v63 = *(_QWORD*)(v8 + 432);
  v62 = *(_QWORD*)(v8 + 440);
  v305 = 0;
  v306 = 0;
  v304 = 0;
  v300 = v61;
  v301 = v60;
  v302 = v63;
  v303 = v62;
  v65 = *(_QWORD*)(v8 + 448);
  v64 = *(_QWORD*)(v8 + 456);
  v66 = v64 - v65;
  if (v64 != v65) {
    if (0xAAAAAAAAAAAAAAABLL * (v66 >> 4) > 0x555555555555555LL) {
      goto LABEL_167;
    }
    v67 = fw_memory_HeapManager_Allocate(*v13, v66, 16, 0);
    v68 = v67 + v66;
    v304 = v67;
    v305 = v67;
    v306 = v67 + v66;
    memcpy(v67, v65, v66);
    v305 = v68;
  }
  v308 = *(_QWORD*)(v8 + 488);
  v307 = *(_QWORD*)(v8 + 480);
  v309 = v17 + 16;
  v297 = GameData_212e570[0] + 2;
  v7 = v310;
  if ((*(_BYTE*)(v8 + 504) & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v310, *(_QWORD*)(v8 + 520),
                                                *(_QWORD*)(v8 + 512));
  }
  else {
    v69 = *(_QWORD*)(v8 + 504);
    v70 = *(_QWORD*)(v8 + 520);
    v310[1] = *(_QWORD*)(v8 + 512);
    v310[2] = v70;
    v310[0] = v69;
  }
  v311 = *(_BYTE*)(v8 + 528);
  v309 = v29 + 16;
  v71 = *(_QWORD*)(v8 + 532);
  v313 = 0;
  v315 = 0;
  v314 = 0;
  v72 = *(_QWORD*)(v8 + 544);
  v312 = v71;
  v73 = *(_QWORD*)(v8 + 552);
  v74 = v73 - v72;
  if (v73 != v72) {
    if (0xAAAAAAAAAAAAAAABLL * (v74 >> 2) > 0x1555555555555555LL) {
      goto LABEL_166;
    }
    v75 = fw_memory_HeapManager_Allocate(*v13, v74, 16, 0);
    v76 = v75 + v74;
    v313 = v75;
    v314 = v75;
    v315 = v75 + v74;
    memcpy(v75, v72, v74);
    v314 = v76;
  }
  v77 = *(_DWORD*)(v8 + 568);
  v309 = v37 + 16;
  v317 = (__int64*)(v17 + 16);
  v7 = v318;
  v78 = *(_BYTE*)(v8 + 584);
  v316 = v77;
  if ((v78 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v318, *(_QWORD*)(v8 + 600),
                                                *(_QWORD*)(v8 + 592));
  }
  else {
    v79 = *(_QWORD*)(v8 + 584);
    v80 = *(_QWORD*)(v8 + 600);
    v318[1] = *(_QWORD*)(v8 + 592);
    v318[2] = v80;
    v318[0] = v79;
  }
  v319 = *(_BYTE*)(v8 + 608);
  v317 = GameData_212e568[0] + 2;
  v81 = *(_WORD*)(v8 + 609);
  v321 = 0;
  v323 = 0;
  v322 = 0;
  v82 = *(_QWORD*)(v8 + 616);
  v320 = v81;
  v83 = *(_QWORD*)(v8 + 624);
  v84 = v83 - v82;
  if (v83 != v82) {
    if (v84 < 0) {
      goto LABEL_168;
    }
    v85 = fw_memory_HeapManager_Allocate(*v13, v83 - v82, 16, 0);
    v86 = v85 + v84;
    v321 = v85;
    v322 = v85;
    v323 = v85 + v84;
    memcpy(v85, v82, v84 - 2);
    v322 = v86;
  }
  v324 = *(_BYTE*)(v8 + 640);
  v317 = GameData_212e560[0] + 2;
  v325 = v17 + 16;
  v7 = v326;
  if ((*(_BYTE*)(v8 + 656) & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v326, *(_QWORD*)(v8 + 672),
                                                *(_QWORD*)(v8 + 664));
  }
  else {
    v326[1] = *(_QWORD*)(v8 + 664);
    v87 = *(_QWORD*)(v8 + 656);
    v326[2] = *(_QWORD*)(v8 + 672);
    v326[0] = v87;
  }
  v327 = *(_BYTE*)(v8 + 680);
  v325 = v29 + 16;
  v88 = *(_QWORD*)(v8 + 684);
  v329 = 0;
  v331 = 0;
  v330 = 0;
  v89 = *(_QWORD*)(v8 + 696);
  v328 = v88;
  v90 = *(_QWORD*)(v8 + 704);
  v91 = v90 - v89;
  if (v90 != v89) {
    if (0xAAAAAAAAAAAAAAABLL * (v91 >> 2) > 0x1555555555555555LL) {
      goto LABEL_166;
    }
    v92 = fw_memory_HeapManager_Allocate(*v13, v91, 16, 0);
    v93 = v92 + v91;
    v329 = v92;
    v330 = v92;
    v331 = v92 + v91;
    memcpy(v92, v89, v91);
    v330 = v93;
  }
  v94 = *(_DWORD*)(v8 + 720);
  v325 = v37 + 16;
  v333 = (__int64*)(v17 + 16);
  v95 = v334;
  v96 = *(_BYTE*)(v8 + 736);
  v332 = v94;
  if ((v96 & 1) != 0) {
    v95 = (_QWORD*)fw_text_String_CopyTerminated(v334, *(_QWORD*)(v8 + 752),
                                                 *(_QWORD*)(v8 + 744));
  }
  else {
    v334[1] = *(_QWORD*)(v8 + 744);
    v97 = *(_QWORD*)(v8 + 736);
    v334[2] = *(_QWORD*)(v8 + 752);
    v334[0] = v97;
  }
  v335 = *(_BYTE*)(v8 + 760);
  v333 = GameData_212e558[0] + 2;
  v98 = *(_QWORD*)(v8 + 764);
  v337 = 0;
  v339 = 0;
  v338 = 0;
  v99 = *(_QWORD*)(v8 + 776);
  v336 = v98;
  v100 = *(_QWORD*)(v8 + 784);
  v101 = v100 - v99;
  if (v100 != v99) {
    if (0xAAAAAAAAAAAAAAABLL * (v101 >> 2) > 0x1555555555555555LL) {
      GameRoutine_ab9110(v95);
    }
    v102 = fw_memory_HeapManager_Allocate(*v13, v101, 16, 0);
    v103 = v102 + v101;
    v337 = v102;
    v338 = v102;
    v339 = v102 + v101;
    memcpy(v102, v99, v101);
    v338 = v103;
  }
  v340 = *(_DWORD*)(v8 + 800);
  v333 = GameData_212e550[0] + 2;
  v341 = v17 + 16;
  v7 = v342;
  if ((*(_BYTE*)(v8 + 816) & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v342, *(_QWORD*)(v8 + 832),
                                                *(_QWORD*)(v8 + 824));
  }
  else {
    v342[1] = *(_QWORD*)(v8 + 824);
    v104 = *(_QWORD*)(v8 + 816);
    v342[2] = *(_QWORD*)(v8 + 832);
    v342[0] = v104;
  }
  v343 = *(_BYTE*)(v8 + 840);
  v341 = v29 + 16;
  v105 = *(_QWORD*)(v8 + 844);
  v345 = 0;
  v347 = 0;
  v346 = 0;
  v106 = *(_QWORD*)(v8 + 856);
  v344 = v105;
  v107 = *(_QWORD*)(v8 + 864);
  v108 = v107 - v106;
  if (v107 != v106) {
    if (0xAAAAAAAAAAAAAAABLL * (v108 >> 2) > 0x1555555555555555LL) {
      goto LABEL_166;
    }
    v109 = fw_memory_HeapManager_Allocate(*v13, v108, 16, 0);
    v110 = v109 + v108;
    v345 = v109;
    v346 = v109;
    v347 = v109 + v108;
    memcpy(v109, v106, v108);
    v346 = v110;
  }
  v111 = *(_DWORD*)(v8 + 880);
  v341 = v37 + 16;
  v349 = v17 + 16;
  v7 = v350;
  v112 = *(_BYTE*)(v8 + 896);
  v348 = v111;
  if ((v112 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v350, *(_QWORD*)(v8 + 912),
                                                *(_QWORD*)(v8 + 904));
  }
  else {
    v350[1] = *(_QWORD*)(v8 + 904);
    v113 = *(_QWORD*)(v8 + 896);
    v350[2] = *(_QWORD*)(v8 + 912);
    v350[0] = v113;
  }
  v351 = *(_BYTE*)(v8 + 920);
  v349 = v29 + 16;
  v114 = *(_QWORD*)(v8 + 924);
  v353 = 0;
  v355 = 0;
  v354 = 0;
  v115 = *(_QWORD*)(v8 + 936);
  v352 = v114;
  v116 = *(_QWORD*)(v8 + 944);
  v117 = v116 - v115;
  if (v116 != v115) {
    if (0xAAAAAAAAAAAAAAABLL * (v117 >> 2) > 0x1555555555555555LL) {
      goto LABEL_166;
    }
    v118 = fw_memory_HeapManager_Allocate(*v13, v117, 16, 0);
    v119 = v118 + v117;
    v353 = v118;
    v354 = v118;
    v355 = v118 + v117;
    memcpy(v118, v115, v117);
    v354 = v119;
  }
  v120 = *(_DWORD*)(v8 + 960);
  v349 = v37 + 16;
  v357 = v17 + 16;
  v7 = v358;
  v121 = *(_BYTE*)(v8 + 976);
  v356 = v120;
  if ((v121 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v358, *(_QWORD*)(v8 + 992),
                                                *(_QWORD*)(v8 + 984));
  }
  else {
    v358[1] = *(_QWORD*)(v8 + 984);
    v122 = *(_QWORD*)(v8 + 976);
    v358[2] = *(_QWORD*)(v8 + 992);
    v358[0] = v122;
  }
  v359 = *(_BYTE*)(v8 + 1000);
  v357 = v29 + 16;
  v123 = *(_QWORD*)(v8 + 1004);
  v361 = 0;
  v363 = 0;
  v362 = 0;
  v124 = *(_QWORD*)(v8 + 1016);
  v360 = v123;
  v125 = *(_QWORD*)(v8 + 1024);
  v126 = v125 - v124;
  if (v125 != v124) {
    if (0xAAAAAAAAAAAAAAABLL * (v126 >> 2) > 0x1555555555555555LL) {
      goto LABEL_166;
    }
    v127 = fw_memory_HeapManager_Allocate(*v13, v126, 16, 0);
    v128 = v127 + v126;
    v361 = v127;
    v362 = v127;
    v363 = v127 + v126;
    memcpy(v127, v124, v126);
    v362 = v128;
  }
  v129 = *(_DWORD*)(v8 + 1040);
  v357 = v37 + 16;
  v365 = v17 + 16;
  v7 = v366;
  v130 = *(_BYTE*)(v8 + 1056);
  v364 = v129;
  if ((v130 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v366, *(_QWORD*)(v8 + 1072),
                                                *(_QWORD*)(v8 + 1064));
  }
  else {
    v366[1] = *(_QWORD*)(v8 + 1064);
    v131 = *(_QWORD*)(v8 + 1056);
    v366[2] = *(_QWORD*)(v8 + 1072);
    v366[0] = v131;
  }
  v367 = *(_BYTE*)(v8 + 1080);
  v365 = v29 + 16;
  v132 = *(_QWORD*)(v8 + 1084);
  v369 = 0;
  v371 = 0;
  v370 = 0;
  v133 = *(_QWORD*)(v8 + 1096);
  v368 = v132;
  v134 = *(_QWORD*)(v8 + 1104);
  v135 = v134 - v133;
  if (v134 != v133) {
    if (0xAAAAAAAAAAAAAAABLL * (v135 >> 2) > 0x1555555555555555LL) {
      goto LABEL_166;
    }
    v136 = fw_memory_HeapManager_Allocate(*v13, v135, 16, 0);
    v137 = v136 + v135;
    v369 = v136;
    v370 = v136;
    v371 = v136 + v135;
    memcpy(v136, v133, v135);
    v370 = v137;
  }
  v138 = *(_DWORD*)(v8 + 1120);
  v365 = v37 + 16;
  v373 = v17 + 16;
  v7 = v374;
  v139 = *(_BYTE*)(v8 + 1136);
  v372 = v138;
  if ((v139 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v374, *(_QWORD*)(v8 + 1152),
                                                *(_QWORD*)(v8 + 1144));
  }
  else {
    v374[1] = *(_QWORD*)(v8 + 1144);
    v140 = *(_QWORD*)(v8 + 1136);
    v374[2] = *(_QWORD*)(v8 + 1152);
    v374[0] = v140;
  }
  v375 = *(_BYTE*)(v8 + 1160);
  v373 = v29 + 16;
  v141 = *(_QWORD*)(v8 + 1164);
  v377 = 0;
  v379 = 0;
  v378 = 0;
  v142 = *(_QWORD*)(v8 + 1176);
  v376 = v141;
  v143 = *(_QWORD*)(v8 + 1184);
  v144 = v143 - v142;
  if (v143 != v142) {
    if (0xAAAAAAAAAAAAAAABLL * (v144 >> 2) > 0x1555555555555555LL) {
      goto LABEL_166;
    }
    v145 = fw_memory_HeapManager_Allocate(*v13, v144, 16, 0);
    v146 = v145 + v144;
    v377 = v145;
    v378 = v145;
    v379 = v145 + v144;
    memcpy(v145, v142, v144);
    v378 = v146;
  }
  v147 = *(_DWORD*)(v8 + 1200);
  v373 = v37 + 16;
  v381 = (__int64*)(v17 + 16);
  v7 = v382;
  v148 = *(_BYTE*)(v8 + 1216);
  v380 = v147;
  if ((v148 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v382, *(_QWORD*)(v8 + 1232),
                                                *(_QWORD*)(v8 + 1224));
  }
  else {
    v382[1] = *(_QWORD*)(v8 + 1224);
    v149 = *(_QWORD*)(v8 + 1216);
    v382[2] = *(_QWORD*)(v8 + 1232);
    v382[0] = v149;
  }
  v383 = *(_BYTE*)(v8 + 1240);
  v381 = GameData_212e568[0] + 2;
  v150 = *(_WORD*)(v8 + 1241);
  v385 = 0;
  v387 = 0;
  v386 = 0;
  v151 = *(_QWORD*)(v8 + 1248);
  v384 = v150;
  v152 = *(_QWORD*)(v8 + 1256);
  v153 = v152 - v151;
  if (v152 != v151) {
    if (v153 < 0) {
      goto LABEL_168;
    }
    v154 = fw_memory_HeapManager_Allocate(*v13, v152 - v151, 16, 0);
    v155 = v154 + v153;
    v385 = v154;
    v386 = v154;
    v387 = v154 + v153;
    memcpy(v154, v151, v153 - 2);
    v386 = v155;
  }
  v388 = *(_BYTE*)(v8 + 1272);
  v381 = GameData_212e560[0] + 2;
  v389 = (__int64*)(v17 + 16);
  v7 = v390;
  if ((*(_BYTE*)(v8 + 1288) & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v390, *(_QWORD*)(v8 + 1304),
                                                *(_QWORD*)(v8 + 1296));
  }
  else {
    v156 = *(_QWORD*)(v8 + 1288);
    v157 = *(_QWORD*)(v8 + 1304);
    v390[1] = *(_QWORD*)(v8 + 1296);
    v390[2] = v157;
    v390[0] = v156;
  }
  v391 = *(_BYTE*)(v8 + 1312);
  v158 = *(_QWORD*)(v8 + 1352);
  v159 = *(_QWORD*)(v8 + 1328);
  v160 = *(_QWORD*)(v8 + 1344);
  v389 = GameData_212e578[0] + 2;
  v161 = *(_QWORD*)(v8 + 1336);
  v396 = 0;
  v398 = 0;
  v397 = 0;
  v394 = v160;
  v392 = v159;
  v395 = v158;
  v162 = *(_QWORD*)(v8 + 1360);
  v393 = v161;
  v163 = *(_QWORD*)(v8 + 1368);
  v164 = v163 - v162;
  if (v163 != v162) {
    if (0xAAAAAAAAAAAAAAABLL * (v164 >> 4) > 0x555555555555555LL) {
      goto LABEL_167;
    }
    v165 = fw_memory_HeapManager_Allocate(*v13, v164, 16, 0);
    v166 = v165 + v164;
    v396 = v165;
    v397 = v165;
    v398 = v165 + v164;
    memcpy(v165, v162, v164);
    v397 = v166;
  }
  v400 = *(_QWORD*)(v8 + 1400);
  v399 = *(_QWORD*)(v8 + 1392);
  v389 = GameData_212e570[0] + 2;
  v401 = (__int64*)(v17 + 16);
  v7 = v402;
  if ((*(_BYTE*)(v8 + 1416) & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v402, *(_QWORD*)(v8 + 1432),
                                                *(_QWORD*)(v8 + 1424));
  }
  else {
    v167 = *(_QWORD*)(v8 + 1416);
    v168 = *(_QWORD*)(v8 + 1432);
    v402[1] = *(_QWORD*)(v8 + 1424);
    v402[2] = v168;
    v402[0] = v167;
  }
  v403 = *(_BYTE*)(v8 + 1440);
  v401 = GameData_212e568[0] + 2;
  v169 = *(_WORD*)(v8 + 1441);
  v405 = 0;
  v407 = 0;
  v406 = 0;
  v170 = *(_QWORD*)(v8 + 1448);
  v404 = v169;
  v171 = *(_QWORD*)(v8 + 1456);
  v172 = v171 - v170;
  if (v171 != v170) {
    if ((v172 & 0x8000000000000000LL) == 0) {
      v173 = fw_memory_HeapManager_Allocate(*v13, v171 - v170, 16, 0);
      v174 = v173 + v172;
      v405 = v173;
      v406 = v173;
      v407 = v173 + v172;
      memcpy(v173, v170, v172 - 2);
      v406 = v174;
      goto LABEL_109;
    }
  LABEL_168:
    GameRoutine_abae00(v7);
  }
LABEL_109:
  v408 = *(_BYTE*)(v8 + 1472);
  v401 = GameData_212e560[0] + 2;
  v409 = (__int64*)(v17 + 16);
  v7 = v410;
  if ((*(_BYTE*)(v8 + 1496) & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v410, *(_QWORD*)(v8 + 1512),
                                                *(_QWORD*)(v8 + 1504));
  }
  else {
    v175 = *(_QWORD*)(v8 + 1496);
    v176 = *(_QWORD*)(v8 + 1512);
    v410[1] = *(_QWORD*)(v8 + 1504);
    v410[2] = v176;
    v410[0] = v175;
  }
  v411 = *(_BYTE*)(v8 + 1520);
  v177 = *(_QWORD*)(v8 + 1560);
  v178 = *(_QWORD*)(v8 + 1536);
  v179 = *(_QWORD*)(v8 + 1552);
  v409 = GameData_212e578[0] + 2;
  v180 = *(_QWORD*)(v8 + 1544);
  v416 = 0;
  v418 = 0;
  v417 = 0;
  v414 = v179;
  v412 = v178;
  v415 = v177;
  v181 = *(_QWORD*)(v8 + 1568);
  v413 = v180;
  v182 = *(_QWORD*)(v8 + 1576);
  v183 = v182 - v181;
  if (v182 != v181) {
    if (0xAAAAAAAAAAAAAAABLL * (v183 >> 4) > 0x555555555555555LL) {
      goto LABEL_167;
    }
    v184 = fw_memory_HeapManager_Allocate(*v13, v183, 16, 0);
    v185 = v184 + v183;
    v416 = v184;
    v417 = v184;
    v418 = v184 + v183;
    memcpy(v184, v181, v183);
    v417 = v185;
  }
  v420 = *(_QWORD*)(v8 + 1608);
  v419 = *(_QWORD*)(v8 + 1600);
  v409 = GameData_212e570[0] + 2;
  v421 = (__int64*)(v17 + 16);
  v7 = v422;
  if ((*(_BYTE*)(v8 + 1624) & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v422, *(_QWORD*)(v8 + 1640),
                                                *(_QWORD*)(v8 + 1632));
  }
  else {
    v186 = *(_QWORD*)(v8 + 1624);
    v187 = *(_QWORD*)(v8 + 1640);
    v422[1] = *(_QWORD*)(v8 + 1632);
    v422[2] = v187;
    v422[0] = v186;
  }
  v423 = *(_BYTE*)(v8 + 1648);
  v188 = *(_QWORD*)(v8 + 1688);
  v189 = *(_QWORD*)(v8 + 1664);
  v190 = *(_QWORD*)(v8 + 1680);
  v421 = GameData_212e578[0] + 2;
  v191 = *(_QWORD*)(v8 + 1672);
  v428 = 0;
  v430 = 0;
  v429 = 0;
  v426 = v190;
  v424 = v189;
  v427 = v188;
  v192 = *(_QWORD*)(v8 + 1696);
  v425 = v191;
  v193 = *(_QWORD*)(v8 + 1704);
  v194 = v193 - v192;
  if (v193 != v192) {
    if (0xAAAAAAAAAAAAAAABLL * (v194 >> 4) > 0x555555555555555LL) {
      goto LABEL_167;
    }
    v195 = fw_memory_HeapManager_Allocate(*v13, v194, 16, 0);
    v196 = v195 + v194;
    v428 = v195;
    v429 = v195;
    v430 = v195 + v194;
    memcpy(v195, v192, v194);
    v429 = v196;
  }
  v432 = *(_QWORD*)(v8 + 1736);
  v431 = *(_QWORD*)(v8 + 1728);
  v421 = GameData_212e570[0] + 2;
  v433 = (__int64*)(v17 + 16);
  v7 = v434;
  if ((*(_BYTE*)(v8 + 1752) & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v434, *(_QWORD*)(v8 + 1768),
                                                *(_QWORD*)(v8 + 1760));
  }
  else {
    v197 = *(_QWORD*)(v8 + 1752);
    v198 = *(_QWORD*)(v8 + 1768);
    v434[1] = *(_QWORD*)(v8 + 1760);
    v434[2] = v198;
    v434[0] = v197;
  }
  v435 = *(_BYTE*)(v8 + 1776);
  v199 = *(_QWORD*)(v8 + 1816);
  v200 = *(_QWORD*)(v8 + 1792);
  v201 = *(_QWORD*)(v8 + 1808);
  v433 = GameData_212e578[0] + 2;
  v202 = *(_QWORD*)(v8 + 1800);
  v440 = 0;
  v442 = 0;
  v441 = 0;
  v438 = v201;
  v436 = v200;
  v439 = v199;
  v203 = *(_QWORD*)(v8 + 1824);
  v437 = v202;
  v204 = *(_QWORD*)(v8 + 1832);
  v205 = v204 - v203;
  if (v204 != v203) {
    if (0xAAAAAAAAAAAAAAABLL * (v205 >> 4) <= 0x555555555555555LL) {
      v206 = fw_memory_HeapManager_Allocate(*v13, v205, 16, 0);
      v207 = v206 + v205;
      v440 = v206;
      v441 = v206;
      v442 = v206 + v205;
      memcpy(v206, v203, v205);
      v441 = v207;
      goto LABEL_127;
    }
  LABEL_167:
    GameRoutine_abc340(v7);
  }
LABEL_127:
  v444 = *(_QWORD*)(v8 + 1864);
  v443 = *(_QWORD*)(v8 + 1856);
  v433 = GameData_212e570[0] + 2;
  v445 = v17 + 16;
  v7 = v446;
  if ((*(_BYTE*)(v8 + 1880) & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v446, *(_QWORD*)(v8 + 1896),
                                                *(_QWORD*)(v8 + 1888));
  }
  else {
    v208 = *(_QWORD*)(v8 + 1880);
    v209 = *(_QWORD*)(v8 + 1896);
    v446[1] = *(_QWORD*)(v8 + 1888);
    v446[2] = v209;
    v446[0] = v208;
  }
  v447 = *(_BYTE*)(v8 + 1904);
  v445 = v29 + 16;
  v210 = *(_QWORD*)(v8 + 1908);
  v449 = 0;
  v451 = 0;
  v450 = 0;
  v211 = *(_QWORD*)(v8 + 1920);
  v448 = v210;
  v212 = *(_QWORD*)(v8 + 1928);
  v213 = v212 - v211;
  if (v212 != v211) {
    if (0xAAAAAAAAAAAAAAABLL * (v213 >> 2) > 0x1555555555555555LL) {
      goto LABEL_166;
    }
    v214 = fw_memory_HeapManager_Allocate(*v13, v213, 16, 0);
    v215 = v214 + v213;
    v449 = v214;
    v450 = v214;
    v451 = v214 + v213;
    memcpy(v214, v211, v213);
    v450 = v215;
  }
  v216 = *(_DWORD*)(v8 + 1944);
  v445 = v37 + 16;
  v453 = v17 + 16;
  v7 = v454;
  v217 = *(_BYTE*)(v8 + 1960);
  v452 = v216;
  if ((v217 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v454, *(_QWORD*)(v8 + 1976),
                                                *(_QWORD*)(v8 + 1968));
  }
  else {
    v218 = *(_QWORD*)(v8 + 1960);
    v219 = *(_QWORD*)(v8 + 1976);
    v454[1] = *(_QWORD*)(v8 + 1968);
    v454[2] = v219;
    v454[0] = v218;
  }
  v455 = *(_BYTE*)(v8 + 1984);
  v453 = v29 + 16;
  v220 = *(_QWORD*)(v8 + 1988);
  v457 = 0;
  v459 = 0;
  v458 = 0;
  v221 = *(_QWORD*)(v8 + 2000);
  v456 = v220;
  v222 = *(_QWORD*)(v8 + 2008);
  v223 = v222 - v221;
  if (v222 != v221) {
    if (0xAAAAAAAAAAAAAAABLL * (v223 >> 2) > 0x1555555555555555LL) {
      goto LABEL_166;
    }
    v224 = fw_memory_HeapManager_Allocate(*v13, v223, 16, 0);
    v225 = v224 + v223;
    v457 = v224;
    v458 = v224;
    v459 = v224 + v223;
    memcpy(v224, v221, v223);
    v458 = v225;
  }
  v226 = *(_DWORD*)(v8 + 2024);
  v453 = v37 + 16;
  v461 = v17 + 16;
  v7 = v462;
  v227 = *(_BYTE*)(v8 + 2040);
  v460 = v226;
  if ((v227 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v462, *(_QWORD*)(v8 + 2056),
                                                *(_QWORD*)(v8 + 2048));
  }
  else {
    v228 = *(_QWORD*)(v8 + 2040);
    v229 = *(_QWORD*)(v8 + 2056);
    v462[1] = *(_QWORD*)(v8 + 2048);
    v462[2] = v229;
    v462[0] = v228;
  }
  v463 = *(_BYTE*)(v8 + 2064);
  v461 = v29 + 16;
  v230 = *(_QWORD*)(v8 + 2068);
  v465 = 0;
  v467 = 0;
  v466 = 0;
  v231 = *(_QWORD*)(v8 + 2080);
  v464 = v230;
  v232 = *(_QWORD*)(v8 + 2088);
  v233 = v232 - v231;
  if (v232 != v231) {
    if (0xAAAAAAAAAAAAAAABLL * (v233 >> 2) <= 0x1555555555555555LL) {
      v234 = fw_memory_HeapManager_Allocate(*v13, v233, 16, 0);
      v235 = v234 + v233;
      v465 = v234;
      v466 = v234;
      v467 = v234 + v233;
      memcpy(v234, v231, v233);
      v466 = v235;
      goto LABEL_145;
    }
  LABEL_166:
    GameRoutine_aa0e00(v7);
  }
LABEL_145:
  v236 = *(_DWORD*)(v8 + 2104);
  v461 = v37 + 16;
  v237 = 120;
  v468 = v236;
  if (HIBYTE(v268) != 0) {
    v237 = 89;
  }
  if ((*((_BYTE*)&v261[-1] + v237) & 1) != 0) {
    v239 = *(__int64 (**)())v259;
    v238 = *(_QWORD*)(v259 + 8);
    v240 = *(_DWORD*)(v259 + 96);
    v241 = fw_memory_HeapManager_Allocate(*v13, 240, 16, 0);
    *(_QWORD*)(v241 + 32) = 0;
    *(_QWORD*)(v241 + 40) = 0;
    *(_QWORD*)(v241 + 48) = 0;
    *(_QWORD*)(v241 + 56) = 0;
    *(_QWORD*)(v241 + 64) = 0;
    *(_QWORD*)(v241 + 72) = 0;
    *(_DWORD*)(v241 + 80) = v240;
    v470 = GameData_1fcb600;
    v471 = &v469;
    *(_QWORD*)(v241 + 192) = GameData_1fcb690;
    *(_QWORD*)(v241 + 88) = 0;
    *(_QWORD*)(v241 + 96) = 0;
    *(_QWORD*)(v241 + 104) = 0;
    *(_QWORD*)(v241 + 112) = 0;
    *(_QWORD*)(v241 + 120) = 0;
    *(_QWORD*)(v241 + 128) = 0;
    v473 = &v470;
    *(_QWORD*)(v241 + 224) = v241 + 192;
    *(_BYTE*)(v241 + 8) = 14;
    v472 = v258;
    *(_QWORD*)(v241 + 200) = v258;
    strcpy((char*)(v241 + 9), "FogPass");
    *(_BYTE*)(v241 + 84) = 1;
    *(_QWORD*)v241 = GameData_1fcb720;
    *(_QWORD*)(v241 + 144) = GameData_1fcb600;
    *(_QWORD*)(v241 + 176) = v241 + 144;
    v242 = v472;
    *(_QWORD*)(v241 + 152) = v471;
    *(_QWORD*)(v241 + 160) = v242;
    v244 = *(__int64**)(v259 + 8);
    v243 = *(_QWORD*)(v259 + 16);
    if ((unsigned __int64)v244 >= v243) {
      v246 = *(__int64 (**)())v259;
      v247 = (__int64)v244 - *(_QWORD*)v259;
      v248 = (v247 >> 3) + 1;
      if (v248 >> 61 != 0) {
        GameRoutine_b32f30();
      }
      v249 = v243 - (_QWORD)v246;
      if (v249 >> 2 > v248) {
        v248 = v249 >> 2;
      }
      if ((unsigned __int64)v249 >= 0x7FFFFFFFFFFFFFF8LL) {
        v250 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v250 = v248;
      }
      if (v250 != 0) {
        if (v250 >> 61 != 0) {
          GameRoutine_60a210(v241);
        }
        v251 = v241;
        v252 = fw_memory_HeapManager_Allocate(*v13, 8 * v250, 16, 0);
        v241 = v251;
      }
      else {
        v252 = 0;
      }
      v253 = v252 + 8 * v250;
      v254 = v252 + v247 - 8 * (v247 >> 3);
      *(_QWORD*)(v252 + v247) = v241;
      v245 = v252 + v247 + 8;
      memcpy(v254, v246, v247);
      *(_QWORD*)v259 = v254;
      *(_QWORD*)(v259 + 8) = v245;
      *(_QWORD*)(v259 + 16) = v253;
      if (v246 != nullptr) {
        v255 = 128;
        if (*(_QWORD*)(*v13 + 200LL) == 0) {
          v255 = 56;
        }
        nn_mem_StandardAllocator_Free(*v13 + v255, v246);
      }
    }
    else {
      *v244 = v241;
      v245 = (__int64)(v244 + 1);
    }
    *(_QWORD*)(v259 + 8) = v245;
    v256 = *(_QWORD***)(v245 - 8);
    v470 = (__int64 (**)())v259;
    v471 = v256;
    ((void (*)(_QWORD**, __int64 (***)()))(*v256)[2])(v256, &v470);
    *v469 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v259 +
                                  ((v238 - (_QWORD)v239) & 0x7FFFFFFF8LL)) +
                       128LL);
  }
  return FogSetting_Destructor(&v260);
}

__int64 gfxa_MainPassImageProcess_SetupHeightFogPass(__int64 result, __int64 a2,
                                                     _QWORD* a3, _QWORD* a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
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
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  _QWORD* v39;
  struct {
    _QWORD v40[4];
    _QWORD* v41;
  } v40_;

  v4 = *a4;
  v38 = a4;
  v39 = a3;
  v5 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 112LL);
  v37 = v5;
  if (v5 != 0) {
    v6 = 120;
    if (*(_BYTE*)(v5 + 90) != 0) {
      v6 = 89;
    }
    if ((*(_BYTE*)(v5 + v6) & 1) != 0) {
      v8 = *(_QWORD*)a2;
      v7 = *(_QWORD*)(a2 + 8);
      v9 = *(_DWORD*)(a2 + 96);
      v11 = result;
      v12 = (__int64*)fw_memory_g_heap_manager_ptr;
      v13 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 384, 16, 0);
      v14 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v12, 40, 16, 0);
      *(_QWORD*)(v13 + 32) = 0;
      *(_QWORD*)(v13 + 40) = 0;
      *(_QWORD*)(v13 + 48) = 0;
      *(_QWORD*)(v13 + 56) = 0;
      *(_QWORD*)(v13 + 64) = 0;
      *(_QWORD*)(v13 + 72) = 0;
      v14[2] = &v39;
      v14[3] = &v37;
      *v14 = GameData_1fcb768;
      v14[1] = v11;
      *(_BYTE*)(v13 + 8) = 26;
      *(_DWORD*)(v13 + 80) = v9;
      *(_QWORD*)(v13 + 240) = 0;
      *(_QWORD*)(v13 + 144) = 0;
      *(_QWORD*)(v13 + 152) = 0;
      v14[4] = &v38;
      v15 = *v12;
      v40_.v40[0] = GameData_1fcb7f8;
      v40_.v40[1] = v11;
      *(_QWORD*)(v13 + 128) = 0;
      *(_QWORD*)(v13 + 136) = 0;
      *(_QWORD*)(v13 + 112) = 0;
      *(_QWORD*)(v13 + 120) = 0;
      *(_QWORD*)(v13 + 96) = 0;
      *(_QWORD*)(v13 + 104) = 0;
      *(_QWORD*)(v13 + 256) = 0;
      *(_QWORD*)(v13 + 272) = 0;
      v40_.v41 = v40_.v40;
      strcpy((char*)(v13 + 9), "HeightFogPass");
      *(_BYTE*)(v13 + 84) = 1;
      *(_QWORD*)v13 = GameData_1fcb888;
      *(_DWORD*)(v13 + 248) = -1;
      *(_DWORD*)(v13 + 264) = -1;
      v16 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v15, 40, 16, 0);
      v17 = v14[1];
      v18 = v14[2];
      *(_QWORD*)(v13 + 320) = v16;
      *v16 = GameData_1fcb768;
      v16[1] = v17;
      v19 = v14[3];
      v20 = v14[4];
      v16[2] = v18;
      v16[3] = v19;
      v16[4] = v20;
      v21 = v40_.v41;
      if (v40_.v41 != nullptr) {
        if (v40_.v41 == v40_.v40) {
          *(_QWORD*)(v13 + 368) = v13 + 336;
          (*(void (**)(_QWORD*))(*v21 + 24LL))(v21);
        }
        else {
          *(_QWORD*)(v13 + 368) =
              (*(__int64 (**)(__int64))(*v40_.v41 + 16LL))((__int64)v40_.v41);
        }
        if (v40_.v41 == v40_.v40) {
          v22 = 32;
          goto LABEL_14;
        }
        if (v40_.v41 != nullptr) {
          v22 = 40;
        LABEL_14:
          (*(void (**)(__int64))(*v40_.v41 + v22))((__int64)v40_.v41);
        }
      }
      else {
        *(_QWORD*)(v13 + 368) = 0;
      }
      v23 = 128;
      if (*(_QWORD*)(*v12 + 200) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v12 + v23, (__int64)v14);
      v25 = *(__int64**)(a2 + 8);
      v24 = *(_QWORD*)(a2 + 16);
      if ((unsigned __int64)v25 >= v24) {
        v27 = *(_QWORD*)a2;
        v28 = (signed __int64)v25 - *(_QWORD*)a2;
        v29 = (v28 >> 3) + 1;
        if (v29 >> 61 != 0) {
          GameRoutine_b32f30_alt2();
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
          if (v31 >> 61 != 0) {
            GameRoutine_60a210_alt1();
          }
          v32 = fw_memory_HeapManager_Allocate_alt1(*v12, 8 * v31, 16, 0);
        }
        else {
          v32 = 0;
        }
        v33 = v32 + 8 * v31;
        v34 = v32 + v28 - 8 * (v28 >> 3);
        *(_QWORD*)(v32 + v28) = v13;
        v26 = v32 + v28 + 8;
        memcpy_alt1(v34, v27, v28);
        *(_QWORD*)a2 = v34;
        *(_QWORD*)(a2 + 8) = v26;
        *(_QWORD*)(a2 + 16) = v33;
        if (v27 != 0) {
          v35 = 128;
          if (*(_QWORD*)(*v12 + 200) == 0) {
            v35 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v12 + v35, v27);
        }
      }
      else {
        *v25 = v13;
        v26 = (__int64)(v25 + 1);
      }
      *(_QWORD*)(a2 + 8) = v26;
      v36 = *(_QWORD*)(v26 - 8);
      v40_.v40[0] = a2;
      v40_.v40[1] = v36;
      result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v36 + 16LL))(
          v36, v40_.v40);
      *v39 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v7 - v8) & 0x7FFFFFFF8LL)) +
                        272LL);
    }
  }
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupPostProcessPass2(__int64 result,
                                                        __int64 a2, _QWORD* a3,
                                                        __int64* a4, __int64 a5)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 (***v23)();
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  _QWORD** v50;
  unsigned __int64 v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  signed __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  _QWORD* v68;
  struct {
    __int64 (**v69)();
    __int64 v70;
    _QWORD** v71;
    char gap72_[8];
    __int64 (***v72)();
  } v69_;

  v5 = *a4;
  v7 = result;
  v67 = a5;
  v68 = a3;
  v8 = *(_QWORD*)(v5 + 8);
  v9 = *(_QWORD*)(v8 + 248);
  v66 = v9;
  if (v9 != 0) {
    v11 = 120;
    if (*(_BYTE*)(v9 + 90) != 0) {
      v11 = 89;
    }
    if ((*(_BYTE*)(v9 + v11) & 1) != 0 || a5 != 0 && *(_BYTE*)(a5 + 136) == 1) {
      v12 = *(_QWORD*)a2;
      v13 = *(_DWORD*)(a2 + 96);
      v65 = *(_QWORD*)(a2 + 8);
      v14 = (__int64*)fw_memory_g_heap_manager_ptr;
      v15 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1392, 16, 0);
      v16 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v14, 40, 16, 0);
      *(_QWORD*)(v15 + 32) = 0;
      *(_QWORD*)(v15 + 40) = 0;
      *(_QWORD*)(v15 + 48) = 0;
      *(_QWORD*)(v15 + 56) = 0;
      *(_QWORD*)(v15 + 64) = 0;
      *(_QWORD*)(v15 + 72) = 0;
      v16[2] = &v68;
      v16[3] = &v66;
      *v16 = GameData_1fcbd08;
      v16[1] = v7;
      v69_.v72 = &v69_.v69;
      *(_DWORD*)(v15 + 80) = v13;
      v16[4] = &v67;
      *(_QWORD*)(v15 + 160) = 0;
      *(_QWORD*)(v15 + 168) = 0;
      *(_QWORD*)(v15 + 144) = 0;
      *(_QWORD*)(v15 + 152) = 0;
      *(_QWORD*)(v15 + 128) = 0;
      *(_QWORD*)(v15 + 136) = 0;
      *(_QWORD*)(v15 + 112) = 0;
      *(_QWORD*)(v15 + 120) = 0;
      *(_QWORD*)(v15 + 96) = 0;
      *(_QWORD*)(v15 + 104) = 0;
      strcpy((char*)(v15 + 8), "$SightMapRenderPass");
      v69_.v69 = GameData_1fcbd98;
      v69_.v70 = v7;
      *(_BYTE*)(v15 + 84) = 1;
      *(_QWORD*)v15 = GameData_1fcbe28;
      *(_QWORD*)(v15 + 176) = 1063675494;
      *(_QWORD*)(v15 + 184) = 0x3F80000041C80000LL;
      memset(v15 + 192, 0, 0x404u);
      v17 = *v14;
      *(_DWORD*)(v15 + 1236) = 0;
      *(_BYTE*)(v15 + 1240) = 0;
      *(_DWORD*)(v15 + 1244) = 0;
      *(_BYTE*)(v15 + 1248) = 0;
      *(_QWORD*)(v15 + 1264) = 0;
      *(_QWORD*)(v15 + 1272) = 0;
      *(_QWORD*)(v15 + 1280) = 0;
      *(_QWORD*)(v15 + 1220) = 0x400000003F800000LL;
      *(_QWORD*)(v15 + 1228) = 0xBF800000BF800000LL;
      v18 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v17, 40, 16, 0);
      v19 = v16[1];
      v20 = v16[2];
      *(_QWORD*)(v15 + 1328) = v18;
      *v18 = GameData_1fcbd08;
      v18[1] = v19;
      v21 = v16[3];
      v22 = v16[4];
      v18[2] = v20;
      v18[3] = v21;
      v18[4] = v22;
      v23 = v69_.v72;
      if (v69_.v72 != nullptr) {
        if (v69_.v72 == &v69_.v69) {
          *(_QWORD*)(v15 + 1376) = v15 + 1344;
          ((void (*)(__int64 (***)(void)))(*v23)[3])(v23);
        }
        else {
          *(_QWORD*)(v15 + 1376) =
              ((__int64 (*)(__int64))(*v69_.v72)[2])((__int64)v69_.v72);
        }
        if (v69_.v72 == &v69_.v69) {
          v24 = 4;
          goto LABEL_16;
        }
        if (v69_.v72 != nullptr) {
          v24 = 5;
        LABEL_16:
          ((__int64 (*)(__int64))(*v69_.v72)[v24])((__int64)v69_.v72);
        }
      }
      else {
        *(_QWORD*)(v15 + 1376) = 0;
      }
      v25 = 128;
      if (*(_QWORD*)(*v14 + 200) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v14 + v25, (__int64)v16);
      v27 = *(__int64**)(a2 + 8);
      v26 = *(_QWORD*)(a2 + 16);
      if ((unsigned __int64)v27 >= v26) {
        v30 = *(_QWORD*)a2;
        v31 = (__int64)v27 - *(_QWORD*)a2;
        v32 = (v31 >> 3) + 1;
        if (v32 >> 61 != 0) {
          goto LABEL_58;
        }
        v33 = v26 - v30;
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
            goto LABEL_59;
          }
          v35 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v34, 16, 0);
        }
        else {
          v35 = 0;
        }
        v36 = v35 + 8 * v34;
        v37 = (unsigned __int64)v27 - v30;
        v38 = v35 + v31 - 8 * (v31 >> 3);
        *(_QWORD*)(v35 + v31) = v15;
        v29 = v35 + v31 + 8;
        memcpy_alt1(v38, v30, v37);
        *(_QWORD*)a2 = v38;
        *(_QWORD*)(a2 + 8) = v29;
        *(_QWORD*)(a2 + 16) = v36;
        if (v30 != 0) {
          v39 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v39 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v39, v30);
        }
        v28 = v65;
      }
      else {
        v28 = v65;
        *v27 = v15;
        v29 = (__int64)(v27 + 1);
      }
      *(_QWORD*)(a2 + 8) = v29;
      v40 = v28 - v12;
      v41 = *(_QWORD*)(v29 - 8);
      v69_.v69 = (__int64 (**)(void))a2;
      v69_.v70 = v41;
      result = (*(__int64 (**)(__int64, __int64 (***)(void)))(
          *(_QWORD*)v41 + 16LL))(v41, &v69_.v69);
      *v68 =
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + (v40 & 0x7FFFFFFF8LL)) + 1264LL);
      v8 = *(_QWORD*)(*a4 + 8);
    }
  }
  v42 = *(_QWORD*)(v8 + 136);
  v43 = 208;
  if (*(_BYTE*)(v42 + 176) != 0) {
    v43 = 172;
  }
  if (*(float*)(v42 + v43) > 0x0.0p+0f) {
    v45 = *(_QWORD*)a2;
    v44 = *(_QWORD*)(a2 + 8);
    v46 = *(_DWORD*)(a2 + 96);
    v47 = (__int64*)fw_memory_g_heap_manager_ptr;
    v48 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 224, 16, 0);
    *(_QWORD*)(v48 + 32) = 0;
    *(_QWORD*)(v48 + 40) = 0;
    *(_QWORD*)(v48 + 48) = 0;
    *(_QWORD*)(v48 + 56) = 0;
    *(_QWORD*)(v48 + 64) = 0;
    *(_QWORD*)(v48 + 72) = 0;
    *(_DWORD*)(v48 + 80) = v46;
    *(_QWORD*)(v48 + 104) = 0;
    *(_QWORD*)(v48 + 112) = 0;
    v69_.v71 = &v68;
    v69_.v69 = GameData_1fcbe70;
    v69_.v70 = v7;
    v69_.v72 = &v69_.v69;
    *(_QWORD*)(v48 + 88) = 0;
    *(_QWORD*)(v48 + 96) = 0;
    *(_QWORD*)(v48 + 184) = v7;
    *(_BYTE*)(v48 + 8) = 26;
    strcpy((char*)(v48 + 9), "DiffusionPass");
    *(_BYTE*)(v48 + 84) = 1;
    *(_QWORD*)(v48 + 128) = GameData_1fcbe70;
    *(_QWORD*)v48 = GameData_1fcbf90;
    *(_QWORD*)(v48 + 160) = v48 + 128;
    v49 = v69_.v70;
    v50 = v69_.v71;
    *(_QWORD*)(v48 + 176) = GameData_1fcbf00;
    *(_QWORD*)(v48 + 208) = v48 + 176;
    *(_QWORD*)(v48 + 136) = v49;
    *(_QWORD*)(v48 + 144) = v50;
    v52 = *(__int64**)(a2 + 8);
    v51 = *(_QWORD*)(a2 + 16);
    if ((unsigned __int64)v52 < v51) {
      *v52 = v48;
      v53 = (__int64)(v52 + 1);
    LABEL_56:
      *(_QWORD*)(a2 + 8) = v53;
      v64 = *(_QWORD*)(v53 - 8);
      v69_.v69 = (__int64 (**)(void))a2;
      v69_.v70 = v64;
      result = (*(__int64 (**)(__int64, __int64 (***)(void)))(
          *(_QWORD*)v64 + 16LL))(v64, &v69_.v69);
      *v68 =
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v44 - v45) & 0x7FFFFFFF8LL)) +
                     112LL);
      return result;
    }
    v54 = *(_QWORD*)a2;
    v55 = (signed __int64)v52 - *(_QWORD*)a2;
    v56 = (v55 >> 3) + 1;
    if (v56 >> 61 == 0) {
      v57 = v51 - v54;
      if (v57 >> 2 > v56) {
        v56 = v57 >> 2;
      }
      if ((unsigned __int64)v57 >= 0x7FFFFFFFFFFFFFF8LL) {
        v58 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v58 = v56;
      }
      if (v58 == 0) {
        v60 = 0;
      LABEL_52:
        v61 = v60 + 8 * v58;
        v62 = v60 + v55 - 8 * (v55 >> 3);
        *(_QWORD*)(v60 + v55) = v48;
        v53 = v60 + v55 + 8;
        memcpy_alt1(v62, v54, v55);
        *(_QWORD*)a2 = v62;
        *(_QWORD*)(a2 + 8) = v53;
        *(_QWORD*)(a2 + 16) = v61;
        if (v54 != 0) {
          v63 = 128;
          if (*(_QWORD*)(*v47 + 200) == 0) {
            v63 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v47 + v63, v54);
        }
        goto LABEL_56;
      }
      if (v58 >> 61 == 0) {
        v59 = v48;
        v60 = fw_memory_HeapManager_Allocate_alt1(*v47, 8 * v58, 16, 0);
        v48 = v59;
        goto LABEL_52;
      }
    LABEL_59:
      GameRoutine_60a210_alt1();
    }
  LABEL_58:
    GameRoutine_b32f30_alt2();
  }
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupPostProcessPass4(__int64 result,
                                                        __int64 a2, _QWORD* a3,
                                                        _QWORD* a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  _QWORD* v5;
  _QWORD** v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  _QWORD** v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  signed __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD** v29;
  __int64 v30;
  __int64 v31;
  _BYTE* v32;
  __int64 v33;
  _BYTE* v34;
  _BYTE* v35;
  _BYTE* v36;
  _BYTE* v37;
  _BYTE* v38;
  __int64 v39;
  _BYTE* v40;
  __int64 i;
  _BYTE* v42;
  __int64 j;
  _BYTE* v44;
  __int64 k;
  int v46;
  __int64 v47;
  char* v48;
  __int64 (***v49)();
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  signed __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  _QWORD* v60;
  _QWORD** v61;
  __int64* v62;
  unsigned __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  _QWORD** v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  int v74;
  __int64 v75;
  _QWORD** v76;
  unsigned __int64 v77;
  __int64* v78;
  __int64 v79;
  __int64 v80;
  signed __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64* v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  _QWORD** v91;
  _QWORD* v92;
  struct {
    _QWORD v93[4];
    _QWORD* v94;
  } v93_;
  struct {
    __int64 (**v95)();
    _QWORD** v96;
    _QWORD** v97;
    char gap88_[8];
    __int64 (***v98)();
  } v95_;

  v4 = *a4;
  v92 = a3;
  v5 = a4;
  v7 = (_QWORD**)result;
  v8 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 128LL);
  v9 = 128;
  if (*(_BYTE*)(v8 + 96) != 0) {
    v9 = 92;
  }
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (*(_DWORD*)(v8 + v9) != 0) {
    v12 = *(_QWORD*)a2;
    v11 = *(_QWORD*)(a2 + 8);
    v13 = *(_DWORD*)(a2 + 96);
    v14 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 256, 16, 0);
    v95_.v97 = v7;
    *(_QWORD*)(v14 + 32) = 0;
    *(_QWORD*)(v14 + 40) = 0;
    *(_QWORD*)(v14 + 48) = 0;
    *(_QWORD*)(v14 + 56) = 0;
    *(_QWORD*)(v14 + 64) = 0;
    *(_QWORD*)(v14 + 72) = 0;
    *(_DWORD*)(v14 + 80) = v13;
    *(_QWORD*)(v14 + 144) = 0;
    *(_QWORD*)(v14 + 152) = 0;
    v95_.v95 = GameData_1fcc2a8;
    v95_.v96 = &v92;
    v95_.v98 = &v95_.v95;
    *(_BYTE*)(v14 + 8) = 22;
    *(_QWORD*)(v14 + 128) = 0;
    *(_QWORD*)(v14 + 136) = 0;
    *(_QWORD*)(v14 + 112) = 0;
    *(_QWORD*)(v14 + 120) = 0;
    *(_QWORD*)(v14 + 96) = 0;
    *(_QWORD*)(v14 + 104) = 0;
    *(_QWORD*)(v14 + 88) = 0;
    *(_QWORD*)(v14 + 216) = v7;
    *(_QWORD*)(v14 + 208) = GameData_1fcc338;
    strcpy((char*)(v14 + 9), "DoFCompPass");
    *(_QWORD*)(v14 + 240) = v14 + 208;
    *(_BYTE*)(v14 + 84) = 1;
    *(_QWORD*)v14 = GameData_1fcc3c8;
    *(_QWORD*)(v14 + 160) = GameData_1fcc2a8;
    *(_QWORD*)(v14 + 192) = v14 + 160;
    v15 = v95_.v97;
    *(_QWORD*)(v14 + 168) = v95_.v96;
    *(_QWORD*)(v14 + 176) = v15;
    v17 = *(__int64**)(a2 + 8);
    v16 = *(_QWORD*)(a2 + 16);
    if ((unsigned __int64)v17 >= v16) {
      v19 = *(_QWORD*)a2;
      v20 = (signed __int64)v17 - *(_QWORD*)a2;
      v21 = (v20 >> 3) + 1;
      if (v21 >> 61 != 0) {
        goto LABEL_101;
      }
      v22 = v16 - v19;
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
          goto LABEL_102;
        }
        v24 = v14;
        v25 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v23, 16, 0);
        v14 = v24;
      }
      else {
        v25 = 0;
      }
      v26 = v25 + 8 * v23;
      v27 = v25 + v20 - 8 * (v20 >> 3);
      *(_QWORD*)(v25 + v20) = v14;
      v18 = v25 + v20 + 8;
      memcpy_alt1(v27, v19, v20);
      *(_QWORD*)a2 = v27;
      *(_QWORD*)(a2 + 8) = v18;
      *(_QWORD*)(a2 + 16) = v26;
      v10 = &fw_memory_g_heap_manager;
      if (v19 != 0) {
        v28 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v28, v19);
      }
    }
    else {
      *v17 = v14;
      v18 = (__int64)(v17 + 1);
    }
    *(_QWORD*)(a2 + 8) = v18;
    v29 = *(_QWORD***)(v18 - 8);
    v95_.v95 = (__int64 (**)(void))a2;
    v95_.v96 = v29;
    result =
        ((__int64 (*)(_QWORD**, __int64 (***)(void)))(*v29)[2])(v29, &v95_.v95);
    *v92 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v11 - v12) & 0x7FFFFFFF8LL)) +
                      152LL);
  }
  v30 = *(_QWORD*)(eft_g_effectSystem + 96);
  v31 = *(unsigned int*)(v30 + 8);
  if ((int)v31 >= 1) {
    v32 = *(_BYTE**)(v30 + 16);
    v33 = 0;
    v34 = v32 + 8;
    v35 = v32 + 12;
    v36 = v32 + 16;
    v37 = v32 + 20;
  LABEL_23:
    v38 = v34;
    v39 = v31;
    while ((*v38 & 0x10) == 0) {
      v38 += 2536;
      if (--v39 == 0) {
        v40 = v35;
        for (i = v31; i != 0; --i) {
          if ((*v40 & 0x10) != 0) {
            goto LABEL_37;
          }
          v40 += 2536;
        }
        v42 = v36;
        for (j = v31; j != 0; --j) {
          if ((*v42 & 0x10) != 0) {
            goto LABEL_37;
          }
          v42 += 2536;
        }
        if (v33 == 28) {
          goto LABEL_77;
        }
        v44 = v37;
        for (k = v31; k != 0; --k) {
          if ((*v44 & 0x10) != 0) {
            goto LABEL_37;
          }
          v44 += 2536;
        }
        v33 += 4;
        v34 += 16;
        v35 += 16;
        v36 += 16;
        v37 += 16;
        goto LABEL_23;
      }
    }
  LABEL_37:
    if (v92[12] != 0) {
      v46 = *(_DWORD*)(a2 + 96);
      v47 = fw_memory_HeapManager_Allocate_alt1(*v10, 208, 16, 0);
      v95_.v95 = GameData_1fcc410;
      v95_.v96 = &v92;
      v95_.v98 = &v95_.v95;
      v93_.v93[0] = GameData_1fcc4a0;
      v93_.v93[1] = v7;
      v93_.v94 = v93_.v93;
      *(_QWORD*)v47 = &gfx_flow_PassNodeBase_vtable;
      v48 = (char*)fw_memory_HeapManager_Allocate_alt1(*v10, 26, 16, 0);
      *(_QWORD*)(v47 + 32) = 0;
      *(_QWORD*)(v47 + 40) = 0;
      *(_QWORD*)(v47 + 48) = 0;
      *(_QWORD*)(v47 + 56) = 0;
      *(_QWORD*)(v47 + 64) = 0;
      *(_QWORD*)(v47 + 72) = 0;
      *(_DWORD*)(v47 + 80) = v46;
      *(_QWORD*)(v47 + 88) = 0;
      *(_QWORD*)(v47 + 96) = 0;
      *(_QWORD*)(v47 + 16) = 23;
      *(_QWORD*)(v47 + 24) = v48;
      strcpy(v48, "OffscreenEffectCompPass");
      v49 = v95_.v98;
      *(_BYTE*)(v47 + 84) = 1;
      *(_QWORD*)v47 = GameData_1fcc530;
      *(_QWORD*)(v47 + 8) = 27;
      if (v49 != nullptr) {
        if (v49 != &v95_.v95) {
          *(_QWORD*)(v47 + 144) =
              ((__int64 (*)(__int64 (***)(void)))(*v49)[2])(v49);
          v50 = v93_.v94;
          if (v93_.v94 == nullptr) {
            goto LABEL_46;
          }
        LABEL_43:
          if (v50 == v93_.v93) {
            *(_QWORD*)(v47 + 192) = v47 + 160;
            (*(void (**)(_QWORD*))(*v50 + 24LL))(v50);
          }
          else {
            *(_QWORD*)(v47 + 192) =
                (*(__int64 (**)(_QWORD*))(*v50 + 16LL))(v50);
          }
          if (v93_.v94 == v93_.v93) {
            v51 = 32;
          }
          else {
            if (v93_.v94 == nullptr) {
              goto LABEL_53;
            }
            v51 = 40;
          }
          (*(void (**)(__int64))(*v93_.v94 + v51))((__int64)v93_.v94);
        LABEL_53:
          if (v95_.v98 == &v95_.v95) {
            v52 = 4;
          }
          else {
            if (v95_.v98 == nullptr) {
            LABEL_58:
              v54 = *(__int64**)(a2 + 8);
              v53 = *(_QWORD*)(a2 + 16);
              if ((unsigned __int64)v54 >= v53) {
                v56 = *(_QWORD*)a2;
                v57 = (signed __int64)v54 - *(_QWORD*)a2;
                v58 = (v57 >> 3) + 1;
                if (v58 >> 61 != 0) {
                  goto LABEL_101;
                }
                v59 = v53 - v56;
                v60 = v5;
                v61 = v7;
                v62 = v10;
                if (v59 >> 2 > v58) {
                  v58 = v59 >> 2;
                }
                if ((unsigned __int64)v59 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v63 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v63 = v58;
                }
                if (v63 != 0) {
                  if (v63 >> 61 != 0) {
                    goto LABEL_102;
                  }
                  v64 =
                      fw_memory_HeapManager_Allocate_alt1(*v62, 8 * v63, 16, 0);
                }
                else {
                  v64 = 0;
                }
                v65 = v64 + 8 * v63;
                v66 = v64 + v57 - 8 * (v57 >> 3);
                *(_QWORD*)(v64 + v57) = v47;
                v55 = v64 + v57 + 8;
                memcpy_alt1(v66, v56, v57);
                *(_QWORD*)a2 = v66;
                *(_QWORD*)(a2 + 8) = v55;
                *(_QWORD*)(a2 + 16) = v65;
                if (v56 != 0) {
                  v10 = v62;
                  v67 = 128;
                  if (*(_QWORD*)(*v62 + 200) == 0) {
                    v67 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v62 + v67, v56);
                }
                else {
                  v10 = v62;
                }
                v7 = v61;
                v5 = v60;
              }
              else {
                *v54 = v47;
                v55 = (__int64)(v54 + 1);
              }
              *(_QWORD*)(a2 + 8) = v55;
              v68 = *(_QWORD***)(v55 - 8);
              v95_.v95 = (__int64 (**)(void))a2;
              v95_.v96 = v68;
              result = ((__int64 (*)(_QWORD**, __int64 (***)(void)))(*v68)[2])(
                  v68, &v95_.v95);
              goto LABEL_77;
            }
            v52 = 5;
          }
          ((__int64 (*)(__int64))(*v95_.v98)[v52])((__int64)v95_.v98);
          goto LABEL_58;
        }
        *(_QWORD*)(v47 + 144) = v47 + 112;
        ((void (*)(__int64 (***)(void)))(*v49)[3])(v49);
        v50 = v93_.v94;
        if (v93_.v94 != nullptr) {
          goto LABEL_43;
        }
      }
      else {
        *(_QWORD*)(v47 + 144) = 0;
        v50 = v93_.v94;
        if (v93_.v94 != nullptr) {
          goto LABEL_43;
        }
      }
    LABEL_46:
      *(_QWORD*)(v47 + 192) = 0;
      goto LABEL_53;
    }
  }
LABEL_77:
  v69 = *(_QWORD*)(*(_QWORD*)(*v5 + 8LL) + 168LL);
  v70 = 128;
  if (*(_BYTE*)(v69 + 96) != 0) {
    v70 = 92;
  }
  if (*(float*)(v69 + v70) > 0x0.0p+0f) {
    v71 = 208;
    if (*(_BYTE*)(v69 + 176) != 0) {
      v71 = 172;
    }
    if (*(int*)(v69 + v71) >= 2) {
      v73 = *(_QWORD*)a2;
      v72 = *(_QWORD*)(a2 + 8);
      v74 = *(_DWORD*)(a2 + 96);
      v75 = fw_memory_HeapManager_Allocate_alt1(*v10, 208, 16, 0);
      *(_QWORD*)(v75 + 32) = 0;
      *(_QWORD*)(v75 + 40) = 0;
      *(_QWORD*)(v75 + 48) = 0;
      *(_QWORD*)(v75 + 56) = 0;
      *(_QWORD*)(v75 + 64) = 0;
      *(_QWORD*)(v75 + 72) = 0;
      *(_DWORD*)(v75 + 80) = v74;
      *(_QWORD*)(v75 + 88) = 0;
      *(_QWORD*)(v75 + 96) = 0;
      v95_.v97 = &v92;
      v95_.v95 = GameData_1fcc578;
      v95_.v96 = v7;
      v95_.v98 = &v95_.v95;
      *(_QWORD*)(v75 + 168) = v7;
      strcpy((char*)(v75 + 8), "$TaskRadialBlurPass");
      *(_BYTE*)(v75 + 84) = 1;
      *(_QWORD*)(v75 + 160) = GameData_1fcc608;
      *(_QWORD*)v75 = GameData_1fcc698;
      *(_QWORD*)(v75 + 192) = v75 + 160;
      *(_QWORD*)(v75 + 112) = GameData_1fcc578;
      *(_QWORD*)(v75 + 144) = v75 + 112;
      v76 = v95_.v97;
      *(_QWORD*)(v75 + 120) = v95_.v96;
      *(_QWORD*)(v75 + 128) = v76;
      v78 = *(__int64**)(a2 + 8);
      v77 = *(_QWORD*)(a2 + 16);
      if ((unsigned __int64)v78 < v77) {
        *v78 = v75;
        v79 = (__int64)(v78 + 1);
      LABEL_99:
        *(_QWORD*)(a2 + 8) = v79;
        v91 = *(_QWORD***)(v79 - 8);
        v95_.v95 = (__int64 (**)(void))a2;
        v95_.v96 = v91;
        result = ((__int64 (*)(_QWORD**, __int64 (***)(void)))(*v91)[2])(
            v91, &v95_.v95);
        *v92 = *(
            _QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v72 - v73) & 0x7FFFFFFF8LL)) +
                     96LL);
        return result;
      }
      v80 = *(_QWORD*)a2;
      v81 = (signed __int64)v78 - *(_QWORD*)a2;
      v82 = (v81 >> 3) + 1;
      if (v82 >> 61 == 0) {
        v83 = v77 - v80;
        v84 = v10;
        if (v83 >> 2 > v82) {
          v82 = v83 >> 2;
        }
        if ((unsigned __int64)v83 >= 0x7FFFFFFFFFFFFFF8LL) {
          v85 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v85 = v82;
        }
        if (v85 == 0) {
          v87 = 0;
        LABEL_95:
          v88 = v87 + 8 * v85;
          v89 = v87 + v81 - 8 * (v81 >> 3);
          *(_QWORD*)(v87 + v81) = v75;
          v79 = v87 + v81 + 8;
          memcpy_alt1(v89, v80, v81);
          *(_QWORD*)a2 = v89;
          *(_QWORD*)(a2 + 8) = v79;
          *(_QWORD*)(a2 + 16) = v88;
          if (v80 != 0) {
            v90 = 128;
            if (*(_QWORD*)(*v84 + 200) == 0) {
              v90 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v84 + v90, v80);
          }
          goto LABEL_99;
        }
        if (v85 >> 61 == 0) {
          v86 = v75;
          v87 = fw_memory_HeapManager_Allocate_alt1(*v84, 8 * v85, 16, 0);
          v75 = v86;
          goto LABEL_95;
        }
      LABEL_102:
        GameRoutine_60a210_alt1();
      }
    LABEL_101:
      GameRoutine_b32f30_alt2();
    }
  }
  return result;
}

void gfxa_MainPassImageProcess_SetupPostProcessPass5(_QWORD** a1, __int64 a2,
                                                     _QWORD* a3, _QWORD* a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  char v35;
  __int64 v36;
  __int64 v37;
  __int16 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  char v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;
  _QWORD** v50;
  __int64* v51;
  unsigned __int64 v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  signed __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  _QWORD* v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  _QWORD** v72;
  _QWORD* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  __int64 v79;
  _QWORD** v80;
  unsigned __int64 v81;
  __int64* v82;
  __int64 v83;
  __int64 v84;
  signed __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  __int64 v93;
  _QWORD** v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  int v98;
  __int64 v99;
  unsigned __int64 v100;
  __int64* v101;
  __int64 v102;
  __int64 v103;
  signed __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  __int64 v111;
  __int64 v112;
  _QWORD** v113;
  _BYTE* v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  int v122;
  __int64 v123;
  _QWORD** v124;
  unsigned __int64 v125;
  __int64* v126;
  __int64 v127;
  __int64 v128;
  signed __int64 v129;
  unsigned __int64 v130;
  __int64 v131;
  unsigned __int64 v132;
  __int64 v133;
  __int64 v134;
  unsigned __int64 v135;
  __int64 v136;
  __int64 v137;
  _QWORD** v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  int v145;
  __int64* v146;
  __int64 v147;
  __int64* v148;
  char* v149;
  __int64 (***v150)();
  _QWORD* v151;
  __int64 v152;
  __int64 v153;
  unsigned __int64 v154;
  __int64* v155;
  __int64 v156;
  __int64 v157;
  signed __int64 v158;
  unsigned __int64 v159;
  __int64 v160;
  unsigned __int64 v161;
  __int64 v162;
  unsigned __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  _QWORD** v167;
  __int64 v168;
  __int64 v169;
  int v170;
  __int64* v171;
  __int64 v172;
  __int64 v173;
  char* v174;
  __int64 (***v175)();
  _QWORD* v176;
  __int64 v177;
  __int64 v178;
  unsigned __int64 v179;
  __int64* v180;
  __int64 v181;
  __int64 v182;
  signed __int64 v183;
  unsigned __int64 v184;
  __int64 v185;
  unsigned __int64 v186;
  __int64 v187;
  unsigned __int64 v188;
  __int64 v189;
  __int64 v190;
  _QWORD** v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  int v196;
  __int64* v197;
  __int64 v198;
  _QWORD** v199;
  unsigned __int64 v200;
  __int64* v201;
  __int64 v202;
  __int64 v203;
  signed __int64 v204;
  unsigned __int64 v205;
  __int64 v206;
  unsigned __int64 v207;
  __int64 v208;
  __int64 v209;
  unsigned __int64 v210;
  __int64 v211;
  __int64 v212;
  _QWORD** v213;
  __int64 v214;
  __int64* v215;
  struct {
    __int64 v216[3];
    __int64 v217;
    __int64 v218;
    unsigned __int64 v219;
    __int64* v220;
  } v216_;
  __int64 v221[3];
  char v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  int v227;
  __int64 v228;
  __int64 v229[3];
  char v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  __int64 v234;
  int v235;
  __int64* v236;
  __int64 v237[3];
  char v238;
  __int16 v239;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  char v243;
  _QWORD* v244;
  _QWORD* v245;
  struct {
    _QWORD v246[4];
    _QWORD* v247;
  } v246_;
  struct {
    __int64 (**v248)();
    _QWORD** v249;
    _QWORD** v250;
    __int64* v251;
    __int64 (***v252)();
  } v248_;

  v4 = *a4;
  v244 = a4;
  v245 = a3;
  v7 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 304LL);
  v215 = GameData_212e548[0] + 2;
  if ((*(_BYTE*)(v7 + 8) & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(v216_.v216, *(_QWORD*)(v7 + 24),
                                       *(_QWORD*)(v7 + 16));
  }
  else {
    v8 = *(_QWORD*)(v7 + 8);
    v9 = *(_QWORD*)(v7 + 24);
    v216_.v216[1] = *(_QWORD*)(v7 + 16);
    v216_.v216[2] = v9;
    v216_.v216[0] = v8;
  }
  v216_.v218 = 0;
  v216_.v219 = 0;
  v216_.v217 = 0;
  v11 = *(_QWORD*)(v7 + 32);
  v10 = *(_QWORD*)(v7 + 40);
  v12 = (__int64*)fw_memory_g_heap_manager_ptr;
  v13 = v10 - v11;
  if (v10 != v11) {
    if ((v13 & 0x8000000000000000LL) != 0) {
      GameRoutine_a9fd80_alt1();
    }
    v14 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v10 - v11, 16, 0);
    v15 = v14 + v13;
    v216_.v217 = v14;
    v216_.v218 = v14;
    v216_.v219 = v14 + v13;
    memcpy_alt1(v14, v11, v13);
    v216_.v218 = v15;
  }
  v16 = GameData_212e530[0];
  v216_.v220 = (__int64*)(GameData_212e530[0] + 16);
  v17 = *(_BYTE*)(v7 + 64);
  v215 = GameData_212e598[0] + 2;
  if ((v17 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(v221, *(_QWORD*)(v7 + 80),
                                       *(_QWORD*)(v7 + 72));
  }
  else {
    v18 = *(_QWORD*)(v7 + 64);
    v19 = *(_QWORD*)(v7 + 80);
    v221[1] = *(_QWORD*)(v7 + 72);
    v221[2] = v19;
    v221[0] = v18;
  }
  v222 = *(_BYTE*)(v7 + 88);
  v216_.v220 = GameData_212e558[0] + 2;
  v20 = *(_QWORD*)(v7 + 92);
  v225 = 0;
  v226 = 0;
  v224 = 0;
  v223 = v20;
  v22 = *(_QWORD*)(v7 + 104);
  v21 = *(_QWORD*)(v7 + 112);
  v23 = v21 - v22;
  if (v21 != v22) {
    if (0xAAAAAAAAAAAAAAABLL * (v23 >> 2) > 0x1555555555555555LL) {
      GameRoutine_ab9110_alt1();
    }
    v24 = fw_memory_HeapManager_Allocate_alt1(*v12, v23, 16, 0);
    v25 = v24 + v23;
    v224 = v24;
    v225 = v24;
    v226 = v24 + v23;
    memcpy_alt1(v24, v22, v23);
    v225 = v25;
  }
  v26 = *(_BYTE*)(v7 + 144);
  v227 = *(_DWORD*)(v7 + 128);
  v216_.v220 = GameData_212e550[0] + 2;
  v228 = v16 + 16;
  if ((v26 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(v229, *(_QWORD*)(v7 + 160),
                                       *(_QWORD*)(v7 + 152));
  }
  else {
    v27 = *(_QWORD*)(v7 + 144);
    v28 = *(_QWORD*)(v7 + 160);
    v229[1] = *(_QWORD*)(v7 + 152);
    v229[2] = v28;
    v229[0] = v27;
  }
  v230 = *(_BYTE*)(v7 + 168);
  v228 = GameData_212e528[0] + 16;
  v29 = *(_QWORD*)(v7 + 172);
  v233 = 0;
  v234 = 0;
  v232 = 0;
  v231 = v29;
  v31 = *(_QWORD*)(v7 + 184);
  v30 = *(_QWORD*)(v7 + 192);
  v32 = v30 - v31;
  if (v30 != v31) {
    if (0xAAAAAAAAAAAAAAABLL * (v32 >> 2) > 0x1555555555555555LL) {
      GameRoutine_aa0e00_alt1();
    }
    v33 = fw_memory_HeapManager_Allocate_alt1(*v12, v32, 16, 0);
    v34 = v33 + v32;
    v232 = v33;
    v233 = v33;
    v234 = v33 + v32;
    memcpy_alt1(v33, v31, v32);
    v233 = v34;
  }
  v35 = *(_BYTE*)(v7 + 224);
  v235 = *(_DWORD*)(v7 + 208);
  v228 = GameData_212e520[0] + 16;
  v236 = (__int64*)(v16 + 16);
  if ((v35 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(v237, *(_QWORD*)(v7 + 240),
                                       *(_QWORD*)(v7 + 232));
  }
  else {
    v36 = *(_QWORD*)(v7 + 224);
    v37 = *(_QWORD*)(v7 + 240);
    v237[1] = *(_QWORD*)(v7 + 232);
    v237[2] = v37;
    v237[0] = v36;
  }
  v238 = *(_BYTE*)(v7 + 248);
  v236 = GameData_212e568[0] + 2;
  v38 = *(_WORD*)(v7 + 249);
  v241 = 0;
  v242 = 0;
  v240 = 0;
  v239 = v38;
  v40 = *(_QWORD*)(v7 + 256);
  v39 = *(_QWORD*)(v7 + 264);
  v41 = v39 - v40;
  if (v39 != v40) {
    if (v41 < 0) {
      GameRoutine_abae00_alt1();
    }
    v42 = fw_memory_HeapManager_Allocate_alt1(*v12, v39 - v40, 16, 0);
    v43 = v42 + v41;
    v240 = v42;
    v241 = v42;
    v242 = v42 + v41;
    memcpy_alt1(v42, v40, v41 - 2);
    v241 = v43;
  }
  v44 = *(_BYTE*)(v7 + 280);
  v243 = v44;
  v236 = GameData_212e560[0] + 2;
  v45 = 208;
  if (BYTE4(v231) != 0) {
    v45 = 172;
  }
  if (*(float*)((char*)&v216_.v216[-1] + v45) > 0x0.0p+0f) {
    goto LABEL_31;
  }
  if (HIBYTE(v239) != 0) {
    v44 = v239;
  }
  if ((v44 & 1) != 0) {
  LABEL_31:
    v47 = *(_QWORD*)a2;
    v46 = *(_QWORD*)(a2 + 8);
    v48 = *(_DWORD*)(a2 + 96);
    v49 = fw_memory_HeapManager_Allocate_alt1(*v12, 208, 16, 0);
    *(_QWORD*)(v49 + 32) = 0;
    *(_QWORD*)(v49 + 40) = 0;
    *(_QWORD*)(v49 + 48) = 0;
    *(_QWORD*)(v49 + 56) = 0;
    *(_QWORD*)(v49 + 64) = 0;
    *(_QWORD*)(v49 + 72) = 0;
    *(_DWORD*)(v49 + 80) = v48;
    *(_QWORD*)(v49 + 96) = 0;
    *(_QWORD*)(v49 + 104) = 0;
    *(_QWORD*)(v49 + 88) = 0;
    *(_QWORD*)(v49 + 168) = a1;
    v248_.v252 = &v248_.v248;
    v248_.v250 = a1;
    v248_.v251 = (__int64*)&v245;
    strcpy((char*)(v49 + 8), "(TaskGaussianBlurPass");
    v248_.v248 = GameData_1fcc6e0;
    v248_.v249 = &v244;
    *(_BYTE*)(v49 + 84) = 1;
    *(_QWORD*)v49 = GameData_1fcc800;
    *(_QWORD*)(v49 + 112) = GameData_1fcc6e0;
    v50 = v248_.v250;
    *(_QWORD*)(v49 + 120) = v248_.v249;
    *(_QWORD*)(v49 + 128) = v50;
    v51 = v248_.v251;
    *(_QWORD*)(v49 + 160) = GameData_1fcc770;
    *(_QWORD*)(v49 + 192) = v49 + 160;
    *(_QWORD*)(v49 + 136) = v51;
    *(_QWORD*)(v49 + 144) = v49 + 112;
    v53 = *(__int64**)(a2 + 8);
    v52 = *(_QWORD*)(a2 + 16);
    if ((unsigned __int64)v53 >= v52) {
      v55 = *(_QWORD*)a2;
      v56 = (signed __int64)v53 - *(_QWORD*)a2;
      v57 = (v56 >> 3) + 1;
      if (v57 >> 61 != 0) {
        goto LABEL_217;
      }
      v58 = v52 - v55;
      if (v58 >> 2 > v57) {
        v57 = v58 >> 2;
      }
      if ((unsigned __int64)v58 >= 0x7FFFFFFFFFFFFFF8LL) {
        v59 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v59 = v57;
      }
      if (v59 != 0) {
        if (v59 >> 61 != 0) {
          goto LABEL_218;
        }
        v60 = v49;
        v61 = fw_memory_HeapManager_Allocate_alt1(*v12, 8 * v59, 16, 0);
        v49 = v60;
      }
      else {
        v61 = 0;
      }
      v69 = v61 + 8 * v59;
      v70 = v61 + v56 - 8 * (v56 >> 3);
      *(_QWORD*)(v61 + v56) = v49;
      v54 = v61 + v56 + 8;
      memcpy_alt1(v70, v55, v56);
      *(_QWORD*)a2 = v70;
      *(_QWORD*)(a2 + 8) = v54;
      *(_QWORD*)(a2 + 16) = v69;
      if (v55 != 0) {
        v71 = 128;
        if (*(_QWORD*)(*v12 + 200) == 0) {
          v71 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v12 + v71, v55);
      }
    }
    else {
      *v53 = v49;
      v54 = (__int64)(v53 + 1);
    }
    *(_QWORD*)(a2 + 8) = v54;
    v72 = *(_QWORD***)(v54 - 8);
    v248_.v248 = (__int64 (**)(void))a2;
    v248_.v249 = v72;
    ((void (*)(_QWORD**, __int64 (***)(void)))(*v72)[2])(v72, &v248_.v248);
    *v245 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v46 - v47) & 0x7FFFFFFF8LL)) +
                   104LL);
  }
  else {
    v62 = a1[22];
    v63 = v62[35];
    if (v63 != 0) {
      v64 = *v62;
      v65 = *v62 + 16592;
      v66 = fw_memory_HeapManager_Allocate_alt1(*v12, 24, 16, 0);
      *(_DWORD*)(v66 + 8) = 2;
      *(_QWORD*)v66 = GameData_212e8a0 + 2;
      v62[35] = 0;
      *(_QWORD*)(v66 + 16) = v63;
      v67 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v12, 24, 16, 0);
      v67[1] = v65;
      v67[2] = v66;
      v68 = *(_QWORD*)(v64 + 16592);
      *v67 = v68;
      *(_QWORD*)(v68 + 8) = v67;
      *(_QWORD*)(v64 + 16592) = v67;
      ++*(_QWORD*)(v64 + 16608);
    }
  }
  v73 = *(_QWORD**)(*v244 + 8LL);
  v74 = v73[22];
  v75 = 128;
  if (*(_BYTE*)(v74 + 96) != 0) {
    v75 = 92;
  }
  if (*(float*)(v74 + v75) > 0x0.0p+0f) {
    v77 = *(_QWORD*)a2;
    v76 = *(_QWORD*)(a2 + 8);
    v78 = *(_DWORD*)(a2 + 96);
    v79 = fw_memory_HeapManager_Allocate_alt1(*v12, 272, 16, 0);
    *(_QWORD*)(v79 + 32) = 0;
    *(_QWORD*)(v79 + 40) = 0;
    *(_QWORD*)(v79 + 48) = 0;
    *(_QWORD*)(v79 + 56) = 0;
    *(_QWORD*)(v79 + 64) = 0;
    *(_QWORD*)(v79 + 72) = 0;
    *(_DWORD*)(v79 + 80) = v78;
    *(_QWORD*)(v79 + 152) = 0;
    *(_QWORD*)(v79 + 160) = 0;
    v248_.v250 = &v245;
    v248_.v248 = GameData_1fcc848;
    v248_.v249 = a1;
    v248_.v252 = &v248_.v248;
    *(_QWORD*)(v79 + 136) = 0;
    *(_QWORD*)(v79 + 144) = 0;
    *(_QWORD*)(v79 + 120) = 0;
    *(_QWORD*)(v79 + 128) = 0;
    *(_QWORD*)(v79 + 104) = 0;
    *(_QWORD*)(v79 + 112) = 0;
    *(_QWORD*)(v79 + 88) = 0;
    *(_QWORD*)(v79 + 96) = 0;
    *(_QWORD*)(v79 + 232) = a1;
    *(_BYTE*)(v79 + 8) = 24;
    *(_QWORD*)(v79 + 224) = GameData_1fcc8d8;
    *(_QWORD*)(v79 + 256) = v79 + 224;
    strcpy((char*)(v79 + 9), "BloomGenPass");
    *(_BYTE*)(v79 + 84) = 1;
    *(_QWORD*)v79 = GameData_1fcc968;
    *(_QWORD*)(v79 + 176) = GameData_1fcc848;
    *(_QWORD*)(v79 + 208) = v79 + 176;
    v80 = v248_.v250;
    *(_QWORD*)(v79 + 184) = v248_.v249;
    *(_QWORD*)(v79 + 192) = v80;
    v82 = *(__int64**)(a2 + 8);
    v81 = *(_QWORD*)(a2 + 16);
    if ((unsigned __int64)v82 >= v81) {
      v84 = *(_QWORD*)a2;
      v85 = (signed __int64)v82 - *(_QWORD*)a2;
      v86 = (v85 >> 3) + 1;
      if (v86 >> 61 != 0) {
        goto LABEL_217;
      }
      v87 = v81 - v84;
      if (v87 >> 2 > v86) {
        v86 = v87 >> 2;
      }
      if ((unsigned __int64)v87 >= 0x7FFFFFFFFFFFFFF8LL) {
        v88 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v88 = v86;
      }
      if (v88 != 0) {
        if (v88 >> 61 != 0) {
          goto LABEL_218;
        }
        v89 = v79;
        v90 = fw_memory_HeapManager_Allocate_alt1(*v12, 8 * v88, 16, 0);
        v79 = v89;
      }
      else {
        v90 = 0;
      }
      v91 = v90 + 8 * v88;
      v92 = v90 + v85 - 8 * (v85 >> 3);
      *(_QWORD*)(v90 + v85) = v79;
      v83 = v90 + v85 + 8;
      memcpy_alt1(v92, v84, v85);
      *(_QWORD*)a2 = v92;
      *(_QWORD*)(a2 + 8) = v83;
      *(_QWORD*)(a2 + 16) = v91;
      if (v84 != 0) {
        v93 = 128;
        if (*(_QWORD*)(*v12 + 200) == 0) {
          v93 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v12 + v93, v84);
      }
    }
    else {
      *v82 = v79;
      v83 = (__int64)(v82 + 1);
    }
    *(_QWORD*)(a2 + 8) = v83;
    v94 = *(_QWORD***)(v83 - 8);
    v248_.v248 = (__int64 (**)(void))a2;
    v248_.v249 = v94;
    ((void (*)(_QWORD**, __int64 (***)(void)))(*v94)[2])(v94, &v248_.v248);
    v95 = *v12;
    v245[56] =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v76 - v77) & 0x7FFFFFFF8LL)) +
                   136LL);
    v97 = *(_QWORD*)a2;
    v96 = *(_QWORD*)(a2 + 8);
    v98 = *(_DWORD*)(a2 + 96);
    v99 = fw_memory_HeapManager_Allocate_alt1(v95, 208, 16, 0);
    *(_QWORD*)(v99 + 32) = 0;
    *(_QWORD*)(v99 + 40) = 0;
    *(_QWORD*)(v99 + 48) = 0;
    *(_QWORD*)(v99 + 56) = 0;
    *(_QWORD*)(v99 + 64) = 0;
    *(_QWORD*)(v99 + 72) = 0;
    *(_DWORD*)(v99 + 80) = v98;
    *(_QWORD*)(v99 + 88) = 0;
    *(_QWORD*)(v99 + 96) = 0;
    *(_QWORD*)(v99 + 168) = a1;
    *(_BYTE*)(v99 + 8) = 26;
    *(_BYTE*)(v99 + 84) = 1;
    *(_QWORD*)(v99 + 144) = v99 + 112;
    *(_QWORD*)v99 = GameData_1fccad0;
    strcpy((char*)(v99 + 9), "BloomCompPass");
    *(_QWORD*)(v99 + 160) = GameData_1fcca40;
    *(_QWORD*)(v99 + 112) = GameData_1fcc9b0;
    *(_QWORD*)(v99 + 120) = &v245;
    v101 = *(__int64**)(a2 + 8);
    v100 = *(_QWORD*)(a2 + 16);
    *(_QWORD*)(v99 + 192) = v99 + 160;
    if ((unsigned __int64)v101 >= v100) {
      v103 = *(_QWORD*)a2;
      v104 = (signed __int64)v101 - *(_QWORD*)a2;
      v105 = (v104 >> 3) + 1;
      if (v105 >> 61 != 0) {
        goto LABEL_217;
      }
      v106 = v100 - v103;
      if (v106 >> 2 > v105) {
        v105 = v106 >> 2;
      }
      if ((unsigned __int64)v106 >= 0x7FFFFFFFFFFFFFF8LL) {
        v107 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v107 = v105;
      }
      if (v107 != 0) {
        if (v107 >> 61 != 0) {
          goto LABEL_218;
        }
        v108 = v99;
        v109 = fw_memory_HeapManager_Allocate_alt1(*v12, 8 * v107, 16, 0);
        v99 = v108;
      }
      else {
        v109 = 0;
      }
      v110 = v109 + 8 * v107;
      v111 = v109 + v104 - 8 * (v104 >> 3);
      *(_QWORD*)(v109 + v104) = v99;
      v102 = v109 + v104 + 8;
      memcpy_alt1(v111, v103, v104);
      *(_QWORD*)a2 = v111;
      *(_QWORD*)(a2 + 8) = v102;
      *(_QWORD*)(a2 + 16) = v110;
      if (v103 != 0) {
        v112 = 128;
        if (*(_QWORD*)(*v12 + 200) == 0) {
          v112 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v12 + v112, v103);
      }
    }
    else {
      *v101 = v99;
      v102 = (__int64)(v101 + 1);
    }
    *(_QWORD*)(a2 + 8) = v102;
    v113 = *(_QWORD***)(v102 - 8);
    v248_.v248 = (__int64 (**)(void))a2;
    v248_.v249 = v113;
    ((void (*)(_QWORD**, __int64 (***)(void)))(*v113)[2])(v113, &v248_.v248);
    *v245 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v96 - v97) & 0x7FFFFFFF8LL)) +
                   96LL);
    v73 = *(_QWORD**)(*v244 + 8LL);
  }
  v114 = (_BYTE*)v73[24];
  v115 = 120;
  if (v114[90] != 0) {
    v115 = 89;
  }
  if ((v114[v115] & 1) != 0) {
    v116 = 408;
    if (v114[376] != 0) {
      v116 = 372;
    }
    if (*(float*)&v114[v116] > 0x0.0p+0f) {
      v117 = 728;
      if (v114[696] != 0) {
        v117 = 692;
      }
      if (*(float*)&v114[v117] > 0x0.0p+0f) {
        goto LABEL_98;
      }
    }
  }
  v118 = v73[23];
  v119 = 120;
  if (*(_BYTE*)(v118 + 90) != 0) {
    v119 = 89;
  }
  if ((*(_BYTE*)(v118 + v119) & 1) != 0) {
  LABEL_98:
    v121 = *(_QWORD*)a2;
    v120 = *(_QWORD*)(a2 + 8);
    v122 = *(_DWORD*)(a2 + 96);
    v123 = fw_memory_HeapManager_Allocate_alt1(*v12, 208, 16, 0);
    *(_QWORD*)(v123 + 32) = 0;
    *(_QWORD*)(v123 + 40) = 0;
    *(_QWORD*)(v123 + 48) = 0;
    *(_QWORD*)(v123 + 56) = 0;
    *(_QWORD*)(v123 + 64) = 0;
    *(_QWORD*)(v123 + 72) = 0;
    *(_DWORD*)(v123 + 80) = v122;
    *(_QWORD*)(v123 + 88) = 0;
    *(_QWORD*)(v123 + 96) = 0;
    v248_.v250 = &v245;
    v248_.v248 = GameData_1fccb18;
    v248_.v249 = a1;
    v248_.v252 = &v248_.v248;
    *(_QWORD*)(v123 + 168) = a1;
    strcpy((char*)(v123 + 8), "&GradationFilterPass");
    *(_BYTE*)(v123 + 84) = 1;
    *(_QWORD*)(v123 + 160) = GameData_1fccba8;
    *(_QWORD*)v123 = GameData_1fccc38;
    *(_QWORD*)(v123 + 112) = GameData_1fccb18;
    *(_QWORD*)(v123 + 192) = v123 + 160;
    *(_QWORD*)(v123 + 144) = v123 + 112;
    v124 = v248_.v250;
    *(_QWORD*)(v123 + 120) = v248_.v249;
    *(_QWORD*)(v123 + 128) = v124;
    v126 = *(__int64**)(a2 + 8);
    v125 = *(_QWORD*)(a2 + 16);
    if ((unsigned __int64)v126 >= v125) {
      v128 = *(_QWORD*)a2;
      v129 = (signed __int64)v126 - *(_QWORD*)a2;
      v130 = (v129 >> 3) + 1;
      if (v130 >> 61 != 0) {
        goto LABEL_217;
      }
      v131 = v125 - v128;
      if (v131 >> 2 > v130) {
        v130 = v131 >> 2;
      }
      if ((unsigned __int64)v131 >= 0x7FFFFFFFFFFFFFF8LL) {
        v132 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v132 = v130;
      }
      if (v132 != 0) {
        if (v132 >> 61 != 0) {
          goto LABEL_218;
        }
        v133 = v123;
        v134 = fw_memory_HeapManager_Allocate_alt1(*v12, 8 * v132, 16, 0);
        v123 = v133;
      }
      else {
        v134 = 0;
      }
      v135 = v134 + 8 * v132;
      v136 = v134 + v129 - 8 * (v129 >> 3);
      *(_QWORD*)(v134 + v129) = v123;
      v127 = v134 + v129 + 8;
      memcpy_alt1(v136, v128, v129);
      *(_QWORD*)a2 = v136;
      *(_QWORD*)(a2 + 8) = v127;
      *(_QWORD*)(a2 + 16) = v135;
      if (v128 != 0) {
        v137 = 128;
        if (*(_QWORD*)(*v12 + 200) == 0) {
          v137 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v12 + v137, v128);
      }
    }
    else {
      *v126 = v123;
      v127 = (__int64)(v126 + 1);
    }
    *(_QWORD*)(a2 + 8) = v127;
    v138 = *(_QWORD***)(v127 - 8);
    v248_.v248 = (__int64 (**)(void))a2;
    v248_.v249 = v138;
    ((void (*)(_QWORD**, __int64 (***)(void)))(*v138)[2])(v138, &v248_.v248);
    *v245 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v120 - v121) & 0x7FFFFFFF8LL)) +
                   96LL);
    v73 = *(_QWORD**)(*v244 + 8LL);
  }
  v139 = v73[25];
  v140 = 120;
  if (*(_BYTE*)(v139 + 90) != 0) {
    v140 = 89;
  }
  if ((*(_BYTE*)(v139 + v140) & 1) != 0) {
    goto LABEL_121;
  }
  v141 = v73[35];
  v142 = 120;
  if (*(_BYTE*)(v141 + 90) != 0) {
    v142 = 89;
  }
  if ((*(_BYTE*)(v141 + v142) & 1) != 0) {
  LABEL_121:
    v214 = 0;
    v144 = *(_QWORD*)a2;
    v143 = *(_QWORD*)(a2 + 8);
    v145 = *(_DWORD*)(a2 + 96);
    v146 = (__int64*)fw_memory_g_heap_manager_ptr;
    v147 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 192, 16, 0);
    v248_.v248 = GameData_1fccc80;
    v248_.v252 = &v248_.v248;
    v246_.v246[0] = GameData_1fccd10;
    v246_.v246[1] = a1;
    v246_.v247 = v246_.v246;
    v148 = GameData_212e760[0];
    *(_QWORD*)v147 = GameData_212e760[0] + 2;
    v149 = (char*)fw_memory_HeapManager_Allocate_alt1(*v146, 32, 16, 0);
    *(_QWORD*)(v147 + 32) = 0;
    *(_QWORD*)(v147 + 40) = 0;
    *(_QWORD*)(v147 + 48) = 0;
    *(_QWORD*)(v147 + 56) = 0;
    *(_QWORD*)(v147 + 64) = 0;
    *(_QWORD*)(v147 + 72) = 0;
    *(_DWORD*)(v147 + 80) = v145;
    *(_QWORD*)(v147 + 88) = 0;
    *(_QWORD*)(v147 + 16) = 30;
    *(_QWORD*)(v147 + 24) = v149;
    strcpy(v149, "ColorGradingBuildLutLatterPass");
    v150 = v248_.v252;
    *(_BYTE*)(v147 + 84) = 1;
    *(_QWORD*)v147 = GameData_1fccda0;
    *(_QWORD*)(v147 + 8) = 33;
    if (v150 != nullptr) {
      if (v150 != &v248_.v248) {
        *(_QWORD*)(v147 + 128) =
            ((__int64 (*)(__int64 (***)(void)))(*v150)[2])(v150);
        v151 = v246_.v247;
        if (v246_.v247 == nullptr) {
          goto LABEL_129;
        }
      LABEL_126:
        if (v151 == v246_.v246) {
          *(_QWORD*)(v147 + 176) = v147 + 144;
          (*(void (**)(_QWORD*))(*v151 + 24LL))(v151);
        }
        else {
          *(_QWORD*)(v147 + 176) =
              (*(__int64 (**)(_QWORD*))(*v151 + 16LL))(v151);
        }
        if (v246_.v247 == v246_.v246) {
          v152 = 32;
        }
        else {
          if (v246_.v247 == nullptr) {
            goto LABEL_136;
          }
          v152 = 40;
        }
        (*(void (**)(__int64))(*v246_.v247 + v152))((__int64)v246_.v247);
      LABEL_136:
        if (v248_.v252 == &v248_.v248) {
          v153 = 4;
        }
        else {
          if (v248_.v252 == nullptr) {
            goto LABEL_141;
          }
          v153 = 5;
        }
        ((__int64 (*)(__int64))(*v248_.v252)[v153])((__int64)v248_.v252);
      LABEL_141:
        v155 = *(__int64**)(a2 + 8);
        v154 = *(_QWORD*)(a2 + 16);
        if ((unsigned __int64)v155 >= v154) {
          v157 = *(_QWORD*)a2;
          v158 = (signed __int64)v155 - *(_QWORD*)a2;
          v159 = (v158 >> 3) + 1;
          if (v159 >> 61 != 0) {
            goto LABEL_217;
          }
          v160 = v154 - v157;
          if (v160 >> 2 > v159) {
            v159 = v160 >> 2;
          }
          if ((unsigned __int64)v160 >= 0x7FFFFFFFFFFFFFF8LL) {
            v161 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v161 = v159;
          }
          if (v161 != 0) {
            if (v161 >> 61 != 0) {
              goto LABEL_218;
            }
            v162 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v161, 16, 0);
          }
          else {
            v162 = 0;
          }
          v163 = v162 + 8 * v161;
          v164 = v162 + v158 - 8 * (v158 >> 3);
          *(_QWORD*)(v162 + v158) = v147;
          v156 = v162 + v158 + 8;
          memcpy_alt1(v164, v157, v158);
          *(_QWORD*)a2 = v164;
          *(_QWORD*)(a2 + 8) = v156;
          *(_QWORD*)(a2 + 16) = v163;
          if (v157 != 0) {
            v165 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v165 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v165, v157);
          }
          v148 = GameData_212e760[0];
        }
        else {
          *v155 = v147;
          v156 = (__int64)(v155 + 1);
        }
        *(_QWORD*)(a2 + 8) = v156;
        v166 = v143 - v144;
        v167 = *(_QWORD***)(v156 - 8);
        v248_.v248 = (__int64 (**)(void))a2;
        v248_.v249 = v167;
        ((void (*)(_QWORD**, __int64 (***)(void)))(*v167)[2])(v167,
                                                              &v248_.v248);
        v169 = *(_QWORD*)a2;
        v168 = *(_QWORD*)(a2 + 8);
        v170 = *(_DWORD*)(a2 + 96);
        v214 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + (v166 & 0x7FFFFFFF8LL)) +
                          88LL);
        v171 = (__int64*)fw_memory_g_heap_manager_ptr;
        v172 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 208, 16, 0);
        v173 = *v171;
        v248_.v252 = &v248_.v248;
        v248_.v250 = &v245;
        v248_.v251 = &v214;
        v248_.v248 = GameData_1fccde8;
        v248_.v249 = a1;
        *(_QWORD*)v172 = v148 + 2;
        v246_.v246[0] = GameData_1fcce78;
        v246_.v246[1] = a1;
        v246_.v247 = v246_.v246;
        v174 = (char*)fw_memory_HeapManager_Allocate_alt1(v173, 32, 16, 0);
        *(_QWORD*)(v172 + 32) = 0;
        *(_QWORD*)(v172 + 40) = 0;
        *(_QWORD*)(v172 + 48) = 0;
        *(_QWORD*)(v172 + 56) = 0;
        *(_QWORD*)(v172 + 64) = 0;
        *(_QWORD*)(v172 + 72) = 0;
        *(_DWORD*)(v172 + 80) = v170;
        *(_QWORD*)(v172 + 88) = 0;
        *(_QWORD*)(v172 + 96) = 0;
        *(_QWORD*)(v172 + 104) = 0;
        *(_QWORD*)(v172 + 16) = 27;
        *(_QWORD*)(v172 + 24) = v174;
        strcpy(v174, "ColorGradingApplyLatterPass");
        v175 = v248_.v252;
        *(_BYTE*)(v172 + 84) = 1;
        *(_QWORD*)v172 = GameData_1fccf08;
        *(_QWORD*)(v172 + 8) = 33;
        if (v175 != nullptr) {
          if (v175 != &v248_.v248) {
            *(_QWORD*)(v172 + 144) =
                ((__int64 (*)(__int64 (***)(void)))(*v175)[2])(v175);
            v176 = v246_.v247;
            if (v246_.v247 == nullptr) {
              goto LABEL_166;
            }
          LABEL_163:
            if (v176 == v246_.v246) {
              *(_QWORD*)(v172 + 192) = v172 + 160;
              (*(void (**)(_QWORD*))(*v176 + 24LL))(v176);
            }
            else {
              *(_QWORD*)(v172 + 192) =
                  (*(__int64 (**)(_QWORD*))(*v176 + 16LL))(v176);
            }
            if (v246_.v247 == v246_.v246) {
              v177 = 32;
            }
            else {
              if (v246_.v247 == nullptr) {
                goto LABEL_173;
              }
              v177 = 40;
            }
            (*(void (**)(__int64))(*v246_.v247 + v177))((__int64)v246_.v247);
          LABEL_173:
            if (v248_.v252 == &v248_.v248) {
              v178 = 4;
            }
            else {
              if (v248_.v252 == nullptr) {
              LABEL_178:
                v180 = *(__int64**)(a2 + 8);
                v179 = *(_QWORD*)(a2 + 16);
                if ((unsigned __int64)v180 >= v179) {
                  v182 = *(_QWORD*)a2;
                  v183 = (signed __int64)v180 - *(_QWORD*)a2;
                  v184 = (v183 >> 3) + 1;
                  if (v184 >> 61 != 0) {
                    goto LABEL_217;
                  }
                  v185 = v179 - v182;
                  if (v185 >> 2 > v184) {
                    v184 = v185 >> 2;
                  }
                  if ((unsigned __int64)v185 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v186 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v186 = v184;
                  }
                  if (v186 != 0) {
                    if (v186 >> 61 != 0) {
                      goto LABEL_218;
                    }
                    v187 = fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v186, 16,
                        0);
                  }
                  else {
                    v187 = 0;
                  }
                  v188 = v187 + 8 * v186;
                  v189 = v187 + v183 - 8 * (v183 >> 3);
                  *(_QWORD*)(v187 + v183) = v172;
                  v181 = v187 + v183 + 8;
                  memcpy_alt1(v189, v182, v183);
                  *(_QWORD*)a2 = v189;
                  *(_QWORD*)(a2 + 8) = v181;
                  *(_QWORD*)(a2 + 16) = v188;
                  if (v182 != 0) {
                    v190 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v190 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v190, v182);
                  }
                }
                else {
                  *v180 = v172;
                  v181 = (__int64)(v180 + 1);
                }
                *(_QWORD*)(a2 + 8) = v181;
                v191 = *(_QWORD***)(v181 - 8);
                v248_.v248 = (__int64 (**)(void))a2;
                v248_.v249 = v191;
                ((void (*)(_QWORD**, __int64 (***)(void)))(*v191)[2])(
                    v191, &v248_.v248);
                *v245 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 +
                                              ((v168 - v169) & 0x7FFFFFFF8LL)) +
                                   104LL);
                v73 = *(_QWORD**)(*v244 + 8LL);
                goto LABEL_195;
              }
              v178 = 5;
            }
            ((__int64 (*)(__int64))(*v248_.v252)[v178])((__int64)v248_.v252);
            goto LABEL_178;
          }
          *(_QWORD*)(v172 + 144) = v172 + 112;
          ((void (*)(__int64 (***)(void)))(*v175)[3])(v175);
          v176 = v246_.v247;
          if (v246_.v247 != nullptr) {
            goto LABEL_163;
          }
        }
        else {
          *(_QWORD*)(v172 + 144) = 0;
          v176 = v246_.v247;
          if (v246_.v247 != nullptr) {
            goto LABEL_163;
          }
        }
      LABEL_166:
        *(_QWORD*)(v172 + 192) = 0;
        goto LABEL_173;
      }
      *(_QWORD*)(v147 + 128) = v147 + 96;
      ((void (*)(__int64 (***)(void)))(*v150)[3])(v150);
      v151 = v246_.v247;
      if (v246_.v247 != nullptr) {
        goto LABEL_126;
      }
    }
    else {
      *(_QWORD*)(v147 + 128) = 0;
      v151 = v246_.v247;
      if (v246_.v247 != nullptr) {
        goto LABEL_126;
      }
    }
  LABEL_129:
    *(_QWORD*)(v147 + 176) = 0;
    goto LABEL_136;
  }
LABEL_195:
  v192 = v73[42];
  if (v192 != 0) {
    v193 = 120;
    if (*(_BYTE*)(v192 + 90) != 0) {
      v193 = 89;
    }
    if ((*(_BYTE*)(v192 + v193) & 1) != 0) {
      v195 = *(_QWORD*)a2;
      v194 = *(_QWORD*)(a2 + 8);
      v196 = *(_DWORD*)(a2 + 96);
      v197 = (__int64*)fw_memory_g_heap_manager_ptr;
      v198 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 224, 16, 0);
      v248_.v250 = a1;
      *(_QWORD*)(v198 + 32) = 0;
      *(_QWORD*)(v198 + 40) = 0;
      *(_QWORD*)(v198 + 48) = 0;
      *(_QWORD*)(v198 + 56) = 0;
      *(_QWORD*)(v198 + 64) = 0;
      *(_QWORD*)(v198 + 72) = 0;
      *(_DWORD*)(v198 + 80) = v196;
      *(_QWORD*)(v198 + 104) = 0;
      *(_QWORD*)(v198 + 112) = 0;
      v248_.v248 = GameData_1fccf50;
      v248_.v249 = &v245;
      v248_.v252 = &v248_.v248;
      *(_BYTE*)(v198 + 8) = 24;
      *(_QWORD*)(v198 + 88) = 0;
      *(_QWORD*)(v198 + 96) = 0;
      *(_QWORD*)(v198 + 184) = a1;
      *(_QWORD*)v198 = GameData_1fcd070;
      strcpy((char*)(v198 + 9), "PaintingPass");
      *(_QWORD*)(v198 + 176) = GameData_1fccfe0;
      *(_BYTE*)(v198 + 84) = 1;
      *(_QWORD*)(v198 + 208) = v198 + 176;
      *(_QWORD*)(v198 + 128) = GameData_1fccf50;
      *(_QWORD*)(v198 + 160) = v198 + 128;
      v199 = v248_.v250;
      *(_QWORD*)(v198 + 136) = v248_.v249;
      *(_QWORD*)(v198 + 144) = v199;
      v201 = *(__int64**)(a2 + 8);
      v200 = *(_QWORD*)(a2 + 16);
      if ((unsigned __int64)v201 < v200) {
        *v201 = v198;
        v202 = (__int64)(v201 + 1);
      LABEL_215:
        *(_QWORD*)(a2 + 8) = v202;
        v213 = *(_QWORD***)(v202 - 8);
        v248_.v248 = (__int64 (**)(void))a2;
        v248_.v249 = v213;
        ((void (*)(_QWORD**, __int64 (***)(void)))(*v213)[2])(v213,
                                                              &v248_.v248);
        *v245 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 +
                                      ((v194 - v195) & 0x7FFFFFFF8LL)) +
                           112LL);
        goto LABEL_216;
      }
      v203 = *(_QWORD*)a2;
      v204 = (signed __int64)v201 - *(_QWORD*)a2;
      v205 = (v204 >> 3) + 1;
      if (v205 >> 61 == 0) {
        v206 = v200 - v203;
        if (v206 >> 2 > v205) {
          v205 = v206 >> 2;
        }
        if ((unsigned __int64)v206 >= 0x7FFFFFFFFFFFFFF8LL) {
          v207 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v207 = v205;
        }
        if (v207 == 0) {
          v209 = 0;
        LABEL_211:
          v210 = v209 + 8 * v207;
          v211 = v209 + v204 - 8 * (v204 >> 3);
          *(_QWORD*)(v209 + v204) = v198;
          v202 = v209 + v204 + 8;
          memcpy_alt1(v211, v203, v204);
          *(_QWORD*)a2 = v211;
          *(_QWORD*)(a2 + 8) = v202;
          *(_QWORD*)(a2 + 16) = v210;
          if (v203 != 0) {
            v212 = 128;
            if (*(_QWORD*)(*v197 + 200) == 0) {
              v212 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v197 + v212, v203);
          }
          goto LABEL_215;
        }
        if (v207 >> 61 == 0) {
          v208 = v198;
          v209 = fw_memory_HeapManager_Allocate_alt1(*v197, 8 * v207, 16, 0);
          v198 = v208;
          goto LABEL_211;
        }
      LABEL_218:
        GameRoutine_60a210_alt1();
      }
    LABEL_217:
      GameRoutine_b32f30_alt2();
    }
  }
LABEL_216:
  GaussianBlurSetting_Destructor((__int64)&v215);
}

__int64 gfxa_MainPassImageProcess_SetupPreDoFPass(__int64 result, __int64 a2,
                                                  __int64 a3, __int64* a4)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v13;
  __int64 v14;
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
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64* v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  signed __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64 v52;
  struct {
    __int64 (**v53)();
    __int64* v54;
    __int64 v55;
    char gap40_[8];
    __int64 (***v56)();
  } v53_;

  v4 = *a4;
  v52 = a3;
  v6 = result;
  v7 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 128LL);
  v8 = 128;
  if (*(_BYTE*)(v7 + 96) != 0) {
    v8 = 92;
  }
  if (*(_DWORD*)(v7 + v8) != 0) {
    v10 = *(_QWORD*)a2;
    v9 = *(_QWORD*)(a2 + 8);
    v11 = *(_DWORD*)(a2 + 96);
    v13 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 208, 16, 0);
    v53_.v55 = v6;
    *(_QWORD*)(v13 + 32) = 0;
    *(_QWORD*)(v13 + 40) = 0;
    *(_QWORD*)(v13 + 48) = 0;
    *(_QWORD*)(v13 + 56) = 0;
    *(_QWORD*)(v13 + 64) = 0;
    *(_QWORD*)(v13 + 72) = 0;
    *(_DWORD*)(v13 + 80) = v11;
    *(_QWORD*)(v13 + 96) = 0;
    *(_QWORD*)(v13 + 104) = 0;
    v53_.v53 = GameData_1fcd0b8;
    v53_.v54 = &v52;
    v53_.v56 = &v53_.v53;
    *(_QWORD*)(v13 + 88) = 0;
    *(_QWORD*)(v13 + 168) = v6;
    *(_BYTE*)(v13 + 8) = 28;
    strcpy((char*)(v13 + 9), "DoFCalcCoCPass");
    *(_BYTE*)(v13 + 84) = 1;
    *(_QWORD*)(v13 + 160) = GameData_1fcd148;
    *(_QWORD*)v13 = GameData_1fcd1d8;
    *(_QWORD*)(v13 + 112) = GameData_1fcd0b8;
    *(_QWORD*)(v13 + 192) = v13 + 160;
    *(_QWORD*)(v13 + 144) = v13 + 112;
    v14 = v53_.v55;
    *(_QWORD*)(v13 + 120) = v53_.v54;
    *(_QWORD*)(v13 + 128) = v14;
    v16 = *(__int64**)(a2 + 8);
    v15 = *(_QWORD*)(a2 + 16);
    if ((unsigned __int64)v16 >= v15) {
      v18 = *(_QWORD*)a2;
      v19 = (signed __int64)v16 - *(_QWORD*)a2;
      v20 = (v19 >> 3) + 1;
      if (v20 >> 61 != 0) {
        goto LABEL_46;
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
          goto LABEL_47;
        }
        v23 = v13;
        v24 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v22, 16, 0);
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
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v27 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v18);
      }
    }
    else {
      *v16 = v13;
      v17 = (__int64)(v16 + 1);
    }
    *(_QWORD*)(a2 + 8) = v17;
    v28 = *(__int64**)(v17 - 8);
    v53_.v53 = (__int64 (**)(void))a2;
    v53_.v54 = v28;
    result = (*(__int64 (**)(__int64*, __int64 (***)(void)))(*v28 + 16))(
        v28, &v53_.v53);
    *(_QWORD*)(v52 + 456) =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v9 - v10) & 0x7FFFFFFF8LL)) +
                   104LL);
    v7 = *(_QWORD*)(*(_QWORD*)(*a4 + 8) + 128LL);
  }
  if (*(_DWORD*)(*(_QWORD*)(v6 + 72) + 4LL) == 1) {
    v29 = 128;
    if (*(_BYTE*)(v7 + 96) != 0) {
      v29 = 92;
    }
    if (*(_DWORD*)(v7 + v29) != 0) {
      v30 = 432;
      if (*(_BYTE*)(v7 + 402) != 0) {
        v30 = 401;
      }
      if ((*(_BYTE*)(v7 + v30) & 1) != 0) {
        v32 = *(_QWORD*)a2;
        v31 = *(_QWORD*)(a2 + 8);
        v33 = *(_DWORD*)(a2 + 96);
        v34 = (__int64*)fw_memory_g_heap_manager_ptr;
        v35 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 224, 16, 0);
        v53_.v55 = v6;
        *(_QWORD*)(v35 + 32) = 0;
        *(_QWORD*)(v35 + 40) = 0;
        *(_QWORD*)(v35 + 48) = 0;
        *(_QWORD*)(v35 + 56) = 0;
        *(_QWORD*)(v35 + 64) = 0;
        *(_QWORD*)(v35 + 72) = 0;
        *(_DWORD*)(v35 + 80) = v33;
        *(_QWORD*)(v35 + 104) = 0;
        *(_QWORD*)(v35 + 112) = 0;
        v53_.v53 = GameData_1fcd220;
        v53_.v54 = &v52;
        v53_.v56 = &v53_.v53;
        strcpy((char*)(v35 + 8), "*DoFTemporalFilterPass");
        *(_QWORD*)(v35 + 88) = 0;
        *(_QWORD*)(v35 + 96) = 0;
        *(_QWORD*)(v35 + 184) = v6;
        *(_BYTE*)(v35 + 84) = 1;
        *(_QWORD*)(v35 + 128) = GameData_1fcd220;
        *(_QWORD*)v35 = GameData_1fcd340;
        *(_QWORD*)(v35 + 160) = v35 + 128;
        v36 = v53_.v54;
        v37 = v53_.v55;
        *(_QWORD*)(v35 + 176) = GameData_1fcd2b0;
        *(_QWORD*)(v35 + 208) = v35 + 176;
        *(_QWORD*)(v35 + 136) = v36;
        *(_QWORD*)(v35 + 144) = v37;
        v39 = *(__int64**)(a2 + 8);
        v38 = *(_QWORD*)(a2 + 16);
        if ((unsigned __int64)v39 < v38) {
          *v39 = v35;
          v40 = (__int64)(v39 + 1);
        LABEL_44:
          *(_QWORD*)(a2 + 8) = v40;
          v51 = *(__int64**)(v40 - 8);
          v53_.v53 = (__int64 (**)(void))a2;
          v53_.v54 = v51;
          result = (*(__int64 (**)(__int64*, __int64 (***)(void)))(*v51 + 16))(
              v51, &v53_.v53);
          *(_QWORD*)(v52 + 464) =
              *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 +
                                    ((v31 - v32) & 0x7FFFFFFF8LL)) +
                         112LL);
          return result;
        }
        v41 = *(_QWORD*)a2;
        v42 = (signed __int64)v39 - *(_QWORD*)a2;
        v43 = (v42 >> 3) + 1;
        if (v43 >> 61 == 0) {
          v44 = v38 - v41;
          if (v44 >> 2 > v43) {
            v43 = v44 >> 2;
          }
          if ((unsigned __int64)v44 >= 0x7FFFFFFFFFFFFFF8LL) {
            v45 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v45 = v43;
          }
          if (v45 == 0) {
            v47 = 0;
          LABEL_40:
            v48 = v47 + 8 * v45;
            v49 = v47 + v42 - 8 * (v42 >> 3);
            *(_QWORD*)(v47 + v42) = v35;
            v40 = v47 + v42 + 8;
            memcpy_alt1(v49, v41, v42);
            *(_QWORD*)a2 = v49;
            *(_QWORD*)(a2 + 8) = v40;
            *(_QWORD*)(a2 + 16) = v48;
            if (v41 != 0) {
              v50 = 128;
              if (*(_QWORD*)(*v34 + 200) == 0) {
                v50 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v34 + v50, v41);
            }
            goto LABEL_44;
          }
          if (v45 >> 61 == 0) {
            v46 = v35;
            v47 = fw_memory_HeapManager_Allocate_alt1(*v34, 8 * v45, 16, 0);
            v35 = v46;
            goto LABEL_40;
          }
        LABEL_47:
          GameRoutine_60a210_alt1();
        }
      LABEL_46:
        GameRoutine_b32f30_alt2();
      }
    }
  }
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupDLSSPass(__int64 result, __int64 a2,
                                                _QWORD* a3, __int64 a4,
                                                __int64 a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
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

  v5 = *(_QWORD*)(result + 72);
  v33 = a3;
  if (*(_DWORD*)(v5 + 4) == 1) {
    v7 = *(_QWORD*)a2;
    v6 = *(_QWORD*)(a2 + 8);
    v8 = *(_DWORD*)(a2 + 96);
    v9 = result;
    v12 = (__int64*)fw_memory_g_heap_manager_ptr;
    v13 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 256, 16, 0);
    *(_BYTE*)(v13 + 8) = 16;
    *(_QWORD*)(v13 + 32) = 0;
    *(_QWORD*)(v13 + 40) = 0;
    *(_QWORD*)(v13 + 48) = 0;
    *(_QWORD*)(v13 + 56) = 0;
    *(_QWORD*)(v13 + 64) = 0;
    *(_QWORD*)(v13 + 72) = 0;
    *(_DWORD*)(v13 + 80) = v8;
    *(_QWORD*)(v13 + 88) = 0;
    *(_QWORD*)(v13 + 96) = 0;
    *(_QWORD*)(v13 + 104) = 0;
    *(_QWORD*)(v13 + 112) = 0;
    v29_.v31 = &v33;
    v29_.v29 = GameData_1fcd388;
    v29_.v30 = v9;
    v29_.v32 = &v29_.v29;
    *(_BYTE*)(v13 + 84) = 1;
    *(_QWORD*)(v13 + 120) = 0;
    *(_QWORD*)(v13 + 128) = 0;
    *(_QWORD*)(v13 + 136) = 0;
    *(_QWORD*)(v13 + 144) = 0;
    *(_QWORD*)(v13 + 152) = 0;
    *(_QWORD*)(v13 + 216) = v9;
    *(_QWORD*)(v13 + 224) = a5;
    strcpy((char*)(v13 + 9), "DLSSPass");
    *(_QWORD*)v13 = GameData_1fcd4a8;
    *(_QWORD*)(v13 + 160) = GameData_1fcd388;
    *(_QWORD*)(v13 + 192) = v13 + 160;
    v14 = v29_.v31;
    *(_QWORD*)(v13 + 168) = v29_.v30;
    *(_QWORD*)(v13 + 176) = v14;
    *(_QWORD*)(v13 + 208) = GameData_1fcd418;
    v16 = *(__int64**)(a2 + 8);
    v15 = *(_QWORD*)(a2 + 16);
    *(_QWORD*)(v13 + 240) = v13 + 208;
    if ((unsigned __int64)v16 >= v15) {
      v18 = *(_QWORD*)a2;
      v19 = (signed __int64)v16 - *(_QWORD*)a2;
      v20 = (v19 >> 3) + 1;
      if (v20 >> 61 != 0) {
        GameRoutine_b32f30_alt2();
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
    *v33 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v6 - v7) & 0x7FFFFFFF8LL)) +
                      120LL);
    v33[63] = v33[64];
  }
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupDepthUpscalePass(__int64 result,
                                                        __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64* v5;
  int v6;
  __int64 v7;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  struct {
    __int64 (**v28)();
    __int64* v29;
    __int64 v30;
    char gap24_[8];
    __int64 (***v31)();
  } v28_;
  __int64 v32;

  v3 = *(_QWORD*)(result + 72);
  v32 = a3;
  if (*(_DWORD*)(v3 + 4) == 1) {
    v4 = *(_QWORD*)a2;
    v5 = *(__int64**)(a2 + 8);
    v6 = *(_DWORD*)(a2 + 96);
    v7 = result;
    v9 = (__int64*)fw_memory_g_heap_manager_ptr;
    v10 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 208, 16, 0);
    v28_.v30 = v7;
    *(_QWORD*)(v10 + 32) = 0;
    *(_QWORD*)(v10 + 40) = 0;
    *(_QWORD*)(v10 + 48) = 0;
    *(_QWORD*)(v10 + 56) = 0;
    *(_QWORD*)(v10 + 64) = 0;
    *(_QWORD*)(v10 + 72) = 0;
    *(_DWORD*)(v10 + 80) = v6;
    *(_QWORD*)(v10 + 88) = 0;
    *(_QWORD*)(v10 + 96) = 0;
    v28_.v28 = GameData_1fcd4f0;
    v28_.v29 = &v32;
    v28_.v31 = &v28_.v28;
    strcpy((char*)(v10 + 8), " DepthUpscalePass");
    *(_BYTE*)(v10 + 84) = 1;
    *(_QWORD*)v10 = GameData_1fcd610;
    *(_QWORD*)(v10 + 112) = GameData_1fcd4f0;
    *(_QWORD*)(v10 + 144) = v10 + 112;
    v11 = v28_.v30;
    *(_QWORD*)(v10 + 120) = v28_.v29;
    *(_QWORD*)(v10 + 128) = v11;
    *(_QWORD*)(v10 + 160) = GameData_1fcd580;
    v12 = *(_QWORD*)(a2 + 16);
    *(_QWORD*)(v10 + 192) = v10 + 160;
    if ((unsigned __int64)v5 >= v12) {
      v14 = (unsigned __int64)v5 - v4;
      v15 = ((__int64)v5 - v4) >> 3;
      v16 = v15 + 1;
      if ((unsigned __int64)(v15 + 1) >> 61 != 0) {
        GameRoutine_b32f30_alt2();
      }
      v17 = v12 - v4;
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
        v19 = v10;
        v20 = fw_memory_HeapManager_Allocate_alt1(*v9, 8 * v18, 16, 0);
        v10 = v19;
      }
      else {
        v20 = 0;
      }
      v21 = v20 + 8 * v18;
      v22 = v20 + v14 - 8 * v15;
      *(_QWORD*)(v20 + v14) = v10;
      v13 = v20 + v14 + 8;
      memcpy_alt1(v22, v4, v14);
      *(_QWORD*)a2 = v22;
      *(_QWORD*)(a2 + 8) = v13;
      *(_QWORD*)(a2 + 16) = v21;
      if (v4 != 0) {
        v23 = 128;
        if (*(_QWORD*)(*v9 + 200) == 0) {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v9 + v23, v4);
      }
    }
    else {
      *v5 = v10;
      v13 = (__int64)(v5 + 1);
      v14 = (unsigned __int64)v5 - v4;
    }
    *(_QWORD*)(a2 + 8) = v13;
    v24 = *(__int64**)(v13 - 8);
    v28_.v28 = (__int64 (**)(void))a2;
    v28_.v29 = v24;
    result = (*(__int64 (**)(__int64*, __int64 (***)(void)))(*v24 + 16))(
        v24, &v28_.v28);
    v25 = v32;
    v26 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + (v14 & 0x7FFFFFFF8LL)) + 96LL);
    v27 = *(_QWORD*)(v32 + 8);
    *(_QWORD*)(v32 + 16) = v26;
    *(_QWORD*)(v25 + 24) = v27;
    *(_QWORD*)(v25 + 8) = v26;
  }
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupOffscreenPostProcessPass(__int64 result,
                                                                __int64 a2,
                                                                __int64 a3,
                                                                __int64 a4)
{
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  __int64 v8;
  _BYTE* v9;
  _BYTE* v10;
  _BYTE* v11;
  _BYTE* v12;
  _BYTE* v13;
  __int64 v14;
  _BYTE* v15;
  __int64 v16;
  _BYTE* v17;
  __int64 v18;
  _BYTE* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64* v29;
  unsigned __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  signed __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  struct {
    __int64 (**v44)();
    __int64 v45;
    __int64* v46;
    char gap24_[8];
    __int64 (***v47)();
  } v44_;
  __int64 v48;

  v48 = a3;
  v4 = *(_QWORD*)(eft_g_effectSystem + 96);
  v5 = *(unsigned int*)(v4 + 8);
  if ((int)v5 >= 1) {
    v6 = *(_BYTE**)(v4 + 16);
    v8 = 0;
    v9 = v6 + 8;
    v10 = v6 + 12;
    v11 = v6 + 16;
    v12 = v6 + 20;
  LABEL_3:
    v13 = v9;
    v14 = v5;
    while ((*v13 & 0x10) == 0) {
      v13 += 2536;
      if (--v14 == 0) {
        v15 = v10;
        v16 = v5;
        while ((*v15 & 0x10) == 0) {
          v15 += 2536;
          if (--v16 == 0) {
            v17 = v11;
            v18 = v5;
            while ((*v17 & 0x10) == 0) {
              v17 += 2536;
              if (--v18 == 0) {
                if (v8 == 28) {
                  return result;
                }
                v19 = v12;
                v20 = v5;
                while ((*v19 & 0x10) == 0) {
                  v19 += 2536;
                  if (--v20 == 0) {
                    v8 += 4;
                    v9 += 16;
                    v10 += 16;
                    v11 += 16;
                    v12 += 16;
                    goto LABEL_3;
                  }
                }
                goto LABEL_17;
              }
            }
            goto LABEL_17;
          }
        }
        break;
      }
    }
  LABEL_17:
    v21 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a4 + 8LL) + 288LL);
    v22 = 120;
    if (*(_BYTE*)(v21 + 90) != 0) {
      v22 = 89;
    }
    if ((*(_BYTE*)(v21 + v22) & 1) != 0) {
      v24 = *(_QWORD*)a2;
      v23 = *(_QWORD*)(a2 + 8);
      v25 = *(_DWORD*)(a2 + 96);
      v26 = result;
      v27 = (__int64*)fw_memory_g_heap_manager_ptr;
      v28 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 208, 16, 0);
      *(_QWORD*)(v28 + 32) = 0;
      *(_QWORD*)(v28 + 40) = 0;
      *(_QWORD*)(v28 + 48) = 0;
      *(_QWORD*)(v28 + 56) = 0;
      *(_QWORD*)(v28 + 64) = 0;
      *(_QWORD*)(v28 + 72) = 0;
      *(_DWORD*)(v28 + 80) = v25;
      *(_QWORD*)(v28 + 96) = 0;
      *(_QWORD*)(v28 + 104) = 0;
      *(_QWORD*)(v28 + 88) = 0;
      *(_QWORD*)(v28 + 168) = v26;
      v44_.v45 = v26;
      v44_.v46 = &v48;
      v44_.v47 = &v44_.v44;
      strcpy((char*)(v28 + 8), "*OffscreenTimeSlipPass");
      *(_BYTE*)(v28 + 84) = 1;
      v44_.v44 = GameData_1fcd658;
      *(_QWORD*)(v28 + 160) = GameData_1fcd6d8;
      *(_QWORD*)v28 = GameData_1fcc260;
      *(_QWORD*)(v28 + 112) = GameData_1fcd658;
      *(_QWORD*)(v28 + 192) = v28 + 160;
      *(_QWORD*)(v28 + 144) = v28 + 112;
      v29 = v44_.v46;
      *(_QWORD*)(v28 + 120) = v44_.v45;
      *(_QWORD*)(v28 + 128) = v29;
      v31 = *(__int64**)(a2 + 8);
      v30 = *(_QWORD*)(a2 + 16);
      if ((unsigned __int64)v31 >= v30) {
        v33 = *(_QWORD*)a2;
        v34 = (signed __int64)v31 - *(_QWORD*)a2;
        v35 = (v34 >> 3) + 1;
        if (v35 >> 61 != 0) {
          GameRoutine_b32f30_alt2();
        }
        v36 = v30 - v33;
        if (v36 >> 2 > v35) {
          v35 = v36 >> 2;
        }
        if ((unsigned __int64)v36 >= 0x7FFFFFFFFFFFFFF8LL) {
          v37 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v37 = v35;
        }
        if (v37 != 0) {
          if (v37 >> 61 != 0) {
            GameRoutine_60a210_alt1();
          }
          v38 = v28;
          v39 = fw_memory_HeapManager_Allocate_alt1(*v27, 8 * v37, 16, 0);
          v28 = v38;
        }
        else {
          v39 = 0;
        }
        v40 = v39 + 8 * v37;
        v41 = v39 + v34 - 8 * (v34 >> 3);
        *(_QWORD*)(v39 + v34) = v28;
        v32 = v39 + v34 + 8;
        memcpy_alt1(v41, v33, v34);
        *(_QWORD*)a2 = v41;
        *(_QWORD*)(a2 + 8) = v32;
        *(_QWORD*)(a2 + 16) = v40;
        if (v33 != 0) {
          v42 = 128;
          if (*(_QWORD*)(*v27 + 200) == 0) {
            v42 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v27 + v42, v33);
        }
      }
      else {
        *v31 = v28;
        v32 = (__int64)(v31 + 1);
      }
      *(_QWORD*)(a2 + 8) = v32;
      v43 = *(_QWORD*)(v32 - 8);
      v44_.v44 = (__int64 (**)(void))a2;
      v44_.v45 = v43;
      result = (*(__int64 (**)(__int64, __int64 (***)(void)))(
          *(_QWORD*)v43 + 16LL))(v43, &v44_.v44);
      *(_QWORD*)(v48 + 96) =
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v23 - v24) & 0x7FFFFFFF8LL)) +
                     104LL);
    }
  }
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupLensFlareSystemPass(
    __int64 result, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5;
  __int64 v8;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 (***v20)();
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  signed __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  struct {
    __int64 (**v40)();
    __int64 v41;
    __int64 v42;
    char gap56_[8];
    __int64 (***v43)();
  } v40_;

  if (a5 == 0) {
    return result;
  }
  v5 = result;
  v8 = a5;
  v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a4 + 8LL) + 272LL);
  v37 = *(_QWORD*)a2;
  v38 = *(_QWORD*)(a2 + 8);
  v39 = *(_DWORD*)(a2 + 96);
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  v12 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 224, 16, 0);
  v13 = fw_memory_HeapManager_Allocate_alt1(*v11, 40, 16, 0);
  *(_DWORD*)(v13 + 32) = a5;
  *(_QWORD*)(v13 + 16) = v10;
  *(_QWORD*)(v13 + 24) = a3;
  v36 = a3;
  *(_BYTE*)(v12 + 8) = 30;
  *(_QWORD*)v13 = GameData_1fcd758;
  *(_QWORD*)(v13 + 8) = v5;
  v14 = *v11;
  v40_.v41 = v5;
  v40_.v42 = v8;
  v40_.v43 = &v40_.v40;
  v40_.v40 = GameData_1fcd7e8;
  *(_QWORD*)(v12 + 32) = 0;
  *(_QWORD*)(v12 + 40) = 0;
  *(_QWORD*)(v12 + 48) = 0;
  *(_QWORD*)(v12 + 56) = 0;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  *(_QWORD*)(v12 + 88) = 0;
  *(_DWORD*)(v12 + 96) = 0;
  *(_QWORD*)(v12 + 104) = 0;
  *(_QWORD*)(v12 + 112) = 0;
  strcpy((char*)(v12 + 9), "LensFlareSystem");
  *(_DWORD*)(v12 + 80) = v39;
  *(_BYTE*)(v12 + 84) = 1;
  *(_QWORD*)v12 = GameData_1fcd878;
  v15 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v14, 40, 16, 0);
  v16 = *(_QWORD*)(v13 + 8);
  v17 = *(_QWORD*)(v13 + 16);
  *(_QWORD*)(v12 + 160) = v15;
  *v15 = GameData_1fcd758;
  v15[1] = v16;
  v18 = *(_QWORD*)(v13 + 24);
  v19 = *(_QWORD*)(v13 + 32);
  v15[2] = v17;
  v15[3] = v18;
  v15[4] = v19;
  v20 = v40_.v43;
  if (v40_.v43 != nullptr) {
    if (v40_.v43 == &v40_.v40) {
      *(_QWORD*)(v12 + 208) = v12 + 176;
      ((void (*)(__int64 (***)(void)))(*v20)[3])(v20);
    }
    else {
      *(_QWORD*)(v12 + 208) =
          ((__int64 (*)(__int64))(*v40_.v43)[2])((__int64)v40_.v43);
    }
    if (v40_.v43 == &v40_.v40) {
      v21 = 4;
      goto LABEL_11;
    }
    if (v40_.v43 != nullptr) {
      v21 = 5;
    LABEL_11:
      ((__int64 (*)(__int64))(*v40_.v43)[v21])((__int64)v40_.v43);
    }
  }
  else {
    *(_QWORD*)(v12 + 208) = 0;
  }
  v22 = 128;
  if (*(_QWORD*)(*v11 + 200) == 0) {
    v22 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*v11 + v22, v13);
  v24 = *(__int64**)(a2 + 8);
  v23 = *(_QWORD*)(a2 + 16);
  if ((unsigned __int64)v24 >= v23) {
    v26 = *(_QWORD*)a2;
    v27 = (signed __int64)v24 - *(_QWORD*)a2;
    v28 = (v27 >> 3) + 1;
    if (v28 >> 61 != 0) {
      GameRoutine_b32f30_alt2();
    }
    v29 = v23 - v26;
    if (v29 >> 2 > v28) {
      v28 = v29 >> 2;
    }
    if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFF8LL) {
      v30 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v30 = v28;
    }
    if (v30 != 0) {
      if (v30 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v31 = fw_memory_HeapManager_Allocate_alt1(*v11, 8 * v30, 16, 0);
    }
    else {
      v31 = 0;
    }
    v32 = v31 + 8 * v30;
    v33 = v31 + v27 - 8 * (v27 >> 3);
    *(_QWORD*)(v31 + v27) = v12;
    v25 = v31 + v27 + 8;
    memcpy_alt1(v33, v26, v27);
    *(_QWORD*)a2 = v33;
    *(_QWORD*)(a2 + 8) = v25;
    *(_QWORD*)(a2 + 16) = v32;
    if (v26 != 0) {
      v34 = 128;
      if (*(_QWORD*)(*v11 + 200) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v11 + v34, v26);
    }
  }
  else {
    *v24 = v12;
    v25 = (__int64)(v24 + 1);
  }
  *(_QWORD*)(a2 + 8) = v25;
  v35 = *(_QWORD*)(v25 - 8);
  v40_.v40 = (__int64 (**)(void))a2;
  v40_.v41 = v35;
  result = (*(__int64 (**)(__int64, __int64 (***)(void)))(
      *(_QWORD*)v35 + 16LL))(v35, &v40_.v40);
  *(_QWORD*)(v36 + 440) =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v38 - v37) & 0x7FFFFFFF8LL)) +
                 112LL);
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupHeightFogPass_lambda0_Invoke(
    __int64 a1, float32x4_t** a2, __int64 a3)
{

#pragma clang fp contract(off)
  _QWORD* v3;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  bool v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  float32x4_t v23;
  int8x16_t v24;
  int8x16_t v25;
  int8x16_t v26;
  float v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  _QWORD* v33;
  __int64 v34;
  unsigned __int32 v35;
  unsigned __int32 v36;
  __int64 v37;
  unsigned __int32 v38;
  __int64 v39;
  unsigned __int32 v40;
  __int64 v41;
  unsigned __int32 v42;
  __int64 v43;
  unsigned __int32 v44;
  __int64 v45;
  unsigned __int32 v46;
  __int64 v47;
  float v48;
  __int64 v49;
  float v50;
  float v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int32 v54;
  unsigned __int32 v55;
  __int64 v56;
  unsigned __int32 v57;
  __int64 v58;
  unsigned __int32 v59;
  __int64 v60;
  unsigned __int32 v61;
  __int64 v62;
  unsigned __int8 v63;
  __int64 v64;
  float v65;
  unsigned __int32 v66;
  __int64 v67;
  unsigned __int8 v68;
  float32x4_t* v69;
  __int64* v70;
  __int64 result;
  unsigned __int32 v72;
  unsigned __int32 v73;
  unsigned __int32 v74;
  unsigned __int32 v75;
  unsigned __int32 v76;
  float v77;
  int v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  float32x4_t v85;
  struct {
    __int64 v87;
    int v88;
    int v89;
    __int64 v90;
    char v91;
    char gap129_[3];
    int v92;
  } v87_;

  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *(_QWORD**)(a1 + 8);
  v5 = *v3 + 13304LL;
  v6 = *(_QWORD*)(v3[1] + 288LL);
  v7 = *(_BYTE*)(*v3 + 16700LL) == 0;
  v8 = *(__int64**)(a1 + 24);
  v9 = (_QWORD*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  v10 = *(_QWORD*)(v6 + 792);
  if (v7) {
    v9 = (_QWORD*)v5;
  }
  v11 = *v8;
  v12 = **(_QWORD***)(a1 + 32);
  v7 = *(_BYTE*)(*v8 + 1234) == 0;
  v13 = 1264;
  if (!v7) {
    v13 = 1233;
  }
  v14 = 1;
  if ((*(_BYTE*)(v11 + v13) & 1) == 0) {
    v14 = 4;
  }
  if (v10 == 0) {
    goto LABEL_18;
  }
  v15 = v6 + 792;
  v16 = *(_DWORD*)(v12[3] + 36LL);
  do {
    v17 = *(_DWORD*)(v10 + 32);
    v18 = v17 < v16;
    if (v17 >= v16) {
      v19 = 0;
    }
    else {
      v19 = 8;
    }
    if (!v18) {
      v15 = v10;
    }
    v10 = *(_QWORD*)(v10 + v19);
  } while (v10 != 0);
  if (v15 != v6 + 792 && v16 >= *(_DWORD*)(v15 + 32)) {
    v20 = *(_QWORD*)(v15 + 40);
  }
  else {
  LABEL_18:
    v20 = 0;
  }
  v21 = **(__int64***)(a1 + 16);
  v22 = 720;
  if (*(_BYTE*)(v11 + 672) != 0) {
    v22 = 656;
  }
  v23 = *(float32x4_t*)(v11 + v22);
  if ((unsigned int)(*(_DWORD*)(*game_g_frame_clock_ptr[0] + 13240) - 3) <= 3) {
    v24 = vmulq_f32(v23, COERCE_AS(float32x4_t, GameData_1a83620));
    LANES128(v24).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
            .n64_u64[0];
    v25 = vmulq_f32(v23, COERCE_AS(float32x4_t, GameData_1a834b0));
    LANES128(v25).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v25, v25, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
            .n64_u64[0];
    v26 = vmulq_f32(v23, COERCE_AS(float32x4_t, GameData_1a82d20));
    LANES128(v26).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
            .n64_u64[0];
    LANES128(v23).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
            .n64_u32[0] |
        ((unsigned __int64)LANES64_OF(
             vpadd_f32(COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
             .n64_u32[0]
         << 32);
    LANES128(v23).n128_u64[1] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
            .n64_u32[0];
  }
  v80 = *v21;
  v81 = v21[v14];
  v82 = v21[63];
  v83 = v21[65];
  v84 = v21[16];
  if (*(_BYTE*)(v11 + 1088) == 1) {
    v27 = *(float*)(v11 + 1084);
  }
  else {
    v28 = *(_QWORD*)(*(_QWORD*)(*v12 + 8LL) + 8LL);
    v29 = 952;
    if (*(_BYTE*)(v28 + 920) != 0) {
      v29 = 916;
    }
    v27 = *(float*)(v28 + v29);
  }
  v30 = 120;
  if (*(_BYTE*)(v11 + 90) != 0) {
    v30 = 89;
  }
  v85 = v23;
  if ((*(_BYTE*)(v11 + v30) & 1) != 0) {
    v31 = 1040;
    if (*(_BYTE*)(v11 + 1008) != 0) {
      v31 = 1004;
    }
    v32 = *(_DWORD*)(v11 + v31);
    if (v20 != 0 && v32 == 0) {
      v33 = (_QWORD*)(v20 + 808);
      goto LABEL_38;
    }
  }
  else {
    v32 = 3;
  }
  v33 = (_QWORD*)(*(_QWORD*)(v12[2] + 32LL) + 24LL);
LABEL_38:
  v78 = *v9;
  v79 = HIDWORD(*v9);
  v34 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v33 + 40LL))(*v33),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v36 = v35;
  v37 = 280;
  v77 = v27 + 0x1.0000000000000p+0f;
  if (*(_BYTE*)(v11 + 248) != 0) {
    v37 = 244;
  }
  v38 = *(_DWORD*)(v11 + v37);
  v39 = 360;
  v76 = v38;
  if (*(_BYTE*)(v11 + 328) != 0) {
    v39 = 324;
  }
  v40 = *(_DWORD*)(v11 + v39);
  v41 = 440;
  v75 = v40;
  if (*(_BYTE*)(v11 + 408) != 0) {
    v41 = 404;
  }
  v42 = *(_DWORD*)(v11 + v41);
  v43 = 600;
  v74 = v42;
  if (*(_BYTE*)(v11 + 568) != 0) {
    v43 = 564;
  }
  v44 = *(_DWORD*)(v11 + v43);
  v45 = 520;
  v73 = v44;
  if (*(_BYTE*)(v11 + 488) != 0) {
    v45 = 484;
  }
  v46 = *(_DWORD*)(v11 + v45);
  v47 = 1344;
  v72 = v46;
  if (*(_BYTE*)(v11 + 1312) != 0) {
    v47 = 1308;
  }
  v48 = *(float*)(v11 + v47);
  v49 = 1424;
  if (*(_BYTE*)(v11 + 1392) != 0) {
    v49 = 1388;
  }
  v50 = v48 + 0x1.0000000000000p+0f;
  v51 = exp2f(*(float*)(v11 + v49)),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v52 = 1504;
  v53 = *(_QWORD*)(v6 + 576);
  v54 = *(_DWORD*)(v6 + 584);
  if (*(_BYTE*)(v11 + 1472) != 0) {
    v52 = 1468;
  }
  v55 = *(_DWORD*)(v11 + v52);
  v56 = 1584;
  if (*(_BYTE*)(v11 + 1552) != 0) {
    v56 = 1548;
  }
  v57 = *(_DWORD*)(v11 + v56);
  v58 = 808;
  if (*(_BYTE*)(v11 + 776) != 0) {
    v58 = 772;
  }
  v59 = *(_DWORD*)(v11 + v58);
  v60 = 200;
  if (*(_BYTE*)(v11 + 168) != 0) {
    v60 = 164;
  }
  v61 = *(_DWORD*)(v11 + v60);
  v62 = 1192;
  if (*(_BYTE*)(v11 + 1162) != 0) {
    v62 = 1161;
  }
  v63 = *(_BYTE*)(v11 + v62);
  v64 = 960;
  if (*(_BYTE*)(v11 + 928) != 0) {
    v64 = 924;
  }
  v65 = 0x1.0000000000000p+0f / *(float*)(v12[1] + 4LL);
  v66 = *(_DWORD*)(v11 + v64);
  v67 = 880;
  if (*(_BYTE*)(v11 + 850) != 0) {
    v67 = 849;
  }
  v68 = *(_BYTE*)(v11 + v67);
  v69 = *a2;
  LANES128(*(v69)).n128_u64[0] = GameRoutine_b48f90(a3, v80),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LANES128(v69[2]).n128_u64[0] = ResourceBuilder_b5a4b0(a3, v81),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LANES128(v69[2]).n128_u64[1] = GameRoutine_b4a3f0(a3, v82),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LANES128(v69[3]).n128_u64[0] = GameRoutine_b4a3f0(a3, v83),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LANES128(v69[3]).n128_u64[1] = GameRoutine_b48f90(a3, v84),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LANES128(v69[6]).n128_f32[2] = v50;
  LANES128(v69[6]).n128_f32[3] = v51;
  LANES128(v69[7]).n128_u32[0] = v55;
  LANES128(v69[7]).n128_u32[1] = v57;
  LANES128(v69[7]).n128_u32[2] = v59;
  LANES128(v69[7]).n128_u32[3] = v66;
  v87_.v87 = 0x1400000000LL;
  LANES128(v69[8]).n128_f32[0] = v65;
  LANES128(v69[8]).n128_u32[1] = v61;
  LANES128(v69[8]).n128_u32[2] = v32;
  LANES128(v69[8]).n128_u8[12] = v63;
  LANES128(v69[8]).n128_u8[13] = v68;
  LANES128(v69[9]).n128_u64[0] = v34;
  LANES128(v69[9]).n128_u32[2] = v36;
  LANES128(v69[10]).n128_u64[0] = v53;
  LANES128(v69[10]).n128_u32[2] = v54;
  v87_.v92 = 0;
  v87_.v90 = 0x100000001LL;
  v87_.v91 = 1;
  v69[4] = v85;
  v87_.v88 = v78;
  v87_.v89 = v79;
  LANES128(v69[5]).n128_u32[0] = v76;
  LANES128(v69[5]).n128_u32[1] = v75;
  LANES128(v69[5]).n128_u32[2] = v74;
  LANES128(v69[5]).n128_u32[3] = v72;
  LANES128(v69[6]).n128_u32[0] = v73;
  LANES128(v69[6]).n128_f32[1] = v77;
  v70 = (__int64*)a2[1];
  result = GameRoutine_b509c0(a3, (__int64)"DstColor", &v87_.v87),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *v70 = result;
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupPostProcessPass1_lambda0_Invoke(
    __int64 a1, __int64** a2, __int64 a3)
{
  __int64 v3;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 result;
  struct {
    __int64 v14;
    int v15;
    int v16;
    __int64 v17;
    char v18;
    char gap25_[3];
    int v19;
  } v14_;

  v3 = *(_QWORD*)(a1 + 16);
  (*a2)[1] = GameRoutine_b48f90(a3, ***(_QWORD***)(a1 + 8));
  (*a2)[2] = ResourceBuilder_b5a4b0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 8LL));
  v8 = *(_QWORD*)(**(_QWORD**)(a1 + 8) + 520LL);
  v9 = (__int64*)(*(_QWORD*)v3 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)v3 + 16700LL) != 0) {
    v9 = (__int64*)(*(_QWORD*)(*(_QWORD*)v3 + 16672LL) + 24LL);
  }
  v10 = *v9;
  v11 = HIDWORD(*v9);
  v7 = *a2;
  *v7 = GameRoutine_b4a3f0(a3, v8);
  v14_.v19 = 0;
  v14_.v15 = v10;
  v14_.v16 = v11;
  v12 = a2[1];
  v14_.v14 = 0x1400000000LL;
  v14_.v17 = 0x100000001LL;
  v14_.v18 = 1;
  result = GameRoutine_b5a5d0(a3, (__int64)"MirageDst", &v14_.v14);
  *v12 = result;
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupPostProcessPass1_lambda1_Invoke(
    __int64 a1, __int64 a2, _QWORD* a3)
{
  _QWORD* v3;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  __int64 v8;
  int v9;
  bool v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  _QWORD* v21;
  __int64* v22;
  _QWORD* v23;
  __int64 v25;
  char v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  __int64 v33;

  {
    v3 = *(_QWORD**)(a1 + 8);
    __asm__ volatile("" ::"r"(v3));
  }
  {
    v5 = v3[27];
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v6 = *(_QWORD*)(**(_QWORD**)(a2 + 24) + 8LL);
    __asm__ volatile("" ::"r"(v6));
  }
  {
    v25 = v3[3];
    __asm__ volatile("" ::"r"(v25));
  }
  {
    v7 = *(_BYTE**)(v6 + 328);
    __asm__ volatile("" ::"r"(v7));
  }
  v8 = 200;
  if (v7[168] != 0) {
    v8 = 164;
  }
  {
    v9 = *(_DWORD*)&v7[v8];
    __asm__ volatile("" ::"r"(v9));
  }
  {
    v10 = v7[248] == 0;
    __asm__ volatile("" ::"r"(v10));
  }
  v11 = 280;
  v27 = v9;
  if (!v10) {
    v11 = 244;
  }
  {
    v12 = *(_DWORD*)&v7[v11];
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v10 = v7[328] == 0;
    __asm__ volatile("" ::"r"(v10));
  }
  v13 = 360;
  v28 = v12;
  if (!v10) {
    v13 = 324;
  }
  {
    v14 = *(_DWORD*)&v7[v13];
    __asm__ volatile("" ::"r"(v14));
  }
  {
    v10 = v7[642] == 0;
    __asm__ volatile("" ::"r"(v10));
  }
  v15 = 672;
  v29 = v14;
  if (!v10) {
    v15 = 641;
  }
  {
    v26 = v7[v15];
    __asm__ volatile("" ::"r"(v26));
  }
  v16 = 440;
  if (v7[408] != 0) {
    v16 = 404;
  }
  {
    v17 = *(_DWORD*)&v7[v16];
    __asm__ volatile("" ::"r"(v17));
  }
  {
    v10 = v7[488] == 0;
    __asm__ volatile("" ::"r"(v10));
  }
  v18 = 520;
  v30 = v17;
  if (!v10) {
    v18 = 484;
  }
  {
    v19 = *(_DWORD*)&v7[v18];
    __asm__ volatile("" ::"r"(v19));
  }
  {
    v10 = v7[568] == 0;
    __asm__ volatile("" ::"r"(v10));
  }
  v20 = 600;
  v31 = v19;
  if (!v10) {
    v20 = 564;
  }
  {
    v32 = *(_DWORD*)&v7[v20];
    __asm__ volatile("" ::"r"(v32));
  }
  {
    v21 = *(_QWORD**)(a2 + 8);
    __asm__ volatile("" ::"r"(v21));
  }
  {
    v22 = (__int64*)(*v3 + 13304LL);
    __asm__ volatile("" ::"r"(v22));
  }
  {
    v23 = *(_QWORD**)a2;
    __asm__ volatile("" ::"r"(v23));
  }
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v22 = (__int64*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
    __asm__ volatile("" ::"r"(v22));
  }
  {
    v33 = *v22;
    __asm__ volatile("" ::"r"(v33));
  }
  return TaskMirage_b6dbe0(v5, v23, v21, a3, &v25);
}

__int64 gfxa_MainPassImageProcess_SetupPostProcessPass3_lambda1_Invoke(
    __int64 a1, __int64 a2, __int64* a3)
{

#pragma clang fp contract(off)
  _QWORD* v3;
  int* v6;
  unsigned __int8* v7;
  int v8;
  int v9;
  int v10;
  bool v11;
  __int64 v12;
  unsigned __int32 v13;
  __int64 v14;
  float v15;
  __int64 v16;
  float v17;
  __int64 v18;
  float v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  float v24;
  int v25;
  float v26;
  bool v27;
  int v28;
  __int64 v29;
  int32x2_t* v30;
  _QWORD v32[2];
  unsigned __int32 v33;
  float v34;
  float v35;

  v3 = *(_QWORD**)(a1 + 8);
  v6 = (int*)(*v3 + 13304LL);
  v7 = *(unsigned __int8**)(*(_QWORD*)(**(_QWORD**)(a2 + 24) + 8LL) + 320LL);
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v6 = (int*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v9 = *v6;
  v8 = v6[1];
  v32[1] = 0x43800000780LL;
  v10 = v7[96];
  v32[0] = __PAIR64__(v8, v9);
  v11 = v10 == 0;
  v12 = 128;
  if (!v11) {
    v12 = 92;
  }
  v13 = *(_DWORD*)&v7[v12];
  v11 = v7[256] == 0;
  v14 = 288;
  v33 = v13;
  if (!v11) {
    v14 = 252;
  }
  v15 = *(float*)&v7[v14];
  v16 = 208;
  v17 = 0x1.0000000000000p+0f / v15;
  if (v7[176] != 0) {
    v16 = 172;
  }
  v18 = *(_QWORD*)(as_g_base_frame_counter + 8);
  v19 = v17 * *(float*)&v7[v16];
  v34 = v19;
  v20 = nn_os_ConvertToTimeSpan(v18);
  v21 = v3[23];
  v23 = *(_QWORD**)a2;
  v22 = *(_QWORD**)(a2 + 8);
  v24 = (float)(v20 / 1000000);
  v25 = *(_DWORD*)(v21 + 40);
  v26 = 0x1.f400000000000p+9f / v24;
  v27 = v25 < -1;
  v28 = ((_BYTE)v25 + 1) & 1;
  if (v27) {
    v28 = -v28;
  }
  *(_DWORD*)(v21 + 40) = v28;
  v29 = *(_QWORD*)(v21 + 8LL * v28 + 24);
  v35 = 0x1.f400000000000p+9f / v24;
  v30 = (int32x2_t*)(*(__int64 (**)(__int64))(*(_QWORD*)v29 + 56LL))(v29);
  LANES64(*(v30)).n64_u32[0] = v13;
  LANES64(*(v30)).n64_f32[1] = v19 * v26;
  LANES64(v30[2]).n64_f32[0] = (float)v9;
  LANES64(v30[2]).n64_f32[1] = (float)v8;
  LANES64(v30[3]).n64_f32[0] = 0x1.0000000000000p+0f / (float)v9;
  LANES64(v30[3]).n64_f32[1] = 0x1.0000000000000p+0f / (float)v8;
  LANES64(v30[1]).n64_u64[0] =
      LANES64_OF(vzip1_s32(vsqrt_f32(vpadd_f32(
                               COERCE_AS(float32x2_t, 0x3C0C77653B31C71CLL),
                               COERCE_AS(float32x2_t, 0x3C0C77653B31C71CLL))),
                           vsqrt_f32(vpadd_f32(
                               COERCE_AS(float32x2_t, 0x366623DF3591A2B5LL),
                               COERCE_AS(float32x2_t, 0x366623DF3591A2B5LL)))))
          .n64_u64[0];
  (*(void (**)(__int64))(*(_QWORD*)v29 + 64LL))(v29);
  return TaskMotionBlur_b6ef60(v21, v23, v22, a3, (unsigned int*)v32);
}

__int64 gfxa_MainPassImageProcess_SetupPostProcessPass4_lambda0_Invoke(
    __int64 a1, _QWORD* a2, __int64 a3)
{
  __int64 v3;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 result;
  struct {
    __int64 v13;
    __int64 v14;
    __int64 v15;
    char v16;
    char gap25_[3];
    int v17;
  } v13_;

  v3 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)*a2 = GameRoutine_b48f90(a3, ***(_QWORD***)(a1 + 8));
  *(_QWORD*)(*a2 + 8LL) =
      ResourceBuilder_b5a4b0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 8LL));
  *(_QWORD*)(*a2 + 24LL) =
      GameRoutine_b4a3f0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 504LL));
  v7 = **(_QWORD**)(a1 + 8);
  v8 = *(_QWORD*)(v7 + 464);
  if (v8 == 0) {
    v8 = *(_QWORD*)(v7 + 456);
  }
  *(_QWORD*)(*a2 + 16LL) = GameRoutine_b48f90(a3, v8);
  v9 = (__int64*)a2[1];
  v10 = (__int64*)(*(_QWORD*)v3 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)v3 + 16700LL) != 0) {
    v10 = (__int64*)(*(_QWORD*)(*(_QWORD*)v3 + 16672LL) + 24LL);
  }
  v11 = *v10;
  v13_.v16 = 1;
  v13_.v17 = 0;
  v13_.v13 = 0xD00000000LL;
  v13_.v15 = 0x500000001LL;
  LODWORD(v13_.v14) = (int)v11 / 2;
  HIDWORD(v13_.v14) = SHIDWORD(v11) / 2;
  *v9 = GameRoutine_b54ca0(a3, (__int64)"tmpHalfColorCoC", &v13_.v13);
  LODWORD(v13_.v14) = (int)v11 / 2;
  HIDWORD(v13_.v14) = SHIDWORD(v11) / 2;
  HIDWORD(v13_.v15) = 1;
  HIDWORD(v13_.v13) = 13;
  v9[2] = GameRoutine_b5a5d0(a3, (__int64)"tmpGather", &v13_.v13);
  LODWORD(v13_.v14) = (int)v11 / 2;
  HIDWORD(v13_.v14) = SHIDWORD(v11) / 2;
  HIDWORD(v13_.v15) = 1;
  HIDWORD(v13_.v13) = 13;
  v9[3] = GameRoutine_b494f0(a3, (__int64)"tmpGather2", &v13_.v13);
  v13_.v14 = v11;
  HIDWORD(v13_.v15) = 1;
  HIDWORD(v13_.v13) = 20;
  result = GameRoutine_b5acb0(a3, (__int64)"dstDoF", &v13_.v13);
  v9[4] = result;
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupPostProcessPass4_lambda1_Invoke(
    __int64 a1, __int64 a2, _QWORD* a3)
{
  _QWORD* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64* v9;
  _QWORD* v10;
  struct {
    char gap0_[4];
    _BYTE v12[4];
    __int64 v13;
  } v12_;

  v3 = *(_QWORD**)(a1 + 8);
  v5 = v3[17];
  v6 = *(_QWORD*)(*(_QWORD*)(**(_QWORD**)(a2 + 24) + 8LL) + 128LL);
  v7 = 360;
  if (*(_BYTE*)(v6 + 330) != 0) {
    v7 = 329;
  }
  v12_.v12[0] = *(_BYTE*)(v6 + v7);
  v8 = *(_QWORD**)(a2 + 8);
  v9 = (__int64*)(*v3 + 13304LL);
  v10 = *(_QWORD**)a2;
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v9 = (__int64*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v12_.v13 = *v9;
  return GameRoutine_b5b7e0(v5, v10, v8, a3, (__int64)v12_.v12);
}

__int64 gfxa_MainPassImageProcess_SetupPostProcessPass4_lambda4_Invoke(
    __int64 a1, __int64** a2, __int64 a3)
{
  __int64* v4;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 result;
  struct {
    __int64 v15;
    int v16;
    int v17;
    __int64 v18;
    char v19;
    char gap25_[3];
    int v20;
  } v15_;

  v6 = **(_QWORD**)(a1 + 8);
  v7 = *(unsigned __int8*)(v6 + 16700);
  v8 = *(_QWORD*)(v6 + 16672);
  v9 = (__int64*)(v6 + 13304);
  v10 = (__int64*)(v8 + 24);
  if (v7 != 0) {
    v9 = v10;
  }
  v11 = *v9;
  v12 = HIDWORD(*v9);
  v4 = *a2;
  *v4 = GameRoutine_b48f90(a3, ***(_QWORD***)(a1 + 16));
  v15_.v20 = 0;
  v15_.v16 = v11;
  v15_.v17 = v12;
  v13 = a2[1];
  v15_.v15 = 0x1400000000LL;
  v15_.v18 = 0x100000001LL;
  v15_.v19 = 1;
  result = GameRoutine_b53d40(a3, (__int64)"RadialBlurDst", &v15_.v15);
  *v13 = result;
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupPreDoFPass_lambda3_Invoke(__int64 a1,
                                                                 __int64 a2,
                                                                 __int64* a3)
{

#pragma clang fp contract(off)
  _QWORD* v3;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  char v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 result;
  _QWORD v14[5];
  char v15;

  {
    v3 = *(_QWORD**)(a1 + 8);
    __asm__ volatile("" ::"r"(v3));
  }
  {
    v5 = *v3;
    __asm__ volatile("" ::"r"(v5));
  }
  v14[3] = 0x3F8000003A83126FLL;
  v14[4] = 0x3F6666663E4CCCCDLL;
  *(_BYTE*)(v5 + 16700) = 0;
  {
    v6 = v3[30];
    __asm__ volatile("" ::"r"(v6));
  }
  {
    v7 = (_QWORD*)(*v3 + 13304LL);
    __asm__ volatile("" ::"r"(v7));
  }
  {
    v8 = *(_BYTE*)(*(_QWORD*)(a2 + 24) + 120LL);
    __asm__ volatile("" ::"r"(v8));
  }
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v7 = (_QWORD*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
    __asm__ volatile("" ::"r"(v7));
  }
  v14[0] = *v7;
  {
    v9 = (_QWORD*)(v3[7] + 1220LL);
    __asm__ volatile("" ::"r"(v9));
  }
  v14[1] = *v9;
  {
    v10 = v9[1];
    __asm__ volatile("" ::"r"(v10));
  }
  v15 = v8;
  {
    v12 = *(_QWORD**)a2;
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v11 = *(_QWORD**)(a2 + 8);
    __asm__ volatile("" ::"r"(v11));
  }
  v14[2] = v10;
  result = TaskDoFTemporalFilter_b7d920(v6, v12, v11, a3, (float*)v14);
  *(_BYTE*)(*v3 + 16700LL) = 1;
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupDLSSPass_lambda1_Invoke(__int64 a1,
                                                               __int64 a2,
                                                               __int64* a3)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  int v12;
  int v13;
  __int64 v14;
  bool v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  __int64 result;
  struct {
    __int64 v20;
    int v21;
    int v22;
    __int64 v23;
    __int64 v24;
    char v25;
    char v26;
    char gap42_[2];
    int v27;
  } v20_;

  v3 = *(_QWORD**)(a1 + 8);
  v4 = *(_QWORD*)(a2 + 24);
  v20_.v26 = 0;
  *(_BYTE*)(*v3 + 16700LL) = 0;
  v7 = *v3;
  v8 = v3[7];
  v9 = v3[19];
  v10 = *(_QWORD**)a2;
  v11 = *(_QWORD**)(a2 + 8);
  v12 = *(_DWORD*)(*v3 + 13312LL);
  v13 = *(_DWORD*)(*v3 + 13316LL);
  v20_.v25 = *(_BYTE*)(v4 + 120);
  LODWORD(v4) = *(unsigned __int8*)(v7 + 16700);
  v14 = *(_QWORD*)(v8 + 1220);
  v20_.v21 = v12;
  v20_.v22 = v13;
  v15 = (_DWORD)v4 == 0;
  v16 = (__int64*)(v7 + 13304);
  v17 = *(_QWORD*)(v7 + 16672);
  v18 = (__int64*)(v17 + 24);
  v20_.v20 = v17;
  if (v15) {
    v18 = v16;
  }
  v20_.v23 = *v18;
  v20_.v24 = v14;
  v20_.v27 = 1065353216;
  ((void (*)(__int64, __int64))*GameData_212e738)(*a3 + 8, 49);
  result = ResourceBuilder_b5a9c0(v9, v10, v11, a3, (int*)&v20_.v20);
  *(_BYTE*)(*v3 + 16700LL) = 1;
  **(_BYTE**)(a1 + 16) = 1;
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupDepthUpscalePass_lambda0_Invoke(
    __int64 a1, __int64** a2, __int64 a3)
{
  __int64 v3;
  int v6;
  __int64 result;
  struct {
    __int64 v8;
    int v9;
    int v10;
    __int64 v11;
    char v12;
    char gap25_[3];
    int v13;
  } v8_;

  v3 = *(_QWORD*)(a1 + 16);
  **a2 = ResourceBuilder_b5a4b0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 8LL));
  v8_.v11 = 0x100000001LL;
  v8_.v13 = 0;
  v8_.v8 = 0x1500000000LL;
  v8_.v12 = 1;
  v6 = *(_DWORD*)(*(_QWORD*)v3 + 13316LL);
  v8_.v9 = *(_DWORD*)(*(_QWORD*)v3 + 13312LL);
  v8_.v10 = v6;
  result = GameRoutine_b60f30_alt1(a3, "FullDepth", &v8_.v8);
  *a2[1] = result;
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupOffscreenPostProcessPass_lambda0_Invoke(
    __int64 a1, __int64** a2, __int64* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64* v5;
  __int64 v7;
  int v8;
  __int64 v9;
  int* v10;
  int* v11;
  float v12;
  signed int v13;
  __int64 v14;
  int v15;
  __int64* v16;
  __int64 result;
  struct {
    __int64 v18;
    int v19;
    signed int v20;
    __int64 v21;
    char v22;
    char gap25_[3];
    int v23;
  } v18_;

  v3 = *(_QWORD*)(a1 + 16);
  v5 = *a2;
  v7 = **(_QWORD**)(a1 + 8);
  v8 = *(unsigned __int8*)(v7 + 16700);
  v9 = *(_QWORD*)(v7 + 16672);
  v10 = (int*)(v7 + 13304);
  v11 = (int*)(v9 + 24);
  if (v8 != 0) {
    v10 = v11;
  }
  v12 = (float)v10[1];
  v13 = ((int)(float)(v12 * 0x1.6666660000000p-1f) + 1) & 0xFFFFFFFE;
  v14 = *(_QWORD*)(*(_QWORD*)v3 + 56LL);
  v15 = (int)(float)((float)((float)*v10 / v12) * (float)v13);
  *v5 = GameRoutine_b48f90((__int64)a3, *(_QWORD*)(*(_QWORD*)v3 + 96LL));
  v5[1] = GameRoutine_b48f90((__int64)a3, v14);
  v18_.v23 = 0;
  v18_.v19 = v15;
  v18_.v20 = v13;
  v16 = a2[1];
  v18_.v18 = 0xD00000000LL;
  v18_.v21 = 0x100000001LL;
  v18_.v22 = 1;
  result = GameRoutine_b4ba10(a3, (__int64)"TimeSlipDst", (__int64)&v18_.v18);
  *v16 = result;
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupLensFlareSystemPass_lambda1_Invoke(
    __int64 a1, __int64 a2, __int64* a3)
{

#pragma clang fp contract(off)
  _QWORD* v3;
  int v4;
  __int64 v5;
  float32x4_t* v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  struct {
    float32x4_t v15;
    float32x4_t v16;
    int v17;
    int v18;
  } v15_;

  v3 = *(_QWORD**)(a1 + 8);
  v4 = *(_DWORD*)(a1 + 16);
  v5 = *(_QWORD*)(a2 + 24);
  v15_.v16 = COERCE_AS(float32x4_t, GameData_1a83610);
  LANES128(v15_.v15).n128_u64[0] = v3[3];
  if (v4 == 2) {
    v8 = (float32x4_t*)GameRoutine_b3f800(
        (_QWORD*)(*(_QWORD*)(v3[1] + 288LL) + 592LL), (__int64)"Moon");
  }
  else {
    if (v4 != 1) {
      goto LABEL_6;
    }
    v8 = (float32x4_t*)GameRoutine_b3f6c0(
        (_QWORD*)(*(_QWORD*)(v3[1] + 288LL) + 592LL), (__int64)"Sun");
  }
  v15_.v16 = vsubq_f32(COERCE_AS(float32x4_t, 0), v8[3]);
LABEL_6:
  v9 = v3[20];
  v10 = *(_QWORD**)a2;
  v11 = *(_QWORD**)(a2 + 8);
  LANES128(v15_.v15).n128_u64[1] = v3[5];
  v15_.v18 = 1065353216;
  v12 = **(_QWORD**)(*(_QWORD*)v5 + 8LL);
  v13 = 128;
  if (*(_BYTE*)(v12 + 96) != 0) {
    v13 = 92;
  }
  v15_.v17 = *(_DWORD*)(v12 + v13);
  return GameRoutine_b6b560(v9, v10, v11, a3, &v15_.v15);
}

#pragma GCC visibility pop
