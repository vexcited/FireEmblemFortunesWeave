#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BattleSide_Destructor(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_849e70(__int64 result);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_map_BattleArea_vtable[])();
extern __int64 (*game_map_BattleInfo_vtable[])();
extern __int64 (*game_map_anonymous_ProcMapSeqPhase_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212d238[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64* GameData_212d258[2];
extern __int64* GameData_212da50[3];
__int64 ProcMapSeqPhase_Destructor(__int64 a1);
__int64 ProcMapSeqPhase_DeletingDestructor(__int64 a1);
__int64 BattleInfo_790460(_QWORD, _QWORD);
__int64 Cursor_730e40(_QWORD, _QWORD);
__int64 GameRoutine_122ece0(_QWORD);
__int64 GameRoutine_122f000(_QWORD);
__int64 GameRoutine_658d60(_QWORD);
__int64 GameRoutine_6dcf40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7536a0(_QWORD);
__int64 GameRoutine_758d40(_QWORD);
__int64 GameRoutine_75d120(_QWORD, _QWORD);
__int64 GameRoutine_76a2e0(void);
__int64 GameRoutine_790ba0(_QWORD);
__int64 GameRoutine_7a2a60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_81a990(__int64);
__int64 GameRoutine_84aec0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9107e0(_QWORD, _QWORD);
__int64 GameRoutine_919f50(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_961c00(_QWORD, _QWORD, _QWORD);
__int64 Image_72a260(_QWORD);
__int64 Image_72b4a0(_QWORD);
__int64 Image_72b6c0(_QWORD);
__int64 MapDrawer_8089c0(_QWORD, _QWORD, _QWORD);
__int64 Mind_743fc0(_QWORD, _QWORD);
__int64 ProcList_9bd480(_QWORD);
__int64 ProcMapSeqPhase_849860_alt1(_QWORD) __asm__("ProcMapSeqPhase_849860");
__int64 ProcMapSeqPhase_849ba0_alt1(_QWORD) __asm__("ProcMapSeqPhase_849ba0");
__int64 ProcMapSeqPhase_849e70_alt1(_QWORD) __asm__("ProcMapSeqPhase_849e70");
__int64 ProcMapSeqPhase_849fe0_alt1(_QWORD,
                                    _QWORD) __asm__("ProcMapSeqPhase_849fe0");
__int64 Situation_765b20(_QWORD);
__int64 Trick_7cb0c0(_QWORD);
__int64 _ZN4game4Unit14RepairBarrierEPKS0_iib(_QWORD, _QWORD, _QWORD, _QWORD,
                                              _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_ProcList_Call_9bcfa0(_QWORD, _QWORD);
__int64 game_UnitSkillList_GetMaxValue(_QWORD, _QWORD);
__int64 game_UnitSkillList_IsVanish(_QWORD);
__int64 game_Unit_GetMorphSkill(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1f98b78[])();
extern __int64 (*GameData_1fa0580[])();
extern __int64 (*GameData_1fa0780[])();
extern __int64 (*GameData_1fa0a80[])();
extern __int64 (*GameData_1fa0b10[])();
extern __int64 (*GameData_1fa0b90[])();
extern __int64 (*GameData_1fa0c10[])();
extern __int64 (*GameData_1fa0c90[])();
extern __int64 (*GameData_1fa0d10[])();
extern __int64 (*GameData_1fa0d90[])();
extern __int64 (*GameData_1fa0e10[])();
extern __int64 GameData_21c99b0;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd130;
extern __int64 GameData_21cd158;
extern __int64 GameData_21d1f70;
extern __int64 GameData_22400f8;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212cfc8[9];
extern __int64* GameData_212cfd0[8];
void GameRoutine_7c0e80(__int64, __int64, char);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_6c1f60(void);
void __attribute__((noreturn)) GameRoutine_6e3e20(_QWORD);
void __attribute__((noreturn)) GameRoutine_84a1c0(_QWORD);
void __attribute__((noreturn)) GameRoutine_84a6f0(void);
__int64 ProcMapSeqPhase_847c20();
__int64 ProcMapSeqPhase_848120(__int64 a1);
__int64 ProcMapSeqPhase_848400(__int64 a1);
void ProcMapSeqPhase_848590(__int64 a1);
__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TryDamage(__int64 result);
__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TryPollution(
    __int64 result, __int64 a2, __int64 a3);
__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TryBurstHeal(
    __int64 result, __int64 a2, __int64 a3);
__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TryWaste(__int64 result);
__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TryHeal(__int64 result,
                                                              __int64 a2,
                                                              __int64 a3);
__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TryGive(__int64 result);
__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TrySkill(__int64 result);
__int64 ProcMapSeqPhase_848ec0(__int64 a1);
__int64 ProcMapSeqPhase_849200(__int64 result);
__int64 ProcMapSeqPhase_849290(__int64 result);
__int64 ProcMapSeqPhase_849360(__int64 result);
__int64 ProcMapSeqPhase_849400(__int64 result);
__int64 ProcMapSeqPhase_849600(__int64 a1, char a2);
__int64 ProcMapSeqPhase_849860(__int64* a1);
__int64* ProcMapSeqPhase_849ba0(_QWORD* a1, __int64 a2);
__int64 ProcMapSeqPhase_849e70(__int64 result);
__int64* ProcMapSeqPhase_849fe0(__int64* result, _QWORD* a2);
__int64* ProcMapSeqPhase_84a590(__int64* result, _QWORD* a2);
_QWORD* ProcMapSeqPhase_84aaa0(_QWORD* result, __int64* a2);
__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TryDamage_closure_Invoke(
    __int64 a1, __int64* a2);
__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TryDiff_closure_Invoke(
    __int64 a1);
bool game_map_anonymous_ProcMapSeqPhase_TargetData_TryDiff_closure1_Invoke(
    __int64 a1);
__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TryDiff_closure2_Invoke(
    __int64 a1);
__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_DirtyTrick_closure_Invoke(
    __int64 a1, _DWORD* a2, _DWORD* a3);
__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TryWaste_closure_Invoke(
    __int64 a1, _QWORD* a2);
__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TryWaste_closure0_Invoke(
    __int64 a1, _QWORD* a2);
__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TryGive_closure_Invoke(
    __int64 a1, __int64* a2);
__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TrySkill_closure_Invoke(
    __int64 a1, _QWORD* a2);
__int64 GameRoutine_76c260(_QWORD, _QWORD);
__int64 Unit_6c8a80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Unit_6c9ef0(_QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_SetPollution(_QWORD, _QWORD);
extern __int64 (*GameData_1fa09f0[])();
extern __int64 game_map_UnitFlags_instance_;
extern __int64* GameData_21309c8[5];
__int64
game_map_anonymous_ProcMapSeqPhase_TargetData_TryPollution_closure_Invoke(
    __int64 a1, int* a2);
__int64
game_map_anonymous_ProcMapSeqPhase_TargetData_TryBurstHeal_closure_Invoke(
    __int64 a1, _DWORD* a2);

__int64 ProcMapSeqPhase_847c20()
{
  __int64 v0;
  __int64** v1;
  __int64** v2;
  __int64* v3;
  __int64 v4;
  char v5;
  char v6;
  __int64 v7;
  __int64 v8;
  _QWORD v10[7];
  __int16 v11;

  memset(v10, 0, sizeof(v10));
  if ((*(_BYTE*)(*GameData_212ce90[0] + 21) & 2) != 0) {
    GameRoutine_122ece0(v10);
  }
  v0 = *(_QWORD*)(GameData_21cd158 + 16);
  v1 = *(__int64***)(v0 + 32);
  v2 = *(__int64***)(v0 + 40);
  if (v1 == v2) {
    v5 = 0;
  }
  else {
    do {
      v3 = *v1;
      if ((*(int (**)(__int64*))(**v1 + 248))(*v1) > 0 ||
          (v4 = *v3, v11 = 64,
           ((*(__int64 (**)(__int64*, __int16*))(v4 + 784))(v3, &v11) & 1) !=
               0) &&
              (*(int (**)(__int64*))(*v3 + 256))(v3) > 0) {
        v5 = 1;
        goto LABEL_12;
      }
      ++v1;
    } while (v1 != v2);
    v5 = 0;
  LABEL_12:
    v0 = *(_QWORD*)(GameData_21cd158 + 16);
  }
  v6 = Trick_7cb0c0(v0);
  v7 = *GameData_212ce98[0];
  v8 = *(_QWORD*)(*GameData_212ce98[0] + 96);
  Image_72b4a0(v8);
  Image_72b6c0(v8);
  Image_72a260(*(_QWORD*)(v7 + 152));
  if (((v5 & 1) != 0 || (v6 & 1) != 0) && GameData_22400f8 != 0 &&
      *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
      (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
    *(_DWORD*)(GameData_22400f8 + 12) |= 0x402u;
  }
  return GameRoutine_122f000(v10);
}

__int64 ProcMapSeqPhase_848120(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  int v15;
  char* v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  _QWORD v26[3];
  __int64 v27;

  result = ProcMapSeqPhase_849860_alt1(v26);
  v3 = v26[0];
  v4 = (__int64*)v26[1];
  if (v26[0] != v26[1]) {
    v5 = (__int64*)v26[0];
    v6 = GameData_212c880[0];
    while (1) {
      v7 = *v5;
      if ((*(_DWORD*)(*v5 + 1872) & 0xFFF) != 0) {
        break;
      }
    LABEL_3:
      if (++v5 == v4) {
        goto LABEL_37;
      }
    }
    v8 = *(_QWORD*)(v7 + 600);
    v9 = *(_QWORD*)(v7 + 608) - v8;
    if ((int)(v9 >> 2) >= 1) {
      if (((v9 >> 2) & 0x7FFFFFFF) - 1 >= 7) {
        v13 = (char*)(v8 + 18);
        v14 = 0;
        v11 = 255;
        do {
          v14 -= 8;
          if (v11 >= *(v13 - 16)) {
            v11 = *(v13 - 16);
          }
          if (v11 >= *(v13 - 12)) {
            v11 = *(v13 - 12);
          }
          if (v11 >= *(v13 - 8)) {
            v11 = *(v13 - 8);
          }
          if (v11 >= *(v13 - 4)) {
            v11 = *(v13 - 4);
          }
          if (v11 >= *v13) {
            v11 = *v13;
          }
          if (v11 >= v13[4]) {
            v11 = v13[4];
          }
          if (v11 >= v13[8]) {
            v11 = v13[8];
          }
          v15 = v13[12];
          v13 += 32;
          if (v11 >= v15) {
            v11 = v15;
          }
        } while (-8LL * ((v9 >> 5) & 0xFFFFFFF) != v14);
        v10 = -v14;
        v12 = (v9 >> 2) & 7;
        if (v12 == 0) {
          goto LABEL_33;
        }
      }
      else {
        v10 = 0;
        v11 = 255;
        v12 = (v9 >> 2) & 7;
        if (v12 == 0) {
          goto LABEL_33;
        }
      }
      v16 = (char*)(v8 + 4 * v10 + 2);
      do {
        v18 = *v16;
        v16 += 4;
        v17 = v18;
        if (v11 >= v18) {
          v11 = v17;
        }
        --v12;
      } while (v12 != 0);
      goto LABEL_33;
    }
    v11 = 0;
  LABEL_33:
    if (v11 <
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v6 + 64) +
                                       8LL * (*(_DWORD*)(*v5 + 1872) & 0xFFF)) +
                            273LL)) {
      v19 = *(unsigned __int8*)(v7 + 805);
      v27 = 0x1000000000LL;
      result = game_UnitSkillList_GetMaxValue(v7 + 1744, &v27);
      if ((int)result > v19) {
        *(_BYTE*)(v7 + 805) = v19 + 1;
        if ((_DWORD)result == (unsigned __int8)(v19 + 1)) {
          result = ProcMapSeqPhase_849ba0_alt1(a1 + 152);
        }
      }
    }
    goto LABEL_3;
  }
LABEL_37:
  if (v3 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v3);
  }
  if (0x2E8BA2E8BA2E8BA3LL *
          ((__int64)(*(_QWORD*)(a1 + 160) - *(_QWORD*)(a1 + 152)) >> 4) >
      (unsigned __int64)*(int*)(a1 + 176)) {
    v21 = *(_QWORD*)(a1 + 96);
    v22 = *(_QWORD*)(a1 + 104);
    v23 = ((v22 - v21) << 6) - 1;
    if (v22 == v21) {
      v23 = 0;
    }
    v24 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
    if (v23 == v24) {
      result = GameRoutine_658d60(a1 + 88);
      v21 = *(_QWORD*)(a1 + 96);
      v24 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
    }
    *(_QWORD*)(*(_QWORD*)(v21 + 8 * (v24 >> 9)) + 8 * (v24 & 0x1FF)) =
        *(_QWORD*)(a1 + 16);
    ++*(_QWORD*)(a1 + 128);
    v25 = *(_QWORD*)(a1 + 8);
    if (v25 != 0) {
      while (1) {
        if (*(_BYTE*)v25 == 2) {
          if (*(_DWORD*)(v25 + 32) == 6) {
            *(_QWORD*)(a1 + 16) = v25;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            return result;
          }
        }
        else if (*(_BYTE*)v25 == 0) {
          return result;
        }
        v25 += 64;
      }
    }
  }
  return result;
}

__int64 ProcMapSeqPhase_848400(__int64 a1)
{
  __int64 result;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  _QWORD v12[3];

  result = ProcMapSeqPhase_849860_alt1(v12);
  v3 = v12[0];
  v4 = (_QWORD*)v12[1];
  if (v12[0] != v12[1]) {
    v5 = (_QWORD*)v12[0];
    do {
      result = game_UnitSkillList_IsVanish(*v5 + 1744LL);
      if ((result & 1) != 0) {
        result = ProcMapSeqPhase_849ba0_alt1(a1 + 152);
      }
      ++v5;
    } while (v5 != v4);
  }
  if (v3 != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v3);
  }
  if (0x2E8BA2E8BA2E8BA3LL *
          ((__int64)(*(_QWORD*)(a1 + 160) - *(_QWORD*)(a1 + 152)) >> 4) >
      (unsigned __int64)*(int*)(a1 + 176)) {
    v7 = *(_QWORD*)(a1 + 96);
    v8 = *(_QWORD*)(a1 + 104);
    v9 = ((v8 - v7) << 6) - 1;
    if (v8 == v7) {
      v9 = 0;
    }
    v10 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
    if (v9 == v10) {
      result = GameRoutine_658d60(a1 + 88);
      v7 = *(_QWORD*)(a1 + 96);
      v10 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
    }
    *(_QWORD*)(*(_QWORD*)(v7 + 8 * (v10 >> 9)) + 8 * (v10 & 0x1FF)) =
        *(_QWORD*)(a1 + 16);
    ++*(_QWORD*)(a1 + 128);
    v11 = *(_QWORD*)(a1 + 8);
    if (v11 != 0) {
      while (1) {
        if (*(_BYTE*)v11 == 2) {
          if (*(_DWORD*)(v11 + 32) == 5) {
            *(_QWORD*)(a1 + 16) = v11;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            return result;
          }
        }
        else if (*(_BYTE*)v11 == 0) {
          return result;
        }
        v11 += 64;
      }
    }
  }
  return result;
}

void ProcMapSeqPhase_848590(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  char v6;

  v1 = (__int64*)(*(_QWORD*)(a1 + 152) + 176LL * *(int*)(a1 + 176));
  v2 = *v1;
  if (*v1 != 0) {
    if (v1[2] != v1[1] || v1[5] != v1[4] || v1[8] != v1[7] ||
        v1[11] != v1[10] || v1[14] != v1[13]) {
      goto LABEL_7;
    }
    v4 = v1[16];
    v5 = v1[17];
    if (v4 != v5) {
      do {
        v6 = game_HasSkill(*v1 + 1744, v4);
        if ((v6 & 1) == 0) {
          break;
        }
        v4 += 4;
      } while (v4 != v5);
      if ((v6 & 1) == 0) {
        v2 = *v1;
      LABEL_7:
        Cursor_730e40(*(_QWORD*)(GameData_21cd130 + 48), v2);
        GameRoutine_7c0e80(*GameData_212cfc8[0], a1, 1);
      }
    }
  }
}

__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TryDamage(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  int v11;
  int v12;
  float v13;
  _QWORD v14[6];

  v1 = *(_QWORD*)(result + 152) + 176LL * *(int*)(result + 176);
  if (*(_QWORD*)(v1 + 16) != *(_QWORD*)(v1 + 8)) {
    v2 = result;
    result = ProcList_9bd480(result);
    v3 = *(_QWORD*)(v1 + 8);
    v4 = *(_QWORD*)(v1 + 16);
    if (v3 != v4) {
      v5 = result;
      v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      do {
        if (*(_DWORD*)v3 != 0) {
          v7 = fw_memory_HeapManager_Allocate(*v6, 40, 16, 0);
          *(_QWORD*)v7 = GameData_1fa0780;
          *(_QWORD*)(v7 + 8) = v1;
          v8 = v7;
          v14[4] = v7;
          v9 = *(_BYTE*)(v3 + 16);
          v10 = *(_QWORD*)(v3 + 8);
          *(_QWORD*)(v7 + 16) = *(_QWORD*)v3;
          *(_QWORD*)(v7 + 24) = v10;
          *(_BYTE*)(v7 + 32) = v9;
          game_ProcList_Call_9bcfa0(v5, v14);
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 40LL))(v8);
        }
        v3 += 24;
      } while (v3 != v4);
    }
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v11 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v12 = 2)
             : (v12 = 3),
         (v12 & v11) != 0)) {
      v13 = *(float*)(v2 + 144);
      *(_WORD*)(v2 + 136) = *(_WORD*)(v2 + 136) & 0xFF97 | 0x60;
      if (v13 < 30.0) {
        v13 = 30.0;
      }
      *(float*)(v2 + 144) = v13;
    }
  }
  return result;
}

