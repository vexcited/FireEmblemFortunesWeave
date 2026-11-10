#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
_QWORD* GameRoutine_70f550(_QWORD* result, _QWORD*);
__int64 GameRoutine_1307480(_QWORD);
__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c51e0_alt1(__int64 result) __asm__("GameRoutine_6c51e0");
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(_QWORD);
__int64 GameRoutine_6c6ec0_alt1(__int64) __asm__("GameRoutine_6c6ec0");
__int64 GameRoutine_6cc0a0(_QWORD);
__int64 GameRoutine_6fcce0(__int64);
__int64 GameRoutine_744b00(_QWORD);
__int64 GameRoutine_746890(_QWORD);
__int64 GameRoutine_775580(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_851360(_QWORD);
__int64 GameRoutine_9b11a0(_QWORD, _QWORD, _QWORD);
__int64 ITarget_772f60(_QWORD, _QWORD);
__int64 MapUnitInfo_1828ef0(void);
__int64 MapUnitInfo_1829280(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_UnitItemList_Sort(_QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_UnitPool_Get_alt1(_QWORD,
                               long double) __asm__("game_UnitPool_Get");
__int64 game_Unit_CanSwitchMount(_QWORD);
__int64 game_Unit_EquipFirstWeapon(_QWORD);
__int64 game_Unit_EquipItem_6d8f40(_QWORD, _QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_IsLocked(void);
__int64 game_Unit_MoveItem(_QWORD, _QWORD);
__int64 game_Unit_Unknown6c8f90(_QWORD);
__int64 game_map_MapUtil_CanEnter(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, float);
bool UnitItem_6e8bc0(unsigned __int16*, __int64);
extern _QWORD GameData_1b3b870[5];
extern _UNKNOWN GameData_1abf7a8;
extern _UNKNOWN GameData_1ad2866;
extern _UNKNOWN GameData_1ada1c9;
extern _UNKNOWN GameData_1b01448;
extern _UNKNOWN GameData_1b01488;
extern _UNKNOWN GameData_1b015e8;
extern _UNKNOWN GameData_1b01848;
extern __int16* GameData_212cf08[9];
extern __int64 (*GameData_1f94e30[])();
extern __int64 (*GameData_1f94ed0[])();
extern __int64 (*GameData_1f94f00[])();
extern __int64 (*GameData_1f94f80[])();
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21ca2f0;
extern __int64 GameData_21cd108;
extern __int64 GameData_21cf840;
extern __int64 GameData_21f61c0;
extern __int64 GameData_22400f8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_empty_item;
extern __int64 game_map_UnitFlags_instance_;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d1f8[2];
extern int GameData_21cfa68;
struct PseudoSret snd_play_ff2d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 double, float);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD,
                                                  _QWORD);
void __attribute__((noreturn)) GameRoutine_747270(_QWORD);
_QWORD* Mind_Destructor_743c00(_QWORD* result);
bool Mind_743d50(__int64 a1);
_QWORD* Mind_743dc0(_QWORD* result);
__int64 Mind_743fc0(__int64 a1, __int64 a2);
__int64 Mind_744220(__int64 a1);
__int64 Mind_7447b0(__int64 result);
bool Mind_745050(__int64 a1);
__int64 Mind_7450c0(__int64 a1);
__int64 Mind_745a40(__int64 a1);
__int64 game_map_Mind_UpdateSubTarget(__int64 result);
__int64 Mind_745e80(__int64 a1);
__int64 Mind_746340(__int64 a1, char a2);
__int64 Mind_746a00(__int64 result, unsigned int a2);
_QWORD* game_map_Mind_SetTargetList(__int64 a1, _QWORD* a2, __int64 a3,
                                    __int64 a4);
__int64 Mind_746c60(__int64 a1, char a2, long double a3);
__int64 Mind_746f00(__int64 a1);
__int64 Mind_747180(__int64 a1);
_QWORD* game_Unit_LevelUpSkill(_QWORD* result, unsigned int*);
__int64* game_UnitPool_Get_alt2(_BYTE*) __asm__("game_UnitPool_Get");
__int64 CharacterBuilder_1084780(void);
__int64 Cursor_734a80(__int64, __int64*);
__int64 GameRoutine_6c6da0_alt1(__int64) __asm__("GameRoutine_6c6da0");
__int64 GameRoutine_74b220(_QWORD*, __int64, unsigned int, unsigned int, int);
__int64 GameRoutine_7aac70(__int64, int);
__int64 MapUnitInfo_1828ef0_alt1(__int64 result,
                                 __int64) __asm__("MapUnitInfo_1828ef0");
__int64 Mind_744b00_alt1(_QWORD) __asm__("Mind_744b00");
__int64 UnitActor_81a990(_QWORD);
__int64 UnitActor_81ba20(_QWORD);
__int64 Unit_6c9ef0(_QWORD);
__int64 Unit_6ca760(__int64, _DWORD*);
__int64 Unit_6cb080(_QWORD, _QWORD);
__int64 Unit_6cb080_alt1(__int64, unsigned int*) __asm__("Unit_6cb080");
__int64 Unit_6cb490(_QWORD);
__int64 Unit_6dcf40(__int64, int, char);
__int64 Unit_6dfe00(__int64 result, __int64);
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_HasSkill_alt1(_QWORD*, unsigned int*) __asm__("game_HasSkill");
__int64 game_UnitItemList_Sort_alt1(__int64, unsigned int,
                                    int) __asm__("game_UnitItemList_Sort");
__int64 game_UnitSkillList_GetMaxValue(_QWORD*, __int64*);
__int64
game_Unit_EquipFirstWeapon_alt1(__int64) __asm__("game_Unit_EquipFirstWeapon");
__int64 game_Unit_EquipItem_6ddab0(_QWORD, _QWORD);
__int64 game_Unit_GetParam_alt1(__int64) __asm__("game_Unit_GetParam");
__int64 game_Unit_SetPollution(_QWORD, _QWORD);
__int64 game_Unit_SetPollution_alt1(__int64,
                                    int) __asm__("game_Unit_SetPollution");
__int64 game_Unit_ToggleMount(_QWORD);
__int64 game_Unit_UnequipWeapon(_QWORD);
bool game_Unit_CanSwitchMount_alt1(__int64) __asm__("game_Unit_CanSwitchMount");
extern _QWORD GameData_1b01908[4];
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212ce88[4];
extern __int64* GameData_21309c8[5];
extern __int64 GameData_212d0d0[2];
float Unit_6c7fa0(__int64, __int64);
__int64 Mind_744480(__int64 a1, long double a2);
__int64 Mind_744b00(__int64 a1, long double a2);
__int64 Mind_7456c0(__int64 result, unsigned int* a2);
__int64 Mind_746720(__int64 a1, __int64 a2);
__int64* Mind_746890(__int64 a1);
__int64* Mind_747060(__int64 a1);

_QWORD* Mind_Destructor_743c00(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = result[1585];
  v2 = result;
  *result = GameData_1f94e30;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[1586] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = (_QWORD*)v2[1580];
  if (v6 != nullptr) {
    do {
      v7 = (_QWORD*)*v6;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v8 = 128;
      }
      else {
        v8 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, v6);
      v6 = v7;
    } while (v7 != nullptr);
  }
  v9 = v2[1578];
  v2[1578] = 0;
  if (v9 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v10 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v9);
  }
  *v2 = GameData_1f94ed0;
  if ((_QWORD*)GameData_21cd108 == v2) {
    GameData_21cd108 = 0;
    GameData_21cfa68 = 0;
  }
  return result;
}

bool Mind_743d50(__int64 a1)
{
  unsigned int v1;
  bool v2;
  int v3;
  bool v4;
  __int64 v5;

  v1 = *(unsigned __int8*)(a1 + 20);
  v2 = v1 >= 0x1B;
  v4 = v1 == 27;
  v3 = (1 << v1) & 0x8050368;
  v4 = !v4 && v2 || v3 == 0;
  return !v4 && (*(_DWORD*)(a1 + 56) & 0xFFF) != 0 &&
         (v5 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                          8LL * (*(_DWORD*)(a1 + 56) & 0xFFF))) != 0 &&
         (unsigned int)*(unsigned __int8*)(v5 + 250) - 13 < 2;
}

_QWORD* Mind_743dc0(_QWORD* result)
{
  int v1;
  int v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  *((_BYTE*)result + 20) = 0;
  *(_QWORD*)((char*)result + 44) = 0;
  result[9] = 0;
  result[10] = 0;
  result[11] = 0;
  result[12] = 0;
  result[13] = 0;
  result[14] = 0;
  result[15] = 0;
  result[16] = 0;
  result[17] = 0;
  result[18] = 0;
  result[19] = 0;
  result[20] = 0;
  result[4] = -1;
  *((_DWORD*)result + 10) = -1;
  v1 = *((_DWORD*)result + 6);
  v2 = *((_DWORD*)result + 7);
  result[7] = 0xFFFFFFFF00000000LL;
  result[8] = 0;
  result[21] = 0;
  result[22] = 0;
  result[23] = 0;
  result[24] = 0;
  result[25] = 0;
  result[26] = 0;
  result[27] = 0;
  result[28] = 0;
  result[29] = 0;
  result[30] = 0;
  result[31] = 0;
  result[32] = 0;
  result[33] = 0;
  result[34] = 0;
  result[35] = 0;
  result[36] = 0;
  result[37] = 0;
  result[38] = 0;
  *((_BYTE*)result + 312) = 0;
  *((_DWORD*)result + 80) = 0;
  *((_DWORD*)result + 3155) = 0;
  *((_DWORD*)result + 3) = v1;
  *((_DWORD*)result + 4) = v2;
  *(_DWORD*)((char*)result + 314) = 2559;
  *((_BYTE*)result + 313) = -1;
  *((_WORD*)result + 159) = -1;
  if (result[1581] != 0) {
    v3 = (_QWORD*)result[1580];
    v4 = result;
    if (v3 != nullptr) {
      v5 = fw_memory_g_heap_manager_ptr;
      do {
        v6 = (_QWORD*)*v3;
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v7, v3);
        v3 = v6;
      } while (v6 != nullptr);
    }
    v8 = v4[1579];
    result = v4;
    v4[1580] = 0;
    if (v8 != 0) {
      v9 = v8 & 7;
      if (v8 >= 8) {
        v11 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        v10 = 0;
        do {
          *(_QWORD*)(v4[1578] + 8 * v10) = 0;
          *(_QWORD*)(v4[1578] + 8 * v10 + 8) = 0;
          *(_QWORD*)(v4[1578] + 8 * v10 + 16) = 0;
          *(_QWORD*)(v4[1578] + 8 * v10 + 24) = 0;
          *(_QWORD*)(v4[1578] + 8 * v10 + 32) = 0;
          *(_QWORD*)(v4[1578] + 8 * v10 + 40) = 0;
          *(_QWORD*)(v4[1578] + 8 * v10 + 48) = 0;
          v12 = v4[1578] + 8 * v10;
          v10 += 8;
          *(_QWORD*)(v12 + 56) = 0;
        } while (v11 != v10);
      }
      else {
        v10 = 0;
      }
      if (v9 != 0) {
        v13 = 8 * v10;
        do {
          --v9;
          *(_QWORD*)(v4[1578] + v13) = 0;
          v13 += 8;
        } while (v9 != 0);
      }
    }
    v4[1581] = 0;
  }
  v14 = result[1586];
  v15 = result[1585];
  *((_DWORD*)result + 3166) = 0;
  if (v14 != v15) {
    result[1586] = v15;
  }
  return result;
}

