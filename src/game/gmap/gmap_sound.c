#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_133f1d0(_QWORD, _QWORD);
__int64 game_gmap_GmapSound_Impl_HadesAtmos_getBgmVolumeTarget_closure_Invoke(
    __int64 a1, _QWORD* a2);
__attribute__((swiftcall)) void GameConst_7f8880(PSEUDO_X8, unsigned __int8);
__attribute__((swiftcall)) void snd_playAt_ff5f0(PSEUDO_X8, _QWORD, _QWORD,
                                                 _QWORD, _QWORD, _QWORD, _QWORD,
                                                 _QWORD, double, float);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameManager_a2cf60(__int64 result);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GmapSound_1531270_alt1(_QWORD,
                               long double) __asm__("GmapSound_1531270");
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_gmap_GmapSound_Impl_HadesAtmos_getBgmVolumeTarget_alt1(
    _QWORD) __asm__("game_gmap_GmapSound_Impl_HadesAtmos_getBgmVolumeTarget");
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_Fade_Fade_10cb00(_QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_fnd_calcCrc32(_QWORD, _QWORD);
__int64 snd_startSlotVolume_100b50(_QWORD, _QWORD, long double);
__int64
snd_startSlotVolume_100b50_alt1(int*, __int64,
                                float) __asm__("snd_startSlotVolume_100b50");
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
char* game_util_Format(__int64, __int64, __int64, __int64, __int64, __int64,
                       __int64, __int64, char);
double snd_getDefineValue_alt1(__int64) __asm__("snd_getDefineValue");
extern _UNKNOWN GameData_1adfa87;
extern __int64 (*GameData_204b138[])();
extern __int64 (*snd_Vec3_vtable[])();
extern __int64* GameData_212c078;
extern __int64* GameData_212c790;
extern __int64* GameData_212d708;
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64 GameData_21c96e8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
long double snd_getDefineValue(_QWORD);
unsigned __int64 GameRoutine_810240(__int64, __int64);
unsigned __int8* snd_fnd_calcCrc32_alt1(unsigned __int8* result,
                                        int) __asm__("snd_fnd_calcCrc32");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 GmapSound_1530270(__int64 a1);
unsigned __int64 GmapSound_1530500(__int64 a1);
__int64 GmapSound_15309d0(__int64 a1);
__int64 GmapSound_1530d50();
__int64 GmapSound_1530e20();
__int64 GmapSound_1530ef0(__int64 a1, __int64 a2);
__int64 GmapSound_1531020(__int64 a1);
__int64 GmapSound_1531110(__int64 a1, __int64 a2);
__int64 GmapSound_1531270(__int64 result);
void game_gmap_GmapSound_Impl_HadesAtmos_getBgmVolumeTarget(__int64 a1);
void GmapSound_15317a0(_BYTE* a1);
__attribute__((swiftcall)) void game_gmap_13408e0(PSEUDO_X8, _QWORD);
__int64* GameRoutine_714e40();
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64 GameRoutine_60a020_alt1(__int64, __int64) __asm__("GameRoutine_60a020");
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
__int64 snd_playAt_ff5f0_alt1(__int64, __int64, __int64, __int64, unsigned int,
                              unsigned int, int, float,
                              float) __asm__("snd_playAt_ff5f0");
__int64 snd_stop_ffc40(__int64*, __int64);
__int64 strcmp(_QWORD, _QWORD);
extern __int64* GameData_212d1e0[2];
extern __int64 game_sound_g_game_sound;
extern char GameData_1a9f09e;
__int64 GmapSound_1530b00(__int64 result, __int64 a2);
__int64 GmapSound_1530c60(__int64 result);

__int64 GmapSound_1530270(__int64 a1)
{
  long double v2;
  __int64 v3;
  __int64* v4;
  float32x4_t v5;
  float32x4_t v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  _BYTE* v13;
  __int64 v14;
  int v15;
  char v16;
  long double v17;
  __int64 v18;
  long double v19;
  unsigned __int32 v20;
  long double v21;
  _BYTE v22[204];
  int v23;

  v21 = snd_getDefineValue("Gmap_Listener_PosX");
  v20 = COERCE_UNSIGNED_INT128(snd_getDefineValue("Gmap_Listener_PosY"));
  v2 = snd_getDefineValue("Gmap_Listener_PosZ");
  v3 = *game_sound_g_game_sound_ptr[0];
  v4 = GameData_212d708;
  if (*game_sound_g_game_sound_ptr[0] != 0) {
    v5 = *(float32x4_t*)&v21;
    LANES128(v5).n128_u32[1] = v20;
    LANES128(v5).n128_u32[2] = LODWORD(v2);
    v6 = *(float32x4_t*)(*(_QWORD*)(*GameData_212d708 + 16) + 80LL);
    *(_BYTE*)(v3 + 2516) = 1;
    v2 = COERCE_LONG_DOUBLE(vaddq_f32(v5, v6));
    *(_QWORD*)(v3 + 2528) = *(_QWORD*)&v2;
    *(_DWORD*)(v3 + 2536) = DWORD2(v2);
  }
  v7 = *(_QWORD*)(a1 + 48);
  if (v7 == 0 || *(_QWORD*)(v7 + 32) == *(_QWORD*)(v7 + 24) ||
      (v8 = *(_QWORD*)(v7 + 96), v9 = *(_QWORD*)(v7 + 552), (v8 | v9) != 0) &&
          (v8 != 0 || v9 == 0 || *(_QWORD*)(v7 + 104) != 0 ||
           *(__int16*)(v7 + 642) * *(__int16*)(v7 + 640) *
                   *(__int16*)(v7 + 644) !=
               0 ||
           *(_QWORD*)(v9 + 352) != 0) &&
          (*(_WORD*)(v7 + 544) & 3) == 2 ||
      *(_BYTE*)(*(_QWORD*)(*GameData_212c790 + 8) + 60LL) != 1 ||
      *(_BYTE*)(v7 + 512) != 2 || (snd_fnd_WeakHandle_isValid(a1) & 1) == 0) {
    GmapSound_1531270_alt1(a1, v2);
  }
  else {
    v10 = snd_fnd_WeakHandle_get(a1);
    if (v10 != 0) {
      v11 = v10 - 5592;
    }
    else {
      v11 = 0;
    }
    (*(void (**)(__int64, long double, float, float))(*(_QWORD*)(v11 + 40) +
                                                      1024LL))(
        v11 + 40, *(long double*)(v7 + 48),
        COERCE_FLOAT(HIDWORD(*(_QWORD*)(v7 + 48))),
        COERCE_FLOAT(*(_QWORD*)(v7 + 56)));
  }
  result = snd_fnd_WeakHandle_isValid(a1);
  if ((result & 1) == 0) {
    if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
      v13 = *(_BYTE**)(a1 + 32);
      *(_QWORD*)(a1 + 24) = 0;
    }
    else {
      v13 = (_BYTE*)(a1 + 17);
      *(_BYTE*)(a1 + 16) = 0;
    }
    *v13 = 0;
  }
  if ((game_GameModeData_instance_ == 0 ||
       *(_DWORD*)(game_GameModeData_instance_ + 60) != 1) &&
      (*(_BYTE*)(a1 + 40) & 1) != 0) {
    v14 = *(_QWORD*)(*v4 + 16);
    v15 = *(unsigned __int8*)(v14 + 173);
    v16 = *(_BYTE*)(v14 + 174);
    if (v15 == 1 && (v16 & 1) == 0) {
      v23 = snd_fnd_calcCrc32("ENV_VolControl", 0);
      snd_Fade_Fade_10cb00(v22, "FadeTime_ENV_Gmap_HdsZone_In");
      *(_QWORD*)&v17 = 0;
      snd_startSlotVolume_100b50(&v23, v22, v17);
      snd_Fade_Destroy_Fade(v22);
      v18 = *(_QWORD*)(*v4 + 16);
      LOBYTE(v15) = *(_BYTE*)(v18 + 173);
      v16 = *(_BYTE*)(v18 + 174);
    }
    if ((v15 & 1) == 0 && (v16 & 1) != 0) {
      v23 = snd_fnd_calcCrc32("ENV_VolControl", 0);
      snd_Fade_Fade_10cb00(v22, "FadeTime_ENV_Gmap_HdsZone_Out");
      LODWORD(v19) = 1.0;
      snd_startSlotVolume_100b50(&v23, v22, v19);
      snd_Fade_Destroy_Fade(v22);
    }
    return game_gmap_GmapSound_Impl_HadesAtmos_getBgmVolumeTarget_alt1(a1 + 40);
  }
  return result;
}

