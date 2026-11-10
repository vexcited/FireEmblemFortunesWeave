#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 BattleSide_Destructor(_QWORD);
__int64 GameRoutine_18c51a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_6cb490(_QWORD);
__int64 GameRoutine_961420(_QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_map_BattleArea_vtable[])();
extern __int64 (*game_map_BattleInfo_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitAction_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitBlazeOn_vtable[])();
extern __int64 GameData_21cd100;
extern __int64 GameData_21d1e38;
extern __int64 GameData_21ed098;
extern __int64 GameData_22400f8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_map_UnitFlags_instance_;
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212d258[2];
struct PseudoSret GameRoutine_81d430(_QWORD);
__int64 ProcUnitBlazeOn_Destructor_770db0(__int64 a1);
__int64 ProcUnitBlazeOn_DeletingDestructor_770eb0(__int64 a1);
void ProcUnitBlazeOn_Unknown20();
__int64 ProcUnitBlazeOn_Unknown24(_QWORD* a1);
__int64 ProcUnitBlazeOn_7714d0(_QWORD* a1);
__int64 ProcUnitBlazeOn_Unknown26(__int64 a1);
__int64 ProcUnitBlazeOn_Unknown27(__int64 a1);
__int64 BattleArea_8b9d00(_QWORD);
__int64 BattleArea_8bc350(_QWORD);
__int64 BattleInfo_790460(_QWORD, _QWORD);
__int64 CombatHUDWindow_183e450(_QWORD);
__int64 GameRoutine_1090da0(_QWORD);
__int64 GameRoutine_10d4da0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_10ea6e0(_QWORD, _QWORD);
__int64 GameRoutine_790ba0(_QWORD);
__int64 GameRoutine_8b9f80(_QWORD, _QWORD);
__int64 GameRoutine_8bbc40(_QWORD);
__int64 GameRoutine_a867a0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1f96c98[])();
__int64 game_map_anonymous_ProcUnitBlazeOn_TryCombat_closure_Invoke(__int64 a1);
__int64
game_map_anonymous_ProcUnitBlazeOn_TryCombat_closure0_Invoke(__int64 a1,
                                                             __int64* a2);
__int64 ProcUnitBlazeOn_771bd0(__int64 a1);
__int64
game_map_anonymous_ProcUnitBlazeOn_TryCombat_closure1_Invoke(__int64 a1);

__int64 ProcUnitBlazeOn_Destructor_770db0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;

  *(_QWORD*)a1 = game_map_anonymous_ProcUnitBlazeOn_vtable;
  *(_QWORD*)(a1 + 160) = game_map_BattleInfo_vtable;
  *(_QWORD*)(a1 + 11456) = game_map_BattleArea_vtable;
  v2 = *(_QWORD*)(a1 + 11464);
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    *(_QWORD*)(a1 + 11464) = 0;
  }
  *(_QWORD*)(a1 + 168) = GameData_212d258[0] + 2;
  BattleSide_Destructor(a1 + 2456);
  BattleSide_Destructor(a1 + 1696);
  BattleSide_Destructor(a1 + 936);
  BattleSide_Destructor(a1 + 176);
  *(_QWORD*)a1 = game_map_anonymous_ProcUnitAction_vtable;
  v3 = GameData_21cd100;
  v4 = *(_DWORD*)(GameData_21cd100 + 16) - 1;
  *(_DWORD*)(GameData_21cd100 + 16) = v4;
  if (v4 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v3 + 8) + 8LL))(v3 + 8);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcUnitBlazeOn_DeletingDestructor_770eb0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;

  *(_QWORD*)a1 = game_map_anonymous_ProcUnitBlazeOn_vtable;
  *(_QWORD*)(a1 + 160) = game_map_BattleInfo_vtable;
  *(_QWORD*)(a1 + 11456) = game_map_BattleArea_vtable;
  v2 = *(_QWORD*)(a1 + 11464);
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    *(_QWORD*)(a1 + 11464) = 0;
  }
  *(_QWORD*)(a1 + 168) = GameData_212d258[0] + 2;
  BattleSide_Destructor(a1 + 2456);
  BattleSide_Destructor(a1 + 1696);
  BattleSide_Destructor(a1 + 936);
  BattleSide_Destructor(a1 + 176);
  *(_QWORD*)a1 = game_map_anonymous_ProcUnitAction_vtable;
  v3 = GameData_21cd100;
  v4 = *(_DWORD*)(GameData_21cd100 + 16) - 1;
  *(_DWORD*)(GameData_21cd100 + 16) = v4;
  if (v4 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v3 + 8) + 8LL))(v3 + 8);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, a1);
}

