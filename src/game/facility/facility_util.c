#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
_QWORD* GameRoutine_94f740(_QWORD* result, _QWORD*, unsigned __int64, __int64*,
                           signed __int64);
__int64 Dir_70d7a0(_QWORD);
__int64 GameRoutine_143d0a0(_QWORD, _QWORD);
__int64 GameRoutine_1464bd0(_QWORD, _QWORD);
__int64 GameRoutine_1472420(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1472720(_QWORD);
__int64 GameRoutine_159a4a0(void);
__int64 GameRoutine_6c29c0(_QWORD);
__int64 GameRoutine_717fc0(_QWORD, _QWORD);
__int64 GameRoutine_821090(_QWORD);
__int64 GameRoutine_86b4e0(_QWORD);
__int64 GameRoutine_90dc20(__int64, unsigned __int64*);
__int64 GameRoutine_9b11a0(_QWORD, _QWORD, _QWORD);
__int64 GameVariable_826e40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD);
__int64 GameVariable_828dc0(_QWORD, _QWORD, _QWORD);
__int64 Unit_6d0400(_QWORD);
__int64 VolunteerArgs_948220(__int16*);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1a856ca;
extern _UNKNOWN GameData_1a85711;
extern _UNKNOWN GameData_1a90b0d;
extern _UNKNOWN GameData_1a94d5c;
extern _UNKNOWN GameData_1a98de5;
extern _UNKNOWN GameData_1ab3bb1;
extern _UNKNOWN GameData_1adebe5;
extern _UNKNOWN GameData_1ae5940;
extern _UNKNOWN GameData_1ae97c6;
extern _UNKNOWN GameData_1aed87a;
extern __int64 (*GameData_1fa80c0[])();
extern __int64 (*GameData_1faf5e8[])();
extern __int64 (*GameData_1faf6e8[])();
extern __int64 (*GameData_1fafb78[])();
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_21c9650;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21f61c0;
extern __int64 GameData_2246cb0;
extern __int64 GameData_22491f8;
extern __int64 GameData_22492e8;
extern __int64 GameData_22492f8;
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 FacilityUtil_948800(__int64 a1, __int64** a2);
__int64 FacilityUtil_948fc0(__int64 result, int a2, int a3);
__int64 FacilityUtil_949130(unsigned __int8 a1);
__int64 FacilityUtil_949380();
__int64 FacilityUtil_9494a0(__int64 a1, __int64 a2);
__int64 FacilityUtil_949b10(__int64 a1);
__int64 FacilityUtil_949cf0();
__int64 FacilityUtil_949e50();
__int64 game_facility_FacilityUtil_GetSpecialDramaOnCalendar(__int16* a1,
                                                             __int64 a2);
__int64 game_facility_FacilityUtil_CalcStay_lambda0_Invoke(__int64 result,
                                                           _QWORD* a2);
bool game_facility_FacilityUtil_IsTrainingDiscountDay_lambda0_Invoke(
    __int64 a1, __int64 a2);
__int64 game_facility_FacilityUtil_EachPerchFood_lambda0_Invoke(__int64 result,
                                                                int* a2);
__int64 game_facility_FacilityUtil_CalcPerch_lambda0_Invoke(__int64 result);
__int64 game_facility_FacilityUtil_GetSpecialDramaOnCalendar_lambda0_Invoke(
    __int64 result, __int64 a2);
bool game_facility_FacilityUtil_IsCookingDiscountDay_lambda0_Invoke(__int64 a1,
                                                                    __int64 a2);
__int64* FacilityUtil_94fa20(__int64* result, __int64* a2, unsigned __int64 a3,
                             __int64* a4);
char* FacilityUtil_94fd20(char* result, char* a2, char* a3, __int64 a4,
                          __int64 a5, __int64 a6, __int64 a7);
__int64 game_facility_FacilityUtil_EntryVariable_lambda0_Invoke(__int64 a1,
                                                                __int64 a2);
__int64 game_facility_FacilityUtil_EntryVariable_lambda1_Invoke(__int64 a1,
                                                                __int64 a2);
_QWORD* game_facility_FacilityUtil_EntryVariable_lambda2_Invoke(__int64 a1,
                                                                __int64 a2);
__int64 game_HashString_alt1(_QWORD, _QWORD) __asm__("game_HashString");
extern _UNKNOWN GameData_1acace2;
extern __int64 GameData_212c6c0[2];
extern __int64 GameData_2249308;
extern __int64* GameData_212c880[5];
struct PseudoSret GameRoutine_12dd620(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 FacilityUtil_948f10();
__int64
game_facility_FacilityUtil_CalcStableBreeding_lambda0_Invoke(__int64 result);
__int64
game_facility_FacilityUtil_CalcStableBreeding_lambda1_Invoke(__int64 result,
                                                             __int64 a2);
__int64
game_facility_FacilityUtil_CalcReinforceSkill_lambda0_Invoke(__int64 result,
                                                             _DWORD* a2);
__int64
game_facility_FacilityUtil_CalcEducateSkill_lambda0_Invoke(__int64 result,
                                                           _DWORD* a2);
_QWORD* FacilityUtil_94f740_alt1(_QWORD* result, _QWORD*, __int64, __int64*,
                                 __int64) __asm__("FacilityUtil_94f740");
__attribute__((swiftcall)) void FacilityUnitList_145eea0(PSEUDO_X8, __int64,
                                                         __int64);
__attribute__((swiftcall)) void game_941ce0(PSEUDO_X8, __int64 result);
__int64* game_821090(int);
__int64 FacilityUnitList_145e440(__int64 result, __int64, char);
__int64 GameRoutine_143d0a0_alt1(__int64,
                                 __int16*) __asm__("GameRoutine_143d0a0");
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 RuntimeBuffer_8924a0(__int64 result, __int64, unsigned __int64,
                             unsigned __int8);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HashString_alt2(__int64 result) __asm__("game_HashString");
__int64 game_Unit_EachEducateTargetSkill(__int64, __int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN GameData_1a86f9b;
extern _UNKNOWN GameData_1a9ca01;
extern _UNKNOWN GameData_1aa853c;
extern _UNKNOWN GameData_1ac4744;
extern _UNKNOWN GameData_1acacd8;
extern _UNKNOWN GameData_1adfa87;
extern _UNKNOWN GameData_1aed6ab;
extern __int64 (*GameData_1faf3d8[])();
extern __int64 (*GameData_1faf458[])();
extern __int64 (*GameData_1faf668[])();
extern __int64 (*GameData_1fafa78[])();
extern __int64* GameData_212d7f8[4];
extern __int64 GameData_1a8d4c3;
extern __int64 GameData_212c060;
extern __int64 GameData_2249258;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_UnitListSet_instance_;
extern char GameData_1a9f09e;
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__attribute__((swiftcall)) void FacilityUtil_947460(PSEUDO_X8 x8_,
                                                    __int64 result);
__int64 FacilityUtil_948340();
__int64 FacilityUtil_948620(__int64 a1, __int64** a2);
__int64 FacilityUtil_948d00(__int64 a1);
__int64 FacilityUtil_9495e0();
__int64 FacilityUtil_949930();
__int64 FacilityUtil_949d50();
__int64 game_facility_FacilityUtil_CalcEducateSkill(__int64 a1);
__int64 FacilityUtil_94d840();
__int64* FacilityUtil_94f740(__int64* result, char* a2, unsigned __int64 a3,
                             __int64* a4, __int64 a5);

__attribute__((swiftcall)) void FacilityUtil_947460(PSEUDO_X8 x8_,
                                                    __int64 result)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  char* v3;
  char* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  struct {
    __int64 v15;
    __int64 v16;
    __int64 v17;
  } v15_;

  if (result == 0) {
    a2[1] = 0;
    a2[2] = 0;
    *a2 = 0;
    {
      result;
      return;
    }
  }
  v3 = *(char**)(result + 112);
  v15_.v16 = 0;
  v15_.v17 = 0;
  v15_.v15 = 0;
  if (v3 != nullptr) {
    v4 = v3;
  }
  else {
    v4 = &GameData_1a9f09e;
  }
  v5 = strlen(v4);
  result = RuntimeBuffer_8924a0((__int64)&v15_.v15, (__int64)v4, v5, 0x2Fu);
  if ((*(_BYTE*)(v15_.v16 - 24) & 1) != 0) {
    result = fw_text_String_CopyTerminated(a2, *(_QWORD*)(v15_.v16 - 8),
                                           *(_QWORD*)(v15_.v16 - 16));
    v8 = v15_.v15;
    if (v15_.v15 == 0) {
      result;
      return;
    }
  }
  else {
    v6 = *(_QWORD*)(v15_.v16 - 24);
    v7 = *(_QWORD*)(v15_.v16 - 8);
    a2[1] = *(_QWORD*)(v15_.v16 - 16);
    a2[2] = v7;
    *a2 = v6;
    v8 = v15_.v15;
    if (v15_.v15 == 0) {
      result;
      return;
    }
  }
  v9 = v15_.v16;
  v10 = fw_memory_g_heap_manager_ptr;
  if (v8 == v15_.v16) {
    goto LABEL_20;
  }
  v11 = v15_.v16;
  do {
    v12 = *(_BYTE*)(v11 - 24);
    v11 -= 24;
    if ((v12 & 1) != 0 && *(_QWORD*)(v9 - 8) != 0) {
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
        v13 = 128;
      }
      else {
        v13 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v13);
    }
    v9 = v11;
  } while (v11 != v8);
  v15_.v16 = v8;
  if (v15_.v15 != 0) {
  LABEL_20:
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
      v14 = 56;
    }
    {
      nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v14);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 FacilityUtil_948340()
{
  __int64* v0;
  __int64 v1;
  int v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 (**v7)();
  int* v8;
  __int64 (**v9)();
  __int16 v10;
  unsigned int v11;
  __int64 v12;
  __int16* v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int16* v20;
  struct {
    __int64 (**v22)();
    int* v23;
    char gap32_[16];
    __int64* v24;
  } v22_;
  int v25;

  v0 = game_821090(6);
  if (game_GameModeData_instance_ != 0) {
    v1 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v0);
    v2 = 0x400000;
    if (v1 != 0) {
      if (*(int*)(v1 + 32) <= 0) {
        v2 = 0x400000;
      }
      else {
        v2 = 0;
      }
    }
  }
  else {
    v2 = 0x400000;
  }
  if ((*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 304LL) & 1) == 0 ||
      (game_gmap_GmapClock_instance_ == 0 ||
       *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
               *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
               *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
           0) &&
          ((v22_.v23 = (int*)&GameData_1adebe5,
            v22_.v22 = (__int64 (**)(void))game_HashString_alt2(
                (__int64)&GameData_1adebe5),
            game_GameModeData_instance_ == 0) ||
           (v3 = game_GameVariableTable_Find_alt1(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)&v22_.v22)) == 0 ||
           *(_DWORD*)(v3 + 32) == 0)) {
    v2 |= 8u;
  }
  v4 = v2 | 0x20000;
  v5 = game_gmap_GmapClock_kDefaultTime_ptr;
  if (game_gmap_GmapClock_instance_ != 0) {
    v6 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v6 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  game_941ce0((void*)((__int64*)&v22_.v22), v6);
  v7 = v22_.v22;
  v8 = v22_.v23;
  if (v22_.v22 == (__int64 (**)(void))v22_.v23) {
  LABEL_35:
    if (v7 == nullptr) {
      goto LABEL_39;
    }
    goto LABEL_36;
  }
  v9 = v22_.v22;
  do {
    if (*v9 == nullptr) {
      goto LABEL_34;
    }
    v10 = *((_WORD*)*v9 + 8);
    v11 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v12 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&GameData_22492e8);
      if (v12 != 0) {
        v11 = *(_DWORD*)(v12 + 32);
      }
      else {
        v11 = 0;
      }
    }
    v13 = (__int16*)(game_gmap_GmapClock_instance_ != 0
                         ? game_gmap_GmapClock_instance_ + 8
                         : v5);
    if (v11 <= 10000 * *v13 + 100 * v13[1] + v13[2]) {
      goto LABEL_34;
    }
    v14 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v15 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&GameData_22492f8);
      if (v15 == 0) {
        goto LABEL_34;
      }
      v14 = *(_DWORD*)(v15 + 32);
    }
    if (((v14 >> v10) & 1) == 0) {
    LABEL_34:
      v4 = v2;
      goto LABEL_35;
    }
    ++v9;
  } while (v9 != (__int64 (**)(void))v8);
  if (v7 != nullptr) {
  LABEL_36:
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v16);
  }
