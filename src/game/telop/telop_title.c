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
__int64* Manager_bc6460(_QWORD*, __int64, char);
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameRoutine_158a7c0(unsigned __int8);
__int64 GameRoutine_1840e20(__int64, __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64 GameData_21ca000;
extern __int64 game_GameModeData_instance_;
extern char GameData_1a9f09e;
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_1592690(__int64*, _BYTE*, _BYTE*, char*);
void GameRoutine_15930b0(__int64*, unsigned __int8, char);
void LayoutAccessor_1562060(__int64*, __int64, const char*);
void TelopTitle_Unknown33(__int64 a1);

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

void TelopTitle_Unknown33(__int64 a1)
{
  __int64* v1;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  char* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  const char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int8 v18;
  __int64 v19;
  const char* v20;
  unsigned __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _DWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 i;
  __int64 v41;
  __int64 v42;
  struct {
    __int64 v43;
    __int64 v44;
  } v43_;
  __int64 v45[3];
  struct {
    _QWORD v46[3];
    int v47;
    char gap76_[4];
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
  } v46_;

  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v1 = &GameData_21ca000;
  LOWORD(v45[0]) = 0;
  v3 = *(_DWORD*)(a1 + 864);
  if ((unsigned int)(v3 - 1) > 1) {
    v6 = *(_QWORD*)(a1 + 832);
    if (v6 != 0) {
      if (game_GameModeData_instance_ != 0) {
        v7 = *(_QWORD*)(game_GameModeData_instance_ + 24);
        if (v7 != 0) {
          LOBYTE(v46_.v46[0]) = *(_BYTE*)(*(_QWORD*)(v7 + 24) + 33LL);
          GameRoutine_1592690((__int64*)(a1 + 168), v46_.v46, (_BYTE*)(v7 + 88),
                              (char*)(v7 + 89)),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v6 = *(_QWORD*)(a1 + 832);
        }
      }
      v8 = game_util_Format_alt1("Part%d", *(char*)(v6 + 88)),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      GameHr_1562680(a1 + 168, v8, 0x1.0000000000000p+0f),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v9 = game_util_Format_alt1("UI_Deco_ChapterTitle_%d",
                                 *(char*)(*(_QWORD*)(a1 + 832) + 88LL)),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      GameRoutine_60a020((__int64)v45, v9),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  else {
    GameRoutine_15930b0((__int64*)(a1 + 168), *(_BYTE*)(a1 + 824), v3 == 2),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v4 = *(_QWORD*)(a1 + 832);
    if (v4 != 0) {
      v5 = *(_QWORD*)(v4 + 136);
      if (v5 != 0) {
        LayoutAccessor_1562060((__int64*)(a1 + 168), (__int64)"T_TitleBattle",
                               *(const char**)(v5 + 80)),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    else {
      v10 = *(unsigned __int8*)(a1 + 840);
      v11 = *(_QWORD*)(a1 + 848);
      if ((v10 & 1) == 0) {
        v11 = v10 >> 1;
      }
      if (v11 != 0) {
        v12 = (v10 & 1) != 0 ? *(_QWORD*)(a1 + 856) : a1 + 841;
        if (v12 != 0) {
          v13 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 168),
                                              (__int64)"T_TitleBattle"),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v13 != 0) {
            GameRoutine_156c5d0(v13, v12, 0),
                v28 =
                    COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
      }
    }
    strcpy((char*)v45, "$UI_Title_Fire_Loop");
  }
  if (*(_DWORD*)(a1 + 864) == 2) {
    v14 = "ChapterOff";
  }
  else {
    v14 = "ChapterOn";
  }
  GameHr_1562680(a1 + 168, v14, 0x1.0000000000000p+0f),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 168), (__int64)"BgStory"),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v15 == 0) {
    v16 = 0;
    v17 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      goto LABEL_25;
    }
  LABEL_27:
    v18 = 0;
    goto LABEL_28;
  }
  v16 = __dynamic_cast(v15, GameData_212d670[0], GameData_212d678[0], 0),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v17 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_27;
  }
LABEL_25:
  v18 = *(_BYTE*)(v17 + 15);