void ProcUnitBlazeOn_Unknown20()
{
  __int64 v0;

  v0 = GameData_21d1e38;
  if (GameData_21d1e38 != 0) {
    *(_QWORD*)(GameData_21d1e38 + 152) = 0;
    *(_BYTE*)(v0 + 289) = 1;
  }
}

__int64 ProcUnitBlazeOn_Unknown24(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD v6[2];

  result = (*(__int64 (**)(_QWORD*))(*a1 + 144LL))(a1);
  if (result != 0) {
    v3 = a1[19];
    v6[0] = result;
    result = GameRoutine_961420(a1, v6, v3);
  }
  v4 = a1[19];
  if (v4 != 0) {
    v5 = GameData_21ed098;
    if (GameData_21ed098 != 0) {
      *(struct PseudoSret*)(v6) = GameRoutine_81d430(v4);
      return GameRoutine_18c51a0(v5, v6, v4, 0);
    }
  }
  return result;
}

__int64 ProcUnitBlazeOn_7714d0(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;

  result = (*(__int64 (**)(_QWORD*))(*a1 + 152LL))(a1);
  if (result != 0) {
    v3 = a1[19];
    v4 = result;
    return GameRoutine_961420(a1, &v4, v3);
  }
  return result;
}

__int64 ProcUnitBlazeOn_Unknown26(__int64 a1)
{
  __int64 result;
  int v3;
  int v4;
  float v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  result = GameRoutine_6cb490(*(_QWORD*)(a1 + 152));
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v4 = 2)
           : (v4 = 3),
       (v4 & v3) != 0)) {
    v5 = *(float*)(a1 + 144);
    *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x60;
    if (v5 < 15.0) {
      v5 = 15.0;
    }
    *(float*)(a1 + 144) = v5;
  }
  if (GameData_22400f8 != 0) {
    v6 = *(_QWORD*)(a1 + 152);
    if (v6 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
        (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
      v7 = *(_QWORD*)(v6 + 440);
      if (v7 != 0 && *(unsigned __int8*)(v7 + 16) <= 8u &&
          game_map_UnitFlags_instance_ != 0) {
        v8 = *(unsigned __int8*)(v6 + 2088);
        if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v8) & 1) != 0) {
          *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v8) |= 2u;
        }
      }
    }
  }
  return result;
}

__int64 ProcUnitBlazeOn_Unknown27(__int64 a1)
{
  __int64* v2;
  __int64 result;
  __int64 v4;

  v2 = GameData_212cfd0[0];
  if (*(_BYTE*)(*GameData_212cfd0[0] + 8) != 0) {
    result = game_UnitPool_Get(*GameData_212cfd0[0] + 8);
  }
  else {
    result = 0;
  }
  if (result == *(_QWORD*)(a1 + 152)) {
    *(_QWORD*)(*v2 + 12672) |= 0x2000000000000uLL;
  }
  v4 = GameData_21d1e38;
  if (GameData_21d1e38 != 0) {
    *(_QWORD*)(GameData_21d1e38 + 152) = 0;
    *(_BYTE*)(v4 + 289) = 1;
  }
  return result;
}

__int64 game_map_anonymous_ProcUnitBlazeOn_TryCombat_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 8);
  BattleInfo_790460(v1 + 160, *(_QWORD*)(v1 + 152));
  *(_DWORD*)(v1 + 11436) |= 0x6000u;
  GameRoutine_790ba0(v1 + 160);
  v2 = *(_QWORD*)(v1 + 11464);
  *(_BYTE*)(v1 + 11433) |= 1u;
  GameRoutine_8b9f80(v2, v1 + 160);
  return GameRoutine_8bbc40(v1 + 11456);
}

