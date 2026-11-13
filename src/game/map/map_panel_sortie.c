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
__int64 game_map_MapPanelSortie_UpdateSortie_alt1(__int64 result) __asm__(
    "game_map_MapPanelSortie_UpdateSortie");
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
void MapPanelSortie_Unknown4(_QWORD* a1);
__int64 GameHr_73bb40(__int64);
__int64 game_fcb290_alt2(__int64, __int64, int, int, int, int, __int64,
                         __int64) __asm__("game_fcb290");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void game_map_MapPanelSortie_UpdateSortie(__int64 a1);

void game_map_MapPanelSortie_UpdateSortie(__int64 a1)
{

#pragma clang fp contract(off)
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
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  __int64 v37;
  __int64 v38;
  int v39;
  int v40;
  float32x4_t v41;
  float32x4_t* v42;
  float32x4_t* v43;
  float32x4_t* v44;
  float32x4_t v45;
  float32x4_t v46;
  int8x16_t v47;
  bool v48;
  float32x4_t v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  void (***v54)(_QWORD);
  void (***v55)(_QWORD);
  void (**v56)(_QWORD);
  __int64 v57;
  int v58;
  int v59;
  float32x4_t v60;
  float32x4_t* v61;
  float32x4_t* v62;
  float32x4_t* v63;
  float32x4_t v64;
  float32x4_t v65;
  int8x16_t v66;
  float32x4_t v68;
  __int64 v69;
  void (***v70)(_QWORD);
  void (***v71)(_QWORD);
  void (**v72)(_QWORD);
  __int64 v73;
  float32x4_t* v74;
  __int64 v75;
  __int64* v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  unsigned __int64 v82;
  __int64* v83;
  float32x4_t* v84;
  __int64* v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  unsigned __int64 v91;
  __int64* v92;
  float32x4_t* v93;
  __int64* v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  unsigned __int64 v100;
  __int64* v101;
  __int64** v102;
  float32x4_t* v103;
  float32x4_t* v104;
  __int64* v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  unsigned __int64 v111;
  __int64* v112;
  __int64 v113;
  __int64 v114;
  struct {
    _QWORD v115[4];
    _QWORD* v116;
    char gap40_[56];
    float32x4_t* v117;
    __int64 v118;
    char gap112_[8];
    __int64 v119;
    __int64 v120;
    char gap136_[40];
    float32x4_t v121;
    char gap192_[52];
    char v122;
  } v115_;
  _QWORD v123[5];
  struct {
    _QWORD v124[2];
    int* v125;
    int* v126;
    _QWORD* v127;
  } v124_;
  int v128;
  int v129;
  int v130;

  if (*(_BYTE*)(a1 + 8) == 1) {
    v2 = *(_QWORD**)(a1 + 16);
    v3 = (_QWORD*)(a1 + 24);
    if (v2 != (_QWORD*)(a1 + 24)) {
      do {
        v8 = v2[6];
        *((_BYTE*)v2 + 272) = 0;
        if (((*(__int64 (**)(void*))(v8 + 48))((void*)&v2[6]) & 1) != 0) {
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
            v48 = v2 == (_QWORD*)*v11;
            v2 = v11;
          } while (!v48);
        }
        v2 = v11;
      } while (v11 != v3);
    }
    v4 = *(_QWORD**)(a1 + 40);
    if (v4 != (_QWORD*)(a1 + 48)) {
      do {
        v12 = v4[6];
        *((_BYTE*)v4 + 272) = 0;
        if (((*(__int64 (**)(void*))(v12 + 48))((void*)&v4[6]) & 1) != 0) {
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
            v48 = v4 == (_QWORD*)*v15;
            v4 = v15;
          } while (!v48);
        }
        v4 = v15;
      } while (v15 != (_QWORD*)(a1 + 48));
    }
    v5 = *(_QWORD**)(a1 + 64);
    if (v5 != (_QWORD*)(a1 + 72)) {
      do {
        v16 = v5[6];
        *((_BYTE*)v5 + 272) = 0;
        if (((*(__int64 (**)(void*))(v16 + 48))((void*)&v5[6]) & 1) != 0) {
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
            v48 = v5 == (_QWORD*)*v19;
            v5 = v19;
          } while (!v48);
        }
        v5 = v19;
      } while (v19 != (_QWORD*)(a1 + 72));
    }
    v6 = *(_QWORD**)(a1 + 88);
    if (v6 != (_QWORD*)(a1 + 96)) {
      do {
        v20 = v6[6];
        *((_BYTE*)v6 + 272) = 0;
        if (((*(__int64 (**)(void*))(v20 + 48))((void*)&v6[6]) & 1) != 0) {
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
            v48 = v6 == (_QWORD*)*v23;
            v6 = v23;
          } while (!v48);
        }
        v6 = v23;
      } while (v23 != (_QWORD*)(a1 + 96));
    }
    if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1) & 1) == 0) {
      goto LABEL_120;
    }
    game_fcb000((void*)(v123), a1, 255);
    v115_.v115[2] = v123;
    v115_.v115[0] = GameData_1ff9310;
    v115_.v115[1] = a1;
    v115_.v116 = v115_.v115;
    GameHr_73bb40((__int64)v115_.v115);
    if (v115_.v116 == v115_.v115) {
      v7 = 32;
    }
    else {
      if (v115_.v116 == nullptr) {
        goto LABEL_52;
      }
      v7 = 40;
    }
    (*(void (**)(__int64))(*v115_.v116 + v7))((__int64)v115_.v116);
  LABEL_52:
    v24 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 120LL);
    if (v24 == 0 ||
        (v25 = *(__int64**)(*(_QWORD*)GameData_212d020[0] + 112LL),
         v26 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 120LL),
         atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 16), 1u,
                                   memory_order_relaxed),
         v27 = std___1___shared_weak_count_lock_alt1(v26),
         std___1___shared_weak_count___release_weak_alt1(v24), v27 == 0)) {
    LABEL_120:
      *(_BYTE*)(a1 + 8) = 0;
      goto LABEL_121;
    }
    if (v25 == nullptr) {
      goto LABEL_118;
    }
    v28 = *v25;
    if (*v25 != 0) {
      game_map_f54910((__int64)v115_.v115);
      v29 = *(char*)(v28 + 584);
      v115_.v122 = 0;
      v115_.v115[0] = game_map_SortieMeshData_vtable;
      v30 = *(char*)(v28 + 585);
      v128 = 1;
      v124_.v127 = v124_.v124;
      v129 = v30;
      v130 = v29;
      v124_.v124[0] = GameData_1ff9290;
      v124_.v124[1] = &v130;
      v124_.v125 = &v129;
      v124_.v126 = &v128;
      GameHr_73bb40((__int64)v124_.v124);
      v32 = (__int64)v124_.v127;
      if (v124_.v127 == v124_.v124) {
        v33 = 32;
      }
      else {
        if (v124_.v127 == nullptr) {
        LABEL_65:
          v39 = *(char*)(v28 + 584);
          v40 = *(char*)(v28 + 585);
          if (v128 < 2) {
            GameHr_fcabb0(v32, (__int64)v115_.v115, 1, v39, v40, (__int64)v123,
                          (__int64)GameData_212c958);
          }
          else {
            game_fcb290_alt2(a1, (__int64)v115_.v115, 1, v39, v40, 1,
                             (__int64)v123, (__int64)GameData_212c958);
          }
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                    memory_order_acquire) &
               1) == 0 &&
              __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
            v113 = *((_QWORD*)GameData_212c540 + 1);
            *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
            *((_QWORD*)&GameData_21a6120 + 1) = v113;
            __cxa_guard_release_alt1((__int64)&GameData_21a6130);
          }
          v41 = COERCE_AS(float32x4_t, GameData_21a6120);
          v43 = v115_.v117;
          v42 = (float32x4_t*)v115_.v118;
          if ((float32x4_t*)v115_.v118 != v115_.v117) {
            v44 = v115_.v117;
            do {
              v45 = v44[1];
              v44 += 4;
              v41 = vaddq_f32(v41, v45);
            } while (v44 != (float32x4_t*)v115_.v118);
            v41 = vmulq_n_f32(
                v41, 0x1.0000000000000p+0f /
                         (float)(unsigned __int64)((v115_.v118 -
                                                    (__int64)v115_.v117) >>
                                                   6));
            LANES128(v41).n128_u32[3] = 0;
          }
          v46 = vsubq_f32(v41, v115_.v121);
          v47 = vmulq_f32(v46, v46);
          LANES128(v47).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v47, v47, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0])))
                  .n64_u64[0];
          v48 =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0])))
                      .n64_f32[0] <= 0x0.0p+0f ||
              v115_.v118 == (_QWORD)v115_.v117;
          if (!v48) {
            do {
              v43[1] = vsubq_f32(v43[1], v46);
              v43 += 4;
            } while (v43 != v42);
          }
          LANES128(v49).n128_u64[0] = LANES128(v41).n128_u64[0];
          LANES128(v49).n128_u64[1] = LANES128(v41).n128_u32[2];
          v115_.v121 = v49;
          game_map_fa3d40((__int64**)(a1 + 64), (__int64)v115_.v115);
          v115_.v115[0] = GameData_212f8b0[0] + 2;
          v50 = (__int64*)fw_memory_g_heap_manager_ptr;
          if (v115_.v119 != 0) {
            v51 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
            v115_.v120 = v115_.v119;
            v52 = 128;
            if (*(_QWORD*)(v51 + 200) == 0) {
              v52 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(v51 + v52, v115_.v119);
          }
          v53 = (__int64)v115_.v117;
          if (v115_.v117 == nullptr) {
            goto LABEL_118;
          }
          if (v115_.v117 != (float32x4_t*)v115_.v118) {
            v54 = (void (***)(_QWORD))(v115_.v118 - 64);
            v55 = (void (***)(_QWORD))(v115_.v118 - 64);
            do {
              v56 = *v55;
              v55 -= 8;
              (*v56)(v54);
              v48 = v54 == (void (***)(_QWORD))v53;
              v54 = v55;
            } while (!v48);
            v115_.v118 = v53;
            v53 = (__int64)v115_.v117;
            if (v115_.v117 == nullptr) {
              goto LABEL_118;
            }
          }
          v57 = *v50;
          goto LABEL_115;
        }
        v33 = 40;
      }
      v32 = (*(__int64 (**)(__int64))(*v124_.v127 + v33))((__int64)v124_.v127);
      goto LABEL_65;
    }
    if (*((_BYTE*)v25 + 12) != 1) {
    LABEL_118:
      if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
        std___1___shared_weak_count___release_weak_alt1(v27);
      }
      goto LABEL_120;
    }
    game_map_f54910((__int64)v115_.v115);
    v115_.v122 = 0;
    v34 = *((char*)v25 + 8);
    v115_.v115[0] = game_map_SortieMeshData_vtable;
    v35 = *((char*)v25 + 9);
    v128 = 1;
    v124_.v127 = v124_.v124;
    v129 = v35;
    v130 = v34;
    v124_.v124[0] = GameData_1ff9290;
    v124_.v124[1] = &v130;
    v124_.v125 = &v129;
    v124_.v126 = &v128;
    GameHr_73bb40((__int64)v124_.v124);
    v37 = (__int64)v124_.v127;
    if (v124_.v127 == v124_.v124) {
      v38 = 32;
    }
    else {
      if (v124_.v127 == nullptr) {
      LABEL_91:
        v58 = *((char*)v25 + 8);
        v59 = *((char*)v25 + 9);
        if (v128 < 2) {
          GameHr_fcabb0(v37, (__int64)v115_.v115, 1, v58, v59, (__int64)v123,
                        (__int64)GameData_212c958);
        }
        else {
          game_fcb290_alt2(a1, (__int64)v115_.v115, 1, v58, v59, 1,
                           (__int64)v123, (__int64)GameData_212c958);
        }
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
          v114 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v114;
          __cxa_guard_release_alt1((__int64)&GameData_21a6130);
        }
        v60 = COERCE_AS(float32x4_t, GameData_21a6120);
        v62 = v115_.v117;
        v61 = (float32x4_t*)v115_.v118;
        if ((float32x4_t*)v115_.v118 != v115_.v117) {
          v63 = v115_.v117;
          do {
            v64 = v63[1];
            v63 += 4;
            v60 = vaddq_f32(v60, v64);
          } while (v63 != (float32x4_t*)v115_.v118);
          v60 = vmulq_n_f32(
              v60, 0x1.0000000000000p+0f /
                       (float)(unsigned __int64)((v115_.v118 -
                                                  (__int64)v115_.v117) >>
                                                 6));
          LANES128(v60).n128_u32[3] = 0;
        }
        v65 = vsubq_f32(v60, v115_.v121);
        v66 = vmulq_f32(v65, v65);
        LANES128(v66).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v66, v66, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0])))
                    .n64_f32[0] > 0x0.0p+0f &&
            v115_.v118 != (_QWORD)v115_.v117) {
          do {
            v62[1] = vsubq_f32(v62[1], v65);
            v62 += 4;
          } while (v62 != v61);
        }
        LANES128(v68).n128_u64[0] = LANES128(v60).n128_u64[0];
        LANES128(v68).n128_u64[1] = LANES128(v60).n128_u32[2];
        v115_.v121 = v68;
        game_map_fa3d40((__int64**)(a1 + 64), (__int64)v115_.v115);
        v115_.v115[0] = GameData_212f8b0[0] + 2;
        if (v115_.v119 != 0) {
          v115_.v120 = v115_.v119;
          v69 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v69 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v69, v115_.v119);
        }
        v53 = (__int64)v115_.v117;
        if (v115_.v117 == nullptr) {
          goto LABEL_118;
        }
        if (v115_.v117 != (float32x4_t*)v115_.v118) {
          v70 = (void (***)(_QWORD))(v115_.v118 - 64);
          v71 = (void (***)(_QWORD))(v115_.v118 - 64);
          do {
            v72 = *v71;
            v71 -= 8;
            (*v72)(v70);
            v48 = v70 == (void (***)(_QWORD))v53;
            v70 = v71;
          } while (!v48);
          v115_.v118 = v53;
          v53 = (__int64)v115_.v117;
          if (v115_.v117 == nullptr) {
            goto LABEL_118;
          }
        }
        v57 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      LABEL_115:
        v73 = 128;
        if (*(_QWORD*)(v57 + 200) == 0) {
          v73 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(v57 + v73, v53);
        goto LABEL_118;
      }
      v38 = 40;
    }
    v37 = (*(__int64 (**)(__int64))(*v124_.v127 + v38))((__int64)v124_.v127);
    goto LABEL_91;
  }
