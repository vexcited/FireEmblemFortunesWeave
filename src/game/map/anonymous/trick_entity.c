#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6c8a80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e5dc0(_QWORD);
__int64 GameRoutine_6e9760(_QWORD);
__int64 GameRoutine_6e98a0(_QWORD);
__int64 GameRoutine_6ed580(_QWORD, _QWORD);
__int64 GameRoutine_6ed690(_QWORD, _QWORD);
__int64 GameRoutine_72ca20(_QWORD);
__int64 GameRoutine_7c8860(_QWORD);
__int64 GameRoutine_7cb980(__int64 result, int, int, int, int);
__int64 GameRoutine_7cbc00(__int64 result, __int64);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_UnitPool_GetNext(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_21ca4e8;
extern _UNKNOWN* GameData_212cf50;
extern __int64 (*GameData_1f9b028[])();
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21c9bd0;
extern __int64 GameData_21ca060;
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c930;
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__int64 TrickEntity_Unknown37(__int64 a1, _DWORD* a2);
__int64 TrickEntity_Unknown75(__int64 a1, int a2, int a3, char a4);
__int64 TrickEntity_Unknown92(__int64 a1, __int64 a2);
__int64 TrickEntity_Unknown95(__int64 a1, __int64 a2, __int64 a3);
__int64 TrickEntity_Unknown97(_QWORD* a1);
__int64 GameRoutine_74e080(_QWORD, _QWORD);
__int64 TrickEntity_7cbc00_alt1(__int64 result,
                                __int64 a2) __asm__("TrickEntity_7cbc00");
__int64 GameRoutine_7d5160(_QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 TrickEntity_7d16a0_alt1(_QWORD) __asm__("TrickEntity_7d16a0");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(void);
__int64 game_map_anonymous_TrickEntity_TryDone_alt1(
    _QWORD, _QWORD, _QWORD,
    _QWORD) __asm__("game_map_anonymous_TrickEntity_TryDone");
__int64 game_script_StartWaitProc(_QWORD);
__int64 game_script_WaitProc(void);
extern _UNKNOWN GameData_21c6868;
extern __int64 (*GameData_1f9b328[])();
extern __int64 (*GameData_1f9b498[])();
extern __int64 (*GameData_1f9b518[])();
extern __int64 (*GameData_1f9b598[])();
extern __int64 (*GameData_1f9b618[])();
extern __int64 (*game_map_anonymous_ProcUpdate_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212eb20[2];
extern __int64 GameData_212eb28;
extern __int64 GameData_21c67b0;
extern __int64 GameData_21c67b8;
extern __int64 GameData_21c67c0;
extern __int64 GameData_21c67d0;
extern __int64 GameData_21c67e0;
extern __int64 GameData_21c67f0;
extern __int64 GameData_21c67f8;
extern __int64 GameData_21c6800;
extern __int64 GameData_21c6810;
extern __int64 GameData_21c6820;
extern __int64 GameData_21c6830;
extern __int64 GameData_21c6838;
extern __int64 GameData_21c6840;
extern __int64 GameData_21c6850;
extern __int64 GameData_21c6860;
extern __int64 GameData_21d9958;
extern __int64 GameData_22400f8;
extern __int64 as_g_thread_info;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64* GameData_212cfb0[12];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_21309c8[5];
extern __int64* as_g_script_manager_ptr;
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
__int64 game_map_anonymous_TrickEntity_TryBroken(__int64 a1, __int64 a2,
                                                 _WORD* a3);
__int64 game_map_anonymous_TrickEntity_TryRepair(__int64 a1, __int64 a2,
                                                 _WORD* a3);
__int64 game_map_anonymous_TrickEntity_TryDone(__int64 a1, __int64 a2,
                                               __int64 a3, char* a4);
__int64 TrickEntity_7d1480(__int64 result);
_QWORD* TrickEntity_7d16a0(_QWORD* result);
__int64 game_map_anonymous_TrickEntity_GetTargetPoss_closure_Invoke_alt1(
    __int64 a1, _DWORD* a2,
    _DWORD* a3) __asm__("game_map_anonymous_TrickEntity_GetTargetPoss_closure_"
                        "Invoke");
__int64 game_map_anonymous_TrickEntity_TryBroken_closure_Invoke(__int64 a1,
                                                                __int64 a2);
__int64 game_map_anonymous_TrickEntity_TryRepair_closure_Invoke(__int64 a1,
                                                                __int64 a2);
__int64 game_map_anonymous_TrickEntity_TryDone_closure_Invoke(__int64 a1,
                                                              __int64 a2);
__int64 game_map_anonymous_TrickEntity_TryDone_closure0_Invoke(__int64 a1,
                                                               __int64 a2);
__int64 game_map_anonymous_TrickEntity_TryCancel_closure_Invoke(__int64 a1,
                                                                __int64 a2);
_QWORD* game_map_anonymous_TrickEntity_TryCancel(_QWORD* result, int a2,
                                                 char a3, char a4, int a5);
__int64 AssetTableFile_7e7b20(__int64 result, unsigned __int64*);
__int64 AssetTableFile_7e8000(__int64);
__int64 AssetTableFile_7e9960(__int64, __int64, __int64*);
__int64 CharacterBuilder_1083e90(_QWORD*, __int64);
__int64 MapCharacter_9da6e0(__int64, __int64, unsigned int);
__int64 MapCharacter_9da8e0(__int64 result, float);
__int64 MapCharacter_9daac0(__int64 result, unsigned int);
__int64 UnitItem_6e8bc0(_QWORD, _QWORD);
__int64 game_HashString(__int64 result);
__int64 game_anonymous_ConditionMap_Add(__int64, _BYTE*, unsigned int);
__int64 nn_os_LockMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
__n128 nn_os_UnlockMutex(_QWORD);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN GameData_1abb9b5;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_1fb96f8[])();
extern __int64* GameData_212c878[6];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21ca2e8;
extern __int64 GameData_21d9ce8;
extern __int64 GameData_21d9cf0;
extern __int64 GameData_21d9d00;
extern __int64 GameData_21d9d18;
extern __int64 GameData_21d9d20;
extern __int64 GameData_21d9d30;
extern __int64 GameData_21d9d38;
extern __int64 GameData_21d9d48;
extern __int64 GameData_21d9d50;
extern __int64 GameData_21d9d60;
extern __int64 GameData_21d9d68;
extern __int64 GameData_21d9d70;
extern char GameData_21d9d78;
extern int GameData_21d9d7c;
float Height_7c4d10(__int64, float, float);
bool TrickEntity_Unknown74(__int64 a1, __int64 a2);
bool TrickEntity_Unknown88(_QWORD* a1);
__attribute__((swiftcall)) void TrickEntity_Unknown96(PSEUDO_X8 x8_,
                                                      __int64 a1);
__int64 TrickEntity_7d1080(__int64 result);
__int64 TrickEntity_7d1340(__int64 a1, __int64 a2);
__int64 (***game_map_812800(int, int))();
__int64* GameRoutine_7d0c20(__int64* result, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___next_prime(_QWORD);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__int64 game_map_anonymous_TrickEntity_EachObject_closure_Invoke(__int64 a1,
                                                                 int* a2,
                                                                 int* a3);
__int64 Trick_7d5160(__int64, char);
_BYTE* GameRoutine_74e080_alt1(__int64*, __int64) __asm__("GameRoutine_74e080");
__int64 ProcInst_657850_alt1(__int64, __int64, __int64, char,
                             __int64) __asm__("ProcInst_657850");
__int64 Unit_6c8a80(__int64 result, int, int, __int64);
__int64 game_6ed580(__int64, __int64);
__int64 game_6ed690(__int64, __int64);
__int64 game_HasSkill_alt1(_QWORD*, unsigned int*) __asm__("game_HasSkill");
__int64 game_ProcInst_Register_alt1(__int64) __asm__("game_ProcInst_Register");
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
__int64 game_UnitPool_GetNext_alt1(__int64 result,
                                   _DWORD*) __asm__("game_UnitPool_GetNext");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
_BYTE* TrickEntity_7cbc00(_BYTE* result, __int64 a2);
_BYTE* game_map_anonymous_TrickEntity_GetTargetPoss_closure_Invoke(__int64 a1,
                                                                   _DWORD* a2,
                                                                   _DWORD* a3);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void TrickEntity_7d1480_alt1(__int64) __asm__("TrickEntity_7d1480");
__int64 GameRoutine_6e5dc0_alt1(__int64) __asm__("GameRoutine_6e5dc0");
__int64 GameRoutine_6e9760_alt1(__int64) __asm__("GameRoutine_6e9760");
__int64 GameRoutine_6e98a0_alt1(__int64) __asm__("GameRoutine_6e98a0");
__int64 GameRoutine_72ca20_alt1(__int64) __asm__("GameRoutine_72ca20");
__int64 GameRoutine_7c8860_alt1(__int64) __asm__("GameRoutine_7c8860");
void game_map_7cb980(__int64, int, int, int, int);
bool TrickEntity_Unknown85(_QWORD* a1);

__int64 game_map_anonymous_TrickEntity_TryBroken(__int64 a1, __int64 a2,
                                                 _WORD* a3)
{
  __int16 v3;
  __int64 result;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;

  if (a3 == nullptr) {
    return 0;
  }
  v3 = a3[10];
  if ((v3 & 8) != 0) {
    return 0;
  }
  a3[10] = v3 | 8;
  (*(void (**)(_WORD*, _QWORD))(*(_QWORD*)a3 + 312LL))(a3, 0);
  if (((*(__int64 (**)(_WORD*))(*(_QWORD*)a3 + 480LL))(a3) & 1) != 0) {
    a3[10] |= 2u;
  }
  else {
    (*(void (**)(_WORD*))(*(_QWORD*)a3 + 416LL))(a3);
  }
  v10_.v10[0] = GameData_1f9b328;
  v10_.v10[1] = a2;
  v8 = *(_QWORD*)a3;
  v10_.v11 = v10_.v10;
  (*(void (**)(_WORD*, _QWORD*))(v8 + 672))(a3, v10_.v10);
  if (v10_.v11 == v10_.v10) {
    v9 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      goto LABEL_13;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v10_.v11 + v9))((__int64)v10_.v11);
LABEL_13:
  if (GameData_21d9958 == 0) {
    Trick_7d5160(*(_QWORD*)(*GameData_212cfb8[0] + 16), 1);
    if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
        (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
      *(_DWORD*)(GameData_22400f8 + 12) |= 0x402u;
    }
  }
  result = 1;
  *(_BYTE*)(a1 + 92848) = 1;
  return result;
}

__int64 game_map_anonymous_TrickEntity_TryRepair(__int64 a1, __int64 a2,
                                                 _WORD* a3)
{
  __int16 v3;
  __int64 result;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  _QWORD v11[4];
  _QWORD* v12;

  if (a3 == nullptr) {
    return 0;
  }
  v3 = a3[10];
  if ((v3 & 8) == 0) {
    return 0;
  }
  a3[10] = v3 & 0xFFF7;
  v8 = (*(__int64 (**)(_WORD*))(*(_QWORD*)a3 + 160LL))(a3);
  (*(void (**)(_WORD*, _QWORD))(*(_QWORD*)a3 + 312LL))(a3, v8);
  (*(void (**)(_WORD*))(*(_QWORD*)a3 + 408LL))(a3);
  v11[0] = GameData_1f9b498;
  v11[1] = a2;
  v9 = *(_QWORD*)a3;
  v12 = v11;
  (*(void (**)(_WORD*, _QWORD*))(v9 + 672))(a3, v11);
  if (v12 == v11) {
    v10 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_10;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v12 + v10))((__int64)v12);
LABEL_10:
  if (GameData_21d9958 == 0) {
    GameRoutine_7d5160(*(_QWORD*)(*GameData_212cfb8[0] + 16), 1);
    if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
        (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
      *(_DWORD*)(GameData_22400f8 + 12) |= 0x402u;
    }
  }
  result = 1;
  *(_BYTE*)(a1 + 92848) = 1;
  return result;
}

__int64 game_map_anonymous_TrickEntity_TryDone(__int64 a1, __int64 a2,
                                               __int64 a3, char* a4)
{
  __int64 v4;
  __int16 v5;
  __int64 v6;
  __int64 v7;
  __int64 (**v8)();
  char v10;
  __int64 v11;
  struct {
    _QWORD v12[2];
    __int64 v13;
    char gap24_[8];
    _QWORD* v14;
  } v12_;

  if (a3 == 0) {
    return 0;
  }
  v4 = *(_QWORD*)(a3 + 48);
  if (v4 == 0) {
    return 0;
  }
  if ((*(_BYTE*)(v4 + 216) & 0x10) != 0) {
    v10 = *a4;
    v12_.v13 = a2;
    v6 = a1;
    v7 = a3;
    v12_.v14 = v12_.v12;
    *(_BYTE*)(a3 + 15) = v10;
    v8 = GameData_1f9b518;
  }
  else {
    v5 = *(_WORD*)(a3 + 20);
    if ((v5 & 4) != 0) {
      return 0;
    }
    v12_.v13 = a2;
    v6 = a1;
    v7 = a3;
    *(_WORD*)(a3 + 20) = v5 | 4;
    v8 = GameData_1f9b598;
    v12_.v14 = v12_.v12;
  }
  v12_.v12[0] = v8;
  v12_.v12[1] = a3;
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)a3 + 672LL))(v7, v12_.v12);
  if (v12_.v14 == v12_.v12) {
    v11 = 32;
  }
  else {
    if (v12_.v14 == nullptr) {
      goto LABEL_13;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v12_.v14 + v11))((__int64)v12_.v14);
LABEL_13:
  if (GameData_21d9958 == 0) {
    Trick_7d5160(*(_QWORD*)(*GameData_212cfb8[0] + 16), 1);
    if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
        (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
      *(_DWORD*)(GameData_22400f8 + 12) |= 0x402u;
    }
  }
  *(_BYTE*)(v6 + 92848) = 1;
  return 1;
}

_BYTE* TrickEntity_7cbc00(_BYTE* result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  char v13;
  struct {
    _BYTE v14[2];
    __int16 v15;
  } v14_;

  *((_QWORD*)result + 3) = -1;
  *((_QWORD*)result + 4) = 0;
  *((_QWORD*)result + 1) = *(_QWORD*)result;
  v2 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *((_DWORD*)result + 6) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v2);
  v3 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v3 + 1;
  *((_DWORD*)result + 7) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v3);
  v4 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v4 + 1;
  *((_DWORD*)result + 8) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v4);
  v5 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *((_DWORD*)result + 9) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v5);
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  v7 = *(_QWORD*)(a2 + 8);
  v8 = *(unsigned __int8*)(v7 + v6);
  if (*(_BYTE*)(v7 + v6) != 0) {
    v10 = (__int64*)result;
    do {
      v11 = *(int*)(a2 + 20);
      v12 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v11 + 1;
      v13 = *(_BYTE*)(v12 + v11);
      *(_DWORD*)(a2 + 20) = v11 + 2;
      LOBYTE(v11) = *(_BYTE*)(v12 + v11 + 1);
      v14_.v15 = 0;
      v14_.v14[0] = v13;
      v14_.v14[1] = v11;
      result = GameRoutine_74e080_alt1(v10, (__int64)v14_.v14);
      --v8;
    } while (v8 != 0);
  }
  return result;
}

