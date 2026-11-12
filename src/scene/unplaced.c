#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_192f90(__int64);
__int64 GameRoutine_25ec90(_QWORD, _QWORD);
__int64 strcpy(__int64, const char*);
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_6563b0(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
float scene_652770(float a1, float a2);
__int64 scene_652cd0(__int64 a1, const char* a2, __int64 a3, int a4);
void scene_652dd0(__int64 a1);

float scene_652770(float a1, float a2)
{
  double v2;
  float v3;
  double v4;
  double v5;
  float32x2_t v6;
  float32x2_t v7;
  float32x2_t v8;
  float32x2_t v9;
  float32x2_t v10;
  float32x2_t v11;
  double v12;
  double v13;
  double v14;
  double v15;
  double v16;
  double v17;
  double v18;
  double v19;
  double v20;
  double v21;
  double v22;
  double v24;
  double v25;
  double v26;
  float32x2_t v27;
  float32x2_t v28;
  float32x2_t v29;
  float32x2_t v30;
  float32x2_t v31;
  float32x2_t v32;

  if (a1 <= 0x1.f400000000000p+11f) {
    v24 = a1;
    v25 = (a1 * 0x1.43359b8a6ac87p-13 + 0x1.b8615aca0c396p-1 +
           PSEUDO_UNFUSED(v24 * v24) * 0x1.144141136be83p-23) /
          (v24 * 0x1.b9abbaded9aedp-11 + 0x1.0000000000000p+0 +
           PSEUDO_UNFUSED(v24 * v24) * 0x1.7c2ebae86c0abp-21);
    v26 = (v24 * 0x1.62acf32239890p-15 + 0x1.45042befd9279p-2 +
           PSEUDO_UNFUSED(v24 * v24) * 0x1.6930e6d617863p-25) /
          (v24 * -0x1.e61b299312006p-16 + 0x1.0000000000000p+0 +
           PSEUDO_UNFUSED(v24 * v24) * 0x1.5ab9676105248p-23);
    LANES64(v27).n64_f32[0] =
        (v24 * 0x1.2967ae0000000p+10 + 0x1.58c2be0000000p+20 +
         PSEUDO_UNFUSED(v24 * v24)) *
        ((v24 * -0x1.d3cfc40000000p+20 + -0x1.0f38720000000p+30 +
          PSEUDO_UNFUSED(v24 * v24) * -0x1.8822140000000p+0) /
         (v24 * 0x1.2967ae0000000p+10 + 0x1.58c2be0000000p+20 +
          PSEUDO_UNFUSED(v24 * v24)));
    *(float*)&v24 = (v24 * -0x1.66e9780000000p+7 + 0x1.7a07900000000p+22 +
                     PSEUDO_UNFUSED(v24 * v24)) *
                    ((v24 * -0x1.5891400000000p+19 + 0x1.d6cf100000000p+30 +
                      PSEUDO_UNFUSED(v24 * v24) * -0x1.349b640000000p+8) /
                     (v24 * -0x1.66e9780000000p+7 + 0x1.7a07900000000p+22 +
                      PSEUDO_UNFUSED(v24 * v24)));
    LANES64(v27).n64_u32[1] = LODWORD(v24);
    LANES64(v28).n64_u64[0] = LANES64_OF(vmul_f32(v27, v27)).n64_u64[0];
    LANES64(v29).n64_u64[0] = LANES64_OF(vpadd_f32(v28, v28)).n64_u64[0];
    LANES64(v30).n64_u64[0] = LANES64_OF(vrsqrte_f32(v29)).n64_u64[0];
    LANES64(v31).n64_u64[0] =
        LANES64_OF(vmul_f32(v30, vrsqrts_f32(v30, vmul_f32(v29, v30))))
            .n64_u64[0];
    LANES64(v32).n64_u64[0] =
        LANES64_OF(
            vbic_s8(vmul_f32(v27, vmul_f32(v31, vrsqrts_f32(
                                                    v31, vmul_f32(v29, v31)))),
                    vceqz_f32(v29)))
            .n64_u64[0];
    LANES64(v27).n64_f32[0] = vmuls_lane_f32(a2, v32, 1);
    return (v25 + LANES64(v27).n64_f32[0] * 0x1.999999999999ap-5) *
           0x1.8000000000000p+1 /
           (PSEUDO_UNFUSED(
                (v26 + (float)-(float)(LANES64(v32).n64_f32[0] * a2) *
                           0x1.999999999999ap-5) *
                -0x1.0000000000000p+3) +
            (v25 + LANES64(v27).n64_f32[0] * 0x1.999999999999ap-5) *
                0x1.0000000000000p+1 +
            0x1.0000000000000p+2);
  }
  else {
    v2 = (float)(a1 * 0x1.0024760000000p+0f);
    v3 = ((0x1.0000000000000p+0 / v2 * -0x1.68b584e800000p+31 +
           0x1.0134ef3333333p+21) *
              (0x1.0000000000000p+0 / v2) +
          0x1.bd44f765fd8aep+7) *
             (0x1.0000000000000p+0 / v2) +
         0x1.ec5197a24894cp-3;
    v4 = (v2 * 0x1.43359b8a6ac87p-13 + 0x1.b8615aca0c396p-1 +
          PSEUDO_UNFUSED(v2 * v2) * 0x1.144141136be83p-23) /
         (v2 * 0x1.b9abbaded9aedp-11 + 0x1.0000000000000p+0 +
          PSEUDO_UNFUSED(v2 * v2) * 0x1.7c2ebae86c0abp-21);
    v5 = (v2 * 0x1.62acf32239890p-15 + 0x1.45042befd9279p-2 +
          PSEUDO_UNFUSED(v2 * v2) * 0x1.6930e6d617863p-25) /
         (v2 * -0x1.e61b299312006p-16 + 0x1.0000000000000p+0 +
          PSEUDO_UNFUSED(v2 * v2) * 0x1.5ab9676105248p-23);
    LANES64(v6).n64_f32[0] =
        (v2 * 0x1.2967ae0000000p+10 + 0x1.58c2be0000000p+20 +
         PSEUDO_UNFUSED(v2 * v2)) *
        ((v2 * -0x1.d3cfc40000000p+20 + -0x1.0f38720000000p+30 +
          PSEUDO_UNFUSED(v2 * v2) * -0x1.8822140000000p+0) /
         (v2 * 0x1.2967ae0000000p+10 + 0x1.58c2be0000000p+20 +
          PSEUDO_UNFUSED(v2 * v2)));
    *(float*)&v2 = (v2 * -0x1.66e9780000000p+7 + 0x1.7a07900000000p+22 +
                    PSEUDO_UNFUSED(v2 * v2)) *
                   ((v2 * -0x1.5891400000000p+19 + 0x1.d6cf100000000p+30 +
                     PSEUDO_UNFUSED(v2 * v2) * -0x1.349b640000000p+8) /
                    (v2 * -0x1.66e9780000000p+7 + 0x1.7a07900000000p+22 +
                     PSEUDO_UNFUSED(v2 * v2)));
    LANES64(v6).n64_u32[1] = LODWORD(v2);
    LANES64(v7).n64_u64[0] = LANES64_OF(vmul_f32(v6, v6)).n64_u64[0];
    LANES64(v8).n64_u64[0] = LANES64_OF(vpadd_f32(v7, v7)).n64_u64[0];
    LANES64(v9).n64_u64[0] = LANES64_OF(vrsqrte_f32(v8)).n64_u64[0];
    LANES64(v10).n64_u64[0] =
        LANES64_OF(vmul_f32(v9, vrsqrts_f32(v9, vmul_f32(v8, v9)))).n64_u64[0];
    LANES64(v11).n64_u64[0] =
        LANES64_OF(
            vbic_s8(vmul_f32(
                        v6, vmul_f32(v10, vrsqrts_f32(v10, vmul_f32(v8, v10)))),
                    vceqz_f32(v8)))
            .n64_u64[0];
    LANES64(v6).n64_f32[0] = vmuls_lane_f32(a2, v11, 1);
    v12 = v5 +
          (float)-(float)(LANES64(v11).n64_f32[0] * a2) * 0x1.999999999999ap-5;
    v13 = v4 + LANES64(v6).n64_f32[0] * 0x1.999999999999ap-5;
    v14 = v13 * 0x1.8000000000000p+1;
    v15 = PSEUDO_UNFUSED(v12 * -0x1.0000000000000p+3) +
          v13 * 0x1.0000000000000p+1 + 0x1.0000000000000p+2;
    v16 = (v12 + v12) / v15;
    *(float*)&v15 = v14 / v15;
    *(float*)&v16 = v16;
    HIDWORD(v15) = LODWORD(v16);
    v17 = v4 + vmuls_lane_f32(0x0.0p+0f, v11, 1) * 0x1.999999999999ap-5;
    v18 = v5 + (float)(PSEUDO_UNFUSED(-0x0.0p+0f * LANES64(v11).n64_f32[0])) *
                   0x1.999999999999ap-5;
    v19 = v17 * 0x1.8000000000000p+1;
    v20 = PSEUDO_UNFUSED(v18 * -0x1.0000000000000p+3) +
          v17 * 0x1.0000000000000p+1 + 0x1.0000000000000p+2;
    v21 = v19 / v20;
    v22 = (v18 + v18) / v20;
    *(float*)&v18 = v21;
    *(float*)&v22 = v22;
    HIDWORD(v18) = LODWORD(v22);
    return LANES64_OF(vsub_f32(*(float32x2_t*)&v15, *(float32x2_t*)&v18))
               .n64_f32[0] +
           v3;
  }
}

__int64 scene_652cd0(__int64 a1, const char* a2, __int64 a3, int a4)
{
  __int16 v7;
  _QWORD* v8;
  __int64 v9;

  *(_BYTE*)(a1 + 336) = 0;
  if (a2 != nullptr) {
    strcpy(a1 + 80, a2);
  }
  else {
    *(_BYTE*)(a1 + 80) = 0;
  }
  *(_BYTE*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 24) = a3;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_DWORD*)(a1 + 48) = a4;
  *(_DWORD*)(a1 + 52) = 0;
  *(_QWORD*)(a1 + 2152) = 0;
  *(_QWORD*)(a1 + 2168) = 0;
  *(_QWORD*)(a1 + 2176) = 0;
  *(_QWORD*)(a1 + 2104) = 0;
  *(_QWORD*)(a1 + 2112) = 0;
  *(_DWORD*)(a1 + 2160) = 0x2000;
  *(_DWORD*)(a1 + 2184) = 0x2000;
  *(_QWORD*)(a1 + 2192) = 0;
  *(_QWORD*)(a1 + 2200) = 0;
  (*(void (**)(__int64, __int64))(*(_QWORD*)a3 + 480LL))(a3, a1);
  v7 = *(_WORD*)(a1 + 2144);
  v8 = *(_QWORD**)(a1 + 2240);
  *(_QWORD*)(a1 + 2240) = 0;
  *(_WORD*)(a1 + 2144) = v7 & 0xFE78 | 0x100;
  if (v8 == (_QWORD*)(a1 + 2208)) {
    v9 = 32;
    goto LABEL_8;
  }
  if (v8 != nullptr) {
    v9 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v8 + v9))((__int64)v8);
  }
  (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 24) + 464LL))(
      *(_QWORD*)(a1 + 24), 0);
  return (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 24) + 448LL))(
      *(_QWORD*)(a1 + 24), 1);
}

