#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 Alignment_56b600(void);
__int64 GameRoutine_10140c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_157d6f0(_QWORD, _QWORD);
__int64 GameRoutine_15dfde0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15dff80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e8d70(_QWORD);
__int64 GameRoutine_821090(_QWORD);
__int64 GameRoutine_8c77c0(_QWORD);
__int64 GameRoutine_8c9820(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8ca200(_QWORD);
__int64 GameRoutine_9e60d0(_QWORD);
__int64 _ZN4game4menu8GameMenu12Unknown16e9cd0Ev(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 game_menu_BasicMenu_Unknown16defa0(_QWORD);
__int64 game_menu_BasicMenu_Unknown96(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212fcd8;
extern __int64 (*game_menu_anonymous_RelianceMenuItem_vtable[])();
extern __int64 GameData_21c9ac0;
extern __int64 GameData_21c9ac8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 RelianceSelectMenu_Unknown96(__int64 a1);
__int64 RelianceSelectMenu_Unknown88(__int64 a1);
const char* RelianceSelectMenu_Unknown140(__int64 a1);
const char* RelianceSelectMenu_184c270(__int64 a1);
const char* RelianceSelectMenu_Unknown141(__int64 a1);
const char* RelianceSelectMenu_184c2b0(__int64 a1);
__int64 RelianceSelectMenu_Unknown142(__int64 result, __int64* a2);
__int64 RelianceSelectMenu_Unknown30(__int64 a1, char a2);
__int64 RelianceSelectMenu_Unknown103(__int64 a1);
__int64 RelianceSelectMenu_Unknown105(__int64 a1);
const char* RelianceSelectMenu_Unknown43(__int64 a1, char a2);
__int64 RelianceSelectMenu_184d1f0(__int64 a1, __int64 a2);
bool RelianceSelectMenu_184e500(__int64 a1, __int64 a2);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_15b75f0(_QWORD, _QWORD);
__int64 GameRoutine_16dd280(_QWORD);
__int64 GameRoutine_184d360(__int64 result, __int64*);
__int64 GameRoutine_19ef790(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8ca350(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9d5920(_QWORD, _QWORD);
__int64 GameVariable_828700(_QWORD, _QWORD, _QWORD);
__int64 RelianceMenuItem_1851ae0(__int64*);
__int64 RelianceMenuItem_18537d0(_QWORD, _QWORD, _QWORD);
__int64 RelianceSelectMenu_184e500_alt1(_QWORD, _QWORD) __asm__(
    "RelianceSelectMenu_184e500");
__int64 RelianceSelectMenu_1852b80(_QWORD, _QWORD, _QWORD);
__int64 RelianceSelectMenu_1852da0_alt1(_QWORD) __asm__(
    "RelianceSelectMenu_1852da0");
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_anonymous_RuntimeTalk_GetCondition(_QWORD);
__int64 game_gameui_anonymous_ProcGameUIFade_In(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
extern __int64 (*game_menu_anonymous_RelianceUnitGridMenuItem_vtable[])();
extern __int64 GameData_2259540;
extern __int64 fw_memory_g_heap_manager;
__int64 game_menu_RelianceSelectMenu_AddItemList_lambda1_Invoke(__int64 a1,
                                                                __int64 a2);
__int64 RelianceSelectMenu_1852650(__int64 result);
__int64 game_menu_RelianceSelectMenu_ZLCall_lambda0_Invoke(__int64 a1);
__int64 RelianceSelectMenu_1852da0_alt2(__int64 result) __asm__(
    "RelianceSelectMenu_1852da0");
__int64 game_menu_RelianceSelectMenu_AddItemList_lambda0_Invoke(__int64 result,
                                                                __int64* a2);
__int64 game_menu_RelianceSelectMenu_SortAndFilter_lambda0_Invoke_alt1(
    __int64 a1, _QWORD* a2,
    __int64* a3) __asm__("game_menu_RelianceSelectMenu_SortAndFilter_lambda0_"
                         "Invoke");
__int64 GameRoutine_184d360_alt1(_QWORD, _QWORD) __asm__("GameRoutine_184d360");
__int64 RelianceSelectMenu_184d1f0_alt1(_QWORD, _QWORD) __asm__(
    "RelianceSelectMenu_184d1f0");
__int64 RelianceSelectMenu_Unknown88_alt1(_QWORD) __asm__(
    "RelianceSelectMenu_Unknown88");
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
struct PseudoSret snd_play_ff2d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 double, float);
__int64 RelianceSelectMenu_Unknown112(__int64 a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* GameRoutine_8c9820_alt1(__int64, __int64,
                                 unsigned __int8) __asm__("GameRoutine_8c9820");
__int64* game_821090(int);
__int64 Alignment_56b600_alt1(__int64 result) __asm__("Alignment_56b600");
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_16e8d70(__int64*);
__int64
GameRoutine_10140c0_alt1(__int64*, __int64, int, _QWORD*,
                         unsigned __int8*) __asm__("GameRoutine_10140c0");
__int64 GameRoutine_15b75f0_alt1(__int64,
                                 __int64) __asm__("GameRoutine_15b75f0");
__int64 GameRoutine_8ca200_alt1(_QWORD*) __asm__("GameRoutine_8ca200");
__int64 GameRoutine_9d5920_alt1(__int64,
                                __int64**) __asm__("GameRoutine_9d5920");
__int64 GameRoutine_9e60d0_alt1(unsigned int*) __asm__("GameRoutine_9e60d0");
__int64 GameVariable_828700_alt1(__int64, unsigned __int64*,
                                 int) __asm__("GameVariable_828700");
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Util_157d6f0(__int64*, __int64*);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64
game_VariableManager_SetFlag_alt1(__int64 result,
                                  int) __asm__("game_VariableManager_SetFlag");
__int64 game_anonymous_RuntimeTalk_GetCondition_alt1(__int64) __asm__(
    "game_anonymous_RuntimeTalk_GetCondition");
__int64 game_menu_BasicMenu_Unknown16dd9a0_alt1(__int64 result) __asm__(
    "game_menu_BasicMenu_Unknown16dd9a0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindAlignment_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindAlignment");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
void GameRoutine_184d360_alt2(__int64, __int64*) __asm__("GameRoutine_184d360");
void GameRoutine_19ef790_alt1(__int64*, __int64,
                              unsigned int) __asm__("GameRoutine_19ef790");
void LayoutAccessor_1562060(__int64*, __int64, __int64);
void RelianceMenuItem_18537d0_alt1(_QWORD*, char, __int64,
                                   __int64) __asm__("RelianceMenuItem_18537d0");
void RelianceSelectMenu_1852b80_alt1(__int64*, __int64, __int64) __asm__(
    "RelianceSelectMenu_1852b80");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void RelianceSelectMenu_1852da0(__int64* a1);
__int64 game_menu_RelianceSelectMenu_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                                  __int64* a2,
                                                                  __int64* a3);
_QWORD* MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
__int64* GameRoutine_8ca350_alt1(__int64* result, __int64*,
                                 __int64*) __asm__("GameRoutine_8ca350");
__int64* game_820d50(int);
__int64 GameHr_1851ae0(__int64*);
__int64 GameSituation_906440(__int64, __int64*);
__int64 UnitUtil_12122d0(__int64*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GetHero(unsigned __int8);
__int64 game_UnitPool_GetFirst(int*);
bool game_HasSkill(_QWORD*, _DWORD*);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*GameData_20e83d0[])();
extern __int64 (*GameData_20e8d38[])();
extern __int64 (*GameData_20e8db8[])();
extern __int64 (*GameData_20e8e38[])();
extern __int64 (*GameData_20e8eb8[])();
extern __int64 GameData_21ca310;
void BasicMenuCursor_16e0c00_alt1(_QWORD*,
                                  __int64) __asm__("BasicMenuCursor_16e0c00");
void BasicMenu_16e1f40(_QWORD*, __int64, __int64);
void __attribute__((noreturn)) GameRoutine_60a310();
__int64 game_menu_RelianceSelectMenu_ZLCall(__int64 a1);
void game_menu_RelianceSelectMenu_AddItemList(__int64 a1);
__int64 RelianceSelectMenu_184dea0(unsigned int a1, char a2, __int64 a3);
__int64 game_menu_RelianceSelectMenu_SortAndFilter(__int64 a1);

__int64 RelianceSelectMenu_Unknown96(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;

  game_menu_BasicMenu_Unknown96(a1);
  if ((*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1)-8 <=
      0xFFFFFFF9) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 1056) + 96LL))(a1 + 1056);
  }
  v2 = *(_QWORD*)(a1 + 1072);
  *(_BYTE*)(a1 + 1080) = 0;
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 392);
    if (v3 != 0) {
      v4 = (__int64*)GameData_21c9ac0;
      v5 = GameData_21c9ac8;
      if (GameData_21c9ac0 != GameData_21c9ac8) {
        while (1) {
          v6 = *v4++;
          if ((unsigned int)RelianceSelectMenu_184d1f0(v3, v6) == 1) {
            break;
          }
          if (v4 == (__int64*)v5) {
            goto LABEL_10;
          }
        }
        *(_BYTE*)(a1 + 1080) = 1;
      }
    }
  }

LABEL_10:
  game_menu_BasicMenu_Unknown16dd9a0(a1);
  GameRoutine_16e8d70(a1 + 1056);
  return RelianceSelectMenu_Unknown88(a1);
}

