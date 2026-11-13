#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1079580(_QWORD, _QWORD, float, float, float);
__int64 GameRoutine_1084940(_QWORD, _QWORD, float);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212d4d8;
extern __int64 GameData_22356f0;
extern __int64 GameData_22356f8;
extern __int64 GameData_2235708;
extern int* GameData_212d4d0;
__int64 MapCharacter_9da660(__int64 a1);
__int64 MapCharacter_9daac0(__int64 result, unsigned int a2);
__int64 game_map_MapCharacter_Create_lambda0_Invoke(__int64 a1, float* a2);
__int64 game_map_MapCharacter_SetForce_lambda0_Invoke(__int64 result,
                                                      __int64 a2);
__attribute__((swiftcall)) void GameRoutine_622ac0(PSEUDO_X8, _QWORD);
__int64 CharacterAppearance_10735d0(__int64);
__int64 CharacterBuilder_1083840(__int64 result);
__int64 CharacterBuilder_1083e90(_QWORD*, __int64);
__int64 GameRoutine_10784f0(__int64, int, __int64);
__int64 GameRoutine_10aa280(__int64, __int64, __int64, float);
__int64 GameRoutine_a7c6a0(__int64 result, __int64);
__int64 GameRoutine_a867a0(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_character_1084940(__int64 result, char, float);
__int64 game_character_CharacterAppearance_Setup(unsigned __int64, char**);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern __int128 GameData_1a83610;
extern __int64 (*GameData_1fb95f8[])();
extern __int64 (*GameData_1fb9668[])();
extern __int64 (*GameData_1fb96f8[])();
extern __int64 (*GameData_20076d8[])();
extern __int64 (*GameData_2007758[])();
extern __int64* GameData_212d3c8[3];
extern __int64 GameData_22400f8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
float CharacterAnimator_1079580(__int64, int, long double, float, float);
__int64 MapCharacter_9da6e0(__int64 a1, char** a2, int a3);
__int64 MapCharacter_9da8e0(__int64 result, float a2);
void game_map_MapCharacter_Create_lambda0_Invoke_9dad40(__int64 a1, __int64* a2,
                                                        double a3, double a4);
__int64 wld_Crc32_alt1(int, unsigned __int8*,
                       unsigned __int64) __asm__("wld_Crc32");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");

__int64 MapCharacter_9da660(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;

  v1 = *(_QWORD*)(a1 + 16);
  if (v1 == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(v1 + 392);
  v3 = *(_QWORD*)(v1 + 400);
  if (v3 == 0) {
    return *(_QWORD*)(v2 + 168);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                            memory_order_relaxed);
  result = *(_QWORD*)(v2 + 168);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v5 = result;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
    return v5;
  }
  return result;
}

__int64 MapCharacter_9da6e0(__int64 a1, char** a2, int a3)
{

#pragma clang fp contract(off)
  int v6;
  int v7;
  unsigned __int64 v8;
  __int128 v9;
  _BOOL8 v10;
  _QWORD* v11;
  unsigned __int64 v12;
  _QWORD* v13;
  __int64 v19;
  _QWORD* v20;
  struct {
    _QWORD v22[4];
    _QWORD* v23;
  } v22_;
  struct {
    unsigned __int64 v24;
    _QWORD* v25;
  } v24_;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v7 = (v6 & 8) != 0 ? 2 : 3;
    if ((v7 & v6) == 0) {
      goto LABEL_13;
    }
  }
  if (game_ProcFadeView_instance_ == 0) {
    goto LABEL_14;
  }
  v8 = game_ProcFadeView_instance_ +
       ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ + 480)
        << 6);
  if (*(float*)(v8 + 172) == *(float*)(v8 + 168)) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)(v8 + 160) + 16LL))(v8 + 160);
  }
  else {
    v9 = *(_OWORD*)(v8 + 208);
  }
  if (*((float*)&v9 + 3) == 0x1.0000000000000p+0f &&
      LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                   (_QWORD*)(*(_QWORD*)(v8 + 160) + 16LL))(v8 + 160,
                                                           *((float*)&v9 + 3)))
              .n128_f32[3] == 0x1.0000000000000p+0f) {
  LABEL_13:
    v10 = false;
  }
  else {
  LABEL_14:
    v10 =
        GameData_22400f8 == 0 || *(unsigned __int8*)(GameData_22400f8 + 8) != 2;
  }
  if (*(_QWORD*)(a1 + 8) != 0) {
    GameRoutine_a867a0(a1 + 8);
    *(_QWORD*)(a1 + 16) = 0;
    *(_QWORD*)(a1 + 24) = 0;
    *(_BYTE*)(a1 + 32) = 9;
  }
  v11 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 11832, 16, 0);
  v11[2] = 0;
  v12 = (unsigned __int64)(v11 + 3);
  v13 = v11;
  *v11 = GameData_212d3c8[0] + 2;
  v11[1] = 0;
  CharacterAppearance_10735d0((__int64)(v11 + 3));
  v24_.v24 = v12;
  v24_.v25 = v13;
  game_character_CharacterAppearance_Setup(v12, a2);
  v22_.v22[2] = v10;
  v22_.v22[0] = GameData_1fb95f8;
  v22_.v22[1] = a1;
  v22_.v23 = v22_.v22;
  *(_QWORD*)(a1 + 8) =
      GameRoutine_10784f0((__int64)&v24_.v24, a3, (__int64)v22_.v22);
  if (v22_.v23 == v22_.v22) {
    v19 = 32;
    goto LABEL_23;
  }
  if (v22_.v23 != nullptr) {
    v19 = 40;
  LABEL_23:
    (*(void (**)(__int64))(*v22_.v23 + v19))((__int64)v22_.v23);
  }
  v20 = v24_.v25;
  if (v24_.v25 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)(v24_.v25 + 1),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(_QWORD*))(*v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak(v20);
  }
  return a1;
}

