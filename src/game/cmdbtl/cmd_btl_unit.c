#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_819400(_QWORD);
__int64 GameRoutine_819f40(_QWORD);
__int64 GameRoutine_81a540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a867a0(_QWORD);
__int64 GameRoutine_e7d0a0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CmdBtlUnit_e79c10(__int64 result, int a2);
__int64 CmdBtlUnit_e79df0(__int64 result);
__int64 CharacterAnimator_1079d90(_QWORD, _QWORD);
__int64 CmdBtlUnit_e7c280_alt1(_QWORD) __asm__("CmdBtlUnit_e7c280");
__int64 CmdBtlUnit_e7ca80(_QWORD, float);
__int64 CmdbtlPartyNatives_e9cce0(_QWORD);
__int64 GameRoutine_1079580(_QWORD, _QWORD, float, float, float);
__int64 GameRoutine_10adb80(_QWORD, _QWORD);
__int64 GameRoutine_10b2280(_QWORD, _QWORD, float);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e8e50(_QWORD, _QWORD);
__int64 GameRoutine_842b40(_QWORD, _QWORD);
__int64 GameRoutine_e774a0(__int64, __int64*);
__int64 GameRoutine_e7a740(__int64 result, __int64);
__int64 GameRoutine_e7c6f0(__int64, char, float);
__int64 GameRoutine_ec0a20(_QWORD, _QWORD);
__int64 GameRoutine_ff7420(_QWORD, _QWORD);
__int64 Manager_66cc20(_QWORD, _QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 UnitActor_81d740(_QWORD);
__int64 UnitItem_6e8bc0(_QWORD);
__int64 Unit_6ca760(_QWORD, _QWORD);
__int64 Unit_6cb080(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_UnitItemList_EachItem(_QWORD, _QWORD);
__int64 game_Unit_Unknown6c90c0(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _DWORD* GameData_212d168;
extern _QWORD GameData_1b01768[4];
extern _QWORD GameData_1b018e8[4];
extern _UNKNOWN GameData_1aa1728;
extern _UNKNOWN GameData_1abbaec;
extern __int64 (*GameData_1fe80f8[])();
extern __int64 (*GameData_1fe81c8[])();
extern __int64 GameData_21c99b8;
extern __int64 GameData_21f4cc0;
extern __int64 GameData_2203490;
extern __int64 GameData_2216820;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c8a0;
extern __int64* GameData_212d448[9];
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212ea58;
extern char GameData_2216858;
extern float GameData_1b92038[5];
float GameRoutine_edf4a0(void);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
__int64 CmdBtlUnit_e7ada0_alt3(__int64 result) __asm__("CmdBtlUnit_e7ada0");
bool CmdBtlUnit_e7c280(__int64 a1);
bool CmdBtlUnit_e7c4f0(__int64 a1);
__int64 CmdBtlUnit_e7c980_alt1(__int64 result) __asm__("CmdBtlUnit_e7c980");
__int64 CmdBtlUnit_e7cbc0(__int64 a1);
_QWORD* CmdBtlUnit_e7cc50(_QWORD* result);
_QWORD* game_cmdbtl_CmdBtlUnit_SetupLookToEnemy(_QWORD* result, __int64 a2,
                                                __int64 a3, __int64 a4);
__int64 CmdBtlUnit_e7d620(__int64 result);
float CmdBtlUnit_e7d750(_QWORD* a1);
__int64 CmdBtlUnit_e7da80(__int64 a1, _QWORD* a2, float a3);
__int64 CmdBtlUnit_e7dc80(__int64 result, _QWORD* a2);
__int64 CmdBtlUnit_e7df20(__int64 result, char a2, float a3);
__int64 CmdBtlUnit_e7e180(__int64 a1);
__int64 game_cmdbtl_CmdBtlUnit_FindLinkItem(__int64 a1, __int64 a2);
__int64 CmdBtlUnit_e7e730(_QWORD* a1, _QWORD* a2);
__int64 CmdBtlUnit_e7e800_alt1(__int64 result) __asm__("CmdBtlUnit_e7e800");
__int64 game_cmdbtl_CmdBtlUnit_CreateCharacter_lambda2_Invoke(__int64 a1,
                                                              __int64* a2);
__int64 game_cmdbtl_CmdBtlUnit_FindLinkItem_lambda0_Invoke(__int64 a1,
                                                           __int64 a2);
__int64
game_cmdbtl_CmdBtlUnit_GetLinkItem_Heal_lambda0_Invoke(__int64 a1,
                                                       unsigned __int16* a2);
__int64
game_cmdbtl_CmdBtlUnit_GetLinkItem_Attack_lambda0_Invoke(__int64 a1,
                                                         unsigned __int16* a2);
__attribute__((swiftcall)) void JostleManager_ea1180(PSEUDO_X8, _QWORD*,
                                                     __int64*);
__int64 CharacterBuilder_1083840(__int64 result);
__int64 CharacterSound_1095750(_QWORD, _QWORD, _QWORD, float);
__int64 CmdBtlUnit_e7ada0_alt2(_QWORD) __asm__("CmdBtlUnit_e7ada0");
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_a19f00(_QWORD, _QWORD);
__int64 GameRoutine_a7c6a0(__int64 result, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_UnitActor_SetZViewWeight(__int64 result, float, double);
__int64 game_cmdbtl_CmdBtlUnit_FindLinkItem_alt1(_QWORD, _QWORD) __asm__(
    "game_cmdbtl_CmdBtlUnit_FindLinkItem");
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_isActive_100100(_QWORD);
__int64 strlen(_QWORD);
__n128 nn_mem_StandardAllocator_Free_alt2(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_1fe8178[])();
extern __int64 (*GameData_1fe8248[])();
extern __int64 (*GameData_1fe82c8[])();
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21ec7b0;
extern __int64 GameData_22162a8;
extern __int64 fw_memory_g_heap_manager;
float CharacterAnimator_1079580(__int64, int, long double, float, float);
void CmdBtlUnit_e79c10_alt1(__int64, int) __asm__("CmdBtlUnit_e79c10");
void CmdBtlUnit_e7aab0(__int64, char, __n128);
void CmdBtlUnit_e7ada0_alt1(__int64) __asm__("CmdBtlUnit_e7ada0");
void __attribute__((noreturn))
GameRoutine_8123d0_alt1() __asm__("GameRoutine_8123d0");
void __attribute__((noreturn))
GameRoutine_8123d0_alt2(_QWORD, long double) __asm__("GameRoutine_8123d0");
void __attribute__((noreturn)) String_60a1d0();
void CmdBtlUnit_e7a740(__int64 a1, __int64 a2, double a3, double a4);
__int64 CmdBtlUnit_e7c3f0(__int64 a1, int a2, __int16 a3, float a4);
void CmdBtlUnit_e7c6f0(__int64 a1, char a2, float a3);
__n128 CmdBtlUnit_e7d0a0_alt1(__int64 a1, char a2) __asm__("CmdBtlUnit_e7d0a0");
__int64 CmdBtlUnit_e7d890_alt1(__int64 a1) __asm__("CmdBtlUnit_e7d890");
__attribute__((swiftcall)) void CmdBtlUnit_e7dd50(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2);
__attribute__((swiftcall)) void CmdBtlUnit_e7de70(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2);
__attribute__((swiftcall)) void CmdBtlUnit_e7e340(PSEUDO_X8 x8_, __int64 result,
                                                  int a2);
__n128 game_cmdbtl_CmdBtlUnit_SetupLookToEnemy_lambda0_Invoke(__int64 a1,
                                                              __int64* a2);
_WORD*
game_UnitItemList_EachItem_alt1(_WORD* result,
                                __int64) __asm__("game_UnitItemList_EachItem");
__attribute__((swiftcall)) void
CharacterSound_1095750_alt1(PSEUDO_X8, __int64, const char*, __int64,
                            float) __asm__("CharacterSound_1095750");
__int64*
CharacterAnimator_1079d90_alt1(__int64,
                               __int64) __asm__("CharacterAnimator_1079d90");
__int64 CmdBtlParty_e774a0(__int64, __int64*);
__int64 GameHr_a867a0(__int64 result);
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64 GameRoutine_a19f00_alt1(__int64 result,
                                __int64) __asm__("GameRoutine_a19f00");
__int64 GameRoutine_ec0a20_alt1(__int64, int) __asm__("GameRoutine_ec0a20");
__int64 UnitActor_819400(__int64);
__int64 UnitActor_819f40(__int64);
__int64 UnitActor_81a540(__int64, unsigned int, __int64);
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
__int64 snd_isActive_100100_alt1(__int64*) __asm__("snd_isActive_100100");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
float CharacterAnimator_1079580_alt1(__int64, int, float, float, float) __asm__(
    "CharacterAnimator_1079580");
float game_edf4a0();
void CmdBtlUnit_e7ca80_alt1(__int64, float) __asm__("CmdBtlUnit_e7ca80");
void GameHr_81d740(__int64, long double);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void CmdBtlUnit_e7ada0(__int64 a1);
void CmdBtlUnit_e7d890(__int64 a1, long double a2);
_QWORD* GameRoutine_cfad30(_QWORD* result, _QWORD*);
__int64 AssetTableFile_7e7620(__int64 result, __int64);
__int64 AssetTableFile_7e7b20(__int64 result, unsigned __int64*);
__int64 AssetTableFile_7e8000(__int64);
__int64 AssetTableFile_7e95e0(__int64, __int64, unsigned int);
__int64 AssetTableFile_7e9960(__int64, __int64, __int64*);
__int64 CharacterAppearance_10735d0(__int64);
__int64 GameHr_10784f0(__int64, int, __int64);
__int64 GameRoutine_1919fb0(__int64, unsigned int);
__int64 UnitActor_819a50(__int64);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_UnitActor_CreateMainCharacter(__int64 result, __int64);
__int64 game_UnitActor_FuncBuildCompleteSubscribe(_QWORD*, _QWORD*);
extern __int64 (*GameData_1fd82e0[])();
extern __int64 (*GameData_1fe7f78[])();
extern __int64 (*GameData_1fe7ff8[])();
extern __int64 (*GameData_1fe8078[])();
extern __int64* GameData_212d3c8[3];
extern __int64* game_vstring_kEmpty_ptr[2];
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
unsigned __int8* AssetTableFile_7eb500(unsigned __int8* result);
void GameHr_81d740_alt1(__int64) __asm__("GameHr_81d740");
void TrickEntity_7d1480(__int64);
void game_character_CharacterAppearance_Setup(unsigned __int64, __int64);
void game_cmdbtl_CmdBtlUnit_CreateCharacter(__int64 a1);
__int64 CmdBtlUnit_e7c6f0_alt1(__int64, char,
                               float) __asm__("CmdBtlUnit_e7c6f0");
__int64 CmdbtlPartyNatives_e9cce0_alt1(__int64 result) __asm__(
    "CmdbtlPartyNatives_e9cce0");
__int64 Unit_6cb080_alt1(__int64, _WORD*) __asm__("Unit_6cb080");
__int64 memchr_alt1(__int64, int, unsigned __int64) __asm__("memchr");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
unsigned int*
GameRoutine_842b40_alt1(unsigned int* result,
                        unsigned __int64*) __asm__("GameRoutine_842b40");
void GameHr_ff7420(unsigned __int8**, __int64*);
void nn_mem_StandardAllocator_Free_alt3(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CmdBtlUnit_e7c980(__int64 a1);
void CmdBtlUnit_e7d0a0(__int64 a1, char a2);
void CmdBtlUnit_e7e800(_QWORD* a1);
__attribute__((swiftcall)) void GameRoutine_1085a10(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64 CharacterAnimator_1079e10(__int64);
__int64 CharacterBuilder_1084a50(__int64, _BYTE*);
__int64 GameRoutine_e9f200(__int64 result);
__int64 game_ff0ea0(_DWORD*, float32x4_t*, float32x4_t*, __int64*, float);
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83800;
extern __int64* GameData_212f2e0;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
void CmdBtlUnit_e7b880(__int64);
void GameRoutine_e7bed0(__int64, char);
void game_ff7720(unsigned __int8**, __int64*);
void CmdBtlUnit_e7b0a0(__int64 a1);

__int64 CmdBtlUnit_e79c10(__int64 result, int a2)
{
  int v2;
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
  int v15;
  __int64 v16;
  __int64 v17;
  char v18;
  unsigned int v19;

  if (*(_DWORD*)(result + 180) == a2) {
    return result;
  }
  *(_DWORD*)(result + 180) = a2;
  if (a2 == 2) {
    if (*(_BYTE*)(result + 520) == 1) {
      if ((*(_BYTE*)(result + 488) & 1) != 0) {
        v8 = *(_QWORD*)(result + 504);
        if (v8 != 0) {
          v9 = result;
          v10 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v8);
          result = v9;
        }
      }
      *(_BYTE*)(result + 520) = 0;
    }
    *(_BYTE*)(result + 191) = 0;
    v11 = result;
    CmdBtlUnit_e7d0a0(result, 1);
    v12 = *(_QWORD*)(v11 + 208);
    result = v11;
    if (v12 != 0) {
      v7 = *(_QWORD*)(v12 + 112);
      if (v7 != 0) {
        *(_QWORD*)(v7 + 156) = 0;
        goto LABEL_24;
      }
    }
  }
  else if (a2 == 1) {
    v2 = *(unsigned __int8*)(result + 520);
    *(_DWORD*)(result + 484) = 0;
    if (v2 == 1) {
      if ((*(_BYTE*)(result + 488) & 1) != 0) {
        v3 = *(_QWORD*)(result + 504);
        if (v3 != 0) {
          v4 = result;
          v5 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v5 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v3);
          result = v4;
        }
      }
      *(_BYTE*)(result + 520) = 0;
    }
    v6 = *(_QWORD*)(result + 208);
    *(_BYTE*)(result + 191) = 0;
    if (v6 != 0) {
      v7 = *(_QWORD*)(v6 + 112);
      if (v7 != 0) {
        *(_QWORD*)(v7 + 156) = 0x3F8000003F800000LL;
      LABEL_24:
        *(_DWORD*)(v7 + 164) = 1065353216;
      }
    }
  }
  v13 = *(_QWORD*)(result + 208);
  if (v13 == 0) {
    return result;
  }
  v14 = *(_QWORD*)(v13 + 120);
  v15 = *(_DWORD*)(result + 180);
  if (v14 != 0) {
    *(_BYTE*)(v14 + 417) = v15 != 1;
    v13 = *(_QWORD*)(result + 208);
    if (v13 == 0) {
      return result;
    }
    v15 = *(_DWORD*)(result + 180);
  }
  if (v15 == 1) {
    v19 = *(_DWORD*)(v13 + 340) & 0xFFFFFFFE;
  LABEL_39:
    *(_DWORD*)(v13 + 340) = v19;
    return result;
  }
  if (v15 != 2) {
    return result;
  }
  v16 = *(_QWORD*)(result + 216);
  v17 = *(_QWORD*)(result + 224);
  if (v17 == 0) {
    if ((*(_BYTE*)(v16 + 61) & 1) != 0) {
      return result;
    }
    goto LABEL_38;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                            memory_order_relaxed);
  v18 = *(_BYTE*)(v16 + 61);
  if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    result = std___1___shared_weak_count___release_weak_alt2(v17);
  }
  if ((v18 & 1) == 0) {
  LABEL_38:
    v19 = *(_DWORD*)(v13 + 340) | 1;
    goto LABEL_39;
  }
  return result;
}

__int64 CmdBtlUnit_e79df0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  struct {
    unsigned __int64 v4;
    int v5;
    char v6;
  } v4_;

  v1 = *(_QWORD*)(result + 16);
  if (v1 != 0) {
    v2 = result;
    if (*(_QWORD*)(result + 24) != 0) {
      v3 = *(_DWORD*)(v1 + 32) - 1;
      *(_DWORD*)(v1 + 32) = v3;
      if (v3 == 0) {
        v4_.v6 = 0;
        v4_.v4 = 0xBF800000BF800000LL;
        v4_.v5 = 1065353216;
        result = UnitActor_819f40(*(_QWORD*)(v1 + 8));
        if ((_DWORD)result != *(_DWORD*)(v1 + 16)) {
          result = UnitActor_81a540(v1, result, (__int64)&v4_.v4);
        }
      }
      if (*(_BYTE*)(v2 + 176) == 1) {
        v4_.v4 = *(_QWORD*)(v2 + 24);
        if (v4_.v4 != 0) {
          result = GameHr_a867a0((__int64)&v4_.v4);
        }
        *(_BYTE*)(v2 + 176) = 0;
      }
      else {
        result = UnitActor_819400(*(_QWORD*)(v2 + 16));
      }
      *(_QWORD*)(v2 + 24) = 0;
    }
  }
  return result;
}

void game_cmdbtl_CmdBtlUnit_CreateCharacter(__int64 a1)
{
  _BOOL4 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 j;
  __int64 v17;
  _QWORD* v18;
  unsigned __int64 v19;
  _QWORD* v20;
  unsigned __int64* v21;
  __int64 v22;
  int* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 i;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  int* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int8* v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;
  unsigned __int64 v47;
  _QWORD* v48;
  __int64 v49;
  struct {
    __int64 v50;
    __int64 v51;
  } v50_;
  struct {
    __int64 (**v52)();
    __int64 v53;
    char gap32_[16];
    unsigned __int64* v54;
  } v52_;
  struct {
    unsigned __int64 v55;
    __int64 v56;
  } v55_;
  struct {
    _QWORD v57[2];
    __int64 v58;
    __int64 v59;
    _QWORD* v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    __int64 v65;
    __int64 v66;
    __int64 v67;
    __int64 v68;
    __int64 v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
    char gap272_[8];
    __int64 v80;
    char gap288_[8];
    __int64 v81;
    char gap304_[96];
    __int64 v82;
    __int64 v83;
    char gap416_[8];
    __int64 v84;
    __int64 v85;
    __int64 v86;
    __int64 v87;
    __int64 v88;
    int v89;
    char gap468_[4];
    __int64 v90;
    __int64 v91;
    __int64 v92;
    __int64 v93;
    __int64 v94;
    __int64 v95;
    __int64 v96;
    __int64 v97;
    __int64 v98;
  } v57_;

  if (*(_QWORD*)(a1 + 16) != 0) {
    v3 = *(_QWORD*)(a1 + 320);
    if (v3 == 0) {
      goto LABEL_30;
    }
    v4 = std___1___shared_weak_count_lock_alt1(v3);
    if (v4 == 0) {
      goto LABEL_9;
    }
    v5 = *(_QWORD*)(a1 + 312);
    if (v5 != 0 && *(_DWORD*)(*(_QWORD*)v5 + 64LL) == 0) {
      if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
        v6 = 0;
        v1 = true;
      }
      else {
        if ((GameData_2216858 & 1) == 0) {
          goto LABEL_80;
        }
        v6 = 0;
        v1 = (GameData_2216820 & 8) == 0;
      }
    }
    else {
      v6 = 1;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (((v1 | v6) & 1) != 0) {
        goto LABEL_9;
      }
    }
    else {
      v11 = v4;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak_alt2(v11);
      if (((v1 | v6) & 1) != 0) {
      LABEL_9:
        v7 = *(_QWORD*)(a1 + 320);
        if (v7 == 0) {
          goto LABEL_30;
        }
        v8 = std___1___shared_weak_count_lock_alt1(v7);
        if (v8 == 0) {
          goto LABEL_30;
        }
        v9 = *(_QWORD*)(a1 + 312);
        if (v9 == 0 || *(_DWORD*)(*(_QWORD*)v9 + 64LL) != 1) {
          v10 = 1;
          goto LABEL_28;
        }
        if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
          v10 = 0;
          v1 = true;
        LABEL_28:
          if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if (((v1 | v10) & 1) != 0) {
              goto LABEL_30;
            }
          LABEL_56:
            v57_.v80 = 0;
            v57_.v81 = 0;
            v57_.v57[0] = 0;
            v57_.v57[1] = 0;
            v57_.v58 = 0;
            v57_.v59 = 0;
            v57_.v60 = nullptr;
            v57_.v61 = 0;
            v57_.v62 = 0;
            v57_.v63 = 0;
            v57_.v64 = 0;
            v57_.v65 = 0;
            v57_.v66 = 0;
            v57_.v67 = 0;
            v57_.v68 = 0;
            v57_.v69 = 0;
            *(_BYTE*)(a1 + 176) = 1;
            v57_.v70 = 0;
            v57_.v71 = 0;
            v57_.v72 = 0;
            v57_.v73 = 0;
            v57_.v74 = 0;
            v57_.v75 = 0;
            v57_.v76 = 0;
            v57_.v77 = 0;
            v57_.v78 = 0;
            v57_.v79 = 0;
            v57_.v82 = 0;
            v57_.v83 = 0;
            v57_.v84 = 0;
            v57_.v85 = 0;
            v57_.v86 = 0;
            v57_.v87 = 0;
            v57_.v88 = 0;
            v57_.v90 = 0;
            v57_.v91 = 0;
            v57_.v89 = 1065353216;
            v37 = (int*)GameData_21d9d18;
            v38 = GameData_21d9d20;
            v57_.v92 = 0;
            v57_.v93 = 0;
            v57_.v94 = 0;
            v57_.v95 = 0;
            v57_.v96 = 0;
            v57_.v97 = 0;
            v57_.v98 = 0;
            if (GameData_21d9d18 != GameData_21d9d20) {
              do {
                v39 = *v37++;
                *(_QWORD*)(GameData_21d9d00 + 8 * v39) = 0;
              } while (v37 != (int*)v38);
              v37 = (int*)GameData_21d9d18;
            }
            v40 = *(_QWORD*)(a1 + 320);
            GameData_21d9d20 = (__int64)v37;
            GameData_21d9d60 = 0;
            GameData_21d9d68 = 0;
            GameData_21d9d70 = 0;
            GameData_21d9d7c = 0;
            GameData_21d9d78 = 8;
            GameData_21d9cf0 = GameData_21d9ce8;
            GameData_21d9d38 = GameData_21d9d30;
            GameData_21d9d50 = GameData_21d9d48;
            if (v40 != 0) {
              v41 = std___1___shared_weak_count_lock_alt1(v40);
              if (v41 != 0) {
                v42 = *(_QWORD*)(a1 + 312);
                if (v42 != 0) {
                  v43 = *(unsigned __int8**)(v42 + 8);
                  if (v43 != nullptr && *v43 != 0) {
                    v44 = v41;
                    AssetTableFile_7eb500(v43);
                    v41 = v44;
                  }
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v45 = v41;
                  (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
                  std___1___shared_weak_count___release_weak_alt2(v45);
                }
              }
            }
            v52_.v53 =
                *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 392LL) + 8LL);
            v52_.v52 = (__int64 (**)(void))game_HashString_alt1(v52_.v53);
            AssetTableFile_7e7b20((__int64)v57_.v57,
                                  (unsigned __int64*)&v52_.v52);
            AssetTableFile_7e8000((__int64)v57_.v57);
            v46 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 11832, 16, 0);
            v46[2] = 0;
            v47 = (unsigned __int64)(v46 + 3);
            v48 = v46;
            *v46 = GameData_212d3c8[0] + 2;
            v46[1] = 0;
            CharacterAppearance_10735d0((__int64)(v46 + 3));
            v55_.v55 = v47;
            v55_.v56 = (__int64)v48;
            game_character_CharacterAppearance_Setup(v47, (__int64)v57_.v57);
            v52_.v54 = (unsigned __int64*)&v52_.v52;
            v52_.v52 = GameData_1fe7ff8;
            v52_.v53 = a1;
            *(_QWORD*)(a1 + 24) =
                GameHr_10784f0((__int64)&v55_.v55, 0, (__int64)&v52_.v52);
            v21 = v52_.v54;
            if (v52_.v54 == (unsigned __int64*)&v52_.v52) {
            LABEL_68:
              v22 = 32;
              goto LABEL_69;
            }
          LABEL_25:
            if (v21 != nullptr) {
              v22 = 40;
            LABEL_69:
              (*(void (**)(__int64))(*v21 + v22))((__int64)v21);
            }
            v49 = v55_.v56;
            if (v55_.v56 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v55_.v56 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
              std___1___shared_weak_count___release_weak_alt2(v49);
            }
            TrickEntity_7d1480((__int64)v57_.v57);
            goto LABEL_74;
          }
          v36 = v8;
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          std___1___shared_weak_count___release_weak_alt2(v36);
          if (((v1 | v10) & 1) == 0) {
            goto LABEL_56;
          }
        LABEL_30:
          if (*(_QWORD*)(a1 + 424) == *(_QWORD*)(a1 + 416)) {
            v29 = *(_QWORD*)(a1 + 16);
            AssetTableFile_7e9960((__int64)v57_.v57, v29,
                                  game_vstring_kEmpty_ptr[0]);
          }
          else {
            v57_.v80 = 0;
            v57_.v81 = 0;
            v57_.v57[0] = 0;
            v57_.v57[1] = 0;
            v57_.v58 = 0;
            v57_.v59 = 0;
            v57_.v60 = nullptr;
            v57_.v61 = 0;
            v57_.v62 = 0;
            v57_.v63 = 0;
            v57_.v64 = 0;
            v57_.v65 = 0;
            v57_.v66 = 0;
            v57_.v67 = 0;
            v57_.v68 = 0;
            v57_.v69 = 0;
            v57_.v89 = 1065353216;
            v23 = (int*)GameData_21d9d18;
            v24 = GameData_21d9d20;
            v57_.v70 = 0;
            v57_.v71 = 0;
            v57_.v72 = 0;
            v57_.v73 = 0;
            v57_.v74 = 0;
            v57_.v75 = 0;
            v57_.v76 = 0;
            v57_.v77 = 0;
            v57_.v78 = 0;
            v57_.v79 = 0;
            v57_.v82 = 0;
            v57_.v83 = 0;
            v57_.v84 = 0;
            v57_.v85 = 0;
            v57_.v86 = 0;
            v57_.v87 = 0;
            v57_.v88 = 0;
            v57_.v90 = 0;
            v57_.v91 = 0;
            v57_.v92 = 0;
            v57_.v93 = 0;
            v57_.v94 = 0;
            v57_.v95 = 0;
            v57_.v96 = 0;
            v57_.v97 = 0;
            v57_.v98 = 0;
            if (GameData_21d9d18 != GameData_21d9d20) {
              do {
                v25 = *v23++;
                *(_QWORD*)(GameData_21d9d00 + 8 * v25) = 0;
              } while (v23 != (int*)v24);
              v23 = (int*)GameData_21d9d18;
            }
            GameData_21d9d20 = (__int64)v23;
            GameData_21d9d60 = 0;
            GameData_21d9d68 = 0;
            GameData_21d9d70 = 0;
            GameData_21d9d7c = 0;
            GameData_21d9d38 = GameData_21d9d30;
            GameData_21d9cf0 = GameData_21d9ce8;
            GameData_21d9d50 = GameData_21d9d48;
            GameData_21d9d78 = 8;
            AssetTableFile_7e7620((__int64)v57_.v57, *(_QWORD*)(a1 + 16));
            v26 = *(_QWORD*)(a1 + 416);
            for (i = *(_QWORD*)(a1 + 424); v26 != i; v26 += 24) {
              if ((*(_BYTE*)v26 & 1) != 0) {
                v28 = *(_QWORD*)(v26 + 16);
              }
              else {
                v28 = v26 + 1;
              }
              v52_.v53 = v28;
              v52_.v52 = (__int64 (**)(void))game_HashString_alt1(v28);
              AssetTableFile_7e7b20((__int64)v57_.v57,
                                    (unsigned __int64*)&v52_.v52);
            }
            AssetTableFile_7e8000((__int64)v57_.v57);
            v29 = *(_QWORD*)(a1 + 16);
          }
          game_UnitActor_CreateMainCharacter(v29, (__int64)v57_.v57);
          UnitActor_819a50(v29);
          TrickEntity_7d1480((__int64)v57_.v57);
          GameRoutine_1919fb0(*(_QWORD*)(a1 + 16), 1u);
          *(_QWORD*)(a1 + 24) = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 232LL);
          v30 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
              fw_memory_g_heap_manager, 80, 16, 0);
          v30[2] = 0;
          v31 = *(_QWORD*)(a1 + 240);
          v30[8] = 0;
          *v30 = GameData_1fd82e0;
          v30[1] = 0;
          *(_QWORD*)(a1 + 232) = v30 + 4;
          *(_QWORD*)(a1 + 240) = v30;
          if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
            std___1___shared_weak_count___release_weak_alt2(v31);
          }
          v32 = *(_QWORD**)(a1 + 232);
          v57_.v57[0] = GameData_1fe8078;
          v57_.v57[1] = a1;
          v57_.v60 = v57_.v57;
          GameRoutine_cfad30(v57_.v57, v32);
          if (v57_.v60 == v57_.v57) {
            v33 = 32;
          }
          else {
            if (v57_.v60 == nullptr) {
            LABEL_49:
              v34 = *(_QWORD**)(a1 + 16);
              v35 = *(_QWORD*)(a1 + 240);
              v50_.v50 = *(_QWORD*)(a1 + 232);
              v50_.v51 = v35;
              if (v35 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 16),
                                          1u, memory_order_relaxed);
              }
              game_UnitActor_FuncBuildCompleteSubscribe(v34, &v50_.v50);
              if (v50_.v51 != 0) {
                std___1___shared_weak_count___release_weak_alt2(v50_.v51);
              }
            LABEL_74:
              ++*(_DWORD*)(*(_QWORD*)(a1 + 16) + 32LL);
              GameHr_81d740_alt1(*(_QWORD*)(a1 + 16));
              return;
            }
            v33 = 40;
          }
          (*(void (**)(__int64))(*v57_.v60 + v33))((__int64)v57_.v60);
          goto LABEL_49;
        }
        if ((GameData_2216858 & 1) != 0) {
          v10 = 0;
          v1 = (GameData_2216820 & 8) == 0;
          goto LABEL_28;
        }
      LABEL_80:
        GameRoutine_8123d0_alt1();
      }
    }
    v57_.v80 = 0;
    v57_.v81 = 0;
    v57_.v57[0] = 0;
    v57_.v57[1] = 0;
    v57_.v58 = 0;
    v57_.v59 = 0;
    v57_.v60 = nullptr;
    v57_.v61 = 0;
    v57_.v62 = 0;
    v57_.v63 = 0;
    v57_.v64 = 0;
    v57_.v65 = 0;
    v57_.v66 = 0;
    v57_.v67 = 0;
    v57_.v68 = 0;
    v57_.v69 = 0;
    *(_BYTE*)(a1 + 176) = 1;
    v57_.v70 = 0;
    v57_.v71 = 0;
    v57_.v72 = 0;
    v57_.v73 = 0;
    v57_.v74 = 0;
    v57_.v75 = 0;
    v57_.v76 = 0;
    v57_.v77 = 0;
    v57_.v78 = 0;
    v57_.v79 = 0;
    v57_.v82 = 0;
    v57_.v83 = 0;
    v57_.v84 = 0;
    v57_.v85 = 0;
    v57_.v86 = 0;
    v57_.v87 = 0;
    v57_.v88 = 0;
    v57_.v90 = 0;
    v57_.v91 = 0;
    v57_.v89 = 1065353216;
    v12 = (int*)GameData_21d9d18;
    v13 = GameData_21d9d20;
    v57_.v92 = 0;
    v57_.v93 = 0;
    v57_.v94 = 0;
    v57_.v95 = 0;
    v57_.v96 = 0;
    v57_.v97 = 0;
    v57_.v98 = 0;
    if (GameData_21d9d18 != GameData_21d9d20) {
      do {
        v14 = *v12++;
        *(_QWORD*)(GameData_21d9d00 + 8 * v14) = 0;
      } while (v12 != (int*)v13);
      v12 = (int*)GameData_21d9d18;
    }
    GameData_21d9d20 = (__int64)v12;
    GameData_21d9d60 = 0;
    GameData_21d9d68 = 0;
    GameData_21d9d70 = 0;
    GameData_21d9d7c = 0;
    GameData_21d9d38 = GameData_21d9d30;
    GameData_21d9cf0 = GameData_21d9ce8;
    GameData_21d9d50 = GameData_21d9d48;
    GameData_21d9d78 = 8;
    AssetTableFile_7e95e0((__int64)v57_.v57,
                          *(_QWORD*)(*(_QWORD*)(a1 + 16) + 392LL), 0);
    v15 = *(_QWORD*)(a1 + 416);
    for (j = *(_QWORD*)(a1 + 424); v15 != j; v15 += 24) {
      if ((*(_BYTE*)v15 & 1) != 0) {
        v17 = *(_QWORD*)(v15 + 16);
      }
      else {
        v17 = v15 + 1;
      }
      v52_.v53 = v17;
      v52_.v52 = (__int64 (**)(void))game_HashString_alt1(v17);
      AssetTableFile_7e7b20((__int64)v57_.v57, (unsigned __int64*)&v52_.v52);
    }
    AssetTableFile_7e8000((__int64)v57_.v57);
    v18 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 11832, 16, 0);
    v18[2] = 0;
    v19 = (unsigned __int64)(v18 + 3);
    v20 = v18;
    *v18 = GameData_212d3c8[0] + 2;
    v18[1] = 0;
    CharacterAppearance_10735d0((__int64)(v18 + 3));
    v55_.v55 = v19;
    v55_.v56 = (__int64)v20;
    game_character_CharacterAppearance_Setup(v19, (__int64)v57_.v57);
    v52_.v52 = GameData_1fe7f78;
    v52_.v53 = a1;
    v52_.v54 = (unsigned __int64*)&v52_.v52;
    *(_QWORD*)(a1 + 24) =
        GameHr_10784f0((__int64)&v55_.v55, 0, (__int64)&v52_.v52);
    v21 = v52_.v54;
    if (v52_.v54 == (unsigned __int64*)&v52_.v52) {
      goto LABEL_68;
    }
    goto LABEL_25;
  }
}