LABEL_39:
  v25 = 0;
  v17 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
  v22_.v24 = (__int64*)&v22_.v22;
  v22_.v22 = GameData_1faf458;
  v22_.v23 = &v25;
  FacilityUnitList_145e440(v17, (__int64)&v22_.v22, 2);
  if (v22_.v24 == (__int64*)&v22_.v22) {
    v18 = 32;
  }
  else {
    if (v22_.v24 == nullptr) {
      goto LABEL_44;
    }
    v18 = 40;
  }
  (*(void (**)(__int64))(*v22_.v24 + v18))((__int64)v22_.v24);
LABEL_44:
  if (v25 >= 2) {
    v19 = v4;
  }
  else {
    v19 = v4 | 0x40;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v20 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v20 = (__int16*)v5;
  }
  if ((GameRoutine_143d0a0_alt1((__int64)&GameData_1acacd8, v20) & 1) != 0) {
    return v19;
  }
  else {
    return v19 | 2;
  }
}

__int64 FacilityUtil_948620(__int64 a1, __int64** a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  unsigned int v5;
  __int16* v6;
  unsigned int v7;
  unsigned int v8;
  __int16 v9;
  double v10;
  double v11;
  double v12;
  int v13;
  unsigned int v14;
  __int64 v15;
  __int16* v16;
  unsigned int v17;
  __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  int v24;

  v4 = game_gmap_GmapClock_kDefaultTime_ptr;
  v5 = *(unsigned __int16*)(a1 + 88);
  if (game_gmap_GmapClock_instance_ != 0) {
    v6 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v6 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v7 = VolunteerArgs_948220(v6);
  v8 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v9 = *(_WORD*)(a1 + 16);
    v10 = 0x1.0000000000000p+0;
    v11 = (double)v7 / -0x1.9000000000000p+6 + 0x1.0000000000000p+0;
    if (v11 <= 0x1.0000000000000p+0) {
      v10 = (double)v7 / -0x1.9000000000000p+6 + 0x1.0000000000000p+0;
    }
    if (v11 >= 0x1.47ae147ae147bp-7) {
      v12 = v10;
    }
    else {
      v12 = 0x1.47ae147ae147bp-7;
    }
    v13 = (int)(v12 * (double)v5);
    if (v13 <= 1) {
      v13 = 1;
    }
    if (*(_DWORD*)(game_GameModeData_instance_ + 72) >= v13) {
      v14 = 0;
    }
    else {
      v14 = 16;
    }
    v15 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&GameData_22492e8);
    if (v15 != 0) {
      v8 = *(_DWORD*)(v15 + 32);
    }
    else {
      v8 = 0;
    }
  }
  else {
    v9 = *(_WORD*)(a1 + 16);
    v14 = 16;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v16 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v16 = (__int16*)v4;
  }
  if (v8 > 10000 * *v16 + 100 * v16[1] + v16[2]) {
    v17 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v18 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&GameData_22492f8);
      if (v18 != 0) {
        v17 = *(_DWORD*)(v18 + 32);
      }
      else {
        v17 = 0;
      }
    }
    if (((v17 >> v9) & 1) != 0) {
      v14 |= 0x20000u;
    }
  }
  v20 = *a2;
  v19 = a2[1];
  if (v20 != v19) {
    v21 = game_g_shared_system_skills_ptr;
    do {
      v22 = *v20;
      if (*v20 != 0) {
        if (*(char*)(v22 + 2090) <= 0) {
          v14 |= 0x400u;
        }
        v24 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1B4LL) + v21) & 0xFFF;
        if ((game_HasSkill((_QWORD*)(v22 + 1744), (unsigned int*)&v24) & 1) !=
            0) {
          v14 |= *(unsigned __int8*)(*(_QWORD*)(a1 + 24) + 24LL) << 15;
        }
      }
      else {
        v14 |= 0x400u;
      }
      ++v20;
    } while (v20 != v19);
  }
  return v14;
}

__int64 FacilityUtil_948800(__int64 a1, __int64** a2)
{
  unsigned int v4;
  __int16* v5;
  unsigned int v6;
  __int64 v7;
  double v8;
  double v9;
  double v10;
  int v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  __int16 v18;
  __int16 v19;
  __int16 v20;
  __int16 v21;
  __int64* i;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  int v26;
  unsigned int v27;
  char v28;
  __int64 v30;
  void* v31;
  __int16 v32;
  __int16 v33;

  v4 = *(unsigned __int16*)(a1 + 88);
  if (game_gmap_GmapClock_instance_ != 0) {
    v5 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v5 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v6 = VolunteerArgs_948220(v5);
  v7 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v8 = 1.0;
    v9 = (double)v6 / -100.0 + 1.0;
    if (v9 <= 1.0) {
      v8 = (double)v6 / -100.0 + 1.0;
    }
    if (v9 >= 0.01) {
      v10 = v8;
    }
    else {
      v10 = 0.01;
    }
    v11 = (int)(v10 * (double)v4);
    if (v11 <= 1) {
      v11 = 1;
    }
    v12 = (*(_DWORD*)(game_GameModeData_instance_ + 72) - v11) &
          ~((*(_DWORD*)(game_GameModeData_instance_ + 72) - v11) >> 31);
    if (v12 >= 9999999) {
      v12 = 9999999;
    }
    *(_DWORD*)(game_GameModeData_instance_ + 72) = v12;
    if (*(_BYTE*)(v7 + 56) == 5) {
      v31 = &GameData_1a856ca;
      v30 = game_HashString(&GameData_1a856ca);
      if (game_GameModeData_instance_ != 0) {
        v13 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), &v30);
        if (v13 != 0) {
          v14 = *(_DWORD*)(v13 + 32);
          v15 = game_gmap_GmapClock_instance_;
          v16 = v14 == 0 || game_gmap_GmapClock_instance_ == 0;
          if (!v16 && *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
                          0) {
            v17 = game_gmap_GmapClock_instance_ + 8;
            v18 = *(_WORD*)(game_gmap_GmapClock_instance_ + 8);
            v19 = *(_WORD*)(game_gmap_GmapClock_instance_ + 18);
            v20 = *(_WORD*)(game_gmap_GmapClock_instance_ + 16);
            v30 = game_gmap_GmapClock_instance_;
            LOWORD(v31) = v18;
            *(_DWORD*)((char*)&v31 + 2) =
                *(_DWORD*)(game_gmap_GmapClock_instance_ + 10);
            v21 = *(_WORD*)(game_gmap_GmapClock_instance_ + 14);
            v33 = v19;
            v32 = v20;
            *(_WORD*)(game_gmap_GmapClock_instance_ + 18) = 0;
            HIWORD(v31) = v21;
            *(_WORD*)(v15 + 14) = v21 + v14 / 60;
            *(_WORD*)(v15 + 16) = v20 + v14 % 60;
            Dir_70d7a0(v17);
            *(_DWORD*)(v15 + 44) = 0;
            GameRoutine_86b4e0(&v30);
          }
        }
      }
    }
  }
  GameRoutine_1472420(&GameData_22492e8, &GameData_22492f8,
                      *(unsigned __int16*)(a1 + 16));
  v23 = *a2;
  for (i = a2[1]; v23 != i; ++v23) {
    v24 = *v23;
    if (*v23 != 0) {
      v25 = GameData_2246cb0;
      if (*(char*)(v24 + 2090) <= 1) {
        v26 = 1;
      }
      else {
        v26 = *(char*)(v24 + 2090);
      }
      v27 = v26 - 1;
      if (v27 >= 3) {
        v28 = 3;
      }
      else {
        v28 = v27;
      }
      *(_BYTE*)(v24 + 2090) = v28;
      if (v25 != 0) {
        GameRoutine_1464bd0(v25, v24);
      }
    }
  }
  v31 = &GameData_1aed87a;
  v30 = game_HashString(&GameData_1aed87a);
  return GameRoutine_9b11a0(&GameData_21f61c0, &v30, 1);
}

