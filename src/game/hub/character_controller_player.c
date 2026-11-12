#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_da9a80(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN GameData_22110b8;
extern __int64 GameData_22110ac;
__int64 CharacterControllerPlayer_10c8e20(__int64 result);
__int64 CharacterInputPlayer_da9a80(_QWORD, _QWORD);
__int64 DungeonController_f5f760(void);
__int64 GameRoutine_cecb70(_QWORD);
__int64 GameRoutine_cecf30(_QWORD);
__int64 GameRoutine_cf12a0(_QWORD);
__int64 GameRoutine_da21c0(_QWORD, _QWORD);
__int64 GameRoutine_daa020(_QWORD, _QWORD);
__int64 GameRoutine_dac8c0(_QWORD, _QWORD);
__int64 GameRoutine_efbb60(_QWORD, _QWORD, _QWORD, long double);
__int64 HubCharacterNatives_caea10(_QWORD, _QWORD, _QWORD);
__int64 HubCharacterNatives_cec780(void);
__int64 HubCharacterNatives_ceca80(_QWORD, _QWORD, _QWORD);
__int64 HubCharacterNatives_ceccf0(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_200a4b8[])();
extern __int64 (*game_hub_CharacterControllerBase_vtable)();
extern __int64 (*game_hub_CharacterControllerPlayer_vtable[])();
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3cc8;
extern __int64 GameData_21f3d08;
extern __int64 GameData_21f3d10;
extern __int64 GameData_220b6f0;
extern __int64 GameData_220d630;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_script_hub_talk_g_select_menu;
extern __int64* GameData_212eba8[8];
struct PseudoSret GameRoutine_d57000(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
struct PseudoSret GameRoutine_e1b4d0(void);
__int64
game_hub_CharacterControllerPlayer_CharacterControllerPlayer(__int64 a1,
                                                             __int64 a2);
__n128 CharacterControllerPlayer_Destructor_alt1(__int64 a1) __asm__(
    "CharacterControllerPlayer_Destructor");
__int64 CharacterControllerPlayer_10c9b80(__int64 result, __int64 a2, char a3,
                                          float a4);
__int64 CharacterControllerPlayer_10c9cf0(__int64 a1);
__int64
game_hub_CharacterControllerPlayer_CharacterControllerPlayer_lambda0_Invoke(
    __int64 a1, __int64* a2);
_QWORD* GameRoutine_d342a0(__int64*, _QWORD*);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, _QWORD, _QWORD,
                                                 _QWORD);
__attribute__((swiftcall)) void
collision_670c60_alt1(PSEUDO_X8, float32x4_t* result, float32x4_t*,
                      __int64) __asm__("collision_670c60");
__int64 EventManager_cbc520(_QWORD, _QWORD, _QWORD);
__int64 FastTravelManager_ee24d0(_QWORD, _QWORD);
__int64 GameRoutine_d34180(_QWORD, _QWORD, long double);
__int64 GameRoutine_d6f4f0(_QWORD);
__int64 GameRoutine_f71d40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f71d40_alt1(__int64, __int64,
                                __int64) __asm__("GameRoutine_f71d40");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_zview_d33d70(float);
__int64 game_zview_d33d70_alt1(__int64, float32x4_t*, float*, __int64,
                               float) __asm__("game_zview_d33d70");
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern __int128 GameData_1a831c0;
extern __int64 (*GameData_200a538[])();
extern __int64 (*GameData_200a5a8[])();
extern __int64* GameData_212d458[7];
extern __int64* GameData_212ebb0[7];
extern __int64* GameData_212ec18[2];
extern __int64 GameData_212d310;
extern __int64 GameData_212dbc0[8];
extern __int64 GameData_212dbc8[7];
extern __int64 GameData_212dc68;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
float powf(long double, float);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
__int64 game_hub_CharacterControllerPlayer_UpdateAccessLookTo_alt1(
    __int64 a1,
    long double
        a2) __asm__("game_hub_CharacterControllerPlayer_UpdateAccessLookTo");
void game_hub_CharacterControllerPlayer_UpdateAccessLookTo_lambda0_Invoke(
    __int64 a1, __int64* a2, double a3, double a4);
_QWORD* EventManager_cbc520_alt1(__int64, __int64, __int64,
                                 __int64) __asm__("EventManager_cbc520");
_QWORD* GameHr_daa020(_QWORD* result, __int64);
_QWORD* GameRoutine_dac8c0_alt1(_QWORD* result,
                                _QWORD*) __asm__("GameRoutine_dac8c0");
_QWORD*
HubCharacterNatives_ceca80_alt1(_QWORD* result, __int64,
                                char) __asm__("HubCharacterNatives_ceca80");
_QWORD* HubCharacterNatives_ceccf0_alt1(_QWORD* result) __asm__(
    "HubCharacterNatives_ceccf0");
__int64 CharacterInputPlayer_da9a80_alt1(__int64 result, __int64) __asm__(
    "CharacterInputPlayer_da9a80");
__int64
FastTravelManager_ee24d0_alt1(__int64,
                              __int64) __asm__("FastTravelManager_ee24d0");
__int64 GameRoutine_cecf30_alt1(__int64) __asm__("GameRoutine_cecf30");
__int64 GameRoutine_d6f4f0_alt1(__int64) __asm__("GameRoutine_d6f4f0");
__int64
HubCharacterNatives_caea10_alt1(__int64 result, int,
                                char) __asm__("HubCharacterNatives_caea10");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
float powf_alt1(float, float) __asm__("powf");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameRoutine_cf12a0_alt1(_QWORD*) __asm__("GameRoutine_cf12a0");
void GameRoutine_d34180_alt1(_QWORD*, __int64) __asm__("GameRoutine_d34180");
void __attribute__((noreturn))
GameRoutine_8123d0_alt1() __asm__("GameRoutine_8123d0");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
__int64 CharacterControllerPlayer_Destructor(__int64 a1);
_QWORD* game_hub_CharacterControllerPlayer_UpdateAccessLookTo(__int64 a1,
                                                              __int64 a2,
                                                              __int64 a3,
                                                              __int64 a4);
