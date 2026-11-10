#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_53bd0(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void
gfx_shader_Archive_CreateShader(PSEUDO_X8, __int64, __int64, unsigned __int64,
                                __int64, unsigned __int64);
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 GameRoutine_5de60(_QWORD, _QWORD);
__int64 GameRoutine_5fc230(_QWORD);
__int64 GameRoutine_604020(_QWORD);
__int64 GameRoutine_604060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_615760(_QWORD, _QWORD);
__int64 GameRoutine_ad5000(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ad5280(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fc5768[])();
extern __int64* game_g_frame_clock_ptr[3];
extern int* GameData_1fc57d8[5];
extern int GameData_21675c0;
extern int GameData_21675c4;
float exp2f(float);
__int64 gfxa_TaskBloom_Impl_Impl(__int64* a1, __int64 a2);
__int64 TaskBloom_b4c560(_DWORD* a1, _QWORD* a2);
__int64 gxc_NvnStateCache_BindBlendState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindDepthStencilState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindMultisampleState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindPolygonState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_Reset(_QWORD);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
extern _UNKNOWN** GameData_212e738;
extern int GameData_21fded0;
extern int GameData_21fdee0;
extern int GameData_21fdef4;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
__int64 TaskBloom_b4c7e0(__int64 result, __int64 a2, _QWORD* a3, _QWORD* a4,
                         __int64 a5);

__int64 gfxa_TaskBloom_Impl_Impl(__int64* a1, __int64 a2)
{
  __int64 (***v3)();
  __int64* v4;
  __int64 v5;
  __int64 i;
  __int64 (**v7)();
  __int64 (**v8)();
  __int64 v9;
  __int64 (**v10)();
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 result;
  char v18;
  __int64 v19;
  __int64 v20;
  int v21;
  _QWORD* v22;
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
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int* v43;
  int v44;
  __int64 v45;
  __int64 (**v46)();
  __int64 v47;
  __int64 v48;
  __int64 (***v49)();
  _QWORD v50[4];
  __int64 v51;

  *a1 = a2;
  GameRoutine_604020(a1 + 1);
  a1[17] = 0;
  v3 = (__int64 (***)())(a1 + 17);
  a1[41] = 0;
  a1[42] = 0;
  a1[43] = 0;
  a1[44] = 0;
  a1[16] = -1;
  a1[45] = 0;
  a1[46] = 0;
  *((_DWORD*)a1 + 94) = 0;
  a1[55] = 0;
  a1[56] = 0;
  a1[57] = 0;
  a1[58] = 0;
  a1[59] = 0;
  a1[60] = 0;
  *((_DWORD*)a1 + 122) = 0;
  a1[69] = 0;
  a1[70] = 0;
  a1[71] = 0;
  a1[72] = 0;
  a1[73] = 0;
  a1[74] = 0;
  *((_DWORD*)a1 + 150) = 0;
  a1[93] = 0;
  a1[92] = 0;
  a1[91] = 0;
  a1[90] = 0;
  *((_DWORD*)a1 + 178) = 0;
  a1[88] = 0;
  a1[87] = 0;
  a1[86] = 0;
  a1[85] = 0;
  a1[84] = 0;
  a1[83] = 0;
  *((_DWORD*)a1 + 108) = 0;
  a1[52] = 0;
  a1[53] = 0;
  a1[50] = 0;
  a1[51] = 0;
  a1[48] = 0;
  a1[49] = 0;
  *((_DWORD*)a1 + 136) = 0;
  a1[67] = 0;
  a1[66] = 0;
  a1[65] = 0;
  a1[63] = 0;
  a1[64] = 0;
  a1[62] = 0;
  *((_DWORD*)a1 + 164) = 0;
  a1[81] = 0;
  a1[80] = 0;
  a1[79] = 0;
  a1[78] = 0;
  a1[77] = 0;
  a1[76] = 0;
  a1[31] = 0;
  *((_DWORD*)a1 + 66) = 0;
  a1[32] = 0;
  a1[29] = 0;
  a1[30] = 0;
  a1[27] = 0;
  a1[28] = 0;
  a1[25] = 0;
  a1[26] = 0;
  a1[23] = 0;
  a1[24] = 0;
  a1[21] = 0;
  a1[22] = 0;
  a1[19] = 0;
  a1[20] = 0;
  a1[18] = 0;
  *((_DWORD*)a1 + 80) = 0;
  a1[38] = 0;
  a1[39] = 0;
  a1[36] = 0;
  a1[37] = 0;
  a1[34] = 0;
  a1[35] = 0;
  v46 = GameData_1fc5768;
  v49 = &v46;
  memset(v50, 0, sizeof(v50));
  GameRoutine_5fc230(v50);
  if (v49 != nullptr) {
    ((void (*)(__int64 (***)(), _QWORD*))(*v49)[6])(v49, v50);
  }
  v4 = game_g_frame_clock_ptr[0];
  GameRoutine_604060(a1 + 1, *game_g_frame_clock_ptr[0] + 568, v50);
  a1[16] = GameRoutine_615760(*(_QWORD*)(*v4 + 552), a1 + 1);
  if (v49 == &v46) {
    v5 = 4;
    goto LABEL_7;
  }
  if (v49 != nullptr) {
    v5 = 5;
  LABEL_7:
    (*v49)[v5]();
  }
  for (i = 0; i != 7; ++i) {
    gfx_shader_Archive_CreateShader((void*)(&v46), *(_QWORD*)(*a1 + 13408),
                                    (__int64)"ImageProcessing", 0xFu,
                                    (__int64)"Bloom", 5u);
    v8 = v46;
    v9 = v47;
    v10 = v3[1];
    v46 = nullptr;
    v47 = 0;
    *v3 = v8;
    v3[1] = (__int64 (**)())v9;
    if (v10 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v10 + 1),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*((void (**)(__int64 (**)()))*v10 + 2))(v10);
      std___1___shared_weak_count___release_weak(v10);
      v11 = v47;
      if (v47 == 0) {
        goto LABEL_9;
      }
    }
    else {
      v11 = v47;
      if (v47 == 0) {
        goto LABEL_9;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    }
  LABEL_9:
    GameRoutine_ad5000(*v3, "sub_pass", 8, (unsigned int)i);
    v7 = *v3;
    v3 += 2;
    GameRoutine_ad5280(v7);
  }
  DecalObject_a91100(a1 + 31, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 20);
  v12 = 0;
  do {
    v18 = 1;
    v19 = 0;
    v51 = v12;
    v20 = (__int64)&a1[14 * v12 + 38];
    v21 = 2 << v12;
    while (1) {
      v22 = (_QWORD*)(v20 + 56 * v19);
      v23 = *a1;
      LODWORD(v46) = 3;
      v24 = *(_QWORD*)(v23 + 312);
      v25 = *(_QWORD*)(*(_QWORD*)(v23 + 552) + 16LL);
      v47 = 8;
      v48 = v24;
      GameRoutine_53bd0((void*)(v50), &v46);
      v26 = v50[0];
      v27 = *v22;
      v50[0] = 0;
      *v22 = v26;
      if (v27 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v27 + 8LL))(v27);
        v28 = v50[0];
        v50[0] = 0;
        if (v28 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v28 + 8LL))(v28);
        }
      }
      GameRoutine_53bd0((void*)(v50), &v46);
      v29 = v50[0];
      v30 = v22[1];
      v50[0] = 0;
      v22[1] = v29;
      if (v30 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v30 + 8LL))(v30);
        v31 = v50[0];
        v50[0] = 0;
        if (v31 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v31 + 8LL))(v31);
        }
      }
      v32 = (*(__int64 (**)(__int64))(*(_QWORD*)v25 + 80LL))(v25);
      v22[4] = v33;
      v34 = *v22;
      v22[3] = v32;
      GameRoutine_5de60(v22 + 3, v34);
      v35 = (*(__int64 (**)(__int64))(*(_QWORD*)v25 + 80LL))(v25);
      v22[6] = v36;
      v37 = v22[1];
      v22[5] = v35;
      GameRoutine_5de60(v22 + 5, v37);
      v38 = *v22;
      v39 = (__int64*)(*a1 + 13304);
      if (*(_BYTE*)(*a1 + 16700) != 0) {
        v39 = (__int64*)(*(_QWORD*)(*a1 + 16672) + 24LL);
      }
      v40 = *v39;
      v41 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v38 + 56LL))(*v22);
      if ((v18 & 1) == 0) {
        break;
      }
      *(_DWORD*)(v41 + 4) = 0;
      *(float*)v41 = 1.0f / (float)((int)v40 / v21);
      (*(void (**)(__int64))(*(_QWORD*)v38 + 64LL))(v38);
      v42 = v22[1];
      v43 = (int*)(*a1 + 13304);
      if (*(_BYTE*)(*a1 + 16700) != 0) {
        v43 = (int*)(*(_QWORD*)(*a1 + 16672) + 24LL);
      }
      v44 = *v43;
      v45 = (*(__int64 (**)(__int64))(*(_QWORD*)v42 + 56LL))(v42);
      *(_DWORD*)(v45 + 4) = 0;
      *(float*)v45 = 1.0f / (float)(v44 / v21);
      (*(void (**)(__int64))(*(_QWORD*)v42 + 64LL))(v42);
      v18 = 0;
      v19 = 1;
    }
    *(_DWORD*)v41 = 0;
    *(float*)(v41 + 4) = 1.0f / (float)(SHIDWORD(v40) / v21);
    (*(void (**)(__int64))(*(_QWORD*)v38 + 64LL))(v38);
    v13 = v22[1];
    v14 = *a1 + 13304;
    if (*(_BYTE*)(*a1 + 16700) != 0) {
      v14 = *(_QWORD*)(*a1 + 16672) + 24LL;
    }
    v15 = *(_DWORD*)(v14 + 4);
    v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 56LL))(v13);
    *(_DWORD*)v16 = 0;
    *(float*)(v16 + 4) = 1.0f / (float)(v15 / v21);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 64LL))(v13);
    v12 = v51 + 1;
  } while (v51 != 3);
  return result;
}