void scene_652dd0(__int64 a1)
{
  __int64 v2;
  int v3;
  _QWORD* v4;
  __int64 v5;
  int v6;
  _QWORD* v7;
  __int64 v8;
  int v9;
  _QWORD* v10;
  __int64 v11;
  int v12;
  _QWORD* v13;
  __int64 v14;
  int v15;
  _QWORD* v16;
  __int64 v17;
  int v18;
  _QWORD* v19;
  __int64 v20;
  int v21;
  _QWORD* v22;
  __int64 v23;
  int v24;
  _QWORD* v25;
  __int64 v26;
  int v27;
  _QWORD* v28;
  __int64 v29;
  int v30;
  _QWORD* v31;
  __int64 v32;
  int v33;
  _QWORD* v34;
  __int64 v35;
  int v36;
  _QWORD* v37;
  __int64 v38;
  int v39;
  _QWORD* v40;
  __int64 v41;
  int v42;
  _QWORD* v43;
  __int64 v44;
  int v45;
  _QWORD* v46;
  __int64 v47;
  int v48;
  _QWORD* v49;
  __int64 v50;
  int v51;
  _QWORD* v52;
  __int64 v53;
  int v54;
  _QWORD* v55;
  __int64 v56;
  int v57;
  _QWORD* v58;
  __int64 v59;
  int v60;
  _QWORD* v61;
  __int64 v62;
  int v63;
  _QWORD* v64;
  __int64 v65;
  int v66;
  _QWORD* v67;
  __int64 v68;
  int v69;
  _QWORD* v70;
  __int64 v71;
  int v72;
  _QWORD* v73;
  __int64 v74;
  int v75;
  _QWORD* v76;
  __int64 v77;
  int v78;
  _QWORD* v79;
  __int64 v80;
  int v81;
  _QWORD* v82;
  __int64 v83;
  int v84;
  _QWORD* v85;
  __int64 v86;
  int v87;
  _QWORD* v88;
  __int64 v89;
  int v90;
  _QWORD* v91;
  __int64 v92;
  int v93;
  _QWORD* v94;
  __int64 v95;
  int v96;
  _QWORD* v97;
  __int64 v98;
  int v99;
  _QWORD* v100;
  __int64 v101;
  int v102;
  _QWORD* v103;
  __int64 v104;
  int v105;
  _QWORD* v106;
  __int64 v107;
  int v108;
  _QWORD* v109;
  __int64 v110;
  int v111;
  _QWORD* v112;
  __int64 v113;
  int v114;
  _QWORD* v115;
  __int64 v116;
  int v117;
  _QWORD* v118;
  __int64 v119;
  int v120;
  _QWORD* v121;
  __int64 v122;
  int v123;
  _QWORD* v124;
  __int64 v125;
  void (***v126)(_QWORD);

  v2 = *(_QWORD*)(a1 + 24);
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    *(_QWORD*)(a1 + 24) = 0;
  }
  v3 = *(_DWORD*)(a1 + 496);
  if (v3 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 472));
  }
  else {
    if (v3 != 4) {
      goto LABEL_12;
    }
    v4 = *(_QWORD**)(a1 + 472);
    if ((*(_BYTE*)v4 & 1) != 0) {
      GameRoutine_25ec90(v4[2], *v4 & 0xFFFFFFFFFFFFFFFELL);
    }
    v5 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                  (__int64)v4);
  }
  *(_QWORD*)(a1 + 472) = 0;
  *(_DWORD*)(a1 + 496) = 0;