unsigned __int64 GmapSound_1530500(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  char* v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  const char* v21;
  __int64 v22;
  int* v23;
  int v24;
  int v25;
  bool v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 result;
  unsigned __int64 v30;
  unsigned __int64 v32;
  unsigned __int64 v33;
  _QWORD* v34;
  _QWORD* v35;
  unsigned __int64 v36;
  __int64 v37;
  char v38;
  struct {
    __int64 v39[2];
    char* v40;
  } v39_;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 1) {
    v39_.v39[1] = (__int64)&GameData_1adfa87;
    v39_.v39[0] = game_HashString((__int64)&GameData_1adfa87),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v2 = COERCE_AS(__typeof__(v2),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v3 = COERCE_AS(__typeof__(v3),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (game_GameModeData_instance_ != 0) {
      v18 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)v39_.v39),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if (v18 != 0) {
        v19 = *(_DWORD*)(v18 + 32);
        if (game_GameModeData_instance_ != 0) {
          v20 = *(unsigned int*)(game_GameModeData_instance_ + 60);
          if (v19 == 0) {
            goto LABEL_19;
          }
        LABEL_21:
          v21 = "Gmap_%d_GATE";
          goto LABEL_22;
        }
        v20 = 0;
        if (v19 != 0) {
          goto LABEL_21;
        }
      LABEL_19:
        v21 = "Gmap_%d";
      LABEL_22:
        v9 = game_util_Format((__int64)v21, v20, v12, v13, v14, v15, v16, v17,
                              v38),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v2 = COERCE_AS(__typeof__(v2),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        goto LABEL_23;
      }
      if (game_GameModeData_instance_ != 0) {
        v20 = *(unsigned int*)(game_GameModeData_instance_ + 60);
        goto LABEL_19;
      }
    }
    v20 = 0;
    goto LABEL_19;
  }
  GameConst_7f8880((void*)(v39_.v39),
                   *(_BYTE*)(game_GameModeData_instance_ + 15)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v39_.v39[0] & 1) != 0) {
    v8 = v39_.v40;
  }
  else {
    v8 = (char*)v39_.v39 + 1;
  }
  v9 = game_util_Format((__int64)"Gmap_1_%s", (__int64)v8, v2, v3, v4, v5, v6,
                        v7, v38),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v39_.v39[0] & 1) != 0 && v39_.v40 != nullptr) {
    v10 = v9;
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v2 = COERCE_AS(__typeof__(v2),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v9 = v10;
  }
LABEL_23:
  v22 = *(_BYTE*)a1 >> 1;
  if ((*(_BYTE*)a1 & 1) != 0) {
    v22 = *(_QWORD*)(a1 + 8);
  }
  if (v22 != 6 ||
      ((*(_BYTE*)a1 & 1) == 0 ? (v23 = (int*)(a1 + 1))
                              : (v23 = *(int**)(a1 + 16)),
       (v24 = *v23, v25 = *((unsigned __int16*)v23 + 2), v24 == -475364893)
           ? (v26 = v25 == 38785)
           : (v26 = false),
       !v26)) {
    if ((*(_BYTE*)a1 & 1) != 0) {
      v27 = *(_QWORD*)(a1 + 16);
    }
    else {
      v27 = a1 + 1;
    }
    if (v22 != 0) {
      v28 = v27;
    }
    else {
      v28 = 0;
    }
    return GameRoutine_810240((__int64)v9, v28);
  }
  result = game_HashString((__int64)v9),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (result != 0) {
    v30 = *(_QWORD*)(*GameData_212c078 + 96);
    if (v30 != 0 && *(_QWORD*)(*GameData_212c078 + 112) != 0) {
      v32 = v30 - 1;
      if ((v30 & (v30 - 1)) != 0) {
        v33 = result;
        if (result >= v30) {
          v33 = result % v30;
        }
      }
      else {
        v33 = v32 & result;
      }
      v34 = *(_QWORD**)(*(_QWORD*)(*GameData_212c078 + 88) + 8 * v33);
      if (v34 != nullptr) {
        v35 = (_QWORD*)*v34;
        if (v35 != nullptr) {
          if ((v30 & v32) == 0) {
            while (1) {
              v37 = v35[1];
              if (v37 == result) {
                if (v35[2] == result) {
                  goto LABEL_66;
                }
              }
              else if ((v37 & v32) != v33) {
                return result;
              }
              v35 = (_QWORD*)*v35;
              if (v35 == nullptr) {
                return result;
              }
            }
          }
          do {
            v36 = v35[1];
            if (v36 == result) {
              if (v35[2] == result) {
              LABEL_66:
                if (v35[3] != 0) {
                  return GameManager_a2cf60(*game_sound_g_game_sound_ptr[0]);
                }
                return result;
              }
            }
            else {
              if (v36 >= v30) {
                v36 %= v30;
              }
              if (v36 != v33) {
                return result;
              }
            }
            v35 = (_QWORD*)*v35;
          } while (v35 != nullptr);
        }
      }
    }
  }
  return result;
}

