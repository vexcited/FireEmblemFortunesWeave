#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_120e680(_QWORD);
__int64 GameRoutine_1487cc0(_QWORD, _QWORD);
__int64 GameRoutine_1958ed0(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_9a28e0(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_facility_ReleaseGroups(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern _DWORD* GameData_2130fb8;
extern __int64 (*GameData_20411a8[])();
extern __int64 (*GameData_2041270[])();
extern __int64 (*GameData_2041320[])();
extern __int64 (*GameData_2041368[])();
extern __int64 (*GameData_20414b0[])();
extern __int64 (*game_facility_anonymous_ProcClassExaminerScene_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_21f3d10;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_UnitListSet_instance_;
extern __int64 game_facility_FacilityView_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64* GameData_2132488;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 ProcClassExaminerScene_Destructor(__int64 a1);
void ProcClassExaminerScene_146fec0();
__int64 ProcClassExaminerScene_Unknown18();
_QWORD* ProcClassExaminerScene_Unknown20(_QWORD* result, char a2);
_QWORD* GameRoutine_140ea90(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_1400c40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1400f80(_QWORD, _QWORD);
__int64 GameRoutine_1405080(_QWORD);
__int64 GameRoutine_140f750(_QWORD, _QWORD);
__int64 GameRoutine_1412540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1462640(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_146df70(__int64 result, __int64);
__int64 GameRoutine_148cdb0(_QWORD);
__int64 GameRoutine_7a88a0(_QWORD);
__int64 ProcClassTrialSeq_8b8140(void);
__int64 SceneCharacter_14020c0(_QWORD);
__int64 SceneManager_138c7e0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1a8edb5;
extern __int64 (*GameData_2040ee8[])();
extern __int64 (*GameData_2041068[])();
extern __int64 GameData_21c99c0;
extern __int64 GameData_21cd0d0;
extern __int64 GameData_21f3ff8;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212d590[3];
extern __int64* GameData_212dcd0;
float ProcTheaterSceneAct_13e2420(_QWORD);
void __attribute__((noreturn)) GameRoutine_cdcc10(_QWORD);
void game_facility_anonymous_ProcClassExaminerScene_PrepareTrialResult();
void ProcClassExaminerScene_146d740(__int64 a1);
__int64 ProcClassExaminerScene_146dd50();
__int64 ProcClassExaminerScene_146dea0();
void ProcClassExaminerScene_146df30();
__int64
game_facility_anonymous_ProcClassExaminerScene_CommitCharaViewerParam_closure_Destructor(
    _QWORD* a1);
__int64
game_facility_anonymous_ProcClassExaminerScene_CommitCharaViewerParam_closure_DeletingDestructor(
    _QWORD* a1);
__int64
game_facility_anonymous_ProcClassExaminerScene_CommitCharaViewerParam_closure_Clone(
    __int64 a1);
__int64
game_facility_anonymous_ProcClassExaminerScene_CommitCharaViewerParam_closure_Destroy(
    _QWORD* a1);
__int64 ProcClassExaminerScene_146ea70(__int64 result, __int64 a2);
_QWORD* ProcClassExaminerScene_146f010(_QWORD* result, _QWORD* a2);
__int64
game_facility_anonymous_ProcClassExaminerScene_PrepareTrialResult_closure_Invoke(
    __int64 a1);
__int64 ProcClassExaminerScene_Unknown2();
__int64 ProcClassExaminerScene_Unknown6(__int64 result, char a2);
__int64
game_facility_anonymous_ProcClassExaminerScene_ChangeJobSelectCharacterAppearance_closure_Invoke_1471220(
    __int64 a1);
__int64
game_facility_anonymous_ProcClassExaminerScene_ChangeJobSelectCharacterAppearance_closure_Invoke_1471520(
    __int64 a1, __int64* a2);
__int64
game_facility_anonymous_ProcClassExaminerScene_SetJobSelectCharacterCameraMotion_closure_Invoke(
    __int64 result);
__int64 ProcClassExaminerScene_146ea70_alt1(_QWORD, _QWORD) __asm__(
    "ProcClassExaminerScene_146ea70");
_QWORD* GameRoutine_138ff80(_QWORD* result, _QWORD*);
_QWORD* SceneManager_138a920(__int64, __int64);
_QWORD* game_facility_anonymous_ProcClassTrialJobMenu_CreateBind(__int64,
                                                                 __int64,
                                                                 unsigned int);
__attribute__((swiftcall)) void CostumeFile_9fea70(PSEUDO_X8, __int64 result,
                                                   __int64);
__attribute__((swiftcall)) void FacilityUnitList_145eea0(PSEUDO_X8, __int64,
                                                         __int64);
__attribute__((swiftcall)) void
SceneCharacterAppearance_140f8e0(PSEUDO_X8, _QWORD*, __int64*);
__attribute__((swiftcall)) void
SceneEffectManager_1950850(PSEUDO_X8, __int64, __int64, unsigned int);
__attribute__((swiftcall)) void game_95e2c0(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_146e1c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1952d00(__int64, __int64, __int64);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_928a20(__int64, unsigned __int8, __int64);
__int64 ProcInst_657a50(_QWORD, _QWORD);
__int64 ProcOpening_142ea60(__int64);
__int64 SceneCharacter_1401750(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SceneManager_138c360(_QWORD*, __int64*, __int64*, __int64*);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_809dc0(_QWORD, _QWORD, float);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
__int64 game_facility_ClassChangeJobMenu_CreateBind(__int64, __int64,
                                                    unsigned int, char);
__int64
game_facility_ReleaseGroups_alt1() __asm__("game_facility_ReleaseGroups");
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt2(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 strlen(_QWORD);
__n128 GameRoutine_658c00_alt1(_QWORD*) __asm__("GameRoutine_658c00");
__n128 GameRoutine_a0d9a0(__int64);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt2() __asm__(
    "std___1___shared_weak_count___release_weak");
bool GameRoutine_1389160(__int64, __int64, __int64);
char* game_util_Format(__int64, __int64, __int64, __int64, __int64, __int64,
                       __int64, __int64, char);
extern _UNKNOWN* GameData_212c960;
extern _UNKNOWN* GameData_2131330;
extern _UNKNOWN GameData_1aa5f21;
extern _UNKNOWN GameData_1adf9ca;
extern _UNKNOWN GameData_1adf9e8;
extern _UNKNOWN GameData_1ae755f;
extern _UNKNOWN GameData_1af6b35;
extern __int64 (*GameData_2041630[])();
extern __int64 (*GameData_20416b0[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_facility_FacilitySceneBase_vtable[])();
extern __int64 (*game_facility_SceneManager_IMapArgs_vtable)();
extern __int64* GameData_2131328;
extern __int64 GameData_1a8af13;
extern __int64 GameData_1ac48cb;
extern __int64 GameData_2131338[2];
extern __int64 GameData_21f4000;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_kVariableHubFacilityForced;
extern int GameData_2241730;
void GameRoutine_19513c0(unsigned __int8*);
void GameRoutine_1958ed0_alt1(__int64, __int64) __asm__("GameRoutine_1958ed0");
void __attribute__((noreturn)) String_60a1d0();
void game_facility_SceneManager_CreateMob(_QWORD*, __int64);
void ProcClassExaminerScene_146b330();
__int64 ProcClassExaminerScene_146c500(__int64 result);
_QWORD* ProcClassExaminerScene_146c7a0(_QWORD* result);
__n128 ProcClassExaminerScene_146c9b0();
__int64 ProcClassExaminerScene_146dc80(__int64 result);
__int64 ProcClassExaminerScene_146ddf0(__int64 result);
__int64 ProcClassExaminerScene_146df70(__int64 result, __int64 a2);
__attribute__((swiftcall)) void
game_facility_anonymous_ProcClassExaminerScene_CommitCharaViewerParam_closure_Invoke(
    PSEUDO_X8 x8_, __int64 result);
__int64
game_facility_anonymous_ProcClassExaminerScene_OnBeginTrialScene_closure_Invoke(
    __int64 a1);
__n128
game_facility_anonymous_ProcClassExaminerScene_OnBeginTrialScene_closure0_Invoke(
    __int64 a1);
__int64 ProcClassExaminerScene_146ff00(__int64 a1);
__int64 game_facility_anonymous_ProcClassExaminerScene_LoadJobSelectCharacter();
__n128 ProcClassExaminerScene_1470900(__int64 a1);
__n128 ProcClassExaminerScene_1470a20(__int64 a1);
__n128 ProcClassExaminerScene_1470ba0(_QWORD* a1);
__n128 ProcClassExaminerScene_1470cc0(_QWORD* a1);
__int64
game_facility_anonymous_ProcClassExaminerScene_LoadJobSelectCharacter_closure_Invoke(
    __int64 a1, __int64* a2);

void ProcClassExaminerScene_146b330()
{
  __int64 v0;
  __int64 v1;
  struct {
    _QWORD v2[4];
    _QWORD* v3;
  } v2_;

  if (game_facility_FacilityView_instance_ != 0) {
    v0 = *(_QWORD*)(game_facility_FacilityView_instance_ + 248);
    if (v0 != 0) {
      v2_.v2[0] = GameData_20416b0;
      v2_.v2[1] = game_facility_FacilityView_instance_;
      v2_.v3 = v2_.v2;
      GameRoutine_1952d00(v0, 0, (__int64)v2_.v2);
      if (v2_.v3 == v2_.v2) {
        v1 = 32;
      }
      else {
        if (v2_.v3 == nullptr) {
          return;
        }
        v1 = 40;
      }
      (*(void (**)(__int64))(*v2_.v3 + v1))((__int64)v2_.v3);
    }
  }
}

__int64 ProcClassExaminerScene_146c500(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  char v6[4];

  v1 = GameData_21f3ff8;
  if (GameData_21f3ff8 != 0) {
    v2 = *(__int64**)(GameData_21f3ff8 + 48);
    if (*(__int64**)(GameData_21f3ff8 + 56) != v2) {
      v3 = *v2;
      if (*v2 != 0) {
        if (game_facility_FacilityView_instance_ != 0) {
          v4 = result;
          CostumeFile_9fea70((void*)(v6), *(_QWORD*)(v3 + 392),
                             *(_QWORD*)(v3 + 400));
          v1 = GameData_21f3ff8;
          if (GameData_21f3ff8 == 0) {
            v5 = 0;
            result = v4;
            return game_facility_ClassChangeJobMenu_CreateBind(result, v3, v5,
                                                               1);
          }
          result = v4;
          *(_DWORD*)(GameData_21f3ff8 + 24) = (unsigned __int8)v6[0];
        }
        v5 = *(_DWORD*)(v1 + 16) & ~(*(int*)(v1 + 16) >> 31);
        return game_facility_ClassChangeJobMenu_CreateBind(result, v3, v5, 1);
      }
    }
  }
  return result;
}

_QWORD* ProcClassExaminerScene_146c7a0(_QWORD* result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  _QWORD* v4;
  unsigned int v5;
  char v6[4];

  v1 = GameData_21f3ff8;
  if (GameData_21f3ff8 != 0) {
    v2 = *(__int64**)(GameData_21f3ff8 + 48);
    if (*(__int64**)(GameData_21f3ff8 + 56) != v2) {
      v3 = *v2;
      if (*v2 != 0) {
        if (game_facility_FacilityView_instance_ != 0) {
          v4 = result;
          CostumeFile_9fea70((void*)(v6), *(_QWORD*)(v3 + 392),
                             *(_QWORD*)(v3 + 400));
          v1 = GameData_21f3ff8;
          if (GameData_21f3ff8 == 0) {
            v5 = 0;
            result = v4;
            return game_facility_anonymous_ProcClassTrialJobMenu_CreateBind(
                (__int64)result, v3, v5);
          }
          result = v4;
          *(_DWORD*)(GameData_21f3ff8 + 24) = (unsigned __int8)v6[0];
        }
        v5 = *(_DWORD*)(v1 + 16) & ~(*(int*)(v1 + 16) >> 31);
        return game_facility_anonymous_ProcClassTrialJobMenu_CreateBind(
            (__int64)result, v3, v5);
      }
    }
  }
  return result;
}

__n128 ProcClassExaminerScene_146c9b0()
{
  __int64 v0;
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD** v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __n128 result;
  __int64 v18;
  struct {
    __int64 v19[2];
    char* v20;
  } v19_;
  _BYTE v21[24];
  _BYTE v22[25];
  struct {
    char gap72_[1];
    char v23[151];
    char v24;
    char gap225_[47];
    __int64 v25;
  } v23_;
  __int64 v26;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v0 = GameData_21f3ff8;
  if (GameData_21f3ff8 == 0 || (v1 = *(__int64**)(GameData_21f3ff8 + 48),
                                *(__int64**)(GameData_21f3ff8 + 56) == v1)) {
    v2 = 0;
  }
  else {
    v2 = *v1;
  }
  v23_.v23[23] = 0;
  v23_.v23[135] = 0;
  v23_.v24 = 0;
  v23_.v25 = 0;
  v22[16] = 20;
  strcpy(v23_.v23, "_D");
  *(_QWORD*)&v22[17] = 0x335FAC9CE6BA9FE5LL;
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 392);
  }
  else {
    v3 = 0;
  }
  v19_.v19[0] = v3;
  if (GameData_21f3ff8 != 0) {
    v4 = *(unsigned int*)(GameData_21f3ff8 + 20);
    if ((v4 & 0x80000000) != 0 ||
        (v5 = *(_QWORD*)(GameData_21c99c0 + 64),
         (int)v4 >=
             (int)((unsigned __int64)(*(_QWORD*)(GameData_21c99c0 + 72) - v5) >>
                   3))) {
      v0 = 0;
    }
    else {
      v0 = *(_QWORD*)(v5 + 8 * v4);
    }
  }
  v26 = v0;
  SceneCharacterAppearance_140f8e0((void*)(v21), v19_.v19, &v26),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)v22 = *(_QWORD*)v21;
  *(_QWORD*)&v22[8] = *(_QWORD*)&v21[8];
  GameRoutine_60a020((__int64)&v22[16], (__int64)&GameData_1af6b35),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v23_.v24 |= 6u;
  v6 = (_QWORD**)GameData_212dce8;
  v21[0] = 38;
  v21[20] = 0;
  *(_DWORD*)&v21[16] = -2004622461;
  v7 = *(_QWORD**)GameData_212dce8;
  *(_QWORD*)&v21[9] = 0x8383E38B83E3A683LL;
  v8 = *(_QWORD*)(v2 + 392);
  *(_QWORD*)&v21[1] = 0xE35F93A8E9A6A9E8LL;
  v9 = *(_QWORD*)(v8 + 8);
  v10 = strlen(v9),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(), result = COERCE_AS(__typeof__(result),
                                        PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v11 = v10;
  if (v10 >= 0x17) {
    if ((v10 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v10 | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v13, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v19_.v19[1] = v11;
    v19_.v20 = v12;
    v19_.v19[0] = v13 | 1;
  }
  else {
    LOBYTE(v19_.v19[0]) = 2 * v10;
    v12 = (char*)v19_.v19 + 1;
    if (v10 == 0) {
      goto LABEL_22;
    }
  }
  memmove(v12, v9, v11),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_22:
  v12[v11] = 0;
  SceneManager_138c360(v7, (__int64*)v21, v19_.v19, (__int64*)v22),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v19_.v19[0] & 1) != 0 && v19_.v20 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v14),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v21[0] & 1) != 0 && *(_QWORD*)&v21[16] != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v15),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  GameRoutine_a0d9a0((__int64)v22),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v16 = *v6;
  v22[23] = 0;
  v22[0] = 44;
  *(_QWORD*)&v22[1] = 0x83E39683E3A283E3LL;
  *(_QWORD*)&v22[9] = 0x5F8883E3B982E3AALL;
  *(_QWORD*)&v22[15] = 0x93A8E9A6A9E85F88LL;
  game_facility_SceneManager_CreateMob(v16, (__int64)v22),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v22[0] & 1) != 0 && *(_QWORD*)&v22[16] != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v18);
  }
  return result;
}

void game_facility_anonymous_ProcClassExaminerScene_PrepareTrialResult()
{
  __int64 v0;
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _BYTE v19[20];
  char v20;
  _BYTE* v21;
  _BYTE v22[8];
  __int64 v23;
  _QWORD v24[2];
  int v25;
  char v26;

  v19[0] = 38;
  v20 = 0;
  *(_DWORD*)&v19[16] = -2004622461;
  v0 = *(_QWORD*)GameData_212dce8;
  *(_QWORD*)&v19[1] = 0xE35F93A8E9A6A9E8LL;
  *(_QWORD*)&v19[9] = 0x8383E38B83E3A683LL;
  v1 = *(__int64**)(v0 + 160);
  v2 = *(__int64**)(v0 + 168);
  if (v1 != v2) {
    while (1) {
      v4 = *v1++;
      v3 = v4;
      v5 = *(_QWORD*)(v4 + 40);
      v6 = v4 + 25;
      v7 = (*(_BYTE*)(v4 + 24) & 1) != 0 ? v5 : v6;
      v24[0] = &v19[1];
      v24[1] = (unsigned __int64)v19[0] >> 1;
      v8 = game_HashString(v7);
      if (v8 == GameRoutine_7a88a0(v24)) {
        break;
      }
      if (v1 == v2) {
        v3 = 0;
        break;
      }
    }
    if (v3 != 0) {
      v9 = *(_QWORD*)(v3 + 128);
      v10 = *(_QWORD*)(v3 + 136);
      if (v10 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                  memory_order_relaxed);
        GameRoutine_1405080(v9);
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak();
        }
      }
      else {
        GameRoutine_1405080(v9);
      }
      if (GameData_21f3ff8 != 0 && *(int*)(GameData_21f3ff8 + 32) >= 1) {
        v11 = *(__int64**)(GameData_21f3ff8 + 48);
        if (*(__int64**)(GameData_21f3ff8 + 56) == v11) {
          v12 = 0;
        }
        else {
          v12 = *v11;
        }
        ProcClassExaminerScene_146f010(v22, v12);
        *(_QWORD*)v19 = GameData_2041068;
        *(_QWORD*)&v19[8] = v3;
        v21 = v19;
        GameRoutine_1400c40(v3, v22, 0, v19);
        if (v21 == v19) {
          v15 = 32;
        }
        else {
          if (v21 == nullptr) {
            goto LABEL_32;
          }
          v15 = 40;
        }
        (*(void (**)(void))(*(_QWORD*)v21 + v15))();
      LABEL_32:
        v16 = v23;
        if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
          std___1___shared_weak_count___release_weak();
        }
        return;
      }
      v24[0] = SceneCharacter_14020c0(v3);
      v25 = 0;
      v26 = 1;
      GameRoutine_140ea90(&v17, v24, &v25);
      v21 = nullptr;
      GameRoutine_1400c40(v3, &v17, 0, v19);
      if (v21 == v19) {
        v13 = 32;
      }
      else {
        if (v21 == nullptr) {
          goto LABEL_22;
        }
        v13 = 40;
      }
      (*(void (**)(void))(*(_QWORD*)v21 + v13))();
    LABEL_22:
      v14 = v18;
      if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak();
      }
      GameRoutine_1400f80(v3, 0);
    }
  }
}

