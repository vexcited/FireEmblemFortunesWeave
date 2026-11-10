#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_18dcae0(__int64);
_QWORD* fw_graphics_ConstructAO(__int64);
_QWORD* fw_graphics_ConstructBaseShadow(__int64);
_QWORD* fw_graphics_ConstructChara(__int64);
_QWORD* fw_graphics_ConstructCharaScene(__int64);
_QWORD* fw_graphics_ConstructCharaSilhouette(__int64);
_QWORD* fw_graphics_ConstructCloud(__int64);
_QWORD* fw_graphics_ConstructColorGrading(__int64);
_QWORD* fw_graphics_ConstructContactShadow(__int64);
_QWORD* fw_graphics_ConstructFog(__int64);
_QWORD* fw_graphics_ConstructGradationFilter(__int64);
_QWORD* fw_graphics_ConstructHeightFog(__int64);
_QWORD* fw_graphics_ConstructMirage(__int64);
_QWORD* fw_graphics_ConstructPainting(__int64);
_QWORD* fw_graphics_ConstructSSR(__int64);
_QWORD* fw_graphics_ConstructSceneExposure(__int64);
_QWORD* fw_graphics_ConstructSceneLight(__int64);
_QWORD* fw_graphics_ConstructSceneShadow(__int64);
_QWORD* fw_graphics_ConstructShadowColorCorrection(__int64);
_QWORD* fw_graphics_ConstructSkyBlur(__int64);
_QWORD* fw_graphics_ConstructTimeSlip(__int64);
_QWORD* fw_graphics_ConstructTranslucency(__int64);
_QWORD* fw_graphics_ConstructVignette(__int64);
_QWORD* fw_graphics_RegisterProperty(_QWORD* result, __int64);
__attribute__((swiftcall)) void GameRoutine_53bd0(PSEUDO_X8, __int64);
__int64 Config_bc4f00(__int64, unsigned int, unsigned int);
__int64 Config_bc52e0(_QWORD*, int, unsigned int, int);
__int64 GameRoutine_5de60(_QWORD*, __int64);
__int64 Manager_bc5490(__int64, __int64, int32x4_t*, __int128*, float, float);
__int64 ResourceBuilder_b60880();
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memset(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN** GameData_212e738;
extern _UNKNOWN** GameData_212e778[2];
extern _UNKNOWN** GameData_212e780;
extern _UNKNOWN** GameData_212e8c8[8];
extern _UNKNOWN** GameData_212e8d0[7];
extern _UNKNOWN** GameData_212e8d8[6];
extern _UNKNOWN** GameData_212e8e0[5];
extern _UNKNOWN** GameData_212e8e8[4];
extern __int128 GameData_1a828f0;
extern __int128 GameData_1a82950;
extern __int128 GameData_1a82b40;
extern __int128 GameData_1a82bc0;
extern __int128 GameData_1a82ca0;
extern __int128 GameData_1a82e30;
extern __int128 GameData_1a83400;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a837f0;
extern __int64 (*GameData_1fc6640[])();
extern __int64 (*gfx_settings_BaseParamInstance_vtable)();
extern __int64 (*gfx_settings_Bool_vtable[])();
extern __int64 (*gfx_settings_Float3_vtable[])();
extern __int64 (*gfx_settings_Float_vtable[])();
extern __int64 (*gfx_settings_Int_vtable[])();
extern __int64 (*gfxa_AppExposureSetting_vtable[])();
extern __int64 (*gfxa_BaseExposureSetting_vtable[])();
extern __int64 (*gfxa_BloomSetting_vtable[])();
extern __int64 (*gfxa_CapsuleAOSetting_vtable[])();
extern __int64 (*gfxa_CharaDiffusionSetting_vtable[])();
extern __int64 (*gfxa_CharaSelfShadowSetting_vtable[])();
extern __int64 (*gfxa_DiffusionSetting_vtable[])();
extern __int64 (*gfxa_DoFSetting_vtable[])();
extern __int64 (*gfxa_EnvSetting_vtable[])();
extern __int64 (*gfxa_GaussianBlurSetting_vtable[])();
extern __int64 (*gfxa_GlobalVarsSetting_vtable[])();
extern __int64 (*gfxa_LensFlareSystemSetting_vtable[])();
extern __int64 (*gfxa_MotionBlurSetting_vtable[])();
extern __int64 (*gfxa_NegaPosiReverseSetting_vtable[])();
extern __int64 (*gfxa_RadialBlurSetting_vtable[])();
extern __int64 (*gfxa_SepiaSetting_vtable[])();
extern __int64 (*gfxa_SightMapRenderSetting_vtable[])();
extern __int64 (*gfxa_VFXSetting_vtable[])();
extern __int64 (*gfxa_WorldAOSetting_vtable[])();
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64 GameData_212e520[4];
extern __int64 GameData_212e530[2];
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_5d3320();
void GameRoutine_5d3420();
void __attribute__((noreturn)) GameRoutine_60a310();
__int64 gfxa_ab4070(__int64 result);
__int64 gfxa_ab69a0(__int64 result);
__int64 gfxa_b60140(__int64 a1, _QWORD* a2, __int64* a3, _QWORD* a4,
                    __int64 a5);
__int64 gfxa_b711f0(__int64 a1, __int64 a2);
__int64 gfxa_b791d0(__int64 a1, __int64 a2);

__int64 gfxa_ab4070(__int64 result)
{
  int v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v14;
  __int64 v15;
  __int64 v19;
  __int64 v20;
  __int64 v24;
  __int64 v28;
  __int64 v29;
  __int64 v33;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v49;
  __int64 v50;
  __int64 v54;
  __int64 v55;
  __int64 v59;
  __int64 v63;
  __int64 v64;
  __int64 v68;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v78;
  __int64 v79;
  __int64 v83;
  __int64 v87;
  __int64 v88;
  __int64 v92;
  __int64* v93;
  __int64 v94;
  __int64 v98;
  char* v99;
  __int64 v100;
  __int64 v104;
  __int64 v105;
  __int64 v109;
  __int64 v110;
  __int64 v114;
  __int64 v115;
  _QWORD* v116;
  __int64 v117;
  __int64 v121;
  __int64 v125;
  __int64 v129;
  __int64 v130;
  __int64 v134;
  __int64 v138;
  __int64 v142;
  __int64 v146;
  __int64 v150;
  __int64 v154;
  __int64 v158;
  __int64 v162;
  __int64 v166;
  __int64 v170;
  __int64 v174;
  __int64 v178;
  __int64* v182;
  __int64 v183;
  __int64 v187;
  __int64 v188;
  char* v189;
  __int64 v190;

  v1 = *(_DWORD*)(result + 40);
  v2 = (_QWORD*)result;
  if (v1 != 2) {
    if (v1 != 1) {
      if (v1 != 0) {
        return result;
      }
      if (*(_QWORD*)(result + 48) == 0) {
        v3 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 376, 16, 0);
        memset(v3, 0, 376);
        *(_QWORD*)v3 = gfxa_EnvSetting_vtable;
        v7 = GameData_212e530[0];
        *(_BYTE*)(v3 + 64) = 12;
        *(_DWORD*)(v3 + 65) = 1400070472;
        *(_BYTE*)(v3 + 88) = 1;
        v8 = v7 + 16;
        *(_QWORD*)(v3 + 56) = v7 + 16;
        *(_WORD*)(v3 + 69) = 28277;
        fw_graphics_RegisterProperty((_QWORD*)v3, v3 + 56);
        *(_BYTE*)(v3 + 92) = 0;
        *(_BYTE*)(v3 + 96) = 0;
        *(_QWORD*)(v3 + 104) = 0;
        *(_QWORD*)(v3 + 112) = 0;
        *(_QWORD*)(v3 + 120) = 0;
        v9 = GameData_212e520[0] + 16;
        *(_DWORD*)(v3 + 128) = 1065353216;
        *(_BYTE*)(v3 + 144) = 12;
        strcpy((char*)(v3 + 145), "HasSky");
        *(_BYTE*)(v3 + 168) = 1;
        *(_QWORD*)(v3 + 56) = v9;
        *(_QWORD*)(v3 + 136) = v8;
        fw_graphics_RegisterProperty((_QWORD*)v3, v3 + 136);
        *(_QWORD*)(v3 + 136) = v9;
        *(_QWORD*)(v3 + 216) = v8;
        *(_BYTE*)(v3 + 224) = 30;
        *(_BYTE*)(v3 + 172) = 0;
        *(_BYTE*)(v3 + 176) = 0;
        *(_QWORD*)(v3 + 184) = 0;
        *(_QWORD*)(v3 + 192) = 0;
        *(_QWORD*)(v3 + 200) = 0;
        *(_DWORD*)(v3 + 208) = 1065353216;
        *(_BYTE*)(v3 + 248) = 1;
        strcpy((char*)(v3 + 225), "HasRenderingSky");
        fw_graphics_RegisterProperty((_QWORD*)v3, v3 + 216);
        *(_BYTE*)(v3 + 252) = 0;
        *(_BYTE*)(v3 + 256) = 0;
        *(_BYTE*)(v3 + 304) = 14;
        *(_QWORD*)(v3 + 264) = 0;
        *(_QWORD*)(v3 + 272) = 0;
        *(_QWORD*)(v3 + 280) = 0;
        *(_QWORD*)(v3 + 216) = v9;
        *(_DWORD*)(v3 + 288) = 1065353216;
        *(_QWORD*)(v3 + 296) = v8;
        *(_BYTE*)(v3 + 328) = 1;
        strcpy((char*)(v3 + 305), "Outside");
        fw_graphics_RegisterProperty((_QWORD*)v3, v3 + 296);
        result = v2[6];
        *(_BYTE*)(v3 + 332) = 0;
        *(_BYTE*)(v3 + 336) = 0;
        *(_QWORD*)(v3 + 344) = 0;
        *(_QWORD*)(v3 + 352) = 0;
        *(_QWORD*)(v3 + 360) = 0;
        *(_QWORD*)(v3 + 296) = v9;
        *(_DWORD*)(v3 + 368) = 1065353216;
        v2[6] = v3;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
      }
      if (v2[7] == 0) {
        v10 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 456, 16, 0);
        memset(v10, 0, 456);
        *(_QWORD*)v10 = gfxa_BaseExposureSetting_vtable;
        *(_BYTE*)(v10 + 88) = 1;
        *(_BYTE*)(v10 + 64) = 8;
        *(_QWORD*)(v10 + 56) = &gfx_settings_BaseParamInstance_vtable;
        *(_DWORD*)(v10 + 65) = 1701869908;
        fw_graphics_RegisterProperty((_QWORD*)v10, v10 + 56);
        *(_BYTE*)(v10 + 92) = 0;
        *(_BYTE*)(v10 + 96) = 0;
        *(_QWORD*)(v10 + 104) = 0;
        *(_QWORD*)(v10 + 112) = 0;
        *(_QWORD*)(v10 + 120) = 0;
        *(_DWORD*)(v10 + 128) = 0;
        *(_BYTE*)(v10 + 168) = 1;
        *(_BYTE*)(v10 + 144) = 18;
        *(_QWORD*)(v10 + 56) = gfx_settings_Int_vtable;
        *(_QWORD*)(v10 + 136) = &gfx_settings_BaseParamInstance_vtable;
        strcpy((char*)(v10 + 145), "A_SpeedUp");
        fw_graphics_RegisterProperty((_QWORD*)v10, v10 + 136);
        *(_BYTE*)(v10 + 172) = 0;
        *(_BYTE*)(v10 + 176) = 0;
        *(_QWORD*)(v10 + 184) = 0;
        *(_QWORD*)(v10 + 192) = 0;
        *(_QWORD*)(v10 + 200) = 0;
        v14 = GameData_212e520[0] + 16;
        *(_DWORD*)(v10 + 208) = 1077936128;
        *(_QWORD*)(v10 + 216) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v10 + 248) = 1;
        *(_BYTE*)(v10 + 224) = 22;
        *(_QWORD*)(v10 + 136) = v14;
        strcpy((char*)(v10 + 225), "A_SpeedDown");
        fw_graphics_RegisterProperty((_QWORD*)v10, v10 + 216);
        *(_BYTE*)(v10 + 252) = 0;
        *(_BYTE*)(v10 + 256) = 0;
        *(_QWORD*)(v10 + 264) = 0;
        *(_QWORD*)(v10 + 272) = 0;
        *(_BYTE*)(v10 + 304) = 30;
        *(_QWORD*)(v10 + 280) = 0;
        *(_QWORD*)(v10 + 216) = v14;
        *(_DWORD*)(v10 + 288) = 1065353216;
        *(_QWORD*)(v10 + 296) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v10 + 328) = 1;
        strcpy((char*)(v10 + 305), "SL_PositionType");
        fw_graphics_RegisterProperty((_QWORD*)v10, v10 + 296);
        *(_BYTE*)(v10 + 332) = 0;
        *(_BYTE*)(v10 + 336) = 0;
        *(_QWORD*)(v10 + 344) = 0;
        *(_QWORD*)(v10 + 352) = 0;
        *(_BYTE*)(v10 + 384) = 26;
        *(_QWORD*)(v10 + 360) = 0;
        *(_QWORD*)(v10 + 296) = gfx_settings_Int_vtable;
        *(_DWORD*)(v10 + 368) = 0;
        *(_QWORD*)(v10 + 376) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v10 + 408) = 1;
        strcpy((char*)(v10 + 385), "ContrastScale");
        fw_graphics_RegisterProperty((_QWORD*)v10, v10 + 376);
        result = v2[7];
        *(_BYTE*)(v10 + 412) = 0;
        *(_BYTE*)(v10 + 416) = 0;
        *(_QWORD*)(v10 + 424) = 0;
        *(_QWORD*)(v10 + 432) = 0;
        *(_QWORD*)(v10 + 440) = 0;
        *(_QWORD*)(v10 + 376) = v14;
        *(_DWORD*)(v10 + 448) = 1065353216;
        v2[7] = v10;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
      }
      if (v2[9] == 0) {
        v15 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 296, 16, 0);
        memset(v15, 0, 296);
        *(_QWORD*)v15 = gfxa_AppExposureSetting_vtable;
        qmemcpy((void*)(v15 + 64), " Ch0_Compensation", 17);
        *(_BYTE*)(v15 + 88) = 1;
        *(_QWORD*)(v15 + 56) = &gfx_settings_BaseParamInstance_vtable;
        fw_graphics_RegisterProperty((_QWORD*)v15, v15 + 56);
        *(_BYTE*)(v15 + 92) = 0;
        *(_BYTE*)(v15 + 96) = 0;
        *(_QWORD*)(v15 + 104) = 0;
        *(_QWORD*)(v15 + 112) = 0;
        *(_QWORD*)(v15 + 120) = 0;
        v19 = GameData_212e520[0] + 16;
        *(_DWORD*)(v15 + 128) = 0;
        strcpy((char*)(v15 + 144), " Ch1_Compensation");
        *(_BYTE*)(v15 + 168) = 1;
        *(_QWORD*)(v15 + 56) = v19;
        *(_QWORD*)(v15 + 136) = &gfx_settings_BaseParamInstance_vtable;
        fw_graphics_RegisterProperty((_QWORD*)v15, v15 + 136);
        *(_QWORD*)(v15 + 136) = v19;
        *(_QWORD*)(v15 + 216) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v15 + 172) = 0;
        *(_BYTE*)(v15 + 176) = 0;
        *(_QWORD*)(v15 + 184) = 0;
        *(_QWORD*)(v15 + 192) = 0;
        *(_QWORD*)(v15 + 200) = 0;
        *(_DWORD*)(v15 + 208) = 0;
        strcpy((char*)(v15 + 224), " Ch2_Compensation");
        *(_BYTE*)(v15 + 248) = 1;
        fw_graphics_RegisterProperty((_QWORD*)v15, v15 + 216);
        result = v2[9];
        *(_BYTE*)(v15 + 252) = 0;
        *(_BYTE*)(v15 + 256) = 0;
        *(_QWORD*)(v15 + 264) = 0;
        *(_QWORD*)(v15 + 272) = 0;
        *(_QWORD*)(v15 + 280) = 0;
        *(_QWORD*)(v15 + 216) = v19;
        *(_DWORD*)(v15 + 288) = 0;
        v2[9] = v15;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
      }
      if (v2[10] == 0) {
        v20 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 1088, 16, 0);
        memset(v20, 0, 1088);
        fw_graphics_ConstructBaseShadow(v20);
        result = v2[10];
        v2[10] = v20;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
      }
      if (v2[15] == 0) {
        v24 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 376, 16, 0);
        memset(v24, 0, 376);
        *(_QWORD*)v24 = gfxa_BloomSetting_vtable;
        *(_BYTE*)(v24 + 88) = 1;
        *(_BYTE*)(v24 + 64) = 10;
        *(_QWORD*)(v24 + 56) = &gfx_settings_BaseParamInstance_vtable;
        *(_DWORD*)(v24 + 65) = 1752198209;
        *(_BYTE*)(v24 + 69) = 97;
        fw_graphics_RegisterProperty((_QWORD*)v24, v24 + 56);
        *(_BYTE*)(v24 + 92) = 0;
        *(_BYTE*)(v24 + 96) = 0;
        *(_QWORD*)(v24 + 104) = 0;
        *(_QWORD*)(v24 + 112) = 0;
        *(_QWORD*)(v24 + 120) = 0;
        v28 = GameData_212e520[0] + 16;
        *(_DWORD*)(v24 + 128) = 1065353216;
        *(_BYTE*)(v24 + 168) = 1;
        *(_BYTE*)(v24 + 144) = 18;
        *(_QWORD*)(v24 + 56) = v28;
        *(_QWORD*)(v24 + 136) = &gfx_settings_BaseParamInstance_vtable;
        strcpy((char*)(v24 + 145), "Threshold");
        fw_graphics_RegisterProperty((_QWORD*)v24, v24 + 136);
        *(_QWORD*)(v24 + 136) = v28;
        *(_QWORD*)(v24 + 216) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v24 + 224) = 26;
        *(_BYTE*)(v24 + 172) = 0;
        *(_BYTE*)(v24 + 176) = 0;
        *(_QWORD*)(v24 + 184) = 0;
        *(_QWORD*)(v24 + 192) = 0;
        *(_QWORD*)(v24 + 200) = 0;
        *(_DWORD*)(v24 + 208) = 1065353216;
        *(_BYTE*)(v24 + 248) = 1;
        strcpy((char*)(v24 + 225), "SoftThreshold");
        fw_graphics_RegisterProperty((_QWORD*)v24, v24 + 216);
        *(_BYTE*)(v24 + 252) = 0;
        *(_BYTE*)(v24 + 256) = 0;
        *(_QWORD*)(v24 + 264) = 0;
        *(_QWORD*)(v24 + 272) = 0;
        *(_DWORD*)(v24 + 288) = 1048576000;
        *(_QWORD*)(v24 + 280) = 0;
        *(_QWORD*)(v24 + 216) = v28;
        *(_QWORD*)(v24 + 296) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v24 + 328) = 1;
        *(_BYTE*)(v24 + 304) = 28;
        strcpy((char*)(v24 + 305), "IntensityLevel");
        fw_graphics_RegisterProperty((_QWORD*)v24, v24 + 296);
        result = v2[15];
        *(_BYTE*)(v24 + 332) = 0;
        *(_BYTE*)(v24 + 336) = 0;
        *(_QWORD*)(v24 + 344) = 0;
        *(_QWORD*)(v24 + 352) = 0;
        *(_QWORD*)(v24 + 360) = 0;
        *(_QWORD*)(v24 + 296) = v28;
        *(_DWORD*)(v24 + 368) = 0;
        v2[15] = v24;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
      }
      if (v2[17] == 0) {
        v29 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 1000, 16, 0);
        memset(v29, 0, 1000);
        fw_graphics_ConstructChara(v29);
        result = v2[17];
        v2[17] = v29;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
      }
      if (v2[21] == 0) {
        v33 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 288, 16, 0);
        memset(v33, 0, 288);
        *(_QWORD*)v33 = gfxa_DiffusionSetting_vtable;
        *(_BYTE*)(v33 + 64) = 16;
        *(_BYTE*)(v33 + 88) = 1;
        *(_QWORD*)(v33 + 56) = &gfx_settings_BaseParamInstance_vtable;
        *(_QWORD*)(v33 + 65) = 0x74736172746E6F43LL;
        fw_graphics_RegisterProperty((_QWORD*)v33, v33 + 56);
        *(_BYTE*)(v33 + 92) = 0;
        v37 = GameData_212e520[0];
        *(_BYTE*)(v33 + 96) = 0;
        *(_QWORD*)(v33 + 104) = 0;
        *(_QWORD*)(v33 + 112) = 0;
        *(_QWORD*)(v33 + 120) = 0;
        v38 = v37 + 16;
        *(_BYTE*)(v33 + 168) = 1;
        *(_DWORD*)(v33 + 128) = 1065353216;
        *(_QWORD*)(v33 + 56) = v37 + 16;
        *(_QWORD*)(v33 + 136) = &gfx_settings_BaseParamInstance_vtable;
        strcpy((char*)(v33 + 144), "\nAlpha");
        fw_graphics_RegisterProperty((_QWORD*)v33, v33 + 136);
        *(_QWORD*)(v33 + 136) = v38;
        *(_QWORD*)(v33 + 216) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v33 + 224) = 18;
        *(_BYTE*)(v33 + 172) = 0;
        *(_BYTE*)(v33 + 176) = 0;
        *(_QWORD*)(v33 + 184) = 0;
        *(_QWORD*)(v33 + 192) = 0;
        *(_QWORD*)(v33 + 200) = 0;
        *(_DWORD*)(v33 + 208) = 0;
        *(_BYTE*)(v33 + 248) = 1;
        strcpy((char*)(v33 + 225), "DebugDraw");
        fw_graphics_RegisterProperty((_QWORD*)v33, v33 + 216);
        result = v2[21];
        *(_WORD*)(v33 + 249) = 0;
        *(_QWORD*)(v33 + 256) = 0;
        *(_QWORD*)(v33 + 264) = 0;
        *(_QWORD*)(v33 + 272) = 0;
        *(_BYTE*)(v33 + 280) = 0;
        v2[21] = v33;
        *(_QWORD*)(v33 + 216) = gfx_settings_Bool_vtable;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
      }
      if (v2[22] == 0) {
        v39 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 288, 16, 0);
        memset(v39, 0, 288);
        *(_QWORD*)v39 = gfxa_CharaDiffusionSetting_vtable;
        *(_BYTE*)(v39 + 64) = 16;
        *(_BYTE*)(v39 + 88) = 1;
        *(_QWORD*)(v39 + 56) = &gfx_settings_BaseParamInstance_vtable;
        *(_QWORD*)(v39 + 65) = 0x74736172746E6F43LL;
        fw_graphics_RegisterProperty((_QWORD*)v39, v39 + 56);
        *(_BYTE*)(v39 + 92) = 0;
        v43 = GameData_212e520[0];
        *(_BYTE*)(v39 + 96) = 0;
        *(_QWORD*)(v39 + 104) = 0;
        *(_QWORD*)(v39 + 112) = 0;
        *(_QWORD*)(v39 + 120) = 0;
        v44 = v43 + 16;
        *(_BYTE*)(v39 + 168) = 1;
        *(_DWORD*)(v39 + 128) = 1065353216;
        *(_QWORD*)(v39 + 56) = v43 + 16;
        *(_QWORD*)(v39 + 136) = &gfx_settings_BaseParamInstance_vtable;
        strcpy((char*)(v39 + 144), "\nAlpha");
        fw_graphics_RegisterProperty((_QWORD*)v39, v39 + 136);
        *(_QWORD*)(v39 + 136) = v44;
        *(_QWORD*)(v39 + 216) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v39 + 224) = 18;
        *(_BYTE*)(v39 + 172) = 0;
        *(_BYTE*)(v39 + 176) = 0;
        *(_QWORD*)(v39 + 184) = 0;
        *(_QWORD*)(v39 + 192) = 0;
        *(_QWORD*)(v39 + 200) = 0;
        *(_DWORD*)(v39 + 208) = 0;
        *(_BYTE*)(v39 + 248) = 1;
        strcpy((char*)(v39 + 225), "DebugDraw");
        fw_graphics_RegisterProperty((_QWORD*)v39, v39 + 216);
        result = v2[22];
        *(_WORD*)(v39 + 249) = 0;
        *(_QWORD*)(v39 + 256) = 0;
        *(_QWORD*)(v39 + 264) = 0;
        *(_QWORD*)(v39 + 272) = 0;
        *(_BYTE*)(v39 + 280) = 0;
        v2[22] = v39;
        *(_QWORD*)(v39 + 216) = gfx_settings_Bool_vtable;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
      }
      if (v2[23] == 0) {
        v45 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 376, 16, 0);
        memset(v45, 0, 376);
        *(_QWORD*)v45 = gfxa_RadialBlurSetting_vtable;
        *(_BYTE*)(v45 + 64) = 16;
        *(_BYTE*)(v45 + 88) = 1;
        *(_QWORD*)(v45 + 56) = &gfx_settings_BaseParamInstance_vtable;
        *(_QWORD*)(v45 + 65) = 0x6874676E65727453LL;
        fw_graphics_RegisterProperty((_QWORD*)v45, v45 + 56);
        *(_BYTE*)(v45 + 92) = 0;
        *(_BYTE*)(v45 + 96) = 0;
        *(_QWORD*)(v45 + 104) = 0;
        *(_QWORD*)(v45 + 112) = 0;
        *(_QWORD*)(v45 + 120) = 0;
        v49 = GameData_212e520[0] + 16;
        *(_QWORD*)(v45 + 136) = &gfx_settings_BaseParamInstance_vtable;
        *(_DWORD*)(v45 + 128) = 0;
        *(_BYTE*)(v45 + 168) = 1;
        *(_BYTE*)(v45 + 144) = 26;
        *(_QWORD*)(v45 + 56) = v49;
        strcpy((char*)(v45 + 145), "SamplingCount");
        fw_graphics_RegisterProperty((_QWORD*)v45, v45 + 136);
        *(_BYTE*)(v45 + 172) = 0;
        *(_BYTE*)(v45 + 176) = 0;
        *(_QWORD*)(v45 + 184) = 0;
        *(_QWORD*)(v45 + 192) = 0;
        *(_QWORD*)(v45 + 136) = gfx_settings_Int_vtable;
        *(_QWORD*)(v45 + 216) = &gfx_settings_BaseParamInstance_vtable;
        *(_QWORD*)(v45 + 200) = 0;
        *(_DWORD*)(v45 + 208) = 8;
        *(_BYTE*)(v45 + 224) = 14;
        strcpy((char*)(v45 + 225), "CenterX");
        *(_BYTE*)(v45 + 248) = 1;
        fw_graphics_RegisterProperty((_QWORD*)v45, v45 + 216);
        *(_QWORD*)(v45 + 216) = v49;
        *(_BYTE*)(v45 + 252) = 0;
        *(_BYTE*)(v45 + 256) = 0;
        *(_QWORD*)(v45 + 264) = 0;
        *(_QWORD*)(v45 + 272) = 0;
        *(_QWORD*)(v45 + 280) = 0;
        *(_QWORD*)(v45 + 296) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v45 + 304) = 14;
        strcpy((char*)(v45 + 305), "CenterY");
        *(_DWORD*)(v45 + 288) = 1056964608;
        *(_BYTE*)(v45 + 328) = 1;
        fw_graphics_RegisterProperty((_QWORD*)v45, v45 + 296);
        result = v2[23];
        *(_BYTE*)(v45 + 332) = 0;
        *(_BYTE*)(v45 + 336) = 0;
        *(_QWORD*)(v45 + 344) = 0;
        *(_QWORD*)(v45 + 352) = 0;
        *(_QWORD*)(v45 + 360) = 0;
        *(_QWORD*)(v45 + 296) = v49;
        *(_DWORD*)(v45 + 368) = 1056964608;
        v2[23] = v45;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
      }
      if (v2[24] == 0) {
        v50 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 440, 16, 0);
        memset(v50, 0, 440);
        *(_QWORD*)v50 = gfxa_DoFSetting_vtable;
        *(_BYTE*)(v50 + 88) = 1;
        *(_BYTE*)(v50 + 64) = 8;
        *(_QWORD*)(v50 + 56) = &gfx_settings_BaseParamInstance_vtable;
        *(_DWORD*)(v50 + 65) = 1701080909;
        fw_graphics_RegisterProperty((_QWORD*)v50, v50 + 56);
        *(_BYTE*)(v50 + 92) = 0;
        *(_BYTE*)(v50 + 96) = 0;
        *(_QWORD*)(v50 + 104) = 0;
        *(_QWORD*)(v50 + 112) = 0;
        *(_QWORD*)(v50 + 120) = 0;
        *(_DWORD*)(v50 + 128) = 0;
        *(_BYTE*)(v50 + 144) = 16;
        *(_BYTE*)(v50 + 168) = 1;
        *(_QWORD*)(v50 + 56) = gfx_settings_Int_vtable;
        *(_QWORD*)(v50 + 136) = &gfx_settings_BaseParamInstance_vtable;
        strcpy((char*)(v50 + 145), "F_Number");
        fw_graphics_RegisterProperty((_QWORD*)v50, v50 + 136);
        *(_BYTE*)(v50 + 172) = 0;
        *(_BYTE*)(v50 + 176) = 0;
        *(_QWORD*)(v50 + 184) = 0;
        *(_QWORD*)(v50 + 192) = 0;
        *(_QWORD*)(v50 + 200) = 0;
        v54 = GameData_212e520[0] + 16;
        *(_DWORD*)(v50 + 208) = 1067030938;
        *(_QWORD*)(v50 + 216) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v50 + 248) = 1;
        *(_BYTE*)(v50 + 224) = 26;
        *(_QWORD*)(v50 + 136) = v54;
        strcpy((char*)(v50 + 225), "FocusDistance");
        fw_graphics_RegisterProperty((_QWORD*)v50, v50 + 216);
        *(_BYTE*)(v50 + 252) = 0;
        *(_BYTE*)(v50 + 256) = 0;
        *(_QWORD*)(v50 + 264) = 0;
        *(_QWORD*)(v50 + 272) = 0;
        *(_QWORD*)(v50 + 280) = 0;
        *(_QWORD*)(v50 + 216) = v54;
        *(_QWORD*)(v50 + 296) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v50 + 328) = 1;
        *(_DWORD*)(v50 + 288) = 1084227584;
        *(_BYTE*)(v50 + 304) = 18;
        strcpy((char*)(v50 + 305), "NearBokeh");
        fw_graphics_RegisterProperty((_QWORD*)v50, v50 + 296);
        *(_QWORD*)(v50 + 336) = 0;
        *(_QWORD*)(v50 + 344) = 0;
        *(_QWORD*)(v50 + 352) = 0;
        *(_BYTE*)(v50 + 360) = 0;
        *(_WORD*)(v50 + 329) = 0;
        *(_QWORD*)(v50 + 296) = gfx_settings_Bool_vtable;
        *(_QWORD*)(v50 + 368) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v50 + 400) = 1;
        *(_BYTE*)(v50 + 376) = 28;
        strcpy((char*)(v50 + 377), "TemporalFilter");
        fw_graphics_RegisterProperty((_QWORD*)v50, v50 + 368);
        result = v2[24];
        *(_QWORD*)(v50 + 408) = 0;
        *(_QWORD*)(v50 + 416) = 0;
        *(_QWORD*)(v50 + 424) = 0;
        *(_QWORD*)(v50 + 368) = gfx_settings_Bool_vtable;
        *(_BYTE*)(v50 + 432) = 1;
        v2[24] = v50;
        *(_WORD*)(v50 + 401) = 0;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
      }
      if (v2[25] == 0) {
        v55 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 2384, 16, 0);
        memset(v55, 0, 2384);
        fw_graphics_ConstructCharaSilhouette(v55);
        result = v2[25];
        v2[25] = v55;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
      }
      if (v2[26] == 0) {
        v59 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 440, 16, 0);
        memset(v59, 0, 440);
        *(_QWORD*)v59 = gfxa_CharaSelfShadowSetting_vtable;
        *(_BYTE*)(v59 + 64) = 14;
        *(_BYTE*)(v59 + 88) = 1;
        *(_QWORD*)(v59 + 56) = &gfx_settings_BaseParamInstance_vtable;
        *(_DWORD*)(v59 + 65) = 1650552389;
        *(_DWORD*)(v59 + 68) = 1684368482;
        fw_graphics_RegisterProperty((_QWORD*)v59, v59 + 56);
        *(_WORD*)(v59 + 89) = 0;
        *(_QWORD*)(v59 + 96) = 0;
        *(_QWORD*)(v59 + 104) = 0;
        *(_QWORD*)(v59 + 112) = 0;
        *(_BYTE*)(v59 + 120) = 1;
        *(_BYTE*)(v59 + 160) = 1;
        *(_BYTE*)(v59 + 136) = 24;
        *(_QWORD*)(v59 + 56) = gfx_settings_Bool_vtable;
        *(_QWORD*)(v59 + 128) = &gfx_settings_BaseParamInstance_vtable;
        strcpy((char*)(v59 + 137), "ToCameraRate");
        fw_graphics_RegisterProperty((_QWORD*)v59, v59 + 128);
        *(_BYTE*)(v59 + 164) = 0;
        *(_BYTE*)(v59 + 168) = 0;
        *(_QWORD*)(v59 + 176) = 0;
        *(_QWORD*)(v59 + 184) = 0;
        *(_QWORD*)(v59 + 192) = 0;
        v63 = GameData_212e520[0] + 16;
        *(_DWORD*)(v59 + 200) = 0;
        *(_BYTE*)(v59 + 240) = 1;
        *(_BYTE*)(v59 + 216) = 18;
        *(_QWORD*)(v59 + 128) = v63;
        *(_QWORD*)(v59 + 208) = &gfx_settings_BaseParamInstance_vtable;
        strcpy((char*)(v59 + 217), "FadeStart");
        fw_graphics_RegisterProperty((_QWORD*)v59, v59 + 208);
        *(_BYTE*)(v59 + 244) = 0;
        *(_BYTE*)(v59 + 248) = 0;
        *(_DWORD*)(v59 + 280) = 1092616192;
        *(_QWORD*)(v59 + 256) = 0;
        *(_QWORD*)(v59 + 264) = 0;
        *(_QWORD*)(v59 + 272) = 0;
        *(_QWORD*)(v59 + 208) = v63;
        *(_QWORD*)(v59 + 288) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v59 + 296) = 14;
        *(_BYTE*)(v59 + 320) = 1;
        strcpy((char*)(v59 + 297), "FadeEnd");
        fw_graphics_RegisterProperty((_QWORD*)v59, v59 + 288);
        *(_BYTE*)(v59 + 324) = 0;
        *(_BYTE*)(v59 + 328) = 0;
        *(_QWORD*)(v59 + 336) = 0;
        *(_QWORD*)(v59 + 344) = 0;
        *(_DWORD*)(v59 + 360) = 1101004800;
        *(_QWORD*)(v59 + 352) = 0;
        *(_QWORD*)(v59 + 288) = v63;
        *(_QWORD*)(v59 + 368) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v59 + 400) = 1;
        *(_BYTE*)(v59 + 376) = 30;
        strcpy((char*)(v59 + 377), "DebugVolumeShow");
        fw_graphics_RegisterProperty((_QWORD*)v59, v59 + 368);
        result = v2[26];
        *(_QWORD*)(v59 + 408) = 0;
        *(_QWORD*)(v59 + 416) = 0;
        *(_QWORD*)(v59 + 424) = 0;
        *(_QWORD*)(v59 + 368) = gfx_settings_Bool_vtable;
        *(_BYTE*)(v59 + 432) = 0;
        v2[26] = v59;
        *(_WORD*)(v59 + 401) = 0;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
      }
      if (v2[29] == 0) {
        v64 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 736, 16, 0);
        memset(v64, 0, 736);
        fw_graphics_ConstructVignette(v64);
        result = v2[29];
        v2[29] = v64;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
      }
      if (v2[31] == 0) {
        v68 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 288, 16, 0);
        memset(v68, 0, 288);
        *(_QWORD*)v68 = gfxa_NegaPosiReverseSetting_vtable;
        *(_BYTE*)(v68 + 88) = 1;
        *(_BYTE*)(v68 + 64) = 14;
        *(_QWORD*)(v68 + 56) = &gfx_settings_BaseParamInstance_vtable;
        *(_DWORD*)(v68 + 65) = 1650552389;
        *(_DWORD*)(v68 + 68) = 1684368482;
        fw_graphics_RegisterProperty((_QWORD*)v68, v68 + 56);
        *(_WORD*)(v68 + 89) = 0;
        *(_QWORD*)(v68 + 96) = 0;
        *(_QWORD*)(v68 + 104) = 0;
        *(_QWORD*)(v68 + 112) = 0;
        *(_BYTE*)(v68 + 120) = 0;
        *(_BYTE*)(v68 + 160) = 1;
        *(_QWORD*)(v68 + 56) = gfx_settings_Bool_vtable;
        *(_QWORD*)(v68 + 128) = &gfx_settings_BaseParamInstance_vtable;
        strcpy((char*)(v68 + 136), "\nGamma");
        fw_graphics_RegisterProperty((_QWORD*)v68, v68 + 128);
        *(_BYTE*)(v68 + 164) = 0;
        *(_BYTE*)(v68 + 168) = 0;
        *(_QWORD*)(v68 + 176) = 0;
        *(_QWORD*)(v68 + 184) = 0;
        *(_QWORD*)(v68 + 192) = 0;
        v72 = GameData_212e520[0] + 16;
        strcpy((char*)(v68 + 216), "\nAlpha");
        *(_BYTE*)(v68 + 240) = 1;
        *(_QWORD*)(v68 + 128) = v72;
        *(_QWORD*)(v68 + 208) = &gfx_settings_BaseParamInstance_vtable;
        *(_DWORD*)(v68 + 200) = 1074580685;
        fw_graphics_RegisterProperty((_QWORD*)v68, v68 + 208);
        result = v2[31];
        *(_BYTE*)(v68 + 244) = 0;
        *(_BYTE*)(v68 + 248) = 0;
        *(_QWORD*)(v68 + 256) = 0;
        *(_QWORD*)(v68 + 264) = 0;
        *(_QWORD*)(v68 + 272) = 0;
        *(_QWORD*)(v68 + 208) = v72;
        v2[31] = v68;
        *(_DWORD*)(v68 + 280) = 1065353216;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
      }
      if (v2[32] == 0) {
        v73 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 448, 16, 0);
        GameRoutine_18dcae0(v73);
        result = v2[32];
        v2[32] = v73;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
      }
      if (v2[34] == 0) {
        v74 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 576, 16, 0);
        memset(v74, 0, 576);
        *(_QWORD*)v74 = gfxa_SepiaSetting_vtable;
        *(_BYTE*)(v74 + 88) = 1;
        *(_BYTE*)(v74 + 64) = 14;
        *(_QWORD*)(v74 + 56) = &gfx_settings_BaseParamInstance_vtable;
        *(_DWORD*)(v74 + 65) = 1650552389;
        *(_DWORD*)(v74 + 68) = 1684368482;
        fw_graphics_RegisterProperty((_QWORD*)v74, v74 + 56);
        *(_WORD*)(v74 + 89) = 0;
        *(_QWORD*)(v74 + 96) = 0;
        *(_QWORD*)(v74 + 104) = 0;
        *(_QWORD*)(v74 + 112) = 0;
        *(_BYTE*)(v74 + 120) = 0;
        *(_BYTE*)(v74 + 160) = 1;
        *(_QWORD*)(v74 + 56) = gfx_settings_Bool_vtable;
        *(_QWORD*)(v74 + 128) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v74 + 136) = 4;
        strcpy((char*)(v74 + 137), "Cb");
        fw_graphics_RegisterProperty((_QWORD*)v74, v74 + 128);
        *(_BYTE*)(v74 + 164) = 0;
        *(_BYTE*)(v74 + 168) = 0;
        *(_QWORD*)(v74 + 176) = 0;
        *(_QWORD*)(v74 + 184) = 0;
        *(_QWORD*)(v74 + 192) = 0;
        v78 = GameData_212e520[0] + 16;
        *(_BYTE*)(v74 + 216) = 4;
        *(_BYTE*)(v74 + 240) = 1;
        *(_QWORD*)(v74 + 128) = v78;
        *(_QWORD*)(v74 + 208) = &gfx_settings_BaseParamInstance_vtable;
        *(_DWORD*)(v74 + 200) = -1110651699;
        strcpy((char*)(v74 + 217), "Cr");
        fw_graphics_RegisterProperty((_QWORD*)v74, v74 + 208);
        *(_QWORD*)(v74 + 208) = v78;
        *(_BYTE*)(v74 + 244) = 0;
        *(_BYTE*)(v74 + 248) = 0;
        *(_QWORD*)(v74 + 256) = 0;
        *(_QWORD*)(v74 + 264) = 0;
        *(_QWORD*)(v74 + 272) = 0;
        *(_QWORD*)(v74 + 288) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v74 + 296) = 30;
        *(_BYTE*)(v74 + 320) = 1;
        *(_DWORD*)(v74 + 280) = 1028443341;
        strcpy((char*)(v74 + 297), "MonotoneOpacity");
        fw_graphics_RegisterProperty((_QWORD*)v74, v74 + 288);
        *(_BYTE*)(v74 + 324) = 0;
        *(_BYTE*)(v74 + 328) = 0;
        *(_QWORD*)(v74 + 336) = 0;
        *(_QWORD*)(v74 + 344) = 0;
        *(_QWORD*)(v74 + 352) = 0;
        *(_QWORD*)(v74 + 288) = v78;
        *(_QWORD*)(v74 + 368) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v74 + 400) = 1;
        *(_DWORD*)(v74 + 360) = 1061997773;
        *(_BYTE*)(v74 + 376) = 26;
        strcpy((char*)(v74 + 377), "MultiplyColor");
        fw_graphics_RegisterProperty((_QWORD*)v74, v74 + 368);
        *(_BYTE*)(v74 + 416) = 0;
        *(_BYTE*)(v74 + 432) = 0;
        *(_QWORD*)(v74 + 448) = 0;
        *(_QWORD*)(v74 + 456) = 0;
        *(_QWORD*)(v74 + 368) = gfx_settings_Float3_vtable;
        *(_QWORD*)(v74 + 464) = 0;
        *(_QWORD*)(v74 + 496) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v74 + 504) = 30;
        *(_BYTE*)(v74 + 528) = 1;
        strcpy((char*)(v74 + 505), "MultiplyOpacity");
        *(_OWORD*)(v74 + 480) = GameData_1a82950;
        fw_graphics_RegisterProperty((_QWORD*)v74, v74 + 496);
        result = v2[34];
        *(_BYTE*)(v74 + 532) = 0;
        *(_BYTE*)(v74 + 536) = 0;
        *(_QWORD*)(v74 + 544) = 0;
        *(_QWORD*)(v74 + 552) = 0;
        *(_QWORD*)(v74 + 560) = 0;
        *(_QWORD*)(v74 + 496) = v78;
        v2[34] = v74;
        *(_DWORD*)(v74 + 568) = 1053609165;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
      }
      if (v2[36] == 0) {
        v79 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 1152, 16, 0);
        memset(v79, 0, 1152);
        fw_graphics_ConstructTimeSlip(v79);
        result = v2[36];
        v2[36] = v79;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
      }
      if (v2[38] == 0) {
        v83 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 288, 16, 0);
        memset(v83, 0, 288);
        *(_QWORD*)v83 = gfxa_GaussianBlurSetting_vtable;
        *(_BYTE*)(v83 + 88) = 1;
        *(_BYTE*)(v83 + 64) = 26;
        *(_QWORD*)(v83 + 56) = &gfx_settings_BaseParamInstance_vtable;
        qmemcpy((void*)(v83 + 65), "SamplingCount", 13);
        fw_graphics_RegisterProperty((_QWORD*)v83, v83 + 56);
        *(_BYTE*)(v83 + 92) = 0;
        *(_BYTE*)(v83 + 96) = 0;
        *(_QWORD*)(v83 + 104) = 0;
        *(_QWORD*)(v83 + 112) = 0;
        *(_QWORD*)(v83 + 120) = 0;
        *(_BYTE*)(v83 + 168) = 1;
        *(_QWORD*)(v83 + 56) = gfx_settings_Int_vtable;
        *(_DWORD*)(v83 + 128) = 2;
        *(_QWORD*)(v83 + 136) = &gfx_settings_BaseParamInstance_vtable;
        strcpy((char*)(v83 + 144), "\nAlpha");
        fw_graphics_RegisterProperty((_QWORD*)v83, v83 + 136);
        *(_BYTE*)(v83 + 172) = 0;
        v87 = GameData_212e520[0];
        *(_BYTE*)(v83 + 176) = 0;
        *(_QWORD*)(v83 + 184) = 0;
        *(_QWORD*)(v83 + 192) = 0;
        *(_QWORD*)(v83 + 200) = 0;
        *(_DWORD*)(v83 + 208) = 0;
        *(_BYTE*)(v83 + 248) = 1;
        *(_QWORD*)(v83 + 136) = v87 + 16;
        *(_QWORD*)(v83 + 216) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v83 + 224) = 14;
        strcpy((char*)(v83 + 225), "Capture");
        fw_graphics_RegisterProperty((_QWORD*)v83, v83 + 216);
        result = v2[38];
        *(_WORD*)(v83 + 249) = 0;
        *(_QWORD*)(v83 + 256) = 0;
        *(_QWORD*)(v83 + 264) = 0;
        *(_QWORD*)(v83 + 272) = 0;
        *(_BYTE*)(v83 + 280) = 0;
        v2[38] = v83;
        *(_QWORD*)(v83 + 216) = gfx_settings_Bool_vtable;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
      }
      if (v2[30] == 0) {
        v88 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 656, 16, 0);
        memset(v88, 0, 656);
        *(_QWORD*)v88 = gfxa_SightMapRenderSetting_vtable;
        *(_BYTE*)(v88 + 88) = 1;
        *(_BYTE*)(v88 + 64) = 30;
        *(_QWORD*)(v88 + 56) = &gfx_settings_BaseParamInstance_vtable;
        qmemcpy((void*)(v88 + 65), "EnabledEditMode", 15);
        fw_graphics_RegisterProperty((_QWORD*)v88, v88 + 56);
        *(_WORD*)(v88 + 89) = 0;
        *(_QWORD*)(v88 + 96) = 0;
        *(_QWORD*)(v88 + 104) = 0;
        *(_QWORD*)(v88 + 112) = 0;
        *(_BYTE*)(v88 + 120) = 0;
        *(_BYTE*)(v88 + 160) = 1;
        *(_QWORD*)(v88 + 56) = gfx_settings_Bool_vtable;
        *(_QWORD*)(v88 + 128) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v88 + 136) = 20;
        strcpy((char*)(v88 + 137), "NoiseScale");
        fw_graphics_RegisterProperty((_QWORD*)v88, v88 + 128);
        *(_BYTE*)(v88 + 164) = 0;
        *(_BYTE*)(v88 + 168) = 0;
        *(_QWORD*)(v88 + 176) = 0;
        *(_QWORD*)(v88 + 184) = 0;
        *(_QWORD*)(v88 + 192) = 0;
        v92 = GameData_212e520[0] + 16;
        *(_DWORD*)(v88 + 200) = 1069547520;
        *(_QWORD*)(v88 + 208) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v88 + 240) = 1;
        strcpy((char*)(v88 + 216), " NoiseScrollSpeed");
        *(_QWORD*)(v88 + 128) = v92;
        fw_graphics_RegisterProperty((_QWORD*)v88, v88 + 208);
        *(_BYTE*)(v88 + 244) = 0;
        *(_BYTE*)(v88 + 248) = 0;
        *(_QWORD*)(v88 + 256) = 0;
        *(_QWORD*)(v88 + 264) = 0;
        *(_DWORD*)(v88 + 280) = 0x40000000;
        *(_QWORD*)(v88 + 272) = 0;
        *(_QWORD*)(v88 + 208) = v92;
        *(_QWORD*)(v88 + 288) = &gfx_settings_BaseParamInstance_vtable;
        strcpy((char*)(v88 + 296), "\nColor");
        *(_BYTE*)(v88 + 320) = 1;
        fw_graphics_RegisterProperty((_QWORD*)v88, v88 + 288);
        *(_BYTE*)(v88 + 336) = 0;
        *(_BYTE*)(v88 + 352) = 0;
        *(_QWORD*)(v88 + 368) = 0;
        *(_QWORD*)(v88 + 376) = 0;
        *(_QWORD*)(v88 + 288) = gfx_settings_Float3_vtable;
        *(_QWORD*)(v88 + 384) = 0;
        *(_QWORD*)(v88 + 400) = 0;
        *(_QWORD*)(v88 + 408) = 0;
        *(_QWORD*)(v88 + 416) = &gfx_settings_BaseParamInstance_vtable;
        strcpy((char*)(v88 + 424), "\nAlpha");
        *(_BYTE*)(v88 + 448) = 1;
        fw_graphics_RegisterProperty((_QWORD*)v88, v88 + 416);
        *(_BYTE*)(v88 + 452) = 0;
        *(_BYTE*)(v88 + 456) = 0;
        *(_QWORD*)(v88 + 464) = 0;
        *(_QWORD*)(v88 + 472) = 0;
        *(_QWORD*)(v88 + 480) = 0;
        *(_QWORD*)(v88 + 416) = v92;
        *(_QWORD*)(v88 + 496) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v88 + 504) = 28;
        *(_BYTE*)(v88 + 528) = 1;
        *(_DWORD*)(v88 + 488) = 1063675494;
        strcpy((char*)(v88 + 505), "MinWorldHeight");
        fw_graphics_RegisterProperty((_QWORD*)v88, v88 + 496);
        *(_BYTE*)(v88 + 532) = 0;
        *(_BYTE*)(v88 + 536) = 0;
        *(_QWORD*)(v88 + 544) = 0;
        *(_QWORD*)(v88 + 552) = 0;
        *(_QWORD*)(v88 + 560) = 0;
        *(_QWORD*)(v88 + 496) = v92;
        *(_DWORD*)(v88 + 568) = 0;
        *(_QWORD*)(v88 + 576) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v88 + 584) = 28;
        *(_BYTE*)(v88 + 608) = 1;
        strcpy((char*)(v88 + 585), "MaxWorldHeight");
        fw_graphics_RegisterProperty((_QWORD*)v88, v88 + 576);
        result = v2[30];
        *(_BYTE*)(v88 + 612) = 0;
        *(_BYTE*)(v88 + 616) = 0;
        *(_QWORD*)(v88 + 624) = 0;
        *(_QWORD*)(v88 + 632) = 0;
        *(_QWORD*)(v88 + 640) = 0;
        *(_QWORD*)(v88 + 576) = v92;
        v2[30] = v88;
        *(_DWORD*)(v88 + 648) = 1103626240;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
      }
      if (v2[33] == 0) {
        v93 = (__int64*)fw_memory_g_heap_manager_ptr;
        v94 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 448, 16, 0);
        memset(v94, 0, 448);
        *(_QWORD*)v94 = gfxa_LensFlareSystemSetting_vtable;
        v98 = *v93;
        *(_QWORD*)(v94 + 56) = &gfx_settings_BaseParamInstance_vtable;
        v99 = (char*)fw_memory_HeapManager_Allocate(v98, 32, 16, 0);
        *(_QWORD*)(v94 + 64) = 33;
        *(_QWORD*)(v94 + 72) = 27;
        *(_QWORD*)(v94 + 80) = v99;
        *(_BYTE*)(v94 + 88) = 1;
        strcpy(v99, "LensFlareAttenuationEnabled");
        fw_graphics_RegisterProperty((_QWORD*)v94, v94 + 56);
        *(_WORD*)(v94 + 89) = 0;
        *(_QWORD*)(v94 + 96) = 0;
        *(_QWORD*)(v94 + 104) = 0;
        *(_QWORD*)(v94 + 112) = 0;
        *(_BYTE*)(v94 + 120) = 1;
        *(_BYTE*)(v94 + 160) = 1;
        *(_QWORD*)(v94 + 56) = gfx_settings_Bool_vtable;
        *(_QWORD*)(v94 + 128) = &gfx_settings_BaseParamInstance_vtable;
        strcpy((char*)(v94 + 136), "\"LensFlareMaxScale");
        fw_graphics_RegisterProperty((_QWORD*)v94, v94 + 128);
        *(_BYTE*)(v94 + 164) = 0;
        *(_BYTE*)(v94 + 168) = 0;
        *(_QWORD*)(v94 + 176) = 0;
        *(_QWORD*)(v94 + 184) = 0;
        *(_QWORD*)(v94 + 192) = 0;
        *(_DWORD*)(v94 + 200) = 1112014848;
        strcpy((char*)(v94 + 216), "\"LensFlareMinScale");
        *(_BYTE*)(v94 + 240) = 1;
        *(_QWORD*)(v94 + 128) = gfx_settings_Float_vtable;
        *(_QWORD*)(v94 + 208) = &gfx_settings_BaseParamInstance_vtable;
        fw_graphics_RegisterProperty((_QWORD*)v94, v94 + 208);
        *(_BYTE*)(v94 + 244) = 0;
        *(_BYTE*)(v94 + 248) = 0;
        *(_QWORD*)(v94 + 256) = 0;
        *(_QWORD*)(v94 + 264) = 0;
        *(_QWORD*)(v94 + 272) = 0;
        *(_QWORD*)(v94 + 208) = gfx_settings_Float_vtable;
        *(_QWORD*)(v94 + 288) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v94 + 320) = 1;
        *(_DWORD*)(v94 + 280) = 1097859072;
        *(_BYTE*)(v94 + 296) = 20;
        strcpy((char*)(v94 + 297), "SensorSize");
        fw_graphics_RegisterProperty((_QWORD*)v94, v94 + 288);
        *(_BYTE*)(v94 + 324) = 0;
        *(_BYTE*)(v94 + 328) = 0;
        *(_QWORD*)(v94 + 336) = 0;
        *(_QWORD*)(v94 + 344) = 0;
        *(_DWORD*)(v94 + 360) = 24;
        *(_QWORD*)(v94 + 352) = 0;
        *(_QWORD*)(v94 + 288) = gfx_settings_Int_vtable;
        *(_QWORD*)(v94 + 368) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v94 + 400) = 1;
        *(_BYTE*)(v94 + 376) = 28;
        strcpy((char*)(v94 + 377), "MoonSensorSize");
        fw_graphics_RegisterProperty((_QWORD*)v94, v94 + 368);
        result = v2[33];
        *(_BYTE*)(v94 + 404) = 0;
        *(_BYTE*)(v94 + 408) = 0;
        *(_QWORD*)(v94 + 416) = 0;
        *(_QWORD*)(v94 + 424) = 0;
        *(_QWORD*)(v94 + 432) = 0;
        *(_QWORD*)(v94 + 368) = gfx_settings_Int_vtable;
        v2[33] = v94;
        *(_DWORD*)(v94 + 440) = 84;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
      }
      if (v2[39] == 0) {
        v100 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 296, 16, 0);
        memset(v100, 0, 296);
        *(_QWORD*)v100 = gfxa_MotionBlurSetting_vtable;
        *(_BYTE*)(v100 + 88) = 1;
        *(_BYTE*)(v100 + 64) = 26;
        *(_QWORD*)(v100 + 56) = &gfx_settings_BaseParamInstance_vtable;
        qmemcpy((void*)(v100 + 65), "SamplingCount", 13);
        fw_graphics_RegisterProperty((_QWORD*)v100, v100 + 56);
        *(_BYTE*)(v100 + 92) = 0;
        *(_BYTE*)(v100 + 96) = 0;
        *(_QWORD*)(v100 + 104) = 0;
        *(_QWORD*)(v100 + 112) = 0;
        *(_QWORD*)(v100 + 120) = 0;
        *(_BYTE*)(v100 + 168) = 1;
        *(_QWORD*)(v100 + 56) = gfx_settings_Int_vtable;
        *(_DWORD*)(v100 + 128) = 8;
        *(_QWORD*)(v100 + 136) = &gfx_settings_BaseParamInstance_vtable;
        strcpy((char*)(v100 + 144), "\nAlpha");
        fw_graphics_RegisterProperty((_QWORD*)v100, v100 + 136);
        *(_BYTE*)(v100 + 172) = 0;
        *(_BYTE*)(v100 + 176) = 0;
        *(_QWORD*)(v100 + 184) = 0;
        *(_QWORD*)(v100 + 192) = 0;
        *(_QWORD*)(v100 + 200) = 0;
        v104 = GameData_212e520[0] + 16;
        *(_DWORD*)(v100 + 208) = 0;
        *(_BYTE*)(v100 + 248) = 1;
        *(_BYTE*)(v100 + 224) = 24;
        *(_QWORD*)(v100 + 136) = v104;
        *(_QWORD*)(v100 + 216) = &gfx_settings_BaseParamInstance_vtable;
        strcpy((char*)(v100 + 225), "ShutterSpeed");
        fw_graphics_RegisterProperty((_QWORD*)v100, v100 + 216);
        result = v2[39];
        *(_BYTE*)(v100 + 252) = 0;
        *(_BYTE*)(v100 + 256) = 0;
        *(_QWORD*)(v100 + 264) = 0;
        *(_QWORD*)(v100 + 272) = 0;
        *(_QWORD*)(v100 + 280) = 0;
        *(_QWORD*)(v100 + 216) = v104;
        v2[39] = v100;
        *(_DWORD*)(v100 + 288) = 1114636288;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
      }
      if (v2[45] == 0) {
        v105 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 296, 16, 0);
        memset(v105, 0, 296);
        *(_QWORD*)v105 = gfxa_GlobalVarsSetting_vtable;
        *(_BYTE*)(v105 + 88) = 1;
        *(_BYTE*)(v105 + 64) = 20;
        *(_QWORD*)(v105 + 56) = &gfx_settings_BaseParamInstance_vtable;
        *(_WORD*)(v105 + 73) = 28015;
        *(_QWORD*)(v105 + 65) = *(_QWORD*)"BmapToZoom";
        fw_graphics_RegisterProperty((_QWORD*)v105, v105 + 56);
        *(_BYTE*)(v105 + 92) = 0;
        *(_BYTE*)(v105 + 96) = 0;
        *(_QWORD*)(v105 + 104) = 0;
        *(_QWORD*)(v105 + 112) = 0;
        *(_QWORD*)(v105 + 120) = 0;
        v109 = GameData_212e520[0] + 16;
        *(_DWORD*)(v105 + 128) = 1065353216;
        *(_QWORD*)(v105 + 136) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v105 + 168) = 1;
        strcpy((char*)(v105 + 144), "(DitherAlphaBeginDist");
        *(_QWORD*)(v105 + 56) = v109;
        fw_graphics_RegisterProperty((_QWORD*)v105, v105 + 136);
        *(_QWORD*)(v105 + 216) = &gfx_settings_BaseParamInstance_vtable;
        *(_BYTE*)(v105 + 172) = 0;
        *(_DWORD*)(v105 + 208) = 1082130432;
        *(_BYTE*)(v105 + 176) = 0;
        *(_QWORD*)(v105 + 184) = 0;
        *(_QWORD*)(v105 + 192) = 0;
        *(_QWORD*)(v105 + 200) = 0;
        *(_QWORD*)(v105 + 136) = v109;
        *(_BYTE*)(v105 + 248) = 1;
        strcpy((char*)(v105 + 224), "$DitherAlphaEndDist");
        fw_graphics_RegisterProperty((_QWORD*)v105, v105 + 216);
        result = v2[45];
        *(_BYTE*)(v105 + 252) = 0;
        *(_BYTE*)(v105 + 256) = 0;
        *(_QWORD*)(v105 + 264) = 0;
        *(_QWORD*)(v105 + 272) = 0;
        *(_QWORD*)(v105 + 280) = 0;
        *(_QWORD*)(v105 + 216) = v109;
        v2[45] = v105;
        *(_DWORD*)(v105 + 288) = 1077936128;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
      }
      if (v2[42] == 0) {
        v110 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 1136, 16, 0);
        memset(v110, 0, 1136);
        fw_graphics_ConstructPainting(v110);
        result = v2[42];
        v2[42] = v110;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
      }
      if (v2[14] == 0) {
        v114 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
        *(_QWORD*)(v114 + 16) = 0;
        *(_QWORD*)(v114 + 24) = 0;
        *(_QWORD*)(v114 + 32) = 0;
        *(_QWORD*)(v114 + 40) = 0;
        v115 = v114;
        *(_QWORD*)(v114 + 48) = 0;
        *(_QWORD*)(v114 + 64) = 0;
        *(_QWORD*)(v114 + 72) = 0;
        *(_QWORD*)(v114 + 80) = 0;
        *(_QWORD*)(v114 + 88) = 0;
        *(_QWORD*)(v114 + 96) = 0;
        *(_QWORD*)(v114 + 104) = 0;
        *(_QWORD*)(v114 + 112) = 0;
        *(_QWORD*)(v114 + 120) = 0;
        *(_QWORD*)v114 = gfxa_CapsuleAOSetting_vtable;
        *(_QWORD*)(v114 + 8) = 0;
        *(_BYTE*)(v114 + 88) = 1;
        *(_QWORD*)(v114 + 56) = &gfx_settings_BaseParamInstance_vtable;
        v116 = (_QWORD*)(v114 + 56);
        *(_BYTE*)(v114 + 64) = 14;
        *(_DWORD*)(v114 + 68) = 1684368482;
        *(_DWORD*)(v114 + 65) = 1650552389;
        fw_graphics_RegisterProperty((_QWORD*)v114, v114 + 56);
        result = v2[14];
        *(_WORD*)(v115 + 89) = 0;
        *(_QWORD*)(v115 + 96) = 0;
        *(_QWORD*)(v115 + 104) = 0;
        *(_QWORD*)(v115 + 112) = 0;
        *(_BYTE*)(v115 + 120) = 1;
        v2[14] = v115;
        *v116 = gfx_settings_Bool_vtable;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
      }
    }
    if (v2[11] == 0) {
      v117 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1152, 16, 0);
      memset(v117, 0, 1152);
      fw_graphics_ConstructSceneShadow(v117);
      result = v2[11];
      v2[11] = v117;
      if (result != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
      }
    }
    if (v2[12] == 0) {
      v121 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 608, 16, 0);
      memset(v121, 0, 608);
      fw_graphics_ConstructAO(v121);
      result = v2[12];
      v2[12] = v121;
      if (result != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
      }
    }
    if (v2[13] == 0) {
      v125 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 376, 16, 0);
      memset(v125, 0, 376);
      *(_QWORD*)v125 = gfxa_WorldAOSetting_vtable;
      *(_BYTE*)(v125 + 88) = 1;
      qmemcpy((void*)(v125 + 64), " WorldAO_XZOffset", 17);
      *(_QWORD*)(v125 + 56) = &gfx_settings_BaseParamInstance_vtable;
      fw_graphics_RegisterProperty((_QWORD*)v125, v125 + 56);
      *(_BYTE*)(v125 + 92) = 0;
      *(_BYTE*)(v125 + 96) = 0;
      *(_QWORD*)(v125 + 104) = 0;
      *(_QWORD*)(v125 + 112) = 0;
      *(_QWORD*)(v125 + 120) = 0;
      v129 = GameData_212e520[0] + 16;
      *(_DWORD*)(v125 + 128) = 1036831949;
      *(_QWORD*)(v125 + 136) = &gfx_settings_BaseParamInstance_vtable;
      *(_BYTE*)(v125 + 144) = 26;
      *(_BYTE*)(v125 + 168) = 1;
      *(_QWORD*)(v125 + 56) = v129;
      strcpy((char*)(v125 + 145), "WorldAO_YBias");
      fw_graphics_RegisterProperty((_QWORD*)v125, v125 + 136);
      *(_QWORD*)(v125 + 216) = &gfx_settings_BaseParamInstance_vtable;
      *(_BYTE*)(v125 + 172) = 0;
      *(_BYTE*)(v125 + 176) = 0;
      *(_QWORD*)(v125 + 184) = 0;
      *(_QWORD*)(v125 + 192) = 0;
      *(_QWORD*)(v125 + 200) = 0;
      *(_QWORD*)(v125 + 136) = v129;
      *(_BYTE*)(v125 + 248) = 1;
      *(_DWORD*)(v125 + 208) = 1008981770;
      *(_BYTE*)(v125 + 224) = 22;
      strcpy((char*)(v125 + 225), "WorldAO_Pow");
      fw_graphics_RegisterProperty((_QWORD*)v125, v125 + 216);
      *(_BYTE*)(v125 + 252) = 0;
      *(_BYTE*)(v125 + 256) = 0;
      *(_QWORD*)(v125 + 264) = 0;
      *(_QWORD*)(v125 + 272) = 0;
      *(_DWORD*)(v125 + 288) = 0x40000000;
      *(_QWORD*)(v125 + 280) = 0;
      *(_QWORD*)(v125 + 216) = v129;
      *(_QWORD*)(v125 + 296) = &gfx_settings_BaseParamInstance_vtable;
      *(_BYTE*)(v125 + 304) = 26;
      *(_BYTE*)(v125 + 328) = 1;
      strcpy((char*)(v125 + 305), "WorldAO_MinAO");
      fw_graphics_RegisterProperty((_QWORD*)v125, v125 + 296);
      result = v2[13];
      *(_BYTE*)(v125 + 332) = 0;
      *(_BYTE*)(v125 + 336) = 0;
      *(_QWORD*)(v125 + 344) = 0;
      *(_QWORD*)(v125 + 352) = 0;
      *(_QWORD*)(v125 + 360) = 0;
      *(_QWORD*)(v125 + 296) = v129;
      *(_DWORD*)(v125 + 368) = 0;
      v2[13] = v125;
      if (result != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
      }
    }
    if (v2[43] == 0) {
      v130 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1448, 16, 0);
      memset(v130, 0, 1448);
      fw_graphics_ConstructSSR(v130);
      result = v2[43];
      v2[43] = v130;
      if (result != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
      }
    }
    if (v2[47] == 0) {
      v134 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 920, 16, 0);
      memset(v134, 0, 920);
      fw_graphics_ConstructContactShadow(v134);
      result = v2[47];
      v2[47] = v134;
      if (result != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
      }
    }
  }
  if (v2[8] == 0) {
    v138 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 976, 16, 0);
    memset(v138, 0, 976);
    fw_graphics_ConstructSceneExposure(v138);
    result = v2[8];
    v2[8] = v138;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  if (v2[16] == 0) {
    v142 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 1600, 16, 0);
    memset(v142, 0, 1600);
    fw_graphics_ConstructColorGrading(v142);
    result = v2[16];
    v2[16] = v142;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  if (v2[18] == 0) {
    v146 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 3024, 16, 0);
    memset(v146, 0, 3024);
    fw_graphics_ConstructCharaScene(v146);
    result = v2[18];
    v2[18] = v146;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  if (v2[19] == 0) {
    v150 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 2112, 16, 0);
    memset(v150, 0, 2112);
    fw_graphics_ConstructFog(v150);
    result = v2[19];
    v2[19] = v150;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  if (v2[40] == 0) {
    v154 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 1600, 16, 0);
    memset(v154, 0, 1600);
    fw_graphics_ConstructHeightFog(v154);
    result = v2[40];
    v2[40] = v154;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  if (v2[20] == 0) {
    v158 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 816, 16, 0);
    memset(v158, 0, 816);
    fw_graphics_ConstructGradationFilter(v158);
    result = v2[20];
    v2[20] = v158;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  if (v2[27] == 0) {
    v162 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 1440, 16, 0);
    memset(v162, 0, 1440);
    fw_graphics_ConstructSceneLight(v162);
    result = v2[27];
    v2[27] = v162;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  if (v2[35] == 0) {
    v166 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 1104, 16, 0);
    memset(v166, 0, 1104);
    fw_graphics_ConstructShadowColorCorrection(v166);
    result = v2[35];
    v2[35] = v166;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  if (v2[28] == 0) {
    v170 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 2288, 16, 0);
    memset(v170, 0, 2288);
    fw_graphics_ConstructCloud(v170);
    result = v2[28];
    v2[28] = v170;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  if (v2[37] == 0) {
    v174 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 840, 16, 0);
    memset(v174, 0, 840);
    fw_graphics_ConstructSkyBlur(v174);
    result = v2[37];
    v2[37] = v174;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  if (v2[41] == 0) {
    v178 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 680, 16, 0);
    memset(v178, 0, 680);
    fw_graphics_ConstructMirage(v178);
    result = v2[41];
    v2[41] = v178;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  if (v2[44] == 0) {
    v182 = (__int64*)fw_memory_g_heap_manager_ptr;
    v183 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 352, 16, 0);
    memset(v183, 0, 352);
    *(_QWORD*)v183 = gfxa_VFXSetting_vtable;
    *(_BYTE*)(v183 + 88) = 1;
    qmemcpy((void*)(v183 + 64), " StarrySkyOpacity", 17);
    *(_QWORD*)(v183 + 56) = &gfx_settings_BaseParamInstance_vtable;
    fw_graphics_RegisterProperty((_QWORD*)v183, v183 + 56);
    *(_BYTE*)(v183 + 92) = 0;
    *(_BYTE*)(v183 + 96) = 0;
    *(_QWORD*)(v183 + 104) = 0;
    *(_QWORD*)(v183 + 112) = 0;
    *(_QWORD*)(v183 + 120) = 0;
    v187 = *v182;
    v188 = GameData_212e520[0] + 16;
    *(_DWORD*)(v183 + 128) = 1065353216;
    *(_QWORD*)(v183 + 56) = v188;
    *(_QWORD*)(v183 + 144) = &gfx_settings_BaseParamInstance_vtable;
    v189 = (char*)fw_memory_HeapManager_Allocate(v187, 32, 16, 0);
    *(_BYTE*)(v183 + 176) = 1;
    *(_QWORD*)(v183 + 152) = 33;
    *(_QWORD*)(v183 + 160) = 25;
    *(_QWORD*)(v183 + 168) = v189;
    strcpy(v189, "LightShaftColorMultiplier");
    fw_graphics_RegisterProperty((_QWORD*)v183, v183 + 144);
    *(_BYTE*)(v183 + 192) = 0;
    *(_BYTE*)(v183 + 208) = 0;
    *(_QWORD*)(v183 + 224) = 0;
    *(_QWORD*)(v183 + 232) = 0;
    *(_QWORD*)(v183 + 144) = gfx_settings_Float3_vtable;
    *(_QWORD*)(v183 + 240) = 0;
    *(_QWORD*)(v183 + 272) = &gfx_settings_BaseParamInstance_vtable;
    *(_BYTE*)(v183 + 304) = 1;
    strcpy((char*)(v183 + 280), "&LightShaftIntensity");
    *(_OWORD*)(v183 + 256) = GameData_1a837f0;
    fw_graphics_RegisterProperty((_QWORD*)v183, v183 + 272);
    result = v2[44];
    *(_BYTE*)(v183 + 308) = 0;
    *(_BYTE*)(v183 + 312) = 0;
    *(_QWORD*)(v183 + 320) = 0;
    *(_QWORD*)(v183 + 328) = 0;
    *(_QWORD*)(v183 + 336) = 0;
    *(_QWORD*)(v183 + 272) = v188;
    *(_DWORD*)(v183 + 344) = 1065353216;
    v2[44] = v183;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  if (v2[46] == 0) {
    v190 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 616, 16, 0);
    memset(v190, 0, 616);
    fw_graphics_ConstructTranslucency(v190);
    result = v2[46];
    v2[46] = v190;
    if (result != 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  return result;
}

