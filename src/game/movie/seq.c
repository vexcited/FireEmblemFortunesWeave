#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
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
_QWORD* GameManager_a2e490(__int64, __int64, char);
_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_11d0a10(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_1843a40(void);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8224a0(_QWORD);
__int64 LayoutAccessor_155e140(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 snd_Fade_Fade_10cb00(_QWORD, _QWORD);
__int64 snd_Fade_Fade_10cd70(_QWORD, _QWORD);
__int64 snd_Param_isEnvelopeEnded(_QWORD);
__int64 snd_Param_isEnvelopeFading(_QWORD);
__int64 snd_Param_isEnvelopeReleased(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_Setup_155dda0(_QWORD, _QWORD);
extern __int64 GameData_21cf840;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gameui_Footer_instance_;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
float snd_Fade_getTime(_QWORD);
struct PseudoSret snd_BGM_getFirstHandle(_QWORD);
void GameRoutine_a290c0(__int64, __int64, __int64, int, char, float);
void __attribute__((noreturn)) GameRoutine_11d1170(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void Seq_a30f00(__int64 a1, __int64 a2);
void Seq_a31200(__int64 a1, __int64 a2);
__int64 Seq_11cf9d0(__int64 a1);
__int64 Seq_11cfc60(_QWORD* a1, __int16 a2);

void Seq_a30f00(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  _BYTE v6[200];
  _QWORD v7[2];

  *(struct PseudoSret*)(v7) = snd_BGM_getFirstHandle(*(_QWORD*)(a1 + 8));
  if ((snd_fnd_WeakHandle_isValid(v7) & 1) != 0) {
    v4 = snd_fnd_WeakHandle_get(v7);
    v5 = v4 != 0 ? v4 - 5592 : 0LL;
    if ((snd_Param_isEnvelopeReleased(v5 + 40) & 1) == 0 &&
        (snd_Param_isEnvelopeFading(v5 + 40) & 1) == 0 &&
        (snd_Param_isEnvelopeEnded(v5 + 40) & 1) == 0) {
      if (snd_Fade_getTime(a2) == 0.0f) {
        snd_Fade_Fade_10cb00(v6, "FadeTime_BGM_Bmap_Out_Next");
      }
      else {
        snd_Fade_Fade_10cd70(v6, a2);
      }
      GameManager_a2e490(a1, (__int64)v6, 0);
      snd_Fade_Destroy_Fade(v6);
      *(_BYTE*)(a1 + 3017) = 1;
    }
  }
}

void Seq_a31200(__int64 a1, __int64 a2)
{
  char v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v7;
  __int64 v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  char v13;
  float v14;
  __int64 v15;
  __int64 v16;

  v3 = *(_BYTE*)(a1 + 2824);
  v4 = *(unsigned __int8*)(a1 + 2896);
  v5 = (_QWORD*)(a1 + 2824);
  if ((v3 & 1) != 0) {
    v9 = (v4 & 1) == 0;
    v10 = v4 >> 1;
    if (v9) {
      v11 = a1 + 2897;
    }
    else {
      v11 = *(_QWORD*)(a1 + 2912);
    }
    if (v9) {
      v12 = v10;
    }
    else {
      v12 = *(_QWORD*)(a1 + 2904);
    }
    SpineModel_64dde0(v5, v11, v12);
  }
  else if ((v4 & 1) != 0) {
    GameRoutine_64df20(v5, *(_QWORD*)(a1 + 2912), *(_QWORD*)(a1 + 2904));
  }
  else {
    v7 = *(_QWORD*)(a1 + 2904);
    v8 = *(_QWORD*)(a1 + 2912);
    *v5 = *(_QWORD*)(a1 + 2896);
    v5[1] = v7;
    v5[2] = v8;
  }
  v13 = *(_BYTE*)(a1 + 2824);
  v14 = *(float*)(a1 + 2892);
  v15 = *(_QWORD*)(a1 + 2840);
  *(_BYTE*)(a1 + 601) = 0;
  if ((v13 & 1) != 0) {
    v16 = v15;
  }
  else {
    v16 = a1 + 2825;
  }
  GameRoutine_a290c0(a1, v16, a2, (int)v14, 0, 0.0);
}

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

__int64 Seq_11cf9d0(__int64 a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _BOOL4 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 result;
  __int64 v20;

  *(_BYTE*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 184) = 1065353216;
  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)(a1 + 160), "N_TitleLogo", 0);
  v4 = GameData_21cf840;
  if (GameData_21cf840 != 0) {
    v5 = *(_DWORD*)(GameData_21cf840 + 16) - 1;
    *(_DWORD*)(GameData_21cf840 + 16) = v5;
    if (v5 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v4 + 8) + 8LL))(v4 + 8);
    }
  }
  if (game_gameui_Footer_instance_ != 0) {
    LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
  }
  if (*(_QWORD*)(a1 + 32) != 0) {
    v6 = *(_QWORD*)(a1 + 24);
    if (v6 != 0) {
      v7 = std___1___shared_weak_count_lock(v6, v3);
      if (v7 != 0) {
        v8 = *(_QWORD*)(a1 + 16);
        if (v8 != 0) {
          v1 = *(unsigned __int8*)(v8 + 24);
          v9 = v8 + 152;
          if (v1 == 0) {
            v9 = 0;
          }
          v10 = v9 != *(_QWORD*)(a1 + 32);
        }
        else {
          v10 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v10) {
            goto LABEL_16;
          }
        }
        else {
          v12 = v7;
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak(v12);
          if (v10) {
            goto LABEL_16;
          }
        }
        if ((v1 & 1) == 0) {
          goto LABEL_27;
        }
      LABEL_21:
        LayoutAccessor_155e830(a1 + 16, 0);
        if (*(_QWORD*)a1 != 0) {
          *(_BYTE*)(*(_QWORD*)a1 + 2376LL) = 1;
        }
        v13 = *(_QWORD*)(a1 + 8);
        *(_QWORD*)a1 = 0;
        *(_QWORD*)(a1 + 8) = 0;
        if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak(v13);
        }
        LayoutAccessor_155e140(a1 + 16);
        goto LABEL_27;
      }
    LABEL_16:
      v11 = *(_QWORD*)(a1 + 24);
      if (v11 == 0 || *(_QWORD*)(v11 + 8) == -1) {
        goto LABEL_27;
      }
      goto LABEL_21;
    }
  }