__int64 FacilityUtil_948d00(__int64 a1)
{
  char v1;
  __int64* v2;
  __int64 v3;
  bool v4;
  _BOOL4 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  unsigned int v10;
  __int64 v11;
  int v12;
  __int16* v13;
  unsigned int v14;
  struct {
    __int64 (**v16)();
    int* v17;
    char gap16_[16];
    unsigned __int64* v18;
  } v16_;
  int v19;

  v1 = *(_BYTE*)(a1 + 82);
  v2 = game_821090(5);
  v4 = game_GameModeData_instance_ != 0 &&
       (v3 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)v2)) != 0 &&
       *(_DWORD*)(v3 + 32) > 0;
  if (*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 304LL) != 1) {
    goto LABEL_12;
  }
  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
    v5 = true;
    goto LABEL_13;
  }
  v16_.v17 = (int*)&GameData_1adebe5;
  v16_.v16 =
      (__int64 (**)(void))game_HashString_alt2((__int64)&GameData_1adebe5);
  if (game_GameModeData_instance_ != 0 &&
      (v6 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v16_.v16)) != 0) {
    v5 = *(_DWORD*)(v6 + 32) != 0;
  }
  else {
  LABEL_12:
    v5 = false;
  }
LABEL_13:
  v19 = 0;
  v7 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
  v16_.v18 = (unsigned __int64*)&v16_.v16;
  v16_.v16 = GameData_1faf458;
  v16_.v17 = &v19;
  FacilityUnitList_145e440(v7, (__int64)&v16_.v16, 2);
  if (v16_.v18 == (unsigned __int64*)&v16_.v16) {
    v8 = 32;
  }
  else {
    if (v16_.v18 == nullptr) {
      goto LABEL_18;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v16_.v18 + v8))((__int64)v16_.v18);
LABEL_18:
  v9 = v19;
  v10 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v11 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&GameData_2249308);
    if (v11 != 0) {
      v10 = *(_DWORD*)(v11 + 32);
    }
    else {
      v10 = 0;
    }
  }
  if (v4 && v1 != 6) {
    v12 = 0;
  }
  else {
    v12 = 0x400000;
  }
  if (!v5) {
    v12 |= 8u;
  }
  if (v9 < 2) {
    v12 |= 0x40u;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v13 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v13 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if (v10 <= 10000 * *v13 + 100 * v13[1] + v13[2]) {
    v14 = v12;
  }
  else {
    v14 = v12 | 0x20000;
  }
  if ((GameRoutine_143d0a0_alt1((__int64)&GameData_1ae5940, v13) & 1) != 0) {
    return v14;
  }
  else {
    return v14 | 2;
  }
}

__int64 FacilityUtil_948f10()
{
  __int16* v0;
  __int64 v1;
  _QWORD v3[2];

  if (game_gmap_GmapClock_instance_ != 0) {
    v0 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v0 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  *(struct PseudoSret*)(v3) =
      GameRoutine_12dd620(*(_QWORD*)GameData_212c6c0[0], (unsigned int)*v0,
                          (unsigned int)v0[1], (unsigned int)v0[2]);
  game_VariableManager_SetFlag(
      &GameData_2249308, (unsigned int)(10000 * SLOWORD(v3[0]) +
                                        100 * SWORD1(v3[0]) + SWORD2(v3[0])));
  v3[1] = &GameData_1acace2;
  v3[0] = game_HashString_alt1(&GameData_1acace2, v1);
  return GameRoutine_9b11a0(&GameData_21f61c0, v3, 1);
}

__int64 FacilityUtil_948fc0(__int64 result, int a2, int a3)
{
  __int64 v5;
  _DWORD* v6;
  int v7;
  int v8;
  int v12;
  int v16;
  void* v17;
  _QWORD v18[2];

  if (result != 0) {
    v5 = game_GameModeData_instance_;
    result = GameRoutine_90dc20(game_GameModeData_instance_ + 152,
                                *(unsigned __int64**)(result + 112));
    if ((result & 0x80000000) == 0) {
      v6 = *(_DWORD**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v5 + 160) + 8LL) +
                                  32LL * (unsigned int)result + 16) +
                       24LL);
      v7 = v6[105];
      v8 = v6[103];
      if (v7 > 2 && v8 <= a2) {
        v12 = 3;
      }
      else if (v7 > 1 && v6[102] <= a2) {
        v12 = 2;
      }
      else if (v7 >= 1 && v6[101] <= a2) {
        v12 = 1;
      }
      else {
        v12 = v6[104];
      }
      if (v7 > 2 && v8 <= a3) {
        v16 = 3;
        if (v12 == 3) {
          return result;
        }
      }
      else if (v7 > 1 && v6[102] <= a3) {
        v16 = 2;
        if (v12 == 2) {
          return result;
        }
      }
      else if (v7 >= 1 && v6[101] <= a3) {
        v16 = 1;
        if (v12 == 1) {
          return result;
        }
      }
      else {
        v16 = v6[104];
        if (v12 == v16) {
          return result;
        }
      }
      if (v16 == 3) {
        v17 = &GameData_1ae97c6;
      }
      else {
        if (v16 != 2) {
          return result;
        }
        v17 = &GameData_1ab3bb1;
      }
      v18[1] = v17;
      v18[0] = game_HashString(v17);
      return GameRoutine_9b11a0(&GameData_21f61c0, v18, 1);
    }
  }
  return result;
}

__int64 FacilityUtil_949130(unsigned __int8 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  char v5;
  int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  _QWORD v11[2];

  if (*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 304LL) == 1 &&
      (game_gmap_GmapClock_instance_ != 0 &&
           *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                   *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                   *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
               0 ||
       (v11[1] = &GameData_1adebe5, v11[0] = game_HashString(&GameData_1adebe5),
        game_GameModeData_instance_ != 0) &&
           (v2 = game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48), v11)) != 0 &&
           *(_DWORD*)(v2 + 32) != 0)) {
    v3 = 0;
  }
  else {
    v3 = 8;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v4 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v4 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v5 = GameRoutine_143d0a0(&GameData_1ae5940, v4);
  v6 = v3 | 2;
  if ((v5 & 1) != 0) {
    v6 = v3;
  }
  v7 = v6 | 0x2000;
  v8 = v6 | 0x100000;
  if (a1 != 3) {
    v7 = v6;
  }
  v9 = v6 | 0x400000;
  if (a1 != 4) {
    v8 = v7;
  }
  if (a1 <= 1u) {
    return v9;
  }
  else {
    return v8;
  }
}

__int64 FacilityUtil_949380()
{
  unsigned __int64 v0;
  unsigned __int64 v1;
  unsigned __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;

  v0 = game_HashString(&GameData_1a90b0d);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21c99c8 + 96);
    if (v1 != 0 && *(_QWORD*)(GameData_21c99c8 + 112) != 0) {
      v3 = v1 - 1;
      if ((v1 & (v1 - 1)) != 0) {
        v4 = v0;
        if (v0 >= v1) {
          v4 = v0 % v1;
        }
      }
      else {
        v4 = v3 & v0;
      }
      v5 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v4);
      if (v5 != nullptr) {
        v6 = (_QWORD*)*v5;
        if (v6 != nullptr) {
          if ((v1 & v3) == 0) {
            while (1) {
              v9 = v6[1];
              if (v9 == v0) {
                if (v6[2] == v0) {
                  return v6[3];
                }
              }
              else if ((v9 & v3) != v4) {
                return 0;
              }
              v6 = (_QWORD*)*v6;
              v8 = 0;
              if (v6 == nullptr) {
                return v8;
              }
            }
          }
          do {
            v7 = v6[1];
            if (v7 == v0) {
              if (v6[2] == v0) {
                return v6[3];
              }
            }
            else {
              if (v7 >= v1) {
                v7 %= v1;
              }
              if (v7 != v4) {
                return 0;
              }
            }
            v6 = (_QWORD*)*v6;
          } while (v6 != nullptr);
        }
      }
    }
  }
  return 0;
}