__int64 gfxa_ab69a0(__int64 result)
{
  __int64* v1;
  __int64 v2;
  _DWORD* v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  _DWORD* v24;
  __int64 v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  __int64 v43;
  __int64 v44;
  char* v45;
  __int64 v46;
  __int64 v47;
  _DWORD* v48;
  __int64 v49;
  __int64 v50;
  char* v51;
  __int64 v52;
  __int64 v53;
  char* v54;
  __int64 v55;
  __int64 v56;
  char* v57;
  __int64 v58;
  __int64 v59;
  char* v60;
  __int64 v61;
  __int64 v62;
  _DWORD* v63;
  __int64 v64;
  __int64 v65;
  char* v66;
  __int64 v67;
  __int64 v68;
  char* v69;
  __int64 v70;
  __int64 v71;
  char* v72;
  __int64 v73;
  __int64 v74;
  char* v75;
  __int64 v76;
  __int64 v77;
  char* v78;
  __int64 v79;
  __int64 v80;
  char* v81;
  __int64 v82;
  __int64 v83;
  char* v84;
  __int64 v85;
  __int64 v86;
  char* v87;
  __int64 v88;
  __int64 v89;
  char* v90;
  __int64 v91;
  __int64 v92;
  char* v93;
  __int64 v94;
  __int64 v95;
  char* v96;
  __int64 v97;
  __int64 v98;
  char* v99;
  __int64 v100;
  __int64 v101;
  char* v102;
  __int64 v103;
  __int64 v104;
  char* v105;
  __int64 v106;
  __int64 v107;
  char* v108;
  __int64 v109;
  __int64 v110;
  char* v111;
  __int64 v112;
  __int64 v113;
  char* v114;
  __int64 v115;
  __int64 v116;
  char* v117;
  __int64 v118;
  __int64 v119;
  _DWORD* v120;
  __int64 v121;
  __int64 v122;
  char* v123;
  __int64 v124;
  char* v125;

  **(_QWORD**)(result + 8) = *(_QWORD*)(result + 48);
  v1 = *(__int64**)(result + 8);
  v2 = *v1;
  if (*v1 != 0) {
    if ((*(_BYTE*)(v2 + 8) & 1) != 0) {
      *(_QWORD*)(v2 + 16) = 3;
      v3 = *(_DWORD**)(v2 + 24);
    }
    else {
      *(_BYTE*)(v2 + 8) = 6;
      v3 = (_DWORD*)(v2 + 9);
    }
    *v3 = 7761477;
    v1 = *(__int64**)(result + 8);
  }
  v1[10] = *(_QWORD*)(result + 56);
  v4 = *(_QWORD*)(result + 8);
  v5 = *(_QWORD*)(v4 + 80);
  if (v5 != 0) {
    if ((*(_BYTE*)(v5 + 8) & 1) != 0) {
      *(_QWORD*)(v5 + 16) = 12;
      v6 = *(char**)(v5 + 24);
    }
    else {
      *(_BYTE*)(v5 + 8) = 24;
      v6 = (char*)(v5 + 9);
    }
    strcpy(v6, "BaseExposure");
    v4 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v4 + 88) = *(_QWORD*)(result + 64);
  v7 = *(_QWORD*)(result + 8);
  v8 = *(_QWORD*)(v7 + 88);
  if (v8 != 0) {
    if ((*(_BYTE*)(v8 + 8) & 1) != 0) {
      *(_QWORD*)(v8 + 16) = 13;
      v9 = *(char**)(v8 + 24);
    }
    else {
      *(_BYTE*)(v8 + 8) = 26;
      v9 = (char*)(v8 + 9);
    }
    strcpy(v9, "SceneExposure");
    v7 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v7 + 96) = *(_QWORD*)(result + 72);
  v10 = *(_QWORD*)(result + 8);
  v11 = *(_QWORD*)(v10 + 96);
  if (v11 != 0) {
    if ((*(_BYTE*)(v11 + 8) & 1) != 0) {
      *(_QWORD*)(v11 + 16) = 11;
      v12 = *(char**)(v11 + 24);
    }
    else {
      *(_BYTE*)(v11 + 8) = 22;
      v12 = (char*)(v11 + 9);
    }
    strcpy(v12, "AppExposure");
    v10 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v10 + 24) = *(_QWORD*)(result + 80);
  v13 = *(_QWORD*)(result + 8);
  v14 = *(_QWORD*)(v13 + 24);
  if (v14 != 0) {
    if ((*(_BYTE*)(v14 + 8) & 1) != 0) {
      *(_QWORD*)(v14 + 16) = 10;
      v15 = *(char**)(v14 + 24);
    }
    else {
      *(_BYTE*)(v14 + 8) = 20;
      v15 = (char*)(v14 + 9);
    }
    strcpy(v15, "BaseShadow");
    v13 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v13 + 32) = *(_QWORD*)(result + 88);
  v16 = *(_QWORD*)(result + 8);
  v17 = *(_QWORD*)(v16 + 32);
  if (v17 != 0) {
    if ((*(_BYTE*)(v17 + 8) & 1) != 0) {
      *(_QWORD*)(v17 + 16) = 11;
      v18 = *(char**)(v17 + 24);
    }
    else {
      *(_BYTE*)(v17 + 8) = 22;
      v18 = (char*)(v17 + 9);
    }
    strcpy(v18, "SceneShadow");
    v16 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v16 + 40) = *(_QWORD*)(result + 376);
  v19 = *(_QWORD*)(result + 8);
  v20 = *(_QWORD*)(v19 + 40);
  if (v20 != 0) {
    if ((*(_BYTE*)(v20 + 8) & 1) != 0) {
      *(_QWORD*)(v20 + 16) = 13;
      v21 = *(char**)(v20 + 24);
    }
    else {
      *(_BYTE*)(v20 + 8) = 26;
      v21 = (char*)(v20 + 9);
    }
    strcpy(v21, "ContactShadow");
    v19 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v19 + 48) = *(_QWORD*)(result + 344);
  v22 = *(_QWORD*)(result + 8);
  v23 = *(_QWORD*)(v22 + 48);
  if (v23 != 0) {
    if ((*(_BYTE*)(v23 + 8) & 1) != 0) {
      *(_QWORD*)(v23 + 16) = 3;
      v24 = *(_DWORD**)(v23 + 24);
    }
    else {
      *(_BYTE*)(v23 + 8) = 6;
      v24 = (_DWORD*)(v23 + 9);
    }
    *v24 = 5395283;
    v22 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v22 + 56) = *(_QWORD*)(result + 96);
  v25 = *(_QWORD*)(result + 8);
  v26 = *(_QWORD*)(v25 + 56);
  if (v26 != 0) {
    if ((*(_BYTE*)(v26 + 8) & 1) != 0) {
      *(_QWORD*)(v26 + 16) = 2;
      v27 = *(char**)(v26 + 24);
    }
    else {
      *(_BYTE*)(v26 + 8) = 4;
      v27 = (char*)(v26 + 9);
    }
    strcpy(v27, "AO");
    v25 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v25 + 72) = *(_QWORD*)(result + 104);
  v28 = *(_QWORD*)(result + 8);
  v29 = *(_QWORD*)(v28 + 72);
  if (v29 != 0) {
    if ((*(_BYTE*)(v29 + 8) & 1) != 0) {
      *(_QWORD*)(v29 + 16) = 7;
      v30 = *(char**)(v29 + 24);
    }
    else {
      *(_BYTE*)(v29 + 8) = 14;
      v30 = (char*)(v29 + 9);
    }
    strcpy(v30, "WorldAO");
    v28 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v28 + 64) = *(_QWORD*)(result + 112);
  v31 = *(_QWORD*)(result + 8);
  v32 = *(_QWORD*)(v31 + 64);
  if (v32 != 0) {
    if ((*(_BYTE*)(v32 + 8) & 1) != 0) {
      *(_QWORD*)(v32 + 16) = 9;
      v33 = *(char**)(v32 + 24);
    }
    else {
      *(_BYTE*)(v32 + 8) = 18;
      v33 = (char*)(v32 + 9);
    }
    strcpy(v33, "CapsuleAO");
    v31 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v31 + 176) = *(_QWORD*)(result + 120);
  v34 = *(_QWORD*)(result + 8);
  v35 = *(_QWORD*)(v34 + 176);
  if (v35 != 0) {
    if ((*(_BYTE*)(v35 + 8) & 1) != 0) {
      *(_QWORD*)(v35 + 16) = 5;
      v36 = *(char**)(v35 + 24);
    }
    else {
      *(_BYTE*)(v35 + 8) = 10;
      v36 = (char*)(v35 + 9);
    }
    strcpy(v36, "Bloom");
    v34 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v34 + 200) = *(_QWORD*)(result + 128);
  v37 = *(_QWORD*)(result + 8);
  v38 = *(_QWORD*)(v37 + 200);
  if (v38 != 0) {
    if ((*(_BYTE*)(v38 + 8) & 1) != 0) {
      *(_QWORD*)(v38 + 16) = 12;
      v39 = *(char**)(v38 + 24);
    }
    else {
      *(_BYTE*)(v38 + 8) = 24;
      v39 = (char*)(v38 + 9);
    }
    strcpy(v39, "ColorGrading");
    v37 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v37 + 216) = *(_QWORD*)(result + 136);
  v40 = *(_QWORD*)(result + 8);
  v41 = *(_QWORD*)(v40 + 216);
  if (v41 != 0) {
    if ((*(_BYTE*)(v41 + 8) & 1) != 0) {
      *(_QWORD*)(v41 + 16) = 5;
      v42 = *(char**)(v41 + 24);
    }
    else {
      *(_BYTE*)(v41 + 8) = 10;
      v42 = (char*)(v41 + 9);
    }
    strcpy(v42, "Chara");
    v40 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v40 + 224) = *(_QWORD*)(result + 144);
  v43 = *(_QWORD*)(result + 8);
  v44 = *(_QWORD*)(v43 + 224);
  if (v44 != 0) {
    if ((*(_BYTE*)(v44 + 8) & 1) != 0) {
      *(_QWORD*)(v44 + 16) = 10;
      v45 = *(char**)(v44 + 24);
    }
    else {
      *(_BYTE*)(v44 + 8) = 20;
      v45 = (char*)(v44 + 9);
    }
    strcpy(v45, "CharaScene");
    v43 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v43 + 104) = *(_QWORD*)(result + 152);
  v46 = *(_QWORD*)(result + 8);
  v47 = *(_QWORD*)(v46 + 104);
  if (v47 != 0) {
    if ((*(_BYTE*)(v47 + 8) & 1) != 0) {
      *(_QWORD*)(v47 + 16) = 3;
      v48 = *(_DWORD**)(v47 + 24);
    }
    else {
      *(_BYTE*)(v47 + 8) = 6;
      v48 = (_DWORD*)(v47 + 9);
    }
    *v48 = 6778694;
    v46 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v46 + 192) = *(_QWORD*)(result + 160);
  v49 = *(_QWORD*)(result + 8);
  v50 = *(_QWORD*)(v49 + 192);
  if (v50 != 0) {
    if ((*(_BYTE*)(v50 + 8) & 1) != 0) {
      *(_QWORD*)(v50 + 16) = 15;
      v51 = *(char**)(v50 + 24);
    }
    else {
      *(_BYTE*)(v50 + 8) = 30;
      v51 = (char*)(v50 + 9);
    }
    strcpy(v51, "GradationFilter");
    v49 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v49 + 136) = *(_QWORD*)(result + 168);
  v52 = *(_QWORD*)(result + 8);
  v53 = *(_QWORD*)(v52 + 136);
  if (v53 != 0) {
    if ((*(_BYTE*)(v53 + 8) & 1) != 0) {
      *(_QWORD*)(v53 + 16) = 9;
      v54 = *(char**)(v53 + 24);
    }
    else {
      *(_BYTE*)(v53 + 8) = 18;
      v54 = (char*)(v53 + 9);
    }
    strcpy(v54, "Diffusion");
    v52 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v52 + 144) = *(_QWORD*)(result + 176);
  v55 = *(_QWORD*)(result + 8);
  v56 = *(_QWORD*)(v55 + 144);
  if (v56 != 0) {
    if ((*(_BYTE*)(v56 + 8) & 1) != 0) {
      *(_QWORD*)(v56 + 16) = 14;
      v57 = *(char**)(v56 + 24);
    }
    else {
      *(_BYTE*)(v56 + 8) = 28;
      v57 = (char*)(v56 + 9);
    }
    strcpy(v57, "CharaDiffusion");
    v55 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v55 + 168) = *(_QWORD*)(result + 184);
  v58 = *(_QWORD*)(result + 8);
  v59 = *(_QWORD*)(v58 + 168);
  if (v59 != 0) {
    if ((*(_BYTE*)(v59 + 8) & 1) != 0) {
      *(_QWORD*)(v59 + 16) = 10;
      v60 = *(char**)(v59 + 24);
    }
    else {
      *(_BYTE*)(v59 + 8) = 20;
      v60 = (char*)(v59 + 9);
    }
    strcpy(v60, "RadialBlur");
    v58 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v58 + 128) = *(_QWORD*)(result + 192);
  v61 = *(_QWORD*)(result + 8);
  v62 = *(_QWORD*)(v61 + 128);
  if (v62 != 0) {
    if ((*(_BYTE*)(v62 + 8) & 1) != 0) {
      *(_QWORD*)(v62 + 16) = 3;
      v63 = *(_DWORD**)(v62 + 24);
    }
    else {
      *(_BYTE*)(v62 + 8) = 6;
      v63 = (_DWORD*)(v62 + 9);
    }
    *v63 = 4616004;
    v61 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v61 + 232) = *(_QWORD*)(result + 200);
  v64 = *(_QWORD*)(result + 8);
  v65 = *(_QWORD*)(v64 + 232);
  if (v65 != 0) {
    if ((*(_BYTE*)(v65 + 8) & 1) != 0) {
      *(_QWORD*)(v65 + 16) = 15;
      v66 = *(char**)(v65 + 24);
    }
    else {
      *(_BYTE*)(v65 + 8) = 30;
      v66 = (char*)(v65 + 9);
    }
    strcpy(v66, "CharaSilhouette");
    v64 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v64 + 240) = *(_QWORD*)(result + 208);
  v67 = *(_QWORD*)(result + 8);
  v68 = *(_QWORD*)(v67 + 240);
  if (v68 != 0) {
    if ((*(_BYTE*)(v68 + 8) & 1) != 0) {
      *(_QWORD*)(v68 + 16) = 15;
      v69 = *(char**)(v68 + 24);
    }
    else {
      *(_BYTE*)(v68 + 8) = 30;
      v69 = (char*)(v68 + 9);
    }
    strcpy(v69, "CharaSelfShadow");
    v67 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v67 + 8) = *(_QWORD*)(result + 216);
  v70 = *(_QWORD*)(result + 8);
  v71 = *(_QWORD*)(v70 + 8);
  if (v71 != 0) {
    if ((*(_BYTE*)(v71 + 8) & 1) != 0) {
      *(_QWORD*)(v71 + 16) = 10;
      v72 = *(char**)(v71 + 24);
    }
    else {
      *(_BYTE*)(v71 + 8) = 20;
      v72 = (char*)(v71 + 9);
    }
    strcpy(v72, "SceneLight");
    v70 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v70 + 120) = *(_QWORD*)(result + 224);
  v73 = *(_QWORD*)(result + 8);
  v74 = *(_QWORD*)(v73 + 120);
  if (v74 != 0) {
    if ((*(_BYTE*)(v74 + 8) & 1) != 0) {
      *(_QWORD*)(v74 + 16) = 5;
      v75 = *(char**)(v74 + 24);
    }
    else {
      *(_BYTE*)(v74 + 8) = 10;
      v75 = (char*)(v74 + 9);
    }
    strcpy(v75, "Cloud");
    v73 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v73 + 184) = *(_QWORD*)(result + 232);
  v76 = *(_QWORD*)(result + 8);
  v77 = *(_QWORD*)(v76 + 184);
  if (v77 != 0) {
    if ((*(_BYTE*)(v77 + 8) & 1) != 0) {
      *(_QWORD*)(v77 + 16) = 8;
      v78 = *(char**)(v77 + 24);
    }
    else {
      *(_BYTE*)(v77 + 8) = 16;
      v78 = (char*)(v77 + 9);
    }
    strcpy(v78, "Vignette");
    v76 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v76 + 248) = *(_QWORD*)(result + 240);
  v79 = *(_QWORD*)(result + 8);
  v80 = *(_QWORD*)(v79 + 248);
  if (v80 != 0) {
    if ((*(_BYTE*)(v80 + 8) & 1) != 0) {
      *(_QWORD*)(v80 + 16) = 14;
      v81 = *(char**)(v80 + 24);
    }
    else {
      *(_BYTE*)(v80 + 8) = 28;
      v81 = (char*)(v80 + 9);
    }
    strcpy(v81, "SightMapRender");
    v79 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v79 + 256) = *(_QWORD*)(result + 248);
  v82 = *(_QWORD*)(result + 8);
  v83 = *(_QWORD*)(v82 + 256);
  if (v83 != 0) {
    if ((*(_BYTE*)(v83 + 8) & 1) != 0) {
      *(_QWORD*)(v83 + 16) = 15;
      v84 = *(char**)(v83 + 24);
    }
    else {
      *(_BYTE*)(v83 + 8) = 30;
      v84 = (char*)(v83 + 9);
    }
    strcpy(v84, "NegaPosiReverse");
    v82 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v82 + 160) = *(_QWORD*)(result + 256);
  v85 = *(_QWORD*)(result + 8);
  v86 = *(_QWORD*)(v85 + 160);
  if (v86 != 0) {
    if ((*(_BYTE*)(v86 + 8) & 1) != 0) {
      *(_QWORD*)(v86 + 16) = 8;
      v87 = *(char**)(v86 + 24);
    }
    else {
      *(_BYTE*)(v86 + 8) = 16;
      v87 = (char*)(v86 + 9);
    }
    strcpy(v87, "Upscaler");
    v85 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v85 + 272) = *(_QWORD*)(result + 264);
  v88 = *(_QWORD*)(result + 8);
  v89 = *(_QWORD*)(v88 + 272);
  if (v89 != 0) {
    if ((*(_BYTE*)(v89 + 8) & 1) != 0) {
      *(_QWORD*)(v89 + 16) = 15;
      v90 = *(char**)(v89 + 24);
    }
    else {
      *(_BYTE*)(v89 + 8) = 30;
      v90 = (char*)(v89 + 9);
    }
    strcpy(v90, "LensFlareSystem");
    v88 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v88 + 280) = *(_QWORD*)(result + 272);
  v91 = *(_QWORD*)(result + 8);
  v92 = *(_QWORD*)(v91 + 280);
  if (v92 != 0) {
    if ((*(_BYTE*)(v92 + 8) & 1) != 0) {
      *(_QWORD*)(v92 + 16) = 5;
      v93 = *(char**)(v92 + 24);
    }
    else {
      *(_BYTE*)(v92 + 8) = 10;
      v93 = (char*)(v92 + 9);
    }
    strcpy(v93, "Sepia");
    v91 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v91 + 16) = *(_QWORD*)(result + 280);
  v94 = *(_QWORD*)(result + 8);
  v95 = *(_QWORD*)(v94 + 16);
  if (v95 != 0) {
    if ((*(_BYTE*)(v95 + 8) & 1) != 0) {
      *(_QWORD*)(v95 + 16) = 21;
      v96 = *(char**)(v95 + 24);
    }
    else {
      *(_BYTE*)(v95 + 8) = 42;
      v96 = (char*)(v95 + 9);
    }
    strcpy(v96, "ShadowColorCorrection");
    v94 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v94 + 288) = *(_QWORD*)(result + 288);
  v97 = *(_QWORD*)(result + 8);
  v98 = *(_QWORD*)(v97 + 288);
  if (v98 != 0) {
    if ((*(_BYTE*)(v98 + 8) & 1) != 0) {
      *(_QWORD*)(v98 + 16) = 8;
      v99 = *(char**)(v98 + 24);
    }
    else {
      *(_BYTE*)(v98 + 8) = 16;
      v99 = (char*)(v98 + 9);
    }
    strcpy(v99, "TimeSlip");
    v97 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v97 + 296) = *(_QWORD*)(result + 296);
  v100 = *(_QWORD*)(result + 8);
  v101 = *(_QWORD*)(v100 + 296);
  if (v101 != 0) {
    if ((*(_BYTE*)(v101 + 8) & 1) != 0) {
      *(_QWORD*)(v101 + 16) = 7;
      v102 = *(char**)(v101 + 24);
    }
    else {
      *(_BYTE*)(v101 + 8) = 14;
      v102 = (char*)(v101 + 9);
    }
    strcpy(v102, "SkyBlur");
    v100 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v100 + 304) = *(_QWORD*)(result + 304);
  v103 = *(_QWORD*)(result + 8);
  v104 = *(_QWORD*)(v103 + 304);
  if (v104 != 0) {
    if ((*(_BYTE*)(v104 + 8) & 1) != 0) {
      *(_QWORD*)(v104 + 16) = 12;
      v105 = *(char**)(v104 + 24);
    }
    else {
      *(_BYTE*)(v104 + 8) = 24;
      v105 = (char*)(v104 + 9);
    }
    strcpy(v105, "GaussianBlur");
    v103 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v103 + 320) = *(_QWORD*)(result + 312);
  v106 = *(_QWORD*)(result + 8);
  v107 = *(_QWORD*)(v106 + 320);
  if (v107 != 0) {
    if ((*(_BYTE*)(v107 + 8) & 1) != 0) {
      *(_QWORD*)(v107 + 16) = 10;
      v108 = *(char**)(v107 + 24);
    }
    else {
      *(_BYTE*)(v107 + 8) = 20;
      v108 = (char*)(v107 + 9);
    }
    strcpy(v108, "MotionBlur");
    v106 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v106 + 112) = *(_QWORD*)(result + 320);
  v109 = *(_QWORD*)(result + 8);
  v110 = *(_QWORD*)(v109 + 112);
  if (v110 != 0) {
    if ((*(_BYTE*)(v110 + 8) & 1) != 0) {
      *(_QWORD*)(v110 + 16) = 9;
      v111 = *(char**)(v110 + 24);
    }
    else {
      *(_BYTE*)(v110 + 8) = 18;
      v111 = (char*)(v110 + 9);
    }
    strcpy(v111, "HeightFog");
    v109 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v109 + 328) = *(_QWORD*)(result + 328);
  v112 = *(_QWORD*)(result + 8);
  v113 = *(_QWORD*)(v112 + 328);
  if (v113 != 0) {
    if ((*(_BYTE*)(v113 + 8) & 1) != 0) {
      *(_QWORD*)(v113 + 16) = 6;
      v114 = *(char**)(v113 + 24);
    }
    else {
      *(_BYTE*)(v113 + 8) = 12;
      v114 = (char*)(v113 + 9);
    }
    strcpy(v114, "Mirage");
    v112 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v112 + 336) = *(_QWORD*)(result + 336);
  v115 = *(_QWORD*)(result + 8);
  v116 = *(_QWORD*)(v115 + 336);
  if (v116 != 0) {
    if ((*(_BYTE*)(v116 + 8) & 1) != 0) {
      *(_QWORD*)(v116 + 16) = 8;
      v117 = *(char**)(v116 + 24);
    }
    else {
      *(_BYTE*)(v116 + 8) = 16;
      v117 = (char*)(v116 + 9);
    }
    strcpy(v117, "Painting");
    v115 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v115 + 264) = *(_QWORD*)(result + 352);
  v118 = *(_QWORD*)(result + 8);
  v119 = *(_QWORD*)(v118 + 264);
  if (v119 != 0) {
    if ((*(_BYTE*)(v119 + 8) & 1) != 0) {
      *(_QWORD*)(v119 + 16) = 3;
      v120 = *(_DWORD**)(v119 + 24);
    }
    else {
      *(_BYTE*)(v119 + 8) = 6;
      v120 = (_DWORD*)(v119 + 9);
    }
    *v120 = 5785174;
    v118 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v118 + 344) = *(_QWORD*)(result + 360);
  v121 = *(_QWORD*)(result + 8);
  v122 = *(_QWORD*)(v121 + 344);
  if (v122 != 0) {
    if ((*(_BYTE*)(v122 + 8) & 1) != 0) {
      *(_QWORD*)(v122 + 16) = 10;
      v123 = *(char**)(v122 + 24);
    }
    else {
      *(_BYTE*)(v122 + 8) = 20;
      v123 = (char*)(v122 + 9);
    }
    strcpy(v123, "GlobalVars");
    v121 = *(_QWORD*)(result + 8);
  }
  *(_QWORD*)(v121 + 352) = *(_QWORD*)(result + 368);
  v124 = *(_QWORD*)(*(_QWORD*)(result + 8) + 352LL);
  if (v124 != 0) {
    if ((*(_BYTE*)(v124 + 8) & 1) != 0) {
      *(_QWORD*)(v124 + 16) = 12;
      v125 = *(char**)(v124 + 24);
    }
    else {
      *(_BYTE*)(v124 + 8) = 24;
      v125 = (char*)(v124 + 9);
    }
    strcpy(v125, "Translucency");
  }
  return result;
}