void CmdBtlUnit_e7a740(__int64 a1, __int64 a2, double a3, double a4)
{

#pragma clang fp contract(off)
  _BOOL4 v4;
  __n128 v7;
  __int64 v8;
  float32x4_t* v9;
  float32x4_t v10;
  float32x4_t v11;
  int8x16_t v12;
  float32x4_t v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int128 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  long double v23;
  __int64 v24;
  int v25;
  int v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  float v37;
  struct {
    __int64 v38;
    __int64 v39;
    __int64 v40;
  } v38_;
  struct {
    __int64 v41;
    __int64 v42;
  } v41_;

  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((*(_BYTE*)(a2 + 340) & 1) != 0) {
    return;
  }
  *(_QWORD*)(a1 + 208) = a2;
  game_UnitActor_SetZViewWeight(*(_QWORD*)(a1 + 16), 0x1.0000000000000p+0f, a4),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_DWORD*)(a2 + 336) = 1065353216;
  v8 = *(_QWORD*)(a2 + 392);
  if (v8 != 0) {
    v9 = *(float32x4_t**)(a2 + 8);
    PSEUDO_LOW_LANE128(v7, n128_f32,
                       *(float*)(v8 + 40) +
                           (float)(0x1.0000000000000p+0f - *(float*)(v8 + 40)));
    v10 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v7).n128_u64[0]), 0);
    LANES128(v10).n128_u32[3] = 0;
    v11 = vsubq_f32(v9[22], v10);
    v12 = vmulq_f32(v11, v11);
    LANES128(v12).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
            .n64_u64[0];
    if (__builtin_islessgreater(
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
                .n64_f32[0],
            0x0.0p+0f)) {
      LANES128(v9[22]).n128_u32[0] = LANES128(v7).n128_u32[0];
      LANES128(v9[22]).n128_u32[1] = LANES128(v7).n128_u32[0];
      v13 = v9[22];
      LANES128(v9[18]).n128_u32[2] |= 1u;
      LANES128(v13).n128_u64[1] = LANES128(v7).n128_u32[0];
      v9[22] = v13;
      v8 = *(_QWORD*)(a2 + 392);
    }
    v14 = *(__int64**)(a2 + 528);
    v15 = *(__int64**)(a2 + 536);
    if (v14 != v15) {
      v37 = *(float*)(v8 + 44) +
            (float)(0x1.0000000000000p+0f - *(float*)(v8 + 44));
      do {
        v16 = *v14++;
        v17 = *(_DWORD*)(v16 + 128);
        v18 = *(_QWORD*)v16;
        *(float*)(v16 + 112) = v37;
        *(float*)(v16 + 116) = v37;
        v19 = *(_OWORD*)(v16 + 112);
        *(_DWORD*)(v16 + 128) = v17 | 0x20;
        *((_QWORD*)&v19 + 1) = LODWORD(v37);
        *(_OWORD*)(v16 + 112) = v19;
        GameRoutine_a7c6a0(v18, v16),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
      } while (v14 != v15);
    }
    CharacterBuilder_1083840(a2),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v20 = *(_QWORD*)(*(_QWORD*)(a1 + 208) + 72LL);
  if (v20 != 0) {
    v21 = *(_QWORD*)(a1 + 320);
    if (v21 == 0) {
      goto LABEL_17;
    }
    v22 = std___1___shared_weak_count_lock(v21),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v22 == 0) {
      goto LABEL_17;
    }
    v24 = *(_QWORD*)(a1 + 312);
    if (v24 != 0 && *(_DWORD*)(*(_QWORD*)v24 + 64LL) == 0) {
      if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
        v25 = 0;
        v4 = true;
      }
      else {
        if ((GameData_2216858 & 1) == 0) {
          GameRoutine_8123d0_alt1(),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v25 = 0;
        v4 = (GameData_2216820 & 8) == 0;
      }
    }
    else {
      v25 = 1;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (((v4 | v25) & 1) != 0) {
        goto LABEL_17;
      }
    }
    else {
      v36 = v22;
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
      *(__n128*)&v23 = std___1___shared_weak_count___release_weak_alt1(v36),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (((v4 | v25) & 1) != 0) {
      LABEL_17:
        if (CmdBtlUnit_e7c280(a1)) {
          v26 = -589947500;
        }
        else {
          v26 = 119788728;
        }
        goto LABEL_20;
      }
    }
    v26 = -1054720718;
  LABEL_20:
    LODWORD(v23) = COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
    LANES128(v7).n128_f32[0] = CharacterAnimator_1079580(
        v20, v26, v23, -0x1.0000000000000p+0f, 0x1.0000000000000p+0f),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (*(_QWORD*)(a1 + 216) == 0) {
    v27 = (_QWORD*)GameData_22162a8;
    v28 = *(_QWORD*)(a2 + 616);
    v38_.v38 = *(_QWORD*)(a2 + 608);
    v38_.v39 = v28;
    if (v28 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 16), 1u,
                                memory_order_relaxed);
    }
    v38_.v40 = *(_QWORD*)(a2 + 624);
    JostleManager_ea1180((void*)(&v41_.v41), v27, &v38_.v38),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v29 = v41_.v41;
    v30 = v41_.v42;
    v31 = *(_QWORD*)(a1 + 224);
    v41_.v41 = 0;
    v41_.v42 = 0;
    *(_QWORD*)(a1 + 216) = v29;
    *(_QWORD*)(a1 + 224) = v30;
    if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v7 = std___1___shared_weak_count___release_weak_alt1(v31);
    }
    v32 = v41_.v42;
    if (v41_.v42 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v41_.v42 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v32 + 16LL))(
          v32, *(long double*)&v7),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v7 = std___1___shared_weak_count___release_weak_alt1(v32);
    }
    if (v38_.v39 != 0) {
      v7 = std___1___shared_weak_count___release_weak_alt1(v38_.v39);
    }
  }
  v33 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 440LL);
  if (v33 != 0 &&
      (unsigned __int64)(v34 = *(unsigned __int8*)(v33 + 16)) <= 3) {
    v35 = GameData_1b018e8[v34];
  }
  else {
    v35 = 392;
  }
  if (*(_DWORD*)(GameData_2203490 + v35 + 672) >= 2u) {
    CmdBtlUnit_e7aab0(a1, 1, v7),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  *(_BYTE*)(a1 + 188) = 1;
  CmdBtlUnit_e7ada0_alt1(a1),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((*(_BYTE*)(a1 + 440) & 1) == 0) {
    CmdBtlUnit_e79c10_alt1(a1, 1),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(_BYTE*)(a1 + 440) = 1;
  }
}

