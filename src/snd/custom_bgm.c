#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameManager_a360a0(_QWORD, _QWORD);
__int64 snd_BGM_isStoppingNow(void);
__int64 snd_BGM_start(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float, float);
extern __int64* game_sound_g_game_sound_ptr[5];
__int64 CustomBGM_requestPlay(__int64 a1, __int64 a2, __int64 a3,
                              unsigned int a4, float a5, float a6);
__attribute__((swiftcall)) void snd_BGM_getFirstHandle(PSEUDO_X8, _QWORD);
__int64 GameRoutine_10d050(_QWORD, _QWORD);
__int64 snd_BGM_checkFinished(_QWORD);
__int64 snd_BGM_isAnyDelayed(_QWORD);
__int64 snd_BGM_stop_d9070(_QWORD, _QWORD, _QWORD);
__int64 snd_BGM_update(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10cb00(_QWORD, _QWORD);
__int64 snd_Fade_Fade_10cd70(_QWORD);
__int64 snd_Voice_hasFeature(_QWORD, _QWORD);
__int64 snd_data_getMuseumData(_QWORD);
__int64 snd_data_getMuseumDataCount(void);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_calcCrc32(_QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 GameData_212c638;
extern __int64 game_sound_g_game_sound;
extern int GameData_21759f0;
float snd_BGM_getFirstPlayerVolume(_QWORD);
__int64 CustomBGM_update(__int64 a1);
__int64 CustomBGM_stop(__int64 a1, __int64 a2, char a3);
__int64 GameManager_a360a0_alt1(__int64 result,
                                __int64) __asm__("GameManager_a360a0");
__int64 snd_BGM_isStoppingNow_alt1(__int64) __asm__("snd_BGM_isStoppingNow");
__int64 snd_BGM_start_alt1(__int64 result, __int64, __int64, __int64,
                           unsigned int, long double,
                           long double) __asm__("snd_BGM_start");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64
snd_data_getMuseumDataCount_alt1() __asm__("snd_data_getMuseumDataCount");
__int64 snd_fnd_WeakHandle_get_alt1(__int64) __asm__("snd_fnd_WeakHandle_get");
bool snd_Voice_hasFeature_alt1(__int64,
                               unsigned int) __asm__("snd_Voice_hasFeature");
extern __int64 GameData_21c6978;
unsigned __int8* snd_fnd_calcCrc32_alt1(unsigned __int8* result,
                                        int) __asm__("snd_fnd_calcCrc32");
void* snd_data_getMuseumData_alt1(int) __asm__("snd_data_getMuseumData");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
void CustomBGM_refreshVolume(__int64 a1);
__attribute__((swiftcall)) void
snd_BGM_getFirstHandle_alt1(PSEUDO_X8,
                            __int64) __asm__("snd_BGM_getFirstHandle");
__int64* GameManager_a223a0(__int64);
__int64* GameVariable_82e7c0(unsigned __int8, int);
__int64 GameHr_a360a0(__int64 result, unsigned __int8*);
__int64 GameRoutine_10ebc0(__int64 result);
__int64 GameRoutine_119000(_QWORD);
__int64 GameRoutine_183040(_QWORD, _QWORD);
__int64 game_Force_Find(__int64*, __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 snd_BGM_requestNext(__int64, char*, __int64, __int64);
__int64 snd_BGM_startPlayerVolumeAll(__int64 result, __int64, float);
extern _DWORD* GameData_21321f8;
extern _UNKNOWN GameData_1a89194;
extern _UNKNOWN GameData_1a891a5;
extern _UNKNOWN GameData_1aafdf7;
extern _UNKNOWN GameData_1acaae0;
extern _UNKNOWN GameData_1aed6ab;
extern __int64 GameData_1a8d218;
extern __int64 GameData_1ac302b;
extern __int64 GameData_1ae1d7b;
extern __int64 GameData_21c96d8;
extern __int64 GameData_21ca310;
extern __int64 GameData_2265eb0;
extern __int64 game_GameModeData_instance_;
extern char game_facility_g_memory_sound_playing;
int strcmp(const char*, const char*);
__int64 CustomBGM_requestNext(__int64 a1, const char* a2, __int64 a3,
                              unsigned int a4);
void CustomBGM_setVolume(__int64 a1, __int64 a2, char a3, float a4);

__int64 CustomBGM_update(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  double v5;
  __int64 v6;
  __int64 v7;
  __int64 i;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  float v14;
  __int64 v15;
  float v16;
  float v17;
  __int64 v18;
  int v19;
  float v20;
  float v21;
  float v22;
  __int64 v23;
  int v24;
  float v25;
  float v26;
  unsigned int v27;
  int v28;
  __int64 v29;
  int v30;
  int v31;
  int v32;
  unsigned int v33;
  _DWORD* v34;
  int v35;
  int v37;
  _QWORD v40[26];

  v2 = game_sound_g_game_sound_ptr[0];
  if ((*(_BYTE*)(*game_sound_g_game_sound_ptr[0] + 601) & 1) == 0) {
    snd_BGM_getFirstHandle((void*)(v40), a1);
    v3 = snd_fnd_WeakHandle_get(v40);
    if (v3 != 0) {
      v4 = v3;
      if ((*(float (**)(__int64))(*(_QWORD*)(v3 - 5552) + 104LL))(v3 - 5552) ==
          0.0) {
        LODWORD(v5) = 1140457472;
        snd_Fade_Fade_10c830(v40, v5);
        (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v4 - 5552) + 112LL))(
            v4 - 5552, v40, 1.0);
        snd_Fade_Destroy_Fade(v40);
      }
    }
  }
  if (*(float*)(*v2 + 592) <= 0x1.99999a0000000p-4) {
    v6 = *(_QWORD*)(a1 + 16);
    if (v6 != *(_QWORD*)(a1 + 8)) {
      v7 = v6 - 384;
      for (i = 0; i != 6; ++i) {
        if ((*(_BYTE*)(*v2 + 3128) & 1) != 0) {
          return snd_BGM_update(a1);
        }
        v9 = snd_fnd_WeakHandle_get(v7 + 56 * i);
        if (v9 != 0) {
          v10 = v9;
          if ((snd_Voice_hasFeature(v9 - 5592, 14) & 1) != 0) {
            if ((*(float (**)(__int64))(*(_QWORD*)(v10 - 5552) + 120LL))(
                    v10 - 5552) <= 0x1.cccccc0000000p-1) {
              v21 = *(float*)(a1 + 32);
              if (*(_QWORD*)GameData_212c638 != 0) {
                v22 = 0.0;
                v23 = *(_QWORD*)(*v2 + 32);
                v24 = *(_DWORD*)(v23 + 376);
                if (v24 < 0) {
                  v21 = 0.0;
                }
                else if (v24 != 0) {
                  v22 = *(float*)(a1 + 32);
                  if (v24 == 1) {
                    v21 = 0.0;
                    v22 = *(float*)(v23 + 384);
                  }
                }
                else {
                  v21 = *(float*)(v23 + 384);
                }
                if (*(_DWORD*)(*v2 + 2808) != 1) {
                LABEL_31:
                  if (v21 > 0.0) {
                    snd_Fade_Fade_10c830(v40, 0.0);
                    (*(void (**)(__int64, __int64, _QWORD*, float))(
                        *(_QWORD*)(v10 - 5592) + 424LL))(v10 - 5592, 1, v40,
                                                         1.0);
                    snd_Fade_Destroy_Fade(v40);
                  }
                }
                if (v22 <= 0.0) {
                  continue;
                }
                snd_Fade_Fade_10c830(v40, 0.0);
                (*(void (**)(__int64, __int64, _QWORD*, float))(
                    *(_QWORD*)(v10 - 5592) + 424LL))(v10 - 5592, 2, v40, 1.0);
              LABEL_8:
                snd_Fade_Destroy_Fade(v40);
                continue;
              }
              v22 = *(float*)(a1 + 32);
              goto LABEL_31;
            }
            if (*(_BYTE*)(v10 + 297) != 1) {
              v25 = (*(float (**)(__int64))(*(_QWORD*)(v10 - 5552) + 88LL))(
                  v10 - 5552);
              v26 = *(float*)(a1 + 32);
              if (v25 == v26) {
                continue;
              }
              snd_Fade_Fade_10c830(v40, 0.0);
              (*(void (**)(__int64, _QWORD*, float))(
                  *(_QWORD*)(v10 - 5552) + 96LL))(v10 - 5552, v40, v26);
              goto LABEL_8;
            }
            (*(__attribute__((swiftcall)) void (**)(
                PSEUDO_X8, __int64, _QWORD))(*(_QWORD*)(v10 - 5592) + 440LL))(
                (void*)v40, v10 - 5592, 0);
            v11 = snd_fnd_WeakHandle_get(v40);
            (*(__attribute__((swiftcall)) void (**)(
                PSEUDO_X8, __int64, __int64))(*(_QWORD*)(v10 - 5592) + 440LL))(
                (void*)v40, v10 - 5592, 1);
            v12 = snd_fnd_WeakHandle_get(v40);
            (*(__attribute__((swiftcall)) void (**)(
                PSEUDO_X8, __int64, __int64))(*(_QWORD*)(v10 - 5592) + 440LL))(
                (void*)v40, v10 - 5592, 2);
            v13 = snd_fnd_WeakHandle_get(v40);
            v14 = *(float*)(a1 + 32);
            v15 = v13;
            v16 = v14;
            v17 = v14;
            if (*(_QWORD*)GameData_212c638 != 0) {
              v16 = 0.0;
              v18 = *(_QWORD*)(*v2 + 32);
              v19 = *(_DWORD*)(v18 + 376);
              if (v19 < 0) {
                v20 = 0.0;
              }
              else if (v19 != 0) {
                v16 = *(float*)(a1 + 32);
                v20 = v16;
                if (v19 == 1) {
                  v16 = *(float*)(v18 + 384);
                  v20 = 0.0;
                }
              }
              else {
                v20 = *(float*)(v18 + 384);
              }
              if (*(_DWORD*)(*v2 + 2808) == 1) {
                v17 = 0.0;
              }
              else {
                v17 = v20;
              }
            }
            if (v11 != 0) {
              if ((*(float (**)(__int64))(*(_QWORD*)(v11 - 5552) + 88LL))(
                      v11 - 5552) != v14) {
                snd_Fade_Fade_10c830(v40, 0.0);
                (*(void (**)(__int64, _QWORD*, float))(
                    *(_QWORD*)(v11 - 5552) + 96LL))(v11 - 5552, v40, v14);
                snd_Fade_Destroy_Fade(v40);
              }
              if (v14 == 0.0 &&
                  (*(float (**)(__int64))(*(_QWORD*)(v11 - 5552) + 80LL))(
                      v11 - 5552) == 0.0) {
                snd_Fade_Fade_10c830(v40, 0.0);
                (*(void (**)(__int64, _QWORD*, float))(
                    *(_QWORD*)(v11 - 5552) + 112LL))(v11 - 5552, v40, 1.0);
                snd_Fade_Destroy_Fade(v40);
              }
            }
            if (v12 != 0) {
              if ((*(float (**)(__int64))(*(_QWORD*)(v12 - 5552) + 88LL))(
                      v12 - 5552) != v17) {
                snd_Fade_Fade_10c830(v40, 0.0);
                (*(void (**)(__int64, _QWORD*, float))(
                    *(_QWORD*)(v12 - 5552) + 96LL))(v12 - 5552, v40, v17);
                snd_Fade_Destroy_Fade(v40);
              }
              snd_Fade_Fade_10c830(v40, 0.0);
              (*(void (**)(__int64, __int64, _QWORD*, float))(
                  *(_QWORD*)(v10 - 5592) + 424LL))(v10 - 5592, 1, v40, 1.0);
              snd_Fade_Destroy_Fade(v40);
              if (v17 == 0.0) {
                snd_Fade_Fade_10c830(v40, 0.0);
                (*(void (**)(__int64, _QWORD*, float))(
                    *(_QWORD*)(v12 - 5552) + 112LL))(v12 - 5552, v40, 1.0);
                snd_Fade_Destroy_Fade(v40);
              }
            }
            if (v15 == 0) {
              continue;
            }
            if ((*(float (**)(__int64))(*(_QWORD*)(v15 - 5552) + 88LL))(
                    v15 - 5552) != v16) {
              snd_Fade_Fade_10c830(v40, 0.0);
              (*(void (**)(__int64, _QWORD*, float))(
                  *(_QWORD*)(v15 - 5552) + 96LL))(v15 - 5552, v40, v16);
              snd_Fade_Destroy_Fade(v40);
            }
            snd_Fade_Fade_10c830(v40, 0.0);
            (*(void (**)(__int64, __int64, _QWORD*, float))(
                *(_QWORD*)(v10 - 5592) + 424LL))(v10 - 5592, 2, v40, 1.0);
            snd_Fade_Destroy_Fade(v40);
            if (v16 == 0.0) {
              snd_Fade_Fade_10c830(v40, 0.0);
              (*(void (**)(__int64, _QWORD*, float))(
                  *(_QWORD*)(v15 - 5552) + 112LL))(v15 - 5552, v40, 1.0);
              snd_Fade_Destroy_Fade(v40);
            }
            if (v16 < 0.5) {
              continue;
            }
            v27 = GameData_21759f0;
            if (GameData_21759f0 < 0) {
              v30 = snd_fnd_calcCrc32("BGM_Hub12", 0);
              v31 = snd_data_getMuseumDataCount();
              if (v31 < 1) {
              LABEL_71:
                GameData_21759f0 = -1;
                continue;
              }
              v32 = v31;
              v33 = 0;
              while (1) {
                v34 = (_DWORD*)snd_data_getMuseumData(v33);
                if (v34[3] == v30) {
                  break;
                }
                v35 = v34[6];
                if (v35 != 0 && v35 == v30) {
                  break;
                }
                v37 = v34[7];
                if (v37 != 0 && v37 == v30) {
                  break;
                }
                if (v32 == ++v33) {
                  goto LABEL_71;
                }
              }
              v27 = v34[1];
              GameData_21759f0 = v27;
              if ((v27 & 0x80000000) != 0) {
                continue;
              }
            }
            v28 = 1 << v27;
            v29 = *v2 + 4LL * (v27 >> 5);
            *(_DWORD*)(v29 + 2548) |= v28;
          }
        }
      }
    }
  }
  return snd_BGM_update(a1);
}

__int64 CustomBGM_requestPlay(__int64 a1, __int64 a2, __int64 a3,
                              unsigned int a4, float a5, float a6)
{

#pragma clang fp contract(off)
  __int64 result;
  long double v13;
  long double v14;
  struct {
    _QWORD v15[7];
    int v16;
  } v15_;

  result = snd_BGM_isStoppingNow_alt1(a1);
  if ((result & 1) == 0) {
    *(float*)&v13 = a5;
    *(float*)&v14 = a6;
    memset(&v15_.v15[1], 0, 48);
    v15_.v15[0] = a2;
    v15_.v16 = 1;
    snd_BGM_start_alt1(a1, (__int64)v15_.v15, a3, a4, 0xFFFFFFFF, v13, v14);
    return GameManager_a360a0_alt1(*game_sound_g_game_sound_ptr[0], a2);
  }
  return result;
}

__int64 CustomBGM_requestNext(__int64 a1, const char* a2, __int64 a3,
                              unsigned int a4)
{

#pragma clang fp contract(off)
  _BOOL4 v4;
  _BOOL4 v5;
  char* v6;
  int v10;
  char v11;
  unsigned __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64* v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64* v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64* v21;
  unsigned __int64 v22;
  __int64 v23;
  _BOOL4 v24;
  unsigned __int64* v25;
  unsigned __int64 v26;
  __int64 v27;
  _BOOL4 v28;
  unsigned __int64* v29;
  unsigned __int64 v30;
  __int64 v31;
  _BOOL4 v32;
  unsigned __int64* v33;
  int v34;
  unsigned __int64 v35;
  __int64 v36;
  int v37;
  unsigned int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  unsigned __int64* v43;
  int v44;
  unsigned __int64 v45;
  __int64 v46;
  int v47;
  int v48;
  int v49;
  int v50;
  unsigned int v51;
  bool v52;
  const char* v53;
  int v54;
  bool v59;
  char* v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64* v67;
  __int64 v68;
  __int64* v69;
  __int64 v70;
  __int64* v71;
  __int64 v72;
  __int64* v73;
  __int64 v74;
  __int64 v75;
  int v76;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  _BOOL4 v85;
  _BOOL4 v86;
  _BOOL4 v87;
  _BOOL4 v88;
  _BOOL4 v89;
  _BOOL4 v90;
  __int64 v91;
  unsigned int v92;
  _QWORD v93[2];
  _QWORD v94[26];

  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (a2 != nullptr) {
    v6 = (char*)a2;
    if (strcmp(a2, "BGM_SYS_MainTheme2") != 0 &&
        strcmp(v6, "BGM_SYS_MainTheme3") != 0 &&
        strcmp(v6, "BGM_SYS_MainTheme4") != 0) {
      v10 = 0;
    }
    else if (GameData_21c96d8 != 0 &&
             (game_facility_g_memory_sound_playing & 1) == 0) {
      v92 = a4;
      v12 = (unsigned __int64*)GameVariable_82e7c0(1u, 1),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v13 = *v12;
      if (*v12 != 0) {
        v87 = game_GameModeData_instance_ != 0 &&
              (v14 = game_GameVariableTable_Find(
                   *(_QWORD**)(game_GameModeData_instance_ + 48), v12)) != 0 &&
              *(_DWORD*)(v14 + 32) != 0,
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      v89 = v13 != 0;
      v15 = (unsigned __int64*)GameVariable_82e7c0(2u, 1),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v16 = *v15;
      if (*v15 != 0) {
        v4 = game_GameModeData_instance_ != 0 &&
             (v17 = game_GameVariableTable_Find(
                  *(_QWORD**)(game_GameModeData_instance_ + 48), v15)) != 0 &&
             *(_DWORD*)(v17 + 32) != 0,
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      v90 = v16 != 0;
      v18 = (unsigned __int64*)GameVariable_82e7c0(3u, 1),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v19 = *v18;
      if (*v18 != 0) {
        v86 = game_GameModeData_instance_ != 0 &&
              (v20 = game_GameVariableTable_Find(
                   *(_QWORD**)(game_GameModeData_instance_ + 48), v18)) != 0 &&
              *(_DWORD*)(v20 + 32) != 0,
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      v88 = v19 != 0;
      v21 = (unsigned __int64*)GameVariable_82e7c0(4u, 1),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v22 = *v21;
      if (*v21 != 0) {
        v85 = game_GameModeData_instance_ != 0 &&
              (v23 = game_GameVariableTable_Find(
                   *(_QWORD**)(game_GameModeData_instance_ + 48), v21)) != 0 &&
              *(_DWORD*)(v23 + 32) != 0,
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      v24 = v22 != 0;
      v25 = (unsigned __int64*)GameVariable_82e7c0(5u, 1),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v26 = *v25;
      if (*v25 != 0) {
        v5 = game_GameModeData_instance_ != 0 &&
             (v27 = game_GameVariableTable_Find(
                  *(_QWORD**)(game_GameModeData_instance_ + 48), v25)) != 0 &&
             *(_DWORD*)(v27 + 32) != 0,
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      v28 = v26 != 0;
      v29 = (unsigned __int64*)GameVariable_82e7c0(6u, 1),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v30 = *v29;
      if (*v29 != 0) {
        LODWORD(v6) =
            game_GameModeData_instance_ != 0 &&
            (v31 = game_GameVariableTable_Find(
                 *(_QWORD**)(game_GameModeData_instance_ + 48), v29)) != 0 &&
            *(_DWORD*)(v31 + 32) != 0,
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      v32 = v30 != 0;
      v33 = (unsigned __int64*)GameVariable_82e7c0(7u, 1),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v35 = *v33;
      v91 = a3;
      if (*v33 != 0) {
        v34 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v36 = game_GameVariableTable_Find(
              *(_QWORD**)(game_GameModeData_instance_ + 48), v33),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          v34 = v36 != 0 && *(_DWORD*)(v36 + 32) != 0;
        }
      }
      v59 = v35 == 0;
      v37 = v28 && v5;
      v38 = v32 & (unsigned int)v6;
      v10 = 1;
      v39 = v24 && v85;
      v40 = v90 && v4;
      v41 = !v59;
      v42 = v41 & v34;
      v43 = (unsigned __int64*)GameVariable_82e7c0(8u, 1),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v45 = *v43;
      if (*v43 != 0) {
        v44 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v46 = game_GameVariableTable_Find(
              *(_QWORD**)(game_GameModeData_instance_ + 48), v43),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          v44 = v46 != 0 && *(_DWORD*)(v46 + 32) != 0;
        }
      }
      v59 = v45 == 0;
      a3 = v91;
      v47 = !v59;
      v48 = v47 & v44;
      if (v89 && v87) {
        v49 = 2;
      }
      else {
        v49 = 1;
      }
      if (v40 == 0) {
        v49 = v89 && v87;
      }
      v50 = v42 + v48;
      a4 = v92;
      v51 = v49 + (v88 && v86) + v39 + v37 + v38 + v50;
      v59 = v51 == 1;
      v52 = v51 > 1;
      v53 = "BGM_SYS_MainTheme2";
      if (v59) {
        v53 = "BGM_SYS_MainTheme3";
      }
      if (v52) {
        v6 = "BGM_SYS_MainTheme4";
      }
      else {
        v6 = (char*)v53;
      }
    }
    else {
      v10 = 1;
    }
    v54 = strcmp(v6, "BGM_MV00_05"),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v59 = *GameData_21321f8 == 1 && v54 == 0;
    if (v59) {
      v60 = "BGM_MV00_05_EN";
    }
    else {
      v60 = v6;
    }
    v11 = snd_BGM_requestNext(a1, v60, a3, a4),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v61 = game_sound_g_game_sound_ptr[0];
    v62 = *game_sound_g_game_sound_ptr[0];
    if (*(_BYTE*)(*game_sound_g_game_sound_ptr[0] + 601) == 1) {
      snd_Fade_Fade_10c830_alt1((__int64)v94, 0x0.0p+0f),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      snd_BGM_startPlayerVolumeAll(a1, (__int64)v94, 0x0.0p+0f),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      snd_Fade_Destroy_Fade_alt1(v94),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v62 = *v61;
    }
    snd_BGM_getFirstHandle_alt1((void*)((__int64)v94), *(_QWORD*)(v62 + 8)),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v63 = snd_fnd_WeakHandle_get_alt1((__int64)v94),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v63 == 0) {
      goto LABEL_84;
    }
    v64 = v63;
    (*(void (**)(__int64))(*(_QWORD*)(v63 - 5592) + 104LL))(v63 - 5592),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v65 = GameRoutine_119000(GameData_2265eb0),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    GameRoutine_10ebc0(v65),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v10 != 0) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, _QWORD))(
          *(_QWORD*)(v64 - 5592) + 440LL))((void*)(v93), v64 - 5592, 0),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v66 = snd_fnd_WeakHandle_get_alt1((__int64)v93),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, _QWORD))(
          *(_QWORD*)(v66 - 5592) + 440LL))((void*)(v94), v66 - 5592, 0),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v67 = GameManager_a223a0((__int64)v94),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      GameRoutine_183040(v67, 0),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      *(_WORD*)(*v61 + 2600) = 0;
    LABEL_84:
      GameHr_a360a0(*v61, (unsigned __int8*)v60),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      return v11 & 1;
    }
    if (!snd_Voice_hasFeature_alt1(v64 - 5592, 0x11u)) {
      snd_Voice_hasFeature_alt1(v64 - 5592, 0xEu),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      goto LABEL_84;
    }
    snd_Fade_Fade_10c830_alt1((__int64)v94, 0x0.0p+0f),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    (*(void (**)(__int64, _QWORD, _QWORD*, float))(
        *(_QWORD*)(v64 - 5592) + 424LL))(v64 - 5592, 0, v94,
                                         0x1.0000000000000p+0f),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    snd_Fade_Destroy_Fade_alt1(v94),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    snd_Fade_Fade_10c830_alt1((__int64)v94, 0x0.0p+0f),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    (*(void (**)(__int64, __int64, _QWORD*, double))(
        *(_QWORD*)(v64 - 5592) + 424LL))(v64 - 5592, 1, v94, 0x0.0p+0),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    snd_Fade_Destroy_Fade_alt1(v94),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    snd_Fade_Fade_10c830_alt1((__int64)v94, 0x0.0p+0f),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    (*(void (**)(__int64, __int64, _QWORD*, double))(
        *(_QWORD*)(v64 - 5592) + 424LL))(v64 - 5592, 2, v94, 0x0.0p+0),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    snd_Fade_Destroy_Fade_alt1(v94),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, _QWORD))(
        *(_QWORD*)(v64 - 5592) + 440LL))((void*)(v93), v64 - 5592, 0),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v68 = snd_fnd_WeakHandle_get_alt1((__int64)v93),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, _QWORD))(
        *(_QWORD*)(v68 - 5592) + 440LL))((void*)(v94), v68 - 5592, 0),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v69 = GameManager_a223a0((__int64)v94),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    GameRoutine_183040(v69, 0),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64))(
        *(_QWORD*)(v64 - 5592) + 440LL))((void*)(v93), v64 - 5592, 1),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v70 = snd_fnd_WeakHandle_get_alt1((__int64)v93),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, _QWORD))(
        *(_QWORD*)(v70 - 5592) + 440LL))((void*)(v94), v70 - 5592, 0),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v71 = GameManager_a223a0((__int64)v94),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    GameRoutine_183040(v71, 0),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64))(
        *(_QWORD*)(v64 - 5592) + 440LL))((void*)(v93), v64 - 5592, 2),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v72 = snd_fnd_WeakHandle_get_alt1((__int64)v93),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, _QWORD))(
        *(_QWORD*)(v72 - 5592) + 440LL))((void*)(v94), v72 - 5592, 0),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v73 = GameManager_a223a0((__int64)v94),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    GameRoutine_183040(v73, 0),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v74 = *v61;
    *(_DWORD*)(v74 + 3072) = 0;
    if (*(int*)(v74 + 616) < 1) {
      goto LABEL_84;
    }
    v75 = game_Force_Find(
        (__int64*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL),
        (__int64)&GameData_1ac302b),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v76 = v75 != 0 && (*(_DWORD*)(v75 + 416) & 8) == 0;
    v78 = game_Force_Find(
        (__int64*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL),
        (__int64)&GameData_1aed6ab),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v78 != 0) {
      v76 += (*(_DWORD*)(v78 + 416) & 8) == 0;
    }
    v79 = game_Force_Find(
        (__int64*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL),
        (__int64)&GameData_1a89194),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v79 != 0) {
      v76 += (*(_DWORD*)(v79 + 416) & 8) == 0;
    }
    v80 = game_Force_Find(
        (__int64*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL),
        (__int64)&GameData_1a8d218),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v80 != 0) {
      v76 += (*(_DWORD*)(v80 + 416) & 8) == 0;
    }
    v81 = game_Force_Find(
        (__int64*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL),
        (__int64)&GameData_1acaae0),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v81 != 0) {
      v76 += (*(_DWORD*)(v81 + 416) & 8) == 0;
    }
    v82 = game_Force_Find(
        (__int64*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL),
        (__int64)&GameData_1aafdf7),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v82 != 0) {
      v76 += (*(_DWORD*)(v82 + 416) & 8) == 0;
    }
    v83 = game_Force_Find(
        (__int64*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL),
        (__int64)&GameData_1a891a5),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v83 != 0) {
      v76 += (*(_DWORD*)(v83 + 416) & 8) == 0;
    }
    v84 = game_Force_Find(
        (__int64*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL),
        (__int64)&GameData_1ae1d7b),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v84 != 0 &&
        (unsigned int)((*(_DWORD*)(v84 + 416) & 8) == 0) + v76 > 7) {
      goto LABEL_84;
    }
  }
  else {
    v11 = 0;
  }
  return v11 & 1;
}