__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TryPollution(
    __int64 result, __int64 a2, __int64 a3)
{
  __int64 v3;
  int v4;
  _DWORD* v5;
  _DWORD* v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  int v11;
  float v12;
  __int64 (**v13)();
  __int64 v14;
  __int64 v15;
  __int64 (***v16)();

  v3 = *(_QWORD*)(result + 152);
  v4 = *(_DWORD*)(result + 176);
  v15 = result;
  v13 = GameData_1fa0a80;
  v14 = v3 + 176LL * v4;
  v16 = &v13;
  v5 = *(_DWORD**)(v14 + 56);
  v6 = *(_DWORD**)(v14 + 64);
  if (v6 == v5) {
    return result;
  }
  v7 = result;
  v8 = 0;
  do {
    if (*v5 != 0) {
      if (v16 == nullptr) {
        GameRoutine_60a310(0, a2, a3);
      }
      v8 |= ((__int64 (*)(__int64 (***)(), _DWORD*))(*v16)[6])(v16, v5);
    }
    v5 += 6;
  } while (v5 != v6);
  result = (__int64)v16;
  if (v16 == &v13) {
    v9 = 4;
    goto LABEL_11;
  }
  if (v16 != nullptr) {
    v9 = 5;
  LABEL_11:
    result = ((__int64 (*)(__int64 (***)()))(*v16)[v9])(v16);
  }
  if ((v8 & 1) != 0) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v10 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v11 = 2)
             : (v11 = 3),
         (v11 & v10) != 0)) {
      v12 = *(float*)(v7 + 144);
      *(_WORD*)(v7 + 136) = *(_WORD*)(v7 + 136) & 0xFF97 | 0x60;
      if (v12 < 30.0) {
        v12 = 30.0;
      }
      *(float*)(v7 + 144) = v12;
    }
  }
  return result;
}