void CmdBtlUnit_e7ada0(__int64 a1)
{

#pragma clang fp contract(off)
  _BOOL4 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  bool v22;
  int v23;
  unsigned int v24;
  float v25;
  __int64* v26;
  float v27;
  float v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  int v32;

  if (*(_BYTE*)(a1 + 172) != 1 || *(_QWORD*)(a1 + 24) == 0) {
    return;
  }
  v3 = *(_QWORD*)(a1 + 208);
  if (v3 == 0 || (*(_BYTE*)(v3 + 342) & 1) == 0 || *(_BYTE*)(a1 + 177) == 0 ||
      *(_DWORD*)(a1 + 180) != 1) {
    return;
  }
  v4 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 440LL);
  if (v4 != 0 && (unsigned __int64)(v5 = *(unsigned __int8*)(v4 + 16)) <= 3) {
    v6 = GameData_1b018e8[v5];
  }
  else {
    v6 = 392;
  }
  v7 = *GameData_212ea58 + 672;
  if (*(_DWORD*)(v7 + v6) > 1u) {
    return;
  }
  v8 = *(int*)(*GameData_212ea58 + 632) <= 0 && *GameData_212d168 == 2;
  if (!v8 || *GameData_212d448[0] != 0) {
    return;
  }
  v10 = a1;
  v11 = GameData_212dec0[0];
  if ((*(_BYTE*)(*GameData_212dec0[0] + 12) & 1) == 0) {
    if (v4 != 0 &&
        (unsigned __int64)(v12 = *(unsigned __int8*)(v4 + 16)) <= 3) {
      v13 = GameData_1b018e8[v12];
    }
    else {
      v13 = 392;
    }
    if ((GameRoutine_ec0a20_alt1(*GameData_212dec0[0], *(_DWORD*)(v7 + v13)) &
         1) != 0) {
      return;
    }
    a1 = v10;
    if ((*(_BYTE*)(v10 + 172) & 1) == 0) {
      goto LABEL_67;
    }
  }
  v14 = *(_QWORD*)(*(_QWORD*)(a1 + 208) + 72LL);
  if (v14 == 0) {
    return;
  }
  if (*(_BYTE*)(a1 + 148) != 0) {
    v15 = *(float*)(a1 + 144);
  }
  else {
    v15 = -0x1.0000000000000p+0f;
  }
  *(_BYTE*)(v14 + 88) = CmdBtlUnit_e7c280(v10);
  v16 = *(_QWORD*)(v10 + 320);
  if (v16 == 0) {
    goto LABEL_41;
  }
  v17 = std___1___shared_weak_count_lock_alt1(v16);
  if (v17 == 0) {
    goto LABEL_41;
  }
  v18 = *(_QWORD*)(v10 + 312);
  v19 = v10;
  if (v18 == 0 || *(_DWORD*)(*(_QWORD*)v18 + 64LL) != 0) {
    v20 = 1;
    goto LABEL_38;
  }
  if ((*(_BYTE*)(*v11 + 13) & 1) != 0) {
    v20 = 0;
    v1 = true;
    goto LABEL_38;
  }
  if ((GameData_2216858 & 1) == 0) {
  LABEL_67:
    GameRoutine_8123d0_alt1();
  }
  v20 = 0;
  v1 = (GameData_2216820 & 8) == 0;
LABEL_38:
  if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v21 = v17;
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak_alt2(v21);
    v19 = v10;
  }
  if (((v1 | v20) & 1) == 0) {
    v23 = -1054720718;
    goto LABEL_44;
  }
LABEL_41:
  v22 = CmdBtlUnit_e7c280(v10);
  v19 = v10;
  if (v22) {
    v23 = -589947500;
  }
  else {
    v23 = 119788728;
  }
LABEL_44:
  if (*(_BYTE*)(v19 + 140) != 0) {
    v24 = *(_DWORD*)(v19 + 136);
  }
  else {
    v24 = v23;
  }
  if (*(_BYTE*)(v19 + 168) == 1) {
    v25 = game_edf4a0();
    v26 = CharacterAnimator_1079d90_alt1(v14, v24);
    v19 = v10;
    v27 = v25 * *((float*)v26 + 3);
  }
  else {
    v27 = -0x1.0000000000000p+0f;
    if (*(_BYTE*)(v19 + 164) != 0) {
      v27 = *(float*)(v19 + 160);
    }
  }
  v28 = 0x1.0000000000000p+0f;
  if (*(_BYTE*)(v19 + 156) != 0) {
    v28 = *(float*)(v19 + 152);
  }
  CharacterAnimator_1079580_alt1(v14, v24, v15, v27, v28);
  v29 = *(unsigned __int8*)(v10 + 376);
  if ((v29 & 1) != 0) {
    v30 = *(_QWORD*)(v10 + 384);
  }
  else {
    v30 = v29 >> 1;
  }
  if (v30 != 0 || (v31 = v10, (*(_BYTE*)(v10 + 191) & 1) != 0)) {
    CmdBtlUnit_e7ca80_alt1(v10, -0x1.0000000000000p+0f);
    v31 = v10;
  }
  v32 = *(unsigned __int8*)(v31 + 172);
  *(_DWORD*)(v31 + 484) = v24;
  if (v32 == 1) {
    *(_BYTE*)(v31 + 172) = 0;
  }
}