__int64

game_map_anonymous_ProcUnitBlazeOn_TryCombat_closure0_Invoke(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  bool v12;
  int v13;
  __int64 result;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v17;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 792, 16, 0);
  v5 = v4 + 3;
  v6 = v4;
  v4[1] = 0;
  v4[2] = 0;
  *v4 = GameData_1f96c98;
  memset(v4 + 3, 0, 728, v7, v8, v9);
  v6[32] = 0;
  v6[33] = 0;
  v6[44] = 0;
  v6[45] = 0;
  v6[56] = 0;
  v6[57] = 0;
  *(_DWORD*)((char*)v6 + 367) = 0;
  v6[22] = 0;
  v6[23] = 0;
  v6[24] = 0;
  v6[25] = 0;
  *((_WORD*)v6 + 104) = 0;
  v6[35] = 0;
  v6[36] = 0;
  *((_BYTE*)v6 + 296) = 0;
  v6[30] = 0;
  v6[31] = 0;
  *((_DWORD*)v6 + 82) = -1;
  v6[42] = 0;
  v6[43] = 0;
  v6[47] = 0;
  v6[48] = 0;
  v6[18] = 0x43FA000043FA0000LL;
  v6[19] = 0xC3FA0000C3FA0000LL;
  v6[20] = 0x43FA000043FA0000LL;
  v6[21] = 0xC3FA0000C3FA0000LL;
  v6[29] = 0;
  *(_DWORD*)((char*)v6 + 463) = 0;
  *((_BYTE*)v6 + 392) = 0;
  *((_DWORD*)v6 + 106) = -1;
  v6[54] = 0;
  v6[55] = 0;
  *((_BYTE*)v6 + 488) = 0;
  *(_DWORD*)((char*)v6 + 271) = 0;
  v6[59] = 0;
  v6[60] = 0;
  *((_DWORD*)v6 + 130) = -1;
  *(_DWORD*)((char*)v6 + 559) = 0;
  v6[69] = 0;
  v6[68] = 0;
  v6[67] = 0;
  v6[66] = 0;
  *((_BYTE*)v6 + 584) = 0;
  v6[72] = 0;
  v6[71] = 0;
  *((_DWORD*)v6 + 154) = -1;
  v6[78] = 0;
  v6[79] = 0;
  v6[80] = 0;
  v6[81] = 0;
  v6[82] = 0;
  v6[83] = 0;
  v6[84] = 0;
  v6[85] = 0;
  v6[86] = 0;
  v6[87] = 0;
  *(_QWORD*)((char*)v6 + 300) = 0x6300000063LL;
  *(_QWORD*)((char*)v6 + 396) = 0x6300000063LL;
  *(_QWORD*)((char*)v6 + 492) = 0x6300000063LL;
  v6[88] = 0;
  v6[89] = 0;
  v6[90] = 0;
  v6[91] = 0;
  v6[92] = 0;
  *((_DWORD*)v6 + 186) = 0;
  v6[98] = 0;
  v6[97] = 0;
  v6[96] = 0;
  v6[95] = 0;
  v6[94] = 0;
  v16 = v5;
  v17 = v6;
  v6[40] = -4294967197LL;
  v6[52] = -4294967197LL;
  v6[64] = -4294967197LL;
  *(_QWORD*)((char*)v6 + 588) = 0x6300000063LL;
  v6[76] = -4294967197LL;
  GameRoutine_10ea6e0(v5, v2 + 160);
  GameRoutine_1090da0(v5);
  v10 = GameData_21d1e38;
  if (GameData_21d1e38 != 0) {
    v11 = *(_QWORD*)(GameData_21d1e38 + 152) == 0;
    *(_BYTE*)(GameData_21d1e38 + 289) = v11;
    v12 = (*(_DWORD*)(v2 + 11436) & 0x4000) != 0;
    if (v11) {
      v12 = true;
    }
    *(_BYTE*)(v10 + 289) = v12;
    v13 = *(_DWORD*)(v2 + 11436);
    *(_QWORD*)(v10 + 152) = v2 + 160;
    *(_BYTE*)(v10 + 290) = (v13 & 0x800000) != 0;
    CombatHUDWindow_183e450(v10);
  }
  result = GameRoutine_10d4da0(v3, &v16, 0);
  v15 = v17;
  if (v17 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v17 + 1),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(_QWORD*))(*v15 + 16LL))(v15);
    return std___1___shared_weak_count___release_weak(v15);
  }
  return result;
}

