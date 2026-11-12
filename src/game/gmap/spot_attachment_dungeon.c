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
__int64 SpotAttachmentDungeon_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "SpotAttachmentDungeon_DeletingDestructor");
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
unsigned __int64 SpotAttachmentDungeon_Unknown17_alt1(
    __int64 a1, int a2) __asm__("SpotAttachmentDungeon_Unknown17");
__int64 SpotMgr_132ffa0_alt1(unsigned int*) __asm__("SpotMgr_132ffa0");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SpotAttachmentDungeon_DeletingDestructor(_QWORD* a1);
__int64 Dir_70e760_alt1(__int16*, __int16*) __asm__("Dir_70e760");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 strchr_alt1(const char*, int) __asm__("strchr");
void __attribute__((noreturn))
GameRoutine_151cd70_alt1() __asm__("GameRoutine_151cd70");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_6e5c60_alt1() __asm__("GameRoutine_6e5c60");
void SpotAttachmentDungeon_Unknown17(__int64 a1, int a2);

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

void SpotAttachmentDungeon_Unknown17(__int64 a1, int a2)
{
  __int16* v3;
  __int64 v4;
  __int64 v6;
  __int16* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64* v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  void* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  _QWORD* v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  _QWORD* v46;
  __int64 v47;
  __int64* v48;
  char* v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  signed int v59;
  int v60;
  int v61;
  signed int v62;
  int v63;
  struct {
    __int64 v64;
    void* v65;
  } v64_;

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
    a2 += ~(unsigned int)Dir_70e760_alt1(v7, v3);
  }
  v64_.v65 = &GameData_1a8ad4c;
  v8 = &GameData_21ca000;
  v64_.v64 = game_HashString_alt1((__int64)&GameData_1a8ad4c);
  if (game_GameModeData_instance_ != 0 &&
      (v9 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v64_.v64)) != 0) {
    v62 = *(_DWORD*)(v9 + 32);
  }
  else {
    v62 = 0;
  }
  v64_.v65 = &GameData_1ae73e9;
  v64_.v64 = game_HashString_alt1((__int64)&GameData_1ae73e9);
  if (game_GameModeData_instance_ != 0 &&
      (v10 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v64_.v64)) != 0) {
    v11 = *(_DWORD*)(v10 + 32);
  }
  else {
    v11 = 0;
  }
  v64_.v65 = &GameData_1ac8613;
  v64_.v64 = game_HashString_alt1((__int64)&GameData_1ac8613);
  if (game_GameModeData_instance_ != 0) {
    game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v64_.v64);
  }
  v60 = a2;
  if (a2 >= 1) {
    v61 = 0;
    v59 = v11 + v62;
    v12 = game_map_MapRandom_instance__ptr[0];
    while (1) {
      nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
      v13 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 8);
      v14 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 12);
      v15 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12) ^
            (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12) << 11);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12) =
          *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 4);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 4) = v13;
      v16 = (v15 >> 8) ^ (v14 >> 19) ^ v15 ^ v14;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 8) = v14;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 12) = v16;
      v17 = v16 & 0x7FFFFFFF;
      nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
      if ((int)(v17 % 0x64) >= v62) {
        v18 = (int)(v17 % 0x64) >= v59 ? &GameData_1aa5d8e : &GameData_1ab1630;
      }
      else {
        v18 = &GameData_1a86d61;
      }
      v64_.v65 = v18;
      v19 = game_HashString_alt1((__int64)v18);
      v20 = v8[342];
      v64_.v64 = v19;
      if (v20 != 0 &&
          (v21 = game_GameVariableTable_Find_alt1(
               *(_QWORD**)(v20 + 48), (unsigned __int64*)&v64_.v64)) != 0) {
        v63 = *(_DWORD*)(v21 + 32);
      }
      else {
        v63 = 0;
      }
      if (v63 >= 1) {
        break;
      }
    LABEL_18:
      if (++v61 == v60) {
        return;
      }
    }
    v22 = 0;
    while ((*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 256LL))(a1) != 0) {
      nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
      v24 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 8);
      v25 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 12);
      v26 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12) ^
            (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12) << 11);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12) =
          *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 4);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 4) = v24;
      v27 = (v26 >> 8) ^ (v25 >> 19) ^ v26 ^ v25;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 8) = v25;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 12) = v27;
      nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
      v28 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 120LL);
      v29 = *(_QWORD*)(v28 + 8);
      if (v29 != 0) {
        v30 = strchr_alt1(*(const char**)(v28 + 8), 95);
        if (v30 != 0) {
          v29 = v30 + 1;
        }
      }
      v31 = game_HashString_alt1(v29);
      v32 = *GameData_212cae0[0];
      v33 = *(_QWORD*)(*GameData_212cae0[0] + 96);
      if ((v33 & (v33 - 1)) != 0) {
        v34 = v31;
        if (v31 >= v33) {
          v34 = v31 % v33;
        }
        v35 = *(_QWORD**)(*(_QWORD*)(v32 + 88) + 8 * v34);
        do {
          do {
            v35 = (_QWORD*)*v35;
          } while (v35[1] != v31);
        } while (v35[2] != v31);
      }
      else {
        v35 = *(_QWORD**)(*(_QWORD*)(v32 + 88) + 8 * ((v33 - 1) & v31));
        do {
          do {
            v35 = (_QWORD*)*v35;
          } while (v35[1] != v31);
        } while (v35[2] != v31);
      }
      v37 = *(_QWORD*)(v35[3] + 40LL);
      v36 = *(__int64**)v37;
      v38 = *(_QWORD*)(v37 + 8) - *(_QWORD*)v37;
      if ((int)((unsigned __int64)v38 >> 3) >= 1) {
        v39 = 0;
        v40 = v38 >> 3;
        v41 = ((unsigned __int64)v38 >> 3) & 0x7FFFFFFF;
        while (1) {
          if (v40 == 0) {
            GameRoutine_151cd70_alt1();
          }
          v43 = *v36++;
          v42 = v43;
          v39 += *(unsigned __int8*)(v43 + 48);
          if ((v27 & 0x7FFFFFFFu) % 0x64 < v39) {
            break;
          }
          --v41;
          --v40;
          if (v41 == 0) {
            goto LABEL_32;
          }
        }
        v44 = *(_QWORD*)(v42 + 40);
        if (v44 != 0) {
          v46 = *(_QWORD**)(a1 + 56);
          v45 = *(_QWORD*)(a1 + 64);
          if ((unsigned __int64)v46 < v45) {
            *v46 = v44;
            v23 = (__int64)(v46 + 1);
          }
          else {
            v47 = *(_QWORD*)(a1 + 48);
            v48 = v8;
            v49 = (char*)v46 - v47;
            v50 = ((__int64)v46 - v47) >> 3;
            v51 = v50 + 1;
            if ((unsigned __int64)(v50 + 1) >> 61 != 0) {
              GameRoutine_6e5c60_alt1();
            }
            v52 = v45 - v47;
            if (v52 >> 2 > v51) {
              v51 = v52 >> 2;
            }
            if ((unsigned __int64)v52 >= 0x7FFFFFFFFFFFFFF8LL) {
              v53 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v53 = v51;
            }
            if (v53 != 0) {
              if (v53 >> 61 != 0) {
                GameRoutine_60a210_alt1();
              }
              v54 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v53, 16, 0);
            }
            else {
              v54 = 0;
            }
            v55 = v54 + 8 * v53;
            v56 = (unsigned __int64)v46 - v47;
            v57 = (__int64)&v49[v54 + -8 * v50];
            *(_QWORD*)&v49[v54] = v44;
            v23 = (__int64)&v49[v54 + 8];
            memcpy_alt1(v57, v47, v56);
            *(_QWORD*)(a1 + 48) = v57;
            *(_QWORD*)(a1 + 56) = v23;
            *(_QWORD*)(a1 + 64) = v55;
            if (v47 != 0) {
              v58 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v58 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, v47);
            }
            v8 = v48;
          }
          *(_QWORD*)(a1 + 56) = v23;
        }
      }
    LABEL_32:
      if (++v22 == v63) {
        goto LABEL_18;
      }
    }
  }
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

void SpotAttachmentDungeon_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  unsigned int v8;
  __int64 v10;
  unsigned int v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    unsigned int v18[2];
    char* v19;
  } v18_;

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
          v18_.v19 = &GameData_1a9f09e;
          v18_.v18[0] = v8;
          v18_.v18[1] = 0;
          if (SpotMgr_132ffa0_alt1(v18_.v18) == v1) {
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
      v18_.v19 = &GameData_1a9f09e;
      v18_.v18[0] = v11;
      v18_.v18[1] = 0;
      if (SpotMgr_132ffa0_alt1(v18_.v18) != 0) {
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
    nn_mem_StandardAllocator_Free_alt2(v15 + v16, v13);
  }
  v17 = 128;
  if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
    v17 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v14 + v17, (__int64)a1);
}

#pragma GCC visibility pop
