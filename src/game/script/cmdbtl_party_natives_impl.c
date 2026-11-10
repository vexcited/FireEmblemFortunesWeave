#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 CmdBtlUnit_e79df0(_QWORD);
__int64 CmdbtlPartyNatives_e9cb40(_QWORD, _QWORD);
__int64 CmdbtlPartyNatives_eb8a30(_QWORD, _QWORD);
__int64 GameRoutine_1084940(_QWORD, _QWORD, double);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_e73e20(_QWORD);
__int64 GameRoutine_e74040(_QWORD, _QWORD);
__int64 GameRoutine_e790e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e7c3f0(__int64, int, __int16, float);
__int64 GameRoutine_e7cd60(_QWORD);
__int64 GameRoutine_e80220(__int64, __int64*, _QWORD*, __int64, __int64, float);
__int64 GameRoutine_ebabe0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ff7420(_QWORD, _QWORD);
__int64 GameRoutine_ff7720(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_UnitPool_CountAll(_QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _QWORD GameData_1b91af0[3];
extern _QWORD GameData_1b94450[3];
extern _UNKNOWN GameData_1ad7123;
extern _UNKNOWN GameData_1af5ec9;
extern _UNKNOWN GameData_2216780;
extern __int64 (*GameData_1fe7b78[])();
extern __int64 (*GameData_1fe7ec8[])();
extern __int64 (*GameData_1fec818[])();
extern __int64 (*GameData_1fec998[])();
extern __int64 (*GameData_1feca18[])();
extern __int64 (*GameData_1fecc18[])();
extern __int64 GameData_212c060;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21ca310;
extern __int64 GameData_21f4cc0;
extern __int64 GameData_2203490;
extern __int64 GameData_22190c8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212ea58;
extern __int64* GameData_212f2e0;
extern char GameData_2216858;
extern int GameData_216772c;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_6e5c60(_QWORD);
void __attribute__((noreturn)) GameRoutine_705570(_QWORD);
void __attribute__((noreturn)) GameRoutine_8123d0(void);
bool CmdbtlPartyNatives_e73070(_QWORD* a1, __int64* a2);
__int64 CmdbtlPartyNatives_e738c0(__int64 a1, unsigned int a2);
__int64 CmdbtlPartyNatives_e73d00(__int64 a1, __int64 a2);
__int64 CmdbtlPartyNatives_e749a0(__int64 result, _QWORD* a2);
__int64 CmdbtlPartyNatives_e77d30(__int64 result, int a2);
_QWORD* CmdbtlPartyNatives_e9a800(_QWORD* a1, __int64 a2);
_QWORD* CmdbtlPartyNatives_e9aba0(_QWORD* a1, __int64 a2);
__int64 CmdbtlPartyNatives_e9ba00(__int64 a1, __int64 a2, unsigned int a3,
                                  unsigned __int8 a4, __int64* a5, float a6);
__int64 CmdbtlPartyNatives_e9c620(_QWORD* a1, char a2);
__int64 CmdbtlPartyNatives_e9cce0(__int64 result);
unsigned __int64 CmdbtlPartyNatives_eb4500(__int64 a1);
__int64 CmdbtlPartyNatives_eb7a80(__int64 result);
__int64 CmdbtlPartyNatives_eb8c40(__int64 a1);
_QWORD* CmdbtlPartyNatives_eba910(_QWORD* a1, __int64* a2);
__int64* CmdbtlPartyNatives_ebaa20(__int64* result, _QWORD* a2);
__int64 CharacterAnimator_1079e10(_QWORD);
__int64 CmdBtlUnit_e7ada0(_QWORD);
__int64 CmdBtlUnit_e7da80(_QWORD, _QWORD, float);
__int64
    CmdbtlPartyNatives_e73070_alt1(_QWORD,
                                   _QWORD) __asm__("CmdbtlPartyNatives_e73070");
__int64
    CmdbtlPartyNatives_e9a800_alt1(_QWORD,
                                   _QWORD) __asm__("CmdbtlPartyNatives_e9a800");
__int64
    CmdbtlPartyNatives_eb4500_alt1(_QWORD) __asm__("CmdbtlPartyNatives_eb4500");
__int64 GameRoutine_6ddce0(_QWORD);
__int64 GameRoutine_842b40(_QWORD, _QWORD);
__int64 GameRoutine_e7bed0(_QWORD, _QWORD);
__int64 Manager_66cc20(_QWORD, _QWORD);
__int64 UnitActor_81d740(_QWORD);
__int64 Unit_6cb080(_QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_UnitItemList_Find_70f780(_QWORD);
__int64 game_Unit_CheckEquipment(_QWORD);
__int64 game_Unit_EquipFirstWeapon(_QWORD);
__int64 game_Unit_EquipItem_6d8f40(_QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(void) __asm__(
    "std___1___shared_weak_count_lock");
__int64 strlen(_QWORD);
extern __int64 (*GameData_1fed038[])();
extern __int64 GameData_21c99b8;
extern __int64 as_g_script_manager;
extern __int64 as_g_thread_info;
extern __int64* as_g_script_manager_ptr;
struct PseudoSret GameRoutine_e7dd50(_QWORD, _QWORD);
void __attribute__((noreturn)) String_60a1d0(void);
__int64 cmdbtl_party_SetLeaderId(int a1, int a2);
__int64 cmdbtl_party_SetLockTargetLeader(int a1, int a2);
__int64 cmdbtl_party_GetUnitHp(int a1);
bool cmdbtl_party_IsPossession(int a1, __int64 a2);
__int64 cmdbtl_party_Equip(int a1, __int64 a2);
__int64 cmdbtl_party_HasSkill(int a1, __int64 a2);
__int64 cmdbtl_party_RemovePrivateSkill(int a1, char* a2);
__int64 cmdbtl_party_AddPrivateSkillOnce(int a1, __int64 a2);
__int64 cmdbtl_party_PlayMotion_eb2160(int a1, __int64 a2);
__int64 cmdbtl_party_PlayMotion_eb2360(int a1, __int64 a2, float a3);
__int64 cmdbtl_party_PlayMotionDetail(int a1, __int64 a2, float a3, float a4,
                                      float a5);
__int64 cmdbtl_party_PlayFacial(int a1, __int64 a2, float a3);
__int64 cmdbtl_party_PlayDefaultFacial(int a1, float a2);
__int64 cmdbtl_party_SetEnableFacialUpdate(int a1, char a2);
__int64 cmdbtl_party_SetHeadLookToTarget(int a1, int a2);
__int64 cmdbtl_party_IsIdle(int a1);
_QWORD* cmdbtl_party_WaitIdle(int a1);
__int64 cmdbtl_party_SetAngle(int a1, int* a2);
_QWORD* cmdbtl_party_PlayVoice(int a1, __int64 a2);
__int64 cmdbtl_party_AddTemporaryUnit(__int64 a1);
__int64 cmdbtl_party_AddTemporaryGuest(__int64 a1);
__attribute__((swiftcall)) void CmdBtlUnit_e7de70(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void GameRoutine_1085a10(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__int64 GameRoutine_25ec90(_QWORD, _QWORD);
__int64 GameRoutine_25eca0(_QWORD, _QWORD);
__int64 GameRoutine_cb2f70(__int64*, __int64, unsigned __int64);
__int64 Unit_6ca760(__int64, _WORD*);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__n128 nn_mem_StandardAllocator_Free_alt2(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt2(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fedf48[])();
extern __int64* GameData_212c878[6];
extern char GameData_1a9f09e;
unsigned int*
GameRoutine_842b40_alt1(unsigned int* result,
                        unsigned __int64*) __asm__("GameRoutine_842b40");
void GameRoutine_e7bed0_alt1(__int64, char) __asm__("GameRoutine_e7bed0");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
__int64 cmdbtl_party_GetIdByPID(__int64 a1);
__attribute__((swiftcall)) void cmdbtl_party_GetEquipIID(PSEUDO_X8 x8_, int a1);
__n128 cmdbtl_party_AddPrivateSkill(int a1, char* a2);
__attribute__((swiftcall)) void cmdbtl_party_GetPosition(PSEUDO_X8 x8_, int a1);
__n128 cmdbtl_party_SetPosition(int a1, _DWORD* a2);
__n128 cmdbtl_party_PlayVoiceDirectLabel(int a1, __int64 a2);

bool CmdbtlPartyNatives_e73070(_QWORD* a1, __int64* a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  unsigned __int64 add;
  _BOOL4 v12;
  __int64 v13;
  _QWORD* v14;
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
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD v31[2];

  v2 = a1[11];
  if (v2 != 0) {
    v5 = a1[10];
    v6 = a1[11];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    v7 = std___1___shared_weak_count_lock(v6);
    if (v7 == 0) {
      v5 = 0;
    }
    v8 = a2[1];
    if (v8 == 0) {
      goto LABEL_13;
    }
  }
  else {
    v7 = 0;
    v5 = 0;
    v8 = a2[1];
    if (v8 == 0) {
    LABEL_13:
      v12 = v5 == 0;
      goto LABEL_14;
    }
  }
  v9 = std___1___shared_weak_count_lock(v8);
  if (v9 == 0) {
    goto LABEL_13;
  }
  v10 = v5 == *a2;
  add =
      atomic_fetch_add((atomic_ullong* volatile)(v9 + 8), 0xFFFFFFFFFFFFFFFFLL);
  v12 = v10;
  if (add == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak();
  }

LABEL_14:
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak();
  }
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak();
  }
  if (!v12) {
    v13 = a1[11];
    if (v13 == 0) {
      goto LABEL_31;
    }
    v14 = (_QWORD*)a1[10];
    v15 = a1[11];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
    v16 = std___1___shared_weak_count_lock(v15);
    std___1___shared_weak_count___release_weak();
    if (v16 == 0) {
      goto LABEL_31;
    }
    if (v14 != nullptr) {
      v31[0] = "Leader";
      v31[1] = 6;
      GameRoutine_ff7720(v14 + 43, v31);
      v17 = v14[27];
      v18 = v14[28];
      if (v18 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v17 != 0) {
        *(_BYTE*)(v17 + 60) = v14[44] != v14[43];
      }
      if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak();
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak();
      v19 = a1[9];
      if (v19 == 0) {
        goto LABEL_33;
      }
    }
    else {
    LABEL_31:
      v19 = a1[9];
      if (v19 == 0) {
        goto LABEL_33;
      }
    }
    if (*(_QWORD*)(v19 + 8) != -1) {
    LABEL_37:
      v23 = *a2;
      v22 = a2[1];
      if (v22 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 16), 1u,
                                  memory_order_relaxed);
      }
      v24 = a1[11];
      a1[10] = v23;
      a1[11] = v22;
      if (v24 != 0) {
        std___1___shared_weak_count___release_weak();
        v22 = a1[11];
      }
      if (v22 != 0) {
        v25 = std___1___shared_weak_count_lock(v22);
        if (v25 != 0) {
          v26 = (_QWORD*)a1[10];
          v27 = v25;
          if (v26 != nullptr) {
            v31[0] = "Leader";
            v31[1] = 6;
            GameRoutine_ff7420(v26 + 43, v31);
            v28 = v26[27];
            v29 = v26[28];
            if (v29 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                        memory_order_relaxed);
            }
            if (v28 != 0) {
              *(_BYTE*)(v28 + 60) = v26[44] != v26[43];
            }
            if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
              std___1___shared_weak_count___release_weak();
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
            std___1___shared_weak_count___release_weak();
          }
        }
      }
      CmdbtlPartyNatives_e9cce0(GameData_2203490);
      return !v12;
    }
  LABEL_33:
    v21 = *a2;
    v20 = a2[1];
    if (v20 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                                memory_order_relaxed);
      v19 = a1[9];
    }
    a1[8] = v21;
    a1[9] = v20;
    if (v19 != 0) {
      std___1___shared_weak_count___release_weak();
    }
    goto LABEL_37;
  }
  return !v12;
}

__int64 CmdbtlPartyNatives_e738c0(__int64 a1, unsigned int a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  _QWORD* v12;
  _QWORD* v13;
  _QWORD* v14;
  atomic_ullong* v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31[2];
  __int64 v32[2];
  __int64 v33;
  __int64 v34;
  __int64 v35[2];
  _QWORD v36[2];
  _QWORD v37[4];
  _QWORD* v38;
  __int64 v39;

  v2 = *(__int64**)(a1 + 40);
  v3 = *(__int64**)(a1 + 48);
  if (v2 != v3) {
    do {
      v6 = *v2;
      v2 += 2;
      CmdBtlUnit_e79df0(v6);
    } while (v2 != v3);
    v2 = *(__int64**)(a1 + 40);
    v3 = *(__int64**)(a1 + 48);
  }
  for (; v3 != v2; v3 -= 2) {
    v7 = *(v3 - 1);
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak();
    }
  }
  *(_QWORD*)(a1 + 48) = v2;
  *(_DWORD*)(a1 + 28) = 0;
  GameRoutine_e73e20(a1);
  *(_DWORD*)(a1 + 8) = a2;
  *(_DWORD*)(a1 + 20) = 0;
  *(_QWORD*)(a1 + 12) = 0;
  v30 = a2;
  if (a2 > 2) {
    v8 = 8;
  }
  else {
    v8 = GameData_1b91af0[a2];
  }
  v9 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 24 * v8 + 556000);
  while (v9 != 0) {
    v10 = v9;
    v9 = *(_QWORD*)(v9 + 432);
    v11 = *(_DWORD*)(*GameData_212ea58 + 1224);
    *(_DWORD*)(*GameData_212ea58 + 1224) = v11 + 1;
    v12 = (_QWORD*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 560,
                                                  16, 0);
    v13 = v12 + 4;
    v14 = v12;
    v12[1] = 0;
    v15 = (atomic_ullong*)(v12 + 1);
    v12[2] = 0;
    *v12 = GameData_1fe7b78;
    GameRoutine_e790e0(v12 + 4, v11, v10);
    v36[0] = v13;
    v36[1] = v14;
    atomic_fetch_add_explicit(v15, 1u, memory_order_relaxed);
    GameRoutine_e74040(a1, v36);
    if (atomic_fetch_add(v15, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (atomic_fetch_add(v15, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        goto LABEL_20;
      }
    }
    else {
      (*(void (**)(_QWORD*))(*v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak();
      if (atomic_fetch_add(v15, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      LABEL_20:
        (*(void (**)(_QWORD*))(*v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak();
      }
    }
  }
  v35[0] = 0;
  v35[1] = 0;
  result = CmdbtlPartyNatives_e73070((_QWORD*)a1, v35);
  if (v30 >= 2) {
    return result;
  }
  if (*(_QWORD*)(GameData_22190c8 + 8LL * *(int*)(a1 + 8) + 192) != 0) {
    v39 = *(_QWORD*)(GameData_22190c8 + 8LL * *(int*)(a1 + 8) + 192);
    v33 = 0;
    v34 = 0;
    v38 = v37;
    v17 = *GameData_212ea58;
    v37[0] = GameData_1fec818;
    v37[1] = &v39;
    v37[2] = &v33;
    CmdbtlPartyNatives_e9a800(v17, v37);
    result = (__int64)v38;
    if (v38 == v37) {
      v18 = 32;
    }
    else {
      if (v38 == nullptr) {
        goto LABEL_28;
      }
      v18 = 40;
    }
    result = (*(__int64 (**)(void))(*v38 + v18))();
  LABEL_28:
    if (v33 != 0) {
      v32[0] = v33;
      v32[1] = v34;
      if (v34 == 0) {
        result = CmdbtlPartyNatives_e73070((_QWORD*)a1, v32);
        v19 = v34;
        if (v34 == 0) {
          goto LABEL_35;
        }
        goto LABEL_32;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 16), 1u,
                                memory_order_relaxed);
      CmdbtlPartyNatives_e73070((_QWORD*)a1, v32);
      result = std___1___shared_weak_count___release_weak();
    }
    v19 = v34;
    if (v34 == 0) {
      goto LABEL_35;
    }
  LABEL_32:
    if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      result = std___1___shared_weak_count___release_weak();
    }
  }

LABEL_35:
  v20 = *(_QWORD*)(a1 + 88);
  if (v20 == 0) {
    if (*(_QWORD*)(a1 + 48) == *(_QWORD*)(a1 + 40)) {
      return result;
    }
    goto LABEL_47;
  }
  v21 = *(_QWORD*)(a1 + 80);
  v22 = *(_QWORD*)(a1 + 88);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                            memory_order_relaxed);
  v23 = std___1___shared_weak_count_lock(v22);
  if (v23 == 0) {
    v25 = *(_QWORD*)(a1 + 40);
    v24 = *(_QWORD*)(a1 + 48);
    result = std___1___shared_weak_count___release_weak();
    if (v24 == v25) {
      return result;
    }
    goto LABEL_47;
  }
  if (v21 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
      std___1___shared_weak_count___release_weak();
    }
    return std___1___shared_weak_count___release_weak();
  }
  v27 = *(_QWORD*)(a1 + 40);
  v26 = *(_QWORD*)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak();
  }
  result = std___1___shared_weak_count___release_weak();
  if (v26 != v27) {
  LABEL_47:
    v28 = *(__int64**)(a1 + 40);
    v29 = v28[1];
    v31[0] = *v28;
    v31[1] = v29;
    if (v29 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 16), 1u,
                                memory_order_relaxed);
      CmdbtlPartyNatives_e73070((_QWORD*)a1, v31);
      return std___1___shared_weak_count___release_weak();
    }
    return CmdbtlPartyNatives_e73070((_QWORD*)a1, v31);
  }
  return result;
}

