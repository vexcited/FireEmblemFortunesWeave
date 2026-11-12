#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
extern _UNKNOWN GameData_1a90de1;
extern char GameData_1a9f09e;
extern _UNKNOWN GameData_1ad2aab;
extern _UNKNOWN GameData_1adebe5;
extern __int64 (*GameData_1f91be8[])();
extern __int64 (*GameData_1f94210[])();
extern __int64 (*GameData_1f94290[])();
extern __int64 (*GameData_1f97070[])();
extern __int64 (*GameData_1f98270[])();
extern __int64 (*GameData_1f99648[])();
extern char* GameData_1f9d950[];
extern char* GameData_1f9d968[];
extern char* GameData_1fa5c20[9];
extern char* GameData_1fa61f0[11];
extern __int64 (*GameData_1fa9138[])();
extern __int64 (*GameData_1fa91b8[])();
extern __int64 (*GameData_1fa9a88[])();
extern __int64 (*GameData_1fab780[])();
extern __int64 (*GameData_1fab800[])();
extern __int64 (*GameData_1fab880[])();
extern __int64 (*GameData_1fac420[])();
extern __int64 (*GameData_1fac4a0[])();
extern __int64 (*GameData_1fac520[])();
extern __int64 (*GameData_1fac5a0[])();
extern __int64 (*GameData_1fac620[])();
extern __int64 (*GameData_1fac6a0[])();
extern __int64 (*GameData_1faca60[])();
extern __int64 (*GameData_1faebf0[])();
extern __int64 (*GameData_1faedf8[])();
extern __int64 (*GameData_1faf3d8[])();
extern __int64 (*GameData_1fb0cb0[])();
extern __int64 GameData_212bf68;
extern __int64 GameData_212c6c0[2];
extern __int64* GameData_212c738[2];
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cea0;
extern __int64* GameData_212ceb0;
extern __int64 GameData_212cf60;
extern __int64 GameData_212cf78[6];
extern __int64 GameData_212cf80[5];
extern __int64 GameData_212cf88[4];
extern _QWORD GameData_212d170;
extern _DWORD* GameData_212d330;
extern __int64* GameData_212d468[5];
extern __int64* GameData_212d480[2];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212d7f0[5];
extern __int64* GameData_212e348;
extern __int64* GameData_212ea58;
extern __int64 GameData_2131910[19];
extern _DWORD* GameData_21321f8;
extern __int64 GameData_21c9608;
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
extern __int64 GameData_21caab0;
extern __int64 GameData_21cd158;
extern __int64 GameData_21ec568;
extern int GameData_21ec590;
extern char GameData_21ec594;
extern __int64 GameData_21ec798;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21ee240;
extern __int64 GameData_21ee260;
extern __int64 GameData_21eea58;
extern __int64 GameData_21f1780;
extern __int64 GameData_21f4280;
extern __int64 GameData_21f42d0;
extern __int64 GameData_21f6170;
extern __int64 GameData_21f6178;
extern __int64 GameData_21f6180;
extern __int64 GameData_21f6188;
extern int GameData_21f6190;
extern __int64 GameData_21f6198;
extern __int64 GameData_21f61a0;
extern __int64 GameData_21f61a8;
extern __int64 GameData_21f61b0;
extern int GameData_21f61b8;
extern __int64 GameData_21f61c0;
extern __int64 GameData_2212270;
extern char GameData_22167b8;
extern char GameData_2216858;
extern __int64 GameData_2219068;
extern __int64 GameData_22400f8;
extern __int64 GameData_2240160;
extern __int64 GameData_2246c98;
extern __int64 GameData_22491f0;
extern __int64 GameData_22492a8;
extern __int64 GameData_22492b8;
extern __int64 GameData_2265ee0;
extern __int64 GameData_2265ee8;
extern __int64 GameData_2265ef8;
__int64 GameRoutine_100090(_QWORD);
__int64 GameRoutine_1006d0(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_100b50(_QWORD, _QWORD, double);
__n128 GameRoutine_10c830(_QWORD, double);
__int64 GameRoutine_10c910(_QWORD, _QWORD);
__int64 GameRoutine_10cb00(_QWORD, _QWORD);
__int64 GameRoutine_10cff0(_QWORD);
__int64 GameRoutine_1120d0(_QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_112290(_QWORD);
__int64 GameRoutine_120f710(_QWORD);
struct PseudoSret GameRoutine_12dd620(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_146b460(_QWORD);
__int64 GameRoutine_146b6c0(_QWORD);
__int64 GameRoutine_149a40(_QWORD, _QWORD);
__int64 GameRoutine_155dda0(_QWORD, _QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_155f480(_QWORD, _QWORD);
__int64 GameRoutine_15621a0(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_15636c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15638b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15b5f20(_QWORD);
__int64 GameRoutine_16f9300(_QWORD, _QWORD);
struct PseudoSret GameRoutine_1748710(void);
__int64 GameRoutine_174aa80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_177c650(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1843a40(_QWORD, _QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09d00(_QWORD);
__int64 GameRoutine_1a09d30(_QWORD, _QWORD);
__int64 GameRoutine_1a0a060(_QWORD, _QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a6c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(void);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
__int64 GameRoutine_660f80(_QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_6c2b50(_QWORD);
__int64 GameRoutine_6c3980(_QWORD, _QWORD);
__int64 GameRoutine_6c3f70(_QWORD);
__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(_QWORD);
__int64 GameRoutine_6c8530(_QWORD);
__int64 GameRoutine_6c8a80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6ccca0(_QWORD, _QWORD);
__int64 GameRoutine_6d0600(_QWORD, _QWORD);
__int64 GameRoutine_6d2c90(_QWORD, _QWORD);
struct PseudoSret GameRoutine_6dd950(_QWORD, _QWORD);
__int64 GameRoutine_6ea8c0(_QWORD);
__int64 GameRoutine_6ea9d0(_QWORD);
struct PseudoSret GameRoutine_70ea50(_QWORD, _QWORD);
__int64 GameRoutine_716d80(_QWORD, _QWORD);
__int64 GameRoutine_71de40(_QWORD);
__int64 GameRoutine_72b4a0(_QWORD);
__int64 GameRoutine_753e40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_755f40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_758410(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_76ccf0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_775580(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7a7dc0(const char*, ...);
__int64 GameRoutine_7a86e0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_7b79a0(void);
__int64 GameRoutine_80cb30(__int64);
__int64 GameRoutine_80fde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_84cb50(_QWORD, _QWORD);
__int64 GameRoutine_869d10();
__int64 GameRoutine_874b20(unsigned __int8, unsigned __int8, int, int);
struct PseudoSret GameRoutine_878ea0(_QWORD);
__int64 GameRoutine_89b540(_QWORD);
__int64 GameRoutine_89c360(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_910280(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_910f00(void);
struct PseudoSret GameRoutine_936f60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9374e0(_QWORD, _QWORD);
__int64 GameRoutine_937de0(_QWORD, _QWORD);
__int64 GameRoutine_93bb80(_QWORD);
__int64 GameRoutine_93cc20(_QWORD, _QWORD);
__int64 GameRoutine_93eed0(_QWORD);
__int64 GameRoutine_93f040(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_94d840(void);
__int64 GameRoutine_95f930(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_960f80(_QWORD);
__n128 GameRoutine_961090(__int128*, __int64, char, char, __n128 result);
__int64 GameRoutine_961260(__int64, _BYTE**, __int64);
__int64 GameRoutine_9726e0(_QWORD);
__int64 GameRoutine_97b2f0(_QWORD);
__int64 GameRoutine_9aef80(void);
__int64 GameRoutine_9af520(void);
__int64 GameRoutine_9b11a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a2cc00(_QWORD, _QWORD);
__int64 GameRoutine_a2f880(_QWORD);
__int64 GameRoutine_a2f940(_QWORD, _QWORD, _QWORD, _QWORD, double);
__int64 GameRoutine_a2fab0(_QWORD, _QWORD, long double);
__int64 GameRoutine_a31a20(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d9850(_QWORD);
struct PseudoSret GameRoutine_d98c0(void);
__int64 GameRoutine_dab80(_QWORD);
struct PseudoSret GameRoutine_dabf0(_QWORD);
__int64 GameRoutine_fdf60(_QWORD, _QWORD);
__int64 GameRoutine_fdfe0(_QWORD, _QWORD);
struct PseudoSret GameRoutine_ff2d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                    _QWORD, double, float);
__int64 GameRoutine_ffc40(_QWORD, _QWORD);
_QWORD* GameRoutine_93eed0_alt1(_QWORD* result) __asm__("GameRoutine_93eed0");
_QWORD* game_Unit_LevelUpSkill(_QWORD* result, unsigned int*);
_QWORD* ui_LayoutAccessor_Setup_155dda0(_QWORD*, _QWORD*);
__attribute__((swiftcall)) void Dir_70ea50(PSEUDO_X8, __int16* result, __int64);
__attribute__((swiftcall)) void TelopLevelUp_1748710(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void
game_12dd620(PSEUDO_X8, unsigned __int16* result, int, int, int);
__attribute__((swiftcall)) void game_Unit_GetParams(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void snd_BGM_getFirstHandle(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void snd_BGM_getFirstNameString(PSEUDO_X8, __int64);
__int64* game_UnitPool_Get(_BYTE*);
__int64 CorpsManager_9726e0(__int64);
__int64 EffectConst_961260(__int64, _BYTE**, __int64);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_755f40(__int64, __int64, unsigned int, unsigned int, char*);
__int64 GameHr_80cb30(__int64);
__int64 GameHr_869d10();
__int64 GameHr_a2f880(__int64);
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64 GameRoutine_174aa80_alt1(__int64, __int64, __int64, __int64*,
                                 _QWORD*) __asm__("GameRoutine_174aa80");
__int64 GameRoutine_177c650_alt1(__int64, __int64, __int64,
                                 char) __asm__("GameRoutine_177c650");
__int64 GameRoutine_1843a40_alt1(__int64) __asm__("GameRoutine_1843a40");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 GameRoutine_6c2b50_alt1(__int64) __asm__("GameRoutine_6c2b50");
__int64 GameRoutine_6c3980_alt1(__int64 result,
                                __int64) __asm__("GameRoutine_6c3980");
__int64 GameRoutine_80fde0_alt1(__int64, __int64,
                                float*) __asm__("GameRoutine_80fde0");
__int64 GameRoutine_89b540_alt1(__int64) __asm__("GameRoutine_89b540");
__int64 GameRoutine_910280_alt1(__int64, _DWORD*,
                                __int64) __asm__("GameRoutine_910280");
__int64 GameRoutine_93f040_alt1(__int64 result, __int64,
                                int) __asm__("GameRoutine_93f040");
__int64 GameRoutine_95f930_alt1(char, __int64,
                                __int64) __asm__("GameRoutine_95f930");
__int64 GameRoutine_960f80_alt1(__int64 result) __asm__("GameRoutine_960f80");
__int64 GameRoutine_9b11a0_alt1(_QWORD*, unsigned __int64*,
                                int) __asm__("GameRoutine_9b11a0");
__int64 Image_72b4a0(__int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_15636c0(__int64 result, __int64, char, float);
__int64 UnitNatives_753e40(unsigned int*, unsigned int*, __int64, unsigned int,
                           unsigned int);
__int64 Unit_6c8a80(__int64 result, int, int, __int64);
__int64 Unit_6ccca0(__int64, unsigned int*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_120f710(__int64*);
__int64 game_HashString(__int64 result);
__int64 game_UnitPool_GetFirst(int*);
__int64 game_Unit_Destroy_Unit(__int64);
__int64 game_Unit_GetJob(__int64);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_map_758410(__int64, __int64, _DWORD*);
__int64 game_map_76ccf0(__int64, __int64, int, int, int, int);
__int64 game_telop_Message_SetCommon(__int64, unsigned __int8*);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 snd_BGM_getFirstName(__int64);
__int64 snd_BGM_isFirstActive(__int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_Fade_Fade_10cb00(__int64, unsigned __int8*);
__int64 snd_a2fab0(__int64 result, __int64);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 snd_startSlotVolume_100b50(int*, __int64, float);
__int64 snd_startVolume_1006d0(__int64*, unsigned int, __int64, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__n128 GameRoutine_961090_alt1(__int128*, __int64, char,
                               char) __asm__("GameRoutine_961090");
bool LegionPool_9374e0(_QWORD*, __int64);
bool RidePool_93cc20(_QWORD*, __int64);
bool snd_Voice_hasFeature(__int64, unsigned int);
char* GameHr_67ed20(_QWORD*);
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
extern __int64 (*snd_Vec3_vtable[])();
extern __int64* game_g_empty_item_ptr;
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* snd_g_memory_ptr[2];
extern __int64 eft_g_effectSystem;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_TransporterConst_List_instance_;
extern __int64 game_cmdbtl_ProcCmdBtlSeqView_instance_;
extern __int64 game_facility_FacilityView_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_map_UnitFlags_instance_;
extern __int64 game_sound_g_game_sound;
extern char game_cmdbtl_g_match_result;
float LayoutAccessor_15638b0(__int64*, const char*, char);
int strcmp(const char*, const char*);
unsigned __int64 GameHr_910f00(unsigned __int64 result, char*, int*, __int64,
                               char);
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
void* game_97b2f0(__int64);
void GameHr_146b6c0();
void GameRoutine_146b460_alt1() __asm__("GameRoutine_146b460");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void RidePool_93bb80(__int64);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_7b79a0_alt1() __asm__("GameRoutine_7b79a0");
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
void snd_Fade_Fade_10c910(__int64, int);
void GameHr_7b20c0(__int64 a1);
__int64 GameHr_80cc80();
__int64 GameHr_80eb10(char a1);
void GameHr_80ecf0();
void GameHr_80fb70();
__int64 GameHr_810670(__int64 result);
__int64 GameHr_8b07c0(__int64 a1, __int64 a2);
__int64 GameHr_8b0c90(__int64 a1, __int64 a2, _WORD* a3);
__int64 GameHr_8b8620(__int64 a1);
__int64 GameHr_8e56c0(__int64* a1);
__int64 GameHr_8e5be0(__int64 a1);
__int64 GameHr_90e760(__int64* a1, unsigned int a2, unsigned int a3, int a4);
__int64 GameHr_946c20(int a1);
__int64 GameHr_94a3d0();
__int64 GameHr_94a480();
__int64 GameHr_961420(__int64 a1, const char** a2, __int64 a3);
__int64 GameHr_961c00(__int64 a1, const char** a2, __int64 a3);
__int64 GameHr_972960(__int64 a1);
__int64 GameHr_9aba50(__int64 result);
__int64 FacilityUtil_94d840();
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
extern __int64 game_UnitListSet_instance_;
__int64 GameHr_94d4e0();

void GameHr_7b20c0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  _BYTE* v3;
  int v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  int v10;
  int v11;
  float v12;
  float v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  unsigned int v17;
  bool v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  unsigned int v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  int v31;
  int v32;
  __int64 v33;
  _QWORD* v34;
  char* v35;
  char* v36;
  unsigned int v37;
  int v38;
  int v39;
  _QWORD* v40;
  char* v41;
  char* v42;
  unsigned int v43;
  __int64 v44;
  __int64* v45;
  __int64* v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  char v50;
  char* v51;
  int v52;
  unsigned int* v53;
  int v54;
  int v56;
  int v57;
  signed __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  int v66;
  char* v67;
  char* v68;
  _QWORD* v69;
  unsigned int v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64* v78;
  unsigned __int64 v79;
  struct {
    __int64* v80;
    __int64* v81;
    __int64 v82;
  } v80_;
  struct {
    _QWORD v83[2];
    __int64 v84;
    char gap72_[8];
    _QWORD* v85;
  } v83_;
  int v86;
  unsigned int v87;

  v2 = *(_QWORD*)(a1 + 168);
  v4 = *(unsigned __int8*)(v2 + 8);
  v3 = (_BYTE*)(v2 + 8);
  if (v4 == 0) {
    return;
  }
  v5 = game_UnitPool_Get(v3);
  if (v5 == nullptr) {
    return;
  }
  v6 = *(_QWORD*)(a1 + 168);
  v7 = (__int64)v5;
  if ((*(_DWORD*)(v6 + 40) & 0xFFF) != 0) {
    v8 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                    8LL * (*(_DWORD*)(v6 + 40) & 0xFFF));
    if (v8 == 0) {
      return;
    }
  }
  else {
    v15 = *(unsigned __int16*)(v6 + 32);
    if (*(_WORD*)(v6 + 32) == 0) {
      v15 = *(unsigned __int16*)game_g_empty_item_ptr;
    }
    v16 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v15);
    v8 = *(_QWORD*)(v16 + 192);
    v17 = *(unsigned __int8*)(v16 + 72);
    v18 = v8 == 0 || v17 > 7;
    if (v18 || *(_BYTE*)(v8 + 105) == 0 || *(_BYTE*)(v8 + 104) == 2) {
      return;
    }
  }
  if (*(_BYTE*)(v8 + 273) != 0) {
    LODWORD(v83_.v83[0]) = *(_WORD*)(v8 + 16) & 0xFFF;
    game_Unit_LevelUpSkill(v5, (unsigned int*)v83_.v83);
    v6 = *(_QWORD*)(a1 + 168);
  }
  LODWORD(v83_.v83[0]) = *(_WORD*)(v8 + 16) & 0xFFF;
  if ((GameRoutine_910280_alt1(v7, v83_.v83, v6) & 1) != 0) {
    v9 = *(int*)(*(_QWORD*)(a1 + 168) + 12356LL) <= 0 ? 18 : 6;
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v10 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v11 = 2)
             : (v11 = 3),
         (v11 & v10) != 0)) {
      v12 = *(float*)(a1 + 144);
      v13 = (float)v9;
      *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x60;
      if (v12 >= (float)v9) {
        v13 = v12;
      }
      *(float*)(a1 + 144) = v13;
    }
  }
  v14 = *(unsigned __int8*)(v8 + 250);
  if (v14 != 16) {
    if (v14 == 37) {
      v19 = *(__int16*)(*(_QWORD*)(a1 + 168) + 58LL);
      if ((v19 & 0x8000000000000000LL) == 0) {
        v20 = *(_QWORD*)(*(_QWORD*)(GameData_21cd158 + 16) + 8LL);
        if (v20 != 0) {
          (*(void (**)(__int64, __int64))(*(_QWORD*)(v20 + 144LL * (int)v19) +
                                          392LL))(v20 + 144LL * (int)v19, 1);
        }
      }
    }
    else if (v14 == 28) {
      LODWORD(v83_.v83[0]) = *(_WORD*)(v8 + 16) & 0xFFF;
      game_map_758410(a1, v7, v83_.v83);
    }
    return;
  }
  v21 = *(_QWORD*)(GameData_21ca300 + 96);
  if (v21 == 0) {
    return;
  }
  v22 = *(_QWORD*)(GameData_21ca300 + 96);
  *(_DWORD*)(v7 + 416) |= 0x400000u;
  Image_72b4a0(v22);
  v23 = *(char*)(v7 + 584);
  v24 = *(char*)(v7 + 585);
  v25 = *(_DWORD*)(v7 + 416) & 0xFFBFFFFF;
  v80_.v81 = nullptr;
  v80_.v82 = 0;
  v80_.v80 = nullptr;
  v83_.v85 = v83_.v83;
  *(_DWORD*)(v7 + 416) = v25;
  v83_.v83[0] = GameData_1f99648;
  v83_.v83[1] = &v80_.v80;
  Unit_6c8a80(v7, v23, v24, (__int64)v83_.v83);
  if (v83_.v85 == v83_.v83) {
    v26 = 32;
  }
  else {
    if (v83_.v85 == nullptr) {
      goto LABEL_42;
    }
    v26 = 40;
  }
  (*(void (**)(__int64))(*v83_.v85 + v26))((__int64)v83_.v85);
LABEL_42:
  v28 = v80_.v80;
  v27 = v80_.v81;
  if (v80_.v81 == v80_.v80) {
    goto LABEL_117;
  }
  do {
    v30 = *v28;
    if (*v28 != 0) {
      v31 = *(char*)(v30 + 584);
      v32 = *(char*)(v30 + 585);
      v83_.v83[0] = GameData_1f94290;
      v83_.v83[1] = v21;
      v33 = v21;
      v34 = v83_.v83;
      v35 = *(char**)(v30 + 600);
      v36 = *(char**)(v30 + 608);
      v83_.v84 = v30;
      v83_.v85 = v83_.v83;
      if (v35 == v36) {
        goto LABEL_44;
      }
      do {
        v37 = *v35 + v31;
        v86 = v35[1] + v32;
        v87 = v37;
        if (v83_.v85 == nullptr) {
        LABEL_122:
          GameRoutine_60a310_alt1();
        }
        (*(void (**)(_QWORD*, unsigned int*, int*))(*v83_.v85 + 48LL))(
            v83_.v85, &v87, &v86);
        v35 += 4;
      } while (v35 != v36);
      v34 = v83_.v85;
      if (v83_.v85 == v83_.v83) {
      LABEL_44:
        v29 = 32;
        v21 = v33;
      LABEL_45:
        (*(void (**)(__int64))(*v34 + v29))((__int64)v34);
        goto LABEL_46;
      }
      v21 = v33;
      if (v83_.v85 != nullptr) {
        v29 = 40;
        goto LABEL_45;
      }
    }
  LABEL_46:
    ++v28;
  } while (v28 != v27);
  if ((*(_WORD*)(v7 + 417) & 0x4004) == 0) {
    v38 = *(char*)(v7 + 584);
    v39 = *(char*)(v7 + 585);
    v83_.v84 = v7;
    v40 = v83_.v83;
    v41 = *(char**)(v7 + 600);
    v42 = *(char**)(v7 + 608);
    v83_.v83[0] = GameData_1f94210;
    v83_.v83[1] = v21;
    v83_.v85 = v83_.v83;
    if (v41 == v42) {
      goto LABEL_61;
    }
    do {
      v43 = *v41 + v38;
      v86 = v41[1] + v39;
      v87 = v43;
      if (v83_.v85 == nullptr) {
        goto LABEL_122;
      }
      (*(void (**)(_QWORD*, unsigned int*, int*))(*v83_.v85 + 48LL))(
          v83_.v85, &v87, &v86);
      v41 += 4;
    } while (v41 != v42);
    v40 = v83_.v85;
    if (v83_.v85 == v83_.v83) {
    LABEL_61:
      v44 = 32;
    LABEL_62:
      (*(void (**)(__int64))(*v40 + v44))((__int64)v40);
    }
    else if (v83_.v85 != nullptr) {
      v44 = 40;
      goto LABEL_62;
    }
  }
  v46 = v80_.v80;
  v45 = v80_.v81;
  if (v80_.v80 == v80_.v81) {
    goto LABEL_116;
  }
  v77 = v21;
  v78 = v80_.v81;
  v47 = 0;
  v48 = 0;
  v79 = 0;
  while (2) {
    v49 = *v46;
    v50 = UnitNatives_753e40((unsigned int*)v83_.v83, &v87, *v46, 0xFFFFFFFF,
                             0xFFFFFFFF);
    if ((v50 & 1) != 0) {
      v51 = (char*)v83_.v83;
    }
    else {
      v51 = (char*)GameData_212d170;
    }
    v52 = *v51;
    v53 = &v87;
    if ((v50 & 1) == 0) {
      v53 = (unsigned int*)(GameData_212d170 + 1LL);
    }
    v54 = *(char*)v53;
    if (v52 >= 1 && v54 >= 1) {
      v56 = *(char*)(v49 + 584);
      v57 = *(char*)(v49 + 585);
      if (v48 >= v79) {
        v58 = v48 - v47;
        v59 = 1 - 0x5555555555555555LL * ((__int64)(v48 - v47) >> 3);
        if (v59 > 0xAAAAAAAAAAAAAAALL) {
          GameRoutine_7b79a0_alt1();
        }
        if (0x5555555555555556LL * ((__int64)(v79 - v47) >> 3) > v59) {
          v59 = 0x5555555555555556LL * ((__int64)(v79 - v47) >> 3);
        }
        if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v79 - v47) >> 3) >=
            0x555555555555555LL) {
          v60 = 0xAAAAAAAAAAAAAAALL;
        }
        else {
          v60 = v59;
        }
        if (v60 != 0) {
          if (v60 > 0xAAAAAAAAAAAAAAALL) {
            GameRoutine_60a210_alt1();
          }
          v61 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                               24 * v60, 16, 0);
        }
        else {
          v61 = 0;
        }
        v62 = v61 + v58;
        v63 = v61 + 24 * v60;
        *(_DWORD*)(v62 + 8) = v56;
        *(_DWORD*)(v62 + 12) = v57;
        *(_QWORD*)v62 = v49;
        *(_DWORD*)(v62 + 16) = v52;
        *(_DWORD*)(v62 + 20) = v54;
        v48 = v61 + v58 + 24;
        v79 = v63;
        v64 = v61 + v58 + 24 * (v58 / -24);
        memcpy(v64, v47, v58);
        if (v47 != 0) {
          v65 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v65 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v65, v47);
        }
        v45 = v78;
        v47 = v64;
      }
      else {
        *(_QWORD*)v48 = v49;
        *(_DWORD*)(v48 + 8) = v56;
        *(_DWORD*)(v48 + 12) = v57;
        *(_DWORD*)(v48 + 16) = v52;
        *(_DWORD*)(v48 + 20) = v54;
        v48 += 24LL;
      }
      v66 = *(_DWORD*)(v49 + 416);
      *(_BYTE*)(v49 + 584) = v52;
      *(_BYTE*)(v49 + 585) = v54;
      if ((v66 & 0x400400) == 0) {
        v67 = *(char**)(v49 + 600);
        v68 = *(char**)(v49 + 608);
        v69 = v83_.v83;
        v83_.v84 = v49;
        v83_.v85 = v83_.v83;
        v83_.v83[0] = GameData_1f94210;
        v83_.v83[1] = v77;
        if (v67 == v68) {
          goto LABEL_99;
        }
        do {
          v70 = *v67 + v52;
          v86 = v67[1] + v54;
          v87 = v70;
          if (v83_.v85 == nullptr) {
            goto LABEL_122;
          }
          (*(void (**)(_QWORD*, unsigned int*, int*))(*v83_.v85 + 48LL))(
              v83_.v85, &v87, &v86);
          v67 += 4;
        } while (v67 != v68);
        v69 = v83_.v85;
        if (v83_.v85 == v83_.v83) {
        LABEL_99:
          v45 = v78;
          v71 = 32;
        LABEL_100:
          (*(void (**)(__int64))(*v69 + v71))((__int64)v69);
        }
        else {
          v45 = v78;
          if (v83_.v85 != nullptr) {
            v71 = 40;
            goto LABEL_100;
          }
        }
      }
      if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
          (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
        v72 = *(_QWORD*)(v49 + 440);
        if (v72 != 0 && *(unsigned __int8*)(v72 + 16) <= 8u &&
            game_map_UnitFlags_instance_ != 0) {
          v73 = *(unsigned __int8*)(v49 + 2088);
          if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v73) & 1) != 0) {
            *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v73) |= 2u;
          }
        }
      }
    }
    if (++v46 != v45) {
      continue;
    }
    break;
  }
  if (v47 != v48) {
    v74 = v47;
    do {
      game_map_76ccf0(a1, *(_QWORD*)v74, *(_DWORD*)(v74 + 8),
                      *(_DWORD*)(v74 + 12), *(_DWORD*)(v74 + 16),
                      *(_DWORD*)(v74 + 20));
      v74 += 24;
    } while (v74 != v48);
  }
  if (v47 != 0) {
    v75 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v75 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v75,
                                  v47);
  }
LABEL_116:
  v28 = v80_.v80;
LABEL_117:
  if (v28 != nullptr) {
    v80_.v81 = v28;
    v76 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v76 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v76,
                                  (__int64)v28);
  }
}

void GameHr_80c870()
{
  __int64 v0;
  __int64 v1;
  __int64* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  _BYTE* v9;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;
  __int64 v14;

  if (GameData_21caab0 == 0) {
    return;
  }
  v0 = *(_QWORD*)(GameData_21caab0 + 16);
  if (v0 == 0) {
    return;
  }
  v1 = *(_QWORD*)(v0 + 104);
  v2 = GameData_212d468[0];
  if (*(int*)(*GameData_212d468[0] + 624) <= 0 && *GameData_212ea58 == 0) {
    v14 = 0;
    v13 = v12;
    v12[0] = GameData_2131910[0] + 16;
    v12[1] = &v14;
    GameRoutine_15b5f20(v12);
    if (v13 == v12) {
      v4 = 32;
    }
    else {
      if (v13 == nullptr) {
      LABEL_13:
        if (v14 == 0) {
          v5 = *(_QWORD*)(v0 + 8);
          if (v5 != 0 && (GameRoutine_1a0a060(v5, "EC_") != 0 ||
                          GameRoutine_1a0a060(v5, "EU_") != 0)) {
            v1 = GameRoutine_a31a20(*v2);
          }
        }
        goto LABEL_18;
      }
      v4 = 40;
    }
    (*(void (**)(__int64))(*v13 + v4))((__int64)v13);
    goto LABEL_13;
  }
LABEL_18:
  if (v1 != 0) {
    v6 = *v2;
    v7 = *(_QWORD*)(*v2 + 8);
    if (v7 != 0 && (v8 = GameRoutine_d9850(*(_QWORD*)(*v2 + 8)), v6 = *v2,
                    (v8 & 1) != 0)) {
      v9 = (_BYTE*)GameRoutine_dab80(v7);
      if (v9 != nullptr && *v9 != 0 && *(_DWORD*)(v6 + 2180) == 0) {
        GameRoutine_60a020(v6 + 2824, v9);
        if ((*(_BYTE*)(v6 + 2824) & 1) != 0) {
          v11 = *(_QWORD*)(v6 + 2840);
        }
        else {
          v11 = v6 + 2825;
        }
        GameRoutine_a2cc00(v6, v11);
      }
    }
    else {
      GameRoutine_10c830(v12, 0.0f);
      GameRoutine_a2f940(v6, v12, v1, 0, 0.0f);
      GameRoutine_10cff0(v12);
    }
    *(_BYTE*)(*v2 + 652) = 1;
    GameData_21ec590 = 0;
  }
}

__int64 GameHr_80cc80()
{

#pragma clang fp contract(off)
  __int64* v0;
  __int64 result;
  char v2;
  __int64 v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  bool v8;
  __int64 v10;
  _QWORD v11[25];
  struct {
    __int64 v12[2];
    char* v13;
  } v12_;

  v0 = game_sound_g_game_sound_ptr[0];
  result = X8CALL_X0(
      unsigned __int64,
      snd_BGM_getFirstNameString(
          (void*)(v12_.v12), *(_QWORD*)(*game_sound_g_game_sound_ptr[0] + 8)));
  v2 = v12_.v12[0] & 1;
  v3 = LOBYTE(v12_.v12[0]) >> 1;
  if ((v12_.v12[0] & 1) != 0) {
    v3 = v12_.v12[1];
  }
  if (v3 != 17) {
    goto LABEL_13;
  }
  v4 = v12_.v13;
  if ((v12_.v12[0] & 1) == 0) {
    v4 = (char*)v12_.v12 + 1;
  }
  v5 = *(_QWORD*)v4;
  v6 = *((_QWORD*)v4 + 1);
  v7 = (unsigned __int8)v4[16];
  v8 = v5 == 0x5F5359535F4D4742LL && v6 == 0x7265764F656D6147LL;
  if (!v8 || v7 != 49) {
  LABEL_13:
    snd_Fade_Fade_10c830((__int64)v11, 0x1.f400000000000p+6f);
    GameHr_80cb30((__int64)v11);
    snd_Fade_Destroy_Fade(v11);
    v10 = *(_QWORD*)(*v0 + 8);
    snd_Fade_Fade_10c830((__int64)v11, 0x0.0p+0f);
    (*(void (**)(__int64, const char*, _QWORD*, _QWORD, double, float))(
        *(_QWORD*)v10 + 32LL))(v10, "BGM_SYS_GameOver1", v11, 0, 0x0.0p+0,
                               0x1.0000000000000p+0f);
    result = snd_Fade_Destroy_Fade(v11);
    v2 = v12_.v12[0] & 1;
  }
  if (v2 != 0) {
    return (*(__int64 (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                           24LL))(*snd_g_memory_ptr[0],
                                                  v12_.v13);
  }
  return result;
}

__int64 GameHr_80eb10(char a1)
{
  __int64* v2;
  __int64 result;
  char v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  bool v11;
  __int64 v13;
  __int64 v14;
  _QWORD v15[25];
  struct {
    __int64 v16[2];
    char* v17;
  } v16_;

  v2 = game_sound_g_game_sound_ptr[0];
  result = *(_QWORD*)(*game_sound_g_game_sound_ptr[0] + 8);
  if (result != 0 && GameData_21ec590 == 0) {
    if ((a1 & 1) != 0) {
      result = X8CALL_X0(unsigned __int64,
                         snd_BGM_getFirstNameString((void*)(v16_.v16), result));
      v5 = v16_.v16[0] & 1;
      v6 = LOBYTE(v16_.v16[0]) >> 1;
      if ((v16_.v16[0] & 1) != 0) {
        v6 = v16_.v16[1];
      }
      if (v6 != 17) {
        goto LABEL_19;
      }
      v7 = v16_.v17;
      if ((v16_.v16[0] & 1) == 0) {
        v7 = (char*)v16_.v16 + 1;
      }
      v8 = *(_QWORD*)v7;
      v9 = *((_QWORD*)v7 + 1);
      v10 = (unsigned __int8)v7[16];
      v11 = v8 == 0x5F5359535F4D4742LL && v9 == 0x7265764F656D6147LL;
      if (!v11 || v10 != 49) {
      LABEL_19:
        v13 = *v2;
        snd_Fade_Fade_10c830((__int64)v15, 0x1.f400000000000p+6f);
        snd_a2fab0(v13, (__int64)v15);
        result = snd_Fade_Destroy_Fade(v15);
        v5 = v16_.v16[0] & 1;
      }
      if (v5 != 0) {
        result = (*(__int64 (**)(_QWORD, char*))(
            **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0],
                                                     v16_.v17);
      }
    }
    else {
      snd_BGM_getFirstHandle((void*)((__int64)v16_.v16), result);
      result = snd_fnd_WeakHandle_isValid(v16_.v16);
      if ((result & 1) != 0) {
        v14 = snd_fnd_WeakHandle_get((__int64)v16_.v16);
        result = snd_Voice_hasFeature(v14 - 5592, 0x19u);
        if ((result & 1) == 0) {
          snd_Fade_Fade_10cb00((__int64)v15, "FadeTime_BGM_Bmap_In");
          snd_startVolume_1006d0(v16_.v16, 0, (__int64)v15,
                                 0x1.0000000000000p+0f);
          snd_Fade_Destroy_Fade(v15);
          snd_Fade_Fade_10cb00((__int64)v15, "FadeTime_BGM_Combat_Out");
          snd_startVolume_1006d0(v16_.v16, 1u, (__int64)v15, 0x0.0p+0f);
          snd_Fade_Destroy_Fade(v15);
          snd_Fade_Fade_10cb00((__int64)v15, "FadeTime_BGM_Combat_Out");
          snd_startVolume_1006d0(v16_.v16, 2u, (__int64)v15, 0x0.0p+0f);
          result = snd_Fade_Destroy_Fade(v15);
        }
      }
    }
    ++GameData_21ec590;
  }
  return result;
}

void GameHr_80ecf0()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  char* v2;
  char* v3;
  unsigned int v4;
  char** v5;
  int v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  struct {
    __int64 v14;
    int v15;
  } v14_;
  struct {
    __int16 v16;
    char gap18_[6];
    __int64 v17;
    char* v18;
  } v16_;
  _QWORD v19[25];

  if ((GameData_21ec594 & 1) != 0) {
    return;
  }
  v16_.v16 = 0;
  v0 = *(unsigned int*)(game_sound_g_game_sound + 644);
  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v1 = *(_QWORD*)(game_GameModeData_instance_ + 16);
  }
  if ((int)v0 < 1) {
    if (v1 != 0) {
      v3 = (char*)(v1 + 138);
    }
    else {
      v0 = game_cmdbtl_ProcCmdBtlSeqView_instance_;
      if (game_cmdbtl_ProcCmdBtlSeqView_instance_ == 0) {
        goto LABEL_19;
      }
      v3 = &game_cmdbtl_g_match_result;
      if ((GameData_2216858 & 1) == 0) {
        goto LABEL_19;
      }
    }
    v4 = (unsigned __int8)*v3 - 1;
    if (v4 <= 2) {
      v5 = GameData_1f9d968;
      goto LABEL_17;
    }
  LABEL_18:
    LODWORD(v1) = 0;
    goto LABEL_19;
  }
  if (v1 != 0) {
    v2 = (char*)(v1 + 138);
  }
  else {
    v0 = game_cmdbtl_ProcCmdBtlSeqView_instance_;
    if (game_cmdbtl_ProcCmdBtlSeqView_instance_ == 0) {
      goto LABEL_19;
    }
    v2 = &game_cmdbtl_g_match_result;
    if ((GameData_2216858 & 1) == 0) {
      goto LABEL_19;
    }
  }
  v4 = (unsigned __int8)*v2 - 1;
  if (v4 >= 3) {
    goto LABEL_18;
  }
  v5 = GameData_1f9d950;
LABEL_17:
  GameRoutine_60a020_alt1((__int64)&v16_.v16, v5[(unsigned __int8)v4]);
  LODWORD(v1) = (unsigned __int8)v16_.v16;
  v0 = v16_.v17;
LABEL_19:
  v6 = v1 & 1;
  v7 = (unsigned int)v1 >> 1;
  if (v6 != 0) {
    v7 = v0;
  }
  if (v7 != 0) {
    if ((snd_fnd_WeakHandle_isValid(&GameData_21ec568) & 1) != 0) {
      v8 = snd_fnd_WeakHandle_get((__int64)&GameData_21ec568);
      snd_Fade_Fade_10c910((__int64)v19, 500);
      (*(void (**)(__int64, _QWORD*, _QWORD, double))(
          *(_QWORD*)(v8 - 5592) + 248LL))(v8 - 5592, v19, 0, 0x0.0p+0);
      snd_Fade_Destroy_Fade(v19);
    }
    if ((v16_.v16 & 1) != 0) {
      v9 = v16_.v18;
    }
    else {
      v9 = (char*)&v16_.v16 + 1;
    }
    if (v9 != nullptr) {
      snd_Fade_Fade_10c830((__int64)v19, 0x0.0p+0f);
      snd_play_ff2d0((__int64)v9, (__int64)v9, (__int64)v19, 0, 0x10001u, 0,
                     0x0.0p+0f, 0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade(v19);
    }
    else {
      v14_.v14 = 0;
      v14_.v15 = 0x2000;
    }
    GameRoutine_112180_alt1((__int64)&GameData_21ec568, (__int64)&v14_.v14);
    if ((snd_fnd_WeakHandle_isValid(&GameData_21ec568) & 1) != 0) {
      v10 = snd_fnd_WeakHandle_get((__int64)&GameData_21ec568);
      v11 = snd_fnd_WeakHandle_get((__int64)&GameData_21ec568);
      v12 = (*(__int64 (**)(__int64))(*(_QWORD*)(v11 - 5592) + 640LL))(v11 -
                                                                       5592);
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)(v10 - 5592) + 632LL))(
          v10 - 5592, v12 | 0x10u);
    }
    GameData_21ec594 = 1;
    v6 = v16_.v16 & 1;
  }
  if (v6 != 0 && v16_.v18 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13,
                                  (__int64)v16_.v18);
  }
}

__int64 GameHr_80f950(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[2];
  _BYTE v13[200];

  v2 = GameData_212d468[0];
  v3 = *GameData_212d468[0];
  GameRoutine_10c830(v13, 0.0f);
  GameRoutine_a2f940(v3, v13, a1, 0, 0.0f);
  GameRoutine_10cff0(v13);
  *(struct PseudoSret*)(v12) = GameRoutine_d98c0();
  GameRoutine_10c830(v13, 0.0f);
  GameRoutine_1006d0(v12, 0, v13, 1.0f);
  GameRoutine_10cff0(v13);
  GameRoutine_10c830(v13, 0.0f);
  GameRoutine_1006d0(v12, 1, v13, 0.0f);
  GameRoutine_10cff0(v13);
  GameRoutine_10c830(v13, 0.0f);
  GameRoutine_1006d0(v12, 2, v13, 0.0f);
  GameRoutine_10cff0(v13);
  if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
      (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
    *(_DWORD*)(GameData_22400f8 + 12) |= 0x10000u;
  }
  v4 = *v2;
  result = GameRoutine_d9850(*(_QWORD*)(*v2 + 8));
  if ((result & 1) == 0 ||
      (*(_DWORD*)(v4 + 2188) & 0x80000000) == 0 &&
          ((v6 = GameRoutine_dab80(*(_QWORD*)(v4 + 8)),
            v7 = v4 + 24LL * *(int*)(v4 + 2188), v8 = *(_BYTE*)(v7 + 712),
            v9 = *(_QWORD*)(v7 + 728), v10 = v7 + 713, (v8 & 1) != 0)
               ? (v11 = v9)
               : (v11 = v10),
           (_DWORD)(result = GameRoutine_1a09d30(v6, v11)) != 0)) {
    *(_DWORD*)(v4 + 2188) = -1;
  }
  return result;
}

void GameHr_80fb70()
{

#pragma clang fp contract(off)
  __int64 v0;
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
  bool v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int128 v19;
  struct {
    _QWORD v20[2];
    int v21;
  } v20_;

  GameHr_a2f880(game_sound_g_game_sound);
  v0 = GameData_21ec7c0;
  if (GameData_21ec7c0 != 0) {
    v1 = *(_QWORD*)(GameData_21ec7c0 + 80);
    if (v1 != 0) {
      v2 = *(_QWORD*)(GameData_21ec7c0 + 72);
      v3 = *(_QWORD*)(GameData_21ec7c0 + 80);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                                memory_order_relaxed);
      v4 = std___1___shared_weak_count_lock(v3);
      if (v4 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v5 = v4;
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak(v5);
        }
        std___1___shared_weak_count___release_weak(v1);
        if (v2 != 0) {
          v6 = *(_QWORD*)(v0 + 80);
          if (v6 != 0) {
            v7 = *(_QWORD*)(v0 + 72);
            v8 = *(_QWORD*)(v0 + 80);
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                      memory_order_relaxed);
            v9 = std___1___shared_weak_count_lock(v8);
            if (v9 != 0) {
              v10 = *(_QWORD*)(v7 + 24);
              if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v11 = v9;
                (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
                std___1___shared_weak_count___release_weak(v11);
              }
            }
            else {
              v10 = 0;
            }
            std___1___shared_weak_count___release_weak(v6);
            if (v10 != 0) {
              v19 = *(_OWORD*)(*(_QWORD*)(v10 + 16) + 560LL);
              v20_.v20[1] = *(_QWORD*)(*(_QWORD*)(v10 + 16) + 560LL);
              v20_.v21 = DWORD2(v19);
              v20_.v20[0] = snd_Vec3_vtable;
              v12 = (unsigned int)GameRoutine_80fde0_alt1(
                        0, 0, (float*)v20_.v20) != 0;
              goto LABEL_13;
            }
          }
        }
      }
      else {
        std___1___shared_weak_count___release_weak(v1);
      }
    }
  }
  v12 = false;
