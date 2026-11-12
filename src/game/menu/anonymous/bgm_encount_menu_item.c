#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16758d0(_QWORD, _QWORD);
__int64 GameRoutine_1675d00(_QWORD);
__int64 GameRoutine_1675e00(_QWORD);
__int64 GameRoutine_80ca30(_QWORD);
__int64 ListMenuItem_16734f0(__int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_BgmEncountMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_SettingMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 BgmEncountMenuItem_Destructor(__int64 a1);
__int64 BgmEncountMenuItem_Unknown19(__int64 result);
__int64 BgmEncountMenuItem_OnSelect(__int64 a1);
__int64 BgmEncountMenuItem_IsActive(__int64 a1);
__int64 BgmEncountMenuItem_1675e00_alt1(_QWORD) __asm__(
    "BgmEncountMenuItem_1675e00");
__int64 GameManager_a2f940(_QWORD, _QWORD, _QWORD, _QWORD, double);
__int64 GameManager_a31720(_QWORD, _QWORD);
__int64 GameManager_a31a20(_QWORD);
__int64 GameRoutine_1572370(_QWORD, _QWORD);
__int64 GameRoutine_159e7c0(_QWORD, _QWORD);
__int64 GameRoutine_1673c10(__int64*, char);
__int64 GameRoutine_1674ba0(void);
__int64 GameRoutine_16762b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1676790(_QWORD);
__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_data_getMuseumData(_QWORD);
__int64 snd_data_getMuseumDataCount(long double);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPaneTranslate(_QWORD, _QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 snd_fnd_calcCrc32(_QWORD, _QWORD);
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1aa49c1;
extern __int64 game_sound_g_game_sound;
float GameRoutine_1675fe0(_QWORD);
float GameRoutine_1676100(_QWORD);
float ui_LayoutAccessor_GetPaneTranslate(_QWORD, _QWORD);
__int64 BgmEncountMenuItem_OnDeselect(__int64 a1);
__int64 BgmEncountMenuItem_UpCall(__int64 a1, char a2);
__int64 BgmEncountMenuItem_DownCall(_QWORD* a1, char a2);
__int64 BgmEncountMenuItem_Unknown70(__int64 a1);
__int64 BgmEncountMenuItem_1675e00(__int64 a1);
__int64 GameRoutine_1572370_alt1(__int64, char) __asm__("GameRoutine_1572370");
__int64 GameRoutine_16762b0_alt1(__int64, char,
                                 _BYTE*) __asm__("GameRoutine_16762b0");
__int64 GameRoutine_1676790_alt1(__int64) __asm__("GameRoutine_1676790");
__int64
snd_data_getMuseumDataCount_alt1() __asm__("snd_data_getMuseumDataCount");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
double ui_LayoutAccessor_GetPaneTranslate_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_GetPaneTranslate");
float GameRoutine_1675fe0_alt1(_QWORD*) __asm__("GameRoutine_1675fe0");
float GameRoutine_1676100_alt1(__int64) __asm__("GameRoutine_1676100");
float ui_LayoutAccessor_SetPaneTranslate_alt1(
    __int64*, const char*,
    __int64) __asm__("ui_LayoutAccessor_SetPaneTranslate");
unsigned __int64
GameRoutine_1674ba0_alt1(__int64) __asm__("GameRoutine_1674ba0");
unsigned __int8* snd_fnd_calcCrc32_alt1(unsigned __int8* result,
                                        int) __asm__("snd_fnd_calcCrc32");
void* snd_data_getMuseumData_alt1(int) __asm__("snd_data_getMuseumData");
void GameRoutine_1673c10_alt1(__int64*, char) __asm__("GameRoutine_1673c10");
void LayoutAccessor_1562060_alt1(__int64*, __int64,
                                 __int64) __asm__("LayoutAccessor_1562060");

__int64 BgmEncountMenuItem_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;

  v1 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)a1 = game_menu_anonymous_BgmEncountMenuItem_vtable;
  if (v1 != 0) {
    v3 = *(_QWORD*)(a1 + 160);
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v3) {
      goto LABEL_12;
    }
    v5 = *(_QWORD*)(a1 + 160);
    do {
      v6 = *(_BYTE*)(v5 - 24);
      v5 -= 24;
      if ((v6 & 1) != 0) {
        v7 = *(_QWORD*)(v3 - 8);
        if (v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, v7);
        }
      }
      v3 = v5;
    } while (v5 != v1);
    v9 = *(_QWORD*)(a1 + 152);
    *(_QWORD*)(a1 + 160) = v1;
    v1 = v9;
    if (v9 != 0) {
    LABEL_12:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10, v1);
    }
  }
  v11 = *(_QWORD*)(a1 + 128);
  *(_QWORD*)a1 = game_menu_anonymous_SettingMenuItem_vtable;
  if (v11 != 0) {
    std___1___shared_weak_count___release_weak(v11);
  }
  v12 = *(_QWORD*)(a1 + 112);
  if (v12 != 0) {
    std___1___shared_weak_count___release_weak(v12);
  }
  result = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v14 = *(_QWORD*)(a1 + 32);
    if (v14 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v14);
    }
  }
  return result;
}

