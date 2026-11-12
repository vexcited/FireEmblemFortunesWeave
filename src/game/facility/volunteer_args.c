#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_12b3d60(_QWORD, _QWORD);
__int64 GameRoutine_1464bd0(_QWORD, _QWORD);
__int64 GameRoutine_196e860(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19a7f00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8e17a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_90c6c0(_QWORD, _QWORD);
__int64 GameRoutine_90dc20(_QWORD, _QWORD);
__int64 GameRoutine_946ed0(_QWORD);
__int64 GameRoutine_9475c0(_QWORD);
__int64 GameRoutine_948f10(_QWORD);
__int64 GameRoutine_957720(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_958620(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN GameData_1abd562;
extern __int64 (**game_GameReliance_Impl_Data_vtable_ptr)();
extern __int64 GameData_21c9728;
extern __int64 GameData_21ca080;
extern __int64 GameData_21f3ff8;
extern __int64 GameData_2246cb0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_RelianceCheck_unknown_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern char GameData_2166cf2;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6c1f60(_QWORD);
__int64 VolunteerArgs_Unknown2(_QWORD* a1);
__int64 VolunteerArgs_Unknown4(__int64 a1);
__int64 VolunteerArgs_141aec0(__int64 result, __int64 a2, __int64 a3);
__int64 VolunteerArgs_Unknown12(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_95f260(PSEUDO_X8, _QWORD);
__int64 Dir_70d7a0(_QWORD);
__int64 GameRoutine_143d0a0(_QWORD, _QWORD);
__int64 GameRoutine_143d340(_QWORD, _QWORD);
__int64 GameRoutine_1741620(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17b8bd0(_QWORD);
__int64 GameRoutine_70e760(_QWORD);
__int64 GameRoutine_820d50(_QWORD);
__int64 GameRoutine_821090(_QWORD);
__int64 GameRoutine_822320(_QWORD);
__int64 GameRoutine_86b4e0(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_RandomSeed_RollVariable(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_1a856ca;
extern _UNKNOWN GameData_1a856e5;
extern _UNKNOWN GameData_1a893f0;
extern _UNKNOWN GameData_1a8d4b3;
extern _UNKNOWN GameData_1a98db9;
extern _UNKNOWN GameData_1aa0aa7;
extern _UNKNOWN GameData_1aa850c;
extern _UNKNOWN GameData_1aa8513;
extern _UNKNOWN GameData_1abfaa2;
extern _UNKNOWN GameData_1abfaaf;
extern _UNKNOWN GameData_1acacac;
extern _UNKNOWN GameData_1ade14e;
extern _UNKNOWN GameData_1adebe5;
extern _UNKNOWN GameData_1adfa87;
extern _UNKNOWN GameData_1af5205;
extern _UNKNOWN GameData_1bd42a0;
extern __int64 (*GameData_1faf4d8[])();
extern __int64 (*GameData_1faf558[])();
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212cf80[5];
extern __int64 GameData_21c9650;
extern __int64 GameData_21c9868;
extern __int64 GameData_21c9870;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_UnitListSet_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64* GameData_2130e70;
extern __int64* game_map_MapRandom_instance__ptr[3];
float GameRoutine_143f400(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_94e420(void);
void VolunteerArgs_946ed0();
void VolunteerArgs_947000();
__int64 VolunteerArgs_9475c0(__int64* a1);
__int64 VolunteerArgs_9476c0(__int64 a1, __int64** a2);
__int64 VolunteerArgs_947910(__int64 a1);
__int64 VolunteerArgs_947a30();
__int64 VolunteerArgs_947af0();
__int64 VolunteerArgs_947cc0(int a1);
__int64 VolunteerArgs_948220(__int16* a1);
__int64 VolunteerArgs_948a50();
__int64 VolunteerArgs_948b80();
__int64 VolunteerArgs_958620(__int64 a1, char a2);
_QWORD* SceneCharacter_14020c0(__int64);
__int64* Registration_a4da40(__int64, __int64);
__int64 FacilityDialogueFile_196eb20(__int64, __int64*, __int64);
__int64 GameRoutine_196e120(_QWORD, _QWORD);
__int64 Manager_a51640(__int64, __int64, _DWORD*);
__int64 SceneCharacter_14020c0_alt1(_QWORD) __asm__("SceneCharacter_14020c0");
__int64 SceneManager_138e5e0(__int64, __int64);
__int64 SceneManager_138e5e0_alt1(_QWORD,
                                  _QWORD) __asm__("SceneManager_138e5e0");
__int64 SceneTalk_1497520(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 GameData_212dce8;
extern __int64 GameData_21f4000;
extern __int64 msg_MessageManager_instance_;
void SceneTalk_1497180(_DWORD*, __int64, unsigned __int64, __int64, __int64,
                       unsigned __int64, unsigned int);
__attribute__((swiftcall)) void VolunteerArgs_141b050(PSEUDO_X8 x8_,
                                                      __int64 a1);
__attribute__((swiftcall)) void VolunteerArgs_Unknown13(PSEUDO_X8 x8_,
                                                        __int64 result,
                                                        __int64 a2,
                                                        unsigned int a3);
__attribute__((swiftcall)) void VolunteerArgs_Destructor(PSEUDO_X8 x8_,
                                                         __int64 result,
                                                         __int64 a2,
                                                         unsigned int a3);
__int64* Registration_a4da40_alt1(__int64,
                                  const char*) __asm__("Registration_a4da40");
__int64* game_821090(int);
__int64 Dir_70e760(__int16*, __int16*);
__int64 GameRoutine_143d0a0_alt1(__int64,
                                 __int16*) __asm__("GameRoutine_143d0a0");
__int64 GameRoutine_86b4e0_alt1(__int64*) __asm__("GameRoutine_86b4e0");
__int64 Manager_a51640_alt1(__int64, const char*,
                            _DWORD*) __asm__("Manager_a51640");
__int64 SceneManager_138e5e0_alt2(__int64) __asm__("SceneManager_138e5e0");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_RandomSeed_RollVariable_alt1(_DWORD*, unsigned __int64*) __asm__(
    "game_RandomSeed_RollVariable");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
unsigned __int16*
Dir_70d7a0_alt1(unsigned __int16* result) __asm__("Dir_70d7a0");
void SceneTalk_1497180_alt1(unsigned __int8*, __int64, unsigned __int64,
                            __int64, __int64, unsigned __int64,
                            int) __asm__("SceneTalk_1497180");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

void VolunteerArgs_946ed0()
{
  __int64 v0;
  int v1;
  __int64 v2;
  bool v3;
  unsigned __int16* v4;
  __int16 v5;
  __int16 v6;
  __int16 v7;
  __int16 v8;
  struct {
    __int64 v9;
    void* v10;
    __int16 v11;
    __int16 v12;
  } v9_;

  if (game_GameModeData_instance_ != 0 &&
      *(_BYTE*)(game_GameModeData_instance_ + 56) == 5) {
    v9_.v10 = &GameData_1a856ca;
    v9_.v9 = game_HashString_alt1((__int64)&GameData_1a856ca);
    if (game_GameModeData_instance_ != 0) {
      v0 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v9_.v9);
      if (v0 != 0) {
        v1 = *(_DWORD*)(v0 + 32);
        v2 = game_gmap_GmapClock_instance_;
        v3 = v1 == 0 || game_gmap_GmapClock_instance_ == 0;
        if (!v3 && *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                           *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                           *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
                       0) {
          v4 = (unsigned __int16*)(game_gmap_GmapClock_instance_ + 8);
          v5 = *(_WORD*)(game_gmap_GmapClock_instance_ + 8);
          v6 = *(_WORD*)(game_gmap_GmapClock_instance_ + 18);
          v7 = *(_WORD*)(game_gmap_GmapClock_instance_ + 16);
          v9_.v9 = game_gmap_GmapClock_instance_;
          LOWORD(v9_.v10) = v5;
          *(_DWORD*)((char*)&v9_.v10 + 2) =
              *(_DWORD*)(game_gmap_GmapClock_instance_ + 10);
          v8 = *(_WORD*)(game_gmap_GmapClock_instance_ + 14);
          v9_.v12 = v6;
          v9_.v11 = v7;
          *(_WORD*)(game_gmap_GmapClock_instance_ + 18) = 0;
          HIWORD(v9_.v10) = v8;
          *(_WORD*)(v2 + 14) = v8 + v1 / 60;
          *(_WORD*)(v2 + 16) = v7 + v1 % 60;
          Dir_70d7a0_alt1(v4);
          *(_DWORD*)(v2 + 44) = 0;
          GameRoutine_86b4e0_alt1(&v9_.v9);
        }
      }
    }
  }
}

void VolunteerArgs_947000()
{
  __int64 v0;
  __int64 v1;

  if (game_GameModeData_instance_ != 0 &&
      *(_BYTE*)(game_GameModeData_instance_ + 56) == 4) {
    v0 = game_hub_ProgressEventView_instance_;
    if (game_hub_ProgressEventView_instance_ != 0) {
      GameRoutine_17b8bd0(game_hub_ProgressEventView_instance_);
      v1 = *(_QWORD*)(v0 + 8);
      if (v1 != 0) {
        while (1) {
          if (*(_BYTE*)v1 == 2) {
            if (*(_DWORD*)(v1 + 32) == 3) {
              *(_QWORD*)(v0 + 16) = v1;
              *(_WORD*)(v0 + 136) &= ~0x80u;
              return;
            }
          }
          else if (*(_BYTE*)v1 == 0) {
            return;
          }
          v1 += 64;
        }
      }
    }
  }
  else if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8bd0(game_hub_ProgressEventView_instance_);
  }
}

__int64 VolunteerArgs_9475c0(__int64* a1)
{

#pragma clang fp contract(off)
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  char v7;
  int v8;
  void* v9;
  unsigned __int64 v11[4];

  v3 = *a1;
  v4 = a1[1];
  if (*a1 == v4) {
    return 0;
  }
  v11[2] = v1;
  v11[3] = v2;
  v5 = 0;
  v6 = 0;
  do {
    if (*(_QWORD*)v3 != 0) {
      ++v5;
      v6 += *(char*)(*(_QWORD*)v3 + 2090LL);
    }
    v3 += 8;
  } while (v3 != v4);
  v7 = 0;
  if (v5 != 0) {
    v8 = llroundf((float)v6 / (float)v5);
    if (v8 > 1) {
      if (v8 == 2) {
        v9 = &GameData_1acacac;
        goto LABEL_17;
      }
      if (v8 == 3) {
        v9 = &GameData_1af5205;
        goto LABEL_17;
      }
    }
    else {
      if (v8 == 0) {
        v9 = &GameData_1a856e5;
        goto LABEL_17;
      }
      if (v8 == 1) {
        v9 = &GameData_1a98db9;
      LABEL_17:
        v11[1] = (unsigned __int64)v9;
        v11[0] = game_HashString_alt1((__int64)v9);
        v7 = game_RandomSeed_RollVariable_alt1(
            (_DWORD*)game_map_MapRandom_instance__ptr[0], v11);
      }
    }
  }
  return v7 & 1;
}

__int64 VolunteerArgs_9476c0(__int64 a1, __int64** a2)
{
  __int64* v2;
  __int64* v3;
  unsigned __int64 v4;
  int v5;
  __int64 v6;
  _DWORD* v7;
  _DWORD* v8;
  int v9;
  int v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  int v18;
  __int64 v19;
  __int64 result;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;

  v2 = *a2;
  v3 = a2[1];
  v22 = a1;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if (v2 != v3) {
    v4 = 0;
    do {
      v6 = *v2;
      if (GameData_2246cb0 != 0) {
        v7 = *(_DWORD**)(GameData_2246cb0 + 152);
        v8 = *(_DWORD**)(GameData_2246cb0 + 160);
        if (v7 != v8) {
          while (*(_QWORD*)v7 != v6) {
            v7 += 4;
            if (v7 == v8) {
              goto LABEL_11;
            }
          }
        }
        if (v7 == v8) {
          v7 = &GameData_1bd42a0;
        }
      }
      else {
      LABEL_11:
        v7 = &GameData_1bd42a0;
      }
      v10 = v7[2];
      v9 = v7[3];
      if (v4 < v25) {
        v5 = v9 - v10;
        *(_QWORD*)v4 = v6;
        *(_DWORD*)(v4 + 8) = v10;
        *(_DWORD*)(v4 + 12) = v9;
        if (v9 - v10 < 0) {
          v5 = v10 - v9;
        }
        *(_DWORD*)(v4 + 16) = v5;
        v4 += 24LL;
      }
      else {
        v11 = v23;
        v12 = v4 - v23;
        v13 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v4 - v23) >> 3) + 1;
        if (v13 > 0xAAAAAAAAAAAAAAALL) {
          GameRoutine_94e420();
        }
        if (0x5555555555555556LL * ((__int64)(v25 - v23) >> 3) > v13) {
          v13 = 0x5555555555555556LL * ((__int64)(v25 - v23) >> 3);
        }
        if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v25 - v23) >> 3) >=
            0x555555555555555LL) {
          v14 = 0xAAAAAAAAAAAAAAALL;
        }
        else {
          v14 = v13;
        }
        if (v14 != 0) {
          if (v14 > 0xAAAAAAAAAAAAAAALL) {
            GameRoutine_60a210(a1);
          }
          v15 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                               24 * v14, 16, 0);
        }
        else {
          v15 = 0;
        }
        v16 = v15 + v12;
        v17 = v15 + 24 * v14;
        v18 = v9 - v10;
        *(_QWORD*)v16 = v6;
        *(_DWORD*)(v16 + 8) = v10;
        *(_DWORD*)(v16 + 12) = v9;
        v4 = v15 + v12 + 24;
        if (v9 - v10 < 0) {
          v18 = v10 - v9;
        }
        *(_DWORD*)(v16 + 16) = v18;
        a1 = memcpy(v15, v11, v12);
        v23 = v15;
        v25 = v17;
        if (v11 != 0) {
          v19 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v19 = 56;
          }
          a1 = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
        }
      }
      ++v2;
      v24 = v4;
    } while (v2 != v3);
  }
  result = GameRoutine_1741620(v22, &v23, 0);
  if (v23 != 0) {
    v24 = v23;
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21);
  }
  return result;
}