__int64 TaskBloom_b4c560(_DWORD* a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  int v2;
  bool v4;
  int v5;
  _BYTE* v6;
  __int64 v7;
  unsigned int v8;
  int* v9;
  float v10;
  __int64 v11;
  float v12;
  float v13;
  __int64 v14;
  float v15;
  float v16;
  __int64 v17;
  float v18;
  float v19;
  __int64 v20;
  float v21;
  float* v22;
  _DWORD* v23;
  __int64 i;
  int v25;
  int v26;
  int v27;
  __int64 v28;
  int* v29;
  int v30;
  __int64 v31;
  int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v2 = a1[66];
  v4 = v2 < -1;
  v5 = ((_BYTE)v2 + 1) & 1;
  if (v4) {
    v5 = -v5;
  }
  a1[66] = v5;
  v6 = (_BYTE*)*a2;
  v7 = *(_QWORD*)&a1[2 * v5 + 62];
  v8 = *(_DWORD*)(*(_QWORD*)a1 + 13240LL) - 2;
  if (v8 > 4) {
    v9 = &GameData_21675c4;
  }
  else {
    v9 = GameData_1fc57d8[v8];
  }
  v10 = *(float*)v9;
  v11 = 208;
  v12 = v10 / *(float*)&GameData_21675c0;
  if (v6[176] != 0) {
    v11 = 172;
  }
  v13 = *(float*)&v6[v11];
  v14 = 288;
  if (v6[256] != 0) {
    v14 = 252;
  }
  v15 = v12 * v13;
  v16 = *(float*)&v6[v14];
  v17 = 368;
  if (v6[336] != 0) {
    v17 = 332;
  }
  v18 = v15 * v16;
  v19 = exp2f(*(float*)&v6[v17] + -0x1.8000000000000p+1f),
  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v20 = 128;
  if (v6[96] != 0) {
    v20 = 92;
  }
  v21 = v19 * *(float*)&v6[v20];
  v22 = (float*)(*(__int64 (**)(__int64))(*(_QWORD*)v7 + 56LL))(v7),
  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v22[4] = v21;
  *v22 = v15;
  v22[1] = v15 - v18;
  v22[2] = v18 + v18;
  v22[3] = 0x1.0000000000000p-2f / (float)(v18 + 0x1.4f8b580000000p-17f);
  (*(void (**)(__int64))(*(_QWORD*)v7 + 64LL))(v7),
      result = COERCE_AS(__typeof__(result),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v23 = a1 + 76;
  for (i = 0; i != 4; ++i) {
    v25 = v23[4];
    v26 = 2 << i;
    v4 = v25 < -1;
    v27 = ((_BYTE)v25 + 1) & 1;
    if (v4) {
      v27 = -v27;
    }
    v23[4] = v27;
    v28 = *(_QWORD*)&v23[2 * v27];
    v29 = (int*)(*(_QWORD*)a1 + 13304LL);
    if (*(_BYTE*)(*(_QWORD*)a1 + 16700LL) != 0) {
      v29 = (int*)(*(_QWORD*)(*(_QWORD*)a1 + 16672LL) + 24LL);
    }
    v30 = *v29;
    v31 = (*(__int64 (**)(__int64))(*(_QWORD*)v28 + 56LL))(v28),
    result = COERCE_AS(__typeof__(result),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    *(_DWORD*)(v31 + 4) = 0;
    *(float*)v31 = 0x1.0000000000000p+0f / (float)(v30 / v26);
    (*(void (**)(__int64))(*(_QWORD*)v28 + 64LL))(v28),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v32 = v23[18];
    v4 = v32 < -1;
    v33 = ((_BYTE)v32 + 1) & 1;
    if (v4) {
      v33 = -v33;
    }
    v23[18] = v33;
    v34 = *(_QWORD*)&v23[2 * v33 + 14];
    v35 = *(_QWORD*)a1 + 13304LL;
    if (*(_BYTE*)(*(_QWORD*)a1 + 16700LL) != 0) {
      v35 = *(_QWORD*)(*(_QWORD*)a1 + 16672LL) + 24LL;
    }
    v36 = *(_DWORD*)(v35 + 4);
    v37 = (*(__int64 (**)(__int64))(*(_QWORD*)v34 + 56LL))(v34),
    result = COERCE_AS(__typeof__(result),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    *(_DWORD*)v37 = 0;
    *(float*)(v37 + 4) = 0x1.0000000000000p+0f / (float)(v36 / v26);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v34 + 64LL))(v34);
    v23 += 28;
  }
  return result;
}

__int64 TaskBloom_b4c7e0(__int64 result, __int64 a2, _QWORD* a3, _QWORD* a4,
                         __int64 a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  int v32;
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
  int v43;
  __int64 v44;
  __int64 v45;
  int v46;
  __int64 v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  int v54;
  int v55;
  __int64 v56;
  unsigned __int64* v57;
  unsigned __int64* v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned int v67;
  __int64 v68;
  __int64 v69;
  int v70;
  int v71;
  int v72;
  int v73;
  unsigned int v74;
  int v75;
  int v76;
  unsigned int v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  void (**v82)(__int64, __int64);
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  unsigned int v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  unsigned int v94;
  __int64 v95;
  int v96;
  unsigned int v97;
  unsigned int v98;
  bool v99;
  char v100;
  __int64 v101;
  __int64 i;
  unsigned int v103;
  unsigned int v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  unsigned int v109;
  unsigned int v110;
  __int64 v111;
  int v112;
  __int64 v113;
  __int64 v114;
  unsigned int v115;
  unsigned int v116;
  int v117;
  int v118;
  int v119;
  _QWORD v120[3];
  int v121;
  __int64 v122;
  int v123;
  __int64 v124;
  int v125;
  __int64 v126;
  int v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  _QWORD v135[2];
  _QWORD v136[7];
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  _QWORD v144[4];

  v7 = 128;
  if (*(_BYTE*)(*(_QWORD*)a5 + 96LL) != 0) {
    v7 = 92;
  }
  if (*(float*)(*(_QWORD*)a5 + v7) > 0.0f) {
    v144[2] = v5;
    v144[3] = v6;
    v8 = result;
    v11 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[2] + 16LL))(a3[2]);
    v137 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 32LL))(v11);
    v138 = v12;
    v13 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[3] + 16LL))(a3[3]);
    v139 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 32LL))(v13);
    v140 = v14;
    v15 = &v140;
    v16 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[4] + 16LL))(a3[4]);
    v141 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 32LL))(v16);
    v142 = v17;
    v18 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[5] + 16LL))(a3[5]);
    v143 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 32LL))(v18);
    v144[0] = v19;
    v20 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[2] + 16LL))(a3[2]);
    v135[1] = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 40LL))(v20);
    v21 = a3[3];
    LODWORD(v136[0]) = v22;
    v23 = v136;
    v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    v136[1] = (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 40LL))(v24);
    v25 = a3[4];
    LODWORD(v136[2]) = v26;
    v27 = (*(__int64 (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    v136[3] = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 40LL))(v27);
    v28 = a3[5];
    LODWORD(v136[4]) = v29;
    v30 = (*(__int64 (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    v136[5] = (*(__int64 (**)(__int64))(*(_QWORD*)v30 + 40LL))(v30);
    v31 = a3[6];
    LODWORD(v136[6]) = v32;
    v33 = (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    v128 = (*(__int64 (**)(__int64))(*(_QWORD*)v33 + 32LL))(v33);
    v129 = v34;
    v35 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[7] + 16LL))(a3[7]);
    v130 = (*(__int64 (**)(__int64))(*(_QWORD*)v35 + 32LL))(v35);
    v131 = v36;
    v37 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[8] + 16LL))(a3[8]);
    v132 = (*(__int64 (**)(__int64))(*(_QWORD*)v37 + 32LL))(v37);
    v133 = v38;
    v39 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[9] + 16LL))(a3[9]);
    v134 = (*(__int64 (**)(__int64))(*(_QWORD*)v39 + 32LL))(v39);
    v135[0] = v40;
    v41 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[6] + 16LL))(a3[6]);
    v120[2] = (*(__int64 (**)(__int64))(*(_QWORD*)v41 + 40LL))(v41);
    v42 = a3[7];
    v121 = v43;
    v44 = (*(__int64 (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
    v122 = (*(__int64 (**)(__int64))(*(_QWORD*)v44 + 40LL))(v44);
    v45 = a3[8];
    v123 = v46;
    v47 = (*(__int64 (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
    v124 = (*(__int64 (**)(__int64))(*(_QWORD*)v47 + 40LL))(v47);
    v48 = a3[9];
    v125 = v49;
    v50 = (*(__int64 (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
    v51 = (*(__int64 (**)(__int64))(*(_QWORD*)v50 + 40LL))(v50);
    v52 = *(_QWORD*)v8;
    v126 = v51;
    v53 = a4[1];
    v127 = v54;
    v55 = *(unsigned __int8*)(v52 + 16700);
    v56 = *(_QWORD*)(v52 + 16672);
    v57 = (unsigned __int64*)(v52 + 13304);
    v58 = (unsigned __int64*)(v56 + 24);
    if (v55 != 0) {
      v57 = v58;
    }
    v59 = *v57;
    v60 = HIDWORD(*v57);
    gxc_NvnStateCache_Reset(v53);
    gxc_NvnStateCache_SetCommandList(a4[1], *a4);
    v61 = a4[1];
    gxc_NvnStateCache_BindDepthStencilState(v61,
                                            (unsigned int)GameData_21fded0);
    gxc_NvnStateCache_BindBlendState(v61, (unsigned int)GameData_21fdee0);
    gxc_NvnStateCache_BindPolygonState(v61, (unsigned int)GameData_21fdf08);
    gxc_NvnStateCache_BindMultisampleState(v61, (unsigned int)GameData_21fdf14);
    gxc_NvnStateCache_ClearCommandList(a4[1]);
    v62 = v8 + 16LL * *(int*)(v8 + 264);
    (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 224LL))(*a4, 2, 0, *(_QWORD*)(v62 + 272),
                                *(_QWORD*)(v62 + 280));
    (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1);
    ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 18);
    v63 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]);
    v64 = (*(__int64 (**)(__int64))(*(_QWORD*)v63 + 32LL))(v63);
    (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v64,
                                                                   v65);
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 72LL))(*a4, 0, 0, (unsigned int)v59, (unsigned int)v60);
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 88LL))(*a4, 0, 0, (unsigned int)v59, (unsigned int)v60);
    v66 = *a4;
    v120[0] = 0;
    v120[1] = 0;
    (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v66 + 144LL))(v66, 0,
                                                                    v120);
    v116 = (int)v59 / 2;
    v67 = (int)(v60 + (v59 >> 63)) >> 1;
    v115 = v67;
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 72LL))(*a4, 0, 0, (unsigned int)((int)v59 / 2), v67);
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 88LL))(*a4, 0, 0, (unsigned int)((int)v59 / 2), v67);
    v113 = v138;
    v114 = v137;
    (*(void (**)(_QWORD))(*(_QWORD*)*a4 + 96LL))(*a4);
    v68 = *a4;
    v120[0] = 0;
    v120[1] = 0;
    (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v68 + 144LL))(v68, 0,
                                                                    v120);
    (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v128,
                                                                   v129);
    v69 = *a4;
    v120[0] = 0;
    v120[1] = 0;
    (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v69 + 144LL))(v69, 0,
                                                                    v120);
    v70 = v60 + 3;
    v71 = v59 + 3;
    v111 = v8;
    if ((v60 & 0x80000000) == 0LL) {
      v72 = v60;
    }
    else {
      v72 = v60 + 7;
    }
    v73 = v60 + 15;
    if ((v60 & 0x80000000) == 0LL) {
      v70 = v60;
      v73 = v60;
    }
    v74 = v70 >> 2;
    if ((v59 & 0x80000000) != 0LL) {
      v75 = v59 + 7;
    }
    else {
      v71 = v59;
      v75 = v59;
    }
    v76 = v59 + 15;
    v118 = v73;
    v77 = v71 >> 2;
    if ((v59 & 0x80000000) == 0LL) {
      v76 = v59;
    }
    v112 = v76;
    (*(void (**)(void*))(*(_QWORD*)*a4 + 72LL))((void*)*a4);
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 88LL))(*a4, 0, 0, v77, v74);
    (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v139,
                                                                   v140);
    v78 = *a4;
    v120[0] = 0;
    v120[1] = 0;
    (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v78 + 144LL))(v78, 0,
                                                                    v120);
    (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v130,
                                                                   v131);
    v79 = *a4;
    v120[0] = 0;
    v120[1] = 0;
    (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v79 + 144LL))(v79, 0,
                                                                    v120);
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 72LL))(*a4, 0, 0, (unsigned int)(v75 >> 3),
                               (unsigned int)(v72 >> 3));
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 88LL))(*a4, 0, 0, (unsigned int)(v75 >> 3),
                               (unsigned int)(v72 >> 3));
    (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v141,
                                                                   v142);
    v80 = *a4;
    v120[0] = 0;
    v120[1] = 0;
    (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v80 + 144LL))(v80, 0,
                                                                    v120);
    (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v132,
                                                                   v133);
    v81 = *a4;
    v120[0] = 0;
    v120[1] = 0;
    (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v81 + 144LL))(v81, 0,
                                                                    v120);
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 72LL))(*a4, 0, 0, (unsigned int)(v112 >> 4),
                               (unsigned int)(v118 >> 4));
    v82 = (void (**)(__int64, __int64))GameData_212e738;
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 88LL))(*a4, 0, 0, (unsigned int)(v112 >> 4),
                               (unsigned int)(v118 >> 4));
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 96LL))(*a4, v143,
                                                                  v144[0]);
    v83 = *a4;
    v120[0] = 0;
    v120[1] = 0;
    (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v83 + 144LL))(v83, 0,
                                                                    v120);
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 96LL))(*a4, v134,
                                                                  v135[0]);
    v84 = *a4;
    v120[0] = 0;
    v120[1] = 0;
    (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v84 + 144LL))(v84, 0,
                                                                    v120);
    v85 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]);
    v86 = (*(__int64 (**)(__int64))(*(_QWORD*)v85 + 32LL))(v85);
    (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v86,
                                                                   v87);
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 72LL))(*a4, 0, 0, (unsigned int)v59, (unsigned int)v60);
    v119 = v60;
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 88LL))(*a4, 0, 0, (unsigned int)v59, (unsigned int)v60);
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
        *a4, 3, *(_QWORD*)(*(_QWORD*)(v111 + 136) + 144LL));
    v88 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
    v89 = (*(__int64 (**)(__int64))(*(_QWORD*)v88 + 40LL))(v88);
    (*(void (**)(_QWORD, __int64, _QWORD, __int64, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 248LL))(*a4, 2, 0, v89, v90,
                                *(unsigned int*)(v111 + 128));
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0);
    (*v82)(*a4 + 8LL, 18);
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
        *a4, 3, *(_QWORD*)(*(_QWORD*)(v111 + 200) + 144LL));
    (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v114,
                                                                   v113);
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 72LL))(*a4, 0, 0, v116, v115);
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 88LL))(*a4, 0, 0, v116, v115);
    v91 = *a4;
    v92 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]);
    v93 = (*(__int64 (**)(__int64))(*(_QWORD*)v92 + 40LL))(v92);
    (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
        *(_QWORD*)v91 + 248LL))(v91, 2, 0, v93, v94,
                                *(unsigned int*)(v111 + 128));
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0);
    (*v82)(*a4 + 8LL, 18);
    v95 = -3;
    do {
      (*(void (**)(_QWORD, _QWORD, __int64))(*(_QWORD*)*a4 + 96LL))(
          *a4, *(v15 - 1), *v15);
      v96 = 2 << (v95 + 4);
      v97 = (int)v59 / v96;
      v98 = v119 / v96;
      (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a4 + 72LL))(*a4, 0, 0, (unsigned int)((int)v59 / v96),
                                 (unsigned int)(v119 / v96));
      (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a4 + 88LL))(*a4, 0, 0, v97, v98);
      (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a4 + 248LL))(*a4, 2, 0, *(v23 - 1), *v23,
                                  *(unsigned int*)(v111 + 128));
      (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0);
      (*v82)(*a4 + 8LL, 18);
      v99 = __CFADD__(v95++, 1);
      v23 += 2;
      v15 += 2;
    } while (!v99);
    v117 = v59;
    v100 = 3;
    v101 = 0;
    for (i = 0;; i -= 112) {
      v103 = v117 / (2 << v100);
      v104 = v119 / (2 << v100);
      (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a4 + 72LL))(*a4, 0, 0, v103, v104);
      (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a4 + 88LL))(*a4, 0, 0, v103, v104);
      (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
          *a4, 3, *(_QWORD*)(*(_QWORD*)(v111 + 168) + 144LL));
      (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 96LL))(
          *a4, v135[v101 - 1], v135[v101]);
      v105 = v136[v101 + 5];
      v106 = v136[v101 + 6];
      (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
          *(_QWORD*)*a4 + 248LL))(*a4, 2, 0, v105, v106,
                                  *(unsigned int*)(v111 + 128));
      v107 = v111 + i + 16LL * *(int*)(v111 + i + 656);
      (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
          *(_QWORD*)*a4 + 224LL))(*a4, 2, 1, *(_QWORD*)(v107 + 664),
                                  *(_QWORD*)(v107 + 672));
      (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0);
      ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 18);
      (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 96LL))(
          *a4, v144[v101 - 1], v144[v101]);
      (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a4 + 248LL))(*a4, 2, 0,
                                  *(__int64*)((char*)&v126 + v101 * 8),
                                  *(__int64*)((char*)&v126 + v101 * 8 + 8),
                                  *(unsigned int*)(v111 + 128));
      v108 = v111 + i + 16LL * *(int*)(v111 + i + 712);
      (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
          *(_QWORD*)*a4 + 224LL))(*a4, 2, 1, *(_QWORD*)(v108 + 720),
                                  *(_QWORD*)(v108 + 728));
      result = (*(__int64 (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 +
                                                         272LL))(*a4, 3, 0);
      if (i == -336) {
        break;
      }
      ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 18);
      v109 = v119 / (1 << v100);
      v110 = v117 / (1 << v100);
      (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a4 + 72LL))(*a4, 0, 0, v110, v109);
      (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a4 + 88LL))(*a4, 0, 0, v110, v109);
      (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
          *a4, 3, *(_QWORD*)(*(_QWORD*)(v111 + 216) + 144LL));
      gxc_NvnStateCache_SetCommandList(a4[1], *a4);
      gxc_NvnStateCache_BindBlendState(a4[1], (unsigned int)GameData_21fdef4);
      gxc_NvnStateCache_ClearCommandList(a4[1]);
      (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 96LL))(
          *a4, *(__int64*)((char*)&v141 + v101 * 8),
          *(__int64*)((char*)&v142 + v101 * 8));
      (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
          *(_QWORD*)*a4 + 248LL))(*a4, 2, 0, v105, v106,
                                  *(unsigned int*)(v111 + 128));
      (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0);
      ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 18);
      --v100;
      v101 -= 2;
    }
  }
  return result;
}

#pragma GCC visibility pop
