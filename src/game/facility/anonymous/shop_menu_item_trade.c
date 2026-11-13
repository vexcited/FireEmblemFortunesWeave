#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1868780(_QWORD);
__int64 GameRoutine_8a1dc0(_QWORD);
__int64 GameRoutine_8a2260(_QWORD);
__int64 ShopMenuItem_Trade_Unknown83(__int64 a1);
__int64 ShopMenuItem_Trade_Unknown3(__int64 a1);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 GameRoutine_9b11a0(_QWORD, _QWORD, _QWORD);
__int64 ObeliskDestinyMenuItem_1a06060(_QWORD, _QWORD, _QWORD);
__int64 game_8a26a0(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern _BYTE* GameData_2132020;
extern _UNKNOWN GameData_1a90da4;
extern _UNKNOWN GameData_1a90dca;
extern _UNKNOWN GameData_1b4d210;
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212ceb0;
extern __int64* game_g_empty_item_ptr;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21f61c0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
__int64 ShopMenuItem_Trade_Unknown82(__int64 a1);
__int64 ShopMenuItem_Trade_Unknown4(_QWORD* a1);
__int64 ShopMenuItem_Trade_1867b40_alt1(__int64 a1, __int64 a2) __asm__(
    "ShopMenuItem_Trade_1867b40");
__int64 GameRoutine_9b11a0_alt1(_QWORD*, unsigned __int64*,
                                int) __asm__("GameRoutine_9b11a0");
__int64 game_8a26a0_alt1(__int64**) __asm__("game_8a26a0");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__attribute__((swiftcall)) void
snd_play_ff2d0_alt1(PSEUDO_X8, __int64, __int64, __int64, unsigned int,
                    unsigned int, int, float, float) __asm__("snd_play_ff2d0");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
_QWORD* ObeliskDestinyMenuItem_1a06060_alt1(_QWORD* result, int*, char) __asm__(
    "ObeliskDestinyMenuItem_1a06060");
__int64 GameRoutine_930b90_alt1(__int64, __int64) __asm__("GameRoutine_930b90");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void GameRoutine_6e3b50_alt1(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ShopMenuItem_Trade_1867b40(__int64 a1, __int64 a2);

__int64 ShopMenuItem_Trade_Unknown82(__int64 a1)
{
  _QWORD handle[2];
  int i;
  void* v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  struct {
    __int64 v9;
    void* v10;
  } v9_;

  *GameData_2132020 = 1;
  snd_Fade_Fade_10c830_alt1((__int64)&v9_.v9, 0x0.0p+0f);
  snd_play_ff2d0_alt1((void*)(handle), (__int64)"SE_EVT_Goods_Swap",
                      (__int64)"SE_EVT_Goods_Swap", (__int64)&v9_.v9, 0,
                      0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade_alt1(&v9_.v9);
  if (*(int*)(a1 + 84) >= 1) {
    for (i = 0; i < (signed __int32)*(_DWORD*)(a1 + 84); ++i) {
      if ((game_8a26a0_alt1(*(__int64***)(a1 + 120)) & 1) == 0) {
        continue;
      }
      v4 = *(_QWORD*)(a1 + 112);
      if (v4 == 0) {
        continue;
      }
      v5 = *(unsigned __int8*)(*(_QWORD*)(v4 + 24) + 64LL);
      if (v5 == 7) {
        v9_.v10 = &GameData_1a90dca;
        v3 = &GameData_1a90dca;
      }
      else {
        if (v5 != 5) {
          continue;
        }
        v9_.v10 = &GameData_1a90da4;
        v3 = &GameData_1a90da4;
      }
      v9_.v9 = game_HashString_alt1((__int64)v3);
      GameRoutine_9b11a0_alt1(&GameData_21f61c0, (unsigned __int64*)&v9_.v9, 1);
    }
  }
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 96) + 80LL))(a1 + 96);
  if (v6 != 0) {
    v7 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 1128LL))(v6);
    (*(void (**)(__int64))(*(_QWORD*)v7 + 1136LL))(v7);
    (*(void (**)(__int64))(*(_QWORD*)v7 + 1120LL))(v7);
  }
  return 2;
}