__int64 VolunteerArgs_947910(__int64 a1)
{
  unsigned int v1;
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (a1 == 0) {
    return 1;
  }
  v1 = 0;
  v2 = *(unsigned __int8*)(*(_QWORD*)(a1 + 24) + 64LL);
  if (v2 > 6) {
    if (v2 == 7) {
      v3 = a1;
      v6 = 34;
    }
    else {
      if (v2 != 8) {
        goto LABEL_22;
      }
      v3 = a1;
      v6 = 7;
    }
    v9 = GameRoutine_821090(v6);
    if (game_GameModeData_instance_ != 0) {
      v10 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v9);
      if (v10 != 0 && *(int*)(v10 + 32) > 0) {
        goto LABEL_19;
      }
    }
    goto LABEL_20;
  }
  if (v2 == 1) {
    v3 = a1;
    v4 = 16;
    goto LABEL_11;
  }
  if (v2 == 2) {
    v3 = a1;
    v4 = 17;
  LABEL_11:
    v7 = GameRoutine_820d50(v4);
    if (game_GameModeData_instance_ == 0 ||
        (v8 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), v7)) == 0 ||
        *(_DWORD*)(v8 + 32) == 0) {
    LABEL_19:
      v1 = 0;
    LABEL_21:
      a1 = v3;
      goto LABEL_22;
    }
  LABEL_20:
    v1 = 1;
    goto LABEL_21;
  }

