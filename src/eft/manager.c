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
__int64 Manager_bc57c0_alt1(__int64 a1, __int64 a2,
                            __int64 a3) __asm__("Manager_bc57c0");
__int64* Manager_bc6460_alt1(float* a1, float32x4_t* a2,
                             char a3) __asm__("Manager_bc6460");
__int64* GameRoutine_a90ce0(__int64* result, unsigned __int64);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 Manager_bc8ac0(float* a1, unsigned __int8* a2, __int64** a3);
__attribute__((swiftcall)) void
Manager_bccf60_alt1(PSEUDO_X8, _QWORD*, int, const char*,
                    const char*) __asm__("Manager_bccf60");
__int64* GameRoutine_bc8980_alt1(_QWORD*,
                                 const char**) __asm__("GameRoutine_bc8980");
__int64 GameRoutine_bc7fc0_alt1(__int64*) __asm__("GameRoutine_bc7fc0");
__int64 eft_bcb9e0(_QWORD*);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
char* GameRoutine_60a060_alt1(char*, __int64,
                              unsigned __int64) __asm__("GameRoutine_60a060");
int strcmp_alt1(const char*, const char*) __asm__("strcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void Config_bc5b80_alt1(__int64, __int64*,
                        unsigned int) __asm__("Config_bc5b80");
void GameRoutine_bc81b0_alt1(__int64*,
                             unsigned __int64) __asm__("GameRoutine_bc81b0");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
char* Manager_bc57c0(__int64* a1, __int64 a2, unsigned __int64 a3);
__int64* Manager_bc6460(float* a1, __int64 a2, char a3);

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

char* Manager_bc57c0(__int64* a1, __int64 a2, unsigned __int64 a3)
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
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;

  v3 = (_QWORD*)a1[37];
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
    v3 = (_QWORD*)a1[37];
  }
  if ((unsigned __int64)v3 >= a1[38]) {
    v15 = GameRoutine_bc7fc0_alt1(a1 + 36);
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
  a1[37] = v15;
  v16 = *(_QWORD*)(v15 - 24);
  v17 = *(_QWORD**)(v15 - 16);
  v18 = ((__int64)v17 - v16) >> 3;
  if (v18 > 0x3E) {
    if ((_QWORD*)((char*)v17 - v16) != ((__int64*)0x1F8LL)) {
      v19 = (_QWORD*)(v16 + 504);
      if ((_QWORD*)(v16 + 504) != v17) {
        v20 = fw_memory_g_heap_manager_ptr;
        do {
          v22 = (_QWORD*)*--v17;
          v21 = v22;
          *v17 = 0;
          if (v22 != nullptr) {
            eft_bcb9e0(v21);
            if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) != 0) {
              v23 = 128;
            }
            else {
              v23 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v20 + v23,
                                               (__int64)v21);
          }
        } while (v17 != v19);
      }
      *(_QWORD*)(v15 - 16) = v19;
    }
  }
  else {
    GameRoutine_bc81b0_alt1((__int64*)(v15 - 24), 63 - v18);
  }
  return GameRoutine_60a060_alt1((char*)(a1[37] - 72), a2, a3);
}

