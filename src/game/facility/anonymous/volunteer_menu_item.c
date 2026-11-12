#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_9591b0(PSEUDO_X8, _QWORD);
__int64 Alignment_56b600(void);
__int64 GameRoutine_143f2e0(_QWORD);
__int64 GameRoutine_145e440(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1462780(_QWORD, _QWORD);
__int64 GameRoutine_1462ac0(void);
__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1584200(_QWORD, _QWORD);
__int64 GameRoutine_15e7650(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_16eb960(_QWORD, _QWORD);
__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_16ef100(_QWORD, _QWORD);
__int64 GameRoutine_16ef210(_QWORD, _QWORD);
__int64 GameRoutine_1927480(_QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_90dc20(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1aa0aa7;
extern __int64 (*game_facility_anonymous_VolunteerSubMenuItem_vtable[])();
extern __int64 GameData_212ddf8[2];
extern __int64 GameData_21f4340;
extern __int64 GameData_21f4348;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_UnitListSet_instance_;
extern __int64* GameData_212cc60[59];
extern __int64* GameData_212dcd0;
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
extern char GameData_1a9f09e;
__int64 VolunteerMenuItem_Unknown25_9bbfc0(__int64 a1);
__int64 VolunteerMenuItem_RightCall(__int64 a1);
__int64 VolunteerMenuItem_Unknown75_alt1(__int64 a1, __int64 a2) __asm__(
    "VolunteerMenuItem_Unknown75");
__int64
VolunteerMenuItem_Unknown76_alt1(__int64 a1, __int64 a2,
                                 int a3) __asm__("VolunteerMenuItem_Unknown76");
__int64 VolunteerMenuItem_Unknown25_19261a0(_QWORD* a1);
__int64 VolunteerMenuItem_Unknown72();
__int64 VolunteerMenuItem_Unknown73_alt1(__int64 a1) __asm__(
    "VolunteerMenuItem_Unknown73");
_QWORD* game_facility_15e7650(_QWORD* result, int, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void game_9591b0(PSEUDO_X8, __int64);
__int64 Alignment_56b600_alt1(__int64 result) __asm__("Alignment_56b600");
__int64 FacilityUnitList_145e440(__int64 result, __int64, char);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_16ef100(_QWORD*, const char*);
__int64 GameRoutine_16eb960_alt1(__int64,
                                 _QWORD*) __asm__("GameRoutine_16eb960");
__int64
GameRoutine_90dc20_alt1(__int64,
                        unsigned __int64*) __asm__("GameRoutine_90dc20");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_gameui_1584200(__int64, __int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 ui_LayoutAccessor_FindAlignment_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindAlignment");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* GameRoutine_60a020_alt1(char*, const char*) __asm__("GameRoutine_60a020");
unsigned __int64 GameHr_16ee370(__int64, __int64, _BYTE*);
void BasicMenuCursor_16e0c00(_QWORD*, __int64);
void GameRoutine_16ee520_alt1(__int64) __asm__("GameRoutine_16ee520");
void GameRoutine_16ef210_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_16ef210");
void LayoutAccessor_1562060(__int64*, __int64, __int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void VolunteerMenuItem_Unknown75(__int64 a1, _QWORD* a2);
__int64 VolunteerMenuItem_Unknown76(__int64 a1, _QWORD* a2, int a3);
void VolunteerMenuItem_Unknown73(__int64 a1);

__int64 VolunteerMenuItem_Unknown25_9bbfc0(__int64 a1)
{
  int v3;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  _QWORD* v12;
  __int64* v13;
  bool v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  int v20;
  _DWORD* v21;
  int v22;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;

  v3 = *(_DWORD*)(a1 + 84);
  result = 1;
  if (v3 == 0) {
    v6 = *(_QWORD*)(a1 + 8);
    v28 = a1;
    v29 = 1;
    v7 = *(_QWORD*)(v6 + 152);
    v30 = 0;
    if (v7 != 0) {
      v8 = v7;
    }
    else {
      v8 = v6;
    }
    v9 = GameRoutine_16eb960_alt1(v8, &v28);
    v10 = (__int64*)GameData_21f4340;
    v11 = GameData_21f4348;
    if (GameData_21f4340 != GameData_21f4348) {
      v12 = (_QWORD*)v9;
      v13 = (__int64*)fw_memory_g_heap_manager_ptr;
      do {
        v15 = *v10;
        v16 = fw_memory_HeapManager_Allocate_alt1(*v13, 160, 16, 0);
        v14 = true;
        v17 = v16;
        *(_WORD*)(v16 + 16) = 0;
        *(_DWORD*)(v16 + 40) = 0;
        *(_QWORD*)(v16 + 48) = 0;
        *(_QWORD*)(v16 + 56) = 0;
        *(_QWORD*)(v16 + 64) = 0;
        *(_QWORD*)(v16 + 72) = 0;
        *(_WORD*)(v16 + 80) = 257;
        *(_QWORD*)(v16 + 128) = 0;
        *(_QWORD*)v16 = game_facility_anonymous_VolunteerSubMenuItem_vtable;
        *(_QWORD*)(v16 + 8) = 0;
        *(_QWORD*)(v16 + 144) = v15;
        *(_BYTE*)(v16 + 82) = 1;
        if (v15 != 0) {
          v18 = GameRoutine_90dc20_alt1(game_GameModeData_instance_ + 152,
                                        *(unsigned __int64**)(v15 + 112));
          if ((v18 & 0x80000000) != 0) {
            v14 = true;
          }
          else {
            v19 = *(_QWORD*)(*(_QWORD*)(game_GameModeData_instance_ + 160) +
                             8LL) +
                  32LL * v18;
            v20 = *(_DWORD*)(v19 + 4);
            v21 = *(_DWORD**)(*(_QWORD*)(v19 + 16) + 24LL);
            v22 = v21[105];
            if (v22 > 2 && (signed __int32)v21[103] <= v20) {
              if ((unsigned int)v22 <= 3) {
                goto LABEL_32;
              }
              v27 = 4;
            }
            else if (v22 > 1 && (signed __int32)v21[102] <= v20) {
              if ((unsigned int)v22 <= 2) {
                goto LABEL_32;
              }
              v27 = 3;
            }
            else if (v22 >= 1 && (signed __int32)v21[101] <= v20) {
              if ((unsigned int)v22 <= 1) {
              LABEL_32:
                v14 = false;
                goto LABEL_8;
              }
              v27 = 2;
            }
            else {
              v26 = (int)v21[104];
              if ((int)v26 >= v22) {
                goto LABEL_32;
              }
              v27 = v26 + 1;
            }
            v14 = v21[v27 + 100] != 0;
          }
        }
      LABEL_8:
        *(_BYTE*)(v17 + 82) = v14;
        BasicMenuCursor_16e0c00(v12, v17);
        ++v10;
      } while (v10 != (__int64*)v11);
    }
    return 10;
  }
  return result;
}

__int64 VolunteerMenuItem_RightCall(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  char v3;

  v1 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v1 + 152) != 0) {
    v2 = *(_QWORD*)(v1 + 152);
  }
  else {
    v2 = *(_QWORD*)(a1 + 8);
  }
  v3 = GameRoutine_1462ac0();
  GameRoutine_1462780(v2, v3 & 1);
  return 9;
}

void VolunteerMenuItem_Unknown75(__int64 a1, _QWORD* a2)
{
  int v3;
  struct {
    _QWORD v4[2];
    char v5;
    char gap25_[3];
    int v6;
    int v7;
    char v8;
    char gap37_[3];
    __int64 v9;
  } v4_;

  v3 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 192LL))(
      *(_QWORD*)(a1 + 8));
  v4_.v8 = 0;
  v4_.v9 = 0;
  v4_.v4[0] = &GameData_1a9f09e;
  v4_.v4[1] = "MID_TempleMenu_MiracleEquip";
  v4_.v5 = 1;
  v4_.v6 = 11;
  v4_.v7 = v3;
  GameRoutine_16ef210_alt1(a2, v4_.v4);
}

__int64 VolunteerMenuItem_Unknown76(__int64 a1, _QWORD* a2, int a3)
{
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((a3 & 0x100000) != 0) {
    return GameHr_16ef100(a2, "MID_Menu_Cause_LvMaxVolunteer");
  }
  return result;
}

__int64 VolunteerMenuItem_Unknown25_19261a0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[1];
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = a1[1];
  }
  GameRoutine_1927480(v3);
  return 9;
}

__int64 VolunteerMenuItem_Unknown72()
{
  _QWORD v1[2];

  v1[1] = &GameData_1aa0aa7;
  v1[0] = game_HashString(&GameData_1aa0aa7);
  return GameRoutine_143f2e0(v1);
}

void VolunteerMenuItem_Unknown73(__int64 a1)
{
  __int64 v2;
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
  _BYTE* v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  bool v18;
  const char* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  _QWORD v23[4];
  struct {
    char v24[72];
    __int64 v25;
    char v26;
    char gap121_[35];
    int v27;
    int v28;
    char gap164_[10];
    bool v29;
  } v24_;
  struct {
    __int64 v30;
    __int64 v31;
  } v30_;
  struct {
    __int64 v32;
    const char* v33;
    const char* v34;
    int v35;
    char v36;
    char gap221_[3];
    __int64* v37;
  } v32_;
  int v38;

  ui_LayoutAccessor_SetPaneVisible_alt1(*(_QWORD*)(a1 + 8) + 848LL,
                                        (__int64)"N_HelpDetail", 1);
  GameHr_1562680(*(_QWORD*)(a1 + 8) + 848LL, "Type_Volunteer",
                 0x1.0000000000000p+0f);
  GameHr_1562680(*(_QWORD*)(a1 + 8) + 848LL, "State_Default",
                 0x1.0000000000000p+0f);
  v2 = ui_LayoutAccessor_FindAlignment_alt1(
      (__int64*)(*(_QWORD*)(a1 + 8) + 848LL), (__int64)"A_Title");
  if (v2 != 0) {
    Alignment_56b600_alt1(v2);
  }
  v3 = GameData_212dcd0;
  if (*GameData_212dcd0 != 0 &&
      ((v4 = *(unsigned int*)(*GameData_212dcd0 + 8)) & 0x80000000) == 0 &&
      (v5 = *(_QWORD*)(*(_QWORD*)(*GameData_212cc60[0] + 64) + 8 * v4)) != 0) {
    v6 = *(_QWORD*)(v5 + 88);
  }
  else {
    v6 = 0;
  }
  LayoutAccessor_1562060((__int64*)(*(_QWORD*)(a1 + 8) + 848LL),
                         (__int64)"T_Txt", v6);
  LayoutAccessor_1560070((void*)(&v30_.v30),
                         (__int64*)(*(_QWORD*)(a1 + 8) + 848LL), "L_MiracleLv");
  game_gameui_1584200((__int64)&v30_.v30, *(_QWORD*)(a1 + 88));
  if (v30_.v31 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v30_.v31);
  }
  v7 = *(_QWORD*)(a1 + 8);
  if (v7 != 0 && (v8 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 1112LL))(v8);
    v10 = *v3;
    if (*v3 == 0) {
      goto LABEL_18;
    }
  }
  else {
    v9 = v7 + 848;
    v10 = *v3;
    if (*v3 == 0) {
      goto LABEL_18;
    }
  }
  v11 = *(unsigned int*)(v10 + 8);
  if ((v11 & 0x80000000) == 0) {
    v12 = *(_QWORD*)(*(_QWORD*)(*GameData_212cc60[0] + 64) + 8 * v11);
    if (v12 != 0) {
      v13 = *(_BYTE**)(v12 + 96);
      goto LABEL_19;
    }
  }