LABEL_22:
  if (game_gmap_GmapClock_instance_ != 0) {
    v11 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v11 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if ((GameRoutine_143d340(a1, v11) & 1) != 0) {
    return v1;
  }
  else {
    return v1 | 2;
  }
}

__int64 VolunteerArgs_947a30()
{
  __int64 v0;
  __int64 v1;
  _BOOL4 v2;
  unsigned int v3;
  __int64 v4;

  v0 = GameRoutine_820d50(7);
  v2 = game_GameModeData_instance_ != 0 &&
           (v1 = game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48), v0)) != 0 &&
           *(_DWORD*)(v1 + 32) != 0 ||
       (GameRoutine_822320(3) & 1) == 0;
  if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) + 72LL) != 0) {
    v3 = v2;
  }
  else {
    v3 = v2 | 0x200;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v4 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v4 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if ((GameRoutine_143d0a0(&GameData_1abfaa2, v4) & 1) != 0) {
    return v3;
  }
  else {
    return v3 | 2;
  }
}

__int64 VolunteerArgs_947af0()
{
  __int64* v0;
  __int64 v1;
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int16* v6;
  __int16* v7;
  __int16* v8;
  __int64 result;
  int v10;
  __int64 v11;
  char v12;
  __int64 v13;
  struct {
    __int64 v14;
    void* v15;
  } v14_;

  v0 = game_821090(1);
  if (game_GameModeData_instance_ != 0) {
    v1 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v0);
    v2 = 0x400000;
    if (v1 != 0) {
      if (*(int*)(v1 + 32) <= 0) {
        v2 = 0x400000;
      }
      else {
        v2 = 0;
      }
    }
  }
  else {
    v2 = 0x400000;
  }
  if ((*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 304LL) & 1) == 0 ||
      (game_gmap_GmapClock_instance_ == 0 ||
       *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
               *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
               *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
           0) &&
          ((v14_.v15 = &GameData_1adebe5,
            v14_.v14 = game_HashString_alt1((__int64)&GameData_1adebe5),
            game_GameModeData_instance_ == 0) ||
           (v3 = game_GameVariableTable_Find_alt1(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)&v14_.v14)) == 0 ||
           *(_DWORD*)(v3 + 32) == 0)) {
    v2 |= 8u;
  }
  v4 = game_gmap_GmapClock_instance_;
  v5 = game_gmap_GmapClock_kDefaultTime_ptr;
  if (game_gmap_GmapClock_instance_ != 0) {
    v6 = (__int16*)(game_gmap_GmapClock_instance_ + 20);
  }
  else {
    v6 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if (v6[1] * *v6 * v6[2] == 0 ||
      (game_gmap_GmapClock_instance_ != 0
           ? (v7 = (__int16*)(game_gmap_GmapClock_instance_ + 8))
           : (v7 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr),
       (int)Dir_70e760(v7, v6) <= 0)) {
    v2 |= 4u;
  }
  if (v4 != 0) {
    v8 = (__int16*)(v4 + 8);
  }
  else {
    v8 = (__int16*)v5;
  }
  if ((GameRoutine_143d0a0_alt1((__int64)&GameData_1aa850c, v8) & 1) != 0) {
    result = v2;
  }
  else {
    result = v2 | 2;
  }
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v10 = result;
    v14_.v15 = &GameData_1adfa87;
    v11 = game_HashString_alt1((__int64)&GameData_1adfa87);
    v12 = game_GameModeData_instance_;
    v14_.v14 = v11;
    if (game_GameModeData_instance_ != 0) {
      v13 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v14_.v14);
      v12 = v13 != 0 && *(_DWORD*)(v13 + 32) != 0;
    }
    return v10 | v12 & 1u | ((*(_BYTE*)(*GameData_2130e70 + 55) & 1) == 0);
  }
  return result;
}

