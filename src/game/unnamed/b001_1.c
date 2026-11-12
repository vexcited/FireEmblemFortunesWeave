#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char GameData_1a9f09e;
extern unsigned int GameData_1b0c56c[3];
extern __int64 (*GameData_1f7ec00)();
extern __int64 (*GameData_1f7ecb8[])();
extern __int64 (*GameData_1f7ecf8[])();
extern __int16* GameData_2134be8;
extern __int64* GameData_2134c90;
extern __int64* GameData_2134fb8;
extern __int64* GameData_2134fe8[2];
extern __int64* GameData_2134ff0;
extern __int64* GameData_2135018[6];
extern __int64* GameData_2135020[5];
extern __int64* GameData_2135028[4];
extern __int64* GameData_2135030[3];
extern __int64* GameData_2135040;
extern __int64 GameData_2135080[3];
extern __int64 GameData_2135090;
extern char* GameData_2135178[14];
extern char* GameData_2135180[13];
extern int* GameData_2135198[7];
extern int* GameData_21351a0[6];
extern _UNKNOWN* GameData_21351e8;
extern _UNKNOWN* GameData_2135218;
extern __int64* GameData_2135220;
extern _UNKNOWN* GameData_2135228;
extern __int64* GameData_2135230[5];
extern __int64* GameData_2135238[4];
extern __int64* GameData_2135240[3];
extern __int64* GameData_2135248[2];
extern __int64* GameData_2135250;
extern __int64* GameData_2135260[3];
extern __int64* GameData_2135268[2];
extern _UNKNOWN* GameData_2140368;
extern _UNKNOWN** GameData_2140370[255];
extern __int16 GameData_2199b50;
extern __int16 GameData_2199b90;
extern __int64 (*GameData_219a968)(void);
extern _UNKNOWN GameData_219c9f8;
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_1121e0(_QWORD, _QWORD);
__int64 GameRoutine_1449c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14e360(_QWORD, _QWORD);
__int64* GameRoutine_17b320(__int64);
__int64 GameRoutine_17bb20(_QWORD, _QWORD);
__int64 GameRoutine_17d780(_QWORD);
__int64 GameRoutine_17e7e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18d540(__int64, __int64);
__int64 GameRoutine_18d880(__int64, __int64);
__int64 GameRoutine_190200(_QWORD, _QWORD);
__int64 GameRoutine_1a09b70(_QWORD);
__int64 GameRoutine_1a09b80(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09c80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09f60(_QWORD);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a040(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a150(_QWORD);
__int64 GameRoutine_1a0a160(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a170(_QWORD);
__int64 GameRoutine_1a0a190(_QWORD);
float GameRoutine_1a0a550(float, float);
__int64 GameRoutine_1a0a590(_QWORD);
__int64 GameRoutine_1a0b840(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1bcf40(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD);
__int64 GameRoutine_1ce580(void);
__int64 GameRoutine_1d5ee0(_QWORD, _QWORD);
__int64 GameRoutine_1f6960(_QWORD);
__int64 GameRoutine_1f6ab0();
__int64 GameRoutine_25f460(_QWORD);
__int64 GameRoutine_25f730(_QWORD, _QWORD);
__int64 GameRoutine_25f810(_QWORD);
__int64 GameRoutine_25fd90(_QWORD, _QWORD);
__int64 GameRoutine_25fee0(_QWORD, _QWORD);
__int64 GameRoutine_260020(_QWORD, const char*, ...);
__int64 GameRoutine_267750(void);
__int64 GameRoutine_267ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_268940(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_276af0(void);
__int64 GameRoutine_278080(_QWORD);
__int64 GameRoutine_2780f0(void);
__int64 GameRoutine_278240(_QWORD, _QWORD);
__int64 GameRoutine_278580(void);
__int64 GameRoutine_2785d0(_QWORD, _QWORD);
__int64 GameRoutine_278600(_QWORD);
__int64 GameRoutine_278660(_QWORD);
__int64 GameRoutine_278bd0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_278c70(_QWORD, _QWORD);
__int64 GameRoutine_278f00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_278f90(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_279120(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_27ba20(_QWORD, _QWORD);
__int64 GameRoutine_27bef0(void);
__int64 GameRoutine_27cf80(_QWORD);
__int64 GameRoutine_27d070(_DWORD*, unsigned int*, __int64*);
_QWORD* GameRoutine_27d7f0(_QWORD* result, __int64, __int64*);
__int64 GameRoutine_27e5a0(_QWORD);
__int64 GameRoutine_27ee40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_27f000(_QWORD, _QWORD);
__int64 GameRoutine_27f1d0(_QWORD, _QWORD);
__int64 GameRoutine_27f370(_QWORD);
__int64 GameRoutine_27f500(void);
__int64 GameRoutine_27f940(__int64, double, float);
__int64 GameRoutine_280120(_QWORD);
__int64 GameRoutine_280130(_QWORD);
__int64 GameRoutine_280140(_QWORD, _QWORD);
__int64 GameRoutine_280160(void);
__int64 GameRoutine_280170(_QWORD, _QWORD);
__int64 GameRoutine_280190(void);
__int64 GameRoutine_2804d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_280680(_QWORD, _QWORD);
__int64 GameRoutine_280690(_QWORD);
__int64 GameRoutine_2806a0(_QWORD);
__int64 GameRoutine_2806b0(_QWORD);
__int64 GameRoutine_2806c0(_QWORD);
__int64 GameRoutine_2806d0(_QWORD);
__int64 GameRoutine_2806e0(_QWORD, _QWORD);
__int64 GameRoutine_2809e0(_QWORD, _QWORD);
__int64 GameRoutine_280a00(_QWORD);
__int64 GameRoutine_281e30(_QWORD, _QWORD);
__int64 GameRoutine_281e90(_QWORD);
__int64 GameRoutine_282480(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2827d0(_QWORD, _QWORD);
__int64 GameRoutine_2828d0(void);
__int64 GameRoutine_282ae0(_QWORD);
__int64 GameRoutine_282e40(_QWORD, _QWORD);
__int64 GameRoutine_283000(_QWORD, _QWORD);
__int64 GameRoutine_2830f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2831a0(_QWORD);
__int64 GameRoutine_283200(_QWORD);
__int64 GameRoutine_283260(_QWORD);
__int64 GameRoutine_2832c0(_QWORD, _QWORD);
__int64 GameRoutine_283380(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2837a0(_QWORD);
__int64 GameRoutine_283ae0(_QWORD);
__int64 GameRoutine_283db0(void);
__int64 GameRoutine_284200(void);
__int64 GameRoutine_284370(_QWORD);
__int64 GameRoutine_2843d0(_QWORD);
__int64 GameRoutine_284400(_QWORD);
__int64 GameRoutine_284430(_QWORD);
__int64 GameRoutine_285200(_QWORD);
__int64 GameRoutine_285210(_QWORD, _QWORD);
__int64 GameRoutine_285270(_QWORD);
__int64 GameRoutine_285280(_QWORD, _QWORD);
__int64 GameRoutine_285290(_QWORD, _QWORD);
__int64 GameRoutine_2852c0(_QWORD);
__int64 GameRoutine_2853e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_285490(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2854d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_285520(_QWORD);
__int64 GameRoutine_285570(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_285600(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_285690(_QWORD);
__int64 GameRoutine_2856f0(_QWORD);
__int64 GameRoutine_2857c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_285820(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2858c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_285b90(_QWORD);
__int64 GameRoutine_285c20(_QWORD);
__int64 GameRoutine_285e40(_QWORD);
__int64 GameRoutine_285e70(_QWORD);
__int64 GameRoutine_285ea0(_QWORD);
__int64 GameRoutine_285ef0(_QWORD);
__int64 GameRoutine_286210(_QWORD);
__int64 GameRoutine_288010(_QWORD, _QWORD);
__int64 GameRoutine_288600(_QWORD);
__int64 GameRoutine_2890a0(_QWORD);
__int64 GameRoutine_2890f0(_QWORD);
__int64 GameRoutine_2891e0(_QWORD);
__int64 GameRoutine_289600(_QWORD, _QWORD);
__int64 GameRoutine_289830(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_289840(_QWORD, _QWORD);
__int64 GameRoutine_289910(_QWORD, _QWORD);
__int64 GameRoutine_289c80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_289e00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_289ff0(_QWORD, _QWORD);
__int64 GameRoutine_291d80(_QWORD);
__int64 GameRoutine_29ec50(_QWORD);
__int64 GameRoutine_2a0820(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a0de0(_QWORD, _QWORD);
__int64 GameRoutine_2a0e80(_QWORD, _QWORD);
__int64 GameRoutine_2a0eb0(_QWORD, _QWORD);
__int64 GameRoutine_2a1860(_QWORD, _QWORD);
__int64 GameRoutine_2a18e0(void);
__int64 GameRoutine_2a1970(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a1b90(_QWORD);
__int64 GameRoutine_2a1fd0(_QWORD, _QWORD);
__int64 GameRoutine_2a4170(_QWORD);
__int64 GameRoutine_2a4180(_QWORD);
__int64 GameRoutine_2a4600(_QWORD);
__int64 GameRoutine_2a4720(_QWORD, _QWORD);
__int64 GameRoutine_2a4c20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a4d20(_QWORD);
__int64 GameRoutine_2a4da0(_QWORD);
__int64 GameRoutine_2a4dd0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a6df0(void);
__int64 GameRoutine_2a6e90(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2aa100(void);
__int64 GameRoutine_2aa190(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2ae380(_QWORD);
__int64 GameRoutine_2b3530(_QWORD);
__int64 GameRoutine_a3a260(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a3a3a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f0230(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f1b80(_QWORD, _QWORD);
__int64 GameRoutine_f5740(_QWORD, _QWORD);
__int64 GameRoutine_fdf60(_QWORD, _QWORD);
__int64 GameRoutine_fdfe0(_QWORD, _QWORD);
__int64 GameHr_27c6a0(__int64 a1, __int64 a2);
_QWORD* GameHr_27d7f0(_QWORD* result, __int64, __int64*);
__attribute__((swiftcall)) void asCDataType_Format(PSEUDO_X8, __int64, __int64,
                                                   char);
__int64* SoundHeap_2a4720(_QWORD*, int);
__int64 BaseNx_278c70(__int64, __int64);
__int64 BaseNx_2890f0(int);
__int64 BaseNx_2891e0(__int64 result, char, char, char, char, char, char, int,
                      int, int, int);
__int64 BaseNx_2a0de0(__int64, int);
__int64 BaseNx_2a1970(__int64, __int64, int);
__int64 BaseNx_2a6e90(__int64, int, __int64);
__int64 BaseNx_2aa190(__int64, int, __int64);
__int64 BasicSound_2804d0(__int64 result, char, int);
__int64 BasicSound_2806e0(__int64, int);
__int64 GameHr_18d540(__int64, __int64);
__int64 GameHr_27cf80_alt1(__int64) __asm__("GameHr_27cf80");
__int64 GameHr_27d070(_DWORD*, unsigned int*, __int64*);
__int64 GameHr_289c80(__int64, __int64, __int64, __int64, char);
__int64 GameHr_2a4c20(__int64, __int64, __int64, __int64, __int64);
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64 GameRoutine_190200_alt1(__int64, char*) __asm__("GameRoutine_190200");
__int64 GameRoutine_1d5ee0_alt1(__int64, __int64) __asm__("GameRoutine_1d5ee0");
__int64 GameRoutine_289830_alt1(__int64, unsigned int,
                                unsigned int) __asm__("GameRoutine_289830");
__int64 GameRoutine_f5740_alt1(int*, _QWORD*) __asm__("GameRoutine_f5740");
__int64 Voice_1449c0(_QWORD*, __int64, __int64, __int64, __int64);
__int64 WaveVoice_18d880(__int64, __int64);
__int64 __assert_fail(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 asCOutputBuffer_Callback();
__int64 asCOutputBuffer_Destroy_asCOutputBuffer(__int64);
__int64 asCScriptEngine_CallGlobalFunctionRetBool(__int64, __int64, __int64,
                                                  __int64, __int64);
__int64 asCString_Destroy_asCString(__int64 result);
__int64 asCString_Format(void*, const char*, ...);
__int64 asCString_asCString_25f460(__int64 result);
__int64 asCString_asCString_25f730(unsigned int*, const char*);
__int64 dtAssertFailGetCustom();
__int64 dtFindNearestPolyQuery_Destroy_dtFindNearestPolyQuery(_QWORD);
__int64 dtNavMeshQuery_queryPolygons(_QWORD*, float*, float*, __int64, __int64);
__int64 nn_atk_detail_289600(__int64, __int64);
__int64 nn_atk_detail_289840(__int64, __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 snd_data_f0230(__int64, __int64, char*);
__int64 snd_fnd_WeakHandle_set(__int64, __int64);
bool BaseNx_2890a0(unsigned int);
const char* snd_fnd_calcCrc32Reverse(const char* result, int);
extern __int64 (*GameData_219a968_alt1)(__int64*) __asm__("GameData_219a968");
unsigned __int64 nn_atk_detail_289910(__int64, __int64);
unsigned __int64 nn_atk_detail_289ff0(__int64, __int64);
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
unsigned int*
GameRoutine_25fd90_alt1(unsigned int*,
                        const char*) __asm__("GameRoutine_25fd90");
unsigned int*
GameRoutine_25fee0_alt1(unsigned int*,
                        unsigned int*) __asm__("GameRoutine_25fee0");
void* BaseNx_2a1860();
void* BaseNx_2a18e0();
void* BaseNx_2a6df0();
void* BaseNx_2aa100();
void* SoundVoiceNX_14e360();
__int64 GameHr_18e190(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      unsigned __int8* a5, __int64 a6, __int64 a7, __int64 a8);
__int64 GameHr_1e0920(__int64 a1, unsigned int a2, char a3);
__int64 GameHr_268800(__int64* a1, float* a2, float* a3, __int64 a4, _DWORD* a5,
                      __int64 a6);
__int64 GameHr_277d90(__int64 a1, __int64 a2);
__int64 GameHr_277df0(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 GameHr_27c210(__int64 a1, int a2);
__int64 GameHr_27cce0(__int64 a1);
unsigned __int64 GameHr_27cf80(__int64 a1);
__int64 GameHr_27d960(__int64 a1, __int64* a2);
__int64* GameHr_27ee40(_QWORD* a1, int a2, int a3, __int64 a4, __int64 a5);
__int64 memset(__int64, int, unsigned __int64);
__int64 strncat(__int64, const char*, unsigned __int64);
unsigned __int64 strlen(const char*);
void nn_detail_UnexpectedDefaultImpl();
void nn_diag_detail_AbortImpl_1a0a590();
__int64 GameHr_279120(const char* a1, __int64 a2, __int64 a3, const char* a4,
                      __int64 a5, __int64 a6);
__int64 GameHr_283a20(__int64 result, int a2, _QWORD* a3);
__int64 GameHr_283b60(__int64 result, __int64 a2);
__int64 GameHr_27c920(__int64 result, int a2);

__int64 GameHr_17b410(__int64 result)
{
  __int64 v1;
  unsigned int v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  unsigned int v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  unsigned int v20;
  __int64* v21;
  __int64 v22;
  __int64* v23;
  unsigned int v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  unsigned int v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  unsigned int v36;
  __int64 v37;
  unsigned int v38;
  __int64* v39;
  __int64 v40;
  __int64* v41;
  unsigned int v42;
  __int64 v43;
  unsigned int v44;
  __int64 v45;
  unsigned int v46;
  __int64 v47;
  unsigned int v48;
  __int64 v49;
  unsigned int v50;
  __int64 v51;
  unsigned int v52;
  __int64 v53;
  unsigned int v54;
  __int64 v55;
  unsigned int v56;
  __int64* v57;
  __int64 v58;
  __int64* v59;
  unsigned int v60;
  __int64 v61;
  unsigned int v62;
  __int64 v63;
  unsigned int v64;
  __int64 v65;
  unsigned int v66;
  __int64 v67;
  unsigned int v68;
  __int64 v69;
  unsigned int v70;
  __int64 v71;
  unsigned int v72;
  __int64 v73;
  unsigned int v74;
  __int64* v75;
  __int64* v76;
  __int64* v77;
  __int64* v78;

  if ((*(_BYTE*)(result + 17) & 1) == 0) {
    v1 = result;
    GameRoutine_1a09b70(&GameData_2199b50);
    GameRoutine_1a09b70(&GameData_2199b90);
    v2 = *(_DWORD*)(v1 + 20) / 200;
    v3 = GameRoutine_17b320(v1 + 104);
    if (v3 != nullptr) {
      v4 = *(_QWORD*)(v1 + 24);
      v5 = v3;
      v6 = (*(__int64 (**)(__int64*))(*v3 + 136))(v3);
      GameRoutine_17e7e0(v4, v5, v2, v6);
      v7 = *(_QWORD*)(v1 + 24);
      v8 = (*(__int64 (**)(__int64*))(*v5 + 136))(v5);
      GameRoutine_17e7e0(v7, v5, v2, v8);
      v9 = *(_QWORD*)(v1 + 24);
      v10 = (*(__int64 (**)(__int64*))(*v5 + 136))(v5);
      GameRoutine_17e7e0(v9, v5, v2, v10);
      v11 = *(_QWORD*)(v1 + 24);
      v12 = (*(__int64 (**)(__int64*))(*v5 + 136))(v5);
      GameRoutine_17e7e0(v11, v5, v2, v12);
      v13 = *(_QWORD*)(v1 + 24);
      v14 = (*(__int64 (**)(__int64*))(*v5 + 136))(v5);
      GameRoutine_17e7e0(v13, v5, v2, v14);
      v15 = *(_QWORD*)(v1 + 24);
      v16 = (*(__int64 (**)(__int64*))(*v5 + 136))(v5);
      GameRoutine_17e7e0(v15, v5, v2, v16);
      v17 = *(_QWORD*)(v1 + 24);
      v18 = (*(__int64 (**)(__int64*))(*v5 + 136))(v5);
      GameRoutine_17e7e0(v17, v5, v2, v18);
      v19 = *(_QWORD*)(v1 + 24);
      v20 = (*(__int64 (**)(__int64*))(*v5 + 136))(v5);
      GameRoutine_17e7e0(v19, v5, v2, v20);
    }
    v21 = GameRoutine_17b320(v1 + 128);
    if (v21 != nullptr) {
      v22 = *(_QWORD*)(v1 + 24);
      v23 = v21;
      v24 = (*(__int64 (**)(__int64*))(*v21 + 136))(v21);
      GameRoutine_17e7e0(v22, v23, v2, v24);
      v25 = *(_QWORD*)(v1 + 24);
      v26 = (*(__int64 (**)(__int64*))(*v23 + 136))(v23);
      GameRoutine_17e7e0(v25, v23, v2, v26);
      v27 = *(_QWORD*)(v1 + 24);
      v28 = (*(__int64 (**)(__int64*))(*v23 + 136))(v23);
      GameRoutine_17e7e0(v27, v23, v2, v28);
      v29 = *(_QWORD*)(v1 + 24);
      v30 = (*(__int64 (**)(__int64*))(*v23 + 136))(v23);
      GameRoutine_17e7e0(v29, v23, v2, v30);
      v31 = *(_QWORD*)(v1 + 24);
      v32 = (*(__int64 (**)(__int64*))(*v23 + 136))(v23);
      GameRoutine_17e7e0(v31, v23, v2, v32);
      v33 = *(_QWORD*)(v1 + 24);
      v34 = (*(__int64 (**)(__int64*))(*v23 + 136))(v23);
      GameRoutine_17e7e0(v33, v23, v2, v34);
      v35 = *(_QWORD*)(v1 + 24);
      v36 = (*(__int64 (**)(__int64*))(*v23 + 136))(v23);
      GameRoutine_17e7e0(v35, v23, v2, v36);
      v37 = *(_QWORD*)(v1 + 24);
      v38 = (*(__int64 (**)(__int64*))(*v23 + 136))(v23);
      GameRoutine_17e7e0(v37, v23, v2, v38);
    }
    v39 = GameRoutine_17b320(v1 + 152);
    if (v39 != nullptr) {
      v40 = *(_QWORD*)(v1 + 24);
      v41 = v39;
      v42 = (*(__int64 (**)(__int64*))(*v39 + 136))(v39);
      GameRoutine_17e7e0(v40, v41, v2, v42);
      v43 = *(_QWORD*)(v1 + 24);
      v44 = (*(__int64 (**)(__int64*))(*v41 + 136))(v41);
      GameRoutine_17e7e0(v43, v41, v2, v44);
      v45 = *(_QWORD*)(v1 + 24);
      v46 = (*(__int64 (**)(__int64*))(*v41 + 136))(v41);
      GameRoutine_17e7e0(v45, v41, v2, v46);
      v47 = *(_QWORD*)(v1 + 24);
      v48 = (*(__int64 (**)(__int64*))(*v41 + 136))(v41);
      GameRoutine_17e7e0(v47, v41, v2, v48);
      v49 = *(_QWORD*)(v1 + 24);
      v50 = (*(__int64 (**)(__int64*))(*v41 + 136))(v41);
      GameRoutine_17e7e0(v49, v41, v2, v50);
      v51 = *(_QWORD*)(v1 + 24);
      v52 = (*(__int64 (**)(__int64*))(*v41 + 136))(v41);
      GameRoutine_17e7e0(v51, v41, v2, v52);
      v53 = *(_QWORD*)(v1 + 24);
      v54 = (*(__int64 (**)(__int64*))(*v41 + 136))(v41);
      GameRoutine_17e7e0(v53, v41, v2, v54);
      v55 = *(_QWORD*)(v1 + 24);
      v56 = (*(__int64 (**)(__int64*))(*v41 + 136))(v41);
      GameRoutine_17e7e0(v55, v41, v2, v56);
    }
    v57 = GameRoutine_17b320(v1 + 176);
    if (v57 != nullptr) {
      v58 = *(_QWORD*)(v1 + 24);
      v59 = v57;
      v60 = (*(__int64 (**)(__int64*))(*v57 + 136))(v57);
      GameRoutine_17e7e0(v58, v59, v2, v60);
      v61 = *(_QWORD*)(v1 + 24);
      v62 = (*(__int64 (**)(__int64*))(*v59 + 136))(v59);
      GameRoutine_17e7e0(v61, v59, v2, v62);
      v63 = *(_QWORD*)(v1 + 24);
      v64 = (*(__int64 (**)(__int64*))(*v59 + 136))(v59);
      GameRoutine_17e7e0(v63, v59, v2, v64);
      v65 = *(_QWORD*)(v1 + 24);
      v66 = (*(__int64 (**)(__int64*))(*v59 + 136))(v59);
      GameRoutine_17e7e0(v65, v59, v2, v66);
      v67 = *(_QWORD*)(v1 + 24);
      v68 = (*(__int64 (**)(__int64*))(*v59 + 136))(v59);
      GameRoutine_17e7e0(v67, v59, v2, v68);
      v69 = *(_QWORD*)(v1 + 24);
      v70 = (*(__int64 (**)(__int64*))(*v59 + 136))(v59);
      GameRoutine_17e7e0(v69, v59, v2, v70);
      v71 = *(_QWORD*)(v1 + 24);
      v72 = (*(__int64 (**)(__int64*))(*v59 + 136))(v59);
      GameRoutine_17e7e0(v71, v59, v2, v72);
      v73 = *(_QWORD*)(v1 + 24);
      v74 = (*(__int64 (**)(__int64*))(*v59 + 136))(v59);
      GameRoutine_17e7e0(v73, v59, v2, v74);
    }
    v75 = GameRoutine_17b320(v1 + 104);
    if (v75 != nullptr) {
      (*(void (**)(__int64*, _QWORD))(*v75 + 152))(v75, 0);
    }
    v76 = GameRoutine_17b320(v1 + 128);
    if (v76 != nullptr) {
      (*(void (**)(__int64*, _QWORD))(*v76 + 152))(v76, 0);
    }
    v77 = GameRoutine_17b320(v1 + 152);
    if (v77 != nullptr) {
      (*(void (**)(__int64*, _QWORD))(*v77 + 152))(v77, 0);
    }
    v78 = GameRoutine_17b320(v1 + 176);
    if (v78 != nullptr) {
      (*(void (**)(__int64*, _QWORD))(*v78 + 152))(v78, 0);
    }
    GameRoutine_17d780(*(_QWORD*)(v1 + 24));
    *(_BYTE*)(v1 + 17) = 1;
    GameRoutine_1a09b80(GameData_2134be8);
    return GameRoutine_1a09b80(&GameData_2199b50);
  }
  return result;
}

__int64 GameHr_17ba40(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;

  if (*(_BYTE*)(result + 17) == 1) {
    v2 = result;
    GameRoutine_17bb20(result, a2);
    GameRoutine_1a09b70(&GameData_2199b50);
    GameRoutine_1a09b70(&GameData_2199b90);
    v3 = GameRoutine_17b320(v2 + 104);
    if (v3 != nullptr) {
      (*(void (**)(__int64*))(*v3 + 248))(v3);
    }
    v4 = GameRoutine_17b320(v2 + 128);
    if (v4 != nullptr) {
      (*(void (**)(__int64*))(*v4 + 248))(v4);
    }
    v5 = GameRoutine_17b320(v2 + 152);
    if (v5 != nullptr) {
      (*(void (**)(__int64*))(*v5 + 248))(v5);
    }
    v6 = GameRoutine_17b320(v2 + 176);
    if (v6 != nullptr) {
      (*(void (**)(__int64*))(*v6 + 248))(v6);
    }
    GameRoutine_17d780(*(_QWORD*)(v2 + 24));
    *(_BYTE*)(v2 + 17) = 0;
    GameRoutine_1a09b80(&GameData_2199b90);
    return GameRoutine_1a09b80(&GameData_2199b50);
  }
  return result;
}

__int64 GameHr_18e190(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      unsigned __int8* a5, __int64 a6, __int64 a7, __int64 a8)
{
  _BYTE* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  int v20;
  int v21;
  __int64 v22;
  struct {
    __int64 v24;
    int v25;
  } v24_;

  v13 = (_BYTE*)(a1 + 4096);
  Voice_1449c0((_QWORD*)a1, a2, a4, a7, a8);
  *(_QWORD*)(a1 + 6072) = 0;
  v14 = GameData_2134c90;
  *(_DWORD*)(a1 + 6080) = 0x2000;
  v13[1992] = 0;
  v13[1795] = 1;
  *(_DWORD*)(a1 + 5792) = 1;
  v24_.v24 = 0;
  v24_.v25 = 0x2000;
  *(_QWORD*)(a1 + 5592) = v14 + 245;
  *(_QWORD*)a1 = v14 + 2;
  *(_QWORD*)(a1 + 40) = v14 + 104;
  if (a3 != 0) {
    v15 = a3 + 5592;
  }
  else {
    v15 = 0;
  }
  snd_fnd_WeakHandle_set((__int64)&v24_.v24, v15);
  GameRoutine_112180_alt1(a1 + 5800, (__int64)&v24_.v24);
  v24_.v24 = 0;
  v24_.v25 = 0x2000;
  if (a6 != 0) {
    v16 = a6 + 5592;
  }
  else {
    v16 = 0;
  }
  snd_fnd_WeakHandle_set((__int64)&v24_.v24, v16);
  GameRoutine_112180_alt1(a1 + 5848, (__int64)&v24_.v24);
  *(_DWORD*)(a1 + 5920) = *(_DWORD*)(a7 + 208);
  LODWORD(v24_.v24) = (unsigned int)snd_fnd_calcCrc32(a5, 0);
  HIDWORD(v24_.v24) =
      (unsigned int)snd_fnd_calcCrc32Reverse((const char*)a5, 0);
  v17 = GameRoutine_f5740_alt1((int*)&v24_.v24, (_QWORD*)(a1 + 5656));
  v18 = *(_QWORD*)(a1 + 5648);
  if (v17 != 0) {
    snd_data_f0230(v18, v17, nullptr);
    GameRoutine_190200_alt1(*(_QWORD*)(a1 + 5648) + 32LL, (char*)a5);
    v19 = *(char**)(v17 + 24);
    if (v19 != nullptr) {
      GameRoutine_190200_alt1(*(_QWORD*)(a1 + 5648) + 80LL, v19);
    }
  }
  else {
    v20 = v24_.v24;
    v21 = HIDWORD(v24_.v24);
    *(_QWORD*)(v18 + 56) = v24_.v24;
    v22 = *(_QWORD*)(a1 + 5648);
    *(_DWORD*)(v22 + 104) = v20;
    *(_DWORD*)(v22 + 108) = v21;
    GameRoutine_190200_alt1(*(_QWORD*)(a1 + 5648) + 32LL, (char*)a5);
    GameRoutine_190200_alt1(*(_QWORD*)(a1 + 5648) + 80LL, (char*)a5);
    v13[1799] = 1;
  }
  GameRoutine_190200_alt1(*(_QWORD*)(a1 + 5648), (char*)a5);
  *(_QWORD*)(*(_QWORD*)(a1 + 5648) + 24LL) = v24_.v24;
  GameHr_18d540(a1, a7);
  WaveVoice_18d880(a1, a7);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
}

__int64 GameHr_18e380(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      _DWORD* a5, __int64 a6, __int64 a7, __int64 a8,
                      __int64 a9)
{
  _BYTE* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int8* v24;
  _QWORD* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  bool v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  bool v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v42;
  int v43;

  v15 = (_BYTE*)(a1 + 4096);
  GameRoutine_1449c0(a1, a2, a4, a8, a9);
  *(_QWORD*)(a1 + 6072) = 0;
  v16 = GameData_2134c90;
  *(_DWORD*)(a1 + 6080) = 0x2000;
  v15[1992] = 0;
  v42 = 0;
  v43 = 0x2000;
  *(_QWORD*)(a1 + 5592) = v16 + 245;
  *(_QWORD*)a1 = v16 + 2;
  *(_QWORD*)(a1 + 40) = v16 + 104;
  v15[1795] = 1;
  *(_DWORD*)(a1 + 5792) = 1;
  if (a3 != 0) {
    v17 = a3 + 5592;
  }
  else {
    v17 = 0;
  }
  GameRoutine_1121e0(&v42, v17);
  GameRoutine_112180(a1 + 5800, &v42);
  v42 = 0;
  v43 = 0x2000;
  if (a7 != 0) {
    v18 = a7 + 5592;
  }
  else {
    v18 = 0;
  }
  GameRoutine_1121e0(&v42, v18);
  GameRoutine_112180(a1 + 5848, &v42);
  *(_DWORD*)(a1 + 5920) = *(_DWORD*)(a8 + 208);
  v19 = GameRoutine_f5740(a5, a1 + 5656);
  v20 = *(_QWORD*)(a1 + 5648);
  if (v19 != 0) {
    GameRoutine_f0230(v20, v19, 0);
    v21 = *(_QWORD*)(v19 + 24);
    if (v21 != 0) {
      GameRoutine_190200(*(_QWORD*)(a1 + 5648) + 80LL, v21);
    }
    v22 = *(_QWORD*)(a1 + 5648);
    if (a6 != 0) {
      goto LABEL_11;
    }
  LABEL_40:
    *(_DWORD*)(v22 + 24) = *a5;
    *(_DWORD*)(v22 + 28) = a5[1];
    goto LABEL_41;
  }
  *(_DWORD*)(v20 + 56) = *a5;
  *(_DWORD*)(v20 + 60) = a5[1];
  v23 = *(_QWORD*)(a1 + 5648);
  *(_DWORD*)(v23 + 104) = *a5;
  *(_DWORD*)(v23 + 108) = a5[1];
  if (a6 != 0) {
    v24 = (unsigned __int8*)(a6 + 80);
    v25 = (_QWORD*)(*(_QWORD*)(a1 + 5648) + 32LL);
    if (v25 != (_QWORD*)(a6 + 80)) {
      v26 = *v24;
      if ((*(_BYTE*)v25 & 1) == 0) {
        if ((v26 & 1) != 0) {
          GameRoutine_a3a3a0(v25, *(_QWORD*)(a6 + 96), *(_QWORD*)(a6 + 88));
          v29 = *(_QWORD**)(a1 + 5648);
          if (v29 == (_QWORD*)a6) {
            goto LABEL_39;
          }
        }
        else {
          v27 = *(_QWORD*)v24;
          v28 = *(_QWORD*)(a6 + 96);
          *(_QWORD*)(*(_QWORD*)(a1 + 5648) + 40LL) = *(_QWORD*)(a6 + 88);
          v25[2] = v28;
          *v25 = v27;
          v29 = *(_QWORD**)(a1 + 5648);
          if (v29 == (_QWORD*)a6) {
            goto LABEL_39;
          }
        }
        goto LABEL_26;
      }
      v30 = (v26 & 1) == 0;
      v31 = v26 >> 1;
      if (v30) {
        v32 = a6 + 81;
      }
      else {
        v32 = *(_QWORD*)(a6 + 96);
      }
      if (v30) {
        v33 = v31;
      }
      else {
        v33 = *(_QWORD*)(a6 + 88);
      }
      GameRoutine_a3a260(v25, v32, v33);
    }
    v29 = *(_QWORD**)(a1 + 5648);
    if (v29 == (_QWORD*)a6) {
      goto LABEL_39;
    }
  LABEL_26:
    v34 = *v24;
    if ((v29[10] & 1) != 0) {
      v37 = (v34 & 1) == 0;
      v38 = v34 >> 1;
      if (v37) {
        v39 = a6 + 81;
      }
      else {
        v39 = *(_QWORD*)(a6 + 96);
      }
      if (v37) {
        v40 = v38;
      }
      else {
        v40 = *(_QWORD*)(a6 + 88);
      }
      GameRoutine_a3a260(v29 + 10, v39, v40);
    }
    else if ((v34 & 1) != 0) {
      GameRoutine_a3a3a0(v29 + 10, *(_QWORD*)(a6 + 96), *(_QWORD*)(a6 + 88));
    }
    else {
      v35 = *(_QWORD*)v24;
      v36 = *(_QWORD*)(a6 + 96);
      v29[11] = *(_QWORD*)(a6 + 88);
      v29[12] = v36;
      v29[10] = v35;
    }
  }
LABEL_39:
  v15[1799] = 1;
  v22 = *(_QWORD*)(a1 + 5648);
  if (a6 == 0) {
    goto LABEL_40;
  }
LABEL_11:
  GameRoutine_f1b80(v22, a6);
LABEL_41:
  GameRoutine_18d540(a1, a8);
  GameRoutine_18d880(a1, a8);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
}

__int64 GameHr_1e0920(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  const char* v20;
  const char* v21;
  const char* v22;
  const char* v23;
  unsigned int v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 result;
  __int64 v28;
  char v29;
  char v30;
  unsigned int v31;
  _QWORD* v32;
  unsigned int v33;
  _QWORD* v34;
  char v35[4];
  __int64 (*v36)();
  struct {
    _QWORD v37[2];
    char v38;
    char gap97_[7];
    char v39;
  } v37_;
  _QWORD v40[4];
  struct {
    _BYTE v41[32];
    __int64* v42;
    __int64 v43;
  } v41_;
  struct {
    __int64 v44;
    char gap200_[32];
    __int64* v45;
    __int64 v46;
  } v44_;
  __int64 v47;

  v3 = *(_QWORD*)(a1 + 16);
  v41_.v42 = nullptr;
  v41_.v43 = 0;
  v44_.v45 = nullptr;
  v44_.v46 = 0;
  v29 = *(_BYTE*)(v3 + 13200);
  GameRoutine_1d5ee0_alt1((__int64)v41_.v41, v3 + 13208);
  v7 = *(_QWORD*)(a1 + 16);
  v40[0] = 0;
  v40[1] = 0;
  v30 = a3;
  v28 = *(_QWORD*)(v7 + 13328);
  if ((a3 & 1) != 0) {
    v37_.v38 = 0;
    v37_.v37[1] = 0;
    v37_.v39 = 3;
    v36 = asCOutputBuffer_Callback;
    v37_.v37[0] = 0;
    (*(void (**)(__int64, __int64 (**)(void), _QWORD*, __int64))(
        *(_QWORD*)v7 + 40LL))(v7, &v36, v40, 3);
    v7 = *(_QWORD*)(a1 + 16);
  }
  if (a2 < *(_DWORD*)(v7 + 1744)) {
    v8 = a2;
    do {
      v9 = *(_QWORD*)(v7 + 1736);
      v10 = *(_QWORD*)(v7 + 1928);
      v35[0] = 0;
      v11 = *(_QWORD*)(v9 + 8 * v8);
      v12 = *(_QWORD*)(v10 + 8LL * *(unsigned int*)(v11 + 364));
      if (v12 != 0) {
        if ((asCScriptEngine_CallGlobalFunctionRetBool(
                 v7, v11, (__int64)v35, *(_QWORD*)(v12 + 344), v12) &
             1) != 0) {
          if (v35[0] == 1) {
            *(_DWORD*)(v11 + 48) &= ~4u;
          }
        }
        else {
          asCDataType_Format((void*)((__int64)&v36), *(_QWORD*)(v11 + 456),
                             **(_QWORD**)(*(_QWORD*)(a1 + 16) + 13408LL), 0);
          if (*(_DWORD*)(v11 + 464) >= 2u) {
            v13 = 24;
            v14 = 1;
            do {
              GameRoutine_25fd90_alt1((unsigned int*)&v36, ",");
              asCDataType_Format(
                  (void*)((__int64)&v33), *(_QWORD*)(v11 + 456) + v13,
                  **(_QWORD**)(*(_QWORD*)(a1 + 16) + 13408LL), 0);
              GameRoutine_25fee0_alt1((unsigned int*)&v36, &v33);
              asCString_Destroy_asCString((__int64)&v33);
              ++v14;
              v13 += 24;
            } while (v14 < *(unsigned int*)(v11 + 464));
          }
          asCString_asCString_25f460((__int64)&v33);
          if (*(_DWORD*)(v11 + 8) >= 0xCu) {
            v15 = *(_QWORD*)(v11 + 16);
          }
          else {
            v15 = v11 + 16;
          }
          if ((unsigned int)v36 >= 0xC) {
            v16 = (_QWORD*)v37_.v37[0];
          }
          else {
            v16 = v37_.v37;
          }
          asCString_Format(
              &v33, "Attempting to instantiate invalid template type '%s<%s>'",
              v15, v16);
          v17 = *(unsigned int*)(v11 + 60);
          if ((v17 & 0x80000000) != 0) {
            v23 = &GameData_1a9f09e;
          }
          else {
            v18 =
                *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 12496LL) + 8 * v17);
            v19 = *(_DWORD*)v18;
            v22 = *(const char**)(v18 + 8);
            v20 = (const char*)(v18 + 8);
            v21 = v22;
            if (v19 >= 0xC) {
              v23 = v21;
            }
            else {
              v23 = v20;
            }
          }
          asCString_asCString_25f730(&v31, v23);
          v24 = *(_DWORD*)(v11 + 64);
          ++*(_DWORD*)a1;
          if ((*(_BYTE*)(a1 + 8) & 1) == 0) {
            if (v31 >= 0xC) {
              v25 = v32;
            }
            else {
              v25 = &v32;
            }
            if (v33 >= 0xC) {
              v26 = v34;
            }
            else {
              v26 = &v34;
            }
            (*(void (**)(_QWORD, _QWORD*, _QWORD, _QWORD, _QWORD, _QWORD*))(
                **(_QWORD**)(a1 + 16) + 56LL))(
                *(_QWORD*)(a1 + 16), v25, v24 & 0xFFFFF, v24 >> 20, 0, v26);
          }
          asCString_Destroy_asCString((__int64)&v31);
          asCString_Destroy_asCString((__int64)&v33);
          asCString_Destroy_asCString((__int64)&v36);
        }
      }
      v7 = *(_QWORD*)(a1 + 16);
      ++v8;
    } while (v8 < *(unsigned int*)(v7 + 1744));
  }
  if ((v30 & 1) != 0) {
    *(_BYTE*)(v7 + 13200) = v29;
    GameRoutine_1d5ee0_alt1(*(_QWORD*)(a1 + 16) + 13208LL, (__int64)v41_.v41);
    *(_QWORD*)(*(_QWORD*)(a1 + 16) + 13328LL) = v28;
  }
  asCOutputBuffer_Destroy_asCOutputBuffer((__int64)v40);
  if (v44_.v45 != nullptr) {
    LODWORD(v44_.v46) = 0;
    if (v44_.v45 != &v47) {
      GameData_219a968_alt1(v44_.v45);
    }
  }
  result = (__int64)v41_.v42;
  v44_.v45 = nullptr;
  HIDWORD(v44_.v46) = 0;
  if (v41_.v42 != nullptr) {
    LODWORD(v41_.v43) = 0;
    if (v41_.v42 != &v44_.v44) {
      return GameData_219a968_alt1(v41_.v42);
    }
  }
  return result;
}

__int64 GameHr_2678e0(float* a1, __int64 a2, int a3)
{
  int v3;
  float v4;
  __int64 v5;
  float* v6;
  float* v7;
  float v8;
  float v9;
  __int64 v11;
  float* v12;
  int v13;
  __int64 v14;
  int v15;
  float v16;
  float* v17;
  float v18;
  float* v19;
  float v20;
  float v21;

  v3 = a3 - 1;
  if (a3 < 1) {
    return 0;
  }
  v4 = a1[2];
  v5 = 0;
  if (a3 == 1) {
    LOBYTE(v15) = 0;
    v13 = 0;
  }
  else {
    v11 = a3 & 0x7FFFFFFE;
    v12 = (float*)(a2 + 12);
    v13 = -1;
    v14 = 0;
    v15 = 0;
    do {
      v16 = *(v12 - 1);
      v17 = (float*)(a2 + 12LL * v3);
      v18 = v17[2];
      if (v16 > v4 == v18 <= v4 &&
          *a1 <
              (float)(*(v12 - 3) + (float)((float)((float)(v4 - v16) *
                                                   (float)(*v17 - *(v12 - 3))) /
                                           (float)(v18 - v16)))) {
        v15 ^= 1u;
      }
      v19 = (float*)(a2 + (v14 >> 30));
      v20 = v12[2];
      v21 = v19[2];
      if (v20 > v4 == v21 <= v4 &&
          *a1 < (float)(*v12 + (float)((float)((float)(v4 - v20) *
                                               (float)(*v19 - *v12)) /
                                       (float)(v21 - v20)))) {
        v15 ^= 1u;
      }
      v13 += 2;
      v14 += 0x600000000LL;
      v11 -= 2;
      v12 += 6;
      v3 = v13;
      v5 += 24;
    } while (v11 != 0);
  }
  if ((a3 & 1) != 0) {
    v6 = (float*)(a2 + v5);
    v7 = (float*)(a2 + 12LL * v13);
    v8 = v6[2];
    v9 = v7[2];
    if (v8 > v4 == v9 <= v4 &&
        *a1 < (float)(*v6 +
                      (float)((float)((float)(v4 - v8) * (float)(*v7 - *v6)) /
                              (float)(v9 - v8)))) {
      LOBYTE(v15) = v15 ^ 1;
    }
  }
  return v15 & 1;
}

__int64 GameHr_268800(__int64* a1, float* a2, float* a3, __int64 a4, _DWORD* a5,
                      __int64 a6)
{

#pragma clang fp contract(off)
  void (*v12)(const char*, const char*, __int64);
  __int64 v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  int v17;
  _QWORD v19[3];
  int v20;
  __int128 v21;
  char v22;

  v12 = (void (*)(const char*, const char*, __int64))dtAssertFailGetCustom();
  v13 = *a1;
  if (v12 != nullptr) {
    if (v13 == 0) {
      v12("m_nav",
          "/Program/Externals/recastnavigation/Sources/DetourNavMeshQuery.cpp",
          706);
    }
  }
  else if (v13 == 0) {
    __assert_fail(
        "m_nav",
        "/Program/Externals/recastnavigation/Sources/DetourNavMeshQuery.cpp",
        706, "findNearestPoly");
    __udf(0);
  }
  if (a5 != nullptr) {
    v19[2] = a2;
    v21 = (__typeof__(v21)){0};
    v22 = 0;
    v19[0] = GameData_2134fb8 + 2;
    v19[1] = a1;
    v20 = 2139095039;
    v14 = dtNavMeshQuery_queryPolygons(a1, a2, a3, a4, (__int64)v19);
    if ((v14 & 0x80000000) != 0) {
      v16 = v14;
    }
    else {
      v15 = v21;
      v16 = 0x40000000;
      *a5 = v21;
      if (a6 != 0 && v15 != 0) {
        v17 = HIDWORD(v21);
        *(_QWORD*)a6 = *(_QWORD*)((char*)&v21 + 4);
        *(_DWORD*)(a6 + 8) = v17;
      }
    }
    dtFindNearestPolyQuery_Destroy_dtFindNearestPolyQuery(v19);
  }
  else {
    return (unsigned int)-2147483640;
  }
  return v16;
}

__int64 GameHr_275f90(__int64 a1)
{
  GameRoutine_278580();
  *(_QWORD*)a1 = GameData_2134fe8[0] + 2;
  GameRoutine_285200(a1 + 672);
  GameRoutine_2b3530(a1 + 744);
  *(_WORD*)(a1 + 872) = 0;
  *(_DWORD*)(a1 + 876) = 0;
  *(_WORD*)(a1 + 1520) = 0;
  *(_QWORD*)(a1 + 1536) = 0;
  *(_DWORD*)(a1 + 1544) = 0;
  *(_QWORD*)(a1 + 1524) = 0;
  return GameRoutine_1a0a040(a1 + 1520, 1, 0);
}

__int64 GameHr_2766a0(_QWORD* a1)
{
  __int64* v2;

  GameRoutine_278580();
  v2 = GameData_2134ff0;
  a1[84] = 0;
  *a1 = v2 + 2;
  return GameRoutine_285200(a1 + 85);
}

__int64 GameHr_276720(__int64 a1, __int64 a2)
{
  int v4;
  int v5;

  GameRoutine_285210(a1 + 680, a2);
  GameRoutine_2785d0(a1, a1 + 680);
  v4 = GameRoutine_284400(a1 + 680);
  GameRoutine_285290(a1 + 680, a2 + v4);
  v5 = GameRoutine_2843d0(a1 + 680);
  if ((unsigned int)GameRoutine_284370(a1 + 680) != -1) {
    GameRoutine_285280(a1 + 680, a2 + v5);
  }
  *(_QWORD*)(a1 + 672) = a2;
  return 1;
}

__int64 GameHr_2767b0(__int64 a1)
{
  *(_QWORD*)(a1 + 672) = 0;
  GameRoutine_285270(a1 + 680);
  return GameRoutine_278600(a1);
}

__int64 GameHr_276800(__int64 a1, __int64 a2)
{
  int v2;
  int v4;
  __int64 v5;
  __int64 result;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  __int64 v16;
  __int64 v17;
  _QWORD v18[3];
  _QWORD v19[2];
  __int64 v20;
  _QWORD v21[2];

  v2 = a2;
  v21[0] = -1;
  v21[1] = 0;
  if ((GameRoutine_278f90(a1, a2, v21) & 1) == 0 ||
      (v4 = HIDWORD(v21[0]), HIDWORD(v21[0]) == -1)) {
    v7 = GameRoutine_278660(a1);
    if (v7 != 0) {
      v8 = v7;
      v9 = 0;
      while (1) {
        v20 = 0xFFFFFFFFLL;
        if ((GameRoutine_278f00(a1, &v20, v9 | 0x6000000u) & 1) != 0) {
          v19[0] = -1;
          v19[1] = 0;
          if ((GameRoutine_278f90(a1, (unsigned int)v20, v19) & 1) != 0) {
            v10 = *(_QWORD*)(a1 + 672);
            v11 = HIDWORD(v19[0]);
            v12 = GameRoutine_284430(a1 + 680);
            __builtin_memset(v18, 0, sizeof(v18));
            GameRoutine_283000(v18, v10 + (unsigned int)(v12 + v11));
            v13 = *(_DWORD*)v18[0];
            if (*(_DWORD*)v18[0] != 0) {
              break;
            }
          }
        }
      LABEL_6:
        if (++v9 == v8) {
          return 0;
        }
      }
      v14 = 0;
      while (1) {
        v16 = 0;
        v17 = 0;
        if ((GameRoutine_2830f0(v18, &v16, v14) & 1) != 0) {
          result = v17;
          if ((_DWORD)v16 == v2 && v17 != 0) {
            break;
          }
        }
        if (v13 == ++v14) {
          goto LABEL_6;
        }
      }
    }
    else {
      return 0;
    }
  }
  else {
    v5 = *(_QWORD*)(a1 + 672);
    return v5 + (unsigned int)GameRoutine_284430(a1 + 680) + v4;
  }
  return result;
}

__int64 GameHr_276960(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4,
                      __int64 a5)
{
  __int64 result;
  __int64 v7;

  result = 0;
  if (a3 >= 0x20) {
    v7 = *(_QWORD*)(a1 + 672);
    if (v7 != 0) {
      GameRoutine_2a4dd0(a2, v7 + a4, a5);
      return a2;
    }
  }
  return result;
}

__int64 GameHr_276b50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64* v6;
  __int64 result;

  GameRoutine_2780f0();
  v6 = GameData_2135018[0];
  *(_QWORD*)(a1 + 224) = 0;
  *(_DWORD*)(a1 + 232) = 0;
  *(_WORD*)(a1 + 272) = 1;
  *(_BYTE*)(a1 + 274) = 1;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)a1 = v6 + 2;
  *(_QWORD*)(a1 + 208) = v6 + 13;
  *(_QWORD*)(a1 + 216) = 0;
  result = GameRoutine_278240(a1, a2);
  *(_QWORD*)(a1 + 216) = a3;
  *(_QWORD*)(a1 + 224) = a2;
  *(_WORD*)(a1 + 273) = 1;
  return result;
}

_QWORD* GameHr_277240(_QWORD* result)
{
  *result = GameData_2135020[0] + 2;
  result[1] = 0x3F060A923F490FDBLL;
  result[2] = 1074137746;
  return result;
}

float GameHr_2775e0(float* a1, _DWORD* a2, __int64 a3, __int64 a4, __int64 a5,
                    float a6)
{
  float v6;
  int v7;
  float v8;
  float v9;
  int v10;
  _DWORD* v11;
  float* v12;
  float v13;
  float result;

  v6 = *(float*)(a4 + 100);
  v7 = *(_DWORD*)(a3 + 64);
  v8 = 1.0;
  if (a6 > v6) {
    v9 = *(float*)(a4 + 104);
    v10 = *(unsigned __int8*)(a5 + 48);
    if (v10 == 2) {
      v8 = (float)((float)((float)-(float)(a6 - v6) / v9) *
                   (float)(1.0 - *(float*)(a5 + 44))) +
           1.0;
      if (v8 < 0.0) {
        v8 = 0.0;
      }
    }
    else if (v10 == 1) {
      v11 = a2;
      v12 = a1;
      v13 = GameRoutine_1a0a550(*(float*)(a5 + 44), (float)(a6 - v6) / v9);
      a1 = v12;
      a2 = v11;
      v8 = v13;
    }
  }
  *a1 = v8;
  result = (float)(1.0 - v8) * (float)v7;
  *a2 = -(int)result;
  return result;
}

float* GameHr_277830(float* result, float a2, __int64 a3, float* a4)
{
  float v4;
  float v5;

  v4 = a4[25];
  v5 = 0.0;
  if (a2 > v4) {
    v5 = (float)((float)(a2 - v4) / a4[26]) * a4[28];
    if (v5 > a4[29]) {
      v5 = a4[29];
    }
  }
  *result = v5;
  return result;
}

__int64 GameHr_277c00(__int64 result)
{
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 96) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 104) = 1065353216;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 88) = 0;
  *(_QWORD*)(result + 112) = 0x3F8000003F000000LL;
  *(_QWORD*)(result + 120) = 0x100000001LL;
  *(_BYTE*)(result + 128) = 1;
  *(_QWORD*)(result + 136) = result + 136;
  *(_QWORD*)(result + 144) = result + 136;
  return result;
}

__int64 GameHr_277d40(__int64 result)
{
  __int64* v1;

  v1 = GameData_2135028[0];
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = result + 40;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_BYTE*)(result + 88) = 0;
  *(_QWORD*)result = v1 + 2;
  *(_QWORD*)(result + 8) = v1 + 10;
  *(_QWORD*)(result + 48) = result + 40;
  *(_QWORD*)(result + 56) = &GameData_219c9f8;
  *(_QWORD*)(result + 64) = 0x3F66666600000020LL;
  *(_QWORD*)(result + 72) = 0xFFFFFFFF00000000LL;
  return result;
}

__int64 GameHr_277d90(__int64 a1, __int64 a2)
{
  char v2;
  __int64 result;
  struct {
    __int64 v4;
    __int64 v5;
    __int64 v6;
    __int64 v7;
    __int64 v8;
  } v4_;

  v4_.v7 = 0;
  v4_.v8 = 0;
  v4_.v5 = 0;
  v4_.v6 = 0;
  v4_.v4 = 0;
  v2 = BaseNx_278c70(a2, (__int64)&v4_.v4);
  result = 0;
  if ((v2 & 1) != 0) {
    return (__int64)((int)v4_.v5 + (int)v4_.v4 + HIDWORD(v4_.v6)) << 6;
  }
  return result;
}

__int64 GameHr_277df0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4;
  __int64 v8;
  struct {
    __int64 v10;
    __int64 v11;
    __int64 v12;
    __int64 v13;
    __int64 v14;
  } v10_;

  v4 = *(unsigned __int8*)(a1 + 88);
  if ((v4 & 1) == 0) {
    v10_.v13 = 0;
    v10_.v14 = 0;
    v10_.v11 = 0;
    v10_.v12 = 0;
    v10_.v10 = 0;
    v8 = 0;
    if ((BaseNx_278c70(a2, (__int64)&v10_.v10) & 1) != 0) {
      v8 = (__int64)((int)v10_.v11 + (int)v10_.v10 + HIDWORD(v10_.v12)) << 6;
    }
    GameHr_2a4c20(a1 + 16, a3, a4, 64, 16);
    *(_QWORD*)(a1 + 80) = a4 - v8;
    *(_BYTE*)(a1 + 88) = 1;
  }
  return v4 ^ 1u;
}

__int64 GameHr_277ea0(__int64 a1)
{
  unsigned int v1;
  __int64** v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;

  v1 = *(unsigned __int8*)(a1 + 88);
  if (*(_BYTE*)(a1 + 88) != 0) {
    *(_QWORD*)(a1 + 56) = &GameData_219c9f8;
    *(_QWORD*)(a1 + 64) = 0x3F66666600000020LL;
    *(_QWORD*)(a1 + 72) = 0xFFFFFFFF00000000LL;
    v2 = (__int64**)(a1 + 40);
    while (*(__int64***)(a1 + 48) != v2) {
      v3 = *v2;
      if (*v2 != (__int64*)v2) {
        v4 = (__int64*)v3[1];
        v5 = *v4;
        *(_QWORD*)(*v3 + 8) = v4;
        *v4 = *v3;
        *(_QWORD*)(v5 + 8) = v3;
        *v3 = v5;
      }
    }
    GameRoutine_2a4d20(a1 + 16);
    *(_QWORD*)(a1 + 80) = 0;
    *(_BYTE*)(a1 + 88) = 0;
  }
  return v1;
}

__int64 GameHr_277fb0(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v3;

  if (a2 != 64) {
    return 0;
  }
  result = GameRoutine_2a4da0(a1 + 16);
  if (result != 0) {
    v3 = result;
    GameRoutine_278080(result);
    return v3;
  }
  return result;
}

__int64 GameHr_278000(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v3;

  if (a2 != 64) {
    return 0;
  }
  result = GameRoutine_2a4da0(a1 + 8);
  if (result != 0) {
    v3 = result;
    GameRoutine_278080(result);
    return v3;
  }
  return result;
}

__int64 GameHr_2780f0(__int64 a1)
{
  __int64 result;

  *(_QWORD*)a1 = GameData_2135030[0] + 2;
  *(_QWORD*)(a1 + 8) = 0;
  GameRoutine_282ae0(a1 + 16);
  GameRoutine_282ae0(a1 + 48);
  GameRoutine_282ae0(a1 + 80);
  result = GameRoutine_282ae0(a1 + 112);
  *(_DWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 176) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 184) = 1065353216;
  *(_QWORD*)(a1 + 192) = 0xFFFFFFFF00000000LL;
  *(_WORD*)(a1 + 204) = 256;
  return result;
}

__int64 GameHr_278160(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 result;

  v2 = a1 + 16;
  *(_QWORD*)a1 = GameData_2135030[0] + 2;
  *(_QWORD*)(a1 + 8) = 0;
  GameRoutine_282ae0(a1 + 16);
  GameRoutine_282ae0(a1 + 48);
  GameRoutine_282ae0(a1 + 80);
  GameRoutine_282ae0(a1 + 112);
  *(_DWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 8) = a2;
  *(_QWORD*)(a1 + 144) = v2;
  *(_QWORD*)(a1 + 176) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 184) = 1065353216;
  *(_QWORD*)(a1 + 192) = 0xFFFFFFFF00000000LL;
  *(_WORD*)(a1 + 204) = 256;
  GameRoutine_282e40(v2, 0x7FFFFFFF);
  *(_QWORD*)(a1 + 152) = a1 + 48;
  GameRoutine_282e40(a1 + 48, 1);
  *(_QWORD*)(a1 + 160) = a1 + 80;
  GameRoutine_282e40(a1 + 80, 1);
  *(_QWORD*)(a1 + 168) = a1 + 112;
  result = GameRoutine_282e40(a1 + 112, 1);
  *(_WORD*)(a1 + 204) = 1;
  return result;
}

__int64 GameHr_278240(__int64 result, __int64 a2)
{
  __int64 v2;

  if ((*(_BYTE*)(result + 204) & 1) == 0) {
    *(_QWORD*)(result + 8) = a2;
    v2 = result;
    *(_QWORD*)(result + 144) = result + 16;
    GameRoutine_282e40(result + 16, 0x7FFFFFFF);
    *(_QWORD*)(v2 + 152) = v2 + 48;
    GameRoutine_282e40(v2 + 48, 1);
    *(_QWORD*)(v2 + 160) = v2 + 80;
    GameRoutine_282e40(v2 + 80, 1);
    *(_QWORD*)(v2 + 168) = v2 + 112;
    result = GameRoutine_282e40(v2 + 112, 1);
    *(_WORD*)(v2 + 204) = 1;
  }
  return result;
}

__int64 GameHr_278540(__int64 a1)
{
  if (*(_BYTE*)(a1 + 204) != 0) {
    return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 24LL))(
        *(_QWORD*)(a1 + 8));
  }
  else {
    return 0xFFFFFFFFLL;
  }
}

__int64 GameHr_278560(__int64 a1)
{
  if (*(_BYTE*)(a1 + 204) != 0) {
    return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32LL))(
        *(_QWORD*)(a1 + 8));
  }
  else {
    return 0xFFFFFFFFLL;
  }
}

__int64 GameHr_278580(__int64 result)
{
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)result = &GameData_1f7ec00;
  *(_QWORD*)(result + 8) = 0;
  *(_WORD*)(result + 24) = 47;
  return result;
}

__int64 GameHr_2785d0(__int64 a1, __int64 a2)
{
  __int64 result;

  *(_QWORD*)(a1 + 8) = a2;
  result = GameRoutine_284430(a2);
  *(_DWORD*)(a1 + 664) = result;
  return result;
}

__int64 GameHr_278600(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result = GameRoutine_285270(result);
    *(_QWORD*)(a1 + 8) = 0;
  }
  *(_WORD*)(a1 + 24) = 47;
  return result;
}

__int64 GameHr_278690(__int64 a1)
{
  _BYTE* v1;
  __int64 v2;
  _QWORD* v3;

  v1 = *(_BYTE**)(a1 + 16);
  if (v1 != nullptr && v1[8] == 1 &&
      (v2 = a1,
       v3 = X8CALL_X0(
           _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _BYTE*))(
                        *(_QWORD*)v1 + 24LL))((void*)v1, v1)),
       a1 = v2, v3 != nullptr)) {
    return (__int64)v3;
  }
  else {
    return GameRoutine_2852c0(*(_QWORD*)(a1 + 8));
  }
}

__int64 GameHr_278790(__int64 a1, unsigned int a2)
{
  __int64 v4;
  _BYTE* v5;

  v4 = (unsigned int)GameRoutine_285e70(*(_QWORD*)(a1 + 8));
  v5 = *(_BYTE**)(a1 + 16);
  if (v5 != nullptr && v5[8] == 1) {
    return (*(__int64 (**)(_BYTE*, _QWORD, __int64))(*(_QWORD*)v5 + 160LL))(
        v5, a2, v4);
  }
  else {
    return (unsigned int)v4;
  }
}

__int64 GameHr_278800(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  char v8;
  _QWORD* v9;
  char v10;
  unsigned __int8 v11;

  v8 = GameRoutine_285ea0(*(_QWORD*)(a1 + 8));
  v9 = *(_QWORD**)(a1 + 16);
  if (v9 != nullptr) {
    if (*((_BYTE*)v9 + 8) == 1) {
      v10 = v8;
      v11 = (unsigned __int8)X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(
                       PSEUDO_X8, _QWORD*, __int64, _QWORD, _QWORD))(
                       *v9 + 152LL))((void*)v9, v9, a2, a3, a4));
      v8 = v10;
    }
    else {
      v11 = 0;
    }
    v8 |= v11;
  }
  return v8 & 1;
}