LABEL_13:
  snd_BGM_getFirstHandle((void*)((__int64)v20_.v20),
                         *(_QWORD*)(game_sound_g_game_sound + 8));
  v13 = snd_fnd_WeakHandle_get((__int64)v20_.v20);
  if (v13 != 0) {
    v14 = v13;
    if (snd_Voice_hasFeature(v13 - 5592, 0xEu) &&
        (v12 & *(_BYTE*)(v14 + 297)) == 1) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, _QWORD))(
          *(_QWORD*)(v14 - 5592) + 440LL))((void*)(v20_.v20), v14 - 5592, 0);
      v15 = snd_fnd_WeakHandle_get((__int64)v20_.v20);
      if (v15 != 0) {
        v16 = v15 - 5592;
      }
      else {
        v16 = 0;
      }
      v18 = *(_QWORD*)(v16 + 40);
      v17 = v16 + 40;
      if ((*(float (**)(__int64))(v18 + 88))(v17) != 0x0.0p+0f) {
        snd_Fade_Fade_10c830((__int64)v20_.v20, 0x0.0p+0f);
        (*(void (**)(__int64, _QWORD*, double))(*(_QWORD*)v17 + 96LL))(
            v17, v20_.v20, 0x0.0p+0);
        snd_Fade_Destroy_Fade(v20_.v20);
      }
      if ((*(float (**)(__int64))(*(_QWORD*)v17 + 80LL))(v17) == 0x0.0p+0f) {
        snd_Fade_Fade_10c830((__int64)v20_.v20, 0x0.0p+0f);
        (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)v17 + 112LL))(
            v17, v20_.v20, 0x1.0000000000000p+0f);
        snd_Fade_Destroy_Fade(v20_.v20);
      }
    }
  }
}

