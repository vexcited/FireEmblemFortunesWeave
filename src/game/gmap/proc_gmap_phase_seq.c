#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_12ddb80(_QWORD, _QWORD);
__int64 GameRoutine_131b660(_QWORD);
__int64 GameRoutine_1328d60(_QWORD);
__int64 GameRoutine_1341d60(_QWORD, _QWORD);
__int64 GameRoutine_1341ed0(void);
__int64 GameRoutine_1349320(_QWORD);
__int64 GameRoutine_134d2e0(_QWORD);
__int64 GameRoutine_14a73e0(__int64);
__int64 GameRoutine_14aaba0(_QWORD, _QWORD);
__int64 GameRoutine_14b4b70(__int64, unsigned int, __int64);
__int64 GameRoutine_14c6620(__int64);
__int64 GameRoutine_14cb390(_QWORD);
__int64 GameRoutine_15255d0(_QWORD);
__int64 GameRoutine_1544c00(_QWORD, _QWORD);
__int64 GameRoutine_1546680(_QWORD);
__int64 GameRoutine_162aea0(_QWORD, _QWORD);
__int64 GameRoutine_16477d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1712520(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_175b880(_QWORD);
__int64 GameRoutine_175bde0(_QWORD);
__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
__int64 GameRoutine_17bcf90(_QWORD);
__int64 GameRoutine_70ea50(_QWORD, _QWORD);
__int64 GameRoutine_8224a0(_QWORD);
__int64 GameRoutine_869d10(_QWORD, _QWORD);
__int64 GameRoutine_87f520(_QWORD, _QWORD);
__int64 GameRoutine_887920(_QWORD, _QWORD);
__int64 GameRoutine_995200(_QWORD);
__int64 GameRoutine_ae0560(void);
__int64 GameRoutine_ae3e80(_QWORD, _QWORD);
__int64 GameSubquestData_125a1a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GmapSituation_14dc4f0(void);
__int64 LayoutAccessor_1555150(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
__int64 ScheduleNatives_869ec0(void);
__int64 ScheduleNatives_86a320(_QWORD, _QWORD);
__int64 SpotMgr_1334560(_QWORD);
__int64 TalkOtherClanMenuItem_14d01c0(_QWORD, _QWORD);
__int64 TelopParts_17cc7d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 TroopMgr_1347760(void);
__int64 TroopMgr_1347860(void);
__int64 TroopMgr_1349f40(_QWORD);
__int64 TroopMgr_13504e0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(_QWORD, _QWORD);
__int64 game_gmap_SpotMgr_OnEndPhase(void);
__int64 game_gmap_TroopMgr_CountPlayerTroop_134e7b0(_QWORD);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1a86fa8;
extern _UNKNOWN GameData_1a964b8;
extern _UNKNOWN GameData_1a96743;
extern _UNKNOWN GameData_1ac4744;
extern _UNKNOWN GameData_1ad8027;
extern _UNKNOWN GameData_1adfa87;
extern _UNKNOWN GameData_1ae764f;
extern _UNKNOWN GameData_1aeef0e;
extern _UNKNOWN GameData_1af6c5c;
extern __int64 (*GameData_202da48[])();
extern __int64 (*GameData_202dac8[])();
extern __int64 (*GameData_2045b00[])();
extern __int64 (*GameData_2045d00[])();
extern __int64 GameData_212c638;
extern __int64 GameData_212c6c0[2];
extern __int64 GameData_212c7a0[13];
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_212d740[3];
extern __int64 GameData_212d750;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21c9700;
extern __int64 GameData_21f1618;
extern __int64 GameData_21f1628;
extern __int64 GameData_21f1658;
extern __int64 GameData_21f1668;
extern __int64 GameData_2241720;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_game_setting;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64* GameData_212c780;
extern __int64* GameData_212c790;
extern __int64* GameData_212d700[2];
extern __int64* GameData_212d708;
extern __int64* GameData_212d728[2];
extern __int64* GameData_2130e60;
extern __int64* GameData_2130e70;
extern int GameData_21caa04;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
void __attribute__((noreturn)) GameRoutine_888610(_QWORD);
void game_gmap_ProcGmapPhaseSeq_CheckAttachmentMiasma(__int64 a1, __int64 a2,
                                                      __int64 a3);
__int64 ProcGmapPhaseSeq_14c6e70(__int64 result);
__int64 ProcGmapPhaseSeq_14c75b0();
void ProcGmapPhaseSeq_14c7610();
__int64 ProcGmapPhaseSeq_14c7b50(__int64 result);
_QWORD* game_gmap_ProcGmapPhaseSeq_CheckSpotAttachmentAuto(_QWORD* result,
                                                           __int64 a2,
                                                           __int64 a3);
__int64 ProcGmapPhaseSeq_14c7e30(__int64 a1);
__int64 ProcGmapPhaseSeq_14c7eb0(__int64 result);
__int64 ProcGmapPhaseSeq_14c8ac0();
__int64 ProcGmapPhaseSeq_14c9220(__int64 a1);
__int64 ProcGmapPhaseSeq_14c92a0(__int64 a1);
__int64 ProcGmapPhaseSeq_14c9540(__int64 a1, __int64 a2);
__int64
ProcGmapPhaseSeq_14c9620_alt1(__int64 a1,
                              __int64 a2) __asm__("ProcGmapPhaseSeq_14c9620");
__int64 ProcGmapPhaseSeq_14c9820(__int64 result);
__int64 ProcGmapPhaseSeq_14c9e20();
__int64 ProcGmapPhaseSeq_14c9fa0();
__int64 ProcGmapPhaseSeq_14ca030(__int64 a1);
__int64 ProcGmapPhaseSeq_14ca100(__int64 a1);
__int64 ProcGmapPhaseSeq_14ca340(__int64 result);
void ProcGmapPhaseSeq_14ca830();
__int64 ProcGmapPhaseSeq_14cabc0();
__int64 ProcGmapPhaseSeq_14cad00_alt1(__int64 result) __asm__(
    "ProcGmapPhaseSeq_14cad00");
__int64 ProcGmapPhaseSeq_14caee0(__int64 result);
__int64
ProcGmapPhaseSeq_14cb0d0_alt1(__int64 a1) __asm__("ProcGmapPhaseSeq_14cb0d0");
__int64 ProcGmapPhaseSeq_14cb560(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4,
                                 _QWORD* a5, __int64 a6, __int64 a7, __int64 a8,
                                 __int64 a9);
__int64 game_gmap_ProcGmapPhaseSeq_TryConfirmTurnEnd_closure_Invoke(__int64 a1);
__int64
game_gmap_ProcGmapPhaseSeq_TryConfirmTurnEnd_closure0_Invoke(__int64 a1);
__int64
game_gmap_ProcGmapPhaseSeq_TryConfirmTurnEnd_closure1_Invoke(__int64 a1);
__int64 game_gmap_ProcGmapPhaseSeq_CheckSpotAttachmentAuto_closure_Invoke(
    __int64 result, __int64* a2);
bool ProcGmapPhaseSeq_14cbf30();
__int64 game_gmap_ProcGmapPhaseSeq_FreeCursorTick_closure_Invoke(__int64 result,
                                                                 __int64 a2);
__int64 game_gmap_ProcGmapPhaseSeq_EndOtherPhase_closure_Invoke(__int64 a1,
                                                                __int64* a2);
__int64 Impl_13261c0(_QWORD);
__int64 Spot_132b100(_QWORD, _QWORD);
extern __int64 GameData_22416b0;
__int64
game_gmap_ProcGmapPhaseSeq_CheckAttachmentMiasma_closure_Invoke(__int64 result,
                                                                _QWORD* a2);
_QWORD* Troop_133e4e0(__int64);
__attribute__((swiftcall)) void TroopMgr_134b820(PSEUDO_X8, _QWORD*);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 CorpsManager_972680();
__int64 GameCalendar_12da840(_QWORD);
__int64 GameCalendar_12ddb80(_QWORD, _QWORD);
__int64 GameRoutine_1130770(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1317f10(float32x4_t*, float32x4_t*);
__int64 GameRoutine_135aa80(_QWORD);
__int64 GameRoutine_137c090(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_152e8c0(__int64);
__int64 GameRoutine_15307f0();
__int64 GameRoutine_1530910();
__int64 GameRoutine_1530970();
__int64 GameRoutine_1551ac0(int);
__int64 GameRoutine_1551c40(__int64 result);
__int64 GameRoutine_164e5c0(__int64, __int64*, char*, __int64);
__int64 GameRoutine_19023d0(_QWORD, _QWORD);
__int64 GameRoutine_8229c0();
__int64 GameRoutine_869d10_alt1() __asm__("GameRoutine_869d10");
__int64 GameRoutine_ae4440(_QWORD);
__int64 GmapSpotList_167b840(_QWORD, _QWORD, _QWORD);
__int64 TelopParts_17cc7d0_alt1(__int64, __int64, __int64, char, __int64,
                                char) __asm__("TelopParts_17cc7d0");
__int64 TroopMgr_1345b40();
__int64 TroopMgr_1345d00();
__int64 TroopMgr_13460a0(__int64);
__int64 TroopMgr_134b560(__int64, __int64);
__int64 TroopMgr_134d2e0(_QWORD);
__int64 TroopMgr_1353fb0(_QWORD, _QWORD, _QWORD);
__int64 UnitActor_81a540(__int64, int, __int64);
__int64 UnitActor_81a540_alt1(_QWORD, _QWORD,
                              _QWORD) __asm__("UnitActor_81a540");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString32(void);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_ProcInst_Unregister(__int64 result);
__int64 game_gmap_1319f40(__int64 result);
__int64 game_gmap_132a900(_QWORD, _QWORD);
__int64 game_gmap_1341d60(__int64, char);
__int64 game_gmap_1520a70(__int64);
__int64 game_gmap_1520ea0(__int64);
__int64 game_gmap_1536e70(_QWORD);
__int64 game_gmap_GmapShopGuideTopMenu_HasShopGuide(__int64);
__int64 game_gmap_SpotMgr_GetAroundSpot(char);
__int64 game_gmap_TroopMgr_CountTroop_1349680(_QWORD);
__int64 game_gmap_TroopMgr_CountTroop_1349680_alt1(__int64) __asm__(
    "game_gmap_TroopMgr_CountTroop_1349680");
__int64 game_gmap_TroopMgr_EachReserveUnit(__int64);
__int64 game_gmap_Troop_OnEndPhase(__int64 result);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_play_ff2d0_alt1(__int64, __int64, __int64, unsigned int,
                            unsigned int, int, float,
                            float) __asm__("snd_play_ff2d0");
__int64 wmemchr(_QWORD);
__n128 GameRoutine_658c00(_QWORD*);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak();
bool GameRoutine_995200_alt1(__int64) __asm__("GameRoutine_995200");
bool GameVariable_718130(__int64 (*)(), __int64);
bool GmapSituation_14db2f0();
extern _UNKNOWN* GameData_212ceb8;
extern _UNKNOWN GameData_1acc8c0;
extern _UNKNOWN GameData_1ade186;
extern _UNKNOWN GameData_216de68;
extern __int64 (*GameData_202d7c8[])();
extern __int64 (*GameData_2045d80[])();
extern __int64 (*GameData_2045e00[])();
extern __int64 (*GameData_2045e80[])();
extern __int64 (*GameData_2045f00[])();
extern __int64 (*GameData_2045f80[])();
extern __int64 (*GameData_20460e8[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gmap_ProcGmapPhaseSeq_vtable[])();
extern __int64* GameData_212d460[6];
extern __int64 GameData_21f1620;
extern __int64 GameData_21f1650;
extern __int64 GameData_2241428;
extern __int64 GameData_22416c0;
extern __int64 GameData_22506e0;
extern __int64 GameData_2258178;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
float32x4_t* game_gmap_1318260();
unsigned int* TroopMgr_1346380();
unsigned int* TroopMgr_134c680();
unsigned int* TroopMgr_134e220();
unsigned int* game_gmap_SpotMgr_GetCurrentSpot_alt1() __asm__(
    "game_gmap_SpotMgr_GetCurrentSpot");
void GameRoutine_1328d60_alt1(__int64) __asm__("GameRoutine_1328d60");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_888610_alt1() __asm__("GameRoutine_888610");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
void ProcGmapPhaseSeq_14c6e20();
__int64 ProcGmapPhaseSeq_14c7300(__int64 result);
void game_gmap_ProcGmapPhaseSeq_FreeCursorTick(__int64 a1);
__int64 game_gmap_ProcGmapPhaseSeq_CalcBeforeSpotMenu();
__int64 ProcGmapPhaseSeq_14c9b20(__int64 a1, __int64 a2);
__int64 ProcGmapPhaseSeq_14c9d40(__int64 a1);
__int64 ProcGmapPhaseSeq_14c9ed0(__int64 a1);
__int64 ProcGmapPhaseSeq_14ca180(__int64 result);
__int64 ProcGmapPhaseSeq_14ca250(__int64 a1);
void game_gmap_ProcGmapPhaseSeq_EndOtherPhase(__int64 a1);
__int64 ProcGmapPhaseSeq_14ca660();
__int64 game_gmap_ProcGmapPhaseSeq_CycleGrowPart3(__int64 result);
__int64 ProcGmapPhaseSeq_14caa60(__int64 a1);
__int64 ProcGmapPhaseSeq_14cbc80(__int64* a1, __int64 a2);
__n128 ProcGmapPhaseSeq_Destructor(__int64 a1);
__int64 GameRoutine_65c660(_QWORD, _QWORD);
__int64 GameRoutine_adfc40(_QWORD);
__int64 GmapSituation_14dbfe0(void);
__int64 game_821090(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 strcmp(_QWORD, _QWORD);
extern _UNKNOWN GameData_1a86f85;
extern _UNKNOWN GameData_1a8ad12;
extern _UNKNOWN GameData_1a8eb5b;
extern _UNKNOWN GameData_1aadb5b;
extern _UNKNOWN GameData_1ab7f34;
extern _UNKNOWN GameData_1abd4a3;
extern _UNKNOWN GameData_1abfa08;
extern _UNKNOWN GameData_1ad4494;
extern _UNKNOWN GameData_1ae38ca;
extern _UNKNOWN GameData_1aeb38e;
extern _UNKNOWN GameData_1aee5d5;
extern _UNKNOWN GameData_1aeef24;
extern char GameData_1a9f09e;
extern const char GameData_1adf7db[];
__int64 ProcGmapPhaseSeq_14c8ba0(__int64 result);
_QWORD*
ProcGmapPhaseSeq_14cb560_alt1(__int64, __int64, _QWORD*, _QWORD*, _QWORD*,
                              __int64, __int64, __int64,
                              __int64) __asm__("ProcGmapPhaseSeq_14cb560");
__int64* game_8224a0(unsigned __int8);
__int64 game_gmap_TroopMgr_CanCreateCorps();
bool game_CorpsManager_GetEmptyIndex();
extern __int64 (*GameData_2045b80[])();
extern __int64 (*GameData_2045c00[])();
extern __int64 (*GameData_2045c80[])();
__int64 game_gmap_ProcGmapPhaseSeq_TryConfirmTurnEnd(__int64 a1);
__attribute__((swiftcall)) void Dir_70ea50(PSEUDO_X8, __int16* result, __int64);
__int64 GameHr_14b4b70(__int64, unsigned int, __int64);
__int64 GameHr_14b4b70_alt1(__int64, int, __int64) __asm__("GameHr_14b4b70");
__int64 GameHr_869d10();
__int64 GameHr_86a320(__int64, __int16*);
__int64 GameRoutine_1349320_alt1(__int64*) __asm__("GameRoutine_1349320");
__int64 GameRoutine_175b880_alt1(__int64) __asm__("GameRoutine_175b880");
__int64 GameRoutine_17b8f40_alt1(__int64, char) __asm__("GameRoutine_17b8f40");
__int64 GameRoutine_ae0560_alt1() __asm__("GameRoutine_ae0560");
__int64 GmapSituation_14dc4f0_alt1() __asm__("GmapSituation_14dc4f0");
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64 LayoutAccessor_1567000_alt1(__int64,
                                    char) __asm__("LayoutAccessor_1567000");
__int64 ScheduleNatives_869ec0_alt1() __asm__("ScheduleNatives_869ec0");
__int64 TelopBmapPhase_137c090(__int64, char, char);
__int64 TroopMgr_134d2e0_alt1(__int64) __asm__("TroopMgr_134d2e0");
__int64 TroopMgr_13504e0_alt1() __asm__("TroopMgr_13504e0");
__int64
game_VariableManager_SetFlag_alt1(__int64 result,
                                  int) __asm__("game_VariableManager_SetFlag");
__int64 game_gmap_TroopMgr_CountPlayerTroop_134e7b0_alt1(__int64) __asm__(
    "game_gmap_TroopMgr_CountPlayerTroop_134e7b0");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void GameHr_14d01c0(__int64, __int64);
void GameSubquestData_125a1a0_alt1(__int64, __int64*, __int64,
                                   char) __asm__("GameSubquestData_125a1a0");
void TroopMgr_1349f40_alt1(__int64) __asm__("TroopMgr_1349f40");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcGmapPhaseSeq_14c9620(__int64 a1);
void ProcGmapPhaseSeq_14cad00(__int64 a1);
void ProcGmapPhaseSeq_14cb0d0(__int64 a1);

void game_gmap_ProcGmapPhaseSeq_CheckAttachmentMiasma(__int64 a1, __int64 a2,
                                                      __int64 a3)
{
  _QWORD* v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[4];
  _QWORD* v11;
  char v12;
  char v13;
  __int64 v14;

  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    return;
  }
  v3 = v10;
  v13 = 0;
  v12 = 0;
  v10[0] = GameData_2045b00;
  v10[1] = &v13;
  v11 = v10;
  v10[2] = &v12;
  v4 = *(_QWORD*)(GameData_21c9700 + 8);
  v5 = *(__int64**)(v4 + 48);
  v6 = *(__int64**)(v4 + 56);
  if (v5 == v6) {
    goto LABEL_15;
  }
  do {
    v7 = *v5;
    v8 = *(_QWORD*)(*v5 + 280);
    if (v8 != 0 &&
        ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v8 + 24LL))(v8) != 1 ||
         ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v7 + 280) + 112LL))(
              *(_QWORD*)(v7 + 280)) &
          1) == 0) &&
        *(_QWORD*)(v7 + 280) != 0) {
      v14 = v7;
      if (v11 == nullptr) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(_QWORD*, __int64*))(*v11 + 48LL))(v11, &v14);
    }
    ++v5;
  } while (v5 != v6);
  v3 = v11;
  if (v11 == v10) {
  LABEL_15:
    v9 = 32;
  }
  else {
    if (v11 == nullptr) {
      goto LABEL_17;
    }
    v9 = 40;
  }
  (*(void (**)(_QWORD*, __int64, __int64))(*v3 + v9))(v3, a2, a3);