__attribute__((swiftcall)) void game_hub_e1b4d0(PSEUDO_X8);
__attribute__((swiftcall)) void game_zview_d57000(PSEUDO_X8, _QWORD, _QWORD,
                                                  _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_da21c0_alt1(__int64, int*) __asm__("GameRoutine_da21c0");
__int64 GameRoutine_efbb60_alt1(__int64, __int64*,
                                char) __asm__("GameRoutine_efbb60");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 game_hub_CharacterControllerPlayer_CharacterControllerPlayer(__int64 a1,
                                                                     __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  _QWORD v10[4];
  _QWORD* v11;
  _QWORD v12[4];
  _QWORD* v13;

  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_BYTE*)(a1 + 40) = 0;
  *(_BYTE*)(a1 + 56) = 0;
  *(_WORD*)(a1 + 60) = 0;
  *(_BYTE*)(a1 + 62) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)a1 = game_hub_CharacterControllerPlayer_vtable;
  *(_QWORD*)(a1 + 8) = a2;
  v3 = *(_QWORD*)(a2 + 24);
  v4 = *GameData_212eba8[0];
  if (v3 != 0) {
    *(_QWORD*)(v4 + 56) = v3;
    HubCharacterNatives_cec780();
  }
  else {
    if (*(_QWORD*)(v4 + 56) != 0) {
      HubCharacterNatives_ceccf0();
    }
    *(_QWORD*)(v4 + 56) = 0;
  }
  GameRoutine_cf12a0(v4);
  HubCharacterNatives_ceca80(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL),
                             0x8000000000000LL, 1);
  GameRoutine_cecb70(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL));
  v5 = *(_QWORD*)(a1 + 8);
  v10[0] = GameData_200a4b8;
  v10[1] = a1;
  v12[0] = GameData_200a4b8;
  v12[1] = a1;
  v6 = *(_QWORD*)(*(_QWORD*)(v5 + 24) + 32LL);
  v11 = v10;
  v13 = v12;
  GameRoutine_dac8c0(v12, v6 + 176);
  if (v13 == v12) {
    v7 = 32;
  }
  else {
    if (v13 == nullptr) {
      goto LABEL_11;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v13 + v7))((__int64)v13);
LABEL_11:
  result = (__int64)v11;
  if (v11 == v10) {
    v9 = 32;
  }
  else {
    if (v11 == nullptr) {
      return result;
    }
    v9 = 40;
  }
  return (*(__int64 (**)(__int64))(*v11 + v9))((__int64)v11);
}

__int64 CharacterControllerPlayer_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
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
  __int64 i;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 result;
  struct {
    _QWORD v23[2];
    __int64 v24;
    __int64 v25;
    _QWORD* v26;
    char gap40_[8];
    __int64 v27;
    __int64 v28;
    char v29;
    char gap65_[15];
    char v30;
    char gap81_[15];
    __int64 v31;
    __int64 v32;
    __int64 v33;
  } v23_;

  *(_QWORD*)a1 = game_hub_CharacterControllerPlayer_vtable;
  if (*(_BYTE*)(a1 + 56) == 1) {
    v2 = *(_QWORD*)(a1 + 8);
    LOBYTE(v23_.v24) = 0;
    v3 = *(_QWORD*)(*(_QWORD*)(v2 + 24) + 32LL);
    v4 = *(_QWORD*)(v3 + 32);
    v5 = *(_QWORD*)(v3 + 40);
    v23_.v30 = 0;
    v23_.v23[0] = v4;
    v23_.v23[1] = v5;
    if (*(_BYTE*)(v3 + 112) == 1) {
      v6 = *(_QWORD*)(v3 + 56);
      v23_.v24 = *(_QWORD*)(v3 + 48);
      v23_.v25 = v6;
      v7 = *(_QWORD**)(v3 + 64);
      LOBYTE(v23_.v27) = 0;
      v23_.v29 = 0;
      v23_.v26 = v7;
      if (*(_BYTE*)(v3 + 96) == 1) {
        v8 = *(_QWORD*)(v3 + 88);
        v23_.v27 = *(_QWORD*)(v3 + 80);
        v23_.v28 = v8;
        v23_.v29 = 1;
      }
      v23_.v30 = 1;
    }
    v9 = *(_QWORD*)(v3 + 128);
    v10 = *(_QWORD*)(v3 + 136);
    v11 = *(_QWORD*)(v3 + 144);
    v23_.v31 = v9;
    v23_.v32 = v10;
    v23_.v33 = v11;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_22110b8) != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release_alt1((__int64)&GameData_22110b8);
    }
    v12 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL);
    v23_.v23[0] = GameData_22110ac;
    CharacterInputPlayer_da9a80_alt1(*(_QWORD*)(v12 + 32), (__int64)v23_.v23);
    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + 449LL) = 0;
    if (*(_BYTE*)(a1 + 56) == 1) {
      *(_BYTE*)(a1 + 56) = 0;
    }
    *(_BYTE*)(a1 + 60) = 0;
  }
  HubCharacterNatives_ceca80_alt1(*(_QWORD**)(*(_QWORD*)(a1 + 8) + 24LL),
                                  0x8000000000000LL, 0);
  HubCharacterNatives_ceca80_alt1(*(_QWORD**)(*(_QWORD*)(a1 + 8) + 24LL),
                                  0x4000000000000LL, 0);
  v13 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + 32LL);
  v23_.v26 = nullptr;
  GameRoutine_dac8c0_alt1(v23_.v23, (_QWORD*)(v13 + 176));
  if (v23_.v26 == v23_.v23) {
    v14 = 32;
  }
  else {
    if (v23_.v26 == nullptr) {
      goto LABEL_15;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*v23_.v26 + v14))((__int64)v23_.v26);
LABEL_15:
  GameHr_daa020(*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + 32LL),
                *(_QWORD*)(a1 + 32));
  GameRoutine_cecf30_alt1(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL));
  v15 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + 24LL);
  if (*(_BYTE*)(v15 + 336) == 1) {
    *(_BYTE*)(v15 + 336) = 0;
    v15 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + 24LL);
  }
  v16 = *(_QWORD*)(v15 + 352);
  for (i = *(_QWORD*)(v15 + 360); i != v16; i -= 16) {
    v18 = *(_QWORD*)(i - 8);
    if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      std___1___shared_weak_count___release_weak_alt1(v18);
    }
  }
  v19 = *(_QWORD*)(v15 + 376);
  *(_QWORD*)(v15 + 360) = v16;
  *(_QWORD*)(v15 + 384) = v19;
  HubCharacterNatives_caea10_alt1(*(_QWORD*)(a1 + 8), 0x2000, 0);
  v20 = (_QWORD*)GameData_220b6f0;
  v21 = *(_QWORD**)(GameData_220b6f0 + 56);
  if (v21 != nullptr) {
    HubCharacterNatives_ceccf0_alt1(v21);
  }
  v20[7] = 0;
  GameRoutine_cf12a0_alt1(v20);
  result = *(_QWORD*)(a1 + 24);
  *(_QWORD*)a1 = &game_hub_CharacterControllerBase_vtable;
  if (result != 0) {
    return std___1___shared_weak_count___release_weak_alt1(result);
  }
  return result;
}

