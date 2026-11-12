#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* nvidia_dlss_rel_source_39180(_QWORD*);
_QWORD* nvidia_dlss_rel_source_39900(_QWORD*, _QWORD*);
__int64 Destroy_CubinConvLayer(_QWORD);
__int64 NgxRoutine_29c90(_QWORD);
__int64 NgxRoutine_36500(_QWORD*);
__int64 NgxRoutine_420(__int64);
__int64 NgxRoutine_420_alt1(_QWORD) __asm__("NgxRoutine_420");
__int64 NgxRoutine_420_alt2(unsigned __int64) __asm__("NgxRoutine_420");
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_70310(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD, _DWORD, _DWORD);
__int64 NgxRoutine_baf00(void);
__int64 NgxRoutine_baf10(_QWORD);
__int64 ProcessAutoExposure(__int64, __int64, __int64, __int64, _QWORD*,
                            __int64, int);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 nvidia_dlss_a94e0(_QWORD, _QWORD);
__int64 nvidia_dlss_a9960(_QWORD, _QWORD, _QWORD);
__int64 nvidia_dlss_a9b20(_QWORD, _QWORD, _QWORD);
__int64 nvidia_dlss_rel_source_34a80(_QWORD*);
__int64 nvidia_dlss_rel_source_39430(__int64);
__int64 nvidia_dlss_rel_source_features_dlaa_654b0_alt1(_QWORD, _QWORD) __asm__(
    "nvidia_dlss_rel_source_features_dlaa_654b0");
__int64 nvidia_dlss_rel_source_features_dlaa_65660_alt1(_QWORD, _QWORD) __asm__(
    "nvidia_dlss_rel_source_features_dlaa_65660");
__int64 nvidia_dlss_rel_source_features_dlaa_75280_alt1(_QWORD) __asm__(
    "nvidia_dlss_rel_source_features_dlaa_75280");
__int64 nvidia_dlss_rel_source_features_dlaa_767d0_alt1(_QWORD) __asm__(
    "nvidia_dlss_rel_source_features_dlaa_767d0");
__int64 nvidia_dlss_rel_source_features_dlaa_76c60_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD) __asm__("nvidia_dlss_rel_source_features_dlaa_76c60");
__int64 nvidia_dlss_rel_source_features_dlaa_77680_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD) __asm__("nvidia_dlss_rel_source_features_dlaa_77680");
__int64 nvidia_dlss_rel_source_features_dlaa_77e80_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD) __asm__("nvidia_dlss_rel_source_features_dlaa_77e80");
__int64 nvidia_dlss_rel_source_features_dlaa_78680_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD) __asm__("nvidia_dlss_rel_source_features_dlaa_78680");
__int64 nvidia_dlss_rel_source_features_dlaa_78e80_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD) __asm__("nvidia_dlss_rel_source_features_dlaa_78e80");
__int64 nvidia_dlss_rel_source_features_dlaa_79680_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD) __asm__("nvidia_dlss_rel_source_features_dlaa_79680");
__int64 nvidia_dlss_rel_source_features_dlaa_79e80_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD) __asm__("nvidia_dlss_rel_source_features_dlaa_79e80");
__int64 nvidia_dlss_rel_source_features_dlaa_7a680_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD) __asm__("nvidia_dlss_rel_source_features_dlaa_7a680");
__int64 nvidia_dlss_rel_source_features_dlaa_7ae80_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD) __asm__("nvidia_dlss_rel_source_features_dlaa_7ae80");
__int64 nvidia_dlss_rel_source_features_dlaa_7b680_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD) __asm__("nvidia_dlss_rel_source_features_dlaa_7b680");
__int64 nvidia_dlss_rel_source_features_dlaa_7be80_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD) __asm__("nvidia_dlss_rel_source_features_dlaa_7be80");
__int64 nvidia_dlss_rel_source_features_dlaa_7c540_alt1(_QWORD, _QWORD) __asm__(
    "nvidia_dlss_rel_source_features_dlaa_7c540");
extern _UNKNOWN NgxData_f6a9c;
extern __int64 (*NgxData_94cc90[])();
extern __int64 (*NgxData_94cdc8[])();
extern __int64 (*NgxData_94cfa8[])();
extern __int64 (*NgxData_94cff8[])();
extern __int64 (*NgxData_94d048[])();
extern __int64 (*NgxData_94d1c0[])();
extern __int64 (*NgxData_94d270[])();
extern __int64 (*NgxData_94d2b8[])();
extern __int64 (*NgxData_94d358[])();
extern __int64 (*NgxData_94d3f8[])();
extern __int64 (*NgxData_94d498[])();
extern __int64 (*NgxData_94d538[])();
extern __int64 (*NgxData_94d5d8[])();
extern __int64 (*NgxData_94d678[])();
extern __int64 (*NgxData_94d718[])();
extern __int64 (*NgxData_94d7b8[])();
extern __int64 (*NgxData_94d858[])();
extern __int64* NgxData_9529f8;
extern __int64* NgxData_952a10[8];
extern __int64* NgxData_952a20[6];
extern __int64* NgxData_952a28[5];
extern __int64* NgxData_952a40[2];
extern __int64* NgxData_952ae0[18];
extern __int64* NgxData_952af0[16];
extern __int64* NgxData_952af8[15];
extern __int64* NgxData_952b00[14];
extern __int64* NgxData_952b08[13];
extern __int64* NgxData_952b10[12];
extern __int64* NgxData_952b18[11];
extern __int64* NgxData_952b20[10];
extern __int64* NgxData_952b28[9];
extern __int64* NgxData_952b30[8];
extern __int64* NgxData_952b38[7];
long double fminf_plt(float, long double);
void __attribute__((noreturn)) NgxRoutine_27cf0();
void __attribute__((noreturn)) nvidia_dlss_rel_source_common_33410();
__int64 nvidia_dlss_rel_source_features_dlaa_5ea70(__int64 a1);
__int64 nvidia_dlss_rel_source_features_dlaa_60200(_QWORD* a1);
__int64 nvidia_dlss_rel_source_features_dlaa_602f0(__int64 a1, _QWORD* a2);
__int64 nvidia_dlss_rel_source_features_dlaa_604e0(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   _QWORD* a5);
__int64 nvidia_dlss_rel_source_features_dlaa_60c80(__int64 result);
__int64 nvidia_dlss_rel_source_features_dlaa_611b0(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   unsigned __int8* a7,
                                                   _QWORD* a8, __int64* a9);
__int64 nvidia_dlss_rel_source_features_dlaa_624d0(_QWORD* a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   _DWORD* a5, __int64 a6);
__int64 nvidia_dlss_rel_source_features_dlaa_62770(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6);
__int64 nvidia_dlss_rel_source_features_dlaa_654b0(__int64 result, _QWORD* a2);
__int64 nvidia_dlss_rel_source_features_dlaa_65500(__int64 a1,
                                                   unsigned __int8* a2,
                                                   __int64 a3, int** a4);
__int64* nvidia_dlss_rel_source_features_dlaa_65660(__int64* result,
                                                    __int64* a2);
__int64 nvidia_dlss_rel_source_features_dlaa_65840(__int64 a1,
                                                   unsigned __int8* a2,
                                                   __int64 a3, int** a4);
_QWORD* nvidia_dlss_rel_source_features_dlaa_659c0(_QWORD* result);
__attribute__((swiftcall)) void
nvidia_dlss_rel_source_features_dlaa_6fe30(PSEUDO_X8 x8_, _QWORD* a1,
                                           __int64 a2);
__attribute__((swiftcall)) void
nvidia_dlss_rel_source_features_dlaa_6ff80(PSEUDO_X8 x8_, _QWORD* a1,
                                           __int64 a2);
__int64 nvidia_dlss_rel_source_features_dlaa_701c0(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64* a4,
                                                   __int64 a5, unsigned int a6,
                                                   __int64* a7, unsigned int a8,
                                                   __int64 a9, int a10);
__int64 nvidia_dlss_rel_source_features_dlaa_70670(_QWORD* a1);
__int64 nvidia_dlss_rel_source_features_dlaa_706d0(_QWORD* a1);
__int64 nvidia_dlss_rel_source_features_dlaa_70730(_QWORD* a1);
__int64 nvidia_dlss_rel_source_features_dlaa_707c0(_QWORD* a1);
__int64 nvidia_dlss_rel_source_features_dlaa_70860(_QWORD* a1);
__int64 nvidia_dlss_rel_source_features_dlaa_708e0(_QWORD* a1);
__int64 nvidia_dlss_rel_source_features_dlaa_70970(_QWORD* a1);
__int64 nvidia_dlss_rel_source_features_dlaa_709e0(_QWORD* a1);
__int64 nvidia_dlss_rel_source_features_dlaa_74e30(_QWORD* a1);
__int64 nvidia_dlss_rel_source_features_dlaa_75280(__int64 a1);
__int64 nvidia_dlss_rel_source_features_dlaa_75360(__int64 a1, __int64 a2,
                                                   char a3);
__int64 nvidia_dlss_rel_source_features_dlaa_75540(__int64 a1);
__int64 nvidia_dlss_rel_source_features_dlaa_76570(__int64* a1, __int64 a2,
                                                   __int64 a3,
                                                   unsigned __int64 a4);
__int64 nvidia_dlss_rel_source_features_dlaa_766c0(__int64 result, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64 a7);
__int64 nvidia_dlss_rel_source_features_dlaa_76770(__int64 result, _QWORD* a2);
__int64 nvidia_dlss_rel_source_features_dlaa_767d0(_QWORD* a1);
__int64 nvidia_dlss_rel_source_features_dlaa_76860(_QWORD* a1);
__int64 nvidia_dlss_rel_source_features_dlaa_768e0(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64 a7, _QWORD* a8,
                                                   _QWORD* a9);
__int64 nvidia_dlss_rel_source_features_dlaa_76c60(__int64 a1, __int64* a2,
                                                   __int64* a3, __int64* a4,
                                                   __int64* a5, __int64* a6,
                                                   __int64* a7, __int64 a8,
                                                   __int64 a9);
__int64 nvidia_dlss_rel_source_features_dlaa_77080(_QWORD* a1);
__int64 nvidia_dlss_rel_source_features_dlaa_77190(__int64 result);
__int64 nvidia_dlss_rel_source_features_dlaa_772b0(_QWORD* a1);
__int64 nvidia_dlss_rel_source_features_dlaa_77310(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64 a7, _QWORD* a8,
                                                   _QWORD* a9);
__int64 nvidia_dlss_rel_source_features_dlaa_77680(__int64 a1, __int64* a2,
                                                   __int64* a3, __int64* a4,
                                                   __int64* a5, __int64* a6,
                                                   __int64* a7, __int64 a8,
                                                   __int64 a9);
__int64 nvidia_dlss_rel_source_features_dlaa_77aa0(_QWORD* a1);
__int64 nvidia_dlss_rel_source_features_dlaa_77b00(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64 a7, _QWORD* a8,
                                                   _QWORD* a9);
__int64 nvidia_dlss_rel_source_features_dlaa_77e80(__int64 a1, __int64* a2,
                                                   __int64* a3, __int64* a4,
                                                   __int64* a5, __int64* a6,
                                                   __int64* a7, __int64 a8,
                                                   __int64 a9);
__int64 nvidia_dlss_rel_source_features_dlaa_782a0(_QWORD* a1);
__int64 nvidia_dlss_rel_source_features_dlaa_78300(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64 a7, _QWORD* a8,
                                                   _QWORD* a9);
__int64 nvidia_dlss_rel_source_features_dlaa_78680(__int64 a1, __int64* a2,
                                                   __int64* a3, __int64* a4,
                                                   __int64* a5, __int64* a6,
                                                   __int64* a7, __int64 a8,
                                                   __int64 a9);
__int64 nvidia_dlss_rel_source_features_dlaa_78aa0(_QWORD* a1);
__int64 nvidia_dlss_rel_source_features_dlaa_78b00(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64 a7, _QWORD* a8,
                                                   _QWORD* a9);
__int64 nvidia_dlss_rel_source_features_dlaa_78e80(__int64 a1, __int64* a2,
                                                   __int64* a3, __int64* a4,
                                                   __int64* a5, __int64* a6,
                                                   __int64* a7, __int64 a8,
                                                   __int64 a9);
__int64 nvidia_dlss_rel_source_features_dlaa_792a0(_QWORD* a1);
__int64 nvidia_dlss_rel_source_features_dlaa_79300(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64 a7, _QWORD* a8,
                                                   _QWORD* a9);
__int64 nvidia_dlss_rel_source_features_dlaa_79680(__int64 a1, __int64* a2,
                                                   __int64* a3, __int64* a4,
                                                   __int64* a5, __int64* a6,
                                                   __int64* a7, __int64 a8,
                                                   __int64 a9);
__int64 nvidia_dlss_rel_source_features_dlaa_79aa0(_QWORD* a1);
__int64 nvidia_dlss_rel_source_features_dlaa_79b00(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64 a7, _QWORD* a8,
                                                   _QWORD* a9);
__int64 nvidia_dlss_rel_source_features_dlaa_79e80(__int64 a1, __int64* a2,
                                                   __int64* a3, __int64* a4,
                                                   __int64* a5, __int64* a6,
                                                   __int64* a7, __int64 a8,
                                                   __int64 a9);
__int64 nvidia_dlss_rel_source_features_dlaa_7a2a0(_QWORD* a1);
__int64 nvidia_dlss_rel_source_features_dlaa_7a300(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64 a7, _QWORD* a8,
                                                   _QWORD* a9);
__int64 nvidia_dlss_rel_source_features_dlaa_7a680(__int64 a1, __int64* a2,
                                                   __int64* a3, __int64* a4,
                                                   __int64* a5, __int64* a6,
                                                   __int64* a7, __int64 a8,
                                                   __int64 a9);
__int64 nvidia_dlss_rel_source_features_dlaa_7aaa0(_QWORD* a1);
__int64 nvidia_dlss_rel_source_features_dlaa_7ab00(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64 a7, _QWORD* a8,
                                                   _QWORD* a9);
__int64 nvidia_dlss_rel_source_features_dlaa_7ae80(__int64 a1, __int64* a2,
                                                   __int64* a3, __int64* a4,
                                                   __int64* a5, __int64* a6,
                                                   __int64* a7, __int64 a8,
                                                   __int64 a9);
__int64 nvidia_dlss_rel_source_features_dlaa_7b2a0(_QWORD* a1);
__int64 nvidia_dlss_rel_source_features_dlaa_7b300(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64 a7, _QWORD* a8,
                                                   _QWORD* a9);
__int64 nvidia_dlss_rel_source_features_dlaa_7b680(__int64 a1, __int64* a2,
                                                   __int64* a3, __int64* a4,
                                                   __int64* a5, __int64* a6,
                                                   __int64* a7, __int64 a8,
                                                   __int64 a9);
__int64 nvidia_dlss_rel_source_features_dlaa_7baa0(_QWORD* a1);
__int64 nvidia_dlss_rel_source_features_dlaa_7bb00(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64 a7, _QWORD* a8,
                                                   _QWORD* a9);
__int64 nvidia_dlss_rel_source_features_dlaa_7be80(__int64 a1, __int64* a2,
                                                   __int64* a3, __int64* a4,
                                                   __int64* a5, __int64* a6,
                                                   __int64* a7, __int64 a8,
                                                   __int64 a9);
__int64 nvidia_dlss_rel_source_features_dlaa_7c2a0(__int64 a1);
__int64 nvidia_dlss_rel_source_features_dlaa_7c330(__int64 result, int a2,
                                                   __int64 a3);
__int64 nvidia_dlss_rel_source_features_dlaa_7c3b0(__int64 a1, __int64 a2,
                                                   __int64 a3, char a4);
__int64 nvidia_dlss_rel_source_features_dlaa_7c540(__int64 a1, _QWORD* a2);
__int64 nvidia_dlss_rel_source_features_dlaa_7ccd0(__int64 a1, __int64 a2,
                                                   __int64 a3);
__int64 nvidia_dlss_rel_source_features_dlaa_7ce10(__int64 a1, __int64 a2,
                                                   char a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64* a7, __int64* a8,
                                                   float* a9, float* a10);
__int64 nvidia_dlss_rel_source_features_dlaa_7cf20(__int64 a1, _DWORD* a2,
                                                   __int64 a3);

__int64 nvidia_dlss_rel_source_features_dlaa_5ea70(__int64 a1)
{
  nvidia_dlss_rel_source_features_dlaa_654b0_alt1(a1 + 328,
                                                  *(_QWORD*)(a1 + 336));
  nvidia_dlss_rel_source_features_dlaa_654b0_alt1(a1 + 304,
                                                  *(_QWORD*)(a1 + 312));
  return NgxRoutine_29c90(a1);
}