LABEL_27:
  v14 = *(_QWORD*)(a1 + 192);
  if (v14 != 0) {
    *(_QWORD*)(a1 + 200) = v14;
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15,
                                  v14);
  }
  if ((*(_BYTE*)(a1 + 120) & 1) != 0) {
    v16 = *(_QWORD*)(a1 + 136);
    if (v16 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
    }
  }
  LayoutAccessor_155e140(a1 + 16);
  v18 = *(_QWORD*)(a1 + 112);
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v18);
  }
  GameRoutine_1564060(a1 + 64);
  GameRoutine_1563f90(a1 + 40, *(_QWORD*)(a1 + 48));
  result = *(_QWORD*)(a1 + 24);
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v20 = *(_QWORD*)(a1 + 8);
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    return std___1___shared_weak_count___release_weak(v20);
  }
  return result;
}

__int64 Seq_11cfc60(_QWORD* a1, __int16 a2)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  _BOOL8 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  _QWORD* v21;
  __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
  char* v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  _QWORD v40[2];

  v2 = a1[1];
  v3 = a1 + 2;
  v5 = a1;
  v40[0] = *a1;
  v40[1] = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0(a1 + 2, v40);
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak(v2);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0(a1 + 2, v40);
  }
  LayoutAccessor_155e830(v3, 1);
  *((_WORD*)v5 + 113) = a2;
  v6 = GameRoutine_8224a0(20);
  v8 = game_GameModeData_instance_ != 0 &&
       (v7 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), v6)) != 0 &&
       *(_DWORD*)(v7 + 32) == 1;
  *((_BYTE*)v5 + 222) = v8;
  ui_LayoutAccessor_SetPaneVisible(v3, "N_TextArea", v8);
  ui_LayoutAccessor_SetPaneVisible(v3, "Bg_TextArea",
                                   *((unsigned __int16*)v5 + 113) == 1);
  LayoutAccessor_1562cf0(v3, "In");
  LayoutAccessor_1562cf0(v3, "Caption_In");
  v9 = ui_LayoutAccessor_FindPane(v3, "N_ScrollRoot");
  if (v9 != 0) {
    v10 = *(_QWORD*)(v9 + 40);
    if (v10 != v9 + 32) {
      v11 = 0;
      do {
        v10 = *(_QWORD*)(v10 + 8);
        ++v11;
      } while (v10 != v9 + 32);
      v12 = 0;
      v13 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v37 = v3;
      do {
        v15 = (_QWORD*)fw_memory_HeapManager_Allocate(*v13, 72, 16, 0);
        v15[2] = 0;
        v15[3] = 0;
        v15[4] = 0;
        v15[5] = 0;
        *v15 = 0;
        v15[1] = 0;
        *((_DWORD*)v15 + 4) = -1082130432;
        v15[6] = 0;
        v15[7] = 0;
        v15[8] = 0;
        *(_QWORD*)((char*)v15 + 20) = 0;
        *(_QWORD*)((char*)v15 + 28) = 0;
        *(_QWORD*)((char*)v15 + 36) = 0;
        v16 = game_util_Format("L_ScrollItem%02d", v12);
        GameRoutine_1560070(&v38, v3, v16);
        v18 = v38;
        v17 = v39;
        if (v39 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v39 + 16), 1u,
                                    memory_order_relaxed);
        }
        v19 = v15[1];
        *v15 = v18;
        v15[1] = v17;
        if (v19 != 0) {
          std___1___shared_weak_count___release_weak(v19);
          v17 = v39;
        }
        if (v17 != 0) {
          v17 = std___1___shared_weak_count___release_weak(v17);
        }
        v21 = (_QWORD*)v5[25];
        v20 = v5[26];
        if ((unsigned __int64)v21 < v20) {
          *v21 = v15;
          v14 = (__int64)(v21 + 1);
        }
        else {
          v22 = v5[24];
          v23 = v13;
          v24 = v5;
          v25 = (char*)v21 - v22;
          v26 = ((__int64)v21 - v22) >> 3;
          v27 = v26 + 1;
          if ((unsigned __int64)(v26 + 1) >> 61 != 0) {
            GameRoutine_11d1170(v17);
          }
          v28 = v20 - v22;
          if (v28 >> 2 > v27) {
            v27 = v28 >> 2;
          }
          if ((unsigned __int64)v28 >= 0x7FFFFFFFFFFFFFF8LL) {
            v29 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v29 = v27;
          }
          if (v29 != 0) {
            if (v29 >> 61 != 0) {
              GameRoutine_60a210(v17);
            }
            v30 = fw_memory_HeapManager_Allocate(*v23, 8 * v29, 16, 0);
          }
          else {
            v30 = 0;
          }
          v31 = v30 + 8 * v29;
          v32 = (char*)v21 - v22;
          v33 = (__int64)&v25[v30 + -8 * v26];
          *(_QWORD*)&v25[v30] = v15;
          v14 = (__int64)&v25[v30 + 8];
          memcpy(v33, v22, v32);
          v24[24] = v33;
          v24[25] = v14;
          v5 = v24;
          v24[26] = v31;
          if (v22 != 0) {
            v13 = v23;
            v34 = 128;
            if (*(_QWORD*)(*v23 + 200LL) == 0) {
              v34 = 56;
            }
            nn_mem_StandardAllocator_Free(*v23 + v34, v22);
          }
          else {
            v13 = v23;
          }
          v3 = v37;
        }
        ++v12;
        v5[25] = v14;
      } while (v11 != v12);
    }
  }
  v35 = ui_LayoutAccessor_FindPane(v3, "TitleLogo");
  if (v35 != 0 &&
      __dynamic_cast(v35, GameData_212d670[0], GameData_212d678[0], 0) != 0) {
    GameRoutine_1843a40();
  }
  v5[20] = v3;
  v5[21] = 0;
  v5[22] = 0x3F80000000000000LL;
  v5[23] = 1065353216;
  return GameRoutine_11d0a10(v5 + 19);
}

#pragma GCC visibility pop
