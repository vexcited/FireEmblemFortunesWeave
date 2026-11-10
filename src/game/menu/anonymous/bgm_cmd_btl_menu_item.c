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
  double v2;
  long double v3;
  double v4;
  long double v5;
  __int64 v6;
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
  long double v17;
  int v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  __int64 v23;
  int v24;
  int v26;
  const char* v28;
  __int64 result;
  _QWORD v30[2];
  __int64 v31[25];

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) != 0 &&
      *(_BYTE*)(a1 + 192) == 1) {
    *(_BYTE*)(a1 + 192) = 0;
    if (*(int*)(game_sound_g_game_sound + 632) <= 0) {
      LODWORD(v2) = 1123680256;
      *(__n128*)&v3 = snd_Fade_Fade_10c830(v31, v2);
      snd_BGM_stop_dc4e0(v31, v3);
      snd_Fade_Destroy_Fade(v31);
      LODWORD(v4) = 1148846080;
      *(__n128*)&v5 = snd_Fade_Fade_10c830(v31, v4);
      snd_BGM_resumeMute(v31, v5);
      snd_Fade_Destroy_Fade(v31);
    }
  }
  v6 = 504;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v6 = 520;
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + v6))(a1);
  v7 = *(_QWORD*)(a1 + 128);
  if (v7 != 0) {
    v8 = *(_QWORD*)(a1 + 120);
    v9 = *(_QWORD*)(a1 + 128);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
    v10 = std___1___shared_weak_count_lock(v9);
    if (v10 != 0) {
      v11 = v10;
      if (v8 != 0) {
        GameRoutine_1572370(v8, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak(v11);
      }
    }
    std___1___shared_weak_count___release_weak(v7);
  }
  GameRoutine_1673c10((__int64*)a1, 0);
  v12 = *(_QWORD*)(a1 + 128);
  v30[0] = *(_QWORD*)(a1 + 120);
  v30[1] = v12;
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1676790(v30);
    std___1___shared_weak_count___release_weak(v12);
  }
  else {
    GameRoutine_1676790(v30);
  }
  v13 = *(_QWORD*)a1;
  *(_BYTE*)(a1 + 194) = 0;
  (*(void (**)(__int64))(v13 + 464))(a1);
  v14 = *(_QWORD*)(a1 + 128);
  v31[0] = *(_QWORD*)(a1 + 120);
  v31[1] = v14;
  if (v14 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                              memory_order_relaxed);
  }
  if (*(_BYTE*)(a1 + 184) == 1) {
    v15 = *(_QWORD*)(a1 + 152) + 24LL * *(_QWORD*)(a1 + 176);
    if ((*(_BYTE*)v15 & 1) != 0) {
      v16 = *(_QWORD*)(v15 + 16);
    }
    else {
      v16 = v15 + 1;
    }
    *(__n128*)&v17 = snd_fnd_calcCrc32(v16, 0);
    v19 = v18;
    v20 = snd_data_getMuseumDataCount(v17);
    if (v20 < 1) {
      v28 = (const char*)&GameData_1aa49c1;
    }
    else {
      v21 = v20;
      v22 = 0;
      while (1) {
        v23 = snd_data_getMuseumData(v22);
        if (*(_DWORD*)(v23 + 12) == v19) {
          break;
        }
        v24 = *(_DWORD*)(v23 + 24);
        if (v24 != 0 && v24 == v19) {
          break;
        }
        v26 = *(_DWORD*)(v23 + 28);
        if (v26 != 0 && v26 == v19) {
          break;
        }
        if (v21 == ++v22) {
          v28 = (const char*)&GameData_1aa49c1;
          goto LABEL_39;
        }
      }
      v28 = *(const char**)(v23 + 32);
    }
  }
  else {
    v28 = "MID_Config_Sound_Default";
  }