__int64 CharacterControllerPlayer_10c8e20(__int64 result)
{
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
  struct {
    _QWORD v15[2];
    __int64 v16;
    __int64 v17;
    __int64 v18;
    char gap40_[8];
    __int64 v19;
    __int64 v20;
    char v21;
    char gap65_[15];
    char v22;
    char gap81_[15];
    __int64 v23;
    __int64 v24;
    __int64 v25;
  } v15_;

  if (*(_BYTE*)(result + 56) == 1) {
    v3 = *(_QWORD*)(result + 8);
    v4 = result;
    LOBYTE(v15_.v16) = 0;
    v5 = *(_QWORD*)(*(_QWORD*)(v3 + 24) + 32LL);
    v6 = *(_QWORD*)(v5 + 32);
    v7 = *(_QWORD*)(v5 + 40);
    v15_.v22 = 0;
    v15_.v15[0] = v6;
    v15_.v15[1] = v7;
    if (*(_BYTE*)(v5 + 112) == 1) {
      v8 = *(_QWORD*)(v5 + 56);
      v15_.v16 = *(_QWORD*)(v5 + 48);
      v15_.v17 = v8;
      v9 = *(_QWORD*)(v5 + 64);
      LOBYTE(v15_.v19) = 0;
      v15_.v21 = 0;
      v15_.v18 = v9;
      if (*(_BYTE*)(v5 + 96) == 1) {
        v10 = *(_QWORD*)(v5 + 88);
        v15_.v19 = *(_QWORD*)(v5 + 80);
        v15_.v20 = v10;
        v15_.v21 = 1;
      }
      v15_.v22 = 1;
    }
    v11 = *(_QWORD*)(v5 + 128);
    v12 = *(_QWORD*)(v5 + 136);
    v13 = *(_QWORD*)(v5 + 144);
    v15_.v23 = v11;
    v15_.v24 = v12;
    v15_.v25 = v13;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_22110b8) != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release_alt1((__int64)&GameData_22110b8);
    }
    v14 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 24LL);
    v15_.v15[0] = GameData_22110ac;
    result = CharacterInputPlayer_da9a80_alt1(*(_QWORD*)(v14 + 32),
                                              (__int64)v15_.v15);
    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v4 + 8) + 24LL) + 449LL) = 0;
    if (*(_BYTE*)(v4 + 56) == 1) {
      *(_BYTE*)(v4 + 56) = 0;
    }
    *(_BYTE*)(v4 + 60) = 0;
  }
  return result;
}