__int64 Mind_743fc0(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v18[4];

  *(_QWORD*)(a1 + 64) = 0;
  v2 = (_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 12) = -1;
  *(_QWORD*)(a1 + 24) = -1;
  *(_QWORD*)(a1 + 32) = -1;
  *(_BYTE*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 12672) = 0;
  *(_BYTE*)(a1 + 20) = 0;
  *(_QWORD*)(a1 + 44) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_DWORD*)(a1 + 40) = -1;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_BYTE*)(a1 + 312) = 0;
  *(_DWORD*)(a1 + 320) = 0;
  *(_DWORD*)(a1 + 12620) = 0;
  *(_QWORD*)(a1 + 56) = 0xFFFFFFFF00000000LL;
  *(_DWORD*)(a1 + 314) = 2559;
  *(_BYTE*)(a1 + 313) = -1;
  *(_WORD*)(a1 + 318) = -1;
  if (*(_QWORD*)(a1 + 12648) != 0) {
    v5 = *(_QWORD**)(a1 + 12640);
    if (v5 != nullptr) {
      v6 = fw_memory_g_heap_manager_ptr;
      do {
        v7 = (_QWORD*)*v5;
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v8, v5);
        v5 = v7;
      } while (v7 != nullptr);
    }
    v9 = *(_QWORD*)(a1 + 12632);
    *(_QWORD*)(a1 + 12640) = 0;
    if (v9 != 0) {
      v10 = v9 & 7;
      if (v9 >= 8) {
        v12 = v9 & 0xFFFFFFFFFFFFFFF8LL;
        v11 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v11) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v11 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v11 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v11 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v11 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v11 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v11 + 48) = 0;
          v13 = *(_QWORD*)(a1 + 12624) + 8 * v11;
          v11 += 8;
          *(_QWORD*)(v13 + 56) = 0;
        } while (v12 != v11);
      }
      else {
        v11 = 0;
      }
      if (v10 != 0) {
        v14 = 8 * v11;
        do {
          --v10;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + v14) = 0;
          v14 += 8;
        } while (v10 != 0);
      }
    }
    *(_QWORD*)(a1 + 12648) = 0;
  }
  v15 = *(_QWORD*)(a1 + 12688);
  v16 = *(_QWORD*)(a1 + 12680);
  *(_DWORD*)(a1 + 12664) = 0;
  if (v15 != v16) {
    *(_QWORD*)(a1 + 12688) = v16;
  }
  if (a2 != 0) {
    *(_BYTE*)(a1 + 8) = *(_BYTE*)(a2 + 2088);
    *(_DWORD*)(a1 + 24) = *(char*)(a2 + 584);
    *(_DWORD*)(a1 + 28) = *(char*)(a2 + 585);
    *(_DWORD*)(a1 + 12) = *(char*)(a2 + 584);
    *(_DWORD*)(a1 + 16) = *(char*)(a2 + 585);
    v18[0] = 10;
    *(_DWORD*)(a1 + 52) = game_Unit_GetParam(a2, v18, 1);
    GameRoutine_70f550(v2, (_QWORD*)(a2 + 828));
    *(_QWORD*)(a1 + 304) = game_Unit_GetJob(a2);
  }
  return a1;
}

__int64 Mind_744220(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;

  v1 = *(_QWORD*)(a1 + 12688);
  v2 = *(_QWORD*)(a1 + 12680);
  if (v1 == v2) {
  LABEL_6:
    *(_BYTE*)(a1 + 8) = 0;
    *(_QWORD*)(a1 + 12672) = 0;
    *(_BYTE*)(a1 + 20) = 0;
    *(_QWORD*)(a1 + 44) = 0;
    *(_QWORD*)(a1 + 72) = 0;
    *(_QWORD*)(a1 + 80) = 0;
    *(_QWORD*)(a1 + 88) = 0;
    *(_QWORD*)(a1 + 96) = 0;
    *(_QWORD*)(a1 + 104) = 0;
    *(_QWORD*)(a1 + 112) = 0;
    *(_QWORD*)(a1 + 120) = 0;
    *(_QWORD*)(a1 + 128) = 0;
    *(_QWORD*)(a1 + 136) = 0;
    *(_QWORD*)(a1 + 144) = 0;
    *(_QWORD*)(a1 + 152) = 0;
    *(_QWORD*)(a1 + 160) = 0;
    *(_QWORD*)(a1 + 12) = -1;
    *(_QWORD*)(a1 + 24) = -1;
    *(_QWORD*)(a1 + 32) = -1;
    *(_QWORD*)(a1 + 168) = 0;
    *(_QWORD*)(a1 + 176) = 0;
    *(_QWORD*)(a1 + 184) = 0;
    *(_QWORD*)(a1 + 192) = 0;
    *(_QWORD*)(a1 + 200) = 0;
    *(_QWORD*)(a1 + 208) = 0;
    *(_QWORD*)(a1 + 216) = 0;
    *(_QWORD*)(a1 + 224) = 0;
    *(_QWORD*)(a1 + 232) = 0;
    *(_QWORD*)(a1 + 240) = 0;
    *(_QWORD*)(a1 + 248) = 0;
    *(_QWORD*)(a1 + 256) = 0;
    *(_QWORD*)(a1 + 264) = 0;
    *(_QWORD*)(a1 + 272) = 0;
    *(_QWORD*)(a1 + 280) = 0;
    *(_QWORD*)(a1 + 288) = 0;
    *(_QWORD*)(a1 + 296) = 0;
    *(_QWORD*)(a1 + 304) = 0;
    *(_DWORD*)(a1 + 40) = -1;
    *(_BYTE*)(a1 + 312) = 0;
    *(_DWORD*)(a1 + 320) = 0;
    *(_DWORD*)(a1 + 12620) = 0;
    *(_QWORD*)(a1 + 56) = 0xFFFFFFFF00000000LL;
    *(_QWORD*)(a1 + 64) = 0;
    *(_DWORD*)(a1 + 314) = 2559;
    *(_BYTE*)(a1 + 313) = -1;
    *(_WORD*)(a1 + 318) = -1;
    if (*(_QWORD*)(a1 + 12648) != 0) {
      v5 = *(_QWORD**)(a1 + 12640);
      if (v5 != nullptr) {
        v6 = fw_memory_g_heap_manager_ptr;
        do {
          v7 = (_QWORD*)*v5;
          if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v8, v5);
          v5 = v7;
        } while (v7 != nullptr);
      }
      v9 = *(_QWORD*)(a1 + 12632);
      *(_QWORD*)(a1 + 12640) = 0;
      if (v9 != 0) {
        v10 = v9 & 7;
        if (v9 >= 8) {
          v13 = v9 & 0xFFFFFFFFFFFFFFF8LL;
          v11 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v11) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v11 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v11 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v11 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v11 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v11 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v11 + 48) = 0;
            v14 = *(_QWORD*)(a1 + 12624) + 8 * v11;
            v11 += 8;
            *(_QWORD*)(v14 + 56) = 0;
          } while (v13 != v11);
        }
        else {
          v11 = 0;
        }
        if (v10 != 0) {
          v15 = 8 * v11;
          do {
            --v10;
            *(_QWORD*)(*(_QWORD*)(a1 + 12624) + v15) = 0;
            v15 += 8;
          } while (v10 != 0);
        }
      }
      v1 = *(_QWORD*)(a1 + 12688);
      v2 = *(_QWORD*)(a1 + 12680);
      *(_QWORD*)(a1 + 12648) = 0;
    }
    *(_DWORD*)(a1 + 12664) = 0;
    if (v1 != v2) {
      *(_QWORD*)(a1 + 12688) = v2;
    }
    return 1;
  }
  else {
    while ((GameRoutine_744b00(a1) & 0xFE) == 0xC) {
      v4 = *(_QWORD*)(a1 + 12688);
      if (v4 == *(_QWORD*)(a1 + 12680) || (*(_BYTE*)(v4 - 40) & 0xFE) != 0xC) {
        break;
      }
      GameRoutine_744b00(a1);
      v1 = *(_QWORD*)(a1 + 12688);
      v2 = *(_QWORD*)(a1 + 12680);
      if (v1 == v2) {
        goto LABEL_6;
      }
    }
    return 0;
  }
}

__int64 Mind_744480(__int64 a1, long double a2)
{
  __int64 v2;
  __int64 i;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  float v15;
  __int128 v16;
  __int128 v17;
  int v18;
  int v19;
  _QWORD* v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  __int128 v35;

  v2 = *(_QWORD*)(a1 + 12688);
  for (i = *(_QWORD*)(a1 + 12680); v2 != i; i = *(_QWORD*)(a1 + 12680)) {
    if ((Mind_744b00_alt1(a1) & 0xFE) != 0xC) {
      return 0;
    }
    v5 = *(_QWORD*)(a1 + 12688);
    if (v5 == *(_QWORD*)(a1 + 12680) || (*(_BYTE*)(v5 - 40) & 0xFE) != 0xC) {
      return 0;
    }
    Mind_744b00_alt1(a1);
    v2 = *(_QWORD*)(a1 + 12688);
  }
  if (*(_BYTE*)(a1 + 8) != 0) {
    v6 = game_UnitPool_Get_alt1(a1 + 8, a2);
    if (v6 != 0) {
      v7 = *(_DWORD*)(a1 + 28);
      v8 = v6;
      *(_BYTE*)(v6 + 584) = *(_DWORD*)(a1 + 24);
      *(_BYTE*)(v6 + 585) = v7;
      v9 = *(_QWORD*)(v6 + 8);
      if (v9 != 0) {
        v10 = *(char*)(v9 + 584);
        if ((v10 & 0x80000000) == 0) {
          v11 = *(char*)(v9 + 585);
          if ((v11 & 0x80000000) == 0) {
            v12 = *(_DWORD*)(v9 + 592);
            v13 = v10 | 0x100;
            v14 = v11 | 0x100;
            v15 = (float)(unsigned int)(v12 - 1) * 2.5;
            if (v12 <= 0) {
              v15 = 0.0;
            }
            *(_QWORD*)&v16 = COERCE_UNSIGNED_INT(
                (float)((float)((float)((float)v13 * 5.0) + 2.5) +
                        -0x1.4000000000000p+10) +
                v15);
            v33 = COERCE_UNSIGNED_INT(
                (float)((float)((float)((float)v14 * 5.0) + 2.5) +
                        -0x1.4000000000000p+10) +
                v15);
            *(float*)&v34 = (float)((float)((float)((float)v13 * 5.0) + 2.5) +
                                    -0x1.4000000000000p+10) +
                            v15;
            *((_QWORD*)&v16 + 1) = v33;
            v35 = v16;
            *(_QWORD*)&v17 = __PAIR64__(
                COERCE_UNSIGNED_INT(Unit_6c7fa0(v9, (__int64)&v35)), v34);
            *((_QWORD*)&v17 + 1) = v33;
            v35 = v17;
            Cursor_734a80(v8 + 48, (__int64*)&v35);
            UnitActor_81ba20(v8);
          }
        }
        if (*(_QWORD*)(v8 + 264) != 0) {
          CharacterBuilder_1084780();
        }
      }
    }
  }
  *(_BYTE*)(a1 + 20) = 0;
  *(_QWORD*)(a1 + 44) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 32) = -1;
  v18 = *(_DWORD*)(a1 + 24);
  v19 = *(_DWORD*)(a1 + 28);
  *(_DWORD*)(a1 + 40) = -1;
  *(_QWORD*)(a1 + 56) = 0xFFFFFFFF00000000LL;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_BYTE*)(a1 + 312) = 0;
  *(_DWORD*)(a1 + 320) = 0;
  *(_DWORD*)(a1 + 12620) = 0;
  *(_DWORD*)(a1 + 12) = v18;
  *(_DWORD*)(a1 + 16) = v19;
  *(_DWORD*)(a1 + 314) = 2559;
  *(_BYTE*)(a1 + 313) = -1;
  *(_WORD*)(a1 + 318) = -1;
  if (*(_QWORD*)(a1 + 12648) != 0) {
    v20 = *(_QWORD**)(a1 + 12640);
    if (v20 != nullptr) {
      v21 = fw_memory_g_heap_manager_ptr;
      do {
        v22 = (_QWORD*)*v20;
        if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) != 0) {
          v23 = 128;
        }
        else {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v23, v20);
        v20 = v22;
      } while (v22 != nullptr);
    }
    v24 = *(_QWORD*)(a1 + 12632);
    *(_QWORD*)(a1 + 12640) = 0;
    if (v24 != 0) {
      v25 = v24 & 7;
      if (v24 >= 8) {
        v28 = v24 & 0xFFFFFFFFFFFFFFF8LL;
        v26 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v26) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v26 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v26 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v26 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v26 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v26 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v26 + 48) = 0;
          v29 = *(_QWORD*)(a1 + 12624) + 8 * v26;
          v26 += 8;
          *(_QWORD*)(v29 + 56) = 0;
        } while (v28 != v26);
      }
      else {
        v26 = 0;
      }
      if (v25 != 0) {
        v30 = 8 * v26;
        do {
          --v25;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + v30) = 0;
          v30 += 8;
        } while (v25 != 0);
      }
    }
    *(_QWORD*)(a1 + 12648) = 0;
  }
  v31 = *(_QWORD*)(a1 + 12688);
  v32 = *(_QWORD*)(a1 + 12680);
  *(_DWORD*)(a1 + 12664) = 0;
  if (v31 != v32) {
    *(_QWORD*)(a1 + 12688) = v32;
  }
  return 1;
}