__int64 nvidia_dlss_rel_source_features_dlaa_60200(_QWORD* a1)
{
  __int64 v2;

  v2 = a1[1];
  if (v2 != 0) {
    if (a1[44] == 0 || ((*(void (**)(__int64))(*(_QWORD*)v2 + 184LL))(v2),
                        v2 = a1[1], a1[44] = 0, v2 != 0)) {
      if (a1[45] == 0 || ((*(void (**)(__int64))(*(_QWORD*)v2 + 184LL))(v2),
                          v2 = a1[1], a1[45] = 0, v2 != 0)) {
        if (a1[46] == 0 || ((*(void (**)(__int64))(*(_QWORD*)v2 + 184LL))(v2),
                            v2 = a1[1], a1[46] = 0, v2 != 0)) {
          if (a1[47] == 0 || ((*(void (**)(__int64))(*(_QWORD*)v2 + 184LL))(v2),
                              v2 = a1[1], a1[47] = 0, v2 != 0)) {
            if (a1[48] == 0 ||
                ((*(void (**)(__int64))(*(_QWORD*)v2 + 184LL))(v2), v2 = a1[1],
                 a1[48] = 0, v2 != 0)) {
              if (a1[49] != 0) {
                (*(void (**)(__int64))(*(_QWORD*)v2 + 184LL))(v2);
                a1[49] = 0;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

__int64 nvidia_dlss_rel_source_features_dlaa_602f0(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v5;
  int v6;
  _QWORD v7[354];

  result = nvidia_dlss_rel_source_features_dlaa_7c540_alt1(a1, a2 + 21);
  if ((_DWORD)result == 1) {
    if ((*(unsigned int (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 184LL))(
            *(_QWORD*)(a1 + 8), a2[157]) != 0) {
      return 3134193666LL;
    }
    else if ((*(unsigned int (**)(_QWORD, _QWORD))(
                 **(_QWORD**)(a1 + 8) + 184LL))(*(_QWORD*)(a1 + 8), a2[158]) !=
                 0 ||
             (*(unsigned int (**)(_QWORD, _QWORD))(
                 **(_QWORD**)(a1 + 8) + 184LL))(*(_QWORD*)(a1 + 8), a2[167]) !=
                 0 ||
             (*(unsigned int (**)(_QWORD, _QWORD))(
                 **(_QWORD**)(a1 + 8) + 184LL))(*(_QWORD*)(a1 + 8), a2[169]) !=
                 0 ||
             (*(unsigned int (**)(_QWORD, _QWORD))(
                 **(_QWORD**)(a1 + 8) + 184LL))(*(_QWORD*)(a1 + 8), a2[166]) !=
                 0 ||
             (*(unsigned int (**)(_QWORD, _QWORD))(
                 **(_QWORD**)(a1 + 8) + 184LL))(*(_QWORD*)(a1 + 8), a2[168]) !=
                 0 ||
             (*(unsigned int (**)(_QWORD, _QWORD))(
                 **(_QWORD**)(a1 + 8) + 184LL))(*(_QWORD*)(a1 + 8), a2[170]) !=
                 0 ||
             (*(unsigned int (**)(_QWORD, _QWORD))(
                 **(_QWORD**)(a1 + 8) + 184LL))(*(_QWORD*)(a1 + 8), a2[160]) !=
                 0 ||
             (*(unsigned int (**)(_QWORD, _QWORD))(
                 **(_QWORD**)(a1 + 8) + 184LL))(*(_QWORD*)(a1 + 8), a2[161]) !=
                 0 ||
             (*(unsigned int (**)(_QWORD, _QWORD))(
                 **(_QWORD**)(a1 + 8) + 184LL))(*(_QWORD*)(a1 + 8), a2[162]) !=
                 0 ||
             (*(unsigned int (**)(_QWORD, _QWORD))(
                 **(_QWORD**)(a1 + 8) + 184LL))(*(_QWORD*)(a1 + 8), a2[164]) !=
                 0 ||
             (*(unsigned int (**)(_QWORD, _QWORD))(
                 **(_QWORD**)(a1 + 8) + 184LL))(*(_QWORD*)(a1 + 8), a2[163]) !=
                 0) {
      return 3134193666LL;
    }
    else {
      nvidia_dlss_rel_source_features_dlaa_75280_alt1(a2 + 97);
      v5 = a2[84];
      if (v5 == 0 || (v6 = nvidia_dlss_a94e0(v5, *(_QWORD*)(a1 + 8)),
                      result = 3134193666LL, v6 == 0)) {
        nvidia_dlss_rel_source_39430((__int64)v7);
        nvidia_dlss_rel_source_39900(a2 + 21, v7);
        nvidia_dlss_rel_source_39180(v7);
        return 1;
      }
    }
  }
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_604e0(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   _QWORD* a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  int v17;
  char v18;
  int v19;
  bool v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  int v28;
  int v29;
  _DWORD v30[2];
  _QWORD v31[2];
  int v32;
  int v33;
  int v34;
  __int64 v35;
  int v36;
  char v37;
  __int64 v38;
  __int64 v39;

  v7 = *(_QWORD*)(a3 + 1256);
  if (v7 != 0) {
    *a5 = v7;
    return 1;
  }
  v38 = v5;
  v39 = v6;
  v9 = 1;
  if (a4 != 0) {
    v10 = a1;
    v11 = *(_QWORD*)(a1 + 8);
    v35 = 0;
    v36 = 0;
    v12 = *(_BYTE*)(a3 + 144);
    v13 = a3;
    v14 = a2;
    v15 = a5;
    v16 = a4;
    v37 = 1;
    HIDWORD(v31[0]) = 0;
    if ((*(unsigned int (**)(__int64, __int64, _DWORD*))(
            *(_QWORD*)v11 + 424LL))(v11, a4, v30) != 0) {
      return 3134193666LL;
    }
    v17 = HIDWORD(v31[0]);
    v18 = v12 ^ 1;
    if (HIDWORD(v31[0]) == 0) {
      (*(void (**)(_QWORD, _QWORD, char*))(**(_QWORD**)(v10 + 8) + 48LL))(
          *(_QWORD*)(v10 + 8), LODWORD(v31[0]), (char*)v31 + 4);
      v17 = HIDWORD(v31[0]);
    }
    a5 = v15;
    a3 = v13;
    a2 = v14;
    a1 = v10;
    a4 = v16;
    v9 = v37 & v18 ^ 1 | (v17 != 2);
  }
  v19 = *(_DWORD*)(a3 + 516);
  if ((v9 & 1) == 0 && (*(_DWORD*)(a3 + 512) <= *(_DWORD*)(a3 + 104)
                            ? (v20 = v19 <= *(_DWORD*)(a3 + 108))
                            : (v20 = false),
                        v20)) {
    *a5 = a4;
  }
  else {
    v21 = (_QWORD*)(a3 + 1256);
    v22 = *(_QWORD*)(a3 + 1256);
    if (v22 == 0) {
      v30[0] = *(_DWORD*)(a3 + 512);
      v30[1] = v19;
      v23 = a1;
      v24 = *(_QWORD*)(a1 + 8);
      v25 = a2;
      v26 = a5;
      v27 = a3;
      v31[0] = 0x2FFFFFFFFLL;
      v31[1] = 1;
      v28 = *(_DWORD*)(a3 + 116);
      v29 = *(_DWORD*)(a3 + 120);
      v32 = 1;
      v33 = v28;
      v34 = v29;
      if ((*(unsigned int (**)(__int64, _DWORD*, __int64, const char*,
                               __int64))(*(_QWORD*)v24 + 144LL))(
              v24, v30, a3 + 1256, "WarpedHistoryRgb", 0xFFFFFFFFLL) != 0) {
        return 3134193666LL;
      }
      if ((*(_BYTE*)(v27 + 1368) & 1) == 0) {
        if ((*(unsigned int (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
                **(_QWORD**)(v23 + 8) + 376LL))(*(_QWORD*)(v23 + 8), v25, *v21,
                                                1024, 8) != 0) {
          return 3134193666LL;
        }
        *(_BYTE*)(v27 + 1368) = 1;
      }
      v22 = *v21;
      a5 = v26;
    }
    *a5 = v22;
  }
  return 1;
}

__int64 nvidia_dlss_rel_source_features_dlaa_60c80(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 8);
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    return NgxRoutine_baf10(v1);
  }
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_611b0(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   unsigned __int8* a7,
                                                   _QWORD* a8, __int64* a9)
{
  int v9;
  int v10;
  bool v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v31;
  int v32;
  int v33;
  int v34;
  int v35;
  __int64 v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  __int64 v44;
  int v45;
  bool v46;
  int v47;
  int v48;
  float v49;
  int v50;
  int v51;
  int v52;
  __int64* v53;
  int v54;
  __int64 v55;
  int v56;
  int v57;
  __int64 v58;
  unsigned int v59;
  int v61;

  v9 = *(_DWORD*)(a4 + 512);
  v10 = *(_DWORD*)(a4 + 588);
  v18 = v9 + 15;
  v17 = v9 < -15;
  v19 = v9 + 30;
  if (v17) {
    v20 = v19;
  }
  else {
    v20 = v18;
  }
  v21 = *(_DWORD*)(a4 + 516);
  v22 = v21 + 15;
  v17 = v21 < -15;
  v23 = v21 + 30;
  if (v17) {
    v24 = v23;
  }
  else {
    v24 = v22;
  }
  v25 = 248;
  if (a7[1] != 0) {
    v25 = 240;
  }
  v26 = 232;
  if (a7[1] != 0) {
    v26 = 224;
  }
  if (v10 != 1) {
    v25 = v26;
  }
  v27 = *(_QWORD*)(a1 + v25);
  v28 = *(_QWORD*)(a1 + 264);
  v29 = *(_QWORD*)(a1 + 8);
  if (*((_DWORD*)a9 + 19) != 0 || v27 == 0) {
    v31 = v28;
  }
  else {
    v31 = v27;
  }
  if ((*(unsigned int (**)(__int64, __int64))(*(_QWORD*)v29 + 240LL))(
          v29, v31) != 0) {
    return (unsigned int)-1160773630;
  }
  v32 = *((_DWORD*)a9 + 25);
  *(_DWORD*)(a4 + 2056) = *((_DWORD*)a9 + 26);
  *(_DWORD*)(a4 + 2060) = v32;
  v33 = *((_DWORD*)a9 + 27);
  if (v10 == 1) {
    v34 = 1;
  }
  else {
    v34 = 2;
  }
  *(_DWORD*)(a4 + 2064) = *((_DWORD*)a9 + 28);
  v35 = *((_DWORD*)a9 + 21);
  *(_DWORD*)(a4 + 2068) = v33;
  *(_DWORD*)(a4 + 2072) = v35;
  v36 = a9[11];
  *(_DWORD*)(a4 + 2160) = v34;
  *(_BYTE*)(a4 + 2148) = 0;
  *(_QWORD*)(a4 + 2076) = v36;
  v37 = *((_DWORD*)a9 + 14);
  v38 = *((_DWORD*)a9 + 24);
  *(_DWORD*)(a4 + 2088) = *((_DWORD*)a9 + 15);
  LODWORD(v36) = *(_DWORD*)(a4 + 496);
  *(_DWORD*)(a4 + 2092) = v37;
  *(_DWORD*)(a4 + 2084) = v38;
  v39 = *((_DWORD*)a9 + 35);
  v40 = *((_DWORD*)a9 + 36);
  *(_DWORD*)(a4 + 2096) = v36;
  LODWORD(v36) = *(_DWORD*)(a4 + 500);
  *(_DWORD*)(a4 + 2140) = v39;
  *(_DWORD*)(a4 + 2144) = v40;
  *(_DWORD*)(a4 + 2100) = v36;
  v41 = *((_DWORD*)a7 + 11);
  *(_DWORD*)(a4 + 2104) = *((_DWORD*)a7 + 10);
  *(_DWORD*)(a4 + 2108) = v41;
  v42 = *(_DWORD*)(a6 + 172);
  *(_DWORD*)(a4 + 2112) = *(_DWORD*)(a6 + 168) - 1;
  *(_DWORD*)(a4 + 2116) = v42 - 1;
  *(_DWORD*)(a4 + 2120) = *a7;
  *(_DWORD*)(a4 + 2124) = *((_DWORD*)a9 + 16);
  v43 = *((_DWORD*)a9 + 43);
  *(_DWORD*)(a4 + 2128) = *((_DWORD*)a9 + 44);
  *(_DWORD*)(a4 + 2136) = v43;
  *(_DWORD*)(a4 + 2132) = 2139095039;
  *(_QWORD*)(a4 + 2152) = 0xFFFFFFFF00000000LL;
  v44 = *(_QWORD*)(a6 + 48);
  v45 = *((_DWORD*)a7 + 18);
  *(_DWORD*)(a4 + 2164) = *(_DWORD*)(a6 + 60);
  *(_DWORD*)(a4 + 2168) = *(_DWORD*)(a4 + 596);
  v46 = *a8 == v44;
  if (*a8 == v44) {
    v47 = *(_DWORD*)(a6 + 160);
  }
  else {
    v47 = 0;
  }
  *(_DWORD*)(a4 + 2172) = v47;
  v48 = *(_DWORD*)(a6 + 164);
  *(_DWORD*)(a4 + 2192) = v45;
  v49 = *(float*)(a6 + 176);
  if (!v46) {
    v48 = 0;
  }
  *(_DWORD*)(a4 + 2176) = v48;
  v50 = *(_DWORD*)(a6 + 120);
  v51 = *(_DWORD*)(a6 + 124);
  *(float*)(a4 + 2196) = v49;
  *(_DWORD*)(a4 + 2180) = v50;
  v52 = *(_DWORD*)(a4 + 112);
  *(_DWORD*)(a4 + 2184) = v51;
  *(float*)(a4 + 2200) = 1.0 / v49;
  *(_DWORD*)(a4 + 2188) = (v52 & 0x80) != 0;
  *(_QWORD*)(a4 + 2204) = 0x3E4CCCCD38D1B717LL;
  *(_DWORD*)(a4 + 2212) = 1065353216;
  v53 = *(__int64**)(a1 + 8);
  v54 = *((_DWORD*)a9 + 18);
  v55 = *a9;
  *(_DWORD*)(a4 + 2216) = *((_DWORD*)a9 + 17);
  v56 = *((_DWORD*)a9 + 19);
  v57 = *((_DWORD*)a9 + 20);
  *(_DWORD*)(a4 + 2220) = v54;
  *(_DWORD*)(a4 + 2224) = v56;
  v58 = *v53;
  *(_DWORD*)(a4 + 2228) = v57;
  if ((*(unsigned int (**)(__int64*, __int64, __int64, __int64))(v58 + 192))(
          v53, v55, a4 + 2240, 2) != 0 ||
      (*(unsigned int (**)(_QWORD, __int64, __int64, __int64))(
          **(_QWORD**)(a1 + 8) + 192LL))(*(_QWORD*)(a1 + 8), a9[1], a4 + 2248,
                                         2) != 0 ||
      (*(unsigned int (**)(_QWORD, __int64, __int64, __int64))(
          **(_QWORD**)(a1 + 8) + 192LL))(*(_QWORD*)(a1 + 8), a9[2], a4 + 2256,
                                         2) != 0 ||
      (*(unsigned int (**)(_QWORD, __int64, __int64))(
          **(_QWORD**)(a1 + 8) + 200LL))(*(_QWORD*)(a1 + 8), a9[4],
                                         a4 + 2264) != 0 ||
      (*(unsigned int (**)(_QWORD, __int64, __int64))(
          **(_QWORD**)(a1 + 8) + 200LL))(*(_QWORD*)(a1 + 8), a9[5],
                                         a4 + 2272) != 0 ||
      (*(unsigned int (**)(_QWORD, __int64, __int64))(
          **(_QWORD**)(a1 + 8) + 200LL))(*(_QWORD*)(a1 + 8), a9[6],
                                         a4 + 2280) != 0 ||
      (unsigned int)nvidia_dlss_a9b20(
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a4 + 712) - 16LL) + 120LL),
          *(_QWORD*)(a1 + 8), a4 + 2288) != 0) {
    return (unsigned int)-1160773630;
  }
  else {
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 512LL))(
        *(_QWORD*)(a1 + 8), *a8);
    v61 = (*(__int64 (**)(_QWORD, __int64, __int64, _QWORD, _QWORD, __int64))(
        **(_QWORD**)(a1 + 8) + 344LL))(*(_QWORD*)(a1 + 8), a4 + 2048, a2,
                                       (unsigned int)(v20 >> 4),
                                       (unsigned int)(v24 >> 4), 1);
    v59 = -1160773630;
    if (v61 == 0) {
      (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 520LL))(
          *(_QWORD*)(a1 + 8), *a8);
      return 1;
    }
  }
  return v59;
}

__int64 nvidia_dlss_rel_source_features_dlaa_624d0(_QWORD* a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   _DWORD* a5, __int64 a6)
{

#pragma clang fp contract(off)
  unsigned int v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  int v18;
  long double v19;
  long double v20;
  long double v21;
  float v22;
  long double v23;
  int v24;
  int v25;
  _DWORD* v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v32;
  __int64 v33;
  struct {
    float v34[4];
    float v35;
    float v36;
    float v37;
    float v38;
    int v39;
    int v40;
    int v41;
    int v42;
    char v43;
    char gap73_[3];
    int v44;
    int v45;
    int v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    char gap120_[16];
    _DWORD* v51;
  } v34_;

  v11 = -1160773630;
  if ((*(unsigned int (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
          *(_QWORD*)a1[1] + 376LL))(a1[1], a2, *(_QWORD*)(a4 + 1280), 8, 64) ==
      0) {
    v12 = *(_DWORD*)(a4 + 104);
    v13 = *(_DWORD*)(a4 + 108);
    v14 = a1[1];
    v34_.v51 = a5;
    v33 = a6;
    v15 = *(_DWORD*)(a4 + 512);
    v16 = *(_DWORD*)(a4 + 516);
    if (v12 >= -31) {
      v17 = v12 + 31;
    }
    else {
      v17 = v12 + 62;
    }
    if (v13 >= -31) {
      v18 = v13 + 31;
    }
    else {
      v18 = v13 + 62;
    }
    if ((*(unsigned int (**)(__int64, _QWORD))(*(_QWORD*)v14 + 240LL))(
            v14, a1[36]) == 0) {
      v32 = v17;
      *(_QWORD*)&v19 = 0x4200000042000000LL;
      v20 = fminf_plt(
          ceilf((float)((float)v15 / (float)v12) * 0x1.0000000000000p+5f), v19);
      *(_QWORD*)&v21 = 0x4200000042000000LL;
      v22 = *(float*)&v20 + 0x1.8000000000000p+2f;
      v23 = fminf_plt(
          ceilf((float)((float)v16 / (float)v13) * 0x1.0000000000000p+5f), v21);
      v24 = *(_DWORD*)(a4 + 512);
      v25 = *(_DWORD*)(a4 + 516);
      v26 = v34_.v51;
      v34_.v34[0] = (float)v15 / (float)v12;
      v34_.v34[1] = (float)v16 / (float)v13;
      v34_.v47 = 0;
      v34_.v48 = 0;
      v34_.v49 = 0;
      v34_.v50 = 0;
      v27 = v34_.v51[41];
      v34_.v39 = v34_.v51[40];
      v34_.v40 = v27;
      v28 = *(_DWORD*)(a4 + 104);
      v29 = *(_DWORD*)(a4 + 108);
      v34_.v35 = v22 + (float)((int)v22 & 1);
      v34_.v36 =
          (float)(*(float*)&v23 + 0x1.8000000000000p+2f) +
          (float)((int)(float)(*(float*)&v23 + 0x1.8000000000000p+2f) & 1);
      v34_.v41 = v28;
      v34_.v42 = v29;
      v34_.v43 = *(_BYTE*)(v33 + 1);
      v34_.v34[2] = 0x1.0000000000000p+0f / (float)v24;
      v34_.v34[3] = 0x1.0000000000000p+0f / (float)v25;
      v34_.v37 = 0x1.0000000000000p+0f / v34_.v35;
      v34_.v38 = 0x1.0000000000000p+0f / v34_.v36;
      LODWORD(v23) = *(_DWORD*)(v33 + 72);
      v30 = v34_.v51[44];
      v34_.v46 = 953267991;
      v34_.v44 = LODWORD(v23);
      v34_.v45 = v30;
      memcpy_plt(a4 + 2896, v34_.v34, 96);
      if ((*(unsigned int (**)(_QWORD, _QWORD, __int64, _QWORD))(
              *(_QWORD*)a1[1] + 192LL))(a1[1], *(_QWORD*)(a4 + 1280), a4 + 2960,
                                        0) == 0 &&
          (*(unsigned int (**)(_QWORD, _QWORD, __int64, __int64))(
              *(_QWORD*)a1[1] + 192LL))(a1[1], *(_QWORD*)(v33 + 16), a4 + 2968,
                                        2) == 0 &&
          (*(unsigned int (**)(_QWORD, _QWORD, __int64))(
              *(_QWORD*)a1[1] + 216LL))(a1[1], a1[46], a4 + 2976) == 0 &&
          (*(unsigned int (**)(_QWORD, _QWORD, __int64))(
              *(_QWORD*)a1[1] + 200LL))(a1[1], *((_QWORD*)v26 + 6),
                                        a4 + 2984) == 0 &&
          (*(unsigned int (**)(_QWORD, __int64, __int64, _QWORD, _QWORD,
                               __int64))(*(_QWORD*)a1[1] + 344LL))(
              a1[1], a4 + 2888, a2, (unsigned int)(v32 >> 5),
              (unsigned int)(v18 >> 5), 1) == 0) {
        if ((*(unsigned int (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
                *(_QWORD*)a1[1] + 376LL))(a1[1], a2, *(_QWORD*)(a4 + 1280), 64,
                                          8) != 0) {
          return (unsigned int)-1160773630;
        }
        else {
          return 1;
        }
      }
    }
  }
  return v11;
}

__int64 nvidia_dlss_rel_source_features_dlaa_62770(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6)
{
  unsigned int v11;
  int v12;
  int v13;
  float v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  __int64* v21;
  __int64 v22;
  int v23;
  int v24;
  float v25;
  float v26;
  int v27;
  __int64 v28;
  int v29;

  v11 = -1160773630;
  if ((*(unsigned int (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
          **(_QWORD**)(a1 + 8) + 376LL))(*(_QWORD*)(a1 + 8), a2,
                                         *(_QWORD*)(a4 + 1280), 8, 64) == 0 &&
      (*(unsigned int (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
          **(_QWORD**)(a1 + 8) + 376LL))(*(_QWORD*)(a1 + 8), a2,
                                         *(_QWORD*)(a4 + 1288), 8, 64) == 0) {
    v12 = *(_DWORD*)(a4 + 104);
    v13 = *(_DWORD*)(a4 + 108);
    v14 = *(float*)(a5 + 104);
    if (v12 >= -15) {
      v15 = v12 + 15;
    }
    else {
      v15 = v12 + 30;
    }
    if (v13 >= -15) {
      v16 = v13 + 15;
    }
    else {
      v16 = v13 + 30;
    }
    if (v14 < 0.0) {
      v14 = v14 * *(float*)(*(_QWORD*)(a4 + 72) + 64LL);
    }
    v17 = *(_DWORD*)(a4 + 512);
    v18 = *(_DWORD*)(a4 + 516);
    if ((*(unsigned int (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 240LL))(
            *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 272)) == 0) {
      v19 = *(_DWORD*)(a4 + 104);
      v20 = *(_DWORD*)(a4 + 108);
      v21 = *(__int64**)(a1 + 8);
      *(float*)(a4 + 2672) = v14;
      *(_BYTE*)(a4 + 2676) = 0;
      v22 = *(_QWORD*)(a5 + 48);
      v23 = *(_DWORD*)(a4 + 512);
      *(_DWORD*)(a4 + 2648) = v19;
      v24 = *(unsigned __int8*)(a6 + 1);
      *(_DWORD*)(a4 + 2652) = v20;
      *(_DWORD*)(a4 + 2664) = v24;
      LOBYTE(v24) = *(_BYTE*)(a6 + 7);
      *(float*)(a4 + 2656) = (float)v17 / (float)v12;
      *(float*)(a4 + 2660) = (float)v18 / (float)v13;
      v25 = *(float*)(a6 + 72);
      v26 = *(float*)(a5 + 176);
      *(_BYTE*)(a4 + 2668) = v24;
      v27 = *(_DWORD*)(a5 + 164);
      *(_DWORD*)(a4 + 2680) = *(_DWORD*)(a5 + 160);
      *(_DWORD*)(a4 + 2684) = v27;
      *(_DWORD*)(a4 + 2692) = 953267991;
      v28 = *v21;
      *(float*)(a4 + 2640) = 1.0 / (float)v23;
      v29 = *(_DWORD*)(a4 + 516);
      *(float*)(a4 + 2688) = v25 / v26;
      *(float*)(a4 + 2644) = 1.0 / (float)v29;
      if ((*(unsigned int (**)(__int64*, __int64, __int64))(v28 + 200))(
              v21, v22, a4 + 2696) == 0 &&
          (*(unsigned int (**)(_QWORD, _QWORD, __int64, _QWORD))(
              **(_QWORD**)(a1 + 8) + 192LL))(
              *(_QWORD*)(a1 + 8), *(_QWORD*)(a4 + 1280), a4 + 2704, 0) == 0 &&
          (*(unsigned int (**)(_QWORD, _QWORD, __int64, _QWORD))(
              **(_QWORD**)(a1 + 8) + 192LL))(
              *(_QWORD*)(a1 + 8), *(_QWORD*)(a4 + 1288), a4 + 2712, 0) == 0 &&
          (*(unsigned int (**)(_QWORD, _QWORD, __int64, __int64))(
              **(_QWORD**)(a1 + 8) + 192LL))(
              *(_QWORD*)(a1 + 8), *(_QWORD*)(a6 + 16), a4 + 2720, 2) == 0 &&
          (*(unsigned int (**)(_QWORD, __int64, __int64, _QWORD, _QWORD,
                               __int64))(**(_QWORD**)(a1 + 8) + 344LL))(
              *(_QWORD*)(a1 + 8), a4 + 2632, a2, (unsigned int)(v15 >> 4),
              (unsigned int)(v16 >> 4), 1) == 0 &&
          (*(unsigned int (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
              **(_QWORD**)(a1 + 8) + 376LL))(
              *(_QWORD*)(a1 + 8), a2, *(_QWORD*)(a4 + 1280), 64, 8) == 0) {
        if ((*(unsigned int (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
                **(_QWORD**)(a1 + 8) + 376LL))(
                *(_QWORD*)(a1 + 8), a2, *(_QWORD*)(a4 + 1288), 64, 8) != 0) {
          return (unsigned int)-1160773630;
        }
        else {
          return 1;
        }
      }
    }
  }
  return v11;
}

__int64 nvidia_dlss_rel_source_features_dlaa_654b0(__int64 result, _QWORD* a2)
{
  __int64 v2;

  if (a2 != nullptr) {
    v2 = result;
    nvidia_dlss_rel_source_features_dlaa_654b0(result, *a2);
    nvidia_dlss_rel_source_features_dlaa_654b0(v2, a2[1]);
    return NgxRoutine_430(a2, 48);
  }
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_65500(__int64 a1,
                                                   unsigned __int8* a2,
                                                   __int64 a3, int** a4)
{
  __int64 v4;
  _QWORD* v5;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  int v18;
  __int64* v19;
  __int64 v20;

  v5 = (_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(a1 + 8);
  if (v4 == 0) {
    v12 = a1 + 8;
    goto LABEL_21;
  }
  v8 = *a2;
  v9 = a2[1];
  v10 = a2[2];
  v11 = a2[3];
  do {
    while (1) {
      v12 = v4;
      v13 = *(unsigned __int8*)(v4 + 32);
      if (v8 != v13) {
        break;
      }
      v14 = *(unsigned __int8*)(v12 + 33);
      if (v9 != v14) {
        if (v9 < v14) {
          goto LABEL_3;
        }
        if (v14 >= v9) {
          return v12;
        }
        goto LABEL_18;
      }
      v15 = *(unsigned __int8*)(v12 + 34);
      if (v10 != v15) {
        if (v10 < v15) {
          goto LABEL_3;
        }
        if (v15 >= v10) {
          return v12;
        }
        goto LABEL_18;
      }
      v16 = *(unsigned __int8*)(v12 + 35);
      if (v11 >= v16) {
        if (v16 >= v11) {
          return v12;
        }
        goto LABEL_18;
      }
    LABEL_3:
      v4 = *(_QWORD*)v12;
      v5 = (_QWORD*)v12;
      if (*(_QWORD*)v12 == 0) {
        goto LABEL_21;
      }
    }
    if (v8 < v13) {
      goto LABEL_3;
    }
    if (v13 >= v8) {
      return v12;
    }
  LABEL_18:
    v4 = *(_QWORD*)(v12 + 8);
  } while (v4 != 0);
  v5 = (_QWORD*)(v12 + 8);
LABEL_21:
  v17 = v12;
  v12 = NgxRoutine_420(48);
  v18 = **a4;
  *(_QWORD*)v12 = 0;
  *(_QWORD*)(v12 + 8) = 0;
  *(_QWORD*)(v12 + 40) = 0;
  *(_QWORD*)(v12 + 16) = v17;
  *(_DWORD*)(v12 + 32) = v18;
  v19 = *(__int64**)a1;
  *v5 = v12;
  v20 = *v19;
  if (v20 != 0) {
    *(_QWORD*)a1 = v20;
  }
  nvidia_dlss_rel_source_features_dlaa_65660_alt1(*(_QWORD*)(a1 + 8), v12);
  ++*(_QWORD*)(a1 + 16);
  return v12;
}

__int64* nvidia_dlss_rel_source_features_dlaa_65660(__int64* result,
                                                    __int64* a2)
{
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64** v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64** v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64** v17;
  __int64* v18;

  *((_BYTE*)a2 + 24) = a2 == result;
  if (a2 != result) {
    do {
      v2 = (__int64*)a2[2];
      if ((v2[3] & 1) != 0) {
        return result;
      }
      v3 = (__int64*)v2[2];
      v4 = (__int64*)*v3;
      if (v2 == (__int64*)*v3) {
        v5 = v3[1];
        if (v5 == 0 || (*(_BYTE*)(v5 + 24) & 1) != 0) {
          if (a2 == (__int64*)*v2) {
            v7 = (__int64**)a2[2];
          }
          else {
            v7 = (__int64**)v2[1];
            v8 = *v7;
            v2[1] = (__int64)*v7;
            if (v8 != nullptr) {
              v8[2] = (__int64)v2;
              v3 = (__int64*)v2[2];
              v9 = (__int64*)*v3;
              v7[2] = v3;
              if (v2 != v9) {
                v3[1] = (__int64)v7;
                goto LABEL_25;
              }
            }
            else {
              v7[2] = v3;
            }
            *v3 = (__int64)v7;
          LABEL_25:
            v2[2] = (__int64)v7;
            *v7 = v2;
            v3 = v7[2];
            v4 = (__int64*)*v3;
          }
          *((_BYTE*)v7 + 24) = 1;
          v12 = v4[1];
          *((_BYTE*)v3 + 24) = 0;
          *v3 = v12;
          if (v12 != 0) {
            *(_QWORD*)(v12 + 16) = v3;
          }
          v13 = (__int64**)v3[2];
          v14 = *v13;
          v4[2] = (__int64)v13;
          if (v3 == v14) {
            *v13 = v4;
          }
          else {
            v13[1] = v4;
          }
          v4[1] = (__int64)v3;
          v3[2] = (__int64)v4;
          return result;
        }
        *((_BYTE*)v2 + 24) = 1;
        *((_BYTE*)v3 + 24) = v3 == result;
        *(_BYTE*)(v5 + 24) = 1;
      }
      else {
        if (v4 == nullptr || (v4[3] & 1) != 0) {
          v6 = *v2;
          if (a2 == (__int64*)*v2) {
            v10 = *(_QWORD*)(v6 + 8);
            *v2 = v10;
            if (v10 != 0) {
              *(_QWORD*)(v10 + 16) = v2;
              v3 = (__int64*)v2[2];
            }
            v11 = (__int64*)*v3;
            *(_QWORD*)(v6 + 16) = v3;
            if (v2 == v11) {
              *v3 = v6;
            }
            else {
              v3[1] = v6;
            }
            v2[2] = v6;
            *(_QWORD*)(v6 + 8) = v2;
            v3 = *(__int64**)(v6 + 16);
          }
          else {
            v6 = a2[2];
          }
          *(_BYTE*)(v6 + 24) = 1;
          v15 = (__int64*)v3[1];
          *((_BYTE*)v3 + 24) = 0;
          v16 = *v15;
          v3[1] = *v15;
          if (v16 != 0) {
            *(_QWORD*)(v16 + 16) = v3;
          }
          v17 = (__int64**)v3[2];
          v18 = *v17;
          v15[2] = (__int64)v17;
          if (v3 == v18) {
            *v17 = v15;
          }
          else {
            v17[1] = v15;
          }
          *v15 = (__int64)v3;
          v3[2] = (__int64)v15;
          return result;
        }
        *((_BYTE*)v2 + 24) = 1;
        *((_BYTE*)v3 + 24) = v3 == result;
        *((_BYTE*)v4 + 24) = 1;
      }
      a2 = v3;
    } while (v3 != result);
  }
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_65840(__int64 a1,
                                                   unsigned __int8* a2,
                                                   __int64 a3, int** a4)
{
  __int64 v4;
  _QWORD* v5;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  char v19;
  int v20;
  __int64* v21;
  __int64 v22;

  v5 = (_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(a1 + 8);
  if (v4 == 0) {
    v13 = a1 + 8;
    goto LABEL_25;
  }
  v8 = *a2;
  v9 = a2[1];
  v10 = a2[2];
  v11 = a2[3];
  v12 = a2[4];
  do {
    while (1) {
      v13 = v4;
      v14 = *(unsigned __int8*)(v4 + 32);
      if (v8 != v14) {
        break;
      }
      v15 = *(unsigned __int8*)(v13 + 33);
      if (v9 != v15) {
        if (v9 < v15) {
          goto LABEL_3;
        }
        if (v15 >= v9) {
          return v13;
        }
        goto LABEL_22;
      }
      v16 = *(unsigned __int8*)(v13 + 34);
      if (v10 != v16) {
        if (v10 < v16) {
          goto LABEL_3;
        }
        if (v16 >= v10) {
          return v13;
        }
        goto LABEL_22;
      }
      v17 = *(unsigned __int8*)(v13 + 35);
      if (v11 != v17) {
        if (v11 < v17) {
          goto LABEL_3;
        }
        if (v17 >= v11) {
          return v13;
        }
        goto LABEL_22;
      }
      if (v12 >= *(unsigned __int8*)(v13 + 36)) {
        if (*(unsigned __int8*)(v13 + 36) >= v12) {
          return v13;
        }
        goto LABEL_22;
      }
    LABEL_3:
      v4 = *(_QWORD*)v13;
      v5 = (_QWORD*)v13;
      if (*(_QWORD*)v13 == 0) {
        goto LABEL_25;
      }
    }
    if (v8 < v14) {
      goto LABEL_3;
    }
    if (v14 >= v8) {
      return v13;
    }
  LABEL_22:
    v4 = *(_QWORD*)(v13 + 8);
  } while (v4 != 0);
  v5 = (_QWORD*)(v13 + 8);
LABEL_25:
  v18 = v13;
  v13 = NgxRoutine_420(48);
  v19 = *((_BYTE*)*a4 + 4);
  v20 = **a4;
  *(_QWORD*)v13 = 0;
  *(_QWORD*)(v13 + 8) = 0;
  *(_QWORD*)(v13 + 40) = 0;
  *(_QWORD*)(v13 + 16) = v18;
  *(_DWORD*)(v13 + 32) = v20;
  v21 = *(__int64**)a1;
  *(_BYTE*)(v13 + 36) = v19;
  *v5 = v13;
  v22 = *v21;
  if (v22 != 0) {
    *(_QWORD*)a1 = v22;
  }
  nvidia_dlss_rel_source_features_dlaa_65660(*(__int64**)(a1 + 8),
                                             (__int64*)v13);
  ++*(_QWORD*)(a1 + 16);
  return v13;
}

_QWORD* nvidia_dlss_rel_source_features_dlaa_659c0(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v1 = result;
  *result = NgxData_9529f8 + 2;
  if ((result[8] & 1) != 0) {
    result =
        (_QWORD*)NgxRoutine_430(result[10], result[8] & 0xFFFFFFFFFFFFFFFELL);
  }
  v2 = v1[7];
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    result = (_QWORD*)NgxRoutine_baf10(v2);
  }
  v3 = v1[5];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    result = (_QWORD*)NgxRoutine_baf10(v3);
    v4 = v1[3];
    if (v4 == 0) {
      return result;
    }
  }
  else {
    v4 = v1[3];
    if (v4 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return (_QWORD*)NgxRoutine_baf10(v4);
  }
  return result;
}

__attribute__((swiftcall)) void

nvidia_dlss_rel_source_features_dlaa_6fe30(PSEUDO_X8 x8_, _QWORD* a1,
                                           __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* result;
  unsigned __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  result = (_QWORD*)NgxRoutine_420_alt1(32);
  v7 = a1[69];
  result[2] = 0;
  result[3] = a2;
  *result = NgxData_94cfa8;
  result[1] = 0;
  v8 = (_QWORD*)a1[68];
  if ((unsigned __int64)v8 >= v7) {
    v10 = a1[67];
    v11 = (char*)v8 - v10;
    v12 = ((__int64)v8 - v10) >> 4;
    v13 = v12 + 1;
    if ((unsigned __int64)(v12 + 1) >> 60 != 0) {
      nvidia_dlss_rel_source_common_33410();
    }
    if ((__int64)(v7 - v10) >> 3 > v13) {
      v13 = (__int64)(v7 - v10) >> 3;
    }
    if (v7 - v10 >= 0x7FFFFFFFFFFFFFF0LL) {
      v14 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v14 = v13;
    }
    if (v14 != 0) {
      if (v14 >> 60 != 0) {
        NgxRoutine_27cf0();
      }
      v15 = result;
      v16 = NgxRoutine_420_alt1(16 * v14);
      v10 = a1[67];
      v7 = a1[69];
      v17 = v16;
      result = v15;
      v18 = a1[68] - v10;
      v12 = v18 >> 4;
    }
    else {
      v17 = 0;
      v18 = (__int64)v11;
    }
    v19 = &v11[v17];
    v20 = v17 + 16 * v14;
    *(_QWORD*)v19 = a2;
    *((_QWORD*)v19 + 1) = result;
    v21 = (__int64)&v11[v17 + -16 * v12];
    v9 = (__int64)&v11[v17 + 16];
    result = (_QWORD*)memcpy_plt(v21, v10, v18);
    a1[67] = v21;
    a1[68] = v9;
    a1[69] = v20;
    if (v10 != 0) {
      result = (_QWORD*)NgxRoutine_430(v10, v7 - v10);
    }
  }
  else {
    *v8 = a2;
    v8[1] = result;
    v9 = (__int64)(v8 + 2);
  }
  v23 = *(_QWORD*)(v9 - 16);
  v22 = *(_QWORD*)(v9 - 8);
  a1[68] = v9;
  *a3 = v23;
  a3[1] = v22;
  if (v22 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                              memory_order_relaxed);
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

nvidia_dlss_rel_source_features_dlaa_6ff80(PSEUDO_X8 x8_, _QWORD* a1,
                                           __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* result;
  unsigned __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  unsigned __int64 v25;
  _QWORD* v26;
  __int64 v27;
  char* v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  unsigned __int64 v35;
  char* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;

  result = (_QWORD*)NgxRoutine_420_alt1(32);
  v7 = a1[72];
  result[2] = 0;
  result[3] = a2;
  *result = NgxData_94cff8;
  result[1] = 0;
  v8 = (_QWORD*)a1[71];
  if ((unsigned __int64)v8 >= v7) {
    v10 = a1[70];
    v11 = (char*)v8 - v10;
    v12 = ((__int64)v8 - v10) >> 4;
    v13 = v12 + 1;
    if ((unsigned __int64)(v12 + 1) >> 60 != 0) {
      nvidia_dlss_rel_source_common_33410();
    }
    if ((__int64)(v7 - v10) >> 3 > v13) {
      v13 = (__int64)(v7 - v10) >> 3;
    }
    if (v7 - v10 >= 0x7FFFFFFFFFFFFFF0LL) {
      v14 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v14 = v13;
    }
    if (v14 != 0) {
      if (v14 >> 60 != 0) {
        goto LABEL_34;
      }
      v15 = result;
      v16 = NgxRoutine_420_alt1(16 * v14);
      v10 = a1[70];
      v7 = a1[72];
      v17 = v16;
      result = v15;
      v18 = a1[71] - v10;
      v12 = v18 >> 4;
    }
    else {
      v17 = 0;
      v18 = (__int64)v11;
    }
    v19 = &v11[v17];
    v20 = v17 + 16 * v14;
    *(_QWORD*)v19 = a2;
    *((_QWORD*)v19 + 1) = result;
    v21 = (__int64)&v11[v17 + -16 * v12];
    v9 = (__int64)&v11[v17 + 16];
    result = (_QWORD*)memcpy_plt(v21, v10, v18);
    a1[70] = v21;
    a1[71] = v9;
    a1[72] = v20;
    if (v10 != 0) {
      result = (_QWORD*)NgxRoutine_430(v10, v7 - v10);
    }
  }
  else {
    *v8 = a2;
    v8[1] = result;
    v9 = (__int64)(v8 + 2);
  }
  v23 = *(_QWORD*)(v9 - 16);
  v22 = *(_QWORD*)(v9 - 8);
  a1[71] = v9;
  if (v22 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                              memory_order_relaxed);
  }
  v24 = (_QWORD*)a1[68];
  v25 = a1[69];
  if ((unsigned __int64)v24 < v25) {
    *v24 = v23;
    v24[1] = v22;
    v26 = v24 + 2;
    goto LABEL_31;
  }
  v27 = a1[67];
  v28 = (char*)v24 - v27;
  v29 = ((__int64)v24 - v27) >> 4;
  v30 = v29 + 1;
  if ((unsigned __int64)(v29 + 1) >> 60 != 0) {
    nvidia_dlss_rel_source_common_33410();
  }
  if ((__int64)(v25 - v27) >> 3 > v30) {
    v30 = (__int64)(v25 - v27) >> 3;
  }
  if (v25 - v27 >= 0x7FFFFFFFFFFFFFF0LL) {
    v31 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v31 = v30;
  }
  if (v31 != 0) {
    if (v31 >> 60 == 0) {
      v32 = NgxRoutine_420_alt1(16 * v31);
      v27 = a1[67];
      v25 = a1[69];
      v33 = a1[68] - v27;
      v29 = v33 >> 4;
      goto LABEL_29;
    }
  LABEL_34:
    NgxRoutine_27cf0();
  }
  v32 = 0;
  v33 = (__int64)v28;
LABEL_29:
  v34 = &v28[v32];
  v35 = v32 + 16 * v31;
  *(_QWORD*)v34 = v23;
  *((_QWORD*)v34 + 1) = v22;
  v36 = &v34[-16 * v29];
  v26 = v34 + 16;
  result = (_QWORD*)memcpy_plt(v36, v27, v33);
  a1[67] = v36;
  a1[68] = v26;
  a1[69] = v35;
  if (v27 != 0) {
    result = (_QWORD*)NgxRoutine_430(v27, v25 - v27);
  }
LABEL_31:
  v37 = a1[71];
  a1[68] = v26;
  v39 = *(_QWORD*)(v37 - 16);
  v38 = *(_QWORD*)(v37 - 8);
  *a3 = v39;
  a3[1] = v38;
  if (v38 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 8), 1u,
                              memory_order_relaxed);
  }
  {
    result;
    return;
  }
}

__int64 nvidia_dlss_rel_source_features_dlaa_701c0(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64* a4,
                                                   __int64 a5, unsigned int a6,
                                                   __int64* a7, unsigned int a8,
                                                   __int64 a9, int a10)
{
  __int64 v10;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 result;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v27;
  __int64 v28;

  v10 = a4[1];
  v27 = *a4;
  v28 = v10;
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  v26 = 0;
  NgxRoutine_70310(a1, a2, a3, &v27, a5, a6, a8, a9, v26, a10);
  v14 = v28;
  if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    NgxRoutine_baf10(v14);
  }
  v15 = *(_QWORD*)(a1 + 120);
  *(_QWORD*)a1 = NgxData_94d048;
  v16 = *(_QWORD*)(a1 + 16);
  v17 = *(_DWORD*)(v16 + 92);
  v18 = *(_DWORD*)(v16 + 96);
  v19 = *(_QWORD*)(v16 + 120);
  v20 = *(unsigned int*)(v19 + 48);
  v21 = *(unsigned int*)(v19 + 52);
  *(_DWORD*)(a1 + 92) = v17 / 2;
  *(_DWORD*)(a1 + 96) = v18 / 2;
  result = nvidia_dlss_a9960(v15, v20, v21);
  v24 = *a7;
  v23 = a7[1];
  *(_DWORD*)(a1 + 100) = a6;
  if (v23 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                              memory_order_relaxed);
  }
  v25 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 48) = v24;
  *(_QWORD*)(a1 + 56) = v23;
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    return NgxRoutine_baf10(v25);
  }
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_70670(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;

  *a1 = NgxData_94cdc8;
  v1 = (_QWORD*)a1[40];
  a1[40] = 0;
  if (v1 != nullptr) {
    v2 = a1;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v1 + 120LL))(
        (void*)v1, v1);
    a1 = v2;
  }
  return Destroy_CubinConvLayer(a1);
}

__int64 nvidia_dlss_rel_source_features_dlaa_706d0(_QWORD* a1)
{
  __int64 v2;

  *a1 = NgxData_952a10[0] + 2;
  v2 = a1[40];
  a1[40] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 120LL))(v2);
  }
  Destroy_CubinConvLayer(a1);
  return NgxRoutine_430(a1, 384);
}

__int64 nvidia_dlss_rel_source_features_dlaa_70730(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *a1 = NgxData_952a20[0] + 2;
  v2 = a1[55];
  a1[55] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 120LL))(v2);
  }
  v3 = a1[51];
  a1[45] = NgxData_94cc90;
  if (v3 != 0) {
    v4 = a1[53];
    a1[52] = v3;
    NgxRoutine_430(v3, v4 - v3);
  }
  v5 = a1[47];
  if (v5 != 0) {
    v6 = a1[49];
    a1[48] = v5;
    NgxRoutine_430(v5, v6 - v5);
  }
  return Destroy_CubinConvLayer(a1);
}

__int64 nvidia_dlss_rel_source_features_dlaa_707c0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *a1 = NgxData_952a20[0] + 2;
  v2 = a1[55];
  a1[55] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 120LL))(v2);
  }
  v3 = a1[51];
  a1[45] = NgxData_94cc90;
  if (v3 != 0) {
    v4 = a1[53];
    a1[52] = v3;
    NgxRoutine_430(v3, v4 - v3);
  }
  v5 = a1[47];
  if (v5 != 0) {
    v6 = a1[49];
    a1[48] = v5;
    NgxRoutine_430(v5, v6 - v5);
  }
  Destroy_CubinConvLayer(a1);
  return NgxRoutine_430(a1, 456);
}

__int64 nvidia_dlss_rel_source_features_dlaa_70860(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *a1 = NgxData_952a40[0] + 2;
  v2 = a1[79];
  a1[79] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 120LL))(v2);
  }
  v3 = a1[77];
  a1[77] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 120LL))(v3);
  }
  v4 = a1[75];
  a1[75] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 120LL))(v4);
  }
  return Destroy_CubinConvLayer(a1);
}

__int64 nvidia_dlss_rel_source_features_dlaa_708e0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *a1 = NgxData_952a40[0] + 2;
  v2 = a1[79];
  a1[79] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 120LL))(v2);
  }
  v3 = a1[77];
  a1[77] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 120LL))(v3);
  }
  v4 = a1[75];
  a1[75] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 120LL))(v4);
  }
  Destroy_CubinConvLayer(a1);
  return NgxRoutine_430(a1, 648);
}

__int64 nvidia_dlss_rel_source_features_dlaa_70970(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = NgxData_952a28[0] + 2;
  v2 = a1[45];
  a1[45] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 120LL))(v2);
  }
  v3 = a1[44];
  a1[44] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 120LL))(v3);
  }
  return Destroy_CubinConvLayer(a1);
}

__int64 nvidia_dlss_rel_source_features_dlaa_709e0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = NgxData_952a28[0] + 2;
  v2 = a1[45];
  a1[45] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 120LL))(v2);
  }
  v3 = a1[44];
  a1[44] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 120LL))(v3);
  }
  Destroy_CubinConvLayer(a1);
  return NgxRoutine_430(a1, 392);
}

__int64 nvidia_dlss_rel_source_features_dlaa_74e30(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
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
  __int64 result;
  __int64 v89;

  v2 = a1[305];
  if (v2 != 0) {
    v3 = a1[307];
    a1[306] = v2;
    NgxRoutine_430(v2, v3 - v2);
  }
  v4 = a1[301];
  if (v4 != 0) {
    v5 = a1[303];
    a1[302] = v4;
    NgxRoutine_430(v4, v5 - v4);
  }
  v6 = a1[291];
  if (v6 != 0) {
    v7 = a1[293];
    a1[292] = v6;
    NgxRoutine_430(v6, v7 - v6);
  }
  v8 = a1[287];
  if (v8 != 0) {
    v9 = a1[289];
    a1[288] = v8;
    NgxRoutine_430(v8, v9 - v8);
  }
  v10 = a1[277];
  if (v10 != 0) {
    v11 = a1[279];
    a1[278] = v10;
    NgxRoutine_430(v10, v11 - v10);
  }
  v12 = a1[273];
  if (v12 != 0) {
    v13 = a1[275];
    a1[274] = v12;
    NgxRoutine_430(v12, v13 - v12);
  }
  v14 = a1[263];
  if (v14 != 0) {
    v15 = a1[265];
    a1[264] = v14;
    NgxRoutine_430(v14, v15 - v14);
  }
  v16 = a1[259];
  if (v16 != 0) {
    v17 = a1[261];
    a1[260] = v16;
    NgxRoutine_430(v16, v17 - v16);
  }
  v18 = a1[249];
  if (v18 != 0) {
    v19 = a1[251];
    a1[250] = v18;
    NgxRoutine_430(v18, v19 - v18);
  }
  v20 = a1[245];
  if (v20 != 0) {
    v21 = a1[247];
    a1[246] = v20;
    NgxRoutine_430(v20, v21 - v20);
  }
  v22 = a1[235];
  if (v22 != 0) {
    v23 = a1[237];
    a1[236] = v22;
    NgxRoutine_430(v22, v23 - v22);
  }
  v24 = a1[231];
  if (v24 != 0) {
    v25 = a1[233];
    a1[232] = v24;
    NgxRoutine_430(v24, v25 - v24);
  }
  v26 = a1[221];
  if (v26 != 0) {
    v27 = a1[223];
    a1[222] = v26;
    NgxRoutine_430(v26, v27 - v26);
  }
  v28 = a1[217];
  if (v28 != 0) {
    v29 = a1[219];
    a1[218] = v28;
    NgxRoutine_430(v28, v29 - v28);
  }
  v30 = a1[207];
  if (v30 != 0) {
    v31 = a1[209];
    a1[208] = v30;
    NgxRoutine_430(v30, v31 - v30);
  }
  v32 = a1[203];
  if (v32 != 0) {
    v33 = a1[205];
    a1[204] = v32;
    NgxRoutine_430(v32, v33 - v32);
  }
  v34 = a1[193];
  if (v34 != 0) {
    v35 = a1[195];
    a1[194] = v34;
    NgxRoutine_430(v34, v35 - v34);
  }
  v36 = a1[189];
  if (v36 != 0) {
    v37 = a1[191];
    a1[190] = v36;
    NgxRoutine_430(v36, v37 - v36);
  }
  v38 = a1[179];
  if (v38 != 0) {
    v39 = a1[181];
    a1[180] = v38;
    NgxRoutine_430(v38, v39 - v38);
  }
  v40 = a1[175];
  if (v40 != 0) {
    v41 = a1[177];
    a1[176] = v40;
    NgxRoutine_430(v40, v41 - v40);
  }
  v42 = a1[165];
  if (v42 != 0) {
    v43 = a1[167];
    a1[166] = v42;
    NgxRoutine_430(v42, v43 - v42);
  }
  v44 = a1[161];
  if (v44 != 0) {
    v45 = a1[163];
    a1[162] = v44;
    NgxRoutine_430(v44, v45 - v44);
  }
  v46 = a1[151];
  if (v46 != 0) {
    v47 = a1[153];
    a1[152] = v46;
    NgxRoutine_430(v46, v47 - v46);
  }
  v48 = a1[147];
  if (v48 != 0) {
    v49 = a1[149];
    a1[148] = v48;
    NgxRoutine_430(v48, v49 - v48);
  }
  v50 = a1[137];
  if (v50 != 0) {
    v51 = a1[139];
    a1[138] = v50;
    NgxRoutine_430(v50, v51 - v50);
  }
  v52 = a1[133];
  if (v52 != 0) {
    v53 = a1[135];
    a1[134] = v52;
    NgxRoutine_430(v52, v53 - v52);
  }
  v54 = a1[123];
  if (v54 != 0) {
    v55 = a1[125];
    a1[124] = v54;
    NgxRoutine_430(v54, v55 - v54);
  }
  v56 = a1[119];
  if (v56 != 0) {
    v57 = a1[121];
    a1[120] = v56;
    NgxRoutine_430(v56, v57 - v56);
  }
  v58 = a1[109];
  if (v58 != 0) {
    v59 = a1[111];
    a1[110] = v58;
    NgxRoutine_430(v58, v59 - v58);
  }
  v60 = a1[105];
  if (v60 != 0) {
    v61 = a1[107];
    a1[106] = v60;
    NgxRoutine_430(v60, v61 - v60);
  }
  v62 = a1[95];
  if (v62 != 0) {
    v63 = a1[97];
    a1[96] = v62;
    NgxRoutine_430(v62, v63 - v62);
  }
  v64 = a1[91];
  if (v64 != 0) {
    v65 = a1[93];
    a1[92] = v64;
    NgxRoutine_430(v64, v65 - v64);
  }
  v66 = a1[81];
  if (v66 != 0) {
    v67 = a1[83];
    a1[82] = v66;
    NgxRoutine_430(v66, v67 - v66);
  }
  v68 = a1[77];
  if (v68 != 0) {
    v69 = a1[79];
    a1[78] = v68;
    NgxRoutine_430(v68, v69 - v68);
  }
  v70 = a1[67];
  if (v70 != 0) {
    v71 = a1[69];
    a1[68] = v70;
    NgxRoutine_430(v70, v71 - v70);
  }
  v72 = a1[63];
  if (v72 != 0) {
    v73 = a1[65];
    a1[64] = v72;
    NgxRoutine_430(v72, v73 - v72);
  }
  v74 = a1[53];
  if (v74 != 0) {
    v75 = a1[55];
    a1[54] = v74;
    NgxRoutine_430(v74, v75 - v74);
  }
  v76 = a1[49];
  if (v76 != 0) {
    v77 = a1[51];
    a1[50] = v76;
    NgxRoutine_430(v76, v77 - v76);
  }
  v78 = a1[39];
  if (v78 != 0) {
    v79 = a1[41];
    a1[40] = v78;
    NgxRoutine_430(v78, v79 - v78);
  }
  v80 = a1[35];
  if (v80 != 0) {
    v81 = a1[37];
    a1[36] = v80;
    NgxRoutine_430(v80, v81 - v80);
  }
  v82 = a1[25];
  if (v82 != 0) {
    v83 = a1[27];
    a1[26] = v82;
    NgxRoutine_430(v82, v83 - v82);
  }
  v84 = a1[21];
  if (v84 != 0) {
    v85 = a1[23];
    a1[22] = v84;
    NgxRoutine_430(v84, v85 - v84);
  }
  v86 = a1[11];
  if (v86 != 0) {
    v87 = a1[13];
    a1[12] = v86;
    NgxRoutine_430(v86, v87 - v86);
  }
  result = a1[7];
  if (result != 0) {
    v89 = a1[9];
    a1[8] = result;
    return NgxRoutine_430(result, v89 - result);
  }
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_75280(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    if (*(_QWORD*)a1 != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 184LL))(result);
      *(_QWORD*)a1 = 0;
    }
    if (*(_QWORD*)(a1 + 16) != 0) {
      if (*(_BYTE*)(a1 + 96) != 1 || *(_QWORD*)(a1 + 32) == 0) {
        result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 184LL))(
            *(_QWORD*)(a1 + 8));
      }
      *(_QWORD*)(a1 + 16) = 0;
      *(_QWORD*)(a1 + 32) = 0;
    }
    if (*(_QWORD*)(a1 + 104) != 0) {
      if (*(_BYTE*)(a1 + 184) != 1 || *(_QWORD*)(a1 + 120) == 0) {
        result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 184LL))(
            *(_QWORD*)(a1 + 8));
      }
      *(_QWORD*)(a1 + 104) = 0;
      *(_QWORD*)(a1 + 120) = 0;
    }
    if (*(_QWORD*)(a1 + 192) != 0) {
      if (*(_BYTE*)(a1 + 272) != 1 || *(_QWORD*)(a1 + 208) == 0) {
        result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 184LL))(
            *(_QWORD*)(a1 + 8));
      }
      *(_QWORD*)(a1 + 192) = 0;
      *(_QWORD*)(a1 + 208) = 0;
    }
  }
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_75360(__int64 a1, __int64 a2,
                                                   char a3)
{
  unsigned int* v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;

  v5 = (unsigned int*)((char*)&NgxData_f6a9c + 8 * (a3 & 7));
  v6 = *v5;
  v7 = v5[1];
  v8 = ~(4 * *v5) & 4;
  v9 = ~(4 * v7) & 4;
  v10 = 2 * (*v5 & 3);
  v11 = 2 * (v7 & 3);
  (*(void (**)(_QWORD, __int64, __int64, __int64))(
      ***(_QWORD***)(a1 + 456) + 24LL))(**(_QWORD**)(a1 + 456), a2, 4, 4);
  (*(void (**)(_QWORD, __int64, __int64, __int64))(
      **(_QWORD**)(*(_QWORD*)(a1 + 456) + 16LL) + 24LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 456) + 16LL), a2, 4, 4);
  (*(void (**)(_QWORD, __int64, __int64, __int64))(
      **(_QWORD**)(*(_QWORD*)(a1 + 456) + 32LL) + 24LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 456) + 32LL), a2, 4, 4);
  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
      **(_QWORD**)(*(_QWORD*)(a1 + 456) + 48LL) + 24LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 456) + 48LL), a2, v8, v9);
  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
      **(_QWORD**)(*(_QWORD*)(a1 + 456) + 64LL) + 24LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 456) + 64LL), a2, v10 ^ 4u, v11 ^ 4u);
  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
      **(_QWORD**)(*(_QWORD*)(a1 + 456) + 80LL) + 24LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 456) + 80LL), a2, v6, v7);
  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
      **(_QWORD**)(*(_QWORD*)(a1 + 456) + 96LL) + 24LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 456) + 96LL), a2, v10 ^ 4u, v11 ^ 4u);
  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
      **(_QWORD**)(*(_QWORD*)(a1 + 456) + 112LL) + 24LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 456) + 112LL), a2, v8, v9);
  (*(void (**)(_QWORD, __int64, __int64, __int64))(
      **(_QWORD**)(*(_QWORD*)(a1 + 456) + 128LL) + 24LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 456) + 128LL), a2, 4, 4);
  (*(void (**)(_QWORD, __int64, __int64, __int64))(
      **(_QWORD**)(*(_QWORD*)(a1 + 456) + 144LL) + 24LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 456) + 144LL), a2, 4, 4);
  (*(void (**)(_QWORD, __int64, __int64, __int64))(
      **(_QWORD**)(*(_QWORD*)(a1 + 456) + 160LL) + 24LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 456) + 160LL), a2, 4, 4);
  return 1;
}

