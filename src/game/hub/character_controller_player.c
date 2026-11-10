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

#pragma GCC visibility pop