_QWORD* GameHr_278890(__int64 a1)
{
  _BYTE* v2;
  __int64 v3;
  _BYTE* v4;
  _QWORD* result;

  v2 = *(_BYTE**)(a1 + 16);
  if (v2 == nullptr) {
    return (_QWORD*)GameRoutine_285e40(*(_QWORD*)(a1 + 8));
  }
  if (v2[8] != 1) {
    return (_QWORD*)GameRoutine_285e40(*(_QWORD*)(a1 + 8));
  }
  v3 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v2 + 24LL))(v2);
  if (v3 == 0) {
    return (_QWORD*)GameRoutine_285e40(*(_QWORD*)(a1 + 8));
  }
  v4 = *(_BYTE**)(a1 + 16);
  if (v4[8] != 1) {
    return (_QWORD*)GameRoutine_285e40(*(_QWORD*)(a1 + 8));
  }
  result = X8CALL_X0(
      _QWORD*,
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, __int64))(
          *(_QWORD*)v4 + 40LL))((void*)v4, *(_QWORD*)(a1 + 16), v3));
  if ((_DWORD)result == 0) {
    return (_QWORD*)GameRoutine_285e40(*(_QWORD*)(a1 + 8));
  }
  return result;
}

__int64 GameHr_278920(__int64 a1, __int64 a2, unsigned int a3)
{
  char v6;
  _QWORD* v7;
  char v8;
  unsigned __int8 v9;

  v6 = GameRoutine_2853e0(*(_QWORD*)(a1 + 8), a3, a2);
  v7 = *(_QWORD**)(a1 + 16);
  if (v7 != nullptr) {
    if (*((_BYTE*)v7 + 8) == 1) {
      v8 = v6;
      v9 = (unsigned __int8)X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(
                       PSEUDO_X8, _QWORD*, _QWORD, __int64))(*v7 + 48LL))(
                       (void*)v7, v7, a3, a2));
      v6 = v8;
    }
    else {
      v9 = 0;
    }
    v6 |= v9;
  }
  return v6 & 1;
}