void CmdBtlUnit_e7b0a0(__int64 a1)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  float v19;
  float v20;
  char v21;
  int8x16_t v22;
  char v23;
  float v24;
  float v25;
  __int64 v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  __int64 v31;
  int8x16_t v32;
  __int64 v33;
  __int128 v34;
  __int128 v35;
  __int128 v36;
  __int64 v37;
  __int128 v38;
  __int64 v39;
  float v40;
  float v41;
  int8x16_t v42;
  float32x4_t v43;
  int8x16_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  __int64 v49;
  float32x4_t v50;
  int8x16_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  __int128 v58;
  __int128 v59;
  __int128 v60;
  __int128 v61;
  __int64 v62;
  __int128 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  float32x4_t* v67;
  float32x4_t* v68;
  char v69;
  int v70;
  float32x4_t v71;
  float32x4_t v72;
  int8x16_t v73;
  float v74;
  __int128 v75;
  int v76;
  float v77;
  float v78;
  __int64 v79;
  int8x16_t v80;
  __int128 v81;
  float32x4_t v82;
  __int128 v83;
  float32x4_t v84;
  float32x4_t v85;
  int8x16_t v86;
  __int128 v87;
  __int128 v88;

  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w"));
  if (*(_QWORD*)(a1 + 24) != 0) {
    v5 = *(_QWORD*)(a1 + 208);
    if (v5 != 0 && (*(_BYTE*)(v5 + 342) & 1) != 0 && *(_BYTE*)(a1 + 177) != 0 &&
        *(_DWORD*)(a1 + 180) == 1) {
      v6 = *(_QWORD*)(a1 + 16);
      v7 = *(_QWORD*)(v6 + 440);
      if (v7 != 0 &&
          (unsigned __int64)(v8 = *(unsigned __int8*)(v7 + 16)) <= 3) {
        v9 = GameData_1b018e8[v8];
      }
      else {
        v9 = 392;
      }
      if (*(_DWORD*)(*GameData_212ea58 + v9 + 672) <= 1u) {
        v10 = *(int*)(*GameData_212ea58 + 632) <= 0 && *GameData_212d168 == 2;
        if (v10 && *GameData_212d448[0] == 0) {
          v12 = a1;
          if (*(_QWORD*)(a1 + 424) == *(_QWORD*)(a1 + 416)) {
            GameHr_81d740_alt1(v6),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            a1 = v12;
          }
          if (*(_BYTE*)(a1 + 185) == 0 || *GameData_212f2e0 == 0) {
          LABEL_41:
            v39 = game_script_hub_g_frame_counter_ptr[0];
            if (*(_BYTE*)(a1 + 189) != 0) {
              v40 =
                  (float)(*(float*)(*(_QWORD*)
                                        game_script_hub_g_frame_counter_ptr[0] +
                                    160LL) *
                          0x1.0aef000000000p+4f) /
                  0x1.f400000000000p+9f;
              v41 = *(float*)(a1 + 192) * 0x1.638e3a0000000p+2f;
              v82 = *(float32x4_t*)(a1 + 112);
              math_Quat_FromYawPitchRoll(
                  (void*)(&v85), *(float*)(a1 + 132) * 0x1.1df46a0000000p-6f,
                  0x0.0p+0f, 0x0.0p+0f),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              LANES128(v42).n128_u64[0] = 0;
              LANES128(v43).n128_u64[0] = 0;
              LANES128(v42).n128_u64[1] = COERCE_UNSIGNED_INT(v40 * v41);
              v44 = vmulq_f32(v85, COERCE_AS(float32x4_t, GameData_1a829d0));
              LANES128(v45).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                      .n64_u64[0];
              LANES128(v46).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              LANES128(v47).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v43).n128_i8[8] =
                  vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
              LANES128(v48).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              LANES128(v45).n128_u64[1] = LANES128(v46).n128_u64[0];
              LANES128(v47).n128_u64[1] = LANES128(v47).n128_u64[0];
              LANES128(v42).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              LANES128(v46).n128_u64[1] = LANES128(v42).n128_u64[0];
              *(int32x2_t*)&LANES128(v42).n128_i8[8] = vdup_lane_s32(
                  COERCE_AS(int32x2_t, LANES128(v44).n128_u64[0]), 1);
              v49 = *(_QWORD*)(v12 + 208);
              v50 =
                  vmlaq_f32(vmlaq_f32(vmulq_f32(v44, v47),
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v43, v45)),
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v42, v48));
              LANES128(v42).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v42).n128_i8[8] =
                  vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
              LANES128(v44).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                      .n64_u64[0];
              LANES128(v44).n128_u64[1] = LANES128(v44).n128_u64[0];
              v51 = vmlsq_f32(v50, v42, v46);
              LANES128(v42).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              LANES128(v52).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v51, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                      .n64_u64[0];
              LANES128(v53).n128_u64[0] = LANES128(v85).n128_u64[0];
              LANES128(v54).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v51, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              LANES128(v53).n128_u64[1] = LANES128(v42).n128_u64[0];
              *(int8x8_t*)&LANES128(v52).n128_i8[8] =
                  vqtbl1_s8(v51, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
              *(int32x2_t*)&LANES128(v54).n128_i8[8] = vdup_lane_s32(
                  COERCE_AS(int32x2_t, LANES128(v51).n128_u64[0]), 1);
              v55 = vmlaq_f32(vmulq_f32(v44, v51),
                              COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v53, v52));
              LANES128(v52).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              LANES128(v42).n128_u64[1] = LANES128(v52).n128_u64[0];
              LANES128(v52).n128_u64[1] = LANES128(v85).n128_u64[0];
              LANES128(v56).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v51, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v56).n128_i8[8] =
                  vqtbl1_s8(v51, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
              v57 = vaddq_f32(
                  v82,
                  vmlsq_f32(vmlaq_f32(v55,
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v52, v54)),
                            v56, v42));
              *(_QWORD*)(v12 + 96) = LANES128(v57).n128_u64[0];
              *(_QWORD*)(v12 + 112) = LANES128(v57).n128_u64[0];
              v59 = *(_OWORD*)(v12 + 96);
              v58 = *(_OWORD*)(v12 + 112);
              *(_QWORD*)&v60 = *(_QWORD*)(v12 + 112);
              *((_QWORD*)&v59 + 1) = LANES128(v57).n128_u32[2];
              *((_QWORD*)&v60 + 1) = LANES128(v57).n128_u32[2];
              *(_OWORD*)(v12 + 96) = v59;
              *(_OWORD*)(v12 + 112) = v60;
              if (v49 != 0) {
                v83 = v60;
                *(_QWORD*)&v61 = (unsigned int)v58 | 0x4348000000000000LL;
                DWORD1(v58) = -1027080192;
                *((_QWORD*)&v61 + 1) =
                    LANES128_OF(vextq_s8(v57, v57, 8u)).n128_u32[0];
                *((_QWORD*)&v58 + 1) = *((_QWORD*)&v61 + 1);
                v87 = v58;
                v88 = v61;
                GameRoutine_1085a10((void*)(&v86), v49 + 160, &v88, &v87, 0),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v24 = COERCE_AS(__typeof__(v24),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                v60 = v83;
                v62 = v12;
                DWORD1(v60) = LANES128(v86).n128_u32[1];
              }
              else {
                v62 = v12;
              }
              *(_QWORD*)(v62 + 112) = v60;
              v63 = *(_OWORD*)(v62 + 112);
              *(_DWORD*)(v62 + 100) = DWORD1(v63);
              *((_QWORD*)&v63 + 1) = DWORD2(v60);
              *(_OWORD*)(v62 + 112) = v63;
              GameRoutine_e7bed0(v12, 1),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              a1 = v12;
            }
            if (*(_DWORD*)(a1 + 200) == 2) {
              LANES128(v86).n128_u64[0] = (unsigned __int64)"MindLayer";
              LANES128(v86).n128_u64[1] = 9;
              game_ff7720((unsigned __int8**)(v12 + 344), (__int64*)&v86),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v64 = *(_QWORD*)(v12 + 216);
              v65 = *(_QWORD*)(v12 + 224);
              a1 = v12;
              if (v65 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v65 + 8),
                                          1u, memory_order_relaxed);
              }
              if (v64 != 0) {
                *(_BYTE*)(v64 + 60) =
                    *(_QWORD*)(v12 + 352) != *(_QWORD*)(v12 + 344);
              }
              if (v65 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v24 = COERCE_AS(__typeof__(v24),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                std___1___shared_weak_count___release_weak_alt2(v65),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v24 = COERCE_AS(__typeof__(v24),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                a1 = v12;
              }
              *(_DWORD*)(a1 + 200) = 0;
            }
            v66 = *(_QWORD*)(a1 + 208);
            if (v66 != 0) {
              v67 = (float32x4_t*)CharacterBuilder_1084a50(*(_QWORD*)(a1 + 208),
                                                           "-Loc_C_Trans"),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(float, "s0", "=w"));
              a1 = v12;
              if (v67 != nullptr) {
                v68 =
                    (float32x4_t*)CharacterBuilder_1084a50(v66, "-Jnt_C_Head"),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(float, "s0", "=w"));
                a1 = v12;
                if (v68 != nullptr) {
                  if (*(_QWORD*)(*(_QWORD*)(v12 + 208) + 72LL) == 0 ||
                      (v69 = CharacterAnimator_1079e10(
                           *(_QWORD*)(*(_QWORD*)(v12 + 208) + 72LL)),
                       a1 = v12, (v69 & 1) != 0)) {
                    v70 = *(_DWORD*)(a1 + 444);
                    if (v70 != 0) {
                      if (v70 != 1) {
                        goto LABEL_69;
                      }
                      v71 = vsubq_f32(v68[3], v67[3]);
                      if ((*(_BYTE*)(a1 + 464) & 1) != 0) {
                        v72 = vsubq_f32(*(float32x4_t*)(a1 + 448), v71);
                        v73 = vmulq_f32(v72, v72);
                        LANES128(v73).n128_u64[0] =
                            LANES64_OF(
                                vadd_f32(COERCE_AS(
                                             float32x2_t,
                                             LANES128_OF(vextq_s8(v73, v73, 8u))
                                                 .n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v73).n128_u64[0])))
                                .n64_u64[0];
                        v74 = 0x1.0000000000000p-1f;
                        if (LANES64_OF(
                                vpadd_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v73).n128_u64[0]),
                                          COERCE_AS(float32x2_t,
                                                    LANES128(v73).n128_u64[0])))
                                .n64_f32[0] > (float)(*(float*)(a1 + 480) *
                                                      *(float*)(a1 + 480))) {
                          *(_QWORD*)(a1 + 448) = LANES128(v71).n128_u64[0];
                          v75 = *(_OWORD*)(a1 + 448);
                          *((_QWORD*)&v75 + 1) = LANES128(v71).n128_u32[2];
                          *(_OWORD*)(a1 + 448) = v75;
                        }
                      }
                      else {
                        *(float32x4_t*)(a1 + 448) = v71;
                        v74 = 0x1.0000000000000p-1f;
                        *(_BYTE*)(a1 + 464) = 1;
                      }
                      v76 = 2;
                    }
                    else {
                      v76 = 1;
                      v74 = 0x1.47ae140000000p-7f;
                    }
                    *(float*)(a1 + 480) = v74;
                    *(_DWORD*)(a1 + 444) = v76;
                  }
                }
              }
            }
          LABEL_69:
            if (*(_BYTE*)(a1 + 520) != 1) {
              goto LABEL_78;
            }
            v77 = *(float*)(a1 + 516);
            v78 = fabsf((float)(*(float*)(*(_QWORD*)v39 + 160LL) *
                                0x1.0aef000000000p+4f) /
                        0x1.f400000000000p+9f);
            if (v77 <= 0x0.0p+0f) {
              if (v77 >= 0x0.0p+0f || (v77 = v77 + v78) <= 0x0.0p+0f) {
              LABEL_76:
                *(float*)(a1 + 516) = v77;
                if (v77 <= 0x0.0p+0f) {
                  goto LABEL_77;
                }
              LABEL_78:
                v79 = a1;
                CmdBtlUnit_e7b880(a1),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v24 = COERCE_AS(__typeof__(v24),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                CmdBtlUnit_e7ada0_alt3(v79),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v24 = COERCE_AS(__typeof__(v24),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                GameRoutine_e7bed0(v79, 0),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v24 = COERCE_AS(__typeof__(v24),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                return;
              }
            }
            else {
              v77 = v77 - v78;
              if (v77 >= 0x0.0p+0f) {
                goto LABEL_76;
              }
            }
            *(_DWORD*)(a1 + 516) = 0;
          LABEL_77:
            CmdBtlUnit_e7da80(v12, (_QWORD*)(a1 + 488), *(float*)(a1 + 512)),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            a1 = v12;
            goto LABEL_78;
          }
          v13 = *(_QWORD*)(a1 + 120);
          v14 = *(_QWORD*)(a1 + 224);
          LANES128(v85).n128_u64[0] = *(_QWORD*)(a1 + 112);
          LANES128(v85).n128_u64[1] = v13;
          v15 = *(_QWORD*)(a1 + 216);
          v16 = *(_QWORD*)(*(_QWORD*)(a1 + 208) + 8LL);
          v18 = *(_QWORD*)(v16 + 304);
          v17 = *(_QWORD*)(v16 + 312);
          LANES128(v84).n128_u64[0] = v18;
          LANES128(v84).n128_u64[1] = v17;
          if (v14 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                      memory_order_relaxed);
            GameRoutine_e9f200(v15),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v86 = (__typeof__(v86)){0};
            v20 = fmaxf(v19, 0x1.3333340000000p-1f);
            if ((*(_BYTE*)(v15 + 92) & (*(float*)(v15 + 88) < v20)) != 0) {
              v20 = *(float*)(v15 + 88);
            }
            *(_QWORD*)&v88 = 8;
            *((_QWORD*)&v88 + 1) = 1050253722;
            v21 = game_ff0ea0(&v86, &v85, &v84, (__int64*)&v88, v20),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w"));
            v22 = v86;
            v23 = v21;
            if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) != 0) {
              if ((v21 & 1) == 0) {
                goto LABEL_36;
              }
            }
            else {
              v80 = v22;
              (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              std___1___shared_weak_count___release_weak_alt2(v14),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v22 = v80;
              if ((v23 & 1) == 0) {
                goto LABEL_36;
              }
            }
          }
          else {
            GameRoutine_e9f200(v15),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v86 = (__typeof__(v86)){0};
            v25 = fmaxf(v24, 0x1.3333340000000p-1f);
            if ((*(_BYTE*)(v15 + 92) & (*(float*)(v15 + 88) < v25)) != 0) {
              v25 = *(float*)(v15 + 88);
            }
            *(_QWORD*)&v88 = 8;
            *((_QWORD*)&v88 + 1) = 1050253722;
            if ((game_ff0ea0(&v86, &v85, &v84, (__int64*)&v88, v25) & 1) == 0) {
            LABEL_36:
              v32 = v84;
              v33 = *(_QWORD*)(v12 + 208);
              *(_QWORD*)(v12 + 96) = LANES128(v84).n128_u64[0];
              *(_QWORD*)(v12 + 112) = LANES128(v32).n128_u64[0];
              v35 = *(_OWORD*)(v12 + 96);
              v34 = *(_OWORD*)(v12 + 112);
              *(_QWORD*)&v29 = *(_QWORD*)(v12 + 112);
              *((_QWORD*)&v35 + 1) = LANES128(v32).n128_u32[2];
              *((_QWORD*)&v29 + 1) = LANES128(v32).n128_u32[2];
              *(_OWORD*)(v12 + 96) = v35;
              *(_OWORD*)(v12 + 112) = v29;
              if (v33 != 0) {
                v81 = v29;
                *(_QWORD*)&v36 = (unsigned int)v34 | 0x4348000000000000LL;
                v31 = v33 + 160;
                DWORD1(v34) = -1027080192;
                *((_QWORD*)&v36 + 1) =
                    LANES128_OF(vextq_s8(v32, v32, 8u)).n128_u32[0];
                *((_QWORD*)&v34 + 1) = *((_QWORD*)&v36 + 1);
                v87 = v34;
                v88 = v36;
                goto LABEL_38;
              }
              goto LABEL_39;
            }
            v22 = v86;
          }
          *(_QWORD*)(v12 + 96) = LANES128(v22).n128_u64[0];
          *(_QWORD*)(v12 + 112) = LANES128(v22).n128_u64[0];
          v26 = *(_QWORD*)(v12 + 208);
          v28 = *(_OWORD*)(v12 + 96);
          v27 = *(_OWORD*)(v12 + 112);
          *(_QWORD*)&v29 = *(_QWORD*)(v12 + 112);
          *((_QWORD*)&v28 + 1) = LANES128(v22).n128_u32[2];
          *((_QWORD*)&v29 + 1) = LANES128(v22).n128_u32[2];
          *(_OWORD*)(v12 + 96) = v28;
          *(_OWORD*)(v12 + 112) = v29;
          if (v26 != 0) {
            *(_QWORD*)&v30 = (unsigned int)v27 | 0x4348000000000000LL;
            v31 = v26 + 160;
            v81 = v29;
            *((_QWORD*)&v30 + 1) =
                LANES128_OF(vextq_s8(v22, v22, 8u)).n128_u32[0];
            v88 = v30;
            DWORD1(v27) = -1027080192;
            *((_QWORD*)&v27 + 1) = *((_QWORD*)&v30 + 1);
            v87 = v27;
          LABEL_38:
            GameRoutine_1085a10((void*)(&v86), v31, &v88, &v87, 0),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v29 = v81;
            v37 = v12;
            DWORD1(v29) = LANES128(v86).n128_u32[1];
          LABEL_40:
            *(_QWORD*)(v37 + 112) = v29;
            v38 = *(_OWORD*)(v37 + 112);
            *(_DWORD*)(v37 + 100) = DWORD1(v38);
            *((_QWORD*)&v38 + 1) = DWORD2(v29);
            *(_OWORD*)(v37 + 112) = v38;
            GameRoutine_e7bed0(v12, 1),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            a1 = v12;
            goto LABEL_41;
          }
        LABEL_39:
          v37 = v12;
          goto LABEL_40;
        }
      }
    }
  }
}