__int64 GameHr_810670(__int64 result)
{

#pragma clang fp contract(off)
  __int16 v1;
  __int64 v2;
  __int16 v3;
  __int64* v4;
  __int64 v5;
  const char* v6;
  __int64 v7;
  __int64 v8;
  const char* v9;
  __int64 v10;
  char v11;
  const char* v12;
  const char* v13;
  const char* v14;
  __int64 v15[25];

  if (result == 0) {
    return result;
  }
  v15[0] = result;
  v1 = game_120f710(v15);
  if ((v1 & 0x60) == 0) {
    if ((v1 & 0x80) != 0) {
      v7 = game_sound_g_game_sound;
      snd_Fade_Fade_10c910((__int64)v15, 250);
      snd_a2fab0(v7, (__int64)v15);
      snd_Fade_Destroy_Fade(v15);
      v4 = *(__int64**)(game_sound_g_game_sound + 8);
      snd_Fade_Fade_10c830((__int64)v15, 0x0.0p+0f);
      v5 = *v4;
      v6 = "BGM_SYS_GameOver1";
    }
    else {
      if ((v1 & 4) != 0) {
        v2 = game_sound_g_game_sound;
        v3 = v1;
        snd_Fade_Fade_10c910((__int64)v15, 250);
        snd_a2fab0(v2, (__int64)v15);
        snd_Fade_Destroy_Fade(v15);
        v1 = v3;
      }
      if ((v1 & 0x200) == 0) {
        goto LABEL_10;
      }
      v4 = *(__int64**)(game_sound_g_game_sound + 8);
      snd_Fade_Fade_10c830((__int64)v15, 0x0.0p+0f);
      v5 = *v4;
      v6 = "BGM_SYS_Dead1";
    }
    (*(void (**)(__int64*, const char*, __int64*, _QWORD, double, float))(
        v5 + 32))(v4, v6, v15, 0, 0x0.0p+0, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v15);
  }
LABEL_10:
  v8 = game_sound_g_game_sound;
  result = snd_BGM_isFirstActive(*(_QWORD*)(game_sound_g_game_sound + 8));
  if ((result & 1) == 0 ||
      (*(_DWORD*)(v8 + 2188) & 0x80000000) == 0 &&
          ((v9 = (const char*)snd_BGM_getFirstName(*(_QWORD*)(v8 + 8)),
            v10 = v8 + 24LL * *(int*)(v8 + 2188), v11 = *(_BYTE*)(v10 + 712),
            v12 = *(const char**)(v10 + 728), v13 = (const char*)(v10 + 713),
            (v11 & 1) != 0)
               ? (v14 = v12)
               : (v14 = v13),
           (_DWORD)(result = strcmp(v9, v14)) != 0)) {
    *(_DWORD*)(v8 + 2188) = -1;
  }
  return result;
}

__int64 GameHr_8118f0(_DWORD* a1)
{
  int v1;
  int v3;
  int v4;
  __int64 v7;
  __int64 result;
  _QWORD v9[2];
  _BYTE v10[200];
  _DWORD v11[2];

  v1 = a1[1];
  v11[0] = *a1;
  v11[1] = v1;
  v3 = GameRoutine_fdf60("BGM_MV00_05_MUSEUM", 0);
  v4 = GameRoutine_fdfe0("BGM_MV00_05_MUSEUM", 0);
  if (v3 == *a1 && v4 == a1[1] && *GameData_21321f8 == 1) {
    v11[0] = GameRoutine_fdf60("BGM_MV00_05_EN_MUSEUM", 0);
    v11[1] = GameRoutine_fdfe0("BGM_MV00_05_EN_MUSEUM", 0);
  }
  v7 = *(_QWORD*)(*GameData_212d468[0] + 8);
  GameRoutine_10c830(v10, 0.0);
  (*(void (**)(__int64, _DWORD*, _BYTE*, _QWORD, double, float))(
      *(_QWORD*)v7 + 40LL))(v7, v11, v10, 0, 0.0, 1.0);
  GameRoutine_10cff0(v10);
  *(struct PseudoSret*)(v9) = GameRoutine_d98c0();
  result = GameRoutine_1120d0(v9);
  if ((result & 1) != 0) {
    GameRoutine_10c830(v10, 0.0);
    GameRoutine_1006d0(v9, 0, v10, 1.0);
    GameRoutine_10cff0(v10);
    GameRoutine_10c830(v10, 0.0);
    GameRoutine_1006d0(v9, 1, v10, 0.0);
    GameRoutine_10cff0(v10);
    GameRoutine_10c830(v10, 0.0);
    GameRoutine_1006d0(v9, 2, v10, 0.0);
    return GameRoutine_10cff0(v10);
  }
  return result;
}

__int64 GameHr_811a70(__int64 a1)
{
  __int64 v2;
  __int64 result;
  _QWORD v4[2];
  _BYTE v5[200];

  v2 = *(_QWORD*)(*GameData_212d468[0] + 8);
  GameRoutine_10c830(v5, 0.0);
  (*(void (**)(__int64, __int64, _BYTE*, _QWORD, double, float))(
      *(_QWORD*)v2 + 32LL))(v2, a1, v5, 0, 0.0, 1.0);
  GameRoutine_10cff0(v5);
  *(struct PseudoSret*)(v4) = GameRoutine_d98c0();
  result = GameRoutine_1120d0(v4);
  if ((result & 1) != 0) {
    GameRoutine_10c830(v5, 0.0);
    GameRoutine_1006d0(v4, 0, v5, 1.0);
    GameRoutine_10cff0(v5);
    GameRoutine_10c830(v5, 0.0);
    GameRoutine_1006d0(v4, 1, v5, 0.0);
    GameRoutine_10cff0(v5);
    GameRoutine_10c830(v5, 0.0);
    GameRoutine_1006d0(v4, 2, v5, 0.0);
    return GameRoutine_10cff0(v5);
  }
  return result;
}

__int64 GameHr_811d20()
{
  __int64 v0;
  _BYTE v2[200];

  v0 = *(_QWORD*)(*GameData_212d468[0] + 8);
  GameRoutine_10c830(v2, 0.0);
  (*(void (**)(__int64, const char*, _BYTE*, _QWORD, double, float))(
      *(_QWORD*)v0 + 32LL))(v0, "BGM_SYS_ED1", v2, 0, 0.0, 1.0);
  return GameRoutine_10cff0(v2);
}

__int64 GameHr_811e50()
{
  __int64 v0;
  _BYTE v2[200];

  v0 = *(_QWORD*)(*GameData_212d468[0] + 8);
  GameRoutine_10c830(v2, 0.0);
  (*(void (**)(__int64, const char*, _BYTE*, _QWORD, double, float))(
      *(_QWORD*)v0 + 32LL))(v0, "BGM_SYS_MainTheme1", v2, 0, 0.0, 1.0);
  return GameRoutine_10cff0(v2);
}

__int64 GameHr_812170(__int64 a1)
{
  __int64 result;
  __int64 v3;
  _BYTE v4[200];

  if ((GameRoutine_1120d0(&GameData_21ec798) & 1) != 0) {
    GameRoutine_10c910(v4, 200);
    GameRoutine_ffc40(&GameData_21ec798, v4);
    GameRoutine_10cff0(v4);
  }
  result = GameRoutine_100090("ObeliskFotVoice");
  if ((result & 1) == 0) {
    GameRoutine_10c830(v4, 0.0f);
    *(struct PseudoSret*)(&v3) =
        GameRoutine_ff2d0("ObeliskFotVoice", a1, v4, 0, 65537, 0, 0.0f, 1.0f);
    return GameRoutine_10cff0(v4);
  }
  return result;
}

__int64 GameHr_877220(__int64 result, int a2, __int64 a3)
{
  __int64 v3;
  unsigned __int8 v6;
  _QWORD* v7;
  __int64 v8;
  char** v9;
  __int64 v10;

  v3 = GameData_21eea58;
  if (GameData_21eea58 == 0) {
    return result;
  }
  v6 = result;
  *(_BYTE*)GameData_21eea58 = 0;
  *(_DWORD*)(v3 + 4) = -1;
  if ((*(_BYTE*)(v3 + 8) & 1) != 0) {
    **(_BYTE**)(v3 + 24) = 0;
    *(_QWORD*)(v3 + 16) = 0;
  }
  else {
    *(_WORD*)(v3 + 8) = 0;
  }
  v7 = *(_QWORD**)(v3 + 80);
  *(_QWORD*)(v3 + 80) = 0;
  if (v7 == (_QWORD*)(v3 + 48)) {
    v8 = 32;
    goto LABEL_10;
  }
  if (v7 != nullptr) {
    v8 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
    v3 = GameData_21eea58;
  }
  *(_BYTE*)v3 = v6;
  *(_DWORD*)(v3 + 4) = a2;
  if (a3 == 0) {
    if (v6 == 3) {
      v9 = &GameData_1fa5c20[a2];
    }
    else {
      v9 = &GameData_1fa61f0[v6];
    }
    v10 = GameRoutine_7a7dc0("%s/%s", "000", *v9);
    v3 = GameData_21eea58;
    a3 = v10;
  }
  return GameRoutine_60a020(v3 + 8, a3);
}

__int64 GameHr_877330(unsigned __int8 a1, unsigned __int8 a2, int a3, int a4)
{
  __int64 result;
  __int64 v6;
  char* v7;
  _QWORD* v8;
  __int64 v9;
  char* v10;

  result = GameRoutine_874b20(a1, a2, a3, a4);
  v6 = GameData_21eea58;
  if (GameData_21eea58 == 0) {
    return result;
  }
  v7 = (char*)result;
  *(_BYTE*)GameData_21eea58 = 0;
  *(_DWORD*)(v6 + 4) = -1;
  if ((*(_BYTE*)(v6 + 8) & 1) != 0) {
    **(_BYTE**)(v6 + 24) = 0;
    *(_QWORD*)(v6 + 16) = 0;
  }
  else {
    *(_WORD*)(v6 + 8) = 0;
  }
  v8 = *(_QWORD**)(v6 + 80);
  *(_QWORD*)(v6 + 80) = 0;
  if (v8 == (_QWORD*)(v6 + 48)) {
    v9 = 32;
    goto LABEL_10;
  }
  if (v8 != nullptr) {
    v9 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v8 + v9))((__int64)v8);
    v6 = GameData_21eea58;
  }
  *(_BYTE*)v6 = a1;
  if (*v7 != 0) {
    v10 = v7;
  }
  else {
    v10 = &GameData_1a9f09e;
  }
  return GameRoutine_60a020(GameData_21eea58 + 8, v10);
}

__int64 GameHr_877790(unsigned __int8 a1, unsigned __int8 a2, int a3, int a4)
{
  _QWORD v6[2];
  __int64 v7;
  unsigned __int8 v8;
  char v9;

  v6[0] = GameRoutine_874b20(a1, a2, a3, a4);
  v6[1] = GameRoutine_1a09c70(v6[0]);
  *(struct PseudoSret*)(&v7) = GameRoutine_878ea0(v6);
  if ((_BYTE)v7 == 0) {
    return 0;
  }
  if ((v9 & 0x40) != 0) {
    return 3;
  }
  if (GameData_21caab0 == 0) {
    if (HIDWORD(v7) == 0) {
      goto LABEL_5;
    }
    return 2;
  }
  if (HIDWORD(v7) != *(_DWORD*)(GameData_21caab0 + 8)) {
    return 2;
  }
LABEL_5:
  if (a1 == 4 && GameData_21caab0 != 0 &&
      *(unsigned __int8*)(GameData_21caab0 + 15) == v8 &&
      *(_DWORD*)(GameData_21caab0 + 60) != 0) {
    return 1;
  }
  else {
    return 4;
  }
}

