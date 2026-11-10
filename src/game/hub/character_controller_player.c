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
__n128 CharacterControllerPlayer_Destructor(__int64 a1);
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
__int64 game_hub_CharacterControllerPlayer_UpdateAccessLookTo(__int64 a1,
                                                              long double a2);
void game_hub_CharacterControllerPlayer_UpdateAccessLookTo_lambda0_Invoke(
    __int64 a1, __int64* a2, double a3, double a4);

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

__n128 CharacterControllerPlayer_Destructor(__int64 a1)
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
  __int64 v20;
  __n128 result;
  __int64 v22;
  _QWORD v23[2];
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  char v29;
  char v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  *(_QWORD*)a1 = game_hub_CharacterControllerPlayer_vtable;
  if (*(_BYTE*)(a1 + 56) == 1) {
    v2 = *(_QWORD*)(a1 + 8);
    LOBYTE(v24) = 0;
    v3 = *(_QWORD*)(*(_QWORD*)(v2 + 24) + 32LL);
    v4 = *(_QWORD*)(v3 + 32);
    v5 = *(_QWORD*)(v3 + 40);
    v30 = 0;
    v23[0] = v4;
    v23[1] = v5;
    if (*(_BYTE*)(v3 + 112) == 1) {
      v6 = *(_QWORD*)(v3 + 56);
      v24 = *(_QWORD*)(v3 + 48);
      v25 = v6;
      v7 = *(_QWORD**)(v3 + 64);
      LOBYTE(v27) = 0;
      v29 = 0;
      v26 = v7;
      if (*(_BYTE*)(v3 + 96) == 1) {
        v8 = *(_QWORD*)(v3 + 88);
        v27 = *(_QWORD*)(v3 + 80);
        v28 = v8;
        v29 = 1;
      }
      v30 = 1;
    }
    v9 = *(_QWORD*)(v3 + 128);
    v10 = *(_QWORD*)(v3 + 136);
    v11 = *(_QWORD*)(v3 + 144);
    v31 = v9;
    v32 = v10;
    v33 = v11;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_22110b8) != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release(&GameData_22110b8);
    }
    v12 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL);
    v23[0] = GameData_22110ac;
    CharacterInputPlayer_da9a80(*(_QWORD*)(v12 + 32), v23);
    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + 449LL) = 0;
    if (*(_BYTE*)(a1 + 56) == 1) {
      *(_BYTE*)(a1 + 56) = 0;
    }
    *(_BYTE*)(a1 + 60) = 0;
  }
  HubCharacterNatives_ceca80(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL),
                             0x8000000000000LL, 0);
  HubCharacterNatives_ceca80(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL),
                             0x4000000000000LL, 0);
  v13 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + 32LL);
  v26 = nullptr;
  GameRoutine_dac8c0(v23, v13 + 176);
  if (v26 == v23) {
    v14 = 32;
  }
  else {
    if (v26 == nullptr) {
      goto LABEL_15;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*v26 + v14))((__int64)v26);
LABEL_15:
  GameRoutine_daa020(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + 32LL),
                     *(_QWORD*)(a1 + 32));
  GameRoutine_cecf30(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL));
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
      std___1___shared_weak_count___release_weak(v18);
    }
  }
  v19 = *(_QWORD*)(v15 + 376);
  *(_QWORD*)(v15 + 360) = v16;
  *(_QWORD*)(v15 + 384) = v19;
  HubCharacterNatives_caea10(*(_QWORD*)(a1 + 8), 0x2000, 0);
  v20 = GameData_220b6f0;
  if (*(_QWORD*)(GameData_220b6f0 + 56) != 0) {
    HubCharacterNatives_ceccf0();
  }
  *(_QWORD*)(v20 + 56) = 0;
  GameRoutine_cf12a0(v20);
  v22 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)a1 = &game_hub_CharacterControllerBase_vtable;
  if (v22 != 0) {
    return std___1___shared_weak_count___release_weak(v22);
  }
  return result;
}