__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TryBurstHeal(
    __int64 result, __int64 a2, __int64 a3)
{
  __int64 v3;
  int v4;
  _DWORD* v5;
  _DWORD* v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  int v11;
  float v12;
  __int64 (**v13)();
  __int64 v14;
  __int64 v15;
  __int64 (***v16)();

  v3 = *(_QWORD*)(result + 152);
  v4 = *(_DWORD*)(result + 176);
  v15 = result;
  v13 = GameData_1fa0b10;
  v14 = v3 + 176LL * v4;
  v16 = &v13;
  v5 = *(_DWORD**)(v14 + 80);
  v6 = *(_DWORD**)(v14 + 88);
  if (v6 == v5) {
    return result;
  }
  v7 = result;
  v8 = 0;
  do {
    if (*v5 != 0) {
      if (v16 == nullptr) {
        GameRoutine_60a310(0, a2, a3);
      }
      v8 |= ((__int64 (*)(__int64 (***)(), _DWORD*))(*v16)[6])(v16, v5);
    }
    v5 += 6;
  } while (v5 != v6);
  result = (__int64)v16;
  if (v16 == &v13) {
    v9 = 4;
    goto LABEL_11;
  }
  if (v16 != nullptr) {
    v9 = 5;
  LABEL_11:
    result = ((__int64 (*)(__int64 (***)()))(*v16)[v9])(v16);
  }
  if ((v8 & 1) != 0) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v10 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v11 = 2)
             : (v11 = 3),
         (v11 & v10) != 0)) {
      v12 = *(float*)(v7 + 144);
      *(_WORD*)(v7 + 136) = *(_WORD*)(v7 + 136) & 0xFF97 | 0x60;
      if (v12 < 30.0) {
        v12 = 30.0;
      }
      *(float*)(v7 + 144) = v12;
    }
  }
  return result;
}

__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TryWaste(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD v8[2];
  _QWORD* v9;
  _QWORD* v10;

  v1 = (_QWORD*)(*(_QWORD*)(result + 152) + 176LL * *(int*)(result + 176));
  if (v1[14] != v1[13] && *(_WORD*)(*v1 + 1952LL) != 0) {
    result = ProcList_9bd480(result);
    v2 = (_QWORD*)v1[13];
    v3 = (_QWORD*)v1[14];
    if (v2 != v3) {
      v4 = result;
      do {
        v8[0] = GameData_1fa0b90;
        v8[1] = v2;
        v9 = v1;
        v10 = v8;
        game_ProcList_Call_9bcfa0(v4, v8);
        if (v10 == v8) {
          v6 = 32;
        }
        else {
          if (v10 == nullptr) {
            goto LABEL_13;
          }
          v6 = 40;
        }
        (*(void (**)(void))(*v10 + v6))();
      LABEL_13:
        v8[0] = GameData_1fa0c10;
        v8[1] = v1;
        v9 = v2;
        v10 = v8;
        game_ProcList_Call_9bcfa0(v4, v8);
        if (v10 == v8) {
          v7 = 32;
        }
        else {
          if (v10 == nullptr) {
            goto LABEL_18;
          }
          v7 = 40;
        }
        (*(void (**)(void))(*v10 + v7))();
      LABEL_18:
        v8[0] = GameData_1fa0c90;
        v8[1] = v1;
        v9 = v2;
        v10 = v8;
        game_ProcList_Call_9bcfa0(v4, v8);
        result = (__int64)v10;
        if (v10 == v8) {
          v5 = 32;
        }
        else {
          if (v10 == nullptr) {
            goto LABEL_7;
          }
          v5 = 40;
        }
        result = (*(__int64 (**)(void))(*v10 + v5))();
      LABEL_7:
        v2 += 3;
      } while (v2 != v3);
    }
  }
  return result;
}

__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TryHeal(__int64 result,
                                                              __int64 a2,
                                                              __int64 a3)
{
  __int64 v3;
  int v4;
  _DWORD* v5;
  _DWORD* v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  int v11;
  float v12;
  __int64 (**v13)();
  __int64 v14;
  __int64 v15;
  __int64 (***v16)();

  v3 = *(_QWORD*)(result + 152);
  v4 = *(_DWORD*)(result + 176);
  v15 = result;
  v13 = GameData_1fa0d10;
  v14 = v3 + 176LL * v4;
  v16 = &v13;
  v5 = *(_DWORD**)(v14 + 32);
  v6 = *(_DWORD**)(v14 + 40);
  if (v6 == v5) {
    return result;
  }
  v7 = result;
  v8 = 0;
  do {
    if (*v5 != 0) {
      if (v16 == nullptr) {
        GameRoutine_60a310(0, a2, a3);
      }
      v8 |= ((__int64 (*)(__int64 (***)(), _DWORD*))(*v16)[6])(v16, v5);
    }
    v5 += 6;
  } while (v5 != v6);
  result = (__int64)v16;
  if (v16 == &v13) {
    v9 = 4;
    goto LABEL_11;
  }
  if (v16 != nullptr) {
    v9 = 5;
  LABEL_11:
    result = ((__int64 (*)(__int64 (***)()))(*v16)[v9])(v16);
  }
  if ((v8 & 1) != 0) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v10 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v11 = 2)
             : (v11 = 3),
         (v11 & v10) != 0)) {
      v12 = *(float*)(v7 + 144);
      *(_WORD*)(v7 + 136) = *(_WORD*)(v7 + 136) & 0xFF97 | 0x60;
      if (v12 < 30.0) {
        v12 = 30.0;
      }
      *(float*)(v7 + 144) = v12;
    }
  }
  return result;
}

__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TryGive(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 i;
  __int64 v4;
  _QWORD v5[4];
  _QWORD* v6;

  v1 = *(_QWORD*)(result + 152) + 176LL * *(int*)(result + 176);
  if (*(_QWORD*)(v1 + 136) != *(_QWORD*)(v1 + 128)) {
    result = ProcList_9bd480(result);
    if (result != 0 && *(_QWORD*)(v1 + 136) != *(_QWORD*)(v1 + 128)) {
      v2 = result;
      for (i = 0;
           i < (__int64)(*(_QWORD*)(v1 + 136) - *(_QWORD*)(v1 + 128)) >> 2;
           ++i) {
        v5[0] = GameData_1fa0d90;
        v5[1] = v1;
        v5[2] = i;
        v6 = v5;
        game_ProcList_Call_9bcfa0(v2, v5);
        result = (__int64)v6;
        if (v6 == v5) {
          v4 = 32;
        }
        else {
          if (v6 == nullptr) {
            continue;
          }
          v4 = 40;
        }
        result = (*(__int64 (**)(void))(*v6 + v4))();
      }
    }
  }
  return result;
}