__int64 CmdbtlPartyNatives_e73d00(__int64 a1, __int64 a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD v9[4];
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int8 v13;

  v2 = *(__int64**)(a1 + 40);
  v3 = *(__int64**)(a1 + 48);
  v13 = 0;
  v9[0] = GameData_1fe7ec8;
  v9[1] = &v13;
  v10 = v9;
  if (v2 == v3) {
    v6 = v9;
  LABEL_14:
    v7 = 32;
    goto LABEL_15;
  }
  do {
    v11 = *v2;
    v4 = v2[1];
    v12 = v4;
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v10 == nullptr) {
      GameRoutine_60a310(0, a2);
    }
    (*(void (**)(_QWORD*, __int64*))(*v10 + 48LL))(v10, &v11);
    v5 = v12;
    if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak();
    }
    v2 += 2;
  } while (v2 != v3);
  v6 = v10;
  if (v10 == v9) {
    goto LABEL_14;
  }
  if (v10 != nullptr) {
    v7 = 40;
  LABEL_15:
    (*(void (**)(_QWORD*, __int64))(*v6 + v7))(v6, a2);
  }
  return v13;
}

__int64 CmdbtlPartyNatives_e749a0(__int64 result, _QWORD* a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v5;
  __int64* v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = *(__int64**)result;
  v3 = *(__int64**)(result + 8);
  v5 = result;
  if (*(__int64**)result != v3) {
    while (*v2 != *a2) {
      v2 += 2;
      if (v2 == v3) {
        return result;
      }
    }
  }
  v6 = v2 + 2;
  if (v2 != v3 && v6 != v3) {
    do {
      v8 = *v6;
      if (*v6 != *a2) {
        v9 = v6[1];
        *v6 = 0;
        v6[1] = 0;
        v10 = v2[1];
        *v2 = v8;
        v2[1] = v9;
        if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          result = std___1___shared_weak_count___release_weak();
        }
        v2 += 2;
      }
      v6 += 2;
    } while (v6 != v3);
    v3 = *(__int64**)(v5 + 8);
  }
  if (v2 != v3) {
    do {
      v11 = *(v3 - 1);
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        result = std___1___shared_weak_count___release_weak();
      }
      v3 -= 2;
    } while (v3 != v2);
    *(_QWORD*)(v5 + 8) = v2;
  }
  return result;
}

__int64 CmdbtlPartyNatives_e77d30(__int64 result, int a2)
{
  __int64 v2;
  __int64 v3;
  int v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  void* v9;
  __int64 v10;
  __int64 v11;

  if (*(_DWORD*)(result + 8) == 0 &&
      (*(_BYTE*)(GameData_21f4cc0 + 12) & 1) == 0) {
    v10 = v2;
    v11 = v3;
    v9 = &GameData_1ad7123;
    v8 = game_HashString(&GameData_1ad7123);
    v5 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v6 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v8);
      if (v6 != 0) {
        v5 = *(_DWORD*)(v6 + 32);
      }
      else {
        v5 = 0;
      }
    }
    if (v5 >= a2) {
      v5 = a2;
    }
    v9 = &GameData_1af5ec9;
    if (a2 >= 0) {
      v7 = v5;
    }
    else {
      v7 = 0;
    }
    v8 = game_HashString(&GameData_1af5ec9);
    return game_VariableManager_SetFlag(&v8, v7);
  }
  return result;
}

_QWORD* CmdbtlPartyNatives_e9a800(_QWORD* a1, __int64 a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  _QWORD* result;
  __int64 v28;
  _QWORD v29[4];
  _QWORD* v30;
  __int64 v31;
  __int64 v32;

  v2 = (__int64*)a1[89];
  v3 = (__int64*)a1[90];
  v29[0] = GameData_1fec998;
  v29[1] = a2;
  v30 = v29;
  if (v2 == v3) {
    v9 = v29;
  LABEL_14:
    v10 = 32;
    goto LABEL_15;
  }
  do {
    v31 = *v2;
    v6 = v2[1];
    v32 = v6;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = v30;
    if (v30 == nullptr) {
    LABEL_62:
      GameRoutine_60a310(v7, a2);
    }
    (*(void (**)(_QWORD*, __int64*))(*v30 + 48LL))(v30, &v31);
    v8 = v32;
    if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak();
    }
    v2 += 2;
  } while (v2 != v3);
  v9 = v30;
  if (v30 == v29) {
    goto LABEL_14;
  }
  if (v30 != nullptr) {
    v10 = 40;
  LABEL_15:
    (*(void (**)(_QWORD*, __int64))(*v9 + v10))(v9, a2);
  }
  v11 = (__int64*)a1[105];
  v12 = (__int64*)a1[106];
  v29[0] = GameData_1fec998;
  v29[1] = a2;
  v30 = v29;
  if (v11 == v12) {
    v15 = v29;
  LABEL_29:
    v16 = 32;
    goto LABEL_30;
  }
  do {
    v31 = *v11;
    v13 = v11[1];
    v32 = v13;
    if (v13 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = v30;
    if (v30 == nullptr) {
      goto LABEL_62;
    }
    (*(void (**)(_QWORD*, __int64*))(*v30 + 48LL))(v30, &v31);
    v14 = v32;
    if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak();
    }
    v11 += 2;
  } while (v11 != v12);
  v15 = v30;
  if (v30 == v29) {
    goto LABEL_29;
  }
  if (v30 != nullptr) {
    v16 = 40;
  LABEL_30:
    (*(void (**)(_QWORD*, __int64))(*v15 + v16))(v15, a2);
  }
  v17 = (__int64*)a1[121];
  v18 = (__int64*)a1[122];
  v29[0] = GameData_1fec998;
  v29[1] = a2;
  v30 = v29;
  if (v17 == v18) {
    v21 = v29;
  LABEL_44:
    v22 = 32;
    goto LABEL_45;
  }
  do {
    v31 = *v17;
    v19 = v17[1];
    v32 = v19;
    if (v19 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = v30;
    if (v30 == nullptr) {
      goto LABEL_62;
    }
    (*(void (**)(_QWORD*, __int64*))(*v30 + 48LL))(v30, &v31);
    v20 = v32;
    if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      std___1___shared_weak_count___release_weak();
    }
    v17 += 2;
  } while (v17 != v18);
  v21 = v30;
  if (v30 == v29) {
    goto LABEL_44;
  }
  if (v30 != nullptr) {
    v22 = 40;
  LABEL_45:
    (*(void (**)(_QWORD*, __int64))(*v21 + v22))(v21, a2);
  }
  v29[0] = GameData_1fec998;
  v29[1] = a2;
  v23 = (__int64*)a1[137];
  v24 = (__int64*)a1[138];
  v30 = v29;
  if (v23 == v24) {
    result = v29;
  LABEL_59:
    v28 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v28))(result,
                                                                       a2);
  }
  do {
    v31 = *v23;
    v25 = v23[1];
    v32 = v25;
    if (v25 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = v30;
    if (v30 == nullptr) {
      goto LABEL_62;
    }
    (*(void (**)(_QWORD*, __int64*))(*v30 + 48LL))(v30, &v31);
    v26 = v32;
    if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
      std___1___shared_weak_count___release_weak();
    }
    v23 += 2;
  } while (v23 != v24);
  result = v30;
  if (v30 == v29) {
    goto LABEL_59;
  }
  if (v30 == nullptr) {
    return result;
  }
  v28 = 40;
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v28))(result,
                                                                     a2);
}

