#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_b48e70(__int64, __int64);
__int64 GameRoutine_b4a510(__int64, __int64);
__int64 GameRoutine_b5a5d0(__int64, __int64, __int64*);
__int64 GameRoutine_b5d610(_DWORD*, __int64, __int64);
__int64 GameRoutine_b60f30(__int64*, __int64, __int64);
__int64 GameRoutine_b61ab0(_DWORD*, __int64, __int64, __int64);
__int64 ResourceBuilder_b61dc0(__int64, __int64, _QWORD**, __int64*);
__int64 TaskEffectDecal_b620c0(__int64, __int64, _QWORD*, _QWORD*, _QWORD*);
__int64 TaskEffect_b5e3a0(__int64, __int64*, _QWORD*, _QWORD*, _QWORD*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _DWORD GameData_1b6bcec[3];
extern __int128 GameData_1a82d20;
extern __int128 GameData_1a834b0;
extern __int128 GameData_1a83620;
extern __int64 (*GameData_1fca000[])();
extern __int64 (*GameData_1fca090[])();
extern __int64 (*GameData_1fca120[])();
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 fw_memory_g_heap_manager_ptr;
float exp2f(float);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_b32f30();
__int64 MainPassEffect_b90e00(__int64 a1, __int64* a2);
__int64 gfxa_MainPassEffect_SetupLightingPass_lambda1_Invoke(__int64 a1,
                                                             __int64* a2);
__int64 gfxa_MainPassEffect_SetupLightingPass_lambda2_Invoke(__int64 a1,
                                                             __int64** a2,
                                                             __int64* a3);
__int64 gfxa_MainPassEffect_Setup3DPass_lambda3_Invoke(__int64 a1, __int64 a2,
                                                       _QWORD* a3);
__int64 gfxa_MainPassEffect_SetupCursorUIPass_lambda1_Invoke(__int64 a1,
                                                             __int64 a2,
                                                             _QWORD* a3);
__int64 gfxa_MainPassEffect_SetupDecalPass_lambda1_Invoke(__int64 a1,
                                                          __int64 a2,
                                                          __int64* a3);
__int64 gfxa_MainPassEffect_SetupOffscreenPass_lambda1_Invoke(__int64 a1,
                                                              __int64 a2,
                                                              _QWORD* a3);

__int64 MainPassEffect_b90e00(__int64 a1, __int64* a2)
{
  int v2;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  struct {
    _QWORD v26[4];
    _QWORD* v27;
  } v26_;
  struct {
    _QWORD v28[4];
    _QWORD* v29;
  } v28_;

  v2 = *((_DWORD*)a2 + 24);
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      192, 16, 0);
  v6 = *v4;
  v28_.v28[0] = GameData_1fca000;
  v28_.v29 = v28_.v28;
  v26_.v27 = v26_.v26;
  v26_.v26[0] = GameData_1fca090;
  v7 = (char*)fw_memory_HeapManager_Allocate(v6, 26, 16, 0);
  *(_QWORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_DWORD*)(v5 + 80) = v2;
  *(_QWORD*)(v5 + 16) = 23;
  *(_QWORD*)(v5 + 24) = v7;
  strcpy(v7, "EffectCalcSOEmitterPass");
  v8 = v28_.v29;
  *(_BYTE*)(v5 + 84) = 1;
  *(_QWORD*)v5 = GameData_1fca120;
  *(_QWORD*)(v5 + 8) = 27;
  if (v8 == nullptr) {
    *(_QWORD*)(v5 + 128) = 0;
    v9 = v26_.v27;
    if (v26_.v27 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_9;
  }
  if (v8 == v28_.v28) {
    *(_QWORD*)(v5 + 128) = v5 + 96;
    (*(void (**)(_QWORD*))(*v8 + 24LL))(v8);
    v9 = v26_.v27;
    if (v26_.v27 != nullptr) {
      goto LABEL_6;
    }
  LABEL_9:
    *(_QWORD*)(v5 + 176) = 0;
    goto LABEL_16;
  }
  *(_QWORD*)(v5 + 128) = (*(__int64 (**)(_QWORD*))(*v8 + 16LL))(v8);
  v9 = v26_.v27;
  if (v26_.v27 == nullptr) {
    goto LABEL_9;
  }
LABEL_6:
  if (v9 == v26_.v26) {
    *(_QWORD*)(v5 + 176) = v5 + 144;
    (*(void (**)(_QWORD*))(*v9 + 24LL))(v9);
  }
  else {
    *(_QWORD*)(v5 + 176) = (*(__int64 (**)(_QWORD*))(*v9 + 16LL))(v9);
  }
  if (v26_.v27 == v26_.v26) {
    v10 = 32;
  }
  else {
    if (v26_.v27 == nullptr) {
      goto LABEL_16;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v26_.v27 + v10))((__int64)v26_.v27);
LABEL_16:
  if (v28_.v29 == v28_.v28) {
    v11 = 32;
  }
  else {
    if (v28_.v29 == nullptr) {
      goto LABEL_21;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v28_.v29 + v11))((__int64)v28_.v29);
LABEL_21:
  v13 = (__int64*)a2[1];
  v12 = a2[2];
  if ((unsigned __int64)v13 >= v12) {
    v15 = *a2;
    v16 = (__int64)v13 - *a2;
    v17 = (v16 >> 3) + 1;
    if (v17 >> 61 != 0) {
      GameRoutine_b32f30();
    }
    v18 = v12 - v15;
    if (v18 >> 2 > v17) {
      v17 = v18 >> 2;
    }
    if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF8LL) {
      v19 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v19 = v17;
    }
    if (v19 != 0) {
      if (v19 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v20 = fw_memory_HeapManager_Allocate(*v4, 8 * v19, 16, 0);
    }
    else {
      v20 = 0;
    }
    v21 = v20 + 8 * v19;
    v22 = v20 + v16 - 8 * (v16 >> 3);
    *(_QWORD*)(v20 + v16) = v5;
    v14 = v20 + v16 + 8;
    memcpy(v22, v15, v16);
    *a2 = v22;
    a2[1] = v14;
    a2[2] = v21;
    if (v15 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(*v4 + v23);
    }
  }
  else {
    *v13 = v5;
    v14 = (__int64)(v13 + 1);
  }
  a2[1] = v14;
  v24 = *(_QWORD*)(v14 - 8);
  v28_.v28[0] = a2;
  v28_.v28[1] = v24;
  return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v24 + 16LL))(v24,
                                                                   v28_.v28);
}