__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TrySkill(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 i;
  __int64 v4;
  _QWORD v5[4];
  _QWORD* v6;

  v1 = *(_QWORD*)(result + 152) + 176LL * *(int*)(result + 176);
  if (*(_QWORD*)(v1 + 160) != *(_QWORD*)(v1 + 152)) {
    result = ProcList_9bd480(result);
    if (result != 0 && *(_QWORD*)(v1 + 160) != *(_QWORD*)(v1 + 152)) {
      v2 = result;
      for (i = 0;
           i < (__int64)(*(_QWORD*)(v1 + 160) - *(_QWORD*)(v1 + 152)) >> 2;
           ++i) {
        v5[0] = GameData_1fa0e10;
        v5[1] = v1;
        v5[2] = i;
        v6 = v5;
        game_ProcList_Call_9bcfa0(v2, v5);
        result = (__int64)v6;
        if (v6 == v5) {
          v4 = 32;
        }
        else {
          if (v6 == nullptr) {
            continue;
          }
          v4 = 40;
        }
        result = (*(__int64 (**)(__int64))(*v6 + v4))((__int64)v6);
      }
    }
  }
  return result;
}

__int64 ProcMapSeqPhase_848ec0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  int v10;

  v2 = *GameData_212ce98[0];
  v3 = *(_QWORD*)(*GameData_212ce98[0] + 96);
  Image_72b4a0(v3);
  Image_72b6c0(v3);
  Image_72a260(*(_QWORD*)(v2 + 152));
  result = Situation_765b20(GameData_21ca2f8);
  if ((result & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 8);
    if (v5 != 0) {
      while (1) {
        if (*(_BYTE*)v5 == 2) {
          if (*(_DWORD*)(v5 + 32) == 7) {
            goto LABEL_25;
          }
        }
        else if (*(_BYTE*)v5 == 0) {
          return result;
        }
        v5 += 64LL;
      }
    }
  }
  else {
    v7 = *(_QWORD*)(a1 + 152);
    v6 = *(_QWORD*)(a1 + 160);
    v8 = *(int*)(a1 + 176);
    if (0x2E8BA2E8BA2E8BA3LL * ((v6 - v7) >> 4) - 1 <= v8) {
      for (*(_DWORD*)(a1 + 176) = 0; v6 != v7;
           result = ProcMapSeqPhase_849e70_alt1(v6)) {
        v6 -= 176;
      }
      *(_QWORD*)(a1 + 160) = v7;
    }
    else {
      *(_DWORD*)(a1 + 176) = v8 + 1;
      v5 = *(_QWORD*)(a1 + 8);
      v9 = *(_QWORD*)(a1 + 16);
      if (v5 > v9) {
      LABEL_13:
        v10 = -1;
        if (v5 != 0) {
          goto LABEL_22;
        }
      }
      else {
        while (*(_BYTE*)v9 != 2) {
          v9 -= 64LL;
          if (v5 > v9) {
            goto LABEL_13;
          }
        }
        v10 = *(_DWORD*)(v9 + 32);
        if (v5 != 0) {
          while (1) {
          LABEL_22:
            if (*(_BYTE*)v5 == 2) {
              if (*(_DWORD*)(v5 + 32) == v10) {
              LABEL_25:
                *(_QWORD*)(a1 + 16) = v5;
                *(_WORD*)(a1 + 136) &= ~0x80u;
                return result;
              }
            }
            else if (*(_BYTE*)v5 == 0) {
              return result;
            }
            v5 += 64LL;
          }
        }
      }
    }
  }
  return result;
}

__int64 ProcMapSeqPhase_849200(__int64 result)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  unsigned int* v4;

  v1 = *(_QWORD*)(result + 152);
  v2 = *(int*)(result + 176);
  v3 = result;
  if (0x2E8BA2E8BA2E8BA3LL * ((*(_QWORD*)(result + 160) - v1) >> 4) > v2) {
    result = *(_QWORD*)(v1 + 176LL * (int)v2);
    if (result != 0 && *(_QWORD*)(result + 392) != 0) {
      result = GameRoutine_81a990(result);
    }
  }
  v4 = *(unsigned int**)(v3 + 11496);
  if (v4 != nullptr) {
    result = game_VariableManager_SetFlag(&GameData_21d1f70, *v4);
    *(_QWORD*)(v3 + 11496) = 0;
  }
  return result;
}

__int64 ProcMapSeqPhase_849290(__int64 result)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;

  v1 = *(_QWORD*)(result + 152);
  v2 = *(int*)(result + 176);
  if (0x2E8BA2E8BA2E8BA3LL * ((*(_QWORD*)(result + 160) - v1) >> 4) > v2) {
    v3 = *(_QWORD*)(v1 + 176LL * (int)v2);
    if (v3 != 0 && *(_QWORD*)(v3 + 392) != 0) {
      v4 = result;
      v5 = GameData_212cfd0[0];
      Mind_743fc0(*GameData_212cfd0[0], v3);
      v6 = *v5;
      *(_BYTE*)(v6 + 20) = 17;
      v7 = game_Unit_GetMorphSkill(v3);
      if (v7 != 0) {
        v8 = *(_DWORD*)(v6 + 56) & 0xFFFFF000 | *(_WORD*)(v7 + 16) & 0xFFF;
      }
      else {
        v8 = *(_DWORD*)(v6 + 56) & 0xFFFFF000;
      }
      *(_DWORD*)(v6 + 56) = v8;
      return GameRoutine_75d120(v4, 1);
    }
  }
  return result;
}

__int64 ProcMapSeqPhase_849360(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  float v4;

  if (*(_QWORD*)(*(_QWORD*)(result + 152) + 176LL * *(int*)(result + 176)) !=
      0) {
    if ((v1 = result, result = GameRoutine_76a2e0(),
         game_ProcGameSkipView_instance_ == 0) ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v3 = 2)
             : (v3 = 3),
         (v3 & v2) != 0)) {
      v4 = *(float*)(v1 + 144);
      *(_WORD*)(v1 + 136) = *(_WORD*)(v1 + 136) & 0xFF97 | 0x60;
      if (v4 < 30.0) {
        v4 = 30.0;
      }
      *(float*)(v1 + 144) = v4;
    }
  }
  return result;
}

__int64 ProcMapSeqPhase_849400(__int64 result)
{
  __int64 v1;
  __int64 v2;
  char* v3;
  char* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  char* v13;
  int v14;
  int v15;
  int v17;
  int v18;
  float v19;

  v1 = *(_QWORD*)(*(_QWORD*)(result + 152) + 176LL * *(int*)(result + 176));
  if (v1 == 0) {
    return result;
  }
  v2 = result;
  if ((*(_DWORD*)(v1 + 1872) & 0xFFF) != 0) {
    v3 = *(char**)(v1 + 608);
    v4 = *(char**)(v1 + 600);
    v5 = v3 - v4;
    if ((int)((unsigned __int64)(v3 - v4) >> 2) >= 1) {
      v6 = (v5 >> 2) & 7;
      if (((v5 >> 2) & 0x7FFFFFFF) - 1 >= 7) {
        v9 = v4 + 18;
        v10 = 0;
        v11 = -8LL * ((v5 >> 5) & 0xFFFFFFF);
        v8 = 255;
        do {
          v10 -= 8;
          if (v8 >= *(v9 - 16)) {
            v8 = *(v9 - 16);
          }
          if (v8 >= *(v9 - 12)) {
            v8 = *(v9 - 12);
          }
          if (v8 >= *(v9 - 8)) {
            v8 = *(v9 - 8);
          }
          if (v8 >= *(v9 - 4)) {
            v8 = *(v9 - 4);
          }
          if (v8 >= *v9) {
            v8 = *v9;
          }
          if (v8 >= v9[4]) {
            v8 = v9[4];
          }
          if (v8 >= v9[8]) {
            v8 = v9[8];
          }
          v12 = v9[12];
          v9 += 32;
          if (v8 >= v12) {
            v8 = v12;
          }
        } while (v11 != v10);
        v7 = -v10;
        if (v6 == 0) {
          goto LABEL_31;
        }
      }
      else {
        v7 = 0;
        v8 = 255;
        if (v6 == 0) {
        LABEL_31:
          if (v8 < *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 +
                                                             64) +
                                                  8LL * (*(_DWORD*)(v1 + 1872) &
                                                         0xFFF)) +
                                       273LL) &&
              v4 != v3) {
            do {
              result = _ZN4game4Unit14RepairBarrierEPKS0_iib(
                  v1, v2, (unsigned int)*v4, (unsigned int)v4[1], 1);
              v4 += 4;
            } while (v4 != v3);
          }
          goto LABEL_36;
        }
      }
      v13 = &v4[4 * v7 + 2];
      do {
        v15 = *v13;
        v13 += 4;
        v14 = v15;
        if (v8 >= v15) {
          v8 = v14;
        }
        --v6;
      } while (v6 != 0);
      goto LABEL_31;
    }
    v8 = 0;
    goto LABEL_31;
  }
