#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD*
CmdbtlPartyNatives_e9a800_alt1(_QWORD*,
                               __int64) __asm__("CmdbtlPartyNatives_e9a800");
_QWORD* GameRoutine_7a8220(_QWORD* result, _QWORD*);
_WORD* game_UnitItemList_EachItem(_WORD* result, __int64);
__attribute__((swiftcall)) void CmdBtlCameraCutBase_e82a10(PSEUDO_X8, _QWORD,
                                                           _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_eb68e0(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void snd_playAt_ff5f0(PSEUDO_X8, _QWORD, _QWORD,
                                                 _QWORD, _QWORD, _QWORD, _QWORD,
                                                 _QWORD, double, float);
__int64 Alignment_56b600(_QWORD);
__int64 AutoPlay_f818f0(_BYTE*);
__int64 CmdBtlDispos_f35d20(__int64, __int64, __int64, __int64);
__int64 CmdBtlParty_e734e0(_QWORD);
__int64 CmdBtlUnit_e7c6f0(float);
__int64 CmdBtlUnit_e7d750_alt1(_QWORD) __asm__("CmdBtlUnit_e7d750");
__int64 CmdbtlPartyNatives_e9a800(_QWORD, _QWORD);
__int64 ControlCreator_13633c0(void);
__int64 GameRoutine_1006bf0(__int64 result);
__int64 GameRoutine_100b200(__int64 result);
__int64 GameRoutine_1042c40(_QWORD, _QWORD);
__int64 GameRoutine_1570b30(_QWORD, _QWORD);
__int64 GameRoutine_1591240(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1625030(void);
__int64 GameRoutine_17ce980(__int64 result, __int64, char, __int64);
__int64 GameRoutine_18fac00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155ea30(_QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 Manager_e9a6e0(__int64);
__int64 UnitItem_6e8d00(unsigned __int16*, __int64);
__int64 Unit_6c8300(_QWORD*, char);
__int64 Unit_6ca760(_QWORD, _QWORD);
__int64 Unit_6cb080(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_120dd60();
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HasSkill_alt1(_QWORD, _QWORD) __asm__("game_HasSkill");
__int64 game_HashString(__int64 result);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_Unit_GetJob(__int64);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_cmdbtl_Manager_UnitRelocationImpl(_QWORD*, __int64);
__int64 game_gameui_1590260(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            long double);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__n128 GameRoutine_1007270(__int64);
__n128 GameRoutine_10073a0(__int64);
__n128 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
bool UnitItem_6e8e50(unsigned __int16*, __int64);
bool Unit_6c9ab0(_QWORD*, _DWORD*, unsigned __int16*);
char* GameRoutine_67ed20(_QWORD*);
char* GameRoutine_a4dbe0(__int64, unsigned __int8*, char);
extern _DWORD* game_g_shared_system_skills_ptr_alt1 __asm__(
    "game_g_shared_system_skills_ptr");
extern _QWORD GameData_1b01768[4];
extern _QWORD GameData_1b018e8[4];
extern _QWORD GameData_1b91b20[3];
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_1ad7123;
extern _UNKNOWN GameData_1af5ec9;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_22167e1;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_21a6120;
extern __int16* GameData_212cf08[9];
extern __int64 (*GameData_1fe7bc8[])();
extern __int64 (*GameData_1fe7c48[])();
extern __int64 (*GameData_1fe7cc8[])();
extern __int64 (*GameData_1fec818[])();
extern __int64 (*GameData_1fece38[])();
extern __int64 (*game_cmdbtl_CmdBtlUnit_vtable[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212d1e0[2];
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212ea58;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212f528[3];
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21ca310;
extern __int64 GameData_21ed090;
extern __int64 GameData_21f4cc0;
extern __int64 GameData_2203490;
extern __int64 GameData_22167e8;
extern __int64 GameData_22167f0;
extern __int64 GameData_22167f8;
extern __int64 GameData_2216800;
extern __int64 GameData_2216820;
extern __int64 GameData_2219098;
extern __int64 GameData_22190a0;
extern __int64 GameData_22190a8;
extern __int64 GameData_22190c0;
extern __int64 GameData_22190c8;
extern __int64 GameData_225ca88;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern char GameData_1a9f09e;
extern char GameData_22167e0;
extern char GameData_2216858;
float CmdBtlUnit_e7d750(_QWORD*);
void* game_97b2f0(__int64);
void Sound_f904d0();
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_6c1f60(void);
void __attribute__((noreturn)) GameRoutine_740050(void);
void __attribute__((noreturn)) GameRoutine_8123d0();
void __attribute__((noreturn))
GameRoutine_8123d0_alt1(void) __asm__("GameRoutine_8123d0");
void __attribute__((noreturn)) GameRoutine_e66f60();
void __attribute__((noreturn)) String_60a250(const char*);
void game_cmdbtl_e62ed0();
__int64 game_cmdbtl_e63210();
char* game_cmdbtl_e743f0(__int64 a1);
__int64 game_cmdbtl_e76460(__int64 a1, __int64* a2, __int64 a3, __int16 a4);
bool game_cmdbtl_e76590(__int64 a1, __int64 a2, _DWORD* a3, int a4,
                        unsigned __int16* a5);
bool game_cmdbtl_e766a0(unsigned int* a1, _QWORD* a2, unsigned __int16* a3,
                        unsigned int a4);
bool game_cmdbtl_e76770(unsigned int* a1, __int64 a2, unsigned __int16* a3);
__int64 game_cmdbtl_e76940(__int64 a1, __int64* a2);
bool game_cmdbtl_e76a50(__int64 a1, __int64 a2, unsigned __int16* a3);
__int64 game_cmdbtl_e76c00(__int64 a1, __int64* a2);
void game_cmdbtl_e790e0(__int64 a1, int a2, unsigned __int64 a3);
__attribute__((swiftcall)) void game_cmdbtl_e83e40(PSEUDO_X8 x8_, __int64 a1,
                                                   __int64* a2, __n128 result);
void game_cmdbtl_ea5e20(__int64 a1, __int64* a2, __int64* a3,
                        unsigned __int64 a4);
__attribute__((swiftcall)) void
game_cmdbtl_ed9ba0(PSEUDO_X8 x8_, __int64 unused_int0, __int64 a1, __int64 a2);
__n128 game_cmdbtl_f32fb0(__int64 a1);
__n128 game_cmdbtl_f33400();
__int64 game_cmdbtl_f37c70(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
void game_cmdbtl_f381c0();
__int64 game_cmdbtl_1006570(__int64 a1, unsigned __int8* a2);
__int64 game_cmdbtl_10422e0(__int64 result);
__int64 game_cmdbtl_1042560_alt1(__int64 a1) __asm__("game_cmdbtl_1042560");
__int64 game_cmdbtl_1042a60(__int64 result);
__int64 game_cmdbtl_18f9360_alt1(__int64 a1) __asm__("game_cmdbtl_18f9360");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
_QWORD*
game_UnitPool_Find_6ead60_alt1(__int64*,
                               int*) __asm__("game_UnitPool_Find_6ead60");
__attribute__((swiftcall)) void game_eb68e0(PSEUDO_X8, int);
__int64*
LayoutAccessor_155fbe0_alt1(__int64*,
                            const char*) __asm__("LayoutAccessor_155fbe0");
__int64 Alignment_56b600_alt1(__int64 result) __asm__("Alignment_56b600");
__int64
ControlCreator_13633c0_alt1(__int64 result) __asm__("ControlCreator_13633c0");
__int64 GameRoutine_1570b30_alt1(__int64*,
                                 _QWORD*) __asm__("GameRoutine_1570b30");
__int64 GameRoutine_18fac00_alt1(__int64 result, _QWORD*, __int64***, __int64,
                                 char) __asm__("GameRoutine_18fac00");
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64 LayoutAccessor_155ea30_alt1(__int64*) __asm__("LayoutAccessor_155ea30");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
__int64 game_Unit_GetParam_alt1(__int64) __asm__("game_Unit_GetParam");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_playAt_ff5f0_alt1(__int64, __int64, __int64, __int64, unsigned int,
                              unsigned int, int, float,
                              float) __asm__("snd_playAt_ff5f0");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindAlignment_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindAlignment");
char* GameRoutine_60a020_alt1(char*, const char*) __asm__("GameRoutine_60a020");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void CmdBtlParty_e734e0_alt1(__int64) __asm__("CmdBtlParty_e734e0");
void GameRoutine_1042c40_alt1(__int64, int) __asm__("GameRoutine_1042c40");
void GameRoutine_1591240_alt1(__int64*, char, char,
                              __int64**) __asm__("GameRoutine_1591240");
void GameRoutine_1625030_alt1(__int64) __asm__("GameRoutine_1625030");
void GameRoutine_7a8220_alt1(__int64*, _QWORD*) __asm__("GameRoutine_7a8220");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_6c1f60_alt1() __asm__("GameRoutine_6c1f60");
void __attribute__((noreturn))
GameRoutine_740050_alt1() __asm__("GameRoutine_740050");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void game_gameui_1590260_alt1(__int64, unsigned int, unsigned int, char,
                              unsigned int) __asm__("game_gameui_1590260");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
void game_cmdbtl_1042560(__int64 a1);
void game_cmdbtl_18f9360(__int64 a1);

void game_cmdbtl_e62ed0()
{
  __int64 v0;
  int v1;
  unsigned __int64 v2[2];
  _QWORD v3[2];

  if ((*(_BYTE*)(GameData_21f4cc0 + 12) & 1) == 0) {
    if ((GameData_2216858 & 1) == 0) {
      GameRoutine_8123d0();
    }
    if ((GameData_2216820 & 0x100) != 0) {
      game_120dd60();
      v3[1] = &GameData_1af5ec9;
      v3[0] = game_HashString((__int64)&GameData_1af5ec9);
      v2[1] = (unsigned __int64)&GameData_1ad7123;
      v2[0] = game_HashString((__int64)&GameData_1ad7123);
      if (game_GameModeData_instance_ != 0 &&
          (v0 = game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48), v2)) != 0) {
        v1 = *(_DWORD*)(v0 + 32);
      }
      else {
        v1 = 0;
      }
      game_VariableManager_SetFlag((__int64)v3, v1);
    }
  }
}

__int64 game_cmdbtl_e63210()
{

#pragma clang fp contract(off)
  __int64 v0;
  unsigned __int64 v1;
  __int128 v2;
  __int64 v3;
  int v4;
  int v5;

  v0 = GameData_22190a0;
  if ((*(_BYTE*)(GameData_22190a0 + 15) & 1) == 0) {
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_8;
    }
    v1 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v1 + 172) == *(float*)(v1 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v1 + 160) + 16LL))(v1 + 160);
    }
    else {
      v2 = *(_OWORD*)(v1 + 208);
    }
    if (*((float*)&v2 + 3) != 0x1.0000000000000p+0f ||
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v1 + 160) + 16LL))(
                        v1 + 160, *((float*)&v2 + 3)))
                .n128_f32[3] != 0x1.0000000000000p+0f) {
    LABEL_8:
      *(_BYTE*)(v0 + 15) = 1;
    }
  }
  GameRoutine_100b200(GameData_2219098);
  Manager_e9a6e0(GameData_2203490);
  v3 = GameData_22190c0;
  GameRoutine_1006bf0(GameData_22190c0);
  if ((*(_BYTE*)(v3 + 11) & 1) == 0 && game_ProcGameSkipView_instance_ != 0 &&
      (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) -
              1 <=
          2) {
    v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v4 & 8) != 0) {
      v5 = 2;
    }
    else {
      v5 = 3;
    }
    if ((v5 & v4) == 0) {
      GameRoutine_10073a0(v3);
    }
  }
  Sound_f904d0();
  return AutoPlay_f818f0((_BYTE*)GameData_22190a8);
}