LABEL_17:
  if (v12 == 1 && GameData_2241720 != 0) {
    TelopParts_17cc7d0(GameData_2241720,
                       "MID_Sys_InfoTelop_Cancel_MaterialCommand", 0, 0, 0, 0);
  }
  if (v13 == 1 && GameData_2241720 != 0) {
    TelopParts_17cc7d0(GameData_2241720,
                       "MID_Sys_InfoTelop_Cancel_LegionDispatch", 0, 0, 0, 0);
  }
}

void ProcGmapPhaseSeq_14c6e20()
{
  __int64 v0;
  __int64* v1;
  __int64* v2;
  __int64 v3;

  v0 = *(_QWORD*)(GameData_21c9700 + 8);
  v1 = *(__int64**)(v0 + 48);
  v2 = *(__int64**)(v0 + 56);
  while (v1 != v2) {
    v3 = *v1++;
    GameRoutine_1328d60_alt1(v3);
  }
}

__int64 ProcGmapPhaseSeq_14c6e70(__int64 result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 (**v6)();
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 (**v18)();
    void* v19;
    char gap16_[16];
    unsigned __int64* v20;
  } v18_;

  v1 = GameData_2130e70;
  v2 = game_GameModeData_instance_;
  v3 = *GameData_2130e70;
  if (game_GameModeData_instance_ == 0) {
    if (*(_BYTE*)(*GameData_2130e70 + 53) == 0 && *(_DWORD*)(v3 + 44) == 0) {
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212c7a0[0] + 16LL) + 129LL) = 0;
      goto LABEL_20;
    }
  LABEL_27:
    *(_DWORD*)(result + 152) = 1;
    *(_BYTE*)(v3 + 54) = 1;
    return result;
  }
  if (*(unsigned __int8*)(*GameData_2130e70 + 53) !=
          *(unsigned __int8*)(game_GameModeData_instance_ + 15) ||
      *(_DWORD*)(v3 + 44) != *(_DWORD*)(game_GameModeData_instance_ + 64)) {
    goto LABEL_27;
  }
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212c7a0[0] + 16LL) + 129LL) = 0;
    goto LABEL_15;
  }
  v4 = *(unsigned __int8*)(v3 + 56);
  v5 = result;
  v18_.v19 = &GameData_1adfa87;
  v6 = (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1adfa87);
  v7 = game_GameModeData_instance_;
  v18_.v18 = v6;
  if (game_GameModeData_instance_ != 0) {
    v8 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v18_.v18);
    v7 = v8 != 0 && *(_DWORD*)(v8 + 32) != 0;
  }
  result = v5;
  if (v4 != v7) {
    v3 = *v1;
    goto LABEL_27;
  }
  v2 = game_GameModeData_instance_;
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212c7a0[0] + 16LL) + 129LL) = 0;
  if (v2 == 0) {
  LABEL_20:
    v9 = result;
    if ((*(_BYTE*)(*v1 + 54) & 1) == 0) {
      goto LABEL_25;
    }
    goto LABEL_21;
  }
LABEL_15:
  v9 = result;
  if (*(_DWORD*)(v2 + 60) == 1) {
    if (*(_BYTE*)(*v1 + 54) != 0) {
      v18_.v18 = GameData_202dac8;
      v18_.v20 = (unsigned __int64*)&v18_.v18;
      v10 =
          game_gmap_TroopMgr_CountPlayerTroop_134e7b0_alt1((__int64)&v18_.v18);
      if (v18_.v20 == (unsigned __int64*)&v18_.v18) {
        v11 = 32;
      }
      else {
        if (v18_.v20 == nullptr) {
          goto LABEL_38;
        }
        v11 = 40;
      }
      (*(void (**)(__int64))(*v18_.v20 + v11))((__int64)v18_.v20);
    LABEL_38:
      if (v10 <= 0) {
        v14 = 8;
      }
      else {
        v14 = 2;
      }
      goto LABEL_47;
    }
    goto LABEL_25;
  }
  if (*(_BYTE*)(*v1 + 54) == 0) {
  LABEL_25:
    v14 = 15;
    goto LABEL_47;
  }
LABEL_21:
  v18_.v18 = GameData_202dac8;
  v18_.v20 = (unsigned __int64*)&v18_.v18;
  v12 = game_gmap_TroopMgr_CountPlayerTroop_134e7b0_alt1((__int64)&v18_.v18);
  if (v18_.v20 == (unsigned __int64*)&v18_.v18) {
    v13 = 32;
  }
  else {
    if (v18_.v20 == nullptr) {
      goto LABEL_31;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v18_.v20 + v13))((__int64)v18_.v20);
LABEL_31:
  if (v12 <= 0) {
    v18_.v18 = GameData_202da48;
    v18_.v20 = (unsigned __int64*)&v18_.v18;
    v15 = game_gmap_TroopMgr_CountPlayerTroop_134e7b0_alt1((__int64)&v18_.v18);
    if (v18_.v20 == (unsigned __int64*)&v18_.v18) {
      v16 = 32;
    }
    else {
      if (v18_.v20 == nullptr) {
        goto LABEL_43;
      }
      v16 = 40;
    }
    (*(void (**)(__int64))(*v18_.v20 + v16))((__int64)v18_.v20);
  LABEL_43:
    v14 = 2;
    if (v15 >= 1) {
      if ((GmapSituation_14dc4f0_alt1() & 1) != 0) {
        v14 = 2;
      }
      else {
        v14 = 8;
      }
    }
    goto LABEL_47;
  }
  v14 = 2;
LABEL_47:
  v18_.v19 = &GameData_1a86fa8;
  v18_.v18 =
      (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1a86fa8);
  if (game_GameModeData_instance_ != 0) {
    v17 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v18_.v18);
    if (v17 != 0 && *(_DWORD*)(v17 + 32) != 0) {
      v18_.v19 = &GameData_1a86fa8;
      v18_.v18 =
          (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1a86fa8);
      game_VariableManager_SetFlag_alt1((__int64)&v18_.v18, 0);
    }
  }
  if (v14 != 8 ||
      ((result = game_gmap_ProcGmapPhaseSeq_TryConfirmTurnEnd(v9)) & 1) == 0) {
    result = game_HashString_alt1((__int64)&GameData_1ad8027);
    *(_DWORD*)(v9 + 152) = v14;
  }
  return result;
}

__int64 ProcGmapPhaseSeq_14c7300(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  int v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  char v18;
  bool v19;
  struct {
    __int64 v20;
    void* v21;
  } v20_;

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v1 = result;
    v20_.v21 = &GameData_1acc8c0;
    v20_.v20 = game_HashString_alt1((__int64)&GameData_1acc8c0);
    if (game_GameModeData_instance_ == 0 ||
        (result = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)&v20_.v20)) == 0 ||
        *(_DWORD*)(result + 32) == 0) {
      v2 = *(_QWORD*)(*GameData_212d728[0] + 8);
      LayoutAccessor_155e830_alt1(*(_QWORD*)(v2 + 16), 0);
      if (game_hub_ProgressEventView_instance_ != 0) {
        GameRoutine_17b8f40_alt1(game_hub_ProgressEventView_instance_, 1);
      }
      v3 = game_gameui_Footer_instance_;
      v4 = *(_DWORD*)(v2 + 5856) & 0xFFFEFFFF;
      *(_DWORD*)(v2 + 5856) = v4;
      if (v3 != 0) {
        LayoutAccessor_1567000_alt1(v3, 0);
        v4 = *(_DWORD*)(v2 + 5856);
      }
      *(_DWORD*)(v2 + 5856) = v4 & 0xFFFDFFFF;
      v5 = *(_QWORD*)(GameData_21c96e8 + 8);
      v6 = *(_DWORD*)(v5 + 56);
      v7 = *(__int64**)(v5 + 8);
      v8 = *(__int64**)(v5 + 16);
      if (v6 < 0) {
        if (v7 == v8) {
        LABEL_16:
          v9 = 0;
          v11 = (*(_QWORD*)0x60LL);
          if ((*(_QWORD*)0x60LL) != 0) {
            goto LABEL_26;
          }
          goto LABEL_17;
        }
        while (1) {
          v9 = *v7;
          if (*(_QWORD*)(*v7 + 96) == 0 && *(_QWORD*)(v9 + 552) == 0) {
            break;
          }
          if (++v7 == v8) {
            goto LABEL_16;
          }
        }
      }
      else if (v7 == v8) {
        v9 = 0;
      }
      else {
        while (1) {
          v10 = *v7++;
          v9 = v10;
          if (*(_DWORD*)(v10 + 84) == v6) {
            break;
          }
          if (v7 == v8) {
            goto LABEL_16;
          }
        }
      }
      v11 = *(_QWORD*)(v9 + 96);
      if (v11 != 0) {
      LABEL_26:
        v13 = *(unsigned __int8*)(v11 + 32);
        if (v13 >= 5) {
          LOBYTE(v12) = 3;
        }
        else {
          v12 = 0x101030103uLL >> (8 * (unsigned __int8)v13);
        }
      LABEL_29:
        if (game_GameModeData_instance_ != 0) {
          if (*(unsigned __int8*)(GameData_22416c0 + 53) ==
                  *(unsigned __int8*)(game_GameModeData_instance_ + 15) &&
              *(_DWORD*)(GameData_22416c0 + 44) ==
                  *(_DWORD*)(game_GameModeData_instance_ + 64)) {
            if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
              v14 = *(unsigned __int8*)(GameData_22416c0 + 56);
              v20_.v21 = &GameData_1adfa87;
              v15 = game_HashString_alt1((__int64)&GameData_1adfa87);
              v16 = game_GameModeData_instance_;
              v20_.v20 = v15;
              if (game_GameModeData_instance_ != 0) {
                v17 = game_GameVariableTable_Find_alt1(
                    *(_QWORD**)(game_GameModeData_instance_ + 48),
                    (unsigned __int64*)&v20_.v20);
                v16 = v17 != 0 && *(_DWORD*)(v17 + 32) != 0;
              }
              v19 = v14 == v16;
              goto LABEL_42;
            }
            v18 = 0;
          LABEL_45:
            TelopBmapPhase_137c090(v1, v12, v18);
            snd_Fade_Fade_10c830_alt1((__int64)&v20_.v20, 0x0.0p+0f);
            snd_play_ff2d0_alt1((__int64)"VIB_PhaseChange",
                                (__int64)"VIB_PhaseChange", (__int64)&v20_.v20,
                                0, 0x10001u, 0, 0x0.0p+0f,
                                0x1.0000000000000p+0f);
            return snd_Fade_Destroy_Fade_alt1(&v20_.v20);
          }
        }
        else if (*(_BYTE*)(GameData_22416c0 + 53) == 0) {
          v19 = *(_DWORD*)(GameData_22416c0 + 44) == 0;
        LABEL_42:
          v18 = !v19;
          goto LABEL_45;
        }
        v18 = 1;
        goto LABEL_45;
      }
    LABEL_17:
      if (*(_QWORD*)(v9 + 552) != 0) {
        LOBYTE(v12) = 3;
      }
      else {
        LOBYTE(v12) = 0;
      }
      goto LABEL_29;
    }
  }
  return result;
}

__int64 ProcGmapPhaseSeq_14c75b0()
{
  __int64 v0;
  __int64 result;

  v0 = *(_QWORD*)(*GameData_212d728[0] + 8);
  LayoutAccessor_155e830(*(_QWORD*)(v0 + 16), 1);
  result = game_hub_ProgressEventView_instance_;
  if (game_hub_ProgressEventView_instance_ != 0) {
    result = GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
  }
  *(_DWORD*)(v0 + 5856) |= 0x10000u;
  return result;
}

void ProcGmapPhaseSeq_14c7610()
{
  __int64 v0;
  __int64 v1;
  int v2;
  __int64* v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  struct {
    __int64 v10;
    void* v11;
  } v10_;

  if (game_gmap_GmapClock_instance_ == 0) {
    v0 = game_GameModeData_instance_;
  LABEL_9:
    if (v0 == 0) {
      return;
    }
  LABEL_10:
    if (*(_DWORD*)(v0 + 60) != 3) {
      return;
    }
    v3 = GameData_2130e70;
    v10_.v11 = &GameData_1adfa87;
    v4 = *(unsigned __int8*)(*GameData_2130e70 + 56);
    v10_.v10 = game_HashString_alt1((__int64)&GameData_1adfa87);
    v5 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v6 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v10_.v10);
      if (v6 == 0) {
        if (v4 == 0) {
          return;
        }
        goto LABEL_15;
      }
      v5 = *(_DWORD*)(v6 + 32) != 0;
    }
    if (v4 == v5) {
      return;
    }
  LABEL_15:
    v10_.v11 = &GameData_1adfa87;
    v7 = game_HashString_alt1((__int64)&GameData_1adfa87);
    v8 = game_GameModeData_instance_;
    v10_.v10 = v7;
    if (game_GameModeData_instance_ != 0) {
      v9 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v10_.v10);
      v8 = v9 != 0 && *(_DWORD*)(v9 + 32) != 0;
    }
    *(_BYTE*)(*v3 + 56) = v8;
    return;
  }
  v0 = game_GameModeData_instance_;
  if (*(__int16*)(game_gmap_GmapClock_instance_ + 22) *
          *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
          *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
      0) {
    goto LABEL_9;
  }
  v1 = *GameData_2130e70;
  if (game_GameModeData_instance_ != 0) {
    v2 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    if (*(unsigned __int8*)(*GameData_2130e70 + 53) != v2 ||
        *(_DWORD*)(v1 + 44) != *(_DWORD*)(game_GameModeData_instance_ + 64)) {
      *(_BYTE*)(v1 + 53) = v2;
      *(_DWORD*)(v1 + 44) = *(_DWORD*)(v0 + 64);
      if (*(_DWORD*)(v0 + 60) == 3) {
        *(_BYTE*)(v1 + 55) = 1;
      }
    }
    goto LABEL_10;
  }
  if (*(_BYTE*)(*GameData_2130e70 + 53) != 0 || *(_DWORD*)(v1 + 44) != 0) {
    *(_BYTE*)(v1 + 53) = 0;
    *(_DWORD*)(v1 + 44) = 0;
  }
}