__int64 ProcUnitBlazeOn_771bd0(__int64 a1)
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
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 result;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;

  v3 = a1 + 24;
  v50 = v1;
  v51 = v2;
  v4 = *(_QWORD*)(v3 + 736);
  v5 = v3;
  v6 = fw_memory_g_heap_manager_ptr;
  if (v4 != 0) {
    v7 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(v3 + 744) = v4;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v4);
  }
  v9 = *(_QWORD*)(v5 + 728);
  *(_QWORD*)(v5 + 728) = 0;
  if (v9 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v10, v9);
  }
  if ((*(_BYTE*)(v5 + 696) & 1) != 0) {
    v11 = *(_QWORD*)(v5 + 712);
    if (v11 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v12, v11);
    }
  }
  v13 = *(_QWORD*)(v5 + 672);
  if (v13 != 0) {
    v14 = *(_QWORD*)v6;
    *(_QWORD*)(v5 + 680) = v13;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(v14 + v15, v13);
  }
  v16 = *(_QWORD*)(v5 + 648);
  if (v16 != 0) {
    v17 = *(_QWORD*)v6;
    *(_QWORD*)(v5 + 656) = v16;
    v18 = 128;
    if (*(_QWORD*)(v17 + 200) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(v17 + v18, v16);
  }
  v19 = *(_QWORD*)(v5 + 624);
  if (v19 != 0) {
    v20 = *(_QWORD*)v6;
    *(_QWORD*)(v5 + 632) = v19;
    v21 = 128;
    if (*(_QWORD*)(v20 + 200) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(v20 + v21, v19);
  }
  v22 = *(_QWORD*)(v5 + 600);
  if (v22 != 0) {
    v23 = *(_QWORD*)v6;
    *(_QWORD*)(v5 + 608) = v22;
    v24 = 128;
    if (*(_QWORD*)(v23 + 200) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(v23 + v24, v22);
  }
  if (*(_BYTE*)(v5 + 536) == 1) {
    if (*(_QWORD*)(v5 + 528) == 0) {
      goto LABEL_37;
    }
    v49 = *(_QWORD*)(v5 + 528);
    GameRoutine_a867a0(&v49);
    *(_QWORD*)(v5 + 528) = 0;
    *(_BYTE*)(v5 + 536) = 0;
  }
  v22 = *(_QWORD*)(v5 + 552);
  if (v22 != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v25, v22);
    *(_QWORD*)(v5 + 552) = 0;
  }
LABEL_37:
  if (*(_BYTE*)(v5 + 440) == 1) {
    if (*(_QWORD*)(v5 + 432) == 0) {
      goto LABEL_44;
    }
    v49 = *(_QWORD*)(v5 + 432);
    GameRoutine_a867a0(&v49);
    *(_QWORD*)(v5 + 432) = 0;
    *(_BYTE*)(v5 + 440) = 0;
  }
  v22 = *(_QWORD*)(v5 + 456);
  if (v22 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v26, v22);
    *(_QWORD*)(v5 + 456) = 0;
  }
LABEL_44:
  if (*(_BYTE*)(v5 + 344) == 1) {
    if (*(_QWORD*)(v5 + 336) == 0) {
      goto LABEL_51;
    }
    v49 = *(_QWORD*)(v5 + 336);
    GameRoutine_a867a0(&v49);
    *(_QWORD*)(v5 + 336) = 0;
    *(_BYTE*)(v5 + 344) = 0;
  }
  v22 = *(_QWORD*)(v5 + 360);
  if (v22 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v27, v22);
    *(_QWORD*)(v5 + 360) = 0;
  }