LABEL_12:
  v6 = *(_DWORD*)(a1 + 1176);
  if (v6 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 1152));
  }
  else {
    if (v6 != 4) {
      goto LABEL_21;
    }
    v7 = *(_QWORD**)(a1 + 1152);
    if ((*(_BYTE*)v7 & 1) != 0) {
      GameRoutine_25ec90(v7[2], *v7 & 0xFFFFFFFFFFFFFFFELL);
    }
    v8 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                  (__int64)v7);
  }
  *(_QWORD*)(a1 + 1152) = 0;
  *(_DWORD*)(a1 + 1176) = 0;
LABEL_21:
  v9 = *(_DWORD*)(a1 + 1216);
  if (v9 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 1192));
  }
  else {
    if (v9 != 4) {
      goto LABEL_30;
    }
    v10 = *(_QWORD**)(a1 + 1192);
    if ((*(_BYTE*)v10 & 1) != 0) {
      GameRoutine_25ec90(v10[2], *v10 & 0xFFFFFFFFFFFFFFFELL);
    }
    v11 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11,
                                  (__int64)v10);
  }
  *(_QWORD*)(a1 + 1192) = 0;
  *(_DWORD*)(a1 + 1216) = 0;
LABEL_30:
  v12 = *(_DWORD*)(a1 + 1256);
  if (v12 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 1232));
  }
  else {
    if (v12 != 4) {
      goto LABEL_39;
    }
    v13 = *(_QWORD**)(a1 + 1232);
    if ((*(_BYTE*)v13 & 1) != 0) {
      GameRoutine_25ec90(v13[2], *v13 & 0xFFFFFFFFFFFFFFFELL);
    }
    v14 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                  (__int64)v13);
  }
  *(_QWORD*)(a1 + 1232) = 0;
  *(_DWORD*)(a1 + 1256) = 0;
