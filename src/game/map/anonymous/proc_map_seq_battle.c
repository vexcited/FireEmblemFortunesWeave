#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BattleInfo_796b00(_QWORD);
__int64 BattleInfo_796d90(_QWORD);
__int64 BattleSide_Destructor(_QWORD);
__int64 GameManager_a30ab0(_QWORD, _QWORD);
__int64 GameRoutine_120f710(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(_QWORD);
__int64 GameRoutine_796f20(_QWORD);
__int64 GameRoutine_7971a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7badf0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_80e6f0(_QWORD, _QWORD);
__int64 GameRoutine_80e800(_QWORD);
__int64 GameRoutine_80ef70(void);
__int64 GameRoutine_810fc0(void);
__int64 GameRoutine_a28e10(_QWORD, _QWORD);
__int64 GameRoutine_a339e0(_QWORD, _QWORD, _QWORD);
__int64 MapInfo_825790(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD, _QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1f99ba8[])();
extern __int64 (*GameData_1f99bf8[])();
extern __int64 (*GameData_1f99c98[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_UnitEquipScope_vtable[])();
extern __int64 (*game_map_BattleInfo_vtable[])();
extern __int64 (*game_map_BattleSides_vtable[])();
extern __int64 (*game_map_anonymous_ProcMapSeqBattle_vtable[])();
extern __int64 GameData_21ca060;
extern __int64 GameData_21ca300;
extern __int64 GameData_21cd108;
extern __int64 GameData_21cd128;
extern __int64 GameData_21cd148;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_empty_item;
extern __int64 game_map_ProcMapSeqBattleView_instance_;
extern __int64 game_sound_g_game_sound;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212da50[3];
extern __int64* game_sound_g_game_sound_ptr[5];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60f930(void);
__int64 ProcMapSeqBattle_Destructor(__int64 a1);
__int64 ProcMapSeqBattle_Unknown20(__int64 a1);
__int64 ProcMapSeqBattle_Unknown21(__int64 result);
__int64 ProcMapSeqBattle_Unknown22(__int64 a1);
__int64 ProcMapSeqBattle_Unknown23(__int64 a1);
__int64 ProcMapSeqBattle_Unknown24(__int64 a1);
__int64 ProcMapSeqBattle_Unknown25(__int64 a1, __int64 a2);

__int64 ProcMapSeqBattle_Destructor(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;

  *(_QWORD*)a1 = game_map_anonymous_ProcMapSeqBattle_vtable;
  *(_QWORD*)(a1 + 152) = GameData_1f99ba8;
  *(_QWORD*)(a1 + 160) = GameData_1f99bf8;
  v2 = *(_QWORD*)(GameData_21ca300 + 160);
  v3 = *(_DWORD*)(v2 + 528) - 1;
  *(_DWORD*)(v2 + 528) = v3;
  if (v3 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v2 + 520) + 8LL))(v2 + 520);
  }
  if (GameData_21cd128 != 0) {
    MapInfo_825790();
  }
  if (GameData_21cd148 != 0) {
    *(_WORD*)(GameData_21cd148 + 1576) = 0;
  }
  v4 = *(_QWORD*)(a1 + 23088);
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v4 != 0) {
    v6 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 23096) = v4;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(v6 + v7, v4);
  }
  *(_QWORD*)(a1 + 23048) = game_UnitEquipScope_vtable;
  v8 = *(_QWORD*)(a1 + 23056);
  if (v8 != 0 && *(_QWORD*)(v8 + 2208) == a1 + 23048) {
    *(_QWORD*)(v8 + 2208) = *(_QWORD*)(a1 + 23072);
    v9 = *(_QWORD*)(a1 + 23056);
    v10 = *(_DWORD*)(v9 + 416);
    if ((v10 & 0x10000000) == 0) {
      v11 = *(_QWORD*)(a1 + 23056);
      *(_DWORD*)(v9 + 416) = v10 | 0x10000000;
      GameRoutine_6c51e0(v11);
      GameRoutine_6c6da0(v9);
      GameRoutine_6c6ec0(v9);
      *(_DWORD*)(v9 + 416) &= ~0x10000000u;
    }
    *(_QWORD*)(a1 + 23056) = 0;
  }
  v12 = *(_QWORD*)(a1 + 23008);
  if (v12 != 0) {
    v13 = *v5;
    *(_QWORD*)(a1 + 23016) = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(v13 + v14, v12);
  }
  v15 = *(_QWORD*)(a1 + 22952);
  if (v15 != 0) {
    v16 = *v5;
    *(_QWORD*)(a1 + 22960) = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(v16 + v17, v15);
  }
  v18 = *(_QWORD*)(a1 + 22928);
  if (v18 != 0) {
    v19 = *v5;
    *(_QWORD*)(a1 + 22936) = v18;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(v19 + v20, v18);
  }
  v21 = *(_QWORD*)(a1 + 22896);
  if (v21 != 0) {
    v22 = *v5;
    *(_QWORD*)(a1 + 22904) = v21;
    v23 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(v22 + v23, v21);
  }
  *(_QWORD*)(a1 + 11488) = game_map_BattleInfo_vtable;
  v24 = *(_QWORD*)(a1 + 22792);
  v25 = GameData_212da50[0] + 2;
  *(_QWORD*)(a1 + 22784) = GameData_212da50[0] + 2;
  if (v24 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 8LL))(v24);
    *(_QWORD*)(a1 + 22792) = 0;
  }
  *(_QWORD*)(a1 + 11496) = game_map_BattleSides_vtable;
  BattleSide_Destructor(a1 + 13784);
  BattleSide_Destructor(a1 + 13024);
  BattleSide_Destructor(a1 + 12264);
  BattleSide_Destructor(a1 + 11504);
  v26 = *(_QWORD*)(a1 + 11480);
  *(_QWORD*)(a1 + 176) = game_map_BattleInfo_vtable;
  *(_QWORD*)(a1 + 11472) = v25;
  if (v26 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 8LL))(v26);
    *(_QWORD*)(a1 + 11480) = 0;
  }
  *(_QWORD*)(a1 + 184) = game_map_BattleSides_vtable;
  BattleSide_Destructor(a1 + 2472);
  BattleSide_Destructor(a1 + 1712);
  BattleSide_Destructor(a1 + 952);
  BattleSide_Destructor(a1 + 192);
  *(_QWORD*)(a1 + 160) = GameData_1f99c98;
  if (game_map_ProcMapSeqBattleView_instance_ == a1) {
    game_map_ProcMapSeqBattleView_instance_ = 0;
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcMapSeqBattle_Unknown20(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  char v8;
  unsigned __int64 v9;
  __int64 v10;
  char* v11;
  char* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  _BYTE* v19;
  unsigned __int64 v20;
  unsigned __int64 v22;
  unsigned __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  char* v39;
  __int64 v40;
  char* v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  char* v49;
  char* v50;
  char* v51;

  if ((*(_BYTE*)(a1 + 11453) & 0x20) != 0) {
    goto LABEL_88;
  }
  v2 = *(unsigned __int8*)(a1 + 11448);
  if (v2 != 3) {
    v3 = *(_QWORD*)(a1 + 216);
    v4 = *(_QWORD*)(a1 + 976);
    if (v3 != 0) {
      v5 = *(_QWORD*)(v3 + 440);
      if (v5 != 0) {
        v6 = *(_BYTE*)(v5 + 16);
        if (v4 == 0) {
          goto LABEL_12;
        }
      LABEL_9:
        v7 = *(_QWORD*)(v4 + 440);
        if (v7 != 0) {
          v8 = *(_BYTE*)(v7 + 16);
        }
        else {
          v8 = 9;
        }
      LABEL_14:
        if (((1 << v6) & 0xF1) != 0 || ((1 << v8) & 0xF1) != 0) {
          GameRoutine_810fc0();
          v2 = *(unsigned __int8*)(a1 + 11448);
        }
        v50 = nullptr;
        v51 = nullptr;
        v49 = nullptr;
        if (v2 == 2) {
          goto LABEL_88;
        }
        goto LABEL_18;
      }
      v6 = 9;
      if (v4 != 0) {
        goto LABEL_9;
      }
    }
    else {
      v6 = 10;
      if (v4 != 0) {
        goto LABEL_9;
      }
    }
  LABEL_12:
    v8 = 10;
    goto LABEL_14;
  }
  v50 = nullptr;
  v51 = nullptr;
  v49 = nullptr;

LABEL_18:
  GameRoutine_7badf0(a1, &v49, 0);
  v9 = GameRoutine_7badf0(a1, &v49, 1);
  v11 = v49;
  v12 = v50;
  if (v50 - v49 == 16) {
    if (v49 >= v51) {
      v13 = (v51 - v49) >> 2;
      if (v13 <= 1) {
        v13 = 1;
      }
      if ((unsigned __int64)(v51 - v49) >= 0x7FFFFFFFFFFFFFF8LL) {
        v14 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v14 = v13;
      }
      if (v14 >> 61 != 0) {
        goto LABEL_93;
      }
      v15 = fw_memory_g_heap_manager_ptr;
      v16 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
      v49 = v16;
      *(_QWORD*)v16 = "AMB_Gaya_Battle_Both";
      v12 = v16 + 8;
      v51 = &v16[8 * v14];
      if (v11 != nullptr) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v17, v11);
      }
      v11 = v16;
    }
    else {
      *(_QWORD*)v49 = "AMB_Gaya_Battle_Both";
      v12 = v11 + 8;
    }
    v50 = v12;
  }
  if (game_GameModeData_instance_ != 0) {
    v18 = *(_QWORD*)(game_GameModeData_instance_ + 16);
    if (v18 != 0) {
      v19 = *(_BYTE**)(v18 + 144);
      if (v19 != nullptr && *v19 != 0) {
        v9 = game_HashString(v19, v10);
        if (v9 != 0) {
          v20 = *(_QWORD*)(GameData_21ca060 + 96);
          if (v20 != 0 && *(_QWORD*)(GameData_21ca060 + 112) != 0) {
            v22 = v20 - 1;
            if ((v20 & (v20 - 1)) != 0) {
              v23 = v9;
              if (v9 >= v20) {
                v23 = v9 % v20;
              }
            }
            else {
              v23 = v22 & v9;
            }
            v24 = *(_QWORD**)(*(_QWORD*)(GameData_21ca060 + 88) + 8 * v23);
            if (v24 != nullptr) {
              v25 = (_QWORD*)*v24;
              if (v25 != nullptr) {
                if ((v20 & v22) == 0) {
                  while (1) {
                    v27 = v25[1];
                    if (v27 == v9) {
                      if (v25[2] == v9) {
                        goto LABEL_62;
                      }
                    }
                    else if ((v27 & v22) != v23) {
                      goto LABEL_81;
                    }
                    v25 = (_QWORD*)*v25;
                    if (v25 == nullptr) {
                      goto LABEL_81;
                    }
                  }
                }
                do {
                  v26 = v25[1];
                  if (v26 == v9) {
                    if (v25[2] == v9) {
                    LABEL_62:
                      v28 = v25[3];
                      if (v28 != 0 && *(_BYTE*)(v28 + 49) != 0) {
                        v29 = *(_QWORD*)(v28 + 104);
                        if (v12 < v51) {
                          *(_QWORD*)v12 = v29;
                          v12 += 8;
                          v30 = (__int64)v49;
                          goto LABEL_80;
                        }
                        v31 = (char*)(v12 - v11);
                        v32 = (v12 - v11) >> 3;
                        v33 = v32 + 1;
                        if ((unsigned __int64)(v32 + 1) >> 61 != 0) {
                          GameRoutine_60f930();
                        }
                        v34 = v51 - v11;
                        v35 = fw_memory_g_heap_manager_ptr;
                        if ((v51 - v11) >> 2 > v33) {
                          v33 = v34 >> 2;
                        }
                        if ((unsigned __int64)v34 >= 0x7FFFFFFFFFFFFFF8LL) {
                          v36 = 0x1FFFFFFFFFFFFFFFLL;
                        }
                        else {
                          v36 = v33;
                        }
                        if (v36 != 0) {
                          if (v36 >> 61 == 0) {
                            v37 = fw_memory_HeapManager_Allocate(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v36,
                                16, 0);
                            goto LABEL_76;
                          }
                        LABEL_93:
                          GameRoutine_60a210(v9);
                        }
                        v37 = 0;
                      LABEL_76:
                        v38 = v37 + 8 * v36;
                        v39 = (char*)(v12 - v11);
                        v30 = (__int64)&v31[v37 + -8 * v32];
                        *(_QWORD*)&v31[v37] = v29;
                        v12 = &v31[v37 + 8];
                        memcpy(v30, v11, v39);
                        v49 = (char*)v30;
                        v51 = (char*)v38;
                        if (v11 != nullptr) {
                          v40 = 128;
                          if (*(_QWORD*)(*(_QWORD*)v35 + 200LL) == 0) {
                            v40 = 56;
                          }
                          nn_mem_StandardAllocator_Free(*(_QWORD*)v35 + v40,
                                                        v11);
                        }
                      LABEL_80:
                        v50 = v12;
                        v11 = (char*)v30;
                      }
                      break;
                    }
                  }
                  else {
                    if (v26 >= v20) {
                      v26 %= v20;
                    }
                    if (v26 != v23) {
                      break;
                    }
                  }
                  v25 = (_QWORD*)*v25;
                } while (v25 != nullptr);
              }
            }
          }
        }
      }
    }
  }