__int64 GmapSound_15309d0(__int64 a1)
{
  char* v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  int v7;
  _BYTE v8[200];

  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    *(_QWORD*)(a1 + 24) = 22;
    v2 = *(char**)(a1 + 32);
  }
  else {
    *(_BYTE*)(a1 + 16) = 44;
    v2 = (char*)(a1 + 17);
  }
  strcpy(v2, "SE_SYS_GMAP_CursorMove");
  if ((snd_fnd_WeakHandle_isValid(a1) & 1) != 0) {
    v3 = snd_fnd_WeakHandle_get(a1);
    snd_Fade_Fade_10c830(v8, 0.0);
    (*(void (**)(__int64, _BYTE*, _QWORD, double))(
        *(_QWORD*)(v3 - 5592) + 248LL))(v3 - 5592, v8, 0, 0.0);
    snd_Fade_Destroy_Fade(v8);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 32);
  }
  else {
    v4 = a1 + 17;
  }
  if (v4 != 0) {
    snd_Fade_Fade_10c830(v8, 0.0);
    snd_play_ff2d0((void*)(&v6), v4, v4, v8, 0, 65537, 0, 0.0, 1.0);
    snd_Fade_Destroy_Fade(v8);
  }
  else {
    v6 = 0;
    v7 = 0x2000;
  }
  return GameRoutine_112180(a1, &v6);
}

