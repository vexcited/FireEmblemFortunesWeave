#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_159e7c0(_QWORD, _QWORD);
__int64 GameRoutine_1675d00(__int64*);
__int64 GameRoutine_1677660(_QWORD);
__int64 GameRoutine_1677840(_QWORD);
__int64 ListMenuItem_16734f0(__int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_BgmCmdBtlMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_SettingMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_16758d0(__int64, _QWORD*);
__int64 BgmCmdBtlMenuItem_Destructor(__int64 a1);
void BgmCmdBtlMenuItem_Unknown19(__int64 a1);
__int64 BgmCmdBtlMenuItem_OnSelect(__int64 a1);
__int64 BgmCmdBtlMenuItem_UpCall(_QWORD* a1, char a2);
__int64 BgmCmdBtlMenuItem_DownCall(__int64 a1, char a2);
__int64 GameManager_a31fd0(_QWORD, _QWORD);
__int64 GameManager_a32140(_QWORD);
__int64 GameRoutine_1572370(_QWORD, _QWORD);
__int64 GameRoutine_1673c10(__int64*, char);
__int64 GameRoutine_16762b0(__int64*, char, __int64);
__int64 GameRoutine_1676790(_QWORD);
__int64 GameRoutine_1676880(void);
__int64 GameVariable_828800(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD);
__int64 game_8224a0(_QWORD);
__int64 snd_BGM_mute(_QWORD, long double);
__int64 snd_BGM_playNext(_QWORD, _QWORD, _QWORD, double, float);
__int64 snd_BGM_resumeMute(_QWORD, long double);
__int64 snd_BGM_stop_dc4e0(_QWORD, long double);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_data_getMuseumData(_QWORD);
__int64 snd_data_getMuseumDataCount(long double);
__int64 ui_LayoutAccessor_SetPaneTranslate(_QWORD, _QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 snd_fnd_calcCrc32(_QWORD, _QWORD);
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1aa49c1;
extern __int64 game_GameModeData_instance_;
extern __int64 game_sound_g_game_sound;
float GameRoutine_1675fe0(_QWORD);
float GameRoutine_1676100(_QWORD*);
float ui_LayoutAccessor_GetPaneTranslate(_QWORD, _QWORD);
__int64 BgmCmdBtlMenuItem_OnDeselect(__int64 a1);
__int64 BgmCmdBtlMenuItem_BCall(_BYTE* a1);
__int64 BgmCmdBtlMenuItem_Unknown70(__int64 a1);
__int64 BgmCmdBtlMenuItem_1677660(__int64 a1);
__int64 BgmCmdBtlMenuItem_1677840(__int64 a1);
__int64 GameRoutine_1572370_alt1(__int64, char) __asm__("GameRoutine_1572370");
__int64 GameRoutine_16762b0_alt1(__int64, char,
                                 _BYTE*) __asm__("GameRoutine_16762b0");
__int64 GameRoutine_1676790_alt1(__int64) __asm__("GameRoutine_1676790");
__int64 GameRoutine_1676880_alt1(__int64) __asm__("GameRoutine_1676880");
__int64 snd_BGM_resumeMute_alt1(__int64) __asm__("snd_BGM_resumeMute");
__int64 snd_BGM_stop_dc4e0_alt1(__int64) __asm__("snd_BGM_stop_dc4e0");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
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
unsigned __int8* snd_fnd_calcCrc32_alt1(unsigned __int8* result,
                                        int) __asm__("snd_fnd_calcCrc32");
void* snd_data_getMuseumData_alt1(int) __asm__("snd_data_getMuseumData");
void GameRoutine_1673c10_alt1(__int64*, char) __asm__("GameRoutine_1673c10");
void LayoutAccessor_1562060_alt1(__int64*, __int64,
                                 __int64) __asm__("LayoutAccessor_1562060");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");

__int64 BgmCmdBtlMenuItem_Destructor(__int64 a1)
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
  *(_QWORD*)a1 = game_menu_anonymous_BgmCmdBtlMenuItem_vtable;
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

void BgmCmdBtlMenuItem_Unknown19(__int64 a1)
{
  __int64 v1;
  _QWORD v2[2];

  if (*(_BYTE*)(a1 + 194) == 1) {
    v1 = *(_QWORD*)(a1 + 128);
    v2[0] = *(_QWORD*)(a1 + 120);
    v2[1] = v1;
    if (v1 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_16758d0(a1 + 144, v2);
      std___1___shared_weak_count___release_weak(v1);
    }
    else {
      GameRoutine_16758d0(a1 + 144, v2);
    }
  }
}

__int64 BgmCmdBtlMenuItem_OnSelect(__int64 a1)
{
  __int64 v2;
  __int64 v4[2];

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
  return GameRoutine_1677660(a1);
}

__int64 BgmCmdBtlMenuItem_OnDeselect(__int64 a1)
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
  _QWORD v25[25];

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) != 0 &&
      *(_BYTE*)(a1 + 192) == 1) {
    *(_BYTE*)(a1 + 192) = 0;
    if (*(int*)(game_sound_g_game_sound + 632) <= 0) {
      snd_Fade_Fade_10c830_alt1((__int64)v25, 0x1.f400000000000p+6f);
      snd_BGM_stop_dc4e0_alt1((__int64)v25);
      snd_Fade_Destroy_Fade_alt1(v25);
      snd_Fade_Fade_10c830_alt1((__int64)v25, 0x1.f400000000000p+9f);
      snd_BGM_resumeMute_alt1((__int64)v25);
      snd_Fade_Destroy_Fade_alt1(v25);
    }
  }
  v2 = 504;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + v2))(a1);
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
  *(_BYTE*)(a1 + 194) = 0;
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
          goto LABEL_39;
        }
      }
      v22 = *((char**)v17 + 4);
    }
  }
  else {
    v22 = "MID_Config_Sound_Default";
  }