__int64 BgmEncountMenuItem_Unknown19(__int64 result)
{
  __int64 v1;
  _QWORD v2[2];

  if (*(_BYTE*)(result + 192) == 1) {
    v1 = *(_QWORD*)(result + 128);
    v2[0] = *(_QWORD*)(result + 120);
    v2[1] = v1;
    if (v1 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_16758d0(result + 144, v2);
      return std___1___shared_weak_count___release_weak(v1);
    }
    else {
      return GameRoutine_16758d0(result + 144, v2);
    }
  }
  return result;
}

__int64 BgmEncountMenuItem_OnSelect(__int64 a1)
{
  __int64 v2;
  _QWORD v4[2];

  ListMenuItem_16734f0(a1);
  v2 = *(_QWORD*)(a1 + 128);
  v4[0] = *(_QWORD*)(a1 + 120);
  v4[1] = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1675d00(v4);
    std___1___shared_weak_count___release_weak(v2);
  }
  else {
    GameRoutine_1675d00(v4);
  }
  return GameRoutine_1675e00(a1);
}

__int64 BgmEncountMenuItem_OnDeselect(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int8* v12;
  unsigned int v13;
  int v14;
  int v15;
  int v16;
  void* v17;
  int v18;
  int v20;
  char* v22;
  __int64 result;
  _QWORD v24[2];
  _QWORD v25[2];

  v2 = 504;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + v2))((__int64)a1);
  v3 = *(_QWORD*)(a1 + 128);
  if (v3 != 0) {
    v4 = *(_QWORD*)(a1 + 120);
    v5 = *(_QWORD*)(a1 + 128);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v6 = std___1___shared_weak_count_lock_alt1(v5);
    if (v6 != 0) {
      v7 = v6;
      if (v4 != 0) {
        GameRoutine_1572370_alt1(v4, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak_alt1(v7);
      }
    }
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  GameRoutine_1673c10_alt1((__int64*)a1, 0);
  v8 = *(_QWORD*)(a1 + 128);
  v24[0] = *(_QWORD*)(a1 + 120);
  v24[1] = v8;
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1676790_alt1((__int64)v24);
    std___1___shared_weak_count___release_weak_alt1(v8);
  }
  else {
    GameRoutine_1676790_alt1((__int64)v24);
  }
  v9 = *(_QWORD*)a1;
  *(_BYTE*)(a1 + 192) = 0;
  (*(void (**)(__int64))(v9 + 464))(a1);
  v10 = *(_QWORD*)(a1 + 128);
  v25[0] = *(_QWORD*)(a1 + 120);
  v25[1] = v10;
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
  }
  if (*(_BYTE*)(a1 + 184) == 1) {
    v11 = *(_QWORD*)(a1 + 152) + 24LL * *(_QWORD*)(a1 + 176);
    if ((*(_BYTE*)v11 & 1) != 0) {
      v12 = *(unsigned __int8**)(v11 + 16);
    }
    else {
      v12 = (unsigned __int8*)(v11 + 1);
    }
    v13 = (unsigned int)snd_fnd_calcCrc32_alt1(v12, 0);
    v14 = snd_data_getMuseumDataCount_alt1();
    if (v14 < 1) {
      v22 = (char*)&GameData_1aa49c1;
    }
    else {
      v15 = v14;
      v16 = 0;
      while (1) {
        v17 = snd_data_getMuseumData_alt1(v16);
        if (*((_DWORD*)v17 + 3) == v13) {
          break;
        }
        v18 = *((_DWORD*)v17 + 6);
        if (v18 != 0 && v18 == v13) {
          break;
        }
        v20 = *((_DWORD*)v17 + 7);
        if (v20 != 0 && v20 == v13) {
          break;
        }
        if (v15 == ++v16) {
          v22 = (char*)&GameData_1aa49c1;
          goto LABEL_35;
        }
      }
      v22 = *((char**)v17 + 4);
    }
  }
  else {
    v22 = "MID_Config_Sound_Default";
  }