__int64 VolunteerArgs_947cc0(int a1)
{
  __int64* v2;
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int16* v10;
  __int16* v11;
  int v12;
  __int16* v13;
  char v14;
  __int64 v15;
  int v16;
  bool v17;
  __int64 (***v18)();
  __int64*** v19;
  __int64** v20;
  __int64** v21;
  __int64* v22;
  __int64 v23;
  _BOOL4 v24;
  __int64 v25;
  struct {
    __int64 (**v27)();
    unsigned int* v28;
    char gap16_[16];
    unsigned __int64* v29;
  } v27_;
  unsigned int v30;
  __int64 v31;

  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = game_821090(1),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (game_GameModeData_instance_ != 0) {
    v3 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v2),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v4 = 0x400000;
    if (v3 != 0) {
      if (*(int*)(v3 + 32) <= 0) {
        v4 = 0x400000;
      }
      else {
        v4 = 0;
      }
    }
  }
  else {
    v4 = 0x400000;
  }
  if (*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 304LL) != 1 ||
      (game_gmap_GmapClock_instance_ == 0 ||
       *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
               *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
               *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
           0) &&
          ((v27_.v28 = (unsigned int*)&GameData_1adebe5,
            v27_.v27 = (__int64 (**)(void))game_HashString_alt1(
                (__int64)&GameData_1adebe5),
            game_GameModeData_instance_ == 0) ||
           (v5 = game_GameVariableTable_Find_alt1(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)&v27_.v27)) == 0 ||
           *(_DWORD*)(v5 + 32) == 0)) {
    v4 |= 8u;
  }
  if (a1 < 1) {
    v7 = 0;
  }
  else {
    v6 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v6 = *(_DWORD*)(game_GameModeData_instance_ + 72);
    }
    if (v6 >= a1) {
      v7 = 0;
    }
    else {
      v7 = 16;
    }
  }
  v8 = game_gmap_GmapClock_instance_;
  v9 = game_gmap_GmapClock_kDefaultTime_ptr;
  if (game_gmap_GmapClock_instance_ != 0) {
    v10 = (__int16*)(game_gmap_GmapClock_instance_ + 20);
  }
  else {
    v10 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if (v10[1] * *v10 * v10[2] == 0 ||
      (game_gmap_GmapClock_instance_ != 0
           ? (v11 = (__int16*)(game_gmap_GmapClock_instance_ + 8))
           : (v11 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr),
       (int)Dir_70e760(v11, v10) <= 0)) {
    v7 |= 4u;
  }
  v12 = v7 | v4;
  if (v8 != 0) {
    v13 = (__int16*)(v8 + 8);
  }
  else {
    v13 = (__int16*)v9;
  }
  v14 = GameRoutine_143d0a0_alt1((__int64)&GameData_1aa850c, v13),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = v12 | 2;
  v17 = (v14 & 1) == 0;
  v18 = &v27_.v27;
  if (!v17) {
    v16 = v12;
  }
  v30 = v16 | 0x100000;
  v19 = *(__int64****)(game_UnitListSet_instance_ + 8);
  v27_.v27 = GameData_1faf4d8;
  v27_.v28 = &v30;
  v27_.v29 = (unsigned __int64*)&v27_.v27;
  v20 = *v19;
  v21 = v19[1];
  if (*v19 == v21) {
    goto LABEL_53;
  }
  do {
    v22 = *v20;
    v23 = (__int64)v20[1];
    if (v23 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v22 != nullptr) {
      v24 = (v22[6] & 0x3F) == 0;
      if (v23 == 0) {
        goto LABEL_45;
      }
    }
    else {
      v24 = false;
      if (v23 == 0) {
        goto LABEL_45;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v23),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (!v24) {
        goto LABEL_37;
      }
      goto LABEL_46;
    }
  LABEL_45:
    if (v24) {
    LABEL_46:
      v31 = **v20;
      if (v27_.v29 == nullptr) {
        GameRoutine_60a310_alt1(),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      (*(void (**)(unsigned __int64*, __int64*))(*v27_.v29 + 48))(v27_.v29,
                                                                  &v31),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  LABEL_37:
    v20 += 2;
  } while (v20 != v21);
  v18 = (__int64 (***)(void))v27_.v29,
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v27_.v29 != (unsigned __int64*)&v27_.v27) {
    if (v27_.v29 != nullptr) {
      v25 = 5;
      goto LABEL_54;
    }
    return v30;
  }
LABEL_53:
  v25 = 4;
LABEL_54:
  ((void (*)(__int64 (***)(void), __int64))(*v18)[v25])(v18, v15),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return v30;
}

__int64 VolunteerArgs_948220(__int16* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  unsigned __int8* v5;
  int v6;
  int v8;
  __int64 v9;
  int v10;
  _QWORD v11[6];

  v11[0] = GameData_1faf558;
  v11[4] = v11;
  if (GameData_21c9650 == 0) {
    return 0;
  }
  v1 = *(_QWORD*)(GameData_21c9650 + 16);
  v2 = *(_QWORD*)(GameData_21c9650 + 24);
  if (v1 != v2) {
    while (*a1 != *(unsigned __int16*)(v1 + 4) ||
           a1[1] != *(unsigned __int8*)(v1 + 6) ||
           a1[2] != *(unsigned __int8*)(v1 + 7)) {
      v1 += 368;
      if (v1 == v2) {
        return 0;
      }
    }
  }
  if (v1 == v2 || v1 == 0) {
    return 0;
  }
  v4 = *(unsigned __int8*)(v1 + 1);
  if (*(_BYTE*)(v1 + 1) == 0) {
    return 0;
  }
  v5 = (unsigned __int8*)(v1 + 8);
  while (1) {
    v6 = *v5;
    v5 += 24;
    if (v6 == 2) {
      break;
    }
    if (--v4 == 0) {
      return 0;
    }
  }
  v11[1] = &GameData_1aa8513;
  v11[0] = game_HashString(&GameData_1aa8513);
  v8 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v9 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v11);
    if (v9 != 0) {
      v8 = *(_DWORD*)(v9 + 32);
    }
    else {
      v8 = 0;
    }
  }
  v10 = v8 & ~(v8 >> 31);
  if (v10 >= 99) {
    return 99;
  }
  else {
    return (unsigned int)v10;
  }
}