__int64 gfxa_MainPassEffect_SetupLightingPass_lambda1_Invoke(__int64 a1,
                                                             __int64* a2)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  __int64 v3;
  __int64* v5;
  __int64 v6;
  _BYTE* v7;
  __int64 v8;
  float v9;
  int v10;
  bool v11;
  __int64 v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  bool v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  float32x4_t v34;
  int8x16_t v35;
  int8x16_t v36;
  int8x16_t v37;
  float v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  int v49;
  int v50;
  __int64 v51;
  int v52;
  __int64 v53;
  int v54;
  __int64 v55;
  int v56;
  __int64 v57;
  int v58;
  __int64 v59;
  int v60;
  __int64 v61;
  int v62;
  __int64 v63;
  int v64;
  __int64 v65;
  char v66;
  __int64 v67;
  float v68;
  int v69;
  __int64 v70;
  char v71;
  __int64 v72;
  float v73;
  __int64 v74;
  float v75;
  float v76;
  __int64 v77;
  int v78;
  __int64 v79;
  int v80;
  _BYTE* v81;
  __int64 v82;
  __int128 v83;
  int v84;
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
  int v95;
  _QWORD* v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  int* v102;
  float* v103;
  float v104;
  int v105;
  float v106;
  int v108;
  int v109;
  float v110;
  float32x4_t v111;
  __int64* v112;
  _QWORD v113[2];
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  bool v119;
  __int64 v120;
  int v121;
  __int64 v122;
  int v123;
  __int64 v124;
  int v125;
  float32x4_t v126;
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  float v132;
  float v133;
  float v134;
  int v135;
  int v136;
  int v137;
  int v138;
  float v139;
  int v140;
  int v141;
  char v142;
  char v143;
  __int64 v144;
  int v145;
  __int64 v146;
  int v147;
  char v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  int v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  float v162;
  float v163;
  int v164;

  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = *(_QWORD**)(a1 + 8);
  v119 = false;
  v114 = 0;
  v115 = 0;
  v3 = a2[3];
  v116 = 0;
  v117 = 0;
  v122 = 0;
  v124 = 0;
  LANES128(v126).n128_u8[0] = 0;
  v148 = 0;
  v151 = 0x3F8000003F800000LL;
  v152 = 0;
  v153 = 0;
  v164 = 0;
  v120 = 0x3F80000042480000LL;
  v121 = 1065353216;
  v123 = -1;
  v125 = -1;
  v149 = 0x3F80000000000000LL;
  v150 = 0x3F8000003F800000LL;
  v5 = (__int64*)(*v2 + 13304LL);
  v6 = *(_QWORD*)(v3 + 128);
  if (*(_BYTE*)(*v2 + 16700LL) != 0) {
    v5 = (__int64*)(*(_QWORD*)(*v2 + 16672LL) + 24LL);
  }
  v118 = *v5;
  v113[0] = v2[3];
  v113[1] = v6;
  v7 = *(_BYTE**)(*(_QWORD*)(*(_QWORD*)v3 + 8LL) + 128LL);
  v8 = 128;
  if (v7[96] != 0) {
    v8 = 92;
  }
  v119 = *(_DWORD*)&v7[v8] != 0;
  v9 = (*(float (**)(_QWORD))(*(_QWORD*)v2[3] + 120LL))(v2[3]),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = (unsigned __int8)v7[176];
  *(float*)&v120 = v9;
  v11 = v10 == 0;
  v12 = 208;
  if (!v11) {
    v12 = 172;
  }
  v13 = *(_DWORD*)&v7[v12];
  v11 = v7[256] == 0;
  v14 = 288;
  HIDWORD(v120) = v13;
  if (!v11) {
    v14 = 252;
  }
  v121 = *(_DWORD*)&v7[v14];
  v15 = *(_DWORD*)(v3 + 56);
  v16 = *(_QWORD*)(v3 + 8);
  v122 = *(_QWORD*)(v3 + 48);
  v123 = v15;
  v114 = v16;
  LODWORD(v16) = *(_DWORD*)(v3 + 72);
  v124 = *(_QWORD*)(v3 + 64);
  v125 = v16;
  v17 = *(_QWORD*)(v2[7] + 8LL * *(int*)(v2[7] + 224LL) + 208);
  v115 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 56LL))(v17),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64))(*(_QWORD*)v17 + 64LL))(v17),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v18 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL) + 104LL);
  v19 = 120;
  if (*(_BYTE*)(v18 + 90) != 0) {
    v19 = 89;
  }
  v112 = a2;
  if ((*(_BYTE*)(v18 + v19) & 1) == 0) {
    goto LABEL_16;
  }
  v20 = 800;
  if (*(_BYTE*)(v18 + 768) != 0) {
    v20 = 764;
  }
  v21 = *(_DWORD*)(v18 + v20);
  if (v21 <= 2) {
    v22 = GameData_1b6bcec[v21];
  }
  else {
  LABEL_16:
    v22 = 2;
  }
  LODWORD(v149) = v22;
  v23 = *(_QWORD*)(*(_QWORD*)v3 + 8LL);
  v24 = *(_QWORD*)(v2[1] + 288LL);
  v25 = *(_QWORD*)(v23 + 112);
  v26 = *(_QWORD*)(v24 + 792);
  if (v26 == 0) {
    goto LABEL_27;
  }
  v27 = v24 + 792;
  v28 = *(_DWORD*)(*(_QWORD*)(v3 + 24) + 36LL);
  do {
    v29 = *(_DWORD*)(v26 + 32);
    v30 = v29 < v28;
    if (v29 >= v28) {
      v31 = 0;
    }
    else {
      v31 = 8;
    }
    if (!v30) {
      v27 = v26;
    }
    v26 = *(_QWORD*)(v26 + v31);
  } while (v26 != 0);
  if (v27 != v24 + 792 && v28 >= *(_DWORD*)(v27 + 32)) {
    v32 = *(_QWORD*)(v27 + 40);
  }
  else {
  LABEL_27:
    v32 = 0;
  }
  v33 = 720;
  if (*(_BYTE*)(v25 + 672) != 0) {
    v33 = 656;
  }
  v34 = *(float32x4_t*)(v25 + v33);
  if ((unsigned int)(*(_DWORD*)(*game_g_frame_clock_ptr[0] + 13240) - 3) <= 3) {
    v35 = vmulq_f32(v34, COERCE_AS(float32x4_t, GameData_1a83620));
    LANES128(v35).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v35, v35, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0])))
            .n64_u64[0];
    v36 = vmulq_f32(v34, COERCE_AS(float32x4_t, GameData_1a834b0));
    LANES128(v36).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v36, v36, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
            .n64_u64[0];
    v37 = vmulq_f32(v34, COERCE_AS(float32x4_t, GameData_1a82d20));
    LANES128(v37).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v37, v37, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0])))
            .n64_u64[0];
    LANES128(v34).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0])))
            .n64_u32[0] |
        ((unsigned __int64)LANES64_OF(
             vpadd_f32(COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
             .n64_u32[0]
         << 32);
    LANES128(v34).n128_u64[1] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0])))
            .n64_u32[0];
  }
  if (*(_BYTE*)(v25 + 1088) == 1) {
    v38 = *(float*)(v25 + 1084);
  }
  else {
    v39 = *(_QWORD*)(v23 + 8);
    v40 = 952;
    if (*(_BYTE*)(v39 + 920) != 0) {
      v40 = 916;
    }
    v38 = *(float*)(v39 + v40);
  }
  v41 = 120;
  if (*(_BYTE*)(v25 + 90) != 0) {
    v41 = 89;
  }
  v111 = v34;
  if ((*(_BYTE*)(v25 + v41) & 1) != 0) {
    v42 = 1040;
    if (*(_BYTE*)(v25 + 1008) != 0) {
      v42 = 1004;
    }
    v43 = *(_DWORD*)(v25 + v42);
    if (v32 != 0 && v43 == 0) {
      v44 = (_QWORD*)(v32 + 808);
      goto LABEL_47;
    }
  }
  else {
    v43 = 3;
  }
  v44 = (_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 16) + 32LL) + 24LL);