_QWORD* game_hub_CharacterControllerPlayer_UpdateAccessLookTo(__int64 a1,
                                                              __int64 a2,
                                                              __int64 a3,
                                                              __int64 a4)
{
  unsigned __int64 v5;
  __int128 v6;
  float v7;
  char v8;
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
  __int64 v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  __int64 v46;
  bool v47;
  int v48;
  int v49;
  __int64 v50;
  __int64 v51;
  _BOOL4 v52;
  __int64 v53;
  float v54;
  float v55;
  float v56;
  __int64 v57;
  float32x4_t* v58;
  float32x4_t v59;
  unsigned __int64 v60;
  float32x4_t v61;
  __int64* v62;
  __int64* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  float32x4_t* v73;
  float32x4_t v74;
  unsigned __int64 v75;
  __int64 v76;
  int v77;
  __int128 v78;
  __int128 v79;
  __int64 v80;
  _QWORD* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  _QWORD* v88;
  _QWORD* v89;
  __int64* v90;
  unsigned __int64 v91;
  __int64 v92;
  __int64 v93;
  _QWORD* v94;
  _QWORD* v95;
  float32x4_t* v96;
  float32x4_t* v97;
  float32x4_t v98;
  __int128 v99;
  float32x4_t v100;
  unsigned __int64 v101;
  __int128 v102;
  float v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  float32x4_t v108;
  int8x16_t v109;
  char v110;
  __int64 v111;
  int v112;
  _QWORD* result;
  float32x4_t v114;
  float32x4_t v115;
  unsigned __int32 v116;
  struct {
    _QWORD v117[8];
    char v118;
    char gap81_[15];
    char v119;
    char gap97_[15];
    __int64 v120;
    __int64 v121;
    __int64 v122;
  } v117_;
  struct {
    _QWORD v123[4];
    _QWORD* v124;
  } v123_;
  float32x4_t v125;
  struct {
    float32x4_t v126;
    __int128 v127;
    __int128 v128;
    int v129;
  } v126_;
  float32x4_t v130[2];
  _QWORD* i;

  if (*(_BYTE*)(a1 + 56) != 1) {
    goto LABEL_47;
  }
  if (game_ProcFadeView_instance_ == 0) {
    *(_BYTE*)(a1 + 60) = 1;
    goto LABEL_21;
  }
  v5 = game_ProcFadeView_instance_ +
       ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ + 480)
        << 6);
  if (*(float*)(v5 + 172) == *(float*)(v5 + 168)) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)(v5 + 160) + 16LL))(v5 + 160);
  }
  else {
    v6 = *(_OWORD*)(v5 + 208);
  }
  if (*((float*)&v6 + 3) != 0x1.0000000000000p+0f) {
    v8 = *(_BYTE*)(a1 + 56);
  LABEL_20:
    *(_BYTE*)(a1 + 60) = 1;
    if ((v8 & 1) == 0) {
      GameRoutine_8123d0_alt1();
    }
  LABEL_21:
    v20 = *(_QWORD*)(a1 + 8);
    v21 = *(float*)(a1 + 44);
    v22 = fabsf(*(float*)(*(_QWORD*)(*(_QWORD*)(v20 + 24) + 8LL) + 228LL));
    if (v21 <= 0x0.0p+0f) {
      if (v21 >= 0x0.0p+0f || (v21 = v21 + v22) <= 0x0.0p+0f) {
      LABEL_27:
        v23 = *(float*)(a1 + 48);
        v24 = *(float*)(a1 + 40);
        *(float*)(a1 + 44) = v21;
        if (v23 > 0x0.0p+0f) {
          if (v23 > 0x1.0000000000000p-1f) {
            v23 = 0x1.0000000000000p-1f;
          }
          v25 = v21 / v23;
          if (v25 <= 0x1.0000000000000p+0f) {
            v26 = v25;
          }
          else {
            v26 = 0x1.0000000000000p+0f;
          }
          if (v25 >= 0x0.0p+0f) {
            v27 = v26;
          }
          else {
            v27 = 0x0.0p+0f;
          }
          v28 = powf_alt1(v27, 0x1.0000000000000p-1f);
          v20 = *(_QWORD*)(a1 + 8);
          v24 = v24 *
                (float)(fminf(fmaxf(v28, 0x0.0p+0f), 0x1.0000000000000p+0f) +
                        0x0.0p+0f);
        }
        v29 = *(_QWORD*)(v20 + 24);
        LOBYTE(v117_.v117[2]) = 0;
        v30 = *(_QWORD*)(v29 + 32);
        v31 = *(_QWORD*)(v30 + 32);
        v32 = *(_QWORD*)(v30 + 40);
        v117_.v119 = 0;
        v117_.v117[0] = v31;
        v117_.v117[1] = v32;
        if (*(_BYTE*)(v30 + 112) == 1) {
          v33 = *(_QWORD*)(v30 + 56);
          v117_.v117[2] = *(_QWORD*)(v30 + 48);
          v117_.v117[3] = v33;
          v34 = *(_QWORD*)(v30 + 64);
          LOBYTE(v117_.v117[6]) = 0;
          v117_.v118 = 0;
          v117_.v117[4] = v34;
          if (*(_BYTE*)(v30 + 96) == 1) {
            v35 = *(_QWORD*)(v30 + 88);
            v117_.v117[6] = *(_QWORD*)(v30 + 80);
            v117_.v117[7] = v35;
            v117_.v118 = 1;
          }
          v117_.v119 = 1;
        }
        v36 = *(_QWORD*)(v30 + 136);
        v117_.v120 = *(_QWORD*)(v30 + 128);
        v117_.v121 = v36;
        v117_.v122 = *(_QWORD*)(v30 + 144);
        v37 = *(float*)(*(_QWORD*)(*(_QWORD*)(v29 + 16) + 488LL) + 36LL);
        v38 = v37 + (float)(roundf(v37 * 0x1.45f3060000000p-3f) *
                            -0x1.921fb60000000p+2f);
        if (v38 <= 0x1.921fb60000000p+0f) {
          v40 = 0x1.0000000000000p+0f;
          if (v38 >= -0x1.921fb60000000p+0f) {
          LABEL_46:
            v41 = v38 * v38;
            v42 =
                v38 *
                (float)((float)((float)-(
                                    float)(*(float*)((char*)((
                                                         __int128*)0x10LL) +
                                                     (_QWORD)GameData_212c190) -
                                           (float)((float)(*(float*)((char*)((
                                                                         _UNKNOWN**)0x8LL) +
                                                                     (_QWORD)
                                                                         GameData_212c190 +
                                                                     4) +
                                                           (float)((float)-(
                                                                       float)(*(float*)((char*)((
                                                                                            _UNKNOWN**)0x8LL) +
                                                                                        (_QWORD)
                                                                                            GameData_212c190) -
                                                                              (float)((float)(*((float*)
                                                                                                    GameData_212c190 +
                                                                                                1) -
                                                                                              (float)(*(float*)
                                                                                                          GameData_212c190 *
                                                                                                      (float)(v38 *
                                                                                                              v38))) *
                                                                                      (float)(v38 *
                                                                                              v38))) *
                                                                   (float)(v38 *
                                                                           v38))) *
                                                   (float)(v38 * v38))) *
                                (float)(v38 * v38)) +
                        0x1.0000000000000p+0f);
            v43 = *(float*)((char*)((__int128*)0x10LL) +
                            (_QWORD)GameData_212c188);
            v44 =
                *(float*)((char*)((_UNKNOWN**)0x8LL) +
                          (_QWORD)GameData_212c188 + 4) +
                (float)((float)-(
                            float)(*(float*)((char*)((_UNKNOWN**)0x8LL) +
                                             (_QWORD)GameData_212c188) -
                                   (float)((float)(*((float*)GameData_212c188 +
                                                     1) -
                                                   (float)(*(float*)
                                                               GameData_212c188 *
                                                           v41)) *
                                           v41)) *
                        v41);
            BYTE1(v117_.v117[1]) = *(_BYTE*)(a1 + 52);
            v45 = v40 *
                  (float)((float)((float)-(float)(v43 - (float)(v44 * v41)) *
                                  v41) +
                          0x1.0000000000000p+0f);
            *(float*)v117_.v117 = v24 * (float)(v42 + (float)(v45 * 0x0.0p+0f));
            *((float*)v117_.v117 + 1) =
                v24 * (float)(v45 + (float)(v42 * -0x0.0p+0f));
            CharacterInputPlayer_da9a80_alt1(v30, (__int64)v117_.v117);
            goto LABEL_47;
          }
          v39 = -0x1.921fb60000000p+1f;
        }
        else {
          v39 = 0x1.921fb60000000p+1f;
        }
        v38 = v39 - v38;
        v40 = -0x1.0000000000000p+0f;
        goto LABEL_46;
      }
    }
    else {
      v21 = v21 - v22;
      if (v21 >= 0x0.0p+0f) {
        goto LABEL_27;
      }
    }
    v21 = 0x0.0p+0f;
    goto LABEL_27;
  }
  LODWORD(v7) = LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                             (_QWORD*)(*(_QWORD*)(v5 + 160) + 16LL))(
                                v5 + 160, *((float*)&v6 + 3)))
                    .n128_u32[3];
  v8 = *(_BYTE*)(a1 + 56);
  if (v7 != 0x1.0000000000000p+0f) {
    goto LABEL_20;
  }
  if (*(_BYTE*)(a1 + 60) == 1 && *(_BYTE*)(a1 + 56) != 0) {
    v9 = *(_QWORD*)(a1 + 8);
    LOBYTE(v117_.v117[2]) = 0;
    v10 = *(_QWORD*)(*(_QWORD*)(v9 + 24) + 32LL);
    v11 = *(_QWORD*)(v10 + 32);
    v12 = *(_QWORD*)(v10 + 40);
    v117_.v119 = 0;
    v117_.v117[0] = v11;
    v117_.v117[1] = v12;
    if (*(_BYTE*)(v10 + 112) == 1) {
      v13 = *(_QWORD*)(v10 + 56);
      v117_.v117[2] = *(_QWORD*)(v10 + 48);
      v117_.v117[3] = v13;
      v14 = *(_QWORD*)(v10 + 64);
      LOBYTE(v117_.v117[6]) = 0;
      v117_.v118 = 0;
      v117_.v117[4] = v14;
      if (*(_BYTE*)(v10 + 96) == 1) {
        v15 = *(_QWORD*)(v10 + 88);
        v117_.v117[6] = *(_QWORD*)(v10 + 80);
        v117_.v117[7] = v15;
        v117_.v118 = 1;
      }
      v117_.v119 = 1;
    }
    v16 = *(_QWORD*)(v10 + 128);
    v17 = *(_QWORD*)(v10 + 136);
    v18 = *(_QWORD*)(v10 + 144);
    v117_.v120 = v16;
    v117_.v121 = v17;
    v117_.v122 = v18;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_22110b8) != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release_alt1((__int64)&GameData_22110b8);
    }
    v19 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL);
    v117_.v117[0] = GameData_22110ac;
    CharacterInputPlayer_da9a80_alt1(*(_QWORD*)(v19 + 32), (__int64)v117_.v117);
    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + 449LL) = 0;
    if (*(_BYTE*)(a1 + 56) == 1) {
      *(_BYTE*)(a1 + 56) = 0;
    }
    *(_BYTE*)(a1 + 60) = 0;
  }