char* game_cmdbtl_e743f0(__int64 a1)
{

#pragma clang fp contract(off)
  char* v1;
  int v2;
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int8* v5;
  int v6;
  int v7;
  unsigned __int8* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  long double v15;
  __int64 v16;
  char* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int8* v22;
  int v23;

  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0();
  }
  v2 = *(_DWORD*)(a1 + 8);
  if (v2 != 1) {
    if (v2 == 0) {
      v3 = GameData_22167e8;
      if ((GameData_22167e0 & 1) == 0) {
        v3 = (unsigned __int64)(unsigned __int8)GameData_22167e0 >> 1;
      }
      if (v3 != 0) {
        v4 = *msg_MessageManager_instance__ptr[0];
        if ((GameData_22167e0 & 1) != 0) {
          v5 = (unsigned __int8*)GameData_22167f0;
        }
        else {
          v5 = (unsigned __int8*)&GameData_22167e1;
        }
        return GameRoutine_a4dbe0(v4, v5, 0);
      }
    }
    goto LABEL_28;
  }
  if (GameData_2216800 != GameData_22167f8) {
    v6 =
        -1 - 1431655765 *
                 ((unsigned __int64)(GameData_2216800 - GameData_22167f8) >> 3);
    v7 = *(_DWORD*)(*(_QWORD*)GameData_212f528[0] + 12LL);
    if (v6 >= v7) {
      v6 = *(_DWORD*)(*(_QWORD*)GameData_212f528[0] + 12LL);
    }
    if (v7 < 0) {
      v6 = 0;
    }
    v8 = (unsigned __int8*)(GameData_22167f8 + 24LL * v6);
    v9 = *v8;
    v10 = *((_QWORD*)v8 + 1);
    if ((v9 & 1) == 0) {
      v10 = v9 >> 1;
    }
    if (v10 != 0) {
      if ((v9 & 1) != 0) {
        v5 = *((unsigned __int8**)v8 + 2);
      }
      else {
        v5 = v8 + 1;
      }
      v4 = *msg_MessageManager_instance__ptr[0];
      return GameRoutine_a4dbe0(v4, v5, 0);
    }
  }
  v1 = *(char**)(a1 + 88);
  if (v1 == nullptr) {
  LABEL_28:
    v18 = *(__int64**)(a1 + 40);
    if (*(__int64**)(a1 + 48) == v18) {
      return &GameData_1a9f09e;
    }
    v19 = *v18;
    v20 = v18[1];
    if (v20 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v19 != 0 && (v21 = Unit_6c8300(*(_QWORD**)(v19 + 16), 0)) != 0) {
      v22 = *(unsigned __int8**)(v21 + 32);
      if (v22 != nullptr) {
        v1 = GameRoutine_a4dbe0(*msg_MessageManager_instance__ptr[0], v22, 0);
        v23 = 0;
        if (v20 == 0) {
          goto LABEL_39;
        }
      }
      else {
        v23 = 0;
        v1 = &GameData_1a9f09e;
        if (v20 == 0) {
          goto LABEL_39;
        }
      }
    }
    else {
      v23 = 1;
      if (v20 == 0) {
        goto LABEL_39;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      std___1___shared_weak_count___release_weak(v20);
    }
  LABEL_39:
    if (v23 == 0) {
      return v1;
    }
    return &GameData_1a9f09e;
  }
  v11 = *(_QWORD*)(a1 + 80);
  v12 = a1;
  v13 = *(_QWORD*)(a1 + 88);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                            memory_order_relaxed);
  v14 = std___1___shared_weak_count_lock(v13);
  *(__n128*)&v15 = std___1___shared_weak_count___release_weak(v1);
  if (v14 == 0) {
    a1 = v12;
    goto LABEL_28;
  }
  if (v11 == 0) {
    a1 = v12;
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      goto LABEL_28;
    }
    goto LABEL_49;
  }
  v16 = *(_QWORD*)(v11 + 16);
  if (*(_BYTE*)(v16 + 2136) != 0) {
    v17 = (char*)game_97b2f0(v16 + 2104);
  }
  else {
    v17 = GameRoutine_67ed20(*(_QWORD**)(v16 + 392));
  }
  v1 = v17;
  if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
  LABEL_49:
    (*(void (**)(__int64, long double))(*(_QWORD*)v14 + 16LL))(v14, v15);
    std___1___shared_weak_count___release_weak(v14);
    a1 = v12;
    if (v11 != 0) {
      return v1;
    }
    goto LABEL_28;
  }
  return v1;
}

__int64 game_cmdbtl_e76460(__int64 a1, __int64* a2, __int64 a3, __int16 a4)
{
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _WORD* v10;
  __int64 i;
  char v12;
  _QWORD v14[6];
  char v15;
  __int16 v16;

  v16 = a4;
  if ((*(_BYTE*)(*GameData_212dec0[0] + 13) & 1) != 0) {
    goto LABEL_4;
  }
  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0();
  }
  if ((GameData_2216820 & 8) != 0) {
    v12 = 0;
  }
  else {
  LABEL_4:
    v7 = *a2;
    v15 = 0;
    v8 = *(_QWORD*)(v7 + 16);
    v9 = (_QWORD*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 48,
                                                 16, 0);
    v9[2] = a2;
    v9[3] = a3;
    v14[4] = v9;
    *v9 = GameData_1fe7bc8;
    v9[1] = &v15;
    v9[4] = &v16;
    v9[5] = a1;
    game_UnitItemList_EachItem((_WORD*)(v8 + 828), (__int64)v14);
    v10 = (_WORD*)(v8 + 876);
    for (i = 24; i != 0; --i) {
      if (*v10 != 0) {
        (*(void (**)(_QWORD*, _WORD*))(*v9 + 48LL))(v9, v10);
      }
      v10 += 4;
    }
    (*(void (**)(_QWORD*))(*v9 + 40LL))(v9);
    v12 = v15;
  }
  return v12 & 1;
}

bool game_cmdbtl_e76590(__int64 a1, __int64 a2, _DWORD* a3, int a4,
                        unsigned __int16* a5)
{
  __int64 v8;

  if ((*(_BYTE*)(*GameData_212dec0[0] + 13) & 1) == 0) {
    if ((GameData_2216858 & 1) == 0) {
      GameRoutine_8123d0();
    }
    if ((GameData_2216820 & 8) != 0) {
      return false;
    }
  }
  if (!Unit_6c9ab0(*(_QWORD**)(*(_QWORD*)a2 + 16LL), a3, a5)) {
    return false;
  }
  v8 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a3 & 0xFFF));
  return (a4 & (*(unsigned __int16*)(v8 + 248) ^ 0xFFFF)) == 0 &&
         ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v8 + 104)) &
           1) == 0 ||
          *(_QWORD*)(v8 + 576) != 0 || *(_WORD*)(v8 + 136) == 0 ||
          *(_BYTE*)(*(_QWORD*)(v8 + 24) + 1112LL) != 1 ||
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                8LL * *a5) +
                     192LL) == v8);
}

bool game_cmdbtl_e766a0(unsigned int* a1, _QWORD* a2, unsigned __int16* a3,
                        unsigned int a4)
{
  bool v4;
  bool v5;
  __int64 v6;
  _QWORD v8[2];

  if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
    v4 = false;
  }
  else {
    if ((GameData_2216858 & 1) == 0) {
      GameRoutine_8123d0();
    }
    v4 = (GameData_2216820 & 8) != 0;
  }
  v5 = false;
  if (a4 <= 2 && !v4) {
    v6 = a2[1];
    v8[0] = *a2;
    v8[1] = v6;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
      v5 = game_cmdbtl_e76770(a1, (__int64)v8, a3);
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
    }
    else {
      return game_cmdbtl_e76770(a1, (__int64)v8, a3);
    }
  }
  return v5;
}