__int64 GameHr_2789b0(__int64 a1, __int64 a2, unsigned int a3)
{
  char v6;
  _QWORD* v7;
  char v8;
  unsigned __int8 v9;

  v6 = GameRoutine_285820(*(_QWORD*)(a1 + 8), a3, a2);
  v7 = *(_QWORD**)(a1 + 16);
  if (v7 != nullptr) {
    if (*((_BYTE*)v7 + 8) == 1) {
      v8 = v6;
      v9 = (unsigned __int8)X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(
                       PSEUDO_X8, _QWORD*, _QWORD, __int64))(*v7 + 120LL))(
                       (void*)v7, v7, a3, a2));
      v6 = v8;
    }
    else {
      v9 = 0;
    }
    v6 |= v9;
  }
  return v6 & 1;
}

__int64 GameHr_278a40(__int64 a1, __int64 a2, unsigned int a3)
{
  char v6;
  _QWORD* v7;
  char v8;
  unsigned __int8 v9;

  v6 = GameRoutine_2858c0(*(_QWORD*)(a1 + 8), a3, a2);
  v7 = *(_QWORD**)(a1 + 16);
  if (v7 != nullptr) {
    if (*((_BYTE*)v7 + 8) == 1) {
      v8 = v6;
      v9 = (unsigned __int8)X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(
                       PSEUDO_X8, _QWORD*, _QWORD, __int64))(*v7 + 128LL))(
                       (void*)v7, v7, a3, a2));
      v6 = v8;
    }
    else {
      v9 = 0;
    }
    v6 |= v9;
  }
  return v6 & 1;
}

