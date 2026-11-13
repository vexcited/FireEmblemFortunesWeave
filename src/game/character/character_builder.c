#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 AnimCtrlModule_a77d60(_QWORD, _QWORD);
__int64 GameRoutine_1084b20(_QWORD, _QWORD);
__int64 GameRoutine_1084ea0(_QWORD, _QWORD);
__int64 GameRoutine_1085140(_QWORD, _QWORD);
__int64 GameRoutine_10873c0(_QWORD);
__int64 GameRoutine_10877a0(_QWORD);
__int64 GameRoutine_1087ba0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1087f80(_QWORD, _QWORD);
__int64 GameRoutine_10965c0(_QWORD, _QWORD);
__int64 GameRoutine_10a0100(_QWORD, _QWORD);
__int64 GameRoutine_10cbfe0(_QWORD, _QWORD);
__int64 GameRoutine_112aaa0(_QWORD);
__int64 GameRoutine_98f140(_QWORD, _QWORD);
__int64 GameRoutine_a59e60(_QWORD, _QWORD);
__int64 GameRoutine_a64140(_QWORD);
__int64 GameRoutine_a8c0c0(_QWORD);
__int64 GameRoutine_ce3010(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_2167580;
extern _UNKNOWN GameData_21a5680;
extern _UNKNOWN GameData_21f4d48;
extern _UNKNOWN GameData_2203510;
extern _UNKNOWN GameData_220f868;
extern _UNKNOWN GameData_2235638;
extern _UNKNOWN GameData_2235668;
extern _UNKNOWN GameData_22356c8;
extern _UNKNOWN* GameData_212c2f8;
extern _UNKNOWN* GameData_212d4e8;
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN* GameData_212df28;
extern _UNKNOWN* GameData_212eab0;
extern _UNKNOWN* GameData_212ed90;
extern _UNKNOWN* GameData_212eda0;
extern _UNKNOWN* GameData_212fa30;
extern _UNKNOWN* GameData_212fe90;
extern _UNKNOWN* GameData_212fef8;
extern _UNKNOWN* GameData_212ff08;
extern _UNKNOWN* GameData_212ff18;
extern _UNKNOWN* GameData_212ff28;
extern _UNKNOWN* GameData_212ff38;
extern _UNKNOWN* GameData_212ff48;
extern __int128 GameData_1a83160;
extern __int128 GameData_21a5670;
extern __int64 (*game_character_CharacterAim_vtable[])();
extern __int64 (*game_character_CharacterEffect_vtable[])();
extern __int64 (*game_character_CharacterSelfie_vtable[])();
extern __int64 (*game_character_WeaponHoldModule_vtable[])();
extern __int64 GameData_212d270;
extern __int64 GameData_212e370[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212fe80;
extern __int64* GameData_212fee0[2];
extern __int64* GameData_212ff50[18];
extern __int64* GameData_212ff58[17];
extern __int64* GameData_212ff60[16];
extern __int64* GameData_212ff68[15];
extern __int64* GameData_212ff70[14];
extern int GameData_21f4d44;
extern int GameData_2203508;
extern int GameData_220f860;
extern int GameData_2235630;
extern int GameData_2235660;
extern int GameData_22356c0;
extern int* GameData_212d4e0;
extern int* GameData_212df08;
extern int* GameData_212ed88;
extern int* GameData_212ed98;
extern int* GameData_212fa28;
extern int* GameData_212fe88;
extern int* GameData_212fef0;
extern int* GameData_212ff00;
extern int* GameData_212ff10;
extern int* GameData_212ff20;
extern int* GameData_212ff30;
extern int* GameData_212ff40;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
void __attribute__((noreturn)) GameRoutine_98f290(_QWORD);
__int64 CharacterBuilder_107b580(_QWORD* a1);
__int64 CharacterBuilder_107b620(__int64 a1);
__int64 CharacterBuilder_107ba20(__int64 a1);
__int64 CharacterBuilder_107be40(__int64 a1);
__int64 CharacterBuilder_107c220(__int64 a1);
__int64 CharacterBuilder_107c700(__int64 a1);
__int64 CharacterBuilder_107cb40(__int64 a1);
__int64 CharacterBuilder_107d0c0(__int64 a1);
__int64 CharacterBuilder_107d480(__int64 a1);
__int64 CharacterBuilder_107d880(__int64 a1);
__int64 CharacterBuilder_107dca0(__int64 a1);
__int64
CharacterBuilder_10823c0_alt1(_QWORD* a1) __asm__("CharacterBuilder_10823c0");
__int64 CharacterBuilder_1082900(__int64 a1);
__int64 CharacterBuilder_1082ce0(__int64 a1);
__int64 CharacterBuilder_1083180(__int64 a1);
__int64 CharacterBuilder_1083580(__int64 result, __int64 a2, __int64 a3);
__int64 CharacterBuilder_1083780(__int64 a1, _BYTE* a2);
_QWORD* CharacterBuilder_1083bf0(_QWORD* result);
__int64 CharacterBuilder_1083e90(_QWORD* a1, __int64 a2);
_QWORD* CharacterBuilder_1084020(_QWORD* result);
__int64 CharacterBuilder_1084400(__int64 result, int a2);
__int64 CharacterBuilder_1084780(__int64 result);
__int64 CharacterBuilder_1084a50(__int64 a1, _BYTE* a2);
__int64 CharacterBuilder_1084db0(__int64 a1, _BYTE* a2);
__int64 CharacterBuilder_1085070(__int64 a1, _BYTE* a2);
__int64 GameRoutine_1078600(_QWORD*, __int64*, __int64, int);
__int64 GameRoutine_193adc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a6b620(_QWORD, _QWORD, long double);
__int64 GameRoutine_a993a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_bd92c0(void);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_21ec9a0;
extern _UNKNOWN GameData_220f840;
extern _UNKNOWN GameData_2235628;
extern _UNKNOWN GameData_22356a8;
extern __int64 (*GameData_2007178[])();
extern __int64 (*GameData_2007208[])();
extern __int64 (*GameData_2007328[])();
extern __int64 (*GameData_20075d8[])();
extern __int64 (*GameData_212e510)();
extern __int64 GameData_2132398[3];
extern __int64 GameData_2235760;
extern __int64 GameData_2235768;
extern int GameData_21ec998;
extern int GameData_220f838;
extern int GameData_2235620;
extern int GameData_22356a0;
__n128
CharacterBuilder_107e090_alt1(__int64 a1,
                              __int64 a2) __asm__("CharacterBuilder_107e090");
void game_character_CharacterBuilder_FullbodyCleanup_lambda0_Invoke(__int64 a1,
                                                                    __int64 a2);
void game_character_CharacterBuilder_LateUpdate_lambda0_Invoke(__int64 a1,
                                                               __int64 a2);
void game_character_CharacterBuilder_LateUpdate_lambda1_Invoke(__int64 a1,
                                                               __int64 a2);
void game_character_CharacterBuilder_BuildImpl_lambda3_Invoke(__int64 a1,
                                                              __int64 a2);
__int64 game_character_CharacterBuilder_BuildImpl_lambda0_Invoke(__int64 result,
                                                                 __int64 a2);
void game_character_CharacterBuilder_CommitMaterialParams_lambda1_Invoke(
    __int64 a1, __int64 a2);
__int64 CharacterBuilder_1089270(__int64 result, _BYTE* a2);
void CharacterBuilder_1089370(__int64 a1, _DWORD* a2);
void game_character_CharacterBuilder_CommitMaterialParams_lambda2_Invoke(
    __int64 a1, __int64 a2);
__int64 CharacterBuilder_1089680(__int64 a1, _QWORD* a2);
__int64 game_character_CharacterBuilder_SetupLOD_lambda0_Invoke_alt1(
    __int64 result, __int64 a2,
    long double
        a3) __asm__("game_character_CharacterBuilder_SetupLOD_lambda0_Invoke");
_QWORD* game_character_CharacterBuilder_SetMaterialColor_lambda0_CloneInto(
    _QWORD* result, _QWORD* a2);
float game_character_CharacterBuilder_SetDitherAlpha_lambda1_Invoke(__int64 a1,
                                                                    __int64 a2);
extern __int64 (*GameData_2006dc0[])();
extern __int64 (*GameData_2006e40[])();
__int64 game_character_CharacterBuilder_LateUpdate(__int64 result);
__int64 CharacterAppearance_1074940(__int64);
__int64 GameRoutine_107ec40(__int64);
__int64 GameRoutine_10adb80(_DWORD*, _BYTE*);
__int64 GameRoutine_10e8800(__int64*, __int64);
__int64 GameRoutine_a867a0(__int64 result);
__int64 GameRoutine_d31080(__int64 result);
__int64 Model_a661a0(__int64, int, __int64, int);
__n128 GameRoutine_10e8690(_QWORD*);
bool CharacterAnimator_107aaa0(__int64, int);
bool GameRoutine_108cb20(int);
extern _QWORD GameData_212d168;
extern __int64 (*GameData_1fc0970[])();
extern __int64 (*GameData_200d938[])();
float CharacterAnimator_1079580(__int64, int, long double, float, float);
unsigned __int64 GameRoutine_d2b5f0(__int64);
void CharacterBuilder_1083840(__int64);
void CharacterFacialController_10b2280(__int64, unsigned int, float);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__int64 CharacterBuilder_Unknown5_alt1(__int64 a1, long double a2) __asm__(
    "CharacterBuilder_Unknown5");
__int64 WeaponHoldModule_112aaa0(__int64);
__int64 wld_Crc32_alt1(int, unsigned __int8*,
                       unsigned __int64) __asm__("wld_Crc32");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
_QWORD* GameRoutine_a6b620_alt1(_QWORD* result,
                                _QWORD*) __asm__("GameRoutine_a6b620");
_QWORD* GameRoutine_a993a0_alt1(__int64, __int64*,
                                __int64*) __asm__("GameRoutine_a993a0");
__int64 GameRoutine_10965c0_alt1(__int64 result,
                                 __int64) __asm__("GameRoutine_10965c0");
__int64 GameRoutine_10cbfe0_alt1(__int64,
                                 __int64) __asm__("GameRoutine_10cbfe0");
__int64 GameRoutine_193adc0_alt1(_QWORD*, __int64,
                                 char) __asm__("GameRoutine_193adc0");
__int64 GameRoutine_ce3010_alt1(__int64, __int64, __int64, unsigned int,
                                unsigned int) __asm__("GameRoutine_ce3010");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 wld_ClothColliderModule_ClothColliderModule(__int64, __int64);
extern __int64 (*gfx_a9c5a0_ptr)();
void GameRoutine_98f140_alt1(__int64*, _QWORD*) __asm__("GameRoutine_98f140");
void GameRoutine_a8c0c0_alt1(__int64) __asm__("GameRoutine_a8c0c0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_98f290_alt1() __asm__("GameRoutine_98f290");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
_QWORD* CharacterBuilder_107e090(_QWORD* result, __int64 a2);
__int64 CharacterBuilder_10823c0(__int64* a1);
__int64 game_character_CharacterBuilder_SetupLOD_lambda0_Invoke(__int64 result,
                                                                __int64 a2);
__int64 game_character_CharacterAppearance_LoadAsync(__int64);
extern _UNKNOWN* GameData_212fea0;
extern __int64 (*GameData_2006b00[])();
extern __int64 (*game_character_CharacterBuilder_vtable[])();
extern __int64 (*kaneko_WPHolder_vtable[])();
extern __int64 fw_memory_g_heap_manager;
extern int* GameData_212fe98;
void LocatorModule_a7c2c0(_QWORD*, __int64);
__int64 CharacterBuilder_Destructor(_QWORD* a1);
void CharacterBuilder_107e140(__int64 a1, __int64* a2, __int64 a3);
__int64 GameHr_1083840(__int64 result);
__int64 GameHr_10e8690(_QWORD*);
__int64 GameHr_a867a0(__int64 result);
__int64 GameHr_d31080(__int64 result);
__int64 CharacterBuilder_Unknown5(__int64 a1);

__int64 CharacterBuilder_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD*** v8;
  _QWORD*** v9;
  _QWORD** v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  __int64 result;
  __int64 v33;

  *a1 = game_character_CharacterBuilder_vtable;
  a1[3] = GameData_2006b00;
  v2 = a1[77];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = a1[75];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  v4 = a1[73];
  a1[73] = 0;
  if (v4 != 0) {
    v5 = *(_QWORD*)(v4 + 8);
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      v6 = v4;
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak_alt1(v5);
      v4 = v6;
    }
    v7 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v7, v4);
  }
  v8 = (_QWORD***)a1[66];
  v9 = (_QWORD***)a1[67];
  if (v8 != v9) {
    do {
      v10 = *v8++;
      LocatorModule_a7c2c0(*v10, (__int64)v10);
    } while (v8 != v9);
    v8 = (_QWORD***)a1[66];
  }
  a1[67] = v8;
  if (v8 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v11,
                                       (__int64)v8);
  }
  v12 = a1[65];
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak_alt1(v12);
  }
  v13 = a1[50];
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak_alt1(v13);
  }
  v14 = a1[41];
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak_alt1(v14);
  }
  v15 = a1[39];
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak_alt1(v15);
  }
  v16 = a1[34];
  if (v16 == 0) {
    goto LABEL_47;
  }
  v17 = a1[35];
  if (v16 == v17) {
  LABEL_44:
    v22 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v22, v16);
    goto LABEL_47;
  }
  do {
    v18 = *(_QWORD**)(v17 - 16);
    if ((_QWORD*)(v17 - 48) == v18) {
      v19 = 32;
    }
    else {
      if (v18 == nullptr) {
        goto LABEL_41;
      }
      v19 = 40;
    }
    (*(void (**)(__int64))(*v18 + v19))((__int64)v18);
  LABEL_41:
    v20 = *(_QWORD*)(v17 - 64);
    if (v20 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v20);
    }
    v17 -= 80;
  } while (v17 != v16);
  v21 = a1[34];
  a1[35] = v16;
  v16 = v21;
  if (v21 != 0) {
    goto LABEL_44;
  }
LABEL_47:
  v23 = a1[30];
  if (v23 == 0) {
    goto LABEL_62;
  }
  v24 = a1[31];
  if (v23 == v24) {
  LABEL_59:
    v29 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v29, v23);
    goto LABEL_62;
  }
  while (2) {
    v25 = *(_QWORD**)(v24 - 16);
    if ((_QWORD*)(v24 - 48) == v25) {
      v26 = 32;
    LABEL_55:
      (*(void (**)(__int64))(*v25 + v26))((__int64)v25);
    }
    else if (v25 != nullptr) {
      v26 = 40;
      goto LABEL_55;
    }
    v27 = *(_QWORD*)(v24 - 64);
    if (v27 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v27);
    }
    v24 -= 80;
    if (v24 != v23) {
      continue;
    }
    break;
  }
  v28 = a1[30];
  a1[31] = v23;
  v23 = v28;
  if (v28 != 0) {
    goto LABEL_59;
  }
LABEL_62:
  v30 = (_QWORD*)a1[28];
  if (v30 == a1 + 24) {
    v31 = 32;
  LABEL_66:
    (*(void (**)(__int64))(*v30 + v31))((__int64)v30);
  }
  else if (v30 != nullptr) {
    v31 = 40;
    goto LABEL_66;
  }
  result = a1[7];
  a1[3] = kaneko_WPHolder_vtable;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(result);
  }
  v33 = a1[5];
  if (v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
    return std___1___shared_weak_count___release_weak_alt1(v33);
  }
  return result;
}

__int64 CharacterBuilder_107b580(_QWORD* a1)
{
  __int64 v1;
  __int64 result;

  v1 = a1[1];
  a1[8] = CharacterBuilder_107b620(v1);
  a1[9] = CharacterBuilder_107ba20(v1);
  a1[10] = CharacterBuilder_107be40(v1);
  a1[11] = CharacterBuilder_107c220(v1);
  a1[13] = CharacterBuilder_107c700(v1);
  a1[14] = CharacterBuilder_107cb40(v1);
  a1[15] = CharacterBuilder_107d0c0(v1);
  a1[16] = CharacterBuilder_107d480(v1);
  a1[17] = CharacterBuilder_107d880(v1);
  result = CharacterBuilder_107dca0(v1);
  a1[18] = result;
  return result;
}

