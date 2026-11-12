#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1084940(_QWORD, _QWORD, float, long double, long double,
                            long double);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64
game_cmdbtl_anonymous_ProcCmdBtlSeqCaptureComplete_SuccessPerformance1_closure_Invoke(
    __int64 result, __int64* a2, double a3, long double a4, long double a5,
    long double a6);
__attribute__((swiftcall)) void GameRoutine_1085a10(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64 CmdBtlUnit_e7c3f0(__int64, int, __int16, float);
__int64 CmdBtlUnit_e7da80(__int64, _QWORD*, float);
__int64 GameHr_e80600(_QWORD*, __int64*, __int64*, __int64, float);
__int64 GameRoutine_e9f200(__int64 result);
__int64 GameRoutine_eb9120(__int64);
__int64 game_cmdbtl_Manager_UnitRelocationImpl(_QWORD*, __int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(__int64);
extern _UNKNOWN GameData_2216780;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82a90;
extern __int128 GameData_1a83800;
extern __int64 (*GameData_1ff49e0[])();
extern __int64* GameData_212ea58;
extern __int64* GameData_212f2e0;
extern __int64 GameData_2203490;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_2216858;
extern float GameData_1b9ac04[5];
void CmdBtlUnit_e7ada0(__int64);
void CmdBtlUnit_e7c6f0(__int64, char, float);
void GameRoutine_e7bed0(__int64, char);
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_8123d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_cmdbtl_anonymous_ProcCmdBtlSeqCaptureComplete_SuccessPerformance1();

void game_cmdbtl_anonymous_ProcCmdBtlSeqCaptureComplete_SuccessPerformance1()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  bool v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  _QWORD* v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  _DWORD* v20;
  int8x16_t v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int128 v25;
  __int128 v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  float v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  float v39;
  int8x16_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  int8x16_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  float v59;
  __int64 v60;
  __int64 v61;
  float v62;
  float v63;
  float v64;
  __int64 v65;
  __int64 v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  __int64 v72;
  int8x16_t v73;
  int8x16_t v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float32x4_t v80;
  float32x4_t v81;
  int8x16_t v82;
  float32x4_t v83;
  float32x4_t v84;
  float32x4_t v85;
  float32x4_t v86;
  float32x4_t v87;
  float32x4_t v88;
  __int128 v89;
  __int128 v90;
  __int128 v91;
  __int128 v92;
  __int64* v93;
  __int128 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int128 v98;
  float v99;
  float32x4_t v100;
  __int128 v101;
  struct {
    __int64 v102;
    __int64 v103;
  } v102_;
  struct {
    __int64 v104;
    __int64 v105;
  } v104_;
  int8x16_t v106;
  float32x4_t v107;
  struct {
    _QWORD v108[4];
    _QWORD* v109;
  } v108_;
  struct {
    __int64 v110;
    __int64 v111;
  } v110_;
  struct {
    __int64 v112;
    __int64 v113;
    __int64 v114;
  } v112_;
  __int128 v115;
  _QWORD v116[4];

  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
  v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w"));
  v0 = GameData_2203490;
  v1 = *(_QWORD*)(GameData_2203490 + 760);
  if (v1 == 0) {
    v110_.v110 = 0;
    v110_.v111 = 0;
    v3 = true;
    v5 = *(_QWORD*)(GameData_2203490 + 888);
    if (v5 == 0) {
      goto LABEL_102;
    }
  LABEL_7:
    v6 = *(_QWORD*)(v0 + 880);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    v7 = std___1___shared_weak_count_lock(v5),
    v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
    v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v7 != 0) {
      v8 = v6;
    }
    else {
      v8 = 0;
    }
    std___1___shared_weak_count___release_weak_alt1(v5),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w"));
    v9 = v8 == 0 || v3;
    if ((v9 & 1) != 0) {
    LABEL_99:
      if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v7),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      goto LABEL_102;
    }
    v10 = (_QWORD*)GameData_2203490;
    v11 = *(__int64**)(GameData_2203490 + 712);
    v12 = *(__int64**)(GameData_2203490 + 720);
    *(_DWORD*)(GameData_2203490 + 1204) |= 8u;
    if (v11 != v12) {
      do {
        v13 = *v11;
        v11 += 2;
        CmdBtlUnit_e7c3f0(v13, 1, 256, 0x0.0p+0f),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w"));
      } while (v11 != v12);
      v10 = (_QWORD*)GameData_2203490;
    }
    LOWORD(v112_.v112) = 0;
    v112_.v113 = 0;
    v112_.v114 = 0;
    *(_BYTE*)(*GameData_212f2e0 + 112) = 1;
    game_cmdbtl_Manager_UnitRelocationImpl(v10, (__int64)&v112_.v112),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v112_.v114 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v112_.v114),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    v108_.v108[0] = GameData_1ff49e0;
    v108_.v108[1] = &v110_.v110;
    v108_.v109 = v108_.v108;
    v14 = *(__int64**)(GameData_2203490 + 712);
    v15 = *(__int64**)(GameData_2203490 + 720);
    if (v14 == v15) {
      v18 = v108_.v108;
    }
    else {
      do {
        v112_.v112 = *v14;
        v16 = v14[1];
        v112_.v113 = v16;
        if (v16 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v108_.v109 == nullptr) {
          GameRoutine_60a310(),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
        (*(void (**)(_QWORD*, __int64*))(*v108_.v109 + 48LL))(v108_.v109,
                                                              &v112_.v112),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w"));
        v17 = v112_.v113;
        if (v112_.v113 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v112_.v113 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v17),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v14 += 2;
      } while (v14 != v15);
      v18 = v108_.v109;
      if (v108_.v109 != v108_.v108) {
        if (v108_.v109 != nullptr) {
          v19 = 40;
        LABEL_33:
          (*(void (**)(__int64))(*v18 + v19))((__int64)v18),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v107 = (__typeof__(v107)){0};
        if ((GameData_2216858 & 1) == 0) {
          GameRoutine_8123d0(),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v20 = (_DWORD*)GameRoutine_eb9120((__int64)&GameData_2216780),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v20 != nullptr) {
          LANES128(v21).n128_u32[0] = v20[24];
          v22 = v20[27];
          LANES128(v21).n128_u32[1] = v20[25];
          LANES128(v21).n128_u32[2] = v20[26];
        }
        else {
          v22 = 0;
          v21 = (__typeof__(v21)){0};
        }
        v23 = v110_.v110;
        v100 = v21;
        *(_QWORD*)(v110_.v110 + 96) = LANES128(v21).n128_u64[0];
        *(_QWORD*)(v23 + 112) = LANES128(v21).n128_u64[0];
        v24 = *(_QWORD*)(v23 + 208);
        v26 = *(_OWORD*)(v23 + 96);
        v25 = *(_OWORD*)(v23 + 112);
        *(_QWORD*)&v27 = *(_QWORD*)(v23 + 112);
        *((_QWORD*)&v26 + 1) = LANES128(v21).n128_u32[2];
        *((_QWORD*)&v27 + 1) = LANES128(v21).n128_u32[2];
        *(_OWORD*)(v23 + 96) = v26;
        *(_OWORD*)(v23 + 112) = v27;
        if (v24 != 0) {
          v98 = v27;
          *(_QWORD*)&v28 = (unsigned int)v25 | 0x4348000000000000LL;
          *((_QWORD*)&v28 + 1) =
              LANES128_OF(vextq_s8(v21, v21, 8u)).n128_u32[0];
          *(_OWORD*)v116 = v28;
          DWORD1(v25) = -1027080192;
          *((_QWORD*)&v25 + 1) = *((_QWORD*)&v28 + 1);
          v115 = v25;
          GameRoutine_1085a10((void*)(&v112_.v112), v24 + 160, v116, &v115, 0),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v27 = v98;
          DWORD1(v27) = HIDWORD(v112_.v112);
        }
        *(_QWORD*)(v23 + 112) = v27;
        v29 = *(_OWORD*)(v23 + 112);
        *(_DWORD*)(v23 + 100) = DWORD1(v29);
        *((_QWORD*)&v29 + 1) = DWORD2(v27);
        *(_OWORD*)(v23 + 112) = v29;
        GameRoutine_e7bed0(v23, 1),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w"));
        v30 = v110_.v110;
        v31 = *(_QWORD*)(v110_.v110 + 304);
        *(_BYTE*)(v110_.v110 + 80) = 1;
        *(_DWORD*)(v30 + 132) = v22;
        *(_DWORD*)(v30 + 32) = v22;
        *(_QWORD*)(v30 + 296) = 0;
        *(_QWORD*)(v30 + 304) = 0;
        if (v31 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v31),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
        GameRoutine_e7bed0(v30, 1),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w"));
        v32 = v110_.v110;
        if ((*(_BYTE*)(v110_.v110 + 172) & 1) == 0) {
          *(_BYTE*)(v110_.v110 + 172) = 1;
        }
        *(_BYTE*)(v32 + 140) = 1;
        *(_BYTE*)(v32 + 148) = 0;
        *(_DWORD*)(v32 + 144) = 0;
        *(_BYTE*)(v32 + 152) = 0;
        *(_BYTE*)(v32 + 156) = 0;
        *(_BYTE*)(v32 + 160) = 0;
        *(_BYTE*)(v32 + 164) = 0;
        *(_BYTE*)(v32 + 168) = 0;
        *(_DWORD*)(v32 + 136) = -1345067615;
        CmdBtlUnit_e7ada0(v32),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w"));
        v112_.v112 = 0xB382E38B83E30CLL;
        CmdBtlUnit_e7da80(v110_.v110, &v112_.v112, 0x0.0p+0f),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w"));
        if ((v112_.v112 & 1) != 0 && v112_.v114 != 0) {
          v33 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v33 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v112_.v114),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
        *(_DWORD*)(*(_QWORD*)(v110_.v110 + 208) + 340LL) |= 0x1000000u;
        v34 = X8CALL_S0(
            float, math_Quat_FromYawPitchRoll(
                       (void*)(&v106),
                       (float)(*(float*)(v6 + 32) + -0x1.6800000000000p+6f) *
                           0x1.1df46a0000000p-6f,
                       0x0.0p+0f, 0x0.0p+0f)),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w"));
        v35 = *(_QWORD*)(v8 + 208);
        v36 = *(_QWORD*)(v35 + 392);
        v37 = *(_QWORD*)(v35 + 400);
        if (v37 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                                    memory_order_relaxed);
          v38 = *(_DWORD*)(v36 + 11784);
          if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64, float))(*(_QWORD*)v37 + 16LL))(v37, v34),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            std___1___shared_weak_count___release_weak_alt1(v37),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(float, "s0", "=w"));
          }
        }
        else {
          v38 = *(_DWORD*)(v36 + 11784);
        }
        v39 = 0x0.0p+0f;
        if ((v38 & 0xFFFFFFFE) == 4) {
          v40 = vmulq_f32(v106, COERCE_AS(float32x4_t, GameData_1a829d0));
          LANES128(v41).n128_u64[0] = 3204448256LL;
          LANES128(v42).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82a90),
                                   COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                  .n64_u64[0];
          LANES128(v43).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82a90),
                                   COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          LANES128(v44).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                  .n64_u64[0];
          LANES128(v45).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          LANES128(v42).n128_u64[1] = LANES128(v42).n128_u64[0];
          LANES128(v44).n128_u64[1] = LANES128(v43).n128_u64[0];
          LANES128(v45).n128_u64[1] = 3204448256LL;
          *(int8x8_t*)&LANES128(v41).n128_i8[8] =
              vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
          LANES128(v46).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82a90),
                                   COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v43).n128_u64[1] = LANES128(v46).n128_u64[0];
          *(int32x2_t*)&LANES128(v46).n128_i8[8] =
              vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v40).n128_u64[0]), 1);
          v47 = vmlaq_f32(vmlaq_f32(vmulq_f32(v40, v42),
                                    COERCE_AS(float32x4_t, GameData_1a83800),
                                    vmulq_f32(v41, v44)),
                          COERCE_AS(float32x4_t, GameData_1a83800),
                          vmulq_f32(v46, v45));
          LANES128(v46).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v46).n128_i8[8] =
              vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
          LANES128(v40).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v106, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                  .n64_u64[0];
          LANES128(v40).n128_u64[1] = LANES128(v40).n128_u64[0];
          v48 = vmlsq_f32(v47, v46, v43);
          LANES128(v46).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v106, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          LANES128(v49).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                  .n64_u64[0];
          LANES128(v50).n128_u64[0] = LANES128(v106).n128_u64[0];
          LANES128(v51).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          LANES128(v50).n128_u64[1] = LANES128(v46).n128_u64[0];
          *(int8x8_t*)&LANES128(v49).n128_i8[8] =
              vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
          *(int32x2_t*)&LANES128(v51).n128_i8[8] =
              vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v48).n128_u64[0]), 1);
          v52 = vmlaq_f32(vmulq_f32(v40, v48),
                          COERCE_AS(float32x4_t, GameData_1a83800),
                          vmulq_f32(v50, v49));
          LANES128(v49).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v106, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v46).n128_u64[1] = LANES128(v49).n128_u64[0];
          LANES128(v49).n128_u64[1] = LANES128(v106).n128_u64[0];
          LANES128(v53).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v53).n128_i8[8] =
              vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
          v54 =
              vmlsq_f32(vmlaq_f32(v52, COERCE_AS(float32x4_t, GameData_1a83800),
                                  vmulq_f32(v49, v51)),
                        v53, v46);
          LANES128(v53).n128_u64[0] = LANES128(v54).n128_u64[0];
          LANES128(v53).n128_u64[1] = LANES128(v54).n128_u32[2];
          v107 = v53;
          v39 = 0x1.8000000000000p+0f;
        }
        if (v7 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                    memory_order_relaxed);
        }
        v55 = *(_QWORD*)(v8 + 208);
        v99 = v39;
        v56 = *(_QWORD*)(v55 + 392);
        v57 = *(_QWORD*)(v55 + 400);
        if (v57 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v57 + 8), 1u,
                                    memory_order_relaxed);
          v58 = *(_DWORD*)(v56 + 11784);
          if (atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            std___1___shared_weak_count___release_weak_alt1(v57),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(float, "s0", "=w"));
          }
        }
        else {
          v58 = *(_DWORD*)(v56 + 11784);
        }
        v59 = 0x1.c000000000000p+0f;
        if ((unsigned int)(v58 - 2) <= 4) {
          v59 = GameData_1b9ac04[v58 - 2];
        }
        v61 = *(_QWORD*)(v6 + 216);
        v60 = *(_QWORD*)(v6 + 224);
        if (v60 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v60 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v61 != 0) {
          GameRoutine_e9f200(v61),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v63 = fmaxf(v62, 0x1.3333340000000p-1f);
          if ((*(_BYTE*)(v61 + 92) & (*(float*)(v61 + 88) < v63)) != 0) {
            v64 = *(float*)(v61 + 88);
          }
          else {
            v64 = v63;
          }
          if (v60 == 0) {
            goto LABEL_74;
          }
        }
        else {
          v64 = 0x1.0000000000000p-1f;
          if (v60 == 0) {
          LABEL_74:
            v66 = *(_QWORD*)(v110_.v110 + 216);
            v65 = *(_QWORD*)(v110_.v110 + 224);
            if (v65 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v65 + 8), 1u,
                                        memory_order_relaxed);
            }
            if (v66 != 0) {
              GameRoutine_e9f200(v66),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v68 = fmaxf(v67, 0x1.3333340000000p-1f);
              if ((*(_BYTE*)(v66 + 92) & (*(float*)(v66 + 88) < v68)) != 0) {
                v69 = *(float*)(v66 + 88);
              }
              else {
                v69 = v68;
              }
            }
            else {
              v69 = 0x1.0000000000000p-1f;
            }
            v70 = v59 * v64;
            if (v65 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              std___1___shared_weak_count___release_weak_alt1(v65),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
            }
            v71 = (float)(v70 + v69) + 0x1.99999a0000000p-4f;
            if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              std___1___shared_weak_count___release_weak_alt1(v7),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v71 = (float)(v70 + v69) + 0x1.99999a0000000p-4f;
            }
            v72 = *(_QWORD*)(v6 + 208);
            LANES128(v73).n128_u64[0] = LODWORD(v99);
            v74 = vmulq_f32(v106, COERCE_AS(float32x4_t, GameData_1a829d0));
            LANES128(v73).n128_u64[1] = LODWORD(v71);
            LANES128(v75).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v74, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                    .n64_u64[0];
            LANES128(v76).n128_u64[0] = LODWORD(v99);
            *(int8x8_t*)&LANES128(v75).n128_i8[8] =
                vqtbl1_s8(v74, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
            LANES128(v77).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                    .n64_u64[0];
            LANES128(v78).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            LANES128(v77).n128_u64[1] = LANES128(v77).n128_u64[0];
            LANES128(v76).n128_u64[1] = LANES128(v78).n128_u64[0];
            v79 = vmulq_f32(v76, v75);
            LANES128(v76).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v74, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            *(int32x2_t*)&LANES128(v76).n128_i8[8] = vdup_lane_s32(
                COERCE_AS(int32x2_t, LANES128(v74).n128_u64[0]), 1);
            LANES128(v73).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            LANES128(v78).n128_u64[1] = LANES128(v73).n128_u64[0];
            LANES128(v73).n128_u64[1] = LODWORD(v99);
            v80 = vmlaq_f32(
                vmlaq_f32(vmulq_f32(v74, v77),
                          COERCE_AS(float32x4_t, GameData_1a83800), v79),
                COERCE_AS(float32x4_t, GameData_1a83800), vmulq_f32(v73, v76));
            LANES128(v81).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v74, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v81).n128_i8[8] =
                vqtbl1_s8(v74, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
            LANES128(v74).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v106, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            v82 = vmlsq_f32(v80, v81, v78);
            LANES128(v81).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v106, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                    .n64_u64[0];
            LANES128(v83).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v82, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                    .n64_u64[0];
            LANES128(v84).n128_u64[0] = LANES128(v106).n128_u64[0];
            LANES128(v81).n128_u64[1] = LANES128(v81).n128_u64[0];
            LANES128(v85).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v82, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            LANES128(v84).n128_u64[1] = LANES128(v74).n128_u64[0];
            *(int8x8_t*)&LANES128(v83).n128_i8[8] =
                vqtbl1_s8(v82, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
            *(int32x2_t*)&LANES128(v85).n128_i8[8] = vdup_lane_s32(
                COERCE_AS(int32x2_t, LANES128(v82).n128_u64[0]), 1);
            v86 = vmlaq_f32(vmulq_f32(v81, v82),
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v84, v83));
            LANES128(v83).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v106, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            LANES128(v74).n128_u64[1] = LANES128(v83).n128_u64[0];
            LANES128(v83).n128_u64[1] = LANES128(v106).n128_u64[0];
            LANES128(v87).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v82, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v87).n128_i8[8] =
                vqtbl1_s8(v82, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
            v88 = vaddq_f32(
                v100,
                vmlsq_f32(vmlaq_f32(v86,
                                    COERCE_AS(float32x4_t, GameData_1a83800),
                                    vmulq_f32(v83, v85)),
                          v87, v74));
            *(_QWORD*)(v6 + 96) = LANES128(v88).n128_u64[0];
            *(_QWORD*)(v6 + 112) = LANES128(v88).n128_u64[0];
            v90 = *(_OWORD*)(v6 + 96);
            v89 = *(_OWORD*)(v6 + 112);
            *(_QWORD*)&v91 = *(_QWORD*)(v6 + 112);
            *((_QWORD*)&v90 + 1) = LANES128(v88).n128_u32[2];
            *((_QWORD*)&v91 + 1) = LANES128(v88).n128_u32[2];
            *(_OWORD*)(v6 + 96) = v90;
            *(_OWORD*)(v6 + 112) = v91;
            if (v72 != 0) {
              v101 = v91;
              *(_QWORD*)&v92 = (unsigned int)v89 | 0x4348000000000000LL;
              DWORD1(v89) = -1027080192;
              *((_QWORD*)&v92 + 1) =
                  LANES128_OF(vextq_s8(v88, v88, 8u)).n128_u32[0];
              *((_QWORD*)&v89 + 1) = *((_QWORD*)&v92 + 1);
              v115 = v89;
              *(_OWORD*)v116 = v92;
              GameRoutine_1085a10((void*)(&v112_.v112), v72 + 160, v116, &v115,
                                  0),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v91 = v101;
              DWORD1(v91) = HIDWORD(v112_.v112);
            }
            v93 = GameData_212ea58;
            *(_QWORD*)(v6 + 112) = v91;
            v94 = *(_OWORD*)(v6 + 112);
            *(_DWORD*)(v6 + 100) = DWORD1(v94);
            *((_QWORD*)&v94 + 1) = DWORD2(v91);
            *(_OWORD*)(v6 + 112) = v94;
            GameRoutine_e7bed0(v6, 1),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v95 = *(_QWORD*)(v6 + 304);
            *(_BYTE*)(v6 + 80) = 1;
            *(_DWORD*)(v6 + 132) = v22;
            *(_DWORD*)(v6 + 32) = v22;
            *(_QWORD*)(v6 + 296) = 0;
            *(_QWORD*)(v6 + 304) = 0;
            if (v95 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v95),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
            }
            GameRoutine_e7bed0(v6, 1),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            CmdBtlUnit_e7c6f0(v6, 1, 0x0.0p+0f),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v96 = *v93;
            v104_.v104 = v110_.v110;
            v104_.v105 = v110_.v111;
            if (v110_.v111 != 0) {
              atomic_fetch_add_explicit(
                  (atomic_ullong* volatile)(v110_.v111 + 16), 1u,
                  memory_order_relaxed);
            }
            v102_.v102 = v8;
            v102_.v103 = v7;
            if (v7 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                        memory_order_relaxed);
            }
            GameHr_e80600((_QWORD*)(v96 + 16), &v104_.v104, &v102_.v102,
                          (__int64)&v107, 0x0.0p+0f),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            if (v102_.v103 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v102_.v103),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
            }
            if (v104_.v105 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v104_.v105),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
            }
            goto LABEL_99;
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v60 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v60 + 16LL))(v60),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v60),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
        goto LABEL_74;
      }
    }
    v19 = 32;
    goto LABEL_33;
  }
  v2 = *(_QWORD*)(GameData_2203490 + 752);
  v3 = true;
  v4 = *(_QWORD*)(GameData_2203490 + 760);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                            memory_order_relaxed);
  v110_.v110 = 0;
  v110_.v111 = std___1___shared_weak_count_lock(v4),
  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
  v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v110_.v111 != 0) {
    v110_.v110 = v2;
    v3 = v2 == 0;
  }
  std___1___shared_weak_count___release_weak_alt1(v1),
      v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w"));
  v0 = GameData_2203490;
  v5 = *(_QWORD*)(GameData_2203490 + 888);
  if (v5 != 0) {
    goto LABEL_7;
  }