bool game_cmdbtl_e76770(unsigned int* a1, __int64 a2, unsigned __int16* a3)
{

#pragma clang fp contract(off)
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  int v13;
  __int64 v14;
  long double v15;
  bool v16;
  bool v17;
  signed int v18;

  v5 = GameData_212dec0[0];
  if ((*(_BYTE*)(*GameData_212dec0[0] + 13) & 1) == 0) {
    if ((GameData_2216858 & 1) == 0) {
      goto LABEL_33;
    }
    if ((GameData_2216820 & 8) != 0) {
      return false;
    }
  }
  if ((UnitItem_6e8d00(a3, *(_QWORD*)(*(_QWORD*)a2 + 16LL)) & 1) == 0) {
    return false;
  }
  v6 = a1[2];
  v7 = (unsigned int)v6 > 2 ? 3LL : GameData_1b91b20[v6];
  v8 = GameData_2203490 + (v7 << 7);
  v9 = *(_QWORD*)(v8 + 760);
  if (v9 == 0) {
    return false;
  }
  v10 = *(_QWORD*)(v8 + 760);
  v11 = GameData_212c878[0];
  v12 = *(_QWORD*)(v8 + 752);
  v13 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                       8LL * *a3) +
                            73LL);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                            memory_order_relaxed);
  v14 = std___1___shared_weak_count_lock(v10);
  *(__n128*)&v15 = std___1___shared_weak_count___release_weak(v9);
  if (v14 == 0) {
    return false;
  }
  v16 = v12 == 0 || *(_QWORD*)(v12 + 16) == 0;
  if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v16) {
      return false;
    }
  }
  else {
    (*(void (**)(__int64, long double))(*(_QWORD*)v14 + 16LL))(v14, v15);
    std___1___shared_weak_count___release_weak(v14);
    if (v16) {
      return false;
    }
  }
  v17 = v13 == 7 || v13 == 1;
  if (!v17 ||
      (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v11 + 64) + 8LL * *a3) + 336LL) &
       0x40) != 0) {
    return false;
  }
  if (v13 == 1) {
    return true;
  }
  if (v13 == 2) {
    if ((*(_BYTE*)(*v5 + 13) & 1) != 0) {
      goto LABEL_28;
    }
    if ((GameData_2216858 & 1) != 0) {
      if ((GameData_2216820 & 8) == 0) {
      LABEL_28:
        v18 = a1[5] + a1[4];
        if (v18 <= 1) {
          v18 = 1;
        }
        return (int)a1[3] < v18;
      }
      return false;
    }
  LABEL_33:
    GameRoutine_8123d0();
  }
  return false;
}

__int64 game_cmdbtl_e76940(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  _WORD* v4;
  __int64 i;
  __int64 v6;
  char v7;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  char v11;

  if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) == 0) {
    if ((GameData_2216858 & 1) == 0) {
      GameRoutine_8123d0();
    }
    if ((GameData_2216820 & 8) != 0) {
      v7 = 0;
      return v7 & 1;
    }
  }
  v2 = *a2;
  v11 = 0;
  v3 = *(_QWORD*)(v2 + 16);
  v9_.v9[2] = a2;
  v9_.v9[3] = a1;
  v9_.v9[0] = GameData_1fe7c48;
  v9_.v9[1] = &v11;
  v9_.v10 = v9_.v9;
  game_UnitItemList_EachItem((_WORD*)(v3 + 828), (__int64)v9_.v9);
  v4 = (_WORD*)(v3 + 876);
  for (i = 24; i != 0; --i) {
    if (*v4 != 0) {
      if (v9_.v10 == nullptr) {
        GameRoutine_60a310();
      }
      (*(void (**)(_QWORD*, _WORD*))(*v9_.v10 + 48LL))(v9_.v10, v4);
    }
    v4 += 4;
  }
  if (v9_.v10 == v9_.v9) {
    v6 = 32;
    goto LABEL_13;
  }
  if (v9_.v10 != nullptr) {
    v6 = 40;
  LABEL_13:
    (*(void (**)(__int64))(*v9_.v10 + v6))((__int64)v9_.v10);
  }
  v7 = v11;
  return v7 & 1;
}

bool game_cmdbtl_e76a50(__int64 a1, __int64 a2, unsigned __int16* a3)
{

#pragma clang fp contract(off)
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  long double v12;
  bool v13;
  int v16;

  v5 = GameData_212dec0[0];
  if ((*(_BYTE*)(*GameData_212dec0[0] + 13) & 1) == 0) {
    if ((GameData_2216858 & 1) == 0) {
      goto LABEL_31;
    }
    if ((GameData_2216820 & 8) != 0) {
      return false;
    }
  }
  if (!UnitItem_6e8e50(a3, *(_QWORD*)(*(_QWORD*)a2 + 16LL))) {
    return false;
  }
  v6 = *(_QWORD*)(a1 + 88);
  if (v6 == 0) {
    return false;
  }
  v7 = *(_QWORD*)(a1 + 88);
  v8 = GameData_212c878[0];
  v9 = *(_QWORD*)(a1 + 80);
  v10 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                       8LL * *a3) +
                            73LL);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                            memory_order_relaxed);
  v11 = std___1___shared_weak_count_lock(v7);
  *(__n128*)&v12 = std___1___shared_weak_count___release_weak(v6);
  if (v11 == 0) {
    return false;
  }
  v13 = v9 == 0 || *(_QWORD*)(v9 + 16) == 0;
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v13) {
      return false;
    }
  }
  else {
    (*(void (**)(__int64, long double))(*(_QWORD*)v11 + 16LL))(v11, v12);
    std___1___shared_weak_count___release_weak(v11);
    if (v13) {
      return false;
    }
  }
  if (v10 > 0xA || ((1 << v10) & 0x75C) == 0) {
    return false;
  }
  if (v10 != 2 ||
      (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8LL * *a3) + 336LL) &
       0x40) != 0) {
    return false;
  }
  if ((*(_BYTE*)(*v5 + 13) & 1) == 0) {
    if ((GameData_2216858 & 1) == 0) {
    LABEL_31:
      GameRoutine_8123d0();
    }
    if ((GameData_2216820 & 8) != 0) {
      return false;
    }
  }
  v16 = *(_DWORD*)(a1 + 20) + *(_DWORD*)(a1 + 16);
  if (v16 <= 1) {
    v16 = 1;
  }
  return *(_DWORD*)(a1 + 12) < v16;
}

__int64 game_cmdbtl_e76c00(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  _WORD* v4;
  __int64 i;
  __int64 v6;
  char v7;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  char v11;

  if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) == 0) {
    if ((GameData_2216858 & 1) == 0) {
      GameRoutine_8123d0();
    }
    if ((GameData_2216820 & 8) != 0) {
      v7 = 0;
      return v7 & 1;
    }
  }
  v2 = *a2;
  v11 = 0;
  v3 = *(_QWORD*)(v2 + 16);
  v9_.v9[2] = a2;
  v9_.v9[3] = a1;
  v9_.v9[0] = GameData_1fe7cc8;
  v9_.v9[1] = &v11;
  v9_.v10 = v9_.v9;
  game_UnitItemList_EachItem((_WORD*)(v3 + 828), (__int64)v9_.v9);
  v4 = (_WORD*)(v3 + 876);
  for (i = 24; i != 0; --i) {
    if (*v4 != 0) {
      if (v9_.v10 == nullptr) {
        GameRoutine_60a310();
      }
      (*(void (**)(_QWORD*, _WORD*))(*v9_.v10 + 48LL))(v9_.v10, v4);
    }
    v4 += 4;
  }
  if (v9_.v10 == v9_.v9) {
    v6 = 32;
    goto LABEL_13;
  }
  if (v9_.v10 != nullptr) {
    v6 = 40;
  LABEL_13:
    (*(void (**)(__int64))(*v9_.v10 + v6))((__int64)v9_.v10);
  }
  v7 = v11;
  return v7 & 1;
}

void game_cmdbtl_e790e0(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _BOOL4 v34;
  __int64 v35;
  int v36;
  struct {
    _QWORD v37[2];
    __int64 v38;
  } v37_;

  *(_DWORD*)(a1 + 8) = a2;
  *(_QWORD*)(a1 + 16) = a3;
  *(_QWORD*)(a1 + 24) = 0;
  *(_DWORD*)(a1 + 32) = 0;
  *(_BYTE*)(a1 + 48) = 0;
  *(_BYTE*)(a1 + 64) = 0;
  *(_BYTE*)(a1 + 80) = 0;
  *(_BYTE*)(a1 + 172) = 0;
  *(_WORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)a1 = game_cmdbtl_CmdBtlUnit_vtable;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_BYTE*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 188) = 0;
  *(_QWORD*)(a1 + 196) = 0;
  *(_DWORD*)(a1 + 444) = 0;
  *(_BYTE*)(a1 + 448) = 0;
  *(_BYTE*)(a1 + 464) = 0;
  *(_BYTE*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_BYTE*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_BYTE*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_DWORD*)(a1 + 180) = 0;
  *(_DWORD*)(a1 + 184) = 16842753;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  v4 = *(_QWORD*)GameData_212f528[0];
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_DWORD*)(a1 + 408) = 0;
  v5 = *(_QWORD**)(v4 + 128);
  if (v5 == nullptr) {
    v6 = nullptr;
  LABEL_14:
    v9 = (__int64*)(a1 + 320);
    *(_QWORD*)(a1 + 312) = v6;
    *(_QWORD*)(a1 + 320) = 0;
    goto LABEL_15;
  }
  v6 = v5;
  while (1) {
    v7 = v6[4];
    if (a3 >= v7) {
      if (v7 >= a3) {
        break;
      }
      ++v6;
    }
    v6 = (_QWORD*)*v6;
    if (v6 == nullptr) {
      goto LABEL_14;
    }
  }
  while (1) {
    while (1) {
      v8 = v5[4];
      if (a3 >= v8) {
        break;
      }
      v5 = (_QWORD*)*v5;
      if (v5 == nullptr) {
        goto LABEL_12;
      }
    }
    if (v8 >= a3) {
      break;
    }
    v5 = (_QWORD*)v5[1];
    if (v5 == nullptr) {
    LABEL_12:
      String_60a250("map::at:  key not found");
    }
  }
  v6 = (_QWORD*)v5[5];
  v25 = v5[6];
  if (v25 == 0) {
    goto LABEL_14;
  }
  v9 = (__int64*)(a1 + 320);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                            memory_order_relaxed);
  v26 = *(_QWORD*)(a1 + 320);
  *(_QWORD*)(a1 + 312) = v6;
  *(_QWORD*)(a1 + 320) = v25;
  if (v26 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v26);
  }