__int64 MapCharacter_9da8e0(__int64 result, float a2)
{
  float32x4_t* v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float v13;
  float32x4_t v14;
  float32x4_t v15;
  int16x4_t v16;
  __int64 v17;
  unsigned int v18;
  float32x4_t v19;
  float32x4_t v20;
  _QWORD v21[2];

  v2 = *(float32x4_t**)(result + 8);
  if (v2 != nullptr) {
    v3 = (float)(a2 * 0.5f) +
         (float)(roundf((float)(a2 * 0.5f) * 0x1.45f3060000000p-3f) *
                 -0x1.921fb60000000p+2f);
    if (v3 < -0x1.921fb60000000p+0f) {
      v4 = -0x1.0000000000000p+0f;
    }
    else {
      v4 = 0x1.0000000000000p+0f;
    }
    v5 = -0x1.921fb60000000p+1f - v3;
    if (v3 >= -0x1.921fb60000000p+0f) {
      v5 = v3;
    }
    if (v3 > 0x1.921fb60000000p+0f) {
      v6 = 0x1.921fb60000000p+1f - v3;
    }
    else {
      v6 = v5;
    }
    if (v3 > 0x1.921fb60000000p+0f) {
      v7 = -0x1.0000000000000p+0f;
    }
    else {
      v7 = v4;
    }
    LANES128(v8).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 0x3F80000000000000LL),
                             COERCE_AS(float32x2_t, 0x3F80000000000000LL)))
            .n64_u64[0];
    LANES128(v8).n128_u64[1] = LANES128(v8).n128_u64[0];
    v9 = vrsqrteq_f32(v8);
    v10 = vmulq_f32(v9, vrsqrtsq_f32(v9, vmulq_f32(v8, v9)));
    v11 = vbicq_s8(
        vmulq_f32(vmulq_f32(v10, vrsqrtsq_f32(v10, vmulq_f32(v8, v10))),
                  COERCE_AS(float32x4_t, GameData_1a83610)),
        vceqzq_f32(v8));
    LANES128(v10).n128_f32[0] = v6 * v6;
    v12 = vmulq_n_f32(
        v11,
        v6 *
            (float)((float)((float)-(
                                float)(*(float*)((char*)((__int128*)0x10LL) +
                                                 (_QWORD)GameData_212c190) -
                                       (float)((float)(*(float*)((char*)((
                                                                     _UNKNOWN**)0x8LL) +
                                                                 (_QWORD)
                                                                     GameData_212c190 +
                                                                 4) +
                                                       (float)((float)-(
                                                                   float)(*(float*)((char*)((
                                                                                        _UNKNOWN**)0x8LL) +
                                                                                    (_QWORD)
                                                                                        GameData_212c190) -
                                                                          (float)((float)(*((float*)
                                                                                                GameData_212c190 +
                                                                                            1) -
                                                                                          (float)(*(float*)
                                                                                                      GameData_212c190 *
                                                                                                  (float)(v6 *
                                                                                                          v6))) *
                                                                                  (float)(v6 *
                                                                                          v6))) *
                                                               (float)(v6 *
                                                                       v6))) *
                                               (float)(v6 * v6))) *
                            (float)(v6 * v6)) +
                    0x1.0000000000000p+0f));
    v13 =
        v7 *
        (float)((float)((float)-(
                            float)(*(float*)((char*)((__int128*)0x10LL) +
                                             (_QWORD)GameData_212c188) -
                                   (float)((float)(*(float*)((char*)((
                                                                 _UNKNOWN**)0x8LL) +
                                                             (_QWORD)
                                                                 GameData_212c188 +
                                                             4) +
                                                   (float)((float)-(
                                                               float)(*(float*)((char*)((
                                                                                    _UNKNOWN**)0x8LL) +
                                                                                (_QWORD)
                                                                                    GameData_212c188) -
                                                                      (float)((float)(*((float*)
                                                                                            GameData_212c188 +
                                                                                        1) -
                                                                                      (float)(*(float*)
                                                                                                  GameData_212c188 *
                                                                                              LANES128(
                                                                                                  v10)
                                                                                                  .n128_f32
                                                                                                      [0])) *
                                                                              LANES128(
                                                                                  v10)
                                                                                  .n128_f32
                                                                                      [0])) *
                                                           LANES128(v10)
                                                               .n128_f32[0])) *
                                           LANES128(v10).n128_f32[0])) *
                        LANES128(v10).n128_f32[0]) +
                0x1.0000000000000p+0f);
    v14 = v12;
    LANES128(v14).n128_f32[3] = v13;
    v20 = v14;
    v15 = v2[21];
    LANES64(v16).n64_u64[0] =
        LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v15, v12)))).n64_u64[0];
    if ((LANES64(v16).n64_u8[0] & 1) != 0 ||
        (LANES64(v16).n64_u8[2] & 1) != 0 ||
        (LANES64(v16).n64_u8[4] & 1) != 0 || LANES128(v15).n128_f32[3] != v13) {
      v17 = result;
      LANES128(v2[21]).n128_u64[0] = LANES128(v12).n128_u64[0];
      LANES128(v2[21]).n128_f32[3] = v13;
      LANES128(v2[21]).n128_u32[2] = LANES128(v12).n128_u32[2];
      LANES128(v2[18]).n128_u32[2] |= 1u;
      GameRoutine_622ac0((void*)(v21), &v20);
      v18 = v21[1];
      LANES128(v2[20]).n128_u64[0] = v21[0];
      v19 = v2[20];
      LANES128(v19).n128_u64[1] = v18;
      v2[20] = v19;
      return v17;
    }
  }
  return result;
}

