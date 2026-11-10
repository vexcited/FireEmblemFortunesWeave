#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_7c51c0(_QWORD);
__int64 GameRoutine_876a40(_QWORD, _QWORD);
__int64 GameRoutine_886c80(void);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _DWORD GameData_21d925c[32];
extern _DWORD* GameData_212d168;
extern __int64 (*GameData_1fa6ed0[])();
extern __int64 (*GameData_1fa6fb0[])();
extern __int64 (*game_gmap_ProcGmapSeq_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_21eea40;
extern __int64 GameData_21f1618;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d6d0;
extern int GameData_21d92dc;
__int64 ProcGmapSeq_Destructor(__int64 a1);
__int64 BladeResonance_14b7200(_QWORD);
__int64 Cursor_Unknown2(void);
__int64 GameGmapData_13601b0(_QWORD);
__int64 GameManager_a2c820(_QWORD, _QWORD);
__int64 GameManager_a2d080(_QWORD);
__int64 GameManager_a2f660(_QWORD);
__int64 GameRoutine_100c050(_QWORD);
__int64 GameRoutine_120dd60(void);
__int64 GameRoutine_120e900(void);
__int64 GameRoutine_1314240(void);
__int64 GameRoutine_1314ec0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1317f10(_QWORD, _QWORD);
__int64 GameRoutine_133e6e0(_QWORD);
__int64 GameRoutine_133f1d0(_QWORD, _QWORD);
__int64 GameRoutine_133f780(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_133fe00(_QWORD, _QWORD, float);
__int64 GameRoutine_1340560(_QWORD, _QWORD);
__int64 GameRoutine_1347e20(void);
__int64 GameRoutine_134be40(void);
__int64 GameRoutine_134c680(_QWORD);
__int64 GameRoutine_134d2e0(_QWORD);
__int64 GameRoutine_134fb00(_QWORD);
__int64 GameRoutine_13602c0(_QWORD);
__int64 GameRoutine_14ccc60(_QWORD);
__int64 GameRoutine_14db160(_QWORD);
__int64 GameRoutine_1522160(_QWORD);
__int64 GameRoutine_1522300(_QWORD, _QWORD);
__int64 GameRoutine_1522780(_QWORD);
__int64 GameRoutine_15255d0(void);
__int64 GameRoutine_152c1d0(_QWORD);
__int64 GameRoutine_1530500(_QWORD);
__int64 GameRoutine_15317a0(_QWORD);
__int64 GameRoutine_1535b30(void);
__int64 GameRoutine_1538620(void);
__int64 GameRoutine_1553130(_QWORD);
__int64 GameRoutine_15e1e60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1738620(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
__int64 GameRoutine_17bc0a0(void);
__int64 GameRoutine_17bcf90(void);
__int64 GameRoutine_17bd0e0(_QWORD);
__int64 GameRoutine_65a020(void);
__int64 GameRoutine_718280(void);
__int64 GameRoutine_8679c0(void);
__int64 GameRoutine_877400(__int64);
__int64 GameRoutine_887600(void);
__int64 GameRoutine_888970(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_88cee0(void);
__int64 GameRoutine_ad7390(void);
__int64 GameRoutine_ecb40(void);
__int64 GmapSituation_14db030(void);
__int64 Impl_13261c0(_QWORD);
__int64 Impl_132a090(_QWORD);
__int64 InfoCursorBottomImpl_100d6e0(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
__int64 MiasmaManager_14a9960(_QWORD);
__int64 MiasmaManager_14a9bc0(_QWORD);
__int64 Seq_a85600(_QWORD);
__int64 SpotMgr_1333f20(_QWORD);
__int64 SpotMgr_1335280(_QWORD);
__int64 SpotMgr_1336ec0(_QWORD);
__int64 SpotMgr_13370c0(void);
__int64 TalkOtherClanMenuItem_14d01c0(_QWORD, _QWORD);
__int64 TroopMgr_13460a0(_QWORD);
__int64 TroopMgr_13485a0(_QWORD);
__int64 TroopMgr_13487a0(_QWORD);
__int64 TroopMgr_1349f40(void);
__int64 TroopMgr_134ebe0(_QWORD);
__int64 TroopMgr_1353fb0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_Unit_Unknown6c46e0(_QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10cb00(_QWORD, _QWORD);
__int64 wmemchr(_QWORD, _QWORD);
extern _DWORD* GameData_212d710;
extern _DWORD* GameData_212d720;
extern _DWORD* GameData_212d738;
extern _UNKNOWN GameData_1a86d37;
extern _UNKNOWN GameData_1a9e43e;
extern _UNKNOWN GameData_1aa9eec;
extern _UNKNOWN GameData_1abbb2b;
extern _UNKNOWN GameData_1ade186;
extern _UNKNOWN GameData_1adfa87;
extern _UNKNOWN GameData_1ae1f1c;
extern _UNKNOWN GameData_1aed80c;
extern _UNKNOWN* GameData_1afe67f;
extern __int64 (*GameData_1fa6790[])();
extern __int64 (*GameData_1fa6810[])();
extern __int64 (*GameData_1fa6890[])();
extern __int64 (*GameData_1fa6c10[])();
extern __int64 GameData_212c7a0[13];
extern __int64 GameData_212d748[2];
extern __int64 GameData_21c6978;
extern __int64 GameData_21c9600;
extern __int64 GameData_21c9608;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21c96f8;
extern __int64 GameData_21c9700;
extern __int64 GameData_21c9728;
extern __int64 GameData_21ca310;
extern __int64 GameData_21eea58;
extern __int64 GameData_21f1620;
extern __int64 GameData_21f1628;
extern __int64 GameData_21f1648;
extern __int64 GameData_21f1658;
extern __int64 GameData_21f1660;
extern __int64 GameData_22416b0;
extern __int64 GameData_22416c0;
extern __int64 game_GameModeData_instance_;
extern __int64 game_GameRestartData_unknown_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
extern __int64 game_map_MapColorPalette_g_texture_archives;
extern __int64 game_sound_g_game_sound;
extern __int64* GameData_212c790;
extern __int64* GameData_212d6f8[3];
extern __int64* GameData_212d700[2];
extern __int64* GameData_212d708;
extern __int64* GameData_212d718;
extern __int64* GameData_212d728[2];
extern __int64* GameData_212d730;
extern __int64* GameData_212d7c0[11];
extern __int64* GameData_212d7c8[10];
extern __int64* GameData_212d7d0[9];
extern __int64* GameData_2130e70;
extern __int64* GameData_2131870;
extern __int64* GameData_2131898;
extern int* GameData_2131878[13];
extern int* GameData_21318a0[8];
__int64 game_gmap_ProcGmapSeq_Initialize(__int64 a1);
__int64 ProcGmapSeq_8802a0();
__int64 ProcGmapSeq_8814e0(__int64 a1);
__int64 ProcGmapSeq_881560(__int64 a1);
__int64 ProcGmapSeq_8818a0(__int64 a1);
__int64 ProcGmapSeq_881f20(__int64 result);
__int64 ProcGmapSeq_882080();
__int64 ProcGmapSeq_8827e0(__int64 a1);
__int64 ProcGmapSeq_882cb0(__int64 a1);
__int64 ProcGmapSeq_882f10(__int64 result);
__int64 game_gmap_ProcGmapSeq_TryGetFarmProduct(__int64 a1);
__int64 ProcGmapSeq_883220();
__int64 ProcGmapSeq_8832a0(__int64 result);
__int64 ProcGmapSeq_883400();
__int64 ProcGmapSeq_883510(__int64 a1);
__int64 ProcGmapSeq_883660(__int64 result);
__int64 ProcGmapSeq_883680(__int64 result);
__int64 ProcGmapSeq_883860(__int64 result);
__int64 ProcGmapSeq_8840d0(__int64 result);
__int64 ProcGmapSeq_884e80(__int64 result);
__int64 ProcGmapSeq_884eb0(__int64 a1);
__int64 ProcGmapSeq_884f00(__int64 result);
__int64 ProcGmapSeq_884fb0(__int64 a1);
__int64 ProcGmapSeq_884ff0(__int64 result);
__int64 ProcGmapSeq_885160(__int64 a1);
void ProcGmapSeq_8855f0();
__int64 ProcGmapSeq_885840(__int64 a1);
__int64 ProcGmapSeq_8866a0();
__int64 ProcGmapSeq_886770(__int64 a1);
__int64 ProcGmapSeq_886870();
__int64 ProcGmapSeq_8868e0(__int64 result);
__int64 ProcGmapSeq_886c20();
__int64 game_gmap_ProcGmapSeq_Initialize_closure0_Invoke(__int64 result,
                                                         unsigned __int8* a2);
bool game_gmap_ProcGmapSeq_Initialize_closure_Invoke();
bool game_gmap_ProcGmapSeq_PreExeCommand_closure_Invoke(__int64 a1,
                                                        __int64* a2);
__int64 game_gmap_ProcGmapSeq_TryGetFarmProduct_closure_Invoke(__int64 a1,
                                                               __int64** a2);
__int64 game_gmap_ProcGmapSeq_LimitOver_closure_Invoke(__int64 a1, __int64* a2);
bool game_gmap_ProcGmapSeq_LimitOver_closure0_Invoke(__int64 a1, __int64 a2);
__int64 game_gmap_ProcGmapSeq_LimitOver_closure1_Invoke(__int64 result,
                                                        _QWORD* a2);
void ProcGmapSeq_Unknown7(__int64 a1, __int64 a2);
void ProcGmapSeq_Unknown8(__int64 a1, __int64* a2, int a3);
_QWORD* GameRoutine_134bbe0(_QWORD* __return_ptr, _QWORD);
__int64 GameRoutine_104f0e0(_QWORD, _QWORD);
__int64 GameRoutine_1337000(void);
__int64 GameRoutine_13402f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1342b80(_QWORD);
__int64 GameRoutine_134c680_alt1(void) __asm__("GameRoutine_134c680");
__int64 GameRoutine_1377920(_QWORD);
__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 GameRoutine_14a1520(_QWORD, _QWORD);
__int64 GameRoutine_14b7400(_QWORD);
__int64 GameRoutine_1553220(_QWORD);
__int64 GameRoutine_15e2a60(_QWORD, _QWORD);
__int64 GameRoutine_162aea0(_QWORD, _QWORD);
__int64 GameRoutine_175b880(_QWORD);
__int64 GameRoutine_175bde0(_QWORD);
__int64 GameRoutine_17bc360(_QWORD);
__int64 GameRoutine_17bce50(_QWORD);
__int64 GameRoutine_17bcef0(_QWORD);
__int64 GameRoutine_17bcf90_alt1(_QWORD) __asm__("GameRoutine_17bcf90");
__int64 GameRoutine_19a0e60(_QWORD);
__int64 GameRoutine_200();
__int64 GameRoutine_718130(_QWORD, _QWORD);
__int64 GameRoutine_887920(_QWORD, _QWORD);
__int64 GameRoutine_887a40(_QWORD);
__int64 GameRoutine_888560();
__int64 GameRoutine_8885e0();
__int64 GameRoutine_8924a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_995200(_QWORD);
__int64 GameRoutine_9d5430(_QWORD);
__int64 GameSubquestData_125a1a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GmapSituation_14dbd80(void);
__int64 GmapSituation_14dbe20(void);
__int64 MiasmaManager_14a91c0(_QWORD);
__int64 MiasmaManager_14a9f60(_QWORD);
__int64 SpotMgr_1335920(void);
__int64 TroopMgr_1341640(_QWORD);
__int64 TroopMgr_13486a0(void);
__int64 TroopMgr_1348ec0(_QWORD);
__int64 TroopMgr_134a720(_QWORD);
__int64 TroopMgr_134b560(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_HashString_alt1(_QWORD, _QWORD) __asm__("game_HashString");
__int64 game_ProcInst_Register(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _UNKNOWN GameData_1ab7dd7;
extern _UNKNOWN GameData_1ae1f43;
extern _UNKNOWN GameData_21f1610;
extern __int64 (*GameData_1fa6ad8[])();
extern __int64 (*GameData_202ca88[])();
extern __int64 (*GameData_202cb08[])();
extern __int64 (*game_gmap_anonymous_ProcGmapEscapeTroopSeq_vtable[])();
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_21f1558;
extern __int64 GameData_21f1560;
extern __int64 GameData_21f1568;
extern __int64 GameData_21f1578;
extern __int64 GameData_21f1588;
extern __int64 GameData_21f1598;
extern __int64 GameData_21f15a0;
extern __int64 GameData_21f15a8;
extern __int64 GameData_21f15b8;
extern __int64 GameData_21f15c8;
extern __int64 GameData_21f15d8;
extern __int64 GameData_21f15e0;
extern __int64 GameData_21f15e8;
extern __int64 GameData_21f15f8;
extern __int64 GameData_21f1608;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64* GameData_2130e60;
extern char GameData_21f1550;
extern char GameData_21f1590;
extern char GameData_21f15d0;
extern int GameData_21f1570;
extern int GameData_21f1580;
extern int GameData_21f15b0;
extern int GameData_21f15c0;
extern int GameData_21f15f0;
extern int GameData_21f1600;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_888610(_QWORD);
__int64 game_gmap_ProcGmapSeq_OpenEventBranch(__int64 a1);
__int64 ProcGmapSeq_882900(__int64 a1);
__int64 ProcGmapSeq_884100(__int64 result);
__int64 ProcGmapSeq_884920(__int64 result);
__int64 ProcGmapSeq_885880(__int64 result);
_BYTE* ProcGmapSeq_886c80(_BYTE* result, __int64 a2);
__int64 game_gmap_ProcGmapSeq_OpenEventBranch_closure_Invoke(__int64 result,
                                                             __int64** a2);

__int64 game_gmap_ProcGmapSeq_Initialize(__int64 a1)
{
  __int64 v2;
  int v3;
  float v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64* v12;
  __int64* v13;
  _QWORD* v14;
  __int64* v15;
  __int64* v16;
  _QWORD* v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  _QWORD* v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  int v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64** v41;
  __int64** v42;
  __int64* v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64** v49;
  __int64** v50;
  __int64* v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64* v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  int v63;
  __int64 v64;
  int v65;
  int v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  int v70;
  __int64** v71;
  __int64** v72;
  __int64* v73;
  __int64* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  _BYTE* v79;
  __int64 v80;
  __int64 v81;
  __int64 result;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  _QWORD v86[4];
  _QWORD* v87;
  _QWORD v88[4];
  _QWORD* v89;
  __int64 (**v90)();
  _UNKNOWN** v91;
  __int64 (***v92)();

  GameRoutine_8679c0();
  v2 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v3 & 0x10) == 0) {
      v4 = *(float*)(game_ProcGameSkipView_instance_ + 224);
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v3 & 0xFFFFFFE2 | 1;
      if (v4 > 0.0) {
        *(_DWORD*)(v2 + 224) = 0;
      }
    }
  }
  v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      16, 16, 0);
  v7 = (_QWORD*)v6;
  v8 = GameData_212d6f8[0];
  if (*GameData_212d6f8[0] == 0) {
    *GameData_212d6f8[0] = v6;
    *GameData_2131878[0] = 1;
  }
  v9 = *v5;
  *v7 = GameData_2131870 + 2;
  v10 = fw_memory_HeapManager_Allocate(v9, 64, 16, 0);
  *(_QWORD*)v10 = 0;
  *(_QWORD*)(v10 + 8) = 0;
  *(_QWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_QWORD*)(v10 + 16) = 0;
  *(_QWORD*)(v10 + 24) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  v7[1] = v10;
  *v8 = (__int64)v7;
  *(_DWORD*)(v10 + 8) = 0x2000;
  *(_BYTE*)(v10 + 40) = 1;
  *(_DWORD*)(v10 + 44) = 1065353216;
  (*(void (**)(_QWORD*))(*v7 + 16LL))(v7);
  v11 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 16, 16, 0);
  v12 = GameData_212d700[0];
  if (*GameData_212d700[0] == 0) {
    *GameData_21318a0[0] = 1;
  }
  v13 = GameData_2131898;
  *v12 = (__int64)v11;
  *v11 = v13 + 2;
  v11[1] = 0;
  GameRoutine_1538620();
  v14 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 24, 16, 0);
  v14[2] = 0;
  v15 = GameData_212d708;
  if (*GameData_212d708 == 0) {
    *GameData_212d710 = 1;
  }
  v16 = GameData_212d7c0[0];
  *v15 = (__int64)v14;
  *v14 = v16 + 2;
  v14[1] = v16 + 12;
  Cursor_Unknown2();
  v17 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 24, 16, 0);
  v17[2] = 0;
  v18 = GameData_212d718;
  if (*GameData_212d718 == 0) {
    *GameData_212d720 = 1;
  }
  v19 = GameData_212d7c8[0];
  *v18 = (__int64)v17;
  *v17 = v19 + 2;
  v17[1] = v19 + 12;
  GameRoutine_1314240();
  v20 = fw_memory_HeapManager_Allocate(*v5, 16, 16, 0);
  GameRoutine_17bc0a0();
  v21 = GameData_212d728[0];
  v22 = *v5;
  *GameData_212d728[0] = v20;
  v23 = (_QWORD*)fw_memory_HeapManager_Allocate(v22, 16, 16, 0);
  v24 = GameData_212d730;
  if (*GameData_212d730 == 0) {
    *GameData_212d738 = 1;
  }
  v25 = GameData_212d7d0[0];
  *v24 = (__int64)v23;
  *v23 = v25 + 2;
  v23[1] = 0;
  v26 = GameRoutine_1535b30();
  GameGmapData_13601b0(v26);
  v27 = GameRoutine_1553130(11);
  v28 = GameData_212c790;
  if (GameData_21eea58 == 0 || *(_BYTE*)(GameData_21eea58 + 32) != 1) {
    v32 = *(_QWORD*)(*v21 + 8);
    LayoutAccessor_155e830(*(_QWORD*)(v32 + 16), 0);
    if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
      GameRoutine_17b8f40(*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0],
                          1);
    }
    v33 = game_gameui_Footer_instance_;
    v34 = *(_DWORD*)(v32 + 5856) & 0xFFFEFFFF;
    *(_DWORD*)(v32 + 5856) = v34;
    if (v33 != 0) {
      LayoutAccessor_1567000(v33, 0);
      v34 = *(_DWORD*)(v32 + 5856);
    }
    *(_DWORD*)(v32 + 5856) = v34 & 0xFFFDFFFF;
    if (game_GameModeData_instance_ != 0) {
      v35 = *(_DWORD*)(game_GameModeData_instance_ + 92);
      v36 = 3;
      if ((v35 & 2) == 0) {
        if ((v35 & 0x40) != 0) {
          v36 = 3;
        }
        else {
          v36 = 4;
        }
      }
    }
    else {
      v36 = 4;
    }
    goto LABEL_32;
  }
  if (game_GameModeData_instance_ == 0 ||
      ((v29 = *(_DWORD*)(game_GameModeData_instance_ + 92)) & 2) == 0) {
    if (game_gmap_GmapClock_instance_ != 0 &&
        *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
            0) {
      v30 = *(_QWORD*)(*v21 + 8);
      v31 = 2;
    }
    else {
      v91 = (_UNKNOWN**)&GameData_1a86d37;
      v90 = (__int64 (**)())game_HashString(&GameData_1a86d37);
      if (game_GameModeData_instance_ != 0 &&
          (v53 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), &v90)) != 0) {
        v30 = *(_QWORD*)(*v21 + 8);
        if (*(_DWORD*)(v53 + 32) != 0) {
          v31 = 2;
        }
        else {
          v31 = 0;
        }
      }
      else {
        v31 = 0;
        v30 = *(_QWORD*)(*v21 + 8);
      }
    }
    v66 = *(_DWORD*)(v30 + 5856);
    *(_DWORD*)(v30 + 5856) = v66 & 0xFFFFFFFD | v31;
    v67 = *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0];
    if ((v66 & 0x10000) != 0) {
      if (v67 != 0) {
        GameRoutine_17b8e80(v67, 1);
      }
    }
    else if (v67 != 0) {
      GameRoutine_17b8f40(v67, 1);
    }
    if ((v66 & 0x20000) != 0) {
      GameRoutine_17bd0e0(v30);
    }
    else {
      if (game_gameui_Footer_instance_ != 0) {
        LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
      }
      *(_DWORD*)(v30 + 5856) &= ~0x20000u;
    }
    v27 = GameRoutine_877400(a1 + 208);
    *(_BYTE*)(a1 + 305) = 0;
    *(_BYTE*)(a1 + 310) = 1;
    v65 = 13;
  LABEL_88:
    *(_DWORD*)(a1 + 152) = v65;
    v68 = GameData_21eea58;
    if (GameData_21eea58 == 0) {
      goto LABEL_90;
    }
    goto LABEL_89;
  }
  if ((v29 & 0x1C) != 0) {
    v65 = 3;
    goto LABEL_88;
  }
  v84 = GameRoutine_877400(a1 + 208);
  *(_DWORD*)(a1 + 152) = 8;
  *(_BYTE*)(a1 + 310) = 1;
  v85 = GameRoutine_134c680(v84);
  v27 = GameRoutine_1522160(v85);
  v68 = GameData_21eea58;
  if (GameData_21eea58 != 0) {
  LABEL_89:
    *(_BYTE*)(v68 + 32) = 0;
  }