__int64 CharacterControllerPlayer_10c8e20(__int64 result)
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
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[2];
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  if (*(_BYTE*)(result + 56) == 1) {
    v26 = v1;
    v27 = v2;
    v3 = *(_QWORD*)(result + 8);
    v4 = result;
    LOBYTE(v16) = 0;
    v5 = *(_QWORD*)(*(_QWORD*)(v3 + 24) + 32LL);
    v6 = *(_QWORD*)(v5 + 32);
    v7 = *(_QWORD*)(v5 + 40);
    v22 = 0;
    v15[0] = v6;
    v15[1] = v7;
    if (*(_BYTE*)(v5 + 112) == 1) {
      v8 = *(_QWORD*)(v5 + 56);
      v16 = *(_QWORD*)(v5 + 48);
      v17 = v8;
      v9 = *(_QWORD*)(v5 + 64);
      LOBYTE(v19) = 0;
      v21 = 0;
      v18 = v9;
      if (*(_BYTE*)(v5 + 96) == 1) {
        v10 = *(_QWORD*)(v5 + 88);
        v19 = *(_QWORD*)(v5 + 80);
        v20 = v10;
        v21 = 1;
      }
      v22 = 1;
    }
    v11 = *(_QWORD*)(v5 + 128);
    v12 = *(_QWORD*)(v5 + 136);
    v13 = *(_QWORD*)(v5 + 144);
    v23 = v11;
    v24 = v12;
    v25 = v13;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_22110b8) != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release(&GameData_22110b8);
    }
    v14 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 24LL);
    v15[0] = GameData_22110ac;
    result = GameRoutine_da9a80(*(_QWORD*)(v14 + 32), v15);
    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v4 + 8) + 24LL) + 449LL) = 0;
    if (*(_BYTE*)(v4 + 56) == 1) {
      *(_BYTE*)(v4 + 56) = 0;
    }
    *(_BYTE*)(v4 + 60) = 0;
  }
  return result;
}

