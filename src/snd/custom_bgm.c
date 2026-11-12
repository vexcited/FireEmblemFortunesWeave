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