LABEL_47:
  v46 = GameData_212dbb8[0];
  v47 = *(int*)(*(_QWORD*)GameData_212dbc8[0] + 32LL) <= 0 &&
        (signed __int32)*(_DWORD*)(*(_QWORD*)GameData_212dbc8[0] + 16LL) <= 0;
  v52 = v47 &&
        (game_ProcGameSkipView_instance_ == 0 ||
         (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                           152) -
                 1 >
             2 ||
         (((v48 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
              ? (v49 = 2)
              : (v49 = 3),
          (v49 & v48) != 0)) &&
        (game_hub_ProcHubSeqView_instance_ == 0 ||
         (v50 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408)) == 0 ||
         *(_QWORD*)(v50 + 40) == 0) &&
        ((v51 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416)) == 0 ||
         *(_QWORD*)(v51 + 40) == 0) &&
        *(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 10LL) == 1 &&
        (signed __int32)*(_DWORD*)(*(_QWORD*)GameData_212d310 + 24LL) < 1;
  v53 = *(_QWORD*)(a1 + 8);
  v54 = *(float*)(*(_QWORD*)(*(_QWORD*)(v53 + 24) + 8LL) + 228LL);
  if ((*(_BYTE*)(a1 + 62) & 1) != 0) {
    if (v52) {
      *(_DWORD*)(a1 + 68) = 0;
    }
    else {
      v56 = v54 + *(float*)(a1 + 68);
      *(float*)(a1 + 68) = v56;
      if (v56 > 0x1.3333340000000p-2f) {
        *(_DWORD*)(a1 + 68) = 0;
        *(_BYTE*)(a1 + 62) = 0;
      }
    }
  }
  else if (v52) {
    v55 = v54 + *(float*)(a1 + 64);
    *(float*)(a1 + 64) = v55;
    if (v55 > 0x1.0000000000000p-1f) {
      *(_DWORD*)(a1 + 64) = 0;
      *(_BYTE*)(a1 + 62) = 1;
    }
  }
  else {
    *(_DWORD*)(a1 + 64) = 0;
  }
  v57 = *(_QWORD*)(v53 + 24);
  v58 = *(float32x4_t**)(*(_QWORD*)(v57 + 8) + 240LL);
  if (v58 != nullptr) {
    v59 = v58[3];
  }
  else {
    LODWORD(v60) = 0;
    *((float*)&v60 + 1) = *(float*)(v57 + 544) * 0x1.99999a0000000p-1f;
    v59 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v57 + 16) + 560LL),
                    COERCE_AS(float32x4_t, v60));
  }
  v125 = v59;
  LANES128(v61).n128_u64[0] = 0;
  LANES128(v61).n128_u32[2] = 0;
  v62 = (__int64*)GameData_212dc68;
  v63 = *(__int64**)(*(_QWORD*)GameData_212dc68 + 96LL);
  v64 = v63[1];
  if (v64 != 0) {
    v116 = LANES128(v59).n128_u32[1];
    v65 = *v63;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v64 + 16), 1u,
                              memory_order_relaxed);
    v66 = std___1___shared_weak_count_lock_alt1(v64);
    std___1___shared_weak_count___release_weak_alt1(v64);
    if (v66 == 0) {
      LODWORD(v64) = 0;
      LANES128(v61).n128_u64[0] = 0;
      LANES128(v61).n128_u32[2] = 0;
      goto LABEL_102;
    }
    v61 = (__typeof__(v61)){0};
    if (v65 == 0 || *(_DWORD*)(v65 + 1136) == 0) {
      LODWORD(v64) = 0;
      goto LABEL_100;
    }
    v68 = *(_QWORD*)(v65 + 104);
    if (v68 != 0) {
      v69 = *(_QWORD*)(v65 + 96);
      v70 = *(_QWORD*)(v65 + 104);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v68 + 16), 1u,
                                memory_order_relaxed);
      v71 = std___1___shared_weak_count_lock_alt1(v70);
      std___1___shared_weak_count___release_weak_alt1(v68);
      if (v71 != 0 && v69 != 0) {
        v72 = *(_QWORD*)(v69 + 24);
        v73 = *(float32x4_t**)(*(_QWORD*)(v72 + 8) + 240LL);
        if (v73 != nullptr) {
          v61 = v73[3];
        }
        else {
          LODWORD(v75) = 0;
          *((float*)&v75 + 1) = *(float*)(v72 + 544) * 0x1.99999a0000000p-1f;
          v61 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v72 + 16) + 560LL),
                          COERCE_AS(float32x4_t, v75));
        }
        LANES128(v61).n128_u32[3] = 0;
        goto LABEL_97;
      }
    }
    else {
      v71 = 0;
    }
    if (*(_BYTE*)(v65 + 80) == 1) {
      v61 = *(float32x4_t*)(v65 + 64);
    }
    else {
      LODWORD(v67) = *(_DWORD*)(v65 + 268);
      LANES128(v74).n128_u64[0] = *(_QWORD*)(v65 + 260);
      LANES128(v74).n128_u64[1] = v67;
      v61 = vaddq_f32(*(float32x4_t*)(v65 + 16), v74);
    }
    LANES128(v61).n128_u32[1] = v116;
    LANES128(v61).n128_u32[3] = 0;
    if (v71 == 0) {
    LABEL_99:
      LODWORD(v64) = 1;
    LABEL_100:
      if (atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v115 = v61;
        (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66);
        std___1___shared_weak_count___release_weak_alt1(v66);
        v61 = v115;
      }
      goto LABEL_102;
    }
  LABEL_97:
    if (atomic_fetch_add((atomic_ullong* volatile)(v71 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v114 = v61;
      (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71);
      std___1___shared_weak_count___release_weak_alt1(v71);
      v61 = v114;
    }
    goto LABEL_99;
  }
LABEL_102:
  if (*(_BYTE*)(a1 + 62) == 1) {
    if ((_DWORD)v64 != 0) {
      v76 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + 24LL);
      v77 = *(unsigned __int8*)(v76 + 336);
      *(_QWORD*)(v76 + 272) = 0;
      if (v77 == 1) {
        *(_QWORD*)(v76 + 288) = LANES128(v61).n128_u64[0];
        *(_QWORD*)(v76 + 304) = LANES128(v61).n128_u64[0];
        v78 = *(_OWORD*)(v76 + 288);
        v79 = *(_OWORD*)(v76 + 304);
        *((_QWORD*)&v78 + 1) = LANES128(v61).n128_u32[2];
        *((_QWORD*)&v79 + 1) = LANES128(v61).n128_u32[2];
        *(_OWORD*)(v76 + 288) = v78;
        *(_OWORD*)(v76 + 304) = v79;
      }
      else {
        LANES128(v61).n128_u32[3] = 0;
        *(_BYTE*)(v76 + 336) = 1;
        *(float32x4_t*)(v76 + 288) = v61;
        *(float32x4_t*)(v76 + 304) = v61;
      }
      *(_DWORD*)(v76 + 320) = 1065353216;
      *(_BYTE*)(a1 + 61) = 1;
    }
    else if (*(_BYTE*)(a1 + 61) == 1) {
      v80 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + 24LL);
      if (*(_BYTE*)(v80 + 336) == 1) {
        *(_BYTE*)(v80 + 336) = 0;
      }
      *(_BYTE*)(a1 + 61) = 0;
    }
  }
  v81 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + 24LL);
  v82 = v81[44];
  v83 = v81[45];
  for (i = v81; v83 != v82; v83 -= 16) {
    v84 = *(_QWORD*)(v83 - 8);
    if (v84 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v84 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v84 + 16LL))(v84);
      std___1___shared_weak_count___release_weak_alt1(v84);
    }
  }
  v85 = v81[47];
  v81[45] = v82;
  v81[48] = v85;
  if (*(_BYTE*)(a1 + 62) != 1) {
    goto LABEL_151;
  }
  v86 = *v62;
  LOBYTE(v117_.v117[0]) = 1;
  BYTE4(v117_.v117[1]) = 1;
  LOBYTE(v117_.v117[1]) = 1;
  v123_.v124 = v123_.v123;
  HIDWORD(v117_.v117[0]) = *(_DWORD*)(*(_QWORD*)GameData_212dbc0[0] + 88LL);
  v123_.v123[0] = GameData_200a538;
  v123_.v123[1] = a1;
  v123_.v123[2] = &v125;
  v123_.v123[3] = &i;
  EventManager_cbc520_alt1(v86, (__int64)v117_.v117, (__int64)v123_.v123, a4);
  if (v123_.v124 == v123_.v123) {
    v87 = 32;
  }
  else {
    if (v123_.v124 == nullptr) {
      goto LABEL_124;
    }
    v87 = 40;
  }
  (*(void (**)(__int64))(*v123_.v124 + v87))((__int64)v123_.v124);