LABEL_47:
  v45 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v44 + 40LL))(*v44),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v46 = *(_QWORD*)(v24 + 576);
  v47 = *(_DWORD*)(v24 + 584);
  v48 = v45;
  v50 = v49;
  v51 = 280;
  v110 = v38 + 0x1.0000000000000p+0f;
  if (*(_BYTE*)(v25 + 248) != 0) {
    v51 = 244;
  }
  v52 = *(_DWORD*)(v25 + v51);
  v53 = 360;
  v109 = v52;
  if (*(_BYTE*)(v25 + 328) != 0) {
    v53 = 324;
  }
  v54 = *(_DWORD*)(v25 + v53);
  v55 = 440;
  v108 = v54;
  if (*(_BYTE*)(v25 + 408) != 0) {
    v55 = 404;
  }
  v56 = *(_DWORD*)(v25 + v55);
  v57 = 600;
  if (*(_BYTE*)(v25 + 568) != 0) {
    v57 = 564;
  }
  v58 = *(_DWORD*)(v25 + v57);
  v59 = 520;
  if (*(_BYTE*)(v25 + 488) != 0) {
    v59 = 484;
  }
  v60 = *(_DWORD*)(v25 + v59);
  v61 = 808;
  if (*(_BYTE*)(v25 + 776) != 0) {
    v61 = 772;
  }
  v62 = *(_DWORD*)(v25 + v61);
  v63 = 200;
  if (*(_BYTE*)(v25 + 168) != 0) {
    v63 = 164;
  }
  v64 = *(_DWORD*)(v25 + v63);
  v65 = 1192;
  if (*(_BYTE*)(v25 + 1162) != 0) {
    v65 = 1161;
  }
  v66 = *(_BYTE*)(v25 + v65);
  v67 = 960;
  if (*(_BYTE*)(v25 + 928) != 0) {
    v67 = 924;
  }
  v68 = 0x1.0000000000000p+0f / *(float*)(*(_QWORD*)(v3 + 8) + 4LL);
  v69 = *(_DWORD*)(v25 + v67);
  v70 = 880;
  if (*(_BYTE*)(v25 + 850) != 0) {
    v70 = 849;
  }
  v71 = *(_BYTE*)(v25 + v70);
  v72 = 1344;
  if (*(_BYTE*)(v25 + 1312) != 0) {
    v72 = 1308;
  }
  v73 = *(float*)(v25 + v72);
  v74 = 1424;
  if (*(_BYTE*)(v25 + 1392) != 0) {
    v74 = 1388;
  }
  v75 = v73 + 0x1.0000000000000p+0f;
  v76 = exp2f(*(float*)(v25 + v74)),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v77 = 1504;
  if (*(_BYTE*)(v25 + 1472) != 0) {
    v77 = 1468;
  }
  v78 = *(_DWORD*)(v25 + v77);
  v79 = 1584;
  if (*(_BYTE*)(v25 + 1552) != 0) {
    v79 = 1548;
  }
  v80 = *(_DWORD*)(v25 + v79);
  v126 = v111;
  v129 = v56;
  v130 = v60;
  v133 = v75;
  v134 = v76;
  v137 = v62;
  v138 = v69;
  v139 = v68;
  v140 = v64;
  v141 = v43;
  v142 = v66;
  v143 = v71;
  v144 = v48;
  v145 = v50;
  v146 = v46;
  v147 = v47;
  v127 = v109;
  v128 = v108;
  v135 = v78;
  v136 = v80;
  v131 = v58;
  v132 = v110;
  v148 = 1;
  v81 = *(_BYTE**)(*(_QWORD*)(*(_QWORD*)v3 + 8LL) + 264LL);
  v82 = 256;
  if (v81[208] != 0) {
    v82 = 192;
  }
  v83 = *(_OWORD*)&v81[v82];
  LODWORD(v151) = *(_QWORD*)&v81[v82 + 8];
  v84 = (unsigned __int8)v81[312];
  v150 = v83;
  v11 = v84 == 0;
  v85 = 344;
  if (!v11) {
    v85 = 308;
  }
  HIDWORD(v151) = *(_DWORD*)&v81[v85];
  v86 = 128;
  if (v81[96] != 0) {
    v86 = 92;
  }
  HIDWORD(v149) = *(_DWORD*)&v81[v86];
  v87 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL) + 344LL);
  v88 = 208;
  if (*(_BYTE*)(v87 + 176) != 0) {
    v88 = 172;
  }
  HIDWORD(v152) = *(_DWORD*)(v87 + v88);
  v89 = 288;
  if (*(_BYTE*)(v87 + 256) != 0) {
    v89 = 252;
  }
  v153 = *(_DWORD*)(v87 + v89);
  v117 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL) + 16LL);
  v116 = *(_QWORD*)(v3 + 40);
  v90 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL) + 232LL);
  v91 = 2216;
  if (*(_BYTE*)(v90 + 2184) != 0) {
    v91 = 2180;
  }
  LODWORD(v152) = *(_DWORD*)(v90 + v91);
  if (*(float*)&v152 > 0x0.0p+0f) {
    v92 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL) + 232LL);
    v93 = 2376;
    if (*(_BYTE*)(v92 + 2344) != 0) {
      v93 = 2340;
    }
    v94 = *(_DWORD*)(v92 + v93);
    if (v94 != 0) {
      if (v94 != 1) {
        goto LABEL_98;
      }
      v95 = 2;
    }
    else {
      v95 = 1;
    }
    v164 = v95;
  }
