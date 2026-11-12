#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d29060(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*wld_animctrl_Graph_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 Graph_Destructor_alt1(_QWORD* a1) __asm__("Graph_Destructor");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_d29ca0(void);
void __attribute__((noreturn)) GameRoutine_d29cc0(long double, long double);
_QWORD* Graph_d29060(_QWORD* result, long double a2, double a3, double a4,
                     double a5, long double a6);
void Graph_d29060_alt1(_QWORD*, long double, double, double, double,
                       long double) __asm__("Graph_d29060");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Graph_Destructor(_QWORD* a1, long double a2, double a3, double a4,
                      double a5, long double a6);

void Graph_Destructor(_QWORD* a1, long double a2, double a3, double a4,
                      double a5, long double a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  __int64 i;
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

  v6 = a1[2];
  v7 = a1[3];
  *a1 = wld_animctrl_Graph_vtable;
  for (i = fw_memory_g_heap_manager_ptr; v7 != v6; v7 -= 48) {
    if ((*(_BYTE*)(v7 - 24) & 1) != 0) {
      v10 = *(_QWORD*)(v7 - 8);
      if (v10 != 0) {
        if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)i + v11, v10);
      }
    }
  }
  v12 = a1[8];
  a1[3] = v6;
  a1[9] = v12;
  Graph_d29060_alt1(a1, a2, a3, a4, a5, a6);
  v13 = a1[8];
  if (v13 != 0) {
    v14 = *(_QWORD*)i;
    a1[9] = v13;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v14 + v15, v13);
  }
  v16 = a1[5];
  if (v16 != 0) {
    v17 = *(_QWORD*)i;
    a1[6] = v16;
    v18 = 128;
    if (*(_QWORD*)(v17 + 200) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v17 + v18, v16);
  }
  v19 = a1[2];
  if (v19 != 0) {
    v20 = a1[3];
    if (v19 == v20) {
      goto LABEL_29;
    }
    do {
      if ((*(_BYTE*)(v20 - 24) & 1) != 0) {
        v21 = *(_QWORD*)(v20 - 8);
        if (v21 != 0) {
          if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
            v22 = 128;
          }
          else {
            v22 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)i + v22, v21);
        }
      }
      v20 -= 48;
    } while (v20 != v19);
    v23 = a1[2];
    a1[3] = v19;
    v19 = v23;
    if (v23 != 0) {
    LABEL_29:
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)i + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)i + v24, v19);
    }
  }
}