bool CmdBtlUnit_e7c280(__int64 a1)
{
  _BYTE* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  int* v8;
  __int64 v9;
  int v10;

  if ((*(_BYTE*)(a1 + 369) & 1) != 0) {
    v1 = (_BYTE*)(a1 + 368);
    return *v1 & 1;
  }
  if ((*(_BYTE*)(a1 + 371) & 1) != 0) {
    v1 = (_BYTE*)(a1 + 370);
    return *v1 & 1;
  }
  if ((*(_BYTE*)(a1 + 373) & 1) != 0) {
    v1 = (_BYTE*)(a1 + 372);
    return *v1 & 1;
  }
  if ((*(_BYTE*)(a1 + 375) & 1) != 0) {
    v1 = (_BYTE*)(a1 + 374);
    return *v1 & 1;
  }
  if ((*(_BYTE*)(GameData_21f4cc0 + 12) & 1) != 0) {
    return false;
  }
  if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) == 0) {
    if ((GameData_2216858 & 1) == 0) {
      GameRoutine_8123d0(a1);
    }
    if ((GameData_2216820 & 8) != 0) {
      return false;
    }
  }
  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 440LL);
  if (v3 == 0) {
    v6 = *(_DWORD*)(GameData_2203490 + 1068);
    v7 = GameData_2203490 + 672;
    v4 = 3;
    goto LABEL_30;
  }
  v4 = *(unsigned __int8*)(v3 + 16);
  switch ((_DWORD)v4) {
  case 0:
    v5 = 12;
    goto LABEL_22;
  case 3:
    v5 = 268;
    goto LABEL_22;
  case 1:
    v5 = 140;
  LABEL_22:
    v7 = GameData_2203490 + 672;
    v8 = (int*)(GameData_2203490 + 672 + v5);
    goto LABEL_24;
  default:
    break;
  }
  v7 = GameData_2203490 + 672;
  v8 = (int*)(GameData_2203490 + 1068);
LABEL_24:
  v6 = *v8;
  if ((_DWORD)v4 != 0) {
    v9 = 3;
    if ((_DWORD)v4 == 1) {
      v9 = 1;
    }
    if ((_DWORD)v4 == 3) {
      v4 = 2;
    }
    else {
      v4 = v9;
    }
  }
LABEL_30:
  v10 = *(_DWORD*)(v7 + (v4 << 7) + 20) + *(_DWORD*)(v7 + (v4 << 7) + 16);
  if (v10 <= 1) {
    v10 = 1;
  }
  return 3 * v6 < v10;
}

__int64 CmdBtlUnit_e7c3f0(__int64 a1, int a2, __int16 a3, float a4)
{

#pragma clang fp contract(off)
  bool v8;
  char v9;
  float v10;
  char v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64 v15;
    char gap16_[8];
    __int64 v16;
  } v15_;

  v8 = CmdBtlUnit_e7c280(a1);
  *(_WORD*)(a1 + 2LL * a2 + 368) = a3;
  v9 = v8 ^ CmdBtlUnit_e7c280(a1);
  if ((v9 & 1) != 0) {
    *(_BYTE*)(a1 + 191) = 1;
    if (!CmdBtlUnit_e7c4f0(a1)) {
      if (a4 <= 0x1.0000000000000p-23f) {
        v10 = 0x0.0p+0f;
        v12 = a1;
        v11 = 0;
      }
      else {
        v10 = a4;
        v11 = 1;
        v12 = a1;
      }
      CmdBtlUnit_e7c6f0_alt1(v12, v11, v10);
    }
    LOWORD(v15_.v15) = 0;
    CmdBtlUnit_e7da80(a1, &v15_.v15, -0x1.0000000000000p+0f);
    if ((v15_.v15 & 1) != 0 && v15_.v16 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v15_.v16);
    }
  }
  return v9 & 1;
}

bool CmdBtlUnit_e7c4f0(__int64 a1)
{
  _BOOL4 v1;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v17;

  v3 = *(_DWORD*)(a1 + 484);
  v4 = *(_QWORD*)(a1 + 320);
  if (v4 == 0) {
    goto LABEL_8;
  }
  v5 = std___1___shared_weak_count_lock_alt1(v4);
  if (v5 == 0) {
    goto LABEL_8;
  }
  v6 = *(_QWORD*)(a1 + 312);
  if (v6 != 0 && *(_DWORD*)(*(_QWORD*)v6 + 64LL) == 0) {
    if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
      v7 = 0;
      v1 = true;
    }
    else {
      if ((GameData_2216858 & 1) == 0) {
        goto LABEL_42;
      }
      v7 = 0;
      v1 = (GameData_2216820 & 8) == 0;
    }
  }
  else {
    v7 = 1;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (((v1 | v7) & 1) != 0) {
      goto LABEL_8;
    }
  }
  else {
    v10 = v5;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt2(v10);
    if (((v1 | v7) & 1) != 0) {
    LABEL_8:
      if (CmdBtlUnit_e7c280(a1)) {
        v8 = -589947500;
      }
      else {
        v8 = 119788728;
      }
      if (v3 == v8) {
        return true;
      }
      goto LABEL_15;
    }
  }
  if (v3 == -1054720718) {
    return true;
  }
LABEL_15:
  v11 = *(_QWORD*)(a1 + 320);
  if (v11 == 0) {
    goto LABEL_22;
  }
  v12 = std___1___shared_weak_count_lock_alt1(v11);
  if (v12 == 0) {
    goto LABEL_22;
  }
  v13 = *(_QWORD*)(a1 + 312);
  if (v13 == 0 || *(_DWORD*)(*(_QWORD*)v13 + 64LL) != 0) {
    v14 = 1;
    goto LABEL_20;
  }
  if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
    v14 = 0;
    v1 = true;
    goto LABEL_20;
  }
  if ((GameData_2216858 & 1) == 0) {
  LABEL_42:
    GameRoutine_8123d0_alt1();
  }
  v14 = 0;
  v1 = (GameData_2216820 & 8) == 0;
LABEL_20:
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (((v1 | v14) & 1) != 0) {
      goto LABEL_22;
    }
  LABEL_35:
    v15 = 1669996436;
    return v3 == 0 || v3 == v15;
  }
  v17 = v12;
  (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
  std___1___shared_weak_count___release_weak_alt2(v17);
  if (((v1 | v14) & 1) == 0) {
    goto LABEL_35;
  }
LABEL_22:
  if (CmdBtlUnit_e7c280(a1)) {
    v15 = -1101902990;
  }
  else {
    v15 = -574916402;
  }
  return v3 == 0 || v3 == v15;
}

void CmdBtlUnit_e7c6f0(__int64 a1, char a2, float a3)
{

#pragma clang fp contract(off)
  _BOOL4 v3;
  _BOOL4 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  char v12;
  int v13;
  unsigned int v14;
  char v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;

  if ((a2 & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 320);
    if (v7 == 0) {
      goto LABEL_9;
    }
    v8 = std___1___shared_weak_count_lock(v7);
    if (v8 == 0) {
      goto LABEL_9;
    }
    v9 = *(_QWORD*)(a1 + 312);
    if (v9 == 0 || *(_DWORD*)(*(_QWORD*)v9 + 64LL) != 0) {
      v10 = 1;
      goto LABEL_7;
    }
    if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
      v10 = 0;
      v3 = true;
      goto LABEL_7;
    }
    if ((GameData_2216858 & 1) != 0) {
      v10 = 0;
      v3 = (GameData_2216820 & 8) == 0;
    LABEL_7:
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (((v3 | v10) & 1) != 0) {
          goto LABEL_9;
        }
      }
      else {
        v22 = v8;
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak_alt1(v22);
        if (((v3 | v10) & 1) != 0) {
        LABEL_9:
          if (CmdBtlUnit_e7c280(a1)) {
            v11 = -1101902990;
          }
          else {
            v11 = -574916402;
          }
        LABEL_12:
          v12 = 0;
          v13 = v11 & 0xFE;
          v14 = v11 & 0xFFFB7F00;
          v15 = 1;
          if ((*(_BYTE*)(a1 + 172) & 1) != 0) {
          LABEL_14:
            *(_DWORD*)(a1 + 136) = v14 | v13;
            *(_BYTE*)(a1 + 140) = v15;
            *(float*)(a1 + 144) = a3;
            *(_BYTE*)(a1 + 152) = 0;
            *(_BYTE*)(a1 + 156) = 0;
            *(_BYTE*)(a1 + 160) = 0;
            *(_BYTE*)(a1 + 148) = 1;
            *(_BYTE*)(a1 + 164) = 0;
            *(_BYTE*)(a1 + 168) = v12;
            CmdBtlUnit_e7ada0_alt1(a1);
            return;
          }
        LABEL_13:
          *(_BYTE*)(a1 + 172) = 1;
          goto LABEL_14;
        }
      }
      v11 = 1669996436;
      goto LABEL_12;
    }
  LABEL_41:
    GameRoutine_8123d0_alt1();
  }
  v16 = *(_DWORD*)(a1 + 484);
  v17 = *(_QWORD*)(a1 + 320);
  if (v17 != 0) {
    v18 = std___1___shared_weak_count_lock(v17);
    if (v18 != 0) {
      v19 = *(_QWORD*)(a1 + 312);
      if (v19 != 0 && *(_DWORD*)(*(_QWORD*)v19 + 64LL) == 0) {
        if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
          v20 = 0;
          v4 = true;
        }
        else {
          if ((GameData_2216858 & 1) == 0) {
            goto LABEL_41;
          }
          v20 = 0;
          v4 = (GameData_2216820 & 8) == 0;
        }
      }
      else {
        v20 = 1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (((v4 | v20) & 1) != 0) {
          goto LABEL_22;
        }
      LABEL_30:
        if (v16 == -1054720718) {
          return;
        }
      LABEL_31:
        v12 = 1;
        v15 = 0;
        v13 = 0;
        v14 = 0;
        if ((*(_BYTE*)(a1 + 172) & 1) != 0) {
          goto LABEL_14;
        }
        goto LABEL_13;
      }
      v23 = v18;
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      std___1___shared_weak_count___release_weak_alt1(v23);
      if (((v4 | v20) & 1) == 0) {
        goto LABEL_30;
      }
    }
  }
LABEL_22:
  if (CmdBtlUnit_e7c280(a1)) {
    v21 = -589947500;
  }
  else {
    v21 = 119788728;
  }
  if (v16 != v21) {
    goto LABEL_31;
  }
}

void CmdBtlUnit_e7c980(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10[4];

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 440LL);
  if (v3 != 0 && (unsigned __int64)(v4 = *(unsigned __int8*)(v3 + 16)) <= 3) {
    v5 = GameData_1b018e8[v4];
  }
  else {
    v5 = 392;
  }
  if (*(_DWORD*)(GameData_2203490 + v5 + 672) <= 1u &&
      *(_DWORD*)(a1 + 200) == 0) {
    v10[2] = v1;
    v10[3] = v2;
    v10[0] = (__int64)"MindLayer";
    v10[1] = 9;
    GameHr_ff7420((unsigned __int8**)(a1 + 344), v10);
    v7 = *(_QWORD*)(a1 + 216);
    v8 = *(_QWORD*)(a1 + 224);
    v9 = a1;
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v7 != 0) {
      *(_BYTE*)(v7 + 60) = *(_QWORD*)(a1 + 352) != *(_QWORD*)(a1 + 344);
    }
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak_alt2(v8);
      v9 = a1;
    }
    *(_DWORD*)(v9 + 200) = 1;
  }
}

__int64 CmdBtlUnit_e7cbc0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  unsigned int v7;
  __int64 v8;

  v1 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 440LL);
  if (v1 != 0 && (unsigned __int64)(v2 = *(unsigned __int8*)(v1 + 16)) <= 3) {
    v3 = GameData_1b01768[v2];
  }
  else {
    v3 = 3;
  }
  v4 = GameData_2203490 + (v3 << 7);
  v5 = *(__int64**)(v4 + 712);
  v6 = *(__int64**)(v4 + 720);
  if (v5 == v6) {
    return 0;
  }
  v7 = 0;
  do {
    v8 = *v5;
    v5 += 2;
    if (v8 == a1) {
      break;
    }
    ++v7;
  } while (v5 != v6);
  return v7;
}

_QWORD* CmdBtlUnit_e7cc50(_QWORD* result)
{
  *(_WORD*)(result[2] + 20LL) |= 1u;
  if (result[53] == result[52]) {
    return (_QWORD*)UnitActor_81d740(result[2]);
  }
  return result;
}