__int64 ShopMenuItem_Trade_Unknown83(__int64 a1)
{
  if ((GameRoutine_8a2260(*(_QWORD*)(a1 + 120)) & 1) != 0 &&
      (unsigned int)GameRoutine_8a1dc0(*(_QWORD*)(a1 + 120)) != 0) {
    return GameRoutine_1868780(a1);
  }
  else {
    return 0;
  }
}

__int64 ShopMenuItem_Trade_Unknown3(__int64 a1)
{
  if ((GameRoutine_8a2260(*(_QWORD*)(a1 + 24)) & 1) != 0 &&
      (unsigned int)GameRoutine_8a1dc0(*(_QWORD*)(a1 + 24)) != 0) {
    return GameRoutine_1868780(a1 - 96);
  }
  else {
    return 0;
  }
}

__int64 ShopMenuItem_Trade_Unknown4(_QWORD* a1)
{
  int i;
  void* v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  void* v11;

  *GameData_2132020 = 1;
  snd_Fade_Fade_10c830(&v10, 0.0f);
  snd_play_ff2d0((void*)(&v9), "SE_EVT_Goods_Swap", "SE_EVT_Goods_Swap", &v10,
                 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(&v10);
  if (*((int*)a1 - 3) >= 1) {
    for (i = 0; i < *((_DWORD*)a1 - 3); ++i) {
      if ((game_8a26a0(a1[3]) & 1) == 0) {
        continue;
      }
      v4 = a1[2];
      if (v4 == 0) {
        continue;
      }
      v5 = *(unsigned __int8*)(*(_QWORD*)(v4 + 24) + 64LL);
      if (v5 == 7) {
        v11 = &GameData_1a90dca;
        v3 = &GameData_1a90dca;
      }
      else {
        if (v5 != 5) {
          continue;
        }
        v11 = &GameData_1a90da4;
        v3 = &GameData_1a90da4;
      }
      v10 = game_HashString(v3);
      GameRoutine_9b11a0(&GameData_21f61c0, &v10, 1);
    }
  }
  v6 = (*(__int64 (**)(_QWORD*))(*a1 + 80LL))(a1);
  if (v6 != 0) {
    v7 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 1128LL))(v6);
    (*(void (**)(__int64))(*(_QWORD*)v7 + 1136LL))(v7);
    (*(void (**)(__int64))(*(_QWORD*)v7 + 1120LL))(v7);
  }
  return 2;
}

