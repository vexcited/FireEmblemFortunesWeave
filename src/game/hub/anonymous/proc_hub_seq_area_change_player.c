#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_ceca80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d8cf60(_QWORD);
__int64 MapObjectModule_a7d120(_QWORD);
__int64 MapObjectModule_a7d220(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_hub_anonymous_ProcHubSeqAreaChangeBase_vtable[])();
extern __int64 (*game_hub_anonymous_ProcHubSeqAreaChangePlayer_vtable[])();
extern __int64 GameData_21f3cb8;
extern __int64 GameData_2212260;
__int64 ProcHubSeqAreaChangePlayer_Destructor(__int64 a1);
__int64 GameRoutine_caaee0(__int64 result, int, char);
__int64 GameRoutine_e18130(__int64 result);
__int64 GameRoutine_f6af20_alt1(_QWORD, _QWORD) __asm__("GameRoutine_f6af20");
__int64 HubCharacterNatives_cabfc0(__int64 result, char);
__int64 HubCharacterNatives_cac2c0(__int64 result, int);
__int64 HubCharacterNatives_caea10(__int64 result, int, char);
__int64 ObjectBuildCreate_c21360(__int64, __int64, __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_d523c0(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__n128 GameRoutine_f6af20(unsigned __int64*, unsigned int);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
bool GameRoutine_d6f600(__int64, int);
extern _DWORD GameData_1a82b60[4];
extern _DWORD GameData_1a83870[4];
extern _UNKNOWN* GameData_212d308;
extern _UNKNOWN* GameData_212d498;
extern __int64* GameData_212d458[7];
extern __int64 GameData_212c638;
extern __int64 GameData_212efb8[2];
extern __int64 GameData_21c9608;
extern __int64 GameData_21f3cc0;
extern __int64 GameData_21f3d10;
extern __int64 game_script_hub_g_frame_counter;
extern int* GameData_212d300;
extern int* GameData_212d490;
extern unsigned int GameData_1a82b60_alt1[4] __asm__("GameData_1a82b60");
float atan2f(_QWORD, long double, float);
long double DungeonRouteReport_f60e40(__int64);
void __attribute__((noreturn)) GameRoutine_8123d0();
void __attribute__((noreturn))
GameRoutine_8123d0_alt1(_QWORD) __asm__("GameRoutine_8123d0");
void game_zview_d12d30(__int64 result, int32x2_t*, char);
__int64 ProcHubSeqAreaChangePlayer_f691e0(__int64 a1);
__n128 ProcHubSeqAreaChangePlayer_f697f0(__int64 a1);
__int64 ProcHubSeqAreaChangePlayer_f69b00(__int64 a1);
bool ProcHubSeqAreaChangePlayer_f69c60();
void ProcHubSeqAreaChangePlayer_f6a230(__int64 a1);
void ProcHubSeqAreaChangePlayer_f6a760(__int64 a1);
float ProcHubSeqAreaChangePlayer_f6ad50_alt2(__int64 a1) __asm__(
    "ProcHubSeqAreaChangePlayer_f6ad50");
float ProcHubSeqAreaChangePlayer_Unknown3(__int64 a1);
__attribute__((swiftcall)) void game_hub_cdf420(PSEUDO_X8, __int64, __int64,
                                                float, float, float);
extern __int64 GameData_212dc60[2];
extern __int64 GameData_21f3ca8;
float ProcHubSeqAreaChangePlayer_f6ad50_alt1(_OWORD*) __asm__(
    "ProcHubSeqAreaChangePlayer_f6ad50");
__int64 ProcHubSeqAreaChangePlayer_f694d0();
__int64 ProcHubSeqAreaChangePlayer_f6a440();
__int64 game_d523c0_alt1(__int64) __asm__("game_d523c0");
float atan2f_alt1(float, float) __asm__("atan2f");
void game_f6af20(unsigned __int64*, unsigned int);
float ProcHubSeqAreaChangePlayer_f6ad50(_OWORD* a1);

__int64 ProcHubSeqAreaChangePlayer_f691e0(__int64 a1)
{
  const char* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v9;
  __int64 v10;
  unsigned __int8 explicit;
  int* v12;
  int v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  unsigned __int8 v18;
  int* v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  int v28;
  int v29;
  struct {
    _BYTE v30[21];
    char v31;
    char gap30_[26];
    __int64 v32;
  } v30_;

  if ((*(_BYTE*)(*(_QWORD*)GameData_212efb8[0] + 12LL) & 1) != 0) {
    v30_.v30[0] = 40;
    if (*(_DWORD*)(*(_QWORD*)GameData_212efb8[0] + 8LL) >= 2u) {
      *(_DWORD*)&v30_.v30[17] = 825241695;
      v1 = "Bg_GateDoor_A000_001";
    }
    else {
      *(_DWORD*)&v30_.v30[17] = 842018911;
      v1 = "Bg_GateDoor_A000_002";
    }
    v4 = *(_QWORD*)v1;
    v3 = *((_QWORD*)v1 + 1);
    v2 = 20;
    v30_.v31 = 0;
    *(_QWORD*)&v30_.v30[1] = v4;
    *(_QWORD*)&v30_.v30[9] = v3;
  }
  else {
    v2 = 0;
    *(_WORD*)v30_.v30 = 0;
  }
  v5 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL) +
               64LL);
  if (v5 != 0) {
    v6 = *(_QWORD*)(v5 + 96);
    if (v6 != 0 && *(_DWORD*)(v6 + 240) == 5) {
      v7 = (_QWORD*)(v5 + 120);
      while (1) {
        v7 = (_QWORD*)*v7;
        if (v7 == nullptr) {
          break;
        }
        if (*(_DWORD*)(v7[5] + 240LL) != 5) {
          return 1;
        }
      }
      v9 = ObjectBuildCreate_c21360(
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                                8LL) +
                     64LL),
          (__int64)&v30_.v30[1], v2);
      if (v9 != 0) {
        v10 = a1;
        explicit = atomic_load_explicit(
            (atomic_uchar* volatile)GameData_212d498, memory_order_acquire);
        v12 = GameData_212d490;
        if ((explicit & 1) == 0) {
          v30_.v32 = v9;
          v28 = __cxa_guard_acquire(GameData_212d498);
          v10 = a1;
          v12 = GameData_212d490;
          v9 = v30_.v32;
          if (v28 != 0) {
            *GameData_212d490 = wld_Crc32(0, "MapObjectModule", 0xFu);
            __cxa_guard_release(GameData_212d498);
            v10 = a1;
            v12 = GameData_212d490;
            v9 = v30_.v32;
          }
        }
        v13 = *v12;
        v14 = *(_QWORD*)(v9 + 512);
        v15 = v14;
        while (v15 != *(_QWORD*)(v9 + 504)) {
          v16 = *(_DWORD*)(v15 - 16);
          v15 -= 16;
          v14 -= 16;
          if (v16 == v13) {
            if (*(_QWORD*)(v9 + 512) != v14) {
              v17 = *(_QWORD*)(v14 + 8);
              goto LABEL_22;
            }
            break;
          }
        }
        v17 = 0;
      LABEL_22:
        *(_QWORD*)(v10 + 152) = v17;
        v18 = atomic_load_explicit((atomic_uchar* volatile)GameData_212d308,
                                   memory_order_acquire);
        v19 = GameData_212d300;
        if ((v18 & 1) == 0) {
          v30_.v32 = v9;
          v29 = __cxa_guard_acquire(GameData_212d308);
          v10 = a1;
          v19 = GameData_212d300;
          v9 = v30_.v32;
          if (v29 != 0) {
            *GameData_212d300 = wld_Crc32(0, "MapAnimModule", 0xDu);
            __cxa_guard_release(GameData_212d308);
            v10 = a1;
            v19 = GameData_212d300;
            v9 = v30_.v32;
          }
        }
        v20 = *v19;
        v21 = *(_QWORD*)(v9 + 512);
        v22 = v21;
        do {
          if (v22 == *(_QWORD*)(v9 + 504)) {
            goto LABEL_32;
          }
          v23 = *(_DWORD*)(v22 - 16);
          v22 -= 16;
          v21 -= 16;
        } while (v23 != v20);
        if (*(_QWORD*)(v9 + 512) == v21) {
        LABEL_32:
          *(_QWORD*)(v10 + 160) = 0;
          return 1;
        }
        v24 = *(_QWORD*)(v21 + 8);
        *(_QWORD*)(v10 + 160) = v24;
        v25 = *(_QWORD*)(v10 + 152);
        if (v24 != 0 && v25 != 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}

__int64 ProcHubSeqAreaChangePlayer_f694d0()
{

#pragma clang fp contract(off)
  __int64 v0;
  unsigned int v1;
  __int64 v2;
  unsigned int v3;
  unsigned int v4;
  float v5;
  __int64 v6;
  unsigned int v7;
  float32x4_t v8;
  float32x4_t v9;
  int8x16_t v10;
  int8x16_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  int8x16_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  int32x4_t v22;
  float32x4_t v23;
  float v24;
  float32x4_t v25;
  int8x16_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  __int64 result;
  float32x4_t v32;
  float v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  struct {
    __int64 v38;
    __int64 v39;
  } v38_;
  struct {
    _DWORD v40[5];
    unsigned __int32 v41;
    __int64 v42;
  } v40_;
  float32x4_t v43;

  if ((*(_BYTE*)(GameData_2212260 + 12) & 1) != 0) {
    GameRoutine_f6af20((unsigned __int64*)v40_.v40,
                       *(_DWORD*)(GameData_2212260 + 8));
    if ((*(_BYTE*)(GameData_2212260 + 12) & 1) != 0) {
      v0 = *(unsigned int*)(GameData_2212260 + 8);
      v1 = (unsigned int)v0 > 3 ? 3 : GameData_1a82b60[v0];
      GameRoutine_f6af20(LANES128(v43).n128_u64, v1);
      if ((*(_BYTE*)(GameData_2212260 + 12) & 1) != 0) {
        v35 = v43;
        v36 = *(float32x4_t*)v40_.v40;
        GameRoutine_f6af20((unsigned __int64*)v40_.v40,
                           *(_DWORD*)(GameData_2212260 + 8));
        if ((*(_BYTE*)(GameData_2212260 + 12) & 1) != 0) {
          v2 = *(unsigned int*)(GameData_2212260 + 8);
          v3 = (unsigned int)v2 > 3 ? 3 : GameData_1a82b60[v2];
          GameRoutine_f6af20(LANES128(v43).n128_u64, v3);
          if ((*(_BYTE*)(GameData_2212260 + 12) & 1) != 0) {
            v4 = *(_DWORD*)(GameData_2212260 + 8);
            v5 = 0x1.0000000000000p-1f;
            if (v4 < 2) {
              v5 = 0x1.8000000000000p+0f;
            }
            v33 = v5;
            v32 = v43;
            v34 = *(float32x4_t*)v40_.v40;
            GameRoutine_f6af20((unsigned __int64*)v40_.v40, v4);
            if ((*(_BYTE*)(GameData_2212260 + 12) & 1) != 0) {
              v6 = *(unsigned int*)(GameData_2212260 + 8);
              v7 = (unsigned int)v6 > 3 ? 3 : GameData_1a82b60[v6];
              GameRoutine_f6af20(LANES128(v43).n128_u64, v7);
              if ((*(_BYTE*)(GameData_2212260 + 12) & 1) != 0) {
                v8 = vsubq_f32(v35, v36);
                v9 = vsubq_f32(v32, v34);
                v10 = vmulq_f32(v8, v8);
                v11 = vmulq_f32(v9, v9);
                LANES128(v10).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v10, v10, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
                        .n64_u64[0];
                LANES128(v11).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v11, v11, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
                        .n64_u64[0];
                LANES128(v10).n128_u64[0] =
                    LANES64_OF(
                        vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
                        .n64_u64[0];
                LANES128(v11).n128_u64[0] =
                    LANES64_OF(
                        vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
                        .n64_u64[0];
                LANES128(v10).n128_u64[1] = LANES128(v10).n128_u64[0];
                LANES128(v11).n128_u64[1] = LANES128(v11).n128_u64[0];
                v12 = vrsqrteq_f32(v10);
                v13 = vrsqrteq_f32(v11);
                v14 = vmulq_f32(v12, vrsqrtsq_f32(v12, vmulq_f32(v10, v12)));
                v15 = vmulq_f32(v13, vrsqrtsq_f32(v13, vmulq_f32(v11, v13)));
                v16 = vmulq_f32(
                    v8, vmulq_f32(v14, vrsqrtsq_f32(v14, vmulq_f32(v10, v14))));
                LANES128(v14).n128_u64[0] = 0x4100000041000000LL;
                LANES128(v14).n128_u64[1] = 0x4100000041000000LL;
                v17 = vsubq_f32(
                    vaddq_f32(v36,
                              vbicq_s8(vmulq_f32(v16, v14), vceqzq_f32(v10))),
                    vaddq_f32(
                        v34,
                        vmulq_n_f32(
                            vbicq_s8(vmulq_f32(
                                         v9, vmulq_f32(
                                                 v15, vrsqrtsq_f32(
                                                          v15, vmulq_f32(
                                                                   v11, v15)))),
                                     vceqzq_f32(v11)),
                            v33)));
                v18 = vmulq_f32(v17, v17);
                LANES128(v18).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v18, v18, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
                        .n64_u64[0];
                LANES128(v18).n128_u64[0] =
                    LANES64_OF(
                        vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
                        .n64_u64[0];
                LANES128(v18).n128_u64[1] = LANES128(v18).n128_u64[0];
                v19 = vrsqrteq_f32(v18);
                v20 = vmulq_f32(v19, vrsqrtsq_f32(v19, vmulq_f32(v18, v19)));
                v21 = vmulq_f32(v18, v20);
                v22 = vceqzq_f32(v18);
                v23 = vmulq_f32(v17, vmulq_f32(v20, vrsqrtsq_f32(v20, v21)));
                v24 = 0x1.0000000000000p-1f;
                if (*(_DWORD*)(GameData_2212260 + 8) < 2u) {
                  v24 = 0x1.8000000000000p+0f;
                }
                v25 = vsubq_f32(v43, *(float32x4_t*)v40_.v40);
                v26 = vmulq_f32(v25, v25);
                LANES128(v26).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v26, v26, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
                        .n64_u64[0];
                LANES128(v26).n128_u64[0] =
                    LANES64_OF(
                        vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
                        .n64_u64[0];
                LANES128(v26).n128_u64[1] = LANES128(v26).n128_u64[0];
                v27 = vrsqrteq_f32(v26);
                v28 = vmulq_f32(v27, vrsqrtsq_f32(v27, vmulq_f32(v26, v27)));
                v29 = vmulq_n_f32(
                    vbicq_s8(
                        vmulq_f32(
                            v25, vmulq_f32(v28, vrsqrtsq_f32(
                                                    v28, vmulq_f32(v26, v28)))),
                        vceqzq_f32(v26)),
                    v24);
                LANES128(v25).n128_u64[0] = 0x4000000000000000LL;
                LANES128(v25).n128_u64[1] = 0x4000000000000000LL;
                v30 = vaddq_f32(vaddq_f32(*(float32x4_t*)v40_.v40, v29), v25);
                LANES128(v25).n128_u64[0] = 0x4040000040400000LL;
                LANES128(v25).n128_u64[1] = 0x4040000040400000LL;
                v37 = vsubq_f32(v30, vbicq_s8(vmulq_f32(v23, v25), v22));
                ProcHubSeqAreaChangePlayer_f6ad50_alt1(&v43);
                v40_.v42 = 0x4220000000000000LL;
                *(_QWORD*)v40_.v40 = LANES128(v37).n128_u64[0];
                v40_.v40[2] = LANES128(v37).n128_u32[2];
                *(_QWORD*)&v40_.v40[3] = LANES128(v43).n128_u64[0];
                v40_.v41 = LANES128(v43).n128_u32[2];
                game_hub_cdf420((void*)(&v38_.v38),
                                *(_QWORD*)GameData_212dc60[0],
                                (__int64)v40_.v40, 0x1.0000000000000p-1f,
                                0x1.0000000000000p+0f, 0x1.0000000000000p+0f);
                result = v38_.v39;
                if (v38_.v39 != 0) {
                  return std___1___shared_weak_count___release_weak(v38_.v39);
                }
                return result;
              }
            }
          }
        }
      }
    }
  }
  GameRoutine_8123d0();
}

__n128 ProcHubSeqAreaChangePlayer_f697f0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v5;
  unsigned int v6;
  float v7;
  float v8;
  float32x4_t v10;
  float32x4_t v11;
  __int64 v12;
  float32x4_t v13;
  int8x16_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  __int128 v18;
  __n128* v19;
  __n128 result;
  float32x4_t v21;
  float32x4_t v22;
  float v23;
  float32x4_t v24;
  float32x4_t v25;

  GameRoutine_caaee0(*(_QWORD*)(a1 + 168), 2, 0);
  v2 = *(_QWORD*)(a1 + 168);
  v3 = *(_QWORD*)(v2 + 56);
  if (*(_DWORD*)(v2 + 1112) == 2 && v3 != 0) {
    if ((*(_BYTE*)(GameData_2212260 + 12) & 1) == 0 ||
        (GameRoutine_f6af20(LANES128(v25).n128_u64,
                            *(_DWORD*)(GameData_2212260 + 8)),
         (*(_BYTE*)(GameData_2212260 + 12) & 1) == 0) ||
        ((unsigned int)(v5 = *(unsigned int*)(GameData_2212260 + 8)) > 3
             ? (v6 = 3)
             : (v6 = GameData_1a82b60[v5]),
         GameRoutine_f6af20(LANES128(v24).n128_u64, v6),
         (*(_BYTE*)(GameData_2212260 + 12) & 1) == 0)) {
      GameRoutine_8123d0();
    }
    if (*(_DWORD*)(GameData_2212260 + 8) >= 2u) {
      v7 = 0x1.0000000000000p-1f;
    }
    else {
      v7 = 0x1.8000000000000p+0f;
    }
    v8 = *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 168) + 24LL) + 16LL) +
                   364LL);
    if (*(_BYTE*)(v3 + 44) != 1 || *(_DWORD*)(v3 + 40) != 3) {
      *(_DWORD*)(v3 + 48) = 3;
      *(_BYTE*)(v3 + 52) = 1;
    }
    v10 = v24;
    v11 = v25;
    if ((*(_BYTE*)(v3 + 128) & 1) == 0 && (*(_BYTE*)(v3 + 129) & 1) != 0) {
      v22 = v25;
      v23 = v7;
      v21 = v24;
      GameRoutine_e18130(v3 + 32);
      v10 = v21;
      v11 = v22;
      v7 = v23;
    }
    v12 = *(_QWORD*)(*(_QWORD*)(v3 + 56) + 24LL);
    if (v12 != 0) {
      v13 = vsubq_f32(v10, v11);
      *(_BYTE*)(v12 + 20) = 0;
      v14 = vmulq_f32(v13, v13);
      LANES128(v14).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
              .n64_u64[0];
      LANES128(v14).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
              .n64_u64[0];
      LANES128(v14).n128_u64[1] = LANES128(v14).n128_u64[0];
      v15 = vrsqrteq_f32(v14);
      v16 = vmulq_f32(v15, vrsqrtsq_f32(v15, vmulq_f32(v14, v15)));
      v17 = vaddq_f32(
          v11,
          vmulq_n_f32(
              vbicq_s8(
                  vmulq_f32(v13, vmulq_f32(v16, vrsqrtsq_f32(
                                                    v16, vmulq_f32(v14, v16)))),
                  vceqzq_f32(v14)),
              v7));
      *(_QWORD*)(v12 + 32) = LANES128(v17).n128_u64[0];
      v18 = *(_OWORD*)(v12 + 32);
      *((_QWORD*)&v18 + 1) = LANES128(v17).n128_u32[2];
      *(float*)(v12 + 48) = v8 * 0x1.8000000000000p+0f;
      *(_OWORD*)(v12 + 32) = v18;
    }
  }
  v19 = (__n128*)GameData_21c9608;
  *(_QWORD*)(GameData_21c9608 + 176) = 0;
  LANES128(v19[10]).n128_u8[0] = 0;
  LANES128(v19[12]).n128_u32[0] = 0;
  result = v19[11];
  LANES128(result).n128_u64[1] = 0;
  v19[11] = COERCE_AS(__n128, LANES128(result).n128_u64[0]);
  *(_DWORD*)(a1 + 184) = 0;
  *(_BYTE*)(a1 + 188) = 1;
  return result;
}

__int64 ProcHubSeqAreaChangePlayer_f69b00(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned int v3;
  float32x4_t v4;
  int8x16_t v5;
  float32x4_t v6;
  float32x4_t v7;
  float32x4_t v8;
  float32x4_t v9;
  float v10;
  __int64 v11;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;

  if ((*(_BYTE*)(GameData_2212260 + 12) & 1) == 0 ||
      (v13 =
           *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 168) + 24LL) +
                                      16LL) +
                           560LL),
       game_f6af20(LANES128(v15).n128_u64, *(_DWORD*)(GameData_2212260 + 8)),
       (*(_BYTE*)(GameData_2212260 + 12) & 1) == 0)) {
    GameRoutine_8123d0();
  }
  v2 = *(unsigned int*)(GameData_2212260 + 8);
  if ((unsigned int)v2 > 3) {
    v3 = 3;
  }
  else {
    v3 = GameData_1a82b60[v2];
  }
  game_f6af20(LANES128(v14).n128_u64, v3);
  v4 = vsubq_f32(v14, v15);
  v5 = vmulq_f32(v4, v4);
  LANES128(v5).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v5, v5, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
          .n64_u64[0];
  LANES128(v5).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
          .n64_u64[0];
  LANES128(v5).n128_u64[1] = LANES128(v5).n128_u64[0];
  v6 = vrsqrteq_f32(v5);
  v7 = vmulq_f32(v6, vrsqrtsq_f32(v6, vmulq_f32(v5, v6)));
  v8 = vmulq_f32(v4, vmulq_f32(v7, vrsqrtsq_f32(v7, vmulq_f32(v5, v7))));
  LANES128(v7).n128_u64[0] = 0x4100000041000000LL;
  LANES128(v7).n128_u64[1] = 0x4100000041000000LL;
  v9 = vsubq_f32(v13,
                 vaddq_f32(v15, vbicq_s8(vmulq_f32(v8, v7), vceqzq_f32(v5))));
  v10 = atan2f_alt1(LANES128(v9).n128_f32[0], LANES128(v9).n128_f32[2]);
  v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 168) + 24LL) + 24LL);
  *(_QWORD*)(v11 + 80) = 0x100000000LL;
  *(_BYTE*)(v11 + 25) = 0;
  *(_QWORD*)(v11 + 32) = 0;
  *(_QWORD*)(v11 + 37) = 0;
  *(_BYTE*)(v11 + 48) = 0;
  *(_BYTE*)(v11 + 64) = 0;
  *(_DWORD*)(v11 + 32) = 1086918608;
  *(float*)(v11 + 80) = v10 + 0x1.921fb60000000p+1f;
  *(_BYTE*)(v11 + 96) = 1;
  *(_BYTE*)(v11 + 36) = 1;
  return game_d523c0_alt1(*(_QWORD*)(*(_QWORD*)(v11 + 16) + 488LL));
}