__int64 VolunteerArgs_948a50()
{
  __int64 v0;
  __int64 v1;
  _BOOL4 v2;
  __int64 v3;
  __int64 result;
  unsigned int v5;
  __int64 v6;
  int v7;
  _QWORD v8[2];

  v0 = GameRoutine_820d50(0);
  v2 = game_GameModeData_instance_ != 0 &&
       (v1 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), v0)) != 0 &&
       *(_DWORD*)(v1 + 32) != 0;
  if (game_gmap_GmapClock_instance_ != 0) {
    v3 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v3 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if ((GameRoutine_143d0a0(&GameData_1a8d4b3, v3) & 1) != 0) {
    result = v2;
  }
  else {
    result = v2 | 2u;
  }
  if ((*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 304LL) & 1) == 0) {
    return (unsigned int)result | 8;
  }
  if (game_gmap_GmapClock_instance_ == 0 ||
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
          0) {
    v5 = result;
    v8[1] = &GameData_1adebe5;
    v8[0] = game_HashString(&GameData_1adebe5);
    if (game_GameModeData_instance_ != 0) {
      v6 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v8);
      if (v6 != 0) {
        v7 = *(_DWORD*)(v6 + 32);
        result = v5;
        if (v7 != 0) {
          return result;
        }
        return (unsigned int)result | 8;
      }
    }
    return v5 | 8;
  }
  return result;
}

__int64 VolunteerArgs_948b80()
{
  __int64 v0;
  __int64 v1;
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  _QWORD v10[2];

  v0 = GameRoutine_820d50(0);
  v2 = game_GameModeData_instance_ != 0 &&
       (v1 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), v0)) != 0 &&
       *(_DWORD*)(v1 + 32) != 0;
  if (game_gmap_GmapClock_instance_ != 0) {
    v3 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v3 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if ((GameRoutine_143d0a0(&GameData_1a8d4b3, v3) & 1) == 0) {
    v2 |= 2u;
  }
  if ((*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 304LL) & 1) == 0 ||
      (game_gmap_GmapClock_instance_ == 0 ||
       *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
               *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
               *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
           0) &&
          ((v10[1] = &GameData_1adebe5,
            v10[0] = game_HashString(&GameData_1adebe5),
            game_GameModeData_instance_ == 0) ||
           (v4 = game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48), v10)) == 0 ||
           *(_DWORD*)(v4 + 32) == 0)) {
    v2 |= 8u;
  }
  if (game_GameModeData_instance_ != 0) {
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v5 = v2;
    }
    else {
      v5 = v2 | 0x400000;
    }
    if ((v5 & 0x400000) == 0) {
      v5 |= 0x400000u;
      v6 = (__int64*)GameData_21c9868;
      v7 = GameData_21c9870;
      while (v6 != (__int64*)v7) {
        v8 = *v6++;
        GameRoutine_95f260((void*)v10, v8);
        if ((v10[0] & 0x800) != 0) {
          v5 &= ~0x400000u;
        }
      }
    }
  }
  else {
    return v2 | 0x400000;
  }
  return v5;
}