__int64 TrickEntity_Unknown37(__int64 a1, _DWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v8;

  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 224LL))(a1);
  v4 = v3;
  if (v3 != 0) {
    if (*(_WORD*)(v3 + 224) != 0) {
      v5 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                      8LL * (*a2 & 0xFFF));
      v6 = *(_QWORD*)(v3 + 24);
      if (v5 != 0) {
        LODWORD(v5) = *(_WORD*)(v5 + 16) & 0xFFF;
      }
      v8 = v5;
      LOBYTE(v3) = game_HasSkill(v6 + 384, &v8);
    }
    else {
      LOBYTE(v3) = 0;
    }
  }
  return (v4 != 0) & (unsigned __int8)v3;
}

bool TrickEntity_Unknown74(__int64 a1, __int64 a2)
{
  char v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  __int64 v14;

  if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1) != 6) {
    return false;
  }
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
  if (a2 == 0) {
    return false;
  }
  if ((v4 & 1) == 0) {
    return false;
  }
  v5 = game_g_shared_system_skills_ptr;
  LODWORD(v14) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                            game_g_shared_system_skills_ptr) &
                 0xFFF;
  if ((game_HasSkill(a2 + 1744, &v14) & 1) != 0) {
    return false;
  }
  if (*(_WORD*)(a2 + 492) == 0 && *(_BYTE*)(a2 + 496) == 0) {
    LODWORD(v14) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v5) & 0xFFF;
    if ((game_HasSkill(a2 + 1744, &v14) & 1) != 0) {
      return false;
    }
  }
  LODWORD(v14) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4CLL) + v5) & 0xFFF;
  if ((game_HasSkill(a2 + 1744, &v14) & 1) != 0 || *(int*)(a2 + 592) > 1) {
    return false;
  }
  v7 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 584LL))(a1, a2);
  v14 = 0;
  if (v7 != 0) {
    v8 = *(unsigned __int16*)(v7 + 16);
    HIDWORD(v14) = 1;
    LOWORD(v14) = v8;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v8) +
                  73LL) == 17) {
      nn_os_LockMutex(&game_g_random_mutex);
      v9 = game_map_MapRandom_instance__ptr[0];
      v10 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v11 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v12 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v9 + 1) = v10;
      v13 = (v12 >> 8) ^ (v11 >> 19) ^ v12 ^ v11;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9) = v11;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9 + 4) = v13;
      nn_os_UnlockMutex(&game_g_random_mutex);
      HIDWORD(v14) =
          (16 * ((_WORD)v13 -
                 1000 * (unsigned __int16)((v13 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
  }
  return (UnitItem_6e8bc0(&v14, a2) & 1) != 0;
}

__int64 TrickEntity_Unknown75(__int64 a1, int a2, int a3, char a4)
{
  __int64 result;
  unsigned __int8* v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v17;
  int v18;
  unsigned int v19;
  char v20;
  char v21;
  unsigned __int8 v22;
  __int64* v23;
  __int64 v24;
  int v25;
  char* v26;
  __int64* v27;
  __int64* v28;
  unsigned int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  bool v36;
  __int64 v37;
  int v38;
  __int64 v39;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 224LL))(a1);
  if (result != 0) {
    v9 = (unsigned __int8*)result;
    v10 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
    v11 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
    v12 = a2 - v10;
    if (a2 - v10 < 0) {
      v12 = v10 - a2;
    }
    v13 = a3 - v11;
    if (a3 - v11 < 0) {
      v13 = v11 - a3;
    }
    v14 = v13 + v12;
    v15 = v9[59];
    if (v15 != 3) {
      if (v15 == 2) {
        if (v14 != 1) {
          return 0;
        }
      }
      else if (v15 != 1 || v14 != 0) {
        return 0;
      }
      return 1;
    }
    if (v14 != 1) {
      return 0;
    }
    v17 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
    v18 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
    v19 = ((unsigned int)(a2 - v17) >> 30) & 2 | (a3 - v18 < 0) | 4;
    if (a3 <= v18) {
      v19 = ((unsigned int)(a2 - v17) >> 30) & 2 | (a3 - v18 < 0);
    }
    v20 = a2 - v17 <= 0 ? v19 : v19 | 8;
    v21 = v20 - 1;
    v22 = (v21 & 0xF8) != 0 ? -1 : 0x3FFFFFF02FF0100uLL >> (8 * v21);
    if (v9[112] != v22) {
      return 0;
    }
    if ((a4 & 1) == 0) {
      return 1;
    }
    v23 = GameData_212ce98[0];
    v24 = *GameData_212ce98[0];
    if (*GameData_212ce98[0] == 0) {
      return 1;
    }
    v25 = 1;
    v26 = (char*)GameData_212cf50;
    v27 = GameData_212c930;
    v28 = GameData_212ce90[0];
    while (1) {
      v29 = v9[113];
      result = v25 - 1 >= v29;
      if (v25 - 1 >= v29) {
        break;
      }
      v30 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1)-v25 *
            v26[v9[112] + 1280];
      v31 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
      if (*(unsigned __int8*)(v24 + 26) <=
          (unsigned int)(unsigned __int8)(v30 - *(_BYTE*)(v24 + 24))) {
        return 0;
      }
      v32 = v31 - v25 * v26[v9[112] + 1284];
      result = 0;
      if (*(unsigned __int8*)(v24 + 27) >
          (unsigned int)(unsigned __int8)(v32 - *(_BYTE*)(v24 + 25))) {
        v33 = v30 + 32 * v32;
        v34 = (unsigned int)v33 >= 0x400 ? 0LL : (unsigned int)v33;
        if (*(_BYTE*)(*(_QWORD*)(v24 + 96) + v34 + 8) == 0 ||
            ((v35 =
                  *(_QWORD*)(GameData_21ca310 + 56) +
                  2224LL * *(unsigned __int8*)(*(_QWORD*)(v24 + 96) + v34 + 8),
              *(unsigned __int8*)(*(_QWORD*)(v24 + 96) + v34 + 8) <= 0xFAu)
                 ? (v36 = v35 == 2224)
                 : (v36 = true),
             v36 || *(_QWORD*)(v35 - 1832) == 0)) {
          v37 = *(_QWORD*)(*(_QWORD*)(*v27 + 64) +
                           8LL * *(unsigned __int16*)(*(_QWORD*)(v24 + 72) +
                                                      2 * v34 + 8));
          if ((*(unsigned __int8*)(v37 + 62) | *(unsigned __int8*)(v37 + 63)) ==
                  0 &&
              *(unsigned __int8*)(*(_QWORD*)(v37 + 48) + 40LL) != 255 &&
              *(unsigned __int8*)(*v23 + 18) >
                  (unsigned int)(unsigned __int8)(v30 - *(_BYTE*)(*v23 + 16)) &&
              *(unsigned __int8*)(*v23 + 19) >
                  (unsigned int)(unsigned __int8)(v32 - *(_BYTE*)(*v23 + 17))) {
            v38 = v33 >> 5;
            ++v25;
            v39 = *(_BYTE*)(*v28 + *(unsigned __int8*)(*v28 + 24) + 16) == 1
                      ? *(unsigned __int8*)(*v28 + 24)
                      : 0LL;
            if (((*(_DWORD*)(*(_QWORD*)(v24 + 160) + (v39 << 7) + 4LL * v38 +
                             8) >>
                  v30) &
                 1) != 0) {
              continue;
            }
          }
        }
      }
      return result;
    }
  }
  return result;
}

bool TrickEntity_Unknown85(_QWORD* a1)
{
  __int64 v1;
  int v3;
  int v4;
  float v5;
  float v6;
  float v7;
  float32x4_t* v8;
  float32x4_t v9;
  float32x4_t v10;
  int8x16_t v11;
  float32x4_t v12;
  float v14;

  {
    v1 = a1[14];
    __asm__ volatile("" ::"r"(v1));
  }
  if (v1 != 0) {
    v3 = (*(__int64 (**)(_QWORD*))(*a1 + 56LL))(a1);
    v4 = (*(__int64 (**)(_QWORD*))(*a1 + 64LL))(a1);
    v5 = (float)((float)((float)(v3 + 256) * 0x1.4000000000000p+2f) +
                 0x1.4000000000000p+1f) +
         -0x1.4000000000000p+10f;
    v6 = (float)((float)((float)(v4 + 256) * 0x1.4000000000000p+2f) +
                 0x1.4000000000000p+1f) +
         -0x1.4000000000000p+10f;
    if (GameData_21ca2e8 != 0) {
      v14 = (float)((float)((float)(v4 + 256) * 0x1.4000000000000p+2f) +
                    0x1.4000000000000p+1f) +
            -0x1.4000000000000p+10f;
      v7 = Height_7c4d10(
          *(_QWORD*)(GameData_21ca2e8 + 61464),
          (float)((float)((float)(v3 + 256) * 0x1.4000000000000p+2f) +
                  0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f,
          v6);
      v5 = (float)((float)((float)(v3 + 256) * 0x1.4000000000000p+2f) +
                   0x1.4000000000000p+1f) +
           -0x1.4000000000000p+10f;
      v6 = v14;
      {
        v8 = (float32x4_t*)a1[14];
        __asm__ volatile("" ::"r"(v8));
      }
      if (v8 == nullptr) {
        return v1 != 0;
      }
    }
    else {
      v7 = 0x0.0p+0f;
      {
        v8 = (float32x4_t*)a1[14];
        __asm__ volatile("" ::"r"(v8));
      }
      if (v8 == nullptr) {
        return v1 != 0;
      }
    }
    LANES128(v9).n128_u64[0] = __PAIR64__(LODWORD(v7), LODWORD(v5));
    LANES128(v9).n128_u64[1] = LODWORD(v6);
    v10 = vsubq_f32(v8[19], v9);
    v11 = vmulq_f32(v10, v10);
    LANES128(v10).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v11, v11, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
            .n64_f32[0] != 0x0.0p+0f) {
      LANES128(v8[19]).n128_f32[0] = v5;
      LANES128(v8[19]).n128_f32[1] = v7;
      {
        v12 = v8[19];
        __asm__ volatile("" ::"w"(v12));
      }
      LANES128(v8[18]).n128_u32[2] |= 1u;
      LANES128(v12).n128_u64[1] = LODWORD(v6);
      v8[19] = v12;
    }
  }
  return v1 != 0;
}

bool TrickEntity_Unknown88(_QWORD* a1)
{
  int v2;
  int* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v12[48];
    int v13;
    char gap388_[4];
    __int64 v14;
    __int64 v15;
    __int64 v16;
    __int64 v17;
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
    char gap464_[8];
    __int64 v23;
  } v12_;

  v2 = (*(unsigned __int8 (**)(_QWORD*))(*a1 + 40LL))(a1);
  if (v2 == 14) {
    v12_.v12[25] = 0;
    v12_.v12[27] = 0;
    memset(v12_.v12, 0, 192);
    v12_.v13 = 1065353216;
    v3 = (int*)GameData_21d9d18;
    v4 = GameData_21d9d20;
    v12_.v12[40] = 0;
    v12_.v12[41] = 0;
    memset(&v12_.v12[43], 0, 40);
    v12_.v14 = 0;
    v12_.v15 = 0;
    v12_.v16 = 0;
    v12_.v17 = 0;
    v12_.v18 = 0;
    v12_.v19 = 0;
    v12_.v20 = 0;
    v12_.v21 = 0;
    v12_.v22 = 0;
    if (GameData_21d9d18 != GameData_21d9d20) {
      do {
        v5 = *v3++;
        *(_QWORD*)(GameData_21d9d00 + 8 * v5) = 0;
      } while (v3 != (int*)v4);
      v3 = (int*)GameData_21d9d18;
    }
    GameData_21d9d20 = (__int64)v3;
    GameData_21d9d60 = 0;
    GameData_21d9d68 = 0;
    GameData_21d9d70 = 0;
    GameData_21d9d7c = 0;
    GameData_21d9d38 = GameData_21d9d30;
    GameData_21d9cf0 = GameData_21d9ce8;
    GameData_21d9d50 = GameData_21d9d48;
    GameData_21d9d78 = 8;
    TrickEntity_7d1340((__int64)a1, (__int64)v12_.v12);
    v6 = v12_.v23;
    v7 = a1[15];
    if (v7 != 0) {
      v8 = *(_QWORD*)(v7 + 392);
      v9 = *(_QWORD*)(v7 + 400);
      if (v9 == 0) {
        if (v12_.v23 == *(_QWORD*)(v8 + 168)) {
          goto LABEL_13;
        }
        goto LABEL_12;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
      v10 = *(_QWORD*)(v8 + 168);
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak_alt1(v9);
        if (v6 == v10) {
          goto LABEL_13;
        }
        goto LABEL_12;
      }
    }
    else {
      v10 = 0;
    }
    if (v6 == v10) {
    LABEL_13:
      TrickEntity_7d1480_alt1((__int64)v12_.v12);
      return v2 == 14;
    }
  LABEL_12:
    TrickEntity_7d1080((__int64)a1);
    goto LABEL_13;
  }
  return v2 == 14;
}