__int64 Mind_7447b0(__int64 result)
{
  _BYTE* v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int8* v11;
  unsigned __int64 v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  unsigned __int64 v19;
  __int64 v20;
  char v21;
  char v22;
  int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;

  v1 = (_BYTE*)(result + 8);
  if (*(_BYTE*)(result + 8) == 0) {
    return result;
  }
  v2 = result;
  result = game_UnitPool_Get(result + 8);
  if (result == 0) {
    return result;
  }
  v3 = result;
  if ((game_Unit_CanSwitchMount(result) & 1) != 0) {
    v4 = *(_DWORD*)(v3 + 416);
    if ((v4 & 0x40000) != 0) {
      *(_DWORD*)(v3 + 416) = v4 & 0xFFFBFFFF;
      GameRoutine_6cc0a0(v3);
    }
  }
  if (*v1 != 0) {
    v5 = game_UnitPool_Get(v1);
    if (v5 != 0) {
      LOBYTE(v27) = 10;
      *(_DWORD*)(v2 + 52) = game_Unit_GetParam(v5, &v27, 1);
    }
  }
  v27 = v26;
  v6 = *(_QWORD*)(v2 + 12672);
  if ((v6 & 0x400000) != 0) {
    v19 = v6 & 0xFFFFFFFFFE3FFFFFLL;
    goto LABEL_28;
  }
  v7 = *(_QWORD*)(v2 + 12688);
  v8 = *(_QWORD*)(v2 + 12680);
  v9 = v6 | 0x400000;
  *(_QWORD*)(v2 + 12672) = v6 | 0x400000;
  v10 = v7 - v8;
  if (v10 != 0) {
    v11 = (unsigned __int8*)(v8 + 4);
    v12 = 0xCCCCCCCCCCCCCCCDLL * (v10 >> 3);
    while (1) {
      v13 = *(v11 - 3);
      v14 = *(v11 - 1);
      v15 = *(v11 - 2);
      v17 = *v11;
      v11 += 40;
      v16 = v17;
      if (v13 != v14 || v15 != v16) {
        break;
      }
      if (--v12 == 0) {
        goto LABEL_20;
      }
    }
  LABEL_26:
    v9 = v6 | 0xC00000;
    *(_QWORD*)(v2 + 12672) = v6 | 0xC00000;
    if ((v6 & 0x10) != 0) {
      goto LABEL_27;
    }
    goto LABEL_23;
  }
LABEL_20:
  if (*(_DWORD*)(v2 + 24) != *(_DWORD*)(v2 + 12) ||
      *(_DWORD*)(v2 + 28) != *(_DWORD*)(v2 + 16)) {
    goto LABEL_26;
  }
  if ((v6 & 0x10) != 0) {
  LABEL_27:
    v19 = v9 | 0x1000000;
  LABEL_28:
    *(_QWORD*)(v2 + 12672) = v19;
    result = v2 + 8;
    if (*(_BYTE*)(v2 + 8) == 0) {
      return result;
    }
    goto LABEL_29;
  }
LABEL_23:
  result = v2 + 8;
  if (*(_BYTE*)(v2 + 8) == 0) {
    return result;
  }
LABEL_29:
  result = game_UnitPool_Get(result);
  if (result != 0) {
    v20 = result;
    if (*(_WORD*)(result + 1952) == 0 &&
        (game_Unit_EquipFirstWeapon(result) & 1) != 0) {
      v21 = game_UnitItemList_Sort(v20 + 828, 0, 6);
      v22 = game_UnitItemList_Sort(v20 + 828, 6, 24);
      if ((v21 & 1) != 0 || (v22 & 1) != 0) {
        v23 = *(_DWORD*)(v20 + 416);
        if ((v23 & 0x10000000) == 0) {
          *(_DWORD*)(v20 + 416) = v23 | 0x10000000;
          GameRoutine_6c51e0(v20);
          GameRoutine_6c6da0(v20);
          GameRoutine_6c6ec0(v20);
          *(_DWORD*)(v20 + 416) &= ~0x10000000u;
        }
      }
      if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
          (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
        v24 = *(_QWORD*)(v20 + 440);
        if (v24 != 0 && *(unsigned __int8*)(v24 + 16) <= 8u &&
            game_map_UnitFlags_instance_ != 0) {
          v25 = *(unsigned __int8*)(v20 + 2088);
          if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v25) & 1) != 0) {
            *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v25) |= 2u;
          }
        }
      }
    }
    result = GameData_21cf840;
    if (GameData_21cf840 != 0 && *(int*)(GameData_21cf840 + 16) <= 0) {
      *(_BYTE*)(GameData_21cf840 + 360) = 1;
      return MapUnitInfo_1828ef0();
    }
  }
  return result;
}

__int64 Mind_744b00(__int64 a1, long double a2)
{
  _BYTE* v2;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  unsigned __int8 v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  long double v17;
  int v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  int v28;
  int v29;
  int v30;
  char v31;
  __int64 v32;
  long double v33;
  __int64 v35;
  __int64 v36;
  long double v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 i;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  char v45;
  char v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  int v52;
  int v53;
  unsigned int v54;
  unsigned int v55;
  float v56;
  __int128 v57;
  __int128 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned int v62;
  __int128 v63;

  v2 = (_BYTE*)(a1 + 8);
  if (*(_BYTE*)(a1 + 8) != 0) {
    result = game_UnitPool_Get_alt1(a1 + 8, a2);
    if (result == 0) {
      return result;
    }
    v5 = *(_QWORD*)(a1 + 12688);
    if (v5 != *(_QWORD*)(a1 + 12680)) {
      v6 = *(_QWORD*)(a1 + 12672);
      v7 = result;
      *(_BYTE*)(a1 + 20) = *(_BYTE*)(v5 - 40);
      *(_DWORD*)(a1 + 12) = *(char*)(v5 - 39);
      *(_DWORD*)(a1 + 16) = *(char*)(v5 - 38);
      *(_DWORD*)(a1 + 24) = *(char*)(v5 - 37);
      *(_DWORD*)(a1 + 28) = *(char*)(v5 - 36);
      *(_QWORD*)(a1 + 12672) = v6 & 0x3000000000000LL | *(_QWORD*)(v5 - 8);
      *(_DWORD*)(a1 + 52) = *(__int16*)(v5 - 26);
      *(_DWORD*)(a1 + 56) = 0;
      *(_BYTE*)(result + 584) = *(_BYTE*)(v5 - 39);
      *(_BYTE*)(result + 585) = *(_BYTE*)(v5 - 38);
      game_Unit_SetPollution(result, (unsigned int)*(__int16*)(v5 - 34));
      v8 = *(__int16*)(v5 - 32);
      v9 = *(unsigned __int8*)(v7 + 500);
      if (v8 != v9) {
        v10 = Unit_6c9ef0(v7);
        if (v10 >= v8) {
          v11 = v8;
        }
        else {
          v11 = v10;
        }
        if (v8 < 0) {
          v11 = 0;
        }
        *(_BYTE*)(v7 + 500) = v11;
        if (v9 != v11) {
          v12 = *(unsigned __int16*)(v7 + 492);
          LOBYTE(v63) = 0;
          v13 = game_Unit_GetParam(v7, &v63, 1);
          if (*(_WORD*)(v7 + 494) != 0 &&
              v12 != *(unsigned __int16*)(v7 + 494)) {
            *(_WORD*)(v7 + 494) = 0;
          }
          if (v13 >= (__int16)v12) {
            v14 = (__int16)v12;
          }
          else {
            v14 = v13;
          }
          if ((v12 & 0x8000u) != 0) {
            v14 = 0;
          }
          if (v14 != *(__int16*)(v7 + 492)) {
            *(_WORD*)(v7 + 492) = v14;
          }
        }
      }
      v15 = *(unsigned __int16*)(v5 - 30);
      LOBYTE(v63) = 0;
      v16 = game_Unit_GetParam(v7, &v63, 1);
      if (*(_WORD*)(v7 + 494) != 0 && v15 != *(unsigned __int16*)(v7 + 494)) {
        *(_WORD*)(v7 + 494) = 0;
      }
      if (v16 >= (__int16)v15) {
        v18 = (__int16)v15;
      }
      else {
        v18 = v16;
      }
      if ((v15 & 0x8000u) != 0) {
        v18 = 0;
      }
      if (v18 != *(__int16*)(v7 + 492)) {
        *(_WORD*)(v7 + 492) = v18;
      }
      v19 = *(_QWORD*)(v5 - 16);
      if (v19 != 0) {
        v20 = *(_WORD*)(v19 + 16) & 0xFFF;
      }
      else {
        v20 = 0;
      }
      v21 = *(_QWORD*)(v7 + 1456);
      if ((v20 >> 5) + 1 <=
              (unsigned __int64)((*(_QWORD*)(v7 + 1464) - v21) >> 2) &&
          ((*(_DWORD*)(v21 + 4LL * (v20 >> 5)) >> v20) & 1) != 0) {
        v22 = *(_QWORD*)(v7 + 1496);
        v23 = *(_QWORD*)(v7 + 1488);
        if (v22 != v23) {
          v24 = (v22 - v23) >> 2;
          v25 = 0;
          while (((*(_DWORD*)(v23 + 4 * v25) ^ v20) & 0xFFF) != 0) {
            if (v24 == ++v25) {
              goto LABEL_47;
            }
          }
          if ((v25 & 0x8000000000000000LL) == 0) {
            v26 = *(_DWORD*)(v23 + 4LL * (unsigned int)v25);
            v27 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                             8LL * (v26 & 0xFFF));
            v28 = *(unsigned __int8*)(v27 + 104);
            v29 = *(unsigned __int8*)(v27 + 273);
            if ((unsigned int)(v28 - 5) >= 2) {
              v30 = 0;
            }
            else {
              v30 = (v26 >> 19) & 0x1F;
            }
            *(_DWORD*)(v23 + 4LL * (unsigned int)v25) =
                v26 & 0xFFF80FFF |
                (((v30 - *(__int16*)(v5 - 28) + v29) &
                  ~((v30 - *(__int16*)(v5 - 28) + v29) >> 31) & 0x7F)
                 << 12);
          }
        }
      }
    LABEL_47:
      if (*v2 != 0) {
        v31 = *(_BYTE*)(v5 - 40);
        v32 = game_UnitPool_Get_alt1(v2, v17);
        if ((v31 & 0xFE) == 0xC && v32 != 0) {
          game_Unit_ToggleMount(v32);
        }
        if (*v2 != 0) {
          v35 = *(_QWORD*)(v5 - 16);
          v36 = game_UnitPool_Get_alt1(v2, v33);
          if (v35 != 0) {
            v38 = v36;
            if (v36 != 0) {
              v39 = *(_QWORD*)(v35 + 24);
              v40 = *(_QWORD*)(v39 + 640);
              for (i = *(_QWORD*)(v39 + 648); v40 != i; v40 += 4) {
                Unit_6cb080(v38, v40);
              }
              if (*(_QWORD*)(v35 + 592) != 0) {
                Unit_6dfe00(v38, 0);
              }
            }
          }
          if (*v2 != 0) {
            v42 = *(_QWORD*)(v5 - 24);
            v43 = game_UnitPool_Get_alt1(v2, v37);
            if (v43 != 0) {
              v44 = v43;
              if (v42 != 0) {
                if (*(_WORD*)(v43 + 1952) == 0 &&
                    (game_Unit_EquipItem_6ddab0(v43, v42) & 1) != 0) {
                  v45 = game_UnitItemList_Sort(v44 + 828, 0, 6);
                  v46 = game_UnitItemList_Sort(v44 + 828, 6, 24);
                  if ((v45 & 1) != 0 || (v46 & 1) != 0) {
                    v47 = *(_DWORD*)(v44 + 416);
                    if ((v47 & 0x10000000) == 0) {
                      *(_DWORD*)(v44 + 416) = v47 | 0x10000000;
                      game_6c51e0(v44);
                      GameRoutine_6c6da0(v44);
                      game_6c6ec0(v44);
                      *(_DWORD*)(v44 + 416) &= ~0x10000000u;
                    }
                  }
                  goto LABEL_71;
                }
              }
              else if (*(_WORD*)(v43 + 1952) != 0 &&
                       (game_Unit_UnequipWeapon(v43) & 1) != 0) {
              LABEL_71:
                if (GameData_22400f8 != 0 &&
                    *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
                    (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
                  v48 = *(_QWORD*)(v44 + 440);
                  if (v48 != 0 && *(unsigned __int8*)(v48 + 16) <= 8u &&
                      game_map_UnitFlags_instance_ != 0) {
                    v49 = *(unsigned __int8*)(v44 + 2088);
                    if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v49) &
                         1) != 0) {
                      *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v49) |= 2u;
                    }
                  }
                }
              }
            }
          }
        }
      }
      v50 = *(_QWORD*)(v7 + 8);
      if (v50 != 0) {
        v51 = *(char*)(v50 + 584);
        if ((v51 & 0x80000000) == 0) {
          v52 = *(char*)(v50 + 585);
          if ((v52 & 0x80000000) == 0) {
            v53 = *(_DWORD*)(v50 + 592);
            v54 = v51 | 0x100;
            v55 = v52 | 0x100;
            v56 = (float)(unsigned int)(v53 - 1) * 2.5;
            if (v53 <= 0) {
              v56 = 0.0;
            }
            *(_QWORD*)&v57 = COERCE_UNSIGNED_INT(
                (float)((float)((float)((float)v54 * 5.0) + 2.5) +
                        -0x1.4000000000000p+10) +
                v56);
            v61 = COERCE_UNSIGNED_INT(
                (float)((float)((float)((float)v55 * 5.0) + 2.5) +
                        -0x1.4000000000000p+10) +
                v56);
            *(float*)&v62 = (float)((float)((float)((float)v54 * 5.0) + 2.5) +
                                    -0x1.4000000000000p+10) +
                            v56;
            *((_QWORD*)&v57 + 1) = v61;
            v63 = v57;
            *(_QWORD*)&v58 = __PAIR64__(
                COERCE_UNSIGNED_INT(Unit_6c7fa0(v50, (__int64)&v63)), v62);
            *((_QWORD*)&v58 + 1) = v61;
            v63 = v58;
            Cursor_734a80(v7 + 48, (__int64*)&v63);
            UnitActor_81ba20(v7);
          }
        }
        if (*(_QWORD*)(v7 + 264) != 0) {
          CharacterBuilder_1084780();
        }
      }
      Unit_6cb490(v7);
      v59 = UnitActor_81a990(v7);
      v60 = *(_QWORD*)(a1 + 12688);
      if (v60 == *(_QWORD*)(a1 + 12680)) {
        if (*(_QWORD*)(a1 + 12696) - v60 == -40) {
          while (1) {
            *(_QWORD*)v60 = 0xFFFFFFFF00LL;
            *(_QWORD*)(v60 + 14) = 0;
            *(_QWORD*)(v60 + 22) = 0;
            *(_QWORD*)(v60 + 30) = 0;
            *(_WORD*)(v60 + 38) = 0;
            *(_QWORD*)(v60 + 6) = 0;
            v60 += 40;
          }
        }
        GameRoutine_747270(v59);
      }
      *(_QWORD*)(a1 + 12688) = v60 - 40;
      if (GameData_21cf840 != 0 && *(int*)(GameData_21cf840 + 16) <= 0) {
        *(_BYTE*)(GameData_21cf840 + 360) = 1;
        MapUnitInfo_1828ef0();
      }
      return *(unsigned __int8*)(v5 - 40);
    }
  }
  return 0;
}