__int64 MapCharacter_9daac0(__int64 result, unsigned int a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64** v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;

  v2 = *(_QWORD*)(result + 16);
  if (v2 == 0) {
    goto LABEL_33;
  }
  v5 = *(_QWORD*)(v2 + 392);
  v4 = *(_QWORD*)(v2 + 400);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v6 = result;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
      result = v6;
    }
  }
  v7 = *(_QWORD*)(v5 + 11608);
  v8 = GameData_22356f8 == 0 || GameData_2235708 == 0;
  if (v8 || ((v9 = GameData_22356f8 - 1,
              (GameData_22356f8 & (GameData_22356f8 - 1)) == 0)
                 ? (v10 = v9 & (int)a2)
             : GameData_22356f8 <= (unsigned __int64)(int)a2
                 ? (v10 = (int)a2 % (unsigned __int64)GameData_22356f8)
                 : (v10 = (int)a2),
             (v11 = *(__int64***)(GameData_22356f0 + 8 * v10)) == nullptr)) {
    if (*(_QWORD*)(v7 + 5112) != 0) {
      goto LABEL_32;
    }
    goto LABEL_33;
  }
  v12 = *v11;
  if (*v11 == nullptr) {
  LABEL_31:
    if (*(_QWORD*)(v7 + 5112) != 0) {
      goto LABEL_32;
    }
    goto LABEL_33;
  }
  if ((GameData_22356f8 & v9) == 0) {
    while (1) {
      v14 = v12[1];
      if (v14 == a2) {
        if (*((_DWORD*)v12 + 4) == a2) {
          goto LABEL_34;
        }
      }
      else if ((v14 & v9) != v10) {
        goto LABEL_31;
      }
      v12 = (__int64*)*v12;
      if (v12 == nullptr) {
        goto LABEL_31;
      }
    }
  }
  while (1) {
    v13 = v12[1];
    if (v13 == a2) {
      break;
    }
    if (v13 >= GameData_22356f8) {
      v13 %= (unsigned __int64)GameData_22356f8;
    }
    if (v13 != v10) {
      goto LABEL_31;
    }
  LABEL_19:
    v12 = (__int64*)*v12;
    if (v12 == nullptr) {
      goto LABEL_31;
    }
  }
  if (*((_DWORD*)v12 + 4) != a2) {
    goto LABEL_19;
  }