LABEL_35:
  result = GameRoutine_16762b0_alt1((__int64)v25, 1, v22);
  if (v10 != 0) {
    return std___1___shared_weak_count___release_weak_alt1(v10);
  }
  return result;
}

__int64 BgmEncountMenuItem_UpCall(__int64 a1, char a2)
{
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BYTE v18[200];

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 152);
    if ((*(_BYTE*)(a1 + 184) & 1) == 0) {
      v6 = 0;
      *(_QWORD*)(a1 + 176) = 0;
    LABEL_6:
      *(_BYTE*)(a1 + 184) = 1;
      v7 = v4 + 24 * v6;
      if ((*(_BYTE*)v7 & 1) != 0) {
        v8 = *(_QWORD*)(v7 + 16);
      }
      else {
        v8 = v7 + 1;
      }
      goto LABEL_9;
    }
    v5 = *(_QWORD*)(a1 + 176);
    if (v5 < -1 - 0x5555555555555555LL * ((*(_QWORD*)(a1 + 160) - v4) >> 3)) {
      v6 = v5 + 1;
      *(_QWORD*)(a1 + 176) = v6;
      goto LABEL_6;
    }
    if ((a2 & 1) != 0) {
      v8 = 0;
      *(_BYTE*)(a1 + 184) = 0;
    LABEL_9:
      GameManager_a31720(game_sound_g_game_sound, v8);
      v9 = GameManager_a31a20(game_sound_g_game_sound);
      v10 = game_sound_g_game_sound;
      v11 = v9;
      snd_Fade_Fade_10c830(v18, 0.0f);
      GameManager_a2f940(v10, v18, v11, 1, 0.0f);
      snd_Fade_Destroy_Fade(v18);
      (*(void (**)(__int64))(*(_QWORD*)a1 + 440LL))(a1);
      v12 = *(_QWORD*)(a1 + 128);
      if (v12 != 0) {
        v13 = *(_QWORD*)(a1 + 120);
        v14 = *(_QWORD*)(a1 + 128);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                  memory_order_relaxed);
        v15 = std___1___shared_weak_count_lock(v14);
        if (v15 != 0) {
          v16 = v15;
          if (v13 != 0) {
            GameRoutine_159e7c0(v13, 0);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
            std___1___shared_weak_count___release_weak(v16);
          }
        }
        std___1___shared_weak_count___release_weak(v12);
      }
      BgmEncountMenuItem_1675e00_alt1(a1);
      return 1;
    }
  }
  return 0;
}

__int64 BgmEncountMenuItem_DownCall(_QWORD* a1, char a2)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BYTE v18[200];

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 0;
  }
  v4 = a1[19];
  if ((a1[23] & 1) == 0) {
    if ((a2 & 1) != 0) {
      v5 = 0xAAAAAAAAAAAAAAABLL * ((a1[20] - v4) >> 3);
    LABEL_7:
      v7 = v5 - 1;
      *((_BYTE*)a1 + 184) = 1;
      a1[22] = v7;
      v8 = v4 + 24 * v7;
      if ((*(_BYTE*)v8 & 1) != 0) {
        v6 = *(_QWORD*)(v8 + 16);
      }
      else {
        v6 = v8 + 1;
      }
      goto LABEL_10;
    }
    return 0;
  }
  v5 = a1[22];
  if (v5 != 0) {
    goto LABEL_7;
  }
  v6 = 0;
  *((_BYTE*)a1 + 184) = 0;