void ProcClassExaminerScene_146d740(__int64 a1)
{
  int v2;
  float v3;
  float v4;

  v2 = (int)(float)(ProcTheaterSceneAct_13e2420(&GameData_1a8edb5) * 60.0);
  if (v2 >= 1) {
    v3 = *(float*)(a1 + 144);
    v4 = (float)(unsigned int)v2;
    *(_WORD*)(a1 + 136) &= 0xFF97u;
    if (v3 >= (float)(unsigned int)v2) {
      v4 = v3;
    }
    *(float*)(a1 + 144) = v4;
  }
}

__int64 ProcClassExaminerScene_146dc80(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if (game_GameModeData_instance_ == 0) {
    return result;
  }
  v1 = result;
  result = game_GameVariableTable_Find_alt1(
      *(_QWORD**)(game_GameModeData_instance_ + 48),
      (unsigned __int64*)&game_kVariableHubFacilityForced);
  if (result == 0 || *(_DWORD*)(result + 32) == 0) {
    return result;
  }
  result = *(_QWORD*)(v1 + 192);
  *(_QWORD*)(v1 + 152) = 0;
  *(_QWORD*)(v1 + 192) = 0;
  if (result == v1 + 160) {
    v2 = 32;
  }
  else {
    if (result == 0) {
      goto LABEL_9;
    }
    v2 = 40;
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v2))((__int64)result);
LABEL_9:
  v3 = *(_QWORD*)(v1 + 8);
  if (v3 != 0) {
    while (1) {
      if (*(_BYTE*)v3 == 2) {
        if (*(_DWORD*)(v3 + 32) == 11) {
          *(_QWORD*)(v1 + 16) = v3;
          *(_WORD*)(v1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v3 == 0) {
        return result;
      }
      v3 += 64;
    }
  }
  return result;
}

__int64 ProcClassExaminerScene_146dd50()
{
  __int64 v0;
  __int64 result;
  __int64 v2;
  char v3;
  unsigned __int64 v4;
  _BYTE v5[15];

  v3 = 38;
  v5[11] = 0;
  *(_DWORD*)&v5[7] = -2004622461;
  v0 = *(_QWORD*)GameData_212dce8;
  v4 = 0xE35F93A8E9A6A9E8LL;
  *(_QWORD*)v5 = 0x8383E38B83E3A683LL;
  result = SceneManager_138c7e0(v0, &v3);
  if ((v3 & 1) != 0 && *(_QWORD*)&v5[7] != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, *(_QWORD*)&v5[7]);
  }
  return result;
}

