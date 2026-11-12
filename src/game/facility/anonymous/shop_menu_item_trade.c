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
__int64 ShopMenuItem_Trade_1867b40(__int64 a1, __int64 a2);
__int64 GameRoutine_9b11a0_alt1(_QWORD*, unsigned __int64*,
                                int) __asm__("GameRoutine_9b11a0");
__int64 game_8a26a0_alt1(__int64**) __asm__("game_8a26a0");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_play_ff2d0_alt1(__int64, __int64, __int64, unsigned int,
                            unsigned int, int, float,
                            float) __asm__("snd_play_ff2d0");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");

__int64 ShopMenuItem_Trade_Unknown82(__int64 a1)
{
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
  snd_play_ff2d0_alt1((__int64)"SE_EVT_Goods_Swap",
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

__int64 ShopMenuItem_Trade_1867b40(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v4;
  unsigned __int64* v5;
  int v6;
  __int64 v7;
  unsigned __int64* v8;
  int v9;
  __int64 v10;
  _BYTE* v11;
  __int64 v12;
  __int64 result;
  int v14;
  int v15;
  __int64 v16;
  _BYTE* v17;
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
  _BYTE* v36;
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
  _BYTE* v48;
  __int64 v49;
  int v50;
  int v51;
  __int64 v52;
  _BYTE* v53;
  __int64 v54;
  __int64** v55;
  __int64* v56;
  __int64* v57;
  _QWORD* v58;
  __int64 v59;
  _QWORD* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 (*v65)(_QWORD);
  __int64 v66;
  _QWORD* v67;
  _DWORD* v68;
  _DWORD* v69;
  __int64* v70;
  __int64* v71;
  _BYTE* v72;
  __int64 v73;
  int v74;
  unsigned int v75;
  unsigned int v76;
  int v77;
  unsigned __int64 v78;
  int v79;
  int v80;
  __int64 v81;
  int v82;
  __int64 v83;
  int v86;
  unsigned __int64 v87;
  __int64 v88;
  __int64 v89;
  int v90;
  _QWORD* v91;
  _BYTE* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  _BYTE* v96;
  int v97;
  int v98;
  int v99;

  v2 = a2;
  v4 = GameData_212ceb0;
  if (*(_QWORD*)(a1 + 104) != 0) {
    v5 =
        (unsigned __int64*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
    v6 = *(_DWORD*)(a1 + 84);
    v86 = 8;
    v87 = *v5;
    if (*(_BYTE*)v4 != 0) {
      v7 = *v4;
    }
    else {
      v7 = 0;
    }
    v88 = v7;
    WORD1(v89) = 0;
    HIDWORD(v89) = 0;
    v93 = 0;
    v94 = 0;
    v95 = 0;
    v96 = nullptr;
    v91 = &v92;
    v92 = nullptr;
    GameRoutine_930b90(&v89, GameData_212c8b0[0]);
    v97 = 0;
    v98 = v6;
    v99 = -1;
    ObeliskDestinyMenuItem_1a06060(v2 + 1520, &v86, 0);
    v90 = 0;
    v89 = 0;
    if ((v94 & 1) != 0) {
      *v96 = 0;
      v95 = 0;
    }
    else {
      LOWORD(v94) = 0;
    }
    GameRoutine_6e3b50(&v91, v92);
    v92 = nullptr;
    v93 = 0;
    v91 = &v92;
    if ((v94 & 1) != 0) {
      v11 = v96;
      if (v96 != nullptr) {
        v12 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v12);
        v11 = v92;
      }
    }
    else {
      v11 = nullptr;
    }
    GameRoutine_6e3b50(&v91, v11);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 608LL))(a1);
    if ((int)result >= 1) {
      v14 = *(_DWORD*)(a1 + 84);
      v86 = 0;
      v15 = v14 * result;
      v87 = *game_g_empty_item_ptr;
      if (*(_BYTE*)GameData_212ceb0 != 0) {
        v16 = *GameData_212ceb0;
      }
      else {
        v16 = 0;
      }
      v88 = v16;
      WORD1(v89) = 0;
      HIDWORD(v89) = 0;
      v93 = 0;
      v94 = 0;
      v95 = 0;
      v96 = nullptr;
      v91 = &v92;
      v92 = nullptr;
      GameRoutine_930b90(&v89, GameData_212c8b0[0]);
      v97 = 0;
      v98 = v15;
      v99 = 0;
      ObeliskDestinyMenuItem_1a06060(v2 + 1544, &v86, 0);
      v90 = 0;
      v89 = 0;
      if ((v94 & 1) != 0) {
        *v96 = 0;
        v95 = 0;
      }
      else {
        LOWORD(v94) = 0;
      }
      GameRoutine_6e3b50(&v91, v92);
      v92 = nullptr;
      v93 = 0;
      v91 = &v92;
      if ((v94 & 1) != 0) {
        v17 = v96;
        if (v96 != nullptr) {
          v18 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v18 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v18);
          v17 = v92;
        }
      }
      else {
        v17 = nullptr;
      }
      result = GameRoutine_6e3b50(&v91, v17);
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
                v28 = game_GameVariableTable_Find(
                    *(_QWORD*)(game_GameModeData_instance_ + 48), v25);
                if (v28 != 0) {
                  v29 = *(__int64 (**)(_QWORD))(v28 + 72);
                  v30 = *(_QWORD*)(v28 + 80);
                  v31 = (_QWORD*)(v28 + (v30 >> 1));
                  if ((v30 & 1) != 0) {
                    v29 = *(__int64 (**)(_QWORD))((char*)v29 + *v31);
                  }
                  result = v29(v31);
                }
                else {
                  result = 1;
                }
              }
              if (*(_BYTE*)(v25 + 16) != ((v27 == 0) | result & 1)) {
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
            nn_os_LockMutex(&game_g_random_mutex);
            v38 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v35);
            v39 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v35 + 4);
            v40 = *(_DWORD*)v35 ^ (*(_DWORD*)v35 << 11);
            *(_DWORD*)v35 = *((_DWORD*)v35 + 1);
            *((_DWORD*)v35 + 1) = v38;
            v41 = (v40 >> 8) ^ (v39 >> 19) ^ v40 ^ v39;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v35) = v39;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v35 + 4) = v41;
            nn_os_UnlockMutex(&game_g_random_mutex);
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
        v87 = v42 | v37;
        v86 = 8;
        v44 = *(_DWORD*)(a1 + 84);
        if (*(_BYTE*)GameData_212ceb0 != 0) {
          v45 = *GameData_212ceb0;
        }
        else {
          v45 = 0;
        }
        v88 = v45;
        v46 = v44 * v43;
        WORD1(v89) = 0;
        HIDWORD(v89) = 0;
        v92 = nullptr;
        v93 = 0;
        v91 = &v92;
        v94 = 0;
        v95 = 0;
        v96 = nullptr;
        GameRoutine_930b90(&v89, v34);
        v97 = 0;
        v98 = v46;
        v99 = -1;
        ObeliskDestinyMenuItem_1a06060(v2 + 1544, &v86, 0);
        v90 = 0;
        v89 = 0;
        if ((v94 & 1) != 0) {
          *v96 = 0;
          v95 = 0;
        }
        else {
          LOWORD(v94) = 0;
        }
        GameRoutine_6e3b50(&v91, v92);
        v92 = nullptr;
        v93 = 0;
        v91 = &v92;
        if ((v94 & 1) != 0) {
          v36 = v96;
          if (v96 != nullptr) {
            v47 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v47 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v47);
            v36 = v92;
          }
        }
        else {
          v36 = nullptr;
        }
        result = GameRoutine_6e3b50(&v91, v36);
        v32 += 4;
      } while (v32 != v33);
    }
  }
  else {
    v8 =
        (unsigned __int64*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
    v9 = *(_DWORD*)(a1 + 84);
    v86 = 8;
    v87 = *v8;
    if (*(_BYTE*)v4 != 0) {
      v10 = *v4;
    }
    else {
      v10 = 0;
    }
    v88 = v10;
    WORD1(v89) = 0;
    HIDWORD(v89) = 0;
    v93 = 0;
    v94 = 0;
    v95 = 0;
    v96 = nullptr;
    v91 = &v92;
    v92 = nullptr;
    GameRoutine_930b90(&v89, GameData_212c8b0[0]);
    v97 = 0;
    v98 = v9;
    v99 = -1;
    ObeliskDestinyMenuItem_1a06060(v2 + 1520, &v86, 0);
    v90 = 0;
    v89 = 0;
    if ((v94 & 1) != 0) {
      *v96 = 0;
      v95 = 0;
    }
    else {
      LOWORD(v94) = 0;
    }
    GameRoutine_6e3b50(&v91, v92);
    v92 = nullptr;
    v93 = 0;
    v91 = &v92;
    if ((v94 & 1) != 0) {
      v48 = v96;
      if (v96 != nullptr) {
        v49 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v49 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v49);
        v48 = v92;
      }
    }
    else {
      v48 = nullptr;
    }
    GameRoutine_6e3b50(&v91, v48);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 608LL))(a1);
    if ((int)result >= 1) {
      v50 = *(_DWORD*)(a1 + 84);
      v86 = 0;
      v51 = v50 * result;
      v87 = *game_g_empty_item_ptr;
      if (*(_BYTE*)GameData_212ceb0 != 0) {
        v52 = *GameData_212ceb0;
      }
      else {
        v52 = 0;
      }
      v88 = v52;
      WORD1(v89) = 0;
      HIDWORD(v89) = 0;
      v93 = 0;
      v94 = 0;
      v95 = 0;
      v96 = nullptr;
      v91 = &v92;
      v92 = nullptr;
      GameRoutine_930b90(&v89, GameData_212c8b0[0]);
      v97 = 0;
      v98 = v51;
      v99 = 0;
      ObeliskDestinyMenuItem_1a06060(v2 + 1544, &v86, 0);
      v90 = 0;
      v89 = 0;
      if ((v94 & 1) != 0) {
        *v96 = 0;
        v95 = 0;
      }
      else {
        LOWORD(v94) = 0;
      }
      GameRoutine_6e3b50(&v91, v92);
      v92 = nullptr;
      v93 = 0;
      v91 = &v92;
      if ((v94 & 1) != 0) {
        v53 = v96;
        if (v96 != nullptr) {
          v54 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v54 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v54);
          v53 = v92;
        }
      }
      else {
        v53 = nullptr;
      }
      result = GameRoutine_6e3b50(&v91, v53);
    }
    v55 = *(__int64***)(a1 + 120);
    v57 = *v55;
    v56 = v55[1];
    if (*v55 == v56) {
      v58 = &GameData_1b4d210;
    }
    else {
      v58 = &GameData_1b4d210;
      while (2) {
        v59 = *v57;
        v60 = *(_QWORD**)(*v57 + 24);
        v61 = v60[6];
        v62 = v60[7];
        if (v62 == v61) {
        LABEL_108:
          v58 = v60 + 15;
        }
        else {
          while (1) {
            if (*(_QWORD*)v61 != 0) {
              v63 = game_GameModeData_instance_;
              if (game_GameModeData_instance_ != 0) {
                v64 = game_GameVariableTable_Find(
                    *(_QWORD*)(game_GameModeData_instance_ + 48), v61);
                if (v64 != 0) {
                  v65 = *(__int64 (**)(_QWORD))(v64 + 72);
                  v66 = *(_QWORD*)(v64 + 80);
                  v67 = (_QWORD*)(v64 + (v66 >> 1));
                  if ((v66 & 1) != 0) {
                    v65 = *(__int64 (**)(_QWORD))((char*)v65 + *v67);
                  }
                  result = v65(v67);
                }
                else {
                  result = 1;
                }
              }
              if (*(_BYTE*)(v61 + 16) != ((v63 == 0) | result & 1)) {
                break;
              }
            }
            v61 += 24;
            if (v61 == v62) {
              v60 = *(_QWORD**)(v59 + 24);
              goto LABEL_108;
            }
          }
          if (++v57 != v56) {
            continue;
          }
        }
        break;
      }
    }
    v68 = (_DWORD*)*v58;
    v69 = (_DWORD*)v58[1];
    if ((_DWORD*)*v58 != v69) {
      v70 = GameData_212c8b0[0];
      v71 = game_map_MapRandom_instance__ptr[0];
      do {
        if (*(_QWORD*)v68 != 0) {
          v73 = *(unsigned __int16*)(*(_QWORD*)v68 + 16LL);
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                   8 * v73) +
                        73LL) == 17) {
            nn_os_LockMutex(&game_g_random_mutex);
            v74 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v71);
            v75 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v71 + 4);
            v76 = *(_DWORD*)v71 ^ (*(_DWORD*)v71 << 11);
            *(_DWORD*)v71 = *((_DWORD*)v71 + 1);
            *((_DWORD*)v71 + 1) = v74;
            v77 = (v76 >> 8) ^ (v75 >> 19) ^ v76 ^ v75;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v71) = v75;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v71 + 4) = v77;
            nn_os_UnlockMutex(&game_g_random_mutex);
            v2 = a2;
            v78 =
                (unsigned __int64)((16 * ((_WORD)v77 -
                                          1000 *
                                              (unsigned __int16)((v77 &
                                                                  0x7FFFFFFFu) /
                                                                 0x3E8)) +
                                    16) &
                                       0x3FF0 |
                                   1u)
                << 32;
          }
          else {
            v78 = 0x100000000LL;
          }
        }
        else {
          v78 = 0;
          v73 = 0;
        }
        v79 = v68[2];
        v87 = v78 | v73;
        v86 = 8;
        v80 = *(_DWORD*)(a1 + 84);
        if (*(_BYTE*)GameData_212ceb0 != 0) {
          v81 = *GameData_212ceb0;
        }
        else {
          v81 = 0;
        }
        v88 = v81;
        v82 = v80 * v79;
        WORD1(v89) = 0;
        HIDWORD(v89) = 0;
        v92 = nullptr;
        v93 = 0;
        v91 = &v92;
        v94 = 0;
        v95 = 0;
        v96 = nullptr;
        GameRoutine_930b90(&v89, v70);
        v97 = 0;
        v98 = v82;
        v99 = -1;
        ObeliskDestinyMenuItem_1a06060(v2 + 1544, &v86, 0);
        v90 = 0;
        v89 = 0;
        if ((v94 & 1) != 0) {
          *v96 = 0;
          v95 = 0;
        }
        else {
          LOWORD(v94) = 0;
        }
        GameRoutine_6e3b50(&v91, v92);
        v92 = nullptr;
        v93 = 0;
        v91 = &v92;
        if ((v94 & 1) != 0) {
          v72 = v96;
          if (v96 != nullptr) {
            v83 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v83 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v83);
            v72 = v92;
          }
        }
        else {
          v72 = nullptr;
        }
        result = GameRoutine_6e3b50(&v91, v72);
        v68 += 4;
      } while (v68 != v69);
    }
  }
  return result;
}

#pragma GCC visibility pop
