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
  __int64 v12;
  long double v13;
  int v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  __int64 v19;
  int v20;
  int v22;
  const char* v24;
  __int64 result;
  _QWORD v26[2];
  _QWORD v27[2];

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
    v6 = std___1___shared_weak_count_lock(v5);
    if (v6 != 0) {
      v7 = v6;
      if (v4 != 0) {
        GameRoutine_1572370(v4, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v7);
      }
    }
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_1673c10((__int64*)a1, 0);
  v8 = *(_QWORD*)(a1 + 128);
  v26[0] = *(_QWORD*)(a1 + 120);
  v26[1] = v8;
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1676790(v26);
    std___1___shared_weak_count___release_weak(v8);
  }
  else {
    GameRoutine_1676790(v26);
  }
  v9 = *(_QWORD*)a1;
  *(_BYTE*)(a1 + 192) = 0;
  (*(void (**)(__int64))(v9 + 464))(a1);
  v10 = *(_QWORD*)(a1 + 128);
  v27[0] = *(_QWORD*)(a1 + 120);
  v27[1] = v10;
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
  }
  if (*(_BYTE*)(a1 + 184) == 1) {
    v11 = *(_QWORD*)(a1 + 152) + 24LL * *(_QWORD*)(a1 + 176);
    if ((*(_BYTE*)v11 & 1) != 0) {
      v12 = *(_QWORD*)(v11 + 16);
    }
    else {
      v12 = v11 + 1;
    }
    *(__n128*)&v13 = snd_fnd_calcCrc32(v12, 0);
    v15 = v14;
    v16 = snd_data_getMuseumDataCount(v13);
    if (v16 < 1) {
      v24 = (const char*)&GameData_1aa49c1;
    }
    else {
      v17 = v16;
      v18 = 0;
      while (1) {
        v19 = snd_data_getMuseumData(v18);
        if (*(_DWORD*)(v19 + 12) == v15) {
          break;
        }
        v20 = *(_DWORD*)(v19 + 24);
        if (v20 != 0 && v20 == v15) {
          break;
        }
        v22 = *(_DWORD*)(v19 + 28);
        if (v22 != 0 && v22 == v15) {
          break;
        }
        if (v17 == ++v18) {
          v24 = (const char*)&GameData_1aa49c1;
          goto LABEL_35;
        }
      }
      v24 = *(const char**)(v19 + 32);
    }
  }
  else {
    v24 = "MID_Config_Sound_Default";
  }