LABEL_90:
  *(_BYTE*)(*(_QWORD*)(*v12 + 8) + 56LL) = 1;
  v69 = *(_QWORD*)(*v28 + 8);
  v70 = *(_DWORD*)(v69 + 56);
  v71 = *(__int64***)(v69 + 8);
  v72 = *(__int64***)(v69 + 16);
  if ((v70 & 0x80000000) == 0) {
    while (v71 != v72) {
      v74 = *v71++;
      v73 = v74;
      if (*((_DWORD*)v74 + 21) == v70) {
        goto LABEL_101;
      }
    }
  LABEL_96:
    v75 = game_gmap_SpotMgr_GetCurrentSpot(v27);
    v76 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_33;
    }
    goto LABEL_102;
  }
  if (v71 == v72) {
    goto LABEL_96;
  }
  while (1) {
    v73 = *v71;
    if ((*v71)[12] == 0 && v73[69] == 0) {
      break;
    }
    if (++v71 == v72) {
      goto LABEL_96;
    }
  }
LABEL_101:
  v75 = *v73;
  v76 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
  LABEL_102:
    v77 = *(_QWORD*)(v76 + 24);
    if (v77 != 0 && *(_BYTE*)(v77 + 152) == 4 &&
        *(_QWORD*)(v77 + 168) == *(_QWORD*)(v75 + 120)) {
      v36 = 18;
    LABEL_32:
      *(_DWORD*)(a1 + 152) = v36;
    }
  }
LABEL_33:
  v37 = GmapSituation_14db030();
  v38 = GameData_212c7a0[0];
  if ((v37 & 1) == 0 || (*(_BYTE*)(a1 + 310) & 1) != 0) {
    goto LABEL_66;
  }
  v39 = *(_QWORD*)(*v28 + 8);
  v40 = *(_DWORD*)(v39 + 56);
  v41 = *(__int64***)(v39 + 8);
  v42 = *(__int64***)(v39 + 16);
  if (v40 < 0) {
    for (; v41 != v42; ++v41) {
      v43 = *v41;
      if ((*v41)[12] == 0 && v43[69] == 0) {
        goto LABEL_45;
      }
    }
  LABEL_41:
    v45 = game_gmap_SpotMgr_GetCurrentSpot(v37);
    goto LABEL_46;
  }
  if (v41 == v42) {
    goto LABEL_41;
  }
  while (1) {
    v44 = *v41++;
    v43 = v44;
    if (*((_DWORD*)v44 + 21) == v40) {
      break;
    }
    if (v41 == v42) {
      goto LABEL_41;
    }
  }
LABEL_45:
  v45 = *v43;
LABEL_46:
  v46 = Impl_13261c0(v45);
  if ((_BYTE)v46 != 0) {
    v47 = *(_QWORD*)(*v28 + 8);
    v48 = *(_DWORD*)(v47 + 56);
    v49 = *(__int64***)(v47 + 8);
    v50 = *(__int64***)(v47 + 16);
    if (v48 < 0) {
      for (; v49 != v50; ++v49) {
        v51 = *v49;
        if ((*v49)[12] == 0 && v51[69] == 0) {
          goto LABEL_62;
        }
      }
    }
    else if (v49 != v50) {
      while (1) {
        v52 = *v49++;
        v51 = v52;
        if (*((_DWORD*)v52 + 21) == v48) {
          break;
        }
        if (v49 == v50) {
          goto LABEL_58;
        }
      }
    LABEL_62:
      v54 = *v51;
    LABEL_63:
      if ((unsigned __int8)Impl_13261c0(v54) != 2) {
        goto LABEL_66;
      }
      goto LABEL_64;
    }
  LABEL_58:
    v54 = game_gmap_SpotMgr_GetCurrentSpot(v46);
    goto LABEL_63;
  }
LABEL_64:
  if (**(_QWORD**)(*(_QWORD*)v38 + 16LL) == 0) {
    v91 = (_UNKNOWN**)&GameData_1a9e43e;
    v90 = (__int64 (**)())game_HashString(&GameData_1a9e43e);
    game_VariableManager_SetFlag(&v90, 0);
  }
LABEL_66:
  v55 = *v28;
  *(_DWORD*)(*(_QWORD*)(*v28 + 8) + 56LL) = -1;
  *(_BYTE*)(*(_QWORD*)(*v21 + 8) + 5844LL) = 0;
  v56 = *(_QWORD*)(v55 + 8);
  v57 = *(__int64**)(v56 + 8);
  v58 = *(__int64**)(v56 + 16);
  while (v57 != v58) {
    v59 = *v57++;
    GameRoutine_133e6e0(v59);
  }
  SpotMgr_1335280(1);
  v91 = (_UNKNOWN**)&GameData_1abbb2b;
  v90 = (__int64 (**)())game_HashString(&GameData_1abbb2b);
  if (game_GameModeData_instance_ != 0) {
    v60 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v90);
    if (v60 != 0 && *(_DWORD*)(v60 + 32) != 0) {
      v61 = *(_QWORD*)(*(_QWORD*)GameData_212d748[0] + 8LL);
      v91 = &GameData_1afe67f;
      v62 = game_HashString(&GameData_1afe67f);
      v63 = game_GameModeData_instance_;
      v90 = (__int64 (**)())v62;
      if (game_GameModeData_instance_ != 0) {
        v64 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), &v90);
        if (v64 != 0) {
          v63 = *(_DWORD*)(v64 + 32);
        }
        else {
          v63 = 0;
        }
      }
      *(_DWORD*)(v61 + 36) = v63;
    }
  }
  if (game_GameModeData_instance_ != 0) {
    v78 = *(_DWORD*)(game_GameModeData_instance_ + 92);
    if ((v78 & 2) != 0) {
      *(_BYTE*)(a1 + 305) = 0;
      *(_BYTE*)(a1 + 308) = 1;
    }
    else if ((v78 & 0x40) == 0) {
      *(_DWORD*)(game_GameModeData_instance_ + 92) = v78 & 0xFFFFFBA1;
    }
  }
  *(_DWORD*)(a1 + 276) = 0;
  *(_BYTE*)(a1 + 304) = 1;
  if ((*(_BYTE*)(a1 + 224) & 1) != 0) {
    v79 = *(_BYTE**)(a1 + 240);
    *(_QWORD*)(a1 + 232) = 0;
  }
  else {
    v79 = (_BYTE*)(a1 + 225);
    *(_BYTE*)(a1 + 224) = 0;
  }
  *v79 = 0;
  GameRoutine_13602c0(*(_QWORD*)(*(_QWORD*)v38 + 16LL));
  v90 = GameData_1fa6790;
  v91 = (_UNKNOWN**)a1;
  v92 = &v90;
  v88[0] = GameData_1fa6810;
  v88[1] = a1;
  v89 = v88;
  v87 = v86;
  v86[0] = GameData_1fa6890;
  GameRoutine_15e1e60(&v90, v88, v86);
  if (v87 == v86) {
    v80 = 32;
  }
  else {
    if (v87 == nullptr) {
      goto LABEL_121;
    }
    v80 = 40;
  }
  (*(void (**)(void))(*v87 + v80))();
LABEL_121:
  if (v89 == v88) {
    v81 = 32;
  }
  else {
    if (v89 == nullptr) {
      goto LABEL_126;
    }
    v81 = 40;
  }
  (*(void (**)(void))(*v89 + v81))();
LABEL_126:
  result = (__int64)v92;
  if (v92 == &v90) {
    v83 = 4;
  }
  else {
    if (v92 == nullptr) {
      return result;
    }
    v83 = 5;
  }
  return (*v92)[v83]();
}

