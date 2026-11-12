#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1567000(_QWORD, _QWORD);
__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
__int64 GameRoutine_8229c0(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown96(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_2026810;
extern __int64 GameData_22416c0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
extern __int64* GameData_212d728[2];
extern __int64* GameData_212e008[9];
extern __int64* GameData_2130e70;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
void GmapSpotMenu_Unknown95();
__int64 GmapSpotMenu_Unknown96(_QWORD* a1);
__int64 GmapSpotMenu_Unknown133(__int64 a1);
__int64
GmapSpotMenu_Unknown143_alt1(__int64 a1,
                             __int64* a2) __asm__("GmapSpotMenu_Unknown143");
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
extern __int64 (*game_gmap_anonymous_TraderMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager;
__int64 game_gmap_GmapSpotMenu_CreateBind_lambda0_Invoke(__int64 result,
                                                         __int64* a2);
__int64 game_gmap_GmapSpotMenu_CreateBind_lambda1_Invoke(__int64 a1,
                                                         __int64** a2,
                                                         __int64* a3);
__int64 BasicMenu_16dcd30(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CorpsManager_9726e0(_QWORD);
__int64 GameRoutine_133f0c0(_QWORD);
__int64 GameRoutine_14da280(void);
__int64 GameRoutine_16e3a80(_QWORD);
__int64 GameRoutine_714b20(_QWORD);
__int64 GameRoutine_889be0(_QWORD);
__int64 GameRoutine_ae4100(_QWORD, _QWORD, _QWORD);
__int64 GmapSituation_14d7700(void);
__int64 GmapSituation_14d7ae0(void);
__int64 GmapSituation_14d7f60(_QWORD);
__int64 GmapSituation_14d80a0(void);
__int64 GmapSituation_14d8840(void);
__int64 GmapSituation_14d8ae0(void);
__int64 GmapSituation_14d91e0(void);
__int64 GmapSituation_14d9a80(void);
__int64 GmapSituation_14d9ce0(void);
__int64 GmapSituation_14d9ea0(void);
__int64 GmapSituation_14da880(void);
__int64 GmapSituation_14db600(_QWORD);
__int64 Impl_13261c0(_QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_gmap_GmapSituation_CalcBanquet(void);
__int64 game_gmap_GmapSituation_CalcBoostFarm(void);
__int64 game_gmap_GmapSituation_CalcCallAnimal(void);
__int64 game_gmap_GmapSituation_CalcDestroyMiasma(void);
__int64 game_gmap_GmapSituation_CalcDivideCorps(void);
__int64 game_gmap_GmapSituation_CalcExchangeCorps(void);
__int64 game_gmap_GmapSituation_CalcExplore(void);
__int64 game_gmap_GmapSituation_CalcMakeFarm(void);
__int64 game_gmap_GmapSituation_CalcTalk(void);
__int64 game_menu_UnitCommandMenu_SetFirstItemVisibleAndEnable(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strcmp(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212c730;
extern _UNKNOWN GameData_1a86d37;
extern _UNKNOWN GameData_1ad8027;
extern _UNKNOWN GameData_1ade186;
extern __int64 (*GameData_1fb0cb0[])();
extern __int64 (*GameData_20264e8[])();
extern __int64 (*GameData_202b508[])();
extern __int64 (*GameData_202b810[])();
extern __int64 (*game_gmap_BladeResonanceItem_vtable[])();
extern __int64 (*game_gmap_GmapSpotMenu_vtable[])();
extern __int64 (*game_gmap_WarpItem_vtable[])();
extern __int64 (*game_gmap_anonymous_BanquetMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_BoostFarmItem_vtable[])();
extern __int64 (*game_gmap_anonymous_BoostRecruitItem_vtable[])();
extern __int64 (*game_gmap_anonymous_CallAnimalMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_CaptureAnimalMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_CarriageMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_ContinueMoveMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_CorpsCreateItem_vtable[])();
extern __int64 (*game_gmap_anonymous_CorpsDeleteItem_vtable[])();
extern __int64 (*game_gmap_anonymous_CorpsDivideMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_CorpsExchangeMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_DestroyHellGateItem_vtable[])();
extern __int64 (*game_gmap_anonymous_DestroyMiasmaMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_DispatchItem_vtable[])();
extern __int64 (*game_gmap_anonymous_EnterMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_ExploreMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_FacilityMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_FixMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_MakeFarmItem_vtable[])();
extern __int64 (*game_gmap_anonymous_ReDispatchItem_vtable[])();
extern __int64 (*game_gmap_anonymous_ReconstructionMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_RecruitItem_vtable[])();
extern __int64 (*game_gmap_anonymous_ShowItem_vtable[])();
extern __int64 (*game_gmap_anonymous_SideStoryMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_TalkMenuItem_vtable[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212d6a8;
extern __int64 GameData_21316c8;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_game_setting_ptr;
extern __int64 game_gmap_GmapClock_instance_;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64
GmapSpotMenu_131b660_alt1(__int64 result) __asm__("GmapSpotMenu_131b660");
_QWORD* GameRoutine_ae4100_alt1(unsigned __int8, __int64,
                                const char*) __asm__("GameRoutine_ae4100");
_QWORD* game_menu_UnitCommandMenu_SetFirstItemVisibleAndEnable_alt1(
    __int64,
    __int64) __asm__("game_menu_UnitCommandMenu_SetFirstItemVisibleAndEnable");
__int64 BasicMenu_16dcd30_alt1(__int64, __int64, _QWORD*,
                               __int64) __asm__("BasicMenu_16dcd30");
__int64 CorpsManager_9726e0_alt1(__int64) __asm__("CorpsManager_9726e0");
__int64 GameRoutine_14da280_alt1() __asm__("GameRoutine_14da280");
__int64 GameRoutine_16e3a80_alt1(__int64 result, __int64*, __int64, __int64,
                                 char) __asm__("GameRoutine_16e3a80");
__int64 GameRoutine_714b20_alt1(_QWORD*) __asm__("GameRoutine_714b20");
__int64 GameRoutine_889be0_alt1(__int64) __asm__("GameRoutine_889be0");
__int64 GmapSituation_14d7700_alt1() __asm__("GmapSituation_14d7700");
__int64 GmapSituation_14d7ae0_alt1() __asm__("GmapSituation_14d7ae0");
__int64 GmapSituation_14d7f60_alt1() __asm__("GmapSituation_14d7f60");
__int64 GmapSituation_14d80a0_alt1() __asm__("GmapSituation_14d80a0");
__int64 GmapSituation_14d8840_alt1() __asm__("GmapSituation_14d8840");
__int64 GmapSituation_14d8ae0_alt1() __asm__("GmapSituation_14d8ae0");
__int64 GmapSituation_14d91e0_alt1() __asm__("GmapSituation_14d91e0");
__int64 GmapSituation_14d9a80_alt1() __asm__("GmapSituation_14d9a80");
__int64 GmapSituation_14d9ce0_alt1() __asm__("GmapSituation_14d9ce0");
__int64 GmapSituation_14d9ea0_alt1() __asm__("GmapSituation_14d9ea0");
__int64 GmapSituation_14da880_alt1() __asm__("GmapSituation_14da880");
__int64 Impl_13261c0_alt1(__int64) __asm__("Impl_13261c0");
__int64 ProcInst_657850_alt1(__int64, __int64, const char*, char,
                             __int64) __asm__("ProcInst_657850");
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb_alt1(
    __int64 result, char, unsigned __int8,
    unsigned __int8) __asm__("_ZN4game4menu9BasicMenu13Unknown16dea40Ebbb");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_IsVibrationEnabled_alt1(_BYTE*) __asm__("game_IsVibrationEnabled");
__int64 game_gmap_GmapSituation_CalcBanquet_alt1(__int64) __asm__(
    "game_gmap_GmapSituation_CalcBanquet");
__int64 game_gmap_GmapSituation_CalcBoostFarm_alt1() __asm__(
    "game_gmap_GmapSituation_CalcBoostFarm");
__int64 game_gmap_GmapSituation_CalcCallAnimal_alt1() __asm__(
    "game_gmap_GmapSituation_CalcCallAnimal");
__int64 game_gmap_GmapSituation_CalcDestroyMiasma_alt1() __asm__(
    "game_gmap_GmapSituation_CalcDestroyMiasma");
__int64 game_gmap_GmapSituation_CalcDivideCorps_alt1() __asm__(
    "game_gmap_GmapSituation_CalcDivideCorps");
__int64 game_gmap_GmapSituation_CalcExchangeCorps_alt1() __asm__(
    "game_gmap_GmapSituation_CalcExchangeCorps");
__int64 game_gmap_GmapSituation_CalcExplore_alt1() __asm__(
    "game_gmap_GmapSituation_CalcExplore");
__int64 game_gmap_GmapSituation_CalcMakeFarm_alt1() __asm__(
    "game_gmap_GmapSituation_CalcMakeFarm");
__int64 game_gmap_GmapSituation_CalcTalk_alt1() __asm__(
    "game_gmap_GmapSituation_CalcTalk");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
bool GameRoutine_133f0c0_alt1(__int64) __asm__("GameRoutine_133f0c0");
bool GmapSituation_14db600_alt1() __asm__("GmapSituation_14db600");
int strcmp_alt1(const char*, const char*) __asm__("strcmp");
void BasicMenuCursor_16e0c00_alt1(_QWORD*,
                                  __int64) __asm__("BasicMenuCursor_16e0c00");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
_QWORD* GmapSpotMenu_131b660(_QWORD* result);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
__int64 GameHr_1712520(__int64, int, char);
__int64 GameRoutine_17b8e80_alt1(__int64, char) __asm__("GameRoutine_17b8e80");
__int64 GameRoutine_17b8f40_alt1(__int64, char) __asm__("GameRoutine_17b8f40");
__int64 GameRoutine_8229c0_alt1() __asm__("GameRoutine_8229c0");
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1567000(__int64, char);
extern __int64 (*GameData_202b890[])();
extern __int64 game_hub_ProgressEventView_instance_;
__int64 game_gmap_GmapSpotMenu_XCall(__int64 a1);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_874520_alt1() __asm__("GameRoutine_874520");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void GmapSpotMenu_Unknown143(__int64 a1, __int64* a2);

_QWORD* GmapSpotMenu_131b660(_QWORD* result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  int v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64* v16;
  _QWORD* v17;
  __int64 (***v18)();
  __int64* v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64* v30;
  int v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  int v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  bool v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  char v46;
  __int64 v47;
  int v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  const char* v54;
  _QWORD* v55;
  __int64 v56;
  _QWORD* v57;
  __int64 v58;
  __int16 v59;
  __int64 v60;
  __int64 (**v61)();
  int v62;
  __int64 v63;
  _QWORD* v64;
  __int64 v65;
  _QWORD* v66;
  __int64 v67;
  _QWORD* v68;
  __int64 v69;
  __int16 v70;
  __int64 v71;
  __int64 (**v72)();
  int v73;
  __int64 v74;
  _QWORD* v75;
  __int64 v76;
  _QWORD* v77;
  __int64 v78;
  _QWORD* v79;
  __int64 v80;
  _QWORD* v81;
  __int64 v82;
  _QWORD* v83;
  __int64 v84;
  _QWORD* v86;
  __int64 v87;
  _QWORD* v88;
  __int64 v89;
  _QWORD* v90;
  __int64 v91;
  _QWORD* v92;
  __int64 v93;
  _QWORD* v94;
  __int64 v95;
  _QWORD* v96;
  __int64 v97;
  _QWORD* v98;
  __int64 v99;
  __int64 v100;
  __int64* v101;
  __int64* v102;
  int v103;
  __int64 v104;
  __int64 v105;
  int v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  _QWORD* v111;
  __int64 v112;
  _QWORD* v113;
  __int64 v114;
  _QWORD* v115;
  __int64 v116;
  _QWORD* v117;
  __int64 v118;
  _QWORD* v119;
  __int64 v120;
  _QWORD* v121;
  __int64 v122;
  _QWORD* v123;
  __int64 v124;
  __int16 v125;
  _QWORD* v126;
  __int64 v127;
  __int64 v128;
  __int64* v129;
  __int64* v130;
  int v131;
  __int64 v132;
  __int64 v133;
  int v134;
  unsigned __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  const char* v140;
  __int64 v141;
  __int64* v142;
  unsigned __int64 v143;
  __int64 (***v144)();
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  char v149;
  __int64 v150;
  _QWORD* v151;
  __int64 v152;
  __int64 v153;
  unsigned __int64 v154;
  unsigned __int64 v155;
  unsigned __int64 v156;
  const char* v157;
  const char* v158;
  const char* v159;
  _QWORD* v161;
  _QWORD* v162;
  _QWORD* v163;
  const char* v164;
  _QWORD* v165;
  _QWORD* v166;
  __int64 v167;
  _QWORD* v168;
  int v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  struct {
    _QWORD v177[4];
    _QWORD* v178;
  } v177_;
  struct {
    __int64 (**v179)();
    _QWORD** v180;
    char gap64_[16];
    unsigned __int64* v181;
  } v179_;
  _QWORD* v182;

  v1 = (__int64)result;
  v2 = GameData_212c790;
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  v6 = *(__int64**)(v3 + 16);
  if ((v4 & 0x80000000) == 0) {
    while (v5 != v6) {
      v8 = (__int64*)*v5++;
      v7 = v8;
      if (*((_DWORD*)v8 + 21) == v4) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v7 = nullptr;
    goto LABEL_8;
  }
  if (v5 == v6) {
    goto LABEL_7;
  }
  while (1) {
    v7 = (__int64*)*v5;
    if (*(_QWORD*)(*v5 + 96) == 0 && v7[69] == 0) {
      break;
    }
    if (++v5 == v6) {
      goto LABEL_7;
    }
  }
LABEL_8:
  v9 = *((_DWORD*)v7 + 135);
  v10 = __OFSUB__(v9, 1);
  v11 = (unsigned int)(v9 - 1);
  if (((v11 & 0x80000000) != 0LL) == v10) {
    v12 = v7[3];
    v13 = v7[4] - v12;
    v14 = (__int64*)(v12 + 8LL * (unsigned int)v11);
    if (v11 < v13 >> 3) {
      v7 = v14;
    }
  }
  v15 = *v7;
  if (*v7 == 0) {
    return result;
  }
  v16 = (__int64*)fw_memory_g_heap_manager_ptr;
  v17 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1072, 16, 0);
  v179_.v179 = nullptr;
  v179_.v180 = nullptr;
  v18 = &v179_.v179;
  BasicMenu_16dcd30_alt1((__int64)v17, (__int64)"GmapUnitCommand", &v179_.v179,
                         0);
  v19 = GameData_212d6a8;
  v20 = (__int64)v179_.v180;
  *v17 = GameData_212d6a8 + 2;
  v17[22] = v19 + 143;
  v17[132] = v19 + 169;
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak_alt1(v20);
  }
  *v17 = game_gmap_GmapSpotMenu_vtable;
  v17[22] = game_menu_MenuInput_InputUnknown00_ptr;
  v17[132] = GameData_20264e8;
  ProcInst_657850_alt1((__int64)v17, (__int64)GameData_212c730, "GmapSpotMenu",
                       1, v1);
  v179_.v181 = (unsigned __int64*)&v179_.v179;
  v182 = v17;
  v179_.v179 = GameData_202b508;
  v179_.v180 = &v182;
  v21 = *(_QWORD*)(*v2 + 8);
  v22 = *(_QWORD**)(v21 + 8);
  v23 = *(_QWORD**)(v21 + 16);
  if (v22 == v23) {
    goto LABEL_28;
  }
  do {
    if (*(_QWORD*)*v22 == v15) {
      v177_.v177[0] = *v22;
      if (v179_.v181 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(unsigned __int64*, _QWORD*))(*v179_.v181 + 48))(v179_.v181,
                                                                   v177_.v177);
    }
    ++v22;
  } while (v22 != v23);
  v18 = (__int64 (***)(void))v179_.v181;
  if (v179_.v181 == (unsigned __int64*)&v179_.v179) {
  LABEL_28:
    v24 = 4;
  }
  else {
    if (v179_.v181 == nullptr) {
      goto LABEL_30;
    }
    v24 = 5;
  }
  ((void (*)(__int64 (***)(void)))(*v18)[v24])(v18);
LABEL_30:
  v25 = v182;
  v26 = fw_memory_HeapManager_Allocate_alt1(*v16, 96, 16, 0);
  *(_WORD*)(v26 + 16) = 0;
  *(_DWORD*)(v26 + 40) = 0;
  v27 = v26;
  *(_QWORD*)(v26 + 48) = 0;
  *(_QWORD*)(v26 + 56) = 0;
  *(_QWORD*)(v26 + 64) = 0;
  *(_QWORD*)(v26 + 72) = 0;
  *(_WORD*)(v26 + 84) = 0;
  *(_BYTE*)(v26 + 86) = 0;
  *(_QWORD*)(v26 + 88) = 0;
  *(_WORD*)(v26 + 80) = 257;
  *(_BYTE*)(v26 + 82) = 1;
  *(_QWORD*)v26 = game_gmap_anonymous_EnterMenuItem_vtable;
  *(_QWORD*)(v26 + 8) = 0;
  v28 = *(_QWORD*)(*v2 + 8);
  v29 = *(__int64**)(v28 + 8);
  v30 = *(__int64**)(v28 + 16);
  v31 = *(_DWORD*)(v28 + 56);
  if ((v31 & 0x80000000) == 0) {
    if (v29 != v30) {
      v32 = *(__int64**)(v28 + 8);
      do {
        v34 = *v32++;
        v33 = v34;
        if (*(_DWORD*)(v34 + 84) == v31) {
          goto LABEL_43;
        }
      } while (v32 != v30);
    }
  LABEL_42:
    v33 = 0;
    goto LABEL_43;
  }
  if (v29 == v30) {
    goto LABEL_42;
  }
  v35 = *(_QWORD**)(v28 + 8);
  while (1) {
    v33 = *v35;
    if (*(_QWORD*)(*v35 + 96LL) == 0 && *(_QWORD*)(v33 + 552) == 0) {
      break;
    }
    if (++v35 == v30) {
      goto LABEL_42;
    }
  }
LABEL_43:
  v36 = *(_DWORD*)(v33 + 540);
  v10 = __OFSUB__(v36, 1);
  v37 = (unsigned int)(v36 - 1);
  if (((v37 & 0x80000000) != 0LL) == v10) {
    v38 = *(_QWORD*)(v33 + 24);
    v39 = *(_QWORD*)(v33 + 32) - v38;
    v40 = v38 + 8LL * (unsigned int)v37;
    if (v37 < v39 >> 3) {
      v33 = v40;
    }
  }
  v41 = *(_QWORD*)v33;
  if (*(_QWORD*)(*(_QWORD*)v33 + 120LL) == 0) {
    goto LABEL_67;
  }
  if (v29 == v30) {
    v42 = true;
    if ((v31 & 0x80000000) == 0) {
      goto LABEL_49;
    }
  }
  else {
    do {
      v45 = (_QWORD*)*v29;
      if (GameRoutine_133f0c0_alt1(*v29) && v41 == *v45) {
        v46 = 6;
        goto LABEL_66;
      }
      ++v29;
    } while (v29 != v30);
    v47 = *(_QWORD*)(*v2 + 8);
    v31 = *(_DWORD*)(v47 + 56);
    v29 = *(__int64**)(v47 + 8);
    v30 = *(__int64**)(v47 + 16);
    v42 = v29 == v30;
    if ((v31 & 0x80000000) == 0) {
    LABEL_49:
      if (!v42) {
        do {
          v44 = *v29++;
          v43 = v44;
          if (*(_DWORD*)(v44 + 84) == v31) {
            goto LABEL_61;
          }
        } while (v29 != v30);
      }
    LABEL_60:
      v43 = 0;
      goto LABEL_61;
    }
  }
  if (v42) {
    goto LABEL_60;
  }
  while (1) {
    v43 = *v29;
    if (*(_QWORD*)(*v29 + 96) == 0 && *(_QWORD*)(v43 + 552) == 0) {
      break;
    }
    if (++v29 == v30) {
      goto LABEL_60;
    }
  }
LABEL_61:
  v48 = *(_DWORD*)(v43 + 540);
  v10 = __OFSUB__(v48, 1);
  v49 = (unsigned int)(v48 - 1);
  if (((v49 & 0x80000000) != 0LL) == v10) {
    v50 = *(_QWORD*)(v43 + 24);
    v51 = *(_QWORD*)(v43 + 32) - v50;
    v52 = v50 + 8LL * (unsigned int)v49;
    if (v49 < v51 >> 3) {
      v43 = v52;
    }
  }
  v53 = *(_QWORD*)v43;
  v54 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)v27 + 24LL))(v27);
  if (GameRoutine_ae4100_alt1(0, v53, v54) != nullptr) {
  LABEL_65:
    v46 = 2;
  LABEL_66:
    *(_BYTE*)(v27 + 86) = v46;
    goto LABEL_67;
  }
  if (game_GameModeData_instance_ != 0) {
    v146 = *(_QWORD*)(game_GameModeData_instance_ + 24);
    if (v146 != 0 && *(_BYTE*)(v146 + 152) == 6 &&
        *(_QWORD*)(v146 + 168) == *(_QWORD*)(v41 + 120)) {
      v179_.v180 = (_QWORD**)&GameData_1a86d37;
      v179_.v179 =
          (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1a86d37);
      if (game_GameModeData_instance_ == 0 ||
          (v173 = game_GameVariableTable_Find_alt1(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)&v179_.v179)) == 0 ||
          *(_DWORD*)(v173 + 32) == 0) {
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_222;
        }
        v174 = GameRoutine_714b20_alt1((_QWORD*)game_GameModeData_instance_);
        if (v174 == 0) {
          goto LABEL_222;
        }
        v175 = v174;
        while (*(_BYTE*)(v175 + 33) != 18) {
          if ((GameRoutine_889be0_alt1(v175) & 1) != 0 ||
              *(_BYTE*)(v175 + 32) != 0) {
            v175 = *(_QWORD*)(*(_QWORD*)(v175 + 24) + 16LL);
            if (v175 != 0) {
              continue;
            }
          }
          goto LABEL_222;
        }
        if (game_GameModeData_instance_ == 0 ||
            (v176 = *(_QWORD*)(game_GameModeData_instance_ + 24)) == 0 ||
            *(_BYTE*)(v176 + 152) != 6 ||
            *(_QWORD*)(v176 + 168) != *(_QWORD*)(v41 + 120)) {
        LABEL_222:
          v46 = 1;
          goto LABEL_66;
        }
        goto LABEL_65;
      }
    }
  }
  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
    v147 = *(_QWORD*)(v41 + 120);
  }
  else {
    v179_.v180 = (_QWORD**)&GameData_1a86d37;
    v179_.v179 =
        (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1a86d37);
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_67;
    }
    v170 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v179_.v179);
    if (v170 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(v170 + 32) == 0) {
      goto LABEL_67;
    }
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_67;
    }
    v171 = *(_QWORD*)(game_GameModeData_instance_ + 24);
    if (v171 == 0) {
      goto LABEL_67;
    }
    if (*(_BYTE*)(v171 + 152) != 6) {
      goto LABEL_67;
    }
    v172 = *(_QWORD*)(v171 + 168);
    v147 = *(_QWORD*)(v41 + 120);
    if (v172 != v147) {
      goto LABEL_67;
    }
  }
  if (v147 == 0) {
    *(_QWORD*)(v27 + 88) = 0;
    goto LABEL_216;
  }
  v148 = *(_QWORD*)(v147 + 88);
  *(_QWORD*)(v27 + 88) = v148;
  if (v148 != 0) {
    if ((unsigned __int8)Impl_13261c0_alt1(v41) == 0 &&
        ((*(_BYTE*)(v41 + 178) & 4) == 0 || game_GameModeData_instance_ == 0 ||
         *(_DWORD*)(game_GameModeData_instance_ + 60) != 3)) {
      v149 = 3;
      goto LABEL_215;
    }
    if ((unsigned __int8)Impl_13261c0_alt1(v41) == 9 &&
        ((*(_BYTE*)(v41 + 178) & 4) == 0 || game_GameModeData_instance_ == 0 ||
         *(_DWORD*)(game_GameModeData_instance_ + 60) != 3)) {
      v149 = 4;
      goto LABEL_215;
    }
    if ((unsigned __int8)Impl_13261c0_alt1(v41) == 2 &&
        ((*(_BYTE*)(v41 + 178) & 4) == 0 || game_GameModeData_instance_ == 0 ||
         *(_DWORD*)(game_GameModeData_instance_ + 60) != 3)) {
      v149 = 5;
    LABEL_215:
      *(_BYTE*)(v27 + 86) = v149;
    }
  }