__int64 VolunteerArgs_958620(__int64 a1, char a2)
{
  float v2;
  unsigned __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  unsigned __int64 v17;
  unsigned __int64 v19;
  unsigned __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  unsigned __int64 v23;
  __int64 v24;
  _QWORD* v25;
  unsigned __int64 v26;
  __int64 v27;
  _QWORD* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD v33[2];

  v2 = 0.0;
  switch (a2) {
  case 1:
    v15 = game_HashString(&GameData_1abfaaf);
    if (v15 != 0 && game_GameModeData_instance_ != 0) {
      v16 = *(_QWORD**)(game_GameModeData_instance_ + 48);
      v17 = v16[2];
      if (v17 != 0 && v16[4] != 0) {
        v19 = v17 - 1;
        if ((v17 & (v17 - 1)) != 0) {
          v20 = v15;
          if (v15 >= v17) {
            v20 = v15 % v17;
          }
        }
        else {
          v20 = v19 & v15;
        }
        v25 = *(_QWORD**)(v16[1] + 8 * v20);
        if (v25 != nullptr) {
          v22 = (_QWORD*)*v25;
          if (v22 != nullptr) {
            if ((v17 & v19) == 0) {
              while (1) {
                v27 = v22[1];
                if (v15 == v27) {
                  if (v22[2] == v15) {
                    goto LABEL_82;
                  }
                }
                else if ((v27 & v19) != v20) {
                  goto LABEL_84;
                }
                v22 = (_QWORD*)*v22;
                if (v22 == nullptr) {
                  goto LABEL_84;
                }
              }
            }
            do {
              v26 = v22[1];
              if (v15 == v26) {
                if (v22[2] == v15) {
                LABEL_82:
                  v31 = v22[3];
                  if (v31 != 0) {
                    v2 = (float)*(int*)(v31 + 32);
                  }
                  goto LABEL_84;
                }
              }
              else {
                if (v26 >= v17) {
                  v26 %= v17;
                }
                if (v26 != v20) {
                  goto LABEL_84;
                }
              }
              v22 = (_QWORD*)*v22;
            } while (v22 != nullptr);
          }
        }
      }
    }
    break;
  case 2:
    v9 = game_HashString(&GameData_1ade14e);
    if (v9 != 0 && game_GameModeData_instance_ != 0) {
      v10 = *(_QWORD**)(game_GameModeData_instance_ + 48);
      v11 = v10[2];
      if (v11 != 0 && v10[4] != 0) {
        v13 = v11 - 1;
        if ((v11 & (v11 - 1)) != 0) {
          v14 = v9;
          if (v9 >= v11) {
            v14 = v9 % v11;
          }
        }
        else {
          v14 = v13 & v9;
        }
        v21 = *(_QWORD**)(v10[1] + 8 * v14);
        if (v21 != nullptr) {
          v22 = (_QWORD*)*v21;
          if (v22 != nullptr) {
            if ((v11 & v13) == 0) {
              while (1) {
                v24 = v22[1];
                if (v9 == v24) {
                  if (v22[2] == v9) {
                    goto LABEL_82;
                  }
                }
                else if ((v24 & v13) != v14) {
                  goto LABEL_84;
                }
                v22 = (_QWORD*)*v22;
                if (v22 == nullptr) {
                  goto LABEL_84;
                }
              }
            }
            do {
              v23 = v22[1];
              if (v9 == v23) {
                if (v22[2] == v9) {
                  goto LABEL_82;
                }
              }
              else {
                if (v23 >= v11) {
                  v23 %= v11;
                }
                if (v23 != v14) {
                  goto LABEL_84;
                }
              }
              v22 = (_QWORD*)*v22;
            } while (v22 != nullptr);
          }
        }
      }
    }
    break;
  case 3:
    v3 = game_HashString(&GameData_1a893f0);
    if (v3 != 0 && game_GameModeData_instance_ != 0) {
      v4 = *(_QWORD**)(game_GameModeData_instance_ + 48);
      v5 = v4[2];
      if (v5 != 0 && v4[4] != 0) {
        v7 = v5 - 1;
        if ((v5 & (v5 - 1)) != 0) {
          v8 = v3;
          if (v3 >= v5) {
            v8 = v3 % v5;
          }
        }
        else {
          v8 = v7 & v3;
        }
        v28 = *(_QWORD**)(v4[1] + 8 * v8);
        if (v28 != nullptr) {
          v22 = (_QWORD*)*v28;
          if (v22 != nullptr) {
            if ((v5 & v7) == 0) {
              while (1) {
                v30 = v22[1];
                if (v3 == v30) {
                  if (v22[2] == v3) {
                    goto LABEL_82;
                  }
                }
                else if ((v30 & v7) != v8) {
                  goto LABEL_84;
                }
                v22 = (_QWORD*)*v22;
                if (v22 == nullptr) {
                  goto LABEL_84;
                }
              }
            }
            do {
              v29 = v22[1];
              if (v3 == v29) {
                if (v22[2] == v3) {
                  goto LABEL_82;
                }
              }
              else {
                if (v29 >= v5) {
                  v29 %= v5;
                }
                if (v29 != v8) {
                  goto LABEL_84;
                }
              }
              v22 = (_QWORD*)*v22;
            } while (v22 != nullptr);
          }
        }
      }
    }
    break;
  default:
    break;
  }

LABEL_84:
  v33[1] = &GameData_1aa0aa7;
  v33[0] = game_HashString(&GameData_1aa0aa7);
  return (unsigned int)(int)(float)(GameRoutine_143f400(v33) * v2);
}

__int64 VolunteerArgs_Unknown2(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  char* v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;

  result = (*(__int64 (**)(_QWORD*))(*a1 + 24LL))(a1);
  v3 = GameData_21f3ff8;
  v4 = *(unsigned int*)(GameData_21f3ff8 + 8);
  if ((v4 & 0x80000000) != 0) {
    v5 = 0;
  }
  else {
    v5 = *(_QWORD*)(*(_QWORD*)(GameData_21ca080 + 64) + 8 * v4);
  }
  a1[5] = v5;
  v6 = *(__int64**)(v3 + 48);
  v7 = *(__int64**)(v3 + 56);
  if (v6 != v7) {
    v8 = (char*)a1[3];
    v9 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v10 = *v6;
      v11 = a1[4];
      if ((unsigned __int64)v8 < v11) {
        *(_QWORD*)v8 = v10;
        v8 += 8;
      }
      else {
        v12 = a1[2];
        v13 = &v8[-v12];
        v14 = (__int64)&v8[-v12] >> 3;
        v15 = v14 + 1;
        if ((unsigned __int64)(v14 + 1) >> 61 != 0) {
          GameRoutine_6c1f60(result);
        }
        v16 = v11 - v12;
        if (v16 >> 2 > v15) {
          v15 = v16 >> 2;
        }
        if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF8LL) {
          v17 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v17 = v15;
        }
        if (v17 != 0) {
          if (v17 >> 61 != 0) {
            GameRoutine_60a210(result);
          }
          v18 = fw_memory_HeapManager_Allocate(*v9, 8 * v17, 16, 0);
        }
        else {
          v18 = 0;
        }
        v19 = v18 + 8 * v17;
        v20 = &v8[-v12];
        v21 = (__int64)&v13[v18 + -8 * v14];
        *(_QWORD*)&v13[v18] = v10;
        v8 = &v13[v18 + 8];
        result = memcpy(v21, v12, v20);
        a1[2] = v21;
        a1[3] = v8;
        a1[4] = v19;
        if (v12 != 0) {
          v22 = 128;
          if (*(_QWORD*)(*v9 + 200LL) == 0) {
            v22 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v9 + v22);
        }
      }
      ++v6;
      a1[3] = v8;
    } while (v6 != v7);
  }
  return result;
}