LABEL_39:
  result = GameRoutine_16762b0_alt1((__int64)v25, 1, v22);
  if (v10 != 0) {
    return std___1___shared_weak_count___release_weak_alt1(v10);
  }
  return result;
}

__int64 BgmCmdBtlMenuItem_BCall(_BYTE* a1)
{
  double v2;
  long double v3;
  double v4;
  long double v5;
  _BYTE v7[200];

  if (((*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 464LL))(a1) & 1) != 0 &&
      a1[192] == 1) {
    a1[192] = 0;
    if (*(int*)(game_sound_g_game_sound + 632) <= 0) {
      LODWORD(v2) = 1123680256;
      *(__n128*)&v3 = snd_Fade_Fade_10c830(v7, v2);
      snd_BGM_stop_dc4e0(v7, v3);
      snd_Fade_Destroy_Fade(v7);
      LODWORD(v4) = 1148846080;
      *(__n128*)&v5 = snd_Fade_Fade_10c830(v7, v4);
      snd_BGM_resumeMute(v7, v5);
      snd_Fade_Destroy_Fade(v7);
    }
  }
  return 3;
}

__int64 BgmCmdBtlMenuItem_UpCall(_QWORD* a1, char a2)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 0;
  }
  if ((a1[23] & 1) == 0) {
    a1[22] = 0;
    goto LABEL_6;
  }
  v4 = a1[22];
  if (v4 >= -1 - 0x5555555555555555LL * ((__int64)(a1[20] - a1[19]) >> 3)) {
    if ((a2 & 1) != 0) {
      *((_BYTE*)a1 + 184) = 0;
      goto LABEL_7;
    }
    return 0;
  }
  a1[22] = v4 + 1;

LABEL_6:
  *((_BYTE*)a1 + 184) = 1;