bool Mind_745050(__int64 a1)
{
  unsigned int v1;
  bool v2;
  int v3;
  bool v4;
  __int64 v5;

  v1 = *(unsigned __int8*)(a1 + 20);
  v2 = v1 > 0x1B;
  v3 = (1 << v1) & 0x8050368;
  v4 = v2 || v3 == 0;
  return !v4 && (*(_DWORD*)(a1 + 56) & 0xFFF) != 0 &&
         (v5 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                          8LL * (*(_DWORD*)(a1 + 56) & 0xFFF))) != 0 &&
         *(_WORD*)(v5 + 328) != 0 && (*(_BYTE*)(a1 + 12674) & 4) == 0;
}

__int64 Mind_7450c0(__int64 a1)
{
  unsigned int v2;
  __int64 result;
  __int64 v4;
  bool v5;
  int v6;
  __int64 v8;
  int v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned int v31;
  int v32;
  unsigned int v34;
  int v35;
  bool v36;
  unsigned int v37;
  __int64 v38;
  int v39;
  int v40;
  __int64 v41;
  int v42;
  int v43;
  int v44;
  unsigned __int8* v45;
  unsigned __int8* v46;
  unsigned __int8* v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  int v50;
  __int64 v51;
  unsigned __int8* v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int8* v58;
  int v59;
  unsigned __int8* v60;
  _QWORD* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned int v67;
  __int64 v68;
  __int64 v70;
  __int16 v71;
  __int16 v72;
  __int16 v73;
  __int16 v74;
  __int16 v75;
  __int64 v76;
  __int64 v77;

  v2 = *(unsigned __int8*)(a1 + 20);
  result = 0;
  if (v2 > 0x1B) {
    return result;
  }
  if (((1 << v2) & 0x8040368) != 0) {
    if ((*(_DWORD*)(a1 + 56) & 0xFFF) != 0) {
      v4 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                      8LL * (*(_DWORD*)(a1 + 56) & 0xFFF));
      if (v4 != 0 && (unsigned int)*(unsigned __int8*)(v4 + 250) - 13 < 2) {
        goto LABEL_23;
      }
    }
    v5 = v2 > 0x1B;
    v6 = (1 << v2) & 0x8050368;
    if (v5 || v6 == 0) {
      return 0;
    }
    if ((*(_DWORD*)(a1 + 56) & 0xFFF) == 0) {
      return 0;
    }
    v8 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                    8LL * (*(_DWORD*)(a1 + 56) & 0xFFF));
    if (v8 == 0 || *(_WORD*)(v8 + 328) == 0 ||
        (*(_BYTE*)(a1 + 12674) & 4) != 0) {
      return 0;
    }
    if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v8 + 104)) & 1) !=
        0) {
      v9 = *(unsigned __int8*)(v8 + 106);
      if (*(_BYTE*)(v8 + 106) == 0 || v9 == 6) {
        v11 = *(_QWORD*)(v8 + 576);
        if (v11 != 0) {
        LABEL_45:
          v31 = *(unsigned __int8*)(v11 + 72);
          v32 = *(unsigned __int8*)(v11 + 73);
          if (v31 <= 7 && v32 == 1) {
            return 0;
          }
        }
      }
      else if (v9 == 1) {
        v11 = *(_QWORD*)(v8 + 576);
        if (v11 == 0) {
          return 0;
        }
        goto LABEL_45;
      }
    }
    if ((*(unsigned __int8*)(v8 + 283) | *(unsigned __int8*)(v8 + 282)) == 0) {
      v34 = *(unsigned __int8*)(v8 + 106);
      v5 = v34 > 4;
      v35 = (1 << v34) & 0x16;
      v36 = v5 || v35 == 0;
      if (v36 && (*(_QWORD*)(v8 + 608) | *(_QWORD*)(v8 + 664)) == 0) {
        v67 = *(unsigned __int8*)(v8 + 250);
        v5 = v67 > 0x22;
        v68 = (1LL << v67) & 0x600000001LL;
        if (!v5 && v68 != 0) {
          goto LABEL_23;
        }
      }
    }
    return 0;
  }
  if (((1 << v2) & 0x13000) == 0) {
    return result;
  }
LABEL_23:
  if (*(_BYTE*)(a1 + 8) != 0) {
    v12 = game_UnitPool_Get(a1 + 8);
    if (v12 != 0) {
      if (*(_WORD*)(v12 + 1952) != 0) {
        v13 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                         8LL * *(unsigned __int16*)(v12 + 1952));
      }
      else {
        v13 = 0;
      }
      v25 = *(_DWORD*)(a1 + 56) & 0xFFF;
      if ((*(_DWORD*)(a1 + 56) & 0xFFF) != 0) {
        v18 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v25);
        if (v18 != 0) {
          LODWORD(v25) = *(_WORD*)(v18 + 16) & 0xFFF;
        }
        else {
          LODWORD(v25) = 0;
        }
      }
      else {
        v18 = 0;
      }
      v26 = *(_QWORD*)(v12 + 1456);
      v20 = *(unsigned __int8*)(a1 + 20);
      v24 = *(unsigned __int8*)(a1 + 12);
      v23 = *(unsigned __int8*)(a1 + 16);
      v22 = *(unsigned __int8*)(a1 + 24);
      v21 = *(unsigned __int8*)(a1 + 28);
      v14 = *(unsigned __int8*)(v12 + 499);
      v15 = *(unsigned __int8*)(v12 + 500);
      v16 = *(unsigned __int16*)(v12 + 492);
      if (((unsigned int)v25 >> 5) + 1 >
          (unsigned __int64)((*(_QWORD*)(v12 + 1464) - v26) >> 2)) {
        goto LABEL_60;
      }
      if (((*(_DWORD*)(v26 + 4LL * ((unsigned int)v25 >> 5)) >> v25) & 1) ==
          0) {
        goto LABEL_60;
      }
      v27 = *(_QWORD*)(v12 + 1496);
      v28 = *(_QWORD*)(v12 + 1488);
      if (v27 == v28) {
        goto LABEL_60;
      }
      v29 = (v27 - v28) >> 2;
      v30 = 0;
      while (((*(_DWORD*)(v28 + 4 * v30) ^ (unsigned int)v25) & 0xFFF) != 0) {
        if (v29 == ++v30) {
          goto LABEL_60;
        }
      }
      if (v30 < 0) {
      LABEL_60:
        v12 = 0xFFFF;
      }
      else {
        v37 = *(_DWORD*)(v28 + 4LL * (unsigned int)v30);
        v38 = v37 & 0xFFF;
        v39 = (v37 >> 19) & 0x1F;
        v40 = (v37 >> 12) & 0x7F;
        v41 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v38);
        v42 = *(unsigned __int8*)(v41 + 104);
        v43 = *(unsigned __int8*)(v41 + 273);
        if ((unsigned int)(v42 - 5) >= 2) {
          v44 = 0;
        }
        else {
          v44 = v39;
        }
        v12 = (v44 - v40 + v43) & (unsigned int)~((v44 - v40 + v43) >> 31);
      }
      v17 = *(unsigned __int16*)(a1 + 52);
      v19 = *(_QWORD*)(a1 + 12672);
      goto LABEL_62;
    }
    v14 = 0;
    v15 = 0;
    v16 = 0;
  }
  else {
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v12 = 0;
  }
  v17 = 0;
  v13 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 255;
  v22 = 255;
  v23 = 255;
  v24 = 255;