__int64* Manager_bc6460(float* a1, __int64 a2, char a3)
{

#pragma clang fp contract(off)
  const char* v3;
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
  const char* v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  char* v32;
  const char* v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  char* v36;
  const char* v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  char v43;
  __int64 v44;
  const char* v45;
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
  const char* v60;
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
  const char* v73;
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
  __int64 v85;
  float* v86;
  char* v87;
  char* v88;
  _QWORD* v89;
  int v90;
  float* v92;
  __int64 v93;
  __int64* v94;
  unsigned __int32 v95;
  int v96;
  __int64 v97;
  const char* v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  _QWORD* v106;
  _QWORD* v107;
  _QWORD* v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  const char* v115;
  __int64 v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  __int64 v119;
  float* v121;
  struct {
    float* v122;
    float* v123;
    __int64 v124;
    int v125;
    char gap60_[4];
    const char* v126;
    unsigned __int64 v127;
    char** v128;
    __int64 v129;
    int v130;
  } v122_;
  struct {
    __int64 v131[2];
    __int64 v132;
    char v133;
    char gap129_[7];
    __int64 v134;
    __int64 v135;
    char gap152_[8];
    unsigned __int64 v136;
    unsigned __int64 v137;
    unsigned __int64 v138;
    unsigned __int64 v139;
    unsigned __int64 v140;
    unsigned __int64 v141;
    __int64 v142;
  } v131_;
  struct {
    __int64 v143;
    unsigned __int64 v144;
    char* v145;
    unsigned __int64 v146;
    __int64 v147;
    char v148;
  } v143_;
  __int64* v149[2];

  v3 = *(const char**)(a2 + 16);
  if (v3 == nullptr) {
    return nullptr;
  }
  v4 = (float32x4_t*)a2;
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
          v15 = strcmp_alt1(*v9, v3);
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
        v4 = (float32x4_t*)a2;
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
    v119 = v18;
    v122_.v123 = nullptr;
    v122_.v124 = 0;
    v122_.v122 = nullptr;
    Config_bc5b80_alt1((__int64)v5, (__int64*)&v122_.v122, v19);
    v20 = v122_.v122;
    v121 = v122_.v123;
    if (v122_.v122 != v122_.v123) {
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
            if (GameRoutine_bc8980_alt1((_QWORD*)v5 + 31, (const char**)v9) !=
                nullptr) {
              goto LABEL_100;
            }
            v29 = *v9;
            v30 = strlen_alt1(*v9);
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
              v143_.v144 = v31;
              v143_.v145 = v32;
              v143_.v143 = v69 | 1;
            }
            else {
              v32 = (char*)&v143_.v143 + 1;
              LOBYTE(v143_.v143) = 2 * v30;
              if (v30 == 0) {
              LABEL_95:
                v32[v31] = 0;
                v149[0] = &v143_.v143;
                v70 = Manager_bc8ac0(v5 + 62, (unsigned __int8*)&v143_.v143,
                                     v149);
                v71 = v143_.v143;
                *(_DWORD*)(v70 + 40) = 0;
                if ((v71 & 1) != 0 && v143_.v145 != nullptr) {
                  v72 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v72 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v72,
                      (__int64)v143_.v145);
                }
              LABEL_100:
                v73 = *v9;
                v74 = strlen_alt1(*v9);
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
                  v143_.v144 = v75;
                  v143_.v145 = v76;
                  v143_.v143 = v77 | 1;
                }
                else {
                  v76 = (char*)&v143_.v143 + 1;
                  LOBYTE(v143_.v143) = 2 * v74;
                  if (v74 == 0) {
                  LABEL_109:
                    v76[v75] = 0;
                    v149[0] = &v143_.v143;
                    v50 = Manager_bc8ac0(v5 + 62, (unsigned __int8*)&v143_.v143,
                                         v149);
                    if ((v143_.v143 & 1) != 0 && v143_.v145 != nullptr) {
                      v78 = v4;
                      v79 = v5;
                      v80 = v50;
                      v81 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v81 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v81,
                          (__int64)v143_.v145);
                      v50 = v80;
                      v5 = v79;
                      v4 = v78;
                    }
                    v55 = *((_DWORD*)v9 + 79);
                    goto LABEL_115;
                  }
                }
                memmove_alt1((__int64)v76, (__int64)v73, v75);
                goto LABEL_109;
              }
            }
            memmove_alt1((__int64)v32, (__int64)v29, v31);
            goto LABEL_95;
          }
          if (GameRoutine_bc8980_alt1((_QWORD*)v5 + 26, (const char**)v9) ==
              nullptr) {
            v37 = *v9;
            v38 = strlen_alt1(*v9);
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
              v143_.v144 = v39;
              v143_.v145 = v40;
              v143_.v143 = v56 | 1;
            }
            else {
              v40 = (char*)&v143_.v143 + 1;
              LOBYTE(v143_.v143) = 2 * v38;
              if (v38 == 0) {
              LABEL_70:
                v40[v39] = 0;
                v149[0] = &v143_.v143;
                v57 = Manager_bc8ac0(v5 + 52, (unsigned __int8*)&v143_.v143,
                                     v149);
                v58 = v143_.v143;
                *(_DWORD*)(v57 + 40) = 0;
                if ((v58 & 1) != 0 && v143_.v145 != nullptr) {
                  v59 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v59 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v59,
                      (__int64)v143_.v145);
                }
                goto LABEL_75;
              }
            }
            memmove_alt1((__int64)v40, (__int64)v37, v39);
            goto LABEL_70;
          }
        LABEL_75:
          v60 = *v9;
          v61 = strlen_alt1(*v9);
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
            v143_.v144 = v62;
            v143_.v145 = v63;
            v143_.v143 = v64 | 1;
          }
          else {
            v63 = (char*)&v143_.v143 + 1;
            LOBYTE(v143_.v143) = 2 * v61;
            if (v61 == 0) {
            LABEL_84:
              v63[v62] = 0;
              v149[0] = &v143_.v143;
              v50 =
                  Manager_bc8ac0(v5 + 52, (unsigned __int8*)&v143_.v143, v149);
              if ((v143_.v143 & 1) != 0 && v143_.v145 != nullptr) {
                v65 = v4;
                v66 = v5;
                v67 = v50;
                v68 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v68 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v68,
                    (__int64)v143_.v145);
                v50 = v67;
                v5 = v66;
                v4 = v65;
              }
              v55 = *((_DWORD*)v9 + 77);
              goto LABEL_115;
            }
          }
          memmove_alt1((__int64)v63, (__int64)v60, v62);
          goto LABEL_84;
        }
        if (GameRoutine_bc8980_alt1((_QWORD*)v5 + 21, (const char**)v9) ==
            nullptr) {
          break;
        }
      LABEL_50:
        v45 = *v9;
        v46 = strlen_alt1(*v9);
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
          v143_.v144 = v47;
          v143_.v145 = v48;
          v143_.v143 = v49 | 1;
        LABEL_58:
          memmove_alt1((__int64)v48, (__int64)v45, v47);
          goto LABEL_59;
        }
        v48 = (char*)&v143_.v143 + 1;
        LOBYTE(v143_.v143) = 2 * v46;
        if (v46 != 0) {
          goto LABEL_58;
        }
      LABEL_59:
        v48[v47] = 0;
        v149[0] = &v143_.v143;
        v50 = Manager_bc8ac0(v5 + 42, (unsigned __int8*)&v143_.v143, v149);
        if ((v143_.v143 & 1) != 0 && v143_.v145 != nullptr) {
          v51 = v4;
          v52 = v5;
          v53 = v50;
          v54 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v54 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v54,
              (__int64)v143_.v145);
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
          v84 = (__int64)v122_.v122;
          if (v122_.v122 != nullptr) {
            goto LABEL_121;
          }
          goto LABEL_124;
        }
        v20 += 2;
        if (v20 == v121) {
          goto LABEL_120;
        }
      }
      v33 = *v9;
      v34 = strlen_alt1(*v9);
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
        v143_.v144 = v35;
        v143_.v145 = v36;
        v143_.v143 = v41 | 1;
      }
      else {
        v36 = (char*)&v143_.v143 + 1;
        LOBYTE(v143_.v143) = 2 * v34;
        if (v34 == 0) {
          goto LABEL_45;
        }
      }
      memmove_alt1((__int64)v36, (__int64)v33, v35);
    LABEL_45:
      v36[v35] = 0;
      v149[0] = &v143_.v143;
      v42 = Manager_bc8ac0(v5 + 42, (unsigned __int8*)&v143_.v143, v149);
      v43 = v143_.v143;
      *(_DWORD*)(v42 + 40) = 0;
      if ((v43 & 1) != 0 && v143_.v145 != nullptr) {
        v44 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v44 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, (__int64)v143_.v145);
      }
      goto LABEL_50;
    }
    v26 = false;
  LABEL_120:
    v84 = (__int64)v122_.v122;
    if (v122_.v122 != nullptr) {
    LABEL_121:
      v85 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v85 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v85, v84);
    }
  LABEL_124:
    v18 = v119;
    if (!v26) {
      v83 = nullptr;
      if (v17 == 0) {
        return v83;
      }
      goto LABEL_159;
    }
    v6 = eft_g_effectSystem;
  }
  v86 = v5;
  v87 = v9[1];
  v88 = v9[3];
  v89 = *(_QWORD**)(v6 + 104);
  v90 = GameRoutine_9a58b0(v9);
  if (v87 != nullptr || v88 == nullptr) {
    Manager_bccce0((void*)((__int64)&v143_.v143), v89, v90);
  }
  else {
    Manager_bccf60_alt1((void*)((__int64)&v143_.v143), v89, v90, v9[4], v9[3]);
  }
  v92 = v86;
  nn_os_LockMutex_alt1((__int64)&GameData_21675d0);
  v93 = *((_QWORD*)v86 + 54);
  v94 = *(__int64**)(v93 + 16);
  if (v94 != nullptr) {
    v95 = LANES128(v4[1]).n128_u32[2];
    *(_QWORD*)(v93 + 16) = v94[10];
    if ((unsigned int)(*(_DWORD*)v93 + 1) > 1) {
      v96 = *(_DWORD*)v93 + 1;
    }
    else {
      v96 = 1;
    }
    *(_DWORD*)v93 = v96;
    v94[3] = (__int64)v9;
    *v94 = (__int64)v94;
    v94[1] = (__int64)v94;
    *((_BYTE*)v94 + 34) = 0;
    *((_DWORD*)v94 + 9) = 0;
    *((_BYTE*)v94 + 72) = 0;
    *((_DWORD*)v94 + 4) = v96;
    *((_DWORD*)v94 + 5) = v95;
    *((_WORD*)v94 + 16) = 256;
  }
  v97 = *((_QWORD*)v86 + 55);
  v98 = (const char*)LANES128(v4[1]).n128_u64[0];
  v122_.v122 = v86;
  v122_.v123 = (float*)v94;
  v122_.v124 = v97;
  LODWORD(v97) = LANES128(v4[1]).n128_u32[2];
  v122_.v126 = v98;
  v122_.v125 = v97;
  v122_.v127 = strlen_alt1(v98);
  v122_.v128 = v9;
  v122_.v129 = v143_.v143;
  v122_.v130 = v143_.v144;
  if (((unsigned __int8)v143_.v145 & 1) != 0) {
    fw_text_String_CopyTerminated(v131_.v131, v143_.v147, v143_.v146);
  }
  else {
    v131_.v131[0] = (__int64)v143_.v145;
    v131_.v131[1] = v143_.v146;
    v131_.v132 = v143_.v147;
  }
  v131_.v134 = v18;
  v131_.v135 = v17;
  v131_.v133 = v143_.v148;
  if (v17 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                              memory_order_relaxed);
  }
  v99 = LANES128(v4[2]).n128_u64[1];
  v131_.v136 = LANES128(v4[2]).n128_u64[0];
  v131_.v137 = v99;
  v100 = LANES128(v4[3]).n128_u64[1];
  v131_.v138 = LANES128(v4[3]).n128_u64[0];
  v131_.v139 = v100;
  v101 = LANES128(v4[4]).n128_u64[1];
  v131_.v140 = LANES128(v4[4]).n128_u64[0];
  v131_.v141 = v101;
  v131_.v142 = *((_QWORD*)v86 + 15);
  v102 = GameRoutine_18e4e00((__int64)v149, (__int64*)&v122_.v122);
  v83 = nullptr;
  if (v94 != nullptr && v102 != 0) {
    v103 = *((int*)v94 + 9);
    *((_DWORD*)v94 + 9) = v103 + 1;
    *(_QWORD*)(v102 + 152) = v94;
    *(_WORD*)(v102 + 184) = v103;
    if (*((_BYTE*)v94 + 72) == 0) {
      v115 = *(const char**)v94[3];
      if (v115 != nullptr && *((_DWORD*)v94 + 4) != 0 && *v115 != 0) {
        v116 = v102;
        v117 = strlen_alt1(v115);
        if (v117 >= 0x3F) {
          v118 = 63;
        }
        else {
          v118 = v117;
        }
        memcpy_alt1((__int64)(v94 + 9), (__int64)v115, v118);
        v102 = v116;
        v92 = v86;
        *((_BYTE*)v94 + v118 + 72) = 0;
      }
    }
    v94[v103 + 5] = v102;
    v104 = *v94;
    v105 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)v92 + 37) - 24LL) +
                      8LL * LANES128(v4[1]).n128_i32[2]);
    *v94 = v105 + 48;
    v106 = *(_QWORD**)(v105 + 56);
    *(_QWORD*)(v104 + 8) = v106;
    *v106 = v104;
    *(_QWORD*)(v105 + 56) = v94;
    v107 = *(_QWORD**)(*(_QWORD*)(*((_QWORD*)v92 + 37) - 24LL) +
                       8LL * LANES128(v4[1]).n128_i32[2]);
    v110 = *(_QWORD*)(v102 + 136);
    v108 = (_QWORD*)(v102 + 136);
    v109 = v110;
    v111 = v107[8];
    v107 += 8;
    *v108 = v111;
    *(_QWORD*)(v109 + 8) = v107;
    *(_QWORD*)(*v107 + 8LL) = v108;
    *v107 = v109;
    nn_os_UnlockMutex_alt1((__int64)&GameData_21675d0);
    v83 = v94;
  }
  if (v131_.v135 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v131_.v135);
  }
  if ((v131_.v131[0] & 1) != 0 && v131_.v132 != 0) {
    v112 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v112 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v112, v131_.v132);
  }
  if (((unsigned __int8)v143_.v145 & 1) != 0 && v143_.v147 != 0) {
    v113 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v113 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v113, v143_.v147);
  }
  if (v17 != 0) {
  LABEL_159:
    std___1___shared_weak_count___release_weak_alt1(v17);
  }
  return v83;
}