LABEL_124:
  v88 = *(_QWORD**)(*GameData_212d458[0] + 24);
  v89 = *(_QWORD**)(*GameData_212d458[0] + 32);
  if (v88 != v89) {
    v90 = GameData_212eba8[0];
    do {
      if (*(_DWORD*)(*v88 + 1112LL) != 0) {
        v91 = *(_QWORD*)(*v88 + 24LL);
        v92 = *(_QWORD*)(v91 + 8);
        if (*(_BYTE*)(v92 + 145) == 1) {
          v117_.v118 = 0;
          LOBYTE(v117_.v117[0]) = 0;
          v93 = i[1];
          LANES128(v130[0]).n128_u32[0] = 1090519040;
          if (v91 == v93) {
            break;
          }
          v94 = *(_QWORD**)(*v90 + 8);
          v95 = *(_QWORD**)(*v90 + 16);
          if (v94 == v95) {
            break;
          }
          while (*v94 != v91) {
            v94 += 2;
            if (v94 == v95) {
              goto LABEL_151;
            }
          }
          if (v94 == v95) {
            break;
          }
          v126_.v128 = (__typeof__(v126_.v128)){0};
          v126_.v127 = (__typeof__(v126_.v127)){0};
          v96 = *(float32x4_t**)(v92 + 240);
          v126_.v129 = 1065353216;
          v97 = *(float32x4_t**)(v91 + 16);
          LANES128(v126_.v126).n128_u64[0] = v91;
          v98 = v97[35];
          *(_QWORD*)&v126_.v127 = LANES128(v97[35]).n128_u64[0];
          *(_QWORD*)&v99 = v126_.v127;
          *((_QWORD*)&v99 + 1) = LANES128(v98).n128_u32[2];
          v126_.v127 = v99;
          if (v96 != nullptr) {
            v100 = v96[3];
          }
          else {
            LODWORD(v101) = 0;
            *((float*)&v101 + 1) = *(float*)(v91 + 544) * 0x1.99999a0000000p-1f;
            v100 = vaddq_f32(v98, COERCE_AS(float32x4_t, v101));
          }
          *(_QWORD*)&v126_.v128 = LANES128(v100).n128_u64[0];
          *(_QWORD*)&v102 = LANES128(v100).n128_u64[0];
          *((_QWORD*)&v102 + 1) = LANES128(v100).n128_u32[2];
          v103 = *(float*)(v91 + 528);
          v126_.v128 = v102;
          if ((game_zview_d33d70_alt1((__int64)i, &v126_.v126, (float*)v130,
                                      (__int64)v117_.v117, v103) &
               1) == 0) {
            break;
          }
          v104 = v88[1];
          if (v104 != 0) {
            v105 = *(_QWORD*)(a1 + 8);
            v106 = *v88;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v104 + 16), 1u,
                                      memory_order_relaxed);
            if (*(_QWORD*)(v104 + 8) == -1) {
              goto LABEL_126;
            }
            v107 = std___1___shared_weak_count_lock_alt1(v104);
            v130[0] = vaddq_f32(
                *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v106 + 24) + 16LL) +
                                560LL),
                COERCE_AS(float32x4_t, GameData_1a831c0));
            if (atomic_fetch_add((atomic_ullong* volatile)(v107 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) != 0) {
              if ((*(_BYTE*)(v105 + 186) & 0x40) != 0) {
                goto LABEL_149;
              }
            }
            else {
              v111 = v107;
              (*(void (**)(__int64))(*(_QWORD*)v107 + 16LL))(v107);
              std___1___shared_weak_count___release_weak_alt1(v111);
              if ((*(_BYTE*)(v105 + 186) & 0x40) != 0) {
              LABEL_149:
                std___1___shared_weak_count___release_weak_alt1(v104);
              LABEL_150:
                GameRoutine_d34180_alt1(i, *(_QWORD*)(*v88 + 24LL));
                goto LABEL_127;
              }
            }
            v126_.v126 = vaddq_f32(
                *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v105 + 24) + 16LL) +
                                560LL),
                COERCE_AS(float32x4_t, GameData_1a831c0));
            v108 = vsubq_f32(v126_.v126, v130[0]);
            LANES128(v108).n128_u32[1] = vmuls_lane_f32(
                0x1.0000000000000p+2f,
                COERCE_AS(float32x2_t, LANES128(v108).n128_u64[0]), 1);
            v109 = vmulq_f32(v108, v108);
            LANES128(v109).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v109, v109, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v109).n128_u64[0])))
                    .n64_u64[0];
            if (LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v109).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v109).n128_u64[0])))
                        .n64_f32[0] >= 0x1.9000000000000p+12f ||
                *(_DWORD*)(v105 + 1296) !=
                    (unsigned int)GameRoutine_f71d40_alt1(
                        *GameData_212ebb0[0], (__int64)v130,
                        *(_QWORD*)v46 + 64LL)) {
            LABEL_126:
              std___1___shared_weak_count___release_weak_alt1(v104);
            }
            else {
              collision_670c60_alt1((void*)((__int64)v117_.v117), &v126_.v126,
                                    v130, 0x1000000000001LL);
              v110 = v117_.v119;
              std___1___shared_weak_count___release_weak_alt1(v104);
              if ((v110 & 1) == 0) {
                goto LABEL_150;
              }
            }
          }
        }
      }
    LABEL_127:
      v88 += 2;
    } while (v88 != v89);
  }
LABEL_151:
  v112 = *(unsigned __int8*)(*(_QWORD*)v46 + 10LL);
  result = HubCharacterNatives_ceca80_alt1(
      *(_QWORD**)(*(_QWORD*)(a1 + 8) + 24LL), 0x4000000000000LL,
      *(_BYTE*)(*(_QWORD*)v46 + 10LL));
  if (v112 == 1) {
    GameRoutine_d6f4f0_alt1(*(_QWORD*)GameData_212dbc0[0]);
    return (_QWORD*)FastTravelManager_ee24d0_alt1(
        *GameData_212ec18[0],
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + 16LL) + 560LL);
  }
  return result;
}