LABEL_62:
  v45 = *(unsigned __int8**)(a1 + 12688);
  v46 = *(unsigned __int8**)(a1 + 12680);
  if (v45 == v46) {
  LABEL_79:
    v47 = *(unsigned __int8**)(a1 + 12688);
  }
  else {
    v47 = *(unsigned __int8**)(a1 + 12680);
    v48 = 0xCCCCCCCCCCCCCCCDLL * ((v45 - v46) >> 3);
    while (*v47 != v20 || v47[1] != v24 || v47[2] != v23 || v47[3] != v22 ||
           v47[4] != v21 || *((unsigned __int16*)v47 + 3) != v14 ||
           *((unsigned __int16*)v47 + 4) != v15 ||
           *((unsigned __int16*)v47 + 5) != v16 || *((_QWORD*)v47 + 4) != v19 ||
           *((_QWORD*)v47 + 2) != v13 || *((_QWORD*)v47 + 3) != v18 ||
           *((unsigned __int16*)v47 + 6) != (_DWORD)v12 ||
           *((unsigned __int16*)v47 + 7) != v17) {
      --v48;
      v47 += 40;
      if (v48 == 0) {
        goto LABEL_79;
      }
    }
    *(_QWORD*)(a1 + 12688) = v47;
  }
  v49 = *(_QWORD*)(a1 + 12696);
  if ((unsigned __int64)v47 >= v49) {
    v52 = (unsigned __int8*)(v47 - v46);
    v53 = 1 - 0x3333333333333333LL * ((v47 - v46) >> 3);
    if (v53 > 0x666666666666666LL) {
      GameRoutine_747270(v12);
    }
    v70 = v19;
    v71 = v17;
    v72 = v12;
    v75 = v16;
    v73 = v14;
    v74 = v15;
    v54 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v49 - (_QWORD)v46) >> 3);
    v76 = v13;
    v77 = v18;
    if (2 * v54 > v53) {
      v53 = 2 * v54;
    }
    if (v54 >= 0x333333333333333LL) {
      v55 = 0x666666666666666LL;
    }
    else {
      v55 = v53;
    }
    if (v55 > 0x666666666666666LL) {
      GameRoutine_60a210(v12);
    }
    v56 = 5 * v55;
    v57 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         40 * v55, 16, 0);
    v58 = &v52[v57];
    *v58 = v20;
    v59 = (v21 << 24) | (v22 << 16) | (v23 << 8);
    v51 = (__int64)&v52[v57 + 40];
    *(_DWORD*)(v58 + 1) = v59 | v24;
    *((_WORD*)v58 + 4) = v74;
    *((_WORD*)v58 + 3) = v73;
    *((_WORD*)v58 + 5) = v75;
    *((_WORD*)v58 + 6) = v72;
    *((_WORD*)v58 + 7) = v71;
    *((_QWORD*)v58 + 2) = v76;
    *((_QWORD*)v58 + 3) = v77;
    *((_QWORD*)v58 + 4) = v70;
    if (v46 != v47) {
      v60 = v46;
      v61 = (_QWORD*)v57;
      do {
        *v61 = *(_QWORD*)v60;
        v62 = *((_QWORD*)v60 + 1);
        v63 = *((_QWORD*)v60 + 2);
        v64 = *((_QWORD*)v60 + 3);
        v65 = *((_QWORD*)v60 + 4);
        v60 += 40;
        v61[3] = v64;
        v61[4] = v65;
        v61[1] = v62;
        v61[2] = v63;
        v61 += 5;
      } while (v60 != v47);
    }
    *(_QWORD*)(a1 + 12680) = v57;
    *(_QWORD*)(a1 + 12688) = v51;
    *(_QWORD*)(a1 + 12696) = v57 + 8 * v56;
    if (v46 != nullptr) {
      v66 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v66 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v66, v46);
    }
  }
  else {
    *v47 = v20;
    *((_WORD*)v47 + 3) = v14;
    *((_WORD*)v47 + 4) = v15;
    *((_WORD*)v47 + 5) = v16;
    v50 = (v21 << 24) | (v22 << 16) | (v23 << 8);
    *((_WORD*)v47 + 6) = v12;
    *((_WORD*)v47 + 7) = v17;
    v51 = (__int64)(v47 + 40);
    *(_DWORD*)(v47 + 1) = v50 | v24;
    *((_QWORD*)v47 + 2) = v13;
    *((_QWORD*)v47 + 3) = v18;
    *((_QWORD*)v47 + 4) = v19;
  }
  result = 1;
  *(_QWORD*)(a1 + 12688) = v51;
  return result;
}

__int64 Mind_7456c0(__int64 result, unsigned int* a2)
{
  _BYTE* v2;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  char v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  unsigned int* v22;
  unsigned int* v23;
  __int64 v24;
  __int64 v25;
  char v26;
  char v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;

  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v2 = (_BYTE*)(result + 8);
  if (*(_BYTE*)(result + 8) != 0) {
    result = (__int64)game_UnitPool_Get_alt2((_BYTE*)(result + 8)),
    v32 = COERCE_AS(__typeof__(v32),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if (result != 0 && (*(_WORD*)a2 & 0xFFF) != 0) {
      v4 = result;
      game_Unit_LevelUpSkill((_QWORD*)result, a2),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v5 = GameData_212c880[0];
      v6 = *a2 & 0xFFF;
      v7 = *(_QWORD*)(*GameData_212c880[0] + 64);
      v8 = *(char*)(*(_QWORD*)(v7 + 8 * v6) + 276LL);
      v9 = game_g_shared_system_skills_ptr;
      if (*(_BYTE*)(*(_QWORD*)(v7 + 8 * v6) + 276LL) != 0) {
        v10 = *(unsigned int*)((char*)((_UNKNOWN*)0x160LL) +
                               game_g_shared_system_skills_ptr);
        v11 = *(_QWORD*)(v4 + 1744);
        if (((v10 >> 5) & 0x7F) + 1 > (*(_QWORD*)(v4 + 1752) - v11) >> 2 ||
            ((*(_DWORD*)(v11 + 4 * ((v10 >> 5) & 0x7F)) >> v10) & 1) == 0) {
          v12 = *(_QWORD*)(v4 + 440);
          v13 = v12 != 0 ? *(_BYTE*)(v12 + 16) : 9;
          if (((1 << v13) & 6) == 0) {
            *(_DWORD*)(v4 + 416) |= 0x8000u;
            game_Unit_SetPollution_alt1(v4, *(unsigned __int8*)(v4 + 499) + v8),
                v32 =
                    COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v7 = *(_QWORD*)(*v5 + 64);
            v6 = *a2 & 0xFFF;
          }
        }
      }
      v14 = *(_QWORD*)(v7 + 8 * v6);
      if (*(_BYTE*)(v14 + 275) == 0 ||
          (v15 = *(unsigned int*)((char*)((_UNKNOWN*)0x164LL) + v9),
           v16 = *(_QWORD*)(v4 + 1744),
           ((v15 >> 5) & 0x7F) + 1 <= (*(_QWORD*)(v4 + 1752) - v16) >> 2) &&
              ((*(_DWORD*)(v16 + 4 * ((v15 >> 5) & 0x7F)) >> v15) & 1) != 0 ||
          ((v17 = *(_QWORD*)(v4 + 440)) == 0 ? (v18 = 9)
                                             : (v18 = *(_BYTE*)(v17 + 16)),
           ((1 << v18) & 6) != 0 || (v32 = game_Unit_GetParam_alt1(v4)) < 1)) {
        v19 = 0;
      }
      else {
        v19 = (v32 * (unsigned int)*(unsigned __int8*)(v14 + 275) + 99) / 0x64;
      }
      result = Unit_6dcf40(v4, v19, 0),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if ((_DWORD)result != 0) {
        result = GameRoutine_7aac70(v4, result),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      v20 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8LL * (*a2 & 0xFFF));
      v21 = *(_QWORD*)(v20 + 24);
      v22 = *(unsigned int**)(v21 + 448);
      v23 = *(unsigned int**)(v21 + 456);
      if (v22 != v23) {
        if (*(_BYTE*)(v20 + 250) == 31) {
          do {
            result = Unit_6cb080_alt1(v4, v22++),
            v32 = COERCE_AS(__typeof__(v32),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          } while (v22 != v23);
        }
        else {
          do {
            result = Unit_6ca760(v4, v22++),
            v32 = COERCE_AS(__typeof__(v32),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          } while (v22 != v23);
        }
      }
      v24 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8LL * (*a2 & 0xFFF)) +
                       592LL);
      if (v24 != 0) {
        result = Unit_6dfe00(v4, v24),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        if (*v2 != 0) {
          result = (__int64)game_UnitPool_Get_alt2(v2),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          if (result != 0) {
            v25 = result;
            if (*(_WORD*)(result + 1952) == 0 &&
                (game_Unit_EquipFirstWeapon_alt1(result) & 1) != 0) {
              v26 = game_UnitItemList_Sort_alt1(v25 + 828, 0, 6),
              v32 = COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              v27 = game_UnitItemList_Sort_alt1(v25 + 828, 6u, 24),
              v32 = COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              if ((v26 & 1) != 0 || (v27 & 1) != 0) {
                v28 = *(_DWORD*)(v25 + 416);
                if ((v28 & 0x10000000) == 0) {
                  *(_DWORD*)(v25 + 416) = v28 | 0x10000000;
                  game_6c51e0(v25),
                      v32 = COERCE_AS(
                          __typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  GameRoutine_6c6da0_alt1(v25),
                      v32 = COERCE_AS(
                          __typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  game_6c6ec0(v25),
                      v32 = COERCE_AS(
                          __typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  *(_DWORD*)(v25 + 416) &= ~0x10000000u;
                }
              }
              v29 = *GameData_21309c8[0];
              if (*GameData_21309c8[0] != 0 && *(_BYTE*)(v29 + 8) == 1 &&
                  (*(_BYTE*)(v29 + 9) & 1) == 0) {
                v30 = *(_QWORD*)(v25 + 440);
                if (v30 != 0 && *(unsigned __int8*)(v30 + 16) <= 8u &&
                    game_map_UnitFlags_instance_ != 0) {
                  v31 = *(unsigned __int8*)(v25 + 2088);
                  if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v31) & 1) !=
                      0) {
                    *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v31) |= 2u;
                  }
                }
              }
            }
            result = *(_QWORD*)GameData_212d0d0[0];
            if (*(_QWORD*)GameData_212d0d0[0] != 0 &&
                *(int*)(result + 16) <= 0) {
              v33 = *(_QWORD*)(result + 160);
              *(_BYTE*)(result + 360) = 1;
              return MapUnitInfo_1828ef0_alt1(result, v33);
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 Mind_745a40(__int64 a1)
{
  __int64 result;
  int v3;
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 v7;
  void* v8;

  v3 = *(unsigned __int8*)(a1 + 8);
  result = a1 + 8;
  if (v3 != 0) {
    result = game_UnitPool_Get(result);
    if (result != 0) {
      v4 = *(_QWORD*)(result + 440);
      v5 = v4 != 0 ? *(_BYTE*)(v4 + 16) : 9;
      if (((1 << v5) & 0xF1) != 0) {
        v6 = *(_QWORD*)(a1 + 12672);
        if ((v6 & 0x200000000LL) != 0) {
          v8 = &GameData_1ada1c9;
          v7 = game_HashString(&GameData_1ada1c9);
          result = GameRoutine_9b11a0(&GameData_21f61c0, &v7, 1);
          v6 = *(_QWORD*)(a1 + 12672);
          if ((v6 & 0x800000000LL) == 0) {
          LABEL_9:
            if ((v6 & 0x1000000000LL) == 0) {
              return result;
            }
            goto LABEL_10;
          }
        }
        else if ((v6 & 0x800000000LL) == 0) {
          goto LABEL_9;
        }
        v8 = &GameData_1ad2866;
        v7 = game_HashString(&GameData_1ad2866);
        result = GameRoutine_9b11a0(&GameData_21f61c0, &v7, 1);
        if ((*(_QWORD*)(a1 + 12672) & 0x1000000000LL) == 0) {
          return result;
        }
      LABEL_10:
        v8 = &GameData_1abf7a8;
        v7 = game_HashString(&GameData_1abf7a8);
        return GameRoutine_9b11a0(&GameData_21f61c0, &v7, 1);
      }
    }
  }
  return result;
}

__int64 game_map_Mind_UpdateSubTarget(__int64 result)
{
  __int64 v1;
  unsigned int v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD v26[4];
  _QWORD* v27;
  __int64* v28;
  char v29;
  _QWORD v30[2];
  int v31;
  __int64 v32;
  unsigned __int64 v33;
  char v34;

  v1 = result;
  if (*(_BYTE*)(result + 20) != 4) {
    goto LABEL_15;
  }
  v2 = (unsigned __int16)game_g_empty_item;
  if (*(_WORD*)(result + 44) != 0) {
    v2 = *(unsigned __int16*)(result + 44);
  }
  if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v2) +
                 73LL) &
       0xFE) == 8) {
    v3 = *(_QWORD*)(result + 12648);
    *(_DWORD*)(result + 12620) = 0;
    if (v3 != 0) {
      v4 = *(_QWORD**)(result + 12640);
      if (v4 != nullptr) {
        v5 = fw_memory_g_heap_manager_ptr;
        do {
          v6 = (_QWORD*)*v4;
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v7 = 128;
          }
          else {
            v7 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v7, v4);
          v4 = v6;
        } while (v6 != nullptr);
      }
      v8 = *(_QWORD*)(v1 + 12632);
      *(_QWORD*)(v1 + 12640) = 0;
      if (v8 != 0) {
        v9 = v8 & 7;
        if (v8 >= 8) {
          v23 = v8 & 0xFFFFFFFFFFFFFFF8LL;
          v10 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v10) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v10 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v10 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v10 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v10 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v10 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v10 + 48) = 0;
            v24 = *(_QWORD*)(v1 + 12624) + 8 * v10;
            v10 += 8;
            *(_QWORD*)(v24 + 56) = 0;
          } while (v23 != v10);
        }
        else {
          v10 = 0;
        }
        if (v9 != 0) {
          v25 = 8 * v10;
          do {
            --v9;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + v25) = 0;
            v25 += 8;
          } while (v9 != 0);
        }
      }
      *(_QWORD*)(v1 + 12648) = 0;
    }
    *(_DWORD*)(v1 + 12664) = 0;
  }
  else {
  LABEL_15:
    v29 = 0;
    v34 = 0;
    v30[0] = 0;
    *(_QWORD*)((char*)v30 + 5) = 0;
    v28 = GameData_212d1f8[0] + 2;
    v31 = -1;
    v32 = 0;
    v33 = 0xFFFFFFFF00000000LL;
    ITarget_772f60(&v28, result);
    v11 = *(_QWORD*)(v1 + 12648);
    *(_DWORD*)(v1 + 12620) = 0;
    if (v11 != 0) {
      v12 = *(_QWORD**)(v1 + 12640);
      if (v12 != nullptr) {
        v13 = fw_memory_g_heap_manager_ptr;
        do {
          v14 = (_QWORD*)*v12;
          if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
            v15 = 128;
          }
          else {
            v15 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v15, v12);
          v12 = v14;
        } while (v14 != nullptr);
      }
      v16 = *(_QWORD*)(v1 + 12632);
      *(_QWORD*)(v1 + 12640) = 0;
      if (v16 != 0) {
        v17 = v16 & 7;
        if (v16 >= 8) {
          v19 = v16 & 0xFFFFFFFFFFFFFFF8LL;
          v18 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v18) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v18 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v18 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v18 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v18 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v18 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v18 + 48) = 0;
            v20 = *(_QWORD*)(v1 + 12624) + 8 * v18;
            v18 += 8;
            *(_QWORD*)(v20 + 56) = 0;
          } while (v19 != v18);
        }
        else {
          v18 = 0;
        }
        if (v17 != 0) {
          v21 = 8 * v18;
          do {
            --v17;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + v21) = 0;
            v21 += 8;
          } while (v17 != 0);
        }
      }
      *(_QWORD*)(v1 + 12648) = 0;
    }
    *(_DWORD*)(v1 + 12664) = 0;
    v26[0] = GameData_1f94f00;
    v26[1] = v1;
    v27 = v26;
    GameRoutine_775580(&v28, v1 + 312, v26);
    result = (__int64)v27;
    if (v27 == v26) {
      v22 = 32;
    }
    else {
      if (v27 == nullptr) {
        return result;
      }
      v22 = 40;
    }
    return (*(__int64 (**)(__int64))(*v27 + v22))((__int64)v27);
  }
  return result;
}