__int64 FacilityUtil_9494a0(__int64 a1, __int64 a2)
{
  _QWORD* v2;
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

  v10[0] = GameData_1faf5e8;
  v10[1] = a1;
  v2 = v12;
  v11 = v10;
  v3 = *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
  v12[2] = v10;
  v13 = v12;
  v4 = *(unsigned int*)(v3 + 80);
  v12[0] = GameData_1fa80c0;
  v12[1] = 20;
  if ((int)v4 < 1) {
    goto LABEL_10;
  }
  v5 = 0;
  v6 = 12 * v4;
  do {
    a2 = *(_QWORD*)(v3 + 8) + v5;
    if (*(_WORD*)(a2 + 2) != 0) {
      if (v13 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      (*(void (**)(_QWORD*))(*v13 + 48LL))(v13);
    }
    v5 += 12;
  } while (v6 != v5);
  v2 = v13;
  if (v13 == v12) {
  LABEL_10:
    v7 = 32;
  }
  else {
    if (v13 == nullptr) {
      goto LABEL_12;
    }
    v7 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v2 + v7))(v2, a2);
LABEL_12:
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
  return (*(__int64 (**)(_QWORD*, __int64))(*v11 + v9))(v11, a2);
}

__int64 FacilityUtil_9495e0()
{
  int v0;
  int v1;
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int16* v5;
  __int64 v6;
  __int16* v7;
  int v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64** v13;
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
  struct {
    _QWORD v25[4];
    _QWORD* v26;
  } v25_;
  unsigned int v27;
  struct {
    _QWORD v28[4];
    _QWORD* v29;
  } v28_;
  struct {
    __int64* v30;
    _QWORD* v31;
    _QWORD* v32;
    char gap136_[8];
    unsigned __int64* v33;
  } v30_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (game_GameModeData_instance_ != 0) {
    if (*(_BYTE*)(game_GameModeData_instance_ + 15) == 9) {
      v0 = 0x400000;
      v27 = 0x400000;
    }
    else {
      v0 = 0;
    }
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 2) {
      v1 = 0x400000;
    }
    else {
      v1 = v0;
    }
    v2 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&GameData_2249258),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v2 != 0) {
      v3 = *(_DWORD*)(v2 + 32);
      goto LABEL_12;
    }
  }
  else {
    v1 = 0;
  }
  v3 = 0;
LABEL_12:
  v4 = game_gmap_GmapClock_kDefaultTime_ptr;
  v5 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  if (game_gmap_GmapClock_instance_ == 0) {
    v5 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if (v3 > 10000 * *v5 + 100 * v5[1] + v5[2]) {
    v1 |= 0x20000u;
  }
  if ((*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 304LL) & 1) == 0 ||
      (game_gmap_GmapClock_instance_ == 0 ||
       *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
               *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
               *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
           0) &&
          ((v30_.v31 = &GameData_1adebe5,
            v30_.v30 =
                (__int64*)game_HashString_alt2((__int64)&GameData_1adebe5),
            game_GameModeData_instance_ == 0) ||
           (v6 = game_GameVariableTable_Find_alt1(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)&v30_.v30)) == 0 ||
           *(_DWORD*)(v6 + 32) == 0)) {
    v1 |= 8u;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v7 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v7 = (__int16*)v4;
  }
  if ((GameRoutine_143d0a0_alt1((__int64)&GameData_1a8d4c3, v7) & 1) != 0) {
    v8 = v1;
  }
  else {
    v8 = v1 | 2;
  }
  v9 = game_821090(2),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (game_GameModeData_instance_ != 0 &&
      (v11 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)v9)) != 0) {
    if (*(int*)(v11 + 32) <= 0) {
      v12 = v8 | 0x400000;
    }
    else {
      v12 = v8;
    }
  }
  else {
    v12 = v8 | 0x400000;
  }
  v13 = &v30_.v30;
  v27 = v12 | 0x100;
  v25_.v25[0] = GameData_1faf668;
  v25_.v25[1] = &v27;
  v25_.v26 = v25_.v25;
  v28_.v28[0] = GameData_1faf5e8;
  v28_.v28[1] = v25_.v25;
  v28_.v29 = v28_.v28;
  v14 = *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
  v30_.v32 = v28_.v28;
  v30_.v33 = (unsigned __int64*)&v30_.v30;
  v15 = *(unsigned int*)(v14 + 80);
  v30_.v30 = GameData_212d7f8[0] + 2;
  v30_.v31 = (_QWORD*)(((__int128*)0x10LL) + 4);
  if ((int)v15 < 1) {
    goto LABEL_44;
  }
  v16 = 0;
  v17 = 12 * v15;
  do {
    v10 = *(_QWORD*)(v14 + 8) + v16;
    if (*(_WORD*)(v10 + 2) != 0) {
      if (v30_.v33 == nullptr) {
        GameRoutine_60a310_alt1(),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      (*(void (**)(unsigned __int64*))(*v30_.v33 + 48))(v30_.v33),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v16 += 12;
  } while (v17 != v16);
  v13 = (__int64**)v30_.v33;
  if (v30_.v33 == (unsigned __int64*)&v30_.v30) {
  LABEL_44:
    v18 = 4;
  }
  else {
    if (v30_.v33 == nullptr) {
      goto LABEL_46;
    }
    v18 = 5;
  }
  ((void (*)(__int64**, __int64))(*v13)[v18])(v13, v10),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_46:
  if (v28_.v29 == v28_.v28) {
    v19 = 32;
  }
  else {
    if (v28_.v29 == nullptr) {
      goto LABEL_51;
    }
    v19 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v28_.v29 + v19))(v28_.v29, v10),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_51:
  if (v25_.v26 == v25_.v25) {
    v20 = 32;
  }
  else {
    if (v25_.v26 == nullptr) {
      goto LABEL_56;
    }
    v20 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v25_.v26 + v20))(v25_.v26, v10),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_56:
  LODWORD(v28_.v28[0]) = 0;
  v21 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
  v30_.v33 = (unsigned __int64*)&v30_.v30;
  v30_.v30 = (__int64*)GameData_1faf458;
  v30_.v31 = v28_.v28;
  FacilityUnitList_145e440(v21, (__int64)&v30_.v30, 2),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v30_.v33 == (unsigned __int64*)&v30_.v30) {
    v23 = 32;
  }
  else {
    if (v30_.v33 == nullptr) {
      goto LABEL_61;
    }
    v23 = 40;
  }
  (*(void (**)(unsigned __int64*, __int64))(*v30_.v33 + v23))(v30_.v33, v22),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_61:
  if (SLODWORD(v28_.v28[0]) >= 1) {
    return v27;
  }
  else {
    return v27 | 0x40;
  }
}

__int64 FacilityUtil_949930()
{
  int v0;
  int v1;
  __int64 v2;
  _BOOL4 v3;
  __int64 v4;
  __int16* v5;
  char v6;
  __int64* v7;
  __int64 v8;
  _BOOL4 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  struct {
    __int64 (**v14)();
    int* v15;
    char gap16_[16];
    unsigned __int64* v16;
  } v14_;
  int v17;

  v0 = 0x400000;
  if (game_GameModeData_instance_ != 0) {
    if (*(_BYTE*)(game_GameModeData_instance_ + 15) == 9) {
      v1 = 0;
    }
    else {
      v1 = 0x400000;
    }
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 2) {
      v0 = 0x400000;
    }
    else {
      v0 = v1;
    }
  }
  v2 = game_gmap_GmapClock_instance_;
  if (*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 304LL) == 1) {
    if (game_gmap_GmapClock_instance_ != 0 &&
        *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
            0) {
      v3 = true;
    }
    else {
      v14_.v15 = (int*)&GameData_1adebe5;
      v14_.v14 =
          (__int64 (**)(void))game_HashString_alt2((__int64)&GameData_1adebe5);
      v3 = game_GameModeData_instance_ != 0 &&
           (v4 = game_GameVariableTable_Find_alt1(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)&v14_.v14)) != 0 &&
           *(_DWORD*)(v4 + 32) != 0;
      v2 = game_gmap_GmapClock_instance_;
    }
  }
  else {
    v3 = false;
  }
  if (v2 != 0) {
    v5 = (__int16*)(v2 + 8);
  }
  else {
    v5 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v6 = GameRoutine_143d0a0_alt1((__int64)&GameData_1a8d4c3, v5);
  v7 = game_821090(2);
  v9 = game_GameModeData_instance_ != 0 &&
       (v8 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)v7)) != 0 &&
       *(_DWORD*)(v8 + 32) > 0;
  v17 = 0;
  v10 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
  v14_.v16 = (unsigned __int64*)&v14_.v14;
  v14_.v14 = GameData_1faf458;
  v14_.v15 = &v17;
  FacilityUnitList_145e440(v10, (__int64)&v14_.v14, 2);
  if (v14_.v16 == (unsigned __int64*)&v14_.v14) {
    v11 = 32;
  }
  else {
    if (v14_.v16 == nullptr) {
      goto LABEL_30;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v14_.v16 + v11))((__int64)v14_.v16);
LABEL_30:
  v12 = v0 | 8;
  if (v3) {
    v12 = v0;
  }
  if ((v6 & 1) == 0) {
    v12 |= 2u;
  }
  if (!v9) {
    v12 |= 0x400000u;
  }
  if (v17 >= 1) {
    return v12;
  }
  else {
    return v12 | 0x40;
  }
}