__int64 ProcGmapPhaseSeq_14c7b50(__int64 result)
{
  __int64 v1;
  _BYTE* v2;
  unsigned __int8 v3;
  __int16 v4;
  unsigned __int8* v5;
  unsigned int v6;
  bool v7;
  int v8;
  char v10;

  v1 = result;
  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 1) {
    v5 = *(unsigned __int8**)(result + 16);
    if (v5 != nullptr) {
      v6 = *v5;
      v7 = v6 > 0x10;
      v8 = (1 << v6) & 0x1CE00;
      if (!v7 && v8 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    v4 = 8;
    goto LABEL_18;
  }
  GameRoutine_887920(&v10, &GameData_1aeef0e);
  result = GameRoutine_162aea0(v1, &v10);
  if (result == 0) {
    if (game_gmap_GmapClock_instance_ == 0 ||
        *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
            0 ||
        (GameRoutine_887920(&v10, &GameData_1af6c5c),
         (result = GameRoutine_162aea0(v1, &v10)) == 0)) {
      v2 = *(_BYTE**)(v1 + 16);
      if (v2 != nullptr) {
        v3 = *v2 - 9;
        if (v3 <= 7u && ((0xE7u >> v3) & 1) != 0) {
          v4 = 128;
        LABEL_18:
          *(_WORD*)(v1 + 136) |= v4;
        }
      }
    }
  }
  return result;
}

_QWORD* game_gmap_ProcGmapPhaseSeq_CheckSpotAttachmentAuto(_QWORD* result,
                                                           __int64 a2,
                                                           __int64 a3)
{
  _QWORD* v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int8* v9;
  unsigned int v10;
  bool v11;
  int v12;
  __int64 v14;
  unsigned __int8* v15;
  unsigned int v16;
  int v17;
  _QWORD v19[4];
  _QWORD* v20;
  char v21;
  __int64 v22;

  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
    v3 = result;
    v21 = 0;
    v19[0] = GameData_2045d00;
    v19[1] = result;
    result = v19;
    v19[2] = &v21;
    v20 = v19;
    v4 = *(_QWORD*)(GameData_21c9700 + 8);
    v5 = *(__int64**)(v4 + 48);
    v6 = *(__int64**)(v4 + 56);
    if (v5 == v6) {
      goto LABEL_22;
    }
    do {
      v7 = *v5;
      v8 = *(_QWORD*)(*v5 + 280);
      if (v8 != 0 &&
          ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v8 + 24LL))(v8) != 1 ||
           ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v7 + 280) + 112LL))(
                *(_QWORD*)(v7 + 280)) &
            1) == 0) &&
          *(_QWORD*)(v7 + 280) != 0) {
        v22 = v7;
        if (v20 == nullptr) {
          GameRoutine_60a310(0);
        }
        (*(void (**)(_QWORD*, __int64*))(*v20 + 48LL))(v20, &v22);
      }
      ++v5;
    } while (v5 != v6);
    result = v20;
    if (v20 == v19) {
    LABEL_22:
      v14 = 32;
    }
    else {
      if (v20 == nullptr) {
        goto LABEL_24;
      }
      v14 = 40;
    }
    result = (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64))(
        *result + v14))(result, a2, a3);
  LABEL_24:
    if ((v21 & 1) == 0) {
      v15 = (unsigned __int8*)v3[2];
      if (v15 != nullptr) {
        v16 = *v15;
        v11 = v16 > 0x10;
        v17 = (1 << v16) & 0x1CE00;
        if (!v11 && v17 != 0) {
          *((_WORD*)v3 + 68) |= 0x80u;
        }
      }
      *((_WORD*)v3 + 68) |= 8u;
    }
    return result;
  }
  v9 = (unsigned __int8*)result[2];
  if (v9 != nullptr) {
    v10 = *v9;
    v11 = v10 > 0x10;
    v12 = (1 << v10) & 0x1CE00;
    if (!v11 && v12 != 0) {
      *((_WORD*)result + 68) |= 0x80u;
    }
  }
  *((_WORD*)result + 68) |= 8u;
  return result;
}

__int64 ProcGmapPhaseSeq_14c7e30(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64 result;

  v1 = GameData_212d728[0];
  v2 = *GameData_212d728[0];
  *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5835LL) = 1;
  *(_BYTE*)(*(_QWORD*)(v2 + 8) + 5837LL) = 1;
  GameRoutine_17bcf90(a1);
  GameRoutine_175bde0(*(_QWORD*)(*v1 + 8) + 5800LL);
  result = GameRoutine_175b880(*(_QWORD*)(*v1 + 8) + 5800LL);
  *(_DWORD*)(*(_QWORD*)(*v1 + 8) + 5856LL) |= 0x10u;
  return result;
}

__int64 ProcGmapPhaseSeq_14c7eb0(__int64 result)
{
  if (*(_BYTE*)(result + 213) == 1) {
    return GameRoutine_12ddb80(*(_QWORD*)GameData_212c6c0[0], result);
  }
  return result;
}

void game_gmap_ProcGmapPhaseSeq_FreeCursorTick(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int8* v6;
  unsigned int v7;
  bool v8;
  int v9;
  unsigned int* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  unsigned int v16;
  int v17;
  __int64 v18;
  int v19;
  char v20;
  float32x4_t* v21;
  __int64 v22;
  __int64 v23;
  float32x4_t* v24;
  unsigned int* v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  char* v30;
  char* v31;
  unsigned __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  struct {
    __int64 (**v54)();
    _QWORD* v55;
    __int64* v56;
    char gap40_[8];
    unsigned __int64* v57;
  } v54_;
  struct {
    char* v58;
    _QWORD* v59;
    unsigned __int64 v60;
  } v58_;
  unsigned int* v61;

  v2 = GameData_212d708;
  v3 = *(_QWORD*)(*GameData_212d708 + 16);
  *(_BYTE*)(v3 + 170) = 0;
  game_gmap_1319f40(v3);
  v4 = *(_QWORD*)(*v2 + 16);
  if ((*(_BYTE*)(v4 + 169) & 1) == 0) {
    v5 = **(_QWORD**)(*(_QWORD*)(GameData_21f1650 + 8) + 8LL);
    (*(void (**)(__int64))(*(_QWORD*)v5 + 40LL))(v5);
  }
  *(_BYTE*)(v4 + 169) = 1;
  if (*(_DWORD*)(GameData_21f1618 + 152) != 0) {
    *(_DWORD*)(a1 + 152) = 16;
  LABEL_6:
    v6 = *(unsigned __int8**)(a1 + 16);
    if (v6 != nullptr) {
      v7 = *v6;
      v8 = v7 > 0x10;
      v9 = (1 << v7) & 0x1CE00;
      if (!v8 && v9 != 0) {
        goto LABEL_11;
      }
    }
    return;
  }
  if (*(_DWORD*)(a1 + 152) != 0) {
    goto LABEL_6;
  }
  if (*(_BYTE*)(game_g_game_setting + 807) == 1) {
    if ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0) {
      goto LABEL_34;
    }
    if (*(_BYTE*)(game_g_game_setting + 940) == 1 &&
        (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
        (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0) {
      goto LABEL_28;
    }
  }
  if ((*(_BYTE*)(game_g_game_setting + 903) != 1 ||
       (*(_BYTE*)(game_g_game_setting + 900) & 1) == 0 &&
           (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
            (*(_BYTE*)(game_g_game_setting + 901) & 1) == 0 ||
            (*(_BYTE*)(game_g_game_setting + 902) & 1) == 0)) &&
      (*(_BYTE*)(game_g_game_setting + 952) & 1) != 0) {
    goto LABEL_43;
  }
  if (*(_BYTE*)(game_g_game_setting + 807) == 0) {
    if (*(_BYTE*)(game_g_game_setting + 903) == 0) {
      goto LABEL_73;
    }
  LABEL_32:
    if ((*(_BYTE*)(game_g_game_setting + 900) & 1) == 0 &&
        (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
         (*(_BYTE*)(game_g_game_setting + 901) & 1) == 0 ||
         *(_BYTE*)(game_g_game_setting + 902) != 1)) {
      goto LABEL_73;
    }
    if (*(_BYTE*)(game_g_game_setting + 807) == 0) {
      goto LABEL_40;
    }
    goto LABEL_34;
  }
  if ((*(_BYTE*)(game_g_game_setting + 804) & 1) == 0) {
  LABEL_28:
    if (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
        (*(_BYTE*)(game_g_game_setting + 805) & 1) == 0 ||
        (*(_BYTE*)(game_g_game_setting + 806) & 1) == 0) {
      if ((*(_BYTE*)(game_g_game_setting + 903) & 1) == 0) {
        goto LABEL_73;
      }
      goto LABEL_32;
    }
  }
LABEL_34:
  if ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
      *(_BYTE*)(game_g_game_setting + 940) == 1 &&
          *(_BYTE*)(game_g_game_setting + 805) == 1 &&
          (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0) {
    if ((*(_BYTE*)(game_g_game_setting + 764) & 1) == 0) {
      goto LABEL_73;
    }
    goto LABEL_43;
  }
LABEL_40:
  if (*(_BYTE*)(game_g_game_setting + 903) != 1 ||
      (*(_BYTE*)(game_g_game_setting + 900) & 1) == 0 &&
          (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
           *(_BYTE*)(game_g_game_setting + 901) != 1 ||
           *(_BYTE*)(game_g_game_setting + 902) != 1) ||
      (*(_BYTE*)(game_g_game_setting + 860) & 1) == 0) {
  LABEL_73:
    if ((GameRoutine_8229c0() & 1) != 0 &&
        (*(_BYTE*)(game_g_game_setting + 952) & 4) != 0) {
      v17 = 10;
      goto LABEL_125;
    }
    if (*(_BYTE*)(game_g_game_setting + 807) == 1) {
      if ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0) {
        goto LABEL_96;
      }
      if (*(_BYTE*)(game_g_game_setting + 940) == 1 &&
          (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
          (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0) {
        goto LABEL_90;
      }
    }
    if ((*(_BYTE*)(game_g_game_setting + 903) != 1 ||
         (*(_BYTE*)(game_g_game_setting + 900) & 1) == 0 &&
             (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
              (*(_BYTE*)(game_g_game_setting + 901) & 1) == 0 ||
              (*(_BYTE*)(game_g_game_setting + 902) & 1) == 0)) &&
        (*(_BYTE*)(game_g_game_setting + 952) & 2) != 0) {
      goto LABEL_107;
    }
    if (*(_BYTE*)(game_g_game_setting + 807) == 0) {
      if (*(_BYTE*)(game_g_game_setting + 903) == 0) {
        goto LABEL_120;
      }
      goto LABEL_95;
    }
    if ((*(_BYTE*)(game_g_game_setting + 804) & 1) == 0) {
    LABEL_90:
      if (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
          (*(_BYTE*)(game_g_game_setting + 805) & 1) == 0 ||
          (*(_BYTE*)(game_g_game_setting + 806) & 1) == 0) {
        if ((*(_BYTE*)(game_g_game_setting + 903) & 1) == 0) {
        LABEL_116:
          if ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
              *(_BYTE*)(game_g_game_setting + 940) == 1 &&
                  (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
                  (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0) {
            goto LABEL_122;
          }
        LABEL_120:
          if (*(_BYTE*)(game_g_game_setting + 903) == 1) {
            if ((*(_BYTE*)(game_g_game_setting + 900) & 1) != 0) {
            LABEL_122:
              v19 = *(_DWORD*)(game_g_game_setting + 952);
            LABEL_123:
              if ((v19 & 2) != 0) {
              LABEL_124:
                v17 = 9;
                goto LABEL_125;
              }
            LABEL_131:
              if ((v19 & 0x3000) != 0) {
                if ((int)CorpsManager_972680() > 0) {
                  v20 = (*(_DWORD*)(game_g_game_setting + 952) & 0x2000) != 0;
                  v21 = (float32x4_t*)game_gmap_SpotMgr_GetAroundSpot(v20);
                  if (v21 != nullptr) {
                    v22 = *v2;
                    v23 = *(_QWORD*)(*v2 + 16);
                    if (v21 != *(float32x4_t**)(v23 + 96)) {
                      v24 = v21;
                      *(_BYTE*)(v23 + 176) = 1;
                      GameRoutine_1317f10(*(float32x4_t**)(v22 + 16), v21 + 2);
                      if (v24 ==
                          (float32x4_t*)game_gmap_SpotMgr_GetAroundSpot(v20)) {
                        GameRoutine_1530970();
                      }
                      else {
                        GameRoutine_1530910();
                      }
                    }
                  }
                  return;
                }
              LABEL_137:
                game_gmap_1318260();
                return;
              }
              if ((v19 & 0x800) != 0) {
                v17 = 12;
                goto LABEL_125;
              }
              if ((v19 & 0x80) != 0) {
                if ((GameRoutine_1551ac0(1) & 1) == 0) {
                  goto LABEL_124;
                }
                v19 = *(_DWORD*)(game_g_game_setting + 952);
              }
              if ((v19 & 0x10) == 0) {
                if ((v19 & 0x400) != 0) {
                  if (game_gmap_GmapClock_instance_ == 0) {
                    return;
                  }
                  if (*(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                          *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                          *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
                      0) {
                    return;
                  }
                  if (*(_BYTE*)(GameData_22416c0 + 59) != 1) {
                    return;
                  }
                  v43 = *(_QWORD*)(*(_QWORD*)(*v2 + 16) + 96LL);
                  if (v43 == 0 ||
                      (game_gmap_GmapShopGuideTopMenu_HasShopGuide(v43) & 1) ==
                          0) {
                    return;
                  }
                  v17 = 11;
                }
                else {
                  if (!ProcGmapPhaseSeq_14cbf30()) {
                    return;
                  }
                  v17 = 13;
                }
              LABEL_125:
                *(_DWORD*)(a1 + 152) = v17;
                return;
              }
              v29 = *(_QWORD*)(*(_QWORD*)(*v2 + 16) + 96LL);
              if (v29 == 0) {
                return;
              }
              v31 = *(char**)(GameData_2241428 + 8);
              v30 = *(char**)(GameData_2241428 + 16);
              if (v31 != v30) {
                v32 = v30 - v31 - 8;
                if ((~(_BYTE)v32 & 0x18) != 0) {
                  v33 = ((unsigned __int8)((unsigned int)v32 >> 3) + 1) & 3;
                  while (*(_QWORD*)v31 != v29) {
                    v31 += 8;
                    if (--v33 == 0) {
                      goto LABEL_159;
                    }
                  }
                }
                else {
                LABEL_159:
                  if (v32 < 0x18) {
                  LABEL_215:
                    game_gmap_1520a70(v29);
                    return;
                  }
                  v31 += 16;
                  while (1) {
                    if (*((_QWORD*)v31 - 2) == v29) {
                      v31 -= 16;
                      goto LABEL_213;
                    }
                    if (*((_QWORD*)v31 - 1) == v29) {
                      v31 -= 8;
                      goto LABEL_213;
                    }
                    if (*(_QWORD*)v31 == v29) {
                      goto LABEL_213;
                    }
                    if (*((_QWORD*)v31 + 1) == v29) {
                      break;
                    }
                    v34 = v31 + 16;
                    v31 += 32;
                    if (v34 == v30) {
                      goto LABEL_215;
                    }
                  }
                  v31 += 8;
                }
              }
            LABEL_213:
              if (v31 != v30) {
                game_gmap_1520ea0(v29);
                return;
              }
              goto LABEL_215;
            }
            if (*(_BYTE*)(game_g_game_setting + 940) == 1 &&
                (*(_BYTE*)(game_g_game_setting + 901) & 1) != 0) {
              v19 = *(_DWORD*)(game_g_game_setting + 952);
              if ((*(_BYTE*)(game_g_game_setting + 902) & 1) == 0) {
                goto LABEL_131;
              }
              goto LABEL_123;
            }
          }
          v19 = *(_DWORD*)(game_g_game_setting + 952);
          goto LABEL_131;
        }
      LABEL_95:
        if ((*(_BYTE*)(game_g_game_setting + 900) & 1) == 0 &&
            (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
             (*(_BYTE*)(game_g_game_setting + 901) & 1) == 0 ||
             *(_BYTE*)(game_g_game_setting + 902) != 1)) {
        LABEL_115:
          if (*(_BYTE*)(game_g_game_setting + 807) == 0) {
            goto LABEL_120;
          }
          goto LABEL_116;
        }
      }
    }
  LABEL_96:
    if (GameData_2258178 == 0) {
      goto LABEL_115;
    }
    if (*(_BYTE*)(game_g_game_setting + 807) != 0 &&
        ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
         *(_BYTE*)(game_g_game_setting + 940) == 1 &&
             *(_BYTE*)(game_g_game_setting + 805) == 1 &&
             (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0)) {
      v18 = 448;
    }
    else {
      if (*(_BYTE*)(game_g_game_setting + 903) != 1 ||
          (*(_BYTE*)(game_g_game_setting + 900) & 1) == 0 &&
              (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
               *(_BYTE*)(game_g_game_setting + 901) != 1 ||
               *(_BYTE*)(game_g_game_setting + 902) != 1)) {
        goto LABEL_115;
      }
      v18 = 508;
    }
    if ((*(_BYTE*)(GameData_2258178 + v18) & 1) == 0) {
      goto LABEL_115;
    }
  LABEL_107:
    game_HashString_alt1((__int64)&GameData_1ad8027);
    goto LABEL_137;
  }
LABEL_43:
  v11 = *(unsigned int**)(*(_QWORD*)(*v2 + 16) + 96LL);
  v61 = v11;
  if (v11 == nullptr) {
    goto LABEL_51;
  }
  v54_.v55 = &GameData_1ade186;
  v54_.v54 =
      (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1ade186);
  if (game_GameModeData_instance_ != 0) {
    v12 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v54_.v54);
    if (v12 != 0 && *(int*)(v12 + 32) > 0) {
      v58_.v59 = nullptr;
      v58_.v60 = 0;
      v58_.v58 = nullptr;
      v54_.v54 = GameData_2045d80;
      v54_.v55 = &v61;
      v54_.v57 = (unsigned __int64*)&v54_.v54;
      v54_.v56 = (__int64*)&v58_.v58;
      TroopMgr_134b560(*(_QWORD*)(GameData_21c96e8 + 8), (__int64)&v54_.v54);
      if (v54_.v57 == (unsigned __int64*)&v54_.v54) {
        v13 = 32;
      }
      else {
        if (v54_.v57 == nullptr) {
        LABEL_149:
          v25 = v61;
          if (v25 == game_gmap_SpotMgr_GetCurrentSpot_alt1()) {
            v27 = TroopMgr_1345d00();
            v28 = v58_.v59;
            if ((unsigned __int64)v58_.v59 >= v58_.v60) {
              v35 = (__int64)v58_.v58;
              v36 = (char*)((char*)v58_.v59 - v58_.v58);
              v37 = ((char*)v58_.v59 - v58_.v58) >> 3;
              v38 = v37 + 1;
              if ((unsigned __int64)(v37 + 1) >> 61 != 0) {
                GameRoutine_888610_alt1();
              }
              v39 = v58_.v60 - (_QWORD)v58_.v58;
              if ((__int64)(v58_.v60 - (_QWORD)v58_.v58) >> 2 > v38) {
                v38 = v39 >> 2;
              }
              if ((unsigned __int64)v39 >= 0x7FFFFFFFFFFFFFF8LL) {
                v40 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v40 = v38;
              }
              if (v40 != 0) {
                if (v40 >> 61 != 0) {
                  GameRoutine_60a210_alt1();
                }
                v41 = v27;
                v42 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v40, 16, 0);
                v27 = v41;
              }
              else {
                v42 = 0;
              }
              v44 = v42 + 8 * v40;
              v45 = (__int64)&v36[v42 + -8 * v37];
              *(_QWORD*)&v36[v42] = v27;
              v26 = (__int64)&v36[v42 + 8];
              memcpy(v45, v35, v36);
              v58_.v58 = (char*)v45;
              v58_.v59 = (_QWORD*)v26;
              v58_.v60 = v44;
              if (v35 != 0) {
                v46 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v46 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v46);
              }
            }
            else {
              *v58_.v59 = v27;
              v26 = (__int64)(v28 + 1);
            }
            v58_.v59 = (_QWORD*)v26;
          }
          else {
            v26 = (__int64)v58_.v59;
          }
          v53 = a1;
          if (v26 - (_QWORD)v58_.v58 == 8) {
            v47 = *(_QWORD*)(v26 - 8);
            if ((*(_QWORD*)(v47 + 96) | *(_QWORD*)(v47 + 552)) == 0 &&
                game_GameModeData_instance_ != 0 &&
                *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
                (*(_DWORD*)(v47 + 84) & 0x80000000) != 0) {
              GameRoutine_1551c40(0);
              v47 = *(v58_.v59 - 1);
            }
            v48 = Troop_133e4e0(v47);
            ProcGmapPhaseSeq_14cbc80(&v53, (__int64)v48);
            goto LABEL_206;
          }
          if ((unsigned __int64)(v26 - (_QWORD)v58_.v58) >= 9) {
            GameRoutine_1551c40(0);
            v54_.v54 = GameData_2045e00;
            v54_.v55 = (_QWORD*)a1;
            v54_.v57 = (unsigned __int64*)&v54_.v54;
            GameRoutine_164e5c0(a1, (__int64*)&v58_.v58,
                                "MID_Gmap_CoopsSelect_Message",
                                (__int64)&v54_.v54);
            if (v54_.v57 == (unsigned __int64*)&v54_.v54) {
              v50 = 32;
            }
            else {
              if (v54_.v57 == nullptr) {
                goto LABEL_206;
              }
              v50 = 40;
            }
            (*(void (**)(__int64))(*v54_.v57 + v50))((__int64)v54_.v57);
          LABEL_206:
            if (v58_.v58 != nullptr) {
              v58_.v59 = v58_.v58;
              v52 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v52 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v52);
            }
            return;
          }
          if (v58_.v58 != nullptr) {
            v58_.v59 = v58_.v58;
            v51 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v51 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v51);
          }
        LABEL_51:
          if (*(_BYTE*)(game_g_game_setting + 807) == 1 &&
                  ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
                   *(_BYTE*)(game_g_game_setting + 940) == 1 &&
                       (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
                       (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0) ||
              *(_BYTE*)(game_g_game_setting + 903) == 1 &&
                  ((*(_BYTE*)(game_g_game_setting + 900) & 1) != 0 ||
                   *(_BYTE*)(game_g_game_setting + 940) == 1 &&
                       (*(_BYTE*)(game_g_game_setting + 901) & 1) != 0 &&
                       (*(_BYTE*)(game_g_game_setting + 902) & 1) != 0)) {
            return;
          }
          goto LABEL_124;
        }
        v13 = 40;
      }
      (*(void (**)(__int64))(*v54_.v57 + v13))((__int64)v54_.v57);
      goto LABEL_149;
    }
  }
  if (v11 != TroopMgr_1346380()) {
    goto LABEL_51;
  }
  v14 = TroopMgr_1345b40();
  UnitActor_81a540(v14 + 112, 2017201876, (__int64)GameData_212ceb8);
  *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5844LL) = 1;
  *(_DWORD*)(a1 + 152) = 3;
  GameRoutine_15307f0();
  v15 = *(unsigned __int8**)(a1 + 16);
  if (v15 != nullptr) {
    v16 = *v15;
    if (v16 <= 0x10 && ((1 << v16) & 0x1CE00) != 0) {
    LABEL_11:
      *(_WORD*)(a1 + 136) |= 0x80u;
    }
  }
}

