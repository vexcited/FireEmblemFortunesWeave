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

#pragma GCC visibility pop