__int64 game_hub_CharacterControllerPlayer_UpdateAccessLookTo(__int64 a1,
                                                              long double a2)
{
  __int64 v2;
  unsigned __int64 v3;
  char v4;
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
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  __int64 v40;
  bool v41;
  int v42;
  int v43;
  __int64 v44;
  __int64 v45;
  _BOOL4 v46;
  __int64 v47;
  float v48;
  float v49;
  float v50;
  __int64 v51;
  float32x4_t* v52;
  float32x4_t v53;
  unsigned __int64 v54;
  float32x4_t v55;
  __int64* v56;
  __int64* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __n128 v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  float32x4_t* v68;
  float32x4_t v69;
  unsigned __int64 v70;
  __int64 v71;
  int v72;
  __int128 v73;
  __int128 v74;
  __int64 v75;
  _QWORD* v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  _QWORD* v83;
  _QWORD* v84;
  __int64* v85;
  unsigned __int64 v86;
  __int64 v87;
  __int64 v88;
  _QWORD* v89;
  _QWORD* v90;
  float32x4_t* v91;
  float32x4_t* v92;
  float32x4_t v93;
  __int128 v94;
  float32x4_t v95;
  unsigned __int64 v96;
  __int128 v97;
  float v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  float32x4_t v103;
  int8x16_t v104;
  char v105;
  long double v106;
  __int64 v107;
  int v108;
  __int64 result;
  __n128 v110;
  float32x4_t v111;
  float32x4_t v112;
  _QWORD v113[8];
  char v114;
  char v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  _QWORD v119[4];
  _QWORD* v120;
  float32x4_t v121;
  float32x4_t v122;
  __int128 v123;
  __int128 v124;
  int v125;
  float32x4_t v126[2];
  _QWORD* i;

  v2 = a1;
  if (*(_BYTE*)(a1 + 56) != 1) {
    goto LABEL_47;
  }
  if (game_ProcFadeView_instance_ == 0) {
    *(_BYTE*)(a1 + 60) = 1;
    goto LABEL_21;
  }
  v3 = game_ProcFadeView_instance_ +
       ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ + 480)
        << 6);
  if (*(float*)(v3 + 172) == *(float*)(v3 + 168)) {
    a1 = (*(__int64 (**)(unsigned __int64))(*(_QWORD*)(v3 + 160) + 16LL))(v3 +
                                                                          160);
  }
  else {
    a2 = *(long double*)(v3 + 208);
  }
  if (*((float*)&a2 + 3) != 0x1.0000000000000p+0) {
    v4 = *(_BYTE*)(v2 + 56);
  LABEL_20:
    *(_BYTE*)(v2 + 60) = 1;
    if ((v4 & 1) == 0) {
      GameRoutine_8123d0(a1);
    }
  LABEL_21:
    v16 = *(_QWORD*)(v2 + 8);
    LODWORD(a2) = *(_DWORD*)(v2 + 44);
    v17 = fabsf(*(float*)(*(_QWORD*)(*(_QWORD*)(v16 + 24) + 8LL) + 228LL));
    if (*(float*)&a2 <= 0.0) {
      if (*(float*)&a2 >= 0.0 ||
          (*(float*)& a2 = *(float*)&a2 + v17, *(float*)&a2 <= 0.0)) {
      LABEL_27:
        v18 = *(float*)(v2 + 48);
        v19 = *(float*)(v2 + 40);
        *(_DWORD*)(v2 + 44) = LODWORD(a2);
        if (v18 > 0.0) {
          if (v18 > 0.5) {
            v18 = 0.5;
          }
          v20 = *(float*)&a2 / v18;
          if (v20 <= 0x1.0000000000000p+0) {
            v21 = v20;
          }
          else {
            v21 = 0x1.0000000000000p+0;
          }
          if (v20 >= 0.0) {
            *(float*)&a2 = v21;
          }
          else {
            *(float*)&a2 = 0.0;
          }
          v22 = powf(a2, 0.5);
          v16 = *(_QWORD*)(v2 + 8);
          v19 =
              v19 * (float)(fminf(fmaxf(v22, 0.0), 0x1.0000000000000p+0) + 0.0);
        }
        v23 = *(_QWORD*)(v16 + 24);
        LOBYTE(v113[2]) = 0;
        v24 = *(_QWORD*)(v23 + 32);
        v25 = *(_QWORD*)(v24 + 32);
        v26 = *(_QWORD*)(v24 + 40);
        v115 = 0;
        v113[0] = v25;
        v113[1] = v26;
        if (*(_BYTE*)(v24 + 112) == 1) {
          v27 = *(_QWORD*)(v24 + 56);
          v113[2] = *(_QWORD*)(v24 + 48);
          v113[3] = v27;
          v28 = *(_QWORD*)(v24 + 64);
          LOBYTE(v113[6]) = 0;
          v114 = 0;
          v113[4] = v28;
          if (*(_BYTE*)(v24 + 96) == 1) {
            v29 = *(_QWORD*)(v24 + 88);
            v113[6] = *(_QWORD*)(v24 + 80);
            v113[7] = v29;
            v114 = 1;
          }
          v115 = 1;
        }
        v30 = *(_QWORD*)(v24 + 136);
        v116 = *(_QWORD*)(v24 + 128);
        v117 = v30;
        v118 = *(_QWORD*)(v24 + 144);
        v31 = *(float*)(*(_QWORD*)(*(_QWORD*)(v23 + 16) + 488LL) + 36LL);
        v32 = v31 + (float)(roundf(v31 * 0x1.45f3060000000p-3) *
                            -0x1.921fb60000000p+2);
        if (v32 <= 0x1.921fb60000000p+0) {
          v34 = 0x1.0000000000000p+0;
          if (v32 >= -0x1.921fb60000000p+0) {
          LABEL_46:
            v35 = v32 * v32;
            v36 =
                v32 *
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
                                                                                                      (float)(v32 *
                                                                                                              v32))) *
                                                                                      (float)(v32 *
                                                                                              v32))) *
                                                                   (float)(v32 *
                                                                           v32))) *
                                                   (float)(v32 * v32))) *
                                (float)(v32 * v32)) +
                        0x1.0000000000000p+0);
            v37 = *(float*)((char*)((__int128*)0x10LL) +
                            (_QWORD)GameData_212c188);
            v38 =
                *(float*)((char*)((_UNKNOWN**)0x8LL) +
                          (_QWORD)GameData_212c188 + 4) +
                (float)((float)-(
                            float)(*(float*)((char*)((_UNKNOWN**)0x8LL) +
                                             (_QWORD)GameData_212c188) -
                                   (float)((float)(*((float*)GameData_212c188 +
                                                     1) -
                                                   (float)(*(float*)
                                                               GameData_212c188 *
                                                           v35)) *
                                           v35)) *
                        v35);
            BYTE1(v113[1]) = *(_BYTE*)(v2 + 52);
            v39 = v34 *
                  (float)((float)((float)-(float)(v37 - (float)(v38 * v35)) *
                                  v35) +
                          0x1.0000000000000p+0);
            *(float*)v113 = v19 * (float)(v36 + (float)(v39 * 0.0));
            *((float*)v113 + 1) = v19 * (float)(v39 + (float)(v36 * -0.0));
            CharacterInputPlayer_da9a80(v24, v113);
            goto LABEL_47;
          }
          v33 = -0x1.921fb60000000p+1;
        }
        else {
          v33 = 0x1.921fb60000000p+1;
        }
        v32 = v33 - v32;
        v34 = -0x1.0000000000000p+0;
        goto LABEL_46;
      }
    }
    else {
      *(float*)&a2 = *(float*)&a2 - v17;
      if (*(float*)&a2 >= 0.0) {
        goto LABEL_27;
      }
    }
    *(_QWORD*)&a2 = 0;
    goto LABEL_27;
  }
  *(__n128*)&a2 =
      ((__n128 (*)(unsigned __int64, float)) *
       (_QWORD*)(*(_QWORD*)(v3 + 160) + 16LL))(v3 + 160, *((float*)&a2 + 3));
  v4 = *(_BYTE*)(v2 + 56);
  if (*((float*)&a2 + 3) != 0x1.0000000000000p+0) {
    goto LABEL_20;
  }
  if (*(_BYTE*)(v2 + 60) == 1 && *(_BYTE*)(v2 + 56) != 0) {
    v5 = *(_QWORD*)(v2 + 8);
    LOBYTE(v113[2]) = 0;
    v6 = *(_QWORD*)(*(_QWORD*)(v5 + 24) + 32LL);
    v7 = *(_QWORD*)(v6 + 32);
    v8 = *(_QWORD*)(v6 + 40);
    v115 = 0;
    v113[0] = v7;
    v113[1] = v8;
    if (*(_BYTE*)(v6 + 112) == 1) {
      v9 = *(_QWORD*)(v6 + 56);
      v113[2] = *(_QWORD*)(v6 + 48);
      v113[3] = v9;
      v10 = *(_QWORD*)(v6 + 64);
      LOBYTE(v113[6]) = 0;
      v114 = 0;
      v113[4] = v10;
      if (*(_BYTE*)(v6 + 96) == 1) {
        v11 = *(_QWORD*)(v6 + 88);
        v113[6] = *(_QWORD*)(v6 + 80);
        v113[7] = v11;
        v114 = 1;
      }
      v115 = 1;
    }
    v12 = *(_QWORD*)(v6 + 128);
    v13 = *(_QWORD*)(v6 + 136);
    v14 = *(_QWORD*)(v6 + 144);
    v116 = v12;
    v117 = v13;
    v118 = v14;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_22110b8) != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release(&GameData_22110b8);
    }
    v15 = *(_QWORD*)(*(_QWORD*)(v2 + 8) + 24LL);
    v113[0] = GameData_22110ac;
    CharacterInputPlayer_da9a80(*(_QWORD*)(v15 + 32), v113);
    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v2 + 8) + 24LL) + 449LL) = 0;
    if (*(_BYTE*)(v2 + 56) == 1) {
      *(_BYTE*)(v2 + 56) = 0;
    }
    *(_BYTE*)(v2 + 60) = 0;
  }