__int64 gfxa_b60140(__int64 a1, _QWORD* a2, __int64* a3, _QWORD* a4, __int64 a5)
{
  __int64 v9;
  unsigned __int64 v10;
  float v11;
  float v12;
  float v13;
  float v14;
  int32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  int8x16_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  int8x16_t v24;
  float32x4_t v25;
  float32x4_t v26;
  int8x16_t v27;
  float32x4_t v28;
  float32x4_t v29;
  int32x4_t v30;
  int8x16_t v31;
  int8x16_t v32;
  int8x16_t v33;
  int32x4_t v34;
  int32x4_t v35;
  int32x4_t v36;
  int32x4_t v37;
  __int64* v38;
  __int64 v39;
  int v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  _DWORD* v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  unsigned int v50;
  _QWORD* v51;
  __int64 i;
  __int64 j;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 (**v65)(__int64);
  unsigned int v66;
  __int64 (**v67)(__int64);
  unsigned int v68;
  __int64 v69;
  unsigned int v70;
  unsigned int v71;
  __int64 v72;
  unsigned int v73;
  __int64 v74;
  unsigned int k;
  __int64 result;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 (**v81)(__int64);
  unsigned int v82;
  __int64 (**v83)(__int64);
  unsigned int v84;
  __int64 v85;
  unsigned int v86;
  unsigned int v87;
  __int64 v88;
  unsigned int v89;
  __int64 v90;
  unsigned int m;
  struct {
    _QWORD v93[3];
    int v94;
    char v95;
    char gap45_[3];
    _QWORD* v96;
  } v93_;
  _QWORD v97[8];
  int32x4_t v98[4];
  __int128 v99;
  int v100;
  __int64 v101;

  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v79 = COERCE_AS(__typeof__(v79),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 49),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = *(int*)(a5 + 8);
  LODWORD(v10) = 0;
  v11 = (float)*(int*)a5 * 0x1.0000000000000p-1f;
  v12 = (float)*(int*)(a5 + 4) * 0x1.0000000000000p-1f;
  v13 = 0x1.0000000000000p+0f / (float)(v11 + v11);
  v14 = 0x1.0000000000000p+0f / (float)(v12 + v12);
  v99 = GameData_1a82b40;
  LANES128(v15).n128_f32[0] =
      -(float)(PSEUDO_UNFUSED((float)(v11 - v11) * v13));
  *((float*)&v10 + 1) = v14 + v14;
  LANES128(v15).n128_f32[1] = -(float)((float)(v12 - v12) * v14);
  v98[0] = COERCE_AS(int32x4_t, COERCE_UNSIGNED_INT(v13 + v13));
  v98[1] = COERCE_AS(int32x4_t, v10);
  LANES128(v15).n128_u32[2] = 0x80000000;
  LANES128(v15).n128_u32[3] =
      COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
  v98[2] = COERCE_AS(int32x4_t, GameData_1a82e30);
  v98[3] = v15;
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 1176256512LL),
                           COERCE_AS(float32x2_t, 1176256512LL)))
          .n64_u64[0];
  LANES128(v16).n128_u64[1] = LANES128(v16).n128_u64[0];
  v17 = vrsqrteq_f32(v16);
  v18 = vmulq_f32(v17, vrsqrtsq_f32(v17, vmulq_f32(v16, v17)));
  v19 =
      vbicq_s8(vmulq_f32(vmulq_f32(v18, vrsqrtsq_f32(v18, vmulq_f32(v16, v18))),
                         COERCE_AS(float32x4_t, GameData_1a82b40)),
               vceqzq_f32(v16));
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v20).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v21).n128_i8[8] =
      vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v22).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v22).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v18).n128_i8[8] =
      vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v23 = vmlsq_f32(vmulq_f32(v20, v21), v18, v22);
  v24 = vmulq_f32(v23, v23);
  LANES128(v24).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
          .n64_u64[0];
  LANES128(v24).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
          .n64_u64[0];
  LANES128(v24).n128_u64[1] = LANES128(v24).n128_u64[0];
  v25 = vrsqrteq_f32(v24);
  v26 = vmulq_f32(v25, vrsqrtsq_f32(v25, vmulq_f32(v24, v25)));
  v27 = vbicq_s8(
      vmulq_f32(v23, vmulq_f32(v26, vrsqrtsq_f32(v26, vmulq_f32(v24, v26)))),
      vceqzq_f32(v24));
  LANES128(v28).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v29).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v28).n128_i8[8] =
      vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v29).n128_i8[8] =
      vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v30 = vmlsq_f32(vmulq_f32(v18, v28), v29, v21);
  v31 = vmulq_f32(v27, COERCE_AS(float32x4_t, GameData_1a828f0));
  LANES128(v31).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v31, v31, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])))
          .n64_u64[0];
  v32 = vmulq_f32(v30, COERCE_AS(float32x4_t, GameData_1a828f0));
  v33 = vmulq_f32(v19, COERCE_AS(float32x4_t, GameData_1a828f0));
  LANES128(v32).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v32, v32, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
          .n64_u64[0];
  LANES128(v33).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v33, v33, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
          .n64_u64[0];
  v34 = vzip1q_s32(v27, v19);
  LANES128(v27).n128_u32[3] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])))
          .n64_u32[1];
  LANES128(v19).n128_u32[3] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
          .n64_u32[1];
  v35 = vzip1q_s32(v30, COERCE_AS(int32x4_t, 0));
  LANES128(v30).n128_u32[3] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
          .n64_u32[1];
  v36 = vzip2q_s32(v27, v19);
  v37 = vzip2q_s32(v30, COERCE_AS(int32x4_t, 0));
  *(int32x4_t*)v97 = vzip1q_s32(v34, v35);
  *(int32x4_t*)&v97[2] = vzip2q_s32(v34, v35);
  *(int32x4_t*)&v97[4] = vzip1q_s32(v36, v37);
  *(int32x4_t*)&v97[6] = vzip2q_s32(v36, v37);
  v38 = eft_g_effectSystem_ptr[0];
  Manager_bc5490(*eft_g_effectSystem_ptr[0], (__int64)v97, v98, &v99, 0x0.0p+0f,
                 0x1.2c00000000000p+8f),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v39 = *v38;
  if (*(_QWORD*)(*(_QWORD*)(*v38 + 296) - 16LL) !=
      *(_QWORD*)(*(_QWORD*)(*v38 + 296) - 24LL)) {
    v40 = *(_DWORD*)(a5 + 8);
    v41 = 1976;
    v42 = 0;
    while (1) {
      if ((Config_bc4f00(v39, v42, 0xFFFFFFFF) & 1) != 0) {
        v43 = *(_QWORD*)(v39 + 96);
        v44 = *(unsigned int*)(v43 + 8);
        if ((int)v44 >= 1) {
          break;
        }
      }
    LABEL_3:
      ++v42;
      v41 += 4;
      if (v42 >= (__int64)(*(_QWORD*)(*(_QWORD*)(v39 + 296) - 16LL) -
                           *(_QWORD*)(*(_QWORD*)(v39 + 296) - 24LL)) >>
          3) {
        goto LABEL_11;
      }
    }
    v45 = (_DWORD*)(*(_QWORD*)(v43 + 16) + v41);
    while ((*v45 & v40) == 0) {
      v45 += 634;
      if (--v44 == 0) {
        goto LABEL_3;
      }
    }
    v46 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v79 = COERCE_AS(__typeof__(v79),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64))(*(_QWORD*)v46 + 40LL))(v46),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(*v38 + 144) = v47;
  }
