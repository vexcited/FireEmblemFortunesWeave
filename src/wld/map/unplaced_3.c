#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void Object_a87520(PSEUDO_X8, __int64*,
                                              unsigned __int64, char);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 DecalModule_a93060(__int64*, __int64);
__int64 ElfFile_631220(__int64*, const char*);
__int64 GameHr_c172a0(__int64, _QWORD*, _QWORD*, unsigned int*);
__int64 GameHr_c1a5a0(__int64);
__int64 GameRoutine_634d80(__int64, __int64);
__int64 GameRoutine_a81a70(__int64, unsigned __int64);
__int64 GameRoutine_a8c380(__int64, _QWORD*);
__int64 GameRoutine_b31800(__int64 result, char);
__int64 GameRoutine_b81e20(__int64);
__int64 GameRoutine_c0b3c0(__int64, unsigned __int8*);
__int64 GameRoutine_c1e830(__int64 result, _QWORD*, char);
__int64 GameRoutine_c686d0(__int64, __int64);
__int64 Layout_c1ba40(__int64, __int64);
__int64 Layout_c1d3e0(__int64 result, __int64**);
__int64 LightingAnimModule_c69950(__int64 result);
__int64 LightingAnimModule_c6d940(__int64 result, unsigned int, int);
__int64 ResFile_5e5f00(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 nn_os_AcquireReadLock(__int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_ReleaseReadLock(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, const char*, ...);
__int64 std___1___hash_memory(__int64, unsigned __int64);
__int64 std___1___next_prime(unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__int64 wld_DecalModule_AddDecal(_QWORD*, __int64, __int64);
bool GameRoutine_ad7390(_QWORD*);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212df28;
extern _UNKNOWN* GameData_212eac0;
extern _UNKNOWN GameData_2203500;
extern __int128 GameData_1a82940;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83510;
extern __int128 GameData_1a83610;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212eab8;
extern int GameData_22034f8;
float wld_c0ed40(__int64, __int64, __int64, __int64);
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
int strcmp(const char*, const char*);
unsigned __int64 strlen(const char*);
void GameHr_c6c4f0(__int64, unsigned __int8*, unsigned int);
void GameRoutine_98f140(__int64*, _QWORD*);
void GameRoutine_a8c0c0(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_81e570();
void __attribute__((noreturn)) GameRoutine_98f290();
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void wld_map_c15dc0(__int64 a1, __int64 a2, __int64 a3, __int64* a4);
void wld_map_c17680(__int64 a1, __int64* a2, int a3, float32x4_t* a4,
                    __int64 a5, __int64 a6, __int64* a7);
void wld_map_c1be80(__int64 a1);
void wld_map_c1f5e0(__int64 a1, unsigned __int8* a2, char* a3);
_QWORD* wld_map_c225c0(__int64 a1, unsigned __int8* a2, __int64** a3);
__attribute__((swiftcall)) void wld_map_c24020(PSEUDO_X8 x8_, __int64 a1,
                                               unsigned __int64 a2);

void wld_map_c15dc0(__int64 a1, __int64 a2, __int64 a3, __int64* a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _DWORD* v17;
  _DWORD* v18;
  _DWORD* v19;
  __int64 v20;
  int32x2_t v21;
  int32x2_t v22;
  __int64 v23;
  unsigned __int64 v24;
  _QWORD* v25;
  int32x4_t v26;
  int32x4_t v27;
  int32x4_t v28;
  int32x4_t v29;
  int32x4_t v30;
  int v31;
  float32x4_t v32;
  int8x16_t v33;
  int8x16_t v34;
  int8x16_t v35;
  int8x16_t v36;
  int8x16_t v37;
  float32x4_t v38;
  int8x16_t v39;
  float32x4_t v40;
  float32x4_t v41;
  int8x16_t v42;
  int8x16_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t* v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  unsigned __int64 v59;
  int v60;
  const char* v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  _DWORD* v66;
  __int64 v67;
  unsigned int* v68;
  __int64 v69;
  unsigned int* v70;
  __int64 v71;
  __int64 v72;
  int v73;
  const char* v74;
  unsigned __int64 v75;
  const char* v76;
  __int64 v77;
  __int64 v78;
  int v79;
  __int64 v80;
  int v81;
  __int64 v82;
  __int64 v83;
  int v84;
  int v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  long double v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  int v94;
  __int64 v95;
  __int64 v96;
  _BYTE* v97;
  _BYTE* v98;
  bool v99;
  __int64* v100;
  unsigned __int64 v101;
  __int64 v102;
  __int64 v103;
  char* v104;
  __int64 v105;
  unsigned __int64 v106;
  __int64 v107;
  unsigned __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64* v114;
  unsigned __int64 v115;
  __int64 v116;
  __int64 v117;
  char* v118;
  __int64 v119;
  unsigned __int64 v120;
  __int64 v121;
  unsigned __int64 v122;
  __int64 v123;
  unsigned __int64 v124;
  unsigned __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  float32x4_t v130;
  int32x4_t v131;
  float32x4_t v132;
  int32x4_t v133;
  int32x4_t v134;
  int32x4_t v135;
  int32x4_t v136;
  int32x4_t v137;
  int32x4_t v138;
  int32x4_t v139;
  float32x4_t v140;
  float32x4_t v141;
  float v142;
  int32x4_t v143;
  int32x4_t v144;
  int32x4_t v145;
  int32x4_t v146;
  float v147;
  _DWORD* v148;
  __int64 v149;
  struct {
    __int64 v150;
    unsigned __int64 v151;
    char* v152;
    __int64 v153;
    __int64 v154;
    __int64 v155;
    __int64 v156;
  } v150_;
  unsigned int v157;
  _QWORD v158[8];
  _QWORD v159[3];

  if (*(_BYTE*)(a2 + 165) == 1 && GameRoutine_ad7390((_QWORD*)a2)) {
    v8 = ResFile_5e5f00(*(_QWORD*)(*(_QWORD*)(a2 + 8) + 592LL));
  }
  else {
    v8 = 0;
  }
  v9 = *(_QWORD*)(a2 + 8);
  if (*(_QWORD*)(v9 + 824) == 0) {
    return;
  }
  v10 = *(_QWORD*)(v8 + 32);
  memset(v158, 0, sizeof(v158));
  nn_util_SNPrintf(v158, 64, "%s.elf", (const char*)(v10 + 2));
  v11 = strlen((const char*)v158);
  if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v12 = v11;
  if (v11 >= 0x17) {
    if ((v11 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (v11 | 7) + 1;
    }
    v13 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v14, 16, 0);
    v150_.v151 = v12;
    v150_.v152 = v13;
    v150_.v150 = v14 | 1;
    goto LABEL_14;
  }
  LOBYTE(v150_.v150) = 2 * v11;
  v13 = (char*)&v150_.v150 + 1;
  if (v11 != 0) {
  LABEL_14:
    memcpy((__int64)v13, (__int64)v158, v12);
  }
  v13[v12] = 0;
  v15 = GameRoutine_c0b3c0(v9 + 808, (unsigned __int8*)&v150_.v150);
  if ((v150_.v150 & 1) != 0 && v150_.v152 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v16,
                                  (__int64)v150_.v152);
  }
  if (v9 + 816 != v15) {
    v149 = a2;
    v17 = (_DWORD*)ElfFile_631220(*(__int64**)(v15 + 56),
                                  "world::data::map::s_decalDataVersion");
    v18 = (_DWORD*)ElfFile_631220(*(__int64**)(v15 + 56),
                                  "world::data::map::s_decalDataNum");
    if (v17 != nullptr) {
      v19 = v18;
      if (v18 != nullptr && *v17 >= 3u && *v18 != 0) {
        v20 = ElfFile_631220(*(__int64**)(v15 + 56),
                             "world::data::map::s_decalData");
        if (*v19 != 0) {
          v128 = a3;
          v23 = v20;
          v24 = 0;
          v25 = nullptr;
          v26 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) +
                              (_QWORD)GameData_212c190);
          v27 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) +
                              (_QWORD)GameData_212c188);
          v147 = -*(float*)GameData_212c190;
          v146 = vdupq_n_s32(0x3E22F983u);
          v145 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v26).n128_u64[0]),
                                0);
          v143 = vdupq_laneq_s32(v26, 2);
          v144 = vdupq_n_s32(0xC0C90FDB);
          v28 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v27).n128_u64[0]),
                               0);
          v142 = -*(float*)GameData_212c188;
          v29 = vdupq_laneq_s32(v27, 2);
          LANES128(v27).n128_f32[0] = -LANES128(v27).n128_f32[3];
          v140 = v29;
          v141 = v28;
          PSEUDO_LOW_LANE128(
              v29, n128_f32,
              -COERCE_FLOAT(HIDWORD(*(_QWORD*)((char*)((_UNKNOWN*)0x4LL) +
                                               (_QWORD)GameData_212c190))));
          PSEUDO_LOW_LANE64(
              v21, n64_f32,
              -COERCE_FLOAT(DWORD3(*(_OWORD*)((char*)((_UNKNOWN*)0x4LL) +
                                               (_QWORD)GameData_212c190))));
          PSEUDO_LOW_LANE64(
              v22, n64_f32,
              -COERCE_FLOAT(HIDWORD(*(_QWORD*)((char*)((_UNKNOWN*)0x4LL) +
                                               (_QWORD)GameData_212c188))));
          v138 = vdupq_lane_s32(v21, 0);
          v139 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v29).n128_u64[0]),
                                0);
          v136 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v27).n128_u64[0]),
                                0);
          v137 = vdupq_lane_s32(v22, 0);
          v134 = vdupq_n_s32(0x40490FDBu);
          v135 = vdupq_n_s32(0x3FC90FDBu);
          v30 = vdupq_n_s32(0xC0490FDB);
          v132 = v30;
          v133 = vdupq_n_s32(0xBFC90FDB);
          LANES128(v30).n128_u64[0] = 1065353216;
          v131 = v30;
          LANES128(v30).n128_u64[0] = 0x3F8000003F800000LL;
          LANES128(v30).n128_u64[1] = 0x3F8000003F800000LL;
          v130 = v30;
          do {
            v59 = v23 + 96 * v24;
            v60 = *(_DWORD*)(a1 + 284);
            v61 = *(const char**)(v59 + 8);
            v62 = strlen(v61);
            if (v60 == (unsigned int)GameRoutine_a81a70((__int64)v61, v62)) {
              if (v25 == nullptr) {
                if ((atomic_load_explicit(
                         (atomic_uchar* volatile)GameData_212eac0,
                         memory_order_acquire) &
                     1) == 0 &&
                    __cxa_guard_acquire((__int64)GameData_212eac0) != 0) {
                  *GameData_212eab8 = wld_Crc32(0, "DecalModule", 0xBu);
                  __cxa_guard_release((__int64)GameData_212eac0);
                }
                v63 = *(_QWORD*)(a1 + 512);
                v64 = v63;
                do {
                  if (v64 == *(_QWORD*)(a1 + 504)) {
                    goto LABEL_27;
                  }
                  v65 = *(_DWORD*)(v64 - 16);
                  v64 -= 16;
                  v63 -= 16;
                } while (v65 != *GameData_212eab8);
                if (*(_QWORD*)(a1 + 512) == v63 ||
                    (v25 = *(_QWORD**)(v63 + 8)) == nullptr) {
                LABEL_27:
                  v25 = (_QWORD*)GameHr_c1a5a0(a1);
                }
              }
              v31 = wld_DecalModule_AddDecal(
                  v25, v23 + 96 * v24,
                  *(_QWORD*)(*(_QWORD*)(v149 + 8) + 800LL));
              LANES128(v32).n128_u32[3] = 0;
              LANES128(v32).n128_f32[0] =
                  *(float*)(v59 + 52) * 0x1.1df46a0000000p-6f;
              LANES128(v32).n128_f32[1] =
                  *(float*)(v59 + 56) * 0x1.1df46a0000000p-6f;
              LANES128(v32).n128_f32[2] =
                  *(float*)(v59 + 60) * 0x1.1df46a0000000p-6f;
              v33 = vmlaq_f32(v32, v144, vrndnq_f32(vmulq_f32(v32, v146)));
              v34 = vcgtq_f32(v33, v135);
              v35 = vmvnq_s8(v34);
              v36 = vbslq_s8(v34, vsubq_f32(v134, v33), v33);
              v37 = vcgtq_f32(v133, v36);
              v38 = vbslq_s8(v37, vsubq_f32(v132, v36), v36);
              v39 = vbicq_s8(v35, v37);
              v40 = vmulq_f32(v38, v38);
              v41 = vmulq_f32(
                  v38, vmlaq_f32(
                           v130, v40,
                           vmlaq_f32(v138, v40,
                                     vmlaq_f32(v143, v40,
                                               vmlaq_f32(v139, v40,
                                                         vmlaq_n_f32(v145, v40,
                                                                     v147))))));
              v42 = vmlaq_f32(
                  v130, v40,
                  vmlaq_f32(
                      v136, v40,
                      vmlaq_f32(
                          v140, v40,
                          vmlaq_f32(v137, v40, vmlaq_n_f32(v141, v40, v142)))));
              v43 = vbslq_s8(v39, v42, vnegq_f32(v42));
              LANES128(v42).n128_u64[0] = *(_QWORD*)(v59 + 40);
              LANES128(v42).n128_u64[1] = *(unsigned int*)(v59 + 48);
              LANES128(v40).n128_u64[0] =
                  LANES128(v43).n128_u32[1] |
                  ((unsigned __int64)LANES128(v43).n128_u32[1] << 32);
              LANES128(v44).n128_u32[0] = LANES128(v43).n128_u32[2];
              LANES128(v44).n128_u32[1] = LANES128(v41).n128_u32[2];
              LANES128(v45).n128_u64[0] = LANES128(v44).n128_u64[0];
              LANES128(v40).n128_u64[1] = LANES128(v41).n128_u32[1];
              LANES128(v45).n128_u64[1] = 3212836864LL;
              v46 = vmulq_f32(v40, v45);
              LANES128(v40).n128_u64[0] =
                  LANES128(v41).n128_u32[1] |
                  ((unsigned __int64)LANES128(v41).n128_u32[1] << 32);
              LANES128(v40).n128_u64[1] = LANES128(v43).n128_u32[1];
              LANES128(v47).n128_u64[1] = LANES128(v131).n128_u64[1];
              LANES128(v44).n128_u64[1] = LANES128(v131).n128_u64[0];
              LANES128(v47).n128_u64[0] =
                  __ROR8__(LANES128(v44).n128_u64[0], 32);
              v48 = vmulq_f32(v40, v44);
              v49 = vmulq_n_f32(v47, LANES128(v43).n128_f32[0]);
              v50 = vmulq_n_f32(v48, LANES128(v41).n128_f32[0]);
              v51 = vmulq_n_f32(v47, LANES128(v41).n128_f32[0]);
              LANES128(v47).n128_u32[0] = 0;
              v52 = vaddq_f32(v50, vmulq_f32(v49, COERCE_AS(float32x4_t,
                                                            GameData_1a82940)));
              LANES128(v49).n128_u64[0] = 0;
              v53 = vaddq_f32(
                  vmulq_n_f32(v48, LANES128(v43).n128_f32[0]),
                  vmulq_f32(v51, COERCE_AS(float32x4_t, GameData_1a83510)));
              v54 = (float32x4_t*)(v25[5] + 96LL * v31);
              LANES128(v47).n128_u32[1] = HIDWORD(*(_QWORD*)(v59 + 64));
              LANES128(v49).n128_u64[1] = *(unsigned int*)(v59 + 72);
              v55 = vmlaq_f32(
                  vmlaq_f32(
                      vmulq_n_f32(v46, COERCE_FLOAT(*(_QWORD*)(v59 + 64))),
                      COERCE_AS(float32x4_t, 0), v52),
                  COERCE_AS(float32x4_t, 0), v53);
              v56 = vmlaq_f32(
                  vmlaq_lane_f32(
                      vmulq_f32(COERCE_AS(float32x4_t, 0), v46), v52,
                      COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]), 1),
                  COERCE_AS(float32x4_t, 0), v53);
              v57 = vmlaq_laneq_f32(
                  vmlaq_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v46),
                            COERCE_AS(float32x4_t, 0), v52),
                  v53, v49, 2);
              v58 = vaddq_f32(
                  vmlaq_f32(vmlaq_f32(vmulq_f32(v46, COERCE_AS(float32x4_t, 0)),
                                      COERCE_AS(float32x4_t, 0), v52),
                            COERCE_AS(float32x4_t, 0), v53),
                  COERCE_AS(float32x4_t, 0));
              v54[2] = vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                  LANES128(v55).n128_f32[0]),
                      COERCE_AS(float32x4_t, GameData_1a83610),
                      COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0]), 1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v55, 2);
              v54[3] = vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                  LANES128(v56).n128_f32[0]),
                      COERCE_AS(float32x4_t, GameData_1a83610),
                      COERCE_AS(float32x2_t, LANES128(v56).n128_u64[0]), 1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v56, 2);
              v54[4] = vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                  LANES128(v57).n128_f32[0]),
                      COERCE_AS(float32x4_t, GameData_1a83610),
                      COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0]), 1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v57, 2);
              v54[5] = vaddq_f32(
                  v42,
                  vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                      LANES128(v58).n128_f32[0]),
                          COERCE_AS(float32x4_t, GameData_1a83610),
                          COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0]), 1),
                      COERCE_AS(float32x4_t, GameData_1a83090), v58, 2));
            }
            ++v24;
          } while (v24 < (unsigned int)*v19);
          a3 = v128;
          if (a4 != nullptr && v25 != nullptr) {
            DecalModule_a93060(a4, (__int64)v25);
          }
        }
      }
    }
    v66 = (_DWORD*)ElfFile_631220(*(__int64**)(v15 + 56),
                                  "world::data::map::s_moduleDataVersion");
    v67 = ElfFile_631220(*(__int64**)(v15 + 56),
                         "world::data::map::s_moduleData");
    v68 = (unsigned int*)ElfFile_631220(*(__int64**)(v15 + 56),
                                        "world::data::map::s_moduleDataNum");
    v69 = v149;
    if (v67 != 0) {
      v70 = v68;
      if (v68 != nullptr && *v68 != 0) {
        v71 = 0;
        v129 = a3;
        v148 = v66;
        while (1) {
          v72 = v67 + 32 * v71;
          v73 = *(_DWORD*)(a1 + 284);
          v74 = *(const char**)(v72 + 8);
          v75 = strlen(v74);
          if (v73 != (unsigned int)GameRoutine_a81a70((__int64)v74, v75) ||
              *(_DWORD*)(v72 + 16) != 3) {
            goto LABEL_50;
          }
          if (*v66 >= 4u) {
            break;
          }
          if (*v66 == 3) {
            v150_.v150 = *(_QWORD*)(v72 + 24);
            v159[0] = *(_QWORD*)(*(_QWORD*)(v69 + 8) + 800LL);
            v157 = *(_DWORD*)(a1 + 284);
          LABEL_49:
            GameHr_c172a0(a1, &v150_.v150, v159, &v157);
            goto LABEL_50;
          }
          v80 = *(_QWORD*)(v72 + 24);
          v81 = *(_DWORD*)(v80 + 4);
          v82 = *(_QWORD*)(v80 + 24);
          v83 = *(_QWORD*)(v80 + 32);
          LODWORD(v150_.v150) = *(_DWORD*)v80;
          HIDWORD(v150_.v150) = v81;
          v84 = *(_DWORD*)(v80 + 12);
          LODWORD(v150_.v151) = *(_DWORD*)(v80 + 8);
          HIDWORD(v150_.v151) = v84;
          v85 = *(_DWORD*)(v80 + 16);
          v86 = *(_QWORD*)(v80 + 40);
          v150_.v153 = v82;
          v150_.v154 = v83;
          v150_.v155 = v86;
          v150_.v156 = 0;
          v87 = *(_QWORD*)(v69 + 8);
          LODWORD(v150_.v152) = v85;
          HIDWORD(v150_.v152) = v85;
          v88 = *(_QWORD*)(v87 + 800);
          nn_os_LockMutex((__int64)GameData_212df28);
          v89 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
          *(float*)&v90 = wld_c0ed40(v89, a1, (__int64)&v150_.v150, v88);
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2203500,
                                    memory_order_acquire) &
               1) == 0 &&
              __cxa_guard_acquire((__int64)&GameData_2203500) != 0) {
            GameData_22034f8 = wld_Crc32(0, "GroundModule", 0xCu);
            __cxa_guard_release((__int64)&GameData_2203500);
          }
          v92 = *(_QWORD*)(a1 + 504);
          v91 = *(_QWORD*)(a1 + 512);
          v159[1] = v89;
          v93 = v91;
          LODWORD(v159[0]) = GameData_22034f8;
          while (v93 != v92) {
            v94 = *(_DWORD*)(v93 - 16);
            v93 -= 16;
            if (v94 == GameData_22034f8) {
              if ((*(_BYTE*)(v89 + 16) & 1) != 0) {
                goto LABEL_84;
              }
              goto LABEL_78;
            }
          }
          if (v92 == v91 &&
              (unsigned __int64)(*(_QWORD*)(a1 + 520) - v92) <= 0x6F) {
            v95 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
            *(_QWORD*)(a1 + 504) = v95;
            *(_QWORD*)(a1 + 512) = v95;
            *(_QWORD*)(a1 + 520) = v95 + 112;
            if (v91 != 0) {
              v96 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v96 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v96, v92);
            }
          }
          GameRoutine_98f140((__int64*)(a1 + 504), v159);
          if ((*(_BYTE*)(v89 + 16) & 1) == 0) {
          LABEL_78:
            *(_BYTE*)(v89 + 16) = 1;
            *(_BYTE*)(v89 + 17) &= ~2u;
            *(_BYTE*)(v89 + 18) &= ~2u;
            *(_BYTE*)(v89 + 19) &= ~2u;
            *(_BYTE*)(v89 + 20) &= ~2u;
            v97 = *(_BYTE**)(v89 + 8);
            v97[632] = 0;
            v97[664] = 0;
            v97[696] = 0;
            v97[728] = 0;
            (*(void (**)(__int64, long double))(*(_QWORD*)v89 + 64LL))(v89,
                                                                       v90);
            v98 = *(_BYTE**)(v89 + 8);
            v99 = v98[300] == 3 && v98[301] == 3;
            if (v99 || v98[302] == 1) {
              (*(void (**)(__int64))(*(_QWORD*)v89 + 72LL))(v89);
            }
          }
        LABEL_84:
          v100 = *(__int64**)(a1 + 536);
          v101 = *(_QWORD*)(a1 + 544);
          if ((unsigned __int64)v100 >= v101) {
            v103 = *(_QWORD*)(a1 + 528);
            v104 = (char*)v100 - v103;
            v105 = ((__int64)v100 - v103) >> 3;
            v106 = v105 + 1;
            if ((unsigned __int64)(v105 + 1) >> 61 != 0) {
              goto LABEL_124;
            }
            v107 = v101 - v103;
            if (v107 >> 2 > v106) {
              v106 = v107 >> 2;
            }
            if ((unsigned __int64)v107 >= 0x7FFFFFFFFFFFFFF8LL) {
              v108 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v108 = v106;
            }
            if (v108 != 0) {
              if (v108 >> 61 != 0) {
                goto LABEL_125;
              }
              v109 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v108, 16, 0);
            }
            else {
              v109 = 0;
            }
            v110 = v109 + 8 * v108;
            v111 = (unsigned __int64)v100 - v103;
            v112 = (__int64)&v104[v109 + -8 * v105];
            *(_QWORD*)&v104[v109] = v89;
            v102 = (__int64)&v104[v109 + 8];
            memcpy(v112, v103, v111);
            *(_QWORD*)(a1 + 528) = v112;
            *(_QWORD*)(a1 + 536) = v102;
            *(_QWORD*)(a1 + 544) = v110;
            if (v103 != 0) {
              v113 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v113 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v113, v103);
            }
          }
          else {
            *v100 = v89;
            v102 = (__int64)(v100 + 1);
          }
          a3 = v129;
          *(_QWORD*)(a1 + 536) = v102;
          v114 = *(__int64**)(a1 + 560);
          v115 = *(_QWORD*)(a1 + 568);
          if ((unsigned __int64)v114 >= v115) {
            v117 = *(_QWORD*)(a1 + 552);
            v118 = (char*)v114 - v117;
            v119 = ((__int64)v114 - v117) >> 3;
            v120 = v119 + 1;
            if ((unsigned __int64)(v119 + 1) >> 61 != 0) {
            LABEL_124:
              GameRoutine_98f290();
            }
            v121 = v115 - v117;
            if (v121 >> 2 > v120) {
              v120 = v121 >> 2;
            }
            if ((unsigned __int64)v121 >= 0x7FFFFFFFFFFFFFF8LL) {
              v122 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v122 = v120;
            }
            if (v122 != 0) {
              if (v122 >> 61 != 0) {
              LABEL_125:
                GameRoutine_60a210();
              }
              v123 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v122, 16, 0);
            }
            else {
              v123 = 0;
            }
            v124 = v123 + 8 * v122;
            v125 = (unsigned __int64)v114 - v117;
            v126 = (__int64)&v118[v123 + -8 * v119];
            *(_QWORD*)&v118[v123] = v89;
            v116 = (__int64)&v118[v123 + 8];
            memcpy(v126, v117, v125);
            *(_QWORD*)(a1 + 552) = v126;
            *(_QWORD*)(a1 + 560) = v116;
            *(_QWORD*)(a1 + 568) = v124;
            if (v117 != 0) {
              v127 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v127 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v127, v117);
            }
            a3 = v129;
          }
          else {
            *v114 = v89;
            v116 = (__int64)(v114 + 1);
          }
          v69 = v149;
          v66 = v148;
          *(_QWORD*)(a1 + 560) = v116;
          GameRoutine_a8c0c0(a1);
          *(_BYTE*)(a1 + 576) = 1;
          nn_os_UnlockMutex((__int64)GameData_212df28);
        LABEL_50:
          if (++v71 >= (unsigned __int64)*v70) {
            return;
          }
        }
        v76 = *(const char**)(*(_QWORD*)(v72 + 24) + 48LL);
        v150_.v150 = *(_QWORD*)(v72 + 24);
        if (v76 != nullptr &&
            (a3 == 0 || strcmp(*(const char**)(a3 + 16), v76) != 0)) {
          goto LABEL_50;
        }
        v159[0] = *(_QWORD*)(*(_QWORD*)(v69 + 8) + 800LL);
        v157 = *(_DWORD*)(a1 + 284);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2203500,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)&GameData_2203500) != 0) {
          GameData_22034f8 = wld_Crc32(0, "GroundModule", 0xCu);
          __cxa_guard_release((__int64)&GameData_2203500);
        }
        v77 = *(_QWORD*)(a1 + 512);
        v78 = v77;
        while (v78 != *(_QWORD*)(a1 + 504)) {
          v79 = *(_DWORD*)(v78 - 16);
          v78 -= 16;
          v77 -= 16;
          if (v79 == GameData_22034f8) {
            if (*(_QWORD*)(a1 + 512) != v77 && *(_QWORD*)(v77 + 8) != 0) {
              goto LABEL_50;
            }
            goto LABEL_49;
          }
        }
        goto LABEL_49;
      }
    }
  }
}