LABEL_216:
  if (GmapSituation_14db600_alt1()) {
    v46 = 7;
    goto LABEL_66;
  }
LABEL_67:
  BasicMenuCursor_16e0c00_alt1(v25, v27);
  v55 = v182;
  v56 = fw_memory_HeapManager_Allocate_alt1(*v16, 88, 16, 0);
  *(_QWORD*)(v56 + 72) = 0;
  *(_QWORD*)(v56 + 80) = 0;
  *(_QWORD*)(v56 + 16) = 0;
  *(_QWORD*)(v56 + 24) = 0;
  *(_QWORD*)(v56 + 32) = 0;
  *(_QWORD*)(v56 + 40) = 0;
  *(_QWORD*)(v56 + 48) = 0;
  *(_QWORD*)(v56 + 56) = 0;
  *(_QWORD*)(v56 + 64) = 0;
  *(_WORD*)(v56 + 80) = 257;
  *(_BYTE*)(v56 + 82) = 1;
  *(_QWORD*)v56 = game_gmap_anonymous_SideStoryMenuItem_vtable;
  *(_QWORD*)(v56 + 8) = 0;
  BasicMenuCursor_16e0c00_alt1(v55, v56);
  v57 = v182;
  v58 = fw_memory_HeapManager_Allocate_alt1(*v16, 96, 16, 0);
  *(_WORD*)(v58 + 16) = 0;
  *(_DWORD*)(v58 + 40) = 0;
  *(_QWORD*)(v58 + 48) = 0;
  *(_QWORD*)(v58 + 56) = 0;
  *(_QWORD*)(v58 + 64) = 0;
  *(_QWORD*)(v58 + 72) = 0;
  *(_WORD*)(v58 + 80) = 257;
  *(_BYTE*)(v58 + 82) = 1;
  *(_WORD*)(v58 + 84) = 0;
  *(_QWORD*)v58 = game_gmap_anonymous_CorpsCreateItem_vtable;
  *(_QWORD*)(v58 + 8) = 0;
  v59 = GmapSituation_14d7f60_alt1();
  LODWORD(v177_.v177[0]) = 0;
  *(_WORD*)(v58 + 84) = v59;
  v179_.v181 = (unsigned __int64*)&v179_.v179;
  v179_.v179 = GameData_1fb0cb0;
  v179_.v180 = (_QWORD**)v177_.v177;
  CorpsManager_9726e0_alt1((__int64)&v179_.v179);
  if (v179_.v181 == (unsigned __int64*)&v179_.v179) {
    v60 = 32;
  }
  else {
    if (v179_.v181 == nullptr) {
      goto LABEL_76;
    }
    v60 = 40;
  }
  (*(void (**)(__int64))(*v179_.v181 + v60))((__int64)v179_.v181);