__int64 ProcClassExaminerScene_146ddf0(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  char v6[4];

  v1 = GameData_21f3ff8;
  if (GameData_21f3ff8 != 0) {
    v2 = *(__int64**)(GameData_21f3ff8 + 48);
    if (*(__int64**)(GameData_21f3ff8 + 56) != v2) {
      v3 = *v2;
      if (*v2 != 0) {
        if (game_facility_FacilityView_instance_ != 0) {
          v4 = result;
          CostumeFile_9fea70((void*)(v6), *(_QWORD*)(v3 + 392),
                             *(_QWORD*)(v3 + 400));
          v1 = GameData_21f3ff8;
          if (GameData_21f3ff8 == 0) {
            v5 = 0;
            result = v4;
            return game_facility_ClassChangeJobMenu_CreateBind(result, v3, v5,
                                                               2);
          }
          result = v4;
          *(_DWORD*)(GameData_21f3ff8 + 24) = (unsigned __int8)v6[0];
        }
        v5 = *(_DWORD*)(v1 + 16) & ~(*(int*)(v1 + 16) >> 31);
        return game_facility_ClassChangeJobMenu_CreateBind(result, v3, v5, 2);
      }
    }
  }
  return result;
}

__int64 ProcClassExaminerScene_146dea0()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  unsigned int v4;
  __int64 result;

  if (GameData_21f3ff8 != 0) {
    v0 = *(_QWORD**)(GameData_21f3ff8 + 48);
    if (*(_QWORD**)(GameData_21f3ff8 + 56) != v0 && *v0 != 0) {
      v1 = *(unsigned int*)(GameData_21f3ff8 + 36);
      if ((v1 & 0x80000000) == 0) {
        v2 = *(_QWORD*)(GameData_21c99c0 + 64);
        v3 = (unsigned __int64)(*(_QWORD*)(GameData_21c99c0 + 72) - v2) >> 3;
        if ((int)v1 < (int)v3 && *(_QWORD*)(v2 + 8 * v1) != 0) {
          v4 = *(_DWORD*)(GameData_21f3ff8 + 20);
          if ((v4 & 0x80000000) == 0 && v4 < (unsigned int)v3 &&
              *(_QWORD*)(v2 + 8LL * v4) != 0) {
            return ProcClassTrialSeq_8b8140();
          }
        }
      }
    }
  }
  return result;
}

void ProcClassExaminerScene_146df30()
{
  _DWORD* v0;
  int v1;

  if (GameData_21cd0d0 != 0) {
    v0 = *(_DWORD**)(GameData_21cd0d0 + 8);
    v1 = v0[2] - 1;
    v0[2] = v1;
    if (v1 == 0) {
      (*(void (**)(_DWORD*))(*(_QWORD*)v0 + 8LL))(v0);
    }
  }
}

__int64 ProcClassExaminerScene_146df70(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;

  if (result == 0) {
    return result;
  }
  v2 = *(_QWORD*)(result + 112);
  v3 = *(_QWORD*)(result + 120);
  v5 = result;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    if (*(_DWORD*)(v2 + 108) != -574916402) {
      *(_DWORD*)(v2 + 108) = -574916402;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak_alt1(v3);
    }
  }
  else if (*(_DWORD*)(v2 + 108) != -574916402) {
    *(_DWORD*)(v2 + 108) = -574916402;
  }
  v6 = *(_QWORD*)(v5 + 128);
  v7 = *(_QWORD*)(v5 + 136);
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_1405080(v6);
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_alt1(v7);
    }
  }
  else {
    GameRoutine_1405080(v6);
  }
  if ((*(_BYTE*)(v5 + 48) & 1) != 0) {
    v8 = *(_QWORD*)(v5 + 64);
  }
  else {
    v8 = v5 + 49;
  }
  FacilityUnitList_145eea0((void*)(&v19),
                           *(_QWORD*)(game_UnitListSet_instance_ + 24), v8);
  if (v19 != nullptr) {
    v9 = *v19;
    v10 = v20;
    if (v20 == 0) {
    LABEL_21:
      if (v9 == 0) {
        goto LABEL_31;
      }
      goto LABEL_22;
    }
  }
  else {
    v9 = 0;
    v10 = v20;
    if (v20 == 0) {
      goto LABEL_21;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_21;
  }
  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  std___1___shared_weak_count___release_weak_alt1(v10);
  if (v9 == 0) {
    goto LABEL_31;
  }
LABEL_22:
  game_95e2c0((void*)(&v19), v9, a2);
  if (((unsigned __int16)v19 & 0xBC1) != 0x100 &&
      (a2 == 0 || (*(_BYTE*)(a2 + 49) & 0xFE) != 4 ||
       game_GameModeData_instance_ != 0 &&
           *(_DWORD*)(game_GameModeData_instance_ + 60) == 3)) {
  LABEL_31:
    v11 = *(_QWORD*)(v5 + 8);
    if (v11 != 0) {
      v12 = 1;
      goto LABEL_33;
    }
    goto LABEL_34;
  }
  v11 = *(_QWORD*)(v5 + 8);
  if (v11 != 0) {
    v12 = 0;
  LABEL_33:
    *(_BYTE*)(v11 + 289) = v12;
  }
LABEL_34:
  GameRoutine_146e1c0(&v14, v5, &GameData_1adf9ca);
  if (v17 != 0) {
    v18 = v17;
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v13);
  }
  if (v16 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v16);
  }
  result = v15;
  if (v15 != 0) {
    return std___1___shared_weak_count___release_weak_alt1(v15);
  }
  return result;
}

__int64

game_facility_anonymous_ProcClassExaminerScene_CommitCharaViewerParam_closure_Destructor(
    _QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 result;

  v1 = a1[32];
  *a1 = GameData_2040ee8;
  if (v1 != 0) {
    a1[33] = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v1);
  }
  if (a1[31] != 0) {
    std___1___shared_weak_count___release_weak();
  }
  result = a1[17];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

__int64

game_facility_anonymous_ProcClassExaminerScene_CommitCharaViewerParam_closure_DeletingDestructor(
    _QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = a1[32];
  *a1 = GameData_2040ee8;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[33] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  if (a1[31] != 0) {
    std___1___shared_weak_count___release_weak();
  }
  if (a1[17] != 0) {
    std___1___shared_weak_count___release_weak();
  }
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, a1);
}

__int64

game_facility_anonymous_ProcClassExaminerScene_CommitCharaViewerParam_closure_Clone(
    __int64 a1)
{
  __int64 v2;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      336, 16, 0);
  ProcClassExaminerScene_146ea70_alt1(v2, a1 + 16);
  return v2;
}

__int64

game_facility_anonymous_ProcClassExaminerScene_CommitCharaViewerParam_closure_Destroy(
    _QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 result;

  v1 = a1[32];
  if (v1 != 0) {
    a1[33] = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v1);
  }
  if (a1[31] != 0) {
    std___1___shared_weak_count___release_weak();
  }
  result = a1[17];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

__attribute__((swiftcall)) void

game_facility_anonymous_ProcClassExaminerScene_CommitCharaViewerParam_closure_Invoke(
    PSEUDO_X8 x8_, __int64 result)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;

  v2 = *(_QWORD*)(result + 72);
  *a2 = *(_QWORD*)(result + 64);
  a2[1] = v2;
  {
    result;
    return;
  }
}