__int64 nvidia_dlss_rel_source_features_dlaa_75540(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;

  if (*(_BYTE*)(a1 + 96) == 1) {
    v1 = *(_QWORD*)(a1 + 32);
    if (v1 != 0) {
      v2 = *(_QWORD*)(a1 + 16);
      v3 = *(_QWORD*)(a1 + 24);
      v4 = *(_QWORD*)(a1 + 40);
      *(_QWORD*)(a1 + 16) = v1;
      *(_QWORD*)(a1 + 24) = v4;
      *(_QWORD*)(a1 + 32) = v2;
      *(_QWORD*)(a1 + 40) = v3;
    }
  }
  if (*(_BYTE*)(a1 + 184) == 1) {
    v5 = *(_QWORD*)(a1 + 120);
    if (v5 != 0) {
      v6 = *(_QWORD*)(a1 + 104);
      v7 = *(_QWORD*)(a1 + 112);
      v8 = *(_QWORD*)(a1 + 128);
      *(_QWORD*)(a1 + 104) = v5;
      *(_QWORD*)(a1 + 112) = v8;
      *(_QWORD*)(a1 + 120) = v6;
      *(_QWORD*)(a1 + 128) = v7;
    }
  }
  if (*(_BYTE*)(a1 + 272) == 1) {
    v9 = *(_QWORD*)(a1 + 208);
    if (v9 != 0) {
      v10 = *(_QWORD*)(a1 + 192);
      v11 = *(_QWORD*)(a1 + 200);
      v12 = *(_QWORD*)(a1 + 216);
      *(_QWORD*)(a1 + 192) = v9;
      *(_QWORD*)(a1 + 200) = v12;
      *(_QWORD*)(a1 + 208) = v10;
      *(_QWORD*)(a1 + 216) = v11;
    }
  }
  v13 = *(__int64**)(a1 + 456);
  v14 = *(__int64**)(a1 + 464);
  while (v13 != v14) {
    v15 = *v13;
    v13 += 2;
    (*(void (**)(__int64))(*(_QWORD*)v15 + 32LL))(v15);
  }
  return 1;
}

__int64 nvidia_dlss_rel_source_features_dlaa_76570(__int64* a1, __int64 a2,
                                                   __int64 a3,
                                                   unsigned __int64 a4)
{
  __int64 v5;
  __int64 result;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v5 = a1[2];
  result = *a1;
  if (a4 > (v5 - result) >> 3) {
    if (result != 0) {
      a1[1] = result;
      v9 = a4;
      NgxRoutine_430(result, v5 - result);
      a4 = v9;
      v5 = 0;
      a1[1] = 0;
      a1[2] = 0;
      *a1 = 0;
    }
    if (a4 >> 61 == 0) {
      v10 = v5 >> 2;
      if (v5 >> 2 <= a4) {
        v10 = a4;
      }
      v11 = (unsigned __int64)v5 >= 0x7FFFFFFFFFFFFFF8LL ? 0x1FFFFFFFFFFFFFFFLL
                                                         : v10;
      if (v11 >> 61 == 0) {
        result = NgxRoutine_420_alt2(8 * v11);
        v12 = a3 - a2;
        v13 = result;
        *a1 = result;
        a1[1] = result;
        a1[2] = result + 8 * v11;
        if (v12 != 0) {
          result = memcpy_plt(result, a2, v12);
        }
      LABEL_18:
        v16 = v13 + v12;
        goto LABEL_22;
      }
    }
    nvidia_dlss_rel_source_common_33410();
  }
  v13 = a1[1];
  v14 = v13 - result;
  if (a4 > (v13 - result) >> 3) {
    v15 = a2 + v14;
    if (v13 != result) {
      result = memmove_plt(result, a2, v14);
      v13 = a1[1];
    }
    v12 = a3 - v15;
    if (v12 != 0) {
      result = memmove_plt(v13, v15, v12);
    }
    goto LABEL_18;
  }
  v17 = a3 - a2;
  if (v17 != 0) {
    v18 = result;
    memmove_plt(result, a2, v17);
    result = v18;
  }
  v16 = result + v17;
LABEL_22:
  a1[1] = v16;
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_766c0(__int64 result, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64 a7)
{
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v15;

  v7 = *(__int64**)(result + 88);
  v8 = *(__int64**)(result + 96);
  *(_QWORD*)result = a3;
  *(_QWORD*)(result + 8) = a4;
  *(_QWORD*)(result + 16) = a5;
  *(_QWORD*)(result + 24) = a6;
  *(_QWORD*)(result + 32) = a2;
  *(_QWORD*)(result + 40) = a7;
  *(_BYTE*)(result + 80) = a5 != 0;
  if (v7 != v8) {
    v9 = a7;
    do {
      v15 = *v7++;
      result = nvidia_dlss_rel_source_features_dlaa_766c0(v15, a2, a3, a4, a5,
                                                          a6, v9);
      v9 += *(_QWORD*)(v15 + 48);
    } while (v7 != v8);
  }
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_76770(__int64 result, _QWORD* a2)
{
  __int64 v2;

  if (a2 != nullptr) {
    v2 = result;
    nvidia_dlss_rel_source_features_dlaa_76770(result, *a2);
    nvidia_dlss_rel_source_features_dlaa_76770(v2, a2[1]);
    nvidia_dlss_rel_source_features_dlaa_767d0_alt1(a2 + 4);
    return NgxRoutine_430(a2, 152);
  }
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_767d0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;

  v2 = a1[12];
  if (v2 != 0) {
    v3 = a1[14];
    a1[13] = v2;
    NgxRoutine_430(v2, v3 - v2);
  }
  v4 = a1[8];
  if (v4 != 0) {
    v5 = a1[10];
    a1[9] = v4;
    NgxRoutine_430(v4, v5 - v4);
  }
  result = a1[4];
  if (result != 0) {
    v7 = a1[6];
    a1[5] = result;
    result = NgxRoutine_430(result, v7 - result);
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    return NgxRoutine_430(a1[2], *a1 & 0xFFFFFFFFFFFFFFFELL);
  }
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_76860(_QWORD* a1)
{
  *a1 = NgxData_94d1c0;
  return NgxRoutine_baf00();
}

__int64 nvidia_dlss_rel_source_features_dlaa_768e0(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64 a7, _QWORD* a8,
                                                   _QWORD* a9)
{
  __int64 v9;
  __int64 v10;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  char v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  _QWORD v72[7];
  __int64 v73;
  __int64 v74;
  __int64 v75;
  char v76;
  _QWORD v77[7];
  __int64 v78;
  __int64 v79;
  __int64 v80;
  char v81;
  _QWORD v82[7];
  __int64 v83;
  __int64 v84;
  __int64 v85;
  char v86;
  _QWORD v87[7];
  __int64 v88;
  __int64 v89;
  __int64 v90;
  char v91;
  _QWORD v92[7];
  __int64 v93;
  __int64 v94;
  __int64 v95;
  char v96;
  _QWORD v97[7];
  __int64 v98;
  __int64 v99;
  __int64 v100;
  char v101;

  v9 = *(_QWORD*)(a2 + 32);
  v10 = *(_QWORD*)(a2 + 40);
  v99 = 0;
  v100 = 0;
  v97[4] = v9;
  v97[5] = v10;
  v18 = *(_QWORD*)(a2 + 8);
  v97[0] = *(_QWORD*)a2;
  v97[1] = v18;
  v19 = *(_QWORD*)(a2 + 24);
  v97[2] = *(_QWORD*)(a2 + 16);
  v97[3] = v19;
  v20 = *(_QWORD*)(a2 + 56);
  v97[6] = *(_QWORD*)(a2 + 48);
  v98 = 0;
  v21 = *(_QWORD*)(a2 + 64);
  v22 = v21 - v20;
  if (v21 != v20) {
    if (v22 < 0) {
      goto LABEL_32;
    }
    v23 = NgxRoutine_420(v21 - v20);
    v24 = v23 + v22;
    v98 = v23;
    v100 = v23 + v22;
    memcpy_plt(v23, v20, v22);
    v99 = v24;
  }
  v25 = *(_BYTE*)(a2 + 80);
  v94 = 0;
  v95 = 0;
  v101 = v25;
  v26 = *(_QWORD*)(a3 + 40);
  v92[4] = *(_QWORD*)(a3 + 32);
  v92[5] = v26;
  v27 = *(_QWORD*)(a3 + 8);
  v92[0] = *(_QWORD*)a3;
  v92[1] = v27;
  v28 = *(_QWORD*)(a3 + 24);
  v92[2] = *(_QWORD*)(a3 + 16);
  v92[3] = v28;
  v29 = *(_QWORD*)(a3 + 56);
  v92[6] = *(_QWORD*)(a3 + 48);
  v93 = 0;
  v30 = *(_QWORD*)(a3 + 64);
  v31 = v30 - v29;
  if (v30 != v29) {
    if (v31 < 0) {
      goto LABEL_32;
    }
    v32 = NgxRoutine_420(v30 - v29);
    v33 = v32 + v31;
    v93 = v32;
    v95 = v32 + v31;
    memcpy_plt(v32, v29, v31);
    v94 = v33;
  }
  v34 = *(_BYTE*)(a3 + 80);
  v89 = 0;
  v90 = 0;
  v96 = v34;
  v35 = *(_QWORD*)(a4 + 40);
  v87[4] = *(_QWORD*)(a4 + 32);
  v87[5] = v35;
  v36 = *(_QWORD*)(a4 + 8);
  v87[0] = *(_QWORD*)a4;
  v87[1] = v36;
  v37 = *(_QWORD*)(a4 + 24);
  v87[2] = *(_QWORD*)(a4 + 16);
  v87[3] = v37;
  v38 = *(_QWORD*)(a4 + 56);
  v87[6] = *(_QWORD*)(a4 + 48);
  v88 = 0;
  v39 = *(_QWORD*)(a4 + 64);
  v40 = v39 - v38;
  if (v39 != v38) {
    if (v40 < 0) {
      goto LABEL_32;
    }
    v41 = NgxRoutine_420(v39 - v38);
    v42 = v41 + v40;
    v88 = v41;
    v90 = v41 + v40;
    memcpy_plt(v41, v38, v40);
    v89 = v42;
  }
  v43 = *(_BYTE*)(a4 + 80);
  v84 = 0;
  v85 = 0;
  v91 = v43;
  v44 = *(_QWORD*)(a5 + 40);
  v82[4] = *(_QWORD*)(a5 + 32);
  v82[5] = v44;
  v45 = *(_QWORD*)(a5 + 8);
  v82[0] = *(_QWORD*)a5;
  v82[1] = v45;
  v46 = *(_QWORD*)(a5 + 24);
  v82[2] = *(_QWORD*)(a5 + 16);
  v82[3] = v46;
  v47 = *(_QWORD*)(a5 + 56);
  v82[6] = *(_QWORD*)(a5 + 48);
  v83 = 0;
  v48 = *(_QWORD*)(a5 + 64);
  v49 = v48 - v47;
  if (v48 != v47) {
    if (v49 < 0) {
      goto LABEL_32;
    }
    v50 = NgxRoutine_420(v48 - v47);
    v51 = v50 + v49;
    v83 = v50;
    v85 = v50 + v49;
    memcpy_plt(v50, v47, v49);
    v84 = v51;
  }
  v52 = *(_BYTE*)(a5 + 80);
  v79 = 0;
  v80 = 0;
  v86 = v52;
  v53 = *(_QWORD*)(a6 + 40);
  v77[4] = *(_QWORD*)(a6 + 32);
  v77[5] = v53;
  v54 = *(_QWORD*)(a6 + 8);
  v77[0] = *(_QWORD*)a6;
  v77[1] = v54;
  v55 = *(_QWORD*)(a6 + 24);
  v77[2] = *(_QWORD*)(a6 + 16);
  v77[3] = v55;
  v56 = *(_QWORD*)(a6 + 56);
  v77[6] = *(_QWORD*)(a6 + 48);
  v78 = 0;
  v57 = *(_QWORD*)(a6 + 64);
  v58 = v57 - v56;
  if (v57 != v56) {
    if (v58 < 0) {
      goto LABEL_32;
    }
    v59 = NgxRoutine_420(v57 - v56);
    v60 = v59 + v58;
    v78 = v59;
    v80 = v59 + v58;
    memcpy_plt(v59, v56, v58);
    v79 = v60;
  }
  v61 = *(_BYTE*)(a6 + 80);
  v74 = 0;
  v75 = 0;
  v81 = v61;
  v62 = *(_QWORD*)(a7 + 40);
  v72[4] = *(_QWORD*)(a7 + 32);
  v72[5] = v62;
  v63 = *(_QWORD*)(a7 + 8);
  v72[0] = *(_QWORD*)a7;
  v72[1] = v63;
  v64 = *(_QWORD*)(a7 + 24);
  v72[2] = *(_QWORD*)(a7 + 16);
  v72[3] = v64;
  v65 = *(_QWORD*)(a7 + 56);
  v72[6] = *(_QWORD*)(a7 + 48);
  v73 = 0;
  v66 = *(_QWORD*)(a7 + 64);
  v67 = v66 - v65;
  if (v66 != v65) {
    if (v67 < 0) {
    LABEL_32:
      nvidia_dlss_rel_source_common_33410();
    }
    v68 = NgxRoutine_420(v66 - v65);
    v69 = v68 + v67;
    v73 = v68;
    v75 = v68 + v67;
    memcpy_plt(v68, v65, v67);
    v74 = v69;
  }
  v76 = *(_BYTE*)(a7 + 80);
  nvidia_dlss_rel_source_features_dlaa_76c60_alt1(a1, v97, v92, v87, v82, v77,
                                                  v72, *a8, *a9);
  if (v73 != 0) {
    v74 = v73;
    NgxRoutine_430(v73, v75 - v73);
  }
  if (v78 != 0) {
    v79 = v78;
    NgxRoutine_430(v78, v80 - v78);
  }
  if (v83 != 0) {
    v84 = v83;
    NgxRoutine_430(v83, v85 - v83);
  }
  if (v88 != 0) {
    v89 = v88;
    NgxRoutine_430(v88, v90 - v88);
  }
  if (v93 != 0) {
    v94 = v93;
    NgxRoutine_430(v93, v95 - v93);
  }
  if (v98 != 0) {
    v99 = v98;
    NgxRoutine_430(v98, v100 - v98);
  }
  return a1;
}

__int64 nvidia_dlss_rel_source_features_dlaa_76c60(__int64 a1, __int64* a2,
                                                   __int64* a3, __int64* a4,
                                                   __int64* a5, __int64* a6,
                                                   __int64* a7, __int64 a8,
                                                   __int64 a9)
{
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
  char v82;
  __int64 v83;
  _QWORD* v84;
  __int64 v85;
  __int64* v86;
  __int64 v87;
  __int64* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 result;
  __int64* v96;
  __int64* v97;
  __int64 v98;
  char v99;

  *(_QWORD*)a1 = NgxData_952ae0[0] + 2;
  v16 = *a2;
  v17 = a2[2];
  *(_QWORD*)(a1 + 24) = a2[1];
  *(_QWORD*)(a1 + 32) = v17;
  *(_QWORD*)(a1 + 16) = v16;
  v18 = a2[3];
  v19 = a2[4];
  v20 = a2[5];
  v21 = a2[6];
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 56) = v20;
  *(_QWORD*)(a1 + 64) = v21;
  *(_QWORD*)(a1 + 40) = v18;
  *(_QWORD*)(a1 + 48) = v19;
  v23 = a2[7];
  v22 = a2[8];
  v24 = v22 - v23;
  if (v22 != v23) {
    if (v24 < 0) {
      goto LABEL_27;
    }
    v25 = NgxRoutine_420(v22 - v23);
    v26 = v25 + v24;
    *(_QWORD*)(a1 + 72) = v25;
    *(_QWORD*)(a1 + 80) = v25;
    *(_QWORD*)(a1 + 88) = v25 + v24;
    memcpy_plt(v25, v23, v24);
    *(_QWORD*)(a1 + 80) = v26;
  }
  *(_BYTE*)(a1 + 96) = *((_BYTE*)a2 + 80);
  v27 = *a3;
  v28 = a3[2];
  *(_QWORD*)(a1 + 112) = a3[1];
  *(_QWORD*)(a1 + 120) = v28;
  *(_QWORD*)(a1 + 104) = v27;
  v29 = a3[3];
  v30 = a3[4];
  v31 = a3[5];
  v32 = a3[6];
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 144) = v31;
  *(_QWORD*)(a1 + 152) = v32;
  *(_QWORD*)(a1 + 128) = v29;
  *(_QWORD*)(a1 + 136) = v30;
  v34 = a3[7];
  v33 = a3[8];
  v35 = v33 - v34;
  if (v33 != v34) {
    if (v35 < 0) {
      goto LABEL_27;
    }
    v36 = NgxRoutine_420(v33 - v34);
    v37 = v36 + v35;
    *(_QWORD*)(a1 + 160) = v36;
    *(_QWORD*)(a1 + 168) = v36;
    *(_QWORD*)(a1 + 176) = v36 + v35;
    memcpy_plt(v36, v34, v35);
    *(_QWORD*)(a1 + 168) = v37;
  }
  *(_BYTE*)(a1 + 184) = *((_BYTE*)a3 + 80);
  v38 = *a4;
  v39 = a4[2];
  *(_QWORD*)(a1 + 200) = a4[1];
  *(_QWORD*)(a1 + 208) = v39;
  *(_QWORD*)(a1 + 192) = v38;
  v40 = a4[3];
  v41 = a4[4];
  v42 = a4[5];
  v43 = a4[6];
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 232) = v42;
  *(_QWORD*)(a1 + 240) = v43;
  *(_QWORD*)(a1 + 216) = v40;
  *(_QWORD*)(a1 + 224) = v41;
  v45 = a4[7];
  v44 = a4[8];
  v46 = v44 - v45;
  if (v44 != v45) {
    if (v46 < 0) {
      goto LABEL_27;
    }
    v47 = NgxRoutine_420(v44 - v45);
    v48 = v47 + v46;
    *(_QWORD*)(a1 + 248) = v47;
    *(_QWORD*)(a1 + 256) = v47;
    *(_QWORD*)(a1 + 264) = v47 + v46;
    memcpy_plt(v47, v45, v46);
    *(_QWORD*)(a1 + 256) = v48;
  }
  *(_BYTE*)(a1 + 272) = *((_BYTE*)a4 + 80);
  v49 = *a5;
  v50 = a5[2];
  *(_QWORD*)(a1 + 288) = a5[1];
  *(_QWORD*)(a1 + 296) = v50;
  *(_QWORD*)(a1 + 280) = v49;
  v51 = a5[3];
  v52 = a5[4];
  v53 = a5[5];
  v54 = a5[6];
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 320) = v53;
  *(_QWORD*)(a1 + 328) = v54;
  *(_QWORD*)(a1 + 304) = v51;
  *(_QWORD*)(a1 + 312) = v52;
  v56 = a5[7];
  v55 = a5[8];
  v57 = v55 - v56;
  if (v55 != v56) {
    if (v57 < 0) {
      goto LABEL_27;
    }
    v58 = NgxRoutine_420(v55 - v56);
    v59 = v58 + v57;
    *(_QWORD*)(a1 + 336) = v58;
    *(_QWORD*)(a1 + 344) = v58;
    *(_QWORD*)(a1 + 352) = v58 + v57;
    memcpy_plt(v58, v56, v57);
    *(_QWORD*)(a1 + 344) = v59;
  }
  *(_BYTE*)(a1 + 360) = *((_BYTE*)a5 + 80);
  v60 = *a6;
  v61 = a6[2];
  *(_QWORD*)(a1 + 376) = a6[1];
  *(_QWORD*)(a1 + 384) = v61;
  *(_QWORD*)(a1 + 368) = v60;
  v62 = a6[3];
  v63 = a6[4];
  v64 = a6[5];
  v65 = a6[6];
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 408) = v64;
  *(_QWORD*)(a1 + 416) = v65;
  *(_QWORD*)(a1 + 392) = v62;
  *(_QWORD*)(a1 + 400) = v63;
  v67 = a6[7];
  v66 = a6[8];
  v68 = v66 - v67;
  if (v66 != v67) {
    if (v68 < 0) {
      goto LABEL_27;
    }
    v69 = NgxRoutine_420(v66 - v67);
    v70 = v69 + v68;
    *(_QWORD*)(a1 + 424) = v69;
    *(_QWORD*)(a1 + 432) = v69;
    *(_QWORD*)(a1 + 440) = v69 + v68;
    memcpy_plt(v69, v67, v68);
    *(_QWORD*)(a1 + 432) = v70;
  }
  *(_BYTE*)(a1 + 448) = *((_BYTE*)a6 + 80);
  v71 = *a7;
  v72 = a7[2];
  *(_QWORD*)(a1 + 464) = a7[1];
  *(_QWORD*)(a1 + 472) = v72;
  *(_QWORD*)(a1 + 456) = v71;
  v73 = a7[3];
  v74 = a7[4];
  v75 = a7[5];
  v76 = a7[6];
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 496) = v75;
  *(_QWORD*)(a1 + 504) = v76;
  *(_QWORD*)(a1 + 480) = v73;
  *(_QWORD*)(a1 + 488) = v74;
  v78 = a7[7];
  v77 = a7[8];
  v79 = v77 - v78;
  if (v77 != v78) {
    if (v79 < 0) {
    LABEL_27:
      nvidia_dlss_rel_source_common_33410();
    }
    v80 = NgxRoutine_420(v77 - v78);
    v81 = v80 + v79;
    *(_QWORD*)(a1 + 512) = v80;
    *(_QWORD*)(a1 + 520) = v80;
    *(_QWORD*)(a1 + 528) = v80 + v79;
    memcpy_plt(v80, v78, v79);
    *(_QWORD*)(a1 + 520) = v81;
  }
  v82 = *((_BYTE*)a7 + 80);
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_BYTE*)(a1 + 624) = 0;
  *(_BYTE*)(a1 + 536) = v82;
  *(_QWORD*)(a1 + 632) = NgxData_94d270;
  memset_plt(a1 + 640, 0, 176);
  v83 = **(_QWORD**)(a1 + 72);
  *(_DWORD*)(a1 + 824) = *(_QWORD*)(*(_QWORD*)(a1 + 72) + 8LL);
  *(_DWORD*)(a1 + 828) = v83;
  v84 = (_QWORD*)NgxRoutine_420(8);
  *v84 = 0;
  v96 = nullptr;
  v97 = nullptr;
  v98 = 0;
  v99 = 0;
  nvidia_dlss_rel_source_features_dlaa_76570((__int64*)&v96, (__int64)v84,
                                             (__int64)(v84 + 1), 1u);
  v85 = (__int64)v96;
  v86 = v97;
  if (v96 == v97) {
    v90 = 2;
  }
  else {
    v87 = 1;
    v88 = v96;
    do {
      v89 = *v88++;
      v87 *= v89;
    } while (v88 != v97);
    v90 = 2 * v87;
  }
  *(_QWORD*)(a1 + 592) = v90;
  v91 = *(_QWORD*)(a1 + 600);
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  if (v91 != 0) {
    v92 = *(_QWORD*)(a1 + 616);
    *(_QWORD*)(a1 + 608) = v91;
    NgxRoutine_430(v91, v92 - v91);
    v85 = (__int64)v96;
    v86 = v97;
  }
  *(_QWORD*)(a1 + 600) = v85;
  v93 = v98;
  *(_QWORD*)(a1 + 608) = v86;
  v97 = nullptr;
  v98 = 0;
  v96 = nullptr;
  *(_QWORD*)(a1 + 616) = v93;
  *(_BYTE*)(a1 + 624) = v99;
  result = NgxRoutine_430(v84, 8);
  *(_QWORD*)(a1 + 584) = a9;
  *(_QWORD*)(a1 + 544) = a8;
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_77080(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;

  v2 = a1[75];
  if (v2 != 0) {
    v3 = a1[77];
    a1[76] = v2;
    NgxRoutine_430(v2, v3 - v2);
  }
  v4 = a1[64];
  if (v4 != 0) {
    v5 = a1[66];
    a1[65] = v4;
    NgxRoutine_430(v4, v5 - v4);
  }
  v6 = a1[53];
  if (v6 != 0) {
    v7 = a1[55];
    a1[54] = v6;
    NgxRoutine_430(v6, v7 - v6);
  }
  v8 = a1[42];
  if (v8 != 0) {
    v9 = a1[44];
    a1[43] = v8;
    NgxRoutine_430(v8, v9 - v8);
  }
  v10 = a1[31];
  if (v10 != 0) {
    v11 = a1[33];
    a1[32] = v10;
    NgxRoutine_430(v10, v11 - v10);
  }
  v12 = a1[20];
  if (v12 != 0) {
    v13 = a1[22];
    a1[21] = v12;
    NgxRoutine_430(v12, v13 - v12);
  }
  result = a1[9];
  if (result != 0) {
    v15 = a1[11];
    a1[10] = result;
    return NgxRoutine_430(result, v15 - result);
  }
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_77190(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
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

  if (*(_BYTE*)(result + 96) == 1) {
    v1 = *(_QWORD*)(result + 32);
    if (v1 != 0) {
      v2 = *(_QWORD*)(result + 16);
      v3 = *(_QWORD*)(result + 24);
      v4 = *(_QWORD*)(result + 40);
      *(_QWORD*)(result + 16) = v1;
      *(_QWORD*)(result + 24) = v4;
      *(_QWORD*)(result + 32) = v2;
      *(_QWORD*)(result + 40) = v3;
    }
  }
  if (*(_BYTE*)(result + 184) == 1) {
    v5 = *(_QWORD*)(result + 120);
    if (v5 != 0) {
      v6 = *(_QWORD*)(result + 104);
      v7 = *(_QWORD*)(result + 112);
      v8 = *(_QWORD*)(result + 128);
      *(_QWORD*)(result + 104) = v5;
      *(_QWORD*)(result + 112) = v8;
      *(_QWORD*)(result + 120) = v6;
      *(_QWORD*)(result + 128) = v7;
    }
  }
  if (*(_BYTE*)(result + 272) == 1) {
    v9 = *(_QWORD*)(result + 208);
    if (v9 != 0) {
      v10 = *(_QWORD*)(result + 192);
      v11 = *(_QWORD*)(result + 200);
      v12 = *(_QWORD*)(result + 216);
      *(_QWORD*)(result + 192) = v9;
      *(_QWORD*)(result + 200) = v12;
      *(_QWORD*)(result + 208) = v10;
      *(_QWORD*)(result + 216) = v11;
    }
  }
  if (*(_BYTE*)(result + 360) == 1) {
    v13 = *(_QWORD*)(result + 296);
    if (v13 != 0) {
      v14 = *(_QWORD*)(result + 280);
      v15 = *(_QWORD*)(result + 288);
      v16 = *(_QWORD*)(result + 304);
      *(_QWORD*)(result + 280) = v13;
      *(_QWORD*)(result + 288) = v16;
      *(_QWORD*)(result + 296) = v14;
      *(_QWORD*)(result + 304) = v15;
    }
  }
  if (*(_BYTE*)(result + 448) == 1) {
    v17 = *(_QWORD*)(result + 384);
    if (v17 != 0) {
      v18 = *(_QWORD*)(result + 368);
      v19 = *(_QWORD*)(result + 376);
      v20 = *(_QWORD*)(result + 392);
      *(_QWORD*)(result + 368) = v17;
      *(_QWORD*)(result + 376) = v20;
      *(_QWORD*)(result + 384) = v18;
      *(_QWORD*)(result + 392) = v19;
    }
  }
  if (*(_BYTE*)(result + 536) == 1) {
    v21 = *(_QWORD*)(result + 472);
    if (v21 != 0) {
      v22 = *(_QWORD*)(result + 456);
      v23 = *(_QWORD*)(result + 464);
      v24 = *(_QWORD*)(result + 480);
      *(_QWORD*)(result + 456) = v21;
      *(_QWORD*)(result + 464) = v24;
      *(_QWORD*)(result + 472) = v22;
      *(_QWORD*)(result + 480) = v23;
    }
  }
  if (*(_BYTE*)(result + 624) == 1) {
    v25 = *(_QWORD*)(result + 560);
    if (v25 != 0) {
      v26 = *(_QWORD*)(result + 544);
      *(_QWORD*)(result + 544) = v25;
      v27 = *(_QWORD*)(result + 552);
      *(_QWORD*)(result + 560) = v26;
      v28 = *(_QWORD*)(result + 568);
      *(_QWORD*)(result + 568) = v27;
      *(_QWORD*)(result + 552) = v28;
    }
  }
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_772b0(_QWORD* a1)
{
  *a1 = NgxData_94d2b8;
  return NgxRoutine_baf00();
}

__int64 nvidia_dlss_rel_source_features_dlaa_77310(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64 a7, _QWORD* a8,
                                                   _QWORD* a9)
{
  __int64 v9;
  __int64 v10;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  char v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  _QWORD v72[7];
  __int64 v73;
  __int64 v74;
  __int64 v75;
  char v76;
  _QWORD v77[7];
  __int64 v78;
  __int64 v79;
  __int64 v80;
  char v81;
  _QWORD v82[7];
  __int64 v83;
  __int64 v84;
  __int64 v85;
  char v86;
  _QWORD v87[7];
  __int64 v88;
  __int64 v89;
  __int64 v90;
  char v91;
  _QWORD v92[7];
  __int64 v93;
  __int64 v94;
  __int64 v95;
  char v96;
  _QWORD v97[7];
  __int64 v98;
  __int64 v99;
  __int64 v100;
  char v101;

  v9 = *(_QWORD*)(a2 + 32);
  v10 = *(_QWORD*)(a2 + 40);
  v99 = 0;
  v100 = 0;
  v97[4] = v9;
  v97[5] = v10;
  v18 = *(_QWORD*)(a2 + 8);
  v97[0] = *(_QWORD*)a2;
  v97[1] = v18;
  v19 = *(_QWORD*)(a2 + 24);
  v97[2] = *(_QWORD*)(a2 + 16);
  v97[3] = v19;
  v20 = *(_QWORD*)(a2 + 56);
  v97[6] = *(_QWORD*)(a2 + 48);
  v98 = 0;
  v21 = *(_QWORD*)(a2 + 64);
  v22 = v21 - v20;
  if (v21 != v20) {
    if (v22 < 0) {
      goto LABEL_32;
    }
    v23 = NgxRoutine_420(v21 - v20);
    v24 = v23 + v22;
    v98 = v23;
    v100 = v23 + v22;
    memcpy_plt(v23, v20, v22);
    v99 = v24;
  }
  v25 = *(_BYTE*)(a2 + 80);
  v94 = 0;
  v95 = 0;
  v101 = v25;
  v26 = *(_QWORD*)(a3 + 40);
  v92[4] = *(_QWORD*)(a3 + 32);
  v92[5] = v26;
  v27 = *(_QWORD*)(a3 + 8);
  v92[0] = *(_QWORD*)a3;
  v92[1] = v27;
  v28 = *(_QWORD*)(a3 + 24);
  v92[2] = *(_QWORD*)(a3 + 16);
  v92[3] = v28;
  v29 = *(_QWORD*)(a3 + 56);
  v92[6] = *(_QWORD*)(a3 + 48);
  v93 = 0;
  v30 = *(_QWORD*)(a3 + 64);
  v31 = v30 - v29;
  if (v30 != v29) {
    if (v31 < 0) {
      goto LABEL_32;
    }
    v32 = NgxRoutine_420(v30 - v29);
    v33 = v32 + v31;
    v93 = v32;
    v95 = v32 + v31;
    memcpy_plt(v32, v29, v31);
    v94 = v33;
  }
  v34 = *(_BYTE*)(a3 + 80);
  v89 = 0;
  v90 = 0;
  v96 = v34;
  v35 = *(_QWORD*)(a4 + 40);
  v87[4] = *(_QWORD*)(a4 + 32);
  v87[5] = v35;
  v36 = *(_QWORD*)(a4 + 8);
  v87[0] = *(_QWORD*)a4;
  v87[1] = v36;
  v37 = *(_QWORD*)(a4 + 24);
  v87[2] = *(_QWORD*)(a4 + 16);
  v87[3] = v37;
  v38 = *(_QWORD*)(a4 + 56);
  v87[6] = *(_QWORD*)(a4 + 48);
  v88 = 0;
  v39 = *(_QWORD*)(a4 + 64);
  v40 = v39 - v38;
  if (v39 != v38) {
    if (v40 < 0) {
      goto LABEL_32;
    }
    v41 = NgxRoutine_420(v39 - v38);
    v42 = v41 + v40;
    v88 = v41;
    v90 = v41 + v40;
    memcpy_plt(v41, v38, v40);
    v89 = v42;
  }
  v43 = *(_BYTE*)(a4 + 80);
  v84 = 0;
  v85 = 0;
  v91 = v43;
  v44 = *(_QWORD*)(a5 + 40);
  v82[4] = *(_QWORD*)(a5 + 32);
  v82[5] = v44;
  v45 = *(_QWORD*)(a5 + 8);
  v82[0] = *(_QWORD*)a5;
  v82[1] = v45;
  v46 = *(_QWORD*)(a5 + 24);
  v82[2] = *(_QWORD*)(a5 + 16);
  v82[3] = v46;
  v47 = *(_QWORD*)(a5 + 56);
  v82[6] = *(_QWORD*)(a5 + 48);
  v83 = 0;
  v48 = *(_QWORD*)(a5 + 64);
  v49 = v48 - v47;
  if (v48 != v47) {
    if (v49 < 0) {
      goto LABEL_32;
    }
    v50 = NgxRoutine_420(v48 - v47);
    v51 = v50 + v49;
    v83 = v50;
    v85 = v50 + v49;
    memcpy_plt(v50, v47, v49);
    v84 = v51;
  }
  v52 = *(_BYTE*)(a5 + 80);
  v79 = 0;
  v80 = 0;
  v86 = v52;
  v53 = *(_QWORD*)(a6 + 40);
  v77[4] = *(_QWORD*)(a6 + 32);
  v77[5] = v53;
  v54 = *(_QWORD*)(a6 + 8);
  v77[0] = *(_QWORD*)a6;
  v77[1] = v54;
  v55 = *(_QWORD*)(a6 + 24);
  v77[2] = *(_QWORD*)(a6 + 16);
  v77[3] = v55;
  v56 = *(_QWORD*)(a6 + 56);
  v77[6] = *(_QWORD*)(a6 + 48);
  v78 = 0;
  v57 = *(_QWORD*)(a6 + 64);
  v58 = v57 - v56;
  if (v57 != v56) {
    if (v58 < 0) {
      goto LABEL_32;
    }
    v59 = NgxRoutine_420(v57 - v56);
    v60 = v59 + v58;
    v78 = v59;
    v80 = v59 + v58;
    memcpy_plt(v59, v56, v58);
    v79 = v60;
  }
  v61 = *(_BYTE*)(a6 + 80);
  v74 = 0;
  v75 = 0;
  v81 = v61;
  v62 = *(_QWORD*)(a7 + 40);
  v72[4] = *(_QWORD*)(a7 + 32);
  v72[5] = v62;
  v63 = *(_QWORD*)(a7 + 8);
  v72[0] = *(_QWORD*)a7;
  v72[1] = v63;
  v64 = *(_QWORD*)(a7 + 24);
  v72[2] = *(_QWORD*)(a7 + 16);
  v72[3] = v64;
  v65 = *(_QWORD*)(a7 + 56);
  v72[6] = *(_QWORD*)(a7 + 48);
  v73 = 0;
  v66 = *(_QWORD*)(a7 + 64);
  v67 = v66 - v65;
  if (v66 != v65) {
    if (v67 < 0) {
    LABEL_32:
      nvidia_dlss_rel_source_common_33410();
    }
    v68 = NgxRoutine_420(v66 - v65);
    v69 = v68 + v67;
    v73 = v68;
    v75 = v68 + v67;
    memcpy_plt(v68, v65, v67);
    v74 = v69;
  }
  v76 = *(_BYTE*)(a7 + 80);
  nvidia_dlss_rel_source_features_dlaa_77680_alt1(a1, v97, v92, v87, v82, v77,
                                                  v72, *a8, *a9);
  if (v73 != 0) {
    v74 = v73;
    NgxRoutine_430(v73, v75 - v73);
  }
  if (v78 != 0) {
    v79 = v78;
    NgxRoutine_430(v78, v80 - v78);
  }
  if (v83 != 0) {
    v84 = v83;
    NgxRoutine_430(v83, v85 - v83);
  }
  if (v88 != 0) {
    v89 = v88;
    NgxRoutine_430(v88, v90 - v88);
  }
  if (v93 != 0) {
    v94 = v93;
    NgxRoutine_430(v93, v95 - v93);
  }
  if (v98 != 0) {
    v99 = v98;
    NgxRoutine_430(v98, v100 - v98);
  }
  return a1;
}

__int64 nvidia_dlss_rel_source_features_dlaa_77680(__int64 a1, __int64* a2,
                                                   __int64* a3, __int64* a4,
                                                   __int64* a5, __int64* a6,
                                                   __int64* a7, __int64 a8,
                                                   __int64 a9)
{
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
  char v82;
  __int64 v83;
  _QWORD* v84;
  __int64 v85;
  __int64* v86;
  __int64 v87;
  __int64* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 result;
  __int64* v96;
  __int64* v97;
  __int64 v98;
  char v99;

  *(_QWORD*)a1 = NgxData_952af0[0] + 2;
  v16 = *a2;
  v17 = a2[2];
  *(_QWORD*)(a1 + 24) = a2[1];
  *(_QWORD*)(a1 + 32) = v17;
  *(_QWORD*)(a1 + 16) = v16;
  v18 = a2[3];
  v19 = a2[4];
  v20 = a2[5];
  v21 = a2[6];
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 56) = v20;
  *(_QWORD*)(a1 + 64) = v21;
  *(_QWORD*)(a1 + 40) = v18;
  *(_QWORD*)(a1 + 48) = v19;
  v23 = a2[7];
  v22 = a2[8];
  v24 = v22 - v23;
  if (v22 != v23) {
    if (v24 < 0) {
      goto LABEL_27;
    }
    v25 = NgxRoutine_420(v22 - v23);
    v26 = v25 + v24;
    *(_QWORD*)(a1 + 72) = v25;
    *(_QWORD*)(a1 + 80) = v25;
    *(_QWORD*)(a1 + 88) = v25 + v24;
    memcpy_plt(v25, v23, v24);
    *(_QWORD*)(a1 + 80) = v26;
  }
  *(_BYTE*)(a1 + 96) = *((_BYTE*)a2 + 80);
  v27 = *a3;
  v28 = a3[2];
  *(_QWORD*)(a1 + 112) = a3[1];
  *(_QWORD*)(a1 + 120) = v28;
  *(_QWORD*)(a1 + 104) = v27;
  v29 = a3[3];
  v30 = a3[4];
  v31 = a3[5];
  v32 = a3[6];
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 144) = v31;
  *(_QWORD*)(a1 + 152) = v32;
  *(_QWORD*)(a1 + 128) = v29;
  *(_QWORD*)(a1 + 136) = v30;
  v34 = a3[7];
  v33 = a3[8];
  v35 = v33 - v34;
  if (v33 != v34) {
    if (v35 < 0) {
      goto LABEL_27;
    }
    v36 = NgxRoutine_420(v33 - v34);
    v37 = v36 + v35;
    *(_QWORD*)(a1 + 160) = v36;
    *(_QWORD*)(a1 + 168) = v36;
    *(_QWORD*)(a1 + 176) = v36 + v35;
    memcpy_plt(v36, v34, v35);
    *(_QWORD*)(a1 + 168) = v37;
  }
  *(_BYTE*)(a1 + 184) = *((_BYTE*)a3 + 80);
  v38 = *a4;
  v39 = a4[2];
  *(_QWORD*)(a1 + 200) = a4[1];
  *(_QWORD*)(a1 + 208) = v39;
  *(_QWORD*)(a1 + 192) = v38;
  v40 = a4[3];
  v41 = a4[4];
  v42 = a4[5];
  v43 = a4[6];
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 232) = v42;
  *(_QWORD*)(a1 + 240) = v43;
  *(_QWORD*)(a1 + 216) = v40;
  *(_QWORD*)(a1 + 224) = v41;
  v45 = a4[7];
  v44 = a4[8];
  v46 = v44 - v45;
  if (v44 != v45) {
    if (v46 < 0) {
      goto LABEL_27;
    }
    v47 = NgxRoutine_420(v44 - v45);
    v48 = v47 + v46;
    *(_QWORD*)(a1 + 248) = v47;
    *(_QWORD*)(a1 + 256) = v47;
    *(_QWORD*)(a1 + 264) = v47 + v46;
    memcpy_plt(v47, v45, v46);
    *(_QWORD*)(a1 + 256) = v48;
  }
  *(_BYTE*)(a1 + 272) = *((_BYTE*)a4 + 80);
  v49 = *a5;
  v50 = a5[2];
  *(_QWORD*)(a1 + 288) = a5[1];
  *(_QWORD*)(a1 + 296) = v50;
  *(_QWORD*)(a1 + 280) = v49;
  v51 = a5[3];
  v52 = a5[4];
  v53 = a5[5];
  v54 = a5[6];
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 320) = v53;
  *(_QWORD*)(a1 + 328) = v54;
  *(_QWORD*)(a1 + 304) = v51;
  *(_QWORD*)(a1 + 312) = v52;
  v56 = a5[7];
  v55 = a5[8];
  v57 = v55 - v56;
  if (v55 != v56) {
    if (v57 < 0) {
      goto LABEL_27;
    }
    v58 = NgxRoutine_420(v55 - v56);
    v59 = v58 + v57;
    *(_QWORD*)(a1 + 336) = v58;
    *(_QWORD*)(a1 + 344) = v58;
    *(_QWORD*)(a1 + 352) = v58 + v57;
    memcpy_plt(v58, v56, v57);
    *(_QWORD*)(a1 + 344) = v59;
  }
  *(_BYTE*)(a1 + 360) = *((_BYTE*)a5 + 80);
  v60 = *a6;
  v61 = a6[2];
  *(_QWORD*)(a1 + 376) = a6[1];
  *(_QWORD*)(a1 + 384) = v61;
  *(_QWORD*)(a1 + 368) = v60;
  v62 = a6[3];
  v63 = a6[4];
  v64 = a6[5];
  v65 = a6[6];
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 408) = v64;
  *(_QWORD*)(a1 + 416) = v65;
  *(_QWORD*)(a1 + 392) = v62;
  *(_QWORD*)(a1 + 400) = v63;
  v67 = a6[7];
  v66 = a6[8];
  v68 = v66 - v67;
  if (v66 != v67) {
    if (v68 < 0) {
      goto LABEL_27;
    }
    v69 = NgxRoutine_420(v66 - v67);
    v70 = v69 + v68;
    *(_QWORD*)(a1 + 424) = v69;
    *(_QWORD*)(a1 + 432) = v69;
    *(_QWORD*)(a1 + 440) = v69 + v68;
    memcpy_plt(v69, v67, v68);
    *(_QWORD*)(a1 + 432) = v70;
  }
  *(_BYTE*)(a1 + 448) = *((_BYTE*)a6 + 80);
  v71 = *a7;
  v72 = a7[2];
  *(_QWORD*)(a1 + 464) = a7[1];
  *(_QWORD*)(a1 + 472) = v72;
  *(_QWORD*)(a1 + 456) = v71;
  v73 = a7[3];
  v74 = a7[4];
  v75 = a7[5];
  v76 = a7[6];
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 496) = v75;
  *(_QWORD*)(a1 + 504) = v76;
  *(_QWORD*)(a1 + 480) = v73;
  *(_QWORD*)(a1 + 488) = v74;
  v78 = a7[7];
  v77 = a7[8];
  v79 = v77 - v78;
  if (v77 != v78) {
    if (v79 < 0) {
    LABEL_27:
      nvidia_dlss_rel_source_common_33410();
    }
    v80 = NgxRoutine_420(v77 - v78);
    v81 = v80 + v79;
    *(_QWORD*)(a1 + 512) = v80;
    *(_QWORD*)(a1 + 520) = v80;
    *(_QWORD*)(a1 + 528) = v80 + v79;
    memcpy_plt(v80, v78, v79);
    *(_QWORD*)(a1 + 520) = v81;
  }
  v82 = *((_BYTE*)a7 + 80);
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_BYTE*)(a1 + 624) = 0;
  *(_BYTE*)(a1 + 536) = v82;
  *(_QWORD*)(a1 + 632) = NgxData_94d270;
  memset_plt(a1 + 640, 0, 176);
  v83 = **(_QWORD**)(a1 + 72);
  *(_DWORD*)(a1 + 824) = *(_QWORD*)(*(_QWORD*)(a1 + 72) + 8LL);
  *(_DWORD*)(a1 + 828) = v83;
  v84 = (_QWORD*)NgxRoutine_420(8);
  *v84 = 0;
  v96 = nullptr;
  v97 = nullptr;
  v98 = 0;
  v99 = 0;
  nvidia_dlss_rel_source_features_dlaa_76570((__int64*)&v96, (__int64)v84,
                                             (__int64)(v84 + 1), 1u);
  v85 = (__int64)v96;
  v86 = v97;
  if (v96 == v97) {
    v90 = 2;
  }
  else {
    v87 = 1;
    v88 = v96;
    do {
      v89 = *v88++;
      v87 *= v89;
    } while (v88 != v97);
    v90 = 2 * v87;
  }
  *(_QWORD*)(a1 + 592) = v90;
  v91 = *(_QWORD*)(a1 + 600);
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  if (v91 != 0) {
    v92 = *(_QWORD*)(a1 + 616);
    *(_QWORD*)(a1 + 608) = v91;
    NgxRoutine_430(v91, v92 - v91);
    v85 = (__int64)v96;
    v86 = v97;
  }
  *(_QWORD*)(a1 + 600) = v85;
  v93 = v98;
  *(_QWORD*)(a1 + 608) = v86;
  v97 = nullptr;
  v98 = 0;
  v96 = nullptr;
  *(_QWORD*)(a1 + 616) = v93;
  *(_BYTE*)(a1 + 624) = v99;
  result = NgxRoutine_430(v84, 8);
  *(_QWORD*)(a1 + 584) = a9;
  *(_QWORD*)(a1 + 544) = a8;
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_77aa0(_QWORD* a1)
{
  *a1 = NgxData_94d358;
  return NgxRoutine_baf00();
}