_QWORD* game_cmdbtl_CmdBtlUnit_SetupLookToEnemy(_QWORD* result, __int64 a2,
                                                __int64 a3, __int64 a4)
{
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  int v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  struct {
    _QWORD v33[4];
    _QWORD* v34;
  } v33_;
  int v35;
  int v36;
  struct {
    __int64 v37;
    _QWORD* v38;
  } v37_;
  struct {
    __int64 v39;
    __int64 v40;
  } v39_;

  v4 = result[2];
  v5 = result;
  v37_.v37 = 0;
  v37_.v38 = nullptr;
  v6 = *(_QWORD*)(v4 + 440);
  if (v6 == 0) {
    v9 = GameData_2203490 + 672;
    v10 = (_QWORD*)(GameData_2203490 + 1056);
    v7 = 3;
    goto LABEL_19;
  }
  v7 = *(unsigned __int8*)(v6 + 16);
  if ((_DWORD)v7 != 0 && (_DWORD)v7 != 3) {
    if ((_DWORD)v7 == 1) {
      v10 = (_QWORD*)(GameData_2203490 + 672);
      v9 = GameData_2203490 + 672;
      goto LABEL_13;
    }
    v9 = GameData_2203490 + 672;
    v10 = (_QWORD*)(GameData_2203490 + 1056);
    if ((_DWORD)v7 == 0) {
      goto LABEL_19;
    }
  LABEL_16:
    if ((_DWORD)v7 == 3) {
      v7 = 2;
    }
    else {
      v7 = 3;
    }
    goto LABEL_19;
  }
  v9 = GameData_2203490 + 672;
  v10 = (_QWORD*)(GameData_2203490 + 800);
  if ((_DWORD)v7 != 1) {
    if ((_DWORD)v7 == 0) {
      goto LABEL_19;
    }
    goto LABEL_16;
  }
LABEL_13:
  if (*(int*)(v4 + 592) > 1) {
    return result;
  }
  v7 = 1;
LABEL_19:
  v11 = v9 + (v7 << 7);
  v12 = *(_QWORD*)(v11 + 88);
  if (v12 == 0) {
    goto LABEL_26;
  }
  v13 = *(_QWORD**)(v11 + 80);
  v14 = *(_QWORD*)(v11 + 88);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                            memory_order_relaxed);
  v15 = std___1___shared_weak_count_lock_alt1(v14);
  if (v15 != 0) {
    v16 = v5 == v13;
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v17 = v15;
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak_alt2(v17);
    }
  }
  else {
    v16 = false;
  }
  result = (_QWORD*)std___1___shared_weak_count___release_weak_alt2(v12);
  if (!v16) {
  LABEL_26:
    if (*((_DWORD*)v5 + 50) == 0) {
      v18 = *((_DWORD*)v5 + 32);
      v19 = (__int64*)v10[5];
      v20 = (__int64*)v10[6];
      v35 = 2139095039;
      v33_.v33[0] = GameData_1fe80f8;
      v33_.v33[1] = &v36;
      v33_.v33[2] = &v35;
      v33_.v33[3] = &v37_.v37;
      v33_.v34 = v33_.v33;
      v36 = v18;
      if (v19 == v20) {
        result = v33_.v33;
      }
      else {
        do {
          v39_.v39 = *v19;
          v21 = v19[1];
          v39_.v40 = v21;
          if (v21 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                                      memory_order_relaxed);
          }
          if (v33_.v34 == nullptr) {
            GameRoutine_60a310_alt1();
          }
          (*(void (**)(_QWORD*, __int64*))(*v33_.v34 + 48LL))(v33_.v34,
                                                              &v39_.v39);
          v22 = v39_.v40;
          if (v39_.v40 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v39_.v40 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
            std___1___shared_weak_count___release_weak_alt2(v22);
          }
          v19 += 2;
        } while (v19 != v20);
        result = v33_.v34;
        if (v33_.v34 != v33_.v33) {
          if (v33_.v34 != nullptr) {
            v26 = 40;
          LABEL_43:
            result =
                (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64, __int64))(
                    *result + v26))(result, a2, a3, a4);
          }
          v23 = (__int64)v37_.v38;
          if (v37_.v38 == nullptr) {
            return result;
          }
          goto LABEL_45;
        }
      }
      v26 = 32;
      goto LABEL_43;
    }
  }
  v23 = v10[11];
  if (v23 == 0) {
    return result;
  }
  v24 = v10[10];
  v25 = v10[11];
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 16), 1u,
                            memory_order_relaxed);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 16), 1u,
                            memory_order_relaxed);
  v37_.v37 = v24;
  v37_.v38 = (_QWORD*)v23;
  std___1___shared_weak_count___release_weak_alt2(v25);
LABEL_45:
  v27 = std___1___shared_weak_count_lock_alt1(v23);
  if (v27 != 0) {
    v28 = v37_.v37;
    if (v37_.v37 != 0) {
      v29 = *(_QWORD*)(v37_.v37 + 216);
      if (v29 == 0 || *(_DWORD*)(v29 + 64) != 2) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 16), 1u,
                                  memory_order_relaxed);
        v30 = v5[38];
        v5[37] = v28;
        v5[38] = v27;
        if (v30 != 0) {
          v31 = v27;
          std___1___shared_weak_count___release_weak_alt2(v30);
          v27 = v31;
        }
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v32 = v27;
      (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
      std___1___shared_weak_count___release_weak_alt2(v32);
    }
  }
  result = v37_.v38;
  if (v37_.v38 != nullptr) {
    return (_QWORD*)std___1___shared_weak_count___release_weak_alt2(
        (__int64)v37_.v38);
  }
  return result;
}

void CmdBtlUnit_e7d0a0(__int64 a1, char a2)
{
  char v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  signed __int64 v11;
  __int64 v12;
  char* v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  char* v22;
  __int64 v23;
  signed __int64 v24;
  __int64 v25;
  char* v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  signed __int64 v37;
  __int64 v38;
  char* v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  char* v48;
  __int64 v49;
  signed __int64 v50;
  __int64 v51;
  char* v52;
  char* v53;
  __int64 v54;
  __int64 v55;
  __int64 v57;
  struct {
    __int64 v58;
    unsigned __int64 v59;
    char* v60;
  } v58_;

  v2 = a2 & 1;
  if (*(_BYTE*)(a1 + 187) == (a2 & 1)) {
    return;
  }
  v3 = *(_QWORD**)(a1 + 208);
  *(_BYTE*)(a1 + 187) = v2;
  if (v3 == nullptr) {
    return;
  }
  v4 = v3[54];
  if (v4 != 0) {
    *(_BYTE*)(v4 + 289) = v2;
  }
  v5 = v3[55];
  if (v5 != 0) {
    *(_BYTE*)(v5 + 289) = v2;
  }
  v6 = v3[59];
  if (v6 != 0) {
    v7 = strlen_alt1((const char*)(v6 + 16));
    if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_132;
    }
    v8 = v7;
    if (v7 >= 0x17) {
      if ((v7 | 7) == 0x17) {
        v10 = 26;
      }
      else {
        v10 = (v7 | 7) + 1;
      }
      v9 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                      v10, 16, 0);
      v58_.v59 = v8;
      v58_.v60 = v9;
      v58_.v58 = v10 | 1;
    }
    else {
      v9 = (char*)&v58_.v58 + 1;
      LOBYTE(v58_.v58) = 2 * v7;
      if (v7 == 0) {
        goto LABEL_17;
      }
    }
    memmove_alt1((__int64)v9, v6 + 16, v8);
  LABEL_17:
    v9[v8] = 0;
    v11 = v58_.v59;
    v12 = (__int64)v58_.v60;
    if ((v58_.v58 & 1) != 0) {
      v13 = v58_.v60;
    }
    else {
      v13 = (char*)&v58_.v58 + 1;
    }
    if ((v58_.v58 & 1) == 0) {
      v11 = (unsigned __int64)(unsigned __int8)v58_.v58 >> 1;
    }
    if (v11 >= 9) {
      v14 = &v13[v11];
      v15 = (__int64)v13;
      do {
        v16 = memchr_alt1(v15, 227, v11 - 8);
        if (v16 == 0) {
          break;
        }
        if (*(_QWORD*)v16 == 0x533AAF82E3A282E3LL && *(_BYTE*)(v16 + 8) == 95) {
          if ((char*)v16 == v13) {
            *(_BYTE*)(v3[59] + 289LL) = v2;
          }
          break;
        }
        v15 = v16 + 1;
        v11 = (signed __int64)&v14[-v15];
      } while ((__int64)&v14[-v15] >= 9);
    }
    if ((v58_.v58 & 1) != 0 && v12 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v12);
    }
  }
  v19 = v3[60];
  if (v19 == 0) {
    goto LABEL_69;
  }
  v20 = strlen_alt1((const char*)(v19 + 16));
  if (v20 > 0xFFFFFFFFFFFFFFF6LL) {
    goto LABEL_132;
  }
  v21 = v20;
  if (v20 >= 0x17) {
    if ((v20 | 7) == 0x17) {
      v23 = 26;
    }
    else {
      v23 = (v20 | 7) + 1;
    }
    v22 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v23, 16, 0);
    v58_.v59 = v21;
    v58_.v60 = v22;
    v58_.v58 = v23 | 1;
  }
  else {
    v22 = (char*)&v58_.v58 + 1;
    LOBYTE(v58_.v58) = 2 * v20;
    if (v20 == 0) {
      goto LABEL_48;
    }
  }
  memmove_alt1((__int64)v22, v19 + 16, v21);
LABEL_48:
  v22[v21] = 0;
  v24 = v58_.v59;
  v25 = (__int64)v58_.v60;
  if ((v58_.v58 & 1) != 0) {
    v26 = v58_.v60;
  }
  else {
    v26 = (char*)&v58_.v58 + 1;
  }
  if ((v58_.v58 & 1) == 0) {
    v24 = (unsigned __int64)(unsigned __int8)v58_.v58 >> 1;
  }
  if (v24 >= 9) {
    v27 = &v26[v24];
    v28 = (__int64)v26;
    do {
      v29 = memchr_alt1(v28, 227, v24 - 8);
      if (v29 == 0) {
        break;
      }
      if (*(_QWORD*)v29 == 0x533AAF82E3A282E3LL && *(_BYTE*)(v29 + 8) == 95) {
        if ((char*)v29 == v26) {
          *(_BYTE*)(v3[60] + 289LL) = v2;
        }
        break;
      }
      v28 = v29 + 1;
      v24 = (signed __int64)&v27[-v28];
    } while ((__int64)&v27[-v28] >= 9);
  }
  if ((v58_.v58 & 1) != 0 && v25 != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v25);
  }
LABEL_69:
  v32 = v3[61];
  if (v32 == 0) {
    goto LABEL_100;
  }
  v33 = strlen_alt1((const char*)(v32 + 16));
  if (v33 > 0xFFFFFFFFFFFFFFF6LL) {
    goto LABEL_132;
  }
  v34 = v33;
  if (v33 >= 0x17) {
    if ((v33 | 7) == 0x17) {
      v36 = 26;
    }
    else {
      v36 = (v33 | 7) + 1;
    }
    v35 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v36, 16, 0);
    v58_.v59 = v34;
    v58_.v60 = v35;
    v58_.v58 = v36 | 1;
  }
  else {
    v35 = (char*)&v58_.v58 + 1;
    LOBYTE(v58_.v58) = 2 * v33;
    if (v33 == 0) {
      goto LABEL_79;
    }
  }
  memmove_alt1((__int64)v35, v32 + 16, v34);
LABEL_79:
  v35[v34] = 0;
  v37 = v58_.v59;
  v38 = (__int64)v58_.v60;
  if ((v58_.v58 & 1) != 0) {
    v39 = v58_.v60;
  }
  else {
    v39 = (char*)&v58_.v58 + 1;
  }
  if ((v58_.v58 & 1) == 0) {
    v37 = (unsigned __int64)(unsigned __int8)v58_.v58 >> 1;
  }
  if (v37 >= 9) {
    v40 = &v39[v37];
    v41 = (__int64)v39;
    do {
      v42 = memchr_alt1(v41, 227, v37 - 8);
      if (v42 == 0) {
        break;
      }
      if (*(_QWORD*)v42 == 0x533AAF82E3A282E3LL && *(_BYTE*)(v42 + 8) == 95) {
        if ((char*)v42 == v39) {
          *(_BYTE*)(v3[61] + 289LL) = v2;
        }
        break;
      }
      v41 = v42 + 1;
      v37 = (signed __int64)&v40[-v41];
    } while ((__int64)&v40[-v41] >= 9);
  }
  if ((v58_.v58 & 1) != 0 && v38 != 0) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v38);
  }
LABEL_100:
  v45 = v3[62];
  if (v45 == 0) {
    return;
  }
  v46 = strlen_alt1((const char*)(v45 + 16));
  if (v46 > 0xFFFFFFFFFFFFFFF6LL) {
  LABEL_132:
    String_60a1d0();
  }
  v47 = v46;
  if (v46 >= 0x17) {
    if ((v46 | 7) == 0x17) {
      v49 = 26;
    }
    else {
      v49 = (v46 | 7) + 1;
    }
    v48 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v49, 16, 0);
    v58_.v59 = v47;
    v58_.v60 = v48;
    v58_.v58 = v49 | 1;
  }
  else {
    v48 = (char*)&v58_.v58 + 1;
    LOBYTE(v58_.v58) = 2 * v46;
    if (v46 == 0) {
      goto LABEL_110;
    }
  }
  memmove_alt1((__int64)v48, v45 + 16, v47);
LABEL_110:
  v48[v47] = 0;
  v50 = v58_.v59;
  v51 = (__int64)v58_.v60;
  if ((v58_.v58 & 1) != 0) {
    v52 = v58_.v60;
  }
  else {
    v52 = (char*)&v58_.v58 + 1;
  }
  if ((v58_.v58 & 1) == 0) {
    v50 = (unsigned __int64)(unsigned __int8)v58_.v58 >> 1;
  }
  if (v50 >= 9) {
    v53 = &v52[v50];
    v54 = (__int64)v52;
    do {
      v55 = memchr_alt1(v54, 227, v50 - 8);
      if (v55 == 0) {
        break;
      }
      if (*(_QWORD*)v55 == 0x533AAF82E3A282E3LL && *(_BYTE*)(v55 + 8) == 95) {
        if ((char*)v55 == v52) {
          *(_BYTE*)(v3[62] + 289LL) = v2;
        }
        break;
      }
      v54 = v55 + 1;
      v50 = (signed __int64)&v53[-v54];
    } while ((__int64)&v53[-v54] >= 9);
  }
  if ((v58_.v58 & 1) != 0 && v51 != 0) {
    v57 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v57 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v57, v51);
  }
}

__int64 CmdBtlUnit_e7d620(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = result;
  v2 = *(_QWORD*)(*(_QWORD*)(result + 16) + 440LL);
  if (v2 != 0 && (unsigned __int64)(v3 = *(unsigned __int8*)(v2 + 16)) <= 3) {
    v4 = GameData_1b018e8[v3];
  }
  else {
    v4 = 392;
  }
  v5 = GameData_2203490 + 672 +
       ((__int64)*(int*)(GameData_2203490 + 672 + v4) << 7);
  v6 = *(_QWORD*)(v5 + 88);
  if (v6 != 0) {
    v7 = *(_QWORD*)(v5 + 80);
    v8 = *(_QWORD*)(v5 + 88);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                              memory_order_relaxed);
    v9 = std___1___shared_weak_count_lock_alt1(v8);
    if (v9 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v10 = v9;
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak_alt2(v10);
      }
      result = std___1___shared_weak_count___release_weak_alt2(v6);
      if (v7 != 0 && (*(_DWORD*)(v5 + 24) != 0 || *(_DWORD*)(v5 + 12) != 0)) {
        result = CmdBtlUnit_e7c4f0(v1);
        if ((result & 1) == 0) {
          return CmdBtlUnit_e7c6f0_alt1(v1, 1, 0x1.0000000000000p-1f);
        }
      }
    }
    else {
      return std___1___shared_weak_count___release_weak_alt2(v6);
    }
  }
  return result;
}