__int64 GmapSound_1530b00(__int64 result, __int64 a2)
{
  __int64 v3;
  char* v4;
  char v5;
  __int64 v6;
  __int64 v7;
  _QWORD v8[2];
  struct {
    __int64 v9;
    int v10;
  } v9_;
  struct {
    _QWORD v11[2];
    int v12;
  } v11_;
  _QWORD v13[25];

  if (game_GameModeData_instance_ != 0 && a2 != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v3 = result;
    result = snd_fnd_WeakHandle_isValid_alt1((__int64*)result);
    if ((result & 1) == 0) {
      if (game_GameModeData_instance_ != 0 &&
          *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
        if (*((_BYTE*)GameRoutine_714e40() + 32) == 1) {
          v4 = "V_PTV_IsmM_Gmap_Battle";
        }
        else {
          v4 = "V_PTV_IsmF_Gmap_Battle";
        }
      }
      else {
        v4 = &GameData_1a9f09e;
      }
      GameRoutine_60a020_alt1(v3 + 16, (__int64)v4);
      v5 = *(_BYTE*)(v3 + 16);
      v6 = *(_QWORD*)(v3 + 32);
      game_gmap_13408e0((void*)(v8), a2);
      if (game_sound_g_game_sound != 0) {
        if ((v5 & 1) != 0) {
          v7 = v6;
        }
        else {
          v7 = v3 + 17;
        }
        v11_.v11[1] = v8[0];
        v11_.v12 = v8[1];
        v11_.v11[0] = GameData_212d1e0[0] + 2;
        snd_Fade_Fade_10c830_alt1((__int64)v13, 0x0.0p+0f);
        snd_playAt_ff5f0_alt1(v7, v7, (__int64)v11_.v11, (__int64)v13, 0,
                              0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
        snd_Fade_Destroy_Fade_alt1(v13);
      }
      else {
        v9_.v9 = 0;
        v9_.v10 = 0x2000;
      }
      return GameRoutine_112180_alt1(v3, (__int64)&v9_.v9);
    }
  }
  return result;
}

__int64 GmapSound_1530c60(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  const char* v4;
  struct {
    __int64 v5;
    int v6;
  } v5_;
  _QWORD v7[25];

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v1 = result;
    result = snd_fnd_WeakHandle_isValid_alt1((__int64*)result);
    if ((result & 1) != 0) {
      if ((*(_BYTE*)(v1 + 16) & 1) != 0) {
        v2 = *(_QWORD*)(v1 + 32);
      }
      else {
        v2 = v1 + 17;
      }
      if (game_GameModeData_instance_ == 0 ||
          *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
        result = strcmp(v2, &GameData_1a9f09e);
        if ((_DWORD)result != 0) {
          return result;
        }
        goto LABEL_15;
      }
      v3 = v2;
      if (*((_BYTE*)GameRoutine_714e40() + 32) == 1) {
        v4 = "V_PTV_IsmM_Gmap_Battle";
      }
      else {
        v4 = "V_PTV_IsmF_Gmap_Battle";
      }
      result = strcmp(v3, v4);
      if ((_DWORD)result == 0) {
      LABEL_15:
        v5_.v5 = 0;
        v5_.v6 = 0x2000;
        GameRoutine_112180_alt1((__int64)&v5_.v5, v1);
        snd_Fade_Fade_10c830_alt1((__int64)v7, 0x0.0p+0f);
        snd_stop_ffc40(&v5_.v5, (__int64)v7);
        return snd_Fade_Destroy_Fade_alt1(v7);
      }
    }
  }
  return result;
}