__int64 VolunteerArgs_Unknown4(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  int v7;
  char v8;
  __int64 v9;
  __int64* v10;
  __int64* i;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  char v16;
  __int64 v17;
  __int64 v18;
  int v19;

  (*(void (**)(__int64))(*(_QWORD*)a1 + 88LL))(a1);
  if (GameData_2246cb0 != 0) {
    *(_QWORD*)(GameData_2246cb0 + 160) = *(_QWORD*)(GameData_2246cb0 + 152);
  }
  v2 = *(__int64**)(a1 + 16);
  v3 = *v2;
  v4 = v2[1];
  if (game_gmap_GmapClock_instance_ != 0) {
    v5 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v5 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  result = GameRoutine_957720(*(_QWORD*)(a1 + 40), v3, v4, v5);
  *(_BYTE*)(a1 + 48) = result;
  if ((_BYTE)result != 0) {
    if ((GameRoutine_9475c0(a1 + 16) & 1) != 0) {
      v7 = *(unsigned __int8*)(a1 + 48);
      if (v7 == 2) {
        v8 = 3;
        goto LABEL_12;
      }
      if (v7 == 1) {
        v8 = 2;
      LABEL_12:
        *(_BYTE*)(a1 + 48) = v8;
      }
    }
    (*(void (**)(__int64))(*(_QWORD*)a1 + 96LL))(a1);
    v9 = VolunteerArgs_141aec0(a1, v3, v4);
    GameRoutine_948f10(v9);
    GameRoutine_946ed0(&GameData_1abd562);
    v10 = *(__int64**)(a1 + 16);
    for (i = *(__int64**)(a1 + 24); v10 != i; ++v10) {
      v12 = *v10;
      if (*v10 != 0) {
        v13 = GameData_2246cb0;
        v14 = *(char*)(v12 + 2090) <= 1 ? 1 : *(char*)(v12 + 2090);
        v15 = v14 - 1;
        v16 = v15 >= 3 ? 3 : v15;
        *(_BYTE*)(v12 + 2090) = v16;
        if (v13 != 0) {
          GameRoutine_1464bd0(v13, v12);
        }
      }
    }
    v17 = *(_QWORD*)(v3 + 392);
    v18 = *(_QWORD*)(v4 + 392);
    v19 = *(unsigned __int8*)(a1 + 48);
    result = GameRoutine_196e860(0, v17, v18);
    if (v19 == 3 && result == 0) {
      result = GameRoutine_196e860(3, v17, v18);
    }
    *(_QWORD*)(a1 + 72) = result;
  }
  return result;
}

__int64 VolunteerArgs_141aec0(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 (***v12)();
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  unsigned int v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  _QWORD v21[2];
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v5 = result;
  v6 = game_RelianceCheck_unknown_;
  v7 = *(_QWORD*)game_RelianceCheck_unknown_;
  *(_DWORD*)(game_RelianceCheck_unknown_ + 24) = 0;
  *(_QWORD*)(v6 + 8) = v7;
  v23 = a2;
  v24 = 0;
  v25 = 0;
  if (a2 != 0) {
    v8 = *(_QWORD*)(a2 + 392);
    v24 = v8;
    if (v8 != 0) {
      v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v8 + 24) + 1784LL) + 272LL);
    }
    v25 = v8;
    v9 = v8 == 0;
    v21[0] = a3;
    if (a3 == 0) {
      goto LABEL_14;
    }
  }
  else {
    v9 = true;
    v21[0] = a3;
    if (a3 == 0) {
      goto LABEL_14;
    }
  }
  v10 = *(_QWORD*)(a3 + 392);
  v21[1] = v10;
  if (v10 != 0) {
    v22 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v10 + 24) + 1784LL) + 272LL);
    if (v22 == 0) {
      v9 = true;
    }
    if (!v9) {
      v11 = *(_QWORD*)(game_GameModeData_instance_ + 128);
      result = GameRoutine_8e17a0(v11, &v23, v21);
      if ((result & 0x80000000) == 0) {
        v12 = (__int64 (***)())(*(_QWORD*)(v11 + 8) +
                                56LL * (unsigned int)result);
        if (*((_BYTE*)v12 + 10) == 0) {
          return result;
        }
        goto LABEL_15;
      }
    }
  }

LABEL_14:
  v12 = &game_GameReliance_Impl_Data_vtable_ptr;
  if (GameData_2166cf2 == 0) {
    return result;
  }

LABEL_15:
  v13 = *(_QWORD*)(v5 + 40);
  v14 = *(unsigned __int8*)(v5 + 48);
  *(_DWORD*)(v5 + 52) = *((unsigned __int16*)v12 + 6);
  v15 = GameRoutine_958620(v13, v14);
  v17 = ((__int64 (*)(__int64 (***)(), _QWORD, __int64))(*v12)[2])(v12, v15, 1);
  *(_DWORD*)(v5 + 56) = *((unsigned __int16*)v12 + 6);
  v18 = *(__int64**)(GameData_21c9728 + 16);
  v19 = *(__int64**)(GameData_21c9728 + 24);
  while (v18 != v19) {
    v20 = *v18++;
    GameRoutine_12b3d60(v20, v16);
  }
  return GameRoutine_19a7f00(*(_QWORD*)(a2 + 392), *(_QWORD*)(a3 + 392), v17);
}