__int64 GameHr_278ad0(__int64 a1, unsigned int a2, __int64 a3)
{
  char v6;
  _QWORD* v7;
  char v8;
  unsigned __int8 v9;

  v6 = GameRoutine_285b90(*(_QWORD*)(a1 + 8));
  v7 = *(_QWORD**)(a1 + 16);
  if (v7 != nullptr) {
    if (*((_BYTE*)v7 + 8) == 1) {
      v8 = v6;
      v9 = (unsigned __int8)X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(
                       PSEUDO_X8, _QWORD*, _QWORD, __int64))(*v7 + 136LL))(
                       (void*)v7, v7, a2, a3));
      v6 = v8;
    }
    else {
      v9 = 0;
    }
    v6 |= v9;
  }
  return v6 & 1;
}

__int64 GameHr_278b50(__int64 a1, unsigned int a2, __int64 a3)
{
  char v6;
  _QWORD* v7;
  char v8;
  unsigned __int8 v9;

  v6 = GameRoutine_285c20(*(_QWORD*)(a1 + 8));
  v7 = *(_QWORD**)(a1 + 16);
  if (v7 != nullptr) {
    if (*((_BYTE*)v7 + 8) == 1) {
      v8 = v6;
      v9 = (unsigned __int8)X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(
                       PSEUDO_X8, _QWORD*, _QWORD, __int64))(*v7 + 144LL))(
                       (void*)v7, v7, a2, a3));
      v6 = v8;
    }
    else {
      v9 = 0;
    }
    v6 |= v9;
  }
  return v6 & 1;
}

__int64 GameHr_278be0(__int64 a1, __int64 a2, unsigned int a3)
{
  char v6;
  _QWORD* v7;
  char v8;
  unsigned __int8 v9;

  v6 = GameRoutine_2854d0(*(_QWORD*)(a1 + 8), a3, a2);
  v7 = *(_QWORD**)(a1 + 16);
  if (v7 != nullptr) {
    if (*((_BYTE*)v7 + 8) == 1) {
      v8 = v6;
      v9 = (unsigned __int8)X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(
                       PSEUDO_X8, _QWORD*, _QWORD, __int64))(*v7 + 64LL))(
                       (void*)v7, v7, a3, a2));
      v6 = v8;
    }
    else {
      v9 = 0;
    }
    v6 |= v9;
  }
  return v6 & 1;
}

__int64 GameHr_278c70(__int64 a1, __int64 a2)
{
  char v4;
  _QWORD* v5;
  char v6;
  unsigned __int8 v7;

  v4 = GameRoutine_2856f0(*(_QWORD*)(a1 + 8));
  v5 = *(_QWORD**)(a1 + 16);
  if (v5 != nullptr) {
    if (*((_BYTE*)v5 + 8) == 1) {
      v6 = v4;
      v7 = (unsigned __int8)X8CALL_X0(
          _QWORD*,
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, __int64))(
              *v5 + 104LL))((void*)v5, v5, a2));
      v4 = v6;
    }
    else {
      v7 = 0;
    }
    v4 |= v7;
  }
  return v4 & 1;
}

__int64 GameHr_278ce0(__int64 a1, __int64 a2, unsigned int a3)
{
  char v6;
  _QWORD* v7;
  char v8;
  unsigned __int8 v9;

  v6 = GameRoutine_2857c0(*(_QWORD*)(a1 + 8), a3, a2);
  v7 = *(_QWORD**)(a1 + 16);
  if (v7 != nullptr) {
    if (*((_BYTE*)v7 + 8) == 1) {
      v8 = v6;
      v9 = (unsigned __int8)X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(
                       PSEUDO_X8, _QWORD*, _QWORD, __int64))(*v7 + 112LL))(
                       (void*)v7, v7, a3, a2));
      v6 = v8;
    }
    else {
      v9 = 0;
    }
    v6 |= v9;
  }
  return v6 & 1;
}

__int64 GameHr_278d70(__int64 a1, __int64 a2, unsigned int a3)
{
  char v6;
  _QWORD* v7;
  char v8;
  unsigned __int8 v9;

  v6 = GameRoutine_285490(*(_QWORD*)(a1 + 8), a3, a2);
  v7 = *(_QWORD**)(a1 + 16);
  if (v7 != nullptr) {
    if (*((_BYTE*)v7 + 8) == 1) {
      v8 = v6;
      v9 = (unsigned __int8)X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(
                       PSEUDO_X8, _QWORD*, _QWORD, __int64))(*v7 + 56LL))(
                       (void*)v7, v7, a3, a2));
      v6 = v8;
    }
    else {
      v9 = 0;
    }
    v6 |= v9;
  }
  return v6 & 1;
}

__int64 GameHr_278e00(__int64 a1, unsigned int a2, __int64 a3)
{
  char v6;
  _QWORD* v7;
  char v8;
  unsigned __int8 v9;

  v6 = GameRoutine_285690(*(_QWORD*)(a1 + 8));
  v7 = *(_QWORD**)(a1 + 16);
  if (v7 != nullptr) {
    if (*((_BYTE*)v7 + 8) == 1) {
      v8 = v6;
      v9 = (unsigned __int8)X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(
                       PSEUDO_X8, _QWORD*, _QWORD, __int64))(*v7 + 88LL))(
                       (void*)v7, v7, a2, a3));
      v6 = v8;
    }
    else {
      v9 = 0;
    }
    v6 |= v9;
  }
  return v6 & 1;
}

__int64 GameHr_278e80(__int64 a1, unsigned int a2, __int64 a3)
{
  char v6;
  _QWORD* v7;
  char v8;
  unsigned __int8 v9;

  v6 = GameRoutine_285520(*(_QWORD*)(a1 + 8));
  v7 = *(_QWORD**)(a1 + 16);
  if (v7 != nullptr) {
    if (*((_BYTE*)v7 + 8) == 1) {
      v8 = v6;
      v9 = (unsigned __int8)X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(
                       PSEUDO_X8, _QWORD*, _QWORD, __int64))(*v7 + 72LL))(
                       (void*)v7, v7, a2, a3));
      v6 = v8;
    }
    else {
      v9 = 0;
    }
    v6 |= v9;
  }
  return v6 & 1;
}

__int64 GameHr_278f00(__int64 a1, __int64 a2, unsigned int a3)
{
  char v6;
  _QWORD* v7;
  char v8;
  unsigned __int8 v9;

  v6 = GameRoutine_285570(*(_QWORD*)(a1 + 8), a3, a2);
  v7 = *(_QWORD**)(a1 + 16);
  if (v7 != nullptr) {
    if (*((_BYTE*)v7 + 8) == 1) {
      v8 = v6;
      v9 = (unsigned __int8)X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(
                       PSEUDO_X8, _QWORD*, _QWORD, __int64))(*v7 + 80LL))(
                       (void*)v7, v7, a3, a2));
      v6 = v8;
    }
    else {
      v9 = 0;
    }
    v6 |= v9;
  }
  return v6 & 1;
}

__int64 GameHr_278f90(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5;
  char v6;
  _QWORD* v7;
  char v8;

  v5 = a2;
  v6 = GameRoutine_285600(*(_QWORD*)(a1 + 8), a2, a3, 0);
  if ((v6 & 1) != 0) {
    v7 = *(_QWORD**)(a1 + 16);
    if (v7 != nullptr && *((_BYTE*)v7 + 8) == 1) {
      v8 = v6;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _QWORD,
                                              __int64, _QWORD))(*v7 + 96LL))(
          (void*)v7, v7, v5, a3, 0);
      v6 = v8;
    }
  }
  return v6 & 1;
}

__int64 GameHr_279020(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6)
{
  __int64 v7;
  unsigned int v12;
  char v13;
  __int64 result;
  _BYTE* v15;
  __int64 v16;
  __int64 v17;

  v7 = *(_QWORD*)(a1 + 8);
  v12 = a2;
  v16 = -1;
  v17 = 0;
  v13 = GameRoutine_285600(v7, a2, &v16, 0);
  result = 0;
  if ((v13 & 1) != 0) {
    v15 = *(_BYTE**)(a1 + 16);
    if (v15 != nullptr && v15[8] == 1) {
      (*(void (**)(_BYTE*, _QWORD, __int64*, _QWORD))(*(_QWORD*)v15 + 96LL))(
          v15, v12, &v16, 0);
    }
    if (v17 != 0) {
      return GameRoutine_279120(a1, a3, a4, v17, a5, a6);
    }
    else {
      result = 0;
      if ((_DWORD)v16 != -1 && HIDWORD(v16) != -1) {
        return (*(__int64 (**)(__int64, __int64, __int64, _QWORD))(
            *(_QWORD*)a1 + 56LL))(
            a1, a3, a4, (unsigned int)(*(_DWORD*)(a1 + 664) + HIDWORD(v16)));
      }
    }
  }
  return result;
}

__int64 GameHr_279120(const char* a1, __int64 a2, __int64 a3, const char* a4,
                      __int64 a5, __int64 a6)
{
  unsigned __int8* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  int v15;
  char* v16;
  char v17;
  int v18;
  unsigned __int64 v20;
  unsigned __int64 v21;
  char v22[639];

  memset((__int64)v22, 0, 0x27Fu);
  if (*a4 != 47) {
    v12 = (unsigned __int8*)(a1 + 24);
    v13 = strlen(a4);
    v14 = strlen(a1 + 24);
    if (v14 + v13 > 0x27E) {
      return 0;
    }
    if ((unsigned int)v14 <= 0x7FFFFFFE) {
      if ((_DWORD)v14 != 0) {
        if ((unsigned int)v14 >= 0x27E) {
          v15 = 638;
        }
        else {
          v15 = v14;
        }
        v16 = v22;
        do {
          v18 = *v12++;
          v17 = v18;
          if (v18 == 0) {
            break;
          }
          *v16++ = v17;
          --v15;
        } while (v15 != 0);
      }
      else {
        v16 = v22;
      }
      *v16 = 0;
    }
    v20 = strlen(v22);
    if (v20 + v13 + 1 < 0x27F) {
      v21 = v13 + 1;
    }
    else {
      v21 = 638 - v20;
    }
    strncat((__int64)v22, a4, v21);
    a4 = v22;
    v22[638] = 0;
  }
  return (*(__int64 (**)(const char*, __int64, __int64, const char*, __int64,
                         __int64))(*(_QWORD*)a1 + 64LL))(a1, a2, a3, a4, a5,
                                                         a6);
}

__int64 GameHr_279360(__int64 a1, unsigned __int8* a2)
{
  __int64 result;
  __int64 v5;
  int v6;
  bool v7;
  int v8;
  _BYTE* v9;
  unsigned __int8* v10;
  char v11;
  int v12;

  result = GameRoutine_1a09c70(a2);
  v5 = a1 + 24;
  if ((int)result + 1 >= 1) {
    if ((unsigned int)(result + 1) >= 0x27F) {
      v6 = 639;
    }
    else {
      v6 = result + 1;
    }
    v8 = v6 - 1;
    v7 = v6 == 1;
    v9 = (_BYTE*)(a1 + 24);
    if (!v7) {
      v10 = a2;
      v9 = (_BYTE*)(a1 + 24);
      do {
        v12 = *v10++;
        v11 = v12;
        if (v12 == 0) {
          break;
        }
        *v9++ = v11;
        --v8;
      } while (v8 != 0);
    }
    *v9 = 0;
  }
  if (a2[result - 1] != 47) {
    *(_BYTE*)(v5 + result++) = 47;
  }
  *(_BYTE*)(v5 + result) = 0;
  return result;
}

__int64 GameHr_279630(__int64 a1)
{
  __int64 result;

  *(_QWORD*)a1 = GameData_2135040 + 2;
  GameRoutine_285ef0(a1 + 8);
  *(_DWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  GameRoutine_291d80(a1 + 80);
  GameRoutine_2ae380(a1 + 320);
  GameRoutine_27e5a0(a1 + 464);
  result = GameRoutine_29ec50(a1 + 528);
  *(_QWORD*)(a1 + 720) = 0;
  *(_DWORD*)(a1 + 728) = 0;
  *(_BYTE*)(a1 + 760) = 0;
  *(_BYTE*)(a1 + 776) = 0;
  *(_QWORD*)(a1 + 800) = 0;
  *(_QWORD*)(a1 + 736) = 0;
  *(_QWORD*)(a1 + 744) = 0;
  *(_QWORD*)(a1 + 784) = 0;
  *(_DWORD*)(a1 + 791) = 0;
  return result;
}

__int64 GameHr_27b620(_QWORD* a1)
{
  __int64 v2;
  __int64 result;

  v2 = GameData_2135080[0];
  a1[2] = a1 + 1;
  *a1 = v2 + 16;
  a1[1] = a1 + 1;
  result = GameRoutine_286210(a1 + 3);
  a1[70] = 0;
  a1[71] = 0;
  *a1 = GameData_1f7ecb8;
  a1[3] = GameData_1f7ecf8;
  return result;
}

_BYTE* GameHr_27bc80(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE* result;
  _BYTE* v6;
  __int64 v7;
  unsigned int v8;

  result = (_BYTE*)GameRoutine_2a1860(a1, a2);
  if (*result == 1) {
    v6 = result;
    v7 = GameRoutine_2a0820(result, 40, 8, 1);
    *(_QWORD*)(v7 + 24) = a2;
    *(_QWORD*)(v7 + 32) = a3;
    *(_DWORD*)(v7 + 8) = 67;
    GameRoutine_2a0e80(v6, v7);
    v8 = GameRoutine_2a0eb0(v6, 1);
    return (_BYTE*)GameRoutine_2a0de0(v6, v8);
  }
  return result;
}

__int64* GameHr_27bd30(__int64* result)
{
  __int64 v1;

  v1 = *result;
  if (*result != 0) {
    if (*(__int64**)(v1 + 16) == result) {
      *(_QWORD*)(v1 + 16) = 0;
      v1 = *result;
      if (*(__int64**)(*result + 24) == result) {
        goto LABEL_6;
      }
    }
    else if (*(__int64**)(v1 + 24) == result) {
    LABEL_6:
      *(_QWORD*)(v1 + 24) = 0;
      if (*result == 0) {
        return result;
      }
    }
    *result = 0;
  }
  return result;
}

__int64 GameHr_27bd80(_QWORD* a1, __int64 a2)
{
  __int64 result;

  *a1 = a2;
  result = GameRoutine_2806b0(a2);
  if ((result & 1) != 0) {
    result = GameRoutine_2806c0(*a1);
  }
  *(_QWORD*)(*a1 + 24LL) = a1;
  return result;
}

__int64 GameHr_27bdc0(_QWORD* a1, __int64 a2)
{
  __int64 result;

  *a1 = a2;
  result = GameRoutine_280690(a2);
  if ((result & 1) != 0) {
    result = GameRoutine_2806a0(*a1);
  }
  *(_QWORD*)(*a1 + 16LL) = a1;
  return result;
}

bool GameHr_27be00(_QWORD* a1)
{
  __int64 v1;

  v1 = *a1;
  if (*a1 != 0) {
    GameRoutine_281e90(*a1);
  }
  return v1 != 0;
}

__int64 GameHr_27be40(__int64 a1)
{
  __int64 v2;
  __int64 result;

  v2 = GameData_2135090;
  *(_QWORD*)(a1 + 12) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_DWORD*)(a1 + 32) = 0;
  *(_QWORD*)a1 = v2 + 16;
  *(_WORD*)(a1 + 8) = 0;
  GameRoutine_1a0a040(a1 + 8, 1, 0);
  result = GameRoutine_2a4170(a1 + 40);
  *(_BYTE*)(a1 + 72) = 0;
  return result;
}

__int64 GameHr_27bea0(_QWORD* a1)
{
  _QWORD* v2;

  *a1 = GameData_2135090 + 16;
  v2 = a1 + 1;
  GameRoutine_27bef0();
  GameRoutine_2a4180(a1 + 5);
  return GameRoutine_1a09f60(v2);
}

__int64 GameHr_27c1d0(__int64 a1)
{
  unsigned int v2;

  GameRoutine_1a09b70(a1 + 8);
  v2 = GameRoutine_2a4600(a1 + 40);
  GameRoutine_1a09b80(a1 + 8);
  return v2;
}

__int64 GameHr_27c210(__int64 a1, int a2)
{
  _BYTE* v4;
  __int64 v5;
  int v6;

  nn_os_LockMutex(a1 + 8);
  SoundHeap_2a4720((_QWORD*)(a1 + 40), a2);
  v4 = BaseNx_2a1860();
  if (*v4 == 1) {
    v5 = (__int64)v4;
    v6 = GameRoutine_2a0eb0(v4, 1);
    BaseNx_2a0de0(v5, v6);
  }
  return nn_os_UnlockMutex(a1 + 8);
}