LABEL_47:
  v40 = GameData_212dbb8[0];
  v41 = *(int*)(*(_QWORD*)GameData_212dbc8[0] + 32LL) <= 0 &&
        *(_DWORD*)(*(_QWORD*)GameData_212dbc8[0] + 16LL) <= 0;
  v46 = v41 &&
        (game_ProcGameSkipView_instance_ == 0 ||
         (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                           152) -
                 1 >
             2 ||
         (((v42 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
              ? (v43 = 2)
              : (v43 = 3),
          (v43 & v42) != 0)) &&
        (game_hub_ProcHubSeqView_instance_ == 0 ||
         (v44 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408)) == 0 ||
         *(_QWORD*)(v44 + 40) == 0) &&
        ((v45 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416)) == 0 ||
         *(_QWORD*)(v45 + 40) == 0) &&
        *(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 10LL) == 1 &&
        *(_DWORD*)(*(_QWORD*)GameData_212d310 + 24LL) < 1;
  v47 = *(_QWORD*)(v2 + 8);
  v48 = *(float*)(*(_QWORD*)(*(_QWORD*)(v47 + 24) + 8LL) + 228LL);
  if ((*(_BYTE*)(v2 + 62) & 1) != 0) {
    if (v46) {
      *(_DWORD*)(v2 + 68) = 0;
    }
    else {
      v50 = v48 + *(float*)(v2 + 68);
      *(float*)(v2 + 68) = v50;
      if (v50 > 0x1.3333340000000p-2) {
        *(_DWORD*)(v2 + 68) = 0;
        *(_BYTE*)(v2 + 62) = 0;
      }
    }
  }
  else if (v46) {
    v49 = v48 + *(float*)(v2 + 64);
    *(float*)(v2 + 64) = v49;
    if (v49 > 0.5) {
      *(_DWORD*)(v2 + 64) = 0;
      *(_BYTE*)(v2 + 62) = 1;
    }
  }
  else {
    *(_DWORD*)(v2 + 64) = 0;
  }
  v51 = *(_QWORD*)(v47 + 24);
  v52 = *(float32x4_t**)(*(_QWORD*)(v51 + 8) + 240LL);
  if (v52 != nullptr) {
    v53 = v52[3];
  }
  else {
    LODWORD(v54) = 0;
    *((float*)&v54 + 1) = *(float*)(v51 + 544) * 0x1.99999a0000000p-1;
    v53 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v51 + 16) + 560LL),
                    COERCE_AS(float32x4_t, v54));
  }
  v121 = v53;
  LANES128(v55).n128_u64[0] = 0;
  LANES128(v55).n128_u32[2] = 0;
  v56 = (__int64*)GameData_212dc68;
  v57 = *(__int64**)(*(_QWORD*)GameData_212dc68 + 96LL);
  v58 = v57[1];
  if (v58 != 0) {
    v110 = v53;
    v59 = *v57;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v58 + 16), 1u,
                              memory_order_relaxed);
    v60 = std___1___shared_weak_count_lock(v58);
    v61 = std___1___shared_weak_count___release_weak(v58);
    if (v60 == 0) {
      LODWORD(v58) = 0;
      LANES128(v55).n128_u64[0] = 0;
      LANES128(v55).n128_u32[2] = 0;
      goto LABEL_102;
    }
    v55 = (__typeof__(v55)){0};
    if (v59 == 0 || *(_DWORD*)(v59 + 1136) == 0) {
      LODWORD(v58) = 0;
      goto LABEL_100;
    }
    v63 = *(_QWORD*)(v59 + 104);
    if (v63 != 0) {
      v64 = *(_QWORD*)(v59 + 96);
      v65 = *(_QWORD*)(v59 + 104);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v63 + 16), 1u,
                                memory_order_relaxed);
      v66 = std___1___shared_weak_count_lock(v65);
      v61 = std___1___shared_weak_count___release_weak(v63);
      if (v66 != 0 && v64 != 0) {
        v67 = *(_QWORD*)(v64 + 24);
        v68 = *(float32x4_t**)(*(_QWORD*)(v67 + 8) + 240LL);
        if (v68 != nullptr) {
          v55 = v68[3];
        }
        else {
          LODWORD(v70) = 0;
          *((float*)&v70 + 1) = *(float*)(v67 + 544) * 0x1.99999a0000000p-1;
          v61 = *(__n128*)(*(_QWORD*)(v67 + 16) + 560LL);
          v55 = vaddq_f32(v61, COERCE_AS(float32x4_t, v70));
        }
        LANES128(v55).n128_u32[3] = 0;
        goto LABEL_97;
      }
    }
    else {
      v66 = 0;
    }
    if (*(_BYTE*)(v59 + 80) == 1) {
      v55 = *(float32x4_t*)(v59 + 64);
    }
    else {
      LODWORD(v62) = *(_DWORD*)(v59 + 268);
      LANES128(v69).n128_u64[0] = *(_QWORD*)(v59 + 260);
      LANES128(v69).n128_u64[1] = v62;
      v55 = vaddq_f32(*(float32x4_t*)(v59 + 16), v69);
    }
    v61 = v110;
    LANES128(v55).n128_u32[1] = LANES128(v110).n128_u32[1];
    LANES128(v55).n128_u32[3] = 0;
    if (v66 == 0) {
    LABEL_99:
      LODWORD(v58) = 1;
    LABEL_100:
      if (atomic_fetch_add((atomic_ullong* volatile)(v60 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v112 = v55;
        (*(void (**)(__int64, long double))(*(_QWORD*)v60 + 16LL))(
            v60, *(long double*)&v61);
        std___1___shared_weak_count___release_weak(v60);
        v55 = v112;
      }
      goto LABEL_102;
    }
  LABEL_97:
    if (atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v111 = v55;
      (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66);
      v61 = std___1___shared_weak_count___release_weak(v66);
      v55 = v111;
    }
    goto LABEL_99;
  }
LABEL_102:
  if (*(_BYTE*)(v2 + 62) == 1) {
    if ((_DWORD)v58 != 0) {
      v71 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 8) + 24LL) + 24LL);
      v72 = *(unsigned __int8*)(v71 + 336);
      *(_QWORD*)(v71 + 272) = 0;
      if (v72 == 1) {
        *(_QWORD*)(v71 + 288) = LANES128(v55).n128_u64[0];
        *(_QWORD*)(v71 + 304) = LANES128(v55).n128_u64[0];
        v73 = *(_OWORD*)(v71 + 288);
        v74 = *(_OWORD*)(v71 + 304);
        *((_QWORD*)&v73 + 1) = LANES128(v55).n128_u32[2];
        *((_QWORD*)&v74 + 1) = LANES128(v55).n128_u32[2];
        *(_OWORD*)(v71 + 288) = v73;
        *(_OWORD*)(v71 + 304) = v74;
      }
      else {
        LANES128(v55).n128_u32[3] = 0;
        *(_BYTE*)(v71 + 336) = 1;
        *(float32x4_t*)(v71 + 288) = v55;
        *(float32x4_t*)(v71 + 304) = v55;
      }
      *(_DWORD*)(v71 + 320) = 1065353216;
      *(_BYTE*)(v2 + 61) = 1;
    }
    else if (*(_BYTE*)(v2 + 61) == 1) {
      v75 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 8) + 24LL) + 24LL);
      if (*(_BYTE*)(v75 + 336) == 1) {
        *(_BYTE*)(v75 + 336) = 0;
      }
      *(_BYTE*)(v2 + 61) = 0;
    }
  }
  v76 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)(v2 + 8) + 24LL) + 24LL);
  v77 = v76[44];
  v78 = v76[45];
  for (i = v76; v78 != v77; v78 -= 16) {
    v79 = *(_QWORD*)(v78 - 8);
    if (v79 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v79 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v79 + 16LL))(v79);
      std___1___shared_weak_count___release_weak(v79);
    }
  }
  v80 = v76[47];
  v76[45] = v77;
  v76[48] = v80;
  if (*(_BYTE*)(v2 + 62) != 1) {
    goto LABEL_151;
  }
  v81 = *v56;
  LOBYTE(v113[0]) = 1;
  BYTE4(v113[1]) = 1;
  LOBYTE(v113[1]) = 1;
  v120 = v119;
  HIDWORD(v113[0]) = *(_DWORD*)(*(_QWORD*)GameData_212dbc0[0] + 88LL);
  v119[0] = GameData_200a538;
  v119[1] = v2;
  v119[2] = &v121;
  v119[3] = &i;
  EventManager_cbc520(v81, v113, v119);
  if (v120 == v119) {
    v82 = 32;
  }
  else {
    if (v120 == nullptr) {
      goto LABEL_124;
    }
    v82 = 40;
  }
  (*(void (**)(__int64))(*v120 + v82))((__int64)v120);