__int64 Mind_745e80(__int64 a1)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  int v5;
  _QWORD* v6;
  __int64 result;
  int v8;
  __int16 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  int v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  int v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  int v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  int v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  int v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  int v38;
  __int64 v39;
  int v40;
  unsigned int v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v46;
  unsigned int v47;
  int v48;
  unsigned int v50;
  bool v51;
  int v52;
  bool v53;
  __int64 v54;
  unsigned int v55;
  __int64 v56;
  int v58;

  if ((*(_DWORD*)(a1 + 56) & 0xFFF) != 0) {
    v2 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                    8LL * (*(_DWORD*)(a1 + 56) & 0xFFF));
  }
  else {
    v2 = 0;
  }
  v3 = *(unsigned __int8*)(a1 + 20);
  v4 = 1;
  if (v3 > 5) {
    if (*(unsigned __int8*)(a1 + 20) <= 8u) {
      if (v3 == 6) {
        if (v2 == 0) {
          v4 = 1025;
          goto LABEL_32;
        }
        v5 = (unsigned __int8)GameRoutine_6fcce0(v2);
        v6 = &GameData_1b01488;
      }
      else {
        if (v3 != 8) {
          goto LABEL_32;
        }
        if (v2 == 0) {
          v4 = 2049;
          goto LABEL_32;
        }
        v5 = (unsigned __int8)GameRoutine_6fcce0(v2);
        v6 = &GameData_1b01448;
      }
    }
    else {
      if (v3 != 9) {
        if (v3 == 28) {
          v4 = 16;
        }
        if (v3 == 18) {
          v4 = 8193;
        }
        goto LABEL_32;
      }
      if (v2 == 0) {
        v4 = 4097;
        goto LABEL_32;
      }
      v5 = (unsigned __int8)GameRoutine_6fcce0(v2);
      v6 = &GameData_1b015e8;
    }
  LABEL_31:
    v4 = v6[v5];
    goto LABEL_32;
  }
  if (*(unsigned __int8*)(a1 + 20) > 3u) {
    if (v3 == 4) {
      v4 = 0x200000081LL;
      goto LABEL_32;
    }
    if (v3 == 5) {
      if (v2 == 0) {
        v4 = 513;
        goto LABEL_32;
      }
      v5 = (unsigned __int8)GameRoutine_6fcce0(v2);
      v6 = &GameData_1b01848;
      goto LABEL_31;
    }
  }
  else {
    if (v3 == 3) {
      v4 = 0x100000041LL;
    }
    if (v3 == 2) {
      v4 = 524289;
    }
  }
LABEL_32:
  result = a1 + 8;
  v8 = *(unsigned __int8*)(a1 + 8);
  *(_QWORD*)(a1 + 12672) |= v4;
  if (v8 == 0) {
    return result;
  }
  result = game_UnitPool_Get(result);
  if (result == 0) {
    return result;
  }
  if (v2 == 0) {
    goto LABEL_58;
  }
  v9 = *(_WORD*)(v2 + 328);
  if (v9 == 0) {
    goto LABEL_54;
  }
  v10 = *(_QWORD*)(v2 + 320);
  if (v10 != 0) {
    v11 = result;
    v58 = *(_WORD*)(v10 + 16) & 0xFFF;
    v12 = game_HasSkill(result + 1744, &v58);
    result = v11;
    if ((v12 & 1) == 0) {
    LABEL_54:
      v39 = *(_QWORD*)(a1 + 12672) | 0x40000LL;
      *(_QWORD*)(a1 + 12672) = v39;
      goto LABEL_55;
    }
    v9 = *(_WORD*)(v2 + 328);
  }
  v13 = v9 & 1;
  v14 = 64;
  v15 = 128;
  v16 = 512;
  if (v13 != 0) {
    v14 = 0;
  }
  v17 = v14 | *(_QWORD*)(a1 + 12672) & 0xFFFFFFFFFFFFFFBFLL;
  *(_QWORD*)(a1 + 12672) = v17;
  v18 = v17 & 0xFFFFFFFFFFFFFF7FLL;
  if ((*(_WORD*)(v2 + 328) & 0x20) != 0) {
    v15 = 0;
  }
  v19 = *(_WORD*)(v2 + 328) & 0x20 | v13;
  v20 = v15 | v18;
  *(_QWORD*)(a1 + 12672) = v20;
  v21 = 256;
  v22 = v20 & 0xFFFFFFFFFFFFFEFFLL;
  v23 = *(_WORD*)(v2 + 328) & 0x40;
  if ((*(_WORD*)(v2 + 328) & 0x40) != 0) {
    v21 = 0;
  }
  v24 = v22 | v21;
  *(_QWORD*)(a1 + 12672) = v24;
  v25 = v24 & 0xFFFFFFFFFFFFFDFFLL;
  if ((*(_WORD*)(v2 + 328) & 2) != 0) {
    v16 = 0;
  }
  v26 = v19 | v23 | *(_WORD*)(v2 + 328) & 2;
  v27 = 1024;
  v28 = v25 | v16;
  *(_QWORD*)(a1 + 12672) = v28;
  v29 = v28 & 0xFFFFFFFFFFFFFBFFLL;
  v30 = 4096;
  v31 = *(_WORD*)(v2 + 328) & 4;
  if ((*(_WORD*)(v2 + 328) & 4) != 0) {
    v27 = 0;
  }
  v32 = v29 | v27;
  *(_QWORD*)(a1 + 12672) = v32;
  v33 = v32 & 0xFFFFFFFFFFFFEFFFLL;
  if ((*(_WORD*)(v2 + 328) & 8) != 0) {
    v30 = 0;
  }
  v34 = v31 | *(_WORD*)(v2 + 328) & 8;
  v35 = v33 | v30;
  *(_QWORD*)(a1 + 12672) = v35;
  v36 = 2048;
  v37 = v35 & 0xFFFFFFFFFFFFF7FFLL;
  v38 = *(_WORD*)(v2 + 328) & 0x10;
  if ((*(_WORD*)(v2 + 328) & 0x10) != 0) {
    v36 = 0;
  }
  v39 = v37 | v36;
  *(_QWORD*)(a1 + 12672) = v39;
  if ((v26 | v34 | v38) == 0) {
    goto LABEL_54;
  }
LABEL_55:
  v40 = *(unsigned __int8*)(v2 + 104);
  if ((((unsigned __int16)*GameData_212cf08[0] >> v40) & 1) == 0 ||
      v40 == 3 && (unsigned int)*(unsigned __int8*)(v2 + 250) - 33 < 2) {
  LABEL_58:
    v41 = *(unsigned __int8*)(a1 + 20);
    goto LABEL_59;
  }
  v41 = *(unsigned __int8*)(a1 + 20);
  if (v41 - 5 <= 4 && ((0x1Bu >> (v41 - 5)) & 1) != 0) {
    *(_QWORD*)(a1 + 12672) = v39 | GameData_1b3b870[(unsigned __int8)(v41 - 5)];
    goto LABEL_66;
  }
LABEL_59:
  if (v41 <= 0x1B) {
    if (((1 << v41) & 0x8040368) == 0) {
      if (((1 << v41) & 0x13000) != 0) {
        return result;
      }
      goto LABEL_69;
    }
  LABEL_66:
    if ((*(_DWORD*)(a1 + 56) & 0xFFF) != 0) {
      v42 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                       8LL * (*(_DWORD*)(a1 + 56) & 0xFFF));
      if (v42 != 0 && (unsigned int)*(unsigned __int8*)(v42 + 250) - 13 < 2) {
        return result;
      }
    }
  }
LABEL_69:
  if (v41 > 0x1B) {
    goto LABEL_98;
  }
  if (((1 << v41) & 0x8050368) == 0) {
    goto LABEL_98;
  }
  if ((*(_DWORD*)(a1 + 56) & 0xFFF) == 0) {
    goto LABEL_98;
  }
  v43 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                   8LL * (*(_DWORD*)(a1 + 56) & 0xFFF));
  if (v43 == 0 || *(_WORD*)(v43 + 328) == 0 ||
      (*(_BYTE*)(a1 + 12674) & 4) != 0) {
    goto LABEL_98;
  }
  if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v43 + 104)) & 1) ==
      0) {
    goto LABEL_93;
  }
  v44 = *(unsigned __int8*)(v43 + 106);
  if (*(_BYTE*)(v43 + 106) != 0 && v44 != 6) {
    if (v44 != 1) {
      goto LABEL_93;
    }
    v46 = *(_QWORD*)(v43 + 576);
    if (v46 != 0) {
      goto LABEL_89;
    }
  LABEL_98:
    v54 = *(_QWORD*)(a1 + 12680);
    if (*(_QWORD*)(a1 + 12688) != v54) {
      *(_QWORD*)(a1 + 12688) = v54;
    }
    return GameRoutine_851360(result + 1456);
  }
  v46 = *(_QWORD*)(v43 + 576);
  if (v46 != 0) {
  LABEL_89:
    v47 = *(unsigned __int8*)(v46 + 72);
    v48 = *(unsigned __int8*)(v46 + 73);
    if (v47 <= 7 && v48 == 1) {
      goto LABEL_98;
    }
  }
LABEL_93:
  if ((*(unsigned __int8*)(v43 + 283) | *(unsigned __int8*)(v43 + 282)) != 0) {
    goto LABEL_98;
  }
  v50 = *(unsigned __int8*)(v43 + 106);
  v51 = v50 > 4;
  v52 = (1 << v50) & 0x16;
  v53 = v51 || v52 == 0;
  if (!v53 || (*(_QWORD*)(v43 + 608) | *(_QWORD*)(v43 + 664)) != 0) {
    goto LABEL_98;
  }
  v55 = *(unsigned __int8*)(v43 + 250);
  v51 = v55 > 0x22;
  v56 = (1LL << v55) & 0x600000001LL;
  if (v51 || v56 == 0) {
    goto LABEL_98;
  }
  return result;
}