__int64 GameHr_27c280(__int64 result, __int64 a2)
{
  *(_QWORD*)result = result;
  *(_QWORD*)(result + 8) = result;
  *(_QWORD*)(result + 120) = a2;
  *(_BYTE*)(result + 128) = 0;
  *(_QWORD*)(result + 108) = 0;
  *(_QWORD*)(result + 100) = 0;
  *(_QWORD*)(result + 16) = result + 16;
  *(_QWORD*)(result + 24) = result + 16;
  *(_QWORD*)(result + 32) = result + 32;
  *(_QWORD*)(result + 40) = result + 32;
  *(_QWORD*)(result + 48) = result + 48;
  *(_QWORD*)(result + 56) = result + 48;
  *(_QWORD*)(result + 64) = 0x7FFFFFFF00000001LL;
  *(_QWORD*)(result + 72) = 0x3F80000000000000LL;
  *(_QWORD*)(result + 80) = 0xFFFFFFFF00000000LL;
  *(_QWORD*)(result + 88) = 0x100000000LL;
  *(_DWORD*)(result + 96) = 1065353216;
  if (a2 != 0) {
    return GameRoutine_2837a0(a2);
  }
  return result;
}

__int64 GameHr_27c2e0(__int64 result, unsigned int a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;

  v2 = *(_QWORD*)(result + 8);
  if (v2 != result) {
    v4 = result;
    do {
      v5 = *(_QWORD*)(v2 + 8);
      result = GameRoutine_2806e0(v2 - 496, a2);
      v2 = v5;
    } while (v5 != v4);
  }
  return result;
}

__int64 GameHr_27c340(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  int v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64* j;
  __int64* v19;
  __int64 v20;
  __int64* v21;
  __int64* i;
  __int64* v23;
  __int64 v24;

  v1 = *(_QWORD**)(result + 56);
  v2 = result;
  if (v1 != (_QWORD*)(result + 48)) {
    v3 = result + 32;
    do {
      v4 = (_QWORD*)v1[1];
      if (*((_BYTE*)v1 - 8) == 2) {
        v5 = *v4;
        *(_QWORD*)(*v1 + 8LL) = v4;
        *v4 = *v1;
        *(_QWORD*)(v5 + 8) = v1;
        *v1 = v5;
        *v1 = *(_QWORD*)v3;
        *(_QWORD*)(v5 + 8) = v3;
        *(_QWORD*)(*(_QWORD*)v3 + 8LL) = v1;
        *(_QWORD*)v3 = v5;
      }
      v1 = v4;
    } while (v4 != (_QWORD*)(result + 48));
  }
  v6 = *(_QWORD*)(result + 8);
  if (v6 != result) {
    do {
      v7 = *(_QWORD*)(v6 + 8);
      result = GameRoutine_280a00(v6 - 496);
      v6 = v7;
    } while (v7 != v2);
  }
  v8 = *(__int64**)(v2 + 24);
  v9 = (__int64*)(v2 + 16);
  if (v8 != (__int64*)(v2 + 16)) {
    v10 = 1;
    v11 = *(__int64**)(v2 + 24);
    do {
      v11 = (__int64*)v11[1];
      --v10;
    } while (v11 != v9);
    if (v10 != 0) {
      do {
        v12 = (__int64*)v8[1];
        v13 = *v12;
        *(_QWORD*)(*v8 + 8) = v12;
        *v12 = *v8;
        *(_QWORD*)(v13 + 8) = v8;
        *v8 = v13;
        v14 = (*((_DWORD*)v8 - 97) + *((unsigned __int8*)v8 - 256)) &
              ~((*((_DWORD*)v8 - 97) + *((unsigned __int8*)v8 - 256)) >> 31);
        if (v14 >= 127) {
          v14 = 127;
        }
        v15 = 16LL * (unsigned int)v14;
        *v8 = *(__int64*)((char*)&GameData_2140368 + v15);
        *(_QWORD*)(v13 + 8) = (char*)&GameData_2140368 + v15;
        (*(_QWORD**)((char*)&GameData_2140368 + v15))[1] = v8;
        *(_UNKNOWN**)((char*)&GameData_2140368 + v15) = (_UNKNOWN*)v13;
        v8 = *(__int64**)(v2 + 24);
      } while (v8 != v9);
      v16 = 0;
      v17 = (__int64*)&GameData_2140368;
      j = (__int64*)GameData_2140370[0];
      if (GameData_2140370[0] != &GameData_2140368) {
        goto LABEL_19;
      }
      while (1) {
        v21 = v17 + 2;
        for (i = (__int64*)v17[3]; i != v21; i = (__int64*)v21[1]) {
          v23 = (__int64*)i[1];
          v24 = *v23;
          *(_QWORD*)(*i + 8) = v23;
          *v23 = *i;
          *(_QWORD*)(v24 + 8) = i;
          *i = v24;
          *i = *v9;
          *(_QWORD*)(v24 + 8) = v9;
          *(_QWORD*)(*v9 + 8) = i;
          *v9 = v24;
        }
        v16 += 2;
        if (v16 == 128) {
          break;
        }
        v17 = (__int64*)(&GameData_2140368 + 2 * v16);
        for (j = (__int64*)v17[1]; j != v17; j = (__int64*)v17[1]) {
        LABEL_19:
          v19 = (__int64*)j[1];
          v20 = *v19;
          *(_QWORD*)(*j + 8) = v19;
          *v19 = *j;
          *(_QWORD*)(v20 + 8) = j;
          *j = v20;
          *j = *v9;
          *(_QWORD*)(v20 + 8) = v9;
          *(_QWORD*)(*v9 + 8) = j;
          *v9 = v20;
        }
      }
    }
  }
  return result;
}

__int64 GameHr_27c570(__int64 result, int a2)
{
  if (a2 >= 4) {
    return GameRoutine_283ae0(*(_QWORD*)(result + 120));
  }
  return result;
}

__int64 GameHr_27c6a0(__int64 a1, __int64 a2)
{
  int v2;
  unsigned int v3;
  unsigned int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  unsigned int v14;
  int v15;
  __int64 v16;

  v2 = (*(_DWORD*)(a2 + 124) + *(unsigned __int8*)(a2 + 256)) &
       ~((*(_DWORD*)(a2 + 124) + *(unsigned __int8*)(a2 + 256)) >> 31);
  if (v2 >= 127) {
    v3 = 127;
  }
  else {
    v3 = (*(_DWORD*)(a2 + 124) + *(unsigned __int8*)(a2 + 256)) &
         ~((*(_DWORD*)(a2 + 124) + *(unsigned __int8*)(a2 + 256)) >> 31);
  }
  if (*(_DWORD*)(a1 + 64) == 0) {
    return 0;
  }
  while (1) {
    v7 = *(_QWORD*)(a1 + 8);
    if (v7 != a1) {
      break;
    }
    if (*(int*)(a1 + 64) > 0) {
      goto LABEL_19;
    }
  LABEL_16:
    v9 = *(_QWORD*)(a1 + 24);
    v6 = (*(_DWORD*)(v9 - 388) + *(unsigned __int8*)(v9 - 256)) &
         ~((*(_DWORD*)(v9 - 388) + *(unsigned __int8*)(v9 - 256)) >> 31);
    if (*(_BYTE*)(a1 + 128) == 1) {
      if (v6 >= v3) {
        return 0;
      }
    }
    else {
      if (v6 >= 0x7F) {
        v6 = 127;
      }
      if (v2 < v6) {
        return 0;
      }
    }
    (*(void (**)(__int64))(*(_QWORD*)(v9 - 512) + 32LL))(v9 - 512);
  }
  v8 = 0;
  do {
    v7 = *(_QWORD*)(v7 + 8);
    ++v8;
  } while (v7 != a1);
  if (v8 >= (signed __int32)*(_DWORD*)(a1 + 64)) {
    goto LABEL_16;
  }
LABEL_19:
  v11 = *(_QWORD*)(a2 + 496);
  *(_QWORD*)(a2 + 496) = *(_QWORD*)a1;
  *(_QWORD*)(v11 + 8) = a1;
  *(_QWORD*)(*(_QWORD*)a1 + 8LL) = a2 + 496;
  *(_QWORD*)a1 = v11;
  v12 = (_QWORD*)(a1 + 16);
  v13 = *(_QWORD**)(a1 + 24);
  if (v13 != (_QWORD*)(a1 + 16)) {
    v14 = (*(_DWORD*)(a2 + 124) + *(unsigned __int8*)(a2 + 256)) &
          ~((*(_DWORD*)(a2 + 124) + *(unsigned __int8*)(a2 + 256)) >> 31);
    if ((*(_BYTE*)(a1 + 128) & 1) != 0) {
      if (v14 >= 0x7F) {
        v14 = 127;
      }
      do {
        if (((*((_DWORD*)v13 - 97) + *((unsigned __int8*)v13 - 256)) &
             (unsigned int)~(
                 (*((_DWORD*)v13 - 97) + *((unsigned __int8*)v13 - 256)) >>
                 31)) >= v14) {
          break;
        }
        v13 = (_QWORD*)v13[1];
      } while (v13 != v12);
    }
    else {
      do {
        v15 = (*((_DWORD*)v13 - 97) + *((unsigned __int8*)v13 - 256)) &
              ~((*((_DWORD*)v13 - 97) + *((unsigned __int8*)v13 - 256)) >> 31);
        if (v15 >= 127) {
          v15 = 127;
        }
        if (v14 < v15) {
          break;
        }
        v13 = (_QWORD*)v13[1];
      } while (v13 != v12);
    }
  }
  v16 = *(_QWORD*)(a2 + 512);
  *(_QWORD*)(a2 + 512) = *v13;
  *(_QWORD*)(v16 + 8) = v13;
  *(_QWORD*)(*v13 + 8LL) = a2 + 512;
  *v13 = v16;
  GameRoutine_281e30(a2, a1);
  return 1;
}

__int64 GameHr_27c920(__int64 result, int a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  int v5;

  v2 = *(_DWORD*)(result + 68);
  v3 = result;
  if (a2 <= v2) {
    v2 = a2 & ~(a2 >> 31);
  }
  *(_DWORD*)(result + 64) = v2;
  v4 = *(_QWORD*)(result + 8);
  if (v4 == result) {
    goto LABEL_8;
  }
  while (1) {
    v5 = 0;
    do {
      v4 = *(_QWORD*)(v4 + 8);
      ++v5;
    } while (v4 != v3);
    if (v5 <= (signed __int32)*(_DWORD*)(v3 + 64)) {
      break;
    }
    while (1) {
      result =
          (*(__int64 (**)(__int64))(*(_QWORD*)(*(_QWORD*)(v3 + 24) - 512LL) +
                                    32LL))(*(_QWORD*)(v3 + 24) - 512LL);
      v4 = *(_QWORD*)(v3 + 8);
      if (v4 != v3) {
        break;
      }
    LABEL_8:
      if (*(int*)(v3 + 64) >= 0) {
        return result;
      }
    }
  }
  return result;
}

__int64 GameHr_27c9e0(__int64 a1, int a2)
{
  int v2;
  __int64 v3;
  int v4;
  int v5;
  int v6;

  v2 = *(_DWORD*)(a1 + 64);
  if (v2 != 0) {
    v3 = *(_QWORD*)(a1 + 8);
    if (v3 == a1) {
      if (v2 > 0) {
        return 1;
      }
    }
    else {
      v4 = 0;
      do {
        v3 = *(_QWORD*)(v3 + 8);
        ++v4;
      } while (v3 != a1);
      if (v4 < v2) {
        return 1;
      }
    }
    v5 = *(_DWORD*)(*(_QWORD*)(a1 + 24) - 388LL) +
         *(unsigned __int8*)(*(_QWORD*)(a1 + 24) - 256LL);
    v6 = v5 & ~(v5 >> 31);
    if (v6 >= 127) {
      v6 = 127;
    }
    if (*(_BYTE*)(a1 + 128) == 1) {
      if (a2 > v6) {
        return 1;
      }
    }
    else if (a2 >= v6) {
      return 1;
    }
  }
  return 0;
}

_DWORD* GameHr_27ca80(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _DWORD* result;
  __int64 v6;

  v3 = *(_QWORD*)(a2 + 48);
  v4 = (_QWORD*)(a2 + 48);
  v2 = v3;
  *(v4 - 5) = a1;
  v6 = *(_QWORD*)(a1 + 32);
  result = (_DWORD*)(a1 + 32);
  *v4 = v6;
  *(_QWORD*)(v2 + 8) = result;
  *(_QWORD*)(*(_QWORD*)result + 8LL) = v4;
  *(_QWORD*)result = v2;
  ++result[10];
  return result;
}

__int64* GameHr_27cab0(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v4;

  v1 = *(__int64**)(a1 + 40);
  if (v1 == (__int64*)(a1 + 32)) {
    return nullptr;
  }
  v2 = (__int64*)v1[1];
  v4 = *v2;
  *(_QWORD*)(*v1 + 8) = v2;
  *v2 = *v1;
  *(_QWORD*)(v4 + 8) = v1;
  *v1 = v4;
  return v1 - 6;
}

__int64 GameHr_27caf0(__int64 result, __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v4 = *(_QWORD*)(a2 + 48);
  v2 = (_QWORD*)(a2 + 48);
  v3 = v4;
  v5 = 48;
  if (*((_BYTE*)v2 - 8) == 2) {
    v5 = 32;
  }
  *v2 = *(_QWORD*)(result + v5);
  *(_QWORD*)(v3 + 8) = result + v5;
  *(_QWORD*)(*(_QWORD*)(result + v5) + 8LL) = v2;
  *(_QWORD*)(result + v5) = v3;
  return result;
}

__int64 GameHr_27cb30(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                      __int64 a5)
{
  __int64 result;

  result =
      (*(__int64 (**)(__int64, _QWORD*, __int64, _QWORD, __int64, __int64))(
          *(_QWORD*)a1 + 16LL))(a1, a2, a3, 0, a4, a5);
  if ((_DWORD)result == 0 && *a2 != 0) {
    GameRoutine_2806d0(*a2);
    return 0;
  }
  return result;
}

__int64 GameHr_27cb90(__int64 a1, __int64* a2, __int64 a3, __int64 a4,
                      __int64 a5)
{
  __int64 result;

  if (*a2 != 0 && *(_DWORD*)(*a2 + 280) == (_DWORD)a3) {
    GameRoutine_2809e0(*a2, 1);
    if (a5 == 0) {
      return 0;
    }
  }
  else {
    result =
        (*(__int64 (**)(__int64, __int64*, __int64, __int64, __int64, __int64))(
            *(_QWORD*)a1 + 16LL))(a1, a2, a3, 1, a4, a5);
    if ((_DWORD)result != 0) {
      return result;
    }
    GameRoutine_2806d0(*a2);
    GameRoutine_2809e0(*a2, 1);
    if (a5 == 0) {
      return 0;
    }
  }
  if ((*(_BYTE*)(a5 + 1) & 1) == 0) {
    return 0;
  }
  result = *a2;
  if (*a2 != 0) {
    GameRoutine_2806e0(result, *(unsigned int*)(a5 + 324));
    return 0;
  }
  return result;
}

__int64 GameHr_27cc40(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5)
{
  return (*(__int64 (**)(__int64, __int64, __int64, _QWORD, __int64, __int64))(
      *(_QWORD*)a1 + 16LL))(a1, a2, a3, 0, a4, a5);
}

__int64 GameHr_27cc60(__int64 result)
{
  *(_QWORD*)(result + 84) = 0;
  *(_WORD*)(result + 92) = 0;
  *(_DWORD*)(result + 105) = 0;
  *(_DWORD*)(result + 102) = 0;
  *(_DWORD*)(result + 136) = 0;
  *(_QWORD*)(result + 128) = 0;
  *(_DWORD*)result = 4;
  *(_QWORD*)(result + 8) = 0x4000;
  *(_QWORD*)(result + 16) = 0x20000;
  *(_QWORD*)(result + 24) = 0x300000020LL;
  *(_QWORD*)(result + 32) = 0x4000;
  *(_QWORD*)(result + 40) = 0x2000;
  *(_QWORD*)(result + 48) = 0x100000020LL;
  *(_QWORD*)(result + 64) = 0xA0000BB80LL;
  *(_QWORD*)(result + 72) = 96;
  *(_DWORD*)(result + 80) = 8;
  *(_QWORD*)(result + 94) = 0x100010101010101LL;
  *(_QWORD*)(result + 112) = 0;
  *(_QWORD*)(result + 120) = 0x4FFFFFFFFLL;
  return result;
}