LABEL_51:
  if (*(_BYTE*)(v5 + 248) == 1) {
    if (*(_QWORD*)(v5 + 240) == 0) {
      goto LABEL_58;
    }
    v49 = *(_QWORD*)(v5 + 240);
    GameRoutine_a867a0(&v49);
    *(_QWORD*)(v5 + 240) = 0;
    *(_BYTE*)(v5 + 248) = 0;
  }
  v22 = *(_QWORD*)(v5 + 264);
  if (v22 != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v28, v22);
    *(_QWORD*)(v5 + 264) = 0;
  }
LABEL_58:
  v29 = *(_QWORD*)(v5 + 80);
  if (v29 == 0) {
    goto LABEL_73;
  }
  v30 = *(_QWORD*)(v5 + 88);
  if (v29 == v30) {
  LABEL_70:
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v35, v29);
    goto LABEL_73;
  }
  do {
    v31 = *(_QWORD**)(v30 - 16);
    if ((_QWORD*)(v30 - 48) == v31) {
      v32 = 32;
    }
    else {
      if (v31 == nullptr) {
        goto LABEL_67;
      }
      v32 = 40;
    }
    (*(void (**)(void))(*v31 + v32))();
  LABEL_67:
    v33 = *(_QWORD*)(v30 - 64);
    if (v33 != 0) {
      std___1___shared_weak_count___release_weak(v33);
    }
    v30 -= 80;
  } while (v30 != v29);
  v34 = *(_QWORD*)(v5 + 80);
  *(_QWORD*)(v5 + 88) = v29;
  v29 = v34;
  if (v34 != 0) {
    goto LABEL_70;
  }
LABEL_73:
  result = v5;
  v49 = v51;
  v37 = *(_QWORD*)(v5 + 32);
  v38 = fw_memory_g_heap_manager_ptr;
  if (v37 != 0) {
    v39 = *(_QWORD*)(v5 + 40);
    if (v37 == v39) {
      goto LABEL_83;
    }
    do {
      v22 = *(_QWORD*)(v39 - 72);
      if (v22 != 0) {
        *(_QWORD*)(v39 - 64) = v22;
        if (*(_QWORD*)(*(_QWORD*)v38 + 200LL) != 0) {
          v40 = 128;
        }
        else {
          v40 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v38 + v40, v22);
      }
      v39 -= 144;
    } while (v39 != v37);
    v41 = *(_QWORD*)(v5 + 32);
    *(_QWORD*)(v5 + 40) = v37;
    v37 = v41;
    if (v41 != 0) {
    LABEL_83:
      v42 = 128;
      if (*(_QWORD*)(*(_QWORD*)v38 + 200LL) == 0) {
        v42 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v38 + v42, v37);
    }
  }
  v43 = *(_QWORD*)v5;
  if (*(_QWORD*)v5 == 0) {
    return result;
  }
  v44 = *(_QWORD*)(v5 + 8);
  if (v43 == v44) {
  LABEL_98:
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)v38 + 200LL) == 0) {
      v48 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v38 + v48, v43);
  }
  while (2) {
    v45 = *(_QWORD**)(v44 - 16);
    if ((_QWORD*)(v44 - 48) == v45) {
      v46 = 32;
    LABEL_94:
      (*(void (**)(_QWORD*, __int64))(*v45 + v46))(v45, v22);
    }
    else if (v45 != nullptr) {
      v46 = 40;
      goto LABEL_94;
    }
    result = *(_QWORD*)(v44 - 64);
    if (result != 0) {
      result = std___1___shared_weak_count___release_weak(result);
    }
    v44 -= 80;
    if (v44 != v43) {
      continue;
    }
    break;
  }
  v47 = *(_QWORD*)v5;
  *(_QWORD*)(v5 + 8) = v43;
  v43 = v47;
  if (v47 != 0) {
    goto LABEL_98;
  }
  return result;
}

__int64 game_map_anonymous_ProcUnitBlazeOn_TryCombat_closure1_Invoke(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  BattleArea_8bc350(v1 + 11456);
  return BattleArea_8b9d00(v1 + 11456);
}

#pragma GCC visibility pop
