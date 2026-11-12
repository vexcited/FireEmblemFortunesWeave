#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_fa4400(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_map_MapPanelSortie_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapPanelSortie_Destructor(_QWORD* a1);
__int64 MapPanelSortie_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "MapPanelSortie_DeletingDestructor");
__int64 GameRoutine_64dfe0(_QWORD, _QWORD);
extern __int64* GameData_212f8b0[14];
_DWORD** game_map_MapPanelSortie_UpdateSortie_lambda1_Invoke(_DWORD** result,
                                                             _DWORD* a2,
                                                             _DWORD* a3,
                                                             _DWORD* a4);
_QWORD* MapPanelSortie_fa4540_alt1(_QWORD* a1,
                                   _QWORD* a2) __asm__("MapPanelSortie_fa4540");
__attribute__((swiftcall)) void game_fcb000(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_73bb40(__int64);
__int64 GameRoutine_fa3d40(__int64**, __int64);
__int64 GameRoutine_fa3d40_alt1(__int64***,
                                __int64) __asm__("GameRoutine_fa3d40");
__int64 PrimitiveDrawStack_f51430(__int64 result, __int64);
__int64 PrimitiveDrawStack_f525a0(__int64*, __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_map_f54910(__int64);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1ff9290[])();
extern __int64 (*GameData_1ff9310[])();
extern __int64 (*game_map_SortieMeshData_vtable[])();
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212f878;
extern __int64 GameData_212d018[6];
extern __int64 GameData_212d020[5];
extern __int64 GameData_21ca310;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float32x4_t* GameRoutine_f54fe0(float32x4_t* result);
float32x4_t* GameRoutine_fcabb0(__int64, float32x4_t*, int, char, char,
                                unsigned __int64*, unsigned __int64*);
float32x4_t* game_fcb290(__int64, float32x4_t*, int, int, int, int,
                         unsigned __int64*, unsigned __int64*);
void game_map_MapDrawConst_AddCellPlaneMask(__int64, float32x4_t*, int, int,
                                            int, unsigned __int64*);
__int64 game_map_MapPanelSortie_UpdateSortie(__int64 result);
__int64 MapPanelSortie_fa3940_alt1(_QWORD* a1,
                                   __int64 a2) __asm__("MapPanelSortie_fa3940");
__int64 game_map_MapPanelSortie_UpdateSortie_lambda0_Invoke_alt1(
    __int64 a1, int* a2, int* a3,
    int* a4) __asm__("game_map_MapPanelSortie_UpdateSortie_lambda0_Invoke");
__int64* GameRoutine_64dfe0_alt1(__int64* result,
                                 __int64*) __asm__("GameRoutine_64dfe0");
__int64 GameHr_fcabb0(__int64, __int64, int, char, char, __int64, __int64);
__int64 game_map_fa3d40(__int64**, __int64);
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameRoutine_fa4400_alt1(_QWORD*) __asm__("GameRoutine_fa4400");
void PrimitiveDrawStack_f51430_alt1(__int64, __int64) __asm__(
    "PrimitiveDrawStack_f51430");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void game_fcb290_alt1(__int64, float32x4_t*, int, int, int, int,
                      unsigned __int64*,
                      unsigned __int64*) __asm__("game_fcb290");
void game_map_MapDrawConst_AddCellPlaneMask_alt1(
    __int64, float32x4_t*, int, int, int,
    __int64) __asm__("game_map_MapDrawConst_AddCellPlaneMask");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MapPanelSortie_fa3940(_QWORD* a1, __int64 a2);
void MapPanelSortie_DeletingDestructor(__int64 a1);
__int64* MapPanelSortie_fa4540(__int64** a1, __int64* a2);
void game_map_MapPanelSortie_UpdateSortie_lambda0_Invoke(__int64 a1, int* a2,
                                                         int* a3, int* a4);

__int64 game_map_MapPanelSortie_UpdateSortie(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  int v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  int v17;
  _QWORD* v18;
  _QWORD* v19;
  __int64 v20;
  int v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  int v30;
  __int64 v31;
  __int64 v32;
  int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  int v37;
  int v38;
  float32x4_t v39;
  float32x4_t* v40;
  float32x4_t* v41;
  float32x4_t* v42;
  float32x4_t v43;
  float32x4_t v44;
  int8x16_t v45;
  bool v46;
  float32x4_t v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  float32x4_t* v51;
  float32x4_t* v52;
  float32x4_t* v53;
  __int64 (**v54)(float32x4_t*);
  __int64 v55;
  int v56;
  int v57;
  float32x4_t v58;
  float32x4_t* v59;
  float32x4_t* v60;
  float32x4_t* v61;
  float32x4_t v62;
  float32x4_t v63;
  int8x16_t v64;
  float32x4_t v66;
  __int64 v67;
  float32x4_t* v68;
  float32x4_t* v69;
  float32x4_t* v70;
  __int64 (**v71)(float32x4_t*);
  __int64 v72;
  float32x4_t* v73;
  __int64 v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  unsigned __int64 v80;
  _QWORD* v81;
  float32x4_t* v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  unsigned __int64 v88;
  _QWORD* v89;
  float32x4_t* v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  unsigned __int64 v96;
  _QWORD* v97;
  _QWORD* v98;
  float32x4_t* v99;
  float32x4_t* v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  unsigned __int64 v106;
  _QWORD* v107;
  __int64 v108;
  __int64 v109;
  struct {
    float32x4_t v110;
    unsigned __int64* v111;
    char gap24_[8];
    float32x4_t* v112;
    char gap40_[56];
    float32x4_t* v113;
    float32x4_t* v114;
    char gap112_[8];
    __int64 v115;
    __int64 v116;
    char gap136_[40];
    float32x4_t v117;
    char gap192_[52];
    char v118;
  } v110_;
  unsigned __int64 v119[5];
  struct {
    _QWORD v120[2];
    int* v121;
    int* v122;
    _QWORD* v123;
  } v120_;
  int v124;
  int v125;
  int v126;

  v1 = result;
  if (*(_BYTE*)(result + 8) == 1) {
    v2 = *(_QWORD**)(result + 16);
    v3 = (_QWORD*)(result + 24);
    if (v2 != (_QWORD*)(result + 24)) {
      do {
        v8 = v2[6];
        *((_BYTE*)v2 + 272) = 0;
        if (((*(__int64 (**)(void*))(v8 + 48))(&v2[6]) & 1) != 0) {
          v9 = 1036831949;
        }
        else {
          v9 = 0;
          *((_DWORD*)v2 + 69) = 0;
        }
        v10 = (_QWORD*)v2[1];
        *((_DWORD*)v2 + 70) = v9;
        if (v10 != nullptr) {
          do {
            v11 = v10;
            v10 = (_QWORD*)*v10;
          } while (v10 != nullptr);
        }
        else {
          do {
            v11 = (_QWORD*)v2[2];
            v46 = v2 == (_QWORD*)*v11;
            v2 = v11;
          } while (!v46);
        }
        v2 = v11;
      } while (v11 != v3);
    }
    v4 = *(_QWORD**)(v1 + 40);
    if (v4 != (_QWORD*)(v1 + 48)) {
      do {
        v12 = v4[6];
        *((_BYTE*)v4 + 272) = 0;
        if (((*(__int64 (**)(void*))(v12 + 48))(&v4[6]) & 1) != 0) {
          v13 = 1036831949;
        }
        else {
          v13 = 0;
          *((_DWORD*)v4 + 69) = 0;
        }
        v14 = (_QWORD*)v4[1];
        *((_DWORD*)v4 + 70) = v13;
        if (v14 != nullptr) {
          do {
            v15 = v14;
            v14 = (_QWORD*)*v14;
          } while (v14 != nullptr);
        }
        else {
          do {
            v15 = (_QWORD*)v4[2];
            v46 = v4 == (_QWORD*)*v15;
            v4 = v15;
          } while (!v46);
        }
        v4 = v15;
      } while (v15 != (_QWORD*)(v1 + 48));
    }
    v5 = *(_QWORD**)(v1 + 64);
    if (v5 != (_QWORD*)(v1 + 72)) {
      do {
        v16 = v5[6];
        *((_BYTE*)v5 + 272) = 0;
        if (((*(__int64 (**)(void*))(v16 + 48))(&v5[6]) & 1) != 0) {
          v17 = 1036831949;
        }
        else {
          v17 = 0;
          *((_DWORD*)v5 + 69) = 0;
        }
        v18 = (_QWORD*)v5[1];
        *((_DWORD*)v5 + 70) = v17;
        if (v18 != nullptr) {
          do {
            v19 = v18;
            v18 = (_QWORD*)*v18;
          } while (v18 != nullptr);
        }
        else {
          do {
            v19 = (_QWORD*)v5[2];
            v46 = v5 == (_QWORD*)*v19;
            v5 = v19;
          } while (!v46);
        }
        v5 = v19;
      } while (v19 != (_QWORD*)(v1 + 72));
    }
    v6 = *(_QWORD**)(v1 + 88);
    if (v6 != (_QWORD*)(v1 + 96)) {
      do {
        v20 = v6[6];
        *((_BYTE*)v6 + 272) = 0;
        if (((*(__int64 (**)(void*))(v20 + 48))(&v6[6]) & 1) != 0) {
          v21 = 1036831949;
        }
        else {
          v21 = 0;
          *((_DWORD*)v6 + 69) = 0;
        }
        v22 = (_QWORD*)v6[1];
        *((_DWORD*)v6 + 70) = v21;
        if (v22 != nullptr) {
          do {
            v23 = v22;
            v22 = (_QWORD*)*v22;
          } while (v22 != nullptr);
        }
        else {
          do {
            v23 = (_QWORD*)v6[2];
            v46 = v6 == (_QWORD*)*v23;
            v6 = v23;
          } while (!v46);
        }
        v6 = v23;
      } while (v23 != (_QWORD*)(v1 + 96));
    }
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 48LL))(v1);
    if ((result & 1) == 0) {
      goto LABEL_120;
    }
    game_fcb000((void*)(v119), v1, 255);
    v110_.v111 = v119;
    LANES128(v110_.v110).n128_u64[0] = (unsigned __int64)GameData_1ff9310;
    LANES128(v110_.v110).n128_u64[1] = v1;
    v110_.v112 = &v110_.v110;
    GameRoutine_73bb40((__int64)&v110_.v110);
    result = (__int64)v110_.v112;
    if (v110_.v112 == &v110_.v110) {
      v7 = 32;
    }
    else {
      if (v110_.v112 == nullptr) {
        goto LABEL_52;
      }
      v7 = 40;
    }
    result =
        (*(__int64 (**)(void))(LANES128(*(v110_.v112)).n128_u64[0] + v7))();
  LABEL_52:
    v24 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 120LL);
    if (v24 == 0 ||
        (v25 = *(__int64**)(*(_QWORD*)GameData_212d020[0] + 112LL),
         v26 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 120LL),
         atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 16), 1u,
                                   memory_order_relaxed),
         v27 = std___1___shared_weak_count_lock(v26),
         result = std___1___shared_weak_count___release_weak(v24), v27 == 0)) {
    LABEL_120:
      *(_BYTE*)(v1 + 8) = 0;
      goto LABEL_121;
    }
    if (v25 == nullptr) {
      goto LABEL_118;
    }
    v28 = *v25;
    if (*v25 != 0) {
      game_map_f54910((__int64)&v110_.v110);
      v29 = *(char*)(v28 + 584);
      v110_.v118 = 0;
      LANES128(v110_.v110).n128_u64[0] =
          (unsigned __int64)game_map_SortieMeshData_vtable;
      v30 = *(char*)(v28 + 585);
      v124 = 1;
      v120_.v123 = v120_.v120;
      v125 = v30;
      v126 = v29;
      v120_.v120[0] = GameData_1ff9290;
      v120_.v120[1] = &v126;
      v120_.v121 = &v125;
      v120_.v122 = &v124;
      GameRoutine_73bb40((__int64)v120_.v120);
      v31 = (__int64)v120_.v123;
      if (v120_.v123 == v120_.v120) {
        v32 = 32;
      }
      else {
        if (v120_.v123 == nullptr) {
        LABEL_65:
          v37 = *(char*)(v28 + 584);
          v38 = *(char*)(v28 + 585);
          if (v124 < 2) {
            GameRoutine_fcabb0(v31, &v110_.v110, 1, v37, v38, v119,
                               (unsigned __int64*)GameData_212c958);
          }
          else {
            game_fcb290(v1, &v110_.v110, 1, v37, v38, 1, v119,
                        (unsigned __int64*)GameData_212c958);
          }
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
            v108 = *((_QWORD*)GameData_212c540 + 1);
            *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
            *((_QWORD*)&GameData_21a6120 + 1) = v108;
            __cxa_guard_release(&GameData_21a6130);
          }
          v39 = COERCE_AS(float32x4_t, GameData_21a6120);
          v41 = v110_.v113;
          v40 = v110_.v114;
          if (v110_.v114 != v110_.v113) {
            v42 = v110_.v113;
            do {
              v43 = v42[1];
              v42 += 4;
              v39 = vaddq_f32(v39, v43);
            } while (v42 != v110_.v114);
            v39 = vmulq_n_f32(
                v39, 0x1.0000000000000p+0f /
                         (float)(unsigned __int64)(((char*)v110_.v114 -
                                                    (char*)v110_.v113) >>
                                                   6));
            LANES128(v39).n128_u32[3] = 0;
          }
          v44 = vsubq_f32(v39, v110_.v117);
          v45 = vmulq_f32(v44, v44);
          LANES128(v45).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v45, v45, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0])))
                  .n64_u64[0];
          v46 =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0])))
                      .n64_f32[0] <= 0x0.0p+0f ||
              v110_.v114 == v110_.v113;
          if (!v46) {
            do {
              v41[1] = vsubq_f32(v41[1], v44);
              v41 += 4;
            } while (v41 != v40);
          }
          LANES128(v47).n128_u64[0] = LANES128(v39).n128_u64[0];
          LANES128(v47).n128_u64[1] = LANES128(v39).n128_u32[2];
          v110_.v117 = v47;
          result =
              GameRoutine_fa3d40((__int64**)(v1 + 64), (__int64)&v110_.v110);
          LANES128(v110_.v110).n128_u64[0] =
              (unsigned __int64)(GameData_212f8b0[0] + 2);
          v48 = (__int64*)fw_memory_g_heap_manager_ptr;
          if (v110_.v115 != 0) {
            v49 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
            v110_.v116 = v110_.v115;
            v50 = 128;
            if (*(_QWORD*)(v49 + 200) == 0) {
              v50 = 56;
            }
            result = nn_mem_StandardAllocator_Free(v49 + v50);
          }
          v51 = v110_.v113;
          if (v110_.v113 == nullptr) {
            goto LABEL_118;
          }
          if (v110_.v113 != v110_.v114) {
            v52 = v110_.v114 - 4;
            v53 = v110_.v114 - 4;
            do {
              v54 = (__int64 (**)(float32x4_t*))LANES128(*(v53)).n128_u64[0];
              v53 -= 4;
              result = (*v54)(v52);
              v46 = v52 == v51;
              v52 = v53;
            } while (!v46);
            v110_.v114 = v51;
            if (v110_.v113 == nullptr) {
              goto LABEL_118;
            }
          }
          v55 = *v48;
          goto LABEL_115;
        }
        v32 = 40;
      }
      v31 = (*(__int64 (**)(__int64))(*v120_.v123 + v32))((__int64)v120_.v123);
      goto LABEL_65;
    }
    if (*((_BYTE*)v25 + 12) != 1) {
    LABEL_118:
      if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
        result = std___1___shared_weak_count___release_weak(v27);
      }
      goto LABEL_120;
    }
    game_map_f54910((__int64)&v110_.v110);
    v110_.v118 = 0;
    v33 = *((char*)v25 + 8);
    LANES128(v110_.v110).n128_u64[0] =
        (unsigned __int64)game_map_SortieMeshData_vtable;
    v34 = *((char*)v25 + 9);
    v124 = 1;
    v120_.v123 = v120_.v120;
    v125 = v34;
    v126 = v33;
    v120_.v120[0] = GameData_1ff9290;
    v120_.v120[1] = &v126;
    v120_.v121 = &v125;
    v120_.v122 = &v124;
    GameRoutine_73bb40((__int64)v120_.v120);
    v35 = (__int64)v120_.v123;
    if (v120_.v123 == v120_.v120) {
      v36 = 32;
    }
    else {
      if (v120_.v123 == nullptr) {
      LABEL_91:
        v56 = *((char*)v25 + 8);
        v57 = *((char*)v25 + 9);
        if (v124 < 2) {
          GameRoutine_fcabb0(v35, &v110_.v110, 1, v56, v57, v119,
                             (unsigned __int64*)GameData_212c958);
        }
        else {
          game_fcb290(v1, &v110_.v110, 1, v56, v57, 1, v119,
                      (unsigned __int64*)GameData_212c958);
        }
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
          v109 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v109;
          __cxa_guard_release(&GameData_21a6130);
        }
        v58 = COERCE_AS(float32x4_t, GameData_21a6120);
        v60 = v110_.v113;
        v59 = v110_.v114;
        if (v110_.v114 != v110_.v113) {
          v61 = v110_.v113;
          do {
            v62 = v61[1];
            v61 += 4;
            v58 = vaddq_f32(v58, v62);
          } while (v61 != v110_.v114);
          v58 = vmulq_n_f32(v58,
                            0x1.0000000000000p+0f /
                                (float)(unsigned __int64)(((char*)v110_.v114 -
                                                           (char*)v110_.v113) >>
                                                          6));
          LANES128(v58).n128_u32[3] = 0;
        }
        v63 = vsubq_f32(v58, v110_.v117);
        v64 = vmulq_f32(v63, v63);
        LANES128(v64).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v64, v64, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0])))
                    .n64_f32[0] > 0x0.0p+0f &&
            v110_.v114 != v110_.v113) {
          do {
            v60[1] = vsubq_f32(v60[1], v63);
            v60 += 4;
          } while (v60 != v59);
        }
        LANES128(v66).n128_u64[0] = LANES128(v58).n128_u64[0];
        LANES128(v66).n128_u64[1] = LANES128(v58).n128_u32[2];
        v110_.v117 = v66;
        result = GameRoutine_fa3d40((__int64**)(v1 + 64), (__int64)&v110_.v110);
        LANES128(v110_.v110).n128_u64[0] =
            (unsigned __int64)(GameData_212f8b0[0] + 2);
        if (v110_.v115 != 0) {
          v110_.v116 = v110_.v115;
          v67 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v67 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v67);
        }
        v68 = v110_.v113;
        if (v110_.v113 == nullptr) {
          goto LABEL_118;
        }
        if (v110_.v113 != v110_.v114) {
          v69 = v110_.v114 - 4;
          v70 = v110_.v114 - 4;
          do {
            v71 = (__int64 (**)(float32x4_t*))LANES128(*(v70)).n128_u64[0];
            v70 -= 4;
            result = (*v71)(v69);
            v46 = v69 == v68;
            v69 = v70;
          } while (!v46);
          v110_.v114 = v68;
          if (v110_.v113 == nullptr) {
            goto LABEL_118;
          }
        }
        v55 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      LABEL_115:
        v72 = 128;
        if (*(_QWORD*)(v55 + 200) == 0) {
          v72 = 56;
        }
        result = nn_mem_StandardAllocator_Free(v55 + v72);
        goto LABEL_118;
      }
      v36 = 40;
    }
    v35 = (*(__int64 (**)(__int64))(*v120_.v123 + v36))((__int64)v120_.v123);
    goto LABEL_91;
  }