__int64 TrickEntity_Unknown92(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int16 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  __int16 v24;
  __int64 v25;
  __int64 v26;
  __int16 v27;
  __int64 result;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  int v33;
  int v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  int v50;
  __int64 v51;
  __int64 v52;
  int v53;
  int v54;
  int v55;
  __int64** v56;
  __int64* v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  int v62;
  int v63;
  int v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v68;
  unsigned __int64 v69;
  __int64** v70;
  __int64* v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  int v76;
  int v77;
  __int64 v78;
  __int64 v79;
  int v80;
  int v81;
  int v82;
  __int64 v83;

  v2 = *(int*)(a2 + 20);
  v3 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  v6 = *(unsigned __int8*)(v3 + v2);
  *(_DWORD*)(a2 + 20) = v2 + 2;
  *(_BYTE*)(a1 + 10) = *(_BYTE*)(v3 + v2 + 1);
  if (v6 < 5) {
    if (v6 > 2) {
      TrickEntity_7cbc00((_BYTE*)(a1 + 56), a2);
    }
    else {
      v17 = *(int*)(a2 + 20);
      v18 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v17 + 1;
      v19 = *(unsigned __int8*)(v18 + v17);
      *(_DWORD*)(a2 + 20) = v17 + 2;
      v20 = *(unsigned __int8*)(v18 + v17 + 1);
      *(_DWORD*)(a2 + 20) = v17 + 3;
      v21 = *(unsigned __int8*)(v18 + v17 + 2);
      *(_DWORD*)(a2 + 20) = v17 + 4;
      v22 = *(unsigned __int8*)(v18 + v17 + 3);
      v23 = *(_QWORD*)(a1 + 56);
      *(_QWORD*)(a1 + 80) = -1;
      *(_QWORD*)(a1 + 88) = 0;
      *(_QWORD*)(a1 + 64) = v23;
      game_map_7cb980(a1 + 56, v19, v20, v21, v22);
    }
    v39 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v39 + 1;
    *(_BYTE*)(a1 + 11) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v39);
    v40 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v40 + 1;
    *(_BYTE*)(a1 + 12) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v40);
    v41 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v41 + 1;
    *(_BYTE*)(a1 + 13) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v41);
    v42 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v42 + 1;
    *(_BYTE*)(a1 + 14) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v42);
    v43 = *(int*)(a2 + 20);
    v44 = v43 + 1;
    *(_DWORD*)(a2 + 20) = v43 + 1;
    if (v6 != 0) {
      *(_BYTE*)(a1 + 15) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v43);
      v44 = *(_DWORD*)(a2 + 20);
    }
    *(_DWORD*)(a2 + 20) = v44 + 1;
    *(_BYTE*)(a1 + 16) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v44);
    v45 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v45 + 1;
    *(_BYTE*)(a1 + 17) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v45);
    v46 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v46 + 1;
    *(_WORD*)(a1 + 20) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v46);
    if (v6 < 2) {
      v47 = 0;
    }
    else {
      v47 = GameRoutine_6e98a0_alt1(a2);
    }
    *(_QWORD*)(a1 + 32) = v47;
    result = GameRoutine_72ca20_alt1(a2);
    *(_QWORD*)(a1 + 40) = 0;
    *(_QWORD*)(a1 + 48) = result;
    if (v6 != 4) {
      return result;
    }
    v48 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v48 + 1;
    v49 = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v48);
    *(_DWORD*)(a1 + 24) = v49;
    if ((unsigned int)(v49 - 1) < 2) {
      v51 = *(int*)(a2 + 20);
      v52 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v51 + 1;
      v53 = *(unsigned __int8*)(v52 + v51);
      *(_DWORD*)(a2 + 20) = v51 + 2;
      v54 = v53 | (*(unsigned __int8*)(v52 + v51 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v51 + 3;
      v55 = *(unsigned __int8*)(v52 + v51 + 2);
      *(_DWORD*)(a2 + 20) = v51 + 4;
      v50 = v54 | (v55 << 16) | (*(unsigned __int8*)(v52 + v51 + 3) << 24);
      goto LABEL_84;
    }
    if (v49 == 3) {
      result = GameRoutine_6e5dc0_alt1(a2);
      if (result != 0) {
      LABEL_26:
        v50 = *(unsigned __int16*)(result + 16);
      LABEL_84:
        *(_DWORD*)(a1 + 28) = v50;
        return result;
      }
    }
    else {
      if (v49 != 4) {
        return result;
      }
      result = GameRoutine_7c8860_alt1(a2);
      if (result != 0) {
        goto LABEL_26;
      }
    }
    v50 = -1;
    goto LABEL_84;
  }
  TrickEntity_7cbc00((_BYTE*)(a1 + 56), a2);
  v7 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_BYTE*)(a1 + 11) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7);
  v8 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_BYTE*)(a1 + 12) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8);
  v9 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_BYTE*)(a1 + 13) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9);
  v10 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  *(_BYTE*)(a1 + 14) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10);
  v11 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v11 + 1;
  *(_BYTE*)(a1 + 15) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11);
  v12 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v12 + 1;
  *(_BYTE*)(a1 + 16) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12);
  v13 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v13 + 1;
  *(_BYTE*)(a1 + 17) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13);
  v14 = *(int*)(a2 + 20);
  v15 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v14 + 1;
  v16 = *(unsigned __int8*)(v15 + v14);
  if (v6 < 8) {
    *(_WORD*)(a1 + 20) = v16;
    if (v6 == 5) {
      v24 = 0;
      goto LABEL_9;
    }
  }
  else {
    *(_DWORD*)(a2 + 20) = v14 + 2;
    *(_WORD*)(a1 + 20) = v16 | (*(unsigned __int8*)(v15 + v14 + 1) << 8);
  }
  v25 = *(int*)(a2 + 20);
  v26 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v25 + 1;
  v27 = *(unsigned __int8*)(v26 + v25);
  *(_DWORD*)(a2 + 20) = v25 + 2;
  v24 = v27 | (*(unsigned __int8*)(v26 + v25 + 1) << 8);
