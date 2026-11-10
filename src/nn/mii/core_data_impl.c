#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mii_detail_GetDefaultMii_plt(_QWORD);
__int64 nn_mii_detail_GetEyeColorFromVer3_plt(_QWORD);
__int64 nn_mii_detail_GetFacelineColorFromVer3_plt(_QWORD);
__int64 nn_mii_detail_GetGlassColorFromVer3_plt(_QWORD);
__int64 nn_mii_detail_GetHairColorFromVer3_plt(_QWORD);
__int64 nn_mii_detail_GetMouthColorFromVer3_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetBeardColor_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetBeardType_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetBuild_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetCreateId_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetEyeAspect_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetEyeColor_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetEyeRotate_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetEyeScale_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetEyeType_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetEyeX_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetEyeY_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetEyebrowAspect_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetEyebrowColor_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetEyebrowRotate_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetEyebrowScale_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetEyebrowType_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetEyebrowX_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetEyebrowY_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetFacelineColor_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetFacelineMake_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetFacelineType_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetFacelineWrinkle_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetFavoriteColor_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetFontRegion_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetGender_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetGlassColor_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetGlassScale_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetGlassType_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetGlassY_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetHairColor_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetHairFlip_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetHairType_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetHeight_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetMoleScale_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetMoleType_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetMoleX_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetMoleY_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetMouthAspect_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetMouthColor_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetMouthScale_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetMouthType_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetMouthY_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetMustacheScale_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetMustacheType_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetMustacheY_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetNickname_plt(_QWORD, _QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetNoseScale_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetNoseType_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetNoseY_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetRegionMove_plt(_QWORD);
__int64 nn_mii_detail_StoreDataRaw_GetType_plt(_QWORD);
__int64 nn_mii_detail_CharInfoRaw_SetFromStoreDataRaw(void* this_, void* a2);
__int64 nn_mii_detail_CharInfoRaw_SetDefaultMii(__int64 a1, unsigned int a2,
                                                __int64 a3, __int64 a4, char a5,
                                                __int64* a6);

__int64 nn_mii_detail_CharInfoRaw_SetFromStoreDataRaw(void* this_, void* a2)
{
  __int64 v4;
  __int64 result;

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_mii_detail_StoreDataRaw_GetNickname_plt(a2, (char*)this_ + 16),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)this_ = nn_mii_detail_StoreDataRaw_GetCreateId_plt(a2),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_QWORD*)this_ + 1) = v4;
  *((_BYTE*)this_ +
    38) = nn_mii_detail_StoreDataRaw_GetFontRegion_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    39) = nn_mii_detail_StoreDataRaw_GetFavoriteColor_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    40) = nn_mii_detail_StoreDataRaw_GetGender_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    41) = nn_mii_detail_StoreDataRaw_GetHeight_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    42) = nn_mii_detail_StoreDataRaw_GetBuild_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    43) = nn_mii_detail_StoreDataRaw_GetType_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    44) = nn_mii_detail_StoreDataRaw_GetRegionMove_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    45) = nn_mii_detail_StoreDataRaw_GetFacelineType_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    46) = nn_mii_detail_StoreDataRaw_GetFacelineColor_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    47) = nn_mii_detail_StoreDataRaw_GetFacelineWrinkle_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    48) = nn_mii_detail_StoreDataRaw_GetFacelineMake_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    49) = nn_mii_detail_StoreDataRaw_GetHairType_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    50) = nn_mii_detail_StoreDataRaw_GetHairColor_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    51) = nn_mii_detail_StoreDataRaw_GetHairFlip_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    52) = nn_mii_detail_StoreDataRaw_GetEyeType_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    53) = nn_mii_detail_StoreDataRaw_GetEyeColor_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    54) = nn_mii_detail_StoreDataRaw_GetEyeScale_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    55) = nn_mii_detail_StoreDataRaw_GetEyeAspect_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    56) = nn_mii_detail_StoreDataRaw_GetEyeRotate_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    57) = nn_mii_detail_StoreDataRaw_GetEyeX_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    58) = nn_mii_detail_StoreDataRaw_GetEyeY_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    59) = nn_mii_detail_StoreDataRaw_GetEyebrowType_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    60) = nn_mii_detail_StoreDataRaw_GetEyebrowColor_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    61) = nn_mii_detail_StoreDataRaw_GetEyebrowScale_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    62) = nn_mii_detail_StoreDataRaw_GetEyebrowAspect_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    63) = nn_mii_detail_StoreDataRaw_GetEyebrowRotate_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    64) = nn_mii_detail_StoreDataRaw_GetEyebrowX_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    65) = nn_mii_detail_StoreDataRaw_GetEyebrowY_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    66) = nn_mii_detail_StoreDataRaw_GetNoseType_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    67) = nn_mii_detail_StoreDataRaw_GetNoseScale_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    68) = nn_mii_detail_StoreDataRaw_GetNoseY_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    69) = nn_mii_detail_StoreDataRaw_GetMouthType_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    70) = nn_mii_detail_StoreDataRaw_GetMouthColor_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    71) = nn_mii_detail_StoreDataRaw_GetMouthScale_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    72) = nn_mii_detail_StoreDataRaw_GetMouthAspect_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    73) = nn_mii_detail_StoreDataRaw_GetMouthY_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    74) = nn_mii_detail_StoreDataRaw_GetBeardColor_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    75) = nn_mii_detail_StoreDataRaw_GetBeardType_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    76) = nn_mii_detail_StoreDataRaw_GetMustacheType_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    77) = nn_mii_detail_StoreDataRaw_GetMustacheScale_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    78) = nn_mii_detail_StoreDataRaw_GetMustacheY_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    79) = nn_mii_detail_StoreDataRaw_GetGlassType_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    80) = nn_mii_detail_StoreDataRaw_GetGlassColor_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    81) = nn_mii_detail_StoreDataRaw_GetGlassScale_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    82) = nn_mii_detail_StoreDataRaw_GetGlassY_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    83) = nn_mii_detail_StoreDataRaw_GetMoleType_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    84) = nn_mii_detail_StoreDataRaw_GetMoleScale_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)this_ +
    85) = nn_mii_detail_StoreDataRaw_GetMoleX_plt(a2),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = nn_mii_detail_StoreDataRaw_GetMoleY_plt(a2),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_WORD*)this_ + 43) = (unsigned __int8)result;
  return result;
}