LABEL_98:
  v96 = (_QWORD*)v2[7];
  v97 = *v112;
  v98 = v96[137];
  v154 = v96[136];
  v155 = v98;
  v99 = v96[139];
  v156 = v96[138];
  v157 = v99;
  v100 = v96[143];
  v160 = v96[142];
  v161 = v100;
  v101 = v96[141];
  v158 = v96[140];
  v159 = v101;
  v102 = (int*)(*v2 + 13304LL);
  v103 = (float*)v2[7];
  if (*(_BYTE*)(*v2 + 16700LL) != 0) {
    v102 = (int*)(*(_QWORD*)(*v2 + 16672LL) + 24LL);
  }
  v104 = v103[306];
  v105 = v102[1];
  v106 = v103[308];
  v162 = (float)(v103[307] - v103[305]) / (float)*v102;
  v163 = (float)(v106 - v104) / (float)v105;
  return GameRoutine_b5d610((_DWORD*)v2[12], v97, (__int64)v113);
}

__int64 gfxa_MainPassEffect_SetupLightingPass_lambda2_Invoke(__int64 a1,
                                                             __int64** a2,
                                                             __int64* a3)
{
  __int64* v3;
  __int64 v7;
  int v8;
  __int64 v9;
  int* v10;
  int* v11;
  int v12;
  int v13;
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

  v3 = *(__int64**)(a1 + 16);
  **a2 = GameRoutine_b48e70((__int64)a3, ***(_QWORD***)(a1 + 8));
  (*a2)[1] =
      GameRoutine_b4a510((__int64)a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 32LL));
  v7 = *v3;
  v15_.v18 = 0x100000001LL;
  v8 = *(unsigned __int8*)(v7 + 16700);
  v9 = *(_QWORD*)(v7 + 16672);
  v10 = (int*)(v7 + 13304);
  v11 = (int*)(v9 + 24);
  if (v8 != 0) {
    v10 = v11;
  }
  v15_.v15 = 0x1400000000LL;
  v13 = *v10;
  v12 = v10[1];
  v15_.v19 = 1;
  v15_.v20 = 0;
  v15_.v16 = v13;
  v15_.v17 = v12;
  *a2[1] = GameRoutine_b5a5d0((__int64)a3, (__int64)"CopyColor", &v15_.v15);
  v15_.v18 = 0x100000001LL;
  v15_.v19 = 1;
  v15_.v20 = 0;
  v15_.v16 = v13;
  v15_.v17 = v12;
  v15_.v15 = 0x1500000000LL;
  result = GameRoutine_b60f30(a3, (__int64)"CopyDepth", (__int64)&v15_.v15);
  a2[1][1] = result;
  return result;
}