LABEL_15:
  if (*(_WORD*)(*(_QWORD*)(a1 + 16) + 1952LL) != 0) {
    *(_QWORD*)(a1 + 400) =
        *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                   8LL * *(unsigned __int16*)(*(_QWORD*)(a1 + 16) + 1952LL));
  }
  v11 = *(_QWORD*)(a1 + 416);
  v10 = *(_QWORD*)(a1 + 424);
  if (v11 != v10) {
    v12 = *(_QWORD*)(a1 + 424);
    v13 = fw_memory_g_heap_manager_ptr;
    do {
      v14 = *(_BYTE*)(v12 - 24);
      v12 -= 24;
      if ((v14 & 1) != 0) {
        v15 = *(_QWORD*)(v10 - 8);
        if (v15 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
            v16 = 128;
          }
          else {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v16, v15);
        }
      }
      v10 = v12;
    } while (v12 != v11);
  }
  v17 = *(_QWORD*)(a1 + 320);
  *(_QWORD*)(a1 + 424) = v11;
  if (v17 == 0) {
  LABEL_68:
    v36 = *(__int16*)(*(_QWORD*)(a1 + 16) + 492LL);
    goto LABEL_69;
  }
  v18 = *(_QWORD*)(a1 + 312);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                            memory_order_relaxed);
  v19 = std___1___shared_weak_count_lock_alt1(v17);
  std___1___shared_weak_count___release_weak_alt2(v17);
  if (v19 == 0) {
  LABEL_42:
    v24 = *v9;
    if (*v9 == 0) {
      goto LABEL_68;
    }
    goto LABEL_43;
  }
  if (v18 == 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      std___1___shared_weak_count___release_weak_alt2(v19);
      v24 = *v9;
      if (*v9 == 0) {
        goto LABEL_68;
      }
      goto LABEL_43;
    }
    goto LABEL_42;
  }
  v20 = *(_DWORD*)(*(_QWORD*)v18 + 76LL);
  if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak_alt2(v19);
  }
  if ((v20 & 0x20) == 0) {
    goto LABEL_42;
  }
  v21 = fw_memory_g_heap_manager_ptr;
  v22 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       32, 16, 0);
  *(_BYTE*)(v22 + 24) = 0;
  v37_.v37[0] = 33;
  v37_.v37[1] = 24;
  v37_.v38 = v22;
  *(_QWORD*)v22 = 0x83E3B782E3A482E3LL;
  *(_QWORD*)(v22 + 8) = 0xE3BC83E39E83E3A5LL;
  *(_QWORD*)(v22 + 16) = 0xB48FE6AF94E6AB83LL;
  GameRoutine_7a8220_alt1((__int64*)(a1 + 416), v37_.v37);
  if ((v37_.v37[0] & 1) == 0 || v37_.v38 == 0) {
    goto LABEL_42;
  }
  v23 = 128;
  if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) == 0) {
    v23 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v21 + v23, v37_.v38);
  v24 = *v9;
  if (*v9 == 0) {
    goto LABEL_68;
  }
LABEL_43:
  v27 = std___1___shared_weak_count_lock_alt1(v24);
  if (v27 != 0) {
    v28 = *(_QWORD*)(a1 + 312);
    if (v28 != 0 && *(_DWORD*)(*(_QWORD*)v28 + 64LL) == 0) {
      if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
        v29 = 0;
        LODWORD(v18) = 1;
      }
      else {
        if ((GameData_2216858 & 1) == 0) {
          GameRoutine_8123d0();
        }
        v29 = 0;
        LODWORD(v18) = (GameData_2216820 & 8) == 0;
      }
    }
    else {
      v29 = 1;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v30 = v27;
      (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
      std___1___shared_weak_count___release_weak_alt2(v30);
    }
    if ((((unsigned int)v18 | v29) & 1) == 0) {
      HIBYTE(v37_.v37[0]) = 0;
      LOBYTE(v37_.v37[0]) = 12;
      *(_DWORD*)((char*)v37_.v37 + 1) = -408908826;
      *(_WORD*)((char*)v37_.v37 + 5) = -18046;
      GameRoutine_7a8220_alt1((__int64*)(a1 + 416), v37_.v37);
      if ((v37_.v37[0] & 1) != 0 && v37_.v38 != 0) {
        v31 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v31 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v37_.v38);
      }
    }
  }
  if (*v9 == 0) {
    goto LABEL_68;
  }
  v32 = std___1___shared_weak_count_lock_alt1(*v9);
  if (v32 == 0) {
    goto LABEL_68;
  }
  v33 = *(_QWORD*)(a1 + 312);
  v34 = v33 == 0 || (*(_BYTE*)(*(_QWORD*)v33 + 76LL) & 8) == 0;
  if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v34) {
      goto LABEL_68;
    }
  }
  else {
    v35 = v32;
    (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
    std___1___shared_weak_count___release_weak_alt2(v35);
    if (v34) {
      goto LABEL_68;
    }
  }
  v36 = 0;
LABEL_69:
  *(_DWORD*)(a1 + 196) = v36;
}

__attribute__((swiftcall)) void game_cmdbtl_e83e40(PSEUDO_X8 x8_, __int64 a1,
                                                   __int64* a2, __n128 result)
{

#pragma clang fp contract(off)
  __n128* a3 = (__n128*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  float v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD** v17;
  _QWORD** v18;
  float v19;
  unsigned int v20;
  _QWORD* v21;
  float v22;
  unsigned __int64 v23;
  __int64 v24;
  _QWORD v25[2];
  float32x4_t v26;

  v5 = a2[1];
  if (v5 != 0) {
    v8 = a1;
    v9 = std___1___shared_weak_count_lock(v5);
    if (v9 != 0) {
      v10 = (_QWORD*)*a2;
      if (*a2 != 0) {
        v11 = a2[1];
        v25[0] = v10;
        v25[1] = v11;
        if (v11 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                    memory_order_relaxed);
          CmdBtlCameraCutBase_e82a10((void*)(&v26), v8, v25,
                                     *(unsigned __int8*)(v8 + 128));
          std___1___shared_weak_count___release_weak(v11);
        }
        else {
          CmdBtlCameraCutBase_e82a10((void*)(&v26), v8, v25,
                                     *(unsigned __int8*)(v8 + 128));
        }
        v12 = CmdBtlUnit_e7d750(v10);
        v13 = *(_QWORD*)(v10[2] + 440LL);
        if (v13 != 0 &&
            (unsigned __int64)(v14 = *(unsigned __int8*)(v13 + 16)) <= 3) {
          v15 = GameData_1b018e8[v14];
        }
        else {
          v15 = 392;
        }
        v16 = *GameData_212ea58 + 672 +
              ((__int64)*(int*)(*GameData_212ea58 + 672 + v15) << 7);
        v17 = *(_QWORD***)(v16 + 40);
        v18 = *(_QWORD***)(v16 + 48);
        if (v17 == v18) {
          v22 = 0x0.0p+0f;
        }
        else {
          v19 = 0x0.0p+0f;
          v20 = 0;
          do {
            v21 = *v17;
            v17 += 2;
            v19 = v19 + CmdBtlUnit_e7d750(v21);
            ++v20;
          } while (v17 != v18);
          v22 = v19 / (float)v20;
        }
        if (vabds_f32(v12, v22) >= 0x1.0000000000000p-1f) {
          v22 = v12;
        }
        if (v22 > 0x1.8000000000000p+1f) {
          v22 = 0x1.8000000000000p+1f;
        }
        LODWORD(v23) = 0;
        *((float*)&v23 + 1) = v22;
        result = vaddq_f32(v26, COERCE_AS(float32x4_t, v23));
        *a3 = result;
      LABEL_25:
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          {
            std___1___shared_weak_count___release_weak(v9);
            return;
          }
        }
        {
          result;
          return;
        }
      }
    }
  }
  else {
    v9 = 0;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v24 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v24;
    __cxa_guard_release(&GameData_21a6130);
  }
  *a3 = COERCE_AS(__n128, GameData_21a6120);
  if (v9 != 0) {
    goto LABEL_25;
  }
  {
    result;
    return;
  }
}

void game_cmdbtl_ea5e20(__int64 a1, __int64* a2, __int64* a3,
                        unsigned __int64 a4)
{
  __int64 v4;
  __int64* v5;
  __int64* v8;
  __int64* v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64* v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;

  v4 = *(_QWORD*)(a1 + 16);
  v5 = *(__int64**)a1;
  v8 = a2;
  if (a4 <= (v4 - *(_QWORD*)a1) >> 4) {
    v12 = *(__int64**)(a1 + 8);
    if (a4 <= ((char*)v12 - (char*)v5) >> 4) {
      if (a2 != a3) {
        do {
          v18 = *v8;
          v17 = v8[1];
          if (v17 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                                      memory_order_relaxed);
          }
          v19 = v5[1];
          *v5 = v18;
          v5[1] = v17;
          if (v19 != 0) {
            std___1___shared_weak_count___release_weak(v19);
          }
          v8 += 2;
          v5 += 2;
        } while (v8 != a3);
        v12 = *(__int64**)(a1 + 8);
      }
      for (; v12 != v5; v12 -= 2) {
        v29 = *(v12 - 1);
        if (v29 != 0) {
          std___1___shared_weak_count___release_weak(v29);
        }
      }
      *(_QWORD*)(a1 + 8) = v5;
    }
    else {
      v13 = (__int64*)((char*)a2 + ((char*)v12 - (char*)v5));
      if (v12 != v5) {
        do {
          v15 = *v8;
          v14 = v8[1];
          if (v14 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                                      memory_order_relaxed);
          }
          v16 = v5[1];
          *v5 = v15;
          v5[1] = v14;
          if (v16 != 0) {
            std___1___shared_weak_count___release_weak(v16);
          }
          v8 += 2;
          v5 += 2;
        } while (v8 != v13);
        v12 = *(__int64**)(a1 + 8);
      }
      v26 = v12;
      if (v13 != a3) {
        v26 = v12;
        v27 = v12;
        do {
          *v27 = *v13;
          v28 = v13[1];
          v27[1] = v28;
          if (v28 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 16), 1u,
                                      memory_order_relaxed);
          }
          v13 += 2;
          v27 += 2;
          v26 += 2;
        } while (v13 != a3);
      }
      *(_QWORD*)(a1 + 8) = v26;
    }
  }
  else {
    if (v5 != nullptr) {
      v10 = *(__int64**)(a1 + 8);
      if (v5 == v10) {
        goto LABEL_24;
      }
      do {
        v11 = *(v10 - 1);
        if (v11 != 0) {
          std___1___shared_weak_count___release_weak(v11);
        }
        v10 -= 2;
      } while (v10 != v5);
      v20 = *(__int64**)a1;
      *(_QWORD*)(a1 + 8) = v5;
      if (v20 != nullptr) {
      LABEL_24:
        v21 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v21,
                                      (_QWORD)(v5));
      }
      v4 = 0;
      *(_QWORD*)(a1 + 8) = 0;
      *(_QWORD*)(a1 + 16) = 0;
      *(_QWORD*)a1 = 0;
    }
    if (a4 >> 60 != 0) {
      goto LABEL_55;
    }
    v22 = v4 >> 3;
    if (v4 >> 3 <= a4) {
      v22 = a4;
    }
    v23 = (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFF0LL ? 0xFFFFFFFFFFFFFFFLL
                                                       : v22;
    if (v23 >> 60 != 0) {
    LABEL_55:
      GameRoutine_e66f60();
    }
    v24 = (_QWORD*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                  16 * v23, 16, 0);
    *(_QWORD*)a1 = v24;
    *(_QWORD*)(a1 + 8) = v24;
    for (*(_QWORD*)(a1 + 16) = &v24[2 * v23]; v8 != a3; v24 += 2) {
      v25 = v8[1];
      *v24 = *v8;
      v24[1] = v25;
      if (v25 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                                  memory_order_relaxed);
      }
      v8 += 2;
    }
    *(_QWORD*)(a1 + 8) = v24;
  }
}