__int64 GmapSound_1530d50()
{
  const char* v0;
  _QWORD v2[2];
  _BYTE v3[200];

  snd_Fade_Fade_10c830(v3, 0.0f);
  snd_play_ff2d0((void*)(v2), "V_PTV_UniqueDemo3", "V_PTV_UniqueDemo3", v3, 0,
                 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v3);
  v0 = "SE_EVT_UniqueDemo3_1";
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v0 = "SE_EVT_UniqueDemo3_3";
  }
  snd_Fade_Fade_10c830(v3, 0.0f);
  snd_play_ff2d0((void*)(v2), v0, v0, v3, 0, 65537, 0, 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade(v3);
}

__int64 GmapSound_1530e20()
{
  const char* v0;
  _QWORD v2[2];
  _BYTE v3[200];

  snd_Fade_Fade_10c830(v3, 0.0f);
  snd_play_ff2d0((void*)(v2), "V_PTV_UniqueDemo4", "V_PTV_UniqueDemo4", v3, 0,
                 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v3);
  v0 = "SE_EVT_UniqueDemo4_1";
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v0 = "SE_EVT_UniqueDemo4_3";
  }
  snd_Fade_Fade_10c830(v3, 0.0f);
  snd_play_ff2d0((void*)(v2), v0, v0, v3, 0, 65537, 0, 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade(v3);
}