LABEL_39:
  v15 = *(_DWORD*)(a1 + 1296);
  if (v15 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 1272));
  }
  else {
    if (v15 != 4) {
      goto LABEL_48;
    }
    v16 = *(_QWORD**)(a1 + 1272);
    if ((*(_BYTE*)v16 & 1) != 0) {
      GameRoutine_25ec90(v16[2], *v16 & 0xFFFFFFFFFFFFFFFELL);
    }
    v17 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17,
                                  (__int64)v16);
  }
  *(_QWORD*)(a1 + 1272) = 0;
  *(_DWORD*)(a1 + 1296) = 0;
LABEL_48:
  v18 = *(_DWORD*)(a1 + 1336);
  if (v18 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 1312));
  }
  else {
    if (v18 != 4) {
      goto LABEL_57;
    }
    v19 = *(_QWORD**)(a1 + 1312);
    if ((*(_BYTE*)v19 & 1) != 0) {
      GameRoutine_25ec90(v19[2], *v19 & 0xFFFFFFFFFFFFFFFELL);
    }
    v20 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20,
                                  (__int64)v19);
  }
  *(_QWORD*)(a1 + 1312) = 0;
  *(_DWORD*)(a1 + 1336) = 0;
LABEL_57:
  v21 = *(_DWORD*)(a1 + 1376);
  if (v21 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 1352));
  }
  else {
    if (v21 != 4) {
      goto LABEL_66;
    }
    v22 = *(_QWORD**)(a1 + 1352);
    if ((*(_BYTE*)v22 & 1) != 0) {
      GameRoutine_25ec90(v22[2], *v22 & 0xFFFFFFFFFFFFFFFELL);
    }
    v23 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                                  (__int64)v22);
  }
  *(_QWORD*)(a1 + 1352) = 0;
  *(_DWORD*)(a1 + 1376) = 0;
LABEL_66:
  v24 = *(_DWORD*)(a1 + 1416);
  if (v24 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 1392));
  }
  else {
    if (v24 != 4) {
      goto LABEL_75;
    }
    v25 = *(_QWORD**)(a1 + 1392);
    if ((*(_BYTE*)v25 & 1) != 0) {
      GameRoutine_25ec90(v25[2], *v25 & 0xFFFFFFFFFFFFFFFELL);
    }
    v26 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26,
                                  (__int64)v25);
  }
  *(_QWORD*)(a1 + 1392) = 0;
  *(_DWORD*)(a1 + 1416) = 0;
LABEL_75:
  v27 = *(_DWORD*)(a1 + 1456);
  if (v27 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 1432));
  }
  else {
    if (v27 != 4) {
      goto LABEL_84;
    }
    v28 = *(_QWORD**)(a1 + 1432);
    if ((*(_BYTE*)v28 & 1) != 0) {
      GameRoutine_25ec90(v28[2], *v28 & 0xFFFFFFFFFFFFFFFELL);
    }
    v29 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v29,
                                  (__int64)v28);
  }
  *(_QWORD*)(a1 + 1432) = 0;
  *(_DWORD*)(a1 + 1456) = 0;