__attribute__((swiftcall)) void

game_cmdbtl_ed9ba0(PSEUDO_X8 x8_, __int64 unused_int0, __int64 a1, __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  char v6;
  int v7;
  int v8;
  __int64* v9;
  _QWORD* v10;
  __int64 result;
  __int64 v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int64 v19;
    __int64 v20;
  } v19_;
  struct {
    _QWORD v21[4];
    _QWORD* v22;
  } v21_;
  __int64 v23;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0(),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v6 = GameData_2216820;
  v7 = *(unsigned __int8*)(*GameData_212dec0[0] + 12);
  v8 = v7 ^ 1;
  if ((v7 & 1) != 0) {
    if ((GameData_2216820 & 0x40) == 0) {
      goto LABEL_22;
    }
  LABEL_21:
    v8 |= 2u;
    goto LABEL_22;
  }
  v9 = GameData_212ea58;
  v21_.v21[0] = GameData_1fec818;
  v21_.v21[1] = &v23;
  v23 = a2;
  v19_.v19 = 0;
  v19_.v20 = 0;
  v21_.v22 = v21_.v21;
  v10 = (_QWORD*)*GameData_212ea58;
  v21_.v21[2] = &v19_.v19;
  CmdbtlPartyNatives_e9a800_alt1(v10, (__int64)v21_.v21),
      result = COERCE_AS(__typeof__(result),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  result = (__int64)v21_.v22;
  if (v21_.v22 == v21_.v21) {
    v12 = 32;
    goto LABEL_9;
  }
  if (v21_.v22 != nullptr) {
    v12 = 40;
  LABEL_9:
    result = (*(__int64 (**)(__int64))(*v21_.v22 + v12))((__int64)v21_.v22);
  }
  v13 = (v6 & 0x40) != 0;
  if (v19_.v19 != 0) {
    v14 = *(_QWORD*)(*(_QWORD*)(v19_.v19 + 16) + 440LL);
    if (v14 != 0 &&
        (unsigned __int64)(v15 = *(unsigned __int8*)(v14 + 16)) <= 3) {
      v16 = GameData_1b018e8[v15];
    }
    else {
      v16 = 392;
    }
    if (*(_DWORD*)(*v9 + v16 + 672) == 0) {
      v13 = true;
    }
  }
  v17 = v19_.v20;
  if (v19_.v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19_.v20 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    result = std___1___shared_weak_count___release_weak_alt2(v17);
  }
  if (v13) {
    goto LABEL_21;
  }
LABEL_22:
  *(_QWORD*)a3 = a1;
  *(_QWORD*)(a3 + 8) = a2;
  *(_QWORD*)(a3 + 16) = 0;
  *(_DWORD*)(a3 + 24) = v8;
  if (a2 != 0) {
    v18 = *(unsigned __int16*)(a2 + 1952);
    if (*(_WORD*)(a2 + 1952) != 0) {
      v18 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v18);
    }
    *(_QWORD*)(a3 + 16) = v18;
  }
  {
    result;
    return;
  }
}

__n128 game_cmdbtl_f32fb0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v1;
  __int64 v2;
  _QWORD* v3;
  __n128 result;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64* v10;
    __int64 v11;
  } v10_;
  struct {
    __int64 (**v12)();
    __int64* v13;
    __int64** v14;
    char gap40_[8];
    __int64 (***v15)();
  } v12_;
  __int64 v16;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v1 = GameData_212ea58;
  v2 = *(_QWORD*)(a1 + 152);
  v10_.v10 = nullptr;
  v10_.v11 = 0;
  v12_.v15 = &v12_.v12;
  v3 = (_QWORD*)*GameData_212ea58;
  v16 = v2;
  v12_.v12 = GameData_1fec818;
  v12_.v13 = &v16;
  v12_.v14 = &v10_.v10;
  CmdbtlPartyNatives_e9a800_alt1(v3, (__int64)&v12_.v12),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v12_.v15 == &v12_.v12) {
    v5 = 4;
  }
  else {
    if (v12_.v15 == nullptr) {
      goto LABEL_6;
    }
    v5 = 5;
  }
  ((__int64 (*)(__int64))(*v12_.v15)[v5])((__int64)v12_.v15),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_6:
  v6 = v10_.v10;
  if (v10_.v10 != nullptr) {
    v7 = (_QWORD*)*v1;
    v8 = v10_.v11;
    if (v10_.v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10_.v11 + 16), 1u,
                                memory_order_relaxed);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                memory_order_relaxed);
    }
    LOWORD(v12_.v12) = 0;
    v12_.v13 = v6;
    v12_.v14 = (__int64**)v8;
    game_cmdbtl_Manager_UnitRelocationImpl(v7, (__int64)&v12_.v12),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v12_.v14 != nullptr) {
      result = std___1___shared_weak_count___release_weak(v12_.v14);
    }
    if (v8 != 0) {
      result = std___1___shared_weak_count___release_weak(v8);
    }
  }
  v9 = v10_.v11;
  if (v10_.v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10_.v11 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v9 + 16LL))(
        v9, *(long double*)&result),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak(v9);
  }
  return result;
}

__n128 game_cmdbtl_f33400()
{
  _QWORD* v0;
  __int64 v1;
  struct {
    _QWORD v3[4];
    _QWORD* v4;
  } v3_;

  v3_.v4 = v3_.v3;
  v0 = (_QWORD*)*GameData_212ea58;
  v3_.v3[0] = GameData_1fece38;
  CmdbtlPartyNatives_e9a800_alt1(v0, (__int64)v3_.v3);
  if (v3_.v4 == v3_.v3) {
    v1 = 32;
    goto LABEL_5;
  }
  if (v3_.v4 != nullptr) {
    v1 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v3_.v4 + v1))((__int64)v3_.v4);
  }
  return GameRoutine_1007270(GameData_22190c0);
}

__int64 game_cmdbtl_f37c70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64* v5;

  if ((*(_BYTE*)(GameData_21f4cc0 + 32) & 1) == 0) {
    GameRoutine_8123d0();
  }
  v4 = *(unsigned int*)(GameData_21f4cc0 + 28);
  v5 = GameData_212ea58;
  *(_BYTE*)(GameData_21f4cc0 + 32) = 0;
  *(_DWORD*)(*v5 + 616) = 0;
  *(_DWORD*)(GameData_22190c0 + 24) = 0;
  return CmdBtlDispos_f35d20(GameData_22190c8, v4, a3, a4);
}

void game_cmdbtl_f381c0()
{
  __int64* v0;
  __int64* v1;
  __int64* v2;
  int v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;

  v0 = *(__int64**)(*GameData_212ea58 + 840);
  v1 = *(__int64**)(*GameData_212ea58 + 848);
  if (v0 != v1) {
    v2 = game_map_MapRandom_instance__ptr[0];
    do {
      nn_os_LockMutex(&game_g_random_mutex);
      v3 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2);
      v4 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2 + 4);
      v5 = *(_DWORD*)v2 ^ (*(_DWORD*)v2 << 11);
      *(_DWORD*)v2 = *((_DWORD*)v2 + 1);
      *((_DWORD*)v2 + 1) = v3;
      v6 = (v5 >> 8) ^ (v4 >> 19) ^ v5 ^ v4;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2) = v4;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2 + 4) = v6;
      nn_os_UnlockMutex(&game_g_random_mutex);
      nn_os_LockMutex(&game_g_random_mutex);
      v7 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2);
      v8 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2 + 4);
      v9 = *(_DWORD*)v2 ^ (*(_DWORD*)v2 << 11);
      *(_DWORD*)v2 = *((_DWORD*)v2 + 1);
      *((_DWORD*)v2 + 1) = v7;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2) = v8;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2 + 4) =
          (v9 >> 8) ^ (v8 >> 19) ^ v9 ^ v8;
      nn_os_UnlockMutex(&game_g_random_mutex);
      v10 = *v0;
      if (*(_BYTE*)(*v0 + 189) == 1) {
        *(_BYTE*)(v10 + 189) = 0;
        *(_BYTE*)(v10 + 184) = 1;
        CmdBtlUnit_e7c6f0((float)(fminf(fmaxf((float)(unsigned __int16)v6 /
                                                  0x1.fffe000000000p+15f,
                                              0.0f),
                                        1.0f) *
                                  0x1.99999a0000000p-3f) +
                          0x1.99999a0000000p-3f);
      }
      v0 += 2;
    } while (v0 != v1);
  }
}

