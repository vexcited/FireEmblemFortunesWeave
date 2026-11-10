#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 memset_plt(void* this_, void*, int);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_gs_TryWaitNativeSync_plt(_QWORD);
__int64 nn_os_FinalizeMutex_plt(_QWORD);
__int64 nn_os_InitializeMutex_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_vi2_GetRecordedTimestamp_plt(_QWORD, _QWORD);
__int64 nn_vi2_GetTimestampRecorderReleaseFence_plt(_QWORD);
__int64 nn_vi_Layer_Layer_plt_8755f0(_QWORD);
__int64 nn_vi_Layer_Layer_plt_875850(_QWORD);
extern _UNKNOWN SdkData_f6f428;
extern _UNKNOWN SdkData_f6f8f8;
extern _UNKNOWN nn_vi_detail_g_MovieMakerLayer;
extern _UNKNOWN nn_vi_detail_g_RecordingLayer;
extern _UNKNOWN nn_vi_detail_g_SharingLayer;
extern __int16 SdkData_f6f928;
extern __int16 SdkData_f6fb28;
extern __int16 SdkData_f6fb94;
extern __int16 SdkData_f6fbe0;
extern __int16 SdkData_f6fc28;
extern __int16 SdkData_f6fcb8;
extern __int64 SdkData_e88f80;
extern __int64 SdkData_e88fa0;
extern __int64 SdkData_e88fa8;
extern __int64 SdkData_e88fb0;
extern __int64 SdkData_f6f418;
extern __int64 SdkData_f6f420;
extern __int64 SdkData_f6f8fc;
extern __int64 SdkData_f6f908;
extern __int64 SdkData_f6f92c;
extern __int64 SdkData_f6f938;
extern __int64 SdkData_f6f948;
extern __int64 SdkData_f6fb2c;
extern __int64 SdkData_f6fb38;
extern __int64 SdkData_f6fcc0;
extern __int64 SdkData_f6fcc8;
extern __int64 SdkData_f6fcd0;
extern __int64 SdkData_f6fcd8;
extern __int64 SdkData_f6fce0;
extern __int64 SdkData_f6fce8;
extern __int64 SdkData_f6fcf8;
extern __int64 SdkData_f6fd00;
extern __int64 SdkData_f6fd08;
extern __int64 SdkData_f6fd10;
extern __int64 SdkData_f6fd18;
extern __int64 SdkData_f6fd20;
extern __int64 nn_vi_detail_g_DefaultDisplay;
extern __int64 nn_vi_detail_g_Layer;
extern char SdkData_f6fa90;
extern char SdkData_f6fad8;
extern char SdkData_f6fb20;
extern char SdkData_f6fb48;
extern char SdkData_f6fbd8;
extern char SdkData_f6fbe2;
extern char SdkData_f6fc2a;
extern char SdkData_f6fc74;
extern char SdkData_f711e4;
extern int SdkData_f6f910;
extern int SdkData_f6f940;
extern int SdkData_f6fb40;
extern int SdkData_f6fb90;
extern int SdkData_f6fbdc;
extern int SdkData_f6fc70;
extern int SdkData_f6fcbc;
extern int SdkData_f6fcf0;
extern int SdkData_f6fcf4;
extern int SdkData_f711e8;
__int64 nn_vi_5de6e0(__int64 result);
__int64 nn_vi_5df670(_QWORD* a1);
__int64 nn_vi_5df6c0(_QWORD* a1);
__int64 nn_vi_5e0440(_QWORD* a1);
__int64 nn_vi_5e0460(_QWORD* a1);
__int64 nn_vi_5e04b0();

__int64 nn_vi_5de6e0(__int64 result)
{
  unsigned __int64* v1;
  __int64 v2;
  unsigned __int64 v3;
  _QWORD* v4;
  unsigned __int64** v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v11[2];

  v1 = *(unsigned __int64**)result;
  v2 = *(_QWORD*)(result + 8) + 16LL;
  v3 = **(_QWORD**)result;
  v4 = (_QWORD*)(v2 + 152 * v3);
  if (v4[16] != 0) {
    if (v4[18] != 0) {
    LABEL_5:
      v3 = *v1;
      goto LABEL_6;
    }
    v5 = (unsigned __int64**)result;
    result = nn_vi2_GetRecordedTimestamp_plt(v4, 4);
    if (result != 0) {
    LABEL_4:
      v4[18] = result;
      goto LABEL_5;
    }
    v11[0] = nn_vi2_GetTimestampRecorderReleaseFence_plt(v4);
    v11[1] = v7;
    result = nn_gs_TryWaitNativeSync_plt(v11);
    if ((result & 1) == 0) {
      goto LABEL_5;
    }
    v8 = **v5;
    if (v8 != 0) {
      if (v8 >= 9) {
        goto LABEL_21;
      }
      v9 = v2 + 152 * (v8 - 1);
      v10 = *(_QWORD*)(v9 + 128);
      if (v10 == 0) {
        goto LABEL_19;
      }
    }
    else {
      v9 = v2 + 1064;
      v10 = *(_QWORD*)(v2 + 1192);
      if (v10 == 0) {
        goto LABEL_19;
      }
    }
    if (v10 + 1 == v4[16]) {
      result = nn_vi2_GetRecordedTimestamp_plt(v9, 16);
      goto LABEL_4;
    }
  LABEL_19:
    result = v4[17];
    goto LABEL_4;
  }
LABEL_6:
  if (v3 == 0) {
    v6 = 7;
    goto LABEL_10;
  }
  if (v3 >= 9) {
    result = nn_diag_detail_AbortImpl_plt_856170(result);
  LABEL_21:
    nn_diag_detail_AbortImpl_plt_856170(result);
    __udf(0);
  }
  v6 = v3 - 1;
LABEL_10:
  *v1 = v6;
  return result;
}