__int64 gfxa_MainPassEffect_Setup3DPass_lambda3_Invoke(__int64 a1, __int64 a2,
                                                       _QWORD* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v12[2];
    int v13;
    int v14;
    __int64 v15;
    bool v16;
    char v17;
  } v12_;

  v3 = *(_QWORD*)(a1 + 8);
  v12_.v15 = 0;
  v4 = *(__int64**)(a2 + 24);
  v12_.v12[0] = *(_QWORD*)(v3 + 24);
  v12_.v13 = 1;
  v5 = (__int64*)(*(_QWORD*)v3 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)v3 + 16700LL) != 0) {
    v5 = (__int64*)(*(_QWORD*)(*(_QWORD*)v3 + 16672LL) + 24LL);
  }
  v6 = *v5;
  v12_.v17 = 0;
  v12_.v12[1] = v6;
  v12_.v14 = *(_DWORD*)(v3 + 88);
  v7 = *v4;
  v8 = *((_BYTE*)v4 + 116);
  v9 = *(_QWORD*)(*(_QWORD*)(v7 + 8) + 232LL);
  v10 = 2216;
  if (*(_BYTE*)(v9 + 2184) != 0) {
    v10 = 2180;
  }
  v12_.v16 = *(float*)(v9 + v10) > 0x0.0p+0f;
  if ((v8 & 1) == 0) {
    v12_.v15 = *(_QWORD*)(*(_QWORD*)(v3 + 56) + 1220LL);
  }
  return TaskEffect_b5e3a0(*(_QWORD*)(v3 + 96), *(__int64**)a2,
                           *(_QWORD**)(a2 + 8), a3, v12_.v12);
}

