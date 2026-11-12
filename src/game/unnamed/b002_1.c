#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

extern unsigned int GameData_1a83730[4];
extern char GameData_1a9f09e;
extern _UNKNOWN* GameData_1f50948;
extern __int64 (*GameData_1f80668[])();
extern __int64 (*GameData_1f80698[])();
extern __int64 (*GameData_1f80980[])();
extern __int64 (*GameData_1f809d8[])();
extern __int64 (*GameData_1f80af0[])();
extern __int64 (*GameData_1f80ff0[])();
extern __int64 (*GameData_1f81070[])();
extern _UNKNOWN GameData_1f81370;
extern __int64 (*GameData_1f84178[])();
extern __int64 (*GameData_1f842e8[])();
extern __int64 (*GameData_1f84908[])();
extern __int64 (*GameData_1f84f68[])();
extern __int64 (*GameData_1f85290[])();
extern __int64 (*GameData_1f852e0[])();
extern __int64 (*GameData_1f863c0[])();
extern __int64 (*GameData_1f866c0[])();
extern __int64 (*GameData_1f86810[])();
extern __int64 (*GameData_1f86c60[])();
extern __int64 (*GameData_1f872c0[])();
extern __int64 (*GameData_1f872f0[])();
extern __int64 (*GameData_1f87320[])();
extern __int64 (*GameData_1f88398[])();
extern __int64 (*GameData_1f883b8[])();
extern __int64 (*GameData_1f88468)();
extern __int64 (*GameData_1f88e48[])();
extern __int64 (*GameData_1f88ef8[])();
extern __int64 (*GameData_1f890e0)();
extern __int64 GameData_2135528[4];
extern __int64 GameData_2135538[2];
extern __int64 (*GameData_2135548)();
extern __int64 GameData_2135558[2];
extern __int64 (*GameData_2135568)();
extern __int64* GameData_21355d8[2];
extern _UNKNOWN* GameData_21355f8;
extern _UNKNOWN* GameData_2135600;
extern _UNKNOWN* GameData_21356c0;
extern _UNKNOWN* GameData_2135788;
extern _UNKNOWN* GameData_2135800;
extern _UNKNOWN* GameData_2135840;
extern _UNKNOWN* GameData_2135848;
extern _UNKNOWN* GameData_2135890;
extern _UNKNOWN* GameData_2135968;
extern _UNKNOWN* GameData_2135c40;
extern _UNKNOWN* GameData_2135c48;
extern int GameData_2140c00;
extern int GameData_2140c04;
extern int GameData_2140c08;
extern _UNKNOWN* GameData_2140c10;
extern _UNKNOWN GameData_21a3488;
extern _UNKNOWN GameData_21a3518;
__int64 GameRoutine_14e360(_QWORD);
__int64 GameRoutine_1a09b70(_QWORD);
__int64 GameRoutine_1a09b80(_QWORD);
float GameRoutine_1a09fb0(_QWORD, float);
long double GameRoutine_1a09fc0(float);
__int64 GameRoutine_1a0a010(float);
__int64 GameRoutine_1a0a040(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a150(_QWORD, _QWORD);
__int64 GameRoutine_1a0a7e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 GameRoutine_1a0a800(_QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0bfe0(void);
__int64 GameRoutine_1a0c0a0(_QWORD, _QWORD);
__int64 GameRoutine_1a0c1a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0c460(_QWORD, _QWORD);
__int64 GameRoutine_1a0cc00(_QWORD, _QWORD);
__int64 GameRoutine_1a0cc10(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0cc30(_QWORD, float);
__int64 GameRoutine_1a0cc70(_QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_1a0cc80(_QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_2899a0(_QWORD);
__int64* GameRoutine_2a4300(__int64, __int64, __int64, __int64);
__int64 GameRoutine_2a4a30(void);
__int64 GameRoutine_2a4a60(_QWORD);
__int64 GameRoutine_2a5b40(__int64 result, int, int);
__int64 GameRoutine_2a6af0(__int64 result);
__int64 GameRoutine_2a70d0(__int64 result, _QWORD*);
__int64 GameRoutine_2a74a0(__int64);
__int64 GameRoutine_2a7620(__int64 result);
__int64 GameRoutine_2a76e0(__int64 result);
__int64 GameRoutine_2ae140(__int64);
__int64 GameRoutine_2af630(__int64 result, __int64, __int64 (***)(_QWORD));
__int64 GameRoutine_2af980(__int64, __int64, __int64, __int64 (***)(_QWORD));
__int64 GameRoutine_2afaa0(__int64, __int64);
__int64 GameRoutine_2afbb0(__int64 result, __int64, __int64 (***)(_QWORD));
__int64 GameRoutine_2afc40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b2dc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b2ec0(_QWORD, _QWORD);
__int64 GameRoutine_2b2f70(_QWORD, _QWORD);
__int64 GameRoutine_2b3020(_QWORD, _QWORD);
__int64 GameRoutine_2b30e0(_QWORD*, unsigned __int64);
__int64 GameRoutine_2b3150(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b31e0(void);
__int64 GameRoutine_2b3250(void);
__int64 GameRoutine_2b3260(_QWORD);
__int64 GameRoutine_2b3270(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b3290(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b4a60(void);
__int64 GameRoutine_2b4a70(_QWORD);
__int64 GameRoutine_2b4aa0(_QWORD, _QWORD);
__int64 GameRoutine_2b4b20();
__int64 GameRoutine_2b4b80(_QWORD, _QWORD);
__int64 GameRoutine_2b4b90(_QWORD, _QWORD);
__int64 GameRoutine_2b4bb0(_QWORD, _QWORD);
__int64 GameRoutine_2b4bc0(_QWORD);
__int64 GameRoutine_2b4fd0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b4fe0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b5190(void);
__int64 GameRoutine_2b51f0(_QWORD, _QWORD);
__int64 GameRoutine_2b5220(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b6570(__int64 result);
__int64 GameRoutine_2b67e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b72e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b8360(__int64, __int16*, int);
__int64 GameRoutine_2b9240(__int64 result);
__int64 GameRoutine_2b9b20(__int64 result);
__int64 GameRoutine_2bc200(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2c0810(_QWORD);
__int64 GameRoutine_2ccbb0(_QWORD, _QWORD);
__int64 GameRoutine_2d2a10(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2d52e0(_QWORD, _QWORD);
__int64 GameRoutine_2dbfe0(_QWORD, _QWORD);
__int64 GameRoutine_2df7b0(void);
__int64 GameRoutine_2e9910(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2ecb70(_QWORD);
__int64 GameRoutine_2ffd00(_QWORD, _QWORD);
__int64 GameRoutine_2ffe00(_QWORD, _QWORD);
__int64 GameRoutine_2fff00(_QWORD, _QWORD);
__int64 GameRoutine_304f00(_QWORD, _QWORD);
__int64 GameRoutine_30cf60(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_30e9a0(_QWORD, _QWORD);
__int64 GameRoutine_30fc10(void);
__int64 GameRoutine_30ff40(_QWORD, _QWORD);
__int64 GameRoutine_3105a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_310c40(void);
__int64 GameRoutine_311010(_QWORD*);
__int64 GameRoutine_311070(void);
__int64 GameRoutine_312ec0(void);
__int64 GameRoutine_3169c0(_QWORD, _QWORD);
__int64 GameRoutine_316cc0(_QWORD, _QWORD);
__int64 GameRoutine_317080(_QWORD, _QWORD);
__int64 GameRoutine_31a3c0(_QWORD, _QWORD);
__int64 GameRoutine_320e80(void);
__int64 GameRoutine_333420(_QWORD, _QWORD);
__int64 GameRoutine_333860(_QWORD, _QWORD);
__int64 GameRoutine_361420(_QWORD, _QWORD);
__int64 GameRoutine_361660(_QWORD);
__int64 GameRoutine_3617a0(_QWORD, _QWORD);
__int64 GameRoutine_366a50(_QWORD);
__int64 GameRoutine_36ece0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_377570(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_37b870(_QWORD);
__int64 GameRoutine_37b880(_QWORD);
__int64 GameRoutine_37be20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_37d000(_QWORD);
__int64 GameRoutine_3865e0(_QWORD);
__int64 GameRoutine_386950(void);
__int64 GameRoutine_38ca60(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_38cd20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_39e350(_QWORD);
__int64 GameRoutine_3a2360(void);
__int64 GameRoutine_3a2da0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_3aedc0(_QWORD, _QWORD);
__int64 GameRoutine_3afc20(_QWORD, _QWORD);
__int64 GameRoutine_3afd20(_QWORD, _QWORD);
__int64 GameRoutine_3afe20(_QWORD, _QWORD);
__int64 GameRoutine_3aff80(_QWORD, _QWORD);
__int64 GameRoutine_3b00c0(_QWORD, _QWORD);
__int64 GameRoutine_3b0220(_QWORD, _QWORD);
void GameRoutine_3b8de0(__int64, _QWORD*, unsigned int*, __int64, unsigned int,
                        int, __int64, float, double, float);
__int64 GameRoutine_3b9740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, float, float, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, _QWORD, _DWORD, _DWORD);
__int64 GameRoutine_3dbb10(void);
__int64 GameRoutine_3dbc10(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);
__int64 GameRoutine_4243e0(_QWORD);
__int64 GameRoutine_477ca0(_QWORD);
__int64 GameRoutine_4d1830(_QWORD);
__int64 GameRoutine_55af80(_QWORD);
__int64 GameRoutine_55afc0(_QWORD);
__int64 GameRoutine_55b730(_QWORD);
__int64 GameRoutine_55b740(_QWORD);
__int64 GameRoutine_55b750(_QWORD);
__int64 GameRoutine_55bff0(_QWORD);
__int64 GameRoutine_55c040(_QWORD);
__int64 GameHr_466200(__int64 result, float* a2, _DWORD* a3);
__int64 BaseNx_2b6570(__int64 result);
__int64 FinalMix_2af980(__int64, __int64, __int64, __int64 (***)(_QWORD));
__int64 FinalMix_2afc40(_QWORD, _QWORD, _QWORD);
__int64 FinalMix_2b51f0(int, char);
__int64 GameHr_2afaa0(__int64, __int64);
__int64 GameHr_2b67e0(__int64, __int64, __int64, __int64);
__int64 GameRoutine_304f00_alt1(__int64 result,
                                unsigned int) __asm__("GameRoutine_304f00");
__int64 GameRoutine_30cf60_alt1(_QWORD*, __int64, __int64, __int16*, __int64,
                                __int64, __int64) __asm__("GameRoutine_30cf60");
__int64 GameRoutine_30e9a0_alt1(__int64, unsigned int,
                                float) __asm__("GameRoutine_30e9a0");
__int64 GameRoutine_361660_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_361660");
__int64 GameRoutine_3617a0_alt1(__int64 result,
                                int) __asm__("GameRoutine_3617a0");
__int64 PxGetBroadcastAllocator(_BYTE*);
__int64 PxGetFoundation();
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 physx_Bp_BroadPhaseSap_batchUpdateFewUpdates(_QWORD*, unsigned int,
                                                     unsigned __int64*,
                                                     unsigned int*, _DWORD*,
                                                     long double);
__int64 physx_Bp_resizeBroadPhasePairArray(int, int, __int64, unsigned __int64);
__int64 physx_Dy_ThresholdTable_build(__int64 result, __int64);
__int64 physx_Gu_BV32Tree_Destroy_BV32Tree(_QWORD);
__int64 physx_Gu_SDF_Destroy_SDF(__int64 result);
__int64 physx_Sc_ShapeInteraction_processUserNotificationAsync(
    __int64 result, __int16, __int16, char, int, char, __int64, __int64);
__int64 physx_Sc_ShapeInteraction_processUserNotificationSync(__int64 result);
void* SoundVoiceNX_14e360();
__int64 GameHr_2b5f20(__int64 a1, _QWORD* a2, unsigned int a3, __int64 a4,
                      __int64 a5);
__int64 GameHr_2b60e0(_QWORD* a1, __int64* a2, int a3);
unsigned __int64 GameHr_2b6650(int a1, unsigned int a2, unsigned int a3,
                               unsigned int a4, char a5);
__int64 GameHr_2b6740(__int64 a1, unsigned int a2, unsigned int a3,
                      unsigned int a4, unsigned int a5, char a6, __int64 a7,
                      __int64 a8, __int64 a9);
__int64 GameHr_30f2a0(__int64 a1, __int64 a2, int* a3);
float GameHr_312140(__int64 a1, unsigned int a2);
__int64 GameHr_360f70(__int64 a1);
long double GameHr_3696c0(unsigned int a1, __int64 a2, __int64 a3);
__int64 GameHr_38ee40(__int64 a1, __int64 a2);
__int64 GameHr_3a14b0(__int64 a1, long double a2);
__int64 GameHr_3dcce0(__int64 result, char a2, int a3, __int64 a4);
__int64 GameHr_3f2ca0(__int64 a1);

__int64* GameHr_2a44e0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64* result;
  __int64* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;

  GameRoutine_2a4300((__int64)a1, a2, a3, a4);
  GameRoutine_2b2ec0(*a1, 3);
  result = (__int64*)GameRoutine_2b2dc0(*a1, 40, 4);
  if (result != nullptr) {
    result[3] = 0;
    result[4] = 0;
    result[1] = 0;
    result[2] = 0;
    v6 = result;
    *result = 0;
    result = (__int64*)GameRoutine_2a4a30();
    v7 = *v6;
    v9 = a1[1];
    v8 = a1 + 1;
    *v6 = v9;
    *(_QWORD*)(v7 + 8) = v8;
    *(_QWORD*)(*v8 + 8LL) = v6;
    *v8 = v7;
  }
  return result;
}

__int64* GameHr_2a4720(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD* v5;
  __int64* v6;
  int v7;
  int v8;
  __int64* v9;
  __int64* result;
  __int64* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  void (*v19)(_QWORD*, __int64, __int64);
  __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 v25;
  void (*v26)(_QWORD*, __int64, __int64);
  __int64 v27;
  __int64 v28;
  int v32;
  __int64* v34;
  __int64* v35;
  __int64 v36;
  __int64* v37;
  int v38;
  __int64 v39;
  __int64* v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;

  if ((_DWORD)a2 != 0) {
    v5 = (_QWORD*)a1[2];
    v6 = a1 + 1;
    v7 = a2;
    if (v5 == a1 + 1) {
      v8 = 0;
    }
    else {
      v8 = 0;
      v9 = (__int64*)a1[2];
      do {
        v9 = (__int64*)v9[1];
        ++v8;
      } while (v9 != v6);
    }
    v15 = 1;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = nullptr;
    v20 = 0;
    v21 = a1 + 1;
    while (v21 != v5) {
      v21 = (_QWORD*)*v21;
      v22 = v21 + 2;
      if (v20 == 0) {
        if ((_QWORD*)v21[3] == v22) {
          v20 = 0;
        }
        else {
          v20 = *(_QWORD*)(*v22 + 16LL) + *(_QWORD*)(*v22 + 24LL);
          v19 = *(void (**)(_QWORD*, __int64, __int64))(*v22 + 32LL);
          v18 = *(_QWORD*)(*v22 + 40LL);
          v17 = *(_QWORD*)(*v22 + 48LL);
          v16 = *(_QWORD*)(*v22 + 56LL);
        }
      }
      --v8;
      v23 = v21 + 3;
      do {
        v24 = (_QWORD*)*v23;
        if ((_QWORD*)*v23 == v22) {
          goto LABEL_11;
        }
        v26 = (void (*)(_QWORD*, __int64, __int64))v24[4];
        v25 = v24[5];
        v23 = v24 + 1;
        v27 = v24[6];
        v28 = v24[7];
      } while (v19 == v26 && v18 == v25 && v17 == v27 && v16 == v28);
      v15 = 0;
    LABEL_11:
      if (v8 == v7) {
        goto LABEL_31;
      }
    }
    v21 = nullptr;
  LABEL_31:
    v32 = (v20 != 0) & (unsigned __int8)v15;
    if (v32 == 1 && v19 != nullptr) {
      v19(v21, v20 - (_QWORD)v21, v18);
    }
    while (1) {
      v37 = (__int64*)a1[2];
      if (v37 == v6) {
        if (v7 >= 0) {
          goto LABEL_45;
        }
      }
      else {
        v38 = 0;
        do {
          v37 = (__int64*)v37[1];
          ++v38;
        } while (v37 != v6);
        if (v7 >= v38) {
        LABEL_45:
          GameRoutine_2b3020(*a1, (unsigned int)v7);
          v39 = *a1;
          v40 = (__int64*)a1[2];
          if (v40 == v6) {
            GameRoutine_2b2f70(v39, 0);
            result = (__int64*)GameRoutine_2b2dc0(*a1, 40, 4);
            if (result == nullptr) {
              return result;
            }
          }
          else {
            LODWORD(v41) = 0;
            do {
              v40 = (__int64*)v40[1];
              v41 = (unsigned int)(v41 + 1);
            } while (v40 != v6);
            GameRoutine_2b2f70(v39, v41);
            result = (__int64*)GameRoutine_2b2dc0(*a1, 40, 4);
            if (result == nullptr) {
              return result;
            }
          }
          result[3] = 0;
          result[4] = 0;
          result[1] = 0;
          result[2] = 0;
          v42 = result;
          *result = 0;
          result = (__int64*)GameRoutine_2a4a30();
          v43 = *v42;
          *v42 = *v6;
          *(_QWORD*)(v43 + 8) = v6;
          *(_QWORD*)(*v6 + 8) = v42;
          *v6 = v43;
          return result;
        }
      }
      v34 = (__int64*)*v6;
      if (v32 != 0) {
        *((_BYTE*)v34 + 32) = 0;
      }
      GameRoutine_2a4a60(v34);
      if (v34 != v6) {
        v35 = (__int64*)v34[1];
        v36 = *v35;
        *(_QWORD*)(*v34 + 8) = v35;
        *v35 = *v34;
        *(_QWORD*)(v36 + 8) = v34;
        *v34 = v36;
      }
    }
  }
  GameRoutine_2a4300((__int64)a1, a2, a3, a4);
  GameRoutine_2b2ec0(*a1, 3);
  result = (__int64*)GameRoutine_2b2dc0(*a1, 40, 4);
  if (result != nullptr) {
    result[3] = 0;
    result[4] = 0;
    result[1] = 0;
    result[2] = 0;
    v11 = result;
    *result = 0;
    result = (__int64*)GameRoutine_2a4a30();
    v12 = *v11;
    v14 = a1[1];
    v13 = a1 + 1;
    *v11 = v14;
    *(_QWORD*)(v12 + 8) = v13;
    *(_QWORD*)(*v13 + 8LL) = v11;
    *v13 = v12;
  }
  return result;
}

__int64 GameHr_2a72a0(__int64 result, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;

  v2 = *(_QWORD*)(result + 32);
  v3 = result + 24;
  if (v2 != result + 24) {
    v5 = result;
    do {
      v6 = *(_QWORD*)(v2 + 8);
      result = GameRoutine_2a5b40(v2 - 984, 1, a2);
      if (*(_BYTE*)(v2 - 791) == 0) {
        GameRoutine_2a6af0(v2 - 984);
        result = GameRoutine_2a70d0(v5, (_QWORD*)(v2 - 984));
      }
      v2 = v6;
    } while (v6 != v3);
  }
  return result;
}

__int64 GameHr_2a7340(__int64 result, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  _BYTE* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;

  v2 = *(_QWORD*)(result + 32);
  v3 = result + 24;
  if (v2 != result + 24) {
    v5 = result;
    do {
      v6 = (_BYTE*)(v2 - 791);
      v7 = *(_QWORD*)(v2 + 8);
      v8 = (_QWORD*)(v2 - 984);
      if (*(_BYTE*)(v2 - 791) == 0 ||
          ((v9 = *(_QWORD*)(v2 - 584)) == 0 || *(_DWORD*)(v9 + 376) == 0) &&
              (result = GameRoutine_2a5b40((__int64)v8, 1, a2), *v6 == 0)) {
        GameRoutine_2a6af0((__int64)v8);
        result = GameRoutine_2a70d0(v5, v8);
      }
      v2 = v7;
    } while (v7 != v3);
  }
  return result;
}

_BYTE* GameHr_2aa300(_BYTE* result)
{
  _BYTE* v1;
  _BYTE* v2;
  _BYTE* v3;
  void (*v4)(_BYTE*, __int64, _QWORD);
  __int64* i;
  __int64* v6;
  __int64 v7;

  if (*result == 1) {
    v1 = result + 8;
    v2 = result;
    while (1) {
      v3 = *((_BYTE**)v2 + 2);
      if (v3 == v1) {
        break;
      }
      GameRoutine_2a76e0((__int64)(v3 - 400));
      v4 = *((void (**)(_BYTE*, __int64, _QWORD))v3 - 25);
      if (v4 != nullptr) {
        v4(v3 - 400, 1, *((_QWORD*)v3 - 24));
      }
      result = (_BYTE*)GameRoutine_2a7620((__int64)(v3 - 400));
    }
    for (i = *((__int64**)v2 + 4); i != (__int64*)(v2 + 24);
         i = *((__int64**)v2 + 4)) {
      v6 = (__int64*)i[1];
      v7 = *v6;
      *(_QWORD*)(*i + 8) = v6;
      *v6 = *i;
      *(_QWORD*)(v7 + 8) = i;
      *i = v7;
      result = (_BYTE*)GameRoutine_2a74a0((__int64)(i - 50));
    }
    *v2 = 0;
  }
  return result;
}

__int64 GameHr_2af0c0(__int64 result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;

  v1 = *(__int64**)(result + 64);
  v2 = result + 56;
  if (v1 != (__int64*)(result + 56)) {
    v3 = result + 40;
    do {
      v4 = (__int64*)v1[1];
      result = GameRoutine_2ae140((__int64)(v1 - 126));
      if ((result & 1) == 0) {
        v5 = (__int64*)v1[1];
        v6 = *v5;
        *(_QWORD*)(*v1 + 8) = v5;
        *v5 = *v1;
        *(_QWORD*)(v6 + 8) = v1;
        *v1 = v6;
        *v1 = *(_QWORD*)v3;
        *(_QWORD*)(v6 + 8) = v3;
        *(_QWORD*)(*(_QWORD*)v3 + 8LL) = v1;
        *(_QWORD*)v3 = v6;
      }
      v1 = v4;
    } while (v4 != (__int64*)v2);
  }
  return result;
}

__int64 GameHr_2afd90(__int64 a1, __int64 a2)
{
  if ((unsigned int)a1 >= 4) {
    GameRoutine_1a0a150(a1, a2);
    __udf(0);
  }
  return GameData_1a83730[(unsigned int)a1];
}

_QWORD* GameHr_2b2d10(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* result;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;

  v2 = a2 + a1;
  v3 = a1 + 3;
  result = nullptr;
  v5 = (_QWORD*)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  if ((v3 & 0xFFFFFFFFFFFFFFFCLL) <= (v2 & 0xFFFFFFFFFFFFFFFCLL) &&
      (unsigned __int64)(v2 - (_QWORD)v5) >= 0x58) {
    *v5 = v5;
    v5[1] = v5;
    v5[5] = v5 + 5;
    v5[6] = v5 + 5;
    GameRoutine_2b3150(v5, 1179798856, v5 + 11);
    v6 = v5[2];
    v7 = v5[3];
    v5[10] = 0;
    v5[8] = v6;
    v5[9] = v7;
    return v5;
  }
  return result;
}

__int64 GameHr_2b2d90(__int64 a1)
{
  GameRoutine_2b31e0();
  return a1;
}

unsigned __int64 GameHr_2b2dc0(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;

  if (a2 <= 1) {
    v5 = 1;
  }
  else {
    v5 = a2;
  }
  v6 = (v5 + 3) & 0xFFFFFFFFFFFFFFFCLL;
  GameRoutine_2b3250();
  if (a3 < 0) {
    v10 = *(_QWORD*)(a1 + 72);
    v8 = (v10 + -(int)v6) & a3;
    if (v8 >= *(_QWORD*)(a1 + 64)) {
      GameRoutine_2b3290(a1, v8, (unsigned int)(v10 - v8));
      *(_QWORD*)(a1 + 72) = v8;
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  v7 = *(_QWORD*)(a1 + 64);
  v8 = (v7 + a3 - 1) & -a3;
  v9 = v8 + v6;
  if (v9 > *(_QWORD*)(a1 + 72)) {
  LABEL_8:
    v8 = 0;
    goto LABEL_10;
  }
  GameRoutine_2b3290(a1, v7, (unsigned int)(v9 - v7));
  *(_QWORD*)(a1 + 64) = v9;
LABEL_10:
  GameRoutine_2b3260(a1);
  return v8;
}

unsigned __int64 GameHr_2b2e80(__int64 a1, int a2)
{
  unsigned __int64 v2;
  int v3;
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;

  v2 = *(_QWORD*)(a1 + 72);
  if (a2 >= 0) {
    v3 = a2;
  }
  else {
    v3 = -a2;
  }
  v4 = (*(_QWORD*)(a1 + 64) + v3 - 1) & -v3;
  v5 = v2 >= v4;
  v6 = v2 - v4;
  if (v5) {
    return v6;
  }
  else {
    return 0;
  }
}

__int64 GameHr_2b2ec0(__int64 a1, char a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;

  GameRoutine_2b3250();
  if ((a2 & 1) != 0) {
    GameRoutine_2b3270(a1, *(_QWORD*)(a1 + 16),
                       *(_DWORD*)(a1 + 64) - (unsigned int)*(_QWORD*)(a1 + 16));
    v4 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 80) = 0;
    *(_QWORD*)(a1 + 64) = v4;
    if ((a2 & 2) == 0) {
      return GameRoutine_2b3260(a1);
    }
  }
  else if ((a2 & 2) == 0) {
    return GameRoutine_2b3260(a1);
  }
  GameRoutine_2b3270(a1, *(_QWORD*)(a1 + 72),
                     *(_DWORD*)(a1 + 24) - (unsigned int)*(_QWORD*)(a1 + 72));
  v5 = *(_QWORD*)(a1 + 80);
  if (v5 != 0) {
    v6 = *(_QWORD*)(a1 + 24);
    do {
      *(_QWORD*)(v5 + 16) = v6;
      v5 = *(_QWORD*)(v5 + 24);
    } while (v5 != 0);
  }
  *(_QWORD*)(a1 + 72) = *(_QWORD*)(a1 + 24);
  return GameRoutine_2b3260(a1);
}

__int64 GameHr_2b2f70(_QWORD* a1, int a2)
{
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned int v7;

  GameRoutine_2b3250();
  v4 = a1[8];
  v5 = (v4 + 3) & 0xFFFFFFFFFFFFFFFCLL;
  v6 = v5 + 32;
  if (v5 + 32 <= a1[9] &&
      (GameRoutine_2b3290(a1, a1[8], (unsigned int)(v6 - v4)), a1[8] = v6,
       v5 != 0)) {
    *(_QWORD*)(v5 + 16) = 0;
    *(_QWORD*)(v5 + 24) = 0;
    *(_DWORD*)v5 = a2;
    v7 = 1;
    *(_QWORD*)(v5 + 8) = v4;
    *(_QWORD*)(v5 + 16) = a1[9];
    *(_QWORD*)(v5 + 24) = a1[10];
    a1[10] = v5;
  }
  else {
    v7 = 0;
  }
  GameRoutine_2b3260(a1);
  return v7;
}

__int64 GameHr_2b3020(__int64 a1, int a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;

  GameRoutine_2b3250();
  v4 = *(_QWORD*)(a1 + 80);
  if (a2 != 0 && v4 != 0) {
    while (*(_DWORD*)v4 != a2) {
      v4 = *(_QWORD*)(v4 + 24);
      if (v4 == 0) {
        goto LABEL_8;
      }
    }
  }
  else if (v4 == 0) {
  LABEL_8:
    v8 = 0;
    goto LABEL_9;
  }
  v5 = *(_QWORD*)(v4 + 8);
  v6 = *(_QWORD*)(a1 + 72);
  v7 = (unsigned int)(*(_DWORD*)(a1 + 64) - v5);
  *(_QWORD*)(a1 + 64) = v5;
  *(_QWORD*)(a1 + 72) = *(_QWORD*)(v4 + 16);
  *(_QWORD*)(a1 + 80) = *(_QWORD*)(v4 + 24);
  GameRoutine_2b3270(a1, v5, v7);
  GameRoutine_2b3270(a1, v6, (unsigned int)(*(_DWORD*)(a1 + 72) - v6));
  v8 = 1;
LABEL_9:
  GameRoutine_2b3260(a1);
  return v8;
}

__int64 GameHr_2b3150(unsigned __int64 a1, int a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6)
{
  __int64 result;
  _UNKNOWN** v8;
  __int64 v9;

  *(_DWORD*)(a1 + 32) = a2;
  *(_QWORD*)(a1 + 16) = a3;
  *(_QWORD*)(a1 + 24) = a4;
  *(_DWORD*)(a1 + 56) = (unsigned __int8)a5;
  if ((a5 & 2) != 0) {
    GameRoutine_1a0ba50(a3, (unsigned int)GameData_2140c00,
                        (unsigned int)(a4 - a3), a4, a5, a6);
  }
  result = GameRoutine_2b30e0(&GameData_2140c10, a1);
  v8 = (_UNKNOWN**)(result + 40);
  v9 = *(_QWORD*)a1;
  if (result == 0) {
    v8 = &GameData_2140c10;
  }
  *(_QWORD*)a1 = *v8;
  *(_QWORD*)(v9 + 8) = v8;
  *((_QWORD*)*v8 + 1) = a1;
  *v8 = (_UNKNOWN*)v9;
  return result;
}

__int64 GameHr_2b31e0(unsigned __int64 a1)
{
  __int64 result;
  _UNKNOWN** v3;
  __int64* v4;
  __int64 v5;

  result = GameRoutine_2b30e0(&GameData_2140c10, a1);
  v3 = (_UNKNOWN**)(result + 40);
  if (result == 0) {
    v3 = &GameData_2140c10;
  }
  if ((_UNKNOWN**)a1 != v3) {
    v4 = *(__int64**)(a1 + 8);
    v5 = *v4;
    *(_QWORD*)(*(_QWORD*)a1 + 8LL) = v4;
    *v4 = *(_QWORD*)a1;
    *(_QWORD*)(v5 + 8) = a1;
    *(_QWORD*)a1 = v5;
  }
  *(_DWORD*)(a1 + 32) = 0;
  return result;
}

__int64 GameHr_2b3270(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6)
{
  if ((*(_BYTE*)(result + 56) & 2) != 0) {
    return GameRoutine_1a0ba50(a2, (unsigned int)GameData_2140c08, a3, a4, a5,
                               a6);
  }
  return result;
}

__int64 GameHr_2b3290(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6)
{
  __int16 v6;
  __int64 v7;
  __int64 v8;

  v6 = *(_WORD*)(result + 56);
  if ((v6 & 1) != 0) {
    v7 = a2;
    v8 = 0;
    return GameRoutine_1a0ba50(v7, v8, a3, a4, a5, a6);
  }
  if ((v6 & 2) != 0) {
    v7 = a2;
    v8 = (unsigned int)GameData_2140c04;
    return GameRoutine_1a0ba50(v7, v8, a3, a4, a5, a6);
  }
  return result;
}

__int64 GameHr_2b39e0(_QWORD* a1)
{
  if (((*(__int64 (**)(_QWORD*))(*a1 + 128LL))(a1) & 1) != 0) {
    return a1[10];
  }
  else {
    return 0;
  }
}

__int64 GameHr_2b3a20(_QWORD* a1)
{
  if (((*(__int64 (**)(_QWORD*))(*a1 + 128LL))(a1) & 1) != 0) {
    return a1[11];
  }
  else {
    return 0;
  }
}

__int64 GameHr_2b3f60(__int64 result)
{
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_BYTE*)(result + 56) = 0;
  *(_QWORD*)result = GameData_1f80668;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0xFFFFFFFFLL;
  return result;
}

__int64 GameHr_2b3fb0(__int64 result)
{
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_BYTE*)(result + 56) = 0;
  *(_QWORD*)(result + 40) = 0xFFFFFFFFLL;
  *(_QWORD*)(result + 48) = 0;
  return result;
}

__int64 GameHr_2b43c0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;

  v1 = result;
  if (*(_QWORD*)(result + 48) != 0 && *(_BYTE*)(result + 56) == 2) {
    v2 = *(_QWORD*)(result + 40);
    if (v2 == (*(__int64 (**)(_QWORD))(**(_QWORD**)(result + 8) + 56LL))(
                  *(_QWORD*)(result + 8)) ||
        ((result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v1 + 8) + 88LL))(
              *(_QWORD*)(v1 + 8))) &
         1) != 0 &&
            ((result = (*(__int64 (**)(_QWORD, __int64, _QWORD))(
                  **(_QWORD**)(v1 + 8) + 48LL))(*(_QWORD*)(v1 + 8), v2, 0)) &
             0x80000000) == 0) {
      v3 = *(_QWORD*)(v1 + 8);
      v4 = *(_QWORD*)(v1 + 24);
      v5 = *(_QWORD*)(v1 + 48);
      v6 = 0;
      result = (*(__int64 (**)(__int64, __int64, __int64, int*))(
          *(_QWORD*)v3 + 40LL))(v3, v4, v5, &v6);
      *(_BYTE*)(v1 + 56) = 0;
    }
  }
  *(_QWORD*)(v1 + 40) = 0xFFFFFFFFLL;
  *(_QWORD*)(v1 + 48) = 0;
  return result;
}

__int64 GameHr_2b4480(__int64 a1, __int64 a2, unsigned __int64 a3,
                      unsigned int* a4)
{
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 result;
  __int64 v11;
  __int64 v12;
  unsigned int* v13;
  unsigned __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;

  v5 = *(_QWORD*)(a1 + 8);
  v6 = *(_QWORD*)(a1 + 24);
  v7 = *(_QWORD*)(a1 + 32);
  if (v5 == 0 || v6 == 0 || v7 == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 40LL))(v5);
  }
  if (a3 > v7) {
    if (*(_QWORD*)(a1 + 48) == 0 || *(_BYTE*)(a1 + 56) != 2) {
      return (*(__int64 (**)(__int64, __int64, unsigned __int64))(
          *(_QWORD*)v5 + 40LL))(v5, a2, a3);
    }
    v11 = *(_QWORD*)(a1 + 40);
    v12 = a2;
    v13 = a4;
    v14 = a3;
    if (v11 == (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 56LL))(v5)) {
      goto LABEL_16;
    }
    if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 88LL))(
             *(_QWORD*)(a1 + 8)) &
         1) == 0) {
      v19 = 0x80000000;
      goto LABEL_42;
    }
    v15 = (*(__int64 (**)(_QWORD, __int64, _QWORD))(
        **(_QWORD**)(a1 + 8) + 48LL))(*(_QWORD*)(a1 + 8), v11, 0);
    if ((v15 & 0x80000000) != 0) {
      v19 = v15;
    }
    else {
    LABEL_16:
      v16 = *(_QWORD*)(a1 + 8);
      v17 = *(_QWORD*)(a1 + 24);
      v18 = *(_QWORD*)(a1 + 48);
      v37 = 0;
      (*(void (**)(__int64, __int64, __int64, unsigned int*))(
          *(_QWORD*)v16 + 40LL))(v16, v17, v18, &v37);
      *(_BYTE*)(a1 + 56) = 0;
      *(_QWORD*)(a1 + 40) = 0xFFFFFFFFLL;
      *(_QWORD*)(a1 + 48) = 0;
      v19 = v37;
      if ((v37 & 0x80000000) == 0) {
        v5 = *(_QWORD*)(a1 + 8);
        a3 = v14;
        a2 = v12;
        return (*(__int64 (**)(__int64, __int64, unsigned __int64))(
            *(_QWORD*)v5 + 40LL))(v5, a2, a3);
      }
    }
  LABEL_42:
    result = 0;
    if (v13 == nullptr) {
      return result;
    }
  LABEL_47:
    *v13 = v19;
    return result;
  }
  if (*(_BYTE*)(a1 + 56) == 1 || v7 - *(_QWORD*)(a1 + 48) >= a3 ||
      *(_QWORD*)(a1 + 48) == 0 || *(_BYTE*)(a1 + 56) != 2) {
    v13 = a4;
    goto LABEL_28;
  }
  v20 = *(_QWORD*)(a1 + 40);
  v21 = a2;
  v13 = a4;
  v22 = a3;
  if (v20 == (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 56LL))(v5)) {
    goto LABEL_26;
  }
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 88LL))(
           *(_QWORD*)(a1 + 8)) &
       1) != 0) {
    v23 = (*(__int64 (**)(_QWORD, __int64, _QWORD))(
        **(_QWORD**)(a1 + 8) + 48LL))(*(_QWORD*)(a1 + 8), v20, 0);
    if ((v23 & 0x80000000) == 0) {
    LABEL_26:
      v24 = *(_QWORD*)(a1 + 8);
      v25 = *(_QWORD*)(a1 + 24);
      v26 = *(_QWORD*)(a1 + 48);
      v38 = 0;
      (*(void (**)(__int64, __int64, __int64, unsigned int*))(
          *(_QWORD*)v24 + 40LL))(v24, v25, v26, &v38);
      *(_BYTE*)(a1 + 56) = 0;
      *(_QWORD*)(a1 + 40) = 0xFFFFFFFFLL;
      *(_QWORD*)(a1 + 48) = 0;
      v27 = v38;
      goto LABEL_51;
    }
    v27 = v23;
  }
  else {
    v27 = 0x80000000;
  }
LABEL_51:
  a3 = v22;
  a2 = v21;
  if (v13 != nullptr && (v27 & 0x80000000) != 0) {
    *v13 = v27;
    return 0;
  }
  if ((v27 & 0x80000000) != 0) {
    return 0;
  }
  v6 = *(_QWORD*)(a1 + 24);
LABEL_28:
  v28 = a3;
  GameRoutine_1a0b950(v6 + *(_QWORD*)(a1 + 48), a2, a3);
  if (*(_BYTE*)(a1 + 56) != 2) {
    v31 = *(_QWORD*)(a1 + 16);
    result = v28;
    *(_BYTE*)(a1 + 56) = 2;
    v29 = v28;
    *(_QWORD*)(a1 + 40) = v31;
    *(_QWORD*)(a1 + 48) = v28;
    *(_QWORD*)(a1 + 16) = v31 + v28;
    if (v28 != *(_QWORD*)(a1 + 32)) {
      goto LABEL_37;
    }
  LABEL_32:
    if (v29 == 0) {
      goto LABEL_37;
    }
    v32 = *(_QWORD*)(a1 + 40);
    if (v32 != (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 56LL))(
                   *(_QWORD*)(a1 + 8))) {
      if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 88LL))(
               *(_QWORD*)(a1 + 8)) &
           1) != 0) {
        v33 = (*(__int64 (**)(_QWORD, __int64, _QWORD))(
            **(_QWORD**)(a1 + 8) + 48LL))(*(_QWORD*)(a1 + 8), v32, 0);
        if ((v33 & 0x80000000) == 0) {
          goto LABEL_36;
        }
        v19 = v33;
      }
      else {
        v19 = 0x80000000;
      }
      result = v28;
      goto LABEL_46;
    }
  LABEL_36:
    v34 = *(_QWORD*)(a1 + 8);
    v35 = *(_QWORD*)(a1 + 24);
    v36 = *(_QWORD*)(a1 + 48);
    v39 = 0;
    (*(void (**)(__int64, __int64, __int64, unsigned int*))(
        *(_QWORD*)v34 + 40LL))(v34, v35, v36, &v39);
    *(_BYTE*)(a1 + 56) = 0;
    result = v28;
    *(_QWORD*)(a1 + 40) = 0xFFFFFFFFLL;
    *(_QWORD*)(a1 + 48) = 0;
    v19 = v39;
    if ((v39 & 0x80000000) == 0) {
      goto LABEL_37;
    }
  LABEL_46:
    if (v13 == nullptr) {
      return result;
    }
    goto LABEL_47;
  }
  result = v28;
  v29 = *(_QWORD*)(a1 + 48) + v28;
  v30 = *(_QWORD*)(a1 + 16) + v28;
  *(_QWORD*)(a1 + 48) = v29;
  *(_QWORD*)(a1 + 16) = v30;
  if (v29 == *(_QWORD*)(a1 + 32)) {
    goto LABEL_32;
  }
LABEL_37:
  if (v13 != nullptr) {
    *v13 = 0;
  }
  return result;
}

__int64 GameHr_2b4910(__int64 result)
{
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)result = &GameData_1a9f09e;
  *(_QWORD*)(result + 8) = 0;
  *(_DWORD*)(result + 24) = -1;
  *(_DWORD*)(result + 28) = 0;
  *(_DWORD*)(result + 32) = 16;
  *(_DWORD*)(result + 36) = 1;
  return result;
}

__int64 GameHr_2b4950(__int64 a1, __int64 a2)
{
  if (*(_QWORD*)(a2 + 8) == 0 || *(_QWORD*)(a2 + 16) == 0 ||
      *(_DWORD*)(a2 + 32) > 31 || *(_QWORD*)(a2 + 48) == 0) {
    return 0;
  }
  *(_QWORD*)(a1 + 472) = *(_QWORD*)(a2 + 40);
  *(_QWORD*)(a1 + 480) = *(_QWORD*)(a2 + 48);
  if ((GameRoutine_2b4aa0(a1, a1 + 8) & 1) == 0) {
    return 0;
  }
  GameRoutine_2b4b90(a1, *(_QWORD*)a2);
  if (*(_DWORD*)(a2 + 28) != 0) {
    GameRoutine_2b4bb0(a1, *(unsigned int*)(a2 + 24));
  }
  *(_DWORD*)(a1 + 464) = *(_DWORD*)(a2 + 32);
  GameRoutine_2b4bc0(a1);
  return 1;
}

_DWORD* GameHr_2b4a20(_DWORD* result, __int64 a2)
{
  _DWORD* v2;

  if (*result == 2) {
    v2 = result;
    result = (_DWORD*)GameRoutine_2b4b80(result, a2);
    *v2 = 3;
  }
  return result;
}

__int64 GameHr_2b4a80(__int64 result)
{
  *(_DWORD*)result = 0;
  *(_QWORD*)(result + 480) = 0;
  *(_BYTE*)(result + 488) = 0;
  *(_QWORD*)(result + 456) = 0xFFFFFFFFLL;
  *(_DWORD*)(result + 464) = 16;
  return result;
}

bool GameHr_2b4aa0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5;
  int ThreadEPNS0_10ThreadTypeEPFvPvES3_S3_mii;

  v5 = a2;
  ThreadEPNS0_10ThreadTypeEPFvPvES3_S3_mii = GameRoutine_1a0a7e0(
      a2, GameRoutine_2b4b20, a1, *(_QWORD*)(a4 + 8), *(_QWORD*)(a4 + 16),
      *(unsigned int*)(a4 + 32), *(unsigned int*)(a4 + 24));
  if (ThreadEPNS0_10ThreadTypeEPFvPvES3_S3_mii != 0) {
    v5 = 0xFFFFFFFFLL;
  }
  else {
    *(_DWORD*)(a1 + 468) = *(_DWORD*)(a4 + 36);
    GameRoutine_1a0a800(v5);
  }
  *(_QWORD*)(a1 + 456) = v5;
  return ThreadEPNS0_10ThreadTypeEPFvPvES3_S3_mii == 0;
}

__int64 GameHr_2b4b20(__int64 a1)
{
  unsigned __int8* v1;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;

  v1 = (unsigned __int8*)(a1 + 488);
  atomic_store(0, (unsigned __int8*)(a1 + 488));
  GameRoutine_2b4a60();
  v4 = *(unsigned int*)(a1 + 468);
  if ((unsigned int)v4 >= 3) {
    v6 = GameRoutine_1a0a150(v4, v3);
    return GameRoutine_2b4b80(v6, v7);
  }
  else {
    GameRoutine_1a0bfe0();
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 480) + 16LL))(
        *(_QWORD*)(a1 + 480), *(_QWORD*)(a1 + 472));
    result = GameRoutine_2b4a70(a1);
    atomic_store(1u, v1);
  }
  return result;
}

__int64 GameHr_2b4b90(__int64 a1, char* a2)
{
  __int64 v2;

  v2 = a1 + 8;
  if (a2 == nullptr) {
    a2 = &GameData_1a9f09e;
  }
  return GameRoutine_1a0cc00(v2, a2);
}

__int64 GameHr_2b4be0(__int64 a1)
{
  __int64 result;

  result = GameRoutine_2b5190();
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_BYTE*)(a1 + 96) = 0;
  *(_QWORD*)a1 = GameData_1f80698;
  return result;
}

__int64 GameHr_2b4c30(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5,
                      __int64 a6, __int64 a7)
{
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 result;
  _QWORD v18[3];

  v12 = a4 + a3;
  memset(v18, 0, sizeof(v18));
  GameRoutine_2b4fd0(v18, a6, a7);
  v13 = GameRoutine_2b51f0(v12, a5);
  v14 = GameRoutine_2b4fe0(v18, v13, 8);
  v15 = GameRoutine_2b51f0(v12, a5);
  GameRoutine_2b5220(a1, v12, a5, v14, v15);
  *(_DWORD*)(a1 + 84) = v12;
  *(_DWORD*)(a1 + 88) = a3;
  *(_DWORD*)(a1 + 92) = a4;
  atomic_store(0, (unsigned int*)(a1 + 80));
  v16 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
  result = GameRoutine_1a0cc10(a2, a1 + 72, v16) & 1;
  *(_BYTE*)(a1 + 96) = result;
  return result;
}

__int64 GameHr_2b4d60(__int64 a1, float a2)
{
  float v2;
  float v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = -128.0;
  if (a2 >= -128.0) {
    v2 = a2;
  }
  if (a2 <= 128.0) {
    v4 = v2;
  }
  else {
    v4 = 128.0;
  }
  v5 = GameRoutine_14e360(a1);
  GameRoutine_1a09b70(v5 + 1720);
  v6 = GameRoutine_1a0cc30(a1 + 72, v4);
  v7 = GameRoutine_14e360(v6);
  return GameRoutine_1a09b80(v7 + 1720);
}

__int64 GameHr_2b5f20(__int64 a1, _QWORD* a2, unsigned int a3, __int64 a4,
                      __int64 a5)
{
  __int64 result;
  void* v11;
  void* v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  char v17;
  char* v18;
  char v19;
  char* v20;
  int v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  struct {
    int v26;
    __int16 v27;
  } v26_;

  result = (*(__int64 (**)(_QWORD*))(*a2 + 16LL))(a2);
  if ((result & 1) != 0) {
    FinalMix_2afc40(a2, a4, a5);
    v11 = SoundVoiceNX_14e360();
    v12 = SoundVoiceNX_14e360();
    result = FinalMix_2af980((__int64)a2, (__int64)v11 + 24,
                             (__int64)v12 + 1552, (__int64 (***)(_QWORD))a1);
    if ((result & 1) != 0) {
      v13 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 48LL))(a1, a3);
      v14 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 64LL))(
          a1, a3, 0);
      v26_.v27 = 0;
      v26_.v26 = 0;
      if (v13 >= 1) {
        v15 = v13 & 7;
        if ((unsigned int)v13 >= 8) {
          v16 = 0;
          do {
            v17 = v14 + v16;
            v18 = (char*)&v26_.v26 + v16 + 3;
            v19 = v14 + v16 + 1;
            *((_BYTE*)&v26_.v26 + v16) = v14 + v16;
            v16 += 8;
            *(v18 - 2) = v19;
            *(v18 - 1) = v17 + 2;
            *v18 = v17 + 3;
            v18[1] = v17 + 4;
            v18[2] = v17 + 5;
            v18[3] = v17 + 6;
            v18[4] = v17 + 7;
          } while ((v13 & 0x7FFFFFF8) != v16);
        }
        else {
          v16 = 0;
        }
        if ((v13 & 7) != 0) {
          v20 = (char*)&v26_.v26 + v16;
          v21 = v14 + v16;
          do {
            *v20++ = v21++;
            --v15;
          } while (v15 != 0);
        }
      }
      GameHr_2afaa0((__int64)a2, (__int64)&v26_.v26);
      nn_os_LockMutex(a1 + 8);
      v22 = *(_QWORD*)(a1 + 56);
      v23 = 16LL * (int)a3;
      v25 = a2[1];
      v24 = a2 + 1;
      *v24 = *(_QWORD*)(v22 + v23);
      *(_QWORD*)(v25 + 8) = v22 + v23;
      *(_QWORD*)(*(_QWORD*)(v22 + v23) + 8LL) = v24;
      *(_QWORD*)(v22 + v23) = v25;
      return nn_os_UnlockMutex(a1 + 8);
    }
  }
  return result;
}

__int64 GameHr_2b60e0(_QWORD* a1, __int64* a2, int a3)
{
  void* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;

  v6 = SoundVoiceNX_14e360();
  nn_os_LockMutex((__int64)(a1 + 1));
  v7 = a3;
  v8 = a1[5] + 16LL * a3;
  v9 = (__int64*)v8;
  while (1) {
    v9 = (__int64*)v9[1];
    if (v9 == (__int64*)v8) {
      break;
    }
    if (v9 - 1 == a2) {
      (*(void (**)(__int64*, __int64, _QWORD*))(*(v9 - 1) + 40))(
          v9 - 1, (__int64)v6 + 24, a1);
      if (v9 != (__int64*)(a1[5] + 16 * v7)) {
        v10 = (__int64*)v9[1];
        v11 = *v10;
        *(_QWORD*)(*v9 + 8) = v10;
        *v10 = *v9;
        *(_QWORD*)(v11 + 8) = v9;
        *v9 = v11;
      }
      (*(void (**)(_QWORD*, __int64))(*a1 + 24LL))(a1, 0xFFFFFFFFLL);
      return nn_os_UnlockMutex((__int64)(a1 + 1));
    }
  }
  return nn_os_UnlockMutex((__int64)(a1 + 1));
}

__int64 GameHr_2b61c0(__int64 a1, __int64* a2, int a3)
{
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;

  v6 = GameRoutine_14e360(a1);
  GameRoutine_1a09b70(a1 + 8);
  v7 = (__int64*)(*(_QWORD*)(a1 + 48) + 16LL * a3);
  while (1) {
    v7 = (__int64*)v7[1];
    if (v7 == (__int64*)(*(_QWORD*)(a1 + 48) + 16LL * a3)) {
      break;
    }
    if (v7 - 1 == a2) {
      GameRoutine_2af630((__int64)(v7 - 1), v6 + 24, (__int64 (***)(_QWORD))a1);
      (*(void (**)(__int64*))(*(v7 - 1) + 24))(v7 - 1);
      if (v7 != (__int64*)(*(_QWORD*)(a1 + 48) + 16LL * a3)) {
        v8 = (__int64*)v7[1];
        v9 = *v8;
        *(_QWORD*)(*v7 + 8) = v8;
        *v8 = *v7;
        *(_QWORD*)(v9 + 8) = v7;
        *v7 = v9;
      }
      (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 24LL))(a1, 0xFFFFFFFFLL);
      return GameRoutine_1a09b80(a1 + 8);
    }
  }
  return GameRoutine_1a09b80(a1 + 8);
}

__int64 GameHr_2b62a0(__int64 a1, __int64* a2, int a3)
{
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;

  v6 = GameRoutine_14e360(a1);
  GameRoutine_1a09b70(a1 + 8);
  v7 = (__int64*)(*(_QWORD*)(a1 + 56) + 16LL * a3);
  while (1) {
    v7 = (__int64*)v7[1];
    if (v7 == (__int64*)(*(_QWORD*)(a1 + 56) + 16LL * a3)) {
      break;
    }
    if (v7 - 1 == a2) {
      GameRoutine_2afbb0((__int64)(v7 - 1), v6 + 24, (__int64 (***)(_QWORD))a1);
      (*(void (**)(__int64*))(*(v7 - 1) + 24))(v7 - 1);
      if (v7 != (__int64*)(*(_QWORD*)(a1 + 56) + 16LL * a3)) {
        v8 = (__int64*)v7[1];
        v9 = *v8;
        *(_QWORD*)(*v7 + 8) = v8;
        *v8 = *v7;
        *(_QWORD*)(v9 + 8) = v7;
        *v7 = v9;
      }
      (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 24LL))(a1, 0xFFFFFFFFLL);
      return GameRoutine_1a09b80(a1 + 8);
    }
  }
  return GameRoutine_1a09b80(a1 + 8);
}

__int64 GameHr_2b6380(__int64 a1, int a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 i;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 j;
  __int64* v21;
  __int64 v22;
  __int64* v23;

  v4 = GameRoutine_14e360(a1);
  GameRoutine_1a09b70(a1 + 8);
  v5 = a2;
  v6 = *(_QWORD*)(a1 + 40) + 16LL * a2;
  v7 = *(_QWORD*)(v6 + 8);
  if (v7 == v6) {
    v8 = 0;
  }
  else {
    v8 = 0;
    do {
      v10 = *(_QWORD*)(v7 - 8);
      v9 = v7 - 8;
      (*(void (**)(__int64, __int64, __int64))(v10 + 40))(v9, v4 + 24, a1);
      v7 = *(_QWORD*)(v9 + 16);
      ++v8;
      v6 = *(_QWORD*)(a1 + 40) + 16 * v5;
    } while (v7 != v6);
  }
  while (1) {
    v13 = *(__int64**)(v6 + 8);
    if (v13 == (__int64*)v6) {
      break;
    }
    v11 = (__int64*)v13[1];
    v12 = *v11;
    *(_QWORD*)(*v13 + 8) = v11;
    *v11 = *v13;
    *(_QWORD*)(v12 + 8) = v13;
    *v13 = v12;
  }
  v14 = *(_QWORD*)(a1 + 48) + 16 * v5;
  for (i = *(_QWORD*)(v14 + 8); i != v14; v14 = *(_QWORD*)(a1 + 48) + 16 * v5) {
    GameRoutine_2af630(i - 8, v4 + 24, (__int64 (***)(_QWORD))a1);
    (*(void (**)(__int64))(*(_QWORD*)(i - 8) + 24LL))(i - 8);
    i = *(_QWORD*)(i + 8);
    ++v8;
  }
  while (1) {
    v18 = *(__int64**)(v14 + 8);
    if (v18 == (__int64*)v14) {
      break;
    }
    v16 = (__int64*)v18[1];
    v17 = *v16;
    *(_QWORD*)(*v18 + 8) = v16;
    *v16 = *v18;
    *(_QWORD*)(v17 + 8) = v18;
    *v18 = v17;
  }
  v19 = *(_QWORD*)(a1 + 56) + 16 * v5;
  for (j = *(_QWORD*)(v19 + 8); j != v19; v19 = *(_QWORD*)(a1 + 56) + 16 * v5) {
    GameRoutine_2afbb0(j - 8, v4 + 24, (__int64 (***)(_QWORD))a1);
    (*(void (**)(__int64))(*(_QWORD*)(j - 8) + 24LL))(j - 8);
    j = *(_QWORD*)(j + 8);
    ++v8;
  }
  while (1) {
    v23 = *(__int64**)(v19 + 8);
    if (v23 == (__int64*)v19) {
      break;
    }
    v21 = (__int64*)v23[1];
    v22 = *v21;
    *(_QWORD*)(*v23 + 8) = v21;
    *v21 = *v23;
    *(_QWORD*)(v22 + 8) = v23;
    *v23 = v22;
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + 24LL))(a1, (unsigned int)-v8);
  return GameRoutine_1a09b80(a1 + 8);
}

__int64 GameHr_2b6570(__int64 result)
{
  *(_QWORD*)result = 0x100000001LL;
  *(_QWORD*)(result + 8) = 0x100000001LL;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0x101010101010101LL;
  *(_QWORD*)(result + 32) = 0x101010101010101LL;
  *(_QWORD*)(result + 40) = 0x101010101010101LL;
  *(_BYTE*)(result + 48) = 1;
  return result;
}

unsigned __int64 GameHr_2b6650(int a1, unsigned int a2, unsigned int a3,
                               unsigned int a4, char a5)
{
  struct {
    unsigned __int64 v11;
    unsigned __int64 v12;
    __int64 v13;
    __int64 v14;
    __int64 v15;
    __int64 v16;
    __int64 v17;
  } v11_;

  v11_.v16 = 0;
  v11_.v17 = 0;
  v11_.v14 = 0;
  v11_.v15 = 0;
  v11_.v12 = 0;
  v11_.v13 = 0;
  v11_.v11 = 0;
  BaseNx_2b6570((__int64)&v11_.v11);
  v11_.v11 = __PAIR64__(a2, a1);
  v11_.v12 = __PAIR64__(a4, a3);
  LOBYTE(v11_.v14) = a5;
  if (v11_.v13 != 0) {
    a3 = (*(__int64 (**)(__int64))(*(_QWORD*)v11_.v13 + 16LL))(v11_.v13);
    if (v11_.v13 != 0) {
      a4 = (*(__int64 (**)(__int64))(*(_QWORD*)v11_.v13 + 40LL))(v11_.v13);
    }
    else {
      a4 = HIDWORD(v11_.v12);
    }
  }
  return ((21LL * a1 + 8LL * (int)(a2 * a1) + 4LL * (int)(a3 * a2 * a1 * a4) +
           ((FinalMix_2b51f0(a1, v11_.v14) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 3) &
          0xFFFFFFFFFFFFFFFCLL) +
         20LL * (int)a2;
}

__int64 GameHr_2b6740(__int64 a1, unsigned int a2, unsigned int a3,
                      unsigned int a4, unsigned int a5, char a6, __int64 a7,
                      __int64 a8, __int64 a9)
{
  struct {
    unsigned __int64 v17;
    unsigned __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
  } v17_;

  v17_.v22 = 0;
  v17_.v23 = 0;
  v17_.v21 = 0;
  v17_.v19 = 0;
  v17_.v20 = 0;
  v17_.v17 = 0;
  v17_.v18 = 0;
  BaseNx_2b6570((__int64)&v17_.v17);
  v17_.v17 = __PAIR64__(a3, a2);
  v17_.v18 = __PAIR64__(a5, a4);
  LOBYTE(v17_.v20) = a6;
  return GameHr_2b67e0(a1, (__int64)&v17_.v17, a8, a9) & 1;
}

__int64 GameHr_2b71e0(__int64 a1, unsigned int a2)
{
  __int64 result;
  int v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  unsigned int i;

  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 104) + 16LL))(
      *(_QWORD*)(a1 + 104));
  if (*(int*)(a1 + 168) >= 1) {
    v5 = result;
    if ((int)result >= 1) {
      v6 = 0;
      do {
        v7 = 0;
        do {
          result = (*(__int64 (**)(_QWORD, _QWORD))(
              **(_QWORD**)(a1 + 104) + 48LL))(*(_QWORD*)(a1 + 104), v7);
          if ((int)result >= 1) {
            v8 = result;
            for (i = 0; i != v8; ++i) {
              result = GameRoutine_2b72e0(a1, a2, v6, v7, i);
            }
          }
          ++v7;
        } while (v7 != v5);
        ++v6;
      } while ((signed int)v6 < *(_DWORD*)(a1 + 168));
    }
  }
  return result;
}

__int64 GameHr_2b72e0(__int64 a1, int a2, int a3, unsigned int a4,
                      unsigned int a5)
{
  int v5;
  int v6;
  float v12;
  float v13;
  __int64 v14;
  int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  int v20;
  int v21;
  float v22;
  float v23;
  float v24;
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;

  v5 = *(_DWORD*)(a1 + 168);
  v6 = *(_DWORD*)(a1 + 176);
  GameRoutine_1a09b70(a1 + 184);
  v12 = 0.0;
  v13 = 0.0;
  v14 = *(_QWORD*)(a1 + 112) + 20LL * a2;
  if ((*(_BYTE*)(v14 + 16) & 1) == 0) {
    v15 = *(_DWORD*)(v14 + 8);
    v16 = *(_DWORD*)(v14 + 12);
    if (v16 >= v15) {
      v13 = *(float*)(v14 + 4);
      v17 = a3 + v5 * a2;
      v18 = a5 + v6 * a4;
      v19 = *(_QWORD*)(a1 + 120) + 20LL * a3;
      if ((*(_BYTE*)(v19 + 16) & 1) != 0) {
        goto LABEL_10;
      }
      goto LABEL_5;
    }
    v13 = *(float*)v14 +
          (float)((float)((float)(*(float*)(v14 + 4) - *(float*)v14) *
                          (float)v16) /
                  (float)v15);
  }
  v17 = a3 + v5 * a2;
  v18 = a5 + v6 * a4;
  v19 = *(_QWORD*)(a1 + 120) + 20LL * a3;
  if ((*(_BYTE*)(v19 + 16) & 1) == 0) {
  LABEL_5:
    v20 = *(_DWORD*)(v19 + 8);
    v21 = *(_DWORD*)(v19 + 12);
    if (v21 >= v20) {
      v12 = *(float*)(v19 + 4);
    }
    else {
      v12 = *(float*)v19 +
            (float)((float)((float)(*(float*)(v19 + 4) - *(float*)v19) *
                            (float)v21) /
                    (float)v20);
    }
  }
LABEL_10:
  v22 = (float)(v13 * v12) *
        *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 160) + 8LL * (int)v17) +
                  4LL * (int)v18);
  GameRoutine_1a09b80(a1 + 184);
  v23 = -128.0;
  if (v22 >= -128.0) {
    v23 = v22;
  }
  if (v22 <= 128.0) {
    v24 = v23;
  }
  else {
    v24 = 128.0;
  }
  GameRoutine_1a09b70(a1 + 216);
  v25 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
      **(_QWORD**)(a1 + 104) + 64LL))(*(_QWORD*)(a1 + 104), a4, a5);
  if (*(_BYTE*)(a1 + 250) == 1) {
    v26 = v25;
    v27 = (***(__int64 (****)(_QWORD))(a1 + 104))(*(_QWORD*)(a1 + 104));
    if ((_DWORD)v27 == 1) {
      GameRoutine_1a0cc80(a1 + 88, *(_QWORD*)(a1 + 104) + 72LL, v17, v26, v24);
    }
    else {
      if ((_DWORD)v27 != 0) {
        GameRoutine_1a0a150(v27, v28);
        __udf(0);
      }
      GameRoutine_1a0cc70(a1 + 88, *(_QWORD*)(a1 + 104) + 88LL, v17, v26, v24);
    }
  }
  return GameRoutine_1a09b80(a1 + 216);
}

__int64 GameHr_2b7850(__int64 a1, int a2, int a3, float a4)
{
  __int64 v8;
  int v9;
  int v10;
  float v11;

  GameRoutine_1a09b70(a1 + 184);
  v8 = *(_QWORD*)(a1 + 112) + 20LL * a2;
  *(_BYTE*)(v8 + 18) = 1;
  v9 = *(_DWORD*)(v8 + 8);
  v10 = *(_DWORD*)(v8 + 12);
  if (v10 >= v9) {
    v11 = *(float*)(v8 + 4);
  }
  else {
    v11 =
        *(float*)v8 +
        (float)((float)((float)(*(float*)(v8 + 4) - *(float*)v8) * (float)v10) /
                (float)v9);
  }
  *(_DWORD*)(v8 + 8) = a3;
  *(_DWORD*)(v8 + 12) = 0;
  *(float*)v8 = v11;
  *(float*)(v8 + 4) = a4;
  return GameRoutine_1a09b80(a1 + 184);
}

__int64 GameHr_2b78f0(__int64 a1, int a2, char a3)
{
  __int64 v6;

  GameRoutine_1a09b70(a1 + 184);
  v6 = *(_QWORD*)(a1 + 112) + 20LL * a2;
  *(_BYTE*)(v6 + 16) = a3;
  *(_BYTE*)(v6 + 18) = 1;
  return GameRoutine_1a09b80(a1 + 184);
}

__int64 GameHr_2b82d0(__int64 result, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int* v4;
  unsigned int v5;
  unsigned int v6;
  signed int v7;
  __int64 v8;
  unsigned int v9;

  v4 = (unsigned int*)(result + 12);
  v5 = atomic_load((unsigned int*)(result + 12));
  v6 = atomic_load((unsigned int*)(result + 16));
  if (v5 != v6) {
    v7 = atomic_load(v4);
    v8 = result;
    *(_QWORD*)(*(_QWORD*)result + 24LL * v7 + 16) = a4;
    result =
        GameRoutine_1a0b950(*(_QWORD*)(*(_QWORD*)result + 24LL * v7), a2, a3);
    if (v7 + 1 < *(_DWORD*)(v8 + 8)) {
      v9 = v7 + 1;
    }
    else {
      v9 = 0;
    }
    atomic_store(v9, v4);
  }
  return result;
}

__int64 GameHr_2b8360(__int64 a1, __int16* a2, int a3)
{
  __int64 v3;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  __int16 v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  unsigned int v28;

  LODWORD(v3) = a3;
  if (a3 != 0) {
    v6 = GameRoutine_14e360(a1);
    v7 = GameRoutine_2899a0(v6);
    v8 = v7;
    v9 = GameRoutine_14e360(v7);
    v10 = *(_DWORD*)(v9 + 1556);
    v11 = atomic_load((unsigned int*)(a1 + 16));
    v12 = v11 + v10 * v8;
    v13 = *(_DWORD*)(a1 + 12);
    v14 = v13 - v12;
    if (v13 < v12) {
      v14 = 0;
    }
    if (v14 >= (unsigned int)v3) {
      v3 = (unsigned int)v3;
    }
    else {
      v3 = v14;
    }
    if (v13 > v12) {
      v15 = GameRoutine_14e360(v9);
      v16 = GameRoutine_2899a0(v15);
      v17 = v16;
      v18 = *(_DWORD*)(GameRoutine_14e360(v16) + 1556);
      v19 = v3;
      v20 = v18 * v17;
      do {
        v21 = *(_DWORD*)(a1 + 12);
        v22 = *(_DWORD*)(a1 + 32) + *(_DWORD*)(a1 + 24) +
              *(_DWORD*)(a1 + 36) * v17;
        if (v22 < v21) {
          v21 = 0;
        }
        v23 = *a2++;
        *(_WORD*)(*(_QWORD*)a1 + 2LL * (v22 - v21)) = v23;
        v24 = *(_DWORD*)(a1 + 36) + 1;
        *(_DWORD*)(a1 + 36) = v24;
        if (v24 >= v18) {
          v25 = *(_DWORD*)(a1 + 32) + 1;
          *(_QWORD*)(a1 + 32) = v25;
          if (v25 >= v17) {
            v26 = *(_DWORD*)(a1 + 24);
            v27 = *(_DWORD*)(a1 + 12);
            *(_DWORD*)(a1 + 32) = 0;
            v28 = v26 + v20;
            if (v28 < v27) {
              v27 = 0;
            }
            *(_DWORD*)(a1 + 24) = v28 - v27;
            atomic_fetch_add((atomic_uint* volatile)(a1 + 16), v20);
          }
        }
        --v19;
      } while (v19 != 0);
    }
  }
  return (unsigned int)v3;
}

__int64 GameHr_2b8480(__int64 result, __int16* a2, int a3)
{
  unsigned int v3;
  unsigned int v4;
  __int64 v5;
  unsigned int v6;

  v3 = atomic_load((unsigned int*)(result + 8));
  if (v3 != 0) {
    v4 = atomic_load((unsigned int*)(result + 8));
    if (v4 == 2) {
      v5 = result;
      result = GameRoutine_2b8360(result + 720, a2, a3);
      v6 = atomic_load((unsigned int*)(v5 + 8));
      if (v6 != 0) {
        return GameRoutine_1a0c460(v5 + 536, 1);
      }
    }
  }
  return result;
}

__int64 GameHr_2b84f0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6)
{
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
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
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
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
  __int64 v56;
  __int64 v57;
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
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
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
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 result;

  v7 = a1 + 15872;
  *a1 = a1;
  a1[1] = a1;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = 0;
  a1[12] = 0;
  a1[13] = 0;
  a1[14] = 0;
  a1[15] = 0;
  a1[16] = 0;
  GameRoutine_1a0ba50(a1 + 21, 0, 3088, a4, a5, a6);
  a1[504] = 0;
  a1[505] = 0;
  a1[506] = 0;
  a1[507] = 0;
  a1[508] = 0;
  a1[509] = 0;
  a1[510] = 0;
  a1[511] = 0;
  a1[512] = 0;
  a1[513] = 0;
  a1[514] = 0;
  a1[515] = 0;
  a1[516] = 0;
  a1[517] = 0;
  GameRoutine_1a0ba50(a1 + 522, 0, 3088, v8, v9, v10);
  a1[1005] = 0;
  a1[1006] = 0;
  a1[1007] = 0;
  a1[1008] = 0;
  a1[1009] = 0;
  a1[1010] = 0;
  a1[1011] = 0;
  a1[1012] = 0;
  a1[1013] = 0;
  a1[1014] = 0;
  a1[1015] = 0;
  a1[1016] = 0;
  a1[1017] = 0;
  a1[1018] = 0;
  GameRoutine_1a0ba50(a1 + 1023, 0, 3088, v11, v12, v13);
  a1[1506] = 0;
  a1[1507] = 0;
  a1[1508] = 0;
  a1[1509] = 0;
  a1[1510] = 0;
  a1[1511] = 0;
  a1[1512] = 0;
  a1[1513] = 0;
  a1[1514] = 0;
  a1[1515] = 0;
  a1[1516] = 0;
  a1[1517] = 0;
  a1[1518] = 0;
  a1[1519] = 0;
  GameRoutine_1a0ba50(a1 + 1524, 0, 3088, v14, v15, v16);
  a1[2007] = 0;
  a1[2008] = 0;
  a1[2009] = 0;
  a1[2010] = 0;
  a1[2011] = 0;
  a1[2012] = 0;
  a1[2013] = 0;
  a1[2014] = 0;
  a1[2015] = 0;
  a1[2016] = 0;
  a1[2017] = 0;
  a1[2018] = 0;
  a1[2019] = 0;
  a1[2020] = 0;
  GameRoutine_1a0ba50(a1 + 2025, 0, 3088, v17, v18, v19);
  a1[2508] = 0;
  a1[2509] = 0;
  a1[2510] = 0;
  a1[2511] = 0;
  a1[2512] = 0;
  a1[2513] = 0;
  a1[2514] = 0;
  a1[2515] = 0;
  a1[2516] = 0;
  a1[2517] = 0;
  a1[2518] = 0;
  a1[2519] = 0;
  a1[2520] = 0;
  a1[2521] = 0;
  GameRoutine_1a0ba50(a1 + 2526, 0, 3088, v20, v21, v22);
  a1[3009] = 0;
  a1[3010] = 0;
  a1[3011] = 0;
  a1[3012] = 0;
  a1[3013] = 0;
  a1[3014] = 0;
  a1[3015] = 0;
  a1[3016] = 0;
  a1[3017] = 0;
  a1[3018] = 0;
  a1[3019] = 0;
  a1[3020] = 0;
  a1[3021] = 0;
  a1[3022] = 0;
  GameRoutine_1a0ba50(a1 + 3027, 0, 3088, v23, v24, v25);
  a1[3510] = 0;
  a1[3511] = 0;
  a1[3512] = 0;
  a1[3513] = 0;
  a1[3514] = 0;
  a1[3515] = 0;
  a1[3516] = 0;
  a1[3517] = 0;
  a1[3518] = 0;
  a1[3519] = 0;
  a1[3520] = 0;
  a1[3521] = 0;
  a1[3522] = 0;
  a1[3523] = 0;
  GameRoutine_1a0ba50(a1 + 3528, 0, 3088, v26, v27, v28);
  a1[4011] = 0;
  a1[4012] = 0;
  a1[4013] = 0;
  a1[4014] = 0;
  a1[4015] = 0;
  a1[4016] = 0;
  a1[4017] = 0;
  a1[4018] = 0;
  a1[4019] = 0;
  a1[4020] = 0;
  a1[4021] = 0;
  a1[4022] = 0;
  a1[4023] = 0;
  a1[4024] = 0;
  GameRoutine_1a0ba50(a1 + 4029, 0, 3088, v29, v30, v31);
  a1[4512] = 0;
  a1[4513] = 0;
  a1[4514] = 0;
  a1[4515] = 0;
  a1[4516] = 0;
  a1[4517] = 0;
  a1[4518] = 0;
  a1[4519] = 0;
  a1[4520] = 0;
  a1[4521] = 0;
  a1[4522] = 0;
  a1[4523] = 0;
  a1[4524] = 0;
  a1[4525] = 0;
  GameRoutine_1a0ba50(a1 + 4530, 0, 3088, v32, v33, v34);
  a1[5013] = 0;
  a1[5014] = 0;
  a1[5015] = 0;
  a1[5016] = 0;
  a1[5017] = 0;
  a1[5018] = 0;
  a1[5019] = 0;
  a1[5020] = 0;
  a1[5021] = 0;
  a1[5022] = 0;
  a1[5023] = 0;
  a1[5024] = 0;
  a1[5025] = 0;
  a1[5026] = 0;
  GameRoutine_1a0ba50(a1 + 5031, 0, 3088, v35, v36, v37);
  a1[5514] = 0;
  a1[5515] = 0;
  a1[5516] = 0;
  a1[5517] = 0;
  a1[5518] = 0;
  a1[5519] = 0;
  a1[5520] = 0;
  a1[5521] = 0;
  a1[5522] = 0;
  a1[5523] = 0;
  a1[5524] = 0;
  a1[5525] = 0;
  a1[5526] = 0;
  a1[5527] = 0;
  GameRoutine_1a0ba50(a1 + 5532, 0, 3088, v38, v39, v40);
  a1[6015] = 0;
  a1[6016] = 0;
  a1[6017] = 0;
  a1[6018] = 0;
  a1[6019] = 0;
  a1[6020] = 0;
  a1[6021] = 0;
  a1[6022] = 0;
  a1[6023] = 0;
  a1[6024] = 0;
  a1[6025] = 0;
  a1[6026] = 0;
  a1[6027] = 0;
  a1[6028] = 0;
  GameRoutine_1a0ba50(a1 + 6033, 0, 3088, v41, v42, v43);
  a1[6516] = 0;
  a1[6517] = 0;
  a1[6518] = 0;
  a1[6519] = 0;
  a1[6520] = 0;
  a1[6521] = 0;
  a1[6522] = 0;
  a1[6523] = 0;
  a1[6524] = 0;
  a1[6525] = 0;
  a1[6526] = 0;
  a1[6527] = 0;
  a1[6528] = 0;
  a1[6529] = 0;
  GameRoutine_1a0ba50(a1 + 6534, 0, 3088, v44, v45, v46);
  a1[7017] = 0;
  a1[7018] = 0;
  a1[7019] = 0;
  a1[7020] = 0;
  a1[7021] = 0;
  a1[7022] = 0;
  a1[7023] = 0;
  a1[7024] = 0;
  a1[7025] = 0;
  a1[7026] = 0;
  a1[7027] = 0;
  a1[7028] = 0;
  a1[7029] = 0;
  a1[7030] = 0;
  GameRoutine_1a0ba50(a1 + 7035, 0, 3088, v47, v48, v49);
  a1[7518] = 0;
  a1[7519] = 0;
  a1[7520] = 0;
  a1[7521] = 0;
  a1[7522] = 0;
  a1[7523] = 0;
  a1[7524] = 0;
  a1[7525] = 0;
  a1[7526] = 0;
  a1[7527] = 0;
  a1[7528] = 0;
  a1[7529] = 0;
  a1[7530] = 0;
  a1[7531] = 0;
  GameRoutine_1a0ba50(a1 + 7536, 0, 3088, v50, v51, v52);
  a1[8019] = 0;
  a1[8020] = 0;
  a1[8021] = 0;
  a1[8022] = 0;
  a1[8023] = 0;
  a1[8024] = 0;
  a1[8025] = 0;
  a1[8026] = 0;
  a1[8027] = 0;
  a1[8028] = 0;
  a1[8029] = 0;
  a1[8030] = 0;
  a1[8031] = 0;
  a1[8032] = 0;
  GameRoutine_1a0ba50(a1 + 8037, 0, 3088, v53, v54, v55);
  a1[8520] = 0;
  a1[8521] = 0;
  a1[8522] = 0;
  a1[8523] = 0;
  a1[8524] = 0;
  a1[8525] = 0;
  a1[8526] = 0;
  a1[8527] = 0;
  a1[8528] = 0;
  a1[8529] = 0;
  a1[8530] = 0;
  a1[8531] = 0;
  a1[8532] = 0;
  a1[8533] = 0;
  GameRoutine_1a0ba50(a1 + 8538, 0, 3088, v56, v57, v58);
  a1[9021] = 0;
  a1[9022] = 0;
  a1[9023] = 0;
  a1[9024] = 0;
  a1[9025] = 0;
  a1[9026] = 0;
  a1[9027] = 0;
  a1[9028] = 0;
  a1[9029] = 0;
  a1[9030] = 0;
  a1[9031] = 0;
  a1[9032] = 0;
  a1[9033] = 0;
  a1[9034] = 0;
  GameRoutine_1a0ba50(a1 + 9039, 0, 3088, v59, v60, v61);
  a1[9522] = 0;
  a1[9523] = 0;
  a1[9524] = 0;
  a1[9525] = 0;
  a1[9526] = 0;
  a1[9527] = 0;
  a1[9528] = 0;
  a1[9529] = 0;
  a1[9530] = 0;
  a1[9531] = 0;
  a1[9532] = 0;
  a1[9533] = 0;
  a1[9534] = 0;
  a1[9535] = 0;
  GameRoutine_1a0ba50(a1 + 9540, 0, 3088, v62, v63, v64);
  a1[10023] = 0;
  a1[10024] = 0;
  a1[10025] = 0;
  a1[10026] = 0;
  a1[10027] = 0;
  a1[10028] = 0;
  a1[10029] = 0;
  a1[10030] = 0;
  a1[10031] = 0;
  a1[10032] = 0;
  a1[10033] = 0;
  a1[10034] = 0;
  a1[10035] = 0;
  a1[10036] = 0;
  GameRoutine_1a0ba50(a1 + 10041, 0, 3088, v65, v66, v67);
  a1[10524] = 0;
  a1[10525] = 0;
  a1[10526] = 0;
  a1[10527] = 0;
  a1[10528] = 0;
  a1[10529] = 0;
  a1[10530] = 0;
  a1[10531] = 0;
  a1[10532] = 0;
  a1[10533] = 0;
  a1[10534] = 0;
  a1[10535] = 0;
  a1[10536] = 0;
  a1[10537] = 0;
  GameRoutine_1a0ba50(a1 + 10542, 0, 3088, v68, v69, v70);
  a1[11025] = 0;
  a1[11026] = 0;
  a1[11027] = 0;
  a1[11028] = 0;
  a1[11029] = 0;
  a1[11030] = 0;
  a1[11031] = 0;
  a1[11032] = 0;
  a1[11033] = 0;
  a1[11034] = 0;
  a1[11035] = 0;
  a1[11036] = 0;
  a1[11037] = 0;
  a1[11038] = 0;
  GameRoutine_1a0ba50(a1 + 11043, 0, 3088, v71, v72, v73);
  a1[11526] = 0;
  a1[11527] = 0;
  a1[11528] = 0;
  a1[11529] = 0;
  a1[11530] = 0;
  a1[11531] = 0;
  a1[11532] = 0;
  a1[11533] = 0;
  a1[11534] = 0;
  a1[11535] = 0;
  a1[11536] = 0;
  a1[11537] = 0;
  a1[11538] = 0;
  a1[11539] = 0;
  GameRoutine_1a0ba50(a1 + 11544, 0, 3088, v74, v75, v76);
  a1[12027] = 0;
  a1[12028] = 0;
  a1[12029] = 0;
  a1[12030] = 0;
  a1[12031] = 0;
  a1[12032] = 0;
  a1[12033] = 0;
  a1[12034] = 0;
  a1[12035] = 0;
  a1[12036] = 0;
  a1[12037] = 0;
  a1[12038] = 0;
  a1[12039] = 0;
  a1[12040] = 0;
  GameRoutine_1a0ba50(a1 + 12045, 0, 3088, v77, v78, v79);
  a1[12528] = 0;
  a1[12529] = 0;
  a1[12530] = 0;
  a1[12531] = 0;
  a1[12532] = 0;
  a1[12533] = 0;
  a1[12534] = 0;
  a1[12535] = 0;
  a1[12536] = 0;
  a1[12537] = 0;
  a1[12538] = 0;
  a1[12539] = 0;
  a1[12540] = 0;
  a1[12541] = 0;
  GameRoutine_1a0ba50(a1 + 12546, 0, 3088, v80, v81, v82);
  a1[13029] = 0;
  a1[13030] = 0;
  a1[13031] = 0;
  a1[13032] = 0;
  a1[13033] = 0;
  a1[13034] = 0;
  a1[13035] = 0;
  a1[13036] = 0;
  a1[13037] = 0;
  a1[13038] = 0;
  a1[13039] = 0;
  a1[13040] = 0;
  a1[13041] = 0;
  a1[13042] = 0;
  GameRoutine_1a0ba50(a1 + 13047, 0, 3088, v83, v84, v85);
  a1[13530] = 0;
  a1[13531] = 0;
  a1[13532] = 0;
  a1[13533] = 0;
  a1[13534] = 0;
  a1[13535] = 0;
  a1[13536] = 0;
  a1[13537] = 0;
  a1[13538] = 0;
  a1[13539] = 0;
  a1[13540] = 0;
  a1[13541] = 0;
  a1[13542] = 0;
  a1[13543] = 0;
  GameRoutine_1a0ba50(a1 + 13548, 0, 3088, v86, v87, v88);
  a1[14031] = 0;
  a1[14032] = 0;
  a1[14033] = 0;
  a1[14034] = 0;
  a1[14035] = 0;
  a1[14036] = 0;
  a1[14037] = 0;
  a1[14038] = 0;
  a1[14039] = 0;
  a1[14040] = 0;
  a1[14041] = 0;
  a1[14042] = 0;
  a1[14043] = 0;
  a1[14044] = 0;
  GameRoutine_1a0ba50(a1 + 14049, 0, 3088, v89, v90, v91);
  a1[14532] = 0;
  a1[14533] = 0;
  a1[14534] = 0;
  a1[14535] = 0;
  a1[14536] = 0;
  a1[14537] = 0;
  a1[14538] = 0;
  a1[14539] = 0;
  a1[14540] = 0;
  a1[14541] = 0;
  a1[14542] = 0;
  a1[14543] = 0;
  a1[14544] = 0;
  a1[14545] = 0;
  GameRoutine_1a0ba50(a1 + 14550, 0, 3088, v92, v93, v94);
  a1[15033] = 0;
  a1[15034] = 0;
  a1[15035] = 0;
  a1[15036] = 0;
  a1[15037] = 0;
  a1[15038] = 0;
  a1[15039] = 0;
  a1[15040] = 0;
  a1[15041] = 0;
  a1[15042] = 0;
  a1[15043] = 0;
  a1[15044] = 0;
  a1[15045] = 0;
  a1[15046] = 0;
  GameRoutine_1a0ba50(a1 + 15051, 0, 3088, v95, v96, v97);
  a1[15534] = 0;
  a1[15535] = 0;
  a1[15536] = 0;
  a1[15537] = 0;
  a1[15538] = 0;
  a1[15539] = 0;
  a1[15540] = 0;
  a1[15541] = 0;
  a1[15542] = 0;
  a1[15543] = 0;
  a1[15544] = 0;
  a1[15545] = 0;
  a1[15546] = 0;
  a1[15547] = 0;
  result = GameRoutine_1a0ba50(a1 + 15552, 0, 3088, v98, v99, v100);
  v7[162] = 0;
  return result;
}

__int64 GameHr_2b8cb0(__int64 a1, __int64 a2)
{
  __int64 result;
  int v4;
  int v5;

  result =
      GameRoutine_1a0b950(a1 + 4008LL * *(int*)(a1 + 128276) + 16, a2, 4008);
  v4 = *(_DWORD*)(a1 + 128276);
  if (v4 <= 30) {
    v5 = v4 + 1;
  }
  else {
    v5 = 0;
  }
  *(_DWORD*)(a1 + 128276) = v5;
  return result;
}

_QWORD* GameHr_2b8d00(_QWORD* result, _QWORD* a2, _QWORD* a3, _QWORD* a4)
{
  *result = *a2;
  result[1] = *a3;
  result[2] = *a4;
  result[3] = a4[1];
  result[4] = a4[2];
  result[5] = a4[3];
  return result;
}

__int64 GameHr_2b8d40(__int64 result, _QWORD* a2, _QWORD* a3, __int64 a4,
                      _QWORD* a5)
{
  *(_QWORD*)result = *a2;
  *(_QWORD*)(result + 8) = *a3;
  *(_QWORD*)(result + 40) = *(_QWORD*)a4;
  *(_QWORD*)(result + 48) = *(_QWORD*)(a4 + 16);
  *(_QWORD*)(result + 56) = *(_QWORD*)(a4 + 24);
  *(_DWORD*)(result + 64) = *(_DWORD*)(a4 + 8);
  *(_QWORD*)(result + 16) = *a5;
  *(_QWORD*)(result + 24) = a5[1];
  *(_QWORD*)(result + 32) = a5[2];
  *(_QWORD*)(result + 72) = a5[3];
  return result;
}

__int64 GameHr_2b8da0(__int64 a1)
{
  __int64 result;

  *(_QWORD*)a1 = a1;
  *(_QWORD*)(a1 + 8) = a1;
  *(_WORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 20) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_DWORD*)(a1 + 40) = 0;
  result = GameRoutine_1a0a040(a1 + 16, 1, 0);
  *(_BYTE*)(a1 + 48) = 0;
  return result;
}

__int64 GameHr_2b8f00(__int64* a1)
{
  __int64* i;
  __int64* v3;
  __int64 v4;

  GameRoutine_1a09b70(a1 + 2);
  for (i = (__int64*)a1[1]; i != a1; i = (__int64*)a1[1]) {
    v3 = (__int64*)i[1];
    v4 = *v3;
    *(_QWORD*)(*i + 8) = v3;
    *v3 = *i;
    *(_QWORD*)(v4 + 8) = i;
    *i = v4;
  }
  return GameRoutine_1a09b80(a1 + 2);
}

__int64 GameHr_2b90e0(int a1)
{
  __int64 v1;

  v1 = *(_QWORD*)GameData_2135528[0];
  return (v1 + GameRoutine_1a0c1a0(48000, 2, 0) + 8360) * a1;
}

__int64 GameHr_2b9240(__int64 result)
{
  __int64 v1;

  v1 = GameData_2135538[0];
  *(_QWORD*)(result + 32) = result + 32;
  *(_QWORD*)(result + 40) = result + 32;
  *(_QWORD*)result = v1 + 16;
  *(_QWORD*)(result + 8) = result + 8;
  *(_QWORD*)(result + 16) = result + 8;
  *(_QWORD*)(result + 24) = GameData_1f80980;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 88) = 0;
  *(_QWORD*)(result + 96) = 0;
  *(_DWORD*)(result + 104) = 0;
  *(_QWORD*)(result + 112) = 0;
  *(_QWORD*)(result + 120) = 0;
  *(_BYTE*)(result + 128) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = GameData_1f809d8;
  *(_DWORD*)(result + 132) = 0;
  *(_DWORD*)(result + 136) = -1;
  return result;
}

__int64 GameHr_2b95d0()
{
  GameRoutine_2b9240((__int64)&GameData_21a3488);
  return GameRoutine_2b0(GameData_2135548, &GameData_21a3488,
                         &GameData_1f50948);
}

_QWORD* GameHr_2b9620(_QWORD* result, __int64 a2, __int64 a3, __int64 a4,
                      int a5, int a6)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  __int64 v20;
  int v21;
  _DWORD* v22;
  __int64 v23;
  _DWORD* v24;
  __int64 v25;
  int v26;
  _DWORD* v27;
  __int64 v28;
  int v29;
  _DWORD* v30;
  __int64 v31;
  int v32;
  _DWORD* v33;
  _DWORD* v34;
  int v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  _DWORD* v40;
  bool v41;
  int v42;

  v6 = a6 - 1LL;
  v7 = -(__int64)a6;
  v8 = (v6 + a2) & v7;
  v9 = (v6 + a4) & v7;
  v10 = a2 - v8 + a3;
  if (v10 >= v9 * a5) {
    v11 = (unsigned int)(a5 - 1);
    if (a5 >= 1) {
      v12 = a5 & 7;
      v13 = a6 - 1;
      v14 = -a6;
      if ((unsigned int)a5 >= 8) {
        v16 = a5 & 0x7FFFFFF8;
        v17 = v8 + v13;
        v15 = 0;
        do {
          if (v11 == v15) {
            v18 = 0;
          }
          else {
            v18 = v9;
          }
          *(_DWORD*)(v17 & v14) = v18;
          if (v15 + 1 == v11) {
            v19 = 0;
          }
          else {
            v19 = v9;
          }
          *(_DWORD*)((v9 + v17) & v14) = v19;
          v20 = 2 * v9 + v17;
          if (v15 + 2 == v11) {
            v21 = 0;
          }
          else {
            v21 = v9;
          }
          v17 += 8 * v9;
          v22 = (_DWORD*)(v20 & v14);
          v23 = v9 + v20;
          *v22 = v21;
          v24 = (_DWORD*)(v23 & v14);
          v25 = v9 + v23;
          if (v15 + 3 == v11) {
            v26 = 0;
          }
          else {
            v26 = v9;
          }
          *v24 = v26;
          v27 = (_DWORD*)(v25 & v14);
          v28 = v9 + v25;
          if (v15 + 4 == v11) {
            v29 = 0;
          }
          else {
            v29 = v9;
          }
          *v27 = v29;
          v30 = (_DWORD*)(v28 & v14);
          v31 = v9 + v28;
          if (v15 + 5 == v11) {
            v32 = 0;
          }
          else {
            v32 = v9;
          }
          *v30 = v32;
          v33 = (_DWORD*)(v31 & v14);
          v34 = (_DWORD*)((v9 + v31) & v14);
          if (v15 + 6 == v11) {
            v35 = 0;
          }
          else {
            v35 = v9;
          }
          *v33 = v35;
          v36 = v15 + 7;
          v15 += 8;
          if (v36 == v11) {
            v37 = 0;
          }
          else {
            v37 = v9;
          }
          *v34 = v37;
        } while (v15 != v16);
      }
      else {
        v15 = 0;
      }
      if (v12 != 0) {
        v38 = v11 - v15;
        v39 = v8 + v15 * v9 + v13;
        do {
          v40 = (_DWORD*)(v39 & v14);
          v41 = v38-- == 0;
          v39 += v9;
          if (v41) {
            v42 = 0;
          }
          else {
            v42 = v9;
          }
          --v12;
          *v40 = v42;
        } while (v12 != 0);
      }
    }
    result[1] = v8;
    result[2] = v10;
    result[3] = v9;
    result[5] = v8;
  }
  return result;
}

__int64 GameHr_2b99d0(int a1)
{
  __int64 v1;

  v1 = *(_QWORD*)GameData_2135528[0];
  return (v1 + GameRoutine_1a0c0a0(48000, 2) + 4248) * a1;
}

__int64 GameHr_2b9b20(__int64 result)
{
  __int64 v1;

  v1 = GameData_2135558[0];
  *(_QWORD*)(result + 32) = result + 32;
  *(_QWORD*)(result + 40) = result + 32;
  *(_QWORD*)result = v1 + 16;
  *(_QWORD*)(result + 8) = result + 8;
  *(_QWORD*)(result + 16) = result + 8;
  *(_QWORD*)(result + 24) = GameData_1f80af0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 88) = 0;
  *(_QWORD*)(result + 96) = 0;
  *(_DWORD*)(result + 104) = 0;
  *(_QWORD*)(result + 112) = 0;
  *(_QWORD*)(result + 120) = 0;
  *(_BYTE*)(result + 128) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = GameData_1f809d8;
  *(_DWORD*)(result + 132) = 0;
  *(_DWORD*)(result + 136) = -1;
  return result;
}

__int64 GameHr_2b9eb0()
{
  GameRoutine_2b9b20((__int64)&GameData_21a3518);
  return GameRoutine_2b0(GameData_2135568, &GameData_21a3518,
                         &GameData_1f50948);
}

__int64 GameHr_2cd2e0(__int64 a1, int a2)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  unsigned __int8* v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  bool v12;
  int v13;
  unsigned __int8* v14;
  int v15;

  v2 = *(_QWORD*)(a1 + 24);
  if (v2 == 0) {
    return 0;
  }
  v3 = *(_DWORD*)(v2 + 80);
  if (v3 == 0) {
    return 0;
  }
  v4 = *(_QWORD*)(v2 + 72);
  v5 = v3 & 7;
  if (v3 < 8) {
    v6 = 0;
    result = 0;
    if ((v3 & 7) == 0) {
      return result;
    }
    goto LABEL_28;
  }
  v8 = (unsigned __int8*)(v4 + 64);
  v9 = 0;
  LODWORD(result) = 0;
  v10 = -(__int64)(v3 & 0xFFFFFFF8);
  do {
    v9 -= 8;
    if (*(v8 - 64) == a2) {
      v11 = result + 1;
    }
    else {
      v11 = result;
    }
    if (*(v8 - 48) == a2) {
      ++v11;
    }
    if (*(v8 - 32) == a2) {
      ++v11;
    }
    if (*(v8 - 16) == a2) {
      ++v11;
    }
    if (*v8 == a2) {
      ++v11;
    }
    if (v8[16] == a2) {
      ++v11;
    }
    v12 = v8[32] == a2;
    v13 = v8[48];
    v8 += 128;
    if (v12) {
      ++v11;
    }
    if (v13 == a2) {
      result = v11 + 1;
    }
    else {
      result = v11;
    }
  } while (v10 != v9);
  v6 = -v9;
  if (v5 != 0) {
  LABEL_28:
    v14 = (unsigned __int8*)(v4 + 16 * v6);
    do {
      v15 = *v14;
      v14 += 16;
      if (v15 == a2) {
        result = (unsigned int)(result + 1);
      }
      else {
        result = (unsigned int)result;
      }
      --v5;
    } while (v5 != 0);
  }
  return result;
}

__int64 GameHr_2ce320(__int64 a1, __int64 a2)
{
  unsigned int v3;
  __int64 v4;

  v3 = a1;
  v4 = GameRoutine_55afc0(a1);
  return (*(__int64 (**)(__int64, __int64, const char*, _QWORD, __int64))(
      *(_QWORD*)v4 + 88LL))(
      v4, 2, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpAggregate.cpp", v3,
      a2);
}

__int64 GameHr_2cf0f0(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  *(_QWORD*)result = GameData_1f80ff0;
  if ((*(_WORD*)(result + 10) & 1) != 0) {
    v1 = *(_QWORD*)(result + 40);
    v2 = (_QWORD*)result;
    if (v1 != 0) {
      v3 = GameRoutine_55af80(0);
      result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v3 + 24LL))(v3, v1);
      v2[5] = 0;
    }
    v4 = v2[3];
    if (v4 != 0) {
      v5 = GameRoutine_55af80(0);
      result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v5 + 24LL))(v5, v4);
      v2[3] = 0;
    }
    v6 = v2[9];
    if (v6 != 0) {
      v7 = GameRoutine_55af80(0);
      result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v7 + 24LL))(v7, v6);
      v2[9] = 0;
    }
    v8 = v2[7];
    if (v8 != 0) {
      v9 = GameRoutine_55af80(0);
      result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v9 + 24LL))(v9, v8);
      v2[7] = 0;
    }
    v10 = v2[11];
    if (v10 != 0) {
      v11 = GameRoutine_55af80(0);
      result =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v11 + 24LL))(v11, v10);
      v2[11] = 0;
    }
  }
  return result;
}

__int64 GameHr_2d02f0(__int64 a1, __int64 a2)
{
  __int64 result;

  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)a1 = (char*)GameData_21355f8 + 16;
  *(_QWORD*)(a1 + 8) = 0x100030007LL;
  GameRoutine_2ccbb0(a1 + 24, 2);
  *(_QWORD*)a1 = (char*)GameData_2135600 + 16;
  GameRoutine_2ecb70(a1 + 56);
  *(_DWORD*)(a1 + 36) = -1;
  *(_QWORD*)a1 = &GameData_1f81370;
  result = GameRoutine_377570(a1 + 80, 1, a2);
  *(_QWORD*)a1 = GameData_1f81070;
  return result;
}

__int64 GameHr_2d0970(__int64 a1, __int64 a2)
{
  unsigned int v3;
  __int64 v4;

  v3 = a1;
  v4 = GameRoutine_55afc0(a1);
  return (*(__int64 (**)(__int64, __int64, const char*, _QWORD, __int64))(
      *(_QWORD*)v4 + 88LL))(
      v4, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpRigidDynamic.cpp",
      v3, a2);
}

__int64 GameHr_2d8750(__int64 a1, __int64 a2)
{
  unsigned int v3;
  __int64 v4;

  v3 = a1;
  v4 = GameRoutine_55afc0(a1);
  return (*(__int64 (**)(__int64, __int64, const char*, _QWORD, __int64))(
      *(_QWORD*)v4 + 88LL))(
      v4, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", v3, a2);
}

__int64 GameHr_2dca70(__int64 a1, __int64 a2)
{
  unsigned int v3;
  __int64 v4;

  v3 = a1;
  v4 = GameRoutine_55afc0(a1);
  return (*(__int64 (**)(__int64, __int64, const char*, _QWORD, __int64))(
      *(_QWORD*)v4 + 88LL))(
      v4, 2, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", v3, a2);
}

__int64 GameHr_2de160(__int64 a1)
{
  unsigned int v1;
  __int64 v2;

  v1 = a1;
  v2 = GameRoutine_55afc0(a1);
  return (*(__int64 (**)(__int64, __int64, const char*, _QWORD, const char*))(
      *(_QWORD*)v2 + 88LL))(
      v2, 32, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", v1,
      "Scene state is corrupted. Simulation cannot continue!");
}

__int64 GameHr_2df7e0(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  *(_QWORD*)(a2 + 24) = a1;
  if ((a3 & 1) == 0) {
    v31 = 0;
    v12 = GameRoutine_2d52e0(a2, &v31);
    result = GameRoutine_38ca60(a1 + 1120, a2 + 80, v31, v12, 48, a4);
    if (v12 == 0) {
      return result;
    }
    v13 = *(_QWORD*)(a2 + 24);
    v14 = v31;
    v15 = v12 & 3;
    if (v12 < 4) {
      v16 = 0;
      if ((v12 & 3) == 0) {
        return result;
      }
      goto LABEL_38;
    }
    v23 = (_QWORD*)(v31 + 16);
    v24 = 0;
    while (1) {
      v25 = *(v23 - 2);
      if ((*(_BYTE*)(v25 + 97) & 2) != 0) {
        *(_QWORD*)(v25 + 24) = v13;
        v26 = *(v23 - 1);
        if ((*(_BYTE*)(v26 + 97) & 2) == 0) {
        LABEL_25:
          v27 = *v23;
          if ((*(_BYTE*)(*v23 + 97LL) & 2) == 0) {
            goto LABEL_26;
          }
          goto LABEL_30;
        }
      }
      else {
        v26 = *(v23 - 1);
        if ((*(_BYTE*)(v26 + 97) & 2) == 0) {
          goto LABEL_25;
        }
      }
      *(_QWORD*)(v26 + 24) = v13;
      v27 = *v23;
      if ((*(_BYTE*)(*v23 + 97LL) & 2) == 0) {
      LABEL_26:
        v28 = v23[1];
        if ((*(_BYTE*)(v28 + 97) & 2) != 0) {
          goto LABEL_31;
        }
        goto LABEL_22;
      }
    LABEL_30:
      *(_QWORD*)(v27 + 24) = v13;
      v28 = v23[1];
      if ((*(_BYTE*)(v28 + 97) & 2) != 0) {
      LABEL_31:
        *(_QWORD*)(v28 + 24) = v13;
      }
    LABEL_22:
      v24 -= 4;
      v23 += 4;
      if (-(__int64)(v12 & 0xFFFFFFFC) == v24) {
        v16 = -v24;
        if ((v12 & 3) == 0) {
          return result;
        }
      LABEL_38:
        v30 = v14 + 8 * v16;
        do {
          if ((*(_BYTE*)(*(_QWORD*)v30 + 97LL) & 2) != 0) {
            *(_QWORD*)(*(_QWORD*)v30 + 24LL) = v13;
          }
          v30 += 8;
          --v15;
        } while (v15 != 0);
        return result;
      }
    }
  }
  v31 = 0;
  result = GameRoutine_2d52e0(a2, &v31);
  if ((_DWORD)result == 0) {
    return result;
  }
  v6 = *(_QWORD*)(a2 + 24);
  v7 = v31;
  v8 = result & 3;
  if ((unsigned int)result >= 4) {
    v17 = (_QWORD*)(v31 + 16);
    v18 = 0;
    while (1) {
      v19 = *(v17 - 2);
      if ((*(_BYTE*)(v19 + 97) & 2) != 0) {
        *(_QWORD*)(v19 + 24) = v6;
        v20 = *(v17 - 1);
        if ((*(_BYTE*)(v20 + 97) & 2) == 0) {
        LABEL_14:
          v21 = *v17;
          if ((*(_BYTE*)(*v17 + 97LL) & 2) == 0) {
            goto LABEL_15;
          }
          goto LABEL_19;
        }
      }
      else {
        v20 = *(v17 - 1);
        if ((*(_BYTE*)(v20 + 97) & 2) == 0) {
          goto LABEL_14;
        }
      }
      *(_QWORD*)(v20 + 24) = v6;
      v21 = *v17;
      if ((*(_BYTE*)(*v17 + 97LL) & 2) == 0) {
      LABEL_15:
        v22 = v17[1];
        if ((*(_BYTE*)(v22 + 97) & 2) != 0) {
          goto LABEL_20;
        }
        goto LABEL_11;
      }
    LABEL_19:
      *(_QWORD*)(v21 + 24) = v6;
      v22 = v17[1];
      if ((*(_BYTE*)(v22 + 97) & 2) != 0) {
      LABEL_20:
        *(_QWORD*)(v22 + 24) = v6;
      }
    LABEL_11:
      v18 -= 4;
      v17 += 4;
      if (-(__int64)((unsigned int)result & 0xFFFFFFFC) == v18) {
        v9 = -v18;
        if ((result & 3) != 0) {
          goto LABEL_33;
        }
        return result;
      }
    }
  }
  v9 = 0;
  if ((result & 3) != 0) {
  LABEL_33:
    v29 = v7 + 8 * v9;
    do {
      if ((*(_BYTE*)(*(_QWORD*)v29 + 97LL) & 2) != 0) {
        *(_QWORD*)(*(_QWORD*)v29 + 24LL) = v6;
      }
      v29 += 8;
      --v8;
    } while (v8 != 0);
  }
  return result;
}

__int64 GameHr_2dfa60(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  *(_QWORD*)(a2 + 24) = a1;
  if ((a3 & 1) == 0) {
    v33 = 0;
    v14 = GameRoutine_2d2a10(a2, &v33, 0);
    result = GameRoutine_38cd20(a1 + 1120, a2 + 80, v33, v14, 48, a4, a5 != 0);
    if (v14 == 0) {
      return result;
    }
    v15 = *(_QWORD*)(a2 + 24);
    v16 = v33;
    v17 = v14 & 3;
    if (v14 < 4) {
      v18 = 0;
      if ((v14 & 3) == 0) {
        return result;
      }
      goto LABEL_38;
    }
    v25 = (_QWORD*)(v33 + 16);
    v26 = 0;
    while (1) {
      v27 = *(v25 - 2);
      if ((*(_BYTE*)(v27 + 97) & 2) != 0) {
        *(_QWORD*)(v27 + 24) = v15;
        v28 = *(v25 - 1);
        if ((*(_BYTE*)(v28 + 97) & 2) == 0) {
        LABEL_25:
          v29 = *v25;
          if ((*(_BYTE*)(*v25 + 97LL) & 2) == 0) {
            goto LABEL_26;
          }
          goto LABEL_30;
        }
      }
      else {
        v28 = *(v25 - 1);
        if ((*(_BYTE*)(v28 + 97) & 2) == 0) {
          goto LABEL_25;
        }
      }
      *(_QWORD*)(v28 + 24) = v15;
      v29 = *v25;
      if ((*(_BYTE*)(*v25 + 97LL) & 2) == 0) {
      LABEL_26:
        v30 = v25[1];
        if ((*(_BYTE*)(v30 + 97) & 2) != 0) {
          goto LABEL_31;
        }
        goto LABEL_22;
      }
    LABEL_30:
      *(_QWORD*)(v29 + 24) = v15;
      v30 = v25[1];
      if ((*(_BYTE*)(v30 + 97) & 2) != 0) {
      LABEL_31:
        *(_QWORD*)(v30 + 24) = v15;
      }
    LABEL_22:
      v26 -= 4;
      v25 += 4;
      if (-(__int64)(v14 & 0xFFFFFFFC) == v26) {
        v18 = -v26;
        if ((v14 & 3) == 0) {
          return result;
        }
      LABEL_38:
        v32 = v16 + 8 * v18;
        do {
          if ((*(_BYTE*)(*(_QWORD*)v32 + 97LL) & 2) != 0) {
            *(_QWORD*)(*(_QWORD*)v32 + 24LL) = v15;
          }
          v32 += 8;
          --v17;
        } while (v17 != 0);
        return result;
      }
    }
  }
  v33 = 0;
  result = GameRoutine_2d2a10(a2, &v33, 0);
  if ((_DWORD)result == 0) {
    return result;
  }
  v7 = *(_QWORD*)(a2 + 24);
  v8 = v33;
  v9 = result & 3;
  if ((unsigned int)result >= 4) {
    v19 = (_QWORD*)(v33 + 16);
    v20 = 0;
    while (1) {
      v21 = *(v19 - 2);
      if ((*(_BYTE*)(v21 + 97) & 2) != 0) {
        *(_QWORD*)(v21 + 24) = v7;
        v22 = *(v19 - 1);
        if ((*(_BYTE*)(v22 + 97) & 2) == 0) {
        LABEL_14:
          v23 = *v19;
          if ((*(_BYTE*)(*v19 + 97LL) & 2) == 0) {
            goto LABEL_15;
          }
          goto LABEL_19;
        }
      }
      else {
        v22 = *(v19 - 1);
        if ((*(_BYTE*)(v22 + 97) & 2) == 0) {
          goto LABEL_14;
        }
      }
      *(_QWORD*)(v22 + 24) = v7;
      v23 = *v19;
      if ((*(_BYTE*)(*v19 + 97LL) & 2) == 0) {
      LABEL_15:
        v24 = v19[1];
        if ((*(_BYTE*)(v24 + 97) & 2) != 0) {
          goto LABEL_20;
        }
        goto LABEL_11;
      }
    LABEL_19:
      *(_QWORD*)(v23 + 24) = v7;
      v24 = v19[1];
      if ((*(_BYTE*)(v24 + 97) & 2) != 0) {
      LABEL_20:
        *(_QWORD*)(v24 + 24) = v7;
      }
    LABEL_11:
      v20 -= 4;
      v19 += 4;
      if (-(__int64)((unsigned int)result & 0xFFFFFFFC) == v20) {
        v10 = -v20;
        if ((result & 3) != 0) {
          goto LABEL_33;
        }
        return result;
      }
    }
  }
  v10 = 0;
  if ((result & 3) != 0) {
  LABEL_33:
    v31 = v8 + 8 * v10;
    do {
      if ((*(_BYTE*)(*(_QWORD*)v31 + 97LL) & 2) != 0) {
        *(_QWORD*)(*(_QWORD*)v31 + 24LL) = v7;
      }
      v31 += 8;
      --v9;
    } while (v9 != 0);
  }
  return result;
}

__int64 GameHr_2e92e0(__int64 result)
{
  if ((*(_BYTE*)(result + 1043) & 1) == 0 && *(_BYTE*)(result + 5785) == 1) {
    return (*(__int64 (**)(_QWORD))(**(_QWORD**)(result + 1488) + 432LL))(
        *(_QWORD*)(result + 1488));
  }
  return result;
}

__int64 GameHr_2e9310(__int64 a1)
{
  __int64 v1;

  v1 = GameRoutine_55afc0(a1);
  return (*(__int64 (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v1 + 88LL))(
      v1, 2,
      "/Inside/Lib/PhysX/O/physx/source/physx/src/NpSceneFetchResults.cpp", 132,
      "At least one object is out of the broadphase bounds. To manage those "
      "objects, define a PxBroadPhaseCallback f"
      "or each used client.");
}

__int64 GameHr_2eb580(__int64 a1, __int64 a2)
{
  unsigned int v3;
  __int64 v4;

  v3 = a1;
  v4 = GameRoutine_55afc0(a1);
  return (*(__int64 (**)(__int64, __int64, const char*, _QWORD, __int64))(
      *(_QWORD*)v4 + 88LL))(
      v4, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpShape.cpp", v3, a2);
}

__int64 GameHr_2eb800(__int64 a1, __int64 a2)
{
  unsigned int v3;
  __int64 v4;

  v3 = a1;
  v4 = GameRoutine_55afc0(a1);
  return (*(__int64 (**)(__int64, __int64, const char*, _QWORD, __int64))(
      *(_QWORD*)v4 + 88LL))(
      v4, 4, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpShape.cpp", v3, a2);
}

__int64 GameHr_2ec440(__int64 a1)
{
  __int64 v2;

  if (*(_QWORD*)(a1 + 24) != 0 && (v2 = GameRoutine_2df7b0()) != 0) {
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 424LL))(v2,
                                                                     a1 + 64);
  }
  else {
    return 0xFFFFFFFFLL;
  }
}

__int64 GameHr_2f7310(_QWORD* a1, __int64 (***a2)(_QWORD, __int64))
{
  __int64 result;

  if (a1[54] == 0) {
    result = 0;
    if (a1[55] == 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  result = (**a2)(a2, 0x80000000LL);
  a1[54] = result;
  if (a1[55] != 0) {
  LABEL_3:
    a1[55] = (**a2)(a2, 0x80000000LL);
    result = a1[54];
  }
LABEL_4:
  a1[51] = *(_QWORD*)(result + 256) + 40LL;
  a1[52] = a1;
  return result;
}

__int64 GameHr_2f73a0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5)
{
  __int64 result;
  __int64 v9;

  a1[3] = 0;
  a1[4] = 0x3FFFFFFF;
  *a1 = (char*)GameData_21356c0 + 16;
  a1[1] = 0x100010012LL;
  result = GameRoutine_3105a0(a1 + 6, a3, a5);
  v9 = *(_QWORD*)(a2 + 256);
  a1[54] = a2;
  a1[55] = a4;
  a1[51] = v9 + 40;
  a1[52] = a1;
  return result;
}

__int64 GameHr_2f81e0(__int64 a1)
{
  __int64 v2;

  GameRoutine_2bc200(*GameData_21355d8[0], a1, 0, 1);
  v2 = *(_QWORD*)(a1 + 24);
  if (v2 != 0) {
    GameRoutine_2dbfe0(v2, a1);
  }
  return GameRoutine_2c0810(*(_QWORD*)(a1 + 416));
}

__int64 GameHr_2fc500(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;

  *(_QWORD*)result = GameData_1f84178;
  v1 = *(_DWORD*)(result + 116);
  if ((v1 & 0x80000000) == 0 && (v1 & 0x7FFFFFFF) != 0) {
    v2 = *(_QWORD*)(result + 104);
    if (v2 == result + 64) {
      *(_BYTE*)(result + 96) = 0;
    }
    else if (v2 != 0) {
      v3 = GameRoutine_55af80(0);
      return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v3 + 24LL))(v3, v2);
    }
  }
  return result;
}

__int64 GameHr_2fe050(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;

  *(_QWORD*)result = GameData_1f842e8;
  v1 = *(_DWORD*)(result + 108);
  if ((v1 & 0x80000000) == 0 && (v1 & 0x7FFFFFFF) != 0) {
    v2 = *(_QWORD*)(result + 96);
    if (v2 == result + 56) {
      *(_BYTE*)(result + 88) = 0;
    }
    else if (v2 != 0) {
      v3 = GameRoutine_55af80(0);
      return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v3 + 24LL))(v3, v2);
    }
  }
  return result;
}

__int64 GameHr_2fe840(_DWORD* a1, unsigned int a2, int a3)
{
  unsigned int v5;
  unsigned int v6;
  _DWORD* v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  _QWORD v16[5];

  a1[47] = a3;
  a1[48] = a2;
  if (a2 <= 0x40) {
    v5 = 64;
  }
  else {
    v5 = a2;
  }
  if ((a1[5] & 0x7FFFFFFFu) < v5) {
    GameRoutine_2ffe00(a1 + 2, v5);
    if ((a1[37] & 0x7FFFFFF0) != 0) {
    LABEL_6:
      if ((a1[17] & 0x7FFFFFFFu) >= v5) {
        goto LABEL_7;
      }
      goto LABEL_15;
    }
  }
  else if ((a1[37] & 0x7FFFFFF0) != 0) {
    goto LABEL_6;
  }
  GameRoutine_2ffd00(a1 + 34, 16);
  if ((a1[17] & 0x7FFFFFFFu) >= v5) {
  LABEL_7:
    if ((a1[21] & 0x7FFFFFFFu) >= v5) {
      goto LABEL_8;
    }
    goto LABEL_16;
  }
LABEL_15:
  GameRoutine_2ffe00(a1 + 14, v5);
  if ((a1[21] & 0x7FFFFFFFu) >= v5) {
  LABEL_8:
    if ((a1[25] & 0x7FFFFFFFu) >= v5) {
      goto LABEL_9;
    }
    goto LABEL_17;
  }
LABEL_16:
  GameRoutine_2ffe00(a1 + 18, v5);
  if ((a1[25] & 0x7FFFFFFFu) >= v5) {
  LABEL_9:
    if ((a1[29] & 0x7FFFFFFFu) >= v5) {
      goto LABEL_10;
    }
  LABEL_18:
    GameRoutine_2ffe00(a1 + 26, v5);
    if ((a1[41] & 0x7FFFFFFFu) >= v5) {
      goto LABEL_12;
    }
    goto LABEL_11;
  }
LABEL_17:
  GameRoutine_2ffe00(a1 + 22, v5);
  if ((a1[29] & 0x7FFFFFFFu) < v5) {
    goto LABEL_18;
  }
LABEL_10:
  if ((a1[41] & 0x7FFFFFFFu) < v5) {
  LABEL_11:
    GameRoutine_2ffe00(a1 + 38, v5);
  }
LABEL_12:
  v6 = a2;
  v16[4] = v16[3];
  v7 = a1;
  v8 = v6;
  GameRoutine_55b740(*(_QWORD*)v7);
  v9 = v7[49];
  v10 = v8 - v9;
  if (v8 > v9) {
    do {
      while (1) {
        v11 = GameRoutine_55af80(0);
        v12 = (*(__int64 (**)(__int64, __int64, char*, const char*, __int64))(
            *(_QWORD*)v11 + 16LL))(v11, 0x4000, &GameData_1a9f09e,
                                   "/Inside/Lib/PhysX/O/physx/source/lowlevel/"
                                   "common/src/pipeline/PxcNpMemBlockPool.cpp",
                                   97);
        v13 = (unsigned int)v7[40];
        v14 = v7[41];
        v16[0] = v12;
        if ((v14 & 0x7FFFFFFFu) <= (unsigned int)v13) {
          break;
        }
        *(_QWORD*)(*((_QWORD*)v7 + 19) + 8 * v13) = v12;
        v7[40] = v13 + 1;
        --v10;
        ++v7[46];
        if (v10 == 0) {
          return GameRoutine_55b750(*(_QWORD*)v7);
        }
      }
      GameRoutine_2fff00(v7 + 38, v16);
      --v10;
      ++v7[46];
    } while (v10 != 0);
  }
  return GameRoutine_55b750(*(_QWORD*)v7);
}

__int64 GameHr_30d560(__int64 a1, __int64 a2)
{
  unsigned int v3;
  __int64 v4;

  v3 = a1;
  v4 = GameRoutine_55afc0(a1);
  return (*(__int64 (**)(__int64, __int64, const char*, _QWORD, __int64))(
      *(_QWORD*)v4 + 88LL))(
      v4, 4, "/Inside/Lib/PhysX/O/physx/source/scenequery/src/SqQuery.cpp", v3,
      a2);
}

__int64 GameHr_30f2a0(__int64 a1, __int64 a2, int* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  int v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v15;
  __int64 v16;
  char v17;
  float v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  char v28;
  __int64 v29;
  __int64 v30;
  int v31;
  int v32;
  __int64 v33;
  struct {
    __int64 (**v35)();
    int v36;
    __int16 v37;
    char gap14_[2];
    __int64 v38;
    __int64 v39;
    __int64 v40;
    int v41;
    char gap44_[4];
    __int64 v42;
    __int64 v43;
    char v44;
    char gap65_[7];
    __int64 v45;
    __int64 v46;
  } v35_;
  struct {
    char gap88_[4];
    int v47;
    __int64 v48;
    int v49;
    __int16 v50;
  } v47_;
  __int16 v51;

  v3 = a1;
  v4 = *(_QWORD*)(a1 + 48);
  v5 = *(_DWORD*)(v4 + 80);
  if (v5 == 0 || *(_BYTE*)(v3 + 86) != 1 ||
      *(float*)(a2 + 32) > *(float*)(v3 + 80)) {
    return 1;
  }
  v6 = *(_DWORD*)(v4 + 84);
  if (v6 != v5) {
    goto LABEL_12;
  }
  v7 = *(_QWORD*)(v3 + 64);
  v8 = *(_QWORD*)(v7 + 4);
  v35_.v36 = -1;
  v9 = *(_DWORD*)v7;
  v35_.v37 = 0;
  v35_.v42 = 0;
  v35_.v43 = 0;
  v35_.v44 = 0;
  v47_.v47 = v9;
  v10 = *(_DWORD*)(v7 + 12);
  LOWORD(v7) = *(_WORD*)(v7 + 16);
  v47_.v48 = v8;
  v35_.v38 = 0;
  v35_.v39 = 0;
  v35_.v40 = 0;
  v35_.v45 = 0;
  v35_.v46 = 0;
  v47_.v49 = v10;
  v47_.v50 = v7 | 0x8000;
  v35_.v41 = 2139095039;
  v35_.v35 = GameData_1f84908;
  if ((*(_BYTE*)(v3 + 87) & 1) == 0) {
    v11 = a2;
    v12 = *(_QWORD**)(v3 + 32);
    v13 = *(_QWORD*)(v3 + 40);
    v15 = v3;
    v16 = *(_QWORD*)(v3 + 72);
    v51 = *(_WORD*)(v3 + 56);
    v17 = GameRoutine_30cf60_alt1(v12, v13, (__int64)&v35_.v35, &v51, 0,
                                  (__int64)&v47_.v47, v16);
    v4 = *(_QWORD*)(v15 + 48);
    v3 = v15;
    if ((v17 & 1) != 0) {
      *(_DWORD*)(v4 + 8) = v35_.v36;
      *(_WORD*)(v4 + 12) = v35_.v37;
      *(_QWORD*)(v4 + 16) = v35_.v38;
      *(_QWORD*)(v4 + 24) = v35_.v39;
      *(_QWORD*)(v4 + 32) = v35_.v40;
      v18 = *(float*)&v35_.v41;
      *(_DWORD*)(v4 + 40) = v35_.v41;
      v19 = v35_.v43;
      *(_QWORD*)(v4 + 48) = v35_.v42;
      *(_QWORD*)(v4 + 56) = v19;
      v20 = *(_QWORD*)(v15 + 48);
      v21 = *(_QWORD*)(v20 + 72);
      v22 = *(_DWORD*)(v20 + 84);
      *(_BYTE*)(v20 + 64) = 1;
      v23 = GameRoutine_30e9a0_alt1(v21, v22, v18);
      v24 = v35_.v41;
      v25 = v23;
      v4 = *(_QWORD*)(v15 + 48);
      v3 = v15;
      *(_DWORD*)(v4 + 84) = v25;
      *(_DWORD*)(v15 + 80) = v24;
      *a3 = v24;
    }
    a2 = v11;
  }
  *(_BYTE*)(v3 + 87) = 1;
  v6 = *(_DWORD*)(v4 + 84);
  if (v6 != *(_DWORD*)(v4 + 80)) {
  LABEL_12:
    v29 = *(_QWORD*)(v4 + 72);
    *(_DWORD*)(v4 + 84) = v6 + 1;
    v30 = v29 + 56LL * v6;
    *(_DWORD*)v30 = *(_DWORD*)a2;
    *(_WORD*)(v30 + 4) = *(_WORD*)(a2 + 4);
    *(_QWORD*)(v30 + 8) = *(_QWORD*)(a2 + 8);
    v31 = *(_DWORD*)(a2 + 20);
    *(_DWORD*)(v30 + 16) = *(_DWORD*)(a2 + 16);
    *(_DWORD*)(v30 + 20) = v31;
    v32 = *(_DWORD*)(a2 + 28);
    *(_DWORD*)(v30 + 24) = *(_DWORD*)(a2 + 24);
    *(_DWORD*)(v30 + 28) = v32;
    *(_DWORD*)(v30 + 32) = *(_DWORD*)(a2 + 32);
    v33 = *(_QWORD*)(a2 + 48);
    *(_QWORD*)(v30 + 40) = *(_QWORD*)(a2 + 40);
    *(_QWORD*)(v30 + 48) = v33;
    return 1;
  }
  v26 = a2;
  v27 = v3;
  v28 = (**(__int64 (***)(__int64, _QWORD, _QWORD))v4)(v4, *(_QWORD*)(v4 + 72),
                                                       v6);
  *(_BYTE*)(v27 + 86) = v28 & 1;
  if ((v28 & 1) != 0) {
    v4 = *(_QWORD*)(v27 + 48);
    v6 = 0;
    a2 = v26;
    *(_DWORD*)(v4 + 84) = 0;
    goto LABEL_12;
  }
  return 0;
}

__int64 GameHr_3105a0(__int64 a1)
{
  __int64 result;

  result = GameRoutine_310c40();
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_DWORD*)(a1 + 376) = -1;
  return result;
}

__int64 GameHr_3105f0(__int64 result, float* a2)
{
  float v2;
  __int64 v3;
  float v4;
  int v5;
  _BYTE* v6;

  v2 = a2[4];
  v3 = result;
  if (*(float*)(result + 16) == v2) {
    v4 = a2[5];
    if (*(float*)(result + 20) == v4 && *(float*)(result + 24) == a2[6] &&
        *(float*)result == *a2 && *(float*)(result + 4) == a2[1] &&
        *(float*)(result + 8) == a2[2] && *(float*)(result + 12) == a2[3]) {
      return result;
    }
  }
  else {
    v4 = a2[5];
  }
  *(float*)(result + 16) = v2;
  *(float*)(result + 20) = v4;
  result = *(_QWORD*)(result + 352);
  *(float*)(v3 + 24) = a2[6];
  *(float*)v3 = *a2;
  *(_QWORD*)(v3 + 4) = *(_QWORD*)(a2 + 1);
  v5 = *((_DWORD*)a2 + 3);
  *(_BYTE*)(v3 + 350) = 1;
  *(_DWORD*)(v3 + 12) = v5;
  if (result != 0) {
    result = GameRoutine_311070();
  }
  v6 = **(_BYTE***)(v3 + 360);
  if (v6 != nullptr && v6[148] == 1) {
    *(_BYTE*)(*(_QWORD*)v6 + 1268LL) = 1;
  }
  return result;
}

__int64 GameHr_3106f0(__int64 result, float* a2)
{
  float v2;
  __int64 v3;
  float v4;
  int v5;
  _BYTE* v6;

  v2 = a2[4];
  v3 = result;
  if (*(float*)(result + 44) == v2) {
    v4 = a2[5];
    if (*(float*)(result + 48) == v4 && *(float*)(result + 52) == a2[6] &&
        *(float*)(result + 28) == *a2 && *(float*)(result + 32) == a2[1] &&
        *(float*)(result + 36) == a2[2] && *(float*)(result + 40) == a2[3]) {
      return result;
    }
  }
  else {
    v4 = a2[5];
  }
  *(float*)(result + 44) = v2;
  *(float*)(result + 48) = v4;
  result = *(_QWORD*)(result + 352);
  *(float*)(v3 + 52) = a2[6];
  *(float*)(v3 + 28) = *a2;
  *(_QWORD*)(v3 + 32) = *(_QWORD*)(a2 + 1);
  v5 = *((_DWORD*)a2 + 3);
  *(_BYTE*)(v3 + 350) = 1;
  *(_DWORD*)(v3 + 40) = v5;
  if (result != 0) {
    result = GameRoutine_311070();
  }
  v6 = **(_BYTE***)(v3 + 360);
  if (v6 != nullptr && v6[148] == 1) {
    *(_BYTE*)(*(_QWORD*)v6 + 1268LL) = 1;
  }
  return result;
}

_BYTE* GameHr_3107f0(__int64 a1, unsigned int a2, float a3)
{
  _BYTE* result;
  __int64 v5;

  *(float*)(a1 + 4LL * a2 + 200) = a3;
  result = **(_BYTE***)(a1 + 360);
  if (result != nullptr && result[148] == 1) {
    v5 = *(unsigned __int8*)(a1 + a2 + 344);
    if (v5 != 255) {
      *(float*)(*(_QWORD*)(*(_QWORD*)result + 288LL) +
                4LL * *(unsigned int*)(*(_QWORD*)(*(_QWORD*)result + 968LL) +
                                       8LL * *(unsigned int*)(a1 + 376)) +
                4 * v5) = a3;
      return (_BYTE*)GameRoutine_312ec0();
    }
  }
  return result;
}

_BYTE* GameHr_310860(__int64 a1, unsigned int a2, float a3)
{
  _BYTE* result;
  __int64 v5;

  *(float*)(a1 + 4LL * a2 + 224) = a3;
  result = **(_BYTE***)(a1 + 360);
  if (result != nullptr && result[148] == 1) {
    v5 = *(unsigned __int8*)(a1 + a2 + 344);
    if (v5 != 255) {
      *(float*)(*(_QWORD*)(*(_QWORD*)result + 304LL) +
                4LL * *(unsigned int*)(*(_QWORD*)(*(_QWORD*)result + 968LL) +
                                       8LL * *(unsigned int*)(a1 + 376)) +
                4 * v5) = a3;
      return (_BYTE*)GameRoutine_312ec0();
    }
  }
  return result;
}

_BYTE* GameHr_310940(__int64 a1, unsigned int a2, float a3)
{
  _BYTE* result;
  __int64 v5;

  *(float*)(a1 + 4LL * a2 + 272) = a3;
  result = **(_BYTE***)(a1 + 360);
  if (result != nullptr && result[148] == 1) {
    v5 = *(unsigned __int8*)(a1 + a2 + 344);
    if (v5 != 255) {
      *(float*)(*(_QWORD*)(*(_QWORD*)result + 256LL) +
                4LL * *(unsigned int*)(*(_QWORD*)(*(_QWORD*)result + 968LL) +
                                       8LL * *(unsigned int*)(a1 + 376)) +
                4 * v5) = a3;
      return (_BYTE*)GameRoutine_312ec0();
    }
  }
  return result;
}

_BYTE* GameHr_310a10(__int64 a1, unsigned int a2, float a3)
{
  _BYTE* result;
  __int64 v5;

  *(float*)(a1 + 4LL * a2 + 296) = a3;
  result = **(_BYTE***)(a1 + 360);
  if (result != nullptr && result[148] == 1) {
    v5 = *(unsigned __int8*)(a1 + a2 + 344);
    if (v5 != 255) {
      *(float*)(*(_QWORD*)(*(_QWORD*)result + 224LL) +
                4LL * *(unsigned int*)(*(_QWORD*)(*(_QWORD*)result + 968LL) +
                                       8LL * *(unsigned int*)(a1 + 376)) +
                4 * v5) = a3;
      return (_BYTE*)GameRoutine_312ec0();
    }
  }
  return result;
}

__int64 GameHr_310ae0(__int64 a1, unsigned int a2, _QWORD* a3)
{
  __int64 result;
  _BYTE* v5;

  *(_QWORD*)(a1 + 8LL * a2 + 56) = *a3;
  result = *(_QWORD*)(a1 + 352);
  if (result != 0) {
    result = GameRoutine_311070();
  }
  v5 = **(_BYTE***)(a1 + 360);
  if (v5 != nullptr && v5[148] == 1) {
    *(_BYTE*)(*(_QWORD*)v5 + 1268LL) = 1;
  }
  return result;
}

__int64 GameHr_310b40(__int64 a1, unsigned int a2, _QWORD* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 result;
  _BYTE* v7;

  v3 = a3[1];
  v4 = a1 + 16LL * a2;
  *(_QWORD*)(v4 + 104) = *a3;
  *(_QWORD*)(v4 + 112) = v3;
  result = *(_QWORD*)(a1 + 352);
  if (result != 0) {
    result = GameRoutine_311070();
  }
  v7 = **(_BYTE***)(a1 + 360);
  if (v7 != nullptr && v7[148] == 1) {
    *(_BYTE*)(*(_QWORD*)v7 + 1268LL) = 1;
  }
  return result;
}

__int64 GameHr_310ba0(__int64 a1, float a2)
{
  __int64 result;
  _BYTE* v4;

  *(float*)(a1 + 320) = a2;
  result = *(_QWORD*)(a1 + 352);
  if (result != 0) {
    result = GameRoutine_311070();
  }
  v4 = **(_BYTE***)(a1 + 360);
  if (v4 != nullptr && v4[148] == 1) {
    *(_BYTE*)(*(_QWORD*)v4 + 1268LL) = 1;
  }
  return result;
}

__int64 GameHr_310bf0(__int64 a1, float a2)
{
  __int64 result;
  _BYTE* v4;

  *(float*)(a1 + 324) = a2;
  result = *(_QWORD*)(a1 + 352);
  if (result != 0) {
    result = GameRoutine_311070();
  }
  v4 = **(_BYTE***)(a1 + 360);
  if (v4 != nullptr && v4[148] == 1) {
    *(_BYTE*)(*(_QWORD*)v4 + 1268LL) = 1;
  }
  return result;
}

float GameHr_310c40(__int64 a1, __int64 a2, __int64 a3)
{
  int v3;
  __int64 v4;
  int v5;
  int v6;
  float result;
  int v8;

  *(_QWORD*)(a1 + 16) = *(_QWORD*)(a2 + 16);
  *(_DWORD*)(a1 + 24) = *(_DWORD*)(a2 + 24);
  v3 = *(_DWORD*)(a2 + 4);
  *(_DWORD*)a1 = *(_DWORD*)a2;
  *(_DWORD*)(a1 + 4) = v3;
  v4 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 8) = v4;
  v5 = *(_DWORD*)(a3 + 20);
  *(_DWORD*)(a1 + 44) = *(_DWORD*)(a3 + 16);
  *(_DWORD*)(a1 + 48) = v5;
  *(_DWORD*)(a1 + 52) = *(_DWORD*)(a3 + 24);
  v6 = *(_DWORD*)(a3 + 4);
  *(_DWORD*)(a1 + 28) = *(_DWORD*)a3;
  *(_DWORD*)(a1 + 32) = v6;
  result = *(float*)(a3 + 8);
  v8 = *(_DWORD*)(a3 + 12);
  *(_WORD*)(a1 + 350) = 1281;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_WORD*)(a1 + 338) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_BYTE*)(a1 + 334) = -1;
  *(_BYTE*)(a1 + 346) = -1;
  *(_DWORD*)(a1 + 340) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_BYTE*)(a1 + 335) = -1;
  *(_BYTE*)(a1 + 347) = -1;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_BYTE*)(a1 + 336) = -1;
  *(_BYTE*)(a1 + 348) = -1;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_BYTE*)(a1 + 337) = -1;
  *(_BYTE*)(a1 + 349) = -1;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 320) = 0x42C800003D4CCCCDLL;
  *(_DWORD*)(a1 + 112) = 0;
  *(_DWORD*)(a1 + 116) = 4;
  *(_WORD*)(a1 + 332) = -1;
  *(_WORD*)(a1 + 344) = -1;
  *(float*)(a1 + 36) = result;
  *(_DWORD*)(a1 + 40) = v8;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0x400000000LL;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0x400000000LL;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0x400000000LL;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0x400000000LL;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0x400000000LL;
  return result;
}

__int64 GameHr_311010(_QWORD* a1)
{
  __int64 result;

  GameRoutine_30ff40(*a1, a1);
  result = GameRoutine_30ff40(a1[1], a1);
  *(_QWORD*)(a1[4] + 352LL) = 0;
  return result;
}

__int64 GameHr_311da0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int* v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int8* v20;
  __int64 v21;
  __int64 v22;
  _DWORD* v23;
  _DWORD* v24;
  _DWORD* v25;
  int v26;
  _DWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v45;

  v1 = *a1;
  GameRoutine_333420(*a1, *a1 + 128LL);
  v45 = *a1;
  *(_BYTE*)(*a1 + 1268LL) = 0;
  v3 = *(unsigned int*)(v1 + 936);
  if ((unsigned int)v3 >= 2) {
    v4 = *(_QWORD*)(v1 + 288);
    v5 = *(_QWORD*)(v1 + 224);
    v6 = *(_QWORD*)(v1 + 304);
    v7 = 1;
    v8 = *(_QWORD*)(v1 + 256);
    v9 = *(_QWORD*)(v1 + 928);
    v10 = *(_QWORD*)(v1 + 968);
    do {
      v11 = (unsigned int*)(v10 + 8 * v7);
      v12 = *((unsigned __int8*)v11 + 4);
      if (*((_BYTE*)v11 + 4) != 0) {
        v13 = *v11;
        v14 = *(_QWORD*)(v9 + 40 * v7 + 24);
        v15 = v14 + 272;
        v16 = v14 + 296;
        v17 = v14 + 200;
        v18 = v14 + 224;
        if (v12 >= 8) {
          v20 = (unsigned __int8*)(v14 + 339);
          v21 = 0;
          v19 = 0;
          do {
            v22 = *(v20 - 7);
            v23 = (_DWORD*)(v8 + 16 + 4 * v13 + v21);
            v24 = (_DWORD*)(v5 + 16 + 4 * v13 + v21);
            v25 = (_DWORD*)(v4 + 16 + 4 * v13 + v21);
            v19 += 8;
            *(v23 - 4) = *(_DWORD*)(v15 + 4 * v22);
            *(v24 - 4) = *(_DWORD*)(v16 + 4 * v22);
            *(v25 - 4) = *(_DWORD*)(v17 + 4 * v22);
            v26 = *(_DWORD*)(v18 + 4 * v22);
            v27 = (_DWORD*)(v6 + 28 + 4 * v13 + v21);
            v21 += 32;
            *(v27 - 7) = v26;
            v28 = *(v20 - 6);
            *(v23 - 3) = *(_DWORD*)(v15 + 4 * v28);
            *(v24 - 3) = *(_DWORD*)(v16 + 4 * v28);
            *(v25 - 3) = *(_DWORD*)(v17 + 4 * v28);
            *(v27 - 6) = *(_DWORD*)(v18 + 4 * v28);
            v29 = *(v20 - 5);
            *(v23 - 2) = *(_DWORD*)(v15 + 4 * v29);
            *(v24 - 2) = *(_DWORD*)(v16 + 4 * v29);
            *(v25 - 2) = *(_DWORD*)(v17 + 4 * v29);
            *(v27 - 5) = *(_DWORD*)(v18 + 4 * v29);
            v30 = *(v20 - 4);
            *(v23 - 1) = *(_DWORD*)(v15 + 4 * v30);
            *(v24 - 1) = *(_DWORD*)(v16 + 4 * v30);
            *(v25 - 1) = *(_DWORD*)(v17 + 4 * v30);
            *(v27 - 4) = *(_DWORD*)(v18 + 4 * v30);
            v31 = *(v20 - 3);
            *v23 = *(_DWORD*)(v15 + 4 * v31);
            *v24 = *(_DWORD*)(v16 + 4 * v31);
            *v25 = *(_DWORD*)(v17 + 4 * v31);
            *(v27 - 3) = *(_DWORD*)(v18 + 4 * v31);
            v32 = *(v20 - 2);
            v23[1] = *(_DWORD*)(v15 + 4 * v32);
            v24[1] = *(_DWORD*)(v16 + 4 * v32);
            v25[1] = *(_DWORD*)(v17 + 4 * v32);
            *(v27 - 2) = *(_DWORD*)(v18 + 4 * v32);
            v33 = *(v20 - 1);
            v23[2] = *(_DWORD*)(v15 + 4 * v33);
            v24[2] = *(_DWORD*)(v16 + 4 * v33);
            v25[2] = *(_DWORD*)(v17 + 4 * v33);
            *(v27 - 1) = *(_DWORD*)(v18 + 4 * v33);
            v34 = *v20;
            v20 += 8;
            v23[3] = *(_DWORD*)(v15 + 4LL * v34);
            v24[3] = *(_DWORD*)(v16 + 4LL * v34);
            v25[3] = *(_DWORD*)(v17 + 4LL * v34);
            *v27 = *(_DWORD*)(v18 + 4LL * v34);
          } while (((4 * (_WORD)v12) & 0x3E0) != v21);
        }
        else {
          v19 = 0;
        }
        v35 = v12 & 7;
        if ((v12 & 7) != 0) {
          v36 = 0;
          v37 = 4 * v19 + 4 * v13;
          v38 = v14 + v19 + 332;
          v39 = v6 + v37;
          v40 = v4 + v37;
          v41 = v5 + v37;
          v42 = v8 + v37;
          do {
            v43 = *(unsigned __int8*)(v38 + v36);
            *(_DWORD*)(v42 + 4 * v36) = *(_DWORD*)(v15 + 4 * v43);
            *(_DWORD*)(v41 + 4 * v36) = *(_DWORD*)(v16 + 4 * v43);
            *(_DWORD*)(v40 + 4 * v36) = *(_DWORD*)(v17 + 4 * v43);
            *(_DWORD*)(v39 + 4 * v36++) = *(_DWORD*)(v18 + 4 * v43);
          } while (v35 != v36);
        }
      }
      ++v7;
    } while (v7 != v3);
  }
  *(_DWORD*)(v45 + 1264) |= 0x3006u;
  return GameRoutine_320e80();
}

float GameHr_312140(__int64 a1, unsigned int a2)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  unsigned int* v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int8* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _DWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  unsigned int v27;
  float result;
  __int64 v29;
  float* v30;
  int* v31;
  unsigned __int8* v32;
  int v33;
  int v34;
  __int64 v35;
  unsigned int v36;
  float v37;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = *(_QWORD**)a1;
  v3 = (unsigned int*)(*(_QWORD*)(*(_QWORD*)a1 + 968LL) + 8LL * a2);
  v4 = *((unsigned __int8*)v3 + 4);
  if (*((_BYTE*)v3 + 4) != 0) {
    v5 = v2[28];
    v6 = v2[32];
    v7 = *v3;
    v8 = v4 & 7;
    v9 = *(_QWORD*)(v2[116] + 40LL * a2 + 24);
    v10 = v9 + 272;
    v11 = v9 + 296;
    if (v4 < 8) {
      v12 = 0;
      if ((v4 & 7) == 0) {
        return result;
      }
      goto LABEL_8;
    }
    v13 = (unsigned __int8*)(v9 + 339);
    v14 = 0;
    v15 = 4 * v7 + 16;
    v16 = -(__int64)((unsigned __int8)v4 & 0xF8);
    v17 = v5 + v15;
    v18 = (_DWORD*)(v6 + v15);
    do {
      v19 = *(v13 - 7);
      v14 -= 8;
      *(_DWORD*)(v10 + 4 * v19) = *(v18 - 4);
      *(_DWORD*)(v11 + 4 * v19) = *(_DWORD*)(v17 - 16);
      v20 = *(v13 - 6);
      *(_DWORD*)(v10 + 4 * v20) = *(v18 - 3);
      *(_DWORD*)(v11 + 4 * v20) = *(_DWORD*)(v17 - 12);
      v21 = *(v13 - 5);
      *(_DWORD*)(v10 + 4 * v21) = *(v18 - 2);
      *(_DWORD*)(v11 + 4 * v21) = *(_DWORD*)(v17 - 8);
      v22 = *(v13 - 4);
      *(_DWORD*)(v10 + 4 * v22) = *(v18 - 1);
      *(_DWORD*)(v11 + 4 * v22) = *(_DWORD*)(v17 - 4);
      v23 = *(v13 - 3);
      *(_DWORD*)(v10 + 4 * v23) = *v18;
      *(_DWORD*)(v11 + 4 * v23) = *(_DWORD*)v17;
      v24 = *(v13 - 2);
      *(_DWORD*)(v10 + 4 * v24) = v18[1];
      *(_DWORD*)(v11 + 4 * v24) = *(_DWORD*)(v17 + 4);
      v25 = *(v13 - 1);
      *(_DWORD*)(v10 + 4 * v25) = v18[2];
      *(_DWORD*)(v11 + 4 * v25) = *(_DWORD*)(v17 + 8);
      v26 = v18[3];
      v27 = *v13;
      v13 += 8;
      v18 += 8;
      *(_DWORD*)(v10 + 4LL * v27) = v26;
      result = *(float*)(v17 + 12);
      v17 += 32;
      *(float*)(v11 + 4LL * v27) = result;
    } while (v16 != v14);
    v12 = -v14;
    if (v8 != 0) {
    LABEL_8:
      v29 = 4 * v12 + 4 * v7;
      v30 = (float*)(v5 + v29);
      v31 = (int*)(v6 + v29);
      v32 = (unsigned __int8*)(v12 + v9 + 332);
      do {
        v33 = *v31++;
        v34 = v33;
        v36 = *v32++;
        v35 = v36;
        --v8;
        *(_DWORD*)(v10 + 4LL * v36) = v34;
        v37 = *v30++;
        result = v37;
        *(float*)(v11 + 4 * v35) = v37;
      } while (v8 != 0);
    }
  }
  return result;
}

_QWORD* GameHr_312380(__int64 a1)
{
  unsigned int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;

  v1 = *(_DWORD*)(a1 + 32);
  if (v1 != 0) {
    v2 = *(_QWORD*)(a1 + 40);
    v3 = v1 & 3;
    if (v1 < 4) {
      v4 = 0;
      if ((v1 & 3) == 0) {
        return X8CALL_X0(
            _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD,
                                                             _QWORD, __int64))(
                         **(_QWORD**)(*(_QWORD*)(a1 + 8) + 368LL) + 152LL))(
                         (void*)*(_QWORD**)(*(_QWORD*)(a1 + 8) + 368LL),
                         *(_QWORD*)(*(_QWORD*)(a1 + 8) + 368LL), *(_QWORD*)a1,
                         a1 + 120));
      }
      goto LABEL_8;
    }
    v5 = (__int64*)(v2 + 16);
    v6 = 0;
    v7 = -(__int64)(v1 & 0xFFFFFFFC);
    do {
      v8 = *(v5 - 2);
      v6 -= 4;
      v9 = *(_QWORD*)(v8 + 80);
      *(_QWORD*)(v9 + 80) = 0;
      *(_QWORD*)(v9 + 100) = 0;
      *(_DWORD*)(v9 + 156) = 0;
      *(_DWORD*)(v9 + 88) = 0;
      *(_DWORD*)(v9 + 96) = 0;
      *(_WORD*)(v8 + 140) &= 0xFFE1u;
      v10 = *(v5 - 1);
      v11 = *v5;
      *(_WORD*)(v10 + 140) &= 0xFFE1u;
      v12 = *(_QWORD*)(v10 + 80);
      *(_DWORD*)(v12 + 156) = 0;
      *(_QWORD*)(v12 + 80) = 0;
      *(_DWORD*)(v12 + 88) = 0;
      *(_QWORD*)(v12 + 96) = 0;
      *(_DWORD*)(v12 + 104) = 0;
      v13 = *(_QWORD*)(v11 + 80);
      *(_DWORD*)(v13 + 156) = 0;
      *(_QWORD*)(v13 + 80) = 0;
      *(_DWORD*)(v13 + 88) = 0;
      *(_QWORD*)(v13 + 96) = 0;
      *(_DWORD*)(v13 + 104) = 0;
      *(_WORD*)(v11 + 140) &= 0xFFE1u;
      v14 = v5[1];
      v5 += 4;
      v15 = *(_QWORD*)(v14 + 80);
      *(_DWORD*)(v15 + 156) = 0;
      *(_QWORD*)(v15 + 80) = 0;
      *(_DWORD*)(v15 + 88) = 0;
      *(_QWORD*)(v15 + 96) = 0;
      *(_DWORD*)(v15 + 104) = 0;
      *(_WORD*)(v14 + 140) &= 0xFFE1u;
    } while (v7 != v6);
    v4 = -v6;
    if (v3 != 0) {
    LABEL_8:
      v16 = (__int64*)(v2 + 8 * v4);
      do {
        v17 = *v16++;
        --v3;
        v18 = *(_QWORD*)(v17 + 80);
        *(_QWORD*)(v18 + 80) = 0;
        *(_QWORD*)(v18 + 96) = 0;
        *(_DWORD*)(v18 + 156) = 0;
        *(_DWORD*)(v18 + 88) = 0;
        *(_DWORD*)(v18 + 104) = 0;
        *(_WORD*)(v17 + 140) &= 0xFFE1u;
      } while (v3 != 0);
    }
  }
  return X8CALL_X0(_QWORD*,
                   (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD,
                                                           _QWORD, __int64))(
                       **(_QWORD**)(*(_QWORD*)(a1 + 8) + 368LL) + 152LL))(
                       (void*)*(_QWORD**)(*(_QWORD*)(a1 + 8) + 368LL),
                       *(_QWORD*)(*(_QWORD*)(a1 + 8) + 368LL), *(_QWORD*)a1,
                       a1 + 120));
}

__int64 GameHr_314ac0(__int64 result, __int64 a2)
{
  unsigned int v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  int i;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;

  if (*(_DWORD*)(result + 16) != (_DWORD)a2) {
    v2 = a2;
    v3 = result;
    result = GameRoutine_3169c0(result, a2);
    v4 = *(_DWORD*)(v3 + 16);
    v5 = v4 - v2;
    if (v4 < v2) {
      for (i = ((_BYTE)v2 - (_BYTE)v4) & 7; i != 0;
           *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * v7) + 8LL * v8) =
               0xFFFFFFFFLL) {
        v7 = v4 >> 12;
        v8 = v4++ & 0xFFF;
        --i;
      }
      if (v5 <= 0xFFFFFFF8) {
        v9 = v4 + 7;
        do {
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 7) >> 12)) +
                     8LL * ((v9 - 7) & 0xFFF)) = 0xFFFFFFFFLL;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 6) >> 12)) +
                     8LL * ((v9 - 6) & 0xFFF)) = 0xFFFFFFFFLL;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 5) >> 12)) +
                     8LL * ((v9 - 5) & 0xFFF)) = 0xFFFFFFFFLL;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 4) >> 12)) +
                     8LL * ((v9 - 4) & 0xFFF)) = 0xFFFFFFFFLL;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 3) >> 12)) +
                     8LL * ((v9 - 3) & 0xFFF)) = 0xFFFFFFFFLL;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 2) >> 12)) +
                     8LL * ((v9 - 2) & 0xFFF)) = 0xFFFFFFFFLL;
          v10 = v9 & 0xFFF;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 1) >> 12)) +
                     8LL * ((v9 - 1) & 0xFFF)) = 0xFFFFFFFFLL;
          v11 = v9 >> 12;
          v9 += 8;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * v11) + 8LL * v10) =
              0xFFFFFFFFLL;
        } while (v9 - v2 != 7);
      }
    }
    *(_DWORD*)(v3 + 16) = v2;
  }
  return result;
}

__int64 GameHr_314c20(__int64 result, __int64 a2)
{
  unsigned int v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  int i;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;

  if (*(_DWORD*)(result + 16) != (_DWORD)a2) {
    v2 = a2;
    v3 = result;
    result = GameRoutine_316cc0(result, a2);
    v4 = *(_DWORD*)(v3 + 16);
    v5 = v4 - v2;
    if (v4 < v2) {
      for (i = ((_BYTE)v2 - (_BYTE)v4) & 7; i != 0;
           *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * v7) + 8LL * v8) = 0) {
        v7 = v4 >> 12;
        v8 = v4++ & 0xFFF;
        --i;
      }
      if (v5 <= 0xFFFFFFF8) {
        v9 = v4 + 7;
        do {
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 7) >> 12)) +
                     8LL * ((v9 - 7) & 0xFFF)) = 0;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 6) >> 12)) +
                     8LL * ((v9 - 6) & 0xFFF)) = 0;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 5) >> 12)) +
                     8LL * ((v9 - 5) & 0xFFF)) = 0;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 4) >> 12)) +
                     8LL * ((v9 - 4) & 0xFFF)) = 0;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 3) >> 12)) +
                     8LL * ((v9 - 3) & 0xFFF)) = 0;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 2) >> 12)) +
                     8LL * ((v9 - 2) & 0xFFF)) = 0;
          v10 = v9 & 0xFFF;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 1) >> 12)) +
                     8LL * ((v9 - 1) & 0xFFF)) = 0;
          v11 = v9 >> 12;
          v9 += 8;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * v11) + 8LL * v10) = 0;
        } while (v9 - v2 != 7);
      }
    }
    *(_DWORD*)(v3 + 16) = v2;
  }
  return result;
}

__int64 GameHr_314d80(__int64 result, __int64 a2)
{
  unsigned int v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  int i;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;

  if (*(_DWORD*)(result + 16) != (_DWORD)a2) {
    v2 = a2;
    v3 = result;
    result = GameRoutine_317080(result, a2);
    v4 = *(_DWORD*)(v3 + 16);
    v5 = v4 - v2;
    if (v4 < v2) {
      for (i = ((_BYTE)v2 - (_BYTE)v4) & 7; i != 0;
           *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * v7) + 8LL * v8) = 0) {
        v7 = v4 >> 12;
        v8 = v4++ & 0xFFF;
        --i;
      }
      if (v5 <= 0xFFFFFFF8) {
        v9 = v4 + 7;
        do {
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 7) >> 12)) +
                     8LL * ((v9 - 7) & 0xFFF)) = 0;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 6) >> 12)) +
                     8LL * ((v9 - 6) & 0xFFF)) = 0;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 5) >> 12)) +
                     8LL * ((v9 - 5) & 0xFFF)) = 0;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 4) >> 12)) +
                     8LL * ((v9 - 4) & 0xFFF)) = 0;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 3) >> 12)) +
                     8LL * ((v9 - 3) & 0xFFF)) = 0;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 2) >> 12)) +
                     8LL * ((v9 - 2) & 0xFFF)) = 0;
          v10 = v9 & 0xFFF;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 1) >> 12)) +
                     8LL * ((v9 - 1) & 0xFFF)) = 0;
          v11 = v9 >> 12;
          v9 += 8;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * v11) + 8LL * v10) = 0;
        } while (v9 - v2 != 7);
      }
    }
    *(_DWORD*)(v3 + 16) = v2;
  }
  return result;
}

__int64 GameHr_3186e0(__int64 result, __int64 a2)
{
  unsigned int v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  int i;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;

  if (*(_DWORD*)(result + 16) != (_DWORD)a2) {
    v2 = a2;
    v3 = result;
    result = GameRoutine_31a3c0(result, a2);
    v4 = *(_DWORD*)(v3 + 16);
    v5 = v4 - v2;
    if (v4 < v2) {
      for (i = ((_BYTE)v2 - (_BYTE)v4) & 7; i != 0;
           *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * v7) + 8LL * v8) = -1) {
        v7 = v4 >> 12;
        v8 = v4++ & 0xFFF;
        --i;
      }
      if (v5 <= 0xFFFFFFF8) {
        v9 = v4 + 7;
        do {
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 7) >> 12)) +
                     8LL * ((v9 - 7) & 0xFFF)) = -1;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 6) >> 12)) +
                     8LL * ((v9 - 6) & 0xFFF)) = -1;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 5) >> 12)) +
                     8LL * ((v9 - 5) & 0xFFF)) = -1;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 4) >> 12)) +
                     8LL * ((v9 - 4) & 0xFFF)) = -1;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 3) >> 12)) +
                     8LL * ((v9 - 3) & 0xFFF)) = -1;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 2) >> 12)) +
                     8LL * ((v9 - 2) & 0xFFF)) = -1;
          v10 = v9 & 0xFFF;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * ((v9 - 1) >> 12)) +
                     8LL * ((v9 - 1) & 0xFFF)) = -1;
          v11 = v9 >> 12;
          v9 += 8;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL * v11) + 8LL * v10) = -1;
        } while (v9 - v2 != 7);
      }
    }
    *(_DWORD*)(v3 + 16) = v2;
  }
  return result;
}

_DWORD* GameHr_320e80(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 i;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _DWORD* result;
  __int64 v13;
  __int64 v14;
  unsigned int* v15;
  int v16;
  _DWORD* v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  int v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  int v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned int* v37;
  int v38;
  _DWORD* v39;
  __int64 v40;
  int v41;
  unsigned int* v42;
  int v43;
  _DWORD* v44;
  __int64 v45;
  int v46;

  v1 = *(_QWORD*)(a1 + 928);
  v2 = *(unsigned int*)(a1 + 936);
  *(_WORD*)(v1 + 8) = 0;
  *(_DWORD*)v1 = 0;
  if ((unsigned int)v2 < 2) {
    v6 = 1;
    goto LABEL_13;
  }
  v4 = (v2 - 1) & 3;
  if ((unsigned __int64)(v2 - 2) >= 3) {
    v5 = 1;
    v6 = 1;
    v20 = 0;
    while (1) {
      v23 = v1 + 40 * v5;
      v24 = *(unsigned int*)(v23 + 32);
      if ((_DWORD)v24 != 0) {
        v25 = 1;
        do {
          ++v25;
          LODWORD(v24) = *(_DWORD*)(v1 + 40 * v24 + 32);
        } while ((_DWORD)v24 != 0);
        v26 = v1 + 40 * v5;
        *(_DWORD*)v23 = v6;
        *(_WORD*)(v23 + 8) = v25;
        v27 = *(unsigned int*)(v26 + 72);
        if ((_DWORD)v27 == 0) {
        LABEL_39:
          v28 = 1;
          v29 = v25 + v6;
          *(_WORD*)(v26 + 48) = 1;
          *(_DWORD*)(v26 + 40) = v25 + v6;
          v30 = v1 + 40 * v5;
          v31 = *(unsigned int*)(v30 + 112);
          if ((_DWORD)v31 == 0) {
            goto LABEL_40;
          }
          goto LABEL_34;
        }
      }
      else {
        v25 = 1;
        v26 = v1 + 40 * v5;
        *(_DWORD*)v23 = v6;
        *(_WORD*)(v23 + 8) = 1;
        v27 = *(unsigned int*)(v26 + 72);
        if ((_DWORD)v27 == 0) {
          goto LABEL_39;
        }
      }
      v28 = 1;
      do {
        ++v28;
        LODWORD(v27) = *(_DWORD*)(v1 + 40 * v27 + 32);
      } while ((_DWORD)v27 != 0);
      v29 = v25 + v6;
      *(_WORD*)(v26 + 48) = v28;
      *(_DWORD*)(v26 + 40) = v25 + v6;
      v30 = v1 + 40 * v5;
      v31 = *(unsigned int*)(v30 + 112);
      if ((_DWORD)v31 == 0) {
      LABEL_40:
        v32 = 1;
        v33 = v28 + v29;
        v34 = v1 + 40 * v5;
        *(_WORD*)(v30 + 88) = 1;
        *(_DWORD*)(v30 + 80) = v33;
        v35 = *(unsigned int*)(v34 + 152);
        if ((_DWORD)v35 != 0) {
          goto LABEL_41;
        }
        goto LABEL_25;
      }
    LABEL_34:
      v32 = 1;
      do {
        ++v32;
        LODWORD(v31) = *(_DWORD*)(v1 + 40 * v31 + 32);
      } while ((_DWORD)v31 != 0);
      v33 = v28 + v29;
      v34 = v1 + 40 * v5;
      *(_WORD*)(v30 + 88) = v32;
      *(_DWORD*)(v30 + 80) = v33;
      v35 = *(unsigned int*)(v34 + 152);
      if ((_DWORD)v35 != 0) {
      LABEL_41:
        v21 = 1;
        do {
          ++v21;
          LODWORD(v35) = *(_DWORD*)(v1 + 40 * v35 + 32);
        } while ((_DWORD)v35 != 0);
        goto LABEL_26;
      }
    LABEL_25:
      v21 = 1;
    LABEL_26:
      v22 = v32 + v33;
      v5 += 4;
      v20 += 4;
      *(_WORD*)(v34 + 128) = v21;
      v6 = v21 + v22;
      *(_DWORD*)(v34 + 120) = v22;
      if (v20 == ((v2 - 1) & 0xFFFFFFFFFFFFFFFCLL)) {
        goto LABEL_4;
      }
    }
  }
  v5 = 1;
  v6 = 1;
LABEL_4:
  if (v4 != 0) {
    for (i = 0; i != v4; ++i) {
      v9 = v1 + 40 * v5;
      v10 = *(unsigned int*)(v9 + 32);
      if ((_DWORD)v10 != 0) {
        v8 = 1;
        do {
          ++v8;
          LODWORD(v10) = *(_DWORD*)(v1 + 40 * v10 + 32);
        } while ((_DWORD)v10 != 0);
      }
      else {
        v8 = 1;
      }
      *(_DWORD*)v9 = v6;
      v6 += v8;
      ++v5;
      *(_WORD*)(v9 + 8) = v8;
    }
  }
LABEL_13:
  if (*(_DWORD*)(a1 + 952) >= v6) {
    result = *(_DWORD**)(a1 + 944);
    *result = 0;
    if ((unsigned int)v2 < 2) {
      return result;
    }
  }
  else {
    v11 = GameRoutine_55af80(0);
    result = (_DWORD*)(*(__int64 (**)(__int64, __int64, char*, const char*,
                                      __int64))(*(_QWORD*)v11 + 16LL))(
        v11, 4LL * v6, &GameData_1a9f09e,
        "/Inside/Lib/PhysX/O/physx/source/lowleveldynamics/src/"
        "DyFeatherstoneArticulation.cpp",
        366);
    *(_QWORD*)(a1 + 944) = result;
    *(_DWORD*)(a1 + 952) = v6;
    *result = 0;
    if ((unsigned int)v2 < 2) {
      return result;
    }
  }
  v13 = v2 - 1;
  if ((_DWORD)v2 == 2) {
    v14 = 1;
  }
  else {
    v14 = 1;
    v36 = 0;
    do {
      v37 = (unsigned int*)(v1 + 40 * v14);
      v38 = *((unsigned __int16*)v37 + 4);
      v39 = &result[*v37];
      v39[v38 - 1] = v14;
      v40 = v37[8];
      if ((_DWORD)v40 != 0) {
        v41 = v38 - 2;
        do {
          v39[v41--] = v40;
          v40 = *(unsigned int*)(v1 + 40 * v40 + 32);
        } while ((_DWORD)v40 != 0);
      }
      v42 = (unsigned int*)(v1 + 40 * (v14 + 1));
      v43 = *((unsigned __int16*)v42 + 4);
      v44 = &result[*v42];
      v44[v43 - 1] = v14 + 1;
      v45 = v42[8];
      if ((_DWORD)v45 != 0) {
        v46 = v43 - 2;
        do {
          v44[v46--] = v45;
          v45 = *(unsigned int*)(v1 + 40 * v45 + 32);
        } while ((_DWORD)v45 != 0);
      }
      v14 += 2;
      v36 += 2;
    } while (v36 != (v13 & 0xFFFFFFFFFFFFFFFELL));
  }
  if ((v13 & 1) != 0) {
    v15 = (unsigned int*)(v1 + 40 * v14);
    v16 = *((unsigned __int16*)v15 + 4);
    v17 = &result[*v15];
    v17[v16 - 1] = v14;
    v18 = v15[8];
    if ((_DWORD)v18 != 0) {
      v19 = v16 - 2;
      do {
        v17[v19--] = v18;
        v18 = *(unsigned int*)(v1 + 40 * v18 + 32);
      } while ((_DWORD)v18 != 0);
    }
  }
  return result;
}

float GameHr_327c40(__int64 a1, float result)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;

  v2 = *(_DWORD*)(a1 + 936);
  if (v2 != 0) {
    v3 = *(_QWORD*)(a1 + 336);
    if (v2 == 1) {
      v4 = 0;
    LABEL_7:
      v19 = v3 + 32 * v4;
      v20 = *(float*)v19;
      v21 = *(float*)(v19 + 4);
      v22 = *(float*)(v19 + 8);
      v23 = *(float*)(v19 + 16);
      v24 = *(float*)(v19 + 20);
      v25 = *(float*)(v19 + 24);
      *(_DWORD*)(v19 + 12) = 0;
      *(_DWORD*)(v19 + 28) = 0;
      v26 = v20 * result;
      v27 = v21 * result;
      v28 = v22 * result;
      v29 = v23 * result;
      v30 = v24 * result;
      result = v25 * result;
      *(float*)v19 = v26;
      *(float*)(v19 + 4) = v27;
      *(float*)(v19 + 8) = v28;
      *(float*)(v19 + 16) = v29;
      *(float*)(v19 + 20) = v30;
      *(float*)(v19 + 24) = result;
      return result;
    }
    v5 = v3 + 32;
    v6 = 0;
    do {
      v6 -= 2;
      v7 = *(float*)(v5 - 32) * result;
      v8 = *(float*)(v5 - 28) * result;
      v9 = *(float*)(v5 - 24) * result;
      v10 = *(float*)(v5 - 16) * result;
      v11 = *(float*)(v5 - 12) * result;
      v12 = *(float*)(v5 - 8) * result;
      *(_DWORD*)(v5 - 20) = 0;
      *(_DWORD*)(v5 - 4) = 0;
      *(_DWORD*)(v5 + 12) = 0;
      *(_DWORD*)(v5 + 28) = 0;
      *(float*)(v5 - 32) = v7;
      *(float*)(v5 - 28) = v8;
      v13 = *(float*)v5;
      v14 = *(float*)(v5 + 4);
      *(float*)(v5 - 24) = v9;
      v15 = *(float*)(v5 + 8);
      *(float*)(v5 - 16) = v10;
      *(float*)(v5 - 12) = v11;
      *(float*)(v5 - 8) = v12;
      v16 = *(float*)(v5 + 24);
      v17 = *(float*)(v5 + 16) * result;
      v18 = *(float*)(v5 + 20) * result;
      *(float*)v5 = v13 * result;
      *(float*)(v5 + 4) = v14 * result;
      *(float*)(v5 + 8) = v15 * result;
      *(float*)(v5 + 16) = v17;
      *(float*)(v5 + 20) = v18;
      *(float*)(v5 + 24) = v16 * result;
      v5 += 64;
    } while (-(__int64)(v2 & 0xFFFFFFFE) != v6);
    v4 = -v6;
    if ((v2 & 1) != 0) {
      goto LABEL_7;
    }
  }
  return result;
}

__int64 GameHr_32c380(__int64 result, __int64 a2, double a3, double a4,
                      double a5, double a6, double a7, double a8, float a9)
{
  float v9;
  float v10;
  float v11;
  float v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  float v16;
  __int64 v17;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  float* v23;
  float v24;
  float v25;
  long double v26;
  bool v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float* v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  __int64 v68;
  unsigned int* v69;
  __int64 v70;
  float* v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float* v79;
  float v80;
  float v81;
  float v82;
  float v83;
  __int64 v84;
  float v85;
  float v86;
  int v87;
  unsigned int v88;
  __int64 v89;
  float v90;
  float v91;
  __int64 v92;
  float v93;
  float v94;
  float* v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float* v106;
  unsigned int v107;
  float v108;
  float v109;
  float* v110;
  float v111;
  float v112;
  float v113;
  float* v114;
  float v115;
  float v116;
  float v117;
  float v118;
  float v119;
  float v120;
  float* v121;
  float v122;
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float* v132;
  float v133;
  float v134;
  float v135;
  float v136;
  float v137;
  float* v138;
  float v139;
  float v140;
  float v141;
  float v142;
  float v143;
  float v144;
  float v145;
  float* v146;
  float v147;
  float v148;
  float v149;
  float v150;
  float* v151;
  float* v152;
  float v153;
  float v154;
  float v155;
  float v156;
  float v157;
  __int64 v158;
  __int64 v159;
  unsigned int v160;
  float* v161;
  float* v162;
  float v163;
  __int64 v164;
  float v165;
  float v166;
  float v167;
  float v168;
  long double v169;
  float v170;
  float v171;
  float v172;
  float v173;
  float v174;
  float v175;
  float v176;
  float v177;
  float v178;
  float v179;
  float v180;
  float v181;
  float v182;
  float v183;
  float v184;
  float v185;
  float v186;
  float v187;
  __int64 v188;
  float v189;
  float v190;
  float v191;
  float v192;
  float v193;
  float v194;
  float v195;
  float v196;
  float v197;
  float v198;
  float v199;
  float v200;
  float v201;
  float v202;
  float v203;
  float v204;
  float v205;
  float v206;
  float v207;
  float v208;
  float v209;
  float v210;
  float v211;
  float v212;
  float v213;
  float v214;
  float v215;

  v13 = *(unsigned int*)(result + 936);
  if ((unsigned int)v13 >= 2) {
    v14 = *(_QWORD*)(result + 928);
    v15 = *(_QWORD*)(result + 968);
    v16 = -0.5;
    v17 = 1;
    v19 = result;
    v188 = *(_QWORD*)(a2 + 128);
    do {
      v68 = v14 + 40 * v17;
      v69 = (unsigned int*)(v15 + 8 * v17);
      v70 = *(_QWORD*)(v68 + 24);
      v71 = (float*)(*(_QWORD*)(v19 + 912) + 16 * v17);
      v72 = *v71;
      v41 = v71[1];
      v73 = v71[2];
      v74 = v71[3];
      v75 = *(float*)(v70 + 52);
      v76 = *(float*)(v70 + 44);
      v77 = *(float*)(v70 + 48);
      v78 = *(float*)(v70 + 24);
      v79 = *(float**)(v14 + 40LL * *(unsigned int*)(v68 + 32) + 16);
      v37 = *v79;
      v80 = v79[1];
      v81 = v79[4];
      v82 = v79[5];
      v83 = v79[6];
      v35 = v79[2];
      v36 = v79[3];
      v84 = *v69;
      v212 = v80;
      v86 = *(float*)(v70 + 16);
      v85 = *(float*)(v70 + 20);
      v87 = *(unsigned __int8*)(v70 + 351);
      v214 = v82;
      v215 = v81;
      v213 = v83;
      if (v87 <= 1) {
        v94 = v85 + v85;
        if (v87 != 0) {
          v95 = (float*)(*(_QWORD*)(a2 + 656) + 24LL * (unsigned int)v84);
          v96 = v16 + (float)(v74 * v74);
          v97 =
              (float)((float)(v94 * v41) + (float)(v72 * (float)(v86 + v86))) +
              (float)(v73 * (float)(v78 + v78));
          v45 = -v73;
          v98 = (float)((float)((float)((float)(v73 * (float)(v86 + v86)) -
                                        (float)(v72 * (float)(v78 + v78))) *
                                v74) +
                        (float)(v94 * v96)) +
                (float)(v41 * v97);
          v49 = -v72;
          v50 = -v41;
          v99 =
              (float)((float)(v72 * v94) - (float)(v41 * (float)(v86 + v86))) *
              v74;
          v100 = (float)((float)((float)(v74 *
                                         (float)((float)(v41 *
                                                         (float)(v78 + v78)) -
                                                 (float)(v73 * v94))) +
                                 (float)((float)(v86 + v86) * v96)) +
                         (float)(v72 * v97)) -
                 v76;
          v101 = v99 + (float)((float)(v78 + v78) * v96);
          v102 = *(float*)(v188 + 4 * v84);
          v9 = v100 + (float)(v102 * v95[3]);
          v10 = (float)(v98 - v77) + (float)(v102 * v95[4]);
          v103 = (float)((float)(v101 + (float)(v73 * v97)) - v75) +
                 (float)(v102 * v95[5]);
        }
        else {
          v104 = v16 + (float)(v74 * v74);
          v105 =
              (float)((float)(v94 * v41) + (float)(v72 * (float)(v86 + v86))) +
              (float)(v73 * (float)(v78 + v78));
          v45 = -v73;
          v49 = -v72;
          v50 = -v41;
          v9 = (float)((float)((float)(v74 *
                                       (float)((float)(v41 *
                                                       (float)(v78 + v78)) -
                                               (float)(v73 * v94))) +
                               (float)((float)(v86 + v86) * v104)) +
                       (float)(v72 * v105)) -
               v76;
          v10 = (float)((float)((float)((float)((float)(v73 *
                                                        (float)(v86 + v86)) -
                                                (float)(v72 *
                                                        (float)(v78 + v78))) *
                                        v74) +
                                (float)(v94 * v104)) +
                        (float)(v41 * v105)) -
                v77;
          v103 = (float)((float)((float)((float)((float)(v72 * v94) -
                                                 (float)(v41 *
                                                         (float)(v86 + v86))) *
                                         v74) +
                                 (float)((float)(v78 + v78) * v104)) +
                         (float)(v73 * v105)) -
                 v75;
        }
        v40 = v71[2];
        v11 = v71[3];
        v208 = v103;
        v210 = *v71;
      }
      else if ((unsigned int)(v87 - 2) < 2) {
        v193 = v78;
        v195 = v77;
        v207 = v75;
        v20 = v71[2];
        v21 = v71[1];
        v22 = v71[3];
        v201 = v35;
        v203 = v37;
        v199 = v36;
        v23 = (float*)(*(_QWORD*)(a2 + 656) + 24LL * (unsigned int)v84);
        v189 = v86;
        v191 = v85;
        v24 = *(float*)(v188 + 4 * v84) * v16;
        v25 = GameRoutine_1a09fb0(result, v24);
        v26 = GameRoutine_1a09fc0(v24);
        v27 = *(float*)&v26 < 0.0;
        v197 = v76;
        if (*(float*)&v26 < 0.0) {
          *(float*)&v26 = -*(float*)&v26;
        }
        v28 = v25 * *v23;
        v29 = v25 * v23[1];
        v30 = v25 * v23[2];
        if (v27) {
          v28 = -v28;
        }
        if (v27) {
          v29 = -v29;
        }
        if (v27) {
          v30 = -v30;
        }
        v31 =
            (float)((float)((float)(v22 * v28) + (float)(*(float*)&v26 * v72)) +
                    (float)(v29 * v20)) -
            (float)(v21 * v30);
        v32 =
            (float)((float)((float)(v22 * v29) + (float)(*(float*)&v26 * v21)) +
                    (float)(v30 * v72)) -
            (float)(v20 * v28);
        v33 =
            (float)((float)((float)(v22 * v30) + (float)(*(float*)&v26 * v20)) +
                    (float)(v28 * v21)) -
            (float)(v72 * v29);
        v34 =
            (float)((float)((float)(*(float*)&v26 * v22) - (float)(v28 * v72)) -
                    (float)(v29 * v21)) -
            (float)(v30 * v20);
        GameRoutine_1a0a010(
            (float)((float)((float)(v32 * v32) + (float)(v31 * v31)) +
                    (float)(v33 * v33)) +
            (float)(v34 * v34));
        v36 = v199;
        v35 = v201;
        v37 = v203;
        v39 = 1.0 / v38;
        v40 = (float)(1.0 / v38) * v33;
        v41 = (float)(1.0 / v38) * v32;
        v11 = (float)(1.0 / v38) * v34;
        v42 = (float)(1.0 / v38) * v31;
        v43 = (float)(v11 * v11) + -0.5;
        v44 = (float)((float)((float)(v191 + v191) * v41) +
                      (float)(v42 * (float)(v189 + v189))) +
              (float)(v40 * (float)(v193 + v193));
        v45 = -v40;
        v46 = (float)((float)(v39 * v31) * (float)(v191 + v191)) -
              (float)((float)(v39 * v32) * (float)(v189 + v189));
        v47 =
            (float)(v11 *
                    (float)((float)((float)(v39 * v33) * (float)(v189 + v189)) -
                            (float)((float)(v39 * v31) *
                                    (float)(v193 + v193)))) +
            (float)((float)(v191 + v191) * v43);
        v48 = (float)((float)(v11 *
                              (float)((float)((float)(v39 * v32) *
                                              (float)(v193 + v193)) -
                                      (float)(v40 * (float)(v191 + v191)))) +
                      (float)((float)(v189 + v189) * v43)) +
              (float)((float)(v39 * v31) * v44);
        v49 = -(float)(v39 * v31);
        v50 = -(float)(v39 * v32);
        v10 = (float)(v47 + (float)(v41 * v44)) - v195;
        v9 = v48 - v197;
        v208 = (float)((float)((float)(v11 * v46) +
                               (float)((float)(v193 + v193) * v43)) +
                       (float)(v40 * v44)) -
               v207;
        v210 = v42;
      }
      else if (v87 == 4) {
        v88 = *((unsigned __int8*)v69 + 4);
        v209 = v75;
        v211 = v73;
        v204 = v37;
        v206 = v41;
        v187 = v74;
        v200 = v36;
        v202 = v35;
        v190 = v86;
        v192 = v85;
        if (*((_BYTE*)v69 + 4) != 0) {
          v89 = *(_QWORD*)(a2 + 656);
          if (v88 >= 8) {
            v90 = 0.0;
            v91 = 0.0;
            v92 = 0;
            v106 = (float*)(v188 + 16 + 4 * v84);
            v93 = 0.0;
            do {
              v107 = v84 + v92;
              v108 = *(v106 - 4);
              v109 = *(v106 - 3);
              v92 += 8;
              v110 = (float*)(v89 + 24LL * v107);
              v111 = *v110;
              v112 = v110[1];
              v113 = v110[2];
              v114 = (float*)(v89 + 24LL * (v107 + 1));
              v115 = v114[2];
              v116 = v108 * v111;
              v117 = v108 * v112;
              v118 = v108 * v113;
              v119 = *v114;
              v120 = v114[1];
              v121 = (float*)(v89 + 24LL * (v107 + 2));
              v122 = (float)(v93 - v116) - (float)(v109 * v119);
              v123 = v109 * v120;
              v124 = v109 * v115;
              v125 = *(v106 - 2);
              v126 = *(v106 - 1);
              v127 = (float)(v91 - v117) - v123;
              v128 = (float)(v90 - v118) - v124;
              v129 = v122 - (float)(v125 * *v121);
              v130 = v121[2];
              v131 = v127 - (float)(v125 * v121[1]);
              v132 = (float*)(v89 + 24LL * (v107 + 3));
              v133 = v125 * v130;
              v134 = v132[2];
              v135 = v128 - v133;
              v136 = *v132;
              v137 = v132[1];
              v138 = (float*)(v89 + 24LL * (v107 + 4));
              v139 = v129 - (float)(v126 * v136);
              v140 = v131 - (float)(v126 * v137);
              v141 = v126 * v134;
              v142 = v106[1];
              v143 = v139 - (float)(*v106 * *v138);
              v144 = v138[2];
              v145 = v140 - (float)(*v106 * v138[1]);
              v146 = (float*)(v89 + 24LL * (v107 + 5));
              v147 = v146[2];
              v148 = (float)(v135 - v141) - (float)(*v106 * v144);
              v149 = *v146;
              v150 = v146[1];
              v151 = (float*)(v89 + 24LL * (v107 + 6));
              v152 = (float*)(v89 + 24LL * (v107 + 7));
              v153 = v143 - (float)(v142 * v149);
              v154 = v145 - (float)(v142 * v150);
              v155 = v142 * v147;
              v156 = v106[2];
              v157 = v106[3];
              v106 += 8;
              v93 =
                  (float)(v153 - (float)(v156 * *v151)) - (float)(v157 * *v152);
              v91 = (float)(v154 - (float)(v156 * v151[1])) -
                    (float)(v157 * v152[1]);
              v90 = (float)((float)(v148 - v155) - (float)(v156 * v151[2])) -
                    (float)(v157 * v152[2]);
            } while ((v88 & 0xF8) != v92);
          }
          else {
            v90 = 0.0;
            v91 = 0.0;
            v92 = 0;
            v93 = 0.0;
          }
          v158 = v88 & 7;
          if (v158 != 0) {
            v159 = 4 * v92 + 4 * v84;
            v160 = v84 + v92;
            v161 = (float*)(v188 + v159);
            do {
              v162 = (float*)(v89 + 24LL * v160);
              v163 = *v161++;
              ++v160;
              --v158;
              v93 = v93 - (float)(v163 * *v162);
              v91 = v91 - (float)(v163 * v162[1]);
              v90 = v90 - (float)(v163 * v162[2]);
            } while (v158 != 0);
          }
        }
        else {
          v93 = 0.0;
          v91 = 0.0;
          v90 = 0.0;
        }
        v164 = GameRoutine_1a0a010(
            (float)((float)(v91 * v91) + (float)(v93 * v93)) +
            (float)(v90 * v90));
        if (v165 > 0.0) {
          v93 = v93 * (float)(1.0 / v165);
          v91 = v91 * (float)(1.0 / v165);
          v90 = v90 * (float)(1.0 / v165);
        }
        v166 = v211;
        v167 = v206;
        v168 = v187;
        v196 = v77;
        v198 = v76;
        v194 = v78;
        if (v165 >= 1.0e-10) {
          v173 = v165 * 0.5;
          v174 = GameRoutine_1a09fb0(v164, v165 * 0.5);
          v169 = GameRoutine_1a09fc0(v173);
          v170 = v93 * v174;
          v171 = v91 * v174;
          v172 = v90 * v174;
          if (*(float*)&v169 < 0.0) {
            v170 = -v170;
            v171 = -v171;
            v172 = -v172;
            *(float*)&v169 = -*(float*)&v169;
          }
          v166 = v211;
          v167 = v206;
          v168 = v187;
        }
        else {
          LODWORD(v169) = 1.0;
          v170 = 0.0;
          v171 = 0.0;
          v172 = 0.0;
        }
        v175 = (float)((float)((float)(v168 * v170) +
                               (float)(*(float*)&v169 * v72)) +
                       (float)(v171 * v166)) -
               (float)(v167 * v172);
        v176 = (float)((float)((float)(v168 * v171) +
                               (float)(*(float*)&v169 * v167)) +
                       (float)(v172 * v72)) -
               (float)(v166 * v170);
        v177 = (float)((float)((float)(v168 * v172) +
                               (float)(*(float*)&v169 * v166)) +
                       (float)(v170 * v167)) -
               (float)(v72 * v171);
        v178 = (float)((float)((float)(*(float*)&v169 * v168) -
                               (float)(v170 * v72)) -
                       (float)(v171 * v167)) -
               (float)(v172 * v166);
        GameRoutine_1a0a010(
            (float)((float)((float)(v176 * v176) + (float)(v175 * v175)) +
                    (float)(v177 * v177)) +
            (float)(v178 * v178));
        v180 = 1.0 / v179;
        v36 = v200;
        v40 = (float)(1.0 / v179) * v177;
        v41 = (float)(1.0 / v179) * v176;
        v11 = (float)(1.0 / v179) * v178;
        v181 = (float)(1.0 / v179) * v175;
        v182 = (float)(v11 * v11) + -0.5;
        v183 = (float)((float)((float)(v192 + v192) * v41) +
                       (float)(v181 * (float)(v190 + v190))) +
               (float)(v40 * (float)(v194 + v194));
        v45 = -v40;
        v184 = (float)((float)(v180 * v175) * (float)(v192 + v192)) -
               (float)((float)(v180 * v176) * (float)(v190 + v190));
        v185 = (float)(v11 * (float)((float)((float)(v180 * v177) *
                                             (float)(v190 + v190)) -
                                     (float)((float)(v180 * v175) *
                                             (float)(v194 + v194)))) +
               (float)((float)(v192 + v192) * v182);
        v186 = (float)((float)(v11 * (float)((float)((float)(v180 * v176) *
                                                     (float)(v194 + v194)) -
                                             (float)((float)(v180 * v177) *
                                                     (float)(v192 + v192)))) +
                       (float)((float)(v190 + v190) * v182)) +
               (float)((float)(v180 * v175) * v183);
        v49 = -(float)(v180 * v175);
        v50 = -(float)(v180 * v176);
        v10 = (float)(v185 + (float)(v41 * v183)) - v196;
        v9 = v186 - v198;
        v208 = (float)((float)((float)(v11 * v184) +
                               (float)((float)(v194 + v194) * v182)) +
                       (float)(v40 * v183)) -
               v209;
        v210 = v181;
        v35 = v202;
        v37 = v204;
      }
      else {
        v40 = v205;
        v41 = v12;
        v50 = -v12;
        v208 = a9;
        v49 = -v210;
        v45 = -v205;
      }
      v51 = *(float**)(v68 + 16);
      v12 = v41;
      v205 = v40;
      v52 = (float)((float)((float)(v37 * v11) + (float)(v36 * v49)) +
                    (float)(v212 * v45)) +
            (float)(v41 * v35);
      v53 = (float)((float)((float)(v212 * v11) + (float)(v36 * v50)) +
                    (float)(v35 * v49)) +
            (float)(v40 * v37);
      v54 = (float)((float)((float)(v35 * v11) + (float)(v36 * v45)) +
                    (float)(v37 * v50)) +
            (float)(v210 * v212);
      v55 = (float)((float)((float)(v37 * v210) + (float)(v36 * v11)) +
                    (float)(v212 * v41)) +
            (float)(v35 * v40);
      result = GameRoutine_1a0a010(
          (float)((float)((float)(v53 * v53) + (float)(v52 * v52)) +
                  (float)(v54 * v54)) +
          (float)(v55 * v55));
      v56 = v208;
      ++v17;
      v58 = 1.0 / v57;
      v59 = v58 * v52;
      v60 = v58 * v53;
      v61 = v58 * v54;
      v62 = v55 * v58;
      v63 = (float)(v62 * v62) + -0.5;
      *v51 = v59;
      v51[1] = v60;
      v51[2] = v61;
      v51[3] = v62;
      v64 = (float)((float)((float)(v10 + v10) * v60) +
                    (float)(v59 * (float)(v9 + v9))) +
            (float)(v61 * (float)(v56 + v56));
      v65 = (float)((float)(v62 * (float)((float)(v61 * (float)(v9 + v9)) -
                                          (float)(v59 * (float)(v56 + v56)))) +
                    (float)((float)(v10 + v10) * v63)) +
            (float)(v60 * v64);
      v66 = (float)((float)(v62 * (float)((float)(v60 * (float)(v56 + v56)) -
                                          (float)(v61 * (float)(v10 + v10)))) +
                    (float)((float)(v9 + v9) * v63)) +
            (float)(v59 * v64);
      a9 = v208;
      v67 = (float)((float)(v62 * (float)((float)(v59 * (float)(v10 + v10)) -
                                          (float)(v60 * (float)(v9 + v9)))) +
                    (float)((float)(v56 + v56) * v63)) +
            (float)(v61 * v64);
      v51[4] = v215 + v66;
      v51[5] = v214 + v65;
      v16 = -0.5;
      v51[6] = v213 + v67;
    } while (v17 != v13);
  }
  return result;
}

float GameHr_32db00(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  float* v8;
  __int64 v9;
  float* v10;
  float** v11;
  __int64 v12;
  float* v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float* v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float* v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float* v30;
  float v31;
  float v32;
  float result;
  float v34;
  float v35;
  float v36;
  float* v37;
  float** v38;
  float* v39;
  float v40;
  float v41;
  float v42;

  v2 = *(unsigned int*)(a2 + 808);
  if ((unsigned int)v2 >= 2) {
    v3 = *(_QWORD*)(a2 + 800);
    v4 = *(_QWORD*)(a2 + 832);
    v5 = v2 - 1;
    v6 = v2 - 2;
    v7 = (v2 - 1) & 3;
    v8 = *(float**)(v3 + 16);
    if (v6 >= 3) {
      v10 = (float*)(v4 + 36);
      v11 = (float**)(v3 + 96);
      v12 = -(__int64)(v5 & 0xFFFFFFFFFFFFFFFCLL);
      v9 = 1;
      do {
        v13 = *(v11 - 5);
        v9 += 4;
        v14 = v13[4] - v8[4];
        v15 = v13[5] - v8[5];
        v16 = v13[6];
        v17 = v8[6];
        v18 = *v11;
        *(v10 - 5) = v14;
        *(v10 - 4) = v15;
        v19 = v18[4];
        v20 = v18[5];
        *(v10 - 3) = v16 - v17;
        v21 = v20 - v8[5];
        v22 = v18[6];
        v23 = v8[6];
        v24 = v11[5];
        *(v10 - 1) = v19 - v8[4];
        *v10 = v21;
        v25 = v24[4];
        v26 = v24[5];
        v10[1] = v22 - v23;
        v27 = v26 - v8[5];
        v28 = v24[6];
        v29 = v8[6];
        v30 = v11[10];
        v11 += 20;
        v10[3] = v25 - v8[4];
        v10[4] = v27;
        v31 = v30[4];
        v32 = v30[5];
        v10[5] = v28 - v29;
        result = v31 - v8[4];
        v34 = v32 - v8[5];
        v35 = v30[6];
        v36 = v8[6];
        v10[7] = result;
        v10[8] = v34;
        v10[9] = v35 - v36;
        v10 += 16;
      } while (v12 + v9 != 1);
    }
    else {
      v9 = 1;
    }
    if (v7 != 0) {
      v37 = (float*)(v4 + 16 * v9 + 8);
      v38 = (float**)(v3 + 40 * v9 + 16);
      do {
        v39 = *v38;
        v38 += 5;
        --v7;
        result = v39[4] - v8[4];
        v40 = v39[5] - v8[5];
        v41 = v39[6];
        v42 = v8[6];
        *(v37 - 2) = result;
        *(v37 - 1) = v40;
        *v37 = v41 - v42;
        v37 += 4;
      } while (v7 != 0);
    }
  }
  return result;
}

void GameHr_335780(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float* v10;
  float* v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float* v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  unsigned int* v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  float* v29;
  unsigned int v30;
  float* v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float* v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float* v41;
  float* v42;
  __int64 v43;
  __int64 v44;
  unsigned int v45;
  float* v46;
  float* v47;

  v3 = (unsigned int)(*(_DWORD*)(a2 + 808) - 1);
  if (*(_DWORD*)(a2 + 808) != 1) {
    v4 = *(_QWORD*)(a3 + 64);
    v5 = *(_QWORD*)(a3 + 24);
    v6 = *(_QWORD*)(a2 + 800);
    v7 = *(_QWORD*)(a2 + 704);
    v8 = *(_QWORD*)(a2 + 840);
    v9 = *(_QWORD*)(a2 + 672);
    do {
      v10 = (float*)(v7 + 12 * v3);
      v11 = (float*)(v5 + 32 * v3);
      v13 = v11[1];
      v12 = v11[2];
      v15 = v10[1];
      v14 = v10[2];
      v16 = *v10;
      v17 = (float)(v15 * v12) - (float)(v14 * v13);
      v18 = (float)(v14 * *v11) - (float)(*v10 * v12);
      v19 = (float*)(v5 + 32LL * *(unsigned int*)(v6 + 40 * v3 + 32));
      v20 = v17 + v11[4];
      v21 = v11[5] + v18;
      v22 = (float)((float)(v16 * v13) - (float)(v15 * *v11)) + v11[6];
      v23 = v19[1];
      *v19 = *v11 + *v19;
      v19[1] = v13 + v23;
      v19[2] = v12 + v19[2];
      v24 = v21 + v19[5];
      v19[4] = v20 + v19[4];
      v19[5] = v24;
      v19[6] = v22 + v19[6];
      v25 = (unsigned int*)(v8 + 8 * v3);
      v26 = *((unsigned __int8*)v25 + 4);
      if (*((_BYTE*)v25 + 4) != 0) {
        v27 = *v25;
        if (v26 >= 4) {
          v29 = (float*)(v4 + 8 + 4 * v27);
          v28 = 0;
          do {
            v30 = v27 + v28;
            v28 += 4;
            v31 = (float*)(v9 + 24LL * v30);
            v32 = v31[2];
            v33 = (float)((float)(v31[4] * v11[1]) + (float)(v31[3] * *v11)) +
                  (float)(v31[5] * v11[2]);
            v34 = *v31;
            v35 = v31[1];
            v36 = (float*)(v9 + 24LL * (v30 + 1));
            *(v29 - 2) =
                v33 +
                (float)((float)((float)(v35 * v11[5]) + (float)(v34 * v11[4])) +
                        (float)(v32 * v11[6]));
            v37 = v36[2];
            v38 = (float)((float)(v36[4] * v11[1]) + (float)(v36[3] * *v11)) +
                  (float)(v36[5] * v11[2]);
            v39 = *v36;
            v40 = v36[1];
            v41 = (float*)(v9 + 24LL * (v30 + 2));
            v42 = (float*)(v9 + 24LL * (v30 + 3));
            *(v29 - 1) =
                v38 +
                (float)((float)((float)(v40 * v11[5]) + (float)(v39 * v11[4])) +
                        (float)(v37 * v11[6]));
            *v29 = (float)((float)((float)(v41[4] * v11[1]) +
                                   (float)(v41[3] * *v11)) +
                           (float)(v41[5] * v11[2])) +
                   (float)((float)((float)(v41[1] * v11[5]) +
                                   (float)(*v41 * v11[4])) +
                           (float)(v41[2] * v11[6]));
            v29[1] = (float)((float)((float)(v42[4] * v11[1]) +
                                     (float)(v42[3] * *v11)) +
                             (float)(v42[5] * v11[2])) +
                     (float)((float)((float)(v42[1] * v11[5]) +
                                     (float)(*v42 * v11[4])) +
                             (float)(v42[2] * v11[6]));
            v29 += 4;
          } while ((v26 & 0xFC) != v28);
        }
        else {
          v28 = 0;
        }
        v43 = v26 & 3;
        if (v43 != 0) {
          v44 = 4 * v28 + 4 * v27;
          v45 = v27 + v28;
          v46 = (float*)(v4 + v44);
          do {
            v47 = (float*)(v9 + 24LL * v45++);
            --v43;
            *v46++ = (float)((float)((float)(v47[4] * v11[1]) +
                                     (float)(v47[3] * *v11)) +
                             (float)(v47[5] * v11[2])) +
                     (float)((float)((float)(v47[1] * v11[5]) +
                                     (float)(*v47 * v11[4])) +
                             (float)(v47[2] * v11[6]));
          } while (v43 != 0);
        }
      }
      --v3;
    } while ((_DWORD)v3 != 0);
  }
}

__int64 GameHr_354240(__int64 result)
{
  __int64 v1;
  unsigned __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  _DWORD* v6;
  int v7;
  __int64 v8;
  unsigned int* v9;
  unsigned int v10;

  v1 = *(_QWORD*)(result + 32);
  v2 = *(unsigned __int8*)(v1 + 1);
  if (*(_BYTE*)(v1 + 1) != 0) {
    v3 = v2 & 7;
    if ((unsigned int)v2 >= 8) {
      v4 = 0;
      v5 = 1280 * (v2 >> 3);
      do {
        v6 = (_DWORD*)(v1 + v4);
        v4 += 1280;
        v7 = v6[35];
        v6[31] = 0;
        v6[74] = 0;
        v6[71] = 0;
        v6[114] = 0;
        v6[111] = 0;
        v6[154] = 0;
        v6[151] = 0;
        v6[194] = 0;
        v6[191] = 0;
        v6[234] = 0;
        v6[231] = 0;
        v6[274] = 0;
        v6[271] = 0;
        v6[314] = 0;
        v6[311] = 0;
        v6[34] = 0;
        v6[35] = v7 & 0x80000000;
        v6[75] &= 0x80000000;
        v6[115] &= 0x80000000;
        v6[155] &= 0x80000000;
        v6[195] &= 0x80000000;
        v6[235] &= 0x80000000;
        v6[275] &= 0x80000000;
        v6[315] &= 0x80000000;
      } while ((_DWORD)v5 != (_DWORD)v4);
      v1 += v4;
    }
    v8 = v1 + 48;
    if (v3 != 0) {
      v9 = (unsigned int*)(v8 + 92);
      do {
        v10 = *v9;
        *(v9 - 4) = 0;
        --v3;
        *(v9 - 1) = 0;
        *v9 = v10 & 0x80000000;
        v9 += 40;
      } while (v3 != 0);
    }
  }
  return result;
}

__int64 GameHr_360700(__int64 a1)
{
  unsigned int v1;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  int v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v23;
  int v24;
  int v25;
  __int64 v27;
  int v28;
  int v29;
  bool v30;
  __int64 v31;
  bool v32;
  __int64 v33;
  int v34;
  int v35;
  int v36;
  unsigned int v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 result;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  char* v56;
  unsigned int v57;
  int v58;
  _QWORD* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 (**v67)(__int64);
  _QWORD* v68;
  unsigned int v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  unsigned int v72;
  unsigned __int64 v73;
  _QWORD* v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  int v79;
  __int64 v80;
  __int64 v81;
  unsigned int v82;
  __int64 (**v83)();
  _QWORD* v84;
  unsigned __int64 v85;
  __int64 v86;
  _DWORD* v87;

  v3 = **(_QWORD**)(a1 + 48) + 36864LL;
  v87 = **(_DWORD***)(a1 + 48);
  v4 = 0;
  v5 = v87[9438];
  v6 = v87[9439];
  v7 = v87[9460];
  if (v5 != 0) {
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = **(_DWORD**)(**(_QWORD**)(a1 + 48) + 37768LL);
    if (*(_BYTE*)(a1 + 72) != 0) {
      v12 = 1;
    }
    else {
      v12 = 4;
    }
    while (1) {
      if (v11 - v10 >= v12) {
        v13 = v12;
      }
      else {
        v13 = v11 - v10;
      }
      if (v11 == v10) {
        if (v11 != v5) {
          goto LABEL_18;
        }
        goto LABEL_5;
      }
      v14 = *(_QWORD*)(v3 + 984);
      v15 = v14 + ((unsigned __int64)v10 << 6);
      if (*(_DWORD*)(v15 + 24) != 0xFFFF || *(_DWORD*)(v15 + 28) != 0xFFFF) {
      LABEL_16:
        v17 = 1;
        goto LABEL_17;
      }
      v20 = *(unsigned __int16*)(v15 + 60);
      if (v20 == 1) {
        v17 = 1;
        if (v8 == -1 || v13 < 2) {
          goto LABEL_17;
        }
      }
      else if (v20 != 2 || v8 == -1 || v13 <= 1) {
        goto LABEL_16;
      }
      v23 = v14 + ((unsigned __int64)(v10 + 1) << 6);
      if (v20 != *(unsigned __int16*)(v23 + 60)) {
        goto LABEL_16;
      }
      v24 = *(_DWORD*)(v23 + 24);
      v25 = *(_DWORD*)(v23 + 28);
      if (v24 != 0xFFFF || v25 != 0xFFFF) {
        goto LABEL_16;
      }
      if (v13 >= 3 &&
          (v27 = v14 + ((unsigned __int64)(v10 + 2) << 6),
           v20 == *(unsigned __int16*)(v27 + 60)) &&
          ((v28 = *(_DWORD*)(v27 + 24), v29 = *(_DWORD*)(v27 + 28),
            v28 == 0xFFFF)
               ? (v30 = v29 == 0xFFFF)
               : (v30 = false),
           v30)) {
        if (v13 != 3 &&
            (v31 = v14 + ((unsigned __int64)(v10 + 3) << 6),
             v20 == *(unsigned __int16*)(v31 + 60)) &&
            (*(_DWORD*)(v31 + 28) == 0xFFFF
                 ? (v32 = *(_DWORD*)(v31 + 24) == 0xFFFF)
                 : (v32 = false),
             v32)) {
          v17 = 4;
        }
        else {
          v17 = 3;
        }
      }
      else {
        v17 = 2;
      }
    LABEL_17:
      ++v9;
      v18 = *(_QWORD*)(v3 + 992) + 8LL * v4++;
      *(_DWORD*)v18 = v10;
      *(_WORD*)(v18 + 4) = v17;
      v10 += v17;
      if (v11 != v5) {
      LABEL_18:
        if (v11 == v10) {
          v19 = *(_QWORD*)(v3 + 904);
          *(_DWORD*)(v19 + 4LL * v8++) = v9;
          v9 = 0;
          v11 = *(_DWORD*)(v19 + 4LL * v8);
        }
      }
    LABEL_5:
      if (v10 >= v5) {
        *(_DWORD*)(*(_QWORD*)(v3 + 904) + 4LL * v8) = v9;
        break;
      }
    }
  }
  *(_DWORD*)(v3 + 912) = *(_DWORD*)(v3 + 1064);
  if (v7 == v5 + v6) {
    v1 = v4;
    goto LABEL_64;
  }
  v33 = *(_QWORD*)(v3 + 992);
  v34 = v7 - (v5 + v6);
  v35 = v34 & 7;
  if (v5 - v7 + v6 > 0xFFFFFFF8) {
    v36 = 0;
    if ((v34 & 7) == 0) {
      goto LABEL_64;
    }
    goto LABEL_62;
  }
  v36 = 0;
  do {
    v37 = v4 + v36;
    v38 = v5 + v36;
    v36 += 8;
    v39 = v33 + 8LL * v37;
    v40 = v33 + 8LL * (v37 + 1);
    v41 = v33 + 8LL * (v37 + 3);
    *(_DWORD*)v39 = v38;
    *(_WORD*)(v39 + 4) = 1;
    *(_DWORD*)v40 = v38 + 1;
    *(_WORD*)(v40 + 4) = 1;
    v42 = v33 + 8LL * (v37 + 2);
    *(_DWORD*)v42 = v38 + 2;
    *(_WORD*)(v42 + 4) = 1;
    *(_WORD*)(v41 + 4) = 1;
    *(_DWORD*)v41 = v38 + 3;
    v43 = v33 + 8LL * (v37 + 4);
    v44 = v33 + 8LL * (v37 + 5);
    *(_DWORD*)v43 = v38 + 4;
    *(_WORD*)(v43 + 4) = 1;
    *(_DWORD*)v44 = v38 + 5;
    *(_WORD*)(v44 + 4) = 1;
    v45 = v33 + 8LL * (v37 + 6);
    v46 = v33 + 8LL * (v37 + 7);
    *(_DWORD*)v45 = v38 + 6;
    *(_WORD*)(v45 + 4) = 1;
    *(_DWORD*)v46 = v38 + 7;
    *(_WORD*)(v46 + 4) = 1;
  } while ((v34 & 0xFFFFFFF8) != v36);
  v1 = v4 + v36;
  v4 += v36;
  if ((v34 & 7) != 0) {
  LABEL_62:
    v47 = v36 + v5;
    do {
      v1 = v4 + 1;
      v48 = v33 + 8LL * v4;
      --v35;
      *(_DWORD*)v48 = v47++;
      *(_WORD*)(v48 + 4) = 1;
      v4 = v1;
    } while (v35 != 0);
  }
LABEL_64:
  v49 = *(_QWORD*)(a1 + 16);
  *(_DWORD*)(v3 + 1000) = v1;
  v50 = *(_QWORD*)(v3 + 984);
  v86 = v3;
  v51 = (*(__int64 (**)(__int64))(*(_QWORD*)v49 + 8LL))(v49);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v51 + 8LL))(v51);
  if (v1 + 63 >= 0x40) {
    v69 = (v1 + 63) >> 6;
    v70 = 0;
    if (v69 >= (unsigned int)result) {
      v71 = v69;
    }
    else {
      v71 = (v1 + 15) >> 4;
    }
    v85 = v71;
    v72 = (v1 + (unsigned int)v71 - 1) / (unsigned int)v71;
    do {
      if ((unsigned int)(v71 - v70) >= 0x40) {
        v73 = 64;
      }
      else {
        v73 = (unsigned int)(v71 - v70);
      }
      v74 = *(_QWORD**)(*(_QWORD*)(a1 + 40) + 504LL);
      GameRoutine_55b740(*v74);
      v75 = GameRoutine_2e9910(v74, (unsigned int)(88 * v73), 16);
      result = GameRoutine_55b750(*v74);
      if (v70 != v71) {
        v76 = 0;
        do {
          v77 = *(_QWORD*)(a1 + 40);
          v78 = *(_QWORD*)(a1 + 64);
          *(_QWORD*)(v75 + 16) = 0;
          *(_QWORD*)(v75 + 24) = 0;
          v79 = v72 * (v76 + v70);
          v80 = *(_QWORD*)(v77 + 1424);
          v81 = *(_QWORD*)(v77 + 408);
          *(_DWORD*)(v75 + 32) = 0;
          if (v79 + v72 >= v1) {
            v82 = v1;
          }
          else {
            v82 = v79 + v72;
          }
          *(_QWORD*)(v75 + 72) = v78;
          *(_DWORD*)(v75 + 36) = v5;
          *(_DWORD*)(v75 + 80) = v79;
          *(_DWORD*)(v75 + 84) = v82;
          *(_QWORD*)(v75 + 40) = v50;
          *(_QWORD*)(v75 + 48) = v80;
          v83 = GameData_1f84f68;
          *(_QWORD*)v75 = GameData_1f84f68;
          *(_QWORD*)(v75 + 8) = v81;
          *(_QWORD*)(v75 + 56) = v87;
          *(_QWORD*)(v75 + 64) = v77;
          v84 = *(_QWORD**)(a1 + 24);
          *(_DWORD*)(v75 + 32) = 1;
          *(_QWORD*)(v75 + 24) = v84;
          if (v84 != nullptr) {
            (*(void (**)(_QWORD*))(*v84 + 32LL))(v84);
            *(_QWORD*)(v75 + 16) = v84[2];
            v83 = *(__int64 (***)())v75;
          }
          result = ((__int64 (*)(__int64))v83[5])(v75);
          ++v76;
          v75 += 88;
        } while (v76 < v73);
      }
      v71 = v85;
      v70 += 64LL;
    } while (v70 < v85);
  }
  v53 = *(_DWORD*)(*(_QWORD*)(a1 + 48) + 12LL);
  if (v53 != 0) {
    v54 = 0;
    v55 = *(_DWORD*)(*(_QWORD*)(a1 + 48) + 12LL);
    v56 = (char*)GameData_2135890;
    do {
      v57 = v55 - 32;
      if (v55 >= 0x20) {
        v58 = 32;
      }
      else {
        v58 = v55;
      }
      v59 = *(_QWORD**)(*(_QWORD*)(a1 + 40) + 504LL);
      GameRoutine_55b740(*v59);
      v60 = GameRoutine_2e9910(v59, 88, 16);
      GameRoutine_55b750(*v59);
      v61 = *(_QWORD*)(a1 + 40);
      v62 = *(_QWORD*)(a1 + 64);
      *(_QWORD*)(v60 + 16) = 0;
      *(_QWORD*)(v60 + 24) = 0;
      v63 = *(_QWORD*)(v86 + 936);
      v64 = *(_QWORD*)(v61 + 1424);
      v65 = *(_QWORD*)(v61 + 408);
      *(_DWORD*)(v60 + 32) = 0;
      *(_QWORD*)(v60 + 72) = v61;
      *(_QWORD*)(v60 + 80) = v62;
      *(_DWORD*)(v60 + 48) = v58;
      v66 = v63 + 8LL * v54;
      v67 = (__int64 (**)(__int64))(v56 + 16);
      *(_QWORD*)v60 = v56 + 16;
      *(_QWORD*)(v60 + 8) = v65;
      *(_QWORD*)(v60 + 40) = v66;
      *(_QWORD*)(v60 + 56) = v64;
      *(_QWORD*)(v60 + 64) = v87;
      v68 = *(_QWORD**)(a1 + 24);
      *(_DWORD*)(v60 + 32) = 1;
      *(_QWORD*)(v60 + 24) = v68;
      if (v68 != nullptr) {
        (*(void (**)(_QWORD*))(*v68 + 32LL))(v68);
        *(_QWORD*)(v60 + 16) = v68[2];
        v67 = *(__int64 (***)(__int64))v60;
      }
      result = v67[5](v60);
      v54 += 32;
      v55 = v57;
    } while (v54 < v53);
  }
  return result;
}

__int64 GameHr_360f70(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  float* v17;
  float v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  _DWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 i;
  __int64 v38;
  __int64* v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  unsigned __int64 v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned int v60;
  _QWORD* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  struct {
    __int64 v65;
    __int64 v66;
    __int64 v67;
    __int64 v68;
    __int64 v69;
  } v65_;

  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 8LL) + 24LL) =
      *(_DWORD*)(*(_QWORD*)(a1 + 40) + 1196LL);
  v3 = *(_QWORD*)(a1 + 40);
  v5 = *(_QWORD*)(v3 + 8);
  result = physx_Dy_ThresholdTable_build(v3 + 24, v5);
  v7 = *(_QWORD*)(a1 + 40);
  v8 = *(unsigned int*)(v7 + 1200);
  v9 = *(_QWORD*)(v7 + 1112 + 8 * v8);
  v10 = *(_QWORD*)(v7 + 1112 + 8LL * (unsigned int)(1 - v8));
  *(_DWORD*)(v9 + 24) = 0;
  if (*(_DWORD*)(v3 + 64) != 0) {
    v11 = 0;
    v12 = 0;
    do {
      v17 = (float*)(*(_QWORD*)(v3 + 48) + v11);
      v18 = v17[1];
      v19 = *(_QWORD*)(v5 + 16) + 40LL * *(unsigned int*)v17;
      if (v18 > (float)(*(float*)(v19 + 12) *
                        *(float*)(*(_QWORD*)(a1 + 40) + 88LL))) {
        *(float*)(v19 + 32) = v18;
        v20 = *(_DWORD*)(v9 + 24);
        if ((*(_DWORD*)(v9 + 28) & 0x7FFFFFFFu) > v20) {
          v13 = (_QWORD*)(*(_QWORD*)(v9 + 16) + 40LL * v20);
          *v13 = *(_QWORD*)v19;
          v14 = *(_QWORD*)(v19 + 8);
          v15 = *(_QWORD*)(v19 + 16);
          v16 = *(_QWORD*)(v19 + 32);
          v13[3] = *(_QWORD*)(v19 + 24);
          v13[4] = v16;
          v13[1] = v14;
          v13[2] = v15;
          ++*(_DWORD*)(v9 + 24);
        }
        else {
          result = GameRoutine_361660_alt1((_QWORD*)v9, (_QWORD*)v19);
        }
      }
      ++v12;
      v11 += 8;
    } while (v12 < *(unsigned int*)(v3 + 64));
    v7 = *(_QWORD*)(a1 + 40);
  }
  v21 = *(_QWORD*)(v7 + 16);
  *(_DWORD*)(v21 + 24) = 0;
  v22 = *(unsigned int*)(v10 + 24);
  v23 = *(unsigned int*)(v9 + 24);
  if ((_DWORD)v22 != 0) {
    v24 = (__int64*)(v7 + 1128);
    result = physx_Dy_ThresholdTable_build(v3 + 24, v10);
    v25 = (unsigned int)(v23 + v22);
    if ((*(_DWORD*)(v7 + 1140) & 0x7FFFFFFFu) >= (unsigned int)v25) {
      *(_DWORD*)(v7 + 1136) = v25;
      if ((_DWORD)v25 == 0) {
        LOBYTE(v28) = 1;
        if ((_DWORD)v23 != 0) {
        LABEL_26:
          v33 = *(_QWORD*)(v9 + 16);
          v34 = *(_QWORD*)(v3 + 32);
          v36 = *(_QWORD*)(v3 + 48);
          v35 = *(_QWORD*)(v3 + 56);
          for (i = 0; i != v23; ++i) {
            v39 = (__int64*)(v33 + 40 * i);
            v40 = (*((unsigned int*)v39 + 6) |
                   ((unsigned __int64)*((unsigned int*)v39 + 4) << 32)) +
                  ~((unsigned __int64)*((unsigned int*)v39 + 6) << 32);
            v41 = (v40 ^ (v40 >> 22)) + ~((v40 ^ (v40 >> 22)) << 13);
            v42 = (9 * (v41 ^ (v41 >> 8))) ^ ((9 * (v41 ^ (v41 >> 8))) >> 15);
            v43 =
                *(unsigned int*)(v34 +
                                 4LL * (((unsigned int)((v42 + ~(v42 << 27)) >>
                                                        31) ^
                                         ((_DWORD)v42 + ~((_DWORD)v42 << 27))) %
                                        *(_DWORD*)(v3 + 40)));
            if ((_DWORD)v43 != -1) {
              v44 = v39[2];
              result = v39[3];
              v45 = *v39;
              while (1) {
                v46 = *(unsigned int*)(v36 + 8 * v43);
                v47 =
                    (_QWORD*)(*(_QWORD*)(v10 + 16) + 40LL * (unsigned int)v46);
                if (v47[2] == v44 && v47[3] == result && *v47 == v45) {
                  break;
                }
                v43 = *(unsigned int*)(v35 + 4 * v43);
                if ((_DWORD)v43 == -1) {
                  goto LABEL_27;
                }
              }
              v38 = *v24;
              *(_DWORD*)(v38 + 4 * v46) = 0;
              *(_DWORD*)(v38 + 4LL * (unsigned int)(v22 + i)) = 0;
            }
          LABEL_27:;
          }
        }
      LABEL_36:
        if ((v28 & 1) != 0) {
          return result;
        }
        v48 = 0;
        v49 = 0;
        while (*(_DWORD*)(*v24 + 4 * v49) != 0) {
          if (v49 >= v22) {
            v61 = (_QWORD*)(*(_QWORD*)(v9 + 16) +
                            40LL * (unsigned int)(v49 - v22));
          LABEL_48:
            v65_.v67 = 0xFFFFFFFFLL;
            v65_.v68 = 0xFFFFFFFFLL;
            v65_.v65 = *v61;
            v62 = v61[1];
            v63 = v61[2];
            v64 = v61[4];
            v65_.v68 = v61[3];
            v65_.v69 = v64;
            v65_.v66 = v62;
            v65_.v67 = v63;
            LODWORD(v65_.v69) = *((_DWORD*)v61 + 8);
            v60 = *(_DWORD*)(v21 + 24);
            if ((*(_DWORD*)(v21 + 28) & 0x7FFFFFFFu) <= v60) {
            LABEL_49:
              result = GameRoutine_361660_alt1((_QWORD*)v21, &v65_.v65);
              goto LABEL_40;
            }
            goto LABEL_39;
          }
          v54 = *(_QWORD*)(v10 + 16);
          v65_.v67 = 0xFFFFFFFFLL;
          v65_.v68 = 0xFFFFFFFFLL;
          v55 = (__int64*)(v54 + v48);
          v65_.v65 = *v55;
          v56 = v55[1];
          v57 = v55[2];
          v59 = v55[3];
          v58 = v55[4];
          v65_.v68 = v59;
          HIDWORD(v65_.v69) = HIDWORD(v58);
          v65_.v66 = v56;
          v65_.v67 = v57;
          LODWORD(v65_.v69) = 0;
          v60 = *(_DWORD*)(v21 + 24);
          if ((*(_DWORD*)(v21 + 28) & 0x7FFFFFFFu) <= v60) {
            goto LABEL_49;
          }
        LABEL_39:
          v50 = (_QWORD*)(*(_QWORD*)(v21 + 16) + 40LL * v60);
          *v50 = v65_.v65;
          v51 = v65_.v66;
          v52 = v65_.v67;
          v53 = v65_.v69;
          v50[3] = v65_.v68;
          v50[4] = v53;
          v50[1] = v51;
          v50[2] = v52;
          ++*(_DWORD*)(v21 + 24);
        LABEL_40:
          ++v49;
          v48 += 40;
          if (v25 == v49) {
            return result;
          }
        }
        if (v49 >= v22) {
          goto LABEL_40;
        }
        v61 = (_QWORD*)(*(_QWORD*)(v10 + 16) + v48);
        goto LABEL_48;
      }
    }
    else {
      result = GameRoutine_304f00_alt1(v7 + 1128, v25);
      *(_DWORD*)(v7 + 1136) = v25;
    }
    v27 = *v24;
    v28 = ((_BYTE)v23 + (_BYTE)v22) & 7;
    if ((unsigned __int64)(v25 - 1) >= 7) {
      v30 = (_QWORD*)(v27 + 16);
      v31 = 0;
      do {
        *(v30 - 2) = 0x100000001LL;
        *(v30 - 1) = 0x100000001LL;
        *v30 = 0x100000001LL;
        v30[1] = 0x100000001LL;
        v30 += 4;
        v31 -= 8;
      } while (-(__int64)((unsigned int)v25 & 0xFFFFFFF8) != v31);
      v29 = -v31;
      if ((((_BYTE)v23 + (_BYTE)v22) & 7) == 0) {
      LABEL_25:
        if ((_DWORD)v23 != 0) {
          goto LABEL_26;
        }
        goto LABEL_36;
      }
    }
    else {
      v29 = 0;
      if ((((_BYTE)v23 + (_BYTE)v22) & 7) == 0) {
        goto LABEL_25;
      }
    }
    v32 = (_DWORD*)(v27 + 4 * v29);
    do {
      *v32++ = 1;
      --v28;
    } while (v28 != 0);
    goto LABEL_25;
  }
  if ((*(_DWORD*)(v21 + 28) & 0x7FFFFFFFu) < (unsigned int)v23) {
    result = GameRoutine_3617a0_alt1(v21, v23);
  }
  *(_DWORD*)(v21 + 24) = v23;
  v26 = (unsigned int)(40 * v23);
  if ((_DWORD)v26 != 0) {
    return memcpy(*(_QWORD*)(v21 + 16), *(_QWORD*)(v9 + 16), v26);
  }
  return result;
}

__int64 GameHr_366360(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 i;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  int v39;
  __int64 v41;
  _QWORD* v42;
  int v43;
  __int64 v45;
  __int64 result;
  __int64 v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  int v52;
  int v53;
  int v54;
  int v55;
  __int64 v56;
  __int64 v57;

  *(_QWORD*)a1 = (char*)GameData_2135848 + 16;
  v2 = *(_DWORD*)(a1 + 1188);
  if ((v2 & 0x80000000) == 0) {
    v3 = *(_QWORD*)(a1 + 1176);
    if ((v2 & 0x7FFFFFFF) != 0 && v3 != 0) {
      v5 = GameRoutine_55af80(0);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v5 + 24LL))(v5, v3);
    }
  }
  v6 = *(_DWORD*)(a1 + 1172);
  if ((v6 & 0x80000000) == 0) {
    v7 = *(_QWORD*)(a1 + 1160);
    if ((v6 & 0x7FFFFFFF) != 0 && v7 != 0) {
      v9 = GameRoutine_55af80(0);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v9 + 24LL))(v9, v7);
    }
  }
  v10 = *(_DWORD*)(a1 + 1156);
  if ((v10 & 0x80000000) == 0) {
    v11 = *(_QWORD*)(a1 + 1144);
    if ((v10 & 0x7FFFFFFF) != 0 && v11 != 0) {
      v13 = GameRoutine_55af80(0);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v13 + 24LL))(v13, v11);
    }
  }
  v14 = *(_DWORD*)(a1 + 1140);
  if ((v14 & 0x80000000) == 0 && (v14 & 0x7FFFFFFF) != 0) {
    v15 = *(_QWORD*)(a1 + 1128);
    if (v15 != 0) {
      v16 = GameRoutine_55af80(0);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v16 + 24LL))(v16, v15);
    }
  }
  v17 = *(_DWORD*)(a1 + 1108);
  if ((v17 & 0x80000000) == 0 && (v17 & 0x7FFFFFFF) != 0) {
    v18 = *(_QWORD*)(a1 + 1096);
    if (v18 != 0) {
      v19 = GameRoutine_55af80(0);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v19 + 24LL))(v19, v18);
    }
  }
  v20 = *(_DWORD*)(a1 + 1092);
  if ((v20 & 0x80000000) == 0 && (v20 & 0x7FFFFFFF) != 0) {
    v21 = *(_QWORD*)(a1 + 1080);
    if (v21 != 0) {
      v22 = GameRoutine_55af80(0);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v22 + 24LL))(v22, v21);
    }
  }
  v23 = *(_DWORD*)(a1 + 1076);
  if ((v23 & 0x80000000) == 0 && (v23 & 0x7FFFFFFF) != 0) {
    v24 = *(_QWORD*)(a1 + 1064);
    if (v24 != 0) {
      v25 = GameRoutine_55af80(0);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v25 + 24LL))(v25, v24);
    }
  }
  v26 = *(_DWORD*)(a1 + 1060);
  if ((v26 & 0x80000000) == 0 && (v26 & 0x7FFFFFFF) != 0) {
    v27 = *(_QWORD*)(a1 + 1048);
    if (v27 != 0) {
      v28 = GameRoutine_55af80(0);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v28 + 24LL))(v28, v27);
    }
  }
  v29 = *(_DWORD*)(a1 + 1044);
  if ((v29 & 0x80000000) == 0 && (v29 & 0x7FFFFFFF) != 0) {
    v30 = *(_QWORD*)(a1 + 1032);
    if (v30 != 0) {
      v31 = GameRoutine_55af80(0);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v31 + 24LL))(v31, v30);
    }
  }
  v32 = GameRoutine_55c040(*(_QWORD*)(a1 + 480));
  if (v32 != 0) {
    for (i = v32; i != 0; i = GameRoutine_55c040(*(_QWORD*)(a1 + 480))) {
      GameRoutine_366a50(i);
      v34 = i - *(_QWORD*)(i - 8);
      v35 = GameRoutine_55af80(0);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v35 + 24LL))(v35, v34);
    }
  }
  GameRoutine_55bff0(*(_QWORD*)(a1 + 480));
  v36 = *(_QWORD*)(a1 + 480);
  if (v36 != 0) {
    v37 = GameRoutine_55af80(0);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v37 + 24LL))(v37, v36);
  }
  v38 = *(_QWORD**)(a1 + 8);
  *(_QWORD*)a1 = (char*)GameData_2135840 + 16;
  if (v38 != nullptr) {
    v39 = *((_DWORD*)v38 + 7);
    if ((v39 & 0x80000000) == 0 && (v39 & 0x7FFFFFFF) != 0 && v38[2] != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v38 + 24LL))(*v38);
    }
    v41 = GameRoutine_55af80(0);
    (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v41 + 24LL))(v41, v38);
    *(_QWORD*)(a1 + 8) = 0;
  }
  v42 = *(_QWORD**)(a1 + 16);
  if (v42 != nullptr) {
    v43 = *((_DWORD*)v42 + 7);
    if ((v43 & 0x80000000) == 0 && (v43 & 0x7FFFFFFF) != 0 && v42[2] != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v42 + 24LL))(*v42);
    }
    v45 = GameRoutine_55af80(0);
    (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v45 + 24LL))(v45, v42);
    *(_QWORD*)(a1 + 16) = 0;
  }
  result = GameRoutine_55b730(*(_QWORD*)(a1 + 432));
  v47 = *(_QWORD*)(a1 + 432);
  if (v47 != 0) {
    v48 = GameRoutine_55af80(0);
    result =
        (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v48 + 24LL))(v48, v47);
  }
  v49 = *(_DWORD*)(a1 + 428);
  if ((v49 & 0x80000000) == 0 && (v49 & 0x7FFFFFFF) != 0) {
    v50 = *(_QWORD*)(a1 + 416);
    if (v50 != 0) {
      v51 = GameRoutine_55af80(0);
      result =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v51 + 24LL))(v51, v50);
    }
  }
  v52 = *(_DWORD*)(a1 + 396);
  if ((v52 & 0x80000000) == 0 && (v52 & 0x7FFFFFFF) != 0 &&
      *(_QWORD*)(a1 + 384) != 0) {
    result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 368) + 24LL))(
        *(_QWORD*)(a1 + 368));
  }
  v53 = *(_DWORD*)(a1 + 364);
  if ((v53 & 0x80000000) == 0 && (v53 & 0x7FFFFFFF) != 0 &&
      *(_QWORD*)(a1 + 352) != 0) {
    result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 336) + 24LL))(
        *(_QWORD*)(a1 + 336));
  }
  v54 = *(_DWORD*)(a1 + 308);
  if ((v54 & 0x80000000) == 0 && (v54 & 0x7FFFFFFF) != 0 &&
      *(_QWORD*)(a1 + 296) != 0) {
    result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 280) + 24LL))(
        *(_QWORD*)(a1 + 280));
  }
  v55 = *(_DWORD*)(a1 + 276);
  if ((v55 & 0x80000000) == 0 && (v55 & 0x7FFFFFFF) != 0 &&
      *(_QWORD*)(a1 + 264) != 0) {
    result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 248) + 24LL))(
        *(_QWORD*)(a1 + 248));
  }
  v56 = *(_QWORD*)(a1 + 24);
  if (v56 != 0) {
    v57 = GameRoutine_55af80(0);
    result =
        (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v57 + 24LL))(v57, v56);
    *(_QWORD*)(a1 + 24) = 0;
  }
  return result;
}

long double GameHr_3696c0(unsigned int a1, __int64 a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int128 v8;
  __int128 v9;
  __int128 v10;
  __int128 v11;
  __int128 v12;
  __int128 v13;
  __int128 v14;
  long double result;
  __int128 v16;
  __int64 v17;
  long double* v18;
  long double* v19;
  long double v20;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (a1 != 0) {
    v3 = a1 & 7;
    if (a1 < 8) {
      v4 = 0;
      if ((a1 & 7) == 0) {
        return result;
      }
      goto LABEL_8;
    }
    v5 = a2 + 128;
    v6 = a3 + 128;
    v7 = 0;
    do {
      v8 = *(_OWORD*)(v5 - 112);
      v7 -= 8;
      *(_OWORD*)(v6 - 128) = *(_OWORD*)(v5 - 128);
      *(_OWORD*)(v6 - 112) = v8;
      v9 = *(_OWORD*)(v5 - 80);
      *(_OWORD*)(v6 - 96) = *(_OWORD*)(v5 - 96);
      *(_OWORD*)(v6 - 80) = v9;
      v10 = *(_OWORD*)(v5 - 48);
      *(_OWORD*)(v6 - 64) = *(_OWORD*)(v5 - 64);
      *(_OWORD*)(v6 - 48) = v10;
      v11 = *(_OWORD*)(v5 - 16);
      *(_OWORD*)(v6 - 32) = *(_OWORD*)(v5 - 32);
      *(_OWORD*)(v6 - 16) = v11;
      v12 = *(_OWORD*)(v5 + 16);
      *(_OWORD*)v6 = *(_OWORD*)v5;
      *(_OWORD*)(v6 + 16) = v12;
      v13 = *(_OWORD*)(v5 + 48);
      *(_OWORD*)(v6 + 32) = *(_OWORD*)(v5 + 32);
      *(_OWORD*)(v6 + 48) = v13;
      v14 = *(_OWORD*)(v5 + 80);
      *(_OWORD*)(v6 + 64) = *(_OWORD*)(v5 + 64);
      *(_OWORD*)(v6 + 80) = v14;
      result = *(long double*)(v5 + 96);
      v16 = *(_OWORD*)(v5 + 112);
      v5 += 256;
      *(long double*)(v6 + 96) = result;
      *(_OWORD*)(v6 + 112) = v16;
      v6 += 256;
    } while (-(__int64)(a1 & 0xFFFFFFF8) != v7);
    v4 = -v7;
    if ((a1 & 7) != 0) {
    LABEL_8:
      v17 = (32 * v4) | 0x10;
      v18 = (long double*)(a2 + v17);
      v19 = (long double*)(a3 + v17);
      do {
        result = *(v18 - 1);
        v20 = *v18;
        v18 += 2;
        --v3;
        *(v19 - 1) = result;
        *v19 = v20;
        v19 += 2;
      } while (v3 != 0);
    }
  }
  return result;
}

__int64 GameHr_36f220(__int64 a1, _DWORD* a2, _DWORD* a3, __int64 a4,
                      __int64 a5, __int64 a6)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  char v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  unsigned int* v22;
  unsigned int* v23;
  __int64 v24;
  _BOOL4 v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  __int64 v30;
  _BOOL4 v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  __int64 v36;
  _BOOL4 v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  char v41;
  unsigned int v42;
  int v43;
  __int64 v44;
  int v45;
  __int64 v46;
  unsigned int v47;
  unsigned int* v48;
  unsigned int* v49;
  __int64 v50;
  _BOOL4 v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  __int64 v56;
  _BOOL4 v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int v60;
  unsigned int v61;
  __int64 v62;
  _BOOL4 v63;
  unsigned int v64;
  unsigned int v65;
  char v66;
  unsigned int v67;
  int v68;
  __int64 v69;
  int v70;
  __int64 v71;
  unsigned int v72;
  unsigned int* v73;
  unsigned int* v74;
  __int64 v75;
  _BOOL4 v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v80;
  __int64 v81;
  _BOOL4 v82;
  unsigned int v83;
  unsigned int v84;
  unsigned int v85;
  unsigned int v86;
  __int64 v87;
  _BOOL4 v88;
  unsigned int v89;
  unsigned int v90;
  char v91;
  unsigned int v92;
  int v93;
  __int64 v94;
  int v95;
  __int64 v96;
  unsigned int v97;
  unsigned int* v98;
  unsigned int* v99;
  __int64 v100;
  _BOOL4 v101;
  unsigned int v102;
  unsigned int v103;
  unsigned int v104;
  unsigned int v105;
  __int64 v106;
  _BOOL4 v107;
  unsigned int v108;
  unsigned int v109;
  unsigned int v110;
  unsigned int v111;
  __int64 v112;
  _BOOL4 v113;
  unsigned int v114;
  unsigned int v115;
  unsigned int v116;
  unsigned int v117;
  __int64 v118;
  __int64 v119;
  int v120;
  int v121;
  __int64 v122;
  _DWORD* v123;
  bool v124;
  int v125;
  int v126;
  int* v127;
  int v128;
  __int64 v129;
  __int64 v130;
  int v131;
  int v132;
  __int64 v133;
  _DWORD* v134;
  __int64* v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  int* v141;
  int* v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  _BYTE v150[4];
  _BYTE v151[12];
  _BYTE v152[112];
  _DWORD v153[1];
  _BYTE v154[12];
  __int64 v155;

  GameRoutine_1a0ba50(v153, 0, 128, a4, a5, a6);
  result = GameRoutine_1a0ba50(v150, 0, 128, v10, v11, v12);
  v14 = *(_BYTE*)(a1 + 149);
  v15 = *(_DWORD*)(a1 + 172);
  v16 = a4 + 12288;
  v17 = a4 + 16768;
  if (v15 == 0) {
    v20 = 0;
    goto LABEL_38;
  }
  v18 = *(_DWORD*)(a1 + 168);
  if (v15 == 1) {
    v19 = 0;
    v20 = 0;
    goto LABEL_28;
  }
  v21 = 0;
  v20 = 0;
  LODWORD(result) = *(_DWORD*)(a1 + 168);
  v22 = (unsigned int*)v154;
  v23 = (unsigned int*)v151;
  do {
    v24 = v16 + 104LL * (unsigned int)result;
    if ((*(_BYTE*)(v24 + 1) & 1) != 0) {
      v25 = false;
      v26 = *(_DWORD*)(v17 + 4LL * (unsigned int)result);
      if (v26 == 0) {
        goto LABEL_17;
      }
    }
    else {
      v25 = *(_WORD*)(v24 + 2) != 0;
      v26 = *(_DWORD*)(v17 + 4LL * (unsigned int)result);
      if (v26 == 0) {
        goto LABEL_17;
      }
    }
    v27 = *(v22 - 1);
    v20 += v26;
    if (v26 > v27) {
      v27 = v26;
    }
    *(v22 - 1) = v27;
    if (v25) {
      v28 = 2 * *(unsigned __int16*)(v24 + 2);
      v20 += v28;
      if (v28 <= *(v23 - 1)) {
        v28 = *(v23 - 1);
      }
      *(v23 - 1) = v28;
    }
  LABEL_17:
    v29 = result + 1;
    v30 = v16 + 104LL * (unsigned int)(result + 1);
    if ((*(_BYTE*)(v30 + 1) & 1) != 0) {
      v31 = false;
      v32 = *(_DWORD*)(v17 + 4LL * v29);
      if (v32 == 0) {
        goto LABEL_6;
      }
    }
    else {
      v31 = *(_WORD*)(v30 + 2) != 0;
      v32 = *(_DWORD*)(v17 + 4LL * v29);
      if (v32 == 0) {
        goto LABEL_6;
      }
    }
    v33 = *v22;
    v20 += v32;
    if (v32 > *v22) {
      v33 = v32;
    }
    *v22 = v33;
    if (v31) {
      v34 = 2 * *(unsigned __int16*)(v30 + 2);
      v20 += v34;
      if (v34 <= *v23) {
        v34 = *v23;
      }
      *v23 = v34;
    }
  LABEL_6:
    result = (unsigned int)(result + 2);
    v21 -= 2;
    v22 += 2;
    v23 += 2;
  } while (-(__int64)(v15 & 0xFFFFFFFE) != v21);
  v19 = -v21;
  if ((v15 & 1) == 0) {
    goto LABEL_38;
  }
LABEL_28:
  v35 = v18 + v19;
  v36 = v16 + 104LL * (unsigned int)(v18 + v19);
  if ((*(_BYTE*)(v36 + 1) & 1) != 0) {
    v37 = false;
    v38 = *(_DWORD*)(v17 + 4LL * v35);
    if (v38 == 0) {
      goto LABEL_38;
    }
  }
  else {
    v37 = *(_WORD*)(v36 + 2) != 0;
    v38 = *(_DWORD*)(v17 + 4LL * v35);
    if (v38 == 0) {
      goto LABEL_38;
    }
  }
  v20 += v38;
  v39 = v153[v19];
  if (v38 > v39) {
    v39 = v38;
  }
  v153[v19] = v39;
  if (v37) {
    v40 = 2 * *(unsigned __int16*)(v36 + 2);
    v20 += v40;
    if (v40 <= *(_DWORD*)&v150[4 * v19]) {
      v40 = *(_DWORD*)&v150[4 * v19];
    }
    *(_DWORD*)&v150[4 * v19] = v40;
  }
LABEL_38:
  *a3 = v20;
  if ((v14 & 1) != 0) {
    v41 = 1;
    v42 = *(_DWORD*)(a1 + 364);
    if (v42 != 0) {
      goto LABEL_40;
    }
  LABEL_43:
    v45 = 0;
    goto LABEL_78;
  }
  v41 = *(_BYTE*)(a1 + 341);
  v42 = *(_DWORD*)(a1 + 364);
  if (v42 == 0) {
    goto LABEL_43;
  }
LABEL_40:
  v43 = *(_DWORD*)(a1 + 360);
  if (v42 == 1) {
    v44 = 0;
    v45 = 0;
    goto LABEL_67;
  }
  result = 104;
  v46 = 0;
  v45 = 0;
  v47 = *(_DWORD*)(a1 + 360);
  v48 = (unsigned int*)v151;
  v49 = (unsigned int*)v154;
  while (2) {
    v50 = v16 + 104LL * v47;
    if ((*(_BYTE*)(v50 + 1) & 1) != 0) {
      v51 = false;
      v52 = *(_DWORD*)(v17 + 4LL * v47);
      if (v52 == 0) {
        goto LABEL_56;
      }
    }
    else {
      v51 = *(_WORD*)(v50 + 2) != 0;
      v52 = *(_DWORD*)(v17 + 4LL * v47);
      if (v52 == 0) {
        goto LABEL_56;
      }
    }
    v53 = *(v49 - 1);
    v45 += v52;
    if (v52 > v53) {
      v53 = v52;
    }
    *(v49 - 1) = v53;
    if (v51) {
      v54 = 2 * *(unsigned __int16*)(v50 + 2);
      v45 += v54;
      if (v54 <= *(v48 - 1)) {
        v54 = *(v48 - 1);
      }
      *(v48 - 1) = v54;
    }
  LABEL_56:
    v55 = v47 + 1;
    v56 = v16 + 104LL * (v47 + 1);
    if ((*(_BYTE*)(v56 + 1) & 1) != 0) {
      v57 = false;
      v58 = *(_DWORD*)(v17 + 4LL * v55);
      if (v58 == 0) {
        goto LABEL_45;
      }
    }
    else {
      v57 = *(_WORD*)(v56 + 2) != 0;
      v58 = *(_DWORD*)(v17 + 4LL * v55);
      if (v58 == 0) {
        goto LABEL_45;
      }
    }
    v59 = *v49;
    v45 += v58;
    if (v58 > *v49) {
      v59 = v58;
    }
    *v49 = v59;
    if (v57) {
      v60 = 2 * *(unsigned __int16*)(v56 + 2);
      v45 += v60;
      if (v60 <= *v48) {
        v60 = *v48;
      }
      *v48 = v60;
    }
  LABEL_45:
    v47 += 2;
    v46 -= 2;
    v48 += 2;
    v49 += 2;
    if (-(__int64)(v42 & 0xFFFFFFFE) != v46) {
      continue;
    }
    break;
  }
  v44 = -v46;
  if ((v42 & 1) == 0) {
    goto LABEL_78;
  }
LABEL_67:
  v61 = v43 + v44;
  v62 = v16 + 104LL * (unsigned int)(v43 + v44);
  if ((*(_BYTE*)(v62 + 1) & 1) != 0) {
    v63 = false;
    v64 = *(_DWORD*)(v17 + 4LL * v61);
    if (v64 == 0) {
      goto LABEL_78;
    }
  }
  else {
    v63 = *(_WORD*)(v62 + 2) != 0;
    v64 = *(_DWORD*)(v17 + 4LL * v61);
    if (v64 == 0) {
      goto LABEL_78;
    }
  }
  v45 += v64;
  LODWORD(result) = v153[v44];
  if (v64 <= (unsigned int)result) {
    result = (unsigned int)result;
  }
  else {
    result = v64;
  }
  v153[v44] = result;
  if (v63) {
    v65 = 2 * *(unsigned __int16*)(v62 + 2);
    v45 += v65;
    if (v65 <= *(_DWORD*)&v150[4 * v44]) {
      v65 = *(_DWORD*)&v150[4 * v44];
    }
    *(_DWORD*)&v150[4 * v44] = v65;
  }
LABEL_78:
  a3[1] = v45;
  if (v42 > v15) {
    v15 = v42;
  }
  if ((v41 & 1) != 0) {
    v66 = 1;
    v67 = *(_DWORD*)(a1 + 556);
    if (v67 != 0) {
      goto LABEL_82;
    }
  LABEL_85:
    v70 = 0;
    goto LABEL_120;
  }
  v66 = *(_BYTE*)(a1 + 533);
  v67 = *(_DWORD*)(a1 + 556);
  if (v67 == 0) {
    goto LABEL_85;
  }
LABEL_82:
  v68 = *(_DWORD*)(a1 + 552);
  if (v67 == 1) {
    v69 = 0;
    v70 = 0;
    goto LABEL_109;
  }
  result = 104;
  v71 = 0;
  v70 = 0;
  v72 = *(_DWORD*)(a1 + 552);
  v73 = (unsigned int*)v151;
  v74 = (unsigned int*)v154;
  while (2) {
    v75 = v16 + 104LL * v72;
    if ((*(_BYTE*)(v75 + 1) & 1) != 0) {
      v76 = false;
      v77 = *(_DWORD*)(v17 + 4LL * v72);
      if (v77 == 0) {
        goto LABEL_98;
      }
    }
    else {
      v76 = *(_WORD*)(v75 + 2) != 0;
      v77 = *(_DWORD*)(v17 + 4LL * v72);
      if (v77 == 0) {
        goto LABEL_98;
      }
    }
    v78 = *(v74 - 1);
    v70 += v77;
    if (v77 > v78) {
      v78 = v77;
    }
    *(v74 - 1) = v78;
    if (v76) {
      v79 = 2 * *(unsigned __int16*)(v75 + 2);
      v70 += v79;
      if (v79 <= *(v73 - 1)) {
        v79 = *(v73 - 1);
      }
      *(v73 - 1) = v79;
    }
  LABEL_98:
    v80 = v72 + 1;
    v81 = v16 + 104LL * (v72 + 1);
    if ((*(_BYTE*)(v81 + 1) & 1) != 0) {
      v82 = false;
      v83 = *(_DWORD*)(v17 + 4LL * v80);
      if (v83 == 0) {
        goto LABEL_87;
      }
    }
    else {
      v82 = *(_WORD*)(v81 + 2) != 0;
      v83 = *(_DWORD*)(v17 + 4LL * v80);
      if (v83 == 0) {
        goto LABEL_87;
      }
    }
    v84 = *v74;
    v70 += v83;
    if (v83 > *v74) {
      v84 = v83;
    }
    *v74 = v84;
    if (v82) {
      v85 = 2 * *(unsigned __int16*)(v81 + 2);
      v70 += v85;
      if (v85 <= *v73) {
        v85 = *v73;
      }
      *v73 = v85;
    }
  LABEL_87:
    v72 += 2;
    v71 -= 2;
    v73 += 2;
    v74 += 2;
    if (-(__int64)(v67 & 0xFFFFFFFE) != v71) {
      continue;
    }
    break;
  }
  v69 = -v71;
  if ((v67 & 1) == 0) {
    goto LABEL_120;
  }
LABEL_109:
  v86 = v68 + v69;
  v87 = v16 + 104LL * (unsigned int)(v68 + v69);
  if ((*(_BYTE*)(v87 + 1) & 1) != 0) {
    v88 = false;
    v89 = *(_DWORD*)(v17 + 4LL * v86);
    if (v89 == 0) {
      goto LABEL_120;
    }
  }
  else {
    v88 = *(_WORD*)(v87 + 2) != 0;
    v89 = *(_DWORD*)(v17 + 4LL * v86);
    if (v89 == 0) {
      goto LABEL_120;
    }
  }
  v70 += v89;
  LODWORD(result) = v153[v69];
  if (v89 <= (unsigned int)result) {
    result = (unsigned int)result;
  }
  else {
    result = v89;
  }
  v153[v69] = result;
  if (v88) {
    v90 = 2 * *(unsigned __int16*)(v87 + 2);
    v70 += v90;
    if (v90 <= *(_DWORD*)&v150[4 * v69]) {
      v90 = *(_DWORD*)&v150[4 * v69];
    }
    *(_DWORD*)&v150[4 * v69] = v90;
  }
LABEL_120:
  a3[2] = v70;
  if (v67 <= v15) {
    v67 = v15;
  }
  if ((v66 & 1) != 0) {
    v91 = 1;
    v92 = *(_DWORD*)(a1 + 748);
    if (v92 != 0) {
      goto LABEL_124;
    }
  LABEL_127:
    v95 = 0;
    goto LABEL_161;
  }
  v91 = *(_BYTE*)(a1 + 725);
  v92 = *(_DWORD*)(a1 + 748);
  if (v92 == 0) {
    goto LABEL_127;
  }
LABEL_124:
  v93 = *(_DWORD*)(a1 + 744);
  if (v92 == 1) {
    v94 = 0;
    v95 = 0;
    goto LABEL_151;
  }
  result = 104;
  v96 = 0;
  v95 = 0;
  v97 = *(_DWORD*)(a1 + 744);
  v98 = (unsigned int*)v151;
  v99 = (unsigned int*)v154;
  while (2) {
    v100 = v16 + 104LL * v97;
    if ((*(_BYTE*)(v100 + 1) & 1) != 0) {
      v101 = false;
      v102 = *(_DWORD*)(v17 + 4LL * v97);
      if (v102 == 0) {
        goto LABEL_140;
      }
    }
    else {
      v101 = *(_WORD*)(v100 + 2) != 0;
      v102 = *(_DWORD*)(v17 + 4LL * v97);
      if (v102 == 0) {
        goto LABEL_140;
      }
    }
    v103 = *(v99 - 1);
    v95 += v102;
    if (v102 > v103) {
      v103 = v102;
    }
    *(v99 - 1) = v103;
    if (v101) {
      v104 = 2 * *(unsigned __int16*)(v100 + 2);
      v95 += v104;
      if (v104 <= *(v98 - 1)) {
        v104 = *(v98 - 1);
      }
      *(v98 - 1) = v104;
    }
  LABEL_140:
    v105 = v97 + 1;
    v106 = v16 + 104LL * (v97 + 1);
    if ((*(_BYTE*)(v106 + 1) & 1) != 0) {
      v107 = false;
      v108 = *(_DWORD*)(v17 + 4LL * v105);
      if (v108 == 0) {
        goto LABEL_129;
      }
    }
    else {
      v107 = *(_WORD*)(v106 + 2) != 0;
      v108 = *(_DWORD*)(v17 + 4LL * v105);
      if (v108 == 0) {
        goto LABEL_129;
      }
    }
    v109 = *v99;
    v95 += v108;
    if (v108 > *v99) {
      v109 = v108;
    }
    *v99 = v109;
    if (v107) {
      v110 = 2 * *(unsigned __int16*)(v106 + 2);
      v95 += v110;
      if (v110 <= *v98) {
        v110 = *v98;
      }
      *v98 = v110;
    }
  LABEL_129:
    v97 += 2;
    v96 -= 2;
    v98 += 2;
    v99 += 2;
    if (-(__int64)(v92 & 0xFFFFFFFE) != v96) {
      continue;
    }
    break;
  }
  v94 = -v96;
  if ((v92 & 1) == 0) {
    goto LABEL_161;
  }
LABEL_151:
  v111 = v93 + v94;
  v112 = v16 + 104LL * v111;
  if ((*(_BYTE*)(v112 + 1) & 1) != 0) {
    v113 = false;
    v114 = *(_DWORD*)(v17 + 4LL * v111);
    if (v114 == 0) {
      goto LABEL_161;
    }
  }
  else {
    v113 = *(_WORD*)(v112 + 2) != 0;
    v114 = *(_DWORD*)(v17 + 4LL * v111);
    if (v114 == 0) {
      goto LABEL_161;
    }
  }
  v95 += v114;
  v115 = v153[v94];
  if (v114 > v115) {
    v115 = v114;
  }
  v153[v94] = v115;
  if (v113) {
    v116 = 2 * *(unsigned __int16*)(v112 + 2);
    v95 += v116;
    if (v116 <= *(_DWORD*)&v150[4 * v94]) {
      v116 = *(_DWORD*)&v150[4 * v94];
    }
    *(_DWORD*)&v150[4 * v94] = v116;
  }
LABEL_161:
  a3[3] = v95;
  if (v92 <= v67) {
    v117 = v67;
  }
  else {
    v117 = v92;
  }
  if (v117 != 0) {
    v118 = v117 & 7;
    if (v117 >= 8) {
      v122 = 0;
      v120 = 0;
      v123 = v152;
      do {
        v122 -= 8;
        if (*(v123 - 4) != 0) {
          ++v120;
        }
        if (*(v123 - 3) != 0) {
          ++v120;
        }
        if (*(v123 - 2) != 0) {
          ++v120;
        }
        if (*(v123 - 1) != 0) {
          ++v120;
        }
        if (*v123 != 0) {
          ++v120;
        }
        v124 = v123[1] == 0;
        v125 = v123[2];
        v126 = v123[3];
        v123 += 8;
        if (!v124) {
          ++v120;
        }
        if (v125 != 0) {
          ++v120;
        }
        if (v126 != 0) {
          ++v120;
        }
      } while (-(__int64)(v117 & 0xFFFFFFF8) != v122);
      v119 = -v122;
      if ((v117 & 7) != 0) {
        goto LABEL_188;
      }
    }
    else {
      v119 = 0;
      v120 = 0;
      if ((v117 & 7) == 0) {
        goto LABEL_192;
      }
    LABEL_188:
      v127 = (int*)&v150[4 * v119];
      do {
        v128 = *v127++;
        if (v128 != 0) {
          ++v120;
        }
        --v118;
      } while (v118 != 0);
    }
  LABEL_192:
    v121 = 144 * v120;
    v129 = v117 & 7;
    if (v117 >= 8) {
      v133 = 0;
      v132 = 0;
      v131 = 0;
      v134 = v152;
      v135 = &v155;
      do {
        v133 -= 8;
        v136 = *((_DWORD*)v135 + 1) + *(_DWORD*)v135 + *((_DWORD*)v135 - 1) +
               *((_DWORD*)v135 - 2) + *((_DWORD*)v135 - 3) +
               *((_DWORD*)v135 - 4) + v131;
        v137 = v134[1] + *v134 + *(v134 - 1) + *(v134 - 2) + *(v134 - 3) +
               *(v134 - 4) + v132;
        v139 = *((_DWORD*)v135 + 2);
        v138 = *((_DWORD*)v135 + 3);
        v135 += 4;
        v131 = v138 + v139 + v136;
        v140 = v134[2];
        result = (unsigned int)v134[3];
        v134 += 8;
        v132 = result + v140 + v137;
      } while (-(__int64)(v117 & 0xFFFFFFF8) != v133);
      v130 = -v133;
      if ((v117 & 7) != 0) {
        goto LABEL_198;
      }
    }
    else {
      v130 = 0;
      v132 = 0;
      v131 = 0;
      if ((v117 & 7) == 0) {
        goto LABEL_200;
      }
    LABEL_198:
      v141 = (int*)&v150[4 * v130];
      v142 = &v153[v130];
      do {
        v143 = *v142++;
        --v129;
        v131 += v143;
        v144 = *v141++;
        v132 += v144;
      } while (v129 != 0);
    }
  }
  else {
    v121 = 0;
    v131 = 0;
    v132 = 0;
  }
LABEL_200:
  if (*(_DWORD*)(a1 + 116) == 1 || *(_DWORD*)(a1 + 308) == 1 ||
      *(_DWORD*)(a1 + 500) == 1 || *(_DWORD*)(a1 + 692) == 1) {
    v145 = 144;
    v146 = 160;
  }
  else {
    v145 = 96;
    v146 = 112;
  }
  v147 = v131 * v146 + v132 * v145;
  v148 = v132 + v131;
  if ((v91 & 1) != 0) {
    v149 = v131;
  }
  else {
    v149 = 0;
  }
  *a2 = v121 + 208 * v117 + 16 * (v148 + v149) + v147;
  return result;
}

__int64 GameHr_37c0b0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;

  v3 = *(_QWORD**)(a1 + 96);
  v4 = *(_QWORD*)(a1 + 80);
  if ((*(_BYTE*)(a1 + 120) & 8) == 0) {
    GameRoutine_37b880(*(_QWORD*)(a1 + 96));
  }
  if (v3 != nullptr) {
    GameRoutine_37b870(v3);
    --*(_DWORD*)(v4 + 1516);
    v8 = *(_QWORD*)(v4 + 1528);
    *(_QWORD*)(v4 + 1528) = v3;
    *v3 = v8;
  }
  if (a2 != 0 && *(_BYTE*)(a2 + 13) != 0) {
    v9 = GameRoutine_3865e0(a2);
    if (a3 == 0) {
      goto LABEL_12;
    }
  }
  else {
    v9 = 0;
    if (a3 == 0) {
      goto LABEL_12;
    }
  }
  if (*(_BYTE*)(a3 + 13) != 0) {
    v10 = GameRoutine_3865e0(a3);
    goto LABEL_13;
  }
LABEL_12:
  v10 = 0;
LABEL_13:
  v11 = v9 + 112;
  v12 = v10 + 112;
  if (v9 == 0) {
    v11 = 0;
  }
  if (v10 == 0) {
    v12 = 0;
  }
  *(_QWORD*)(a1 + 32) = v11;
  *(_QWORD*)(a1 + 40) = v12;
  if (v9 == 0) {
    *(_QWORD*)(a1 + 48) = 0;
    if (v10 != 0) {
      goto LABEL_19;
    }
  LABEL_21:
    v13 = 0;
    goto LABEL_22;
  }
  *(_QWORD*)(a1 + 48) = *(_QWORD*)(v9 + 152);
  if (v10 == 0) {
    goto LABEL_21;
  }
LABEL_19:
  v13 = *(_QWORD*)(v10 + 152);
LABEL_22:
  v14 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)(a1 + 56) = v13;
  *(_QWORD*)(a1 + 104) = v9;
  *(_QWORD*)(a1 + 112) = v10;
  result = GameRoutine_37be20(a1, a2, a3, v14);
  *(_QWORD*)(a1 + 96) = result;
  return result;
}

__int64 GameHr_385a70(__int64 a1, __int64 a2)
{
  unsigned int v3;
  __int64 v4;

  v3 = a1;
  v4 = GameRoutine_55afc0(a1);
  return (*(__int64 (**)(__int64, __int64, const char*, _QWORD, __int64))(
      *(_QWORD*)v4 + 88LL))(v4, 32,
                            "/Inside/Lib/PhysX/O/physx/source/"
                            "simulationcontroller/src/ScFiltering.cpp",
                            v3, a2);
}

__int64 GameHr_385d80(__int64 a1)
{
  __int64 v1;

  v1 = GameRoutine_55afc0(a1);
  return (*(__int64 (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v1 + 88LL))(
      v1, 2,
      "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/"
      "ScFiltering.cpp",
      236, "Filtering: eCALLBACK set but no filter callback defined.");
}

__int64 GameHr_386910(_QWORD* a1)
{
  __int64 result;

  result = GameRoutine_30fc10();
  *a1 = GameData_1f85290;
  return result;
}

__int64 GameHr_3898a0(__int64 a1, __int64 a2)
{
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;

  v2 = *(_DWORD*)(a2 + 16);
  if (v2 == -1) {
    v14 = GameRoutine_55afc0(a1);
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v14 + 88LL))(
        v14, 32,
        "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/ScScene.cpp",
        1382,
        "Unexpectedly unregistered an interaction that does not have a valid "
        "interaction ID.");
  }
  else {
    v3 = *(unsigned __int8*)(a2 + 28);
    v4 = a1 + 16 * v3;
    v6 = *(_QWORD*)(v4 + 104);
    v5 = v4 + 104;
    v7 = *(_DWORD*)(v5 + 8) - 1;
    v8 = *(_QWORD*)(v6 + 8LL * v7);
    *(_DWORD*)(v5 + 8) = v7;
    *(_QWORD*)(v6 + 8LL * v2) = v8;
    *(_DWORD*)(a2 + 16) = -1;
    if (v2 < v7) {
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)v5 + 8LL * v2) + 16LL) = v2;
    }
    v9 = *(_DWORD*)(a1 + 152 + 4 * v3);
    if (v2 < v9) {
      v10 = v9 - 1;
      *(_DWORD*)(a1 + 152 + 4 * v3) = v10;
      if (v10 < *(_DWORD*)(v5 + 8)) {
        v11 = *(_QWORD*)(*(_QWORD*)v5 + 8LL * v10);
        v12 = *(_QWORD*)(*(_QWORD*)v5 + 8LL * v2);
        *(_QWORD*)(*(_QWORD*)v5 + 8LL * v2) = v11;
        *(_DWORD*)(v12 + 16) = v10;
        *(_DWORD*)(v11 + 16) = v2;
        *(_QWORD*)(*(_QWORD*)v5 + 8LL * v10) = v12;
      }
    }
    return GameRoutine_37d000(*(_QWORD*)(a1 + 968));
  }
}

__int64 GameHr_38b3e0(__int64 result, __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;

  v2 = *(_QWORD**)(a2 + 352);
  if (v2 != nullptr) {
    v3 = result;
    result = GameRoutine_311010(*(_QWORD**)(a2 + 352));
    --*(_DWORD*)(v3 + 1404);
    v4 = *(_QWORD*)(v3 + 1416);
    *(_QWORD*)(v3 + 1416) = v2;
    *v2 = v4;
  }
  return result;
}

__int64 GameHr_38ee40(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v6;
  __int64 v7;
  _QWORD v9[3];

  v4 = *(__int64**)(a2 + 208);
  if (v4 != nullptr) {
    v6 = *v4;
  }
  else {
    v6 = 0;
  }
  v9[1] = v2;
  v9[2] = v3;
  v7 = *(_QWORD*)(a1 + 368);
  v9[0] = *(_QWORD*)(a2 + 96);
  return (*(__int64 (**)(__int64, __int64, _QWORD*))(*(_QWORD*)v7 + 80LL))(
      v7, v6, v9);
}

__int64 GameHr_38ef90(__int64 result)
{
  int v1;

  *(_QWORD*)result = GameData_1f852e0;
  v1 = *(_DWORD*)(result + 36);
  if ((v1 & 0x80000000) == 0 && (v1 & 0x7FFFFFFF) != 0 &&
      *(_QWORD*)(result + 24) != 0) {
    return (*(__int64 (**)(_QWORD))(**(_QWORD**)(result + 8) + 24LL))(
        *(_QWORD*)(result + 8));
  }
  return result;
}

__int64 GameHr_3940c0(__int64 a1)
{
  *(_QWORD*)a1 = GameData_1f863c0;
  **(_QWORD**)(a1 + 80) = 0;
  return GameRoutine_386950();
}

__int64 GameHr_3a14b0(__int64 a1, long double a2)
{

#pragma clang fp contract(off)
  unsigned int* v4;
  __int64 result;
  unsigned int v6;
  unsigned __int64* v7;
  int* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned int* v26;
  int v27;
  int v28;
  unsigned int v29;
  unsigned __int64 v30;
  unsigned int* v31;
  __int64 v32;
  _DWORD* v33;
  int v34;
  __int64 v35;
  int v36;
  char v37;
  unsigned __int64 v38;
  int v39;
  __int64 v40;
  float v41;
  int v42;
  float v43;
  unsigned int v44;
  unsigned int v45;
  __int64 v46;
  __int64 v47;
  unsigned int* v48;
  unsigned int* v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int* v53;
  unsigned int v54;
  unsigned int v55;
  unsigned __int64 v56;
  unsigned int* v57;
  unsigned int* v58;
  unsigned int v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  bool v63;
  bool v64;
  unsigned __int64 v66;
  int v67;
  unsigned __int64 v68;
  __int64 v69;
  unsigned int* v70;
  unsigned int v71;
  unsigned int v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  unsigned int* v75;
  unsigned int* v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v80;
  bool v81;
  bool v82;
  int v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned int* v91;
  unsigned int v92;
  __int64 v93;
  unsigned int* v94;
  unsigned int v95;
  unsigned int v96;
  unsigned int v97;
  __int64 v98;
  int v99;
  int v100;
  __int64 v101;
  __int64 v102;
  int v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  unsigned __int64* v108;
  unsigned int* v109;
  unsigned int* v110;
  __int64 v111;
  int v112;
  __int64 v113;
  unsigned __int64 v114;
  unsigned __int64 v115;
  int v116;
  unsigned int v117;
  __int64 v118;
  unsigned int v119;
  int v120;
  _QWORD v121[2];
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  float v126;

  *(_DWORD*)(a1 + 64) = 0;
  v4 = (unsigned int*)(a1 + 64);
  result = *(_QWORD*)(a1 + 40);
  v6 = *(v4 - 4);
  v7 = (unsigned __int64*)(v4 - 2);
  v8 = (int*)(v4 + 1);
  v9 = *(_DWORD*)(result + 56);
  if (v9 != 0) {
    if ((unsigned int)(5 * v9) < *(_DWORD*)(result + 216)) {
      return physx_Bp_BroadPhaseSap_batchUpdateFewUpdates((_QWORD*)result, v6,
                                                          v7, v4, v8, a2);
    }
    v10 = *(_QWORD*)(result + 112);
    v11 = *(_QWORD*)(result + 104);
    v12 = *v8;
    v13 = *(_QWORD*)(result + 64);
    v122 = *(_QWORD*)(result + 120);
    v123 = v11;
    v124 = v11;
    v125 = v10;
    v14 = 8LL * v6;
    v121[0] = v10;
    v121[1] = v122;
    v15 = *(_QWORD*)(result + v14 + 152);
    v16 = *(unsigned int*)(v15 + 4);
    if ((unsigned int)v16 >> 1 != 0x1FFFFFFF) {
      v17 = *(_QWORD*)(result + 104 + 8LL * v6);
      v18 = v16 >> 1;
      v19 = *(_QWORD*)(result + 72);
      v20 = *(_QWORD*)(result + v14 + 128);
      v21 = v121[2 * v6];
      v22 = v121[(2 * v6) | 1];
      v23 = v13 + 4LL * v6;
      v24 = *(_QWORD*)(result + 176);
      v126 = *(float*)(v23 + 24LL * (unsigned int)v18) -
             *(float*)(*(_QWORD*)(result + 88) + 4 * v18);
      if (v126 < 0.0) {
        v25 = ~LODWORD(v126);
      }
      else {
        v25 = LODWORD(v126) | 0x80000000;
      }
      *(_DWORD*)(v20 + 4) = (v25 & 0xFFFFFFF0) - 16;
      v26 = *(unsigned int**)(result + 192);
      v27 = *(_DWORD*)(result + 56);
      v28 = *(unsigned __int8*)(v24 + v18);
      *(_QWORD*)v26 = 0;
      v29 = *(_DWORD*)(v15 + 8);
      if (v29 >> 1 != 0x1FFFFFFF) {
        v34 = *(unsigned __int8*)(v24 + v18);
        v35 = 2;
        v119 = 0;
        v30 = (unsigned __int64)v26;
        v110 = v4 + 1;
        v111 = result;
        v108 = (unsigned __int64*)(v4 - 2);
        v109 = v4;
        v36 = 2 * v27 - v28;
        v106 = v22;
        v107 = v21;
        v104 = v24;
        v105 = v19;
        v113 = v23;
        while (1) {
          v37 = v29;
          v38 = (unsigned __int64)v29 >> 1;
          v39 = v34;
          v34 = *(unsigned __int8*)(v24 + v38);
          if ((v34 | v39) != 0) {
            v40 = *(_QWORD*)(result + 88);
            v41 = *(float*)(v40 + 4 * v38);
            if ((v29 & 1) != 0) {
              v42 = 20;
              v43 = v41 + *(float*)(v23 + 24LL * (unsigned int)v38 + 12);
            }
            else {
              v42 = -16;
              v43 = *(float*)(v23 + 24LL * (unsigned int)v38) - v41;
            }
            v126 = v43;
            v36 -= v34;
            if (v43 < 0.0) {
              v44 = ~LODWORD(v43);
            }
            else {
              v44 = LODWORD(v43) | 0x80000000;
            }
            v45 = (v44 & 0xFFFFFFF0) + v42;
            *(_DWORD*)(v20 + 4 * v35) = v45;
            v46 = *(_QWORD*)(result + 208);
            v47 = *(unsigned int*)(v46 + 4 * v35);
            if (*(_DWORD*)(v20 + 4 * v47) > v45) {
              v116 = v36;
              v48 = (unsigned int*)(v21 + 8 * v38);
              v49 = (unsigned int*)(v22 + 8 * v38);
              v126 = *(float*)(v40 + 4 * v38) +
                     *(float*)(v23 + 24LL * (unsigned int)v38 + 12);
              if (v126 < 0.0) {
                v50 = ~LODWORD(v126);
              }
              else {
                v50 = LODWORD(v126) | 0x80000000;
              }
              v120 = *(_DWORD*)(v19 + 4 * v38);
              v117 = v38;
              v118 = 7LL * (v120 & 7);
              if ((v37 & 1) != 0) {
                v51 = v35;
                do {
                  v56 = *(unsigned int*)(v15 + 4 * v47);
                  if ((v56 & 1) == 0) {
                    v57 = (unsigned int*)(v21 + 4 * v56);
                    v58 = (unsigned int*)(v22 + 4 * v56);
                    v60 = *v57;
                    v59 = v57[1];
                    v62 = *v58;
                    v61 = v58[1];
                    v63 = v48[1] > v60 && v59 > *v48;
                    v64 = v63 && v49[1] > v62;
                    if (v64 && v61 > *v49) {
                      v66 = v56 >> 1;
                      v67 = *(_DWORD*)(v19 + 4 * (v56 >> 1));
                      if (v120 != v67 &&
                          *(_BYTE*)(*(_QWORD*)(result + 80) + (v67 & 7) +
                                    (unsigned __int64)(unsigned int)v118) ==
                              1) {
                        v68 = *v7;
                        if (v119 == v12) {
                          v114 = v30;
                          v112 = 2 * v12;
                          v69 = physx_Bp_resizeBroadPhasePairArray(
                              v12, 2 * v12, *(_QWORD*)(result + 8), v68);
                          v7 = v108;
                          v4 = v109;
                          v68 = v69;
                          v8 = (int*)v110;
                          result = v111;
                          v30 = v114;
                          v12 = v112;
                          *v108 = v68;
                          v24 = v104;
                          v19 = v105;
                          v22 = v106;
                          v21 = v107;
                          v46 = *(_QWORD*)(v111 + 208);
                        }
                        v53 = (unsigned int*)(v68 + 8LL * v119);
                        if (v117 >= (unsigned int)v66) {
                          v54 = v66;
                        }
                        else {
                          v54 = v117;
                        }
                        if (v117 <= (unsigned int)v66) {
                          v55 = v66;
                        }
                        else {
                          v55 = v117;
                        }
                        ++v119;
                        *v53 = v54;
                        v53[1] = v55;
                      }
                    }
                  }
                  v47 = *(unsigned int*)(v46 + 4 * v47);
                  --v51;
                } while (v45 < *(_DWORD*)(v20 + 4 * v47));
              }
              else {
                v51 = v35;
                v52 = (v50 & 0xFFFFFFF0) + 20;
                do {
                  v73 = *(unsigned int*)(v15 + 4 * v47);
                  if ((v73 & 1) != 0) {
                    v74 = v73 >> 1;
                    if (*(_DWORD*)(v20 +
                                   4LL *
                                       *(unsigned int*)(v17 + 8 * (v73 >> 1))) <
                        v52) {
                      v75 = (unsigned int*)(v21 + 8 * v74);
                      v76 = (unsigned int*)(v22 + 8 * v74);
                      v78 = *v75;
                      v77 = v75[1];
                      v80 = *v76;
                      v79 = v76[1];
                      v81 = v48[1] > v78 && v77 > *v48;
                      v82 = v81 && v49[1] > v80;
                      if (v82 && v79 > *v49) {
                        v84 = *(_DWORD*)(v19 + 4 * v74);
                        if (v120 != v84 && *(_BYTE*)(*(_QWORD*)(result + 80) +
                                                     (v84 & 7) + v118) == 1) {
                          v85 = *v7;
                          if (v119 == v12) {
                            v115 = v30;
                            v103 = 2 * v12;
                            v86 = physx_Bp_resizeBroadPhasePairArray(
                                v12, 2 * v12, *(_QWORD*)(result + 8), v85);
                            v7 = v108;
                            v4 = v109;
                            v85 = v86;
                            v8 = (int*)v110;
                            result = v111;
                            v30 = v115;
                            v12 = v103;
                            *v108 = v85;
                            v24 = v104;
                            v19 = v105;
                            v46 = *(_QWORD*)(v111 + 208);
                            v22 = v106;
                            v21 = v107;
                          }
                          v70 = (unsigned int*)(v85 + 8LL * v119);
                          if (v117 <= (unsigned int)v74) {
                            v71 = v74;
                          }
                          else {
                            v71 = v117;
                          }
                          ++v119;
                          if (v117 >= (unsigned int)v74) {
                            v72 = v74;
                          }
                          else {
                            v72 = v117;
                          }
                          *v70 = v71;
                          v70[1] = v72;
                        }
                      }
                    }
                  }
                  v47 = *(unsigned int*)(v46 + 4 * v47);
                  --v51;
                } while (v45 < *(_DWORD*)(v20 + 4 * v47));
              }
              v87 = *(_QWORD*)(result + 200);
              v88 = *(unsigned int*)(v46 + 4 * v35);
              v23 = v113;
              v36 = v116;
              v89 = *(unsigned int*)(v87 + 4 * v35);
              v90 = *(unsigned int*)(v87 + 4 * v47);
              *(_DWORD*)(v87 + 4 * v88) = v89;
              *(_DWORD*)(v46 + 4 * v89) = v88;
              *(_DWORD*)(v87 + 4 * v35) = v90;
              *(_DWORD*)(v46 + 4 * v35) = v47;
              *(_DWORD*)(v46 + 4 * v90) = v35;
              v91 = (unsigned int*)(v30 + 16);
              *(_DWORD*)(v87 + 4 * v47) = v35;
              do {
                v92 = *(v91 - 4);
                v91 -= 2;
              } while (v51 < v92);
              v26 = *(unsigned int**)(result + 192);
              v30 = (unsigned __int64)(v91 - 2);
              if (v91 - 2 == v26 || v51 > *(v91 - 1) + 1) {
                *v91 = v51;
                v30 = (unsigned __int64)v91;
              }
              *(_DWORD*)(v30 + 4) = v35;
              v34 = 1;
            }
          }
          else {
            if (v36 == 0) {
              goto LABEL_10;
            }
            v34 = 0;
          }
          v35 = (unsigned int)(v35 + 1);
          v29 = *(_DWORD*)(v15 + 4LL * (unsigned int)v35);
          if (v29 >> 1 == 0x1FFFFFFF) {
            goto LABEL_10;
          }
        }
      }
      v119 = 0;
      v30 = (unsigned __int64)v26;
    LABEL_10:
      v31 = v26 + 2;
      *v4 = v119;
      *v8 = v12;
      v32 = *(_QWORD*)(result + 208);
      if ((unsigned __int64)(v26 + 2) > v30) {
        v33 = *(_DWORD**)(result + 208);
      LABEL_12:
        *v33 = 0;
        return result;
      }
      v93 = *(_QWORD*)(result + 200);
      v33 = *(_DWORD**)(result + 208);
      while (1) {
        v94 = v26;
        v26 = v31;
        v95 = v94[2];
        v96 = v94[3];
        if (v95 <= v96) {
          do {
            *(_DWORD*)(v32 + 4LL * v95) = v95;
            ++v95;
            v96 = v94[3];
          } while (v95 <= v96);
          v95 = *v26;
          if (*v26 <= v96) {
            break;
          }
        }
        if (v95 - 1 <= v96) {
          goto LABEL_100;
        }
      LABEL_89:
        v31 = v26 + 2;
        if ((unsigned __int64)(v26 + 2) > v30) {
          goto LABEL_12;
        }
      }
      v33 = *(_DWORD**)(result + 208);
      v97 = v95 - 1;
      do {
        v97 = *(_DWORD*)(v93 + 4LL * v97);
        if (v95 != v97) {
          v98 = (unsigned int)v33[v97];
          v99 = *(_DWORD*)(v20 + 4LL * v95);
          v100 = *(_DWORD*)(v15 + 4LL * v95);
          v101 = *(unsigned int*)(v15 + 4 * v98);
          *(_DWORD*)(v20 + 4LL * v95) = *(_DWORD*)(v20 + 4 * v98);
          *(_DWORD*)(v15 + 4LL * v95) = *(_DWORD*)(v15 + 4 * v98);
          *(_DWORD*)(v20 + 4 * v98) = v99;
          *(_DWORD*)(v15 + 4 * v98) = v100;
          v102 = (unsigned int)v33[v95];
          v33[v98] = v102;
          v33[v102] = v98;
          *(_DWORD*)(v17 + ((4 * v101) & 0x3FFFFFFF8LL) + 4 * (v101 & 1)) = v95;
          v96 = v94[3];
        }
        ++v95;
      } while (v95 <= v96);
      v95 = *v26;
      if (*v26 - 1 > v96) {
        goto LABEL_89;
      }
      do {
      LABEL_100:
        *(_DWORD*)(v32 + 4LL * v95) = v95 - 1;
        *(_DWORD*)(v93 + 4LL * (v95 - 1)) = v95;
        v63 = v95++ > v94[3];
      } while (!v63);
      goto LABEL_89;
    }
  }
  return result;
}

__int64 GameHr_3a7910(__int64 result)
{
  char* v1;

  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_DWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 88) = 0;
  *(_DWORD*)(result + 264) = 0;
  *(_QWORD*)(result + 280) = 0;
  *(_QWORD*)(result + 288) = 0;
  *(_QWORD*)(result + 296) = 0;
  *(_QWORD*)result = GameData_1f866c0;
  *(_DWORD*)(result + 304) = 0;
  *(_QWORD*)(result + 312) = 0;
  *(_DWORD*)(result + 320) = 0;
  *(_QWORD*)(result + 392) = 0;
  *(_QWORD*)(result + 400) = 0;
  *(_QWORD*)(result + 432) = 0;
  *(_QWORD*)(result + 440) = 0;
  *(_QWORD*)(result + 448) = 0;
  *(_QWORD*)(result + 272) = GameData_1f86810;
  *(_DWORD*)(result + 456) = 0;
  *(_QWORD*)(result + 424) = GameData_1f86810;
  *(_QWORD*)(result + 464) = 0;
  *(_DWORD*)(result + 472) = 0;
  *(_QWORD*)(result + 544) = 0;
  *(_QWORD*)(result + 552) = 0;
  *(_QWORD*)(result + 584) = 0;
  *(_QWORD*)(result + 592) = 0;
  *(_QWORD*)(result + 600) = 0;
  *(_DWORD*)(result + 608) = 0;
  *(_QWORD*)(result + 576) = GameData_1f86810;
  *(_QWORD*)(result + 616) = 0;
  *(_DWORD*)(result + 624) = 0;
  *(_QWORD*)(result + 696) = 0;
  *(_QWORD*)(result + 704) = 0;
  *(_QWORD*)(result + 736) = 0;
  *(_QWORD*)(result + 744) = 0;
  *(_QWORD*)(result + 752) = 0;
  *(_DWORD*)(result + 760) = 0;
  *(_QWORD*)(result + 728) = GameData_1f86810;
  *(_QWORD*)(result + 768) = 0;
  *(_DWORD*)(result + 776) = 0;
  *(_QWORD*)(result + 848) = 0;
  *(_QWORD*)(result + 856) = 0;
  *(_QWORD*)(result + 888) = 0;
  *(_QWORD*)(result + 896) = 0;
  *(_QWORD*)(result + 904) = 0;
  *(_DWORD*)(result + 912) = 0;
  *(_QWORD*)(result + 880) = GameData_1f86810;
  *(_QWORD*)(result + 920) = 0;
  *(_DWORD*)(result + 928) = 0;
  *(_QWORD*)(result + 1000) = 0;
  *(_QWORD*)(result + 1008) = 0;
  *(_QWORD*)(result + 1040) = 0;
  *(_QWORD*)(result + 1048) = 0;
  *(_QWORD*)(result + 1056) = 0;
  *(_DWORD*)(result + 1064) = 0;
  *(_QWORD*)(result + 1032) = GameData_1f86810;
  *(_QWORD*)(result + 1072) = 0;
  *(_DWORD*)(result + 1080) = 0;
  *(_QWORD*)(result + 1152) = 0;
  *(_QWORD*)(result + 1160) = 0;
  *(_QWORD*)(result + 1192) = 0;
  *(_QWORD*)(result + 1200) = 0;
  *(_QWORD*)(result + 1208) = 0;
  *(_DWORD*)(result + 1216) = 0;
  *(_QWORD*)(result + 1184) = GameData_1f86810;
  *(_QWORD*)(result + 1224) = 0;
  *(_DWORD*)(result + 1232) = 0;
  *(_QWORD*)(result + 1304) = 0;
  *(_QWORD*)(result + 1312) = 0;
  *(_QWORD*)(result + 1344) = 0;
  *(_QWORD*)(result + 1352) = 0;
  *(_QWORD*)(result + 1360) = 0;
  *(_DWORD*)(result + 1368) = 0;
  *(_QWORD*)(result + 1336) = GameData_1f86810;
  *(_QWORD*)(result + 1376) = 0;
  *(_DWORD*)(result + 1384) = 0;
  *(_QWORD*)(result + 1456) = 0;
  *(_QWORD*)(result + 1464) = 0;
  *(_QWORD*)(result + 1496) = 0;
  *(_QWORD*)(result + 1504) = 0;
  *(_QWORD*)(result + 1512) = 0;
  *(_DWORD*)(result + 1520) = 0;
  *(_QWORD*)(result + 1488) = GameData_1f86810;
  *(_QWORD*)(result + 1528) = 0;
  *(_DWORD*)(result + 1536) = 0;
  *(_QWORD*)(result + 1608) = 0;
  *(_QWORD*)(result + 1616) = 0;
  *(_QWORD*)(result + 1648) = 0;
  *(_QWORD*)(result + 1656) = 0;
  *(_QWORD*)(result + 1664) = 0;
  *(_DWORD*)(result + 1672) = 0;
  v1 = (char*)GameData_2135800 + 16;
  *(_QWORD*)(result + 1680) = 0;
  *(_QWORD*)(result + 1640) = v1;
  return result;
}

__int64 GameHr_3ac9a0(__int64 a1)
{
  int v1;
  __int64 v2;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  unsigned int v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 i;
  __int64 v17;
  int v18;
  char v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 result;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  int v30;
  unsigned int v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;

  v1 = *(_DWORD*)(a1 + 216);
  v2 = *(unsigned int*)(a1 + 64);
  v4 = v1 + v2;
  if (v1 + (int)v2 <= (*(_DWORD*)(a1 + 68) & 0x7FFFFFFFu)) {
    goto LABEL_17;
  }
  v5 = 2 * *(_DWORD*)(a1 + 68);
  v6 = a1 + 56;
  if (v5 <= v4) {
    v5 = v1 + v2;
  }
  if (v5 <= 0x100) {
    v7 = 256;
  }
  else {
    v7 = v5;
  }
  GameRoutine_3afc20(v6, v7);
  if ((*(_DWORD*)(a1 + 52) & 0x7FFFFFFFu) < v7) {
    GameRoutine_3aedc0(a1 + 40, v7);
    if ((*(_DWORD*)(a1 + 84) & 0x7FFFFFFFu) >= v7) {
    LABEL_9:
      if (*(_BYTE*)(a1 + 408) != 1) {
        goto LABEL_17;
      }
      goto LABEL_13;
    }
  }
  else if ((*(_DWORD*)(a1 + 84) & 0x7FFFFFFFu) >= v7) {
    goto LABEL_9;
  }
  GameRoutine_3afd20(a1 + 72, v7);
  if (*(_BYTE*)(a1 + 408) != 1) {
    goto LABEL_17;
  }
LABEL_13:
  if ((*(_DWORD*)(a1 + 116) & 0x7FFFFFFFu) < v7) {
    GameRoutine_3afe20(a1 + 88, v7);
    if ((*(_DWORD*)(a1 + 148) & 0x7FFFFFFFu) >= v7) {
    LABEL_15:
      if ((*(_DWORD*)(a1 + 180) & 0x7FFFFFFFu) >= v7) {
        goto LABEL_17;
      }
      goto LABEL_16;
    }
  }
  else if ((*(_DWORD*)(a1 + 148) & 0x7FFFFFFFu) >= v7) {
    goto LABEL_15;
  }
  GameRoutine_3aff80(a1 + 120, v7);
  if ((*(_DWORD*)(a1 + 180) & 0x7FFFFFFFu) < v7) {
  LABEL_16:
    GameRoutine_3b00c0(a1 + 152, v7);
  }
LABEL_17:
  v8 = *(unsigned __int8*)(a1 + 408);
  *(_DWORD*)(a1 + 64) = v4;
  *(_DWORD*)(a1 + 48) = v4;
  *(_DWORD*)(a1 + 80) = v4;
  if (v8 == 1) {
    *(_DWORD*)(a1 + 112) = v4;
    *(_DWORD*)(a1 + 144) = v4;
    *(_DWORD*)(a1 + 176) = v4;
  }
  v9 = 8 * v1;
  if (8 * v1 != 0) {
    GameRoutine_1a0b950(*(_QWORD*)(a1 + 56) + 8 * v2, *(_QWORD*)(a1 + 208),
                        (unsigned int)(8 * v1));
  }
  v10 = (unsigned int)(48 * v1);
  if ((_DWORD)v10 != 0) {
    GameRoutine_1a0b950(*(_QWORD*)(a1 + 40) + 48LL * (unsigned int)v2,
                        *(_QWORD*)(a1 + 192), v10);
  }
  v11 = (unsigned int)(16 * v1);
  if ((_DWORD)v11 != 0) {
    GameRoutine_1a0b950(*(_QWORD*)(a1 + 72) + 16 * v2, *(_QWORD*)(a1 + 224),
                        v11);
  }
  if (*(_BYTE*)(a1 + 408) == 1) {
    if (v9 != 0) {
      GameRoutine_1a0b950(*(_QWORD*)(a1 + 104) + 8 * v2, *(_QWORD*)(a1 + 256),
                          (unsigned int)(8 * v1));
    }
    v12 = (unsigned int)(4 * v1);
    if ((_DWORD)v12 != 0) {
      GameRoutine_1a0b950(*(_QWORD*)(a1 + 136) + 4 * v2, *(_QWORD*)(a1 + 288),
                          v12);
    }
    if (v9 != 0) {
      GameRoutine_1a0b950(*(_QWORD*)(a1 + 168) + 8 * v2, *(_QWORD*)(a1 + 320),
                          (unsigned int)(8 * v1));
    }
  }
  v13 = *(unsigned int*)(a1 + 216);
  if ((_DWORD)v13 != 0) {
    v14 = *(_QWORD*)(a1 + 208);
    v15 = *(_QWORD*)(a1 + 344);
    for (i = 0; i < v13; ++i) {
      v17 = *(_QWORD*)(v14 + 8 * i);
      v18 = *(_DWORD*)(a1 + 32) | (((_DWORD)v2 + (_DWORD)i) << 7);
      v19 = *(_BYTE*)(v17 + 83);
      *(_DWORD*)(v17 + 100) = v18;
      if ((v19 & 0x40) != 0) {
        v20 = *(_QWORD**)(v15 + 872);
        *(_BYTE*)(v17 + 83) = v19 & 0xBF;
        if (v20 != nullptr && (*(_WORD*)(v17 + 80) & 0x1000) == 0) {
          v21 = v20[6];
          if (v21 != 0) {
            v22 = *(_QWORD*)(*v20 + 8LL * *(unsigned int*)(v17 + 96));
            if (v22 != 0) {
              do {
                v23 = *(unsigned int*)(v22 + 28);
                v22 = *(_QWORD*)(v22 + 16);
                *(_DWORD*)(v21 + 4 * v23) = v18;
              } while (v22 != 0);
              v13 = *(unsigned int*)(a1 + 216);
            }
          }
        }
      }
    }
  }
  *(_DWORD*)(a1 + 200) = 0;
  *(_DWORD*)(a1 + 216) = 0;
  result = a1;
  *(_DWORD*)(a1 + 232) = 0;
  *(_DWORD*)(a1 + 264) = 0;
  *(_DWORD*)(a1 + 296) = 0;
  *(_DWORD*)(a1 + 328) = 0;
  if (*(_BYTE*)(a1 + 408) == 1) {
    v25 = *(unsigned int*)(a1 + 368);
    *(_DWORD*)(a1 + 384) = 0;
    *(_DWORD*)(a1 + 400) = 0;
    if ((_DWORD)v25 != 0) {
      v26 = 8 * v25;
      v27 = 0;
      v28 = 0;
      do {
        v29 = *(_QWORD*)(*(_QWORD*)(a1 + 360) + v27);
        v30 = *(_DWORD*)(v29 + 88);
        if (v30 != 0) {
          v31 = *(_DWORD*)(a1 + 384) + v30;
          if ((*(_DWORD*)(a1 + 388) & 0x7FFFFFFFu) < v31) {
            v32 = 2 * *(_DWORD*)(a1 + 388) <= v31 ? *(_DWORD*)(a1 + 384) + v30
                                                  : 2 * *(_DWORD*)(a1 + 388);
            result = GameRoutine_3b0220(a1 + 376, v32);
            if ((*(_DWORD*)(a1 + 404) & 0x7FFFFFFFu) < v32) {
              result = GameRoutine_3afc20(a1 + 392, v32);
            }
          }
          v33 = (unsigned int)(8 * v30);
          *(_DWORD*)(a1 + 384) = v31;
          *(_DWORD*)(a1 + 400) = v31;
          if ((_DWORD)v33 != 0) {
            result = GameRoutine_1a0b950(*(_QWORD*)(a1 + 392) + 8LL * v28,
                                         v29 + 608, v33);
          }
          v34 = (unsigned int)(4 * v30);
          if ((_DWORD)v34 != 0) {
            result = GameRoutine_1a0b950(*(_QWORD*)(a1 + 376) + 4LL * v28,
                                         v29 + 92, v34);
          }
          v28 += v30;
        }
        v27 += 8;
      } while (v26 != v27);
    }
  }
  *(_DWORD*)(a1 + 368) = 0;
  return result;
}

__int64 GameHr_3b8800(__int64 result, unsigned int* a2, __int64* a3,
                      unsigned int* a4, unsigned int* a5, _QWORD* a6, float a7)
{
  unsigned __int64 v7;
  unsigned int v10;
  unsigned int v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  char v18;
  __int64 v19;
  __int64 v20;
  __int64 (**v21)();
  __int64 v22;
  char v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned int v36;
  __int64 v37;
  _QWORD* v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  _QWORD* v53;
  unsigned int v54;
  unsigned int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  _QWORD* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned int v66;
  _QWORD* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  _QWORD* v72;
  _QWORD* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned int v78;
  _QWORD* v79;
  __int16 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  unsigned int v86;
  unsigned int v87;
  unsigned int v88;
  unsigned __int64 v91;
  __int64 v93;
  unsigned int v95;
  unsigned int v96;
  unsigned int v97;

  v7 = a2[3];
  v93 = result;
  if ((_DWORD)v7 != 0) {
    v10 = 0;
    v11 = 0;
    LODWORD(v12) = 0;
    v13 = *(_QWORD*)(*(_QWORD*)a2 + 37800LL);
    v91 = a2[3];
    v14 = 32;
    while (1) {
      v97 = v14;
      v22 = (unsigned int)v12;
      v95 = v12;
      if (v7 >= v14) {
        v23 = v14;
      }
      else {
        v23 = v7;
      }
      v96 = v12 + 32;
      if ((unsigned int)v7 >= (int)v12 + 32) {
        v24 = (unsigned int)(v12 + 32);
      }
      else {
        v24 = (unsigned int)v7;
      }
      if ((unsigned int)v12 < (unsigned int)v24) {
        if ((v24 & 3) != 0) {
          v25 = v23 & 3;
          v26 = 72LL * (unsigned int)v12;
          v12 = (unsigned int)v12;
          do {
            v27 = *(_QWORD**)(v13 + 8 * v12);
            v28 = v27[8];
            v30 = v27[5];
            v29 = v27[6];
            v31 = (_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + 37960LL) + v26);
            v26 += 72;
            v31[3] = v27[7];
            v31[4] = v28;
            v31[1] = v30;
            v31[2] = v29;
            v32 = v27[12];
            v34 = v27[9];
            v33 = v27[10];
            v31[7] = v27[11];
            v31[8] = v32;
            v31[5] = v34;
            v31[6] = v33;
            *v31 = v27[4];
            v35 = *(_QWORD*)(v13 + 8 * v12);
            *(_WORD*)(v35 + 8) = v12++;
            v36 = **(unsigned __int16**)(v35 + 80);
            if (v36 >> 8 > v10) {
              v10 = v36 >> 8;
            }
            if ((unsigned __int8)v36 > v11) {
              v11 = (unsigned __int8)v36;
            }
            --v25;
          } while (v25 != 0);
          if (v22 - v24 > 0xFFFFFFFFFFFFFFFCLL) {
            goto LABEL_3;
          }
        LABEL_24:
          v37 = 72 * v12;
          v38 = (_QWORD*)(v13 + 16 + 8 * v12);
          do {
            v39 = (_QWORD*)*(v38 - 2);
            v40 = v39[8];
            v42 = v39[5];
            v41 = v39[6];
            v43 = (_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + 37960LL) + v37);
            v43[3] = v39[7];
            v43[4] = v40;
            v43[1] = v42;
            v43[2] = v41;
            v44 = v39[12];
            v46 = v39[9];
            v45 = v39[10];
            v43[7] = v39[11];
            v43[8] = v44;
            v43[5] = v46;
            v43[6] = v45;
            *v43 = v39[4];
            v47 = *(v38 - 2);
            v48 = (_QWORD*)*(v38 - 1);
            v49 = *(_QWORD*)a2;
            *(_WORD*)(v47 + 8) = v12;
            v51 = v48[5];
            v50 = v48[6];
            v52 = v48[8];
            v53 = (_QWORD*)(*(_QWORD*)(v49 + 37960) + v37);
            v55 = **(unsigned __int16**)(v47 + 80);
            v53[12] = v48[7];
            v53[13] = v52;
            v53[10] = v51;
            v53[11] = v50;
            v54 = v55 >> 8;
            v55 = (unsigned __int8)v55;
            v53[9] = v48[4];
            if (v54 <= v10) {
              v54 = v10;
            }
            v56 = v48[9];
            v57 = v48[10];
            v59 = v48[11];
            v58 = v48[12];
            if ((unsigned __int8)v55 <= v11) {
              v55 = v11;
            }
            v53[16] = v59;
            v53[17] = v58;
            v53[14] = v56;
            v53[15] = v57;
            v60 = *(_QWORD*)a2;
            v61 = *(v38 - 1);
            v62 = (_QWORD*)*v38;
            *(_WORD*)(v61 + 8) = v12 + 1;
            v64 = v62[5];
            v63 = v62[6];
            v65 = v62[8];
            v66 = **(unsigned __int16**)(v61 + 80);
            v67 = (_QWORD*)(*(_QWORD*)(v60 + 37960) + v37);
            v67[21] = v62[7];
            v67[22] = v65;
            v67[19] = v64;
            v67[20] = v63;
            if (v66 >> 8 > v54) {
              v54 = v66 >> 8;
            }
            if ((unsigned __int8)v66 > v55) {
              v55 = (unsigned __int8)v66;
            }
            v67[18] = v62[4];
            v68 = v62[9];
            v69 = v62[10];
            v71 = v62[11];
            v70 = v62[12];
            v67[25] = v71;
            v67[26] = v70;
            v67[23] = v68;
            v67[24] = v69;
            v72 = (_QWORD*)*v38;
            v73 = (_QWORD*)v38[1];
            v74 = *(_QWORD*)a2;
            *((_WORD*)v72 + 4) = v12 + 2;
            v76 = v73[5];
            v75 = v73[6];
            v77 = v73[8];
            v78 = *(unsigned __int16*)v72[10];
            v79 = (_QWORD*)(*(_QWORD*)(v74 + 37960) + v37);
            v37 += 288;
            v79[30] = v73[7];
            v79[31] = v77;
            v79[28] = v76;
            v79[29] = v75;
            if (v78 >> 8 > v54) {
              v54 = v78 >> 8;
            }
            v80 = v12 + 3;
            v12 += 4LL;
            if ((unsigned __int8)v78 > v55) {
              v55 = (unsigned __int8)v78;
            }
            v79[27] = v73[4];
            v81 = v73[9];
            v82 = v73[10];
            v84 = v73[11];
            v83 = v73[12];
            v79[34] = v84;
            v79[35] = v83;
            v79[32] = v81;
            v79[33] = v82;
            v85 = v38[1];
            v38 += 4;
            *(_WORD*)(v85 + 8) = v80;
            v86 = **(unsigned __int16**)(v85 + 80);
            if (v86 >> 8 <= v54) {
              v10 = v54;
            }
            else {
              v10 = v86 >> 8;
            }
            if ((unsigned __int8)v86 <= v55) {
              v11 = v55;
            }
            else {
              v11 = (unsigned __int8)v86;
            }
          } while (v12 < v24);
          goto LABEL_3;
        }
        v12 = (unsigned int)v12;
        if ((unsigned int)v12 - v24 <= 0xFFFFFFFFFFFFFFFCLL) {
          goto LABEL_24;
        }
      }
    LABEL_3:
      v15 = *(_QWORD*)a2;
      v16 = *(_QWORD**)(v93 + 504);
      GameRoutine_55b740(*v16);
      v17 = GameRoutine_2e9910(v16, 80, 16);
      GameRoutine_55b750(*v16);
      v18 = *(_BYTE*)(v93 + 1488);
      v19 = *(_QWORD*)(v15 + 37960) + 72LL * v95;
      *(_QWORD*)(v17 + 8) = *(_QWORD*)(v93 + 408);
      *(_QWORD*)(v17 + 16) = 0;
      *(_DWORD*)(v17 + 32) = 0;
      *(_DWORD*)(v17 + 56) = v24 - v95;
      *(_QWORD*)(v17 + 40) = v93;
      *(_QWORD*)(v17 + 48) = v19;
      *(_QWORD*)v17 = GameData_1f86c60;
      v20 = *a3;
      *(_BYTE*)(v17 + 76) = v18;
      *(_QWORD*)(v17 + 60) = v20;
      *(_DWORD*)(v17 + 68) = *((_DWORD*)a3 + 2);
      *(float*)(v17 + 72) = a7;
      *(_DWORD*)(v17 + 32) = 1;
      *(_QWORD*)(v17 + 24) = a6;
      if (a6 != nullptr) {
        (*(void (**)(_QWORD*))(*a6 + 32LL))(a6);
        *(_QWORD*)(v17 + 16) = a6[2];
        v21 = *(__int64 (***)())v17;
      }
      else {
        v21 = GameData_1f86c60;
      }
      result = ((__int64 (*)(__int64))v21[5])(v17);
      v7 = v91;
      v14 = v97 + 32;
      LODWORD(v12) = v96;
      if (v96 >= (unsigned int)v91) {
        goto LABEL_46;
      }
    }
  }
  v11 = 0;
  v10 = 0;
LABEL_46:
  v87 = *a5;
  if (v10 > *a5) {
    v87 = v10;
  }
  *a5 = v87;
  v88 = *a4;
  if (v11 > *a4) {
    v88 = v11;
  }
  *a4 = v88;
  return result;
}

void GameHr_3bd140(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  unsigned int v19;
  __int64 v20;
  unsigned int v21;
  int v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  __int64* v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int16 v32;
  __int64* v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  __int64 v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64* v61;
  __int64 v62;
  _QWORD* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64* v68;
  __int64 v69;
  _QWORD* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64* v75;
  __int64 v76;
  _QWORD* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64* v82;
  __int64 v83;
  _QWORD* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  unsigned __int8* v89;
  __int64 v90;
  __int64 v91;
  int v92;
  __int64 v93;
  __int64 v94;
  int v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  bool v108;
  char v115;
  unsigned int v116;
  __int64 v117;
  int v118;
  double v119;
  __int64 v120;
  unsigned int v121;
  __int64 v122;
  __int64 v123;
  unsigned int v124;
  __int64 v125;
  unsigned __int8* v126;
  __int64 v127;
  unsigned int v128;
  unsigned int v129;
  unsigned __int8* v130;
  unsigned int v131;
  unsigned int v132;
  int v133;
  __int64 v134;
  unsigned int v135;
  int v136;
  unsigned int v137;
  int v138;
  unsigned int v139;
  bool v140;
  _QWORD* v141;
  unsigned int v142;
  __int64 v143;
  _QWORD* v144;
  __int64 v145;
  char* v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  void (**v151)(__int64);
  __int64 v152;
  __int64 v153;
  _QWORD* v154;
  char v155[56];
  __int64 v156;
  __int64 v157;

  v2 = *(_QWORD*)(a1 + 48);
  v3 = *(_QWORD*)(a1 + 64);
  v4 = *(_QWORD*)(v2 + 72);
  if (*(_DWORD*)(v3 + 37776) != 0) {
    v5 = *(_QWORD*)(v2 + 88);
    v6 = *(_QWORD*)(v3 + 37768);
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    while (1) {
      v15 = *(_DWORD*)(v6 + 4 * v7) + v11;
      if (v11 >= (unsigned int)v15) {
        v6 = *(_QWORD*)(v3 + 37768);
        v118 = *(_DWORD*)(v6 + 4 * v7);
        *(_DWORD*)(v6 + 4LL * v13) = 0;
        v11 += v118;
      LABEL_98:
        v16 = 0;
        if (v7 == 0) {
          *(_BYTE*)(v3 + 37760) = 0;
        }
        goto LABEL_5;
      }
      v16 = 0;
      v17 = v11;
      do {
        v19 = v8;
        v20 = v5 + 8 * v17;
        v21 = *(unsigned __int16*)(v20 + 4);
        if (*(_WORD*)(v20 + 4) == 0) {
          v8 = v19;
          goto LABEL_10;
        }
        v22 = v21 & 7;
        if ((v21 & 7) == 0) {
          v8 = v19;
          v25 = v21;
          v32 = v21 + v9;
          if (v21 < 8) {
            goto LABEL_57;
          }
        LABEL_25:
          while (2) {
            v33 = (__int64*)(v4 + ((unsigned __int64)v9 << 6));
            if (*((_WORD*)v33 + 30) != 0) {
              if (v9 != v8) {
                v34 = v33[7];
                v35 = (_QWORD*)(v4 + ((unsigned __int64)v8 << 6));
                v35[5] = v33[5];
                v35[7] = v34;
                v36 = v33[3];
                v35[1] = v33[1];
                v35[3] = v36;
                v37 = *v33;
                v35[2] = v33[2];
                *v35 = v37;
                v38 = v33[4];
                v35[6] = v33[6];
                v35[4] = v38;
              }
              ++v8;
              v39 = v9 + 1;
              v40 = (__int64*)(v4 + (v39 << 6));
              if (*((_WORD*)v40 + 30) != 0) {
              LABEL_29:
                if ((_DWORD)v39 != v8) {
                  v41 = v40[7];
                  v42 = (_QWORD*)(v4 + ((unsigned __int64)v8 << 6));
                  v42[5] = v40[5];
                  v42[7] = v41;
                  v43 = v40[3];
                  v42[1] = v40[1];
                  v42[3] = v43;
                  v44 = *v40;
                  v42[2] = v40[2];
                  *v42 = v44;
                  v45 = v40[4];
                  v42[6] = v40[6];
                  v42[4] = v45;
                }
                ++v8;
                v46 = v9 + 2;
                v47 = (__int64*)(v4 + (v46 << 6));
                if (*((_WORD*)v47 + 30) != 0) {
                LABEL_32:
                  if ((_DWORD)v46 != v8) {
                    v48 = v47[7];
                    v49 = (_QWORD*)(v4 + ((unsigned __int64)v8 << 6));
                    v49[5] = v47[5];
                    v49[7] = v48;
                    v50 = v47[3];
                    v49[1] = v47[1];
                    v49[3] = v50;
                    v51 = *v47;
                    v49[2] = v47[2];
                    *v49 = v51;
                    v52 = v47[4];
                    v49[6] = v47[6];
                    v49[4] = v52;
                  }
                  ++v8;
                  v53 = v9 + 3;
                  v54 = (__int64*)(v4 + (v53 << 6));
                  if (*((_WORD*)v54 + 30) != 0) {
                  LABEL_35:
                    if ((_DWORD)v53 != v8) {
                      v55 = v54[7];
                      v56 = (_QWORD*)(v4 + ((unsigned __int64)v8 << 6));
                      v56[5] = v54[5];
                      v56[7] = v55;
                      v57 = v54[3];
                      v56[1] = v54[1];
                      v56[3] = v57;
                      v58 = *v54;
                      v56[2] = v54[2];
                      *v56 = v58;
                      v59 = v54[4];
                      v56[6] = v54[6];
                      v56[4] = v59;
                    }
                    ++v8;
                    v60 = v9 + 4;
                    v61 = (__int64*)(v4 + (v60 << 6));
                    if (*((_WORD*)v61 + 30) != 0) {
                    LABEL_38:
                      if ((_DWORD)v60 != v8) {
                        v62 = v61[7];
                        v63 = (_QWORD*)(v4 + ((unsigned __int64)v8 << 6));
                        v63[5] = v61[5];
                        v63[7] = v62;
                        v64 = v61[3];
                        v63[1] = v61[1];
                        v63[3] = v64;
                        v65 = *v61;
                        v63[2] = v61[2];
                        *v63 = v65;
                        v66 = v61[4];
                        v63[6] = v61[6];
                        v63[4] = v66;
                      }
                      ++v8;
                      v67 = v9 + 5;
                      v68 = (__int64*)(v4 + (v67 << 6));
                      if (*((_WORD*)v68 + 30) != 0) {
                      LABEL_41:
                        if ((_DWORD)v67 != v8) {
                          v69 = v68[7];
                          v70 = (_QWORD*)(v4 + ((unsigned __int64)v8 << 6));
                          v70[5] = v68[5];
                          v70[7] = v69;
                          v71 = v68[3];
                          v70[1] = v68[1];
                          v70[3] = v71;
                          v72 = *v68;
                          v70[2] = v68[2];
                          *v70 = v72;
                          v73 = v68[4];
                          v70[6] = v68[6];
                          v70[4] = v73;
                        }
                        ++v8;
                        v74 = v9 + 6;
                        v75 = (__int64*)(v4 + (v74 << 6));
                        if (*((_WORD*)v75 + 30) != 0) {
                          goto LABEL_44;
                        }
                      LABEL_55:
                        --v25;
                        v81 = v9 + 7;
                        v82 = (__int64*)(v4 + (v81 << 6));
                        if (*((_WORD*)v82 + 30) == 0) {
                          goto LABEL_56;
                        }
                        goto LABEL_47;
                      }
                    LABEL_54:
                      --v25;
                      v74 = v9 + 6;
                      v75 = (__int64*)(v4 + (v74 << 6));
                      if (*((_WORD*)v75 + 30) == 0) {
                        goto LABEL_55;
                      }
                    LABEL_44:
                      if ((_DWORD)v74 != v8) {
                        v76 = v75[7];
                        v77 = (_QWORD*)(v4 + ((unsigned __int64)v8 << 6));
                        v77[5] = v75[5];
                        v77[7] = v76;
                        v78 = v75[3];
                        v77[1] = v75[1];
                        v77[3] = v78;
                        v79 = *v75;
                        v77[2] = v75[2];
                        *v77 = v79;
                        v80 = v75[4];
                        v77[6] = v75[6];
                        v77[4] = v80;
                      }
                      ++v8;
                      v81 = v9 + 7;
                      v82 = (__int64*)(v4 + (v81 << 6));
                      if (*((_WORD*)v82 + 30) == 0) {
                      LABEL_56:
                        --v25;
                        v9 += 8;
                        if (v32 == (unsigned __int16)v9) {
                          goto LABEL_57;
                        }
                        continue;
                      }
                    LABEL_47:
                      if ((_DWORD)v81 != v8) {
                        v83 = v82[7];
                        v84 = (_QWORD*)(v4 + ((unsigned __int64)v8 << 6));
                        v84[5] = v82[5];
                        v84[7] = v83;
                        v85 = v82[3];
                        v84[1] = v82[1];
                        v84[3] = v85;
                        v86 = *v82;
                        v84[2] = v82[2];
                        *v84 = v86;
                        v87 = v82[4];
                        v84[6] = v82[6];
                        v84[4] = v87;
                      }
                      ++v8;
                      v9 += 8;
                      if (v32 == (unsigned __int16)v9) {
                        goto LABEL_57;
                      }
                      continue;
                    }
                  LABEL_53:
                    --v25;
                    v67 = v9 + 5;
                    v68 = (__int64*)(v4 + (v67 << 6));
                    if (*((_WORD*)v68 + 30) != 0) {
                      goto LABEL_41;
                    }
                    goto LABEL_54;
                  }
                LABEL_52:
                  --v25;
                  v60 = v9 + 4;
                  v61 = (__int64*)(v4 + (v60 << 6));
                  if (*((_WORD*)v61 + 30) != 0) {
                    goto LABEL_38;
                  }
                  goto LABEL_53;
                }
              LABEL_51:
                --v25;
                v53 = v9 + 3;
                v54 = (__int64*)(v4 + (v53 << 6));
                if (*((_WORD*)v54 + 30) != 0) {
                  goto LABEL_35;
                }
                goto LABEL_52;
              }
            }
            else {
              --v25;
              v39 = v9 + 1;
              v40 = (__int64*)(v4 + (v39 << 6));
              if (*((_WORD*)v40 + 30) != 0) {
                goto LABEL_29;
              }
            }
            break;
          }
          --v25;
          v46 = v9 + 2;
          v47 = (__int64*)(v4 + (v46 << 6));
          if (*((_WORD*)v47 + 30) != 0) {
            goto LABEL_32;
          }
          goto LABEL_51;
        }
        v23 = 0;
        v8 = v19;
        v24 = v9;
        v25 = v21;
        do {
          while (1) {
            v26 = (__int64*)(v4 + ((unsigned __int64)v24 << 6));
            if (*((_WORD*)v26 + 30) != 0) {
              break;
            }
            --v25;
            ++v23;
            ++v24;
            if (v22 == (unsigned __int16)v23) {
              goto LABEL_19;
            }
          }
          if (v24 != v8) {
            v27 = v26[7];
            v28 = (_QWORD*)(v4 + ((unsigned __int64)v8 << 6));
            v28[5] = v26[5];
            v28[7] = v27;
            v29 = v26[3];
            v28[1] = v26[1];
            v28[3] = v29;
            v30 = *v26;
            v28[2] = v26[2];
            *v28 = v30;
            v31 = v26[4];
            v28[6] = v26[6];
            v28[4] = v31;
          }
          ++v8;
          ++v23;
          ++v24;
        } while (v22 != (unsigned __int16)v23);
      LABEL_19:
        v32 = v21 + v9;
        v9 = v24;
        if (v21 >= 8) {
          goto LABEL_25;
        }
      LABEL_57:
        if ((_WORD)v25 != 0) {
          v88 = v5 + 8LL * v10;
          v89 = *(unsigned __int8**)(v4 + ((unsigned __int64)v19 << 6) + 32);
          *(_DWORD*)v88 = v19;
          *(_WORD*)(v88 + 4) = v25;
          v18 = *v89;
          if (v18 == 5) {
            if ((unsigned __int16)v25 != 1) {
              v90 = (unsigned __int16)v25;
              v91 = (unsigned __int16)v25 - 1LL;
              if ((unsigned __int64)(v90 - 2) >= 7) {
                LOBYTE(v18) = 5;
                v94 = 0;
                do {
                  v95 = v19 + v94;
                  v94 += 8;
                  v96 = (unsigned int)(v95 + 1);
                  v97 = (unsigned int)(v95 + 2);
                  v98 = (unsigned int)(v95 + 3);
                  v99 = (unsigned int)(v95 + 4);
                  v100 = (unsigned int)(v95 + 5);
                  v101 = **(
                      unsigned __int8**)(v4 +
                                         ((unsigned __int64)(unsigned int)(v95 +
                                                                           7)
                                          << 6) +
                                         32);
                  v108 = **(_BYTE**)(v4 +
                                     ((unsigned __int64)(unsigned int)(v95 + 8)
                                      << 6) +
                                     32) == 1;
                  v102 = **(
                      unsigned __int8**)(v4 +
                                         ((unsigned __int64)(unsigned int)(v95 +
                                                                           6)
                                          << 6) +
                                         32);
                  v103 = **(unsigned __int8**)(v4 + (v100 << 6) + 32);
                  v104 = **(unsigned __int8**)(v4 + (v99 << 6) + 32);
                  v105 = **(unsigned __int8**)(v4 + (v98 << 6) + 32);
                  v106 = **(unsigned __int8**)(v4 + (v97 << 6) + 32);
                  v107 = **(unsigned __int8**)(v4 + (v96 << 6) + 32);
                  v108 = v108 || v101 == 1;
                  v115 = v108 || v102 == 1 || v103 == 1 || v104 == 1 ||
                         v105 == 1 || v106 == 1 || v107 == 1;
                  if ((v115 & 1) != 0) {
                    LOBYTE(v18) = 1;
                  }
                } while ((v91 & 0xFFFFFFFFFFFFFFF8LL) != v94);
                v92 = v94 + 1;
                v93 = v91 & 7;
                if (v93 == 0) {
                  goto LABEL_9;
                }
              }
              else {
                LOBYTE(v18) = 5;
                v92 = 1;
                v93 = v91 & 7;
                if (v93 == 0) {
                  goto LABEL_9;
                }
              }
              v116 = v19 + v92;
              do {
                v117 = v4 + ((unsigned __int64)v116++ << 6);
                if (**(_BYTE**)(v117 + 32) == 1) {
                  LOBYTE(v18) = 1;
                }
                --v93;
              } while (v93 != 0);
              goto LABEL_9;
            }
            LOBYTE(v18) = 5;
          }
        LABEL_9:
          ++v10;
          ++v16;
          *(_WORD*)(v88 + 6) = (unsigned __int8)v18;
        }
      LABEL_10:
        ++v17;
      } while (v17 != v15);
      v3 = *(_QWORD*)(a1 + 64);
      v6 = *(_QWORD*)(v3 + 37768);
      v14 = *(_DWORD*)(v6 + 4 * v7);
      *(_DWORD*)(v6 + 4LL * v13) = v16;
      v11 += v14;
      if (v16 == 0) {
        goto LABEL_98;
      }
      ++v13;
    LABEL_5:
      v12 += v16;
      if (++v7 >= (unsigned __int64)*(unsigned int*)(v3 + 37776)) {
        v2 = *(_QWORD*)(a1 + 48);
        goto LABEL_102;
      }
    }
  }
  v13 = 0;
  v12 = 0;
LABEL_102:
  GameRoutine_36ece0(*(_QWORD*)(*(_QWORD*)(a1 + 72) + 1440LL) +
                         ((unsigned __int64)*(unsigned int*)(v2 + 112) << 6) +
                         64,
                     64, **(unsigned int**)(a1 + 56), *(_QWORD*)(v3 + 37960),
                     *(unsigned int*)(v3 + 37968));
  v120 = *(_QWORD*)(a1 + 64);
  v121 = *(_DWORD*)(*(_QWORD*)(a1 + 56) + 4LL);
  *(_DWORD*)(v120 + 37776) = v13;
  *(_DWORD*)(v120 + 37864) = v12;
  if (v121 == 0) {
    v124 = 0;
    *(_DWORD*)(v120 + 37904) = 0;
    goto LABEL_133;
  }
  v122 = v121 & 7;
  if (v121 >= 8) {
    v125 = 0;
    v124 = 0;
    v126 = *(unsigned __int8**)(v120 + 37960);
    v127 = -(__int64)(v121 & 0xFFFFFFF8);
    do {
      v128 = v126[64];
      v125 -= 8;
      if (v124 > v128) {
        v128 = v124;
      }
      if (v128 <= v126[136]) {
        v128 = v126[136];
      }
      if (v128 <= v126[208]) {
        v128 = v126[208];
      }
      if (v128 <= v126[280]) {
        v128 = v126[280];
      }
      if (v128 <= v126[352]) {
        v128 = v126[352];
      }
      if (v128 <= v126[424]) {
        v128 = v126[424];
      }
      if (v128 <= v126[496]) {
        v128 = v126[496];
      }
      v129 = v126[568];
      v126 += 576;
      if (v128 <= v129) {
        v124 = v129;
      }
      else {
        v124 = v128;
      }
    } while (v127 != v125);
    v123 = -v125;
    if (v122 == 0) {
      goto LABEL_131;
    }
    goto LABEL_127;
  }
  v123 = 0;
  v124 = 0;
  if ((v121 & 7) != 0) {
  LABEL_127:
    v130 = (unsigned __int8*)(*(_QWORD*)(v120 + 37960) + 72 * v123 + 64);
    do {
      v132 = *v130;
      v130 += 72;
      v131 = v132;
      if (v124 <= v132) {
        v124 = v131;
      }
      --v122;
    } while (v122 != 0);
  }
LABEL_131:
  *(_DWORD*)(v120 + 37904) = 0;
  if ((*(_DWORD*)(v120 + 37908) & 0x7FFFFFFFu) < v124) {
    GameRoutine_333860(v120 + 37896, v124);
    v120 = *(_QWORD*)(a1 + 64);
  }
LABEL_133:
  *(_DWORD*)(v120 + 37904) = v124;
  *(_DWORD*)(v120 + 37888) = 0;
  if ((*(_DWORD*)(v120 + 37892) & 0x7FFFFFFFu) < v124) {
    GameRoutine_333860(v120 + 37880, v124);
    v120 = *(_QWORD*)(a1 + 64);
  }
  *(_DWORD*)(v120 + 37888) = v124;
  v133 = *(_DWORD*)(v120 + 37776);
  v156 = *(_QWORD*)(v120 + 37896);
  v157 = 0;
  if (v133 == 0) {
    goto LABEL_145;
  }
  v134 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 16) + 8LL))(
      *(_QWORD*)(a1 + 16));
  v135 = (*(__int64 (**)(__int64))(*(_QWORD*)v134 + 8LL))(v134);
  v120 = *(_QWORD*)(a1 + 64);
  if (*(_BYTE*)(v120 + 37760) == 1) {
    v136 = *(_DWORD*)(v120 + 37776);
    v140 = v136 != 0;
    v137 = v136 - 1;
    if (v137 == 0 || !v140) {
      v137 = 1;
    }
    v138 = ~**(_DWORD**)(v120 + 37768);
  }
  else {
    v137 = *(_DWORD*)(v120 + 37776);
    v138 = -1;
  }
  v139 = (v12 + v138 + v137) / v137 + 7;
  v140 = v135 >= 2 && v139 >= 0x10;
  if (v140) {
    v141 = *(_QWORD**)(a1 + 40);
    v142 = v139 >> 3;
    if (v135 >= v142) {
      v143 = v142;
    }
    else {
      v143 = v135;
    }
    v141[22] = 0;
    v141[23] = 0;
    v141[24] = 0;
    v141[25] = 0;
    v144 = *(_QWORD**)(*(_QWORD*)(a1 + 72) + 504LL);
    GameRoutine_55b740(*v144);
    v145 = GameRoutine_2e9910(v144, (unsigned int)(80 * v143), 16);
    GameRoutine_55b750(*v144);
    v146 = (char*)GameData_2135968;
    do {
      v147 = *(_QWORD*)(a1 + 40);
      v148 = *(_QWORD*)(a1 + 48);
      v149 = *(_QWORD*)(a1 + 56);
      v150 = *(_QWORD*)(a1 + 64);
      v151 = (void (**)(__int64))(v146 + 16);
      v152 = *(_QWORD*)(a1 + 72);
      *(_QWORD*)(v145 + 16) = 0;
      *(_QWORD*)(v145 + 24) = 0;
      v153 = *(_QWORD*)(v152 + 408);
      *(_DWORD*)(v145 + 32) = 0;
      *(_QWORD*)(v145 + 40) = v147;
      *(_QWORD*)(v145 + 48) = v148;
      *(_QWORD*)(v145 + 56) = v149;
      *(_QWORD*)(v145 + 64) = v150;
      *(_QWORD*)(v145 + 72) = v152;
      v154 = *(_QWORD**)(a1 + 24);
      *(_QWORD*)v145 = v146 + 16;
      *(_QWORD*)(v145 + 8) = v153;
      *(_DWORD*)(v145 + 32) = 1;
      *(_QWORD*)(v145 + 24) = v154;
      if (v154 != nullptr) {
        (*(void (**)(_QWORD*))(*v154 + 32LL))(v154);
        *(_QWORD*)(v145 + 16) = v154[2];
        v151 = *(void (***)(__int64))v145;
      }
      v151[5](v145);
      --v143;
      v145 += 80;
    } while (v143 != 0);
  }
  else {
  LABEL_145:
    GameRoutine_3b8de0(*(_QWORD*)(a1 + 72), *(_QWORD**)(a1 + 48),
                       *(unsigned int**)(a1 + 56), v120,
                       *(_DWORD*)(*(_QWORD*)(a1 + 40) + 152LL),
                       *(_DWORD*)(*(_QWORD*)(a1 + 40) + 156LL), (__int64)v155,
                       *(float*)(*(_QWORD*)(a1 + 40) + 164LL), v119,
                       *(float*)(*(_QWORD*)(a1 + 40) + 172LL));
  }
}

__int64 GameHr_3bdc50(_QWORD* a1)
{
  __int64 v1;

  v1 = a1[5];
  return GameRoutine_3b9740(
      a1[9], a1[6], a1[7], a1[8], *(unsigned int*)(v1 + 152),
      *(unsigned int*)(v1 + 156), v1 + 176, v1 + 184, *(float*)(v1 + 164),
      *(float*)(v1 + 172), v1 + 192, v1 + 200, v1 + 180, v1 + 188, v1 + 196,
      v1 + 204, 4, 128);
}

__int64 GameHr_3c6d40(__int64 a1, _DWORD* a2, int a3)
{
  __int64 result;

  *(_QWORD*)a1 = (char*)GameData_2135788 + 16;
  *(_DWORD*)(a1 + 8) = -1;
  result = GameRoutine_39e350(a1 + 16);
  *(_BYTE*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 80) = a2;
  *(_QWORD*)a1 = GameData_1f872c0;
  *(_DWORD*)(a1 + 68) = *a2;
  *(_DWORD*)(a1 + 72) = a3;
  return result;
}

__int64 GameHr_3c7980(__int64 a1, _DWORD* a2, int* a3)
{
  __int64 result;
  int v7;

  *(_QWORD*)a1 = (char*)GameData_2135788 + 16;
  *(_DWORD*)(a1 + 8) = -1;
  result = GameRoutine_39e350(a1 + 16);
  *(_BYTE*)(a1 + 64) = 0;
  v7 = *a3;
  *(_QWORD*)(a1 + 80) = a2;
  *(_QWORD*)(a1 + 88) = a3;
  *(_QWORD*)a1 = GameData_1f872f0;
  *(_DWORD*)(a1 + 68) = *a2;
  *(_DWORD*)(a1 + 72) = v7;
  return result;
}

__int64 GameHr_3c7ba0(__int64 a1, __int64 a2)
{
  __int64 result;

  *(_QWORD*)a1 = (char*)GameData_2135788 + 16;
  *(_DWORD*)(a1 + 8) = -1;
  result = GameRoutine_39e350(a1 + 16);
  *(_BYTE*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = a2;
  *(_QWORD*)a1 = GameData_1f87320;
  return result;
}

__int64 GameHr_3dcce0(__int64 result, char a2, int a3, __int64 a4)
{
  __int64 v6;
  __int64 v7;
  int v8;
  __int16 v12;
  __int64 v13;

  v6 = *(_QWORD*)(result + 56);
  if (v6 != 0) {
    v7 = result;
    v8 = (unsigned __int16)*(_DWORD*)(result + 48) &
             (unsigned __int16)(*(_DWORD*)(result + 48) >> 11) & 0x100 |
         *(_DWORD*)(result + 48) & 0x10;
    if (v8 != 0) {
      v12 = (*(_DWORD*)(v6 + 4) & 0xFFFFFFFC) == 4;
      physx_Sc_ShapeInteraction_processUserNotificationSync(result);
      result = physx_Sc_ShapeInteraction_processUserNotificationAsync(
          v7, v8, 8 * v12, 1, a3, 0, a4, 0);
      if ((a2 & 1) != 0) {
        *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 56) + 24LL) + 14LL) |= 1u;
      }
    }
  }
  else {
    v13 = PxGetFoundation();
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v13 + 88LL))(
        v13, 32,
        "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/"
        "ScShapeInteraction.cpp",
        532, "Encountered lost touch report for invalid actor pair.");
  }
  return result;
}

__int64 GameHr_3e3d20(__int64 a1, __int64 a2)
{
  unsigned int v3;
  __int64 v4;

  v3 = a1;
  v4 = GameRoutine_55afc0(a1);
  return (*(__int64 (**)(__int64, __int64, const char*, _QWORD, __int64))(
      *(_QWORD*)v4 + 88LL))(v4, 32,
                            "/Inside/Lib/PhysX/O/physx/source/"
                            "simulationcontroller/src/ScPipeline.cpp",
                            v3, a2);
}

__int64 GameHr_3e8550(__int64 result)
{
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)result = GameData_1f88398;
  *(_BYTE*)(result + 56) = 1;
  *(_DWORD*)(result + 8) = 0x80000000;
  return result;
}

__int64 GameHr_3e9e60(__int64 result)
{
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_BYTE*)(result + 56) = 1;
  *(_DWORD*)(result + 8) = 0x80000000;
  *(_QWORD*)result = GameData_1f883b8;
  return result;
}

__int64 GameHr_3f2ca0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
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
  __int64 vars0;
  __int64 vars0a;
  __int64 _8;
  __int64 _8a;
  __int64 vars10;
  __int64 vars10a;
  __int64 _18;
  __int64 _18a;

  *(_QWORD*)a1 = &GameData_1f88468;
  if ((*(_BYTE*)(a1 + 404) & 1) == 0) {
    v5 = *(_QWORD*)(a1 + 408);
    if (v5 != 0) {
      v6 = a1;
      v7 = v5 - *(_QWORD*)(v5 - 8);
      v8 = PxGetBroadcastAllocator(nullptr);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v8 + 24LL))(v8, v7);
      a1 = v6;
      *(_QWORD*)(v6 + 408) = 0;
      v2 = vars10;
      v1 = _18;
      v3 = vars0;
      v4 = _8;
    }
  }
  vars0a = v3;
  _8a = v4;
  vars10a = v2;
  _18a = v1;
  v9 = (_QWORD*)a1;
  v10 = *(_QWORD*)(a1 + 272);
  *(_QWORD*)a1 = (char*)GameData_2135c40 + 16;
  if (v10 != 0) {
    v11 = PxGetBroadcastAllocator(nullptr);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 24LL))(v11, v10);
    v9[34] = 0;
  }
  v12 = v9[35];
  if (v12 != 0) {
    v13 = PxGetBroadcastAllocator(nullptr);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v13 + 24LL))(v13, v12);
    v9[35] = 0;
  }
  v14 = v9[37];
  if (v14 != 0) {
    v15 = PxGetBroadcastAllocator(nullptr);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v15 + 24LL))(v15, v14);
    v9[37] = 0;
  }
  v16 = v9[36];
  if (v16 != 0) {
    v17 = PxGetBroadcastAllocator(nullptr);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v17 + 24LL))(v17, v16);
    v9[36] = 0;
  }
  v18 = v9[38];
  if (v18 != 0) {
    v19 = PxGetBroadcastAllocator(nullptr);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v19 + 24LL))(v19, v18);
    v9[38] = 0;
  }
  v20 = v9[39];
  if (v20 != 0) {
    physx_Gu_BV32Tree_Destroy_BV32Tree(v9[39]);
    v21 = PxGetBroadcastAllocator(nullptr);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v21 + 24LL))(v21, v20);
    v9[39] = 0;
  }
  v22 = v9[3];
  *v9 = (char*)GameData_2135c48 + 16;
  if (v22 != 0) {
    v23 = PxGetBroadcastAllocator(nullptr);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v23 + 24LL))(v23, v22);
    v9[3] = 0;
  }
  v24 = v9[14];
  if (v24 != 0) {
    v25 = PxGetBroadcastAllocator(nullptr);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v25 + 24LL))(v25, v24);
    v9[14] = 0;
  }
  v26 = v9[15];
  if (v26 != 0) {
    v27 = PxGetBroadcastAllocator(nullptr);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v27 + 24LL))(v27, v26);
    v9[15] = 0;
  }
  v28 = v9[16];
  if (v28 != 0) {
    v29 = PxGetBroadcastAllocator(nullptr);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v29 + 24LL))(v29, v28);
    v9[16] = 0;
  }
  v30 = v9[17];
  if (v30 != 0) {
    v31 = PxGetBroadcastAllocator(nullptr);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v31 + 24LL))(v31, v30);
    v9[17] = 0;
  }
  v32 = v9[31];
  if (v32 != 0) {
    v33 = PxGetBroadcastAllocator(nullptr);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v33 + 24LL))(v33, v32);
    v9[31] = 0;
  }
  v34 = v9[32];
  if (v34 != 0) {
    v35 = PxGetBroadcastAllocator(nullptr);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v35 + 24LL))(v35, v34);
    v9[32] = 0;
  }
  return physx_Gu_SDF_Destroy_SDF((__int64)(v9 + 18));
}

__int64 GameHr_466200(__int64 result, float* a2, _DWORD* a3)
{
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  _DWORD* v6;
  int v7;
  _DWORD* v8;
  int v9;
  int v10;
  float v11;
  float v12;
  float v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  float* v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float* v22;
  float v23;
  float v24;
  float v25;
  int v26;
  char v27;
  float* v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  float v32;
  unsigned int v33;
  int v34;
  __int64 v35;
  float* v36;
  float v37;
  float v38;
  float v39;
  float* v40;
  int v41;
  __int64 v42;
  float v43;
  float v44;
  float v45;
  float* v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  bool v52;
  float v53;
  float v54;
  float v55;
  float v56;
  bool v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  bool v64;
  bool v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  bool v74;
  unsigned int v75;
  bool v76;
  __int64 v77;
  int v78;
  float v79;
  __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  int v84;
  unsigned __int64 v85;
  __int64 v86;
  int v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  float v92;
  __int64 v93;
  __int64 v94;
  unsigned int v95;
  __int64 v96;
  int v97;
  float v98;
  __int64 v99;
  __int64 v100;
  unsigned __int64 v101;
  __int64 v102;
  int v103;
  unsigned __int64 v104;
  __int64 v105;
  int v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  float v111;
  __int64 v112;
  __int64 v113;
  unsigned int v114;
  __int64 v115;
  int v116;
  __int64 v117;
  _DWORD* v118;
  int v119;
  int v120;
  int v121;

  v3 = *(unsigned int*)(result + 1284);
  if ((unsigned int)v3 < 0x10) {
    *(_DWORD*)(result + 1284) = v3 + 1;
    v4 = result + 16 * v3;
    v5 = *(_QWORD*)a2;
    *(_DWORD*)(v4 + 16) = 1;
    *(_QWORD*)(v4 + 4) = v5;
    v6 = (_DWORD*)(result + (v3 << 6));
    *(float*)(v4 + 12) = a2[2];
    v7 = a3[1];
    v8 = (_DWORD*)(result + 1288);
    v6[65] = *a3;
    v6[66] = v7;
    v9 = a3[3];
    v6[67] = a3[2];
    v6[68] = v9;
    v10 = *(_DWORD*)(result + 1288);
    goto LABEL_130;
  }
  v11 = *a2;
  v12 = a2[1];
  v13 = a2[2];
  v14 = result + 4;
  v15 = v3 & 3;
  v16 = (unsigned int)v3 & 0xFFFFFFFC;
  v17 = (float*)(result + 36);
  v18 = -0x1.fffffe0000000p+127f;
  do {
    if (v18 <= (float)((float)((float)(PSEUDO_UNFUSED(v12 * *(v17 - 7))) +
                               (float)(v11 * *(v17 - 8))) +
                       (float)(v13 * *(v17 - 6)))) {
      v18 = (float)((float)(PSEUDO_UNFUSED(v12 * *(v17 - 7))) +
                    (float)(v11 * *(v17 - 8))) +
            (float)(v13 * *(v17 - 6));
    }
    if (v18 <= (float)((float)((float)(PSEUDO_UNFUSED(v12 * *(v17 - 3))) +
                               (float)(v11 * *(v17 - 4))) +
                       (float)(v13 * *(v17 - 2)))) {
      v18 = (float)((float)(PSEUDO_UNFUSED(v12 * *(v17 - 3))) +
                    (float)(v11 * *(v17 - 4))) +
            (float)(v13 * *(v17 - 2));
    }
    if (v18 <= (float)((float)((float)(PSEUDO_UNFUSED(v12 * v17[1])) +
                               (float)(v11 * *v17)) +
                       (float)(v13 * v17[2]))) {
      v18 =
          (float)((float)(PSEUDO_UNFUSED(v12 * v17[1])) + (float)(v11 * *v17)) +
          (float)(v13 * v17[2]);
    }
    v19 = (float)(PSEUDO_UNFUSED(v12 * v17[5])) + (float)(v11 * v17[4]);
    v20 = v17[6];
    v17 += 16;
    v21 = v19 + (float)(v13 * v20);
    if (v18 <= v21) {
      v18 = v21;
    }
    v16 -= 4;
  } while (v16 != 0);
  if ((v3 & 3) != 0) {
    v22 = v17 - 6;
    do {
      v23 =
          (float)(PSEUDO_UNFUSED(v12 * *(v22 - 1))) + (float)(v11 * *(v22 - 2));
      v24 = *v22;
      v22 += 4;
      v25 = v23 + (float)(v13 * v24);
      if (v18 <= v25) {
        v18 = v25;
      }
      --v15;
    } while (v15 != 0);
  }
  v26 = v3 - 2;
  v27 = v3 + 7;
  v28 = (float*)(result + 28);
  v29 = 0;
  v30 = -1;
  v31 = 1;
  v32 = -0x1.fffffe0000000p+127f;
  v33 = -1;
  do {
    v34 = v27 & 7;
    v35 = v29 + 1;
    if (v29 + 1 >= v3) {
      goto LABEL_19;
    }
    v36 = (float*)(v14 + 16 * v29);
    v37 = *v36;
    v38 = v36[1];
    v39 = v36[2];
    if ((((_BYTE)v3 + ~(_BYTE)v29) & 7) == 0) {
      v42 = v31;
      if ((unsigned int)(v26 - v29) < 7) {
        goto LABEL_19;
      }
    LABEL_29:
      v46 = (float*)(result + 68 + 16 * v42);
      do {
        v47 = *(v46 - 14);
        v48 = *(v46 - 10);
        v49 = (float)((float)(PSEUDO_UNFUSED(v38 * *(v46 - 15))) +
                      (float)(v37 * *(v46 - 16))) +
              (float)(v39 * v47);
        v50 = (float)((float)(PSEUDO_UNFUSED(v38 * *(v46 - 11))) +
                      (float)(v37 * *(v46 - 12))) +
              (float)(v39 * v48);
        if (v49 <= v32) {
          v51 = v32;
        }
        else {
          v51 = (float)((float)(PSEUDO_UNFUSED(v38 * *(v46 - 15))) +
                        (float)(v37 * *(v46 - 16))) +
                (float)(v39 * v47);
        }
        v52 = v50 > v51;
        if (v49 > v32) {
          v33 = v42;
          v52 = true;
        }
        if (v50 <= v51) {
          v53 = v51;
        }
        else {
          v53 = (float)((float)(PSEUDO_UNFUSED(v38 * *(v46 - 11))) +
                        (float)(v37 * *(v46 - 12))) +
                (float)(v39 * v48);
        }
        if (v50 > v51) {
          v33 = v42 + 1;
        }
        v54 = (float)((float)(PSEUDO_UNFUSED(v38 * *(v46 - 7))) +
                      (float)(v37 * *(v46 - 8))) +
              (float)(v39 * *(v46 - 6));
        v55 = (float)((float)(PSEUDO_UNFUSED(v38 * *(v46 - 3))) +
                      (float)(v37 * *(v46 - 4))) +
              (float)(v39 * *(v46 - 2));
        if (v54 <= v53) {
          v56 = v53;
        }
        else {
          v56 = (float)((float)(PSEUDO_UNFUSED(v38 * *(v46 - 7))) +
                        (float)(v37 * *(v46 - 8))) +
                (float)(v39 * *(v46 - 6));
        }
        v57 = v55 > v56;
        if (v54 > v53) {
          v33 = v42 + 2;
          v57 = true;
        }
        if (v55 <= v56) {
          v58 = v56;
        }
        else {
          v58 = (float)((float)(PSEUDO_UNFUSED(v38 * *(v46 - 3))) +
                        (float)(v37 * *(v46 - 4))) +
                (float)(v39 * *(v46 - 2));
        }
        if (v55 > v56) {
          v33 = v42 + 3;
        }
        v59 = v46[2];
        v60 = v46[6];
        v61 = (float)((float)(PSEUDO_UNFUSED(v38 * v46[1])) +
                      (float)(v37 * *v46)) +
              (float)(v39 * v59);
        v62 = (float)((float)(PSEUDO_UNFUSED(v38 * v46[5])) +
                      (float)(v37 * v46[4])) +
              (float)(v39 * v60);
        if (v61 <= v58) {
          v63 = v58;
        }
        else {
          v63 = (float)((float)(PSEUDO_UNFUSED(v38 * v46[1])) +
                        (float)(v37 * *v46)) +
                (float)(v39 * v59);
        }
        v64 = v62 > v63;
        if (v61 > v58) {
          v33 = v42 + 4;
          v64 = true;
        }
        v65 = v64 || v57 || v52;
        if (v62 <= v63) {
          v66 = v63;
        }
        else {
          v66 = (float)((float)(PSEUDO_UNFUSED(v38 * v46[5])) +
                        (float)(v37 * v46[4])) +
                (float)(v39 * v60);
        }
        if (v62 > v63) {
          v33 = v42 + 5;
        }
        v67 = (float)(PSEUDO_UNFUSED(v38 * v46[9])) + (float)(v37 * v46[8]);
        v68 = v46[10];
        v69 = (float)(PSEUDO_UNFUSED(v38 * v46[13])) + (float)(v37 * v46[12]);
        v70 = v46[14];
        v46 += 32;
        v71 = v67 + (float)(v39 * v68);
        v72 = v69 + (float)(v39 * v70);
        if (v71 <= v66) {
          v73 = v66;
        }
        else {
          v73 = v71;
        }
        v74 = v72 > v73;
        if (v71 > v66) {
          v33 = v42 + 6;
          v74 = true;
        }
        v75 = v42 + 7;
        LODWORD(v42) = v42 + 8;
        v76 = v74 || v65;
        if (v72 <= v73) {
          v32 = v73;
        }
        else {
          v33 = v75;
          v32 = v72;
        }
        if (v76) {
          v30 = v29;
        }
      } while ((_DWORD)v3 != (_DWORD)v42);
      goto LABEL_19;
    }
    v40 = v28;
    v41 = v34;
    v42 = v31;
    do {
      v43 =
          (float)(PSEUDO_UNFUSED(v38 * *(v40 - 1))) + (float)(v37 * *(v40 - 2));
      v44 = *v40;
      v40 += 4;
      v45 = v43 + (float)(v39 * v44);
      if (v45 > v32) {
        v32 = v45;
        v33 = v42;
        v30 = v29;
      }
      ++v42;
      --v41;
    } while (v41 != 0);
    if ((unsigned int)(v26 - v29) >= 7) {
      goto LABEL_29;
    }
  LABEL_19:
    ++v31;
    v27 = v34 + 7;
    v28 += 4;
    ++v29;
  } while (v35 != v3);
  if (v18 <= v32) {
    v77 = result + 260;
    v78 = 4 * v30;
    v79 = *(float*)(result + 260 + 64LL * v30 + 12);
    v80 = *(unsigned int*)(v14 + 16LL * v30 + 12);
    if ((unsigned int)v80 < 2) {
      goto LABEL_100;
    }
    v81 = v80 - 1;
    v82 = v80 - 2;
    v83 = (v80 - 1) & 7;
    if (v82 >= 7) {
      v85 = v81 & 0xFFFFFFFFFFFFFFF8LL;
      v86 = 0;
      do {
        v87 = v78 + v86;
        v86 += 8;
        if (v79 >= *(float*)(v77 + 16LL * (unsigned int)(v87 + 1) + 12)) {
          v79 = *(float*)(v77 + 16LL * (unsigned int)(v87 + 1) + 12);
        }
        v88 = v77 + 16LL * (unsigned int)(v87 + 2);
        if (v79 >= *(float*)(v88 + 12)) {
          v79 = *(float*)(v88 + 12);
        }
        v89 = v77 + 16LL * (unsigned int)(v87 + 3);
        if (v79 >= *(float*)(v89 + 12)) {
          v79 = *(float*)(v89 + 12);
        }
        v90 = v77 + 16LL * (unsigned int)(v87 + 4);
        if (v79 >= *(float*)(v90 + 12)) {
          v79 = *(float*)(v90 + 12);
        }
        v91 = v77 + 16LL * (unsigned int)(v87 + 5);
        if (v79 >= *(float*)(v91 + 12)) {
          v79 = *(float*)(v91 + 12);
        }
        v92 = *(float*)(v77 + 16LL * (unsigned int)(v87 + 6) + 12);
        v93 = v77 + 16LL * (unsigned int)(v87 + 7);
        v94 = v77 + 16LL * (unsigned int)(v87 + 8);
        if (v79 >= v92) {
          v79 = v92;
        }
        if (v79 >= *(float*)(v93 + 12)) {
          v79 = *(float*)(v93 + 12);
        }
        if (v79 >= *(float*)(v94 + 12)) {
          v79 = *(float*)(v94 + 12);
        }
      } while (v85 != v86);
      v84 = v86 + 1;
      if (v83 != 0) {
        goto LABEL_96;
      }
    }
    else {
      v84 = 1;
      if (v83 == 0) {
        goto LABEL_100;
      }
    LABEL_96:
      v95 = v84 + v78;
      do {
        v96 = v77 + 16LL * v95++;
        if (v79 >= *(float*)(v96 + 12)) {
          v79 = *(float*)(v96 + 12);
        }
        --v83;
      } while (v83 != 0);
    }
  LABEL_100:
    v97 = 4 * v33;
    v98 = *(float*)(v77 + 64LL * v33 + 12);
    v99 = *(unsigned int*)(v14 + 16LL * v33 + 12);
    if ((unsigned int)v99 >= 2) {
      v100 = v99 - 1;
      v101 = v99 - 2;
      v102 = (v99 - 1) & 7;
      if (v101 >= 7) {
        v104 = v100 & 0xFFFFFFFFFFFFFFF8LL;
        v105 = 0;
        do {
          v106 = v97 + v105;
          v105 += 8;
          if (v98 >= *(float*)(v77 + 16LL * (unsigned int)(v106 + 1) + 12)) {
            v98 = *(float*)(v77 + 16LL * (unsigned int)(v106 + 1) + 12);
          }
          v107 = v77 + 16LL * (unsigned int)(v106 + 2);
          if (v98 >= *(float*)(v107 + 12)) {
            v98 = *(float*)(v107 + 12);
          }
          v108 = v77 + 16LL * (unsigned int)(v106 + 3);
          if (v98 >= *(float*)(v108 + 12)) {
            v98 = *(float*)(v108 + 12);
          }
          v109 = v77 + 16LL * (unsigned int)(v106 + 4);
          if (v98 >= *(float*)(v109 + 12)) {
            v98 = *(float*)(v109 + 12);
          }
          v110 = v77 + 16LL * (unsigned int)(v106 + 5);
          if (v98 >= *(float*)(v110 + 12)) {
            v98 = *(float*)(v110 + 12);
          }
          v111 = *(float*)(v77 + 16LL * (unsigned int)(v106 + 6) + 12);
          v112 = v77 + 16LL * (unsigned int)(v106 + 7);
          v113 = v77 + 16LL * (unsigned int)(v106 + 8);
          if (v98 >= v111) {
            v98 = v111;
          }
          if (v98 >= *(float*)(v112 + 12)) {
            v98 = *(float*)(v112 + 12);
          }
          if (v98 >= *(float*)(v113 + 12)) {
            v98 = *(float*)(v113 + 12);
          }
        } while (v104 != v105);
        v103 = v105 + 1;
        if (v102 != 0) {
          goto LABEL_123;
        }
      }
      else {
        v103 = 1;
        if (v102 == 0) {
          goto LABEL_127;
        }
      LABEL_123:
        v114 = v103 + v97;
        do {
          v115 = v77 + 16LL * v114++;
          if (v98 >= *(float*)(v115 + 12)) {
            v98 = *(float*)(v115 + 12);
          }
          --v102;
        } while (v102 != 0);
      }
    }
  LABEL_127:
    v116 = *(_DWORD*)(result + 1288);
    if (v79 > v98) {
      v33 = v30;
    }
    v117 = v14 + 16LL * v33;
    v8 = (_DWORD*)(result + 1288);
    v118 = (_DWORD*)(v77 + 64LL * v33);
    *(float*)v117 = v11;
    *(float*)(v117 + 4) = v12;
    *(float*)(v117 + 8) = v13;
    v119 = *a3;
    v120 = a3[1];
    v10 = v116 - *(_DWORD*)(v117 + 12);
    *(_DWORD*)(v117 + 12) = 1;
    *v118 = v119;
    v118[1] = v120;
    v121 = a3[3];
    v118[2] = a3[2];
    v118[3] = v121;
  LABEL_130:
    *v8 = v10 + 1;
  }
  return result;
}

__int64 GameHr_476500(__int64 a1, __int64 a2, __int64 a3, __int64 a4, float* a5,
                      __int64 a6, __int64 a7)
{
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  float* v11;
  __int64 v12;
  __int64 v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float* v24;
  float v25;
  float v26;

  (*(void (**)(_QWORD, __int64, __int64, __int64, __int64, __int64, float,
               float, float))(**(_QWORD**)(a2 + 8) + 16LL))(
      *(_QWORD*)(a2 + 8), a2, a1, a4, a3, a7, *a5, a5[1], a5[2]);
  v8 = *(_DWORD*)(a7 + 20480);
  if (v8 != 0) {
    v9 = v8 & 3;
    if (v8 < 4) {
      v10 = 0;
      if ((v8 & 3) == 0) {
        return 1;
      }
      goto LABEL_8;
    }
    v11 = (float*)(a7 + 160);
    v12 = 0;
    v13 = -(__int64)(v8 & 0xFFFFFFFC);
    do {
      v12 -= 4;
      v14 = -*(v11 - 39);
      v15 = -*(v11 - 38);
      *(v11 - 40) = -*(v11 - 40);
      *(v11 - 39) = v14;
      v16 = *(v11 - 20);
      v17 = *(v11 - 19);
      *(v11 - 38) = v15;
      v18 = -*(v11 - 18);
      *(v11 - 20) = -v16;
      *(v11 - 19) = -v17;
      v19 = *v11;
      v20 = v11[1];
      *(v11 - 18) = v18;
      v21 = -v11[2];
      *v11 = -v19;
      v11[1] = -v20;
      v11[2] = v21;
      v22 = -v11[21];
      v23 = -v11[22];
      v11[20] = -v11[20];
      v11[21] = v22;
      v11[22] = v23;
      v11 += 80;
    } while (v13 != v12);
    v10 = -v12;
    if (v9 != 0) {
    LABEL_8:
      v24 = (float*)(a7 + 80 * v10 + 8);
      do {
        --v9;
        v25 = -*(v24 - 1);
        v26 = -*v24;
        *(v24 - 2) = -*(v24 - 2);
        *(v24 - 1) = v25;
        *v24 = v26;
        v24 += 20;
      } while (v9 != 0);
    }
  }
  return 1;
}

__int64 GameHr_476d70(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)result = GameData_1f88e48;
  if ((*(_WORD*)(result + 10) & 1) != 0) {
    v1 = *(_QWORD*)(result + 56);
    v2 = (_QWORD*)result;
    if (v1 != 0) {
      v3 = GameRoutine_55af80(0);
      result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v3 + 24LL))(v3, v1);
      v2[7] = 0;
    }
    v4 = v2[14];
    if (v4 != 0) {
      GameRoutine_477ca0(v2[14]);
      v5 = GameRoutine_55af80(0);
      result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v5 + 24LL))(v5, v4);
      v2[14] = 0;
    }
    v6 = v2[13];
    if (v6 != 0) {
      GameRoutine_4243e0(v2[13]);
      v7 = GameRoutine_55af80(0);
      result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v7 + 24LL))(v7, v6);
      v2[13] = 0;
    }
  }
  return result;
}

unsigned int* GameHr_479080(unsigned int* result, float* a2, __int64 a3,
                            __int64 a4)
{
  unsigned int v4;
  float v5;
  float v6;
  __int64 v7;
  __int64 v8;
  float* v9;
  float v10;
  float v11;
  bool v12;
  unsigned __int16* v13;
  unsigned int v14;
  __int64 v15;
  unsigned __int8* v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned __int64 v22;
  int v23;
  int v24;
  unsigned __int64 v25;
  int v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  int v29;
  int v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  int v33;
  int v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  int v37;
  int v38;
  _QWORD v39[4];

  v4 = *result;
  v5 = *a2;
  v6 = a2[1];
  v7 = *(_QWORD*)(a4 + 24);
  v8 = *(_QWORD*)(a4 + 32);
  v9 = (float*)(a3 + 12LL * *result);
  memset(v39, 0, sizeof(v39));
  v10 = a2[2];
  v11 = (float)((float)(v6 * v9[1]) + (float)(v5 * *v9)) + (float)(v10 * v9[2]);
  do {
    v13 = (unsigned __int16*)(v7 + 4LL * v4);
    *result = v4;
    v14 = *v13;
    v15 = v13[1];
    if (v14 == 0) {
      break;
    }
    v16 = (unsigned __int8*)(v8 + v15);
    if ((v14 & 3) != 0) {
      v17 = 0;
      v18 = v14;
      v19 = v4;
      do {
        v21 = *v16++;
        v20 = v21;
        v22 = (unsigned __int64)v21 >> 5;
        v23 = 1 << v21;
        v24 = *((_DWORD*)v39 + v22);
        if (((1 << v21) & v24) == 0) {
          *((_DWORD*)v39 + v22) = v23 | v24;
          if ((float)((float)((float)(v6 * *(float*)(a3 + 12LL * v20 + 4)) +
                              (float)(v5 * *(float*)(a3 + 12LL * v20))) +
                      (float)(v10 * *(float*)(a3 + 12LL * v20 + 8))) > v11) {
            v11 = (float)((float)(v6 * *(float*)(a3 + 12LL * v20 + 4)) +
                          (float)(v5 * *(float*)(a3 + 12LL * v20))) +
                  (float)(v10 * *(float*)(a3 + 12LL * v20 + 8));
            v19 = v20;
          }
        }
        ++v17;
        --v18;
      } while ((v14 & 3) != (unsigned __int16)v17);
    }
    else {
      v18 = v14;
      v19 = v4;
    }
    if (v14 >= 4) {
      do {
        v25 = *v16;
        v26 = *((_DWORD*)v39 + (v25 >> 5));
        if (((1 << v25) & v26) != 0) {
          v27 = v16[1];
          v28 = v27 >> 5;
          v29 = 1 << v27;
          v30 = *((_DWORD*)v39 + (v27 >> 5));
          if (((1 << v27) & v30) != 0) {
            goto LABEL_17;
          }
        }
        else {
          *((_DWORD*)v39 + (v25 >> 5)) = (1 << v25) | v26;
          if ((float)((float)((float)(v6 *
                                      *(float*)(a3 + 12LL * (unsigned int)v25 +
                                                4)) +
                              (float)(v5 * *(float*)(a3 + 12LL * (unsigned int)
                                                                     v25))) +
                      (float)(v10 * *(float*)(a3 + 12LL * (unsigned int)v25 +
                                              8))) > v11) {
            v11 = (float)((float)(v6 * *(float*)(a3 + 12LL * (unsigned int)v25 +
                                                 4)) +
                          (float)(v5 *
                                  *(float*)(a3 + 12LL * (unsigned int)v25))) +
                  (float)(v10 * *(float*)(a3 + 12LL * (unsigned int)v25 + 8));
            v19 = v25;
          }
          v27 = v16[1];
          v28 = v27 >> 5;
          v29 = 1 << v27;
          v30 = *((_DWORD*)v39 + (v27 >> 5));
          if (((1 << v27) & v30) != 0) {
          LABEL_17:
            v31 = v16[2];
            v32 = v31 >> 5;
            v33 = 1 << v31;
            v34 = *((_DWORD*)v39 + (v31 >> 5));
            if (((1 << v31) & v34) == 0) {
              goto LABEL_26;
            }
            goto LABEL_18;
          }
        }
        *((_DWORD*)v39 + v28) = v29 | v30;
        if ((float)((float)((float)(v6 *
                                    *(float*)(a3 + 12LL * (unsigned int)v27 +
                                              4)) +
                            (float)(v5 *
                                    *(float*)(a3 + 12LL * (unsigned int)v27))) +
                    (float)(v10 * *(float*)(a3 + 12LL * (unsigned int)v27 +
                                            8))) > v11) {
          v11 =
              (float)((float)(v6 *
                              *(float*)(a3 + 12LL * (unsigned int)v27 + 4)) +
                      (float)(v5 * *(float*)(a3 + 12LL * (unsigned int)v27))) +
              (float)(v10 * *(float*)(a3 + 12LL * (unsigned int)v27 + 8));
          v19 = v27;
        }
        v31 = v16[2];
        v32 = v31 >> 5;
        v33 = 1 << v31;
        v34 = *((_DWORD*)v39 + (v31 >> 5));
        if (((1 << v31) & v34) == 0) {
        LABEL_26:
          *((_DWORD*)v39 + v32) = v33 | v34;
          if ((float)((float)((float)(v6 *
                                      *(float*)(a3 + 12LL * (unsigned int)v31 +
                                                4)) +
                              (float)(v5 * *(float*)(a3 + 12LL * (unsigned int)
                                                                     v31))) +
                      (float)(v10 * *(float*)(a3 + 12LL * (unsigned int)v31 +
                                              8))) > v11) {
            v11 = (float)((float)(v6 * *(float*)(a3 + 12LL * (unsigned int)v31 +
                                                 4)) +
                          (float)(v5 *
                                  *(float*)(a3 + 12LL * (unsigned int)v31))) +
                  (float)(v10 * *(float*)(a3 + 12LL * (unsigned int)v31 + 8));
            v19 = v31;
          }
          v35 = v16[3];
          v36 = v35 >> 5;
          v37 = 1 << v35;
          v38 = *((_DWORD*)v39 + (v35 >> 5));
          if (((1 << v35) & v38) != 0) {
            goto LABEL_14;
          }
        LABEL_29:
          *((_DWORD*)v39 + v36) = v37 | v38;
          if ((float)((float)((float)(v6 *
                                      *(float*)(a3 + 12LL * (unsigned int)v35 +
                                                4)) +
                              (float)(v5 * *(float*)(a3 + 12LL * (unsigned int)
                                                                     v35))) +
                      (float)(v10 * *(float*)(a3 + 12LL * (unsigned int)v35 +
                                              8))) > v11) {
            v11 = (float)((float)(v6 * *(float*)(a3 + 12LL * (unsigned int)v35 +
                                                 4)) +
                          (float)(v5 *
                                  *(float*)(a3 + 12LL * (unsigned int)v35))) +
                  (float)(v10 * *(float*)(a3 + 12LL * (unsigned int)v35 + 8));
            v19 = v35;
          }
          goto LABEL_14;
        }
      LABEL_18:
        v35 = v16[3];
        v36 = v35 >> 5;
        v37 = 1 << v35;
        v38 = *((_DWORD*)v39 + (v35 >> 5));
        if (((1 << v35) & v38) == 0) {
          goto LABEL_29;
        }
      LABEL_14:
        v18 -= 4;
        v16 += 4;
      } while ((_WORD)v18 != 0);
    }
    v12 = v19 == v4;
    v4 = v19;
  } while (!v12);
  return result;
}

__int64 GameHr_481010(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  *(_QWORD*)result = GameData_1f88ef8;
  if ((*(_WORD*)(result + 10) & 1) != 0) {
    v1 = *(_QWORD*)(result + 64);
    if (v1 != 0) {
      v2 = result;
      v3 = GameRoutine_55af80(0);
      result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v3 + 24LL))(v3, v1);
      *(_QWORD*)(v2 + 64) = 0;
    }
  }
  return result;
}

_QWORD* GameHr_48d480(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;

  v1 = result[4];
  *result = &GameData_1f890e0;
  if (v1 != 0) {
    v2 = result;
    v3 = GameRoutine_55af80(0);
    result = (_QWORD*)(*(__int64 (**)(__int64, __int64))(*(_QWORD*)v3 + 24LL))(
        v3, v1);
    v2[4] = 0;
  }
  return result;
}

#pragma GCC visibility pop