LABEL_76:
  v179_.v180 = (_QWORD**)&GameData_1ade186;
  *(_DWORD*)(v58 + 88) =
      ((v177_.v177[0] & 2) != 0) + (v177_.v177[0] & 1) +
      ((v177_.v177[0] & 4) != 0) + ((v177_.v177[0] & 8) != 0) +
      ((v177_.v177[0] & 0x10) != 0) + ((v177_.v177[0] & 0x20) != 0) +
      ((v177_.v177[0] & 0x40) != 0) + ((v177_.v177[0] & 0x80) != 0) +
      ((v177_.v177[0] & 0x100) != 0);
  v61 = (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1ade186);
  v62 = game_GameModeData_instance_;
  v179_.v179 = v61;
  if (game_GameModeData_instance_ != 0) {
    v63 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v179_.v179);
    if (v63 != 0) {
      v62 = *(_DWORD*)(v63 + 32);
    }
    else {
      v62 = 0;
    }
  }
  *(_DWORD*)(v58 + 92) = v62;
  BasicMenuCursor_16e0c00_alt1(v57, v58);
  v64 = v182;
  v65 = fw_memory_HeapManager_Allocate_alt1(*v16, 88, 16, 0);
  *(_WORD*)(v65 + 16) = 0;
  *(_DWORD*)(v65 + 40) = 0;
  *(_QWORD*)(v65 + 48) = 0;
  *(_QWORD*)(v65 + 56) = 0;
  *(_QWORD*)(v65 + 64) = 0;
  *(_QWORD*)(v65 + 72) = 0;
  *(_WORD*)(v65 + 84) = 0;
  *(_WORD*)(v65 + 80) = 257;
  *(_BYTE*)(v65 + 82) = 1;
  *(_QWORD*)v65 = game_gmap_anonymous_CorpsDeleteItem_vtable;
  *(_QWORD*)(v65 + 8) = 0;
  *(_WORD*)(v65 + 84) = GmapSituation_14d80a0_alt1();
  BasicMenuCursor_16e0c00_alt1(v64, v65);
  v66 = v182;
  v67 = fw_memory_HeapManager_Allocate_alt1(*v16, 88, 16, 0);
  *(_WORD*)(v67 + 16) = 0;
  *(_DWORD*)(v67 + 40) = 0;
  *(_QWORD*)(v67 + 48) = 0;
  *(_QWORD*)(v67 + 56) = 0;
  *(_QWORD*)(v67 + 64) = 0;
  *(_QWORD*)(v67 + 72) = 0;
  *(_WORD*)(v67 + 80) = 257;
  *(_BYTE*)(v67 + 82) = 1;
  *(_WORD*)(v67 + 84) = 0;
  *(_QWORD*)v67 = game_gmap_anonymous_CorpsExchangeMenuItem_vtable;
  *(_QWORD*)(v67 + 8) = 0;
  *(_WORD*)(v67 + 84) = game_gmap_GmapSituation_CalcExchangeCorps_alt1();
  BasicMenuCursor_16e0c00_alt1(v66, v67);
  v68 = v182;
  v69 = fw_memory_HeapManager_Allocate_alt1(*v16, 96, 16, 0);
  *(_WORD*)(v69 + 16) = 0;
  *(_DWORD*)(v69 + 40) = 0;
  *(_QWORD*)(v69 + 48) = 0;
  *(_QWORD*)(v69 + 56) = 0;
  *(_QWORD*)(v69 + 64) = 0;
  *(_QWORD*)(v69 + 72) = 0;
  *(_WORD*)(v69 + 80) = 257;
  *(_BYTE*)(v69 + 82) = 1;
  *(_WORD*)(v69 + 84) = 0;
  *(_QWORD*)v69 = game_gmap_anonymous_CorpsDivideMenuItem_vtable;
  *(_QWORD*)(v69 + 8) = 0;
  v70 = game_gmap_GmapSituation_CalcDivideCorps_alt1();
  LODWORD(v177_.v177[0]) = 0;
  *(_WORD*)(v69 + 84) = v70;
  v179_.v179 = GameData_1fb0cb0;
  v179_.v180 = (_QWORD**)v177_.v177;
  v179_.v181 = (unsigned __int64*)&v179_.v179;
  CorpsManager_9726e0_alt1((__int64)&v179_.v179);
  if (v179_.v181 == (unsigned __int64*)&v179_.v179) {
    v71 = 32;
  }
  else {
    if (v179_.v181 == nullptr) {
      goto LABEL_85;
    }
    v71 = 40;
  }
  (*(void (**)(__int64))(*v179_.v181 + v71))((__int64)v179_.v181);