__int64 CharacterBuilder_107b620(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  _BYTE* v11;
  bool v12;
  __int64* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD v42[2];

  nn_os_LockMutex_alt1((__int64)&GameData_2167580);
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 176, 16, 0);
  GameRoutine_10965c0_alt1(v3, a1);
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 112) = 0;
  *(_QWORD*)(v3 + 120) = 0;
  *(_QWORD*)(v3 + 128) = 0;
  *(_QWORD*)(v3 + 136) = 0;
  *(_QWORD*)(v3 + 144) = 0;
  *(_QWORD*)(v3 + 149) = 0;
  *(_QWORD*)v3 = game_character_CharacterAim_vtable;
  *(_DWORD*)(v3 + 56) = -1;
  *(_DWORD*)(v3 + 160) = -1082130432;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2235638,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_2235638) != 0) {
    GameData_2235630 = wld_Crc32_alt1(0, "CharacterAim", 0xCu);
    __cxa_guard_release_alt1((__int64)&GameData_2235638);
  }
  v4 = *(_QWORD*)(a1 + 504);
  v5 = *(_QWORD*)(a1 + 512);
  v6 = v5;
  LODWORD(v42[0]) = GameData_2235630;
  v42[1] = v3;
  while (v6 != v4) {
    v7 = *(_DWORD*)(v6 - 16);
    v6 -= 16;
    if (v7 == GameData_2235630) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v4 == v5 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v4) <= 0x6F) {
    v8 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v8;
    *(_QWORD*)(a1 + 512) = v8;
    *(_QWORD*)(a1 + 520) = v8 + 112;
    if (v5 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v9, v4);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(a1 + 504), v42);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v10 = *(_BYTE**)(v3 + 8);
    v10[632] = 0;
    v10[664] = 0;
    v10[696] = 0;
    v10[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v11 = *(_BYTE**)(v3 + 8);
    v12 = v11[300] == 3 && v11[301] == 3;
    if (v12 || v11[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }
LABEL_20:
  v13 = *(__int64**)(a1 + 536);
  v14 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v13 >= v14) {
    v16 = *(_QWORD*)(a1 + 528);
    v17 = (char*)v13 - v16;
    v18 = ((__int64)v13 - v16) >> 3;
    v19 = v18 + 1;
    if ((unsigned __int64)(v18 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v20 = v14 - v16;
    if (v20 >> 2 > v19) {
      v19 = v20 >> 2;
    }
    if ((unsigned __int64)v20 >= 0x7FFFFFFFFFFFFFF8LL) {
      v21 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v21 = v19;
    }
    if (v21 != 0) {
      if (v21 >> 61 != 0) {
        goto LABEL_56;
      }
      v22 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v21, 16, 0);
    }
    else {
      v22 = 0;
    }
    v23 = v22 + 8 * v21;
    v24 = (unsigned __int64)v13 - v16;
    v25 = (__int64)&v17[v22 + -8 * v18];
    *(_QWORD*)&v17[v22] = v3;
    v15 = (__int64)&v17[v22 + 8];
    memcpy_alt1(v25, v16, v24);
    *(_QWORD*)(a1 + 528) = v25;
    *(_QWORD*)(a1 + 536) = v15;
    *(_QWORD*)(a1 + 544) = v23;
    if (v16 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v26, v16);
    }
  }
  else {
    *v13 = v3;
    v15 = (__int64)(v13 + 1);
  }
  *(_QWORD*)(a1 + 536) = v15;
  v27 = *(__int64**)(a1 + 560);
  v28 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v27 < v28) {
    *v27 = v3;
    v29 = (__int64)(v27 + 1);
    goto LABEL_52;
  }
  v30 = *(_QWORD*)(a1 + 552);
  v31 = (char*)v27 - v30;
  v32 = ((__int64)v27 - v30) >> 3;
  v33 = v32 + 1;
  if ((unsigned __int64)(v32 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290_alt1();
  }
  v34 = v28 - v30;
  if (v34 >> 2 > v33) {
    v33 = v34 >> 2;
  }
  if ((unsigned __int64)v34 >= 0x7FFFFFFFFFFFFFF8LL) {
    v35 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v35 = v33;
  }
  if (v35 != 0) {
    if (v35 >> 61 == 0) {
      v36 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v35, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210_alt1();
  }
  v36 = 0;
LABEL_48:
  v37 = v36 + 8 * v35;
  v38 = (unsigned __int64)v27 - v30;
  v39 = (__int64)&v31[v36 + -8 * v32];
  *(_QWORD*)&v31[v36] = v3;
  v29 = (__int64)&v31[v36 + 8];
  memcpy_alt1(v39, v30, v38);
  *(_QWORD*)(a1 + 552) = v39;
  *(_QWORD*)(a1 + 560) = v29;
  *(_QWORD*)(a1 + 568) = v37;
  if (v30 != 0) {
    v40 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v2 + v40, v30);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v29;
  GameRoutine_a8c0c0_alt1(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex_alt1((__int64)GameData_212df28);
  return v3;
}

__int64 CharacterBuilder_107ba20(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  int* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  _BYTE* v14;
  bool v15;
  __int64* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD v45[2];

  nn_os_LockMutex_alt1((__int64)GameData_212df28);
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
  GameRoutine_10965c0_alt1(v3, a1);
  v4 = GameData_212fee0[0];
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_BYTE*)(v3 + 80) = 0;
  *(_BYTE*)(v3 + 88) = 0;
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 112) = 0;
  *(_QWORD*)(v3 + 120) = 0;
  *(_QWORD*)(v3 + 128) = 0;
  *(_QWORD*)(v3 + 136) = 0;
  *(_QWORD*)(v3 + 144) = 0;
  *(_WORD*)(v3 + 156) = 0;
  *(_BYTE*)(v3 + 158) = 0;
  *(_QWORD*)v3 = v4 + 2;
  *(_DWORD*)(v3 + 152) = 1065353216;
  LOBYTE(v4) = atomic_load_explicit((atomic_uchar* volatile)GameData_212eda0,
                                    memory_order_acquire);
  v5 = GameData_212ed98;
  if (((unsigned __int8)v4 & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212eda0) != 0) {
    *v5 = wld_Crc32_alt1(0, "CharacterAnimator", 0x11u);
    __cxa_guard_release_alt1((__int64)GameData_212eda0);
  }
  v6 = *v5;
  v7 = *(_QWORD*)(a1 + 504);
  v8 = *(_QWORD*)(a1 + 512);
  v9 = v8;
  LODWORD(v45[0]) = v6;
  v45[1] = v3;
  while (v9 != v7) {
    v10 = *(_DWORD*)(v9 - 16);
    v9 -= 16;
    if (v10 == v6) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v7 == v8 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v7) <= 0x6F) {
    v11 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v11;
    *(_QWORD*)(a1 + 512) = v11;
    *(_QWORD*)(a1 + 520) = v11 + 112;
    if (v8 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v12, v7);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(a1 + 504), v45);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v13 = *(_BYTE**)(v3 + 8);
    v13[632] = 0;
    v13[664] = 0;
    v13[696] = 0;
    v13[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v14 = *(_BYTE**)(v3 + 8);
    v15 = v14[300] == 3 && v14[301] == 3;
    if (v15 || v14[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }
LABEL_20:
  v16 = *(__int64**)(a1 + 536);
  v17 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v16 >= v17) {
    v19 = *(_QWORD*)(a1 + 528);
    v20 = (char*)v16 - v19;
    v21 = ((__int64)v16 - v19) >> 3;
    v22 = v21 + 1;
    if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v23 = v17 - v19;
    if (v23 >> 2 > v22) {
      v22 = v23 >> 2;
    }
    if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL) {
      v24 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v24 = v22;
    }
    if (v24 != 0) {
      if (v24 >> 61 != 0) {
        goto LABEL_56;
      }
      v25 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v24, 16, 0);
    }
    else {
      v25 = 0;
    }
    v26 = v25 + 8 * v24;
    v27 = (unsigned __int64)v16 - v19;
    v28 = (__int64)&v20[v25 + -8 * v21];
    *(_QWORD*)&v20[v25] = v3;
    v18 = (__int64)&v20[v25 + 8];
    memcpy_alt1(v28, v19, v27);
    *(_QWORD*)(a1 + 528) = v28;
    *(_QWORD*)(a1 + 536) = v18;
    *(_QWORD*)(a1 + 544) = v26;
    if (v19 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v29, v19);
    }
  }
  else {
    *v16 = v3;
    v18 = (__int64)(v16 + 1);
  }
  *(_QWORD*)(a1 + 536) = v18;
  v30 = *(__int64**)(a1 + 560);
  v31 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v30 < v31) {
    *v30 = v3;
    v32 = (__int64)(v30 + 1);
    goto LABEL_52;
  }
  v33 = *(_QWORD*)(a1 + 552);
  v34 = (char*)v30 - v33;
  v35 = ((__int64)v30 - v33) >> 3;
  v36 = v35 + 1;
  if ((unsigned __int64)(v35 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290_alt1();
  }
  v37 = v31 - v33;
  if (v37 >> 2 > v36) {
    v36 = v37 >> 2;
  }
  if ((unsigned __int64)v37 >= 0x7FFFFFFFFFFFFFF8LL) {
    v38 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v38 = v36;
  }
  if (v38 != 0) {
    if (v38 >> 61 == 0) {
      v39 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v38, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210_alt1();
  }
  v39 = 0;
LABEL_48:
  v40 = v39 + 8 * v38;
  v41 = (unsigned __int64)v30 - v33;
  v42 = (__int64)&v34[v39 + -8 * v35];
  *(_QWORD*)&v34[v39] = v3;
  v32 = (__int64)&v34[v39 + 8];
  memcpy_alt1(v42, v33, v41);
  *(_QWORD*)(a1 + 552) = v42;
  *(_QWORD*)(a1 + 560) = v32;
  *(_QWORD*)(a1 + 568) = v40;
  if (v33 != 0) {
    v43 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v2 + v43, v33);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v32;
  GameRoutine_a8c0c0_alt1(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex_alt1((__int64)GameData_212df28);
  return v3;
}

__int64 CharacterBuilder_107be40(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  unsigned __int8 explicit;
  int* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  _BYTE* v14;
  bool v15;
  __int64* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD v45[2];

  nn_os_LockMutex_alt1((__int64)GameData_212df28);
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  GameRoutine_10965c0_alt1(v3, a1);
  *(_DWORD*)(v3 + 72) = 0;
  *(_QWORD*)v3 = game_character_CharacterEffect_vtable;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 1065353216;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212fe90,
                                  memory_order_acquire);
  v5 = GameData_212fe88;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212fe90) != 0) {
    *v5 = wld_Crc32_alt1(0, "CharacterEffect", 0xFu);
    __cxa_guard_release_alt1((__int64)GameData_212fe90);
  }
  v6 = *v5;
  v7 = *(_QWORD*)(a1 + 504);
  v8 = *(_QWORD*)(a1 + 512);
  v9 = v8;
  LODWORD(v45[0]) = v6;
  v45[1] = v3;
  while (v9 != v7) {
    v10 = *(_DWORD*)(v9 - 16);
    v9 -= 16;
    if (v10 == v6) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v7 == v8 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v7) <= 0x6F) {
    v11 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v11;
    *(_QWORD*)(a1 + 512) = v11;
    *(_QWORD*)(a1 + 520) = v11 + 112;
    if (v8 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v12, v7);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(a1 + 504), v45);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v13 = *(_BYTE**)(v3 + 8);
    v13[632] = 0;
    v13[664] = 0;
    v13[696] = 0;
    v13[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v14 = *(_BYTE**)(v3 + 8);
    v15 = v14[300] == 3 && v14[301] == 3;
    if (v15 || v14[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }
LABEL_20:
  v16 = *(__int64**)(a1 + 536);
  v17 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v16 >= v17) {
    v19 = *(_QWORD*)(a1 + 528);
    v20 = (char*)v16 - v19;
    v21 = ((__int64)v16 - v19) >> 3;
    v22 = v21 + 1;
    if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v23 = v17 - v19;
    if (v23 >> 2 > v22) {
      v22 = v23 >> 2;
    }
    if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL) {
      v24 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v24 = v22;
    }
    if (v24 != 0) {
      if (v24 >> 61 != 0) {
        goto LABEL_56;
      }
      v25 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v24, 16, 0);
    }
    else {
      v25 = 0;
    }
    v26 = v25 + 8 * v24;
    v27 = (unsigned __int64)v16 - v19;
    v28 = (__int64)&v20[v25 + -8 * v21];
    *(_QWORD*)&v20[v25] = v3;
    v18 = (__int64)&v20[v25 + 8];
    memcpy_alt1(v28, v19, v27);
    *(_QWORD*)(a1 + 528) = v28;
    *(_QWORD*)(a1 + 536) = v18;
    *(_QWORD*)(a1 + 544) = v26;
    if (v19 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v29, v19);
    }
  }
  else {
    *v16 = v3;
    v18 = (__int64)(v16 + 1);
  }
  *(_QWORD*)(a1 + 536) = v18;
  v30 = *(__int64**)(a1 + 560);
  v31 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v30 < v31) {
    *v30 = v3;
    v32 = (__int64)(v30 + 1);
    goto LABEL_52;
  }
  v33 = *(_QWORD*)(a1 + 552);
  v34 = (char*)v30 - v33;
  v35 = ((__int64)v30 - v33) >> 3;
  v36 = v35 + 1;
  if ((unsigned __int64)(v35 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290_alt1();
  }
  v37 = v31 - v33;
  if (v37 >> 2 > v36) {
    v36 = v37 >> 2;
  }
  if ((unsigned __int64)v37 >= 0x7FFFFFFFFFFFFFF8LL) {
    v38 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v38 = v36;
  }
  if (v38 != 0) {
    if (v38 >> 61 == 0) {
      v39 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v38, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210_alt1();
  }
  v39 = 0;
LABEL_48:
  v40 = v39 + 8 * v38;
  v41 = (unsigned __int64)v30 - v33;
  v42 = (__int64)&v34[v39 + -8 * v35];
  *(_QWORD*)&v34[v39] = v3;
  v32 = (__int64)&v34[v39 + 8];
  memcpy_alt1(v42, v33, v41);
  *(_QWORD*)(a1 + 552) = v42;
  *(_QWORD*)(a1 + 560) = v32;
  *(_QWORD*)(a1 + 568) = v40;
  if (v33 != 0) {
    v43 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v2 + v43, v33);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v32;
  GameRoutine_a8c0c0_alt1(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex_alt1((__int64)GameData_212df28);
  return v3;
}

__int64 CharacterBuilder_107c220(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  int* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  _BYTE* v19;
  _BYTE* v20;
  bool v21;
  __int64* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD v51[2];

  nn_os_LockMutex_alt1((__int64)GameData_212df28);
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 368, 16, 0);
  GameRoutine_10965c0_alt1(v3, a1);
  v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 32, 16, 0);
  v5 = GameData_212fe80;
  *(_DWORD*)(v4 + 24) = 0;
  *(_QWORD*)(v3 + 64) = v4 + 24;
  *(_QWORD*)(v3 + 72) = v4;
  *(_QWORD*)(v3 + 80) = v4 + 24;
  *(_QWORD*)(v3 + 88) = v4;
  *(_QWORD*)v4 = v5 + 2;
  *(_QWORD*)(v4 + 8) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v6 = GameData_212ff50[0];
  *(_QWORD*)(v3 + 100) = 0;
  *(_BYTE*)(v3 + 112) = 0;
  *(_QWORD*)(v3 + 136) = 0;
  *(_QWORD*)(v3 + 144) = 0;
  *(_QWORD*)(v3 + 152) = 0;
  *(_QWORD*)(v3 + 160) = 0;
  *(_DWORD*)(v3 + 184) = 0;
  *(_QWORD*)(v3 + 56) = v6 + 14;
  *(_DWORD*)(v3 + 96) = 1;
  *(_QWORD*)v3 = v6 + 2;
  *(_QWORD*)(v3 + 120) = v3 + 96;
  *(_QWORD*)(v3 + 128) = 0;
  *(_DWORD*)(v3 + 108) = 1048576000;
  *(_QWORD*)(v3 + 168) = 0;
  *(_QWORD*)(v3 + 176) = 1050253722;
  v7 = *(_QWORD*)GameData_212d270;
  v8 = *(_DWORD*)(*(_QWORD*)GameData_212d270 + 364LL);
  *(_QWORD*)(v3 + 188) = 0;
  *(_QWORD*)(v3 + 196) = 1050253722;
  *(_DWORD*)(v3 + 204) = 0;
  *(_DWORD*)(v3 + 176) = v8;
  v9 = *(_DWORD*)(v7 + 364);
  *(_DWORD*)(v3 + 224) = 0;
  *(_QWORD*)(v3 + 208) = 0;
  *(_QWORD*)(v3 + 216) = 0;
  *(_QWORD*)(v3 + 232) = 0;
  *(_QWORD*)(v3 + 240) = 0;
  *(_QWORD*)(v3 + 248) = 0;
  *(_QWORD*)(v3 + 256) = 1050253722;
  *(_DWORD*)(v3 + 264) = 0;
  *(_DWORD*)(v3 + 196) = v9;
  v10 = *(_DWORD*)(v7 + 364);
  *(_QWORD*)(v3 + 296) = 0;
  *(_DWORD*)(v3 + 288) = 0;
  *(_QWORD*)(v3 + 272) = 0;
  *(_QWORD*)(v3 + 280) = 0;
  *(_BYTE*)(v3 + 312) = 1;
  *(_QWORD*)(v3 + 320) = 0;
  *(_QWORD*)(v3 + 336) = 0;
  *(_DWORD*)(v3 + 344) = 1050253722;
  *(_DWORD*)(v3 + 352) = 0;
  *(_WORD*)(v3 + 356) = 0;
  *(_DWORD*)(v3 + 360) = 0;
  *(_DWORD*)(v3 + 304) = 0x2000;
  *(_DWORD*)(v3 + 328) = 0x2000;
  *(_DWORD*)(v3 + 256) = v10;
  LOBYTE(v5) = atomic_load_explicit((atomic_uchar* volatile)GameData_212fa30,
                                    memory_order_acquire);
  v11 = GameData_212fa28;
  if (((unsigned __int8)v5 & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212fa30) != 0) {
    *v11 = wld_Crc32_alt1(0, "CharacterFacialController", 0x19u);
    __cxa_guard_release_alt1((__int64)GameData_212fa30);
  }
  v12 = *v11;
  v13 = *(_QWORD*)(a1 + 504);
  v14 = *(_QWORD*)(a1 + 512);
  v15 = v14;
  LODWORD(v51[0]) = v12;
  v51[1] = v3;
  while (v15 != v13) {
    v16 = *(_DWORD*)(v15 - 16);
    v15 -= 16;
    if (v16 == v12) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v13 == v14 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v13) <= 0x6F) {
    v17 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v17;
    *(_QWORD*)(a1 + 512) = v17;
    *(_QWORD*)(a1 + 520) = v17 + 112;
    if (v14 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v18, v13);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(a1 + 504), v51);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v19 = *(_BYTE**)(v3 + 8);
    v19[632] = 0;
    v19[664] = 0;
    v19[696] = 0;
    v19[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v20 = *(_BYTE**)(v3 + 8);
    v21 = v20[300] == 3 && v20[301] == 3;
    if (v21 || v20[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }
LABEL_20:
  v22 = *(__int64**)(a1 + 536);
  v23 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v22 >= v23) {
    v25 = *(_QWORD*)(a1 + 528);
    v26 = (char*)v22 - v25;
    v27 = ((__int64)v22 - v25) >> 3;
    v28 = v27 + 1;
    if ((unsigned __int64)(v27 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v29 = v23 - v25;
    if (v29 >> 2 > v28) {
      v28 = v29 >> 2;
    }
    if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFF8LL) {
      v30 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v30 = v28;
    }
    if (v30 != 0) {
      if (v30 >> 61 != 0) {
        goto LABEL_56;
      }
      v31 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v30, 16, 0);
    }
    else {
      v31 = 0;
    }
    v32 = v31 + 8 * v30;
    v33 = (unsigned __int64)v22 - v25;
    v34 = (__int64)&v26[v31 + -8 * v27];
    *(_QWORD*)&v26[v31] = v3;
    v24 = (__int64)&v26[v31 + 8];
    memcpy_alt1(v34, v25, v33);
    *(_QWORD*)(a1 + 528) = v34;
    *(_QWORD*)(a1 + 536) = v24;
    *(_QWORD*)(a1 + 544) = v32;
    if (v25 != 0) {
      v35 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v35, v25);
    }
  }
  else {
    *v22 = v3;
    v24 = (__int64)(v22 + 1);
  }
  *(_QWORD*)(a1 + 536) = v24;
  v36 = *(__int64**)(a1 + 560);
  v37 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v36 < v37) {
    *v36 = v3;
    v38 = (__int64)(v36 + 1);
    goto LABEL_52;
  }
  v39 = *(_QWORD*)(a1 + 552);
  v40 = (char*)v36 - v39;
  v41 = ((__int64)v36 - v39) >> 3;
  v42 = v41 + 1;
  if ((unsigned __int64)(v41 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290_alt1();
  }
  v43 = v37 - v39;
  if (v43 >> 2 > v42) {
    v42 = v43 >> 2;
  }
  if ((unsigned __int64)v43 >= 0x7FFFFFFFFFFFFFF8LL) {
    v44 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v44 = v42;
  }
  if (v44 != 0) {
    if (v44 >> 61 == 0) {
      v45 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v44, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210_alt1();
  }
  v45 = 0;
LABEL_48:
  v46 = v45 + 8 * v44;
  v47 = (unsigned __int64)v36 - v39;
  v48 = (__int64)&v40[v45 + -8 * v41];
  *(_QWORD*)&v40[v45] = v3;
  v38 = (__int64)&v40[v45 + 8];
  memcpy_alt1(v48, v39, v47);
  *(_QWORD*)(a1 + 552) = v48;
  *(_QWORD*)(a1 + 560) = v38;
  *(_QWORD*)(a1 + 568) = v46;
  if (v39 != 0) {
    v49 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v2 + v49, v39);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v38;
  GameRoutine_a8c0c0_alt1(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex_alt1((__int64)GameData_212df28);
  return v3;
}

__int64 CharacterBuilder_107c700(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  atomic_uchar* v5;
  int* v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  _BYTE* v14;
  _BYTE* v15;
  bool v16;
  __int64* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD v46[2];

  nn_os_LockMutex_alt1((__int64)GameData_212df28);
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 224, 16, 0);
  GameRoutine_10965c0_alt1(v3, a1);
  v4 = GameData_212ff58[0];
  *(_BYTE*)(v3 + 72) = 0;
  *(_BYTE*)(v3 + 76) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 112) = 0;
  *(_QWORD*)(v3 + 120) = 0;
  *(_QWORD*)(v3 + 128) = 0;
  *(_QWORD*)(v3 + 144) = 0;
  *(_QWORD*)(v3 + 152) = 0;
  *(_QWORD*)(v3 + 160) = 0;
  *(_QWORD*)(v3 + 168) = 0;
  *(_QWORD*)v3 = v4 + 2;
  *(_QWORD*)(v3 + 56) = 1;
  *(_QWORD*)(v3 + 64) = 0x3E80000000000000LL;
  *(_DWORD*)(v3 + 104) = -1;
  *(_QWORD*)(v3 + 176) = 0;
  *(_QWORD*)(v3 + 184) = 1050253722;
  *(_QWORD*)(v3 + 192) = 0x3E99999A00000000LL;
  *(_QWORD*)(v3 + 200) = 0;
  v5 = (atomic_uchar*)GameData_212fef8;
  *(_QWORD*)(v3 + 208) = 0;
  *(_DWORD*)(v3 + 216) = 0;
  LOBYTE(v5) = atomic_load_explicit(v5, memory_order_acquire);
  v6 = GameData_212fef0;
  if (((unsigned __int8)v5 & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212fef8) != 0) {
    *v6 = wld_Crc32_alt1(0, "CharacterIK", 0xBu);
    __cxa_guard_release_alt1((__int64)GameData_212fef8);
  }
  v7 = *v6;
  v8 = *(_QWORD*)(a1 + 504);
  v9 = *(_QWORD*)(a1 + 512);
  v10 = v9;
  LODWORD(v46[0]) = v7;
  v46[1] = v3;
  while (v10 != v8) {
    v11 = *(_DWORD*)(v10 - 16);
    v10 -= 16;
    if (v11 == v7) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v8 == v9 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v8) <= 0x6F) {
    v12 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v12;
    *(_QWORD*)(a1 + 512) = v12;
    *(_QWORD*)(a1 + 520) = v12 + 112;
    if (v9 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v13, v8);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(a1 + 504), v46);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v14 = *(_BYTE**)(v3 + 8);
    v14[632] = 0;
    v14[664] = 0;
    v14[696] = 0;
    v14[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v15 = *(_BYTE**)(v3 + 8);
    v16 = v15[300] == 3 && v15[301] == 3;
    if (v16 || v15[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }
LABEL_20:
  v17 = *(__int64**)(a1 + 536);
  v18 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v17 >= v18) {
    v20 = *(_QWORD*)(a1 + 528);
    v21 = (char*)v17 - v20;
    v22 = ((__int64)v17 - v20) >> 3;
    v23 = v22 + 1;
    if ((unsigned __int64)(v22 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v24 = v18 - v20;
    if (v24 >> 2 > v23) {
      v23 = v24 >> 2;
    }
    if ((unsigned __int64)v24 >= 0x7FFFFFFFFFFFFFF8LL) {
      v25 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v25 = v23;
    }
    if (v25 != 0) {
      if (v25 >> 61 != 0) {
        goto LABEL_56;
      }
      v26 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v25, 16, 0);
    }
    else {
      v26 = 0;
    }
    v27 = v26 + 8 * v25;
    v28 = (unsigned __int64)v17 - v20;
    v29 = (__int64)&v21[v26 + -8 * v22];
    *(_QWORD*)&v21[v26] = v3;
    v19 = (__int64)&v21[v26 + 8];
    memcpy_alt1(v29, v20, v28);
    *(_QWORD*)(a1 + 528) = v29;
    *(_QWORD*)(a1 + 536) = v19;
    *(_QWORD*)(a1 + 544) = v27;
    if (v20 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v30, v20);
    }
  }
  else {
    *v17 = v3;
    v19 = (__int64)(v17 + 1);
  }
  *(_QWORD*)(a1 + 536) = v19;
  v31 = *(__int64**)(a1 + 560);
  v32 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v31 < v32) {
    *v31 = v3;
    v33 = (__int64)(v31 + 1);
    goto LABEL_52;
  }
  v34 = *(_QWORD*)(a1 + 552);
  v35 = (char*)v31 - v34;
  v36 = ((__int64)v31 - v34) >> 3;
  v37 = v36 + 1;
  if ((unsigned __int64)(v36 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290_alt1();
  }
  v38 = v32 - v34;
  if (v38 >> 2 > v37) {
    v37 = v38 >> 2;
  }
  if ((unsigned __int64)v38 >= 0x7FFFFFFFFFFFFFF8LL) {
    v39 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v39 = v37;
  }
  if (v39 != 0) {
    if (v39 >> 61 == 0) {
      v40 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v39, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210_alt1();
  }
  v40 = 0;
LABEL_48:
  v41 = v40 + 8 * v39;
  v42 = (unsigned __int64)v31 - v34;
  v43 = (__int64)&v35[v40 + -8 * v36];
  *(_QWORD*)&v35[v40] = v3;
  v33 = (__int64)&v35[v40 + 8];
  memcpy_alt1(v43, v34, v42);
  *(_QWORD*)(a1 + 552) = v43;
  *(_QWORD*)(a1 + 560) = v33;
  *(_QWORD*)(a1 + 568) = v41;
  if (v34 != 0) {
    v44 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v2 + v44, v34);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v33;
  GameRoutine_a8c0c0_alt1(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex_alt1((__int64)GameData_212df28);
  return v3;
}

__int64 CharacterBuilder_107cb40(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int128 v6;
  atomic_uchar* v7;
  int* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  _BYTE* v16;
  _BYTE* v17;
  bool v18;
  __int64* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v48;
  _QWORD v49[2];

  nn_os_LockMutex_alt1((__int64)GameData_212df28);
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 512, 16, 0);
  GameRoutine_10965c0_alt1(v3, a1);
  v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 32, 16, 0);
  *(_QWORD*)v4 = GameData_212fe80 + 2;
  *(_QWORD*)(v4 + 8) = 0;
  *(_DWORD*)(v4 + 24) = 0;
  *(_QWORD*)(v3 + 64) = v4 + 24;
  *(_QWORD*)(v3 + 72) = v4;
  *(_QWORD*)(v3 + 80) = v4 + 24;
  *(_QWORD*)(v3 + 88) = v4;
  *(_QWORD*)(v4 + 16) = 0;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v5 = GameData_212ff60[0];
  *(_DWORD*)(v3 + 96) = 1;
  *(_QWORD*)(v3 + 100) = 0;
  *(_BYTE*)(v3 + 112) = 0;
  *(_QWORD*)(v3 + 156) = 0;
  *(_QWORD*)(v3 + 176) = 0;
  *(_QWORD*)(v3 + 184) = 0;
  *(_QWORD*)(v3 + 192) = 0;
  *(_QWORD*)(v3 + 208) = 0;
  *(_QWORD*)(v3 + 216) = 0;
  *(_QWORD*)(v3 + 224) = 0;
  *(_QWORD*)(v3 + 240) = 0;
  *(_QWORD*)(v3 + 248) = 0;
  *(_QWORD*)(v3 + 256) = 0;
  *(_QWORD*)(v3 + 264) = 0;
  *(_DWORD*)(v3 + 108) = 1048576000;
  *(_DWORD*)(v3 + 152) = 1041865114;
  *(_QWORD*)(v3 + 144) = 0x3F8000003F800000LL;
  *(_QWORD*)v3 = v5 + 2;
  *(_QWORD*)(v3 + 56) = v5 + 14;
  *(_QWORD*)(v3 + 164) = -3253102182LL;
  *(_OWORD*)(v3 + 128) = GameData_1a83160;
  *(_DWORD*)(v3 + 200) = -1;
  *(_DWORD*)(v3 + 232) = -1;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21a5680) != 0) {
    v48 = *((_QWORD*)GameData_212c2f8 + 1);
    *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
    *((_QWORD*)&GameData_21a5670 + 1) = v48;
    __cxa_guard_release_alt1((__int64)&GameData_21a5680);
  }
  v6 = GameData_21a5670;
  *(_QWORD*)(v3 + 448) = 0;
  *(_QWORD*)(v3 + 288) = 0;
  *(_QWORD*)(v3 + 296) = 0;
  *(_QWORD*)(v3 + 304) = 0;
  *(_QWORD*)(v3 + 312) = 0;
  *(_QWORD*)(v3 + 320) = 0;
  *(_QWORD*)(v3 + 336) = 0;
  *(_QWORD*)(v3 + 344) = 0;
  *(_QWORD*)(v3 + 352) = 0;
  *(_QWORD*)(v3 + 360) = 0;
  *(_QWORD*)(v3 + 368) = 0;
  *(_QWORD*)(v3 + 376) = 0;
  *(_QWORD*)(v3 + 384) = 0;
  *(_QWORD*)(v3 + 392) = 0;
  *(_QWORD*)(v3 + 400) = 0;
  *(_QWORD*)(v3 + 408) = 0;
  *(_QWORD*)(v3 + 416) = 0;
  *(_QWORD*)(v3 + 424) = 0;
  *(_QWORD*)(v3 + 432) = 0;
  *(_OWORD*)(v3 + 272) = v6;
  *(_QWORD*)(v3 + 460) = 0x3D4CCCCD3F800000LL;
  *(_DWORD*)(v3 + 456) = 1065353216;
  *(_QWORD*)(v3 + 472) = 0x3D4CCCCD3F333333LL;
  *(_DWORD*)(v3 + 468) = 1060320051;
  *(_QWORD*)(v3 + 484) = 0x3D4CCCCD3E99999ALL;
  *(_DWORD*)(v3 + 480) = 1050253722;
  *(_QWORD*)(v3 + 496) = 0x3D4CCCCD42C80000LL;
  v7 = (atomic_uchar*)GameData_212ff08;
  *(_DWORD*)(v3 + 440) = 0;
  *(_DWORD*)(v3 + 492) = 1120403456;
  LOBYTE(v7) = atomic_load_explicit(v7, memory_order_acquire);
  v8 = GameData_212ff00;
  if (((unsigned __int8)v7 & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212ff08) != 0) {
    *v8 = wld_Crc32_alt1(0, "CharacterLookAt", 0xFu);
    __cxa_guard_release_alt1((__int64)GameData_212ff08);
  }
  v9 = *v8;
  v10 = *(_QWORD*)(a1 + 504);
  v11 = *(_QWORD*)(a1 + 512);
  v12 = v11;
  LODWORD(v49[0]) = v9;
  v49[1] = v3;
  while (v12 != v10) {
    v13 = *(_DWORD*)(v12 - 16);
    v12 -= 16;
    if (v13 == v9) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_21;
      }
      goto LABEL_15;
    }
  }
  if (v10 == v11 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v10) <= 0x6F) {
    v14 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v14;
    *(_QWORD*)(a1 + 512) = v14;
    *(_QWORD*)(a1 + 520) = v14 + 112;
    if (v11 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v15, v10);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(a1 + 504), v49);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_15:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v16 = *(_BYTE**)(v3 + 8);
    v16[632] = 0;
    v16[664] = 0;
    v16[696] = 0;
    v16[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v17 = *(_BYTE**)(v3 + 8);
    v18 = v17[300] == 3 && v17[301] == 3;
    if (v18 || v17[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }
LABEL_21:
  v19 = *(__int64**)(a1 + 536);
  v20 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v19 >= v20) {
    v22 = *(_QWORD*)(a1 + 528);
    v23 = (char*)v19 - v22;
    v24 = ((__int64)v19 - v22) >> 3;
    v25 = v24 + 1;
    if ((unsigned __int64)(v24 + 1) >> 61 != 0) {
      goto LABEL_58;
    }
    v26 = v20 - v22;
    if (v26 >> 2 > v25) {
      v25 = v26 >> 2;
    }
    if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFF8LL) {
      v27 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v27 = v25;
    }
    if (v27 != 0) {
      if (v27 >> 61 != 0) {
        goto LABEL_59;
      }
      v28 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v27, 16, 0);
    }
    else {
      v28 = 0;
    }
    v29 = v28 + 8 * v27;
    v30 = (unsigned __int64)v19 - v22;
    v31 = (__int64)&v23[v28 + -8 * v24];
    *(_QWORD*)&v23[v28] = v3;
    v21 = (__int64)&v23[v28 + 8];
    memcpy_alt1(v31, v22, v30);
    *(_QWORD*)(a1 + 528) = v31;
    *(_QWORD*)(a1 + 536) = v21;
    *(_QWORD*)(a1 + 544) = v29;
    if (v22 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v32, v22);
    }
  }
  else {
    *v19 = v3;
    v21 = (__int64)(v19 + 1);
  }
  *(_QWORD*)(a1 + 536) = v21;
  v33 = *(__int64**)(a1 + 560);
  v34 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v33 < v34) {
    *v33 = v3;
    v35 = (__int64)(v33 + 1);
    goto LABEL_53;
  }
  v36 = *(_QWORD*)(a1 + 552);
  v37 = (char*)v33 - v36;
  v38 = ((__int64)v33 - v36) >> 3;
  v39 = v38 + 1;
  if ((unsigned __int64)(v38 + 1) >> 61 != 0) {
  LABEL_58:
    GameRoutine_98f290_alt1();
  }
  v40 = v34 - v36;
  if (v40 >> 2 > v39) {
    v39 = v40 >> 2;
  }
  if ((unsigned __int64)v40 >= 0x7FFFFFFFFFFFFFF8LL) {
    v41 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v41 = v39;
  }
  if (v41 != 0) {
    if (v41 >> 61 == 0) {
      v42 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v41, 16, 0);
      goto LABEL_49;
    }
  LABEL_59:
    GameRoutine_60a210_alt1();
  }
  v42 = 0;