LABEL_28:
  v19 = GameRoutine_158a7c0(v18),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((GameRoutine_1840e20(v16, v19) & 1) != 0) {
    v20 = "StoryOn";
  }
  else {
    v20 = "StoryOff";
  }
  GameHr_1562680(a1 + 168, v20, 0x1.0000000000000p+0f),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v45[0] & 1) != 0) {
    v21 = v45[1];
  }
  else {
    v21 = (unsigned __int64)LOBYTE(v45[0]) >> 1;
  }
  if (v21 != 0) {
    v22 = (char*)v45[2];
    v46_.v46[0] = 0;
    v46_.v46[1] = 0;
    v24 = *(_QWORD*)GameData_212c540;
    v23 = *((_QWORD*)GameData_212c540 + 1);
    v26 = *(_QWORD*)GameData_212c548;
    v25 = *((_QWORD*)GameData_212c548 + 1);
    if ((v45[0] & 1) == 0) {
      v22 = (char*)v45 + 1;
    }
    v46_.v46[2] = v22;
    v46_.v48 = v24;
    v46_.v49 = v23;
    v46_.v52 = v24;
    v46_.v53 = v23;
    v46_.v50 = v26;
    v46_.v51 = v25;
    v46_.v47 = 9;
    v27 = Manager_bc6460(*(_QWORD**)eft_g_effectSystem_ptr[0],
                         (__int64)v46_.v46, 0),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    GameHr_14a10d0(&v43_.v43, (__int64)v27, v28, (__int64)&GameData_1a9f09e),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v29 = v43_.v43;
    v30 = v43_.v44;
    if (v43_.v44 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v43_.v44 + 8), 1u,
                                memory_order_relaxed);
    }
    v31 = *(_QWORD*)(a1 + 880);
    *(_QWORD*)(a1 + 872) = v29;
    *(_QWORD*)(a1 + 880) = v30;
    if (v31 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v31),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v30 = *(_QWORD*)(a1 + 880);
    }
    if (v30 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v30),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    v32 = v43_.v44;
    if (v43_.v44 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v43_.v44 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v32),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v33 = *(_DWORD**)(a1 + 872);
    if (*(_QWORD*)v33 != 0 && *(_DWORD*)(*(_QWORD*)v33 + 16LL) == v33[2]) {
      v34 = *(_QWORD*)(a1 + 176);
      if (v34 != 0) {
        v35 = std___1___shared_weak_count_lock(v34),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v35 != 0) {
          v36 = *(_QWORD*)(a1 + 168);
          if (v36 != 0) {
            LODWORD(v1) = *(_DWORD*)(v36 + 2372);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if (v36 != 0) {
              goto LABEL_57;
            }
          }
          else {
            v38 = v35;
            (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35),
                v28 =
                    COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak_alt1(v38),
                v28 =
                    COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (v36 != 0) {
            LABEL_57:
              v37 = *(_QWORD*)v33;
              if (*(_QWORD*)v33 == 0) {
                goto LABEL_67;
              }
            LABEL_61:
              if (*(_DWORD*)(v37 + 16) == v33[2]) {
                v39 = *(unsigned int*)(v37 + 36);
                if ((_DWORD)v39 != 0) {
                  for (i = 0; i < v39; ++i) {
                    v41 = *(_QWORD*)(v37 + 40 + 8 * i);
                    if (v41 != 0) {
                      *(_DWORD*)(v41 + 408) = (_DWORD)v1 + 1;
                      v39 = *(unsigned int*)(v37 + 36);
                    }
                  }
                }
              }
              goto LABEL_67;
            }
          }
        }
      }
      LODWORD(v1) = 0;
      v37 = *(_QWORD*)v33;
      if (*(_QWORD*)v33 == 0) {
        goto LABEL_67;
      }
      goto LABEL_61;
    }
  }
LABEL_67:
  *(_BYTE*)(a1 + 904) = 0;
  GameHr_1562680(a1 + 168, "In", 0x0.0p+0f),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v45[0] & 1) != 0 && v45[2] != 0) {
    v42 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v42 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v42,
                                  v45[2]),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
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