float CmdBtlUnit_e7d750(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  float v5;
  __int64 v6;
  float v7;
  __int64 v8;
  __int64 v9;
  unsigned __int8* v10;
  unsigned int v11;
  __int64 v12;

  v1 = a1[26];
  if (v1 != 0) {
    v3 = *(_QWORD*)(v1 + 392);
    v4 = *(_QWORD*)(v1 + 400);
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v3 != 0) {
      v5 = *(float*)(*(_QWORD*)(v3 + 11792) + 36LL) *
           (float)(*(float*)(v3 + 32) *
                   (float)(*(float*)(v3 + 40) +
                           (float)((float)(0x1.0000000000000p+0f -
                                           *(float*)(v3 + 40)) *
                                   *(float*)(v1 + 336))));
      if (v4 == 0) {
        goto LABEL_11;
      }
    }
    else {
      v5 = 0x1.0000000000000p+0f;
      if (v4 == 0) {
        goto LABEL_11;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak_alt2(v4);
    }
  }
  else {
    v5 = 0x1.0000000000000p+0f;
  }
LABEL_11:
  v6 = a1[40];
  v7 = 0x0.0p+0f;
  if (v6 != 0) {
    v8 = std___1___shared_weak_count_lock_alt1(v6);
    if (v8 != 0) {
      v9 = a1[39];
      if (v9 != 0) {
        v10 = *(unsigned __int8**)(v9 + 8);
        if (v10 != nullptr) {
          v11 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 +
                                                          64) +
                                               8LL * *v10) +
                                    32LL) -
                1;
          if (v11 <= 4) {
            v7 = GameData_1b92038[(unsigned __int8)v11];
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v12 = v8;
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak_alt2(v12);
      }
    }
  }
  return v5 + v7;
}

void CmdBtlUnit_e7d890(__int64 a1, long double a2)
{

#pragma clang fp contract(off)
  _BOOL4 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  __int64* v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  __int64 v14;

  *(_WORD*)(*(_QWORD*)(a1 + 16) + 20LL) |= 1u;
  if (*(_QWORD*)(a1 + 424) == *(_QWORD*)(a1 + 416)) {
    GameHr_81d740(*(_QWORD*)(a1 + 16), a2);
    v4 = *(_QWORD*)(a1 + 320);
    if (v4 == 0) {
      goto LABEL_11;
    }
  LABEL_5:
    v5 = std___1___shared_weak_count_lock_alt1(v4);
    if (v5 == 0) {
      goto LABEL_11;
    }
    v6 = *(_QWORD*)(a1 + 312);
    if (v6 != 0 && *(_DWORD*)(*(_QWORD*)v6 + 64LL) == 0) {
      if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
        v7 = 0;
        v2 = true;
      }
      else {
        if ((GameData_2216858 & 1) == 0) {
          GameRoutine_8123d0_alt1();
        }
        v7 = 0;
        v2 = (GameData_2216820 & 8) == 0;
      }
    }
    else {
      v7 = 1;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (((v2 | v7) & 1) != 0) {
        goto LABEL_11;
      }
    }
    else {
      v14 = v5;
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak_alt2(v14);
      if (((v2 | v7) & 1) != 0) {
        goto LABEL_11;
      }
    }
    v8 = 1669996436;
    goto LABEL_14;
  }
  v4 = *(_QWORD*)(a1 + 320);
  if (v4 != 0) {
    goto LABEL_5;
  }
LABEL_11:
  if (CmdBtlUnit_e7c280(a1)) {
    v8 = -1101902990;
  }
  else {
    v8 = -574916402;
  }
LABEL_14:
  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
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
  nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
  if ((*(_BYTE*)(a1 + 172) & 1) == 0) {
    *(_BYTE*)(a1 + 172) = 1;
  }
  *(_DWORD*)(a1 + 136) = v8;
  *(_BYTE*)(a1 + 152) = 0;
  *(_BYTE*)(a1 + 156) = 0;
  *(_BYTE*)(a1 + 168) = 0;
  *(_DWORD*)(a1 + 144) = 1028443341;
  *(_BYTE*)(a1 + 140) = 1;
  *(_BYTE*)(a1 + 148) = 1;
  *(_BYTE*)(a1 + 164) = 1;
  *(float*)(a1 + 160) =
      (float)((float)((float)(unsigned __int16)v13 / 0x1.fffe000000000p+15f) *
              0x1.99999a0000000p-3f) +
      0x1.99999a0000000p-2f;
  CmdBtlUnit_e7ada0(a1);
}

__int64 CmdBtlUnit_e7da80(__int64 a1, _QWORD* a2, float a3)
{
  _QWORD* v5;
  __int64 v6;
  __int64 result;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  bool v12;
  unsigned __int64 v13;
  char* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  _WORD* v18;
  __int64 v19;
  int v20;
  __int16 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v28;
  __int64 v29;
  __int64 v30;

  if (*(_BYTE*)(a1 + 520) == 1) {
    if ((*(_BYTE*)(a1 + 488) & 1) != 0 && *(_QWORD*)(a1 + 504) != 0) {
      v5 = a2;
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, *(_QWORD*)(a1 + 504));
      a2 = v5;
    }
    *(_BYTE*)(a1 + 520) = 0;
  }
  result = a1 + 376;
  *(_BYTE*)(a1 + 191) = 0;
  if ((_QWORD*)(a1 + 376) != a2) {
    v8 = *(unsigned __int8*)a2;
    if ((*(_BYTE*)result & 1) != 0) {
      v11 = a2[1];
      v12 = (v8 & 1) == 0;
      v13 = v8 >> 1;
      if (v12) {
        v14 = (char*)a2 + 1;
      }
      else {
        v14 = (char*)a2[2];
      }
      if (v12) {
        v15 = v13;
      }
      else {
        v15 = v11;
      }
      result = SpineModel_64dde0(result, v14, v15);
    }
    else if ((v8 & 1) != 0) {
      result = GameRoutine_64df20(result, a2[2], a2[1]);
    }
    else {
      v9 = *a2;
      v10 = a2[2];
      *(_QWORD*)(a1 + 384) = a2[1];
      *(_QWORD*)(a1 + 392) = v10;
      *(_QWORD*)result = v9;
    }
  }
  v16 = *(unsigned __int8*)(a1 + 376);
  if ((v16 & 1) != 0) {
    v17 = *(_QWORD*)(a1 + 384);
  }
  else {
    v17 = v16 >> 1;
  }
  if (v17 == 0) {
    result = CmdBtlUnit_e7c280_alt1(a1);
    v18 = &GameData_1abbaec;
    if ((result & 1) != 0) {
      v18 = &GameData_1aa1728;
    }
    if ((*(_BYTE*)(a1 + 376) & 1) != 0) {
      *(_QWORD*)(a1 + 384) = 6;
      v19 = *(_QWORD*)(a1 + 392);
    }
    else {
      *(_BYTE*)(a1 + 376) = 12;
      v19 = a1 + 377;
    }
    v20 = *(_DWORD*)v18;
    v21 = v18[2];
    *(_BYTE*)(v19 + 6) = 0;
    *(_DWORD*)v19 = v20;
    *(_WORD*)(v19 + 4) = v21;
  }
  v22 = *(_QWORD*)(*(_QWORD*)(a1 + 208) + 88LL);
  if (v22 != 0) {
    v23 = *(_QWORD*)(v22 + 32);
    v24 = (*(_BYTE*)(a1 + 376) & 1) != 0 ? *(_QWORD*)(a1 + 392) : a1 + 377;
    if (v23 != 0) {
      v25 = *(_QWORD*)(v23 + 8);
      v26 = *(_QWORD*)(v22 + 40);
      if (v25 != -1 && v26 != 0) {
        v29 = *(_QWORD*)(v26 + 392);
        v28 = *(_QWORD*)(v26 + 400);
        if (v28 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v30 = v24;
            (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
            std___1___shared_weak_count___release_weak_alt1(v28);
            v24 = v30;
          }
        }
        result = GameRoutine_10adb80(v29 + 1432, v24);
        if ((result & 0x80000000) == 0) {
          return GameRoutine_10b2280(v22, (unsigned int)result, a3);
        }
      }
    }
  }
  return result;
}

__int64 CmdBtlUnit_e7dc80(__int64 result, _QWORD* a2)
{
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  char* v12;
  unsigned __int64 v13;

  if (*(_BYTE*)(result + 32) == 1) {
    if ((_QWORD*)result != a2) {
      v3 = *(unsigned __int8*)a2;
      if ((*(_BYTE*)result & 1) != 0) {
        v9 = (v3 & 1) == 0;
        v10 = v3 >> 1;
        v11 = result;
        if (v9) {
          v12 = (char*)a2 + 1;
        }
        else {
          v12 = (char*)a2[2];
        }
        if (v9) {
          v13 = v10;
        }
        else {
          v13 = a2[1];
        }
        SpineModel_64dde0(result, v12, v13);
      }
      else {
        if ((v3 & 1) == 0) {
          v4 = *a2;
          v5 = a2[2];
          *(_QWORD*)(result + 8) = a2[1];
          *(_QWORD*)(result + 16) = v5;
          *(_QWORD*)result = v4;
          goto LABEL_19;
        }
        v11 = result;
        GameRoutine_64df20(result, a2[2], a2[1]);
      }
      result = v11;
    }
  LABEL_19:
    *(_QWORD*)(result + 24) = a2[3];
    return result;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v8 = result;
    fw_text_String_CopyTerminated(result, a2[2], a2[1]);
    result = v8;
  }
  else {
    v6 = *a2;
    v7 = a2[2];
    *(_QWORD*)(result + 8) = a2[1];
    *(_QWORD*)(result + 16) = v7;
    *(_QWORD*)result = v6;
  }
  *(_QWORD*)(result + 24) = a2[3];
  *(_BYTE*)(result + 32) = 1;
  return result;
}

__attribute__((swiftcall)) void CmdBtlUnit_e7dd50(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  struct {
    __int64 v10;
    int v11;
  } v10_;

  *(_QWORD*)a3 = 0;
  *(_DWORD*)(a3 + 8) = 0x2000;
  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 208) + 136LL);
  if (v5 != 0) {
    if ((*(_BYTE*)a2 & 1) != 0) {
      v6 = *(_QWORD*)(a2 + 16);
    }
    else {
      v6 = a2 + 1;
    }
    if (GameData_21ec7b0 != 0 && (v7 = *(_QWORD*)(GameData_21ec7b0 + 8)) != 0 &&
            (*(_BYTE*)(v7 + 113) & 0x80) != 0 ||
        (snd_isActive_100100_alt1((__int64*)(v5 + 104)) & 1) != 0) {
      v10_.v10 = 0;
      v10_.v11 = 0x2000;
    }
    else {
      CharacterSound_1095750_alt1((void*)((__int64)&v10_.v10), v5,
                                  "V_AV_<VoiceID>_<Arg>", v6,
                                  0x1.0000000000000p+0f);
      GameRoutine_112180_alt1(v5 + 104, (__int64)&v10_.v10);
      v10_.v10 = 0;
      v10_.v11 = 0x2000;
      GameRoutine_112180_alt1((__int64)&v10_.v10, v5 + 104);
    }
    GameRoutine_112180_alt1(a3, (__int64)&v10_.v10);
  }
  result = snd_fnd_WeakHandle_isValid_alt1((__int64*)a3);
  if ((result & 1) != 0) {
    v9 = *(_QWORD*)(*(_QWORD*)(a1 + 208) + 88LL);
    if (v9 != 0 && *(_DWORD*)(v9 + 96) <= 1u) {
      GameRoutine_112180_alt1(v9 + 320, a3);
      {
        GameRoutine_a19f00_alt1(v9 + 272, v9 + 320);
        return;
      }
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void CmdBtlUnit_e7de70(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  _QWORD v9[2];

  *(_QWORD*)a3 = 0;
  *(_DWORD*)(a3 + 8) = 0x2000;
  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 208) + 136LL);
  if (v5 != 0) {
    if ((*(_BYTE*)a2 & 1) != 0) {
      v6 = *(_QWORD*)(a2 + 16);
    }
    else {
      v6 = a2 + 1;
    }
    CharacterSound_1095750_alt1((void*)v9, v5, (const char*)v6, 0, 1.0f);
    GameRoutine_112180(a3, (__int64)v9);
  }
  result = snd_fnd_WeakHandle_isValid(a3);
  if ((result & 1) != 0) {
    v8 = *(_QWORD*)(*(_QWORD*)(a1 + 208) + 88LL);
    if (v8 != 0 && *(_DWORD*)(v8 + 96) <= 1u) {
      GameRoutine_112180(v8 + 320, a3);
      {
        GameRoutine_a19f00(v8 + 272, v8 + 320);
        return;
      }
    }
  }
  {
    result;
    return;
  }
}

__int64 CmdBtlUnit_e7df20(__int64 result, char a2, float a3)
{

#pragma clang fp contract(off)
  bool v3;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  char v17;

  if ((*(_BYTE*)(result + 189) & 1) != 0) {
    return result;
  }
  *(float*)(result + 192) = a3;
  *(_BYTE*)(result + 189) = 1;
  v5 = *(_QWORD*)(result + 320);
  if ((a2 & 1) == 0) {
    v6 = 869686455;
    if (v5 == 0) {
      goto LABEL_27;
    }
    v12 = result;
    v13 = std___1___shared_weak_count_lock_alt1(*(_QWORD*)(result + 320));
    if (v13 == 0) {
      v5 = 0;
      result = v12;
      goto LABEL_27;
    }
    v14 = *(_QWORD*)(v12 + 312);
    v15 = v13;
    result = v12;
    if (v14 != 0 && *(_DWORD*)(*(_QWORD*)v14 + 64LL) == 0) {
      if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
        v3 = false;
        v16 = 0;
      }
      else {
        if ((GameData_2216858 & 1) == 0) {
          goto LABEL_40;
        }
        v16 = 0;
        v3 = (GameData_2216820 & 8) != 0;
      }
    }
    else {
      v16 = 1;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak_alt2(v15);
      result = v12;
    }
    v5 = 0;
    if ((v16 & 1) == 0) {
      if (v3) {
        v6 = -304822991;
      }
      else {
        v6 = 869686455;
      }
    }
    goto LABEL_27;
  }
  v6 = -1080537169;
  if (v5 == 0) {
    goto LABEL_13;
  }
  v7 = result;
  v8 = std___1___shared_weak_count_lock_alt1(*(_QWORD*)(result + 320));
  if (v8 == 0) {
    v5 = 0x100000000LL;
    result = v7;
    goto LABEL_27;
  }
  v9 = *(_QWORD*)(v7 + 312);
  v10 = v8;
  result = v7;
  if (v9 == 0 || *(_DWORD*)(*(_QWORD*)v9 + 64LL) != 0) {
    v11 = 1;
    goto LABEL_8;
  }
  if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
    v3 = false;
    v11 = 0;
    goto LABEL_8;
  }
  if ((GameData_2216858 & 1) == 0) {
  LABEL_40:
    GameRoutine_8123d0_alt1();
  }
  v11 = 0;
  v3 = (GameData_2216820 & 8) != 0;