LABEL_49:
  v43 = v42 + 8 * v41;
  v44 = (unsigned __int64)v33 - v36;
  v45 = (__int64)&v37[v42 + -8 * v38];
  *(_QWORD*)&v37[v42] = v3;
  v35 = (__int64)&v37[v42 + 8];
  memcpy_alt1(v45, v36, v44);
  *(_QWORD*)(a1 + 552) = v45;
  *(_QWORD*)(a1 + 560) = v35;
  *(_QWORD*)(a1 + 568) = v43;
  if (v36 != 0) {
    v46 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v2 + v46, v36);
  }
LABEL_53:
  *(_QWORD*)(a1 + 560) = v35;
  GameRoutine_a8c0c0_alt1(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex_alt1((__int64)GameData_212df28);
  return v3;
}

__int64 CharacterBuilder_107d0c0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  _BYTE* v11;
  bool v12;
  __int64* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD v42[2];

  nn_os_LockMutex_alt1((__int64)&GameData_2167580);
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 480, 16, 0);
  GameRoutine_10cbfe0_alt1(v3, a1);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2235668,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_2235668) != 0) {
    GameData_2235660 = wld_Crc32_alt1(0, "CharacterObservable", 0x13u);
    __cxa_guard_release_alt1((__int64)&GameData_2235668);
  }
  v4 = *(_QWORD*)(a1 + 504);
  v5 = *(_QWORD*)(a1 + 512);
  v6 = v5;
  LODWORD(v42[0]) = GameData_2235660;
  v42[1] = v3;
  while (v6 != v4) {
    v7 = *(_DWORD*)(v6 - 16);
    v6 -= 16;
    if (v7 == GameData_2235660) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v4 == v5 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v4) <= 0x6F) {
    v8 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v8;
    *(_QWORD*)(a1 + 512) = v8;
    *(_QWORD*)(a1 + 520) = v8 + 112;
    if (v5 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v9, v4);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(a1 + 504), v42);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v10 = *(_BYTE**)(v3 + 8);
    v10[632] = 0;
    v10[664] = 0;
    v10[696] = 0;
    v10[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v11 = *(_BYTE**)(v3 + 8);
    v12 = v11[300] == 3 && v11[301] == 3;
    if (v12 || v11[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }
LABEL_20:
  v13 = *(__int64**)(a1 + 536);
  v14 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v13 >= v14) {
    v16 = *(_QWORD*)(a1 + 528);
    v17 = (char*)v13 - v16;
    v18 = ((__int64)v13 - v16) >> 3;
    v19 = v18 + 1;
    if ((unsigned __int64)(v18 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v20 = v14 - v16;
    if (v20 >> 2 > v19) {
      v19 = v20 >> 2;
    }
    if ((unsigned __int64)v20 >= 0x7FFFFFFFFFFFFFF8LL) {
      v21 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v21 = v19;
    }
    if (v21 != 0) {
      if (v21 >> 61 != 0) {
        goto LABEL_56;
      }
      v22 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v21, 16, 0);
    }
    else {
      v22 = 0;
    }
    v23 = v22 + 8 * v21;
    v24 = (unsigned __int64)v13 - v16;
    v25 = (__int64)&v17[v22 + -8 * v18];
    *(_QWORD*)&v17[v22] = v3;
    v15 = (__int64)&v17[v22 + 8];
    memcpy_alt1(v25, v16, v24);
    *(_QWORD*)(a1 + 528) = v25;
    *(_QWORD*)(a1 + 536) = v15;
    *(_QWORD*)(a1 + 544) = v23;
    if (v16 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v26, v16);
    }
  }
  else {
    *v13 = v3;
    v15 = (__int64)(v13 + 1);
  }
  *(_QWORD*)(a1 + 536) = v15;
  v27 = *(__int64**)(a1 + 560);
  v28 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v27 < v28) {
    *v27 = v3;
    v29 = (__int64)(v27 + 1);
    goto LABEL_52;
  }
  v30 = *(_QWORD*)(a1 + 552);
  v31 = (char*)v27 - v30;
  v32 = ((__int64)v27 - v30) >> 3;
  v33 = v32 + 1;
  if ((unsigned __int64)(v32 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290_alt1();
  }
  v34 = v28 - v30;
  if (v34 >> 2 > v33) {
    v33 = v34 >> 2;
  }
  if ((unsigned __int64)v34 >= 0x7FFFFFFFFFFFFFF8LL) {
    v35 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v35 = v33;
  }
  if (v35 != 0) {
    if (v35 >> 61 == 0) {
      v36 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v35, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210_alt1();
  }
  v36 = 0;
LABEL_48:
  v37 = v36 + 8 * v35;
  v38 = (unsigned __int64)v27 - v30;
  v39 = (__int64)&v31[v36 + -8 * v32];
  *(_QWORD*)&v31[v36] = v3;
  v29 = (__int64)&v31[v36 + 8];
  memcpy_alt1(v39, v30, v38);
  *(_QWORD*)(a1 + 552) = v39;
  *(_QWORD*)(a1 + 560) = v29;
  *(_QWORD*)(a1 + 568) = v37;
  if (v30 != 0) {
    v40 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v2 + v40, v30);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v29;
  GameRoutine_a8c0c0_alt1(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex_alt1((__int64)GameData_212df28);
  return v3;
}

__int64 CharacterBuilder_107d480(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  atomic_uchar* v4;
  int* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  _BYTE* v14;
  bool v15;
  __int64* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD v45[2];

  nn_os_LockMutex_alt1((__int64)GameData_212df28);
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 192, 16, 0);
  GameRoutine_10965c0_alt1(v3, a1);
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 120) = 0;
  *(_QWORD*)(v3 + 128) = 0;
  *(_QWORD*)(v3 + 136) = 0;
  *(_DWORD*)(v3 + 144) = 0;
  *(_DWORD*)(v3 + 188) = 0;
  *(_QWORD*)(v3 + 152) = 0;
  *(_QWORD*)(v3 + 160) = 0;
  *(_DWORD*)(v3 + 112) = 1106247680;
  *(_QWORD*)v3 = game_character_CharacterSelfie_vtable;
  v4 = (atomic_uchar*)GameData_212ff18;
  *(_QWORD*)(v3 + 168) = 0;
  *(_QWORD*)(v3 + 176) = 0;
  *(_BYTE*)(v3 + 184) = 0;
  LOBYTE(v4) = atomic_load_explicit(v4, memory_order_acquire);
  v5 = GameData_212ff10;
  if (((unsigned __int8)v4 & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212ff18) != 0) {
    *v5 = wld_Crc32_alt1(0, "CharacterSelfie", 0xFu);
    __cxa_guard_release_alt1((__int64)GameData_212ff18);
  }
  v6 = *v5;
  v7 = *(_QWORD*)(a1 + 504);
  v8 = *(_QWORD*)(a1 + 512);
  v9 = v8;
  LODWORD(v45[0]) = v6;
  v45[1] = v3;
  while (v9 != v7) {
    v10 = *(_DWORD*)(v9 - 16);
    v9 -= 16;
    if (v10 == v6) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v7 == v8 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v7) <= 0x6F) {
    v11 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v11;
    *(_QWORD*)(a1 + 512) = v11;
    *(_QWORD*)(a1 + 520) = v11 + 112;
    if (v8 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v12, v7);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(a1 + 504), v45);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v13 = *(_BYTE**)(v3 + 8);
    v13[632] = 0;
    v13[664] = 0;
    v13[696] = 0;
    v13[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v14 = *(_BYTE**)(v3 + 8);
    v15 = v14[300] == 3 && v14[301] == 3;
    if (v15 || v14[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }
LABEL_20:
  v16 = *(__int64**)(a1 + 536);
  v17 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v16 >= v17) {
    v19 = *(_QWORD*)(a1 + 528);
    v20 = (char*)v16 - v19;
    v21 = ((__int64)v16 - v19) >> 3;
    v22 = v21 + 1;
    if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v23 = v17 - v19;
    if (v23 >> 2 > v22) {
      v22 = v23 >> 2;
    }
    if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL) {
      v24 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v24 = v22;
    }
    if (v24 != 0) {
      if (v24 >> 61 != 0) {
        goto LABEL_56;
      }
      v25 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v24, 16, 0);
    }
    else {
      v25 = 0;
    }
    v26 = v25 + 8 * v24;
    v27 = (unsigned __int64)v16 - v19;
    v28 = (__int64)&v20[v25 + -8 * v21];
    *(_QWORD*)&v20[v25] = v3;
    v18 = (__int64)&v20[v25 + 8];
    memcpy_alt1(v28, v19, v27);
    *(_QWORD*)(a1 + 528) = v28;
    *(_QWORD*)(a1 + 536) = v18;
    *(_QWORD*)(a1 + 544) = v26;
    if (v19 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v29, v19);
    }
  }
  else {
    *v16 = v3;
    v18 = (__int64)(v16 + 1);
  }
  *(_QWORD*)(a1 + 536) = v18;
  v30 = *(__int64**)(a1 + 560);
  v31 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v30 < v31) {
    *v30 = v3;
    v32 = (__int64)(v30 + 1);
    goto LABEL_52;
  }
  v33 = *(_QWORD*)(a1 + 552);
  v34 = (char*)v30 - v33;
  v35 = ((__int64)v30 - v33) >> 3;
  v36 = v35 + 1;
  if ((unsigned __int64)(v35 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290_alt1();
  }
  v37 = v31 - v33;
  if (v37 >> 2 > v36) {
    v36 = v37 >> 2;
  }
  if ((unsigned __int64)v37 >= 0x7FFFFFFFFFFFFFF8LL) {
    v38 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v38 = v36;
  }
  if (v38 != 0) {
    if (v38 >> 61 == 0) {
      v39 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v38, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210_alt1();
  }
  v39 = 0;
LABEL_48:
  v40 = v39 + 8 * v38;
  v41 = (unsigned __int64)v30 - v33;
  v42 = (__int64)&v34[v39 + -8 * v35];
  *(_QWORD*)&v34[v39] = v3;
  v32 = (__int64)&v34[v39 + 8];
  memcpy_alt1(v42, v33, v41);
  *(_QWORD*)(a1 + 552) = v42;
  *(_QWORD*)(a1 + 560) = v32;
  *(_QWORD*)(a1 + 568) = v40;
  if (v33 != 0) {
    v43 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v2 + v43, v33);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v32;
  GameRoutine_a8c0c0_alt1(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex_alt1((__int64)GameData_212df28);
  return v3;
}

__int64 CharacterBuilder_107d880(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  int* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  _BYTE* v14;
  bool v15;
  __int64* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD v45[2];

  nn_os_LockMutex_alt1((__int64)GameData_212df28);
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 136, 16, 0);
  GameRoutine_10965c0_alt1(v3, a1);
  v4 = GameData_212ff68[0];
  *(_BYTE*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 120) = 0;
  *(_DWORD*)(v3 + 128) = 0;
  *(_QWORD*)v3 = v4 + 2;
  *(_DWORD*)(v3 + 60) = 1065353216;
  *(_DWORD*)(v3 + 80) = 0x2000;
  *(_DWORD*)(v3 + 96) = 0x2000;
  *(_DWORD*)(v3 + 112) = 0x2000;
  LOBYTE(v4) = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4e8,
                                    memory_order_acquire);
  v5 = GameData_212d4e0;
  if (((unsigned __int8)v4 & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212d4e8) != 0) {
    *v5 = wld_Crc32_alt1(0, "CharacterSound", 0xEu);
    __cxa_guard_release_alt1((__int64)GameData_212d4e8);
  }
  v6 = *v5;
  v7 = *(_QWORD*)(a1 + 504);
  v8 = *(_QWORD*)(a1 + 512);
  v9 = v8;
  LODWORD(v45[0]) = v6;
  v45[1] = v3;
  while (v9 != v7) {
    v10 = *(_DWORD*)(v9 - 16);
    v9 -= 16;
    if (v10 == v6) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v7 == v8 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v7) <= 0x6F) {
    v11 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v11;
    *(_QWORD*)(a1 + 512) = v11;
    *(_QWORD*)(a1 + 520) = v11 + 112;
    if (v8 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v12, v7);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(a1 + 504), v45);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v13 = *(_BYTE**)(v3 + 8);
    v13[632] = 0;
    v13[664] = 0;
    v13[696] = 0;
    v13[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v14 = *(_BYTE**)(v3 + 8);
    v15 = v14[300] == 3 && v14[301] == 3;
    if (v15 || v14[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }
LABEL_20:
  v16 = *(__int64**)(a1 + 536);
  v17 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v16 >= v17) {
    v19 = *(_QWORD*)(a1 + 528);
    v20 = (char*)v16 - v19;
    v21 = ((__int64)v16 - v19) >> 3;
    v22 = v21 + 1;
    if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v23 = v17 - v19;
    if (v23 >> 2 > v22) {
      v22 = v23 >> 2;
    }
    if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL) {
      v24 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v24 = v22;
    }
    if (v24 != 0) {
      if (v24 >> 61 != 0) {
        goto LABEL_56;
      }
      v25 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v24, 16, 0);
    }
    else {
      v25 = 0;
    }
    v26 = v25 + 8 * v24;
    v27 = (unsigned __int64)v16 - v19;
    v28 = (__int64)&v20[v25 + -8 * v21];
    *(_QWORD*)&v20[v25] = v3;
    v18 = (__int64)&v20[v25 + 8];
    memcpy_alt1(v28, v19, v27);
    *(_QWORD*)(a1 + 528) = v28;
    *(_QWORD*)(a1 + 536) = v18;
    *(_QWORD*)(a1 + 544) = v26;
    if (v19 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v29, v19);
    }
  }
  else {
    *v16 = v3;
    v18 = (__int64)(v16 + 1);
  }
  *(_QWORD*)(a1 + 536) = v18;
  v30 = *(__int64**)(a1 + 560);
  v31 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v30 < v31) {
    *v30 = v3;
    v32 = (__int64)(v30 + 1);
    goto LABEL_52;
  }
  v33 = *(_QWORD*)(a1 + 552);
  v34 = (char*)v30 - v33;
  v35 = ((__int64)v30 - v33) >> 3;
  v36 = v35 + 1;
  if ((unsigned __int64)(v35 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290_alt1();
  }
  v37 = v31 - v33;
  if (v37 >> 2 > v36) {
    v36 = v37 >> 2;
  }
  if ((unsigned __int64)v37 >= 0x7FFFFFFFFFFFFFF8LL) {
    v38 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v38 = v36;
  }
  if (v38 != 0) {
    if (v38 >> 61 == 0) {
      v39 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v38, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210_alt1();
  }
  v39 = 0;
LABEL_48:
  v40 = v39 + 8 * v38;
  v41 = (unsigned __int64)v30 - v33;
  v42 = (__int64)&v34[v39 + -8 * v35];
  *(_QWORD*)&v34[v39] = v3;
  v32 = (__int64)&v34[v39 + 8];
  memcpy_alt1(v42, v33, v41);
  *(_QWORD*)(a1 + 552) = v42;
  *(_QWORD*)(a1 + 560) = v32;
  *(_QWORD*)(a1 + 568) = v40;
  if (v33 != 0) {
    v43 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v2 + v43, v33);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v32;
  GameRoutine_a8c0c0_alt1(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex_alt1((__int64)GameData_212df28);
  return v3;
}

__int64 CharacterBuilder_107dca0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  unsigned __int8 explicit;
  int* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  _BYTE* v14;
  bool v15;
  __int64* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD v45[2];

  nn_os_LockMutex_alt1((__int64)GameData_212df28);
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 360, 16, 0);
  GameRoutine_10965c0_alt1(v3, a1);
  *(_QWORD*)v3 = GameData_212ff70[0] + 2;
  memset_alt1(v3 + 56, 0, 0x130u);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ff28,
                                  memory_order_acquire);
  v5 = GameData_212ff20;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212ff28) != 0) {
    *v5 = wld_Crc32_alt1(0, "CharacterWeaponAnimator", 0x17u);
    __cxa_guard_release_alt1((__int64)GameData_212ff28);
  }
  v6 = *v5;
  v7 = *(_QWORD*)(a1 + 504);
  v8 = *(_QWORD*)(a1 + 512);
  v9 = v8;
  LODWORD(v45[0]) = v6;
  v45[1] = v3;
  while (v9 != v7) {
    v10 = *(_DWORD*)(v9 - 16);
    v9 -= 16;
    if (v10 == v6) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v7 == v8 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v7) <= 0x6F) {
    v11 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v11;
    *(_QWORD*)(a1 + 512) = v11;
    *(_QWORD*)(a1 + 520) = v11 + 112;
    if (v8 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v12, v7);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(a1 + 504), v45);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v13 = *(_BYTE**)(v3 + 8);
    v13[632] = 0;
    v13[664] = 0;
    v13[696] = 0;
    v13[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v14 = *(_BYTE**)(v3 + 8);
    v15 = v14[300] == 3 && v14[301] == 3;
    if (v15 || v14[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }
LABEL_20:
  v16 = *(__int64**)(a1 + 536);
  v17 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v16 >= v17) {
    v19 = *(_QWORD*)(a1 + 528);
    v20 = (char*)v16 - v19;
    v21 = ((__int64)v16 - v19) >> 3;
    v22 = v21 + 1;
    if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v23 = v17 - v19;
    if (v23 >> 2 > v22) {
      v22 = v23 >> 2;
    }
    if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL) {
      v24 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v24 = v22;
    }
    if (v24 != 0) {
      if (v24 >> 61 != 0) {
        goto LABEL_56;
      }
      v25 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v24, 16, 0);
    }
    else {
      v25 = 0;
    }
    v26 = v25 + 8 * v24;
    v27 = (unsigned __int64)v16 - v19;
    v28 = (__int64)&v20[v25 + -8 * v21];
    *(_QWORD*)&v20[v25] = v3;
    v18 = (__int64)&v20[v25 + 8];
    memcpy_alt1(v28, v19, v27);
    *(_QWORD*)(a1 + 528) = v28;
    *(_QWORD*)(a1 + 536) = v18;
    *(_QWORD*)(a1 + 544) = v26;
    if (v19 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v29, v19);
    }
  }
  else {
    *v16 = v3;
    v18 = (__int64)(v16 + 1);
  }
  *(_QWORD*)(a1 + 536) = v18;
  v30 = *(__int64**)(a1 + 560);
  v31 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v30 < v31) {
    *v30 = v3;
    v32 = (__int64)(v30 + 1);
    goto LABEL_52;
  }
  v33 = *(_QWORD*)(a1 + 552);
  v34 = (char*)v30 - v33;
  v35 = ((__int64)v30 - v33) >> 3;
  v36 = v35 + 1;
  if ((unsigned __int64)(v35 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290_alt1();
  }
  v37 = v31 - v33;
  if (v37 >> 2 > v36) {
    v36 = v37 >> 2;
  }
  if ((unsigned __int64)v37 >= 0x7FFFFFFFFFFFFFF8LL) {
    v38 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v38 = v36;
  }
  if (v38 != 0) {
    if (v38 >> 61 == 0) {
      v39 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v38, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210_alt1();
  }
  v39 = 0;
LABEL_48:
  v40 = v39 + 8 * v38;
  v41 = (unsigned __int64)v30 - v33;
  v42 = (__int64)&v34[v39 + -8 * v35];
  *(_QWORD*)&v34[v39] = v3;
  v32 = (__int64)&v34[v39 + 8];
  memcpy_alt1(v42, v33, v41);
  *(_QWORD*)(a1 + 552) = v42;
  *(_QWORD*)(a1 + 560) = v32;
  *(_QWORD*)(a1 + 568) = v40;
  if (v33 != 0) {
    v43 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v2 + v43, v33);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v32;
  GameRoutine_a8c0c0_alt1(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex_alt1((__int64)GameData_212df28);
  return v3;
}

_QWORD* CharacterBuilder_107e090(_QWORD* result, __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  struct {
    _QWORD* v5;
    _QWORD* v6;
  } v5_;

  v2 = *(_QWORD**)(a2 + 32);
  if (v2 != nullptr) {
    if ((*((_BYTE*)result + 342) & 1) != 0) {
      v5_.v5 = result;
      return X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                    PSEUDO_X8, _QWORD*, _QWORD**))(*v2 + 48LL))(
                                    (void*)v2, v2, &v5_.v5));
    }
    else {
      v3 = GameData_2235760;
      v4 = GameData_2235768;
      if (GameData_2235768 != 0) {
        atomic_fetch_add_explicit(
            (atomic_ullong* volatile)(GameData_2235768 + 16), 1u,
            memory_order_relaxed);
        v5_.v5 = (_QWORD*)v3;
        v5_.v6 = (_QWORD*)v4;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                  memory_order_relaxed);
      }
      else {
        v5_.v5 = (_QWORD*)GameData_2235760;
        v5_.v6 = nullptr;
      }
      GameRoutine_1078600(result + 30, (__int64*)&v5_.v5, a2, -1);
      result = v5_.v6;
      if (v5_.v6 != nullptr) {
        result = (_QWORD*)std___1___shared_weak_count___release_weak_alt1(
            (__int64)v5_.v6);
      }
      if (v4 != 0) {
        return (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v4);
      }
    }
  }
  return result;
}