__int64 CustomBGM_stop(__int64 a1, __int64 a2, char a3)
{
  _BYTE v6[200];
  _BYTE v7[200];

  snd_Fade_Fade_10cd70(v7);
  if (*(_BYTE*)(game_sound_g_game_sound + 601) == 1) {
    snd_Fade_Fade_10cb00(v6, "FadeTime_AllSounds_Skip_Out");
    GameRoutine_10d050(v7, v6);
    snd_Fade_Destroy_Fade(v6);
    if ((snd_BGM_checkFinished(a1) & 1) == 0 ||
        (snd_BGM_isAnyDelayed(a1) & 1) != 0 ||
        snd_BGM_getFirstPlayerVolume(a1) == 0.0f) {
      snd_Fade_Fade_10c830(v6, 0.0f);
      GameRoutine_10d050(v7, v6);
      snd_Fade_Destroy_Fade(v6);
    }
  }
  if ((*(_BYTE*)(game_sound_g_game_sound + 3076) & 1) == 0) {
    snd_BGM_stop_d9070(a1, v7, a3 & 1);
  }
  return snd_Fade_Destroy_Fade(v7);
}

void CustomBGM_setVolume(__int64 a1, __int64 a2, char a3, float a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64* v10;
  unsigned int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  float v16;
  __int64 v17;
  __int64 v18;
  float v19;
  float v20;
  __int64 v21;
  __int64 v22;
  int v23;
  float v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  _DWORD* v29;
  int v30;
  int v32;
  struct {
    _QWORD v35[26];
    char gap224_[8];
    __int64 v36;
  } v35_;

  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
  v5 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(a1 + 16);
  v35_.v36 = a2;
  *(float*)(a1 + 32) = a4;
  if (v4 != v5) {
    v7 = v4 - 384;
    v8 = a3;
    v9 = 0;
    v10 = game_sound_g_game_sound_ptr[0];
    do {
      if ((*(_BYTE*)(*v10 + 3128) & 1) != 0) {
        return;
      }
      v14 = snd_fnd_WeakHandle_get_alt1(v7 + 56 * v9),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v14 != 0) {
        v15 = v14;
        if (snd_Voice_hasFeature_alt1(v14 - 5592, 0xEu)) {
          (*(void (**)(__int64))(*(_QWORD*)(v15 - 5552) + 120LL))(v15 - 5552),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          if ((v8 & 1) != 0 || v16 > 0x1.cccccc0000000p-1f) {
            if (*(_BYTE*)(v15 + 297) != 1) {
              if ((*(float (**)(__int64))(*(_QWORD*)(v15 - 5552) + 88LL))(
                      v15 - 5552) != a4) {
                (*(void (**)(__int64, __int64, float))(
                    *(_QWORD*)(v15 - 5552) + 96LL))(v15 - 5552, v35_.v36, a4),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
              }
              goto LABEL_5;
            }
            (*(__attribute__((swiftcall)) void (**)(
                PSEUDO_X8, __int64, _QWORD))(*(_QWORD*)(v15 - 5592) + 440LL))(
                (void*)(v35_.v35), v15 - 5592, 0),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v17 = snd_fnd_WeakHandle_get_alt1((__int64)v35_.v35),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
            (*(__attribute__((swiftcall)) void (**)(
                PSEUDO_X8, __int64, __int64))(*(_QWORD*)(v15 - 5592) + 440LL))(
                (void*)(v35_.v35), v15 - 5592, 1),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v18 = snd_fnd_WeakHandle_get_alt1((__int64)v35_.v35),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
            (*(__attribute__((swiftcall)) void (**)(
                PSEUDO_X8, __int64, __int64))(*(_QWORD*)(v15 - 5592) + 440LL))(
                (void*)(v35_.v35), v15 - 5592, 2),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v19 = a4;
            v20 = a4;
            v21 = snd_fnd_WeakHandle_get_alt1((__int64)v35_.v35),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
            if (*(_QWORD*)GameData_212c638 != 0) {
              v20 = 0x0.0p+0f;
              v22 = *(_QWORD*)(*v10 + 32);
              v23 = *(_DWORD*)(v22 + 376);
              if (v23 < 0) {
                v24 = 0x0.0p+0f;
              }
              else if (v23 != 0) {
                v24 = a4;
                v20 = a4;
                if (v23 == 1) {
                  v24 = 0x0.0p+0f;
                  v20 = *(float*)(v22 + 384);
                }
              }
              else {
                v24 = *(float*)(v22 + 384);
              }
              if (*(_DWORD*)(*v10 + 2808) == 1) {
                v19 = 0x0.0p+0f;
              }
              else {
                v19 = v24;
              }
            }
            if (v17 != 0 && (*(float (**)(__int64))(*(_QWORD*)(v17 - 5552) +
                                                    88LL))(v17 - 5552) != a4) {
              (*(void (**)(__int64, __int64, float))(
                  *(_QWORD*)(v17 - 5552) + 96LL))(v17 - 5552, v35_.v36, a4),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
            }
            v8 = a3;
            if (v18 != 0) {
              if ((*(float (**)(__int64))(*(_QWORD*)(v18 - 5552) + 88LL))(
                      v18 - 5552) != v19) {
                (*(void (**)(__int64, __int64, float))(
                    *(_QWORD*)(v18 - 5552) + 96LL))(v18 - 5552, v35_.v36, v19),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
              }
              snd_Fade_Fade_10c830_alt1((__int64)v35_.v35, 0x0.0p+0f),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              (*(void (**)(__int64, __int64, _QWORD*, float))(
                  *(_QWORD*)(v15 - 5592) + 424LL))(v15 - 5592, 1, v35_.v35,
                                                   0x1.0000000000000p+0f),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              snd_Fade_Destroy_Fade_alt1(v35_.v35),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
            }
            if (v21 != 0) {
              if ((*(float (**)(__int64))(*(_QWORD*)(v21 - 5552) + 88LL))(
                      v21 - 5552) != v20) {
                (*(void (**)(__int64, __int64, float))(
                    *(_QWORD*)(v21 - 5552) + 96LL))(v21 - 5552, v35_.v36, v20),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
              }
              snd_Fade_Fade_10c830_alt1((__int64)v35_.v35, 0x0.0p+0f),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              (*(void (**)(__int64, __int64, _QWORD*, float))(
                  *(_QWORD*)(v15 - 5592) + 424LL))(v15 - 5592, 2, v35_.v35,
                                                   0x1.0000000000000p+0f),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              snd_Fade_Destroy_Fade_alt1(v35_.v35),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              if (v20 >= 0x1.0000000000000p-1f) {
                v11 = GameData_21759f0;
                if (GameData_21759f0 < 0) {
                  v25 = (unsigned int)snd_fnd_calcCrc32_alt1("BGM_Hub12", 0),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
                  v26 = snd_data_getMuseumDataCount_alt1(),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
                  if (v26 < 1) {
                  LABEL_48:
                    GameData_21759f0 = -1;
                    goto LABEL_5;
                  }
                  v27 = v26;
                  v28 = 0;
                  while (1) {
                    v29 = snd_data_getMuseumData_alt1(v28),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                    if (v29[3] == v25) {
                      break;
                    }
                    v30 = v29[6];
                    if (v30 != 0 && v30 == v25) {
                      break;
                    }
                    v32 = v29[7];
                    if (v32 != 0 && v32 == v25) {
                      break;
                    }
                    if (v27 == ++v28) {
                      goto LABEL_48;
                    }
                  }
                  v11 = v29[1];
                  GameData_21759f0 = v11;
                  if ((v11 & 0x80000000) != 0) {
                    goto LABEL_5;
                  }
                }
                v12 = 1 << v11;
                v13 = *v10 + 4LL * (v11 >> 5);
                *(_DWORD*)(v13 + 2548) |= v12;
              }
            }
          }
        }
      }
    LABEL_5:
      ++v9;
    } while (v9 != 6);
  }
}