LABEL_121:
  v73 = *(float32x4_t**)(v1 + 16);
  v74 = game_script_hub_g_frame_counter_ptr[0];
  if (v73 != (float32x4_t*)(v1 + 24)) {
    do {
      v75 = LANES128(v73[17]).n128_f32[2];
      v76 = (float)(*(float*)(*(_QWORD*)v74 + 160LL) * 0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f;
      if (v75 <= 0x0.0p+0f) {
        if (LANES128(v73[17]).n128_u8[0] != 0) {
          v79 = 0x1.0000000000000p+0f;
        }
        else {
          v79 = 0x0.0p+0f;
        }
      }
      else {
        v77 = v76 / v75;
        v78 = LANES128(v73[17]).n128_f32[1];
        if (LANES128(v73[17]).n128_u8[0] != 0) {
          v79 = fminf(fmaxf(v77 + v78, 0x1.51eb860000000p-2f),
                      0x1.0000000000000p+0f);
        }
        else {
          v79 = fminf(fmaxf(v78 - v77, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v73[17]).n128_f32[1] = v79;
      v80 = LANES128(v73[3]).n128_u64[0];
      LANES128(v73[15]).n128_f32[0] = v76 + LANES128(v73[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v80 + 40))(v73 + 3);
      GameRoutine_f54fe0(v73 + 3);
      if ((LANES128(v73[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v73[17]).n128_f32[1] > 0x0.0p+0f) {
        v81 = (_QWORD*)LANES128(*(v73)).n128_u64[1];
        if (v81 != nullptr) {
          do {
            result = (__int64)v81;
            v81 = (_QWORD*)*v81;
          } while (v81 != nullptr);
        }
        else {
          do {
            result = LANES128(v73[1]).n128_i64[0];
            v46 = v73 == *(float32x4_t**)result;
            v73 = (float32x4_t*)result;
          } while (!v46);
        }
      }
      else {
        result = (__int64)MapPanelSortie_fa4540_alt1((_QWORD*)(v1 + 16), v73);
      }
      v73 = (float32x4_t*)result;
    } while (result != v1 + 24);
  }
  v82 = *(float32x4_t**)(v1 + 40);
  if (v82 != (float32x4_t*)(v1 + 48)) {
    do {
      v83 = LANES128(v82[17]).n128_f32[2];
      v84 = (float)(*(float*)(*(_QWORD*)v74 + 160LL) * 0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f;
      if (v83 <= 0x0.0p+0f) {
        if (LANES128(v82[17]).n128_u8[0] != 0) {
          v87 = 0x1.0000000000000p+0f;
        }
        else {
          v87 = 0x0.0p+0f;
        }
      }
      else {
        v85 = v84 / v83;
        v86 = LANES128(v82[17]).n128_f32[1];
        if (LANES128(v82[17]).n128_u8[0] != 0) {
          v87 = fminf(fmaxf(v85 + v86, 0x1.51eb860000000p-2f),
                      0x1.0000000000000p+0f);
        }
        else {
          v87 = fminf(fmaxf(v86 - v85, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v82[17]).n128_f32[1] = v87;
      v88 = LANES128(v82[3]).n128_u64[0];
      LANES128(v82[15]).n128_f32[0] = v84 + LANES128(v82[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v88 + 40))(v82 + 3);
      GameRoutine_f54fe0(v82 + 3);
      if ((LANES128(v82[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v82[17]).n128_f32[1] > 0x0.0p+0f) {
        v89 = (_QWORD*)LANES128(*(v82)).n128_u64[1];
        if (v89 != nullptr) {
          do {
            result = (__int64)v89;
            v89 = (_QWORD*)*v89;
          } while (v89 != nullptr);
        }
        else {
          do {
            result = LANES128(v82[1]).n128_i64[0];
            v46 = v82 == *(float32x4_t**)result;
            v82 = (float32x4_t*)result;
          } while (!v46);
        }
      }
      else {
        result = (__int64)MapPanelSortie_fa4540_alt1((_QWORD*)(v1 + 40), v82);
      }
      v82 = (float32x4_t*)result;
    } while (result != v1 + 48);
  }
  v90 = *(float32x4_t**)(v1 + 64);
  if (v90 != (float32x4_t*)(v1 + 72)) {
    do {
      v91 = LANES128(v90[17]).n128_f32[2];
      v92 = (float)(*(float*)(*(_QWORD*)v74 + 160LL) * 0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f;
      if (v91 <= 0x0.0p+0f) {
        if (LANES128(v90[17]).n128_u8[0] != 0) {
          v95 = 0x1.0000000000000p+0f;
        }
        else {
          v95 = 0x0.0p+0f;
        }
      }
      else {
        v93 = v92 / v91;
        v94 = LANES128(v90[17]).n128_f32[1];
        if (LANES128(v90[17]).n128_u8[0] != 0) {
          v95 = fminf(fmaxf(v93 + v94, 0x1.51eb860000000p-2f),
                      0x1.0000000000000p+0f);
        }
        else {
          v95 = fminf(fmaxf(v94 - v93, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v90[17]).n128_f32[1] = v95;
      v96 = LANES128(v90[3]).n128_u64[0];
      LANES128(v90[15]).n128_f32[0] = v92 + LANES128(v90[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v96 + 40))(v90 + 3);
      GameRoutine_f54fe0(v90 + 3);
      if ((LANES128(v90[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v90[17]).n128_f32[1] > 0x0.0p+0f) {
        v97 = (_QWORD*)LANES128(*(v90)).n128_u64[1];
        if (v97 != nullptr) {
          do {
            result = (__int64)v97;
            v97 = (_QWORD*)*v97;
          } while (v97 != nullptr);
        }
        else {
          do {
            result = LANES128(v90[1]).n128_i64[0];
            v46 = v90 == *(float32x4_t**)result;
            v90 = (float32x4_t*)result;
          } while (!v46);
        }
      }
      else {
        result = (__int64)MapPanelSortie_fa4540_alt1((_QWORD*)(v1 + 64), v90);
      }
      v90 = (float32x4_t*)result;
    } while (result != v1 + 72);
  }
  v100 = *(float32x4_t**)(v1 + 88);
  v98 = (_QWORD*)(v1 + 88);
  v99 = v100;
  if (v100 != (float32x4_t*)(v98 + 1)) {
    do {
      v101 = LANES128(v99[17]).n128_f32[2];
      v102 = (float)(*(float*)(*(_QWORD*)v74 + 160LL) * 0x1.0aef000000000p+4f) /
             0x1.f400000000000p+9f;
      if (v101 <= 0x0.0p+0f) {
        if (LANES128(v99[17]).n128_u8[0] != 0) {
          v105 = 0x1.0000000000000p+0f;
        }
        else {
          v105 = 0x0.0p+0f;
        }
      }
      else {
        v103 = v102 / v101;
        v104 = LANES128(v99[17]).n128_f32[1];
        if (LANES128(v99[17]).n128_u8[0] != 0) {
          v105 = fminf(fmaxf(v103 + v104, 0x1.51eb860000000p-2f),
                       0x1.0000000000000p+0f);
        }
        else {
          v105 = fminf(fmaxf(v104 - v103, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v99[17]).n128_f32[1] = v105;
      v106 = LANES128(v99[3]).n128_u64[0];
      LANES128(v99[15]).n128_f32[0] = v102 + LANES128(v99[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v106 + 40))(v99 + 3);
      GameRoutine_f54fe0(v99 + 3);
      if ((LANES128(v99[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v99[17]).n128_f32[1] > 0x0.0p+0f) {
        v107 = (_QWORD*)LANES128(*(v99)).n128_u64[1];
        if (v107 != nullptr) {
          do {
            result = (__int64)v107;
            v107 = (_QWORD*)*v107;
          } while (v107 != nullptr);
        }
        else {
          do {
            result = LANES128(v99[1]).n128_i64[0];
            v46 = v99 == *(float32x4_t**)result;
            v99 = (float32x4_t*)result;
          } while (!v46);
        }
      }
      else {
        result = (__int64)MapPanelSortie_fa4540_alt1(v98, v99);
      }
      v99 = (float32x4_t*)result;
    } while ((_QWORD*)result != v98 + 1);
  }
  return result;
}

void MapPanelSortie_fa3940(_QWORD* a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64* v4;
  float32x4_t* v5;
  unsigned int v6;
  float v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  __int64* v18;
  _QWORD* v19;
  float32x4_t* v20;
  __int64 v21;
  __int64 v22;
  unsigned __int32 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  _QWORD* v34;
  _QWORD* v35;
  bool v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD* v44;
  _QWORD* v45;
  _QWORD* v46;
  unsigned int v47;
  struct {
    __int64 v48;
    unsigned __int64 v49;
    __int64 v50;
    char gap40_[8];
    float32x4_t v51;
    float32x4_t v52;
    unsigned __int64 v53;
    unsigned __int32 v54;
    char gap92_[4];
    float32x4_t v55;
    unsigned __int64 v56;
    unsigned __int8 v57;
  } v48_;

  v4 = GameData_212f878;
  v5 = (float32x4_t*)*GameData_212f878;
  v6 = *(_DWORD*)(*GameData_212f878 + 1436);
  v7 = -*(float*)(*GameData_212f878 + 1432);
  if ((*(_BYTE*)a2 & 1) != 0) {
    v47 = *(_DWORD*)(*GameData_212f878 + 1436);
    fw_text_String_CopyTerminated(&v48_.v48, *(_QWORD*)(a2 + 16),
                                  *(_QWORD*)(a2 + 8));
    v6 = v47;
    v5 = (float32x4_t*)*v4;
  }
  else {
    v8 = *(_QWORD*)(a2 + 8);
    v48_.v48 = *(_QWORD*)a2;
    v48_.v49 = v8;
    v48_.v50 = *(_QWORD*)(a2 + 16);
  }
  v9 = *(_QWORD*)(a2 + 32);
  v10 = *(_QWORD*)(a2 + 56);
  LANES128(v48_.v52).n128_u64[0] = *(_QWORD*)(a2 + 48);
  LANES128(v48_.v52).n128_u64[1] = v10;
  v48_.v53 = *(_QWORD*)(a2 + 64);
  v48_.v54 = *(_DWORD*)(a2 + 72);
  v11 = *(_QWORD*)(a2 + 40);
  LANES128(v48_.v51).n128_u64[0] = v9;
  LANES128(v48_.v51).n128_u64[1] = v11;
  v12 = *(_QWORD*)(a2 + 88);
  LANES128(v48_.v55).n128_u64[0] = *(_QWORD*)(a2 + 80);
  LANES128(v48_.v55).n128_u64[1] = v12;
  v13 = *(_QWORD*)(a2 + 96);
  v48_.v57 = *(_BYTE*)(a2 + 104);
  v48_.v56 = v13;
  v15 = v5[3];
  v14 = v5[4];
  LANES128(v48_.v55).n128_u64[0] = __PAIR64__(LODWORD(v7), v6);
  v48_.v54 = 0;
  LOBYTE(v48_.v56) = 1;
  v16 = vmulq_f32(*(float32x4_t*)GameData_212c958, v14);
  v17 = vmulq_f32(*(float32x4_t*)GameData_212c958, v15);
  PSEUDO_LOW_LANE128(v15, n128_u32, *(_DWORD*)(a2 + 44));
  v48_.v51 = v17;
  v48_.v52 = v16;
  LANES128(v17).n128_f32[0] = vmuls_lane_f32(LANES128(v15).n128_f32[0], v17, 3);
  PSEUDO_LOW_LANE128(v15, n128_u32, *(_DWORD*)(a2 + 60));
  LANES128(v48_.v51).n128_u32[3] = LANES128(v17).n128_u32[0];
  LANES128(v17).n128_u64[0] = __PAIR64__(LODWORD(v7), v6);
  LANES128(v17).n128_u64[1] = v6;
  LANES128(v48_.v52).n128_u32[3] =
      vmuls_lane_f32(LANES128(v15).n128_f32[0], v16, 3);
  v48_.v55 = v17;
  v18 = (__int64*)GameData_212d018[0];
  v19 = *(_QWORD**)GameData_212d018[0];
  v20 = *(float32x4_t**)(*(_QWORD*)GameData_212d018[0] + 24LL);
  if ((unsigned __int64)v20 >=
      *(_QWORD*)(*(_QWORD*)GameData_212d018[0] + 32LL)) {
    v22 = PrimitiveDrawStack_f525a0(v19 + 2, (__int64)&v48_.v48);
  }
  else {
    if ((v48_.v48 & 1) != 0) {
      fw_text_String_CopyTerminated(
          *(__int64**)(*(_QWORD*)GameData_212d018[0] + 24LL), v48_.v50,
          v48_.v49);
    }
    else {
      LANES128(*(v20)).n128_u64[1] = v48_.v49;
      v21 = v48_.v48;
      LANES128(v20[1]).n128_u64[0] = v48_.v50;
      LANES128(*(v20)).n128_u64[0] = v21;
    }
    v23 = v48_.v54;
    v22 = (__int64)&v20[7];
    LANES128(v20[3]).n128_u64[1] = LANES128(v48_.v52).n128_u64[1];
    v20[2] = v48_.v51;
    v24 = LANES128(v48_.v52).n128_u64[0];
    v25 = v48_.v53;
    LANES128(v20[4]).n128_u32[2] = v23;
    LANES128(v20[4]).n128_u64[0] = v25;
    LANES128(v20[3]).n128_u64[0] = v24;
    v20[5] = v48_.v55;
    v26 = v48_.v56;
    LANES128(v20[6]).n128_u8[8] = v48_.v57;
    LANES128(v20[6]).n128_u64[0] = v26;
  }
  v27 = v19[2];
  v19[3] = v22;
  v19[1] = 0x6DB6DB6DB6DB6DB7LL * ((v22 - v27) >> 4) - 1;
  v29 = a1 + 1;
  v28 = (_QWORD*)*a1;
  if ((_QWORD*)*a1 != a1 + 1) {
    do {
      PrimitiveDrawStack_f51430_alt1(*v18, (__int64)(v28 + 6));
      v34 = (_QWORD*)v28[1];
      if (v34 != nullptr) {
        do {
          v35 = v34;
          v34 = (_QWORD*)*v34;
        } while (v34 != nullptr);
      }
      else {
        do {
          v35 = (_QWORD*)v28[2];
          v36 = v28 == (_QWORD*)*v35;
          v28 = v35;
        } while (!v36);
      }
      v28 = v35;
    } while (v35 != v29);
  }
  v30 = *v18;
  *(_QWORD*)(*v18 + 8) = 1024;
  if ((v48_.v48 & 1) != 0 && v48_.v50 != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v48_.v50);
    v30 = *v18;
  }
  v32 = *(_QWORD*)(v30 + 24);
  if (v32 >= *(_QWORD*)(v30 + 32)) {
    v37 = PrimitiveDrawStack_f525a0((__int64*)(v30 + 16), a2);
  }
  else {
    if ((*(_BYTE*)a2 & 1) != 0) {
      fw_text_String_CopyTerminated(*(__int64**)(v30 + 24), *(_QWORD*)(a2 + 16),
                                    *(_QWORD*)(a2 + 8));
    }
    else {
      *(_QWORD*)(v32 + 8) = *(_QWORD*)(a2 + 8);
      v33 = *(_QWORD*)a2;
      *(_QWORD*)(v32 + 16) = *(_QWORD*)(a2 + 16);
      *(_QWORD*)v32 = v33;
    }
    v38 = *(_DWORD*)(a2 + 72);
    v37 = v32 + 112;
    *(_QWORD*)(v32 + 56) = *(_QWORD*)(a2 + 56);
    *(_QWORD*)(v32 + 40) = *(_QWORD*)(a2 + 40);
    *(_QWORD*)(v32 + 32) = *(_QWORD*)(a2 + 32);
    v39 = *(_QWORD*)(a2 + 48);
    v40 = *(_QWORD*)(a2 + 64);
    *(_DWORD*)(v32 + 72) = v38;
    *(_QWORD*)(v32 + 64) = v40;
    *(_QWORD*)(v32 + 48) = v39;
    v41 = *(_QWORD*)(a2 + 88);
    *(_QWORD*)(v32 + 80) = *(_QWORD*)(a2 + 80);
    *(_QWORD*)(v32 + 88) = v41;
    v42 = *(_QWORD*)(a2 + 96);
    *(_BYTE*)(v32 + 104) = *(_BYTE*)(a2 + 104);
    *(_QWORD*)(v32 + 96) = v42;
  }
  v43 = *(_QWORD*)(v30 + 16);
  *(_QWORD*)(v30 + 24) = v37;
  *(_QWORD*)(v30 + 8) = 0x6DB6DB6DB6DB6DB7LL * ((v37 - v43) >> 4) - 1;
  v44 = (_QWORD*)*a1;
  if (v44 != v29) {
    do {
      PrimitiveDrawStack_f51430_alt1(*v18, (__int64)(v44 + 6));
      v45 = (_QWORD*)v44[1];
      if (v45 != nullptr) {
        do {
          v46 = v45;
          v45 = (_QWORD*)*v45;
        } while (v45 != nullptr);
      }
      else {
        do {
          v46 = (_QWORD*)v44[2];
          v36 = v44 == (_QWORD*)*v46;
          v44 = v46;
        } while (!v36);
      }
      v44 = v46;
    } while (v46 != v29);
  }
  *(_QWORD*)(*v18 + 8) = 1024;
}

__int64 MapPanelSortie_Destructor(_QWORD* a1)
{
  *a1 = game_map_MapPanelSortie_vtable;
  GameRoutine_fa4400(a1[12]);
  GameRoutine_fa4400(a1[9]);
  GameRoutine_fa4400(a1[6]);
  return GameRoutine_fa4400(a1[3]);
}

void MapPanelSortie_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = game_map_MapPanelSortie_vtable;
  GameRoutine_fa4400_alt1(*(_QWORD**)(a1 + 96));
  GameRoutine_fa4400_alt1(*(_QWORD**)(a1 + 72));
  GameRoutine_fa4400_alt1(*(_QWORD**)(a1 + 48));
  GameRoutine_fa4400_alt1(*(_QWORD**)(a1 + 24));
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

_DWORD** game_map_MapPanelSortie_UpdateSortie_lambda1_Invoke(_DWORD** result,
                                                             _DWORD* a2,
                                                             _DWORD* a3,
                                                             _DWORD* a4)
{
  if (*result[1] == *a2 && *result[2] == *a3) {
    *result[3] = *a4;
  }
  return result;
}

__int64* MapPanelSortie_fa4540(__int64** a1, __int64* a2)
{
  __int64* v2;
  __int64* v4;
  __int64* v5;
  bool v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  void (***v14)(_QWORD);
  void (***v15)(_QWORD);
  void (**v16)(_QWORD);
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v2 = (__int64*)a2[1];
  if (v2 != nullptr) {
    do {
      v4 = v2;
      v2 = (__int64*)*v2;
    } while (v2 != nullptr);
  }
  else {
    v5 = a2;
    do {
      v4 = (__int64*)v5[2];
      v6 = v5 == (__int64*)*v4;
      v5 = v4;
    } while (!v6);
  }
  if (*a1 == a2) {
    *a1 = v4;
  }
  v7 = a1[1];
  a1[2] = (__int64*)((char*)a1[2] - 1);
  GameRoutine_64dfe0_alt1(v7, a2);
  v8 = a2[21];
  a2[6] = (__int64)(GameData_212f8b0[0] + 2);
  v9 = fw_memory_g_heap_manager_ptr;
  if (v8 != 0) {
    v10 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a2[22] = v8;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v10 + v11, v8);
  }
  v12 = a2[18];
  if (v12 != 0) {
    v13 = a2[19];
    if (v12 == v13) {
      goto LABEL_19;
    }
    v14 = (void (***)(_QWORD))(v13 - 64);
    v15 = (void (***)(_QWORD))(v13 - 64);
    do {
      v16 = *v15;
      v15 -= 8;
      (*v16)(v14);
      v6 = v14 == (void (***)(_QWORD))v12;
      v14 = v15;
    } while (!v6);
    v17 = a2[18];
    a2[19] = v12;
    v12 = v17;
    if (v17 != 0) {
    LABEL_19:
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v9 + v18, v12);
    }
  }
  v19 = 128;
  if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
    v19 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v9 + v19, (__int64)a2);
  return v4;
}

void game_map_MapPanelSortie_UpdateSortie_lambda0_Invoke(__int64 a1, int* a2,
                                                         int* a3, int* a4)
{

#pragma clang fp contract(off)
  int v4;
  int v5;
  int v6;
  __int64 v8;
  __int64 v9;
  unsigned __int64* v11;
  float32x4_t v12;
  float32x4_t* v13;
  float32x4_t* v14;
  float32x4_t* v15;
  float32x4_t v16;
  float32x4_t v17;
  int8x16_t v18;
  bool v19;
  __int64 v20;
  float32x4_t v21;
  unsigned int v22;
  __int64 v23;
  bool v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  void (***v31)(_QWORD);
  void (***v32)(_QWORD);
  void (**v33)(_QWORD);
  __int64 v34;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  void (***v39)(_QWORD);
  void (***v40)(_QWORD);
  void (**v41)(_QWORD);
  __int64 v42;
  __int64 v43;
  struct {
    float32x4_t v44[6];
    float32x4_t* v45;
    __int64 v46;
    char gap112_[8];
    __int64 v47;
    __int64 v48;
    char gap136_[40];
    float32x4_t v49;
    char gap192_[52];
    char v50;
  } v44_;

  v4 = *a2;
  v5 = *a3;
  v6 = *a4;
  v8 = *(_QWORD*)(a1 + 8);
  v9 = game_map_f54910((__int64)v44_.v44);
  v11 = *(unsigned __int64**)(a1 + 16);
  v44_.v50 = 0;
  LANES128(v44_.v44[0]).n128_u64[0] =
      (unsigned __int64)game_map_SortieMeshData_vtable;
  if (v6 < 2) {
    GameHr_fcabb0(v9, (__int64)v44_.v44, 1, v4, v5, (__int64)v11,
                  (__int64)GameData_212c958);
  }
  else {
    game_fcb290_alt1(v8, v44_.v44, 1, v4, v5, 1, v11,
                     (unsigned __int64*)GameData_212c958);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
    v43 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v43;
    __cxa_guard_release_alt1((__int64)&GameData_21a6130);
  }
  v12 = COERCE_AS(float32x4_t, GameData_21a6120);
  v14 = v44_.v45;
  v13 = (float32x4_t*)v44_.v46;
  if ((float32x4_t*)v44_.v46 != v44_.v45) {
    v15 = v44_.v45;
    do {
      v16 = v15[1];
      v15 += 4;
      v12 = vaddq_f32(v12, v16);
    } while (v15 != (float32x4_t*)v44_.v46);
    v12 = vmulq_n_f32(
        v12,
        0x1.0000000000000p+0f /
            (float)(unsigned __int64)((v44_.v46 - (__int64)v44_.v45) >> 6));
    LANES128(v12).n128_u32[3] = 0;
  }
  v17 = vsubq_f32(v12, v44_.v49);
  v18 = vmulq_f32(v17, v17);
  LANES128(v18).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
          .n64_u64[0];
  v19 = LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
                .n64_f32[0] <= 0x0.0p+0f ||
        v44_.v46 == (_QWORD)v44_.v45;
  if (!v19) {
    do {
      v14[1] = vsubq_f32(v14[1], v17);
      v14 += 4;
    } while (v14 != v13);
  }
  LANES128(v44_.v49).n128_u64[0] = LANES128(v12).n128_u64[0];
  LODWORD(v20) = v4 + 32 * v5;
  LANES128(v21).n128_u64[0] = LANES128(v12).n128_u64[0];
  if ((unsigned int)v20 >= 0x400) {
    v20 = 0;
  }
  else {
    v20 = (unsigned int)v20;
  }
  LANES128(v21).n128_u64[1] = LANES128(v12).n128_u32[2];
  v44_.v49 = v21;
  v22 = *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v20 + 8);
  if (*(_BYTE*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v20 + 8) != 0 &&
      ((v23 =
            *(_QWORD*)(GameData_21ca310 + 56) +
            2224LL * *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) +
                                         v20 + 8),
        v22 <= 0xFA)
           ? (v24 = v23 == 2224)
           : (v24 = true),
       !v24 && *(_QWORD*)(v23 - 1832) != 0 &&
           (*(_BYTE*)(v23 - 1807) & 2) != 0)) {
    v25 = 40;
  }
  else {
    v25 = 16;
  }
  game_map_fa3d40((__int64**)(v8 + v25), (__int64)v44_.v44);
  v26 = GameData_212f8b0[0];
  LANES128(v44_.v44[0]).n128_u64[0] =
      (unsigned __int64)(GameData_212f8b0[0] + 2);
  v27 = fw_memory_g_heap_manager_ptr;
  if (v44_.v47 != 0) {
    v28 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v44_.v48 = v44_.v47;
    v29 = 128;
    if (*(_QWORD*)(v28 + 200) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v28 + v29, v44_.v47);
  }
  v30 = (__int64)v44_.v45;
  if (v44_.v45 != nullptr) {
    if (v44_.v45 == (float32x4_t*)v44_.v46) {
      goto LABEL_35;
    }
    v31 = (void (***)(_QWORD))(v44_.v46 - 64);
    v32 = (void (***)(_QWORD))(v44_.v46 - 64);
    do {
      v33 = *v32;
      v32 -= 8;
      (*v33)(v31);
      v19 = v31 == (void (***)(_QWORD))v30;
      v31 = v32;
    } while (!v19);
    v44_.v46 = v30;
    v30 = (__int64)v44_.v45;
    if (v44_.v45 != nullptr) {
    LABEL_35:
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v27 + v34, v30);
    }
  }
  if (v6 >= 2) {
    game_map_f54910((__int64)v44_.v44);
    LANES128(v44_.v44[0]).n128_u64[0] =
        (unsigned __int64)game_map_SortieMeshData_vtable;
    v44_.v50 = 0;
    game_map_MapDrawConst_AddCellPlaneMask_alt1(v8, v44_.v44, v4, v5, v6,
                                                (__int64)GameData_212c958);
    game_map_fa3d40((__int64**)(v8 + 88), (__int64)v44_.v44);
    LANES128(v44_.v44[0]).n128_u64[0] = (unsigned __int64)(v26 + 2);
    if (v44_.v47 != 0) {
      v36 = *(_QWORD*)v27;
      v44_.v48 = v44_.v47;
      v37 = 128;
      if (*(_QWORD*)(v36 + 200) == 0) {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v36 + v37, v44_.v47);
    }
    v38 = (__int64)v44_.v45;
    if (v44_.v45 != nullptr) {
      if (v44_.v45 == (float32x4_t*)v44_.v46) {
        goto LABEL_49;
      }
      v39 = (void (***)(_QWORD))(v44_.v46 - 64);
      v40 = (void (***)(_QWORD))(v44_.v46 - 64);
      do {
        v41 = *v40;
        v40 -= 8;
        (*v41)(v39);
        v19 = v39 == (void (***)(_QWORD))v38;
        v39 = v40;
      } while (!v19);
      v44_.v46 = v38;
      v38 = (__int64)v44_.v45;
      if (v44_.v45 != nullptr) {
      LABEL_49:
        v42 = 128;
        if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) == 0) {
          v42 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v27 + v42, v38);
      }
    }
  }
}

#pragma GCC visibility pop