__int64 nn_vi_5df670(_QWORD* a1)
{
  *a1 = SdkData_e88f80 + 16;
  nn_os_FinalizeMutex_plt(a1 + 65);
  *a1 = SdkData_e88fa8 + 16;
  return nn_os_FinalizeMutex_plt(a1 + 1);
}

__int64 nn_vi_5df6c0(_QWORD* a1)
{
  *a1 = SdkData_e88fa0 + 16;
  a1[156] = SdkData_e88fb0 + 16;
  return nn_os_FinalizeMutex_plt(a1 + 311);
}

__int64 nn_vi_5e0440(_QWORD* a1)
{
  *a1 = SdkData_e88fb0 + 16;
  return nn_os_FinalizeMutex_plt(a1 + 155);
}

__int64 nn_vi_5e0460(_QWORD* a1)
{
  *a1 = SdkData_e88fb0 + 16;
  nn_os_FinalizeMutex_plt(a1 + 155);
  return SdkRoutine_857220(a1, 1272);
}

__int64 nn_vi_5e04b0()
{
  __int64 result;

  fw_rtld_RegisterCrtDestructor();
  SdkData_f6f928 = 0;
  SdkData_f6f92c = 0;
  SdkData_f6f938 = 0;
  SdkData_f6f940 = 0;
  nn_vi_detail_g_DefaultDisplay = SdkData_e88fa8 + 16;
  nn_os_InitializeMutex_plt(&SdkData_f6f928, 0, 0);
  SdkData_f6f948 = 0;
  SdkData_f6fa90 = 0;
  SdkData_f6fad8 = 0;
  SdkData_f6fb20 = 0;
  SdkData_f6fb28 = 0;
  SdkData_f6fb38 = 0;
  SdkData_f6fb40 = 0;
  nn_vi_detail_g_DefaultDisplay = SdkData_e88f80 + 16;
  SdkData_f6fb2c = 0;
  nn_os_InitializeMutex_plt(&SdkData_f6fb28, 1, 0);
  SdkData_f6fb48 = 0;
  SdkData_f6fb90 = 0;
  SdkData_f6fb94 = 0;
  SdkData_f6fbd8 = 0;
  SdkData_f6fbdc = 0;
  SdkData_f6fbe0 = 0;
  SdkData_f6fbe2 = 0;
  SdkData_f6fcbc = 60;
  SdkData_f6fcf4 = 60;
  SdkData_f6fc28 = 0;
  SdkData_f6fc2a = 0;
  SdkData_f6fc70 = 0;
  SdkData_f6fc74 = 0;
  SdkData_f6fcb8 = 0;
  SdkData_f6fcc0 = 0;
  SdkData_f6fcc8 = 0;
  SdkData_f6fcd0 = 0;
  SdkData_f6fcd8 = 0;
  SdkData_f6fce0 = 0;
  SdkData_f6fce8 = 0;
  SdkData_f6fcf0 = 0;
  *(__int64*)((char*)&SdkData_f6fd20 + 5) = 0;
  SdkData_f6fd20 = 0;
  SdkData_f6fd18 = 0;
  SdkData_f6fd10 = 0;
  SdkData_f6fd08 = 0;
  SdkData_f6fd00 = 0;
  SdkData_f6fcf8 = 0;
  fw_rtld_RegisterCrtDestructor();
  nn_vi_Layer_Layer_plt_8755f0(&nn_vi_detail_g_Layer);
  SdkData_f6f418 = 0;
  nn_vi_detail_g_Layer = SdkData_e88fa0 + 16;
  SdkData_f6f908 = 0;
  SdkData_f6f910 = 0;
  SdkData_f6f420 = SdkData_e88fb0 + 16;
  SdkData_f6f8fc = 0;
  memset_plt((void*)&SdkData_f6f428, nullptr, 1234);
  nn_os_InitializeMutex_plt(&SdkData_f6f8f8, 0, 0);
  fw_rtld_RegisterCrtDestructor();
  nn_vi_Layer_Layer_plt_875850(&nn_vi_detail_g_RecordingLayer);
  nn_vi_Layer_Layer_plt_875850(&nn_vi_detail_g_MovieMakerLayer);
  result = nn_vi_Layer_Layer_plt_875850(&nn_vi_detail_g_SharingLayer);
  SdkData_f711e4 = 0;
  SdkData_f711e8 = 0;
  return result;
}

#pragma GCC visibility pop