LABEL_7:
  GameRoutine_1677840(a1);
  (*(void (**)(_QWORD*))(*a1 + 440LL))(a1);
  v5 = a1[16];
  if (v5 != 0) {
    v6 = a1[15];
    v7 = a1[16];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    v8 = std___1___shared_weak_count_lock(v7);
    if (v8 != 0) {
      v9 = v8;
      if (v6 != 0) {
        GameRoutine_159e7c0(v6, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v9);
      }
    }
    std___1___shared_weak_count___release_weak(v5);
  }
  GameRoutine_1677660(a1);
  return 1;
}

__int64 BgmCmdBtlMenuItem_DownCall(__int64 a1, char a2)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) != 0) {
    if ((*(_BYTE*)(a1 + 184) & 1) != 0) {
      v4 = *(_QWORD*)(a1 + 176);
      if (v4 == 0) {
        goto LABEL_8;
      }
      goto LABEL_7;
    }
    if ((a2 & 1) != 0) {
      v4 = 0xAAAAAAAAAAAAAAABLL *
           ((__int64)(*(_QWORD*)(a1 + 160) - *(_QWORD*)(a1 + 152)) >> 3);
    LABEL_7:
      *(_QWORD*)(a1 + 176) = v4 - 1;
      LOBYTE(v4) = 1;
    LABEL_8:
      *(_BYTE*)(a1 + 184) = v4;
      GameRoutine_1677840(a1);
      (*(void (**)(__int64))(*(_QWORD*)a1 + 440LL))(a1);
      v5 = *(_QWORD*)(a1 + 128);
      if (v5 != 0) {
        v6 = *(_QWORD*)(a1 + 120);
        v7 = *(_QWORD*)(a1 + 128);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                  memory_order_relaxed);
        v8 = std___1___shared_weak_count_lock(v7);
        if (v8 != 0) {
          v9 = v8;
          if (v6 != 0) {
            GameRoutine_159e7c0(v6, 1);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
            std___1___shared_weak_count___release_weak(v9);
          }
        }
        std___1___shared_weak_count___release_weak(v5);
      }
      GameRoutine_1677660(a1);
      return 1;
    }
  }
  return 0;
}