__int64 RelianceSelectMenu_Unknown88(__int64 a1)
{
  int v1;
  __int64 v2;
  const char* v4;
  bool v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  bool v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  bool v27;
  __int64 v28;
  __int64 v30;
  int v32;
  const char* v33;
  const char* v34;
  const char* v35;
  int v36;
  __int64 v37;
  __int64 v38;
  char v39;
  char v40;
  __int64 result;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  int v46;
  char v47;
  __int64 v48;
  __int64 v49;
  struct {
    __int64* v50;
    __int64 v51;
  } v50_;
  struct {
    __int64 v52;
    int v53;
  } v52_;
  struct {
    _QWORD v54[2];
    __int64 v55;
    __int64 v56;
  } v54_;

  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v1 = *(_DWORD*)(a1 + 1064);
  v2 = *(_QWORD*)(a1 + 336);
  if (v2 != 0) {
    v4 = "Face_Default";
    if (*(__int64 (***)(void))v2 ==
        game_menu_anonymous_RelianceMenuItem_vtable) {
      v6 = *(_QWORD*)(v2 + 104);
      v7 = *(_QWORD*)(v2 + 88);
      v8 = *(unsigned __int8*)(v2 + 164);
      v5 = (unsigned int)RelianceSelectMenu_184d1f0(v6, *(_QWORD*)(v2 + 112)) ==
           1,
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (v8 != 0) {
        v4 = "Face_Unkown";
      }
    }
    else {
      v5 = false;
      v6 = 0;
      v7 = 0;
    }
  }
  else {
    v5 = false;
    v6 = 0;
    v7 = 0;
    v4 = "Face_Default";
  }
  v9 = *(_QWORD*)(a1 + 1072);
  ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"Face00", 0),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v10 =
      ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 848), (__int64)"Face00"),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v10 != 0) {
    v11 = __dynamic_cast(v10, GameData_212d670[0], GameData_212d678[0], 0),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  else {
    v11 = 0;
  }
  v52_.v52 = v9;
  v54_.v54[0] = 0;
  v54_.v54[1] = 0;
  v12 = *(__int64**)(a1 + 1088);
  v52_.v53 = 1;
  v13 = (__int64*)GameData_212fcd8;
  v14 = *(_QWORD*)GameData_212fcd8;
  v54_.v55 = 0;
  v54_.v56 = v14;
  GameRoutine_10140c0_alt1(v12, v11, 0, &v52_.v52, (unsigned __int8*)v54_.v54),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"Face01", 0),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v15 =
      ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 848), (__int64)"Face01"),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v7 != 0) {
    if (v15 != 0) {
      v16 = __dynamic_cast(v15, GameData_212d670[0], GameData_212d678[0], 0),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    else {
      v16 = 0;
    }
    v52_.v52 = v7;
    v17 = 1;
  }
  else {
    if (v15 != 0) {
      v16 = __dynamic_cast(v15, GameData_212d670[0], GameData_212d678[0], 0),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    else {
      v16 = 0;
    }
    v17 = 2;
    v52_.v52 = v6;
  }
  v52_.v53 = v17;
  v18 = *(__int64**)(a1 + 1096);
  v19 = *v13;
  v54_.v54[0] = 0;
  v54_.v54[1] = 0;
  v54_.v55 = 0;
  v54_.v56 = v19;
  GameRoutine_10140c0_alt1(v18, v16, 0, &v52_.v52, (unsigned __int8*)v54_.v54),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  LayoutAccessor_1562cf0(a1 + 848, v4),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v20 = *(_QWORD*)(a1 + 336);
  if (v20 != 0 && *(__int64 (***)(void))v20 ==
                      game_menu_anonymous_RelianceMenuItem_vtable) {
    LayoutAccessor_1560070((void*)(&v50_.v50), (__int64*)(a1 + 848),
                           "L_Reliance"),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v50_.v51 != 0) {
      v22 = std___1___shared_weak_count_lock_alt1(v50_.v51),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (v22 != 0) {
        v23 = v22;
        if (v50_.v50 != nullptr) {
          Util_157d6f0(v50_.v50, (__int64*)(v20 + 104)),
              v46 = COERCE_AS(__typeof__(v46),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23),
              v46 = COERCE_AS(__typeof__(v46),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          std___1___shared_weak_count___release_weak_alt1(v23),
              v46 = COERCE_AS(__typeof__(v46),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
      }
      if (v50_.v51 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v50_.v51),
            v46 = COERCE_AS(__typeof__(v46),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
    }
    v21 = *(_BYTE*)(v20 + 164) == 0;
  }
  else {
    v21 = false;
  }
  v24 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 848),
                                        (__int64)"N_Reliance"),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v24 != 0) {
    *(_BYTE*)(v24 + 88) = *(_BYTE*)(v24 + 88) & 0xFE | v21;
  }
  ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"A_Annotation", 1),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"N_Annotation00", 0),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"N_Annotation01", 0),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v25 = *(_QWORD*)(a1 + 336);
  if (v25 == 0 ||
      *(__int64 (***)(void))v25 !=
          game_menu_anonymous_RelianceMenuItem_vtable ||
      *(_BYTE*)(v25 + 164) != 0) {
    goto LABEL_36;
  }
  v28 = GameRoutine_8ca200_alt1((_QWORD*)(v25 + 104)),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v26 = v28;
  if (v28 != 0) {
    if (*(_BYTE*)(v28 + 64) == 4 ||
        game_GameModeData_instance_ != 0 &&
            (v30 = game_GameVariableTable_Find_alt1(
                 *(_QWORD**)(game_GameModeData_instance_ + 48),
                 (unsigned __int64*)(*(_QWORD*)(v28 + 24) + 40LL))) != 0 &&
            *(_DWORD*)(v30 + 32) != 0 ||
        (unsigned __int16)game_anonymous_RuntimeTalk_GetCondition_alt1(v26) ==
            0) {
    LABEL_36:
      LODWORD(v26) = 0;
      goto LABEL_37;
    }
    v32 = game_anonymous_RuntimeTalk_GetCondition_alt1(v26),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if ((v32 & 4) != 0) {
      ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"N_Annotation00",
                                            1),
          v46 = COERCE_AS(__typeof__(v46),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      LayoutAccessor_1562060((__int64*)(a1 + 848), (__int64)"T_Annotation00",
                             (__int64)"MID_Menu_Cause_ShortageRelianceLv"),
          v46 = COERCE_AS(__typeof__(v46),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v33 = "T_Annotation01";
      v34 = "N_Annotation01";
    }
    else {
      v33 = "T_Annotation00";
      v34 = "N_Annotation00";
    }
    if ((v32 & 0x10) != 0) {
      v36 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v36 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      }
      v35 = "MID_Menu_Cause_NotPlayable_Part";
      if (v36 >= *(unsigned __int8*)(v26 + 65) &&
          v36 <= (unsigned int)*(unsigned __int8*)(v26 + 67)) {
        v35 = "MID_Menu_Cause_NotPlayable_Chapter";
      }
      goto LABEL_60;
    }
    if ((v32 & 0xFFFFFFEB) != 0) {
      v35 = "MID_Menu_Cause_NotPlayable";
    LABEL_60:
      LOBYTE(v26) = 1;
      ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)v34, 1),
          v46 = COERCE_AS(__typeof__(v46),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      LayoutAccessor_1562060((__int64*)(a1 + 848), (__int64)v33, (__int64)v35),
          v46 = COERCE_AS(__typeof__(v46),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v27 = v1 == 0 && v5;
      goto LABEL_63;
    }
    LODWORD(v26) = (v32 & 4) != 0;
  }
LABEL_37:
  v27 = v1 == 0 && v5;
  if (!v27 && (_DWORD)v26 == 0) {
    GameHr_1562680(a1 + 848, "Help_Off", 0x1.0000000000000p+0f),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    goto LABEL_64;
  }
LABEL_63:
  GameHr_1562680(a1 + 848, "Help_On", 0x1.0000000000000p+0f),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  LOBYTE(v26) = v27 & (v26 ^ 1);
LABEL_64:
  ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"N_Help00", v26),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"N_Help01", v26),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v37 = ui_LayoutAccessor_FindAlignment_alt1((__int64*)(a1 + 848),
                                             (__int64)"A_Annotation"),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v37 != 0) {
    Alignment_56b600_alt1(v37),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  v38 = *(_QWORD*)(a1 + 336);
  if (v38 != 0 && *(__int64 (***)(void))v38 ==
                      game_menu_anonymous_RelianceMenuItem_vtable) {
    v42 = game_821090(1),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v39 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v43 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)v42),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v39 = 0;
      if (v43 != 0 && *(int*)(v43 + 32) >= 1 && *(_BYTE*)(v38 + 164) == 0) {
        v44 = GameRoutine_8ca200_alt1((_QWORD*)(v38 + 104)),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        if (v44 != 0 && (v46 = *(unsigned __int8*)(v44 + 64)) != 4) {
          LOBYTE(v46) =
              (game_GameModeData_instance_ == 0 ||
               (v48 = v44,
                v49 = game_GameVariableTable_Find_alt1(
                    *(_QWORD**)(game_GameModeData_instance_ + 48),
                    (unsigned __int64*)(*(_QWORD*)(v44 + 24) + 40LL)),
                v44 = v48, v49 == 0) ||
               *(_DWORD*)(v49 + 32) == 0) &&
              (unsigned __int16)game_anonymous_RuntimeTalk_GetCondition_alt1(
                  v44) == 0,
          v46 = COERCE_AS(__typeof__(v46),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          v47 = 1;
        }
        else {
          v47 = 0;
        }
        v39 = v47 & v46;
      }
    }
  }
  else {
    v39 = 0;
  }
  if (v1 != 0) {
    v40 = 0;
  }
  else {
    v40 = v39;
  }
  ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"L_KeyHelp00", v40),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"L_KeyHelp01", v26),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  result = ui_LayoutAccessor_FindAlignment_alt1((__int64*)(a1 + 848),
                                                (__int64)"A_KeyHelp"),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (result != 0) {
    return Alignment_56b600_alt1(result);
  }
  return result;
}

const char* RelianceSelectMenu_Unknown140(__int64 a1)
{
  if (*(_DWORD*)(a1 + 1064) != 0) {
    return "MID_SysMenu_Reliance";
  }
  else {
    return "MID_HotelMenu_Reliance";
  }
}

const char* RelianceSelectMenu_184c270(__int64 a1)
{
  if (*(_DWORD*)(a1 + 8) != 0) {
    return "MID_SysMenu_Reliance";
  }
  else {
    return "MID_HotelMenu_Reliance";
  }
}

const char* RelianceSelectMenu_Unknown141(__int64 a1)
{
  if (*(_DWORD*)(a1 + 1064) != 0) {
    return "MID_RelianceMenu_Help";
  }
  else {
    return "MID_RelianceMenu_Hotel_Help";
  }
}