LABEL_85:
  v179_.v180 = (_QWORD**)&GameData_1ade186;
  *(_DWORD*)(v69 + 88) =
      ((v177_.v177[0] & 2) != 0) + (v177_.v177[0] & 1) +
      ((v177_.v177[0] & 4) != 0) + ((v177_.v177[0] & 8) != 0) +
      ((v177_.v177[0] & 0x10) != 0) + ((v177_.v177[0] & 0x20) != 0) +
      ((v177_.v177[0] & 0x40) != 0) + ((v177_.v177[0] & 0x80) != 0) +
      ((v177_.v177[0] & 0x100) != 0);
  v72 = (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1ade186);
  v73 = game_GameModeData_instance_;
  v179_.v179 = v72;
  if (game_GameModeData_instance_ != 0) {
    v74 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v179_.v179);
    if (v74 != 0) {
      v73 = *(_DWORD*)(v74 + 32);
    }
    else {
      v73 = 0;
    }
  }
  *(_DWORD*)(v69 + 92) = v73;
  BasicMenuCursor_16e0c00_alt1(v68, v69);
  v75 = v182;
  v76 = fw_memory_HeapManager_Allocate_alt1(*v16, 88, 16, 0);
  *(_WORD*)(v76 + 16) = 0;
  *(_DWORD*)(v76 + 40) = 0;
  *(_QWORD*)(v76 + 48) = 0;
  *(_QWORD*)(v76 + 56) = 0;
  *(_QWORD*)(v76 + 64) = 0;
  *(_QWORD*)(v76 + 72) = 0;
  *(_WORD*)(v76 + 84) = 0;
  *(_WORD*)(v76 + 80) = 257;
  *(_BYTE*)(v76 + 82) = 1;
  *(_QWORD*)v76 = game_gmap_anonymous_DestroyMiasmaMenuItem_vtable;
  *(_QWORD*)(v76 + 8) = 0;
  *(_WORD*)(v76 + 84) = game_gmap_GmapSituation_CalcDestroyMiasma_alt1();
  BasicMenuCursor_16e0c00_alt1(v75, v76);
  v77 = v182;
  v78 = fw_memory_HeapManager_Allocate_alt1(*v16, 88, 16, 0);
  *(_WORD*)(v78 + 16) = 0;
  *(_DWORD*)(v78 + 40) = 0;
  *(_QWORD*)(v78 + 48) = 0;
  *(_QWORD*)(v78 + 56) = 0;
  *(_QWORD*)(v78 + 64) = 0;
  *(_QWORD*)(v78 + 72) = 0;
  *(_WORD*)(v78 + 80) = 257;
  *(_BYTE*)(v78 + 82) = 1;
  *(_WORD*)(v78 + 84) = 0;
  *(_QWORD*)v78 = game_gmap_anonymous_ReconstructionMenuItem_vtable;
  *(_QWORD*)(v78 + 8) = 0;
  *(_WORD*)(v78 + 84) = GmapSituation_14d7ae0_alt1();
  BasicMenuCursor_16e0c00_alt1(v77, v78);
  v79 = v182;
  v80 = fw_memory_HeapManager_Allocate_alt1(*v16, 88, 16, 0);
  *(_WORD*)(v80 + 16) = 0;
  *(_DWORD*)(v80 + 40) = 0;
  *(_QWORD*)(v80 + 48) = 0;
  *(_QWORD*)(v80 + 56) = 0;
  *(_QWORD*)(v80 + 64) = 0;
  *(_QWORD*)(v80 + 72) = 0;
  *(_WORD*)(v80 + 80) = 257;
  *(_BYTE*)(v80 + 82) = 1;
  *(_WORD*)(v80 + 84) = 0;
  *(_QWORD*)v80 = game_gmap_anonymous_FacilityMenuItem_vtable;
  *(_QWORD*)(v80 + 8) = 0;
  *(_WORD*)(v80 + 84) = GmapSituation_14d8840_alt1();
  BasicMenuCursor_16e0c00_alt1(v79, v80);
  v81 = v182;
  v82 = fw_memory_HeapManager_Allocate_alt1(*v16, 88, 16, 0);
  *(_WORD*)(v82 + 16) = 0;
  *(_DWORD*)(v82 + 40) = 0;
  *(_QWORD*)(v82 + 48) = 0;
  *(_QWORD*)(v82 + 56) = 0;
  *(_QWORD*)(v82 + 64) = 0;
  *(_QWORD*)(v82 + 72) = 0;
  *(_WORD*)(v82 + 80) = 257;
  *(_BYTE*)(v82 + 82) = 1;
  *(_WORD*)(v82 + 84) = 0;
  *(_QWORD*)v82 = game_gmap_anonymous_ExploreMenuItem_vtable;
  *(_QWORD*)(v82 + 8) = 0;
  *(_WORD*)(v82 + 84) = game_gmap_GmapSituation_CalcExplore_alt1();
  BasicMenuCursor_16e0c00_alt1(v81, v82);
  v83 = v182;
  v84 = fw_memory_HeapManager_Allocate_alt1(*v16, 88, 16, 0);
  *(_WORD*)(v84 + 16) = 0;
  *(_DWORD*)(v84 + 40) = 0;
  *(_QWORD*)(v84 + 48) = 0;
  *(_QWORD*)(v84 + 56) = 0;
  *(_QWORD*)(v84 + 64) = 0;
  *(_QWORD*)(v84 + 72) = 0;
  *(_WORD*)(v84 + 80) = 257;
  *(_BYTE*)(v84 + 82) = 1;
  *(_WORD*)(v84 + 84) = 0;
  *(_QWORD*)v84 = game_gmap_anonymous_BanquetMenuItem_vtable;
  *(_QWORD*)(v84 + 8) = 0;
  *(_WORD*)(v84 + 84) = game_gmap_GmapSituation_CalcBanquet_alt1(v84);
  BasicMenuCursor_16e0c00_alt1(v83, v84);
  v86 = v182;
  v87 = fw_memory_HeapManager_Allocate_alt1(*v16, 88, 16, 0);
  *(_WORD*)(v87 + 16) = 0;
  *(_DWORD*)(v87 + 40) = 0;
  *(_QWORD*)(v87 + 48) = 0;
  *(_QWORD*)(v87 + 56) = 0;
  *(_QWORD*)(v87 + 64) = 0;
  *(_QWORD*)(v87 + 72) = 0;
  *(_WORD*)(v87 + 80) = 257;
  *(_BYTE*)(v87 + 82) = 1;
  *(_WORD*)(v87 + 84) = 0;
  *(_QWORD*)v87 = game_gmap_anonymous_CarriageMenuItem_vtable;
  *(_QWORD*)(v87 + 8) = 0;
  *(_WORD*)(v87 + 84) = GmapSituation_14d7700_alt1();
  BasicMenuCursor_16e0c00_alt1(v86, v87);
  v88 = v182;
  v89 = fw_memory_HeapManager_Allocate_alt1(*v16, 88, 16, 0);
  *(_WORD*)(v89 + 16) = 0;
  *(_DWORD*)(v89 + 40) = 0;
  *(_QWORD*)(v89 + 48) = 0;
  *(_QWORD*)(v89 + 56) = 0;
  *(_QWORD*)(v89 + 64) = 0;
  *(_QWORD*)(v89 + 72) = 0;
  *(_WORD*)(v89 + 80) = 257;
  *(_BYTE*)(v89 + 82) = 1;
  *(_WORD*)(v89 + 84) = 0;
  *(_QWORD*)v89 = game_gmap_anonymous_TalkMenuItem_vtable;
  *(_QWORD*)(v89 + 8) = 0;
  *(_WORD*)(v89 + 84) = game_gmap_GmapSituation_CalcTalk_alt1();
  BasicMenuCursor_16e0c00_alt1(v88, v89);
  v90 = v182;
  v91 = fw_memory_HeapManager_Allocate_alt1(*v16, 88, 16, 0);
  *(_WORD*)(v91 + 16) = 0;
  *(_DWORD*)(v91 + 40) = 0;
  *(_QWORD*)(v91 + 48) = 0;
  *(_QWORD*)(v91 + 56) = 0;
  *(_QWORD*)(v91 + 64) = 0;
  *(_QWORD*)(v91 + 72) = 0;
  *(_WORD*)(v91 + 80) = 257;
  *(_BYTE*)(v91 + 82) = 1;
  *(_WORD*)(v91 + 84) = 0;
  *(_QWORD*)v91 = game_gmap_anonymous_CallAnimalMenuItem_vtable;
  *(_QWORD*)(v91 + 8) = 0;
  *(_WORD*)(v91 + 84) = game_gmap_GmapSituation_CalcCallAnimal_alt1();
  BasicMenuCursor_16e0c00_alt1(v90, v91);
  v92 = v182;
  v93 = fw_memory_HeapManager_Allocate_alt1(*v16, 88, 16, 0);
  *(_WORD*)(v93 + 16) = 0;
  *(_DWORD*)(v93 + 40) = 0;
  *(_QWORD*)(v93 + 48) = 0;
  *(_QWORD*)(v93 + 56) = 0;
  *(_QWORD*)(v93 + 64) = 0;
  *(_QWORD*)(v93 + 72) = 0;
  *(_WORD*)(v93 + 80) = 257;
  *(_BYTE*)(v93 + 82) = 1;
  *(_WORD*)(v93 + 84) = 0;
  *(_QWORD*)v93 = game_gmap_anonymous_CaptureAnimalMenuItem_vtable;
  *(_QWORD*)(v93 + 8) = 0;
  *(_WORD*)(v93 + 84) = GmapSituation_14d91e0_alt1();
  BasicMenuCursor_16e0c00_alt1(v92, v93);
  v94 = v182;
  v95 = fw_memory_HeapManager_Allocate_alt1(*v16, 88, 16, 0);
  *(_WORD*)(v95 + 16) = 0;
  *(_DWORD*)(v95 + 40) = 0;
  *(_QWORD*)(v95 + 48) = 0;
  *(_QWORD*)(v95 + 56) = 0;
  *(_QWORD*)(v95 + 64) = 0;
  *(_QWORD*)(v95 + 72) = 0;
  *(_WORD*)(v95 + 80) = 257;
  *(_BYTE*)(v95 + 82) = 1;
  *(_WORD*)(v95 + 84) = 0;
  *(_QWORD*)v95 = game_gmap_anonymous_MakeFarmItem_vtable;
  *(_QWORD*)(v95 + 8) = 0;
  *(_WORD*)(v95 + 84) = game_gmap_GmapSituation_CalcMakeFarm_alt1();
  BasicMenuCursor_16e0c00_alt1(v94, v95);
  v96 = v182;
  v97 = fw_memory_HeapManager_Allocate_alt1(*v16, 88, 16, 0);
  *(_WORD*)(v97 + 16) = 0;
  *(_DWORD*)(v97 + 40) = 0;
  *(_QWORD*)(v97 + 48) = 0;
  *(_QWORD*)(v97 + 56) = 0;
  *(_QWORD*)(v97 + 64) = 0;
  *(_QWORD*)(v97 + 72) = 0;
  *(_WORD*)(v97 + 80) = 257;
  *(_BYTE*)(v97 + 82) = 1;
  *(_WORD*)(v97 + 84) = 0;
  *(_QWORD*)v97 = game_gmap_anonymous_ShowItem_vtable;
  *(_QWORD*)(v97 + 8) = 0;
  *(_WORD*)(v97 + 84) = GameRoutine_14da280_alt1();
  BasicMenuCursor_16e0c00_alt1(v96, v97);
  v98 = v182;
  v99 = fw_memory_HeapManager_Allocate_alt1(*v16, 88, 16, 0);
  *(_WORD*)(v99 + 16) = 0;
  *(_DWORD*)(v99 + 40) = 0;
  *(_QWORD*)(v99 + 48) = 0;
  *(_QWORD*)(v99 + 56) = 0;
  *(_QWORD*)(v99 + 64) = 0;
  *(_QWORD*)(v99 + 72) = 0;
  *(_WORD*)(v99 + 80) = 257;
  *(_BYTE*)(v99 + 82) = 1;
  *(_WORD*)(v99 + 84) = 0;
  *(_BYTE*)(v99 + 86) = 0;
  *(_QWORD*)v99 = game_gmap_anonymous_RecruitItem_vtable;
  *(_QWORD*)(v99 + 8) = 0;
  *(_WORD*)(v99 + 84) = GmapSituation_14d9a80_alt1();
  v100 = *(_QWORD*)(*v2 + 8);
  v101 = *(__int64**)(v100 + 8);
  v102 = *(__int64**)(v100 + 16);
  v103 = *(_DWORD*)(v100 + 56);
  if ((v103 & 0x80000000) == 0) {
    while (v101 != v102) {
      v105 = *v101++;
      v104 = v105;
      if (*(_DWORD*)(v105 + 84) == v103) {
        goto LABEL_96;
      }
    }
  LABEL_95:
    v104 = 0;
    goto LABEL_96;
  }
  if (v101 == v102) {
    goto LABEL_95;
  }
  while (1) {
    v104 = *v101;
    if (*(_QWORD*)(*v101 + 96) == 0 && *(_QWORD*)(v104 + 552) == 0) {
      break;
    }
    if (++v101 == v102) {
      goto LABEL_95;
    }
  }