__int64 ProcGmapPhaseSeq_14c8ac0()
{
  __int64 v0;
  __int64 result;

  v0 = *(_QWORD*)(GameData_21f1668 + 8);
  result = game_gameui_Footer_instance_;
  if (game_gameui_Footer_instance_ != 0) {
    result = LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
  }
  *(_DWORD*)(v0 + 5856) &= ~0x20000u;
  return result;
}

__int64 ProcGmapPhaseSeq_14c8ba0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64** v4;
  __int64** v5;
  __int64** v6;
  __int64* v7;
  __int64* v8;
  __int64** v9;
  int v10;
  bool v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  char v18;
  char* v19;
  char* v20;
  __int64 v21;
  void* v22;
  unsigned __int8* v23;
  unsigned int v24;
  bool v25;
  int v26;
  __int16 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  void* v36;
  void* v37;
  void* v38;
  __int64 v39;
  unsigned __int8* v40;
  unsigned int v41;
  __int64 v42;
  char* v43;
  __int64 v44;
  void* v45;

  v1 = result;
  if (game_gmap_GmapClock_instance_ == 0 ||
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
          0) {
    result = GmapSituation_14dbfe0();
    if ((result & 1) == 0) {
    LABEL_39:
      v23 = *(unsigned __int8**)(v1 + 16);
      if (v23 != nullptr) {
        v24 = *v23;
        v25 = v24 > 0x10;
        v26 = (1 << v24) & 0x1CE00;
        if (!v25 && v26 != 0) {
          *(_WORD*)(v1 + 136) |= 0x80u;
        }
      }
      v28 = *(_WORD*)(v1 + 136) | 8;
      goto LABEL_46;
    }
  }
  v2 = *(_QWORD*)(GameData_21c96e8 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64***)(v2 + 8);
  v5 = *(__int64***)(v2 + 16);
  if ((v3 & 0x80000000) == 0) {
    if (v4 != v5) {
      v6 = v4;
      do {
        v8 = *v6++;
        v7 = v8;
        if (*((_DWORD*)v8 + 21) == v3) {
          goto LABEL_17;
        }
      } while (v6 != v5);
    }
  LABEL_16:
    v7 = nullptr;
    goto LABEL_17;
  }
  if (v4 == v5) {
    goto LABEL_16;
  }
  v9 = v4;
  while (1) {
    v7 = *v9;
    if ((*v9)[12] == 0 && v7[69] == 0) {
      break;
    }
    if (++v9 == v5) {
      goto LABEL_16;
    }
  }
LABEL_17:
  v10 = *((_DWORD*)v7 + 135);
  v11 = __OFSUB__(v10, 1);
  v12 = (unsigned int)(v10 - 1);
  if (((v12 & 0x80000000) != 0LL) == v11) {
    v13 = v7[3];
    v14 = v7[4] - v13;
    v15 = (__int64*)(v13 + 8LL * (unsigned int)v12);
    if (v12 < v14 >> 3) {
      v7 = v15;
    }
  }
  v16 = *v7;
  if (*v7 == 0) {
    goto LABEL_39;
  }
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
    while (v4 != v5) {
      if (**v4 == v16) {
        v21 = (*v4)[12];
        if (v21 != 0 && *(_BYTE*)(v21 + 32) == 2) {
          if (*(_QWORD*)(v21 + 80) != 0) {
            GameRoutine_887920(&v44, &GameData_1abfa08);
            result = GameRoutine_162aea0(v1, &v44);
            if (result != 0) {
              return result;
            }
          }
          break;
        }
      }
      ++v4;
    }
    result = Impl_13261c0(v16);
    if ((unsigned __int8)result <= 2u) {
      if ((_BYTE)result != 0) {
        if ((unsigned __int8)result == 1) {
          v22 = &GameData_1aeef24;
        }
        else {
          if ((unsigned __int8)result != 2) {
            goto LABEL_90;
          }
          result = GameRoutine_adfc40(*(_QWORD*)(v16 + 120));
          if ((result & 1) == 0) {
            goto LABEL_90;
          }
          v22 = &GameData_1aeb38e;
        }
      }
      else {
        result = GameRoutine_adfc40(*(_QWORD*)(v16 + 120));
        if ((result & 1) == 0) {
          goto LABEL_90;
        }
        v22 = &GameData_1a86f85;
      }
    }
    else if ((unsigned __int8)result > 4u) {
      if ((unsigned __int8)result == 9) {
        result = GameRoutine_adfc40(*(_QWORD*)(v16 + 120));
        if ((result & 1) == 0) {
          goto LABEL_90;
        }
        v22 = &GameData_1ae38ca;
      }
      else {
        if ((unsigned __int8)result != 5) {
          goto LABEL_90;
        }
        result = game_821090(4);
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_90;
        }
        result = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), result);
        if (result == 0 || *(int*)(result + 32) < 1) {
          goto LABEL_90;
        }
        v22 = &GameData_1ab7f34;
      }
    }
    else if ((unsigned __int8)result == 3) {
      v39 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        if (*(_BYTE*)(game_GameModeData_instance_ + 15) != 1) {
          goto LABEL_84;
        }
        v45 = &GameData_1a8ad12;
        result = game_HashString(&GameData_1a8ad12);
        v44 = result;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_90;
        }
        result = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), &v44);
        if (result == 0 || *(_DWORD*)(result + 32) == 0) {
          goto LABEL_90;
        }
        v39 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
        LABEL_84:
          if (*(_BYTE*)(v39 + 15) == 1) {
            goto LABEL_90;
          }
        }
      }
      v22 = &GameData_1ad4494;
    }
    else {
      if ((unsigned __int8)result != 4) {
        goto LABEL_90;
      }
      v22 = &GameData_1aadb5b;
    }
    GameRoutine_887920(&v44, v22);
    result = GameRoutine_162aea0(v1, &v44);
    if (result != 0) {
      return result;
    }
  LABEL_90:
    if (*(_BYTE*)(v16 + 116) == 1) {
      GameRoutine_887920(&v44, &GameData_1abd4a3);
      result = GameRoutine_162aea0(v1, &v44);
      if (result != 0) {
        return result;
      }
    }
    goto LABEL_92;
  }
  v43 = &GameData_1a9f09e;
  v17 = game_HashString(&GameData_1a9f09e);
  v18 = *(_BYTE*)(v16 + 178);
  v42 = v17;
  if ((v18 & 4) != 0 && game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v19 = (char*)game_util_Format(GameData_1adf7db);
    v20 = v19;
  LABEL_52:
    v30 = game_HashString(v19);
    v42 = v30;
    v43 = v20;
    goto LABEL_53;
  }
  if ((*(_BYTE*)v16 & 1) != 0) {
    v29 = *(_QWORD*)(v16 + 16);
  }
  else {
    v29 = v16 + 1;
  }
  v30 = strcmp(v29, &GameData_1aee5d5);
  if ((_DWORD)v30 == 0) {
    v20 = (char*)&GameData_1a8eb5b;
    v19 = (char*)&GameData_1a8eb5b;
    goto LABEL_52;
  }
LABEL_53:
  if (game_GameModeData_instance_ != 0) {
    v30 =
        GameRoutine_65c660(*(_QWORD*)(game_GameModeData_instance_ + 48), &v42);
    if ((v30 & 1) != 0) {
      v30 = game_VariableManager_SetFlag(&v42, 1);
    }
  }
  result = GameRoutine_ae3e80(v30, v31);
  if (result == 0) {
  LABEL_92:
    v40 = *(unsigned __int8**)(v1 + 16);
    if (v40 == nullptr) {
      return result;
    }
    v41 = *v40;
    if (v41 > 0x10 || ((1 << v41) & 0x1CE00) == 0) {
      return result;
    }
    v28 = *(_WORD*)(v1 + 136) | 0x80;
  LABEL_46:
    *(_WORD*)(v1 + 136) = v28;
    return result;
  }
  v32 = result;
  GameRoutine_1544c00(*(_QWORD*)(*(_QWORD*)GameData_212d740[0] + 8LL), result);
  v33 = *(_QWORD*)(v32 + 24);
  v34 = *(unsigned __int8*)(v33 + 96);
  v35 = *(_QWORD*)(v33 + 104);
  if ((v34 & 1) == 0) {
    v35 = v34 >> 1;
  }
  if (v35 != 0) {
    v36 = *(void**)(v33 + 112);
    v37 = (void*)(v33 + 97);
    if ((v34 & 1) != 0) {
      v38 = v36;
    }
    else {
      v38 = v37;
    }
    v45 = v38;
    v44 = game_HashString(v38);
    game_VariableManager_SetFlag(&v44, 1);
  }
  return GameRoutine_15255d0(v1);
}