_QWORD* CmdbtlPartyNatives_e9aba0(_QWORD* a1, __int64 a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  _QWORD* result;
  __int64 v28;
  _QWORD v29[4];
  _QWORD* v30;
  __int64 v31;
  __int64 v32;

  v2 = (__int64*)a1[89];
  v3 = (__int64*)a1[90];
  v29[0] = GameData_1feca18;
  v29[1] = a2;
  v30 = v29;
  if (v2 == v3) {
    v9 = v29;
  LABEL_14:
    v10 = 32;
    goto LABEL_15;
  }
  do {
    v31 = *v2;
    v6 = v2[1];
    v32 = v6;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = v30;
    if (v30 == nullptr) {
    LABEL_62:
      GameRoutine_60a310(v7, a2);
    }
    (*(void (**)(_QWORD*, __int64*))(*v30 + 48LL))(v30, &v31);
    v8 = v32;
    if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak();
    }
    v2 += 2;
  } while (v2 != v3);
  v9 = v30;
  if (v30 == v29) {
    goto LABEL_14;
  }
  if (v30 != nullptr) {
    v10 = 40;
  LABEL_15:
    (*(void (**)(_QWORD*, __int64))(*v9 + v10))(v9, a2);
  }
  v11 = (__int64*)a1[105];
  v12 = (__int64*)a1[106];
  v29[0] = GameData_1feca18;
  v29[1] = a2;
  v30 = v29;
  if (v11 == v12) {
    v15 = v29;
  LABEL_29:
    v16 = 32;
    goto LABEL_30;
  }
  do {
    v31 = *v11;
    v13 = v11[1];
    v32 = v13;
    if (v13 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = v30;
    if (v30 == nullptr) {
      goto LABEL_62;
    }
    (*(void (**)(_QWORD*, __int64*))(*v30 + 48LL))(v30, &v31);
    v14 = v32;
    if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak();
    }
    v11 += 2;
  } while (v11 != v12);
  v15 = v30;
  if (v30 == v29) {
    goto LABEL_29;
  }
  if (v30 != nullptr) {
    v16 = 40;
  LABEL_30:
    (*(void (**)(_QWORD*, __int64))(*v15 + v16))(v15, a2);
  }
  v17 = (__int64*)a1[121];
  v18 = (__int64*)a1[122];
  v29[0] = GameData_1feca18;
  v29[1] = a2;
  v30 = v29;
  if (v17 == v18) {
    v21 = v29;
  LABEL_44:
    v22 = 32;
    goto LABEL_45;
  }
  do {
    v31 = *v17;
    v19 = v17[1];
    v32 = v19;
    if (v19 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = v30;
    if (v30 == nullptr) {
      goto LABEL_62;
    }
    (*(void (**)(_QWORD*, __int64*))(*v30 + 48LL))(v30, &v31);
    v20 = v32;
    if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      std___1___shared_weak_count___release_weak();
    }
    v17 += 2;
  } while (v17 != v18);
  v21 = v30;
  if (v30 == v29) {
    goto LABEL_44;
  }
  if (v30 != nullptr) {
    v22 = 40;
  LABEL_45:
    (*(void (**)(_QWORD*, __int64))(*v21 + v22))(v21, a2);
  }
  v29[0] = GameData_1feca18;
  v29[1] = a2;
  v23 = (__int64*)a1[137];
  v24 = (__int64*)a1[138];
  v30 = v29;
  if (v23 == v24) {
    result = v29;
  LABEL_59:
    v28 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v28))(result,
                                                                       a2);
  }
  do {
    v31 = *v23;
    v25 = v23[1];
    v32 = v25;
    if (v25 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = v30;
    if (v30 == nullptr) {
      goto LABEL_62;
    }
    (*(void (**)(_QWORD*, __int64*))(*v30 + 48LL))(v30, &v31);
    v26 = v32;
    if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
      std___1___shared_weak_count___release_weak();
    }
    v23 += 2;
  } while (v23 != v24);
  result = v30;
  if (v30 == v29) {
    goto LABEL_59;
  }
  if (v30 == nullptr) {
    return result;
  }
  v28 = 40;
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v28))(result,
                                                                     a2);
}

__int64 CmdbtlPartyNatives_e9ba00(__int64 a1, __int64 a2, unsigned int a3,
                                  unsigned __int8 a4, __int64* a5, float a6)
{
  int v6;
  char v7;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  bool v21;
  unsigned __int64 add;
  _BOOL4 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD v34[4];
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int16 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;

  v6 = *(_DWORD*)(a1 + 1204);
  v7 = a4 | v6;
  if (((a4 | (unsigned __int8)v6) & 1) == 0) {
    return v7 & 1;
  }
  *(_DWORD*)(a1 + 1204) = v6 & 0xFFFFFFFE;
  if (a6 == 0.0) {
    v40 = 0;
    v41 = 0;
    v42 = 0;
    CmdbtlPartyNatives_e9cb40(a1, &v40);
    if (v42 != 0) {
      std___1___shared_weak_count___release_weak();
    }
  }
  v13 = a1 + 672 + ((__int64)(int)a3 << 7);
  v15 = *(_QWORD*)(v13 + 80);
  v14 = *(_QWORD*)(v13 + 88);
  if (v14 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                              memory_order_relaxed);
  }
  v16 = a5[1];
  if (v16 == 0 || *(_QWORD*)(v16 + 8) == -1) {
    goto LABEL_51;
  }
  if (v14 == 0) {
    v17 = 0;
    v19 = 0;
    v20 = std___1___shared_weak_count_lock(v16);
    if (v20 != 0) {
      goto LABEL_15;
    }
  LABEL_21:
    v23 = v19 != 0;
    goto LABEL_22;
  }
  v17 = std___1___shared_weak_count_lock(v14);
  v18 = a5[1];
  if (v17 != 0) {
    v19 = v15;
  }
  else {
    v19 = 0;
  }
  if (v18 == 0) {
    goto LABEL_21;
  }
  v20 = std___1___shared_weak_count_lock(v18);
  if (v20 == 0) {
    goto LABEL_21;
  }

LABEL_15:
  v21 = v19 == *a5;
  add = atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                         0xFFFFFFFFFFFFFFFFLL);
  v23 = !v21;
  if (add == 0) {
    v24 = *(_QWORD*)v20;
    v43 = v20;
    (*(void (**)(void))(v24 + 16))();
    std___1___shared_weak_count___release_weak();
  }

LABEL_22:
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak();
    if (v23) {
    LABEL_25:
      v26 = *a5;
      v25 = a5[1];
      if (v25 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                                  memory_order_relaxed);
      }
      if (v14 != 0) {
        std___1___shared_weak_count___release_weak();
      }
      if ((*(_BYTE*)(GameData_21f4cc0 + 12) & 1) == 0) {
        *(_DWORD*)(GameData_2203490 + 1204) |= 1u;
      }
      v38 = v26;
      v39 = v25;
      if (v25 != 0) {
        goto LABEL_32;
      }
      goto LABEL_33;
    }
  }
  else if (v23) {
    goto LABEL_25;
  }

LABEL_51:
  v25 = v14;
  v38 = v15;
  v39 = v14;
  if (v14 != 0) {
  LABEL_32:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                              memory_order_relaxed);
  }

LABEL_33:
  if (a3 > 2) {
    v27 = 3;
  }
  else {
    v27 = GameData_1b94450[a3];
  }
  v28 = a1 + 672 + (v27 << 7);
  v30 = *(_QWORD*)(v28 + 80);
  v29 = *(_QWORD*)(v28 + 88);
  v36 = v30;
  v37 = v29;
  if (v29 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 16), 1u,
                              memory_order_relaxed);
  }
  v34[0] = GameData_1fecc18;
  v34[1] = a1;
  v35 = v34;
  v34[2] = a6 == 0.0;
  GameRoutine_e80220(a1 + 16, &v38, &v36, a2, (__int64)v34, a6);
  if (v35 == v34) {
    v32 = 32;
    goto LABEL_42;
  }
  if (v35 != nullptr) {
    v32 = 40;
  LABEL_42:
    (*(void (**)(_QWORD*, __int64))(*v35 + v32))(v35, v31);
  }
  if (v37 != 0) {
    std___1___shared_weak_count___release_weak();
  }
  if (v39 != 0) {
    std___1___shared_weak_count___release_weak();
  }
  if (v25 != 0) {
    std___1___shared_weak_count___release_weak();
  }
  return v7 & 1;
}

__int64 CmdbtlPartyNatives_e9c620(_QWORD* a1, char a2)
{
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 result;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  bool v19;
  __int16 v20;
  __int64 v21;
  __int64 v22;

  v4 = GameData_212ea58;
  v5 = *GameData_212ea58;
  *(_DWORD*)(*GameData_212ea58 + 1204) |= 8u;
  v6 = (__int64*)a1[89];
  v7 = (__int64*)a1[90];
  if (v6 != v7) {
    do {
      v8 = *v6;
      v6 += 2;
      GameRoutine_e7c3f0(v8, 1, 256, 0.0);
    } while (v6 != v7);
    v5 = *v4;
  }
  v20 = 0;
  v21 = 0;
  v22 = 0;
  *(_BYTE*)(*GameData_212f2e0 + 112) = 1;
  CmdbtlPartyNatives_e9cb40(v5, &v20);
  result = v22;
  if (v22 != 0) {
    result = std___1___shared_weak_count___release_weak();
  }
  if ((a2 & 1) == 0) {
    v10 = (__int64*)a1[105];
    v11 = (__int64*)a1[106];
    while (v10 != v11) {
      v12 = *v10;
      *(_BYTE*)(v12 + 186) = 0;
      v13 = *(_QWORD*)(v12 + 216);
      if (v13 != 0) {
        v14 = *(__int64**)(v13 + 40);
        v15 = *((_DWORD*)v14 + 5);
        *((_DWORD*)v14 + 5) = v15 | 2;
        if (v15 != (v15 | 2)) {
          v16 = *v14;
          v17 = *(_QWORD*)(v16 + 8);
          if (v17 != 0) {
            v18 = *(_QWORD*)(v16 + 16);
            v19 = *(_QWORD*)(v17 + 8) == -1 || v18 == 0;
            if (!v19 && *(_QWORD*)(v17 + 8) != -1 &&
                (*(_BYTE*)(v16 + 61) & 1) == 0 && *(_DWORD*)(v16 + 64) != 1 &&
                (*(_BYTE*)(v18 + 342) & 1) != 0) {
              result = GameRoutine_1084940(v18, 0, 0.0);
              *(_BYTE*)(*(_QWORD*)(v18 + 8) + 289LL) = 0;
            }
          }
        }
      }
      v10 += 2;
    }
  }
  return result;
}

__int64 CmdbtlPartyNatives_e9cce0(__int64 result)
{
  __int64* v1;
  __int64* v2;
  _QWORD* i;
  __int64 v4;
  __int64* v5;
  __int64* j;
  __int64 v7;
  __int64* v8;
  __int64* k;
  __int64 v10;
  __int64* v11;
  __int64* m;
  __int64 v13;

  v1 = *(__int64**)(result + 712);
  v2 = *(__int64**)(result + 720);
  for (i = (_QWORD*)result; v1 != v2; result = GameRoutine_e7cd60(v4)) {
    v4 = *v1;
    v1 += 2;
  }
  v5 = (__int64*)i[105];
  for (j = (__int64*)i[106]; v5 != j; result = GameRoutine_e7cd60(v7)) {
    v7 = *v5;
    v5 += 2;
  }
  v8 = (__int64*)i[121];
  for (k = (__int64*)i[122]; v8 != k; result = GameRoutine_e7cd60(v10)) {
    v10 = *v8;
    v8 += 2;
  }
  v11 = (__int64*)i[137];
  for (m = (__int64*)i[138]; v11 != m; result = GameRoutine_e7cd60(v13)) {
    v13 = *v11;
    v11 += 2;
  }
  return result;
}

__int64 cmdbtl_party_SetLeaderId(int a1, int a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[4];
  _QWORD* v19;
  int v20;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_9:
  v20 = a2;
  v16 = 0;
  v17 = 0;
  v19 = v18;
  v9 = *GameData_212ea58;
  v18[0] = GameData_1fed038;
  v18[1] = &v16;
  v18[2] = &v20;
  CmdbtlPartyNatives_e9a800_alt1(v9, v18);
  if (v19 == v18) {
    v10 = 32;
  }
  else {
    if (v19 == nullptr) {
      goto LABEL_14;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v19 + v10))((__int64)v19);
LABEL_14:
  result = v17;
  if (v17 != 0) {
    v12 = std___1___shared_weak_count_lock_alt1();
    result = v17;
    if (v12 != 0) {
      v13 = v16;
    }
    else {
      v13 = 0;
    }
    if (v17 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v17);
    }
    if (v13 != 0) {
      v14 = v13;
      v15 = v12;
      if (v12 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                  memory_order_relaxed);
      }
      CmdbtlPartyNatives_e73070_alt1(v9 + ((__int64)a1 << 7) + 672, &v14);
      result = v15;
      if (v15 != 0) {
        result = std___1___shared_weak_count___release_weak_alt1(v15);
      }
    }
    if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      return std___1___shared_weak_count___release_weak_alt1(v12);
    }
  }
  return result;
}

__int64 cmdbtl_party_SetLockTargetLeader(int a1, int a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[4];
  _QWORD* v17;
  int v18;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_9:
  v18 = a2;
  v14 = 0;
  v15 = 0;
  v17 = v16;
  v9 = *GameData_212ea58;
  v16[0] = GameData_1fed038;
  v16[1] = &v14;
  v16[2] = &v18;
  CmdbtlPartyNatives_e9a800_alt1(v9, v16);
  if (v17 == v16) {
    v10 = 32;
  }
  else {
    if (v17 == nullptr) {
      goto LABEL_14;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v17 + v10))((__int64)v17);
LABEL_14:
  result = v15;
  if (v15 == 0) {
    return result;
  }
  v12 = std___1___shared_weak_count_lock_alt1();
  result = v15;
  if (v12 != 0) {
    v13 = v14;
  }
  else {
    v13 = 0;
  }
  if (v15 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v15);
  }
  if (v13 == 0) {
    if (v12 == 0) {
      return result;
    }
    goto LABEL_28;
  }
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                              memory_order_relaxed);
  }
  result = *(_QWORD*)(v9 + ((__int64)a1 << 7) + 776);
  *(_QWORD*)(v9 + ((__int64)a1 << 7) + 768) = v13;
  *(_QWORD*)(v9 + ((__int64)a1 << 7) + 776) = v12;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(result);
  }
  if (v12 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v12);
  LABEL_28:
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      return std___1___shared_weak_count___release_weak_alt1(v12);
    }
  }
  return result;
}