const char* RelianceSelectMenu_184c2b0(__int64 a1)
{
  if (*(_DWORD*)(a1 + 8) != 0) {
    return "MID_RelianceMenu_Help";
  }
  else {
    return "MID_RelianceMenu_Hotel_Help";
  }
}

__int64 RelianceSelectMenu_Unknown142(__int64 result, __int64* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;

  if (*(_DWORD*)(result + 1064) == 0 && (*(_BYTE*)(result + 1080) & 1) != 0) {
    v2 = a2[1];
    v3 = a2[2];
    if (v2 >= v3) {
      v6 = *a2;
      v7 = v2 - *a2;
      v8 = 1 - 0x3333333333333333LL * (v7 >> 3);
      if (v8 > 0x666666666666666LL) {
        GameRoutine_874520(result);
      }
      v9 = fw_memory_g_heap_manager_ptr;
      v10 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v3 - v6) >> 3);
      if (2 * v10 > v8) {
        v8 = 2 * v10;
      }
      if (v10 >= 0x333333333333333LL) {
        v11 = 0x666666666666666LL;
      }
      else {
        v11 = v8;
      }
      if (v11 != 0) {
        if (v11 > 0x666666666666666LL) {
          GameRoutine_60a210(result);
        }
        v12 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v11, 16, 0);
      }
      else {
        v12 = 0;
      }
      v13 = v12 + v7;
      *(_QWORD*)v13 = &GameData_1a9f09e;
      *(_QWORD*)(v13 + 8) = "MID_KeyHelp_AllRead";
      *(_BYTE*)(v13 + 28) = 0;
      *(_QWORD*)(v13 + 32) = 0;
      *(_BYTE*)(v13 + 16) = 1;
      v14 = v12 + 40 * v11;
      v5 = v12 + v7 + 40;
      *(_QWORD*)(v13 + 20) = 0x200000006LL;
      result = memcpy(v12, v6, v7);
      *a2 = v12;
      a2[1] = v5;
      a2[2] = v14;
      if (v6 != 0) {
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
          v15 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v15, v6);
      }
    }
    else {
      *(_BYTE*)(v2 + 28) = 0;
      *(_QWORD*)(v2 + 32) = 0;
      *(_QWORD*)v2 = &GameData_1a9f09e;
      *(_QWORD*)(v2 + 8) = "MID_KeyHelp_AllRead";
      v5 = v2 + 40;
      *(_BYTE*)(v2 + 16) = 1;
      *(_QWORD*)(v2 + 20) = 0x200000006LL;
    }
    a2[1] = v5;
  }
  return result;
}

__int64 RelianceSelectMenu_Unknown30(__int64 a1, char a2)
{
  int v2;
  __int64 v3;
  __int64 v5;
  char v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _BOOL4 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  _BOOL4 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  LOBYTE(v3) = a2;
  v5 = GameRoutine_155fbe0(a1 + 848, "L_KeyHelp00");
  if ((v3 & 1) != 0) {
    v6 = -1;
  }
  else {
    v6 = 40;
  }
  if (*(_QWORD*)(v5 + 16) == 0) {
    goto LABEL_22;
  }
  v7 = (__int64*)v5;
  v8 = *(_QWORD*)(v5 + 8);
  if (v8 == 0) {
    goto LABEL_22;
  }
  v9 = std___1___shared_weak_count_lock(v8);
  if (v9 == 0) {
    goto LABEL_14;
  }
  v10 = *v7;
  if (*v7 != 0) {
    v2 = *(unsigned __int8*)(v10 + 24);
    v11 = v10 + 152;
    if (v2 == 0) {
      v11 = 0;
    }
    v12 = v11 != v7[2];
  }
  else {
    v12 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v12) {
    LABEL_14:
      v13 = v7[1];
      if (v13 == 0 || *(_QWORD*)(v13 + 8) == -1) {
        goto LABEL_22;
      }
      goto LABEL_19;
    }
  }
  else {
    v3 = v9;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v3);
    if (v12) {
      goto LABEL_14;
    }
  }
  if ((v2 & 1) == 0) {
    goto LABEL_22;
  }

LABEL_19:
  v14 = v7[2];
  if (v14 != 0) {
    v15 = *(_QWORD*)(v14 + 24);
    if (v15 != 0) {
      *(_BYTE*)(v15 + 89) = v6;
    }
  }

LABEL_22:
  result = GameRoutine_155fbe0(a1 + 848, "L_KeyHelp01");
  if (*(_QWORD*)(result + 16) == 0) {
    return result;
  }
  v17 = (__int64*)result;
  result = *(_QWORD*)(result + 8);
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    goto LABEL_32;
  }
  v18 = *v17;
  if (*v17 != 0) {
    LODWORD(v3) = *(unsigned __int8*)(v18 + 24);
    v19 = v18 + 152;
    if ((_DWORD)v3 == 0) {
      v19 = 0;
    }
    v20 = v19 != v17[2];
  }
  else {
    v20 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v20) {
    LABEL_32:
      v21 = v17[1];
      if (v21 == 0 || *(_QWORD*)(v21 + 8) == -1) {
        return result;
      }
      goto LABEL_37;
    }
  }
  else {
    v22 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak(v22);
    if (v20) {
      goto LABEL_32;
    }
  }
  if ((v3 & 1) == 0) {
    return result;
  }

LABEL_37:
  v23 = v17[2];
  if (v23 != 0) {
    v24 = *(_QWORD*)(v23 + 24);
    if (v24 != 0) {
      *(_BYTE*)(v24 + 89) = v6;
    }
  }
  return result;
}

__int64 RelianceSelectMenu_Unknown103(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _BYTE v6[32];
  _BYTE* v7;

  v1 = *(_QWORD*)(a1 + 1072);
  v7 = nullptr;
  v3 = GameRoutine_15dff80(v1, 0, v6, 0);
  *(_QWORD*)(a1 + 1072) = v3;
  if (v7 == v6) {
    v4 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(void*))(*(_QWORD*)v7 + v4))((void*)v7);
  v3 = *(_QWORD*)(a1 + 1072);

LABEL_6:
  if (v3 == v1) {
    return 0;
  }
  _ZN4game4menu8GameMenu12Unknown16e9cd0Ev(a1);
  game_menu_BasicMenu_Unknown16defa0(a1);
  return 13;
}

__int64 RelianceSelectMenu_Unknown105(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _BYTE v6[32];
  _BYTE* v7;

  v1 = *(_QWORD*)(a1 + 1072);
  v7 = nullptr;
  v3 = GameRoutine_15dfde0(v1, 0, v6, 0);
  *(_QWORD*)(a1 + 1072) = v3;
  if (v7 == v6) {
    v4 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(void*))(*(_QWORD*)v7 + v4))((void*)v7);
  v3 = *(_QWORD*)(a1 + 1072);

LABEL_6:
  if (v3 == v1) {
    return 0;
  }
  _ZN4game4menu8GameMenu12Unknown16e9cd0Ev(a1);
  game_menu_BasicMenu_Unknown16defa0(a1);
  return 13;
}

const char* RelianceSelectMenu_Unknown43(__int64 a1, char a2)
{
  const char* v2;

  v2 = "MID_Menu_Default";
  if (a2 == 1) {
    v2 = "MID_Sys_RelianceLv";
  }
  if (a2 == 2) {
    return "MID_HotelMenu_Reliance";
  }
  else {
    return v2;
  }
}