__int64 BgmCmdBtlMenuItem_Unknown70(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  int v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int8* v9;
  unsigned int v10;
  int v11;
  const char* v12;
  int v13;
  int v14;
  void* v15;
  int v16;
  bool v17;
  int v18;
  __int64 v20;
  float v21;
  __int64 v22;
  float v23;
  double v24;
  float v25;
  int v26;
  int v27;
  float v28;
  float v29;
  __int64 v30;
  bool v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int8* v35;
  unsigned int v36;
  int v37;
  int v38;
  int v39;
  void* v40;
  int v41;
  int v43;
  char* v45;
  __int64 result;
  int v47;
  _BOOL4 v48;
  float v49[3];
  _DWORD v50[3];
  _QWORD v51[2];
  _QWORD v52[2];
  _QWORD v53[26];

  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s1", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s2", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s2", "=w"));
  v1 = *(_QWORD*)(a1 + 176);
  v2 = *(unsigned __int8*)(a1 + 184);
  GameRoutine_1676880_alt1(a1),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s1", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s2", "=w")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s2", "=w"));
  v4 = *(_QWORD*)(a1 + 128);
  if (v4 != 0) {
    v5 = std___1___shared_weak_count_lock_alt1(v4),
    v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s1", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s2", "=w")),
    v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
    v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v5 != 0) {
      v6 = *(__int64**)(a1 + 120);
      v7 = v5;
      if (v6 != nullptr) {
        if (*(_BYTE*)(a1 + 184) == 1) {
          v8 = *(_QWORD*)(a1 + 152) + 24LL * *(_QWORD*)(a1 + 176);
          if ((*(_BYTE*)v8 & 1) != 0) {
            v9 = *(unsigned __int8**)(v8 + 16);
          }
          else {
            v9 = (unsigned __int8*)(v8 + 1);
          }
          v10 = (unsigned int)snd_fnd_calcCrc32_alt1(v9, 0),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s1", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s2", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s2", "=w"));
          v11 = snd_data_getMuseumDataCount_alt1(),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s1", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s2", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s2", "=w"));
          if (v11 < 1) {
            v12 = (const char*)&GameData_1aa49c1;
          }
          else {
            v12 = (const char*)&GameData_1aa49c1;
            v13 = v11;
            v14 = 0;
            while (1) {
              v15 = snd_data_getMuseumData_alt1(v14),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(float, "s2", "=w"));
              if (*((_DWORD*)v15 + 3) == v10) {
                break;
              }
              v16 = *((_DWORD*)v15 + 6);
              v17 = v16 != 0 && v16 == v10;
              if (v17) {
                break;
              }
              v18 = *((_DWORD*)v15 + 7);
              if (v18 != 0 && v18 == v10) {
                break;
              }
              if (v13 == ++v14) {
                goto LABEL_24;
              }
            }
            v12 = *((const char**)v15 + 4);
          }
        }
        else {
          v12 = "MID_Config_Sound_Default";
        }
      LABEL_24:
        LayoutAccessor_1562060_alt1(v6, (__int64)"T_Txt", (__int64)v12),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s1", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s2", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s2", "=w"));
        LayoutAccessor_1562060_alt1(v6, (__int64)"T_Txt2", (__int64)v12),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s1", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s2", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s2", "=w"));
        v20 = *(_QWORD*)(a1 + 128);
        v52[0] = *(_QWORD*)(a1 + 120);
        v52[1] = v20;
        if (v20 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                                    memory_order_relaxed);
          v21 = GameRoutine_1676100_alt1((__int64)v52),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s1", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s2", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s2", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v20),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(float, "s2", "=w"));
        }
        else {
          v21 = GameRoutine_1676100_alt1((__int64)v52),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s1", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s2", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s2", "=w"));
        }
        v22 = *(_QWORD*)(a1 + 128);
        v51[0] = *(_QWORD*)(a1 + 120);
        v51[1] = v22;
        if (v22 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 16), 1u,
                                    memory_order_relaxed);
          v23 = GameRoutine_1675fe0_alt1(v51),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s1", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s2", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s2", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v22),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(float, "s2", "=w"));
        }
        else {
          v23 = GameRoutine_1675fe0_alt1(v51),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s1", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s2", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s2", "=w"));
        }
        v24 = ui_LayoutAccessor_GetPaneTranslate_alt1(v6, "T_Txt"),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s1", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s2", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s2", "=w"));
        v25 = *(float*)&v24;
        v50[0] = LODWORD(v24);
        v50[1] = v26;
        v50[2] = v27;
        ui_LayoutAccessor_GetPaneTranslate_alt1(v6, "T_Txt2"),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s1", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s2", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s2", "=w"));
        v49[1] = v28;
        v49[2] = v29;
        if (v23 >= v21) {
          v50[0] = 0;
          v49[0] = v23 + 0x0.0p+0f;
          ui_LayoutAccessor_SetPaneTranslate_alt1(v6, "T_Txt", (__int64)v50),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(float, "s2", "=w"));
          v31 = false;
        }
        else {
          v30 = *(_QWORD*)(a1 + 8);
          v49[0] = v21 + v25;
          v31 = *(_QWORD*)(v30 + 336) == a1;
        }
        *(_BYTE*)(a1 + 194) = v31;
        ui_LayoutAccessor_SetPaneTranslate_alt1(v6, "T_Txt2", (__int64)v49),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s1", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s2", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s2", "=w"));
        ui_LayoutAccessor_SetPaneVisible_alt1(
            (__int64)v6, (__int64)"T_Txt2",
            *(_QWORD*)(*(_QWORD*)(a1 + 8) + 336LL) == a1),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s1", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s2", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s2", "=w"));
        v32 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 336LL);
        (*(void (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s1", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s2", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s2", "=w"));
        v33 = *(_QWORD*)(a1 + 128);
        v53[0] = *(_QWORD*)(a1 + 120);
        v53[1] = v33;
        if (v33 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 16), 1u,
                                    memory_order_relaxed);
        }
        if (*(_BYTE*)(a1 + 184) == 1) {
          v34 = *(_QWORD*)(a1 + 152) + 24LL * *(_QWORD*)(a1 + 176);
          if ((*(_BYTE*)v34 & 1) != 0) {
            v35 = *(unsigned __int8**)(v34 + 16);
          }
          else {
            v35 = (unsigned __int8*)(v34 + 1);
          }
          v36 = (unsigned int)snd_fnd_calcCrc32_alt1(v35, 0),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s1", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s2", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s2", "=w"));
          v37 = snd_data_getMuseumDataCount_alt1(),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s1", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s2", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s2", "=w"));
          if (v37 < 1) {
            v45 = (char*)&GameData_1aa49c1;
          }
          else {
            v38 = v37;
            v39 = 0;
            while (1) {
              v40 = snd_data_getMuseumData_alt1(v39),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(float, "s2", "=w"));
              if (*((_DWORD*)v40 + 3) == v36) {
                break;
              }
              v41 = *((_DWORD*)v40 + 6);
              if (v41 != 0 && v41 == v36) {
                break;
              }
              v43 = *((_DWORD*)v40 + 7);
              if (v43 != 0 && v43 == v36) {
                break;
              }
              if (v38 == ++v39) {
                v45 = (char*)&GameData_1aa49c1;
                goto LABEL_55;
              }
            }
            v45 = *((char**)v40 + 4);
          }
        }
        else {
          v45 = "MID_Config_Sound_Default";
        }
      LABEL_55:
        GameRoutine_16762b0_alt1((__int64)v53, v32 != a1, v45),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s1", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s2", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s2", "=w"));
        if (v33 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v33),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(float, "s2", "=w"));
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s1", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s2", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s2", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v7),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s1", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s2", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s2", "=w"));
      }
    }
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s1", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s2", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s2", "=w"));
  if ((result & 1) != 0) {
    v47 = *(unsigned __int8*)(a1 + 184);
    v17 = v2 == v47;
    v48 = v2 != v47;
    if (v17 && (v2 & 1) != 0) {
      v48 = v1 != *(_QWORD*)(a1 + 176);
    }
    if (v48 && (*(_BYTE*)(a1 + 192) & 1) != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s1", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s2", "=w")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s2", "=w"));
      if ((result & 1) != 0 && (*(_BYTE*)(a1 + 192) & 1) != 0) {
        *(_BYTE*)(a1 + 192) = 0;
        if (*(int*)(game_sound_g_game_sound + 632) <= 0) {
          snd_Fade_Fade_10c830_alt1((__int64)v53, 0x1.f400000000000p+6f),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(float, "s2", "=w"));
          snd_BGM_stop_dc4e0_alt1((__int64)v53),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(float, "s2", "=w"));
          snd_Fade_Destroy_Fade_alt1(v53),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(float, "s2", "=w"));
          snd_Fade_Fade_10c830_alt1((__int64)v53, 0x1.f400000000000p+9f),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(float, "s2", "=w"));
          snd_BGM_resumeMute_alt1((__int64)v53),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(float, "s2", "=w"));
          return snd_Fade_Destroy_Fade_alt1(v53);
        }
      }
    }
  }
  return result;
}