LABEL_10:
  GameManager_a31720(game_sound_g_game_sound, v6);
  v9 = GameManager_a31a20(game_sound_g_game_sound);
  v10 = game_sound_g_game_sound;
  v11 = v9;
  snd_Fade_Fade_10c830(v18, 0.0f);
  GameManager_a2f940(v10, v18, v11, 1, 0.0f);
  snd_Fade_Destroy_Fade(v18);
  (*(void (**)(_QWORD*))(*a1 + 440LL))(a1);
  v12 = a1[16];
  if (v12 != 0) {
    v13 = a1[15];
    v14 = a1[16];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                              memory_order_relaxed);
    v15 = std___1___shared_weak_count_lock(v14);
    if (v15 != 0) {
      v16 = v15;
      if (v13 != 0) {
        GameRoutine_159e7c0(v13, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        std___1___shared_weak_count___release_weak(v16);
      }
    }
    std___1___shared_weak_count___release_weak(v12);
  }
  BgmEncountMenuItem_1675e00_alt1(a1);
  return 1;
}

__int64 BgmEncountMenuItem_IsActive(__int64 a1)
{
  return (unsigned int)GameRoutine_80ca30(a1) &
         (*(_QWORD*)(a1 + 160) != *(_QWORD*)(a1 + 152));
}