__int64 RelianceSelectMenu_Unknown112(__int64 a1)
{
  int v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD v28[2];
  char v29;
  _QWORD v30[2];
  _BYTE v31[16];
  _QWORD v32[23];

  v2 = *(_DWORD*)(a1 + 1064);
  result = 0;
  if (v2 == 0 && (*(_BYTE*)(a1 + 1080) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 1072);
    if (v4 != 0 && (v5 = *(_QWORD*)(a1 + 336)) != 0 &&
        *(__int64 (***)())v5 == game_menu_anonymous_RelianceMenuItem_vtable &&
        (unsigned int)RelianceSelectMenu_184d1f0_alt1(
            *(_QWORD*)(v4 + 392), *(_QWORD*)(v5 + 104)) == 1) {
      v6 = *(_QWORD*)(a1 + 1072);
      v7 = *(_QWORD*)(v5 + 104);
      v29 = 0;
      v8 = *(_QWORD*)(v6 + 392);
      v28[0] = v8;
      v28[1] = v7;
      v9 = 0;
      if ((unsigned int)RelianceSelectMenu_184d1f0_alt1(v8, v7) == 1) {
        v25 = v8;
        v30[0] = v7;
        GameRoutine_8ca350(v31, &v25, v30);
        v10 = GameRoutine_8ca200(v31);
        if (v10 != 0 && (v11 = v10, *(_BYTE*)(v10 + 64) != 4) &&
            (GameRoutine_9e60d0(*(_QWORD*)(v10 + 24)) & 1) != 0 &&
            ((unsigned __int16)game_anonymous_RuntimeTalk_GetCondition(v11) ==
                 0 ||
             (unsigned int)game_anonymous_RuntimeTalk_GetCondition(v11) ==
                 256)) {
          v9 = *(unsigned __int8*)(v11 + 64);
          v29 = *(_BYTE*)(v11 + 64);
        }
        else {
          v9 = 0;
        }
      }
      v26 = 0;
      v27 = 0;
      v25 = 0;
      GameRoutine_184d360_alt1(v28, &v25);
      if (v9 != 0 && v8 != 0 && v7 != 0) {
        v12 = v32;
        v32[0] = GameRoutine_8c9820(v8, v7, 0);
        v32[1] = GameRoutine_8c9820(v8, v7, 1);
        v32[2] = GameRoutine_8c9820(v8, v7, 2);
        v32[3] = GameRoutine_8c9820(v8, v7, 3);
        v13 = GameRoutine_8c9820(v8, v7, 4);
        v14 = v9 + 1LL;
        v32[4] = v13;
        do {
          v16 = *v12++;
          v15 = v16;
          if (v16 != 0) {
            game_VariableManager_SetFlag(*(_QWORD*)(v15 + 24) + 40LL, 1);
            v17 = *(_QWORD*)(v15 + 128);
            if (v17 != 0) {
              v30[1] = *(_QWORD*)(v15 + 128);
              v30[0] = game_HashString(v17);
              if (game_GameModeData_instance_ != 0) {
                GameVariable_828700(game_GameModeData_instance_ + 40, v30, 1);
              }
            }
          }
          --v14;
        } while (v14 != 0);
      }
      v18 = v25;
      if (v25 != v26) {
        GameRoutine_9d5920(a1, &v25);
      }
      v19 = *(_QWORD*)(a1 + 1072);
      *(_BYTE*)(a1 + 1080) = 0;
      if (v19 != 0) {
        v20 = *(_QWORD*)(v19 + 392);
        if (v20 != 0) {
          v21 = (__int64*)GameData_21c9ac0;
          v22 = GameData_21c9ac8;
          if (GameData_21c9ac0 != GameData_21c9ac8) {
            while (1) {
              v23 = *v21++;
              if ((unsigned int)RelianceSelectMenu_184d1f0_alt1(v20, v23) ==
                  1) {
                break;
              }
              if (v21 == (__int64*)v22) {
                goto LABEL_35;
              }
            }
            *(_BYTE*)(a1 + 1080) = 1;
          }
        }
      }
    LABEL_35:
      game_menu_BasicMenu_Unknown16dd9a0(a1);
      GameRoutine_16e8d70(a1 + 1056);
      RelianceSelectMenu_Unknown88_alt1(a1);
      snd_Fade_Fade_10c830(v31, 0.0f);
      *(struct PseudoSret*)(v30) = snd_play_ff2d0(
          "SE_SYS_RelianceTalk_MarkRead", "SE_SYS_RelianceTalk_MarkRead", v31,
          0, 65537, 0, 0.0f, 1.0f);
      snd_Fade_Destroy_Fade(v31);
      if (v18 != 0) {
        v24 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v24 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
      }
      return 13;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 RelianceSelectMenu_184d1f0(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  _QWORD v11[7];

  result = 0;
  if (a1 != 0 && a2 != 0) {
    v11[0] = a1;
    v11[1] = a2;
    v11[2] = GameRoutine_8c9820(a1, a2, 0);
    v11[3] = GameRoutine_8c9820(a1, a2, 1);
    v11[4] = GameRoutine_8c9820(a1, a2, 2);
    v11[5] = GameRoutine_8c9820(a1, a2, 3);
    v11[6] = GameRoutine_8c9820(a1, a2, 4);
    result = GameRoutine_8ca200(v11);
    if (result != 0) {
      v5 = result;
      if (*(_BYTE*)(result + 64) == 4) {
        return 0;
      }
      if (game_GameModeData_instance_ != 0 &&
          (v6 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48),
               *(_QWORD*)(result + 24) + 40LL)) != 0 &&
          *(_DWORD*)(v6 + 32) != 0) {
        v7 = false;
        v8 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_15;
        }
      }
      else {
        v7 = (unsigned __int16)GameRoutine_8c77c0(v5) == 0;
        v8 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_15;
        }
      }
      v9 = game_GameVariableTable_Find(*(_QWORD*)(v8 + 48),
                                       *(_QWORD*)(v5 + 24) + 40LL);
      if (v9 != 0 && *(_DWORD*)(v9 + 32) != 0) {
        v10 = 2;
      LABEL_18:
        if (v7) {
          return v10;
        }
        else {
          return 0;
        }
      }
    LABEL_15:
      if ((GameRoutine_9e60d0(*(_QWORD*)(v5 + 24)) & 1) != 0) {
        v10 = 1;
      }
      else {
        v10 = 2;
      }
      goto LABEL_18;
    }
  }
  return result;
}

__int64 game_menu_RelianceSelectMenu_ZLCall(__int64 a1)
{
  unsigned int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  struct {
    _BYTE v6[32];
    _BYTE* v7;
  } v6_;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  const char* v12;

  v1 = 0;
  if (*(_DWORD*)(a1 + 1064) == 0 && (*(_BYTE*)(a1 + 1080) & 1) != 0) {
    v6_.v7 = nullptr;
    v12 = "MID_RelianceMenu_AllRead_Confirm";
    v8_.v9 = v8_.v8;
    v10_.v10[0] = GameData_20e8d38;
    v10_.v10[1] = a1;
    v10_.v11 = v10_.v10;
    v8_.v8[0] = GameData_20e8db8;
    MapSortieMenu_871860(a1, (__int64)&v12, (__int64)v10_.v10, (__int64)v8_.v8,
                         (__int64)v6_.v6);
    if (v6_.v7 == v6_.v6) {
      v2 = 32;
    }
    else {
      if (v6_.v7 == nullptr) {
        goto LABEL_8;
      }
      v2 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)v6_.v7 + v2))((__int64)v6_.v7);
  LABEL_8:
    if (v8_.v9 == v8_.v8) {
      v3 = 32;
    }
    else {
      if (v8_.v9 == nullptr) {
        goto LABEL_13;
      }
      v3 = 40;
    }
    (*(void (**)(__int64))(*v8_.v9 + v3))((__int64)v8_.v9);
  LABEL_13:
    if (v10_.v11 == v10_.v10) {
      v4 = 32;
    }
    else {
      if (v10_.v11 == nullptr) {
        return 12;
      }
      v4 = 40;
    }
    (*(void (**)(__int64))(*v10_.v11 + v4))((__int64)v10_.v11);
    return 12;
  }
  return v1;
}

void game_menu_RelianceSelectMenu_AddItemList(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  unsigned __int64 i;
  __int64 (***v14)();
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  bool v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  __int64 (***v35)();
  __int64 v36;
  __int64 v37;
  char v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  struct {
    _QWORD v44[4];
    _QWORD* v45;
  } v44_;
  struct {
    __int64 v46[2];
    __int64 v47;
    char gap72_[8];
    __int64* v48;
  } v46_;
  _BYTE v49[4];
  __int64 v50;

  v1 = *(unsigned int*)(a1 + 1064);
  v44_.v44[0] = GameData_20e8e38;
  v44_.v44[1] = a1;
  v44_.v45 = v44_.v44;
  v44_.v44[2] = v1;
  RelianceSelectMenu_184dea0(v1, 0, (__int64)v44_.v44);
  if (v44_.v45 == v44_.v44) {
    v3 = 32;
    goto LABEL_5;
  }
  if (v44_.v45 != nullptr) {
    v3 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v44_.v45 + v3))((__int64)v44_.v45);
  }
  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    goto LABEL_49;
  }
  if ((unsigned int)v1 > 1) {
    goto LABEL_50;
  }
  v4 = (__int64*)GameData_21c9ac0;
  v5 = GameData_21c9ac8;
  if (GameData_21c9ac0 == GameData_21c9ac8) {
    goto LABEL_49;
  }
  while (2) {
    v7 = *(_QWORD*)(a1 + 1072);
    v8 = *v4;
    v49[0] = 0;
    v9 = v7 == 0 || v8 == 0;
    if (!v9 && *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 392) + 24LL) + 1672LL) ==
                   *(_QWORD*)(*(_QWORD*)(v8 + 24) + 1672LL)) {
      goto LABEL_13;
    }
    v11 = *(_QWORD*)(a1 + 232);
    v10 = *(_QWORD*)(a1 + 240);
    v12 = v46_.v46;
    v46_.v46[0] = (__int64)GameData_20e83d0;
    v46_.v46[1] = (__int64)v49;
    v46_.v47 = v8;
    v46_.v48 = v46_.v46;
    if (v10 == v11) {
      goto LABEL_30;
    }
    for (i = 0; i < (v10 - v11) >> 3; ++i) {
      v14 = *(__int64 (****)())(v11 + 8 * i);
      if (v14 == nullptr ||
          *v14 != game_menu_anonymous_RelianceMenuItem_vtable) {
        continue;
      }
      v50 = *(_QWORD*)(v11 + 8 * i);
      if (v46_.v48 == nullptr) {
      LABEL_95:
        GameRoutine_60a310();
      }
      if (((*(__int64 (**)(__int64*, __int64*))(*v46_.v48 + 48))(v46_.v48,
                                                                 &v50) &
           1) != 0) {
        break;
      }
      v11 = *(_QWORD*)(a1 + 232);
      v10 = *(_QWORD*)(a1 + 240);
    }
    v12 = v46_.v48;
    if (v46_.v48 != v46_.v46) {
      if (v46_.v48 != nullptr) {
        v15 = 40;
        goto LABEL_31;
      }
      goto LABEL_32;
    }
  LABEL_30:
    v15 = 32;
  LABEL_31:
    (*(void (**)(__int64))(*v12 + v15))((__int64)v12);
  LABEL_32:
    if ((v49[0] & 1) == 0 && (*(_BYTE*)(v8 + 49) & 1) != 0) {
      v46_.v46[0] = 0;
      v46_.v46[1] = v8;
      v16 = (unsigned __int8)GameSituation_906440(
          game_GameModeData_instance_ + 136, v46_.v46);
      if (v16 != 2) {
        if (v16 == 3) {
          goto LABEL_36;
        }
        if (game_GameModeData_instance_ != 0) {
          v17 = game_GameVariableTable_Find_alt1(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)(*(_QWORD*)(v8 + 24) + 1272LL));
          if (v17 == 0 || *(_DWORD*)(v17 + 32) == 0) {
          LABEL_36:
            if (game_GameModeData_instance_ == 0) {
              goto LABEL_43;
            }
            v46_.v46[0] = v8;
            if ((UnitUtil_12122d0(v46_.v46) & 1) != 0) {
              goto LABEL_43;
            }
          }
        }
        else {
        LABEL_43:
          if ((_DWORD)v1 != 0) {
            v18 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 168, 16, 0);
            v19 = *(_QWORD*)(a1 + 1072);
            v20 = v18;
            *(_WORD*)(v18 + 16) = 0;
            *(_DWORD*)(v18 + 40) = 0;
            *(_QWORD*)(v18 + 48) = 0;
            *(_QWORD*)(v18 + 56) = 0;
            *(_QWORD*)(v18 + 64) = 0;
            *(_QWORD*)(v18 + 72) = 0;
            *(_WORD*)(v18 + 80) = 257;
            *(_BYTE*)(v18 + 82) = 1;
            *(_QWORD*)(v18 + 88) = 0;
            *(_QWORD*)(v18 + 96) = 1;
          }
          else {
            if (!RelianceSelectMenu_184e500(
                    v8, *(_QWORD*)(*(_QWORD*)(a1 + 1072) + 392LL))) {
              goto LABEL_13;
            }
            v18 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 168, 16, 0);
            v19 = *(_QWORD*)(a1 + 1072);
            v20 = v18;
            *(_WORD*)(v18 + 16) = 0;
            *(_DWORD*)(v18 + 40) = 0;
            *(_QWORD*)(v18 + 48) = 0;
            *(_QWORD*)(v18 + 56) = 0;
            *(_QWORD*)(v18 + 64) = 0;
            *(_QWORD*)(v18 + 72) = 0;
            *(_QWORD*)(v18 + 88) = 0;
            *(_QWORD*)(v18 + 96) = 0;
            *(_WORD*)(v18 + 80) = 257;
            *(_BYTE*)(v18 + 82) = 1;
          }
          *(_QWORD*)v18 = game_menu_anonymous_RelianceUnitGridMenuItem_vtable;
          *(_QWORD*)(v18 + 8) = 0;
          GameHr_1851ae0((__int64*)v18);
          *(_QWORD*)(v20 + 104) = 0;
          *(_QWORD*)v20 = game_menu_anonymous_RelianceMenuItem_vtable;
          *(_QWORD*)(v20 + 112) = 0;
          *(_QWORD*)(v20 + 120) = 0;
          *(_QWORD*)(v20 + 128) = 0;
          *(_QWORD*)(v20 + 136) = 0;
          *(_QWORD*)(v20 + 144) = 0;
          *(_QWORD*)(v20 + 152) = 0;
          *(_DWORD*)(v20 + 160) = 0;
          *(_BYTE*)(v20 + 164) = 1;
          v46_.v46[0] = v8;
          if (v19 != 0) {
            v6 = *(_QWORD*)(v19 + 392);
          }
          else {
            v6 = 0;
          }
          v50 = v6;
          GameRoutine_8ca350_alt1((__int64*)(v20 + 104), v46_.v46, &v50);
          BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v20);
        }
      }
    }
  LABEL_13:
    if (++v4 != (__int64*)v5) {
      continue;
    }
    break;
  }