_QWORD* Graph_d29060(_QWORD* result, long double a2, double a3, double a4,
                     double a5, long double a6)
{
  float32x2_t** v6;
  float32x2_t* v7;
  float32x2_t* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  float32x2_t* v15;
  float32x2_t* v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  float32x2_t** v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  int8x8_t v29;
  int8x8_t v30;
  float v31;
  float32x2_t* v32;
  long double v33;
  int8x8_t v34;
  float v35;
  int8x8_t v36;
  float v37;
  float v38;
  int8x8_t v39;
  float v40;
  float32x2_t* v41;
  float v42;
  float v43;
  float32x2_t** v44;
  float32x2_t** v45;
  unsigned __int64 v46;
  float32x2_t v47;
  float v48;
  unsigned __int64* v49;
  unsigned __int64* v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  unsigned __int64 v58;
  float32x2_t v59;
  float v60;
  bool v61;
  float v62;
  bool v63;
  bool v64;
  float v65;
  float v66;
  unsigned __int64** v68;
  unsigned __int64** v69;
  unsigned __int64* v70;
  float32x2_t v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  char* v81;
  __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  char* v86;
  __int64 v87;
  __int64 v88;
  unsigned __int32 v89;
  float v90;
  __int64 v91;
  float v92;
  float32x2_t v93;
  float32x2_t v94;
  float v95;
  float32x2_t v96;
  __int64 v97;
  __int64 v98;
  float v99;
  __int64 v100;
  float v101;
  float v102;
  __int64 v103;
  __int64 v104;
  unsigned __int32 v105;
  float v106;
  __int64 v107;
  __int64 i;
  float v109;
  float32x2_t** v110;
  float32x2_t* v111;
  float32x2_t* v112;
  float32x2_t v113;
  float v114;
  float32x2_t v115;
  float v116;
  float v117;
  float v118;
  int v119;
  float32x2_t** v120;
  __int64 v121;
  __int64 v122;
  float v123;
  __int64 v124;
  float v125;
  float v126;
  __int64 v127;
  unsigned __int64 v128;
  unsigned __int64 v129;
  unsigned __int64 v130;
  float v131;
  unsigned __int64 v132;
  unsigned __int64 v133;
  _QWORD v134[2];
  __int64 v135;

  v6 = (float32x2_t**)result[5];
  v7 = (float32x2_t*)result[2];
  v8 = (float32x2_t*)result[3];
  v9 = result;
  result[6] = v6;
  if (v8 != v7) {
    v10 = 1;
    v11 = 48;
    v12 = 0;
    do {
      v130 = v12 + 1;
      v13 = 0xAAAAAAAAAAAAAAABLL * (((char*)v8 - (char*)v7) >> 4);
      if (v13 > v12 + 1) {
        v135 = v11;
        v128 = v10;
        v132 = v12;
        do {
          v14 = v9[7];
          v15 = &v7[6 * v12];
          v16 = (float32x2_t*)((char*)v7 + v11);
          if ((unsigned __int64)v6 < v14) {
            *v6 = v15;
            v6[1] = v16;
            v6 += 2;
          }
          else {
            v17 = v9[5];
            v18 = (char*)v6 - v17;
            v19 = ((__int64)v6 - v17) >> 4;
            v20 = v19 + 1;
            if ((unsigned __int64)(v19 + 1) >> 60 != 0) {
              GameRoutine_d29ca0();
            }
            v21 = v14 - v17;
            if (v21 >> 3 > v20) {
              v20 = v21 >> 3;
            }
            if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF0LL) {
              v22 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v22 = v20;
            }
            if (v22 != 0) {
              if (v22 >> 60 != 0) {
              LABEL_158:
                GameRoutine_60a210(result);
              }
              v23 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v22, 16, 0);
            }
            else {
              v23 = 0;
            }
            v24 = (float32x2_t**)&v18[v23];
            v25 = v23 + 16 * v22;
            *v24 = v15;
            v24[1] = v16;
            v26 = (__int64)&v18[v23 + -16 * v19];
            v6 = (float32x2_t**)&v18[v23 + 16];
            result = (_QWORD*)memcpy(v26, v17, v18);
            v9[5] = v26;
            v9[6] = v6;
            v9[7] = v25;
            if (v17 != 0) {
              v27 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v27 = 56;
              }
              result = (_QWORD*)nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v17);
            }
            v12 = v132;
          }
          v7 = (float32x2_t*)v9[2];
          v8 = (float32x2_t*)v9[3];
          ++v10;
          v11 += 48;
          v9[6] = v6;
          v13 = 0xAAAAAAAAAAAAAAABLL * (((char*)v8 - (char*)v7) >> 4);
        } while (v13 > v10);
        v10 = v128;
        v11 = v135;
      }
      ++v10;
      v11 += 48;
      v12 = v130;
    } while (v13 > v130);
  }
  v28 = v9[11];
  LANES64(v29).n64_u64[0] = v28;
  if (v8 == v7) {
    v45 = nullptr;
    v44 = nullptr;
    goto LABEL_99;
  }
  LANES64(v30).n64_u64[0] = 0x80000000800000LL;
  v31 = *((float*)&v28 + 1);
  v32 = v7;
  *(float32x2_t*)&v33 = vneg_f32(COERCE_AS(float32x2_t, 0x80000000800000LL));
  do {
    LANES64(v34).n64_u64[0] = LANES64(*(v32)).n64_u64[0];
    v32 += 6;
    v35 = LANES64(v34).n64_f32[1];
    LANES64(v36).n64_u64[0] =
        LANES64_OF(vbsl_s8(vdup_lane_s32(vcgt_f32(v34, v30), 0), v34, v30))
            .n64_u64[0];
    *(int8x8_t*)&a6 =
        vbsl_s8(vdup_lane_s32(vcgt_f32(*(float32x2_t*)&v33, v34), 0), v34,
                *(int8x8_t*)&v33);
    if (LANES64(v34).n64_f32[1] >= *((float*)&v33 + 1)) {
      v37 = *((float*)&v33 + 1);
    }
    else {
      v37 = v35;
    }
    v33 = a6;
    if (LANES64(v30).n64_f32[1] >= v35) {
      v38 = LANES64(v30).n64_f32[1];
    }
    else {
      v38 = v35;
    }
    LANES64(v30).n64_u64[0] = __PAIR64__(LODWORD(v38), LANES64(v36).n64_u32[0]);
    *((float*)&v33 + 1) = v37;
  } while (v32 != v8);
  LANES64(v39).n64_u64[0] =
      LANES64_OF(vbsl_s8(vdup_lane_s32(vcgt_f32(*(float32x2_t*)&a6, v29), 0),
                         *(int8x8_t*)&v33,
                         vbsl_s8(vdup_lane_s32(vcgt_f32(v29, v36), 0),
                                 COERCE_AS(int8x8_t,
                                           __PAIR64__(LODWORD(v38),
                                                      LANES64(v36).n64_u32[0])),
                                 v29)))
          .n64_u64[0];
  LODWORD(v40) = HIDWORD(v9[11]);
  if (v38 < v31) {
    v40 = v38;
  }
  v41 = v7;
  if (v37 <= v31) {
    v42 = v40;
  }
  else {
    v42 = v37;
  }
  do {
    v43 = LANES64_OF(
              vsub_f32(COERCE_AS(float32x2_t, LANES64(*(v41)).n64_u64[0]), v39))
              .n64_f32[0];
    if ((float)((float)((float)(COERCE_FLOAT(
                                    HIDWORD(LANES64(*(v41)).n64_u64[0])) -
                                v42) *
                        (float)(COERCE_FLOAT(
                                    HIDWORD(LANES64(*(v41)).n64_u64[0])) -
                                v42)) +
                (float)(v43 * v43)) <= 0x1.a36e2e0000000p-14) {
      v89 = LANES64(v41[1]).n64_u32[0];
      do {
        if (LANES64(v7[1]).n64_u32[0] == v89) {
          v90 = 1.0;
        }
        else {
          v90 = 0.0;
        }
        LANES64(v7[1]).n64_f32[1] = v90;
        v7 += 6;
      } while (v7 != v8);
      return result;
    }
    v41 += 6;
  } while (v41 != v8);
  v44 = nullptr;
  v45 = nullptr;
  v46 = 0;
  v133 = LANES64(v39).n64_u64[0];
  v129 = __PAIR64__(LODWORD(v42), LANES64(v39).n64_u32[0]);
  v131 = v42;
  while (2) {
    *(float32x2_t*)&v33 = COERCE_AS(float32x2_t, LANES64(*(v7)).n64_u64[0]);
    LANES64(v47).n64_f32[0] =
        LANES64_OF(
            vsub_f32(COERCE_AS(float32x2_t, LANES64(*(v7)).n64_u64[0]), v39))
            .n64_f32[0];
    v48 = COERCE_FLOAT(HIDWORD(LANES64(*(v7)).n64_u64[0])) - v42;
    *(float*)&v33 =
        sqrtf((float)(v48 * v48) +
              (float)(LANES64(v47).n64_f32[0] * LANES64(v47).n64_f32[0]));
    if (LANES64(v47).n64_f32[0] != 0.0 || v48 != 0.0) {
      LANES64(v47).n64_f32[0] = LANES64(v47).n64_f32[0] / *(float*)&v33;
      v48 = v48 / *(float*)&v33;
    }
    *((float*)&a2 + 1) = v48;
    v49 = (unsigned __int64*)v9[2];
    v50 = (unsigned __int64*)v9[3];
    v51 = fmaxf(*(float*)&v33 + -0x1.0624de0000000p-10, 0.0);
    v52 = v51 * LANES64(v47).n64_f32[0];
    v53 = vmuls_lane_f32(v51, *(float32x2_t*)&a2, 1);
    *(float*)&a2 = LANES64(v39).n64_f32[0] + v52;
    *(float*)&v33 = v42 + v53;
    if (v49 == v50) {
    LABEL_63:
      v68 = (unsigned __int64**)v9[5];
      v69 = (unsigned __int64**)v9[6];
      if (v68 != v69) {
        *(float*)&a2 = *(float*)&a2 - LANES64(v39).n64_f32[0];
        *(float*)&v33 = *(float*)&v33 - v42;
        do {
          v70 = v68[1];
          LANES64(v71).n64_u64[0] = **v68;
          v72 = *((float*)*v68 + 1);
          v73 = COERCE_FLOAT(*v70) - LANES64(v71).n64_f32[0];
          v74 = *((float*)v70 + 1) - v72;
          v75 = (float)(*(float*)&a2 * v74) - (float)(v73 * *(float*)&v33);
          if (v75 != 0.0) {
            v76 = v72 - v42;
            v77 = LANES64_OF(vsub_f32(v71, v39)).n64_f32[0];
            v78 = (float)((float)(v76 * (float)-*(float*)&a2) +
                          (float)(v77 * *(float*)&v33)) /
                  v75;
            if (v78 <= 1.0 && v78 >= 0.0) {
              v79 = (float)((float)(v76 * (float)-v73) + (float)(v77 * v74)) /
                    v75;
              if (v79 >= 0.0 && v79 <= 1.0) {
                goto LABEL_74;
              }
            }
          }
          v68 += 2;
        } while (v68 != v69);
      }
      if ((unsigned __int64)v45 < v46) {
        *v45++ = v7;
      }
      else {
        v81 = (char*)((char*)v45 - (char*)v44);
        v82 = v45 - v44;
        v83 = v82 + 1;
        if ((unsigned __int64)(v82 + 1) >> 61 != 0) {
          GameRoutine_d29cc0(a2, v33);
        }
        if ((__int64)(v46 - (_QWORD)v44) >> 2 > v83) {
          v83 = (__int64)(v46 - (_QWORD)v44) >> 2;
        }
        if (v46 - (unsigned __int64)v44 >= 0x7FFFFFFFFFFFFFF8LL) {
          v84 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v84 = v83;
        }
        if (v84 != 0) {
          if (v84 >> 61 != 0) {
            goto LABEL_158;
          }
          v85 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v84, 16, 0);
        }
        else {
          v85 = 0;
        }
        v46 = v85 + 8 * v84;
        v86 = (char*)((char*)v45 - (char*)v44);
        v87 = (__int64)&v81[v85 + -8 * v82];
        *(_QWORD*)&v81[v85] = v7;
        v45 = (float32x2_t**)&v81[v85 + 8];
        result = (_QWORD*)memcpy(v87, v44, v86);
        if (v44 != nullptr) {
          v88 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v88 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v88, v44);
        }
        v42 = v131;
        LANES64(v39).n64_u64[0] = v133;
        v44 = (float32x2_t**)v87;
      }
    }
    else {
      v54 = fmaxf(LANES64(v39).n64_f32[0], *(float*)&a2);
      v55 = fminf(LANES64(v39).n64_f32[0], *(float*)&a2);
      v56 = fmaxf(v42, *(float*)&v33);
      v57 = fminf(v42, *(float*)&v33);
      while (1) {
        v58 = *v49;
        v49 += 6;
        LANES64(v59).n64_u64[0] = v58;
        v60 = *((float*)&v58 + 1);
        v61 = v54 < *(float*)&v58 || LANES64(v59).n64_f32[0] < v55;
        LODWORD(v62) = LANES64_OF(vsub_f32(v59, v39)).n64_u32[0];
        v63 = v61 || v56 < v60;
        v64 = v63 || v60 < v57;
        v65 = (float)(v42 - *(float*)&v33) * v62;
        v66 = (float)(LANES64(v39).n64_f32[0] - *(float*)&a2) *
              (float)(v60 - v42);
        if (!v64 && v65 == v66) {
          break;
        }
        if (v49 == v50) {
          goto LABEL_63;
        }
      }
    LABEL_74:
      LANES64(v7[1]).n64_u32[1] = 0;
    }
    v7 += 6;
    if (v7 != v8) {
      continue;
    }
    break;
  }
  LANES64(v29).n64_u64[0] = v129;