__int64 GameHr_8b07c0(__int64 a1, __int64 a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int16* v7;
  __int64 v8;
  int v9;
  __int64* v10;
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
  unsigned int v21;
  unsigned int v22;
  __int64 result;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  struct {
    _QWORD v31[4];
    _QWORD* v32;
  } v31_;
  char v33;
  struct {
    _QWORD v34[4];
    _QWORD* v35;
  } v34_;

  if (a2 == 0 || *(_QWORD*)(a2 + 352) == 0) {
    return 0;
  }
  v33 = 0;
  v31_.v31[0] = GameData_1fa91b8;
  v31_.v31[1] = &v33;
  v4 = v34_.v34;
  v31_.v32 = v31_.v31;
  LODWORD(v34_.v34[0]) = 17;
  v5 = game_UnitPool_GetFirst((int*)v34_.v34);
  if (v5 != 0) {
    v6 = *(_QWORD*)(v5 + 432);
    v7 = (unsigned __int16*)v5;
    if (v6 == 0) {
      v8 = *(_QWORD*)(v5 + 440);
      if (v8 != 0 && (unsigned int)(v9 = *(unsigned __int8*)(v8 + 16)) <= 8) {
        v30 = v9 - 3;
        while (1) {
          if (v30 == 0) {
            v6 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
            if (v6 != 0) {
              break;
            }
          }
          if (++v30 == 6) {
            goto LABEL_7;
          }
        }
      }
      else {
      LABEL_7:
        v6 = 0;
      }
    }
    v10 = GameData_212c878[0];
    v11 = *GameData_212c878[0];
    while (1) {
    LABEL_10:
      v12 = v6;
      v13 = *(_QWORD*)(v11 + 64);
      v14 = *(_QWORD*)(v13 + 8LL * v7[414]);
      if (v14 != 0 &&
          *(_QWORD*)(*(_QWORD*)(v14 + 24) + 600LL) ==
              *(_QWORD*)(*(_QWORD*)(a2 + 24) + 600LL) &&
          *(_WORD*)(v14 + 16) != 0) {
        v34_.v34[0] = v7;
        v34_.v34[1] = 0x100000000LL;
        if (v31_.v32 == nullptr) {
          goto LABEL_75;
        }
        (*(void (**)(_QWORD*, _QWORD*))(*v31_.v32 + 48LL))(v31_.v32, v34_.v34);
        v11 = *v10;
        v13 = *(_QWORD*)(*v10 + 64);
      }
      v15 = *(_QWORD*)(v13 + 8LL * v7[418]);
      if (v15 != 0 &&
          *(_QWORD*)(*(_QWORD*)(v15 + 24) + 600LL) ==
              *(_QWORD*)(*(_QWORD*)(a2 + 24) + 600LL) &&
          *(_WORD*)(v15 + 16) != 0) {
        v34_.v34[0] = v7;
        v34_.v34[1] = 0x100000001LL;
        if (v31_.v32 == nullptr) {
          goto LABEL_75;
        }
        (*(void (**)(_QWORD*, _QWORD*))(*v31_.v32 + 48LL))(v31_.v32, v34_.v34);
        v11 = *v10;
        v13 = *(_QWORD*)(*v10 + 64);
      }
      v16 = *(_QWORD*)(v13 + 8LL * v7[422]);
      if (v16 != 0 &&
          *(_QWORD*)(*(_QWORD*)(v16 + 24) + 600LL) ==
              *(_QWORD*)(*(_QWORD*)(a2 + 24) + 600LL) &&
          *(_WORD*)(v16 + 16) != 0) {
        v34_.v34[0] = v7;
        v34_.v34[1] = 0x100000002LL;
        if (v31_.v32 == nullptr) {
          goto LABEL_75;
        }
        (*(void (**)(_QWORD*, _QWORD*))(*v31_.v32 + 48LL))(v31_.v32, v34_.v34);
        v11 = *v10;
        v13 = *(_QWORD*)(*v10 + 64);
      }
      v17 = *(_QWORD*)(v13 + 8LL * v7[426]);
      if (v17 != 0 &&
          *(_QWORD*)(*(_QWORD*)(v17 + 24) + 600LL) ==
              *(_QWORD*)(*(_QWORD*)(a2 + 24) + 600LL) &&
          *(_WORD*)(v17 + 16) != 0) {
        v34_.v34[0] = v7;
        v34_.v34[1] = 0x100000003LL;
        if (v31_.v32 == nullptr) {
          goto LABEL_75;
        }
        (*(void (**)(_QWORD*, _QWORD*))(*v31_.v32 + 48LL))(v31_.v32, v34_.v34);
        v11 = *v10;
        v13 = *(_QWORD*)(*v10 + 64);
      }
      v18 = *(_QWORD*)(v13 + 8LL * v7[430]);
      if (v18 != 0 &&
          *(_QWORD*)(*(_QWORD*)(v18 + 24) + 600LL) ==
              *(_QWORD*)(*(_QWORD*)(a2 + 24) + 600LL) &&
          *(_WORD*)(v18 + 16) != 0) {
        v34_.v34[0] = v7;
        v34_.v34[1] = 0x100000004LL;
        if (v31_.v32 == nullptr) {
          goto LABEL_75;
        }
        (*(void (**)(_QWORD*, _QWORD*))(*v31_.v32 + 48LL))(v31_.v32, v34_.v34);
        v11 = *v10;
        v13 = *(_QWORD*)(*v10 + 64);
      }
      v19 = *(_QWORD*)(v13 + 8LL * v7[434]);
      if (v19 != 0 &&
          *(_QWORD*)(*(_QWORD*)(v19 + 24) + 600LL) ==
              *(_QWORD*)(*(_QWORD*)(a2 + 24) + 600LL) &&
          *(_WORD*)(v19 + 16) != 0) {
        v34_.v34[0] = v7;
        v34_.v34[1] = 0x100000005LL;
        if (v31_.v32 == nullptr) {
        LABEL_75:
          GameRoutine_60a310_alt1();
        }
        (*(void (**)(_QWORD*, _QWORD*))(*v31_.v32 + 48LL))(v31_.v32, v34_.v34);
        v11 = *v10;
      }
      if (v12 == 0) {
        break;
      }
      v6 = *(_QWORD*)(v12 + 432);
      v7 = (unsigned __int16*)v12;
      if (v6 == 0) {
        v20 = *(_QWORD*)(v12 + 440);
        v7 = (unsigned __int16*)v12;
        if (v20 != 0) {
          v21 = *(unsigned __int8*)(v20 + 16);
          v6 = 0;
          v7 = (unsigned __int16*)v12;
          if (v21 <= 8) {
            v22 = v21 - 3;
            while (1) {
              if (v22 == 0) {
                v6 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v6 != 0) {
                  break;
                }
              }
              if (++v22 == 6) {
                v6 = 0;
                v7 = (unsigned __int16*)v12;
                goto LABEL_10;
              }
            }
            v7 = (unsigned __int16*)v12;
          }
        }
      }
    }
  }
  v34_.v35 = v34_.v34;
  v34_.v34[0] = GameData_1fa9138;
  v34_.v34[1] = a2;
  v34_.v34[2] = v31_.v31;
  v24 = *(_QWORD*)(game_TransporterConst_List_instance_ + 8);
  v25 = *(unsigned int*)(v24 + 80);
  if ((int)v25 < 1) {
    goto LABEL_59;
  }
  v26 = 0;
  v27 = 12 * v25;
  do {
    if (*(_WORD*)(*(_QWORD*)(v24 + 8) + v26 + 2) != 0) {
      if (v34_.v35 == nullptr) {
        goto LABEL_75;
      }
      (*(void (**)(_QWORD*))(*v34_.v35 + 48LL))(v34_.v35);
    }
    v26 += 12;
  } while (v27 != v26);
  v4 = v34_.v35;
  if (v34_.v35 == v34_.v34) {
  LABEL_59:
    v28 = 32;
  }
  else {
    if (v34_.v35 == nullptr) {
      goto LABEL_61;
    }
    v28 = 40;
  }
  (*(void (**)(_QWORD*))(*v4 + v28))(v4);
LABEL_61:
  if (v31_.v32 == v31_.v31) {
    v29 = 32;
    goto LABEL_65;
  }
  if (v31_.v32 != nullptr) {
    v29 = 40;
  LABEL_65:
    (*(void (**)(__int64))(*v31_.v32 + v29))((__int64)v31_.v32);
  }
  result = 0;
  if (a1 != 0 && (v33 & 1) != 0) {
    return GameRoutine_177c650_alt1(a1, a2, *(_QWORD*)(a2 + 352), 0);
  }
  return result;
}

__int64 GameHr_8b0c90(__int64 a1, __int64 a2, _WORD* a3)
{
  char v4;
  int v5;
  int v6;
  __int64 result;
  __int64 v8;
  unsigned int v9;
  bool v10;
  unsigned int v11;
  __int64 v15;
  char* v16;
  const char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  struct {
    _QWORD v22[2];
    char* v23;
  } v22_;
  struct {
    _WORD v24[8];
    __int64 v25;
    int v26;
    char gap76_[4];
    __int64 v27;
    __int64 v28;
    __int64 v29;
    int v30;
  } v24_;

  v4 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    if (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3) {
      v4 = 0;
      result = 0;
      if (a1 == 0) {
        return result;
      }
      goto LABEL_10;
    }
    v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v5 & 8) != 0) {
      v6 = 2;
    }
    else {
      v6 = 3;
    }
    v4 = (v6 & v5) == 0;
  }
  result = 0;
  if (a1 == 0) {
    return result;
  }
LABEL_10:
  if ((v4 & 1) == 0 && *a3 != 0) {
    v8 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                    8LL * (unsigned __int16)*a3);
    if (*(_BYTE*)(v8 + 87) == 0) {
      return 0;
    }
    v9 = *(unsigned __int8*)(v8 + 72);
    v10 = v9 >= 7;
    v11 = v9 - 7;
    if (v11 != 0 && v10 || v11 > 0xFFFFFFFD) {
      return 0;
    }
    else {
      snd_Fade_Fade_10c830((__int64)v22_.v22, 0x0.0p+0f);
      snd_play_ff2d0((__int64)"FF_Negative1", (__int64)"FF_Negative1",
                     (__int64)v22_.v22, 0, 0x10001u, 0, 0x0.0p+0f,
                     0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade(v22_.v22);
      v15 = fw_memory_g_heap_manager_ptr;
      v16 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
      v24_.v24[0] = 0;
      v24_.v26 = 0;
      v24_.v27 = 0;
      v24_.v28 = 0;
      v24_.v29 = 0;
      v22_.v22[0] = 33;
      v22_.v22[1] = 26;
      v22_.v23 = v16;
      strcpy(v16, "MID_Sys_ItemBroken_Message");
      v24_.v30 = -1;
      if (*(_BYTE*)(a2 + 2136) != 0) {
        v17 = (const char*)game_97b2f0(a2 + 2104);
      }
      else {
        v17 = GameHr_67ed20(*(_QWORD**)(a2 + 392));
      }
      GameRoutine_60a020_alt1((__int64)v24_.v24, v17);
      v24_.v27 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                            8LL * (unsigned __int16)*a3);
      result = game_telop_Message_SetCommon(a1, (unsigned __int8*)v22_.v22);
      if ((v24_.v24[0] & 1) != 0 && v24_.v25 != 0) {
        v18 = result;
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v19, v24_.v25);
        result = v18;
      }
      if ((v22_.v22[0] & 1) != 0 && v22_.v23 != nullptr) {
        v20 = result;
        v21 = 128;
        if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v21, (__int64)v22_.v23);
        return v20;
      }
    }
  }
  return result;
}

__int64 GameHr_8b8620(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 v19[4];
    __int64* v20;
  } v19_;
  struct {
    __int64* v21;
    __int64 v22;
    __int64 v23;
  } v21_;
  struct {
    _BYTE v24[1296];
    __int64 v25;
    __int64 v26;
    char gap1392_[32];
    char v27;
  } v24_;
  struct {
    _QWORD v28[4];
    _QWORD* v29;
  } v28_;

  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_6c2b50_alt1((__int64)v24_.v24),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_6c3980_alt1((__int64)v24_.v24, *(_QWORD*)(a1 + 152)),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = v28_.v28;
  v21_.v22 = 0;
  v21_.v23 = 0;
  v21_.v21 = nullptr;
  v19_.v19[0] = (__int64)GameData_1fa9a88;
  v19_.v19[1] = (__int64)&v21_.v21;
  v28_.v29 = v28_.v28;
  v19_.v20 = v19_.v19;
  v28_.v28[0] = GameData_1f91be8;
  v28_.v28[1] = v19_.v19;
  if ((v24_.v27 & 2) == 0) {
    goto LABEL_11;
  }
  v4 = v24_.v26;
  v5 = v24_.v25;
  if ((int)((unsigned __int64)(v24_.v26 - v24_.v25) >> 2) < 1) {
    goto LABEL_11;
  }
  v6 = 0;
  v7 = 0;
  v8 = GameData_212c880[0];
  v9 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v9 + 64) +
                             8LL * (*(_DWORD*)(v5 + v6) & 0xFFF)) +
                  104LL) == 1) {
      if (v28_.v29 == nullptr) {
        GameRoutine_60a310_alt1(),
            v2 = COERCE_AS(__typeof__(v2),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      (*(void (**)(_QWORD*, __int64))(*v28_.v29 + 48LL))(v28_.v29, v5 + v6),
          v2 = COERCE_AS(__typeof__(v2),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v9 = *v8;
      v4 = v24_.v26;
      v5 = v24_.v25;
    }
    ++v7;
    v6 += 4;
  } while (v7 < (int)((unsigned __int64)(v4 - v5) >> 2));
  v3 = v28_.v29;
  if (v28_.v29 == v28_.v28) {
  LABEL_11:
    v10 = 32;
  }
  else {
    if (v28_.v29 == nullptr) {
      goto LABEL_13;
    }
    v10 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v3 + v10))(v3, v2),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_13:
  if (v19_.v20 == v19_.v19) {
    v11 = 32;
    goto LABEL_17;
  }
  if (v19_.v20 != nullptr) {
    v11 = 40;
  LABEL_17:
    (*(void (**)(__int64*, __int64))(*v19_.v20 + v11))(v19_.v20, v2),
        v2 = COERCE_AS(__typeof__(v2),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v12 = v21_.v21;
  v13 = (__int64*)v21_.v22;
  while (v12 != v13) {
    v14 = *v12;
    if (*v12 != 0) {
      LODWORD(v14) = *(_WORD*)(v14 + 16) & 0xFFF;
    }
    LODWORD(v28_.v28[0]) = v14;
    Unit_6ccca0((__int64)v24_.v24, (unsigned int*)v28_.v28),
        v2 = COERCE_AS(__typeof__(v2),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    ++v12;
  }
  game_Unit_GetParams((void*)(v19_.v19), (__int64)v24_.v24),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_BYTE*)(game_Unit_GetJob((__int64)v24_.v24) + 96) != 2) {
    GameRoutine_93f040_alt1((__int64)v28_.v28, (__int64)v24_.v24, 1),
        v2 = COERCE_AS(__typeof__(v2),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    game_Unit_GetParams((void*)(v19_.v19), (__int64)v24_.v24),
        v2 = COERCE_AS(__typeof__(v2),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    GameRoutine_93eed0_alt1(v28_.v28),
        v2 = COERCE_AS(__typeof__(v2),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v15 = *(_QWORD*)(a1 + 152);
  v16 = *(_QWORD*)(v15 + 400);
  TelopLevelUp_1748710((void*)((__int64)v28_.v28), v15),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_95f930_alt1(1, *(_QWORD*)(a1 + 152), *(_QWORD*)(a1 + 160)),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (game_facility_FacilityView_instance_ != 0) {
    GameRoutine_146b460_alt1(),
        v2 = COERCE_AS(__typeof__(v2),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (game_facility_FacilityView_instance_ != 0) {
      GameHr_146b6c0(),
          v2 = COERCE_AS(__typeof__(v2),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  GameRoutine_174aa80_alt1(a1, *(_QWORD*)(a1 + 152), v16, v19_.v19, v28_.v28),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v21_.v21 != nullptr) {
    v21_.v22 = (__int64)v21_.v21;
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17,
                                  (__int64)v21_.v21),
        v2 = COERCE_AS(__typeof__(v2),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  return game_Unit_Destroy_Unit((__int64)v24_.v24);
}

__int64 GameHr_8e56c0(__int64* a1)
{
  __int64 v2;
  __int64 i;
  __int64 v4;
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
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 result;
  __int64 v30;
  struct {
    _QWORD v31[4];
    _QWORD* v32;
  } v31_;
  struct {
    _QWORD v33[2];
    _QWORD* v34;
    char gap72_[8];
    _QWORD* v35;
  } v33_;
  struct {
    _QWORD v36[2];
    _QWORD* v37;
    char gap120_[8];
    _QWORD* v38;
  } v36_;

  GameRoutine_89b540_alt1(a1[1]);
  RidePool_93bb80(a1[3]);
  v2 = a1[5];
  for (i = -2400; i != 0; i += 160) {
    *(_QWORD*)(*(_QWORD*)(v2 + 48) + i + 2400) = 0;
    *(_QWORD*)(*(_QWORD*)(v2 + 48) + i + 2408) = 0;
    *(_QWORD*)(*(_QWORD*)(v2 + 48) + i + 2416) = 0;
    *(_QWORD*)(*(_QWORD*)(v2 + 48) + i + 2424) = 0;
    *(_QWORD*)(*(_QWORD*)(v2 + 48) + i + 2432) = 0;
    *(_QWORD*)(*(_QWORD*)(v2 + 48) + i + 2440) = 0;
    *(_QWORD*)(*(_QWORD*)(v2 + 48) + i + 2448) = 0;
    *(_QWORD*)(*(_QWORD*)(v2 + 48) + i + 2456) = 0;
    *(_QWORD*)(*(_QWORD*)(v2 + 48) + i + 2464) = 0;
    *(_QWORD*)(*(_QWORD*)(v2 + 48) + i + 2472) = 0;
    *(_QWORD*)(*(_QWORD*)(v2 + 48) + i + 2480) = 0;
    *(_QWORD*)(*(_QWORD*)(v2 + 48) + i + 2488) = 0;
    *(_QWORD*)(*(_QWORD*)(v2 + 48) + i + 2496) = 0;
    *(_QWORD*)(*(_QWORD*)(v2 + 48) + i + 2504) = 0;
    *(_QWORD*)(*(_QWORD*)(v2 + 48) + i + 2512) = 0;
    *(_QWORD*)(*(_QWORD*)(v2 + 48) + i + 2520) = 0;
    *(_QWORD*)(*(_QWORD*)(v2 + 48) + i + 2528) = 0;
    *(_QWORD*)(*(_QWORD*)(v2 + 48) + i + 2536) = 0;
    *(_QWORD*)(*(_QWORD*)(v2 + 48) + i + 2544) = 0;
    v4 = *(_QWORD*)(v2 + 48) + i;
    *(_QWORD*)(v4 + 2552) = 0;
  }
  if (*(_QWORD*)(v2 + 32) != 0) {
    v5 = *(_QWORD**)(v2 + 24);
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
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v8, (__int64)v5);
        v5 = v7;
      } while (v7 != nullptr);
    }
    v9 = *(_QWORD*)(v2 + 16);
    *(_QWORD*)(v2 + 24) = 0;
    if (v9 != 0) {
      v10 = v9 & 7;
      if (v9 >= 8) {
        v12 = v9 & 0xFFFFFFFFFFFFFFF8LL;
        v11 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v2 + 8) + 8 * v11) = 0;
          *(_QWORD*)(*(_QWORD*)(v2 + 8) + 8 * v11 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v2 + 8) + 8 * v11 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v2 + 8) + 8 * v11 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v2 + 8) + 8 * v11 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v2 + 8) + 8 * v11 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v2 + 8) + 8 * v11 + 48) = 0;
          v13 = *(_QWORD*)(v2 + 8) + 8 * v11;
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
          *(_QWORD*)(*(_QWORD*)(v2 + 8) + v14) = 0;
          v14 += 8;
        } while (v10 != 0);
      }
    }
    *(_QWORD*)(v2 + 32) = 0;
  }
  *(_DWORD*)(v2 + 72) = 0;
  v33_.v33[0] = GameData_1fac420;
  v33_.v33[1] = a1;
  v15 = v36_.v36;
  v36_.v38 = v36_.v36;
  v33_.v35 = v33_.v33;
  v36_.v36[0] = GameData_1fab780;
  v36_.v36[1] = v33_.v33;
  v16 = *(_QWORD*)(game_TransporterConst_List_instance_ + 8);
  v17 = *(unsigned int*)(v16 + 80);
  if ((int)v17 < 1) {
    goto LABEL_29;
  }
  v18 = 0;
  v19 = 12 * v17;
  do {
    if (*(_WORD*)(*(_QWORD*)(v16 + 8) + v18 + 2) != 0) {
      if (v36_.v38 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(_QWORD*))(*v36_.v38 + 48LL))(v36_.v38);
    }
    v18 += 12;
  } while (v19 != v18);
  v15 = v36_.v38;
  if (v36_.v38 == v36_.v36) {
  LABEL_29:
    v20 = 32;
  }
  else {
    if (v36_.v38 == nullptr) {
      goto LABEL_31;
    }
    v20 = 40;
  }
  (*(void (**)(__int64))(*v15 + v20))((__int64)v15);