bool ProcHubSeqAreaChangePlayer_f69c60()
{
  __int64 v0;
  int v1;

  if ((*(_BYTE*)(GameData_2212260 + 12) & 1) == 0) {
    GameRoutine_8123d0();
  }
  v0 = *(unsigned int*)(GameData_2212260 + 8);
  if ((unsigned int)v0 > 3) {
    v1 = 1;
  }
  else {
    v1 = GameData_1a83870[v0];
  }
  return GameRoutine_d6f600(GameData_21f3cc0, v1);
}

void ProcHubSeqAreaChangePlayer_f6a230(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  long double v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  unsigned int v10;
  float v11;
  float32x4_t v13;
  float32x4_t v14;
  __int64 v15;
  float32x4_t v16;
  int8x16_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  __int128 v22;
  __int64 v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;

  *(_QWORD*)(*(_QWORD*)(*GameData_212d458[0] + 88) + 16LL) =
      *(_QWORD*)(*(_QWORD*)(*GameData_212d458[0] + 88) + 8LL);
  v2 = *(_QWORD*)(GameData_21f3d10 + 200);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 8);
    v4 = *(_QWORD*)(v2 + 16);
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
      v5 = DungeonRouteReport_f60e40(v3);
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v4 + 16LL))(v4, v5);
        std___1___shared_weak_count___release_weak_alt1(v4);
      }
    }
    else {
      DungeonRouteReport_f60e40(v3);
    }
  }
  v6 = *(_QWORD*)(a1 + 168);
  v7 = *(_QWORD*)(v6 + 56);
  if (*(_DWORD*)(v6 + 1112) == 2 && v7 != 0) {
    if ((*(_BYTE*)(GameData_2212260 + 12) & 1) == 0 ||
        (GameRoutine_f6af20(LANES128(v27).n128_u64,
                            *(_DWORD*)(GameData_2212260 + 8)),
         (*(_BYTE*)(GameData_2212260 + 12) & 1) == 0)) {
      GameRoutine_8123d0();
    }
    v9 = *(unsigned int*)(GameData_2212260 + 8);
    if ((unsigned int)v9 > 3) {
      v10 = 3;
    }
    else {
      v10 = GameData_1a82b60[v9];
    }
    GameRoutine_f6af20(LANES128(v26).n128_u64, v10);
    v11 = *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 168) + 24LL) + 16LL) +
                    364LL);
    if (*(_BYTE*)(v7 + 44) != 1 || *(_DWORD*)(v7 + 40) != 3) {
      *(_DWORD*)(v7 + 48) = 3;
      *(_BYTE*)(v7 + 52) = 1;
    }
    v13 = v26;
    v14 = v27;
    if ((*(_BYTE*)(v7 + 128) & 1) == 0 && (*(_BYTE*)(v7 + 129) & 1) != 0) {
      v24 = v26;
      v25 = v27;
      GameRoutine_e18130(v7 + 32);
      v13 = v24;
      v14 = v25;
    }
    v15 = *(_QWORD*)(*(_QWORD*)(v7 + 56) + 24LL);
    if (v15 != 0) {
      v16 = vsubq_f32(v13, v14);
      *(_BYTE*)(v15 + 20) = 0;
      v17 = vmulq_f32(v16, v16);
      LANES128(v17).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v17, v17, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0])))
              .n64_u64[0];
      LANES128(v17).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0])))
              .n64_u64[0];
      LANES128(v17).n128_u64[1] = LANES128(v17).n128_u64[0];
      v18 = vrsqrteq_f32(v17);
      v19 = vmulq_f32(v18, vrsqrtsq_f32(v18, vmulq_f32(v17, v18)));
      v20 = vmulq_f32(v16,
                      vmulq_f32(v19, vrsqrtsq_f32(v19, vmulq_f32(v17, v19))));
      LANES128(v19).n128_u64[0] = 0x4100000041000000LL;
      LANES128(v19).n128_u64[1] = 0x4100000041000000LL;
      v21 = vaddq_f32(v14, vbicq_s8(vmulq_f32(v20, v19), vceqzq_f32(v17)));
      *(_QWORD*)(v15 + 32) = LANES128(v21).n128_u64[0];
      v22 = *(_OWORD*)(v15 + 32);
      *((_QWORD*)&v22 + 1) = LANES128(v21).n128_u32[2];
      *(float*)(v15 + 48) = v11 * 0x1.8000000000000p+0f;
      *(_OWORD*)(v15 + 32) = v22;
    }
    v23 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 168) + 24LL) + 24LL);
    if (*(_BYTE*)(v23 + 96) == 1) {
      *(_BYTE*)(v23 + 96) = 0;
    }
    *(_BYTE*)(v23 + 25) = 0;
  }
}