__int64 nvidia_dlss_rel_source_features_dlaa_77b00(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64 a7, _QWORD* a8,
                                                   _QWORD* a9)
{
  __int64 v9;
  __int64 v10;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  char v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  _QWORD v72[7];
  __int64 v73;
  __int64 v74;
  __int64 v75;
  char v76;
  _QWORD v77[7];
  __int64 v78;
  __int64 v79;
  __int64 v80;
  char v81;
  _QWORD v82[7];
  __int64 v83;
  __int64 v84;
  __int64 v85;
  char v86;
  _QWORD v87[7];
  __int64 v88;
  __int64 v89;
  __int64 v90;
  char v91;
  _QWORD v92[7];
  __int64 v93;
  __int64 v94;
  __int64 v95;
  char v96;
  _QWORD v97[7];
  __int64 v98;
  __int64 v99;
  __int64 v100;
  char v101;

  v9 = *(_QWORD*)(a2 + 32);
  v10 = *(_QWORD*)(a2 + 40);
  v99 = 0;
  v100 = 0;
  v97[4] = v9;
  v97[5] = v10;
  v18 = *(_QWORD*)(a2 + 8);
  v97[0] = *(_QWORD*)a2;
  v97[1] = v18;
  v19 = *(_QWORD*)(a2 + 24);
  v97[2] = *(_QWORD*)(a2 + 16);
  v97[3] = v19;
  v20 = *(_QWORD*)(a2 + 56);
  v97[6] = *(_QWORD*)(a2 + 48);
  v98 = 0;
  v21 = *(_QWORD*)(a2 + 64);
  v22 = v21 - v20;
  if (v21 != v20) {
    if (v22 < 0) {
      goto LABEL_32;
    }
    v23 = NgxRoutine_420(v21 - v20);
    v24 = v23 + v22;
    v98 = v23;
    v100 = v23 + v22;
    memcpy_plt(v23, v20, v22);
    v99 = v24;
  }
  v25 = *(_BYTE*)(a2 + 80);
  v94 = 0;
  v95 = 0;
  v101 = v25;
  v26 = *(_QWORD*)(a3 + 40);
  v92[4] = *(_QWORD*)(a3 + 32);
  v92[5] = v26;
  v27 = *(_QWORD*)(a3 + 8);
  v92[0] = *(_QWORD*)a3;
  v92[1] = v27;
  v28 = *(_QWORD*)(a3 + 24);
  v92[2] = *(_QWORD*)(a3 + 16);
  v92[3] = v28;
  v29 = *(_QWORD*)(a3 + 56);
  v92[6] = *(_QWORD*)(a3 + 48);
  v93 = 0;
  v30 = *(_QWORD*)(a3 + 64);
  v31 = v30 - v29;
  if (v30 != v29) {
    if (v31 < 0) {
      goto LABEL_32;
    }
    v32 = NgxRoutine_420(v30 - v29);
    v33 = v32 + v31;
    v93 = v32;
    v95 = v32 + v31;
    memcpy_plt(v32, v29, v31);
    v94 = v33;
  }
  v34 = *(_BYTE*)(a3 + 80);
  v89 = 0;
  v90 = 0;
  v96 = v34;
  v35 = *(_QWORD*)(a4 + 40);
  v87[4] = *(_QWORD*)(a4 + 32);
  v87[5] = v35;
  v36 = *(_QWORD*)(a4 + 8);
  v87[0] = *(_QWORD*)a4;
  v87[1] = v36;
  v37 = *(_QWORD*)(a4 + 24);
  v87[2] = *(_QWORD*)(a4 + 16);
  v87[3] = v37;
  v38 = *(_QWORD*)(a4 + 56);
  v87[6] = *(_QWORD*)(a4 + 48);
  v88 = 0;
  v39 = *(_QWORD*)(a4 + 64);
  v40 = v39 - v38;
  if (v39 != v38) {
    if (v40 < 0) {
      goto LABEL_32;
    }
    v41 = NgxRoutine_420(v39 - v38);
    v42 = v41 + v40;
    v88 = v41;
    v90 = v41 + v40;
    memcpy_plt(v41, v38, v40);
    v89 = v42;
  }
  v43 = *(_BYTE*)(a4 + 80);
  v84 = 0;
  v85 = 0;
  v91 = v43;
  v44 = *(_QWORD*)(a5 + 40);
  v82[4] = *(_QWORD*)(a5 + 32);
  v82[5] = v44;
  v45 = *(_QWORD*)(a5 + 8);
  v82[0] = *(_QWORD*)a5;
  v82[1] = v45;
  v46 = *(_QWORD*)(a5 + 24);
  v82[2] = *(_QWORD*)(a5 + 16);
  v82[3] = v46;
  v47 = *(_QWORD*)(a5 + 56);
  v82[6] = *(_QWORD*)(a5 + 48);
  v83 = 0;
  v48 = *(_QWORD*)(a5 + 64);
  v49 = v48 - v47;
  if (v48 != v47) {
    if (v49 < 0) {
      goto LABEL_32;
    }
    v50 = NgxRoutine_420(v48 - v47);
    v51 = v50 + v49;
    v83 = v50;
    v85 = v50 + v49;
    memcpy_plt(v50, v47, v49);
    v84 = v51;
  }
  v52 = *(_BYTE*)(a5 + 80);
  v79 = 0;
  v80 = 0;
  v86 = v52;
  v53 = *(_QWORD*)(a6 + 40);
  v77[4] = *(_QWORD*)(a6 + 32);
  v77[5] = v53;
  v54 = *(_QWORD*)(a6 + 8);
  v77[0] = *(_QWORD*)a6;
  v77[1] = v54;
  v55 = *(_QWORD*)(a6 + 24);
  v77[2] = *(_QWORD*)(a6 + 16);
  v77[3] = v55;
  v56 = *(_QWORD*)(a6 + 56);
  v77[6] = *(_QWORD*)(a6 + 48);
  v78 = 0;
  v57 = *(_QWORD*)(a6 + 64);
  v58 = v57 - v56;
  if (v57 != v56) {
    if (v58 < 0) {
      goto LABEL_32;
    }
    v59 = NgxRoutine_420(v57 - v56);
    v60 = v59 + v58;
    v78 = v59;
    v80 = v59 + v58;
    memcpy_plt(v59, v56, v58);
    v79 = v60;
  }
  v61 = *(_BYTE*)(a6 + 80);
  v74 = 0;
  v75 = 0;
  v81 = v61;
  v62 = *(_QWORD*)(a7 + 40);
  v72[4] = *(_QWORD*)(a7 + 32);
  v72[5] = v62;
  v63 = *(_QWORD*)(a7 + 8);
  v72[0] = *(_QWORD*)a7;
  v72[1] = v63;
  v64 = *(_QWORD*)(a7 + 24);
  v72[2] = *(_QWORD*)(a7 + 16);
  v72[3] = v64;
  v65 = *(_QWORD*)(a7 + 56);
  v72[6] = *(_QWORD*)(a7 + 48);
  v73 = 0;
  v66 = *(_QWORD*)(a7 + 64);
  v67 = v66 - v65;
  if (v66 != v65) {
    if (v67 < 0) {
    LABEL_32:
      nvidia_dlss_rel_source_common_33410();
    }
    v68 = NgxRoutine_420(v66 - v65);
    v69 = v68 + v67;
    v73 = v68;
    v75 = v68 + v67;
    memcpy_plt(v68, v65, v67);
    v74 = v69;
  }
  v76 = *(_BYTE*)(a7 + 80);
  nvidia_dlss_rel_source_features_dlaa_77e80_alt1(a1, v97, v92, v87, v82, v77,
                                                  v72, *a8, *a9);
  if (v73 != 0) {
    v74 = v73;
    NgxRoutine_430(v73, v75 - v73);
  }
  if (v78 != 0) {
    v79 = v78;
    NgxRoutine_430(v78, v80 - v78);
  }
  if (v83 != 0) {
    v84 = v83;
    NgxRoutine_430(v83, v85 - v83);
  }
  if (v88 != 0) {
    v89 = v88;
    NgxRoutine_430(v88, v90 - v88);
  }
  if (v93 != 0) {
    v94 = v93;
    NgxRoutine_430(v93, v95 - v93);
  }
  if (v98 != 0) {
    v99 = v98;
    NgxRoutine_430(v98, v100 - v98);
  }
  return a1;
}

__int64 nvidia_dlss_rel_source_features_dlaa_77e80(__int64 a1, __int64* a2,
                                                   __int64* a3, __int64* a4,
                                                   __int64* a5, __int64* a6,
                                                   __int64* a7, __int64 a8,
                                                   __int64 a9)
{
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
  char v82;
  __int64 v83;
  _QWORD* v84;
  __int64 v85;
  __int64* v86;
  __int64 v87;
  __int64* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 result;
  __int64* v96;
  __int64* v97;
  __int64 v98;
  char v99;

  *(_QWORD*)a1 = NgxData_952af8[0] + 2;
  v16 = *a2;
  v17 = a2[2];
  *(_QWORD*)(a1 + 24) = a2[1];
  *(_QWORD*)(a1 + 32) = v17;
  *(_QWORD*)(a1 + 16) = v16;
  v18 = a2[3];
  v19 = a2[4];
  v20 = a2[5];
  v21 = a2[6];
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 56) = v20;
  *(_QWORD*)(a1 + 64) = v21;
  *(_QWORD*)(a1 + 40) = v18;
  *(_QWORD*)(a1 + 48) = v19;
  v23 = a2[7];
  v22 = a2[8];
  v24 = v22 - v23;
  if (v22 != v23) {
    if (v24 < 0) {
      goto LABEL_27;
    }
    v25 = NgxRoutine_420(v22 - v23);
    v26 = v25 + v24;
    *(_QWORD*)(a1 + 72) = v25;
    *(_QWORD*)(a1 + 80) = v25;
    *(_QWORD*)(a1 + 88) = v25 + v24;
    memcpy_plt(v25, v23, v24);
    *(_QWORD*)(a1 + 80) = v26;
  }
  *(_BYTE*)(a1 + 96) = *((_BYTE*)a2 + 80);
  v27 = *a3;
  v28 = a3[2];
  *(_QWORD*)(a1 + 112) = a3[1];
  *(_QWORD*)(a1 + 120) = v28;
  *(_QWORD*)(a1 + 104) = v27;
  v29 = a3[3];
  v30 = a3[4];
  v31 = a3[5];
  v32 = a3[6];
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 144) = v31;
  *(_QWORD*)(a1 + 152) = v32;
  *(_QWORD*)(a1 + 128) = v29;
  *(_QWORD*)(a1 + 136) = v30;
  v34 = a3[7];
  v33 = a3[8];
  v35 = v33 - v34;
  if (v33 != v34) {
    if (v35 < 0) {
      goto LABEL_27;
    }
    v36 = NgxRoutine_420(v33 - v34);
    v37 = v36 + v35;
    *(_QWORD*)(a1 + 160) = v36;
    *(_QWORD*)(a1 + 168) = v36;
    *(_QWORD*)(a1 + 176) = v36 + v35;
    memcpy_plt(v36, v34, v35);
    *(_QWORD*)(a1 + 168) = v37;
  }
  *(_BYTE*)(a1 + 184) = *((_BYTE*)a3 + 80);
  v38 = *a4;
  v39 = a4[2];
  *(_QWORD*)(a1 + 200) = a4[1];
  *(_QWORD*)(a1 + 208) = v39;
  *(_QWORD*)(a1 + 192) = v38;
  v40 = a4[3];
  v41 = a4[4];
  v42 = a4[5];
  v43 = a4[6];
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 232) = v42;
  *(_QWORD*)(a1 + 240) = v43;
  *(_QWORD*)(a1 + 216) = v40;
  *(_QWORD*)(a1 + 224) = v41;
  v45 = a4[7];
  v44 = a4[8];
  v46 = v44 - v45;
  if (v44 != v45) {
    if (v46 < 0) {
      goto LABEL_27;
    }
    v47 = NgxRoutine_420(v44 - v45);
    v48 = v47 + v46;
    *(_QWORD*)(a1 + 248) = v47;
    *(_QWORD*)(a1 + 256) = v47;
    *(_QWORD*)(a1 + 264) = v47 + v46;
    memcpy_plt(v47, v45, v46);
    *(_QWORD*)(a1 + 256) = v48;
  }
  *(_BYTE*)(a1 + 272) = *((_BYTE*)a4 + 80);
  v49 = *a5;
  v50 = a5[2];
  *(_QWORD*)(a1 + 288) = a5[1];
  *(_QWORD*)(a1 + 296) = v50;
  *(_QWORD*)(a1 + 280) = v49;
  v51 = a5[3];
  v52 = a5[4];
  v53 = a5[5];
  v54 = a5[6];
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 320) = v53;
  *(_QWORD*)(a1 + 328) = v54;
  *(_QWORD*)(a1 + 304) = v51;
  *(_QWORD*)(a1 + 312) = v52;
  v56 = a5[7];
  v55 = a5[8];
  v57 = v55 - v56;
  if (v55 != v56) {
    if (v57 < 0) {
      goto LABEL_27;
    }
    v58 = NgxRoutine_420(v55 - v56);
    v59 = v58 + v57;
    *(_QWORD*)(a1 + 336) = v58;
    *(_QWORD*)(a1 + 344) = v58;
    *(_QWORD*)(a1 + 352) = v58 + v57;
    memcpy_plt(v58, v56, v57);
    *(_QWORD*)(a1 + 344) = v59;
  }
  *(_BYTE*)(a1 + 360) = *((_BYTE*)a5 + 80);
  v60 = *a6;
  v61 = a6[2];
  *(_QWORD*)(a1 + 376) = a6[1];
  *(_QWORD*)(a1 + 384) = v61;
  *(_QWORD*)(a1 + 368) = v60;
  v62 = a6[3];
  v63 = a6[4];
  v64 = a6[5];
  v65 = a6[6];
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 408) = v64;
  *(_QWORD*)(a1 + 416) = v65;
  *(_QWORD*)(a1 + 392) = v62;
  *(_QWORD*)(a1 + 400) = v63;
  v67 = a6[7];
  v66 = a6[8];
  v68 = v66 - v67;
  if (v66 != v67) {
    if (v68 < 0) {
      goto LABEL_27;
    }
    v69 = NgxRoutine_420(v66 - v67);
    v70 = v69 + v68;
    *(_QWORD*)(a1 + 424) = v69;
    *(_QWORD*)(a1 + 432) = v69;
    *(_QWORD*)(a1 + 440) = v69 + v68;
    memcpy_plt(v69, v67, v68);
    *(_QWORD*)(a1 + 432) = v70;
  }
  *(_BYTE*)(a1 + 448) = *((_BYTE*)a6 + 80);
  v71 = *a7;
  v72 = a7[2];
  *(_QWORD*)(a1 + 464) = a7[1];
  *(_QWORD*)(a1 + 472) = v72;
  *(_QWORD*)(a1 + 456) = v71;
  v73 = a7[3];
  v74 = a7[4];
  v75 = a7[5];
  v76 = a7[6];
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 496) = v75;
  *(_QWORD*)(a1 + 504) = v76;
  *(_QWORD*)(a1 + 480) = v73;
  *(_QWORD*)(a1 + 488) = v74;
  v78 = a7[7];
  v77 = a7[8];
  v79 = v77 - v78;
  if (v77 != v78) {
    if (v79 < 0) {
    LABEL_27:
      nvidia_dlss_rel_source_common_33410();
    }
    v80 = NgxRoutine_420(v77 - v78);
    v81 = v80 + v79;
    *(_QWORD*)(a1 + 512) = v80;
    *(_QWORD*)(a1 + 520) = v80;
    *(_QWORD*)(a1 + 528) = v80 + v79;
    memcpy_plt(v80, v78, v79);
    *(_QWORD*)(a1 + 520) = v81;
  }
  v82 = *((_BYTE*)a7 + 80);
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_BYTE*)(a1 + 624) = 0;
  *(_BYTE*)(a1 + 536) = v82;
  *(_QWORD*)(a1 + 632) = NgxData_94d270;
  memset_plt(a1 + 640, 0, 176);
  v83 = **(_QWORD**)(a1 + 72);
  *(_DWORD*)(a1 + 824) = *(_QWORD*)(*(_QWORD*)(a1 + 72) + 8LL);
  *(_DWORD*)(a1 + 828) = v83;
  v84 = (_QWORD*)NgxRoutine_420(8);
  *v84 = 0;
  v96 = nullptr;
  v97 = nullptr;
  v98 = 0;
  v99 = 0;
  nvidia_dlss_rel_source_features_dlaa_76570((__int64*)&v96, (__int64)v84,
                                             (__int64)(v84 + 1), 1u);
  v85 = (__int64)v96;
  v86 = v97;
  if (v96 == v97) {
    v90 = 2;
  }
  else {
    v87 = 1;
    v88 = v96;
    do {
      v89 = *v88++;
      v87 *= v89;
    } while (v88 != v97);
    v90 = 2 * v87;
  }
  *(_QWORD*)(a1 + 592) = v90;
  v91 = *(_QWORD*)(a1 + 600);
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  if (v91 != 0) {
    v92 = *(_QWORD*)(a1 + 616);
    *(_QWORD*)(a1 + 608) = v91;
    NgxRoutine_430(v91, v92 - v91);
    v85 = (__int64)v96;
    v86 = v97;
  }
  *(_QWORD*)(a1 + 600) = v85;
  v93 = v98;
  *(_QWORD*)(a1 + 608) = v86;
  v97 = nullptr;
  v98 = 0;
  v96 = nullptr;
  *(_QWORD*)(a1 + 616) = v93;
  *(_BYTE*)(a1 + 624) = v99;
  result = NgxRoutine_430(v84, 8);
  *(_QWORD*)(a1 + 584) = a9;
  *(_QWORD*)(a1 + 544) = a8;
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_782a0(_QWORD* a1)
{
  *a1 = NgxData_94d3f8;
  return NgxRoutine_baf00();
}

__int64 nvidia_dlss_rel_source_features_dlaa_78300(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64 a7, _QWORD* a8,
                                                   _QWORD* a9)
{
  __int64 v9;
  __int64 v10;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  char v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  _QWORD v72[7];
  __int64 v73;
  __int64 v74;
  __int64 v75;
  char v76;
  _QWORD v77[7];
  __int64 v78;
  __int64 v79;
  __int64 v80;
  char v81;
  _QWORD v82[7];
  __int64 v83;
  __int64 v84;
  __int64 v85;
  char v86;
  _QWORD v87[7];
  __int64 v88;
  __int64 v89;
  __int64 v90;
  char v91;
  _QWORD v92[7];
  __int64 v93;
  __int64 v94;
  __int64 v95;
  char v96;
  _QWORD v97[7];
  __int64 v98;
  __int64 v99;
  __int64 v100;
  char v101;

  v9 = *(_QWORD*)(a2 + 32);
  v10 = *(_QWORD*)(a2 + 40);
  v99 = 0;
  v100 = 0;
  v97[4] = v9;
  v97[5] = v10;
  v18 = *(_QWORD*)(a2 + 8);
  v97[0] = *(_QWORD*)a2;
  v97[1] = v18;
  v19 = *(_QWORD*)(a2 + 24);
  v97[2] = *(_QWORD*)(a2 + 16);
  v97[3] = v19;
  v20 = *(_QWORD*)(a2 + 56);
  v97[6] = *(_QWORD*)(a2 + 48);
  v98 = 0;
  v21 = *(_QWORD*)(a2 + 64);
  v22 = v21 - v20;
  if (v21 != v20) {
    if (v22 < 0) {
      goto LABEL_32;
    }
    v23 = NgxRoutine_420(v21 - v20);
    v24 = v23 + v22;
    v98 = v23;
    v100 = v23 + v22;
    memcpy_plt(v23, v20, v22);
    v99 = v24;
  }
  v25 = *(_BYTE*)(a2 + 80);
  v94 = 0;
  v95 = 0;
  v101 = v25;
  v26 = *(_QWORD*)(a3 + 40);
  v92[4] = *(_QWORD*)(a3 + 32);
  v92[5] = v26;
  v27 = *(_QWORD*)(a3 + 8);
  v92[0] = *(_QWORD*)a3;
  v92[1] = v27;
  v28 = *(_QWORD*)(a3 + 24);
  v92[2] = *(_QWORD*)(a3 + 16);
  v92[3] = v28;
  v29 = *(_QWORD*)(a3 + 56);
  v92[6] = *(_QWORD*)(a3 + 48);
  v93 = 0;
  v30 = *(_QWORD*)(a3 + 64);
  v31 = v30 - v29;
  if (v30 != v29) {
    if (v31 < 0) {
      goto LABEL_32;
    }
    v32 = NgxRoutine_420(v30 - v29);
    v33 = v32 + v31;
    v93 = v32;
    v95 = v32 + v31;
    memcpy_plt(v32, v29, v31);
    v94 = v33;
  }
  v34 = *(_BYTE*)(a3 + 80);
  v89 = 0;
  v90 = 0;
  v96 = v34;
  v35 = *(_QWORD*)(a4 + 40);
  v87[4] = *(_QWORD*)(a4 + 32);
  v87[5] = v35;
  v36 = *(_QWORD*)(a4 + 8);
  v87[0] = *(_QWORD*)a4;
  v87[1] = v36;
  v37 = *(_QWORD*)(a4 + 24);
  v87[2] = *(_QWORD*)(a4 + 16);
  v87[3] = v37;
  v38 = *(_QWORD*)(a4 + 56);
  v87[6] = *(_QWORD*)(a4 + 48);
  v88 = 0;
  v39 = *(_QWORD*)(a4 + 64);
  v40 = v39 - v38;
  if (v39 != v38) {
    if (v40 < 0) {
      goto LABEL_32;
    }
    v41 = NgxRoutine_420(v39 - v38);
    v42 = v41 + v40;
    v88 = v41;
    v90 = v41 + v40;
    memcpy_plt(v41, v38, v40);
    v89 = v42;
  }
  v43 = *(_BYTE*)(a4 + 80);
  v84 = 0;
  v85 = 0;
  v91 = v43;
  v44 = *(_QWORD*)(a5 + 40);
  v82[4] = *(_QWORD*)(a5 + 32);
  v82[5] = v44;
  v45 = *(_QWORD*)(a5 + 8);
  v82[0] = *(_QWORD*)a5;
  v82[1] = v45;
  v46 = *(_QWORD*)(a5 + 24);
  v82[2] = *(_QWORD*)(a5 + 16);
  v82[3] = v46;
  v47 = *(_QWORD*)(a5 + 56);
  v82[6] = *(_QWORD*)(a5 + 48);
  v83 = 0;
  v48 = *(_QWORD*)(a5 + 64);
  v49 = v48 - v47;
  if (v48 != v47) {
    if (v49 < 0) {
      goto LABEL_32;
    }
    v50 = NgxRoutine_420(v48 - v47);
    v51 = v50 + v49;
    v83 = v50;
    v85 = v50 + v49;
    memcpy_plt(v50, v47, v49);
    v84 = v51;
  }
  v52 = *(_BYTE*)(a5 + 80);
  v79 = 0;
  v80 = 0;
  v86 = v52;
  v53 = *(_QWORD*)(a6 + 40);
  v77[4] = *(_QWORD*)(a6 + 32);
  v77[5] = v53;
  v54 = *(_QWORD*)(a6 + 8);
  v77[0] = *(_QWORD*)a6;
  v77[1] = v54;
  v55 = *(_QWORD*)(a6 + 24);
  v77[2] = *(_QWORD*)(a6 + 16);
  v77[3] = v55;
  v56 = *(_QWORD*)(a6 + 56);
  v77[6] = *(_QWORD*)(a6 + 48);
  v78 = 0;
  v57 = *(_QWORD*)(a6 + 64);
  v58 = v57 - v56;
  if (v57 != v56) {
    if (v58 < 0) {
      goto LABEL_32;
    }
    v59 = NgxRoutine_420(v57 - v56);
    v60 = v59 + v58;
    v78 = v59;
    v80 = v59 + v58;
    memcpy_plt(v59, v56, v58);
    v79 = v60;
  }
  v61 = *(_BYTE*)(a6 + 80);
  v74 = 0;
  v75 = 0;
  v81 = v61;
  v62 = *(_QWORD*)(a7 + 40);
  v72[4] = *(_QWORD*)(a7 + 32);
  v72[5] = v62;
  v63 = *(_QWORD*)(a7 + 8);
  v72[0] = *(_QWORD*)a7;
  v72[1] = v63;
  v64 = *(_QWORD*)(a7 + 24);
  v72[2] = *(_QWORD*)(a7 + 16);
  v72[3] = v64;
  v65 = *(_QWORD*)(a7 + 56);
  v72[6] = *(_QWORD*)(a7 + 48);
  v73 = 0;
  v66 = *(_QWORD*)(a7 + 64);
  v67 = v66 - v65;
  if (v66 != v65) {
    if (v67 < 0) {
    LABEL_32:
      nvidia_dlss_rel_source_common_33410();
    }
    v68 = NgxRoutine_420(v66 - v65);
    v69 = v68 + v67;
    v73 = v68;
    v75 = v68 + v67;
    memcpy_plt(v68, v65, v67);
    v74 = v69;
  }
  v76 = *(_BYTE*)(a7 + 80);
  nvidia_dlss_rel_source_features_dlaa_78680_alt1(a1, v97, v92, v87, v82, v77,
                                                  v72, *a8, *a9);
  if (v73 != 0) {
    v74 = v73;
    NgxRoutine_430(v73, v75 - v73);
  }
  if (v78 != 0) {
    v79 = v78;
    NgxRoutine_430(v78, v80 - v78);
  }
  if (v83 != 0) {
    v84 = v83;
    NgxRoutine_430(v83, v85 - v83);
  }
  if (v88 != 0) {
    v89 = v88;
    NgxRoutine_430(v88, v90 - v88);
  }
  if (v93 != 0) {
    v94 = v93;
    NgxRoutine_430(v93, v95 - v93);
  }
  if (v98 != 0) {
    v99 = v98;
    NgxRoutine_430(v98, v100 - v98);
  }
  return a1;
}