__int64 gfxa_MainPassEffect_SetupCursorUIPass_lambda1_Invoke(__int64 a1,
                                                             __int64 a2,
                                                             _QWORD* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v12[2];
    int v13;
    int v14;
    __int64 v15;
    bool v16;
    char v17;
  } v12_;

  v3 = *(_QWORD*)(a1 + 8);
  v12_.v15 = 0;
  v4 = *(__int64**)(a2 + 24);
  v12_.v12[0] = *(_QWORD*)(v3 + 24);
  v12_.v13 = 2;
  v5 = (__int64*)(*(_QWORD*)v3 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)v3 + 16700LL) != 0) {
    v5 = (__int64*)(*(_QWORD*)(*(_QWORD*)v3 + 16672LL) + 24LL);
  }
  v6 = *v5;
  v12_.v17 = 0;
  v12_.v12[1] = v6;
  v12_.v14 = *(_DWORD*)(v3 + 88);
  v7 = *v4;
  v8 = *((_BYTE*)v4 + 116);
  v9 = *(_QWORD*)(*(_QWORD*)(v7 + 8) + 232LL);
  v10 = 2216;
  if (*(_BYTE*)(v9 + 2184) != 0) {
    v10 = 2180;
  }
  v12_.v16 = *(float*)(v9 + v10) > 0x0.0p+0f;
  if ((v8 & 1) == 0) {
    v12_.v15 = *(_QWORD*)(*(_QWORD*)(v3 + 56) + 1220LL);
  }
  return TaskEffect_b5e3a0(*(_QWORD*)(v3 + 96), *(__int64**)a2,
                           *(_QWORD**)(a2 + 8), a3, v12_.v12);
}