__int64 ProcHubSeqAreaChangePlayer_f6a440()
{

#pragma clang fp contract(off)
  __int64 v0;
  unsigned int v1;
  __int64 v2;
  unsigned int v3;
  unsigned int v4;
  float v5;
  __int64 v6;
  float32x4_t v7;
  int8x16_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  int8x16_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  int8x16_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  unsigned int v22;
  float32x4_t v23;
  int8x16_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  __int64 result;
  float32x4_t v31;
  float32x4_t v32;
  float v33;
  float32x4_t v34;
  int8x16_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  struct {
    __int64 v39;
    __int64 v40;
  } v39_;
  struct {
    _DWORD v41[5];
    unsigned __int32 v42;
    __int64 v43;
  } v41_;
  float32x4_t v44;

  if ((*(_BYTE*)(GameData_2212260 + 12) & 1) != 0) {
    GameRoutine_f6af20((unsigned __int64*)v41_.v41,
                       *(_DWORD*)(GameData_2212260 + 8));
    if ((*(_BYTE*)(GameData_2212260 + 12) & 1) != 0) {
      v0 = *(unsigned int*)(GameData_2212260 + 8);
      v1 = (unsigned int)v0 > 3 ? 3 : GameData_1a82b60[v0];
      GameRoutine_f6af20(LANES128(v44).n128_u64, v1);
      if ((*(_BYTE*)(GameData_2212260 + 12) & 1) != 0) {
        v34 = v44;
        v36 = *(float32x4_t*)v41_.v41;
        GameRoutine_f6af20((unsigned __int64*)v41_.v41,
                           *(_DWORD*)(GameData_2212260 + 8));
        if ((*(_BYTE*)(GameData_2212260 + 12) & 1) != 0) {
          v2 = *(unsigned int*)(GameData_2212260 + 8);
          v3 = (unsigned int)v2 > 3 ? 3 : GameData_1a82b60[v2];
          GameRoutine_f6af20(LANES128(v44).n128_u64, v3);
          if ((*(_BYTE*)(GameData_2212260 + 12) & 1) != 0) {
            v4 = *(_DWORD*)(GameData_2212260 + 8);
            v5 = 0x1.0000000000000p-1f;
            if (v4 < 2) {
              v5 = 0x1.8000000000000p+0f;
            }
            v33 = v5;
            v31 = v44;
            v32 = *(float32x4_t*)v41_.v41;
            GameRoutine_f6af20((unsigned __int64*)v41_.v41, v4);
            if ((*(_BYTE*)(GameData_2212260 + 12) & 1) != 0) {
              v6 = *(unsigned int*)(GameData_2212260 + 8);
              v7 = vsubq_f32(v34, v36);
              v8 = vmulq_f32(v7, v7);
              LANES128(v8).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v8, v8, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v8).n128_u64[0] =
                  LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v8).n128_u64[1] = LANES128(v8).n128_u64[0];
              v9 = vrsqrteq_f32(v8);
              v10 = vmulq_f32(v9, vrsqrtsq_f32(v9, vmulq_f32(v8, v9)));
              v11 = vmulq_f32(
                  v7, vmulq_f32(v10, vrsqrtsq_f32(v10, vmulq_f32(v8, v10))));
              LANES128(v10).n128_u64[0] = 0x4100000041000000LL;
              LANES128(v10).n128_u64[1] = 0x4100000041000000LL;
              v12 =
                  vaddq_f32(v36, vbicq_s8(vmulq_f32(v11, v10), vceqzq_f32(v8)));
              v13 = vsubq_f32(v31, v32);
              v14 = vmulq_f32(v13, v13);
              LANES128(v14).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v14).n128_u64[0] =
                  LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v14).n128_u64[1] = LANES128(v14).n128_u64[0];
              v15 = vrsqrteq_f32(v14);
              v16 = vmulq_f32(v15, vrsqrtsq_f32(v15, vmulq_f32(v14, v15)));
              v17 = vsubq_f32(
                  v12,
                  vaddq_f32(
                      v32,
                      vmulq_n_f32(
                          vbicq_s8(
                              vmulq_f32(
                                  v13, vmulq_f32(
                                           v16, vrsqrtsq_f32(
                                                    v16, vmulq_f32(v14, v16)))),
                              vceqzq_f32(v14)),
                          v33)));
              v18 = vmulq_f32(v17, v17);
              LANES128(v18).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v19).n128_u64[0] =
                  LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v19).n128_u64[1] = LANES128(v19).n128_u64[0];
              v20 = vrsqrteq_f32(v19);
              v21 = vmulq_f32(v20, vrsqrtsq_f32(v20, vmulq_f32(v19, v20)));
              v37 = vmulq_f32(
                  v17, vmulq_f32(v21, vrsqrtsq_f32(v21, vmulq_f32(v19, v21))));
              if ((unsigned int)v6 > 3) {
                v22 = 3;
              }
              else {
                v22 = GameData_1a82b60[v6];
              }
              v35 = vceqzq_f32(v19);
              GameRoutine_f6af20(LANES128(v44).n128_u64, v22);
              v23 = vsubq_f32(v44, *(float32x4_t*)v41_.v41);
              v24 = vmulq_f32(v23, v23);
              LANES128(v24).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v24).n128_u64[0] =
                  LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v24).n128_u64[1] = LANES128(v24).n128_u64[0];
              v25 = vrsqrteq_f32(v24);
              v26 = vmulq_f32(v25, vrsqrtsq_f32(v25, vmulq_f32(v24, v25)));
              v27 = vmulq_f32(
                  v23, vmulq_f32(v26, vrsqrtsq_f32(v26, vmulq_f32(v24, v26))));
              LANES128(v26).n128_u64[0] = 0x4100000041000000LL;
              LANES128(v26).n128_u64[1] = 0x4100000041000000LL;
              LANES128(v28).n128_u64[0] = 0x4000000000000000LL;
              LANES128(v28).n128_u64[1] = 0x4000000000000000LL;
              v29 = vaddq_f32(
                  vaddq_f32(*(float32x4_t*)v41_.v41,
                            vbicq_s8(vmulq_f32(v27, v26), vceqzq_f32(v24))),
                  v28);
              LANES128(v28).n128_u64[0] = 0x4040000040400000LL;
              LANES128(v28).n128_u64[1] = 0x4040000040400000LL;
              v38 = vsubq_f32(v29, vbicq_s8(vmulq_f32(v37, v28), v35));
              ProcHubSeqAreaChangePlayer_f6ad50_alt1(&v44);
              v41_.v43 = 0x4220000000000000LL;
              *(_QWORD*)v41_.v41 = LANES128(v38).n128_u64[0];
              v41_.v41[2] = LANES128(v38).n128_u32[2];
              *(_QWORD*)&v41_.v41[3] = LANES128(v44).n128_u64[0];
              v41_.v42 = LANES128(v44).n128_u32[2];
              game_hub_cdf420((void*)(&v39_.v39), GameData_21f3ca8,
                              (__int64)v41_.v41, 0x1.cccccc0000000p+0f,
                              0x1.0000000000000p+0f, 0x1.0000000000000p+0f);
              result = v39_.v40;
              if (v39_.v40 != 0) {
                return std___1___shared_weak_count___release_weak(v39_.v40);
              }
              return result;
            }
          }
        }
      }
    }
  }
  GameRoutine_8123d0();
}