LABEL_36:
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v17 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v18 = 2)
           : (v18 = 3),
       (v18 & v17) != 0)) {
    v19 = *(float*)(v2 + 144);
    *(_WORD*)(v2 + 136) = *(_WORD*)(v2 + 136) & 0xFF97 | 0x60;
    if (v19 < 30.0) {
      v19 = 30.0;
    }
    *(float*)(v2 + 144) = v19;
  }
  return result;
}

__int64 ProcMapSeqPhase_849600(__int64 a1, char a2)
{
  __int64 result;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[4];
  _QWORD* v19;
  int v20;
  _QWORD v21[3];
  _QWORD v22[4];
  _QWORD* v23;

  result = ProcMapSeqPhase_849860_alt1(v21);
  v5 = (_QWORD*)v21[1];
  v17 = v21[0];
  if (v21[0] != v21[1]) {
    v6 = (_QWORD*)v21[0];
    while (1) {
      v8 = *v6;
      if ((*(_DWORD*)(*v6 + 1828LL) & (1 << a2)) == 0) {
        goto LABEL_5;
      }
      BattleInfo_790460(a1 + 184, *v6);
      GameRoutine_790ba0(a1 + 184);
      v9 = *(_BYTE*)(a1 + 11457);
      v20 = 1 << a2;
      v18[2] = v8;
      v19 = v18;
      v22[0] = GameData_1f98b78;
      v22[1] = a1 + 200;
      v22[2] = v18;
      v23 = v22;
      *(_BYTE*)(a1 + 11457) = v9 | 1;
      v18[0] = GameData_1fa0580;
      v18[1] = a1;
      GameRoutine_7a2a60(a1 + 200, &v20, 0, v22);
      if (v23 == v22) {
        break;
      }
      if (v23 != nullptr) {
        v10 = 40;
      LABEL_11:
        (*(void (**)(void))(*v23 + v10))();
      }
      result = (__int64)v19;
      if (v19 == v18) {
        v7 = 32;
      }
      else {
        if (v19 == nullptr) {
          goto LABEL_5;
        }
        v7 = 40;
      }
      result = (*(__int64 (**)(void))(*v19 + v7))();
    LABEL_5:
      if (++v6 == v5) {
        goto LABEL_15;
      }
    }
    v10 = 32;
    goto LABEL_11;
  }
LABEL_15:
  if (v17 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v17);
  }
  if (0x2E8BA2E8BA2E8BA3LL *
          ((__int64)(*(_QWORD*)(a1 + 160) - *(_QWORD*)(a1 + 152)) >> 4) >
      (unsigned __int64)*(int*)(a1 + 176)) {
    v12 = *(_QWORD*)(a1 + 96);
    v13 = *(_QWORD*)(a1 + 104);
    v14 = ((v13 - v12) << 6) - 1;
    if (v13 == v12) {
      v14 = 0;
    }
    v15 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
    if (v14 == v15) {
      result = GameRoutine_658d60(a1 + 88);
      v12 = *(_QWORD*)(a1 + 96);
      v15 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
    }
    *(_QWORD*)(*(_QWORD*)(v12 + 8 * (v15 >> 9)) + 8 * (v15 & 0x1FF)) =
        *(_QWORD*)(a1 + 16);
    ++*(_QWORD*)(a1 + 128);
    v16 = *(_QWORD*)(a1 + 8);
    if (v16 != 0) {
      while (1) {
        if (*(_BYTE*)v16 == 2) {
          if (*(_DWORD*)(v16 + 32) == 2) {
            *(_QWORD*)(a1 + 16) = v16;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            return result;
          }
        }
        else if (*(_BYTE*)v16 == 0) {
          return result;
        }
        v16 += 64;
      }
    }
  }
  return result;
}

__int64 ProcMapSeqPhase_849860(__int64* a1)
{
  __int64 v2;
  _QWORD* v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  char* v17;
  char* v18;
  signed __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  unsigned __int64 v26;

  v26 = 0;
  v24 = 0;
  v25 = nullptr;
  v2 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                  24LL * *(unsigned __int8*)(*GameData_212ce90[0] + 24) +
                  556000);
  v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = nullptr;
    do {
      v5 = GameRoutine_7536a0(v2);
      if ((v5 & 1) != 0) {
        if ((unsigned __int64)v4 < v26) {
          *(_QWORD*)v4 = v2;
          v4 += 8;
        }
        else {
          v6 = v24;
          v7 = &v4[-v24];
          v8 = (__int64)&v4[-v24] >> 3;
          v9 = v8 + 1;
          if ((unsigned __int64)(v8 + 1) >> 61 != 0) {
            goto LABEL_30;
          }
          v10 = v26 - v24;
          if ((__int64)(v26 - v24) >> 2 > v9) {
            v9 = v10 >> 2;
          }
          if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
            v11 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v11 = v9;
          }
          if (v11 != 0) {
            if (v11 >> 61 != 0) {
              GameRoutine_60a210(v5);
            }
            v12 = fw_memory_HeapManager_Allocate(*v3, 8 * v11, 16, 0);
          }
          else {
            v12 = 0;
          }
          v13 = v12 + 8 * v11;
          v14 = (__int64)&v7[v12 + -8 * v8];
          *(_QWORD*)&v7[v12] = v2;
          v4 = &v7[v12 + 8];
          memcpy(v14, v6, v7);
          v24 = v14;
          v26 = v13;
          if (v6 != 0) {
            v15 = 128;
            if (*(_QWORD*)(*v3 + 200LL) == 0) {
              v15 = 56;
            }
            nn_mem_StandardAllocator_Free(*v3 + v15, v6);
          }
        }
        v25 = v4;
      }
      v2 = *(_QWORD*)(v2 + 432);
    } while (v2 != 0);
  }
  result = GameRoutine_758d40(&v24);
  v18 = (char*)v24;
  v17 = v25;
  a1[1] = 0;
  a1[2] = 0;
  v19 = v17 - v18;
  *a1 = 0;
  if (v17 != v18) {
    if (v19 < 0) {
    LABEL_30:
      GameRoutine_6c1f60();
    }
    v20 = fw_memory_HeapManager_Allocate(*v3, v17 - v18, 16, 0);
    v21 = v20 + v19;
    *a1 = v20;
    a1[2] = v20 + v19;
    result = memcpy(v20, v18, v19);
    a1[1] = v21;
  }
  if (v18 != nullptr) {
    v22 = *v3;
    v25 = v18;
    v23 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v23 = 56;
    }
    return nn_mem_StandardAllocator_Free(v22 + v23, v18);
  }
  return result;
}