void CharacterBuilder_107e140(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v3;
  unsigned __int8 explicit;
  int* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64* v23;
  struct {
    __int64 v24;
    __int64 v25;
  } v24_;

  if ((*(_BYTE*)(a1 + 264) & 1) == 0) {
    v3 = *(_QWORD*)(a1 + 8);
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212fea0,
                                    memory_order_acquire);
    v6 = GameData_212fe98;
    if ((explicit & 1) == 0) {
      v21 = a3;
      v23 = a2;
      v22 = __cxa_guard_acquire_alt1((__int64)GameData_212fea0);
      a2 = v23;
      a3 = v21;
      if (v22 != 0) {
        *v6 = wld_Crc32_alt1(0, "CharacterDie", 0xCu);
        __cxa_guard_release_alt1((__int64)GameData_212fea0);
        a2 = v23;
        a3 = v21;
      }
    }
    v7 = *(_QWORD*)(v3 + 512);
    v8 = v7;
    while (v8 != *(_QWORD*)(v3 + 504)) {
      v9 = *(_DWORD*)(v8 - 16);
      v8 -= 16;
      v7 -= 16;
      if (v9 == *v6) {
        if (*(_QWORD*)(v3 + 512) != v7 && *(_QWORD*)(v7 + 8) != 0) {
          return;
        }
        break;
      }
    }
    if (**(_QWORD**)(a1 + 584) == 0) {
      *(_DWORD*)(a1 + 340) &= ~0x10000u;
      v10 = GameData_2235760;
      v11 = GameData_2235768;
      v12 = a2;
      if (GameData_2235768 != 0) {
        atomic_fetch_add_explicit(
            (atomic_ullong* volatile)(GameData_2235768 + 16), 1u,
            memory_order_relaxed);
        v24_.v24 = v10;
        v24_.v25 = v11;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                  memory_order_relaxed);
      }
      else {
        v24_.v24 = GameData_2235760;
        v24_.v25 = 0;
      }
      GameRoutine_1078600((_QWORD*)(a1 + 240), &v24_.v24, a3, -1);
      if (v24_.v25 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v24_.v25);
      }
      if (v11 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v11);
      }
      v13 = *(__int64**)(a1 + 584);
      v15 = *v12;
      v14 = v12[1];
      if (v14 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                  memory_order_relaxed);
      }
      v16 = v13[1];
      *v13 = v15;
      v13[1] = v14;
      if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        std___1___shared_weak_count___release_weak_alt1(v16);
      }
      game_character_CharacterAppearance_LoadAsync(*v13);
      v17 = **(_QWORD**)(a1 + 584);
      if (v17 != 0 && (CharacterAppearance_1074940(v17) & 1) != 0 &&
          (*(_BYTE*)(a1 + 342) & 0x40) == 0) {
        GameRoutine_10e8800(*(__int64**)(a1 + 584), *(_QWORD*)(a1 + 8));
      }
      if (*(_QWORD*)(a1 + 392) == 0) {
        v19 = *v12;
        v18 = v12[1];
        if (v18 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                    memory_order_relaxed);
        }
        v20 = *(_QWORD*)(a1 + 400);
        *(_QWORD*)(a1 + 392) = v19;
        *(_QWORD*)(a1 + 400) = v18;
        if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
          std___1___shared_weak_count___release_weak_alt1(v20);
        }
      }
    }
  }
}

__int64 CharacterBuilder_Unknown5(__int64 a1)
{
  __int64* v1;
  __int64 v3;
  __int64 v4;
  int* v5;
  bool v6;
  __int64 v7;
  float v8;
  float v9;
  int v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  float* v14;
  int v15;
  __int64 v16;
  __int64 v17;
  _BYTE** v18;
  _BYTE* v20;
  float v21;
  long double v22;
  int32x2_t v23;
  __int64 v24;
  int v25;
  bool v26;
  long double v27;
  float v28;
  int v29;
  float v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  float32x4_t* v40;
  float32x4_t v41;
  float32x4_t v42;
  int8x16_t v43;
  float32x4_t v44;
  __int64** v45;
  __int64** v46;
  float v47;
  __int64 v48;
  __int64* v49;
  __int64 v50;
  __int128 v51;
  char v52;
  __int64 v53;
  int v54;
  int v55;
  __int64 v56;
  __int64 v57;
  unsigned int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  _QWORD* v63;
  __int64 v64;
  int v65;
  float32x4_t* v66;
  __int128 v67;
  __int64 v68;
  _QWORD* v69;
  __int64 v70;
  __int64 v71;
  __int64 v73;
  float v74;
  int v75;
  __int64 v76;
  int v77;
  __int64 v78;
  unsigned int v79;
  float32x4_t v80;
  int8x16_t v81;
  __int64 v82;
  __int64 v83;
  unsigned int v84;
  __int64 v85;
  float v86;
  __int64 v87;
  float v88;
  int v89;
  bool v90;
  int v91;
  bool v92;
  int v93;
  __int16 v94;
  __int16 v95;
  __int64 v96;
  _QWORD* v97;
  _QWORD* v98;
  _QWORD* v99;
  __int64 v100;
  __int64 result;
  float v102;
  struct {
    _QWORD v103[4];
    _QWORD* v104;
  } v103_;

  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v1 = *(__int64**)(a1 + 584);
  v3 = *v1;
  v4 = v1[2];
  v5 = (int*)GameData_212d168;
  v6 = v3 == 0 || v4 == 0;
  if (!v6 && (CharacterAppearance_1074940(v3) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 72);
    v8 = 0x0.0p+0f;
    v9 = *(float*)(v7 + 148);
    v10 = *(_DWORD*)(v7 + 120);
    v11 = *(_QWORD*)(v7 + 96);
    if (v11 != 0) {
      v12 = GameRoutine_d2b5f0(*(_QWORD*)(v11 + 32) + 72LL),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if ((v12 & 0x100000000LL) != 0) {
        v13 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 24) + 72LL) +
                         104LL * (int)v12);
        if (v13 != 0) {
          v14 = *(float**)(v13 + 16);
          if (v14 != nullptr) {
            v8 = *v14 * 0x1.1111120000000p-6f;
          }
        }
      }
    }
    v15 = *(_DWORD*)(*(_QWORD*)(a1 + 72) + 112LL);
    v16 = *(_QWORD*)(a1 + 88);
    v17 = *(_QWORD*)(v16 + 136);
    v18 = *(_BYTE***)(v16 + 152);
    if (v17 == 0 || v18 == nullptr) {
      v20 = nullptr;
    }
    else {
      v20 = *v18;
    }
    v21 = *(float*)(a1 + 336);
    GameRoutine_107ec40(a1),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v15 != 0 && CharacterAnimator_107aaa0(*(_QWORD*)(a1 + 72), v15)) {
      v24 = *(_QWORD*)(a1 + 72);
      if (GameRoutine_108cb20(v15)) {
        v25 = v15 == 119788728 ? 0 : v15;
        if (*(_DWORD*)(v24 + 112) != v25) {
          *(_DWORD*)(v24 + 112) = v25;
        }
      }
    }
    if (v10 != 0) {
      v26 = !CharacterAnimator_107aaa0(*(_QWORD*)(a1 + 72), v10),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v26) {
        v28 = 0x0.0p+0f;
      }
      else {
        v28 = v8;
      }
      if (v26) {
        v29 = 119788728;
      }
      else {
        v29 = v10;
      }
      if (v26) {
        v30 = 0x1.0000000000000p+0f;
      }
      else {
        v30 = v9;
      }
      *(_QWORD*)&v27 = 0;
      *(float*)&v22 =
          CharacterAnimator_1079580(*(_QWORD*)(a1 + 72), v29, v27, v28, v30),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    if (v20 != nullptr) {
      v31 = *(_QWORD*)(a1 + 88);
      v32 = *(_QWORD*)(v31 + 32);
      if (v32 != 0) {
        v33 = *(_QWORD*)(v32 + 8);
        v34 = *(_QWORD*)(v31 + 40);
        if (v33 != -1 && v34 != 0) {
          v37 = *(_QWORD*)(v34 + 392);
          v36 = *(_QWORD*)(v34 + 400);
          if (v36 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 8), 1u,
                                      memory_order_relaxed);
            if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64, long double))(*(_QWORD*)v36 + 16LL))(v36,
                                                                         v22),
                  v22 = COERCE_AS(__typeof__(v22),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
              std___1___shared_weak_count___release_weak_alt1(v36),
                  v22 = COERCE_AS(__typeof__(v22),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
          }
          v38 = GameRoutine_10adb80((_DWORD*)(v37 + 1432), v20),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
          if ((v38 & 0x80000000) == 0) {
            CharacterFacialController_10b2280(v31, v38, 0x0.0p+0f),
                v22 = COERCE_AS(__typeof__(v22),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
        }
      }
    }
    if (v21 >= 0x0.0p+0f) {
      v39 = *(_QWORD*)(a1 + 392);
      *(float*)(a1 + 336) = v21;
      if (v39 != 0) {
        v40 = *(float32x4_t**)(a1 + 8);
        PSEUDO_LOW_LANE64(
            v23, n64_f32,
            *(float*)(v39 + 40) +
                (float)((float)(0x1.0000000000000p+0f - *(float*)(v39 + 40)) *
                        v21));
        v41 = vdupq_lane_s32(v23, 0);
        LANES128(v41).n128_u32[3] = 0;
        v42 = vsubq_f32(v40[22], v41);
        v43 = vmulq_f32(v42, v42);
        LANES128(v43).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v43, v43, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0])))
                .n64_u64[0];
        if (__builtin_islessgreater(
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0])))
                    .n64_f32[0],
                0x0.0p+0f)) {
          LANES128(v40[22]).n128_u32[0] = LANES64(v23).n64_u32[0];
          LANES128(v40[22]).n128_u32[1] = LANES64(v23).n64_u32[0];
          v44 = v40[22];
          LANES128(v40[18]).n128_u32[2] |= 1u;
          LANES128(v44).n128_u64[1] = LANES64(v23).n64_u32[0];
          v40[22] = v44;
          v39 = *(_QWORD*)(a1 + 392);
        }
        v45 = *(__int64***)(a1 + 528);
        v46 = *(__int64***)(a1 + 536);
        if (v45 != v46) {
          v47 = *(float*)(v39 + 44) +
                (float)((float)(0x1.0000000000000p+0f - *(float*)(v39 + 44)) *
                        v21);
          v102 = v47;
          do {
            v49 = *v45;
            *((float*)v49 + 28) = v47;
            *((float*)v49 + 29) = v47;
            v50 = *v49;
            v51 = *((_OWORD*)v49 + 7);
            *((_DWORD*)v49 + 32) |= 0x20u;
            v52 = *((_BYTE*)v49 + 28);
            *((_QWORD*)&v51 + 1) = LODWORD(v47);
            *((_OWORD*)v49 + 7) = v51;
            if ((v52 & 1) != 0) {
              goto LABEL_56;
            }
            v53 = *(_QWORD*)(v50 + 24);
            v54 = *((_DWORD*)v49 + 4);
            v103_.v103[0] = GameData_1fc0970;
            v103_.v103[1] = v50;
            v103_.v103[2] = v49;
            v103_.v104 = v103_.v103;
            v55 = Model_a661a0(v53, v54, (__int64)v103_.v103, 0),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
            if (v103_.v104 == v103_.v103) {
              v48 = 32;
            }
            else {
              if (v103_.v104 == nullptr) {
                goto LABEL_55;
              }
              v48 = 40;
            }
            (*(void (**)(__int64))(*v103_.v104 + v48))((__int64)v103_.v104),
                v22 = COERCE_AS(__typeof__(v22),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          LABEL_55:
            v47 = v102;
            *((_DWORD*)v49 + 6) = v55;
            *((_BYTE*)v49 + 28) = 1;
          LABEL_56:
            ++v45;
            *(_BYTE*)(*(_QWORD*)(v50 + 24) + 504LL) = 1;
          } while (v45 != v46);
        }
        GameHr_1083840(a1),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    if (*(_DWORD*)(a1 + 384) == 0) {
      if (*v5 != 2) {
        goto LABEL_73;
      }
      v56 = *(_QWORD*)(a1 + 392);
      v57 = *(_QWORD*)(a1 + 400);
      if (v57 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v57 + 8), 1u,
                                  memory_order_relaxed);
        v58 = *(_DWORD*)(v56 + 11784);
        if (atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v57 + 16LL))(v57, v22),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v57),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      else {
        v58 = *(_DWORD*)(v56 + 11784);
      }
      if (v58 > 0x1A) {
        goto LABEL_73;
      }
      if (((1 << v58) & 0x410C) != 0) {
        *(_DWORD*)(*(_QWORD*)(a1 + 104) + 212LL) = 0;
        goto LABEL_74;
      }
      if (((1 << v58) & 0x5000080) != 0) {
        *(_DWORD*)(*(_QWORD*)(a1 + 104) + 212LL) = 0;
      }
      else {
      LABEL_73:
        *(_DWORD*)(a1 + 384) = 1;
      }
    }
  LABEL_74:
    v59 = *(_QWORD*)(a1 + 240);
    v60 = *(_QWORD*)(a1 + 248);
    *(_DWORD*)(a1 + 340) |= 0x10000u;
    *(_BYTE*)(a1 + 264) = 1;
    if (v59 != v60) {
      do {
        if (*(_DWORD*)v59 != 0) {
          v61 = *(_QWORD*)(v59 + 16);
          if (v61 == 0 || *(_QWORD*)(v61 + 8) == -1) {
            goto LABEL_76;
          }
          v103_.v103[0] = a1;
          v62 = *(_QWORD*)(v59 + 64);
          if (v62 == 0) {
            GameRoutine_60a310_alt1(),
                v22 = COERCE_AS(__typeof__(v22),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          (*(void (**)(__int64, _QWORD*, long double))(*(_QWORD*)v62 + 48LL))(
              v62, v103_.v103, v22),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          if ((*(_DWORD*)v59 & 0x80000000) != 0) {
          LABEL_76:
            *(_DWORD*)v59 = 0;
          }
        }
        v59 += 80;
      } while (v59 != v60);
      v59 = *(_QWORD*)(a1 + 240);
      v60 = *(_QWORD*)(a1 + 248);
    }
    *(_BYTE*)(a1 + 264) = 0;
    if (v59 == v60) {
    LABEL_86:
      v63 = *(_QWORD**)(a1 + 584);
      *(_QWORD*)(a1 + 248) = v59;
      GameHr_10e8690(v63),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
      goto LABEL_87;
    }
    while (1) {
      v69 = *(_QWORD**)(v60 - 16);
      if ((_QWORD*)(v60 - 48) == v69) {
        break;
      }
      if (v69 != nullptr) {
        v70 = 40;
      LABEL_100:
        (*(void (**)(void*))(*v69 + v70))(v69),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v71 = *(_QWORD*)(v60 - 64);
      if (v71 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v71),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v60 -= 80;
      if (v60 == v59) {
        goto LABEL_86;
      }
    }
    v70 = 32;
    goto LABEL_100;
  }
LABEL_87:
  v64 = **(_QWORD**)(a1 + 584);
  if (v64 != 0 && (CharacterAppearance_1074940(v64) & 1) != 0) {
    GameRoutine_10e8800(*(__int64**)(a1 + 584), *(_QWORD*)(a1 + 8)),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v65 = *v5;
  if (*(_DWORD*)(a1 + 344) != *v5) {
    if (v65 == 6 || v65 == 1) {
      v73 = *(_QWORD*)(a1 + 104);
      v74 = 0x0.0p+0f;
      v75 = *(_DWORD*)(v73 + 56);
      *(_DWORD*)(v73 + 64) = 0;
      *(_DWORD*)(v73 + 56) = v75 | 0x20000;
      v76 = *(_QWORD*)(a1 + 112);
      v77 = *(_DWORD*)(v76 + 96);
      *(_DWORD*)(v76 + 104) = 0;
      *(_DWORD*)(v76 + 96) = v77 | 0x20000;
      v78 = *(_QWORD*)(a1 + 88);
      v79 = *(_DWORD*)(v78 + 96) | 0x20000;
    }
    else {
      v85 = *(_QWORD*)(a1 + 104);
      v74 = 0x0.0p+0f;
      if ((*(_DWORD*)(v85 + 56) & 0xFFFDFFFF) != 0) {
        v86 = 0x0.0p+0f;
      }
      else {
        v86 = 0x1.0000000000000p+0f;
      }
      *(_DWORD*)(v85 + 56) &= ~0x20000u;
      *(float*)(v85 + 64) = v86;
      v87 = *(_QWORD*)(a1 + 112);
      if ((*(_DWORD*)(v87 + 96) & 0xFFFDFFFF) != 0) {
        v88 = 0x0.0p+0f;
      }
      else {
        v88 = 0x1.0000000000000p+0f;
      }
      *(_DWORD*)(v87 + 96) &= ~0x20000u;
      *(float*)(v87 + 104) = v88;
      v78 = *(_QWORD*)(a1 + 88);
      v79 = *(_DWORD*)(v78 + 96) & 0xFFFDFFFF;
      if (v79 == 0) {
        v74 = 0x1.0000000000000p+0f;
      }
    }
    *(_DWORD*)(v78 + 96) = v79;
    *(float*)(v78 + 104) = v74;
    if ((*(_BYTE*)(a1 + 343) & 2) != 0) {
      v89 = *(_DWORD*)(a1 + 344);
      v90 = v89 == 1 || v89 == 6;
      v91 = !v90;
      v92 = v65 == 1 || v65 == 6;
      v93 = !v92;
      if (v89 == 0 || v93 != v91) {
        v103_.v104 = v103_.v103;
        if (v93 != 0) {
          v94 = 256;
        }
        else {
          v94 = 0;
        }
        if (v89 != 0) {
          v95 = v94;
        }
        else {
          v95 = v94 + 1;
        }
        v103_.v103[0] = GameData_200d938;
        LOWORD(v103_.v103[1]) = v95;
        CharacterBuilder_1083e90((_QWORD*)a1, (__int64)v103_.v103),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v103_.v104 == v103_.v103) {
          v96 = 32;
        }
        else {
          if (v103_.v104 == nullptr) {
            goto LABEL_150;
          }
          v96 = 40;
        }
        (*(void (**)(__int64))(*v103_.v104 + v96))((__int64)v103_.v104),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
  LABEL_150:
    *(_DWORD*)(a1 + 344) = v65;
    if ((*(_BYTE*)(a1 + 341) & 0x20) == 0) {
      goto LABEL_92;
    }
    goto LABEL_151;
  }
  if ((*(_BYTE*)(a1 + 341) & 0x20) == 0) {
  LABEL_92:
    v66 = *(float32x4_t**)(a1 + 8);
    if (*(_DWORD*)(a1 + 384) == 0) {
      if ((*(_BYTE*)(a1 + 368) & 1) == 0 &&
              (LANES128(v66[18]).n128_u8[1] & 1) != 0 ||
          (v80 = vsubq_f32(v66[19], *(float32x4_t*)(a1 + 352)),
           v81 = vmulq_f32(v80, v80),
           LANES128(v81).n128_u64[0] =
               LANES64_OF(
                   vadd_f32(COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v81, v81, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v81).n128_u64[0])))
                   .n64_u64[0],
           LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v81).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v81).n128_u64[0])))
                   .n64_f32[0] > 0x1.2000000000000p+3f)) {
        if (*v5 != 2) {
          goto LABEL_179;
        }
        v82 = *(_QWORD*)(a1 + 392);
        v83 = *(_QWORD*)(a1 + 400);
        if (v83 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v83 + 8), 1u,
                                    memory_order_relaxed);
          v84 = *(_DWORD*)(v82 + 11784);
          if (atomic_fetch_add((atomic_ullong* volatile)(v83 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v83 + 16LL))(v83),
                v22 = COERCE_AS(__typeof__(v22),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            std___1___shared_weak_count___release_weak_alt1(v83),
                v22 = COERCE_AS(__typeof__(v22),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
        }
        else {
          v84 = *(_DWORD*)(v82 + 11784);
        }
        if (v84 > 0x1A) {
          goto LABEL_179;
        }
        if (((1 << v84) & 0x410C) != 0) {
          *(_DWORD*)(*(_QWORD*)(a1 + 104) + 212LL) = 0;
          goto LABEL_93;
        }
        if (((1 << v84) & 0x5000080) != 0) {
          *(_DWORD*)(*(_QWORD*)(a1 + 104) + 212LL) = 0;
        }
        else {
        LABEL_179:
          *(_DWORD*)(a1 + 384) = 1;
        }
      }
    }
  LABEL_93:
    *(_DWORD*)(a1 + 352) = LANES128(v66[19]).n128_u32[0];
    *(_DWORD*)(a1 + 356) = LANES128(v66[19]).n128_u32[1];
    v67 = *(_OWORD*)(a1 + 352);
    *((_QWORD*)&v67 + 1) = LANES128(v66[19]).n128_u32[2];
    *(_OWORD*)(a1 + 352) = v67;
    *(_BYTE*)(a1 + 368) = LANES128(v66[18]).n128_u8[1];
    v68 = *(_QWORD*)(a1 + 512);
    if (v68 == 0) {
      goto LABEL_170;
    }
    goto LABEL_152;
  }
