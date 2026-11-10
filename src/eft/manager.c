#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Manager_bccce0(PSEUDO_X8, _QWORD* result, int);
__attribute__((swiftcall)) void Manager_bccf60(PSEUDO_X8,
                                               unsigned __int64 result, int,
                                               const char*, const char*);
__int64* GameRoutine_bc8980(_QWORD*, _QWORD*);
__int64 Config_bc5b80(__int64 result, __int64*, unsigned int);
__int64 GameRoutine_18e4e00(__int64, __int64*);
__int64 GameRoutine_5d2fc0(__int64, int, __int64);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9a58b0(_QWORD*);
__int64 GameRoutine_bc7fc0(_QWORD);
__int64 GameRoutine_bc81b0(_QWORD, _QWORD);
__int64 GameRoutine_bc8ac0(float*, unsigned __int8*, __int64**);
__int64 GameRoutine_bcb9e0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_21675d0;
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64 eft_g_effectSystem;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_1fcffe0[];
extern char** GameData_212e998;
void __attribute__((noreturn)) String_60a1d0();
__int64 Manager_bc5490(__int64 a1, __int64 a2, int32x4_t* a3, __int128* a4,
                       float a5, float a6);
__int64 Manager_bc57c0(__int64 a1, __int64 a2, __int64 a3);
__int64* Manager_bc6460(float* a1, float32x4_t* a2, char a3);

__int64 Manager_bc5490(__int64 a1, __int64 a2, int32x4_t* a3, __int128* a4,
                       float a5, float a6)
{
  int32x4_t v6;
  int32x4_t v7;
  int32x4_t v8;
  int32x4_t v9;
  int32x4_t v10;
  int32x4_t v11;
  __int64 v12;
  int32x4_t v13;
  int32x4_t v14;
  __int64 v15;
  int32x4_t v16;
  int32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  int32x4_t v20;
  int32x4_t v21;
  int32x4_t v22;
  int32x4_t v23;
  int32x4_t v24;
  int32x4_t v25;
  __int128 v26;
  struct {
    float32x4_t v28[2];
    float32x4_t v29;
    float32x4_t v30;
    int32x4_t v31;
    int32x4_t v32;
    int32x4_t v33;
    int32x4_t v34;
    float32x4_t v35;
    float32x4_t v36;
    float32x4_t v37;
    float32x4_t v38;
    int32x4_t v39;
    int32x4_t v40;
    int32x4_t v41;
    __int64 v42;
    __int64 v43;
    unsigned __int64 v44;
    int v45;
    int v46;
    __int64 v47;
    int v48;
    int v49;
    float v50;
    float v51;
    float v52;
    float v53;
    __int64 v54;
    int v55;
    int v56;
  } v28_;

  LANES128(v6).n128_u64[0] = *(_QWORD*)a2;
  LANES128(v7).n128_u64[0] = *(_QWORD*)(a2 + 16);
  LANES128(v8).n128_u64[0] = *(_QWORD*)(a2 + 32);
  LANES128(v9).n128_u64[0] = *(_QWORD*)(a2 + 48);
  v10 = *a3;
  v11 = a3[1];
  LANES128(v6).n128_u64[1] = *(unsigned int*)(a2 + 8);
  LANES128(v8).n128_u64[1] = *(unsigned int*)(a2 + 40);
  v12 = *(unsigned int*)(a2 + 56);
  LANES128(v7).n128_u64[1] = *(unsigned int*)(a2 + 24);
  v13 = vzip1q_s32(v6, v8);
  v14 = vzip2q_s32(v6, v8);
  v28_.v45 = *(_DWORD*)(a2 + 40);
  v28_.v41 = v8;
  v15 = *(_QWORD*)(a1 + 96);
  v28_.v50 = a5;
  v28_.v56 = 0;
  v28_.v46 = 0;
  v28_.v42 = 0;
  v28_.v43 = 0x3F80000000000000LL;
  v28_.v49 = 0;
  v28_.v51 = a6;
  v28_.v44 = LANES64_OF(vzip1_s32(*(int32x2_t*)&LANES128(v6).n128_i8[8],
                                  *(int32x2_t*)&LANES128(v7).n128_i8[8]))
                 .n64_u64[0];
  LANES128(v9).n128_u64[1] = v12 | 0x3F80000000000000LL;
  v28_.v39 = v6;
  v28_.v40 = v7;
  v28_.v54 = 0x3F8000003F800000LL;
  v16 = vzip1q_s32(v7, v9);
  v17 = vzip2q_s32(v7, v9);
  v28_.v55 = 1008981770;
  v18 = vzip1q_s32(v13, v16);
  v19 = vzip2q_s32(v13, v16);
  v20 = a3[2];
  v21 = a3[3];
  v28_.v28[0] = v18;
  v28_.v28[1] = v19;
  v22 = vzip1q_s32(v10, v20);
  v23 = vzip1q_s32(v11, v21);
  v24 = vzip2q_s32(v10, v20);
  v25 = vzip2q_s32(v11, v21);
  v28_.v31 = vzip1q_s32(v22, v23);
  v28_.v32 = vzip2q_s32(v22, v23);
  v28_.v33 = vzip1q_s32(v24, v25);
  v28_.v34 = vzip2q_s32(v24, v25);
  v28_.v29 = vzip1q_s32(v14, v17);
  v28_.v30 = vzip2q_s32(v14, v17);
  v28_.v35 = vmlaq_n_f32(
      vmlaq_n_f32(vmlaq_n_f32(vmulq_n_f32(v18, LANES128(v10).n128_f32[0]), v19,
                              LANES128(v11).n128_f32[0]),
                  v28_.v29, LANES128(v20).n128_f32[0]),
      v28_.v30, LANES128(v21).n128_f32[0]);
  v28_.v36 = vmlaq_lane_f32(
      vmlaq_lane_f32(
          vmlaq_lane_f32(
              vmulq_lane_f32(
                  v18, COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]), 1),
              v19, COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0]), 1),
          v28_.v29, COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]), 1),
      v28_.v30, COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]), 1);
  v26 = *a4;
  v28_.v37 = vmlaq_laneq_f32(
      vmlaq_laneq_f32(
          vmlaq_laneq_f32(vmulq_laneq_f32(v18, v10, 2), v19, v11, 2), v28_.v29,
          v20, 2),
      v28_.v30, v21, 2);
  v28_.v38 = vmlaq_laneq_f32(
      vmlaq_laneq_f32(
          vmlaq_laneq_f32(vmulq_laneq_f32(v18, v10, 3), v19, v11, 3), v28_.v29,
          v20, 3),
      v28_.v30, v21, 3);
  v28_.v47 = v26;
  v28_.v48 = DWORD2(v26);
  v28_.v53 = a6 - a5;
  v28_.v52 = a5 * a6;
  return GameRoutine_5d2fc0(v15, 0, (__int64)v28_.v28);
}