LABEL_121:
  v74 = *(float32x4_t**)(a1 + 16);
  v75 = game_script_hub_g_frame_counter_ptr[0];
  if (v74 != (float32x4_t*)(a1 + 24)) {
    do {
      v77 = LANES128(v74[17]).n128_f32[2];
      v78 = (float)(*(float*)(*(_QWORD*)v75 + 160LL) * 0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f;
      if (v77 <= 0x0.0p+0f) {
        if (LANES128(v74[17]).n128_u8[0] != 0) {
          v81 = 0x1.0000000000000p+0f;
        }
        else {
          v81 = 0x0.0p+0f;
        }
      }
      else {
        v79 = v78 / v77;
        v80 = LANES128(v74[17]).n128_f32[1];
        if (LANES128(v74[17]).n128_u8[0] != 0) {
          v81 = fminf(fmaxf(v79 + v80, 0x1.51eb860000000p-2f),
                      0x1.0000000000000p+0f);
        }
        else {
          v81 = fminf(fmaxf(v80 - v79, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v74[17]).n128_f32[1] = v81;
      v82 = LANES128(v74[3]).n128_u64[0];
      LANES128(v74[15]).n128_f32[0] = v78 + LANES128(v74[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v82 + 40))(v74 + 3);
      GameRoutine_f54fe0(v74 + 3);
      if ((LANES128(v74[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v74[17]).n128_f32[1] > 0x0.0p+0f) {
        v83 = (__int64*)LANES128(*(v74)).n128_u64[1];
        if (v83 != nullptr) {
          do {
            v76 = v83;
            v83 = (__int64*)*v83;
          } while (v83 != nullptr);
        }
        else {
          do {
            v76 = (__int64*)LANES128(v74[1]).n128_u64[0];
            v48 = v74 == (float32x4_t*)*v76;
            v74 = (float32x4_t*)v76;
          } while (!v48);
        }
      }
      else {
        v76 = MapPanelSortie_fa4540((__int64**)(a1 + 16), (__int64*)v74);
      }
      v74 = (float32x4_t*)v76;
    } while (v76 != (__int64*)(a1 + 24));
  }
  v84 = *(float32x4_t**)(a1 + 40);
  if (v84 != (float32x4_t*)(a1 + 48)) {
    do {
      v86 = LANES128(v84[17]).n128_f32[2];
      v87 = (float)(*(float*)(*(_QWORD*)v75 + 160LL) * 0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f;
      if (v86 <= 0x0.0p+0f) {
        if (LANES128(v84[17]).n128_u8[0] != 0) {
          v90 = 0x1.0000000000000p+0f;
        }
        else {
          v90 = 0x0.0p+0f;
        }
      }
      else {
        v88 = v87 / v86;
        v89 = LANES128(v84[17]).n128_f32[1];
        if (LANES128(v84[17]).n128_u8[0] != 0) {
          v90 = fminf(fmaxf(v88 + v89, 0x1.51eb860000000p-2f),
                      0x1.0000000000000p+0f);
        }
        else {
          v90 = fminf(fmaxf(v89 - v88, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v84[17]).n128_f32[1] = v90;
      v91 = LANES128(v84[3]).n128_u64[0];
      LANES128(v84[15]).n128_f32[0] = v87 + LANES128(v84[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v91 + 40))(v84 + 3);
      GameRoutine_f54fe0(v84 + 3);
      if ((LANES128(v84[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v84[17]).n128_f32[1] > 0x0.0p+0f) {
        v92 = (__int64*)LANES128(*(v84)).n128_u64[1];
        if (v92 != nullptr) {
          do {
            v85 = v92;
            v92 = (__int64*)*v92;
          } while (v92 != nullptr);
        }
        else {
          do {
            v85 = (__int64*)LANES128(v84[1]).n128_u64[0];
            v48 = v84 == (float32x4_t*)*v85;
            v84 = (float32x4_t*)v85;
          } while (!v48);
        }
      }
      else {
        v85 = MapPanelSortie_fa4540((__int64**)(a1 + 40), (__int64*)v84);
      }
      v84 = (float32x4_t*)v85;
    } while (v85 != (__int64*)(a1 + 48));
  }
  v93 = *(float32x4_t**)(a1 + 64);
  if (v93 != (float32x4_t*)(a1 + 72)) {
    do {
      v95 = LANES128(v93[17]).n128_f32[2];
      v96 = (float)(*(float*)(*(_QWORD*)v75 + 160LL) * 0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f;
      if (v95 <= 0x0.0p+0f) {
        if (LANES128(v93[17]).n128_u8[0] != 0) {
          v99 = 0x1.0000000000000p+0f;
        }
        else {
          v99 = 0x0.0p+0f;
        }
      }
      else {
        v97 = v96 / v95;
        v98 = LANES128(v93[17]).n128_f32[1];
        if (LANES128(v93[17]).n128_u8[0] != 0) {
          v99 = fminf(fmaxf(v97 + v98, 0x1.51eb860000000p-2f),
                      0x1.0000000000000p+0f);
        }
        else {
          v99 = fminf(fmaxf(v98 - v97, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v93[17]).n128_f32[1] = v99;
      v100 = LANES128(v93[3]).n128_u64[0];
      LANES128(v93[15]).n128_f32[0] = v96 + LANES128(v93[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v100 + 40))(v93 + 3);
      GameRoutine_f54fe0(v93 + 3);
      if ((LANES128(v93[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v93[17]).n128_f32[1] > 0x0.0p+0f) {
        v101 = (__int64*)LANES128(*(v93)).n128_u64[1];
        if (v101 != nullptr) {
          do {
            v94 = v101;
            v101 = (__int64*)*v101;
          } while (v101 != nullptr);
        }
        else {
          do {
            v94 = (__int64*)LANES128(v93[1]).n128_u64[0];
            v48 = v93 == (float32x4_t*)*v94;
            v93 = (float32x4_t*)v94;
          } while (!v48);
        }
      }
      else {
        v94 = MapPanelSortie_fa4540((__int64**)(a1 + 64), (__int64*)v93);
      }
      v93 = (float32x4_t*)v94;
    } while (v94 != (__int64*)(a1 + 72));
  }
  v104 = *(float32x4_t**)(a1 + 88);
  v102 = (__int64**)(a1 + 88);
  v103 = v104;
  if (v104 != (float32x4_t*)(v102 + 1)) {
    do {
      v106 = LANES128(v103[17]).n128_f32[2];
      v107 = (float)(*(float*)(*(_QWORD*)v75 + 160LL) * 0x1.0aef000000000p+4f) /
             0x1.f400000000000p+9f;
      if (v106 <= 0x0.0p+0f) {
        if (LANES128(v103[17]).n128_u8[0] != 0) {
          v110 = 0x1.0000000000000p+0f;
        }
        else {
          v110 = 0x0.0p+0f;
        }
      }
      else {
        v108 = v107 / v106;
        v109 = LANES128(v103[17]).n128_f32[1];
        if (LANES128(v103[17]).n128_u8[0] != 0) {
          v110 = fminf(fmaxf(v108 + v109, 0x1.51eb860000000p-2f),
                       0x1.0000000000000p+0f);
        }
        else {
          v110 = fminf(fmaxf(v109 - v108, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v103[17]).n128_f32[1] = v110;
      v111 = LANES128(v103[3]).n128_u64[0];
      LANES128(v103[15]).n128_f32[0] = v107 + LANES128(v103[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v111 + 40))(v103 + 3);
      GameRoutine_f54fe0(v103 + 3);
      if ((LANES128(v103[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v103[17]).n128_f32[1] > 0x0.0p+0f) {
        v112 = (__int64*)LANES128(*(v103)).n128_u64[1];
        if (v112 != nullptr) {
          do {
            v105 = v112;
            v112 = (__int64*)*v112;
          } while (v112 != nullptr);
        }
        else {
          do {
            v105 = (__int64*)LANES128(v103[1]).n128_u64[0];
            v48 = v103 == (float32x4_t*)*v105;
            v103 = (float32x4_t*)v105;
          } while (!v48);
        }
      }
      else {
        v105 = MapPanelSortie_fa4540(v102, (__int64*)v103);
      }
      v103 = (float32x4_t*)v105;
    } while (v105 != (__int64*)(v102 + 1));
  }
}

void MapPanelSortie_Unknown4(_QWORD* a1)
{

#pragma clang fp contract(off)
  float32x4_t* v2;
  float32x4_t v3;
  float32x4_t** v4;
  int8x16_t v5;
  unsigned __int64 v6;
  float32x4_t v7;
  int8x16_t v8;
  int8x16_t v9;
  unsigned __int64 v10;
  int8x16_t v11;
  int8x16_t v12;
  unsigned __int64 v13;
  int8x16_t v14;
  __int64 v15;
  float32x4_t v16;
  int8x16_t v17;
  unsigned __int64 v18;
  float32x4_t v19;
  int8x16_t v20;
  __int64 v21;
  struct {
    __int64 v22[4];
    int8x16_t v23;
    int8x16_t v24;
    __int64 v25;
    int v26;
    char gap76_[4];
    __int64 v27;
    __int64 v28;
    __int16 v29;
    char gap98_[2];
    char v30;
    char gap101_[3];
    char v31;
  } v22_;

  v22_.v30 = 0;
  v22_.v31 = 0;
  v22_.v27 = 0;
  v22_.v28 = 0;
  v22_.v29 = 0;
  strcpy((char*)v22_.v22, ",MapPanelDeployTutorial");
  v2 = (float32x4_t*)GameData_212c958;
  v3 = *(float32x4_t*)GameData_212c958;
  v4 = (float32x4_t**)GameData_212f878;
  v22_.v26 = 1;
  v5 = vmulq_f32(v3, *(float32x4_t*)(*GameData_212f878 + 1184));
  LODWORD(v6) = LANES128_OF(vextq_s8(v5, v5, 8u)).n128_u32[0];
  HIDWORD(v6) = LANES64_OF(vdup_laneq_s32(v5, 3)).n64_u32[0];
  LANES128(v5).n128_u64[1] = v6;
  v7 = *(float32x4_t*)(*GameData_212f878 + 1168);
  v22_.v25 = 0xC00000000LL;
  v8 = vmulq_f32(v3, v7);
  LANES128(v7).n128_u32[0] = LANES128_OF(vextq_s8(v8, v8, 8u)).n128_u32[0];
  LANES128(v7).n128_u32[1] = LANES64_OF(vdup_laneq_s32(v8, 3)).n64_u32[0];
  LANES128(v8).n128_u64[1] = LANES128(v7).n128_u64[0];
  v22_.v23 = v8;
  v22_.v24 = v5;
  MapPanelSortie_fa3940(a1 + 2, (__int64)v22_.v22);
  v9 = vmulq_f32(*v2, (*v4)[76]);
  LODWORD(v10) = LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u32[0];
  HIDWORD(v10) = LANES64_OF(vdup_laneq_s32(v9, 3)).n64_u32[0];
  LANES128(v9).n128_u64[1] = v10;
  v11 = vmulq_f32(*v2, (*v4)[75]);
  LODWORD(v10) = LANES128_OF(vextq_s8(v11, v11, 8u)).n128_u32[0];
  HIDWORD(v10) = LANES64_OF(vdup_laneq_s32(v11, 3)).n64_u32[0];
  LANES128(v11).n128_u64[1] = v10;
  v22_.v23 = v11;
  v22_.v24 = v9;
  MapPanelSortie_fa3940(a1 + 5, (__int64)v22_.v22);
  v12 = vmulq_f32(*v2, (*v4)[78]);
  LODWORD(v13) = LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u32[0];
  HIDWORD(v13) = LANES64_OF(vdup_laneq_s32(v12, 3)).n64_u32[0];
  LANES128(v12).n128_u64[1] = v13;
  v14 = vmulq_f32(*v2, (*v4)[77]);
  LODWORD(v13) = LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u32[0];
  HIDWORD(v13) = LANES64_OF(vdup_laneq_s32(v14, 3)).n64_u32[0];
  LANES128(v14).n128_u64[1] = v13;
  v22_.v23 = v14;
  v22_.v24 = v12;
  MapPanelSortie_fa3940(a1 + 8, (__int64)v22_.v22);
  if ((v22_.v22[0] & 1) != 0 && v22_.v22[2] != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v22_.v22[2]);
  }
  BYTE1(v22_.v22[2]) = 0;
  WORD1(v22_.v22[2]) = 0;
  HIDWORD(v22_.v22[2]) = 0;
  v16 = *v2;
  v22_.v30 = 0;
  v22_.v31 = 0;
  v22_.v27 = 0;
  v22_.v28 = 0;
  v22_.v29 = 0;
  v22_.v26 = 1;
  strcpy((char*)v22_.v22, "$MapPanelDeployM");
  v17 = vmulq_f32(v16, (*v4)[80]);
  LODWORD(v18) = LANES128_OF(vextq_s8(v17, v17, 8u)).n128_u32[0];
  HIDWORD(v18) = LANES64_OF(vdup_laneq_s32(v17, 3)).n64_u32[0];
  LANES128(v17).n128_u64[1] = v18;
  v19 = (*v4)[79];
  v22_.v25 = 0x100000000LL;
  v20 = vmulq_f32(v16, v19);
  LANES128(v19).n128_u32[0] = LANES128_OF(vextq_s8(v20, v20, 8u)).n128_u32[0];
  LANES128(v19).n128_u32[1] = LANES64_OF(vdup_laneq_s32(v20, 3)).n64_u32[0];
  LANES128(v20).n128_u64[1] = LANES128(v19).n128_u64[0];
  v22_.v23 = v20;
  v22_.v24 = v17;
  MapPanelSortie_fa3940(a1 + 11, (__int64)v22_.v22);
  if ((v22_.v22[0] & 1) != 0 && v22_.v22[2] != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v22_.v22[2]);
  }
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
  LANES128(v48_.v52).n128_f32[3] =
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