LABEL_151:
  v68 = *(_QWORD*)(a1 + 512);
  if (v68 == 0) {
    goto LABEL_170;
  }
LABEL_152:
  v97 = *(_QWORD**)(v68 + 24);
  v98 = *(_QWORD**)(v68 + 32);
  if (v97 != v98) {
    do {
      if (*(_BYTE*)(v97[1] + 88LL) == 1) {
        GameHr_a867a0((__int64)v97),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
        *v97 = 0;
      }
      v97 += 2;
    } while (v97 != v98);
    v97 = *(_QWORD**)(v68 + 24);
    v98 = *(_QWORD**)(v68 + 32);
    if (v97 != v98) {
      while (*v97 != 0) {
        v97 += 2;
        if (v97 == v98) {
          goto LABEL_170;
        }
      }
    }
  }
  if (v97 != v98) {
    v99 = v97 + 2;
    if (v97 + 2 != v98) {
      do {
        if (*v99 != 0) {
          v100 = v99[1];
          *v97 = *v99;
          v97[1] = v100;
          v97 += 2;
        }
        v99 += 2;
      } while (v99 != v98);
      v98 = *(_QWORD**)(v68 + 32);
    }
  }
  if (v97 != v98) {
    *(_QWORD*)(v68 + 32) = v97;
  }
LABEL_170:
  result = *(_QWORD*)(a1 + 320);
  if (result != 0) {
    return GameHr_d31080(result);
  }
  return result;
}

__int64 game_character_CharacterBuilder_LateUpdate(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  struct {
    __int64 (**v4)();
    char v5;
    char gap9_[23];
    __int64 (***v6)();
  } v4_;

  if (*(_DWORD*)(result + 384) != 0) {
    v1 = result;
    if ((*(_BYTE*)(result + 342) & 1) != 0) {
      v4_.v5 = 0;
      *(_DWORD*)(result + 384) = 2;
      v4_.v6 = &v4_.v4;
      v4_.v4 = GameData_2006dc0;
      CharacterBuilder_1083e90((_QWORD*)result, (__int64)&v4_.v4);
      if (v4_.v6 == &v4_.v4) {
        v2 = 4;
      }
      else {
        if (v4_.v6 == nullptr) {
          goto LABEL_8;
        }
        v2 = 5;
      }
      ((__int64 (*)(__int64))(*v4_.v6)[v2])((__int64)v4_.v6);
    LABEL_8:
      v4_.v5 = 0;
      v4_.v4 = GameData_2006e40;
      v4_.v6 = &v4_.v4;
      CharacterBuilder_1083e90((_QWORD*)v1, (__int64)&v4_.v4);
      result = (__int64)v4_.v6;
      if (v4_.v6 == &v4_.v4) {
        v3 = 4;
      }
      else {
        if (v4_.v6 == nullptr) {
        LABEL_13:
          *(_DWORD*)(v1 + 384) = 0;
          return result;
        }
        v3 = 5;
      }
      result = ((__int64 (*)(__int64))(*v4_.v6)[v3])((__int64)v4_.v6);
      goto LABEL_13;
    }
  }
  return result;
}

__int64 CharacterBuilder_10823c0(__int64* a1)
{
  __int64 v1;
  atomic_uchar* v2;
  unsigned __int8 explicit;
  int* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  unsigned __int8 v10;
  int* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v25;
  __int64 v26;
  _BYTE* v27;
  _BYTE* v28;
  bool v29;
  __int64* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  char* v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  int v59;
  __int64* v60;
  int v61;
  _QWORD v62[2];

  v1 = *a1;
  v2 = (atomic_uchar*)GameData_212ed90;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ed90,
                                  memory_order_acquire);
  v4 = GameData_212ed88;
  if ((explicit & 1) == 0) {
    v58 = a1;
    v59 = __cxa_guard_acquire_alt1((__int64)GameData_212ed90);
    a1 = v58;
    if (v59 != 0) {
      *v4 = wld_Crc32_alt1(0, "AnimLayerCtrlModule", 0x13u);
      __cxa_guard_release_alt1((__int64)GameData_212ed90);
      a1 = v58;
    }
  }
  v5 = *(_QWORD*)(v1 + 512);
  v6 = v5;
  do {
    if (v6 == *(_QWORD*)(v1 + 504)) {
      goto LABEL_7;
    }
    v7 = *(_DWORD*)(v6 - 16);
    v6 -= 16;
    v5 -= 16;
  } while (v7 != *v4);
  if (*(_QWORD*)(v1 + 512) == v5 || (v8 = *(_QWORD*)(v5 + 8)) == 0) {
  LABEL_7:
    v9 = *a1;
    v10 = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                               memory_order_acquire);
    v11 = GameData_212df08;
    if ((v10 & 1) == 0) {
      v60 = a1;
      v61 = __cxa_guard_acquire_alt1((__int64)GameData_212df10);
      a1 = v60;
      if (v61 != 0) {
        *v11 = wld_Crc32_alt1(0, "ModelModule", 0xBu);
        __cxa_guard_release_alt1((__int64)GameData_212df10);
        a1 = v60;
      }
    }
    v12 = *(_QWORD*)(v9 + 512);
    v13 = v12;
    do {
      if (v13 == *(_QWORD*)(v9 + 504)) {
        return 0;
      }
      v14 = *(_DWORD*)(v13 - 16);
      v13 -= 16;
      v12 -= 16;
    } while (v14 != *v11);
    if (*(_QWORD*)(v9 + 512) != v12) {
      v15 = *(_QWORD*)(v12 + 8);
      if (v15 != 0) {
        v16 = *(_QWORD*)(v15 + 24);
        if (v16 != 0) {
          v17 = *a1;
          nn_os_LockMutex_alt1((__int64)GameData_212df28);
          v18 = (__int64*)fw_memory_g_heap_manager_ptr;
          v8 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 120, 16, 0);
          GameRoutine_ce3010_alt1(v8, v17, v16, 2u, 6u);
          if ((atomic_load_explicit(v2, memory_order_acquire) & 1) == 0 &&
              __cxa_guard_acquire_alt1((__int64)GameData_212ed90) != 0) {
            *v4 = wld_Crc32_alt1(0, "AnimLayerCtrlModule", 0x13u);
            __cxa_guard_release_alt1((__int64)GameData_212ed90);
          }
          v19 = *v4;
          v20 = *(_QWORD*)(v17 + 504);
          v21 = *(_QWORD*)(v17 + 512);
          v22 = v21;
          LODWORD(v62[0]) = v19;
          v62[1] = v8;
          while (v22 != v20) {
            v23 = *(_DWORD*)(v22 - 16);
            v22 -= 16;
            if (v23 == v19) {
              if ((*(_BYTE*)(v8 + 16) & 1) != 0) {
                goto LABEL_35;
              }
              goto LABEL_29;
            }
          }
          if (v20 == v21 &&
              (unsigned __int64)(*(_QWORD*)(v17 + 520) - v20) <= 0x6F) {
            v25 = fw_memory_HeapManager_Allocate_alt1(*v18, 112, 16, 0);
            *(_QWORD*)(v17 + 504) = v25;
            *(_QWORD*)(v17 + 512) = v25;
            *(_QWORD*)(v17 + 520) = v25 + 112;
            if (v21 != 0) {
              v26 = 128;
              if (*(_QWORD*)(*v18 + 200) == 0) {
                v26 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v18 + v26, v20);
            }
          }
          GameRoutine_98f140_alt1((__int64*)(v17 + 504), v62);
          if ((*(_BYTE*)(v8 + 16) & 1) == 0) {
          LABEL_29:
            *(_BYTE*)(v8 + 16) = 1;
            *(_BYTE*)(v8 + 17) &= ~2u;
            *(_BYTE*)(v8 + 18) &= ~2u;
            *(_BYTE*)(v8 + 19) &= ~2u;
            *(_BYTE*)(v8 + 20) &= ~2u;
            v27 = *(_BYTE**)(v8 + 8);
            v27[632] = 0;
            v27[664] = 0;
            v27[696] = 0;
            v27[728] = 0;
            (*(void (**)(__int64))(*(_QWORD*)v8 + 64LL))(v8);
            v28 = *(_BYTE**)(v8 + 8);
            v29 = v28[300] == 3 && v28[301] == 3;
            if (v29 || v28[302] == 1) {
              (*(void (**)(__int64))(*(_QWORD*)v8 + 72LL))(v8);
            }
          }
        LABEL_35:
          v30 = *(__int64**)(v17 + 536);
          v31 = *(_QWORD*)(v17 + 544);
          if ((unsigned __int64)v30 >= v31) {
            v33 = *(_QWORD*)(v17 + 528);
            v34 = (char*)v30 - v33;
            v35 = ((__int64)v30 - v33) >> 3;
            v36 = v35 + 1;
            if ((unsigned __int64)(v35 + 1) >> 61 != 0) {
              goto LABEL_74;
            }
            v37 = v31 - v33;
            if (v37 >> 2 > v36) {
              v36 = v37 >> 2;
            }
            if ((unsigned __int64)v37 >= 0x7FFFFFFFFFFFFFF8LL) {
              v38 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v38 = v36;
            }
            if (v38 != 0) {
              if (v38 >> 61 != 0) {
                goto LABEL_75;
              }
              v39 = fw_memory_HeapManager_Allocate_alt1(*v18, 8 * v38, 16, 0);
            }
            else {
              v39 = 0;
            }
            v40 = v39 + 8 * v38;
            v41 = (unsigned __int64)v30 - v33;
            v42 = (__int64)&v34[v39 + -8 * v35];
            *(_QWORD*)&v34[v39] = v8;
            v32 = (__int64)&v34[v39 + 8];
            memcpy_alt1(v42, v33, v41);
            *(_QWORD*)(v17 + 528) = v42;
            *(_QWORD*)(v17 + 536) = v32;
            *(_QWORD*)(v17 + 544) = v40;
            if (v33 != 0) {
              v43 = 128;
              if (*(_QWORD*)(*v18 + 200) == 0) {
                v43 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v18 + v43, v33);
            }
          }
          else {
            *v30 = v8;
            v32 = (__int64)(v30 + 1);
          }
          *(_QWORD*)(v17 + 536) = v32;
          v44 = *(__int64**)(v17 + 560);
          v45 = *(_QWORD*)(v17 + 568);
          if ((unsigned __int64)v44 < v45) {
            *v44 = v8;
            v46 = (__int64)(v44 + 1);
          LABEL_67:
            *(_QWORD*)(v17 + 560) = v46;
            GameRoutine_a8c0c0_alt1(v17);
            *(_BYTE*)(v17 + 576) = 1;
            nn_os_UnlockMutex_alt1((__int64)GameData_212df28);
            *(_DWORD*)(*(_QWORD*)(v8 + 24) + 312LL) = 2;
            return v8;
          }
          v47 = *(_QWORD*)(v17 + 552);
          v48 = (char*)v44 - v47;
          v49 = ((__int64)v44 - v47) >> 3;
          v50 = v49 + 1;
          if ((unsigned __int64)(v49 + 1) >> 61 == 0) {
            v51 = v45 - v47;
            if (v51 >> 2 > v50) {
              v50 = v51 >> 2;
            }
            if ((unsigned __int64)v51 >= 0x7FFFFFFFFFFFFFF8LL) {
              v52 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v52 = v50;
            }
            if (v52 == 0) {
              v53 = 0;
            LABEL_63:
              v54 = v53 + 8 * v52;
              v55 = (unsigned __int64)v44 - v47;
              v56 = (__int64)&v48[v53 + -8 * v49];
              *(_QWORD*)&v48[v53] = v8;
              v46 = (__int64)&v48[v53 + 8];
              memcpy_alt1(v56, v47, v55);
              *(_QWORD*)(v17 + 552) = v56;
              *(_QWORD*)(v17 + 560) = v46;
              *(_QWORD*)(v17 + 568) = v54;
              if (v47 != 0) {
                v57 = 128;
                if (*(_QWORD*)(*v18 + 200) == 0) {
                  v57 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*v18 + v57, v47);
              }
              goto LABEL_67;
            }
            if (v52 >> 61 == 0) {
              v53 = fw_memory_HeapManager_Allocate_alt1(*v18, 8 * v52, 16, 0);
              goto LABEL_63;
            }
          LABEL_75:
            GameRoutine_60a210_alt1();
          }
        LABEL_74:
          GameRoutine_98f290_alt1();
        }
      }
    }
    return 0;
  }
  return v8;
}