__int64 Manager_bc57c0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 i;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  unsigned __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  long double v23;
  __int64 v24;

  v3 = *(_QWORD**)(a1 + 296);
  v7 = (__int64*)*(v3 - 3);
  v8 = (__int64*)*(v3 - 2);
  if (v7 != v8) {
    do {
      v9 = *v7;
      if (*v7 != 0) {
        v10 = *(_QWORD*)(v9 + 56);
        v11 = v9 + 48;
        *(_BYTE*)v9 = 1;
        while (v10 != v11) {
          v12 = *(unsigned int*)(v10 + 36);
          *(_BYTE*)(v10 + 34) = 1;
          if ((_DWORD)v12 != 0) {
            for (i = 0; i < v12; ++i) {
              v14 = *(_QWORD*)(v10 + 40 + 8 * i);
              if (v14 != 0) {
                (*(void (**)(__int64))(*(_QWORD*)v14 + 56LL))(v14);
                v12 = *(unsigned int*)(v10 + 36);
              }
            }
          }
          v10 = *(_QWORD*)(v10 + 8);
        }
      }
      ++v7;
    } while (v7 != v8);
    v3 = *(_QWORD**)(a1 + 296);
  }
  if ((unsigned __int64)v3 >= *(_QWORD*)(a1 + 304)) {
    v15 = GameRoutine_bc7fc0(a1 + 288);
  }
  else {
    v3[7] = 0;
    v3[8] = 0;
    v3[5] = 0;
    v3[6] = 0;
    v15 = (__int64)(v3 + 9);
    v3[3] = 0;
    v3[4] = 0;
    v3[1] = 0;
    v3[2] = 0;
    *v3 = 0;
  }
  *(_QWORD*)(a1 + 296) = v15;
  v16 = *(_QWORD*)(v15 - 24);
  v17 = *(_QWORD**)(v15 - 16);
  v18 = ((__int64)v17 - v16) >> 3;
  if (v18 > 0x3E) {
    if ((_QWORD*)((char*)v17 - v16) != ((__int64*)0x1F8LL)) {
      v19 = (_QWORD*)(v16 + 504);
      if ((_QWORD*)(v16 + 504) != v17) {
        v20 = fw_memory_g_heap_manager_ptr;
        do {
          v22 = *--v17;
          v21 = v22;
          *v17 = 0;
          if (v22 != 0) {
            GameRoutine_bcb9e0(v21);
            if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) != 0) {
              v24 = 128;
            }
            else {
              v24 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v24, v23);
          }
        } while (v17 != v19);
      }
      *(_QWORD*)(v15 - 16) = v19;
    }
  }
  else {
    GameRoutine_bc81b0(v15 - 24, 63 - v18);
  }
  return GameRoutine_60a060(*(_QWORD*)(a1 + 296) - 72LL, a2, a3);
}