LABEL_96:
  v106 = *(_DWORD*)(v104 + 540);
  v10 = __OFSUB__(v106, 1);
  v107 = (unsigned int)(v106 - 1);
  if (((v107 & 0x80000000) != 0LL) == v10) {
    v108 = *(_QWORD*)(v104 + 24);
    v109 = *(_QWORD*)(v104 + 32) - v108;
    v110 = v108 + 8LL * (unsigned int)v107;
    if (v107 < v109 >> 3) {
      v104 = v110;
    }
  }
  *(_BYTE*)(v99 + 86) = *(_BYTE*)(*(_QWORD*)v104 + 116LL);
  BasicMenuCursor_16e0c00_alt1(v98, v99);
  v111 = v182;
  v112 = fw_memory_HeapManager_Allocate_alt1(*v16, 88, 16, 0);
  *(_WORD*)(v112 + 16) = 0;
  *(_DWORD*)(v112 + 40) = 0;
  *(_QWORD*)(v112 + 48) = 0;
  *(_QWORD*)(v112 + 56) = 0;
  *(_QWORD*)(v112 + 64) = 0;
  *(_QWORD*)(v112 + 72) = 0;
  *(_WORD*)(v112 + 84) = 0;
  *(_WORD*)(v112 + 80) = 257;
  *(_BYTE*)(v112 + 82) = 1;
  *(_QWORD*)v112 = game_gmap_anonymous_DispatchItem_vtable;
  *(_QWORD*)(v112 + 8) = 0;
  *(_WORD*)(v112 + 84) = GmapSituation_14d9ea0_alt1();
  BasicMenuCursor_16e0c00_alt1(v111, v112);
  v113 = v182;
  v114 = fw_memory_HeapManager_Allocate_alt1(*v16, 88, 16, 0);
  *(_WORD*)(v114 + 16) = 0;
  *(_DWORD*)(v114 + 40) = 0;
  *(_QWORD*)(v114 + 48) = 0;
  *(_QWORD*)(v114 + 56) = 0;
  *(_QWORD*)(v114 + 64) = 0;
  *(_QWORD*)(v114 + 72) = 0;
  *(_WORD*)(v114 + 80) = 257;
  *(_BYTE*)(v114 + 82) = 1;
  *(_WORD*)(v114 + 84) = 0;
  *(_QWORD*)v114 = game_gmap_anonymous_ReDispatchItem_vtable;
  *(_QWORD*)(v114 + 8) = 0;
  *(_WORD*)(v114 + 84) = GmapSituation_14d9ea0_alt1();
  BasicMenuCursor_16e0c00_alt1(v113, v114);
  v115 = v182;
  v116 = fw_memory_HeapManager_Allocate_alt1(*v16, 88, 16, 0);
  *(_WORD*)(v116 + 16) = 0;
  *(_DWORD*)(v116 + 40) = 0;
  *(_QWORD*)(v116 + 48) = 0;
  *(_QWORD*)(v116 + 56) = 0;
  *(_QWORD*)(v116 + 64) = 0;
  *(_QWORD*)(v116 + 72) = 0;
  *(_WORD*)(v116 + 80) = 257;
  *(_BYTE*)(v116 + 82) = 1;
  *(_WORD*)(v116 + 84) = 0;
  *(_QWORD*)v116 = game_gmap_BladeResonanceItem_vtable;
  *(_QWORD*)(v116 + 8) = 0;
  *(_WORD*)(v116 + 84) = GmapSituation_14da880_alt1();
  BasicMenuCursor_16e0c00_alt1(v115, v116);
  v117 = v182;
  v118 = fw_memory_HeapManager_Allocate_alt1(*v16, 88, 16, 0);
  *(_WORD*)(v118 + 16) = 0;
  *(_DWORD*)(v118 + 40) = 0;
  *(_QWORD*)(v118 + 48) = 0;
  *(_QWORD*)(v118 + 56) = 0;
  *(_QWORD*)(v118 + 64) = 0;
  *(_QWORD*)(v118 + 72) = 0;
  *(_WORD*)(v118 + 80) = 257;
  *(_BYTE*)(v118 + 82) = 1;
  *(_WORD*)(v118 + 84) = 0;
  *(_QWORD*)v118 = game_gmap_anonymous_BoostFarmItem_vtable;
  *(_QWORD*)(v118 + 8) = 0;
  *(_WORD*)(v118 + 84) = game_gmap_GmapSituation_CalcBoostFarm_alt1();
  BasicMenuCursor_16e0c00_alt1(v117, v118);
  v119 = v182;
  v120 = fw_memory_HeapManager_Allocate_alt1(*v16, 88, 16, 0);
  *(_WORD*)(v120 + 16) = 0;
  *(_DWORD*)(v120 + 40) = 0;
  *(_QWORD*)(v120 + 48) = 0;
  *(_QWORD*)(v120 + 56) = 0;
  *(_QWORD*)(v120 + 64) = 0;
  *(_QWORD*)(v120 + 72) = 0;
  *(_WORD*)(v120 + 80) = 257;
  *(_BYTE*)(v120 + 82) = 1;
  *(_WORD*)(v120 + 84) = 0;
  *(_QWORD*)v120 = game_gmap_anonymous_BoostRecruitItem_vtable;
  *(_QWORD*)(v120 + 8) = 0;
  *(_WORD*)(v120 + 84) = GmapSituation_14d9ce0_alt1();
  BasicMenuCursor_16e0c00_alt1(v119, v120);
  v121 = v182;
  v122 = fw_memory_HeapManager_Allocate_alt1(*v16, 88, 16, 0);
  *(_QWORD*)(v122 + 72) = 0;
  *(_QWORD*)(v122 + 80) = 0;
  *(_QWORD*)(v122 + 16) = 0;
  *(_QWORD*)(v122 + 24) = 0;
  *(_QWORD*)(v122 + 32) = 0;
  *(_QWORD*)(v122 + 40) = 0;
  *(_QWORD*)(v122 + 48) = 0;
  *(_QWORD*)(v122 + 56) = 0;
  *(_QWORD*)(v122 + 64) = 0;
  *(_WORD*)(v122 + 80) = 257;
  *(_BYTE*)(v122 + 82) = 1;
  *(_QWORD*)v122 = game_gmap_anonymous_DestroyHellGateItem_vtable;
  *(_QWORD*)(v122 + 8) = 0;
  BasicMenuCursor_16e0c00_alt1(v121, v122);
  v123 = v182;
  v124 = fw_memory_HeapManager_Allocate_alt1(*v16, 88, 16, 0);
  *(_WORD*)(v124 + 16) = 0;
  *(_DWORD*)(v124 + 40) = 0;
  *(_QWORD*)(v124 + 48) = 0;
  *(_QWORD*)(v124 + 56) = 0;
  *(_QWORD*)(v124 + 64) = 0;
  *(_QWORD*)(v124 + 72) = 0;
  *(_WORD*)(v124 + 80) = 257;
  *(_BYTE*)(v124 + 82) = 1;
  *(_WORD*)(v124 + 84) = 0;
  *(_QWORD*)v124 = game_gmap_anonymous_ContinueMoveMenuItem_vtable;
  *(_QWORD*)(v124 + 8) = 0;
  game_HashString_alt1((__int64)&GameData_1ad8027);
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
    v125 = 0x4000;
    if (*(_BYTE*)(*GameData_2130e70 + 58) == 1) {
      if (*(_BYTE*)(*GameData_2130e70 + 52) != 0) {
        v125 = 0x4000;
      }
      else {
        v125 = 0;
      }
    }
  }
  else {
    v125 = 0x4000;
  }
  *(_WORD*)(v124 + 84) = v125;
  BasicMenuCursor_16e0c00_alt1(v123, v124);
  v126 = v182;
  v127 = fw_memory_HeapManager_Allocate_alt1(*v16, 88, 16, 0);
  *(_WORD*)(v127 + 16) = 0;
  *(_DWORD*)(v127 + 40) = 0;
  *(_QWORD*)(v127 + 48) = 0;
  *(_QWORD*)(v127 + 56) = 0;
  *(_QWORD*)(v127 + 64) = 0;
  *(_QWORD*)(v127 + 72) = 0;
  *(_WORD*)(v127 + 80) = 257;
  *(_BYTE*)(v127 + 82) = 1;
  *(_QWORD*)v127 = game_gmap_WarpItem_vtable;
  *(_QWORD*)(v127 + 8) = 0;
  *(_WORD*)(v127 + 84) = GmapSituation_14d8ae0_alt1();
  v128 = *(_QWORD*)(*v2 + 8);
  v129 = *(__int64**)(v128 + 8);
  v130 = *(__int64**)(v128 + 16);
  v131 = *(_DWORD*)(v128 + 56);
  if ((v131 & 0x80000000) == 0) {
    while (v129 != v130) {
      v133 = *v129++;
      v132 = v133;
      if (*(_DWORD*)(v133 + 84) == v131) {
        goto LABEL_117;
      }
    }
  LABEL_116:
    v132 = 0;
    goto LABEL_117;
  }
  if (v129 == v130) {
    goto LABEL_116;
  }
  while (1) {
    v132 = *v129;
    if (*(_QWORD*)(*v129 + 96) == 0 && *(_QWORD*)(v132 + 552) == 0) {
      break;
    }
    if (++v129 == v130) {
      goto LABEL_116;
    }
  }