LABEL_8:
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if ((v11 & 1) == 0) {
      goto LABEL_10;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak_alt2(v10);
    result = v7;
    if ((v11 & 1) == 0) {
    LABEL_10:
      if (v3) {
        v6 = -1672613899;
      }
      else {
        v6 = -1080537169;
      }
    }
  }
LABEL_13:
  v5 = 0x100000000LL;
LABEL_27:
  v17 = *(_BYTE*)(result + 172);
  *(_BYTE*)(result + 184) = 0;
  if ((v17 & 1) == 0) {
    *(_BYTE*)(result + 172) = 1;
  }
  *(_DWORD*)(result + 144) = v5;
  *(_DWORD*)(result + 136) = v6;
  *(_BYTE*)(result + 152) = 0;
  *(_BYTE*)(result + 156) = 0;
  *(_BYTE*)(result + 160) = 0;
  *(_BYTE*)(result + 164) = 0;
  *(_BYTE*)(result + 140) = 1;
  *(_BYTE*)(result + 148) = BYTE4(v5);
  *(_BYTE*)(result + 168) = a2 & 1;
  CmdBtlUnit_e7ada0(result);
  return CmdbtlPartyNatives_e9cce0_alt1(GameData_2203490);
}

__int64 CmdBtlUnit_e7e180(__int64 a1)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  struct {
    __int64 v24;
    __int64 v25;
  } v24_;

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 440LL);
  if (v3 != 0 && (unsigned __int64)(v4 = *(unsigned __int8*)(v3 + 16)) <= 3) {
    v5 = GameData_1b018e8[v4];
  }
  else {
    v5 = 392;
  }
  if (*(_DWORD*)(GameData_2203490 + 672 + v5) == 0) {
    if (v3 != 0 && (unsigned __int64)(v7 = *(unsigned __int8*)(v3 + 16)) <= 3) {
      v8 = GameData_1b01768[v7];
    }
    else {
      v8 = 3;
    }
    v9 = GameData_2203490 + 672 + (v8 << 7);
    v10 = *(__int64**)(v9 + 40);
    v11 = *(__int64**)(v9 + 48);
    if (v10 == v11) {
      goto LABEL_14;
    }
    while (1) {
      v12 = *v10;
      if (*v10 == a1) {
        break;
      }
      v10 += 2;
      if (v10 == v11) {
        goto LABEL_14;
      }
    }
    v13 = v10[1];
    if (v13 == 0) {
      goto LABEL_15;
    }
    v16 = v10[1];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
    v17 = std___1___shared_weak_count_lock_alt1(v16);
    std___1___shared_weak_count___release_weak_alt2(v13);
    if (v17 == 0) {
    LABEL_14:
      LOBYTE(v13) = 0;
    }
    else {
      v18 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 440LL);
      if (v18 != 0 &&
          (unsigned __int64)(v19 = *(unsigned __int8*)(v18 + 16)) <= 3) {
        v20 = GameData_1b01768[v19];
      }
      else {
        v20 = 3;
      }
      v24_.v24 = v12;
      v24_.v25 = v17;
      v21 = GameData_2203490 + (v20 << 7);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                memory_order_relaxed);
      v22 = CmdBtlParty_e774a0(v21 + 672, &v24_.v24);
      v23 = v24_.v25;
      LOBYTE(v13) = v22;
      if (v24_.v25 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v24_.v25 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
        std___1___shared_weak_count___release_weak_alt2(v23);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak_alt2(v17);
      }
    }
  LABEL_15:
    v6 = v13 ^ 1;
    return v6 & 1;
  }
  v6 = 0;
  return v6 & 1;
}

__attribute__((swiftcall)) void CmdBtlUnit_e7e340(PSEUDO_X8 x8_, __int64 result,
                                                  int a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _WORD* v7;
  __int64 i;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;
  int v17;
  __int64 v18;

  switch (a2) {
  case 2:
    v15_.v15[0] = GameData_1fe82c8;
    v15_.v15[1] = result;
    v15_.v16 = v15_.v15;
    v9 = game_cmdbtl_CmdBtlUnit_FindLinkItem(result, (__int64)v15_.v15);
    result = (__int64)v15_.v16;
    if (v15_.v16 == v15_.v15) {
      v10 = 32;
    }
    else {
      if (v15_.v16 == nullptr) {
      LABEL_20:
        if (v9 == 0) {
          break;
        }
        v12 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
        v12[1] = 0;
        v12[2] = 0;
        *v12 = GameData_1fe8178;
        v13 = 2;
      LABEL_30:
        a3[1] = (__int64)v12;
        v12[4] = v9;
        v12[3] = v13;
        result = (__int64)(v12 + 3);
        *a3 = result;
        {
          result;
          return;
        }
      }
      v10 = 40;
    }
    result = (*(__int64 (**)(__int64))(*v15_.v16 + v10))((__int64)v15_.v16);
    goto LABEL_20;
  case 1:
    v6 = *(_QWORD*)(result + 16);
    v18 = 0;
    v17 = 0;
    v15_.v15[0] = GameData_1fe8248;
    v15_.v15[1] = &v18;
    v15_.v15[2] = &v17;
    v15_.v15[3] = result;
    v15_.v16 = v15_.v15;
    game_UnitItemList_EachItem_alt1((_WORD*)(v6 + 828), (__int64)v15_.v15);
    v7 = (_WORD*)(v6 + 876);
    for (i = 24; i != 0; --i) {
      if (*v7 != 0) {
        if (v15_.v16 == nullptr) {
          GameRoutine_60a310_alt1();
        }
        (*(void (**)(_QWORD*, _WORD*))(*v15_.v16 + 48LL))(v15_.v16, v7);
      }
      v7 += 4;
    }
    result = (__int64)v15_.v16;
    if (v15_.v16 == v15_.v15) {
      v11 = 32;
    }
    else {
      if (v15_.v16 == nullptr) {
      LABEL_28:
        v9 = v18;
        if (v18 == 0) {
          break;
        }
        v12 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
        v12[1] = 0;
        v12[2] = 0;
        *v12 = GameData_1fe8178;
        v13 = 1;
        goto LABEL_30;
      }
      v11 = 40;
    }
    result = (*(__int64 (**)(__int64))(*v15_.v16 + v11))((__int64)v15_.v16);
    goto LABEL_28;
  case 0:
    v15_.v15[0] = GameData_1fe82c8;
    v15_.v15[1] = result;
    v15_.v16 = v15_.v15;
    v4 = game_cmdbtl_CmdBtlUnit_FindLinkItem(result, (__int64)v15_.v15);
    result = (__int64)v15_.v16;
    if (v15_.v16 == v15_.v15) {
      v5 = 32;
    }
    else {
      if (v15_.v16 == nullptr) {
        goto LABEL_24;
      }
      v5 = 40;
    }
    result = (*(__int64 (**)(__int64))(*v15_.v16 + v5))((__int64)v15_.v16);
  LABEL_24:
    if (v4 != 0) {
      v14 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
      v14[1] = 0;
      v14[2] = 0;
      a3[1] = (__int64)v14;
      v14[4] = v4;
      *v14 = GameData_1fe8178;
      v14[3] = 0;
      result = (__int64)(v14 + 3);
      *a3 = result;
      {
        result;
        return;
      }
    }
    break;
  default:
    break;
  }
  *a3 = 0;
  a3[1] = 0;
  {
    result;
    return;
  }
}

__int64 game_cmdbtl_CmdBtlUnit_FindLinkItem(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _BYTE* v4;
  _QWORD* v5;
  _QWORD* v6;
  _WORD* v7;
  __int64 i;
  __int64 v9;
  struct {
    _BYTE v11[32];
    _BYTE* v12;
  } v11_;
  struct {
    char v13[32];
    _QWORD* v14;
  } v13_;
  __int64 v15;

  v2 = *(_QWORD*)(a1 + 16);
  v3 = *(_QWORD*)(a2 + 32);
  v15 = 0;
  if (v3 != 0) {
    if (v3 == a2) {
      v11_.v12 = v11_.v11;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v3 + 24LL))(v3, v11_.v11);
      v4 = v11_.v12;
    }
    else {
      v4 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      v11_.v12 = v4;
    }
  }
  else {
    v4 = nullptr;
    v11_.v12 = nullptr;
  }
  v5 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v6 = v5;
  v5[2] = &v15;
  *v5 = GameData_1fe81c8;
  if (v4 != nullptr) {
    if (v4 == v11_.v11) {
      v5[8] = v5 + 4;
      (*(void (**)(_BYTE*))(*(_QWORD*)v4 + 24LL))(v4);
    }
    else {
      v5[8] = v4;
      v11_.v12 = nullptr;
    }
  }
  else {
    v5[8] = 0;
  }
  v13_.v14 = v6;
  game_UnitItemList_EachItem_alt1((_WORD*)(v2 + 828), (__int64)v13_.v13);
  v7 = (_WORD*)(v2 + 876);
  for (i = 24; i != 0; --i) {
    if (*v7 != 0) {
      (*(void (**)(_QWORD*, _WORD*))(*v6 + 48LL))(v6, v7);
    }
    v7 += 4;
  }
  (*(void (**)(_QWORD*))(*v6 + 40LL))(v6);
  if (v11_.v12 == v11_.v11) {
    v9 = 32;
    goto LABEL_19;
  }
  if (v11_.v12 != nullptr) {
    v9 = 40;
  LABEL_19:
    (*(void (**)(__int64))(*(_QWORD*)v11_.v12 + v9))((__int64)v11_.v12);
  }
  return v15;
}

__int64 CmdBtlUnit_e7e730(_QWORD* a1, _QWORD* a2)
{
  _QWORD* v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  _QWORD v11[2];
  int v12;

  v2 = (_QWORD*)a1[32];
  if ((unsigned __int64)v2 >= a1[33]) {
    v7 = Manager_66cc20(a1 + 31, a2);
  }
  else if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(a1[32], a2[2], a2[1]);
    v7 = (__int64)(v2 + 3);
  }
  else {
    v5 = *a2;
    v6 = a2[2];
    v7 = (__int64)(v2 + 3);
    v2[1] = a2[1];
    v2[2] = v6;
    *v2 = v5;
  }
  a1[32] = v7;
  v8 = a1[2];
  v12 = 0;
  if ((*(_BYTE*)a2 & 1) != 0) {
    v9 = (char*)a2[2];
  }
  else {
    v9 = (char*)a2 + 1;
  }
  v11[1] = v9;
  v11[0] = game_HashString(v9);
  GameRoutine_842b40(&v12, v11);
  return Unit_6ca760(v8, &v12);
}

void CmdBtlUnit_e7e800(_QWORD* a1)
{
  char* v1;
  char* v2;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13[2];
  unsigned int v14;

  v1 = (char*)a1[31];
  v2 = (char*)a1[32];
  if (v1 != v2) {
    do {
      v4 = *v1;
      v5 = *((_QWORD*)v1 + 2);
      v6 = a1[2];
      v14 = 0;
      if ((v4 & 1) != 0) {
        v7 = v5;
      }
      else {
        v7 = (__int64)(v1 + 1);
      }
      v13[1] = v7;
      v13[0] = game_HashString_alt1(v7);
      GameRoutine_842b40_alt1(&v14, v13);
      Unit_6cb080_alt1(v6, &v14);
      v1 += 24;
    } while (v1 != v2);
    v1 = (char*)a1[31];
    v2 = (char*)a1[32];
  }
  if (v1 != v2) {
    v8 = v2;
    v9 = fw_memory_g_heap_manager_ptr;
    do {
      v10 = *(v8 - 24);
      v8 -= 24;
      if ((v10 & 1) != 0) {
        v11 = *((_QWORD*)v2 - 1);
        if (v11 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v9 + v12, v11);
        }
      }
      v2 = v8;
    } while (v8 != v1);
  }
  a1[32] = v1;
}

__int64 game_cmdbtl_CmdBtlUnit_CreateCharacter_lambda2_Invoke(__int64 a1,
                                                              __int64* a2)
{
  __int64 v2;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 8);
  result = GameRoutine_e7a740(v2, *a2);
  *(_DWORD*)(v2 + 444) = 0;
  return result;
}

__n128 game_cmdbtl_CmdBtlUnit_SetupLookToEnemy_lambda0_Invoke(__int64 a1,
                                                              __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  float v4;
  __n128 result;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v4 = vabds_f32(**(float**)(a1 + 8), *(float*)(v2 + 128));
  PSEUDO_LOW_LANE128(result, n128_u32, **(_DWORD**)(a1 + 16));
  if (v4 < LANES128(result).n128_f32[0]) {
    v6 = *(_QWORD**)(a1 + 24);
    if (v3 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                memory_order_relaxed);
    }
    v7 = v6[1];
    *v6 = v2;
    v6[1] = v3;
    if (v7 != 0) {
      v8 = a1;
      result = std___1___shared_weak_count___release_weak_alt1(v7);
      a1 = v8;
    }
    **(float**)(a1 + 16) = v4;
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak_alt1(v3);
  }
  return result;
}

__int64 game_cmdbtl_CmdBtlUnit_FindLinkItem_lambda0_Invoke(__int64 a1,
                                                           __int64 a2)
{
  __int64 v3;
  __int64 result;

  v3 = *(_QWORD*)(a1 + 64);
  if (v3 == 0) {
    GameRoutine_60a310(0, a2);
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 48LL))(v3);
  if ((result & 1) != 0 && (*(_BYTE*)(a2 + 3) & 1) != 0) {
    **(_QWORD**)(a1 + 16) = a2;
  }
  return result;
}

__int64

game_cmdbtl_CmdBtlUnit_GetLinkItem_Heal_lambda0_Invoke(__int64 a1,
                                                       unsigned __int16* a2)
{
  __int64 result;
  _BYTE* v5;
  int v6;

  result = GameRoutine_6e8e50(a2, *(_QWORD*)(*(_QWORD*)(a1 + 24) + 16LL));
  if ((result & 1) != 0) {
    v5 = *(_BYTE**)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2);
    if ((v5[336] & 0x40) == 0 && v5[73] == 2) {
      v6 = (unsigned __int8)v5[88] >> ((*((_BYTE*)a2 + 3) & 8) != 0);
      if (**(_DWORD**)(a1 + 16) < v6) {
        **(_QWORD**)(a1 + 8) = a2;
        **(_DWORD**)(a1 + 16) = v6;
      }
    }
  }
  return result;
}

__int64

game_cmdbtl_CmdBtlUnit_GetLinkItem_Attack_lambda0_Invoke(__int64 a1,
                                                         unsigned __int16* a2)
{
  unsigned __int8* v2;
  unsigned int v3;
  unsigned __int16* v6;
  char v7;

  if (*a2 == 0) {
    return 0;
  }
  v2 = *(unsigned __int8**)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * *a2);
  v3 = v2[72];
  if (v3 > 7 || v2[73] != 1) {
    return 0;
  }
  if (v3 - 5 <= 1) {
    if ((*((_DWORD*)a2 + 1) & 0xF) * (unsigned int)v2[87] - 1 >=
            *((unsigned __int8*)a2 + 2) &&
        (*((_BYTE*)a2 + 3) & 0x20) == 0) {
      v6 = a2;
      v7 = game_Unit_Unknown6c90c0(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL));
      a2 = v6;
      if ((v7 & 1) != 0) {
        return UnitItem_6e8bc0(a2);
      }
    }
    return 0;
  }
  if ((*((_BYTE*)a2 + 3) & 0x20) != 0) {
    return 0;
  }
  return UnitItem_6e8bc0(a2);
}

#pragma GCC visibility pop