LABEL_49:
  if ((_DWORD)v1 != 0) {
    goto LABEL_50;
  }
  v25 = (__int64*)GameData_21c9ac0;
  v26 = GameData_21c9ac8;
  if (GameData_21c9ac0 == GameData_21c9ac8) {
    goto LABEL_50;
  }
  while (2) {
    v28 = *(_QWORD*)(a1 + 1072);
    v29 = *v25;
    v49[0] = 0;
    v30 = v28 == 0 || v29 == 0;
    if (!v30 && *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v28 + 392) + 24LL) + 1672LL) ==
                    *(_QWORD*)(*(_QWORD*)(v29 + 24) + 1672LL)) {
      goto LABEL_60;
    }
    v32 = *(_QWORD*)(a1 + 232);
    v31 = *(_QWORD*)(a1 + 240);
    v33 = v46_.v46;
    v46_.v46[0] = (__int64)GameData_20e83d0;
    v46_.v46[1] = (__int64)v49;
    v46_.v47 = v29;
    v46_.v48 = v46_.v46;
    if (v31 == v32) {
      goto LABEL_77;
    }
    v34 = 0;
    while (2) {
      v35 = *(__int64 (****)())(v32 + 8 * v34);
      if (v35 == nullptr ||
          *v35 != game_menu_anonymous_RelianceMenuItem_vtable) {
      LABEL_68:
        if (++v34 >= (unsigned __int64)((v31 - v32) >> 3)) {
          goto LABEL_74;
        }
        continue;
      }
      break;
    }
    v50 = *(_QWORD*)(v32 + 8 * v34);
    if (v46_.v48 == nullptr) {
      goto LABEL_95;
    }
    if (((*(__int64 (**)(__int64*, __int64*))(*v46_.v48 + 48))(v46_.v48, &v50) &
         1) == 0) {
      v32 = *(_QWORD*)(a1 + 232);
      v31 = *(_QWORD*)(a1 + 240);
      goto LABEL_68;
    }
  LABEL_74:
    v33 = v46_.v48;
    if (v46_.v48 != v46_.v46) {
      if (v46_.v48 != nullptr) {
        v36 = 40;
        goto LABEL_78;
      }
      goto LABEL_79;
    }
  LABEL_77:
    v36 = 32;
  LABEL_78:
    (*(void (**)(__int64))(*v33 + v36))((__int64)v33);
  LABEL_79:
    if ((v49[0] & 1) == 0 &&
        RelianceSelectMenu_184e500(v29,
                                   *(_QWORD*)(*(_QWORD*)(a1 + 1072) + 392LL))) {
      v37 = game_GetHero(9u);
      if (v37 != 0) {
        v38 = *(_QWORD*)(*(_QWORD*)(v29 + 24) + 1672LL) ==
                      *(_QWORD*)(*(_QWORD*)(v37 + 24) + 1672LL)
                  ? 0
                  : 2;
      }
      else {
        v38 = 2;
      }
      if (game_GameModeData_instance_ == 0 ||
          (v46_.v46[0] = 0, v46_.v46[1] = v29,
           (v39 = (unsigned __int8)GameSituation_906440(
                game_GameModeData_instance_ + 136, v46_.v46)) != 2) &&
              (v39 == 3 || game_GameModeData_instance_ == 0 ||
               (v40 = game_GameVariableTable_Find_alt1(
                    *(_QWORD**)(game_GameModeData_instance_ + 48),
                    (unsigned __int64*)(*(_QWORD*)(v29 + 24) + 1272LL))) == 0 ||
               *(_DWORD*)(v40 + 32) == 0) ||
          (v46_.v46[0] = v29, (UnitUtil_12122d0(v46_.v46) & 1) == 0)) {
        v41 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 168, 16, 0);
        v42 = *(_QWORD*)(a1 + 1072);
        v43 = v41;
        *(_WORD*)(v41 + 16) = 0;
        *(_DWORD*)(v41 + 40) = 0;
        *(_QWORD*)(v41 + 48) = 0;
        *(_QWORD*)(v41 + 56) = 0;
        *(_QWORD*)(v41 + 64) = 0;
        *(_QWORD*)(v41 + 72) = 0;
        *(_QWORD*)(v41 + 88) = 0;
        *(_QWORD*)(v41 + 96) = 0;
        *(_WORD*)(v41 + 80) = 257;
        *(_BYTE*)(v41 + 82) = 1;
        *(_QWORD*)v41 = game_menu_anonymous_RelianceUnitGridMenuItem_vtable;
        *(_QWORD*)(v41 + 8) = 0;
        GameHr_1851ae0((__int64*)v41);
        *(_QWORD*)(v43 + 104) = 0;
        *(_QWORD*)v43 = game_menu_anonymous_RelianceMenuItem_vtable;
        *(_QWORD*)(v43 + 112) = 0;
        *(_QWORD*)(v43 + 120) = 0;
        *(_QWORD*)(v43 + 128) = 0;
        *(_QWORD*)(v43 + 136) = 0;
        *(_QWORD*)(v43 + 144) = 0;
        *(_QWORD*)(v43 + 152) = 0;
        *(_DWORD*)(v43 + 160) = 0;
        *(_BYTE*)(v43 + 164) = v38;
        v46_.v46[0] = v29;
        if (v42 != 0) {
          v27 = *(_QWORD*)(v42 + 392);
        }
        else {
          v27 = 0;
        }
        v50 = v27;
        GameRoutine_8ca350_alt1((__int64*)(v43 + 104), v46_.v46, &v50);
        BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v43);
      }
    }
  LABEL_60:
    if (++v25 != (__int64*)v26) {
      continue;
    }
    break;
  }
LABEL_50:
  v22 = *(_QWORD*)(a1 + 256);
  v21 = *(_QWORD*)(a1 + 264);
  if (v21 != v22) {
    v23 = 0;
    do {
      v24 = *(_QWORD*)(v22 + 8 * v23);
      if (v24 != 0) {
        *(_DWORD*)(v24 + 40) = v23;
        v22 = *(_QWORD*)(a1 + 256);
        v21 = *(_QWORD*)(a1 + 264);
      }
      ++v23;
    } while (v23 < (v21 - v22) >> 3);
  }
}