LABEL_117:
  v134 = *(_DWORD*)(v132 + 540);
  v10 = __OFSUB__(v134, 1);
  v135 = (unsigned int)(v134 - 1);
  if (((v135 & 0x80000000) != 0LL) == v10) {
    v136 = *(_QWORD*)(v132 + 24);
    v137 = *(_QWORD*)(v132 + 32) - v136;
    v138 = v136 + 8LL * (unsigned int)v135;
    if (v135 < v137 >> 3) {
      v132 = v138;
    }
  }
  v139 = *(_QWORD*)v132;
  v140 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)v127 + 24LL))(v127);
  if (GameRoutine_ae4100_alt1(0, v139, v140) != nullptr) {
    *(_WORD*)(v127 + 84) = 0;
  }
  BasicMenuCursor_16e0c00_alt1(v126, v127);
  v177_.v177[0] = GameData_202b810;
  v177_.v178 = v177_.v177;
  v141 = v182[29];
  v142 = (__int64*)v182[30];
  v143 = ((__int64)v142 - v141) >> 3;
  if (v143 >= 2) {
    v179_.v179 = GameData_202b810;
    v179_.v181 = (unsigned __int64*)&v179_.v179;
    if ((__int64*)v141 == v142) {
      v145 = 4;
      v144 = &v179_.v179;
    }
    else {
      GameRoutine_16e3a80_alt1(v141, v142, (__int64)&v179_.v179,
                               (2 * __clz(v143)) ^ 0x7E, 1);
      v144 = (__int64 (***)(void))v179_.v181;
      if (v179_.v181 == (unsigned __int64*)&v179_.v179) {
        v145 = 4;
      }
      else {
        if (v179_.v181 == nullptr) {
          goto LABEL_153;
        }
        v145 = 5;
      }
    }
    ((void (*)(__int64 (***)(void)))(*v144)[v145])(v144);
  }