__int64 BgmEncountMenuItem_Unknown70(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  unsigned __int8* v6;
  unsigned int v7;
  int v8;
  const char* v9;
  int v10;
  int v11;
  void* v12;
  int v13;
  int v15;
  __int64 v17;
  float v18;
  __int64 v19;
  float v20;
  double v21;
  float v22;
  int v23;
  int v24;
  float v25;
  float v26;
  __int64 v27;
  bool v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int8* v32;
  unsigned int v33;
  int v34;
  int v35;
  int v36;
  void* v37;
  int v38;
  int v40;
  char* v42;
  float v43[3];
  _DWORD v44[3];
  _QWORD v45[2];
  _QWORD v46[2];
  _QWORD v47[2];

  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s2", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s2", "=w"));
  GameRoutine_1674ba0_alt1(a1),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s2", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s2", "=w"));
  result = *(_QWORD*)(a1 + 128);
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
    v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s2", "=w")),
    v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
    v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s2", "=w"));
    if (result != 0) {
      v3 = *(__int64**)(a1 + 120);
      v4 = result;
      if (v3 != nullptr) {
        if (*(_BYTE*)(a1 + 184) == 1) {
          v5 = *(_QWORD*)(a1 + 152) + 24LL * *(_QWORD*)(a1 + 176);
          if ((*(_BYTE*)v5 & 1) != 0) {
            v6 = *(unsigned __int8**)(v5 + 16);
          }
          else {
            v6 = (unsigned __int8*)(v5 + 1);
          }
          v7 = (unsigned int)snd_fnd_calcCrc32_alt1(v6, 0),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s2", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s2", "=w"));
          v8 = snd_data_getMuseumDataCount_alt1(),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s2", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s2", "=w"));
          if (v8 < 1) {
            v9 = (const char*)&GameData_1aa49c1;
          }
          else {
            v9 = (const char*)&GameData_1aa49c1;
            v10 = v8;
            v11 = 0;
            while (1) {
              v12 = snd_data_getMuseumData_alt1(v11),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s2", "=w"));
              if (*((_DWORD*)v12 + 3) == v7) {
                break;
              }
              v13 = *((_DWORD*)v12 + 6);
              if (v13 != 0 && v13 == v7) {
                break;
              }
              v15 = *((_DWORD*)v12 + 7);
              if (v15 != 0 && v15 == v7) {
                break;
              }
              if (v10 == ++v11) {
                goto LABEL_24;
              }
            }
            v9 = *((const char**)v12 + 4);
          }
        }
        else {
          v9 = "MID_Config_Sound_Default";
        }
      LABEL_24:
        LayoutAccessor_1562060_alt1(v3, (__int64)"T_Txt", (__int64)v9),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s2", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s2", "=w"));
        LayoutAccessor_1562060_alt1(v3, (__int64)"T_Txt2", (__int64)v9),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s2", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s2", "=w"));
        v17 = *(_QWORD*)(a1 + 128);
        v46[0] = *(_QWORD*)(a1 + 120);
        v46[1] = v17;
        if (v17 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                                    memory_order_relaxed);
          v18 = GameRoutine_1676100_alt1((__int64)v46),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s2", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s2", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v17),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s2", "=w"));
        }
        else {
          v18 = GameRoutine_1676100_alt1((__int64)v46),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s2", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s2", "=w"));
        }
        v19 = *(_QWORD*)(a1 + 128);
        v45[0] = *(_QWORD*)(a1 + 120);
        v45[1] = v19;
        if (v19 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                                    memory_order_relaxed);
          v20 = GameRoutine_1675fe0_alt1(v45),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s2", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s2", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v19),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s2", "=w"));
        }
        else {
          v20 = GameRoutine_1675fe0_alt1(v45),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s2", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s2", "=w"));
        }
        v21 = ui_LayoutAccessor_GetPaneTranslate_alt1(v3, "T_Txt"),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s2", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s2", "=w"));
        v22 = *(float*)&v21;
        v44[0] = LODWORD(v21);
        v44[1] = v23;
        v44[2] = v24;
        ui_LayoutAccessor_GetPaneTranslate_alt1(v3, "T_Txt2"),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s2", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s2", "=w"));
        v43[1] = v25;
        v43[2] = v26;
        if (v20 >= v18) {
          v44[0] = 0;
          v43[0] = v20 + 0x0.0p+0f;
          ui_LayoutAccessor_SetPaneTranslate_alt1(v3, "T_Txt", (__int64)v44),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s2", "=w"));
          v28 = false;
        }
        else {
          v27 = *(_QWORD*)(a1 + 8);
          v43[0] = v18 + v22;
          v28 = *(_QWORD*)(v27 + 336) == a1;
        }
        *(_BYTE*)(a1 + 192) = v28;
        ui_LayoutAccessor_SetPaneTranslate_alt1(v3, "T_Txt2", (__int64)v43),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s2", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s2", "=w"));
        ui_LayoutAccessor_SetPaneVisible_alt1(
            (__int64)v3, (__int64)"T_Txt2",
            *(_QWORD*)(*(_QWORD*)(a1 + 8) + 336LL) == a1),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s2", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s2", "=w"));
        v29 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 336LL);
        (*(void (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s2", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s2", "=w"));
        v30 = *(_QWORD*)(a1 + 128);
        v47[0] = *(_QWORD*)(a1 + 120);
        v47[1] = v30;
        if (v30 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 16), 1u,
                                    memory_order_relaxed);
        }
        if (*(_BYTE*)(a1 + 184) == 1) {
          v31 = *(_QWORD*)(a1 + 152) + 24LL * *(_QWORD*)(a1 + 176);
          if ((*(_BYTE*)v31 & 1) != 0) {
            v32 = *(unsigned __int8**)(v31 + 16);
          }
          else {
            v32 = (unsigned __int8*)(v31 + 1);
          }
          v33 = (unsigned int)snd_fnd_calcCrc32_alt1(v32, 0),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s2", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s2", "=w"));
          v34 = snd_data_getMuseumDataCount_alt1(),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s2", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s2", "=w"));
          if (v34 < 1) {
            v42 = (char*)&GameData_1aa49c1;
          }
          else {
            v35 = v34;
            v36 = 0;
            while (1) {
              v37 = snd_data_getMuseumData_alt1(v36),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s2", "=w"));
              if (*((_DWORD*)v37 + 3) == v33) {
                break;
              }
              v38 = *((_DWORD*)v37 + 6);
              if (v38 != 0 && v38 == v33) {
                break;
              }
              v40 = *((_DWORD*)v37 + 7);
              if (v40 != 0 && v40 == v33) {
                break;
              }
              if (v35 == ++v36) {
                v42 = (char*)&GameData_1aa49c1;
                goto LABEL_55;
              }
            }
            v42 = *((char**)v37 + 4);
          }
        }
        else {
          v42 = "MID_Config_Sound_Default";
        }
      LABEL_55:
        result = GameRoutine_16762b0_alt1((__int64)v47, v29 != a1, v42),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s2", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s2", "=w"));
        if (v30 != 0) {
          result = std___1___shared_weak_count___release_weak_alt1(v30),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s2", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s2", "=w"));
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s2", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s2", "=w"));
        return std___1___shared_weak_count___release_weak_alt1(v4);
      }
    }
  }
  return result;
}