__int64 FacilityUtil_949b10(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  int v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  __int16 v8;
  __int16 v9;
  __int16 v10;
  __int16 v11;
  __int64 result;
  __int64 v13;
  void* v14;
  __int16 v15;
  __int16 v16;

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0) {
    v1 = *(_QWORD*)(v1 + 392);
  }
  v13 = v1;
  GameRoutine_1472720(&v13);
  v14 = &GameData_1a98de5;
  v13 = game_HashString(&GameData_1a98de5);
  game_VariableManager_SetFlag(&v13, 1);
  if (game_GameModeData_instance_ != 0 &&
      *(_BYTE*)(game_GameModeData_instance_ + 56) == 5) {
    v14 = &GameData_1a856ca;
    v13 = game_HashString(&GameData_1a856ca);
    if (game_GameModeData_instance_ != 0) {
      v3 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v13);
      if (v3 != 0) {
        v4 = *(_DWORD*)(v3 + 32);
        v5 = game_gmap_GmapClock_instance_;
        v6 = v4 == 0 || game_gmap_GmapClock_instance_ == 0;
        if (!v6 && *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                           *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                           *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
                       0) {
          v7 = game_gmap_GmapClock_instance_ + 8;
          v8 = *(_WORD*)(game_gmap_GmapClock_instance_ + 8);
          v9 = *(_WORD*)(game_gmap_GmapClock_instance_ + 18);
          v10 = *(_WORD*)(game_gmap_GmapClock_instance_ + 16);
          v13 = game_gmap_GmapClock_instance_;
          LOWORD(v14) = v8;
          *(_DWORD*)((char*)&v14 + 2) =
              *(_DWORD*)(game_gmap_GmapClock_instance_ + 10);
          v11 = *(_WORD*)(game_gmap_GmapClock_instance_ + 14);
          v16 = v9;
          v15 = v10;
          *(_WORD*)(game_gmap_GmapClock_instance_ + 18) = 0;
          HIWORD(v14) = v11;
          *(_WORD*)(v5 + 14) = v11 + v4 / 60;
          *(_WORD*)(v5 + 16) = v10 + v4 % 60;
          Dir_70d7a0(v7);
          *(_DWORD*)(v5 + 44) = 0;
          GameRoutine_86b4e0(&v13);
        }
      }
    }
  }
  v14 = &GameData_1a85711;
  v13 = game_HashString(&GameData_1a85711);
  result = GameRoutine_9b11a0(&GameData_21f61c0, &v13, 1);
  if (*(_BYTE*)(a1 + 104) == 3) {
    v14 = &GameData_1a94d5c;
    v13 = game_HashString(&GameData_1a94d5c);
    result = GameRoutine_9b11a0(&GameData_21f61c0, &v13, 1);
  }
  if (game_GameModeData_instance_ != 0) {
    return GameVariable_828dc0(
        *(_QWORD*)(game_GameModeData_instance_ + 48),
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 392LL) + 24LL) + 1552LL, 1);
  }
  return result;
}

__int64 FacilityUtil_949cf0()
{
  __int64 v0;
  __int64 v1;

  v0 = GameRoutine_821090(39);
  if (game_GameModeData_instance_ == 0) {
    return 0x400000;
  }
  v1 = game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                   v0);
  if (v1 == 0 || *(int*)(v1 + 32) < 1) {
    return 0x400000;
  }
  if ((GameRoutine_159a4a0() & 1) != 0) {
    return 0;
  }
  return 0x100000;
}

__int64 FacilityUtil_949d50()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 result;
  struct {
    __int64 v4;
    void* v5;
  } v4_;

  v4_.v5 = &GameData_1ac4744;
  v4_.v4 = game_HashString_alt2((__int64)&GameData_1ac4744);
  if (game_GameModeData_instance_ != 0) {
    v0 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v4_.v4);
    if (v0 != 0 && *(_DWORD*)(v0 + 32) != 0) {
      v4_.v5 = &GameData_1adfa87;
      v4_.v4 = game_HashString_alt2((__int64)&GameData_1adfa87);
      if (game_GameModeData_instance_ != 0) {
        v1 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v4_.v4);
        if (v1 != 0 && *(_DWORD*)(v1 + 32) != 0) {
          v4_.v5 = &GameData_1a86f9b;
          v4_.v4 = game_HashString_alt2((__int64)&GameData_1a86f9b);
          if (game_GameModeData_instance_ != 0) {
            v2 = game_GameVariableTable_Find_alt1(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)&v4_.v4);
            if (v2 != 0 && *(_DWORD*)(v2 + 32) != 0) {
              return 0;
            }
          }
        }
      }
    }
  }
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find_alt1(
      *(_QWORD**)(game_GameModeData_instance_ + 48),
      (unsigned __int64*)&GameData_22491f8);
  if (result != 0) {
    return *(_DWORD*)(result + 32) > 0;
  }
  return result;
}

__int64 FacilityUtil_949e50()
{
  __int64 result;

  game_VariableManager_SetFlag(&GameData_22491f8, 0);
  result = FacilityUtil_949380();
  if (result != 0) {
    return GameRoutine_717fc0(*(_QWORD*)(result + 24) + 1152LL, 1);
  }
  return result;
}

__int64 game_facility_FacilityUtil_GetSpecialDramaOnCalendar(__int16* a1,
                                                             __int64 a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  _QWORD v13[4];
  _QWORD* v14;
  __int64 v15;

  v3 = v13;
  v15 = 0;
  v13[0] = GameData_1faf6e8;
  v13[1] = &v15;
  v14 = v13;
  if (GameData_21c9650 == 0) {
    goto LABEL_19;
  }
  v5 = *(_QWORD*)(GameData_21c9650 + 16);
  v4 = *(_QWORD*)(GameData_21c9650 + 24);
  if (v5 != v4) {
    v6 = *a1;
    v7 = a1[1];
    v8 = a1[2];
    v9 = 32;
    while (v6 != *(unsigned __int16*)(v5 + 4) ||
           v7 != *(unsigned __int8*)(v5 + 6) ||
           v8 != *(unsigned __int8*)(v5 + 7)) {
      v5 += 368;
      if (v5 == v4) {
        v3 = v13;
        goto LABEL_20;
      }
    }
  }
  v3 = v13;
  v9 = 32;
  if (v5 == v4 || v5 == 0) {
    goto LABEL_20;
  }
  if (*(_BYTE*)(v5 + 1) == 0) {
    v3 = v13;
  LABEL_19:
    v9 = 32;
    goto LABEL_20;
  }
  v10 = v5 + 8;
  v11 = 0;
  do {
    if (v14 == nullptr) {
      GameRoutine_60a310(0, a2);
    }
    (*(void (**)(_QWORD*, __int64))(*v14 + 48LL))(v14, v10);
    ++v11;
    v10 += 24;
  } while (v11 < *(unsigned __int8*)(v5 + 1));
  v3 = v14;
  if (v14 == v13) {
    goto LABEL_19;
  }
  if (v14 != nullptr) {
    v9 = 40;
  LABEL_20:
    (*(void (**)(_QWORD*, __int64))(*v3 + v9))(v3, a2);
  }
  return v15;
}

__int64 game_facility_FacilityUtil_CalcEducateSkill(__int64 a1)
{
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  struct {
    __int64 (**v7)();
    __int64 v8;
    unsigned int* v9;
    char gap24_[8];
    __int64 (***v10)();
  } v7_;
  unsigned int v11;

  v11 = 0;
  FacilityUnitList_145eea0((void*)(&v7_.v7),
                           *(_QWORD*)(game_UnitListSet_instance_ + 40),
                           (__int64)&GameData_1aed6ab);
  if (v7_.v7 != nullptr && ((_WORD)v7_.v7[6] & 0x21) == 0) {
    v3 = (__int64)*v7_.v7;
    v4 = v7_.v8;
    if (v7_.v8 == 0) {
      goto LABEL_8;
    }
  }
  else {
    v3 = 0;
    v4 = v7_.v8;
    if (v7_.v8 == 0) {
      goto LABEL_8;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
LABEL_8:
  result = 1;
  if (v3 != 0 && a1 != v3) {
    result = v11 | 0x4000;
    v11 |= 0x4000u;
    if (a1 != 0) {
      v7_.v7 = GameData_1fafa78;
      v7_.v8 = a1;
      v7_.v9 = &v11;
      v7_.v10 = &v7_.v7;
      game_Unit_EachEducateTargetSkill(v3, (__int64)&v7_.v7);
      if (v7_.v10 == &v7_.v7) {
        v6 = 4;
      }
      else {
        if (v7_.v10 == nullptr) {
          return v11;
        }
        v6 = 5;
      }
      ((__int64 (*)(__int64))(*v7_.v10)[v6])((__int64)v7_.v10);
      return v11;
    }
  }
  return result;
}

__int64 FacilityUtil_94d840()
{
  __int64 (***v0)();
  __int64*** v1;
  __int64** v2;
  __int64** v3;
  __int64* v4;
  __int64* v5;
  _BOOL4 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  bool v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 (**v19)();
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  _QWORD* v25;
  __int64 v26;
  int v27;
  struct {
    _QWORD* v29;
    _QWORD* v30;
    __int64 v31;
  } v29_;
  struct {
    __int64 (**v32)();
    _QWORD* v33;
    char gap48_[16];
    unsigned __int64* v34;
  } v32_;
  __int64 v35;

  v0 = &v32_.v32;
  v1 = *(__int64****)(game_UnitListSet_instance_ + 8);
  v29_.v29 = nullptr;
  v29_.v30 = nullptr;
  v29_.v31 = 0;
  v32_.v32 = GameData_1faf3d8;
  v32_.v33 = &v29_.v29;
  v32_.v34 = (unsigned __int64*)&v32_.v32;
  v2 = *v1;
  v3 = v1[1];
  if (*v1 == v3) {
    goto LABEL_19;
  }
  do {
    v4 = *v2;
    v5 = v2[1];
    if (v5 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 1), 1u,
                                memory_order_relaxed);
    }
    if (v4 != nullptr) {
      v6 = (v4[6] & 0x3F) == 0;
      if (v5 == nullptr) {
        goto LABEL_11;
      }
    }
    else {
      v6 = false;
      if (v5 == nullptr) {
        goto LABEL_11;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64*))(*v5 + 16))(v5);
      std___1___shared_weak_count___release_weak(v5);
      if (!v6) {
        goto LABEL_3;
      }
      goto LABEL_12;
    }
  LABEL_11:
    if (v6) {
    LABEL_12:
      v35 = **v2;
      if (v32_.v34 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(unsigned __int64*, __int64*))(*v32_.v34 + 48))(v32_.v34,
                                                                  &v35);
    }
  LABEL_3:
    v2 += 2;
  } while (v2 != v3);
  v0 = (__int64 (***)(void))v32_.v34;
  if (v32_.v34 != (unsigned __int64*)&v32_.v32) {
    if (v32_.v34 != nullptr) {
      v7 = 5;
      goto LABEL_20;
    }
    goto LABEL_21;
  }