LABEL_81:
  if (v11 != v12) {
    v41 = v11;
    v42 = game_sound_g_game_sound_ptr[0];
    do {
      v43 = *(_QWORD*)v41;
      v41 += 8;
      GameManager_a30ab0(*v42, v43);
    } while (v41 != v12);
  }
  if (v11 != nullptr) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v44,
                                  v11);
  }

LABEL_88:
  v45 = (__int64*)(a1 + 236);
  if (*(_WORD*)(a1 + 236) == 0) {
    v46 = *(unsigned int*)(a1 + 232);
    if ((v46 & 0x80000000) != 0) {
      v45 = &game_g_empty_item;
    }
    else {
      v45 = (__int64*)(*(_QWORD*)(a1 + 216) + 8 * v46 + 828);
    }
  }
  v47 = GameRoutine_80e6f0(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                      8LL * *(unsigned __int16*)v45),
                           *(_QWORD*)(a1 + 248));
  return GameRoutine_80e800(v47);
}

__int64 ProcMapSeqBattle_Unknown21(__int64 result)
{
  if ((*(_BYTE*)(result + 11453) & 0x20) == 0) {
    result = game_sound_g_game_sound;
    if (game_sound_g_game_sound != 0) {
      return GameRoutine_a28e10(game_sound_g_game_sound, 0);
    }
  }
  return result;
}