__int64 ProcGmapSeq_8802a0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  bool v14;
  bool v15;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  char* v24;
  char* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char v33;

  v0 = *(_QWORD*)(GameData_21c6978 + 32);
  if (*(_QWORD*)(GameData_21c6978 + 24) == v0) {
    v1 = 0;
    if ((GameRoutine_ecb40() & 1) == 0) {
      return 1;
    }
  }
  else {
    v1 = *(_QWORD*)(v0 - 8);
    if ((GameRoutine_ecb40() & 1) == 0) {
      return 1;
    }
  }
  v2 = *(_QWORD*)(v1 + 64);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 96);
    if (v3 == 0 || *(_DWORD*)(v3 + 240) != 5) {
      return 1;
    }
    v4 = (_QWORD*)(v2 + 120);
    while (1) {
      v4 = (_QWORD*)*v4;
      if (v4 == nullptr) {
        break;
      }
      if (*(_DWORD*)(v4[5] + 240LL) != 5) {
        return 1;
      }
    }
  }
  v5 = *(__int64**)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                    248632LL);
  v6 = *(__int64**)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                    248640LL);
  if (v5 != v6) {
    while (1) {
      v7 = *((unsigned __int8*)v5 + 32);
      v8 = v5[5];
      if ((v7 & 1) == 0) {
        v8 = v7 >> 1;
      }
      if (v8 == 26) {
        v9 = (v7 & 1) != 0 ? (__int64*)v5[6] : (__int64*)((char*)v5 + 33);
        v10 = *v9;
        v11 = v9[1];
        v12 = v9[2];
        v13 = *((unsigned __int16*)v9 + 12);
        v14 = v10 == 0x2F70616D472F4955LL && v11 == 0x7865745F70616D67LL;
        v15 = v14 && v12 == 0x6E622E7365727574LL;
        if (v15 && v13 == 30836) {
          break;
        }
      }
      v5 += 11;
      if (v5 == v6) {
        return 1;
      }
    }
  }
  if (v5 != v6) {
    v17 = *v5;
    nn_os_AcquireReadLock(*v5 + 696);
    v18 = *(_DWORD*)(v17 + 656);
    nn_os_ReleaseReadLock(v17 + 696);
    if ((v18 & 8) != 0) {
      v19 = *(_QWORD*)(GameData_21c96e8 + 8);
      v20 = *(_QWORD*)(v19 + 8);
      v21 = *(_QWORD*)(v19 + 16);
      while (v20 != v21) {
        v22 = *(_QWORD**)v20;
        if (*(_QWORD*)(*(_QWORD*)v20 + 344LL) != 0) {
          if (v22[47] == 0) {
            return 1;
          }
          v23 = v22[45] - v22[44];
          v26 = v22 + 48;
          v25 = (char*)v22[48];
          v24 = (char*)v26[1];
          if (v23 != v24 - v25) {
            return 1;
          }
          while (v25 != v24) {
            v27 = *(_QWORD*)v25;
            v25 += 8;
            if ((*(_BYTE*)(v27 + 342) & 1) == 0) {
              return 1;
            }
          }
        }
        v20 += 8;
      }
      v29 = *(_QWORD*)(*(_QWORD*)(GameData_21f1658 + 16) + 48LL);
      v30 = *(_QWORD*)(v29 + 88);
      v31 = *(_QWORD*)(v29 + 96);
      if (v30 == v31) {
      LABEL_51:
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) -
                                        8LL) +
                             40LL) +
                  225LL) = 1;
        return 0;
      }
      v32 = v30 + 40;
      while (*(_BYTE*)(*(_QWORD*)(v32 - 16) + 165LL) == 1) {
        v33 = GameRoutine_ad7390();
        if ((v33 & 1) != 0) {
          v14 = v32 == v31;
          v32 += 40;
          if (!v14) {
            continue;
          }
        }
        if ((v33 & 1) == 0) {
          return 1;
        }
        goto LABEL_51;
      }
    }
  }
  return 1;
}

__int64 ProcGmapSeq_8814e0(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64 v3;

  if (game_GameModeData_instance_ == 0 ||
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) == 0) {
    return GameRoutine_1530500(a1 + 224);
  }
  v2 = *(_QWORD*)(GameData_21f1648 + 8);
  GameManager_a2d080(game_sound_g_game_sound);
  v3 = GameData_21f1648;
  *(_BYTE*)(*(_QWORD*)(GameData_21f1648 + 8) + 40LL) = 1;
  result = GameRoutine_15317a0(*(_QWORD*)(v3 + 8) + 40LL);
  *(_BYTE*)(v2 + 56) = 0;
  return result;
}

__int64 ProcGmapSeq_881560(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  char v18;
  __int64 v19;
  __int64 result;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  void* v29;

  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0 &&
      (*(_BYTE*)(*(_QWORD*)(GameData_21c96f8 + 16) + 128LL) & 1) == 0 &&
      (*(_BYTE*)(a1 + 306) & 1) == 0) {
    v2 = GameData_21c9728;
    v3 = *(_QWORD*)(GameData_21c9728 + 80);
    v4 = *(_QWORD*)(GameData_21c9728 + 88);
    if (v3 == v4) {
      v5 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_14;
      }
    }
    else {
      do {
        v6 = *(_BYTE**)(**(_QWORD**)(v3 + 16) + 328LL);
        if (v6 != nullptr && *v6 != 0) {
          v29 = *(void**)(**(_QWORD**)(v3 + 16) + 328LL);
          v28 = game_HashString(v6);
          game_VariableManager_SetFlag(&v28, 1);
        }
        v3 += 24;
      } while (v3 != v4);
      *(_QWORD*)(v2 + 88) = *(_QWORD*)(v2 + 80);
      v5 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_14;
      }
    }
    if ((*(_BYTE*)(v5 + 92) & 2) == 0) {
    LABEL_14:
      v7 = GameRoutine_1347e20();
      TroopMgr_13487a0(v7);
    }
  }
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    if ((*(_BYTE*)(GameData_22416c0 + 55) & 1) == 0) {
      SpotMgr_13370c0();
      v29 = &GameData_1aa9eec;
      v8 = game_HashString(&GameData_1aa9eec);
      v9 = game_GameModeData_instance_;
      v28 = v8;
      if (game_GameModeData_instance_ != 0) {
        v10 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), &v28);
        if (v10 != 0) {
          v9 = *(_DWORD*)(v10 + 32);
        }
        else {
          v9 = 0;
        }
      }
      *(_DWORD*)(GameData_22416c0 + 48) = v9;
    }
    GameRoutine_887600();
  }
  v11 = *(_QWORD*)(GameData_21f1658 + 16);
  GameRoutine_100c050(*(_QWORD*)(v11 + 48));
  *(_BYTE*)(v11 + 175) = 1;
  v12 = MiasmaManager_14a9960(*(_QWORD*)(GameData_22416b0 + 8));
  v13 = GameRoutine_134fb00(v12);
  v14 = SpotMgr_1336ec0(v13);
  v15 = *(_QWORD*)(GameData_21c9700 + 8);
  v16 = *(__int64**)(v15 + 48);
  v17 = *(__int64**)(v15 + 56);
  if (v16 != v17) {
    v18 = 0;
    do {
      v19 = *v16++;
      v14 = Impl_132a090(v19);
      v18 |= v14;
    } while (v16 != v17);
    if ((v18 & 1) != 0) {
      v14 = GameRoutine_17bcf90();
    }
  }
  GameRoutine_14db160(v14);
  BladeResonance_14b7200(*(_QWORD*)(GameData_21f1620 + 8));
  result = GameRoutine_14ccc60(a1);
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
      *(_DWORD*)(game_GameModeData_instance_ + 64) == 6) {
    v29 = &GameData_1aed80c;
    result = game_HashString(&GameData_1aed80c);
    v28 = result;
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v28);
      if (result != 0 && *(_DWORD*)(result + 32) != 0) {
        v21 = game_gmap_SpotMgr_GetCurrentSpot(result);
        if (v21 != 0) {
          GameRoutine_1317f10(*(_QWORD*)(GameData_21f1658 + 16), v21 + 32);
        }
        GameRoutine_1314ec0(*(_QWORD*)(*GameData_212d718 + 16),
                            *(_QWORD*)(GameData_21f1658 + 16) + 80LL, 0);
        v22 = game_VariableManager_SetFlag(&v28, 0);
        if (game_GameModeData_instance_ != 0 &&
            *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
          v23 = *(_QWORD*)(GameData_21c96e8 + 8);
          v24 = *(__int64**)(v23 + 8);
          v25 = *(__int64**)(v23 + 16);
          while (v24 != v25) {
            v26 = *v24;
            if ((*(_QWORD*)(*v24 + 96) | *(_QWORD*)(*v24 + 552)) == 0 &&
                *(_DWORD*)(v26 + 84) == -1) {
              goto LABEL_46;
            }
            ++v24;
          }
        }
        v26 = 0;
      LABEL_46:
        v27 = game_gmap_SpotMgr_GetCurrentSpot(v22);
        GameRoutine_133f780(v26, v27, 1);
        return GameRoutine_134d2e0(*(_QWORD*)(GameData_21c96e8 + 8));
      }
    }
  }
  return result;
}

__int64 ProcGmapSeq_8818a0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  void* v11;

  result = GmapSituation_14db030();
  if ((result & 1) != 0) {
    v11 = &GameData_1a9e43e;
    v10 = game_HashString(&GameData_1a9e43e);
    if (game_GameModeData_instance_ == 0) {
      return GameRoutine_152c1d0(a1);
    }
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v10);
    if (result == 0 || *(_DWORD*)(result + 32) == 0) {
      return GameRoutine_152c1d0(a1);
    }
    return result;
  }
  if (game_gmap_GmapClock_instance_ == 0 ||
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
          0) {
    goto LABEL_23;
  }
  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    v5 = GameData_22416c0;
    v8 = *(unsigned __int8*)(GameData_22416c0 + 53);
    goto LABEL_17;
  }
  v4 = GameData_2130e70;
  v5 = *GameData_2130e70;
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    v8 = *(unsigned __int8*)(v5 + 53);
    goto LABEL_20;
  }
  v6 = *(unsigned __int8*)(v5 + 56);
  v11 = &GameData_1adfa87;
  result = game_HashString(&GameData_1adfa87);
  v7 = game_GameModeData_instance_;
  v10 = result;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v10);
    if (result == 0) {
      if (v6 != 0) {
        goto LABEL_23;
      }
      goto LABEL_14;
    }
    v7 = *(_DWORD*)(result + 32) != 0;
  }
  if (v6 == v7) {
  LABEL_14:
    v5 = *v4;
    v3 = game_GameModeData_instance_;
    v8 = *(unsigned __int8*)(*v4 + 53);
    if (game_GameModeData_instance_ == 0) {
    LABEL_17:
      if (v8 == 0) {
        v9 = 0;
        goto LABEL_22;
      }
      goto LABEL_23;
    }
  LABEL_20:
    if (v8 == *(unsigned __int8*)(v3 + 15)) {
      v9 = *(_DWORD*)(v3 + 64);
    LABEL_22:
      if (*(_DWORD*)(v5 + 44) == v9) {
        return result;
      }
    }
  }
LABEL_23:
  v11 = &GameData_1ae1f1c;
  result = game_HashString(&GameData_1ae1f1c);
  v10 = result;
  if (game_GameModeData_instance_ == 0) {
    return TroopMgr_134ebe0(result);
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), &v10);
  if (result == 0 || *(_DWORD*)(result + 32) == 0) {
    return TroopMgr_134ebe0(result);
  }
  return result;
}

__int64 game_gmap_ProcGmapSeq_OpenEventBranch(__int64 a1)
{
  __int64 result;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64* v12;
  int v13;
  __int64 v14;
  char v15;
  __int64 (**v16)();
  void* v17;
  char* v18;
  __int64 (***v19)();

  if (*(_BYTE*)(a1 + 306) == 1) {
    result = *(_QWORD*)(a1 + 192);
    *(_QWORD*)(a1 + 152) = 0;
    *(_QWORD*)(a1 + 192) = 0;
    if (result == a1 + 160) {
      v3 = 32;
    }
    else {
      if (result == 0) {
        goto LABEL_12;
      }
      v3 = 40;
    }
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v3))((__int64)result);
  LABEL_12:
    v5 = *(_QWORD*)(a1 + 8);
    if (v5 == 0) {
      return result;
    }
    while (1) {
      if (*(_BYTE*)v5 == 2) {
        if (*(_DWORD*)(v5 + 32) == 18) {
          *(_QWORD*)(a1 + 16) = v5;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v5 == 0) {
        return result;
      }
      v5 += 64;
    }
  }
  result = MiasmaManager_14a91c0(*(_QWORD*)(GameData_22416b0 + 8));
  if ((result & 1) != 0) {
    goto LABEL_6;
  }
  if (**(_QWORD**)(GameData_21c96f8 + 16) != 0) {
    v4 = 11;
    goto LABEL_9;
  }
  result = SpotMgr_1335920();
  if ((result & 1) != 0) {
    goto LABEL_6;
  }
  v17 = &GameData_1ab7dd7;
  v16 = (__int64 (**)())game_HashString_alt1(&GameData_1ab7dd7, v6);
  if (game_GameModeData_instance_ != 0) {
    v7 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v16);
    if (v7 != 0 && *(_DWORD*)(v7 + 32) != 0 &&
        game_GameModeData_instance_ != 0 &&
        *(_QWORD*)(game_GameModeData_instance_ + 24) != 0) {
      result = GameRoutine_1377920(a1);
      v4 = 2;
      goto LABEL_9;
    }
  }
  if (*(_BYTE*)(a1 + 308) == 1) {
    GameRoutine_887920(&v16, &GameData_1ae1f43);
    result = GameRoutine_162aea0(a1, &v16);
    if (result != 0) {
    LABEL_6:
      v4 = 2;
    LABEL_9:
      *(_DWORD*)(a1 + 152) = v4;
      return result;
    }
  }
  v19 = nullptr;
  v8 = GameRoutine_104f0e0(a1, &v16);
  result = (__int64)v19;
  if (v19 == &v16) {
    v9 = 4;
  }
  else {
    if (v19 == nullptr) {
      goto LABEL_35;
    }
    v9 = 5;
  }
  result = (*v19)[v9]();
LABEL_35:
  if ((v8 & 1) != 0) {
    goto LABEL_6;
  }
  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
    result = GameRoutine_9d5430(a1);
    if ((result & 1) != 0) {
      goto LABEL_6;
    }
  }
  result = GameRoutine_887a40(a1);
  if ((result & 1) != 0) {
    goto LABEL_6;
  }
  result = GmapSituation_14dbd80();
  if ((result & 1) != 0) {
    v4 = 4;
    goto LABEL_9;
  }
  v15 = 0;
  v16 = GameData_1fa6ad8;
  v17 = (void*)a1;
  v19 = &v16;
  v18 = &v15;
  TroopMgr_134b560(*(_QWORD*)(GameData_21c96e8 + 8), &v16);
  result = (__int64)v19;
  if (v19 == &v16) {
    v10 = 4;
  }
  else {
    if (v19 == nullptr) {
      goto LABEL_47;
    }
    v10 = 5;
  }
  result = (*v19)[v10]();