LABEL_84:
  v30 = *(_DWORD*)(a1 + 1496);
  if (v30 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 1472));
  }
  else {
    if (v30 != 4) {
      goto LABEL_93;
    }
    v31 = *(_QWORD**)(a1 + 1472);
    if ((*(_BYTE*)v31 & 1) != 0) {
      GameRoutine_25ec90(v31[2], *v31 & 0xFFFFFFFFFFFFFFFELL);
    }
    v32 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v32,
                                  (__int64)v31);
  }
  *(_QWORD*)(a1 + 1472) = 0;
  *(_DWORD*)(a1 + 1496) = 0;
LABEL_93:
  v33 = *(_DWORD*)(a1 + 1536);
  if (v33 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 1512));
  }
  else {
    if (v33 != 4) {
      goto LABEL_102;
    }
    v34 = *(_QWORD**)(a1 + 1512);
    if ((*(_BYTE*)v34 & 1) != 0) {
      GameRoutine_25ec90(v34[2], *v34 & 0xFFFFFFFFFFFFFFFELL);
    }
    v35 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v35,
                                  (__int64)v34);
  }
  *(_QWORD*)(a1 + 1512) = 0;
  *(_DWORD*)(a1 + 1536) = 0;
LABEL_102:
  v36 = *(_DWORD*)(a1 + 1576);
  if (v36 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 1552));
  }
  else {
    if (v36 != 4) {
      goto LABEL_111;
    }
    v37 = *(_QWORD**)(a1 + 1552);
    if ((*(_BYTE*)v37 & 1) != 0) {
      GameRoutine_25ec90(v37[2], *v37 & 0xFFFFFFFFFFFFFFFELL);
    }
    v38 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v38,
                                  (__int64)v37);
  }
  *(_QWORD*)(a1 + 1552) = 0;
  *(_DWORD*)(a1 + 1576) = 0;
LABEL_111:
  v39 = *(_DWORD*)(a1 + 1616);
  if (v39 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 1592));
  }
  else {
    if (v39 != 4) {
      goto LABEL_120;
    }
    v40 = *(_QWORD**)(a1 + 1592);
    if ((*(_BYTE*)v40 & 1) != 0) {
      GameRoutine_25ec90(v40[2], *v40 & 0xFFFFFFFFFFFFFFFELL);
    }
    v41 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v41,
                                  (__int64)v40);
  }
  *(_QWORD*)(a1 + 1592) = 0;
  *(_DWORD*)(a1 + 1616) = 0;
LABEL_120:
  v42 = *(_DWORD*)(a1 + 1656);
  if (v42 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 1632));
  }
  else {
    if (v42 != 4) {
      goto LABEL_129;
    }
    v43 = *(_QWORD**)(a1 + 1632);
    if ((*(_BYTE*)v43 & 1) != 0) {
      GameRoutine_25ec90(v43[2], *v43 & 0xFFFFFFFFFFFFFFFELL);
    }
    v44 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v44,
                                  (__int64)v43);
  }
  *(_QWORD*)(a1 + 1632) = 0;
  *(_DWORD*)(a1 + 1656) = 0;
LABEL_129:
  v45 = *(_DWORD*)(a1 + 1696);
  if (v45 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 1672));
  }
  else {
    if (v45 != 4) {
      goto LABEL_138;
    }
    v46 = *(_QWORD**)(a1 + 1672);
    if ((*(_BYTE*)v46 & 1) != 0) {
      GameRoutine_25ec90(v46[2], *v46 & 0xFFFFFFFFFFFFFFFELL);
    }
    v47 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v47,
                                  (__int64)v46);
  }
  *(_QWORD*)(a1 + 1672) = 0;
  *(_DWORD*)(a1 + 1696) = 0;
LABEL_138:
  v48 = *(_DWORD*)(a1 + 1736);
  if (v48 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 1712));
  }
  else {
    if (v48 != 4) {
      goto LABEL_147;
    }
    v49 = *(_QWORD**)(a1 + 1712);
    if ((*(_BYTE*)v49 & 1) != 0) {
      GameRoutine_25ec90(v49[2], *v49 & 0xFFFFFFFFFFFFFFFELL);
    }
    v50 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v50 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v50,
                                  (__int64)v49);
  }
  *(_QWORD*)(a1 + 1712) = 0;
  *(_DWORD*)(a1 + 1736) = 0;
LABEL_147:
  v51 = *(_DWORD*)(a1 + 1776);
  if (v51 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 1752));
  }
  else {
    if (v51 != 4) {
      goto LABEL_156;
    }
    v52 = *(_QWORD**)(a1 + 1752);
    if ((*(_BYTE*)v52 & 1) != 0) {
      GameRoutine_25ec90(v52[2], *v52 & 0xFFFFFFFFFFFFFFFELL);
    }
    v53 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v53 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v53,
                                  (__int64)v52);
  }
  *(_QWORD*)(a1 + 1752) = 0;
  *(_DWORD*)(a1 + 1776) = 0;