__int64 nvidia_dlss_rel_source_features_dlaa_78680(__int64 a1, __int64* a2,
                                                   __int64* a3, __int64* a4,
                                                   __int64* a5, __int64* a6,
                                                   __int64* a7, __int64 a8,
                                                   __int64 a9)
{
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
  char v82;
  __int64 v83;
  _QWORD* v84;
  __int64 v85;
  __int64* v86;
  __int64 v87;
  __int64* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 result;
  __int64* v96;
  __int64* v97;
  __int64 v98;
  char v99;

  *(_QWORD*)a1 = NgxData_952b00[0] + 2;
  v16 = *a2;
  v17 = a2[2];
  *(_QWORD*)(a1 + 24) = a2[1];
  *(_QWORD*)(a1 + 32) = v17;
  *(_QWORD*)(a1 + 16) = v16;
  v18 = a2[3];
  v19 = a2[4];
  v20 = a2[5];
  v21 = a2[6];
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 56) = v20;
  *(_QWORD*)(a1 + 64) = v21;
  *(_QWORD*)(a1 + 40) = v18;
  *(_QWORD*)(a1 + 48) = v19;
  v23 = a2[7];
  v22 = a2[8];
  v24 = v22 - v23;
  if (v22 != v23) {
    if (v24 < 0) {
      goto LABEL_27;
    }
    v25 = NgxRoutine_420(v22 - v23);
    v26 = v25 + v24;
    *(_QWORD*)(a1 + 72) = v25;
    *(_QWORD*)(a1 + 80) = v25;
    *(_QWORD*)(a1 + 88) = v25 + v24;
    memcpy_plt(v25, v23, v24);
    *(_QWORD*)(a1 + 80) = v26;
  }
  *(_BYTE*)(a1 + 96) = *((_BYTE*)a2 + 80);
  v27 = *a3;
  v28 = a3[2];
  *(_QWORD*)(a1 + 112) = a3[1];
  *(_QWORD*)(a1 + 120) = v28;
  *(_QWORD*)(a1 + 104) = v27;
  v29 = a3[3];
  v30 = a3[4];
  v31 = a3[5];
  v32 = a3[6];
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 144) = v31;
  *(_QWORD*)(a1 + 152) = v32;
  *(_QWORD*)(a1 + 128) = v29;
  *(_QWORD*)(a1 + 136) = v30;
  v34 = a3[7];
  v33 = a3[8];
  v35 = v33 - v34;
  if (v33 != v34) {
    if (v35 < 0) {
      goto LABEL_27;
    }
    v36 = NgxRoutine_420(v33 - v34);
    v37 = v36 + v35;
    *(_QWORD*)(a1 + 160) = v36;
    *(_QWORD*)(a1 + 168) = v36;
    *(_QWORD*)(a1 + 176) = v36 + v35;
    memcpy_plt(v36, v34, v35);
    *(_QWORD*)(a1 + 168) = v37;
  }
  *(_BYTE*)(a1 + 184) = *((_BYTE*)a3 + 80);
  v38 = *a4;
  v39 = a4[2];
  *(_QWORD*)(a1 + 200) = a4[1];
  *(_QWORD*)(a1 + 208) = v39;
  *(_QWORD*)(a1 + 192) = v38;
  v40 = a4[3];
  v41 = a4[4];
  v42 = a4[5];
  v43 = a4[6];
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 232) = v42;
  *(_QWORD*)(a1 + 240) = v43;
  *(_QWORD*)(a1 + 216) = v40;
  *(_QWORD*)(a1 + 224) = v41;
  v45 = a4[7];
  v44 = a4[8];
  v46 = v44 - v45;
  if (v44 != v45) {
    if (v46 < 0) {
      goto LABEL_27;
    }
    v47 = NgxRoutine_420(v44 - v45);
    v48 = v47 + v46;
    *(_QWORD*)(a1 + 248) = v47;
    *(_QWORD*)(a1 + 256) = v47;
    *(_QWORD*)(a1 + 264) = v47 + v46;
    memcpy_plt(v47, v45, v46);
    *(_QWORD*)(a1 + 256) = v48;
  }
  *(_BYTE*)(a1 + 272) = *((_BYTE*)a4 + 80);
  v49 = *a5;
  v50 = a5[2];
  *(_QWORD*)(a1 + 288) = a5[1];
  *(_QWORD*)(a1 + 296) = v50;
  *(_QWORD*)(a1 + 280) = v49;
  v51 = a5[3];
  v52 = a5[4];
  v53 = a5[5];
  v54 = a5[6];
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 320) = v53;
  *(_QWORD*)(a1 + 328) = v54;
  *(_QWORD*)(a1 + 304) = v51;
  *(_QWORD*)(a1 + 312) = v52;
  v56 = a5[7];
  v55 = a5[8];
  v57 = v55 - v56;
  if (v55 != v56) {
    if (v57 < 0) {
      goto LABEL_27;
    }
    v58 = NgxRoutine_420(v55 - v56);
    v59 = v58 + v57;
    *(_QWORD*)(a1 + 336) = v58;
    *(_QWORD*)(a1 + 344) = v58;
    *(_QWORD*)(a1 + 352) = v58 + v57;
    memcpy_plt(v58, v56, v57);
    *(_QWORD*)(a1 + 344) = v59;
  }
  *(_BYTE*)(a1 + 360) = *((_BYTE*)a5 + 80);
  v60 = *a6;
  v61 = a6[2];
  *(_QWORD*)(a1 + 376) = a6[1];
  *(_QWORD*)(a1 + 384) = v61;
  *(_QWORD*)(a1 + 368) = v60;
  v62 = a6[3];
  v63 = a6[4];
  v64 = a6[5];
  v65 = a6[6];
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 408) = v64;
  *(_QWORD*)(a1 + 416) = v65;
  *(_QWORD*)(a1 + 392) = v62;
  *(_QWORD*)(a1 + 400) = v63;
  v67 = a6[7];
  v66 = a6[8];
  v68 = v66 - v67;
  if (v66 != v67) {
    if (v68 < 0) {
      goto LABEL_27;
    }
    v69 = NgxRoutine_420(v66 - v67);
    v70 = v69 + v68;
    *(_QWORD*)(a1 + 424) = v69;
    *(_QWORD*)(a1 + 432) = v69;
    *(_QWORD*)(a1 + 440) = v69 + v68;
    memcpy_plt(v69, v67, v68);
    *(_QWORD*)(a1 + 432) = v70;
  }
  *(_BYTE*)(a1 + 448) = *((_BYTE*)a6 + 80);
  v71 = *a7;
  v72 = a7[2];
  *(_QWORD*)(a1 + 464) = a7[1];
  *(_QWORD*)(a1 + 472) = v72;
  *(_QWORD*)(a1 + 456) = v71;
  v73 = a7[3];
  v74 = a7[4];
  v75 = a7[5];
  v76 = a7[6];
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 496) = v75;
  *(_QWORD*)(a1 + 504) = v76;
  *(_QWORD*)(a1 + 480) = v73;
  *(_QWORD*)(a1 + 488) = v74;
  v78 = a7[7];
  v77 = a7[8];
  v79 = v77 - v78;
  if (v77 != v78) {
    if (v79 < 0) {
    LABEL_27:
      nvidia_dlss_rel_source_common_33410();
    }
    v80 = NgxRoutine_420(v77 - v78);
    v81 = v80 + v79;
    *(_QWORD*)(a1 + 512) = v80;
    *(_QWORD*)(a1 + 520) = v80;
    *(_QWORD*)(a1 + 528) = v80 + v79;
    memcpy_plt(v80, v78, v79);
    *(_QWORD*)(a1 + 520) = v81;
  }
  v82 = *((_BYTE*)a7 + 80);
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_BYTE*)(a1 + 624) = 0;
  *(_BYTE*)(a1 + 536) = v82;
  *(_QWORD*)(a1 + 632) = NgxData_94d270;
  memset_plt(a1 + 640, 0, 176);
  v83 = **(_QWORD**)(a1 + 72);
  *(_DWORD*)(a1 + 824) = *(_QWORD*)(*(_QWORD*)(a1 + 72) + 8LL);
  *(_DWORD*)(a1 + 828) = v83;
  v84 = (_QWORD*)NgxRoutine_420(8);
  *v84 = 0;
  v96 = nullptr;
  v97 = nullptr;
  v98 = 0;
  v99 = 0;
  nvidia_dlss_rel_source_features_dlaa_76570((__int64*)&v96, (__int64)v84,
                                             (__int64)(v84 + 1), 1u);
  v85 = (__int64)v96;
  v86 = v97;
  if (v96 == v97) {
    v90 = 2;
  }
  else {
    v87 = 1;
    v88 = v96;
    do {
      v89 = *v88++;
      v87 *= v89;
    } while (v88 != v97);
    v90 = 2 * v87;
  }
  *(_QWORD*)(a1 + 592) = v90;
  v91 = *(_QWORD*)(a1 + 600);
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  if (v91 != 0) {
    v92 = *(_QWORD*)(a1 + 616);
    *(_QWORD*)(a1 + 608) = v91;
    NgxRoutine_430(v91, v92 - v91);
    v85 = (__int64)v96;
    v86 = v97;
  }
  *(_QWORD*)(a1 + 600) = v85;
  v93 = v98;
  *(_QWORD*)(a1 + 608) = v86;
  v97 = nullptr;
  v98 = 0;
  v96 = nullptr;
  *(_QWORD*)(a1 + 616) = v93;
  *(_BYTE*)(a1 + 624) = v99;
  result = NgxRoutine_430(v84, 8);
  *(_QWORD*)(a1 + 584) = a9;
  *(_QWORD*)(a1 + 544) = a8;
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_78aa0(_QWORD* a1)
{
  *a1 = NgxData_94d498;
  return NgxRoutine_baf00();
}

__int64 nvidia_dlss_rel_source_features_dlaa_78b00(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64 a7, _QWORD* a8,
                                                   _QWORD* a9)
{
  __int64 v9;
  __int64 v10;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  char v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  _QWORD v72[7];
  __int64 v73;
  __int64 v74;
  __int64 v75;
  char v76;
  _QWORD v77[7];
  __int64 v78;
  __int64 v79;
  __int64 v80;
  char v81;
  _QWORD v82[7];
  __int64 v83;
  __int64 v84;
  __int64 v85;
  char v86;
  _QWORD v87[7];
  __int64 v88;
  __int64 v89;
  __int64 v90;
  char v91;
  _QWORD v92[7];
  __int64 v93;
  __int64 v94;
  __int64 v95;
  char v96;
  _QWORD v97[7];
  __int64 v98;
  __int64 v99;
  __int64 v100;
  char v101;

  v9 = *(_QWORD*)(a2 + 32);
  v10 = *(_QWORD*)(a2 + 40);
  v99 = 0;
  v100 = 0;
  v97[4] = v9;
  v97[5] = v10;
  v18 = *(_QWORD*)(a2 + 8);
  v97[0] = *(_QWORD*)a2;
  v97[1] = v18;
  v19 = *(_QWORD*)(a2 + 24);
  v97[2] = *(_QWORD*)(a2 + 16);
  v97[3] = v19;
  v20 = *(_QWORD*)(a2 + 56);
  v97[6] = *(_QWORD*)(a2 + 48);
  v98 = 0;
  v21 = *(_QWORD*)(a2 + 64);
  v22 = v21 - v20;
  if (v21 != v20) {
    if (v22 < 0) {
      goto LABEL_32;
    }
    v23 = NgxRoutine_420(v21 - v20);
    v24 = v23 + v22;
    v98 = v23;
    v100 = v23 + v22;
    memcpy_plt(v23, v20, v22);
    v99 = v24;
  }
  v25 = *(_BYTE*)(a2 + 80);
  v94 = 0;
  v95 = 0;
  v101 = v25;
  v26 = *(_QWORD*)(a3 + 40);
  v92[4] = *(_QWORD*)(a3 + 32);
  v92[5] = v26;
  v27 = *(_QWORD*)(a3 + 8);
  v92[0] = *(_QWORD*)a3;
  v92[1] = v27;
  v28 = *(_QWORD*)(a3 + 24);
  v92[2] = *(_QWORD*)(a3 + 16);
  v92[3] = v28;
  v29 = *(_QWORD*)(a3 + 56);
  v92[6] = *(_QWORD*)(a3 + 48);
  v93 = 0;
  v30 = *(_QWORD*)(a3 + 64);
  v31 = v30 - v29;
  if (v30 != v29) {
    if (v31 < 0) {
      goto LABEL_32;
    }
    v32 = NgxRoutine_420(v30 - v29);
    v33 = v32 + v31;
    v93 = v32;
    v95 = v32 + v31;
    memcpy_plt(v32, v29, v31);
    v94 = v33;
  }
  v34 = *(_BYTE*)(a3 + 80);
  v89 = 0;
  v90 = 0;
  v96 = v34;
  v35 = *(_QWORD*)(a4 + 40);
  v87[4] = *(_QWORD*)(a4 + 32);
  v87[5] = v35;
  v36 = *(_QWORD*)(a4 + 8);
  v87[0] = *(_QWORD*)a4;
  v87[1] = v36;
  v37 = *(_QWORD*)(a4 + 24);
  v87[2] = *(_QWORD*)(a4 + 16);
  v87[3] = v37;
  v38 = *(_QWORD*)(a4 + 56);
  v87[6] = *(_QWORD*)(a4 + 48);
  v88 = 0;
  v39 = *(_QWORD*)(a4 + 64);
  v40 = v39 - v38;
  if (v39 != v38) {
    if (v40 < 0) {
      goto LABEL_32;
    }
    v41 = NgxRoutine_420(v39 - v38);
    v42 = v41 + v40;
    v88 = v41;
    v90 = v41 + v40;
    memcpy_plt(v41, v38, v40);
    v89 = v42;
  }
  v43 = *(_BYTE*)(a4 + 80);
  v84 = 0;
  v85 = 0;
  v91 = v43;
  v44 = *(_QWORD*)(a5 + 40);
  v82[4] = *(_QWORD*)(a5 + 32);
  v82[5] = v44;
  v45 = *(_QWORD*)(a5 + 8);
  v82[0] = *(_QWORD*)a5;
  v82[1] = v45;
  v46 = *(_QWORD*)(a5 + 24);
  v82[2] = *(_QWORD*)(a5 + 16);
  v82[3] = v46;
  v47 = *(_QWORD*)(a5 + 56);
  v82[6] = *(_QWORD*)(a5 + 48);
  v83 = 0;
  v48 = *(_QWORD*)(a5 + 64);
  v49 = v48 - v47;
  if (v48 != v47) {
    if (v49 < 0) {
      goto LABEL_32;
    }
    v50 = NgxRoutine_420(v48 - v47);
    v51 = v50 + v49;
    v83 = v50;
    v85 = v50 + v49;
    memcpy_plt(v50, v47, v49);
    v84 = v51;
  }
  v52 = *(_BYTE*)(a5 + 80);
  v79 = 0;
  v80 = 0;
  v86 = v52;
  v53 = *(_QWORD*)(a6 + 40);
  v77[4] = *(_QWORD*)(a6 + 32);
  v77[5] = v53;
  v54 = *(_QWORD*)(a6 + 8);
  v77[0] = *(_QWORD*)a6;
  v77[1] = v54;
  v55 = *(_QWORD*)(a6 + 24);
  v77[2] = *(_QWORD*)(a6 + 16);
  v77[3] = v55;
  v56 = *(_QWORD*)(a6 + 56);
  v77[6] = *(_QWORD*)(a6 + 48);
  v78 = 0;
  v57 = *(_QWORD*)(a6 + 64);
  v58 = v57 - v56;
  if (v57 != v56) {
    if (v58 < 0) {
      goto LABEL_32;
    }
    v59 = NgxRoutine_420(v57 - v56);
    v60 = v59 + v58;
    v78 = v59;
    v80 = v59 + v58;
    memcpy_plt(v59, v56, v58);
    v79 = v60;
  }
  v61 = *(_BYTE*)(a6 + 80);
  v74 = 0;
  v75 = 0;
  v81 = v61;
  v62 = *(_QWORD*)(a7 + 40);
  v72[4] = *(_QWORD*)(a7 + 32);
  v72[5] = v62;
  v63 = *(_QWORD*)(a7 + 8);
  v72[0] = *(_QWORD*)a7;
  v72[1] = v63;
  v64 = *(_QWORD*)(a7 + 24);
  v72[2] = *(_QWORD*)(a7 + 16);
  v72[3] = v64;
  v65 = *(_QWORD*)(a7 + 56);
  v72[6] = *(_QWORD*)(a7 + 48);
  v73 = 0;
  v66 = *(_QWORD*)(a7 + 64);
  v67 = v66 - v65;
  if (v66 != v65) {
    if (v67 < 0) {
    LABEL_32:
      nvidia_dlss_rel_source_common_33410();
    }
    v68 = NgxRoutine_420(v66 - v65);
    v69 = v68 + v67;
    v73 = v68;
    v75 = v68 + v67;
    memcpy_plt(v68, v65, v67);
    v74 = v69;
  }
  v76 = *(_BYTE*)(a7 + 80);
  nvidia_dlss_rel_source_features_dlaa_78e80_alt1(a1, v97, v92, v87, v82, v77,
                                                  v72, *a8, *a9);
  if (v73 != 0) {
    v74 = v73;
    NgxRoutine_430(v73, v75 - v73);
  }
  if (v78 != 0) {
    v79 = v78;
    NgxRoutine_430(v78, v80 - v78);
  }
  if (v83 != 0) {
    v84 = v83;
    NgxRoutine_430(v83, v85 - v83);
  }
  if (v88 != 0) {
    v89 = v88;
    NgxRoutine_430(v88, v90 - v88);
  }
  if (v93 != 0) {
    v94 = v93;
    NgxRoutine_430(v93, v95 - v93);
  }
  if (v98 != 0) {
    v99 = v98;
    NgxRoutine_430(v98, v100 - v98);
  }
  return a1;
}

__int64 nvidia_dlss_rel_source_features_dlaa_78e80(__int64 a1, __int64* a2,
                                                   __int64* a3, __int64* a4,
                                                   __int64* a5, __int64* a6,
                                                   __int64* a7, __int64 a8,
                                                   __int64 a9)
{
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
  char v82;
  __int64 v83;
  _QWORD* v84;
  __int64 v85;
  __int64* v86;
  __int64 v87;
  __int64* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 result;
  __int64* v96;
  __int64* v97;
  __int64 v98;
  char v99;

  *(_QWORD*)a1 = NgxData_952b08[0] + 2;
  v16 = *a2;
  v17 = a2[2];
  *(_QWORD*)(a1 + 24) = a2[1];
  *(_QWORD*)(a1 + 32) = v17;
  *(_QWORD*)(a1 + 16) = v16;
  v18 = a2[3];
  v19 = a2[4];
  v20 = a2[5];
  v21 = a2[6];
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 56) = v20;
  *(_QWORD*)(a1 + 64) = v21;
  *(_QWORD*)(a1 + 40) = v18;
  *(_QWORD*)(a1 + 48) = v19;
  v23 = a2[7];
  v22 = a2[8];
  v24 = v22 - v23;
  if (v22 != v23) {
    if (v24 < 0) {
      goto LABEL_27;
    }
    v25 = NgxRoutine_420(v22 - v23);
    v26 = v25 + v24;
    *(_QWORD*)(a1 + 72) = v25;
    *(_QWORD*)(a1 + 80) = v25;
    *(_QWORD*)(a1 + 88) = v25 + v24;
    memcpy_plt(v25, v23, v24);
    *(_QWORD*)(a1 + 80) = v26;
  }
  *(_BYTE*)(a1 + 96) = *((_BYTE*)a2 + 80);
  v27 = *a3;
  v28 = a3[2];
  *(_QWORD*)(a1 + 112) = a3[1];
  *(_QWORD*)(a1 + 120) = v28;
  *(_QWORD*)(a1 + 104) = v27;
  v29 = a3[3];
  v30 = a3[4];
  v31 = a3[5];
  v32 = a3[6];
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 144) = v31;
  *(_QWORD*)(a1 + 152) = v32;
  *(_QWORD*)(a1 + 128) = v29;
  *(_QWORD*)(a1 + 136) = v30;
  v34 = a3[7];
  v33 = a3[8];
  v35 = v33 - v34;
  if (v33 != v34) {
    if (v35 < 0) {
      goto LABEL_27;
    }
    v36 = NgxRoutine_420(v33 - v34);
    v37 = v36 + v35;
    *(_QWORD*)(a1 + 160) = v36;
    *(_QWORD*)(a1 + 168) = v36;
    *(_QWORD*)(a1 + 176) = v36 + v35;
    memcpy_plt(v36, v34, v35);
    *(_QWORD*)(a1 + 168) = v37;
  }
  *(_BYTE*)(a1 + 184) = *((_BYTE*)a3 + 80);
  v38 = *a4;
  v39 = a4[2];
  *(_QWORD*)(a1 + 200) = a4[1];
  *(_QWORD*)(a1 + 208) = v39;
  *(_QWORD*)(a1 + 192) = v38;
  v40 = a4[3];
  v41 = a4[4];
  v42 = a4[5];
  v43 = a4[6];
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 232) = v42;
  *(_QWORD*)(a1 + 240) = v43;
  *(_QWORD*)(a1 + 216) = v40;
  *(_QWORD*)(a1 + 224) = v41;
  v45 = a4[7];
  v44 = a4[8];
  v46 = v44 - v45;
  if (v44 != v45) {
    if (v46 < 0) {
      goto LABEL_27;
    }
    v47 = NgxRoutine_420(v44 - v45);
    v48 = v47 + v46;
    *(_QWORD*)(a1 + 248) = v47;
    *(_QWORD*)(a1 + 256) = v47;
    *(_QWORD*)(a1 + 264) = v47 + v46;
    memcpy_plt(v47, v45, v46);
    *(_QWORD*)(a1 + 256) = v48;
  }
  *(_BYTE*)(a1 + 272) = *((_BYTE*)a4 + 80);
  v49 = *a5;
  v50 = a5[2];
  *(_QWORD*)(a1 + 288) = a5[1];
  *(_QWORD*)(a1 + 296) = v50;
  *(_QWORD*)(a1 + 280) = v49;
  v51 = a5[3];
  v52 = a5[4];
  v53 = a5[5];
  v54 = a5[6];
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 320) = v53;
  *(_QWORD*)(a1 + 328) = v54;
  *(_QWORD*)(a1 + 304) = v51;
  *(_QWORD*)(a1 + 312) = v52;
  v56 = a5[7];
  v55 = a5[8];
  v57 = v55 - v56;
  if (v55 != v56) {
    if (v57 < 0) {
      goto LABEL_27;
    }
    v58 = NgxRoutine_420(v55 - v56);
    v59 = v58 + v57;
    *(_QWORD*)(a1 + 336) = v58;
    *(_QWORD*)(a1 + 344) = v58;
    *(_QWORD*)(a1 + 352) = v58 + v57;
    memcpy_plt(v58, v56, v57);
    *(_QWORD*)(a1 + 344) = v59;
  }
  *(_BYTE*)(a1 + 360) = *((_BYTE*)a5 + 80);
  v60 = *a6;
  v61 = a6[2];
  *(_QWORD*)(a1 + 376) = a6[1];
  *(_QWORD*)(a1 + 384) = v61;
  *(_QWORD*)(a1 + 368) = v60;
  v62 = a6[3];
  v63 = a6[4];
  v64 = a6[5];
  v65 = a6[6];
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 408) = v64;
  *(_QWORD*)(a1 + 416) = v65;
  *(_QWORD*)(a1 + 392) = v62;
  *(_QWORD*)(a1 + 400) = v63;
  v67 = a6[7];
  v66 = a6[8];
  v68 = v66 - v67;
  if (v66 != v67) {
    if (v68 < 0) {
      goto LABEL_27;
    }
    v69 = NgxRoutine_420(v66 - v67);
    v70 = v69 + v68;
    *(_QWORD*)(a1 + 424) = v69;
    *(_QWORD*)(a1 + 432) = v69;
    *(_QWORD*)(a1 + 440) = v69 + v68;
    memcpy_plt(v69, v67, v68);
    *(_QWORD*)(a1 + 432) = v70;
  }
  *(_BYTE*)(a1 + 448) = *((_BYTE*)a6 + 80);
  v71 = *a7;
  v72 = a7[2];
  *(_QWORD*)(a1 + 464) = a7[1];
  *(_QWORD*)(a1 + 472) = v72;
  *(_QWORD*)(a1 + 456) = v71;
  v73 = a7[3];
  v74 = a7[4];
  v75 = a7[5];
  v76 = a7[6];
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 496) = v75;
  *(_QWORD*)(a1 + 504) = v76;
  *(_QWORD*)(a1 + 480) = v73;
  *(_QWORD*)(a1 + 488) = v74;
  v78 = a7[7];
  v77 = a7[8];
  v79 = v77 - v78;
  if (v77 != v78) {
    if (v79 < 0) {
    LABEL_27:
      nvidia_dlss_rel_source_common_33410();
    }
    v80 = NgxRoutine_420(v77 - v78);
    v81 = v80 + v79;
    *(_QWORD*)(a1 + 512) = v80;
    *(_QWORD*)(a1 + 520) = v80;
    *(_QWORD*)(a1 + 528) = v80 + v79;
    memcpy_plt(v80, v78, v79);
    *(_QWORD*)(a1 + 520) = v81;
  }
  v82 = *((_BYTE*)a7 + 80);
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_BYTE*)(a1 + 624) = 0;
  *(_BYTE*)(a1 + 536) = v82;
  *(_QWORD*)(a1 + 632) = NgxData_94d270;
  memset_plt(a1 + 640, 0, 176);
  v83 = **(_QWORD**)(a1 + 72);
  *(_DWORD*)(a1 + 824) = *(_QWORD*)(*(_QWORD*)(a1 + 72) + 8LL);
  *(_DWORD*)(a1 + 828) = v83;
  v84 = (_QWORD*)NgxRoutine_420(8);
  *v84 = 0;
  v96 = nullptr;
  v97 = nullptr;
  v98 = 0;
  v99 = 0;
  nvidia_dlss_rel_source_features_dlaa_76570((__int64*)&v96, (__int64)v84,
                                             (__int64)(v84 + 1), 1u);
  v85 = (__int64)v96;
  v86 = v97;
  if (v96 == v97) {
    v90 = 2;
  }
  else {
    v87 = 1;
    v88 = v96;
    do {
      v89 = *v88++;
      v87 *= v89;
    } while (v88 != v97);
    v90 = 2 * v87;
  }
  *(_QWORD*)(a1 + 592) = v90;
  v91 = *(_QWORD*)(a1 + 600);
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  if (v91 != 0) {
    v92 = *(_QWORD*)(a1 + 616);
    *(_QWORD*)(a1 + 608) = v91;
    NgxRoutine_430(v91, v92 - v91);
    v85 = (__int64)v96;
    v86 = v97;
  }
  *(_QWORD*)(a1 + 600) = v85;
  v93 = v98;
  *(_QWORD*)(a1 + 608) = v86;
  v97 = nullptr;
  v98 = 0;
  v96 = nullptr;
  *(_QWORD*)(a1 + 616) = v93;
  *(_BYTE*)(a1 + 624) = v99;
  result = NgxRoutine_430(v84, 8);
  *(_QWORD*)(a1 + 584) = a9;
  *(_QWORD*)(a1 + 544) = a8;
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_792a0(_QWORD* a1)
{
  *a1 = NgxData_94d538;
  return NgxRoutine_baf00();
}

__int64 nvidia_dlss_rel_source_features_dlaa_79300(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64 a7, _QWORD* a8,
                                                   _QWORD* a9)
{
  __int64 v9;
  __int64 v10;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  char v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  _QWORD v72[7];
  __int64 v73;
  __int64 v74;
  __int64 v75;
  char v76;
  _QWORD v77[7];
  __int64 v78;
  __int64 v79;
  __int64 v80;
  char v81;
  _QWORD v82[7];
  __int64 v83;
  __int64 v84;
  __int64 v85;
  char v86;
  _QWORD v87[7];
  __int64 v88;
  __int64 v89;
  __int64 v90;
  char v91;
  _QWORD v92[7];
  __int64 v93;
  __int64 v94;
  __int64 v95;
  char v96;
  _QWORD v97[7];
  __int64 v98;
  __int64 v99;
  __int64 v100;
  char v101;

  v9 = *(_QWORD*)(a2 + 32);
  v10 = *(_QWORD*)(a2 + 40);
  v99 = 0;
  v100 = 0;
  v97[4] = v9;
  v97[5] = v10;
  v18 = *(_QWORD*)(a2 + 8);
  v97[0] = *(_QWORD*)a2;
  v97[1] = v18;
  v19 = *(_QWORD*)(a2 + 24);
  v97[2] = *(_QWORD*)(a2 + 16);
  v97[3] = v19;
  v20 = *(_QWORD*)(a2 + 56);
  v97[6] = *(_QWORD*)(a2 + 48);
  v98 = 0;
  v21 = *(_QWORD*)(a2 + 64);
  v22 = v21 - v20;
  if (v21 != v20) {
    if (v22 < 0) {
      goto LABEL_32;
    }
    v23 = NgxRoutine_420(v21 - v20);
    v24 = v23 + v22;
    v98 = v23;
    v100 = v23 + v22;
    memcpy_plt(v23, v20, v22);
    v99 = v24;
  }
  v25 = *(_BYTE*)(a2 + 80);
  v94 = 0;
  v95 = 0;
  v101 = v25;
  v26 = *(_QWORD*)(a3 + 40);
  v92[4] = *(_QWORD*)(a3 + 32);
  v92[5] = v26;
  v27 = *(_QWORD*)(a3 + 8);
  v92[0] = *(_QWORD*)a3;
  v92[1] = v27;
  v28 = *(_QWORD*)(a3 + 24);
  v92[2] = *(_QWORD*)(a3 + 16);
  v92[3] = v28;
  v29 = *(_QWORD*)(a3 + 56);
  v92[6] = *(_QWORD*)(a3 + 48);
  v93 = 0;
  v30 = *(_QWORD*)(a3 + 64);
  v31 = v30 - v29;
  if (v30 != v29) {
    if (v31 < 0) {
      goto LABEL_32;
    }
    v32 = NgxRoutine_420(v30 - v29);
    v33 = v32 + v31;
    v93 = v32;
    v95 = v32 + v31;
    memcpy_plt(v32, v29, v31);
    v94 = v33;
  }
  v34 = *(_BYTE*)(a3 + 80);
  v89 = 0;
  v90 = 0;
  v96 = v34;
  v35 = *(_QWORD*)(a4 + 40);
  v87[4] = *(_QWORD*)(a4 + 32);
  v87[5] = v35;
  v36 = *(_QWORD*)(a4 + 8);
  v87[0] = *(_QWORD*)a4;
  v87[1] = v36;
  v37 = *(_QWORD*)(a4 + 24);
  v87[2] = *(_QWORD*)(a4 + 16);
  v87[3] = v37;
  v38 = *(_QWORD*)(a4 + 56);
  v87[6] = *(_QWORD*)(a4 + 48);
  v88 = 0;
  v39 = *(_QWORD*)(a4 + 64);
  v40 = v39 - v38;
  if (v39 != v38) {
    if (v40 < 0) {
      goto LABEL_32;
    }
    v41 = NgxRoutine_420(v39 - v38);
    v42 = v41 + v40;
    v88 = v41;
    v90 = v41 + v40;
    memcpy_plt(v41, v38, v40);
    v89 = v42;
  }
  v43 = *(_BYTE*)(a4 + 80);
  v84 = 0;
  v85 = 0;
  v91 = v43;
  v44 = *(_QWORD*)(a5 + 40);
  v82[4] = *(_QWORD*)(a5 + 32);
  v82[5] = v44;
  v45 = *(_QWORD*)(a5 + 8);
  v82[0] = *(_QWORD*)a5;
  v82[1] = v45;
  v46 = *(_QWORD*)(a5 + 24);
  v82[2] = *(_QWORD*)(a5 + 16);
  v82[3] = v46;
  v47 = *(_QWORD*)(a5 + 56);
  v82[6] = *(_QWORD*)(a5 + 48);
  v83 = 0;
  v48 = *(_QWORD*)(a5 + 64);
  v49 = v48 - v47;
  if (v48 != v47) {
    if (v49 < 0) {
      goto LABEL_32;
    }
    v50 = NgxRoutine_420(v48 - v47);
    v51 = v50 + v49;
    v83 = v50;
    v85 = v50 + v49;
    memcpy_plt(v50, v47, v49);
    v84 = v51;
  }
  v52 = *(_BYTE*)(a5 + 80);
  v79 = 0;
  v80 = 0;
  v86 = v52;
  v53 = *(_QWORD*)(a6 + 40);
  v77[4] = *(_QWORD*)(a6 + 32);
  v77[5] = v53;
  v54 = *(_QWORD*)(a6 + 8);
  v77[0] = *(_QWORD*)a6;
  v77[1] = v54;
  v55 = *(_QWORD*)(a6 + 24);
  v77[2] = *(_QWORD*)(a6 + 16);
  v77[3] = v55;
  v56 = *(_QWORD*)(a6 + 56);
  v77[6] = *(_QWORD*)(a6 + 48);
  v78 = 0;
  v57 = *(_QWORD*)(a6 + 64);
  v58 = v57 - v56;
  if (v57 != v56) {
    if (v58 < 0) {
      goto LABEL_32;
    }
    v59 = NgxRoutine_420(v57 - v56);
    v60 = v59 + v58;
    v78 = v59;
    v80 = v59 + v58;
    memcpy_plt(v59, v56, v58);
    v79 = v60;
  }
  v61 = *(_BYTE*)(a6 + 80);
  v74 = 0;
  v75 = 0;
  v81 = v61;
  v62 = *(_QWORD*)(a7 + 40);
  v72[4] = *(_QWORD*)(a7 + 32);
  v72[5] = v62;
  v63 = *(_QWORD*)(a7 + 8);
  v72[0] = *(_QWORD*)a7;
  v72[1] = v63;
  v64 = *(_QWORD*)(a7 + 24);
  v72[2] = *(_QWORD*)(a7 + 16);
  v72[3] = v64;
  v65 = *(_QWORD*)(a7 + 56);
  v72[6] = *(_QWORD*)(a7 + 48);
  v73 = 0;
  v66 = *(_QWORD*)(a7 + 64);
  v67 = v66 - v65;
  if (v66 != v65) {
    if (v67 < 0) {
    LABEL_32:
      nvidia_dlss_rel_source_common_33410();
    }
    v68 = NgxRoutine_420(v66 - v65);
    v69 = v68 + v67;
    v73 = v68;
    v75 = v68 + v67;
    memcpy_plt(v68, v65, v67);
    v74 = v69;
  }
  v76 = *(_BYTE*)(a7 + 80);
  nvidia_dlss_rel_source_features_dlaa_79680_alt1(a1, v97, v92, v87, v82, v77,
                                                  v72, *a8, *a9);
  if (v73 != 0) {
    v74 = v73;
    NgxRoutine_430(v73, v75 - v73);
  }
  if (v78 != 0) {
    v79 = v78;
    NgxRoutine_430(v78, v80 - v78);
  }
  if (v83 != 0) {
    v84 = v83;
    NgxRoutine_430(v83, v85 - v83);
  }
  if (v88 != 0) {
    v89 = v88;
    NgxRoutine_430(v88, v90 - v88);
  }
  if (v93 != 0) {
    v94 = v93;
    NgxRoutine_430(v93, v95 - v93);
  }
  if (v98 != 0) {
    v99 = v98;
    NgxRoutine_430(v98, v100 - v98);
  }
  return a1;
}