__int64 gfxa_MainPassEffect_SetupDecalPass_lambda1_Invoke(__int64 a1,
                                                          __int64 a2,
                                                          __int64* a3)
{

#pragma clang fp contract(off)
  __int64* v3;
  __int64* v4;
  __int64 v7;
  __int64 v8;
  _BYTE* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  float v13;
  int v14;
  bool v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  char v20;
  long double v21;
  float32x4_t v22;
  __int128 v23;
  __int64 v24;
  __int128 v25;
  int v26;
  int* v27;
  int* v28;
  __int64 v29;
  int v30;
  int v31;
  _QWORD** v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 result;
  struct {
    _QWORD v38[2];
    int v39;
    int v40;
    bool v41;
    char gap25_[3];
    float v42;
    int v43;
    int v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
    int v48;
    char gap68_[4];
    __int64 v49;
    int v50;
    char gap84_[12];
    long double v51;
    __int128 v52;
    float32x4_t v53;
    __int128 v54;
    char v55;
  } v38_;

  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *(__int64**)(a2 + 24);
  v4 = *(__int64**)(a1 + 8);
  v38_.v46 = 0;
  v38_.v47 = 0;
  v38_.v45 = 0;
  v38_.v49 = 0;
  LOBYTE(v38_.v51) = 0;
  v7 = *v3;
  v8 = v4[3];
  v38_.v55 = 0;
  v9 = *(_BYTE**)(*(_QWORD*)(v7 + 8) + 128LL);
  v38_.v48 = -1;
  v38_.v50 = -1;
  v38_.v39 = 8;
  v10 = (__int64*)(*v4 + 13304);
  if (*(_BYTE*)(*v4 + 16700) != 0) {
    v10 = (__int64*)(*(_QWORD*)(*v4 + 16672) + 24LL);
  }
  v11 = *v10;
  v38_.v38[0] = v8;
  v38_.v38[1] = v11;
  v12 = 128;
  if (v9[96] != 0) {
    v12 = 92;
  }
  v38_.v41 = *(_DWORD*)&v9[v12] != 0;
  v13 = (*(float (**)(__int64))(*(_QWORD*)v8 + 120LL))(v8),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v14 = (unsigned __int8)v9[176];
  v38_.v42 = v13;
  v15 = v14 == 0;
  v16 = 208;
  if (!v15) {
    v16 = 172;
  }
  v17 = *(_DWORD*)&v9[v16];
  v15 = v9[256] == 0;
  v18 = 288;
  v38_.v43 = v17;
  if (!v15) {
    v18 = 252;
  }
  v19 = *(_DWORD*)&v9[v18];
  v38_.v40 = *((_DWORD*)v4 + 22);
  v20 = *((_BYTE*)v3 + 116);
  v38_.v44 = v19;
  if ((v20 & 1) == 0) {
    v21 =
        ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v4[3] + 24LL))(v4[3]),
    v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v24 = *v4;
    v38_.v51 = v21;
    v38_.v52 = v25;
    v26 = *(unsigned __int8*)(v24 + 16700);
    v27 = (int*)(v24 + 13304);
    v28 = (int*)(*(_QWORD*)(v24 + 16672) + 24LL);
    v15 = v26 == 0;
    v29 = v4[7];
    if (v15) {
      v28 = v27;
    }
    v30 = *v28;
    v31 = v28[1];
    v38_.v55 = 1;
    v38_.v53 = vsubq_f32(
        v22,
        COERCE_AS(
            float32x4_t,
            __PAIR64__((float)(*(float*)(v29 + 1224) * -0x1.0000000000000p+1f) /
                           (float)v31,
                       (float)(*(float*)(v29 + 1220) + *(float*)(v29 + 1220)) /
                           (float)v30)));
    v38_.v54 = v23;
  }
  v33 = *(_QWORD**)a2;
  v32 = *(_QWORD***)(a2 + 8);
  v34 = v4[13];
  *(_QWORD*)(v34 +
             816) = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v33 + 16LL))(*v33),
             v22 = COERCE_AS(__typeof__(v22),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
             v23 = COERCE_AS(__typeof__(v23),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
             v25 = COERCE_AS(__typeof__(v25),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
             v35 = COERCE_AS(__typeof__(v35),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
             v36 = COERCE_AS(__typeof__(v36),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_b61ab0((_DWORD*)v34, (__int64)v33, (__int64)v32,
                     (__int64)v38_.v38),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ResourceBuilder_b61dc0(v34, v35, v32, a3),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = TaskEffectDecal_b620c0(v34, v36, v32, a3, v38_.v38),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(v34 + 816) = 0;
  return result;
}

__int64 gfxa_MainPassEffect_SetupOffscreenPass_lambda1_Invoke(__int64 a1,
                                                              __int64 a2,
                                                              _QWORD* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v5;
  int* v6;
  float v7;
  int v8;
  _QWORD* v9;
  __int64* v10;
  struct {
    __int64 v12;
    int v13;
    unsigned int v14;
    int v15;
    int v16;
    __int64 v17;
    __int16 v18;
  } v12_;

  v3 = *(_QWORD*)(a1 + 8);
  v12_.v18 = 0;
  v12_.v17 = 0;
  v5 = *(_QWORD*)(v3 + 96);
  v12_.v12 = *(_QWORD*)(v3 + 24);
  v12_.v15 = 16;
  v6 = (int*)(*(_QWORD*)v3 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)v3 + 16700LL) != 0) {
    v6 = (int*)(*(_QWORD*)(*(_QWORD*)v3 + 16672LL) + 24LL);
  }
  v7 = (float)v6[1];
  v12_.v13 =
      (int)(float)((float)((float)*v6 / v7) *
                   (float)(int)(((int)(float)(v7 * 0x1.6666660000000p-1f) + 1) &
                                0xFFFFFFFE));
  v12_.v14 = ((int)(float)(v7 * 0x1.6666660000000p-1f) + 1) & 0xFFFFFFFE;
  v8 = *(_DWORD*)(v3 + 88);
  v10 = *(__int64**)a2;
  v9 = *(_QWORD**)(a2 + 8);
  v12_.v16 = v8;
  return TaskEffect_b5e3a0(v5, v10, v9, a3, &v12_.v12);
}

#pragma GCC visibility pop