LABEL_31:
  if (v33_.v35 == v33_.v33) {
    v21 = 32;
  }
  else {
    if (v33_.v35 == nullptr) {
      goto LABEL_36;
    }
    v21 = 40;
  }
  (*(void (**)(__int64))(*v33_.v35 + v21))((__int64)v33_.v35);
LABEL_36:
  v31_.v31[0] = GameData_1fac4a0;
  v31_.v31[1] = a1;
  v33_.v33[0] = GameData_1fab800;
  v33_.v33[1] = 0;
  v31_.v32 = v31_.v31;
  v33_.v34 = v31_.v31;
  v33_.v35 = v33_.v33;
  v22 = *(_QWORD**)(GameData_21f4280 + 8);
  v36_.v37 = v33_.v33;
  v36_.v38 = v36_.v36;
  v36_.v36[0] = GameData_1faebf0;
  v36_.v36[1] = v22;
  LegionPool_9374e0(v22, (__int64)v36_.v36);
  if (v36_.v38 == v36_.v36) {
    v23 = 32;
  }
  else {
    if (v36_.v38 == nullptr) {
      goto LABEL_41;
    }
    v23 = 40;
  }
  (*(void (**)(__int64))(*v36_.v38 + v23))((__int64)v36_.v38);
LABEL_41:
  if (v33_.v35 == v33_.v33) {
    v24 = 32;
  }
  else {
    if (v33_.v35 == nullptr) {
      goto LABEL_46;
    }
    v24 = 40;
  }
  (*(void (**)(__int64))(*v33_.v35 + v24))((__int64)v33_.v35);
LABEL_46:
  if (v31_.v32 == v31_.v31) {
    v25 = 32;
  }
  else {
    if (v31_.v32 == nullptr) {
      goto LABEL_51;
    }
    v25 = 40;
  }
  (*(void (**)(__int64))(*v31_.v32 + v25))((__int64)v31_.v32);
LABEL_51:
  v31_.v31[0] = GameData_1fac520;
  v31_.v31[1] = a1;
  v33_.v33[0] = GameData_1fab880;
  v33_.v33[1] = 0;
  v31_.v32 = v31_.v31;
  v33_.v34 = v31_.v31;
  v33_.v35 = v33_.v33;
  v26 = *(_QWORD**)(GameData_21f42d0 + 8);
  v36_.v37 = v33_.v33;
  v36_.v38 = v36_.v36;
  v36_.v36[0] = GameData_1faedf8;
  v36_.v36[1] = v26;
  RidePool_93cc20(v26, (__int64)v36_.v36);
  if (v36_.v38 == v36_.v36) {
    v27 = 32;
  }
  else {
    if (v36_.v38 == nullptr) {
      goto LABEL_56;
    }
    v27 = 40;
  }
  (*(void (**)(__int64))(*v36_.v38 + v27))((__int64)v36_.v38);
LABEL_56:
  if (v33_.v35 == v33_.v33) {
    v28 = 32;
  }
  else {
    if (v33_.v35 == nullptr) {
      goto LABEL_61;
    }
    v28 = 40;
  }
  (*(void (**)(__int64))(*v33_.v35 + v28))((__int64)v33_.v35);
LABEL_61:
  result = (__int64)v31_.v32;
  if (v31_.v32 == v31_.v31) {
    v30 = 32;
  }
  else {
    if (v31_.v32 == nullptr) {
      return result;
    }
    v30 = 40;
  }
  return (*(__int64 (**)(__int64))(*v31_.v32 + v30))((__int64)v31_.v32);
}

__int64 GameHr_8e5be0(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;
  struct {
    _QWORD v20[2];
    _QWORD* v21;
    char gap72_[8];
    _QWORD* v22;
  } v20_;
  struct {
    _QWORD v23[2];
    _QWORD* v24;
    char gap120_[8];
    _QWORD* v25;
  } v23_;

  v20_.v20[0] = GameData_1fac5a0;
  v20_.v20[1] = a1;
  v2 = v23_.v23;
  v20_.v22 = v20_.v20;
  v23_.v23[0] = GameData_1fab780;
  v23_.v23[1] = v20_.v20;
  v23_.v25 = v23_.v23;
  v3 = *(_QWORD*)(game_TransporterConst_List_instance_ + 8);
  v4 = *(unsigned int*)(v3 + 80);
  if ((int)v4 < 1) {
    goto LABEL_10;
  }
  v5 = 0;
  v6 = 12 * v4;
  do {
    if (*(_WORD*)(*(_QWORD*)(v3 + 8) + v5 + 2) != 0) {
      if (v23_.v25 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(_QWORD*))(*v23_.v25 + 48LL))(v23_.v25);
    }
    v5 += 12;
  } while (v6 != v5);
  v2 = v23_.v25;
  if (v23_.v25 == v23_.v23) {
  LABEL_10:
    v7 = 32;
  }
  else {
    if (v23_.v25 == nullptr) {
      goto LABEL_12;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v2 + v7))((__int64)v2);
LABEL_12:
  if (v20_.v22 == v20_.v20) {
    v8 = 32;
  }
  else {
    if (v20_.v22 == nullptr) {
      goto LABEL_17;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v20_.v22 + v8))((__int64)v20_.v22);
LABEL_17:
  v18_.v18[0] = GameData_1fac620;
  v18_.v18[1] = a1;
  v20_.v20[0] = GameData_1fab800;
  v20_.v20[1] = 1;
  v18_.v19 = v18_.v18;
  v20_.v21 = v18_.v18;
  v20_.v22 = v20_.v20;
  v9 = *(_QWORD**)(*(_QWORD*)GameData_212cf80[0] + 8LL);
  v23_.v24 = v20_.v20;
  v23_.v25 = v23_.v23;
  v23_.v23[0] = GameData_1faebf0;
  v23_.v23[1] = v9;
  LegionPool_9374e0(v9, (__int64)v23_.v23);
  if (v23_.v25 == v23_.v23) {
    v10 = 32;
  }
  else {
    if (v23_.v25 == nullptr) {
      goto LABEL_22;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v23_.v25 + v10))((__int64)v23_.v25);
LABEL_22:
  if (v20_.v22 == v20_.v20) {
    v11 = 32;
  }
  else {
    if (v20_.v22 == nullptr) {
      goto LABEL_27;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v20_.v22 + v11))((__int64)v20_.v22);
LABEL_27:
  if (v18_.v19 == v18_.v18) {
    v12 = 32;
  }
  else {
    if (v18_.v19 == nullptr) {
      goto LABEL_32;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v18_.v19 + v12))((__int64)v18_.v19);
LABEL_32:
  v18_.v18[0] = GameData_1fac6a0;
  v18_.v18[1] = a1;
  v20_.v20[0] = GameData_1fab880;
  v20_.v20[1] = 1;
  v18_.v19 = v18_.v18;
  v20_.v21 = v18_.v18;
  v20_.v22 = v20_.v20;
  v13 = *(_QWORD**)(*(_QWORD*)GameData_212cf88[0] + 8LL);
  v23_.v24 = v20_.v20;
  v23_.v25 = v23_.v23;
  v23_.v23[0] = GameData_1faedf8;
  v23_.v23[1] = v13;
  RidePool_93cc20(v13, (__int64)v23_.v23);
  if (v23_.v25 == v23_.v23) {
    v14 = 32;
  }
  else {
    if (v23_.v25 == nullptr) {
      goto LABEL_37;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*v23_.v25 + v14))((__int64)v23_.v25);
LABEL_37:
  if (v20_.v22 == v20_.v20) {
    v15 = 32;
  }
  else {
    if (v20_.v22 == nullptr) {
      goto LABEL_42;
    }
    v15 = 40;
  }
  (*(void (**)(__int64))(*v20_.v22 + v15))((__int64)v20_.v22);
LABEL_42:
  result = (__int64)v18_.v19;
  if (v18_.v19 == v18_.v18) {
    v17 = 32;
  }
  else {
    if (v18_.v19 == nullptr) {
      return result;
    }
    v17 = 40;
  }
  return (*(__int64 (**)(__int64))(*v18_.v19 + v17))((__int64)v18_.v19);
}

unsigned __int8* GameHr_8f7c50(unsigned __int8* result, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v7;
  unsigned int v8;
  unsigned __int8 v9;
  unsigned __int8 v10;
  int v11;
  __int64 v12;
  _BYTE* v13;
  _QWORD* v14;
  _BYTE* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  _BYTE v19[32];
  _BYTE* v20;
  _BYTE v21[32];
  _BYTE* v22;
  _QWORD v23[3];
  char v24;
  int v25;
  __int64 v26;
  int v27;
  int v28;
  char v29;
  _DWORD v30[3];
  __int64 v31;
  __int64 v32;

  if (a2 == 0 || *((_WORD*)result + 2) == 0) {
    return result;
  }
  v5 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                  8LL * *((unsigned __int16*)result + 2));
  if (v5 == 0 || GameData_21ca300 == 0) {
    return result;
  }
  v31 = v3;
  v32 = v4;
  v7 = *(_DWORD*)(a2 + 592);
  v8 = result[1];
  v26 = 0;
  v29 = 0;
  v9 = result[2];
  v23[2] = __PAIR64__(v7, v8);
  v10 = result[3];
  v23[0] = GameData_1f98270;
  v25 = -1;
  v28 = -1;
  LOBYTE(v23[1]) = *(_BYTE*)(a2 + 2088);
  v11 = *result;
  v12 = *(_QWORD*)(a3 + 32);
  HIDWORD(v23[1]) = v11;
  v24 = 3;
  v27 = *(_WORD*)(v5 + 16) & 0xFFF;
  if (v12 != 0) {
    if (v12 == a3) {
      v20 = v19;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v12 + 24LL))(v12, v19);
      v13 = v20;
    }
    else {
      v13 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      v20 = v13;
    }
  }
  else {
    v13 = nullptr;
    v20 = nullptr;
  }
  v14 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 64, 16, 0);
  v15 = v14;
  *v14 = GameData_1faca60;
  v16 = v14 + 2;
  if (v13 != nullptr) {
    if (v13 == v19) {
      v14[6] = v16;
      (*(void (**)(_BYTE*))(*(_QWORD*)v13 + 24LL))(v13);
    }
    else {
      v14[6] =
          (*(__int64 (**)(_BYTE*, _QWORD*))(*(_QWORD*)v13 + 16LL))(v13, v16);
    }
  }
  else {
    v14[6] = 0;
  }
  v22 = v15;
  LOBYTE(v30[0]) = 0;
  v30[2] = 0;
  BYTE1(v30[1]) = 0;
  BYTE1(v30[0]) = v9;
  BYTE2(v30[0]) = v10;
  HIWORD(v30[1]) = -1;
  *(_WORD*)((char*)v30 + 3) = 9;
  GameRoutine_775580(v23, v30, v21);
  if (v22 == v21) {
    v17 = 32;
    goto LABEL_21;
  }
  if (v22 != nullptr) {
    v17 = 40;
  LABEL_21:
    (*(void (**)(__int64))(*(_QWORD*)v22 + v17))((__int64)v22);
  }
  result = v20;
  if (v20 == v19) {
    v18 = 32;
  }
  else {
    if (v20 == nullptr) {
      return result;
    }
    v18 = 40;
  }
  return (unsigned __int8*)(*(__int64 (**)(__int64))(*(_QWORD*)v20 + v18))(
      (__int64)v20);
}

__int64 GameHr_90e760(__int64* a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 result;
  char* v7;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  char* v18;
  char* v19;
  __int64 v20;
  int v21;
  int v22;
  __int64** v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  int v34;
  char* v35;
  char* v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64* v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  int v44;
  unsigned int v45;
  unsigned int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  int v50;
  int v51;
  char* v52;
  char* v53;
  __int64 v54;
  int v55;
  __int64 v56;
  _DWORD* v57;
  _DWORD* v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  int v63;
  int v64;
  char* v65;
  char* v66;
  __int64 v67;
  int v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  int v72;
  int v73;
  char* v74;
  char* v75;
  __int64 v76;
  int v77;
  int v79;
  __int64* v80;
  struct {
    _QWORD v81[2];
    __int64 v82;
    char gap40_[8];
    _QWORD* v83;
  } v81_;
  int v84;
  int v85;

  result = *a1;
  v7 = (char*)a1[1];
  if (v7 != (char*)result) {
    v81_.v81[0] = a2 | ((unsigned __int64)a3 << 32);
    result = GameHr_910f00(result, v7, (int*)v81_.v81,
                           (2 * __clz((__int64)&v7[-result] >> 4)) ^ 0x7E, 1);
    v10 = (__int64*)*a1;
    v11 = (__int64*)a1[1];
    v80 = a1;
    if ((__int64*)*a1 != v11) {
      v12 = GameData_212ce98[0];
      do {
        v14 = *v10;
        if (*v10 != 0) {
          v15 = *v12;
          v16 = *(char*)(v14 + 584);
          v17 = *(char*)(v14 + 585);
          result = (__int64)v81_.v81;
          v18 = *(char**)(v14 + 600);
          v19 = *(char**)(v14 + 608);
          v81_.v82 = *v10;
          v81_.v83 = v81_.v81;
          v20 = *(_QWORD*)(v15 + 96);
          v81_.v81[0] = GameData_1f94290;
          v81_.v81[1] = v20;
          if (v18 == v19) {
            goto LABEL_4;
          }
          do {
            v21 = *v18 + v16;
            v84 = v18[1] + v17;
            v85 = v21;
            if (v81_.v83 == nullptr) {
            LABEL_77:
              GameRoutine_60a310_alt1();
            }
            (*(void (**)(_QWORD*, int*, int*))(*v81_.v83 + 48LL))(v81_.v83,
                                                                  &v85, &v84);
            v18 += 4;
          } while (v18 != v19);
          result = (__int64)v81_.v83;
          if (v81_.v83 == v81_.v81) {
          LABEL_4:
            v13 = 32;
          }
          else {
            if (v81_.v83 == nullptr) {
              goto LABEL_6;
            }
            v13 = 40;
          }
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v13))(
              (__int64)result);
        }
      LABEL_6:
        v10 += 2;
      } while (v10 != v11);
    }
    if (a4 >= 1) {
      v22 = 0;
      do {
        v23 = (__int64**)v80;
        v79 = v22;
        v24 = (__int64*)*v80;
        v25 = (__int64*)v80[1];
        if ((__int64*)*v80 != v25) {
        LABEL_18:
          v26 = *v24;
          v27 = 32;
          v28 = a3 + *(char*)(*v24 + 585);
          v29 = a2 + *(char*)(*v24 + 584);
          do {
            LOBYTE(v81_.v81[0]) = 1;
            v30 = game_Unit_GetJob(v26);
            result = GameHr_755f40(v26, v30, v29, v28, (char*)v81_.v81);
            if ((result & 1) == 0) {
              break;
            }
            LOBYTE(v81_.v81[0]) = 2;
            v31 = game_Unit_GetJob(v26);
            result = GameHr_755f40(v26, v31, v29, v28, (char*)v81_.v81);
            if ((result & 1) != 0) {
              v23 = (__int64**)v80;
              v24 += 2;
              if (v24 != v25) {
                goto LABEL_18;
              }
              goto LABEL_35;
            }
            v28 += a3;
            v29 += a2;
            --v27;
          } while (v27 != 0);
          v32 = *v24;
          v23 = (__int64**)v80;
          if (*v24 != 0 && (*(_DWORD*)(v32 + 416) & 0x400400) == 0) {
            result = (__int64)v81_.v81;
            v33 = *(char*)(v32 + 584);
            v34 = *(char*)(v32 + 585);
            v35 = *(char**)(v32 + 600);
            v36 = *(char**)(v32 + 608);
            v81_.v82 = v32;
            v81_.v83 = v81_.v81;
            v37 = *(_QWORD*)(*GameData_212ce98[0] + 96);
            v81_.v81[0] = GameData_1f94210;
            v81_.v81[1] = v37;
            if (v35 == v36) {
              goto LABEL_33;
            }
            do {
              v38 = *v35 + v33;
              v84 = v35[1] + v34;
              v85 = v38;
              if (v81_.v83 == nullptr) {
                goto LABEL_77;
              }
              (*(void (**)(_QWORD*, int*, int*))(*v81_.v83 + 48LL))(v81_.v83,
                                                                    &v85, &v84);
              v35 += 4;
            } while (v35 != v36);
            result = (__int64)v81_.v83;
            if (v81_.v83 == v81_.v81) {
            LABEL_33:
              v23 = (__int64**)v80;
              v39 = 32;
            }
            else {
              v23 = (__int64**)v80;
              if (v81_.v83 == nullptr) {
                goto LABEL_35;
              }
              v39 = 40;
            }
            result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v39))(
                (__int64)result);
          }
        }
      LABEL_35:
        v41 = *v23;
        v40 = v23[1];
        if (*v23 == v40) {
          goto LABEL_16;
        }
        do {
        LABEL_40:
          v43 = *v41;
          v44 = 32;
          v45 = a2 + *(char*)(*v41 + 584);
          v46 = a3 + *(char*)(*v41 + 585);
          while (1) {
            LOBYTE(v81_.v81[0]) = 1;
            v47 = game_Unit_GetJob(v43);
            result = GameHr_755f40(v43, v47, v45, v46, (char*)v81_.v81);
            if ((result & 1) == 0) {
            LABEL_44:
              v49 = *v41;
              if (*v41 != 0 && (*(_DWORD*)(v49 + 416) & 0x400400) == 0) {
                result = (__int64)v81_.v81;
                v50 = *(char*)(v49 + 584);
                v51 = *(char*)(v49 + 585);
                v52 = *(char**)(v49 + 600);
                v53 = *(char**)(v49 + 608);
                v81_.v82 = *v41;
                v81_.v83 = v81_.v81;
                v54 = *(_QWORD*)(*GameData_212ce98[0] + 96);
                v81_.v81[0] = GameData_1f94210;
                v81_.v81[1] = v54;
                if (v52 == v53) {
                  goto LABEL_37;
                }
                do {
                  v55 = *v52 + v50;
                  v84 = v52[1] + v51;
                  v85 = v55;
                  if (v81_.v83 == nullptr) {
                    goto LABEL_77;
                  }
                  (*(void (**)(_QWORD*, int*, int*))(*v81_.v83 + 48LL))(
                      v81_.v83, &v85, &v84);
                  v52 += 4;
                } while (v52 != v53);
                result = (__int64)v81_.v83;
                if (v81_.v83 == v81_.v81) {
                LABEL_37:
                  v42 = 32;
                  goto LABEL_38;
                }
                if (v81_.v83 != nullptr) {
                  v42 = 40;
                LABEL_38:
                  result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v42))(
                      (__int64)result);
                }
              }
              v41 += 2;
              if (v41 == v40) {
                goto LABEL_16;
              }
              goto LABEL_40;
            }
            LOBYTE(v81_.v81[0]) = 2;
            v48 = game_Unit_GetJob(v43);
            result = GameHr_755f40(v43, v48, v45, v46, (char*)v81_.v81);
            if ((result & 1) != 0) {
              break;
            }
            v45 += a2;
            v46 += a3;
            if (--v44 == 0) {
              goto LABEL_44;
            }
          }
          v56 = *v41;
          v41 += 2;
          *(_BYTE*)(v56 + 584) = v45;
          *(_BYTE*)(v56 + 585) = v46;
        } while (v41 != v40);
      LABEL_16:
        v22 = v79 + 1;
      } while (v79 + 1 != a4);
    }
    v57 = (_DWORD*)*v80;
    v58 = (_DWORD*)v80[1];
    if ((_DWORD*)*v80 != v58) {
      v59 = GameData_212ce98[0];
      while (1) {
        v61 = *(_QWORD*)v57;
        v57[3] = *(unsigned __int16*)(*(_QWORD*)v57 + 584LL);
        v62 = *v59;
        v81_.v82 = v61;
        v81_.v83 = v81_.v81;
        v63 = *(char*)(v61 + 584);
        v64 = *(char*)(v61 + 585);
        v65 = *(char**)(v61 + 600);
        v66 = *(char**)(v61 + 608);
        v67 = *(_QWORD*)(v62 + 96);
        v81_.v81[0] = GameData_1f94290;
        v81_.v81[1] = v67;
        if (v65 == v66) {
          break;
        }
        do {
          v68 = *v65 + v63;
          v84 = v65[1] + v64;
          v85 = v68;
          if (v81_.v83 == nullptr) {
            goto LABEL_77;
          }
          (*(void (**)(_QWORD*, int*, int*))(*v81_.v83 + 48LL))(v81_.v83, &v85,
                                                                &v84);
          v65 += 4;
        } while (v65 != v66);
        result = (__int64)v81_.v83;
        if (v81_.v83 == v81_.v81) {
          goto LABEL_66;
        }
        if (v81_.v83 != nullptr) {
          v69 = 40;
          goto LABEL_67;
        }
      LABEL_68:
        *(_WORD*)(*(_QWORD*)v57 + 584LL) = *((_WORD*)v57 + 4);
        v70 = *(_QWORD*)v57;
        if (*(_QWORD*)v57 == 0 || (*(_DWORD*)(v70 + 416) & 0x400400) != 0) {
          goto LABEL_58;
        }
        v71 = *v59;
        v72 = *(char*)(v70 + 584);
        v73 = *(char*)(v70 + 585);
        result = (__int64)v81_.v81;
        v74 = *(char**)(v70 + 600);
        v75 = *(char**)(v70 + 608);
        v81_.v82 = *(_QWORD*)v57;
        v81_.v83 = v81_.v81;
        v76 = *(_QWORD*)(v71 + 96);
        v81_.v81[0] = GameData_1f94210;
        v81_.v81[1] = v76;
        if (v74 == v75) {
          goto LABEL_56;
        }
        do {
          v77 = *v74 + v72;
          v84 = v74[1] + v73;
          v85 = v77;
          if (v81_.v83 == nullptr) {
            goto LABEL_77;
          }
          (*(void (**)(_QWORD*, int*, int*))(*v81_.v83 + 48LL))(v81_.v83, &v85,
                                                                &v84);
          v74 += 4;
        } while (v74 != v75);
        result = (__int64)v81_.v83;
        if (v81_.v83 == v81_.v81) {
        LABEL_56:
          v60 = 32;
        }
        else {
          if (v81_.v83 == nullptr) {
            goto LABEL_58;
          }
          v60 = 40;
        }
        result =
            (*(__int64 (**)(__int64))(*(_QWORD*)result + v60))((__int64)result);
      LABEL_58:
        v57 += 4;
        if (v57 == v58) {
          return result;
        }
      }
      result = (__int64)v81_.v81;
    LABEL_66:
      v69 = 32;
    LABEL_67:
      result =
          (*(__int64 (**)(__int64))(*(_QWORD*)result + v69))((__int64)result);
      goto LABEL_68;
    }
  }
  return result;
}

