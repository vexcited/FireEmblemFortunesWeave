#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_80a5b0(_QWORD);
__int64 GameRoutine_cf5c00(_QWORD);
__int64 game_map_zv_CrowdCharacter_TryZviewBuild_lambda1_Invoke(__int64 a1,
                                                                __int64 a2);
__attribute__((swiftcall)) void CharacterModel_cf7a40(PSEUDO_X8, _QWORD);
__int64 AssetTableFile_7e8000(__int64);
__int64 AssetTableFile_7e9e00(__int64, unsigned __int8*, unsigned int, char);
__int64 CharacterBuilder_1083840(_QWORD, long double);
__int64 CharacterModel_1070320(_QWORD, _QWORD);
__int64
CrowdCharacter_10315c0_alt1(__int64 result) __asm__("CrowdCharacter_10315c0");
__int64 GameRoutine_a7c6a0(_QWORD);
__int64 GameRoutine_cef860(__int64*, __int64);
__int64 GameRoutine_cf16c0(__int64, __int64, __int64);
__int64 HubCharacterNatives_cee710(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   float);
__int64 HubCharacterNatives_cee990(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD, float);
__int64 game_zview_d12d30(__int64 result, int32x2_t*, char);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_1a83ae0;
extern _UNKNOWN GameData_1ba469c;
extern _UNKNOWN GameData_1ba46a8;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_2002f90[])();
extern __int64 (*GameData_2003010[])();
extern __int64* GameData_212eba8[8];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21d9ce8;
extern __int64 GameData_21d9cf0;
extern __int64 GameData_21d9d00;
extern __int64 GameData_21d9d18;
extern __int64 GameData_21d9d20;
extern __int64 GameData_21d9d30;
extern __int64 GameData_21d9d38;
extern __int64 GameData_21d9d48;
extern __int64 GameData_21d9d50;
extern __int64 GameData_21d9d60;
extern __int64 GameData_21d9d68;
extern __int64 GameData_21d9d70;
extern char GameData_21d9d78;
extern int GameData_21d9d7c;
float GameRoutine_d1cbc0(_QWORD, _QWORD);
void CharacterRotate_d519c0(int8x16_t*);
void CrowdCharacter_10315c0(int32x2_t* a1);
void CrowdCharacter_10317a0(__int64 a1);
__attribute__((swiftcall)) void
game_map_zv_CrowdCharacter_TryZviewBuild_lambda0_Invoke(PSEUDO_X8 x8_,
                                                        __int64 a1);
_BYTE*
CharacterModel_1070320_alt1(__int64,
                            unsigned int) __asm__("CharacterModel_1070320");
__attribute__((swiftcall)) void
    CharacterModel_cf7a40_alt1(PSEUDO_X8) __asm__("CharacterModel_cf7a40");
__int64 GameRoutine_a7c6a0_alt1(__int64 result,
                                __int64) __asm__("GameRoutine_a7c6a0");
__int64
HubCharacterNatives_cee710_alt1(__int64, int, __int64, __int64, __int64,
                                float) __asm__("HubCharacterNatives_cee710");
__int64
HubCharacterNatives_cee990_alt1(__int64, int, int, __int64, __int64, __int64,
                                float) __asm__("HubCharacterNatives_cee990");
__n128 nn_os_UnlockMutex_alt1(_QWORD) __asm__("nn_os_UnlockMutex");
double GameRoutine_d1cbc0_alt1(__int64, int,
                               long double) __asm__("GameRoutine_d1cbc0");
void CharacterBuilder_1083840_alt1(__int64) __asm__("CharacterBuilder_1083840");
void CrowdCharacter_10315c0_alt2(__int64) __asm__("CrowdCharacter_10315c0");