LABEL_47:
  if ((v15 & 1) == 0) {
    *(_BYTE*)(a1 + 305) = 0;
    *(_BYTE*)(*(_QWORD*)(*GameData_212d700[0] + 8) + 56LL) = 1;
    v11 = GmapSituation_14dbe20();
    v12 = GameData_212d728[0];
    if ((v11 & 1) != 0) {
      v13 = 2;
    }
    else {
      v13 = 0;
    }
    GameRoutine_17bcef0(
        *(_DWORD*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5856LL) & 0xFFFFFFFD |
        v13);
    v14 = GameRoutine_19a0e60(*(_QWORD*)(*v12 + 8) + 32LL);
    GameRoutine_17bcf90_alt1(v14);
    GameRoutine_175bde0(*(_QWORD*)(*v12 + 8) + 5800LL);
    GameRoutine_175b880(*(_QWORD*)(*v12 + 8) + 5800LL);
    result = GameRoutine_17bce50(1);
    if (*(_QWORD*)(*(_QWORD*)(GameData_21c96f8 + 16) + 8LL) != 0) {
      *(_DWORD*)(a1 + 276) = 7;
      v4 = 12;
    }
    else {
      v4 = 13;
    }
    goto LABEL_9;
  }
  return result;
}

__int64 ProcGmapSeq_881f20(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  if (game_GameModeData_instance_ != 0 &&
          (*(_BYTE*)(game_GameModeData_instance_ + 92) & 0x42) != 0 ||
      game_gmap_GmapClock_instance_ == 0 ||
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
          0 ||
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
    return result;
  }
  v1 = *(_QWORD**)(result + 192);
  *(_QWORD*)(result + 152) = 0;
  *(_QWORD*)(result + 192) = 0;
  if (v1 == (_QWORD*)(result + 160)) {
    v3 = result;
    v2 = 32;
  }
  else {
    if (v1 == nullptr) {
      goto LABEL_11;
    }
    v2 = 40;
    v3 = result;
  }
  (*(void (**)(_QWORD*))(*v1 + v2))(v1);
  result = v3;
LABEL_11:
  v4 = *(_QWORD*)(result + 8);
  if (v4 != 0) {
    while (1) {
      if (*(_BYTE*)v4 == 2) {
        if (*(_DWORD*)(v4 + 32) == 15) {
          *(_QWORD*)(result + 16) = v4;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v4 == 0) {
        return result;
      }
      v4 += 64;
    }
  }
  return result;
}

__int64 ProcGmapSeq_882080()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  _QWORD v3[2];

  v3[1] = &GameData_1ade186;
  result = game_HashString(&GameData_1ade186);
  v3[0] = result;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v3);
    if (result != 0 && *(int*)(result + 32) >= 1) {
      v1 = *(_QWORD*)(GameData_21ca310 + 56);
      LOBYTE(v3[0]) = 4;
      result = *(_QWORD*)(v1 + 556168);
      if (result != 0) {
        do {
          v2 = *(_QWORD*)(result + 432);
          game_Unit_Unknown6c46e0(result, v3);
          result = v2;
        } while (v2 != 0);
      }
    }
  }
  return result;
}

__int64 ProcGmapSeq_8827e0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64** v11;
  __int64** v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;

  v1 = GameData_21c96e8;
  v2 = *(_QWORD*)(GameData_21c96e8 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64***)(v2 + 8);
  v5 = *(__int64***)(v2 + 16);
  if (v3 < 0) {
    for (; v4 != v5; ++v4) {
      v6 = *v4;
      if ((*v4)[12] == 0 && v6[69] == 0) {
        goto LABEL_11;
      }
    }
  LABEL_7:
    v8 = game_gmap_SpotMgr_GetCurrentSpot(a1);
    v1 = GameData_21c96e8;
    goto LABEL_12;
  }
  if (v4 == v5) {
    goto LABEL_7;
  }
  while (1) {
    v7 = *v4++;
    v6 = v7;
    if (*((_DWORD*)v7 + 21) == v3) {
      break;
    }
    if (v4 == v5) {
      goto LABEL_7;
    }
  }
LABEL_11:
  v8 = *v6;
LABEL_12:
  *(_BYTE*)(v8 + 178) |= 1u;
  v9 = *(_QWORD*)(v1 + 8);
  v10 = *(_DWORD*)(v9 + 56);
  v11 = *(__int64***)(v9 + 8);
  v12 = *(__int64***)(v9 + 16);
  if (v10 < 0) {
    for (; v11 != v12; ++v11) {
      v13 = *v11;
      if ((*v11)[12] == 0 && v13[69] == 0) {
        goto LABEL_22;
      }
    }
  }
  else if (v11 != v12) {
    while (1) {
      v14 = *v11++;
      v13 = v14;
      if (*((_DWORD*)v14 + 21) == v10) {
        break;
      }
      if (v11 == v12) {
        goto LABEL_18;
      }
    }
  LABEL_22:
    v15 = *v13;
    return SpotMgr_1333f20(v15);
  }
LABEL_18:
  v15 = game_gmap_SpotMgr_GetCurrentSpot(v8);
  return SpotMgr_1333f20(v15);
}

__int64 ProcGmapSeq_882900(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  char* v7;
  char* v8;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  signed __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  _BYTE* v26;
  char v27;
  __int64 v28;
  __int64 v29;

  v2 = TroopMgr_13486a0();
  result = TroopMgr_1348ec0(v2);
  v4 = *(_QWORD*)(*GameData_212c790 + 8);
  v5 = *(__int64**)(v4 + 8);
  v6 = *(__int64**)(v4 + 16);
  if (v5 != v6) {
    v29 = a1;
    v7 = nullptr;
    v8 = nullptr;
    v9 = 0;
    v10 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v11 = *v5;
      if ((*(_WORD*)(*v5 + 544) & 0x40) != 0) {
        if ((unsigned __int64)v8 < v9) {
          *(_QWORD*)v8 = v11;
          v8 += 8;
        }
        else {
          v12 = (char*)(v8 - v7);
          v13 = (v8 - v7) >> 3;
          v14 = v13 + 1;
          if ((unsigned __int64)(v13 + 1) >> 61 != 0) {
            goto LABEL_38;
          }
          if ((__int64)(v9 - (_QWORD)v7) >> 2 > v14) {
            v14 = (__int64)(v9 - (_QWORD)v7) >> 2;
          }
          if (v9 - (unsigned __int64)v7 >= 0x7FFFFFFFFFFFFFF8LL) {
            v15 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v15 = v14;
          }
          if (v15 != 0) {
            if (v15 >> 61 != 0) {
              GameRoutine_60a210(result);
            }
            v16 = fw_memory_HeapManager_Allocate(*v10, 8 * v15, 16, 0);
          }
          else {
            v16 = 0;
          }
          v9 = v16 + 8 * v15;
          v17 = (char*)(v8 - v7);
          v18 = (__int64)&v12[v16 + -8 * v13];
          *(_QWORD*)&v12[v16] = v11;
          v8 = &v12[v16 + 8];
          result = memcpy(v18, v7, v17);
          if (v7 != nullptr) {
            v19 = 128;
            if (*(_QWORD*)(*v10 + 200LL) == 0) {
              v19 = 56;
            }
            result = nn_mem_StandardAllocator_Free_alt1(*v10 + v19);
          }
          v7 = (char*)v18;
        }
      }
      ++v5;
    } while (v5 != v6);
    v20 = v8 - v7;
    if (v8 != v7) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f1610,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21f1610) != 0) {
        GameData_21f1550 = 13;
        GameData_21f1590 = 13;
        GameData_21f1558 = 0;
        GameData_21f1560 = (__int64)GameRoutine_888560;
        GameData_21f1568 = 0;
        GameData_21f1570 = 0;
        GameData_21f1578 = 0;
        GameData_21f1580 = 0;
        GameData_21f1588 = 0;
        GameData_21f15a8 = 0;
        GameData_21f15b0 = 0;
        GameData_21f15b8 = 0;
        GameData_21f15c0 = 0;
        GameData_21f15c8 = 0;
        GameData_21f15d0 = 0;
        GameData_21f15f8 = 0;
        GameData_21f1598 = 0;
        GameData_21f15a0 = (__int64)GameRoutine_8885e0;
        GameData_21f1600 = 0;
        GameData_21f1608 = 0;
        GameData_21f15f0 = 0;
        GameData_21f15e0 = 0;
        GameData_21f15e8 = 0;
        GameData_21f15d8 = 0;
        __cxa_guard_release(&GameData_21f1610);
      }
      v21 = fw_memory_HeapManager_Allocate(*v10, 176, 16, 0);
      v22 = GameData_212c608[0];
      *(_QWORD*)(v21 + 88) = 0;
      *(_QWORD*)(v21 + 96) = 0;
      *(_QWORD*)(v21 + 104) = 0;
      *(_QWORD*)(v21 + 112) = 0;
      *(_QWORD*)(v21 + 120) = 0;
      *(_QWORD*)(v21 + 128) = 0;
      *(_WORD*)(v21 + 136) = 0;
      *(_QWORD*)(v21 + 16) = 0;
      *(_QWORD*)(v21 + 24) = "NULL";
      *(_QWORD*)(v21 + 32) = 0;
      *(_QWORD*)(v21 + 138) = 0;
      *(_QWORD*)(v21 + 144) = 0;
      *(_QWORD*)(v21 + 40) = 0;
      *(_QWORD*)(v21 + 48) = 0;
      *(_QWORD*)(v21 + 56) = 0;
      *(_QWORD*)(v21 + 64) = 0;
      *(_QWORD*)(v21 + 72) = 0;
      *(_QWORD*)(v21 + 80) = 0;
      *(_QWORD*)v21 = v22 + 16;
      *(_QWORD*)(v21 + 8) = 0;
      result = game_ProcInst_Register(v21);
      *(_QWORD*)(v21 + 152) = 0;
      *(_QWORD*)(v21 + 160) = 0;
      *(_QWORD*)(v21 + 168) = 0;
      *(_QWORD*)v21 = game_gmap_anonymous_ProcGmapEscapeTroopSeq_vtable;
      if (v20 < 0) {
      LABEL_38:
        GameRoutine_888610(result);
      }
      v23 = fw_memory_HeapManager_Allocate(*v10, v8 - v7, 16, 0);
      v24 = (char*)(v23 + v20);
      *(_QWORD*)(v21 + 152) = v23;
      *(_QWORD*)(v21 + 160) = v23;
      *(_QWORD*)(v21 + 168) = v23 + v20;
      memcpy(v23, v7, v8 - v7);
      *(_QWORD*)(v21 + 160) = v24;
      v25 = *(_QWORD*)(v29 + 40);
      if (v25 != 0) {
        *(_QWORD*)(v25 + 48) = v21;
        *(_QWORD*)(v21 + 56) = *(_QWORD*)(v29 + 40);
      }
      *(_QWORD*)(v29 + 40) = v21;
      *(_QWORD*)(v21 + 24) = "ProcGmapEscapeTroopSeq";
      *(_QWORD*)(v21 + 32) = v29;
      *(_DWORD*)(v21 + 140) = game_HashString32("ProcGmapEscapeTroopSeq");
      *(_QWORD*)(v21 + 64) = 0;
      *(_QWORD*)(v21 + 72) = 24;
      *(_QWORD*)(v21 + 80) = 1;
      *(_QWORD*)(v21 + 8) = &GameData_21f1550;
      *(_QWORD*)(v21 + 16) = &GameData_21f1550;
      (*(void (**)(__int64))(*(_QWORD*)v21 + 32LL))(v21);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 136LL))(v21);
      if ((result & 1) != 0 && (*(_WORD*)(v21 + 136) & 0x100) == 0) {
        *(_WORD*)(v21 + 136) |= 0x100u;
      }
      v26 = *(_BYTE**)(v21 + 32);
      v27 = v26[138];
      if (v27 == 0) {
        result = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v26 + 64LL))(v26);
        v27 = v26[138];
      }
      v26[138] = v27 + 1;
      *(_WORD*)(v21 + 136) |= 2u;
    }
    if (v7 != nullptr) {
      v28 = 128;
      if (*(_QWORD*)(*v10 + 200LL) == 0) {
        v28 = 56;
      }
      return nn_mem_StandardAllocator_Free_alt1(*v10 + v28);
    }
  }
  return result;
}

__int64 ProcGmapSeq_882cb0(__int64 a1)
{
  __int64* v2;
  __int64 result;
  unsigned __int8* v4;
  unsigned int v5;
  bool v6;
  int v7;

  v2 = GameData_212d718;
  result = GameRoutine_1314ec0(*(_QWORD*)(*GameData_212d718 + 16),
                               *(_QWORD*)(*GameData_212d708 + 16) + 80LL, 0);
  if (*(float*)(*(_QWORD*)(*v2 + 16) + 796LL) ==
      *(float*)(*(_QWORD*)(*v2 + 16) + 792LL)) {
    v4 = *(unsigned __int8**)(a1 + 16);
    if (v4 != nullptr) {
      v5 = *v4;
      v6 = v5 > 0x10;
      v7 = (1 << v5) & 0x1CE00;
      if (!v6 && v7 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 ProcGmapSeq_882f10(__int64 result)
{
  __int64 v1;

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v1 = result;
    result = GameRoutine_134c680(result);
    if (result == 0) {
      return GameRoutine_1522780(v1);
    }
  }
  return result;
}

__int64 game_gmap_ProcGmapSeq_TryGetFarmProduct(__int64 a1)
{
  __int64 result;
  __int64 v2;
  _QWORD v3[4];
  _QWORD* v4;
  char v5;

  v5 = 0;
  v3[0] = GameData_1fa6c10;
  v3[1] = a1;
  v4 = v3;
  v3[2] = &v5;
  TroopMgr_13460a0(v3);
  result = (__int64)v4;
  if (v4 == v3) {
    v2 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_6;
    }
    v2 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v4 + v2))((__int64)v4);
LABEL_6:
  if (v5 == 1) {
    *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5835LL) = 1;
  }
  return result;
}