__int64 GmapSound_1530ef0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int128 v5;
  __int64 v6;
  bool v7;
  __int64 v8;
  __int64 v10;
  int v11;
  _QWORD v12[2];
  int v13;
  _BYTE v14[200];

  GameRoutine_60a020(a1 + 16, "SE_SYS_GMAP_AttentionSign");
  if ((snd_fnd_WeakHandle_isValid(a1) & 1) != 0) {
    v4 = snd_fnd_WeakHandle_get(a1);
    snd_Fade_Fade_10c830(v14, 0.0);
    (*(void (**)(__int64, _BYTE*, _QWORD, double))(
        *(_QWORD*)(v4 - 5592) + 248LL))(v4 - 5592, v14, 0, 0.0);
    snd_Fade_Destroy_Fade(v14);
  }
  v5 = *(_OWORD*)(a2 + 32);
  v6 = *(_QWORD*)(a1 + 32);
  v7 = (*(_BYTE*)(a1 + 16) & 1) == 0;
  v12[1] = *(_QWORD*)(a2 + 32);
  if (v7) {
    v8 = a1 + 17;
  }
  else {
    v8 = v6;
  }
  v13 = DWORD2(v5);
  v12[0] = snd_Vec3_vtable;
  if (v8 != 0) {
    snd_Fade_Fade_10c830(v14, 0.0);
    snd_playAt_ff5f0((void*)(&v10), v8, v8, v12, v14, 0, 65537, 0, 0.0, 1.0);
    snd_Fade_Destroy_Fade(v14);
  }
  else {
    v10 = 0;
    v11 = 0x2000;
  }
  return GameRoutine_112180(a1, &v10);
}

__int64 GmapSound_1531020(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v7;
  _BYTE v8[200];

  result = snd_fnd_WeakHandle_isValid(a1);
  if ((result & 1) != 0 && (*(_BYTE*)(a1 + 16) & 1) != 0 &&
      *(_QWORD*)(a1 + 24) == 25) {
    v3 = *(_QWORD*)(a1 + 32);
    if (*(_QWORD*)v3 == 0x475F5359535F4553LL &&
        *(_QWORD*)(v3 + 8) == 0x657474415F50414DLL &&
        *(_QWORD*)(v3 + 16) == 0x6769536E6F69746ELL &&
        *(_BYTE*)(v3 + 24) == 110) {
      *(_QWORD*)(a1 + 24) = 0;
      *(_BYTE*)v3 = 0;
      v7 = snd_fnd_WeakHandle_get(a1);
      snd_Fade_Fade_10c830(v8, 0.0);
      (*(void (**)(__int64, _BYTE*, _QWORD, double))(
          *(_QWORD*)(v7 - 5592) + 248LL))(v7 - 5592, v8, 0, 0.0);
      return snd_Fade_Destroy_Fade(v8);
    }
  }
  return result;
}

__int64 GmapSound_1531110(__int64 a1, __int64 a2)
{
  char v2;
  char* v5;
  __int64 v6;
  __int128 v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  __int64 v12;
  int v13;
  _QWORD v14[2];
  int v15;
  _BYTE v16[200];

  v2 = *(_BYTE*)(a1 + 16);
  *(_QWORD*)(a1 + 48) = a2;
  if ((v2 & 1) != 0) {
    *(_QWORD*)(a1 + 24) = 16;
    v5 = *(char**)(a1 + 32);
  }
  else {
    *(_BYTE*)(a1 + 16) = 32;
    v5 = (char*)(a1 + 17);
  }
  strcpy(v5, "SE_FS_LD_Ship_lp");
  if ((snd_fnd_WeakHandle_isValid(a1) & 1) != 0) {
    v6 = snd_fnd_WeakHandle_get(a1);
    snd_Fade_Fade_10c830(v16, 0.0);
    (*(void (**)(__int64, _BYTE*, _QWORD, double))(
        *(_QWORD*)(v6 - 5592) + 248LL))(v6 - 5592, v16, 0, 0.0);
    snd_Fade_Destroy_Fade(v16);
  }
  v7 = *(_OWORD*)(a2 + 48);
  v8 = *(_QWORD*)(a1 + 32);
  v9 = (*(_BYTE*)(a1 + 16) & 1) == 0;
  v14[1] = *(_QWORD*)(a2 + 48);
  if (v9) {
    v10 = a1 + 17;
  }
  else {
    v10 = v8;
  }
  v15 = DWORD2(v7);
  v14[0] = snd_Vec3_vtable;
  if (v10 != 0) {
    snd_Fade_Fade_10c830(v16, 0.0);
    snd_playAt_ff5f0((void*)(&v12), v10, v10, v14, v16, 0, 65537, 0, 0.0, 1.0);
    snd_Fade_Destroy_Fade(v16);
  }
  else {
    v12 = 0;
    v13 = 0x2000;
  }
  return GameRoutine_112180(a1, &v12);
}