__attribute__((swiftcall)) void VolunteerArgs_141b050(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  char v4;
  __int64 v5;
  char v6;
  _QWORD* v7;
  const char* v8;
  char* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    __int64 v16;
    unsigned __int64 v17;
    char* v18;
    char gap24_[8];
    char v19;
    char gap33_[15];
    __int64 v20;
    char gap56_[8];
    char v21;
    char gap65_[15];
    __int64 v22;
    char v23;
    char gap89_[15];
    __int64 v24;
    char gap112_[8];
    char v25;
  } v16_;
  struct {
    char gap120_[1];
    _BYTE v26[3];
    char v27;
    char gap125_[11];
    __int64 v28;
  } v26_;

  FacilityDialogueFile_196eb20(a1 + 8, (__int64*)(a1 + 16),
                               *(_QWORD*)(a1 + 72));
  v4 = *(_BYTE*)(a1 + 48);
  v5 = SceneManager_138e5e0_alt2(*(_QWORD*)GameData_212dce8);
  if (v5 == 0) {
    *(_WORD*)a2 = 0;
    return;
  }
  v16_.v25 = 6;
  if ((v4 & 0xFE) == 2) {
    v6 = 50;
  }
  else {
    v6 = 51;
  }
  v26_.v26[2] = v6;
  v26_.v27 = 0;
  *(_WORD*)v26_.v26 = 12397;
  v7 = SceneCharacter_14020c0(v5);
  SceneTalk_1497180_alt1((unsigned __int8*)&v16_.v16, (__int64)"Serve", 5u,
                         (__int64)v7, (__int64)v26_.v26, 3u, 1);
  if ((v16_.v16 & 1) != 0) {
    v8 = v16_.v18;
  }
  else {
    v8 = (char*)&v16_.v16 + 1;
  }
  if (((unsigned int)Registration_a4da40_alt1(msg_MessageManager_instance_,
                                              v8) &
       1) == 0 ||
      ((v16_.v16 & 1) != 0 ? (v9 = v16_.v18) : (v9 = (char*)&v16_.v16 + 1),
       (Manager_a51640_alt1(msg_MessageManager_instance_, v9, v9) & 1) == 0)) {
    *(_WORD*)a2 = 0;
    if ((v16_.v23 & 1) == 0) {
      goto LABEL_22;
    }
    goto LABEL_18;
  }
  if ((v16_.v16 & 1) == 0) {
    v10 = v16_.v17;
    *a2 = v16_.v16;
    a2[1] = v10;
    a2[2] = (__int64)v16_.v18;
    if ((v16_.v23 & 1) == 0) {
      goto LABEL_22;
    }
  LABEL_18:
    if (v16_.v24 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v16_.v24);
    }
    goto LABEL_22;
  }
  fw_text_String_CopyTerminated(a2, (__int64)v16_.v18, v16_.v17);
  if ((v16_.v23 & 1) != 0) {
    goto LABEL_18;
  }
LABEL_22:
  if ((v16_.v21 & 1) != 0 && v16_.v22 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v16_.v22);
  }
  if ((v16_.v19 & 1) != 0 && v16_.v20 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v16_.v20);
  }
  if ((v16_.v16 & 1) != 0 && v16_.v18 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, (__int64)v16_.v18);
  }
  if ((v16_.v25 & 1) != 0 && v26_.v28 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v26_.v28);
  }
}

__attribute__((swiftcall)) void VolunteerArgs_Unknown13(PSEUDO_X8 x8_,
                                                        __int64 result,
                                                        __int64 a2,
                                                        unsigned int a3)
{
  _WORD* a4 = (_WORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;

  if (a2 != 0) {
    v5 = result;
    result = GameRoutine_196e120(a2, a3);
    v6 = *(_QWORD**)(v5 + 16);
    if (*(_QWORD*)(*v6 + 392LL) == result) {
      v7 = 0;
    }
    else {
      if (*(_QWORD*)(v6[1] + 392LL) != result) {
        goto LABEL_8;
      }
      v7 = 1;
    }
    result = SceneManager_138e5e0_alt1(GameData_21f4000, v7);
    if (result != 0) {
      v8 = SceneCharacter_14020c0_alt1(result);
      {
        SceneTalk_1497520("Serve", 5, v8, "m01", 3, 6);
        return;
      }
    }
  }
LABEL_8:
  *a4 = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void VolunteerArgs_Destructor(PSEUDO_X8 x8_,
                                                         __int64 result,
                                                         __int64 a2,
                                                         unsigned int a3)
{
  _WORD* a4 = (_WORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;

  if (a2 != 0) {
    v5 = result;
    result = GameRoutine_196e120(a2, a3);
    v6 = *(_QWORD**)(v5 + 8);
    if (*(_QWORD*)(*v6 + 392LL) == result) {
      v7 = 0;
    }
    else {
      if (*(_QWORD*)(v6[1] + 392LL) != result) {
        goto LABEL_8;
      }
      v7 = 1;
    }
    result = SceneManager_138e5e0_alt1(GameData_21f4000, v7);
    if (result != 0) {
      v8 = SceneCharacter_14020c0_alt1(result);
      {
        SceneTalk_1497520("Serve", 5, v8, "m01", 3, 6);
        return;
      }
    }
  }
LABEL_8:
  *a4 = 0;
  {
    result;
    return;
  }
}

__int64 VolunteerArgs_Unknown12(__int64 a1)
{
  __int64 v1;
  __int64 result;
  unsigned int v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 40);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 72LL))(a1);
  if (v1 != 0) {
    v4 = result;
    result = GameRoutine_90dc20(game_GameModeData_instance_ + 152,
                                *(_QWORD*)(v1 + 112));
    if ((result & 0x80000000) == 0) {
      v5 = *(_QWORD*)(*(_QWORD*)(game_GameModeData_instance_ + 160) + 8LL);
      if (v5 != 0) {
        v6 = v5 + 32LL * (unsigned int)result;
        *(_DWORD*)(a1 + 60) = *(_DWORD*)(v6 + 4);
        result = GameRoutine_90c6c0(v6, v4);
        *(_DWORD*)(a1 + 64) = *(_DWORD*)(v6 + 4);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