_QWORD* GameHr_936cf0(_QWORD* result, __int64 a2)
{
  _QWORD* v3;
  char v4;
  __int64 v5;
  _QWORD* v6;
  unsigned int v7;
  bool v8;
  int v9;
  bool v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64*** v15;
  __int64** v16;
  unsigned __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  int v22;
  int v23;
  __int64 v24;
  int v25;

  if (*((_BYTE*)result + 76) != 1) {
    return result;
  }
  v3 = result;
  v25 = *GameData_212d330 & 0xFFF;
  v4 = GameRoutine_84cb50(a2 + 1744, &v25);
  v5 = *(_QWORD*)(a2 + 440);
  if ((v4 & 1) != 0) {
    v6 = v3;
    if (v5 != 0 && ((1 << *(_BYTE*)(v5 + 16)) & 0xF1) == 0) {
      goto LABEL_7;
    }
    return (_QWORD*)GameRoutine_937de0(v6, a2);
  }
  v6 = v3;
  if (v5 == 0) {
    return (_QWORD*)GameRoutine_937de0(v6, a2);
  }
LABEL_7:
  v7 = *(unsigned __int8*)(v5 + 16);
  v8 = v7 > 7;
  v9 = (1 << v7) & 0x91;
  v10 = v8 || v9 == 0;
  if (v10 || *(_BYTE*)(a2 + 1944) == 0) {
    return (_QWORD*)GameRoutine_937de0(v6, a2);
  }
  if (*((_BYTE*)v6 + 76) != 1) {
    goto LABEL_38;
  }
  v11 = v6[2];
  if (v11 == 0 || v6[4] == 0) {
    goto LABEL_38;
  }
  v12 = *(unsigned __int8*)(a2 + 2088);
  v13 = v11 - 1;
  if ((v11 & (v11 - 1)) != 0) {
    v14 = *(unsigned __int8*)(a2 + 2088);
    if (v11 <= v12) {
      v14 = (unsigned int)v12 % (unsigned int)v11;
    }
  }
  else {
    v14 = ((_DWORD)v11 - 1) & (unsigned int)v12;
  }
  v15 = *(__int64****)(v6[1] + 8 * v14);
  if (v15 == nullptr) {
    goto LABEL_38;
  }
  v16 = *v15;
  if (v16 == nullptr) {
    goto LABEL_38;
  }
  if ((v11 & v13) == 0) {
    while (1) {
      v18 = v16[1];
      if (v18 == (__int64*)v12) {
        if (*((unsigned __int8*)v16 + 16) == (_DWORD)v12) {
          goto LABEL_36;
        }
      }
      else if (((unsigned __int64)v18 & v13) != v14) {
        goto LABEL_38;
      }
      v16 = (__int64**)*v16;
      if (v16 == nullptr) {
        goto LABEL_38;
      }
    }
  }
  while (1) {
    v17 = (unsigned __int64)v16[1];
    if (v17 == v12) {
      break;
    }
    if (v17 >= v11) {
      v17 %= v11;
    }
    if (v17 != v14) {
      goto LABEL_38;
    }
  LABEL_25:
    v16 = (__int64**)*v16;
    if (v16 == nullptr) {
      goto LABEL_38;
    }
  }
  if (*((unsigned __int8*)v16 + 16) != (_DWORD)v12) {
    goto LABEL_25;
  }
LABEL_36:
  v19 = *((unsigned int*)v16 + 5);
  if ((v19 & 0x80000000) == 0) {
    return (_QWORD*)GameRoutine_6d2c90(a2, v6[6] + 8 * v19);
  }
LABEL_38:
  result = (*(struct PseudoSret*)(&v24) = GameRoutine_936f60(v6, a2 + 1944, a2),
            (void*)(&v24));
  if (v24 < 0) {
    v20 = GameData_212ceb0;
    v21 = *GameData_212ceb0;
    if (*(_QWORD*)(a2 + 1944) != *GameData_212ceb0) {
      *(_WORD*)(a2 + 1944) = v21;
      *(_BYTE*)(a2 + 1946) = BYTE2(v21);
      v22 = *(_DWORD*)((char*)v20 + 3);
      *(_BYTE*)(a2 + 1951) = *((_BYTE*)v20 + 7);
      v23 = *(_DWORD*)(a2 + 416);
      *(_DWORD*)(a2 + 1947) = v22;
      if ((v23 & 0x10000000) == 0) {
        *(_DWORD*)(a2 + 416) = v23 | 0x10000000;
        GameRoutine_6c51e0(a2);
        GameRoutine_6c6da0(a2);
        result = (_QWORD*)GameRoutine_6c6ec0(a2);
        *(_DWORD*)(a2 + 416) &= ~0x10000000u;
      }
      *(_WORD*)(a2 + 20) |= 1u;
    }
  }
  return result;
}

__int64 GameHr_946c20(int a1)
{
  int v2;
  int v3;
  int v4;
  __int64 v5;
  _BOOL4 v7;
  _BOOL4 v9;
  int v10;
  _BOOL4 v12;
  __int16* v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  __int16 v18;
  int v19;
  __int16 v20;
  unsigned int v21;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  __int64 v32;
  int v33;
  struct {
    __int64 v34;
    int v35;
  } v34_;

  v2 = GameHr_869d10();
  if (v2 >= a1) {
    v3 = a1;
  }
  else {
    v3 = v2;
  }
  if (a1 >= 0) {
    v4 = v3;
  }
  else {
    v4 = 0;
  }
  v5 = *(_QWORD*)GameData_212c6c0[0];
  if (*(_QWORD*)GameData_212c6c0[0] != 0) {
    v7 = *(_BYTE*)(v5 + 90) != 0 && *(_WORD*)(v5 + 88) != 0;
    if (*(_BYTE*)(v5 + 91) == 0) {
      v7 = false;
    }
    v9 = *(_BYTE*)(v5 + 96) != 0 && *(_WORD*)(v5 + 94) != 0;
    if (*(_BYTE*)(v5 + 97) == 0) {
      v9 = false;
    }
    v10 = v9 + v7;
    v12 = *(_BYTE*)(v5 + 102) != 0 && *(_WORD*)(v5 + 100) != 0;
    if (*(_BYTE*)(v5 + 103) == 0) {
      v12 = false;
    }
    if ((v10 | v12) != 0) {
      v13 = (__int16*)(game_gmap_GmapClock_instance_ != 0
                           ? game_gmap_GmapClock_instance_ + 8
                           : game_gmap_GmapClock_kDefaultTime_ptr);
      v14 = game_gmap_GmapClock_instance_ != 0
                ? game_gmap_GmapClock_instance_ + 20
                : game_gmap_GmapClock_kDefaultTime_ptr;
      v15 = *v13;
      v16 = v13[1];
      v17 = v13[2];
      v18 = v13[3];
      v19 = *((_DWORD*)v13 + 2);
      LOWORD(v34_.v34) = v15;
      WORD1(v34_.v34) = v16;
      WORD2(v34_.v34) = v17;
      HIWORD(v34_.v34) = v18;
      v34_.v35 = v19;
      if (v4 >= 1) {
        v20 = 0;
        v21 = 0;
        v22 = 10000 * v15 + 100 * v16 + v17;
      LABEL_41:
        v23 = v20;
        if (v20 > 0) {
          v27 = v21;
          while (1) {
            Dir_70ea50((void*)((__int64)&v32), (__int16*)&v34_.v34, v14);
            v28 = *(_QWORD*)(v5 + 16);
            v29 = *(_QWORD*)(v5 + 24);
            v34_.v34 = v32;
            v34_.v35 = v33;
            if (v28 != v29) {
              while ((__int16)v34_.v34 != *(unsigned __int16*)(v28 + 4) ||
                     __PAIR64__(SWORD2(v32), SWORD1(v34_.v34)) !=
                         __PAIR64__(*(unsigned __int8*)(v28 + 7),
                                    *(unsigned __int8*)(v28 + 6))) {
                v28 += 368;
                if (v28 == v29) {
                  return v27;
                }
              }
            }
            if (v28 == v29 || v28 == 0) {
              break;
            }
            if (SWORD2(v32) != v23) {
              return v21;
            }
            if ((int)++v27 >= v4) {
              return (unsigned int)v4;
            }
          }
          return v27;
        }
        else {
          while (1) {
            Dir_70ea50((void*)((__int64)&v32), (__int16*)&v34_.v34, v14);
            v24 = *(_QWORD*)(v5 + 16);
            v25 = *(_QWORD*)(v5 + 24);
            v34_.v34 = v32;
            v34_.v35 = v33;
            v20 = WORD2(v32);
            if (v24 != v25) {
              while ((__int16)v32 != *(unsigned __int16*)(v24 + 4) ||
                     __PAIR64__(SWORD2(v32), SWORD1(v32)) !=
                         __PAIR64__(*(unsigned __int8*)(v24 + 7),
                                    *(unsigned __int8*)(v24 + 6))) {
                v24 += 368;
                if (v24 == v25) {
                  return v21;
                }
              }
            }
            if (v24 == v25 || v24 == 0) {
              return v21;
            }
            ++v21;
            if ((*(_BYTE*)v24 & 1) != 0 &&
                10000 * (__int16)v32 + 100 * SWORD1(v32) + SWORD2(v32) != v22) {
              if ((int)v21 < v4) {
                goto LABEL_41;
              }
              return (unsigned int)v4;
            }
            if ((int)v21 >= v4) {
              return (unsigned int)v4;
            }
          }
        }
      }
    }
  }
  return (unsigned int)v4;
}

__int64 GameHr_94a3d0()
{
  __int16* v0;
  unsigned __int64 v2[2];

  if (game_gmap_GmapClock_instance_ != 0) {
    v0 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v0 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  game_12dd620((void*)((__int64)v2), *(unsigned __int16**)GameData_212c6c0[0],
               *v0, v0[1], v0[2]);
  game_VariableManager_SetFlag((__int64)&GameData_22492b8,
                               10000 * SLOWORD(v2[0]) + 100 * SWORD1(v2[0]) +
                                   SWORD2(v2[0]));
  v2[1] = (unsigned __int64)&GameData_1ad2aab;
  v2[0] = game_HashString((__int64)&GameData_1ad2aab);
  return GameRoutine_9b11a0_alt1(&GameData_21f61c0, v2, 1);
}

__int64 GameHr_94a480()
{
  __int16* v0;
  unsigned __int64 v2[2];

  if (game_gmap_GmapClock_instance_ != 0) {
    v0 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v0 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  game_12dd620((void*)((__int64)v2), *(unsigned __int16**)GameData_212c6c0[0],
               *v0, v0[1], v0[2]);
  game_VariableManager_SetFlag((__int64)&GameData_22492b8,
                               10000 * SLOWORD(v2[0]) + 100 * SWORD1(v2[0]) +
                                   SWORD2(v2[0]));
  v2[1] = (unsigned __int64)&GameData_1a90de1;
  v2[0] = game_HashString((__int64)&GameData_1a90de1);
  return GameRoutine_9b11a0_alt1(&GameData_21f61c0, v2, 1);
}

__int64 GameHr_94cd60(__int64 a1, _DWORD* a2)
{
  __int64* v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  _QWORD v15[4];
  _QWORD* v16;
  int v17;

  v3 = GameData_212c880[0];
  v4 = *(_QWORD*)(*GameData_212c880[0] + 64);
  v5 =
      *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(v4 + 8LL * (*a2 & 0xFFF)) + 24LL) +
                       8LL);
  if ((v5 & 0xFFF) != 0) {
    v6 = *(_QWORD*)(a1 + 1552);
    if (((v5 >> 5) & 0x7F) + 1 <= (*(_QWORD*)(a1 + 1560) - v6) >> 2) {
      if ((*(_DWORD*)(v6 + 4 * ((v5 >> 5) & 0x7F)) & (1 << v5)) != 0) {
        v7 = 0x100000;
      }
      else {
        v7 = 0;
      }
    }
    else {
      v7 = 0;
    }
    v8 =
        (__int64*)(*(_QWORD*)(*(_QWORD*)(v4 + 8 * (v5 & 0xFFF)) + 24LL) + 16LL);
  }
  else {
    v7 = 0;
    v8 = GameData_212cea0;
  }
  v17 = 0;
  v9 = *(_QWORD*)(*(_QWORD*)GameData_212cf78[0] + 8LL);
  v10 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                   8LL * *(unsigned __int16*)v8);
  v16 = v15;
  v15[0] = GameData_212d7f0[0] + 2;
  v15[1] = &v17;
  GameRoutine_89c360(v9, v10, v15);
  if (v16 == v15) {
    v11 = 32;
  }
  else {
    if (v16 == nullptr) {
      goto LABEL_14;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v16 + v11))((__int64)v16);
LABEL_14:
  v12 = *(_QWORD*)(*v3 + 64);
  if ((*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v12 + 8LL * (*a2 & 0xFFF)) + 24LL) +
                  8LL) &
       0xFFF) != 0) {
    v13 = *(
        unsigned __int16*)(*(_QWORD*)(v12 +
                                      8LL *
                                          (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v12 +
                                                                            8LL *
                                                                                (*a2 &
                                                                                 0xFFF)) +
                                                                 24LL) +
                                                      8LL) &
                                           0xFFF)) +
                           728LL);
  }
  else {
    v13 = 0;
  }
  if (v17 >= v13) {
    return v7;
  }
  else {
    return v7 | 0x100;
  }
}

__int64 GameHr_94d380(__int64 a1, _DWORD* a2)
{
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[4];
  _QWORD* v14;
  int v15;

  v3 = GameData_212c880[0];
  v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                             8LL * (*a2 & 0xFFF)) +
                  24LL);
  v5 = *(_QWORD*)(v4 + 1088);
  if (v5 != 0) {
    v6 = *(_QWORD*)(a1 + 1072);
    while (1) {
      v7 = *(unsigned __int16*)(v5 + 16);
      if ((*(_QWORD*)(a1 + 1080) - v6) >> 2 >= ((v7 >> 5) & 0x7F) + 1 &&
          ((*(_DWORD*)(v6 + 4 * ((v7 >> 5) & 0x7F)) >> v7) & 1) != 0) {
        break;
      }
      v5 = *(_QWORD*)(*(_QWORD*)(v5 + 24) + 1080LL);
      if (v5 == 0) {
        goto LABEL_7;
      }
    }
    v8 = 0x100000;
  }
  else {
  LABEL_7:
    v8 = 0;
  }
  v15 = 0;
  v9 = *(_QWORD*)(*(_QWORD*)GameData_212cf78[0] + 8LL);
  v10 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                   8LL * *(unsigned __int16*)(v4 + 24));
  v14 = v13;
  v13[0] = GameData_212d7f0[0] + 2;
  v13[1] = &v15;
  GameRoutine_89c360(v9, v10, v13);
  if (v14 == v13) {
    v11 = 32;
  }
  else {
    if (v14 == nullptr) {
      goto LABEL_13;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v14 + v11))((__int64)v14);