LABEL_156:
  v54 = *(_DWORD*)(a1 + 1816);
  if (v54 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 1792));
  }
  else {
    if (v54 != 4) {
      goto LABEL_165;
    }
    v55 = *(_QWORD**)(a1 + 1792);
    if ((*(_BYTE*)v55 & 1) != 0) {
      GameRoutine_25ec90(v55[2], *v55 & 0xFFFFFFFFFFFFFFFELL);
    }
    v56 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v56 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v56,
                                  (__int64)v55);
  }
  *(_QWORD*)(a1 + 1792) = 0;
  *(_DWORD*)(a1 + 1816) = 0;
LABEL_165:
  v57 = *(_DWORD*)(a1 + 1856);
  if (v57 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 1832));
  }
  else {
    if (v57 != 4) {
      goto LABEL_174;
    }
    v58 = *(_QWORD**)(a1 + 1832);
    if ((*(_BYTE*)v58 & 1) != 0) {
      GameRoutine_25ec90(v58[2], *v58 & 0xFFFFFFFFFFFFFFFELL);
    }
    v59 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v59 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v59,
                                  (__int64)v58);
  }
  *(_QWORD*)(a1 + 1832) = 0;
  *(_DWORD*)(a1 + 1856) = 0;
LABEL_174:
  v60 = *(_DWORD*)(a1 + 1896);
  if (v60 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 1872));
  }
  else {
    if (v60 != 4) {
      goto LABEL_183;
    }
    v61 = *(_QWORD**)(a1 + 1872);
    if ((*(_BYTE*)v61 & 1) != 0) {
      GameRoutine_25ec90(v61[2], *v61 & 0xFFFFFFFFFFFFFFFELL);
    }
    v62 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v62 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v62,
                                  (__int64)v61);
  }
  *(_QWORD*)(a1 + 1872) = 0;
  *(_DWORD*)(a1 + 1896) = 0;
LABEL_183:
  v63 = *(_DWORD*)(a1 + 1936);
  if (v63 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 1912));
  }
  else {
    if (v63 != 4) {
      goto LABEL_192;
    }
    v64 = *(_QWORD**)(a1 + 1912);
    if ((*(_BYTE*)v64 & 1) != 0) {
      GameRoutine_25ec90(v64[2], *v64 & 0xFFFFFFFFFFFFFFFELL);
    }
    v65 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v65 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v65,
                                  (__int64)v64);
  }
  *(_QWORD*)(a1 + 1912) = 0;
  *(_DWORD*)(a1 + 1936) = 0;
LABEL_192:
  v66 = *(_DWORD*)(a1 + 1976);
  if (v66 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 1952));
  }
  else {
    if (v66 != 4) {
      goto LABEL_201;
    }
    v67 = *(_QWORD**)(a1 + 1952);
    if ((*(_BYTE*)v67 & 1) != 0) {
      GameRoutine_25ec90(v67[2], *v67 & 0xFFFFFFFFFFFFFFFELL);
    }
    v68 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v68 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v68,
                                  (__int64)v67);
  }
  *(_QWORD*)(a1 + 1952) = 0;
  *(_DWORD*)(a1 + 1976) = 0;
LABEL_201:
  v69 = *(_DWORD*)(a1 + 2016);
  if (v69 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 1992));
  }
  else {
    if (v69 != 4) {
      goto LABEL_210;
    }
    v70 = *(_QWORD**)(a1 + 1992);
    if ((*(_BYTE*)v70 & 1) != 0) {
      GameRoutine_25ec90(v70[2], *v70 & 0xFFFFFFFFFFFFFFFELL);
    }
    v71 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v71 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v71,
                                  (__int64)v70);
  }
  *(_QWORD*)(a1 + 1992) = 0;
  *(_DWORD*)(a1 + 2016) = 0;
LABEL_210:
  v72 = *(_DWORD*)(a1 + 2056);
  if (v72 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 2032));
  }
  else {
    if (v72 != 4) {
      goto LABEL_219;
    }
    v73 = *(_QWORD**)(a1 + 2032);
    if ((*(_BYTE*)v73 & 1) != 0) {
      GameRoutine_25ec90(v73[2], *v73 & 0xFFFFFFFFFFFFFFFELL);
    }
    v74 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v74 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v74,
                                  (__int64)v73);
  }
  *(_QWORD*)(a1 + 2032) = 0;
  *(_DWORD*)(a1 + 2056) = 0;
LABEL_219:
  v75 = *(_DWORD*)(a1 + 2096);
  if (v75 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 2072));
  }
  else {
    if (v75 != 4) {
      goto LABEL_228;
    }
    v76 = *(_QWORD**)(a1 + 2072);
    if ((*(_BYTE*)v76 & 1) != 0) {
      GameRoutine_25ec90(v76[2], *v76 & 0xFFFFFFFFFFFFFFFELL);
    }
    v77 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v77 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v77,
                                  (__int64)v76);
  }
  *(_QWORD*)(a1 + 2072) = 0;
  *(_DWORD*)(a1 + 2096) = 0;