__int64 nn_mii_detail_CharInfoRaw_SetDefaultMii(__int64 a1, unsigned int a2,
                                                __int64 a3, __int64 a4, char a5,
                                                __int64* a6)
{
  _DWORD* v11;
  __int64 result;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v11 = (_DWORD*)nn_mii_detail_GetDefaultMii_plt(a2);
  *(_BYTE*)(a1 + 38) = v11[47];
  *(_BYTE*)(a1 + 39) = v11[45];
  *(_BYTE*)(a1 + 40) = v11[44];
  *(_BYTE*)(a1 + 41) = v11[42];
  *(_BYTE*)(a1 + 42) = v11[43];
  *(_BYTE*)(a1 + 43) = v11[48];
  *(_BYTE*)(a1 + 44) = v11[46];
  *(_BYTE*)(a1 + 45) = *v11;
  *(_BYTE*)(a1 + 46) =
      nn_mii_detail_GetFacelineColorFromVer3_plt((unsigned int)v11[1]);
  *(_BYTE*)(a1 + 47) = v11[2];
  *(_BYTE*)(a1 + 48) = v11[3];
  *(_BYTE*)(a1 + 49) = v11[4];
  *(_BYTE*)(a1 + 50) =
      nn_mii_detail_GetHairColorFromVer3_plt((unsigned int)v11[5]);
  *(_BYTE*)(a1 + 51) = v11[6];
  *(_BYTE*)(a1 + 52) = v11[7];
  *(_BYTE*)(a1 + 53) =
      nn_mii_detail_GetEyeColorFromVer3_plt((unsigned int)v11[8]);
  *(_BYTE*)(a1 + 54) = v11[9];
  *(_BYTE*)(a1 + 55) = v11[10];
  *(_BYTE*)(a1 + 56) = v11[11];
  *(_BYTE*)(a1 + 57) = v11[12];
  *(_BYTE*)(a1 + 58) = v11[13];
  *(_BYTE*)(a1 + 59) = v11[14];
  *(_BYTE*)(a1 + 60) =
      nn_mii_detail_GetHairColorFromVer3_plt((unsigned int)v11[15]);
  *(_BYTE*)(a1 + 61) = v11[16];
  *(_BYTE*)(a1 + 62) = v11[17];
  *(_BYTE*)(a1 + 63) = v11[18];
  *(_BYTE*)(a1 + 64) = v11[19];
  *(_BYTE*)(a1 + 65) = v11[20];
  *(_BYTE*)(a1 + 66) = v11[21];
  *(_BYTE*)(a1 + 67) = v11[22];
  *(_BYTE*)(a1 + 68) = v11[23];
  *(_BYTE*)(a1 + 69) = v11[24];
  *(_BYTE*)(a1 + 70) =
      nn_mii_detail_GetMouthColorFromVer3_plt((unsigned int)v11[25]);
  *(_BYTE*)(a1 + 71) = v11[26];
  *(_BYTE*)(a1 + 72) = v11[27];
  *(_BYTE*)(a1 + 73) = v11[28];
  *(_BYTE*)(a1 + 74) =
      nn_mii_detail_GetHairColorFromVer3_plt((unsigned int)v11[31]);
  *(_BYTE*)(a1 + 75) = v11[30];
  *(_BYTE*)(a1 + 76) = v11[29];
  *(_BYTE*)(a1 + 77) = v11[32];
  *(_BYTE*)(a1 + 78) = v11[33];
  *(_BYTE*)(a1 + 79) = v11[34];
  result = nn_mii_detail_GetGlassColorFromVer3_plt((unsigned int)v11[35]);
  *(_BYTE*)(a1 + 80) = result;
  *(_BYTE*)(a1 + 81) = v11[36];
  *(_BYTE*)(a1 + 82) = v11[37];
  *(_BYTE*)(a1 + 83) = v11[38];
  *(_BYTE*)(a1 + 84) = v11[39];
  *(_BYTE*)(a1 + 85) = v11[40];
  v13 = v11[41];
  *(_BYTE*)(a1 + 87) = 0;
  *(_BYTE*)(a1 + 86) = v13;
  v14 = *(__int64*)((char*)a6 + 14);
  v16 = *a6;
  v15 = a6[1];
  *(_QWORD*)a1 = a3;
  *(_QWORD*)(a1 + 8) = a4;
  *(_BYTE*)(a1 + 39) = a5;
  *(_QWORD*)(a1 + 16) = v16;
  *(_QWORD*)(a1 + 24) = v15;
  *(_QWORD*)(a1 + 30) = v14;
  return result;
}

#pragma GCC visibility pop