LABEL_13:
  if (v15 >= *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v3 + 64) +
                                             8LL * (*a2 & 0xFFF)) +
                                  752LL)) {
    return v8;
  }
  else {
    return v8 | 0x100;
  }
}

__int64 GameHr_94d4e0()
{
  int v0;
  __int64 v1;
  _BOOL4 v2;
  __int64 v3;
  __int64 v4;
  _BOOL4 v5;
  unsigned int v6;
  __int64 (***v7)();
  __int64*** v8;
  __int64** v9;
  __int64** v10;
  __int64* v11;
  __int64 v12;
  _BOOL4 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  struct {
    __int64 v22;
    __int64 v23;
    __int64 v24;
  } v22_;
  struct {
    __int64 (**v25)();
    __int64* v26;
    char gap48_[16];
    unsigned __int64* v27;
  } v25_;
  __int64 v28;

  v0 = 0x400000;
  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 2) {
      v0 = 0;
    }
    else {
      v0 = 0x400000;
    }
  }
  if (*(_BYTE*)(GameData_21c9608 + 304) == 1) {
    if (game_gmap_GmapClock_instance_ != 0 &&
        *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
            0) {
      v2 = true;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_19;
      }
    }
    else {
      v25_.v26 = (__int64*)&GameData_1adebe5;
      v25_.v25 =
          (__int64 (**)(void))game_HashString((__int64)&GameData_1adebe5);
      if (game_GameModeData_instance_ != 0 &&
          (v3 = game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)&v25_.v25)) != 0) {
        v2 = *(_DWORD*)(v3 + 32) != 0;
        v1 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_19;
        }
      }
      else {
        v2 = false;
        v1 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_19;
        }
      }
    }
  }
  else {
    v2 = false;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_19;
    }
  }
  v4 = game_GameVariableTable_Find(*(_QWORD**)(v1 + 48),
                                   (unsigned __int64*)&GameData_22492a8);
  if (v4 != 0) {
    v5 = *(_DWORD*)(v4 + 32) != 0;
    goto LABEL_20;
  }
LABEL_19:
  v5 = false;
LABEL_20:
  v6 = FacilityUtil_94d840();
  v7 = &v25_.v25;
  v8 = *(__int64****)(game_UnitListSet_instance_ + 8);
  v22_.v22 = 0;
  v22_.v23 = 0;
  v22_.v24 = 0;
  v25_.v25 = GameData_1faf3d8;
  v25_.v26 = &v22_.v22;
  v25_.v27 = (unsigned __int64*)&v25_.v25;
  v9 = *v8;
  v10 = v8[1];
  if (*v8 == v10) {
    goto LABEL_38;
  }
  do {
    v11 = *v9;
    v12 = (__int64)v9[1];
    if (v12 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v11 != nullptr) {
      v13 = (v11[6] & 0x3F) == 0;
      if (v12 == 0) {
        goto LABEL_30;
      }
    }
    else {
      v13 = false;
      if (v12 == 0) {
        goto LABEL_30;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak(v12);
      if (!v13) {
        goto LABEL_22;
      }
      goto LABEL_31;
    }
  LABEL_30:
    if (v13) {
    LABEL_31:
      v28 = **v9;
      if (v25_.v27 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(unsigned __int64*, __int64*))(*v25_.v27 + 48))(v25_.v27,
                                                                  &v28);
    }
  LABEL_22:
    v9 += 2;
  } while (v9 != v10);
  v7 = (__int64 (***)(void))v25_.v27;
  if (v25_.v27 != (unsigned __int64*)&v25_.v25) {
    if (v25_.v27 != nullptr) {
      v14 = 5;
      goto LABEL_39;
    }
    goto LABEL_40;
  }
LABEL_38:
  v14 = 4;
LABEL_39:
  ((__int64 (*)(__int64))(*v7)[v14])((__int64)v7);
LABEL_40:
  v15 = v22_.v22;
  v16 = v22_.v23;
  v17 = v22_.v22;
  if (v22_.v22 != v22_.v23) {
    v17 = v22_.v22;
    while (*(unsigned __int8*)(*(_QWORD*)v17 + 498LL) < v6) {
      v17 += 8;
      if (v17 == v22_.v23) {
        goto LABEL_54;
      }
    }
  }
  if (v17 != v22_.v23) {
    v18 = v17 + 8;
    if (v17 + 8 != v22_.v23) {
      do {
        if (v6 > *(unsigned __int8*)(*(_QWORD*)v18 + 498LL)) {
          *(_QWORD*)v17 = *(_QWORD*)v18;
          v17 += 8;
        }
        v18 += 8;
      } while (v18 != v16);
      v15 = v22_.v22;
      v16 = v22_.v23;
    }
  }
  if (v17 != v16) {
    v16 = v17;
  }
LABEL_54:
  if (v15 != 0) {
    v22_.v23 = v15;
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19,
                                  v15);
  }
  v20 = v0 | 8;
  if (v2) {
    v20 = v0;
  }
  if (v5) {
    v20 |= 0x40000u;
  }
  if (v15 == v16) {
    return v20 | 0x100000;
  }
  else {
    return v20;
  }
}

__int64 GameHr_961420(__int64 a1, const char** a2, __int64 a3)
{
  const char* v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  int v14;
  char v15;
  __int128 v18[2];

  v3 = *a2;
  if (*a2 != nullptr && (v7 = *(_QWORD*)(eft_g_effectSystem + 112),
                         (v8 = *(_QWORD*)(v7 + 24)) != 0)) {
    v9 = 0;
    if (*v3 != 0) {
      v10 = *(_DWORD*)(v7 + 32);
      if (v10 != 0) {
        v11 = 0;
        while (1) {
          v12 = (v10 + v11) >> 1;
          v13 = v8 + 336LL * v12;
          v14 = strcmp(*(const char**)v13, v3);
          if (v14 == 0) {
            break;
          }
          if (v14 < 0) {
            v11 = v12 + 1;
          }
          else {
            v10 = (v10 + v11) >> 1;
          }
          if (v11 == v10) {
            goto LABEL_11;
          }
        }
        v9 = *(_QWORD*)(v13 + 112);
      }
    }
  }
  else {
  LABEL_11:
    v9 = 0;
  }
  v15 = GameRoutine_960f80_alt1(v9);
  GameRoutine_961090_alt1(v18, a3, v15, 0);
  return EffectConst_961260(a1, (_BYTE**)a2, (__int64)v18);
}

__int64 GameHr_961c00(__int64 a1, const char** a2, __int64 a3)
{
  const char* v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  int v14;
  char v15;
  char v17;
  __int128 v19[2];

  v3 = *a2;
  if (*a2 != nullptr && (v7 = *(_QWORD*)(eft_g_effectSystem + 112),
                         (v8 = *(_QWORD*)(v7 + 24)) != 0)) {
    v9 = 0;
    if (*v3 != 0) {
      v10 = *(_DWORD*)(v7 + 32);
      if (v10 != 0) {
        v11 = 0;
        while (1) {
          v12 = (v10 + v11) >> 1;
          v13 = v8 + 336LL * v12;
          v14 = strcmp(*(const char**)v13, v3);
          if (v14 == 0) {
            break;
          }
          if (v14 < 0) {
            v11 = v12 + 1;
          }
          else {
            v10 = (v10 + v11) >> 1;
          }
          if (v11 == v10) {
            goto LABEL_11;
          }
        }
        v9 = *(_QWORD*)(v13 + 112);
      }
    }
  }
  else {
  LABEL_11:
    v9 = 0;
  }
  v15 = GameRoutine_960f80_alt1(v9);
  if (v15 != 0) {
    v17 = v15;
  }
  else {
    v17 = 2;
  }
  GameRoutine_961090_alt1(v19, a3, v17, 0);
  return EffectConst_961260(a1, (_BYTE**)a2, (__int64)v19);
}

__int64 GameHr_972960(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int16 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;
  int v16;

  v16 = 0;
  v14_.v14[0] = GameData_1fb0cb0;
  v14_.v14[1] = &v16;
  v14_.v15 = v14_.v14;
  CorpsManager_9726e0((__int64)v14_.v14);
  result = (__int64)v14_.v15;
  if (v14_.v15 == v14_.v14) {
    v3 = 32;
  }
  else {
    if (v14_.v15 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v14_.v15 + v3))((__int64)v14_.v15);
LABEL_6:
  v4 = v16;
  if ((v16 & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 32);
    LODWORD(v14_.v14[0]) = 0;
    if (v5 == 0) {
      goto LABEL_34;
    }
    result =
        (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v5 + 48LL))(v5, v14_.v14);
  }
  if ((v4 & 2) != 0) {
    v6 = *(_QWORD*)(a1 + 32);
    LODWORD(v14_.v14[0]) = 1;
    if (v6 == 0) {
      goto LABEL_34;
    }
    result =
        (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v6 + 48LL))(v6, v14_.v14);
  }
  if ((v4 & 4) != 0) {
    v7 = *(_QWORD*)(a1 + 32);
    LODWORD(v14_.v14[0]) = 2;
    if (v7 == 0) {
      goto LABEL_34;
    }
    result =
        (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v7 + 48LL))(v7, v14_.v14);
  }
  if ((v4 & 8) != 0) {
    v8 = *(_QWORD*)(a1 + 32);
    LODWORD(v14_.v14[0]) = 3;
    if (v8 == 0) {
      goto LABEL_34;
    }
    result =
        (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v8 + 48LL))(v8, v14_.v14);
  }
  if ((v4 & 0x10) != 0) {
    v9 = *(_QWORD*)(a1 + 32);
    LODWORD(v14_.v14[0]) = 4;
    if (v9 == 0) {
      goto LABEL_34;
    }
    result =
        (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v9 + 48LL))(v9, v14_.v14);
  }
  if ((v4 & 0x20) != 0) {
    v10 = *(_QWORD*)(a1 + 32);
    LODWORD(v14_.v14[0]) = 5;
    if (v10 == 0) {
      goto LABEL_34;
    }
    result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v10 + 48LL))(
        v10, v14_.v14);
  }
  if ((v4 & 0x40) != 0) {
    v11 = *(_QWORD*)(a1 + 32);
    LODWORD(v14_.v14[0]) = 6;
    if (v11 == 0) {
      goto LABEL_34;
    }
    result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v11 + 48LL))(
        v11, v14_.v14);
  }
  if ((v4 & 0x80) != 0) {
    v12 = *(_QWORD*)(a1 + 32);
    LODWORD(v14_.v14[0]) = 7;
    if (v12 == 0) {
      goto LABEL_34;
    }
    result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v12 + 48LL))(
        v12, v14_.v14);
  }
  if ((v4 & 0x100) == 0) {
    return result;
  }
  v13 = *(_QWORD*)(a1 + 32);
  LODWORD(v14_.v14[0]) = 8;
  if (v13 == 0) {
  LABEL_34:
    GameRoutine_60a310_alt1();
  }
  return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v13 + 48LL))(v13,
                                                                   v14_.v14);
}

__int64 GameHr_9aba50(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  float v3;
  __int64* v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int8* v11;
  unsigned int v12;
  _QWORD v13[2];
  struct {
    _QWORD v14[4];
    int v15;
    int v16;
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
  } v14_;
  unsigned int v30;

  if (game_hub_ProcHubSeqView_instance_ != 0 &&
      *(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 218) == 1) {
    v1 = result;
    if (*(_BYTE*)(*(_QWORD*)(result + 208) + 24LL) == 1) {
      v30 = (unsigned int)snd_fnd_calcCrc32("TITLE", 0);
      snd_Fade_Fade_10c830((__int64)v14_.v14, 0x0.0p+0f);
      snd_startSlotVolume_100b50((int*)&v30, (__int64)v14_.v14, 0x0.0p+0f);
      snd_Fade_Destroy_Fade(v14_.v14);
      v2 = *(_QWORD*)(v1 + 216);
      v13[0] = *(_QWORD*)(v1 + 208);
      v13[1] = v2;
      if (v2 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                                  memory_order_relaxed);
        ui_LayoutAccessor_Setup_155dda0((_QWORD*)(v1 + 224), v13);
        if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
          std___1___shared_weak_count___release_weak(v2);
        }
      }
      else {
        ui_LayoutAccessor_Setup_155dda0((_QWORD*)(v1 + 224), v13);
      }
      LayoutAccessor_155e830(v1 + 224, 1);
      GameHr_1562680(v1 + 224, "Out", 0x1.0000000000000p+0f);
      v3 = LayoutAccessor_15638b0((__int64*)(v1 + 224), "Out", 0);
      LayoutAccessor_15636c0(v1 + 224, (__int64)"Out", 0, v3);
      v4 = msg_MessageManager_instance__ptr[0];
      v5 = *msg_MessageManager_instance__ptr[0];
      if ((*(_BYTE*)(*msg_MessageManager_instance__ptr[0] + 14704) & 1) != 0) {
        *(_QWORD*)(v5 + 14712) = 5;
        v6 = *(char**)(v5 + 14720);
      }
      else {
        *(_BYTE*)(v5 + 14704) = 10;
        v6 = (char*)(v5 + 14705);
      }
      strcpy(v6, "1.0.0");
      v14_.v17 = -1;
      v14_.v18 = -1;
      v7 = *v4;
      v14_.v19 = -1;
      v14_.v20 = -1;
      v14_.v21 = -1;
      v14_.v22 = -1;
      v14_.v23 = -1;
      v14_.v24 = -1;
      v14_.v25 = -1;
      v14_.v26 = -1;
      v14_.v27 = -1;
      v14_.v28 = -1;
      v14_.v14[0] = GameData_212e348 + 2;
      v14_.v14[1] = 0xFFFF0001FFFF0000LL;
      v14_.v14[2] = 0xFFFF0004FFFF0002LL;
      v14_.v14[3] = 0xFFFF0006FFFF0005LL;
      v14_.v29 = 8;
      v14_.v15 = -65529;
      v14_.v16 = -65528;
      v8 = GameRoutine_a4dbe0_alt1(v7, "MID_Title_Version", 0);
      if (v8 != nullptr) {
        v9 = (__int64)v8;
        v10 = ui_LayoutAccessor_FindTextBox((__int64*)(v1 + 224),
                                            (__int64)"T_Version");
        if (v10 != 0) {
          GameRoutine_156c5d0_alt1(v10, v9, 0);
        }
      }
      result = ui_LayoutAccessor_FindPane((__int64*)(v1 + 224),
                                          (__int64)"TitleLogo");
      if (result != 0) {
        result =
            __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
        if (result != 0) {
          result = GameRoutine_1843a40_alt1(result);
        }
      }
      v11 = *(unsigned __int8**)(v1 + 16);
      if (v11 != nullptr) {
        v12 = *v11;
        if (v12 <= 0x10 && ((1 << v12) & 0x1CE00) != 0) {
          *(_WORD*)(v1 + 136) |= 0x80u;
        }
      }
      *(_WORD*)(v1 + 136) |= 8u;
    }
  }
  return result;
}

__int64 GameHr_9abcf0(__int64 result)
{
  __int64 v1;
  _BYTE v2[200];

  if ((*(_BYTE*)(result + 328) & 1) == 0) {
    *(_BYTE*)(result + 328) = 1;
    v1 = *(_QWORD*)(*GameData_212d468[0] + 8);
    GameRoutine_10c830(v2, 0.0);
    (*(void (**)(__int64, const char*, _BYTE*, _QWORD, double, float))(
        *(_QWORD*)v1 + 32LL))(v1, "BGM_SYS_Title1", v2, 0, 0.0, 1.0);
    return GameRoutine_10cff0(v2);
  }
  return result;
}

__int64 GameHr_9abea0(__int64 a1)
{
  __int64 v3;
  _BYTE v4[200];

  GameRoutine_10c830(v4, 0.0f);
  *(struct PseudoSret*)(&v3) =
      GameRoutine_ff2d0("SE_SYS_Decide_Title", "SE_SYS_Decide_Title", v4, 0,
                        65537, 0, 0.0f, 1.0f);
  GameRoutine_10cff0(v4);
  return GameRoutine_1562680(a1 + 224, "Out", 1.0f);
}