__int64 GmapSound_1531270(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int8 v3;
  __int64 v4;
  _BYTE* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  _BYTE v12[200];
  __int64 v13;
  __int64 v14;

  v3 = *(_BYTE*)(result + 16);
  v4 = *(_QWORD*)(result + 24);
  *(_QWORD*)(result + 48) = 0;
  if ((v3 & 1) == 0) {
    v4 = v3 >> 1;
  }
  if (v4 == 16) {
    v13 = v1;
    v14 = v2;
    v5 = *(_BYTE**)(result + 32);
    v6 = (v3 & 1) != 0 ? *(__int64**)(result + 32) : (__int64*)(result + 17);
    v8 = *v6;
    v7 = v6[1];
    if (v8 == 0x444C5F53465F4553LL && v7 == 0x706C5F706968535FLL) {
      if ((v3 & 1) != 0) {
        *(_QWORD*)(result + 24) = 0;
      }
      else {
        *(_BYTE*)(result + 16) = 0;
        v5 = (_BYTE*)(result + 17);
      }
      *v5 = 0;
      v10 = result;
      result = snd_fnd_WeakHandle_isValid(result);
      if ((result & 1) != 0) {
        v11 = snd_fnd_WeakHandle_get(v10);
        snd_Fade_Fade_10c830(v12, 0.0);
        (*(void (**)(__int64, _BYTE*, _QWORD, double))(
            *(_QWORD*)(v11 - 5592) + 248LL))(v11 - 5592, v12, 0, 0.0);
        return snd_Fade_Destroy_Fade(v12);
      }
    }
  }
  return result;
}