__int64 game_cmdbtl_1006570(__int64 a1, unsigned __int8* a2)
{
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  int v9;
  int v11;

  game_Unit_GetJob(a1);
  v4 = *(char*)(*(_QWORD*)(a1 + 392) + *a2 + 597LL);
  v5 = game_Unit_GetJob(a1);
  LODWORD(v6) = *a2;
  v7 = v5;
  if ((_DWORD)v6 == 10 &&
      (v11 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x228LL) +
                        game_g_shared_system_skills_ptr + 4) &
             0xFFF,
       v8 = game_HasSkill((_QWORD*)(a1 + 1744), (unsigned int*)&v11), v6 = *a2,
       (v8 & 1) != 0)) {
    v9 = *(char*)(v7 + v6 + 398);
    if (v9 <= 1) {
      v9 = 1;
    }
  }
  else {
    v9 = *(char*)(v7 + (unsigned int)v6 + 398);
  }
  return (v4 + v9 + 1) & (unsigned int)~((v4 + v9 + 1) >> 31);
}

__int64 game_cmdbtl_10422e0(__int64 result)
{
  __int64 v1;
  __int16 v2;
  __int64 v3;
  __int64 v4;
  char v5;

  if ((*(_DWORD*)(result + 160) & 0xFFF) != 0) {
    v1 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                    8LL * (*(_DWORD*)(result + 160) & 0xFFF));
    v2 = *(_WORD*)(v1 + 754);
    if ((v2 & 1) != 0 && (*(_BYTE*)(GameData_22190c0 + 11) & 1) == 0) {
      v3 = *(_QWORD*)(result + 152);
      v5 = v3 != 0 && (v4 = *(_QWORD*)(v3 + 440)) != 0 &&
           *(_BYTE*)(v4 + 16) == 1;
      result = GameData_21ed090;
      if (GameData_21ed090 != 0 && (v2 & 2) != 0) {
        return GameRoutine_17ce980(GameData_21ed090, v1, v5, v3);
      }
    }
  }
  return result;
}

void game_cmdbtl_1042560(__int64 a1)
{

#pragma clang fp contract(off)
  float32x4_t* v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _DWORD* v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  const char* v19;
  const char* v20;
  _QWORD* v21;
  float32x4_t v22;
  __int64 v23;
  float32x4_t* v24;
  float v25;
  unsigned __int64 v26;
  float32x4_t* v27;
  unsigned __int64 v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  float32x4_t v34;
  float32x4_t* v35;
  struct {
    char v36[16];
    char* v37;
  } v36_;
  struct {
    __int64 v38;
    __int64 v39;
  } v38_;
  struct {
    float32x4_t* v40;
    __int64 v41;
    unsigned __int32 v42;
  } v40_;
  struct {
    _QWORD v43[2];
    float32x4_t** v44;
    char gap120_[8];
    _QWORD* v45;
  } v43_;

  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v1 = *(float32x4_t**)(a1 + 152);
  v3 = GameData_212ea58;
  v43_.v43[0] = GameData_1fec818;
  v43_.v43[1] = &v40_.v40;
  v38_.v38 = 0;
  v43_.v45 = v43_.v43;
  v43_.v44 = (float32x4_t**)&v38_.v38;
  v38_.v39 = 0;
  v40_.v40 = v1;
  CmdbtlPartyNatives_e9a800_alt1((_QWORD*)*GameData_212ea58, (__int64)v43_.v43),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v43_.v45 == v43_.v43) {
    v4 = 32;
  }
  else {
    if (v43_.v45 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v43_.v45 + v4))((__int64)v43_.v45),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_6:
  if (v38_.v38 == 0) {
    goto LABEL_67;
  }
  v5 = *(_QWORD*)(*(_QWORD*)((char*)((__int128*)0x10LL) + v38_.v38) + 440LL);
  if (v5 != 0 && (unsigned __int64)(v6 = *(unsigned __int8*)(v5 + 16)) <= 3) {
    v7 = GameData_1b01768[v6];
  }
  else {
    v7 = 3;
  }
  v8 = (_DWORD*)(*v3 + (v7 << 7) + 672);
  v9 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                  8LL * (*(_DWORD*)(a1 + 160) & 0xFFF));
  if (*(_WORD*)(v9 + 256) != 0) {
    v10 = **(__int16**)(v9 + 264);
    if (v10 >= 1) {
      v11 = *(unsigned __int8*)(v9 + 250);
      if (v11 == 10) {
        if (v1 != nullptr) {
          LOBYTE(v43_.v43[0]) = 0;
          v10 = (int)(game_Unit_GetParam_alt1((__int64)v1) * v10 + 99) / 100,
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
          goto LABEL_19;
        }
      }
      else if (v11 == 9) {
        goto LABEL_19;
      }
    }
  }
  v10 = 0;
LABEL_19:
  v12 = v8[3];
  v13 = v8[5] + v8[4];
  v14 = v12 + v10;
  if (v13 <= 1) {
    v13 = 1;
  }
  if (v13 >= v14) {
    v15 = v12 + v10;
  }
  else {
    v15 = v13;
  }
  if (v14 < 1) {
    v16 = 1;
  }
  else {
    v16 = v15;
  }
  if (v13 >= (unsigned int)v16) {
    v13 = v16;
  }
  if (v16 < 0) {
    v13 = 0;
  }
  v8[3] = v13;
  if (v13 != v12) {
    CmdBtlParty_e734e0_alt1((__int64)v8),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v17 = v8[3];
    v18 = v17 - v12;
    if (v17 != v12) {
      *(_WORD*)v36_.v36 = 0;
      if (v18 >= 1) {
        v19 = "SE_ACT_LD_Hit_Heal_Large";
        if ((unsigned int)v18 < 0x28) {
          v19 = "SE_ACT_LD_Hit_Heal_Middle";
        }
        if ((unsigned int)v18 >= 0x14) {
          v20 = v19;
        }
        else {
          v20 = "SE_ACT_LD_Hit_Heal_Small";
        }
        GameRoutine_60a020_alt1(v36_.v36, v20),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v21 = (_QWORD*)*v3;
      v35 = v1;
      v40_.v40 = nullptr;
      v40_.v41 = 0;
      v43_.v43[0] = GameData_1fec818;
      v43_.v43[1] = &v35;
      v43_.v45 = v43_.v43;
      v43_.v44 = &v40_.v40;
      CmdbtlPartyNatives_e9a800_alt1(v21, (__int64)v43_.v43),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v43_.v45 == v43_.v43) {
        v23 = 32;
      }
      else {
        if (v43_.v45 == nullptr) {
        LABEL_45:
          v24 = v40_.v40;
          if (v40_.v40 != nullptr) {
            v25 = CmdBtlUnit_e7d750(v40_.v40),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
            v26 = LANES128(v40_.v40[13]).n128_u64[0];
            if (v26 != 0) {
              v27 = (float32x4_t*)(*(_QWORD*)(v26 + 8) + 304LL);
            }
            else {
              v27 = v40_.v40 + 7;
            }
            LODWORD(v28) = 0;
            *((float*)&v28 + 1) = v25;
            v22 = vaddq_f32(COERCE_AS(float32x4_t, v28), *v27);
          }
          v29 = v40_.v41;
          if (v40_.v41 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v40_.v41 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v34 = v22;
            (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29),
                v22 = COERCE_AS(__typeof__(v22),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            std___1___shared_weak_count___release_weak_alt2(v29),
                v22 = COERCE_AS(__typeof__(v22),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            v22 = v34;
          }
          if (v24 == nullptr) {
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                      memory_order_acquire) &
                 1) == 0 &&
                __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
              v33 = *((_QWORD*)GameData_212c540 + 1);
              *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
              *((_QWORD*)&GameData_21a6120 + 1) = v33;
              __cxa_guard_release_alt1((__int64)&GameData_21a6130),
                  v22 = COERCE_AS(__typeof__(v22),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            v22 = COERCE_AS(float32x4_t, GameData_21a6120);
          }
          v40_.v41 = LANES128(v22).n128_u64[0];
          if ((v36_.v36[0] & 1) != 0) {
            v30 = v36_.v37;
          }
          else {
            v30 = &v36_.v36[1];
          }
          v40_.v42 = LANES128(v22).n128_u32[2];
          v40_.v40 = (float32x4_t*)(GameData_212d1e0[0] + 2);
          if (v30 != nullptr) {
            snd_Fade_Fade_10c830_alt1((__int64)v43_.v43, 0x0.0p+0f),
                v22 = COERCE_AS(__typeof__(v22),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            snd_playAt_ff5f0_alt1((__int64)v30, (__int64)v30,
                                  (__int64)&v40_.v40, (__int64)v43_.v43, 0,
                                  0x10001u, 0, 0x0.0p+0f,
                                  0x1.0000000000000p+0f),
                v22 = COERCE_AS(__typeof__(v22),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            snd_Fade_Destroy_Fade_alt1(v43_.v43),
                v22 = COERCE_AS(__typeof__(v22),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          GameRoutine_1042c40_alt1((__int64)v1, v18),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          if ((v36_.v36[0] & 1) != 0 && v36_.v37 != nullptr) {
            v31 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v31 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v31,
                (__int64)v36_.v37),
                v22 = COERCE_AS(__typeof__(v22),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          goto LABEL_67;
        }
        v23 = 40;
      }
      (*(void (**)(__int64))(*v43_.v45 + v23))((__int64)v43_.v45),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
      goto LABEL_45;
    }
  }
LABEL_67:
  v32 = v38_.v39;
  if (v38_.v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v38_.v39 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak_alt2(v32),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
}

__int64 game_cmdbtl_1042a60(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;

  v1 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                  8LL * (*(_DWORD*)(result + 160) & 0xFFF));
  v2 = *(unsigned __int16*)(v1 + 512);
  if (*(_WORD*)(v1 + 512) != 0) {
    v3 = *(_QWORD*)(result + 152);
    v4 = *(unsigned __int8*)(v1 + 250);
    if (v4 == 19) {
      nn_os_LockMutex(&game_g_random_mutex);
      v8 = game_map_MapRandom_instance__ptr[0];
      v9 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((__int128*)0x10LL) + 8);
      v10 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
      v11 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((__int128*)0x10LL)) ^
            (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                        (unsigned __int64)((__int128*)0x10LL))
             << 11);
      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                 (unsigned __int64)((__int128*)0x10LL)) =
          *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL) + 4);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v8 + 4) = v9;
      v12 = (v11 >> 8) ^ (v10 >> 19) ^ v11 ^ v10;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v8 + 8) = v10;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v8 + 12) = v12;
      v13 = v12 & 0x7FFFFFFF;
      nn_os_UnlockMutex(&game_g_random_mutex);
      v14 = *(_QWORD*)(*(_QWORD*)(v1 + 520) + 16LL * (v13 % (unsigned int)v2) +
                       8);
      if (v14 != 0) {
        LODWORD(v14) = *(_WORD*)(v14 + 16) & 0xFFF;
      }
      v17 = v14;
      return Unit_6ca760(v3, &v17);
    }
    else {
      v5 = 8;
      if (v4 == 31) {
        do {
          v6 = *(_QWORD*)(*(_QWORD*)(v1 + 520) + v5);
          if (v6 != 0) {
            LODWORD(v6) = *(_WORD*)(v6 + 16) & 0xFFF;
          }
          v16 = v6;
          result = Unit_6cb080(v3, &v16);
          --v2;
          v5 += 16;
        } while (v2 != 0);
      }
      else {
        do {
          v7 = *(_QWORD*)(*(_QWORD*)(v1 + 520) + v5);
          if (v7 != 0) {
            LODWORD(v7) = *(_WORD*)(v7 + 16) & 0xFFF;
          }
          v15 = v7;
          result = Unit_6ca760(v3, &v15);
          --v2;
          v5 += 16;
        } while (v2 != 0);
      }
    }
  }
  return result;
}