__int64 CharacterBuilder_1082900(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  unsigned __int8 explicit;
  int* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  _BYTE* v14;
  bool v15;
  __int64* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD v45[2];

  nn_os_LockMutex_alt1((__int64)GameData_212df28);
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 176, 16, 0);
  wld_ClothColliderModule_ClothColliderModule(v3, a1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ff38,
                                  memory_order_acquire);
  v5 = GameData_212ff30;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212ff38) != 0) {
    *v5 = wld_Crc32_alt1(0, "ClothColliderModule", 0x13u);
    __cxa_guard_release_alt1((__int64)GameData_212ff38);
  }
  v6 = *v5;
  v7 = *(_QWORD*)(a1 + 504);
  v8 = *(_QWORD*)(a1 + 512);
  v9 = v8;
  LODWORD(v45[0]) = v6;
  v45[1] = v3;
  while (v9 != v7) {
    v10 = *(_DWORD*)(v9 - 16);
    v9 -= 16;
    if (v10 == v6) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v7 == v8 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v7) <= 0x6F) {
    v11 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v11;
    *(_QWORD*)(a1 + 512) = v11;
    *(_QWORD*)(a1 + 520) = v11 + 112;
    if (v8 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v12, v7);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(a1 + 504), v45);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v13 = *(_BYTE**)(v3 + 8);
    v13[632] = 0;
    v13[664] = 0;
    v13[696] = 0;
    v13[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v14 = *(_BYTE**)(v3 + 8);
    v15 = v14[300] == 3 && v14[301] == 3;
    if (v15 || v14[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }
LABEL_20:
  v16 = *(__int64**)(a1 + 536);
  v17 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v16 >= v17) {
    v19 = *(_QWORD*)(a1 + 528);
    v20 = (char*)v16 - v19;
    v21 = ((__int64)v16 - v19) >> 3;
    v22 = v21 + 1;
    if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v23 = v17 - v19;
    if (v23 >> 2 > v22) {
      v22 = v23 >> 2;
    }
    if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL) {
      v24 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v24 = v22;
    }
    if (v24 != 0) {
      if (v24 >> 61 != 0) {
        goto LABEL_56;
      }
      v25 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v24, 16, 0);
    }
    else {
      v25 = 0;
    }
    v26 = v25 + 8 * v24;
    v27 = (unsigned __int64)v16 - v19;
    v28 = (__int64)&v20[v25 + -8 * v21];
    *(_QWORD*)&v20[v25] = v3;
    v18 = (__int64)&v20[v25 + 8];
    memcpy_alt1(v28, v19, v27);
    *(_QWORD*)(a1 + 528) = v28;
    *(_QWORD*)(a1 + 536) = v18;
    *(_QWORD*)(a1 + 544) = v26;
    if (v19 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v29, v19);
    }
  }
  else {
    *v16 = v3;
    v18 = (__int64)(v16 + 1);
  }
  *(_QWORD*)(a1 + 536) = v18;
  v30 = *(__int64**)(a1 + 560);
  v31 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v30 < v31) {
    *v30 = v3;
    v32 = (__int64)(v30 + 1);
    goto LABEL_52;
  }
  v33 = *(_QWORD*)(a1 + 552);
  v34 = (char*)v30 - v33;
  v35 = ((__int64)v30 - v33) >> 3;
  v36 = v35 + 1;
  if ((unsigned __int64)(v35 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290_alt1();
  }
  v37 = v31 - v33;
  if (v37 >> 2 > v36) {
    v36 = v37 >> 2;
  }
  if ((unsigned __int64)v37 >= 0x7FFFFFFFFFFFFFF8LL) {
    v38 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v38 = v36;
  }
  if (v38 != 0) {
    if (v38 >> 61 == 0) {
      v39 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v38, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210_alt1();
  }
  v39 = 0;
LABEL_48:
  v40 = v39 + 8 * v38;
  v41 = (unsigned __int64)v30 - v33;
  v42 = (__int64)&v34[v39 + -8 * v35];
  *(_QWORD*)&v34[v39] = v3;
  v32 = (__int64)&v34[v39 + 8];
  memcpy_alt1(v42, v33, v41);
  *(_QWORD*)(a1 + 552) = v42;
  *(_QWORD*)(a1 + 560) = v32;
  *(_QWORD*)(a1 + 568) = v40;
  if (v33 != 0) {
    v43 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v2 + v43, v33);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v32;
  GameRoutine_a8c0c0_alt1(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex_alt1((__int64)GameData_212df28);
  return v3;
}

__int64 CharacterBuilder_1082ce0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  unsigned __int8 explicit;
  int* v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  _BYTE* v20;
  _BYTE* v21;
  bool v22;
  __int64* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD v52[2];

  nn_os_LockMutex_alt1((__int64)GameData_212df28);
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
  *(_BYTE*)(v3 + 16) = 0;
  v4 = v3;
  *(_DWORD*)(v3 + 17) = 33686018;
  v5 = GameData_212e370[0];
  *(_BYTE*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 36) = 0;
  *(_QWORD*)(v3 + 44) = 0;
  *(_QWORD*)(v3 + 52) = 0;
  *(_QWORD*)(v3 + 60) = 0;
  *(_QWORD*)(v3 + 68) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)v3 = v5 + 16;
  *(_QWORD*)(v3 + 8) = a1;
  LOBYTE(v5) = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                    memory_order_acquire);
  v6 = GameData_212df08;
  if ((v5 & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212df10) != 0) {
    *v6 = wld_Crc32_alt1(0, "ModelModule", 0xBu);
    __cxa_guard_release_alt1((__int64)GameData_212df10);
  }
  v7 = *(_QWORD*)(a1 + 512);
  v8 = v7;
  do {
    v9 = *(_DWORD*)(v8 - 16);
    v8 -= 16;
    v7 -= 16;
  } while (v9 != *v6);
  v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 8) + 24LL) + 168LL);
  if (v10 != 0) {
    *(_QWORD*)(v4 + 96) = *(_QWORD*)(v10 + 32);
  }
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ff48,
                                  memory_order_acquire);
  v12 = GameData_212ff40;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212ff48) != 0) {
    *v12 = wld_Crc32_alt1(0, "ClothWindModule", 0xFu);
    __cxa_guard_release_alt1((__int64)GameData_212ff48);
  }
  v13 = *v12;
  v14 = *(_QWORD*)(a1 + 504);
  v15 = *(_QWORD*)(a1 + 512);
  v16 = v15;
  LODWORD(v52[0]) = v13;
  v52[1] = v4;
  while (v16 != v14) {
    v17 = *(_DWORD*)(v16 - 16);
    v16 -= 16;
    if (v17 == v13) {
      if ((*(_BYTE*)(v4 + 16) & 1) != 0) {
        goto LABEL_25;
      }
      goto LABEL_19;
    }
  }
  if (v14 == v15 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v14) <= 0x6F) {
    v18 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v18;
    *(_QWORD*)(a1 + 512) = v18;
    *(_QWORD*)(a1 + 520) = v18 + 112;
    if (v15 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v19, v14);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(a1 + 504), v52);
  if ((*(_BYTE*)(v4 + 16) & 1) == 0) {
  LABEL_19:
    *(_BYTE*)(v4 + 16) = 1;
    *(_BYTE*)(v4 + 17) &= ~2u;
    *(_BYTE*)(v4 + 18) &= ~2u;
    *(_BYTE*)(v4 + 19) &= ~2u;
    *(_BYTE*)(v4 + 20) &= ~2u;
    v20 = *(_BYTE**)(v4 + 8);
    v20[632] = 0;
    v20[664] = 0;
    v20[696] = 0;
    v20[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 64LL))(v4);
    v21 = *(_BYTE**)(v4 + 8);
    v22 = v21[300] == 3 && v21[301] == 3;
    if (v22 || v21[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 72LL))(v4);
    }
  }
LABEL_25:
  v23 = *(__int64**)(a1 + 536);
  v24 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v23 >= v24) {
    v26 = *(_QWORD*)(a1 + 528);
    v27 = (char*)v23 - v26;
    v28 = ((__int64)v23 - v26) >> 3;
    v29 = v28 + 1;
    if ((unsigned __int64)(v28 + 1) >> 61 != 0) {
      goto LABEL_62;
    }
    v30 = v24 - v26;
    if (v30 >> 2 > v29) {
      v29 = v30 >> 2;
    }
    if ((unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFF8LL) {
      v31 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v31 = v29;
    }
    if (v31 != 0) {
      if (v31 >> 61 != 0) {
        goto LABEL_63;
      }
      v32 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v31, 16, 0);
    }
    else {
      v32 = 0;
    }
    v33 = v32 + 8 * v31;
    v34 = (unsigned __int64)v23 - v26;
    v35 = (__int64)&v27[v32 + -8 * v28];
    *(_QWORD*)&v27[v32] = v4;
    v25 = (__int64)&v27[v32 + 8];
    memcpy_alt1(v35, v26, v34);
    *(_QWORD*)(a1 + 528) = v35;
    *(_QWORD*)(a1 + 536) = v25;
    *(_QWORD*)(a1 + 544) = v33;
    if (v26 != 0) {
      v36 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v36, v26);
    }
  }
  else {
    *v23 = v4;
    v25 = (__int64)(v23 + 1);
  }
  *(_QWORD*)(a1 + 536) = v25;
  v37 = *(__int64**)(a1 + 560);
  v38 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v37 < v38) {
    *v37 = v4;
    v39 = (__int64)(v37 + 1);
    goto LABEL_57;
  }
  v40 = *(_QWORD*)(a1 + 552);
  v41 = (char*)v37 - v40;
  v42 = ((__int64)v37 - v40) >> 3;
  v43 = v42 + 1;
  if ((unsigned __int64)(v42 + 1) >> 61 != 0) {
  LABEL_62:
    GameRoutine_98f290_alt1();
  }
  v44 = v38 - v40;
  if (v44 >> 2 > v43) {
    v43 = v44 >> 2;
  }
  if ((unsigned __int64)v44 >= 0x7FFFFFFFFFFFFFF8LL) {
    v45 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v45 = v43;
  }
  if (v45 != 0) {
    if (v45 >> 61 == 0) {
      v46 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v45, 16, 0);
      goto LABEL_53;
    }
  LABEL_63:
    GameRoutine_60a210_alt1();
  }
  v46 = 0;
LABEL_53:
  v47 = v46 + 8 * v45;
  v48 = (unsigned __int64)v37 - v40;
  v49 = (__int64)&v41[v46 + -8 * v42];
  *(_QWORD*)&v41[v46] = v4;
  v39 = (__int64)&v41[v46 + 8];
  memcpy_alt1(v49, v40, v48);
  *(_QWORD*)(a1 + 552) = v49;
  *(_QWORD*)(a1 + 560) = v39;
  *(_QWORD*)(a1 + 568) = v47;
  if (v40 != 0) {
    v50 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v50 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v2 + v50, v40);
  }
LABEL_57:
  *(_QWORD*)(a1 + 560) = v39;
  GameRoutine_a8c0c0_alt1(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex_alt1((__int64)GameData_212df28);
  return v4;
}

__int64 CharacterBuilder_1083180(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  _BYTE* v11;
  _BYTE* v12;
  bool v13;
  __int64* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  char* v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD v43[2];

  nn_os_LockMutex_alt1((__int64)&GameData_2167580);
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 72, 16, 0);
  *(_BYTE*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  v4 = v3;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_DWORD*)(v3 + 17) = 33686018;
  *(_QWORD*)v3 = game_character_WeaponHoldModule_vtable;
  *(_QWORD*)(v3 + 8) = a1;
  *(_DWORD*)(v3 + 24) = -1;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22356c8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_22356c8) != 0) {
    GameData_22356c0 = wld_Crc32_alt1(0, "WeaponHoldModule", 0x10u);
    __cxa_guard_release_alt1((__int64)&GameData_22356c8);
  }
  v5 = *(_QWORD*)(a1 + 504);
  v6 = *(_QWORD*)(a1 + 512);
  v7 = v6;
  LODWORD(v43[0]) = GameData_22356c0;
  v43[1] = v4;
  while (v7 != v5) {
    v8 = *(_DWORD*)(v7 - 16);
    v7 -= 16;
    if (v8 == GameData_22356c0) {
      if ((*(_BYTE*)(v4 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v5 == v6 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v5) <= 0x6F) {
    v9 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v9;
    *(_QWORD*)(a1 + 512) = v9;
    *(_QWORD*)(a1 + 520) = v9 + 112;
    if (v6 != 0) {
      v10 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v10, v5);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(a1 + 504), v43);
  if ((*(_BYTE*)(v4 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v4 + 16) = 1;
    *(_BYTE*)(v4 + 17) &= ~2u;
    *(_BYTE*)(v4 + 18) &= ~2u;
    *(_BYTE*)(v4 + 19) &= ~2u;
    *(_BYTE*)(v4 + 20) &= ~2u;
    v11 = *(_BYTE**)(v4 + 8);
    v11[632] = 0;
    v11[664] = 0;
    v11[696] = 0;
    v11[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 64LL))(v4);
    v12 = *(_BYTE**)(v4 + 8);
    v13 = v12[300] == 3 && v12[301] == 3;
    if (v13 || v12[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 72LL))(v4);
    }
  }
LABEL_20:
  v14 = *(__int64**)(a1 + 536);
  v15 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v14 >= v15) {
    v17 = *(_QWORD*)(a1 + 528);
    v18 = (char*)v14 - v17;
    v19 = ((__int64)v14 - v17) >> 3;
    v20 = v19 + 1;
    if ((unsigned __int64)(v19 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v21 = v15 - v17;
    if (v21 >> 2 > v20) {
      v20 = v21 >> 2;
    }
    if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF8LL) {
      v22 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v22 = v20;
    }
    if (v22 != 0) {
      if (v22 >> 61 != 0) {
        goto LABEL_56;
      }
      v23 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v22, 16, 0);
    }
    else {
      v23 = 0;
    }
    v24 = v23 + 8 * v22;
    v25 = (unsigned __int64)v14 - v17;
    v26 = (__int64)&v18[v23 + -8 * v19];
    *(_QWORD*)&v18[v23] = v4;
    v16 = (__int64)&v18[v23 + 8];
    memcpy_alt1(v26, v17, v25);
    *(_QWORD*)(a1 + 528) = v26;
    *(_QWORD*)(a1 + 536) = v16;
    *(_QWORD*)(a1 + 544) = v24;
    if (v17 != 0) {
      v27 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v27, v17);
    }
  }
  else {
    *v14 = v4;
    v16 = (__int64)(v14 + 1);
  }
  *(_QWORD*)(a1 + 536) = v16;
  v28 = *(__int64**)(a1 + 560);
  v29 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v28 < v29) {
    *v28 = v4;
    v30 = (__int64)(v28 + 1);
    goto LABEL_52;
  }
  v31 = *(_QWORD*)(a1 + 552);
  v32 = (char*)v28 - v31;
  v33 = ((__int64)v28 - v31) >> 3;
  v34 = v33 + 1;
  if ((unsigned __int64)(v33 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290_alt1();
  }
  v35 = v29 - v31;
  if (v35 >> 2 > v34) {
    v34 = v35 >> 2;
  }
  if ((unsigned __int64)v35 >= 0x7FFFFFFFFFFFFFF8LL) {
    v36 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v36 = v34;
  }
  if (v36 != 0) {
    if (v36 >> 61 == 0) {
      v37 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v36, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210_alt1();
  }
  v37 = 0;
LABEL_48:
  v38 = v37 + 8 * v36;
  v39 = (unsigned __int64)v28 - v31;
  v40 = (__int64)&v32[v37 + -8 * v33];
  *(_QWORD*)&v32[v37] = v4;
  v30 = (__int64)&v32[v37 + 8];
  memcpy_alt1(v40, v31, v39);
  *(_QWORD*)(a1 + 552) = v40;
  *(_QWORD*)(a1 + 560) = v30;
  *(_QWORD*)(a1 + 568) = v38;
  if (v31 != 0) {
    v41 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v2 + v41, v31);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v30;
  GameRoutine_a8c0c0_alt1(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex_alt1((__int64)GameData_212df28);
  return v4;
}

__int64 CharacterBuilder_1083580(__int64 result, __int64 a2, __int64 a3)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  _BYTE v17[4];

  if (a2 != 0) {
    v4 = (_QWORD*)result;
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212ed90,
                              memory_order_acquire) &
         1) == 0) {
      v15 = a3;
      result = __cxa_guard_acquire(&GameData_220f868);
      a3 = v15;
      if ((_DWORD)result != 0) {
        GameData_220f860 = wld_Crc32(0, "AnimLayerCtrlModule", 19);
        result = __cxa_guard_release(&GameData_220f868);
        a3 = v15;
      }
    }
    v5 = *(_QWORD*)(a3 + 512);
    v6 = v5;
    while (v6 != *(_QWORD*)(a3 + 504)) {
      v7 = *(_DWORD*)(v6 - 16);
      v6 -= 16;
      v5 -= 16;
      if (v7 == GameData_220f860) {
        if (*(_QWORD*)(a3 + 512) != v5) {
          v8 = *(_QWORD*)(v5 + 8);
          if (v8 != 0) {
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4d48,
                                      memory_order_acquire) &
                 1) == 0) {
              v16 = v8;
              v14 = __cxa_guard_acquire(&GameData_21f4d48);
              v8 = v16;
              if (v14 != 0) {
                GameData_21f4d44 = wld_Crc32(0, "ModelModule", 11);
                __cxa_guard_release(&GameData_21f4d48);
                v8 = v16;
              }
            }
            v9 = *(_QWORD*)(a2 + 512);
            v10 = v9;
            while (v10 != *(_QWORD*)(a2 + 504)) {
              v11 = *(_DWORD*)(v10 - 16);
              v10 -= 16;
              v9 -= 16;
              if (v11 == GameData_21f4d44) {
                if (*(_QWORD*)(a2 + 512) != v9) {
                  v12 = *(_QWORD*)(v9 + 8);
                  if (v12 != 0) {
                    v13 = *(_QWORD*)(v12 + 24);
                    goto LABEL_16;
                  }
                }
                break;
              }
            }
            v13 = 0;
          LABEL_16:
            AnimCtrlModule_a77d60(*(_QWORD*)(v8 + 24), v13);
            v17[0] = 0;
            GameRoutine_1087f80(a2, v4);
            if (v4[1] != 0 && v4[2] != 0) {
              GameRoutine_10873c0(a2);
            }
            result = GameRoutine_10877a0(a2);
            if (v4[3] != 0) {
              return GameRoutine_1087ba0(a2, v4, v4 + 3, v17);
            }
          }
        }
        return result;
      }
    }
  }
  return result;
}

__int64 CharacterBuilder_1083780(__int64 a1, _BYTE* a2)
{
  _BYTE* v2;
  __int64 result;
  __int64 v5;

  if (a2 == nullptr) {
    return 0;
  }
  v2 = a2;
  if (*a2 != 45 || (v2 = a2 + 1, (*(_BYTE*)(a1 + 341) & 4) != 0)) {
    result = GameRoutine_10a0100(*(_QWORD*)(a1 + 448), v2);
    if (result != 0) {
      return result;
    }
    v5 = *(_QWORD*)(a1 + 408);
  }
  else {
    result = GameRoutine_10a0100(*(_QWORD*)(a1 + 408), v2);
    if (result != 0) {
      return result;
    }
    v5 = *(_QWORD*)(a1 + 448);
  }
  result = GameRoutine_10a0100(v5, v2);
  if (result == 0) {
    result = GameRoutine_10a0100(*(_QWORD*)(a1 + 416), v2);
    if (result == 0) {
      result = GameRoutine_10a0100(*(_QWORD*)(a1 + 440), v2);
      if (result == 0) {
        return GameRoutine_10a0100(*(_QWORD*)(a1 + 432), v2);
      }
    }
  }
  return result;
}