__int64 RelianceSelectMenu_184dea0(unsigned int a1, char a2, __int64 a3)
{
  __int64 result;
  __int64 v6;
  _QWORD* v7;
  unsigned int v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  _QWORD* v20;
  unsigned int v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  unsigned int v31;
  __int64 v32;
  _QWORD* v33;
  unsigned int v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  char v39;
  __int64* v40;
  __int64 v41;
  __int64 v42;
  unsigned int v43;
  unsigned int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v52;
  _QWORD* v53;

  if (a1 == 3) {
    v52 = 1;
    result = game_UnitPool_GetFirst((int*)&v52);
    if (result != 0) {
      v19 = *(_QWORD*)(result + 432);
      v20 = (_QWORD*)result;
      if (v19 == 0) {
        v19 = *(_QWORD*)(result + 440);
        if (v19 != 0) {
          v21 = *(unsigned __int8*)(v19 + 16);
          if (v21 <= 8) {
            while (1) {
              v49 = v21 + 1;
              if (((v52 >> v21) & 2) != 0) {
                v19 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                 24LL * (unsigned __int8)(v21 + 1) + 556000);
                if (v19 != 0) {
                  break;
                }
              }
              v21 = v49;
              if (v49 == 9) {
                goto LABEL_37;
              }
            }
          }
          else {
          LABEL_37:
            v19 = 0;
          }
        }
      }
      v22 = game_g_shared_system_skills_ptr;
      while (1) {
      LABEL_40:
        v23 = (_QWORD*)v19;
        v24 = v20[49];
        if (v24 != 0 && *(_QWORD*)(v24 + 272) != 0) {
          v25 = v20[55];
          v26 = v25 != 0 ? *(_BYTE*)(v25 + 16) : 9;
          if (((1 << v26) & 0xF1) != 0) {
            LODWORD(v53) =
                *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x168LL) + v22) & 0xFFF;
            result = game_HasSkill(v20 + 218, &v53);
            if ((result & 1) == 0) {
              v27 = game_820d50(3);
              if (game_GameModeData_instance_ == 0 ||
                  ((result = game_GameVariableTable_Find_alt1(
                        *(_QWORD**)(game_GameModeData_instance_ + 48),
                        (unsigned __int64*)v27)) == 0 ||
                   *(_DWORD*)(result + 32) == 0) &&
                      (game_GameModeData_instance_ == 0 ||
                       (v53 = (_QWORD*)v20[49],
                        ((result = UnitUtil_12122d0((__int64*)&v53)) & 1) !=
                            0))) {
                v28 = *(_QWORD*)(a3 + 32);
                v53 = v20;
                if (v28 == 0) {
                LABEL_102:
                  GameRoutine_60a310();
                }
                result = (*(__int64 (**)(__int64, _QWORD**))(*(_QWORD*)v28 +
                                                             48LL))(v28, &v53);
              }
            }
          }
        }
        if (v23 == nullptr) {
          break;
        }
        v19 = v23[54];
        v20 = v23;
        if (v19 == 0) {
          v29 = v23[55];
          v20 = v23;
          if (v29 != 0) {
            v30 = *(unsigned __int8*)(v29 + 16);
            v19 = 0;
            v20 = v23;
            if (v30 <= 8) {
              while (1) {
                v31 = v30 + 1;
                if (((v52 >> v30) & 2) != 0) {
                  v19 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                   24LL * (unsigned __int8)(v30 + 1) + 556000);
                  if (v19 != 0) {
                    break;
                  }
                }
                ++v30;
                if (v31 == 9) {
                  v19 = 0;
                  v20 = v23;
                  goto LABEL_40;
                }
              }
              v20 = v23;
            }
          }
        }
      }
    }
  }
  else if (a1 == 2) {
    LODWORD(v53) = 17;
    result = game_UnitPool_GetFirst((int*)&v53);
    if (result == 0) {
      return result;
    }
    v6 = *(_QWORD*)(result + 432);
    v7 = (_QWORD*)result;
    if (v6 == 0) {
      v6 = *(_QWORD*)(result + 440);
      if (v6 != 0) {
        v8 = *(unsigned __int8*)(v6 + 16);
        if (v8 <= 8) {
          v48 = v8 - 3;
          while (1) {
            if (v48 == 0) {
              v6 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v6 != 0) {
                break;
              }
            }
            if (++v48 == 6) {
              goto LABEL_7;
            }
          }
        }
        else {
        LABEL_7:
          v6 = 0;
        }
      }
    }
    v9 = game_g_shared_system_skills_ptr;
    while (1) {
    LABEL_10:
      v10 = (_QWORD*)v6;
      v11 = v7[49];
      if (v11 != 0 && *(_QWORD*)(v11 + 272) != 0) {
        v12 = v7[55];
        v13 = v12 != 0 ? *(_BYTE*)(v12 + 16) : 9;
        if (((1 << v13) & 0xF1) != 0) {
          LODWORD(v53) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x168LL) + v9) & 0xFFF;
          result = game_HasSkill(v7 + 218, &v53);
          if ((result & 1) == 0) {
            v14 = game_820d50(3);
            if (game_GameModeData_instance_ == 0 ||
                ((result = game_GameVariableTable_Find_alt1(
                      *(_QWORD**)(game_GameModeData_instance_ + 48),
                      (unsigned __int64*)v14)) == 0 ||
                 *(_DWORD*)(result + 32) == 0) &&
                    (game_GameModeData_instance_ == 0 ||
                     (v53 = (_QWORD*)v7[49],
                      ((result = UnitUtil_12122d0((__int64*)&v53)) & 1) !=
                          0))) {
              v15 = *(_QWORD*)(a3 + 32);
              v53 = v7;
              if (v15 == 0) {
                goto LABEL_102;
              }
              result = (*(__int64 (**)(__int64, _QWORD**))(*(_QWORD*)v15 +
                                                           48LL))(v15, &v53);
            }
          }
        }
      }
      if (v10 == nullptr) {
        break;
      }
      v6 = v10[54];
      v7 = v10;
      if (v6 == 0) {
        v16 = v10[55];
        v7 = v10;
        if (v16 != 0) {
          v17 = *(unsigned __int8*)(v16 + 16);
          v6 = 0;
          v7 = v10;
          if (v17 <= 8) {
            v18 = v17 - 3;
            while (1) {
              if (v18 == 0) {
                v6 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v6 != 0) {
                  break;
                }
              }
              if (++v18 == 6) {
                v6 = 0;
                v7 = v10;
                goto LABEL_10;
              }
            }
            v7 = v10;
          }
        }
      }
    }
  }
  else {
    v52 = 209;
    result = game_UnitPool_GetFirst((int*)&v52);
    if (result != 0) {
      v32 = *(_QWORD*)(result + 432);
      v33 = (_QWORD*)result;
      if (v32 == 0) {
        v32 = *(_QWORD*)(result + 440);
        if (v32 != 0) {
          v34 = *(unsigned __int8*)(v32 + 16);
          if (v34 <= 8) {
            while (1) {
              v50 = v34 + 1;
              if (((v52 >> v34) & 2) != 0) {
                v32 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                 24LL * (unsigned __int8)(v34 + 1) + 556000);
                if (v32 != 0) {
                  break;
                }
              }
              v34 = v50;
              if (v50 == 9) {
                goto LABEL_67;
              }
            }
          }
          else {
          LABEL_67:
            v32 = 0;
          }
        }
      }
      v35 = game_g_shared_system_skills_ptr;
      while (1) {
      LABEL_70:
        v36 = (_QWORD*)v32;
        v37 = v33[49];
        if (v37 != 0 && *(_QWORD*)(v37 + 272) != 0) {
          v38 = v33[55];
          v39 = v38 != 0 ? *(_BYTE*)(v38 + 16) : 9;
          if (((1 << v39) & 0xF1) != 0) {
            LODWORD(v53) =
                *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x168LL) + v35) & 0xFFF;
            result = game_HasSkill(v33 + 218, &v53);
            if ((result & 1) == 0) {
              v40 = game_820d50(3);
              if (game_GameModeData_instance_ == 0 ||
                  (result = game_GameVariableTable_Find_alt1(
                       *(_QWORD**)(game_GameModeData_instance_ + 48),
                       (unsigned __int64*)v40)) == 0 ||
                  *(_DWORD*)(result + 32) == 0) {
                v41 = *(_QWORD*)(a3 + 32);
                v53 = v33;
                if (v41 == 0) {
                  goto LABEL_102;
                }
                result = (*(__int64 (**)(__int64, _QWORD**))(*(_QWORD*)v41 +
                                                             48LL))(v41, &v53);
              }
            }
          }
        }
        if (v36 == nullptr) {
          break;
        }
        v32 = v36[54];
        v33 = v36;
        if (v32 == 0) {
          v42 = v36[55];
          v33 = v36;
          if (v42 != 0) {
            v43 = *(unsigned __int8*)(v42 + 16);
            v32 = 0;
            v33 = v36;
            if (v43 <= 8) {
              while (1) {
                v44 = v43 + 1;
                if (((v52 >> v43) & 2) != 0) {
                  v32 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                   24LL * (unsigned __int8)(v43 + 1) + 556000);
                  if (v32 != 0) {
                    break;
                  }
                }
                ++v43;
                if (v44 == 9) {
                  v32 = 0;
                  v33 = v36;
                  goto LABEL_70;
                }
              }
              v33 = v36;
            }
          }
        }
      }
    }
  }
  if (a1 <= 1 && (a2 & 1) == 0) {
    result = (__int64)game_820d50(3);
    if (game_GameModeData_instance_ == 0 ||
        (result = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)result)) == 0 ||
        *(_DWORD*)(result + 32) == 0) {
      v45 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556192LL);
      if (v45 != 0) {
        do {
          v46 = *(_QWORD*)(v45 + 432);
          v53 = *(_QWORD**)(v45 + 392);
          result = UnitUtil_12122d0((__int64*)&v53);
          if ((result & 1) != 0) {
            v47 = *(_QWORD*)(a3 + 32);
            v53 = (_QWORD*)v45;
            if (v47 == 0) {
              goto LABEL_102;
            }
            result = (*(__int64 (**)(__int64, _QWORD**))(*(_QWORD*)v47 + 48LL))(
                v47, &v53);
          }
          v45 = v46;
        } while (v46 != 0);
      }
    }
  }
  return result;
}

bool RelianceSelectMenu_184e500(__int64 a1, __int64 a2)
{
  _BOOL8 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  result = false;
  if (a1 != 0 && a2 != 0) {
    v5 = GameRoutine_8c9820(a1, a2, 0);
    v6 = GameRoutine_8c9820(a1, a2, 1);
    v7 = GameRoutine_8c9820(a1, a2, 2);
    v8 = GameRoutine_8c9820(a1, a2, 3);
    v9 = GameRoutine_8c9820(a1, a2, 4);
    return v5 != 0 && *(_BYTE*)(v5 + 64) != 4 ||
           v6 != 0 && *(_BYTE*)(v6 + 64) != 4 ||
           v7 != 0 && *(_BYTE*)(v7 + 64) != 4 ||
           v8 != 0 && *(_BYTE*)(v8 + 64) != 4 ||
           v9 != 0 && *(_BYTE*)(v9 + 64) != 4;
  }
  return result;
}