LABEL_11:
  if (*(_BYTE*)(a5 + 16) == 1) {
    v48 = *(_QWORD*)(a5 + 20);
    v49 = *v38;
    v50 = *(_DWORD*)(a5 + 12);
    v51 = v93_.v93;
    v93_.v93[2] = v9;
    v93_.v96 = v93_.v93;
    v93_.v94 = v48;
    v93_.v93[0] = GameData_1fc6640;
    v93_.v93[1] = a1;
    v93_.v95 = BYTE4(v48);
    if ((*(_BYTE*)(v49 + 313) & 1) != 0) {
      goto LABEL_26;
    }
    Config_bc52e0((_QWORD*)v49, v9, v50, 0),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    for (i = 0; i != 31; ++i) {
      if ((Config_bc4f00(v49, i, v50) & 1) != 0) {
        for (j = *(_QWORD*)(*(_QWORD*)(v49 + 96) + 8 * i + 176); j != 0;
             j = *(_QWORD*)(j + 464)) {
          v101 = j;
          v100 = 0;
          if (v93_.v96 == nullptr) {
            GameRoutine_60a310(),
                v47 =
                    COERCE_AS(__typeof__(v47),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v56 =
                    COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v62 =
                    COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v79 =
                    COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          (*(void (**)(_QWORD*, __int64*, int*))(*v93_.v96 + 48LL))(
              v93_.v96, &v101, &v100),
              v47 = COERCE_AS(__typeof__(v47),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
    }
    v51 = v93_.v96;
    if (v93_.v96 == v93_.v93) {
    LABEL_26:
      v63 = 32;
    }
    else {
      if (v93_.v96 == nullptr) {
        goto LABEL_36;
      }
      v63 = 40;
    }
    (*(void (**)(__int64))(*v51 + v63))((__int64)v51),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v54 = a3[1];
    if (v54 != 0) {
      v55 = (*(__int64 (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v57 = (*(__int64 (**)(__int64))(*(_QWORD*)v55 + 32LL))(v55),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v58 = a3[2];
      v59 = v56;
      if (v58 != 0) {
        v60 = (*(__int64 (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v61 = (*(__int64 (**)(__int64))(*(_QWORD*)v60 + 32LL))(v60),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(_QWORD, __int64, __int64, __int64, __int64))(
            *(_QWORD*)*a4 + 104LL))(*a4, v57, v59, v61, v62),
            v47 = COERCE_AS(__typeof__(v47),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v56 = COERCE_AS(__typeof__(v56),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v79 = COERCE_AS(__typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v57,
                                                                       v56),
            v47 = COERCE_AS(__typeof__(v47),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v56 = COERCE_AS(__typeof__(v56),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v79 = COERCE_AS(__typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v64 = *a4;
      v65 = (__int64 (**)(__int64))GameData_212e778[0],
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v66 = (*(__int64 (**)(__int64))GameData_212e778[0])(v57),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v67 = (__int64 (**)(__int64))GameData_212e780,
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v68 = ((__int64 (*)(__int64))*GameData_212e780)(v57),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)v64 + 72LL))(v64, 0, 0, v66, v68),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v79 = COERCE_AS(__typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v69 = *a4;
      v70 = (*v65)(v57);
      v71 = (*v67)(v57);
      (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)v69 + 88LL))(v69, 0, 0, v70, v71),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v79 = COERCE_AS(__typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v72 = *v38;
    if ((*(_BYTE*)(*v38 + 313) & 1) == 0) {
      v73 = *(_DWORD*)(a5 + 12);
      v74 = a4[2];
      Config_bc52e0((_QWORD*)*v38, v9, v73, 0),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v79 = COERCE_AS(__typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      for (k = 0; k != 31; ++k) {
        if ((Config_bc4f00(v72, k, v73) & 1) != 0) {
          ((void (*)(_QWORD, _QWORD, _QWORD, _QWORD))GameRoutine_5d3320)(
              *(_QWORD*)(v72 + 96), 0, k, (unsigned int)v9),
              v47 = COERCE_AS(__typeof__(v47),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      ((void (*)(_QWORD, _QWORD, __int64, __int64, __int64))GameRoutine_5d3420)(
          *(_QWORD*)(v72 + 96), 0, v74, 1, a1),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v79 = COERCE_AS(__typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
LABEL_36:
  result = *a3;
  if (*a3 != 0) {
    v77 = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v79 = COERCE_AS(__typeof__(v79),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v78 = (*(__int64 (**)(__int64))(*(_QWORD*)v77 + 32LL))(v77),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v79 = COERCE_AS(__typeof__(v79),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v78,
                                                                   v79),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v80 = *a4;
    v81 = (__int64 (**)(__int64))GameData_212e778[0],
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v79 = COERCE_AS(__typeof__(v79),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v82 = (*(__int64 (**)(__int64))GameData_212e778[0])(v78),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v79 = COERCE_AS(__typeof__(v79),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v83 = (__int64 (**)(__int64))GameData_212e780,
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v79 = COERCE_AS(__typeof__(v79),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v84 = ((__int64 (*)(__int64))*GameData_212e780)(v78),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v79 = COERCE_AS(__typeof__(v79),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)v80 + 72LL))(v80, 0, 0, v82, v84),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v85 = *a4;
    v86 = (*v81)(v78);
    v87 = (*v83)(v78);
    result = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)v85 + 88LL))(v85, 0, 0, v86, v87),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v79 = COERCE_AS(__typeof__(v79),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v88 = *v38;
    *(_QWORD*)(*(_QWORD*)(*v38 + 96) + 4600LL) = ResourceBuilder_b60880;
    if ((*(_BYTE*)(v88 + 313) & 1) == 0) {
      v89 = *(_DWORD*)(a5 + 12);
      v90 = a4[2];
      Config_bc52e0((_QWORD*)v88, v9, v89, 0),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v79 = COERCE_AS(__typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      for (m = 0; m != 31; ++m) {
        if ((Config_bc4f00(v88, m, v89) & 1) != 0) {
          ((void (*)(_QWORD, _QWORD, _QWORD, _QWORD))GameRoutine_5d3320)(
              *(_QWORD*)(v88 + 96), 0, m, (unsigned int)v9),
              v47 = COERCE_AS(__typeof__(v47),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      result = ((__int64 (*)(_QWORD, _QWORD, __int64, __int64,
                             __int64))GameRoutine_5d3420)(*(_QWORD*)(v88 + 96),
                                                          0, v90, 1, a1),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v88 = *v38;
    }
    *(_QWORD*)(*(_QWORD*)(v88 + 96) + 4600LL) = 0;
  }
  return result;
}

__int64 gfxa_b711f0(__int64 a1, __int64 a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int32x4_t* v11;
  float64x2_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  int8x16_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  int8x16_t v22;
  float32x4_t v23;
  float32x4_t v24;
  int8x16_t v25;
  int32x4_t v26;
  int32x4_t v27;
  int32x4_t v28;
  int8x16_t v29;
  int8x16_t v30;
  int8x16_t v31;
  float32x2_t v32;
  float32x2_t v33;
  float32x4_t v34;
  float32x4_t v35;
  int32x4_t v36;
  int32x4_t v37;
  int32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  int32x4_t v41;
  int32x4_t v42;
  int32x4_t v43;
  int32x4_t v44;
  int32x4_t v45;
  int32x4_t v46;
  int32x4_t v47;
  int32x4_t v48;
  int8x16_t v49;
  int8x16_t v50;
  float32x4_t v51;
  int32x4_t v52;
  int32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  int8x16_t v58;
  float32x4_t v59;
  float32x4_t v60;
  int8x16_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  int8x16_t v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float32x4_t v80;
  int8x16_t v81;
  float32x4_t v82;
  struct {
    int v84;
    char gap12_[4];
    __int64 v85;
    __int64 v86;
  } v84_;
  __int64 v87;
  float32x4x4_t v88;
  float32x4x4_t v89;

  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = 0;
  *(_DWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  v3 = (_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 32) = 0;
  v4 = *(_QWORD*)(a2 + 312);
  v5 = *(_QWORD*)(*(_QWORD*)(a2 + 552) + 16LL);
  v84_.v84 = 3;
  v84_.v85 = 252;
  v84_.v86 = v4;
  GameRoutine_53bd0((void*)(&v87), (__int64)&v84_.v84),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = v87;
  v7 = *(_QWORD*)(a1 + 8);
  v87 = 0;
  *(_QWORD*)(a1 + 8) = v6;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v8 = v87;
    v87 = 0;
    if (v8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  *(_QWORD*)(a1 +
             24) = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 80LL))(v5),
             v9 = COERCE_AS(__typeof__(v9),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(a1 + 32) = v9;
  GameRoutine_5de60(v3, *(_QWORD*)(a1 + 8)),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = *(_QWORD*)(a1 + 8);
  v11 = (int32x4_t*)(*(__int64 (**)(__int64))(*(_QWORD*)v10 + 56LL))(v10),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LANES128(v12).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v12).n128_u64[1] = 0x3F8000003F800000LL;
  LANES128(v11[15]).n128_u64[0] = 0;
  v13 = vnegq_f64(v12);
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 1176256512LL),
                           COERCE_AS(float32x2_t, 1176256512LL)))
          .n64_u64[0];
  LANES128(v14).n128_u64[1] = LANES128(v14).n128_u64[0];
  v15 = vrsqrteq_f32(v14);
  v16 = vmulq_f32(v15, vrsqrtsq_f32(v15, vmulq_f32(v14, v15)));
  v17 =
      vbicq_s8(vmulq_f32(vmulq_f32(v16, vrsqrtsq_f32(v16, vmulq_f32(v14, v16))),
                         COERCE_AS(float32x4_t, GameData_1a82b40)),
               vceqzq_f32(v14));
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v18).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v19).n128_i8[8] =
      vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v20).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v16).n128_i8[8] =
      vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v21 = vmlsq_f32(vmulq_f32(v18, v19), v16, v20);
  v22 = vmulq_f32(v21, v21);
  LANES128(v22).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v22, v22, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
          .n64_u64[0];
  LANES128(v22).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
          .n64_u64[0];
  LANES128(v22).n128_u64[1] = LANES128(v22).n128_u64[0];
  v23 = vrsqrteq_f32(v22);
  v24 = vmulq_f32(v23, vrsqrtsq_f32(v23, vmulq_f32(v22, v23)));
  v25 = vbicq_s8(
      vmulq_f32(v21, vmulq_f32(v24, vrsqrtsq_f32(v24, vmulq_f32(v22, v24)))),
      vceqzq_f32(v22));
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  v26 = vzip1q_s32(v25, v17);
  *(int8x8_t*)&LANES128(v21).n128_i8[8] =
      vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v14).n128_i8[8] =
      vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v27 = vmlsq_f32(vmulq_f32(v16, v21), v14, v19);
  v89.val[0] = COERCE_AS(float32x4_t, GameData_1a82bc0);
  v28 = vzip1q_s32(v27, COERCE_AS(int32x4_t, 0));
  v29 = vmulq_f32(v25, COERCE_AS(float32x4_t, GameData_1a828f0));
  LANES128(v29).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v29, v29, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0])))
          .n64_u64[0];
  LANES128(v24).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0])))
          .n64_u64[0];
  v30 = vmulq_f32(v27, COERCE_AS(float32x4_t, GameData_1a828f0));
  v31 = vmulq_f32(v17, COERCE_AS(float32x4_t, GameData_1a828f0));
  LANES128(v30).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v30, v30, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
          .n64_u64[0];
  LANES64(v32).n64_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
          .n64_u64[0];
  LANES128(v31).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v31, v31, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])))
          .n64_u64[0];
  LANES64(v33).n64_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])))
          .n64_u64[0];
  v89.val[1] = COERCE_AS(float32x4_t, GameData_1a82ca0);
  v89.val[2] = COERCE_AS(float32x4_t, GameData_1a82e30);
  v89.val[3] = COERCE_AS(float32x4_t, GameData_1a83400);
  v88.val[0] = vmlaq_n_f32(
      vmlaq_n_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82bc0),
                              LANES128(v25).n128_f32[0]),
                  COERCE_AS(float32x4_t, GameData_1a82ca0),
                  LANES128(v27).n128_f32[0]),
      COERCE_AS(float32x4_t, GameData_1a82e30), LANES128(v17).n128_f32[0]);
  v88.val[1] = vmlaq_lane_f32(
      vmlaq_lane_f32(
          vmulq_lane_f32(COERCE_AS(float32x4_t, GameData_1a82bc0),
                         COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]), 1),
          COERCE_AS(float32x4_t, GameData_1a82ca0),
          COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]), 1),
      COERCE_AS(float32x4_t, GameData_1a82e30),
      COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0]), 1);
  v34 = vmulq_laneq_f32(COERCE_AS(float32x4_t, GameData_1a82bc0), v25, 2);
  LANES128(v25).n128_u32[3] = LANES128(v24).n128_u32[1];
  v35 = vmlaq_laneq_f32(v34, COERCE_AS(float32x4_t, GameData_1a82ca0), v27, 2);
  LANES128(v27).n128_u32[3] = LANES64(v32).n64_u32[1];
  v88.val[2] =
      vmlaq_laneq_f32(v35, COERCE_AS(float32x4_t, GameData_1a82e30), v17, 2);
  v36 = vuzp1q_s32(v17, v88.val[0]);
  LANES128(v17).n128_u32[3] = LANES64(v33).n64_u32[1];
  v37 = vzip2q_s32(v27, COERCE_AS(int32x4_t, 0));
  v88.val[3] = vaddq_f32(
      vmlaq_lane_f32(
          vmlaq_lane_f32(
              vmulq_lane_f32(COERCE_AS(float32x4_t, GameData_1a82bc0),
                             COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                             1),
              COERCE_AS(float32x4_t, GameData_1a82ca0), v32, 1),
          COERCE_AS(float32x4_t, GameData_1a82e30), v33, 1),
      COERCE_AS(float32x4_t, GameData_1a83400));
  v38 = vzip2q_s32(v88.val[0], v88.val[2]);
  v39 = vdupq_laneq_s32(v88.val[0], 2);
  v40 =
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v88.val[0]).n128_u64[0]), 0);
  v41 = vzip2q_s32(v25, v17);
  v42 = vzip1q_s32(v26, v28);
  v43 = vzip2q_s32(v26, v28);
  LANES128(v39).n128_u32[0] = LANES128(v88.val[1]).n128_u32[2];
  LANES128(v40).n128_u32[0] = LANES128(v88.val[1]).n128_u32[0];
  v44 = vzip2q_s32(v88.val[1], v88.val[3]);
  v45 = vzip1q_s32(v41, v37);
  v46 = vzip2q_s32(v41, v37);
  v47 = vzip1q_s32(v88.val[0], v88.val[2]);
  v48 = vzip1q_s32(v88.val[1], v88.val[3]);
  v49 = vzip1q_s32(v47, v48);
  v50 = vzip2q_s32(v47, v48);
  v51 =
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v88.val[0]).n128_u64[0]), 1);
  v52 = vzip1q_s32(v42, v45);
  v53 = vzip1q_s32(v43, v46);
  LANES128(v51).n128_u32[0] = LANES128(v88.val[1]).n128_u32[1];
  LANES128(v54).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v54).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v88.val[1]).n128_u64[0]), 0);
  *v11 = vzip1q_s32(v52, v53);
  v11[1] = vzip2q_s32(v52, v53);
  v11[2] = vzip1q_s32(v36, vzip2q_s32(v43, v46));
  vst4q_f32((float*)&v11[3], v89);
  vst4q_f32((float*)&v11[7], v88);
  LANES128(v55).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v55).n128_i8[8] =
      vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  LANES128(v56).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v50, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v56).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v88.val[1]).n128_u64[0]), 1);
  LANES128(v57).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v50, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v57).n128_i8[8] =
      vqtbl1_s8(v50, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v58 = vzip1q_s32(v38, v44);
  LANES128(v59).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v59).n128_i8[8] = vdup_laneq_s32(v88.val[1], 2);
  LANES128(v60).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v60).n128_i8[8] =
      vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v61 = vzip2q_s32(v38, v44);
  LANES128(v38).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v62).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v38).n128_i8[8] = vdup_laneq_s32(v88.val[1], 3);
  *(int8x8_t*)&LANES128(v62).n128_i8[8] =
      vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v63 = vextq_s8(v88.val[1], vdupq_laneq_s32(v88.val[0], 3), 0xCu);
  v64 = vsubq_f32(vmulq_f32(v59, v62), vmulq_f32(v38, v60));
  v65 = vsubq_f32(vmulq_f32(v39, v62), vmulq_f32(v63, v60));
  v66 = vsubq_f32(vmulq_f32(v39, v38), vmulq_f32(v59, v63));
  v67 = vmlsq_f32(vmulq_f32(v51, v64), v65, v56);
  v68 = vmlsq_f32(vmulq_f32(v40, v64), v65, v54);
  LANES128(v65).n128_u64[0] = 0xBF800000BF800000LL;
  LANES128(v65).n128_u64[1] = 0xBF800000BF800000LL;
  v69 = vmlaq_f32(v67, v66, v57);
  v70 = vmlaq_f32(v68, v66, v55);
  v71 = vnegq_f64(v65);
  v72 = vsubq_f32(vmulq_f32(v54, v57), vmulq_f32(v56, v55));
  v73 = vsubq_f32(vmulq_f32(v40, v57), vmulq_f32(v51, v55));
  v74 = vsubq_f32(vmulq_f32(v40, v56), vmulq_f32(v54, v51));
  v75 = vmulq_f32(v69, v13);
  v76 = vmulq_f32(v49, v75);
  v77 = vmulq_f32(vmlaq_f32(vmlsq_f32(vmulq_f32(v63, v72), v73, v38), v74, v62),
                  v13);
  LANES128(v76).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v76, v76, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v76).n128_u64[0])))
          .n64_u64[0];
  LANES128(v76).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v76).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v76).n128_u64[0])))
          .n64_u64[0];
  LANES128(v76).n128_u64[1] = LANES128(v76).n128_u64[0];
  v78 = vrecpeq_f32(v76);
  v79 = vmulq_f32(v78, vrecpsq_f32(v78, v76));
  v80 = vrecpsq_f32(v79, v76);
  v81 = vceqzq_f32(v76);
  v82 = vmulq_f32(v79, v80);
  v89.val[0] = vbicq_s8(vmulq_f32(v82, v75), v81);
  v89.val[1] = vbicq_s8(vmulq_f32(v82, vmulq_f32(v70, v71)), v81);
  v89.val[2] = vbicq_s8(vmulq_f32(v77, v82), v81);
  v89.val[3] = vbicq_s8(
      vmulq_f32(vmulq_f32(vmlaq_f32(vmlsq_f32(vmulq_f32(v39, v72), v73, v59),
                                    v74, v60),
                          v71),
                v82),
      v81);
  vst4q_f32((float*)&v11[11], v89);
  LANES128(v11[15]).n128_u32[2] = 1120403456;
  return (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 64LL))(v10);
}