LABEL_19:
  v7 = 4;
LABEL_20:
  ((__int64 (*)(__int64))(*v0)[v7])((__int64)v0);
LABEL_21:
  v8 = v29_.v29;
  v9 = v29_.v30;
  v10 = v29_.v30 - v29_.v29;
  if (v10 < 129) {
    v14 = 0;
  LABEL_27:
    FacilityUtil_94f740_alt1(v8, v9, v10, nullptr, v14);
  }
  else {
    v11 = v29_.v30 - v29_.v29;
    v12 = GameData_212c060;
    while (1) {
      v13 = (__int64*)GameRoutine_1a09d20(8 * v11, v12);
      if (v13 != nullptr) {
        break;
      }
      v14 = v11 >> 1;
      v15 = v11 > 1;
      v11 >>= 1;
      if (!v15) {
        goto LABEL_27;
      }
    }
    FacilityUtil_94f740_alt1(v8, v9, v10, v13, v11);
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v16);
  }
  v17 = 0;
  v18 = 0;
  while (2) {
    v32_.v33 = &GameData_1aa853c;
    v19 = (__int64 (**)(void))game_HashString_alt2((__int64)&GameData_1aa853c);
    v20 = game_GameModeData_instance_;
    v32_.v32 = v19;
    if (game_GameModeData_instance_ == 0) {
    LABEL_35:
      if (v17 >= v20) {
        break;
      }
      goto LABEL_36;
    }
    v21 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v32_.v32);
    if (v21 != 0) {
      v20 = *(int*)(v21 + 32);
      goto LABEL_35;
    }
    if (v17 < 0) {
    LABEL_36:
      if (v17 >=
          (int)((unsigned __int64)((char*)v29_.v30 - (char*)v29_.v29) >> 3)) {
        break;
      }
      v22 = v29_.v29[v17++];
      v18 += *(unsigned __int8*)(v22 + 498);
      continue;
    }
    break;
  }
  v32_.v33 = &GameData_1a9ca01;
  v32_.v32 =
      (__int64 (**)(void))game_HashString_alt2((__int64)&GameData_1a9ca01);
  if (game_GameModeData_instance_ != 0 &&
      (v23 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v32_.v32)) != 0) {
    v24 = *(_DWORD*)(v23 + 32);
    v25 = v29_.v29;
    if (v29_.v29 == nullptr) {
      goto LABEL_47;
    }
  }
  else {
    v24 = 0;
    v25 = v29_.v29;
    if (v29_.v29 == nullptr) {
      goto LABEL_47;
    }
  }
  v29_.v30 = v25;
  v26 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v26 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26);
LABEL_47:
  v27 = v18 / (unsigned int)v17 + v24;
  if (v27 <= 1) {
    v27 = 1;
  }
  if (v27 >= 99) {
    return 99;
  }
  else {
    return (unsigned int)v27;
  }
}

__int64 game_facility_FacilityUtil_CalcStay_lambda0_Invoke(__int64 result,
                                                           _QWORD* a2)
{
  unsigned int* v2;
  unsigned int v3;
  __int64 v4;

  v2 = *(unsigned int**)(result + 8);
  v3 = *v2;
  if ((*v2 & 0x100000) != 0) {
    if (*(_BYTE*)(*a2 + 2090LL) != 3 ||
        (v4 = result, ((result = Unit_6d0400(*a2)) & 1) != 0) &&
            (v2 = *(unsigned int**)(v4 + 8), v3 = *v2, (*v2 & 0x100000) != 0)) {
      *v2 = v3 & 0xFFEFFFFF;
    }
  }
  return result;
}

bool game_facility_FacilityUtil_IsTrainingDiscountDay_lambda0_Invoke(__int64 a1,
                                                                     __int64 a2)
{
  unsigned __int8* v2;
  __int64 v3;
  int v4;
  _BOOL8 result;

  if (*(_BYTE*)(*(_QWORD*)a2 + 1LL) == 0) {
    return false;
  }
  v2 = (unsigned __int8*)(*(_QWORD*)a2 + 8LL);
  v3 = *(unsigned __int8*)(*(_QWORD*)a2 + 1LL) - 1LL;
  do {
    v4 = *v2;
    v2 += 24;
    result = v4 == 2;
  } while (v4 != 2 && v3-- != 0);
  return result;
}

__int64 game_facility_FacilityUtil_EachPerchFood_lambda0_Invoke(__int64 result,
                                                                int* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;

  if (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                          game_TransporterConst_List_instance__ptr
                                              [0] +
                                      8LL) +
                           8LL) +
                12LL * *a2 + 4) != 0 &&
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                           8LL *
                               *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr
                                                                              [0] +
                                                                          8LL) +
                                                               8LL) +
                                                    12LL * *a2 + 4)) +
                94LL) == 2) {
    v2 = *(_QWORD*)(result + 8);
    v4 = *a2;
    v3 = *(_QWORD*)(v2 + 32);
    if (v3 == 0) {
      GameRoutine_60a310(0, a2);
    }
    return (*(__int64 (**)(__int64, int*))(*(_QWORD*)v3 + 48LL))(v3, &v4);
  }
  return result;
}

__int64 game_facility_FacilityUtil_CalcPerch_lambda0_Invoke(__int64 result)
{
  _DWORD* v1;

  v1 = *(_DWORD**)(result + 8);
  if ((*v1 & 0x100) != 0) {
    *v1 &= ~0x100u;
  }
  return result;
}

__int64 game_facility_FacilityUtil_GetSpecialDramaOnCalendar_lambda0_Invoke(
    __int64 result, __int64 a2)
{
  __int64 v2;

  if (*(_BYTE*)a2 == 5) {
    v2 = *(_QWORD*)(a2 + 8);
    if ((*(_BYTE*)(a2 + 1) & 1) == 0) {
      if (v2 == 0) {
        return result;
      }
      v2 = *(_QWORD*)(v2 + 144);
    }
    if (v2 != 0) {
      **(_QWORD**)(result + 8) = v2;
    }
  }
  return result;
}

bool game_facility_FacilityUtil_IsCookingDiscountDay_lambda0_Invoke(__int64 a1,
                                                                    __int64 a2)
{
  unsigned __int8* v2;
  __int64 v3;
  int v4;
  _BOOL8 result;

  if (*(_BYTE*)(*(_QWORD*)a2 + 1LL) == 0) {
    return false;
  }
  v2 = (unsigned __int8*)(*(_QWORD*)a2 + 8LL);
  v3 = *(unsigned __int8*)(*(_QWORD*)a2 + 1LL) - 1LL;
  do {
    v4 = *v2;
    v2 += 24;
    result = v4 == 4;
  } while (v4 != 4 && v3-- != 0);
  return result;
}

__int64

game_facility_FacilityUtil_CalcStableBreeding_lambda0_Invoke(__int64 result)
{
  _DWORD* v1;

  v1 = *(_DWORD**)(result + 8);
  if ((*v1 & 0x100) != 0) {
    *v1 &= ~0x100u;
  }
  return result;
}

__int64

game_facility_FacilityUtil_CalcStableBreeding_lambda1_Invoke(__int64 result,
                                                             __int64 a2)
{
  __int16* v2;
  _DWORD* v3;

  if (*(_BYTE*)a2 != 0) {
    if (game_gmap_GmapClock_instance_ != 0) {
      v2 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
    }
    else {
      v2 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
    }
    if (*(_DWORD*)(a2 + 8) != 10000 * *v2 + 100 * v2[1] + v2[2]) {
      v3 = *(_DWORD**)(result + 8);
      if ((*v3 & 0x10000) != 0) {
        *v3 &= ~0x10000u;
      }
    }
  }
  return result;
}

__int64

game_facility_FacilityUtil_CalcReinforceSkill_lambda0_Invoke(__int64 result,
                                                             _DWORD* a2)
{
  if (((*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                         8 * (*a2 & 0xFFFLL)) +
                              24LL) +
                   8LL) ^
        *a2) &
       0xFFF) == 0) {
    ++**(_DWORD**)(result + 8);
  }
  return result;
}

__int64

game_facility_FacilityUtil_CalcEducateSkill_lambda0_Invoke(__int64 result,
                                                           _DWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _DWORD* v8;

  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                        8LL * (*a2 & 0xFFF)) +
                             24LL) +
                  1088LL);
  if (v2 != 0) {
    v3 = *(_QWORD*)(result + 8);
    v4 = *(_QWORD*)(v3 + 1080);
    v5 = *(_QWORD*)(v3 + 1072);
    v6 = (v4 - v5) >> 2;
    while (1) {
      v7 = *(unsigned __int16*)(v2 + 16);
      if (v6 >= ((v7 >> 5) & 0x7F) + 1 &&
          ((*(_DWORD*)(v5 + 4 * ((v7 >> 5) & 0x7F)) >> v7) & 1) != 0) {
        break;
      }
      v2 = *(_QWORD*)(*(_QWORD*)(v2 + 24) + 1080LL);
      if (v2 == 0) {
        goto LABEL_7;
      }
    }
  }
  else {
  LABEL_7:
    v8 = *(_DWORD**)(result + 16);
    if ((*v8 & 0x4000) != 0) {
      *v8 &= ~0x4000u;
    }
  }
  return result;
}