__int64 GameHr_27cce0(__int64 a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  void* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  int v12;
  char v13;
  char v14;
  char v15;
  int v16;
  int v17;
  char v18;
  char v19;
  char v20;
  __int64 v21;
  char v22;
  int v23;
  void* v24;
  __int64 v25;
  void* v26;
  void* v27;
  __int64 v28;
  void* v29;
  __int64 v30;
  void* v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  void* v37;
  __int64 v38;
  void* v39;
  struct {
    __int64 v41;
    int v42;
  } v41_;
  struct {
    __int64 v43;
    int v44;
    int v45;
    __int64 v46;
    _BYTE v47[11];
    char v48;
    char v49;
    char v50;
    char v51;
    char v52;
    char v53;
    char v54;
    __int16 v55;
    int v56;
    int v57;
  } v43_;

  v1 = *(_DWORD*)(a1 + 124);
  v3 = (unsigned int)(*(_DWORD*)(a1 + 136) + *(_DWORD*)(a1 + 132));
  v4 = *(unsigned __int8*)(a1 + 129);
  v5 = *(unsigned __int8*)(a1 + 130);
  v6 = *(_QWORD*)(a1 + 32);
  if (v1 <= 1) {
    v1 = 1;
  }
  if (v1 >= 24) {
    v1 = 24;
  }
  v41_.v42 = v1;
  v41_.v41 = v3 | (v4 << 32) | (v5 << 40);
  v7 = BaseNx_2aa100();
  v8 = BaseNx_2aa190((__int64)v7, *(_DWORD*)(a1 + 72), (__int64)&v41_.v41);
  v9 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)&v43_.v47[7] = 0;
  v10 = *(_QWORD*)(a1 + 64);
  v11 = *(_BYTE*)(a1 + 76);
  v12 = *(_DWORD*)(a1 + 72);
  v13 = *(_BYTE*)(a1 + 98);
  v43_.v46 = 0x1E00000001LL;
  *(_QWORD*)v43_.v47 = 0;
  v14 = *(_BYTE*)(a1 + 100);
  v15 = *(_BYTE*)(a1 + 78);
  v16 = *(_DWORD*)(a1 + 80);
  v43_.v51 = 1;
  v17 = *(_DWORD*)(a1 + 112);
  v18 = *(_BYTE*)(a1 + 108);
  v19 = *(_BYTE*)(a1 + 93);
  v20 = *(_BYTE*)(a1 + 92);
  v21 = v8 + v6 + v9;
  LOBYTE(v9) = *(_BYTE*)(a1 + 79);
  v22 = *(_BYTE*)(a1 + 99);
  v43_.v43 = v10;
  v43_.v47[8] = v11;
  v43_.v48 = v13;
  v43_.v52 = v14;
  v43_.v49 = v15;
  v43_.v44 = v12;
  v43_.v45 = v16;
  v43_.v50 = v9;
  v43_.v53 = *(_BYTE*)(a1 + 95);
  v43_.v54 = *(_BYTE*)(a1 + 101);
  v43_.v55 = *(_WORD*)(a1 + 102);
  v43_.v56 = *(_DWORD*)(a1 + 104);
  v43_.v57 = 0;
  BYTE1(v43_.v57) = *(_BYTE*)(a1 + 128);
  BYTE2(v43_.v57) = *(_BYTE*)(a1 + 131);
  v23 = *(_DWORD*)(a1 + 120);
  if (v23 == -1) {
    v23 = *(_DWORD*)(a1 + 116);
  }
  BaseNx_2891e0((__int64)&v43_.v43, v14, v13, v22, v20, v19, v18, v17, v23,
                *(_DWORD*)(a1 + 132), *(_DWORD*)(a1 + 136));
  if (*(_BYTE*)(a1 + 76) == 1) {
    v24 = SoundVoiceNX_14e360();
    v25 =
        v21 + 3 * nn_atk_detail_289ff0((__int64)v24, (__int64)&v43_.v43) + 4160;
    if (*(_BYTE*)(a1 + 78) != 1) {
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  v25 = v21 + 4096;
  if (*(_BYTE*)(a1 + 78) == 1) {
  LABEL_11:
    v26 = SoundVoiceNX_14e360();
    v25 += nn_atk_detail_289840((__int64)v26, (__int64)&v43_.v43);
  }
LABEL_12:
  v27 = SoundVoiceNX_14e360();
  v28 = nn_atk_detail_289600((__int64)v27, (__int64)&v43_.v43);
  v29 = BaseNx_2a1860();
  v30 = BaseNx_2a1970((__int64)v29, *(_QWORD*)(a1 + 16), *(_DWORD*)(a1 + 24));
  v31 = BaseNx_2a18e0();
  v32 = v25 + v28 + v30 +
        BaseNx_2a1970((__int64)v31, *(_QWORD*)(a1 + 40), *(_DWORD*)(a1 + 48)) +
        4096;
  if ((*(_BYTE*)(a1 + 79) & 1 | (*(_DWORD*)(a1 + 132) != 0) |
       (*(_DWORD*)(a1 + 136) != 0)) != 0 &&
      (*(_BYTE*)(a1 + 97) & 1) != 0) {
    v32 += GameHr_27cf80_alt1(a1);
  }
  if (*(_BYTE*)(a1 + 96) == 1) {
    v33 = *(_DWORD*)(a1 + 124);
    v34 = (unsigned int)(*(_DWORD*)(a1 + 136) + *(_DWORD*)(a1 + 132));
    v35 = *(unsigned __int8*)(a1 + 129);
    v36 = *(unsigned __int8*)(a1 + 130);
    if (v33 <= 1) {
      v33 = 1;
    }
    if (v33 >= 24) {
      v33 = 24;
    }
    v43_.v44 = v33;
    v43_.v43 = v34 | (v35 << 32) | (v36 << 40);
    v37 = BaseNx_2a6df0();
    v38 = BaseNx_2a6e90((__int64)v37, 2 * *(_DWORD*)(a1 + 72),
                        (__int64)&v43_.v43);
    v39 = SoundVoiceNX_14e360();
    v32 += ((v38 +
             GameRoutine_289830_alt1((__int64)v39, (int)v34 + 1,
                                     *(_DWORD*)(a1 + 72)) +
             4095) &
            0xFFFFFFFFFFFFF000LL) +
           4096;
  }
  return v32;
}

unsigned __int64 GameHr_27cf80(__int64 a1)
{
  int v1;
  char v2;
  char v3;
  char v4;
  char v5;
  int v6;
  char v7;
  char v8;
  char v9;
  char v10;
  __int64 v11;
  char v12;
  char v13;
  int v14;
  void* v15;
  __int64 v17;
  int v18;
  int v19;
  __int64 v20;
  _BYTE v21[11];
  char v22;
  char v23;
  char v24;
  char v25;
  char v26;
  char v27;
  char v28;
  __int16 v29;
  int v30;
  int v31;

  v1 = *(_DWORD*)(a1 + 72);
  v30 = *(_DWORD*)(a1 + 104);
  v31 = 0;
  v2 = *(_BYTE*)(a1 + 76);
  *(_DWORD*)&v21[7] = 0;
  v3 = *(_BYTE*)(a1 + 98);
  v4 = *(_BYTE*)(a1 + 100);
  v5 = *(_BYTE*)(a1 + 78);
  v6 = *(_DWORD*)(a1 + 112);
  v7 = *(_BYTE*)(a1 + 108);
  v8 = *(_BYTE*)(a1 + 93);
  v9 = *(_BYTE*)(a1 + 92);
  v10 = *(_BYTE*)(a1 + 99);
  *(_QWORD*)v21 = 0;
  v20 = 0x1E00000001LL;
  v25 = 1;
  v11 = *(_QWORD*)(a1 + 64);
  v12 = *(_BYTE*)(a1 + 128);
  v21[8] = v2;
  v22 = v3;
  v26 = v4;
  v23 = v5;
  v17 = v11;
  LODWORD(v11) = *(_DWORD*)(a1 + 80);
  BYTE1(v31) = v12;
  v13 = *(_BYTE*)(a1 + 131);
  v18 = v1;
  v19 = v11;
  LOBYTE(v11) = *(_BYTE*)(a1 + 79);
  BYTE2(v31) = v13;
  v24 = v11;
  v27 = *(_BYTE*)(a1 + 95);
  v28 = *(_BYTE*)(a1 + 101);
  v29 = *(_WORD*)(a1 + 102);
  v14 = *(_DWORD*)(a1 + 120);
  if (v14 == -1) {
    v14 = *(_DWORD*)(a1 + 116);
  }
  BaseNx_2891e0((__int64)&v17, v4, v3, v10, v9, v8, v7, v6, v14,
                *(_DWORD*)(a1 + 132), *(_DWORD*)(a1 + 136));
  v15 = SoundVoiceNX_14e360();
  return nn_atk_detail_289910((__int64)v15, (__int64)&v17);
}

__int64 GameHr_27d960(__int64 a1, __int64* a2)
{
  char v3;
  void* v4;
  __int64 v6[6];

  GameHr_27d7f0(v6, a1, a2);
  v3 = GameHr_27d070(nullptr, (unsigned int*)a1, v6);
  if ((v3 & 1) != 0 && (*(_BYTE*)(a1 + 96) & 1) != 0) {
    v4 = SoundVoiceNX_14e360();
    GameHr_289c80((__int64)v4, (__int64)GameData_21351e8, v6[2], v6[3], 1);
  }
  return v3 & 1;
}

__int64 GameHr_27db90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;

  v6 = GameRoutine_14e360(a1, a2);
  return GameRoutine_289c80(v6, a1, a2, a3, 1);
}

__int64 GameHr_27dbe0(__int64 a1, __int64 a2)
{
  __int64 v3;

  v3 = GameRoutine_14e360(a1, a2);
  return GameRoutine_289e00(v3, a1, 1);
}

unsigned __int64 GameHr_27dc10()
{
  return (unsigned int)(*GameData_21351a0[0] + *GameData_2135198[0]) |
         ((unsigned __int64)(unsigned __int8)*GameData_2135178[0] << 32) |
         ((unsigned __int64)(unsigned __int8)*GameData_2135180[0] << 40);
}

__int64 GameHr_27e060(__int64 result, __int64* a2)
{
  __int64 v2;
  _QWORD* v3;
  unsigned __int8 explicit;
  __int64* v5;

  *(_QWORD*)result = 0;
  if (a2 != nullptr) {
    v2 = *a2;
    if (*a2 != 0) {
      v3 = (_QWORD*)result;
      explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2135218,
                                      memory_order_acquire);
      v5 = GameData_2135220;
      if ((explicit & 1) == 0 &&
          (unsigned int)GameRoutine_1a09fd0(GameData_2135218) != 0) {
        *v5 = GameRoutine_276af0();
        GameRoutine_1a09fe0(GameData_2135218);
      }
      result = (**(__int64 (***)(__int64))v2)(v2);
      if ((__int64*)result == v5) {
        goto LABEL_11;
      }
      do {
        result = *(_QWORD*)result;
      } while ((__int64*)result != v5 && result != 0);
      if (result != 0) {
      LABEL_11:
        *v3 = v2;
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
        if ((result & 1) != 0) {
          result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v3 + 56LL))(*v3);
        }
        *(_QWORD*)(*v3 + 560LL) = v3;
      }
    }
  }
  return result;
}

__int64* GameHr_27e140(__int64* result)
{
  __int64 v1;

  v1 = *result;
  if (*result != 0) {
    if (*(__int64**)(v1 + 560) != result ||
        (*(_QWORD*)(v1 + 560) = 0, *result != 0)) {
      *result = 0;
    }
  }
  return result;
}

__int64 GameHr_27e180(__int64 result, __int64* a2)
{
  __int64 v2;
  _QWORD* v3;
  unsigned __int8 explicit;
  __int64* v5;

  *(_QWORD*)result = 0;
  if (a2 != nullptr) {
    v2 = *a2;
    if (*a2 != 0) {
      v3 = (_QWORD*)result;
      explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2135228,
                                      memory_order_acquire);
      v5 = GameData_2135230[0];
      if ((explicit & 1) == 0 &&
          (unsigned int)GameRoutine_1a09fd0(GameData_2135228) != 0) {
        *v5 = GameRoutine_276af0();
        GameRoutine_1a09fe0(GameData_2135228);
      }
      result = (**(__int64 (***)(__int64))v2)(v2);
      if ((__int64*)result == v5) {
        goto LABEL_11;
      }
      do {
        result = *(_QWORD*)result;
      } while ((__int64*)result != v5 && result != 0);
      if (result != 0) {
      LABEL_11:
        *v3 = v2;
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
        if ((result & 1) != 0) {
          result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v3 + 56LL))(*v3);
        }
        *(_QWORD*)(*v3 + 560LL) = v3;
      }
    }
  }
  return result;
}

__int64* GameHr_27e260(__int64* result)
{
  __int64 v1;

  v1 = *result;
  if (*result != 0) {
    if (*(__int64**)(v1 + 560) != result ||
        (*(_QWORD*)(v1 + 560) = 0, *result != 0)) {
      *result = 0;
    }
  }
  return result;
}

__int64 GameHr_27e2b0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  _BYTE* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;

  v4 = 0;
  while (1) {
    v5 = (_BYTE*)(a2 + v4);
    v6 = a1 + v4;
    if (*(_BYTE*)(a2 + v4) == 0) {
      *(_BYTE*)(v6 + 40) = 0;
      *(_QWORD*)(a1 + 24) = a3;
      *(_QWORD*)(a1 + 32) = a4;
      *(_BYTE*)(a1 + 16) = 1;
      return 1;
    }
    *(_BYTE*)(v6 + 40) = *(_BYTE*)(a2 + v4);
    if (v5[1] == 0) {
      *(_BYTE*)(a1 + v4 + 41) = 0;
      *(_QWORD*)(a1 + 24) = a3;
      *(_QWORD*)(a1 + 32) = a4;
      *(_BYTE*)(a1 + 16) = 1;
      return 1;
    }
    *(_BYTE*)(v6 + 41) = v5[1];
    v7 = a1 + v4;
    if (v5[2] == 0) {
      *(_BYTE*)(v7 + 42) = 0;
      *(_QWORD*)(a1 + 24) = a3;
      *(_QWORD*)(a1 + 32) = a4;
      *(_BYTE*)(a1 + 16) = 1;
      return 1;
    }
    *(_BYTE*)(v7 + 42) = v5[2];
    if (v5[3] == 0) {
      *(_BYTE*)(a1 + v4 + 43) = 0;
      *(_QWORD*)(a1 + 24) = a3;
      *(_QWORD*)(a1 + 32) = a4;
      *(_BYTE*)(a1 + 16) = 1;
      return 1;
    }
    *(_BYTE*)(v7 + 43) = v5[3];
    v8 = a1 + v4;
    if (v5[4] == 0) {
      *(_BYTE*)(v8 + 44) = 0;
      *(_QWORD*)(a1 + 24) = a3;
      *(_QWORD*)(a1 + 32) = a4;
      *(_BYTE*)(a1 + 16) = 1;
      return 1;
    }
    *(_BYTE*)(v8 + 44) = v5[4];
    if (v5[5] == 0) {
      *(_BYTE*)(a1 + v4 + 45) = 0;
      *(_QWORD*)(a1 + 24) = a3;
      *(_QWORD*)(a1 + 32) = a4;
      *(_BYTE*)(a1 + 16) = 1;
      return 1;
    }
    *(_BYTE*)(v8 + 45) = v5[5];
    v9 = a1 + v4;
    if (v5[6] == 0) {
      *(_BYTE*)(v9 + 46) = 0;
      *(_QWORD*)(a1 + 24) = a3;
      *(_QWORD*)(a1 + 32) = a4;
      *(_BYTE*)(a1 + 16) = 1;
      return 1;
    }
    *(_BYTE*)(v9 + 46) = v5[6];
    if (v5[7] == 0) {
      *(_BYTE*)(a1 + v4 + 47) = 0;
      *(_QWORD*)(a1 + 24) = a3;
      *(_QWORD*)(a1 + 32) = a4;
      *(_BYTE*)(a1 + 16) = 1;
      return 1;
    }
    *(_BYTE*)(v9 + 47) = v5[7];
    v10 = a1 + v4;
    v11 = (unsigned __int8)v5[8];
    if (v11 == 0) {
      break;
    }
    v4 += 9;
    *(_BYTE*)(v10 + 48) = v11;
    if ((_DWORD)v4 == 63) {
      *(_BYTE*)(a1 + v4 + 40) = 0;
      *(_QWORD*)(a1 + 24) = a3;
      *(_QWORD*)(a1 + 32) = a4;
      *(_BYTE*)(a1 + 16) = 1;
      return 1;
    }
  }
  *(_BYTE*)(v10 + 48) = 0;
  *(_QWORD*)(a1 + 24) = a3;
  *(_QWORD*)(a1 + 32) = a4;
  *(_BYTE*)(a1 + 16) = 1;
  return 1;
}

bool GameHr_27e480(__int64 a1, __int64 a2)
{
  __int64 v2;
  _BYTE* v3;
  __int64 v5;
  int v6;
  int v7;
  bool v8;

  v2 = 0;
  while (1) {
    v3 = (_BYTE*)(a2 + v2);
    if (*(_BYTE*)(a2 + v2) == 0) {
      goto LABEL_23;
    }
    if (v3[1] == 0) {
      if ((_DWORD)v2 == 63) {
        return false;
      }
      goto LABEL_26;
    }
    if (v3[2] == 0) {
      if ((_DWORD)v2 == 62) {
        return false;
      }
      goto LABEL_26;
    }
    if (v3[3] == 0) {
      if ((_DWORD)v2 == 61) {
        return false;
      }
      goto LABEL_26;
    }
    if (v3[4] == 0) {
      if ((_DWORD)v2 == 60) {
        return false;
      }
      goto LABEL_26;
    }
    if (v3[5] == 0) {
      if ((_DWORD)v2 == 59) {
        return false;
      }
      goto LABEL_26;
    }
    if (v3[6] == 0) {
      break;
    }
    if (v3[7] == 0) {
      if ((_DWORD)v2 != 57) {
        goto LABEL_26;
      }
      return false;
    }
    v2 += 8;
    if ((_DWORD)v2 == 64) {
      return false;
    }
  }
  LODWORD(v2) = v2 + 6;
LABEL_23:
  if ((_DWORD)v2 == 64) {
    return false;
  }
LABEL_26:
  v5 = 0;
  do {
    v6 = *(unsigned __int8*)(a2 + v5);
    v7 = *(unsigned __int8*)(a1 + 40 + v5);
    v8 = *(_BYTE*)(a2 + v5) != 0 && v6 == v7;
    if (!v8) {
      break;
    }
    v8 = (_DWORD)v5++ == 63;
  } while (!v8);
  return v6 == v7;
}

_QWORD* GameHr_27e5a0(_QWORD* result)
{
  *result = 0;
  result[1] = 0;
  result[4] = result + 4;
  result[5] = result + 4;
  result[6] = result + 6;
  result[7] = result + 6;
  return result;
}

unsigned __int64 GameHr_27e6c0(__int64 a1, __int64 a2, unsigned __int64 a3,
                               __int64* a4)
{
  __int64 v7;
  unsigned __int64 v8;
  int v9;
  __int64* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v21;

  v7 = GameRoutine_2832c0(a4, 1);
  v19 = a3;
  v8 = v7 + GameRoutine_2832c0(a4, 0) + 2600;
  if (v7 == 0) {
    v8 = 2504;
  }
  v21 = a3 / v8;
  if ((int)(a3 / v8) >= 1) {
    v9 = 0;
    v10 = (__int64*)(a2 + 544);
    v11 = (_QWORD*)(a2 + 2504 * (v21 & 0x7FFFFFFF));
    do {
      GameRoutine_27f000(v10 - 68, a1);
      v12 = *v10;
      *v10 = *(_QWORD*)(a1 + 48);
      *(_QWORD*)(v12 + 8) = a1 + 48;
      *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL) = v10;
      *(_QWORD*)(a1 + 48) = v12;
      v13 = GameRoutine_2832c0(a4, 1);
      if (v13 != 0) {
        v14 = v13;
        v15 = GameRoutine_2832c0(a4, 0);
        *v11 = 0;
        v11[1] = 0;
        v11[2] = 0;
        v11[3] = 0;
        v11[4] = 0;
        v11[5] = 0;
        GameRoutine_283380(v11, v11 + 6, v14, a4, 1);
        v16 = (_QWORD*)((char*)v11 + v14 + 48);
        v16[4] = 0;
        v16[5] = 0;
        v16[2] = 0;
        v16[3] = 0;
        *v16 = 0;
        v16[1] = 0;
        GameRoutine_283380(v16, v16 + 6, v15, a4, 0);
        GameRoutine_282480(v10 - 68, v11, v16);
        v11 = (_QWORD*)((char*)v16 + v15 + 48);
      }
      ++v9;
      v10 += 313;
    } while (v9 < (int)v21);
  }
  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = v19;
  v18 = *a4;
  *(_DWORD*)(a1 + 24) = *((_DWORD*)a4 + 2);
  *(_QWORD*)(a1 + 16) = v18;
  return v21;
}

__int64 GameHr_27e870(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  unsigned __int64 v5;
  unsigned __int64 v6;
  int v7;
  __int64* i;
  __int64* v9;
  __int64 v10;
  __int64* j;
  __int64* v12;
  __int64 v13;

  v2 = *a1;
  v3 = GameRoutine_2832c0(a1 + 2, 1);
  result = GameRoutine_2832c0(a1 + 2, 0);
  v5 = v3 + result + 2600;
  if (v3 == 0) {
    v5 = 2504;
  }
  v6 = a1[1] / v5;
  if ((int)v6 >= 1) {
    v7 = 0;
    do {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
      v2 += 2504;
      ++v7;
    } while (v7 < (int)v6);
  }
  for (i = (__int64*)a1[7]; i != a1 + 6; i = (__int64*)a1[7]) {
    v9 = (__int64*)i[1];
    v10 = *v9;
    *(_QWORD*)(*i + 8) = v9;
    *v9 = *i;
    *(_QWORD*)(v10 + 8) = i;
    *i = v10;
  }
  for (j = (__int64*)a1[5]; j != a1 + 4; j = (__int64*)a1[5]) {
    v12 = (__int64*)j[1];
    v13 = *v12;
    *(_QWORD*)(*j + 8) = v12;
    *v12 = *j;
    *(_QWORD*)(v13 + 8) = j;
    *j = v13;
  }
  return result;
}

__int64 GameHr_27ea20(__int64 result, __int64* a2, __int64 a3)
{
  __int64 v3;
  __int64 i;

  v3 = *a2;
  for (i = *(_QWORD*)(result + 56); i != result + 48; v3 += a3) {
    *(_QWORD*)(i - 72) = v3;
    *(_QWORD*)(i - 64) = a3;
    i = *(_QWORD*)(i + 8);
  }
  *a2 = v3;
  return result;
}