_QWORD* CharacterBuilder_1083bf0(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v6;
  __int64 v8;
  __int64 v10;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;

  v1 = result[1];
  v2 = result[51];
  if (v2 != 0 && (*(_QWORD*)(v2 + 768) != v1 || *(_DWORD*)(v2 + 784) != 7)) {
    *(_QWORD*)(v2 + 768) = 0;
    *(_QWORD*)(v2 + 776) = 0;
    *(_QWORD*)(v2 + 768) = v1;
    *(_DWORD*)(v2 + 784) = 7;
    *(_DWORD*)(v2 + 296) |= 4u;
  }
  v4 = result[52];
  if (v4 != 0 && (*(_QWORD*)(v4 + 768) != v1 || *(_DWORD*)(v4 + 784) != 7)) {
    *(_QWORD*)(v4 + 768) = 0;
    *(_QWORD*)(v4 + 776) = 0;
    *(_QWORD*)(v4 + 768) = v1;
    *(_DWORD*)(v4 + 784) = 7;
    *(_DWORD*)(v4 + 296) |= 4u;
  }
  v6 = result[53];
  if (v6 != 0 && (*(_QWORD*)(v6 + 768) != v1 || *(_DWORD*)(v6 + 784) != 7)) {
    *(_QWORD*)(v6 + 768) = 0;
    *(_QWORD*)(v6 + 776) = 0;
    *(_QWORD*)(v6 + 768) = v1;
    *(_DWORD*)(v6 + 784) = 7;
    *(_DWORD*)(v6 + 296) |= 4u;
  }
  v8 = result[56];
  if (v8 != 0 && (*(_QWORD*)(v8 + 768) != v1 || *(_DWORD*)(v8 + 784) != 7)) {
    *(_QWORD*)(v8 + 768) = 0;
    *(_QWORD*)(v8 + 776) = 0;
    *(_QWORD*)(v8 + 768) = v1;
    *(_DWORD*)(v8 + 784) = 7;
    *(_DWORD*)(v8 + 296) |= 4u;
  }
  v10 = result[57];
  if (v10 != 0 && (*(_QWORD*)(v10 + 768) != v1 || *(_DWORD*)(v10 + 784) != 7)) {
    *(_QWORD*)(v10 + 768) = 0;
    *(_QWORD*)(v10 + 776) = 0;
    *(_QWORD*)(v10 + 768) = v1;
    *(_DWORD*)(v10 + 784) = 7;
    *(_DWORD*)(v10 + 296) |= 4u;
  }
  v12 = result[58];
  if (v12 != 0 && (*(_QWORD*)(v12 + 768) != v1 || *(_DWORD*)(v12 + 784) != 7)) {
    *(_QWORD*)(v12 + 768) = 0;
    *(_QWORD*)(v12 + 776) = 0;
    *(_QWORD*)(v12 + 768) = v1;
    *(_DWORD*)(v12 + 784) = 7;
    *(_DWORD*)(v12 + 296) |= 4u;
  }
  v14 = result[63];
  if ((v14 & 1) != 0) {
    v15 = result[59];
    if (v15 != 0 &&
        (*(_QWORD*)(v15 + 768) != v1 || *(_DWORD*)(v15 + 784) != 7)) {
      *(_QWORD*)(v15 + 768) = 0;
      *(_QWORD*)(v15 + 776) = 0;
      *(_QWORD*)(v15 + 768) = v1;
      *(_DWORD*)(v15 + 784) = 7;
      *(_DWORD*)(v15 + 296) |= 4u;
      v14 = result[63];
    }
  }
  if ((v14 & 2) != 0) {
    v16 = result[60];
    if (v16 != 0 &&
        (*(_QWORD*)(v16 + 768) != v1 || *(_DWORD*)(v16 + 784) != 7)) {
      *(_QWORD*)(v16 + 768) = 0;
      *(_QWORD*)(v16 + 776) = 0;
      *(_QWORD*)(v16 + 768) = v1;
      *(_DWORD*)(v16 + 784) = 7;
      *(_DWORD*)(v16 + 296) |= 4u;
      v14 = result[63];
    }
  }
  if ((v14 & 4) != 0) {
    v17 = result[61];
    if (v17 != 0 &&
        (*(_QWORD*)(v17 + 768) != v1 || *(_DWORD*)(v17 + 784) != 7)) {
      *(_QWORD*)(v17 + 768) = 0;
      *(_QWORD*)(v17 + 776) = 0;
      *(_QWORD*)(v17 + 768) = v1;
      *(_DWORD*)(v17 + 784) = 7;
      *(_DWORD*)(v17 + 296) |= 4u;
      v14 = result[63];
    }
  }
  if ((v14 & 8) != 0) {
    v18 = result[62];
    if (v18 != 0 &&
        (*(_QWORD*)(v18 + 768) != v1 || *(_DWORD*)(v18 + 784) != 7)) {
      *(_QWORD*)(v18 + 768) = 0;
      *(_QWORD*)(v18 + 776) = 0;
      *(_QWORD*)(v18 + 768) = v1;
      v19 = *(_DWORD*)(v18 + 296);
      *(_DWORD*)(v18 + 784) = 7;
      *(_DWORD*)(v18 + 296) = v19 | 4;
    }
  }
  return result;
}

__int64 CharacterBuilder_1083e90(_QWORD* a1, __int64 a2)
{
  __int64 v4;
  __int64 result;

  v4 = a1[51];
  result = *(_QWORD*)(a2 + 32);
  if (v4 != 0) {
    if (result == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = *(_QWORD*)(a2 + 32);
  }
  if (a1[52] != 0) {
    if (result == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = *(_QWORD*)(a2 + 32);
  }
  if (a1[53] != 0) {
    if (result == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = *(_QWORD*)(a2 + 32);
  }
  if (a1[54] != 0) {
    if (result == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = *(_QWORD*)(a2 + 32);
  }
  if (a1[55] != 0) {
    if (result == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = *(_QWORD*)(a2 + 32);
  }
  if (a1[56] != 0) {
    if (result == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = *(_QWORD*)(a2 + 32);
  }
  if (a1[57] != 0) {
    if (result == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = *(_QWORD*)(a2 + 32);
  }
  if (a1[58] != 0) {
    if (result == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = *(_QWORD*)(a2 + 32);
  }
  if (a1[59] != 0) {
    if (result == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = *(_QWORD*)(a2 + 32);
  }
  if (a1[60] != 0) {
    if (result == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = *(_QWORD*)(a2 + 32);
  }
  if (a1[61] != 0) {
    if (result == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = *(_QWORD*)(a2 + 32);
  }
  if (a1[62] != 0) {
    if (result != 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    }
  LABEL_38:
    GameRoutine_60a310(result);
  }
  return result;
}

_QWORD* CharacterBuilder_1084020(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  _QWORD* v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v19;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v25;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v31;
  __int64 v33;
  __int64 v34;
  int v35;
  int v36;
  int v37;
  __int64 v38;
  int v39;
  __int64 v40;
  _QWORD* v41;
  _QWORD* v42;

  v1 = result[54];
  if (v1 != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22356c8,
                              memory_order_acquire) &
         1) == 0) {
      v41 = result;
      v40 = v1;
      v36 = __cxa_guard_acquire_alt1((__int64)&GameData_22356c8);
      v1 = v40;
      v37 = v36;
      result = v41;
      if (v37 != 0) {
        GameData_22356c0 = wld_Crc32_alt1(0, "WeaponHoldModule", 0x10u);
        __cxa_guard_release_alt1((__int64)&GameData_22356c8);
        v1 = v40;
        result = v41;
      }
    }
    v3 = *(_QWORD*)(v1 + 504);
    v2 = *(_QWORD*)(v1 + 512);
    v4 = v2;
    v5 = v2;
    while (v5 != v3) {
      v6 = *(_DWORD*)(v5 - 16);
      v5 -= 16;
      v4 -= 16;
      if (v6 == GameData_22356c0) {
        if (v2 != v4 && *(_QWORD*)(v4 + 8) != 0) {
          v7 = result;
          WeaponHoldModule_112aaa0(*(_QWORD*)(v4 + 8));
          result = v7;
        }
        break;
      }
    }
  }
  v8 = result[55];
  if (v8 != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22356c8,
                              memory_order_acquire) &
         1) == 0) {
      v42 = result;
      v38 = v8;
      v39 = __cxa_guard_acquire_alt1((__int64)&GameData_22356c8);
      result = v42;
      v8 = v38;
      if (v39 != 0) {
        GameData_22356c0 = wld_Crc32_alt1(0, "WeaponHoldModule", 0x10u);
        __cxa_guard_release_alt1((__int64)&GameData_22356c8);
        result = v42;
        v8 = v38;
      }
    }
    v10 = *(_QWORD*)(v8 + 504);
    v9 = *(_QWORD*)(v8 + 512);
    v11 = v9;
    v12 = v9;
    while (v12 != v10) {
      v13 = *(_DWORD*)(v12 - 16);
      v12 -= 16;
      v11 -= 16;
      if (v13 == GameData_22356c0) {
        if (v9 != v11 && *(_QWORD*)(v11 + 8) != 0) {
          v14 = result;
          WeaponHoldModule_112aaa0(*(_QWORD*)(v11 + 8));
          result = v14;
        }
        break;
      }
    }
  }
  v15 = result[51];
  v16 = *(_DWORD*)(v15 + 296);
  *(_DWORD*)(v15 + 784) = 0;
  *(_QWORD*)(v15 + 768) = 0;
  *(_QWORD*)(v15 + 776) = 0;
  *(_DWORD*)(v15 + 296) = v16 & 0xFFFFFFFB;
  v17 = result[52];
  if (v17 != 0 &&
      (*(_QWORD*)(v17 + 768) != v15 || *(_DWORD*)(v17 + 784) != 7)) {
    *(_QWORD*)(v17 + 768) = 0;
    *(_QWORD*)(v17 + 776) = 0;
    *(_QWORD*)(v17 + 768) = v15;
    *(_DWORD*)(v17 + 784) = 7;
    *(_DWORD*)(v17 + 296) |= 4u;
  }
  v19 = result[53];
  if (v19 != 0 &&
      (*(_QWORD*)(v19 + 768) != v15 || *(_DWORD*)(v19 + 784) != 7)) {
    *(_QWORD*)(v19 + 768) = 0;
    *(_QWORD*)(v19 + 776) = 0;
    *(_QWORD*)(v19 + 768) = v15;
    *(_DWORD*)(v19 + 784) = 7;
    *(_DWORD*)(v19 + 296) |= 4u;
  }
  v21 = result[56];
  if (v21 != 0) {
    v22 = *(_DWORD*)(v21 + 296);
    *(_DWORD*)(v21 + 784) = 0;
    *(_QWORD*)(v21 + 776) = 0;
    *(_QWORD*)(v21 + 768) = 0;
    *(_DWORD*)(v21 + 296) = v22 & 0xFFFFFFFB;
    v23 = result[57];
    if (v23 != 0 &&
        (*(_QWORD*)(v23 + 768) != v21 || *(_DWORD*)(v23 + 784) != 7)) {
      *(_QWORD*)(v23 + 768) = 0;
      *(_QWORD*)(v23 + 776) = 0;
      *(_QWORD*)(v23 + 768) = v21;
      *(_DWORD*)(v23 + 784) = 7;
      *(_DWORD*)(v23 + 296) |= 4u;
    }
    v25 = result[58];
    if (v25 != 0 &&
        (*(_QWORD*)(v25 + 768) != v21 || *(_DWORD*)(v25 + 784) != 7)) {
      *(_QWORD*)(v25 + 768) = 0;
      *(_QWORD*)(v25 + 776) = 0;
      *(_QWORD*)(v25 + 768) = v21;
      v27 = *(_DWORD*)(v25 + 296);
      *(_DWORD*)(v25 + 784) = 7;
      *(_DWORD*)(v25 + 296) = v27 | 4;
    }
  }
  v28 = result[63];
  if ((v28 & 1) != 0) {
    v29 = result[59];
    if (v29 != 0 &&
        (*(_QWORD*)(v29 + 768) != v15 || *(_DWORD*)(v29 + 784) != 7)) {
      *(_QWORD*)(v29 + 768) = 0;
      *(_QWORD*)(v29 + 776) = 0;
      *(_QWORD*)(v29 + 768) = v15;
      *(_DWORD*)(v29 + 784) = 7;
      *(_DWORD*)(v29 + 296) |= 4u;
      v28 = result[63];
    }
  }
  if ((v28 & 2) != 0) {
    v31 = result[60];
    if (v31 != 0 &&
        (*(_QWORD*)(v31 + 768) != v15 || *(_DWORD*)(v31 + 784) != 7)) {
      *(_QWORD*)(v31 + 768) = 0;
      *(_QWORD*)(v31 + 776) = 0;
      *(_QWORD*)(v31 + 768) = v15;
      *(_DWORD*)(v31 + 784) = 7;
      *(_DWORD*)(v31 + 296) |= 4u;
      v28 = result[63];
    }
  }
  if ((v28 & 4) != 0) {
    v33 = result[61];
    if (v33 != 0 &&
        (*(_QWORD*)(v33 + 768) != v15 || *(_DWORD*)(v33 + 784) != 7)) {
      *(_QWORD*)(v33 + 768) = 0;
      *(_QWORD*)(v33 + 776) = 0;
      *(_QWORD*)(v33 + 768) = v15;
      *(_DWORD*)(v33 + 784) = 7;
      *(_DWORD*)(v33 + 296) |= 4u;
      v28 = result[63];
    }
  }
  if ((v28 & 8) != 0) {
    v34 = result[62];
    if (v34 != 0 &&
        (*(_QWORD*)(v34 + 768) != v15 || *(_DWORD*)(v34 + 784) != 7)) {
      *(_QWORD*)(v34 + 768) = 0;
      *(_QWORD*)(v34 + 776) = 0;
      *(_QWORD*)(v34 + 768) = v15;
      v35 = *(_DWORD*)(v34 + 296);
      *(_DWORD*)(v34 + 784) = 7;
      *(_DWORD*)(v34 + 296) = v35 | 4;
    }
  }
  return result;
}

__int64 CharacterBuilder_1084400(__int64 result, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 i;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
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
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;

  v2 = *(_QWORD*)(result + 408);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212eab0,
                            memory_order_acquire) &
       1) == 0) {
    v41 = a2;
    v40 = v2;
    result = __cxa_guard_acquire(&GameData_2203510);
    v2 = v40;
    a2 = v41;
    if ((_DWORD)result != 0) {
      GameData_2203508 = wld_Crc32(0, "LODModule", 9);
      result = __cxa_guard_release(&GameData_2203510);
      v2 = v40;
      a2 = v41;
    }
  }
  v4 = *(_QWORD*)(v2 + 504);
  v3 = *(_QWORD*)(v2 + 512);
  v5 = v3;
  for (i = v3; i != v4; i -= 16) {
    v7 = *(_DWORD*)(i - 16);
    v5 -= 16;
    if (v7 == GameData_2203508) {
      if (v3 != v5) {
        v8 = *(_QWORD*)(v5 + 8);
        if (v8 != 0) {
          v10 = *(_QWORD*)(v8 + 48);
          v9 = *(_QWORD*)(v8 + 56);
          v11 = v9 - v10;
          v12 = (v9 - v10) >> 3;
          if (a2 < 0) {
            if (*(_BYTE*)(v8 + 116) == 1) {
              *(_BYTE*)(v8 + 116) = 0;
            }
            if (v9 != v10) {
              v16 = (v11 >> 3) & 3;
              if (v12 >= 4) {
                v17 = 0;
                do {
                  v27 = *(_QWORD*)(*(_QWORD*)(v8 + 40) + 56LL) +
                        224LL * *(_QWORD*)(*(_QWORD*)(v8 + 48) + 8 * v17);
                  *(_QWORD*)(v8 + 96) = v27;
                  v28 = *(_QWORD*)(v27 + 192);
                  *(_DWORD*)(v28 + 12) = -2;
                  *(_BYTE*)(v28 + 20) = 0;
                  *(_QWORD*)(v8 + 96) = 0;
                  v29 = *(_QWORD*)(*(_QWORD*)(v8 + 40) + 56LL) +
                        224LL * *(_QWORD*)(*(_QWORD*)(v8 + 48) + 8 * v17 + 8);
                  *(_QWORD*)(v8 + 96) = v29;
                  v30 = *(_QWORD*)(v29 + 192);
                  *(_DWORD*)(v30 + 12) = -2;
                  *(_BYTE*)(v30 + 20) = 0;
                  *(_QWORD*)(v8 + 96) = 0;
                  v31 = *(_QWORD*)(*(_QWORD*)(v8 + 40) + 56LL) +
                        224LL * *(_QWORD*)(*(_QWORD*)(v8 + 48) + 8 * v17 + 16);
                  *(_QWORD*)(v8 + 96) = v31;
                  v32 = *(_QWORD*)(v31 + 192);
                  *(_DWORD*)(v32 + 12) = -2;
                  *(_BYTE*)(v32 + 20) = 0;
                  *(_QWORD*)(v8 + 96) = 0;
                  v33 = *(_QWORD*)(v8 + 48) + 8 * v17;
                  v17 += 4;
                  v34 = *(_QWORD*)(*(_QWORD*)(v8 + 40) + 56LL) +
                        224LL * *(_QWORD*)(v33 + 24);
                  *(_QWORD*)(v8 + 96) = v34;
                  v35 = *(_QWORD*)(v34 + 192);
                  *(_DWORD*)(v35 + 12) = -2;
                  *(_BYTE*)(v35 + 20) = 0;
                  *(_QWORD*)(v8 + 96) = 0;
                } while ((v12 & 0xFFFFFFFFFFFFFFFCLL) != v17);
              }
              else {
                v17 = 0;
              }
              if (v16 != 0) {
                v36 = 8 * v17;
                do {
                  --v16;
                  v37 = *(_QWORD*)(*(_QWORD*)(v8 + 48) + v36);
                  v36 += 8;
                  v38 = *(_QWORD*)(*(_QWORD*)(v8 + 40) + 56LL) + 224 * v37;
                  *(_QWORD*)(v8 + 96) = v38;
                  v39 = *(_QWORD*)(v38 + 192);
                  *(_DWORD*)(v39 + 12) = -2;
                  *(_BYTE*)(v39 + 20) = 0;
                  *(_QWORD*)(v8 + 96) = 0;
                } while (v16 != 0);
              }
            }
          }
          else {
            *(_DWORD*)(v8 + 112) = a2;
            *(_BYTE*)(v8 + 116) = 1;
            if (v9 != v10) {
              if (v11 == 8) {
                v13 = 0;
              }
              else {
                v18 = v12 & 0xFFFFFFFFFFFFFFFELL;
                v19 = 0;
                v13 = 0;
                do {
                  v22 = *(_QWORD*)(*(_QWORD*)(v8 + 40) + 56LL) +
                        224LL * *(_QWORD*)(*(_QWORD*)(v8 + 48) + 8 * v13);
                  *(_QWORD*)(v8 + 96) = v22;
                  v23 = *(_QWORD*)(v22 + 192);
                  if ((*(_BYTE*)(v23 + 22) & 1) == 0 &&
                      (*(_BYTE*)(v23 + 21) & 1) == 0) {
                    *(_DWORD*)v23 = a2;
                    *(_DWORD*)(v23 + 4) = a2;
                    *(_DWORD*)(v23 + 8) = 1;
                  }
                  *(_DWORD*)(v23 + 12) = a2;
                  *(_BYTE*)(v23 + 20) = 1;
                  v24 = *(_QWORD*)(v8 + 136);
                  *(_QWORD*)(v8 + 96) = 0;
                  *(_BYTE*)(v24 + v19) = 0;
                  v25 = *(_QWORD*)(*(_QWORD*)(v8 + 40) + 56LL) +
                        224LL * *(_QWORD*)(*(_QWORD*)(v8 + 48) + 8 * v13 + 8);
                  *(_QWORD*)(v8 + 96) = v25;
                  v26 = *(_QWORD*)(v25 + 192);
                  if ((*(_BYTE*)(v26 + 22) & 1) == 0 &&
                      (*(_BYTE*)(v26 + 21) & 1) == 0) {
                    *(_DWORD*)v26 = a2;
                    *(_DWORD*)(v26 + 4) = a2;
                    *(_DWORD*)(v26 + 8) = 1;
                  }
                  *(_DWORD*)(v26 + 12) = a2;
                  *(_BYTE*)(v26 + 20) = 1;
                  v13 += 2;
                  v20 = *(_QWORD*)(v8 + 136);
                  *(_QWORD*)(v8 + 96) = 0;
                  v21 = v20 + v19;
                  v19 += 6;
                  *(_BYTE*)(v21 + 3) = 0;
                } while (v18 != v13);
              }
              if ((v11 & 8) != 0) {
                v14 = *(_QWORD*)(*(_QWORD*)(v8 + 40) + 56LL) +
                      224LL * *(_QWORD*)(*(_QWORD*)(v8 + 48) + 8 * v13);
                *(_QWORD*)(v8 + 96) = v14;
                v15 = *(_QWORD*)(v14 + 192);
                if ((*(_BYTE*)(v15 + 22) & 1) == 0 &&
                    (*(_BYTE*)(v15 + 21) & 1) == 0) {
                  *(_DWORD*)v15 = a2;
                  *(_DWORD*)(v15 + 4) = a2;
                  *(_DWORD*)(v15 + 8) = 1;
                }
                *(_DWORD*)(v15 + 12) = a2;
                *(_BYTE*)(v15 + 20) = 1;
                *(_QWORD*)(v8 + 96) = 0;
                *(_BYTE*)(*(_QWORD*)(v8 + 136) + 3 * v13) = 0;
              }
            }
          }
        }
      }
      return result;
    }
  }
  return result;
}

__int64 CharacterBuilder_1084780(__int64 result)
{
  __int64 v1;
  atomic_uchar* v2;
  int* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 i;
  int v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  v1 = *(_QWORD*)(result + 408);
  v2 = (atomic_uchar*)GameData_212df10;
  v3 = GameData_212df08;
  if (v1 != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                              memory_order_acquire) &
         1) == 0) {
      v23 = result;
      v22 = v1;
      v19 = __cxa_guard_acquire(GameData_212df10);
      v1 = v22;
      v20 = v19;
      result = v23;
      if (v20 != 0) {
        *v3 = wld_Crc32(0, "ModelModule", 11);
        __cxa_guard_release(GameData_212df10);
        v1 = v22;
        result = v23;
      }
    }
    v5 = *(_QWORD*)(v1 + 504);
    v4 = *(_QWORD*)(v1 + 512);
    v6 = v4;
    v7 = v4;
    while (v7 != v5) {
      v8 = *(_DWORD*)(v7 - 16);
      v7 -= 16;
      v6 -= 16;
      if (v8 == *v3) {
        if (v4 != v6) {
          v9 = *(_QWORD*)(v6 + 8);
          if (v9 != 0) {
            v10 = *(_QWORD*)(v9 + 24);
            if (v10 != 0) {
              v11 = result;
              *(_BYTE*)(v10 + 504) = 1;
              GameRoutine_a64140(v10);
              result = v11;
            }
          }
        }
        break;
      }
    }
  }
  v12 = *(_QWORD*)(result + 448);
  if (v12 != 0) {
    if ((atomic_load_explicit(v2, memory_order_acquire) & 1) == 0) {
      v21 = v12;
      result = __cxa_guard_acquire(GameData_212df10);
      v12 = v21;
      if ((_DWORD)result != 0) {
        *v3 = wld_Crc32(0, "ModelModule", 11);
        result = __cxa_guard_release(GameData_212df10);
        v12 = v21;
      }
    }
    v14 = *(_QWORD*)(v12 + 504);
    v13 = *(_QWORD*)(v12 + 512);
    v15 = v13;
    for (i = v13; i != v14; i -= 16) {
      v17 = *(_DWORD*)(i - 16);
      v15 -= 16;
      if (v17 == *v3) {
        if (v13 != v15) {
          v18 = *(_QWORD*)(v15 + 8);
          if (v18 != 0) {
            result = *(_QWORD*)(v18 + 24);
            if (result != 0) {
              *(_BYTE*)(result + 504) = 1;
              return GameRoutine_a64140(result);
            }
          }
        }
        return result;
      }
    }
  }
  return result;
}