__int64* FacilityUtil_94f740(__int64* result, char* a2, unsigned __int64 a3,
                             __int64* a4, __int64 a5)
{
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  unsigned int v21;
  unsigned int v22;
  unsigned __int64 v23;
  unsigned __int64 v25;
  char* v26;
  __int64* v29;
  __int64* v31;
  __int64* v32;
  __int64* v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  unsigned int v38;
  __int64 v39;
  __int64 v40;

  if (a3 >= 2) {
    if (a3 == 2) {
      v5 = *((_QWORD*)a2 - 1);
      v6 = *result;
      if (v5 == *result) {
        return result;
      }
      v7 = *(unsigned __int8*)(v5 + 498);
      v8 = *(unsigned __int8*)(v6 + 498);
      if (v7 == v8) {
        if (*(__int16*)(v5 + 490) >= *(__int16*)(v6 + 490)) {
          return result;
        }
      }
      else if (v7 <= v8) {
        return result;
      }
      *result = v5;
      *((_QWORD*)a2 - 1) = v6;
      return result;
    }
    if ((__int64)a3 <= 128) {
      if (result == (__int64*)a2) {
        return result;
      }
      v9 = result + 1;
      if (result + 1 == (__int64*)a2) {
        return result;
      }
      v10 = 0;
      v11 = result;
    LABEL_15:
      v13 = v11;
      v11 = v9;
      v15 = *v13;
      v14 = v13[1];
      if (v14 == *v13) {
        goto LABEL_14;
      }
      v16 = *(unsigned __int8*)(v14 + 498);
      v17 = *(unsigned __int8*)(v15 + 498);
      if (v16 == v17) {
        if (*(__int16*)(v14 + 490) >= *(__int16*)(v15 + 490)) {
          goto LABEL_14;
        }
      }
      else if (v16 <= v17) {
        goto LABEL_14;
      }
      v13[1] = v15;
      v12 = result;
      if (v13 == result) {
        goto LABEL_13;
      }
      v18 = v10;
      while (1) {
        v19 = (__int64*)((char*)result + v18);
        v20 = *(__int64*)((char*)result + v18 - 8);
        if (v14 == v20) {
        LABEL_12:
          v12 = v13;
          goto LABEL_13;
        }
        v21 = *(unsigned __int8*)(v14 + 498);
        v22 = *(unsigned __int8*)(v20 + 498);
        if (v21 == v22) {
          if (*(__int16*)(v14 + 490) >= *(__int16*)(v20 + 490)) {
            v12 = (__int64*)((char*)result + v18);
          LABEL_13:
            *v12 = v14;
          LABEL_14:
            v9 = v11 + 1;
            v10 += 8;
            if (v11 + 1 == (__int64*)a2) {
              return result;
            }
            goto LABEL_15;
          }
        }
        else if (v21 <= v22) {
          goto LABEL_12;
        }
        --v13;
        v18 -= 8;
        *v19 = v20;
        if (v18 == 0) {
          v12 = result;
          goto LABEL_13;
        }
      }
    }
    v23 = a3 >> 1;
    v25 = a3 - (a3 >> 1);
    if ((__int64)a3 > a5) {
      v26 = (char*)result;
      FacilityUtil_94f740(result, (char*)&result[v23], a3 >> 1, a4, a5);
      FacilityUtil_94f740((__int64*)&v26[8 * v23], a2, v25, a4, a5);
      return (__int64*)FacilityUtil_94fd20(v26, &v26[8 * v23], a2, v23, v25,
                                           (__int64)a4, a5);
    }
    v29 = result;
    v31 = a4;
    FacilityUtil_94fa20(result, &result[v23], a3 >> 1, a4);
    v32 = &v31[v23];
    result = FacilityUtil_94fa20(&v29[v23], (__int64*)a2, v25, v32);
    v33 = &v31[a3];
    v34 = v32;
    while (1) {
      if (v34 == v33) {
        while (v31 != v32) {
          v39 = *v31++;
          *v29++ = v39;
        }
        return result;
      }
      v35 = *v34;
      v36 = *v31;
      if (*v34 != *v31) {
        v37 = *(unsigned __int8*)(v35 + 498);
        v38 = *(unsigned __int8*)(v36 + 498);
        if (v37 == v38) {
          if (*(__int16*)(v35 + 490) < *(__int16*)(v36 + 490)) {
            goto LABEL_43;
          }
        }
        else if (v37 > v38) {
        LABEL_43:
          ++v34;
          *v29 = v35;
          goto LABEL_36;
        }
      }
      *v29 = v36;
      ++v31;
    LABEL_36:
      ++v29;
      if (v31 == v32) {
        while (v34 != v33) {
          v40 = *v34++;
          *v29++ = v40;
        }
        return result;
      }
    }
  }
  return result;
}

__int64* FacilityUtil_94fa20(__int64* result, __int64* a2, unsigned __int64 a3,
                             __int64* a4)
{
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  __int64* v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  unsigned int v24;
  unsigned __int64 v25;
  __int64* v26;
  __int64* v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;
  __int64* v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;

  switch (a3) {
  case 0uLL:
    return result;
  case 2uLL:
    v4 = *(a2 - 1);
    v5 = *result;
    if (v4 != *result) {
      v6 = *(unsigned __int8*)(v4 + 498);
      v7 = *(unsigned __int8*)(v5 + 498);
      if (v6 == v7) {
        if (*(__int16*)(v4 + 490) >= *(__int16*)(v5 + 490)) {
          goto LABEL_8;
        }
      }
      else if (v6 <= v7) {
        goto LABEL_8;
      }
      *a4 = v4;
      v8 = *result;
      goto LABEL_47;
    }
  LABEL_8:
    *a4 = v5;
    v8 = *(a2 - 1);
  LABEL_47:
    a4[1] = v8;
    return result;
  case 1uLL:
    *a4 = *result;
    return result;
  default:
    break;
  }
  if ((__int64)a3 <= 8) {
    if (result == a2) {
      return result;
    }
    v9 = *result++;
    *a4 = v9;
    if (result == a2) {
      return result;
    }
    v10 = 0;
    v11 = a4;
    v12 = a4;
  LABEL_15:
    v14 = *v12++;
    v13 = v14;
    v15 = *result;
    if (*result == v14) {
    LABEL_13:
      *v12 = v15;
      goto LABEL_14;
    }
    v16 = *(unsigned __int8*)(v15 + 498);
    v17 = *(unsigned __int8*)(v13 + 498);
    if (v16 == v17) {
      if (*(__int16*)(v15 + 490) >= *(__int16*)(v13 + 490)) {
        goto LABEL_13;
      }
    }
    else if (v16 <= v17) {
      goto LABEL_13;
    }
    v11[1] = v13;
    v18 = a4;
    if (v11 == a4) {
      goto LABEL_30;
    }
    v19 = v10;
    while (1) {
      v20 = (__int64*)((char*)a4 + v19);
      v21 = *result;
      v22 = *(__int64*)((char*)a4 + v19 - 8);
      if (*result == v22) {
      LABEL_27:
        v18 = v11;
        goto LABEL_30;
      }
      v23 = *(unsigned __int8*)(v21 + 498);
      v24 = *(unsigned __int8*)(v22 + 498);
      if (v23 == v24) {
        if (*(__int16*)(v21 + 490) >= *(__int16*)(v22 + 490)) {
          v18 = (__int64*)((char*)a4 + v19);
        LABEL_30:
          *v18 = *result;
        LABEL_14:
          ++result;
          v10 += 8;
          v11 = v12;
          if (result == a2) {
            return result;
          }
          goto LABEL_15;
        }
      }
      else if (v23 <= v24) {
        goto LABEL_27;
      }
      --v11;
      v19 -= 8;
      *v20 = v22;
      if (v19 == 0) {
        v18 = a4;
        goto LABEL_30;
      }
    }
  }
  v25 = a3 >> 1;
  v26 = result;
  v30 = &result[a3 >> 1];
  v31 = 8 * (a3 >> 1);
  GameRoutine_94f740(result, v30, v25, a4, v25);
  result = GameRoutine_94f740(v30, a2, a3 - v25, &a4[v25], a3 - v25);
  if (v31 != 0) {
    v32 = v30;
    v33 = a4;
    v34 = a2;
    v35 = v26;
    while (1) {
      if (v32 == a2) {
        while (v35 != v30) {
          v40 = *v35++;
          *v33++ = v40;
        }
        return result;
      }
      v36 = *v32;
      v37 = *v35;
      if (*v32 != *v35) {
        v38 = *(unsigned __int8*)(v36 + 498);
        v39 = *(unsigned __int8*)(v37 + 498);
        if (v38 == v39) {
          if (*(__int16*)(v36 + 490) < *(__int16*)(v37 + 490)) {
            goto LABEL_41;
          }
        }
        else if (v38 > v39) {
        LABEL_41:
          ++v32;
          *v33 = v36;
          goto LABEL_34;
        }
      }
      *v33 = v37;
      ++v35;
    LABEL_34:
      ++v33;
      if (v35 == v30) {
        goto LABEL_50;
      }
    }
  }
  v32 = v30;
  v33 = a4;
  v34 = a2;
LABEL_50:
  while (v32 != v34) {
    v41 = *v32++;
    *v33++ = v41;
  }
  return result;
}