LABEL_102:
  v97 = v110_.v111;
  if (v110_.v111 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v110_.v111 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v97 + 16LL))(v97),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v97),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w"));
  }
}

__int64

game_cmdbtl_anonymous_ProcCmdBtlSeqCaptureComplete_SuccessPerformance1_closure_Invoke(
    __int64 result, __int64* a2, double a3, long double a4, long double a5,
    long double a6)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;

  v6 = *a2;
  v7 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  if (v6 != **(_QWORD**)(result + 8)) {
    *(_BYTE*)(v6 + 186) = 0;
    v8 = *(_QWORD*)(v6 + 216);
    if (v8 != 0) {
      v9 = *(__int64**)(v8 + 40);
      v10 = *((_DWORD*)v9 + 5);
      *((_DWORD*)v9 + 5) = v10 | 2;
      if (v10 != (v10 | 2)) {
        v11 = *v9;
        v12 = *(_QWORD*)(v11 + 8);
        if (v12 != 0) {
          v13 = *(_QWORD*)(v11 + 16);
          v14 = *(_QWORD*)(v12 + 8) == -1 || v13 == 0;
          if (!v14 && *(_QWORD*)(v12 + 8) != -1 &&
              (*(_BYTE*)(v11 + 61) & 1) == 0 && *(_DWORD*)(v11 + 64) != 1 &&
              (*(_BYTE*)(v13 + 342) & 1) != 0) {
            result = GameRoutine_1084940(v13, 0, 0.0, a4, a5, a6);
            *(_BYTE*)(*(_QWORD*)(v13 + 8) + 289LL) = 0;
          }
        }
      }
    }
  }
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    return std___1___shared_weak_count___release_weak(v7);
  }
  return result;
}

#pragma GCC visibility pop