__int64 game_menu_RelianceSelectMenu_SortAndFilter(__int64 a1)
{
  int v1;
  __int64 v2;
  __int64 result;
  __int64 v4;
  struct {
    __int64 (**v5)();
    char v6;
    char gap9_[23];
    __int64 (***v7)();
  } v5_;
  struct {
    _BYTE v8[32];
    _BYTE* v9;
  } v8_;

  v1 = *(_DWORD*)(a1 + 200);
  v8_.v9 = nullptr;
  v5_.v5 = GameData_20e8eb8;
  v5_.v7 = &v5_.v5;
  v5_.v6 = v1;
  BasicMenu_16e1f40((_QWORD*)a1, (__int64)v8_.v8, (__int64)&v5_.v5);
  if (v5_.v7 == &v5_.v5) {
    v2 = 4;
  }
  else {
    if (v5_.v7 == nullptr) {
      goto LABEL_6;
    }
    v2 = 5;
  }
  ((__int64 (*)(__int64))(*v5_.v7)[v2])((__int64)v5_.v7);
LABEL_6:
  result = (__int64)v8_.v9;
  if (v8_.v9 == v8_.v8) {
    v4 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      return result;
    }
    v4 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v8_.v9 + v4))((__int64)v8_.v9);
}

__int64 game_menu_RelianceSelectMenu_AddItemList_lambda1_Invoke(__int64 a1,
                                                                __int64 a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 104LL);
  if (v2 != 0) {
    v3 = *(_QWORD*)(a1 + 16);
    if (v3 != 0 && *(_QWORD*)(*(_QWORD*)(v2 + 24) + 1672LL) ==
                       *(_QWORD*)(*(_QWORD*)(v3 + 24) + 1672LL)) {
      **(_BYTE**)(a1 + 8) = 1;
    }
  }
  return **(unsigned __int8**)(a1 + 8);
}

__int64 RelianceSelectMenu_1852650(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  unsigned int v4;
  unsigned int v5;

  v1 = GameData_2259540;
  if (GameData_2259540 != 0) {
    v2 = *(_QWORD*)(result + 8);
    v3 = GameRoutine_16dd280(v2);
    v4 = v3 - (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 224LL))(v2);
    v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 496LL))(v2);
    return game_gameui_anonymous_ProcGameUIFade_In(v1, v4, 0, v5, 1, v2);
  }
  return result;
}

__int64 game_menu_RelianceSelectMenu_ZLCall_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  struct {
    __int64 v28;
    __int64 v29;
    __int64 v30;
  } v28_;
  struct {
    __int64* v31;
    __int64* v32;
    __int64 v33;
  } v31_;
  _QWORD v34[5];
  unsigned __int64 v35[2];

  v1 = *(_QWORD*)(a1 + 8);
  v31_.v32 = nullptr;
  v31_.v33 = 0;
  v28_.v30 = 0;
  v31_.v31 = nullptr;
  v2 = *(_QWORD*)(v1 + 1072);
  v28_.v28 = 0;
  v28_.v29 = 0;
  if (v2 != 0) {
    v3 = (__int64*)GameData_21c9ac0;
    v4 = GameData_21c9ac8;
    while (v3 != (__int64*)v4) {
      v5 = *v3++;
      RelianceSelectMenu_1852b80_alt1(
          &v28_.v28, *(_QWORD*)(*(_QWORD*)(v1 + 1072) + 392LL), v5);
    }
  }
  RelianceSelectMenu_1852da0_alt2((__int64)&v28_.v28);
  v6 = v28_.v28;
  v7 = v28_.v29;
  if (v28_.v28 != v28_.v29) {
    v8 = v28_.v28;
    do {
      if (*(_BYTE*)(v8 + 16) != 0) {
        v9 = *(_QWORD*)v8;
        v10 = *(_QWORD*)(v8 + 8);
        if (*(_QWORD*)v8 != 0 && v10 != 0) {
          v34[0] = GameRoutine_8c9820_alt1(*(_QWORD*)v8, *(_QWORD*)(v8 + 8), 0);
          v34[1] = GameRoutine_8c9820_alt1(v9, v10, 1u);
          v34[2] = GameRoutine_8c9820_alt1(v9, v10, 2u);
          v34[3] = GameRoutine_8c9820_alt1(v9, v10, 3u);
          v12 = GameRoutine_8c9820_alt1(v9, v10, 4u);
          v13 = *(unsigned __int8*)(v8 + 16);
          v34[4] = v12;
          v14 = v34;
          v15 = v13 + 1;
          do {
            v17 = *v14++;
            v16 = v17;
            if (v17 != 0) {
              game_VariableManager_SetFlag_alt1(*(_QWORD*)(v16 + 24) + 40LL, 1);
              v18 = *(_QWORD*)(v16 + 128);
              if (v18 != 0) {
                v35[1] = *(_QWORD*)(v16 + 128);
                v35[0] = game_HashString_alt1(v18);
                if (game_GameModeData_instance_ != 0) {
                  GameVariable_828700_alt1(game_GameModeData_instance_ + 40,
                                           v35, 1);
                }
              }
            }
            --v15;
          } while (v15 != 0);
        }
      }
      v8 += 24;
    } while (v8 != v7);
  }
  v19 = v31_.v31;
  if (v31_.v31 != v31_.v32) {
    GameRoutine_9d5920_alt1(v1, &v31_.v31);
  }
  v20 = *(_QWORD*)(v1 + 1072);
  *(_BYTE*)(v1 + 1080) = 0;
  if (v20 != 0) {
    v21 = *(_QWORD*)(v20 + 392);
    if (v21 != 0) {
      v23 = (__int64*)GameData_21c9ac0;
      v22 = GameData_21c9ac8;
      if (GameData_21c9ac0 != GameData_21c9ac8) {
        while (1) {
          v24 = *v23++;
          if ((unsigned int)RelianceSelectMenu_184d1f0(v21, v24) == 1) {
            break;
          }
          if (v23 == (__int64*)v22) {
            goto LABEL_27;
          }
        }
        *(_BYTE*)(v1 + 1080) = 1;
      }
    }
  }
LABEL_27:
  game_menu_BasicMenu_Unknown16dd9a0_alt1(v1);
  GameHr_16e8d70((__int64*)(v1 + 1056));
  RelianceSelectMenu_Unknown88(v1);
  if (v19 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v25,
                                       (__int64)v19);
  }
  if (v6 != 0) {
    v26 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v26, v6);
  }
  return 2;
}

void RelianceSelectMenu_1852da0(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v1 = *a1;
  v2 = a1[1];
  if (*a1 == v2) {
    goto LABEL_69;
  }
  do {
    v5 = *(_QWORD*)v1;
    v6 = *(_QWORD*)(v1 + 8);
    *(_BYTE*)(v1 + 16) = 0;
    if ((unsigned int)RelianceSelectMenu_184d1f0(v5, v6) != 1) {
      goto LABEL_5;
    }
    v7 = *(_QWORD*)v1;
    v8 = *(_QWORD*)(v1 + 8);
    if (*(_QWORD*)v1 == 0 || v8 == 0) {
      goto LABEL_5;
    }
    v10 = GameRoutine_8c9820_alt1(*(_QWORD*)v1, *(_QWORD*)(v1 + 8), 0);
    v4 = GameRoutine_8c9820_alt1(v7, v8, 1u);
    v11 = GameRoutine_8c9820_alt1(v7, v8, 2u);
    v12 = GameRoutine_8c9820_alt1(v7, v8, 3u);
    v13 = GameRoutine_8c9820_alt1(v7, v8, 4u);
    if (v10 == nullptr) {
      goto LABEL_17;
    }
    if (game_GameModeData_instance_ != 0) {
      v14 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)(v10[3] + 40));
      if (v14 != 0 && *(_DWORD*)(v14 + 32) != 0) {
        goto LABEL_16;
      }
    }
    if (*((_BYTE*)v10 + 64) == 4) {
      goto LABEL_16;
    }
    if ((GameRoutine_9e60d0_alt1((unsigned int*)v10[3]) & 1) == 0) {
      goto LABEL_5;
    }
    if ((GameRoutine_9e60d0_alt1((unsigned int*)v10[3]) & 1) == 0 ||
        (unsigned __int16)game_anonymous_RuntimeTalk_GetCondition_alt1(
            (__int64)v10) != 0 &&
            (unsigned int)game_anonymous_RuntimeTalk_GetCondition_alt1(
                (__int64)v10) != 256) {
    LABEL_16:
      LODWORD(v10) = 0;
    LABEL_17:
      if (v4 == nullptr) {
        goto LABEL_23;
      }
      goto LABEL_18;
    }
    LODWORD(v10) = 1;
    if (v4 != nullptr) {
    LABEL_18:
      if (game_GameModeData_instance_ != 0) {
        v15 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)(v4[3] + 40));
        if (v15 != 0 && *(_DWORD*)(v15 + 32) != 0) {
          goto LABEL_22;
        }
      }
      if (*((_BYTE*)v4 + 64) == 4) {
        goto LABEL_22;
      }
      if ((GameRoutine_9e60d0_alt1((unsigned int*)v4[3]) & 1) == 0) {
        LOBYTE(v4) = 0;
        goto LABEL_65;
      }
      if ((GameRoutine_9e60d0_alt1((unsigned int*)v4[3]) & 1) == 0 ||
          (unsigned __int16)game_anonymous_RuntimeTalk_GetCondition_alt1(
              (__int64)v4) != 0 &&
              (unsigned int)game_anonymous_RuntimeTalk_GetCondition_alt1(
                  (__int64)v4) != 256) {
      LABEL_22:
        LOBYTE(v4) = 0;
      }
      else {
        LODWORD(v10) = 1;
        LOBYTE(v4) = 1;
      }
    }
  LABEL_23:
    if (v11 != nullptr &&
        (game_GameModeData_instance_ == 0 ||
         (v16 = game_GameVariableTable_Find_alt1(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)(v11[3] + 40))) == 0 ||
         *(_DWORD*)(v16 + 32) == 0) &&
        *((_BYTE*)v11 + 64) != 4) {
      if ((GameRoutine_9e60d0_alt1((unsigned int*)v11[3]) & 1) == 0) {
        goto LABEL_65;
      }
      if ((GameRoutine_9e60d0_alt1((unsigned int*)v11[3]) & 1) != 0 &&
          ((unsigned __int16)game_anonymous_RuntimeTalk_GetCondition_alt1(
               (__int64)v11) == 0 ||
           (unsigned int)game_anonymous_RuntimeTalk_GetCondition_alt1(
               (__int64)v11) == 256)) {
        LOBYTE(v4) = 2;
        LODWORD(v10) = 1;
      }
    }
    if (v12 == nullptr) {
      goto LABEL_33;
    }
    if (game_GameModeData_instance_ != 0) {
      v17 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)(v12[3] + 40));
      if (v17 != 0 && *(_DWORD*)(v17 + 32) != 0) {
        goto LABEL_33;
      }
    }
    if (*((_BYTE*)v12 + 64) == 4) {
      goto LABEL_33;
    }
    if ((GameRoutine_9e60d0_alt1((unsigned int*)v12[3]) & 1) != 0) {
      if ((GameRoutine_9e60d0_alt1((unsigned int*)v12[3]) & 1) != 0 &&
          ((unsigned __int16)game_anonymous_RuntimeTalk_GetCondition_alt1(
               (__int64)v12) == 0 ||
           (unsigned int)game_anonymous_RuntimeTalk_GetCondition_alt1(
               (__int64)v12) == 256)) {
        LOBYTE(v4) = 3;
        LODWORD(v10) = 1;
      }
    LABEL_33:
      if (v13 != nullptr &&
          (game_GameModeData_instance_ == 0 ||
           (v18 = game_GameVariableTable_Find_alt1(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)(v13[3] + 40))) == 0 ||
           *(_DWORD*)(v18 + 32) == 0) &&
          *((_BYTE*)v13 + 64) != 4 &&
          (GameRoutine_9e60d0_alt1((unsigned int*)v13[3]) & 1) != 0 &&
          (GameRoutine_9e60d0_alt1((unsigned int*)v13[3]) & 1) != 0 &&
          ((unsigned __int16)game_anonymous_RuntimeTalk_GetCondition_alt1(
               (__int64)v13) == 0 ||
           (unsigned int)game_anonymous_RuntimeTalk_GetCondition_alt1(
               (__int64)v13) == 256)) {
        LOBYTE(v4) = 4;
      LABEL_4:
        *(_BYTE*)(v1 + 16) = (_BYTE)v4;
        goto LABEL_5;
      }
    }
  LABEL_65:
    if ((_DWORD)v10 != 0) {
      goto LABEL_4;
    }
  LABEL_5:
    v1 += 24;
  } while (v1 != v2);
  v1 = *a1;
  v2 = a1[1];