void CrowdCharacter_10315c0(int32x2_t* a1)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  int v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  float v15;
  __int64 v16;
  int8x16_t* v17;
  int v18;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;
  struct {
    _QWORD v21[4];
    _QWORD* v22;
  } v21_;

  if (LANES64(a1[5]).n64_u32[1] != 1) {
    return;
  }
  v4 = LANES64(a1[1]).n64_u64[0];
  v6 = *(_DWORD*)(v4 + 52);
  *(_DWORD*)(v4 + 52) = v6 + 1;
  if (v6 > 1) {
    return;
  }
  v21_.v22 = v21_.v21;
  v7 = *GameData_212eba8[0];
  v21_.v21[0] = GameData_2002f90;
  v21_.v21[1] = a1;
  v8 = (__int64*)GameRoutine_cf16c0(v7, (__int64)v21_.v21, 0x1000008000LL);
  LANES64(a1[4]).n64_u64[0] = (unsigned __int64)v8;
  if (v21_.v22 == v21_.v21) {
    v9 = 32;
  }
  else {
    if (v21_.v22 == nullptr) {
      goto LABEL_8;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v21_.v22 + v9))((__int64)v21_.v22);
  v8 = (__int64*)LANES64(a1[4]).n64_u64[0];
LABEL_8:
  v19_.v19[0] = GameData_2003010;
  v11 = v8[51];
  v10 = v8[52];
  v19_.v20 = v19_.v19;
  if (v11 >= v10) {
    v12 = GameRoutine_cef860(v8 + 50, (__int64)v19_.v19);
  }
  else {
    *(_QWORD*)(v11 + 32) = v11;
    (*(void (**)(_QWORD*, unsigned __int64))(*v19_.v20 + 24LL))(v19_.v20, v11);
    v12 = v11 + 48;
  }
  v8[51] = v12;
  if (v19_.v20 == v19_.v19) {
    v13 = 32;
  }
  else {
    if (v19_.v20 == nullptr) {
      goto LABEL_16;
    }
    v13 = 40;
  }
  (*(void (**)(_QWORD*))(*v19_.v20 + v13))(v19_.v20);
LABEL_16:
  game_zview_d12d30(*(_QWORD*)(LANES64(a1[4]).n64_u64[0] + 16), a1 + 6, 1);
  v14 = *(_QWORD**)(LANES64(a1[4]).n64_u64[0] + 16);
  v15 = LANES64(a1[8]).n64_f32[0] * 0x1.1df46a0000000p-6f;
  if (v14[107] != 0) {
    v16 = v14[108];
    v14[107] = 0;
    v14[108] = 0;
    if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak(v16);
    }
  }
  v17 = (int8x16_t*)v14[61];
  v18 = LANES128(v17[11]).n128_u8[4];
  LANES128(v17[2]).n128_f32[0] = v15;
  LANES128(v17[2]).n128_f32[1] = v15;
  if (v18 == 1) {
    LANES128(v17[11]).n128_u8[4] = 0;
  }
  CharacterRotate_d519c0(v17);
  LANES64(a1[5]).n64_u32[1] = 2;
}