void ProcHubSeqAreaChangePlayer_f6a760(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned int v3;
  float v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  float32x4_t v8;
  int8x16_t v9;
  float32x4_t v10;
  float32x4_t v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  float32x4_t* v15;
  __int64 v16;
  __int64 v17;
  float32x4_t v18;
  int8x16_t v19;
  __int64 v20;
  unsigned __int32 v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;

  if ((*(_BYTE*)(GameData_2212260 + 12) & 1) == 0 ||
      (GameRoutine_f6af20(LANES128(v25).n128_u64,
                          *(_DWORD*)(GameData_2212260 + 8)),
       (*(_BYTE*)(GameData_2212260 + 12) & 1) == 0) ||
      ((unsigned int)(v2 = *(unsigned int*)(GameData_2212260 + 8)) > 3
           ? (v3 = 3)
           : (v3 = GameData_1a82b60[v2]),
       GameRoutine_f6af20(LANES128(v24).n128_u64, v3),
       (*(_BYTE*)(GameData_2212260 + 12) & 1) == 0)) {
    GameRoutine_8123d0();
  }
  v4 = 0x1.0000000000000p-1f;
  v5 = *(_QWORD*)(a1 + 168);
  if (*(_DWORD*)(GameData_2212260 + 8) < 2u) {
    v4 = 0x1.8000000000000p+0f;
  }
  v6 = *(__int64**)(v5 + 1136);
  v7 = *(__int64**)(v5 + 1144);
  v8 = vsubq_f32(v24, v25);
  v9 = vmulq_f32(v8, v8);
  LANES128(v9).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
          .n64_u64[0];
  LANES128(v9).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
          .n64_u64[0];
  LANES128(v9).n128_u64[1] = LANES128(v9).n128_u64[0];
  v10 = vrsqrteq_f32(v9);
  v11 = vmulq_f32(v10, vrsqrtsq_f32(v10, vmulq_f32(v9, v10)));
  v23 = vaddq_f32(
      v25,
      vmulq_n_f32(
          vbicq_s8(vmulq_f32(v8, vmulq_f32(v11, vrsqrtsq_f32(
                                                    v11, vmulq_f32(v9, v11)))),
                   vceqzq_f32(v9)),
          v4));
  if (v6 != v7) {
    v12 = GameData_212d458[0];
    do {
      v13 = v6[1];
      if (v13 != 0) {
        v14 = std___1___shared_weak_count_lock(v13);
        if (v14 != 0) {
          v15 = (float32x4_t*)*v6;
          v16 = v14;
          if (*v6 != 0) {
            HubCharacterNatives_caea10(*v6, 1024, 0);
            HubCharacterNatives_cac2c0((__int64)v15, 0);
            v17 = *(_QWORD*)(*v12 + 120);
            if ((*(_BYTE*)(v17 + 12) & 1) == 0) {
              *(_BYTE*)(v17 + 12) = 1;
            }
            game_zview_d12d30(*(_QWORD*)(LANES128(v15[1]).n128_u64[1] + 16),
                              (int32x2_t*)&v23, 1);
            v18 = vsubq_f32(
                v15[79],
                *(float32x4_t*)(*(_QWORD*)(LANES128(v15[1]).n128_u64[1] + 16) +
                                560LL));
            v19 = vmulq_f32(v18, v18);
            LANES128(v19).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v19, v19, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
                    .n64_u64[0];
            if (LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
                    .n64_f32[0] > 0x1.0000000000000p-23f) {
              v20 = *(_QWORD*)(*v12 + 120);
              if ((*(_BYTE*)(v20 + 12) & 1) == 0) {
                *(_BYTE*)(v20 + 12) = 1;
              }
            }
            v21 = LANES128(v23).n128_u32[2];
            LANES128(v15[79]).n128_u64[0] = LANES128(v23).n128_u64[0];
            v22 = v15[79];
            LANES128(v22).n128_u64[1] = v21;
            v15[79] = v22;
            HubCharacterNatives_cabfc0((__int64)v15, 1);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
            std___1___shared_weak_count___release_weak_alt1(v16);
          }
        }
      }
      v6 += 2;
    } while (v6 != v7);
  }
}