__int64 ProcMapSeqBattle_Unknown22(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v11;

  if ((*(_BYTE*)(a1 + 11453) & 0x20) == 0) {
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 200) + 11276LL) & 1) != 0 ||
        (*(_BYTE*)(a1 + 316) & 1) == 0) {
      if ((*(_BYTE*)(*(_QWORD*)(a1 + 960) + 11276LL) & 1) != 0 ||
          (*(_BYTE*)(a1 + 1076) & 1) == 0) {
        return GameRoutine_80ef70();
      }
      v1 = 776;
    }
    else {
      v1 = 16;
    }
    v2 = *(_QWORD*)(a1 + 176 + v1 + 24);
    v3 = game_sound_g_game_sound_ptr[0];
    if (v2 != 0 && *game_sound_g_game_sound_ptr[0] != 0) {
      v5 = *(_QWORD*)(v2 + 440);
      if (v5 != 0) {
        v6 = *(unsigned __int8*)(v5 + 16);
        v7 = *(_QWORD*)(v2 + 392);
        if (v7 != 0) {
        LABEL_14:
          v8 = *(_QWORD*)(v7 + 8);
          goto LABEL_17;
        }
      }
      else {
        v6 = 9;
        v7 = *(_QWORD*)(v2 + 392);
        if (v7 != 0) {
          goto LABEL_14;
        }
      }
      v8 = 0;
    LABEL_17:
      v11 = v2;
      v9 = GameRoutine_120f710(&v11) & 0x40;
      v11 = v2;
      if ((GameRoutine_120f710(&v11) & 0x100 | v9) == 0) {
        GameRoutine_a339e0(*v3, v6, v8);
      }
    }
  }
  return GameRoutine_80ef70();
}

