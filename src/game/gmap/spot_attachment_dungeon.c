#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_151b000();
__int64 SpotMgr_132ffa0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_gmap_SpotAttachmentDispatch_vtable)();
extern __int64 GameData_212cf80[5];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c780;
extern char GameData_1a9f09e;
__int64 SpotAttachmentDungeon_Unknown30(__int64 a1);
__int64 SpotAttachmentDungeon_DeletingDestructor(_QWORD* a1);
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1a8dc68;
extern __int64 GameData_21c9ed0;
__int64 SpotAttachmentDungeon_151b000();
__int64 Dir_70e760(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 strchr(_QWORD, _QWORD);
extern _UNKNOWN GameData_1a86d61;
extern _UNKNOWN GameData_1a8ad4c;
extern _UNKNOWN GameData_1aa5d8e;
extern _UNKNOWN GameData_1ab1630;
extern _UNKNOWN GameData_1ac8613;
extern _UNKNOWN GameData_1ae73e9;
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212cae0[107];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21ca000;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
void __attribute__((noreturn)) GameRoutine_151cd70(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e5c60(_QWORD);
unsigned __int64 SpotAttachmentDungeon_Unknown17(__int64 a1, int a2);

__int64 SpotAttachmentDungeon_151b000()
{
  unsigned __int64 v0;
  unsigned __int64 v1;
  unsigned __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;

  v0 = game_HashString(&GameData_1a8dc68);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21c9ed0 + 96);
    if (v1 != 0 && *(_QWORD*)(GameData_21c9ed0 + 112) != 0) {
      v3 = v1 - 1;
      if ((v1 & (v1 - 1)) != 0) {
        v4 = v0;
        if (v0 >= v1) {
          v4 = v0 % v1;
        }
      }
      else {
        v4 = v3 & v0;
      }
      v5 = *(_QWORD**)(*(_QWORD*)(GameData_21c9ed0 + 88) + 8 * v4);
      if (v5 != nullptr) {
        v6 = (_QWORD*)*v5;
        if (v6 != nullptr) {
          if ((v1 & v3) == 0) {
            while (1) {
              v9 = v6[1];
              if (v9 == v0) {
                if (v6[2] == v0) {
                  return v6[3];
                }
              }
              else if ((v9 & v3) != v4) {
                return 0;
              }
              v6 = (_QWORD*)*v6;
              v8 = 0;
              if (v6 == nullptr) {
                return v8;
              }
            }
          }
          do {
            v7 = v6[1];
            if (v7 == v0) {
              if (v6[2] == v0) {
                return v6[3];
              }
            }
            else {
              if (v7 >= v1) {
                v7 %= v1;
              }
              if (v7 != v4) {
                return 0;
              }
            }
            v6 = (_QWORD*)*v6;
          } while (v6 != nullptr);
        }
      }
    }
  }
  return 0;
}

