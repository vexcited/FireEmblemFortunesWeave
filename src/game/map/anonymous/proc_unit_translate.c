#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterBuilder_1084780(void);
__int64 Cursor_734a80(__int64, __int64*);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_7435e0();
__int64 Image_72a260(_QWORD);
__int64 Image_72b4a0(_QWORD);
__int64 Image_72b6c0(_QWORD);
__int64 UnitActor_81ba20(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitAction_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitTranslate_vtable[])();
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 GameData_21ca300;
extern __int64 GameData_21cd100;
extern __int64 game_ProcGameSkipView_instance_;
float Unit_6c7fa0(__int64, __int64);
void GameRoutine_6c7cb0(__int64, __int64, __int64);
__int64 ProcUnitTranslate_Destructor(__int64 a1);
__int64 ProcUnitTranslate_Unknown2(__int64 result);

__int64 ProcUnitTranslate_Destructor(__int64 a1)
{
  __int64 v1;
  int v3;
  int v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  float v11;
  __int128 v12;
  __int128 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v19;
  unsigned int v20;
  __int128 v21;

  v1 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)a1 = game_map_anonymous_ProcUnitTranslate_vtable;
  if (v1 != 0) {
    v4 = *(_DWORD*)(a1 + 160);
    v3 = *(_DWORD*)(a1 + 164);
    *(_BYTE*)(v1 + 584) = v4;
    *(_BYTE*)(v1 + 585) = v3;
    GameRoutine_6c7cb0(v1, (unsigned int)(char)v4, (unsigned int)(char)v3);
    v5 = *(_QWORD*)(v1 + 8);
    if (v5 != 0) {
      v6 = *(char*)(v5 + 584);
      if ((v6 & 0x80000000) == 0) {
        v7 = *(char*)(v5 + 585);
        if ((v7 & 0x80000000) == 0) {
          v8 = *(_DWORD*)(v5 + 592);
          v9 = v6 | 0x100;
          v10 = v7 | 0x100;
          v11 = (float)(unsigned int)(v8 - 1) * 2.5f;
          if (v8 <= 0) {
            v11 = 0.0f;
          }
          *(_QWORD*)&v12 = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)v9 * 5.0f) + 2.5f) +
                      -0x1.4000000000000p+10f) +
              v11);
          v19 = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)v10 * 5.0f) + 2.5f) +
                      -0x1.4000000000000p+10f) +
              v11);
          *(float*)&v20 = (float)((float)((float)((float)v9 * 5.0f) + 2.5f) +
                                  -0x1.4000000000000p+10f) +
                          v11;
          *((_QWORD*)&v12 + 1) = v19;
          v21 = v12;
          *(_QWORD*)&v13 = __PAIR64__(
              COERCE_UNSIGNED_INT(Unit_6c7fa0(v5, (__int64)&v21)), v20);
          *((_QWORD*)&v13 + 1) = v19;
          v21 = v13;
          Cursor_734a80(v1 + 48, (__int64*)&v21);
          UnitActor_81ba20(v1);
        }
      }
      if (*(_QWORD*)(v1 + 264) != 0) {
        CharacterBuilder_1084780();
      }
    }
    v14 = GameData_21ca300;
    v15 = *(_QWORD*)(GameData_21ca300 + 96);
    Image_72b4a0(v15);
    Image_72b6c0(v15);
    Image_72a260(*(_QWORD*)(v14 + 152));
  }
  *(_QWORD*)a1 = game_map_anonymous_ProcUnitAction_vtable;
  v16 = GameData_21cd100;
  v17 = *(_DWORD*)(GameData_21cd100 + 16) - 1;
  *(_DWORD*)(GameData_21cd100 + 16) = v17;
  if (v17 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v16 + 8) + 8LL))(v16 + 8);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcUnitTranslate_Unknown2(__int64 result)
{

#pragma clang fp contract(off)
  float v1;
  float32x4_t* v2;
  int v3;
  int v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float32x4_t v10;
  __int64 v11;
  float32x4_t v12;
  unsigned __int8* v13;
  unsigned int v14;
  bool v15;
  int v16;
  float32x4_t v18;

  v1 = *(float*)(result + 172);
  v2 = (float32x4_t*)result;
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3 &&
      (((v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v4 = 2)
           : (v4 = 3),
       (v4 & v3) == 0)) {
    *(float*)(result + 168) = v1;
  }
  else {
    v5 = *(float*)(result + 168);
    if ((float)(0x1.e000000000000p+5f /
                (float)*(int*)(*game_g_frame_clock_ptr[0] + 476)) <=
        0x0.0p+0f) {
      v6 = 0x1.0000000000000p+0f;
    }
    else {
      v6 = 0x1.e000000000000p+5f /
           (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
    }
    result = GameRoutine_7435e0();
    v7 = 0x1.0000000000000p+1f;
    v8 = LANES128(v2[10]).n128_f32[3];
    if ((result & 1) == 0) {
      v7 = 0x1.0000000000000p+0f;
    }
    v9 = v5 + (float)(v7 * v6);
    if (v1 < v9) {
      v9 = v1;
    }
    LANES128(v2[10]).n128_f32[2] = v9;
    if (v9 < v8) {
      v10 = v2[11];
      v11 = LANES128(v2[9]).n128_u64[1] + 48;
      v12 = vmulq_n_f32(
          vsubq_f32(v2[12], v10),
          (float)((float)(v9 / v8) + 0x0.0p+0f) +
              (float)((float)(v9 *
                              (float)((float)(0x1.0000000000000p+0f -
                                              (float)((float)((float)(v8 - v9) *
                                                              (float)(v8 -
                                                                      v9)) /
                                                      (float)(v8 * v8))) -
                                      (float)((float)(v9 / v8) + 0x0.0p+0f))) /
                      v8));
      LANES128(v12).n128_u32[3] = 0;
      v18 = vaddq_f32(v10, v12);
      return Cursor_734a80(v11, (__int64*)&v18);
    }
  }
  v13 = (unsigned __int8*)LANES128(v2[1]).n128_u64[0];
  if (v13 != nullptr) {
    v14 = *v13;
    v15 = v14 > 0x10;
    v16 = (1 << v14) & 0x1CE00;
    if (!v15 && v16 != 0) {
      LANES128(v2[8]).n128_u16[4] |= 0x80u;
    }
  }
  LANES128(v2[8]).n128_u16[4] |= 8u;
  return result;
}

#pragma GCC visibility pop
