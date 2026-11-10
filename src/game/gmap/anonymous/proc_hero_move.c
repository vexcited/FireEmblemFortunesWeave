#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13412c0(_QWORD, _QWORD, float);
__int64 UnitActor_81a540(_QWORD, _QWORD, _QWORD);
__int64 UnitActor_81ab40(_QWORD, float, float);
extern _UNKNOWN* GameData_212ceb8;
extern __int128* GameData_212c680;
extern __int128 GameData_1a83090;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float GameRoutine_135bea0(void);
long double GameRoutine_752d30(_QWORD, _QWORD);
__int64 ProcHeroMove_Unknown2(__int64 a1);

__int64 ProcHeroMove_Unknown2(__int64 a1)
{
  float v2;
  float v3;
  __int64 v4;
  float v5;
  float v6;
  int v7;
  int v8;
  float32x4_t v9;
  __int64 v10;
  float32x4_t v11;
  __int64 result;
  float32x4_t** v13;
  int16x4_t v14;
  __int128 v15;
  float32x4_t v16;
  long double v17;
  float32x4_t** v18;
  float32x4_t v19;
  __int128 v20;
  __int64 v21;
  unsigned __int8* v22;
  unsigned int v23;
  __int128 v24;
  float32x4_t v25;

  v2 = *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 160LL);
  v3 = GameRoutine_135bea0();
  v4 = game_ProcGameSkipView_instance_;
  v5 = *(float*)(a1 + 208) + (float)(v2 * v3);
  v6 = *(float*)(a1 + 160);
  if (v6 < v5) {
    v5 = *(float*)(a1 + 160);
  }
  *(float*)(a1 + 208) = v5;
  if (v4 != 0 && *(_BYTE*)(v4 + 152) == 3) {
    v7 = *(_DWORD*)(v4 + 156);
    v8 = (v7 & 8) != 0 ? 2 : 3;
    if ((v8 & v7) == 0) {
      v5 = v6;
      *(float*)(a1 + 208) = v6;
    }
  }
  v9 = *(float32x4_t*)(a1 + 176);
  v10 = *(_QWORD*)(a1 + 152);
  v11 = vmulq_n_f32(vsubq_f32(*(float32x4_t*)(a1 + 192), v9), v5 / v6);
  LANES128(v11).n128_u32[3] = 0;
  v25 = vaddq_f32(v9, v11);
  result = GameRoutine_13412c0(v10, &v25, 0x1.0000000000000p+0);
  if (*(float*)(a1 + 208) >= *(float*)(a1 + 160)) {
    v13 = *(float32x4_t***)(a1 + 152);
    LANES64(v14).n64_u64[0] =
        LANES64_OF(vmovn_s32(vceqq_f32((*v13)[2], *((float32x4_t*)v13 + 3))))
            .n64_u64[0];
    if ((LANES64(v14).n64_u8[0] & 1) != 0 &&
        (LANES64(v14).n64_u8[2] & 1) != 0 &&
        (LANES64(v14).n64_u8[4] & 1) != 0) {
      v15 = GameData_1a83090;
      v25 = COERCE_AS(float32x4_t, GameData_1a83090);
    }
    else {
      DWORD1(v15) = 0;
      HIDWORD(v15) = 0;
      v16 =
          vsubq_f32(COERCE_AS(float32x4_t, 0), *(float32x4_t*)GameData_212c680);
      if ((float)(vmuls_lane_f32(LANES128(v16).n128_f32[2], v16, 2) +
                  (float)(LANES128(v16).n128_f32[0] *
                          LANES128(v16).n128_f32[0])) < 0x1.0000000000000p-4) {
      LABEL_18:
        v18 = *(float32x4_t***)(a1 + 152);
        v19 = vsubq_f32(*((float32x4_t*)v18 + 3), (*v18)[2]);
        v18[8] = (float32x4_t*)LANES128(v19).n128_u64[0];
        v20 = *((_OWORD*)v18 + 4);
        *((_QWORD*)&v20 + 1) = LANES128(v19).n128_u32[2];
        *((_OWORD*)v18 + 4) = v20;
        GameRoutine_13412c0(*(_QWORD*)(a1 + 152), **(_QWORD**)(a1 + 152) + 32LL,
                            0x1.0000000000000p+0);
        result = UnitActor_81a540(*(_QWORD*)(a1 + 152) + 112LL, 119788728,
                                  GameData_212ceb8);
        v21 = *(_QWORD*)(*(_QWORD*)(a1 + 152) + 376LL);
        if (v21 != 0) {
          *(_DWORD*)(*(_QWORD*)(v21 + 304) + 12LL) = 1065353216;
        }
        v22 = *(unsigned __int8**)(a1 + 16);
        if (v22 != nullptr) {
          v23 = *v22;
          if (v23 <= 0x10 && ((1 << v23) & 0x1CE00) != 0) {
            *(_WORD*)(a1 + 136) |= 0x80u;
          }
        }
        *(_WORD*)(a1 + 136) |= 8u;
        return result;
      }
      LODWORD(v15) = LANES128(v16).n128_u32[0];
      DWORD2(v15) = LANES128(v16).n128_u32[2];
      v25 = COERCE_AS(float32x4_t, GameData_1a83090);
    }
    v24 = v15;
    v17 = GameRoutine_752d30(&v25, &v24);
    UnitActor_81ab40(v13 + 14, *(float*)&v17 * 0x1.ca5dc00000000p+5,
                     -0x1.0000000000000p+0);
    goto LABEL_18;
  }
  return result;
}

#pragma GCC visibility pop