__int64 GameHr_27ea60(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6)
{
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  int v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  _QWORD* v14;
  __int64* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* j;
  __int64* v22;
  __int64 v23;
  __int64* v24;
  __int64* i;
  __int64* v26;
  __int64 v27;
  _QWORD v28[256];
  __int64 v29;
  __int64 v30;

  v29 = v6;
  v30 = v7;
  v8 = *(__int64**)(result + 40);
  v9 = (__int64*)(result + 32);
  if (v8 != (__int64*)(result + 32)) {
    v10 = 1;
    v11 = result;
    v12 = *(__int64**)(result + 40);
    do {
      v12 = (__int64*)v12[1];
      --v10;
    } while (v12 != v9);
    if (v10 != 0) {
      result = GameRoutine_1a0ba50(v28, 0, 2048, a4, a5, a6);
      v13 = 0;
      do {
        v14 = &v28[v13];
        v13 += 32;
        *v14 = v14;
        v14[1] = v14;
        v14[2] = v14 + 2;
        v14[3] = v14 + 2;
        v14[4] = v14 + 4;
        v14[5] = v14 + 4;
        v14[6] = v14 + 6;
        v14[7] = v14 + 6;
        v14[8] = v14 + 8;
        v14[9] = v14 + 8;
        v14[10] = v14 + 10;
        v14[11] = v14 + 10;
        v14[12] = v14 + 12;
        v14[13] = v14 + 12;
        v14[14] = v14 + 14;
        v14[15] = v14 + 14;
        v14[16] = v14 + 16;
        v14[17] = v14 + 16;
        v14[18] = v14 + 18;
        v14[19] = v14 + 18;
        v14[20] = v14 + 20;
        v14[21] = v14 + 20;
        v14[22] = v14 + 22;
        v14[23] = v14 + 22;
        v14[24] = v14 + 24;
        v14[25] = v14 + 24;
        v14[26] = v14 + 26;
        v14[27] = v14 + 26;
        v14[28] = v14 + 28;
        v14[29] = v14 + 28;
        v14[30] = v14 + 30;
        v14[31] = v14 + 30;
      } while (v13 != 256);
      do {
        v15 = (__int64*)v8[1];
        v16 = *v15;
        *(_QWORD*)(*v8 + 8) = v15;
        *v15 = *v8;
        *(_QWORD*)(v16 + 8) = v8;
        *v8 = v16;
        v17 = (*((_DWORD*)v8 - 105) + *((unsigned __int8*)v8 - 288)) &
              ~((*((_DWORD*)v8 - 105) + *((unsigned __int8*)v8 - 288)) >> 31);
        if (v17 >= 127) {
          v17 = 127;
        }
        v18 = 2LL * (unsigned int)v17;
        *v8 = v28[v18];
        *(_QWORD*)(v16 + 8) = &v28[v18];
        *(_QWORD*)(v28[v18] + 8LL) = v8;
        v28[v18] = v16;
        v8 = *(__int64**)(v11 + 40);
      } while (v8 != v9);
      v19 = 0;
      v20 = v28;
      j = (__int64*)v28[1];
      if ((_QWORD*)v28[1] != v28) {
        goto LABEL_14;
      }
      while (1) {
        v24 = v20 + 2;
        for (i = (__int64*)v20[3]; i != v24; i = (__int64*)v24[1]) {
          v26 = (__int64*)i[1];
          v27 = *v26;
          *(_QWORD*)(*i + 8) = v26;
          *v26 = *i;
          *(_QWORD*)(v27 + 8) = i;
          *i = v27;
          *i = *v9;
          *(_QWORD*)(v27 + 8) = v9;
          *(_QWORD*)(*v9 + 8) = i;
          *v9 = v27;
        }
        v19 += 2;
        if (v19 == 128) {
          break;
        }
        v20 = &v28[2 * v19];
        for (j = (__int64*)v20[1]; j != v20; j = (__int64*)v20[1]) {
        LABEL_14:
          v22 = (__int64*)j[1];
          v23 = *v22;
          *(_QWORD*)(*j + 8) = v22;
          *v22 = *j;
          *(_QWORD*)(v23 + 8) = j;
          *j = v23;
          *j = *v9;
          *(_QWORD*)(v23 + 8) = v9;
          *(_QWORD*)(*v9 + 8) = j;
          *v9 = v23;
        }
      }
    }
  }
  return result;
}

__int64 GameHr_27ece0(__int64 a1, unsigned int a2, unsigned int a3,
                      unsigned int a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v9;
  __int64 v10;

  v9 = GameRoutine_27ee40(a1, a3, a4, a6, a7);
  v10 = v9;
  if (v9 != 0) {
    GameRoutine_280680(v9, a2);
    if (a5 != 0) {
      GameRoutine_2827d0(v10, a5);
    }
  }
  return v10;
}

__int64 GameHr_27ed50(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                      __int64 a5, unsigned int* a6, __int64 a7)
{
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  _QWORD v16[3];
  unsigned int v17;

  v17 = 0;
  if ((GameRoutine_278bd0(a2, a4, &v17) & 1) == 0) {
    return 3;
  }
  v11 = GameRoutine_27ba20(a3, *a6);
  if (v11 == 0) {
    return 8;
  }
  v12 = v11;
  v13 = GameRoutine_288010(a3 + 24, v17);
  if (v13 == 0) {
    return 9;
  }
  v14 = *(_DWORD*)(a7 + 16);
  v16[1] = v12;
  v16[2] = v13;
  v16[0] = __PAIR64__(v14, v17);
  GameRoutine_27f1d0(a5, v16);
  return 0;
}

__int64* GameHr_27ee40(_QWORD* a1, int a2, int a3, __int64 a4, __int64 a5)
{
  __int64* v5;
  __int64* v6;
  _QWORD* v7;
  char v10;
  unsigned int v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  _QWORD* i;
  int v17;
  __int64 v18;
  _QWORD* v19;
  int v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v25;

  v5 = (__int64*)a1[7];
  v6 = a1 + 6;
  v7 = a1 + 4;
  v10 = a2;
  v12 = (a3 + a2) & ~((a3 + a2) >> 31);
  if (v5 == a1 + 6) {
    v25 = a5;
    while (1) {
      v19 = (_QWORD*)a1[5];
      if (v19 == v7) {
        return nullptr;
      }
      v20 = (*((_DWORD*)v19 - 105) + *((unsigned __int8*)v19 - 288)) &
            ~((*((_DWORD*)v19 - 105) + *((unsigned __int8*)v19 - 288)) >> 31);
      if (v20 >= 127) {
        v20 = 127;
      }
      if (v12 < v20) {
        return nullptr;
      }
      v21 = (__int64)(v19 - 68);
      v22 = BaseNx_2890f0(2);
      BaseNx_2890a0(v22);
      BasicSound_2806e0(v21, 0);
      v5 = (__int64*)a1[7];
      if (v5 != v6) {
        a5 = v25;
        goto LABEL_2;
      }
    }
  }
  else {
  LABEL_2:
    v13 = (__int64*)v5[1];
    v14 = v5 - 68;
    v15 = *v13;
    *(_QWORD*)(*v5 + 8) = v13;
    *v13 = *v5;
    *(_QWORD*)(v15 + 8) = v5;
    *v5 = v15;
    if (((*(__int64 (**)(__int64*, __int64, __int64))(*(v5 - 68) + 24))(
             v5 - 68, a4, a5) &
         1) != 0) {
      BasicSound_2804d0((__int64)(v5 - 68), v10, a3);
      for (i = (_QWORD*)a1[5]; i != v7; i = (_QWORD*)i[1]) {
        v17 = (*((_DWORD*)i - 105) + *((unsigned __int8*)i - 288)) &
              ~((*((_DWORD*)i - 105) + *((unsigned __int8*)i - 288)) >> 31);
        if (v17 >= 127) {
          v17 = 127;
        }
        if (v12 < v17) {
          break;
        }
      }
      v18 = *v5;
      *v5 = *i;
      *(_QWORD*)(v18 + 8) = i;
      *(_QWORD*)(*i + 8LL) = v5;
      *i = v18;
    }
    else {
      v23 = *v5;
      v14 = nullptr;
      *v5 = *v6;
      *(_QWORD*)(v23 + 8) = v6;
      *(_QWORD*)(*v6 + 8) = v5;
      *v6 = v23;
    }
  }
  return v14;
}

__int64 GameHr_27f000(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 result;

  GameRoutine_280190();
  v4 = GameData_2135238[0];
  *(_QWORD*)(a1 + 568) = a2;
  *(_QWORD*)a1 = v4 + 2;
  *(_QWORD*)(a1 + 544) = a1 + 544;
  *(_QWORD*)(a1 + 552) = a1 + 544;
  result = GameRoutine_27f370(a1 + 576);
  *(_BYTE*)(a1 + 2496) = 0;
  return result;
}

__int64 GameHr_27f370(__int64 a1)
{
  __int64 result;
  __int64* v3;

  result = GameRoutine_2828d0();
  *(_QWORD*)(a1 + 216) = a1 + 208;
  v3 = GameData_2135240[0];
  *(_QWORD*)(a1 + 1888) = 0;
  *(_QWORD*)(a1 + 1896) = 0;
  *(_DWORD*)(a1 + 1908) = 0;
  *(_QWORD*)a1 = v3 + 2;
  *(_QWORD*)(a1 + 200) = v3 + 15;
  *(_QWORD*)(a1 + 208) = a1 + 208;
  *(_DWORD*)(a1 + 1911) = 0;
  return result;
}

__int64 GameHr_27f3d0(_QWORD* a1)
{
  __int64* v2;

  v2 = GameData_2135240[0] + 15;
  *a1 = GameData_2135240[0] + 2;
  a1[25] = v2;
  GameRoutine_27f500();
  *a1 = GameData_2135250 + 2;
  return GameRoutine_1a0a170(a1 + 1);
}

__int64 GameHr_27fdd0(__int64 result, double a2, float a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if (*(_BYTE*)(result - 136) == 1 && *(_BYTE*)(result - 135) == 1 &&
      (*(_BYTE*)(result - 134) & 1) == 0) {
    v3 = result;
    result = GameRoutine_27f940(result - 200, a2, a3);
    if ((result & 1) != 0) {
      v4 = v3;
      *(_BYTE*)(v3 - 133) = 1;
      if (*(_BYTE*)(v3 + 1714) == 1) {
        v5 = GameRoutine_2a1b90(result);
        result = GameRoutine_2a1fd0(v5, v3);
        v4 = v3;
        *(_BYTE*)(v3 + 1714) = 0;
      }
      if (*(_BYTE*)(v4 - 135) == 1) {
        *(_BYTE*)(v4 - 135) = 0;
      }
    }
  }
  return result;
}

_BYTE* GameHr_27ff10(_BYTE* result, __int64 a2)
{
  _QWORD* v2;

  if (*(_BYTE*)a2 == 66 && *(_BYTE*)(a2 + 1) == 65 && *(_BYTE*)(a2 + 2) == 87 &&
      *(_BYTE*)(a2 + 3) == 83 && *(_BYTE*)(a2 + 4) == 68 &&
      *(_BYTE*)(a2 + 5) == 32 && *(_BYTE*)(a2 + 6) == 32 &&
      *(_BYTE*)(a2 + 7) == 32 && *(unsigned __int16*)(a2 + 12) == 65279 &&
      *(_DWORD*)(a2 + 8) == 0x10000) {
    v2 = result;
    result = (_BYTE*)GameRoutine_280120(a2);
    if (result != nullptr && *result == 73 && result[1] == 78 &&
        result[2] == 70 && result[3] == 79) {
      *v2 = result + 16;
    }
  }
  return result;
}

__int64 GameHr_280000(_QWORD* a1, int* a2)
{
  int v4;
  int* v5;
  __int64 v6;
  int* v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int* v11;
  __int64 v12;

  v4 = *(_DWORD*)GameRoutine_280130(*a1);
  *a2 = v4;
  if (v4 >= 1) {
    v5 = a2 + 4;
    v6 = 0;
    do {
      v7 = &a2[61 * v6 + 1];
      v8 = GameRoutine_280140(*a1, (unsigned int)v6);
      v9 = *(_DWORD*)GameRoutine_280160();
      *v7 = v9;
      if (v9 >= 1) {
        v10 = 0;
        v11 = v5;
        do {
          v12 = GameRoutine_280170(v8, (unsigned int)v10++);
          *(v11 - 2) = *(_DWORD*)v12;
          *(v11 - 1) = *(_DWORD*)(v12 + 4);
          *v11 = *(_DWORD*)(v12 + 8);
          v11[1] = *(_DWORD*)(v12 + 12);
          v11[2] = *(_DWORD*)(v12 + 16);
          *((_BYTE*)v11 + 12) = *(_BYTE*)(v12 + 20);
          *((_BYTE*)v11 + 13) = *(_BYTE*)(v12 + 21);
          v11 += 6;
        } while (v10 < *v7);
      }
      ++v6;
      v5 += 61;
    } while (v6 < *a2);
  }
  return 1;
}

char* GameHr_280140(unsigned int* a1, int a2)
{
  return (char*)a1 + *a1 + *(unsigned int*)((char*)&a1[a2 + 1] + *a1);
}

__int64 GameHr_280170(__int64 a1, int a2)
{
  return a1 + *(unsigned int*)(a1 + 4) +
         *(unsigned int*)(a1 + *(unsigned int*)(a1 + 4) + 4LL * a2 + 4);
}

__int64 GameHr_280190(__int64 result)
{
  __int64* v1;

  v1 = GameData_2135248[0];
  *(_QWORD*)(result + 120) = 0xFFFFFFFFLL;
  *(_QWORD*)(result + 128) = 0xFFFFFFFFLL;
  *(_DWORD*)(result + 188) = -1;
  *(_QWORD*)(result + 104) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 112) = 0;
  *(_QWORD*)(result + 140) = 0;
  *(_DWORD*)(result + 136) = 1065353216;
  *(_DWORD*)(result + 176) = 1065353216;
  *(_DWORD*)(result + 408) = 1065353216;
  *(_DWORD*)(result + 404) = 1065353216;
  *(_QWORD*)(result + 396) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 428) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 148) = 0;
  *(_DWORD*)(result + 156) = 0;
  *(_QWORD*)(result + 160) = 0;
  *(_QWORD*)(result + 168) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 180) = 0;
  *(_DWORD*)(result + 260) = 0;
  *(_QWORD*)(result + 288) = 0;
  *(_QWORD*)(result + 320) = 0;
  *(_DWORD*)(result + 328) = 0;
  *(_QWORD*)(result + 336) = 0;
  *(_QWORD*)(result + 344) = 0;
  *(_DWORD*)(result + 240) = 0;
  *(_QWORD*)(result + 224) = 0;
  *(_QWORD*)(result + 232) = 0;
  *(_QWORD*)(result + 208) = 0;
  *(_QWORD*)(result + 216) = 0;
  *(_QWORD*)(result + 192) = 0;
  *(_QWORD*)(result + 200) = 0;
  *(_QWORD*)(result + 420) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 480) = 0;
  *(_QWORD*)(result + 488) = 0;
  *(_QWORD*)(result + 464) = 0;
  *(_QWORD*)(result + 472) = 0;
  *(_QWORD*)result = v1 + 2;
  *(_QWORD*)(result + 388) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 412) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 496) = result + 496;
  *(_QWORD*)(result + 504) = result + 496;
  *(_QWORD*)(result + 512) = result + 512;
  *(_QWORD*)(result + 520) = result + 512;
  *(_QWORD*)(result + 528) = result + 528;
  *(_QWORD*)(result + 536) = result + 528;
  return result;
}

__int64 GameHr_2828d0(__int64 a1)
{
  *(_QWORD*)a1 = GameData_2135250 + 2;
  GameRoutine_1a0a160(a1 + 8, 0, 0);
  *(_QWORD*)(a1 + 48) = 0;
  *(_DWORD*)(a1 + 64) = 0;
  *(_BYTE*)(a1 + 68) = 0;
  *(_QWORD*)(a1 + 92) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_DWORD*)(a1 + 132) = 1065353216;
  *(_DWORD*)(a1 + 56) = 1;
  *(_BYTE*)(a1 + 88) = -1;
  *(_QWORD*)(a1 + 124) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 116) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 136) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 144) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 72) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 152) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 100) = 0x3F80000000000001LL;
  *(_QWORD*)(a1 + 108) = 0x3F80000000000000LL;
  return GameRoutine_1a0a190(a1 + 8);
}

__int64 GameHr_282ae0(__int64 result)
{
  __int64* v1;

  v1 = GameData_2135260[0];
  *(_QWORD*)(result + 16) = result + 8;
  *(_QWORD*)result = v1 + 2;
  *(_QWORD*)(result + 8) = result + 8;
  *(_DWORD*)(result + 24) = 1;
  return result;
}

_QWORD* GameHr_283000(_QWORD* result, __int64 a2)
{
  _QWORD* v2;
  _DWORD* v4;
  _DWORD* v5;

  result[1] = 0;
  result[2] = 0;
  *result = 0;
  if (*(_DWORD*)a2 == 1347569478 && *(__int16*)(a2 + 4) == -257 &&
      *(_DWORD*)(a2 + 8) == 0x10000) {
    v2 = result;
    v4 = (_DWORD*)GameRoutine_2831a0(a2);
    v5 = (_DWORD*)GameRoutine_283200(a2);
    result = (_QWORD*)GameRoutine_283260(a2);
    if (v4 != nullptr && v5 != nullptr && *v4 == 1330007625 &&
        *v5 == 1162627398) {
      if (result != nullptr) {
        if (*(_DWORD*)result != 1481002569) {
          return result;
        }
        v2[2] = result + 1;
      }
      *v2 = v4 + 2;
      v2[1] = v5 + 2;
    }
  }
  return result;
}

__int64 GameHr_2830f0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int* v3;
  _DWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;

  v3 = *(unsigned int**)a1;
  if (*(_QWORD*)a1 == 0 || a3 >= *v3) {
    return 0;
  }
  v4 = (unsigned int*)((char*)v3 + (int)v3[2 * a3 + 2]);
  *(_DWORD*)a2 = *v4;
  v5 = *(_QWORD*)(a1 + 8);
  v6 = (int)v4[2];
  result = 1;
  v8 = v5 + v6;
  if ((_DWORD)v6 == -1) {
    v9 = 0;
  }
  else {
    v9 = v8;
  }
  *(_QWORD*)(a2 + 8) = v9;
  return result;
}

__int64 GameHr_283140(__int64 a1)
{
  unsigned int* v1;

  v1 = *(unsigned int**)(a1 + 16);
  if (v1 != nullptr) {
    return *v1;
  }
  else {
    return 0;
  }
}

__int64 GameHr_283160(__int64 a1, _QWORD* a2, unsigned int a3)
{
  unsigned int* v3;

  v3 = *(unsigned int**)(a1 + 16);
  if (v3 == nullptr || a3 >= *v3) {
    return 0;
  }
  *a2 = *(_QWORD*)((char*)v3 + (int)v3[2 * a3 + 2]);
  return 1;
}

__int64 GameHr_2831a0(__int64 a1)
{
  __int64 v1;
  int* i;
  __int64 v3;

  v1 = *(unsigned __int16*)(a1 + 16);
  if (*(_WORD*)(a1 + 16) == 0) {
    return 0;
  }
  for (i = (int*)(a1 + 24); *((_WORD*)i - 2) != 30720; i += 3) {
    if (--v1 == 0) {
      return 0;
    }
  }
  v3 = *i;
  if ((_DWORD)v3 != 0) {
    return a1 + v3;
  }
  else {
    return 0;
  }
}

__int64 GameHr_283200(__int64 a1)
{
  __int64 v1;
  int* i;
  __int64 v3;

  v1 = *(unsigned __int16*)(a1 + 16);
  if (*(_WORD*)(a1 + 16) == 0) {
    return 0;
  }
  for (i = (int*)(a1 + 24); *((_WORD*)i - 2) != 30721; i += 3) {
    if (--v1 == 0) {
      return 0;
    }
  }
  v3 = *i;
  if ((_DWORD)v3 != 0) {
    return a1 + v3;
  }
  else {
    return 0;
  }
}

__int64 GameHr_283260(__int64 a1)
{
  __int64 v1;
  int* i;
  __int64 v3;

  v1 = *(unsigned __int16*)(a1 + 16);
  if (*(_WORD*)(a1 + 16) == 0) {
    return 0;
  }
  for (i = (int*)(a1 + 24); *((_WORD*)i - 2) != 30722; i += 3) {
    if (--v1 == 0) {
      return 0;
    }
  }
  v3 = *i;
  if ((_DWORD)v3 != 0) {
    return a1 + v3;
  }
  else {
    return 0;
  }
}

__int64 GameHr_2832c0(unsigned int* a1, char a2)
{
  __int64 v2;
  __int64 v4;
  unsigned __int64 v5;
  int v6;
  __int64 v7;

  v2 = *a1;
  if ((int)v2 < 1) {
    v5 = 0;
  }
  else {
    v4 = 80 * v2 + 16;
    v5 = ((unsigned __int64)*a1 << 7) + 48;
    if ((a2 & 1) == 0) {
      v5 = v4;
    }
  }
  v6 = a1[2];
  if (v6 <= 4) {
    v7 = v5;
  }
  else {
    v7 = v5 + 4LL * (unsigned int)(v6 - 4) + 16;
  }
  if (*((_BYTE*)a1 + 4) == 1) {
    v7 += GameRoutine_283db0() + 216;
    if (*((_BYTE*)a1 + 5) != 1) {
      return v7;
    }
  }
  else if (*((_BYTE*)a1 + 5) != 1) {
    return v7;
  }
  return v7 + GameRoutine_288600(a1[2]) + 24;
}

__int64 GameHr_2838f0(__int64* a1)
{
  __int64 result;

  result = *a1;
  if (result == 0) {
    result = a1[3];
    if (result == 0) {
      result = a1[4];
      if (result == 0) {
        return a1[5];
      }
    }
  }
  return result;
}

__int64 GameHr_283930(__int64 a1)
{
  if (*(_QWORD*)a1 != 0) {
    return *(unsigned int*)(*(_QWORD*)a1 + 8LL);
  }
  else {
    return 0;
  }
}