LABEL_35:
  result = GameRoutine_16762b0(v27, 1, v24);
  if (v10 != 0) {
    return std___1___shared_weak_count___release_weak(v10);
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
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  long double v7;
  int v8;
  int v9;
  int v10;
  const char* v11;
  int v12;
  unsigned int v13;
  __int64 v14;
  int v15;
  int v17;
  __int64 v19;
  float v20;
  __int64 v21;
  float v22;
  float v23;
  int v24;
  int v25;
  float v26;
  float v27;
  __int64 v28;
  bool v29;
  long double v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  long double v35;
  int v36;
  int v37;
  int v38;
  int v39;
  unsigned int v40;
  __int64 v41;
  int v42;
  int v44;
  const char* v46;
  float v47[3];
  _DWORD v48[3];
  _QWORD v49[2];
  _QWORD v50[2];
  _QWORD v51[2];

  GameRoutine_1674ba0();
  result = *(_QWORD*)(a1 + 128);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 120);
      v4 = result;
      if (v3 != 0) {
        if (*(_BYTE*)(a1 + 184) == 1) {
          v5 = *(_QWORD*)(a1 + 152) + 24LL * *(_QWORD*)(a1 + 176);
          if ((*(_BYTE*)v5 & 1) != 0) {
            v6 = *(_QWORD*)(v5 + 16);
          }
          else {
            v6 = v5 + 1;
          }
          *(__n128*)&v7 = snd_fnd_calcCrc32(v6, 0);
          v9 = v8;
          v10 = snd_data_getMuseumDataCount(v7);
          if (v10 < 1) {
            v11 = (const char*)&GameData_1aa49c1;
          }
          else {
            v11 = (const char*)&GameData_1aa49c1;
            v12 = v10;
            v13 = 0;
            while (1) {
              v14 = snd_data_getMuseumData(v13);
              if (*(_DWORD*)(v14 + 12) == v9) {
                break;
              }
              v15 = *(_DWORD*)(v14 + 24);
              if (v15 != 0 && v15 == v9) {
                break;
              }
              v17 = *(_DWORD*)(v14 + 28);
              if (v17 != 0 && v17 == v9) {
                break;
              }
              if (v12 == ++v13) {
                goto LABEL_24;
              }
            }
            v11 = *(const char**)(v14 + 32);
          }
        }
        else {
          v11 = "MID_Config_Sound_Default";
        }
      LABEL_24:
        LayoutAccessor_1562060(v3, "T_Txt", v11);
        LayoutAccessor_1562060(v3, "T_Txt2", v11);
        v19 = *(_QWORD*)(a1 + 128);
        v50[0] = *(_QWORD*)(a1 + 120);
        v50[1] = v19;
        if (v19 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                                    memory_order_relaxed);
          v20 = GameRoutine_1676100(v50);
          std___1___shared_weak_count___release_weak(v19);
        }
        else {
          v20 = GameRoutine_1676100(v50);
        }
        v21 = *(_QWORD*)(a1 + 128);
        v49[0] = *(_QWORD*)(a1 + 120);
        v49[1] = v21;
        if (v21 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                                    memory_order_relaxed);
          v22 = GameRoutine_1675fe0(v49);
          std___1___shared_weak_count___release_weak(v21);
        }
        else {
          v22 = GameRoutine_1675fe0(v49);
        }
        v23 = ui_LayoutAccessor_GetPaneTranslate(v3, "T_Txt");
        *(float*)v48 = v23;
        v48[1] = v24;
        v48[2] = v25;
        ui_LayoutAccessor_GetPaneTranslate(v3, "T_Txt2");
        v47[1] = v26;
        v47[2] = v27;
        if (v22 >= v20) {
          v48[0] = 0;
          v47[0] = v22 + 0.0;
          ui_LayoutAccessor_SetPaneTranslate(v3, "T_Txt", v48);
          v29 = false;
        }
        else {
          v28 = *(_QWORD*)(a1 + 8);
          v47[0] = v20 + v23;
          v29 = *(_QWORD*)(v28 + 336) == a1;
        }
        *(_BYTE*)(a1 + 192) = v29;
        ui_LayoutAccessor_SetPaneTranslate(v3, "T_Txt2", v47);
        *(__n128*)&v30 = ui_LayoutAccessor_SetPaneVisible(
            v3, "T_Txt2", *(_QWORD*)(*(_QWORD*)(a1 + 8) + 336LL) == a1);
        v31 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 336LL);
        (*(void (**)(__int64, long double))(*(_QWORD*)a1 + 464LL))(a1, v30);
        v32 = *(_QWORD*)(a1 + 128);
        v51[0] = *(_QWORD*)(a1 + 120);
        v51[1] = v32;
        if (v32 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 16), 1u,
                                    memory_order_relaxed);
        }
        if (*(_BYTE*)(a1 + 184) == 1) {
          v33 = *(_QWORD*)(a1 + 152) + 24LL * *(_QWORD*)(a1 + 176);
          if ((*(_BYTE*)v33 & 1) != 0) {
            v34 = *(_QWORD*)(v33 + 16);
          }
          else {
            v34 = v33 + 1;
          }
          *(__n128*)&v35 = snd_fnd_calcCrc32(v34, 0);
          v37 = v36;
          v38 = snd_data_getMuseumDataCount(v35);
          if (v38 < 1) {
            v46 = (const char*)&GameData_1aa49c1;
          }
          else {
            v39 = v38;
            v40 = 0;
            while (1) {
              v41 = snd_data_getMuseumData(v40);
              if (*(_DWORD*)(v41 + 12) == v37) {
                break;
              }
              v42 = *(_DWORD*)(v41 + 24);
              if (v42 != 0 && v42 == v37) {
                break;
              }
              v44 = *(_DWORD*)(v41 + 28);
              if (v44 != 0 && v44 == v37) {
                break;
              }
              if (v39 == ++v40) {
                v46 = (const char*)&GameData_1aa49c1;
                goto LABEL_55;
              }
            }
            v46 = *(const char**)(v41 + 32);
          }
        }
        else {
          v46 = "MID_Config_Sound_Default";
        }
      LABEL_55:
        result = GameRoutine_16762b0(v51, v31 != a1, v46);
        if (v32 != 0) {
          result = std___1___shared_weak_count___release_weak(v32);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

__int64 BgmEncountMenuItem_1675e00(__int64 a1)
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
  _QWORD v24[2];

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
    *(_BYTE*)(a1 + 192) = v4 < GameRoutine_1676100(v22);
    std___1___shared_weak_count___release_weak(v5);
    if (v2 == 0) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  *(_BYTE*)(a1 + 192) = v4 < GameRoutine_1676100(v22);
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
  result = GameRoutine_16762b0(v24, 0, v20);
  if (v6 != 0) {
    return std___1___shared_weak_count___release_weak(v6);
  }
  return result;
}

#pragma GCC visibility pop