__int64 game_gmap_ProcGmapPhaseSeq_CalcBeforeSpotMenu()
{
  __int64 v0;
  __int64 v1;
  int v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 result;
  __int64 v15;
  __int64 v16;
  _QWORD v17[4];
  _QWORD* v18;

  if ((game_gmap_1536e70(5) & 1) == 0) {
    goto LABEL_19;
  }
  v0 = *(_QWORD*)(GameData_21f1620 + 8);
  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(_DWORD*)(v1 + 56);
  v3 = *(__int64**)(v1 + 8);
  v4 = *(__int64**)(v1 + 16);
  if (v2 < 0) {
    for (; v3 != v4; ++v3) {
      v5 = *v3;
      if (*(_QWORD*)(*v3 + 96) == 0 && *(_QWORD*)(v5 + 552) == 0) {
        goto LABEL_9;
      }
    }
  }
  else {
    while (v3 != v4) {
      v6 = *v3++;
      v5 = v6;
      if (*(_DWORD*)(v6 + 84) == v2) {
        goto LABEL_9;
      }
    }
  }
  v5 = 0;
LABEL_9:
  v7 = *(_QWORD*)(GameData_21c9700 + 8);
  v8 = *(__int64**)(v7 + 48);
  v9 = *(__int64**)(v7 + 56);
  if (v8 == v9) {
    LOBYTE(v10) = 0;
  }
  else {
    v10 = 0;
    do {
      v11 = *v8++;
      v10 |= game_gmap_132a900(v11, v5);
    } while (v8 != v9);
  }
  *(_BYTE*)(v0 + 104) = v10 & 1;
LABEL_19:
  v12 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21f1650 + 8) + 8LL) + 8LL);
  (*(void (**)(__int64))(*(_QWORD*)v12 + 40LL))(v12);
  v17[0] = GameData_2045e80;
  v18 = v17;
  v13 = game_gmap_TroopMgr_CountTroop_1349680(v17);
  result = (__int64)v18;
  if (v18 == v17) {
    v15 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_24;
    }
    v15 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v18 + v15))((__int64)v18);
LABEL_24:
  if (v13 >= 1) {
    snd_Fade_Fade_10c830(v17, 0.0f);
    snd_play_ff2d0((void*)(&v16), "VIB_GMAP_Danger", "VIB_GMAP_Danger", v17, 0,
                   65537, 0, 0.0f, 1.0f);
    return snd_Fade_Destroy_Fade(v17);
  }
  return result;
}

__int64 ProcGmapPhaseSeq_14c9220(__int64 a1)
{
  __int64 v2;

  *(_DWORD*)(a1 + 208) = 0;
  v2 = *(_QWORD*)(*GameData_212d728[0] + 8);
  LayoutAccessor_155e830(*(_QWORD*)(v2 + 16), 1);
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
  }
  *(_DWORD*)(v2 + 5856) |= 0x10000u;
  return GameRoutine_131b660(a1);
}

__int64 ProcGmapPhaseSeq_14c92a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  _QWORD* i;
  __int64 v22;
  int v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;

  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212d700[0] + 8) + 8LL) + 8LL);
  (*(void (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
  v3 = GameData_212d750;
  result = GameRoutine_87f520(*(_QWORD*)GameData_212d750, 0);
  v5 = *(_QWORD*)v3;
  if (*(_BYTE*)(*(_QWORD*)v3 + 312LL) != 0) {
    *(_BYTE*)(v5 + 312) = 0;
    v6 = *(_QWORD*)(GameData_21f1628 + 16);
    v7 = *(_DWORD*)(v6 + 920) - 1;
    *(_DWORD*)(v6 + 920) = v7;
    if (v7 == 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)(v6 + 912) + 8LL))(v6 + 912);
      v5 = *(_QWORD*)v3;
    }
  }
  *(_BYTE*)(*GameData_2130e70 + 59) = 1;
  if (*(_DWORD*)(v5 + 152) != 0) {
    result = GameRoutine_14c6620(a1);
    v8 = *(_QWORD*)(GameData_21c96e8 + 8);
    v9 = *(_DWORD*)(v8 + 56);
    v10 = *(__int64**)(v8 + 8);
    v11 = *(__int64**)(v8 + 16);
    if (v9 < 0) {
      if (v10 != v11) {
        v16 = v10;
        do {
          v13 = *v16;
          if (*(_QWORD*)(*v16 + 96) == 0 && *(_QWORD*)(v13 + 552) == 0) {
            goto LABEL_22;
          }
          ++v16;
        } while (v16 != v11);
      }
    }
    else if (v10 != v11) {
      v12 = v10;
      do {
        v14 = *v12++;
        v13 = v14;
        if (*(_DWORD*)(v14 + 84) == v9) {
          goto LABEL_22;
        }
      } while (v12 != v11);
    }
    v13 = 0;
  LABEL_22:
    if ((*(_QWORD*)(v13 + 96) | *(_QWORD*)(v13 + 552)) != 0 ||
        game_GameModeData_instance_ == 0 ||
        *(_DWORD*)(game_GameModeData_instance_ + 60) != 3 ||
        (*(_DWORD*)(v13 + 84) & 0x80000000) == 0) {
      if (v9 < 0) {
        for (i = v10 + 1;; ++i) {
          v17 = *(i - 1);
          if (*(_QWORD*)(v17 + 96) == 0 && *(_QWORD*)(v17 + 552) == 0) {
            break;
          }
        }
      }
      else {
        v19 = *v10;
        v18 = v10 + 1;
        v17 = v19;
        if (*(_DWORD*)(v19 + 84) != v9) {
          do {
            v20 = *v18++;
            v17 = v20;
          } while (*(_DWORD*)(v20 + 84) != v9);
        }
      }
      GameRoutine_1341d60(v17, 1);
      v22 = *(_QWORD*)(GameData_21c96e8 + 8);
      v23 = *(_DWORD*)(v22 + 56);
      v24 = *(__int64**)(v22 + 8);
      if (v23 < 0) {
        while (*(_QWORD*)(*v24 + 96) != 0 || *(_QWORD*)(*v24 + 552) != 0) {
          ++v24;
        }
      }
      else {
        v26 = *v24;
        v25 = v24 + 1;
        if (*(_DWORD*)(v26 + 84) != v23) {
          do {
            v27 = *v25++;
          } while (*(_DWORD*)(v27 + 84) != v23);
        }
      }
      result = GameRoutine_1341ed0();
    }
    v28 = 16;
    goto LABEL_43;
  }
  v15 = *(_DWORD*)(a1 + 152);
  if (v15 == 6) {
    return result;
  }
  if ((*(_BYTE*)(a1 + 240) & 1) != 0) {
    **(_BYTE**)(a1 + 256) = 0;
    *(_QWORD*)(a1 + 248) = 0;
    v15 = *(_DWORD*)(a1 + 152);
    if (v15 == 3) {
      return result;
    }
  }
  else {
    *(_WORD*)(a1 + 240) = 0;
    if (v15 == 3) {
      return result;
    }
  }
  v29 = *(_DWORD*)(a1 + 208);
  switch (v29) {
  case 9:
    if (v15 == 0) {
    LABEL_51:
      v28 = 2;
    LABEL_43:
      *(_DWORD*)(a1 + 152) = v28;
    }
    break;
  case 1:
    break;
  case 0:
    goto LABEL_51;
  default:
    return GameRoutine_14c6620(a1);
  }
  return result;
}

__int64 ProcGmapPhaseSeq_14c9540(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int8* v11;
  unsigned int v12;
  bool v13;
  int v14;
  _QWORD v16[2];

  result = GameRoutine_ae3e80(a1, a2);
  if (result != 0) {
    v4 = result;
    GameRoutine_1544c00(*(_QWORD*)(*(_QWORD*)GameData_212d740[0] + 8LL),
                        result);
    v5 = *(_QWORD*)(v4 + 24);
    v6 = *(unsigned __int8*)(v5 + 96);
    v7 = *(_QWORD*)(v5 + 104);
    if ((v6 & 1) == 0) {
      v7 = v6 >> 1;
    }
    if (v7 != 0) {
      v8 = *(_QWORD*)(v5 + 112);
      v9 = v5 + 97;
      if ((v6 & 1) != 0) {
        v10 = v8;
      }
      else {
        v10 = v9;
      }
      v16[1] = v10;
      v16[0] = game_HashString(v10);
      game_VariableManager_SetFlag(v16, 1);
    }
    return GameRoutine_15255d0(a1);
  }
  else {
    v11 = *(unsigned __int8**)(a1 + 16);
    if (v11 != nullptr) {
      v12 = *v11;
      v13 = v12 > 0x10;
      v14 = (1 << v12) & 0x1CE00;
      if (!v13 && v14 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
  }
  return result;
}

void ProcGmapPhaseSeq_14c9620(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned int* v9;
  __int64 v10;
  int v11;
  _BOOL4 v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  unsigned int* v21;
  struct {
    __int64 v22;
    __int64 v23;
    __int64 v24;
  } v22_;

  v2 = GameData_212c790;
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  v6 = *(__int64**)(v3 + 16);
  if (v4 < 0) {
    for (; v5 != v6; ++v5) {
      v7 = *v5;
      if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v7 + 552) == 0) {
        goto LABEL_11;
      }
    }
  LABEL_7:
    v9 = game_gmap_SpotMgr_GetCurrentSpot_alt1();
    goto LABEL_12;
  }
  if (v5 == v6) {
    goto LABEL_7;
  }
  while (1) {
    v8 = *v5++;
    v7 = v8;
    if (*(_DWORD*)(v8 + 84) == v4) {
      break;
    }
    if (v5 == v6) {
      goto LABEL_7;
    }
  }
LABEL_11:
  v9 = *(unsigned int**)v7;
LABEL_12:
  v22_.v23 = 0;
  v22_.v24 = 0;
  v22_.v22 = 0;
  GameSubquestData_125a1a0_alt1(*(_QWORD*)GameData_212c7b0[0], &v22_.v22,
                                (__int64)v9, 0);
  if (v22_.v22 == v22_.v23) {
    v12 = false;
    if (v22_.v22 == 0) {
      goto LABEL_23;
    }
    goto LABEL_20;
  }
  v10 = v22_.v22 + 8;
  do {
    v11 = *(unsigned __int8*)(**(_QWORD**)(v10 - 8) + 112LL);
    v12 = v11 == 4;
    v13 = v11 == 4 || v10 == v22_.v23;
    v10 += 8;
  } while (!v13);
  if (v22_.v22 != 0) {
  LABEL_20:
    v22_.v23 = v22_.v22;
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v22_.v22);
  }
LABEL_23:
  if (v12) {
    v15 = *(_QWORD*)(*v2 + 8);
    v16 = *(_DWORD*)(v15 + 56);
    v17 = *(__int64**)(v15 + 8);
    v18 = *(__int64**)(v15 + 16);
    if (v16 < 0) {
      for (; v17 != v18; ++v17) {
        v19 = *v17;
        if (*(_QWORD*)(*v17 + 96) == 0 && *(_QWORD*)(v19 + 552) == 0) {
          goto LABEL_37;
        }
      }
    }
    else if (v17 != v18) {
      while (1) {
        v20 = *v17++;
        v19 = v20;
        if (*(_DWORD*)(v20 + 84) == v16) {
          break;
        }
        if (v17 == v18) {
          goto LABEL_33;
        }
      }
    LABEL_37:
      v21 = *(unsigned int**)v19;
      goto LABEL_38;
    }
  LABEL_33:
    v21 = game_gmap_SpotMgr_GetCurrentSpot_alt1();
  LABEL_38:
    GameHr_14d01c0(a1, (__int64)v21);
    GameRoutine_175b880_alt1(*(_QWORD*)(*GameData_212d728[0] + 8) + 5800LL);
  }
}

__int64 ProcGmapPhaseSeq_14c9820(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64* i;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64* v16;
  __int64* j;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  int v22;
  int v23;
  __int64 v24;
  _QWORD v25[4];
  _QWORD* v26;

  v1 = result;
  v2 = GameData_212d728[0];
  v3 = GameData_212c790;
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
    v4 = *(_QWORD*)(*GameData_212c790 + 8);
    v5 = *(_DWORD*)(v4 + 56);
    v6 = *(__int64**)(v4 + 8);
  }
  else {
    v7 = *(_QWORD*)(*GameData_212c790 + 8);
    v5 = *(_DWORD*)(v7 + 56);
    v6 = *(__int64**)(v7 + 8);
    if ((v5 & 0x80000000) == 0) {
      goto LABEL_11;
    }
    for (i = *(__int64**)(v7 + 8);; ++i) {
      v9 = *i;
      if (*(_QWORD*)(*i + 96) == 0 && *(_QWORD*)(v9 + 552) == 0) {
        break;
      }
    }
    if ((*(_DWORD*)(v9 + 84) & 0x80000000) != 0) {
      goto LABEL_18;
    }
  }
  if ((v5 & 0x80000000) == 0) {
  LABEL_11:
    v12 = *v6;
    v11 = v6 + 1;
    v10 = v12;
    if (*(_DWORD*)(v12 + 84) != v5) {
      do {
        v13 = *v11++;
        v10 = v13;
      } while (*(_DWORD*)(v13 + 84) != v5);
    }
    goto LABEL_17;
  }
  while (1) {
    v10 = *v6;
    if (*(_QWORD*)(*v6 + 96) == 0 && *(_QWORD*)(v10 + 552) == 0) {
      break;
    }
    ++v6;
  }
LABEL_17:
  GameRoutine_1341d60(v10, 1);
  GameRoutine_14c6620(v1);
  result = GameRoutine_175bde0(*(_QWORD*)(*v2 + 8) + 5800LL);
  v7 = *(_QWORD*)(*v3 + 8);
LABEL_18:
  *(_DWORD*)(v7 + 56) = -1;
  *(_BYTE*)(*(_QWORD*)(*v2 + 8) + 5844LL) = 0;
  *(_BYTE*)(*(_QWORD*)(*GameData_212d708 + 16) + 170LL) = 0;
  v14 = GameData_212c780;
  v15 = *(_QWORD*)(*GameData_212c780 + 8);
  v16 = *(__int64**)(v15 + 48);
  for (j = *(__int64**)(v15 + 56); v16 != j;
       result = GameRoutine_1328d60(v18)) {
    v18 = *v16++;
  }
  if (*(_DWORD*)(*(_QWORD*)GameData_212d750 + 152LL) != 0) {
    v19 = 16;
  LABEL_22:
    *(_DWORD*)(v1 + 152) = v19;
    return result;
  }
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
    result = game_HashString(&GameData_1ad8027);
    v19 = 8;
    goto LABEL_22;
  }
  v25[0] = GameData_202dac8;
  v26 = v25;
  v20 = game_gmap_TroopMgr_CountPlayerTroop_134e7b0(v25);
  if (v26 == v25) {
    v21 = 32;
  }
  else {
    if (v26 == nullptr) {
      goto LABEL_31;
    }
    v21 = 40;
  }
  (*(void (**)(void*))(*v26 + v21))(v26);
LABEL_31:
  if (v20 > 0) {
  LABEL_32:
    game_HashString(&GameData_1ad8027);
    v22 = 2;
    goto LABEL_33;
  }
  v25[0] = GameData_202da48;
  v26 = v25;
  v23 = game_gmap_TroopMgr_CountPlayerTroop_134e7b0(v25);
  if (v26 == v25) {
    v24 = 32;
  }
  else {
    if (v26 == nullptr) {
      goto LABEL_40;
    }
    v24 = 40;
  }
  (*(void (**)(void*))(*v26 + v24))(v26);
LABEL_40:
  if (v23 <= 0) {
    goto LABEL_32;
  }
  if ((GameRoutine_14cb390(v1) & 1) != 0) {
    return SpotMgr_1334560(*(_QWORD*)(*v14 + 8));
  }
  v22 = 8;
LABEL_33:
  *(_DWORD*)(v1 + 152) = v22;
  return SpotMgr_1334560(*(_QWORD*)(*v14 + 8));
}