float ProcHubSeqAreaChangePlayer_f6ad50(_OWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned int v3;
  unsigned int v4;
  __int64 v5;
  unsigned int v6;
  float v7;
  float32x4_t v8;
  int8x16_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  int8x16_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float result;
  unsigned __int64 v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;

  if ((*(_BYTE*)(GameData_2212260 + 12) & 1) != 0) {
    game_f6af20(LANES128(v24).n128_u64, *(_DWORD*)(GameData_2212260 + 8));
    if ((*(_BYTE*)(GameData_2212260 + 12) & 1) != 0) {
      v2 = *(unsigned int*)(GameData_2212260 + 8);
      v3 = (unsigned int)v2 > 3 ? 3 : GameData_1a82b60[v2];
      game_f6af20(LANES128(v23).n128_u64, v3);
      if ((*(_BYTE*)(GameData_2212260 + 12) & 1) != 0) {
        v4 = *(_DWORD*)(GameData_2212260 + 8);
        v20 = v23;
        v21 = v24;
        game_f6af20(LANES128(v24).n128_u64, v4);
        if ((*(_BYTE*)(GameData_2212260 + 12) & 1) != 0) {
          v5 = *(unsigned int*)(GameData_2212260 + 8);
          if ((unsigned int)v5 > 3) {
            v6 = 3;
          }
          else {
            v6 = GameData_1a82b60[v5];
          }
          v7 = 0x1.0000000000000p-1f;
          if (v4 < 2) {
            v7 = 0x1.8000000000000p+0f;
          }
          v8 = vsubq_f32(v20, v21);
          v9 = vmulq_f32(v8, v8);
          LANES128(v9).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(float32x2_t,
                                LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v9).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v9).n128_u64[1] = LANES128(v9).n128_u64[0];
          v10 = vrsqrteq_f32(v9);
          v11 = vmulq_f32(v10, vrsqrtsq_f32(v10, vmulq_f32(v9, v10)));
          v22 = vaddq_f32(
              v21,
              vmulq_n_f32(
                  vbicq_s8(
                      vmulq_f32(
                          v8, vmulq_f32(v11,
                                        vrsqrtsq_f32(v11, vmulq_f32(v9, v11)))),
                      vceqzq_f32(v9)),
                  v7));
          game_f6af20(LANES128(v23).n128_u64, v6);
          v12 = vsubq_f32(v23, v24);
          v13 = vmulq_f32(v12, v12);
          LANES128(v13).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v13).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v13).n128_u64[1] = LANES128(v13).n128_u64[0];
          v14 = vrsqrteq_f32(v13);
          v15 = vmulq_f32(v14, vrsqrtsq_f32(v14, vmulq_f32(v13, v14)));
          v16 = vmulq_f32(
              v12, vmulq_f32(v15, vrsqrtsq_f32(v15, vmulq_f32(v13, v15))));
          LANES128(v15).n128_u64[0] = 0x4100000041000000LL;
          LANES128(v15).n128_u64[1] = 0x4100000041000000LL;
          v17 = vsubq_f32(v22, vaddq_f32(v24, vbicq_s8(vmulq_f32(v16, v15),
                                                       vceqzq_f32(v13))));
          result = (float)(atan2f_alt1(LANES128(v17).n128_f32[0],
                                       LANES128(v17).n128_f32[2]) *
                           0x1.ca5dc20000000p+5f) +
                   0x1.6800000000000p+7f;
          LODWORD(v19) = 0;
          *((float*)&v19 + 1) = result;
          *a1 = v19;
          return result;
        }
      }
    }
  }
  GameRoutine_8123d0();
}