unsigned __int64 GameHr_9adfa0(unsigned __int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  int v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64* v14;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  bool v27;
  __int64 v28;
  __int64 v29;
  __int64** v30;
  __int64* v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  float v38;
  float v39;
  _BOOL8 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 primeEm;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  int v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  int v70;
  __int64 v71;
  __int64 v72;
  int v73;
  int v74;

  v2 = *(int*)(a2 + 20);
  v3 = *(_QWORD*)(a2 + 8);
  v4 = result + 8;
  v6 = result;
  v7 = 0;
  v8 = 0;
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(v3 + v2) = 5;
  v9 = *(int*)(a2 + 20);
  v10 = *(_QWORD*)(a2 + 8);
  v11 = v9 + 1;
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_BYTE*)(v10 + v9) = 0;
  while (2) {
    if (*(_DWORD*)(v4 + 4 * v7) == 0) {
      goto LABEL_7;
    }
    v26 = GameData_21f61a0;
    v27 = GameData_21f61a0 == 0 || GameData_21f61b0 == 0;
    if (v27) {
      goto LABEL_7;
    }
    v28 = GameData_21f61a0 - 1;
    if ((GameData_21f61a0 & (GameData_21f61a0 - 1)) != 0) {
      v29 = v7;
      if (GameData_21f61a0 <= v7) {
        v29 = (unsigned __int8)v7 %
              (unsigned int)(unsigned __int8)GameData_21f61a0;
      }
    }
    else {
      v29 = (GameData_21f61a0 + 15) & v7;
    }
    v30 = *(__int64***)(GameData_21f6198 + 8 * v29);
    if (v30 == nullptr) {
      goto LABEL_7;
    }
    v31 = *v30;
    if (v31 == nullptr) {
      goto LABEL_7;
    }
    if ((GameData_21f61a0 & v28) == 0) {
      while (1) {
        v33 = v31[1];
        if (v33 == v7) {
          if (v7 == *((_DWORD*)v31 + 4)) {
            goto LABEL_33;
          }
        }
        else if ((v33 & v28) != v29) {
          goto LABEL_7;
        }
        v31 = (__int64*)*v31;
        if (v31 == nullptr) {
          goto LABEL_7;
        }
      }
    }
    while (1) {
      v32 = v31[1];
      if (v32 == v7) {
        break;
      }
      if (v32 >= GameData_21f61a0) {
        v32 %= (unsigned __int64)GameData_21f61a0;
      }
      if (v32 != v29) {
        goto LABEL_7;
      }
    LABEL_22:
      v31 = (__int64*)*v31;
      if (v31 == nullptr) {
        goto LABEL_7;
      }
    }
    if (v7 != *((_DWORD*)v31 + 4)) {
      goto LABEL_22;
    }
  LABEL_33:
    v73 = v11;
    v74 = v8;
    if ((GameData_21f61a0 & v28) != 0) {
      v12 = (int)v7;
      if (GameData_21f61a0 <= (unsigned __int64)(int)v7) {
        v12 = (int)v7 % (unsigned __int64)GameData_21f61a0;
      }
      v34 = *(__int64**)(GameData_21f6198 + 8 * v12);
      if (v34 == nullptr) {
        goto LABEL_53;
      }
    LABEL_39:
      v35 = *v34;
      if (*v34 != 0) {
        if ((GameData_21f61a0 & v28) == 0) {
          while (1) {
            v37 = *(_QWORD*)(v35 + 8);
            if (v37 == (int)v7) {
              if (*(_DWORD*)(v35 + 16) == (_DWORD)v7) {
                goto LABEL_79;
              }
            }
            else if ((v37 & v28) != v12) {
              goto LABEL_53;
            }
            v35 = *(_QWORD*)v35;
            if (v35 == 0) {
              goto LABEL_53;
            }
          }
        }
        do {
          v36 = *(_QWORD*)(v35 + 8);
          if (v36 == (int)v7) {
            if (*(_DWORD*)(v35 + 16) == (_DWORD)v7) {
            LABEL_79:
              v15 = v74;
              goto LABEL_6;
            }
          }
          else {
            if (v36 >= GameData_21f61a0) {
              v36 %= (unsigned __int64)GameData_21f61a0;
            }
            if (v36 != v12) {
              break;
            }
          }
          v35 = *(_QWORD*)v35;
        } while (v35 != 0);
      }
    }
    else {
      v12 = v28 & (int)v7;
      v34 = *(__int64**)(GameData_21f6198 + 8 * v12);
      if (v34 != nullptr) {
        goto LABEL_39;
      }
    }
  LABEL_53:
    result = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 24, 16, 0);
    v35 = result;
    *(_QWORD*)result = 0;
    *(_QWORD*)(result + 8) = (int)v7;
    *(_DWORD*)(result + 16) = v7;
    *(_DWORD*)(result + 20) = 0;
    v38 = (float)(unsigned __int64)(GameData_21f61b0 + 1);
    if ((float)(*(float*)&GameData_21f61b8 * (float)v26) < v38) {
      v39 = v38 / *(float*)&GameData_21f61b8;
      v41 = (v26 & v28) != 0 || v26 < 3;
      v42 = v41 | (2 * v26);
      v43 = vcvtps_u64_f32(v39);
      if (v42 <= v43) {
        result = v43;
      }
      else {
        result = v42;
      }
      if (result == 1) {
        result = 2;
      }
      else if ((result & (result - 1)) != 0) {
        result = GameRoutine_1a09d00(result);
        v26 = GameData_21f61a0;
      }
      if (result > v26) {
        goto LABEL_72;
      }
      if (result < v26) {
        primeEm = vcvtps_u64_f32((float)(unsigned __int64)GameData_21f61b0 /
                                 *(float*)&GameData_21f61b8);
        if (v26 < 3 || (v26 & (v26 - 1)) != 0) {
          v48 = result;
          primeEm = GameRoutine_1a09d00(primeEm);
          result = v48;
        }
        else {
          v47 = 1LL << -(char)__clz(primeEm - 1);
          if (primeEm >= 2) {
            primeEm = v47;
          }
        }
        if (result <= primeEm) {
          result = primeEm;
        }
        if (result < v26) {
        LABEL_72:
          result = GameRoutine_9af520();
        }
      }
      v26 = GameData_21f61a0;
      if ((GameData_21f61a0 & (GameData_21f61a0 - 1)) != 0) {
        if (GameData_21f61a0 <= (unsigned __int64)(int)v7) {
          v12 = (int)v7 % (unsigned __int64)GameData_21f61a0;
        }
        else {
          v12 = (int)v7;
        }
      }
      else {
        v12 = (GameData_21f61a0 - 1) & (int)v7;
      }
    }
    v13 = GameData_21f6198;
    v14 = *(__int64**)(GameData_21f6198 + 8 * v12);
    if (v14 != nullptr) {
      v15 = v74;
      *(_QWORD*)v35 = *v14;
      *v14 = v35;
    }
    else {
      v44 = GameData_21f61a8;
      GameData_21f61a8 = v35;
      *(_QWORD*)v35 = v44;
      *(_QWORD*)(v13 + 8 * v12) = &GameData_21f61a8;
      v15 = v74;
      if (*(_QWORD*)v35 != 0) {
        v45 = *(_QWORD*)(*(_QWORD*)v35 + 8LL);
        if ((v26 & (v26 - 1)) != 0) {
          if (v45 >= v26) {
            v45 %= v26;
          }
        }
        else {
          v45 &= v26 - 1;
        }
        *(_QWORD*)(GameData_21f6198 + 8 * v45) = v35;
      }
    }
    ++GameData_21f61b0;
  LABEL_6:
    v16 = *(int*)(a2 + 20);
    v17 = *(_DWORD*)(v35 + 20);
    v11 = v73;
    v8 = v15 + 1;
    *(_DWORD*)(a2 + 20) = v16 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = v17;
    v18 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v18 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = BYTE1(v17);
    v19 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v19 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v19) = BYTE2(v17);
    v20 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v20 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = HIBYTE(v17);
    v21 = *(int*)(a2 + 20);
    v22 = *(_DWORD*)(v4 + 4 * v7);
    *(_DWORD*)(a2 + 20) = v21 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = v22;
    v23 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v23 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = BYTE1(v22);
    v24 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v24 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v24) = BYTE2(v22);
    v25 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v25 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v25) = HIBYTE(v22);
  LABEL_7:
    if (++v7 != 9) {
      continue;
    }
    break;
  }
  v49 = *(int*)(a2 + 20);
  v50 = *(_DWORD*)(v6 + 44);
  *(_DWORD*)(a2 + 20) = v49 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v49) = v50;
  v51 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v51 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v51) = BYTE1(v50);
  v52 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v52 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v52) = BYTE2(v50);
  v53 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v53 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v53) = HIBYTE(v50);
  v54 = *(int*)(a2 + 20);
  LOBYTE(v50) = *(_BYTE*)(v6 + 48);
  *(_DWORD*)(a2 + 20) = v54 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v54) = v50;
  v55 = *(int*)(a2 + 20);
  LOBYTE(v50) = *(_BYTE*)(v6 + 49);
  *(_DWORD*)(a2 + 20) = v55 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v55) = v50;
  v56 = *(int*)(a2 + 20);
  LOBYTE(v50) = *(_BYTE*)(v6 + 50);
  *(_DWORD*)(a2 + 20) = v56 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v56) = v50;
  v57 = *(_QWORD*)(a2 + 32);
  v58 = *(_QWORD*)(a2 + 40);
  v59 = ((v58 - v57) << 7) - 1;
  if (v58 == v57) {
    v59 = 0;
  }
  v60 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  if (v59 == v60) {
    result = GameRoutine_660f80(a2 + 24);
    v57 = *(_QWORD*)(a2 + 32);
    v60 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  }
  *(_DWORD*)(*(_QWORD*)(v57 + 8 * (v60 >> 10)) + 4 * (v60 & 0x3FF)) =
      *(_DWORD*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v11;
  ++*(_QWORD*)(a2 + 64);
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = v8;
  v62 = *(_QWORD*)(a2 + 56);
  v61 = *(_QWORD*)(a2 + 64);
  v64 = *(_QWORD*)(a2 + 32);
  v63 = *(_QWORD*)(a2 + 40);
  v27 = v63 == v64;
  v65 = v61 - 1 + v62;
  v66 = v65 >> 10;
  v67 = v65 & 0x3FF;
  v68 = ((v63 - v64) << 7) - 1;
  v69 = *(_QWORD*)(v64 + 8 * v66);
  if (v27) {
    v68 = 0;
  }
  v70 = *(_DWORD*)(v69 + 4 * v67);
  *(_QWORD*)(a2 + 64) = v61 - 1;
  *(_DWORD*)(a2 + 20) = v70;
  if ((unsigned __int64)(v68 - (v61 + v62) + 1) >= 0x800) {
    v71 = *(_QWORD*)(v63 - 8);
    if (v71 != 0) {
      v72 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v72 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v72, v71);
      v63 = *(_QWORD*)(a2 + 40);
    }
    *(_QWORD*)(a2 + 40) = v63 - 8;
  }
  return result;
}

__int64 GameHr_9ae660(__int64 result, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  int v7;
  int v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64** v27;
  __int64* v28;
  int v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64* v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  float v37;
  float v38;
  _BOOL8 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 primeEm;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  int v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  int v60;
  __int64 v61;
  unsigned int v62;
  int v63;

  *(_QWORD*)(result + 8) = 0;
  *(_WORD*)(result + 48) = -256;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_BYTE*)(result + 50) = -1;
  v3 = *(int*)(a2 + 20);
  v4 = *(_QWORD*)(a2 + 8);
  v5 = v3 + 1;
  *(_DWORD*)(a2 + 20) = v3 + 1;
  v6 = *(unsigned __int8*)(v4 + v3);
  if (v6 < 3) {
    if (*(_BYTE*)(v4 + v3) != 0) {
      if (v6 == 2) {
        v10 = v3 + 2;
        *(_DWORD*)(a2 + 20) = v10;
        v11 = *(unsigned __int8*)(v4 + v5);
        if (v11 != 0) {
          *(_DWORD*)(a2 + 20) = v10 + 12 * v11;
        }
      }
      else {
        *(_DWORD*)(a2 + 20) = v3 + 4;
        return GameRoutine_71de40(a2);
      }
    }
    return result;
  }
  *(_DWORD*)(a2 + 20) = v3 + 2;
  v7 = *(unsigned __int8*)(v4 + v5);
  if (*(_BYTE*)(v4 + v5) == 0) {
    goto LABEL_94;
  }
  v8 = 0;
  v59 = result;
  v62 = v6;
  v9 = GameData_21f6188;
  v61 = result + 8;
  v60 = v7;
  while (2) {
    v14 = *(int*)(a2 + 20);
    v15 = *(_QWORD*)(a2 + 8);
    v16 = GameData_21f6178;
    *(_DWORD*)(a2 + 20) = v14 + 1;
    v17 = *(unsigned __int8*)(v15 + v14);
    *(_DWORD*)(a2 + 20) = v14 + 2;
    v18 = *(unsigned __int8*)(v15 + v14 + 1);
    *(_DWORD*)(a2 + 20) = v14 + 3;
    v19 = *(unsigned __int8*)(v15 + v14 + 2);
    *(_DWORD*)(a2 + 20) = v14 + 4;
    v20 = *(unsigned __int8*)(v15 + v14 + 3);
    *(_DWORD*)(a2 + 20) = v14 + 5;
    v21 = *(unsigned __int8*)(v15 + v14 + 4);
    *(_DWORD*)(a2 + 20) = v14 + 6;
    v22 = *(unsigned __int8*)(v15 + v14 + 5);
    *(_DWORD*)(a2 + 20) = v14 + 7;
    v23 = *(unsigned __int8*)(v15 + v14 + 6);
    *(_DWORD*)(a2 + 20) = v14 + 8;
    if (v16 == 0 || v9 == 0) {
      goto LABEL_11;
    }
    v24 = v16 - 1;
    v25 = v17 | (v18 << 8) | (v19 << 16) | (unsigned int)(v20 << 24);
    if ((v16 & (v16 - 1)) != 0) {
      v26 = v17 | (v18 << 8) | (v19 << 16) | (unsigned int)(v20 << 24);
      if (v16 <= v25) {
        v26 = (unsigned int)v25 % (unsigned int)v16;
      }
    }
    else {
      v26 = ((_DWORD)v16 - 1) & (unsigned int)v25;
    }
    v27 = *(__int64***)(GameData_21f6170 + 8 * v26);
    if (v27 == nullptr) {
      goto LABEL_11;
    }
    v28 = *v27;
    if (v28 == nullptr) {
      goto LABEL_11;
    }
    v29 = *(unsigned __int8*)(v15 + v14 + 7);
    if ((v16 & v24) == 0) {
      while (1) {
        v31 = v28[1];
        if (v31 == v25) {
          if (*((_DWORD*)v28 + 4) == (_DWORD)v25) {
            goto LABEL_34;
          }
        }
        else if ((v31 & v24) != v26) {
          goto LABEL_11;
        }
        v28 = (__int64*)*v28;
        if (v28 == nullptr) {
          goto LABEL_11;
        }
      }
    }
    while (1) {
      v30 = v28[1];
      if (v30 == v25) {
        break;
      }
      if (v30 >= v16) {
        v30 %= v16;
      }
      if (v30 != v26) {
        goto LABEL_11;
      }
    LABEL_23:
      v28 = (__int64*)*v28;
      if (v28 == nullptr) {
        goto LABEL_11;
      }
    }
    if (*((_DWORD*)v28 + 4) != (_DWORD)v25) {
      goto LABEL_23;
    }
  LABEL_34:
    v63 = v29;
    if ((v16 & v24) != 0) {
      v32 = v25;
      if (v16 <= v25) {
        v32 = (unsigned int)v25 % (unsigned int)v16;
      }
      v33 = *(__int64**)(GameData_21f6170 + 8 * v32);
      if (v33 == nullptr) {
        goto LABEL_54;
      }
    LABEL_40:
      v34 = *v33;
      if (*v33 != 0) {
        if ((v16 & v24) == 0) {
          while (1) {
            v36 = *(_QWORD*)(v34 + 8);
            if (v36 == v25) {
              if (*(_DWORD*)(v34 + 16) == (_DWORD)v25) {
                goto LABEL_77;
              }
            }
            else if ((v36 & v24) != v32) {
              goto LABEL_54;
            }
            v34 = *(_QWORD*)v34;
            if (v34 == 0) {
              goto LABEL_54;
            }
          }
        }
        do {
          v35 = *(_QWORD*)(v34 + 8);
          if (v35 == v25) {
            if (*(_DWORD*)(v34 + 16) == (_DWORD)v25) {
            LABEL_77:
              v6 = v62;
              v12 = v29;
              v13 = v61;
              v7 = v60;
              goto LABEL_10;
            }
          }
          else {
            if (v35 >= v16) {
              v35 %= v16;
            }
            if (v35 != v32) {
              break;
            }
          }
          v34 = *(_QWORD*)v34;
        } while (v34 != 0);
      }
    }
    else {
      v32 = ((_DWORD)v16 - 1) & (unsigned int)v25;
      v33 = *(__int64**)(GameData_21f6170 + 8 * v32);
      if (v33 != nullptr) {
        goto LABEL_40;
      }
    }
  LABEL_54:
    v34 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 24, 16, 0);
    *(_QWORD*)v34 = 0;
    *(_QWORD*)(v34 + 8) = v25;
    *(_DWORD*)(v34 + 16) = v25;
    *(_DWORD*)(v34 + 20) = 0;
    v37 = (float)(unsigned __int64)(GameData_21f6188 + 1);
    if ((float)(*(float*)&GameData_21f6190 * (float)v16) >= v37) {
      result = v59;
    }
    else {
      v38 = v37 / *(float*)&GameData_21f6190;
      v40 = (v16 & v24) != 0 || v16 < 3;
      v41 = v40 | (2 * v16);
      v42 = vcvtps_u64_f32(v38);
      if (v41 <= v42) {
        primeEm = v42;
      }
      else {
        primeEm = v41;
      }
      if (primeEm == 1) {
        primeEm = 2;
      }
      else if ((primeEm & (primeEm - 1)) != 0) {
        primeEm = GameRoutine_1a09d00(primeEm);
        v16 = GameData_21f6178;
      }
      if (primeEm > v16) {
        goto LABEL_70;
      }
      if (primeEm < v16) {
        v44 = vcvtps_u64_f32((float)(unsigned __int64)GameData_21f6188 /
                             *(float*)&GameData_21f6190);
        if (v16 < 3 || (v16 & (v16 - 1)) != 0) {
          v46 = primeEm;
          v44 = GameRoutine_1a09d00(v44);
          primeEm = v46;
        }
        else {
          v45 = 1LL << -(char)__clz(v44 - 1);
          if (v44 >= 2) {
            v44 = v45;
          }
        }
        if (primeEm <= v44) {
          primeEm = v44;
        }
        if (primeEm < v16) {
        LABEL_70:
          GameRoutine_9aef80();
        }
      }
      v16 = GameData_21f6178;
      if ((v16 & (v16 - 1)) != 0) {
        result = v59;
        if (GameData_21f6178 <= v25) {
          v32 = v25 % GameData_21f6178;
        }
        else {
          v32 = v25;
        }
      }
      else {
        result = v59;
        v32 = ((_DWORD)GameData_21f6178 - 1) & (unsigned int)v25;
      }
    }
    v47 = GameData_21f6170;
    v48 = *(__int64**)(GameData_21f6170 + 8 * v32);
    if (v48 != nullptr) {
      v6 = v62;
      v12 = v63;
      v13 = v61;
      v7 = v60;
      *(_QWORD*)v34 = *v48;
      *v48 = v34;
    }
    else {
      v13 = v61;
      v7 = v60;
      v49 = GameData_21f6180;
      GameData_21f6180 = v34;
      *(_QWORD*)v34 = v49;
      *(_QWORD*)(v47 + 8 * v32) = &GameData_21f6180;
      v6 = v62;
      v12 = v63;
      if (*(_QWORD*)v34 != 0) {
        v50 = *(_QWORD*)(*(_QWORD*)v34 + 8LL);
        if ((v16 & (v16 - 1)) != 0) {
          if (v50 >= v16) {
            v50 %= v16;
          }
        }
        else {
          v50 &= v16 - 1;
        }
        *(_QWORD*)(GameData_21f6170 + 8 * v50) = v34;
      }
    }
    v9 = ++GameData_21f6188;
  LABEL_10:
    *(_DWORD*)(v13 + 4LL * *(int*)(v34 + 20)) =
        v21 | (v22 << 8) | (v23 << 16) | (v12 << 24);
  LABEL_11:
    if (++v8 != v7) {
      continue;
    }
    break;
  }
LABEL_94:
  if (v6 != 3) {
    v51 = *(int*)(a2 + 20);
    v52 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v51 + 1;
    v53 = *(unsigned __int8*)(v52 + v51);
    *(_DWORD*)(a2 + 20) = v51 + 2;
    v54 = v53 | (*(unsigned __int8*)(v52 + v51 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v51 + 3;
    v55 = *(unsigned __int8*)(v52 + v51 + 2);
    *(_DWORD*)(a2 + 20) = v51 + 4;
    *(_DWORD*)(result + 44) =
        v54 | (v55 << 16) | (*(unsigned __int8*)(v52 + v51 + 3) << 24);
    if (v6 != 4) {
      v56 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v56 + 1;
      *(_BYTE*)(result + 48) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v56);
      v57 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v57 + 1;
      *(_BYTE*)(result + 49) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v57);
      v58 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v58 + 1;
      *(_BYTE*)(result + 50) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v58);
    }
  }
  return result;
}

_QWORD* GameHr_9b1d30(__int64 a1)
{
  _QWORD* v2;
  _QWORD* result;
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

  v2 = (_QWORD*)(a1 + 208);
  result = *(_QWORD**)(a1 + 240);
  if (result == v2) {
    v4 = 32;
    goto LABEL_5;
  }
  if (result != nullptr) {
    v4 = 40;
  LABEL_5:
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v4))((__int64)result);
  }
  if ((*(_BYTE*)(a1 + 176) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 192);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v6 = 56;
      }
      result =
          (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v6, v5);
    }
  }
  if ((*(_BYTE*)(a1 + 136) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 152);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v8 = 56;
      }
      result =
          (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v8, v7);
    }
  }
  if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 112);
    if (v9 != 0) {
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v10 = 56;
      }
      result =
          (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v10, v9);
    }
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v11 = *(_QWORD*)(a1 + 72);
    if (v11 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v12 = 56;
      }
      result =
          (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v12, v11);
    }
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v13 = *(_QWORD*)(a1 + 32);
    if (v13 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v14 = 56;
      }
      return (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v14,
                                          v13);
    }
  }
  return result;
}

#pragma GCC visibility pop