__int64 ProcGmapSeq_883220()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int* v6;
  int* v7;
  __int64 result;

  v0 = *(_QWORD**)(GameData_21f1660 + 8);
  v2 = v0[3];
  v1 = v0[4];
  v4 = *v0;
  v3 = v0[1];
  if (v1 != v2 || v3 != v4) {
    v6 = (int*)(v0 + 6);
    v7 = (int*)v0 + 13;
    if (v1 == v2) {
      v1 = v3;
      v2 = v4;
      v7 = v6;
    }
    if (0xAAAAAAAAAAAAAAABLL * ((v1 - v2) >> 3) > *v7) {
      return GameRoutine_15255d0();
    }
  }
  return result;
}

__int64 ProcGmapSeq_8832a0(__int64 result)
{
  __int64 v1;
  int v2;
  __int64 v3;
  int v4;
  __int64** v5;
  __int64** v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  _QWORD v11[2];

  v1 = result;
  if (game_GameModeData_instance_ == 0 ||
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) == 0) {
    if (*(_BYTE*)(result + 307) == 1) {
    LABEL_4:
      v2 = 18;
    LABEL_25:
      *(_DWORD*)(v1 + 152) = v2;
      return result;
    }
    v11[1] = &GameData_1ade186;
    result = game_HashString(&GameData_1ade186);
    v11[0] = result;
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v11);
      if (result != 0 && *(int*)(result + 32) > 0) {
      LABEL_23:
        if (*(_DWORD*)(v1 + 152) != 0) {
          return result;
        }
        v2 = 2;
        goto LABEL_25;
      }
    }
    v3 = *(_QWORD*)(GameData_21c96e8 + 8);
    v4 = *(_DWORD*)(v3 + 56);
    v5 = *(__int64***)(v3 + 8);
    v6 = *(__int64***)(v3 + 16);
    if (v4 < 0) {
      if (v5 != v6) {
        while (1) {
          v7 = *v5;
          if ((*v5)[12] == 0 && v7[69] == 0) {
            break;
          }
          if (++v5 == v6) {
            goto LABEL_14;
          }
        }
      LABEL_19:
        result = *v7;
        v9 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_23;
        }
        goto LABEL_20;
      }
    }
    else {
      while (v5 != v6) {
        v8 = *v5++;
        v7 = v8;
        if (*((_DWORD*)v8 + 21) == v4) {
          goto LABEL_19;
        }
      }
    }
  LABEL_14:
    result = game_gmap_SpotMgr_GetCurrentSpot(result);
    v9 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_23;
    }
  LABEL_20:
    v10 = *(_QWORD*)(v9 + 24);
    if (v10 != 0 && *(_BYTE*)(v10 + 152) == 4 &&
        *(_QWORD*)(v10 + 168) == *(_QWORD*)(result + 120)) {
      goto LABEL_4;
    }
    goto LABEL_23;
  }
  return result;
}

__int64 ProcGmapSeq_883400()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64* v9;
  __int64* i;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64**)(v0 + 8);
  if (v1 < 0) {
    while (1) {
      v4 = *v2;
      if (*(_QWORD*)(*v2 + 96) == 0 && *(_QWORD*)(v4 + 552) == 0) {
        break;
      }
      ++v2;
    }
  }
  else {
    v5 = *v2;
    v3 = v2 + 1;
    v4 = v5;
    if (*(_DWORD*)(v5 + 84) != v1) {
      do {
        v6 = *v3++;
        v4 = v6;
      } while (*(_DWORD*)(v6 + 84) != v1);
    }
  }
  result = GameRoutine_888970(v4 + 24, 0, 0, 0);
  v8 = *(_QWORD*)(GameData_21c96e8 + 8);
  v9 = *(__int64**)(v8 + 8);
  for (i = *(__int64**)(v8 + 16); v9 != i; ++v9) {
    result = *v9;
    if ((*(_QWORD*)(*v9 + 96) | *(_QWORD*)(*v9 + 552)) != 0 ||
        game_GameModeData_instance_ == 0 ||
        *(_DWORD*)(game_GameModeData_instance_ + 60) != 3 ||
        (*(_DWORD*)(result + 84) & 0x80000000) == 0) {
      result = GameRoutine_133f780(result, *(_QWORD*)result, 1);
    }
  }
  return result;
}

__int64 ProcGmapSeq_883510(__int64 a1)
{
  __int64 result;

  result = GameRoutine_134be40();
  *(_BYTE*)(a1 + 305) = 1;
  return result;
}

__int64 ProcGmapSeq_883660(__int64 result)
{
  if (GameData_21c9600 != 0) {
    *(_DWORD*)(GameData_21c9600 + 152) = 2;
  }
  *(_DWORD*)(result + 152) = 19;
  return result;
}

__int64 ProcGmapSeq_883680(__int64 result)
{
  if ((*(_BYTE*)(result + 310) & 1) == 0 && game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    return GameRoutine_120e900();
  }
  return result;
}

__int64 ProcGmapSeq_883860(__int64 result)
{
  if (game_GameModeData_instance_ != 0 &&
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 0x10) != 0) {
    if (*(_DWORD*)(GameData_21c9608 + 308) != 5) {
      *(_DWORD*)(GameData_21c9608 + 308) = 5;
    }
    *(_DWORD*)(result + 152) = 3;
  }
  return result;
}

__int64 ProcGmapSeq_8840d0(__int64 result)
{
  if (GameData_21c9600 != 0) {
    *(_DWORD*)(GameData_21c9600 + 152) = 2;
  }
  *(_DWORD*)(result + 152) = 19;
  return result;
}

__int64 ProcGmapSeq_884100(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64** v15;
  __int64** v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  int v20;
  __int64* v21;
  __int64* v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  _QWORD* i;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v40;
  __int64 (**v41)();
  _QWORD* v42;
  __int64 (**j)();
  __int64 (*v44)();
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  __int64 (*v48)();
  __int64 v49;
  __int64 v50;
  bool v51;
  __int64 v52;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  __int64* v59;
  __int64* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 (**v64)();
  __int64 (**v65)();
  __int64 (**v66)();
  __int64 (***v67)();

  v1 = result;
  v2 = GameData_212c790;
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  if (v4 < 0) {
    while (1) {
      v7 = *v5;
      if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v7 + 552) == 0) {
        break;
      }
      ++v5;
    }
  }
  else {
    v8 = *v5;
    v6 = v5 + 1;
    v7 = v8;
    if (*(_DWORD*)(v8 + 84) != v4) {
      do {
        v9 = *v6++;
        v7 = v9;
      } while (*(_DWORD*)(v9 + 84) != v4);
    }
  }
  v10 = *(_QWORD*)(v7 + 8);
  if (v10 != 0 || *(_BYTE*)(result + 309) != 0) {
    if (*(_BYTE*)(result + 309) == 0) {
      goto LABEL_94;
    }
    v66 = (__int64 (**)())&GameData_1ade186;
    v65 = (__int64 (**)())game_HashString(&GameData_1ade186);
    if (game_GameModeData_instance_ == 0 ||
        (v12 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), &v65)) == 0 ||
        *(int*)(v12 + 32) < 1) {
      v19 = *(_QWORD*)(*v2 + 8);
      v20 = *(_DWORD*)(v19 + 56);
      v21 = *(__int64**)(v19 + 8);
      v22 = *(__int64**)(v19 + 16);
      v23 = v21;
      if (v20 < 0) {
        while (1) {
          v24 = *v23;
          if (*(_QWORD*)(*v23 + 96) == 0 && *(_QWORD*)(v24 + 552) == 0) {
            break;
          }
          if (++v23 == v22) {
          LABEL_24:
            v24 = 0;
            break;
          }
        }
      }
      else {
        while (1) {
          v25 = *v23++;
          v24 = v25;
          if (*(_DWORD*)(v25 + 84) == v20) {
            break;
          }
          if (v23 == v22) {
            goto LABEL_24;
          }
        }
      }
      if (v20 < 0) {
        for (i = v21 + 1;; ++i) {
          v27 = (_QWORD*)*(i - 1);
          if (v27[12] == 0 && v27[69] == 0) {
            break;
          }
        }
      }
      else {
        v28 = *v21;
        v26 = v21 + 1;
        v27 = (_QWORD*)v28;
        if (*(_DWORD*)(v28 + 84) != v20) {
          do {
            v29 = *v26++;
            v27 = (_QWORD*)v29;
          } while (*(_DWORD*)(v29 + 84) != v20);
        }
      }
      v31 = v27[1];
      v32 = fw_memory_g_heap_manager_ptr;
      v33 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
      *v33 = v31;
      GameRoutine_888970(v24 + 24, v33, v33 + 1, 1);
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)v32 + 200LL) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v32 + v34);
      v35 = v24;
      if (*(_QWORD*)(v24 + 32) != *(_QWORD*)(v24 + 24)) {
        if ((v36 = *(_QWORD*)(v24 + 96), v37 = *(_QWORD*)(v24 + 552),
             (v36 | v37) == 0) ||
            v36 == 0 && v37 != 0 && *(_QWORD*)(v24 + 104) == 0 &&
                *(__int16*)(v24 + 642) * *(__int16*)(v24 + 640) *
                        *(__int16*)(v24 + 644) ==
                    0 &&
                *(_QWORD*)(v37 + 352) == 0 ||
            (v35 = v24, (*(_WORD*)(v24 + 544) & 3) != 2)) {
          v35 = *(_QWORD*)(v24 + 24);
        }
      }
      if ((*(_BYTE*)(*(_QWORD*)v35 + 113LL) & 1) == 0) {
        v38 = *(_QWORD*)(v24 + 96);
        if (v38 != 0) {
          if (*(_BYTE*)(v38 + 130) != 0 || *(_BYTE*)(v24 + 512) == 2) {
            goto LABEL_94;
          }
        }
        else if (*(_BYTE*)(v24 + 512) == 2) {
          goto LABEL_94;
        }
        *(_BYTE*)(v24 + 512) = 2;
        if (GameData_21f1618 != 0) {
          GameRoutine_995200(v24 + 112);
        }
      }
    LABEL_94:
      v55 = *(_QWORD*)(*v2 + 8);
      v67 = &v65;
      v65 = GameData_202ca88;
      TroopMgr_13460a0(&v65);
      result = (__int64)v67;
      if (v67 == &v65) {
        v56 = 4;
      }
      else {
        if (v67 == nullptr) {
        LABEL_99:
          *(_BYTE*)(v55 + 60) = 1;
          v57 = *(_QWORD*)(*v2 + 8);
          v58 = *(_DWORD*)(v57 + 56);
          v59 = *(__int64**)(v57 + 8);
          if (v58 < 0) {
            while (1) {
              v61 = *v59;
              if (*(_QWORD*)(*v59 + 96) == 0 && *(_QWORD*)(v61 + 552) == 0) {
                break;
              }
              ++v59;
            }
          }
          else {
            v62 = *v59;
            v60 = v59 + 1;
            v61 = v62;
            if (*(_DWORD*)(v62 + 84) != v58) {
              do {
                v63 = *v60++;
                v61 = v63;
              } while (*(_DWORD*)(v63 + 84) != v58);
            }
          }
          *(_QWORD*)(v61 + 8) = v10;
          *(_DWORD*)(v1 + 292) = 0;
          return result;
        }
        v56 = 5;
      }
      result = (*v67)[v56]();
      goto LABEL_99;
    }
    v13 = *(_QWORD*)(*v2 + 8);
    v14 = *(_DWORD*)(v13 + 56);
    v15 = *(__int64***)(v13 + 8);
    v16 = *(__int64***)(v13 + 16);
    if (v14 < 0) {
      for (; v15 != v16; ++v15) {
        v17 = *v15;
        if ((*v15)[12] == 0 && v17[69] == 0) {
          goto LABEL_60;
        }
      }
    }
    else if (v15 != v16) {
      while (1) {
        v18 = *v15++;
        v17 = v18;
        if (*((_DWORD*)v18 + 21) == v14) {
          break;
        }
        if (v15 == v16) {
          goto LABEL_56;
        }
      }
    LABEL_60:
      v40 = *v17;
      goto LABEL_61;
    }
  LABEL_56:
    v40 = game_gmap_SpotMgr_GetCurrentSpot(v12);
  LABEL_61:
    GameRoutine_134bbe0(&v65, v40);
    v41 = v66;
    v64 = v65;
    if (v65 != v66) {
      v42 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      for (j = v65; j != v41; ++j) {
        v44 = *j;
        v45 = *((_QWORD*)*j + 1);
        v46 = (_QWORD*)fw_memory_HeapManager_Allocate(*v42, 8, 16, 0);
        *v46 = v45;
        GameRoutine_888970((char*)v44 + 24, v46, v46 + 1, 1);
        if (*(_QWORD*)(*v42 + 200LL) != 0) {
          v47 = 128;
        }
        else {
          v47 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v42 + v47);
        v48 = v44;
        if (*((_QWORD*)v44 + 4) != *((_QWORD*)v44 + 3)) {
          if ((v49 = *((_QWORD*)v44 + 12), v50 = *((_QWORD*)v44 + 69),
               (v49 | v50) == 0) ||
              v49 == 0 &&
                  (v50 != 0 ? (v51 = *((_QWORD*)v44 + 13) == 0) : (v51 = false),
                   v51 &&
                       *((__int16*)v44 + 321) * *((__int16*)v44 + 320) *
                               *((__int16*)v44 + 322) ==
                           0 &&
                       *(_QWORD*)(v50 + 352) == 0) ||
              (v48 = v44, (*((_WORD*)v44 + 272) & 3) != 2)) {
            v48 = *((__int64 (**)())v44 + 3);
          }
        }
        if ((*(_BYTE*)(*(_QWORD*)v48 + 113LL) & 1) != 0) {
          continue;
        }
        v52 = *((_QWORD*)v44 + 12);
        if (v52 != 0) {
          if (*(_BYTE*)(v52 + 130) == 0 && *((_BYTE*)v44 + 512) != 2) {
          LABEL_87:
            *((_BYTE*)v44 + 512) = 2;
            if (GameData_21f1618 != 0) {
              GameRoutine_995200((char*)v44 + 112);
            }
          }
        }
        else if (*((_BYTE*)v44 + 512) != 2) {
          goto LABEL_87;
        }
      }
    }
    if (v64 != nullptr) {
      v54 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v54 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v54);
    }
    v2 = &GameData_21c96e8;
    goto LABEL_94;
  }
  return result;
}