LABEL_9:
  *(_WORD*)(a1 + 18) = v24;
  result = GameRoutine_6e9760_alt1(a2);
  *(_QWORD*)(a1 + 32) = result;
  v29 = 0;
  v30 = *(int*)(a2 + 20);
  v31 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v30 + 1;
  v32 = *(unsigned __int8*)(v31 + v30);
  *(_DWORD*)(a2 + 20) = v30 + 2;
  v33 = v32 | (*(unsigned __int8*)(v31 + v30 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v30 + 3;
  v34 = *(unsigned __int8*)(v31 + v30 + 2);
  *(_DWORD*)(a2 + 20) = v30 + 4;
  v35 = v33 | (v34 << 16) | (*(unsigned __int8*)(v31 + v30 + 3) << 24);
  if ((_DWORD)v35 != 0) {
    v36 = *(_QWORD*)(GameData_21ca060 + 136);
    if (v36 != 0 && *(_QWORD*)(GameData_21ca060 + 152) != 0) {
      v37 = v36 - 1;
      if ((v36 & (v36 - 1)) != 0) {
        v38 = v35;
        if (v36 <= v35) {
          v38 = (unsigned int)v35 % (unsigned int)v36;
        }
      }
      else {
        v38 = ((_DWORD)v36 - 1) & (unsigned int)v35;
      }
      v56 = *(__int64***)(*(_QWORD*)(GameData_21ca060 + 128) + 8 * v38);
      if (v56 == nullptr || (v57 = *v56) == nullptr) {
      LABEL_44:
        v29 = 0;
        goto LABEL_45;
      }
      if ((v36 & v37) == 0) {
        while (1) {
          v59 = v57[1];
          if (v59 == v35) {
            if (*((_DWORD*)v57 + 4) == (_DWORD)v35) {
              goto LABEL_87;
            }
          }
          else if ((v59 & v37) != v38) {
            goto LABEL_44;
          }
          v57 = (__int64*)*v57;
          v29 = 0;
          if (v57 == nullptr) {
            goto LABEL_45;
          }
        }
      }
      while (1) {
        v58 = v57[1];
        if (v58 == v35) {
          if (*((_DWORD*)v57 + 4) == (_DWORD)v35) {
          LABEL_87:
            v29 = v57[3];
            break;
          }
        }
        else {
          if (v58 >= v36) {
            v58 %= v36;
          }
          if (v58 != v38) {
            goto LABEL_44;
          }
        }
        v57 = (__int64*)*v57;
        if (v57 == nullptr) {
          goto LABEL_44;
        }
      }
    }
  }
LABEL_45:
  *(_QWORD*)(a1 + 40) = v29;
  v60 = *(int*)(a2 + 20);
  v61 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v60 + 1;
  v62 = *(unsigned __int8*)(v61 + v60);
  *(_DWORD*)(a2 + 20) = v60 + 2;
  v63 = v62 | (*(unsigned __int8*)(v61 + v60 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v60 + 3;
  v64 = *(unsigned __int8*)(v61 + v60 + 2);
  *(_DWORD*)(a2 + 20) = v60 + 4;
  v65 = v63 | (v64 << 16) | (*(unsigned __int8*)(v61 + v60 + 3) << 24);
  if ((_DWORD)v65 == 0) {
    goto LABEL_69;
  }
  v66 = *(_QWORD*)(GameData_21c9bd0 + 136);
  if (v66 == 0 || *(_QWORD*)(GameData_21c9bd0 + 152) == 0) {
    goto LABEL_69;
  }
  v68 = v66 - 1;
  if ((v66 & (v66 - 1)) != 0) {
    v69 = v65;
    if (v66 <= v65) {
      v69 = (unsigned int)v65 % (unsigned int)v66;
    }
  }
  else {
    v69 = ((_DWORD)v66 - 1) & (unsigned int)v65;
  }
  v70 = *(__int64***)(*(_QWORD*)(GameData_21c9bd0 + 128) + 8 * v69);
  if (v70 == nullptr || (v71 = *v70) == nullptr) {
  LABEL_69:
    v73 = 0;
    goto LABEL_70;
  }
  if ((v66 & v68) == 0) {
    while (1) {
      v74 = v71[1];
      if (v74 == v65) {
        if (*((_DWORD*)v71 + 4) == (_DWORD)v65) {
          goto LABEL_86;
        }
      }
      else if ((v74 & v68) != v69) {
        goto LABEL_69;
      }
      v71 = (__int64*)*v71;
      v73 = 0;
      if (v71 == nullptr) {
        goto LABEL_70;
      }
    }
  }
  while (1) {
    v72 = v71[1];
    if (v72 == v65) {
      break;
    }
    if (v72 >= v66) {
      v72 %= v66;
    }
    if (v72 != v69) {
      goto LABEL_69;
    }
  LABEL_59:
    v71 = (__int64*)*v71;
    if (v71 == nullptr) {
      goto LABEL_69;
    }
  }
  if (*((_DWORD*)v71 + 4) != (_DWORD)v65) {
    goto LABEL_59;
  }
LABEL_86:
  v73 = v71[3];
LABEL_70:
  *(_QWORD*)(a1 + 48) = v73;
  v75 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v75 + 1;
  v76 = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v75);
  *(_DWORD*)(a1 + 24) = v76;
  if ((unsigned int)(v76 - 1) < 2) {
    v78 = *(int*)(a2 + 20);
    v79 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v78 + 1;
    v80 = *(unsigned __int8*)(v79 + v78);
    *(_DWORD*)(a2 + 20) = v78 + 2;
    v81 = v80 | (*(unsigned __int8*)(v79 + v78 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v78 + 3;
    v82 = *(unsigned __int8*)(v79 + v78 + 2);
    *(_DWORD*)(a2 + 20) = v78 + 4;
    v77 = v81 | (v82 << 16) | (*(unsigned __int8*)(v79 + v78 + 3) << 24);
    goto LABEL_78;
  }
  if (v76 == 3) {
    result = GameRoutine_6e5dc0_alt1(a2);
    if (result == 0) {
      goto LABEL_77;
    }
  LABEL_74:
    v77 = *(unsigned __int16*)(result + 16);
  LABEL_78:
    *(_DWORD*)(a1 + 28) = v77;
  }
  else if (v76 == 4) {
    result = GameRoutine_7c8860_alt1(a2);
    if (result != 0) {
      goto LABEL_74;
    }
  LABEL_77:
    v77 = -1;
    goto LABEL_78;
  }
  if (v6 < 7) {
    *(_BYTE*)(a1 + 96) = 0;
  }
  else {
    v83 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v83 + 1;
    *(_BYTE*)(a1 + 96) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v83);
  }
  return result;
}

__int64 TrickEntity_Unknown95(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  bool v19;
  unsigned int v20;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  int v28;
  int v29;
  char* v30;
  int v31;
  unsigned __int8* v32;
  int v33;
  int v34;
  int v35;
  int v36;
  signed int v37;
  int v38;
  int v39;
  int v40;
  unsigned int v42;
  unsigned int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v50;
  bool v51;
  unsigned int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  int v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  unsigned int v63;
  unsigned int v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  unsigned int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v85;
  bool v86;
  unsigned int v88;
  __int64 v89;
  int v90;
  int v91;
  int v92;
  unsigned int v93;
  int v94;
  unsigned int v95;
  __int64 v96;
  unsigned int v97;
  unsigned int v98;
  int v99;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
  if ((result & 1) != 0) {
    v7 = *(unsigned __int8*)(a1 + 10);
    if (v7 == 6) {
      result =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 584LL))(a1, a2);
      if (result != 0) {
        v26 = result;
        v27 = GameData_212ce98[0];
        v96 = *GameData_212ce98[0];
        v28 = game_6ed580(result, a2);
        result = game_6ed690(v26, a2);
        if (v28 <= (int)result) {
          v29 = result;
          v30 = (char*)&GameData_21ca4e8 +
                (*(unsigned __int8 (**)(__int64))(*(_QWORD*)a1 + 568LL))(a1);
          v92 = v30[1280];
          v94 = v30[1284];
          v31 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 576LL))(a1);
          v32 = (unsigned __int8*)*v27;
          v33 = v31;
          v34 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
          if (v34 - v29 <= v32[28]) {
            v35 = v32[28];
          }
          else {
            v35 = v34 - v29;
          }
          v36 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
          if (v36 - v29 <= v32[29]) {
            v37 = v32[29];
          }
          else {
            v37 = v36 - v29;
          }
          v38 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
          if (v38 + v29 >= v32[30]) {
            v39 = v32[30];
          }
          else {
            v39 = v38 + v29;
          }
          result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
          v40 = result + v29;
          if ((int)result + v29 >= v32[31]) {
            v40 = v32[31];
          }
          v90 = v40;
          v91 = v35;
          if (v37 <= v40 && v35 <= v39) {
            v97 = v33 * v33;
            v42 = v28 * v28;
            if (v92 * v92 <= (unsigned int)(v94 * v94)) {
              v78 = v35 + 32 * v37;
              do {
                v79 = v91;
                v93 = v78;
                do {
                  v80 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
                  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
                  v81 = v79 - v80;
                  if (v79 - v80 < 0) {
                    v81 = v80 - v79;
                  }
                  v82 = v37 - result;
                  if (v37 - (int)result < 0) {
                    v82 = result - v37;
                  }
                  v83 = v82 + v81;
                  if (v83 >= v28 && v83 <= v29) {
                    v85 = v79 -
                          (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
                    result =
                        (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
                    v86 = (v37 - (int)result) * v94 < 1 || v85 * v85 > v97;
                    if (!v86 &&
                        (v37 - (int)result) * (v37 - (int)result) >= v42) {
                      v88 = v78 >= 0x400 ? 0 : v78;
                      if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c930 +
                                                           64) +
                                                8LL *
                                                    *(unsigned __int16*)(*(_QWORD*)(v96 +
                                                                                    72) +
                                                                         2LL *
                                                                             v88 +
                                                                         8)) +
                                     216LL) &
                           8) == 0) {
                        v89 = *(_QWORD*)(a3 + 32);
                        v98 = v37;
                        v99 = v79;
                        if (v89 == 0) {
                        LABEL_153:
                          GameRoutine_60a310_alt1();
                        }
                        result = (*(__int64 (**)(__int64, int*, unsigned int*))(
                            *(_QWORD*)v89 + 48LL))(v89, &v99, &v98);
                      }
                    }
                  }
                  ++v78;
                  v19 = v79++ < v39;
                } while (v19);
                v78 = v93 + 32;
                v19 = v37++ < v90;
              } while (v19);
            }
            else {
              v43 = v35 + 32 * v37;
              do {
                v44 = v91;
                v95 = v43;
                do {
                  v45 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
                  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
                  v46 = v44 - v45;
                  if (v44 - v45 < 0) {
                    v46 = v45 - v44;
                  }
                  v47 = v37 - result;
                  if (v37 - (int)result < 0) {
                    v47 = result - v37;
                  }
                  v48 = v47 + v46;
                  if (v48 >= v28 && v48 <= v29) {
                    v50 = v44 -
                          (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
                    result =
                        (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
                    v51 = v50 * v92 < 1 ||
                          (v37 - (int)result) * (v37 - (int)result) > v97;
                    if (!v51 && v50 * v50 >= v42) {
                      v53 = v43 >= 0x400 ? 0 : v43;
                      if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c930 +
                                                           64) +
                                                8LL *
                                                    *(unsigned __int16*)(*(_QWORD*)(v96 +
                                                                                    72) +
                                                                         2LL *
                                                                             v53 +
                                                                         8)) +
                                     216LL) &
                           8) == 0) {
                        v54 = *(_QWORD*)(a3 + 32);
                        v98 = v37;
                        v99 = v44;
                        if (v54 == 0) {
                          goto LABEL_153;
                        }
                        result = (*(__int64 (**)(__int64, int*, unsigned int*))(
                            *(_QWORD*)v54 + 48LL))(v54, &v99, &v98);
                      }
                    }
                  }
                  ++v43;
                  v19 = v44++ < v39;
                } while (v19);
                v43 = v95 + 32;
                v19 = v37++ < v90;
              } while (v19);
            }
          }
        }
      }
    }
    else if (v7 == 13) {
      v8 = *(_DWORD*)(a1 + 24);
      if (v8 > 2) {
        if (v8 == 3) {
          v66 = *(unsigned int*)(a1 + 28);
          if ((v66 & 0x80000000) == 0) {
            v67 = *(_QWORD*)(*(_QWORD*)(GameData_21c99c8 + 64) + 8 * v66);
            if (v67 != 0) {
              v99 = 15;
              v68 = game_UnitPool_GetFirst_alt1(&v99);
              v99 = 15;
              result = game_UnitPool_GetNext_alt1(v68, &v99);
              if (v68 != 0) {
                v69 = v68;
                while (1) {
                LABEL_112:
                  v74 = result;
                  if (*(_QWORD*)(v69 + 392) == v67) {
                    result = Unit_6c8a80(v69, *(char*)(v69 + 584),
                                         *(char*)(v69 + 585), a3);
                  }
                  if (v74 == 0) {
                    break;
                  }
                  result = *(_QWORD*)(v74 + 432);
                  v69 = v74;
                  if (result == 0) {
                    v75 = *(_QWORD*)(v74 + 440);
                    v69 = v74;
                    if (v75 != 0) {
                      v76 = *(unsigned __int8*)(v75 + 16);
                      result = 0;
                      v69 = v74;
                      if (v76 <= 8) {
                        v77 = 24LL * (unsigned int)v76 + 556024;
                        while (1) {
                          if (v76 <= 2) {
                            result =
                                *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                           v77);
                            if (result != 0) {
                              break;
                            }
                          }
                          ++v76;
                          v77 += 24;
                          if (v76 == 9) {
                            result = 0;
                            v69 = v74;
                            goto LABEL_112;
                          }
                        }
                        v69 = v74;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else if (v8 == 4) {
          v55 = *(unsigned int*)(a1 + 28);
          if ((v55 & 0x80000000) == 0) {
            v56 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v55);
            if (v56 != 0) {
              v99 = 15;
              v57 = game_UnitPool_GetFirst_alt1(&v99);
              v99 = 15;
              result = game_UnitPool_GetNext_alt1(v57, &v99);
              if (v57 != 0) {
                while (1) {
                LABEL_100:
                  v70 = result;
                  v99 = *(_WORD*)(v56 + 16) & 0xFFF;
                  result = game_HasSkill_alt1((_QWORD*)(v57 + 1744),
                                              (unsigned int*)&v99);
                  if ((result & 1) != 0) {
                    result = Unit_6c8a80(v57, *(char*)(v57 + 584),
                                         *(char*)(v57 + 585), a3);
                  }
                  if (v70 == 0) {
                    break;
                  }
                  result = *(_QWORD*)(v70 + 432);
                  v57 = v70;
                  if (result == 0) {
                    v71 = *(_QWORD*)(v70 + 440);
                    v57 = v70;
                    if (v71 != 0) {
                      v72 = *(unsigned __int8*)(v71 + 16);
                      result = 0;
                      v57 = v70;
                      if (v72 <= 8) {
                        v73 = 24LL * (unsigned int)v72 + 556024;
                        while (1) {
                          if (v72 <= 2) {
                            result =
                                *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                           v73);
                            if (result != 0) {
                              break;
                            }
                          }
                          ++v72;
                          v73 += 24;
                          if (v72 == 9) {
                            result = 0;
                            v57 = v70;
                            goto LABEL_100;
                          }
                        }
                        v57 = v70;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (v8 == 1) {
        v58 = *(unsigned __int8*)(a1 + 31);
        if (*(_BYTE*)(a1 + 31) != 0) {
          v59 = *(unsigned __int8*)(a1 + 30);
          if (*(_BYTE*)(a1 + 30) != 0) {
            v60 = *(unsigned __int8*)(a1 + 28);
            v61 = *(unsigned __int8*)(a1 + 29);
            v62 = v59 + v60;
            v63 = v58 + v61;
            do {
              v64 = v60;
              do {
                v65 = *(_QWORD*)(a3 + 32);
                v98 = v61;
                v99 = v64;
                if (v65 == 0) {
                  goto LABEL_153;
                }
                result = (*(__int64 (**)(__int64, int*, unsigned int*))(
                    *(_QWORD*)v65 + 48LL))(v65, &v99, &v98);
                ++v64;
              } while (v64 < v62);
              ++v61;
            } while (v61 < v63);
          }
        }
      }
      else if (v8 == 2) {
        v9 = *(unsigned __int8*)(a1 + 30);
        v10 = *(unsigned __int8*)(a1 + 28);
        v11 = v10 - v9;
        v12 = v10 + v9;
        if (v11 <= *(unsigned __int8*)(GameData_21ca300 + 28)) {
          v13 = *(unsigned __int8*)(GameData_21ca300 + 28);
        }
        else {
          v13 = v11;
        }
        v14 = *(unsigned __int8*)(a1 + 29);
        v15 = v14 - v9;
        v16 = v14 + v9;
        if (v15 <= *(unsigned __int8*)(GameData_21ca300 + 29)) {
          v17 = *(unsigned __int8*)(GameData_21ca300 + 29);
        }
        else {
          v17 = v15;
        }
        if (v12 >= *(unsigned __int8*)(GameData_21ca300 + 30)) {
          v12 = *(unsigned __int8*)(GameData_21ca300 + 30);
        }
        v18 = v16 >= *(unsigned __int8*)(GameData_21ca300 + 31)
                  ? *(unsigned __int8*)(GameData_21ca300 + 31)
                  : v16;
        v19 = v17 > v18 || v13 > v12;
        if (!v19) {
          v20 = v12 + 1;
          do {
            v22 = v13;
            do {
              v23 = v22 - *(unsigned __int8*)(a1 + 28);
              if (v23 < 0) {
                v23 = *(unsigned __int8*)(a1 + 28) - v22;
              }
              v24 = v17 - *(unsigned __int8*)(a1 + 29);
              if (v24 < 0) {
                v24 = *(unsigned __int8*)(a1 + 29) - v17;
              }
              if (v24 + v23 <= v9) {
                v25 = *(_QWORD*)(a3 + 32);
                v98 = v17;
                v99 = v22;
                if (v25 == 0) {
                  goto LABEL_153;
                }
                result = (*(__int64 (**)(__int64, int*, unsigned int*))(
                    *(_QWORD*)v25 + 48LL))(v25, &v99, &v98);
              }
              ++v22;
            } while (v20 != v22);
          } while (v17++ != v18);
        }
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void TrickEntity_Unknown96(PSEUDO_X8 x8_, __int64 a1)
{
  _OWORD* a2 = (_OWORD*)PSEUDO_X8_VALUE(x8_);
  void (*v4)(__int64, _QWORD*);
  __int64 v5;
  char* v6;
  char* v7;
  __int64 v8;
  int v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  char* v14;
  __int64 v15;
  int v16;
  char* v17;
  int v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  char* v24;
  __int64 v25;
  int v26;
  __int64 v27;
  char* v28;
  int v29;
  int v30;
  __int64 v31;
  char* v32;
  __int64 v33;
  int v34;
  char* v35;
  __int64 i;
  int v37;
  int v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  int v43;
  char* v44;
  int v45;
  int v46;
  __int128 v47;
  __int64 v48;
  int v49;
  int v50;
  float v51;
  float v52;
  float v53;
  __int128 v54;
  float v55;
  int v56;
  char* v57;
  char* v58;
  __int64 v59;
  _QWORD v60[4];
  _QWORD* v61;

  v56 = 0;
  v57 = nullptr;
  v58 = nullptr;
  v59 = 0;
  v60[0] = GameData_1f9b028;
  v60[1] = &v56;
  v4 = *(void (**)(__int64, _QWORD*))(*(_QWORD*)a1 + 752LL);
  v61 = v60;
  v4(a1, v60);
  if (v61 == v60) {
    v5 = 32;
  }
  else {
    if (v61 == nullptr) {
      goto LABEL_6;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v61 + v5))((__int64)v61);
LABEL_6:
  v6 = v57;
  v7 = v58;
  v8 = v58 - v57;
  if (v58 != v57) {
    v9 = *v57;
    v10 = v8 >> 2;
    v11 = (v8 >> 2) & 7;
    if ((unsigned __int64)(v8 >> 2) >= 8) {
      v14 = v57 + 16;
      v15 = 0;
      v13 = *v57;
      do {
        v15 -= 8;
        if (v13 >= *(v14 - 16)) {
          v13 = *(v14 - 16);
        }
        if (v13 >= *(v14 - 12)) {
          v13 = *(v14 - 12);
        }
        if (v13 >= *(v14 - 8)) {
          v13 = *(v14 - 8);
        }
        if (v13 >= *(v14 - 4)) {
          v13 = *(v14 - 4);
        }
        if (v13 >= *v14) {
          v13 = *v14;
        }
        if (v13 >= v14[4]) {
          v13 = v14[4];
        }
        if (v13 >= v14[8]) {
          v13 = v14[8];
        }
        v16 = v14[12];
        v14 += 32;
        if (v13 >= v16) {
          v13 = v16;
        }
      } while (-(__int64)(v10 & 0xFFFFFFFFFFFFFFF8LL) != v15);
      v12 = -v15;
      if (v11 == 0) {
      LABEL_35:
        v20 = v57[1];
        v21 = ((unsigned __int64)v8 >> 2) & 7;
        if (v10 >= 8) {
          v24 = v57 + 17;
          v25 = 0;
          v23 = v57[1];
          do {
            v25 -= 8;
            if (v23 >= *(v24 - 16)) {
              v23 = *(v24 - 16);
            }
            if (v23 >= *(v24 - 12)) {
              v23 = *(v24 - 12);
            }
            if (v23 >= *(v24 - 8)) {
              v23 = *(v24 - 8);
            }
            if (v23 >= *(v24 - 4)) {
              v23 = *(v24 - 4);
            }
            if (v23 >= *v24) {
              v23 = *v24;
            }
            if (v23 >= v24[4]) {
              v23 = v24[4];
            }
            if (v23 >= v24[8]) {
              v23 = v24[8];
            }
            v26 = v24[12];
            v24 += 32;
            if (v23 >= v26) {
              v23 = v26;
            }
          } while (-(__int64)(v10 & 0xFFFFFFFFFFFFFFF8LL) != v25);
          v22 = -v25;
          if (v21 == 0) {
          LABEL_61:
            if (v10 >= 8) {
              v32 = v57 + 16;
              v33 = 0;
              do {
                v33 -= 8;
                if (v9 <= *(v32 - 16)) {
                  v9 = *(v32 - 16);
                }
                if (v9 <= *(v32 - 12)) {
                  v9 = *(v32 - 12);
                }
                if (v9 <= *(v32 - 8)) {
                  v9 = *(v32 - 8);
                }
                if (v9 <= *(v32 - 4)) {
                  v9 = *(v32 - 4);
                }
                if (v9 <= *v32) {
                  v9 = *v32;
                }
                if (v9 <= v32[4]) {
                  v9 = v32[4];
                }
                if (v9 <= v32[8]) {
                  v9 = v32[8];
                }
                v34 = v32[12];
                v32 += 32;
                if (v9 <= v34) {
                  v9 = v34;
                }
              } while (-(__int64)(v10 & 0xFFFFFFFFFFFFFFF8LL) != v33);
              v31 = -v33;
              if (v21 == 0) {
              LABEL_87:
                if (v10 >= 8) {
                  v40 = v57 + 17;
                  v41 = 0;
                  v42 = -(__int64)(v10 & 0xFFFFFFFFFFFFFFF8LL);
                  do {
                    v41 -= 8;
                    if (v20 <= *(v40 - 16)) {
                      v20 = *(v40 - 16);
                    }
                    if (v20 <= *(v40 - 12)) {
                      v20 = *(v40 - 12);
                    }
                    if (v20 <= *(v40 - 8)) {
                      v20 = *(v40 - 8);
                    }
                    if (v20 <= *(v40 - 4)) {
                      v20 = *(v40 - 4);
                    }
                    if (v20 <= *v40) {
                      v20 = *v40;
                    }
                    if (v20 <= v40[4]) {
                      v20 = v40[4];
                    }
                    if (v20 <= v40[8]) {
                      v20 = v40[8];
                    }
                    v43 = v40[12];
                    v40 += 32;
                    if (v20 <= v43) {
                      v20 = v43;
                    }
                  } while (v42 != v41);
                  v39 = -v41;
                  if (v21 == 0) {
                    goto LABEL_113;
                  }
                }
                else {
                  v39 = 0;
                  if (v21 == 0) {
                  LABEL_113:
                    DWORD1(v47) = 0;
                    HIDWORD(v47) = 0;
                    *(float*)&v47 =
                        (float)((float)((float)((float)(unsigned int)(v13 + v9 +
                                                                      256) *
                                                5.0f) +
                                        2.5f) +
                                -0x1.4000000000000p+10f) *
                        0.5f;
                    *((float*)&v47 + 2) =
                        (float)((float)((float)((float)(unsigned int)(v23 +
                                                                      v20 +
                                                                      256) *
                                                5.0f) +
                                        2.5f) +
                                -0x1.4000000000000p+10f) *
                        0.5f;
                    *a2 = v47;
                    goto LABEL_114;
                  }
                }
                v44 = &v57[4 * v39 + 1];
                do {
                  v46 = *v44;
                  v44 += 4;
                  v45 = v46;
                  if (v20 <= v46) {
                    v20 = v45;
                  }
                  --v21;
                } while (v21 != 0);
                goto LABEL_113;
              }
            }
            else {
              v31 = 0;
              if (v21 == 0) {
                goto LABEL_87;
              }
            }
            v35 = &v57[4 * v31];
            for (i = v21; i != 0; --i) {
              v38 = *v35;
              v35 += 4;
              v37 = v38;
              if (v9 <= v38) {
                v9 = v37;
              }
            }
            goto LABEL_87;
          }
        }
        else {
          v22 = 0;
          v23 = v57[1];
          if (v21 == 0) {
            goto LABEL_61;
          }
        }
        v27 = v21;
        v28 = &v57[4 * v22 + 1];
        do {
          v30 = *v28;
          v28 += 4;
          v29 = v30;
          if (v23 >= v30) {
            v23 = v29;
          }
          --v27;
        } while (v27 != 0);
        goto LABEL_61;
      }
    }
    else {
      v12 = 0;
      v13 = *v57;
      if (v11 == 0) {
        goto LABEL_35;
      }
    }
    v17 = &v57[4 * v12];
    do {
      v19 = *v17;
      v17 += 4;
      v18 = v19;
      if (v13 >= v19) {
        v13 = v18;
      }
      --v11;
    } while (v11 != 0);
    goto LABEL_35;
  }
  if (v58 == nullptr) {
  LABEL_117:
    v49 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
    v50 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
    v51 = (float)((float)((float)(v49 + 256) * 5.0f) + 2.5f) +
          -0x1.4000000000000p+10f;
    v52 = (float)((float)((float)(v50 + 256) * 5.0f) + 2.5f) +
          -0x1.4000000000000p+10f;
    if (GameData_21ca2e8 != 0) {
      v55 = (float)((float)((float)(v50 + 256) * 5.0f) + 2.5f) +
            -0x1.4000000000000p+10f;
      v53 = Height_7c4d10(*(_QWORD*)(GameData_21ca2e8 + 61456),
                          (float)((float)((float)(v49 + 256) * 5.0f) + 2.5f) +
                              -0x1.4000000000000p+10f,
                          v52);
      v51 = (float)((float)((float)(v49 + 256) * 5.0f) + 2.5f) +
            -0x1.4000000000000p+10f;
      v52 = v55;
    }
    else {
      v53 = 0.0f;
    }
    *(_QWORD*)&v54 = __PAIR64__(LODWORD(v53), LODWORD(v51));
    *((_QWORD*)&v54 + 1) = LODWORD(v52);
    *a2 = v54;
    return;
  }
LABEL_114:
  v58 = v6;
  v48 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v48 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v48,
                                v6);
  if (v7 == v6) {
    goto LABEL_117;
  }
}

__int64 TrickEntity_Unknown97(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;
  void (*v3)(_QWORD*, _QWORD*);
  __int64 v4;
  char* v5;
  char* v6;
  __int64 v7;
  int v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  char* v13;
  char* v14;
  __int64 v15;
  int v16;
  int v17;
  char* v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  char* v25;
  __int64 v26;
  int v27;
  int v28;
  __int64 v29;
  char* v30;
  int v31;
  int v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  int v36;
  int v37;
  char* v38;
  __int64 i;
  int v40;
  int v41;
  __int64 v42;
  char* v43;
  __int64 v44;
  __int64 v45;
  int v46;
  int v47;
  char* v48;
  int v49;
  int v50;
  int v51;
  int v52;
  __int64 v56;
  int v58;
  char* v59;
  char* v60;
  __int64 v61;
  _QWORD v62[4];
  _QWORD* v63;

  v1 = a1;
  v58 = 0;
  v59 = nullptr;
  v60 = nullptr;
  v61 = 0;
  v62[0] = GameData_1f9b028;
  v2 = *a1;
  v62[1] = &v58;
  v3 = *(void (**)(_QWORD*, _QWORD*))(v2 + 752);
  v63 = v62;
  v3(a1, v62);
  if (v63 == v62) {
    v4 = 32;
  }
  else {
    if (v63 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v63 + v4))((__int64)v63);

LABEL_6:
  v6 = v59;
  v5 = v60;
  v7 = v60 - v59;
  if (v60 != v59) {
    v8 = *v59;
    v9 = v7 >> 2;
    v10 = (v7 >> 2) & 7;
    if ((unsigned __int64)(v7 >> 2) >= 8) {
      v14 = v59 + 16;
      v15 = 0;
      v12 = *v59;
      do {
        v16 = *(v14 - 16);
        v15 -= 8;
        if (v12 < v16) {
          v16 = v12;
        }
        if (v16 >= *(v14 - 12)) {
          v16 = *(v14 - 12);
        }
        if (v16 >= *(v14 - 8)) {
          v16 = *(v14 - 8);
        }
        if (v16 >= *(v14 - 4)) {
          v16 = *(v14 - 4);
        }
        if (v16 >= *v14) {
          v16 = *v14;
        }
        if (v16 >= v14[4]) {
          v16 = v14[4];
        }
        if (v16 >= v14[8]) {
          v16 = v14[8];
        }
        v17 = v14[12];
        v14 += 32;
        if (v16 >= v17) {
          v12 = v17;
        }
        else {
          v12 = v16;
        }
      } while (-(__int64)(v9 & 0xFFFFFFFFFFFFFFF8LL) != v15);
      v11 = -v15;
      if (v10 == 0) {
      LABEL_36:
        v21 = v59[1];
        v22 = ((unsigned __int64)v7 >> 2) & 7;
        if (v9 >= 8) {
          v25 = v59 + 17;
          v26 = 0;
          v24 = v59[1];
          do {
            v27 = *(v25 - 16);
            v26 -= 8;
            if (v24 < v27) {
              v27 = v24;
            }
            if (v27 >= *(v25 - 12)) {
              v27 = *(v25 - 12);
            }
            if (v27 >= *(v25 - 8)) {
              v27 = *(v25 - 8);
            }
            if (v27 >= *(v25 - 4)) {
              v27 = *(v25 - 4);
            }
            if (v27 >= *v25) {
              v27 = *v25;
            }
            if (v27 >= v25[4]) {
              v27 = v25[4];
            }
            if (v27 >= v25[8]) {
              v27 = v25[8];
            }
            v28 = v25[12];
            v25 += 32;
            if (v27 >= v28) {
              v24 = v28;
            }
            else {
              v24 = v27;
            }
          } while (-(__int64)(v9 & 0xFFFFFFFFFFFFFFF8LL) != v26);
          v23 = -v26;
          if (v22 == 0) {
          LABEL_63:
            if (v9 >= 8) {
              v34 = v59 + 16;
              v35 = 0;
              do {
                v36 = *(v34 - 16);
                v35 -= 8;
                if (v8 > v36) {
                  v36 = v8;
                }
                if (v36 <= *(v34 - 12)) {
                  v36 = *(v34 - 12);
                }
                if (v36 <= *(v34 - 8)) {
                  v36 = *(v34 - 8);
                }
                if (v36 <= *(v34 - 4)) {
                  v36 = *(v34 - 4);
                }
                if (v36 <= *v34) {
                  v36 = *v34;
                }
                if (v36 <= v34[4]) {
                  v36 = v34[4];
                }
                if (v36 <= v34[8]) {
                  v36 = v34[8];
                }
                v37 = v34[12];
                v34 += 32;
                if (v36 <= v37) {
                  v8 = v37;
                }
                else {
                  v8 = v36;
                }
              } while (-(__int64)(v9 & 0xFFFFFFFFFFFFFFF8LL) != v35);
              v33 = -v35;
              if (v22 == 0) {
              LABEL_90:
                if (v9 >= 8) {
                  v43 = v59 + 17;
                  v44 = 0;
                  v45 = -(__int64)(v9 & 0xFFFFFFFFFFFFFFF8LL);
                  do {
                    v46 = *(v43 - 16);
                    v44 -= 8;
                    if (v21 > v46) {
                      v46 = v21;
                    }
                    if (v46 <= *(v43 - 12)) {
                      v46 = *(v43 - 12);
                    }
                    if (v46 <= *(v43 - 8)) {
                      v46 = *(v43 - 8);
                    }
                    if (v46 <= *(v43 - 4)) {
                      v46 = *(v43 - 4);
                    }
                    if (v46 <= *v43) {
                      v46 = *v43;
                    }
                    if (v46 <= v43[4]) {
                      v46 = v43[4];
                    }
                    if (v46 <= v43[8]) {
                      v46 = v43[8];
                    }
                    v47 = v43[12];
                    v43 += 32;
                    if (v46 <= v47) {
                      v21 = v47;
                    }
                    else {
                      v21 = v46;
                    }
                  } while (v45 != v44);
                  v42 = -v44;
                  if (v22 == 0) {
                  LABEL_117:
                    v51 = (*(__int64 (**)(_QWORD*))(*v1 + 56LL))(v1);
                    v52 = (*(__int64 (**)(_QWORD*))(*v1 + 64LL))(v1);
                    v13 = v59;
                    LOBYTE(v1) =
                        v51 < v12 || v52 < v24 || v8 < v51 || v21 < v52;
                    if (v59 == nullptr) {
                      return (v5 != v6) & (unsigned __int8)v1;
                    }
                    goto LABEL_130;
                  }
                }
                else {
                  v42 = 0;
                  if (v22 == 0) {
                    goto LABEL_117;
                  }
                }
                v48 = &v59[4 * v42 + 1];
                do {
                  v50 = *v48;
                  v48 += 4;
                  v49 = v50;
                  if (v21 <= v50) {
                    v21 = v49;
                  }
                  --v22;
                } while (v22 != 0);
                goto LABEL_117;
              }
            }
            else {
              v33 = 0;
              if (v22 == 0) {
                goto LABEL_90;
              }
            }
            v38 = &v59[4 * v33];
            for (i = v22; i != 0; --i) {
              v41 = *v38;
              v38 += 4;
              v40 = v41;
              if (v8 <= v41) {
                v8 = v40;
              }
            }
            goto LABEL_90;
          }
        }
        else {
          v23 = 0;
          v24 = v59[1];
          if (v22 == 0) {
            goto LABEL_63;
          }
        }
        v29 = v22;
        v30 = &v59[4 * v23 + 1];
        do {
          v32 = *v30;
          v30 += 4;
          v31 = v32;
          if (v24 >= v32) {
            v24 = v31;
          }
          --v29;
        } while (v29 != 0);
        goto LABEL_63;
      }
    }
    else {
      v11 = 0;
      v12 = *v59;
      if (v10 == 0) {
        goto LABEL_36;
      }
    }
    v18 = &v59[4 * v11];
    do {
      v20 = *v18;
      v18 += 4;
      v19 = v20;
      if (v12 >= v20) {
        v12 = v19;
      }
      --v10;
    } while (v10 != 0);
    goto LABEL_36;
  }
  v13 = v59;
  if (v59 == nullptr) {
    return (v5 != v6) & (unsigned __int8)v1;
  }

LABEL_130:
  v60 = v13;
  v56 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v56 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v56,
                                v13);
  return (v5 != v6) & (unsigned __int8)v1;
}

__int64 game_map_anonymous_TrickEntity_EachObject_closure_Invoke(__int64 a1,
                                                                 int* a2,
                                                                 int* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  __int64 (***v5)();
  __int64 result;
  _QWORD* v7;
  unsigned __int64 v8;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64** v12;
  __int64* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  unsigned __int64 v18;
  int v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64** v22;
  __int64* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  float v28;
  float v29;
  float v30;
  _BOOL8 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 primeEm;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;

  v5 = game_map_812800(*a2, *a3);
  result = ((__int64 (*)(__int64 (***)(void)))(*v5)[5])(v5);
  if ((result & 1) != 0) {
    v7 = *(_QWORD**)(a1 + 64);
    result = ((__int64 (*)(__int64 (***)(void)))(*v5)[2])(v5);
    v8 = v7[1];
    if (v8 != 0 && v7[3] != 0) {
      v10 = v8 - 1;
      if ((v8 & (v8 - 1)) != 0) {
        v11 = (int)result;
        if (v8 <= (int)result) {
          v11 = (int)result % v8;
        }
      }
      else {
        v11 = v10 & (int)result;
      }
      v12 = *(__int64***)(*v7 + 8 * v11);
      if (v12 != nullptr) {
        v13 = *v12;
        if (v13 != nullptr) {
          if ((v8 & v10) == 0) {
            while (1) {
              v15 = v13[1];
              if (v15 == (int)result) {
                if (*((_DWORD*)v13 + 4) == (_DWORD)result) {
                  return result;
                }
              }
              else if ((v15 & v10) != v11) {
                goto LABEL_25;
              }
              v13 = (__int64*)*v13;
              if (v13 == nullptr) {
                goto LABEL_25;
              }
            }
          }
          do {
            v14 = v13[1];
            if (v14 == (int)result) {
              if (*((_DWORD*)v13 + 4) == (_DWORD)result) {
                return result;
              }
            }
            else {
              if (v14 >= v8) {
                v14 %= v8;
              }
              if (v14 != v11) {
                break;
              }
            }
            v13 = (__int64*)*v13;
          } while (v13 != nullptr);
        }
      }
    }
  LABEL_25:
    v16 = *(_QWORD*)(a1 + 64);
    v17 = ((__int64 (*)(__int64 (***)(void)))(*v5)[2])(v5);
    v18 = *(_QWORD*)(v16 + 8);
    v19 = v17;
    v20 = v17;
    if (v18 != 0) {
      v21 = v18 - 1;
      if ((v18 & (v18 - 1)) != 0) {
        v3 = v17;
        if (v18 <= v17) {
          v3 = v17 % v18;
        }
      }
      else {
        v3 = v21 & v17;
      }
      v22 = *(__int64***)(*(_QWORD*)v16 + 8 * v3);
      if (v22 != nullptr) {
        v23 = *v22;
        if (v23 != nullptr) {
          if ((v18 & v21) == 0) {
            while (1) {
              v25 = v23[1];
              if (v25 == v17) {
                if (*((_DWORD*)v23 + 4) == v17) {
                  goto LABEL_84;
                }
              }
              else if ((v25 & v21) != v3) {
                goto LABEL_47;
              }
              v23 = (__int64*)*v23;
              if (v23 == nullptr) {
                goto LABEL_47;
              }
            }
          }
          do {
            v24 = v23[1];
            if (v24 == v17) {
              if (*((_DWORD*)v23 + 4) == v17) {
                goto LABEL_84;
              }
            }
            else {
              if (v24 >= v18) {
                v24 %= v18;
              }
              if (v24 != v3) {
                break;
              }
            }
            v23 = (__int64*)*v23;
          } while (v23 != nullptr);
        }
      }
    }
  LABEL_47:
    v26 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
    *(_QWORD*)(v26 + 8) = v20;
    *(_DWORD*)(v26 + 16) = v19;
    v27 = (_QWORD*)v26;
    v28 = *(float*)(v16 + 32);
    v29 = (float)(unsigned __int64)(*(_QWORD*)(v16 + 24) + 1LL);
    if (v18 == 0 || (float)(v28 * (float)v18) < v29) {
      v30 = v29 / v28;
      v31 = true;
      if (v18 >= 3) {
        v31 = (v18 & (v18 - 1)) != 0;
      }
      v32 = v31 | (2 * v18);
      v33 = vcvtps_u64_f32(v30);
      if (v32 <= v33) {
        v34 = v33;
      }
      else {
        v34 = v32;
      }
      if (v34 == 1) {
        v34 = 2;
      }
      else if ((v34 & (v34 - 1)) != 0) {
        primeEm = std___1___next_prime(v34);
        v18 = *(_QWORD*)(v16 + 8);
        v34 = primeEm;
      }
      if (v34 > v18) {
        goto LABEL_59;
      }
      if (v34 < v18) {
        v36 = vcvtps_u64_f32((float)*(unsigned __int64*)(v16 + 24) /
                             *(float*)(v16 + 32));
        if (v18 < 3 || (v18 & (v18 - 1)) != 0) {
          v36 = std___1___next_prime(v36);
        }
        else {
          v37 = 1LL << -(char)__clz(v36 - 1);
          if (v36 >= 2) {
            v36 = v37;
          }
        }
        if (v34 <= v36) {
          v34 = v36;
        }
        if (v34 < v18) {
        LABEL_59:
          GameRoutine_7d0c20((__int64*)v16, v34);
        }
      }
      v18 = *(_QWORD*)(v16 + 8);
      if ((v18 & (v18 - 1)) != 0) {
        if (v18 <= v20) {
          v3 = v20 % v18;
        }
        else {
          v3 = v20;
        }
      }
      else {
        v3 = (v18 - 1) & v20;
      }
    }
    v38 = *(_QWORD*)v16;
    v39 = *(_QWORD**)(*(_QWORD*)v16 + 8 * v3);
    if (v39 != nullptr) {
      *v27 = *v39;
      *v39 = v27;
    }
    else {
      v40 = *(_QWORD*)(v16 + 16);
      *v27 = v40;
      *(_QWORD*)(v16 + 16) = v27;
      *(_QWORD*)(v38 + 8 * v3) = v16 + 16;
      if (v40 != 0) {
        v41 = *(_QWORD*)(v40 + 8);
        if ((v18 & (v18 - 1)) != 0) {
          if (v41 >= v18) {
            v41 %= v18;
          }
        }
        else {
          v41 &= v18 - 1;
        }
        *(_QWORD*)(*(_QWORD*)v16 + 8 * v41) = v27;
      }
    }
    ++*(_QWORD*)(v16 + 24);
  LABEL_84:
    v42 = *(_QWORD*)(a1 + 48);
    if (v42 == 0) {
      GameRoutine_60a310_alt1();
    }
    return (*(__int64 (**)(__int64, __int64 (***)(void)))(*(_QWORD*)v42 +
                                                          48LL))(v42, v5);
  }
  return result;
}

__int64 TrickEntity_7d1080(__int64 result)
{
  __int64 v1;
  int* v2;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  float v7;
  float v8;
  float v9;
  float32x4_t* v10;
  float32x4_t v11;
  float32x4_t v12;
  int8x16_t v13;
  float32x4_t v14;
  char v15;
  _QWORD* v16;
  __int64 v17;
  float v18;
  struct {
    _QWORD v19[48];
    int v20;
    char gap420_[4];
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
  } v19_;
  struct {
    __int64 (**v30)();
    char v31;
    char gap521_[23];
    __int64 (***v32)();
  } v30_;

  if (*(_QWORD*)(result + 40) != 0) {
    v1 = result;
    v19_.v19[25] = 0;
    v19_.v19[27] = 0;
    memset(v19_.v19, 0, 192);
    v19_.v20 = 1065353216;
    v2 = (int*)GameData_21d9d18;
    v3 = GameData_21d9d20;
    v19_.v19[40] = 0;
    v19_.v19[41] = 0;
    memset(&v19_.v19[43], 0, 40);
    v19_.v21 = 0;
    v19_.v22 = 0;
    v19_.v23 = 0;
    v19_.v24 = 0;
    v19_.v25 = 0;
    v19_.v26 = 0;
    v19_.v27 = 0;
    v19_.v28 = 0;
    v19_.v29 = 0;
    if (GameData_21d9d18 != GameData_21d9d20) {
      do {
        v4 = *v2++;
        *(_QWORD*)(GameData_21d9d00 + 8 * v4) = 0;
      } while (v2 != (int*)v3);
      v2 = (int*)GameData_21d9d18;
    }
    GameData_21d9d20 = (__int64)v2;
    GameData_21d9d60 = 0;
    GameData_21d9d68 = 0;
    GameData_21d9d70 = 0;
    GameData_21d9d7c = 0;
    GameData_21d9d38 = GameData_21d9d30;
    GameData_21d9cf0 = GameData_21d9ce8;
    GameData_21d9d50 = GameData_21d9d48;
    GameData_21d9d78 = 8;
    TrickEntity_7d1340(result, (__int64)v19_.v19);
    MapCharacter_9da6e0(v1 + 104, (__int64)v19_.v19, 3u);
    v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 56LL))(v1);
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 64LL))(v1);
    v7 = (float)((float)((float)(v5 + 256) * 0x1.4000000000000p+2f) +
                 0x1.4000000000000p+1f) +
         -0x1.4000000000000p+10f;
    v8 = (float)((float)((float)(v6 + 256) * 0x1.4000000000000p+2f) +
                 0x1.4000000000000p+1f) +
         -0x1.4000000000000p+10f;
    if (GameData_21ca2e8 != 0) {
      v18 = (float)((float)((float)(v6 + 256) * 0x1.4000000000000p+2f) +
                    0x1.4000000000000p+1f) +
            -0x1.4000000000000p+10f;
      v9 = Height_7c4d10(
          *(_QWORD*)(GameData_21ca2e8 + 61464),
          (float)((float)((float)(v5 + 256) * 0x1.4000000000000p+2f) +
                  0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f,
          v8);
      v7 = (float)((float)((float)(v5 + 256) * 0x1.4000000000000p+2f) +
                   0x1.4000000000000p+1f) +
           -0x1.4000000000000p+10f;
      v8 = v18;
      v10 = *(float32x4_t**)(v1 + 112);
      if (v10 == nullptr) {
        goto LABEL_11;
      }
    }
    else {
      v9 = 0x0.0p+0f;
      v10 = *(float32x4_t**)(v1 + 112);
      if (v10 == nullptr) {
        goto LABEL_11;
      }
    }
    LANES128(v11).n128_u64[0] = __PAIR64__(LODWORD(v9), LODWORD(v7));
    LANES128(v11).n128_u64[1] = LODWORD(v8);
    v12 = vsubq_f32(v10[19], v11);
    v13 = vmulq_f32(v12, v12);
    LANES128(v12).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
            .n64_f32[0] != 0x0.0p+0f) {
      LANES128(v10[19]).n128_f32[0] = v7;
      LANES128(v10[19]).n128_f32[1] = v9;
      v14 = v10[19];
      LANES128(v10[18]).n128_u32[2] |= 1u;
      LANES128(v14).n128_u64[1] = LODWORD(v8);
      v10[19] = v14;
    }
  LABEL_11:
    MapCharacter_9da8e0(v1 + 104,
                        (float)*(__int16*)(v1 + 18) * 0x1.1df46a0000000p-6f);
    v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 168LL))(v1);
    v16 = *(_QWORD**)(v1 + 120);
    if (v16 != nullptr) {
      v30_.v31 = v15;
      v30_.v30 = GameData_1fb96f8;
      v30_.v32 = &v30_.v30;
      CharacterBuilder_1083e90(v16, (__int64)&v30_.v30);
      if (v30_.v32 == &v30_.v30) {
        v17 = 4;
        goto LABEL_16;
      }
      if (v30_.v32 != nullptr) {
        v17 = 5;
      LABEL_16:
        ((__int64 (*)(__int64))(*v30_.v32)[v17])((__int64)v30_.v32);
      }
    }
    *(_BYTE*)(v1 + 136) = v15;
    MapCharacter_9daac0(v1 + 104, 0x723D4B8u);
    return TrickEntity_7d1480((__int64)v19_.v19);
  }
  return result;
}

__int64 TrickEntity_7d1340(__int64 a1, __int64 a2)
{
  int* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    unsigned __int64 v12[31];
    int v13;
  } v12_;
  const char* v14;

  v4 = (int*)GameData_21d9d18;
  v5 = GameData_21d9d20;
  if (GameData_21d9d18 != GameData_21d9d20) {
    do {
      v6 = *v4++;
      *(_QWORD*)(GameData_21d9d00 + 8 * v6) = 0;
    } while (v4 != (int*)v5);
    v4 = (int*)GameData_21d9d18;
  }
  v14 = nullptr;
  GameData_21d9d20 = (__int64)v4;
  GameData_21d9d60 = 0;
  GameData_21d9d68 = 0;
  GameData_21d9d70 = 0;
  GameData_21d9d7c = 0;
  GameData_21d9d38 = GameData_21d9d30;
  GameData_21d9cf0 = GameData_21d9ce8;
  GameData_21d9d50 = GameData_21d9d48;
  GameData_21d9d78 = 8;
  v7 = *(_QWORD*)(a1 + 40);
  if (v7 != 0) {
    LOBYTE(v14) = *(_BYTE*)(v7 + 16);
  }
  v8 = game_anonymous_ConditionMap_Add(a2, &v14, *(unsigned __int8*)(a1 + 14));
  v12_.v12[1] = (unsigned __int64)&GameData_1abb9b5;
  v12_.v12[0] = game_HashString((__int64)&GameData_1abb9b5);
  v9 = AssetTableFile_7e7b20(v8, v12_.v12);
  AssetTableFile_7e8000(v9);
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 216LL))(a1);
  if (v10 != 0) {
    v14 = "BMAP";
    AssetTableFile_7e9960((__int64)v12_.v12, v10, (__int64*)&v14);
    *(_QWORD*)(a2 + 240) = v12_.v12[30];
    *(_DWORD*)(a2 + 248) = v12_.v13;
    TrickEntity_7d1480((__int64)v12_.v12);
  }
  return a2;
}

__int64 TrickEntity_7d1480(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v1 = result;
  if ((*(_BYTE*)(result + 440) & 1) != 0) {
    v2 = *(_QWORD*)(result + 456);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
    }
  }
  if ((*(_BYTE*)(v1 + 416) & 1) != 0) {
    v4 = *(_QWORD*)(v1 + 432);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  v6 = *(_QWORD*)(v1 + 392);
  if (v6 != 0) {
    *(_QWORD*)(v1 + 400) = v6;
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
  }
  v8 = *(_QWORD**)(v1 + 368);
  if (v8 != nullptr) {
    v9 = fw_memory_g_heap_manager_ptr;
    do {
      v10 = (_QWORD*)*v8;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
        v11 = 128;
      }
      else {
        v11 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v11, v8);
      v8 = v10;
    } while (v10 != nullptr);
  }
  v12 = *(_QWORD*)(v1 + 352);
  *(_QWORD*)(v1 + 352) = 0;
  if (v12 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v12);
  }
  v14 = (_QWORD*)(v1 + 160);
  if (*(_QWORD*)(v1 + 160) != 0) {
    result = TrickEntity_7d16a0_alt1(v1 + 160);
    if (*v14 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, *v14);
    }
  }
  v16 = (_QWORD*)(v1 + 136);
  if (*(_QWORD*)(v1 + 136) != 0) {
    result = TrickEntity_7d16a0_alt1(v1 + 136);
    if (*v16 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, *v16);
    }
  }
  v18 = *(_QWORD*)(v1 + 104);
  if (v18 != 0) {
    *(_QWORD*)(v1 + 112) = v18;
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v18);
  }
  return result;
}