__int64 BgmCmdBtlMenuItem_1677660(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  float v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  long double v9;
  int v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  __int64 v15;
  int v16;
  int v18;
  const char* v20;
  __int64 result;
  _QWORD v22[2];
  _QWORD v23[2];
  __int64 v24[2];

  v1 = *(_QWORD*)(a1 + 120);
  v2 = *(_QWORD*)(a1 + 128);
  *(_QWORD*)(a1 + 144) = 0;
  v23[0] = v1;
  v23[1] = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
  }
  v4 = GameRoutine_1675fe0(v23);
  v5 = *(_QWORD*)(a1 + 128);
  v22[0] = *(_QWORD*)(a1 + 120);
  v22[1] = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    *(_BYTE*)(a1 + 194) = v4 < GameRoutine_1676100(v22);
    std___1___shared_weak_count___release_weak(v5);
    if (v2 == 0) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  *(_BYTE*)(a1 + 194) = v4 < GameRoutine_1676100(v22);
  if (v2 != 0) {
  LABEL_5:
    std___1___shared_weak_count___release_weak(v2);
  }
LABEL_6:
  (*(void (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  v6 = *(_QWORD*)(a1 + 128);
  v24[0] = *(_QWORD*)(a1 + 120);
  v24[1] = v6;
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                              memory_order_relaxed);
  }
  if (*(_BYTE*)(a1 + 184) == 1) {
    v7 = *(_QWORD*)(a1 + 152) + 24LL * *(_QWORD*)(a1 + 176);
    if ((*(_BYTE*)v7 & 1) != 0) {
      v8 = *(_QWORD*)(v7 + 16);
    }
    else {
      v8 = v7 + 1;
    }
    *(__n128*)&v9 = snd_fnd_calcCrc32(v8, 0);
    v11 = v10;
    v12 = snd_data_getMuseumDataCount(v9);
    if (v12 < 1) {
      v20 = (const char*)&GameData_1aa49c1;
    }
    else {
      v13 = v12;
      v14 = 0;
      while (1) {
        v15 = snd_data_getMuseumData(v14);
        if (*(_DWORD*)(v15 + 12) == v11) {
          break;
        }
        v16 = *(_DWORD*)(v15 + 24);
        if (v16 != 0 && v16 == v11) {
          break;
        }
        v18 = *(_DWORD*)(v15 + 28);
        if (v18 != 0 && v18 == v11) {
          break;
        }
        if (v13 == ++v14) {
          v20 = (const char*)&GameData_1aa49c1;
          goto LABEL_30;
        }
      }
      v20 = *(const char**)(v15 + 32);
    }
  }
  else {
    v20 = "MID_Config_Sound_Default";
  }
LABEL_30:
  result = GameRoutine_16762b0(v24, 0, (__int64)v20);
  if (v6 != 0) {
    return std___1___shared_weak_count___release_weak(v6);
  }
  return result;
}