__int64 ProcGmapPhaseSeq_14c9b20(__int64 a1, __int64 a2)
{
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v16;
  __int64 v17;
  _BYTE* v18;
  char v19;

  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(_QWORD*)(v3 + 8);
  v6 = *(_QWORD*)(v3 + 16);
  if ((v4 & 0x80000000) == 0) {
    while (v5 != v6) {
      v8 = *(_QWORD**)v5;
      v5 += 8;
      v7 = v8;
      if (*((_DWORD*)v8 + 21) == v4) {
        goto LABEL_12;
      }
    }
  LABEL_7:
    v9 = game_gmap_SpotMgr_GetCurrentSpot(a1, a2);
    result = GameRoutine_ae4440(v9);
    if (result == 0) {
      return result;
    }
    goto LABEL_13;
  }
  if (v5 == v6) {
    goto LABEL_7;
  }
  while (1) {
    v7 = *(_QWORD**)v5;
    if (*(_QWORD*)(*(_QWORD*)v5 + 96LL) == 0 && v7[69] == 0) {
      break;
    }
    v5 += 8;
    if (v5 == v6) {
      goto LABEL_7;
    }
  }
LABEL_12:
  result = GameRoutine_ae4440(*v7);
  if (result == 0) {
    return result;
  }
LABEL_13:
  v11 = result;
  v12 = *(_QWORD*)(*GameData_212d728[0] + 8);
  LayoutAccessor_155e830(*(_QWORD*)(v12 + 16), 0);
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
  }
  result = game_gameui_Footer_instance_;
  v13 = *(_DWORD*)(v12 + 5856) & 0xFFFEFFFF;
  *(_DWORD*)(v12 + 5856) = v13;
  if (result != 0) {
    result = LayoutAccessor_1567000(result, 0);
    v13 = *(_DWORD*)(v12 + 5856);
  }
  *(_DWORD*)(v12 + 5856) = v13 & 0xFFFDFFFF;
  v14 = *(_QWORD*)(v11 + 96);
  if (*GameData_212d460[0] == 0 && v14 != 0) {
    v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         1376, 16, 0);
    GameRoutine_1130770(v16, v14, 0);
    v17 = *(_QWORD*)(a1 + 40);
    if (v17 != 0) {
      *(_QWORD*)(v17 + 48) = v16;
      *(_QWORD*)(v16 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v16;
    *(_QWORD*)(v16 + 24) = "talk::Seq";
    *(_QWORD*)(v16 + 32) = a1;
    *(_DWORD*)(v16 + 140) = game_HashString32();
    *(_QWORD*)(v16 + 64) = 0;
    *(_QWORD*)(v16 + 72) = 24;
    *(_QWORD*)(v16 + 80) = 1;
    *(_QWORD*)(v16 + 8) = &GameData_216de68;
    *(_QWORD*)(v16 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v16 + 32LL))(v16);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 136LL))(v16);
    if ((result & 1) != 0 && (*(_WORD*)(v16 + 136) & 0x100) == 0) {
      *(_WORD*)(v16 + 136) |= 0x100u;
    }
    v18 = *(_BYTE**)(v16 + 32);
    v19 = v18[138];
    if (v19 == 0) {
      result =
          (*(__int64 (**)(_QWORD))(*(_QWORD*)v18 + 64LL))(*(_QWORD*)(v16 + 32));
      v19 = v18[138];
    }
    v18[138] = v19 + 1;
    *(_WORD*)(v16 + 136) |= 2u;
  }
  return result;
}

__int64 ProcGmapPhaseSeq_14c9d40(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64* i;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;

  v6_.v6[0] = GameData_202d7c8;
  v6_.v7 = v6_.v6;
  TroopMgr_13460a0((__int64)v6_.v6);
  result = (__int64)v6_.v7;
  if (v6_.v7 == v6_.v6) {
    v3 = 32;
    goto LABEL_5;
  }
  if (v6_.v7 != nullptr) {
    v3 = 40;
  LABEL_5:
    result = (*(__int64 (**)(__int64))(*v6_.v7 + v3))((__int64)v6_.v7);
  }
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    for (i = *(__int64**)(*(_QWORD*)(GameData_21c96e8 + 8) + 8LL);; ++i) {
      v5 = *i;
      if ((*(_QWORD*)(*i + 96) | *(_QWORD*)(*i + 552)) == 0 &&
          *(_DWORD*)(v5 + 84) == -1) {
        break;
      }
    }
    result = game_gmap_1341d60(v5, 0);
  }
  *(_BYTE*)(GameData_22416c0 + 54) = 0;
  *(_DWORD*)(a1 + 152) = 14;
  return result;
}

__int64 ProcGmapPhaseSeq_14c9e20()
{
  __int64 v0;
  __int64 v1;
  unsigned int v2;
  __int64 result;

  v0 = *(_QWORD*)(*GameData_212d728[0] + 8);
  LayoutAccessor_155e830(*(_QWORD*)(v0 + 16), 0);
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
  }
  v1 = game_gameui_Footer_instance_;
  v2 = *(_DWORD*)(v0 + 5856) & 0xFFFEFFFF;
  *(_DWORD*)(v0 + 5856) = v2;
  if (v1 != 0) {
    LayoutAccessor_1567000(v1, 0);
    v2 = *(_DWORD*)(v0 + 5856);
  }
  result = game_hub_ProgressEventView_instance_;
  *(_DWORD*)(v0 + 5856) = v2 & 0xFFFDFFFF;
  if (result != 0) {
    return GameRoutine_17b8e80(result, 1);
  }
  return result;
}

__int64 ProcGmapPhaseSeq_14c9ed0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  _BYTE v6[200];

  snd_Fade_Fade_10c830(v6, 0.0f);
  snd_play_ff2d0((void*)(&v5), "SE_SYS_GMAP_Menu_Open", "SE_SYS_GMAP_Menu_Open",
                 v6, 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v6);
  v2 = *(_QWORD*)(GameData_21f1658 + 16);
  if (*(_BYTE*)(v2 + 169) == 1) {
    v3 = **(_QWORD**)(*(_QWORD*)(GameData_21f1650 + 8) + 8LL);
    (*(void (**)(__int64))(*(_QWORD*)v3 + 48LL))(v3);
  }
  *(_BYTE*)(v2 + 169) = 0;
  return GameRoutine_135aa80(a1);
}

__int64 ProcGmapPhaseSeq_14c9fa0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 result;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_QWORD*)(v0 + 8);
  v2 = *(_QWORD*)(v0 + 16);
  if (v1 != v2) {
    v3 = GameData_21f1618;
    do {
      if (*(_QWORD*)(*(_QWORD*)v1 + 96LL) == 0 &&
          *(_QWORD*)(*(_QWORD*)v1 + 552LL) == 0 && v3 != 0) {
        result = GameRoutine_995200(*(_QWORD*)v1 + 112LL);
        v3 = GameData_21f1618;
      }
      v1 += 8;
    } while (v1 != v2);
  }
  return result;
}

__int64 ProcGmapPhaseSeq_14ca030(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  int v6;

  if (*(_DWORD*)(a1 + 152) == 0) {
    v2 = *(_QWORD*)(*GameData_212d728[0] + 8);
    LayoutAccessor_155e830(*(_QWORD*)(v2 + 16), 1);
    if (game_hub_ProgressEventView_instance_ != 0) {
      GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
    }
    *(_DWORD*)(v2 + 5856) |= 0x10000u;
    *(_DWORD*)(a1 + 152) = 2;
  }
  v3 = GameData_212d750;
  result = GameRoutine_87f520(*(_QWORD*)GameData_212d750, 0);
  if (*(_BYTE*)(*(_QWORD*)v3 + 312LL) != 0) {
    *(_BYTE*)(*(_QWORD*)v3 + 312LL) = 0;
    v5 = *(_QWORD*)(GameData_21f1628 + 16);
    v6 = *(_DWORD*)(v5 + 920) - 1;
    *(_DWORD*)(v5 + 920) = v6;
    if (v6 == 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)(v5 + 912) + 8LL))(v5 + 912);
    }
  }
  return result;
}

__int64 ProcGmapPhaseSeq_14ca100(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;

  v1 = *(_QWORD*)(GameData_21f1658 + 16);
  if (*(_BYTE*)(v1 + 169) == 1) {
    v2 = a1;
    v3 = **(_QWORD***)(*(_QWORD*)(*GameData_212d700[0] + 8) + 8LL);
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v3 + 48LL))(
        (void*)v3, v3);
    a1 = v2;
  }
  *(_BYTE*)(v1 + 169) = 0;
  return GameRoutine_1712520(a1, 5, 0);
}

__int64 ProcGmapPhaseSeq_14ca180(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE v6[200];

  v1 = result;
  v2 = *(_QWORD*)(*GameData_212d708 + 16);
  v3 = *(_QWORD*)(v2 + 96);
  if (v3 != 0) {
    if (*(_BYTE*)(v2 + 169) == 1) {
      v4 = **(_QWORD**)(*(_QWORD*)(GameData_21f1650 + 8) + 8LL);
      (*(void (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
    }
    *(_BYTE*)(v2 + 169) = 0;
    snd_Fade_Fade_10c830(v6, 0.0f);
    snd_play_ff2d0((void*)(&v5), "SE_SYS_GMAP_ShopGuideMenu_Open",
                   "SE_SYS_GMAP_ShopGuideMenu_Open", v6, 0, 65537, 0, 0.0f,
                   1.0f);
    snd_Fade_Destroy_Fade(v6);
    result = GameRoutine_19023d0(v1, v3);
  }
  *(_DWORD*)(v1 + 152) = 2;
  return result;
}

__int64 ProcGmapPhaseSeq_14ca250(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  _BYTE v7[200];

  snd_Fade_Fade_10c830(v7, 0.0f);
  snd_play_ff2d0((void*)(&v6), "SE_SYS_GMAP_Menu_Open", "SE_SYS_GMAP_Menu_Open",
                 v7, 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v7);
  v2 = GameData_21f1658;
  v3 = *(_QWORD*)(GameData_21f1658 + 16);
  if (*(_BYTE*)(v3 + 169) == 1) {
    v4 = **(_QWORD**)(*(_QWORD*)(GameData_21f1650 + 8) + 8LL);
    (*(void (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
    v2 = GameData_21f1658;
  }
  *(_BYTE*)(v3 + 169) = 0;
  return GmapSpotList_167b840(a1, *(_QWORD*)(*(_QWORD*)(v2 + 16) + 96LL), 1);
}

__int64 ProcGmapPhaseSeq_14ca340(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  __int16 v10;
  __int64 v11;

  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(__int64**)(v1 + 8);
  v3 = *(__int64**)(v1 + 16);
  if (v2 != v3) {
    v4 = 0;
    do {
      v6 = *v2;
      v7 = *(_QWORD*)(*v2 + 96);
      v8 = *(_QWORD*)(*v2 + 552);
      if ((v7 | v8) != 0) {
        if (*(_QWORD*)(v6 + 32) == *(_QWORD*)(v6 + 24)) {
          v5 = 0;
        }
        else {
          v5 = v7 == 0 &&
                   (v8 != 0 ? (v9 = *(_QWORD*)(v6 + 104) == 0) : (v9 = false),
                    v9 &&
                        *(__int16*)(v6 + 642) * *(__int16*)(v6 + 640) *
                                *(__int16*)(v6 + 644) ==
                            0 &&
                        *(_QWORD*)(v8 + 352) == 0) ||
               ((v10 = *(_WORD*)(v6 + 544)) & 1) != 0 || (v10 & 2) == 0;
        }
        v4 += v5;
      }
      ++v2;
    } while (v2 != v3);
    if (v4 != 0) {
      v11 = result;
      if ((TroopMgr_1347760() & 1) != 0 || TroopMgr_1347860() == 0) {
        return GameRoutine_1546680(v11);
      }
      else {
        return LayoutAccessor_1555150(v11, 0);
      }
    }
  }
  return result;
}

void game_gmap_ProcGmapPhaseSeq_EndOtherPhase(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  int v5;
  unsigned int* v6;
  unsigned int* v7;
  __int64 (**v8)();
  __int64 (**v9)();
  __int64 (*v10)();
  __int64 v11;
  int v12;
  __int64 v13;
  struct {
    __int64 (**v14)();
    __int64 (**v15)();
    char gap32_[16];
    __int64 (***v16)();
  } v14_;

  if (!GmapSituation_14db2f0()) {
    goto LABEL_10;
  }
  v14_.v14 = GameData_2045f00;
  v14_.v16 = &v14_.v14;
  v2 = game_gmap_TroopMgr_CountTroop_1349680_alt1((__int64)&v14_.v14);
  if (v14_.v16 == &v14_.v14) {
    v3 = 4;
    goto LABEL_6;
  }
  if (v14_.v16 != nullptr) {
    v3 = 5;
  LABEL_6:
    ((__int64 (*)(__int64))(*v14_.v16)[v3])((__int64)v14_.v16);
  }
  if (v2 >= 1) {
    snd_Fade_Fade_10c830_alt1((__int64)&v14_.v14, 0x0.0p+0f);
    snd_play_ff2d0_alt1((__int64)"VIB_GMAP_Danger", (__int64)"VIB_GMAP_Danger",
                        (__int64)&v14_.v14, 0, 0x10001u, 0, 0x0.0p+0f,
                        0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade_alt1(&v14_.v14);
    if (GameData_2241720 != 0) {
      TelopParts_17cc7d0_alt1(GameData_2241720,
                              (__int64)"MID_Sys_InfoTelop_NextMoveDanger", 0, 0,
                              0, 0);
    }
  }
LABEL_10:
  if (*(_DWORD*)(GameData_21f1618 + 152) != 0) {
  LABEL_30:
    v12 = 16;
    goto LABEL_31;
  }
  if (((unsigned int)TroopMgr_134e220() & 1) != 0) {
    v4 = GameData_21f1618;
    v5 = 6;
  LABEL_29:
    *(_DWORD*)(v4 + 152) = v5;
    goto LABEL_30;
  }
  v6 = TroopMgr_134c680();
  if (v6 != nullptr && GameVariable_718130((__int64 (*)())v6, 0)) {
    v7 = TroopMgr_134c680();
    if (*((_BYTE*)v7 + 113) == 1) {
      TroopMgr_134b820((void*)(&v14_.v14), v7);
      v8 = v14_.v14;
      v9 = v14_.v15;
      if (v14_.v14 != v14_.v15) {
        do {
          v10 = *v8;
          if (*((_BYTE*)*v8 + 512) != 0) {
            v11 = GameData_21f1618;
            *((_BYTE*)v10 + 512) = 0;
            if (v11 != 0) {
              GameRoutine_995200_alt1((__int64)v10 + 112);
            }
          }
          ++v8;
        } while (v8 != v9);
        v8 = v14_.v14;
      }
      if (v8 != nullptr) {
        v14_.v15 = v8;
        v13 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
      }
    }
    v4 = GameData_21f1618;
    v5 = 5;
    goto LABEL_29;
  }
  v12 = 15;
LABEL_31:
  *(_DWORD*)(a1 + 152) = v12;
}

__int64 ProcGmapPhaseSeq_14ca660()
{
  __int64 v0;
  __int64* v1;
  __int64* i;
  __int64 v3;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(__int64**)(v0 + 8);
  for (i = *(__int64**)(v0 + 16); v1 != i;
       result = game_gmap_Troop_OnEndPhase(v3)) {
    v3 = *v1++;
  }
  return result;
}

__int64 game_gmap_ProcGmapPhaseSeq_CycleGrowPart3(__int64 result)
{
  __int64 v1;
  int v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v7;
  __int64 v8;
  struct {
    __int64 (**v9)();
    int* v10;
    char gap16_[16];
    unsigned __int64* v11;
  } v9_;
  int v12;

  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0 &&
      *(unsigned __int8*)(GameData_22416c0 + 53) ==
          *(unsigned __int8*)(game_GameModeData_instance_ + 15) &&
      *(_DWORD*)(GameData_22416c0 + 44) ==
          *(_DWORD*)(game_GameModeData_instance_ + 64)) {
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
      goto LABEL_13;
    }
    v2 = *(unsigned __int8*)(GameData_22416c0 + 56);
    v3 = result;
    v9_.v10 = (int*)&GameData_1adfa87;
    v9_.v9 =
        (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1adfa87);
    v5 = game_GameModeData_instance_ != 0 &&
         (v4 = game_GameVariableTable_Find_alt1(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)&v9_.v9)) != 0 &&
         *(_DWORD*)(v4 + 32) != 0;
    v1 = game_GameModeData_instance_;
    result = v3;
    if (v2 == v5 && game_GameModeData_instance_ != 0) {
    LABEL_13:
      if (*(_DWORD*)(v1 + 60) == 3) {
        v7 = result;
        result = GameRoutine_869d10_alt1();
        if ((_DWORD)result != 1) {
          v12 = 0;
          v9_.v9 = GameData_2045f80;
          v9_.v10 = &v12;
          v9_.v11 = (unsigned __int64*)&v9_.v9;
          game_gmap_TroopMgr_EachReserveUnit((__int64)&v9_.v9);
          result = (__int64)v9_.v11;
          if (v9_.v11 == (unsigned __int64*)&v9_.v9) {
            v8 = 32;
          }
          else {
            if (v9_.v11 == nullptr) {
              goto LABEL_20;
            }
            v8 = 40;
          }
          result = (*(__int64 (**)(__int64))(*v9_.v11 + v8))((__int64)v9_.v11);
        LABEL_20:
          if (v12 >= 1) {
            return GameRoutine_152e8c0(v7);
          }
        }
      }
    }
  }
  return result;
}

void ProcGmapPhaseSeq_14ca830()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  int v6;
  struct {
    __int64 v7;
    void* v8;
  } v7_;

  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0 &&
      ((__int64)*(__int16*)(game_gmap_GmapClock_instance_ + 10) << 24) +
              ((__int64)*(__int16*)(game_gmap_GmapClock_instance_ + 8) << 32) +
              ((__int64)*(__int16*)(game_gmap_GmapClock_instance_ + 12) << 18) +
              ((__int64)*(__int16*)(game_gmap_GmapClock_instance_ + 14) << 12) +
              ((__int64)*(__int16*)(game_gmap_GmapClock_instance_ + 16) << 6) +
              *(__int16*)(game_gmap_GmapClock_instance_ + 18) <
          (unsigned __int64)(((__int64)*(
                                  __int16*)(game_gmap_GmapClock_instance_ + 22)
                              << 24) +
                             ((__int64)*(
                                  __int16*)(game_gmap_GmapClock_instance_ + 20)
                              << 32) +
                             ((__int64)*(
                                  __int16*)(game_gmap_GmapClock_instance_ + 24)
                              << 18) +
                             ((__int64)*(
                                  __int16*)(game_gmap_GmapClock_instance_ + 26)
                              << 12) +
                             ((__int64)*(
                                  __int16*)(game_gmap_GmapClock_instance_ + 28)
                              << 6) +
                             *(__int16*)(game_gmap_GmapClock_instance_ + 30))) {
    if (game_GameModeData_instance_ != 0 &&
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
        *(_DWORD*)(game_GameModeData_instance_ + 64) == 6 &&
        (v7_.v8 = &GameData_1ac4744,
         v7_.v7 = game_HashString_alt1((__int64)&GameData_1ac4744),
         game_GameModeData_instance_ != 0) &&
        (v0 = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)&v7_.v7)) != 0 &&
        *(_DWORD*)(v0 + 32) != 0 && (unsigned int)GameHr_869d10() == 1) {
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 152LL) = 15;
      *(_BYTE*)(*GameData_2130e70 + 54) = 1;
    }
    else {
      v7_.v8 = &GameData_1ae764f;
      v7_.v7 = game_HashString_alt1((__int64)&GameData_1ae764f);
      if (game_GameModeData_instance_ != 0 &&
          (v1 = game_GameVariableTable_Find_alt1(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)&v7_.v7)) != 0 &&
          *(_DWORD*)(v1 + 32) != 0) {
        ScheduleNatives_869ec0_alt1();
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 +
                                                   32LL) -
                                        8LL) +
                             40LL) +
                  225LL) = 1;
        v2 = TroopMgr_13504e0_alt1();
        TroopMgr_1349f40_alt1(v2);
        TroopMgr_134d2e0_alt1(*(_QWORD*)(GameData_21c96e8 + 8));
      }
      else {
        v4 = GameData_21f1618;
        if (game_gmap_GmapClock_instance_ != 0) {
          Dir_70ea50((void*)((__int64)&v7_.v7),
                     (__int16*)(game_gmap_GmapClock_instance_ + 8),
                     game_gmap_GmapClock_instance_ + 20);
        }
        else {
          v7_.v7 = game_gmap_GmapClock_kDefaultTime;
          LODWORD(v7_.v8) = GameData_21caa04;
        }
        *(_QWORD*)(v4 + 264) = v7_.v7;
        *(_DWORD*)(v4 + 272) = (_DWORD)v7_.v8;
        v5 = GameHr_86a320(v4, (__int16*)(v4 + 264));
        if (v5 != 0) {
          v6 = *(_DWORD*)(v5 + 148);
        }
        else {
          v6 = 0;
        }
        *(_DWORD*)(v4 + 288) = v6;
        TroopMgr_13504e0_alt1();
      }
    }
  }
}