_QWORD* TrickEntity_7d16a0(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v1 = *result;
  v2 = result[1];
  v3 = result;
  if (*result != v2) {
    v4 = fw_memory_g_heap_manager_ptr;
    do {
      v5 = *(_QWORD*)(v2 - 24);
      if (v5 != 0) {
        v6 = *(_QWORD*)(v2 - 16);
        if (v5 == v6) {
          goto LABEL_15;
        }
        v7 = *(_QWORD*)(v2 - 16);
        do {
          v8 = *(_BYTE*)(v7 - 24);
          v7 -= 24;
          if ((v8 & 1) != 0) {
            v9 = *(_QWORD*)(v6 - 8);
            if (v9 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
                v10 = 128;
              }
              else {
                v10 = 56;
              }
              result = (_QWORD*)nn_mem_StandardAllocator_Free(
                  *(_QWORD*)v4 + v10, v9);
            }
          }
          v6 = v7;
        } while (v7 != v5);
        v11 = *(_QWORD*)(v2 - 24);
        *(_QWORD*)(v2 - 16) = v5;
        v5 = v11;
        if (v11 != 0) {
        LABEL_15:
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          result =
              (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v12, v5);
        }
      }
      if ((*(_BYTE*)(v2 - 48) & 1) != 0) {
        v13 = *(_QWORD*)(v2 - 32);
        if (v13 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v14 = 128;
          }
          else {
            v14 = 56;
          }
          result =
              (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v14, v13);
        }
      }
      v2 -= 72;
    } while (v1 != v2);
  }
  v3[1] = v1;
  return result;
}