LABEL_228:
  v78 = *(_DWORD*)(a1 + 536);
  if (v78 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 512));
  }
  else {
    if (v78 != 4) {
      goto LABEL_237;
    }
    v79 = *(_QWORD**)(a1 + 512);
    if ((*(_BYTE*)v79 & 1) != 0) {
      GameRoutine_25ec90(v79[2], *v79 & 0xFFFFFFFFFFFFFFFELL);
    }
    v80 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v80 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v80,
                                  (__int64)v79);
  }
  *(_QWORD*)(a1 + 512) = 0;
  *(_DWORD*)(a1 + 536) = 0;
LABEL_237:
  v81 = *(_DWORD*)(a1 + 576);
  if (v81 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 552));
  }
  else {
    if (v81 != 4) {
      goto LABEL_246;
    }
    v82 = *(_QWORD**)(a1 + 552);
    if ((*(_BYTE*)v82 & 1) != 0) {
      GameRoutine_25ec90(v82[2], *v82 & 0xFFFFFFFFFFFFFFFELL);
    }
    v83 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v83 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v83,
                                  (__int64)v82);
  }
  *(_QWORD*)(a1 + 552) = 0;
  *(_DWORD*)(a1 + 576) = 0;
LABEL_246:
  v84 = *(_DWORD*)(a1 + 616);
  if (v84 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 592));
  }
  else {
    if (v84 != 4) {
      goto LABEL_255;
    }
    v85 = *(_QWORD**)(a1 + 592);
    if ((*(_BYTE*)v85 & 1) != 0) {
      GameRoutine_25ec90(v85[2], *v85 & 0xFFFFFFFFFFFFFFFELL);
    }
    v86 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v86 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v86,
                                  (__int64)v85);
  }
  *(_QWORD*)(a1 + 592) = 0;
  *(_DWORD*)(a1 + 616) = 0;
LABEL_255:
  v87 = *(_DWORD*)(a1 + 656);
  if (v87 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 632));
  }
  else {
    if (v87 != 4) {
      goto LABEL_264;
    }
    v88 = *(_QWORD**)(a1 + 632);
    if ((*(_BYTE*)v88 & 1) != 0) {
      GameRoutine_25ec90(v88[2], *v88 & 0xFFFFFFFFFFFFFFFELL);
    }
    v89 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v89 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v89,
                                  (__int64)v88);
  }
  *(_QWORD*)(a1 + 632) = 0;
  *(_DWORD*)(a1 + 656) = 0;
LABEL_264:
  v90 = *(_DWORD*)(a1 + 696);
  if (v90 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 672));
  }
  else {
    if (v90 != 4) {
      goto LABEL_273;
    }
    v91 = *(_QWORD**)(a1 + 672);
    if ((*(_BYTE*)v91 & 1) != 0) {
      GameRoutine_25ec90(v91[2], *v91 & 0xFFFFFFFFFFFFFFFELL);
    }
    v92 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v92 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v92,
                                  (__int64)v91);
  }
  *(_QWORD*)(a1 + 672) = 0;
  *(_DWORD*)(a1 + 696) = 0;
LABEL_273:
  v93 = *(_DWORD*)(a1 + 736);
  if (v93 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 712));
  }
  else {
    if (v93 != 4) {
      goto LABEL_282;
    }
    v94 = *(_QWORD**)(a1 + 712);
    if ((*(_BYTE*)v94 & 1) != 0) {
      GameRoutine_25ec90(v94[2], *v94 & 0xFFFFFFFFFFFFFFFELL);
    }
    v95 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v95 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v95,
                                  (__int64)v94);
  }
  *(_QWORD*)(a1 + 712) = 0;
  *(_DWORD*)(a1 + 736) = 0;
LABEL_282:
  v96 = *(_DWORD*)(a1 + 776);
  if (v96 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 752));
  }
  else {
    if (v96 != 4) {
      goto LABEL_291;
    }
    v97 = *(_QWORD**)(a1 + 752);
    if ((*(_BYTE*)v97 & 1) != 0) {
      GameRoutine_25ec90(v97[2], *v97 & 0xFFFFFFFFFFFFFFFELL);
    }
    v98 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v98 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v98,
                                  (__int64)v97);
  }
  *(_QWORD*)(a1 + 752) = 0;
  *(_DWORD*)(a1 + 776) = 0;
LABEL_291:
  v99 = *(_DWORD*)(a1 + 816);
  if (v99 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 792));
  }
  else {
    if (v99 != 4) {
      goto LABEL_300;
    }
    v100 = *(_QWORD**)(a1 + 792);
    if ((*(_BYTE*)v100 & 1) != 0) {
      GameRoutine_25ec90(v100[2], *v100 & 0xFFFFFFFFFFFFFFFELL);
    }
    v101 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v101 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v101,
                                  (__int64)v100);
  }
  *(_QWORD*)(a1 + 792) = 0;
  *(_DWORD*)(a1 + 816) = 0;