__int64 ProcClassExaminerScene_146ea70(__int64 result, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
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
  __int64 v20;
  __int64 v21;
  __int64 v22;

  v3 = result;
  *(_QWORD*)result = GameData_2040ee8;
  *(_QWORD*)(result + 24) = *(_QWORD*)(a2 + 8);
  *(_QWORD*)(result + 16) = *(_QWORD*)a2;
  *(_QWORD*)(result + 40) = *(_QWORD*)(a2 + 24);
  *(_QWORD*)(result + 32) = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(result + 56) = *(_QWORD*)(a2 + 40);
  *(_QWORD*)(result + 48) = *(_QWORD*)(a2 + 32);
  v4 = *(_QWORD*)(a2 + 56);
  *(_QWORD*)(result + 64) = *(_QWORD*)(a2 + 48);
  *(_QWORD*)(result + 72) = v4;
  v5 = *(_QWORD*)(a2 + 64);
  *(_DWORD*)(result + 88) = *(_DWORD*)(a2 + 72);
  *(_QWORD*)(result + 80) = v5;
  v6 = *(_QWORD*)(a2 + 88);
  *(_QWORD*)(result + 96) = *(_QWORD*)(a2 + 80);
  *(_QWORD*)(result + 104) = v6;
  v7 = *(_QWORD*)(a2 + 104);
  *(_QWORD*)(result + 112) = *(_QWORD*)(a2 + 96);
  *(_QWORD*)(result + 120) = v7;
  *(_QWORD*)(result + 128) = *(_QWORD*)(a2 + 112);
  v8 = *(_QWORD*)(a2 + 120);
  *(_QWORD*)(result + 136) = v8;
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
  }
  v9 = *(_DWORD*)(a2 + 144);
  *(_QWORD*)(result + 152) = *(_QWORD*)(a2 + 136);
  v10 = *(_QWORD*)(a2 + 128);
  *(_DWORD*)(result + 160) = v9;
  *(_QWORD*)(result + 144) = v10;
  *(_QWORD*)(result + 184) = *(_QWORD*)(a2 + 168);
  *(_QWORD*)(result + 176) = *(_QWORD*)(a2 + 160);
  v12 = *(_QWORD*)(a2 + 200);
  v11 = *(_QWORD*)(a2 + 208);
  LODWORD(v10) = *(_DWORD*)(a2 + 216);
  *(_QWORD*)(result + 208) = *(_QWORD*)(a2 + 192);
  *(_DWORD*)(result + 232) = v10;
  *(_QWORD*)(result + 224) = v11;
  v14 = *(_QWORD*)(a2 + 176);
  v13 = *(_QWORD*)(a2 + 184);
  *(_QWORD*)(result + 216) = v12;
  *(_QWORD*)(result + 192) = v14;
  *(_QWORD*)(result + 200) = v13;
  *(_QWORD*)(result + 240) = *(_QWORD*)(a2 + 224);
  v15 = *(_QWORD*)(a2 + 232);
  *(_QWORD*)(result + 248) = v15;
  if (v15 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(result + 264) = 0;
  *(_QWORD*)(result + 272) = 0;
  *(_QWORD*)(result + 256) = 0;
  v17 = *(_QWORD*)(a2 + 240);
  v16 = *(_QWORD*)(a2 + 248);
  v18 = v16 - v17;
  if (v16 != v17) {
    if (v18 < 0) {
      GameRoutine_cdcc10(result);
    }
    v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v16 - v17, 16, 0);
    v20 = v19 + v18;
    v21 = v18 & 0x7FFFFFFFFFFFFFF0LL;
    v22 = v19;
    *(_QWORD*)(v3 + 256) = v19;
    *(_QWORD*)(v3 + 264) = v19;
    *(_QWORD*)(v3 + 272) = v20;
    result = memcpy(v19, v17, v21);
    *(_QWORD*)(v3 + 264) = v22 + v21;
  }
  *(_BYTE*)(v3 + 288) = 0;
  *(_BYTE*)(v3 + 304) = 0;
  if (*(_BYTE*)(a2 + 288) == 1) {
    *(_QWORD*)(v3 + 296) = *(_QWORD*)(a2 + 280);
    *(_QWORD*)(v3 + 288) = *(_QWORD*)(a2 + 272);
    *(_BYTE*)(v3 + 304) = 1;
  }
  *(_QWORD*)(v3 + 328) = *(_QWORD*)(a2 + 312);
  *(_QWORD*)(v3 + 320) = *(_QWORD*)(a2 + 304);
  return result;
}

__int64

game_facility_anonymous_ProcClassExaminerScene_OnBeginTrialScene_closure_Invoke(
    __int64 a1)
{
  __int64 v1;
  unsigned __int8 explicit;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int16 v11;

  v1 = *(_QWORD*)(a1 + 8);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2131330,
                                  memory_order_acquire);
  v3 = GameData_2131328;
  if ((explicit & 1) == 0) {
    v8 = v1;
    v7 = __cxa_guard_acquire(GameData_2131330);
    v3 = GameData_2131328;
    v1 = v8;
    if (v7 != 0) {
      *(_WORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_2131328 + 4) = 0;
      *v3 = 0xBF800000BF800000LL;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3) = -1082130432;
      __cxa_guard_release(GameData_2131330);
      v3 = GameData_2131328;
      v1 = v8;
    }
  }
  v4 = *v3;
  v5 = v3[1];
  v9 = v4;
  v10 = v5;
  v11 = WORD2(v5);
  return SceneCharacter_1401750(v1, 0, 0, &v9);
}

__n128

game_facility_anonymous_ProcClassExaminerScene_OnBeginTrialScene_closure0_Invoke(
    __int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __n128 result;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  _BYTE v12[15];
  struct {
    __int64 v13;
    __int64 v14;
  } v13_;

  if (*GameData_212dcd0 != 0) {
    if ((*(_DWORD*)(*GameData_212dcd0 + 28) &
         ~(*(int*)(*GameData_212dcd0 + 28) >> 31)) >= 100) {
      v2 = 100;
    }
    else {
      v2 = *(_DWORD*)(*GameData_212dcd0 + 28) &
           ~(*(int*)(*GameData_212dcd0 + 28) >> 31);
    }
  }
  else {
    v2 = 0;
  }
  v10 = 40;
  if (v2 >= (int)ProcOpening_142ea60((__int64)&GameData_1ae755f)) {
    *(_DWORD*)&v12[8] = -1733564065;
    v3 = &GameData_1a8af13;
  }
  else {
    *(_DWORD*)&v12[8] = -1900157857;
    v3 = &GameData_1ac48cb;
  }
  v5 = *v3;
  v4 = v3[1];
  v6 = *(_QWORD*)(a1 + 8);
  v12[12] = 0;
  *(_QWORD*)v12 = v4;
  v11 = v5;
  result = X8CALL_V0(__n128, SceneEffectManager_1950850((void*)(&v13_.v13),
                                                        (__int64)&v10, v6, 1u));
  v8 = v13_.v14;
  if (v13_.v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13_.v14 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v8 + 16LL))(
        v8, *(long double*)&result);
    result = std___1___shared_weak_count___release_weak_alt2();
    if ((v10 & 1) == 0) {
      return result;
    }
  }
  else if ((v10 & 1) == 0) {
    return result;
  }
  if (*(_QWORD*)&v12[7] != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
  }
  return result;
}

_QWORD* ProcClassExaminerScene_146f010(_QWORD* result, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64* v10;
  __int64* v11;
  _QWORD v12[2];
  unsigned int v13;

  if (a2 == nullptr) {
    *result = 0;
    result[1] = 0;
    return result;
  }
  if (*GameData_212dcd0 != 0 &&
      ((v3 = *(unsigned int*)(*GameData_212dcd0 + 20)) & 0x80000000) == 0 &&
      (v4 = *(_QWORD*)(GameData_21c99c0 + 64),
       (int)v3 <
           (int)((unsigned __int64)(*(_QWORD*)(GameData_21c99c0 + 72) - v4) >>
                 3)) &&
      (v5 = *(__int64**)(v4 + 8 * v3)) != nullptr) {
    if (a2[51] != 0) {
      goto LABEL_13;
    }
  }
  else {
    if (a2[51] != 0) {
      v5 = nullptr;
    LABEL_16:
      v11 = v5;
      return (_QWORD*)GameRoutine_140f750(a2, &v11);
    }
    v5 = *(__int64**)(*(_QWORD*)(a2[50] + 24LL) + 1104LL);
  }
  if (v5 == *(__int64**)(*(_QWORD*)(a2[50] + 24LL) + 1104LL)) {
    goto LABEL_16;
  }
LABEL_13:
  v6 = *(_QWORD*)(a2[49] + 24LL);
  v7 = *(_QWORD*)(v6 + 1400);
  v12[0] = *(_QWORD*)(v6 + 1392);
  v12[1] = v7;
  if (game_GameModeData_instance_ != 0 &&
      (v8 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v6 + 1392)) != 0) {
    v9 = *(_DWORD*)(v8 + 32);
  }
  else {
    v9 = 0;
  }
  v13 = v9;
  game_VariableManager_SetFlag(v6 + 1392, 0);
  v10 = v5;
  GameRoutine_140f750(a2, &v10);
  v11 = GameData_212d590[0] + 2;
  return (_QWORD*)game_VariableManager_SetFlag(v12, v9);
}

__int64