LABEL_69:
  while (v1 != v2) {
    GameRoutine_184d360_alt2(v1, a1 + 3);
    v1 += 24;
  }
}

__int64 game_menu_RelianceSelectMenu_AddItemList_lambda0_Invoke(__int64 result,
                                                                __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v2 = *(_QWORD*)(result + 8);
  v3 = *a2;
  v4 = *(_QWORD*)(v2 + 1072);
  if (*a2 != v4) {
    v5 = *(_DWORD*)(result + 16);
    if (v5 != 0) {
      goto LABEL_5;
    }
    v6 = result;
    result = RelianceSelectMenu_184e500_alt1(*(_QWORD*)(v3 + 392),
                                             *(_QWORD*)(v4 + 392));
    if ((result & 1) != 0) {
      v5 = *(_DWORD*)(v6 + 16);
    LABEL_5:
      v7 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 168, 16, 0);
      v8 = *(_QWORD*)(v2 + 1072);
      v9 = (_QWORD*)v7;
      *(_WORD*)(v7 + 16) = 0;
      *(_DWORD*)(v7 + 40) = 0;
      *(_QWORD*)(v7 + 64) = 0;
      *(_QWORD*)(v7 + 72) = 0;
      *(_QWORD*)(v7 + 48) = 0;
      *(_QWORD*)(v7 + 56) = 0;
      *(_QWORD*)(v7 + 88) = v3;
      *(_DWORD*)(v7 + 96) = v5;
      *(_DWORD*)(v7 + 100) = 0;
      *(_WORD*)(v7 + 80) = 257;
      *(_BYTE*)(v7 + 82) = 1;
      *(_QWORD*)v7 = game_menu_anonymous_RelianceUnitGridMenuItem_vtable;
      *(_QWORD*)(v7 + 8) = 0;
      RelianceMenuItem_1851ae0((__int64*)v7);
      v9[13] = 0;
      v9[14] = 0;
      v9[15] = 0;
      v9[16] = 0;
      v9[17] = 0;
      v9[18] = 0;
      v9[19] = 0;
      *(_QWORD*)((char*)v9 + 157) = 0;
      *v9 = game_menu_anonymous_RelianceMenuItem_vtable;
      if (v3 != 0) {
        v12 = *(_QWORD*)(v3 + 392);
        if (v8 != 0) {
        LABEL_7:
          v10 = *(_QWORD*)(v8 + 392);
        LABEL_11:
          v11 = v10;
          GameRoutine_8ca350(v9 + 13, &v12, &v11);
          return BasicMenuCursor_16e0c00(v2, v9);
        }
      }
      else {
        v12 = 0;
        if (v8 != 0) {
          goto LABEL_7;
        }
      }
      v10 = 0;
      goto LABEL_11;
    }
  }
  return result;
}

__int64 game_menu_RelianceSelectMenu_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                                  __int64* a2,
                                                                  __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64* v17;
  unsigned __int64* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  bool v22;
  char v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64* v31;
  unsigned __int64* v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  bool v36;
  __int64 v37;
  __int64 v38;
  __int64 v40[3];
  struct {
    unsigned __int64* v41;
    __int64 v42;
    __int64 v43;
  } v41_;

  v3 = *a2;
  v4 = *a3;
  v5 = *(_QWORD*)(*a2 + 88);
  v6 = *(_QWORD*)(*a3 + 88);
  if (v5 == 0 || v6 == 0) {
    v8 = *(unsigned __int8*)(v3 + 164);
    v9 = *(_QWORD*)(v4 + 104);
    v10 = *(_QWORD*)(v3 + 104);
    v41_.v42 = 0;
    v41_.v43 = 0;
    v41_.v41 = nullptr;
    GameRoutine_19ef790_alt1((__int64*)&v41_.v41, v8, 8u);
    GameRoutine_19ef790_alt1((__int64*)&v41_.v41,
                             *(unsigned __int16*)(v10 + 16) | 0x80000000LL,
                             0x20u);
    v11 = *(unsigned __int8*)(v4 + 164);
    v12 = (__int64)v41_.v41;
    v13 = v41_.v42;
    v41_.v42 = 0;
    v41_.v43 = 0;
    v41_.v41 = nullptr;
    GameRoutine_19ef790_alt1((__int64*)&v41_.v41, v11, 8u);
    GameRoutine_19ef790_alt1((__int64*)&v41_.v41,
                             *(unsigned __int16*)(v9 + 16) | 0x80000000LL,
                             0x20u);
    v14 = (v13 - v12) >> 3;
    v15 = (v41_.v42 - (__int64)v41_.v41) >> 3;
    if (v15 >= v14) {
      v16 = (v13 - v12) >> 3;
    }
    else {
      v16 = (v41_.v42 - (__int64)v41_.v41) >> 3;
    }
    if (v16 < 1) {
    LABEL_13:
      v23 = v14 < v15;
      if (v41_.v41 == nullptr) {
      LABEL_17:
        if (v12 == 0) {
          return v23 & 1;
        }
        v25 = fw_memory_g_heap_manager;
        goto LABEL_44;
      }
    }
    else {
      v17 = (unsigned __int64*)v12;
      v18 = v41_.v41;
      while (1) {
        v20 = *v17++;
        v19 = v20;
        v21 = *v18++;
        v22 = v19 >= v21;
        if (v19 != v21) {
          break;
        }
        if (--v16 == 0) {
          goto LABEL_13;
        }
      }
      v23 = !v22;
      if (v41_.v41 == nullptr) {
        goto LABEL_17;
      }
    }
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, (__int64)v41_.v41);
    goto LABEL_17;
  }
  v26 = *(_BYTE*)(a1 + 8);
  RelianceMenuItem_18537d0_alt1(&v41_.v41, v26, *a2, v5);
  RelianceMenuItem_18537d0_alt1(v40, v26, v4, v6);
  v12 = (__int64)v41_.v41;
  v27 = v41_.v42 - (_QWORD)v41_.v41;
  v28 = v40[0];
  v29 = v40[1] - v40[0];
  if (v41_.v42 - (_QWORD)v41_.v41 == v40[1] - v40[0] &&
      memcmp_alt1((__int64)v41_.v41, v40[0], v41_.v42 - (_QWORD)v41_.v41) ==
          0) {
    v23 = GameRoutine_15b75f0_alt1(v3, v4);
  }
  else {
    if (v29 >> 3 >= v27 >> 3) {
      v30 = v27 >> 3;
    }
    else {
      v30 = v29 >> 3;
    }
    if (v30 < 1) {
    LABEL_28:
      v23 = v27 >> 3 < v29 >> 3;
    }
    else {
      v31 = (unsigned __int64*)v12;
      v32 = (unsigned __int64*)v28;
      while (1) {
        v34 = *v31++;
        v33 = v34;
        v35 = *v32++;
        v36 = v33 >= v35;
        if (v33 != v35) {
          break;
        }
        if (--v30 == 0) {
          goto LABEL_28;
        }
      }
      v23 = !v36;
    }
  }
  if (v28 != 0) {
    v37 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v37, v28);
  }
  if (v12 != 0) {
    v25 = fw_memory_g_heap_manager;
  LABEL_44:
    v38 = 128;
    if (*(_QWORD*)(v25 + 200) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v25 + v38, v12);
  }
  return v23 & 1;
}

#pragma GCC visibility pop