__int64 CharacterControllerPlayer_10c9b80(__int64 result, __int64 a2, char a3,
                                          float a4)
{

#pragma clang fp contract(off)
  char v5;
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
  struct {
    _QWORD v19[2];
    __int64 v20;
    __int64 v21;
    __int64 v22;
    char gap40_[8];
    __int64 v23;
    __int64 v24;
    char v25;
    char gap65_[15];
    char v26;
    char gap81_[15];
    __int64 v27;
    __int64 v28;
    __int64 v29;
  } v19_;

  v5 = a3 & 1;
  v7 = result;
  if (*(_BYTE*)(result + 56) == 1) {
    v8 = *(_QWORD*)(result + 8);
    LOBYTE(v19_.v20) = 0;
    v9 = *(_QWORD*)(*(_QWORD*)(v8 + 24) + 32LL);
    v10 = *(_QWORD*)(v9 + 32);
    v11 = *(_QWORD*)(v9 + 40);
    v19_.v26 = 0;
    v19_.v19[0] = v10;
    v19_.v19[1] = v11;
    if (*(_BYTE*)(v9 + 112) == 1) {
      v12 = *(_QWORD*)(v9 + 56);
      v19_.v20 = *(_QWORD*)(v9 + 48);
      v19_.v21 = v12;
      v13 = *(_QWORD*)(v9 + 64);
      LOBYTE(v19_.v23) = 0;
      v19_.v25 = 0;
      v19_.v22 = v13;
      if (*(_BYTE*)(v9 + 96) == 1) {
        v14 = *(_QWORD*)(v9 + 88);
        v19_.v23 = *(_QWORD*)(v9 + 80);
        v19_.v24 = v14;
        v19_.v25 = 1;
      }
      v19_.v26 = 1;
    }
    v15 = *(_QWORD*)(v9 + 128);
    v16 = *(_QWORD*)(v9 + 136);
    v17 = *(_QWORD*)(v9 + 144);
    v19_.v27 = v15;
    v19_.v28 = v16;
    v19_.v29 = v17;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_22110b8) != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release_alt1((__int64)&GameData_22110b8);
    }
    v18 = *(_QWORD*)(*(_QWORD*)(v7 + 8) + 24LL);
    v19_.v19[0] = GameData_22110ac;
    result = CharacterInputPlayer_da9a80_alt1(*(_QWORD*)(v18 + 32),
                                              (__int64)v19_.v19);
    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v7 + 8) + 24LL) + 449LL) = 0;
  }
  *(_BYTE*)(v7 + 60) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(float*)(v7 + 40) = a4;
  *(_BYTE*)(v7 + 52) = v5;
  *(_BYTE*)(v7 + 56) = 1;
  if ((a2 & 0x100000000LL) != 0) {
    *(_DWORD*)(v7 + 44) = a2;
    *(_DWORD*)(v7 + 48) = a2;
  }
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v7 + 8) + 24LL) + 449LL) = v5;
  return result;
}

__int64 CharacterControllerPlayer_10c9cf0(__int64 a1)
{
  __int64 v2;

  v2 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 200LL);
  if (v2 != 0) {
    LOBYTE(v2) = DungeonController_f5f760();
  }
  return HubCharacterNatives_ceca80(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL),
                                    0x2000, v2 & 1);
}

__int64

game_hub_CharacterControllerPlayer_CharacterControllerPlayer_lambda0_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  struct {
    __int64 v27;
    _QWORD* v28;
    char* v29;
    _QWORD* v30;
    __int64 v31;
    __int64 v32;
  } v27_;
  struct {
    __int64 v33;
    __int64 v34;
  } v33_;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v4 = *(_QWORD**)(GameData_21ec7c0 + 24);
  v5 = *(_QWORD**)(GameData_21ec7c0 + 32);
  if (v4 == v5) {
    goto LABEL_14;
  }
  v6 = *(_QWORD*)(a1 + 8);
  v7 = *(_QWORD*)(v2 + 40);
  while (1) {
    v8 = *v4;
    if (*(_QWORD*)(*v4 + 24LL) == v7) {
      break;
    }
    v4 += 2;
    if (v4 == v5) {
      goto LABEL_14;
    }
  }
  v9 = v4[1];
  if (v9 == 0 ||
      (v10 = v4[1],
       atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                                 memory_order_relaxed),
       v11 = std___1___shared_weak_count_lock_alt1(v10),
       std___1___shared_weak_count___release_weak_alt1(v9), v11 == 0)) {
  LABEL_14:
    result = 0;
    goto LABEL_15;
  }
  v12 = *(_QWORD*)(v8 + 56);
  if (*(_DWORD*)(v8 + 1112) == 1 && v12 != 0) {
    if (*(_BYTE*)(v12 + 180) != 1) {
      v27_.v31 = 0;
      v27_.v32 = 0;
      v22 = fw_memory_g_heap_manager_ptr;
      v23 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
      *v23 = v8;
      v27_.v28 = v23;
      v24 = (__int64)v23;
      LODWORD(v27_.v27) = 0;
      v27_.v29 = (char*)(v23 + 1);
      v27_.v30 = v23 + 1;
      GameRoutine_da21c0_alt1(GameData_220d630, (int*)&v27_.v27);
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v22 + v25, v24);
      result = 1;
      goto LABEL_45;
    }
    if (game_GameModeData_instance_ != 0) {
      v16 = *(_QWORD*)(game_GameModeData_instance_ + 24);
      if (v16 != 0) {
        v17 = GameData_21f3cc8;
        *(_DWORD*)(GameData_21f3cc8 + 8) = 2;
        *(_QWORD*)(v17 + 16) = v16;
        if ((*(_BYTE*)(GameData_21f3d10 + 11) & 1) == 0) {
          *(_BYTE*)(GameData_21f3d10 + 11) = 1;
          v27_.v27 = 0;
          v27_.v28 = nullptr;
          GameRoutine_efbb60_alt1(GameData_21f3d08, &v27_.v27, 0);
          if (game_script_hub_talk_g_select_menu != 0) {
            *(_DWORD*)(game_script_hub_talk_g_select_menu + 152) = 12;
          }
        }
        if (game_hub_ProcHubSeqView_instance_ != 0) {
          *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 152) = 13;
        }
        *(_DWORD*)(v17 + 8) = 9;
      }
    }
    game_hub_e1b4d0((void*)(&v27_.v27));
    if ((v27_.v27 & 1) != 0) {
      v18 = v27_.v29;
    }
    else {
      v18 = (char*)&v27_.v27 + 1;
    }
    if ((v27_.v27 & 1) != 0) {
      v19 = (unsigned __int64)v27_.v28;
    }
    else {
      v19 = (unsigned __int64)(unsigned __int8)v27_.v27 >> 1;
    }
    game_zview_d57000((void*)(&v33_.v33),
                      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v6 + 8) + 24LL) + 48LL),
                      v18, v19, "Loc_C_Center", 12);
    v20 = v33_.v34;
    if (v33_.v34 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v33_.v34 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      std___1___shared_weak_count___release_weak_alt1(v20);
    }
    if ((v27_.v27 & 1) != 0 && v27_.v29 != nullptr) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, (__int64)v27_.v29);
    }
  }
  result = 0;
LABEL_45:
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v26 = result;
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak_alt1(v11);
    result = v26;
  }
LABEL_15:
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v15 = result;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v3);
    return v15;
  }
  return result;
}