void game_cmdbtl_18f9360(__int64 a1)
{
  int v2;
  int v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  int v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64* v14;
  int v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  unsigned int v45;
  int i;
  __int64** v47;
  __int64 v48;
  bool v49;
  char* v50;
  char* v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  char* v55;
  char* v56;
  __int64* v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64* v60;
  char* v61;
  __int64* v62;
  __int64* v63;
  __int64* v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64* v70;
  bool v71;
  bool v72;
  __int64* v73;
  _QWORD* v74;
  __int64 v75;
  char v76;
  char* v77;
  __int64* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  unsigned int v90;
  unsigned __int64 v91;
  char* v92;
  __int64 v93;
  __int64* v94;
  unsigned __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  unsigned __int64 v101;
  __int64* v102;
  __int64 v103;
  unsigned int v104;
  unsigned int v105;
  __int64 v106;
  _QWORD* v107;
  __int64* v108;
  __int64 v109;
  __int64 v110;
  unsigned int v111;
  unsigned int v112;
  char v113;
  __int64 v114;
  __int64* v115;
  int v116;
  __int64 v117;
  int v118;
  __int64 v119;
  struct {
    int v120;
    char gap52_[4];
    __int64 v121;
  } v120_;
  struct {
    __int64* v122;
    __int64* v123;
    _BYTE v124[13];
    char v125;
    char gap126_[2];
    __int64 v126;
  } v122_;
  __int64* v127;
  struct {
    char* v128;
    _QWORD* v129;
    unsigned __int64 v130;
  } v128_;
  int v131;
  __int64 v132[2];

  if ((*(_QWORD*)(*(_QWORD*)GameData_212c6a0[0] + 328LL) & 4LL) != 0) {
    v2 = 1;
  }
  else {
    v2 = *(_DWORD*)(*(_QWORD*)GameData_212c6a0[0] + 308LL);
  }
  game_eb68e0((void*)((__int64)&v120_.v120), v2);
  v3 = v120_.v120;
  v114 = a1;
  v4 = (__int64*)(a1 + 848);
  v113 = LayoutAccessor_155ea30_alt1(v4);
  v5 = *(_QWORD*)(GameData_21ca310 + 56);
  v128_.v129 = nullptr;
  v128_.v130 = 0;
  v128_.v128 = nullptr;
  v6 = v5 + 552960;
  LODWORD(v122_.v122) = 16;
  v7 = game_UnitPool_GetFirst_alt1((int*)&v122_.v122);
  v115 = v4;
  v117 = v6;
  if (v7 == 0) {
    v14 = nullptr;
    v12 = 0;
    goto LABEL_68;
  }
  v8 = *(_QWORD*)(v7 + 432);
  v9 = v7;
  if (v8 == 0) {
    v8 = *(_QWORD*)(v7 + 440);
    if (v8 != 0) {
      v10 = *(unsigned __int8*)(v8 + 16);
      if (v10 <= 8) {
        v111 = v10 - 3;
        while (1) {
          if (v111 == 0) {
            v8 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
            if (v8 != 0) {
              break;
            }
          }
          if (++v111 == 6) {
            goto LABEL_8;
          }
        }
      }
      else {
      LABEL_8:
        v8 = 0;
      }
    }
  }
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = nullptr;
  if (v3 >= 5) {
    v15 = 5;
  }
  else {
    v15 = v3;
  }
  v118 = v15;
  while (1) {
  LABEL_14:
    v16 = v8;
    if (v11 < v118) {
      v17 = v128_.v129;
      if ((unsigned __int64)v128_.v129 >= v128_.v130) {
        v19 = (__int64)v128_.v128;
        v116 = v11;
        v20 = (char*)((char*)v128_.v129 - v128_.v128);
        v21 = ((char*)v128_.v129 - v128_.v128) >> 3;
        v22 = v21 + 1;
        if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
          goto LABEL_193;
        }
        v23 = v128_.v130 - (_QWORD)v128_.v128;
        v24 = v13;
        v25 = v12;
        if ((__int64)(v128_.v130 - (_QWORD)v128_.v128) >> 2 > v22) {
          v22 = v23 >> 2;
        }
        if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL) {
          v26 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v26 = v22;
        }
        if (v26 != 0) {
          if (v26 >> 61 != 0) {
            goto LABEL_194;
          }
          v27 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v26, 16, 0);
        }
        else {
          v27 = 0;
        }
        v28 = v27 + 8 * v26;
        v29 = (unsigned __int64)v17 - v19;
        v30 = (__int64)&v20[v27 + -8 * v21];
        *(_QWORD*)&v20[v27] = v9;
        v18 = (__int64)&v20[v27 + 8];
        memcpy_alt1(v30, v19, v29);
        v128_.v128 = (char*)v30;
        v128_.v130 = v28;
        if (v19 != 0) {
          v31 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v31 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v19);
        }
        v12 = v25;
        v6 = v117;
        v13 = v24;
        v11 = v116;
      }
      else {
        *v128_.v129 = v9;
        v18 = (__int64)(v17 + 1);
      }
      v128_.v129 = (_QWORD*)v18;
    }
    if ((unsigned __int64)v14 >= v13) {
      v34 = (char*)v14 - v12;
      v35 = ((__int64)v14 - v12) >> 3;
      v36 = v35 + 1;
      if ((unsigned __int64)(v35 + 1) >> 61 != 0) {
      LABEL_193:
        GameRoutine_6c1f60_alt1();
      }
      if ((__int64)(v13 - v12) >> 2 > v36) {
        v36 = (__int64)(v13 - v12) >> 2;
      }
      if (v13 - v12 >= 0x7FFFFFFFFFFFFFF8LL) {
        v37 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v37 = v36;
      }
      if (v37 != 0) {
        if (v37 >> 61 != 0) {
        LABEL_194:
          GameRoutine_60a210_alt1();
        }
        v38 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v37, 16, 0);
      }
      else {
        v38 = 0;
      }
      v13 = v38 + 8 * v37;
      v39 = (unsigned __int64)v14 - v12;
      v40 = (__int64)&v34[v38 + -8 * v35];
      *(_QWORD*)&v34[v38] = v9;
      v14 = (__int64*)&v34[v38 + 8];
      memcpy_alt1(v40, v12, v39);
      if (v12 != 0) {
        v41 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v41 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v41, v12);
      }
      v12 = v40;
      v32 = *(_QWORD*)(v9 + 424);
      v33 = *(_QWORD*)(v9 + 432);
      if (v33 != 0) {
      LABEL_35:
        *(_QWORD*)(v33 + 424) = v32;
        if (v32 != 0) {
          goto LABEL_54;
        }
        goto LABEL_55;
      }
    }
    else {
      *v14++ = v9;
      v32 = *(_QWORD*)(v9 + 424);
      v33 = *(_QWORD*)(v9 + 432);
      if (v33 != 0) {
        goto LABEL_35;
      }
    }
    *(_QWORD*)(v6 + 3144) = v32;
    if (v32 != 0) {
      *(_QWORD*)(v32 + 432) = 0;
      v32 = *(_QWORD*)(v9 + 424);
      if (v32 != 0) {
      LABEL_54:
        *(_QWORD*)(v32 + 432) = *(_QWORD*)(v9 + 432);
        goto LABEL_57;
      }
    }
  LABEL_55:
    v42 = *(_QWORD*)(v9 + 432);
    *(_QWORD*)(v6 + 3136) = v42;
    if (v42 != 0) {
      *(_QWORD*)(v42 + 424) = 0;
    }
  LABEL_57:
    *(_QWORD*)(v9 + 424) = 0;
    *(_QWORD*)(v9 + 432) = 0;
    if (v16 == 0) {
      break;
    }
    v8 = *(_QWORD*)(v16 + 432);
    ++v11;
    v9 = v16;
    if (v8 == 0) {
      v43 = *(_QWORD*)(v16 + 440);
      v9 = v16;
      if (v43 != 0) {
        v44 = *(unsigned __int8*)(v43 + 16);
        v8 = 0;
        v9 = v16;
        if (v44 <= 8) {
          v45 = v44 - 3;
          while (1) {
            if (v45 == 0) {
              v8 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v8 != 0) {
                break;
              }
            }
            if (++v45 == 6) {
              v8 = 0;
              v9 = v16;
              goto LABEL_14;
            }
          }
          v9 = v16;
        }
      }
    }
  }
  v4 = v115;