void game_gmap_GmapSound_Impl_HadesAtmos_getBgmVolumeTarget(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  __int64* v3;
  float32x4_t* v4;
  __int64 v5;
  float32x4_t** v6;
  float32x4_t** v7;
  float32x4_t* v8;
  float v9;
  float32x4_t* v10;
  float32x4_t v11;
  int8x16_t v12;
  float v13;
  __int64 v14;
  float v15;
  float32x4_t v16;
  int8x16_t v17;
  double v18;
  float v19;
  double v20;
  float v21;
  double v22;
  float v23;
  float v24;
  bool v25;
  float v26;
  double v27;
  float v28;
  struct {
    _QWORD v29[4];
    _QWORD* v30;
  } v29_;
  float32x4_t* v31;

  v2 = v29_.v29;
  v3 = GameData_212d708;
  v4 = *(float32x4_t**)(*GameData_212d708 + 16);
  v29_.v30 = v29_.v29;
  v29_.v29[0] = GameData_204b138;
  v5 = *(_QWORD*)(GameData_21c96e8 + 8);
  v6 = *(float32x4_t***)(v5 + 8);
  v7 = *(float32x4_t***)(v5 + 16);
  if (v6 == v7) {
    v8 = nullptr;
  LABEL_15:
    v14 = 32;
    goto LABEL_16;
  }
  v8 = nullptr;
  v9 = 0x1.e848000000000p+19f;
  do {
    v10 = *v6;
    if (v29_.v30 == nullptr ||
        (v31 = *v6, ((*(__int64 (**)(_QWORD*, float32x4_t**))(
                         *v29_.v30 + 48LL))(v29_.v30, &v31) &
                     1) != 0)) {
      if (LANES128(v10[34]).n128_u8[2] == 0) {
        v11 = vsubq_f32(v4[5], v10[3]);
        v12 = vmulq_f32(v11, v11);
        LANES128(v12).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
                .n64_u64[0];
        v13 = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
                  .n64_f32[0];
        if (v9 > v13) {
          v9 = v13;
          v8 = v10;
        }
      }
    }
    ++v6;
  } while (v6 != v7);
  v2 = v29_.v30;
  if (v29_.v30 == v29_.v29) {
    goto LABEL_15;
  }
  if (v29_.v30 != nullptr) {
    v14 = 40;
  LABEL_16:
    (*(void (**)(__int64))(*v2 + v14))((__int64)v2);
  }
  v15 = 0x1.0000000000000p+0f;
  if (v8 != nullptr) {
    v16 = vsubq_f32(*(float32x4_t*)(*(_QWORD*)(*v3 + 16) + 80LL), v8[3]);
    v17 = vmulq_f32(v16, v16);
    LANES128(v17).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v17, v17, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0])))
            .n64_u64[0];
    v28 = LANES64_OF(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0]))))
              .n64_f32[0];
    v18 = snd_getDefineValue_alt1((__int64)"GmapHdsGate_Radius");
    v19 = *(float*)&v18;
    if (v28 <= *(float*)&v18) {
      v20 = snd_getDefineValue_alt1((__int64)"GmapHdsGate_MinVolumeRadius");
      v21 = *(float*)&v20;
      v22 = snd_getDefineValue_alt1((__int64)"GmapHdsGate_BGMVolume");
      v15 = *(float*)&v22;
      if (v21 < v19) {
        v23 = (float)(v28 - v21) / (float)(v19 - v21);
        if (v23 <= 0x1.0000000000000p+0f) {
          v24 = (float)(v28 - v21) / (float)(v19 - v21);
        }
        else {
          v24 = 0x1.0000000000000p+0f;
        }
        v25 = v23 < 0x0.0p+0f;
        v26 = 0x0.0p+0f;
        if (!v25) {
          v26 = v24;
        }
        v15 = v15 + (float)((float)(0x1.0000000000000p+0f - v15) * v26);
      }
    }
  }
  if (v15 != *(float*)(a1 + 4)) {
    LODWORD(v31) = (unsigned int)snd_fnd_calcCrc32_alt1("BGM", 0);
    v27 = snd_getDefineValue_alt1((__int64)"GmapHdsGate_BGMVolume_Speed");
    snd_Fade_Fade_10c830_alt1((__int64)v29_.v29, *(float*)&v27);
    snd_startSlotVolume_100b50_alt1((int*)&v31, (__int64)v29_.v29, v15);
    snd_Fade_Destroy_Fade_alt1(v29_.v29);
  }
  *(float*)(a1 + 4) = v15;
}

__int64 game_gmap_GmapSound_Impl_HadesAtmos_getBgmVolumeTarget_closure_Invoke(
    __int64 a1, _QWORD* a2)
{
  if ((*(_WORD*)(*a2 + 544LL) & 8) != 0) {
    return ((unsigned int)GameRoutine_133f1d0(*a2, a2) ^ 1) & 1;
  }
  else {
    return 0;
  }
}

void GmapSound_15317a0(_BYTE* a1)
{
  __int64 v1;
  __int64 v2;
  long double v4;
  _BYTE v5[200];
  __int64 v6;
  __int64 v7;
  int v8;

  if ((game_GameModeData_instance_ == 0 ||
       *(_DWORD*)(game_GameModeData_instance_ + 60) != 1) &&
      (*a1 & 1) != 0) {
    v6 = v1;
    v7 = v2;
    if (*(_BYTE*)(*(_QWORD*)(*GameData_212d708 + 16) + 173LL) == 1) {
      v8 = snd_fnd_calcCrc32("ENV_VolControl", 0);
      *((_QWORD*)&v4 + 1) =
          LANES128_OF(snd_Fade_Fade_10c830(v5, 0.0)).n128_u64[1];
      *(_QWORD*)&v4 = 0;
    }
    else {
      v8 = snd_fnd_calcCrc32("ENV_VolControl", 0);
      *(__n128*)&v4 = snd_Fade_Fade_10c830(v5, 0.0);
      LODWORD(v4) = 1.0;
    }
    snd_startSlotVolume_100b50(&v8, v5, v4);
    snd_Fade_Destroy_Fade(v5);
    game_gmap_GmapSound_Impl_HadesAtmos_getBgmVolumeTarget((__int64)a1);
  }
}

#pragma GCC visibility pop