__int64 Mind_746340(__int64 a1, char a2)
{
  __int64 result;
  unsigned int v4;
  __int16 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  char v28[4];
  char v29[4];

  result = 1;
  switch (a2) {
  case 1:
    return result;
  case 2:
    v4 = *(unsigned __int8*)(a1 + 8);
    if (*(_BYTE*)(a1 + 8) == 0 || game_UnitPool_Get(a1 + 8) == 0) {
      goto LABEL_59;
    }
    v5 = -461;
    goto LABEL_57;
  case 3:
    v10 = *(_BYTE*)(a1 + 8);
    if (v10 == 0) {
      return v10 & 1;
    }
    v14 = game_UnitPool_Get(a1 + 8);
    if (v14 == 0) {
      return 0;
    }
    if (*(_BYTE*)(a1 + 8) == 0) {
      goto LABEL_32;
    }
    v12 = v14;
    v13 = game_UnitPool_Get(a1 + 8);
    if (v13 == 0) {
      return v13 & 1;
    }
    if ((*(_WORD*)(a1 + 12672) & 0x4040) != 0 ||
        (game_Unit_IsLocked() & 1) != 0) {
      goto LABEL_32;
    }
    goto LABEL_88;
  case 4:
    v10 = *(_BYTE*)(a1 + 8);
    if (v10 == 0) {
      return v10 & 1;
    }
    v11 = game_UnitPool_Get(a1 + 8);
    if (v11 != 0) {
      if (*(_BYTE*)(a1 + 8) != 0) {
        v12 = v11;
        v13 = game_UnitPool_Get(a1 + 8);
        if (v13 == 0) {
          return v13 & 1;
        }
        if ((*(_WORD*)(a1 + 12672) & 0x4080) == 0 &&
            (game_Unit_IsLocked() & 1) == 0) {
        LABEL_88:
          LOBYTE(v13) = game_Unit_Unknown6c8f90(v12);
          return v13 & 1;
        }
      }
    LABEL_32:
      LOBYTE(v13) = 0;
      return v13 & 1;
    }
    return 0;
  case 5:
    if (*(_BYTE*)(a1 + 8) == 0) {
      return 0;
    }
    v6 = game_UnitPool_Get(a1 + 8);
    if (v6 == 0) {
      return 0;
    }
    if (*(_BYTE*)(a1 + 8) == 0) {
      return 0;
    }
    v7 = v6;
    if (game_UnitPool_Get(a1 + 8) == 0) {
      return 0;
    }
    v8 = 66;
    goto LABEL_44;
  case 6:
    if (*(_BYTE*)(a1 + 8) != 0) {
      v9 = game_UnitPool_Get(a1 + 8);
      if (v9 != 0 && *(_BYTE*)(a1 + 8) != 0) {
        v7 = v9;
        if (game_UnitPool_Get(a1 + 8) != 0 &&
            (*(_BYTE*)(a1 + 12673) & 0x44) == 0) {
          return (game_Unit_IsLocked() & 1) == 0 &&
                 (game_Unit_Unknown6c8f90(v7) & 1) != 0;
        }
      }
    }
    return 0;
  case 8:
    if (*(_BYTE*)(a1 + 8) == 0) {
      return 0;
    }
    v15 = game_UnitPool_Get(a1 + 8);
    if (v15 == 0) {
      return 0;
    }
    if (*(_BYTE*)(a1 + 8) == 0) {
      return 0;
    }
    v7 = v15;
    if (game_UnitPool_Get(a1 + 8) == 0) {
      return 0;
    }
    v8 = 72;
    goto LABEL_44;
  case 9:
    if (*(_BYTE*)(a1 + 8) == 0) {
      return 0;
    }
    v16 = game_UnitPool_Get(a1 + 8);
    if (v16 == 0) {
      return 0;
    }
    if (*(_BYTE*)(a1 + 8) == 0) {
      return 0;
    }
    v7 = v16;
    if (game_UnitPool_Get(a1 + 8) == 0) {
      return 0;
    }
    v8 = 80;
  LABEL_44:
    if ((*(_BYTE*)(a1 + 12673) & (unsigned __int8)v8) != 0) {
      return 0;
    }
    return (game_Unit_IsLocked() & 1) == 0 &&
           (game_Unit_Unknown6c8f90(v7) & 1) != 0;
  case 12:
    if ((GameRoutine_746890(a1) & 1) != 0) {
      v18 = *(_BYTE*)(a1 + 8) != 0 ? game_UnitPool_Get(a1 + 8) : 0LL;
      v26 = *(_DWORD*)(a1 + 12);
      v25 = *(_DWORD*)(a1 + 16);
      if ((game_Unit_CanSwitchMount(v18) & 1) != 0 &&
          (*(_BYTE*)(v18 + 418) & 4) != 0) {
        v27 = *(_QWORD*)(v18 + 400);
        if (v27 != 0 && *(_QWORD*)(v27 + 88) != 0 &&
            *(_QWORD*)(*(_QWORD*)(v27 + 24) + 1112LL) != 0) {
          v28[0] = 7;
          if ((game_map_MapUtil_CanEnter(v18, v27, v26, v25, v28) & 1) != 0) {
            return 1;
          }
        }
      }
    }
    return 0;
  case 13:
    if ((GameRoutine_746890(a1) & 1) == 0) {
      return 0;
    }
    v17 = *(_BYTE*)(a1 + 8) != 0 ? game_UnitPool_Get(a1 + 8) : 0LL;
    v21 = *(_DWORD*)(a1 + 12);
    v20 = *(_DWORD*)(a1 + 16);
    if ((game_Unit_CanSwitchMount(v17) & 1) == 0) {
      return 0;
    }
    if ((*(_BYTE*)(v17 + 418) & 4) != 0) {
      return 0;
    }
    v22 = *(_QWORD*)(*(_QWORD*)(v17 + 400) + 88LL);
    if (v22 == 0) {
      return 0;
    }
    v23 = *(_QWORD*)(v22 + 88) != 0 ? *(_QWORD*)(*(_QWORD*)(v17 + 400) + 88LL)
                                    : *(_QWORD*)(*(_QWORD*)(v22 + 24) + 1112LL);
    if (*(_QWORD*)(*(_QWORD*)(v22 + 24) + 1112LL) == 0 || v23 == 0) {
      return 0;
    }
    v29[0] = 7;
    return (game_map_MapUtil_CanEnter(v17, v22, v21, v20, v29) & 1) != 0;
  case 28:
    v4 = *(unsigned __int8*)(a1 + 8);
    if (*(_BYTE*)(a1 + 8) == 0 || game_UnitPool_Get(a1 + 8) == 0) {
      goto LABEL_59;
    }
    v5 = 16636;
    goto LABEL_57;
  default:
    v4 = *(unsigned __int8*)(a1 + 8);
    if (*(_BYTE*)(a1 + 8) != 0 && game_UnitPool_Get(a1 + 8) != 0) {
      v5 = 16385;
    LABEL_57:
      if ((*(_WORD*)(a1 + 12672) & (unsigned __int16)v5) != 0) {
        v4 = 0;
      }
      else {
        v4 = game_Unit_IsLocked() ^ 1;
      }
      v19 = 1;
    }
    else {
    LABEL_59:
      v19 = 0;
    }
    return v19 & v4;
  }
}

__int64 Mind_746720(__int64 a1, __int64 a2)
{
  __int64 v3;
  unsigned int v4;
  _BYTE* v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  int v11;
  __int64* v13;
  char v14;
  int v15;

  if (a2 != 0) {
    v3 = GameData_1b01908[(unsigned __int8)GameRoutine_6fcce0(a2)];
  }
  else {
    v3 = 0x4000;
  }
  v5 = (_BYTE*)(a1 + 8);
  v4 = *(unsigned __int8*)(a1 + 8);
  if (*(_BYTE*)(a1 + 8) != 0 &&
      (v6 = game_UnitPool_Get_alt2((_BYTE*)(a1 + 8))) != nullptr) {
    v4 = (unsigned __int8)*v5;
    if (*v5 != 0) {
      v7 = v6;
      v8 = game_UnitPool_Get_alt2((_BYTE*)(a1 + 8));
      if (v8 == nullptr) {
        goto LABEL_14;
      }
      if ((*(_QWORD*)(a1 + 12672) & v3) != 0) {
        goto LABEL_14;
      }
      v9 = v8;
      v10 = game_g_shared_system_skills_ptr;
      v15 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                       game_g_shared_system_skills_ptr) &
            0xFFF;
      if ((game_HasSkill_alt1(v8 + 218, (unsigned int*)&v15) & 1) != 0) {
        goto LABEL_14;
      }
      if (*((_WORD*)v9 + 246) == 0 && *((_BYTE*)v9 + 496) == 0) {
        v15 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v10) & 0xFFF;
        if ((game_HasSkill_alt1(v9 + 218, (unsigned int*)&v15) & 1) != 0) {
          goto LABEL_14;
        }
      }
      v15 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) + v10) & 0xFFF;
      if ((game_HasSkill_alt1(v7 + 218, (unsigned int*)&v15) & 1) != 0 ||
          (v13 = v7, *((_WORD*)v7 + 246) == 0) && *((_BYTE*)v7 + 496) == 0 &&
              (v15 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v10) & 0xFFF,
               v14 = game_HasSkill_alt1(v7 + 218, (unsigned int*)&v15),
               v13 = v7, (v14 & 1) != 0)) {
      LABEL_14:
        v4 = 0;
      }
      else {
        v15 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4CLL) + v10) & 0xFFF;
        v4 = game_HasSkill_alt1(v13 + 218, (unsigned int*)&v15) ^ 1;
      }
    }
    v11 = 1;
  }
  else {
    v11 = 0;
  }
  return v11 & v4;
}

__int64* Mind_746890(__int64 a1)
{
  _BYTE* v1;
  __int64* result;
  bool v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int8* v10;
  unsigned __int64 v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v18;
  int v19;

  v1 = (_BYTE*)(a1 + 8);
  if (*(_BYTE*)(a1 + 8) == 0) {
    return nullptr;
  }
  result = game_UnitPool_Get_alt2((_BYTE*)(a1 + 8));
  if (result != nullptr) {
    v4 = game_Unit_CanSwitchMount_alt1((__int64)result);
    result = nullptr;
    if (v4 && *v1 != 0) {
      result = game_UnitPool_Get_alt2(v1);
      if (result != nullptr) {
        if ((*(_WORD*)(a1 + 12672) & 0x4001) != 0) {
          return nullptr;
        }
        v5 = result;
        v6 = game_g_shared_system_skills_ptr;
        v18 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                         game_g_shared_system_skills_ptr) &
              0xFFF;
        if ((game_HasSkill_alt1(result + 218, (unsigned int*)&v18) & 1) != 0) {
          return nullptr;
        }
        if (*((_WORD*)v5 + 246) == 0 && *((_BYTE*)v5 + 496) == 0) {
          v19 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v6) & 0xFFF;
          if ((game_HasSkill_alt1(v5 + 218, (unsigned int*)&v19) & 1) != 0) {
            return nullptr;
          }
        }
        v7 = *(_QWORD*)(a1 + 12672);
        if ((v7 & 0x400000) == 0) {
          return (_QWORD*)(((_UNKNOWN*)0x0LL) + 1);
        }
        v8 = *(_QWORD*)(a1 + 12680);
        v9 = *(_QWORD*)(a1 + 12688) - v8;
        if (v9 != 0) {
          v10 = (unsigned __int8*)(v8 + 4);
          v11 = 0xCCCCCCCCCCCCCCCDLL * (v9 >> 3);
          while (1) {
            v12 = *(v10 - 3);
            v13 = *(v10 - 1);
            v14 = *(v10 - 2);
            v16 = *v10;
            v10 += 40;
            v15 = v16;
            if (v12 != v13 || v14 != v15) {
              break;
            }
            if (--v11 == 0) {
              goto LABEL_23;
            }
          }
        }
        else {
        LABEL_23:
          if (*(_DWORD*)(a1 + 24) == *(_DWORD*)(a1 + 12)) {
            if ((v7 & 0x800000) != 0 ||
                *(_DWORD*)(a1 + 28) == *(_DWORD*)(a1 + 16)) {
            LABEL_28:
              if ((*(_QWORD*)(a1 + 12672) & 0x1000010LL) != 0x10) {
                return (_QWORD*)(((_UNKNOWN*)0x0LL) + 1);
              }
            }
            return nullptr;
          }
        }
        if ((v7 & 0x800000) != 0) {
          goto LABEL_28;
        }
        return nullptr;
      }
    }
  }
  return result;
}

