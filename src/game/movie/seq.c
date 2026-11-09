#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameManager_a30f00(_QWORD, _QWORD);
__int64 GameManager_a30fe0(_QWORD, _QWORD);
__int64 GameManager_a31200(_QWORD, _QWORD);
__int64 GameRoutine_11cfc60(_QWORD, _QWORD);
__int64 GameRoutine_181a480(void);
__int64 GameRoutine_181a7e0(void);
__int64 GameRoutine_181aa10(void);
__int64 GameRoutine_18cf910(_QWORD, _QWORD);
__int64 GameRoutine_18d0ec0(_QWORD, _QWORD);
__int64 GameRoutine_18d1b90(_QWORD);
__int64 GameRoutine_657a50(_QWORD, _QWORD);
__int64 GameRoutine_809ba0(float);
__int64 GameRoutine_a30c60(_QWORD);
__int64 GameRoutine_a312c0(_QWORD, _QWORD, _QWORD);
__int64 nn_os_TryWaitLightEvent(_QWORD);
__int64 snd_BGM_checkFinished(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10c910(_QWORD);
__int64 snd_isPlaying_100430(_QWORD);
__int64 snd_release_ffb30(_QWORD);
extern __int64 GameData_21fa5e0;
extern __int64 GameData_2240058;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_sound_g_game_sound;
extern __int64* GameData_212c598[2];
extern __int64* game_sound_g_game_sound_ptr[5];
__int64 Seq_11cd8f0(__int64 result);
__int64 Seq_Unknown3(__int64 a1);
__int64 Seq_11cd9a0(__int64 a1);
bool Seq_11cdb40(__int64 a1);
__int64 Seq_11ce360(__int64 result);
__int64 Seq_11ce880(__int64 result);
__int64 Seq_11cf400(__int64 a1);
__int64 Seq_Unknown12_11cf4a0(__int64 result);

__int64 Seq_11cd8f0(__int64 result)
{
  if ((*(_BYTE*)(result + 690) & 1) == 0) {
    result = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      return GameRoutine_809ba0(0.5);
    }
  }
  return result;
}

__int64 Seq_Unknown3(__int64 a1)
{
  __int64 result;
  int v2;

  result = *(_QWORD*)(a1 + 680);
  if (result != 0) {
    v2 = *(_DWORD*)(result + 4);
    *(_DWORD*)result = v2;
    if (v2 > 2) {
      if (v2 == 3) {
        if (*(_BYTE*)(result + 41) == 1 && (*(_BYTE*)(result + 43) & 1) == 0) {
          *(_DWORD*)(result + 4) = 4;
        }
      }
      else if (v2 == 4) {
        return GameRoutine_181aa10();
      }
    }
    else if (v2 == 1) {
      return GameRoutine_181a480();
    }
    else if (v2 == 2) {
      return GameRoutine_181a7e0();
    }
  }
  return result;
}

__int64 Seq_11cd9a0(__int64 a1)
{
  __int64 result;
  unsigned __int64 v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  _BYTE v10[200];

  if ((*(_BYTE*)(a1 + 691) & 1) == 0) {
    GameRoutine_18cf910(*GameData_212c598[0], a1 + 720);
  }
  result = GameRoutine_a30c60(game_sound_g_game_sound);
  v3 = *(_QWORD*)(GameData_2240058 + 72) - *(_QWORD*)(GameData_2240058 + 64);
  if ((int)(v3 >> 3) >= 1) {
    v4 = (v3 >> 3) & 0x7FFFFFFF;
    for (i = 0; v4 != i; ++i) {
      v6 = *(_QWORD*)(*(_QWORD*)(GameData_2240058 + 64) + 8 * i);
      v7 = *(_DWORD*)(v6 + 40);
      v8 = *(_DWORD*)(v6 + 32);
      v9 = *(_QWORD*)(v6 + 48);
      if (v8 != 0) {
        if (v8 == 2) {
          if (GameData_21fa5e0 == 0) {
            continue;
          }
        }
        else if (v8 != 1 || GameData_21fa5e0 != 0) {
          continue;
        }
      }
      if (*(_DWORD*)(v6 + 36) == -1) {
        if (v7 <= 2) {
          if (v7 != 1 && v7 != 2) {
            continue;
          }
          snd_Fade_Fade_10c910(v10);
          GameRoutine_a312c0(game_sound_g_game_sound, v9, v10);
        }
        else {
          switch (v7) {
          case 3:
            snd_Fade_Fade_10c910(v10);
            GameManager_a30fe0(game_sound_g_game_sound, v10);
            break;
          case 4:
            snd_Fade_Fade_10c910(v10);
            GameManager_a30f00(game_sound_g_game_sound, v10);
            break;
          case 5:
            snd_Fade_Fade_10c910(v10);
            GameManager_a31200(game_sound_g_game_sound, v10);
            break;
          default:
            continue;
          }
        }
        result = snd_Fade_Destroy_Fade(v10);
        *(_DWORD*)(a1 + 752) = i;
      }
    }
  }
  return result;
}

bool Seq_11cdb40(__int64 a1)
{
  __int64 v2;

  if ((snd_BGM_checkFinished(*(_QWORD*)(*game_sound_g_game_sound_ptr[0] + 8)) &
       1) != 0) {
    if (*(_BYTE*)(a1 + 691) == 1) {
      LOBYTE(v2) = (unsigned int)(*(_DWORD*)(*(_QWORD*)(a1 + 680) + 4LL) - 3) <
                   0xFFFFFFFE;
    }
    else {
      v2 = GameRoutine_18d0ec0(*GameData_212c598[0] + 144, a1 + 720);
      if (v2 != 0) {
        LOBYTE(v2) = GameRoutine_18d1b90(*(_QWORD*)(v2 + 40));
      }
    }
  }
  else {
    LOBYTE(v2) = 0;
  }
  return (v2 & 1) == 0;
}