__int64 ProcGmapPhaseSeq_14caa60(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int16* v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  int v12;
  __int64 v13;
  unsigned int v14;

  v1 = GameData_212c6c0[0];
  result = GameCalendar_12ddb80(*(_QWORD*)GameData_212c6c0[0], a1);
  if ((result & 1) != 0) {
    v3 = *(_QWORD*)(*(_QWORD*)v1 + 16LL);
    v4 = *(_QWORD*)(*(_QWORD*)v1 + 24LL);
    if (game_gmap_GmapClock_instance_ != 0) {
      v5 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
    }
    else {
      v5 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
    }
    if (v3 != v4) {
      v6 = *v5;
      v7 = v5[1];
      v8 = v5[2];
      while (v6 != *(unsigned __int16*)(v3 + 4) ||
             v7 != *(unsigned __int8*)(v3 + 6) ||
             v8 != *(unsigned __int8*)(v3 + 7)) {
        v3 += 368;
        if (v3 == v4) {
          v9 = 0;
          if (*(((_BYTE*)0x0LL) + 3) == 0) {
            return result;
          }
          goto LABEL_17;
        }
      }
    }
    if (v3 == v4) {
      v9 = 0;
    }
    else {
      v9 = v3;
    }
    if (*(_BYTE*)(v9 + 3) != 0) {
    LABEL_17:
      v10 = v9 + 352;
      v11 = 0;
      v12 = 0;
      do {
        result = GameCalendar_12da840(v10);
        ++v11;
        v10 += 8;
        v12 += result & 1;
      } while (v11 < *(unsigned __int8*)(v9 + 3));
      if (v12 != 0) {
        v13 = *(_QWORD*)(*GameData_212d728[0] + 8);
        LayoutAccessor_155e830(*(_QWORD*)(v13 + 16), 0);
        if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
          GameRoutine_17b8f40(
              *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0], 1);
        }
        result = game_gameui_Footer_instance_;
        v14 = *(_DWORD*)(v13 + 5856) & 0xFFFEFFFF;
        *(_DWORD*)(v13 + 5856) = v14;
        if (result != 0) {
          result = LayoutAccessor_1567000(result, 0);
          v14 = *(_DWORD*)(v13 + 5856);
        }
        *(_DWORD*)(v13 + 5856) = v14 & 0xFFFDFFFF;
      }
    }
  }
  return result;
}

__int64 ProcGmapPhaseSeq_14cabc0()
{
  __int64 v0;
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int16* v6;
  __int64 result;

  v0 = *(_QWORD*)(*GameData_212c790 + 8);
  v1 = *(__int64**)(v0 + 8);
  v2 = *(__int64**)(v0 + 16);
  if (v1 != v2) {
    v3 = game_gmap_GmapClock_kDefaultTime_ptr;
    v4 = GameData_212d728[0];
    do {
      v5 = *v1;
      if ((*(_WORD*)(*v1 + 544) & 0x40) != 0 && *(_QWORD*)(v5 + 552) != 0 &&
          *(__int16*)(v5 + 642) * *(__int16*)(v5 + 640) *
                  *(__int16*)(v5 + 644) !=
              0) {
        if (game_gmap_GmapClock_instance_ != 0) {
          v6 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
        }
        else {
          v6 = (__int16*)v3;
        }
        if (((__int64)*(__int16*)(v5 + 642) << 24) +
                ((__int64)*(__int16*)(v5 + 640) << 32) +
                ((__int64)*(__int16*)(v5 + 644) << 18) +
                ((__int64)*(__int16*)(v5 + 646) << 12) +
                ((__int64)*(__int16*)(v5 + 648) << 6) + *(__int16*)(v5 + 650) <
            (unsigned __int64)(((__int64)v6[1] << 24) + ((__int64)*v6 << 32) +
                               ((__int64)v6[2] << 18) + ((__int64)v6[3] << 12) +
                               ((__int64)v6[4] << 6) + v6[5])) {
          result = GameRoutine_175b880(*(_QWORD*)(*v4 + 8) + 5800LL);
        }
      }
      ++v1;
    } while (v1 != v2);
  }
  return result;
}

void ProcGmapPhaseSeq_14cad00(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  char* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  struct {
    char* v22;
    _QWORD* v23;
    unsigned __int64 v24;
  } v22_;

  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
    v22_.v23 = nullptr;
    v22_.v24 = 0;
    v22_.v22 = nullptr;
    v1 = *(_QWORD*)(GameData_21c96e8 + 8);
    v2 = *(__int64**)(v1 + 8);
    v3 = *(__int64**)(v1 + 16);
    if (v2 != v3) {
      v4 = nullptr;
      v5 = (__int64*)fw_memory_g_heap_manager_ptr;
      do {
        v6 = *v2;
        if ((*(_WORD*)(*v2 + 544) & 0x40) != 0) {
          if ((unsigned __int64)v4 < v22_.v24) {
            *(_QWORD*)v4 = v6;
            v4 += 8;
          }
          else {
            v7 = (__int64)v22_.v22;
            v8 = v4 - v22_.v22;
            v9 = (v4 - v22_.v22) >> 3;
            v10 = v9 + 1;
            if ((unsigned __int64)(v9 + 1) >> 61 != 0) {
              GameRoutine_888610_alt1();
            }
            v11 = v22_.v24 - (_QWORD)v22_.v22;
            if ((__int64)(v22_.v24 - (_QWORD)v22_.v22) >> 2 > v10) {
              v10 = v11 >> 2;
            }
            if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF8LL) {
              v12 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v12 = v10;
            }
            if (v12 != 0) {
              if (v12 >> 61 != 0) {
                GameRoutine_60a210_alt1();
              }
              v13 = fw_memory_HeapManager_Allocate_alt1(*v5, 8 * v12, 16, 0);
            }
            else {
              v13 = 0;
            }
            v14 = v13 + 8 * v12;
            v15 = v13 + v8 - 8 * v9;
            *(_QWORD*)(v13 + v8) = v6;
            v4 = (char*)(v13 + v8 + 8);
            memcpy_alt1(v15, v7, v8);
            v22_.v22 = (char*)v15;
            v22_.v24 = v14;
            if (v7 != 0) {
              v16 = 128;
              if (*(_QWORD*)(*v5 + 200) == 0) {
                v16 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v5 + v16, v7);
            }
          }
          v22_.v23 = v4;
        }
        ++v2;
      } while (v2 != v3);
      v17 = (__int64)v22_.v22;
      if (v4 != v22_.v22) {
        v18 = GameHr_14b4b70(a1, 2u, (__int64)&v22_.v22);
        v17 = (__int64)v22_.v22;
        *(_QWORD*)(a1 + 232) = v18;
      }
      if (v17 != 0) {
        v19 = *v5;
        v22_.v23 = (_QWORD*)v17;
        v20 = 128;
        if (*(_QWORD*)(v19 + 200) == 0) {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(v19 + v20, v17);
      }
    }
  }
}

__int64 ProcGmapPhaseSeq_14caee0(__int64 result)
{
  __int64 v1;
  __int16* v2;
  __int64 v3;
  int v4;
  __int64** v5;
  __int64* i;
  __int64* v7;
  signed __int64 v8;
  _QWORD v9[2];

  v1 = result;
  v2 = (__int16*)game_gmap_GmapClock_instance_;
  if (game_gmap_GmapClock_instance_ != 0) {
    if (*(__int16*)(game_gmap_GmapClock_instance_ + 22) *
            *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
            *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
        0) {
      v3 = *(_QWORD*)GameData_212d750;
      if (((__int64)*(__int16*)(game_gmap_GmapClock_instance_ + 10) << 24) +
              ((__int64)*(__int16*)(game_gmap_GmapClock_instance_ + 8) << 32) +
              ((__int64)*(__int16*)(game_gmap_GmapClock_instance_ + 12) << 18) +
              ((__int64)*(__int16*)(game_gmap_GmapClock_instance_ + 14) << 12) +
              ((__int64)*(__int16*)(game_gmap_GmapClock_instance_ + 16) << 6) +
              *(__int16*)(game_gmap_GmapClock_instance_ + 18) >=
          (unsigned __int64)(((__int64)*(
                                  __int16*)(game_gmap_GmapClock_instance_ + 22)
                              << 24) +
                             ((__int64)*(
                                  __int16*)(game_gmap_GmapClock_instance_ + 20)
                              << 32) +
                             ((__int64)*(
                                  __int16*)(game_gmap_GmapClock_instance_ + 24)
                              << 18) +
                             ((__int64)*(
                                  __int16*)(game_gmap_GmapClock_instance_ + 26)
                              << 12) +
                             ((__int64)*(
                                  __int16*)(game_gmap_GmapClock_instance_ + 28)
                              << 6) +
                             *(__int16*)(game_gmap_GmapClock_instance_ + 30))) {
        *(_DWORD*)(v3 + 152) = 15;
      }
      if (*(_DWORD*)(v3 + 152) == 0) {
        goto LABEL_11;
      }
    }
    else if (*(_DWORD*)(*(_QWORD*)GameData_212d750 + 152LL) == 0) {
    LABEL_11:
      if (v2[11] * v2[10] * v2[12] != 0) {
        game_gmap_SpotMgr_OnEndPhase();
      }
      goto LABEL_13;
    }
  LABEL_10:
    v4 = 16;
    goto LABEL_23;
  }
  if (*(_DWORD*)(*(_QWORD*)GameData_212d750 + 152LL) != 0) {
    goto LABEL_10;
  }
LABEL_13:
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v5 = *(__int64***)(*GameData_2130e60 + 8);
    for (i = *v5; i != v5[1]; ++i) {
      while ((GameRoutine_14a73e0(*i) & 1) == 0) {
        GameRoutine_14aaba0(v5 + 3, i);
        v7 = v5[1];
        v8 = (char*)v7 - (char*)(i + 1);
        if (v7 != i + 1) {
          memmove(i, i + 1, (char*)v7 - (char*)(i + 1));
        }
        v5[1] = (__int64*)((char*)i + v8);
        if (i == (__int64*)((char*)i + v8)) {
          goto LABEL_22;
        }
      }
    }
  }
LABEL_22:
  v4 = 1;
  v9[1] = &GameData_1a96743;
  *(_BYTE*)(*GameData_2130e70 + 54) = 1;
  v9[0] = game_HashString(&GameData_1a96743);
  result = game_VariableManager_SetFlag(v9, 0);
LABEL_23:
  *(_DWORD*)(v1 + 152) = v4;
  return result;
}

void ProcGmapPhaseSeq_14cb0d0(__int64 a1)
{
  __int64 v2;
  struct {
    __int64 v3;
    __int64 v4;
    __int64 v5;
  } v3_;

  v3_.v4 = 0;
  v3_.v5 = 0;
  v3_.v3 = 0;
  if ((GameRoutine_1349320_alt1(&v3_.v3) & 1) != 0) {
    TroopMgr_134d2e0_alt1(*(_QWORD*)(GameData_21c96e8 + 8));
    GameHr_14b4b70_alt1(a1, 3, (__int64)&v3_.v3);
  }
  if (v3_.v3 != 0) {
    v3_.v4 = v3_.v3;
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v3_.v3);
  }
}

__int64

game_gmap_ProcGmapPhaseSeq_CheckAttachmentMiasma_closure_Invoke(__int64 result,
                                                                _QWORD* a2)
{
  __int64** v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v2 = *(__int64***)(GameData_22416b0 + 8);
    v3 = *v2;
    v4 = v2[1];
    if (v3 != v4) {
      v5 = *a2;
      while (1) {
        v6 = *v3++;
        if (*(_QWORD*)(*(_QWORD*)(v6 + 112) + 48LL) ==
            *(_QWORD*)(*a2 + 120LL)) {
          break;
        }
        if (v3 == v4) {
          return result;
        }
      }
      v7 = result;
      if ((unsigned __int8)Impl_13261c0(*a2) == 6 ||
          (unsigned __int8)Impl_13261c0(v5) == 14) {
        **(_BYTE**)(v7 + 16) = 1;
      }
      if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(v5 + 280) + 24LL))(
              *(_QWORD*)(v5 + 280)) == 1) {
        (*(void (**)(_QWORD))(**(_QWORD**)(v5 + 280) + 112LL))(
            *(_QWORD*)(v5 + 280));
      }
      if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(v5 + 280) + 24LL))(
              *(_QWORD*)(v5 + 280)) == 4) {
        **(_BYTE**)(v7 + 8) = 1;
      }
      return Spot_132b100(v5, 1);
    }
  }
  return result;
}