char* FacilityUtil_94fd20(char* result, char* a2, char* a3, __int64 a4,
                          __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  char* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  char* v21;
  __int64 v22;
  unsigned int v23;
  unsigned int v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  unsigned int v32;
  unsigned int v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  _QWORD* v41;
  __int64 v42;
  __int64 v43;
  _QWORD* v44;
  __int64 v45;
  char* v46;
  __int64 v47;
  unsigned int v48;
  unsigned int v49;
  __int64 v50;
  _QWORD* v51;
  char* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned int v56;
  unsigned int v57;
  __int64 v58;
  __int64 v59;
  char* v60;
  __int64 v61;
  __int64 v62;
  char* v63;

  if (a5 == 0) {
    return result;
  }
  while (a4 > a7 && a5 > a7) {
    if (a4 == 0) {
      return result;
    }
    v7 = *(_QWORD*)a2;
    v8 = 0;
    v9 = 0;
    while (1) {
      v10 = *(_QWORD*)&result[8 * v9];
      if (v7 != v10) {
        v11 = *(unsigned __int8*)(v7 + 498);
        v12 = *(unsigned __int8*)(v10 + 498);
        if (v11 == v12) {
          if (*(__int16*)(v7 + 490) < *(__int16*)(v10 + 490)) {
            break;
          }
          goto LABEL_7;
        }
        if (v11 > v12) {
          break;
        }
      }
    LABEL_7:
      ++v9;
      v8 -= 8;
      if (a4 == v9) {
        return result;
      }
    }
    v13 = a4 - v9;
    v14 = &result[-v8];
    v63 = a3;
    v61 = a7;
    v62 = a6;
    v60 = &result[-v8];
    if (a4 - v9 >= a5) {
      if (a4 - 1 == v9) {
        *(_QWORD*)&result[8 * v9] = v7;
        *(_QWORD*)a2 = v10;
        return result;
      }
      v16 = a3;
      v25 = v13 / 2;
      v26 = &result[8 * (v13 / 2)];
      if (a3 == a2) {
      LABEL_33:
        v18 = &v26[-v8];
        v15 = (v16 - a2) >> 3;
        goto LABEL_37;
      }
      v27 = *(_QWORD*)&v26[8 * v9];
      v28 = (a3 - a2) >> 3;
      v16 = a2;
      while (2) {
        v29 = v28 >> 1;
        v30 = &v16[8 * (v28 >> 1)];
        v31 = *(_QWORD*)v30;
        if (*(_QWORD*)v30 != v27) {
          v32 = *(unsigned __int8*)(v31 + 498);
          v33 = *(unsigned __int8*)(v27 + 498);
          if (v32 == v33) {
            if (*(__int16*)(v31 + 490) >= *(__int16*)(v27 + 490)) {
              goto LABEL_26;
            }
          LABEL_25:
            v16 = v30 + 8;
            v29 = v28 + ~v29;
            goto LABEL_26;
          }
          if (v32 > v33) {
            goto LABEL_25;
          }
        }
      LABEL_26:
        v28 = v29;
        if (v29 == 0) {
          goto LABEL_33;
        }
        continue;
      }
    }
    v15 = a5 / 2;
    v16 = &a2[8 * (a5 / 2)];
    if (v14 != a2) {
      v17 = *(_QWORD*)v16;
      v18 = &result[-v8];
      v19 = (a2 - result + v8) >> 3;
      while (1) {
        v20 = v19 >> 1;
        v21 = &v18[8 * (v19 >> 1)];
        v22 = *(_QWORD*)v21;
        if (v17 != *(_QWORD*)v21) {
          v23 = *(unsigned __int8*)(v17 + 498);
          v24 = *(unsigned __int8*)(v22 + 498);
          if (v23 == v24) {
            if (*(__int16*)(v17 + 490) < *(__int16*)(v22 + 490)) {
              goto LABEL_15;
            }
          }
          else if (v23 > v24) {
            goto LABEL_15;
          }
        }
        v18 = v21 + 8;
        v20 = v19 + ~v20;
      LABEL_15:
        v19 = v20;
        if (v20 == 0) {
          v34 = v14;
          goto LABEL_36;
        }
      }
    }
    v18 = a2;
    v34 = a2;
  LABEL_36:
    v25 = (v18 - v34) >> 3;
  LABEL_37:
    v35 = a5 - v15;
    v36 = a4;
    v37 = a5;
    v38 = a4 - v25 - v9;
    v39 = GameRoutine_6c29c0(v18);
    v40 = (char*)v39;
    if (v25 + v15 >= v37 + v36 - (v25 + v15) - v9) {
      v41 = (_QWORD*)v62;
      v42 = v61;
      FacilityUtil_94fd20(v39, v16, v63, v38, v35, v62, v61);
      result = v60;
      v16 = v18;
      v35 = v15;
      v38 = v25;
      a3 = v40;
    }
    else {
      v41 = (_QWORD*)v62;
      v42 = v61;
      FacilityUtil_94fd20(v60, v18, v39, v25, v15, v62, v61);
      a3 = v63;
      result = v40;
    }
    a4 = v38;
    a5 = v35;
    a2 = v16;
    a6 = (__int64)v41;
    a7 = v42;
    if (v35 == 0) {
      return result;
    }
  }
  if (a4 <= a5) {
    if (result == a2) {
      return result;
    }
    v50 = -a6;
    v51 = (_QWORD*)a6;
    v52 = result;
    do {
      v53 = *(_QWORD*)v52;
      v52 += 8;
      v50 -= 8;
      *v51++ = v53;
    } while (v52 != a2);
    while (1) {
      if (a2 == a3) {
        return (char*)memmove(result, a6, -(a6 + v50));
      }
      v54 = *(_QWORD*)a2;
      v55 = *(_QWORD*)a6;
      if (*(_QWORD*)a2 != *(_QWORD*)a6) {
        v56 = *(unsigned __int8*)(v54 + 498);
        v57 = *(unsigned __int8*)(v55 + 498);
        if (v56 == v57) {
          if (*(__int16*)(v54 + 490) < *(__int16*)(v55 + 490)) {
            goto LABEL_68;
          }
        }
        else if (v56 > v57) {
        LABEL_68:
          a2 += 8;
          *(_QWORD*)result = v54;
          goto LABEL_61;
        }
      }
      *(_QWORD*)result = v55;
      a6 += 8;
    LABEL_61:
      result += 8;
      if (v51 == (_QWORD*)a6) {
        return result;
      }
    }
  }
  if (a2 == a3) {
    return result;
  }
  v43 = 0;
  do {
    *(_QWORD*)(a6 + v43) = *(_QWORD*)&a2[v43];
    v43 += 8;
  } while (&a2[v43] != a3);
  v44 = (_QWORD*)(a6 + v43);
  while (2) {
    if (a2 != result) {
      v46 = a2 - 8;
      v45 = *((_QWORD*)a2 - 1);
      v47 = *(v44 - 1);
      if (v47 != v45) {
        v48 = *(unsigned __int8*)(v47 + 498);
        v49 = *(unsigned __int8*)(v45 + 498);
        if (v48 == v49) {
          if (*(__int16*)(v47 + 490) < *(__int16*)(v45 + 490)) {
            goto LABEL_48;
          }
        }
        else if (v48 > v49) {
        LABEL_48:
          *((_QWORD*)a3 - 1) = v45;
          a3 -= 8;
          a2 = v46;
          if (v44 == (_QWORD*)a6) {
            return result;
          }
          continue;
        }
      }
      v45 = *(v44 - 1);
      v46 = a2;
      --v44;
      goto LABEL_48;
    }
    break;
  }
  if ((_QWORD*)a6 != v44) {
    v58 = -8;
    do {
      v59 = *--v44;
      *(_QWORD*)&a3[v58] = v59;
      v58 -= 8;
    } while (v44 != (_QWORD*)a6);
  }
  return result;
}

__int64 game_facility_FacilityUtil_EntryVariable_lambda0_Invoke(__int64 a1,
                                                                __int64 a2)
{
  return GameVariable_826e40(game_GameModeData_instance_ + 40, 4, a2, 0, 0, 0,
                             99999, 0);
}

__int64 game_facility_FacilityUtil_EntryVariable_lambda1_Invoke(__int64 a1,
                                                                __int64 a2)
{
  return GameVariable_826e40(game_GameModeData_instance_ + 40, 9, a2, 0, 0, 0,
                             99999, 0);
}

_QWORD* game_facility_FacilityUtil_EntryVariable_lambda2_Invoke(__int64 a1,
                                                                __int64 a2)
{
  _QWORD* result;
  char* v3;
  char v4;
  _BYTE* v5;
  _BYTE* v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[4];
  _QWORD* v10;
  _QWORD v11[2];

  result = v9;
  v3 = *(char**)(*(_QWORD*)a2 + 24LL);
  v4 = *v3;
  v5 = *((_BYTE**)v3 + 2);
  v10 = v9;
  if ((v4 & 1) != 0) {
    v6 = v5;
  }
  else {
    v6 = v3 + 1;
  }
  v9[0] = GameData_1fafb78;
  if (v6 == nullptr) {
    goto LABEL_11;
  }
  if (*v6 == 0) {
    result = v9;
  LABEL_11:
    v8 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v8))(result);
  }
  v11[1] = v6;
  v11[0] = game_HashString(v6);
  if (v10 == nullptr) {
    GameRoutine_60a310(0, v7);
  }
  (*(void (**)(_QWORD*, _QWORD*))(*v10 + 48LL))(v10, v11);
  result = v10;
  if (v10 == v9) {
    goto LABEL_11;
  }
  if (v10 == nullptr) {
    return result;
  }
  v8 = 40;
  return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v8))(result);
}

#pragma GCC visibility pop