void CrowdCharacter_10317a0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int128 v5;
  int32x2_t v6;
  __int64 v7;
  __int64 v8;
  float32x4_t* v9;
  float32x4_t v10;
  float32x4_t v11;
  int8x16_t v12;
  float32x4_t v13;
  __int64* v14;
  __int64* v15;
  unsigned int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int128 v20;
  int v21;
  __int64 v22;
  float v23;
  float v24;
  float v25;
  _DWORD* v26;
  int v27;
  unsigned int v28;
  _DWORD* v29;
  __int64* v30;
  int v31;
  unsigned int v32;
  unsigned int v33;
  int v34;
  unsigned int v35;
  unsigned int v36;
  _BYTE* v37;
  __int64 v38;
  int v39;
  long double v40;
  float v41;
  __int64 v42;
  int v43;
  unsigned int v44;
  unsigned int v45;
  int v46;
  double v47;
  struct {
    __int64 v48;
    __int64 v49;
  } v48_;
  __int128 v51;
  __int128 vars0;

  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
  CrowdCharacter_10315c0_alt2(a1),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (*(_DWORD*)(a1 + 44) == 2) {
    v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 8LL) + 232LL);
    if (v7 != 0 &&
        (float)(*(float*)(v7 + 336) + -0x1.0000000000000p+0f) > 0x0.0p+0f) {
      *(_DWORD*)(v7 + 336) = 1065353216;
      v8 = *(_QWORD*)(v7 + 392);
      if (v8 != 0) {
        v9 = *(float32x4_t**)(v7 + 8);
        PSEUDO_LOW_LANE64(v6, n64_f32,
                          *(float*)(v8 + 40) + (float)(0x1.0000000000000p+0f -
                                                       *(float*)(v8 + 40)));
        v10 = vdupq_lane_s32(v6, 0);
        LANES128(v10).n128_u32[3] = 0;
        v11 = vsubq_f32(v9[22], v10);
        v12 = vmulq_f32(v11, v11);
        LANES128(v12).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
                .n64_u64[0];
        if (__builtin_islessgreater(
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
                    .n64_f32[0],
                0x0.0p+0f)) {
          LANES128(v9[22]).n128_u32[0] = LANES64(v6).n64_u32[0];
          LANES128(v9[22]).n128_u32[1] = LANES64(v6).n64_u32[0];
          v13 = v9[22];
          LANES128(v9[18]).n128_u32[2] |= 1u;
          LANES128(v13).n128_u64[1] = LANES64(v6).n64_u32[0];
          v9[22] = v13;
          v8 = *(_QWORD*)(v7 + 392);
        }
        v14 = *(__int64**)(v7 + 528);
        v15 = *(__int64**)(v7 + 536);
        if (v14 != v15) {
          *(float*)&v5 = *(float*)(v8 + 44) +
                         (float)(0x1.0000000000000p+0f - *(float*)(v8 + 44));
          v51 = v5;
          do {
            v16 = v51;
            v17 = *v14++;
            v18 = *(_DWORD*)(v17 + 128);
            v19 = *(_QWORD*)v17;
            *(_DWORD*)(v17 + 112) = v51;
            *(_DWORD*)(v17 + 116) = v16;
            v20 = *(_OWORD*)(v17 + 112);
            *(_DWORD*)(v17 + 128) = v18 | 0x20;
            *((_QWORD*)&v20 + 1) = v16;
            *(_OWORD*)(v17 + 112) = v20;
            GameRoutine_a7c6a0_alt1(v19, v17),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          } while (v14 != v15);
        }
        CharacterBuilder_1083840_alt1(v7),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    v21 = *(_DWORD*)(a1 + 40);
    if (v21 != 0) {
      v51 = vars0;
      *(_QWORD*)&vars0 = v2;
      *((_QWORD*)&vars0 + 1) = v1;
      v22 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8LL);
      v23 = *(float*)(v22 + 228);
      if (v23 > 0x0.0p+0f && *(_BYTE*)(v22 + 145) == 1) {
        v24 = *(float*)(a1 + 68);
        v25 = fabsf(v23);
        if (v24 <= 0x0.0p+0f) {
          if (v24 >= 0x0.0p+0f || (v24 = v25 + v24) <= 0x0.0p+0f) {
          LABEL_22:
            *(float*)(a1 + 68) = v24;
            if (v24 > 0x0.0p+0f) {
              return;
            }
          LABEL_23:
            v26 = &GameData_1ba469c;
            if (v21 == 2) {
              v27 = 2;
            }
            else {
              v27 = 3;
            }
            if (v21 == 2) {
              v26 = &GameData_1a83ae0;
            }
            if (v21 == 3) {
              v28 = 3;
            }
            else {
              v28 = v27;
            }
            if (v21 == 3) {
              v29 = &GameData_1ba46a8;
            }
            else {
              v29 = v26;
            }
            nn_os_LockMutex(&game_g_random_mutex),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            v30 = game_map_MapRandom_instance__ptr[0];
            v31 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL));
            v32 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
            v33 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                  (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
            *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
            *((_DWORD*)v30 + 1) = v31;
            v34 = (v33 >> 8) ^ (v32 >> 19) ^ v33 ^ v32;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v30) = v32;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v30 + 4) = v34;
            v35 = v34 & 0x7FFFFFFF;
            nn_os_UnlockMutex_alt1(&game_g_random_mutex),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            v36 = v29[v35 % v28];
            CharacterModel_cf7a40_alt1((void*)(&v48_.v48)),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            if (v48_.v48 != 0 &&
                (v37 = CharacterModel_1070320_alt1(*(_QWORD*)(v48_.v48 + 11608),
                                                   v36)) != nullptr) {
              v38 = v48_.v49;
              v39 = *(_DWORD*)(*((_QWORD*)v37 + 3) + 4LL);
              if (v48_.v49 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v48_.v49 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38),
                    v40 = COERCE_AS(__typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
                std___1___shared_weak_count___release_weak(v38),
                    v40 = COERCE_AS(__typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              if ((v39 & 4) != 0) {
                HubCharacterNatives_cee710_alt1(*(_QWORD*)(a1 + 32), v36, 0, 0,
                                                0, 0x1.0000000000000p+0f),
                    v40 = COERCE_AS(__typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
                v41 = 0x0.0p+0f;
              LABEL_45:
                v47 = GameRoutine_d1cbc0_alt1(
                    *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 8LL) + 344LL),
                    v36, v40),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
                *(float*)(a1 + 68) =
                    v41 + (float)(*(float*)&v47 / 0x1.e000000000000p+5f);
                return;
              }
            }
            else {
              v42 = v48_.v49;
              if (v48_.v49 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v48_.v49 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42),
                    v40 = COERCE_AS(__typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
                std___1___shared_weak_count___release_weak(v42),
                    v40 = COERCE_AS(__typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
            }
            HubCharacterNatives_cee990_alt1(*(_QWORD*)(a1 + 32), v36, 0, 0, 0,
                                            0, 0x1.0000000000000p+0f),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            nn_os_LockMutex(&game_g_random_mutex),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            v43 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v30);
            v44 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v30 + 4);
            v45 = *(_DWORD*)v30 ^ (*(_DWORD*)v30 << 11);
            *(_DWORD*)v30 = *((_DWORD*)v30 + 1);
            *((_DWORD*)v30 + 1) = v43;
            v46 = (v45 >> 8) ^ (v44 >> 19) ^ v45 ^ v44;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v30) = v44;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v30 + 4) = v46;
            *(__n128*)&v40 = nn_os_UnlockMutex_alt1(&game_g_random_mutex),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
            *(float*)&v40 = fminf(
                fmaxf((float)(unsigned __int16)v46 / 0x1.fffe000000000p+15f,
                      0x0.0p+0f),
                0x1.0000000000000p+0f);
            v41 = (float)(*(float*)&v40 * 0x1.f333340000000p+1f) +
                  0x1.99999a0000000p-4f;
            goto LABEL_45;
          }
        }
        else {
          v24 = v24 - v25;
          if (v24 >= 0x0.0p+0f) {
            goto LABEL_22;
          }
        }
        *(_DWORD*)(a1 + 68) = 0;
        goto LABEL_23;
      }
    }
  }
}