LABEL_34:
  if (*(_QWORD*)(v7 + 8LL * *((int*)v12 + 5)) != 0) {
  LABEL_32:
    v15 = result;
    GameRoutine_1079580(*(_QWORD*)(*(_QWORD*)(result + 16) + 72LL), a2, -1.0,
                        -1.0, 1.0);
    result = v15;
  }
LABEL_33:
  *(_DWORD*)(result + 28) = a2;
  return result;
}

void game_map_MapCharacter_Create_lambda0_Invoke_9dad40(__int64 a1, __int64* a2,
                                                        double a3, double a4)
{
  __int64 v4;
  __int64 v5;
  float v7;
  __int64 v8;
  float32x4_t* v9;
  float32x4_t v10;
  float32x4_t v11;
  int8x16_t v12;
  float32x4_t v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int128 v19;
  _QWORD* v20;
  char v21;
  __int64 v22;
  float v23;
  int v24;
  __int64 v25;
  int v26;
  __int64 v27;
  long double v28;
  int* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64** v44;
  __int64* v45;
  unsigned __int64 v46;
  __int64 v47;
  float v48;
  struct {
    _BYTE v49[32];
    _BYTE* v50;
  } v49_;
  struct {
    _QWORD v51[4];
    _QWORD* v52;
  } v51_;

  v4 = *a2;
  v5 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(v5 + 16) = *a2;
  if (v4 == 0) {
    v23 = *(float*)(v5 + 36);
  LABEL_28:
    v36 = *(_DWORD*)(v5 + 28);
    v25 = v5 + 28;
    v24 = v36;
    *(float*)(v25 + 8) = v23;
    goto LABEL_29;
  }
  v7 = *(float*)(v5 + 24);
  v8 = *(_QWORD*)(v4 + 392);
  *(float*)(v4 + 336) = v7;
  if (v8 != 0) {
    v9 = *(float32x4_t**)(v4 + 8);
    *(float*)&a4 =
        *(float*)(v8 + 40) +
        (float)((float)(0x1.0000000000000p+0f - *(float*)(v8 + 40)) * v7);
    v10 = vdupq_lane_s32(*(int32x2_t*)&a4, 0);
    LANES128(v10).n128_u32[3] = 0;
    v11 = vsubq_f32(v9[22], v10);
    v12 = vmulq_f32(v11, v11);
    LANES128(v12).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
            .n64_u64[0];
    if (__builtin_islessgreater(
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
                .n64_f32[0],
            0x0.0p+0f)) {
      LANES128(v9[22]).n128_u32[0] = LODWORD(a4);
      LANES128(v9[22]).n128_u32[1] = LODWORD(a4);
      v13 = v9[22];
      LANES128(v9[18]).n128_u32[2] |= 1u;
      LANES128(v13).n128_u64[1] = LODWORD(a4);
      v9[22] = v13;
      v8 = *(_QWORD*)(v4 + 392);
    }
    v14 = *(__int64**)(v4 + 528);
    v15 = *(__int64**)(v4 + 536);
    if (v14 != v15) {
      v48 = *(float*)(v8 + 44) +
            (float)((float)(0x1.0000000000000p+0f - *(float*)(v8 + 44)) * v7);
      do {
        v16 = *v14++;
        v17 = *(_DWORD*)(v16 + 128);
        v18 = *(_QWORD*)v16;
        *(float*)(v16 + 112) = v48;
        *(float*)(v16 + 116) = v48;
        v19 = *(_OWORD*)(v16 + 112);
        *(_DWORD*)(v16 + 128) = v17 | 0x20;
        *((_QWORD*)&v19 + 1) = LODWORD(v48);
        *(_OWORD*)(v16 + 112) = v19;
        GameRoutine_a7c6a0(v18, v16);
      } while (v14 != v15);
    }
    CharacterBuilder_1083840(v4);
  }
  v20 = *(_QWORD**)(v5 + 16);
  *(float*)(v5 + 24) = v7;
  if (v20 == nullptr) {
    v26 = *(_DWORD*)(v5 + 28);
    v25 = v5 + 28;
    v24 = v26;
  LABEL_29:
    v29 = (int*)v25;
    goto LABEL_30;
  }
  v21 = *(_BYTE*)(v5 + 32);
  v51_.v51[0] = GameData_1fb96f8;
  v51_.v52 = v51_.v51;
  LOBYTE(v51_.v51[1]) = v21;
  CharacterBuilder_1083e90(v20, (__int64)v51_.v51);
  if (v51_.v52 == v51_.v51) {
    v22 = 32;
  }
  else {
    if (v51_.v52 == nullptr) {
      goto LABEL_17;
    }
    v22 = 40;
  }
  (*(void (**)(__int64))(*v51_.v52 + v22))((__int64)v51_.v52);
LABEL_17:
  v23 = *(float*)(v5 + 36);
  v27 = *(_QWORD*)(v5 + 16);
  *(_BYTE*)(v5 + 32) = v21;
  if (v27 == 0) {
    goto LABEL_28;
  }
  game_character_1084940(v27, 0, v23);
  v29 = (int*)(v5 + 28);
  v24 = *(_DWORD*)(v5 + 28);
  v30 = *(_QWORD*)(v5 + 16);
  *(float*)(v5 + 36) = v23;
  if (v30 == 0) {
    goto LABEL_30;
  }
  v32 = *(_QWORD*)(v30 + 392);
  v31 = *(_QWORD*)(v30 + 400);
  if (v31 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
      std___1___shared_weak_count___release_weak(v31);
    }
  }
  v33 = *(_QWORD*)(v32 + 11608);
  if (GameData_22356f8 == 0 || GameData_2235708 == 0 ||
      ((v34 = GameData_22356f8 - 1,
        (GameData_22356f8 & (GameData_22356f8 - 1)) == 0)
           ? (v35 = v34 & v24)
       : GameData_22356f8 <= (unsigned __int64)v24
           ? (v35 = v24 % (unsigned __int64)GameData_22356f8)
           : (v35 = v24),
       (v44 = *(__int64***)(GameData_22356f0 + 8 * v35)) == nullptr ||
           (v45 = *v44, *v44 == nullptr))) {
  LABEL_71:
    if (*(_QWORD*)(v33 + 5112) == 0) {
      goto LABEL_30;
    }
    goto LABEL_72;
  }
  if ((GameData_22356f8 & v34) == 0) {
    while (1) {
      v47 = v45[1];
      if (v47 == v24) {
        if (*((_DWORD*)v45 + 4) == v24) {
          goto LABEL_73;
        }
      }
      else if ((v47 & v34) != v35) {
        goto LABEL_71;
      }
      v45 = (__int64*)*v45;
      if (v45 == nullptr) {
        goto LABEL_71;
      }
    }
  }
  while (1) {
    v46 = v45[1];
    if (v46 == v24) {
      break;
    }
    if (v46 >= GameData_22356f8) {
      v46 %= (unsigned __int64)GameData_22356f8;
    }
    if (v46 != v35) {
      goto LABEL_71;
    }
  LABEL_61:
    v45 = (__int64*)*v45;
    if (v45 == nullptr) {
      goto LABEL_71;
    }
  }
  if (*((_DWORD*)v45 + 4) != v24) {
    goto LABEL_61;
  }