LABEL_300:
  v102 = *(_DWORD*)(a1 + 856);
  if (v102 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 832));
  }
  else {
    if (v102 != 4) {
      goto LABEL_309;
    }
    v103 = *(_QWORD**)(a1 + 832);
    if ((*(_BYTE*)v103 & 1) != 0) {
      GameRoutine_25ec90(v103[2], *v103 & 0xFFFFFFFFFFFFFFFELL);
    }
    v104 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v104 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v104,
                                  (__int64)v103);
  }
  *(_QWORD*)(a1 + 832) = 0;
  *(_DWORD*)(a1 + 856) = 0;
LABEL_309:
  v105 = *(_DWORD*)(a1 + 896);
  if (v105 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 872));
  }
  else {
    if (v105 != 4) {
      goto LABEL_318;
    }
    v106 = *(_QWORD**)(a1 + 872);
    if ((*(_BYTE*)v106 & 1) != 0) {
      GameRoutine_25ec90(v106[2], *v106 & 0xFFFFFFFFFFFFFFFELL);
    }
    v107 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v107 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v107,
                                  (__int64)v106);
  }
  *(_QWORD*)(a1 + 872) = 0;
  *(_DWORD*)(a1 + 896) = 0;
LABEL_318:
  v108 = *(_DWORD*)(a1 + 936);
  if (v108 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 912));
  }
  else {
    if (v108 != 4) {
      goto LABEL_327;
    }
    v109 = *(_QWORD**)(a1 + 912);
    if ((*(_BYTE*)v109 & 1) != 0) {
      GameRoutine_25ec90(v109[2], *v109 & 0xFFFFFFFFFFFFFFFELL);
    }
    v110 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v110 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v110,
                                  (__int64)v109);
  }
  *(_QWORD*)(a1 + 912) = 0;
  *(_DWORD*)(a1 + 936) = 0;
LABEL_327:
  v111 = *(_DWORD*)(a1 + 976);
  if (v111 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 952));
  }
  else {
    if (v111 != 4) {
      goto LABEL_336;
    }
    v112 = *(_QWORD**)(a1 + 952);
    if ((*(_BYTE*)v112 & 1) != 0) {
      GameRoutine_25ec90(v112[2], *v112 & 0xFFFFFFFFFFFFFFFELL);
    }
    v113 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v113 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v113,
                                  (__int64)v112);
  }
  *(_QWORD*)(a1 + 952) = 0;
  *(_DWORD*)(a1 + 976) = 0;
LABEL_336:
  v114 = *(_DWORD*)(a1 + 1016);
  if (v114 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 992));
  }
  else {
    if (v114 != 4) {
      goto LABEL_345;
    }
    v115 = *(_QWORD**)(a1 + 992);
    if ((*(_BYTE*)v115 & 1) != 0) {
      GameRoutine_25ec90(v115[2], *v115 & 0xFFFFFFFFFFFFFFFELL);
    }
    v116 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v116 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v116,
                                  (__int64)v115);
  }
  *(_QWORD*)(a1 + 992) = 0;
  *(_DWORD*)(a1 + 1016) = 0;
LABEL_345:
  v117 = *(_DWORD*)(a1 + 1056);
  if (v117 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 1032));
  }
  else {
    if (v117 != 4) {
      goto LABEL_354;
    }
    v118 = *(_QWORD**)(a1 + 1032);
    if ((*(_BYTE*)v118 & 1) != 0) {
      GameRoutine_25ec90(v118[2], *v118 & 0xFFFFFFFFFFFFFFFELL);
    }
    v119 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v119 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v119,
                                  (__int64)v118);
  }
  *(_QWORD*)(a1 + 1032) = 0;
  *(_DWORD*)(a1 + 1056) = 0;
LABEL_354:
  v120 = *(_DWORD*)(a1 + 1096);
  if (v120 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 1072));
  }
  else {
    if (v120 != 4) {
      goto LABEL_363;
    }
    v121 = *(_QWORD**)(a1 + 1072);
    if ((*(_BYTE*)v121 & 1) != 0) {
      GameRoutine_25ec90(v121[2], *v121 & 0xFFFFFFFFFFFFFFFELL);
    }
    v122 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v122 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v122,
                                  (__int64)v121);
  }
  *(_QWORD*)(a1 + 1072) = 0;
  *(_DWORD*)(a1 + 1096) = 0;
LABEL_363:
  v123 = *(_DWORD*)(a1 + 1136);
  if (v123 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 1112));
  }
  else {
    if (v123 != 4) {
      goto LABEL_372;
    }
    v124 = *(_QWORD**)(a1 + 1112);
    if ((*(_BYTE*)v124 & 1) != 0) {
      GameRoutine_25ec90(v124[2], *v124 & 0xFFFFFFFFFFFFFFFELL);
    }
    v125 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v125 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v125,
                                  (__int64)v124);
  }
  *(_QWORD*)(a1 + 1112) = 0;
  *(_DWORD*)(a1 + 1136) = 0;
LABEL_372:
  v126 = *(void (****)(_QWORD))(a1 + 2256);
  if (v126 != nullptr) {
    (**v126)(v126);
    GameRoutine_6563b0(*(_QWORD*)(a1 + 2256));
    *(_QWORD*)(a1 + 2256) = 0;
  }
}

#pragma GCC visibility pop