__attribute__((swiftcall)) void

game_map_zv_CrowdCharacter_TryZviewBuild_lambda0_Invoke(PSEUDO_X8 x8_,
                                                        __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  int* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v12;

  v4 = *(_QWORD*)(a1 + 8);
  v12 = 0;
  v5 = *(_QWORD*)(v4 + 16);
  if (v5 != 0) {
    LOBYTE(v12) = *(_BYTE*)(v5 + 16);
  }
  v6 = *(_DWORD*)(v4 + 24);
  *(_QWORD*)(a2 + 200) = 0;
  *(_QWORD*)(a2 + 216) = 0;
  *(_QWORD*)a2 = 0;
  *(_QWORD*)(a2 + 8) = 0;
  *(_QWORD*)(a2 + 16) = 0;
  *(_QWORD*)(a2 + 24) = 0;
  *(_QWORD*)(a2 + 32) = 0;
  *(_QWORD*)(a2 + 40) = 0;
  *(_QWORD*)(a2 + 48) = 0;
  *(_QWORD*)(a2 + 56) = 0;
  *(_QWORD*)(a2 + 64) = 0;
  *(_QWORD*)(a2 + 72) = 0;
  *(_QWORD*)(a2 + 80) = 0;
  *(_QWORD*)(a2 + 88) = 0;
  *(_DWORD*)(a2 + 384) = 1065353216;
  v7 = (int*)GameData_21d9d18;
  v8 = GameData_21d9d20;
  *(_QWORD*)(a2 + 96) = 0;
  *(_QWORD*)(a2 + 104) = 0;
  *(_QWORD*)(a2 + 112) = 0;
  *(_QWORD*)(a2 + 120) = 0;
  *(_QWORD*)(a2 + 128) = 0;
  *(_QWORD*)(a2 + 136) = 0;
  *(_QWORD*)(a2 + 144) = 0;
  *(_QWORD*)(a2 + 152) = 0;
  *(_QWORD*)(a2 + 160) = 0;
  *(_QWORD*)(a2 + 168) = 0;
  *(_QWORD*)(a2 + 176) = 0;
  *(_QWORD*)(a2 + 184) = 0;
  *(_QWORD*)(a2 + 320) = 0;
  *(_QWORD*)(a2 + 328) = 0;
  *(_QWORD*)(a2 + 344) = 0;
  *(_QWORD*)(a2 + 352) = 0;
  *(_QWORD*)(a2 + 360) = 0;
  *(_QWORD*)(a2 + 368) = 0;
  *(_QWORD*)(a2 + 376) = 0;
  *(_QWORD*)(a2 + 392) = 0;
  *(_QWORD*)(a2 + 400) = 0;
  *(_QWORD*)(a2 + 408) = 0;
  *(_QWORD*)(a2 + 416) = 0;
  *(_QWORD*)(a2 + 424) = 0;
  *(_QWORD*)(a2 + 432) = 0;
  *(_QWORD*)(a2 + 440) = 0;
  *(_QWORD*)(a2 + 448) = 0;
  *(_QWORD*)(a2 + 456) = 0;
  if (v7 != (int*)v8) {
    do {
      v9 = *v7++;
      *(_QWORD*)(GameData_21d9d00 + 8 * v9) = 0;
    } while (v7 != (int*)v8);
    v7 = (int*)GameData_21d9d18;
  }
  GameData_21d9d20 = (__int64)v7;
  GameData_21d9d60 = 0;
  GameData_21d9d68 = 0;
  GameData_21d9d70 = 0;
  GameData_21d9d7c = 0;
  GameData_21d9d38 = GameData_21d9d30;
  GameData_21d9cf0 = GameData_21d9ce8;
  GameData_21d9d50 = GameData_21d9d48;
  GameData_21d9d78 = 8;
  v10 = AssetTableFile_7e9e00(a2, (unsigned __int8*)&v12, v6, 1);
  {
    AssetTableFile_7e8000(v10);
    return;
  }
}