__int64 game_gmap_ProcGmapPhaseSeq_TryConfirmTurnEnd(__int64 a1)
{
  __int64* v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;
  const char* v16;
  const char* v17;
  const char* v18;
  const char* v19;

  if (game_CorpsManager_GetEmptyIndex() &&
      (game_gmap_TroopMgr_CanCreateCorps() & 1) != 0) {
    v2 = game_8224a0(0x1Bu);
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v2);
      if (result == 0) {
        return result;
      }
      if (*(_DWORD*)(result + 32) == 1) {
        v19 = "MID_Gmap_TurnEnd_Confirm";
        v16 = "MID_Sys_No";
        v17 = "MID_Gmap_TurnEnd_Yes";
        v18 = "MID_Sys_Yes";
        v14_.v15 = v14_.v14;
        v14_.v14[0] = GameData_2045b80;
        v14_.v14[1] = a1;
        v10_.v11 = v10_.v10;
        v8_.v9 = v8_.v8;
        v12_.v12[0] = GameData_2045c00;
        v12_.v12[1] = a1;
        v12_.v13 = v12_.v12;
        v10_.v10[0] = GameData_2045c80;
        v10_.v10[1] = a1;
        v8_.v8[0] = GameData_2045c80;
        v8_.v8[1] = a1;
        ProcGmapPhaseSeq_14cb560_alt1(a1, (__int64)&v19, &v18, &v17, &v16,
                                      (__int64)v14_.v14, (__int64)v12_.v12,
                                      (__int64)v10_.v10, (__int64)v8_.v8);
        if (v8_.v9 == v8_.v8) {
          v4 = 32;
        }
        else {
          if (v8_.v9 == nullptr) {
            goto LABEL_13;
          }
          v4 = 40;
        }
        (*(void (**)(__int64))(*v8_.v9 + v4))((__int64)v8_.v9);
      LABEL_13:
        if (v10_.v11 == v10_.v10) {
          v5 = 32;
        }
        else {
          if (v10_.v11 == nullptr) {
            goto LABEL_18;
          }
          v5 = 40;
        }
        (*(void (**)(__int64))(*v10_.v11 + v5))((__int64)v10_.v11);
      LABEL_18:
        if (v12_.v13 == v12_.v12) {
          v6 = 32;
        }
        else {
          if (v12_.v13 == nullptr) {
            goto LABEL_23;
          }
          v6 = 40;
        }
        (*(void (**)(__int64))(*v12_.v13 + v6))((__int64)v12_.v13);
      LABEL_23:
        if (v14_.v15 == v14_.v14) {
          v7 = 32;
        }
        else {
          if (v14_.v15 == nullptr) {
            return 1;
          }
          v7 = 40;
        }
        (*(void (**)(__int64))(*v14_.v15 + v7))((__int64)v14_.v15);
        return 1;
      }
    }
  }
  return 0;
}

__int64 ProcGmapPhaseSeq_14cb560(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4,
                                 _QWORD* a5, __int64 a6, __int64 a7, __int64 a8,
                                 __int64 a9)
{
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v15 = game_menu_Dialog__CreateBind_game_menu_Dialog(a1, a2);
  if (v15 != 0) {
    v16 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v17 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         192, 16, 0);
    GameRoutine_16477d0(v17, *a3, a6, a9);
    BasicMenuCursor_16e0c00(v15, v17);
    v18 = fw_memory_HeapManager_Allocate(*v16, 192, 16, 0);
    GameRoutine_16477d0(v18, *a4, a7, a9);
    BasicMenuCursor_16e0c00(v15, v18);
    v19 = fw_memory_HeapManager_Allocate(*v16, 192, 16, 0);
    GameRoutine_16477d0(v19, *a5, a8, a9);
    BasicMenuCursor_16e0c00(v15, v19);
  }
  return v15;
}

__int64 game_gmap_ProcGmapPhaseSeq_TryConfirmTurnEnd_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = GameData_212d750;
  GameRoutine_87f520(*(_QWORD*)GameData_212d750, 0);
  if (*(_BYTE*)(*(_QWORD*)v2 + 312LL) != 0) {
    *(_BYTE*)(*(_QWORD*)v2 + 312LL) = 0;
    v3 = *(_QWORD*)(GameData_21f1628 + 16);
    v4 = *(_DWORD*)(v3 + 920) - 1;
    *(_DWORD*)(v3 + 920) = v4;
    if (v4 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v3 + 912) + 8LL))(v3 + 912);
    }
  }
  *(_DWORD*)(v1 + 152) = 8;
  return 4;
}

__int64 game_gmap_ProcGmapPhaseSeq_TryConfirmTurnEnd_closure0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = GameData_212d750;
  GameRoutine_87f520(*(_QWORD*)GameData_212d750, 0);
  if (*(_BYTE*)(*(_QWORD*)v2 + 312LL) != 0) {
    *(_BYTE*)(*(_QWORD*)v2 + 312LL) = 0;
    v3 = *(_QWORD*)(GameData_21f1628 + 16);
    v4 = *(_DWORD*)(v3 + 920) - 1;
    *(_DWORD*)(v3 + 920) = v4;
    if (v4 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v3 + 912) + 8LL))(v3 + 912);
    }
  }
  *(_DWORD*)(v1 + 152) = 8;
  v5 = GameRoutine_8224a0(27);
  game_VariableManager_SetFlag(v5, 0);
  return 4;
}

__int64 game_gmap_ProcGmapPhaseSeq_TryConfirmTurnEnd_closure1_Invoke(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(v1 + 152) = 2;
  return 3;
}

__int64 game_gmap_ProcGmapPhaseSeq_CheckSpotAttachmentAuto_closure_Invoke(
    __int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if ((**(_BYTE**)(result + 16) & 1) == 0) {
    v2 = *a2;
    v3 = result;
    v4 = *(_QWORD*)(result + 8);
    if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(*a2 + 280) + 24LL))(
            *(_QWORD*)(*a2 + 280)) == 1) {
      (*(void (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 112LL))(
          *(_QWORD*)(v2 + 280));
    }
    v5 = *(_QWORD*)(v2 + 280);
    if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v5 + 64LL))(v5) == 1 ||
        (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v5 + 64LL))(v5) == 3 ||
        (unsigned __int8)(result = (*(__int64 (**)(__int64))(*(_QWORD*)v5 +
                                                             64LL))(v5)) == 4) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 48LL))(v5);
      if ((result & 1) != 0) {
        (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v2 + 280) + 88LL))(
            *(_QWORD*)(v2 + 280), v4);
        result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 112LL))(
            *(_QWORD*)(v2 + 280));
        if ((result & 1) != 0) {
          result = *(_QWORD*)(v2 + 280);
          if (result != 0) {
            result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
            *(_QWORD*)(v2 + 280) = 0;
          }
        }
        **(_BYTE**)(v3 + 16) = 1;
      }
    }
  }
  return result;
}

__int64 ProcGmapPhaseSeq_14cbc80(__int64* a1, __int64 a2)
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
  __int64 v13;
  __int64 v14;
  int v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 result;
  unsigned __int8* v22;
  unsigned int v23;
  bool v24;
  int v25;
  _QWORD v27[2];
  _DWORD v28[50];

  v2 = *a1;
  v3 = GameData_212c790;
  if ((*(_BYTE*)(a2 + 418) & 0x10) != 0) {
    v7 = *(_QWORD*)(*GameData_212c790 + 8);
    v28[0] = *(unsigned __int8*)(a2 + 501);
    v8 = *(_QWORD*)(v7 + 32);
    v9 = *(_QWORD*)(v7 + 40);
    *(_DWORD*)(v7 + 56) = v28[0];
    v10 = wmemchr(v8);
    v11 = *(_QWORD*)(v7 + 40);
    v12 = *(_QWORD*)(v7 + 32);
    if (v10 != 0) {
      v9 = v10;
    }
    if (v9 != v11) {
      v13 = v11 - (v9 + 4);
      if (v11 != v9 + 4) {
        memmove(v9, v9 + 4, v11 - (v9 + 4));
        v12 = *(_QWORD*)(v7 + 32);
      }
      *(_QWORD*)(v7 + 40) = v9 + v13;
    }
    TroopMgr_1353fb0(v7 + 32, v12, v28);
    v14 = *(_QWORD*)(*v3 + 8);
    v15 = *(_DWORD*)(v14 + 56);
    v16 = *(__int64**)(v14 + 8);
    if (v15 < 0) {
      while (1) {
        v18 = *v16;
        if (*(_QWORD*)(*v16 + 96) == 0 && *(_QWORD*)(v18 + 552) == 0) {
          break;
        }
        ++v16;
      }
    }
    else {
      v19 = *v16;
      v17 = v16 + 1;
      v18 = v19;
      if (*(_DWORD*)(v19 + 84) != v15) {
        do {
          v20 = *v17++;
          v18 = v20;
        } while (*(_DWORD*)(v20 + 84) != v15);
      }
    }
    UnitActor_81a540_alt1(v18 + 112, 2017201876, GameData_212ceb8);
    *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5844LL) = 1;
    *(_DWORD*)(v2 + 152) = 3;
    snd_Fade_Fade_10c830(v28, 0.0f);
    snd_play_ff2d0((void*)(v27), "SE_SYS_GMAP_Decide_Unit",
                   "SE_SYS_GMAP_Decide_Unit", v28, 0, 65537, 0, 0.0f, 1.0f);
    snd_Fade_Destroy_Fade(v28);
  }
  else {
    v4 = GameData_21f1658;
    v5 = *(_QWORD*)(GameData_21f1658 + 16);
    if (*(_BYTE*)(v5 + 169) == 1) {
      v6 = **(_QWORD**)(*(_QWORD*)(GameData_21f1650 + 8) + 8LL);
      (*(void (**)(__int64))(*(_QWORD*)v6 + 48LL))(v6);
      v4 = GameData_21f1658;
    }
    *(_BYTE*)(v5 + 169) = 0;
    *(_BYTE*)(*(_QWORD*)(v4 + 16) + 170LL) = 1;
    *(_DWORD*)(*(_QWORD*)(*v3 + 8) + 56LL) = -1;
    *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5844LL) = 0;
    snd_Fade_Fade_10c830(v28, 0.0f);
    snd_play_ff2d0((void*)(v27), "SE_SYS_Decide_M", "SE_SYS_Decide_M", v28, 0,
                   65537, 0, 0.0f, 1.0f);
    snd_Fade_Destroy_Fade(v28);
    *(_DWORD*)(v2 + 152) = 6;
  }
  result = TroopMgr_134d2e0(*(_QWORD*)(*v3 + 8));
  v22 = *(unsigned __int8**)(v2 + 16);
  if (v22 != nullptr) {
    v23 = *v22;
    v24 = v23 > 0x10;
    v25 = (1 << v23) & 0x1CE00;
    if (!v24 && v25 != 0) {
      *(_WORD*)(v2 + 136) |= 0x80u;
    }
  }
  return result;
}

bool ProcGmapPhaseSeq_14cbf30()
{
  __int64 v0;
  _BOOL8 result;

  if (*(_BYTE*)(game_g_game_setting + 807) == 1 &&
      ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
       *(_BYTE*)(game_g_game_setting + 940) == 1 &&
           (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
           (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0)) {
  LABEL_9:
    if ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
        *(_BYTE*)(game_g_game_setting + 940) == 1 &&
            *(_BYTE*)(game_g_game_setting + 805) == 1 &&
            (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0) {
      v0 = 764;
      return (*(_BYTE*)(game_g_game_setting + v0) & 0x10) != 0;
    }
  LABEL_14:
    if (*(_BYTE*)(game_g_game_setting + 903) != 1 ||
        (*(_BYTE*)(game_g_game_setting + 900) & 1) == 0 &&
            (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
             *(_BYTE*)(game_g_game_setting + 901) != 1 ||
             *(_BYTE*)(game_g_game_setting + 902) != 1)) {
      return false;
    }
    v0 = 860;
    return (*(_BYTE*)(game_g_game_setting + v0) & 0x10) != 0;
  }
  if (*(_BYTE*)(game_g_game_setting + 903) != 1) {
    return false;
  }
  if ((*(_BYTE*)(game_g_game_setting + 900) & 1) != 0) {
    goto LABEL_8;
  }
  result = false;
  if (*(_BYTE*)(game_g_game_setting + 940) == 1 &&
      (*(_BYTE*)(game_g_game_setting + 901) & 1) != 0) {
    if (*(_BYTE*)(game_g_game_setting + 902) == 1) {
    LABEL_8:
      if (*(_BYTE*)(game_g_game_setting + 807) == 0) {
        goto LABEL_14;
      }
      goto LABEL_9;
    }
    return false;
  }
  return result;
}

__int64 game_gmap_ProcGmapPhaseSeq_FreeCursorTick_closure_Invoke(__int64 result,
                                                                 __int64 a2)
{
  _QWORD* v2;
  __int64* v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = *(_QWORD**)a2;
  if ((*(_WORD*)(*(_QWORD*)a2 + 544LL) & 0x10) == 0 &&
      *v2 == **(_QWORD**)(result + 8)) {
    v3 = *(__int64**)(result + 16);
    v5 = (_QWORD*)v3[1];
    v4 = v3[2];
    if ((unsigned __int64)v5 >= v4) {
      v7 = *v3;
      v8 = (__int64)v5 - *v3;
      v9 = (v8 >> 3) + 1;
      if (v9 >> 61 != 0) {
        GameRoutine_888610(result);
      }
      v10 = v4 - v7;
      v11 = fw_memory_g_heap_manager_ptr;
      if (v10 >> 2 > v9) {
        v9 = v10 >> 2;
      }
      if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
        v12 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v12 = v9;
      }
      if (v12 != 0) {
        if (v12 >> 61 != 0) {
          GameRoutine_60a210(result);
        }
        v13 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
      }
      else {
        v13 = 0;
      }
      v14 = v13 + 8 * v12;
      v15 = v13 + v8 - 8 * (v8 >> 3);
      *(_QWORD*)(v13 + v8) = v2;
      v6 = v13 + v8 + 8;
      result = memcpy(v15, v7, v8);
      *v3 = v15;
      v3[1] = v6;
      v3[2] = v14;
      if (v7 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
          v16 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16, v7);
      }
    }
    else {
      *v5 = v2;
      v6 = (__int64)(v5 + 1);
    }
    v3[1] = v6;
  }
  return result;
}

__int64 game_gmap_ProcGmapPhaseSeq_EndOtherPhase_closure_Invoke(__int64 a1,
                                                                __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16[4];

  v15 = *a2;
  v2 = *(_QWORD*)(*a2 + 96);
  if (v2 == 0) {
    return 0;
  }
  v16[2] = v13;
  v16[3] = v14;
  if (*(_BYTE*)(v2 + 32) != 1) {
    return 0;
  }
  v3 = *(_QWORD*)(v15 + 24);
  v4 = v15;
  if (*(_QWORD*)(v15 + 32) == v3 || (*(_WORD*)(v15 + 544) & 3) == 2 ||
      (*(_BYTE*)(v15 + 546) & 0xEF) != 0) {
    return 0;
  }
  v6 = 0;
  while (1) {
    v7 = *(_QWORD*)(*(_QWORD*)(v3 + 8 * v6) + 120LL);
    v8 = GameRoutine_ae0560_alt1();
    if (v7 == v8) {
      break;
    }
    v3 = *(_QWORD*)(v4 + 24);
    ++v6;
    v9 = *(_QWORD*)(v4 + 32) - v3;
    if (v6 >= v9 >> 3) {
      return (v7 == v8) & (unsigned __int8)v9;
    }
  }
  v10 = v8;
  v16[1] = (unsigned __int64)&GameData_1a964b8;
  v16[0] = game_HashString_alt1((__int64)&GameData_1a964b8);
  v11 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v12 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48), v16);
    if (v12 != 0) {
      v11 = *(_DWORD*)(v12 + 32);
    }
    else {
      v11 = 0;
    }
  }
  v8 = v10;
  LOBYTE(v9) = v11 > (int)v6;
  return (v7 == v8) & (unsigned __int8)v9;
}

__n128 ProcGmapPhaseSeq_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;

  *(_QWORD*)a1 = game_gmap_ProcGmapPhaseSeq_vtable;
  if ((*(_BYTE*)(a1 + 240) & 1) != 0 && *(_QWORD*)(a1 + 256) != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
  }
  v3 = *(_QWORD*)(a1 + 224);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak();
  }
  v4 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_20460e8;
  if (v4 == (_QWORD*)(a1 + 160)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_14;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_14:
  GameData_22506e0 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00((_QWORD*)(a1 + 88));
}

#pragma GCC visibility pop