__int64 cmdbtl_party_GetIdByPID(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  unsigned int v16;
  struct {
    __int64 v17;
    __int64 v18;
    __int64 v19;
  } v17_;
  struct {
    _BYTE v20[32];
    _BYTE* v21;
  } v20_;
  struct {
    __int64 v22;
    __int64 v23;
  } v22_;

  v2 = *as_g_script_manager_ptr;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_9:
  v22_.v22 = 0;
  v22_.v23 = 0;
  v7 = (_QWORD*)*GameData_212ea58;
  if ((*(_BYTE*)a1 & 1) != 0) {
    GameRoutine_cb2f70(&v17_.v17, *(_QWORD*)(a1 + 16), *(_QWORD*)(a1 + 8));
  }
  else {
    v8 = *(_QWORD*)(a1 + 8);
    v17_.v17 = *(_QWORD*)a1;
    v17_.v18 = v8;
    v17_.v19 = *(_QWORD*)(a1 + 16);
  }
  v9 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v20_.v21 = v9;
  *v9 = GameData_1fedf48;
  v9[1] = &v22_.v22;
  v10 = v17_.v17;
  v11 = v17_.v18;
  v17_.v17 = 0;
  v17_.v18 = 0;
  v9[2] = v10;
  v9[3] = v11;
  v12 = v17_.v19;
  v17_.v19 = 0;
  v9[4] = v12;
  CmdbtlPartyNatives_e9a800(v7, (__int64)v20_.v20);
  if (v20_.v21 == v20_.v20) {
    v13 = 32;
  }
  else {
    if (v20_.v21 == nullptr) {
      goto LABEL_17;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v20_.v21 + v13))((__int64)v20_.v21);
LABEL_17:
  if ((v17_.v17 & 1) != 0) {
    GameRoutine_25ec90(v17_.v19, v17_.v17 & 0xFFFFFFFFFFFFFFFELL);
  }
  if (v22_.v22 != 0) {
    result = *(unsigned int*)(v22_.v22 + 8);
    v15 = v22_.v23;
    if (v22_.v23 == 0) {
      return result;
    }
  }
  else {
    result = 0xFFFFFFFFLL;
    v15 = v22_.v23;
    if (v22_.v23 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v16 = result;
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak_alt2(v15);
    return v16;
  }
  return result;
}

__int64 cmdbtl_party_GetUnitHp(int a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  _BOOL4 v14;
  unsigned int v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD v19[4];
  _QWORD* v20;
  int v21;

  v2 = *as_g_script_manager_ptr;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_9:
  v21 = a1;
  v17 = nullptr;
  v18 = 0;
  v20 = v19;
  v7 = *GameData_212ea58;
  v19[0] = GameData_1fed038;
  v19[1] = &v17;
  v19[2] = &v21;
  CmdbtlPartyNatives_e9a800_alt1(v7, v19);
  if (v20 == v19) {
    v8 = 32;
  }
  else {
    if (v20 == nullptr) {
      goto LABEL_14;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v20 + v8))((__int64)v20);
LABEL_14:
  if (v18 == 0) {
    return 0;
  }
  v9 = std___1___shared_weak_count_lock_alt1();
  v11 = v17;
  result = v18;
  if (v18 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v18);
  }
  if (v9 != 0 && v11 != nullptr) {
    if (v11[40] == 0) {
      goto LABEL_28;
    }
    v12 = std___1___shared_weak_count_lock_alt1();
    if (v12 == 0) {
      goto LABEL_28;
    }
    v13 = v11[39];
    v14 = v13 == 0 || (*(_BYTE*)(*(_QWORD*)v13 + 76LL) & 8) == 0;
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v14) {
      LABEL_28:
        result = (unsigned int)*(__int16*)(v11[2] + 492LL);
        goto LABEL_29;
      }
    }
    else {
      v16 = v12;
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt1(v16);
      if (v14) {
        goto LABEL_28;
      }
    }
    result = 0;
  }
  else if (v9 == 0) {
    return 0;
  }
LABEL_29:
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v11 != nullptr) {
      return result;
    }
    return 0;
  }
  v15 = result;
  (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
  std___1___shared_weak_count___release_weak_alt1(v9);
  result = v15;
  if (v11 == nullptr) {
    return 0;
  }
  return result;
}

bool cmdbtl_party_IsPossession(int a1, __int64 a2)
{
  bool v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  int v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v26;
  __int64 v27;
  _QWORD v28[4];
  _QWORD* v29;
  int v30;

  v5 = *as_g_script_manager_ptr;
  v6 = *(
      _QWORD*)(v5 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v6 != 0) {
    v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 472LL))(v6);
  }
  else {
    v7 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v7 + 24) + 448LL))(
      *(_QWORD*)(v7 + 24), 1);
  v8 = *(_QWORD**)(v7 + 2240);
  *(_QWORD*)(v7 + 2240) = 0;
  if (v8 == (_QWORD*)(v7 + 2208)) {
    v9 = 32;
  }
  else {
    if (v8 == nullptr) {
      goto LABEL_9;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v8 + v9))((__int64)v8);
LABEL_9:
  v30 = a1;
  v26 = 0;
  v27 = 0;
  v29 = v28;
  v10 = *GameData_212ea58;
  v28[0] = GameData_1fed038;
  v28[1] = &v26;
  v28[2] = &v30;
  CmdbtlPartyNatives_e9a800_alt1(v10, v28);
  if (v29 == v28) {
    v11 = 32;
    goto LABEL_13;
  }
  if (v29 != nullptr) {
    v11 = 40;
  LABEL_13:
    (*(void (**)(__int64))(*v29 + v11))((__int64)v29);
  }
  if (v27 == 0) {
    return false;
  }
  v12 = std___1___shared_weak_count_lock_alt1();
  v13 = v26;
  if (v27 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v27);
  }
  v14 = v12 == 0 || v13 == 0;
  v15 = v14;
  if (v14) {
    goto LABEL_25;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v16 = *(_QWORD*)(a2 + 16);
  }
  else {
    v16 = a2 + 1;
  }
  v17 = game_HashString(v16);
  v2 = false;
  if (v17 == 0) {
    goto LABEL_54;
  }
  v18 = *(_QWORD*)(GameData_21c99b8 + 96);
  if (v18 == 0 || *(_QWORD*)(GameData_21c99b8 + 112) == 0) {
    goto LABEL_54;
  }
  v19 = v18 - 1;
  if ((v18 & (v18 - 1)) != 0) {
    v20 = v17;
    if (v17 >= v18) {
      v20 = v17 % v18;
    }
  }
  else {
    v20 = v19 & v17;
  }
  v21 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b8 + 88) + 8 * v20);
  if (v21 == nullptr || (v22 = (_QWORD*)*v21) == nullptr) {
    v2 = false;
    goto LABEL_54;
  }
  if ((v18 & v19) == 0) {
    while (1) {
      v24 = v22[1];
      if (v24 == v17) {
        if (v22[2] == v17) {
          goto LABEL_60;
        }
      }
      else if ((v24 & v19) != v20) {
        goto LABEL_62;
      }
      v22 = (_QWORD*)*v22;
      v2 = false;
      if (v22 == nullptr) {
        goto LABEL_25;
      }
    }
  }
  while (1) {
    v23 = v22[1];
    if (v23 == v17) {
      break;
    }
    if (v23 >= v18) {
      v23 %= v18;
    }
    if (v23 != v20) {
      goto LABEL_62;
    }
  LABEL_42:
    v22 = (_QWORD*)*v22;
    if (v22 == nullptr) {
      goto LABEL_62;
    }
  }
  if (v22[2] != v17) {
    goto LABEL_42;
  }
LABEL_60:
  if (v22[3] != 0) {
    v2 = (int)game_UnitItemList_Find_70f780(*(_QWORD*)(v13 + 16) + 828LL) >= 0;
    goto LABEL_25;
  }
LABEL_62:
  v2 = false;
LABEL_25:
  if (v12 == 0) {
  LABEL_55:
    if (v15 != 0) {
      return false;
    }
    return v2;
  }
LABEL_54:
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_55;
  }
  (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
  std___1___shared_weak_count___release_weak_alt1(v12);
  if (v15 != 0) {
    return false;
  }
  return v2;
}

__attribute__((swiftcall)) void cmdbtl_party_GetEquipIID(PSEUDO_X8 x8_, int a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  _QWORD v16[4];
  _QWORD* v17;
  int v18;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_9:
  v18 = a1;
  v14 = 0;
  v15 = 0;
  v17 = v16;
  v9 = *GameData_212ea58;
  v16[0] = GameData_1fed038;
  v16[1] = &v14;
  v16[2] = &v18;
  CmdbtlPartyNatives_e9a800_alt1(v9, v16);
  if (v17 == v16) {
    v10 = 32;
  }
  else {
    if (v17 == nullptr) {
      goto LABEL_14;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v17 + v10))((__int64)v17);
LABEL_14:
  if (v15 == 0) {
    GameRoutine_25eca0(a2, &GameData_1a9f09e);
    return;
  }
  v11 = std___1___shared_weak_count_lock_alt1();
  v12 = v14;
  if (v15 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v15);
  }
  if (v11 == 0 || v12 == 0) {
    if (v11 != 0) {
    LABEL_23:
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak_alt1(v11);
      }
    }
    {
      GameRoutine_25eca0(a2, &GameData_1a9f09e);
      return;
    }
  }
  if (*(_WORD*)(*(_QWORD*)(v12 + 16) + 1952LL) == 0) {
    goto LABEL_23;
  }
  result = GameRoutine_25eca0(
      a2,
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                            8LL * *(unsigned __int16*)(*(_QWORD*)(v12 + 16) +
                                                       1952LL)) +
                 8LL));
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    {
      std___1___shared_weak_count___release_weak_alt1(v11);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 cmdbtl_party_Equip(int a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  char v26;
  char v27;
  __int64 v28;
  __int64 v29;
  _QWORD v30[4];
  _QWORD* v31;
  int v32;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_9:
  v32 = a1;
  v28 = 0;
  v29 = 0;
  v31 = v30;
  v9 = *GameData_212ea58;
  v30[0] = GameData_1fed038;
  v30[1] = &v28;
  v30[2] = &v32;
  CmdbtlPartyNatives_e9a800_alt1(v9, v30);
  if (v31 == v30) {
    v10 = 32;
    goto LABEL_13;
  }
  if (v31 != nullptr) {
    v10 = 40;
  LABEL_13:
    (*(void (**)(__int64))(*v31 + v10))((__int64)v31);
  }
  result = v29;
  if (v29 == 0) {
    return result;
  }
  v12 = std___1___shared_weak_count_lock_alt1();
  v13 = v28;
  result = v29;
  if (v12 != 0) {
    v14 = v28;
  }
  else {
    v14 = 0;
  }
  if (v29 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v29);
  }
  if (v14 == 0) {
    goto LABEL_54;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v15 = *(_QWORD*)(a2 + 16);
  }
  else {
    v15 = a2 + 1;
  }
  v16 = game_HashString(v15);
  if (v16 == 0) {
    goto LABEL_50;
  }
  v17 = *(_QWORD*)(GameData_21c99b8 + 96);
  if (v17 == 0 || *(_QWORD*)(GameData_21c99b8 + 112) == 0) {
    goto LABEL_50;
  }
  v18 = v17 - 1;
  if ((v17 & (v17 - 1)) != 0) {
    v19 = v16;
    if (v16 >= v17) {
      v19 = v16 % v17;
    }
  }
  else {
    v19 = v18 & v16;
  }
  v20 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b8 + 88) + 8 * v19);
  if (v20 == nullptr || (v21 = (_QWORD*)*v20) == nullptr) {
  LABEL_50:
    v25 = *(_QWORD*)(v13 + 16);
    v26 = game_Unit_CheckEquipment(v25);
    v27 = game_Unit_EquipFirstWeapon(v25);
    result = GameRoutine_6ddce0(v25);
    if ((v26 & 1) != 0 || (v27 & 1) != 0 || (result & 1) != 0) {
      goto LABEL_53;
    }
    goto LABEL_54;
  }
  if ((v17 & v18) == 0) {
    while (1) {
      v23 = v21[1];
      if (v23 == v16) {
        if (v21[2] == v16) {
          goto LABEL_47;
        }
      }
      else if ((v23 & v18) != v19) {
        goto LABEL_50;
      }
      v21 = (_QWORD*)*v21;
      if (v21 == nullptr) {
        goto LABEL_50;
      }
    }
  }
  while (1) {
    v22 = v21[1];
    if (v22 == v16) {
      break;
    }
    if (v22 >= v17) {
      v22 %= v17;
    }
    if (v22 != v19) {
      goto LABEL_50;
    }
  LABEL_36:
    v21 = (_QWORD*)*v21;
    if (v21 == nullptr) {
      goto LABEL_50;
    }
  }
  if (v21[2] != v16) {
    goto LABEL_36;
  }
LABEL_47:
  if (v21[3] == 0) {
    goto LABEL_50;
  }
  v24 = game_UnitItemList_Find_70f780(*(_QWORD*)(v14 + 16) + 828LL);
  if ((v24 & 0x80000000) != 0 ||
      (game_Unit_EquipItem_6d8f40(*(_QWORD*)(v14 + 16), v24) & 1) == 0) {
    goto LABEL_50;
  }
LABEL_53:
  *(_WORD*)(*(_QWORD*)(v14 + 16) + 20LL) |= 1u;
  result = UnitActor_81d740(*(_QWORD*)(v14 + 16));
LABEL_54:
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return std___1___shared_weak_count___release_weak_alt1(v12);
  }
  return result;
}