__int64 game_map_zv_CrowdCharacter_TryZviewBuild_lambda1_Invoke(__int64 a1,
                                                                __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float v7;
  __int64 v8;
  __int64 result;
  int v10;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 8LL);
  *(_QWORD*)(*(_QWORD*)(v2 + 328) + 184LL) = 0x3E99999A3E99999ALL;
  v3 = *(_QWORD*)(v2 + 328);
  v4 = *(_QWORD*)(v3 + 360);
  *(_QWORD*)(v3 + 176) = 0;
  *(_DWORD*)(v3 + 192) = 0;
  *(_BYTE*)(v3 + 196) = 1;
  *(_BYTE*)(v3 + 369) = 1;
  v5 = GameRoutine_cf5c00(v4);
  v6 = *(_QWORD*)(v2 + 328);
  v7 = *(float*)(v6 + 192);
  if (v7 < 0.0) {
    v7 = 0.0;
  }
  *(float*)(v6 + 192) = v7;
  v8 = *(_QWORD*)(v2 + 328);
  *(_DWORD*)(v8 + 176) = 1065353216;
  result = GameRoutine_80a5b0(v5);
  if ((result & 1) != 0) {
    v10 = *(_DWORD*)(v8 + 176);
    *(_DWORD*)(v8 + 192) = 0;
    *(_DWORD*)(v8 + 180) = v10;
  }
  *(_BYTE*)(v8 + 196) = 1;
  return result;
}

#pragma GCC visibility pop