__int64 nvidia_dlss_rel_source_features_dlaa_79680(__int64 a1, __int64* a2,
                                                   __int64* a3, __int64* a4,
                                                   __int64* a5, __int64* a6,
                                                   __int64* a7, __int64 a8,
                                                   __int64 a9)
{
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
  char v82;
  __int64 v83;
  _QWORD* v84;
  __int64 v85;
  __int64* v86;
  __int64 v87;
  __int64* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 result;
  __int64* v96;
  __int64* v97;
  __int64 v98;
  char v99;

  *(_QWORD*)a1 = NgxData_952b10[0] + 2;
  v16 = *a2;
  v17 = a2[2];
  *(_QWORD*)(a1 + 24) = a2[1];
  *(_QWORD*)(a1 + 32) = v17;
  *(_QWORD*)(a1 + 16) = v16;
  v18 = a2[3];
  v19 = a2[4];
  v20 = a2[5];
  v21 = a2[6];
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 56) = v20;
  *(_QWORD*)(a1 + 64) = v21;
  *(_QWORD*)(a1 + 40) = v18;
  *(_QWORD*)(a1 + 48) = v19;
  v23 = a2[7];
  v22 = a2[8];
  v24 = v22 - v23;
  if (v22 != v23) {
    if (v24 < 0) {
      goto LABEL_27;
    }
    v25 = NgxRoutine_420(v22 - v23);
    v26 = v25 + v24;
    *(_QWORD*)(a1 + 72) = v25;
    *(_QWORD*)(a1 + 80) = v25;
    *(_QWORD*)(a1 + 88) = v25 + v24;
    memcpy_plt(v25, v23, v24);
    *(_QWORD*)(a1 + 80) = v26;
  }
  *(_BYTE*)(a1 + 96) = *((_BYTE*)a2 + 80);
  v27 = *a3;
  v28 = a3[2];
  *(_QWORD*)(a1 + 112) = a3[1];
  *(_QWORD*)(a1 + 120) = v28;
  *(_QWORD*)(a1 + 104) = v27;
  v29 = a3[3];
  v30 = a3[4];
  v31 = a3[5];
  v32 = a3[6];
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 144) = v31;
  *(_QWORD*)(a1 + 152) = v32;
  *(_QWORD*)(a1 + 128) = v29;
  *(_QWORD*)(a1 + 136) = v30;
  v34 = a3[7];
  v33 = a3[8];
  v35 = v33 - v34;
  if (v33 != v34) {
    if (v35 < 0) {
      goto LABEL_27;
    }
    v36 = NgxRoutine_420(v33 - v34);
    v37 = v36 + v35;
    *(_QWORD*)(a1 + 160) = v36;
    *(_QWORD*)(a1 + 168) = v36;
    *(_QWORD*)(a1 + 176) = v36 + v35;
    memcpy_plt(v36, v34, v35);
    *(_QWORD*)(a1 + 168) = v37;
  }
  *(_BYTE*)(a1 + 184) = *((_BYTE*)a3 + 80);
  v38 = *a4;
  v39 = a4[2];
  *(_QWORD*)(a1 + 200) = a4[1];
  *(_QWORD*)(a1 + 208) = v39;
  *(_QWORD*)(a1 + 192) = v38;
  v40 = a4[3];
  v41 = a4[4];
  v42 = a4[5];
  v43 = a4[6];
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 232) = v42;
  *(_QWORD*)(a1 + 240) = v43;
  *(_QWORD*)(a1 + 216) = v40;
  *(_QWORD*)(a1 + 224) = v41;
  v45 = a4[7];
  v44 = a4[8];
  v46 = v44 - v45;
  if (v44 != v45) {
    if (v46 < 0) {
      goto LABEL_27;
    }
    v47 = NgxRoutine_420(v44 - v45);
    v48 = v47 + v46;
    *(_QWORD*)(a1 + 248) = v47;
    *(_QWORD*)(a1 + 256) = v47;
    *(_QWORD*)(a1 + 264) = v47 + v46;
    memcpy_plt(v47, v45, v46);
    *(_QWORD*)(a1 + 256) = v48;
  }
  *(_BYTE*)(a1 + 272) = *((_BYTE*)a4 + 80);
  v49 = *a5;
  v50 = a5[2];
  *(_QWORD*)(a1 + 288) = a5[1];
  *(_QWORD*)(a1 + 296) = v50;
  *(_QWORD*)(a1 + 280) = v49;
  v51 = a5[3];
  v52 = a5[4];
  v53 = a5[5];
  v54 = a5[6];
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 320) = v53;
  *(_QWORD*)(a1 + 328) = v54;
  *(_QWORD*)(a1 + 304) = v51;
  *(_QWORD*)(a1 + 312) = v52;
  v56 = a5[7];
  v55 = a5[8];
  v57 = v55 - v56;
  if (v55 != v56) {
    if (v57 < 0) {
      goto LABEL_27;
    }
    v58 = NgxRoutine_420(v55 - v56);
    v59 = v58 + v57;
    *(_QWORD*)(a1 + 336) = v58;
    *(_QWORD*)(a1 + 344) = v58;
    *(_QWORD*)(a1 + 352) = v58 + v57;
    memcpy_plt(v58, v56, v57);
    *(_QWORD*)(a1 + 344) = v59;
  }
  *(_BYTE*)(a1 + 360) = *((_BYTE*)a5 + 80);
  v60 = *a6;
  v61 = a6[2];
  *(_QWORD*)(a1 + 376) = a6[1];
  *(_QWORD*)(a1 + 384) = v61;
  *(_QWORD*)(a1 + 368) = v60;
  v62 = a6[3];
  v63 = a6[4];
  v64 = a6[5];
  v65 = a6[6];
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 408) = v64;
  *(_QWORD*)(a1 + 416) = v65;
  *(_QWORD*)(a1 + 392) = v62;
  *(_QWORD*)(a1 + 400) = v63;
  v67 = a6[7];
  v66 = a6[8];
  v68 = v66 - v67;
  if (v66 != v67) {
    if (v68 < 0) {
      goto LABEL_27;
    }
    v69 = NgxRoutine_420(v66 - v67);
    v70 = v69 + v68;
    *(_QWORD*)(a1 + 424) = v69;
    *(_QWORD*)(a1 + 432) = v69;
    *(_QWORD*)(a1 + 440) = v69 + v68;
    memcpy_plt(v69, v67, v68);
    *(_QWORD*)(a1 + 432) = v70;
  }
  *(_BYTE*)(a1 + 448) = *((_BYTE*)a6 + 80);
  v71 = *a7;
  v72 = a7[2];
  *(_QWORD*)(a1 + 464) = a7[1];
  *(_QWORD*)(a1 + 472) = v72;
  *(_QWORD*)(a1 + 456) = v71;
  v73 = a7[3];
  v74 = a7[4];
  v75 = a7[5];
  v76 = a7[6];
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 496) = v75;
  *(_QWORD*)(a1 + 504) = v76;
  *(_QWORD*)(a1 + 480) = v73;
  *(_QWORD*)(a1 + 488) = v74;
  v78 = a7[7];
  v77 = a7[8];
  v79 = v77 - v78;
  if (v77 != v78) {
    if (v79 < 0) {
    LABEL_27:
      nvidia_dlss_rel_source_common_33410();
    }
    v80 = NgxRoutine_420(v77 - v78);
    v81 = v80 + v79;
    *(_QWORD*)(a1 + 512) = v80;
    *(_QWORD*)(a1 + 520) = v80;
    *(_QWORD*)(a1 + 528) = v80 + v79;
    memcpy_plt(v80, v78, v79);
    *(_QWORD*)(a1 + 520) = v81;
  }
  v82 = *((_BYTE*)a7 + 80);
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_BYTE*)(a1 + 624) = 0;
  *(_BYTE*)(a1 + 536) = v82;
  *(_QWORD*)(a1 + 632) = NgxData_94d270;
  memset_plt(a1 + 640, 0, 176);
  v83 = **(_QWORD**)(a1 + 72);
  *(_DWORD*)(a1 + 824) = *(_QWORD*)(*(_QWORD*)(a1 + 72) + 8LL);
  *(_DWORD*)(a1 + 828) = v83;
  v84 = (_QWORD*)NgxRoutine_420(8);
  *v84 = 0;
  v96 = nullptr;
  v97 = nullptr;
  v98 = 0;
  v99 = 0;
  nvidia_dlss_rel_source_features_dlaa_76570((__int64*)&v96, (__int64)v84,
                                             (__int64)(v84 + 1), 1u);
  v85 = (__int64)v96;
  v86 = v97;
  if (v96 == v97) {
    v90 = 2;
  }
  else {
    v87 = 1;
    v88 = v96;
    do {
      v89 = *v88++;
      v87 *= v89;
    } while (v88 != v97);
    v90 = 2 * v87;
  }
  *(_QWORD*)(a1 + 592) = v90;
  v91 = *(_QWORD*)(a1 + 600);
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  if (v91 != 0) {
    v92 = *(_QWORD*)(a1 + 616);
    *(_QWORD*)(a1 + 608) = v91;
    NgxRoutine_430(v91, v92 - v91);
    v85 = (__int64)v96;
    v86 = v97;
  }
  *(_QWORD*)(a1 + 600) = v85;
  v93 = v98;
  *(_QWORD*)(a1 + 608) = v86;
  v97 = nullptr;
  v98 = 0;
  v96 = nullptr;
  *(_QWORD*)(a1 + 616) = v93;
  *(_BYTE*)(a1 + 624) = v99;
  result = NgxRoutine_430(v84, 8);
  *(_QWORD*)(a1 + 584) = a9;
  *(_QWORD*)(a1 + 544) = a8;
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_79aa0(_QWORD* a1)
{
  *a1 = NgxData_94d5d8;
  return NgxRoutine_baf00();
}

__int64 nvidia_dlss_rel_source_features_dlaa_79b00(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64 a7, _QWORD* a8,
                                                   _QWORD* a9)
{
  __int64 v9;
  __int64 v10;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  char v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  _QWORD v72[7];
  __int64 v73;
  __int64 v74;
  __int64 v75;
  char v76;
  _QWORD v77[7];
  __int64 v78;
  __int64 v79;
  __int64 v80;
  char v81;
  _QWORD v82[7];
  __int64 v83;
  __int64 v84;
  __int64 v85;
  char v86;
  _QWORD v87[7];
  __int64 v88;
  __int64 v89;
  __int64 v90;
  char v91;
  _QWORD v92[7];
  __int64 v93;
  __int64 v94;
  __int64 v95;
  char v96;
  _QWORD v97[7];
  __int64 v98;
  __int64 v99;
  __int64 v100;
  char v101;

  v9 = *(_QWORD*)(a2 + 32);
  v10 = *(_QWORD*)(a2 + 40);
  v99 = 0;
  v100 = 0;
  v97[4] = v9;
  v97[5] = v10;
  v18 = *(_QWORD*)(a2 + 8);
  v97[0] = *(_QWORD*)a2;
  v97[1] = v18;
  v19 = *(_QWORD*)(a2 + 24);
  v97[2] = *(_QWORD*)(a2 + 16);
  v97[3] = v19;
  v20 = *(_QWORD*)(a2 + 56);
  v97[6] = *(_QWORD*)(a2 + 48);
  v98 = 0;
  v21 = *(_QWORD*)(a2 + 64);
  v22 = v21 - v20;
  if (v21 != v20) {
    if (v22 < 0) {
      goto LABEL_32;
    }
    v23 = NgxRoutine_420(v21 - v20);
    v24 = v23 + v22;
    v98 = v23;
    v100 = v23 + v22;
    memcpy_plt(v23, v20, v22);
    v99 = v24;
  }
  v25 = *(_BYTE*)(a2 + 80);
  v94 = 0;
  v95 = 0;
  v101 = v25;
  v26 = *(_QWORD*)(a3 + 40);
  v92[4] = *(_QWORD*)(a3 + 32);
  v92[5] = v26;
  v27 = *(_QWORD*)(a3 + 8);
  v92[0] = *(_QWORD*)a3;
  v92[1] = v27;
  v28 = *(_QWORD*)(a3 + 24);
  v92[2] = *(_QWORD*)(a3 + 16);
  v92[3] = v28;
  v29 = *(_QWORD*)(a3 + 56);
  v92[6] = *(_QWORD*)(a3 + 48);
  v93 = 0;
  v30 = *(_QWORD*)(a3 + 64);
  v31 = v30 - v29;
  if (v30 != v29) {
    if (v31 < 0) {
      goto LABEL_32;
    }
    v32 = NgxRoutine_420(v30 - v29);
    v33 = v32 + v31;
    v93 = v32;
    v95 = v32 + v31;
    memcpy_plt(v32, v29, v31);
    v94 = v33;
  }
  v34 = *(_BYTE*)(a3 + 80);
  v89 = 0;
  v90 = 0;
  v96 = v34;
  v35 = *(_QWORD*)(a4 + 40);
  v87[4] = *(_QWORD*)(a4 + 32);
  v87[5] = v35;
  v36 = *(_QWORD*)(a4 + 8);
  v87[0] = *(_QWORD*)a4;
  v87[1] = v36;
  v37 = *(_QWORD*)(a4 + 24);
  v87[2] = *(_QWORD*)(a4 + 16);
  v87[3] = v37;
  v38 = *(_QWORD*)(a4 + 56);
  v87[6] = *(_QWORD*)(a4 + 48);
  v88 = 0;
  v39 = *(_QWORD*)(a4 + 64);
  v40 = v39 - v38;
  if (v39 != v38) {
    if (v40 < 0) {
      goto LABEL_32;
    }
    v41 = NgxRoutine_420(v39 - v38);
    v42 = v41 + v40;
    v88 = v41;
    v90 = v41 + v40;
    memcpy_plt(v41, v38, v40);
    v89 = v42;
  }
  v43 = *(_BYTE*)(a4 + 80);
  v84 = 0;
  v85 = 0;
  v91 = v43;
  v44 = *(_QWORD*)(a5 + 40);
  v82[4] = *(_QWORD*)(a5 + 32);
  v82[5] = v44;
  v45 = *(_QWORD*)(a5 + 8);
  v82[0] = *(_QWORD*)a5;
  v82[1] = v45;
  v46 = *(_QWORD*)(a5 + 24);
  v82[2] = *(_QWORD*)(a5 + 16);
  v82[3] = v46;
  v47 = *(_QWORD*)(a5 + 56);
  v82[6] = *(_QWORD*)(a5 + 48);
  v83 = 0;
  v48 = *(_QWORD*)(a5 + 64);
  v49 = v48 - v47;
  if (v48 != v47) {
    if (v49 < 0) {
      goto LABEL_32;
    }
    v50 = NgxRoutine_420(v48 - v47);
    v51 = v50 + v49;
    v83 = v50;
    v85 = v50 + v49;
    memcpy_plt(v50, v47, v49);
    v84 = v51;
  }
  v52 = *(_BYTE*)(a5 + 80);
  v79 = 0;
  v80 = 0;
  v86 = v52;
  v53 = *(_QWORD*)(a6 + 40);
  v77[4] = *(_QWORD*)(a6 + 32);
  v77[5] = v53;
  v54 = *(_QWORD*)(a6 + 8);
  v77[0] = *(_QWORD*)a6;
  v77[1] = v54;
  v55 = *(_QWORD*)(a6 + 24);
  v77[2] = *(_QWORD*)(a6 + 16);
  v77[3] = v55;
  v56 = *(_QWORD*)(a6 + 56);
  v77[6] = *(_QWORD*)(a6 + 48);
  v78 = 0;
  v57 = *(_QWORD*)(a6 + 64);
  v58 = v57 - v56;
  if (v57 != v56) {
    if (v58 < 0) {
      goto LABEL_32;
    }
    v59 = NgxRoutine_420(v57 - v56);
    v60 = v59 + v58;
    v78 = v59;
    v80 = v59 + v58;
    memcpy_plt(v59, v56, v58);
    v79 = v60;
  }
  v61 = *(_BYTE*)(a6 + 80);
  v74 = 0;
  v75 = 0;
  v81 = v61;
  v62 = *(_QWORD*)(a7 + 40);
  v72[4] = *(_QWORD*)(a7 + 32);
  v72[5] = v62;
  v63 = *(_QWORD*)(a7 + 8);
  v72[0] = *(_QWORD*)a7;
  v72[1] = v63;
  v64 = *(_QWORD*)(a7 + 24);
  v72[2] = *(_QWORD*)(a7 + 16);
  v72[3] = v64;
  v65 = *(_QWORD*)(a7 + 56);
  v72[6] = *(_QWORD*)(a7 + 48);
  v73 = 0;
  v66 = *(_QWORD*)(a7 + 64);
  v67 = v66 - v65;
  if (v66 != v65) {
    if (v67 < 0) {
    LABEL_32:
      nvidia_dlss_rel_source_common_33410();
    }
    v68 = NgxRoutine_420(v66 - v65);
    v69 = v68 + v67;
    v73 = v68;
    v75 = v68 + v67;
    memcpy_plt(v68, v65, v67);
    v74 = v69;
  }
  v76 = *(_BYTE*)(a7 + 80);
  nvidia_dlss_rel_source_features_dlaa_79e80_alt1(a1, v97, v92, v87, v82, v77,
                                                  v72, *a8, *a9);
  if (v73 != 0) {
    v74 = v73;
    NgxRoutine_430(v73, v75 - v73);
  }
  if (v78 != 0) {
    v79 = v78;
    NgxRoutine_430(v78, v80 - v78);
  }
  if (v83 != 0) {
    v84 = v83;
    NgxRoutine_430(v83, v85 - v83);
  }
  if (v88 != 0) {
    v89 = v88;
    NgxRoutine_430(v88, v90 - v88);
  }
  if (v93 != 0) {
    v94 = v93;
    NgxRoutine_430(v93, v95 - v93);
  }
  if (v98 != 0) {
    v99 = v98;
    NgxRoutine_430(v98, v100 - v98);
  }
  return a1;
}

__int64 nvidia_dlss_rel_source_features_dlaa_79e80(__int64 a1, __int64* a2,
                                                   __int64* a3, __int64* a4,
                                                   __int64* a5, __int64* a6,
                                                   __int64* a7, __int64 a8,
                                                   __int64 a9)
{
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
  char v82;
  __int64 v83;
  _QWORD* v84;
  __int64 v85;
  __int64* v86;
  __int64 v87;
  __int64* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 result;
  __int64* v96;
  __int64* v97;
  __int64 v98;
  char v99;

  *(_QWORD*)a1 = NgxData_952b18[0] + 2;
  v16 = *a2;
  v17 = a2[2];
  *(_QWORD*)(a1 + 24) = a2[1];
  *(_QWORD*)(a1 + 32) = v17;
  *(_QWORD*)(a1 + 16) = v16;
  v18 = a2[3];
  v19 = a2[4];
  v20 = a2[5];
  v21 = a2[6];
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 56) = v20;
  *(_QWORD*)(a1 + 64) = v21;
  *(_QWORD*)(a1 + 40) = v18;
  *(_QWORD*)(a1 + 48) = v19;
  v23 = a2[7];
  v22 = a2[8];
  v24 = v22 - v23;
  if (v22 != v23) {
    if (v24 < 0) {
      goto LABEL_27;
    }
    v25 = NgxRoutine_420(v22 - v23);
    v26 = v25 + v24;
    *(_QWORD*)(a1 + 72) = v25;
    *(_QWORD*)(a1 + 80) = v25;
    *(_QWORD*)(a1 + 88) = v25 + v24;
    memcpy_plt(v25, v23, v24);
    *(_QWORD*)(a1 + 80) = v26;
  }
  *(_BYTE*)(a1 + 96) = *((_BYTE*)a2 + 80);
  v27 = *a3;
  v28 = a3[2];
  *(_QWORD*)(a1 + 112) = a3[1];
  *(_QWORD*)(a1 + 120) = v28;
  *(_QWORD*)(a1 + 104) = v27;
  v29 = a3[3];
  v30 = a3[4];
  v31 = a3[5];
  v32 = a3[6];
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 144) = v31;
  *(_QWORD*)(a1 + 152) = v32;
  *(_QWORD*)(a1 + 128) = v29;
  *(_QWORD*)(a1 + 136) = v30;
  v34 = a3[7];
  v33 = a3[8];
  v35 = v33 - v34;
  if (v33 != v34) {
    if (v35 < 0) {
      goto LABEL_27;
    }
    v36 = NgxRoutine_420(v33 - v34);
    v37 = v36 + v35;
    *(_QWORD*)(a1 + 160) = v36;
    *(_QWORD*)(a1 + 168) = v36;
    *(_QWORD*)(a1 + 176) = v36 + v35;
    memcpy_plt(v36, v34, v35);
    *(_QWORD*)(a1 + 168) = v37;
  }
  *(_BYTE*)(a1 + 184) = *((_BYTE*)a3 + 80);
  v38 = *a4;
  v39 = a4[2];
  *(_QWORD*)(a1 + 200) = a4[1];
  *(_QWORD*)(a1 + 208) = v39;
  *(_QWORD*)(a1 + 192) = v38;
  v40 = a4[3];
  v41 = a4[4];
  v42 = a4[5];
  v43 = a4[6];
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 232) = v42;
  *(_QWORD*)(a1 + 240) = v43;
  *(_QWORD*)(a1 + 216) = v40;
  *(_QWORD*)(a1 + 224) = v41;
  v45 = a4[7];
  v44 = a4[8];
  v46 = v44 - v45;
  if (v44 != v45) {
    if (v46 < 0) {
      goto LABEL_27;
    }
    v47 = NgxRoutine_420(v44 - v45);
    v48 = v47 + v46;
    *(_QWORD*)(a1 + 248) = v47;
    *(_QWORD*)(a1 + 256) = v47;
    *(_QWORD*)(a1 + 264) = v47 + v46;
    memcpy_plt(v47, v45, v46);
    *(_QWORD*)(a1 + 256) = v48;
  }
  *(_BYTE*)(a1 + 272) = *((_BYTE*)a4 + 80);
  v49 = *a5;
  v50 = a5[2];
  *(_QWORD*)(a1 + 288) = a5[1];
  *(_QWORD*)(a1 + 296) = v50;
  *(_QWORD*)(a1 + 280) = v49;
  v51 = a5[3];
  v52 = a5[4];
  v53 = a5[5];
  v54 = a5[6];
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 320) = v53;
  *(_QWORD*)(a1 + 328) = v54;
  *(_QWORD*)(a1 + 304) = v51;
  *(_QWORD*)(a1 + 312) = v52;
  v56 = a5[7];
  v55 = a5[8];
  v57 = v55 - v56;
  if (v55 != v56) {
    if (v57 < 0) {
      goto LABEL_27;
    }
    v58 = NgxRoutine_420(v55 - v56);
    v59 = v58 + v57;
    *(_QWORD*)(a1 + 336) = v58;
    *(_QWORD*)(a1 + 344) = v58;
    *(_QWORD*)(a1 + 352) = v58 + v57;
    memcpy_plt(v58, v56, v57);
    *(_QWORD*)(a1 + 344) = v59;
  }
  *(_BYTE*)(a1 + 360) = *((_BYTE*)a5 + 80);
  v60 = *a6;
  v61 = a6[2];
  *(_QWORD*)(a1 + 376) = a6[1];
  *(_QWORD*)(a1 + 384) = v61;
  *(_QWORD*)(a1 + 368) = v60;
  v62 = a6[3];
  v63 = a6[4];
  v64 = a6[5];
  v65 = a6[6];
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 408) = v64;
  *(_QWORD*)(a1 + 416) = v65;
  *(_QWORD*)(a1 + 392) = v62;
  *(_QWORD*)(a1 + 400) = v63;
  v67 = a6[7];
  v66 = a6[8];
  v68 = v66 - v67;
  if (v66 != v67) {
    if (v68 < 0) {
      goto LABEL_27;
    }
    v69 = NgxRoutine_420(v66 - v67);
    v70 = v69 + v68;
    *(_QWORD*)(a1 + 424) = v69;
    *(_QWORD*)(a1 + 432) = v69;
    *(_QWORD*)(a1 + 440) = v69 + v68;
    memcpy_plt(v69, v67, v68);
    *(_QWORD*)(a1 + 432) = v70;
  }
  *(_BYTE*)(a1 + 448) = *((_BYTE*)a6 + 80);
  v71 = *a7;
  v72 = a7[2];
  *(_QWORD*)(a1 + 464) = a7[1];
  *(_QWORD*)(a1 + 472) = v72;
  *(_QWORD*)(a1 + 456) = v71;
  v73 = a7[3];
  v74 = a7[4];
  v75 = a7[5];
  v76 = a7[6];
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 496) = v75;
  *(_QWORD*)(a1 + 504) = v76;
  *(_QWORD*)(a1 + 480) = v73;
  *(_QWORD*)(a1 + 488) = v74;
  v78 = a7[7];
  v77 = a7[8];
  v79 = v77 - v78;
  if (v77 != v78) {
    if (v79 < 0) {
    LABEL_27:
      nvidia_dlss_rel_source_common_33410();
    }
    v80 = NgxRoutine_420(v77 - v78);
    v81 = v80 + v79;
    *(_QWORD*)(a1 + 512) = v80;
    *(_QWORD*)(a1 + 520) = v80;
    *(_QWORD*)(a1 + 528) = v80 + v79;
    memcpy_plt(v80, v78, v79);
    *(_QWORD*)(a1 + 520) = v81;
  }
  v82 = *((_BYTE*)a7 + 80);
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_BYTE*)(a1 + 624) = 0;
  *(_BYTE*)(a1 + 536) = v82;
  *(_QWORD*)(a1 + 632) = NgxData_94d270;
  memset_plt(a1 + 640, 0, 176);
  v83 = **(_QWORD**)(a1 + 160);
  *(_DWORD*)(a1 + 824) = *(_QWORD*)(*(_QWORD*)(a1 + 160) + 8LL);
  *(_DWORD*)(a1 + 828) = v83;
  v84 = (_QWORD*)NgxRoutine_420(8);
  *v84 = 0;
  v96 = nullptr;
  v97 = nullptr;
  v98 = 0;
  v99 = 0;
  nvidia_dlss_rel_source_features_dlaa_76570((__int64*)&v96, (__int64)v84,
                                             (__int64)(v84 + 1), 1u);
  v85 = (__int64)v96;
  v86 = v97;
  if (v96 == v97) {
    v90 = 2;
  }
  else {
    v87 = 1;
    v88 = v96;
    do {
      v89 = *v88++;
      v87 *= v89;
    } while (v88 != v97);
    v90 = 2 * v87;
  }
  *(_QWORD*)(a1 + 592) = v90;
  v91 = *(_QWORD*)(a1 + 600);
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  if (v91 != 0) {
    v92 = *(_QWORD*)(a1 + 616);
    *(_QWORD*)(a1 + 608) = v91;
    NgxRoutine_430(v91, v92 - v91);
    v85 = (__int64)v96;
    v86 = v97;
  }
  *(_QWORD*)(a1 + 600) = v85;
  v93 = v98;
  *(_QWORD*)(a1 + 608) = v86;
  v97 = nullptr;
  v98 = 0;
  v96 = nullptr;
  *(_QWORD*)(a1 + 616) = v93;
  *(_BYTE*)(a1 + 624) = v99;
  result = NgxRoutine_430(v84, 8);
  *(_QWORD*)(a1 + 584) = a9;
  *(_QWORD*)(a1 + 544) = a8;
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_7a2a0(_QWORD* a1)
{
  *a1 = NgxData_94d678;
  return NgxRoutine_baf00();
}

__int64 nvidia_dlss_rel_source_features_dlaa_7a300(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64 a7, _QWORD* a8,
                                                   _QWORD* a9)
{
  __int64 v9;
  __int64 v10;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  char v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  _QWORD v72[7];
  __int64 v73;
  __int64 v74;
  __int64 v75;
  char v76;
  _QWORD v77[7];
  __int64 v78;
  __int64 v79;
  __int64 v80;
  char v81;
  _QWORD v82[7];
  __int64 v83;
  __int64 v84;
  __int64 v85;
  char v86;
  _QWORD v87[7];
  __int64 v88;
  __int64 v89;
  __int64 v90;
  char v91;
  _QWORD v92[7];
  __int64 v93;
  __int64 v94;
  __int64 v95;
  char v96;
  _QWORD v97[7];
  __int64 v98;
  __int64 v99;
  __int64 v100;
  char v101;

  v9 = *(_QWORD*)(a2 + 32);
  v10 = *(_QWORD*)(a2 + 40);
  v99 = 0;
  v100 = 0;
  v97[4] = v9;
  v97[5] = v10;
  v18 = *(_QWORD*)(a2 + 8);
  v97[0] = *(_QWORD*)a2;
  v97[1] = v18;
  v19 = *(_QWORD*)(a2 + 24);
  v97[2] = *(_QWORD*)(a2 + 16);
  v97[3] = v19;
  v20 = *(_QWORD*)(a2 + 56);
  v97[6] = *(_QWORD*)(a2 + 48);
  v98 = 0;
  v21 = *(_QWORD*)(a2 + 64);
  v22 = v21 - v20;
  if (v21 != v20) {
    if (v22 < 0) {
      goto LABEL_32;
    }
    v23 = NgxRoutine_420(v21 - v20);
    v24 = v23 + v22;
    v98 = v23;
    v100 = v23 + v22;
    memcpy_plt(v23, v20, v22);
    v99 = v24;
  }
  v25 = *(_BYTE*)(a2 + 80);
  v94 = 0;
  v95 = 0;
  v101 = v25;
  v26 = *(_QWORD*)(a3 + 40);
  v92[4] = *(_QWORD*)(a3 + 32);
  v92[5] = v26;
  v27 = *(_QWORD*)(a3 + 8);
  v92[0] = *(_QWORD*)a3;
  v92[1] = v27;
  v28 = *(_QWORD*)(a3 + 24);
  v92[2] = *(_QWORD*)(a3 + 16);
  v92[3] = v28;
  v29 = *(_QWORD*)(a3 + 56);
  v92[6] = *(_QWORD*)(a3 + 48);
  v93 = 0;
  v30 = *(_QWORD*)(a3 + 64);
  v31 = v30 - v29;
  if (v30 != v29) {
    if (v31 < 0) {
      goto LABEL_32;
    }
    v32 = NgxRoutine_420(v30 - v29);
    v33 = v32 + v31;
    v93 = v32;
    v95 = v32 + v31;
    memcpy_plt(v32, v29, v31);
    v94 = v33;
  }
  v34 = *(_BYTE*)(a3 + 80);
  v89 = 0;
  v90 = 0;
  v96 = v34;
  v35 = *(_QWORD*)(a4 + 40);
  v87[4] = *(_QWORD*)(a4 + 32);
  v87[5] = v35;
  v36 = *(_QWORD*)(a4 + 8);
  v87[0] = *(_QWORD*)a4;
  v87[1] = v36;
  v37 = *(_QWORD*)(a4 + 24);
  v87[2] = *(_QWORD*)(a4 + 16);
  v87[3] = v37;
  v38 = *(_QWORD*)(a4 + 56);
  v87[6] = *(_QWORD*)(a4 + 48);
  v88 = 0;
  v39 = *(_QWORD*)(a4 + 64);
  v40 = v39 - v38;
  if (v39 != v38) {
    if (v40 < 0) {
      goto LABEL_32;
    }
    v41 = NgxRoutine_420(v39 - v38);
    v42 = v41 + v40;
    v88 = v41;
    v90 = v41 + v40;
    memcpy_plt(v41, v38, v40);
    v89 = v42;
  }
  v43 = *(_BYTE*)(a4 + 80);
  v84 = 0;
  v85 = 0;
  v91 = v43;
  v44 = *(_QWORD*)(a5 + 40);
  v82[4] = *(_QWORD*)(a5 + 32);
  v82[5] = v44;
  v45 = *(_QWORD*)(a5 + 8);
  v82[0] = *(_QWORD*)a5;
  v82[1] = v45;
  v46 = *(_QWORD*)(a5 + 24);
  v82[2] = *(_QWORD*)(a5 + 16);
  v82[3] = v46;
  v47 = *(_QWORD*)(a5 + 56);
  v82[6] = *(_QWORD*)(a5 + 48);
  v83 = 0;
  v48 = *(_QWORD*)(a5 + 64);
  v49 = v48 - v47;
  if (v48 != v47) {
    if (v49 < 0) {
      goto LABEL_32;
    }
    v50 = NgxRoutine_420(v48 - v47);
    v51 = v50 + v49;
    v83 = v50;
    v85 = v50 + v49;
    memcpy_plt(v50, v47, v49);
    v84 = v51;
  }
  v52 = *(_BYTE*)(a5 + 80);
  v79 = 0;
  v80 = 0;
  v86 = v52;
  v53 = *(_QWORD*)(a6 + 40);
  v77[4] = *(_QWORD*)(a6 + 32);
  v77[5] = v53;
  v54 = *(_QWORD*)(a6 + 8);
  v77[0] = *(_QWORD*)a6;
  v77[1] = v54;
  v55 = *(_QWORD*)(a6 + 24);
  v77[2] = *(_QWORD*)(a6 + 16);
  v77[3] = v55;
  v56 = *(_QWORD*)(a6 + 56);
  v77[6] = *(_QWORD*)(a6 + 48);
  v78 = 0;
  v57 = *(_QWORD*)(a6 + 64);
  v58 = v57 - v56;
  if (v57 != v56) {
    if (v58 < 0) {
      goto LABEL_32;
    }
    v59 = NgxRoutine_420(v57 - v56);
    v60 = v59 + v58;
    v78 = v59;
    v80 = v59 + v58;
    memcpy_plt(v59, v56, v58);
    v79 = v60;
  }
  v61 = *(_BYTE*)(a6 + 80);
  v74 = 0;
  v75 = 0;
  v81 = v61;
  v62 = *(_QWORD*)(a7 + 40);
  v72[4] = *(_QWORD*)(a7 + 32);
  v72[5] = v62;
  v63 = *(_QWORD*)(a7 + 8);
  v72[0] = *(_QWORD*)a7;
  v72[1] = v63;
  v64 = *(_QWORD*)(a7 + 24);
  v72[2] = *(_QWORD*)(a7 + 16);
  v72[3] = v64;
  v65 = *(_QWORD*)(a7 + 56);
  v72[6] = *(_QWORD*)(a7 + 48);
  v73 = 0;
  v66 = *(_QWORD*)(a7 + 64);
  v67 = v66 - v65;
  if (v66 != v65) {
    if (v67 < 0) {
    LABEL_32:
      nvidia_dlss_rel_source_common_33410();
    }
    v68 = NgxRoutine_420(v66 - v65);
    v69 = v68 + v67;
    v73 = v68;
    v75 = v68 + v67;
    memcpy_plt(v68, v65, v67);
    v74 = v69;
  }
  v76 = *(_BYTE*)(a7 + 80);
  nvidia_dlss_rel_source_features_dlaa_7a680_alt1(a1, v97, v92, v87, v82, v77,
                                                  v72, *a8, *a9);
  if (v73 != 0) {
    v74 = v73;
    NgxRoutine_430(v73, v75 - v73);
  }
  if (v78 != 0) {
    v79 = v78;
    NgxRoutine_430(v78, v80 - v78);
  }
  if (v83 != 0) {
    v84 = v83;
    NgxRoutine_430(v83, v85 - v83);
  }
  if (v88 != 0) {
    v89 = v88;
    NgxRoutine_430(v88, v90 - v88);
  }
  if (v93 != 0) {
    v94 = v93;
    NgxRoutine_430(v93, v95 - v93);
  }
  if (v98 != 0) {
    v99 = v98;
    NgxRoutine_430(v98, v100 - v98);
  }
  return a1;
}