__int64 cmdbtl_party_HasSkill(int a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v18;
  __int64 v19;
  __int64 (**v20)();
  __int64* v21;
  int* v22;
  __int64 (***v23)();
  int v24;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_9:
  v24 = a1;
  v18 = 0;
  v19 = 0;
  v23 = &v20;
  v9 = *GameData_212ea58;
  v20 = GameData_1fed038;
  v21 = &v18;
  v22 = &v24;
  CmdbtlPartyNatives_e9a800_alt1(v9, &v20);
  if (v23 == &v20) {
    v10 = 4;
    goto LABEL_13;
  }
  if (v23 != nullptr) {
    v10 = 5;
  LABEL_13:
    (*v23)[v10]();
  }
  if (v19 == 0) {
    goto LABEL_26;
  }
  v11 = std___1___shared_weak_count_lock_alt1();
  v12 = v18;
  if (v19 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v19);
  }
  if (v11 != 0 && v12 != 0) {
    v13 = *(_BYTE*)a2;
    v14 = *(_QWORD*)(a2 + 16);
    v15 = *(_QWORD*)(v12 + 16);
    LODWORD(v18) = 0;
    v16 = (__int64*)((v13 & 1) != 0 ? v14 : a2 + 1);
    v21 = v16;
    v20 = (__int64 (**)())game_HashString(v16);
    GameRoutine_842b40(&v18, &v20);
    LOBYTE(a2) = game_HasSkill(v15 + 1744, &v18);
  }
  else if (v11 == 0) {
    goto LABEL_26;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak_alt1(v11);
    if (v12 != 0) {
      return a2 & 1;
    }
    goto LABEL_26;
  }
  if (v12 == 0) {
  LABEL_26:
    LOBYTE(a2) = 0;
  }
  return a2 & 1;
}

__n128 cmdbtl_party_AddPrivateSkill(int a1, char* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __n128 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;
  struct {
    __int64 (**v20)();
    __int64* v21;
    int* v22;
    char gap40_[8];
    unsigned __int64* v23;
  } v20_;
  int v24;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_9:
  v24 = a1;
  v18_.v18 = 0;
  v18_.v19 = 0;
  v20_.v23 = (unsigned __int64*)&v20_.v20;
  v9 = (_QWORD*)*GameData_212ea58;
  v20_.v20 = GameData_1fed038;
  v20_.v21 = &v18_.v18;
  v20_.v22 = &v24;
  CmdbtlPartyNatives_e9a800(v9, (__int64)&v20_.v20),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v20_.v23 == (unsigned __int64*)&v20_.v20) {
    v11 = 32;
  }
  else {
    if (v20_.v23 == nullptr) {
      goto LABEL_14;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v20_.v23 + v11))((__int64)v20_.v23),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_14:
  if (v18_.v19 == 0) {
    return result;
  }
  v12 = std___1___shared_weak_count_lock(v18_.v19),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v13 = v18_.v18;
  if (v18_.v19 != 0) {
    result = std___1___shared_weak_count___release_weak_alt2(v18_.v19);
  }
  if (v12 != 0 && v13 != 0) {
    v14 = *a2;
    v15 = *((_QWORD*)a2 + 2);
    v16 = *(_QWORD*)(v13 + 16);
    LODWORD(v18_.v18) = 0;
    if ((v14 & 1) != 0) {
      v17 = v15;
    }
    else {
      v17 = (__int64)(a2 + 1);
    }
    v20_.v21 = (__int64*)v17;
    v20_.v20 = (__int64 (**)(void))game_HashString_alt1(v17),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_842b40_alt1((unsigned int*)&v18_.v18,
                            (unsigned __int64*)&v20_.v20),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    Unit_6ca760(v16, &v18_.v18),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else if (v12 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak_alt2(v12);
  }
  return result;
}

__int64 cmdbtl_party_RemovePrivateSkill(int a1, char* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64* v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 (**v20)();
  __int64* v21;
  int* v22;
  __int64 (***v23)();
  int v24;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(void))(*v7 + v8))();
LABEL_9:
  v24 = a1;
  v18 = 0;
  v19 = 0;
  v23 = &v20;
  v9 = *GameData_212ea58;
  v20 = GameData_1fed038;
  v21 = &v18;
  v22 = &v24;
  CmdbtlPartyNatives_e9a800_alt1(v9, &v20);
  if (v23 == &v20) {
    v10 = 4;
  }
  else {
    if (v23 == nullptr) {
      goto LABEL_14;
    }
    v10 = 5;
  }
  (*v23)[v10]();
LABEL_14:
  result = v19;
  if (v19 == 0) {
    return result;
  }
  v12 = std___1___shared_weak_count_lock(v19);
  v13 = v18;
  result = v19;
  if (v19 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v19);
  }
  if (v12 != 0 && v13 != 0) {
    v14 = *a2;
    v15 = *((__int64**)a2 + 2);
    v16 = *(_QWORD*)(v13 + 16);
    LODWORD(v18) = 0;
    if ((v14 & 1) != 0) {
      v17 = v15;
    }
    else {
      v17 = (__int64*)(a2 + 1);
    }
    v21 = v17;
    v20 = (__int64 (**)())game_HashString(v17);
    GameRoutine_842b40(&v18, &v20);
    result = Unit_6cb080(v16, &v18);
  }
  else if (v12 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return std___1___shared_weak_count___release_weak_alt1(v12);
  }
  return result;
}

__int64 cmdbtl_party_AddPrivateSkillOnce(int a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  int* v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  int* v28;
  __int64* v29;
  int v30;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_9:
  v30 = a1;
  v24 = 0;
  v25 = 0;
  v29 = &v26;
  v9 = *GameData_212ea58;
  v26 = (__int64)GameData_1fed038;
  v27 = &v24;
  v28 = &v30;
  CmdbtlPartyNatives_e9a800_alt1(v9, &v26);
  if (v29 == &v26) {
    v10 = 32;
  }
  else {
    if (v29 == nullptr) {
      goto LABEL_14;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v29 + v10))((__int64)v29);
LABEL_14:
  result = v25;
  if (v25 == 0) {
    return result;
  }
  v12 = std___1___shared_weak_count_lock_alt1();
  v13 = v24;
  result = v25;
  if (v25 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v25);
  }
  if (v12 == 0 || v13 == 0) {
    if (v12 == 0) {
      return result;
    }
    goto LABEL_43;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v14 = *(_QWORD*)(a2 + 16);
  }
  else {
    v14 = a2 + 1;
  }
  v15 = strlen(v14);
  if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v16 = v15;
  if (v15 >= 0x17) {
    if ((v15 | 7) == 0x17) {
      v18 = 26;
    }
    else {
      v18 = (v15 | 7) + 1;
    }
    v17 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v18,
                                                16, 0);
    v27 = (__int64*)v16;
    v28 = (int*)v17;
    v26 = v18 | 1;
    goto LABEL_32;
  }
  LOBYTE(v26) = 2 * v15;
  v17 = (char*)&v26 + 1;
  if (v15 != 0) {
  LABEL_32:
    memmove(v17, v14, v16);
  }
  v17[v16] = 0;
  v19 = *(__int64**)(v13 + 280);
  if ((unsigned __int64)v19 < *(_QWORD*)(v13 + 288)) {
    if ((v26 & 1) == 0) {
      v20 = v26;
      v21 = v28;
      result = (__int64)(v19 + 3);
      v19[1] = (__int64)v27;
      v19[2] = (__int64)v21;
      *v19 = v20;
      *(_QWORD*)(v13 + 280) = v19 + 3;
      goto LABEL_43;
    }
    fw_text_String_CopyTerminated(*(_QWORD*)(v13 + 280), v28, v27);
    result = (__int64)(v19 + 3);
    *(_QWORD*)(v13 + 280) = v19 + 3;
  LABEL_39:
    if (v28 != nullptr) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v23);
    }
    goto LABEL_43;
  }
  result = Manager_66cc20(v13 + 272, &v26);
  v22 = v26 & 1;
  *(_QWORD*)(v13 + 280) = result;
  if (v22 != 0) {
    goto LABEL_39;
  }
LABEL_43:
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return std___1___shared_weak_count___release_weak_alt1(v12);
  }
  return result;
}

__int64 cmdbtl_party_PlayMotion_eb2160(int a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  unsigned __int8* v14;
  int v15;
  unsigned __int8* v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[4];
  _QWORD* v23;
  int v24;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_9:
  v24 = a1;
  v20 = 0;
  v21 = 0;
  v23 = v22;
  v9 = *GameData_212ea58;
  v22[0] = GameData_1fed038;
  v22[1] = &v20;
  v22[2] = &v24;
  CmdbtlPartyNatives_e9a800_alt1(v9, v22);
  if (v23 == v22) {
    v10 = 32;
  }
  else {
    if (v23 == nullptr) {
      goto LABEL_14;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v23 + v10))((__int64)v23);
LABEL_14:
  result = v21;
  if (v21 == 0) {
    return result;
  }
  v12 = std___1___shared_weak_count_lock_alt1();
  v13 = v20;
  result = v21;
  if (v21 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v21);
  }
  if (v12 == 0 || v13 == 0) {
    if (v12 == 0) {
      return result;
    }
    goto LABEL_29;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v14 = *(unsigned __int8**)(a2 + 16);
  }
  else {
    v14 = (unsigned __int8*)(a2 + 1);
  }
  v17 = *v14;
  v16 = v14 + 1;
  v15 = v17;
  if (v17 != 0) {
    v18 = 0;
    do {
      v18 = v15 - v18 + 32 * v18;
      v19 = *v16++;
      v15 = v19;
    } while (v19 != 0);
    if ((*(_BYTE*)(v13 + 172) & 1) != 0) {
      goto LABEL_27;
    }
  }
  else {
    v18 = 0;
    if ((*(_BYTE*)(v13 + 172) & 1) != 0) {
      goto LABEL_27;
    }
  }
  *(_BYTE*)(v13 + 172) = 1;
LABEL_27:
  *(_DWORD*)(v13 + 136) = v18;
  *(_BYTE*)(v13 + 148) = 0;
  *(_DWORD*)(v13 + 144) = 0;
  *(_BYTE*)(v13 + 152) = 0;
  *(_BYTE*)(v13 + 156) = 0;
  *(_BYTE*)(v13 + 160) = 0;
  *(_BYTE*)(v13 + 164) = 0;
  *(_BYTE*)(v13 + 168) = 0;
  *(_BYTE*)(v13 + 140) = 1;
  result = CmdBtlUnit_e7ada0(v13);
LABEL_29:
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return std___1___shared_weak_count___release_weak_alt1(v12);
  }
  return result;
}

__int64 cmdbtl_party_PlayMotion_eb2360(int a1, __int64 a2, float a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  unsigned __int8* v16;
  int v17;
  unsigned __int8* v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  _QWORD v24[4];
  _QWORD* v25;
  int v26;

  v6 = *as_g_script_manager_ptr;
  v7 = *(
      _QWORD*)(v6 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v7 != 0) {
    v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 472LL))(v7);
  }
  else {
    v8 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v8 + 24) + 448LL))(
      *(_QWORD*)(v8 + 24), 1);
  v9 = *(_QWORD**)(v8 + 2240);
  *(_QWORD*)(v8 + 2240) = 0;
  if (v9 == (_QWORD*)(v8 + 2208)) {
    v10 = 32;
  }
  else {
    if (v9 == nullptr) {
      goto LABEL_9;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
LABEL_9:
  v26 = a1;
  v22 = 0;
  v23 = 0;
  v25 = v24;
  v11 = *GameData_212ea58;
  v24[0] = GameData_1fed038;
  v24[1] = &v22;
  v24[2] = &v26;
  CmdbtlPartyNatives_e9a800_alt1(v11, v24);
  if (v25 == v24) {
    v12 = 32;
  }
  else {
    if (v25 == nullptr) {
      goto LABEL_14;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v25 + v12))((__int64)v25);
LABEL_14:
  result = v23;
  if (v23 == 0) {
    return result;
  }
  v14 = std___1___shared_weak_count_lock_alt1();
  v15 = v22;
  result = v23;
  if (v23 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v23);
  }
  if (v14 != 0 && v15 != 0) {
    if ((*(_BYTE*)a2 & 1) != 0) {
      v16 = *(unsigned __int8**)(a2 + 16);
    }
    else {
      v16 = (unsigned __int8*)(a2 + 1);
    }
    v19 = *v16;
    v18 = v16 + 1;
    v17 = v19;
    if (v19 != 0) {
      v20 = 0;
      do {
        v20 = v17 - v20 + 32 * v20;
        v21 = *v18++;
        v17 = v21;
      } while (v21 != 0);
    }
    else {
      v20 = 0;
    }
    if ((*(_BYTE*)(v15 + 172) & 1) == 0) {
      *(_BYTE*)(v15 + 172) = 1;
    }
    *(_DWORD*)(v15 + 136) = v20;
    *(float*)(v15 + 144) = a3;
    *(_BYTE*)(v15 + 152) = 0;
    *(_BYTE*)(v15 + 156) = 0;
    *(_BYTE*)(v15 + 160) = 0;
    *(_BYTE*)(v15 + 164) = 0;
    *(_BYTE*)(v15 + 168) = 0;
    *(_BYTE*)(v15 + 140) = 1;
    *(_BYTE*)(v15 + 148) = 1;
    result = CmdBtlUnit_e7ada0(v15);
  }
  else if (v14 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    return std___1___shared_weak_count___release_weak_alt1(v14);
  }
  return result;
}