game_facility_anonymous_ProcClassExaminerScene_PrepareTrialResult_closure_Invoke(
    __int64 a1)
{
  __int64 v1;
  __int64 result;
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
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;

  v1 = *(_QWORD*)(a1 + 8);
  v18 = 0;
  v19 = &v18;
  result = GameRoutine_1462640(&v19, &v19, *(_QWORD*)(v1 + 8));
  v3 = v18;
  if (v18 != 0) {
    v5 = *(_QWORD*)(v18 + 48);
    v4 = *(_QWORD*)(v18 + 56);
    *(_DWORD*)(v18 + 112) = 0;
    v6 = v4 - v5;
    *(_BYTE*)(v3 + 116) = 1;
    if (v6 != 0) {
      if (v6 == 8) {
        v7 = 0;
      }
      else {
        v10 = 0;
        v7 = 0;
        do {
          v13 = *(_QWORD*)(*(_QWORD*)(v3 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v3 + 48) + 8 * v7);
          *(_QWORD*)(v3 + 96) = v13;
          v14 = *(_QWORD*)(v13 + 192);
          if ((*(_BYTE*)(v14 + 22) & 1) == 0 &&
              (*(_BYTE*)(v14 + 21) & 1) == 0) {
            *(_QWORD*)v14 = 0;
            *(_DWORD*)(v14 + 8) = 1;
          }
          *(_DWORD*)(v14 + 12) = 0;
          *(_BYTE*)(v14 + 20) = 1;
          v15 = *(_QWORD*)(v3 + 136);
          *(_QWORD*)(v3 + 96) = 0;
          *(_BYTE*)(v15 + v10) = 0;
          v16 = *(_QWORD*)(*(_QWORD*)(v3 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v3 + 48) + 8 * v7 + 8);
          *(_QWORD*)(v3 + 96) = v16;
          v17 = *(_QWORD*)(v16 + 192);
          if ((*(_BYTE*)(v17 + 22) & 1) == 0 &&
              (*(_BYTE*)(v17 + 21) & 1) == 0) {
            *(_QWORD*)v17 = 0;
            *(_DWORD*)(v17 + 8) = 1;
          }
          *(_DWORD*)(v17 + 12) = 0;
          *(_BYTE*)(v17 + 20) = 1;
          v7 += 2;
          v11 = *(_QWORD*)(v3 + 136);
          *(_QWORD*)(v3 + 96) = 0;
          v12 = v11 + v10;
          v10 += 6;
          *(_BYTE*)(v12 + 3) = 0;
        } while (((v6 >> 3) & 0xFFFFFFFFFFFFFFFELL) != v7);
      }
      if ((v6 & 8) != 0) {
        v8 = *(_QWORD*)(*(_QWORD*)(v3 + 40) + 56LL) +
             224LL * *(_QWORD*)(*(_QWORD*)(v3 + 48) + 8 * v7);
        *(_QWORD*)(v3 + 96) = v8;
        v9 = *(_QWORD*)(v8 + 192);
        if ((*(_BYTE*)(v9 + 22) & 1) == 0 && (*(_BYTE*)(v9 + 21) & 1) == 0) {
          *(_QWORD*)v9 = 0;
          *(_DWORD*)(v9 + 8) = 1;
        }
        *(_DWORD*)(v9 + 12) = 0;
        *(_BYTE*)(v9 + 20) = 1;
        *(_QWORD*)(v3 + 96) = 0;
        *(_BYTE*)(*(_QWORD*)(v3 + 136) + 3 * v7) = 0;
      }
    }
  }
  return result;
}

__int64 ProcClassExaminerScene_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64*** v6;
  __int64** v7;
  __int64** v8;
  __int64* v9;
  __int64* v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  _QWORD* v20;
  __int64 v21;
  _QWORD v23[4];
  _QWORD* v24;
  __int64 v25;

  *(_QWORD*)a1 = game_facility_anonymous_ProcClassExaminerScene_vtable;
  *(_QWORD*)(a1 + 208) = GameData_20411a8;
  v2 = a1 + 208;
  if (*(_BYTE*)(a1 + 240) == 1) {
    v3 = GameRoutine_9a28e0(1);
    v4 = game_VariableManager_SetFlag(v3, 0);
    GameRoutine_120e680(v4);
  }
  v5 = v23;
  v23[0] = GameData_20414b0;
  v6 = *(__int64****)(game_UnitListSet_instance_ + 24);
  v24 = v23;
  v7 = *v6;
  v8 = v6[1];
  if (*v6 == v8) {
    goto LABEL_21;
  }
  do {
    v9 = *v7;
    v10 = v7[1];
    if (v10 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 1), 1u,
                                memory_order_relaxed);
    }
    if (v9 != nullptr) {
      v11 = (v9[6] & 0x20) == 0;
      if (v10 == nullptr) {
        goto LABEL_13;
      }
    }
    else {
      v11 = false;
      if (v10 == nullptr) {
        goto LABEL_13;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64*))(*v10 + 16))(v10);
      std___1___shared_weak_count___release_weak();
      if (!v11) {
        goto LABEL_5;
      }
      goto LABEL_14;
    }
  LABEL_13:
    if (v11) {
    LABEL_14:
      v25 = **v7;
      if (v24 == nullptr) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(_QWORD*, __int64*))(*v24 + 48LL))(v24, &v25);
    }
  LABEL_5:
    v7 += 2;
  } while (v7 != v8);
  v5 = v24;
  if (v24 != v23) {
    if (v24 != nullptr) {
      v12 = 40;
      goto LABEL_22;
    }
    goto LABEL_23;
  }

LABEL_21:
  v12 = 32;

LABEL_22:
  (*(void (**)(_QWORD*))(*v5 + v12))(v5);

LABEL_23:
  v13 = *(_QWORD*)(a1 + 304);
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak();
  }
  v14 = *(_QWORD*)(a1 + 288);
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak();
  }
  v15 = *(_QWORD*)(a1 + 272);
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak();
  }
  v16 = *(_QWORD*)(a1 + 256);
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak();
  }
  *(_QWORD*)a1 = GameData_2041270;
  *(_QWORD*)(a1 + 208) = GameData_2041320;
  GameRoutine_1958ed0(v2, a1);
  *(_QWORD*)(a1 + 208) = GameData_2132488 + 2;
  v17 = (__int64*)GameData_212dce8;
  v18 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 24LL))(v18);
    v18 = *v17;
    if (*v17 != 0) {
      v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
    }
    *v17 = 0;
  }
  game_facility_ReleaseGroups(v18);
  v20 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_2041368;
  if (v20 == (_QWORD*)(a1 + 160)) {
    v21 = 32;
  LABEL_45:
    (*(void (**)(_QWORD*))(*v20 + v21))(v20);
  }
  else if (v20 != nullptr) {
    v21 = 40;
    goto LABEL_45;
  }
  game_facility_FacilityView_instance_ = 0;
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

void ProcClassExaminerScene_146fec0()
{
  if (GameData_21f3d10 != 0 && *(int*)(GameData_21f3d10 + 152) >= 1) {
    *(_DWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 156LL) =
        1065353216;
  }
}

__int64 ProcClassExaminerScene_146ff00(__int64 a1)
{
  __int64 result;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int128 v6;
  __int128* v7;
  __int128 v8;

  result = GameRoutine_1958ed0(a1 + 208, a1);
  if (*(_BYTE*)(a1 + 220) == 1 && (*(_DWORD*)(a1 + 216) & 0x80000000) != 0) {
    v3 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v4 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v4 + 172) == *(float*)(v4 + 168) &&
          (v5 = v4 + 160,
           LANES128_OF(((__n128 (*)(unsigned __int64)) *
                        (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160))
                   .n128_f32[3] == 1.0f)) {
        if (*(float*)(v5 + 12) == *(float*)(v5 + 8)) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)v5 + 16LL))(v5);
        }
        else {
          v6 = *(_OWORD*)(v5 + 48);
        }
        v8 = v6;
        v7 = &v8;
      }
      else {
        v7 = (__int128*)GameData_212c960;
      }
      result = game_809dc0(v3, v7, 0.0f);
    }
  }
  if ((*(_WORD*)(a1 + 136) & 1) == 0) {
    return ProcInst_657a50(a1, 1);
  }
  return result;
}

__int64 ProcClassExaminerScene_Unknown18()
{
  __int64 result;
  __int64 v1;
  char v2;
  unsigned __int64 v3;
  __int16 v4;
  char v5;
  __int64 v6;

  v5 = 0;
  v2 = 20;
  v4 = -27736;
  v3 = 0xE9A6A9E85F4D4742LL;
  result = GameRoutine_1487cc0(&v2, 0x13F000000LL);
  if ((v2 & 1) != 0 && v6 != 0) {
    v1 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v1 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v1, v6);
  }
  return result;
}