void wld_map_c17680(__int64 a1, __int64* a2, int a3, float32x4_t* a4,
                    __int64 a5, __int64 a6, __int64* a7)
{
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _DWORD* v22;
  _DWORD* v23;
  int32x2_t v24;
  int32x2_t v25;
  int v26;
  float32x4_t v27;
  unsigned __int64 v28;
  _QWORD* v29;
  int32x4_t v30;
  int32x4_t v31;
  int32x4_t v32;
  int32x4_t v33;
  int v34;
  __int64 v35;
  const char* v36;
  unsigned __int64 v37;
  float v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  __int64 v61;
  __int64 v62;
  int v63;
  __int64* v64;
  __int64 v65;
  float32x4_t v66;
  int8x16_t v67;
  int8x16_t v68;
  int8x16_t v69;
  int8x16_t v70;
  int8x16_t v71;
  float32x4_t v72;
  int8x16_t v73;
  float32x4_t v74;
  int8x16_t v75;
  int8x16_t v76;
  float32x4_t v77;
  float32x4_t v78;
  unsigned __int64 v79;
  float32x4_t v80;
  unsigned __int64 v81;
  float32x4_t v82;
  float32x4_t v83;
  float32x4_t v84;
  float32x4_t v85;
  float32x4_t v86;
  float32x4_t v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  __int64 v91;
  float32x4_t v92;
  float32x4_t v93;
  int8x16_t v94;
  int8x16_t v95;
  int8x16_t v96;
  int8x16_t v97;
  float32x4_t v98;
  int8x16_t v99;
  float32x4_t v100;
  float32x4_t v101;
  int8x16_t v102;
  int8x16_t v103;
  float32x4_t v104;
  float32x4_t v105;
  float32x4_t v106;
  float32x4_t v107;
  float32x4_t v108;
  float32x4_t v109;
  float32x4_t v110;
  float32x4_t v111;
  float32x4_t v112;
  float32x4_t v113;
  float32x4_t v114;
  float32x4_t v115;
  float32x4_t v116;
  int v117;
  float32x4_t* v118;
  int v119;
  __int64 v120;
  __int64* v121;
  int v122;
  __int64 v123;
  _DWORD* v124;
  float32x4_t v125;
  float32x4_t v126;
  float32x4_t v127;
  float32x4_t v128;
  float32x4_t v129;
  int32x4_t v130;
  int32x4_t v131;
  int32x4_t v132;
  int32x4_t v133;
  int32x4_t v134;
  int32x4_t v135;
  int32x4_t v136;
  int32x4_t v137;
  int32x4_t v138;
  int32x4_t v139;
  float v140;
  int32x4_t v141;
  int32x4_t v142;
  int32x4_t v143;
  int32x4_t v144;
  float v145;
  float32x4_t v146;
  float32x4_t v147;
  float32x4_t v148;
  float32x4_t v149;
  struct {
    _QWORD v150[2];
    char* v151;
  } v150_;
  _QWORD v152[9];

  if (*(_BYTE*)(a5 + 165) == 1 && GameRoutine_ad7390((_QWORD*)a5)) {
    v13 = ResFile_5e5f00(*(_QWORD*)(*(_QWORD*)(a5 + 8) + 592LL));
  }
  else {
    v13 = 0;
  }
  v14 = *(_QWORD*)(a5 + 8);
  if (*(_QWORD*)(v14 + 824) == 0) {
    return;
  }
  v15 = *(_QWORD*)(v13 + 32);
  memset(v152, 0, 64);
  nn_util_SNPrintf(v152, 64, "%s.elf", (const char*)(v15 + 2));
  v16 = strlen((const char*)v152);
  if (v16 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v17 = v16;
  if (v16 >= 0x17) {
    if ((v16 | 7) == 0x17) {
      v19 = 26;
    }
    else {
      v19 = (v16 | 7) + 1;
    }
    v18 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v19, 16, 0);
    v150_.v150[1] = v17;
    v150_.v151 = v18;
    v150_.v150[0] = v19 | 1;
  }
  else {
    LOBYTE(v150_.v150[0]) = 2 * v16;
    v18 = (char*)v150_.v150 + 1;
    if (v16 == 0) {
      goto LABEL_15;
    }
  }
  memcpy((__int64)v18, (__int64)v152, v17);
LABEL_15:
  v18[v17] = 0;
  v20 = GameRoutine_c0b3c0(v14 + 808, (unsigned __int8*)v150_.v150);
  if ((v150_.v150[0] & 1) != 0 && v150_.v151 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v21,
                                  (__int64)v150_.v151);
  }
  if (v14 + 816 != v20) {
    v22 = (_DWORD*)ElfFile_631220(*(__int64**)(v20 + 56),
                                  "world::data::map::s_decalDataVersion");
    v23 = (_DWORD*)ElfFile_631220(*(__int64**)(v20 + 56),
                                  "world::data::map::s_decalDataNum");
    if (v22 != nullptr && v23 != nullptr && *v22 >= 3u && *v23 != 0) {
      v124 = v23;
      v123 = ElfFile_631220(*(__int64**)(v20 + 56),
                            "world::data::map::s_decalData");
      if (*v124 != 0) {
        v121 = a2;
        v26 = a3;
        LANES128(v27).n128_u64[0] = 0x3F8000003F800000LL;
        LANES128(v27).n128_u64[1] = 0x3F8000003F800000LL;
        v28 = 0;
        v29 = nullptr;
        v122 = v26;
        v129 = v27;
        v30 =
            *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190);
        v31 =
            *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188);
        v120 = v26 & 0x7FFFFFFF;
        v32 = vdupq_laneq_s32(v30, 2);
        v33 = vdupq_laneq_s32(v31, 2);
        v145 = -*(float*)GameData_212c190;
        v144 =
            vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v30).n128_u64[0]), 0);
        v139 =
            vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v31).n128_u64[0]), 0);
        v140 = -*(float*)GameData_212c188;
        LANES128(v30).n128_f32[0] = -LANES128(v30).n128_f32[1];
        PSEUDO_LOW_LANE64(v24, n64_f32, -LANES128(v30).n128_f32[3]);
        PSEUDO_LOW_LANE64(v25, n64_f32, -LANES128(v31).n128_f32[1]);
        LANES128(v31).n128_f32[0] = -LANES128(v31).n128_f32[3];
        v143 = vdupq_n_s32(0x3E22F983u);
        v133 = vdupq_n_s32(0x3FC90FDBu);
        v134 =
            vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v31).n128_u64[0]), 0);
        v135 = vdupq_lane_s32(v25, 0);
        v136 = vdupq_lane_s32(v24, 0);
        v137 =
            vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v30).n128_u64[0]), 0);
        v138 = v33;
        v130 = vdupq_n_s32(0xC0490FDB);
        v131 = vdupq_n_s32(0xBFC90FDB);
        v132 = vdupq_n_s32(0x40490FDBu);
        v141 = vdupq_n_s32(0xC0C90FDB);
        v142 = v32;
        do {
          v34 = *(_DWORD*)(a1 + 284);
          v35 = v123 + 96 * v28;
          v36 = *(const char**)(v35 + 8);
          v37 = strlen(v36);
          if (v34 == (unsigned int)GameRoutine_a81a70((__int64)v36, v37)) {
            v39 = v144;
            v38 = v145;
            v41 = v142;
            v40 = v143;
            v42 = (__typeof__(v42)){0};
            v44 = v140;
            v43 = v141;
            v46 = v138;
            v45 = v139;
            v48 = v136;
            v47 = v137;
            v50 = v134;
            v49 = v135;
            v52 = v132;
            v51 = v133;
            v54 = v130;
            v53 = v131;
            v55 = COERCE_AS(float32x4_t, GameData_1a83510);
            v56 = COERCE_AS(float32x4_t, GameData_1a82940);
            v58 = COERCE_AS(float32x4_t, GameData_1a83610);
            v57 = COERCE_AS(float32x4_t, GameData_1a82dd0);
            v60 = v129;
            v59 = COERCE_AS(float32x4_t, GameData_1a83090);
            if (v29 == nullptr) {
              if ((atomic_load_explicit(
                       (atomic_uchar* volatile)GameData_212eac0,
                       memory_order_acquire) &
                   1) == 0) {
                v119 = __cxa_guard_acquire((__int64)GameData_212eac0);
                v60 = v129;
                v59 = COERCE_AS(float32x4_t, GameData_1a83090);
                v58 = COERCE_AS(float32x4_t, GameData_1a83610);
                v57 = COERCE_AS(float32x4_t, GameData_1a82dd0);
                v42 = (__typeof__(v42)){0};
                v56 = COERCE_AS(float32x4_t, GameData_1a82940);
                v55 = COERCE_AS(float32x4_t, GameData_1a83510);
                v54 = v130;
                v53 = v131;
                v52 = v132;
                v51 = v133;
                v50 = v134;
                v49 = v135;
                v48 = v136;
                v47 = v137;
                v46 = v138;
                v45 = v139;
                v44 = v140;
                v43 = v141;
                v41 = v142;
                v40 = v143;
                v39 = v144;
                v38 = v145;
                if (v119 != 0) {
                  *GameData_212eab8 = wld_Crc32(0, "DecalModule", 0xBu);
                  __cxa_guard_release((__int64)GameData_212eac0);
                  v60 = v129;
                  v59 = COERCE_AS(float32x4_t, GameData_1a83090);
                  v58 = COERCE_AS(float32x4_t, GameData_1a83610);
                  v57 = COERCE_AS(float32x4_t, GameData_1a82dd0);
                  v42 = (__typeof__(v42)){0};
                  v56 = COERCE_AS(float32x4_t, GameData_1a82940);
                  v55 = COERCE_AS(float32x4_t, GameData_1a83510);
                  v54 = v130;
                  v53 = v131;
                  v52 = v132;
                  v51 = v133;
                  v50 = v134;
                  v49 = v135;
                  v48 = v136;
                  v47 = v137;
                  v46 = v138;
                  v45 = v139;
                  v44 = v140;
                  v43 = v141;
                  v41 = v142;
                  v40 = v143;
                  v39 = v144;
                  v38 = v145;
                }
              }
              v61 = *(_QWORD*)(a1 + 512);
              v62 = v61;
              do {
                if (v62 == *(_QWORD*)(a1 + 504)) {
                  goto LABEL_36;
                }
                v63 = *(_DWORD*)(v62 - 16);
                v62 -= 16;
                v61 -= 16;
              } while (v63 != *GameData_212eab8);
              if (*(_QWORD*)(a1 + 512) == v61 ||
                  (v29 = *(_QWORD**)(v61 + 8)) == nullptr) {
              LABEL_36:
                v60 = v129;
                v59 = COERCE_AS(float32x4_t, GameData_1a83090);
                v58 = COERCE_AS(float32x4_t, GameData_1a83610);
                v57 = COERCE_AS(float32x4_t, GameData_1a82dd0);
                v42 = (__typeof__(v42)){0};
                v29 = (_QWORD*)GameHr_c1a5a0(a1);
                v56 = COERCE_AS(float32x4_t, GameData_1a82940);
                v55 = COERCE_AS(float32x4_t, GameData_1a83510);
                v54 = v130;
                v53 = v131;
                v52 = v132;
                v51 = v133;
                v50 = v134;
                v49 = v135;
                v48 = v136;
                v47 = v137;
                v46 = v138;
                v45 = v139;
                v44 = v140;
                v43 = v141;
                v41 = v142;
                v40 = v143;
                v39 = v144;
                v38 = v145;
              }
            }
            if (v122 >= 1) {
              v65 = v120;
              v64 = v121;
              LANES128(v66).n128_u32[3] = 0;
              LANES128(v66).n128_f32[0] =
                  *(float*)(v35 + 52) * 0x1.1df46a0000000p-6f;
              LANES128(v66).n128_f32[1] =
                  *(float*)(v35 + 56) * 0x1.1df46a0000000p-6f;
              LANES128(v66).n128_f32[2] =
                  *(float*)(v35 + 60) * 0x1.1df46a0000000p-6f;
              v67 = vmlaq_f32(v66, v43, vrndnq_f32(vmulq_f32(v66, v40)));
              v68 = vcgtq_f32(v67, v51);
              v69 = vmvnq_s8(v68);
              v70 = vbslq_s8(v68, vsubq_f32(v52, v67), v67);
              v71 = vcgtq_f32(v53, v70);
              v72 = vbslq_s8(v71, vsubq_f32(v54, v70), v70);
              v73 = vbicq_s8(v69, v71);
              v74 = vmulq_f32(v72, v72);
              v75 = vmlaq_f32(
                  v60, v74,
                  vmlaq_f32(v50, v74,
                            vmlaq_f32(v46, v74,
                                      vmlaq_f32(v49, v74,
                                                vmlaq_n_f32(v45, v74, v44)))));
              v76 = vbslq_s8(v73, v75, vnegq_f32(v75));
              v77 = vmlaq_f32(
                  v48, v74,
                  vmlaq_f32(v41, v74,
                            vmlaq_f32(v47, v74, vmlaq_n_f32(v39, v74, v38))));
              v78 = vmulq_f32(v72, vmlaq_f32(v60, v74, v77));
              LANES128(v72).n128_u64[0] = *(_QWORD*)(v35 + 40);
              v79 = LANES128(v78).n128_u32[1];
              LANES128(v72).n128_u64[1] = *(unsigned int*)(v35 + 48);
              LANES128(v75).n128_u64[0] = v79 | (v79 << 32);
              LANES128(v80).n128_u32[0] = LANES128(v76).n128_u32[2];
              LANES128(v80).n128_u32[1] = LANES128(v78).n128_u32[2];
              v81 = LANES128(v76).n128_u32[1] |
                    ((unsigned __int64)LANES128(v76).n128_u32[1] << 32);
              LANES128(v82).n128_u64[0] = LANES128(v80).n128_u64[0];
              LANES128(v80).n128_u64[1] = 3212836864LL;
              LANES128(v75).n128_u64[1] = LANES128(v76).n128_u32[1];
              LANES128(v77).n128_u64[0] =
                  __ROR8__(LANES128(v80).n128_u64[0], 32);
              LANES128(v82).n128_u64[1] = 1065353216;
              v83 = vmulq_f32(v75, v82);
              v84 = vaddq_f32(
                  vmulq_n_f32(v83, LANES128(v76).n128_f32[0]),
                  vmulq_f32(vmulq_n_f32(v77, LANES128(v78).n128_f32[0]), v55));
              v85 = vaddq_f32(
                  vmulq_n_f32(v83, LANES128(v78).n128_f32[0]),
                  vmulq_f32(vmulq_n_f32(v77, LANES128(v76).n128_f32[0]), v56));
              LANES128(v78).n128_u64[0] = v81;
              LANES128(v78).n128_u64[1] = v79;
              LANES128(v77).n128_u64[0] = 0;
              v86 = vmulq_f32(v78, v80);
              LANES128(v77).n128_u64[1] = *(unsigned int*)(v35 + 72);
              v87 = vmlaq_laneq_f32(
                  vmlaq_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v86),
                            COERCE_AS(float32x4_t, 0), v85),
                  v84, v77, 2);
              LANES128(v77).n128_u32[1] = HIDWORD(*(_QWORD*)(v35 + 64));
              v88 = vmlaq_f32(
                  vmlaq_lane_f32(
                      vmulq_f32(COERCE_AS(float32x4_t, 0), v86), v85,
                      COERCE_AS(float32x2_t, LANES128(v77).n128_u64[0]), 1),
                  COERCE_AS(float32x4_t, 0), v84);
              v89 = vmlaq_f32(
                  vmlaq_f32(
                      vmulq_n_f32(v86, COERCE_FLOAT(*(_QWORD*)(v35 + 64))),
                      COERCE_AS(float32x4_t, 0), v85),
                  COERCE_AS(float32x4_t, 0), v84);
              v90 = vaddq_f32(
                  vmlaq_f32(vmlaq_f32(vmulq_f32(v86, v42), v42, v85), v42, v84),
                  v42);
              v127 = vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(v57, LANES128(v87).n128_f32[0]), v58,
                      COERCE_AS(float32x2_t, LANES128(v87).n128_u64[0]), 1),
                  v59, v87, 2);
              v128 = vaddq_f32(
                  v72,
                  vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v57, LANES128(v90).n128_f32[0]), v58,
                          COERCE_AS(float32x2_t, LANES128(v90).n128_u64[0]), 1),
                      v59, v90, 2));
              v126 = vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(v57, LANES128(v88).n128_f32[0]), v58,
                      COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0]), 1),
                  v59, v88, 2);
              v125 = vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(v57, LANES128(v89).n128_f32[0]), v58,
                      COERCE_AS(float32x2_t, LANES128(v89).n128_u64[0]), 1),
                  v59, v89, 2);
              do {
                v91 = *v64++;
                LANES128(v92).n128_u32[3] = 0;
                LANES128(v93).n128_u64[0] = *(_QWORD*)(v91 + 16);
                LANES128(v93).n128_u64[1] = *(unsigned int*)(v91 + 24);
                LANES128(v92).n128_f32[0] =
                    *(float*)(v91 + 28) * 0x1.1df46a0000000p-6f;
                LANES128(v92).n128_f32[1] =
                    *(float*)(v91 + 32) * 0x1.1df46a0000000p-6f;
                LANES128(v92).n128_f32[2] =
                    *(float*)(v91 + 36) * 0x1.1df46a0000000p-6f;
                v94 = vmlaq_f32(v92, v43, vrndnq_f32(vmulq_f32(v92, v143)));
                v95 = vcgtq_f32(v94, v51);
                v96 = vbslq_s8(v95, vsubq_f32(v52, v94), v94);
                v97 = vcgtq_f32(v53, v96);
                v98 = vbslq_s8(v97, vsubq_f32(v54, v96), v96);
                v99 = vbicq_s8(vmvnq_s8(v95), v97);
                v100 = vmulq_f32(v98, v98);
                v101 = vmulq_f32(
                    v98,
                    vmlaq_f32(
                        v60, v100,
                        vmlaq_f32(v48, v100,
                                  vmlaq_f32(v41, v100,
                                            vmlaq_f32(v47, v100,
                                                      vmlaq_n_f32(v39, v100,
                                                                  v145))))));
                v102 = vmlaq_f32(
                    v60, v100,
                    vmlaq_f32(
                        v50, v100,
                        vmlaq_f32(v46, v100,
                                  vmlaq_f32(v49, v100,
                                            vmlaq_n_f32(v45, v100, v44)))));
                v103 = vbslq_s8(v99, v102, vnegq_f32(v102));
                LANES128(v100).n128_u64[0] =
                    LANES128(v103).n128_u32[1] |
                    ((unsigned __int64)LANES128(v103).n128_u32[1] << 32);
                LANES128(v102).n128_u64[0] =
                    LANES128(v103).n128_u32[2] |
                    ((unsigned __int64)LANES128(v101).n128_u32[2] << 32);
                LANES128(v104).n128_u64[0] = LANES128(v102).n128_u64[0];
                LANES128(v102).n128_u64[1] = 1065353216;
                LANES128(v100).n128_u64[1] = LANES128(v101).n128_u32[1];
                LANES128(v105).n128_u32[0] = LANES128(v101).n128_u32[1];
                LANES128(v105).n128_u32[1] = LANES128(v101).n128_u32[1];
                LANES128(v104).n128_u64[1] = 3212836864LL;
                LANES128(v105).n128_u64[1] = LANES128(v103).n128_u32[1];
                v106 = vmulq_f32(v100, v104);
                LANES128(v100).n128_u64[0] =
                    __ROR8__(LANES128(v102).n128_u64[0], 32);
                v107 = vmulq_f32(v105, v102);
                v108 = vmulq_n_f32(v107, LANES128(v101).n128_f32[0]);
                v109 = vmulq_n_f32(v100, LANES128(v103).n128_f32[0]);
                v110 = vmulq_n_f32(v107, LANES128(v103).n128_f32[0]);
                LANES128(v107).n128_u32[0] = 0;
                v111 = vaddq_f32(
                    v110,
                    vmulq_f32(vmulq_n_f32(v100, LANES128(v101).n128_f32[0]),
                              v55));
                v112 = vaddq_f32(v108, vmulq_f32(v109, v56));
                LANES128(v109).n128_u64[0] = 0;
                LANES128(v107).n128_u32[1] = HIDWORD(*(_QWORD*)(v91 + 40));
                LANES128(v109).n128_u64[1] = *(unsigned int*)(v91 + 48);
                v113 = vmlaq_f32(
                    vmlaq_f32(
                        vmulq_n_f32(v106, COERCE_FLOAT(*(_QWORD*)(v91 + 40))),
                        COERCE_AS(float32x4_t, 0), v112),
                    COERCE_AS(float32x4_t, 0), v111);
                v114 = vmlaq_f32(
                    vmlaq_lane_f32(
                        vmulq_f32(COERCE_AS(float32x4_t, 0), v106), v112,
                        COERCE_AS(float32x2_t, LANES128(v107).n128_u64[0]), 1),
                    COERCE_AS(float32x4_t, 0), v111);
                v115 = vmlaq_laneq_f32(
                    vmlaq_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v106),
                              COERCE_AS(float32x4_t, 0), v112),
                    v111, v109, 2);
                v116 = vaddq_f32(
                    vmlaq_f32(vmlaq_f32(vmulq_f32(v106, v42), v42, v112), v42,
                              v111),
                    v42);
                v149 = vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(v57, LANES128(v113).n128_f32[0]), v58,
                        COERCE_AS(float32x2_t, LANES128(v113).n128_u64[0]), 1),
                    v59, v113, 2);
                v148 = vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(v57, LANES128(v114).n128_f32[0]), v58,
                        COERCE_AS(float32x2_t, LANES128(v114).n128_u64[0]), 1),
                    v59, v114, 2);
                v147 = vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(v57, LANES128(v115).n128_f32[0]), v58,
                        COERCE_AS(float32x2_t, LANES128(v115).n128_u64[0]), 1),
                    v59, v115, 2);
                v146 = vaddq_f32(
                    vaddq_f32(*a4, v93),
                    vmlaq_laneq_f32(
                        vmlaq_lane_f32(
                            vmulq_n_f32(v57, LANES128(v116).n128_f32[0]), v58,
                            COERCE_AS(float32x2_t, LANES128(v116).n128_u64[0]),
                            1),
                        v59, v116, 2));
                v117 = wld_DecalModule_AddDecal(
                    v29, v35, *(_QWORD*)(*(_QWORD*)(a5 + 8) + 800LL));
                v42 = (__typeof__(v42)){0};
                --v65;
                v41 = v142;
                v60 = v129;
                v59 = COERCE_AS(float32x4_t, GameData_1a83090);
                v58 = COERCE_AS(float32x4_t, GameData_1a83610);
                v57 = COERCE_AS(float32x4_t, GameData_1a82dd0);
                v56 = COERCE_AS(float32x4_t, GameData_1a82940);
                v55 = COERCE_AS(float32x4_t, GameData_1a83510);
                v54 = v130;
                v53 = v131;
                v118 = (float32x4_t*)(v29[5] + 96LL * v117);
                v52 = v132;
                v51 = v133;
                v50 = v134;
                v49 = v135;
                v48 = v136;
                v47 = v137;
                v46 = v138;
                v45 = v139;
                v44 = v140;
                v43 = v141;
                v39 = v144;
                v118[2] = vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(v149, LANES128(v125).n128_f32[0]), v148,
                        COERCE_AS(float32x2_t, LANES128(v125).n128_u64[0]), 1),
                    v147, v125, 2);
                v118[3] = vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(v149, LANES128(v126).n128_f32[0]), v148,
                        COERCE_AS(float32x2_t, LANES128(v126).n128_u64[0]), 1),
                    v147, v126, 2);
                v118[4] = vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(v149, LANES128(v127).n128_f32[0]), v148,
                        COERCE_AS(float32x2_t, LANES128(v127).n128_u64[0]), 1),
                    v147, v127, 2);
                v118[5] = vaddq_f32(
                    v146,
                    vmlaq_laneq_f32(
                        vmlaq_lane_f32(
                            vmulq_n_f32(v149, LANES128(v128).n128_f32[0]), v148,
                            COERCE_AS(float32x2_t, LANES128(v128).n128_u64[0]),
                            1),
                        v147, v128, 2));
              } while (v65 != 0);
            }
          }
          ++v28;
        } while (v28 < (unsigned int)*v124);
        if (a7 != nullptr && v29 != nullptr) {
          DecalModule_a93060(a7, (__int64)v29);
        }
      }
    }
  }
}