__int64 cmdbtl_party_PlayMotionDetail(int a1, __int64 a2, float a3, float a4,
                                      float a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 result;
  __int64 v18;
  __int64 v19;
  unsigned __int8* v20;
  int v21;
  unsigned __int8* v22;
  int v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  _QWORD v28[4];
  _QWORD* v29;
  int v30;

  v10 = *as_g_script_manager_ptr;
  v11 = *(
      _QWORD*)(v10 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v11 != 0) {
    v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 472LL))(v11);
  }
  else {
    v12 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v12 + 24) + 448LL))(
      *(_QWORD*)(v12 + 24), 1);
  v13 = *(_QWORD**)(v12 + 2240);
  *(_QWORD*)(v12 + 2240) = 0;
  if (v13 == (_QWORD*)(v12 + 2208)) {
    v14 = 32;
  }
  else {
    if (v13 == nullptr) {
      goto LABEL_9;
    }
    v14 = 40;
  }
  (*(void (**)(void))(*v13 + v14))();
LABEL_9:
  v30 = a1;
  v26 = 0;
  v27 = 0;
  v29 = v28;
  v15 = *GameData_212ea58;
  v28[0] = GameData_1fed038;
  v28[1] = &v26;
  v28[2] = &v30;
  CmdbtlPartyNatives_e9a800_alt1(v15, v28);
  if (v29 == v28) {
    v16 = 32;
  }
  else {
    if (v29 == nullptr) {
      goto LABEL_14;
    }
    v16 = 40;
  }
  (*(void (**)(void))(*v29 + v16))();
LABEL_14:
  result = v27;
  if (v27 == 0) {
    return result;
  }
  v18 = std___1___shared_weak_count_lock(v27);
  v19 = v26;
  result = v27;
  if (v27 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v27);
  }
  if (v18 != 0 && v19 != 0) {
    if ((*(_BYTE*)a2 & 1) != 0) {
      v20 = *(unsigned __int8**)(a2 + 16);
    }
    else {
      v20 = (unsigned __int8*)(a2 + 1);
    }
    v23 = *v20;
    v22 = v20 + 1;
    v21 = v23;
    if (v23 != 0) {
      v24 = 0;
      do {
        v24 = v21 - v24 + 32 * v24;
        v25 = *v22++;
        v21 = v25;
      } while (v25 != 0);
    }
    else {
      v24 = 0;
    }
    if ((*(_BYTE*)(v19 + 172) & 1) == 0) {
      *(_BYTE*)(v19 + 172) = 1;
    }
    *(_DWORD*)(v19 + 136) = v24;
    *(float*)(v19 + 144) = a3;
    *(float*)(v19 + 152) = a4;
    *(float*)(v19 + 160) = a5;
    *(_BYTE*)(v19 + 168) = 0;
    *(_BYTE*)(v19 + 140) = 1;
    *(_BYTE*)(v19 + 148) = 1;
    *(_BYTE*)(v19 + 156) = 1;
    *(_BYTE*)(v19 + 164) = 1;
    result = CmdBtlUnit_e7ada0(v19);
  }
  else if (v18 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    return std___1___shared_weak_count___release_weak_alt1(v18);
  }
  return result;
}

__int64 cmdbtl_party_PlayFacial(int a1, __int64 a2, float a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  int* v26;
  __int64* v27;
  int v28;

  v6 = *as_g_script_manager_ptr;
  v7 = *(
      _QWORD*)(v6 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v7 != 0) {
    v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 472LL))(v7);
  }
  else {
    v8 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v8 + 24) + 448LL))(
      *(_QWORD*)(v8 + 24), 1);
  v9 = *(_QWORD**)(v8 + 2240);
  *(_QWORD*)(v8 + 2240) = 0;
  if (v9 == (_QWORD*)(v8 + 2208)) {
    v10 = 32;
  }
  else {
    if (v9 == nullptr) {
      goto LABEL_9;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
LABEL_9:
  v28 = a1;
  v22 = 0;
  v23 = 0;
  v27 = &v24;
  v11 = *GameData_212ea58;
  v24 = (__int64)GameData_1fed038;
  v25 = &v22;
  v26 = &v28;
  CmdbtlPartyNatives_e9a800_alt1(v11, &v24);
  if (v27 == &v24) {
    v12 = 32;
  }
  else {
    if (v27 == nullptr) {
      goto LABEL_14;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v27 + v12))((__int64)v27);
LABEL_14:
  result = v23;
  if (v23 == 0) {
    return result;
  }
  v14 = std___1___shared_weak_count_lock_alt1();
  v15 = v22;
  result = v23;
  if (v23 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v23);
  }
  if (v14 == 0 || v15 == 0) {
    if (v14 == 0) {
      return result;
    }
    goto LABEL_38;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v16 = *(_QWORD*)(a2 + 16);
  }
  else {
    v16 = a2 + 1;
  }
  v17 = strlen(v16);
  if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v18 = v17;
  if (v17 >= 0x17) {
    if ((v17 | 7) == 0x17) {
      v20 = 26;
    }
    else {
      v20 = (v17 | 7) + 1;
    }
    v19 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v20,
                                                16, 0);
    v25 = (__int64*)v18;
    v26 = (int*)v19;
    v24 = v20 | 1;
  }
  else {
    LOBYTE(v24) = 2 * v17;
    v19 = (char*)&v24 + 1;
    if (v17 == 0) {
      goto LABEL_33;
    }
  }
  memmove(v19, v16, v18);
LABEL_33:
  v19[v18] = 0;
  result = CmdBtlUnit_e7da80(v15, &v24, a3);
  if ((v24 & 1) != 0 && v26 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21);
  }
LABEL_38:
  if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    return std___1___shared_weak_count___release_weak_alt1(v14);
  }
  return result;
}

__int64 cmdbtl_party_PlayDefaultFacial(int a1, float a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[2];
  int* v18;
  _QWORD* v19;
  int v20;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_9:
  v20 = a1;
  v15 = 0;
  v16 = 0;
  v19 = v17;
  v9 = *GameData_212ea58;
  v17[0] = GameData_1fed038;
  v17[1] = &v15;
  v18 = &v20;
  CmdbtlPartyNatives_e9a800_alt1(v9, v17);
  if (v19 == v17) {
    v10 = 32;
  }
  else {
    if (v19 == nullptr) {
      goto LABEL_14;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v19 + v10))((__int64)v19);
LABEL_14:
  result = v16;
  if (v16 == 0) {
    return result;
  }
  v12 = std___1___shared_weak_count_lock_alt1();
  v13 = v15;
  result = v16;
  if (v16 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v16);
  }
  if (v12 != 0 && v13 != 0) {
    LOWORD(v17[0]) = 0;
    result = CmdBtlUnit_e7da80(v13, v17, a2);
    if ((v17[0] & 1) != 0 && v18 != nullptr) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
    }
  }
  else if (v12 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return std___1___shared_weak_count___release_weak_alt1(v12);
  }
  return result;
}

__int64 cmdbtl_party_SetEnableFacialUpdate(int a1, char a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  char v16;
  _BYTE* v17;
  __int64 v18;
  _BYTE* v19;
  bool v20;
  __int64 v21;
  __int64 v22;
  _QWORD v23[4];
  _QWORD* v24;
  int v25;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_9:
  v25 = a1;
  v21 = 0;
  v22 = 0;
  v24 = v23;
  v9 = *GameData_212ea58;
  v23[0] = GameData_1fed038;
  v23[1] = &v21;
  v23[2] = &v25;
  CmdbtlPartyNatives_e9a800_alt1(v9, v23);
  if (v24 == v23) {
    v10 = 32;
  }
  else {
    if (v24 == nullptr) {
      goto LABEL_14;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v24 + v10))((__int64)v24);
LABEL_14:
  result = v22;
  if (v22 == 0) {
    return result;
  }
  v12 = std___1___shared_weak_count_lock_alt1();
  v13 = v21;
  result = v22;
  if (v22 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v22);
  }
  if (v12 == 0 || v13 == 0) {
    if (v12 == 0) {
      return result;
    }
    goto LABEL_33;
  }
  v14 = *(_QWORD*)(v13 + 208);
  if (v14 != 0) {
    v15 = *(__int64**)(v14 + 88);
    if (*((_BYTE*)v15 + 16) != (a2 & 1)) {
      *((_BYTE*)v15 + 16) = a2 & 1;
      if ((a2 & 1) != 0) {
        v16 = 0;
      }
      else {
        v16 = 2;
      }
      *((_BYTE*)v15 + 17) = *((_BYTE*)v15 + 17) & 0xFD | v16;
      *((_BYTE*)v15 + 18) = *((_BYTE*)v15 + 18) & 0xFD | v16;
      *((_BYTE*)v15 + 19) = *((_BYTE*)v15 + 19) & 0xFD | v16;
      *((_BYTE*)v15 + 20) = *((_BYTE*)v15 + 20) & 0xFD | v16;
      v17 = (_BYTE*)v15[1];
      v17[632] = 0;
      v17[664] = 0;
      v17[696] = 0;
      v17[728] = 0;
      v18 = *v15;
      if ((a2 & 1) != 0) {
        result = (*(__int64 (**)(__int64*))(v18 + 64))(v15);
        v19 = (_BYTE*)v15[1];
        v20 = v19[300] == 3 && v19[301] == 3;
        if (!v20 && v19[302] != 1) {
          goto LABEL_33;
        }
        v18 = *v15;
      }
      result = (*(__int64 (**)(__int64*))(v18 + 72))(v15);
    }
  }
LABEL_33:
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return std___1___shared_weak_count___release_weak_alt1(v12);
  }
  return result;
}

__int64 cmdbtl_party_SetHeadLookToTarget(int a1, int a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD v21[2];
  int* v22;
  _QWORD* v23;
  int v24;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_9:
  v24 = a1;
  v19 = 0;
  v20 = 0;
  v9 = GameData_212ea58;
  v21[0] = GameData_1fed038;
  v21[1] = &v19;
  v23 = v21;
  v10 = *GameData_212ea58;
  v22 = &v24;
  CmdbtlPartyNatives_e9a800_alt1(v10, v21);
  if (v23 == v21) {
    v11 = 32;
  }
  else {
    if (v23 == nullptr) {
      goto LABEL_14;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v23 + v11))((__int64)v23);
LABEL_14:
  result = v20;
  if (v20 == 0) {
    return result;
  }
  v13 = std___1___shared_weak_count_lock_alt1();
  v14 = v19;
  result = v20;
  if (v20 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v20);
  }
  if (v13 == 0 || v14 == 0) {
    if (v13 == 0) {
      return result;
    }
    goto LABEL_42;
  }
  v15 = *v9;
  v24 = a2;
  v19 = 0;
  v20 = 0;
  v21[0] = GameData_1fed038;
  v21[1] = &v19;
  v23 = v21;
  v22 = &v24;
  CmdbtlPartyNatives_e9a800_alt1(v15, v21);
  if (v23 == v21) {
    v16 = 32;
  }
  else {
    if (v23 == nullptr) {
      goto LABEL_26;
    }
    v16 = 40;
  }
  (*(void (**)(__int64))(*v23 + v16))((__int64)v23);
LABEL_26:
  result = v20;
  if (v20 != 0) {
    v17 = std___1___shared_weak_count_lock_alt1();
    result = v20;
    if (v17 != 0) {
      v18 = v19;
    }
    else {
      v18 = 0;
    }
    if (v20 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v20);
    }
    if (v18 != 0) {
      if (v17 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                                  memory_order_relaxed);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                                  memory_order_relaxed);
      }
      result = *(_QWORD*)(v14 + 336);
      *(_QWORD*)(v14 + 328) = v18;
      *(_QWORD*)(v14 + 336) = v17;
      if (result != 0) {
        result = std___1___shared_weak_count___release_weak_alt1(result);
      }
      if (v17 == 0) {
        goto LABEL_42;
      }
      result = std___1___shared_weak_count___release_weak_alt1(v17);
      goto LABEL_40;
    }
    if (v17 != 0) {
    LABEL_40:
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        result = std___1___shared_weak_count___release_weak_alt1(v17);
      }
    }
  }
LABEL_42:
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    return std___1___shared_weak_count___release_weak_alt1(v13);
  }
  return result;
}

__int64 cmdbtl_party_IsIdle(int a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  bool v11;
  char v12;
  __int64 v13;
  __int64 v15;
  __int64 v16;
  _QWORD v17[4];
  _QWORD* v18;
  int v19;

  v2 = *as_g_script_manager_ptr;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(void))(*v5 + v6))();
LABEL_9:
  v19 = a1;
  v15 = 0;
  v16 = 0;
  v18 = v17;
  v7 = *GameData_212ea58;
  v17[0] = GameData_1fed038;
  v17[1] = &v15;
  v17[2] = &v19;
  CmdbtlPartyNatives_e9a800_alt1(v7, v17);
  if (v18 == v17) {
    v8 = 32;
    goto LABEL_13;
  }
  if (v18 != nullptr) {
    v8 = 40;
  LABEL_13:
    (*(void (**)(void))(*v18 + v8))();
  }
  if (v16 != 0) {
    v9 = std___1___shared_weak_count_lock_alt1();
    v4 = v15;
    v10 = v16;
    if (v16 != 0) {
      v10 = std___1___shared_weak_count___release_weak_alt1(v16);
    }
    v11 = v9 == 0 || v4 == 0;
    v12 = !v11;
    if (!v11) {
      v13 = *(_QWORD*)(v4 + 208);
      v4 = *(_QWORD*)(v13 + 72);
      if (v4 != 0) {
        v10 = CharacterAnimator_1079e10(*(_QWORD*)(v13 + 72));
      }
      LOBYTE(v4) = (v4 == 0) | v10;
      goto LABEL_29;
    }
    if (v9 != 0) {
    LABEL_29:
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak_alt1(v9);
      }
      return (unsigned __int8)v4 & 1u | ((v12 & 1) == 0);
    }
  }
  v12 = 0;
  return (unsigned __int8)v4 & 1u | ((v12 & 1) == 0);
}