__int64 nvidia_dlss_rel_source_features_dlaa_7a680(__int64 a1, __int64* a2,
                                                   __int64* a3, __int64* a4,
                                                   __int64* a5, __int64* a6,
                                                   __int64* a7, __int64 a8,
                                                   __int64 a9)
{
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
  char v82;
  __int64 v83;
  _QWORD* v84;
  __int64 v85;
  __int64* v86;
  __int64 v87;
  __int64* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 result;
  __int64* v96;
  __int64* v97;
  __int64 v98;
  char v99;

  *(_QWORD*)a1 = NgxData_952b20[0] + 2;
  v16 = *a2;
  v17 = a2[2];
  *(_QWORD*)(a1 + 24) = a2[1];
  *(_QWORD*)(a1 + 32) = v17;
  *(_QWORD*)(a1 + 16) = v16;
  v18 = a2[3];
  v19 = a2[4];
  v20 = a2[5];
  v21 = a2[6];
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 56) = v20;
  *(_QWORD*)(a1 + 64) = v21;
  *(_QWORD*)(a1 + 40) = v18;
  *(_QWORD*)(a1 + 48) = v19;
  v23 = a2[7];
  v22 = a2[8];
  v24 = v22 - v23;
  if (v22 != v23) {
    if (v24 < 0) {
      goto LABEL_27;
    }
    v25 = NgxRoutine_420(v22 - v23);
    v26 = v25 + v24;
    *(_QWORD*)(a1 + 72) = v25;
    *(_QWORD*)(a1 + 80) = v25;
    *(_QWORD*)(a1 + 88) = v25 + v24;
    memcpy_plt(v25, v23, v24);
    *(_QWORD*)(a1 + 80) = v26;
  }
  *(_BYTE*)(a1 + 96) = *((_BYTE*)a2 + 80);
  v27 = *a3;
  v28 = a3[2];
  *(_QWORD*)(a1 + 112) = a3[1];
  *(_QWORD*)(a1 + 120) = v28;
  *(_QWORD*)(a1 + 104) = v27;
  v29 = a3[3];
  v30 = a3[4];
  v31 = a3[5];
  v32 = a3[6];
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 144) = v31;
  *(_QWORD*)(a1 + 152) = v32;
  *(_QWORD*)(a1 + 128) = v29;
  *(_QWORD*)(a1 + 136) = v30;
  v34 = a3[7];
  v33 = a3[8];
  v35 = v33 - v34;
  if (v33 != v34) {
    if (v35 < 0) {
      goto LABEL_27;
    }
    v36 = NgxRoutine_420(v33 - v34);
    v37 = v36 + v35;
    *(_QWORD*)(a1 + 160) = v36;
    *(_QWORD*)(a1 + 168) = v36;
    *(_QWORD*)(a1 + 176) = v36 + v35;
    memcpy_plt(v36, v34, v35);
    *(_QWORD*)(a1 + 168) = v37;
  }
  *(_BYTE*)(a1 + 184) = *((_BYTE*)a3 + 80);
  v38 = *a4;
  v39 = a4[2];
  *(_QWORD*)(a1 + 200) = a4[1];
  *(_QWORD*)(a1 + 208) = v39;
  *(_QWORD*)(a1 + 192) = v38;
  v40 = a4[3];
  v41 = a4[4];
  v42 = a4[5];
  v43 = a4[6];
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 232) = v42;
  *(_QWORD*)(a1 + 240) = v43;
  *(_QWORD*)(a1 + 216) = v40;
  *(_QWORD*)(a1 + 224) = v41;
  v45 = a4[7];
  v44 = a4[8];
  v46 = v44 - v45;
  if (v44 != v45) {
    if (v46 < 0) {
      goto LABEL_27;
    }
    v47 = NgxRoutine_420(v44 - v45);
    v48 = v47 + v46;
    *(_QWORD*)(a1 + 248) = v47;
    *(_QWORD*)(a1 + 256) = v47;
    *(_QWORD*)(a1 + 264) = v47 + v46;
    memcpy_plt(v47, v45, v46);
    *(_QWORD*)(a1 + 256) = v48;
  }
  *(_BYTE*)(a1 + 272) = *((_BYTE*)a4 + 80);
  v49 = *a5;
  v50 = a5[2];
  *(_QWORD*)(a1 + 288) = a5[1];
  *(_QWORD*)(a1 + 296) = v50;
  *(_QWORD*)(a1 + 280) = v49;
  v51 = a5[3];
  v52 = a5[4];
  v53 = a5[5];
  v54 = a5[6];
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 320) = v53;
  *(_QWORD*)(a1 + 328) = v54;
  *(_QWORD*)(a1 + 304) = v51;
  *(_QWORD*)(a1 + 312) = v52;
  v56 = a5[7];
  v55 = a5[8];
  v57 = v55 - v56;
  if (v55 != v56) {
    if (v57 < 0) {
      goto LABEL_27;
    }
    v58 = NgxRoutine_420(v55 - v56);
    v59 = v58 + v57;
    *(_QWORD*)(a1 + 336) = v58;
    *(_QWORD*)(a1 + 344) = v58;
    *(_QWORD*)(a1 + 352) = v58 + v57;
    memcpy_plt(v58, v56, v57);
    *(_QWORD*)(a1 + 344) = v59;
  }
  *(_BYTE*)(a1 + 360) = *((_BYTE*)a5 + 80);
  v60 = *a6;
  v61 = a6[2];
  *(_QWORD*)(a1 + 376) = a6[1];
  *(_QWORD*)(a1 + 384) = v61;
  *(_QWORD*)(a1 + 368) = v60;
  v62 = a6[3];
  v63 = a6[4];
  v64 = a6[5];
  v65 = a6[6];
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 408) = v64;
  *(_QWORD*)(a1 + 416) = v65;
  *(_QWORD*)(a1 + 392) = v62;
  *(_QWORD*)(a1 + 400) = v63;
  v67 = a6[7];
  v66 = a6[8];
  v68 = v66 - v67;
  if (v66 != v67) {
    if (v68 < 0) {
      goto LABEL_27;
    }
    v69 = NgxRoutine_420(v66 - v67);
    v70 = v69 + v68;
    *(_QWORD*)(a1 + 424) = v69;
    *(_QWORD*)(a1 + 432) = v69;
    *(_QWORD*)(a1 + 440) = v69 + v68;
    memcpy_plt(v69, v67, v68);
    *(_QWORD*)(a1 + 432) = v70;
  }
  *(_BYTE*)(a1 + 448) = *((_BYTE*)a6 + 80);
  v71 = *a7;
  v72 = a7[2];
  *(_QWORD*)(a1 + 464) = a7[1];
  *(_QWORD*)(a1 + 472) = v72;
  *(_QWORD*)(a1 + 456) = v71;
  v73 = a7[3];
  v74 = a7[4];
  v75 = a7[5];
  v76 = a7[6];
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 496) = v75;
  *(_QWORD*)(a1 + 504) = v76;
  *(_QWORD*)(a1 + 480) = v73;
  *(_QWORD*)(a1 + 488) = v74;
  v78 = a7[7];
  v77 = a7[8];
  v79 = v77 - v78;
  if (v77 != v78) {
    if (v79 < 0) {
    LABEL_27:
      nvidia_dlss_rel_source_common_33410();
    }
    v80 = NgxRoutine_420(v77 - v78);
    v81 = v80 + v79;
    *(_QWORD*)(a1 + 512) = v80;
    *(_QWORD*)(a1 + 520) = v80;
    *(_QWORD*)(a1 + 528) = v80 + v79;
    memcpy_plt(v80, v78, v79);
    *(_QWORD*)(a1 + 520) = v81;
  }
  v82 = *((_BYTE*)a7 + 80);
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_BYTE*)(a1 + 624) = 0;
  *(_BYTE*)(a1 + 536) = v82;
  *(_QWORD*)(a1 + 632) = NgxData_94d270;
  memset_plt(a1 + 640, 0, 176);
  v83 = **(_QWORD**)(a1 + 160);
  *(_DWORD*)(a1 + 824) = *(_QWORD*)(*(_QWORD*)(a1 + 160) + 8LL);
  *(_DWORD*)(a1 + 828) = v83;
  v84 = (_QWORD*)NgxRoutine_420(8);
  *v84 = 0;
  v96 = nullptr;
  v97 = nullptr;
  v98 = 0;
  v99 = 0;
  nvidia_dlss_rel_source_features_dlaa_76570((__int64*)&v96, (__int64)v84,
                                             (__int64)(v84 + 1), 1u);
  v85 = (__int64)v96;
  v86 = v97;
  if (v96 == v97) {
    v90 = 2;
  }
  else {
    v87 = 1;
    v88 = v96;
    do {
      v89 = *v88++;
      v87 *= v89;
    } while (v88 != v97);
    v90 = 2 * v87;
  }
  *(_QWORD*)(a1 + 592) = v90;
  v91 = *(_QWORD*)(a1 + 600);
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  if (v91 != 0) {
    v92 = *(_QWORD*)(a1 + 616);
    *(_QWORD*)(a1 + 608) = v91;
    NgxRoutine_430(v91, v92 - v91);
    v85 = (__int64)v96;
    v86 = v97;
  }
  *(_QWORD*)(a1 + 600) = v85;
  v93 = v98;
  *(_QWORD*)(a1 + 608) = v86;
  v97 = nullptr;
  v98 = 0;
  v96 = nullptr;
  *(_QWORD*)(a1 + 616) = v93;
  *(_BYTE*)(a1 + 624) = v99;
  result = NgxRoutine_430(v84, 8);
  *(_QWORD*)(a1 + 584) = a9;
  *(_QWORD*)(a1 + 544) = a8;
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_7aaa0(_QWORD* a1)
{
  *a1 = NgxData_94d718;
  return NgxRoutine_baf00();
}

__int64 nvidia_dlss_rel_source_features_dlaa_7ab00(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64 a7, _QWORD* a8,
                                                   _QWORD* a9)
{
  __int64 v9;
  __int64 v10;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  char v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  _QWORD v72[7];
  __int64 v73;
  __int64 v74;
  __int64 v75;
  char v76;
  _QWORD v77[7];
  __int64 v78;
  __int64 v79;
  __int64 v80;
  char v81;
  _QWORD v82[7];
  __int64 v83;
  __int64 v84;
  __int64 v85;
  char v86;
  _QWORD v87[7];
  __int64 v88;
  __int64 v89;
  __int64 v90;
  char v91;
  _QWORD v92[7];
  __int64 v93;
  __int64 v94;
  __int64 v95;
  char v96;
  _QWORD v97[7];
  __int64 v98;
  __int64 v99;
  __int64 v100;
  char v101;

  v9 = *(_QWORD*)(a2 + 32);
  v10 = *(_QWORD*)(a2 + 40);
  v99 = 0;
  v100 = 0;
  v97[4] = v9;
  v97[5] = v10;
  v18 = *(_QWORD*)(a2 + 8);
  v97[0] = *(_QWORD*)a2;
  v97[1] = v18;
  v19 = *(_QWORD*)(a2 + 24);
  v97[2] = *(_QWORD*)(a2 + 16);
  v97[3] = v19;
  v20 = *(_QWORD*)(a2 + 56);
  v97[6] = *(_QWORD*)(a2 + 48);
  v98 = 0;
  v21 = *(_QWORD*)(a2 + 64);
  v22 = v21 - v20;
  if (v21 != v20) {
    if (v22 < 0) {
      goto LABEL_32;
    }
    v23 = NgxRoutine_420(v21 - v20);
    v24 = v23 + v22;
    v98 = v23;
    v100 = v23 + v22;
    memcpy_plt(v23, v20, v22);
    v99 = v24;
  }
  v25 = *(_BYTE*)(a2 + 80);
  v94 = 0;
  v95 = 0;
  v101 = v25;
  v26 = *(_QWORD*)(a3 + 40);
  v92[4] = *(_QWORD*)(a3 + 32);
  v92[5] = v26;
  v27 = *(_QWORD*)(a3 + 8);
  v92[0] = *(_QWORD*)a3;
  v92[1] = v27;
  v28 = *(_QWORD*)(a3 + 24);
  v92[2] = *(_QWORD*)(a3 + 16);
  v92[3] = v28;
  v29 = *(_QWORD*)(a3 + 56);
  v92[6] = *(_QWORD*)(a3 + 48);
  v93 = 0;
  v30 = *(_QWORD*)(a3 + 64);
  v31 = v30 - v29;
  if (v30 != v29) {
    if (v31 < 0) {
      goto LABEL_32;
    }
    v32 = NgxRoutine_420(v30 - v29);
    v33 = v32 + v31;
    v93 = v32;
    v95 = v32 + v31;
    memcpy_plt(v32, v29, v31);
    v94 = v33;
  }
  v34 = *(_BYTE*)(a3 + 80);
  v89 = 0;
  v90 = 0;
  v96 = v34;
  v35 = *(_QWORD*)(a4 + 40);
  v87[4] = *(_QWORD*)(a4 + 32);
  v87[5] = v35;
  v36 = *(_QWORD*)(a4 + 8);
  v87[0] = *(_QWORD*)a4;
  v87[1] = v36;
  v37 = *(_QWORD*)(a4 + 24);
  v87[2] = *(_QWORD*)(a4 + 16);
  v87[3] = v37;
  v38 = *(_QWORD*)(a4 + 56);
  v87[6] = *(_QWORD*)(a4 + 48);
  v88 = 0;
  v39 = *(_QWORD*)(a4 + 64);
  v40 = v39 - v38;
  if (v39 != v38) {
    if (v40 < 0) {
      goto LABEL_32;
    }
    v41 = NgxRoutine_420(v39 - v38);
    v42 = v41 + v40;
    v88 = v41;
    v90 = v41 + v40;
    memcpy_plt(v41, v38, v40);
    v89 = v42;
  }
  v43 = *(_BYTE*)(a4 + 80);
  v84 = 0;
  v85 = 0;
  v91 = v43;
  v44 = *(_QWORD*)(a5 + 40);
  v82[4] = *(_QWORD*)(a5 + 32);
  v82[5] = v44;
  v45 = *(_QWORD*)(a5 + 8);
  v82[0] = *(_QWORD*)a5;
  v82[1] = v45;
  v46 = *(_QWORD*)(a5 + 24);
  v82[2] = *(_QWORD*)(a5 + 16);
  v82[3] = v46;
  v47 = *(_QWORD*)(a5 + 56);
  v82[6] = *(_QWORD*)(a5 + 48);
  v83 = 0;
  v48 = *(_QWORD*)(a5 + 64);
  v49 = v48 - v47;
  if (v48 != v47) {
    if (v49 < 0) {
      goto LABEL_32;
    }
    v50 = NgxRoutine_420(v48 - v47);
    v51 = v50 + v49;
    v83 = v50;
    v85 = v50 + v49;
    memcpy_plt(v50, v47, v49);
    v84 = v51;
  }
  v52 = *(_BYTE*)(a5 + 80);
  v79 = 0;
  v80 = 0;
  v86 = v52;
  v53 = *(_QWORD*)(a6 + 40);
  v77[4] = *(_QWORD*)(a6 + 32);
  v77[5] = v53;
  v54 = *(_QWORD*)(a6 + 8);
  v77[0] = *(_QWORD*)a6;
  v77[1] = v54;
  v55 = *(_QWORD*)(a6 + 24);
  v77[2] = *(_QWORD*)(a6 + 16);
  v77[3] = v55;
  v56 = *(_QWORD*)(a6 + 56);
  v77[6] = *(_QWORD*)(a6 + 48);
  v78 = 0;
  v57 = *(_QWORD*)(a6 + 64);
  v58 = v57 - v56;
  if (v57 != v56) {
    if (v58 < 0) {
      goto LABEL_32;
    }
    v59 = NgxRoutine_420(v57 - v56);
    v60 = v59 + v58;
    v78 = v59;
    v80 = v59 + v58;
    memcpy_plt(v59, v56, v58);
    v79 = v60;
  }
  v61 = *(_BYTE*)(a6 + 80);
  v74 = 0;
  v75 = 0;
  v81 = v61;
  v62 = *(_QWORD*)(a7 + 40);
  v72[4] = *(_QWORD*)(a7 + 32);
  v72[5] = v62;
  v63 = *(_QWORD*)(a7 + 8);
  v72[0] = *(_QWORD*)a7;
  v72[1] = v63;
  v64 = *(_QWORD*)(a7 + 24);
  v72[2] = *(_QWORD*)(a7 + 16);
  v72[3] = v64;
  v65 = *(_QWORD*)(a7 + 56);
  v72[6] = *(_QWORD*)(a7 + 48);
  v73 = 0;
  v66 = *(_QWORD*)(a7 + 64);
  v67 = v66 - v65;
  if (v66 != v65) {
    if (v67 < 0) {
    LABEL_32:
      nvidia_dlss_rel_source_common_33410();
    }
    v68 = NgxRoutine_420(v66 - v65);
    v69 = v68 + v67;
    v73 = v68;
    v75 = v68 + v67;
    memcpy_plt(v68, v65, v67);
    v74 = v69;
  }
  v76 = *(_BYTE*)(a7 + 80);
  nvidia_dlss_rel_source_features_dlaa_7ae80_alt1(a1, v97, v92, v87, v82, v77,
                                                  v72, *a8, *a9);
  if (v73 != 0) {
    v74 = v73;
    NgxRoutine_430(v73, v75 - v73);
  }
  if (v78 != 0) {
    v79 = v78;
    NgxRoutine_430(v78, v80 - v78);
  }
  if (v83 != 0) {
    v84 = v83;
    NgxRoutine_430(v83, v85 - v83);
  }
  if (v88 != 0) {
    v89 = v88;
    NgxRoutine_430(v88, v90 - v88);
  }
  if (v93 != 0) {
    v94 = v93;
    NgxRoutine_430(v93, v95 - v93);
  }
  if (v98 != 0) {
    v99 = v98;
    NgxRoutine_430(v98, v100 - v98);
  }
  return a1;
}

__int64 nvidia_dlss_rel_source_features_dlaa_7ae80(__int64 a1, __int64* a2,
                                                   __int64* a3, __int64* a4,
                                                   __int64* a5, __int64* a6,
                                                   __int64* a7, __int64 a8,
                                                   __int64 a9)
{
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
  char v82;
  __int64 v83;
  _QWORD* v84;
  __int64 v85;
  __int64* v86;
  __int64 v87;
  __int64* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 result;
  __int64* v96;
  __int64* v97;
  __int64 v98;
  char v99;

  *(_QWORD*)a1 = NgxData_952b28[0] + 2;
  v16 = *a2;
  v17 = a2[2];
  *(_QWORD*)(a1 + 24) = a2[1];
  *(_QWORD*)(a1 + 32) = v17;
  *(_QWORD*)(a1 + 16) = v16;
  v18 = a2[3];
  v19 = a2[4];
  v20 = a2[5];
  v21 = a2[6];
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 56) = v20;
  *(_QWORD*)(a1 + 64) = v21;
  *(_QWORD*)(a1 + 40) = v18;
  *(_QWORD*)(a1 + 48) = v19;
  v23 = a2[7];
  v22 = a2[8];
  v24 = v22 - v23;
  if (v22 != v23) {
    if (v24 < 0) {
      goto LABEL_27;
    }
    v25 = NgxRoutine_420(v22 - v23);
    v26 = v25 + v24;
    *(_QWORD*)(a1 + 72) = v25;
    *(_QWORD*)(a1 + 80) = v25;
    *(_QWORD*)(a1 + 88) = v25 + v24;
    memcpy_plt(v25, v23, v24);
    *(_QWORD*)(a1 + 80) = v26;
  }
  *(_BYTE*)(a1 + 96) = *((_BYTE*)a2 + 80);
  v27 = *a3;
  v28 = a3[2];
  *(_QWORD*)(a1 + 112) = a3[1];
  *(_QWORD*)(a1 + 120) = v28;
  *(_QWORD*)(a1 + 104) = v27;
  v29 = a3[3];
  v30 = a3[4];
  v31 = a3[5];
  v32 = a3[6];
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 144) = v31;
  *(_QWORD*)(a1 + 152) = v32;
  *(_QWORD*)(a1 + 128) = v29;
  *(_QWORD*)(a1 + 136) = v30;
  v34 = a3[7];
  v33 = a3[8];
  v35 = v33 - v34;
  if (v33 != v34) {
    if (v35 < 0) {
      goto LABEL_27;
    }
    v36 = NgxRoutine_420(v33 - v34);
    v37 = v36 + v35;
    *(_QWORD*)(a1 + 160) = v36;
    *(_QWORD*)(a1 + 168) = v36;
    *(_QWORD*)(a1 + 176) = v36 + v35;
    memcpy_plt(v36, v34, v35);
    *(_QWORD*)(a1 + 168) = v37;
  }
  *(_BYTE*)(a1 + 184) = *((_BYTE*)a3 + 80);
  v38 = *a4;
  v39 = a4[2];
  *(_QWORD*)(a1 + 200) = a4[1];
  *(_QWORD*)(a1 + 208) = v39;
  *(_QWORD*)(a1 + 192) = v38;
  v40 = a4[3];
  v41 = a4[4];
  v42 = a4[5];
  v43 = a4[6];
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 232) = v42;
  *(_QWORD*)(a1 + 240) = v43;
  *(_QWORD*)(a1 + 216) = v40;
  *(_QWORD*)(a1 + 224) = v41;
  v45 = a4[7];
  v44 = a4[8];
  v46 = v44 - v45;
  if (v44 != v45) {
    if (v46 < 0) {
      goto LABEL_27;
    }
    v47 = NgxRoutine_420(v44 - v45);
    v48 = v47 + v46;
    *(_QWORD*)(a1 + 248) = v47;
    *(_QWORD*)(a1 + 256) = v47;
    *(_QWORD*)(a1 + 264) = v47 + v46;
    memcpy_plt(v47, v45, v46);
    *(_QWORD*)(a1 + 256) = v48;
  }
  *(_BYTE*)(a1 + 272) = *((_BYTE*)a4 + 80);
  v49 = *a5;
  v50 = a5[2];
  *(_QWORD*)(a1 + 288) = a5[1];
  *(_QWORD*)(a1 + 296) = v50;
  *(_QWORD*)(a1 + 280) = v49;
  v51 = a5[3];
  v52 = a5[4];
  v53 = a5[5];
  v54 = a5[6];
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 320) = v53;
  *(_QWORD*)(a1 + 328) = v54;
  *(_QWORD*)(a1 + 304) = v51;
  *(_QWORD*)(a1 + 312) = v52;
  v56 = a5[7];
  v55 = a5[8];
  v57 = v55 - v56;
  if (v55 != v56) {
    if (v57 < 0) {
      goto LABEL_27;
    }
    v58 = NgxRoutine_420(v55 - v56);
    v59 = v58 + v57;
    *(_QWORD*)(a1 + 336) = v58;
    *(_QWORD*)(a1 + 344) = v58;
    *(_QWORD*)(a1 + 352) = v58 + v57;
    memcpy_plt(v58, v56, v57);
    *(_QWORD*)(a1 + 344) = v59;
  }
  *(_BYTE*)(a1 + 360) = *((_BYTE*)a5 + 80);
  v60 = *a6;
  v61 = a6[2];
  *(_QWORD*)(a1 + 376) = a6[1];
  *(_QWORD*)(a1 + 384) = v61;
  *(_QWORD*)(a1 + 368) = v60;
  v62 = a6[3];
  v63 = a6[4];
  v64 = a6[5];
  v65 = a6[6];
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 408) = v64;
  *(_QWORD*)(a1 + 416) = v65;
  *(_QWORD*)(a1 + 392) = v62;
  *(_QWORD*)(a1 + 400) = v63;
  v67 = a6[7];
  v66 = a6[8];
  v68 = v66 - v67;
  if (v66 != v67) {
    if (v68 < 0) {
      goto LABEL_27;
    }
    v69 = NgxRoutine_420(v66 - v67);
    v70 = v69 + v68;
    *(_QWORD*)(a1 + 424) = v69;
    *(_QWORD*)(a1 + 432) = v69;
    *(_QWORD*)(a1 + 440) = v69 + v68;
    memcpy_plt(v69, v67, v68);
    *(_QWORD*)(a1 + 432) = v70;
  }
  *(_BYTE*)(a1 + 448) = *((_BYTE*)a6 + 80);
  v71 = *a7;
  v72 = a7[2];
  *(_QWORD*)(a1 + 464) = a7[1];
  *(_QWORD*)(a1 + 472) = v72;
  *(_QWORD*)(a1 + 456) = v71;
  v73 = a7[3];
  v74 = a7[4];
  v75 = a7[5];
  v76 = a7[6];
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 496) = v75;
  *(_QWORD*)(a1 + 504) = v76;
  *(_QWORD*)(a1 + 480) = v73;
  *(_QWORD*)(a1 + 488) = v74;
  v78 = a7[7];
  v77 = a7[8];
  v79 = v77 - v78;
  if (v77 != v78) {
    if (v79 < 0) {
    LABEL_27:
      nvidia_dlss_rel_source_common_33410();
    }
    v80 = NgxRoutine_420(v77 - v78);
    v81 = v80 + v79;
    *(_QWORD*)(a1 + 512) = v80;
    *(_QWORD*)(a1 + 520) = v80;
    *(_QWORD*)(a1 + 528) = v80 + v79;
    memcpy_plt(v80, v78, v79);
    *(_QWORD*)(a1 + 520) = v81;
  }
  v82 = *((_BYTE*)a7 + 80);
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_BYTE*)(a1 + 624) = 0;
  *(_BYTE*)(a1 + 536) = v82;
  *(_QWORD*)(a1 + 632) = NgxData_94d270;
  memset_plt(a1 + 640, 0, 176);
  v83 = **(_QWORD**)(a1 + 160);
  *(_DWORD*)(a1 + 824) = *(_QWORD*)(*(_QWORD*)(a1 + 160) + 8LL);
  *(_DWORD*)(a1 + 828) = v83;
  v84 = (_QWORD*)NgxRoutine_420(8);
  *v84 = 0;
  v96 = nullptr;
  v97 = nullptr;
  v98 = 0;
  v99 = 0;
  nvidia_dlss_rel_source_features_dlaa_76570((__int64*)&v96, (__int64)v84,
                                             (__int64)(v84 + 1), 1u);
  v85 = (__int64)v96;
  v86 = v97;
  if (v96 == v97) {
    v90 = 2;
  }
  else {
    v87 = 1;
    v88 = v96;
    do {
      v89 = *v88++;
      v87 *= v89;
    } while (v88 != v97);
    v90 = 2 * v87;
  }
  *(_QWORD*)(a1 + 592) = v90;
  v91 = *(_QWORD*)(a1 + 600);
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  if (v91 != 0) {
    v92 = *(_QWORD*)(a1 + 616);
    *(_QWORD*)(a1 + 608) = v91;
    NgxRoutine_430(v91, v92 - v91);
    v85 = (__int64)v96;
    v86 = v97;
  }
  *(_QWORD*)(a1 + 600) = v85;
  v93 = v98;
  *(_QWORD*)(a1 + 608) = v86;
  v97 = nullptr;
  v98 = 0;
  v96 = nullptr;
  *(_QWORD*)(a1 + 616) = v93;
  *(_BYTE*)(a1 + 624) = v99;
  result = NgxRoutine_430(v84, 8);
  *(_QWORD*)(a1 + 584) = a9;
  *(_QWORD*)(a1 + 544) = a8;
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_7b2a0(_QWORD* a1)
{
  *a1 = NgxData_94d7b8;
  return NgxRoutine_baf00();
}

__int64 nvidia_dlss_rel_source_features_dlaa_7b300(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64 a7, _QWORD* a8,
                                                   _QWORD* a9)
{
  __int64 v9;
  __int64 v10;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  char v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  _QWORD v72[7];
  __int64 v73;
  __int64 v74;
  __int64 v75;
  char v76;
  _QWORD v77[7];
  __int64 v78;
  __int64 v79;
  __int64 v80;
  char v81;
  _QWORD v82[7];
  __int64 v83;
  __int64 v84;
  __int64 v85;
  char v86;
  _QWORD v87[7];
  __int64 v88;
  __int64 v89;
  __int64 v90;
  char v91;
  _QWORD v92[7];
  __int64 v93;
  __int64 v94;
  __int64 v95;
  char v96;
  _QWORD v97[7];
  __int64 v98;
  __int64 v99;
  __int64 v100;
  char v101;

  v9 = *(_QWORD*)(a2 + 32);
  v10 = *(_QWORD*)(a2 + 40);
  v99 = 0;
  v100 = 0;
  v97[4] = v9;
  v97[5] = v10;
  v18 = *(_QWORD*)(a2 + 8);
  v97[0] = *(_QWORD*)a2;
  v97[1] = v18;
  v19 = *(_QWORD*)(a2 + 24);
  v97[2] = *(_QWORD*)(a2 + 16);
  v97[3] = v19;
  v20 = *(_QWORD*)(a2 + 56);
  v97[6] = *(_QWORD*)(a2 + 48);
  v98 = 0;
  v21 = *(_QWORD*)(a2 + 64);
  v22 = v21 - v20;
  if (v21 != v20) {
    if (v22 < 0) {
      goto LABEL_32;
    }
    v23 = NgxRoutine_420(v21 - v20);
    v24 = v23 + v22;
    v98 = v23;
    v100 = v23 + v22;
    memcpy_plt(v23, v20, v22);
    v99 = v24;
  }
  v25 = *(_BYTE*)(a2 + 80);
  v94 = 0;
  v95 = 0;
  v101 = v25;
  v26 = *(_QWORD*)(a3 + 40);
  v92[4] = *(_QWORD*)(a3 + 32);
  v92[5] = v26;
  v27 = *(_QWORD*)(a3 + 8);
  v92[0] = *(_QWORD*)a3;
  v92[1] = v27;
  v28 = *(_QWORD*)(a3 + 24);
  v92[2] = *(_QWORD*)(a3 + 16);
  v92[3] = v28;
  v29 = *(_QWORD*)(a3 + 56);
  v92[6] = *(_QWORD*)(a3 + 48);
  v93 = 0;
  v30 = *(_QWORD*)(a3 + 64);
  v31 = v30 - v29;
  if (v30 != v29) {
    if (v31 < 0) {
      goto LABEL_32;
    }
    v32 = NgxRoutine_420(v30 - v29);
    v33 = v32 + v31;
    v93 = v32;
    v95 = v32 + v31;
    memcpy_plt(v32, v29, v31);
    v94 = v33;
  }
  v34 = *(_BYTE*)(a3 + 80);
  v89 = 0;
  v90 = 0;
  v96 = v34;
  v35 = *(_QWORD*)(a4 + 40);
  v87[4] = *(_QWORD*)(a4 + 32);
  v87[5] = v35;
  v36 = *(_QWORD*)(a4 + 8);
  v87[0] = *(_QWORD*)a4;
  v87[1] = v36;
  v37 = *(_QWORD*)(a4 + 24);
  v87[2] = *(_QWORD*)(a4 + 16);
  v87[3] = v37;
  v38 = *(_QWORD*)(a4 + 56);
  v87[6] = *(_QWORD*)(a4 + 48);
  v88 = 0;
  v39 = *(_QWORD*)(a4 + 64);
  v40 = v39 - v38;
  if (v39 != v38) {
    if (v40 < 0) {
      goto LABEL_32;
    }
    v41 = NgxRoutine_420(v39 - v38);
    v42 = v41 + v40;
    v88 = v41;
    v90 = v41 + v40;
    memcpy_plt(v41, v38, v40);
    v89 = v42;
  }
  v43 = *(_BYTE*)(a4 + 80);
  v84 = 0;
  v85 = 0;
  v91 = v43;
  v44 = *(_QWORD*)(a5 + 40);
  v82[4] = *(_QWORD*)(a5 + 32);
  v82[5] = v44;
  v45 = *(_QWORD*)(a5 + 8);
  v82[0] = *(_QWORD*)a5;
  v82[1] = v45;
  v46 = *(_QWORD*)(a5 + 24);
  v82[2] = *(_QWORD*)(a5 + 16);
  v82[3] = v46;
  v47 = *(_QWORD*)(a5 + 56);
  v82[6] = *(_QWORD*)(a5 + 48);
  v83 = 0;
  v48 = *(_QWORD*)(a5 + 64);
  v49 = v48 - v47;
  if (v48 != v47) {
    if (v49 < 0) {
      goto LABEL_32;
    }
    v50 = NgxRoutine_420(v48 - v47);
    v51 = v50 + v49;
    v83 = v50;
    v85 = v50 + v49;
    memcpy_plt(v50, v47, v49);
    v84 = v51;
  }
  v52 = *(_BYTE*)(a5 + 80);
  v79 = 0;
  v80 = 0;
  v86 = v52;
  v53 = *(_QWORD*)(a6 + 40);
  v77[4] = *(_QWORD*)(a6 + 32);
  v77[5] = v53;
  v54 = *(_QWORD*)(a6 + 8);
  v77[0] = *(_QWORD*)a6;
  v77[1] = v54;
  v55 = *(_QWORD*)(a6 + 24);
  v77[2] = *(_QWORD*)(a6 + 16);
  v77[3] = v55;
  v56 = *(_QWORD*)(a6 + 56);
  v77[6] = *(_QWORD*)(a6 + 48);
  v78 = 0;
  v57 = *(_QWORD*)(a6 + 64);
  v58 = v57 - v56;
  if (v57 != v56) {
    if (v58 < 0) {
      goto LABEL_32;
    }
    v59 = NgxRoutine_420(v57 - v56);
    v60 = v59 + v58;
    v78 = v59;
    v80 = v59 + v58;
    memcpy_plt(v59, v56, v58);
    v79 = v60;
  }
  v61 = *(_BYTE*)(a6 + 80);
  v74 = 0;
  v75 = 0;
  v81 = v61;
  v62 = *(_QWORD*)(a7 + 40);
  v72[4] = *(_QWORD*)(a7 + 32);
  v72[5] = v62;
  v63 = *(_QWORD*)(a7 + 8);
  v72[0] = *(_QWORD*)a7;
  v72[1] = v63;
  v64 = *(_QWORD*)(a7 + 24);
  v72[2] = *(_QWORD*)(a7 + 16);
  v72[3] = v64;
  v65 = *(_QWORD*)(a7 + 56);
  v72[6] = *(_QWORD*)(a7 + 48);
  v73 = 0;
  v66 = *(_QWORD*)(a7 + 64);
  v67 = v66 - v65;
  if (v66 != v65) {
    if (v67 < 0) {
    LABEL_32:
      nvidia_dlss_rel_source_common_33410();
    }
    v68 = NgxRoutine_420(v66 - v65);
    v69 = v68 + v67;
    v73 = v68;
    v75 = v68 + v67;
    memcpy_plt(v68, v65, v67);
    v74 = v69;
  }
  v76 = *(_BYTE*)(a7 + 80);
  nvidia_dlss_rel_source_features_dlaa_7b680_alt1(a1, v97, v92, v87, v82, v77,
                                                  v72, *a8, *a9);
  if (v73 != 0) {
    v74 = v73;
    NgxRoutine_430(v73, v75 - v73);
  }
  if (v78 != 0) {
    v79 = v78;
    NgxRoutine_430(v78, v80 - v78);
  }
  if (v83 != 0) {
    v84 = v83;
    NgxRoutine_430(v83, v85 - v83);
  }
  if (v88 != 0) {
    v89 = v88;
    NgxRoutine_430(v88, v90 - v88);
  }
  if (v93 != 0) {
    v94 = v93;
    NgxRoutine_430(v93, v95 - v93);
  }
  if (v98 != 0) {
    v99 = v98;
    NgxRoutine_430(v98, v100 - v98);
  }
  return a1;
}