void ShopMenuItem_Trade_1867b40(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v4;
  unsigned __int64* v5;
  int v6;
  __int64 v7;
  unsigned __int64* v8;
  int v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64** v19;
  __int64* v20;
  __int64* v21;
  _QWORD* v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 (*v29)(_QWORD);
  __int64 v30;
  _QWORD* v31;
  _DWORD* v32;
  _DWORD* v33;
  __int64* v34;
  __int64* v35;
  _QWORD* v36;
  __int64 v37;
  int v38;
  unsigned int v39;
  unsigned int v40;
  int v41;
  unsigned __int64 v42;
  int v43;
  int v44;
  __int64 v45;
  int v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  int v50;
  int v51;
  int v52;
  __int64 v53;
  _QWORD* v54;
  __int64 v55;
  __int64** v56;
  __int64* v57;
  __int64* v58;
  _QWORD* v59;
  __int64 v60;
  _QWORD* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 (*v66)(_QWORD);
  __int64 v67;
  _QWORD* v68;
  _DWORD* v69;
  _DWORD* v70;
  __int64* v71;
  __int64* v72;
  _QWORD* v73;
  __int64 v74;
  int v75;
  unsigned int v76;
  unsigned int v77;
  int v78;
  unsigned __int64 v79;
  int v80;
  int v81;
  __int64 v82;
  int v83;
  __int64 v84;
  int v87;
  unsigned __int64 v88;
  __int64 v89;
  struct {
    __int64 v90;
    int v91;
  } v90_;
  _QWORD** v92;
  struct {
    _QWORD* v93;
    __int64 v94;
    __int64 v95;
    __int64 v96;
    _BYTE* v97;
    int v98;
    int v99;
    int v100;
  } v93_;

  v2 = a2;
  v4 = GameData_212ceb0;
  if (*(_QWORD*)(a1 + 104) != 0) {
    v5 =
        (unsigned __int64*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
    v6 = *(_DWORD*)(a1 + 84);
    v87 = 8;
    v88 = *v5;
    if (*(_BYTE*)v4 != 0) {
      v7 = *v4;
    }
    else {
      v7 = 0;
    }
    v89 = v7;
    WORD1(v90_.v90) = 0;
    HIDWORD(v90_.v90) = 0;
    v93_.v94 = 0;
    v93_.v95 = 0;
    v93_.v96 = 0;
    v93_.v97 = nullptr;
    v92 = &v93_.v93;
    v93_.v93 = nullptr;
    GameRoutine_930b90_alt1((__int64)&v90_.v90, (__int64)GameData_212c8b0[0]);
    v93_.v98 = 0;
    v93_.v99 = v6;
    v93_.v100 = -1;
    ObeliskDestinyMenuItem_1a06060_alt1((_QWORD*)(v2 + 1520), &v87, 0);
    v90_.v91 = 0;
    v90_.v90 = 0;
    if ((v93_.v95 & 1) != 0) {
      *v93_.v97 = 0;
      v93_.v96 = 0;
    }
    else {
      LOWORD(v93_.v95) = 0;
    }
    GameRoutine_6e3b50_alt1((__int64)&v92, v93_.v93);
    v93_.v93 = nullptr;
    v93_.v94 = 0;
    v92 = &v93_.v93;
    if ((v93_.v95 & 1) != 0) {
      v11 = v93_.v97;
      if (v93_.v97 != nullptr) {
        v12 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, (__int64)v93_.v97);
        v11 = v93_.v93;
      }
    }
    else {
      v11 = nullptr;
    }
    GameRoutine_6e3b50_alt1((__int64)&v92, v11);
    v13 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 608LL))(a1);
    if (v13 >= 1) {
      v14 = *(_DWORD*)(a1 + 84);
      v87 = 0;
      v15 = v14 * v13;
      v88 = *game_g_empty_item_ptr;
      if (*(_BYTE*)GameData_212ceb0 != 0) {
        v16 = *GameData_212ceb0;
      }
      else {
        v16 = 0;
      }
      v89 = v16;
      WORD1(v90_.v90) = 0;
      HIDWORD(v90_.v90) = 0;
      v93_.v94 = 0;
      v93_.v95 = 0;
      v93_.v96 = 0;
      v93_.v97 = nullptr;
      v92 = &v93_.v93;
      v93_.v93 = nullptr;
      GameRoutine_930b90_alt1((__int64)&v90_.v90, (__int64)GameData_212c8b0[0]);
      v93_.v98 = 0;
      v93_.v99 = v15;
      v93_.v100 = 0;
      ObeliskDestinyMenuItem_1a06060_alt1((_QWORD*)(v2 + 1544), &v87, 0);
      v90_.v91 = 0;
      v90_.v90 = 0;
      if ((v93_.v95 & 1) != 0) {
        *v93_.v97 = 0;
        v93_.v96 = 0;
      }
      else {
        LOWORD(v93_.v95) = 0;
      }
      GameRoutine_6e3b50_alt1((__int64)&v92, v93_.v93);
      v93_.v93 = nullptr;
      v93_.v94 = 0;
      v92 = &v93_.v93;
      if ((v93_.v95 & 1) != 0) {
        v17 = v93_.v97;
        if (v93_.v97 != nullptr) {
          v18 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v18 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, (__int64)v93_.v97);
          v17 = v93_.v93;
        }
      }
      else {
        v17 = nullptr;
      }
      GameRoutine_6e3b50_alt1((__int64)&v92, v17);
    }
    v19 = *(__int64***)(a1 + 120);
    v21 = *v19;
    v20 = v19[1];
    if (*v19 == v20) {
      v22 = &GameData_1b4d210;
    }
    else {
      v22 = &GameData_1b4d210;
      while (2) {
        v23 = *v21;
        v24 = *(_QWORD**)(*v21 + 24);
        v25 = v24[6];
        v26 = v24[7];
        if (v26 == v25) {
        LABEL_46:
          v22 = v24 + 15;
        }
        else {
          while (1) {
            if (*(_QWORD*)v25 != 0) {
              v27 = game_GameModeData_instance_;
              if (game_GameModeData_instance_ != 0) {
                v28 = game_GameVariableTable_Find_alt1(
                    *(_QWORD**)(game_GameModeData_instance_ + 48),
                    (unsigned __int64*)v25);
                if (v28 != 0) {
                  v29 = *(__int64 (**)(_QWORD))(v28 + 72);
                  v30 = *(_QWORD*)(v28 + 80);
                  v31 = (_QWORD*)(v28 + (v30 >> 1));
                  if ((v30 & 1) != 0) {
                    v29 = *(__int64 (**)(_QWORD))((char*)v29 + *v31);
                  }
                  LOBYTE(v13) = v29(v31);
                }
                else {
                  LOBYTE(v13) = 1;
                }
              }
              if (*(_BYTE*)(v25 + 16) != ((v27 == 0) | v13 & 1)) {
                break;
              }
            }
            v25 += 24;
            if (v25 == v26) {
              v24 = *(_QWORD**)(v23 + 24);
              goto LABEL_46;
            }
          }
          if (++v21 != v20) {
            continue;
          }
        }
        break;
      }
    }
    v32 = (_DWORD*)*v22;
    v33 = (_DWORD*)v22[1];
    if ((_DWORD*)*v22 != v33) {
      v34 = GameData_212c8b0[0];
      v35 = game_map_MapRandom_instance__ptr[0];
      do {
        if (*(_QWORD*)v32 != 0) {
          v37 = *(unsigned __int16*)(*(_QWORD*)v32 + 16LL);
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                   8 * v37) +
                        73LL) == 17) {
            nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
            v38 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v35);
            v39 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v35 + 4);
            v40 = *(_DWORD*)v35 ^ (*(_DWORD*)v35 << 11);
            *(_DWORD*)v35 = *((_DWORD*)v35 + 1);
            *((_DWORD*)v35 + 1) = v38;
            v41 = (v40 >> 8) ^ (v39 >> 19) ^ v40 ^ v39;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v35) = v39;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v35 + 4) = v41;
            nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
            v2 = a2;
            v42 =
                (unsigned __int64)((16 * ((_WORD)v41 -
                                          1000 *
                                              (unsigned __int16)((v41 &
                                                                  0x7FFFFFFFu) /
                                                                 0x3E8)) +
                                    16) &
                                       0x3FF0 |
                                   1u)
                << 32;
          }
          else {
            v42 = 0x100000000LL;
          }
        }
        else {
          v42 = 0;
          v37 = 0;
        }
        v43 = v32[2];
        v88 = v42 | v37;
        v87 = 8;
        v44 = *(_DWORD*)(a1 + 84);
        if (*(_BYTE*)GameData_212ceb0 != 0) {
          v45 = *GameData_212ceb0;
        }
        else {
          v45 = 0;
        }
        v89 = v45;
        v46 = v44 * v43;
        WORD1(v90_.v90) = 0;
        HIDWORD(v90_.v90) = 0;
        v93_.v93 = nullptr;
        v93_.v94 = 0;
        v92 = &v93_.v93;
        v93_.v95 = 0;
        v93_.v96 = 0;
        v93_.v97 = nullptr;
        GameRoutine_930b90_alt1((__int64)&v90_.v90, (__int64)v34);
        v93_.v98 = 0;
        v93_.v99 = v46;
        v93_.v100 = -1;
        ObeliskDestinyMenuItem_1a06060_alt1((_QWORD*)(v2 + 1544), &v87, 0);
        v90_.v91 = 0;
        v90_.v90 = 0;
        if ((v93_.v95 & 1) != 0) {
          *v93_.v97 = 0;
          v93_.v96 = 0;
        }
        else {
          LOWORD(v93_.v95) = 0;
        }
        GameRoutine_6e3b50_alt1((__int64)&v92, v93_.v93);
        v93_.v93 = nullptr;
        v93_.v94 = 0;
        v92 = &v93_.v93;
        if ((v93_.v95 & 1) != 0) {
          v36 = v93_.v97;
          if (v93_.v97 != nullptr) {
            v47 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v47 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v47,
                (__int64)v93_.v97);
            v36 = v93_.v93;
          }
        }
        else {
          v36 = nullptr;
        }
        GameRoutine_6e3b50_alt1((__int64)&v92, v36);
        v32 += 4;
      } while (v32 != v33);
    }
  }
  else {
    v8 =
        (unsigned __int64*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
    v9 = *(_DWORD*)(a1 + 84);
    v87 = 8;
    v88 = *v8;
    if (*(_BYTE*)v4 != 0) {
      v10 = *v4;
    }
    else {
      v10 = 0;
    }
    v89 = v10;
    WORD1(v90_.v90) = 0;
    HIDWORD(v90_.v90) = 0;
    v93_.v94 = 0;
    v93_.v95 = 0;
    v93_.v96 = 0;
    v93_.v97 = nullptr;
    v92 = &v93_.v93;
    v93_.v93 = nullptr;
    GameRoutine_930b90_alt1((__int64)&v90_.v90, (__int64)GameData_212c8b0[0]);
    v93_.v98 = 0;
    v93_.v99 = v9;
    v93_.v100 = -1;
    ObeliskDestinyMenuItem_1a06060_alt1((_QWORD*)(v2 + 1520), &v87, 0);
    v90_.v91 = 0;
    v90_.v90 = 0;
    if ((v93_.v95 & 1) != 0) {
      *v93_.v97 = 0;
      v93_.v96 = 0;
    }
    else {
      LOWORD(v93_.v95) = 0;
    }
    GameRoutine_6e3b50_alt1((__int64)&v92, v93_.v93);
    v93_.v93 = nullptr;
    v93_.v94 = 0;
    v92 = &v93_.v93;
    if ((v93_.v95 & 1) != 0) {
      v48 = v93_.v97;
      if (v93_.v97 != nullptr) {
        v49 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v49 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v49, (__int64)v93_.v97);
        v48 = v93_.v93;
      }
    }
    else {
      v48 = nullptr;
    }
    GameRoutine_6e3b50_alt1((__int64)&v92, v48);
    v50 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 608LL))(a1);
    if (v50 >= 1) {
      v51 = *(_DWORD*)(a1 + 84);
      v87 = 0;
      v52 = v51 * v50;
      v88 = *game_g_empty_item_ptr;
      if (*(_BYTE*)GameData_212ceb0 != 0) {
        v53 = *GameData_212ceb0;
      }
      else {
        v53 = 0;
      }
      v89 = v53;
      WORD1(v90_.v90) = 0;
      HIDWORD(v90_.v90) = 0;
      v93_.v94 = 0;
      v93_.v95 = 0;
      v93_.v96 = 0;
      v93_.v97 = nullptr;
      v92 = &v93_.v93;
      v93_.v93 = nullptr;
      GameRoutine_930b90_alt1((__int64)&v90_.v90, (__int64)GameData_212c8b0[0]);
      v93_.v98 = 0;
      v93_.v99 = v52;
      v93_.v100 = 0;
      ObeliskDestinyMenuItem_1a06060_alt1((_QWORD*)(v2 + 1544), &v87, 0);
      v90_.v91 = 0;
      v90_.v90 = 0;
      if ((v93_.v95 & 1) != 0) {
        *v93_.v97 = 0;
        v93_.v96 = 0;
      }
      else {
        LOWORD(v93_.v95) = 0;
      }
      GameRoutine_6e3b50_alt1((__int64)&v92, v93_.v93);
      v93_.v93 = nullptr;
      v93_.v94 = 0;
      v92 = &v93_.v93;
      if ((v93_.v95 & 1) != 0) {
        v54 = v93_.v97;
        if (v93_.v97 != nullptr) {
          v55 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v55 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, (__int64)v93_.v97);
          v54 = v93_.v93;
        }
      }
      else {
        v54 = nullptr;
      }
      GameRoutine_6e3b50_alt1((__int64)&v92, v54);
    }
    v56 = *(__int64***)(a1 + 120);
    v58 = *v56;
    v57 = v56[1];
    if (*v56 == v57) {
      v59 = &GameData_1b4d210;
    }
    else {
      v59 = &GameData_1b4d210;
      while (2) {
        v60 = *v58;
        v61 = *(_QWORD**)(*v58 + 24);
        v62 = v61[6];
        v63 = v61[7];
        if (v63 == v62) {
        LABEL_108:
          v59 = v61 + 15;
        }
        else {
          while (1) {
            if (*(_QWORD*)v62 != 0) {
              v64 = game_GameModeData_instance_;
              if (game_GameModeData_instance_ != 0) {
                v65 = game_GameVariableTable_Find_alt1(
                    *(_QWORD**)(game_GameModeData_instance_ + 48),
                    (unsigned __int64*)v62);
                if (v65 != 0) {
                  v66 = *(__int64 (**)(_QWORD))(v65 + 72);
                  v67 = *(_QWORD*)(v65 + 80);
                  v68 = (_QWORD*)(v65 + (v67 >> 1));
                  if ((v67 & 1) != 0) {
                    v66 = *(__int64 (**)(_QWORD))((char*)v66 + *v68);
                  }
                  LOBYTE(v50) = v66(v68);
                }
                else {
                  LOBYTE(v50) = 1;
                }
              }
              if (*(_BYTE*)(v62 + 16) != ((v64 == 0) | v50 & 1)) {
                break;
              }
            }
            v62 += 24;
            if (v62 == v63) {
              v61 = *(_QWORD**)(v60 + 24);
              goto LABEL_108;
            }
          }
          if (++v58 != v57) {
            continue;
          }
        }
        break;
      }
    }
    v69 = (_DWORD*)*v59;
    v70 = (_DWORD*)v59[1];
    if ((_DWORD*)*v59 != v70) {
      v71 = GameData_212c8b0[0];
      v72 = game_map_MapRandom_instance__ptr[0];
      do {
        if (*(_QWORD*)v69 != 0) {
          v74 = *(unsigned __int16*)(*(_QWORD*)v69 + 16LL);
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                   8 * v74) +
                        73LL) == 17) {
            nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
            v75 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v72);
            v76 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v72 + 4);
            v77 = *(_DWORD*)v72 ^ (*(_DWORD*)v72 << 11);
            *(_DWORD*)v72 = *((_DWORD*)v72 + 1);
            *((_DWORD*)v72 + 1) = v75;
            v78 = (v77 >> 8) ^ (v76 >> 19) ^ v77 ^ v76;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v72) = v76;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v72 + 4) = v78;
            nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
            v2 = a2;
            v79 =
                (unsigned __int64)((16 * ((_WORD)v78 -
                                          1000 *
                                              (unsigned __int16)((v78 &
                                                                  0x7FFFFFFFu) /
                                                                 0x3E8)) +
                                    16) &
                                       0x3FF0 |
                                   1u)
                << 32;
          }
          else {
            v79 = 0x100000000LL;
          }
        }
        else {
          v79 = 0;
          v74 = 0;
        }
        v80 = v69[2];
        v88 = v79 | v74;
        v87 = 8;
        v81 = *(_DWORD*)(a1 + 84);
        if (*(_BYTE*)GameData_212ceb0 != 0) {
          v82 = *GameData_212ceb0;
        }
        else {
          v82 = 0;
        }
        v89 = v82;
        v83 = v81 * v80;
        WORD1(v90_.v90) = 0;
        HIDWORD(v90_.v90) = 0;
        v93_.v93 = nullptr;
        v93_.v94 = 0;
        v92 = &v93_.v93;
        v93_.v95 = 0;
        v93_.v96 = 0;
        v93_.v97 = nullptr;
        GameRoutine_930b90_alt1((__int64)&v90_.v90, (__int64)v71);
        v93_.v98 = 0;
        v93_.v99 = v83;
        v93_.v100 = -1;
        ObeliskDestinyMenuItem_1a06060_alt1((_QWORD*)(v2 + 1544), &v87, 0);
        v90_.v91 = 0;
        v90_.v90 = 0;
        if ((v93_.v95 & 1) != 0) {
          *v93_.v97 = 0;
          v93_.v96 = 0;
        }
        else {
          LOWORD(v93_.v95) = 0;
        }
        GameRoutine_6e3b50_alt1((__int64)&v92, v93_.v93);
        v93_.v93 = nullptr;
        v93_.v94 = 0;
        v92 = &v93_.v93;
        if ((v93_.v95 & 1) != 0) {
          v73 = v93_.v97;
          if (v93_.v97 != nullptr) {
            v84 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v84 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v84,
                (__int64)v93_.v97);
            v73 = v93_.v93;
          }
        }
        else {
          v73 = nullptr;
        }
        GameRoutine_6e3b50_alt1((__int64)&v92, v73);
        v69 += 4;
      } while (v69 != v70);
    }
  }
}

#pragma GCC visibility pop