unsigned __int64 SpotAttachmentDungeon_Unknown17(__int64 a1, int a2)
{
  __int16* v3;
  __int64 v4;
  __int64 v6;
  __int16* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  unsigned __int64 result;
  __int64* v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  void* v19;
  __int64 v20;
  int v21;
  __int64 v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  _QWORD* v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  _QWORD* v44;
  __int64 v45;
  __int64* v46;
  char* v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  char* v54;
  __int64 v55;
  __int64 v56;
  signed int v57;
  int v58;
  int v59;
  signed int v60;
  int v61;
  __int64 v62;
  void* v63;

  v3 = (__int16*)(a1 + 20);
  v4 = *(__int16*)(a1 + 20);
  v6 = *(__int16*)(a1 + 22);
  if (game_gmap_GmapClock_instance_ != 0) {
    v7 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v7 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if ((v6 << 24) + (v4 << 32) + ((__int64)v3[2] << 18) +
          ((__int64)v3[3] << 12) + ((__int64)v3[4] << 6) + v3[5] >=
      (unsigned __int64)(((__int64)v7[1] << 24) + ((__int64)*v7 << 32) +
                         ((__int64)v7[2] << 18) + ((__int64)v7[3] << 12) +
                         ((__int64)v7[4] << 6) + v7[5])) {
    a2 += ~(unsigned int)Dir_70e760();
  }
  v63 = &GameData_1a8ad4c;
  v8 = &GameData_21ca000;
  v62 = game_HashString(&GameData_1a8ad4c);
  if (game_GameModeData_instance_ != 0 &&
      (v9 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), &v62)) != 0) {
    v60 = *(_DWORD*)(v9 + 32);
  }
  else {
    v60 = 0;
  }
  v63 = &GameData_1ae73e9;
  v62 = game_HashString(&GameData_1ae73e9);
  if (game_GameModeData_instance_ != 0 &&
      (v10 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), &v62)) != 0) {
    v11 = *(_DWORD*)(v10 + 32);
  }
  else {
    v11 = 0;
  }
  v63 = &GameData_1ac8613;
  result = game_HashString(&GameData_1ac8613);
  v62 = result;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v62);
  }
  v58 = a2;
  if (a2 >= 1) {
    v59 = 0;
    v57 = v11 + v60;
    v13 = game_map_MapRandom_instance__ptr[0];
    while (1) {
      nn_os_LockMutex(&game_g_random_mutex);
      v14 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 8);
      v15 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 12);
      v16 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13) ^
            (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13) << 11);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13) =
          *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 4);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 4) = v14;
      v17 = (v16 >> 8) ^ (v15 >> 19) ^ v16 ^ v15;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 8) = v15;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 12) = v17;
      v18 = v17 & 0x7FFFFFFF;
      nn_os_UnlockMutex(&game_g_random_mutex);
      if ((int)(v18 % 0x64) >= v60) {
        v19 = (int)(v18 % 0x64) >= v57 ? &GameData_1aa5d8e : &GameData_1ab1630;
      }
      else {
        v19 = &GameData_1a86d61;
      }
      v63 = v19;
      result = game_HashString(v19);
      v20 = v8[342];
      v62 = result;
      if (v20 != 0 && (result = game_GameVariableTable_Find(
                           *(_QWORD*)(v20 + 48), &v62)) != 0) {
        v61 = *(_DWORD*)(result + 32);
      }
      else {
        v61 = 0;
      }
      if (v61 >= 1) {
        break;
      }
    LABEL_18:
      if (++v59 == v58) {
        return result;
      }
    }
    v21 = 0;
    while (1) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 256LL))(a1);
      if ((_DWORD)result == 0) {
        break;
      }
      nn_os_LockMutex(&game_g_random_mutex);
      v23 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 8);
      v24 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 12);
      v25 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13) ^
            (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13) << 11);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13) =
          *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 4);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 4) = v23;
      v26 = (v25 >> 8) ^ (v24 >> 19) ^ v25 ^ v24;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 8) = v24;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 12) = v26;
      nn_os_UnlockMutex(&game_g_random_mutex);
      v27 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 120LL);
      v28 = *(_QWORD*)(v27 + 8);
      if (v28 != 0) {
        v29 = strchr(*(_QWORD*)(v27 + 8), 95);
        if (v29 != 0) {
          v28 = v29 + 1;
        }
      }
      result = game_HashString(v28);
      v30 = *GameData_212cae0[0];
      v31 = *(_QWORD*)(*GameData_212cae0[0] + 96);
      if ((v31 & (v31 - 1)) != 0) {
        v32 = result;
        if (result >= v31) {
          v32 = result % v31;
        }
        v33 = *(_QWORD**)(*(_QWORD*)(v30 + 88) + 8 * v32);
        do {
          do {
            v33 = (_QWORD*)*v33;
          } while (v33[1] != result);
        } while (v33[2] != result);
      }
      else {
        v33 = *(_QWORD**)(*(_QWORD*)(v30 + 88) + 8 * ((v31 - 1) & result));
        do {
          do {
            v33 = (_QWORD*)*v33;
          } while (v33[1] != result);
        } while (v33[2] != result);
      }
      v35 = *(_QWORD*)(v33[3] + 40LL);
      v34 = *(__int64**)v35;
      v36 = *(_QWORD*)(v35 + 8) - *(_QWORD*)v35;
      if ((int)((unsigned __int64)v36 >> 3) >= 1) {
        v37 = 0;
        v38 = v36 >> 3;
        v39 = ((unsigned __int64)v36 >> 3) & 0x7FFFFFFF;
        while (1) {
          if (v38 == 0) {
            GameRoutine_151cd70();
          }
          v41 = *v34++;
          v40 = v41;
          v37 += *(unsigned __int8*)(v41 + 48);
          if ((v26 & 0x7FFFFFFFu) % 0x64 < v37) {
            break;
          }
          --v39;
          --v38;
          if (v39 == 0) {
            goto LABEL_32;
          }
        }
        v42 = *(_QWORD*)(v40 + 40);
        if (v42 != 0) {
          v44 = *(_QWORD**)(a1 + 56);
          v43 = *(_QWORD*)(a1 + 64);
          if ((unsigned __int64)v44 < v43) {
            *v44 = v42;
            v22 = (__int64)(v44 + 1);
          }
          else {
            v45 = *(_QWORD*)(a1 + 48);
            v46 = v8;
            v47 = (char*)v44 - v45;
            v48 = ((__int64)v44 - v45) >> 3;
            v49 = v48 + 1;
            if ((unsigned __int64)(v48 + 1) >> 61 != 0) {
              GameRoutine_6e5c60(result);
            }
            v50 = v43 - v45;
            if (v50 >> 2 > v49) {
              v49 = v50 >> 2;
            }
            if ((unsigned __int64)v50 >= 0x7FFFFFFFFFFFFFF8LL) {
              v51 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v51 = v49;
            }
            if (v51 != 0) {
              if (v51 >> 61 != 0) {
                GameRoutine_60a210(result);
              }
              v52 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v51, 16, 0);
            }
            else {
              v52 = 0;
            }
            v53 = v52 + 8 * v51;
            v54 = (char*)v44 - v45;
            v55 = (__int64)&v47[v52 + -8 * v48];
            *(_QWORD*)&v47[v52] = v42;
            v22 = (__int64)&v47[v52 + 8];
            result = memcpy(v55, v45, v54);
            *(_QWORD*)(a1 + 48) = v55;
            *(_QWORD*)(a1 + 56) = v22;
            *(_QWORD*)(a1 + 64) = v53;
            if (v45 != 0) {
              v56 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v56 = 56;
              }
              result = nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v56);
            }
            v8 = v46;
          }
          *(_QWORD*)(a1 + 56) = v22;
        }
      }
    LABEL_32:
      if (++v21 == v61) {
        goto LABEL_18;
      }
    }
  }
  return result;
}