__int64* Manager_bc6460(float* a1, float32x4_t* a2, char a3)
{

#pragma clang fp contract(off)
  _BYTE* v3;
  float32x4_t* v4;
  float* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char** v9;
  unsigned int v10;
  char v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  float* v20;
  float32x4_t v21;
  float v22;
  float32x4_t v23;
  int8x16_t v24;
  float v25;
  _BOOL4 v26;
  float v27;
  float v28;
  char* v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  char* v32;
  char* v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  char* v36;
  char* v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  char v43;
  __int64 v44;
  char* v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  char* v48;
  __int64 v49;
  __int64 v50;
  float32x4_t* v51;
  float* v52;
  __int64 v53;
  __int64 v54;
  int v55;
  __int64 v56;
  __int64 v57;
  char v58;
  __int64 v59;
  char* v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  char* v63;
  __int64 v64;
  float32x4_t* v65;
  float* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  char v71;
  __int64 v72;
  char* v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  char* v76;
  __int64 v77;
  float32x4_t* v78;
  float* v79;
  __int64 v80;
  __int64 v81;
  float v82;
  __int64* v83;
  __int64 v84;
  float* v85;
  char* v86;
  char* v87;
  _QWORD* v88;
  int v89;
  float* v91;
  __int64 v92;
  __int64* v93;
  unsigned __int32 v94;
  int v95;
  __int64 v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  _QWORD* v105;
  _QWORD* v106;
  _QWORD* v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  _BYTE* v114;
  __int64 v115;
  unsigned __int64 v116;
  __int64 v117;
  __int64 v118;
  float* v120;
  struct {
    float* v121;
    float* v122;
    __int64 v123;
    int v124;
    char gap60_[4];
    unsigned __int64 v125;
    __int64 v126;
    char** v127;
    __int64 v128;
    int v129;
  } v121_;
  struct {
    __int64 v130[2];
    __int64 v131;
    char v132;
    char gap129_[7];
    __int64 v133;
    __int64 v134;
    char gap152_[8];
    unsigned __int64 v135;
    unsigned __int64 v136;
    unsigned __int64 v137;
    unsigned __int64 v138;
    unsigned __int64 v139;
    unsigned __int64 v140;
    __int64 v141;
  } v130_;
  struct {
    __int64 v142;
    unsigned __int64 v143;
    __int64 v144;
    unsigned __int64 v145;
    __int64 v146;
    char v147;
  } v142_;
  __int64* v148[2];

  v3 = (_BYTE*)LANES128(a2[1]).n128_u64[0];
  if (v3 == nullptr) {
    return nullptr;
  }
  v4 = a2;
  v5 = a1;
  v6 = *eft_g_effectSystem_ptr[0];
  v7 = *(_QWORD*)(*eft_g_effectSystem_ptr[0] + 112);
  v8 = *(_QWORD*)(v7 + 24);
  if (v8 != 0) {
    v9 = GameData_212e998;
    if (*v3 != 0) {
      v10 = *(_DWORD*)(v7 + 32);
      if (v10 != 0) {
        v12 = a3;
        v13 = 0;
        while (1) {
          v14 = (v10 + v13) >> 1;
          v9 = (char**)(v8 + 336LL * v14);
          v15 = strcmp(*v9, v3);
          if (v15 == 0) {
            break;
          }
          if (v15 < 0) {
            v13 = v14 + 1;
          }
          else {
            v10 = (v10 + v13) >> 1;
          }
          if (v13 == v10) {
            v9 = GameData_1fcffe0;
            break;
          }
        }
        v5 = a1;
        v4 = a2;
        a3 = v12;
      }
    }
  }
  else {
    v9 = GameData_1fcffe0;
  }
  v16 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)v5 + 37) - 24LL) +
                   8LL * LANES128(v4[1]).n128_i32[2]);
  if (v16 == 0) {
    return nullptr;
  }
  v18 = *(_QWORD*)(v16 + 8);
  v17 = *(_QWORD*)(v16 + 16);
  if (v17 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                              memory_order_relaxed);
  }
  if ((a3 & 1) != 0 && *((float*)v9 + 74) >= 0x0.0p+0f) {
    v19 = LANES128(v4[1]).n128_u32[2];
    v118 = v18;
    v121_.v122 = nullptr;
    v121_.v123 = 0;
    v121_.v121 = nullptr;
    Config_bc5b80((__int64)v5, (__int64*)&v121_.v121, v19);
    v20 = v121_.v121;
    v120 = v121_.v122;
    if (v121_.v121 != v121_.v122) {
      while (1) {
        *(long double*)&v21 =
            ((long double (*)(_QWORD)) *
             (_QWORD*)(**(_QWORD**)v20 + 40LL))(*(_QWORD*)v20);
        v22 = *((float*)v9 + 74);
        v23 = vsubq_f32(v21, v4[2]);
        v24 = vmulq_f32(v23, v23);
        LANES128(v24).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
                .n64_u64[0];
        v25 =
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]))))
                .n64_f32[0];
        v26 = v25 < v22;
        if (v25 < v22) {
          goto LABEL_120;
        }
        v27 = *((float*)v9 + 76);
        if (v22 <= v27 && v25 >= v27) {
          v28 = *((float*)v9 + 78);
          if (v27 <= v28 && v25 >= v28) {
            if (GameRoutine_bc8980((_QWORD*)v5 + 31, v9) != nullptr) {
              goto LABEL_100;
            }
            v29 = *v9;
            v30 = strlen(*v9);
            if (v30 >= 0xFFFFFFFFFFFFFFF7LL) {
              goto LABEL_172;
            }
            v31 = v30;
            if (v30 >= 0x17) {
              if ((v30 | 7) == 0x17) {
                v69 = 26;
              }
              else {
                v69 = (v30 | 7) + 1;
              }
              v32 = (char*)fw_memory_HeapManager_Allocate(
                  fw_memory_g_heap_manager, v69, 16, 0);
              v142_.v143 = v31;
              v142_.v144 = (__int64)v32;
              v142_.v142 = v69 | 1;
            }
            else {
              v32 = (char*)&v142_.v142 + 1;
              LOBYTE(v142_.v142) = 2 * v30;
              if (v30 == 0) {
              LABEL_95:
                v32[v31] = 0;
                v148[0] = &v142_.v142;
                v70 = GameRoutine_bc8ac0(v5 + 62, (unsigned __int8*)&v142_.v142,
                                         v148);
                v71 = v142_.v142;
                *(_DWORD*)(v70 + 40) = 0;
                if ((v71 & 1) != 0 && v142_.v144 != 0) {
                  v72 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v72 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v72);
                }
              LABEL_100:
                v73 = *v9;
                v74 = strlen(*v9);
                if (v74 >= 0xFFFFFFFFFFFFFFF7LL) {
                LABEL_172:
                  String_60a1d0();
                }
                v75 = v74;
                if (v74 >= 0x17) {
                  if ((v74 | 7) == 0x17) {
                    v77 = 26;
                  }
                  else {
                    v77 = (v74 | 7) + 1;
                  }
                  v76 = (char*)fw_memory_HeapManager_Allocate(
                      fw_memory_g_heap_manager, v77, 16, 0);
                  v142_.v143 = v75;
                  v142_.v144 = (__int64)v76;
                  v142_.v142 = v77 | 1;
                }
                else {
                  v76 = (char*)&v142_.v142 + 1;
                  LOBYTE(v142_.v142) = 2 * v74;
                  if (v74 == 0) {
                  LABEL_109:
                    v76[v75] = 0;
                    v148[0] = &v142_.v142;
                    v50 = GameRoutine_bc8ac0(
                        v5 + 62, (unsigned __int8*)&v142_.v142, v148);
                    if ((v142_.v142 & 1) != 0 && v142_.v144 != 0) {
                      v78 = v4;
                      v79 = v5;
                      v80 = v50;
                      v81 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v81 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v81);
                      v50 = v80;
                      v5 = v79;
                      v4 = v78;
                    }
                    v55 = *((_DWORD*)v9 + 79);
                    goto LABEL_115;
                  }
                }
                memmove(v76, v73, v75);
                goto LABEL_109;
              }
            }
            memmove(v32, v29, v31);
            goto LABEL_95;
          }
          if (GameRoutine_bc8980((_QWORD*)v5 + 26, v9) == nullptr) {
            v37 = *v9;
            v38 = strlen(*v9);
            if (v38 >= 0xFFFFFFFFFFFFFFF7LL) {
              goto LABEL_172;
            }
            v39 = v38;
            if (v38 >= 0x17) {
              if ((v38 | 7) == 0x17) {
                v56 = 26;
              }
              else {
                v56 = (v38 | 7) + 1;
              }
              v40 = (char*)fw_memory_HeapManager_Allocate(
                  fw_memory_g_heap_manager, v56, 16, 0);
              v142_.v143 = v39;
              v142_.v144 = (__int64)v40;
              v142_.v142 = v56 | 1;
            }
            else {
              v40 = (char*)&v142_.v142 + 1;
              LOBYTE(v142_.v142) = 2 * v38;
              if (v38 == 0) {
              LABEL_70:
                v40[v39] = 0;
                v148[0] = &v142_.v142;
                v57 = GameRoutine_bc8ac0(v5 + 52, (unsigned __int8*)&v142_.v142,
                                         v148);
                v58 = v142_.v142;
                *(_DWORD*)(v57 + 40) = 0;
                if ((v58 & 1) != 0 && v142_.v144 != 0) {
                  v59 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v59 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v59);
                }
                goto LABEL_75;
              }
            }
            memmove(v40, v37, v39);
            goto LABEL_70;
          }
        LABEL_75:
          v60 = *v9;
          v61 = strlen(*v9);
          if (v61 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_172;
          }
          v62 = v61;
          if (v61 >= 0x17) {
            if ((v61 | 7) == 0x17) {
              v64 = 26;
            }
            else {
              v64 = (v61 | 7) + 1;
            }
            v63 = (char*)fw_memory_HeapManager_Allocate(
                fw_memory_g_heap_manager, v64, 16, 0);
            v142_.v143 = v62;
            v142_.v144 = (__int64)v63;
            v142_.v142 = v64 | 1;
          }
          else {
            v63 = (char*)&v142_.v142 + 1;
            LOBYTE(v142_.v142) = 2 * v61;
            if (v61 == 0) {
            LABEL_84:
              v63[v62] = 0;
              v148[0] = &v142_.v142;
              v50 = GameRoutine_bc8ac0(v5 + 52, (unsigned __int8*)&v142_.v142,
                                       v148);
              if ((v142_.v142 & 1) != 0 && v142_.v144 != 0) {
                v65 = v4;
                v66 = v5;
                v67 = v50;
                v68 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v68 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v68);
                v50 = v67;
                v5 = v66;
                v4 = v65;
              }
              v55 = *((_DWORD*)v9 + 77);
              goto LABEL_115;
            }
          }
          memmove(v63, v60, v62);
          goto LABEL_84;
        }
        if (GameRoutine_bc8980((_QWORD*)v5 + 21, v9) == nullptr) {
          break;
        }
      LABEL_50:
        v45 = *v9;
        v46 = strlen(*v9);
        if (v46 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_172;
        }
        v47 = v46;
        if (v46 >= 0x17) {
          if ((v46 | 7) == 0x17) {
            v49 = 26;
          }
          else {
            v49 = (v46 | 7) + 1;
          }
          v48 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v49, 16, 0);
          v142_.v143 = v47;
          v142_.v144 = (__int64)v48;
          v142_.v142 = v49 | 1;
        LABEL_58:
          memmove(v48, v45, v47);
          goto LABEL_59;
        }
        v48 = (char*)&v142_.v142 + 1;
        LOBYTE(v142_.v142) = 2 * v46;
        if (v46 != 0) {
          goto LABEL_58;
        }
      LABEL_59:
        v48[v47] = 0;
        v148[0] = &v142_.v142;
        v50 = GameRoutine_bc8ac0(v5 + 42, (unsigned __int8*)&v142_.v142, v148);
        if ((v142_.v142 & 1) != 0 && v142_.v144 != 0) {
          v51 = v4;
          v52 = v5;
          v53 = v50;
          v54 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v54 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v54);
          v50 = v53;
          v5 = v52;
          v4 = v51;
        }
        v55 = *((_DWORD*)v9 + 75);
      LABEL_115:
        v82 =
            *(float*)(v50 + 40) + (float)((float)v55 / -0x1.9000000000000p+6f);
        *(float*)(v50 + 40) = v82;
        if (v82 < 0x0.0p+0f) {
          v26 = true;
          *(float*)(v50 + 40) = v82 + 0x1.0000000000000p+0f;
          if (v121_.v121 != nullptr) {
            goto LABEL_121;
          }
          goto LABEL_124;
        }
        v20 += 2;
        if (v20 == v120) {
          goto LABEL_120;
        }
      }
      v33 = *v9;
      v34 = strlen(*v9);
      if (v34 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_172;
      }
      v35 = v34;
      if (v34 >= 0x17) {
        if ((v34 | 7) == 0x17) {
          v41 = 26;
        }
        else {
          v41 = (v34 | 7) + 1;
        }
        v36 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v41, 16, 0);
        v142_.v143 = v35;
        v142_.v144 = (__int64)v36;
        v142_.v142 = v41 | 1;
      }
      else {
        v36 = (char*)&v142_.v142 + 1;
        LOBYTE(v142_.v142) = 2 * v34;
        if (v34 == 0) {
          goto LABEL_45;
        }
      }
      memmove(v36, v33, v35);
    LABEL_45:
      v36[v35] = 0;
      v148[0] = &v142_.v142;
      v42 = GameRoutine_bc8ac0(v5 + 42, (unsigned __int8*)&v142_.v142, v148);
      v43 = v142_.v142;
      *(_DWORD*)(v42 + 40) = 0;
      if ((v43 & 1) != 0 && v142_.v144 != 0) {
        v44 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v44 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v44);
      }
      goto LABEL_50;
    }
    v26 = false;
  LABEL_120:
    if (v121_.v121 != nullptr) {
    LABEL_121:
      v84 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v84 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v84);
    }
  LABEL_124:
    v18 = v118;
    if (!v26) {
      v83 = nullptr;
      if (v17 == 0) {
        return v83;
      }
      goto LABEL_159;
    }
    v6 = eft_g_effectSystem;
  }
  v85 = v5;
  v86 = v9[1];
  v87 = v9[3];
  v88 = *(_QWORD**)(v6 + 104);
  v89 = GameRoutine_9a58b0(v9);
  if (v86 != nullptr || v87 == nullptr) {
    Manager_bccce0((void*)((__int64)&v142_.v142), v88, v89);
  }
  else {
    Manager_bccf60((void*)((__int64)&v142_.v142), (unsigned __int64)v88, v89,
                   v9[4], v9[3]);
  }
  v91 = v85;
  nn_os_LockMutex(&GameData_21675d0);
  v92 = *((_QWORD*)v85 + 54);
  v93 = *(__int64**)(v92 + 16);
  if (v93 != nullptr) {
    v94 = LANES128(v4[1]).n128_u32[2];
    *(_QWORD*)(v92 + 16) = v93[10];
    if ((unsigned int)(*(_DWORD*)v92 + 1) > 1) {
      v95 = *(_DWORD*)v92 + 1;
    }
    else {
      v95 = 1;
    }
    *(_DWORD*)v92 = v95;
    v93[3] = (__int64)v9;
    *v93 = (__int64)v93;
    v93[1] = (__int64)v93;
    *((_BYTE*)v93 + 34) = 0;
    *((_DWORD*)v93 + 9) = 0;
    *((_BYTE*)v93 + 72) = 0;
    *((_DWORD*)v93 + 4) = v95;
    *((_DWORD*)v93 + 5) = v94;
    *((_WORD*)v93 + 16) = 256;
  }
  v96 = *((_QWORD*)v85 + 55);
  v97 = LANES128(v4[1]).n128_u64[0];
  v121_.v121 = v85;
  v121_.v122 = (float*)v93;
  v121_.v123 = v96;
  LODWORD(v96) = LANES128(v4[1]).n128_u32[2];
  v121_.v125 = v97;
  v121_.v124 = v96;
  v121_.v126 = strlen(v97);
  v121_.v127 = v9;
  v121_.v128 = v142_.v142;
  v121_.v129 = v142_.v143;
  if ((v142_.v144 & 1) != 0) {
    fw_text_String_CopyTerminated(v130_.v130, v142_.v146, v142_.v145);
  }
  else {
    v130_.v130[0] = v142_.v144;
    v130_.v130[1] = v142_.v145;
    v130_.v131 = v142_.v146;
  }
  v130_.v133 = v18;
  v130_.v134 = v17;
  v130_.v132 = v142_.v147;
  if (v17 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                              memory_order_relaxed);
  }
  v98 = LANES128(v4[2]).n128_u64[1];
  v130_.v135 = LANES128(v4[2]).n128_u64[0];
  v130_.v136 = v98;
  v99 = LANES128(v4[3]).n128_u64[1];
  v130_.v137 = LANES128(v4[3]).n128_u64[0];
  v130_.v138 = v99;
  v100 = LANES128(v4[4]).n128_u64[1];
  v130_.v139 = LANES128(v4[4]).n128_u64[0];
  v130_.v140 = v100;
  v130_.v141 = *((_QWORD*)v85 + 15);
  v101 = GameRoutine_18e4e00((__int64)v148, (__int64*)&v121_.v121);
  v83 = nullptr;
  if (v93 != nullptr && v101 != 0) {
    v102 = *((int*)v93 + 9);
    *((_DWORD*)v93 + 9) = v102 + 1;
    *(_QWORD*)(v101 + 152) = v93;
    *(_WORD*)(v101 + 184) = v102;
    if (*((_BYTE*)v93 + 72) == 0) {
      v114 = *(_BYTE**)v93[3];
      if (v114 != nullptr && *((_DWORD*)v93 + 4) != 0 && *v114 != 0) {
        v115 = v101;
        v116 = strlen(v114);
        if (v116 >= 0x3F) {
          v117 = 63;
        }
        else {
          v117 = v116;
        }
        memcpy(v93 + 9, v114, v117);
        v101 = v115;
        v91 = v85;
        *((_BYTE*)v93 + v117 + 72) = 0;
      }
    }
    v93[v102 + 5] = v101;
    v103 = *v93;
    v104 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)v91 + 37) - 24LL) +
                      8LL * LANES128(v4[1]).n128_i32[2]);
    *v93 = v104 + 48;
    v105 = *(_QWORD**)(v104 + 56);
    *(_QWORD*)(v103 + 8) = v105;
    *v105 = v103;
    *(_QWORD*)(v104 + 56) = v93;
    v106 = *(_QWORD**)(*(_QWORD*)(*((_QWORD*)v91 + 37) - 24LL) +
                       8LL * LANES128(v4[1]).n128_i32[2]);
    v109 = *(_QWORD*)(v101 + 136);
    v107 = (_QWORD*)(v101 + 136);
    v108 = v109;
    v110 = v106[8];
    v106 += 8;
    *v107 = v110;
    *(_QWORD*)(v108 + 8) = v106;
    *(_QWORD*)(*v106 + 8LL) = v107;
    *v106 = v108;
    nn_os_UnlockMutex(&GameData_21675d0);
    v83 = v93;
  }
  if (v130_.v134 != 0) {
    std___1___shared_weak_count___release_weak(v130_.v134);
  }
  if ((v130_.v130[0] & 1) != 0 && v130_.v131 != 0) {
    v111 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v111 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v111);
  }
  if ((v142_.v144 & 1) != 0 && v142_.v146 != 0) {
    v112 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v112 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v112);
  }
  if (v17 != 0) {
  LABEL_159:
    std___1___shared_weak_count___release_weak(v17);
  }
  return v83;
}

#pragma GCC visibility pop