__int64 ProcHubSeqAreaChangePlayer_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqAreaChangePlayer_vtable;
  v2 = *(_QWORD*)(a1 + 168);
  if (v2 != 0) {
    GameRoutine_ceca80(*(_QWORD*)(v2 + 24), 0x20000, 0);
    GameRoutine_ceca80(*(_QWORD*)(*(_QWORD*)(a1 + 168) + 24LL), 4096, 0);
  }
  GameRoutine_d8cf60(GameData_21f3cb8);
  v3 = *(_QWORD*)(a1 + 152);
  if (v3 != 0) {
    *(_BYTE*)(v3 + 156) = 0;
    MapObjectModule_a7d120(v3);
    *(_BYTE*)(v3 + 157) = 0;
    MapObjectModule_a7d220(v3);
  }
  v4 = *(_QWORD*)(a1 + 176);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqAreaChangeBase_vtable;
  if (*(_BYTE*)(GameData_2212260 + 12) == 1) {
    *(_BYTE*)(GameData_2212260 + 12) = 0;
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

float ProcHubSeqAreaChangePlayer_Unknown3(__int64 a1)
{

#pragma clang fp contract(off)
  float result;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  if (*(_BYTE*)(a1 + 188) == 1) {
    result = *(float*)(a1 + 184) +
             (float)((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                             0x1.0aef000000000p+4f) /
                     0x1.f400000000000p+9f);
    *(float*)(a1 + 184) = result;
  }
  return result;
}

#pragma GCC visibility pop