_BYTE* game_map_anonymous_TrickEntity_GetTargetPoss_closure_Invoke(__int64 a1,
                                                                   _DWORD* a2,
                                                                   _DWORD* a3)
{
  char v3;
  __int64 v4;
  struct {
    _BYTE v6[2];
    __int16 v7;
  } v6_;

  v3 = *a2;
  v4 = *(_QWORD*)(a1 + 8);
  v6_.v7 = 0;
  v6_.v6[0] = v3;
  v6_.v6[1] = *a3;
  return GameRoutine_74e080_alt1((__int64*)(v4 + 8), (__int64)v6_.v6);
}

__int64 game_map_anonymous_TrickEntity_TryBroken_closure_Invoke(__int64 a1,
                                                                __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  long double v4;
  int v5;
  int v6;
  unsigned __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v15;

  v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *(_QWORD*)(a1 + 8);
  v3 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 184LL))(a2, 2),
  v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v6 = (v5 & 8) != 0 ? 2 : 3;
    if ((v6 & v5) == 0) {
      goto LABEL_17;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v7 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v7 + 172) == *(float*)(v7 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v7 + 160) + 16LL))(v7 + 160),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      v4 = *(long double*)(v7 + 208);
    }
    LODWORD(v4) = HIDWORD(v4);
    if (*((float*)&v4 + 3) == 0x1.0000000000000p+0f) {
      *(__n128*)&v4 = ((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v7 + 160) + 16LL))(
          v7 + 160, *((float*)&v4 + 3)),
      v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
      LODWORD(v4) = HIDWORD(v4);
      if (*((float*)&v4 + 3) == 0x1.0000000000000p+0f || v2 == 0) {
        goto LABEL_17;
      }
    LABEL_19:
      v9 = GameData_21d9958;
      if (GameData_21d9958 == 0) {
        v10 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 152, 16, 0),
        v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v11 = GameData_212c608[0];
        *(_QWORD*)(v10 + 96) = 0;
        *(_QWORD*)(v10 + 104) = 0;
        *(_QWORD*)(v10 + 112) = 0;
        *(_QWORD*)(v10 + 120) = 0;
        *(_QWORD*)(v10 + 128) = 0;
        *(_WORD*)(v10 + 136) = 0;
        *(_QWORD*)(v10 + 16) = 0;
        *(_QWORD*)(v10 + 24) = "NULL";
        *(_QWORD*)(v10 + 138) = 0;
        *(_QWORD*)(v10 + 144) = 0;
        *(_QWORD*)(v10 + 32) = 0;
        *(_QWORD*)(v10 + 40) = 0;
        *(_QWORD*)(v10 + 48) = 0;
        *(_QWORD*)(v10 + 56) = 0;
        *(_QWORD*)(v10 + 64) = 0;
        *(_QWORD*)(v10 + 72) = 0;
        *(_QWORD*)(v10 + 80) = 0;
        *(_QWORD*)(v10 + 88) = 0;
        *(_QWORD*)v10 = v11 + 16;
        *(_QWORD*)(v10 + 8) = 0;
        game_ProcInst_Register_alt1(v10),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
        GameData_21d9958 = v10;
        v12 = v10;
        *(_QWORD*)v10 = game_map_anonymous_ProcUpdate_vtable;
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                                  memory_order_acquire) &
             1) == 0) {
          v15 = __cxa_guard_acquire_alt1((__int64)&GameData_21c6868),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
          v12 = v10;
          if (v15 != 0) {
            GameData_21c67a8 = 3;
            GameData_21c67d0 = 0;
            GameData_21c67d8 = 0;
            GameData_21c67e0 = 0;
            GameData_21c67b0 = 0;
            GameData_21c67b8 = 0;
            GameData_21c67c0 = 0;
            GameData_21c67c8 = 0;
            GameData_21c6808 = 0;
            GameData_21c6810 = 0;
            GameData_21c6818 = 0;
            GameData_21c6820 = 0;
            GameData_21c6828 = 0;
            GameData_21c6850 = 0;
            GameData_21c6858 = 0;
            GameData_21c6860 = 0;
            GameData_21c6848 = 0;
            GameData_21c6838 = 0;
            GameData_21c6840 = 0;
            GameData_21c6830 = 0;
            GameData_21c67e8 = 14;
            GameData_21c67f0 = 0;
            GameData_21c67f8 = 16;
            GameData_21c6800 = 1;
            __cxa_guard_release_alt1((__int64)&GameData_21c6868),
                v4 = COERCE_AS(__typeof__(v4),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
            v12 = v10;
          }
        }
        v13 = v12;
        ProcInst_657850_alt1(v12, (__int64)&GameData_21c67a8,
                             (__int64)"ProcUpdate", 1, v2),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v9 = v13;
      }
      return (*(__int64 (**)(__int64, __int64, long double))(
          *(_QWORD*)v3 + 192LL))(v3, v9, v4);
    }
  }
  if (v2 != 0) {
    goto LABEL_19;
  }