void wld_map_c1be80(__int64 a1)
{
  int v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  int v8;
  unsigned __int64 v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 i;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  int v21;
  bool v22;
  int v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  _BYTE* v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  bool v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  _BYTE* v49;
  __int64 v50;
  __int64 v51;
  _BYTE* v52;
  _BYTE* v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  bool v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  bool v63;
  unsigned __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  char v67;
  _BYTE* v68;
  _BYTE* v69;
  __int64* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64* v74;
  __int64 v75;
  __int64 v76;

  v1 = *(_DWORD*)(a1 + 188);
  if (v1 > 2) {
    if (v1 != 3) {
      if (v1 == 5) {
        v9 = *(unsigned __int8*)(a1 + 160);
        v10 = (v9 & 1) == 0;
        v11 = v9 >> 1;
        if (v10) {
          v12 = a1 + 161;
        }
        else {
          v12 = *(_QWORD*)(a1 + 176);
        }
        if (v10) {
          v13 = v11;
        }
        else {
          v13 = *(_QWORD*)(a1 + 168);
        }
        if (v13 == 0) {
          goto LABEL_61;
        }
        v14 = *(_QWORD*)(*(_QWORD*)a1 + 392LL);
        v15 = *(unsigned int*)(v14 + 352);
        if ((int)v15 < 1) {
          goto LABEL_62;
        }
        v16 = (_QWORD*)(v14 + 272);
        for (i = 0; i != v15; ++i) {
          v18 = *((unsigned __int8*)v16 - 16);
          v19 = *(v16 - 1);
          if ((v18 & 1) == 0) {
            v19 = v18 >> 1;
          }
          if (v13 == v19) {
            v20 = (v18 & 1) != 0 ? *v16 : (__int64)v16 - 15;
            if (memcmp(v12, v20, v13) == 0) {
              LODWORD(v15) = i;
              goto LABEL_64;
            }
          }
          v16 += 3;
        }
        if ((_DWORD)v15 != 4) {
        LABEL_62:
          GameRoutine_60a060((char*)(v14 + 256 + 24LL * (int)v15), v12, v13);
          ++*(_DWORD*)(v14 + 352);
          GameHr_c6c4f0(v14, (unsigned __int8*)(v14 + 136), v15);
          if ((_DWORD)v15 == 0) {
            *(_QWORD*)(v14 + 512) = 0xFFFFFFFF00000000LL;
            LightingAnimModule_c69950(v14);
            GameRoutine_c686d0(v14, v14 + 136);
          }
        }
        else {
        LABEL_61:
          LODWORD(v15) = -1;
        }
      LABEL_64:
        v44 = *(_QWORD*)a1;
        *(_DWORD*)(a1 + 404) = v15;
        LightingAnimModule_c6d940(*(_QWORD*)(v44 + 392), *(_DWORD*)(a1 + 400),
                                  v15);
        *(_DWORD*)(a1 + 188) = 1;
      }
      return;
    }
    v24 = *(_QWORD*)(a1 + 208);
    if (*(_DWORD*)(v24 + 136) != 2) {
      return;
    }
    v25 = *(_QWORD**)(a1 + 232);
    if (v25 != nullptr) {
      do {
        v26 = v25[5];
        v27 = *(_QWORD*)(a1 + 208);
        v28 = *(_QWORD*)(v26 + 32);
        if (v28 != 0 && (v29 = std___1___shared_weak_count_lock(v28)) != 0) {
          *(_BYTE*)(*(_QWORD*)(v26 + 24) + 60LL) = v26 == v27;
          if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v30 = v29;
            (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
            std___1___shared_weak_count___release_weak(v30);
          }
        }
        else {
          BYTE4((*(_UNKNOWN**)0x38LL)) = v26 == v27;
        }
        v25 = (_QWORD*)*v25;
      } while (v25 != nullptr);
      v24 = *(_QWORD*)(a1 + 208);
    }
    if ((*(_BYTE*)(v24 + 193) & 1) == 0) {
      Layout_c1ba40(a1, v24);
    }
    v41 = (_BYTE*)(a1 + 160);
    v40 = *(unsigned __int8*)(a1 + 160);
    *(_DWORD*)(a1 + 188) = 4;
    v42 = (__int64*)(a1 + 136);
    if ((*(_BYTE*)(a1 + 136) & 1) != 0) {
      v45 = (v40 & 1) == 0;
      v46 = v40 >> 1;
      if (v45) {
        v47 = a1 + 161;
      }
      else {
        v47 = *(_QWORD*)(a1 + 176);
      }
      if (v45) {
        v48 = v46;
      }
      else {
        v48 = *(_QWORD*)(a1 + 168);
      }
      SpineModel_64dde0(v42, v47, v48);
      if ((*v41 & 1) != 0) {
        goto LABEL_74;
      }
    }
    else if ((v40 & 1) != 0) {
      GameRoutine_64df20(v42, *(_QWORD*)(a1 + 176), *(_QWORD*)(a1 + 168));
      if ((*v41 & 1) != 0) {
      LABEL_74:
        v49 = *(_BYTE**)(a1 + 176);
        *(_QWORD*)(a1 + 168) = 0;
        goto LABEL_75;
      }
    }
    else {
      v43 = *(_QWORD*)(a1 + 168);
      *v42 = *(_QWORD*)v41;
      *(_QWORD*)(a1 + 144) = v43;
      *(_QWORD*)(a1 + 152) = *(_QWORD*)(a1 + 176);
      if ((*v41 & 1) != 0) {
        goto LABEL_74;
      }
    }
    v49 = (_BYTE*)(a1 + 161);
    *(_BYTE*)(a1 + 160) = 0;
  LABEL_75:
    *v49 = 0;
    v50 = *(_QWORD*)(a1 + 264);
    *(_QWORD*)(a1 + 200) = *(_QWORD*)(a1 + 208);
    *(_QWORD*)(a1 + 208) = 0;
    if (v50 != 0) {
      GameRoutine_634d80(*(_QWORD*)(v50 + 8), v50);
    }
    v51 = *(_QWORD*)(a1 + 256);
    *(_QWORD*)(a1 + 264) = 0;
    if (v51 != 0) {
      GameRoutine_634d80(*(_QWORD*)(v51 + 8), v51);
    }
    if ((*(_BYTE*)(a1 + 296) & 1) != 0) {
      v52 = *(_BYTE**)(a1 + 312);
      *(_QWORD*)(a1 + 304) = 0;
    }
    else {
      v52 = (_BYTE*)(a1 + 297);
      *(_BYTE*)(a1 + 296) = 0;
    }
    *v52 = 0;
    if ((*(_BYTE*)(a1 + 272) & 1) != 0) {
      v53 = *(_BYTE**)(a1 + 288);
      *(_QWORD*)(a1 + 280) = 0;
    }
    else {
      v53 = (_BYTE*)(a1 + 273);
      *(_BYTE*)(a1 + 272) = 0;
    }
    *v53 = 0;
    v54 = *(_QWORD*)(a1 + 328);
    *(_QWORD*)(a1 + 256) = *(_QWORD*)(a1 + 320);
    *(_QWORD*)(a1 + 264) = v54;
    v55 = *(unsigned __int8*)(a1 + 336);
    if ((*(_BYTE*)(a1 + 272) & 1) != 0) {
      v57 = (v55 & 1) == 0;
      v58 = v55 >> 1;
      if (v57) {
        v59 = a1 + 337;
      }
      else {
        v59 = *(_QWORD*)(a1 + 352);
      }
      if (v57) {
        v60 = v58;
      }
      else {
        v60 = *(_QWORD*)(a1 + 344);
      }
      SpineModel_64dde0((__int64*)(a1 + 272), v59, v60);
    }
    else if ((v55 & 1) != 0) {
      GameRoutine_64df20((_QWORD*)(a1 + 272), *(_QWORD*)(a1 + 352),
                         *(_QWORD*)(a1 + 344));
    }
    else {
      v56 = *(_QWORD*)(a1 + 344);
      *(_QWORD*)(a1 + 272) = *(_QWORD*)(a1 + 336);
      *(_QWORD*)(a1 + 280) = v56;
      *(_QWORD*)(a1 + 288) = *(_QWORD*)(a1 + 352);
    }
    v61 = *(unsigned __int8*)(a1 + 360);
    if ((*(_BYTE*)(a1 + 296) & 1) != 0) {
      v63 = (v61 & 1) == 0;
      v64 = v61 >> 1;
      if (v63) {
        v65 = a1 + 361;
      }
      else {
        v65 = *(_QWORD*)(a1 + 376);
      }
      if (v63) {
        v66 = v64;
      }
      else {
        v66 = *(_QWORD*)(a1 + 368);
      }
      SpineModel_64dde0((__int64*)(a1 + 296), v65, v66);
    }
    else if ((v61 & 1) != 0) {
      GameRoutine_64df20((_QWORD*)(a1 + 296), *(_QWORD*)(a1 + 376),
                         *(_QWORD*)(a1 + 368));
    }
    else {
      v62 = *(_QWORD*)(a1 + 368);
      *(_QWORD*)(a1 + 296) = *(_QWORD*)(a1 + 360);
      *(_QWORD*)(a1 + 304) = v62;
      *(_QWORD*)(a1 + 312) = *(_QWORD*)(a1 + 376);
    }
    v67 = *(_BYTE*)(a1 + 360);
    *(_QWORD*)(a1 + 320) = 0;
    *(_QWORD*)(a1 + 328) = 0;
    if ((v67 & 1) != 0) {
      v68 = *(_BYTE**)(a1 + 376);
      *(_QWORD*)(a1 + 368) = 0;
    }
    else {
      v68 = (_BYTE*)(a1 + 361);
      *(_BYTE*)(a1 + 360) = 0;
    }
    *v68 = 0;
    if ((*(_BYTE*)(a1 + 336) & 1) != 0) {
      v69 = *(_BYTE**)(a1 + 352);
      *(_QWORD*)(a1 + 344) = 0;
    }
    else {
      v69 = (_BYTE*)(a1 + 337);
      *(_BYTE*)(a1 + 336) = 0;
    }
    *v69 = 0;
    v70 = *(__int64**)(a1 + 384);
    *(_QWORD*)(a1 + 384) = *(_QWORD*)(a1 + 392);
    *(_QWORD*)(a1 + 392) = 0;
    if (v70 != nullptr) {
      if (*v70 != 0) {
        GameRoutine_634d80(*(_QWORD*)(*v70 + 8), *v70);
        *v70 = 0;
      }
      v71 = v70[1];
      if (v71 != 0) {
        GameRoutine_634d80(*(_QWORD*)(v71 + 8), v71);
        v70[1] = 0;
      }
      v72 = fw_memory_g_heap_manager_ptr;
      v73 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v73 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v73, (__int64)v70);
      v74 = *(__int64**)(a1 + 392);
      *(_QWORD*)(a1 + 392) = 0;
      if (v74 != nullptr) {
        if (*v74 != 0) {
          GameRoutine_634d80(*(_QWORD*)(*v74 + 8), *v74);
          *v74 = 0;
        }
        v75 = v74[1];
        if (v75 != 0) {
          GameRoutine_634d80(*(_QWORD*)(v75 + 8), v75);
          v74[1] = 0;
        }
        v76 = 128;
        if (*(_QWORD*)(*(_QWORD*)v72 + 200LL) == 0) {
          v76 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v72 + v76, (__int64)v74);
      }
    }
    *(_DWORD*)(a1 + 400) = *(_DWORD*)(a1 + 404);
    *(_DWORD*)(a1 + 404) = -1;
    return;
  }
  if (v1 == 1) {
    v21 = *(_DWORD*)(a1 + 192);
    v22 = __OFSUB__(v21, 1);
    v23 = v21 - 1;
    if (v23 < 0 != v22) {
      v31 = *(_QWORD*)(a1 + 320);
      if (v31 == 0 ||
          (nn_os_AcquireReadLock(v31 + 696), v32 = *(_DWORD*)(v31 + 656),
           nn_os_ReleaseReadLock(v31 + 696), (v32 & 8) != 0)) {
        v33 = *(_QWORD*)(a1 + 328);
        if (v33 == 0 ||
            (nn_os_AcquireReadLock(v33 + 696), v34 = *(_DWORD*)(v33 + 656),
             nn_os_ReleaseReadLock(v33 + 696), (v34 & 8) != 0)) {
          v35 = *(_QWORD*)(a1 + 24);
          if (v35 != 0) {
            v36 = std___1___shared_weak_count_lock(v35);
            if (v36 != 0) {
              v37 = *(_QWORD*)(a1 + 16);
              v38 = v36;
              if (v37 != 0) {
                v39 = *(_QWORD*)(v37 + 288);
                GameRoutine_b31800(v39 + 736, 255);
                *(_QWORD*)(v39 + 816) = *(_QWORD*)(v39 + 808);
                GameRoutine_b81e20(*(_QWORD*)a1);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
                std___1___shared_weak_count___release_weak(v38);
              }
            }
          }
          Layout_c1d3e0(a1, (__int64**)(a1 + 320));
          *(_DWORD*)(a1 + 188) = 2;
        }
      }
    }
    else {
      *(_DWORD*)(a1 + 192) = v23;
    }
  }
  else {
    if (v1 != 2) {
      return;
    }
    v3 = *(__int64**)(a1 + 392);
    if (v3 == nullptr) {
      goto LABEL_10;
    }
    v4 = *v3;
    if (*v3 == 0 || v3[1] == 0) {
      goto LABEL_10;
    }
    v5 = *(_QWORD*)(a1 + 392);
    nn_os_AcquireReadLock(v4 + 696);
    v6 = *(_DWORD*)(v4 + 656);
    nn_os_ReleaseReadLock(v4 + 696);
    if ((v6 & 8) != 0) {
      v7 = *(_QWORD*)(v5 + 8);
      nn_os_AcquireReadLock(v7 + 696);
      v8 = *(_DWORD*)(v7 + 656);
      nn_os_ReleaseReadLock(v7 + 696);
      if ((v8 & 8) != 0) {
        v3 = *(__int64**)(a1 + 392);
      LABEL_10:
        GameRoutine_c1e830(a1, v3, 1);
        *(_DWORD*)(a1 + 188) = 3;
      }
    }
  }
}