LABEL_153:
  if (v177_.v178 == v177_.v177) {
    v150 = 32;
    goto LABEL_157;
  }
  if (v177_.v178 != nullptr) {
    v150 = 40;
  LABEL_157:
    (*(void (**)(_QWORD*))(*v177_.v178 + v150))(v177_.v178);
  }
  v151 = v182;
  v152 = fw_memory_HeapManager_Allocate_alt1(*v16, 88, 16, 0);
  *(_QWORD*)(v152 + 72) = 0;
  *(_QWORD*)(v152 + 80) = 0;
  *(_QWORD*)(v152 + 16) = 0;
  *(_QWORD*)(v152 + 24) = 0;
  *(_QWORD*)(v152 + 32) = 0;
  *(_QWORD*)(v152 + 40) = 0;
  *(_QWORD*)(v152 + 48) = 0;
  *(_QWORD*)(v152 + 56) = 0;
  *(_QWORD*)(v152 + 64) = 0;
  *(_WORD*)(v152 + 80) = 257;
  *(_BYTE*)(v152 + 82) = 1;
  *(_QWORD*)v152 = game_gmap_anonymous_FixMenuItem_vtable;
  *(_QWORD*)(v152 + 8) = 0;
  BasicMenuCursor_16e0c00_alt1(v151, v152);
  v153 = *(_QWORD*)GameData_21316c8;
  if (*(_QWORD*)GameData_21316c8 != 0) {
    v154 = *(unsigned __int8*)(v153 + 240);
    result = v182;
    v155 = v154 >> 1;
    v42 = (v154 & 1) == 0;
    v156 = *(_QWORD*)(v153 + 248);
    v157 = *(const char**)(v153 + 256);
    v158 = (const char*)(v153 + 241);
    if (v42) {
      v156 = v155;
      v159 = v158;
    }
    else {
      v159 = v157;
    }
    if (v156 != 0 && v159 != nullptr) {
      v161 = (_QWORD*)v182[29];
      v162 = (_QWORD*)v182[30];
      if (v161 != v162) {
        v163 = nullptr;
        do {
          v165 = (_QWORD*)*v161;
          if ((*(__int64 (**)(_QWORD))(*(_QWORD*)*v161 + 24LL))(*v161) != 0 &&
              (((*(__int64 (**)(_QWORD*))(*v165 + 48LL))(v165) & 1) == 0 ||
               ((*(__int64 (**)(_QWORD*))(*v165 + 464LL))(v165) & 1) != 0)) {
            v164 = (const char*)(*(__int64 (**)(_QWORD*))(*v165 + 24LL))(v165);
            if (strcmp_alt1(v164, v159) == 0) {
              v163 = v165;
            }
          }
          ++v161;
        } while (v161 != v162);
        result = v182;
        if (v163 != nullptr) {
          v166 = (_QWORD*)v182[42];
          v167 = (__int64)v182;
          if (v166 != v163) {
            if (v166 != nullptr) {
              (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                  *v166 + 168LL))((void*)(v166), v182[42]);
              result = (_QWORD*)v167;
            }
            result[42] = v163;
            _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb_alt1(v167, 0, 1u, 0);
            v168 = *(_QWORD**)(v167 + 336);
            if (v168 == nullptr) {
              result = (_QWORD*)v167;
              v169 = 4;
            LABEL_197:
              *((_DWORD*)result + 89) =
                  *((_DWORD*)result + 89) & 0xFFFFFFFB | v169;
              return result;
            }
            (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                *v168 + 160LL))((void*)(v168), *(_QWORD*)(v167 + 336));
            game_IsVibrationEnabled_alt1(
                (_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 712LL));
            v166 = *(_QWORD**)(v167 + 336);
            result = (_QWORD*)v167;
          }
          v169 = 4;
          if (v166 != nullptr) {
            v42 = ((unsigned __int8)X8CALL_X0(
                       _QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                    PSEUDO_X8, _QWORD*))(*v166 + 120LL))(
                                    (void*)v166, v166)) &
                   1) == 0;
            result = (_QWORD*)v167;
            if (v42) {
              v169 = 0;
            }
            else {
              v169 = 4;
            }
          }
          goto LABEL_197;
        }
      }
    }
  }
  else {
    result = v182;
  }
  return game_menu_UnitCommandMenu_SetFirstItemVisibleAndEnable_alt1(
      (__int64)result, 1);
}