__int64 ProcMapSeqBattle_Unknown23(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if ((*(_BYTE*)(a1 + 11453) & 0x20) != 0) {
    return 0;
  }
  if ((BattleInfo_796d90(a1 + 176) & 1) == 0) {
    return 0;
  }
  v1 = GameData_21cd108;
  v2 = *(_QWORD*)(GameData_21cd108 + 12680);
  if (*(_QWORD*)(GameData_21cd108 + 12688) != v2) {
    *(_QWORD*)(GameData_21cd108 + 12688) = v2;
  }
  v3 = *(_QWORD*)(v1 + 12672);
  if ((v3 & 0x100000) != 0) {
    *(_QWORD*)(v1 + 12672) = v3 & 0xFFFFFFFFFFEFFFFFLL;
  }
  return 1;
}

__int64 ProcMapSeqBattle_Unknown24(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if ((*(_BYTE*)(a1 + 11453) & 0x20) != 0) {
    return 0;
  }
  if ((GameRoutine_796f20(a1 + 176) & 1) == 0) {
    return 0;
  }
  v1 = GameData_21cd108;
  v2 = *(_QWORD*)(GameData_21cd108 + 12680);
  if (*(_QWORD*)(GameData_21cd108 + 12688) != v2) {
    *(_QWORD*)(GameData_21cd108 + 12688) = v2;
  }
  v3 = *(_QWORD*)(v1 + 12672);
  if ((v3 & 0x100000) != 0) {
    *(_QWORD*)(v1 + 12672) = v3 & 0xFFFFFFFFFFEFFFFFLL;
  }
  return 1;
}

__int64 ProcMapSeqBattle_Unknown25(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if ((*(_BYTE*)(a1 + 11453) & 0x20) != 0) {
    return 0;
  }
  v2 = a1 + 20480;
  BattleInfo_796b00(a1 + 176);
  if ((GameRoutine_7971a0(a1 + 176, a2, *(_BYTE*)(v2 + 2552) == 0,
                          *(unsigned __int8*)(v2 + 2505)) &
       1) == 0) {
    return 0;
  }
  v5 = GameData_21cd108;
  v6 = *(_QWORD*)(GameData_21cd108 + 12680);
  if (*(_QWORD*)(GameData_21cd108 + 12688) != v6) {
    *(_QWORD*)(GameData_21cd108 + 12688) = v6;
  }
  v7 = *(_QWORD*)(v5 + 12672);
  if ((v7 & 0x100000) != 0) {
    *(_QWORD*)(v5 + 12672) = v7 & 0xFFFFFFFFFFEFFFFFLL;
  }
  return 1;
}

#pragma GCC visibility pop