void wld_map_c1f5e0(__int64 a1, unsigned __int8* a2, char* a3)
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
  __int64** v15;
  __int64* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  _QWORD* v26;
  char v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  float v31;
  float v32;
  float v33;
  _BOOL8 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 primeEm;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  _QWORD* v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  _QWORD* v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  _QWORD* v60;
  __int64 v61;
  unsigned __int64 v62;

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
  v11 = std___1___hash_memory((__int64)v9, v10);
  v12 = *(_QWORD*)(a1 + 8);
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
    v15 = *(__int64***)(*(_QWORD*)a1 + 8 * v3);
    if (v15 != nullptr) {
      v16 = *v15;
      if (*v15 != nullptr) {
        if ((v12 & v14) == 0) {
          while (1) {
            v21 = v16[1];
            if (v21 == v13) {
              v22 = *((unsigned __int8*)v16 + 16);
              v23 = v16[3];
              if ((v22 & 1) == 0) {
                v23 = v22 >> 1;
              }
              if (v23 == v10) {
                v24 = (v22 & 1) != 0 ? v16[4] : (__int64)v16 + 17;
                if (memcmp(v24, (__int64)v9, v10) == 0) {
                  return;
                }
              }
            }
            else if ((v21 & v14) != v3) {
              goto LABEL_41;
            }
            v16 = (__int64*)*v16;
            if (v16 == nullptr) {
              goto LABEL_41;
            }
          }
        }
        do {
          v17 = v16[1];
          if (v17 == v13) {
            v18 = *((unsigned __int8*)v16 + 16);
            v19 = v16[3];
            if ((v18 & 1) == 0) {
              v19 = v18 >> 1;
            }
            if (v19 == v10) {
              v20 = (v18 & 1) != 0 ? v16[4] : (__int64)v16 + 17;
              if (memcmp(v20, (__int64)v9, v10) == 0) {
                return;
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
          v16 = (__int64*)*v16;
        } while (v16 != nullptr);
      }
    }
  }
LABEL_41:
  v25 = (__int64*)fw_memory_g_heap_manager_ptr;
  v26 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v27 = *a3;
  v28 = v26;
  *v26 = 0;
  v26[1] = v13;
  if ((v27 & 1) != 0) {
    fw_text_String_CopyTerminated(v26 + 2, *((_QWORD*)a3 + 2),
                                  *((_QWORD*)a3 + 1));
  }
  else {
    v29 = *((_QWORD*)a3 + 1);
    v26[2] = *(_QWORD*)a3;
    v26[3] = v29;
    v26[4] = *((_QWORD*)a3 + 2);
  }
  v30 = *((_QWORD*)a3 + 3);
  *((_QWORD*)a3 + 3) = 0;
  v31 = *(float*)(a1 + 32);
  v28[5] = v30;
  v32 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v12 == 0 || (float)(v31 * (float)v12) < v32) {
    v33 = v32 / v31;
    v34 = true;
    if (v12 >= 3) {
      v34 = (v12 & (v12 - 1)) != 0;
    }
    v35 = v34 | (2 * v12);
    v36 = vcvtps_u64_f32(v33);
    if (v35 <= v36) {
      primeEm = v36;
    }
    else {
      primeEm = v35;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v38 = *(_QWORD*)(a1 + 8);
    if (primeEm <= v38) {
      if (primeEm >= v38) {
        goto LABEL_105;
      }
      v44 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v38 < 3 || (v38 & (v38 - 1)) != 0) {
        v44 = std___1___next_prime(v44);
      }
      else {
        v45 = 1LL << (-(char)__clz(v44 - 1) & 63);
        if (v44 >= 2) {
          v44 = v45;
        }
      }
      if (primeEm <= v44) {
        primeEm = v44;
      }
      if (primeEm >= v38) {
        goto LABEL_105;
      }
      if (primeEm == 0) {
        v57 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v57 != 0) {
          v58 = 128;
          if (*(_QWORD*)(*v25 + 200) == 0) {
            v58 = 56;
          }
          nn_mem_StandardAllocator_Free(*v25 + v58, v57);
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_105;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v39 = fw_memory_HeapManager_Allocate(*v25, 8 * primeEm, 16, 0);
    v40 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v39;
    if (v40 != 0) {
      v41 = 128;
      if (*(_QWORD*)(*v25 + 200) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free(*v25 + v41, v40);
    }
    v42 = primeEm & 7;
    *(_QWORD*)(a1 + 8) = primeEm;
    if (primeEm >= 8) {
      v43 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v43) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v43 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v43 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v43 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v43 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v43 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v43 + 48) = 0;
        v46 = *(_QWORD*)a1 + 8 * v43;
        v43 += 8;
        *(_QWORD*)(v46 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v43);
    }
    else {
      v43 = 0;
    }
    if ((primeEm & 7) != 0) {
      v47 = 8 * v43;
      do {
        --v42;
        *(_QWORD*)(*(_QWORD*)a1 + v47) = 0;
        v47 += 8;
      } while (v42 != 0);
    }
    v49 = a1 + 16;
    v48 = *(_QWORD**)(a1 + 16);
    if (v48 != nullptr) {
      v50 = v48[1];
      v51 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v50 >= primeEm) {
          v50 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v50) = v49;
        v52 = (_QWORD*)*v48;
        if (*v48 == 0) {
          goto LABEL_105;
        }
        while (1) {
          v53 = v52[1];
          if (v53 >= primeEm) {
            v53 %= primeEm;
          }
          if (v53 != v50) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v53) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v53) = v48;
              goto LABEL_82;
            }
            *v48 = *v52;
            *v52 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v53);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v53) = v52;
            v52 = v48;
          }
          v53 = v50;
        LABEL_82:
          v48 = v52;
          v52 = (_QWORD*)*v52;
          v50 = v53;
          if (v52 == nullptr) {
            goto LABEL_105;
          }
        }
      }
      v54 = v50 & v51;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v54) = v49;
      while (1) {
        v55 = (_QWORD*)*v48;
        if (*v48 == 0) {
          break;
        }
        v56 = v55[1] & v51;
        if (v56 == v54) {
          v48 = (_QWORD*)*v48;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v56) != 0) {
          *v48 = *v55;
          *v55 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v56);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v56) = v55;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v56) = v48;
          v48 = v55;
          v54 = v56;
        }
      }
    }
  LABEL_105:
    v12 = *(_QWORD*)(a1 + 8);
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
  v59 = *(_QWORD*)a1;
  v60 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v60 != nullptr) {
    *v28 = *v60;
    *v60 = v28;
  }
  else {
    v61 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v28;
    *v28 = v61;
    *(_QWORD*)(v59 + 8 * v3) = a1 + 16;
    if (*v28 != 0) {
      v62 = *(_QWORD*)(*v28 + 8LL);
      if ((v12 & (v12 - 1)) != 0) {
        if (v62 >= v12) {
          v62 %= v12;
        }
      }
      else {
        v62 &= v12 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v62) = v28;
    }
  }
  ++*(_QWORD*)(a1 + 24);
}