__int64 nvidia_dlss_rel_source_features_dlaa_7b680(__int64 a1, __int64* a2,
                                                   __int64* a3, __int64* a4,
                                                   __int64* a5, __int64* a6,
                                                   __int64* a7, __int64 a8,
                                                   __int64 a9)
{
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
  char v82;
  __int64 v83;
  _QWORD* v84;
  __int64 v85;
  __int64* v86;
  __int64 v87;
  __int64* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 result;
  __int64* v96;
  __int64* v97;
  __int64 v98;
  char v99;

  *(_QWORD*)a1 = NgxData_952b30[0] + 2;
  v16 = *a2;
  v17 = a2[2];
  *(_QWORD*)(a1 + 24) = a2[1];
  *(_QWORD*)(a1 + 32) = v17;
  *(_QWORD*)(a1 + 16) = v16;
  v18 = a2[3];
  v19 = a2[4];
  v20 = a2[5];
  v21 = a2[6];
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 56) = v20;
  *(_QWORD*)(a1 + 64) = v21;
  *(_QWORD*)(a1 + 40) = v18;
  *(_QWORD*)(a1 + 48) = v19;
  v23 = a2[7];
  v22 = a2[8];
  v24 = v22 - v23;
  if (v22 != v23) {
    if (v24 < 0) {
      goto LABEL_27;
    }
    v25 = NgxRoutine_420(v22 - v23);
    v26 = v25 + v24;
    *(_QWORD*)(a1 + 72) = v25;
    *(_QWORD*)(a1 + 80) = v25;
    *(_QWORD*)(a1 + 88) = v25 + v24;
    memcpy_plt(v25, v23, v24);
    *(_QWORD*)(a1 + 80) = v26;
  }
  *(_BYTE*)(a1 + 96) = *((_BYTE*)a2 + 80);
  v27 = *a3;
  v28 = a3[2];
  *(_QWORD*)(a1 + 112) = a3[1];
  *(_QWORD*)(a1 + 120) = v28;
  *(_QWORD*)(a1 + 104) = v27;
  v29 = a3[3];
  v30 = a3[4];
  v31 = a3[5];
  v32 = a3[6];
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 144) = v31;
  *(_QWORD*)(a1 + 152) = v32;
  *(_QWORD*)(a1 + 128) = v29;
  *(_QWORD*)(a1 + 136) = v30;
  v34 = a3[7];
  v33 = a3[8];
  v35 = v33 - v34;
  if (v33 != v34) {
    if (v35 < 0) {
      goto LABEL_27;
    }
    v36 = NgxRoutine_420(v33 - v34);
    v37 = v36 + v35;
    *(_QWORD*)(a1 + 160) = v36;
    *(_QWORD*)(a1 + 168) = v36;
    *(_QWORD*)(a1 + 176) = v36 + v35;
    memcpy_plt(v36, v34, v35);
    *(_QWORD*)(a1 + 168) = v37;
  }
  *(_BYTE*)(a1 + 184) = *((_BYTE*)a3 + 80);
  v38 = *a4;
  v39 = a4[2];
  *(_QWORD*)(a1 + 200) = a4[1];
  *(_QWORD*)(a1 + 208) = v39;
  *(_QWORD*)(a1 + 192) = v38;
  v40 = a4[3];
  v41 = a4[4];
  v42 = a4[5];
  v43 = a4[6];
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 232) = v42;
  *(_QWORD*)(a1 + 240) = v43;
  *(_QWORD*)(a1 + 216) = v40;
  *(_QWORD*)(a1 + 224) = v41;
  v45 = a4[7];
  v44 = a4[8];
  v46 = v44 - v45;
  if (v44 != v45) {
    if (v46 < 0) {
      goto LABEL_27;
    }
    v47 = NgxRoutine_420(v44 - v45);
    v48 = v47 + v46;
    *(_QWORD*)(a1 + 248) = v47;
    *(_QWORD*)(a1 + 256) = v47;
    *(_QWORD*)(a1 + 264) = v47 + v46;
    memcpy_plt(v47, v45, v46);
    *(_QWORD*)(a1 + 256) = v48;
  }
  *(_BYTE*)(a1 + 272) = *((_BYTE*)a4 + 80);
  v49 = *a5;
  v50 = a5[2];
  *(_QWORD*)(a1 + 288) = a5[1];
  *(_QWORD*)(a1 + 296) = v50;
  *(_QWORD*)(a1 + 280) = v49;
  v51 = a5[3];
  v52 = a5[4];
  v53 = a5[5];
  v54 = a5[6];
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 320) = v53;
  *(_QWORD*)(a1 + 328) = v54;
  *(_QWORD*)(a1 + 304) = v51;
  *(_QWORD*)(a1 + 312) = v52;
  v56 = a5[7];
  v55 = a5[8];
  v57 = v55 - v56;
  if (v55 != v56) {
    if (v57 < 0) {
      goto LABEL_27;
    }
    v58 = NgxRoutine_420(v55 - v56);
    v59 = v58 + v57;
    *(_QWORD*)(a1 + 336) = v58;
    *(_QWORD*)(a1 + 344) = v58;
    *(_QWORD*)(a1 + 352) = v58 + v57;
    memcpy_plt(v58, v56, v57);
    *(_QWORD*)(a1 + 344) = v59;
  }
  *(_BYTE*)(a1 + 360) = *((_BYTE*)a5 + 80);
  v60 = *a6;
  v61 = a6[2];
  *(_QWORD*)(a1 + 376) = a6[1];
  *(_QWORD*)(a1 + 384) = v61;
  *(_QWORD*)(a1 + 368) = v60;
  v62 = a6[3];
  v63 = a6[4];
  v64 = a6[5];
  v65 = a6[6];
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 408) = v64;
  *(_QWORD*)(a1 + 416) = v65;
  *(_QWORD*)(a1 + 392) = v62;
  *(_QWORD*)(a1 + 400) = v63;
  v67 = a6[7];
  v66 = a6[8];
  v68 = v66 - v67;
  if (v66 != v67) {
    if (v68 < 0) {
      goto LABEL_27;
    }
    v69 = NgxRoutine_420(v66 - v67);
    v70 = v69 + v68;
    *(_QWORD*)(a1 + 424) = v69;
    *(_QWORD*)(a1 + 432) = v69;
    *(_QWORD*)(a1 + 440) = v69 + v68;
    memcpy_plt(v69, v67, v68);
    *(_QWORD*)(a1 + 432) = v70;
  }
  *(_BYTE*)(a1 + 448) = *((_BYTE*)a6 + 80);
  v71 = *a7;
  v72 = a7[2];
  *(_QWORD*)(a1 + 464) = a7[1];
  *(_QWORD*)(a1 + 472) = v72;
  *(_QWORD*)(a1 + 456) = v71;
  v73 = a7[3];
  v74 = a7[4];
  v75 = a7[5];
  v76 = a7[6];
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 496) = v75;
  *(_QWORD*)(a1 + 504) = v76;
  *(_QWORD*)(a1 + 480) = v73;
  *(_QWORD*)(a1 + 488) = v74;
  v78 = a7[7];
  v77 = a7[8];
  v79 = v77 - v78;
  if (v77 != v78) {
    if (v79 < 0) {
    LABEL_27:
      nvidia_dlss_rel_source_common_33410();
    }
    v80 = NgxRoutine_420(v77 - v78);
    v81 = v80 + v79;
    *(_QWORD*)(a1 + 512) = v80;
    *(_QWORD*)(a1 + 520) = v80;
    *(_QWORD*)(a1 + 528) = v80 + v79;
    memcpy_plt(v80, v78, v79);
    *(_QWORD*)(a1 + 520) = v81;
  }
  v82 = *((_BYTE*)a7 + 80);
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_BYTE*)(a1 + 624) = 0;
  *(_BYTE*)(a1 + 536) = v82;
  *(_QWORD*)(a1 + 632) = NgxData_94d270;
  memset_plt(a1 + 640, 0, 176);
  v83 = **(_QWORD**)(a1 + 160);
  *(_DWORD*)(a1 + 824) = *(_QWORD*)(*(_QWORD*)(a1 + 160) + 8LL);
  *(_DWORD*)(a1 + 828) = v83;
  v84 = (_QWORD*)NgxRoutine_420(8);
  *v84 = 0;
  v96 = nullptr;
  v97 = nullptr;
  v98 = 0;
  v99 = 0;
  nvidia_dlss_rel_source_features_dlaa_76570((__int64*)&v96, (__int64)v84,
                                             (__int64)(v84 + 1), 1u);
  v85 = (__int64)v96;
  v86 = v97;
  if (v96 == v97) {
    v90 = 2;
  }
  else {
    v87 = 1;
    v88 = v96;
    do {
      v89 = *v88++;
      v87 *= v89;
    } while (v88 != v97);
    v90 = 2 * v87;
  }
  *(_QWORD*)(a1 + 592) = v90;
  v91 = *(_QWORD*)(a1 + 600);
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  if (v91 != 0) {
    v92 = *(_QWORD*)(a1 + 616);
    *(_QWORD*)(a1 + 608) = v91;
    NgxRoutine_430(v91, v92 - v91);
    v85 = (__int64)v96;
    v86 = v97;
  }
  *(_QWORD*)(a1 + 600) = v85;
  v93 = v98;
  *(_QWORD*)(a1 + 608) = v86;
  v97 = nullptr;
  v98 = 0;
  v96 = nullptr;
  *(_QWORD*)(a1 + 616) = v93;
  *(_BYTE*)(a1 + 624) = v99;
  result = NgxRoutine_430(v84, 8);
  *(_QWORD*)(a1 + 584) = a9;
  *(_QWORD*)(a1 + 544) = a8;
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_7baa0(_QWORD* a1)
{
  *a1 = NgxData_94d858;
  return NgxRoutine_baf00();
}

__int64 nvidia_dlss_rel_source_features_dlaa_7bb00(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64 a7, _QWORD* a8,
                                                   _QWORD* a9)
{
  __int64 v9;
  __int64 v10;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  char v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  _QWORD v72[7];
  __int64 v73;
  __int64 v74;
  __int64 v75;
  char v76;
  _QWORD v77[7];
  __int64 v78;
  __int64 v79;
  __int64 v80;
  char v81;
  _QWORD v82[7];
  __int64 v83;
  __int64 v84;
  __int64 v85;
  char v86;
  _QWORD v87[7];
  __int64 v88;
  __int64 v89;
  __int64 v90;
  char v91;
  _QWORD v92[7];
  __int64 v93;
  __int64 v94;
  __int64 v95;
  char v96;
  _QWORD v97[7];
  __int64 v98;
  __int64 v99;
  __int64 v100;
  char v101;

  v9 = *(_QWORD*)(a2 + 32);
  v10 = *(_QWORD*)(a2 + 40);
  v99 = 0;
  v100 = 0;
  v97[4] = v9;
  v97[5] = v10;
  v18 = *(_QWORD*)(a2 + 8);
  v97[0] = *(_QWORD*)a2;
  v97[1] = v18;
  v19 = *(_QWORD*)(a2 + 24);
  v97[2] = *(_QWORD*)(a2 + 16);
  v97[3] = v19;
  v20 = *(_QWORD*)(a2 + 56);
  v97[6] = *(_QWORD*)(a2 + 48);
  v98 = 0;
  v21 = *(_QWORD*)(a2 + 64);
  v22 = v21 - v20;
  if (v21 != v20) {
    if (v22 < 0) {
      goto LABEL_32;
    }
    v23 = NgxRoutine_420(v21 - v20);
    v24 = v23 + v22;
    v98 = v23;
    v100 = v23 + v22;
    memcpy_plt(v23, v20, v22);
    v99 = v24;
  }
  v25 = *(_BYTE*)(a2 + 80);
  v94 = 0;
  v95 = 0;
  v101 = v25;
  v26 = *(_QWORD*)(a3 + 40);
  v92[4] = *(_QWORD*)(a3 + 32);
  v92[5] = v26;
  v27 = *(_QWORD*)(a3 + 8);
  v92[0] = *(_QWORD*)a3;
  v92[1] = v27;
  v28 = *(_QWORD*)(a3 + 24);
  v92[2] = *(_QWORD*)(a3 + 16);
  v92[3] = v28;
  v29 = *(_QWORD*)(a3 + 56);
  v92[6] = *(_QWORD*)(a3 + 48);
  v93 = 0;
  v30 = *(_QWORD*)(a3 + 64);
  v31 = v30 - v29;
  if (v30 != v29) {
    if (v31 < 0) {
      goto LABEL_32;
    }
    v32 = NgxRoutine_420(v30 - v29);
    v33 = v32 + v31;
    v93 = v32;
    v95 = v32 + v31;
    memcpy_plt(v32, v29, v31);
    v94 = v33;
  }
  v34 = *(_BYTE*)(a3 + 80);
  v89 = 0;
  v90 = 0;
  v96 = v34;
  v35 = *(_QWORD*)(a4 + 40);
  v87[4] = *(_QWORD*)(a4 + 32);
  v87[5] = v35;
  v36 = *(_QWORD*)(a4 + 8);
  v87[0] = *(_QWORD*)a4;
  v87[1] = v36;
  v37 = *(_QWORD*)(a4 + 24);
  v87[2] = *(_QWORD*)(a4 + 16);
  v87[3] = v37;
  v38 = *(_QWORD*)(a4 + 56);
  v87[6] = *(_QWORD*)(a4 + 48);
  v88 = 0;
  v39 = *(_QWORD*)(a4 + 64);
  v40 = v39 - v38;
  if (v39 != v38) {
    if (v40 < 0) {
      goto LABEL_32;
    }
    v41 = NgxRoutine_420(v39 - v38);
    v42 = v41 + v40;
    v88 = v41;
    v90 = v41 + v40;
    memcpy_plt(v41, v38, v40);
    v89 = v42;
  }
  v43 = *(_BYTE*)(a4 + 80);
  v84 = 0;
  v85 = 0;
  v91 = v43;
  v44 = *(_QWORD*)(a5 + 40);
  v82[4] = *(_QWORD*)(a5 + 32);
  v82[5] = v44;
  v45 = *(_QWORD*)(a5 + 8);
  v82[0] = *(_QWORD*)a5;
  v82[1] = v45;
  v46 = *(_QWORD*)(a5 + 24);
  v82[2] = *(_QWORD*)(a5 + 16);
  v82[3] = v46;
  v47 = *(_QWORD*)(a5 + 56);
  v82[6] = *(_QWORD*)(a5 + 48);
  v83 = 0;
  v48 = *(_QWORD*)(a5 + 64);
  v49 = v48 - v47;
  if (v48 != v47) {
    if (v49 < 0) {
      goto LABEL_32;
    }
    v50 = NgxRoutine_420(v48 - v47);
    v51 = v50 + v49;
    v83 = v50;
    v85 = v50 + v49;
    memcpy_plt(v50, v47, v49);
    v84 = v51;
  }
  v52 = *(_BYTE*)(a5 + 80);
  v79 = 0;
  v80 = 0;
  v86 = v52;
  v53 = *(_QWORD*)(a6 + 40);
  v77[4] = *(_QWORD*)(a6 + 32);
  v77[5] = v53;
  v54 = *(_QWORD*)(a6 + 8);
  v77[0] = *(_QWORD*)a6;
  v77[1] = v54;
  v55 = *(_QWORD*)(a6 + 24);
  v77[2] = *(_QWORD*)(a6 + 16);
  v77[3] = v55;
  v56 = *(_QWORD*)(a6 + 56);
  v77[6] = *(_QWORD*)(a6 + 48);
  v78 = 0;
  v57 = *(_QWORD*)(a6 + 64);
  v58 = v57 - v56;
  if (v57 != v56) {
    if (v58 < 0) {
      goto LABEL_32;
    }
    v59 = NgxRoutine_420(v57 - v56);
    v60 = v59 + v58;
    v78 = v59;
    v80 = v59 + v58;
    memcpy_plt(v59, v56, v58);
    v79 = v60;
  }
  v61 = *(_BYTE*)(a6 + 80);
  v74 = 0;
  v75 = 0;
  v81 = v61;
  v62 = *(_QWORD*)(a7 + 40);
  v72[4] = *(_QWORD*)(a7 + 32);
  v72[5] = v62;
  v63 = *(_QWORD*)(a7 + 8);
  v72[0] = *(_QWORD*)a7;
  v72[1] = v63;
  v64 = *(_QWORD*)(a7 + 24);
  v72[2] = *(_QWORD*)(a7 + 16);
  v72[3] = v64;
  v65 = *(_QWORD*)(a7 + 56);
  v72[6] = *(_QWORD*)(a7 + 48);
  v73 = 0;
  v66 = *(_QWORD*)(a7 + 64);
  v67 = v66 - v65;
  if (v66 != v65) {
    if (v67 < 0) {
    LABEL_32:
      nvidia_dlss_rel_source_common_33410();
    }
    v68 = NgxRoutine_420(v66 - v65);
    v69 = v68 + v67;
    v73 = v68;
    v75 = v68 + v67;
    memcpy_plt(v68, v65, v67);
    v74 = v69;
  }
  v76 = *(_BYTE*)(a7 + 80);
  nvidia_dlss_rel_source_features_dlaa_7be80_alt1(a1, v97, v92, v87, v82, v77,
                                                  v72, *a8, *a9);
  if (v73 != 0) {
    v74 = v73;
    NgxRoutine_430(v73, v75 - v73);
  }
  if (v78 != 0) {
    v79 = v78;
    NgxRoutine_430(v78, v80 - v78);
  }
  if (v83 != 0) {
    v84 = v83;
    NgxRoutine_430(v83, v85 - v83);
  }
  if (v88 != 0) {
    v89 = v88;
    NgxRoutine_430(v88, v90 - v88);
  }
  if (v93 != 0) {
    v94 = v93;
    NgxRoutine_430(v93, v95 - v93);
  }
  if (v98 != 0) {
    v99 = v98;
    NgxRoutine_430(v98, v100 - v98);
  }
  return a1;
}

__int64 nvidia_dlss_rel_source_features_dlaa_7be80(__int64 a1, __int64* a2,
                                                   __int64* a3, __int64* a4,
                                                   __int64* a5, __int64* a6,
                                                   __int64* a7, __int64 a8,
                                                   __int64 a9)
{
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
  char v82;
  __int64 v83;
  _QWORD* v84;
  __int64 v85;
  __int64* v86;
  __int64 v87;
  __int64* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 result;
  __int64* v96;
  __int64* v97;
  __int64 v98;
  char v99;

  *(_QWORD*)a1 = NgxData_952b38[0] + 2;
  v16 = *a2;
  v17 = a2[2];
  *(_QWORD*)(a1 + 24) = a2[1];
  *(_QWORD*)(a1 + 32) = v17;
  *(_QWORD*)(a1 + 16) = v16;
  v18 = a2[3];
  v19 = a2[4];
  v20 = a2[5];
  v21 = a2[6];
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 56) = v20;
  *(_QWORD*)(a1 + 64) = v21;
  *(_QWORD*)(a1 + 40) = v18;
  *(_QWORD*)(a1 + 48) = v19;
  v23 = a2[7];
  v22 = a2[8];
  v24 = v22 - v23;
  if (v22 != v23) {
    if (v24 < 0) {
      goto LABEL_27;
    }
    v25 = NgxRoutine_420(v22 - v23);
    v26 = v25 + v24;
    *(_QWORD*)(a1 + 72) = v25;
    *(_QWORD*)(a1 + 80) = v25;
    *(_QWORD*)(a1 + 88) = v25 + v24;
    memcpy_plt(v25, v23, v24);
    *(_QWORD*)(a1 + 80) = v26;
  }
  *(_BYTE*)(a1 + 96) = *((_BYTE*)a2 + 80);
  v27 = *a3;
  v28 = a3[2];
  *(_QWORD*)(a1 + 112) = a3[1];
  *(_QWORD*)(a1 + 120) = v28;
  *(_QWORD*)(a1 + 104) = v27;
  v29 = a3[3];
  v30 = a3[4];
  v31 = a3[5];
  v32 = a3[6];
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 144) = v31;
  *(_QWORD*)(a1 + 152) = v32;
  *(_QWORD*)(a1 + 128) = v29;
  *(_QWORD*)(a1 + 136) = v30;
  v34 = a3[7];
  v33 = a3[8];
  v35 = v33 - v34;
  if (v33 != v34) {
    if (v35 < 0) {
      goto LABEL_27;
    }
    v36 = NgxRoutine_420(v33 - v34);
    v37 = v36 + v35;
    *(_QWORD*)(a1 + 160) = v36;
    *(_QWORD*)(a1 + 168) = v36;
    *(_QWORD*)(a1 + 176) = v36 + v35;
    memcpy_plt(v36, v34, v35);
    *(_QWORD*)(a1 + 168) = v37;
  }
  *(_BYTE*)(a1 + 184) = *((_BYTE*)a3 + 80);
  v38 = *a4;
  v39 = a4[2];
  *(_QWORD*)(a1 + 200) = a4[1];
  *(_QWORD*)(a1 + 208) = v39;
  *(_QWORD*)(a1 + 192) = v38;
  v40 = a4[3];
  v41 = a4[4];
  v42 = a4[5];
  v43 = a4[6];
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 232) = v42;
  *(_QWORD*)(a1 + 240) = v43;
  *(_QWORD*)(a1 + 216) = v40;
  *(_QWORD*)(a1 + 224) = v41;
  v45 = a4[7];
  v44 = a4[8];
  v46 = v44 - v45;
  if (v44 != v45) {
    if (v46 < 0) {
      goto LABEL_27;
    }
    v47 = NgxRoutine_420(v44 - v45);
    v48 = v47 + v46;
    *(_QWORD*)(a1 + 248) = v47;
    *(_QWORD*)(a1 + 256) = v47;
    *(_QWORD*)(a1 + 264) = v47 + v46;
    memcpy_plt(v47, v45, v46);
    *(_QWORD*)(a1 + 256) = v48;
  }
  *(_BYTE*)(a1 + 272) = *((_BYTE*)a4 + 80);
  v49 = *a5;
  v50 = a5[2];
  *(_QWORD*)(a1 + 288) = a5[1];
  *(_QWORD*)(a1 + 296) = v50;
  *(_QWORD*)(a1 + 280) = v49;
  v51 = a5[3];
  v52 = a5[4];
  v53 = a5[5];
  v54 = a5[6];
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 320) = v53;
  *(_QWORD*)(a1 + 328) = v54;
  *(_QWORD*)(a1 + 304) = v51;
  *(_QWORD*)(a1 + 312) = v52;
  v56 = a5[7];
  v55 = a5[8];
  v57 = v55 - v56;
  if (v55 != v56) {
    if (v57 < 0) {
      goto LABEL_27;
    }
    v58 = NgxRoutine_420(v55 - v56);
    v59 = v58 + v57;
    *(_QWORD*)(a1 + 336) = v58;
    *(_QWORD*)(a1 + 344) = v58;
    *(_QWORD*)(a1 + 352) = v58 + v57;
    memcpy_plt(v58, v56, v57);
    *(_QWORD*)(a1 + 344) = v59;
  }
  *(_BYTE*)(a1 + 360) = *((_BYTE*)a5 + 80);
  v60 = *a6;
  v61 = a6[2];
  *(_QWORD*)(a1 + 376) = a6[1];
  *(_QWORD*)(a1 + 384) = v61;
  *(_QWORD*)(a1 + 368) = v60;
  v62 = a6[3];
  v63 = a6[4];
  v64 = a6[5];
  v65 = a6[6];
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 408) = v64;
  *(_QWORD*)(a1 + 416) = v65;
  *(_QWORD*)(a1 + 392) = v62;
  *(_QWORD*)(a1 + 400) = v63;
  v67 = a6[7];
  v66 = a6[8];
  v68 = v66 - v67;
  if (v66 != v67) {
    if (v68 < 0) {
      goto LABEL_27;
    }
    v69 = NgxRoutine_420(v66 - v67);
    v70 = v69 + v68;
    *(_QWORD*)(a1 + 424) = v69;
    *(_QWORD*)(a1 + 432) = v69;
    *(_QWORD*)(a1 + 440) = v69 + v68;
    memcpy_plt(v69, v67, v68);
    *(_QWORD*)(a1 + 432) = v70;
  }
  *(_BYTE*)(a1 + 448) = *((_BYTE*)a6 + 80);
  v71 = *a7;
  v72 = a7[2];
  *(_QWORD*)(a1 + 464) = a7[1];
  *(_QWORD*)(a1 + 472) = v72;
  *(_QWORD*)(a1 + 456) = v71;
  v73 = a7[3];
  v74 = a7[4];
  v75 = a7[5];
  v76 = a7[6];
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 496) = v75;
  *(_QWORD*)(a1 + 504) = v76;
  *(_QWORD*)(a1 + 480) = v73;
  *(_QWORD*)(a1 + 488) = v74;
  v78 = a7[7];
  v77 = a7[8];
  v79 = v77 - v78;
  if (v77 != v78) {
    if (v79 < 0) {
    LABEL_27:
      nvidia_dlss_rel_source_common_33410();
    }
    v80 = NgxRoutine_420(v77 - v78);
    v81 = v80 + v79;
    *(_QWORD*)(a1 + 512) = v80;
    *(_QWORD*)(a1 + 520) = v80;
    *(_QWORD*)(a1 + 528) = v80 + v79;
    memcpy_plt(v80, v78, v79);
    *(_QWORD*)(a1 + 520) = v81;
  }
  v82 = *((_BYTE*)a7 + 80);
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_BYTE*)(a1 + 624) = 0;
  *(_BYTE*)(a1 + 536) = v82;
  *(_QWORD*)(a1 + 632) = NgxData_94d270;
  memset_plt(a1 + 640, 0, 176);
  v83 = **(_QWORD**)(a1 + 160);
  *(_DWORD*)(a1 + 824) = *(_QWORD*)(*(_QWORD*)(a1 + 160) + 8LL);
  *(_DWORD*)(a1 + 828) = v83;
  v84 = (_QWORD*)NgxRoutine_420(8);
  *v84 = 0;
  v96 = nullptr;
  v97 = nullptr;
  v98 = 0;
  v99 = 0;
  nvidia_dlss_rel_source_features_dlaa_76570((__int64*)&v96, (__int64)v84,
                                             (__int64)(v84 + 1), 1u);
  v85 = (__int64)v96;
  v86 = v97;
  if (v96 == v97) {
    v90 = 2;
  }
  else {
    v87 = 1;
    v88 = v96;
    do {
      v89 = *v88++;
      v87 *= v89;
    } while (v88 != v97);
    v90 = 2 * v87;
  }
  *(_QWORD*)(a1 + 592) = v90;
  v91 = *(_QWORD*)(a1 + 600);
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  if (v91 != 0) {
    v92 = *(_QWORD*)(a1 + 616);
    *(_QWORD*)(a1 + 608) = v91;
    NgxRoutine_430(v91, v92 - v91);
    v85 = (__int64)v96;
    v86 = v97;
  }
  *(_QWORD*)(a1 + 600) = v85;
  v93 = v98;
  *(_QWORD*)(a1 + 608) = v86;
  v97 = nullptr;
  v98 = 0;
  v96 = nullptr;
  *(_QWORD*)(a1 + 616) = v93;
  *(_BYTE*)(a1 + 624) = v99;
  result = NgxRoutine_430(v84, 8);
  *(_QWORD*)(a1 + 584) = a9;
  *(_QWORD*)(a1 + 544) = a8;
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_7c2a0(__int64 a1)
{
  _QWORD* v2;
  unsigned int v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;

  v2 = *(_QWORD**)(a1 + 48);
  if (v2 == nullptr) {
    v5 = 1;
    v6 = *(_QWORD*)(a1 + 96);
    if (v6 == 0) {
      return v5;
    }
    goto LABEL_5;
  }
  v3 = NgxRoutine_36500(v2);
  v4 = *(_QWORD*)(a1 + 48);
  v5 = v3;
  if (v4 != 0) {
    nvidia_dlss_rel_source_34a80(*(_QWORD**)(a1 + 48));
    NgxRoutine_430(v4, 2848);
  }
  *(_QWORD*)(a1 + 48) = 0;
  v6 = *(_QWORD*)(a1 + 96);
  if (v6 != 0) {
  LABEL_5:
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
    *(_QWORD*)(a1 + 96) = 0;
  }
  return v5;
}

__int64 nvidia_dlss_rel_source_features_dlaa_7c330(__int64 result, int a2,
                                                   __int64 a3)
{
  *(_QWORD*)result = a3;
  *(_QWORD*)(result + 8) = 0;
  *(_DWORD*)(result + 16) = a2;
  *(_DWORD*)(result + 40) = 2;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_BYTE*)(result + 44) = 0;
  *(_WORD*)(result + 52) = 0;
  *(_BYTE*)(result + 56) = 0;
  *(_DWORD*)(result + 60) = 0;
  *(_BYTE*)(result + 64) = 0;
  *(_BYTE*)(result + 72) = 0;
  *(_DWORD*)(result + 76) = 0;
  *(_BYTE*)(result + 80) = 0;
  *(_BYTE*)(result + 88) = 0;
  *(_BYTE*)(result + 96) = 0;
  *(_QWORD*)(result + 104) = 0;
  *(_QWORD*)(result + 112) = 0;
  *(_QWORD*)(result + 120) = 0;
  *(_DWORD*)(result + 48) = 1065353216;
  *(_DWORD*)(result + 84) = 1065353216;
  *(_DWORD*)(result + 68) = 1043878380;
  *(_DWORD*)(result + 92) = 1023969417;
  *(_DWORD*)(result + 100) = 1101004800;
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_7c3b0(__int64 a1, __int64 a2,
                                                   __int64 a3, char a4)
{
  unsigned int v4;

  v4 = 1;
  *(_QWORD*)(a1 + 8) = a2;
  if ((a4 & 1) == 0) {
    v4 = -1160773630;
    if ((*(unsigned int (**)(__int64, _QWORD, _QWORD, const char*, __int64,
                             __int64, __int64, __int64, int,
                             _QWORD))(*(_QWORD*)a2 + 120LL))(
            a2, *(_QWORD*)(a3 + 952), *(unsigned int*)(a3 + 960),
            "cuda_reduce_sum_kernel", 1, a1 + 112, 256, 1, 1, 0) == 0 &&
        (*(unsigned int (**)(_QWORD, _QWORD, _QWORD, const char*, __int64,
                             __int64, __int64, __int64, int,
                             _QWORD))(**(_QWORD**)(a1 + 8) + 120LL))(
            *(_QWORD*)(a1 + 8), *(_QWORD*)(a3 + 984),
            *(unsigned int*)(a3 + 992), "cuda_histogram_kernel", 1, a1 + 24, 8,
            8, 1, 0) == 0 &&
        (*(unsigned int (**)(_QWORD, _QWORD, _QWORD, const char*, __int64,
                             __int64, __int64, __int64, int,
                             _QWORD))(**(_QWORD**)(a1 + 8) + 120LL))(
            *(_QWORD*)(a1 + 8), *(_QWORD*)(a3 + 1000),
            *(unsigned int*)(a3 + 1008), "cuda_auto_exposure_kernel", 1,
            a1 + 32, 1, 1, 1, 0) == 0 &&
        (*(unsigned int (**)(_QWORD, _QWORD, _QWORD, const char*, __int64,
                             __int64, __int64, __int64, int,
                             _QWORD))(**(_QWORD**)(a1 + 8) + 120LL))(
            *(_QWORD*)(a1 + 8), *(_QWORD*)(a3 + 936),
            *(unsigned int*)(a3 + 944), "cuda_luma_convert_kernel", 1, a1 + 104,
            8, 8, 1, 0) == 0 &&
        (*(unsigned int (**)(_QWORD, _QWORD, _QWORD, const char*, __int64,
                             __int64, __int64, __int64, int,
                             _QWORD))(**(_QWORD**)(a1 + 8) + 120LL))(
            *(_QWORD*)(a1 + 8), *(_QWORD*)(a3 + 968),
            *(unsigned int*)(a3 + 976), "cuda_auto_exposure_copy_kernel", 1,
            a1 + 120, 1, 1, 1, 0) == 0) {
      v4 = 1;
      *(_DWORD*)(a1 + 40) = 2;
    }
  }
  return v4;
}

__int64 nvidia_dlss_rel_source_features_dlaa_7c540(__int64 a1, _QWORD* a2)
{
  if ((*(unsigned int (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 184LL))(
          *(_QWORD*)(a1 + 8), a2[37]) != 0 ||
      (*(unsigned int (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 184LL))(
          *(_QWORD*)(a1 + 8), a2[38]) != 0 ||
      (*(unsigned int (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 184LL))(
          *(_QWORD*)(a1 + 8), a2[39]) != 0) {
    return 3134193666LL;
  }
  if ((*(unsigned int (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 184LL))(
          *(_QWORD*)(a1 + 8), a2[40]) != 0) {
    return (unsigned int)-1160773630;
  }
  else {
    return 1;
  }
}

__int64 nvidia_dlss_rel_source_features_dlaa_7ccd0(__int64 a1, __int64 a2,
                                                   __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if ((*(_BYTE*)(a3 + 241) & 1) == 0) {
    v6 = *(_QWORD*)(a3 + 304);
    if (v6 != 0) {
      if ((*(unsigned int (**)(_QWORD, __int64, __int64, _QWORD, __int64))(
              **(_QWORD**)(a1 + 8) + 376LL))(*(_QWORD*)(a1 + 8), a2, v6, 0,
                                             8) != 0) {
        return 3134193666LL;
      }
      *(_BYTE*)(a3 + 241) = 1;
    }
  }
  if ((*(_BYTE*)(a3 + 242) & 1) == 0) {
    v7 = *(_QWORD*)(a3 + 312);
    if (v7 != 0) {
      if ((*(unsigned int (**)(_QWORD, __int64, __int64, _QWORD, __int64))(
              **(_QWORD**)(a1 + 8) + 376LL))(*(_QWORD*)(a1 + 8), a2, v7, 0,
                                             8) != 0) {
        return 3134193666LL;
      }
      *(_BYTE*)(a3 + 242) = 1;
    }
  }
  if ((*(_BYTE*)(a3 + 243) & 1) == 0) {
    v8 = *(_QWORD*)(a3 + 296);
    if (v8 != 0) {
      if ((*(unsigned int (**)(_QWORD, __int64, __int64, __int64, __int64))(
              **(_QWORD**)(a1 + 8) + 376LL))(*(_QWORD*)(a1 + 8), a2, v8, 1024,
                                             64) == 0) {
        *(_BYTE*)(a3 + 243) = 1;
        goto LABEL_13;
      }
      return 3134193666LL;
    }
  }
LABEL_13:
  if ((*(_BYTE*)(a3 + 244) & 1) != 0) {
    return 1;
  }
  v9 = *(_QWORD*)(a3 + 320);
  if (v9 == 0) {
    return 1;
  }
  if ((*(unsigned int (**)(_QWORD, __int64, __int64, _QWORD, __int64))(
          **(_QWORD**)(a1 + 8) + 376LL))(*(_QWORD*)(a1 + 8), a2, v9, 0, 8) !=
      0) {
    return 3134193666LL;
  }
  *(_BYTE*)(a3 + 244) = 1;
  return 1;
}

__int64 nvidia_dlss_rel_source_features_dlaa_7ce10(__int64 a1, __int64 a2,
                                                   char a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   __int64* a7, __int64* a8,
                                                   float* a9, float* a10)
{
  __int64 v10;
  __int64 v15;
  int v16;
  __int64 result;
  int v19;
  float v20;
  int v21;

  v10 = *(_QWORD*)(a6 + 40);
  if ((a3 & 1) == 0) {
    v10 = 0;
  }
  *a7 = v10;
  *a8 = v10;
  if ((*(_BYTE*)(a5 + 240) & 1) == 0) {
    v21 = *(_DWORD*)(a5 + 248);
    *a9 = 1.0;
    *a10 = 1.0;
    if (v21 != 1) {
      goto LABEL_7;
    }
  LABEL_10:
    v20 = *(float*)(a6 + 180) * *(float*)(a5 + 292);
    goto LABEL_11;
  }
  v15 = *(_QWORD*)(a5 + 296);
  v16 = *(_DWORD*)(a5 + 252);
  *a8 = v15;
  result = ProcessAutoExposure(a1, a2, a4, a5, (_QWORD*)a6, v15, v16);
  if ((_DWORD)result != 1) {
    return result;
  }
  v19 = *(_DWORD*)(a5 + 248);
  if (v19 == 0) {
    *a7 = *a8;
    *a9 = 1.0;
    *a10 = 1.0;
    if ((a3 & 1) == 0) {
      return 1;
    }
    goto LABEL_8;
  }
  *a9 = 1.0;
  *a10 = 1.0;
  if (v19 == 1) {
    goto LABEL_10;
  }
LABEL_7:
  if ((a3 & 1) != 0) {
  LABEL_8:
    v20 = *(float*)(a6 + 180) * *(float*)(a5 + 292);
    *a9 = v20;
  LABEL_11:
    *a10 = v20;
  }
  return 1;
}

__int64 nvidia_dlss_rel_source_features_dlaa_7cf20(__int64 a1, _DWORD* a2,
                                                   __int64 a3)
{
  int v3;
  int v4;
  int v5;
  char v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  int v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  int v26;
  struct {
    _BYTE v27[28];
    int v28;
    int v29;
  } v27_;

  v3 = *(_DWORD*)(a3 + 248);
  v4 = *(_DWORD*)(a3 + 252);
  v5 = *(unsigned __int8*)(a3 + 240);
  if (v4 != 0) {
    v9 = 0;
  }
  else {
    v9 = *(_BYTE*)(a3 + 240);
  }
  if (v4 != 1) {
    v5 = 0;
  }
  if (v3 == 1) {
    v10 = 1;
  }
  else {
    v10 = v5;
  }
  if ((v9 & 1) == 0 && v3 != 1) {
    if (v10 == 0) {
      return 1;
    }
    goto LABEL_24;
  }
  v11 = a2[20];
  if (v11 <= a2[22]) {
    v11 = a2[22];
  }
  v12 = v11 >> 1;
  *(_DWORD*)(a3 + 284) = v12;
  v13 = a2[21];
  if (v13 <= a2[23]) {
    v13 = a2[23];
  }
  v14 = v13 >> 1;
  if (v12 <= 0x100) {
    v12 = 256;
  }
  *(_DWORD*)(a3 + 284) = v12;
  if (v14 <= 0x100) {
    v14 = 256;
  }
  *(_DWORD*)(a3 + 288) = v14;
  v15 = 4 * v12 * v14;
  if (*(_QWORD*)(a3 + 304) == 0) {
    v17 = *(_QWORD*)(a1 + 8);
    *(_DWORD*)v27_.v27 = 4 * v12 * v14;
    *(_QWORD*)&v27_.v27[4] = 0xFFFFFFFF00000001LL;
    *(_QWORD*)&v27_.v27[12] = 0x100000000LL;
    *(_QWORD*)&v27_.v27[20] = 0x100000000LL;
    v18 = a2[30];
    v27_.v28 = a2[29];
    v27_.v29 = v18;
    if ((*(unsigned int (**)(__int64, _BYTE*, __int64, const char*, __int64))(
            *(_QWORD*)v17 + 136LL))(v17, v27_.v27, a3 + 304, "LumaBuffer",
                                    0xFFFFFFFFLL) != 0) {
      return 3134193666LL;
    }
  }
  if (*(_QWORD*)(a3 + 312) == 0) {
    v25 = *(_QWORD*)(a1 + 8);
    *(_DWORD*)v27_.v27 = v15;
    *(_QWORD*)&v27_.v27[4] = 0xFFFFFFFF00000001LL;
    *(_QWORD*)&v27_.v27[12] = 0x100000000LL;
    *(_QWORD*)&v27_.v27[20] = 0x100000000LL;
    v26 = a2[30];
    v27_.v28 = a2[29];
    v27_.v29 = v26;
    if ((*(unsigned int (**)(__int64, _BYTE*, __int64, const char*, __int64))(
            *(_QWORD*)v25 + 136LL))(v25, v27_.v27, a3 + 312, "ReduceBuffer",
                                    0xFFFFFFFFLL) != 0) {
      return 3134193666LL;
    }
  }
  if ((v10 & 1) != 0) {
  LABEL_24:
    if (*(_QWORD*)(a3 + 320) == 0) {
      v22 = *(_QWORD*)(a1 + 8);
      *(_QWORD*)&v27_.v27[8] = 0xFFFFFFFFLL;
      v23 = a2[29];
      v24 = a2[30];
      *(_QWORD*)v27_.v27 = 0x100000200LL;
      *(_QWORD*)&v27_.v27[16] = 1;
      *(_DWORD*)&v27_.v27[24] = 1;
      v27_.v28 = v23;
      v27_.v29 = v24;
      if ((*(unsigned int (**)(__int64, _BYTE*, __int64, const char*, __int64))(
              *(_QWORD*)v22 + 136LL))(v22, v27_.v27, a3 + 320,
                                      "HistogramBuffer", 0xFFFFFFFFLL) != 0) {
        return 3134193666LL;
      }
    }
  }
  if (*(_QWORD*)(a3 + 296) != 0) {
    return 1;
  }
  v19 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)v27_.v27 = 0x100000001LL;
  *(_QWORD*)&v27_.v27[8] = 0x6FFFFFFFFLL;
  *(_QWORD*)&v27_.v27[16] = 1;
  v20 = a2[29];
  v21 = a2[30];
  *(_DWORD*)&v27_.v27[24] = 1;
  v27_.v28 = v20;
  v27_.v29 = v21;
  if ((*(unsigned int (**)(__int64, _BYTE*, __int64, char*, __int64))(
          *(_QWORD*)v19 + 144LL))(v19, v27_.v27, a3 + 296, "AutoExposure",
                                  0xFFFFFFFFLL) == 0) {
    return 1;
  }
  return 3134193666LL;
}

#pragma GCC visibility pop