__int64* ProcMapSeqPhase_849ba0(_QWORD* a1, __int64 a2)
{
  _QWORD* v2;
  __int64* v3;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 i;
  __int64 v20;
  __int64 v21;
  _QWORD v23[2];
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
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  _QWORD* v48;

  v3 = (__int64*)*a1;
  v2 = (_QWORD*)a1[1];
  v5 = (__int64)v2 - *a1;
  if (v2 == (_QWORD*)*a1) {
    goto LABEL_7;
  }
  v6 = 0;
  v7 = (__int64*)*a1;
  while (1) {
    v8 = *v7;
    v7 += 22;
    if (v8 == a2) {
      break;
    }
    if (0x2E8BA2E8BA2E8BA3LL * (v5 >> 4) == ++v6) {
      goto LABEL_7;
    }
  }
  if (v6 < 0) {
  LABEL_7:
    v9 = a1[2];
    v23[0] = a2;
    v23[1] = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    if ((unsigned __int64)v2 >= v9) {
      v11 = 0x2E8BA2E8BA2E8BA3LL * (v5 >> 4) + 1;
      if (v11 > 0x1745D1745D1745DLL) {
        GameRoutine_84a1c0(a1);
      }
      v48 = a1 + 2;
      v12 = fw_memory_g_heap_manager_ptr;
      v13 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(v9 - (_QWORD)v3) >> 4);
      v14 = 2 * v13;
      if (2 * v13 <= v11) {
        v14 = 0x2E8BA2E8BA2E8BA3LL * (v5 >> 4) + 1;
      }
      if (v13 >= 0xBA2E8BA2E8BA2ELL) {
        v15 = 0x1745D1745D1745DLL;
      }
      else {
        v15 = v14;
      }
      if (v15 != 0) {
        if (v15 > 0x1745D1745D1745DLL) {
          GameRoutine_60a210(a1);
        }
        v16 = a2;
        v17 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 176 * v15, 16, 0);
        a2 = v16;
      }
      else {
        v17 = 0;
      }
      v18 = (_QWORD*)(v17 + v5);
      v23[1] = 0;
      v24 = 0;
      v25 = 0;
      v44 = v17;
      v45 = v17 + v5;
      *v18 = a2;
      v18[1] = 0;
      v18[2] = 0;
      v18[3] = 0;
      v18[4] = 0;
      v18[5] = 0;
      v18[8] = 0;
      v18[9] = 0;
      v18[6] = 0;
      v18[7] = 0;
      v18[10] = 0;
      v18[11] = 0;
      v18[14] = 0;
      v18[15] = 0;
      v18[12] = 0;
      v18[13] = 0;
      v18[16] = 0;
      v18[17] = 0;
      v18[20] = 0;
      v18[21] = 0;
      v18[18] = 0;
      v18[19] = 0;
      v26 = 0;
      v27 = 0;
      v30 = 0;
      v31 = 0;
      v28 = 0;
      v29 = 0;
      v32 = 0;
      v33 = 0;
      v36 = 0;
      v37 = 0;
      v34 = 0;
      v35 = 0;
      v38 = 0;
      v39 = 0;
      v42 = 0;
      v43 = 0;
      v40 = 0;
      v41 = 0;
      v46 = v17 + v5 + 176;
      v47 = v17 + 176 * v15;
      ProcMapSeqPhase_849fe0_alt1(a1, &v44);
      v10 = (_QWORD*)a1[1];
      v20 = v45;
      for (i = v46; i != v20; ProcMapSeqPhase_849e70_alt1(i)) {
        i -= 176;
      }
      if (v44 != 0) {
        v21 = 128;
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v21, v44);
      }
    }
    else {
      *v2 = a2;
      v2[1] = 0;
      v2[2] = 0;
      v2[3] = 0;
      v23[1] = 0;
      v24 = 0;
      v25 = 0;
      v10 = v2 + 22;
      v2[4] = 0;
      v2[5] = 0;
      v26 = 0;
      v27 = 0;
      v2[6] = 0;
      v2[7] = 0;
      v2[8] = 0;
      v2[9] = 0;
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v2[10] = 0;
      v2[11] = 0;
      v32 = 0;
      v33 = 0;
      v2[14] = 0;
      v2[15] = 0;
      v2[12] = 0;
      v2[13] = 0;
      v36 = 0;
      v37 = 0;
      v34 = 0;
      v35 = 0;
      v2[16] = 0;
      v2[17] = 0;
      v38 = 0;
      v39 = 0;
      v2[20] = 0;
      v2[21] = 0;
      v2[18] = 0;
      v2[19] = 0;
      v42 = 0;
      v43 = 0;
      v40 = 0;
      v41 = 0;
    }
    a1[1] = v10;
    ProcMapSeqPhase_849e70_alt1(v23);
    v3 = (__int64*)*a1;
    v6 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(a1[1] - *a1) >> 4) - 1;
  }
  return &v3[22 * (int)v6];
}

__int64 ProcMapSeqPhase_849e70(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64* v3;
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

  v1 = *(_QWORD*)(result + 152);
  v2 = (_QWORD*)result;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(result + 160) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = v2[16];
  if (v6 != 0) {
    v7 = *v3;
    v2[17] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  v9 = v2[13];
  if (v9 != 0) {
    v10 = *v3;
    v2[14] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v10 + v11, v9);
  }
  v12 = v2[10];
  if (v12 != 0) {
    v13 = *v3;
    v2[11] = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v13 + v14, v12);
  }
  v15 = v2[7];
  if (v15 != 0) {
    v16 = *v3;
    v2[8] = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v16 + v17, v15);
  }
  v18 = v2[4];
  if (v18 != 0) {
    v19 = *v3;
    v2[5] = v18;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v19 + v20, v18);
  }
  v21 = v2[1];
  if (v21 != 0) {
    v22 = *v3;
    v2[2] = v21;
    v23 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v23 = 56;
    }
    return nn_mem_StandardAllocator_Free(v22 + v23, v21);
  }
  return result;
}

__int64* ProcMapSeqPhase_849fe0(__int64* result, _QWORD* a2)
{
  __int64 v2;
  __int64* v3;
  __int64* v5;
  __int64 v6;
  __int64* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v2 = *result;
  v3 = (__int64*)result[1];
  v5 = result;
  v6 = a2[1] + *result - (_QWORD)v3;
  if (v3 != (__int64*)*result) {
    v7 = (__int64*)*result;
    v8 = (_QWORD*)(a2[1] + *result - (_QWORD)v3);
    do {
      v9 = *v7;
      v8[2] = 0;
      v8[3] = 0;
      *v8 = v9;
      v8[1] = 0;
      v8[1] = v7[1];
      v8[2] = v7[2];
      v8[3] = v7[3];
      v7[2] = 0;
      v7[3] = 0;
      v7[1] = 0;
      v8[5] = 0;
      v8[6] = 0;
      v8[4] = 0;
      v8[4] = v7[4];
      v8[5] = v7[5];
      v8[6] = v7[6];
      v7[5] = 0;
      v7[6] = 0;
      v7[4] = 0;
      v8[8] = 0;
      v8[9] = 0;
      v8[7] = 0;
      v8[7] = v7[7];
      v8[8] = v7[8];
      v8[9] = v7[9];
      v7[8] = 0;
      v7[9] = 0;
      v7[7] = 0;
      v8[11] = 0;
      v8[12] = 0;
      v8[10] = 0;
      v8[10] = v7[10];
      v8[11] = v7[11];
      v8[12] = v7[12];
      v7[11] = 0;
      v7[12] = 0;
      v7[10] = 0;
      v8[14] = 0;
      v8[15] = 0;
      v8[13] = 0;
      v8[13] = v7[13];
      v8[14] = v7[14];
      v8[15] = v7[15];
      v7[14] = 0;
      v7[15] = 0;
      v7[13] = 0;
      v8[17] = 0;
      v8[18] = 0;
      v8[16] = 0;
      v8[16] = v7[16];
      v8[17] = v7[17];
      v8[18] = v7[18];
      v7[17] = 0;
      v7[18] = 0;
      v7[16] = 0;
      v8[20] = 0;
      v8[21] = 0;
      v8[19] = 0;
      v8[19] = v7[19];
      v8[20] = v7[20];
      v8[21] = v7[21];
      v7[20] = 0;
      v7[21] = 0;
      v7[19] = 0;
      v7 += 22;
      v8 += 22;
    } while (v7 != v3);
    do {
      result = (__int64*)ProcMapSeqPhase_849e70(v2);
      v2 += 176;
    } while ((__int64*)v2 != v3);
  }
  a2[1] = v6;
  v10 = *v5;
  v5[1] = *v5;
  *v5 = a2[1];
  a2[1] = v10;
  v11 = v5[1];
  v5[1] = a2[2];
  a2[2] = v11;
  v12 = v5[2];
  v5[2] = a2[3];
  a2[3] = v12;
  *a2 = a2[1];
  return result;
}

__int64* ProcMapSeqPhase_84a590(__int64* result, _QWORD* a2)
{
  _QWORD* v2;
  unsigned __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;

  v2 = (_QWORD*)result[1];
  v3 = result[2];
  v4 = result;
  if ((unsigned __int64)v2 >= v3) {
    v8 = *result;
    v9 = (__int64)v2 - *result;
    v10 = 1 - 0x5555555555555555LL * (v9 >> 3);
    if (v10 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_84a6f0();
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v3 - v8) >> 3);
    if (2 * v12 > v10) {
      v10 = 2 * v12;
    }
    if (v12 >= 0x555555555555555LL) {
      v13 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210(result);
      }
      v14 = a2;
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v13, 16, 0);
      a2 = v14;
    }
    else {
      v15 = 0;
    }
    v16 = (_QWORD*)(v15 + v9);
    v17 = v15 + 24 * v13;
    v18 = a2[1];
    v7 = v15 + v9 + 24;
    *v16 = *a2;
    v16[1] = v18;
    v16[2] = a2[2];
    result = (__int64*)memcpy(v15, v8, v9);
    *v4 = v15;
    v4[1] = v7;
    v4[2] = v17;
    if (v8 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v19 = 56;
      }
      result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v19, v8);
    }
  }
  else {
    v5 = *a2;
    v6 = a2[2];
    v7 = (__int64)(v2 + 3);
    v2[1] = a2[1];
    v2[2] = v6;
    *v2 = v5;
  }
  v4[1] = v7;
  return result;
}