LABEL_17:
  v9 = 0;
  return (*(__int64 (**)(__int64, __int64, long double))(*(_QWORD*)v3 + 192LL))(
      v3, v9, v4);
}

__int64 game_map_anonymous_TrickEntity_TryRepair_closure_Invoke(__int64 a1,
                                                                __int64 a2)
{
  __int64 v2;
  __int64 v3;
  long double v4;
  int v5;
  int v6;
  unsigned __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v15;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 184LL))(a2, 0);
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v6 = (v5 & 8) != 0 ? 2 : 3;
    if ((v6 & v5) == 0) {
      goto LABEL_17;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v7 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v7 + 172) == *(float*)(v7 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v7 + 160) + 16LL))(v7 + 160);
    }
    else {
      v4 = *(long double*)(v7 + 208);
    }
    LODWORD(v4) = HIDWORD(v4);
    if (*((float*)&v4 + 3) == 1.0) {
      *(__n128*)&v4 = ((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v7 + 160) + 16LL))(
          v7 + 160, *((float*)&v4 + 3));
      LODWORD(v4) = HIDWORD(v4);
      if (*((float*)&v4 + 3) == 1.0 || v2 == 0) {
        goto LABEL_17;
      }
    LABEL_19:
      v9 = GameData_21d9958;
      if (GameData_21d9958 == 0) {
        v10 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 152, 16, 0);
        v11 = GameData_212c608[0];
        *(_QWORD*)(v10 + 96) = 0;
        *(_QWORD*)(v10 + 104) = 0;
        *(_QWORD*)(v10 + 112) = 0;
        *(_QWORD*)(v10 + 120) = 0;
        *(_QWORD*)(v10 + 128) = 0;
        *(_WORD*)(v10 + 136) = 0;
        *(_QWORD*)(v10 + 16) = 0;
        *(_QWORD*)(v10 + 24) = "NULL";
        *(_QWORD*)(v10 + 138) = 0;
        *(_QWORD*)(v10 + 144) = 0;
        *(_QWORD*)(v10 + 32) = 0;
        *(_QWORD*)(v10 + 40) = 0;
        *(_QWORD*)(v10 + 48) = 0;
        *(_QWORD*)(v10 + 56) = 0;
        *(_QWORD*)(v10 + 64) = 0;
        *(_QWORD*)(v10 + 72) = 0;
        *(_QWORD*)(v10 + 80) = 0;
        *(_QWORD*)(v10 + 88) = 0;
        *(_QWORD*)v10 = v11 + 16;
        *(_QWORD*)(v10 + 8) = 0;
        game_ProcInst_Register();
        GameData_21d9958 = v10;
        v12 = v10;
        *(_QWORD*)v10 = game_map_anonymous_ProcUpdate_vtable;
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                                  memory_order_acquire) &
             1) == 0) {
          v15 = __cxa_guard_acquire(&GameData_21c6868);
          v12 = v10;
          if (v15 != 0) {
            GameData_21c67a8 = 3;
            GameData_21c67d0 = 0;
            GameData_21c67d8 = 0;
            GameData_21c67e0 = 0;
            GameData_21c67b0 = 0;
            GameData_21c67b8 = 0;
            GameData_21c67c0 = 0;
            GameData_21c67c8 = 0;
            GameData_21c6808 = 0;
            GameData_21c6810 = 0;
            GameData_21c6818 = 0;
            GameData_21c6820 = 0;
            GameData_21c6828 = 0;
            GameData_21c6850 = 0;
            GameData_21c6858 = 0;
            GameData_21c6860 = 0;
            GameData_21c6848 = 0;
            GameData_21c6838 = 0;
            GameData_21c6840 = 0;
            GameData_21c6830 = 0;
            GameData_21c67e8 = 14;
            GameData_21c67f0 = 0;
            GameData_21c67f8 = 16;
            GameData_21c6800 = 1;
            __cxa_guard_release(&GameData_21c6868);
            v12 = v10;
          }
        }
        v13 = v12;
        ProcInst_657850(v12, &GameData_21c67a8, "ProcUpdate", 1, v2);
        v9 = v13;
      }
      return (*(__int64 (**)(__int64, __int64, long double))(
          *(_QWORD*)v3 + 192LL))(v3, v9, v4);
    }
  }
  if (v2 != 0) {
    goto LABEL_19;
  }
LABEL_17:
  v9 = 0;
  return (*(__int64 (**)(__int64, __int64, long double))(*(_QWORD*)v3 + 192LL))(
      v3, v9, v4);
}

__int64 game_map_anonymous_TrickEntity_TryDone_closure_Invoke(__int64 a1,
                                                              __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  unsigned __int8 v5;
  __int64 v6;
  __int64 v7;
  long double v8;
  int v9;
  int v10;
  unsigned __int64 v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v19;
  __int16 v20[2];
  __int16 v21;

  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(a1 + 16);
  if (v3 != 0) {
    v5 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v3 + 176LL))(*(_QWORD*)(a1 + 8)),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v5 >= 4u) {
      v21 = 8;
      if (((*(__int64 (**)(__int64, __int16*))(*(_QWORD*)v3 + 784LL))(v3,
                                                                      &v21) &
           1) != 0) {
        v6 = 2;
      }
      else {
        v20[0] = 4;
        v6 = (*(__int64 (**)(__int64, __int16*))(*(_QWORD*)v3 + 784LL))(v3,
                                                                        v20) &
             1,
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    else {
      v6 = (unsigned __int8)(v5 + 3);
    }
  }
  else {
    v6 = 0;
  }
  v7 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 184LL))(a2, v6),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v9 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v10 = (v9 & 8) != 0 ? 2 : 3;
    if ((v10 & v9) == 0) {
      goto LABEL_24;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v11 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    if (*(float*)(v11 + 172) == *(float*)(v11 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v11 + 160) + 16LL))(v11 + 160),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      v8 = *(long double*)(v11 + 208);
    }
    LODWORD(v8) = HIDWORD(v8);
    if (*((float*)&v8 + 3) == 0x1.0000000000000p+0f) {
      *(__n128*)&v8 = ((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v11 + 160) + 16LL))(
          v11 + 160, *((float*)&v8 + 3)),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
      LODWORD(v8) = HIDWORD(v8);
      if (*((float*)&v8 + 3) == 0x1.0000000000000p+0f || v2 == 0) {
        goto LABEL_24;
      }
    LABEL_26:
      v13 = GameData_21d9958;
      if (GameData_21d9958 == 0) {
        v14 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 152, 16, 0),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v15 = GameData_212c608[0];
        *(_QWORD*)(v14 + 96) = 0;
        *(_QWORD*)(v14 + 104) = 0;
        *(_QWORD*)(v14 + 112) = 0;
        *(_QWORD*)(v14 + 120) = 0;
        *(_QWORD*)(v14 + 128) = 0;
        *(_WORD*)(v14 + 136) = 0;
        *(_QWORD*)(v14 + 16) = 0;
        *(_QWORD*)(v14 + 24) = "NULL";
        *(_QWORD*)(v14 + 138) = 0;
        *(_QWORD*)(v14 + 144) = 0;
        *(_QWORD*)(v14 + 32) = 0;
        *(_QWORD*)(v14 + 40) = 0;
        *(_QWORD*)(v14 + 48) = 0;
        *(_QWORD*)(v14 + 56) = 0;
        *(_QWORD*)(v14 + 64) = 0;
        *(_QWORD*)(v14 + 72) = 0;
        *(_QWORD*)(v14 + 80) = 0;
        *(_QWORD*)(v14 + 88) = 0;
        *(_QWORD*)v14 = v15 + 16;
        *(_QWORD*)(v14 + 8) = 0;
        game_ProcInst_Register_alt1(v14),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
        GameData_21d9958 = v14;
        v16 = v14;
        *(_QWORD*)v14 = game_map_anonymous_ProcUpdate_vtable;
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                                  memory_order_acquire) &
             1) == 0) {
          v19 = __cxa_guard_acquire_alt1((__int64)&GameData_21c6868),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
          v16 = v14;
          if (v19 != 0) {
            GameData_21c67a8 = 3;
            GameData_21c67d0 = 0;
            GameData_21c67d8 = 0;
            GameData_21c67e0 = 0;
            GameData_21c67b0 = 0;
            GameData_21c67b8 = 0;
            GameData_21c67c0 = 0;
            GameData_21c67c8 = 0;
            GameData_21c6808 = 0;
            GameData_21c6810 = 0;
            GameData_21c6818 = 0;
            GameData_21c6820 = 0;
            GameData_21c6828 = 0;
            GameData_21c6850 = 0;
            GameData_21c6858 = 0;
            GameData_21c6860 = 0;
            GameData_21c6848 = 0;
            GameData_21c6838 = 0;
            GameData_21c6840 = 0;
            GameData_21c6830 = 0;
            GameData_21c67e8 = 14;
            GameData_21c67f0 = 0;
            GameData_21c67f8 = 16;
            GameData_21c6800 = 1;
            __cxa_guard_release_alt1((__int64)&GameData_21c6868),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
            v16 = v14;
          }
        }
        v17 = v16;
        ProcInst_657850_alt1(v16, (__int64)&GameData_21c67a8,
                             (__int64)"ProcUpdate", 1, v2),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v13 = v17;
      }
      return (*(__int64 (**)(__int64, __int64, long double))(
          *(_QWORD*)v7 + 192LL))(v7, v13, v8);
    }
  }
  if (v2 != 0) {
    goto LABEL_26;
  }
LABEL_24:
  v13 = 0;
  return (*(__int64 (**)(__int64, __int64, long double))(*(_QWORD*)v7 + 192LL))(
      v7, v13, v8);
}