LABEL_68:
  v127 = (__int64*)&v128_.v128;
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v122_.v122 = (__int64*)&v127;
    if ((__int64*)v12 != v14) {
      GameRoutine_18fac00_alt1(v12, v14, (__int64***)&v122_.v122,
                               (2 * __clz(((__int64)v14 - v12) >> 3)) ^ 0x7E,
                               1);
    }
  }
  if ((__int64*)v12 != v14) {
    i = 0;
    v47 = (__int64**)v12;
    v119 = v12;
    v48 = GameData_21ca310;
    while (1) {
      v52 = *v47;
      if (*(unsigned __int8*)(v6 + 3152) >= 0xAu) {
        v53 = 0;
      }
      else {
        v53 = *(_QWORD*)(v48 + 56) + 24LL * *(unsigned __int8*)(v6 + 3152) +
              556000;
      }
      v52[55] = v53;
      v54 = *(_QWORD*)(v6 + 3144);
      if (v54 != 0) {
        *(_QWORD*)(v54 + 432) = v52;
        v52[53] = v54;
      }
      else {
        *(_QWORD*)(v6 + 3136) = v52;
      }
      *(_QWORD*)(v6 + 3144) = v52;
      v55 = (char*)*v127;
      v56 = (char*)v127[1];
      if ((char*)*v127 != v56) {
        v57 = *v47;
        v58 = v56 - v55 - 8;
        if ((~(_BYTE)v58 & 0x18) != 0) {
          v59 = ((unsigned __int8)((unsigned int)v58 >> 3) + 1) & 3;
          do {
            v60 = *(__int64**)v55;
            v55 += 8;
            if (v57 == v60) {
              goto LABEL_98;
            }
          } while (--v59 != 0);
        }
        if (v58 >= 0x18) {
          while (v57 != *(__int64**)v55 && v57 != *((__int64**)v55 + 1) &&
                 v57 != *((__int64**)v55 + 2) && v57 != *((__int64**)v55 + 3)) {
            v55 += 32;
            if (v55 == v56) {
              goto LABEL_79;
            }
          }
        LABEL_98:
          v61 = game_util_Format_alt1("L_Unit%02d", i);
          v62 = LayoutAccessor_155fbe0_alt1(v4, v61);
          v63 = *v47;
          v64 = v62;
          v122_.v122 = v63;
          if (v63 != nullptr) {
            v63 = (__int64*)v63[49];
          }
          v122_.v123 = v63;
          *(_QWORD*)v122_.v124 = 257;
          *(_QWORD*)&v122_.v124[5] = 0;
          v122_.v126 = 0;
          v122_.v125 = 6;
          v65 = *v47;
          if (*v47 == nullptr || (v66 = *(_QWORD*)(v114 + 1088),
                                  v67 = *(_QWORD*)(v114 + 1096), v66 == v67)) {
            v71 = false;
          }
          else {
            v68 = v66 + 8;
            do {
              v69 = *(_QWORD*)(v68 - 8);
              v131 = 16;
              v132[0] = v69;
              v70 = game_UnitPool_Find_6ead60_alt1(v132, &v131);
              v71 = v65 == v70;
              v72 = v65 == v70 || v68 == v67;
              v68 += 8;
            } while (!v72);
          }
          v122_.v124[2] = v71;
          v73 = *v47;
          v74 = *v47 + 218;
          LODWORD(v132[0]) = *game_g_shared_system_skills_ptr_alt1 & 0xFFF;
          v12 = v119;
          if ((game_HasSkill(v74, (unsigned int*)v132) & 1) != 0) {
            v75 = v73[55];
            if (v75 != 0) {
              v76 = *(_BYTE*)(v75 + 16);
            }
            else {
              v76 = 9;
            }
            v4 = v115;
            v49 = ((1 << v76) & 0xF1) != 0;
          }
          else {
            v4 = v115;
            v49 = false;
          }
          v122_.v124[3] = v49;
          *(_DWORD*)&v122_.v124[4] = 0;
          LODWORD(v122_.v126) = 0;
          *(_WORD*)&v122_.v124[8] = 1;
          v122_.v125 = 6;
          GameRoutine_1570b30_alt1(v64, &v122_.v122);
          LayoutAccessor_155e830_alt1((__int64)v64, 1);
          if (v122_.v124[2] != 0) {
            v50 = "Fixed";
          }
          else {
            v50 = &GameData_1a9f09e;
          }
          v51 = game_util_Format_alt1("%sDefault", v50);
          LayoutAccessor_1562cf0_alt1((__int64)v64, v51);
          v6 = v117;
          ++i;
          v48 = GameData_21ca310;
        }
      }
    LABEL_79:
      if (++v47 == (__int64**)v14) {
        if (i >= 5) {
          goto LABEL_119;
        }
        goto LABEL_118;
      }
    }
  }
  for (i = 0; i != 5; ++i) {
  LABEL_118:
    v77 = game_util_Format_alt1("L_Unit%02d", i);
    v78 = LayoutAccessor_155fbe0_alt1(v4, v77);
    LayoutAccessor_155e830_alt1((__int64)v78, 0);
  }
LABEL_119:
  v79 = ui_LayoutAccessor_FindAlignment_alt1(v4, (__int64)"A_Unit");
  if (v79 != 0) {
    Alignment_56b600_alt1(v79);
    v80 = *(_QWORD*)(v114 + 856);
    if (v80 != 0) {
      v81 = std___1___shared_weak_count_lock_alt1(v80);
      if (v81 != 0) {
        v82 = v81;
        if (*v4 != 0) {
          ControlCreator_13633c0_alt1(*v4);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v82 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v82 + 16LL))(v82);
          std___1___shared_weak_count___release_weak_alt2(v82);
        }
      }
    }
  }
  if (v12 != 0) {
    v83 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v83 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v83, v12);
  }
  v84 = (__int64*)GameData_212c6a0[0];
  if (v128_.v128 != nullptr) {
    v128_.v129 = v128_.v128;
    v85 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v85 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v85, (__int64)v128_.v128);
  }
  game_gameui_1590260_alt1((__int64)v4, *(unsigned __int8*)(v114 + 1072) == 1,
                           0, 1, 0xFFFFFFFF);
  v86 = *v84;
  v122_.v123 = nullptr;
  *(_QWORD*)v122_.v124 = 0;
  v122_.v122 = nullptr;
  if (v86 != 0 && (*(_BYTE*)(v86 + 328) & 4) != 0) {
    v106 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v106 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    }
    v128_.v128 = (char*)v106;
    LODWORD(v132[0]) = 241;
    v107 = game_UnitPool_Find_6ead60_alt1((__int64*)&v128_.v128, (int*)v132);
    v108 = (__int64*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
    v122_.v122 = v108;
    *v108 = (__int64)v107;
    v122_.v123 = v108 + 1;
    *(_QWORD*)v122_.v124 = v108 + 1;
  }
  else {
    LODWORD(v128_.v128) = 17;
    v87 = game_UnitPool_GetFirst_alt1((int*)&v128_.v128);
    if (v87 != 0) {
      v88 = *(_QWORD*)(v87 + 432);
      v89 = v87;
      if (v88 == 0) {
        v88 = *(_QWORD*)(v87 + 440);
        if (v88 != 0) {
          v90 = *(unsigned __int8*)(v88 + 16);
          if (v90 <= 8) {
            v112 = v90 - 3;
            while (1) {
              if (v112 == 0) {
                v88 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v88 != 0) {
                  break;
                }
              }
              if (++v112 == 6) {
                goto LABEL_140;
              }
            }
          }
          else {
          LABEL_140:
            v88 = 0;
          }
        }
      }
      v91 = 0;
      v92 = nullptr;
      while (1) {
        v93 = v89;
        v89 = v88;
        if ((unsigned __int64)v92 >= v91) {
          v94 = v122_.v122;
          v95 = v92 - (char*)v122_.v122;
          v96 = (v92 - (char*)v122_.v122) >> 3;
          v97 = v96 + 1;
          if ((unsigned __int64)(v96 + 1) >> 61 != 0) {
            GameRoutine_740050_alt1();
          }
          v98 = v91 - (_QWORD)v122_.v122;
          if (v98 >> 2 > v97) {
            v97 = v98 >> 2;
          }
          v99 = (unsigned __int64)v98 >= 0x7FFFFFFFFFFFFFF8LL
                    ? 0x1FFFFFFFFFFFFFFFLL
                    : v97;
          if (v99 != 0) {
            if (v99 >> 61 != 0) {
              goto LABEL_194;
            }
            v100 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v99, 16, 0);
          }
          else {
            v100 = 0;
          }
          v101 = v100 + 8 * v99;
          v102 = (__int64*)(v100 + v95 - 8 * v96);
          *(_QWORD*)(v100 + v95) = v93;
          v92 = (char*)(v100 + v95 + 8);
          memcpy_alt1((__int64)v102, (__int64)v94, v95);
          v122_.v122 = v102;
          *(_QWORD*)v122_.v124 = v101;
          if (v94 != nullptr) {
            v103 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v103 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v103, (__int64)v94);
          }
        }
        else {
          *(_QWORD*)v92 = v93;
          v92 += 8;
        }
        v122_.v123 = (__int64*)v92;
        if (v89 == 0) {
          break;
        }
        v88 = *(_QWORD*)(v89 + 432);
        if (v88 == 0) {
          v88 = *(_QWORD*)(v89 + 440);
          if (v88 != 0) {
            v104 = *(unsigned __int8*)(v88 + 16);
            if (v104 > 8) {
            LABEL_142:
              v88 = 0;
            }
            else {
              v105 = v104 - 3;
              while (1) {
                if (v105 == 0) {
                  v88 =
                      *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                  if (v88 != 0) {
                    break;
                  }
                }
                if (++v105 == 6) {
                  goto LABEL_142;
                }
              }
            }
          }
        }
        v91 = *(_QWORD*)v122_.v124;
      }
    }
  }
  GameRoutine_1591240_alt1(v115, *(_BYTE*)(v114 + 1072) == 1, 0, &v122_.v122);
  if (v122_.v122 != nullptr) {
    v122_.v123 = v122_.v122;
    v109 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v109 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v109, (__int64)v122_.v122);
  }
  if (GameData_225ca88 != 0) {
    GameRoutine_1625030_alt1(GameData_225ca88);
  }
  LayoutAccessor_155e830_alt1((__int64)v115, v113 & 1);
  (*(void (**)(__int64))(*(_QWORD*)v114 + 1144LL))(v114);
  if (v120_.v121 != 0) {
    v110 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v110 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v110, v120_.v121);
  }
}

#pragma GCC visibility pop