LABEL_124:
  v83 = *(_QWORD**)(*GameData_212d458[0] + 24);
  v84 = *(_QWORD**)(*GameData_212d458[0] + 32);
  if (v83 != v84) {
    v85 = GameData_212eba8[0];
    do {
      if (*(_DWORD*)(*v83 + 1112LL) != 0) {
        v86 = *(_QWORD*)(*v83 + 24LL);
        v87 = *(_QWORD*)(v86 + 8);
        if (*(_BYTE*)(v87 + 145) == 1) {
          v114 = 0;
          LOBYTE(v113[0]) = 0;
          v88 = i[1];
          LANES128(v126[0]).n128_u32[0] = 1090519040;
          if (v86 == v88) {
            break;
          }
          v89 = *(_QWORD**)(*v85 + 8);
          v90 = *(_QWORD**)(*v85 + 16);
          if (v89 == v90) {
            break;
          }
          while (*v89 != v86) {
            v89 += 2;
            if (v89 == v90) {
              goto LABEL_151;
            }
          }
          if (v89 == v90) {
            break;
          }
          v124 = (__typeof__(v124)){0};
          v123 = (__typeof__(v123)){0};
          v91 = *(float32x4_t**)(v87 + 240);
          v125 = 1065353216;
          v92 = *(float32x4_t**)(v86 + 16);
          LANES128(v122).n128_u64[0] = v86;
          v93 = v92[35];
          *(_QWORD*)&v123 = LANES128(v92[35]).n128_u64[0];
          *(_QWORD*)&v94 = v123;
          *((_QWORD*)&v94 + 1) = LANES128(v93).n128_u32[2];
          v123 = v94;
          if (v91 != nullptr) {
            v95 = v91[3];
          }
          else {
            LODWORD(v96) = 0;
            *((float*)&v96 + 1) = *(float*)(v86 + 544) * 0x1.99999a0000000p-1;
            v95 = vaddq_f32(v93, COERCE_AS(float32x4_t, v96));
          }
          *(_QWORD*)&v124 = LANES128(v95).n128_u64[0];
          *(_QWORD*)&v97 = LANES128(v95).n128_u64[0];
          *((_QWORD*)&v97 + 1) = LANES128(v95).n128_u32[2];
          v98 = *(float*)(v86 + 528);
          v124 = v97;
          if ((game_zview_d33d70(v98) & 1) == 0) {
            break;
          }
          v99 = v83[1];
          if (v99 != 0) {
            v100 = *(_QWORD*)(v2 + 8);
            v101 = *v83;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v99 + 16), 1u,
                                      memory_order_relaxed);
            if (*(_QWORD*)(v99 + 8) == -1) {
              goto LABEL_126;
            }
            v102 = std___1___shared_weak_count_lock(v99);
            v126[0] = vaddq_f32(
                *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v101 + 24) + 16LL) +
                                560LL),
                COERCE_AS(float32x4_t, GameData_1a831c0));
            if (atomic_fetch_add((atomic_ullong* volatile)(v102 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) != 0) {
              if ((*(_BYTE*)(v100 + 186) & 0x40) != 0) {
                goto LABEL_149;
              }
            }
            else {
              v107 = v102;
              (*(void (**)(__int64))(*(_QWORD*)v102 + 16LL))(v102);
              std___1___shared_weak_count___release_weak(v107);
              if ((*(_BYTE*)(v100 + 186) & 0x40) != 0) {
              LABEL_149:
                *(__n128*)&v106 =
                    std___1___shared_weak_count___release_weak(v99);
              LABEL_150:
                GameRoutine_d34180(i, *(_QWORD*)(*v83 + 24LL), v106);
                goto LABEL_127;
              }
            }
            v122 = vaddq_f32(
                *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v100 + 24) + 16LL) +
                                560LL),
                COERCE_AS(float32x4_t, GameData_1a831c0));
            v103 = vsubq_f32(v122, v126[0]);
            LANES128(v103).n128_u32[1] = vmuls_lane_f32(
                4.0, COERCE_AS(float32x2_t, LANES128(v103).n128_u64[0]), 1);
            v104 = vmulq_f32(v103, v103);
            LANES128(v104).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v104, v104, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v104).n128_u64[0])))
                    .n64_u64[0];
            if (LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v104).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v104).n128_u64[0])))
                        .n64_f32[0] >= 0x1.9000000000000p+12 ||
                *(_DWORD*)(v100 + 1296) !=
                    (unsigned int)GameRoutine_f71d40(*GameData_212ebb0[0], v126,
                                                     *(_QWORD*)v40 + 64LL)) {
            LABEL_126:
              std___1___shared_weak_count___release_weak(v99);
            }
            else {
              collision_670c60((void*)(v113), &v122, v126, 0x1000000000001LL);
              v105 = v115;
              *(__n128*)&v106 = std___1___shared_weak_count___release_weak(v99);
              if ((v105 & 1) == 0) {
                goto LABEL_150;
              }
            }
          }
        }
      }
    LABEL_127:
      v83 += 2;
    } while (v83 != v84);
  }