__int64 ProcGmapSeq_884920(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  int v4;
  __int64* v5;
  _QWORD* v6;
  __int64* v7;
  __int64 v8;
  _QWORD* i;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64** v20;
  __int64** v21;
  __int64* v22;
  __int64* v23;
  __int64 v24;
  __int64 (**v25)();
  __int64 (**v26)();
  __int64 (**v27)();
  __int64 (*v28)();
  __int64 (*v29)();
  __int64 v30;
  __int64 v31;
  bool v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64* v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64* v49;
  int v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  __int64 v54;
  __int64 (**v55)();
  __int64 (**v56)();
  __int64 (***v57)();

  v1 = result;
  v2 = GameData_212c790;
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  if (v4 < 0) {
    for (i = v5 + 1;; ++i) {
      v6 = (_QWORD*)*(i - 1);
      if (v6[12] == 0 && v6[69] == 0) {
        break;
      }
    }
  }
  else {
    v6 = (_QWORD*)*v5;
    if (*(_DWORD*)(*v5 + 84) != v4) {
      v7 = v5 + 1;
      do {
        v8 = *v7++;
        v6 = (_QWORD*)v8;
      } while (*(_DWORD*)(v8 + 84) != v4);
    }
  }
  if (v6[1] == 0) {
    *(_DWORD*)(result + 152) = 13;
    return result;
  }
  if (*(_BYTE*)(result + 309) == 1) {
    v10 = *(__int64**)(v3 + 16);
    if (v4 < 0) {
      for (; v5 != v10; ++v5) {
        v11 = (__int64*)*v5;
        if (*(_QWORD*)(*v5 + 96) == 0 && v11[69] == 0) {
          goto LABEL_34;
        }
      }
    }
    else if (v5 != v10) {
      while (1) {
        v12 = *v5++;
        v11 = (__int64*)v12;
        if (*(_DWORD*)(v12 + 84) == v4) {
          break;
        }
        if (v5 == v10) {
          goto LABEL_30;
        }
      }
    LABEL_34:
      v24 = *v11;
      goto LABEL_35;
    }
  LABEL_30:
    v24 = game_gmap_SpotMgr_GetCurrentSpot(result);
  LABEL_35:
    GameRoutine_134bbe0(&v55, v24);
    v25 = v55;
    v26 = v56;
    if (v55 != v56) {
      v27 = v55;
      do {
        v28 = *v27;
        TroopMgr_1341640(*v27);
        v29 = v28;
        if (*((_QWORD*)v28 + 4) != *((_QWORD*)v28 + 3)) {
          if ((v30 = *((_QWORD*)v28 + 12), v31 = *((_QWORD*)v28 + 69),
               (v30 | v31) == 0) ||
              v30 == 0 &&
                  (v31 != 0 ? (v32 = *((_QWORD*)v28 + 13) == 0) : (v32 = false),
                   v32 &&
                       *((__int16*)v28 + 321) * *((__int16*)v28 + 320) *
                               *((__int16*)v28 + 322) ==
                           0 &&
                       *(_QWORD*)(v31 + 352) == 0) ||
              (v29 = v28, (*((_WORD*)v28 + 272) & 3) != 2)) {
            v29 = *((__int64 (**)())v28 + 3);
          }
        }
        if (*(_BYTE*)(*(_QWORD*)v29 + 113LL) == 1 &&
            *((_BYTE*)v28 + 512) != 0) {
          v33 = GameData_21f1618;
          *((_BYTE*)v28 + 512) = 0;
          if (v33 != 0) {
            GameRoutine_995200((char*)v28 + 112);
          }
        }
        ++v27;
      } while (v27 != v26);
    }
    if (v25 != nullptr) {
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v25);
    }
    goto LABEL_81;
  }
  if (v4 < 0) {
    do {
      do {
        v16 = *v5++;
      } while (*(_QWORD*)(v16 + 96) != 0);
    } while (*(_QWORD*)(v16 + 552) != 0);
  }
  else {
    v14 = (__int64*)*v5;
    v13 = v5 + 1;
    if (*((_DWORD*)v14 + 21) != v4) {
      do {
        v15 = *v13++;
      } while (*(_DWORD*)(v15 + 84) != v4);
    }
  }
  v17 = ((__int64 (*)(void))TroopMgr_1341640)();
  v18 = *(_QWORD*)(*v2 + 8);
  v19 = *(_DWORD*)(v18 + 56);
  v20 = *(__int64***)(v18 + 8);
  v21 = *(__int64***)(v18 + 16);
  if (v19 < 0) {
    for (; v20 != v21; ++v20) {
      v22 = *v20;
      if ((*v20)[12] == 0 && v22[69] == 0) {
        goto LABEL_63;
      }
    }
  LABEL_59:
    v35 = game_gmap_SpotMgr_GetCurrentSpot(v17);
    goto LABEL_64;
  }
  if (v20 == v21) {
    goto LABEL_59;
  }
  while (1) {
    v23 = *v20++;
    v22 = v23;
    if (*((_DWORD*)v23 + 21) == v19) {
      break;
    }
    if (v20 == v21) {
      goto LABEL_59;
    }
  }
LABEL_63:
  v35 = *v22;
LABEL_64:
  if (*(_BYTE*)(v35 + 113) != 1) {
    goto LABEL_81;
  }
  v36 = *(_QWORD*)(*v2 + 8);
  v37 = *(_DWORD*)(v36 + 56);
  v38 = *(__int64**)(v36 + 8);
  v39 = *(__int64**)(v36 + 16);
  if (v37 < 0) {
    if (v38 == v39) {
    LABEL_71:
      v40 = 0;
      if (*(_BYTE*)GameRoutine_200 == 0) {
        goto LABEL_81;
      }
      goto LABEL_79;
    }
    while (1) {
      v40 = *v38;
      if (*(_QWORD*)(*v38 + 96) == 0 && *(_QWORD*)(v40 + 552) == 0) {
        break;
      }
      if (++v38 == v39) {
        goto LABEL_71;
      }
    }
  }
  else if (v38 == v39) {
    v40 = 0;
  }
  else {
    while (1) {
      v41 = *v38++;
      v40 = v41;
      if (*(_DWORD*)(v41 + 84) == v37) {
        break;
      }
      if (v38 == v39) {
        goto LABEL_71;
      }
    }
  }
  if (*(_BYTE*)(v40 + 512) != 0) {
  LABEL_79:
    *(_BYTE*)(v40 + 512) = 0;
    if (GameData_21f1618 != 0) {
      GameRoutine_995200(v40 + 112);
    }
  }
LABEL_81:
  v42 = *(_QWORD*)(*v2 + 8);
  v57 = &v55;
  v55 = GameData_202cb08;
  TroopMgr_13460a0(&v55);
  if (v57 == &v55) {
    v43 = 4;
    goto LABEL_85;
  }
  if (v57 != nullptr) {
    v43 = 5;
  LABEL_85:
    (*v57)[v43]();
  }
  *(_BYTE*)(v42 + 60) = 0;
  v44 = GameRoutine_134c680_alt1();
  if (v44 != 0 && (GameRoutine_718130(v44, 0) & 1) != 0) {
    v45 = 5;
  }
  else if (*(_BYTE*)(v1 + 309) == 1) {
    v45 = 2;
  }
  else {
    v45 = 13;
  }
  *(_DWORD*)(v1 + 152) = v45;
  v46 = *v2;
  *(_DWORD*)(v1 + 292) = 0;
  v47 = *(_QWORD*)(v46 + 8);
  v48 = *(__int64**)(v47 + 8);
  v49 = *(__int64**)(v47 + 16);
  v50 = *(_DWORD*)(v47 + 56);
  if ((v50 & 0x80000000) == 0) {
    if (v48 == v49) {
      goto LABEL_103;
    }
    while (1) {
      v52 = *v48++;
      v51 = v52;
      if (*(_DWORD*)(v52 + 84) == v50) {
        goto LABEL_102;
      }
      if (v48 == v49) {
        goto LABEL_103;
      }
    }
  }
  if (v48 != v49) {
    while (1) {
      v51 = *v48;
      if (*(_QWORD*)(*v48 + 96) == 0 && *(_QWORD*)(v51 + 552) == 0) {
        break;
      }
      if (++v48 == v49) {
        goto LABEL_103;
      }
    }
  LABEL_102:
    GameRoutine_1317f10(*(_QWORD*)(*GameData_212d708 + 16), v51 + 48);
    v47 = *(_QWORD*)(*v2 + 8);
  }
LABEL_103:
  result = GameRoutine_134d2e0(v47);
  v53 = GameData_212d728[0];
  v54 = *GameData_212d728[0];
  *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5837LL) = 1;
  *(_DWORD*)(*(_QWORD*)(v54 + 8) + 5856LL) |= 0x10u;
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    result = MiasmaManager_14a9f60(result);
  }
  if (*(_BYTE*)(v1 + 309) == 1) {
    *(_DWORD*)(*(_QWORD*)(*v2 + 8) + 56LL) = -1;
    *(_BYTE*)(*(_QWORD*)(*v53 + 8) + 5844LL) = 0;
    *(_BYTE*)(v1 + 309) = 0;
  }
  return result;
}

__int64 ProcGmapSeq_884e80(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 280);
  if (v1 != 0) {
    return GameRoutine_1317f10(*(_QWORD*)(*GameData_212d708 + 16), v1 + 48);
  }
  return result;
}

__int64 ProcGmapSeq_884eb0(__int64 a1)
{
  GameRoutine_1340560(*(_QWORD*)(a1 + 280), 0);
  GameRoutine_133fe00(*(_QWORD*)(a1 + 280), 4, 1.0);
  return MiasmaManager_14a9bc0(*(_QWORD*)(a1 + 280));
}

__int64 ProcGmapSeq_884f00(__int64 result)
{
  int v1;
  int v2;
  __int64 v3;
  _DWORD* v4;
  unsigned __int8* v5;
  unsigned int v6;
  bool v7;
  int v8;

  if (game_ProcGameSkipView_instance_ != 0 &&
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3 &&
          (((v1 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v2 = 2)
               : (v2 = 3),
           (v2 & v1) == 0) ||
      *(float*)((v3 = *(_QWORD*)(result + 280)) + 276) == *(float*)(v3 + 272) &&
          (*(_QWORD*)(v4 = *(_DWORD**)(v3 + 656)) == 0 ||
           *(_DWORD*)(*(_QWORD*)v4 + 16LL) != v4[2])) {
    v5 = *(unsigned __int8**)(result + 16);
    if (v5 != nullptr) {
      v6 = *v5;
      v7 = v6 > 0x10;
      v8 = (1 << v6) & 0x1CE00;
      if (!v7 && v8 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    *(_WORD*)(result + 136) |= 8u;
  }
  return result;
}

__int64 ProcGmapSeq_884fb0(__int64 a1)
{
  __int64 result;

  result = TroopMgr_13485a0(*(_QWORD*)(a1 + 280));
  *(_DWORD*)(a1 + 152) = 15;
  return result;
}

__int64 ProcGmapSeq_884ff0(__int64 result)
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
  int v11;

  v1 = GameData_21c96f8;
  v2 = *(_QWORD*)(GameData_21c96f8 + 16);
  if (*(_BYTE*)(v2 + 128) == 1) {
    if (GameData_21c9600 != 0) {
      *(_DWORD*)(GameData_21c9600 + 152) = 5;
      v2 = *(_QWORD*)(v1 + 16);
    }
    v3 = *(unsigned int*)(v2 + 124);
    v11 = v3;
    v4 = *(_QWORD*)(GameData_21c96e8 + 8);
    *(_DWORD*)(v4 + 56) = v3;
    if ((v3 & 0x80000000) != 0) {
      *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5844LL) = 0;
    }
    else {
      v5 = result;
      v6 = *(_QWORD*)(v4 + 40);
      v7 = wmemchr(*(_QWORD*)(v4 + 32), v3);
      v8 = *(_QWORD*)(v4 + 32);
      v9 = *(_QWORD*)(v4 + 40);
      if (v7 != 0) {
        v6 = v7;
      }
      if (v6 != v9) {
        v10 = v9 - (v6 + 4);
        if (v9 != v6 + 4) {
          memmove(v6, v6 + 4, v9 - (v6 + 4));
          v8 = *(_QWORD*)(v4 + 32);
        }
        *(_QWORD*)(v4 + 40) = v6 + v10;
      }
      TroopMgr_1353fb0(v4 + 32, v8, &v11);
      result = v5;
    }
    *(_DWORD*)(result + 152) = 19;
  }
  else {
    *(_DWORD*)(result + 152) = 2;
  }
  return result;
}

__int64 ProcGmapSeq_885160(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 result;

  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64***)(v2 + 8);
  v5 = *(__int64***)(v2 + 16);
  if (v3 < 0) {
    for (; v4 != v5; ++v4) {
      v6 = *v4;
      if ((*v4)[12] == 0 && v6[69] == 0) {
        goto LABEL_11;
      }
    }
  }
  else if (v4 != v5) {
    while (1) {
      v7 = *v4++;
      v6 = v7;
      if (*((_DWORD*)v7 + 21) == v3) {
        break;
      }
      if (v4 == v5) {
        goto LABEL_7;
      }
    }
  LABEL_11:
    v8 = *v6;
    goto LABEL_12;
  }
LABEL_7:
  v8 = game_gmap_SpotMgr_GetCurrentSpot(a1);
LABEL_12:
  result = TalkOtherClanMenuItem_14d01c0(a1, v8);
  *(_DWORD*)(a1 + 152) = 2;
  return result;
}

void ProcGmapSeq_8855f0()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _DWORD* v4;
  __int64 v5;
  __int128 v6;
  int v7;
  __int128 v8;
  __int128 v9;

  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    v0 = GameData_212d728[0];
    v1 = *(_QWORD*)(*GameData_212d728[0] + 8);
    LayoutAccessor_155e830(*(_QWORD*)(v1 + 16), 1);
    v2 = game_hub_ProgressEventView_instance_;
    if (game_hub_ProgressEventView_instance_ != 0) {
      GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
      v2 = game_hub_ProgressEventView_instance_;
    }
    *(_DWORD*)(v1 + 5856) |= 0x10000u;
    v3 = *(_QWORD*)(*v0 + 8);
    *(_DWORD*)(v3 + 5856) = 65600;
    if (v2 != 0) {
      GameRoutine_17b8e80(v2, 1);
    }
    if (game_gameui_Footer_instance_ != 0) {
      LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
    }
    *(_DWORD*)(v3 + 5856) &= ~0x20000u;
    if (game_GameModeData_instance_ != 0) {
      v4 = *(_DWORD**)(game_GameModeData_instance_ + 24);
      if (v4 != nullptr) {
        v4 = (_DWORD*)GameRoutine_88cee0();
        if (v4 != nullptr) {
          v4 = (_DWORD*)game_gmap_SpotMgr_FindSpot(v4);
        }
      }
    }
    else {
      v4 = nullptr;
    }
    v5 = *(_QWORD*)(GameData_21f1658 + 16);
    v6 = *(_OWORD*)(v5 + 80);
    v7 = *(unsigned __int8*)(v5 + 208);
    *(_QWORD*)(v5 + 224) = v6;
    v8 = *(_OWORD*)(v5 + 224);
    *((_QWORD*)&v8 + 1) = DWORD2(v6);
    *(_OWORD*)(v5 + 224) = v8;
    if (v7 == 1) {
      *(_DWORD*)(v5 + 192) = v4[8];
      *(_DWORD*)(v5 + 196) = v4[9];
      v9 = *(_OWORD*)(v5 + 192);
      *((_QWORD*)&v9 + 1) = (unsigned int)v4[10];
      *(_OWORD*)(v5 + 192) = v9;
    }
    else {
      *(_QWORD*)(v5 + 200) = *((_QWORD*)v4 + 5);
      *(_QWORD*)(v5 + 192) = *((_QWORD*)v4 + 4);
      *(_BYTE*)(v5 + 208) = 1;
    }
    *(_QWORD*)(v5 + 240) = 1106247680;
  }
}