void game_hub_CharacterControllerPlayer_UpdateAccessLookTo_lambda0_Invoke(
    __int64 a1, __int64* a2, double a3, double a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float32x4_t* v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  __int128 v18;
  unsigned __int64 v19;
  float32x4_t v20;
  __int128 v21;
  float v22;
  __int64 v23;
  float32x4_t v24;
  float32x4_t v25;
  __int64 v26;
  float32x4_t v27;
  int8x16_t v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  atomic_ullong* v32;
  __int128 v33;
  __int64 v34;
  long double v35;
  __int64 v36;
  __int128 v37;
  float32x4_t v38;
  struct {
    float32x4_t v39[3];
    int v40;
  } v39_;
  struct {
    __int64 v41;
    __int64 v42;
    char gap128_[48];
    char v43;
    char gap177_[15];
    char v44;
  } v41_;
  int v45;

  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v5 = *a2;
  v4 = a2[1];
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  if (*(_QWORD*)(v5 + 1384) != *(_QWORD*)(v5 + 1376) &&
      *(_DWORD*)(v5 + 1136) != 0) {
    v7 = *(_QWORD*)(a1 + 8);
    v8 = *(_QWORD*)(a1 + 16);
    v9 = *(_QWORD*)(v5 + 104);
    v38 = (__typeof__(v38)){0};
    if (v9 != 0) {
      v10 = *(_QWORD*)(v5 + 96);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                                memory_order_relaxed);
      v11 = std___1___shared_weak_count_lock(v9),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
      std___1___shared_weak_count___release_weak(v9),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v11 != 0 && v10 != 0) {
        v12 = *(_QWORD*)(v10 + 24);
        v13 = *(float32x4_t**)(*(_QWORD*)(v12 + 8) + 240LL);
        if (v13 != nullptr) {
          v14 = v13[3];
        }
        else {
          LODWORD(v19) = 0;
          *((float*)&v19 + 1) = *(float*)(v12 + 544) * 0x1.99999a0000000p-1f;
          v14 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v12 + 16) + 560LL),
                          COERCE_AS(float32x4_t, v19));
        }
        LANES128(v20).n128_u64[0] = LANES128(v14).n128_u64[0];
        LANES128(v20).n128_u64[1] = LANES128(v14).n128_u32[2];
        *(_QWORD*)&v21 = LANES128(v14).n128_u64[0];
        *((_QWORD*)&v21 + 1) = LANES128(v14).n128_u32[2];
        v37 = v21;
        v38 = v20;
        goto LABEL_18;
      }
    }
    else {
      v11 = 0;
    }
    if (*(_BYTE*)(v5 + 80) == 1) {
      v15 = *(float32x4_t*)(v5 + 64);
    }
    else {
      LODWORD(a4) = *(_DWORD*)(v5 + 268);
      LANES128(v16).n128_u64[0] = *(_QWORD*)(v5 + 260);
      LANES128(v16).n128_f64[1] = a4;
      v15 = vaddq_f32(*(float32x4_t*)(v5 + 16), v16);
    }
    LANES128(v17).n128_u64[0] = LANES128(v15).n128_u64[0];
    LANES128(v17).n128_u64[1] = LANES128(v15).n128_u32[2];
    *(_QWORD*)&v18 = LANES128(v15).n128_u64[0];
    *((_QWORD*)&v18 + 1) = LANES128(v15).n128_u32[2];
    v37 = v18;
    v38 = v17;
    DWORD1(v37) = *(_DWORD*)(v8 + 4);
    if (v11 == 0) {
    LABEL_20:
      v22 = fmaxf(*(float*)(v5 + 276), *(float*)(v5 + 284));
      v23 = **(_QWORD**)(a1 + 24);
      v45 = 1090519040;
      LOBYTE(v41_.v41) = 0;
      v41_.v43 = 0;
      LANES128(v39_.v39[0]).n128_u64[0] = 0;
      LANES128(v24).n128_u64[0] = v37;
      LANES128(v25).n128_u64[0] = v37;
      v39_.v40 = 1065353216;
      LANES128(v24).n128_u64[1] = DWORD2(v37);
      LANES128(v25).n128_u64[1] = DWORD2(v37);
      v39_.v39[1] = v24;
      v39_.v39[2] = v25;
      if ((game_zview_d33d70_alt1(v23, v39_.v39, (float*)&v45,
                                  (__int64)&v41_.v41, v22) &
           1) != 0) {
        v26 = *(_QWORD*)(v7 + 8);
        if ((*(_BYTE*)(v26 + 186) & 0x40) != 0 ||
            (v39_.v39[0] = vaddq_f32(
                 *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v26 + 24) + 16LL) +
                                 560LL),
                 COERCE_AS(float32x4_t, GameData_1a831c0)),
             v27 = vsubq_f32(v39_.v39[0], v38),
             LANES128(v27).n128_u32[1] = vmuls_lane_f32(
                 0x1.0000000000000p+2f,
                 COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]), 1),
             v28 = vmulq_f32(v27, v27),
             LANES128(v28).n128_u64[0] =
                 LANES64_OF(
                     vadd_f32(
                         COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v28, v28, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
                     .n64_u64[0],
             LANES64_OF(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
                     .n64_f32[0] < 0x1.9000000000000p+12f) &&
                *(_DWORD*)(v26 + 1296) ==
                    (unsigned int)GameRoutine_f71d40_alt1(
                        *GameData_212ebb0[0], (__int64)&v38,
                        *(_QWORD*)GameData_212dbb8[0] + 64LL) &&
                (X8CALL_X0(float32x4_t*,
                           collision_670c60_alt1((void*)((__int64)&v41_.v41),
                                                 v39_.v39, &v38,
                                                 0x1000000000001LL)),
                 (v41_.v44 & 1) == 0)) {
          v29 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
          *(_QWORD*)(v29 + 40) = 0;
          *(_QWORD*)(v29 + 48) = 0;
          v30 = *(__int64**)(a1 + 24);
          v31 = v29;
          *(_QWORD*)(v29 + 8) = 0;
          v32 = (atomic_ullong*)(v29 + 8);
          *(_QWORD*)(v29 + 16) = 0;
          *(_QWORD*)(v29 + 56) = 0;
          *(_QWORD*)v29 = GameData_200a5a8;
          *(_QWORD*)(v29 + 32) = 0;
          *(_DWORD*)(v29 + 36) = DWORD1(v37);
          *(float*)(v29 + 48) = v22;
          *(_DWORD*)(v29 + 32) = v37;
          v33 = *(_OWORD*)(v29 + 32);
          *((_QWORD*)&v33 + 1) = DWORD2(v37);
          *(_OWORD*)(v29 + 32) = v33;
          v34 = *v30;
          v41_.v41 = v29 + 32;
          v41_.v42 = v29;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                    memory_order_relaxed);
          GameRoutine_d342a0((__int64*)(v34 + 352), &v41_.v41),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          v36 = v41_.v42;
          if (v41_.v42 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v41_.v42 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            *(__n128*)&v35 = std___1___shared_weak_count___release_weak(v36),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          if (atomic_fetch_add(v32, 0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64, long double))(*(_QWORD*)v31 + 16LL))(v31,
                                                                       v35),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            std___1___shared_weak_count___release_weak(v31),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
        }
      }
      goto LABEL_30;
    }
  LABEL_18:
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
      std___1___shared_weak_count___release_weak(v11),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    goto LABEL_20;
  }
LABEL_30:
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak(v4),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
}

#pragma GCC visibility pop