_QWORD* cmdbtl_party_WaitIdle(int a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[4];
  _QWORD* v17;
  int v18;

  v18 = a1;
  v14 = 0;
  v15 = 0;
  v17 = v16;
  v1 = *GameData_212ea58;
  v16[0] = GameData_1fed038;
  v16[1] = &v14;
  v16[2] = &v18;
  CmdbtlPartyNatives_e9a800_alt1(v1, v16);
  if (v17 == v16) {
    v2 = 32;
  }
  else {
    if (v17 == nullptr) {
      goto LABEL_6;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v17 + v2))((__int64)v17);
LABEL_6:
  if (v15 != 0) {
    v3 = std___1___shared_weak_count_lock_alt1();
    v4 = v14;
    if (v15 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v15);
    }
    if (v3 != 0 && v4 != 0) {
      v5 = *(_QWORD*)(*(_QWORD*)(v4 + 208) + 72LL);
      if (v5 != 0 && (CharacterAnimator_1079e10(v5) & 1) == 0) {
        v6 = as_g_script_manager;
        v7 = *(_QWORD*)(v6 +
                        8LL * (*(unsigned int (**)(__int64))(
                                  *(_QWORD*)as_g_thread_info + 72LL))(
                                  as_g_thread_info) +
                        4384);
        v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 472LL))(v7);
        result = (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
            **(_QWORD**)(v8 + 24) + 448LL))(*(_QWORD*)(v8 + 24), 0);
        if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
          return (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v3);
        }
        return result;
      }
      goto LABEL_16;
    }
    if (v3 != 0) {
    LABEL_16:
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak_alt1(v3);
      }
    }
  }
  v10 = as_g_script_manager;
  v11 = *(
      _QWORD*)(v10 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v11 != 0) {
    v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 472LL))(v11);
  }
  else {
    v12 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v12 + 24) + 448LL))(
      *(_QWORD*)(v12 + 24), 1);
  result = *(_QWORD**)(v12 + 2240);
  *(_QWORD*)(v12 + 2240) = 0;
  if (result == (_QWORD*)(v12 + 2208)) {
    v13 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v13 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v13))((__int64)result);
}

__attribute__((swiftcall)) void cmdbtl_party_GetPosition(PSEUDO_X8 x8_, int a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD v21[4];
  _QWORD* v22;
  int v23;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_9:
  v23 = a1;
  v19 = 0;
  v20 = 0;
  v22 = v21;
  v9 = *GameData_212ea58;
  v21[0] = GameData_1fed038;
  v21[1] = &v19;
  v21[2] = &v23;
  CmdbtlPartyNatives_e9a800_alt1(v9, v21);
  if (v22 == v21) {
    v10 = 32;
  }
  else {
    if (v22 == nullptr) {
      goto LABEL_14;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v22 + v10))((__int64)v22);
LABEL_14:
  result = v20;
  if (v20 != 0) {
    v12 = std___1___shared_weak_count_lock_alt1();
    v13 = v19;
    result = v20;
    if (v20 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v20);
    }
    if (v12 != 0 && v13 != 0) {
      v14 = *(_QWORD*)(v13 + 208);
      if (v14 != 0) {
        v15 = (__int64*)(*(_QWORD*)(v14 + 8) + 304LL);
      }
      else {
        v15 = (__int64*)(v13 + 112);
      }
      v17 = *v15;
      v16 = v15[1];
      *a2 = v17;
      a2[1] = v16;
    }
    else if (v12 == 0) {
      goto LABEL_29;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v13 != 0) {
        result;
        return;
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      result = std___1___shared_weak_count___release_weak_alt1(v12);
      if (v13 != 0) {
        result;
        return;
      }
    }
  }
LABEL_29:
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_21a6130);
    if ((_DWORD)result != 0) {
      v18 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v18;
      result = __cxa_guard_release(&GameData_21a6130);
    }
  }
  *(_OWORD*)a2 = GameData_21a6120;
  {
    result;
    return;
  }
}

__n128 cmdbtl_party_SetPosition(int a1, _DWORD* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __n128 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int128 v15;
  __int128 v16;
  unsigned int v17;
  __int128 v18;
  __int128 v19;
  __int128 v20;
  __int128 v21;
  struct {
    _QWORD v22[4];
    _QWORD* v23;
  } v22_;
  __int128 v24;
  __int128 v25;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_9:
  LODWORD(v24) = a1;
  v25 = (__typeof__(v25)){0};
  v22_.v23 = v22_.v22;
  v9 = (_QWORD*)*GameData_212ea58;
  v22_.v22[0] = GameData_1fed038;
  v22_.v22[1] = &v25;
  v22_.v22[2] = &v24;
  CmdbtlPartyNatives_e9a800(v9, (__int64)v22_.v22),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v22_.v23 == v22_.v22) {
    v11 = 32;
  }
  else {
    if (v22_.v23 == nullptr) {
      goto LABEL_14;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v22_.v23 + v11))((__int64)v22_.v23),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_14:
  if (*((_QWORD*)&v25 + 1) == 0) {
    return result;
  }
  v12 = std___1___shared_weak_count_lock(*((_QWORD*)&v25 + 1)),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v13 = v25;
  if (*((_QWORD*)&v25 + 1) != 0) {
    result =
        std___1___shared_weak_count___release_weak_alt2(*((_QWORD*)&v25 + 1));
  }
  if (v12 != 0 && v13 != 0) {
    v14 = *(_QWORD*)(v13 + 208);
    *(_DWORD*)(v13 + 96) = *a2;
    *(_DWORD*)(v13 + 100) = a2[1];
    v15 = *(_OWORD*)(v13 + 96);
    *((_QWORD*)&v15 + 1) = (unsigned int)a2[2];
    *(_OWORD*)(v13 + 96) = v15;
    *(_DWORD*)(v13 + 112) = *a2;
    *(_DWORD*)(v13 + 116) = a2[1];
    v16 = *(_OWORD*)(v13 + 112);
    v17 = a2[2];
    *(_QWORD*)&v18 = *(_QWORD*)(v13 + 112);
    *((_QWORD*)&v18 + 1) = v17;
    *(_OWORD*)(v13 + 112) = v18;
    if (v14 != 0) {
      *(_QWORD*)&v19 = (unsigned int)v16 | 0x4348000000000000LL;
      v21 = v18;
      DWORD1(v16) = -1027080192;
      *((_QWORD*)&v19 + 1) = v17;
      *((_QWORD*)&v16 + 1) = v17;
      v24 = v16;
      v25 = v19;
      GameRoutine_1085a10((void*)(v22_.v22), v14 + 160, &v25, &v24, 0),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v18 = v21;
      DWORD1(v18) = HIDWORD(v22_.v22[0]);
    }
    *(_QWORD*)(v13 + 112) = v18;
    v20 = *(_OWORD*)(v13 + 112);
    *(_DWORD*)(v13 + 100) = DWORD1(v20);
    *((_QWORD*)&v20 + 1) = DWORD2(v18);
    *(_OWORD*)(v13 + 112) = v20;
    GameRoutine_e7bed0_alt1(v13, 1),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else if (v12 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak_alt2(v12);
  }
  return result;
}

__int64 cmdbtl_party_SetAngle(int a1, int* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[4];
  _QWORD* v19;
  int v20;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_9:
  v20 = a1;
  v16 = 0;
  v17 = 0;
  v19 = v18;
  v9 = *GameData_212ea58;
  v18[0] = GameData_1fed038;
  v18[1] = &v16;
  v18[2] = &v20;
  CmdbtlPartyNatives_e9a800_alt1(v9, v18);
  if (v19 == v18) {
    v10 = 32;
  }
  else {
    if (v19 == nullptr) {
      goto LABEL_14;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v19 + v10))((__int64)v19);
LABEL_14:
  result = v17;
  if (v17 == 0) {
    return result;
  }
  v12 = std___1___shared_weak_count_lock_alt1();
  v13 = v16;
  result = v17;
  if (v17 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v17);
  }
  if (v12 != 0 && v13 != 0) {
    v14 = *a2;
    v15 = *(_QWORD*)(v13 + 304);
    *(_QWORD*)(v13 + 296) = 0;
    *(_QWORD*)(v13 + 304) = 0;
    *(_BYTE*)(v13 + 80) = 1;
    *(_DWORD*)(v13 + 132) = v14;
    *(_DWORD*)(v13 + 32) = v14;
    if (v15 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v15);
    }
    result = GameRoutine_e7bed0(v13, 1);
  }
  else if (v12 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return std___1___shared_weak_count___release_weak_alt1(v12);
  }
  return result;
}

_QWORD* cmdbtl_party_PlayVoice(int a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64* v23;
  int* v24;
  __int64* v25;
  int v26;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_9:
  v26 = a1;
  v20 = 0;
  v21 = nullptr;
  v25 = &v22;
  v9 = *GameData_212ea58;
  v22 = (__int64)GameData_1fed038;
  v23 = &v20;
  v24 = &v26;
  CmdbtlPartyNatives_e9a800_alt1(v9, &v22);
  if (v25 == &v22) {
    v10 = 32;
  }
  else {
    if (v25 == nullptr) {
      goto LABEL_14;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v25 + v10))((__int64)v25);
LABEL_14:
  result = v21;
  if (v21 == nullptr) {
    return result;
  }
  v12 = std___1___shared_weak_count_lock_alt1();
  v13 = v20;
  result = v21;
  if (v21 != nullptr) {
    result = (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v21);
  }
  if (v12 == 0 || v13 == 0) {
    if (v12 == 0) {
      return result;
    }
    goto LABEL_38;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v14 = *(_QWORD*)(a2 + 16);
  }
  else {
    v14 = a2 + 1;
  }
  v15 = strlen(v14);
  if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v16 = v15;
  if (v15 >= 0x17) {
    if ((v15 | 7) == 0x17) {
      v18 = 26;
    }
    else {
      v18 = (v15 | 7) + 1;
    }
    v17 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v18,
                                                16, 0);
    v23 = (__int64*)v16;
    v24 = (int*)v17;
    v22 = v18 | 1;
  }
  else {
    LOBYTE(v22) = 2 * v15;
    v17 = (char*)&v22 + 1;
    if (v15 == 0) {
      goto LABEL_33;
    }
  }
  memmove(v17, v14, v16);
LABEL_33:
  v17[v16] = 0;
  result = (*(struct PseudoSret*)(&v20) = GameRoutine_e7dd50(v13, &v22),
            (void*)(&v20));
  if ((v22 & 1) != 0 && v24 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
  }
LABEL_38:
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v12);
  }
  return result;
}

__n128 cmdbtl_party_PlayVoiceDirectLabel(int a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __n128 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  struct {
    __int64 v20;
    __int64 v21;
  } v20_;
  struct {
    __int64 v22;
    __int64* v23;
    int* v24;
    char gap40_[8];
    __int64* v25;
  } v22_;
  int v26;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_9:
  v26 = a1;
  v20_.v20 = 0;
  v20_.v21 = 0;
  v22_.v25 = &v22_.v22;
  v9 = (_QWORD*)*GameData_212ea58;
  v22_.v22 = (__int64)GameData_1fed038;
  v22_.v23 = &v20_.v20;
  v22_.v24 = &v26;
  CmdbtlPartyNatives_e9a800(v9, (__int64)&v22_.v22),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v22_.v25 == &v22_.v22) {
    v11 = 32;
  }
  else {
    if (v22_.v25 == nullptr) {
      goto LABEL_14;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v22_.v25 + v11))((__int64)v22_.v25),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_14:
  if (v20_.v21 == 0) {
    return result;
  }
  v12 = std___1___shared_weak_count_lock(v20_.v21),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v13 = v20_.v20;
  if (v20_.v21 != 0) {
    result = std___1___shared_weak_count___release_weak_alt2(v20_.v21);
  }
  if (v12 == 0 || v13 == 0) {
    if (v12 == 0) {
      return result;
    }
    goto LABEL_38;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v14 = *(_QWORD*)(a2 + 16);
  }
  else {
    v14 = a2 + 1;
  }
  v15 = strlen(v14),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v16 = v15;
  if (v15 >= 0x17) {
    if ((v15 | 7) == 0x17) {
      v18 = 26;
    }
    else {
      v18 = (v15 | 7) + 1;
    }
    v17 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v18, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v22_.v23 = (__int64*)v16;
    v22_.v24 = (int*)v17;
    v22_.v22 = v18 | 1;
  }
  else {
    LOBYTE(v22_.v22) = 2 * v15;
    v17 = (char*)&v22_.v22 + 1;
    if (v15 == 0) {
      goto LABEL_33;
    }
  }
  memmove(v17, v14, v16),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_33:
  v17[v16] = 0;
  CmdBtlUnit_e7de70((void*)((__int64)&v20_.v20), v13, (__int64)&v22_.v22),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v22_.v22 & 1) != 0 && v22_.v24 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
  }