LABEL_99:
  v91 = v45 - v44;
  if (v91 == 0) {
    v107 = v9[2];
    for (i = v9[3]; v107 != i; v107 += 48) {
      if (*(_DWORD*)(v107 + 8) != 0) {
        v109 = 0.0;
      }
      else {
        v109 = 1.0;
      }
      *(float*)(v107 + 12) = v109;
    }
  LABEL_152:
    if (v44 != nullptr) {
      goto LABEL_153;
    }
    return result;
  }
  if (v91 != 1) {
    if (v91 == 2) {
      v92 = 1.0;
      LANES64(v93).n64_u64[0] = LANES64(*((*v44))).n64_u64[0];
      LANES64(v94).n64_u64[0] =
          LANES64_OF(vsub_f32(v93, COERCE_AS(float32x2_t,
                                             LANES64(*(v44[1])).n64_u64[0])))
              .n64_u64[0];
      v95 = LANES64_OF(vmul_f32(v94, v94)).n64_f32[1] +
            (float)(LANES64(v94).n64_f32[0] * LANES64(v94).n64_f32[0]);
      if (v95 > 0.0) {
        LANES64(v96).n64_u64[0] = LANES64_OF(vsub_f32(v93, v29)).n64_u64[0];
        v92 =
            1.0 - fminf(fmaxf(sqrtf(LANES64_OF(vmul_f32(v96, v96)).n64_f32[1] +
                                    (float)(LANES64(v96).n64_f32[0] *
                                            LANES64(v96).n64_f32[0])) /
                                  sqrtf(v95),
                              0.0),
                        1.0);
      }
      LANES64((*v44)[1]).n64_f32[1] = v92;
      LANES64(v44[1][1]).n64_f32[1] = 1.0 - LANES64((*v44)[1]).n64_f32[1];
      v97 = v9[2];
      v98 = v9[3];
      if (v97 != v98) {
        v99 = 0.0;
        v100 = v9[2];
        do {
          v101 = *(float*)(v100 + 12);
          v100 += 48;
          v99 = v99 + v101;
        } while (v100 != v98);
        if (v99 == 0.0) {
          do {
            if (*(_DWORD*)(v97 + 8) != 0) {
              v102 = 0.0;
            }
            else {
              v102 = 1.0;
            }
            *(float*)(v97 + 12) = v102;
            v97 += 48;
          } while (v97 != v98);
        }
        else {
          do {
            *(float*)(v97 + 12) = *(float*)(v97 + 12) / v99;
            v97 += 48;
          } while (v97 != v98);
        }
      }
      goto LABEL_153;
    }
    if (v44 != v45) {
      v110 = v44;
      while (1) {
        v119 = 0;
        v120 = v44;
        while (LANES64((*v110)[1]).n64_u32[0] ==
               LANES64((*v120)[1]).n64_u32[0]) {
        LABEL_138:
          if (++v120 == v45) {
            goto LABEL_130;
          }
        }
        v134[v119] = *v120;
        if (v119 <= 0) {
          break;
        }
      LABEL_130:
        v112 = *v110++;
        v111 = v112;
        LANES64(v113).n64_u64[0] =
            LANES64_OF(vadd_f32(*(float32x2_t*)v134[0], *(float32x2_t*)v134[1]))
                .n64_u64[0];
        v114 = 0.5 * LANES64(v113).n64_f32[0];
        LANES64(v113).n64_f32[0] = vmuls_lane_f32(0.5, v113, 1);
        LANES64(v113).n64_f32[0] =
            (float)((float)(COERCE_FLOAT(HIDWORD(LANES64(*(v112)).n64_u64[0])) -
                            LANES64(v113).n64_f32[0]) *
                    (float)(COERCE_FLOAT(HIDWORD(LANES64(*(v112)).n64_u64[0])) -
                            LANES64(v113).n64_f32[0])) +
            (float)((float)(COERCE_FLOAT(LANES64(*(v112)).n64_u64[0]) - v114) *
                    (float)(COERCE_FLOAT(LANES64(*(v112)).n64_u64[0]) - v114));
        LANES64(v115).n64_u64[0] =
            LANES64_OF(
                vsub_f32(COERCE_AS(float32x2_t, LANES64(*(v112)).n64_u64[0]),
                         v29))
                .n64_u64[0];
        LANES64(v113).n64_f32[0] = sqrtf(LANES64(v113).n64_f32[0]);
        v116 = (float)(sqrtf(LANES64_OF(vmul_f32(v115, v115)).n64_f32[1] +
                             (float)(LANES64(v115).n64_f32[0] *
                                     LANES64(v115).n64_f32[0])) -
                       LANES64(v113).n64_f32[0]) /
               (float)(0.0 - LANES64(v113).n64_f32[0]);
        if (v116 <= 1.0) {
          v117 = v116;
        }
        else {
          v117 = 1.0;
        }
        if (v116 >= 0.0) {
          v118 = v117;
        }
        else {
          v118 = 0.0;
        }
        LANES64(v111[1]).n64_f32[1] = v118;
        if (v110 == v45) {
          goto LABEL_142;
        }
      }
      ++v119;
      goto LABEL_138;
    }
  LABEL_142:
    v121 = v9[2];
    v122 = v9[3];
    if (v121 != v122) {
      v123 = 0.0;
      v124 = v9[2];
      do {
        v125 = *(float*)(v124 + 12);
        v124 += 48;
        v123 = v123 + v125;
      } while (v124 != v122);
      if (v123 == 0.0) {
        do {
          if (*(_DWORD*)(v121 + 8) != 0) {
            v126 = 0.0;
          }
          else {
            v126 = 1.0;
          }
          *(float*)(v121 + 12) = v126;
          v121 += 48;
        } while (v121 != v122);
      }
      else {
        do {
          *(float*)(v121 + 12) = *(float*)(v121 + 12) / v123;
          v121 += 48;
        } while (v121 != v122);
      }
    }
    goto LABEL_152;
  }
  v103 = v9[2];
  v104 = v9[3];
  if (v103 != v104) {
    v105 = LANES64((*v44)[1]).n64_u32[0];
    do {
      if (*(_DWORD*)(v103 + 8) == v105) {
        v106 = 1.0;
      }
      else {
        v106 = 0.0;
      }
      *(float*)(v103 + 12) = v106;
      v103 += 48;
    } while (v103 != v104);
  }
LABEL_153:
  v127 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v127 = 56;
  }
  return (_QWORD*)nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v127, v44);
}

#pragma GCC visibility pop