__int64 Manager_bc8ac0(float* a1, unsigned __int8* a2, __int64** a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  float v29;
  float v30;
  float v31;
  _BOOL8 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 primeEm;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  __int64 v41;
  unsigned __int64 v42;

  v4 = *a2;
  v7 = (v4 & 1) == 0;
  v8 = v4 >> 1;
  if (v7) {
    v9 = a2 + 1;
  }
  else {
    v9 = *((unsigned __int8**)a2 + 2);
  }
  if (v7) {
    v10 = v8;
  }
  else {
    v10 = *((_QWORD*)a2 + 1);
  }
  v11 = std___1___hash_memory(v9, v10);
  v12 = *((_QWORD*)a1 + 1);
  v13 = v11;
  if (v12 != 0) {
    v14 = v12 - 1;
    if ((v12 & (v12 - 1)) != 0) {
      v3 = v11;
      if (v11 >= v12) {
        v3 = v11 % v12;
      }
    }
    else {
      v3 = v14 & v11;
    }
    v15 = *(__int64**)(*(_QWORD*)a1 + 8 * v3);
    if (v15 != nullptr) {
      v16 = *v15;
      if (*v15 != 0) {
        if ((v12 & v14) == 0) {
          while (1) {
            v21 = *(_QWORD*)(v16 + 8);
            if (v21 == v13) {
              v22 = *(unsigned __int8*)(v16 + 16);
              v23 = *(_QWORD*)(v16 + 24);
              if ((v22 & 1) == 0) {
                v23 = v22 >> 1;
              }
              if (v23 == v10) {
                v24 = (v22 & 1) != 0 ? *(_QWORD*)(v16 + 32) : v16 + 17;
                if ((unsigned int)memcmp(v24, v9, v10) == 0) {
                  return v16;
                }
              }
            }
            else if ((v21 & v14) != v3) {
              goto LABEL_41;
            }
            v16 = *(_QWORD*)v16;
            if (v16 == 0) {
              goto LABEL_41;
            }
          }
        }
        do {
          v17 = *(_QWORD*)(v16 + 8);
          if (v17 == v13) {
            v18 = *(unsigned __int8*)(v16 + 16);
            v19 = *(_QWORD*)(v16 + 24);
            if ((v18 & 1) == 0) {
              v19 = v18 >> 1;
            }
            if (v19 == v10) {
              v20 = (v18 & 1) != 0 ? *(_QWORD*)(v16 + 32) : v16 + 17;
              if ((unsigned int)memcmp(v20, v9, v10) == 0) {
                return v16;
              }
            }
          }
          else {
            if (v17 >= v12) {
              v17 %= v12;
            }
            if (v17 != v3) {
              break;
            }
          }
          v16 = *(_QWORD*)v16;
        } while (v16 != 0);
      }
    }
  }
LABEL_41:
  v25 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       48, 16, 0);
  v26 = *a3;
  *(_QWORD*)v25 = 0;
  *(_QWORD*)(v25 + 8) = v13;
  v16 = v25;
  v27 = *v26;
  v28 = v26[2];
  *(_QWORD*)(v25 + 24) = v26[1];
  *(_QWORD*)(v25 + 32) = v28;
  *(_QWORD*)(v25 + 16) = v27;
  v26[1] = 0;
  v26[2] = 0;
  *v26 = 0;
  *(_DWORD*)(v25 + 40) = 0;
  v29 = a1[8];
  v30 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v12 == 0 || (float)(v29 * (float)v12) < v30) {
    v31 = v30 / v29;
    v32 = true;
    if (v12 >= 3) {
      v32 = (v12 & (v12 - 1)) != 0;
    }
    v33 = v32 | (2 * v12);
    v34 = vcvtps_u64_f32(v31);
    if (v33 <= v34) {
      primeEm = v34;
    }
    else {
      primeEm = v33;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v36 = *((_QWORD*)a1 + 1);
    if (primeEm > v36) {
      goto LABEL_53;
    }
    if (primeEm < v36) {
      v37 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v36 < 3 || (v36 & (v36 - 1)) != 0) {
        v37 = std___1___next_prime(v37);
      }
      else {
        v38 = 1LL << -(char)__clz(v37 - 1);
        if (v37 >= 2) {
          v37 = v38;
        }
      }
      if (primeEm <= v37) {
        primeEm = v37;
      }
      if (primeEm < v36) {
      LABEL_53:
        GameRoutine_a90ce0((__int64*)a1, primeEm);
      }
    }
    v12 = *((_QWORD*)a1 + 1);
    if ((v12 & (v12 - 1)) != 0) {
      if (v13 >= v12) {
        v3 = v13 % v12;
      }
      else {
        v3 = v13;
      }
    }
    else {
      v3 = (v12 - 1) & v13;
    }
  }
  v39 = *(_QWORD*)a1;
  v40 = *(__int64**)(*(_QWORD*)a1 + 8 * v3);
  if (v40 != nullptr) {
    *(_QWORD*)v16 = *v40;
    *v40 = v16;
  }
  else {
    v41 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v16;
    *(_QWORD*)v16 = v41;
    *(_QWORD*)(v39 + 8 * v3) = a1 + 4;
    if (*(_QWORD*)v16 != 0) {
      v42 = *(_QWORD*)(*(_QWORD*)v16 + 8LL);
      if ((v12 & (v12 - 1)) != 0) {
        if (v42 >= v12) {
          v42 %= v12;
        }
      }
      else {
        v42 &= v12 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v42) = v16;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return v16;
}

#pragma GCC visibility pop