__int64 ProcGmapSeq_885840(__int64 a1)
{
  __int64 result;

  result = GameRoutine_120dd60();
  *(_DWORD*)(a1 + 152) = 19;
  if (GameData_21c9600 != 0) {
    *(_DWORD*)(GameData_21c9600 + 152) = 27;
  }
  return result;
}

__int64 ProcGmapSeq_885880(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int* v8;
  int* v9;
  unsigned __int64 v10;
  _BYTE* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  int* v16;
  int* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int8* v21;
  unsigned __int64 v22;
  unsigned __int8* v23;
  unsigned __int64 v24;
  _BYTE* v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;

  v1 = GameData_21f1660;
  v2 = *(_QWORD**)(GameData_21f1660 + 8);
  v4 = v2[3];
  v3 = v2[4];
  v6 = *v2;
  v5 = v2[1];
  if (v3 == v4 && v5 == v6) {
    v11 = (_BYTE*)(result + 307);
  LABEL_25:
    *v11 = 0;
    return result;
  }
  v8 = (int*)(v2 + 6);
  v9 = (int*)v2 + 13;
  if (v3 == v4) {
    v3 = v5;
    v4 = v6;
    v9 = v8;
  }
  v10 = 0xAAAAAAAAAAAAAAABLL * ((v3 - v4) >> 3);
  v11 = (_BYTE*)(result + 307);
  if (v10 <= *v9) {
    goto LABEL_25;
  }
  v37 = 0;
  v38 = 0;
  v36 = 0;
  v12 = result;
  *v11 = 1;
  v13 = *(_QWORD**)(v1 + 8);
  v15 = v13[3];
  v14 = v13[4];
  v16 = (int*)(v13 + 6);
  v19 = *v13;
  v17 = (int*)v13 + 13;
  v18 = v19;
  if (v14 == v15) {
    v17 = v16;
    v20 = v18;
  }
  else {
    v20 = v15;
  }
  v21 = (unsigned __int8*)(v20 + 24LL * *v17);
  v22 = *v21;
  if ((v22 & 1) != 0) {
    v23 = *((unsigned __int8**)v21 + 2);
  }
  else {
    v23 = v21 + 1;
  }
  if ((v22 & 1) != 0) {
    v24 = *((_QWORD*)v21 + 1);
  }
  else {
    v24 = v22 >> 1;
  }
  GameRoutine_8924a0(&v36, v23, v24, 47);
  if ((*(_BYTE*)v36 & 1) != 0) {
    v25 = *(_BYTE**)(v36 + 16);
  }
  else {
    v25 = (_BYTE*)(v36 + 1);
  }
  if (*v25 == 42 && v25[1] == 0) {
    v26 = *(_QWORD*)(GameData_21f1660 + 8);
    if (*(_QWORD*)(v26 + 32) == *(_QWORD*)(v26 + 24)) {
      ++*(_DWORD*)(v26 + 48);
    }
    else {
      ++*(_DWORD*)(v26 + 52);
    }
  }
  v27 = *(_QWORD*)(*GameData_212d728[0] + 8);
  LayoutAccessor_155e830(*(_QWORD*)(v27 + 16), 0);
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
  }
  result = game_gameui_Footer_instance_;
  v28 = *(_DWORD*)(v27 + 5856) & 0xFFFEFFFF;
  *(_DWORD*)(v27 + 5856) = v28;
  if (result != 0) {
    result = LayoutAccessor_1567000(result, 0);
    v28 = *(_DWORD*)(v27 + 5856);
  }
  *(_DWORD*)(v27 + 5856) = v28 & 0xFFFDFFFF;
  *(_DWORD*)(v12 + 152) = 4;
  *(_BYTE*)(v12 + 305) = 1;
  v29 = v36;
  if (v36 != 0) {
    v30 = v37;
    v31 = fw_memory_g_heap_manager_ptr;
    if (v36 == v37) {
      goto LABEL_43;
    }
    v32 = v37;
    do {
      v33 = *(_BYTE*)(v32 - 24);
      v32 -= 24;
      if ((v33 & 1) != 0 && *(_QWORD*)(v30 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) != 0) {
          v34 = 128;
        }
        else {
          v34 = 56;
        }
        result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v31 + v34);
      }
      v30 = v32;
    } while (v32 != v29);
    v37 = v29;
    if (v36 != 0) {
    LABEL_43:
      v35 = 128;
      if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) == 0) {
        v35 = 56;
      }
      return nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v31 + v35);
    }
  }
  return result;
}

__int64 ProcGmapSeq_8866a0()
{
  __int64 v0;
  int v1;
  __int64 result;
  __int64 v3;
  _BYTE v4[200];

  if (game_GameModeData_instance_ != 0 &&
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) != 0) {
    v3 = *(_QWORD*)(GameData_21f1648 + 8);
    result = GameManager_a2f660(game_sound_g_game_sound);
    *(_BYTE*)(*(_QWORD*)(GameData_21f1648 + 8) + 40LL) = 0;
    *(_BYTE*)(v3 + 56) = 1;
  }
  else {
    TroopMgr_1349f40();
    snd_Fade_Fade_10cb00(v4, "FadeTime_BGM_Gmap_Out");
    v0 = game_sound_g_game_sound;
    v1 = *(_DWORD*)(game_sound_g_game_sound + 620);
    if (v1 != 0) {
      *(_DWORD*)(game_sound_g_game_sound + 620) = v1 - 1;
      GameManager_a2c820(v0, v4);
    }
    result = snd_Fade_Destroy_Fade(v4);
    *(_BYTE*)(*(_QWORD*)(GameData_21f1648 + 8) + 40LL) = 0;
  }
  return result;
}

__int64 ProcGmapSeq_886770(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;

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
    v3 = 1;
    return GameRoutine_1738620(a1, v3, 0);
  }
  if (*(_DWORD*)(GameData_22416c0 + 48) == 0) {
    v3 = 3;
    return GameRoutine_1738620(a1, v3, 0);
  }
  v1 = a1;
  result = GameRoutine_718280();
  if ((result & 1) != 0) {
    v3 = 3;
    a1 = v1;
    return GameRoutine_1738620(a1, v3, 0);
  }
  return result;
}

__int64 ProcGmapSeq_886870()
{
  __int64 result;
  __int64 v1;

  if ((game_GameRestartData_unknown_ == 0 ||
       *(_DWORD*)(game_GameRestartData_unknown_ + 8) == 0) &&
      *(_DWORD*)(game_GameRestartData_unknown_ + 284) != 0) {
    result = GameRoutine_65a020();
    v1 = game_GameRestartData_unknown_;
    if (*(_DWORD*)(game_GameRestartData_unknown_ + 284) != 0) {
      *(_DWORD*)(game_GameRestartData_unknown_ + 8) = 0;
      *(_BYTE*)(v1 + 16) = 0;
      if (GameData_21c9600 != 0) {
        *(_DWORD*)(GameData_21c9600 + 152) = 14;
      }
    }
  }
  return result;
}

__int64 ProcGmapSeq_8868e0(__int64 result)
{
  int v1;
  __int64 v2;
  int v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  int v12;
  __int64* v13;
  __int64* v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
      GameData_21c9600 != 0) {
    v1 = *(_DWORD*)(GameData_21c9600 + 152);
    if ((v1 & 0xFFFFFFFE) == 6) {
      goto LABEL_18;
    }
    if (v1 == 5) {
      v2 = *(_QWORD*)(GameData_21c96e8 + 8);
      v3 = *(_DWORD*)(v2 + 56);
      v4 = *(__int64***)(v2 + 8);
      v5 = *(__int64***)(v2 + 16);
      if (v3 < 0) {
        for (; v4 != v5; ++v4) {
          v6 = *v4;
          if ((*v4)[12] == 0 && v6[69] == 0) {
            goto LABEL_16;
          }
        }
      }
      else if (v4 != v5) {
        while (1) {
          v7 = (__int64)*v4++;
          v6 = (__int64*)v7;
          if (*(_DWORD*)(v7 + 84) == v3) {
            break;
          }
          if (v4 == v5) {
            goto LABEL_12;
          }
        }
      LABEL_16:
        v9 = *v6;
        v8 = result;
      LABEL_17:
        v10 = v9 == game_gmap_SpotMgr_GetCurrentSpot(result);
        result = v8;
        if (!v10) {
        LABEL_18:
          v11 = *(_QWORD*)(GameData_21c96e8 + 8);
          v12 = *(_DWORD*)(v11 + 56);
          v13 = *(__int64**)(v11 + 8);
          v14 = *(__int64**)(v11 + 16);
          if (v12 < 0) {
            for (; v13 != v14; ++v13) {
              v15 = (_QWORD*)*v13;
              if (*(_QWORD*)(*v13 + 96) == 0 && v15[69] == 0) {
                return GameRoutine_1522300(result, *v15);
              }
            }
          }
          else {
            while (v13 != v14) {
              v16 = *v13++;
              v15 = (_QWORD*)v16;
              if (*(_DWORD*)(v16 + 84) == v12) {
                return GameRoutine_1522300(result, *v15);
              }
            }
          }
          v17 = result;
          v18 = game_gmap_SpotMgr_GetCurrentSpot(result);
          return GameRoutine_1522300(v17, v18);
        }
        return result;
      }
    LABEL_12:
      v8 = result;
      result = game_gmap_SpotMgr_GetCurrentSpot(result);
      v9 = result;
      goto LABEL_17;
    }
  }
  return result;
}

__int64 ProcGmapSeq_886c20()
{
  __int64 v0;

  v0 = *(_QWORD*)(GameData_21f1658 + 16);
  InfoCursorBottomImpl_100d6e0(*(_QWORD*)(v0 + 48));
  *(_BYTE*)(v0 + 175) = 0;
  return Seq_a85600(GameData_21c6978);
}

_BYTE* ProcGmapSeq_886c80(_BYTE* result, __int64 a2)
{
  _BYTE* v2;
  __int64 v3;
  __int64** v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  float v20;
  float v21;
  bool v22;
  float v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64* i;
  __int64 v28;
  __int64* v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64* v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  bool v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;

  if (result[304] == 1) {
    v2 = result;
    GameRoutine_15e2a60(result, a2);
    v3 = game_script_hub_g_frame_counter_ptr[0];
    if (((*(__int64 (**)(__int64))(
             *(_QWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                        144LL) +
             16LL))(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 144LL) &
         1) != 0) {
      *(_BYTE*)(*(_QWORD*)v3 + 177LL) = 0;
    }
    v4 = *(__int64***)(*GameData_2130e60 + 8);
    v5 = *v4;
    v6 = v4[1];
    if (*v4 != v6) {
      do {
        v7 = *v5++;
        GameRoutine_14a1390(v7 + 16, 1);
        GameRoutine_14a1390(v7 + 32, 1);
      } while (v5 != v6);
    }
    v9 = v4[6];
    v8 = v4[7];
    while (v9 != v8) {
      v10 = *v9++;
      GameRoutine_14a1520(v10 + 8, 1);
    }
    v11 = GameData_212c790;
    v12 = *(_QWORD*)(*GameData_212c790 + 8);
    v13 = *(__int64**)(v12 + 8);
    v14 = *(__int64**)(v12 + 16);
    while (v13 != v14) {
      v15 = *v13++;
      GameRoutine_1342b80(v15);
    }
    GameRoutine_14b7400(*(_QWORD*)(*(_QWORD*)GameData_212d748[0] + 8LL));
    v16 = GameData_212d718;
    if (game_GameModeData_instance_ != 0) {
      v17 = *GameData_212d718;
      if ((*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) != 0) {
        *(_BYTE*)(*(_QWORD*)(v17 + 16) + 965LL) = 0;
      }
    }
    else {
      v17 = *GameData_212d718;
    }
    v18 = (__int64*)GameData_212c7a0[0];
    v19 = *(_QWORD*)(*(_QWORD*)GameData_212c7a0[0] + 16LL);
    v20 = (*(float (**)(__int64))(*(_QWORD*)(*(_QWORD*)(v17 + 16) + 656LL) +
                                  16LL))(*(_QWORD*)(v17 + 16) + 656LL);
    v21 = 1.0;
    if (v20 <= 1.0) {
      v21 = v20;
    }
    v22 = v20 < 0.0;
    v23 = 0.0;
    if (!v22) {
      v23 = v21;
    }
    *(float*)(v19 + 120) = v23;
    v24 = GameRoutine_1337000();
    v25 = *(_QWORD*)(*v11 + 8);
    v26 = *(__int64**)(v25 + 8);
    for (i = *(__int64**)(v25 + 16); v26 != i;
         v24 = GameRoutine_13402f0(v28, 0, 1)) {
      v28 = *v26++;
    }
    TroopMgr_134a720(v24);
    GameRoutine_1553220(11);
    v29 = GameData_212d730;
    (*(void (**)(_QWORD))(*(_QWORD*)*GameData_212d730 + 24LL))(
        *GameData_212d730);
    if (*v29 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v29 + 8LL))(*v29);
    }
    *v29 = 0;
    v30 = GameData_212d728[0];
    if (*GameData_212d728[0] != 0) {
      GameRoutine_17bc360(*GameData_212d728[0]);
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v31);
    }
    v32 = *v16;
    *v30 = 0;
    (*(void (**)(__int64))(*(_QWORD*)v32 + 24LL))(v32);
    if (*v16 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v16 + 8LL))(*v16);
    }
    *v16 = 0;
    v33 = GameData_212d708;
    (*(void (**)(_QWORD))(*(_QWORD*)*GameData_212d708 + 24LL))(
        *GameData_212d708);
    if (*v33 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v33 + 8LL))(*v33);
    }
    *v33 = 0;
    v34 = GameData_212d700[0];
    (*(void (**)(_QWORD))(**(_QWORD**)GameData_212d700[0] + 24LL))(
        *GameData_212d700[0]);
    if (*v34 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v34 + 8LL))(*v34);
    }
    *v34 = 0;
    v35 = GameData_212d6f8[0];
    (*(void (**)(_QWORD))(**(_QWORD**)GameData_212d6f8[0] + 24LL))(
        *GameData_212d6f8[0]);
    result = (_BYTE*)*v35;
    if (*v35 != 0) {
      result =
          (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)result + 8LL))(result);
    }
    v36 = *v18;
    *v35 = 0;
    v37 = *(_QWORD*)(v36 + 16);
    *(_QWORD*)v37 = 0;
    *(_BYTE*)(v37 + 128) = 0;
    *(_DWORD*)(v37 + 124) = -1;
    v38 = (_QWORD*)game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v40 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
      v39 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
      v42 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
      v41 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
      v43 = v41 == v42;
      v44 = v39 - 1 + v40;
      v45 = v44 >> 7;
      v46 = v44 & 0x7F;
      v47 = 16 * (v41 - v42) - 1;
      v48 = *(_QWORD*)(v42 + 8 * v45);
      if (v43) {
        v47 = 0;
      }
      v49 = v48 + 32 * v46;
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
          *(_DWORD*)v49 & 0xFFFFFFFD |
          (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
      v38[21] = *(_QWORD*)(v49 + 24);
      v50 = *(_QWORD*)(v49 + 16);
      v38[27] = v39 - 1;
      v38[20] = v50;
      if ((unsigned __int64)(v47 - (v39 + v40) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
        if (*(_QWORD*)(v41 - 8) != 0) {
          v51 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v51 = 56;
          }
          result = (_BYTE*)nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v51);
          v41 = v38[24];
        }
        v38[24] = v41 - 8;
      }
    }
    v2[304] = 0;
  }
  return result;
}