__int64 BgmEncountMenuItem_1675e00(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  float v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int8* v8;
  unsigned int v9;
  int v10;
  int v11;
  int v12;
  void* v13;
  int v14;
  int v16;
  char* v18;
  __int64 result;
  _QWORD v20[2];
  _QWORD v21[2];
  _QWORD v22[2];

  v1 = *(_QWORD*)(a1 + 120);
  v2 = *(_QWORD*)(a1 + 128);
  *(_QWORD*)(a1 + 144) = 0;
  v21[0] = v1;
  v21[1] = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
  }
  v4 = GameRoutine_1675fe0_alt1(v21);
  v5 = *(_QWORD*)(a1 + 128);
  v20[0] = *(_QWORD*)(a1 + 120);
  v20[1] = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    *(_BYTE*)(a1 + 192) = v4 < GameRoutine_1676100_alt1((__int64)v20);
    std___1___shared_weak_count___release_weak_alt1(v5);
    if (v2 == 0) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  *(_BYTE*)(a1 + 192) = v4 < GameRoutine_1676100_alt1((__int64)v20);
  if (v2 != 0) {
  LABEL_5:
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
LABEL_6:
  (*(void (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  v6 = *(_QWORD*)(a1 + 128);
  v22[0] = *(_QWORD*)(a1 + 120);
  v22[1] = v6;
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                              memory_order_relaxed);
  }
  if (*(_BYTE*)(a1 + 184) == 1) {
    v7 = *(_QWORD*)(a1 + 152) + 24LL * *(_QWORD*)(a1 + 176);
    if ((*(_BYTE*)v7 & 1) != 0) {
      v8 = *(unsigned __int8**)(v7 + 16);
    }
    else {
      v8 = (unsigned __int8*)(v7 + 1);
    }
    v9 = (unsigned int)snd_fnd_calcCrc32_alt1(v8, 0);
    v10 = snd_data_getMuseumDataCount_alt1();
    if (v10 < 1) {
      v18 = (char*)&GameData_1aa49c1;
    }
    else {
      v11 = v10;
      v12 = 0;
      while (1) {
        v13 = snd_data_getMuseumData_alt1(v12);
        if (*((_DWORD*)v13 + 3) == v9) {
          break;
        }
        v14 = *((_DWORD*)v13 + 6);
        if (v14 != 0 && v14 == v9) {
          break;
        }
        v16 = *((_DWORD*)v13 + 7);
        if (v16 != 0 && v16 == v9) {
          break;
        }
        if (v11 == ++v12) {
          v18 = (char*)&GameData_1aa49c1;
          goto LABEL_30;
        }
      }
      v18 = *((char**)v13 + 4);
    }
  }
  else {
    v18 = "MID_Config_Sound_Default";
  }
LABEL_30:
  result = GameRoutine_16762b0_alt1((__int64)v22, 0, v18);
  if (v6 != 0) {
    return std___1___shared_weak_count___release_weak_alt1(v6);
  }
  return result;
}

#pragma GCC visibility pop