LABEL_73:
  if (*(_QWORD*)(v33 + 8LL * *((int*)v45 + 5)) != 0) {
  LABEL_72:
    LODWORD(v28) = COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
    CharacterAnimator_1079580(*(_QWORD*)(*(_QWORD*)(v5 + 16) + 72LL), v24, v28,
                              -0x1.0000000000000p+0f, 0x1.0000000000000p+0f);
  }
LABEL_30:
  *v29 = v24;
  if (*(_BYTE*)(a1 + 16) == 1) {
    if (*(float*)(v4 + 348) != 0x0.0p+0f) {
      *(_DWORD*)(v4 + 348) = 0;
      LODWORD(v51_.v51[1]) = 0;
      v51_.v51[0] = GameData_20076d8;
      v51_.v52 = v51_.v51;
      CharacterBuilder_1083e90((_QWORD*)v4, (__int64)v51_.v51);
      if (v51_.v52 == v51_.v51) {
        v37 = 32;
      LABEL_36:
        (*(void (**)(__int64))(*v51_.v52 + v37))((__int64)v51_.v52);
      }
      else if (v51_.v52 != nullptr) {
        v37 = 40;
        goto LABEL_36;
      }
      LODWORD(v51_.v51[1]) = 0;
      v51_.v52 = v51_.v51;
      v51_.v51[0] = GameData_2007758;
      CharacterBuilder_1083e90((_QWORD*)v4, (__int64)v51_.v51);
      if (v51_.v52 == v51_.v51) {
        v38 = 32;
      LABEL_41:
        (*(void (**)(__int64))(*v51_.v52 + v38))((__int64)v51_.v52);
      }
      else if (v51_.v52 != nullptr) {
        v38 = 40;
        goto LABEL_41;
      }
    }
    v39 = *(_QWORD*)(v4 + 608);
    v40 = *(_QWORD*)(v4 + 616);
    if (v40 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 16), 1u,
                                memory_order_relaxed);
    }
    v41 = *(_QWORD*)(v4 + 624);
    v49_.v50 = nullptr;
    v51_.v51[0] = GameData_1fb9668;
    v51_.v51[1] = v39;
    v51_.v51[2] = v40;
    v51_.v51[3] = v41;
    v51_.v52 = v51_.v51;
    GameRoutine_10aa280(0, (__int64)v51_.v51, (__int64)v49_.v49,
                        0x1.0000000000000p-1f);
    if (v49_.v50 == v49_.v49) {
      v42 = 32;
    LABEL_48:
      (*(void (**)(__int64))(*(_QWORD*)v49_.v50 + v42))((__int64)v49_.v50);
    }
    else if (v49_.v50 != nullptr) {
      v42 = 40;
      goto LABEL_48;
    }
    if (v51_.v52 == v51_.v51) {
      v43 = 32;
    LABEL_53:
      (*(void (**)(__int64))(*v51_.v52 + v43))((__int64)v51_.v52);
    }
    else if (v51_.v52 != nullptr) {
      v43 = 40;
      goto LABEL_53;
    }
  }
}