__int64 game_map_anonymous_TrickEntity_TryDone_closure0_Invoke(__int64 a1,
                                                               __int64 a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int8 v5;
  __int64 v6;
  __int64 v7;
  long double v8;
  int v9;
  int v10;
  unsigned __int64 v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v19;
  __int16 v20[2];
  __int16 v21;

  v3 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(a1 + 16);
  if (v3 != 0) {
    v5 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v3 + 176LL))(*(_QWORD*)(a1 + 8));
    if (v5 >= 4u) {
      v21 = 8;
      if (((*(__int64 (**)(__int64, __int16*))(*(_QWORD*)v3 + 784LL))(v3,
                                                                      &v21) &
           1) != 0) {
        v6 = 2;
      }
      else {
        v20[0] = 4;
        v6 = (*(__int64 (**)(__int64, __int16*))(*(_QWORD*)v3 + 784LL))(v3,
                                                                        v20) &
             1;
      }
    }
    else {
      v6 = (unsigned __int8)(v5 + 3);
    }
  }
  else {
    v6 = 0;
  }
  v7 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 184LL))(a2, v6);
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v9 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v10 = (v9 & 8) != 0 ? 2 : 3;
    if ((v10 & v9) == 0) {
      goto LABEL_24;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v11 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    if (*(float*)(v11 + 172) == *(float*)(v11 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v11 + 160) + 16LL))(v11 + 160);
    }
    else {
      v8 = *(long double*)(v11 + 208);
    }
    LODWORD(v8) = HIDWORD(v8);
    if (*((float*)&v8 + 3) == 1.0) {
      *(__n128*)&v8 = ((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v11 + 160) + 16LL))(
          v11 + 160, *((float*)&v8 + 3));
      LODWORD(v8) = HIDWORD(v8);
      if (*((float*)&v8 + 3) == 1.0 || v2 == 0) {
        goto LABEL_24;
      }
    LABEL_26:
      v13 = GameData_21d9958;
      if (GameData_21d9958 == 0) {
        v14 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 152, 16, 0);
        v15 = GameData_212c608[0];
        *(_QWORD*)(v14 + 96) = 0;
        *(_QWORD*)(v14 + 104) = 0;
        *(_QWORD*)(v14 + 112) = 0;
        *(_QWORD*)(v14 + 120) = 0;
        *(_QWORD*)(v14 + 128) = 0;
        *(_WORD*)(v14 + 136) = 0;
        *(_QWORD*)(v14 + 16) = 0;
        *(_QWORD*)(v14 + 24) = "NULL";
        *(_QWORD*)(v14 + 138) = 0;
        *(_QWORD*)(v14 + 144) = 0;
        *(_QWORD*)(v14 + 32) = 0;
        *(_QWORD*)(v14 + 40) = 0;
        *(_QWORD*)(v14 + 48) = 0;
        *(_QWORD*)(v14 + 56) = 0;
        *(_QWORD*)(v14 + 64) = 0;
        *(_QWORD*)(v14 + 72) = 0;
        *(_QWORD*)(v14 + 80) = 0;
        *(_QWORD*)(v14 + 88) = 0;
        *(_QWORD*)v14 = v15 + 16;
        *(_QWORD*)(v14 + 8) = 0;
        game_ProcInst_Register();
        GameData_21d9958 = v14;
        v16 = v14;
        *(_QWORD*)v14 = game_map_anonymous_ProcUpdate_vtable;
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                                  memory_order_acquire) &
             1) == 0) {
          v19 = __cxa_guard_acquire(&GameData_21c6868);
          v16 = v14;
          if (v19 != 0) {
            GameData_21c67a8 = 3;
            GameData_21c67d0 = 0;
            GameData_21c67d8 = 0;
            GameData_21c67e0 = 0;
            GameData_21c67b0 = 0;
            GameData_21c67b8 = 0;
            GameData_21c67c0 = 0;
            GameData_21c67c8 = 0;
            GameData_21c6808 = 0;
            GameData_21c6810 = 0;
            GameData_21c6818 = 0;
            GameData_21c6820 = 0;
            GameData_21c6828 = 0;
            GameData_21c6850 = 0;
            GameData_21c6858 = 0;
            GameData_21c6860 = 0;
            GameData_21c6848 = 0;
            GameData_21c6838 = 0;
            GameData_21c6840 = 0;
            GameData_21c6830 = 0;
            GameData_21c67e8 = 14;
            GameData_21c67f0 = 0;
            GameData_21c67f8 = 16;
            GameData_21c6800 = 1;
            __cxa_guard_release(&GameData_21c6868);
            v16 = v14;
          }
        }
        v17 = v16;
        ProcInst_657850(v16, &GameData_21c67a8, "ProcUpdate", 1, v2);
        v13 = v17;
      }
      return (*(__int64 (**)(__int64, __int64, long double))(
          *(_QWORD*)v7 + 192LL))(v7, v13, v8);
    }
  }
  if (v2 != 0) {
    goto LABEL_26;
  }
LABEL_24:
  v13 = 0;
  return (*(__int64 (**)(__int64, __int64, long double))(*(_QWORD*)v7 + 192LL))(
      v7, v13, v8);
}

__int64 game_map_anonymous_TrickEntity_TryCancel_closure_Invoke(__int64 a1,
                                                                __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  long double v4;
  int v5;
  int v6;
  unsigned __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v15;

  v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *(_QWORD*)(a1 + 8);
  v3 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 184LL))(a2, 0),
  v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v6 = (v5 & 8) != 0 ? 2 : 3;
    if ((v6 & v5) == 0) {
      goto LABEL_17;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v7 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v7 + 172) == *(float*)(v7 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v7 + 160) + 16LL))(v7 + 160),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      v4 = *(long double*)(v7 + 208);
    }
    LODWORD(v4) = HIDWORD(v4);
    if (*((float*)&v4 + 3) == 0x1.0000000000000p+0f) {
      *(__n128*)&v4 = ((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v7 + 160) + 16LL))(
          v7 + 160, *((float*)&v4 + 3)),
      v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
      LODWORD(v4) = HIDWORD(v4);
      if (*((float*)&v4 + 3) == 0x1.0000000000000p+0f || v2 == 0) {
        goto LABEL_17;
      }
    LABEL_19:
      v9 = GameData_21d9958;
      if (GameData_21d9958 == 0) {
        v10 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 152, 16, 0),
        v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v11 = GameData_212c608[0];
        *(_QWORD*)(v10 + 96) = 0;
        *(_QWORD*)(v10 + 104) = 0;
        *(_QWORD*)(v10 + 112) = 0;
        *(_QWORD*)(v10 + 120) = 0;
        *(_QWORD*)(v10 + 128) = 0;
        *(_WORD*)(v10 + 136) = 0;
        *(_QWORD*)(v10 + 16) = 0;
        *(_QWORD*)(v10 + 24) = "NULL";
        *(_QWORD*)(v10 + 138) = 0;
        *(_QWORD*)(v10 + 144) = 0;
        *(_QWORD*)(v10 + 32) = 0;
        *(_QWORD*)(v10 + 40) = 0;
        *(_QWORD*)(v10 + 48) = 0;
        *(_QWORD*)(v10 + 56) = 0;
        *(_QWORD*)(v10 + 64) = 0;
        *(_QWORD*)(v10 + 72) = 0;
        *(_QWORD*)(v10 + 80) = 0;
        *(_QWORD*)(v10 + 88) = 0;
        *(_QWORD*)v10 = v11 + 16;
        *(_QWORD*)(v10 + 8) = 0;
        game_ProcInst_Register_alt1(v10),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
        GameData_21d9958 = v10;
        v12 = v10;
        *(_QWORD*)v10 = game_map_anonymous_ProcUpdate_vtable;
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                                  memory_order_acquire) &
             1) == 0) {
          v15 = __cxa_guard_acquire_alt1((__int64)&GameData_21c6868),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
          v12 = v10;
          if (v15 != 0) {
            GameData_21c67a8 = 3;
            GameData_21c67d0 = 0;
            GameData_21c67d8 = 0;
            GameData_21c67e0 = 0;
            GameData_21c67b0 = 0;
            GameData_21c67b8 = 0;
            GameData_21c67c0 = 0;
            GameData_21c67c8 = 0;
            GameData_21c6808 = 0;
            GameData_21c6810 = 0;
            GameData_21c6818 = 0;
            GameData_21c6820 = 0;
            GameData_21c6828 = 0;
            GameData_21c6850 = 0;
            GameData_21c6858 = 0;
            GameData_21c6860 = 0;
            GameData_21c6848 = 0;
            GameData_21c6838 = 0;
            GameData_21c6840 = 0;
            GameData_21c6830 = 0;
            GameData_21c67e8 = 14;
            GameData_21c67f0 = 0;
            GameData_21c67f8 = 16;
            GameData_21c6800 = 1;
            __cxa_guard_release_alt1((__int64)&GameData_21c6868),
                v4 = COERCE_AS(__typeof__(v4),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
            v12 = v10;
          }
        }
        v13 = v12;
        ProcInst_657850_alt1(v12, (__int64)&GameData_21c67a8,
                             (__int64)"ProcUpdate", 1, v2),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v9 = v13;
      }
      return (*(__int64 (**)(__int64, __int64, long double))(
          *(_QWORD*)v3 + 192LL))(v3, v9, v4);
    }
  }
  if (v2 != 0) {
    goto LABEL_19;
  }
LABEL_17:
  v9 = 0;
  return (*(__int64 (**)(__int64, __int64, long double))(*(_QWORD*)v3 + 192LL))(
      v3, v9, v4);
}

_QWORD* game_map_anonymous_TrickEntity_TryCancel(_QWORD* result, int a2,
                                                 char a3, char a4, int a5)
{
  __int64* v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  _QWORD* v20;
  __int64 v21;
  int v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int16 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  int v41;
  float v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD v47[5];

  v7 = GameData_212cfb8[0];
  v8 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
  v9 = (_DWORD)result + 32 * a2;
  if (v9 >= 0x400) {
    v10 = 0;
  }
  else {
    v10 = v9;
  }
  v11 = *(__int16*)(v8 + 2LL * (unsigned int)v10 + 4200);
  v12 = *(_QWORD*)(v8 + 8);
  if ((v11 < 0 || v12 == 0) &&
      ((v11 = *(__int16*)(v8 + 2 * v10 + 2152)) < 0 || v12 == 0)) {
    v23 = *(__int16*)(v8 + 104 + 2 * v10);
    if (v23 < 0) {
      return result;
    }
    v13 = v12 + 144LL * (unsigned int)v23;
    if (v13 == 0) {
      return result;
    }
  }
  else {
    v13 = v12 + 144LL * (unsigned int)v11;
    if (v13 == 0) {
      return result;
    }
  }
  v15 = as_g_script_manager_ptr;
  v16 = *as_g_script_manager_ptr;
  v17 = *(
      _QWORD*)(v16 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 472LL))(v17);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v18 + 24) + 456LL))(
           *(_QWORD*)(v18 + 24)) &
       1) == 0) {
    return (_QWORD*)game_script_WaitProc();
  }
  v19 = GameData_212cfb0[0];
  if ((a3 & 1) == 0) {
    v24 = (_QWORD*)*GameData_212cfb0[0];
    if (*GameData_212cfb0[0] != 0 ||
        (v24 = *(_QWORD**)GameData_212eb20[0],
         *(_QWORD*)GameData_212eb20[0] != 0) ||
        (v24 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
      v25 = v24[10];
      if (v25 != 0) {
        v26 =
            *(_QWORD*)(*(_QWORD*)(v24[6] + 8 * ((v25 + v24[9] - 1) / 0x33uLL)) +
                       80 * ((v25 + v24[9] - 1) % 0x33uLL) + 72);
      }
      else {
        v26 = 0;
      }
    }
    else {
      v26 = game_hub_ProcHubSeqView_instance_;
      if (game_hub_ProcHubSeqView_instance_ != 0) {
        v26 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
      }
    }
    if (*(_QWORD*)(v13 + 48) == 0 || ((v28 = *(_WORD*)(v13 + 20)) & 4) == 0) {
    LABEL_37:
      if ((a4 & 1) == 0) {
        goto LABEL_57;
      }
      goto LABEL_51;
    }
    v29 = *(_QWORD*)(*v7 + 16);
    *(_WORD*)(v13 + 20) = v28 & 0xFFFB;
    v47[4] = (_QWORD)v47;
    v47[0] = GameData_1f9b618;
    v47[1] = v26;
    (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v13 + 672LL))(v13, v47);
    if ((_QWORD*)v47[4] == v47) {
      v30 = 32;
    }
    else {
      if (v47[4] == 0) {
        goto LABEL_35;
      }
      v30 = 40;
    }
    (*(void (**)(void*))(*(_QWORD*)v47[4] + v30))((void*)v47[4]);
  LABEL_35:
    if (GameData_21d9958 == 0) {
      GameRoutine_7d5160(*(_QWORD*)(*v7 + 16), 1);
      v31 = *GameData_21309c8[0];
      if (*GameData_21309c8[0] != 0 && *(_BYTE*)(v31 + 8) == 1 &&
          (*(_BYTE*)(v31 + 9) & 1) == 0) {
        *(_DWORD*)(v31 + 12) |= 0x402u;
      }
    }
    *(_BYTE*)(v29 + 92848) = 1;
    goto LABEL_37;
  }
  v20 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0) {
    v21 = v20[10];
    v22 = a5;
    if (v21 == 0) {
      goto LABEL_47;
    }
  LABEL_26:
    v27 = *(_QWORD*)(*(_QWORD*)(v20[6] + 8 * ((v21 + v20[9] - 1) / 0x33uLL)) +
                     80 * ((v21 + v20[9] - 1) % 0x33uLL) + 72);
    goto LABEL_48;
  }
  v20 = *(_QWORD**)GameData_212eb20[0];
  v22 = a5;
  if (*(_QWORD*)GameData_212eb20[0] != 0 ||
      (v20 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v21 = v20[10];
    if (v21 != 0) {
      goto LABEL_26;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v27 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_48;
  }
LABEL_47:
  v27 = 0;
LABEL_48:
  if (v22 < 0) {
    LOBYTE(v22) = *(_BYTE*)(*GameData_212ce90[0] + 24);
  }
  v32 = *(_QWORD*)(*v7 + 16);
  LOBYTE(v47[0]) = v22;
  game_map_anonymous_TrickEntity_TryDone_alt1(v32, v27, v13, v47);
  if ((a4 & 1) == 0) {
  LABEL_57:
    v36 = *v15;
    v37 = *(_QWORD*)(v36 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    if (v37 != 0) {
      v38 = (*(__int64 (**)(__int64))(*(_QWORD*)v37 + 472LL))(v37);
    }
    else {
      v38 = 0;
    }
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v38 + 24) + 448LL))(
        *(_QWORD*)(v38 + 24), 1);
    result = *(_QWORD**)(v38 + 2240);
    *(_QWORD*)(v38 + 2240) = 0;
    if (result == (_QWORD*)(v38 + 2208)) {
      v39 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v39 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(void*))(*result + v39))(result);
  }
LABEL_51:
  if (GameData_21d9958 == 0) {
    goto LABEL_57;
  }
  game_script_StartWaitProc(GameData_21d9958);
  v33 = (_QWORD*)*v19;
  if (*v19 != 0 ||
      (v33 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v33 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v34 = v33[10];
    if (v34 != 0) {
      v35 = *(_QWORD*)(*(_QWORD*)(v33[6] + 8 * ((v34 + v33[9] - 1) / 0x33uLL)) +
                       80 * ((v34 + v33[9] - 1) % 0x33uLL) + 72);
    }
    else {
      v35 = 0;
    }
  }
  else {
    v35 = game_hub_ProcHubSeqView_instance_;
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v35 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    }
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v40 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v41 = 2)
           : (v41 = 3),
       (v41 & v40) != 0)) {
    v42 = *(float*)(v35 + 144);
    if (v42 < 1.0) {
      v42 = 1.0;
    }
    *(_WORD*)(v35 + 136) = *(_WORD*)(v35 + 136) & 0xFF97 | 0x20;
    *(float*)(v35 + 144) = v42;
  }
  v43 = *GameData_21309c8[0];
  if (*GameData_21309c8[0] != 0 && *(_BYTE*)(v43 + 8) == 1 &&
      (*(_BYTE*)(v43 + 9) & 1) == 0) {
    *(_DWORD*)(v43 + 12) |= 0x402u;
  }
  v44 = *v15;
  v45 = *(
      _QWORD*)(v44 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v46 = (*(__int64 (**)(__int64))(*(_QWORD*)v45 + 472LL))(v45);
  return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
      **(_QWORD**)(v46 + 24) + 448LL))(*(_QWORD*)(v46 + 24), 0);
}

#pragma GCC visibility pop