__int64 BgmCmdBtlMenuItem_1677840(__int64 a1)
{
  double v2;
  __int64 v3;
  __int64 v4;
  long double v5;
  __int64 v6;
  __int64 v7;
  _BYTE v9[200];

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) != 0 &&
      (*(_BYTE*)(a1 + 192) & 1) == 0 &&
      (*(_BYTE*)(a1 + 192) = 1, *(int*)(game_sound_g_game_sound + 632) <= 0)) {
    LODWORD(v2) = 1123680256;
    *(__n128*)&v5 = snd_Fade_Fade_10c830(v9, v2);
    snd_BGM_mute(v9, v5);
    snd_Fade_Destroy_Fade(v9);
    if ((*(_BYTE*)(a1 + 184) & 1) != 0) {
      goto LABEL_5;
    }
  }
  else if ((*(_BYTE*)(a1 + 184) & 1) != 0) {
  LABEL_5:
    v3 = *(_QWORD*)(a1 + 152) + 24LL * *(_QWORD*)(a1 + 176);
    if ((*(_BYTE*)v3 & 1) != 0) {
      v4 = *(_QWORD*)(v3 + 16);
    }
    else {
      v4 = v3 + 1;
    }
    GameManager_a31fd0(game_sound_g_game_sound, v4);
    goto LABEL_12;
  }
  v6 = game_8224a0(22);
  if (game_GameModeData_instance_ != 0) {
    GameVariable_828800(game_GameModeData_instance_ + 40, v6, 0);
  }
LABEL_12:
  v7 = GameManager_a32140(game_sound_g_game_sound);
  snd_Fade_Fade_10c830(v9, 0.0);
  snd_BGM_playNext(v7, v9, 0, 0.0, 1.0);
  return snd_Fade_Destroy_Fade(v9);
}

#pragma GCC visibility pop