LABEL_38:
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v12 + 16LL))(
        v12, *(long double*)&result),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak_alt2(v12);
  }
  return result;
}

unsigned __int64 CmdbtlPartyNatives_eb4500(__int64 a1)
{
  __int64 v1;
  unsigned __int64 result;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64* v11;
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
  char v23;
  char v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;

  if ((*(_BYTE*)a1 & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 16);
  }
  else {
    v1 = a1 + 1;
  }
  result = game_HashString(v1);
  if (result != 0) {
    v3 = *(_QWORD*)(GameData_21c99c8 + 96);
    if (v3 != 0 && *(_QWORD*)(GameData_21c99c8 + 112) != 0) {
      v5 = v3 - 1;
      if ((v3 & (v3 - 1)) != 0) {
        v6 = result;
        if (result >= v3) {
          v6 = result % v3;
        }
      }
      else {
        v6 = v5 & result;
      }
      v7 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v6);
      if (v7 != nullptr) {
        v8 = (_QWORD*)*v7;
        if (v8 != nullptr) {
          if ((v3 & v5) == 0) {
            while (1) {
              v10 = v8[1];
              if (v10 == result) {
                if (v8[2] == result) {
                  goto LABEL_29;
                }
              }
              else if ((v10 & v5) != v6) {
                return result;
              }
              v8 = (_QWORD*)*v8;
              if (v8 == nullptr) {
                return result;
              }
            }
          }
          do {
            v9 = v8[1];
            if (v9 == result) {
              if (v8[2] == result) {
              LABEL_29:
                if (v8[3] != 0) {
                  v16 = v8[3];
                  v17 = 0;
                  v24 = 0;
                  v18 = 0;
                  v19 = 0;
                  v20 = 0;
                  v21 = 0;
                  v22 = 0;
                  v23 = 0;
                  v25 = 3;
                  v26 = 0;
                  v27 = 2;
                  v28 = 0;
                  if ((GameData_2216858 & 1) == 0) {
                    GameRoutine_8123d0();
                  }
                  result = CmdbtlPartyNatives_eb8a30(&GameData_2216780, &v16);
                  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
                  if (v20 != 0) {
                    v12 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
                    v21 = v20;
                    v13 = 128;
                    if (*(_QWORD*)(v12 + 200) == 0) {
                      v13 = 56;
                    }
                    result = nn_mem_StandardAllocator_Free(v12 + v13, v20);
                  }
                  if (v17 != 0) {
                    v14 = *v11;
                    v18 = v17;
                    v15 = 128;
                    if (*(_QWORD*)(v14 + 200) == 0) {
                      v15 = 56;
                    }
                    return nn_mem_StandardAllocator_Free(v14 + v15, v17);
                  }
                }
                return result;
              }
            }
            else {
              if (v9 >= v3) {
                v9 %= v3;
              }
              if (v9 != v6) {
                return result;
              }
            }
            v8 = (_QWORD*)*v8;
          } while (v8 != nullptr);
        }
      }
    }
  }
  return result;
}

__int64 cmdbtl_party_AddTemporaryUnit(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  _QWORD v14[2];
  char* v15;

  v2 = *as_g_script_manager_ptr;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_9:
  if ((*(_BYTE*)a1 & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 16);
  }
  else {
    v7 = a1 + 1;
  }
  v8 = strlen(v7);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v9 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11,
                                                16, 0);
    v14[1] = v9;
    v15 = v10;
    v14[0] = v11 | 1;
  }
  else {
    LOBYTE(v14[0]) = 2 * v8;
    v10 = (char*)v14 + 1;
    if (v8 == 0) {
      goto LABEL_21;
    }
  }
  memmove(v10, v7, v9);
LABEL_21:
  v10[v9] = 0;
  result = CmdbtlPartyNatives_eb4500_alt1(v14);
  if ((v14[0] & 1) != 0 && v15 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
  }
  return result;
}

__int64 cmdbtl_party_AddTemporaryGuest(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  _QWORD v14[2];
  char* v15;

  v2 = *as_g_script_manager_ptr;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_9:
  if ((*(_BYTE*)a1 & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 16);
  }
  else {
    v7 = a1 + 1;
  }
  v8 = strlen(v7);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v9 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11,
                                                16, 0);
    v14[1] = v9;
    v15 = v10;
    v14[0] = v11 | 1;
  }
  else {
    LOBYTE(v14[0]) = 2 * v8;
    v10 = (char*)v14 + 1;
    if (v8 == 0) {
      goto LABEL_21;
    }
  }
  memmove(v10, v7, v9);
LABEL_21:
  v10[v9] = 0;
  result = CmdbtlPartyNatives_eb4500_alt1(v14);
  if ((v14[0] & 1) != 0 && v15 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
  }
  return result;
}

__int64 CmdbtlPartyNatives_eb7a80(__int64 result)
{
  __int64 v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  int v7;
  __int64 v8;
  bool v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  __int64 v16;

  v1 = result;
  v2 = 16 * *(_DWORD*)(result + 72);
  if ((*(_BYTE*)(result + 76) & 1) != 0) {
    v16 = *(_QWORD*)result;
    result = game_UnitPool_Find_6ead60(&v16, &GameData_216772c);
    if (result != 0) {
      v3 = result;
      v4 = game_UnitPool_GetFirst(&GameData_216772c);
      if (v4 == 0) {
        goto LABEL_21;
      }
      v5 = *(_QWORD*)(v4 + 432);
      if (v5 == 0) {
        v5 = *(_QWORD*)(v4 + 440);
        if (v5 != 0) {
          v6 = *(unsigned __int8*)(v5 + 16);
          if (v6 <= 8) {
            while (1) {
              v15 = v6 + 1;
              if ((((unsigned int)GameData_216772c >> v6) & 2) != 0) {
                v5 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                24LL * (unsigned __int8)(v6 + 1) + 556000);
                if (v5 != 0) {
                  break;
                }
              }
              v6 = v15;
              if (v15 == 9) {
                goto LABEL_7;
              }
            }
          }
          else {
          LABEL_7:
            v5 = 0;
          }
        }
      }
      if (v4 == v3) {
      LABEL_21:
        v14 = 0;
      }
      else {
        v7 = 0;
        do {
          v10 = v7;
          if (v5 == 0) {
            break;
          }
          v8 = *(_QWORD*)(v5 + 432);
          if (v8 == 0) {
            v11 = *(_QWORD*)(v5 + 440);
            if (v11 != 0 &&
                (unsigned int)(v12 = *(unsigned __int8*)(v11 + 16)) <= 8) {
              while (1) {
                v13 = v12 + 1;
                if ((((unsigned int)GameData_216772c >> v12) & 2) != 0) {
                  v8 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                  24LL * (unsigned __int8)(v12 + 1) + 556000);
                  if (v8 != 0) {
                    break;
                  }
                }
                v12 = v13;
                if (v13 == 9) {
                  goto LABEL_10;
                }
              }
            }
            else {
            LABEL_10:
              v8 = 0;
            }
          }
          v7 = v10 + 1;
          v9 = v5 == v3;
          v5 = v8;
        } while (!v9);
        v14 = ~v10;
      }
      result = game_UnitPool_CountAll(&GameData_216772c);
      v2 += v14 + result;
    }
  }
  *(_DWORD*)(v1 + 80) = v2;
  return result;
}

__int64 CmdbtlPartyNatives_eb8c40(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  __int64 v10;
  __int64 v11;

  v1 = *(_QWORD*)(a1 + 72);
  v2 = *(_QWORD*)(a1 + 80);
  if (v1 != v2) {
    do {
      CmdbtlPartyNatives_eb7a80(v1);
      v1 += 88;
    } while (v1 != v2);
    v1 = *(_QWORD*)(a1 + 72);
    v2 = *(_QWORD*)(a1 + 80);
  }
  if (v2 - v1 < 1) {
    v7 = 0;
    return GameRoutine_ebabe0(v1, v2, 0x2E8BA2E8BA2E8BA3LL * ((v2 - v1) >> 3),
                              0, v7);
  }
  else {
    v4 = 0x2E8BA2E8BA2E8BA3LL * ((v2 - v1) >> 3);
    v5 = GameData_212c060;
    while (1) {
      v6 = GameRoutine_1a09d20(88 * v4, v5);
      if (v6 != 0) {
        break;
      }
      v7 = v4 >> 1;
      v8 = v4 > 1;
      v4 >>= 1;
      if (!v8) {
        return GameRoutine_ebabe0(
            v1, v2, 0x2E8BA2E8BA2E8BA3LL * ((v2 - v1) >> 3), 0, v7);
      }
    }
    v10 = v6;
    GameRoutine_ebabe0(v1, v2, 0x2E8BA2E8BA2E8BA3LL * ((v2 - v1) >> 3), v6, v4);
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v10);
  }
}

_QWORD* CmdbtlPartyNatives_eba910(_QWORD* a1, __int64* a2)
{
  __int64 v2;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v2 = *a2;
  a1[2] = 0;
  a1[3] = 0;
  v4 = a1;
  *a1 = v2;
  a1[1] = 0;
  v6 = a2[1];
  v5 = a2[2];
  v7 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v8 = v5 - v6;
  if (v5 != v6) {
    if (v8 < 0) {
      GameRoutine_6e5c60(a1);
    }
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v5 - v6, 16, 0);
    v10 = v9 + v8;
    v4[1] = v9;
    v4[2] = v9;
    v4[3] = v9 + v8;
    a1 = (_QWORD*)memcpy(v9, v6, v8);
    v4[2] = v10;
  }
  v4[5] = 0;
  v4[6] = 0;
  v4[4] = 0;
  v12 = a2[4];
  v11 = a2[5];
  v13 = v11 - v12;
  if (v11 != v12) {
    if (v13 < 0) {
      GameRoutine_705570(a1);
    }
    v14 = fw_memory_HeapManager_Allocate(*v7, v11 - v12, 16, 0);
    v15 = v14 + v13;
    v4[4] = v14;
    v4[5] = v14;
    v4[6] = v14 + v13;
    memcpy(v14, v12, v13);
    v4[5] = v15;
  }
  v16 = a2[7];
  v17 = a2[8];
  *((_DWORD*)v4 + 18) = *((_DWORD*)a2 + 18);
  v4[7] = v16;
  v4[8] = v17;
  *((_DWORD*)v4 + 19) = *((_DWORD*)a2 + 19);
  *((_DWORD*)v4 + 20) = *((_DWORD*)a2 + 20);
  return v4;
}

__int64* CmdbtlPartyNatives_ebaa20(__int64* result, _QWORD* a2)
{
  __int64* v2;
  __int64* v3;
  __int64* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v3 = (__int64*)*result;
  v2 = (__int64*)result[1];
  v5 = result;
  v6 = a2[1] + *result - (_QWORD)v2;
  if (v2 != (__int64*)*result) {
    v7 = (__int64*)*result;
    v8 = a2[1] + *result - (_QWORD)v2;
    do {
      v9 = *v7;
      *(_QWORD*)(v8 + 16) = 0;
      *(_QWORD*)(v8 + 24) = 0;
      *(_QWORD*)v8 = v9;
      *(_QWORD*)(v8 + 8) = 0;
      *(_QWORD*)(v8 + 8) = v7[1];
      *(_QWORD*)(v8 + 16) = v7[2];
      *(_QWORD*)(v8 + 24) = v7[3];
      v7[2] = 0;
      v7[3] = 0;
      v7[1] = 0;
      *(_QWORD*)(v8 + 40) = 0;
      *(_QWORD*)(v8 + 48) = 0;
      *(_QWORD*)(v8 + 32) = 0;
      *(_QWORD*)(v8 + 32) = v7[4];
      *(_QWORD*)(v8 + 40) = v7[5];
      *(_QWORD*)(v8 + 48) = v7[6];
      v7[5] = 0;
      v7[6] = 0;
      v7[4] = 0;
      v10 = v7[7];
      v11 = v7[8];
      *(_DWORD*)(v8 + 72) = *((_DWORD*)v7 + 18);
      *(_QWORD*)(v8 + 56) = v10;
      *(_QWORD*)(v8 + 64) = v11;
      *(_DWORD*)(v8 + 76) = *((_DWORD*)v7 + 19);
      LODWORD(v10) = *((_DWORD*)v7 + 20);
      v7 += 11;
      *(_DWORD*)(v8 + 80) = v10;
      v8 += 88;
    } while (v7 != v2);
    v12 = fw_memory_g_heap_manager_ptr;
    do {
      v13 = v3[4];
      if (v13 != 0) {
        v3[5] = v13;
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        result =
            (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v14, v13);
      }
      v15 = v3[1];
      if (v15 != 0) {
        v3[2] = v15;
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v16 = 128;
        }
        else {
          v16 = 56;
        }
        result =
            (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v16, v15);
      }
      v3 += 11;
    } while (v3 != v2);
  }
  a2[1] = v6;
  v17 = *v5;
  v5[1] = *v5;
  *v5 = a2[1];
  a2[1] = v17;
  v18 = v5[1];
  v5[1] = a2[2];
  a2[2] = v18;
  v19 = v5[2];
  v5[2] = a2[3];
  a2[3] = v19;
  *a2 = a2[1];
  return result;
}

#pragma GCC visibility pop