void GmapSpotMenu_Unknown95()
{
  int v0;

  v0 = *(unsigned __int8*)(GameData_22416c0 + 59);
  *(_BYTE*)(GameData_22416c0 + 59) = 0;
  if (v0 != 0) {
    *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5836LL) = 1;
  }
}

__int64 GmapSpotMenu_Unknown96(_QWORD* a1)
{
  char v2;
  __int64* v3;
  __int64 v4;
  __int64 result;

  v2 = *(_BYTE*)(*GameData_2130e70 + 59);
  *(_BYTE*)(*GameData_2130e70 + 59) = 1;
  v3 = GameData_212d728[0];
  if ((v2 & 1) == 0) {
    *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5836LL) = 1;
  }
  (*(void (**)(_QWORD*))(*a1 + 680LL))(a1);
  game_menu_BasicMenu_Unknown96(a1);
  if ((*(unsigned int (**)(_QWORD*))(*a1 + 168LL))(a1)-8 <= 0xFFFFFFF9) {
    (*(void (**)(_QWORD*))(a1[132] + 96LL))(a1 + 132);
  }
  v4 = *(_QWORD*)(*v3 + 8);
  GameRoutine_155e830(*(_QWORD*)(v4 + 16), 1);
  result = *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0];
  if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
    result = GameRoutine_17b8e80(result, 1);
  }
  *(_DWORD*)(v4 + 5856) |= 0x10000u;
  *(_DWORD*)(*(_QWORD*)(*v3 + 8) + 5856LL) |= 0x40u;
  return result;
}

__int64 GmapSpotMenu_Unknown133(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64 v3;
  unsigned int v4;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_2026810, 0);
    if (result != 0) {
      v2 = result;
      if (((*(__int64 (**)(__int64))(*(_QWORD*)result + 576LL))(result) & 1) !=
          0) {
        v3 = *(_QWORD*)(*GameData_212d728[0] + 8);
        GameRoutine_155e830(*(_QWORD*)(v3 + 16), 0);
        if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
          GameRoutine_17b8f40(
              *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0], 1);
        }
        result = game_gameui_Footer_instance_;
        v4 = *(_DWORD*)(v3 + 5856) & 0xFFFEFFFF;
        *(_DWORD*)(v3 + 5856) = v4;
        if (result != 0) {
          result = GameRoutine_1567000(result, 0);
          v4 = *(_DWORD*)(v3 + 5856);
        }
        *(_DWORD*)(v3 + 5856) = v4 & 0xFFFDFFFF;
      }
      else {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 584LL))(v2);
        if ((result & 1) != 0) {
          *(_DWORD*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5856LL) &= ~0x40u;
        }
      }
    }
  }
  return result;
}

void GmapSpotMenu_Unknown143(__int64 a1, __int64* a2)
{
  int v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  signed __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;

  if ((GameRoutine_8229c0_alt1() & 1) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
    v5 = a2[1];
    v6 = a2[2];
    if (v5 >= v6) {
      v8 = *a2;
      v9 = v5 - *a2;
      v10 = 1 - 0x3333333333333333LL * (v9 >> 3);
      if (v10 > 0x666666666666666LL) {
        GameRoutine_874520_alt1();
      }
      v11 = fw_memory_g_heap_manager_ptr;
      v12 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v6 - v8) >> 3);
      if (2 * v12 > v10) {
        v10 = 2 * v12;
      }
      if (v12 >= 0x333333333333333LL) {
        v13 = 0x666666666666666LL;
      }
      else {
        v13 = v10;
      }
      if (v13 != 0) {
        if (v13 > 0x666666666666666LL) {
          GameRoutine_60a210_alt1();
        }
        v14 = v4;
        v15 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v13, 16, 0);
        v4 = v14;
      }
      else {
        v15 = 0;
      }
      v16 = v15 + v9;
      *(_QWORD*)v16 = &GameData_1a9f09e;
      *(_QWORD*)(v16 + 8) = &GameData_1a9f09e;
      v17 = v15 + 40 * v13;
      v7 = v15 + v9 + 40;
      *(_QWORD*)(v16 + 32) = 0;
      *(_BYTE*)(v16 + 16) = 1;
      *(_DWORD*)(v16 + 20) = 2;
      *(_DWORD*)(v16 + 24) = v4;
      *(_BYTE*)(v16 + 28) = 4;
      memcpy_alt1(v15, v8, v9);
      *a2 = v15;
      a2[1] = v7;
      a2[2] = v17;
      if (v8 != 0) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v11 + v18, v8);
      }
    }
    else {
      v7 = v5 + 40;
      *(_QWORD*)(v5 + 32) = 0;
      *(_QWORD*)v5 = &GameData_1a9f09e;
      *(_QWORD*)(v5 + 8) = &GameData_1a9f09e;
      *(_BYTE*)(v5 + 16) = 1;
      *(_DWORD*)(v5 + 20) = 2;
      *(_DWORD*)(v5 + 24) = v4;
      *(_BYTE*)(v5 + 28) = 4;
    }
    a2[1] = v7;
  }
}

__int64 game_gmap_GmapSpotMenu_XCall(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;

  if ((GameRoutine_8229c0_alt1() & 1) == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(*GameData_212d728[0] + 8);
  LayoutAccessor_155e830(*(_QWORD*)(v2 + 16), 0);
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8f40_alt1(game_hub_ProgressEventView_instance_, 1);
  }
  v3 = game_gameui_Footer_instance_;
  v4 = *(_DWORD*)(v2 + 5856) & 0xFFFEFFFF;
  *(_DWORD*)(v2 + 5856) = v4;
  if (v3 != 0) {
    LayoutAccessor_1567000(v3, 0);
    v4 = *(_DWORD*)(v2 + 5856);
  }
  v5 = game_hub_ProgressEventView_instance_;
  *(_DWORD*)(v2 + 5856) = v4 & 0xFFFDFFFF;
  if (v5 != 0) {
    GameRoutine_17b8e80_alt1(v5, 1);
  }
  GameHr_1712520(a1, 5, 0);
  v9_.v9[0] = GameData_202b890;
  v9_.v10 = v9_.v9;
  v11_.v12 = v11_.v11;
  v11_.v11[0] = GameData_202b890;
  GameRoutine_654050(v11_.v11, (_QWORD*)(a1 + 288));
  if (v11_.v12 == v11_.v11) {
    v6 = 32;
  }
  else {
    if (v11_.v12 == nullptr) {
      goto LABEL_14;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v11_.v12 + v6))((__int64)v11_.v12);
LABEL_14:
  if (v9_.v10 == v9_.v9) {
    v8 = 32;
    goto LABEL_18;
  }
  if (v9_.v10 != nullptr) {
    v8 = 40;
  LABEL_18:
    (*(void (**)(__int64))(*v9_.v10 + v8))((__int64)v9_.v10);
  }
  return 9;
}

__int64 game_gmap_GmapSpotMenu_CreateBind_lambda0_Invoke(__int64 result,
                                                         __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = *a2;
  v3 = *(_QWORD*)(*a2 + 96);
  if (v3 != 0 && *(_BYTE*)(v3 + 32) == 2) {
    v4 = **(_QWORD**)(result + 8);
    v5 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 96, 16, 0);
    v6 = *(_QWORD*)(v2 + 96);
    *(_WORD*)(v5 + 16) = 0;
    *(_DWORD*)(v5 + 40) = 0;
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 0;
    *(_QWORD*)(v5 + 48) = 0;
    *(_QWORD*)(v5 + 56) = 0;
    *(_WORD*)(v5 + 84) = 0;
    *(_WORD*)(v5 + 80) = 257;
    *(_BYTE*)(v5 + 82) = 1;
    *(_QWORD*)v5 = game_gmap_anonymous_TraderMenuItem_vtable;
    *(_QWORD*)(v5 + 8) = 0;
    *(_QWORD*)(v5 + 88) = v6;
    return BasicMenuCursor_16e0c00(v4, v5);
  }
  return result;
}

__int64 game_gmap_GmapSpotMenu_CreateBind_lambda1_Invoke(__int64 a1,
                                                         __int64** a2,
                                                         __int64* a3)
{
  __int64* v3;
  __int64 v4;
  int v5;
  char v6;
  __int64 v7;
  int v9;

  v3 = *a2;
  v4 = *a3;
  v5 = (*(__int64 (**)(__int64*))(**a2 + 464))(*a2) & 1;
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 464LL))(v4);
  v7 = *v3;
  if (v5 != (v6 & 1)) {
    return (*(__int64 (**)(__int64*))(v7 + 464))(v3);
  }
  v9 = (*(__int64 (**)(__int64*))(v7 + 568))(v3);
  return v9 < (*(int (**)(__int64))(*(_QWORD*)v4 + 568LL))(v4);
}

#pragma GCC visibility pop