__int64 SpotAttachmentDungeon_Unknown30(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  unsigned __int8* v8;
  int v9;
  __int64 v10;
  int v11;

  v1 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 264LL))(a1);
  v2 = GameRoutine_151b000();
  v3 = *(unsigned __int8*)(v1 + 50);
  if (v3 >= 3) {
    if (v3 >= 5) {
      if (v3 >= 7) {
        if (v3 >= 9) {
          v6 = v3 >= 0xB;
          v4 = 4;
          if (v6) {
            v4 = 5;
          }
          v5 = *(_QWORD*)(v1 + 64);
          if (v5 == 0) {
            goto LABEL_21;
          }
        }
        else {
          v4 = 3;
          v5 = *(_QWORD*)(v1 + 64);
          if (v5 == 0) {
            goto LABEL_21;
          }
        }
      }
      else {
        v4 = 2;
        v5 = *(_QWORD*)(v1 + 64);
        if (v5 == 0) {
          goto LABEL_21;
        }
      }
    }
    else {
      v4 = 1;
      v5 = *(_QWORD*)(v1 + 64);
      if (v5 == 0) {
        goto LABEL_21;
      }
    }
  }
  else {
    v4 = 0;
    v5 = *(_QWORD*)(v1 + 64);
    if (v5 == 0) {
      goto LABEL_21;
    }
  }
  v7 = *(unsigned __int16*)(v2 + 32);
  if (*(_WORD*)(v2 + 32) == 0) {
  LABEL_21:
    v10 = 72;
    return *(unsigned __int8*)(*(_QWORD*)(v2 + v10) + v4);
  }
  v8 = *(unsigned __int8**)(v2 + 40);
  v9 = *(unsigned __int8*)(v5 + 250);
  v10 = 72;
  while (1) {
    v11 = *v8++;
    if (v11 == v9) {
      break;
    }
    if (--v7 == 0) {
      return *(unsigned __int8*)(*(_QWORD*)(v2 + v10) + v4);
    }
  }
  v10 = 56;
  return *(unsigned __int8*)(*(_QWORD*)(v2 + v10) + v4);
}

__int64 SpotAttachmentDungeon_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  int v8;
  __int64 v10;
  int v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _DWORD v19[2];
  char* v20;

  v1 = a1[4];
  *a1 = &game_gmap_SpotAttachmentDispatch_vtable;
  if (v1 != 0) {
    v3 = 0;
    v4 = GameData_212cf80[0];
    v5 = *(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL);
    v6 = GameData_212c780;
    while (1) {
      v7 = *(_QWORD*)(v5 + 48);
      if (*(_BYTE*)(v7 + v3) != 0) {
        v8 = *(_DWORD*)(v7 + v3 + 4);
        if (v8 != 0 && *v6 != 0) {
          v20 = &GameData_1a9f09e;
          v19[0] = v8;
          v19[1] = 0;
          if (SpotMgr_132ffa0(v19) == v1) {
            break;
          }
        }
      }
      v3 += 8;
      if (v3 == 2400) {
        goto LABEL_19;
      }
    }
    v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v4 + 8LL) + 48LL) + v3;
    v11 = *(_DWORD*)(v10 + 4);
    if (v11 != 0 && *v6 != 0) {
      v20 = &GameData_1a9f09e;
      v19[0] = v11;
      v19[1] = 0;
      if (SpotMgr_132ffa0(v19) != 0) {
        *(_DWORD*)(v10 + 4) = 0;
      }
    }
  }

LABEL_19:
  v13 = a1[6];
  v14 = fw_memory_g_heap_manager_ptr;
  if (v13 != 0) {
    v15 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[7] = v13;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(v15 + v16, v13);
  }
  v17 = 128;
  if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
    v17 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v17, a1);
}

#pragma GCC visibility pop
