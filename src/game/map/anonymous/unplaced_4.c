#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* game_map_73c7c0(_QWORD* result, int, int);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_6c47b0(__int64, _BYTE*, char, char);
__int64 GameHr_73c610(__int64 result, __int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_15635a0(__int64*, __int64, char);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gameui_1586840(__int64*, char);
__int64 game_menu_BasicMenu_Unknown16dd9a0(__int64 result);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, __int64, __int64,
                                               __int64, unsigned int,
                                               unsigned int, int, float, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
extern __int64 (*GameData_20c3d08[])();
extern __int64* GameData_212d670[3];
extern __int64 GameData_212d690;
extern __int64 GameData_21ca240;
extern __int64 GameData_21ca248;
extern __int64 GameData_21ca310;
extern __int64 ui_LayoutAccessor_empty_;
extern char* GameData_201ed98[4];
void GameRoutine_156c910(__int64, const char*, int, ...);
void GameRoutine_1593b00(__int64, char);
void GameRoutine_159da00(__int64*, unsigned int, unsigned int);
void LayoutAccessor_1562060(__int64*, __int64, const char*);
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_map_anonymous_1271240(__int64* a1);
__int64 game_map_anonymous_1271640(__int64 a1);
__int64 game_map_anonymous_1784360(__int64 a1, _QWORD* a2, __int64 a3);

__int64 game_map_anonymous_1271240(__int64* a1)
{
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  struct {
    __int64* v16;
    __int64 v17;
  } v16_;

  v2 = *(_DWORD*)(a1[227] + 8);
  v3 = *(_DWORD*)(a1[229] + 8);
  LayoutAccessor_1560070((void*)(&v16_.v16), a1 + 106, "L_KeyUD/L_Arrow_U");
  if (v16_.v17 != 0) {
    v4 = std___1___shared_weak_count_lock(v16_.v17);
    v5 = (__int64)v16_.v16;
    if (v16_.v17 != 0) {
      std___1___shared_weak_count___release_weak(v16_.v17);
    }
    if (v4 == 0 || v5 == 0) {
      if (v4 == 0) {
        goto LABEL_12;
      }
    }
    else {
      LayoutAccessor_155e830(v5, v2 > 0);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
LABEL_12:
  LayoutAccessor_1560070((void*)(&v16_.v16), a1 + 106, "L_KeyUD/L_Arrow_D");
  if (v16_.v17 != 0) {
    v7 = std___1___shared_weak_count_lock(v16_.v17);
    v8 = (__int64)v16_.v16;
    if (v16_.v17 != 0) {
      std___1___shared_weak_count___release_weak(v16_.v17);
    }
    if (v7 != 0 && v8 != 0) {
      LayoutAccessor_155e830(v8, v3 > 0);
    }
    else if (v7 == 0) {
      goto LABEL_21;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
  }
LABEL_21:
  LayoutAccessor_1560070((void*)(&v16_.v16), a1 + 106, "L_KeyUD");
  result = v16_.v17;
  if (v16_.v17 == 0) {
    return result;
  }
  v10 = std___1___shared_weak_count_lock(v16_.v17);
  v11 = v16_.v16;
  result = v16_.v17;
  if (v16_.v17 != 0) {
    result = std___1___shared_weak_count___release_weak(v16_.v17);
  }
  if (v10 != 0 && v11 != nullptr) {
    LayoutAccessor_155e830((__int64)v11, 1);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
    v12 = std___1___shared_weak_count_lock(v10);
    if (v12 != 0) {
      v13 = v12;
      if (v3 <= 0) {
        v14 = 12;
      }
      else {
        v14 = 16;
      }
      if (v2 <= 0) {
        v15 = 13;
      }
      else {
        v15 = v14;
      }
      GameRoutine_159da00(v11, 5u, v15);
      if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak(v13);
      }
    }
    result = std___1___shared_weak_count___release_weak(v10);
  }
  else if (v10 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    return std___1___shared_weak_count___release_weak(v10);
  }
  return result;
}

__int64 game_map_anonymous_1271640(__int64 a1)
{
  unsigned __int64 v2;
  const char* v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  const char* v12;
  const char* v13;
  struct {
    __int64* v15;
    __int64 v16;
  } v15_;

  game_menu_BasicMenu_Unknown16dd9a0(a1);
  v2 = *(unsigned __int8*)(a1 + 1876);
  if (v2 > 3) {
    v3 = nullptr;
  }
  else {
    v3 = GameData_201ed98[v2];
  }
  LayoutAccessor_1562060((__int64*)(a1 + 848), (__int64)"T_PhaseName", v3);
  GameRoutine_1593b00(a1 + 848, *(_BYTE*)(a1 + 1876));
  v4 = *(_DWORD*)(a1 + 1872);
  v5 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 848), (__int64)"T_Num");
  if (v5 != 0) {
    v6 = __dynamic_cast(v5, GameData_212d670[0], GameData_212d690, 0);
    if (v6 != 0) {
      GameRoutine_156c910(v6, "%d", 1, v4);
    }
  }
  LayoutAccessor_1560070((void*)(&v15_.v15), (__int64*)(a1 + 848), "L_Unit");
  if (v15_.v16 != 0) {
    v7 = *(unsigned __int8*)(a1 + 1876);
    v8 = std___1___shared_weak_count_lock(v15_.v16);
    if (v8 != 0) {
      v9 = v8;
      if (v15_.v15 != nullptr) {
        game_gameui_1586840(v15_.v15, v7 != 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v9);
      }
    }
    if (v15_.v16 != 0) {
      std___1___shared_weak_count___release_weak(v15_.v16);
    }
  }
  v10 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL);
  if (v10 != 0) {
    v11 = 0;
    do {
      v11 += (*(_DWORD*)(v10 + 416) & 8) == 0;
      v10 = *(_QWORD*)(v10 + 432);
    } while (v10 != 0);
    if (v11 - 10 >= 9) {
      v12 = "Unit03";
    }
    else {
      v12 = "Unit02";
    }
    if (v11 >= 0xA) {
      v13 = v12;
    }
    else {
      v13 = "Unit01";
    }
  }
  else {
    v13 = "Unit01";
  }
  GameHr_1562680(a1 + 848, v13, 0x1.0000000000000p+0f);
  ui_LayoutAccessor_SetPaneVisible(
      a1 + 848, (__int64)"Arrow_Next",
      (signed __int32)*(_DWORD*)(*(_QWORD*)(a1 + 1832) + 8LL) > 0);
  return ui_LayoutAccessor_SetPaneVisible(
      a1 + 848, (__int64)"Arrow_Prev",
      (signed __int32)*(_DWORD*)(*(_QWORD*)(a1 + 1816) + 8LL) > 0);
}