__int64 CharacterBuilder_1084a50(__int64 a1, _BYTE* a2)
{
  _BYTE* v2;
  __int64 result;
  __int64 v5;

  if (a2 == nullptr) {
    return 0;
  }
  v2 = a2;
  if (*a2 != 45 || (v2 = a2 + 1, (*(_BYTE*)(a1 + 341) & 4) != 0)) {
    result = GameRoutine_1084b20(*(_QWORD*)(a1 + 448), v2);
    if (result != 0) {
      return result;
    }
    v5 = *(_QWORD*)(a1 + 408);
  }
  else {
    result = GameRoutine_1084b20(*(_QWORD*)(a1 + 408), v2);
    if (result != 0) {
      return result;
    }
    v5 = *(_QWORD*)(a1 + 448);
  }
  result = GameRoutine_1084b20(v5, v2);
  if (result == 0) {
    result = GameRoutine_1084b20(*(_QWORD*)(a1 + 416), v2);
    if (result == 0) {
      result = GameRoutine_1084b20(*(_QWORD*)(a1 + 440), v2);
      if (result == 0) {
        return GameRoutine_1084b20(*(_QWORD*)(a1 + 432), v2);
      }
    }
  }
  return result;
}

__int64 CharacterBuilder_1084db0(__int64 a1, _BYTE* a2)
{
  _BYTE* v2;
  __int64 result;
  __int64 v5;
  __int64 v6;

  v2 = a2;
  if (*a2 != 45 || (v2 = a2 + 1, (*(_BYTE*)(a1 + 341) & 4) != 0)) {
    v6 = *(_QWORD*)(a1 + 448);
    result = GameRoutine_1084ea0(&v6, v2);
    if (result != 0) {
      return result;
    }
    v5 = *(_QWORD*)(a1 + 408);
  }
  else {
    v6 = *(_QWORD*)(a1 + 408);
    result = GameRoutine_1084ea0(&v6, v2);
    if (result != 0) {
      return result;
    }
    v5 = *(_QWORD*)(a1 + 448);
  }
  v6 = v5;
  result = GameRoutine_1084ea0(&v6, v2);
  if (result == 0) {
    v6 = *(_QWORD*)(a1 + 416);
    result = GameRoutine_1084ea0(&v6, v2);
    if (result == 0) {
      v6 = *(_QWORD*)(a1 + 440);
      result = GameRoutine_1084ea0(&v6, v2);
      if (result == 0) {
        v6 = *(_QWORD*)(a1 + 432);
        return GameRoutine_1084ea0(&v6, v2);
      }
    }
  }
  return result;
}

__int64 CharacterBuilder_1085070(__int64 a1, _BYTE* a2)
{
  _BYTE* v2;
  __int64 result;
  __int64 v5;

  if (a2 == nullptr) {
    return 0;
  }
  v2 = a2;
  if (*a2 != 45 || (v2 = a2 + 1, (*(_BYTE*)(a1 + 341) & 4) != 0)) {
    result = GameRoutine_1085140(*(_QWORD*)(a1 + 448), v2);
    if (result != 0) {
      return result;
    }
    v5 = *(_QWORD*)(a1 + 408);
  }
  else {
    result = GameRoutine_1085140(*(_QWORD*)(a1 + 408), v2);
    if (result != 0) {
      return result;
    }
    v5 = *(_QWORD*)(a1 + 448);
  }
  result = GameRoutine_1085140(v5, v2);
  if (result == 0) {
    result = GameRoutine_1085140(*(_QWORD*)(a1 + 416), v2);
    if (result == 0) {
      result = GameRoutine_1085140(*(_QWORD*)(a1 + 440), v2);
      if (result == 0) {
        return GameRoutine_1085140(*(_QWORD*)(a1 + 432), v2);
      }
    }
  }
  return result;
}

void game_character_CharacterBuilder_FullbodyCleanup_lambda0_Invoke(__int64 a1,
                                                                    __int64 a2)
{
  __int64 v2;
  __int64 i;
  int v4;
  int v5;
  __int64 v6;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ec9a0,
                            memory_order_acquire) &
       1) == 0) {
    v6 = a2;
    v5 = __cxa_guard_acquire(&GameData_21ec9a0);
    a2 = v6;
    if (v5 != 0) {
      GameData_21ec998 = wld_Crc32(0, "CharacterMaterial", 17);
      __cxa_guard_release(&GameData_21ec9a0);
      a2 = v6;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  for (i = v2; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v4 = *(_DWORD*)(i - 16);
    v2 -= 16;
    if (v4 == GameData_21ec998) {
      if (*(_QWORD*)(a2 + 512) != v2 && *(_QWORD*)(v2 + 8) != 0) {
        GameRoutine_bd92c0();
      }
      return;
    }
  }
}

void game_character_CharacterBuilder_LateUpdate_lambda0_Invoke(__int64 a1,
                                                               __int64 a2)
{
  __int64 v2;
  __int64 i;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_220f840,
                            memory_order_acquire) &
       1) == 0) {
    v7 = a2;
    v6 = __cxa_guard_acquire(&GameData_220f840);
    a2 = v7;
    if (v6 != 0) {
      GameData_220f838 = wld_Crc32(0, "ClothModule", 11);
      __cxa_guard_release(&GameData_220f840);
      a2 = v7;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  for (i = v2; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v4 = *(_DWORD*)(i - 16);
    v2 -= 16;
    if (v4 == GameData_220f838) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          *(_WORD*)(v5 + 61) = 1;
        }
      }
      return;
    }
  }
}

void game_character_CharacterBuilder_LateUpdate_lambda1_Invoke(__int64 a1,
                                                               __int64 a2)
{
  __int64 v2;
  __int64 i;
  int v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4d48,
                            memory_order_acquire) &
       1) == 0) {
    v8 = a2;
    v7 = __cxa_guard_acquire(&GameData_21f4d48);
    a2 = v8;
    if (v7 != 0) {
      GameData_21f4d44 = wld_Crc32(0, "ModelModule", 11);
      __cxa_guard_release(&GameData_21f4d48);
      a2 = v8;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  for (i = v2; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v4 = *(_DWORD*)(i - 16);
    v2 -= 16;
    if (v4 == GameData_21f4d44) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          v6 = *(_QWORD*)(v5 + 24);
          if (v6 != 0) {
            *(_BYTE*)(v6 + 504) = 1;
            GameRoutine_a64140(v6);
          }
        }
      }
      return;
    }
  }
}

void game_character_CharacterBuilder_BuildImpl_lambda3_Invoke(__int64 a1,
                                                              __int64 a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _WORD* v9;
  int v10;
  __int64 v11;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_220f840,
                            memory_order_acquire) &
       1) == 0) {
    v11 = a2;
    v10 = __cxa_guard_acquire(&GameData_220f840);
    a2 = v11;
    if (v10 != 0) {
      GameData_220f838 = wld_Crc32(0, "ClothModule", 11);
      __cxa_guard_release(&GameData_220f840);
      a2 = v11;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  v3 = v2;
  while (v3 != *(_QWORD*)(a2 + 504)) {
    v4 = *(_DWORD*)(v3 - 16);
    v3 -= 16;
    v2 -= 16;
    if (v4 == GameData_220f838) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          v6 = *(_QWORD*)(v5 + 24);
          v7 = *(_QWORD*)(v5 + 32);
          if (v6 != v7) {
            while (1) {
              v8 = *(_QWORD*)(v6 + 112);
              if ((*(_BYTE*)(v6 + 104) & 1) == 0) {
                v8 = *(_BYTE*)(v6 + 104) >> 1;
              }
              if (v8 == 2) {
                v9 = (*(_BYTE*)(v6 + 104) & 1) != 0 ? *(_WORD**)(v6 + 120)
                                                    : (_WORD*)(v6 + 105);
                if (*v9 == 24916) {
                  break;
                }
              }
              v6 += 176;
              if (v6 == v7) {
                return;
              }
            }
          }
          if (v6 != v7 && v6 != 0) {
            *(_BYTE*)(v6 + 128) = 0;
          }
        }
      }
      return;
    }
  }
}

__int64 game_character_CharacterBuilder_BuildImpl_lambda0_Invoke(__int64 result,
                                                                 __int64 a2)
{
  *(_QWORD*)(a2 + 496) = *(_QWORD*)(*(_QWORD*)(result + 8) + 304LL);
  return result;
}

void game_character_CharacterBuilder_CommitMaterialParams_lambda1_Invoke(
    __int64 a1, __int64 a2)
{
  unsigned __int8 explicit;
  int* v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  int v19;
  _QWORD v20[4];
  _QWORD* v21;
  _QWORD v22[4];
  _QWORD* v23;
  char v24;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v3 = GameData_212df08;
  if ((explicit & 1) == 0) {
    v18 = a2;
    v19 = __cxa_guard_acquire(GameData_212df10);
    a2 = v18;
    if (v19 != 0) {
      *v3 = wld_Crc32(0, "ModelModule", 11);
      __cxa_guard_release(GameData_212df10);
      a2 = v18;
    }
  }
  v4 = *(_QWORD*)(a2 + 512);
  v5 = v4;
  while (v5 != *(_QWORD*)(a2 + 504)) {
    v6 = *(_DWORD*)(v5 - 16);
    v5 -= 16;
    v4 -= 16;
    if (v6 == *v3) {
      if (*(_QWORD*)(a2 + 512) == v4) {
        return;
      }
      v7 = *(_QWORD*)(v4 + 8);
      if (v7 == 0) {
        return;
      }
      v8 = *(_QWORD*)(v7 + 24);
      v9 = v22;
      v24 = 0;
      v22[0] = GameData_2007178;
      v22[1] = &v24;
      v23 = v22;
      v10 = *(_QWORD*)(v8 + 616);
      v11 = *(_QWORD*)(v8 + 624);
      if (v10 == v11) {
        goto LABEL_13;
      }
      do {
        v12 = v23;
        LODWORD(v20[0]) = *(_DWORD*)(v10 + 4);
        if (v23 == nullptr) {
        LABEL_25:
          GameRoutine_60a310(v12);
        }
        (*(void (**)(_QWORD*, _QWORD*))(*v23 + 48LL))(v23, v20);
        v10 += 8;
      } while (v10 != v11);
      v9 = v23;
      if (v23 == v22) {
      LABEL_13:
        v13 = 32;
      LABEL_14:
        (*(void (**)(_QWORD*))(*v9 + v13))(v9);
      }
      else if (v23 != nullptr) {
        v13 = 40;
        goto LABEL_14;
      }
      if ((v24 & 1) != 0) {
        return;
      }
      v14 = *(_QWORD*)(v8 + 616);
      v15 = *(_QWORD*)(v8 + 624);
      v16 = v20;
      v20[0] = GameData_2007208;
      v21 = v20;
      if (v14 == v15) {
        goto LABEL_22;
      }
      do {
        v12 = v21;
        if (v21 == nullptr) {
          goto LABEL_25;
        }
        (*(void (**)(_QWORD*, __int64))(*v21 + 48LL))(v21, v14);
        v14 += 8;
      } while (v14 != v15);
      v16 = v21;
      if (v21 == v20) {
      LABEL_22:
        v17 = 32;
      }
      else {
        if (v21 == nullptr) {
          return;
        }
        v17 = 40;
      }
      (*(void (**)(_QWORD*))(*v16 + v17))(v16);
      return;
    }
  }
}

__int64 CharacterBuilder_1089270(__int64 result, _BYTE* a2)
{
  if ((*a2 & 4) != 0) {
    **(_BYTE**)(result + 8) = 1;
  }
  return result;
}

void CharacterBuilder_1089340(__int64 a1, _QWORD* a2)
{
  *a2 = GameData_2007208;
}

void CharacterBuilder_1089370(__int64 a1, _DWORD* a2)
{
  if ((*a2 & 0x8000) == 0) {
    *a2 |= 4u;
  }
}

void game_character_CharacterBuilder_CommitMaterialParams_lambda2_Invoke(
    __int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 i;
  int v4;
  __int64 v5;
  char v6;
  int v7;
  int v8;
  __int64 v9;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22356a8,
                            memory_order_acquire) &
       1) == 0) {
    v9 = a2;
    v8 = __cxa_guard_acquire(&GameData_22356a8);
    a2 = v9;
    if (v8 != 0) {
      GameData_22356a0 = wld_Crc32(0, "ShadowCasterModule", 18);
      __cxa_guard_release(&GameData_22356a8);
      a2 = v9;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  for (i = v2; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v4 = *(_DWORD*)(i - 16);
    v2 -= 16;
    if (v4 == GameData_22356a0) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          v6 = *(_BYTE*)(v5 + 52);
          *(_QWORD*)(v5 + 40) = 3;
          *(_DWORD*)(v5 + 48) = 1;
          if ((v6 & 1) == 0) {
            *(_BYTE*)(v5 + 52) = 1;
          }
          *(_BYTE*)(v5 + 56) = 1;
          v7 = *(unsigned __int8*)(v5 + 18);
          *(_BYTE*)(v5 + 18) = v7 & 0xFB;
          if (v7 != (v7 & 0xFFFFFFFB)) {
            *(_BYTE*)(*(_QWORD*)(v5 + 8) + 664LL) = 0;
          }
        }
      }
      return;
    }
  }
}

__int64 CharacterBuilder_1089680(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD))(a1 + 8))(*a2);
}

__int64 game_character_CharacterBuilder_SetupLOD_lambda0_Invoke(__int64 result,
                                                                __int64 a2)
{
  unsigned __int8 explicit;
  int* v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  struct {
    _QWORD v36[4];
    _QWORD* v37;
  } v36_;
  struct {
    __int64 v38[4];
    __int64* v39;
    char gap88_[32];
    __int64 v40;
  } v38_;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v3 = GameData_212df08;
  if ((explicit & 1) == 0) {
    v34 = a2;
    v38_.v40 = result;
    v35 = __cxa_guard_acquire_alt1((__int64)GameData_212df10);
    result = v38_.v40;
    a2 = v34;
    if (v35 != 0) {
      *v3 = wld_Crc32_alt1(0, "ModelModule", 0xBu);
      __cxa_guard_release_alt1((__int64)GameData_212df10);
      result = v38_.v40;
      a2 = v34;
    }
  }
  v4 = *(_QWORD*)(a2 + 512);
  v5 = v4;
  do {
    if (v5 == *(_QWORD*)(a2 + 504)) {
      return result;
    }
    v6 = *(_DWORD*)(v5 - 16);
    v5 -= 16;
    v4 -= 16;
  } while (v6 != *v3);
  if (*(_QWORD*)(a2 + 512) == v4) {
    return result;
  }
  v7 = *(_QWORD*)(v4 + 8);
  if (v7 == 0 || v7 == **(_QWORD**)(result + 8)) {
    return result;
  }
  v8 = **(_QWORD**)(result + 24);
  if (v7 != **(_QWORD**)(result + 16)) {
    v9 = *(_DWORD*)(v8 + 208);
    v38_.v38[0] = v7;
    if (v9 == 1) {
      v10 = 80;
      if (*(_QWORD*)(v7 + 32) == 0) {
        v10 = 72;
      }
      result =
          GameRoutine_193adc0_alt1((_QWORD*)(v8 + 40), *(_QWORD*)(v7 + v10), 0);
      if ((result & 1) != 0) {
        return (__int64)GameRoutine_a993a0_alt1(v8 + 168, v38_.v38, v38_.v38);
      }
    }
    return result;
  }
  v11 = *(_QWORD*)(result + 32);
  v12 = *(_DWORD*)(v8 + 208);
  v38_.v38[0] = v7;
  if (v12 == 1) {
    v13 = result;
    v14 = 80;
    if (*(_QWORD*)(v7 + 32) == 0) {
      v14 = 72;
    }
    v15 = GameRoutine_193adc0_alt1((_QWORD*)(v8 + 40), *(_QWORD*)(v7 + v14), 1);
    result = v13;
    if ((v15 & 1) != 0) {
      GameRoutine_a993a0_alt1(v8 + 168, v38_.v38, v38_.v38);
      result = v13;
    }
  }
  v16 = *(_QWORD*)(**(_QWORD**)(result + 16) + 24LL);
  if (*(_WORD*)(**(_QWORD**)(v16 + 168) + 58LL) != 0) {
    v17 = result;
    v36_.v37 = v36_.v36;
    v38_.v39 = v38_.v38;
    v36_.v36[0] = GameData_2007328;
    v36_.v36[1] = gfx_a9c5a0_ptr;
    v38_.v38[0] = (__int64)GameData_2007328;
    v38_.v38[1] = (__int64)gfx_a9c5a0_ptr;
    GameRoutine_a6b620_alt1(v38_.v38, (_QWORD*)(v16 + 768));
    if (v38_.v39 == v38_.v38) {
      v18 = 32;
    }
    else {
      if (v38_.v39 == nullptr) {
        goto LABEL_25;
      }
      v18 = 40;
    }
    (*(void (**)(__int64))(*v38_.v39 + v18))((__int64)v38_.v39);
  LABEL_25:
    if (v36_.v37 == v36_.v36) {
      v19 = 32;
    }
    else {
      if (v36_.v37 == nullptr) {
      LABEL_30:
        result = v17;
        goto LABEL_31;
      }
      v19 = 40;
    }
    (*(void (**)(__int64))(*v36_.v37 + v19))((__int64)v36_.v37);
    goto LABEL_30;
  }
LABEL_31:
  v20 = *(_QWORD*)(v11 + 392);
  v21 = *(_QWORD*)(v11 + 400);
  if (v21 == 0) {
    if (*(_DWORD*)(v20 + 11800) != 1) {
      return result;
    }
    goto LABEL_37;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                            memory_order_relaxed);
  v22 = *(_DWORD*)(v20 + 11800);
  if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v23 = result;
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak_alt1(v21);
    result = v23;
  }
  if (v22 == 1) {
  LABEL_37:
    v24 = **(_QWORD**)(result + 24);
    *(_DWORD*)(v24 + 212) = 2;
    v25 = *(_QWORD*)(v24 + 56) - *(_QWORD*)(v24 + 48);
    if (v25 != 0) {
      v26 = v25 >> 3;
      v27 = 0;
      v28 = (_QWORD*)GameData_2132398[0];
      do {
        v29 = *(_DWORD*)(v24 + 212);
        v30 = *(_QWORD*)(*(_QWORD*)(v24 + 40) + 56LL) +
              224LL * *(_QWORD*)(*(_QWORD*)(v24 + 48) + 8 * v27);
        *(_QWORD*)(v24 + 96) = v30;
        *(_DWORD*)(v30 + 176) = v29;
        if (*(_BYTE*)(v30 + 186) == 1) {
          v31 = *(_QWORD*)(v30 + 192);
          v32 = *(_QWORD*)(v30 + 200);
          if (v31 != v32) {
            v33 = *(_DWORD*)(*v28 + 112LL * v29 + 64) - 1;
            do {
              if ((*(_BYTE*)(v31 + 22) & 1) == 0) {
                *(_DWORD*)v31 = v33;
                *(_DWORD*)(v31 + 4) = v33;
                *(_DWORD*)(v31 + 8) = 1;
              }
              *(_DWORD*)(v31 + 16) = v33;
              *(_BYTE*)(v31 + 21) = 1;
              v31 += 24;
            } while (v31 != v32);
          }
        }
        ++v27;
        *(_QWORD*)(v24 + 96) = 0;
      } while (v27 != v26);
    }
  }
  return result;
}

_QWORD* game_character_CharacterBuilder_SetMaterialColor_lambda0_CloneInto(
    _QWORD* result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;

  *a2 = GameData_20075d8;
  v2 = result[5];
  a2[3] = result[3];
  a2[5] = v2;
  v3 = result[2];
  a2[4] = result[4];
  a2[2] = v3;
  return result;
}

float game_character_CharacterBuilder_SetDitherAlpha_lambda1_Invoke(__int64 a1,
                                                                    __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 i;
  int v4;
  __int64 v5;
  float result;
  int v7;
  __int64 v8;
  __int64 v9;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2235628,
                            memory_order_acquire) &
       1) == 0) {
    v8 = a2;
    v9 = a1;
    v7 = __cxa_guard_acquire_alt1((__int64)&GameData_2235628),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    a2 = v8;
    a1 = v9;
    if (v7 != 0) {
      GameData_2235620 = wld_Crc32_alt1(0, "MultiJointAOVModule", 0x13u),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      __cxa_guard_release_alt1((__int64)&GameData_2235628),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      a2 = v8;
      a1 = v9;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  for (i = v2; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v4 = *(_DWORD*)(i - 16);
    v2 -= 16;
    if (v4 == GameData_2235620) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          result = *(float*)(a1 + 8);
          *(float*)(v5 + 96) = result;
        }
      }
      return result;
    }
  }
  return result;
}

#pragma GCC visibility pop