LABEL_151:
  v108 = *(unsigned __int8*)(*(_QWORD*)v40 + 10LL);
  result = HubCharacterNatives_ceca80(
      *(_QWORD*)(*(_QWORD*)(v2 + 8) + 24LL), 0x4000000000000LL,
      *(unsigned __int8*)(*(_QWORD*)v40 + 10LL));
  if (v108 == 1) {
    GameRoutine_d6f4f0(*(_QWORD*)GameData_212dbc0[0]);
    return FastTravelManager_ee24d0(
        *GameData_212ec18[0],
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 8) + 24LL) + 16LL) + 560LL);
  }
  return result;
}

__int64 CharacterControllerPlayer_10c9b80(__int64 result, __int64 a2, char a3,
                                          float a4)
{
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
  _QWORD v19[2];
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;

  v5 = a3 & 1;
  v7 = result;
  if (*(_BYTE*)(result + 56) == 1) {
    v8 = *(_QWORD*)(result + 8);
    LOBYTE(v20) = 0;
    v9 = *(_QWORD*)(*(_QWORD*)(v8 + 24) + 32LL);
    v10 = *(_QWORD*)(v9 + 32);
    v11 = *(_QWORD*)(v9 + 40);
    v26 = 0;
    v19[0] = v10;
    v19[1] = v11;
    if (*(_BYTE*)(v9 + 112) == 1) {
      v12 = *(_QWORD*)(v9 + 56);
      v20 = *(_QWORD*)(v9 + 48);
      v21 = v12;
      v13 = *(_QWORD*)(v9 + 64);
      LOBYTE(v23) = 0;
      v25 = 0;
      v22 = v13;
      if (*(_BYTE*)(v9 + 96) == 1) {
        v14 = *(_QWORD*)(v9 + 88);
        v23 = *(_QWORD*)(v9 + 80);
        v24 = v14;
        v25 = 1;
      }
      v26 = 1;
    }
    v15 = *(_QWORD*)(v9 + 128);
    v16 = *(_QWORD*)(v9 + 136);
    v17 = *(_QWORD*)(v9 + 144);
    v27 = v15;
    v28 = v16;
    v29 = v17;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_22110b8) != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release(&GameData_22110b8);
    }
    v18 = *(_QWORD*)(*(_QWORD*)(v7 + 8) + 24LL);
    v19[0] = GameData_22110ac;
    result = CharacterInputPlayer_da9a80(*(_QWORD*)(v18 + 32), v19);
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
  __n128 v12;
  __int64 v13;
  __int64 result;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  _QWORD* v28;
  char* v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

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
       v11 = std___1___shared_weak_count_lock(v10),
       v12 = std___1___shared_weak_count___release_weak(v9), v11 == 0)) {
  LABEL_14:
    result = 0;
    goto LABEL_15;
  }
  v13 = *(_QWORD*)(v8 + 56);
  if (*(_DWORD*)(v8 + 1112) == 1 && v13 != 0) {
    if (*(_BYTE*)(v13 + 180) != 1) {
      v31 = 0;
      v32 = 0;
      v23 = fw_memory_g_heap_manager_ptr;
      v24 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
      *v24 = v8;
      v28 = v24;
      LODWORD(v27) = 0;
      v29 = (char*)(v24 + 1);
      v30 = v24 + 1;
      GameRoutine_da21c0(GameData_220d630, &v27);
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v23 + v25);
      result = 1;
      goto LABEL_45;
    }
    if (game_GameModeData_instance_ != 0) {
      v17 = *(_QWORD*)(game_GameModeData_instance_ + 24);
      if (v17 != 0) {
        v18 = GameData_21f3cc8;
        *(_DWORD*)(GameData_21f3cc8 + 8) = 2;
        *(_QWORD*)(v18 + 16) = v17;
        if ((*(_BYTE*)(GameData_21f3d10 + 11) & 1) == 0) {
          *(_BYTE*)(GameData_21f3d10 + 11) = 1;
          v27 = 0;
          v28 = nullptr;
          GameRoutine_efbb60(GameData_21f3d08, &v27, 0, *(long double*)&v12);
          if (game_script_hub_talk_g_select_menu != 0) {
            *(_DWORD*)(game_script_hub_talk_g_select_menu + 152) = 12;
          }
        }
        if (game_hub_ProcHubSeqView_instance_ != 0) {
          *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 152) = 13;
        }
        *(_DWORD*)(v18 + 8) = 9;
      }
    }
    *(struct PseudoSret*)(&v27) = GameRoutine_e1b4d0();
    if ((v27 & 1) != 0) {
      v19 = v29;
    }
    else {
      v19 = (char*)&v27 + 1;
    }
    if ((v27 & 1) != 0) {
      v20 = (unsigned __int64)v28;
    }
    else {
      v20 = (unsigned __int64)(unsigned __int8)v27 >> 1;
    }
    *(struct PseudoSret*)(&v33) = GameRoutine_d57000(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v6 + 8) + 24LL) + 48LL), v19, v20,
        "Loc_C_Center", 12);
    v21 = v34;
    if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
      v12 = std___1___shared_weak_count___release_weak(v21);
    }
    if ((v27 & 1) != 0 && v29 != nullptr) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v22);
    }
  }
  result = 0;
LABEL_45:
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v26 = result;
    (*(void (**)(__int64, long double))(*(_QWORD*)v11 + 16LL))(
        v11, *(long double*)&v12);
    std___1___shared_weak_count___release_weak(v11);
    result = v26;
  }
LABEL_15:
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v16 = result;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
    return v16;
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