__int64 game_map_MapCharacter_Create_lambda0_Invoke(__int64 a1, float* a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(a1 + 16);
  if (v2 == 0) {
    return 0;
  }
  v3 = *(_QWORD*)(a1 + 24);
  if (*(_QWORD*)(v2 + 8) == -1 || v3 == 0) {
    return 0;
  }
  GameRoutine_1084940(v3, 0, *a2);
  return 1;
}

__int64 game_map_MapCharacter_SetForce_lambda0_Invoke(__int64 result,
                                                      __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int8 explicit;
  int* v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  unsigned int v8;
  float v9;
  __int64 v10;
  __int64* v11;
  __int64* i;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4d8,
                                  memory_order_acquire);
  v3 = GameData_212d4d0;
  if ((explicit & 1) == 0) {
    v14 = result;
    v15 = a2;
    v16 = __cxa_guard_acquire_alt1((__int64)GameData_212d4d8);
    a2 = v15;
    v17 = v16;
    result = v14;
    if (v17 != 0) {
      *v3 = wld_Crc32_alt1(0, "CharacterMaterial", 0x11u);
      __cxa_guard_release_alt1((__int64)GameData_212d4d8);
      a2 = v15;
      result = v14;
    }
  }
  v4 = *(_QWORD*)(a2 + 512);
  v5 = v4;
  while (v5 != *(_QWORD*)(a2 + 504)) {
    v6 = *(_DWORD*)(v5 - 16);
    v5 -= 16;
    v4 -= 16;
    if (v6 == *v3) {
      if (*(_QWORD*)(a2 + 512) == v4) {
        return result;
      }
      v7 = *(_QWORD*)(v4 + 8);
      if (v7 == 0) {
        return result;
      }
      v8 = *(unsigned __int8*)(result + 8);
      if (v8 > 1) {
        if (v8 == 3) {
          v9 = 0x1.0000000000000p+2f;
        }
        else if (v8 == 2) {
          v9 = 0x1.8000000000000p+1f;
        }
        else {
          v9 = 0x0.0p+0f;
        }
      LABEL_16:
        v10 = *(_QWORD*)(*(_QWORD*)(v7 + 240) + 24LL);
      }
      else {
        if (*(_BYTE*)(result + 8) != 0) {
          v9 = 0x1.0000000000000p+1f;
          goto LABEL_16;
        }
        v9 = 0x1.0000000000000p+0f;
        v10 = *(_QWORD*)(*(_QWORD*)(v7 + 240) + 24LL);
        *(_WORD*)(v7 + 113) = 256;
      }
      v11 = *(__int64**)(v10 + 312);
      for (i = *(__int64**)(v10 + 320); v11 != i;
           result = (*(__int64 (**)(__int64, const char*, __int64, float))(
               *(_QWORD*)v13 + 16LL))(v13, "Game_RimPattern", 15, v9)) {
        v13 = *v11;
        v11 += 2;
      }
      return result;
    }
  }
  return result;
}

#pragma GCC visibility pop