LABEL_39:
  result = GameRoutine_16762b0(v31, 1, (__int64)v28);
  if (v14 != 0) {
    return std___1___shared_weak_count___release_weak(v14);
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
  __int64 v1;
  int v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  long double v10;
  int v11;
  int v12;
  int v13;
  const char* v14;
  int v15;
  unsigned int v16;
  __int64 v17;
  int v18;
  bool v19;
  int v20;
  __int64 v22;
  float v23;
  __int64 v24;
  float v25;
  float v26;
  int v27;
  int v28;
  float v29;
  float v30;
  __int64 v31;
  bool v32;
  long double v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  long double v38;
  int v39;
  int v40;
  int v41;
  int v42;
  unsigned int v43;
  __int64 v44;
  int v45;
  int v47;
  const char* v49;
  __int64 result;
  int v51;
  _BOOL4 v52;
  double v53;
  long double v54;
  double v55;
  long double v56;
  float v57[3];
  _DWORD v58[3];
  _QWORD v59[2];
  _QWORD v60[2];
  __int64 v61[26];

  v1 = *(_QWORD*)(a1 + 176);
  v2 = *(unsigned __int8*)(a1 + 184);
  GameRoutine_1676880();
  v4 = *(_QWORD*)(a1 + 128);
  if (v4 != 0) {
    v5 = std___1___shared_weak_count_lock(v4);
    if (v5 != 0) {
      v6 = *(_QWORD*)(a1 + 120);
      v7 = v5;
      if (v6 != 0) {
        if (*(_BYTE*)(a1 + 184) == 1) {
          v8 = *(_QWORD*)(a1 + 152) + 24LL * *(_QWORD*)(a1 + 176);
          if ((*(_BYTE*)v8 & 1) != 0) {
            v9 = *(_QWORD*)(v8 + 16);
          }
          else {
            v9 = v8 + 1;
          }
          *(__n128*)&v10 = snd_fnd_calcCrc32(v9, 0);
          v12 = v11;
          v13 = snd_data_getMuseumDataCount(v10);
          if (v13 < 1) {
            v14 = (const char*)&GameData_1aa49c1;
          }
          else {
            v14 = (const char*)&GameData_1aa49c1;
            v15 = v13;
            v16 = 0;
            while (1) {
              v17 = snd_data_getMuseumData(v16);
              if (*(_DWORD*)(v17 + 12) == v12) {
                break;
              }
              v18 = *(_DWORD*)(v17 + 24);
              v19 = v18 != 0 && v18 == v12;
              if (v19) {
                break;
              }
              v20 = *(_DWORD*)(v17 + 28);
              if (v20 != 0 && v20 == v12) {
                break;
              }
              if (v15 == ++v16) {
                goto LABEL_24;
              }
            }
            v14 = *(const char**)(v17 + 32);
          }
        }
        else {
          v14 = "MID_Config_Sound_Default";
        }
      LABEL_24:
        LayoutAccessor_1562060(v6, "T_Txt", v14);
        LayoutAccessor_1562060(v6, "T_Txt2", v14);
        v22 = *(_QWORD*)(a1 + 128);
        v60[0] = *(_QWORD*)(a1 + 120);
        v60[1] = v22;
        if (v22 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 16), 1u,
                                    memory_order_relaxed);
          v23 = GameRoutine_1676100(v60);
          std___1___shared_weak_count___release_weak(v22);
        }
        else {
          v23 = GameRoutine_1676100(v60);
        }
        v24 = *(_QWORD*)(a1 + 128);
        v59[0] = *(_QWORD*)(a1 + 120);
        v59[1] = v24;
        if (v24 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 16), 1u,
                                    memory_order_relaxed);
          v25 = GameRoutine_1675fe0(v59);
          std___1___shared_weak_count___release_weak(v24);
        }
        else {
          v25 = GameRoutine_1675fe0(v59);
        }
        v26 = ui_LayoutAccessor_GetPaneTranslate(v6, "T_Txt");
        *(float*)v58 = v26;
        v58[1] = v27;
        v58[2] = v28;
        ui_LayoutAccessor_GetPaneTranslate(v6, "T_Txt2");
        v57[1] = v29;
        v57[2] = v30;
        if (v25 >= v23) {
          v58[0] = 0;
          v57[0] = v25 + 0.0;
          ui_LayoutAccessor_SetPaneTranslate(v6, "T_Txt", v58);
          v32 = false;
        }
        else {
          v31 = *(_QWORD*)(a1 + 8);
          v57[0] = v23 + v26;
          v32 = *(_QWORD*)(v31 + 336) == a1;
        }
        *(_BYTE*)(a1 + 194) = v32;
        ui_LayoutAccessor_SetPaneTranslate(v6, "T_Txt2", v57);
        *(__n128*)&v33 = ui_LayoutAccessor_SetPaneVisible(
            v6, "T_Txt2", *(_QWORD*)(*(_QWORD*)(a1 + 8) + 336LL) == a1);
        v34 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 336LL);
        (*(void (**)(__int64, long double))(*(_QWORD*)a1 + 464LL))(a1, v33);
        v35 = *(_QWORD*)(a1 + 128);
        v61[0] = *(_QWORD*)(a1 + 120);
        v61[1] = v35;
        if (v35 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 16), 1u,
                                    memory_order_relaxed);
        }
        if (*(_BYTE*)(a1 + 184) == 1) {
          v36 = *(_QWORD*)(a1 + 152) + 24LL * *(_QWORD*)(a1 + 176);
          if ((*(_BYTE*)v36 & 1) != 0) {
            v37 = *(_QWORD*)(v36 + 16);
          }
          else {
            v37 = v36 + 1;
          }
          *(__n128*)&v38 = snd_fnd_calcCrc32(v37, 0);
          v40 = v39;
          v41 = snd_data_getMuseumDataCount(v38);
          if (v41 < 1) {
            v49 = (const char*)&GameData_1aa49c1;
          }
          else {
            v42 = v41;
            v43 = 0;
            while (1) {
              v44 = snd_data_getMuseumData(v43);
              if (*(_DWORD*)(v44 + 12) == v40) {
                break;
              }
              v45 = *(_DWORD*)(v44 + 24);
              if (v45 != 0 && v45 == v40) {
                break;
              }
              v47 = *(_DWORD*)(v44 + 28);
              if (v47 != 0 && v47 == v40) {
                break;
              }
              if (v42 == ++v43) {
                v49 = (const char*)&GameData_1aa49c1;
                goto LABEL_55;
              }
            }
            v49 = *(const char**)(v44 + 32);
          }
        }
        else {
          v49 = "MID_Config_Sound_Default";
        }
      LABEL_55:
        GameRoutine_16762b0(v61, v34 != a1, (__int64)v49);
        if (v35 != 0) {
          std___1___shared_weak_count___release_weak(v35);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v7);
      }
    }
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  if ((result & 1) != 0) {
    v51 = *(unsigned __int8*)(a1 + 184);
    v19 = v2 == v51;
    v52 = v2 != v51;
    if (v19 && (v2 & 1) != 0) {
      v52 = v1 != *(_QWORD*)(a1 + 176);
    }
    if (v52 && (*(_BYTE*)(a1 + 192) & 1) != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
      if ((result & 1) != 0 && (*(_BYTE*)(a1 + 192) & 1) != 0) {
        *(_BYTE*)(a1 + 192) = 0;
        if (*(int*)(game_sound_g_game_sound + 632) <= 0) {
          LODWORD(v53) = 1123680256;
          *(__n128*)&v54 = snd_Fade_Fade_10c830(v61, v53);
          snd_BGM_stop_dc4e0(v61, v54);
          snd_Fade_Destroy_Fade(v61);
          LODWORD(v55) = 1148846080;
          *(__n128*)&v56 = snd_Fade_Fade_10c830(v61, v55);
          snd_BGM_resumeMute(v61, v56);
          return snd_Fade_Destroy_Fade(v61);
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