_QWORD* ProcMapSeqPhase_84aaa0(_QWORD* result, __int64* a2)
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

  v2 = *a2;
  result[2] = 0;
  result[3] = 0;
  v4 = result;
  *result = v2;
  result[1] = 0;
  v6 = a2[1];
  v5 = a2[2];
  v7 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v8 = v5 - v6;
  if (v5 != v6) {
    if (0xAAAAAAAAAAAAAAABLL * (v8 >> 3) > 0xAAAAAAAAAAAAAAALL) {
      goto LABEL_23;
    }
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v8, 16, 0);
    v10 = v9 + v8;
    v4[1] = v9;
    v4[2] = v9;
    v4[3] = v9 + v8;
    result = (_QWORD*)memcpy(v9, v6, v8 - 7);
    v4[2] = v10;
  }
  v4[5] = 0;
  v4[6] = 0;
  v4[4] = 0;
  v12 = a2[4];
  v11 = a2[5];
  v13 = v11 - v12;
  if (v11 != v12) {
    if (0xAAAAAAAAAAAAAAABLL * (v13 >> 3) > 0xAAAAAAAAAAAAAAALL) {
      goto LABEL_23;
    }
    v14 = fw_memory_HeapManager_Allocate(*v7, v13, 16, 0);
    v15 = v14 + v13;
    v4[4] = v14;
    v4[5] = v14;
    v4[6] = v14 + v13;
    result = (_QWORD*)memcpy(v14, v12, v13 - 7);
    v4[5] = v15;
  }
  v4[8] = 0;
  v4[9] = 0;
  v4[7] = 0;
  v17 = a2[7];
  v16 = a2[8];
  v18 = v16 - v17;
  if (v16 != v17) {
    if (0xAAAAAAAAAAAAAAABLL * (v18 >> 3) > 0xAAAAAAAAAAAAAAALL) {
      goto LABEL_23;
    }
    v19 = fw_memory_HeapManager_Allocate(*v7, v18, 16, 0);
    v20 = v19 + v18;
    v4[7] = v19;
    v4[8] = v19;
    v4[9] = v19 + v18;
    result = (_QWORD*)memcpy(v19, v17, v18 - 7);
    v4[8] = v20;
  }
  v4[11] = 0;
  v4[12] = 0;
  v4[10] = 0;
  v22 = a2[10];
  v21 = a2[11];
  v23 = v21 - v22;
  if (v21 != v22) {
    if (0xAAAAAAAAAAAAAAABLL * (v23 >> 3) > 0xAAAAAAAAAAAAAAALL) {
      goto LABEL_23;
    }
    v24 = fw_memory_HeapManager_Allocate(*v7, v23, 16, 0);
    v25 = v24 + v23;
    v4[10] = v24;
    v4[11] = v24;
    v4[12] = v24 + v23;
    result = (_QWORD*)memcpy(v24, v22, v23 - 7);
    v4[11] = v25;
  }
  v4[14] = 0;
  v4[15] = 0;
  v4[13] = 0;
  v27 = a2[13];
  v26 = a2[14];
  v28 = v26 - v27;
  if (v26 != v27) {
    if (0xAAAAAAAAAAAAAAABLL * (v28 >> 3) > 0xAAAAAAAAAAAAAAALL) {
    LABEL_23:
      GameRoutine_84a6f0();
    }
    v29 = fw_memory_HeapManager_Allocate(*v7, v28, 16, 0);
    v30 = v29 + v28;
    v4[13] = v29;
    v4[14] = v29;
    v4[15] = v29 + v28;
    result = (_QWORD*)memcpy(v29, v27, v28 - 7);
    v4[14] = v30;
  }
  v4[17] = 0;
  v4[18] = 0;
  v4[16] = 0;
  v32 = a2[16];
  v31 = a2[17];
  v33 = v31 - v32;
  if (v31 != v32) {
    if (v33 < 0) {
      goto LABEL_24;
    }
    v34 = fw_memory_HeapManager_Allocate(*v7, v31 - v32, 16, 0);
    v35 = v34 + v33;
    v4[16] = v34;
    v4[17] = v34;
    v4[18] = v34 + v33;
    result = (_QWORD*)memcpy(v34, v32, v33);
    v4[17] = v35;
  }
  v4[20] = 0;
  v4[21] = 0;
  v4[19] = 0;
  v37 = a2[19];
  v36 = a2[20];
  v38 = v36 - v37;
  if (v36 == v37) {
    return result;
  }
  if (v38 < 0) {
  LABEL_24:
    GameRoutine_6e3e20(result);
  }
  v39 = fw_memory_HeapManager_Allocate(*v7, v36 - v37, 16, 0);
  v40 = v39 + v38;
  v4[19] = v39;
  v4[20] = v39;
  v4[21] = v39 + v38;
  result = (_QWORD*)memcpy(v39, v37, v38);
  v4[20] = v40;
  return result;
}

__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TryDamage_closure_Invoke(
    __int64 a1, __int64* a2)
{
  _QWORD* v2;
  __int64 v4;
  unsigned int v5;

  v2 = *(_QWORD**)(a1 + 8);
  v4 = *a2;
  v5 = GameRoutine_6dcf40(*v2, *(unsigned int*)(a1 + 16), 0);
  return GameRoutine_84aec0(v2, v4, v5, a1 + 24, *(unsigned __int8*)(a1 + 32));
}

__int64

game_map_anonymous_ProcMapSeqPhase_TargetData_TryDiff_closure_Invoke(__int64 a1)
{
  return (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 8) + 200LL))(
      *(_QWORD*)(a1 + 8), 1);
}

bool game_map_anonymous_ProcMapSeqPhase_TargetData_TryDiff_closure1_Invoke(
    __int64 a1)
{
  return ((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 48LL))(
              *(_QWORD*)(a1 + 8)) &
          1) == 0;
}

__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TryDiff_closure2_Invoke(
    __int64 a1)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 200LL))(
      *(_QWORD*)(a1 + 8), 0);
}

__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_DirtyTrick_closure_Invoke(
    __int64 a1, _DWORD* a2, _DWORD* a3)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;

  v3 = *a2 + 32 * *a3;
  if (v3 >= 0x400) {
    v3 = 0;
  }
  v4 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
  v5 = *(__int16*)(v4 + 2LL * v3 + 104);
  if ((v5 & 0x8000000000000000LL) == 0) {
    v6 = *(_QWORD*)(v4 + 8);
    if (v6 != 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)(v6 + 144LL * (int)v5) +
                                       512LL))(v6 + 144LL * (int)v5);
    }
  }
  return result;
}

__int64

game_map_anonymous_ProcMapSeqPhase_TargetData_TryPollution_closure_Invoke(
    __int64 a1, int* a2)
{
  _QWORD* v2;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[4];
  _QWORD* v18;

  v2 = *(_QWORD**)(a1 + 8);
  v5 = *GameData_21309c8[0];
  if (*GameData_21309c8[0] != 0) {
    v6 = *v2;
    if (*v2 != 0 && *(_BYTE*)(v5 + 8) == 1 && (*(_BYTE*)(v5 + 9) & 1) == 0) {
      v8 = *(_QWORD*)(v6 + 440);
      if (v8 != 0 && *(unsigned __int8*)(v8 + 16) <= 8u &&
          game_map_UnitFlags_instance_ != 0) {
        v9 = *(unsigned __int8*)(v6 + 2088);
        if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v9) & 1) != 0) {
          *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v9) |= 2u;
        }
      }
    }
  }
  v10 = *a2;
  if (*a2 == 0) {
    return 0;
  }
  v11 = *v2;
  *(_DWORD*)(v11 + 416) = *(_DWORD*)(*v2 + 416LL) | 0x8000;
  result = game_Unit_SetPollution(
      v11, v10 + (unsigned int)*(unsigned __int8*)(v11 + 499));
  if ((_DWORD)result == 0) {
    return result;
  }
  GameRoutine_76c260(*(_QWORD*)(a1 + 16), *v2);
  GameRoutine_961c00(*(_QWORD*)(a1 + 16), a2 + 2, *v2);
  v13 = *v2;
  if (*v2 != 0) {
    v14 = (unsigned int)*(char*)(v13 + 584);
    v15 = (unsigned int)*(char*)(v13 + 585);
    v17[0] = GameData_1fa09f0;
    v18 = v17;
    Unit_6c8a80(v13, v14, v15, v17);
    if (v18 == v17) {
      v16 = 32;
      goto LABEL_21;
    }
    if (v18 != nullptr) {
      v16 = 40;
    LABEL_21:
      (*(void (**)(__int64))(*v18 + v16))((__int64)v18);
    }
  }
  return 1;
}

__int64