__int64 gfxa_b791d0(__int64 a1, __int64 a2)
{
  _QWORD* v3;
  void (**v4)(__int64);
  void (**v5)(__int64, __int64, __int64);
  _UNKNOWN** v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  float* v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  int8x16_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  int8x16_t v24;
  float32x4_t v25;
  float32x4_t v26;
  int8x16_t v27;
  float32x4_t v28;
  float32x4_t v29;
  int8x16_t v30;
  int8x16_t v31;
  int8x16_t v32;
  struct {
    int v34;
    char gap12_[4];
    __int64 v35;
    __int64 v36;
  } v34_;
  __int64 v37;
  float32x4x4_t v38;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 32) = 0;
  *(_DWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  v3 = (_QWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 56) = 0;
  v4 = (void (**)(__int64))GameData_212e8c8[0],
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64))GameData_212e8c8[0])(a1 + 8),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = (void (**)(__int64, __int64, __int64))GameData_212e8d0[0],
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))GameData_212e8d0[0])(a1 + 8, 22, 0),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = GameData_212e8d8[0];
  (*(void (**)(__int64, _QWORD))GameData_212e8d8[0])(a1 + 8, 0),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*v4)(a1 + 12);
  (*v5)(a1 + 12, 22, 8);
  ((void (*)(__int64, _QWORD))*v6)(a1 + 12, 0),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*v4)(a1 + 16);
  (*v5)(a1 + 16, 46, 16);
  ((void (*)(__int64, _QWORD))*v6)(a1 + 16, 0),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64))GameData_212e8e0[0])(a1 + 24),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64))GameData_212e8e8[0])(a1 + 24, 32),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = *(_QWORD*)(*(_QWORD*)a1 + 312LL);
  v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL);
  v34_.v34 = 3;
  v34_.v35 = 64;
  v34_.v36 = v7;
  GameRoutine_53bd0((void*)(&v37), (__int64)&v34_.v34),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = v37;
  v10 = *(_QWORD*)(a1 + 32);
  v37 = 0;
  *(_QWORD*)(a1 + 32) = v9;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v11 = v37;
    v37 = 0;
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  *(_QWORD*)(a1 +
             48) = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 80LL))(v8),
             v12 = COERCE_AS(__typeof__(v12),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(a1 + 56) = v12;
  GameRoutine_5de60(v3, *(_QWORD*)(a1 + 32)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = *(_QWORD*)(a1 + 32);
  v14 = (float*)(*(__int64 (**)(__int64))(*(_QWORD*)v13 + 56LL))(v13),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 1176256512LL),
                           COERCE_AS(float32x2_t, 1176256512LL)))
          .n64_u64[0];
  LANES128(v15).n128_u64[1] = LANES128(v15).n128_u64[0];
  v16 = vrsqrteq_f32(v15);
  v17 = vmulq_f32(v16, vrsqrtsq_f32(v16, vmulq_f32(v15, v16)));
  v18 =
      vbicq_s8(vmulq_f32(vmulq_f32(v17, vrsqrtsq_f32(v17, vmulq_f32(v15, v17))),
                         COERCE_AS(float32x4_t, GameData_1a82b40)),
               vceqzq_f32(v15));
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v19).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v20).n128_i8[8] =
      vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v21).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v22).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v22).n128_i8[8] =
      vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v23 = vmlsq_f32(vmulq_f32(v19, v20), v22, v21);
  v24 = vmulq_f32(v23, v23);
  LANES128(v24).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
          .n64_u64[0];
  LANES128(v24).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
          .n64_u64[0];
  LANES128(v24).n128_u64[1] = LANES128(v24).n128_u64[0];
  v25 = vrsqrteq_f32(v24);
  v26 = vmulq_f32(v25, vrsqrtsq_f32(v25, vmulq_f32(v24, v25)));
  v27 = vbicq_s8(
      vmulq_f32(v23, vmulq_f32(v26, vrsqrtsq_f32(v26, vmulq_f32(v24, v26)))),
      vceqzq_f32(v24));
  LANES128(v28).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v28).n128_i8[8] =
      vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v17).n128_i8[8] =
      vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v29 = vmlsq_f32(vmulq_f32(v22, v28), v17, v20);
  v30 = vmulq_f32(v27, COERCE_AS(float32x4_t, GameData_1a828f0));
  LANES128(v30).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v30, v30, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
          .n64_u64[0];
  v31 = vmulq_f32(v29, COERCE_AS(float32x4_t, GameData_1a828f0));
  v32 = vmulq_f32(v18, COERCE_AS(float32x4_t, GameData_1a828f0));
  LANES128(v31).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v31, v31, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])))
          .n64_u64[0];
  LANES128(v32).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v32, v32, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
          .n64_u64[0];
  v38.val[0] = vmlaq_n_f32(
      vmlaq_n_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82bc0),
                              LANES128(v27).n128_f32[0]),
                  COERCE_AS(float32x4_t, GameData_1a82ca0),
                  LANES128(v29).n128_f32[0]),
      COERCE_AS(float32x4_t, GameData_1a82e30), LANES128(v18).n128_f32[0]);
  v38.val[1] = vmlaq_lane_f32(
      vmlaq_lane_f32(
          vmulq_lane_f32(COERCE_AS(float32x4_t, GameData_1a82bc0),
                         COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]), 1),
          COERCE_AS(float32x4_t, GameData_1a82ca0),
          COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]), 1),
      COERCE_AS(float32x4_t, GameData_1a82e30),
      COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]), 1);
  v38.val[2] = vmlaq_laneq_f32(
      vmlaq_laneq_f32(
          vmulq_laneq_f32(COERCE_AS(float32x4_t, GameData_1a82bc0), v27, 2),
          COERCE_AS(float32x4_t, GameData_1a82ca0), v29, 2),
      COERCE_AS(float32x4_t, GameData_1a82e30), v18, 2);
  v38.val[3] = vaddq_f32(
      vmlaq_lane_f32(
          vmlaq_lane_f32(
              vmulq_lane_f32(
                  COERCE_AS(float32x4_t, GameData_1a82bc0),
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])),
                  1),
              COERCE_AS(float32x4_t, GameData_1a82ca0),
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])),
              1),
          COERCE_AS(float32x4_t, GameData_1a82e30),
          vpadd_f32(COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])),
          1),
      COERCE_AS(float32x4_t, GameData_1a83400));
  vst4q_f32(v14, v38);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 64LL))(v13);
}

#pragma GCC visibility pop