__int64 Mind_746a00(__int64 result, unsigned int a2)
{
  __int64 v2;
  __int64 v4;
  __int16 v5;

  v2 = result;
  *(_DWORD*)(result + 40) = a2;
  if ((a2 & 0x80000000) != 0) {
    *(_QWORD*)(result + 44) = 0;
  }
  else if (*(_BYTE*)(result + 8) != 0) {
    result = game_UnitPool_Get(result + 8);
    if (result != 0) {
      result = game_UnitPool_Get(v2 + 8);
      v4 = result + 8LL * a2;
      v5 = *(_WORD*)(v4 + 828);
      *(_BYTE*)(v2 + 46) = *(_BYTE*)(v4 + 830);
      *(_WORD*)(v2 + 44) = v5;
      *(_BYTE*)(v2 + 47) = *(_BYTE*)(v4 + 831);
      *(_DWORD*)(v2 + 48) = *(_DWORD*)(v4 + 832);
    }
  }
  return result;
}

_QWORD* game_map_Mind_SetTargetList(__int64 a1, _QWORD* a2, __int64 a3,
                                    __int64 a4)
{
  __int64 v4;
  _QWORD* v5;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* result;
  int v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  _QWORD v21[4];
  _QWORD* v22;

  v4 = *(_QWORD*)(a1 + 12648);
  v5 = a2;
  *(_DWORD*)(a1 + 12620) = 0;
  if (v4 != 0) {
    a2 = *(_QWORD**)(a1 + 12640);
    if (a2 != nullptr) {
      v7 = fw_memory_g_heap_manager_ptr;
      do {
        v8 = (_QWORD*)*a2;
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v9, a2);
        a2 = v8;
      } while (v8 != nullptr);
    }
    v10 = *(_QWORD*)(a1 + 12632);
    *(_QWORD*)(a1 + 12640) = 0;
    if (v10 != 0) {
      v11 = v10 & 7;
      if (v10 >= 8) {
        v13 = v10 & 0xFFFFFFFFFFFFFFF8LL;
        v12 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v12) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v12 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v12 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v12 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v12 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v12 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v12 + 48) = 0;
          v14 = *(_QWORD*)(a1 + 12624) + 8 * v12;
          v12 += 8;
          *(_QWORD*)(v14 + 56) = 0;
        } while (v13 != v12);
      }
      else {
        v12 = 0;
      }
      if (v11 != 0) {
        v15 = 8 * v12;
        do {
          --v11;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + v15) = 0;
          v15 += 8;
        } while (v11 != 0);
      }
    }
    *(_QWORD*)(a1 + 12648) = 0;
  }
  *(_DWORD*)(a1 + 12664) = 0;
  result = v21;
  v21[0] = GameData_1f94f80;
  v21[1] = a1;
  v17 = *((_DWORD*)v5 + 3073);
  v22 = v21;
  if (v17 < 1) {
    goto LABEL_24;
  }
  v18 = (char*)v5 + 4;
  v19 = 0;
  do {
    if (v22 == nullptr) {
      GameRoutine_60a310(0, a2, a3, a4);
    }
    (*(void (**)(_QWORD*, char*))(*v22 + 48LL))(v22, v18);
    ++v19;
    v18 += 12;
  } while (v19 < *((int*)v5 + 3073));
  result = v22;
  if (v22 == v21) {
  LABEL_24:
    v20 = 32;
  }
  else {
    if (v22 == nullptr) {
      return result;
    }
    v20 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD*))(*result + v20))(result,
                                                                     a2);
}

__int64 Mind_746c60(__int64 a1, char a2, long double a3)
{
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  _BYTE* v13;
  __int64 v14;
  __int64 v15;
  char v16;
  char v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BYTE v22[200];

  v5 = *(unsigned __int8*)(a1 + 8);
  v4 = a1 + 8;
  if (v5 == 0) {
    return 0;
  }
  v6 = a1;
  result = game_UnitPool_Get_alt1(v4, a3);
  if (result != 0) {
    if (GameData_21cf840 == 0) {
      return 0;
    }
    if (*(int*)(GameData_21cf840 + 16) > 0) {
      return 0;
    }
    if (result != *(_QWORD*)(GameData_21cf840 + 160)) {
      return 0;
    }
    v9 = result;
    v10 = v6 + 64;
    v11 = v9;
    v12 = GameRoutine_1307480(v10);
    if ((v12 & 0x80000000) != 0) {
      return 0;
    }
    v13 = (_BYTE*)(v11 + 847);
    v14 = 2;
    v15 = *GameData_212c878[0];
    while (1) {
      if (*(_WORD*)(v13 - 19) != 0 && (*(v13 - 16) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v15 + 64) +
                                         8LL * *(unsigned __int16*)(v13 - 19)) +
                              72LL) < 8u) {
        LODWORD(v14) = v14 - 2;
        goto LABEL_25;
      }
      if (*(_WORD*)(v13 - 11) != 0 && (*(v13 - 8) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v15 + 64) +
                                         8LL * *(unsigned __int16*)(v13 - 11)) +
                              72LL) < 8u) {
        break;
      }
      if (*(_WORD*)(v13 - 3) != 0 && (*v13 & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v15 + 64) +
                                         8LL * *(unsigned __int16*)(v13 - 3)) +
                              72LL) < 8u) {
        goto LABEL_25;
      }
      v14 += 3;
      v13 += 24;
      if (v14 == 32) {
        LODWORD(v14) = -1;
        goto LABEL_25;
      }
    }
    LODWORD(v14) = v14 - 1;
  LABEL_25:
    if ((game_Unit_EquipItem_6d8f40(v11, v12) & 1) != 0) {
      if ((a2 & 1) == 0) {
        game_Unit_MoveItem(v11, (unsigned int)v14);
      }
      v16 = game_UnitItemList_Sort(v11 + 828, 0, 6);
      v17 = game_UnitItemList_Sort(v11 + 828, 6, 24);
      if ((v16 & 1) != 0 || (v17 & 1) != 0) {
        v18 = *(_DWORD*)(v11 + 416);
        if ((v18 & 0x10000000) == 0) {
          *(_DWORD*)(v11 + 416) = v18 | 0x10000000;
          GameRoutine_6c51e0_alt1(v11);
          GameRoutine_6c6da0(v11);
          GameRoutine_6c6ec0_alt1(v11);
          *(_DWORD*)(v11 + 416) &= ~0x10000000u;
        }
      }
      snd_Fade_Fade_10c830(v22, 0.0);
      *(struct PseudoSret*)(&v21) =
          snd_play_ff2d0("SE_SYS_Weapon_Change", "SE_SYS_Weapon_Change", v22, 0,
                         65537, 0, 0.0, 1.0);
      snd_Fade_Destroy_Fade(v22);
      if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
          (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
        v19 = *(_QWORD*)(v11 + 440);
        if (v19 != 0 && *(unsigned __int8*)(v19 + 16) <= 8u &&
            game_map_UnitFlags_instance_ != 0) {
          v20 = *(unsigned __int8*)(v11 + 2088);
          if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v20) & 1) != 0) {
            *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v20) |= 2u;
          }
        }
      }
      if (GameData_21cf840 != 0 && *(int*)(GameData_21cf840 + 16) <= 0) {
        MapUnitInfo_1829280();
      }
      return 1;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 Mind_746f00(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 result;
  _BYTE* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;

  v3 = *(unsigned __int8*)(a1 + 8);
  v2 = a1 + 8;
  if (v3 == 0) {
    return 0;
  }
  result = game_UnitPool_Get(v2);
  if (result == 0) {
    return result;
  }
  if ((*(_BYTE*)(a1 + 12672) & 1) != 0) {
    return 0;
  }
  v5 = (_BYTE*)(result + 847);
  v6 = 2;
  v7 = result;
  v8 = GameData_212c878[0];
  v9 = *GameData_212c878[0];
  while (1) {
    if (*(_WORD*)(v5 - 19) != 0 && (*(v5 - 16) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v9 + 64) +
                                       8LL * *(unsigned __int16*)(v5 - 19)) +
                            72LL) < 8u) {
      v6 -= 2;
      goto LABEL_18;
    }
    if (*(_WORD*)(v5 - 11) != 0 && (*(v5 - 8) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v9 + 64) +
                                       8LL * *(unsigned __int16*)(v5 - 11)) +
                            72LL) < 8u) {
      break;
    }
    if (*(_WORD*)(v5 - 3) != 0 && (*v5 & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v9 + 64) +
                                       8LL * *(unsigned __int16*)(v5 - 3)) +
                            72LL) < 8u) {
      goto LABEL_18;
    }
    v6 += 3;
    v5 += 24;
    if (v6 == 32) {
      return 0;
    }
  }
  --v6;
LABEL_18:
  v10 = 828;
  while (v6 == 0 ||
         *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                        8LL * *(unsigned __int16*)(v7 + v10)) +
                             72LL) > 7u ||
         !UnitItem_6e8bc0((unsigned __int16*)(v7 + v10), v7)) {
    v10 += 8;
    --v6;
    if (v10 == 1068) {
      return 0;
    }
  }
  return 1;
}

__int64* Mind_747060(__int64 a1)
{
  __int64* result;
  __int64 v3;
  __int64 v4;
  int v6;
  int v7;
  int v8;
  __int64 v9;

  if ((*(_BYTE*)(a1 + 12673) & 0x40) != 0 || *(_BYTE*)(a1 + 8) == 0) {
    return nullptr;
  }
  result = game_UnitPool_Get_alt2((_BYTE*)(a1 + 8));
  if (result != nullptr) {
    v3 = (__int64)result;
    v4 = game_g_shared_system_skills_ptr;
    LODWORD(v9) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                             game_g_shared_system_skills_ptr) &
                  0xFFF;
    if ((game_HasSkill_alt1(result + 218, (unsigned int*)&v9) & 1) == 0 &&
        (*(_WORD*)(v3 + 492) != 0 || *(_BYTE*)(v3 + 496) != 0 ||
         (LODWORD(v9) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v4) & 0xFFF,
          (game_HasSkill_alt1((_QWORD*)(v3 + 1744), (unsigned int*)&v9) & 1) ==
              0)) &&
        (v9 = 0x100000000LL, (v6 = game_UnitSkillList_GetMaxValue(
                                  (_QWORD*)(v3 + 1744), &v9)) >= 1) &&
        (v7 = v6 & ~(v6 >> 31),
         (GameRoutine_74b220(*(_QWORD**)GameData_212ce88[0], v3,
                             *(char*)(v3 + 584), *(char*)(v3 + 585), v7) &
          1) != 0)) {
      *(_DWORD*)(a1 + 24) = *(char*)(v3 + 584);
      v8 = *(char*)(v3 + 585);
      *(_DWORD*)(a1 + 52) = v7;
      *(_DWORD*)(a1 + 28) = v8;
      *(_QWORD*)(a1 + 12672) |= 0x4000uLL;
      return (_QWORD*)(((_UNKNOWN*)0x0LL) + 1);
    }
    else {
      return nullptr;
    }
  }
  return result;
}

__int64 Mind_747180(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 result;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  char v9[4];

  if ((*(_BYTE*)(a1 + 12673) & 0x80) != 0) {
    return 0;
  }
  v3 = *(unsigned __int8*)(a1 + 8);
  v2 = a1 + 8;
  if (v3 == 0) {
    return 0;
  }
  result = game_UnitPool_Get(v2);
  if (result != 0) {
    *(_DWORD*)(a1 + 24) = *(char*)(result + 584);
    *(_DWORD*)(a1 + 28) = *(char*)(result + 585);
    LODWORD(v5) = *(_DWORD*)(a1 + 32) + 32 * *(_DWORD*)(a1 + 36);
    if ((unsigned int)v5 >= 0x400) {
      v5 = 0;
    }
    else {
      v5 = (unsigned int)v5;
    }
    v6 = *(unsigned __int8*)(*(_QWORD*)(GameData_21ca2f0 + 8) + v5 + 64);
    if (v6 == 255) {
      v8 = 0;
    }
    else {
      v9[0] = 10;
      v7 = game_Unit_GetParam(result, v9, 1);
      v8 = (v7 - v6) & ~((v7 - v6) >> 31);
    }
    *(_DWORD*)(a1 + 52) = v8;
    *(_QWORD*)(a1 + 12672) |= 0x8000uLL;
    return 1;
  }
  return result;
}

#pragma GCC visibility pop