__int64 GameHr_283a20(__int64 result, int a2, _QWORD* a3)
{
  unsigned int v3;
  unsigned int v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v3 = a2 - 1;
  if ((unsigned int)(a2 - 1) >= 3) {
    nn_detail_UnexpectedDefaultImpl();
  }
  v4 = *(_DWORD*)(*(_QWORD*)result + 8LL);
  if ((int)v3 < (int)v4) {
    if (v3 >= v4) {
      nn_diag_detail_AbortImpl_1a0a590();
    }
    v5 = (_QWORD*)(**(_QWORD**)result + 80LL * v3);
    v6 = a3[1];
    *v5 = *a3;
    v5[1] = v6;
    v7 = a3[2];
    v8 = a3[3];
    v9 = a3[5];
    v5[4] = a3[4];
    v5[5] = v9;
    v5[2] = v7;
    v5[3] = v8;
    v10 = a3[6];
    v11 = a3[7];
    v12 = a3[9];
    v5[8] = a3[8];
    v5[9] = v12;
    v5[6] = v10;
    v5[7] = v11;
  }
  return result;
}

__int64 GameHr_283ac0(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 24);
  if (v1 != 0) {
    return *(unsigned int*)(v1 + 8);
  }
  else {
    return 0;
  }
}

float GameHr_283ae0(__int64 a1, int a2)
{
  float result;
  int v3;
  __int64 v4;

  result = 0.0;
  v3 = a2 - 4;
  if (a2 >= 4) {
    v4 = *(_QWORD*)(a1 + 24);
    if (v3 < *(_DWORD*)(v4 + 8)) {
      return *(float*)(*(_QWORD*)v4 + 4LL * (unsigned int)v3);
    }
  }
  return result;
}

__int64 GameHr_283b20(__int64 result, int a2, float a3)
{
  int v3;
  __int64 v4;

  v3 = a2 - 4;
  if (a2 >= 4) {
    v4 = *(_QWORD*)(result + 24);
    if (v3 < *(_DWORD*)(v4 + 8)) {
      *(float*)(*(_QWORD*)v4 + 4LL * (unsigned int)v3) = a3;
    }
  }
  return result;
}

__int64 GameHr_283b60(__int64 result, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 i;
  __int64 v6;

  if (a2 != 0) {
    v2 = *(_QWORD*)(result + 24);
    if (v2 != 0) {
      v3 = *(_DWORD*)(v2 + 8);
      LODWORD(v4) = *(_DWORD*)(a2 + 8);
      if ((int)v4 >= v3) {
        v4 = (unsigned int)v3;
      }
      else {
        v4 = (unsigned int)v4;
      }
      if ((int)v4 >= 1) {
        for (i = 0; i != v4; ++i) {
          if (i >= *(int*)(a2 + 8)) {
            nn_diag_detail_AbortImpl_1a0a590();
          }
          if (i >= *(int*)(v2 + 8)) {
            nn_diag_detail_AbortImpl_1a0a590();
          }
          *(_DWORD*)(*(_QWORD*)v2 + 4 * i) = *(_DWORD*)(*(_QWORD*)a2 + 4 * i);
        }
        v3 = *(_DWORD*)(v2 + 8);
      }
      if ((int)v4 < v3) {
        if ((v4 & 0x80000000) != 0) {
          nn_diag_detail_AbortImpl_1a0a590();
        }
        v6 = 4LL * (unsigned int)v4;
        do {
          LODWORD(v4) = v4 + 1;
          *(_DWORD*)(*(_QWORD*)v2 + v6) = 0;
          v6 += 4;
        } while ((signed __int32)*(_DWORD*)(v2 + 8) > (int)v4);
      }
    }
  }
  return result;
}

__int64 GameHr_283d20(__int64 a1, unsigned int a2)
{
  __int64 result;
  __int64 v4;

  result = 0;
  if ((a2 & 0x80000000) == 0) {
    v4 = *(_QWORD*)(a1 + 40);
    if ((signed int)a2 < *(_DWORD*)(v4 + 8)) {
      return *(unsigned __int8*)(*(_QWORD*)v4 + a2);
    }
  }
  return result;
}

__int64 GameHr_283dc0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)(a1 + 200) = a2;
  if (a4 >= 1) {
    v4 = a4 & 7;
    if ((unsigned int)a4 < 8) {
      v5 = 0;
      if ((a4 & 7) == 0) {
        goto LABEL_9;
      }
      goto LABEL_8;
    }
    v6 = 7;
    do {
      *(_BYTE*)(*(_QWORD*)(a1 + 200) + v6 - 7) = 0;
      *(_BYTE*)(*(_QWORD*)(a1 + 200) + v6 - 6) = 0;
      *(_BYTE*)(*(_QWORD*)(a1 + 200) + v6 - 5) = 0;
      *(_BYTE*)(*(_QWORD*)(a1 + 200) + v6 - 4) = 0;
      *(_BYTE*)(*(_QWORD*)(a1 + 200) + v6 - 3) = 0;
      *(_BYTE*)(*(_QWORD*)(a1 + 200) + v6 - 2) = 0;
      *(_BYTE*)(*(_QWORD*)(a1 + 200) + v6 - 1) = 0;
      *(_BYTE*)(*(_QWORD*)(a1 + 200) + v6) = 0;
      v6 += 8;
    } while (v6 - (a4 & 0x7FFFFFF8) != 7);
    v5 = v6 - 7;
    if ((a4 & 7) != 0) {
      do {
      LABEL_8:
        --v4;
        *(_BYTE*)(*(_QWORD*)(a1 + 200) + v5++) = 0;
      } while (v4 != 0);
    }
  }
LABEL_9:
  *(_DWORD*)(a1 + 208) = a4;
  return 1;
}

__int64 GameHr_283ea0(__int64 result)
{
  __int64 v1;

  *(_BYTE*)(result + 192) = 0;
  *(_QWORD*)result = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 8) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 16) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 24) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 32) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 40) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 48) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 56) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 64) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 72) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 80) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 88) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 96) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 104) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 112) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 120) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 128) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 136) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 144) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 152) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 160) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 168) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 176) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 184) = 0x3F8000003F800000LL;
  if (*(int*)(result + 208) >= 1) {
    v1 = 0;
    do {
      *(_BYTE*)(*(_QWORD*)(result + 200) + v1++) = 0;
    } while (v1 < *(int*)(result + 208));
  }
  return result;
}

__int64 GameHr_283f20(__int64 a1, __int64 a2)
{
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  int v11;

  *(_BYTE*)(a1 + 192) = *(_BYTE*)(a2 + 192);
  GameRoutine_1a0b950(a1, a2, 192);
  LODWORD(v4) = *(_DWORD*)(a1 + 208);
  v5 = *(_DWORD*)(a2 + 208);
  if (v5 >= (int)v4) {
    v6 = *(_DWORD*)(a1 + 208);
  }
  else {
    v6 = *(_DWORD*)(a2 + 208);
  }
  if (v6 < 1) {
    if (v6 >= (int)v4 || (_DWORD)v4 == 0) {
      return a1;
    }
    goto LABEL_22;
  }
  v7 = v6 & 7;
  if ((unsigned int)v6 >= 8) {
    v10 = 7;
    do {
      *(_BYTE*)(*(_QWORD*)(a1 + 200) + v10 - 7) =
          *(_BYTE*)(*(_QWORD*)(a2 + 200) + v10 - 7);
      *(_BYTE*)(*(_QWORD*)(a1 + 200) + v10 - 6) =
          *(_BYTE*)(*(_QWORD*)(a2 + 200) + v10 - 6);
      *(_BYTE*)(*(_QWORD*)(a1 + 200) + v10 - 5) =
          *(_BYTE*)(*(_QWORD*)(a2 + 200) + v10 - 5);
      *(_BYTE*)(*(_QWORD*)(a1 + 200) + v10 - 4) =
          *(_BYTE*)(*(_QWORD*)(a2 + 200) + v10 - 4);
      *(_BYTE*)(*(_QWORD*)(a1 + 200) + v10 - 3) =
          *(_BYTE*)(*(_QWORD*)(a2 + 200) + v10 - 3);
      *(_BYTE*)(*(_QWORD*)(a1 + 200) + v10 - 2) =
          *(_BYTE*)(*(_QWORD*)(a2 + 200) + v10 - 2);
      *(_BYTE*)(*(_QWORD*)(a1 + 200) + v10 - 1) =
          *(_BYTE*)(*(_QWORD*)(a2 + 200) + v10 - 1);
      *(_BYTE*)(*(_QWORD*)(a1 + 200) + v10) =
          *(_BYTE*)(*(_QWORD*)(a2 + 200) + v10);
      v10 += 8;
    } while (v10 - (v6 & 0x7FFFFFF8) != 7);
    v8 = v10 - 7;
    if ((v6 & 7) == 0) {
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  v8 = 0;
  if ((v6 & 7) != 0) {
    do {
    LABEL_17:
      --v7;
      *(_BYTE*)(*(_QWORD*)(a1 + 200) + v8) =
          *(_BYTE*)(*(_QWORD*)(a2 + 200) + v8);
      ++v8;
    } while (v7 != 0);
  }
LABEL_18:
  v11 = *(_DWORD*)(a1 + 208);
  if (v6 >= v11 || v11 == 0) {
    return a1;
  }
LABEL_22:
  if ((int)v4 >= v5) {
    LODWORD(v4) = v5;
  }
  v4 = (int)v4;
  do {
    *(_BYTE*)(*(_QWORD*)(a1 + 200) + v4++) = 0;
  } while (*(_DWORD*)(a1 + 208) != 0);
  return a1;
}

__int64 GameHr_2840f0(__int64 result)
{
  __int64* v1;

  v1 = GameData_2135268[0];
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_BYTE*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = result + 48;
  *(_QWORD*)(result + 56) = result + 48;
  *(_QWORD*)result = v1 + 2;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 64) = result + 64;
  *(_QWORD*)(result + 72) = result + 64;
  return result;
}

__int64 GameHr_284120(__int64 a1)
{
  __int64 result;

  *(_QWORD*)a1 = GameData_2135268[0] + 2;
  result = GameRoutine_284200();
  *(_QWORD*)(a1 + 32) = 0;
  *(_BYTE*)(a1 + 40) = 0;
  return result;
}

__int64 GameHr_284370(__int64 a1)
{
  __int64 v1;
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;

  v3 = *(unsigned __int16*)(a1 + 20);
  v1 = a1 + 20;
  v2 = v3;
  v4 = v1 + 12;
  if (*(_WORD*)(v1 + 12) != 0x2000) {
    v4 = v1 + 24;
  }
  if (v2 == 0x2000) {
    v5 = v1;
  }
  else {
    v5 = v4;
  }
  return *(unsigned int*)(v5 + 8);
}

__int64 GameHr_2843a0(__int64 a1)
{
  __int64 v1;
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;

  v3 = *(unsigned __int16*)(a1 + 20);
  v1 = a1 + 20;
  v2 = v3;
  v4 = v1 + 12;
  if (*(_WORD*)(v1 + 12) != 8193) {
    v4 = v1 + 24;
  }
  if (v2 == 8193) {
    v5 = v1;
  }
  else {
    v5 = v4;
  }
  return *(unsigned int*)(v5 + 8);
}

__int64 GameHr_2843d0(__int64 a1)
{
  __int64 v1;
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;

  v3 = *(unsigned __int16*)(a1 + 20);
  v1 = a1 + 20;
  v2 = v3;
  v4 = v1 + 12;
  if (*(_WORD*)(v1 + 12) != 0x2000) {
    v4 = v1 + 24;
  }
  if (v2 == 0x2000) {
    v5 = v1;
  }
  else {
    v5 = v4;
  }
  return *(unsigned int*)(v5 + 4);
}

__int64 GameHr_284400(__int64 a1)
{
  __int64 v1;
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;

  v3 = *(unsigned __int16*)(a1 + 20);
  v1 = a1 + 20;
  v2 = v3;
  v4 = v1 + 12;
  if (*(_WORD*)(v1 + 12) != 8193) {
    v4 = v1 + 24;
  }
  if (v2 == 8193) {
    v5 = v1;
  }
  else {
    v5 = v4;
  }
  return *(unsigned int*)(v5 + 4);
}

__int64 GameHr_284430(__int64 a1)
{
  __int64 v1;
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;

  v3 = *(unsigned __int16*)(a1 + 20);
  v1 = a1 + 20;
  v2 = v3;
  v4 = v1 + 12;
  if (*(_WORD*)(v1 + 12) != 8194) {
    v4 = v1 + 24;
  }
  if (v2 == 8194) {
    v5 = v1;
  }
  else {
    v5 = v4;
  }
  return *(unsigned int*)(v5 + 4);
}

char* GameHr_2845c0(__int64 a1, unsigned int a2)
{
  unsigned int* v2;

  if (HIBYTE(a2) == 1 &&
      (v2 = (unsigned int*)(a1 + *(int*)(a1 + 4)), (a2 & 0xFFFFFF) < *v2)) {
    return (char*)v2 + (int)v2[2 * (a2 & 0xFFFFFF) + 2];
  }
  else {
    return nullptr;
  }
}

char* GameHr_284610(__int64 a1, unsigned int a2)
{
  unsigned int* v2;

  if (HIBYTE(a2) == 3 &&
      (v2 = (unsigned int*)(a1 + *(int*)(a1 + 20)), (a2 & 0xFFFFFF) < *v2)) {
    return (char*)v2 + (int)v2[2 * (a2 & 0xFFFFFF) + 2];
  }
  else {
    return nullptr;
  }
}

char* GameHr_284650(__int64 a1, unsigned int a2)
{
  unsigned int* v2;

  if (HIBYTE(a2) == 4 &&
      (v2 = (unsigned int*)(a1 + *(int*)(a1 + 44)), (a2 & 0xFFFFFF) < *v2)) {
    return (char*)v2 + (int)v2[2 * (a2 & 0xFFFFFF) + 2];
  }
  else {
    return nullptr;
  }
}

char* GameHr_2846a0(__int64 a1, unsigned int a2)
{
  unsigned int* v2;

  if (HIBYTE(a2) == 2 &&
      (v2 = (unsigned int*)(a1 + *(int*)(a1 + 12)), (a2 & 0xFFFFFF) < *v2)) {
    return (char*)v2 + (int)v2[2 * (a2 & 0xFFFFFF) + 2];
  }
  else {
    return nullptr;
  }
}

char* GameHr_2846f0(__int64 a1, unsigned int a2)
{
  unsigned int* v2;

  if (HIBYTE(a2) == 6 &&
      (v2 = (unsigned int*)(a1 + *(int*)(a1 + 36)), (a2 & 0xFFFFFF) < *v2)) {
    return (char*)v2 + (int)v2[2 * (a2 & 0xFFFFFF) + 2];
  }
  else {
    return nullptr;
  }
}

char* GameHr_284740(__int64 a1, unsigned int a2)
{
  unsigned int* v2;

  if (HIBYTE(a2) == 5 &&
      (v2 = (unsigned int*)(a1 + *(int*)(a1 + 28)), (a2 & 0xFFFFFF) < *v2)) {
    return (char*)v2 + (int)v2[2 * (a2 & 0xFFFFFF) + 2];
  }
  else {
    return nullptr;
  }
}

char* GameHr_284790(__int64 a1, int a2)
{
  unsigned int* v2;

  v2 = (unsigned int*)(a1 + *(int*)(a1 + 52));
  if ((a2 & 0xFFFFFFu) >= *v2) {
    return nullptr;
  }
  else {
    return (char*)v2 + (int)v2[2 * (a2 & 0xFFFFFF) + 2];
  }
}

__int64 GameHr_284950(__int64 a1)
{
  if ((unsigned int)*(unsigned __int16*)(a1 + 12) - 8705 > 2) {
    return 0;
  }
  else {
    return GameData_1b0c56c[(unsigned __int16)(*(_WORD*)(a1 + 12) - 8705)];
  }
}

__int64 GameHr_284990(int* a1, unsigned int a2)
{
  unsigned int v3;
  __int64 result;
  unsigned int* v5;
  char* v6;
  unsigned int v7;
  unsigned int* v8;
  unsigned int* v9;
  char* v10;
  char* v11;
  unsigned int* v12;
  char* v13;
  unsigned int* v14;
  char* v15;

  v3 = HIBYTE(a2);
  result = 0xFFFFFFFFLL;
  if (HIBYTE(a2) <= 3u) {
    switch (v3) {
    case 1u:
      v9 = (unsigned int*)((char*)a1 + a1[1]);
      if ((a2 & 0xFFFFFF) < *v9) {
        v10 = (char*)v9 + (int)v9[2 * (a2 & 0xFFFFFF) + 2];
        if ((v10[20] & 1) != 0) {
          return *((unsigned int*)v10 + 6);
        }
      }
      break;
    case 2u:
      v12 = (unsigned int*)((char*)a1 + a1[3]);
      if ((a2 & 0xFFFFFF) < *v12) {
        v13 = (char*)v12 + (int)v12[2 * (a2 & 0xFFFFFF) + 2];
        if ((v13[24] & 1) != 0) {
          return *((unsigned int*)v13 + 7);
        }
      }
      break;
    case 3u:
      v5 = (unsigned int*)((char*)a1 + a1[5]);
      if ((a2 & 0xFFFFFF) < *v5) {
        v6 = (char*)v5 + (int)v5[2 * (a2 & 0xFFFFFF) + 2];
        if ((v6[12] & 1) != 0) {
          return *((unsigned int*)v6 + 4);
        }
      }
      break;
    default:
      break;
    }
    return result;
  }
  if (v3 == 4) {
    v7 = a2 & 0xFFFFFF;
    v8 = (unsigned int*)((char*)a1 + a1[11]);
    if ((a2 & 0xFFFFFF) >= *v8) {
      return result;
    }
  LABEL_17:
    v11 = (char*)v8 + (int)v8[2 * v7 + 2];
    if ((v11[4] & 1) != 0) {
      return *((unsigned int*)v11 + 2);
    }
    return result;
  }
  if (v3 != 5) {
    if (v3 != 6) {
      return result;
    }
    v7 = a2 & 0xFFFFFF;
    v8 = (unsigned int*)((char*)a1 + a1[9]);
    if ((a2 & 0xFFFFFF) >= *v8) {
      return result;
    }
    goto LABEL_17;
  }
  v14 = (unsigned int*)((char*)a1 + a1[7]);
  if ((a2 & 0xFFFFFF) < *v14) {
    v15 = (char*)v14 + (int)v14[2 * (a2 & 0xFFFFFF) + 2];
    if ((v15[8] & 1) != 0) {
      return *((unsigned int*)v15 + 3);
    }
  }
  return result;
}

__int64 GameHr_284b50(__int64 a1)
{
  int v1;

  v1 = *(_DWORD*)(a1 + 20);
  if ((v1 & 0x100) != 0) {
    return a1 +
           *(unsigned int*)(a1 + 20 +
                            4LL *
                                ((v1 & 1) + ((v1 & 2) != 0) + ((v1 & 4) != 0) +
                                 ((v1 & 8) != 0) + ((v1 & 0x10) != 0) +
                                 ((v1 & 0x20) != 0) + ((v1 & 0x40) != 0) +
                                 (unsigned int)((v1 & 0x80) != 0) + 1));
  }
  else {
    return 0;
  }
}

__int64 GameHr_284bb0(__int64 a1)
{
  __int64 v1;
  char v2;
  int v3;

  v3 = *(_DWORD*)(a1 + 20);
  v1 = a1 + 20;
  v2 = v3;
  if ((v3 & 2) != 0) {
    return *(unsigned __int8*)(v1 + 4LL * (v2 & 1) + 4);
  }
  else {
    return 0;
  }
}

__int64 GameHr_284bd0(__int64 a1)
{
  __int64 v1;
  char v2;
  int v3;

  v3 = *(_DWORD*)(a1 + 20);
  v1 = a1 + 20;
  v2 = v3;
  if ((v3 & 2) != 0) {
    return *(unsigned __int8*)(v1 + 4LL * (v2 & 1) + 5);
  }
  else {
    return 0;
  }
}

__int64 GameHr_284bf0(__int64 a1)
{
  __int64 v1;
  char v2;
  int v3;

  v3 = *(_DWORD*)(a1 + 20);
  v1 = a1 + 20;
  v2 = v3;
  if ((v3 & 8) != 0) {
    return *(unsigned __int8*)(v1 + (v2 & 4) +
                               4 * ((v2 & 1) + (unsigned int)((v2 & 2) != 0)) +
                               4);
  }
  else {
    return 0;
  }
}

__int64 GameHr_284c20(__int64 a1)
{
  __int64 v1;
  char v2;
  int v3;

  v3 = *(_DWORD*)(a1 + 20);
  v1 = a1 + 20;
  v2 = v3;
  if ((v3 & 8) != 0) {
    return *(unsigned __int16*)(v1 + (v2 & 4) +
                                4 * ((v2 & 1) + (unsigned int)((v2 & 2) != 0)) +
                                6);
  }
  else {
    return 0xFFFF;
  }
}

#pragma GCC visibility pop
