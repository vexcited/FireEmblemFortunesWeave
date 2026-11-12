#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameManager_a2f490(_QWORD);
__int64 GameRoutine_13755a0(void);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_17ccc20(_QWORD, _QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10c910(_QWORD, _QWORD);
__int64 snd_Fade_Fade_10cb00(_QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_stop_ffc40(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 ui_LayoutAccessor_Setup_155dda0(_QWORD, _QWORD);
extern __int64 GameData_2241720;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_frame_clock;
extern __int64 game_g_game_setting_ptr;
extern __int64 game_sound_g_game_sound;
__int64 TelopTitle_Unknown30();
__int64 TelopTitle_Unknown31(__int64 a1);
__int64 TelopTitle_Unknown44(__int64 result);
__int64 TelopTitle_Unknown12(__int64 result);
__attribute__((swiftcall)) void snd_a30960(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64* game_vstring_kEmpty_ptr[2];
__int64 TelopTitle_Unknown35(__int64 result);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_14a1520(__int64*, char);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
__int64 snd_stop_ffc40_alt1(__int64*, __int64) __asm__("snd_stop_ffc40");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*game_telop_TelopTitle_vtable[])();
extern __int64 GameData_21f61c0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_21f61c8;
void TelopReliance_1386f80(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
void TelopTitle_Destructor(__int64 a1);
_QWORD* ui_LayoutAccessor_Setup_155dda0_alt1(_QWORD*, _QWORD*) __asm__(
    "ui_LayoutAccessor_Setup_155dda0");
__int64 LayoutAccessor_155e830(__int64 result, char);

void TelopTitle_Destructor(__int64 a1)
{
  _DWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  _BYTE* v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    _DWORD* v20;
    __int64 v21;
  } v20_;

  *(_QWORD*)a1 = game_telop_TelopTitle_vtable;
  v2 = *(_DWORD**)(a1 + 872);
  if (*(_QWORD*)v2 != 0 && *(_DWORD*)(*(_QWORD*)v2 + 16LL) == v2[2]) {
    v3 = *(_QWORD*)(a1 + 880);
    if (v3 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
      v20_.v21 = v3;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
    }
    else {
      v20_.v21 = 0;
    }
    v20_.v20 = v2;
    GameRoutine_14a1520((__int64*)&v20_.v20, 1);
    v4 = v20_.v21;
    if (v20_.v21 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v20_.v21 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak_alt1(v4);
    }
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak_alt1(v3);
    }
    **(_QWORD**)(a1 + 872) = 0;
  }
  if ((snd_fnd_WeakHandle_isValid_alt1((__int64*)(a1 + 888)) & 1) != 0) {
    snd_Fade_Fade_10c830_alt1((__int64)&v20_.v20, 0x0.0p+0f);
    snd_stop_ffc40_alt1((__int64*)(a1 + 888), (__int64)&v20_.v20);
    snd_Fade_Destroy_Fade_alt1(&v20_.v20);
  }
  v5 = game_sound_g_game_sound;
  v6 = *(unsigned __int8*)(game_sound_g_game_sound + 2760);
  v7 = game_sound_g_game_sound + 2760;
  v8 = (__int64*)(game_sound_g_game_sound + 2784);
  if ((*(_BYTE*)(game_sound_g_game_sound + 2784) & 1) != 0) {
    v10 = (v6 & 1) == 0;
    v11 = v6 >> 1;
    if (v10) {
      v12 = game_sound_g_game_sound + 2761;
    }
    else {
      v12 = *(_QWORD*)(game_sound_g_game_sound + 2776);
    }
    if (v10) {
      v13 = v11;
    }
    else {
      v13 = *(_QWORD*)(game_sound_g_game_sound + 2768);
    }
    SpineModel_64dde0(v8, v12, v13);
    if ((*(_BYTE*)v7 & 1) != 0) {
      goto LABEL_28;
    }
  }
  else if ((v6 & 1) != 0) {
    GameRoutine_64df20(v8, *(_QWORD*)(game_sound_g_game_sound + 2776),
                       *(_QWORD*)(game_sound_g_game_sound + 2768));
    if ((*(_BYTE*)v7 & 1) != 0) {
    LABEL_28:
      v14 = *(_BYTE**)(v5 + 2776);
      *(_QWORD*)(v5 + 2768) = 0;
      goto LABEL_29;
    }
  }
  else {
    v9 = *(_QWORD*)(game_sound_g_game_sound + 2768);
    *v8 = *(_QWORD*)v7;
    v8[1] = v9;
    v8[2] = *(_QWORD*)(v7 + 16);
    if ((*(_BYTE*)v7 & 1) != 0) {
      goto LABEL_28;
    }
  }
  v14 = (_BYTE*)(v5 + 2761);
  *(_BYTE*)(v5 + 2760) = 0;
LABEL_29:
  *v14 = 0;
  v15 = GameData_2241720;
  if (GameData_2241720 != 0) {
    v16 = *(_DWORD*)(GameData_2241720 + 1736) - 1;
    *(_DWORD*)(GameData_2241720 + 1736) = v16;
    if (v16 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v15 + 1728) + 8LL))(v15 + 1728);
    }
  }
  if (--GameData_21f61c8 == 0) {
    (*(void (**)(__int64))(GameData_21f61c0 + 8))((__int64)&GameData_21f61c0);
  }
  v17 = *(_QWORD*)(a1 + 880);
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak_alt1(v17);
    if ((*(_BYTE*)(a1 + 840) & 1) == 0) {
      goto LABEL_42;
    }
  }
  else if ((*(_BYTE*)(a1 + 840) & 1) == 0) {
    goto LABEL_42;
  }
  v18 = *(_QWORD*)(a1 + 856);
  if (v18 != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19,
                                  v18);
  }