game_map_anonymous_ProcMapSeqPhase_TargetData_TryBurstHeal_closure_Invoke(
    __int64 a1, _DWORD* a2)
{
  _QWORD* v2;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  unsigned __int8 v9;
  int v11;
  int v12;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD v24[4];
  _QWORD* v25;

  if (*a2 == 0) {
    return 0;
  }
  v2 = *(_QWORD**)(a1 + 8);
  v5 = *v2;
  v6 = *(unsigned __int8*)(*v2 + 500LL);
  v7 = v6 - *a2;
  v8 = Unit_6c9ef0(*v2);
  if (v8 >= v7) {
    v9 = v7;
  }
  else {
    v9 = v8;
  }
  if (v7 < 0) {
    v9 = 0;
  }
  *(_BYTE*)(v5 + 500) = v9;
  if (v6 == v9) {
    return 0;
  }
  v11 = *(unsigned __int16*)(v5 + 492);
  LOBYTE(v24[0]) = 0;
  v12 = game_Unit_GetParam(v5, v24, 1);
  if (*(_WORD*)(v5 + 494) != 0 && v11 != *(unsigned __int16*)(v5 + 494)) {
    *(_WORD*)(v5 + 494) = 0;
  }
  if (v12 >= (__int16)v11) {
    v14 = (__int16)v11;
  }
  else {
    v14 = v12;
  }
  if ((v11 & 0x8000u) != 0) {
    v14 = 0;
  }
  if (v14 != *(__int16*)(v5 + 492)) {
    *(_WORD*)(v5 + 492) = v14;
  }
  v15 = *v2;
  v16 = *GameData_21309c8[0];
  if (*GameData_21309c8[0] != 0 && v15 != 0 && *(_BYTE*)(v16 + 8) == 1 &&
      (*(_BYTE*)(v16 + 9) & 1) == 0) {
    v18 = *(_QWORD*)(v15 + 440);
    if (v18 != 0 && *(unsigned __int8*)(v18 + 16) <= 8u &&
        game_map_UnitFlags_instance_ != 0) {
      v19 = *(unsigned __int8*)(v15 + 2088);
      if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v19) & 1) != 0) {
        *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v19) |= 2u;
        v15 = *v2;
      }
    }
  }
  GameRoutine_961c00(*(_QWORD*)(a1 + 16), a2 + 2, v15);
  v20 = *v2;
  if (*v2 != 0) {
    v21 = (unsigned int)*(char*)(v20 + 584);
    v22 = (unsigned int)*(char*)(v20 + 585);
    v24[0] = GameData_1fa09f0;
    v25 = v24;
    Unit_6c8a80(v20, v21, v22, v24);
    if (v25 == v24) {
      v23 = 32;
      goto LABEL_39;
    }
    if (v25 != nullptr) {
      v23 = 40;
    LABEL_39:
      (*(void (**)(__int64))(*v25 + v23))((__int64)v25);
    }
  }
  return 1;
}

__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TryWaste_closure_Invoke(
    __int64 a1, _QWORD* a2)
{
  return GameRoutine_961c00(*a2, *(_QWORD*)(a1 + 8) + 8LL,
                            **(_QWORD**)(a1 + 16));
}

__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TryWaste_closure0_Invoke(
    __int64 a1, _QWORD* a2)
{
  return MapDrawer_8089c0(*a2, **(_QWORD**)(a1 + 8),
                          **(unsigned int**)(a1 + 16));
}

__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TryGive_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  int v4;
  int v5;
  float v6;

  v2 = *a2;
  result = GameRoutine_9107e0(**(_QWORD**)(a1 + 8),
                              *(_QWORD*)(*(_QWORD*)(a1 + 8) + 128LL) +
                                  4LL * *(int*)(a1 + 16));
  if ((result & 1) != 0) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v5 = 2)
             : (v5 = 3),
         (v5 & v4) != 0)) {
      v6 = *(float*)(v2 + 144);
      *(_WORD*)(v2 + 136) = *(_WORD*)(v2 + 136) & 0xFF97 | 0x60;
      if (v6 < 30.0) {
        v6 = 30.0;
      }
      *(float*)(v2 + 144) = v6;
    }
  }
  return result;
}

__int64 game_map_anonymous_ProcMapSeqPhase_TargetData_TrySkill_closure_Invoke(
    __int64 a1, _QWORD* a2)
{
  return GameRoutine_919f50(
      *a2, **(_QWORD**)(a1 + 8),
      *(_QWORD*)(*(_QWORD*)(a1 + 8) + 152LL) + 4LL * *(int*)(a1 + 16), 0);
}

__int64 ProcMapSeqPhase_Destructor(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
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

  *(_QWORD*)a1 = game_map_anonymous_ProcMapSeqPhase_vtable;
  v2 = (_QWORD*)game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v4 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
    v3 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
    v6 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
    v5 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
    v7 = v5 == v6;
    v8 = v3 - 1 + v4;
    v9 = v8 >> 7;
    v10 = v8 & 0x7F;
    v11 = 16 * (v5 - v6) - 1;
    v12 = *(_QWORD*)(v6 + 8 * v9);
    if (v7) {
      v11 = 0;
    }
    v13 = v12 + 32 * v10;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
        *(_DWORD*)v13 & 0xFFFFFFFD |
        (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
    v2[21] = *(_QWORD*)(v13 + 24);
    v14 = *(_QWORD*)(v13 + 16);
    v2[27] = v3 - 1;
    v2[20] = v14;
    if ((unsigned __int64)(v11 - (v3 + v4) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      v15 = *(_QWORD*)(v5 - 8);
      if (v15 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v15);
        v5 = v2[24];
      }
      v2[24] = v5 - 8;
    }
  }
  *(_QWORD*)(a1 + 184) = game_map_BattleInfo_vtable;
  v17 = *(_QWORD*)(a1 + 11488);
  *(_QWORD*)(a1 + 11480) = game_map_BattleArea_vtable;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
    *(_QWORD*)(a1 + 11488) = 0;
  }
  *(_QWORD*)(a1 + 192) = GameData_212d258[0] + 2;
  BattleSide_Destructor(a1 + 2480);
  BattleSide_Destructor(a1 + 1720);
  BattleSide_Destructor(a1 + 960);
  BattleSide_Destructor(a1 + 200);
  v18 = *(_QWORD*)(a1 + 152);
  if (v18 != 0) {
    v19 = *(_QWORD*)(a1 + 160);
    if (v18 == v19) {
      goto LABEL_16;
    }
    do {
      v19 -= 176;
      GameRoutine_849e70(v19);
    } while (v19 != v18);
    v20 = *(_QWORD*)(a1 + 152);
    *(_QWORD*)(a1 + 160) = v18;
    v18 = v20;
    if (v20 != 0) {
    LABEL_16:
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v18);
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcMapSeqPhase_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
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

  *(_QWORD*)a1 = game_map_anonymous_ProcMapSeqPhase_vtable;
  v2 = (_QWORD*)game_ProcGameSkipView_instance_;
  v3 = fw_memory_g_heap_manager_ptr;
  if (game_ProcGameSkipView_instance_ != 0) {
    v5 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
    v4 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
    v7 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
    v6 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
    v8 = v6 == v7;
    v9 = v4 - 1 + v5;
    v10 = v9 >> 7;
    v11 = v9 & 0x7F;
    v12 = 16 * (v6 - v7) - 1;
    v13 = *(_QWORD*)(v7 + 8 * v10);
    if (v8) {
      v12 = 0;
    }
    v14 = v13 + 32 * v11;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
        *(_DWORD*)v14 & 0xFFFFFFFD |
        (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
    v2[21] = *(_QWORD*)(v14 + 24);
    v15 = *(_QWORD*)(v14 + 16);
    v2[27] = v4 - 1;
    v2[20] = v15;
    if ((unsigned __int64)(v12 - (v4 + v5) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      v16 = *(_QWORD*)(v6 - 8);
      if (v16 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v17, v16);
        v6 = v2[24];
      }
      v2[24] = v6 - 8;
    }
  }
  *(_QWORD*)(a1 + 184) = GameData_212d238[0] + 16;
  v18 = *(_QWORD*)(a1 + 11488);
  *(_QWORD*)(a1 + 11480) = GameData_212da50[0] + 2;
  if (v18 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
    *(_QWORD*)(a1 + 11488) = 0;
  }
  *(_QWORD*)(a1 + 192) = GameData_212d258[0] + 2;
  BattleSide_Destructor(a1 + 2480);
  BattleSide_Destructor(a1 + 1720);
  BattleSide_Destructor(a1 + 960);
  BattleSide_Destructor(a1 + 200);
  v19 = *(_QWORD*)(a1 + 152);
  if (v19 != 0) {
    v20 = *(_QWORD*)(a1 + 160);
    if (v19 == v20) {
      goto LABEL_16;
    }
    do {
      v20 -= 176;
      GameRoutine_849e70(v20);
    } while (v20 != v19);
    v21 = *(_QWORD*)(a1 + 152);
    *(_QWORD*)(a1 + 160) = v19;
    v19 = v21;
    if (v21 != 0) {
    LABEL_16:
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v22, v19);
    }
  }
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v23 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v23 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v23, a1);
}

#pragma GCC visibility pop