_QWORD* wld_map_c225c0(__int64 a1, unsigned __int8* a2, __int64** a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  _QWORD* v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  float v32;
  float v33;
  float v34;
  _BOOL8 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 primeEm;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  _QWORD* v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  _QWORD* v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  _QWORD* v61;
  __int64 v62;
  unsigned __int64 v63;

  v4 = *a2;
  v7 = (v4 & 1) == 0;
  v8 = v4 >> 1;
  if (v7) {
    v9 = (__int64)(a2 + 1);
  }
  else {
    v9 = *((_QWORD*)a2 + 2);
  }
  if (v7) {
    v10 = v8;
  }
  else {
    v10 = *((_QWORD*)a2 + 1);
  }
  v11 = std___1___hash_memory(v9, v10);
  v12 = *(_QWORD*)(a1 + 8);
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
    v15 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
    if (v15 != nullptr) {
      v16 = (_QWORD*)*v15;
      if (*v15 != 0) {
        if ((v12 & v14) == 0) {
          while (1) {
            v21 = v16[1];
            if (v21 == v13) {
              v22 = *((unsigned __int8*)v16 + 16);
              v23 = v16[3];
              if ((v22 & 1) == 0) {
                v23 = v22 >> 1;
              }
              if (v23 == v10) {
                v24 = (v22 & 1) != 0 ? v16[4] : (__int64)v16 + 17;
                if (memcmp(v24, v9, v10) == 0) {
                  return v16;
                }
              }
            }
            else if ((v21 & v14) != v3) {
              goto LABEL_41;
            }
            v16 = (_QWORD*)*v16;
            if (v16 == nullptr) {
              goto LABEL_41;
            }
          }
        }
        do {
          v17 = v16[1];
          if (v17 == v13) {
            v18 = *((unsigned __int8*)v16 + 16);
            v19 = v16[3];
            if ((v18 & 1) == 0) {
              v19 = v18 >> 1;
            }
            if (v19 == v10) {
              v20 = (v18 & 1) != 0 ? v16[4] : (__int64)v16 + 17;
              if (memcmp(v20, v9, v10) == 0) {
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
          v16 = (_QWORD*)*v16;
        } while (v16 != nullptr);
      }
    }
  }
LABEL_41:
  v25 = (__int64*)fw_memory_g_heap_manager_ptr;
  v26 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v27 = *a3;
  *v26 = 0;
  v26[1] = v13;
  v16 = v26;
  if ((*(_BYTE*)v27 & 1) != 0) {
    fw_text_String_CopyTerminated(v26 + 2, v27[2], v27[1]);
  }
  else {
    v28 = *v27;
    v29 = v27[1];
    v30 = v27[2];
    v26[3] = v29;
    v26[4] = v30;
    v26[2] = v28;
  }
  v31 = *(_QWORD*)(a1 + 24);
  v32 = *(float*)(a1 + 32);
  v16[5] = 0;
  v33 = (float)(unsigned __int64)(v31 + 1);
  if (v12 == 0 || (float)(v32 * (float)v12) < v33) {
    v34 = v33 / v32;
    v35 = true;
    if (v12 >= 3) {
      v35 = (v12 & (v12 - 1)) != 0;
    }
    v36 = v35 | (2 * v12);
    v37 = vcvtps_u64_f32(v34);
    if (v36 <= v37) {
      primeEm = v37;
    }
    else {
      primeEm = v36;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v39 = *(_QWORD*)(a1 + 8);
    if (primeEm <= v39) {
      if (primeEm >= v39) {
        goto LABEL_105;
      }
      v45 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v39 < 3 || (v39 & (v39 - 1)) != 0) {
        v45 = std___1___next_prime(v45);
      }
      else {
        v46 = 1LL << (-(char)__clz(v45 - 1) & 63);
        if (v45 >= 2) {
          v45 = v46;
        }
      }
      if (primeEm <= v45) {
        primeEm = v45;
      }
      if (primeEm >= v39) {
        goto LABEL_105;
      }
      if (primeEm == 0) {
        v58 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v58 != 0) {
          v59 = 128;
          if (*(_QWORD*)(*v25 + 200) == 0) {
            v59 = 56;
          }
          nn_mem_StandardAllocator_Free(*v25 + v59, v58);
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_105;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v40 = fw_memory_HeapManager_Allocate(*v25, 8 * primeEm, 16, 0);
    v41 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v40;
    if (v41 != 0) {
      v42 = 128;
      if (*(_QWORD*)(*v25 + 200) == 0) {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free(*v25 + v42, v41);
    }
    v43 = primeEm & 7;
    *(_QWORD*)(a1 + 8) = primeEm;
    if (primeEm >= 8) {
      v44 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 48) = 0;
        v47 = *(_QWORD*)a1 + 8 * v44;
        v44 += 8;
        *(_QWORD*)(v47 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v44);
    }
    else {
      v44 = 0;
    }
    if ((primeEm & 7) != 0) {
      v48 = 8 * v44;
      do {
        --v43;
        *(_QWORD*)(*(_QWORD*)a1 + v48) = 0;
        v48 += 8;
      } while (v43 != 0);
    }
    v50 = a1 + 16;
    v49 = *(_QWORD**)(a1 + 16);
    if (v49 != nullptr) {
      v51 = v49[1];
      v52 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v51 >= primeEm) {
          v51 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v51) = v50;
        v53 = (_QWORD*)*v49;
        if (*v49 == 0) {
          goto LABEL_105;
        }
        while (1) {
          v54 = v53[1];
          if (v54 >= primeEm) {
            v54 %= primeEm;
          }
          if (v54 != v51) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v54) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v54) = v49;
              goto LABEL_82;
            }
            *v49 = *v53;
            *v53 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v54);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v54) = v53;
            v53 = v49;
          }
          v54 = v51;
        LABEL_82:
          v49 = v53;
          v53 = (_QWORD*)*v53;
          v51 = v54;
          if (v53 == nullptr) {
            goto LABEL_105;
          }
        }
      }
      v55 = v51 & v52;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v55) = v50;
      while (1) {
        v56 = (_QWORD*)*v49;
        if (*v49 == 0) {
          break;
        }
        v57 = v56[1] & v52;
        if (v57 == v55) {
          v49 = (_QWORD*)*v49;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v57) != 0) {
          *v49 = *v56;
          *v56 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v57);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v57) = v56;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v57) = v49;
          v49 = v56;
          v55 = v57;
        }
      }
    }
  LABEL_105:
    v12 = *(_QWORD*)(a1 + 8);
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
  v60 = *(_QWORD*)a1;
  v61 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v61 != nullptr) {
    *v16 = *v61;
    *v61 = v16;
  }
  else {
    v62 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v16;
    *v16 = v62;
    *(_QWORD*)(v60 + 8 * v3) = a1 + 16;
    if (*v16 != 0) {
      v63 = *(_QWORD*)(*v16 + 8LL);
      if ((v12 & (v12 - 1)) != 0) {
        if (v63 >= v12) {
          v63 %= v12;
        }
      }
      else {
        v63 &= v12 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v63) = v16;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return v16;
}

__attribute__((swiftcall)) void wld_map_c24020(PSEUDO_X8 x8_, __int64 a1,
                                               unsigned __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  signed __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64* v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;

  Object_a87520((void*)(a3), *(__int64**)a1, a2, 1);
  v6 = *(_QWORD*)(a1 + 88);
  v7 = *(_QWORD*)(a1 + 96) - v6;
  v8 = (v7 >> 3) + a2;
  if (v8 > (unsigned __int64)((__int64)(*(_QWORD*)(a1 + 104) - v6) >> 3)) {
    if (v8 >> 61 != 0) {
    LABEL_27:
      GameRoutine_81e570();
    }
    v9 = fw_memory_g_heap_manager_ptr;
    v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * v8, 16, 0);
    v11 = v10 + v7;
    v12 = v10 + 8 * v8;
    v13 = v10 + v7 - 8 * (v7 >> 3);
    memcpy(v13, v6, v7);
    *(_QWORD*)(a1 + 88) = v13;
    *(_QWORD*)(a1 + 96) = v11;
    *(_QWORD*)(a1 + 104) = v12;
    if (v6 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v14, v6);
    }
  }
  v15 = (__int64*)*a3;
  v16 = (__int64*)a3[1];
  if ((__int64*)*a3 != v16) {
    do {
      v18 = *v15;
      GameRoutine_a8c380(*v15, *(_QWORD**)(a1 + 80));
      v20 = *(__int64**)(a1 + 96);
      v19 = *(_QWORD*)(a1 + 104);
      if ((unsigned __int64)v20 < v19) {
        *v20 = v18;
        v17 = (__int64)(v20 + 1);
      }
      else {
        v21 = *(_QWORD*)(a1 + 88);
        v22 = (char*)v20 - v21;
        v23 = ((__int64)v20 - v21) >> 3;
        v24 = v23 + 1;
        if ((unsigned __int64)(v23 + 1) >> 61 != 0) {
          goto LABEL_27;
        }
        v25 = v19 - v21;
        if (v25 >> 2 > v24) {
          v24 = v25 >> 2;
        }
        if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFF8LL) {
          v26 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v26 = v24;
        }
        if (v26 != 0) {
          if (v26 >> 61 != 0) {
            GameRoutine_60a210();
          }
          v27 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                               8 * v26, 16, 0);
        }
        else {
          v27 = 0;
        }
        v28 = v27 + 8 * v26;
        v29 = (unsigned __int64)v20 - v21;
        v30 = (__int64)&v22[v27 + -8 * v23];
        *(_QWORD*)&v22[v27] = v18;
        v17 = (__int64)&v22[v27 + 8];
        memcpy(v30, v21, v29);
        *(_QWORD*)(a1 + 88) = v30;
        *(_QWORD*)(a1 + 96) = v17;
        *(_QWORD*)(a1 + 104) = v28;
        if (v21 != 0) {
          v31 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v31 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v31, v21);
        }
      }
      ++v15;
      *(_QWORD*)(a1 + 96) = v17;
    } while (v15 != v16);
  }
}

#pragma GCC visibility pop