void CustomBGM_refreshVolume(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  unsigned int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  float v14;
  float v15;
  float v16;
  __int64 v17;
  int v18;
  float v19;
  float v20;
  float v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  _DWORD* v26;
  int v27;
  int v29;
  struct {
    _QWORD v31[26];
    char gap208_[8];
    __int64 v32;
  } v31_;

  v2 = *(_QWORD*)(a1 + 8);
  v1 = *(_QWORD*)(a1 + 16);
  v31_.v32 = a1;
  if (v1 != v2) {
    v3 = v1 - 384;
    v4 = 0;
    v5 = game_sound_g_game_sound_ptr[0];
    do {
      if ((*(_BYTE*)(*v5 + 3128) & 1) != 0) {
        return;
      }
      v9 = snd_fnd_WeakHandle_get_alt1(v3 + 56 * v4);
      if (v9 != 0) {
        v10 = v9;
        if (snd_Voice_hasFeature_alt1(v9 - 5592, 0xEu) &&
            (*(float (**)(__int64))(*(_QWORD*)(v10 - 5552) + 120LL))(
                v10 - 5552) > 0x1.cccccc0000000p-1f) {
          if (*(_BYTE*)(v10 + 297) != 1) {
            v20 = (*(float (**)(__int64))(*(_QWORD*)(v10 - 5552) + 88LL))(v10 -
                                                                          5552);
            v21 = *(float*)(v31_.v32 + 32);
            if (v20 != v21) {
              snd_Fade_Fade_10c830_alt1((__int64)v31_.v31, 0x0.0p+0f);
              (*(void (**)(__int64, _QWORD*, float))(
                  *(_QWORD*)(v10 - 5552) + 96LL))(v10 - 5552, v31_.v31, v21);
              snd_Fade_Destroy_Fade_alt1(v31_.v31);
            }
            goto LABEL_5;
          }
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, _QWORD))(
              *(_QWORD*)(v10 - 5592) + 440LL))((void*)(v31_.v31), v10 - 5592,
                                               0);
          v11 = snd_fnd_WeakHandle_get_alt1((__int64)v31_.v31);
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64))(
              *(_QWORD*)(v10 - 5592) + 440LL))((void*)(v31_.v31), v10 - 5592,
                                               1);
          v12 = snd_fnd_WeakHandle_get_alt1((__int64)v31_.v31);
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64))(
              *(_QWORD*)(v10 - 5592) + 440LL))((void*)(v31_.v31), v10 - 5592,
                                               2);
          v13 = snd_fnd_WeakHandle_get_alt1((__int64)v31_.v31);
          v14 = *(float*)(v31_.v32 + 32);
          v15 = v14;
          v16 = v14;
          if (GameData_21c6978 != 0) {
            v16 = 0x0.0p+0f;
            v17 = *(_QWORD*)(*v5 + 32);
            v18 = *(_DWORD*)(v17 + 376);
            if (v18 < 0) {
              v19 = 0x0.0p+0f;
            }
            else if (v18 != 0) {
              v19 = *(float*)(v31_.v32 + 32);
              v16 = v19;
              if (v18 == 1) {
                v19 = 0x0.0p+0f;
                v16 = *(float*)(v17 + 384);
              }
            }
            else {
              v19 = *(float*)(v17 + 384);
            }
            if (*(_DWORD*)(*v5 + 2808) == 1) {
              v15 = 0x0.0p+0f;
            }
            else {
              v15 = v19;
            }
          }
          if (v11 != 0 && (*(float (**)(__int64))(*(_QWORD*)(v11 - 5552) +
                                                  88LL))(v11 - 5552) != v14) {
            snd_Fade_Fade_10c830_alt1((__int64)v31_.v31, 0x0.0p+0f);
            (*(void (**)(__int64, _QWORD*, float))(
                *(_QWORD*)(v11 - 5552) + 96LL))(v11 - 5552, v31_.v31, v14);
            snd_Fade_Destroy_Fade_alt1(v31_.v31);
          }
          if (v12 != 0) {
            if ((*(float (**)(__int64))(*(_QWORD*)(v12 - 5552) + 88LL))(
                    v12 - 5552) != v15) {
              snd_Fade_Fade_10c830_alt1((__int64)v31_.v31, 0x0.0p+0f);
              (*(void (**)(__int64, _QWORD*, float))(
                  *(_QWORD*)(v12 - 5552) + 96LL))(v12 - 5552, v31_.v31, v15);
              snd_Fade_Destroy_Fade_alt1(v31_.v31);
            }
            snd_Fade_Fade_10c830_alt1((__int64)v31_.v31, 0x0.0p+0f);
            (*(void (**)(__int64, __int64, _QWORD*, float))(
                *(_QWORD*)(v10 - 5592) + 424LL))(v10 - 5592, 1, v31_.v31,
                                                 0x1.0000000000000p+0f);
            snd_Fade_Destroy_Fade_alt1(v31_.v31);
          }
          if (v13 != 0) {
            if ((*(float (**)(__int64))(*(_QWORD*)(v13 - 5552) + 88LL))(
                    v13 - 5552) != v16) {
              snd_Fade_Fade_10c830_alt1((__int64)v31_.v31, 0x0.0p+0f);
              (*(void (**)(__int64, _QWORD*, float))(
                  *(_QWORD*)(v13 - 5552) + 96LL))(v13 - 5552, v31_.v31, v16);
              snd_Fade_Destroy_Fade_alt1(v31_.v31);
            }
            snd_Fade_Fade_10c830_alt1((__int64)v31_.v31, 0x0.0p+0f);
            (*(void (**)(__int64, __int64, _QWORD*, float))(
                *(_QWORD*)(v10 - 5592) + 424LL))(v10 - 5592, 2, v31_.v31,
                                                 0x1.0000000000000p+0f);
            snd_Fade_Destroy_Fade_alt1(v31_.v31);
            if (v16 >= 0x1.0000000000000p-1f) {
              v6 = GameData_21759f0;
              if (GameData_21759f0 < 0) {
                v22 = (unsigned int)snd_fnd_calcCrc32_alt1("BGM_Hub12", 0);
                v23 = snd_data_getMuseumDataCount_alt1();
                if (v23 < 1) {
                LABEL_47:
                  GameData_21759f0 = -1;
                  goto LABEL_5;
                }
                v24 = v23;
                v25 = 0;
                while (1) {
                  v26 = snd_data_getMuseumData_alt1(v25);
                  if (v26[3] == v22) {
                    break;
                  }
                  v27 = v26[6];
                  if (v27 != 0 && v27 == v22) {
                    break;
                  }
                  v29 = v26[7];
                  if (v29 != 0 && v29 == v22) {
                    break;
                  }
                  if (v24 == ++v25) {
                    goto LABEL_47;
                  }
                }
                v6 = v26[1];
                GameData_21759f0 = v6;
                if ((v6 & 0x80000000) != 0) {
                  goto LABEL_5;
                }
              }
              v7 = 1 << v6;
              v8 = *v5 + 4LL * (v6 >> 5);
              *(_DWORD*)(v8 + 2548) |= v7;
            }
          }
        }
      }
    LABEL_5:
      ++v4;
    } while (v4 != 6);
  }
}

#pragma GCC visibility pop