__int64 game_map_anonymous_1784360(__int64 a1, _QWORD* a2, __int64 a3)
{
  _QWORD handle[2];
  unsigned int v6;
  unsigned __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  const char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    _QWORD v21[4];
    _QWORD* v22;
  } v21_;

  v6 = (a3 != 0) & (*(unsigned int (**)(_QWORD*))(*a2 + 464LL))(a2);
  if (v6 != 1) {
    return v6;
  }
  v7 = (unsigned __int64)(GameData_21ca248 - GameData_21ca240) >> 3;
  if ((_DWORD)v7 != 0) {
    v8 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL);
    if (v8 != 0) {
      v9 = 0;
      do {
        v8 = *(_QWORD*)(v8 + 432);
        ++v9;
      } while (v8 != 0);
    }
    else {
      v9 = 0;
    }
    LOBYTE(v7) = v9 >= (int)v7;
  }
  v10 = *(_QWORD*)(a3 + 440);
  if (v10 == 0 || *(_BYTE*)(v10 + 16) != 0) {
    if ((v7 & 1) != 0) {
      snd_Fade_Fade_10c830((__int64)v21_.v21, 0x0.0p+0f);
      snd_play_ff2d0((void*)(handle), (__int64)"SE_SYS_NG",
                     (__int64)"SE_SYS_NG", (__int64)v21_.v21, 0, 0x10001u, 0,
                     0x0.0p+0f, 0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade(v21_.v21);
      return v6;
    }
    snd_Fade_Fade_10c830((__int64)v21_.v21, 0x0.0p+0f);
    snd_play_ff2d0((void*)(handle), (__int64)"SE_SYS_Sortie_Include",
                   (__int64)"SE_SYS_Sortie_Include", (__int64)v21_.v21, 0,
                   0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v21_.v21);
    v21_.v22 = v21_.v21;
    v21_.v21[0] = GameData_20c3d08;
    v21_.v21[1] = a1;
    GameHr_73c610(a3, (__int64)v21_.v21);
    if (v21_.v22 == v21_.v21) {
      v11 = 32;
    }
    else {
      if (v21_.v22 == nullptr) {
        goto LABEL_27;
      }
      v11 = 40;
    }
    (*(void (**)(__int64))(*v21_.v22 + v11))((__int64)v21_.v22);
  LABEL_27:
    v17 = a2[7];
    if (v17 == 0) {
      goto LABEL_32;
    }
    v18 = std___1___shared_weak_count_lock(v17);
    if (v18 == 0) {
      goto LABEL_32;
    }
    v14 = (__int64*)a2[6];
    if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v19 = v18;
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      std___1___shared_weak_count___release_weak(v19);
    }
    if (v14 == nullptr) {
    LABEL_32:
      v14 = &ui_LayoutAccessor_empty_;
    }
    if ((LayoutAccessor_15635a0(v14, (__int64)"UnitIconIn", 1) & 1) == 0 &&
        (LayoutAccessor_15635a0(v14, (__int64)"UnitIconOn", 1) & 1) == 0) {
      v16 = "UnitIconIn";
      goto LABEL_36;
    }
    return v6;
  }
  LOBYTE(v21_.v21[0]) = 4;
  GameHr_6c47b0(a3, v21_.v21, 0, 0);
  game_map_73c7c0((_QWORD*)a3, *(char*)(a3 + 584), *(char*)(a3 + 585));
  snd_Fade_Fade_10c830((__int64)v21_.v21, 0x0.0p+0f);
  snd_play_ff2d0((void*)(handle), (__int64)"SE_SYS_Sortie_Exclude",
                 (__int64)"SE_SYS_Sortie_Exclude", (__int64)v21_.v21, 0,
                 0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade(v21_.v21);
  v12 = a2[7];
  if (v12 == 0) {
    goto LABEL_21;
  }
  v13 = std___1___shared_weak_count_lock(v12);
  if (v13 == 0) {
    goto LABEL_21;
  }
  v14 = (__int64*)a2[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v15 = v13;
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v15);
  }
  if (v14 == nullptr) {
  LABEL_21:
    v14 = &ui_LayoutAccessor_empty_;
  }
  if ((LayoutAccessor_15635a0(v14, (__int64)"UnitIconOut", 1) & 1) == 0 &&
      (LayoutAccessor_15635a0(v14, (__int64)"UnitIconOff", 1) & 1) == 0) {
    v16 = "UnitIconOut";
  LABEL_36:
    GameHr_1562680((__int64)v14, v16, 0x1.0000000000000p+0f);
  }
  return v6;
}

#pragma GCC visibility pop