__int64 game_gmap_ProcGmapSeq_Initialize_closure0_Invoke(__int64 result,
                                                         unsigned __int8* a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  int v5;

  v2 = *(_QWORD*)(result + 8);
  v3 = *a2;
  if (*(unsigned __int8*)(v2 + 312) != v3) {
    *(_BYTE*)(v2 + 312) = v3;
    v4 = *(_QWORD*)(GameData_21f1628 + 16);
    v5 = *(_DWORD*)(v4 + 920);
    if (v3 != 0) {
      *(_DWORD*)(v4 + 920) = v5 + 1;
      if (v5 == 0) {
        return (**(__int64 (***)(__int64))(v4 + 912))(v4 + 912);
      }
    }
    else {
      *(_DWORD*)(v4 + 920) = v5 - 1;
      if (v5 == 1) {
        return (*(__int64 (**)(__int64))(*(_QWORD*)(v4 + 912) + 8LL))(v4 + 912);
      }
    }
  }
  return result;
}

bool game_gmap_ProcGmapSeq_Initialize_closure_Invoke()
{
  float* v0;

  v0 = *(float**)(GameData_21f1628 + 16);
  return v0[199] == v0[198] && v0[167] == v0[166];
}

bool game_gmap_ProcGmapSeq_PreExeCommand_closure_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;

  v2 = *a2;
  if (*(_QWORD*)(*a2 + 96) != 0) {
    return false;
  }
  v4 = *(_QWORD*)(v2 + 552);
  if (v4 == 0 || *(_QWORD*)(v2 + 104) != 0) {
    return false;
  }
  if (*(__int16*)(v2 + 642) * *(__int16*)(v2 + 640) * *(__int16*)(v2 + 644) !=
      0) {
    return false;
  }
  return *(_QWORD*)(v4 + 352) == 0;
}

__int64 game_gmap_ProcGmapSeq_OpenEventBranch_closure_Invoke(__int64 result,
                                                             __int64** a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  _BOOL4 v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  if ((**(_BYTE**)(result + 16) & 1) != 0) {
    return result;
  }
  v2 = *a2;
  v3 = *(_QWORD*)(result + 8);
  v4 = result;
  v5 = **a2;
  v21 = 0;
  v22 = 0;
  v20 = 0;
  result = GameSubquestData_125a1a0(*(_QWORD*)GameData_212c7b0[0], &v20, v5, 0);
  if (v20 == v21) {
    v8 = false;
    if (v20 != 0) {
    LABEL_10:
      v21 = v20;
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
    }
  }
  else {
    v6 = v20 + 8;
    do {
      v7 = *(unsigned __int8*)(**(_QWORD**)(v6 - 8) + 112LL);
      v8 = v7 == 4;
      v9 = v7 == 4 || v6 == v21;
      v6 += 8;
    } while (!v9);
    if (v20 != 0) {
      goto LABEL_10;
    }
  }
  if (v8) {
    **(_BYTE**)(v4 + 16) = 1;
    *(_DWORD*)(v3 + 152) = 14;
    v11 = *((unsigned int*)v2 + 21);
    if ((v11 & 0x80000000) == 0) {
      LODWORD(v20) = *((_DWORD*)v2 + 21);
      v12 = *(_QWORD*)(GameData_21c96e8 + 8);
      v14 = *(_QWORD*)(v12 + 32);
      v13 = (__int64*)(v12 + 32);
      v15 = *(_QWORD*)(v12 + 40);
      *(_DWORD*)(v12 + 56) = v11;
      v16 = wmemchr(v14, v11);
      v17 = *(_QWORD*)(v12 + 40);
      v18 = *(_QWORD*)(v12 + 32);
      if (v16 != 0) {
        v15 = v16;
      }
      if (v15 != v17) {
        v19 = v17 - (v15 + 4);
        if (v17 != v15 + 4) {
          memmove(v15, v15 + 4, v17 - (v15 + 4));
          v18 = *v13;
        }
        *(_QWORD*)(v12 + 40) = v15 + v19;
      }
      return TroopMgr_1353fb0(v13, v18, &v20);
    }
  }
  return result;
}

__int64 game_gmap_ProcGmapSeq_TryGetFarmProduct_closure_Invoke(__int64 a1,
                                                               __int64** a2)
{
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;

  v3 = **a2;
  result = *(_QWORD*)(v3 + 280);
  if (result != 0) {
    v5 = *(_QWORD*)(a1 + 8);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 24LL))(result);
    if ((unsigned __int8)result != 1 ||
        ((result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 280) + 112LL))(
              *(_QWORD*)(v3 + 280))) &
         1) == 0) {
      v6 = *(_QWORD*)(v3 + 280);
      if (v6 != 0) {
        result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v6 + 48LL))(
            *(_QWORD*)(v3 + 280));
        if ((result & 1) != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
          if ((unsigned __int8)result == 1) {
            (*(void (**)(_QWORD))(**(_QWORD**)(v3 + 280) + 72LL))(
                *(_QWORD*)(v3 + 280));
            (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v3 + 280) + 88LL))(
                *(_QWORD*)(v3 + 280), v5);
            result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 280) + 112LL))(
                *(_QWORD*)(v3 + 280));
            if ((result & 1) != 0) {
              result = *(_QWORD*)(v3 + 280);
              if (result != 0) {
                result =
                    (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
                *(_QWORD*)(v3 + 280) = 0;
              }
            }
            **(_BYTE**)(a1 + 16) = 1;
          }
        }
      }
    }
  }
  return result;
}

__int64 game_gmap_ProcGmapSeq_LimitOver_closure_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;

  v2 = *a2;
  if ((*(_WORD*)(*a2 + 544) & 8) == 0) {
    return 0;
  }
  v4 = *(_QWORD*)(v2 + 96);
  if (v4 != 0 && *(_BYTE*)(v4 + 32) == 4) {
    return 0;
  }
  else {
    return ((unsigned int)GameRoutine_133f1d0(v2, a2) ^ 1) & 1;
  }
}

bool game_gmap_ProcGmapSeq_LimitOver_closure0_Invoke(__int64 a1, __int64 a2)
{
  __int64 v3;

  if ((*(_WORD*)(*(_QWORD*)a2 + 544LL) & 8) == 0) {
    return false;
  }
  v3 = *(_QWORD*)(*(_QWORD*)a2 + 96LL);
  return v3 == 0 || *(_BYTE*)(v3 + 32) != 4;
}

__int64 game_gmap_ProcGmapSeq_LimitOver_closure1_Invoke(__int64 result,
                                                        _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = *a2;
  v3 = *(_QWORD*)(result + 8);
  v4 = *(_QWORD*)(*a2 + 96LL);
  if (v4 == 0 || *(_BYTE*)(v4 + 32) != 4) {
    result = GameRoutine_133f1d0(*a2, a2);
    if ((result & 1) != 0) {
      *(_QWORD*)(v3 + 280) = v2;
    }
  }
  return result;
}

__int64 ProcGmapSeq_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v10;

  *(_QWORD*)a1 = game_gmap_ProcGmapSeq_vtable;
  *(_QWORD*)(a1 + 208) = GameData_1fa6ed0;
  v2 = a1 + 208;
  v3 = GameRoutine_886c80();
  v4 = --GameData_21d92dc;
  *GameData_212d168 = GameData_21d925c[v4];
  GameRoutine_7c51c0(v3);
  if ((*(_BYTE*)(a1 + 224) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 240);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                    v5);
    }
  }
  v10 = v2;
  *(_QWORD*)(a1 + 208) = GameData_212d6d0 + 2;
  GameRoutine_876a40(&GameData_21eea40, &v10);
  v7 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_1fa6fb0;
  if (v7 == (_QWORD*)(a1 + 160)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_11;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);

LABEL_11:
  GameData_21f1618 = 0;
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

void ProcGmapSeq_Unknown7(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 (**v5)(__int64);
  __int64 v6;
  int v7;
  __int64 (**v8)(__int64, int*);
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 (**v14)(__int64, int*);
  char v15;
  __int64 v16;
  int v17;
  int v18;

  v3 = *GameData_212d708;
  if (*GameData_212d708 != 0) {
    v5 = *(__int64 (***)(__int64))(v3 + 8);
    v4 = v3 + 8;
    v6 = (*v5)(v4);
    v7 = game_HashString32(v6);
    v8 = *(__int64 (***)(__int64, int*))a2;
    v17 = v7;
    if (((*v8)(a2, &v17) & 1) != 0) {
      v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
      v10 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v10 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = v9;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v4 + 16LL))(v4, a2);
    }
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
  }
  if (GameData_21f1628 != 0) {
    v11 = GameData_21f1628 + 8;
    v12 = (**(__int64 (***)(__int64))(GameData_21f1628 + 8))(GameData_21f1628 +
                                                             8);
    v13 = game_HashString32(v12);
    v14 = *(__int64 (***)(__int64, int*))a2;
    v18 = v13;
    if (((*v14)(a2, &v18) & 1) != 0) {
      v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
      v16 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v16 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = v15;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 16LL))(v11, a2);
    }
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
  }
}

void ProcGmapSeq_Unknown8(__int64 a1, __int64* a2, int a3)
{
  __int64 v5;
  __int64 v6;
  __int64 (**v7)(__int64);
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  int v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  int v31;
  int v32;
  int v33;

  v5 = *GameData_212d708;
  if (*GameData_212d708 != 0) {
    v7 = *(__int64 (***)(__int64))(v5 + 8);
    v6 = v5 + 8;
    v8 = (*v7)(v6);
    v9 = game_HashString32(v8);
    v10 = *a2;
    v32 = v9;
    if (((*(__int64 (**)(__int64*, int*))(v10 + 16))(a2, &v32) & 1) != 0) {
      v11 = *((int*)a2 + 5);
      *((_DWORD*)a2 + 5) = v11 + 1;
      (*(void (**)(__int64, __int64*, _QWORD))(*(_QWORD*)v6 + 24LL))(
          v6, a2, *(unsigned __int8*)(a2[1] + v11));
    }
    (*(void (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
  }
  if (GameData_21f1628 != 0) {
    v12 = GameData_21f1628 + 8;
    v13 = (**(__int64 (***)(__int64))(GameData_21f1628 + 8))(GameData_21f1628 +
                                                             8);
    v14 = game_HashString32(v13);
    v15 = *a2;
    v33 = v14;
    if (((*(__int64 (**)(__int64*, int*))(v15 + 16))(a2, &v33) & 1) != 0) {
      v16 = *((int*)a2 + 5);
      *((_DWORD*)a2 + 5) = v16 + 1;
      (*(void (**)(__int64, __int64*, _QWORD))(*(_QWORD*)v12 + 24LL))(
          v12, a2, *(unsigned __int8*)(a2[1] + v16));
    }
    (*(void (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
  }
  if ((unsigned int)(a3 - 1) <= 1) {
    v17 = *((int*)a2 + 5);
    v18 = a2[1];
    v19 = v17 + 1;
    *((_DWORD*)a2 + 5) = v17 + 1;
    v20 = *(unsigned __int8*)(v18 + v17);
    if (v20 != 0) {
      if (v20 != 1) {
        v24 = 0;
        do {
          v25 = v19;
          v26 = v19 + 2;
          v27 = v25 + 1;
          *((_DWORD*)a2 + 5) = v25 + 1;
          LODWORD(v25) = *(unsigned __int8*)(v18 + v25);
          *((_DWORD*)a2 + 5) = v26;
          v28 = v25 | (*(unsigned __int8*)(v18 + v27) << 8);
          if (v28 != 0) {
            v26 += v28;
            *((_DWORD*)a2 + 5) = v26;
          }
          v29 = v26;
          v19 = v26 + 2;
          v30 = v29 + 1;
          *((_DWORD*)a2 + 5) = v29 + 1;
          LODWORD(v29) = *(unsigned __int8*)(v18 + v29);
          *((_DWORD*)a2 + 5) = v19;
          v31 = v29 | (*(unsigned __int8*)(v18 + v30) << 8);
          if (v31 != 0) {
            v19 += v31;
            *((_DWORD*)a2 + 5) = v19;
          }
          v24 += 2;
        } while ((v20 & 0xFE) != (unsigned __int8)v24);
      }
      if ((v20 & 1) != 0) {
        v21 = v19 + 1LL;
        *((_DWORD*)a2 + 5) = v21;
        v22 = *(unsigned __int8*)(v18 + v19);
        *((_DWORD*)a2 + 5) = v19 + 2;
        v23 = v22 | (*(unsigned __int8*)(v18 + v21) << 8);
        if (v23 != 0) {
          *((_DWORD*)a2 + 5) = v19 + 2 + v23;
        }
      }
    }
  }
}

#pragma GCC visibility pop