_QWORD* ProcClassExaminerScene_Unknown20(_QWORD* result, char a2)
{
  _QWORD* v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  if ((a2 & 1) != 0) {
    v2 = (_QWORD*)result[37];
    if (v2 != nullptr) {
      v3 = v2[2];
      if (v2[3] != v3) {
        v4 = v2[5];
        v5 = v2[6];
        v6 = (_QWORD*)(v3 + 8 * (v4 >> 4));
        v7 = *v6 + 368 * (v4 & 0xF);
        v8 = *(_QWORD*)(v3 + 8 * ((v5 + v4) >> 4)) +
             368LL * (((_DWORD)v5 + (_DWORD)v4) & 0xF);
        while (v7 != v8) {
          *(_BYTE*)(v7 + 68) = 0;
          v7 += 368;
          if (v7 - *v6 == 5888) {
            v9 = v6[1];
            ++v6;
            v7 = v9;
          }
        }
      }
    }
  }
  else {
    v11 = result[1];
    v10 = result[2];
    if (v11 > v10) {
      goto LABEL_12;
    }
    while (*(_BYTE*)v10 != 2) {
      v10 -= 64LL;
      if (v11 > v10) {
        goto LABEL_12;
      }
    }
    if (*(_DWORD*)(v10 + 32) != 5) {
    LABEL_12:
      v12 = (_QWORD*)result[37];
      if (v12 != nullptr) {
        v13 = v12[2];
        if (v12[3] != v13) {
          v14 = v12[5];
          v15 = v12[6];
          v16 = (_QWORD*)(v13 + 8 * (v14 >> 4));
          v17 = *v16 + 368 * (v14 & 0xF);
          v18 = *(_QWORD*)(v13 + 8 * ((v15 + v14) >> 4)) +
                368LL * (((_DWORD)v15 + (_DWORD)v14) & 0xF);
          while (v17 != v18) {
            *(_BYTE*)(v17 + 68) = 1;
            v17 += 368;
            if (v17 - *v16 == 5888) {
              v19 = v16[1];
              ++v16;
              v17 = v19;
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 game_facility_anonymous_ProcClassExaminerScene_LoadJobSelectCharacter()
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  _QWORD** v10;
  __n128 v15;
  __int64 v16;
  _QWORD** v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  struct {
    _QWORD v34[6];
    _QWORD* v35;
    __int64 v36;
    __int64 v37;
  } v34_;
  struct {
    __int64 v38[2];
    char* v39;
  } v38_;
  __int64 v40[2];
  _BYTE v41[9];
  struct {
    char v42[151];
    char v43;
  } v42_;
  _QWORD v44[6];
  struct {
    __int64 v45;
    __int64 v46;
    __int64 v47;
    char gap376_[8];
    __int64* v48;
  } v45_;

  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  result = GameData_21f3ff8;
  if (GameData_21f3ff8 == 0) {
    return result;
  }
  result = GameRoutine_928a20(GameData_21f3ff8, 0, (__int64)&GameData_1aa5f21),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (result == 0) {
    return result;
  }
  v34_.v35 = nullptr;
  v34_.v36 = 0;
  v34_.v37 = 0;
  v7 = *(_QWORD*)(result + 32);
  memset(&v34_.v34[1], 0, 40);
  v8 = game_util_Format((__int64)&GameData_1adf9e8, v7, v1, v2, v3, v4, v5, v6,
                        LOBYTE(GameData_2131338[0]) + 16),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v9 = strlen(v8),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_1389160((__int64)v34_.v34, (__int64)v8, v9),
      v1 = COERCE_AS(__typeof__(v1),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v10 = (_QWORD**)GameData_212dce8;
  SceneManager_138a920(*(_QWORD*)GameData_212dce8, (__int64)v34_.v34),
      v1 = COERCE_AS(__typeof__(v1),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  HIBYTE(v40[0]) = 0;
  LOBYTE(v40[0]) = 12;
  *(_DWORD*)((char*)v40 + 1) = -374953496;
  *(_WORD*)((char*)v40 + 5) = -27736;
  GameRoutine_19513c0((unsigned __int8*)v40),
      v1 = COERCE_AS(__typeof__(v1),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v40[0] & 1) != 0 && *(_QWORD*)v41 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    v15 = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v16),
    v1 = COERCE_AS(__typeof__(v1),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v2 = COERCE_AS(__typeof__(v2),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v3 = COERCE_AS(__typeof__(v3),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  if (GameData_21f3ff8 != 0) {
    v17 = *(_QWORD***)(GameData_21f3ff8 + 48);
    if (*(_QWORD***)(GameData_21f3ff8 + 56) != v17) {
      v18 = *v17;
      if (*v17 != nullptr) {
        v42_.v42[23] = 0;
        v42_.v42[135] = 0;
        v42_.v43 = 0;
        v44[4] = 0;
        v41[0] = 20;
        strcpy(v42_.v42, "_D");
        *(_QWORD*)&v41[1] = 0x335FAC9CE6BA9FE5LL;
        ProcClassExaminerScene_146f010(&v45_.v45, v18),
            v1 = COERCE_AS(__typeof__(v1),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v2 = COERCE_AS(__typeof__(v2),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v40[0] = v45_.v45;
        v40[1] = v45_.v46;
        GameRoutine_60a020((__int64)v41, (__int64)&GameData_1adf9ca),
            v1 = COERCE_AS(__typeof__(v1),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v2 = COERCE_AS(__typeof__(v2),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v42_.v43 |= 2u;
        v19 = GameData_21f3ff8;
        if (GameData_21f3ff8 != 0) {
          v20 = *(unsigned int*)(GameData_21f3ff8 + 20);
          if ((v20 & 0x80000000) != 0 ||
              (v21 = *(_QWORD*)(GameData_21c99c0 + 64),
               (int)v20 >=
                   (int)((unsigned __int64)(*(_QWORD*)(GameData_21c99c0 + 72) -
                                            v21) >>
                         3))) {
            v19 = 0;
          }
          else {
            v19 = *(_QWORD*)(v21 + 8 * v20);
          }
        }
        v45_.v48 = &v45_.v45;
        v45_.v45 = (__int64)GameData_2041630;
        v45_.v46 = v19;
        GameRoutine_138ff80(&v45_.v45, v44),
            v1 = COERCE_AS(__typeof__(v1),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v2 = COERCE_AS(__typeof__(v2),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if (v45_.v48 == &v45_.v45) {
          v22 = 32;
        }
        else {
          if (v45_.v48 == nullptr) {
            goto LABEL_21;
          }
          v22 = 40;
        }
        (*(void (**)(__int64))(*v45_.v48 + v22))((__int64)v45_.v48),
            v1 = COERCE_AS(__typeof__(v1),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v2 = COERCE_AS(__typeof__(v2),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      LABEL_21:
        v23 = *v10;
        v24 = (__int64*)fw_memory_g_heap_manager_ptr;
        v25 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0),
        v1 = COERCE_AS(__typeof__(v1),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v2 = COERCE_AS(__typeof__(v2),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v45_.v45 = 33;
        v45_.v46 = 25;
        v45_.v47 = v25;
        *(_WORD*)(v25 + 24) = 136;
        *(_QWORD*)v25 = 0x81E9AEA8E7B585E5LL;
        *(_QWORD*)(v25 + 8) = 0xA683E35F9E8AE6B8LL;
        *(_QWORD*)(v25 + 16) = 0x83E38383E38B83E3LL;
        v26 = *(_QWORD*)(v18[49] + 8LL);
        v27 = strlen(v26),
        v1 = COERCE_AS(__typeof__(v1),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v2 = COERCE_AS(__typeof__(v2),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if (v27 >= 0xFFFFFFFFFFFFFFF7LL) {
          String_60a1d0(),
              v1 = COERCE_AS(__typeof__(v1),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v2 = COERCE_AS(__typeof__(v2),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v3 = COERCE_AS(__typeof__(v3),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v4 = COERCE_AS(__typeof__(v4),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v5 = COERCE_AS(__typeof__(v5),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v6 = COERCE_AS(__typeof__(v6),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
        v28 = v27;
        if (v27 >= 0x17) {
          if ((v27 | 7) == 0x17) {
            v30 = 26;
          }
          else {
            v30 = (v27 | 7) + 1;
          }
          v29 = (char*)fw_memory_HeapManager_Allocate_alt1(*v24, v30, 16, 0),
          v1 = COERCE_AS(__typeof__(v1),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v2 = COERCE_AS(__typeof__(v2),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          v38_.v38[1] = v28;
          v38_.v39 = v29;
          v38_.v38[0] = v30 | 1;
        }
        else {
          LOBYTE(v38_.v38[0]) = 2 * v27;
          v29 = (char*)v38_.v38 + 1;
          if (v27 == 0) {
          LABEL_30:
            v29[v28] = 0;
            SceneManager_138c360(v23, &v45_.v45, v38_.v38, v40),
                v1 = COERCE_AS(__typeof__(v1),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v2 = COERCE_AS(__typeof__(v2),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v3 = COERCE_AS(__typeof__(v3),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v4 = COERCE_AS(__typeof__(v4),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v5 = COERCE_AS(__typeof__(v5),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v6 = COERCE_AS(__typeof__(v6),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            if ((v38_.v38[0] & 1) != 0 && v38_.v39 != nullptr) {
              v31 = 128;
              if (*(_QWORD*)(*v24 + 200) == 0) {
                v31 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v24 + v31),
                  v1 = COERCE_AS(
                      __typeof__(v1),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v2 = COERCE_AS(
                      __typeof__(v2),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v3 = COERCE_AS(
                      __typeof__(v3),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v4 = COERCE_AS(
                      __typeof__(v4),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v5 = COERCE_AS(
                      __typeof__(v5),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v6 = COERCE_AS(
                      __typeof__(v6),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            }
            if ((v45_.v45 & 1) != 0 && v45_.v47 != 0) {
              v32 = 128;
              if (*(_QWORD*)(*v24 + 200) == 0) {
                v32 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v24 + v32),
                  v1 = COERCE_AS(
                      __typeof__(v1),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v2 = COERCE_AS(
                      __typeof__(v2),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v3 = COERCE_AS(
                      __typeof__(v3),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v4 = COERCE_AS(
                      __typeof__(v4),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v5 = COERCE_AS(
                      __typeof__(v5),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v6 = COERCE_AS(
                      __typeof__(v6),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            }
            v15 = GameRoutine_a0d9a0((__int64)v40),
            v1 = COERCE_AS(__typeof__(v1),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v2 = COERCE_AS(__typeof__(v2),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            goto LABEL_41;
          }
        }
        memmove(v29, v26, v28),
            v1 = COERCE_AS(__typeof__(v1),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v2 = COERCE_AS(__typeof__(v2),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        goto LABEL_30;
      }
    }
  }
LABEL_41:
  result = (__int64)v34_.v35;
  v34_.v34[0] = &game_facility_SceneManager_IMapArgs_vtable;
  if (v34_.v35 == &v34_.v34[2]) {
    v33 = 32;
  }
  else {
    if (v34_.v35 == nullptr) {
      return result;
    }
    v33 = 40;
  }
  return (*(__int64 (**)(long double))(*v34_.v35 + v33))(*(long double*)&v15);
}

__int64 ProcClassExaminerScene_Unknown2()
{
  __int64 result;
  __int64 v1;
  char v2;
  unsigned __int64 v3;
  __int16 v4;
  char v5;
  __int64 v6;

  v5 = 0;
  v2 = 20;
  v4 = -27736;
  v3 = 0xE9A6A9E85F4D4742LL;
  result = GameRoutine_1487cc0(&v2, 0x13F000000LL);
  if ((v2 & 1) != 0 && v6 != 0) {
    v1 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v1 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v1, v6);
  }
  return result;
}

__int64 ProcClassExaminerScene_Unknown6(__int64 result, char a2)
{
  _QWORD* v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  if ((a2 & 1) != 0) {
    v2 = *(_QWORD**)(result + 88);
    if (v2 != nullptr) {
      v3 = v2[2];
      if (v2[3] != v3) {
        v4 = v2[5];
        v5 = v2[6];
        v6 = (_QWORD*)(v3 + 8 * (v4 >> 4));
        v7 = *v6 + 368 * (v4 & 0xF);
        v8 = *(_QWORD*)(v3 + 8 * ((v5 + v4) >> 4)) +
             368LL * (((_DWORD)v5 + (_DWORD)v4) & 0xF);
        while (v7 != v8) {
          *(_BYTE*)(v7 + 68) = 0;
          v7 += 368;
          if (v7 - *v6 == 5888) {
            v9 = v6[1];
            ++v6;
            v7 = v9;
          }
        }
      }
    }
  }
  else {
    v11 = *(_QWORD*)(result - 200);
    v10 = *(_QWORD*)(result - 192);
    if (v11 > v10) {
      goto LABEL_12;
    }
    while (*(_BYTE*)v10 != 2) {
      v10 -= 64LL;
      if (v11 > v10) {
        goto LABEL_12;
      }
    }
    if (*(_DWORD*)(v10 + 32) != 5) {
    LABEL_12:
      v12 = *(_QWORD**)(result + 88);
      if (v12 != nullptr) {
        v13 = v12[2];
        if (v12[3] != v13) {
          v14 = v12[5];
          v15 = v12[6];
          v16 = (_QWORD*)(v13 + 8 * (v14 >> 4));
          v17 = *v16 + 368 * (v14 & 0xF);
          v18 = *(_QWORD*)(v13 + 8 * ((v15 + v14) >> 4)) +
                368LL * (((_DWORD)v15 + (_DWORD)v14) & 0xF);
          while (v17 != v18) {
            *(_BYTE*)(v17 + 68) = 1;
            v17 += 368;
            if (v17 - *v16 == 5888) {
              v19 = v16[1];
              ++v16;
              v17 = v19;
            }
          }
        }
      }
    }
  }
  return result;
}

__n128 ProcClassExaminerScene_1470900(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v4;
  __int64 v5;

  *(_QWORD*)a1 = GameData_2041270;
  *(_QWORD*)(a1 + 208) = GameData_2041320;
  v2 = (_QWORD*)(a1 + 208);
  GameRoutine_1958ed0_alt1(a1 + 208, a1);
  *v2 = game_facility_FacilitySceneBase_vtable;
  if (GameData_21f4000 != 0 && GameData_2241730-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 24LL))(
        (__int64)GameData_21f4000);
    if (GameData_21f4000 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 8LL))(
          GameData_21f4000);
    }
    GameData_21f4000 = 0;
  }
  game_facility_ReleaseGroups_alt1();
  v4 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_2041368;
  if (v4 == (_QWORD*)(a1 + 160)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_12;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_12:
  game_facility_FacilityView_instance_ = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  return GameRoutine_658c00_alt1((_QWORD*)(a1 + 88));
}

__n128 ProcClassExaminerScene_1470a20(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = GameData_2041270;
  *(_QWORD*)(a1 + 208) = GameData_2041320;
  v2 = (_QWORD*)(a1 + 208);
  GameRoutine_1958ed0_alt1(a1 + 208, a1);
  *v2 = game_facility_FacilitySceneBase_vtable;
  if (GameData_21f4000 != 0 && GameData_2241730-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 24LL))(
        (__int64)GameData_21f4000);
    if (GameData_21f4000 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 8LL))(
          GameData_21f4000);
    }
    GameData_21f4000 = 0;
  }
  game_facility_ReleaseGroups_alt1();
  v4 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_2041368;
  if (v4 == (_QWORD*)(a1 + 160)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_12;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_12:
  game_facility_FacilityView_instance_ = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((_QWORD*)(a1 + 88));
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
}

__n128 ProcClassExaminerScene_1470ba0(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v6;
  __int64 v7;

  *(a1 - 26) = GameData_2041270;
  v2 = (__int64)(a1 - 26);
  *a1 = GameData_2041320;
  GameRoutine_1958ed0_alt1((__int64)a1, (__int64)(a1 - 26));
  *a1 = GameData_2132488 + 2;
  v3 = (_QWORD*)GameData_212dce8;
  v4 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4);
    if (*v3 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
    }
    *v3 = 0;
  }
  game_facility_ReleaseGroups_alt1();
  v6 = (_QWORD*)*(a1 - 2);
  *(a1 - 26) = GameData_2041368;
  if (v6 == a1 - 6) {
    v7 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_12;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
LABEL_12:
  game_facility_FacilityView_instance_ = 0;
  *(a1 - 26) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 9) & 0x100) != 0) {
    *((_WORD*)a1 - 36) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(v2);
  return GameRoutine_658c00_alt1(a1 - 15);
}

__n128 ProcClassExaminerScene_1470cc0(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;

  *(a1 - 26) = GameData_2041270;
  v2 = (__int64)(a1 - 26);
  *a1 = GameData_2041320;
  GameRoutine_1958ed0_alt1((__int64)a1, (__int64)(a1 - 26));
  *a1 = GameData_2132488 + 2;
  v3 = (_QWORD*)GameData_212dce8;
  v4 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4);
    if (*v3 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
    }
    *v3 = 0;
  }
  game_facility_ReleaseGroups_alt1();
  v6 = (_QWORD*)*(a1 - 2);
  *(a1 - 26) = GameData_2041368;
  if (v6 == a1 - 6) {
    v7 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_12;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
LABEL_12:
  game_facility_FacilityView_instance_ = 0;
  *(a1 - 26) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 9) & 0x100) != 0) {
    *((_WORD*)a1 - 36) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(v2);
  GameRoutine_658c00_alt1(a1 - 15);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
}

__int64

game_facility_anonymous_ProcClassExaminerScene_ChangeJobSelectCharacterAppearance_closure_Invoke_1471220(
    __int64 a1)
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
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;

  GameRoutine_146df70(*(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 16));
  v2 = *(_QWORD*)(a1 + 8);
  v22 = 0;
  v23 = &v22;
  GameRoutine_1462640(&v23, &v23, *(_QWORD*)(v2 + 8));
  v3 = v22;
  if (v22 != 0) {
    v5 = *(_QWORD*)(v22 + 48);
    v4 = *(_QWORD*)(v22 + 56);
    *(_DWORD*)(v22 + 112) = 0;
    v6 = v4 - v5;
    *(_BYTE*)(v3 + 116) = 1;
    if (v6 != 0) {
      if (v6 == 8) {
        v7 = 0;
      }
      else {
        v14 = 0;
        v7 = 0;
        do {
          v17 = *(_QWORD*)(*(_QWORD*)(v3 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v3 + 48) + 8 * v7);
          *(_QWORD*)(v3 + 96) = v17;
          v18 = *(_QWORD*)(v17 + 192);
          if ((*(_BYTE*)(v18 + 22) & 1) == 0 &&
              (*(_BYTE*)(v18 + 21) & 1) == 0) {
            *(_QWORD*)v18 = 0;
            *(_DWORD*)(v18 + 8) = 1;
          }
          *(_DWORD*)(v18 + 12) = 0;
          *(_BYTE*)(v18 + 20) = 1;
          v19 = *(_QWORD*)(v3 + 136);
          *(_QWORD*)(v3 + 96) = 0;
          *(_BYTE*)(v19 + v14) = 0;
          v20 = *(_QWORD*)(*(_QWORD*)(v3 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v3 + 48) + 8 * v7 + 8);
          *(_QWORD*)(v3 + 96) = v20;
          v21 = *(_QWORD*)(v20 + 192);
          if ((*(_BYTE*)(v21 + 22) & 1) == 0 &&
              (*(_BYTE*)(v21 + 21) & 1) == 0) {
            *(_QWORD*)v21 = 0;
            *(_DWORD*)(v21 + 8) = 1;
          }
          *(_DWORD*)(v21 + 12) = 0;
          *(_BYTE*)(v21 + 20) = 1;
          v7 += 2;
          v15 = *(_QWORD*)(v3 + 136);
          *(_QWORD*)(v3 + 96) = 0;
          v16 = v15 + v14;
          v14 += 6;
          *(_BYTE*)(v16 + 3) = 0;
        } while (((v6 >> 3) & 0xFFFFFFFFFFFFFFFELL) != v7);
      }
      if ((v6 & 8) != 0) {
        v8 = *(_QWORD*)(*(_QWORD*)(v3 + 40) + 56LL) +
             224LL * *(_QWORD*)(*(_QWORD*)(v3 + 48) + 8 * v7);
        *(_QWORD*)(v3 + 96) = v8;
        v9 = *(_QWORD*)(v8 + 192);
        if ((*(_BYTE*)(v9 + 22) & 1) == 0 && (*(_BYTE*)(v9 + 21) & 1) == 0) {
          *(_QWORD*)v9 = 0;
          *(_DWORD*)(v9 + 8) = 1;
        }
        *(_DWORD*)(v9 + 12) = 0;
        *(_BYTE*)(v9 + 20) = 1;
        *(_QWORD*)(v3 + 96) = 0;
        *(_BYTE*)(*(_QWORD*)(v3 + 136) + 3 * v7) = 0;
      }
    }
  }
  v10 = *(_QWORD*)(a1 + 8);
  BYTE2(v23) = 1;
  LOWORD(v23) = 1;
  v11 = *(_QWORD*)(v10 + 112);
  v12 = *(_QWORD*)(v10 + 120);
  if (v12 == 0) {
    return GameRoutine_1412540(v11, *(unsigned int*)(v11 + 108), &v23);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                            memory_order_relaxed);
  result = GameRoutine_1412540(v11, *(unsigned int*)(v11 + 108), &v23);
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

__int64

game_facility_anonymous_ProcClassExaminerScene_ChangeJobSelectCharacterAppearance_closure_Invoke_1471520(
    __int64 a1, __int64* a2)
{
  _QWORD* v2;
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
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;

  v2 = (_QWORD*)*a2;
  GameRoutine_146df70(*a2, *(_QWORD*)(a1 + 8));
  v3 = v2[1];
  v22 = 0;
  v23 = &v22;
  GameRoutine_1462640(&v23, &v23, v3);
  v4 = v22;
  if (v22 != 0) {
    v6 = *(_QWORD*)(v22 + 48);
    v5 = *(_QWORD*)(v22 + 56);
    *(_DWORD*)(v22 + 112) = 0;
    v7 = v5 - v6;
    *(_BYTE*)(v4 + 116) = 1;
    if (v7 != 0) {
      if (v7 == 8) {
        v8 = 0;
      }
      else {
        v14 = 0;
        v8 = 0;
        do {
          v17 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
          *(_QWORD*)(v4 + 96) = v17;
          v18 = *(_QWORD*)(v17 + 192);
          if ((*(_BYTE*)(v18 + 22) & 1) == 0 &&
              (*(_BYTE*)(v18 + 21) & 1) == 0) {
            *(_QWORD*)v18 = 0;
            *(_DWORD*)(v18 + 8) = 1;
          }
          *(_DWORD*)(v18 + 12) = 0;
          *(_BYTE*)(v18 + 20) = 1;
          v19 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          *(_BYTE*)(v19 + v14) = 0;
          v20 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8 + 8);
          *(_QWORD*)(v4 + 96) = v20;
          v21 = *(_QWORD*)(v20 + 192);
          if ((*(_BYTE*)(v21 + 22) & 1) == 0 &&
              (*(_BYTE*)(v21 + 21) & 1) == 0) {
            *(_QWORD*)v21 = 0;
            *(_DWORD*)(v21 + 8) = 1;
          }
          *(_DWORD*)(v21 + 12) = 0;
          *(_BYTE*)(v21 + 20) = 1;
          v8 += 2;
          v15 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          v16 = v15 + v14;
          v14 += 6;
          *(_BYTE*)(v16 + 3) = 0;
        } while (((v7 >> 3) & 0xFFFFFFFFFFFFFFFELL) != v8);
      }
      if ((v7 & 8) != 0) {
        v9 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
             224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
        *(_QWORD*)(v4 + 96) = v9;
        v10 = *(_QWORD*)(v9 + 192);
        if ((*(_BYTE*)(v10 + 22) & 1) == 0 && (*(_BYTE*)(v10 + 21) & 1) == 0) {
          *(_QWORD*)v10 = 0;
          *(_DWORD*)(v10 + 8) = 1;
        }
        *(_DWORD*)(v10 + 12) = 0;
        *(_BYTE*)(v10 + 20) = 1;
        *(_QWORD*)(v4 + 96) = 0;
        *(_BYTE*)(*(_QWORD*)(v4 + 136) + 3 * v8) = 0;
      }
    }
  }
  v11 = v2[14];
  v12 = v2[15];
  BYTE2(v23) = 1;
  LOWORD(v23) = 1;
  if (v12 == 0) {
    return GameRoutine_1412540(v11, *(unsigned int*)(v11 + 108), &v23);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                            memory_order_relaxed);
  result = GameRoutine_1412540(v11, *(unsigned int*)(v11 + 108), &v23);
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

__int64

game_facility_anonymous_ProcClassExaminerScene_LoadJobSelectCharacter_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;

  v2 = *a2;
  ProcClassExaminerScene_146df70(*a2, *(_QWORD*)(a1 + 8));
  v3 = *(_QWORD*)(v2 + 8);
  v20 = 0;
  v21 = &v20;
  result = GameRoutine_1462640(&v21, &v21, v3);
  v5 = v20;
  if (v20 != 0) {
    v7 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + v20);
    v6 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + v20);
    *(_DWORD*)((char*)((_UNKNOWN*)0x70LL) + v20) = 0;
    v8 = v6 - v7;
    *((_BYTE*)((_UNKNOWN*)0x74LL) + v5) = 1;
    if (v8 != 0) {
      if (v8 == 8) {
        v9 = 0;
      }
      else {
        v12 = 0;
        v9 = 0;
        do {
          v15 =
              *(char**)((char*)((_UNKNOWN**)0x38LL) +
                        *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + v5)) +
              224 *
                  *(_QWORD*)(*(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                                         v5) +
                             8 * v9);
          *(_QWORD*)((char*)((_UNKNOWN*)0x60LL) + v5) = v15;
          v16 = *((_QWORD*)v15 + 24);
          if ((*(_BYTE*)(v16 + 22) & 1) == 0 &&
              (*(_BYTE*)(v16 + 21) & 1) == 0) {
            *(_QWORD*)v16 = 0;
            *(_DWORD*)(v16 + 8) = 1;
          }
          *(_DWORD*)(v16 + 12) = 0;
          *(_BYTE*)(v16 + 20) = 1;
          v17 = *(_QWORD*)((char*)((_UNKNOWN*)0x88LL) + v5);
          *(_QWORD*)((char*)((_UNKNOWN*)0x60LL) + v5) = 0;
          *(_BYTE*)(v17 + v12) = 0;
          v18 =
              *(char**)((char*)((_UNKNOWN**)0x38LL) +
                        *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + v5)) +
              224 *
                  *(_QWORD*)(*(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                                         v5) +
                             8 * v9 + 8);
          *(_QWORD*)((char*)((_UNKNOWN*)0x60LL) + v5) = v18;
          v19 = *((_QWORD*)v18 + 24);
          if ((*(_BYTE*)(v19 + 22) & 1) == 0 &&
              (*(_BYTE*)(v19 + 21) & 1) == 0) {
            *(_QWORD*)v19 = 0;
            *(_DWORD*)(v19 + 8) = 1;
          }
          *(_DWORD*)(v19 + 12) = 0;
          *(_BYTE*)(v19 + 20) = 1;
          v9 += 2;
          v13 = *(_QWORD*)((char*)((_UNKNOWN*)0x88LL) + v5);
          *(_QWORD*)((char*)((_UNKNOWN*)0x60LL) + v5) = 0;
          v14 = v13 + v12;
          v12 += 6;
          *(_BYTE*)(v14 + 3) = 0;
        } while (((v8 >> 3) & 0xFFFFFFFFFFFFFFFELL) != v9);
      }
      if ((v8 & 8) != 0) {
        v10 =
            *(char**)((char*)((_UNKNOWN**)0x38LL) +
                      *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + v5)) +
            224 * *(_QWORD*)(*(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                                         v5) +
                             8 * v9);
        *(_QWORD*)((char*)((_UNKNOWN*)0x60LL) + v5) = v10;
        v11 = *((_QWORD*)v10 + 24);
        if ((*(_BYTE*)(v11 + 22) & 1) == 0 && (*(_BYTE*)(v11 + 21) & 1) == 0) {
          *(_QWORD*)v11 = 0;
          *(_DWORD*)(v11 + 8) = 1;
        }
        *(_DWORD*)(v11 + 12) = 0;
        *(_BYTE*)(v11 + 20) = 1;
        *(_QWORD*)((char*)((_UNKNOWN*)0x60LL) + v5) = 0;
        *(_BYTE*)(*(_QWORD*)((char*)((_UNKNOWN*)0x88LL) + v5) + 3 * v9) = 0;
      }
    }
  }
  return result;
}

__int64

game_facility_anonymous_ProcClassExaminerScene_SetJobSelectCharacterCameraMotion_closure_Invoke(
    __int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(result + 16);
  if (v1 != 0) {
    v2 = *(_QWORD*)(v1 + 8);
    if (v2 != 0 && *(_BYTE*)(v2 + 289) == 1 && (*(_BYTE*)(v2 + 288) & 1) != 0 &&
        (*(_BYTE*)(v2 + 300) & 0xFD) != 1) {
      while (1) {
        v2 = *(_QWORD*)(v2 + 736);
        if (v2 == 0) {
          break;
        }
        if (*(_BYTE*)(v2 + 289) != 1 || *(_BYTE*)(v2 + 288) != 1 ||
            (*(_BYTE*)(v2 + 300) & 0xFD) == 1) {
          return result;
        }
      }
      return GameRoutine_148cdb0(*(_QWORD*)(*(_QWORD*)(result + 8) + 296LL));
    }
  }
  return result;
}

#pragma GCC visibility pop