LABEL_18:
  v13 = nullptr;
LABEL_19:
  GameHr_16ee370((__int64)v23, v9, v13);
  v14 = *(_DWORD*)(a1 + 84);
  v32_.v37 = nullptr;
  game_facility_15e7650(v23, v14, (__int64)&v32_.v32);
  v38 = 0;
  v15 = *(_DWORD*)(a1 + 84);
  v16 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
  v32_.v37 = &v32_.v32;
  v32_.v32 = GameData_212ddf8[0] + 16;
  v32_.v33 = (const char*)&v38;
  FacilityUnitList_145e440(v16, (__int64)&v32_.v32, 2);
  if (v32_.v37 == &v32_.v32) {
    v17 = 32;
  }
  else {
    if (v32_.v37 == nullptr) {
      goto LABEL_24;
    }
    v17 = 40;
  }
  (*(void (**)(__int64))(*v32_.v37 + v17))((__int64)v32_.v37);
LABEL_24:
  if ((v15 & 0x40) != 0) {
    v24_.v27 = v38;
    v24_.v28 = 2;
  }
  game_9591b0((void*)(&v32_.v32), *(_QWORD*)(a1 + 88));
  v18 = (*(_DWORD*)(a1 + 84) & 0x70000) != 0;
  if ((v32_.v32 & 1) != 0) {
    v19 = v32_.v34;
  }
  else {
    v19 = (char*)&v32_.v32 + 1;
  }
  GameRoutine_60a020_alt1(v24_.v24, v19);
  v24_.v29 = v18;
  if ((v32_.v32 & 1) != 0 && v32_.v34 != nullptr) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, (__int64)v32_.v34);
  }
  v21 = *(_QWORD*)(a1 + 8);
  v24_.v26 = 0;
  v24_.v25 = 0x100000006LL;
  v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 192LL))(v21);
  v32_.v36 = 0;
  v32_.v37 = nullptr;
  v32_.v32 = (__int64)"Tutorial";
  v32_.v33 = "MID_KeyHelp_Tutorial";
  LOBYTE(v32_.v34) = 1;
  HIDWORD(v32_.v34) = 10;
  v32_.v35 = v22;
  GameRoutine_16ef210_alt1(v23, &v32_.v32);
  GameRoutine_16ee520_alt1((__int64)v23);
}

#pragma GCC visibility pop