LABEL_42:
  TelopReliance_1386f80(a1);
}

__int64 TelopTitle_Unknown30()
{
  GameRoutine_13755a0();
  if (GameData_2241720 != 0) {
    GameRoutine_17ccc20(GameData_2241720, 0, 0);
  }
  return GameManager_a2f490(game_sound_g_game_sound);
}

__int64 TelopTitle_Unknown31(__int64 a1)
{
  __int64 v1;
  __int64 result;
  unsigned __int8* v4;
  unsigned int v5;
  bool v6;
  int v7;
  _QWORD v9[2];

  v1 = *(_QWORD*)(a1 + 160);
  v9[0] = *(_QWORD*)(a1 + 152);
  v9[1] = v1;
  if (v1 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0_alt1((_QWORD*)(a1 + 168), v9);
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      std___1___shared_weak_count___release_weak_alt1(v1);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0_alt1((_QWORD*)(a1 + 168), v9);
  }
  LayoutAccessor_155e830(a1 + 168, 1);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 264LL))(a1);
  v4 = *(unsigned __int8**)(a1 + 16);
  if (v4 != nullptr) {
    v5 = *v4;
    v6 = v5 > 0x10;
    v7 = (1 << v5) & 0x1CE00;
    if (!v6 && v7 != 0) {
      *(_WORD*)(a1 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(a1 + 136) |= 8u;
  return result;
}

__int64 TelopTitle_Unknown44(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  unsigned __int8* v4;
  float v5;
  unsigned int v6;
  bool v7;
  int v8;
  float v10;
  float v11;
  _BYTE v12[200];

  v1 = result;
  v2 = *(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 952LL);
  if ((v2 & 3) != 0) {
    if ((*(_BYTE*)(result + 904) & 1) == 0) {
      goto LABEL_23;
    }
    goto LABEL_16;
  }
  v3 = *(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 944LL);
  if ((*(_BYTE*)(result + 904) & 1) != 0) {
    if ((v3 & 8) == 0) {
      if (game_ProcGameSkipView_instance_ != 0) {
        if ((v2 & 0x80) == 0 ||
            (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 1) == 0) {
          goto LABEL_18;
        }
      }
      else if ((v2 & 0x80) == 0) {
        goto LABEL_18;
      }
    }
  LABEL_16:
    if ((snd_fnd_WeakHandle_isValid(result + 888) & 1) != 0) {
      snd_Fade_Fade_10c910(v12, 125);
      snd_stop_ffc40(v1 + 888, v12);
      snd_Fade_Destroy_Fade(v12);
    }
  LABEL_18:
    result = snd_fnd_WeakHandle_isValid(v1 + 888);
    if ((result & 1) != 0) {
      return result;
    }
    v4 = *(unsigned __int8**)(v1 + 16);
    if (v4 == nullptr) {
      goto LABEL_29;
    }
    goto LABEL_24;
  }
  if ((v3 & 8) != 0) {
    goto LABEL_23;
  }
  if (game_ProcGameSkipView_instance_ != 0) {
    if ((v2 & 0x80) != 0 &&
        (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 1) != 0) {
    LABEL_23:
      snd_Fade_Fade_10cb00(v12, "FadeTime_AMB_BattleTitle_Out");
      snd_stop_ffc40(v1 + 912, v12);
      result = snd_Fade_Destroy_Fade(v12);
      v4 = *(unsigned __int8**)(v1 + 16);
      if (v4 == nullptr) {
      LABEL_29:
        *(_WORD*)(v1 + 136) |= 8u;
        return result;
      }
    LABEL_24:
      v6 = *v4;
      v7 = v6 > 0x10;
      v8 = (1 << v6) & 0x1CE00;
      if (!v7 && v8 != 0) {
        *(_WORD*)(v1 + 136) |= 0x80u;
      }
      goto LABEL_29;
    }
  }
  else if ((v2 & 0x80) != 0) {
    goto LABEL_23;
  }
  v5 = *(float*)(result + 416);
  if (v5 >= 300.0) {
    goto LABEL_23;
  }
  v10 = 60.0 / (float)*(int*)(game_g_frame_clock + 476);
  if (v10 <= 0.0) {
    v10 = 1.0;
  }
  if ((v3 & 3) != 0) {
    v10 = v10 * 8.0;
  }
  v11 = v5 + v10;
  if (v11 > 300.0) {
    v11 = 300.0;
  }
  *(float*)(result + 416) = v11;
  return result;
}

__int64 TelopTitle_Unknown35(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  _QWORD v8[2];
  __int64 v9;
  int v10;

  v1 = result;
  if (*(_DWORD*)(result + 864) != 0) {
    snd_Fade_Fade_10c830(&v9, 0.0f);
    snd_play_ff2d0((void*)(v8), "AMB_BattleTitle", "AMB_BattleTitle", &v9, 0,
                   65537, 0, 0.0f, 1.0f);
    snd_Fade_Destroy_Fade(&v9);
    return GameRoutine_112180(v1 + 912, v8);
  }
  else {
    v2 = *(_QWORD*)(result + 832);
    v3 = v2;
    while (*(_BYTE*)(v3 + 33) != 10) {
      v3 = *(_QWORD*)(*(_QWORD*)(v3 + 24) + 8LL);
      if (v3 == 0) {
        while (*(_BYTE*)(v2 + 33) != 10) {
          v2 = *(_QWORD*)(*(_QWORD*)(v2 + 24) + 16LL);
          if (v2 == 0) {
            return result;
          }
        }
        v3 = v2;
        break;
      }
    }
    v4 = *(unsigned __int16*)(v3 + 40);
    v5 = *(__int64**)(v3 + 48);
    if (v4 != 0) {
      v6 = v5;
    }
    else {
      v6 = game_vstring_kEmpty_ptr[0];
    }
    v7 = game_util_Format("V_%s", *v6);
    if (*game_sound_g_game_sound_ptr[0] != 0) {
      snd_a30960((void*)(&v9), *game_sound_g_game_sound_ptr[0], v7);
    }
    else {
      v9 = 0;
      v10 = 0x2000;
    }
    GameRoutine_112180(v1 + 888, &v9);
    result = snd_fnd_WeakHandle_isValid(v1 + 888);
    if ((result & 1) != 0) {
      *(_BYTE*)(v1 + 904) = 1;
    }
  }
  return result;
}

__int64 TelopTitle_Unknown12(__int64 result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  _BOOL4 v3;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(result + 16);
  if (v1 > v2) {
  LABEL_4:
    v3 = true;
  }
  else {
    while (*(_BYTE*)v2 != 2) {
      v2 -= 64LL;
      if (v1 > v2) {
        goto LABEL_4;
      }
    }
    v3 = *(_DWORD*)(v2 + 32) != 8;
  }
  if (v1 != 0 && v3) {
    while (1) {
      if (*(_BYTE*)v1 == 2) {
        if (*(_DWORD*)(v1 + 32) == 8) {
          *(_QWORD*)(result + 16) = v1;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v1 == 0) {
        return result;
      }
      v1 += 64LL;
    }
  }
  return result;
}

#pragma GCC visibility pop