__int64 Seq_11ce360(__int64 result)
{
  __int64 v1;
  bool v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  unsigned __int8* v8;
  unsigned int v9;
  __int16 v10;
  __int64 v11;

  v1 = result;
  if (game_ProcGameSkipView_instance_ != 0 &&
      (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 1) == 0 &&
      (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3
           ? (v2 = (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) == 0)
           : (v2 = false),
       v2)) {
    v11 = *(_QWORD*)(result + 8);
    if (v11 != 0) {
      while (1) {
        if (*(_BYTE*)v11 == 2) {
          if (*(_DWORD*)(v11 + 32) == 2) {
            *(_QWORD*)(result + 16) = v11;
            v10 = *(_WORD*)(result + 136) & 0xFF7F;
            goto LABEL_37;
          }
        }
        else if (*(_BYTE*)v11 == 0) {
          return result;
        }
        v11 += 64;
      }
    }
  }
  else {
    result = snd_isPlaying_100430("movie_voice");
    if ((result & 1) != 0) {
      result = snd_isPlaying_100430("movie_se");
      if ((result & 1) != 0) {
        if ((*(_BYTE*)(v1 + 691) & 1) != 0 ||
            (v3 = GameData_212c598[0],
             (v4 = GameRoutine_18d0ec0(*GameData_212c598[0] + 144, v1 + 720)) !=
                 0) &&
                (*(_BYTE*)(*(_QWORD*)(v4 + 40) + 4320LL) & 1) != 0 ||
            (result = GameRoutine_18d0ec0(*v3 + 144, v1 + 720)) != 0 &&
                ((result = nn_os_TryWaitLightEvent(*(_QWORD*)(result + 40) +
                                                   684LL)) &
                 1) != 0) {
          if ((*(_BYTE*)(v1 + 691) & 1) == 0 &&
              game_ProcFadeView_instance_ != 0) {
            GameRoutine_809ba0(0.0);
          }
          snd_release_ffb30("movie_voice");
          result = snd_release_ffb30("movie_se");
          if (*(_BYTE*)(v1 + 691) == 1) {
            v5 = *(_QWORD*)(v1 + 680);
            if ((*(_BYTE*)(v5 + 43) & 1) == 0) {
              v6 = *(_DWORD*)(v5 + 4);
              if ((unsigned int)(v6 - 3) <= 0xFFFFFFFD) {
                if (v6 <= 4) {
                  v7 = 4;
                }
                else {
                  v7 = 5;
                }
                *(_DWORD*)(v5 + 4) = v7;
              }
            }
          }
          v8 = *(unsigned __int8**)(v1 + 16);
          if (v8 != nullptr) {
            v9 = *v8;
            if (v9 <= 0x10 && ((1 << v9) & 0x1CE00) != 0) {
              *(_WORD*)(v1 + 136) |= 0x80u;
            }
          }
          v10 = *(_WORD*)(v1 + 136) | 8;
        LABEL_37:
          *(_WORD*)(v1 + 136) = v10;
        }
      }
    }
  }
  return result;
}

__int64 Seq_11ce880(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 8);
  if (v1 != 0) {
    while (1) {
      if (*(_BYTE*)v1 == 2) {
        if (*(_DWORD*)(v1 + 32) == *(float*)(result + 744) >= 0.0) {
          *(_QWORD*)(result + 16) = v1;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v1 == 0) {
        return result;
      }
      v1 += 64;
    }
  }
  return result;
}

__int64 Seq_11cf400(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int8* v6;
  unsigned int v7;
  bool v8;
  int v9;

  v3 = *(_QWORD*)(a1 + 152);
  result = a1 + 152;
  if (*(_BYTE*)(v3 + 24) == 1) {
    v4 = *(_QWORD*)(a1 + 656);
    if (v4 != 0) {
      v5 = *(unsigned __int16*)(v4 + 42);
    }
    else {
      v5 = 0;
    }
    result = GameRoutine_11cfc60(result, v5);
    v6 = *(unsigned __int8**)(a1 + 16);
    if (v6 != nullptr) {
      v7 = *v6;
      v8 = v7 > 0x10;
      v9 = (1 << v7) & 0x1CE00;
      if (!v8 && v9 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 Seq_Unknown12_11cf4a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  _BOOL4 v5;

  v1 = *(_QWORD*)(result + 40);
  if (v1 != 0 && (*(_WORD*)(v1 + 136) & 1) == 0) {
    v2 = result;
    GameRoutine_657a50(*(_QWORD*)(result + 40), 1);
    result = v2;
  }
  v3 = *(_QWORD*)(result + 8);
  v4 = *(_QWORD*)(result + 16);
  if (v3 > v4) {
  LABEL_7:
    v5 = true;
  }
  else {
    while (*(_BYTE*)v4 != 2) {
      v4 -= 64LL;
      if (v3 > v4) {
        goto LABEL_7;
      }
    }
    v5 = *(_DWORD*)(v4 + 32) != 2;
  }
  if (v3 != 0 && v5) {
    while (1) {
      if (*(_BYTE*)v3 == 2) {
        if (*(_DWORD*)(v3 + 32) == 2) {
          *(_QWORD*)(result + 16) = v3;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v3 == 0) {
        return result;
      }
      v3 += 64LL;
    }
  }
  return result;
}

#pragma GCC visibility pop
