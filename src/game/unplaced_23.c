#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* EventManagerBase_Unknown2(_QWORD* result);
_QWORD* GameHr_e5d5a0(__int64*, _QWORD*);
_QWORD* GameRoutine_d58c00(__int64, __int64*);
_QWORD* game_17cdea0(__int64);
__attribute__((swiftcall)) void GameRoutine_1085a10(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_878ea0(PSEUDO_X8, _QWORD*);
__attribute__((swiftcall)) void Shape_f643c0(PSEUDO_X8, __int64, __int64, int,
                                             float, float, float);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__attribute__((swiftcall)) void collision_671400(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__attribute__((swiftcall)) void game_108d130(PSEUDO_X8, __int64, const char*,
                                             float32x4_t*, __int64*,
                                             long double);
__attribute__((swiftcall)) void math_Quat_FromEulerianAngle(PSEUDO_X8, float*);
__int16* game_8697c0(__int16* result, char, float);
__int64* GameHr_cb2b00(__int64* result, __int64, __int64, unsigned __int64);
__int64* GameRoutine_e1d240(__int64, __int64*, __int64*);
__int64* Manager_bc6460(_QWORD*, __int64, char);
__int64* game_9a28e0(int);
__int64 FacilitySceneBase_1958ea0();
__int64 FacilityUtil_949d50();
__int64 GameHr_108e620(__int64, __int64*, const char*, int, char);
__int64 GameHr_1369e30(__int64, unsigned int);
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameHr_14a1390(__int64*, char);
__int64 GameHr_722f20();
__int64 GameHr_722f60();
__int64 GameHr_7230b0();
__int64 GameHr_724130();
__int64 GameHr_724340();
__int64 GameHr_724e30();
__int64 GameHr_725610();
__int64 GameHr_725750();
__int64 GameHr_726660();
__int64 GameHr_726cc0();
__int64 GameHr_727170();
__int64 GameHr_7271e0();
__int64 GameHr_727340();
__int64 GameHr_727360();
__int64 GameHr_918ce0(__int64*, __int64);
__int64 GameHr_960f80(__int64 result);
__int64 GameHr_ffd760(int, __int64, __int64, char);
__int64 GameRoutine_1006480(void);
__int64 GameRoutine_10074c0(void);
__int64 GameRoutine_1011680(void);
__int64 GameRoutine_1011740(__int64);
__int64 GameRoutine_10f33c0(__int64 result, _DWORD*, int, float);
__int64 GameRoutine_143d560(__int64, __int64, __int64, __int16*);
__int64 GameRoutine_1553130(__int64 result);
__int64 GameRoutine_1624230(__int64, __int64);
__int64 GameRoutine_2b0();
__int64 GameRoutine_723060();
__int64 GameRoutine_724110();
__int64 GameRoutine_724150();
__int64 GameRoutine_7241a0();
__int64 GameRoutine_7241e0();
__int64 GameRoutine_724200();
__int64 GameRoutine_724680();
__int64 GameRoutine_7247d0();
__int64 GameRoutine_724ad0();
__int64 GameRoutine_724e50();
__int64 GameRoutine_724e60();
__int64 GameRoutine_724ec0();
__int64 GameRoutine_7251a0();
__int64 GameRoutine_725300();
__int64 GameRoutine_725440();
__int64 GameRoutine_7255c0();
__int64 GameRoutine_7255f0();
__int64 GameRoutine_725640();
__int64 GameRoutine_725660();
__int64 GameRoutine_725710();
__int64 GameRoutine_725730();
__int64 GameRoutine_725800();
__int64 GameRoutine_725920();
__int64 GameRoutine_725b00();
__int64 GameRoutine_725b40();
__int64 GameRoutine_725bb0();
__int64 GameRoutine_725c80();
__int64 GameRoutine_725d40();
__int64 GameRoutine_725dc0();
__int64 GameRoutine_726090();
__int64 GameRoutine_7260d0();
__int64 GameRoutine_7261a0();
__int64 GameRoutine_7261e0();
__int64 GameRoutine_726260();
__int64 GameRoutine_726460();
__int64 GameRoutine_726630();
__int64 GameRoutine_7266a0();
__int64 GameRoutine_726790();
__int64 GameRoutine_726800();
__int64 GameRoutine_726960();
__int64 GameRoutine_726970();
__int64 GameRoutine_726c50();
__int64 GameRoutine_726d00();
__int64 GameRoutine_726d10();
__int64 GameRoutine_726d30();
__int64 GameRoutine_726e50();
__int64 GameRoutine_726f00();
__int64 GameRoutine_726f40();
__int64 GameRoutine_726f60();
__int64 GameRoutine_726f80();
__int64 GameRoutine_726fa0();
__int64 GameRoutine_726fc0();
__int64 GameRoutine_727020();
__int64 GameRoutine_727030();
__int64 GameRoutine_7271c0();
__int64 GameRoutine_727970();
__int64 GameRoutine_7279c0();
__int64 GameRoutine_881a60();
__int64 GameRoutine_882680();
__int64 GameRoutine_884fe0();
__int64 GameRoutine_885110();
__int64 GameRoutine_885120();
__int64 GameRoutine_885130();
__int64 GameRoutine_886a80();
__int64 GameRoutine_8a2b00(__int64);
__int64 GameRoutine_ed6040(void);
__int64 GameRoutine_f36980(void);
__int64 GameRoutine_f83520(void);
__int64 GameRoutine_f90d80(void);
__int64 GameRoutine_fbc550(__int64);
__int64 GameRoutine_ff7980(void);
__int64 ProcGameUIFade_15e1e60(__int64, __int64, __int64);
__int64 ProcGmapSeq_8802a0();
__int64 ProcGmapSeq_8804e0();
__int64 ProcGmapSeq_8814e0();
__int64 ProcGmapSeq_881560();
__int64 ProcGmapSeq_8818a0();
__int64 ProcGmapSeq_881f20();
__int64 ProcGmapSeq_882080();
__int64 ProcGmapSeq_882140();
__int64 ProcGmapSeq_882300();
__int64 ProcGmapSeq_8827e0();
__int64 ProcGmapSeq_882900();
__int64 ProcGmapSeq_882cb0();
__int64 ProcGmapSeq_882d60();
__int64 ProcGmapSeq_882f10();
__int64 ProcGmapSeq_883020();
__int64 ProcGmapSeq_883220();
__int64 ProcGmapSeq_8832a0();
__int64 ProcGmapSeq_883400();
__int64 ProcGmapSeq_883510();
__int64 ProcGmapSeq_883540();
__int64 ProcGmapSeq_883660();
__int64 ProcGmapSeq_883680();
__int64 ProcGmapSeq_8836c0();
__int64 ProcGmapSeq_883860();
__int64 ProcGmapSeq_8838a0();
__int64 ProcGmapSeq_8840d0();
__int64 ProcGmapSeq_884100();
__int64 ProcGmapSeq_8846c0();
__int64 ProcGmapSeq_884920();
__int64 ProcGmapSeq_884e80();
__int64 ProcGmapSeq_884eb0();
__int64 ProcGmapSeq_884f00();
__int64 ProcGmapSeq_884fb0();
__int64 ProcGmapSeq_884ff0();
__int64 ProcGmapSeq_885160();
__int64 ProcGmapSeq_8855f0();
__int64 ProcGmapSeq_885750();
__int64 ProcGmapSeq_885840();
__int64 ProcGmapSeq_885880();
__int64 ProcGmapSeq_885b00();
__int64 ProcGmapSeq_885f00();
__int64 ProcGmapSeq_8865e0();
__int64 ProcGmapSeq_8866a0();
__int64 ProcGmapSeq_886770();
__int64 ProcGmapSeq_886870();
__int64 ProcGmapSeq_8868e0();
__int64 ProcGmapSeq_886a90();
__int64 ProcGmapSeq_886c20();
__int64 ProcGmapSeq_886c80();
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 ProcRegistry_65a2e0(_QWORD*, _QWORD*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_109ecc0(_BYTE*, unsigned __int64, char*, char*);
__int64 game_1366260(const char*, char);
__int64 game_17c7dc0(__int64);
__int64 game_723200();
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_GameView_Update();
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_anonymous_RuntimeTalk_GetCondition(__int64);
__int64 game_cmdbtl_Manager_Manager(__int64);
__int64 game_fbc6b0(unsigned int);
__int64 game_gmap_ProcGmapSeq_Initialize();
__int64 game_gmap_ProcGmapSeq_LimitOver();
__int64 game_gmap_ProcGmapSeq_LoadMap();
__int64 game_gmap_ProcGmapSeq_OpenEventBranch();
__int64 game_gmap_ProcGmapSeq_PreExeCommand();
__int64 game_gmap_ProcGmapSeq_TryGetFarmProduct();
__int64 game_map_724ae0();
__int64 game_map_726100();
__int64 game_map_726850();
__int64 game_map_726a20();
__int64 game_map_726d70();
__int64 game_map_727040();
__int64 game_map_MapEffect_Load();
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_startSlotVolume_100b50(int*, __int64, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 strcpy(__int64, const char*);
__int64 vsnprintf(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
bool GameHr_8ab6e0(int, char);
bool GameRoutine_94c860(__int64*);
char* game_util_Format(const char*, ...);
const char* game_HashString32(const char* result);
double snd_getDefineValue(unsigned __int8*);
extern _DWORD* GameData_212c340;
extern _DWORD* GameData_212c348;
extern _DWORD* GameData_212c350_alt1 __asm__("GameData_212c350");
extern _DWORD* GameData_212d168;
extern _DWORD* GameData_212d280;
extern _DWORD* GameData_212f4f8;
extern _DWORD* GameData_212f750;
extern _DWORD* GameData_212f788;
extern _DWORD* GameData_212f7b0;
extern _DWORD GameData_1b01468[8];
extern _DWORD GameData_21d925c[32];
extern _QWORD GameData_1fb0230[4];
extern _QWORD GameData_212c350;
extern _QWORD GameData_21fdd90[5];
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN* GameData_212deb8;
extern _UNKNOWN* GameData_212fbd0;
extern _UNKNOWN GameData_1acc6e7;
extern _UNKNOWN GameData_1adb26c;
extern _UNKNOWN GameData_21a6190;
extern _UNKNOWN GameData_21cd0c0;
extern _UNKNOWN GameData_21f1340;
extern _UNKNOWN GameData_21fde98;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6180;
extern __int64 (*Character_Destructor_ca8b40_ptr[])();
extern __int64 (*GameData_1f93780[])();
extern __int64 (*GameData_1f937f8[])();
extern __int64 (*GameData_1f93890[])();
extern __int64 (*GameData_1fa6ed0[])();
extern __int64 (*GameData_1fa6fb0[])();
extern __int64 (*GameData_1fd3ed0[])();
extern __int64 (*GameData_1fd3f20[])();
extern __int64 (*GameData_1fd45f8[])();
extern __int64 (*GameData_1fdcd80[29])();
extern __int64 (*GameData_1fdcdb8[22])();
extern __int64 (*GameData_21198a0[])();
extern __int64 (*GameData_2119920[])();
extern __int64 (*GameData_21199c0[])();
extern __int64 (*GameData_212c6e8[8])();
extern __int64 (*GameData_212c720)();
extern __int64 (*GameData_212d048[11])();
extern __int64 (*GameData_212d060[8])();
extern __int64 (*GameData_212d080[4])();
extern __int64 (*GameData_212d088[3])();
extern __int64 (*GameData_212d090[2])();
extern __int64 (*GameData_212d098)();
extern __int64 (*GameData_212d768[11])();
extern __int64 (*GameData_212d788[7])();
extern __int64 (*MapUtil_7555e0_ptr[10])();
extern __int64 (*MiasmaManager_14a9f60_ptr[9])();
extern __int64 (*ProcInst_DeletingDestructor_ptr)();
extern __int64 (*ProcInst_Destructor_ptr[2])();
extern __int64 (*TroopMgr_134a480_ptr[12])();
extern __int64 (*TroopMgr_134aa80_ptr[10])();
extern __int64 (*Tutorial_f9a8c0_ptr[7])();
extern __int64 (*game_11943c0_ptr[9])();
extern __int64 (*game_734fc0_ptr[5])();
extern __int64 (*game_7bc0e0_ptr[6])();
extern __int64 (*game_80a680_ptr[11])();
extern __int64 (*game_GameTime_Timer_vtable[])();
extern __int64 (*game_gmap_154d9a0_ptr[8])();
extern __int64 (*game_gmap_ProcGmapSeq_vtable[])();
extern __int64 (*game_hub_AreaEvent_vtable[])();
extern __int64 (*game_map_anonymous_ProcMapSeq_vtable[])();
extern __int64 (*util_HandlePtr_vtable[])();
extern __int64* GameData_212c338;
extern __int64* GameData_212c890[3];
extern __int64* GameData_212d2f0;
extern __int64* GameData_212d450[8];
extern __int64* GameData_212d570[7];
extern __int64* GameData_212d578[6];
extern __int64* GameData_212d6d0;
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212ea58;
extern __int64* GameData_212eb98[10];
extern __int64* GameData_212eba0[9];
extern __int64* GameData_212f068;
extern __int64* GameData_212f4e0[3];
extern __int64* GameData_212f4e8[2];
extern __int64* GameData_212f4f0;
extern __int64* GameData_212f748;
extern __int64* GameData_212f780;
extern __int64* GameData_212f7a8;
extern __int64* GameData_212f938;
extern __int64* GameData_212f988;
extern __int64* GameData_212fa10;
extern __int64* GameData_212fa58;
extern __int64* GameData_212fc10;
extern __int64* GameData_212fc20;
extern __int64* GameData_212fc38[2];
extern __int64* GameData_212fc40;
extern __int64* GameData_212fc78;
extern __int64* GameData_21320d8;
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64* util_g_handle_slots_ptr[2];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c638;
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_212c970[153];
extern __int64 GameData_212d040;
extern __int64 GameData_212d240;
extern __int64 GameData_212d270;
extern __int64 GameData_212d740[3];
extern __int64 GameData_212f1d8[14];
extern __int64 GameData_212f500[8];
extern __int64 GameData_212f508[7];
extern __int64 GameData_212f510[6];
extern __int64 GameData_212f518[5];
extern __int64 GameData_212f520[4];
extern __int64 GameData_212f528[3];
extern __int64 GameData_212f530[2];
extern __int64 GameData_212f538;
extern __int64 GameData_212f728[3];
extern __int64 GameData_2131d30[20];
extern __int64 GameData_2131d38[19];
extern __int64 GameData_21caac8;
extern __int64 GameData_21caad0;
extern __int64 GameData_21caae8;
extern __int64 GameData_21caaf8;
extern __int64 GameData_21cab08;
extern __int64 GameData_21cab10;
extern __int64 GameData_21cab28;
extern __int64 GameData_21cab38;
extern __int64 GameData_21cab48;
extern __int64 GameData_21cab50;
extern __int64 GameData_21cab58;
extern __int64 GameData_21cab68;
extern __int64 GameData_21cab78;
extern __int64 GameData_21cab88;
extern __int64 GameData_21cab90;
extern __int64 GameData_21cab98;
extern __int64 GameData_21caba8;
extern __int64 GameData_21cabb8;
extern __int64 GameData_21cabc8;
extern __int64 GameData_21cabd0;
extern __int64 GameData_21cabd8;
extern __int64 GameData_21cabe8;
extern __int64 GameData_21cabf8;
extern __int64 GameData_21cac08;
extern __int64 GameData_21cac10;
extern __int64 GameData_21cac18;
extern __int64 GameData_21cac28;
extern __int64 GameData_21cac38;
extern __int64 GameData_21cac48;
extern __int64 GameData_21cac50;
extern __int64 GameData_21cac58;
extern __int64 GameData_21cac68;
extern __int64 GameData_21cac78;
extern __int64 GameData_21cac88;
extern __int64 GameData_21cac90;
extern __int64 GameData_21cac98;
extern __int64 GameData_21caca8;
extern __int64 GameData_21cacb8;
extern __int64 GameData_21cacc8;
extern __int64 GameData_21cacd0;
extern __int64 GameData_21cacd8;
extern __int64 GameData_21cace8;
extern __int64 GameData_21cacf8;
extern __int64 GameData_21cad08;
extern __int64 GameData_21cad10;
extern __int64 GameData_21cad18;
extern __int64 GameData_21cad28;
extern __int64 GameData_21cad38;
extern __int64 GameData_21cad48;
extern __int64 GameData_21cad50;
extern __int64 GameData_21cad58;
extern __int64 GameData_21cad68;
extern __int64 GameData_21cad78;
extern __int64 GameData_21cad88;
extern __int64 GameData_21cad90;
extern __int64 GameData_21cad98;
extern __int64 GameData_21cada8;
extern __int64 GameData_21cadb8;
extern __int64 GameData_21cadc8;
extern __int64 GameData_21cadd0;
extern __int64 GameData_21cadd8;
extern __int64 GameData_21cade8;
extern __int64 GameData_21cadf8;
extern __int64 GameData_21cae08;
extern __int64 GameData_21cae10;
extern __int64 GameData_21cae18;
extern __int64 GameData_21cae28;
extern __int64 GameData_21cae38;
extern __int64 GameData_21cae48;
extern __int64 GameData_21cae50;
extern __int64 GameData_21cae58;
extern __int64 GameData_21cae68;
extern __int64 GameData_21cae78;
extern __int64 GameData_21cae88;
extern __int64 GameData_21cae90;
extern __int64 GameData_21cae98;
extern __int64 GameData_21caea8;
extern __int64 GameData_21caeb8;
extern __int64 GameData_21caec8;
extern __int64 GameData_21caed0;
extern __int64 GameData_21caee8;
extern __int64 GameData_21caef8;
extern __int64 GameData_21caf08;
extern __int64 GameData_21caf10;
extern __int64 GameData_21caf18;
extern __int64 GameData_21caf28;
extern __int64 GameData_21caf38;
extern __int64 GameData_21caf48;
extern __int64 GameData_21caf50;
extern __int64 GameData_21caf58;
extern __int64 GameData_21caf68;
extern __int64 GameData_21caf78;
extern __int64 GameData_21caf88;
extern __int64 GameData_21caf90;
extern __int64 GameData_21caf98;
extern __int64 GameData_21cafa8;
extern __int64 GameData_21cafb8;
extern __int64 GameData_21cafc8;
extern __int64 GameData_21cafd0;
extern __int64 GameData_21cafe8;
extern __int64 GameData_21caff8;
extern __int64 GameData_21cb008;
extern __int64 GameData_21cb010;
extern __int64 GameData_21cb018;
extern __int64 GameData_21cb028;
extern __int64 GameData_21cb038;
extern __int64 GameData_21cb048;
extern __int64 GameData_21cb050;
extern __int64 GameData_21cb058;
extern __int64 GameData_21cb068;
extern __int64 GameData_21cb078;
extern __int64 GameData_21cb088;
extern __int64 GameData_21cb090;
extern __int64 GameData_21cb098;
extern __int64 GameData_21cb0a8;
extern __int64 GameData_21cb0b8;
extern __int64 GameData_21cb0c8;
extern __int64 GameData_21cb0d0;
extern __int64 GameData_21cb0d8;
extern __int64 GameData_21cb0e8;
extern __int64 GameData_21cb0f8;
extern __int64 GameData_21cb108;
extern __int64 GameData_21cb110;
extern __int64 GameData_21cb118;
extern __int64 GameData_21cb128;
extern __int64 GameData_21cb138;
extern __int64 GameData_21cb148;
extern __int64 GameData_21cb150;
extern __int64 GameData_21cb158;
extern __int64 GameData_21cb168;
extern __int64 GameData_21cb178;
extern __int64 GameData_21cb188;
extern __int64 GameData_21cb190;
extern __int64 GameData_21cb198;
extern __int64 GameData_21cb1a8;
extern __int64 GameData_21cb1b8;
extern __int64 GameData_21cb1c8;
extern __int64 GameData_21cb1d0;
extern __int64 GameData_21cb1e8;
extern __int64 GameData_21cb1f8;
extern __int64 GameData_21cb208;
extern __int64 GameData_21cb210;
extern __int64 GameData_21cb218;
extern __int64 GameData_21cb228;
extern __int64 GameData_21cb238;
extern __int64 GameData_21cb248;
extern __int64 GameData_21cb250;
extern __int64 GameData_21cb258;
extern __int64 GameData_21cb268;
extern __int64 GameData_21cb278;
extern __int64 GameData_21cb288;
extern __int64 GameData_21cb290;
extern __int64 GameData_21cb298;
extern __int64 GameData_21cb2a8;
extern __int64 GameData_21cb2b8;
extern __int64 GameData_21cb2c8;
extern __int64 GameData_21cb2d0;
extern __int64 GameData_21cb2d8;
extern __int64 GameData_21cb2e8;
extern __int64 GameData_21cb2f8;
extern __int64 GameData_21cb308;
extern __int64 GameData_21cb310;
extern __int64 GameData_21cb318;
extern __int64 GameData_21cb328;
extern __int64 GameData_21cb338;
extern __int64 GameData_21cb348;
extern __int64 GameData_21cb350;
extern __int64 GameData_21cb358;
extern __int64 GameData_21cb368;
extern __int64 GameData_21cb378;
extern __int64 GameData_21cb388;
extern __int64 GameData_21cb390;
extern __int64 GameData_21cb398;
extern __int64 GameData_21cb3a8;
extern __int64 GameData_21cb3b8;
extern __int64 GameData_21cb3c8;
extern __int64 GameData_21cb3d0;
extern __int64 GameData_21cb3d8;
extern __int64 GameData_21cb3e8;
extern __int64 GameData_21cb3f8;
extern __int64 GameData_21cb408;
extern __int64 GameData_21cb410;
extern __int64 GameData_21cb418;
extern __int64 GameData_21cb428;
extern __int64 GameData_21cb438;
extern __int64 GameData_21cb448;
extern __int64 GameData_21cb450;
extern __int64 GameData_21cb458;
extern __int64 GameData_21cb468;
extern __int64 GameData_21cb478;
extern __int64 GameData_21cb488;
extern __int64 GameData_21cb490;
extern __int64 GameData_21cb498;
extern __int64 GameData_21cb4a8;
extern __int64 GameData_21cb4b8;
extern __int64 GameData_21cb4c8;
extern __int64 GameData_21cb4d0;
extern __int64 GameData_21cb4d8;
extern __int64 GameData_21cb4e8;
extern __int64 GameData_21cb4f8;
extern __int64 GameData_21cb508;
extern __int64 GameData_21cb510;
extern __int64 GameData_21cb518;
extern __int64 GameData_21cb528;
extern __int64 GameData_21cb538;
extern __int64 GameData_21cb548;
extern __int64 GameData_21cb550;
extern __int64 GameData_21cb558;
extern __int64 GameData_21cb568;
extern __int64 GameData_21cb578;
extern __int64 GameData_21cb588;
extern __int64 GameData_21cb590;
extern __int64 GameData_21cb598;
extern __int64 GameData_21cb5a8;
extern __int64 GameData_21cb5b8;
extern __int64 GameData_21cb5c8;
extern __int64 GameData_21cb5d0;
extern __int64 GameData_21cb5d8;
extern __int64 GameData_21cb5e8;
extern __int64 GameData_21cb5f8;
extern __int64 GameData_21cb608;
extern __int64 GameData_21cb610;
extern __int64 GameData_21cb618;
extern __int64 GameData_21cb628;
extern __int64 GameData_21cb638;
extern __int64 GameData_21cb648;
extern __int64 GameData_21cb650;
extern __int64 GameData_21cb658;
extern __int64 GameData_21cb668;
extern __int64 GameData_21cb678;
extern __int64 GameData_21cb688;
extern __int64 GameData_21cb690;
extern __int64 GameData_21cb698;
extern __int64 GameData_21cb6a8;
extern __int64 GameData_21cb6b8;
extern __int64 GameData_21cb6c8;
extern __int64 GameData_21cb6d0;
extern __int64 GameData_21cb6d8;
extern __int64 GameData_21cb6e8;
extern __int64 GameData_21cb6f8;
extern __int64 GameData_21cb708;
extern __int64 GameData_21cb710;
extern __int64 GameData_21cb718;
extern __int64 GameData_21cb728;
extern __int64 GameData_21cb738;
extern __int64 GameData_21cb748;
extern __int64 GameData_21cb750;
extern __int64 GameData_21cb758;
extern __int64 GameData_21cb768;
extern __int64 GameData_21cb778;
extern __int64 GameData_21cb788;
extern __int64 GameData_21cb790;
extern __int64 GameData_21cb798;
extern __int64 GameData_21cb7a8;
extern __int64 GameData_21cb7b8;
extern __int64 GameData_21cb7c8;
extern __int64 GameData_21cb7d0;
extern __int64 GameData_21cb7d8;
extern __int64 GameData_21cb7e8;
extern __int64 GameData_21cb7f8;
extern __int64 GameData_21cb808;
extern __int64 GameData_21cb810;
extern __int64 GameData_21cb818;
extern __int64 GameData_21cb828;
extern __int64 GameData_21cb838;
extern __int64 GameData_21cb848;
extern __int64 GameData_21cb850;
extern __int64 GameData_21cb858;
extern __int64 GameData_21cb868;
extern __int64 GameData_21cb878;
extern __int64 GameData_21cb888;
extern __int64 GameData_21cb890;
extern __int64 GameData_21cb898;
extern __int64 GameData_21cb8a8;
extern __int64 GameData_21cb8b8;
extern __int64 GameData_21cb8c8;
extern __int64 GameData_21cb8d0;
extern __int64 GameData_21cb8d8;
extern __int64 GameData_21cb8e8;
extern __int64 GameData_21cb8f8;
extern __int64 GameData_21cb908;
extern __int64 GameData_21cb910;
extern __int64 GameData_21cb918;
extern __int64 GameData_21cb928;
extern __int64 GameData_21cb938;
extern __int64 GameData_21cb948;
extern __int64 GameData_21cb950;
extern __int64 GameData_21cb958;
extern __int64 GameData_21cb968;
extern __int64 GameData_21cb978;
extern __int64 GameData_21cb988;
extern __int64 GameData_21cb990;
extern __int64 GameData_21cb998;
extern __int64 GameData_21cb9a8;
extern __int64 GameData_21cb9b8;
extern __int64 GameData_21cb9c8;
extern __int64 GameData_21cb9d0;
extern __int64 GameData_21cb9d8;
extern __int64 GameData_21cb9e8;
extern __int64 GameData_21cb9f8;
extern __int64 GameData_21cba08;
extern __int64 GameData_21cba10;
extern __int64 GameData_21cba18;
extern __int64 GameData_21cba28;
extern __int64 GameData_21cba38;
extern __int64 GameData_21cba48;
extern __int64 GameData_21cba50;
extern __int64 GameData_21cba58;
extern __int64 GameData_21cba68;
extern __int64 GameData_21cba78;
extern __int64 GameData_21cba88;
extern __int64 GameData_21cba90;
extern __int64 GameData_21cba98;
extern __int64 GameData_21cbaa8;
extern __int64 GameData_21cbab8;
extern __int64 GameData_21cbac8;
extern __int64 GameData_21cbad0;
extern __int64 GameData_21cbad8;
extern __int64 GameData_21cbae8;
extern __int64 GameData_21cbaf8;
extern __int64 GameData_21cbb08;
extern __int64 GameData_21cbb10;
extern __int64 GameData_21cbb18;
extern __int64 GameData_21cbb28;
extern __int64 GameData_21cbb38;
extern __int64 GameData_21cbb48;
extern __int64 GameData_21cbb50;
extern __int64 GameData_21cbb58;
extern __int64 GameData_21cbb68;
extern __int64 GameData_21cbb78;
extern __int64 GameData_21cbb88;
extern __int64 GameData_21cbb90;
extern __int64 GameData_21cbb98;
extern __int64 GameData_21cbba8;
extern __int64 GameData_21cbbb8;
extern __int64 GameData_21cbbc8;
extern __int64 GameData_21cbbd0;
extern __int64 GameData_21cbbd8;
extern __int64 GameData_21cbbe8;
extern __int64 GameData_21cbbf8;
extern __int64 GameData_21cbc08;
extern __int64 GameData_21cbc10;
extern __int64 GameData_21cbc18;
extern __int64 GameData_21cbc28;
extern __int64 GameData_21cbc38;
extern __int64 GameData_21cbc48;
extern __int64 GameData_21cbc50;
extern __int64 GameData_21cbc58;
extern __int64 GameData_21cbc68;
extern __int64 GameData_21cbc78;
extern __int64 GameData_21cbc88;
extern __int64 GameData_21cbc90;
extern __int64 GameData_21cbc98;
extern __int64 GameData_21cbca8;
extern __int64 GameData_21cbcb8;
extern __int64 GameData_21cbcc8;
extern __int64 GameData_21cbcd0;
extern __int64 GameData_21cbcd8;
extern __int64 GameData_21cbce8;
extern __int64 GameData_21cbcf8;
extern __int64 GameData_21cbd08;
extern __int64 GameData_21cbd10;
extern __int64 GameData_21cbd18;
extern __int64 GameData_21cbd28;
extern __int64 GameData_21cbd38;
extern __int64 GameData_21cbd48;
extern __int64 GameData_21cbd50;
extern __int64 GameData_21cbd58;
extern __int64 GameData_21cbd68;
extern __int64 GameData_21cbd78;
extern __int64 GameData_21cbd88;
extern __int64 GameData_21cbd90;
extern __int64 GameData_21cbd98;
extern __int64 GameData_21cbda8;
extern __int64 GameData_21cbdb8;
extern __int64 GameData_21cbdc8;
extern __int64 GameData_21cbdd0;
extern __int64 GameData_21cbdd8;
extern __int64 GameData_21cbde8;
extern __int64 GameData_21cbdf8;
extern __int64 GameData_21cbe08;
extern __int64 GameData_21cbe10;
extern __int64 GameData_21cbe18;
extern __int64 GameData_21cbe28;
extern __int64 GameData_21cbe38;
extern __int64 GameData_21cbe48;
extern __int64 GameData_21cbe50;
extern __int64 GameData_21cbe58;
extern __int64 GameData_21cbe68;
extern __int64 GameData_21cbe78;
extern __int64 GameData_21cbe88;
extern __int64 GameData_21cbe90;
extern __int64 GameData_21cbe98;
extern __int64 GameData_21cbea8;
extern __int64 GameData_21cbeb8;
extern __int64 GameData_21cbec8;
extern __int64 GameData_21cbed0;
extern __int64 GameData_21cbed8;
extern __int64 GameData_21cbee8;
extern __int64 GameData_21cbef8;
extern __int64 GameData_21cbf08;
extern __int64 GameData_21cbf10;
extern __int64 GameData_21cbf18;
extern __int64 GameData_21cbf28;
extern __int64 GameData_21cbf38;
extern __int64 GameData_21cbf48;
extern __int64 GameData_21cbf50;
extern __int64 GameData_21cbf58;
extern __int64 GameData_21cbf68;
extern __int64 GameData_21cbf78;
extern __int64 GameData_21cbf88;
extern __int64 GameData_21cbf90;
extern __int64 GameData_21cbf98;
extern __int64 GameData_21cbfa8;
extern __int64 GameData_21cbfb8;
extern __int64 GameData_21cbfc8;
extern __int64 GameData_21cbfd0;
extern __int64 GameData_21cbfd8;
extern __int64 GameData_21cbfe8;
extern __int64 GameData_21cbff8;
extern __int64 GameData_21cc008;
extern __int64 GameData_21cc010;
extern __int64 GameData_21cc018;
extern __int64 GameData_21cc028;
extern __int64 GameData_21cc038;
extern __int64 GameData_21cc048;
extern __int64 GameData_21cc050;
extern __int64 GameData_21cc058;
extern __int64 GameData_21cc068;
extern __int64 GameData_21cc078;
extern __int64 GameData_21cc088;
extern __int64 GameData_21cc090;
extern __int64 GameData_21cc098;
extern __int64 GameData_21cc0a8;
extern __int64 GameData_21cc0b8;
extern __int64 GameData_21cc0c8;
extern __int64 GameData_21cc0d0;
extern __int64 GameData_21cc0d8;
extern __int64 GameData_21cc0e8;
extern __int64 GameData_21cc0f8;
extern __int64 GameData_21cc108;
extern __int64 GameData_21cc110;
extern __int64 GameData_21cc118;
extern __int64 GameData_21cc128;
extern __int64 GameData_21cc138;
extern __int64 GameData_21cc148;
extern __int64 GameData_21cc150;
extern __int64 GameData_21cc158;
extern __int64 GameData_21cc168;
extern __int64 GameData_21cc178;
extern __int64 GameData_21cc188;
extern __int64 GameData_21cc190;
extern __int64 GameData_21cc198;
extern __int64 GameData_21cc1a8;
extern __int64 GameData_21cc1b8;
extern __int64 GameData_21cc1c8;
extern __int64 GameData_21cc1d0;
extern __int64 GameData_21cc1d8;
extern __int64 GameData_21cc1e8;
extern __int64 GameData_21cc1f8;
extern __int64 GameData_21cc208;
extern __int64 GameData_21cc210;
extern __int64 GameData_21cc218;
extern __int64 GameData_21cc228;
extern __int64 GameData_21cc238;
extern __int64 GameData_21cc248;
extern __int64 GameData_21cc250;
extern __int64 GameData_21cc258;
extern __int64 GameData_21cc268;
extern __int64 GameData_21cc278;
extern __int64 GameData_21cc288;
extern __int64 GameData_21cc290;
extern __int64 GameData_21cc2a8;
extern __int64 GameData_21cc2b8;
extern __int64 GameData_21cc2c8;
extern __int64 GameData_21cc2d0;
extern __int64 GameData_21cc2d8;
extern __int64 GameData_21cc2e8;
extern __int64 GameData_21cc2f8;
extern __int64 GameData_21cc308;
extern __int64 GameData_21cc310;
extern __int64 GameData_21cc318;
extern __int64 GameData_21cc328;
extern __int64 GameData_21cc338;
extern __int64 GameData_21cc348;
extern __int64 GameData_21cc350;
extern __int64 GameData_21cc358;
extern __int64 GameData_21cc368;
extern __int64 GameData_21cc378;
extern __int64 GameData_21cc388;
extern __int64 GameData_21cc390;
extern __int64 GameData_21cc398;
extern __int64 GameData_21cc3a8;
extern __int64 GameData_21cc3b8;
extern __int64 GameData_21cc3c8;
extern __int64 GameData_21cc3d0;
extern __int64 GameData_21cc3d8;
extern __int64 GameData_21cc3e8;
extern __int64 GameData_21cc3f8;
extern __int64 GameData_21cc408;
extern __int64 GameData_21cc410;
extern __int64 GameData_21cc418;
extern __int64 GameData_21cc428;
extern __int64 GameData_21cc438;
extern __int64 GameData_21cc448;
extern __int64 GameData_21cc450;
extern __int64 GameData_21cc458;
extern __int64 GameData_21cc468;
extern __int64 GameData_21cc478;
extern __int64 GameData_21cc488;
extern __int64 GameData_21cc490;
extern __int64 GameData_21cc498;
extern __int64 GameData_21cc4a8;
extern __int64 GameData_21cc4b8;
extern __int64 GameData_21cc4c8;
extern __int64 GameData_21cc4d0;
extern __int64 GameData_21cc4d8;
extern __int64 GameData_21cc4e8;
extern __int64 GameData_21cc4f8;
extern __int64 GameData_21cc508;
extern __int64 GameData_21cc510;
extern __int64 GameData_21cc518;
extern __int64 GameData_21cc528;
extern __int64 GameData_21cc538;
extern __int64 GameData_21cc548;
extern __int64 GameData_21cc550;
extern __int64 GameData_21cc558;
extern __int64 GameData_21cc568;
extern __int64 GameData_21cc578;
extern __int64 GameData_21cc588;
extern __int64 GameData_21cc590;
extern __int64 GameData_21cc598;
extern __int64 GameData_21cc5a8;
extern __int64 GameData_21cc5b8;
extern __int64 GameData_21cc5c8;
extern __int64 GameData_21cc5d0;
extern __int64 GameData_21cc5d8;
extern __int64 GameData_21cc5e8;
extern __int64 GameData_21cc5f8;
extern __int64 GameData_21cc608;
extern __int64 GameData_21cc610;
extern __int64 GameData_21cc628;
extern __int64 GameData_21cc638;
extern __int64 GameData_21cc648;
extern __int64 GameData_21cc650;
extern __int64 GameData_21cc658;
extern __int64 GameData_21cc668;
extern __int64 GameData_21cc678;
extern __int64 GameData_21cc688;
extern __int64 GameData_21cc690;
extern __int64 GameData_21cc698;
extern __int64 GameData_21cc6a8;
extern __int64 GameData_21cc6b8;
extern __int64 GameData_21cc6c8;
extern __int64 GameData_21cc6d0;
extern __int64 GameData_21cc6d8;
extern __int64 GameData_21cc6e8;
extern __int64 GameData_21cc6f8;
extern __int64 GameData_21cc708;
extern __int64 GameData_21cc710;
extern __int64 GameData_21cc718;
extern __int64 GameData_21cc728;
extern __int64 GameData_21cc738;
extern __int64 GameData_21cc748;
extern __int64 GameData_21cc750;
extern __int64 GameData_21cc758;
extern __int64 GameData_21cc768;
extern __int64 GameData_21cc778;
extern __int64 GameData_21cc788;
extern __int64 GameData_21cc790;
extern __int64 GameData_21cc798;
extern __int64 GameData_21cc7a8;
extern __int64 GameData_21cc7b8;
extern __int64 GameData_21cc7c8;
extern __int64 GameData_21cc7d0;
extern __int64 GameData_21cc7d8;
extern __int64 GameData_21cc7e8;
extern __int64 GameData_21cc7f8;
extern __int64 GameData_21cc808;
extern __int64 GameData_21cc810;
extern __int64 GameData_21cc818;
extern __int64 GameData_21cc828;
extern __int64 GameData_21cc838;
extern __int64 GameData_21cc848;
extern __int64 GameData_21cc850;
extern __int64 GameData_21cc858;
extern __int64 GameData_21cc868;
extern __int64 GameData_21cc878;
extern __int64 GameData_21cc888;
extern __int64 GameData_21cc890;
extern __int64 GameData_21cc898;
extern __int64 GameData_21cc8a8;
extern __int64 GameData_21cc8b8;
extern __int64 GameData_21cc8c8;
extern __int64 GameData_21cc8d0;
extern __int64 GameData_21cc8d8;
extern __int64 GameData_21cc8e8;
extern __int64 GameData_21cc8f8;
extern __int64 GameData_21cc908;
extern __int64 GameData_21cc910;
extern __int64 GameData_21cc918;
extern __int64 GameData_21cc928;
extern __int64 GameData_21cc938;
extern __int64 GameData_21cc948;
extern __int64 GameData_21cc950;
extern __int64 GameData_21cc958;
extern __int64 GameData_21cc968;
extern __int64 GameData_21cc978;
extern __int64 GameData_21cc988;
extern __int64 GameData_21cc990;
extern __int64 GameData_21cc9a8;
extern __int64 GameData_21cc9b8;
extern __int64 GameData_21cc9c8;
extern __int64 GameData_21cc9d0;
extern __int64 GameData_21cc9d8;
extern __int64 GameData_21cc9e8;
extern __int64 GameData_21cc9f8;
extern __int64 GameData_21cca08;
extern __int64 GameData_21cca10;
extern __int64 GameData_21cca28;
extern __int64 GameData_21cca38;
extern __int64 GameData_21cca48;
extern __int64 GameData_21cca50;
extern __int64 GameData_21cca58;
extern __int64 GameData_21cca68;
extern __int64 GameData_21cca78;
extern __int64 GameData_21cca88;
extern __int64 GameData_21cca90;
extern __int64 GameData_21cca98;
extern __int64 GameData_21ccaa8;
extern __int64 GameData_21ccab8;
extern __int64 GameData_21ccac8;
extern __int64 GameData_21ccad0;
extern __int64 GameData_21ccad8;
extern __int64 GameData_21ccae8;
extern __int64 GameData_21ccaf8;
extern __int64 GameData_21ccb08;
extern __int64 GameData_21ccb10;
extern __int64 GameData_21ccb18;
extern __int64 GameData_21ccb28;
extern __int64 GameData_21ccb38;
extern __int64 GameData_21ccb48;
extern __int64 GameData_21ccb50;
extern __int64 GameData_21ccb58;
extern __int64 GameData_21ccb68;
extern __int64 GameData_21ccb78;
extern __int64 GameData_21ccb88;
extern __int64 GameData_21ccb90;
extern __int64 GameData_21ccb98;
extern __int64 GameData_21ccba8;
extern __int64 GameData_21ccbb8;
extern __int64 GameData_21ccbc8;
extern __int64 GameData_21ccbd0;
extern __int64 GameData_21ccbd8;
extern __int64 GameData_21ccbe8;
extern __int64 GameData_21ccbf8;
extern __int64 GameData_21ccc08;
extern __int64 GameData_21ccc10;
extern __int64 GameData_21ccc18;
extern __int64 GameData_21ccc28;
extern __int64 GameData_21ccc38;
extern __int64 GameData_21ccc48;
extern __int64 GameData_21ccc50;
extern __int64 GameData_21ccc58;
extern __int64 GameData_21ccc68;
extern __int64 GameData_21ccc78;
extern __int64 GameData_21ccc88;
extern __int64 GameData_21ccc90;
extern __int64 GameData_21ccc98;
extern __int64 GameData_21ccca8;
extern __int64 GameData_21cccb8;
extern __int64 GameData_21cccc8;
extern __int64 GameData_21cccd0;
extern __int64 GameData_21cccd8;
extern __int64 GameData_21ccce8;
extern __int64 GameData_21cccf8;
extern __int64 GameData_21ccd08;
extern __int64 GameData_21ccd10;
extern __int64 GameData_21ccd28;
extern __int64 GameData_21ccd38;
extern __int64 GameData_21ccd48;
extern __int64 GameData_21ccd50;
extern __int64 GameData_21ccd68;
extern __int64 GameData_21ccd78;
extern __int64 GameData_21ccd88;
extern __int64 GameData_21ccd90;
extern __int64 GameData_21ccd98;
extern __int64 GameData_21ccda8;
extern __int64 GameData_21ccdb8;
extern __int64 GameData_21ccdc8;
extern __int64 GameData_21ccdd0;
extern __int64 GameData_21ccdd8;
extern __int64 GameData_21ccde8;
extern __int64 GameData_21ccdf8;
extern __int64 GameData_21cce08;
extern __int64 GameData_21cce10;
extern __int64 GameData_21cce18;
extern __int64 GameData_21cce28;
extern __int64 GameData_21cce38;
extern __int64 GameData_21cce48;
extern __int64 GameData_21cce50;
extern __int64 GameData_21cce58;
extern __int64 GameData_21cce68;
extern __int64 GameData_21cce78;
extern __int64 GameData_21cce88;
extern __int64 GameData_21cce90;
extern __int64 GameData_21cce98;
extern __int64 GameData_21ccea8;
extern __int64 GameData_21cceb8;
extern __int64 GameData_21ccec8;
extern __int64 GameData_21cced0;
extern __int64 GameData_21cced8;
extern __int64 GameData_21ccee8;
extern __int64 GameData_21ccef8;
extern __int64 GameData_21ccf08;
extern __int64 GameData_21ccf10;
extern __int64 GameData_21ccf18;
extern __int64 GameData_21ccf28;
extern __int64 GameData_21ccf38;
extern __int64 GameData_21ccf48;
extern __int64 GameData_21ccf50;
extern __int64 GameData_21ccf58;
extern __int64 GameData_21ccf68;
extern __int64 GameData_21ccf78;
extern __int64 GameData_21ccf88;
extern __int64 GameData_21ccf90;
extern __int64 GameData_21ccf98;
extern __int64 GameData_21ccfa8;
extern __int64 GameData_21ccfb8;
extern __int64 GameData_21ccfc8;
extern __int64 GameData_21ccfd0;
extern __int64 GameData_21ccfd8;
extern __int64 GameData_21ccfe8;
extern __int64 GameData_21ccff8;
extern __int64 GameData_21cd008;
extern __int64 GameData_21cd010;
extern __int64 GameData_21cd018;
extern __int64 GameData_21cd028;
extern __int64 GameData_21cd038;
extern __int64 GameData_21cd048;
extern __int64 GameData_21cd050;
extern __int64 GameData_21cd058;
extern __int64 GameData_21cd068;
extern __int64 GameData_21cd078;
extern __int64 GameData_21cd088;
extern __int64 GameData_21cd090;
extern __int64 GameData_21cd098;
extern __int64 GameData_21cd0a8;
extern __int64 GameData_21cd0b8;
extern __int64 GameData_21d96b8;
extern __int64 GameData_21eea40;
extern __int64 GameData_21eea50;
extern __int64 GameData_21eea58;
extern __int64 GameData_21ef1c8;
extern __int64 GameData_21ef1d0;
extern __int64 GameData_21ef1e8;
extern __int64 GameData_21ef1f8;
extern __int64 GameData_21ef208;
extern __int64 GameData_21ef210;
extern __int64 GameData_21ef218;
extern __int64 GameData_21ef228;
extern __int64 GameData_21ef238;
extern __int64 GameData_21ef248;
extern __int64 GameData_21ef250;
extern __int64 GameData_21ef258;
extern __int64 GameData_21ef268;
extern __int64 GameData_21ef278;
extern __int64 GameData_21ef288;
extern __int64 GameData_21ef290;
extern __int64 GameData_21ef2a8;
extern __int64 GameData_21ef2b8;
extern __int64 GameData_21ef2c8;
extern __int64 GameData_21ef2d0;
extern __int64 GameData_21ef2d8;
extern __int64 GameData_21ef2e8;
extern __int64 GameData_21ef2f8;
extern __int64 GameData_21ef308;
extern __int64 GameData_21ef310;
extern __int64 GameData_21ef318;
extern __int64 GameData_21ef328;
extern __int64 GameData_21ef338;
extern __int64 GameData_21ef348;
extern __int64 GameData_21ef350;
extern __int64 GameData_21ef368;
extern __int64 GameData_21ef378;
extern __int64 GameData_21ef388;
extern __int64 GameData_21ef390;
extern __int64 GameData_21ef398;
extern __int64 GameData_21ef3a8;
extern __int64 GameData_21ef3b8;
extern __int64 GameData_21ef3c8;
extern __int64 GameData_21ef3d0;
extern __int64 GameData_21ef3d8;
extern __int64 GameData_21ef3e8;
extern __int64 GameData_21ef3f8;
extern __int64 GameData_21ef408;
extern __int64 GameData_21ef410;
extern __int64 GameData_21ef418;
extern __int64 GameData_21ef428;
extern __int64 GameData_21ef438;
extern __int64 GameData_21ef448;
extern __int64 GameData_21ef450;
extern __int64 GameData_21ef458;
extern __int64 GameData_21ef468;
extern __int64 GameData_21ef478;
extern __int64 GameData_21ef488;
extern __int64 GameData_21ef490;
extern __int64 GameData_21ef498;
extern __int64 GameData_21ef4a8;
extern __int64 GameData_21ef4b8;
extern __int64 GameData_21ef4c8;
extern __int64 GameData_21ef4d0;
extern __int64 GameData_21ef4e8;
extern __int64 GameData_21ef4f8;
extern __int64 GameData_21ef508;
extern __int64 GameData_21ef510;
extern __int64 GameData_21ef528;
extern __int64 GameData_21ef538;
extern __int64 GameData_21ef548;
extern __int64 GameData_21ef550;
extern __int64 GameData_21ef568;
extern __int64 GameData_21ef578;
extern __int64 GameData_21ef588;
extern __int64 GameData_21ef590;
extern __int64 GameData_21ef598;
extern __int64 GameData_21ef5a8;
extern __int64 GameData_21ef5b8;
extern __int64 GameData_21ef5c8;
extern __int64 GameData_21ef5d0;
extern __int64 GameData_21ef5d8;
extern __int64 GameData_21ef5e8;
extern __int64 GameData_21ef5f8;
extern __int64 GameData_21ef608;
extern __int64 GameData_21ef610;
extern __int64 GameData_21ef618;
extern __int64 GameData_21ef628;
extern __int64 GameData_21ef638;
extern __int64 GameData_21ef648;
extern __int64 GameData_21ef650;
extern __int64 GameData_21ef658;
extern __int64 GameData_21ef668;
extern __int64 GameData_21ef678;
extern __int64 GameData_21ef688;
extern __int64 GameData_21ef690;
extern __int64 GameData_21ef698;
extern __int64 GameData_21ef6a8;
extern __int64 GameData_21ef6b8;
extern __int64 GameData_21ef6c8;
extern __int64 GameData_21ef6d0;
extern __int64 GameData_21ef6d8;
extern __int64 GameData_21ef6e8;
extern __int64 GameData_21ef6f8;
extern __int64 GameData_21ef708;
extern __int64 GameData_21ef710;
extern __int64 GameData_21ef718;
extern __int64 GameData_21ef728;
extern __int64 GameData_21ef738;
extern __int64 GameData_21ef748;
extern __int64 GameData_21ef750;
extern __int64 GameData_21ef758;
extern __int64 GameData_21ef768;
extern __int64 GameData_21ef778;
extern __int64 GameData_21ef788;
extern __int64 GameData_21ef790;
extern __int64 GameData_21ef798;
extern __int64 GameData_21ef7a8;
extern __int64 GameData_21ef7b8;
extern __int64 GameData_21ef7c8;
extern __int64 GameData_21ef7d0;
extern __int64 GameData_21ef7d8;
extern __int64 GameData_21ef7e8;
extern __int64 GameData_21ef7f8;
extern __int64 GameData_21ef808;
extern __int64 GameData_21ef810;
extern __int64 GameData_21ef818;
extern __int64 GameData_21ef828;
extern __int64 GameData_21ef838;
extern __int64 GameData_21ef848;
extern __int64 GameData_21ef850;
extern __int64 GameData_21ef868;
extern __int64 GameData_21ef878;
extern __int64 GameData_21ef888;
extern __int64 GameData_21ef890;
extern __int64 GameData_21ef8a8;
extern __int64 GameData_21ef8b8;
extern __int64 GameData_21ef8c8;
extern __int64 GameData_21ef8d0;
extern __int64 GameData_21ef8e8;
extern __int64 GameData_21ef8f8;
extern __int64 GameData_21ef908;
extern __int64 GameData_21ef910;
extern __int64 GameData_21ef918;
extern __int64 GameData_21ef928;
extern __int64 GameData_21ef938;
extern __int64 GameData_21ef948;
extern __int64 GameData_21ef950;
extern __int64 GameData_21ef958;
extern __int64 GameData_21ef968;
extern __int64 GameData_21ef978;
extern __int64 GameData_21ef988;
extern __int64 GameData_21ef990;
extern __int64 GameData_21ef998;
extern __int64 GameData_21ef9a8;
extern __int64 GameData_21ef9b8;
extern __int64 GameData_21ef9c8;
extern __int64 GameData_21ef9d0;
extern __int64 GameData_21ef9d8;
extern __int64 GameData_21ef9e8;
extern __int64 GameData_21ef9f8;
extern __int64 GameData_21efa08;
extern __int64 GameData_21efa10;
extern __int64 GameData_21efa18;
extern __int64 GameData_21efa28;
extern __int64 GameData_21efa38;
extern __int64 GameData_21efa48;
extern __int64 GameData_21efa50;
extern __int64 GameData_21efa58;
extern __int64 GameData_21efa68;
extern __int64 GameData_21efa78;
extern __int64 GameData_21efa88;
extern __int64 GameData_21efa90;
extern __int64 GameData_21efa98;
extern __int64 GameData_21efaa8;
extern __int64 GameData_21efab8;
extern __int64 GameData_21efac8;
extern __int64 GameData_21efad0;
extern __int64 GameData_21efad8;
extern __int64 GameData_21efae8;
extern __int64 GameData_21efaf8;
extern __int64 GameData_21efb08;
extern __int64 GameData_21efb10;
extern __int64 GameData_21efb18;
extern __int64 GameData_21efb28;
extern __int64 GameData_21efb38;
extern __int64 GameData_21efb48;
extern __int64 GameData_21efb50;
extern __int64 GameData_21efb58;
extern __int64 GameData_21efb68;
extern __int64 GameData_21efb78;
extern __int64 GameData_21efb88;
extern __int64 GameData_21efb90;
extern __int64 GameData_21efb98;
extern __int64 GameData_21efba8;
extern __int64 GameData_21efbb8;
extern __int64 GameData_21efbc8;
extern __int64 GameData_21efbd0;
extern __int64 GameData_21efbd8;
extern __int64 GameData_21efbe8;
extern __int64 GameData_21efbf8;
extern __int64 GameData_21efc08;
extern __int64 GameData_21efc10;
extern __int64 GameData_21efc18;
extern __int64 GameData_21efc28;
extern __int64 GameData_21efc38;
extern __int64 GameData_21efc48;
extern __int64 GameData_21efc50;
extern __int64 GameData_21efc58;
extern __int64 GameData_21efc68;
extern __int64 GameData_21efc78;
extern __int64 GameData_21efc88;
extern __int64 GameData_21efc90;
extern __int64 GameData_21efc98;
extern __int64 GameData_21efca8;
extern __int64 GameData_21efcb8;
extern __int64 GameData_21efcc8;
extern __int64 GameData_21efcd0;
extern __int64 GameData_21efcd8;
extern __int64 GameData_21efce8;
extern __int64 GameData_21efcf8;
extern __int64 GameData_21efd08;
extern __int64 GameData_21efd10;
extern __int64 GameData_21efd18;
extern __int64 GameData_21efd28;
extern __int64 GameData_21efd38;
extern __int64 GameData_21efd48;
extern __int64 GameData_21efd50;
extern __int64 GameData_21efd58;
extern __int64 GameData_21efd68;
extern __int64 GameData_21efd78;
extern __int64 GameData_21efd88;
extern __int64 GameData_21efd90;
extern __int64 GameData_21efd98;
extern __int64 GameData_21efda8;
extern __int64 GameData_21efdb8;
extern __int64 GameData_21efdc8;
extern __int64 GameData_21efdd0;
extern __int64 GameData_21efdd8;
extern __int64 GameData_21efde8;
extern __int64 GameData_21efdf8;
extern __int64 GameData_21efe08;
extern __int64 GameData_21efe10;
extern __int64 GameData_21efe18;
extern __int64 GameData_21efe28;
extern __int64 GameData_21efe38;
extern __int64 GameData_21efe48;
extern __int64 GameData_21efe50;
extern __int64 GameData_21efe58;
extern __int64 GameData_21efe68;
extern __int64 GameData_21efe78;
extern __int64 GameData_21efe88;
extern __int64 GameData_21efe90;
extern __int64 GameData_21efe98;
extern __int64 GameData_21efea8;
extern __int64 GameData_21efeb8;
extern __int64 GameData_21efec8;
extern __int64 GameData_21efed0;
extern __int64 GameData_21efed8;
extern __int64 GameData_21efee8;
extern __int64 GameData_21efef8;
extern __int64 GameData_21eff08;
extern __int64 GameData_21eff10;
extern __int64 GameData_21eff18;
extern __int64 GameData_21eff28;
extern __int64 GameData_21eff38;
extern __int64 GameData_21eff48;
extern __int64 GameData_21eff50;
extern __int64 GameData_21eff58;
extern __int64 GameData_21eff68;
extern __int64 GameData_21eff78;
extern __int64 GameData_21eff88;
extern __int64 GameData_21eff90;
extern __int64 GameData_21eff98;
extern __int64 GameData_21effa8;
extern __int64 GameData_21effb8;
extern __int64 GameData_21effc8;
extern __int64 GameData_21effd0;
extern __int64 GameData_21effd8;
extern __int64 GameData_21effe8;
extern __int64 GameData_21efff8;
extern __int64 GameData_21f0008;
extern __int64 GameData_21f0010;
extern __int64 GameData_21f0018;
extern __int64 GameData_21f0028;
extern __int64 GameData_21f0038;
extern __int64 GameData_21f0048;
extern __int64 GameData_21f0050;
extern __int64 GameData_21f0058;
extern __int64 GameData_21f0068;
extern __int64 GameData_21f0078;
extern __int64 GameData_21f0088;
extern __int64 GameData_21f0090;
extern __int64 GameData_21f0098;
extern __int64 GameData_21f00a8;
extern __int64 GameData_21f00b8;
extern __int64 GameData_21f00c8;
extern __int64 GameData_21f00d0;
extern __int64 GameData_21f00d8;
extern __int64 GameData_21f00e8;
extern __int64 GameData_21f00f8;
extern __int64 GameData_21f0108;
extern __int64 GameData_21f0110;
extern __int64 GameData_21f0118;
extern __int64 GameData_21f0128;
extern __int64 GameData_21f0138;
extern __int64 GameData_21f0148;
extern __int64 GameData_21f0150;
extern __int64 GameData_21f0158;
extern __int64 GameData_21f0168;
extern __int64 GameData_21f0178;
extern __int64 GameData_21f0188;
extern __int64 GameData_21f0190;
extern __int64 GameData_21f0198;
extern __int64 GameData_21f01a8;
extern __int64 GameData_21f01b8;
extern __int64 GameData_21f01c8;
extern __int64 GameData_21f01d0;
extern __int64 GameData_21f01d8;
extern __int64 GameData_21f01e8;
extern __int64 GameData_21f01f8;
extern __int64 GameData_21f0208;
extern __int64 GameData_21f0210;
extern __int64 GameData_21f0218;
extern __int64 GameData_21f0228;
extern __int64 GameData_21f0238;
extern __int64 GameData_21f0248;
extern __int64 GameData_21f0250;
extern __int64 GameData_21f0258;
extern __int64 GameData_21f0268;
extern __int64 GameData_21f0278;
extern __int64 GameData_21f0288;
extern __int64 GameData_21f0290;
extern __int64 GameData_21f0298;
extern __int64 GameData_21f02a8;
extern __int64 GameData_21f02b8;
extern __int64 GameData_21f02c8;
extern __int64 GameData_21f02d0;
extern __int64 GameData_21f02d8;
extern __int64 GameData_21f02e8;
extern __int64 GameData_21f02f8;
extern __int64 GameData_21f0308;
extern __int64 GameData_21f0310;
extern __int64 GameData_21f0318;
extern __int64 GameData_21f0328;
extern __int64 GameData_21f0338;
extern __int64 GameData_21f0348;
extern __int64 GameData_21f0350;
extern __int64 GameData_21f0358;
extern __int64 GameData_21f0368;
extern __int64 GameData_21f0378;
extern __int64 GameData_21f0388;
extern __int64 GameData_21f0390;
extern __int64 GameData_21f0398;
extern __int64 GameData_21f03a8;
extern __int64 GameData_21f03b8;
extern __int64 GameData_21f03c8;
extern __int64 GameData_21f03d0;
extern __int64 GameData_21f03d8;
extern __int64 GameData_21f03e8;
extern __int64 GameData_21f03f8;
extern __int64 GameData_21f0408;
extern __int64 GameData_21f0410;
extern __int64 GameData_21f0418;
extern __int64 GameData_21f0428;
extern __int64 GameData_21f0438;
extern __int64 GameData_21f0448;
extern __int64 GameData_21f0450;
extern __int64 GameData_21f0458;
extern __int64 GameData_21f0468;
extern __int64 GameData_21f0478;
extern __int64 GameData_21f0488;
extern __int64 GameData_21f0490;
extern __int64 GameData_21f0498;
extern __int64 GameData_21f04a8;
extern __int64 GameData_21f04b8;
extern __int64 GameData_21f04c8;
extern __int64 GameData_21f04d0;
extern __int64 GameData_21f04d8;
extern __int64 GameData_21f04e8;
extern __int64 GameData_21f04f8;
extern __int64 GameData_21f0508;
extern __int64 GameData_21f0510;
extern __int64 GameData_21f0518;
extern __int64 GameData_21f0528;
extern __int64 GameData_21f0538;
extern __int64 GameData_21f0548;
extern __int64 GameData_21f0550;
extern __int64 GameData_21f0558;
extern __int64 GameData_21f0568;
extern __int64 GameData_21f0578;
extern __int64 GameData_21f0588;
extern __int64 GameData_21f0590;
extern __int64 GameData_21f0598;
extern __int64 GameData_21f05a8;
extern __int64 GameData_21f05b8;
extern __int64 GameData_21f05c8;
extern __int64 GameData_21f05d0;
extern __int64 GameData_21f05d8;
extern __int64 GameData_21f05e8;
extern __int64 GameData_21f05f8;
extern __int64 GameData_21f0608;
extern __int64 GameData_21f0610;
extern __int64 GameData_21f0618;
extern __int64 GameData_21f0628;
extern __int64 GameData_21f0638;
extern __int64 GameData_21f0648;
extern __int64 GameData_21f0650;
extern __int64 GameData_21f0658;
extern __int64 GameData_21f0668;
extern __int64 GameData_21f0678;
extern __int64 GameData_21f0688;
extern __int64 GameData_21f0690;
extern __int64 GameData_21f0698;
extern __int64 GameData_21f06a8;
extern __int64 GameData_21f06b8;
extern __int64 GameData_21f06c8;
extern __int64 GameData_21f06d0;
extern __int64 GameData_21f06d8;
extern __int64 GameData_21f06e8;
extern __int64 GameData_21f06f8;
extern __int64 GameData_21f0708;
extern __int64 GameData_21f0710;
extern __int64 GameData_21f0718;
extern __int64 GameData_21f0728;
extern __int64 GameData_21f0738;
extern __int64 GameData_21f0748;
extern __int64 GameData_21f0750;
extern __int64 GameData_21f0758;
extern __int64 GameData_21f0768;
extern __int64 GameData_21f0778;
extern __int64 GameData_21f0788;
extern __int64 GameData_21f0790;
extern __int64 GameData_21f0798;
extern __int64 GameData_21f07a8;
extern __int64 GameData_21f07b8;
extern __int64 GameData_21f07c8;
extern __int64 GameData_21f07d0;
extern __int64 GameData_21f07d8;
extern __int64 GameData_21f07e8;
extern __int64 GameData_21f07f8;
extern __int64 GameData_21f0808;
extern __int64 GameData_21f0810;
extern __int64 GameData_21f0818;
extern __int64 GameData_21f0828;
extern __int64 GameData_21f0838;
extern __int64 GameData_21f0848;
extern __int64 GameData_21f0850;
extern __int64 GameData_21f0858;
extern __int64 GameData_21f0868;
extern __int64 GameData_21f0878;
extern __int64 GameData_21f0888;
extern __int64 GameData_21f0890;
extern __int64 GameData_21f0898;
extern __int64 GameData_21f08a8;
extern __int64 GameData_21f08b8;
extern __int64 GameData_21f08c8;
extern __int64 GameData_21f08d0;
extern __int64 GameData_21f08d8;
extern __int64 GameData_21f08e8;
extern __int64 GameData_21f08f8;
extern __int64 GameData_21f0908;
extern __int64 GameData_21f0910;
extern __int64 GameData_21f0918;
extern __int64 GameData_21f0928;
extern __int64 GameData_21f0938;
extern __int64 GameData_21f0948;
extern __int64 GameData_21f0950;
extern __int64 GameData_21f0958;
extern __int64 GameData_21f0968;
extern __int64 GameData_21f0978;
extern __int64 GameData_21f0988;
extern __int64 GameData_21f0990;
extern __int64 GameData_21f0998;
extern __int64 GameData_21f09a8;
extern __int64 GameData_21f09b8;
extern __int64 GameData_21f09c8;
extern __int64 GameData_21f09d0;
extern __int64 GameData_21f09d8;
extern __int64 GameData_21f09e8;
extern __int64 GameData_21f09f8;
extern __int64 GameData_21f0a08;
extern __int64 GameData_21f0a10;
extern __int64 GameData_21f0a18;
extern __int64 GameData_21f0a28;
extern __int64 GameData_21f0a38;
extern __int64 GameData_21f0a48;
extern __int64 GameData_21f0a50;
extern __int64 GameData_21f0a58;
extern __int64 GameData_21f0a68;
extern __int64 GameData_21f0a78;
extern __int64 GameData_21f0a88;
extern __int64 GameData_21f0a90;
extern __int64 GameData_21f0a98;
extern __int64 GameData_21f0aa8;
extern __int64 GameData_21f0ab8;
extern __int64 GameData_21f0ac8;
extern __int64 GameData_21f0ad0;
extern __int64 GameData_21f0ad8;
extern __int64 GameData_21f0ae8;
extern __int64 GameData_21f0af8;
extern __int64 GameData_21f0b08;
extern __int64 GameData_21f0b10;
extern __int64 GameData_21f0b18;
extern __int64 GameData_21f0b28;
extern __int64 GameData_21f0b38;
extern __int64 GameData_21f0b48;
extern __int64 GameData_21f0b50;
extern __int64 GameData_21f0b58;
extern __int64 GameData_21f0b68;
extern __int64 GameData_21f0b78;
extern __int64 GameData_21f0b88;
extern __int64 GameData_21f0b90;
extern __int64 GameData_21f0b98;
extern __int64 GameData_21f0ba8;
extern __int64 GameData_21f0bb8;
extern __int64 GameData_21f0bc8;
extern __int64 GameData_21f0bd0;
extern __int64 GameData_21f0bd8;
extern __int64 GameData_21f0be8;
extern __int64 GameData_21f0bf8;
extern __int64 GameData_21f0c08;
extern __int64 GameData_21f0c10;
extern __int64 GameData_21f0c18;
extern __int64 GameData_21f0c28;
extern __int64 GameData_21f0c38;
extern __int64 GameData_21f0c48;
extern __int64 GameData_21f0c50;
extern __int64 GameData_21f0c58;
extern __int64 GameData_21f0c68;
extern __int64 GameData_21f0c78;
extern __int64 GameData_21f0c88;
extern __int64 GameData_21f0c90;
extern __int64 GameData_21f0c98;
extern __int64 GameData_21f0ca8;
extern __int64 GameData_21f0cb8;
extern __int64 GameData_21f0cc8;
extern __int64 GameData_21f0cd0;
extern __int64 GameData_21f0cd8;
extern __int64 GameData_21f0ce8;
extern __int64 GameData_21f0cf8;
extern __int64 GameData_21f0d08;
extern __int64 GameData_21f0d10;
extern __int64 GameData_21f0d18;
extern __int64 GameData_21f0d28;
extern __int64 GameData_21f0d38;
extern __int64 GameData_21f0d48;
extern __int64 GameData_21f0d50;
extern __int64 GameData_21f0d58;
extern __int64 GameData_21f0d68;
extern __int64 GameData_21f0d78;
extern __int64 GameData_21f0d88;
extern __int64 GameData_21f0d90;
extern __int64 GameData_21f0d98;
extern __int64 GameData_21f0da8;
extern __int64 GameData_21f0db8;
extern __int64 GameData_21f0dc8;
extern __int64 GameData_21f0dd0;
extern __int64 GameData_21f0dd8;
extern __int64 GameData_21f0de8;
extern __int64 GameData_21f0df8;
extern __int64 GameData_21f0e08;
extern __int64 GameData_21f0e10;
extern __int64 GameData_21f0e18;
extern __int64 GameData_21f0e28;
extern __int64 GameData_21f0e38;
extern __int64 GameData_21f0e48;
extern __int64 GameData_21f0e50;
extern __int64 GameData_21f0e68;
extern __int64 GameData_21f0e78;
extern __int64 GameData_21f0e88;
extern __int64 GameData_21f0e90;
extern __int64 GameData_21f0e98;
extern __int64 GameData_21f0ea8;
extern __int64 GameData_21f0eb8;
extern __int64 GameData_21f0ec8;
extern __int64 GameData_21f0ed0;
extern __int64 GameData_21f0ed8;
extern __int64 GameData_21f0ee8;
extern __int64 GameData_21f0ef8;
extern __int64 GameData_21f0f08;
extern __int64 GameData_21f0f10;
extern __int64 GameData_21f0f28;
extern __int64 GameData_21f0f38;
extern __int64 GameData_21f0f48;
extern __int64 GameData_21f0f50;
extern __int64 GameData_21f0f58;
extern __int64 GameData_21f0f68;
extern __int64 GameData_21f0f78;
extern __int64 GameData_21f0f88;
extern __int64 GameData_21f0f90;
extern __int64 GameData_21f0f98;
extern __int64 GameData_21f0fa8;
extern __int64 GameData_21f0fb8;
extern __int64 GameData_21f0fc8;
extern __int64 GameData_21f0fd0;
extern __int64 GameData_21f0fd8;
extern __int64 GameData_21f0fe8;
extern __int64 GameData_21f0ff8;
extern __int64 GameData_21f1008;
extern __int64 GameData_21f1010;
extern __int64 GameData_21f1018;
extern __int64 GameData_21f1028;
extern __int64 GameData_21f1038;
extern __int64 GameData_21f1048;
extern __int64 GameData_21f1050;
extern __int64 GameData_21f1058;
extern __int64 GameData_21f1068;
extern __int64 GameData_21f1078;
extern __int64 GameData_21f1088;
extern __int64 GameData_21f1090;
extern __int64 GameData_21f1098;
extern __int64 GameData_21f10a8;
extern __int64 GameData_21f10b8;
extern __int64 GameData_21f10c8;
extern __int64 GameData_21f10d0;
extern __int64 GameData_21f10d8;
extern __int64 GameData_21f10e8;
extern __int64 GameData_21f10f8;
extern __int64 GameData_21f1108;
extern __int64 GameData_21f1110;
extern __int64 GameData_21f1118;
extern __int64 GameData_21f1128;
extern __int64 GameData_21f1138;
extern __int64 GameData_21f1148;
extern __int64 GameData_21f1150;
extern __int64 GameData_21f1158;
extern __int64 GameData_21f1168;
extern __int64 GameData_21f1178;
extern __int64 GameData_21f1188;
extern __int64 GameData_21f1190;
extern __int64 GameData_21f1198;
extern __int64 GameData_21f11a8;
extern __int64 GameData_21f11b8;
extern __int64 GameData_21f11c8;
extern __int64 GameData_21f11d0;
extern __int64 GameData_21f11d8;
extern __int64 GameData_21f11e8;
extern __int64 GameData_21f11f8;
extern __int64 GameData_21f1208;
extern __int64 GameData_21f1210;
extern __int64 GameData_21f1228;
extern __int64 GameData_21f1238;
extern __int64 GameData_21f1248;
extern __int64 GameData_21f1250;
extern __int64 GameData_21f1258;
extern __int64 GameData_21f1268;
extern __int64 GameData_21f1278;
extern __int64 GameData_21f1288;
extern __int64 GameData_21f1290;
extern __int64 GameData_21f1298;
extern __int64 GameData_21f12a8;
extern __int64 GameData_21f12b8;
extern __int64 GameData_21f12c8;
extern __int64 GameData_21f12d0;
extern __int64 GameData_21f12d8;
extern __int64 GameData_21f12e8;
extern __int64 GameData_21f12f8;
extern __int64 GameData_21f1308;
extern __int64 GameData_21f1310;
extern __int64 GameData_21f1318;
extern __int64 GameData_21f1328;
extern __int64 GameData_21f1338;
extern __int64 GameData_21f1618;
extern __int64 GameData_21f1c78;
extern __int64 GameData_21f1c80;
extern __int64 GameData_21f1c90;
extern __int64 GameData_21f1c98;
extern __int64 GameData_21f1dc8;
extern __int64 GameData_21f2288;
extern __int64 GameData_21f2290;
extern __int64 GameData_2216820;
extern __int64 GameData_225ca88;
extern __int64 eft_g_effectSystem;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64 game_script_map_effect_g_sequence;
extern __int64 ui_Manager_instance_;
extern char* GameData_1fa9470[9];
extern char GameData_1a9f09e;
extern char GameData_21caac0;
extern char GameData_21cab00;
extern char GameData_21cab40;
extern char GameData_21cab80;
extern char GameData_21cabc0;
extern char GameData_21cac00;
extern char GameData_21cac40;
extern char GameData_21cac80;
extern char GameData_21cacc0;
extern char GameData_21cad00;
extern char GameData_21cad40;
extern char GameData_21cad80;
extern char GameData_21cadc0;
extern char GameData_21cae00;
extern char GameData_21cae40;
extern char GameData_21cae80;
extern char GameData_21caec0;
extern char GameData_21caf00;
extern char GameData_21caf40;
extern char GameData_21caf80;
extern char GameData_21cafc0;
extern char GameData_21cb000;
extern char GameData_21cb040;
extern char GameData_21cb080;
extern char GameData_21cb0c0;
extern char GameData_21cb100;
extern char GameData_21cb140;
extern char GameData_21cb180;
extern char GameData_21cb1c0;
extern char GameData_21cb200;
extern char GameData_21cb240;
extern char GameData_21cb280;
extern char GameData_21cb2c0;
extern char GameData_21cb300;
extern char GameData_21cb340;
extern char GameData_21cb380;
extern char GameData_21cb3c0;
extern char GameData_21cb400;
extern char GameData_21cb440;
extern char GameData_21cb480;
extern char GameData_21cb4c0;
extern char GameData_21cb500;
extern char GameData_21cb540;
extern char GameData_21cb580;
extern char GameData_21cb5c0;
extern char GameData_21cb600;
extern char GameData_21cb640;
extern char GameData_21cb680;
extern char GameData_21cb6c0;
extern char GameData_21cb700;
extern char GameData_21cb740;
extern char GameData_21cb780;
extern char GameData_21cb7c0;
extern char GameData_21cb800;
extern char GameData_21cb840;
extern char GameData_21cb880;
extern char GameData_21cb8c0;
extern char GameData_21cb900;
extern char GameData_21cb940;
extern char GameData_21cb980;
extern char GameData_21cb9c0;
extern char GameData_21cba00;
extern char GameData_21cba40;
extern char GameData_21cba80;
extern char GameData_21cbac0;
extern char GameData_21cbb00;
extern char GameData_21cbb40;
extern char GameData_21cbb80;
extern char GameData_21cbbc0;
extern char GameData_21cbc00;
extern char GameData_21cbc40;
extern char GameData_21cbc80;
extern char GameData_21cbcc0;
extern char GameData_21cbd00;
extern char GameData_21cbd40;
extern char GameData_21cbd80;
extern char GameData_21cbdc0;
extern char GameData_21cbe00;
extern char GameData_21cbe40;
extern char GameData_21cbe80;
extern char GameData_21cbec0;
extern char GameData_21cbf00;
extern char GameData_21cbf40;
extern char GameData_21cbf80;
extern char GameData_21cbfc0;
extern char GameData_21cc000;
extern char GameData_21cc040;
extern char GameData_21cc080;
extern char GameData_21cc0c0;
extern char GameData_21cc100;
extern char GameData_21cc140;
extern char GameData_21cc180;
extern char GameData_21cc1c0;
extern char GameData_21cc200;
extern char GameData_21cc240;
extern char GameData_21cc280;
extern char GameData_21cc2c0;
extern char GameData_21cc300;
extern char GameData_21cc340;
extern char GameData_21cc380;
extern char GameData_21cc3c0;
extern char GameData_21cc400;
extern char GameData_21cc440;
extern char GameData_21cc480;
extern char GameData_21cc4c0;
extern char GameData_21cc500;
extern char GameData_21cc540;
extern char GameData_21cc580;
extern char GameData_21cc5c0;
extern char GameData_21cc600;
extern char GameData_21cc640;
extern char GameData_21cc680;
extern char GameData_21cc6c0;
extern char GameData_21cc700;
extern char GameData_21cc740;
extern char GameData_21cc780;
extern char GameData_21cc7c0;
extern char GameData_21cc800;
extern char GameData_21cc840;
extern char GameData_21cc880;
extern char GameData_21cc8c0;
extern char GameData_21cc900;
extern char GameData_21cc940;
extern char GameData_21cc980;
extern char GameData_21cc9c0;
extern char GameData_21cca00;
extern char GameData_21cca40;
extern char GameData_21cca80;
extern char GameData_21ccac0;
extern char GameData_21ccb00;
extern char GameData_21ccb40;
extern char GameData_21ccb80;
extern char GameData_21ccbc0;
extern char GameData_21ccc00;
extern char GameData_21ccc40;
extern char GameData_21ccc80;
extern char GameData_21cccc0;
extern char GameData_21ccd00;
extern char GameData_21ccd40;
extern char GameData_21ccd80;
extern char GameData_21ccdc0;
extern char GameData_21cce00;
extern char GameData_21cce40;
extern char GameData_21cce80;
extern char GameData_21ccec0;
extern char GameData_21ccf00;
extern char GameData_21ccf40;
extern char GameData_21ccf80;
extern char GameData_21ccfc0;
extern char GameData_21cd000;
extern char GameData_21cd040;
extern char GameData_21cd080;
extern char GameData_21ef1c0;
extern char GameData_21ef200;
extern char GameData_21ef240;
extern char GameData_21ef280;
extern char GameData_21ef2c0;
extern char GameData_21ef300;
extern char GameData_21ef340;
extern char GameData_21ef380;
extern char GameData_21ef3c0;
extern char GameData_21ef400;
extern char GameData_21ef440;
extern char GameData_21ef480;
extern char GameData_21ef4c0;
extern char GameData_21ef500;
extern char GameData_21ef540;
extern char GameData_21ef580;
extern char GameData_21ef5c0;
extern char GameData_21ef600;
extern char GameData_21ef640;
extern char GameData_21ef680;
extern char GameData_21ef6c0;
extern char GameData_21ef700;
extern char GameData_21ef740;
extern char GameData_21ef780;
extern char GameData_21ef7c0;
extern char GameData_21ef800;
extern char GameData_21ef840;
extern char GameData_21ef880;
extern char GameData_21ef8c0;
extern char GameData_21ef900;
extern char GameData_21ef940;
extern char GameData_21ef980;
extern char GameData_21ef9c0;
extern char GameData_21efa00;
extern char GameData_21efa40;
extern char GameData_21efa80;
extern char GameData_21efac0;
extern char GameData_21efb00;
extern char GameData_21efb40;
extern char GameData_21efb80;
extern char GameData_21efbc0;
extern char GameData_21efc00;
extern char GameData_21efc40;
extern char GameData_21efc80;
extern char GameData_21efcc0;
extern char GameData_21efd00;
extern char GameData_21efd40;
extern char GameData_21efd80;
extern char GameData_21efdc0;
extern char GameData_21efe00;
extern char GameData_21efe40;
extern char GameData_21efe80;
extern char GameData_21efec0;
extern char GameData_21eff00;
extern char GameData_21eff40;
extern char GameData_21eff80;
extern char GameData_21effc0;
extern char GameData_21f0000;
extern char GameData_21f0040;
extern char GameData_21f0080;
extern char GameData_21f00c0;
extern char GameData_21f0100;
extern char GameData_21f0140;
extern char GameData_21f0180;
extern char GameData_21f01c0;
extern char GameData_21f0200;
extern char GameData_21f0240;
extern char GameData_21f0280;
extern char GameData_21f02c0;
extern char GameData_21f0300;
extern char GameData_21f0340;
extern char GameData_21f0380;
extern char GameData_21f03c0;
extern char GameData_21f0400;
extern char GameData_21f0440;
extern char GameData_21f0480;
extern char GameData_21f04c0;
extern char GameData_21f0500;
extern char GameData_21f0540;
extern char GameData_21f0580;
extern char GameData_21f05c0;
extern char GameData_21f0600;
extern char GameData_21f0640;
extern char GameData_21f0680;
extern char GameData_21f06c0;
extern char GameData_21f0700;
extern char GameData_21f0740;
extern char GameData_21f0780;
extern char GameData_21f07c0;
extern char GameData_21f0800;
extern char GameData_21f0840;
extern char GameData_21f0880;
extern char GameData_21f08c0;
extern char GameData_21f0900;
extern char GameData_21f0940;
extern char GameData_21f0980;
extern char GameData_21f09c0;
extern char GameData_21f0a00;
extern char GameData_21f0a40;
extern char GameData_21f0a80;
extern char GameData_21f0ac0;
extern char GameData_21f0b00;
extern char GameData_21f0b40;
extern char GameData_21f0b80;
extern char GameData_21f0bc0;
extern char GameData_21f0c00;
extern char GameData_21f0c40;
extern char GameData_21f0c80;
extern char GameData_21f0cc0;
extern char GameData_21f0d00;
extern char GameData_21f0d40;
extern char GameData_21f0d80;
extern char GameData_21f0dc0;
extern char GameData_21f0e00;
extern char GameData_21f0e40;
extern char GameData_21f0e80;
extern char GameData_21f0ec0;
extern char GameData_21f0f00;
extern char GameData_21f0f40;
extern char GameData_21f0f80;
extern char GameData_21f0fc0;
extern char GameData_21f1000;
extern char GameData_21f1040;
extern char GameData_21f1080;
extern char GameData_21f10c0;
extern char GameData_21f1100;
extern char GameData_21f1140;
extern char GameData_21f1180;
extern char GameData_21f11c0;
extern char GameData_21f1200;
extern char GameData_21f1240;
extern char GameData_21f1280;
extern char GameData_21f12c0;
extern char GameData_21f1300;
extern char GameData_21f1dd8[];
extern char GameData_2216858;
extern int* GameData_212deb0;
extern int* GameData_212f940[6];
extern int* GameData_212f990[11];
extern int* GameData_212fa18[3];
extern int* GameData_212fa60[3];
extern int* GameData_212fbd8[4];
extern int* GameData_212fc18[7];
extern int* GameData_212fc28[5];
extern int* GameData_212fc48;
extern int* GameData_212fc80[6];
extern int* GameData_21320e0[2];
extern int GameData_21caae0;
extern int GameData_21caaf0;
extern int GameData_21cab20;
extern int GameData_21cab30;
extern int GameData_21cab60;
extern int GameData_21cab70;
extern int GameData_21caba0;
extern int GameData_21cabb0;
extern int GameData_21cabe0;
extern int GameData_21cabf0;
extern int GameData_21cac20;
extern int GameData_21cac30;
extern int GameData_21cac60;
extern int GameData_21cac70;
extern int GameData_21caca0;
extern int GameData_21cacb0;
extern int GameData_21cace0;
extern int GameData_21cacf0;
extern int GameData_21cad20;
extern int GameData_21cad30;
extern int GameData_21cad60;
extern int GameData_21cad70;
extern int GameData_21cada0;
extern int GameData_21cadb0;
extern int GameData_21cade0;
extern int GameData_21cadf0;
extern int GameData_21cae20;
extern int GameData_21cae30;
extern int GameData_21cae60;
extern int GameData_21cae70;
extern int GameData_21caea0;
extern int GameData_21caeb0;
extern int GameData_21caee0;
extern int GameData_21caef0;
extern int GameData_21caf20;
extern int GameData_21caf30;
extern int GameData_21caf60;
extern int GameData_21caf70;
extern int GameData_21cafa0;
extern int GameData_21cafb0;
extern int GameData_21cafe0;
extern int GameData_21caff0;
extern int GameData_21cb020;
extern int GameData_21cb030;
extern int GameData_21cb060;
extern int GameData_21cb070;
extern int GameData_21cb0a0;
extern int GameData_21cb0b0;
extern int GameData_21cb0e0;
extern int GameData_21cb0f0;
extern int GameData_21cb120;
extern int GameData_21cb130;
extern int GameData_21cb160;
extern int GameData_21cb170;
extern int GameData_21cb1a0;
extern int GameData_21cb1b0;
extern int GameData_21cb1e0;
extern int GameData_21cb1f0;
extern int GameData_21cb220;
extern int GameData_21cb230;
extern int GameData_21cb260;
extern int GameData_21cb270;
extern int GameData_21cb2a0;
extern int GameData_21cb2b0;
extern int GameData_21cb2e0;
extern int GameData_21cb2f0;
extern int GameData_21cb320;
extern int GameData_21cb330;
extern int GameData_21cb360;
extern int GameData_21cb370;
extern int GameData_21cb3a0;
extern int GameData_21cb3b0;
extern int GameData_21cb3e0;
extern int GameData_21cb3f0;
extern int GameData_21cb420;
extern int GameData_21cb430;
extern int GameData_21cb460;
extern int GameData_21cb470;
extern int GameData_21cb4a0;
extern int GameData_21cb4b0;
extern int GameData_21cb4e0;
extern int GameData_21cb4f0;
extern int GameData_21cb520;
extern int GameData_21cb530;
extern int GameData_21cb560;
extern int GameData_21cb570;
extern int GameData_21cb5a0;
extern int GameData_21cb5b0;
extern int GameData_21cb5e0;
extern int GameData_21cb5f0;
extern int GameData_21cb620;
extern int GameData_21cb630;
extern int GameData_21cb660;
extern int GameData_21cb670;
extern int GameData_21cb6a0;
extern int GameData_21cb6b0;
extern int GameData_21cb6e0;
extern int GameData_21cb6f0;
extern int GameData_21cb720;
extern int GameData_21cb730;
extern int GameData_21cb760;
extern int GameData_21cb770;
extern int GameData_21cb7a0;
extern int GameData_21cb7b0;
extern int GameData_21cb7e0;
extern int GameData_21cb7f0;
extern int GameData_21cb820;
extern int GameData_21cb830;
extern int GameData_21cb860;
extern int GameData_21cb870;
extern int GameData_21cb8a0;
extern int GameData_21cb8b0;
extern int GameData_21cb8e0;
extern int GameData_21cb8f0;
extern int GameData_21cb920;
extern int GameData_21cb930;
extern int GameData_21cb960;
extern int GameData_21cb970;
extern int GameData_21cb9a0;
extern int GameData_21cb9b0;
extern int GameData_21cb9e0;
extern int GameData_21cb9f0;
extern int GameData_21cba20;
extern int GameData_21cba30;
extern int GameData_21cba60;
extern int GameData_21cba70;
extern int GameData_21cbaa0;
extern int GameData_21cbab0;
extern int GameData_21cbae0;
extern int GameData_21cbaf0;
extern int GameData_21cbb20;
extern int GameData_21cbb30;
extern int GameData_21cbb60;
extern int GameData_21cbb70;
extern int GameData_21cbba0;
extern int GameData_21cbbb0;
extern int GameData_21cbbe0;
extern int GameData_21cbbf0;
extern int GameData_21cbc20;
extern int GameData_21cbc30;
extern int GameData_21cbc60;
extern int GameData_21cbc70;
extern int GameData_21cbca0;
extern int GameData_21cbcb0;
extern int GameData_21cbce0;
extern int GameData_21cbcf0;
extern int GameData_21cbd20;
extern int GameData_21cbd30;
extern int GameData_21cbd60;
extern int GameData_21cbd70;
extern int GameData_21cbda0;
extern int GameData_21cbdb0;
extern int GameData_21cbde0;
extern int GameData_21cbdf0;
extern int GameData_21cbe20;
extern int GameData_21cbe30;
extern int GameData_21cbe60;
extern int GameData_21cbe70;
extern int GameData_21cbea0;
extern int GameData_21cbeb0;
extern int GameData_21cbee0;
extern int GameData_21cbef0;
extern int GameData_21cbf20;
extern int GameData_21cbf30;
extern int GameData_21cbf60;
extern int GameData_21cbf70;
extern int GameData_21cbfa0;
extern int GameData_21cbfb0;
extern int GameData_21cbfe0;
extern int GameData_21cbff0;
extern int GameData_21cc020;
extern int GameData_21cc030;
extern int GameData_21cc060;
extern int GameData_21cc070;
extern int GameData_21cc0a0;
extern int GameData_21cc0b0;
extern int GameData_21cc0e0;
extern int GameData_21cc0f0;
extern int GameData_21cc120;
extern int GameData_21cc130;
extern int GameData_21cc160;
extern int GameData_21cc170;
extern int GameData_21cc1a0;
extern int GameData_21cc1b0;
extern int GameData_21cc1e0;
extern int GameData_21cc1f0;
extern int GameData_21cc220;
extern int GameData_21cc230;
extern int GameData_21cc260;
extern int GameData_21cc270;
extern int GameData_21cc2a0;
extern int GameData_21cc2b0;
extern int GameData_21cc2e0;
extern int GameData_21cc2f0;
extern int GameData_21cc320;
extern int GameData_21cc330;
extern int GameData_21cc360;
extern int GameData_21cc370;
extern int GameData_21cc3a0;
extern int GameData_21cc3b0;
extern int GameData_21cc3e0;
extern int GameData_21cc3f0;
extern int GameData_21cc420;
extern int GameData_21cc430;
extern int GameData_21cc460;
extern int GameData_21cc470;
extern int GameData_21cc4a0;
extern int GameData_21cc4b0;
extern int GameData_21cc4e0;
extern int GameData_21cc4f0;
extern int GameData_21cc520;
extern int GameData_21cc530;
extern int GameData_21cc560;
extern int GameData_21cc570;
extern int GameData_21cc5a0;
extern int GameData_21cc5b0;
extern int GameData_21cc5e0;
extern int GameData_21cc5f0;
extern int GameData_21cc620;
extern int GameData_21cc630;
extern int GameData_21cc660;
extern int GameData_21cc670;
extern int GameData_21cc6a0;
extern int GameData_21cc6b0;
extern int GameData_21cc6e0;
extern int GameData_21cc6f0;
extern int GameData_21cc720;
extern int GameData_21cc730;
extern int GameData_21cc760;
extern int GameData_21cc770;
extern int GameData_21cc7a0;
extern int GameData_21cc7b0;
extern int GameData_21cc7e0;
extern int GameData_21cc7f0;
extern int GameData_21cc820;
extern int GameData_21cc830;
extern int GameData_21cc860;
extern int GameData_21cc870;
extern int GameData_21cc8a0;
extern int GameData_21cc8b0;
extern int GameData_21cc8e0;
extern int GameData_21cc8f0;
extern int GameData_21cc920;
extern int GameData_21cc930;
extern int GameData_21cc960;
extern int GameData_21cc970;
extern int GameData_21cc9a0;
extern int GameData_21cc9b0;
extern int GameData_21cc9e0;
extern int GameData_21cc9f0;
extern int GameData_21cca20;
extern int GameData_21cca30;
extern int GameData_21cca60;
extern int GameData_21cca70;
extern int GameData_21ccaa0;
extern int GameData_21ccab0;
extern int GameData_21ccae0;
extern int GameData_21ccaf0;
extern int GameData_21ccb20;
extern int GameData_21ccb30;
extern int GameData_21ccb60;
extern int GameData_21ccb70;
extern int GameData_21ccba0;
extern int GameData_21ccbb0;
extern int GameData_21ccbe0;
extern int GameData_21ccbf0;
extern int GameData_21ccc20;
extern int GameData_21ccc30;
extern int GameData_21ccc60;
extern int GameData_21ccc70;
extern int GameData_21ccca0;
extern int GameData_21cccb0;
extern int GameData_21ccce0;
extern int GameData_21cccf0;
extern int GameData_21ccd20;
extern int GameData_21ccd30;
extern int GameData_21ccd60;
extern int GameData_21ccd70;
extern int GameData_21ccda0;
extern int GameData_21ccdb0;
extern int GameData_21ccde0;
extern int GameData_21ccdf0;
extern int GameData_21cce20;
extern int GameData_21cce30;
extern int GameData_21cce60;
extern int GameData_21cce70;
extern int GameData_21ccea0;
extern int GameData_21cceb0;
extern int GameData_21ccee0;
extern int GameData_21ccef0;
extern int GameData_21ccf20;
extern int GameData_21ccf30;
extern int GameData_21ccf60;
extern int GameData_21ccf70;
extern int GameData_21ccfa0;
extern int GameData_21ccfb0;
extern int GameData_21ccfe0;
extern int GameData_21ccff0;
extern int GameData_21cd020;
extern int GameData_21cd030;
extern int GameData_21cd060;
extern int GameData_21cd070;
extern int GameData_21cd0a0;
extern int GameData_21cd0b0;
extern int GameData_21d92dc;
extern int GameData_21d92e0;
extern int GameData_21ef1e0;
extern int GameData_21ef1f0;
extern int GameData_21ef220;
extern int GameData_21ef230;
extern int GameData_21ef260;
extern int GameData_21ef270;
extern int GameData_21ef2a0;
extern int GameData_21ef2b0;
extern int GameData_21ef2e0;
extern int GameData_21ef2f0;
extern int GameData_21ef320;
extern int GameData_21ef330;
extern int GameData_21ef360;
extern int GameData_21ef370;
extern int GameData_21ef3a0;
extern int GameData_21ef3b0;
extern int GameData_21ef3e0;
extern int GameData_21ef3f0;
extern int GameData_21ef420;
extern int GameData_21ef430;
extern int GameData_21ef460;
extern int GameData_21ef470;
extern int GameData_21ef4a0;
extern int GameData_21ef4b0;
extern int GameData_21ef4e0;
extern int GameData_21ef4f0;
extern int GameData_21ef520;
extern int GameData_21ef530;
extern int GameData_21ef560;
extern int GameData_21ef570;
extern int GameData_21ef5a0;
extern int GameData_21ef5b0;
extern int GameData_21ef5e0;
extern int GameData_21ef5f0;
extern int GameData_21ef620;
extern int GameData_21ef630;
extern int GameData_21ef660;
extern int GameData_21ef670;
extern int GameData_21ef6a0;
extern int GameData_21ef6b0;
extern int GameData_21ef6e0;
extern int GameData_21ef6f0;
extern int GameData_21ef720;
extern int GameData_21ef730;
extern int GameData_21ef760;
extern int GameData_21ef770;
extern int GameData_21ef7a0;
extern int GameData_21ef7b0;
extern int GameData_21ef7e0;
extern int GameData_21ef7f0;
extern int GameData_21ef820;
extern int GameData_21ef830;
extern int GameData_21ef860;
extern int GameData_21ef870;
extern int GameData_21ef8a0;
extern int GameData_21ef8b0;
extern int GameData_21ef8e0;
extern int GameData_21ef8f0;
extern int GameData_21ef920;
extern int GameData_21ef930;
extern int GameData_21ef960;
extern int GameData_21ef970;
extern int GameData_21ef9a0;
extern int GameData_21ef9b0;
extern int GameData_21ef9e0;
extern int GameData_21ef9f0;
extern int GameData_21efa20;
extern int GameData_21efa30;
extern int GameData_21efa60;
extern int GameData_21efa70;
extern int GameData_21efaa0;
extern int GameData_21efab0;
extern int GameData_21efae0;
extern int GameData_21efaf0;
extern int GameData_21efb20;
extern int GameData_21efb30;
extern int GameData_21efb60;
extern int GameData_21efb70;
extern int GameData_21efba0;
extern int GameData_21efbb0;
extern int GameData_21efbe0;
extern int GameData_21efbf0;
extern int GameData_21efc20;
extern int GameData_21efc30;
extern int GameData_21efc60;
extern int GameData_21efc70;
extern int GameData_21efca0;
extern int GameData_21efcb0;
extern int GameData_21efce0;
extern int GameData_21efcf0;
extern int GameData_21efd20;
extern int GameData_21efd30;
extern int GameData_21efd60;
extern int GameData_21efd70;
extern int GameData_21efda0;
extern int GameData_21efdb0;
extern int GameData_21efde0;
extern int GameData_21efdf0;
extern int GameData_21efe20;
extern int GameData_21efe30;
extern int GameData_21efe60;
extern int GameData_21efe70;
extern int GameData_21efea0;
extern int GameData_21efeb0;
extern int GameData_21efee0;
extern int GameData_21efef0;
extern int GameData_21eff20;
extern int GameData_21eff30;
extern int GameData_21eff60;
extern int GameData_21eff70;
extern int GameData_21effa0;
extern int GameData_21effb0;
extern int GameData_21effe0;
extern int GameData_21efff0;
extern int GameData_21f0020;
extern int GameData_21f0030;
extern int GameData_21f0060;
extern int GameData_21f0070;
extern int GameData_21f00a0;
extern int GameData_21f00b0;
extern int GameData_21f00e0;
extern int GameData_21f00f0;
extern int GameData_21f0120;
extern int GameData_21f0130;
extern int GameData_21f0160;
extern int GameData_21f0170;
extern int GameData_21f01a0;
extern int GameData_21f01b0;
extern int GameData_21f01e0;
extern int GameData_21f01f0;
extern int GameData_21f0220;
extern int GameData_21f0230;
extern int GameData_21f0260;
extern int GameData_21f0270;
extern int GameData_21f02a0;
extern int GameData_21f02b0;
extern int GameData_21f02e0;
extern int GameData_21f02f0;
extern int GameData_21f0320;
extern int GameData_21f0330;
extern int GameData_21f0360;
extern int GameData_21f0370;
extern int GameData_21f03a0;
extern int GameData_21f03b0;
extern int GameData_21f03e0;
extern int GameData_21f03f0;
extern int GameData_21f0420;
extern int GameData_21f0430;
extern int GameData_21f0460;
extern int GameData_21f0470;
extern int GameData_21f04a0;
extern int GameData_21f04b0;
extern int GameData_21f04e0;
extern int GameData_21f04f0;
extern int GameData_21f0520;
extern int GameData_21f0530;
extern int GameData_21f0560;
extern int GameData_21f0570;
extern int GameData_21f05a0;
extern int GameData_21f05b0;
extern int GameData_21f05e0;
extern int GameData_21f05f0;
extern int GameData_21f0620;
extern int GameData_21f0630;
extern int GameData_21f0660;
extern int GameData_21f0670;
extern int GameData_21f06a0;
extern int GameData_21f06b0;
extern int GameData_21f06e0;
extern int GameData_21f06f0;
extern int GameData_21f0720;
extern int GameData_21f0730;
extern int GameData_21f0760;
extern int GameData_21f0770;
extern int GameData_21f07a0;
extern int GameData_21f07b0;
extern int GameData_21f07e0;
extern int GameData_21f07f0;
extern int GameData_21f0820;
extern int GameData_21f0830;
extern int GameData_21f0860;
extern int GameData_21f0870;
extern int GameData_21f08a0;
extern int GameData_21f08b0;
extern int GameData_21f08e0;
extern int GameData_21f08f0;
extern int GameData_21f0920;
extern int GameData_21f0930;
extern int GameData_21f0960;
extern int GameData_21f0970;
extern int GameData_21f09a0;
extern int GameData_21f09b0;
extern int GameData_21f09e0;
extern int GameData_21f09f0;
extern int GameData_21f0a20;
extern int GameData_21f0a30;
extern int GameData_21f0a60;
extern int GameData_21f0a70;
extern int GameData_21f0aa0;
extern int GameData_21f0ab0;
extern int GameData_21f0ae0;
extern int GameData_21f0af0;
extern int GameData_21f0b20;
extern int GameData_21f0b30;
extern int GameData_21f0b60;
extern int GameData_21f0b70;
extern int GameData_21f0ba0;
extern int GameData_21f0bb0;
extern int GameData_21f0be0;
extern int GameData_21f0bf0;
extern int GameData_21f0c20;
extern int GameData_21f0c30;
extern int GameData_21f0c60;
extern int GameData_21f0c70;
extern int GameData_21f0ca0;
extern int GameData_21f0cb0;
extern int GameData_21f0ce0;
extern int GameData_21f0cf0;
extern int GameData_21f0d20;
extern int GameData_21f0d30;
extern int GameData_21f0d60;
extern int GameData_21f0d70;
extern int GameData_21f0da0;
extern int GameData_21f0db0;
extern int GameData_21f0de0;
extern int GameData_21f0df0;
extern int GameData_21f0e20;
extern int GameData_21f0e30;
extern int GameData_21f0e60;
extern int GameData_21f0e70;
extern int GameData_21f0ea0;
extern int GameData_21f0eb0;
extern int GameData_21f0ee0;
extern int GameData_21f0ef0;
extern int GameData_21f0f20;
extern int GameData_21f0f30;
extern int GameData_21f0f60;
extern int GameData_21f0f70;
extern int GameData_21f0fa0;
extern int GameData_21f0fb0;
extern int GameData_21f0fe0;
extern int GameData_21f0ff0;
extern int GameData_21f1020;
extern int GameData_21f1030;
extern int GameData_21f1060;
extern int GameData_21f1070;
extern int GameData_21f10a0;
extern int GameData_21f10b0;
extern int GameData_21f10e0;
extern int GameData_21f10f0;
extern int GameData_21f1120;
extern int GameData_21f1130;
extern int GameData_21f1160;
extern int GameData_21f1170;
extern int GameData_21f11a0;
extern int GameData_21f11b0;
extern int GameData_21f11e0;
extern int GameData_21f11f0;
extern int GameData_21f1220;
extern int GameData_21f1230;
extern int GameData_21f1260;
extern int GameData_21f1270;
extern int GameData_21f12a0;
extern int GameData_21f12b0;
extern int GameData_21f12e0;
extern int GameData_21f12f0;
extern int GameData_21f1320;
extern int GameData_21f1330;
extern int GameData_21f2308;
extern int GameData_21f230c;
extern int GameData_21fa960;
float fmodf(float, float);
int __cxa_guard_acquire(__int64);
int strcmp(const char*, const char*);
unsigned __int64 strlen(const char*);
void GameHr_8679c0();
void GameHr_a5aca0(__int64);
void GameHr_d5a560(__int64, __int64*, __int64, __int64, unsigned int);
void GameRoutine_15446c0(__int64*, const char***);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameSubquestData_125a000(__int64, __int64*, char);
void GameSubquestData_125a860(__int64, __int64*);
void GameSubquestData_125abc0(__int64, __int64*, char);
void GameSubquestData_125b0c0(__int64, __int64*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_8123d0();
void __attribute__((noreturn)) GameRoutine_919020();
void __attribute__((noreturn)) GameRoutine_9baea0();
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void game_18c3020(__int64);
void game_18c3220(__int64);
void game_9a3bc0(int, const char*);
void game_d58e20(__int64, int, __int64*, int);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c910(__int64, int);
void game_5c2180(float a1, float a2, __int64 a3, float32x4_t* a4, __int64 a5,
                 float32x4_t* a6, float* a7);
void game_665510();
__int64 game_7213b0(__int64 a1);
__int64 game_87de80(__int64 a1, char*** a2);
void game_9b9cb0(__int64 a1, float32x4_t* a2, float32x4_t* a3);
__int64 game_a0c630(_QWORD* a1);
__int64 game_ca8780(__int64 a1);
__attribute__((swiftcall)) void game_cfe0c0(PSEUDO_X8 x8_, __int64 a1,
                                            float32x4_t* a2, float32x4_t* a3);
void game_d58680(__int64 a1, __int64* a2, __int64* a3);
__int64 game_e62400(__int64 result);
__attribute__((swiftcall)) void game_f4ec40(PSEUDO_X8 x8_, _QWORD* a1,
                                            __int64 a2, __int64* a3,
                                            __int64* a4, float a6_bits_);
__int64 game_ffc660(unsigned int a1, char* a2);
__int64 game_100ef00(__int64 result);
__attribute__((swiftcall)) void game_108e3e0(PSEUDO_X8 x8_, __int64 a1,
                                             char* a2, char* a3, int a4,
                                             char a5, float a7_bits_);
__int64 game_109e190(float32x4_t* a1, int8x16_t* a2);
void game_1107040(float32x4_t* a1, _DWORD* a2, double a3, int32x2_t a4);
void game_11073c0(float32x4_t* a1, _DWORD* a2, double a3, int32x2_t a4);
__int64 game_111ef70(__int64 a1, __int64 a2, ...);
__int64 game_11c4a00(__int64 result, __int64 a2, float a3);
bool game_1214620(_DWORD* a1, int* a2);
void game_156c910(__int64 result, char* a2, int a3, ...);
bool game_1732160(_DWORD* a1, int* a2);

void game_5c2180(float a1, float a2, __int64 a3, float32x4_t* a4, __int64 a5,
                 float32x4_t* a6, float* a7)
{
  float32x4_t v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  unsigned int v17;
  float v18;
  float32x4_t* v19;
  float* v20;
  __int64 v21;
  float v22;
  __int64 v23;
  float v24;
  float32x4_t v25;
  _BYTE* v26;
  float v27;
  __int64 v28;
  float v29;
  __int64 v30;
  float32x4_t v31;
  float32x4_t v32;
  unsigned int v33;
  float* v34;
  float v35;
  float v36;
  float v37;
  float v38;
  int v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  bool v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;

  v7 = *a6;
  v8 = *a4;
  LANES128(v11).n128_u32[0] = *(unsigned __int32*)&(*a6);
  *a4 = v11;
  v9 = *a6;
  LANES128(v11).n128_u32[1] = HIDWORD(LANES128(*(a6)).n128_u64[0]);
  *a4 = v11;
  v10 = *a6;
  LANES128(v11).n128_u64[1] = (unsigned int)LANES128(*(a6)).n128_u64[1];
  *a4 = v11;
  v12 = *(_QWORD*)(a5 + 24);
  if (v12 != 0) {
    v13 = *(unsigned int*)(v12 + 32);
    if ((int)v13 >= 2) {
      v14 = *(_QWORD*)(a5 + 16);
      if (*(_BYTE*)(v14 + 2268) != 0) {
        v15 = *(_DWORD*)(v14 + 2292);
        v16 = v12 + 1456;
        v17 = v13 - 1;
        if (v15 >= 1) {
          {
            __typeof__(a1) z_ = (__typeof__(a1)){0};
            LOBYTE(z_) = *(_BYTE*)(v14 + 2273);
            a1 = z_;
          }
          v18 = a2;
          v19 = a4;
          v20 = a7;
          v21 = a5;
          v22 = fmodf(a2 + (float)((float)(*a7 * (float)LODWORD(a1)) *
                                   (float)v15),
                      (float)v15) /
                (float)v15;
          a2 = v18;
          a5 = v21;
          a7 = v20;
          a4 = v19;
          v23 = v16 + 16LL * v17;
          if (*(float*)(v23 + 12) <= v22) {
          LABEL_6:
            LANES128(v25).n128_u32[0] = *(_DWORD*)v23;
            v24 = *(float*)(v23 + 8);
            LANES128(v25).n128_u32[1] = *(_DWORD*)(v23 + 4);
            goto LABEL_19;
          }
        LABEL_11:
          v27 = *(float*)(v12 + 1468);
          if (v22 >= v27) {
            v28 = v13 + 1;
            while (--v28 != 0) {
              v29 = v27;
              v27 = *(float*)(v16 + 28);
              v30 = v16 + 16;
              v16 += 16;
              if (v29 <= v22) {
                v16 = v30;
                if (v22 < v27) {
                  LANES128(v31).n128_u64[0] = *(_QWORD*)(v30 - 16);
                  LANES128(v31).n128_u64[1] = *(unsigned int*)(v30 - 8);
                  LANES128(v32).n128_u64[0] = *(_QWORD*)v30;
                  LANES128(v32).n128_u64[1] = *(unsigned int*)(v30 + 8);
                  v25 = vaddq_f32(v31, vmulq_n_f32(vsubq_f32(v32, v31),
                                                   (float)(v22 - v29) /
                                                       (float)(v27 - v29)));
                  v24 = LANES128(v25).n128_f32[2];
                  goto LABEL_19;
                }
              }
            }
            v24 = 0x0.0p+0f;
            LANES128(v25).n128_u64[0] = 0;
          }
          else {
            LANES128(v25).n128_u32[0] = *(_DWORD*)(v12 + 1456);
            v24 = *(float*)(v12 + 1464);
            LANES128(v25).n128_u32[1] = *(_DWORD*)(v12 + 1460);
          }
        LABEL_19:
          *(float*)&v33 = vmuls_lane_f32(v24, *a4, 2);
          LANES128(v11).n128_u64[0] = __PAIR64__(
              COERCE_UNSIGNED_INT(vmuls_lane_f32(
                  LANES128(v25).n128_f32[1],
                  COERCE_AS(float32x2_t, LANES128(*(a4)).n128_u64[0]), 1)),
              COERCE_UNSIGNED_INT(
                  vmuls_n_f32(LANES128(v25).n128_f32[0], COERCE_FLOAT(*a4))));
          LANES128(v11).n128_u64[1] = v33;
          *a4 = v11;
          v26 = *(_BYTE**)(a5 + 16);
          if (v26[2533] == 0) {
            return;
          }
        LABEL_20:
          v34 = *(float**)(a5 + 24);
          v35 = v34[36];
          v36 = v34[38];
          v37 = v34[40];
          v38 = v34[42];
          v39 = (unsigned __int8)v26[2535] >> 4;
          if (v39 == 2) {
            v45 = -0x0.0p+0f;
            if ((float)((float)((float)((float)(a2 + v38) / v36) +
                                (float)(v37 * *a7)) -
                        floorf((float)((float)(a2 + v38) / v36) +
                               (float)(v37 * *a7))) < 0x1.0000000000000p-1f) {
              v45 = -0x1.0000000000000p+0f;
            }
            v44 = (float)(v45 * v35) + 0x1.0000000000000p+0f;
          }
          else {
            if (v39 != 1) {
              v40 = 0x1.0000000000000p+0f;
              if (v39 == 0) {
                v41 = (float)((float)((float)(a2 + v38) / v36) +
                              (float)(v37 * *a7)) *
                      0x1.921fb60000000p+1f;
                v42 =
                    (float)(v41 + v41) +
                    (float)(roundf((float)(v41 + v41) * 0x1.45f3060000000p-3f) *
                            -0x1.921fb60000000p+2f);
                if (v42 <= 0x1.921fb60000000p+0f) {
                  v57 = 0x1.0000000000000p+0f;
                  if (v42 >= -0x1.921fb60000000p+0f) {
                    goto LABEL_44;
                  }
                  v43 = -0x1.921fb60000000p+1f;
                }
                else {
                  v43 = 0x1.921fb60000000p+1f;
                }
                v42 = v43 - v42;
                v57 = -0x1.0000000000000p+0f;
              LABEL_44:
                v58 = v42 * v42;
                v40 =
                    (float)((
                                float)((
                                           float)((float)(PSEUDO_UNFUSED(
                                                      v57 * (float)((float)((float)-(
                                                                                float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188) - (float)((float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4) + (float)((float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188) - (float)((float)(*((float*)
                                                                                                                                                                                                                                                                                                                                                                  GameData_212c188 +
                                                                                                                                                                                                                                                                                                                                                              1) -
                                                                                                                                                                                                                                                                                                                                                            (float)(*(float*)
                                                                                                                                                                                                                                                                                                                                                                        GameData_212c188 *
                                                                                                                                                                                                                                                                                                                                                                    v58)) *
                                                                                                                                                                                                                                                                                                                                                    v58)) *
                                                                                                                                                                                                                                                         v58)) *
                                                                                                                                                                  v58)) *
                                                                            v58) +
                                                                    0x1.0000000000000p+0f))) +
                                                  0x1.0000000000000p+0f) *
                                       -0x1.0000000000000p-1f) *
                            v35) +
                    0x1.0000000000000p+0f;
                v46 = v40;
                if (v26[2534] == 0) {
                  goto LABEL_50;
                }
                goto LABEL_31;
              }
            LABEL_30:
              v46 = v40;
              if (v26[2534] == 0) {
                goto LABEL_50;
              }
            LABEL_31:
              v47 = v34[37];
              v48 = v34[39];
              v49 = v34[41];
              v50 = v34[43];
              if (v39 == 2) {
                v55 =
                    (float)((float)((float)((float)(a2 + v50) / v48) +
                                    (float)(v49 * *a7)) -
                            floorf((float)((float)(a2 + v50) / v48) +
                                   (float)(v49 * *a7))) < 0x1.0000000000000p-1f;
                v56 = -0x0.0p+0f;
                if (v55) {
                  v56 = -0x1.0000000000000p+0f;
                }
                v54 = (float)(v56 * v47) + 0x1.0000000000000p+0f;
              }
              else {
                if (v39 != 1) {
                  v46 = v40;
                  if (v39 == 0) {
                    v51 = (float)((float)((float)(a2 + v50) / v48) +
                                  (float)(v49 * *a7)) *
                          0x1.921fb60000000p+1f;
                    v52 = (float)(v51 + v51) +
                          (float)(roundf((float)(v51 + v51) *
                                         0x1.45f3060000000p-3f) *
                                  -0x1.921fb60000000p+2f);
                    if (v52 <= 0x1.921fb60000000p+0f) {
                      v59 = 0x1.0000000000000p+0f;
                      if (v52 >= -0x1.921fb60000000p+0f) {
                      LABEL_49:
                        v60 = v52 * v52;
                        v46 =
                            (float)((
                                        float)((
                                                   float)((float)(PSEUDO_UNFUSED(
                                                              v59 * (float)((
                                                                                float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188) - (float)((
                                                                                                                                                                                      float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4) + (float)((float)-(
                                                                                                                                                                                                                                                                                float)(*(
                                                                                                                                                                                                                                                                                           float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)
                                                                                                                                                                                                                                                                                                                                    GameData_212c188) -
                                                                                                                                                                                                                                                                                       (float)((
                                                                                                                                                                                                                                                                                                   float)(*((float*)
                                                                                                                                                                                                                                                                                                                GameData_212c188 +
                                                                                                                                                                                                                                                                                                            1) -
                                                                                                                                                                                                                                                                                                          (float)(*(float*)
                                                                                                                                                                                                                                                                                                                      GameData_212c188 *
                                                                                                                                                                                                                                                                                                                  v60)) *
                                                                                                                                                                                                                                                                                               v60)) *
                                                                                                                                                                                                                                                                            v60)) *
                                                                                                                                                                                  v60)) *
                                                                                       v60) +
                                                                            0x1.0000000000000p+0f))) +
                                                          0x1.0000000000000p+0f) *
                                               -0x1.0000000000000p-1f) *
                                    v47) +
                            0x1.0000000000000p+0f;
                        goto LABEL_50;
                      }
                      v53 = -0x1.921fb60000000p+1f;
                    }
                    else {
                      v53 = 0x1.921fb60000000p+1f;
                    }
                    v52 = v53 - v52;
                    v59 = -0x1.0000000000000p+0f;
                    goto LABEL_49;
                  }
                LABEL_50:
                  v61 = vmuls_lane_f32(
                      v46, COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0]),
                      1);
                  LANES128(v11).n128_f32[0] = v40 * LANES128(v11).n128_f32[0];
                  LANES128(v11).n128_f32[1] = v61;
                  *a4 = v11;
                  return;
                }
                v54 = 0x1.0000000000000p+0f -
                      (float)((float)((float)((float)((float)(a2 + v50) / v48) +
                                              (float)(v49 * *a7)) -
                                      floorf((float)((float)(a2 + v50) / v48) +
                                             (float)(v49 * *a7))) *
                              v47);
              }
              v46 = fabsf(v54);
              goto LABEL_50;
            }
            v44 = 0x1.0000000000000p+0f -
                  (float)((float)((float)((float)((float)(a2 + v38) / v36) +
                                          (float)(v37 * *a7)) -
                                  floorf((float)((float)(a2 + v38) / v36) +
                                         (float)(v37 * *a7))) *
                          v35);
          }
          v40 = fabsf(v44);
          goto LABEL_30;
        }
      }
      else {
        v16 = v12 + 1456;
        v17 = v13 - 1;
      }
      v22 = a2 / a1;
      v23 = v16 + 16LL * v17;
      if (*(float*)(v23 + 12) <= v22) {
        goto LABEL_6;
      }
      goto LABEL_11;
    }
    LANES128(v11).n128_f32[0] =
        *(float*)(v12 + 1456) * LANES128(v7).n128_f32[0];
    *a4 = v11;
    LANES128(v11).n128_u32[1] =
        vmuls_lane_f32(*(float*)(*(_QWORD*)(a5 + 24) + 1460LL),
                       COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]), 1);
    *a4 = v11;
    LANES128(v11).n128_u64[1] = COERCE_UNSIGNED_INT(
        vmuls_lane_f32(*(float*)(*(_QWORD*)(a5 + 24) + 1464LL), v10, 2));
    *a4 = v11;
    v26 = *(_BYTE**)(a5 + 16);
    if (v26[2533] != 0) {
      goto LABEL_20;
    }
  }
}

void game_665510()
{
  struct {
    __int64 v0;
    void* v1;
    __int64 v2;
    __int64 v3;
    char gap32_[8];
    unsigned __int8 v4;
    char gap41_[15];
    int v5;
  } v0_;
  char* v6[2];

  v6[0] = game_util_Format("%s/%s", "000", "Auto");
  v6[1] = (const char*)strlen(v6[0]);
  GameRoutine_878ea0((void*)((__int64)&v0_.v0), v6);
  if ((_BYTE)v0_.v0 != 0 && (v0_.v5 & 0x2000000) != 0) {
    if ((v0_.v5 & 0x8000000) != 0) {
      v0_.v1 = &GameData_1adb26c;
      v0_.v0 = game_HashString((__int64)&GameData_1adb26c);
      game_VariableManager_SetFlag((__int64)&v0_.v0, 1);
    }
    else if ((unsigned int)v0_.v4 - 4 < 4 || v0_.v4 == 2) {
      GameHr_8ab6e0(1, 0);
    }
  }
}

__int64 game_7213b0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  char v9;
  _DWORD* v10;
  __int64 v11;
  int v12;
  __int64 v13;
  float v14;
  double v15;
  __int64 v16;
  __int64 v17;
  _QWORD v19[25];

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21cd0c0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21cd0c0) != 0) {
    GameData_21caac0 = 19;
    GameData_21caae0 = 0;
    GameData_21caae8 = 0;
    GameData_21cabc8 = 0;
    GameData_21cabd0 = (__int64)GameHr_722f60;
    GameData_21caaf0 = 0;
    GameData_21caaf8 = 0;
    GameData_21cab00 = 19;
    GameData_21cab20 = 2;
    GameData_21cab28 = 0;
    GameData_21cab30 = 0;
    GameData_21cab38 = 0;
    GameData_21cab40 = 2;
    GameData_21cab48 = 0;
    GameData_21cab50 = 0;
    GameData_21cab58 = 0;
    GameData_21cab60 = 1;
    GameData_21cab68 = 0;
    GameData_21cab70 = 0;
    GameData_21cac08 = 0;
    GameData_21cac10 = (__int64)GameRoutine_723060;
    GameData_21cab78 = 0;
    GameData_21cab88 = 0;
    GameData_21cab90 = (__int64)GameHr_722f20;
    GameData_21cab98 = 0;
    GameData_21caba0 = 0;
    GameData_21caba8 = 0;
    GameData_21cabb0 = 0;
    GameData_21cabb8 = 0;
    GameData_21cabd8 = 0;
    GameData_21cabe0 = 0;
    GameData_21cac48 = 0;
    GameData_21cac50 = (__int64)GameHr_7230b0;
    GameData_21cabe8 = 0;
    GameData_21cabf0 = 0;
    GameData_21cabf8 = 0;
    GameData_21cac18 = 0;
    GameData_21cac20 = 0;
    GameData_21cac28 = 0;
    GameData_21cac30 = 0;
    GameData_21cac38 = 0;
    GameData_21cac58 = 0;
    GameData_21cac88 = 0;
    GameData_21cac90 = (__int64)game_723200;
    GameData_21caac8 = 0;
    GameData_21caad0 = (__int64)game_80a680_ptr[0];
    GameData_21cac60 = 0;
    GameData_21cac68 = 0;
    GameData_21cac70 = 0;
    GameData_21cac78 = 0;
    GameData_21cac98 = 0;
    GameData_21caca0 = 0;
    GameData_21caca8 = 0;
    GameData_21cacb0 = 0;
    GameData_21cad10 = (__int64)GameHr_724130;
    GameData_21cab08 = 0;
    GameData_21cab10 = (__int64)GameData_212c6e8[0];
    GameData_21cacb8 = 0;
    GameData_21cacc8 = 0;
    GameData_21cacd0 = (__int64)GameRoutine_724110;
    GameData_21cacd8 = 0;
    GameData_21cace0 = 0;
    GameData_21cace8 = 0;
    GameData_21cacf0 = 0;
    GameData_21cad50 = (__int64)GameRoutine_724150;
    GameData_21cab80 = 13;
    GameData_21cabc0 = 13;
    GameData_21cac00 = 13;
    GameData_21cac40 = 13;
    GameData_21cac80 = 13;
    GameData_21cacc0 = 13;
    GameData_21cacf8 = 0;
    GameData_21cad00 = 13;
    GameData_21cad08 = 0;
    GameData_21cad18 = 0;
    GameData_21cad20 = 0;
    GameData_21cad28 = 0;
    GameData_21cad30 = 0;
    GameData_21cad38 = 0;
    GameData_21cad40 = 13;
    GameData_21cad48 = 0;
    GameData_21cad58 = 0;
    GameData_21cad60 = 0;
    GameData_21cad68 = 0;
    GameData_21cad70 = 0;
    GameData_21cad78 = 0;
    GameData_21cad80 = 8;
    GameData_21cada8 = 0;
    GameData_21cadb0 = 0;
    GameData_21cadb8 = 0;
    GameData_21cada0 = 0;
    GameData_21cad98 = 0;
    GameData_21cad90 = 0;
    GameData_21cadc0 = 13;
    GameData_21cadc8 = 0;
    GameData_21cadd8 = 0;
    GameData_21cade0 = 0;
    GameData_21cade8 = 0;
    GameData_21cadf0 = 0;
    GameData_21cadf8 = 0;
    GameData_21cae28 = 0;
    GameData_21cae30 = 0;
    GameData_21cae38 = 0;
    GameData_21cae08 = 0;
    GameData_21cae10 = 0;
    GameData_21cae18 = 0;
    GameData_21cae20 = 0;
    GameData_21cae40 = 13;
    GameData_21cae48 = 0;
    GameData_21cae58 = 0;
    GameData_21cae60 = 0;
    GameData_21cae68 = 0;
    GameData_21cae70 = 0;
    GameData_21cae78 = 0;
    GameData_21cae80 = 13;
    GameData_21cae88 = 0;
    GameData_21cae98 = 0;
    GameData_21caea0 = 0;
    GameData_21caea8 = 0;
    GameData_21caeb0 = 0;
    GameData_21caeb8 = 0;
    GameData_21caec8 = 0;
    GameData_21cad88 = (__int64)GameData_212d048[0];
    GameData_21cadd0 = (__int64)GameRoutine_7241a0;
    GameData_21cae00 = 29;
    GameData_21cae50 = (__int64)GameRoutine_7241e0;
    GameData_21cae90 = (__int64)GameRoutine_724200;
    GameData_21caec0 = 10;
    GameData_21caf10 = (__int64)GameHr_724340;
    GameData_21caee0 = 0;
    GameData_21caee8 = 0;
    GameData_21caef0 = 0;
    GameData_21caef8 = 0;
    GameData_21caf00 = 13;
    GameData_21caf08 = 0;
    GameData_21caf18 = 0;
    GameData_21caf20 = 0;
    GameData_21caf28 = 0;
    GameData_21caf30 = 0;
    GameData_21caf38 = 0;
    GameData_21caf40 = 13;
    GameData_21caf48 = 0;
    GameData_21caf58 = 0;
    GameData_21caf60 = 0;
    GameData_21caf68 = 0;
    GameData_21caf70 = 0;
    GameData_21caf78 = 0;
    GameData_21caf80 = 13;
    GameData_21caf88 = 0;
    GameData_21caf98 = 0;
    GameData_21cafa0 = 0;
    GameData_21cafa8 = 0;
    GameData_21cafb0 = 0;
    GameData_21cafb8 = 0;
    GameData_21cafc0 = 10;
    GameData_21cafc8 = 0;
    GameData_21cafe0 = 0;
    GameData_21cafe8 = 0;
    GameData_21caff0 = 0;
    GameData_21caff8 = 0;
    GameData_21cb000 = 13;
    GameData_21cb008 = 0;
    GameData_21cb018 = 0;
    GameData_21cb020 = 0;
    GameData_21cb028 = 0;
    GameData_21cb030 = 0;
    GameData_21cb038 = 0;
    GameData_21cb040 = 13;
    GameData_21cb048 = 0;
    GameData_21cb058 = 0;
    GameData_21cb060 = 0;
    GameData_21cb068 = 0;
    GameData_21cb070 = 0;
    GameData_21cb078 = 0;
    GameData_21cb0a8 = 0;
    GameData_21cb0b0 = 0;
    GameData_21cb0b8 = 0;
    GameData_21cb0a0 = 0;
    GameData_21cb098 = 0;
    GameData_21cb090 = 0;
    GameData_21cb088 = 0;
    GameData_21cb0c0 = 13;
    GameData_21cb0c8 = 0;
    GameData_21cb0d8 = 0;
    GameData_21cb0e0 = 0;
    GameData_21cb0e8 = 0;
    GameData_21cb0f0 = 0;
    GameData_21cb0f8 = 0;
    GameData_21cb100 = 13;
    GameData_21cb108 = 0;
    GameData_21cb118 = 0;
    GameData_21cb120 = 0;
    GameData_21cb128 = 0;
    GameData_21cb130 = 0;
    GameData_21cb138 = 0;
    GameData_21cb140 = 13;
    GameData_21cb148 = 0;
    GameData_21cb158 = 0;
    GameData_21cb160 = 0;
    GameData_21cb168 = 0;
    GameData_21cb170 = 0;
    GameData_21cb178 = 0;
    GameData_21cb180 = 8;
    GameData_21caf50 = (__int64)game_map_MapEffect_Load;
    GameData_21caf90 = (__int64)GameRoutine_724680;
    GameData_21caed0 = (__int64)MapUtil_7555e0_ptr[0];
    GameData_21cafd0 = (__int64)MapUtil_7555e0_ptr[0];
    GameData_21cb010 = (__int64)GameRoutine_7247d0;
    GameData_21cb050 = (__int64)GameRoutine_724ad0;
    GameData_21cb080 = 31;
    GameData_21cb0d0 = (__int64)game_map_724ae0;
    GameData_21cb110 = (__int64)GameHr_724e30;
    GameData_21cb150 = (__int64)GameRoutine_724e50;
    GameData_21cb1a8 = 0;
    GameData_21cb1b0 = 0;
    GameData_21cb1b8 = 0;
    GameData_21cb1a0 = 0;
    GameData_21cb198 = 0;
    GameData_21cb190 = 0;
    GameData_21cb1c0 = 19;
    GameData_21cb1c8 = 0;
    GameData_21cb188 = (__int64)game_11943c0_ptr[0];
    GameData_21cb210 = (__int64)GameRoutine_724e60;
    GameData_21cb1e0 = 250;
    GameData_21cb1e8 = 0;
    GameData_21cb1f0 = 0;
    GameData_21cb1f8 = 0;
    GameData_21cb200 = 13;
    GameData_21cb208 = 0;
    GameData_21cb218 = 0;
    GameData_21cb220 = 0;
    GameData_21cb228 = 0;
    GameData_21cb230 = 0;
    GameData_21cb238 = 0;
    GameData_21cb240 = 13;
    GameData_21cb248 = 0;
    GameData_21cb258 = 0;
    GameData_21cb260 = 0;
    GameData_21cb268 = 0;
    GameData_21cb270 = 0;
    GameData_21cb278 = 0;
    GameData_21cb280 = 13;
    GameData_21cb288 = 0;
    GameData_21cb298 = 0;
    GameData_21cb2a0 = 0;
    GameData_21cb2a8 = 0;
    GameData_21cb2b0 = 0;
    GameData_21cb2b8 = 0;
    GameData_21cb2c0 = 13;
    GameData_21cb2c8 = 0;
    GameData_21cb2d8 = 0;
    GameData_21cb2e0 = 0;
    GameData_21cb2e8 = 0;
    GameData_21cb2f0 = 0;
    GameData_21cb2f8 = 0;
    GameData_21cb300 = 13;
    GameData_21cb308 = 0;
    GameData_21cb310 = (__int64)GameRoutine_725440;
    GameData_21cb318 = 0;
    GameData_21cb320 = 0;
    GameData_21cb328 = 0;
    GameData_21cb330 = 0;
    GameData_21cb338 = 0;
    GameData_21cb340 = 3;
    GameData_21cb368 = 0;
    GameData_21cb370 = 0;
    GameData_21cb378 = 0;
    GameData_21cb360 = 0;
    GameData_21cb358 = 0;
    GameData_21cb350 = 0;
    GameData_21cb348 = 0;
    GameData_21cb380 = 2;
    GameData_21cb388 = 0;
    GameData_21cb390 = 0;
    GameData_21cb398 = 0;
    GameData_21cb3a0 = 2;
    GameData_21cb3a8 = 0;
    GameData_21cb3b0 = 0;
    GameData_21cb3b8 = 0;
    GameData_21cb3c0 = 13;
    GameData_21cb3c8 = 0;
    GameData_21cb3d8 = 0;
    GameData_21cb3e0 = 0;
    GameData_21cb3e8 = 0;
    GameData_21cb3f0 = 0;
    GameData_21cb3f8 = 0;
    GameData_21cb400 = 19;
    GameData_21cb250 = (__int64)GameRoutine_724ec0;
    GameData_21cb290 = (__int64)GameRoutine_7251a0;
    GameData_21cb2d0 = (__int64)GameRoutine_725300;
    GameData_21cb1d0 = (__int64)GameData_212d060[0];
    GameData_21cb3d0 = (__int64)GameRoutine_7255c0;
    GameData_21cb420 = 1;
    GameData_21cb610 = (__int64)GameHr_725750;
    GameData_21cb710 = (__int64)GameHr_725750;
    GameData_21cb590 = (__int64)GameRoutine_725710;
    GameData_21cb6a0 = 3;
    GameData_21cb6d0 = (__int64)GameRoutine_725710;
    GameData_21cb418 = 0;
    GameData_21cb410 = 0;
    GameData_21cb428 = 0;
    GameData_21cb430 = 0;
    GameData_21cb438 = 0;
    GameData_21cb440 = 13;
    GameData_21cb448 = 0;
    GameData_21cb458 = 0;
    GameData_21cb460 = 0;
    GameData_21cb468 = 0;
    GameData_21cb470 = 0;
    GameData_21cb478 = 0;
    GameData_21cb480 = 13;
    GameData_21cb488 = 0;
    GameData_21cb498 = 0;
    GameData_21cb4a0 = 0;
    GameData_21cb4a8 = 0;
    GameData_21cb4b0 = 0;
    GameData_21cb4b8 = 0;
    GameData_21cb4c0 = 13;
    GameData_21cb4c8 = 0;
    GameData_21cb4d8 = 0;
    GameData_21cb4e0 = 0;
    GameData_21cb4e8 = 0;
    GameData_21cb4f0 = 0;
    GameData_21cb4f8 = 0;
    GameData_21cb500 = 13;
    GameData_21cb508 = 0;
    GameData_21cb518 = 0;
    GameData_21cb520 = 0;
    GameData_21cb528 = 0;
    GameData_21cb530 = 0;
    GameData_21cb538 = 0;
    GameData_21cb540 = 13;
    GameData_21cb548 = 0;
    GameData_21cb550 = (__int64)GameRoutine_725440;
    GameData_21cb558 = 0;
    GameData_21cb560 = 0;
    GameData_21cb568 = 0;
    GameData_21cb570 = 0;
    GameData_21cb578 = 0;
    GameData_21cb580 = 13;
    GameData_21cb588 = 0;
    GameData_21cb598 = 0;
    GameData_21cb5a0 = 0;
    GameData_21cb5a8 = 0;
    GameData_21cb5b0 = 0;
    GameData_21cb5b8 = 0;
    GameData_21cb5c0 = 13;
    GameData_21cb5c8 = 0;
    GameData_21cb5d8 = 0;
    GameData_21cb5e0 = 0;
    GameData_21cb5e8 = 0;
    GameData_21cb5f0 = 0;
    GameData_21cb5f8 = 0;
    GameData_21cb600 = 13;
    GameData_21cb608 = 0;
    GameData_21cb618 = 0;
    GameData_21cb620 = 0;
    GameData_21cb628 = 0;
    GameData_21cb630 = 0;
    GameData_21cb638 = 0;
    GameData_21cb658 = 0;
    GameData_21cb650 = 0;
    GameData_21cb648 = 0;
    GameData_21cb668 = 0;
    GameData_21cb670 = 0;
    GameData_21cb678 = 0;
    GameData_21cb680 = 2;
    GameData_21cb688 = 0;
    GameData_21cb690 = 0;
    GameData_21cb698 = 0;
    GameData_21cb6a8 = 0;
    GameData_21cb6b0 = 0;
    GameData_21cb6b8 = 0;
    GameData_21cb6c0 = 13;
    GameData_21cb6c8 = 0;
    GameData_21cb6d8 = 0;
    GameData_21cb6e0 = 0;
    GameData_21cb6e8 = 0;
    GameData_21cb6f0 = 0;
    GameData_21cb6f8 = 0;
    GameData_21cb700 = 13;
    GameData_21cb708 = 0;
    GameData_21cb718 = 0;
    GameData_21cb720 = 0;
    GameData_21cb728 = 0;
    GameData_21cb730 = 0;
    GameData_21cb738 = 0;
    GameData_21cb740 = 13;
    GameData_21cb748 = 0;
    GameData_21cb758 = 0;
    GameData_21cb760 = 0;
    GameData_21cb768 = 0;
    GameData_21cb770 = 0;
    GameData_21cb778 = 0;
    GameData_21cb798 = 0;
    GameData_21cb790 = 0;
    GameData_21cb788 = 0;
    GameData_21cb7a8 = 0;
    GameData_21cb7b0 = 0;
    GameData_21cb7b8 = 0;
    GameData_21cb7c0 = 2;
    GameData_21cb7c8 = 0;
    GameData_21cb7d0 = 0;
    GameData_21cb7d8 = 0;
    GameData_21cb7e8 = 0;
    GameData_21cb7f0 = 0;
    GameData_21cb7f8 = 0;
    GameData_21cb800 = 13;
    GameData_21cb808 = 0;
    GameData_21cb818 = 0;
    GameData_21cb820 = 0;
    GameData_21cb828 = 0;
    GameData_21cb830 = 0;
    GameData_21cb838 = 0;
    GameData_21cb840 = 13;
    GameData_21cb848 = 0;
    GameData_21cb858 = 0;
    GameData_21cb860 = 0;
    GameData_21cb868 = 0;
    GameData_21cb870 = 0;
    GameData_21cb878 = 0;
    GameData_21cb880 = 13;
    GameData_21cb888 = 0;
    GameData_21cb898 = 0;
    GameData_21cb450 = (__int64)GameRoutine_7255f0;
    GameData_21cb810 = (__int64)GameRoutine_725920;
    GameData_21cb750 = (__int64)GameRoutine_725800;
    GameData_21cb7a0 = 17;
    GameData_21cb8a0 = 0;
    GameData_21cb8a8 = 0;
    GameData_21cb490 = (__int64)GameHr_725610;
    GameData_21cb850 = (__int64)GameRoutine_725b00;
    GameData_21cb4d0 = (__int64)GameRoutine_725640;
    GameData_21cb890 = (__int64)GameRoutine_725b40;
    GameData_21cb510 = (__int64)GameRoutine_725660;
    GameData_21cb8e0 = 7;
    GameData_21cb408 = (__int64)Tutorial_f9a8c0_ptr[0];
    GameData_21cb5d0 = (__int64)GameRoutine_725730;
    GameData_21cb660 = 6;
    GameData_21cb7e0 = 6;
    GameData_21cbd00 = 12;
    GameData_21cb640 = 12;
    GameData_21cb780 = 12;
    GameData_21cbd40 = 2;
    GameData_21cbd60 = 5;
    GameData_21cbd80 = 8;
    GameData_21cc040 = 26;
    GameData_21cc0f0 = 0;
    GameData_21cc898 = 0;
    GameData_21cc890 = 0;
    GameData_21cc838 = 0;
    GameData_21cc848 = 0;
    GameData_21cc850 = 0;
    GameData_21cc858 = 0;
    GameData_21cc868 = 0;
    GameData_21cc870 = 0;
    GameData_21cc878 = 0;
    GameData_21cc7f0 = 0;
    GameData_21cc7f8 = 0;
    GameData_21cc818 = 0;
    GameData_21cc810 = 0;
    GameData_21cc808 = 0;
    GameData_21cc820 = 17;
    GameData_21cc828 = 0;
    GameData_21cc830 = 0;
    GameData_21cc7a8 = 0;
    GameData_21cc7b0 = 0;
    GameData_21cc7b8 = 0;
    GameData_21cc7c8 = 0;
    GameData_21cc7d8 = 0;
    GameData_21cc7e0 = 0;
    GameData_21cc7e8 = 0;
    GameData_21cc750 = 0;
    GameData_21cc748 = 0;
    GameData_21cc768 = 0;
    GameData_21cc770 = 0;
    GameData_21cc778 = 0;
    GameData_21cc788 = 0;
    GameData_21cc790 = 0;
    GameData_21cc798 = 0;
    GameData_21cc708 = 0;
    GameData_21cc710 = (__int64)GameRoutine_725440;
    GameData_21cc718 = 0;
    GameData_21cc720 = 0;
    GameData_21cc728 = 0;
    GameData_21cc730 = 0;
    GameData_21cc738 = 0;
    GameData_21cc758 = 0;
    GameData_21cc6b0 = 0;
    GameData_21cc6b8 = 0;
    GameData_21cc6c8 = 0;
    GameData_21cc6d8 = 0;
    GameData_21cc6e0 = 0;
    GameData_21cc6e8 = 0;
    GameData_21cc6f0 = 0;
    GameData_21cc6f8 = 0;
    GameData_21cc678 = 0;
    GameData_21cc660 = 0;
    GameData_21cc658 = 0;
    GameData_21cc650 = 0;
    GameData_21cc688 = 0;
    GameData_21cc690 = (__int64)GameRoutine_725440;
    GameData_21cc698 = 0;
    GameData_21cc6a0 = 0;
    GameData_21cc6a8 = 0;
    GameData_21cbd88 = (__int64)GameData_212d080[0];
    GameData_21cbdc0 = 13;
    GameData_21cbe80 = 25;
    GameData_21cc880 = 25;
    GameData_21cc840 = 2;
    GameData_21cc7a0 = 14;
    GameData_21cc760 = 14;
    GameData_21cc860 = 15;
    GameData_21cc7c0 = 13;
    GameData_21cc800 = 12;
    GameData_21cc7d0 = (__int64)GameRoutine_726d10;
    GameData_21cc6c0 = 13;
    GameData_21cc780 = 2;
    GameData_21cc700 = 13;
    GameData_21cc740 = 12;
    GameData_21cc6d0 = (__int64)GameRoutine_726d00;
    GameData_21cc640 = 8;
    GameData_21cc680 = 13;
    GameData_21cc5a0 = 14;
    GameData_21cc608 = 0;
    GameData_21cc610 = (__int64)GameData_212d060[0];
    GameData_21cc620 = 250;
    GameData_21cc628 = 0;
    GameData_21cc630 = 0;
    GameData_21cc638 = 0;
    GameData_21cc668 = 0;
    GameData_21cc670 = 0;
    GameData_21cc5b8 = 0;
    GameData_21cc5c8 = 0;
    GameData_21cc5d0 = 0;
    GameData_21cc5d8 = 0;
    GameData_21cc5e0 = 13;
    GameData_21cc5e8 = 0;
    GameData_21cc5f0 = 0;
    GameData_21cc5f8 = 0;
    GameData_21cc568 = 0;
    GameData_21cc570 = 0;
    GameData_21cc578 = 0;
    GameData_21cc598 = 0;
    GameData_21cc590 = 0;
    GameData_21cc588 = 0;
    GameData_21cc5a8 = 0;
    GameData_21cc5b0 = 0;
    GameData_21cc520 = 0;
    GameData_21cc528 = 0;
    GameData_21cc530 = 0;
    GameData_21cc538 = 0;
    GameData_21cc548 = 0;
    GameData_21cc550 = (__int64)GameRoutine_725440;
    GameData_21cc558 = 0;
    GameData_21cc560 = 0;
    GameData_21cc4d8 = 0;
    GameData_21cc4e0 = 0;
    GameData_21cc4e8 = 0;
    GameData_21cc4f0 = 0;
    GameData_21cc4f8 = 0;
    GameData_21cc508 = 0;
    GameData_21cc518 = 0;
    GameData_21cc498 = 0;
    GameData_21cc4a0 = 0;
    GameData_21cc4a8 = 0;
    GameData_21cc4b0 = 0;
    GameData_21cc4b8 = 0;
    GameData_21cc4c8 = 0;
    GameData_21cc458 = 0;
    GameData_21cc460 = 0;
    GameData_21cc468 = 0;
    GameData_21cc470 = 0;
    GameData_21cc478 = 0;
    GameData_21cc488 = 0;
    GameData_21cc418 = 0;
    GameData_21cc420 = 0;
    GameData_21cc428 = 0;
    GameData_21cc430 = 0;
    GameData_21cc438 = 0;
    GameData_21cc448 = 0;
    GameData_21cc3c8 = 0;
    GameData_21cc3d8 = 0;
    GameData_21cc3e0 = 0;
    GameData_21cc3e8 = 0;
    GameData_21cc3f0 = 0;
    GameData_21cc3f8 = 0;
    GameData_21cc408 = 0;
    GameData_21cc368 = 0;
    GameData_21cc370 = 0;
    GameData_21cc378 = 0;
    GameData_21cc388 = 0;
    GameData_21cc398 = 0;
    GameData_21cc3a0 = 0;
    GameData_21cc3a8 = 0;
    GameData_21cc3b0 = 0;
    GameData_21cc3b8 = 0;
    GameData_21cc318 = 0;
    GameData_21cc320 = 12;
    GameData_21cc328 = 0;
    GameData_21cc330 = 0;
    GameData_21cc338 = 0;
    GameData_21cc348 = 0;
    GameData_21cc350 = (__int64)GameRoutine_724110;
    GameData_21cc358 = 0;
    GameData_21cc360 = 0;
    GameData_21cc1a8 = 0;
    GameData_21cc2d0 = 0;
    GameData_21cc2c8 = 0;
    GameData_21cc2e0 = 17;
    GameData_21cc2e8 = 0;
    GameData_21cc2f0 = 0;
    GameData_21cc2f8 = 0;
    GameData_21cc308 = 0;
    GameData_21cc310 = 0;
    GameData_21cc3c0 = 13;
    GameData_21cc540 = 13;
    GameData_21cc500 = 13;
    GameData_21cc510 = (__int64)GameHr_726cc0;
    GameData_21cc648 = (__int64)GameData_212d090[0];
    GameData_21cc4c0 = 13;
    GameData_21cc5c0 = 2;
    GameData_21cc4d0 = (__int64)GameRoutine_726c50;
    GameData_21cc600 = 19;
    GameData_21cc480 = 13;
    GameData_21cc580 = 12;
    GameData_21cc490 = (__int64)game_map_726a20;
    GameData_21cc390 = (__int64)GameHr_726660;
    GameData_21cc410 = (__int64)GameRoutine_726960;
    GameData_21cc440 = 13;
    GameData_21cc450 = (__int64)GameRoutine_726970;
    GameData_21cc3d0 = (__int64)game_map_726850;
    GameData_21cc400 = 13;
    GameData_21cc380 = 13;
    GameData_21cc340 = 13;
    GameData_21cc0c0 = 13;
    GameData_21cc300 = 2;
    GameData_21cc190 = (__int64)GameHr_726660;
    GameData_21cc288 = 0;
    GameData_21cc2a0 = 0;
    GameData_21cc2a8 = 0;
    GameData_21cc2b0 = 0;
    GameData_21cc2b8 = 0;
    GameData_21cc2d8 = 0;
    GameData_21cc248 = 0;
    GameData_21cc258 = 0;
    GameData_21cc260 = 0;
    GameData_21cc268 = 0;
    GameData_21cc270 = 0;
    GameData_21cc278 = 0;
    GameData_21cc1f8 = 0;
    GameData_21cc208 = 0;
    GameData_21cc218 = 0;
    GameData_21cc220 = 0;
    GameData_21cc228 = 0;
    GameData_21cc230 = 0;
    GameData_21cc238 = 0;
    GameData_21cc1b0 = 0;
    GameData_21cc1b8 = 0;
    GameData_21cc1c8 = 0;
    GameData_21cc1d8 = 0;
    GameData_21cc1e0 = 0;
    GameData_21cc1e8 = 0;
    GameData_21cc1f0 = 0;
    GameData_21cc160 = 0;
    GameData_21cc168 = 0;
    GameData_21cc170 = 0;
    GameData_21cc178 = 0;
    GameData_21cc188 = 0;
    GameData_21cc198 = 0;
    GameData_21cc1a0 = 0;
    GameData_21cc118 = 0;
    GameData_21cc120 = 0;
    GameData_21cc128 = 0;
    GameData_21cc130 = 0;
    GameData_21cc138 = 0;
    GameData_21cc148 = 0;
    GameData_21cc158 = 0;
    GameData_21cc0c8 = 0;
    GameData_21cc0d8 = 0;
    GameData_21cc0e0 = 0;
    GameData_21cc0e8 = 0;
    GameData_21cc0f8 = 0;
    GameData_21cc108 = 0;
    GameData_21cc110 = (__int64)GameRoutine_724110;
    GameData_21cc050 = 0;
    GameData_21cc048 = 0;
    GameData_21cc088 = 0;
    GameData_21cc090 = 0;
    GameData_21cc098 = 0;
    GameData_21cc0a8 = 0;
    GameData_21cc0b0 = 0;
    GameData_21cc0b8 = 0;
    GameData_21cc028 = 0;
    GameData_21cc030 = 0;
    GameData_21cc038 = 0;
    GameData_21cc068 = 0;
    GameData_21cc070 = 0;
    GameData_21cc078 = 0;
    GameData_21cc060 = 0;
    GameData_21cc058 = 0;
    GameData_21cbfe0 = 0;
    GameData_21cbfe8 = 0;
    GameData_21cbff0 = 0;
    GameData_21cbff8 = 0;
    GameData_21cc008 = 0;
    GameData_21cc018 = 0;
    GameData_21cc020 = 0;
    GameData_21cbf98 = 0;
    GameData_21cbfa0 = 0;
    GameData_21cbfa8 = 0;
    GameData_21cbfb0 = 0;
    GameData_21cbfb8 = 0;
    GameData_21cbfc8 = 0;
    GameData_21cbfd8 = 0;
    GameData_21cbf58 = 0;
    GameData_21cbf50 = 0;
    GameData_21cbf48 = 0;
    GameData_21cbf60 = 10;
    GameData_21cbf68 = 0;
    GameData_21cbf70 = 0;
    GameData_21cbf78 = 0;
    GameData_21cbf88 = 0;
    GameData_21cbef0 = 0;
    GameData_21cbef8 = 0;
    GameData_21cbf18 = 0;
    GameData_21cbf10 = 0;
    GameData_21cbf08 = 0;
    GameData_21cbf20 = 6;
    GameData_21cbf28 = 0;
    GameData_21cbf30 = 0;
    GameData_21cbf38 = 0;
    GameData_21cbea0 = 10;
    GameData_21cbea8 = 0;
    GameData_21cbeb0 = 0;
    GameData_21cbeb8 = 0;
    GameData_21cbec8 = 0;
    GameData_21cbed8 = 0;
    GameData_21cbee0 = 0;
    GameData_21cbee8 = 0;
    GameData_21cbe58 = 0;
    GameData_21cbe50 = 0;
    GameData_21cbe48 = 0;
    GameData_21cbe68 = 0;
    GameData_21cbe70 = 0;
    GameData_21cbe78 = 0;
    GameData_21cbe98 = 0;
    GameData_21cbe90 = 0;
    GameData_21cbe88 = 0;
    GameData_21cb8b0 = 0;
    GameData_21cbde0 = 0;
    GameData_21cbde8 = 0;
    GameData_21cbdf0 = 0;
    GameData_21cbdf8 = 0;
    GameData_21cbe18 = 0;
    GameData_21cbe10 = 0;
    GameData_21cbe08 = 0;
    GameData_21cbe28 = 0;
    GameData_21cbe30 = 0;
    GameData_21cbe38 = 0;
    GameData_21cb8b8 = 0;
    GameData_21cb8c0 = 2;
    GameData_21cb8d8 = 0;
    GameData_21cbda8 = 0;
    GameData_21cbdb0 = 0;
    GameData_21cbdb8 = 0;
    GameData_21cbda0 = 0;
    GameData_21cbd98 = 0;
    GameData_21cbd90 = 0;
    GameData_21cbdc8 = 0;
    GameData_21cbdd0 = (__int64)GameRoutine_725440;
    GameData_21cbdd8 = 0;
    GameData_21cb8d0 = 0;
    GameData_21cb8c8 = 0;
    GameData_21cb8e8 = 0;
    GameData_21cbd28 = 0;
    GameData_21cbd30 = 0;
    GameData_21cbd38 = 0;
    GameData_21cbd58 = 0;
    GameData_21cbd50 = 0;
    GameData_21cbd48 = 0;
    GameData_21cbd68 = 0;
    GameData_21cbd70 = 0;
    GameData_21cbd78 = 0;
    GameData_21cbab0 = 0;
    GameData_21cc140 = 13;
    GameData_21cc150 = (__int64)GameRoutine_726630;
    GameData_21cc0d0 = (__int64)GameRoutine_726460;
    GameData_21cc100 = 13;
    GameData_21cc290 = (__int64)GameData_212d088[0];
    GameData_21cc080 = 2;
    GameData_21cc2c0 = 12;
    GameData_21cc0a0 = 11;
    GameData_21cc240 = 13;
    GameData_21cbf90 = (__int64)GameRoutine_7261a0;
    GameData_21cc250 = (__int64)GameRoutine_726800;
    GameData_21cc000 = 13;
    GameData_21cc280 = 8;
    GameData_21cc010 = (__int64)GameRoutine_726260;
    GameData_21cc200 = 13;
    GameData_21cbfc0 = 13;
    GameData_21cc210 = (__int64)GameRoutine_726790;
    GameData_21cbfd0 = (__int64)GameRoutine_7261e0;
    GameData_21cc1c0 = 13;
    GameData_21cbf40 = 2;
    GameData_21cc1d0 = (__int64)GameRoutine_7266a0;
    GameData_21cbf80 = 13;
    GameData_21cc180 = 13;
    GameData_21cbe00 = 12;
    GameData_21cbed0 = (__int64)GameRoutine_725dc0;
    GameData_21cbf00 = 12;
    GameData_21cbec0 = 13;
    GameData_21cbe40 = 2;
    GameData_21cbe60 = 9;
    GameData_21cbe20 = 9;
    GameData_21cbd20 = 9;
    GameData_21cbcd0 = (__int64)GameRoutine_725440;
    GameData_21cbc50 = (__int64)GameRoutine_725440;
    GameData_21cbcd8 = 0;
    GameData_21cbce0 = 0;
    GameData_21cbce8 = 0;
    GameData_21cbcf0 = 0;
    GameData_21cbcf8 = 0;
    GameData_21cbd18 = 0;
    GameData_21cbd10 = 0;
    GameData_21cbd08 = 0;
    GameData_21cbab8 = 0;
    GameData_21cbca8 = 0;
    GameData_21cbcb0 = 0;
    GameData_21cbcb8 = 0;
    GameData_21cbc90 = 0;
    GameData_21cbc98 = 0;
    GameData_21cbca0 = 0;
    GameData_21cbcc8 = 0;
    GameData_21cbbf0 = 0;
    GameData_21cbc48 = 0;
    GameData_21cbc58 = 0;
    GameData_21cbc60 = 0;
    GameData_21cbc68 = 0;
    GameData_21cbc70 = 0;
    GameData_21cbc78 = 0;
    GameData_21cbbf8 = 0;
    GameData_21cbc80 = 8;
    GameData_21cbc00 = 8;
    GameData_21cbc88 = (__int64)game_734fc0_ptr[0];
    GameData_21cbcc0 = 13;
    GameData_21cbc40 = 13;
    GameData_21cbc28 = 0;
    GameData_21cbc30 = 0;
    GameData_21cbc38 = 0;
    GameData_21cbc20 = 0;
    GameData_21cbc18 = 0;
    GameData_21cbc10 = 0;
    GameData_21cbba0 = 17;
    GameData_21cbba8 = 0;
    GameData_21cbbb0 = 0;
    GameData_21cbbb8 = 0;
    GameData_21cbbc8 = 0;
    GameData_21cbbd0 = 0;
    GameData_21cbbd8 = 0;
    GameData_21cbbe8 = 0;
    GameData_21cbb58 = 0;
    GameData_21cbb60 = 0;
    GameData_21cbb68 = 0;
    GameData_21cbb70 = 0;
    GameData_21cbb78 = 0;
    GameData_21cbb98 = 0;
    GameData_21cbb90 = 0;
    GameData_21cbb88 = 0;
    GameData_21cbb18 = 0;
    GameData_21cbb20 = 0;
    GameData_21cbb28 = 0;
    GameData_21cbb30 = 0;
    GameData_21cbb38 = 0;
    GameData_21cbb48 = 0;
    GameData_21cbb50 = (__int64)GameRoutine_725800;
    GameData_21cbac8 = 0;
    GameData_21cbad8 = 0;
    GameData_21cbae0 = 0;
    GameData_21cbae8 = 0;
    GameData_21cbaf0 = 0;
    GameData_21cbaf8 = 0;
    GameData_21cbb08 = 0;
    GameData_21cba00 = 13;
    GameData_21cba08 = 0;
    GameData_21cba60 = 0;
    GameData_21cba68 = 0;
    GameData_21cba70 = 0;
    GameData_21cba78 = 0;
    GameData_21cba80 = 2;
    GameData_21cba98 = 0;
    GameData_21cba90 = 0;
    GameData_21cba88 = 0;
    GameData_21cbaa0 = 8;
    GameData_21cbaa8 = 0;
    GameData_21cba18 = 0;
    GameData_21cba20 = 0;
    GameData_21cba28 = 0;
    GameData_21cba30 = 0;
    GameData_21cba38 = 0;
    GameData_21cba40 = 13;
    GameData_21cba48 = 0;
    GameData_21cba50 = (__int64)GameRoutine_725dc0;
    GameData_21cba58 = 0;
    GameData_21cb8f0 = 0;
    GameData_21cb8f8 = 0;
    GameData_21cb9b0 = 0;
    GameData_21cb9b8 = 0;
    GameData_21cb9c0 = 13;
    GameData_21cb9c8 = 0;
    GameData_21cb9d0 = (__int64)GameRoutine_725dc0;
    GameData_21cb9d8 = 0;
    GameData_21cb9e0 = 0;
    GameData_21cb9e8 = 0;
    GameData_21cb9f0 = 0;
    GameData_21cb9f8 = 0;
    GameData_21cb960 = 0;
    GameData_21cb968 = 0;
    GameData_21cb970 = 0;
    GameData_21cb978 = 0;
    GameData_21cb980 = 13;
    GameData_21cb988 = 0;
    GameData_21cb998 = 0;
    GameData_21cb9a0 = 0;
    GameData_21cb9a8 = 0;
    GameData_21cb900 = 13;
    GameData_21cb918 = 0;
    GameData_21cb920 = 0;
    GameData_21cb928 = 0;
    GameData_21cb930 = 0;
    GameData_21cb938 = 0;
    GameData_21cb940 = 13;
    GameData_21cb948 = 0;
    GameData_21cb958 = 0;
    GameData_21cb908 = 0;
    GameData_21cc888 = 0;
    GameData_21cc8a0 = 10;
    GameData_21cc8a8 = 0;
    GameData_21cc8b0 = 0;
    GameData_21cc8b8 = 0;
    GameData_21cc8c8 = 0;
    GameData_21cc8d0 = (__int64)GameRoutine_724110;
    GameData_21cc8d8 = 0;
    GameData_21cc8e0 = 0;
    GameData_21cc8e8 = 0;
    GameData_21cc8f0 = 0;
    GameData_21cc8f8 = 0;
    GameData_21cc908 = 0;
    GameData_21cc918 = 0;
    GameData_21cc920 = 0;
    GameData_21cc928 = 0;
    GameData_21cc930 = 0;
    GameData_21cc938 = 0;
    GameData_21cc948 = 0;
    GameData_21cc958 = 0;
    GameData_21cc960 = 0;
    GameData_21cc968 = 0;
    GameData_21cc970 = 0;
    GameData_21cc978 = 0;
    GameData_21cc988 = 0;
    GameData_21cbc08 = (__int64)game_7bc0e0_ptr[0];
    GameData_21cbbc0 = 2;
    GameData_21cbbe0 = 4;
    GameData_21cbac0 = 13;
    GameData_21cbb80 = 12;
    GameData_21cbb10 = (__int64)game_map_726100;
    GameData_21cbb40 = 13;
    GameData_21cbad0 = (__int64)GameRoutine_7260d0;
    GameData_21cbb00 = 13;
    GameData_21cba10 = (__int64)GameRoutine_726090;
    GameData_21cb990 = (__int64)GameRoutine_725d40;
    GameData_21cb950 = (__int64)GameRoutine_725c80;
    GameData_21cb910 = (__int64)GameRoutine_725bb0;
    GameData_21cc8c0 = 13;
    GameData_21cc900 = 13;
    GameData_21cc910 = (__int64)GameRoutine_726d30;
    GameData_21cc940 = 13;
    GameData_21cc950 = (__int64)game_map_726d70;
    GameData_21cc980 = 10;
    GameData_21cca10 = (__int64)GameData_212d060[0];
    GameData_21cc9c0 = 13;
    GameData_21cc9a0 = 0;
    GameData_21cc9a8 = 0;
    GameData_21cc9b0 = 0;
    GameData_21cc9b8 = 0;
    GameData_21cc9c8 = 0;
    GameData_21cc9d8 = 0;
    GameData_21cc9e0 = 0;
    GameData_21cc9e8 = 0;
    GameData_21cc9f0 = 0;
    GameData_21cc9f8 = 0;
    GameData_21cca08 = 0;
    GameData_21cca20 = 250;
    GameData_21cca28 = 0;
    GameData_21cca30 = 0;
    GameData_21cca38 = 0;
    GameData_21cca48 = 0;
    GameData_21cca58 = 0;
    GameData_21cca60 = 0;
    GameData_21cca68 = 0;
    GameData_21cca70 = 0;
    GameData_21cca78 = 0;
    GameData_21cca88 = 0;
    GameData_21cca98 = 0;
    GameData_21ccaa0 = 0;
    GameData_21ccaa8 = 0;
    GameData_21ccab0 = 0;
    GameData_21ccab8 = 0;
    GameData_21ccad8 = 0;
    GameData_21ccad0 = 0;
    GameData_21ccac8 = 0;
    GameData_21ccae0 = 6;
    GameData_21ccae8 = 0;
    GameData_21ccaf0 = 0;
    GameData_21ccaf8 = 0;
    GameData_21ccb08 = 0;
    GameData_21ccb10 = 0;
    GameData_21ccb18 = 0;
    GameData_21ccb28 = 0;
    GameData_21ccb30 = 0;
    GameData_21ccb38 = 0;
    GameData_21ccb48 = 0;
    GameData_21ccb58 = 0;
    GameData_21ccb60 = 0;
    GameData_21ccb68 = 0;
    GameData_21ccb70 = 0;
    GameData_21ccb78 = 0;
    GameData_21ccb98 = 0;
    GameData_21ccb90 = 0;
    GameData_21ccb88 = 0;
    GameData_21ccba0 = 17;
    GameData_21ccba8 = 0;
    GameData_21ccbb0 = 0;
    GameData_21ccbb8 = 0;
    GameData_21ccbc8 = 0;
    GameData_21ccbd0 = 0;
    GameData_21ccbd8 = 0;
    GameData_21ccbe0 = 17;
    GameData_21ccbe8 = 0;
    GameData_21ccbf0 = 0;
    GameData_21ccbf8 = 0;
    GameData_21ccc08 = 0;
    GameData_21ccc18 = 0;
    GameData_21ccc20 = 0;
    GameData_21ccc28 = 0;
    GameData_21ccc30 = 0;
    GameData_21ccc38 = 0;
    GameData_21ccc48 = 0;
    GameData_21ccc50 = (__int64)GameRoutine_724110;
    GameData_21ccc58 = 0;
    GameData_21ccc60 = 0;
    GameData_21ccc68 = 0;
    GameData_21ccc70 = 0;
    GameData_21ccc78 = 0;
    GameData_21ccc88 = 0;
    GameData_21ccc98 = 0;
    GameData_21ccca0 = 0;
    GameData_21ccca8 = 0;
    GameData_21cccb0 = 0;
    GameData_21cccb8 = 0;
    GameData_21cccc8 = 0;
    GameData_21cccd8 = 0;
    GameData_21ccce0 = 0;
    GameData_21ccce8 = 0;
    GameData_21cccf0 = 0;
    GameData_21cccf8 = 0;
    GameData_21ccd08 = 0;
    GameData_21ccd10 = (__int64)game_80a680_ptr[0];
    GameData_21ccd20 = 250;
    GameData_21ccd28 = 0;
    GameData_21ccd30 = 0;
    GameData_21ccd38 = 0;
    GameData_21ccd48 = 0;
    GameData_21ccd60 = 0;
    GameData_21ccd68 = 0;
    GameData_21ccd70 = 0;
    GameData_21ccd78 = 0;
    GameData_21ccd88 = 0;
    GameData_21ccd98 = 0;
    GameData_21ccda0 = 0;
    GameData_21ccda8 = 0;
    GameData_21ccdb0 = 0;
    GameData_21ccdb8 = 0;
    GameData_21ccdc8 = 0;
    GameData_21ccdd8 = 0;
    GameData_21ccde0 = 0;
    GameData_21ccde8 = 0;
    GameData_21ccdf0 = 0;
    GameData_21ccdf8 = 0;
    GameData_21cce08 = 0;
    GameData_21cce18 = 0;
    GameData_21cce20 = 0;
    GameData_21cce28 = 0;
    GameData_21cce30 = 0;
    GameData_21cce38 = 0;
    GameData_21cce48 = 0;
    GameData_21cce58 = 0;
    GameData_21cce60 = 0;
    GameData_21cce68 = 0;
    GameData_21cce70 = 0;
    GameData_21cce78 = 0;
    GameData_21cce88 = 0;
    GameData_21cce98 = 0;
    GameData_21ccea0 = 0;
    GameData_21ccea8 = 0;
    GameData_21cceb0 = 0;
    GameData_21cceb8 = 0;
    GameData_21cca40 = 13;
    GameData_21cc9d0 = (__int64)GameRoutine_726e50;
    GameData_21cca50 = (__int64)GameRoutine_726f00;
    GameData_21cca00 = 19;
    GameData_21cca80 = 13;
    GameData_21cca90 = (__int64)GameRoutine_726f40;
    GameData_21cc990 = (__int64)GameData_212c720;
    GameData_21ccd50 = (__int64)GameData_212c720;
    GameData_21ccac0 = 12;
    GameData_21ccb00 = 2;
    GameData_21ccb20 = 16;
    GameData_21ccb40 = 13;
    GameData_21ccb50 = (__int64)GameRoutine_726f60;
    GameData_21ccb80 = 12;
    GameData_21ccbc0 = 2;
    GameData_21ccc00 = 13;
    GameData_21ccc10 = (__int64)GameRoutine_726f80;
    GameData_21ccc40 = 13;
    GameData_21ccc80 = 13;
    GameData_21ccc90 = (__int64)GameRoutine_726fa0;
    GameData_21cccc0 = 13;
    GameData_21cccd0 = (__int64)GameRoutine_726fc0;
    GameData_21ccd00 = 19;
    GameData_21ccd40 = 10;
    GameData_21ccd80 = 13;
    GameData_21ccd90 = (__int64)GameRoutine_727020;
    GameData_21ccdc0 = 13;
    GameData_21ccdd0 = (__int64)GameRoutine_727030;
    GameData_21cce00 = 13;
    GameData_21cce10 = (__int64)game_map_727040;
    GameData_21cce40 = 13;
    GameData_21cce50 = (__int64)GameHr_727170;
    GameData_21cce80 = 13;
    GameData_21cce90 = (__int64)GameRoutine_7271c0;
    GameData_21ccec0 = 8;
    GameData_21ccee8 = 0;
    GameData_21ccef0 = 0;
    GameData_21ccef8 = 0;
    GameData_21ccee0 = 0;
    GameData_21cced8 = 0;
    GameData_21cced0 = 0;
    GameData_21ccf08 = 0;
    GameData_21ccf18 = 0;
    GameData_21ccf20 = 0;
    GameData_21ccf28 = 0;
    GameData_21ccf30 = 0;
    GameData_21ccf38 = 0;
    GameData_21ccf48 = 0;
    GameData_21ccf58 = 0;
    GameData_21ccf60 = 0;
    GameData_21ccf68 = 0;
    GameData_21ccf70 = 0;
    GameData_21ccf78 = 0;
    GameData_21ccf88 = 0;
    GameData_21ccf98 = 0;
    GameData_21ccfa0 = 0;
    GameData_21ccfa8 = 0;
    GameData_21ccfb0 = 0;
    GameData_21ccfb8 = 0;
    GameData_21ccfc8 = 0;
    GameData_21ccfd8 = 0;
    GameData_21ccfe0 = 0;
    GameData_21ccfe8 = 0;
    GameData_21ccff0 = 0;
    GameData_21ccff8 = 0;
    GameData_21cd008 = 0;
    GameData_21cd018 = 0;
    GameData_21cd020 = 0;
    GameData_21cd028 = 0;
    GameData_21cd030 = 0;
    GameData_21cd038 = 0;
    GameData_21cd048 = 0;
    GameData_21cd050 = (__int64)GameHr_722f20;
    GameData_21cd058 = 0;
    GameData_21cd060 = 0;
    GameData_21cd068 = 0;
    GameData_21cd070 = 0;
    GameData_21cd078 = 0;
    GameData_21cd0a8 = 0;
    GameData_21cd0b0 = 0;
    GameData_21cd0b8 = 0;
    GameData_21cd0a0 = 0;
    GameData_21cd098 = 0;
    GameData_21cd090 = 0;
    GameData_21cd088 = 0;
    GameData_21ccec8 = (__int64)GameData_212d098;
    GameData_21ccf00 = 13;
    GameData_21ccf10 = (__int64)GameHr_7271e0;
    GameData_21ccf40 = 13;
    GameData_21ccf50 = (__int64)GameHr_727340;
    GameData_21ccf80 = 13;
    GameData_21ccf90 = (__int64)GameHr_727360;
    GameData_21ccfc0 = 13;
    GameData_21ccfd0 = (__int64)GameRoutine_727970;
    GameData_21cd000 = 13;
    GameData_21cd010 = (__int64)GameRoutine_7279c0;
    GameData_21cd040 = 13;
    GameData_21cd080 = 0;
    __cxa_guard_release((__int64)&GameData_21cd0c0);
  }
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      256, 16, 0);
  v4 = GameData_212c608[0];
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 112) = 0;
  *(_QWORD*)(v3 + 120) = 0;
  *(_QWORD*)(v3 + 128) = 0;
  *(_WORD*)(v3 + 136) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = "NULL";
  *(_QWORD*)(v3 + 138) = 0;
  *(_QWORD*)(v3 + 144) = 0;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)v3 = v4 + 16;
  *(_QWORD*)(v3 + 8) = 0;
  game_ProcInst_Register(v3);
  *(_QWORD*)(v3 + 152) = 0;
  *(_QWORD*)(v3 + 192) = 0;
  game_script_map_effect_g_sequence = v3;
  *(_QWORD*)v3 = GameData_1f93890;
  v5 = *v2;
  *(_QWORD*)(v3 + 208) = GameData_212d6d0 + 2;
  v6 = (_QWORD*)fw_memory_HeapManager_Allocate(v5, 24, 16, 0);
  v7 = GameData_21eea40;
  v6[1] = &GameData_21eea40;
  v6[2] = v3 + 208;
  GameData_21eea40 = (__int64)v6;
  *v6 = v7;
  *(_QWORD*)(v7 + 8) = v6;
  *(_QWORD*)(v3 + 240) = 0;
  *(_QWORD*)(v3 + 248) = 0;
  *(_DWORD*)(v3 + 232) = 0;
  v8 = GameData_21eea50;
  *(_QWORD*)v3 = game_map_anonymous_ProcMapSeq_vtable;
  GameData_21eea50 = v8 + 1;
  *(_QWORD*)(v3 + 208) = GameData_1f93780;
  *(_QWORD*)(v3 + 216) = GameData_1f937f8;
  *(_QWORD*)(v3 + 224) = game_GameTime_Timer_vtable;
  v9 = GameData_21eea58;
  if (GameData_21eea58 != 0) {
    v9 = *(_BYTE*)(GameData_21eea58 + 32);
  }
  *(_BYTE*)(v3 + 235) = v9 & 1;
  v10 = (_DWORD*)GameData_212d168;
  v11 = GameData_21d92dc;
  v12 = *GameData_212d168;
  ++GameData_21d92dc;
  GameData_21d925c[v11] = v12;
  *(_DWORD*)v10 = 1;
  game_GameView_Update();
  v13 = *game_sound_g_game_sound_ptr[0];
  if (*game_sound_g_game_sound_ptr[0] != 0) {
    *(_DWORD*)(v13 + 2480) = 0;
    snd_Fade_Fade_10c910((__int64)v19, 125);
    v14 = 0x1.0000000000000p+0f;
    if (*(_DWORD*)(v13 + 2752) == 1 && *(int*)(v13 + 2480) >= 1) {
      v15 = snd_getDefineValue("SetVolume_SE_Bmap_FootStep");
      v14 = *(float*)&v15 / 0x1.9000000000000p+6f;
    }
    snd_startSlotVolume_100b50(&GameData_21fa960, (__int64)v19, v14);
    snd_Fade_Destroy_Fade(v19);
  }
  v16 = GameData_2131d30[0];
  if ((*(_BYTE*)GameData_2131d30[0] & 1) != 0) {
    **(_BYTE**)((char*)((__int128*)0x10LL) + GameData_2131d30[0]) = 0;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + v16) = nullptr;
  }
  else {
    *(_WORD*)GameData_2131d30[0] = 0;
  }
  v17 = GameData_2131d38[0];
  if ((*(_BYTE*)GameData_2131d38[0] & 1) != 0) {
    **(_BYTE**)((char*)((__int128*)0x10LL) + GameData_2131d38[0]) = 0;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + v17) = nullptr;
  }
  else {
    *(_WORD*)GameData_2131d38[0] = 0;
  }
  return ProcInst_657850(v3, (__int64)&GameData_21caac0, (__int64)"ProcMapSeq",
                         1, a1);
}

__int64 game_87de80(__int64 a1, char*** a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64* v12;
  _DWORD* v13;
  __int64 v14;
  int v15;
  unsigned __int64 v17[2];

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f1340,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21f1340) != 0) {
    GameData_21ef1c0 = 19;
    GameData_21ef1e0 = 4;
    GameData_21ef1e8 = 0;
    GameData_21ef1f0 = 0;
    GameData_21ef1f8 = 0;
    GameData_21ef200 = 2;
    GameData_21ef208 = 0;
    GameData_21ef210 = 0;
    GameData_21ef218 = 0;
    GameData_21ef220 = 1;
    GameData_21ef228 = 0;
    GameData_21ef230 = 0;
    GameData_21ef238 = 0;
    GameData_21ef248 = 0;
    GameData_21ef250 = (__int64)game_gmap_ProcGmapSeq_Initialize;
    GameData_21ef258 = 0;
    GameData_21ef260 = 0;
    GameData_21ef268 = 0;
    GameData_21ef270 = 0;
    GameData_21ef278 = 0;
    GameData_21ef280 = 8;
    GameData_21ef1c8 = 0;
    GameData_21ef1d0 = (__int64)GameData_212c6e8[0];
    GameData_21ef240 = 13;
    GameData_21ef2a0 = 0;
    GameData_21ef2a8 = 0;
    GameData_21ef2b0 = 0;
    GameData_21ef2b8 = 0;
    GameData_21ef2c0 = 13;
    GameData_21ef2d8 = 0;
    GameData_21ef2e0 = 0;
    GameData_21ef2e8 = 0;
    GameData_21ef2f0 = 0;
    GameData_21ef2f8 = 0;
    GameData_21ef300 = 15;
    GameData_21ef318 = 0;
    GameData_21ef320 = 0;
    GameData_21ef328 = 0;
    GameData_21ef330 = 0;
    GameData_21ef338 = 0;
    GameData_21ef340 = 8;
    GameData_21ef288 = 0;
    GameData_21ef290 = (__int64)ProcInst_Destructor_ptr[0];
    GameData_21ef2c8 = 0;
    GameData_21ef2d0 = (__int64)game_gmap_ProcGmapSeq_LoadMap;
    GameData_21ef308 = 0;
    GameData_21ef310 = (__int64)ProcGmapSeq_8802a0;
    GameData_21ef388 = 0;
    GameData_21ef390 = (__int64)ProcGmapSeq_8804e0;
    GameData_21ef360 = 0;
    GameData_21ef368 = 0;
    GameData_21ef370 = 0;
    GameData_21ef378 = 0;
    GameData_21ef398 = 0;
    GameData_21ef3a0 = 0;
    GameData_21ef3a8 = 0;
    GameData_21ef3b0 = 0;
    GameData_21ef3b8 = 0;
    GameData_21ef3c0 = 13;
    GameData_21ef3c8 = 0;
    GameData_21ef3d8 = 0;
    GameData_21ef3e0 = 0;
    GameData_21ef3e8 = 0;
    GameData_21ef3f0 = 0;
    GameData_21ef3f8 = 0;
    GameData_21ef400 = 13;
    GameData_21ef408 = 0;
    GameData_21ef418 = 0;
    GameData_21ef420 = 0;
    GameData_21ef428 = 0;
    GameData_21ef430 = 0;
    GameData_21ef438 = 0;
    GameData_21ef440 = 13;
    GameData_21ef448 = 0;
    GameData_21ef458 = 0;
    GameData_21ef460 = 0;
    GameData_21ef468 = 0;
    GameData_21ef470 = 0;
    GameData_21ef478 = 0;
    GameData_21ef480 = 13;
    GameData_21ef488 = 0;
    GameData_21ef498 = 0;
    GameData_21ef4a0 = 0;
    GameData_21ef4a8 = 0;
    GameData_21ef4b0 = 0;
    GameData_21ef4b8 = 0;
    GameData_21ef4c0 = 8;
    GameData_21ef4c8 = 0;
    GameData_21ef3d0 = (__int64)game_gmap_ProcGmapSeq_PreExeCommand;
    GameData_21ef410 = (__int64)ProcGmapSeq_8814e0;
    GameData_21ef450 = (__int64)ProcGmapSeq_881560;
    GameData_21ef348 = 0;
    GameData_21ef350 = (__int64)ProcInst_DeletingDestructor_ptr;
    GameData_21ef490 = (__int64)ProcGmapSeq_8818a0;
    GameData_21ef380 = 18;
    GameData_21ef4e0 = 0;
    GameData_21ef4e8 = 0;
    GameData_21ef4f0 = 0;
    GameData_21ef4f8 = 0;
    GameData_21ef500 = 19;
    GameData_21ef4d0 = (__int64)TroopMgr_134a480_ptr[0];
    GameData_21ef508 = 0;
    GameData_21ef528 = 0;
    GameData_21ef530 = 0;
    GameData_21ef538 = 0;
    GameData_21ef548 = 0;
    GameData_21ef510 = (__int64)GameData_212d060[0];
    GameData_21ef520 = 500;
    GameData_21ef540 = 10;
    GameData_21ef610 = (__int64)game_gmap_ProcGmapSeq_OpenEventBranch;
    GameData_21ef560 = 0;
    GameData_21ef568 = 0;
    GameData_21ef570 = 0;
    GameData_21ef578 = 0;
    GameData_21ef580 = 13;
    GameData_21ef588 = 0;
    GameData_21ef590 = (__int64)GameRoutine_881a60;
    GameData_21ef598 = 0;
    GameData_21ef5a0 = 0;
    GameData_21ef5a8 = 0;
    GameData_21ef5b0 = 0;
    GameData_21ef5b8 = 0;
    GameData_21ef5c0 = 2;
    GameData_21ef5d8 = 0;
    GameData_21ef5d0 = 0;
    GameData_21ef5c8 = 0;
    GameData_21ef5e0 = 2;
    GameData_21ef5e8 = 0;
    GameData_21ef5f0 = 0;
    GameData_21ef5f8 = 0;
    GameData_21ef600 = 13;
    GameData_21ef608 = 0;
    GameData_21ef618 = 0;
    GameData_21ef620 = 0;
    GameData_21ef628 = 0;
    GameData_21ef630 = 0;
    GameData_21ef638 = 0;
    GameData_21ef640 = 25;
    GameData_21ef648 = 0;
    GameData_21ef650 = 0;
    GameData_21ef658 = 0;
    GameData_21ef660 = 10;
    GameData_21ef668 = 0;
    GameData_21ef670 = 0;
    GameData_21ef678 = 0;
    GameData_21ef680 = 13;
    GameData_21ef688 = 0;
    GameData_21ef690 = (__int64)ProcGmapSeq_881f20;
    GameData_21ef698 = 0;
    GameData_21ef6a0 = 0;
    GameData_21ef6a8 = 0;
    GameData_21ef6b0 = 0;
    GameData_21ef6b8 = 0;
    GameData_21ef6c0 = 13;
    GameData_21ef6c8 = 0;
    GameData_21ef6d0 = (__int64)GameRoutine_881a60;
    GameData_21ef6d8 = 0;
    GameData_21ef6e0 = 0;
    GameData_21ef6e8 = 0;
    GameData_21ef6f0 = 0;
    GameData_21ef6f8 = 0;
    GameData_21ef700 = 2;
    GameData_21ef718 = 0;
    GameData_21ef710 = 0;
    GameData_21ef708 = 0;
    GameData_21ef728 = 0;
    GameData_21ef730 = 0;
    GameData_21ef738 = 0;
    GameData_21ef740 = 13;
    GameData_21ef748 = 0;
    GameData_21ef758 = 0;
    GameData_21ef760 = 0;
    GameData_21ef768 = 0;
    GameData_21ef770 = 0;
    GameData_21ef778 = 0;
    GameData_21ef780 = 8;
    GameData_21ef720 = 3;
    GameData_21ef750 = (__int64)ProcGmapSeq_882080;
    GameData_21ef550 = (__int64)GameData_212c720;
    GameData_21ef7a8 = 0;
    GameData_21ef7b0 = 0;
    GameData_21ef7b8 = 0;
    GameData_21ef7a0 = 0;
    GameData_21ef798 = 0;
    GameData_21ef790 = 0;
    GameData_21ef7c0 = 13;
    GameData_21ef7c8 = 0;
    GameData_21ef7d8 = 0;
    GameData_21ef7e0 = 0;
    GameData_21ef7e8 = 0;
    GameData_21ef7f0 = 0;
    GameData_21ef7f8 = 0;
    GameData_21ef800 = 13;
    GameData_21ef808 = 0;
    GameData_21ef818 = 0;
    GameData_21ef820 = 0;
    GameData_21ef828 = 0;
    GameData_21ef830 = 0;
    GameData_21ef838 = 0;
    GameData_21ef840 = 8;
    GameData_21ef848 = 0;
    GameData_21ef850 = (__int64)TroopMgr_134a480_ptr[0];
    GameData_21ef860 = 0;
    GameData_21ef868 = 0;
    GameData_21ef870 = 0;
    GameData_21ef878 = 0;
    GameData_21ef880 = 8;
    GameData_21ef888 = 0;
    GameData_21ef788 = (__int64)GameData_212d768[0];
    GameData_21ef7d0 = (__int64)ProcGmapSeq_882140;
    GameData_21ef810 = (__int64)ProcGmapSeq_882300;
    GameData_21ef8a0 = 0;
    GameData_21ef8a8 = 0;
    GameData_21ef8b0 = 0;
    GameData_21ef8b8 = 0;
    GameData_21ef8c0 = 8;
    GameData_21ef8c8 = 0;
    GameData_21ef890 = (__int64)TroopMgr_134aa80_ptr[0];
    GameData_21f05a0 = 1;
    GameData_21f08d0 = (__int64)GameRoutine_882680;
    GameData_21f0950 = (__int64)ProcGmapSeq_881f20;
    GameData_21f0b08 = 0;
    GameData_21f0b10 = (__int64)GameRoutine_881a60;
    GameData_21f0a78 = 0;
    GameData_21f0a98 = 0;
    GameData_21f0a90 = 0;
    GameData_21f0a88 = 0;
    GameData_21f0aa0 = 14;
    GameData_21f0aa8 = 0;
    GameData_21f0ab0 = 0;
    GameData_21f0ab8 = 0;
    GameData_21ef910 = (__int64)GameRoutine_882680;
    GameData_21ef8e0 = 0;
    GameData_21ef8e8 = 0;
    GameData_21ef8f0 = 0;
    GameData_21ef8f8 = 0;
    GameData_21ef908 = 0;
    GameData_21ef918 = 0;
    GameData_21ef920 = 7;
    GameData_21ef928 = 0;
    GameData_21ef930 = 0;
    GameData_21f0af8 = 0;
    GameData_21ef980 = 25;
    GameData_21ef938 = 0;
    GameData_21ef940 = 13;
    GameData_21ef948 = 0;
    GameData_21ef950 = (__int64)ProcGmapSeq_8827e0;
    GameData_21ef958 = 0;
    GameData_21ef960 = 0;
    GameData_21ef968 = 0;
    GameData_21ef970 = 0;
    GameData_21ef978 = 0;
    GameData_21f0a28 = 0;
    GameData_21f0a30 = 0;
    GameData_21ef998 = 0;
    GameData_21ef990 = 0;
    GameData_21ef988 = 0;
    GameData_21ef9a0 = 10;
    GameData_21ef9a8 = 0;
    GameData_21ef9b0 = 0;
    GameData_21ef9b8 = 0;
    GameData_21ef9c0 = 13;
    GameData_21ef9c8 = 0;
    GameData_21ef9d0 = (__int64)ProcGmapSeq_882900;
    GameData_21ef9d8 = 0;
    GameData_21ef9e0 = 0;
    GameData_21ef9e8 = 0;
    GameData_21ef9f0 = 0;
    GameData_21ef9f8 = 0;
    GameData_21efa00 = 14;
    GameData_21efa08 = 0;
    GameData_21efa10 = (__int64)ProcGmapSeq_882cb0;
    GameData_21efa18 = 0;
    GameData_21efa20 = 0;
    GameData_21efa28 = 0;
    GameData_21efa30 = 0;
    GameData_21efa38 = 0;
    GameData_21efa40 = 13;
    GameData_21efa90 = (__int64)ProcGmapSeq_881f20;
    GameData_21efa50 = (__int64)ProcGmapSeq_882d60;
    GameData_21efa48 = 0;
    GameData_21efa58 = 0;
    GameData_21efa60 = 0;
    GameData_21efa68 = 0;
    GameData_21efa70 = 0;
    GameData_21efa78 = 0;
    GameData_21efa80 = 13;
    GameData_21efa88 = 0;
    GameData_21efa98 = 0;
    GameData_21efaa0 = 0;
    GameData_21efaa8 = 0;
    GameData_21efab0 = 0;
    GameData_21efab8 = 0;
    GameData_21efac0 = 13;
    GameData_21efac8 = 0;
    GameData_21efad0 = (__int64)ProcGmapSeq_882f10;
    GameData_21efad8 = 0;
    GameData_21f0a38 = 0;
    GameData_21f0a48 = 0;
    GameData_21efae0 = 0;
    GameData_21efae8 = 0;
    GameData_21efaf0 = 0;
    GameData_21efaf8 = 0;
    GameData_21efb00 = 13;
    GameData_21efb08 = 0;
    GameData_21efb18 = 0;
    GameData_21efb20 = 0;
    GameData_21efb28 = 0;
    GameData_21efb30 = 0;
    GameData_21efb38 = 0;
    GameData_21efb40 = 13;
    GameData_21f0ad0 = (__int64)ProcGmapSeq_885160;
    GameData_21efb48 = 0;
    GameData_21efb58 = 0;
    GameData_21efb60 = 0;
    GameData_21efb68 = 0;
    GameData_21efb70 = 0;
    GameData_21efb78 = 0;
    GameData_21efb80 = 13;
    GameData_21f0388 = 0;
    GameData_21f0b18 = 0;
    GameData_21f0ac8 = 0;
    GameData_21f0ad8 = 0;
    GameData_21f0ae0 = 0;
    GameData_21f0ae8 = 0;
    GameData_21f0af0 = 0;
    GameData_21f0a50 = (__int64)GameRoutine_881a60;
    GameData_21f0a58 = 0;
    GameData_21f0a60 = 0;
    GameData_21f0a68 = 0;
    GameData_21f0a70 = 0;
    GameData_21f09c8 = 0;
    GameData_21f09e0 = 13;
    GameData_21f09e8 = 0;
    GameData_21f09f0 = 0;
    GameData_21f09f8 = 0;
    GameData_21f0a08 = 0;
    GameData_21f0a18 = 0;
    GameData_21f0a20 = 0;
    GameData_21f0988 = 0;
    GameData_21f0990 = (__int64)GameRoutine_881a60;
    GameData_21f0998 = 0;
    GameData_21f09a0 = 0;
    GameData_21f09a8 = 0;
    GameData_21f09b0 = 0;
    GameData_21f09b8 = 0;
    GameData_21f09d8 = 0;
    GameData_21f09d0 = 0;
    GameData_21f0928 = 0;
    GameData_21f0930 = 0;
    GameData_21f0938 = 0;
    GameData_21f0948 = 0;
    GameData_21f0958 = 0;
    GameData_21f0960 = 0;
    GameData_21f0968 = 0;
    GameData_21f0970 = 0;
    GameData_21f0978 = 0;
    GameData_21f07e8 = 0;
    GameData_21f08d8 = 0;
    GameData_21f08e0 = 7;
    GameData_21f08e8 = 0;
    GameData_21f08f0 = 0;
    GameData_21f08f8 = 0;
    GameData_21f0918 = 0;
    GameData_21f0910 = 0;
    GameData_21f0908 = 0;
    GameData_21f0920 = 10;
    GameData_21f0890 = (__int64)ProcGmapSeq_882900;
    GameData_21f0898 = 0;
    GameData_21f08a0 = 0;
    GameData_21f08a8 = 0;
    GameData_21f08b0 = 0;
    GameData_21f08b8 = 0;
    GameData_21f08c8 = 0;
    GameData_21f0848 = 0;
    GameData_21f0858 = 0;
    GameData_21f0860 = 0;
    GameData_21f0868 = 0;
    GameData_21f0870 = 0;
    GameData_21f0878 = 0;
    GameData_21f0888 = 0;
    GameData_21f07f0 = 0;
    GameData_21f07f8 = 0;
    GameData_21f0818 = 0;
    GameData_21f0810 = 0;
    GameData_21f0808 = 0;
    GameData_21f0828 = 0;
    GameData_21f0830 = 0;
    GameData_21f0838 = 0;
    GameData_21f0678 = 0;
    GameData_21f0710 = 0;
    GameData_21f07a0 = 0;
    GameData_21f07a8 = 0;
    GameData_21f07b0 = 0;
    GameData_21f07b8 = 0;
    GameData_21f07c8 = 0;
    GameData_21f07d0 = (__int64)GameRoutine_881a60;
    GameData_21f07d8 = 0;
    GameData_21f07e0 = 0;
    GameData_21f0718 = 0;
    GameData_21f0760 = 0;
    GameData_21f0768 = 0;
    GameData_21f0770 = 0;
    GameData_21f0778 = 0;
    GameData_21f0788 = 0;
    GameData_21f0798 = 0;
    GameData_21f0728 = 0;
    GameData_21f0730 = 0;
    GameData_21f0738 = 0;
    GameData_21f0748 = 0;
    GameData_21f0758 = 0;
    GameData_21f0688 = 0;
    GameData_21f06f0 = 0;
    GameData_21f06f8 = 0;
    GameData_21f06e0 = 0;
    GameData_21f06d8 = 0;
    GameData_21f06d0 = 0;
    GameData_21f06c8 = 0;
    GameData_21f0708 = 0;
    GameData_21f0698 = 0;
    GameData_21f06a0 = 0;
    GameData_21f06a8 = 0;
    GameData_21f06b0 = 0;
    GameData_21f06b8 = 0;
    GameData_21f06e8 = 0;
    GameData_21f0628 = 0;
    GameData_21f0630 = 0;
    GameData_21f0638 = 0;
    GameData_21f0658 = 0;
    GameData_21f0650 = 0;
    GameData_21f0648 = 0;
    GameData_21f0660 = 10;
    GameData_21f0668 = 0;
    GameData_21f0670 = 0;
    GameData_21f0588 = 0;
    GameData_21f05e8 = 0;
    GameData_21f05f0 = 0;
    GameData_21f05f8 = 0;
    GameData_21f0608 = 0;
    GameData_21f0610 = (__int64)GameRoutine_881a60;
    GameData_21f0618 = 0;
    GameData_21f0620 = 0;
    GameData_21f05a8 = 0;
    GameData_21f05b8 = 0;
    GameData_21f05c8 = 0;
    GameData_21f05d8 = 0;
    GameData_21f05e0 = 0;
    GameData_21f0508 = 0;
    GameData_21f0558 = 0;
    GameData_21f0560 = 0;
    GameData_21f0568 = 0;
    GameData_21f0570 = 0;
    GameData_21f0578 = 0;
    GameData_21f0598 = 0;
    GameData_21f0590 = 0;
    GameData_21f0518 = 0;
    GameData_21f0520 = 0;
    GameData_21f0528 = 0;
    GameData_21f0530 = 0;
    GameData_21f0538 = 0;
    GameData_21f0548 = 0;
    GameData_21f0468 = 0;
    GameData_21f04b8 = 0;
    GameData_21f04c8 = 0;
    GameData_21f04d0 = (__int64)ProcGmapSeq_882cb0;
    GameData_21f04d8 = 0;
    GameData_21f04e0 = 0;
    GameData_21f04e8 = 0;
    GameData_21f04f0 = 0;
    GameData_21f04f8 = 0;
    GameData_21f0470 = 0;
    GameData_21f0478 = 0;
    GameData_21f0488 = 0;
    GameData_21f0498 = 0;
    GameData_21f04a0 = 0;
    GameData_21f04a8 = 0;
    GameData_21f04b0 = 0;
    GameData_21f0418 = 0;
    GameData_21f0420 = 0;
    GameData_21f0428 = 0;
    GameData_21f0430 = 0;
    GameData_21f0438 = 0;
    GameData_21f0448 = 0;
    GameData_21f0450 = 0;
    GameData_21f0458 = 0;
    GameData_21f03d8 = 0;
    GameData_21f03d0 = 0;
    GameData_21f03c8 = 0;
    GameData_21f03e0 = 10;
    GameData_21f03e8 = 0;
    GameData_21f03f0 = 0;
    GameData_21f03f8 = 0;
    GameData_21f0408 = 0;
    GameData_21f0410 = (__int64)GameRoutine_881a60;
    GameData_21f0360 = 0;
    GameData_21f0368 = 0;
    GameData_21f0370 = 0;
    GameData_21f0378 = 0;
    GameData_21f0390 = (__int64)ProcGmapSeq_882f10;
    GameData_21f0398 = 0;
    GameData_21f03a0 = 0;
    GameData_21f03a8 = 0;
    GameData_21f03b0 = 0;
    GameData_21f03b8 = 0;
    GameData_21f0308 = 0;
    GameData_21f0310 = (__int64)ProcGmapSeq_882900;
    GameData_21f0318 = 0;
    GameData_21f0320 = 0;
    GameData_21f0328 = 0;
    GameData_21f0330 = 0;
    GameData_21f0338 = 0;
    GameData_21f0348 = 0;
    GameData_21f0350 = (__int64)ProcGmapSeq_8827e0;
    GameData_21f0358 = 0;
    GameData_21f01e0 = 7;
    GameData_21f01e8 = 0;
    GameData_21f02c8 = 0;
    GameData_21f02d0 = (__int64)ProcGmapSeq_882cb0;
    GameData_21f02d8 = 0;
    GameData_21f02e0 = 0;
    GameData_21f02e8 = 0;
    GameData_21f02f0 = 0;
    GameData_21f02f8 = 0;
    GameData_21f0288 = 0;
    GameData_21f0298 = 0;
    GameData_21f02a0 = 0;
    GameData_21f02a8 = 0;
    GameData_21f02b0 = 0;
    GameData_21f02b8 = 0;
    GameData_21f0238 = 0;
    GameData_21f0248 = 0;
    GameData_21f0258 = 0;
    GameData_21f0260 = 0;
    GameData_21f0268 = 0;
    GameData_21f0270 = 0;
    GameData_21f0278 = 0;
    GameData_21f01f0 = 0;
    GameData_21f01f8 = 0;
    GameData_21f0600 = 13;
    GameData_21f0b00 = 13;
    GameData_21f07c0 = 13;
    GameData_21f0900 = 25;
    GameData_21efb10 = (__int64)game_gmap_ProcGmapSeq_TryGetFarmProduct;
    GameData_21f0208 = 0;
    GameData_21f05b0 = 400;
    GameData_21f0a80 = 2;
    GameData_21f0780 = 13;
    GameData_21f0840 = 13;
    GameData_21efb50 = (__int64)ProcGmapSeq_883020;
    GameData_21f05c0 = 13;
    GameData_21f0ac0 = 13;
    GameData_21f0790 = (__int64)GameRoutine_885110;
    GameData_21f0218 = 0;
    GameData_21f0220 = 0;
    GameData_21f0228 = 0;
    GameData_21f0230 = 0;
    GameData_21f0090 = 0;
    GameData_21f05d0 = (__int64)ProcGmapSeq_884fb0;
    GameData_21f0a00 = 13;
    GameData_21f0720 = 11;
    GameData_21ef8d0 = (__int64)MiasmaManager_14a9f60_ptr[0];
    GameData_21f0190 = (__int64)GameRoutine_881a60;
    GameData_21f0198 = 0;
    GameData_21f01a0 = 0;
    GameData_21f0510 = (__int64)ProcGmapSeq_884eb0;
    GameData_21f0a40 = 13;
    GameData_21f0740 = 13;
    GameData_21f08c0 = 17;
    GameData_21ef900 = 17;
    GameData_21f0540 = 14;
    GameData_21f0a10 = (__int64)GameRoutine_885130;
    GameData_21f0750 = (__int64)ProcGmapSeq_884ff0;
    GameData_21f0850 = (__int64)GameRoutine_885120;
    GameData_21f01a8 = 0;
    GameData_21f01b0 = 0;
    GameData_21f01b8 = 0;
    GameData_21f0550 = (__int64)ProcGmapSeq_884f00;
    GameData_21f0980 = 13;
    GameData_21f0680 = 13;
    GameData_21f0880 = 13;
    GameData_21f01d8 = 0;
    GameData_21f01d0 = 0;
    GameData_21f01c8 = 0;
    GameData_21f0140 = 13;
    GameData_21f03c0 = 25;
    GameData_21f09c0 = 2;
    GameData_21f0700 = 2;
    GameData_21f0800 = 2;
    GameData_21f0148 = 0;
    GameData_21f0158 = 0;
    GameData_21f0400 = 13;
    GameData_21f0940 = 13;
    GameData_21f0690 = (__int64)GameRoutine_884fe0;
    GameData_21f0820 = 12;
    GameData_21f0300 = 13;
    GameData_21f0160 = 0;
    GameData_21f0168 = 0;
    GameData_21f0170 = 0;
    GameData_21f0178 = 0;
    GameData_21f0380 = 13;
    GameData_21f06c0 = 26;
    GameData_21f0180 = 13;
    GameData_21f0188 = 0;
    GameData_21f00f0 = 0;
    GameData_21f00f8 = 0;
    GameData_21f0100 = 8;
    GameData_21f0340 = 13;
    GameData_21f0500 = 13;
    GameData_21f0640 = 2;
    GameData_21f0280 = 13;
    GameData_21f0580 = 4;
    GameData_21f0290 = (__int64)ProcGmapSeq_884920;
    GameData_21f04c0 = 14;
    GameData_21f02c0 = 14;
    GameData_21f0480 = 13;
    GameData_21f0240 = 14;
    GameData_21f0490 = (__int64)ProcGmapSeq_884e80;
    GameData_21f0250 = (__int64)ProcGmapSeq_8846c0;
    GameData_21f0440 = 2;
    GameData_21f0200 = 13;
    GameData_21f0460 = 9;
    GameData_21f0210 = (__int64)ProcGmapSeq_884100;
    GameData_21f01c0 = 2;
    GameData_21f0150 = (__int64)ProcGmapSeq_8840d0;
    GameData_21f0128 = 0;
    GameData_21f0130 = 0;
    GameData_21f0138 = 0;
    GameData_21f0120 = 0;
    GameData_21f0118 = 0;
    GameData_21f0110 = 0;
    GameData_21f0088 = 0;
    GameData_21f00a8 = 0;
    GameData_21f00b0 = 0;
    GameData_21f00b8 = 0;
    GameData_21f00c0 = 13;
    GameData_21f00c8 = 0;
    GameData_21f00d0 = (__int64)ProcGmapSeq_883400;
    GameData_21f00d8 = 0;
    GameData_21f00e0 = 0;
    GameData_21f00e8 = 0;
    GameData_21efef0 = 0;
    GameData_21effe8 = 0;
    GameData_21f0040 = 13;
    GameData_21f0048 = 0;
    GameData_21f0050 = (__int64)GameRoutine_881a60;
    GameData_21f0058 = 0;
    GameData_21f0060 = 0;
    GameData_21f0068 = 0;
    GameData_21f0070 = 0;
    GameData_21f0078 = 0;
    GameData_21f0080 = 2;
    GameData_21f0098 = 0;
    GameData_21efff0 = 0;
    GameData_21efff8 = 0;
    GameData_21f0000 = 13;
    GameData_21f0008 = 0;
    GameData_21f0018 = 0;
    GameData_21f0020 = 0;
    GameData_21f0028 = 0;
    GameData_21f0030 = 0;
    GameData_21f0038 = 0;
    GameData_21efef8 = 0;
    GameData_21effa0 = 0;
    GameData_21effa8 = 0;
    GameData_21effb0 = 0;
    GameData_21effb8 = 0;
    GameData_21effc0 = 13;
    GameData_21effc8 = 0;
    GameData_21effd0 = (__int64)GameRoutine_881a60;
    GameData_21effd8 = 0;
    GameData_21effe0 = 0;
    GameData_21eff58 = 0;
    GameData_21eff60 = 0;
    GameData_21eff68 = 0;
    GameData_21eff70 = 0;
    GameData_21eff78 = 0;
    GameData_21eff80 = 13;
    GameData_21eff88 = 0;
    GameData_21eff98 = 0;
    GameData_21eff00 = 13;
    GameData_21eff08 = 0;
    GameData_21eff18 = 0;
    GameData_21eff20 = 0;
    GameData_21eff28 = 0;
    GameData_21eff30 = 0;
    GameData_21eff38 = 0;
    GameData_21eff40 = 13;
    GameData_21eff48 = 0;
    GameData_21efe40 = 13;
    GameData_21efe48 = 0;
    GameData_21efea0 = 0;
    GameData_21efea8 = 0;
    GameData_21efeb0 = 0;
    GameData_21efeb8 = 0;
    GameData_21efec0 = 2;
    GameData_21efed8 = 0;
    GameData_21efed0 = 0;
    GameData_21efec8 = 0;
    GameData_21efee0 = 8;
    GameData_21efee8 = 0;
    GameData_21efe58 = 0;
    GameData_21efe60 = 0;
    GameData_21efe68 = 0;
    GameData_21efe70 = 0;
    GameData_21efe78 = 0;
    GameData_21efe80 = 13;
    GameData_21efe88 = 0;
    GameData_21efe90 = (__int64)GameRoutine_881a60;
    GameData_21efe98 = 0;
    GameData_21efbf8 = 0;
    GameData_21efcf8 = 0;
    GameData_21efdf0 = 0;
    GameData_21efdf8 = 0;
    GameData_21efe00 = 13;
    GameData_21efe08 = 0;
    GameData_21efe10 = (__int64)GameRoutine_881a60;
    GameData_21efe18 = 0;
    GameData_21efe20 = 0;
    GameData_21efe28 = 0;
    GameData_21efe30 = 0;
    GameData_21efe38 = 0;
    GameData_21efda0 = 0;
    GameData_21efda8 = 0;
    GameData_21efdb0 = 0;
    GameData_21efdb8 = 0;
    GameData_21efdc0 = 13;
    GameData_21efdc8 = 0;
    GameData_21efdd8 = 0;
    GameData_21efde0 = 0;
    GameData_21efde8 = 0;
    GameData_21efd68 = 0;
    GameData_21efd70 = 0;
    GameData_21efd78 = 0;
    GameData_21efd60 = 0;
    GameData_21efd58 = 0;
    GameData_21efd50 = 0;
    GameData_21efd80 = 13;
    GameData_21efd88 = 0;
    GameData_21efd98 = 0;
    GameData_21efd00 = 13;
    GameData_21efd08 = 0;
    GameData_21efd10 = (__int64)ProcGmapSeq_883400;
    GameData_21efd18 = 0;
    GameData_21efd20 = 0;
    GameData_21efd28 = 0;
    GameData_21efd30 = 0;
    GameData_21efd38 = 0;
    GameData_21efd40 = 8;
    GameData_21f0108 = (__int64)GameData_212d788[0];
    GameData_21f00a0 = 6;
    GameData_21f0010 = (__int64)ProcGmapSeq_8838a0;
    GameData_21eff50 = (__int64)ProcGmapSeq_8836c0;
    GameData_21eff90 = (__int64)ProcGmapSeq_883860;
    GameData_21eff10 = (__int64)ProcGmapSeq_883680;
    GameData_21efe50 = (__int64)ProcGmapSeq_883660;
    GameData_21efdd0 = (__int64)ProcGmapSeq_883540;
    GameData_21efd90 = (__int64)ProcGmapSeq_883510;
    GameData_21efbe0 = 4;
    GameData_21f10a0 = 19;
    GameData_21f10e0 = 19;
    GameData_21efc90 = (__int64)GameRoutine_881a60;
    GameData_21efb90 = (__int64)GameRoutine_881a60;
    GameData_21f0bd0 = (__int64)GameRoutine_881a60;
    GameData_21f0d10 = (__int64)GameRoutine_881a60;
    GameData_21f0dd0 = (__int64)GameRoutine_881a60;
    GameData_21f0f50 = (__int64)GameRoutine_881a60;
    GameData_21efc00 = 13;
    GameData_21efc80 = 13;
    GameData_21efc40 = 13;
    GameData_21efca0 = 0;
    GameData_21efca8 = 0;
    GameData_21efcb0 = 0;
    GameData_21efcb8 = 0;
    GameData_21efcc0 = 2;
    GameData_21efcd8 = 0;
    GameData_21efcd0 = 0;
    GameData_21efcc8 = 0;
    GameData_21efce8 = 0;
    GameData_21efcf0 = 0;
    GameData_21efc58 = 0;
    GameData_21efc60 = 0;
    GameData_21efc68 = 0;
    GameData_21efc70 = 0;
    GameData_21efc78 = 0;
    GameData_21efc88 = 0;
    GameData_21efc98 = 0;
    GameData_21efc08 = 0;
    GameData_21efc18 = 0;
    GameData_21efc20 = 0;
    GameData_21efc28 = 0;
    GameData_21efc30 = 0;
    GameData_21efc38 = 0;
    GameData_21efc48 = 0;
    GameData_21efb88 = 0;
    GameData_21efba0 = 0;
    GameData_21efba8 = 0;
    GameData_21efbb0 = 0;
    GameData_21efbb8 = 0;
    GameData_21efbc0 = 2;
    GameData_21efbd8 = 0;
    GameData_21efbd0 = 0;
    GameData_21efbc8 = 0;
    GameData_21efbe8 = 0;
    GameData_21efbf0 = 0;
    GameData_21efb98 = 0;
    GameData_21f0b20 = 0;
    GameData_21f0b28 = 0;
    GameData_21f0b30 = 0;
    GameData_21f0b38 = 0;
    GameData_21f0b58 = 0;
    GameData_21f0b50 = 0;
    GameData_21f0b48 = 0;
    GameData_21f0b60 = 15;
    GameData_21f0b68 = 0;
    GameData_21f0b70 = 0;
    GameData_21f0b78 = 0;
    GameData_21f0b88 = 0;
    GameData_21f0b98 = 0;
    GameData_21f0ba0 = 0;
    GameData_21f0ba8 = 0;
    GameData_21f0bb0 = 0;
    GameData_21f0bb8 = 0;
    GameData_21f0bc8 = 0;
    GameData_21f0bd8 = 0;
    GameData_21f0be0 = 0;
    GameData_21f0be8 = 0;
    GameData_21f0bf0 = 0;
    GameData_21f0bf8 = 0;
    GameData_21f0c18 = 0;
    GameData_21f0c10 = 0;
    GameData_21f0c08 = 0;
    GameData_21f0c28 = 0;
    GameData_21f0c30 = 0;
    GameData_21f0c38 = 0;
    GameData_21f0c48 = 0;
    GameData_21f0c58 = 0;
    GameData_21f0c60 = 0;
    GameData_21f0c68 = 0;
    GameData_21f0c70 = 0;
    GameData_21f0c78 = 0;
    GameData_21f0c88 = 0;
    GameData_21f0c98 = 0;
    GameData_21f0ca0 = 0;
    GameData_21f0ca8 = 0;
    GameData_21f0cb0 = 0;
    GameData_21f0cb8 = 0;
    GameData_21f0cc8 = 0;
    GameData_21f0cd8 = 0;
    GameData_21f0ce0 = 0;
    GameData_21f0ce8 = 0;
    GameData_21f0cf0 = 0;
    GameData_21f0cf8 = 0;
    GameData_21f0d08 = 0;
    GameData_21f0d18 = 0;
    GameData_21f0b40 = 2;
    GameData_21f1100 = 13;
    GameData_21f0f80 = 2;
    GameData_21f0d20 = 0;
    GameData_21f0d28 = 0;
    GameData_21f0d30 = 0;
    GameData_21f0d38 = 0;
    GameData_21f0d58 = 0;
    GameData_21f0b80 = 13;
    GameData_21f1110 = (__int64)ProcGmapSeq_8868e0;
    GameData_21f0fc0 = 13;
    GameData_21f0d50 = 0;
    GameData_21f0d48 = 0;
    GameData_21f0d60 = 18;
    GameData_21f0d68 = 0;
    GameData_21f0b90 = (__int64)game_gmap_ProcGmapSeq_LimitOver;
    GameData_21f1140 = 13;
    GameData_21f0d70 = 0;
    GameData_21f0d78 = 0;
    GameData_21f0d88 = 0;
    GameData_21f0d98 = 0;
    GameData_21f0da0 = 0;
    GameData_21f0da8 = 0;
    GameData_21f0db0 = 0;
    GameData_21f0db8 = 0;
    GameData_21f0bc0 = 13;
    GameData_21f1180 = 13;
    GameData_21efd48 = (__int64)game_gmap_154d9a0_ptr[0];
    GameData_21f0dc8 = 0;
    GameData_21f0dd8 = 0;
    GameData_21f0de0 = 0;
    GameData_21f0de8 = 0;
    GameData_21f0df0 = 0;
    GameData_21f0c00 = 2;
    GameData_21f1190 = (__int64)GameRoutine_886a80;
    GameData_21efce0 = 5;
    GameData_21f0df8 = 0;
    GameData_21f0e08 = 0;
    GameData_21f0e18 = 0;
    GameData_21f0e20 = 0;
    GameData_21f0e28 = 0;
    GameData_21f0c20 = 16;
    GameData_21f11c0 = 13;
    GameData_21efc10 = (__int64)ProcGmapSeq_883220;
    GameData_21f0e30 = 0;
    GameData_21f0e38 = 0;
    GameData_21f0e48 = 0;
    GameData_21f0e50 = (__int64)GameData_212c720;
    GameData_21f0c40 = 13;
    GameData_21f11d0 = (__int64)ProcGmapSeq_886a90;
    GameData_21efc50 = (__int64)ProcGmapSeq_8832a0;
    GameData_21f0e60 = 0;
    GameData_21f0e68 = 0;
    GameData_21f0e70 = 0;
    GameData_21f0e78 = 0;
    GameData_21f0c50 = (__int64)ProcGmapSeq_8855f0;
    GameData_21f1200 = 10;
    GameData_21f0e88 = 0;
    GameData_21f0e98 = 0;
    GameData_21f0ea0 = 0;
    GameData_21f0ea8 = 0;
    GameData_21f0eb0 = 0;
    GameData_21f0eb8 = 0;
    GameData_21f0ec8 = 0;
    GameData_21f0ed8 = 0;
    GameData_21f0c80 = 14;
    GameData_21f1240 = 18;
    GameData_21f0ee0 = 0;
    GameData_21f0ee8 = 0;
    GameData_21f0ef0 = 0;
    GameData_21f0ef8 = 0;
    GameData_21f0f08 = 0;
    GameData_21f0f10 = (__int64)GameData_212c720;
    GameData_21f0f20 = 0;
    GameData_21f0c90 = (__int64)ProcGmapSeq_885750;
    GameData_21f1280 = 13;
    GameData_21f0f28 = 0;
    GameData_21f0f30 = 0;
    GameData_21f0f38 = 0;
    GameData_21f0f48 = 0;
    GameData_21f0f58 = 0;
    GameData_21f0f60 = 0;
    GameData_21f0f68 = 0;
    GameData_21f0cc0 = 13;
    GameData_21f1290 = (__int64)ProcGmapSeq_886c20;
    GameData_21f0f70 = 0;
    GameData_21f0f78 = 0;
    GameData_21f0f98 = 0;
    GameData_21f0f90 = 0;
    GameData_21f0f88 = 0;
    GameData_21f0fa0 = 17;
    GameData_21f0fa8 = 0;
    GameData_21f0cd0 = (__int64)ProcGmapSeq_885840;
    GameData_21f12c0 = 13;
    GameData_21f0fb0 = 0;
    GameData_21f0fb8 = 0;
    GameData_21f0fc8 = 0;
    GameData_21f0fd0 = (__int64)ProcGmapSeq_8866a0;
    GameData_21f0fd8 = 0;
    GameData_21f0fe0 = 0;
    GameData_21f0fe8 = 0;
    GameData_21f0ff0 = 0;
    GameData_21f0ff8 = 0;
    GameData_21f0d00 = 13;
    GameData_21f1008 = 0;
    GameData_21f1018 = 0;
    GameData_21f1020 = 0;
    GameData_21f1028 = 0;
    GameData_21f1030 = 0;
    GameData_21f1038 = 0;
    GameData_21f1048 = 0;
    GameData_21f1058 = 0;
    GameData_21f1060 = 0;
    GameData_21f1068 = 0;
    GameData_21f0d40 = 2;
    GameData_21f1070 = 0;
    GameData_21f1078 = 0;
    GameData_21f1098 = 0;
    GameData_21f1090 = 0;
    GameData_21f1088 = 0;
    GameData_21f10a8 = 0;
    GameData_21f10b0 = 0;
    GameData_21f10b8 = 0;
    GameData_21f10c8 = 0;
    GameData_21f10d0 = 0;
    GameData_21f0d80 = 13;
    GameData_21f10d8 = 0;
    GameData_21f10e8 = 0;
    GameData_21f10f0 = 0;
    GameData_21f10f8 = 0;
    GameData_21f1108 = 0;
    GameData_21f1118 = 0;
    GameData_21f1120 = 0;
    GameData_21f1128 = 0;
    GameData_21f1130 = 0;
    GameData_21f0d90 = (__int64)ProcGmapSeq_885880;
    GameData_21f1138 = 0;
    GameData_21f1148 = 0;
    GameData_21f1150 = (__int64)ProcGmapSeq_8866a0;
    GameData_21f1158 = 0;
    GameData_21f1160 = 0;
    GameData_21f1168 = 0;
    GameData_21f1170 = 0;
    GameData_21f1178 = 0;
    GameData_21f1188 = 0;
    GameData_21f1198 = 0;
    GameData_21f0dc0 = 13;
    GameData_21f11a0 = 0;
    GameData_21f11a8 = 0;
    GameData_21f11b0 = 0;
    GameData_21f11b8 = 0;
    GameData_21f11c8 = 0;
    GameData_21f11d8 = 0;
    GameData_21f11e0 = 0;
    GameData_21f11e8 = 0;
    GameData_21f11f0 = 0;
    GameData_21f11f8 = 0;
    GameData_21f0e00 = 13;
    GameData_21f1208 = 0;
    GameData_21f1210 = (__int64)GameData_212c720;
    GameData_21f1220 = 0;
    GameData_21f1228 = 0;
    GameData_21f1230 = 0;
    GameData_21f1238 = 0;
    GameData_21f1268 = 0;
    GameData_21f1270 = 0;
    GameData_21f1278 = 0;
    GameData_21f0e10 = (__int64)ProcGmapSeq_885b00;
    GameData_21f1260 = 0;
    GameData_21f1258 = 0;
    GameData_21f1250 = 0;
    GameData_21f1248 = 0;
    GameData_21f1288 = 0;
    GameData_21f1298 = 0;
    GameData_21f12a0 = 0;
    GameData_21f12a8 = 0;
    GameData_21f12b0 = 0;
    GameData_21f12b8 = 0;
    GameData_21f0e40 = 10;
    GameData_21f12c8 = 0;
    GameData_21f12d8 = 0;
    GameData_21f12e0 = 0;
    GameData_21f12e8 = 0;
    GameData_21f12f0 = 0;
    GameData_21f12f8 = 0;
    GameData_21f1328 = 0;
    GameData_21f1330 = 0;
    GameData_21f1338 = 0;
    GameData_21f1320 = 0;
    GameData_21f0e80 = 13;
    GameData_21f1318 = 0;
    GameData_21f1310 = 0;
    GameData_21f1308 = 0;
    GameData_21f0e90 = (__int64)ProcGmapSeq_885f00;
    GameData_21f0ec0 = 13;
    GameData_21f0ed0 = (__int64)ProcGmapSeq_8865e0;
    GameData_21f0f00 = 10;
    GameData_21f0f40 = 13;
    GameData_21f1000 = 13;
    GameData_21f1010 = (__int64)ProcGmapSeq_886770;
    GameData_21f1040 = 13;
    GameData_21f1050 = (__int64)ProcGmapSeq_886870;
    GameData_21f12d0 = (__int64)ProcGmapSeq_886c80;
    GameData_21f1080 = 12;
    GameData_21f1300 = 0;
    GameData_21f10c0 = 2;
    __cxa_guard_release((__int64)&GameData_21f1340);
  }
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      320, 16, 0);
  v6 = GameData_212c608[0];
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register(v5);
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 192) = 0;
  GameData_21f1618 = v5;
  *(_QWORD*)v5 = GameData_1fa6fb0;
  v7 = *v4;
  *(_QWORD*)(v5 + 208) = GameData_212d6d0 + 2;
  v8 = (_QWORD*)fw_memory_HeapManager_Allocate(v7, 24, 16, 0);
  v9 = GameData_21eea40;
  v8[1] = &GameData_21eea40;
  v8[2] = v5 + 208;
  GameData_21eea40 = (__int64)v8;
  *v8 = v9;
  *(_QWORD*)(v9 + 8) = v8;
  v17[1] = (unsigned __int64)&GameData_1acc6e7;
  ++GameData_21eea50;
  *(_QWORD*)v5 = game_gmap_ProcGmapSeq_vtable;
  *(_QWORD*)(v5 + 208) = GameData_1fa6ed0;
  v17[0] = game_HashString((__int64)&GameData_1acc6e7);
  v10 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v11 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), v17);
    if (v11 != 0) {
      v10 = *(_DWORD*)(v11 + 32);
    }
    else {
      v10 = 0;
    }
  }
  *(_DWORD*)(v5 + 216) = v10;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  v12 = GameData_212d2f0;
  *(_DWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_DWORD*)(v5 + 272) = 0;
  *(_DWORD*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 240) = 0;
  *(_QWORD*)(v5 + 248) = v12 + 2;
  *(_QWORD*)(v5 + 296) = GameData_212d040 + 16;
  GameRoutine_15446c0(*(__int64**)(*(_QWORD*)GameData_212d740[0] + 8LL), a2);
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_DWORD*)(v5 + 292) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_WORD*)(v5 + 304) = 256;
  *(_DWORD*)(v5 + 306) = 0;
  *(_DWORD*)(v5 + 309) = 0;
  v13 = (_DWORD*)GameData_212d168;
  v14 = GameData_21d92dc;
  v15 = *GameData_212d168;
  ++GameData_21d92dc;
  GameData_21d925c[v14] = v15;
  *(_DWORD*)v13 = 6;
  game_GameView_Update();
  return ProcInst_657850(v5, (__int64)&GameData_21ef1c0, (__int64)"ProcGmapSeq",
                         1, a1);
}

void game_9b9cb0(__int64 a1, float32x4_t* a2, float32x4_t* a3)
{

#pragma clang fp contract(off)
  float32x4_t v3;
  float32x4_t v4;
  float v6;
  float v7;
  __int128 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  signed __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  struct {
    __int64 v29;
    __int64 v30;
  } v29_;
  _QWORD v31[8];

  v3 = *a2;
  v4 = *a3;
  v7 = *(float*)(a1 + 104);
  v6 = *(float*)(a1 + 108);
  HIDWORD(v8) = 0;
  *(float*)&v8 =
      0x1.0000000000000p-1f * LANES128_OF(vaddq_f32(*a2, *a3)).n128_f32[0];
  *((float*)&v8 + 1) = (float)(v6 + v7) * 0x1.0000000000000p-1f;
  *(_OWORD*)v31 = GameData_1a82dd0;
  *(_OWORD*)&v31[2] = GameData_1a83610;
  *((float*)&v8 + 2) =
      (float)(LANES128(v3).n128_f32[2] + LANES128(v4).n128_f32[2]) *
      0x1.0000000000000p-1f;
  *(_OWORD*)&v31[4] = GameData_1a83090;
  *(_OWORD*)&v31[6] = v8;
  Shape_f643c0(
      (void*)(&v29_.v29), (__int64)v31, 8, 0,
      COERCE_AS(float, (unsigned int)(COERCE_UNSIGNED_INT(
                           0x1.0000000000000p-1f *
                           LANES128_OF(vsubq_f32(v4, v3)).n128_f32[0]))),
      COERCE_AS(float, (unsigned int)(COERCE_UNSIGNED_INT(
                           (float)(v6 - v7) * 0x1.0000000000000p-1f))),
      (float)(LANES128(v4).n128_f32[2] - LANES128(v3).n128_f32[2]) *
          0x1.0000000000000p-1f);
  v9 = *(_QWORD*)(a1 + 48) + *(_QWORD*)(a1 + 40) - 1LL;
  v10 =
      (_QWORD*)(a1 + 24LL * *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) +
                                                           8 * (v9 >> 12)) +
                                                (v9 & 0xFFF)));
  v11 = (_QWORD*)v10[8];
  v12 = v10[9];
  if ((unsigned __int64)v11 >= v12) {
    v15 = v10[7];
    v16 = (signed __int64)v11 - v15;
    v17 = ((__int64)v11 - v15) >> 4;
    v18 = v17 + 1;
    if ((unsigned __int64)(v17 + 1) >> 60 != 0) {
      GameRoutine_9baea0();
    }
    v19 = v12 - v15;
    if (v19 >> 3 > v18) {
      v18 = v19 >> 3;
    }
    if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF0LL) {
      v20 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v20 = v18;
    }
    if (v20 >> 60 != 0) {
      GameRoutine_60a210();
    }
    v21 = fw_memory_g_heap_manager_ptr;
    v22 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         16 * v20, 16, 0);
    v23 = v29_.v30;
    v24 = (_QWORD*)(v22 + v16);
    v25 = v22 + 16 * v20;
    *v24 = v29_.v29;
    v24[1] = v23;
    if (v23 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                                memory_order_relaxed);
      v15 = v10[7];
      v16 = v10[8] - v15;
      v17 = v16 >> 4;
    }
    v26 = (__int64)&v24[-2 * v17];
    v14 = v24 + 2;
    memcpy(v26, v15, v16);
    v10[7] = v26;
    v10[8] = v14;
    v10[9] = v25;
    if (v15 != 0) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v27, v15);
    }
  }
  else {
    *v11 = v29_.v29;
    v13 = v29_.v30;
    v11[1] = v29_.v30;
    if (v13 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                memory_order_relaxed);
    }
    v14 = v11 + 2;
  }
  v28 = v29_.v30;
  v10[8] = v14;
  if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
}

__int64 game_a0c630(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 result;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  int v8;
  float v9;
  _DWORD* v10;
  __int64 v11;
  int v12;
  __int16* v13;
  float v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[4];
  _QWORD* v19;
  _QWORD v20[4];
  _QWORD* v21;
  _QWORD v22[4];
  _QWORD* v23;
  __int64 v24;
  __int64 v25;

  result = (__int64)(a1 + 19);
  if (a1 == nullptr) {
    return result;
  }
  v24 = v1;
  v25 = v2;
  v5 = result;
  if ((*(_BYTE*)(result + 12) & 1) != 0) {
    return result;
  }
  v6 = a1;
  GameHr_8679c0();
  v7 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v8 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v8 & 0x10) == 0) {
      v9 = *(float*)(game_ProcGameSkipView_instance_ + 224);
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v8 & 0xFFFFFFE2 | 1;
      if (v9 > 0x0.0p+0f) {
        *(_DWORD*)(v7 + 224) = 0;
      }
    }
  }
  v10 = (_DWORD*)GameData_212d168;
  v11 = GameData_21d92dc;
  v12 = *GameData_212d168;
  ++GameData_21d92dc;
  GameData_21d925c[v11] = v12;
  *(_DWORD*)v10 = 2;
  game_GameView_Update();
  v22[0] = "Facility";
  v22[1] = 8;
  ProcRegistry_65a2e0(v6, v22);
  *(_DWORD*)(v5 + 8) = ((*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                         *(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL)) >>
                        3) -
                       1;
  *(_BYTE*)(v5 + 12) = 1;
  game_GameView_Update();
  if (game_gmap_GmapClock_instance_ != 0) {
    v13 = (__int16*)(game_gmap_GmapClock_instance_ + 32);
  }
  else {
    v13 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if (v13[1] * *v13 * v13[2] != 0 ||
      (game_gmap_GmapClock_instance_ != 0
           ? (v13 = (__int16*)(game_gmap_GmapClock_instance_ + 8))
           : (v13 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr),
       game_gmap_GmapClock_instance_ == 0)) {
    v14 = 0x0.0p+0f;
  }
  else {
    v14 = *(float*)(game_gmap_GmapClock_instance_ + 44);
  }
  game_8697c0(v13, 0, v14);
  if ((*(_BYTE*)(v5 + 28) & 1) == 0) {
    GameRoutine_1553130(17);
    *(_DWORD*)(v5 + 24) = 17;
    *(_BYTE*)(v5 + 28) = 1;
  }
  v22[0] = GameData_21198a0;
  v22[1] = v5;
  v23 = v22;
  v20[0] = GameData_2119920;
  v20[1] = FacilitySceneBase_1958ea0;
  v19 = v18;
  v21 = v20;
  v18[0] = GameData_21199c0;
  ProcGameUIFade_15e1e60((__int64)v22, (__int64)v20, (__int64)v18);
  if (v19 == v18) {
    v15 = 32;
  }
  else {
    if (v19 == nullptr) {
      goto LABEL_24;
    }
    v15 = 40;
  }
  (*(void (**)(__int64))(*v19 + v15))((__int64)v19);
LABEL_24:
  if (v21 == v20) {
    v16 = 32;
    goto LABEL_28;
  }
  if (v21 != nullptr) {
    v16 = 40;
  LABEL_28:
    (*(void (**)(__int64))(*v21 + v16))((__int64)v21);
  }
  result = (__int64)v23;
  if (v23 == v22) {
    v17 = 32;
  }
  else {
    if (v23 == nullptr) {
      return result;
    }
    v17 = 40;
  }
  return (*(__int64 (**)(__int64))(*v23 + v17))((__int64)v23);
}

__int64 game_ca8780(__int64 a1)
{
  _DWORD* v2;
  __int64 v3;
  __int64* v4;
  int v5;
  __int64 v6;
  int* v7;
  int v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  _QWORD* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;

  *(_QWORD*)a1 = util_HandlePtr_vtable;
  *(_QWORD*)(a1 + 8) = 0x400000000000LL;
  v2 = (_DWORD*)GameData_212c340;
  v3 = (unsigned int)*GameData_212c340;
  if ((unsigned int)v3 < *GameData_212c348) {
    v4 = (__int64*)(*util_g_handle_slots_ptr[0] + 16 * v3);
    v5 = *GameData_212c340;
    while (*v4 != 0) {
      ++v5;
      v4 += 2;
      if (*GameData_212c348 == v5) {
        goto LABEL_5;
      }
    }
    goto LABEL_10;
  }
LABEL_5:
  if ((_DWORD)v3 != 0) {
    v5 = 0;
    v4 = (__int64*)*util_g_handle_slots_ptr[0];
    while (*v4 != 0) {
      ++v5;
      v4 += 2;
      if ((_DWORD)v3 == v5) {
        goto LABEL_11;
      }
    }
  LABEL_10:
    v6 = *GameData_212c338 + 1;
    *GameData_212c338 = v6;
    *v4 = v6;
    v4[1] = a1;
    *(_DWORD*)(a1 + 12) = v5;
    *(_DWORD*)v2 = v5;
  }
LABEL_11:
  v7 = (int*)GameData_212c350;
  *(_BYTE*)(a1 + 872) = 0;
  *(_BYTE*)(a1 + 880) = 0;
  *(_BYTE*)(a1 + 944) = 0;
  *(_BYTE*)(a1 + 952) = 0;
  v8 = *v7;
  *(_BYTE*)(a1 + 1016) = 0;
  *v7 = v8 + 1;
  *(_QWORD*)a1 = Character_Destructor_ca8b40_ptr;
  memset(a1 + 264, 0, 0x1ECu);
  *(_QWORD*)(a1 + 1064) = 0;
  *(_QWORD*)(a1 + 760) = 0;
  *(_QWORD*)(a1 + 768) = 0;
  *(_QWORD*)(a1 + 776) = 0;
  *(_QWORD*)(a1 + 784) = 0;
  *(_QWORD*)(a1 + 792) = 0;
  *(_QWORD*)(a1 + 1069) = 0;
  *(_QWORD*)(a1 + 800) = 0;
  *(_BYTE*)(a1 + 808) = 0;
  *(_DWORD*)(a1 + 1024) = 0;
  *(_BYTE*)(a1 + 1060) = 0;
  *(_BYTE*)(a1 + 1080) = 0;
  *(_DWORD*)(a1 + 1120) = 0;
  *(_BYTE*)(a1 + 1124) = 0;
  *(_BYTE*)(a1 + 1128) = 0;
  *(_BYTE*)(a1 + 1132) = 0;
  *(_QWORD*)(a1 + 1136) = 0;
  *(_DWORD*)(a1 + 1160) = 4;
  *(_QWORD*)(a1 + 1144) = 0;
  *(_QWORD*)(a1 + 1152) = 0;
  *(_DWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_BYTE*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 1032) = 0;
  *(_QWORD*)(a1 + 1040) = 0;
  *(_QWORD*)(a1 + 1048) = 0;
  *(_BYTE*)(a1 + 1056) = 0;
  *(_QWORD*)(a1 + 1084) = 0;
  *(_QWORD*)(a1 + 1092) = 0;
  *(_QWORD*)(a1 + 1100) = 0;
  *(_QWORD*)(a1 + 1108) = 0;
  *(_BYTE*)(a1 + 1116) = 0;
  *(_QWORD*)(a1 + 1168) = 0;
  *(_QWORD*)(a1 + 1176) = 0;
  *(_QWORD*)(a1 + 1184) = 0;
  *(_WORD*)(a1 + 1192) = 256;
  v9 = GameData_212d2f0 + 2;
  *(_DWORD*)(a1 + 1208) = 0;
  *(_QWORD*)(a1 + 1216) = 0;
  *(_DWORD*)(a1 + 1224) = 0;
  *(_BYTE*)(a1 + 1304) = 0;
  *(_BYTE*)(a1 + 1312) = 0;
  *(_DWORD*)(a1 + 1320) = 0;
  *(_BYTE*)(a1 + 1328) = 0;
  *(_QWORD*)(a1 + 1232) = 0;
  *(_QWORD*)(a1 + 1240) = 0;
  *(_DWORD*)(a1 + 1248) = 0;
  *(_QWORD*)(a1 + 1264) = 0;
  *(_QWORD*)(a1 + 1272) = 0;
  *(_QWORD*)(a1 + 1280) = 0;
  *(_QWORD*)(a1 + 1288) = 0;
  *(_QWORD*)(a1 + 1200) = v9;
  *(_WORD*)(a1 + 1329) = 1;
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  v11 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  *(_BYTE*)(a1 + 1331) = 1;
  *(_DWORD*)(a1 + 1296) = 0;
  v12 = (_QWORD*)fw_memory_HeapManager_Allocate(v11, 56, 16, 0);
  v12[1] = 0;
  v12[2] = 0;
  *v12 = GameData_1fd3ed0;
  v13 = GameData_212f068;
  v14 = *(_QWORD*)(a1 + 80);
  v12[5] = 0;
  v12[6] = 0;
  v12[4] = a1;
  *(_QWORD*)(a1 + 80) = v12;
  v12[3] = v13 + 2;
  *(_QWORD*)(a1 + 72) = v12 + 3;
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v14);
  }
  v15 = fw_memory_HeapManager_Allocate(*v10, 88, 16, 0);
  *(_QWORD*)(v15 + 8) = 0;
  *(_QWORD*)(v15 + 16) = 0;
  *(_QWORD*)v15 = GameData_1fd3f20;
  v16 = GameData_212f1d8[0];
  v17 = *(_QWORD*)(a1 + 96);
  *(_WORD*)(v15 + 32) = 0;
  *(_QWORD*)(v15 + 56) = 0;
  *(_QWORD*)(v15 + 64) = 0;
  *(_QWORD*)(v15 + 72) = 0;
  *(_QWORD*)(v15 + 80) = 0;
  *(_QWORD*)(v15 + 40) = a1;
  *(_QWORD*)(v15 + 48) = 0;
  *(_QWORD*)(a1 + 96) = v15;
  *(_QWORD*)(v15 + 24) = v16 + 16;
  *(_QWORD*)(a1 + 88) = v15 + 24;
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak(v17);
  }
  v18 = fw_memory_HeapManager_Allocate(*v10, 80, 16, 0);
  v19 = *(_QWORD*)(a1 + 1240);
  *(_QWORD*)(v18 + 8) = 0;
  *(_QWORD*)(v18 + 16) = 0;
  *(_BYTE*)(v18 + 28) = 0;
  *(_BYTE*)(v18 + 72) = 0;
  *(_QWORD*)(v18 + 32) = 0;
  *(_QWORD*)(v18 + 40) = 0;
  *(_BYTE*)(v18 + 48) = 0;
  *(_QWORD*)(a1 + 1240) = v18;
  *(_QWORD*)v18 = GameData_1fd45f8;
  *(_BYTE*)(v18 + 24) = 0;
  result = v18 + 24;
  *(_QWORD*)(a1 + 1232) = result;
  if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    result = std___1___shared_weak_count___release_weak(v19);
  }
  *(_QWORD*)(*(_QWORD*)(a1 + 1232) + 8LL) = a1;
  *(_DWORD*)(a1 + 1072) = 0;
  *(_QWORD*)(a1 + 1064) = 0x3F8000003F800000LL;
  return result;
}

__attribute__((swiftcall)) void game_cfe0c0(PSEUDO_X8 x8_, __int64 a1,
                                            float32x4_t* a2, float32x4_t* a3)
{

#pragma clang fp contract(off)
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  float32x4_t* v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  float32x4_t* result;
  __int128 v15;
  __int128 v16;
  float32x4_t v17;
  float32x4_t v18;
  char v19;
  unsigned __int32 v20;
  int8x16_t v21;
  __int128 v22;
  struct {
    _QWORD v23[4];
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    int v29;
    char gap92_[4];
    float32x4_t v30;
    float32x4_t v31;
  } v23_;
  struct {
    _QWORD v32[4];
    char v33;
  } v32_;
  int8x16_t v34;
  struct {
    _QWORD v35[4];
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    int v41;
    char gap268_[4];
    char v42;
  } v35_;

  *(_BYTE*)a4 = 0;
  *(_BYTE*)(a4 + 8) = 0;
  v5 = a3;
  *(_BYTE*)(a4 + 12) = 0;
  *(_BYTE*)(a4 + 16) = 0;
  *(_BYTE*)(a4 + 20) = 0;
  *(_BYTE*)(a4 + 24) = 0;
  *(_BYTE*)(a4 + 28) = 0;
  v7 = *(_QWORD*)(a1 + 16);
  if (*(_DWORD*)(GameData_21d96b8 + 8) == 1 &&
      (v8 = *(_QWORD*)(v7 + 24)) != 0 && (v9 = *(_QWORD*)(v8 + 168)) != 0 &&
      (v10 = *(_QWORD*)(v9 + 264)) != 0 && *(_DWORD*)(v7 + 12) == 0) {
    v21 = *a2;
    LODWORD(v22) = *(_DWORD*)&(*a2);
    DWORD1(v22) = 1128792064;
    *((_QWORD*)&v22 + 1) = LANES128_OF(vextq_s8(v21, v21, 8u)).n128_u32[0];
    *(_OWORD*)v35_.v35 = v22;
    LANES128(v21).n128_u32[1] = -1027080192;
    LANES128(v21).n128_u64[1] = *((_QWORD*)&v22 + 1);
    v34 = v21;
    result = (float32x4_t*)X8CALL_X0(
        void*,
        GameRoutine_1085a10((void*)(v23_.v23), v10 + 160, v35_.v35, &v34, 0));
    v20 = HIDWORD(v23_.v23[0]);
    if (*((float*)v23_.v23 + 1) != -0x1.9000000000000p+6f) {
      *(_BYTE*)a4 = 1;
      goto LABEL_16;
    }
  }
  else {
    v11 = *(_DWORD*)(v7 + 12);
    v12 = 2;
    if (((*(_BYTE*)(a1 + 56) | *(_BYTE*)(a1 + 57)) & 1) != 0) {
      v12 = 0;
    }
    if (v11 == 1) {
      v13 = 769;
    }
    else {
      v13 = 1;
    }
    result =
        X8CALL_X0(float32x4_t*, collision_670c60((void*)((__int64)v35_.v35), a2,
                                                 a3, v13 | v12));
    if ((v35_.v42 & 1) != 0) {
      v15 = *(_OWORD*)v35_.v35;
      v16 = *(_OWORD*)&v35_.v35[2];
      HIDWORD(v15) = 0;
      v23_.v26 = v35_.v38;
      v23_.v27 = v35_.v39;
      v17 = *a2;
      v18 = *v5;
      HIDWORD(v16) = 0;
      LANES128(v17).n128_u32[3] = 0;
      LANES128(v18).n128_u32[3] = 0;
      v23_.v28 = v35_.v40;
      *(_OWORD*)v23_.v23 = v15;
      *(_OWORD*)&v23_.v23[2] = v16;
      v23_.v30 = v17;
      v23_.v31 = v18;
      *(_OWORD*)v32_.v32 = v15;
      *(_OWORD*)&v32_.v32[2] = v15;
      v23_.v29 = v35_.v41;
      v23_.v24 = v35_.v36;
      v23_.v25 = v35_.v37;
      v5 = (float32x4_t*)v32_.v32;
      v19 = 1;
      *(_BYTE*)a4 = 1;
    }
    else {
      v19 = 0;
    }
    v32_.v33 = v19;
  }
  v20 = LANES128(*(v5)).n128_u32[1];
LABEL_16:
  *(_DWORD*)(a4 + 4) = v20;
  {
    result;
    return;
  }
}

void game_d58680(__int64 a1, __int64* a2, __int64* a3)
{
  _DWORD* v6;
  __int64 v7;
  __int64* v8;
  int v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 (*v27)();
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  struct {
    __int128 v37;
    char v38;
    char gap17_[7];
    int v39;
  } v37_;
  struct {
    __int64 v40;
    __int64 v41;
    __int64 v42;
    char gap56_[7];
    char v43;
  } v40_;

  *(_QWORD*)a1 = GameData_212eb98[0] + 2;
  *(_QWORD*)(a1 + 8) = 0x400000000000LL;
  v6 = (_DWORD*)GameData_212c340;
  v7 = (unsigned int)*GameData_212c340;
  if ((unsigned int)v7 >= *GameData_212c348) {
  LABEL_5:
    if ((_DWORD)v7 == 0) {
      goto LABEL_11;
    }
    v9 = 0;
    v8 = (__int64*)*util_g_handle_slots_ptr[0];
    while (*v8 != 0) {
      ++v9;
      v8 += 2;
      if ((_DWORD)v7 == v9) {
        goto LABEL_11;
      }
    }
  }
  else {
    v8 = (__int64*)(*util_g_handle_slots_ptr[0] + 16 * v7);
    v9 = *GameData_212c340;
    while (*v8 != 0) {
      ++v9;
      v8 += 2;
      if (*GameData_212c348 == v9) {
        goto LABEL_5;
      }
    }
  }
  v10 = *GameData_212c338 + 1;
  *GameData_212c338 = v10;
  *v8 = v10;
  v8[1] = a1;
  *(_DWORD*)(a1 + 12) = v9;
  *(_DWORD*)v6 = v9;
LABEL_11:
  ++*GameData_212c350_alt1;
  *(_QWORD*)a1 = game_hub_AreaEvent_vtable;
  GameRoutine_d58c00(a1 + 16, a2);
  v11 = (__int64*)(a1 + 1216);
  if ((*(_BYTE*)a3 & 1) != 0) {
    fw_text_String_CopyTerminated(v11, a3[2], a3[1]);
  }
  else {
    v12 = *a3;
    v13 = a3[2];
    *(_QWORD*)(a1 + 1224) = a3[1];
    *(_QWORD*)(a1 + 1232) = v13;
    *v11 = v12;
  }
  *(_QWORD*)(a1 + 1440) = 0;
  *(_WORD*)(a1 + 1456) = 0;
  *(_DWORD*)(a1 + 1480) = 0;
  *(_WORD*)(a1 + 1488) = 0;
  *(_DWORD*)(a1 + 1512) = 0;
  *(_WORD*)(a1 + 1520) = 0;
  *(_QWORD*)(a1 + 1445) = 0;
  *(_DWORD*)(a1 + 1544) = 0;
  *(_QWORD*)(a1 + 1240) = 0;
  *(_QWORD*)(a1 + 1248) = 0;
  *(_QWORD*)(a1 + 1256) = 0;
  *(_QWORD*)(a1 + 1264) = 0;
  *(_BYTE*)(a1 + 1272) = 0;
  *(_QWORD*)(a1 + 1280) = 0;
  *(_QWORD*)(a1 + 1288) = 0;
  *(_QWORD*)(a1 + 1296) = 0;
  *(_QWORD*)(a1 + 1304) = 0;
  *(_QWORD*)(a1 + 1312) = 0;
  *(_QWORD*)(a1 + 1320) = 0;
  *(_QWORD*)(a1 + 1328) = 0;
  *(_QWORD*)(a1 + 1336) = 0;
  *(_QWORD*)(a1 + 1344) = 0;
  *(_QWORD*)(a1 + 1352) = 0;
  *(_QWORD*)(a1 + 1360) = 0;
  *(_QWORD*)(a1 + 1368) = 0;
  *(_QWORD*)(a1 + 1376) = 0;
  *(_QWORD*)(a1 + 1384) = 0;
  *(_QWORD*)(a1 + 1392) = 0;
  *(_QWORD*)(a1 + 1400) = 0;
  *(_QWORD*)(a1 + 1408) = 0;
  *(_QWORD*)(a1 + 1416) = 0;
  *(_QWORD*)(a1 + 1424) = 0;
  *(_QWORD*)(a1 + 1432) = 0;
  *(_QWORD*)(a1 + 1584) = 0;
  *(_QWORD*)(a1 + 1576) = 0;
  *(_QWORD*)(a1 + 1568) = 0;
  *(_QWORD*)(a1 + 1560) = 0;
  *(_QWORD*)(a1 + 1552) = 0;
  *(_DWORD*)(a1 + 1592) = 1065353216;
  *(_BYTE*)(a1 + 1600) = 0;
  *(_BYTE*)(a1 + 1616) = 0;
  *(_BYTE*)(a1 + 1632) = 0;
  *(_BYTE*)(a1 + 1656) = 0;
  *(_BYTE*)(a1 + 1664) = 0;
  *(_BYTE*)(a1 + 1680) = 0;
  *(_BYTE*)(a1 + 1684) = 0;
  *(_BYTE*)(a1 + 1736) = 0;
  *(_QWORD*)(a1 + 1744) = 0;
  *(_QWORD*)(a1 + 1688) = 0;
  *(_QWORD*)(a1 + 1696) = 0;
  *(_BYTE*)(a1 + 1704) = 0;
  *(_BYTE*)(a1 + 1752) = 1;
  v14 = (__int64*)fw_memory_g_heap_manager_ptr;
  v15 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  *(_QWORD*)(a1 + 1756) = 0;
  *(_BYTE*)(a1 + 1764) = 0;
  v16 = fw_memory_HeapManager_Allocate(v15, 80, 16, 0);
  *(_QWORD*)(v16 + 16) = 0;
  v17 = GameData_212eba0[0];
  v18 = *(_QWORD*)(a1 + 1696);
  *(_BYTE*)(v16 + 28) = 0;
  *(_BYTE*)(v16 + 72) = 0;
  *(_QWORD*)(v16 + 32) = 0;
  *(_QWORD*)(v16 + 40) = 0;
  *(_BYTE*)(v16 + 48) = 0;
  *(_QWORD*)(a1 + 1696) = v16;
  *(_QWORD*)v16 = v17 + 2;
  *(_QWORD*)(v16 + 8) = 0;
  *(_BYTE*)(v16 + 24) = 0;
  *(_QWORD*)(a1 + 1688) = v16 + 24;
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v18);
  }
  *(_QWORD*)(*(_QWORD*)(a1 + 1688) + 16LL) = a1;
  v37_.v38 = 0;
  *(_DWORD*)(a1 + 1760) |= 0x168u;
  LOBYTE(v37_.v37) = 30;
  qmemcpy((char*)&v37_.v37 + 1, "SE_SYS_Decide_M", 15);
  game_d58e20(a1, 0, (__int64*)&v37_.v37, 0);
  v19 = *(_QWORD*)(a1 + 176);
  v40_.v41 = 0;
  v40_.v42 = 0;
  v40_.v40 = 0;
  v37_.v39 = 1;
  *(_QWORD*)&v37_.v37 = v19;
  v20 = GameHr_918ce0(&v40_.v40, (__int64)&v37_.v37);
  v40_.v41 = v20;
  if (v37_.v39 == -1) {
    v21 = v20;
  }
  else {
    ((void (*)(char*, __int128*))GameData_1fdcd80[v37_.v39])(&v40_.v43,
                                                             &v37_.v37);
    v21 = v40_.v41;
  }
  v22 = v40_.v40;
  v23 = v21 - v40_.v40;
  if (v21 == v40_.v40) {
    v24 = 0;
    v25 = 0;
  }
  else {
    if (v23 < 0) {
      GameRoutine_919020();
    }
    v24 = fw_memory_HeapManager_Allocate(*v14, v23, 16, 0);
    v25 = v24;
    do {
      *(_BYTE*)v25 = 0;
      *(_DWORD*)(v25 + 24) = -1;
      v26 = *(_DWORD*)(v22 + 24);
      if (v26 != -1) {
        v27 = GameData_1fdcdb8[v26];
        *(_QWORD*)&v37_.v37 = v25;
        ((void (*)(__int128*, __int64))v27)(&v37_.v37, v22);
        *(_DWORD*)(v25 + 24) = v26;
      }
      v22 += 32;
      v25 += 32;
    } while (v22 != v21);
    v14 = (__int64*)fw_memory_g_heap_manager_ptr;
  }
  GameHr_cb2b00((__int64*)(a1 + 1248), v24, v25, (v25 - v24) >> 5);
  if (v24 != 0) {
    if (v24 != v25) {
      do {
        v28 = *(unsigned int*)(v25 - 8);
        v29 = v25 - 32;
        if ((_DWORD)v28 != -1) {
          ((void (*)(__int128*, __int64))GameData_1fdcd80[v28])(&v37_.v37,
                                                                v25 - 32);
        }
        *(_DWORD*)(v25 - 8) = -1;
        v25 -= 32;
      } while (v29 != v24);
    }
    v30 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*v14 + v30, v24);
  }
  if ((unsigned int)(*(int*)(a1 + 256) - 1) >= 3) {
    v31 = 1;
  }
  else {
    v31 = 4;
  }
  GameHr_d5a560(a1, a2 + 52, a2[55], a2[56], 0);
  GameHr_d5a560(a1, a2 + 58, a2[61], a2[62], 0);
  GameHr_d5a560(a1, a2 + 64, a2[67], a2[68], v31);
  GameHr_d5a560(a1, a2 + 70, a2[73], a2[74], v31);
  v32 = v40_.v40;
  if (v40_.v40 != 0) {
    v33 = v40_.v41;
    if (v40_.v40 == v40_.v41) {
      goto LABEL_47;
    }
    do {
      v34 = *(unsigned int*)(v33 - 8);
      v35 = v33 - 32;
      if ((_DWORD)v34 != -1) {
        ((void (*)(__int128*, __int64))GameData_1fdcd80[v34])(&v37_.v37,
                                                              v33 - 32);
      }
      *(_DWORD*)(v33 - 8) = -1;
      v33 -= 32;
    } while (v35 != v32);
    v40_.v41 = v32;
    v32 = v40_.v40;
    if (v40_.v40 != 0) {
    LABEL_47:
      v36 = 128;
      if (*(_QWORD*)(*v14 + 200) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free(*v14 + v36, v32);
    }
  }
}

__int64 game_e62400(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  _DWORD* v2;
  __int64 v3;
  int v4;
  int* v5;
  __int64 i;
  __int64 v7;
  int* v8;
  __int64 j;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  char* v22;
  _QWORD* v23;
  __int64* v24;
  __int64* v25;
  __int64** v26;
  __int64* v27;
  __int64 v28;
  __int64* v29;
  __int64* v30;
  __int64** v31;
  __int64* v32;
  __int64 v33;
  _QWORD* v34;
  _QWORD* v35;
  __int64* v36;
  __int64 v37;
  __int64* v38;
  __int64** v39;
  __int64* v40;
  __int64* v41;
  __int64 v42;
  int v43;
  float v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  __int64* v48;
  __int64 v49;
  __int64* v50;
  __int64* v51;
  __int64 v52;
  __int64* v53;
  __int64* v54;
  __int64 v55;
  __int64* v56;
  __int64 v57;
  _QWORD* v58;
  _QWORD* v59;
  __int64* v60;
  __int64 v61;
  __int64* v62;
  __int64** v63;
  __int64* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64* v69;
  __int64* v70;
  __int64 v71;
  __int64 v72;

  if ((*(_BYTE*)(result + 216) & 1) == 0) {
    v1 = result;
    *(_BYTE*)(result + 216) = 1;
    v2 = (_DWORD*)GameData_212d168;
    v3 = GameData_21d92dc;
    v4 = *GameData_212d168;
    ++GameData_21d92dc;
    GameData_21d925c[v3] = v4;
    *(_DWORD*)v2 = 2;
    game_GameView_Update();
    v5 = (int*)GameData_21f1c90;
    for (i = GameData_21f1c98; v5 != (int*)i; ++v5) {
      v7 = *v5;
      if ((*((_BYTE*)&GameData_21f1dc8 + v7) & 1) == 0) {
        GameHr_1369e30(ui_Manager_instance_ + 1264, v7);
        *((_BYTE*)&GameData_21f1dc8 + v7) = 1;
      }
    }
    v8 = (int*)GameData_21f1c78;
    for (j = GameData_21f1c80; v8 != (int*)j; ++v8) {
      v10 = *v8;
      if ((GameData_21f1dd8[v10] & 1) == 0) {
        game_1366260(GameData_1fa9470[v10], 0);
        GameData_21f1dd8[v10] = 1;
      }
    }
    GameRoutine_1553130(16);
    v11 = (__int64*)fw_memory_g_heap_manager_ptr;
    v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         12592, 16, 0);
    game_cmdbtl_Manager_Manager(v12);
    *GameData_212ea58 = v12;
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    v13 = fw_memory_HeapManager_Allocate(*v11, 16, 16, 0);
    v14 = GameData_212d450[0];
    if (*GameData_212d450[0] == 0) {
      *GameData_212fa60[0] = 1;
    }
    v15 = GameData_212fa58;
    *(_DWORD*)(v13 + 8) = 0;
    *(_BYTE*)(v13 + 12) = 0;
    *v14 = v13;
    *(_QWORD*)v13 = v15 + 2;
    GameRoutine_f90d80();
    v16 = fw_memory_HeapManager_Allocate(*v11, 176, 16, 0);
    v17 = GameData_212f4e0[0];
    if (*GameData_212f4e0[0] == 0) {
      *GameData_212fa18[0] = 1;
    }
    *(_BYTE*)(v16 + 8) = 0;
    v18 = GameData_212fa10;
    *(_BYTE*)(v16 + 13) = 0;
    *(_QWORD*)v16 = v18 + 2;
    v19 = GameData_212f728[0];
    *(_BYTE*)(v16 + 16) = 0;
    *(_BYTE*)(v16 + 20) = 0;
    *(_BYTE*)(v16 + 24) = 0;
    *(_BYTE*)(v16 + 28) = 0;
    *(_QWORD*)(v16 + 32) = 0;
    *(_QWORD*)(v16 + 40) = 0;
    *(_DWORD*)(v16 + 64) = 0;
    *(_QWORD*)(v16 + 72) = 0;
    *(_QWORD*)(v16 + 80) = 0;
    *(_QWORD*)(v16 + 88) = 0;
    *(_DWORD*)(v16 + 96) = 0;
    *(_QWORD*)(v16 + 104) = 0;
    *(_QWORD*)(v16 + 112) = 0;
    *(_QWORD*)(v16 + 120) = 0;
    *(_QWORD*)(v16 + 128) = 0;
    *(_DWORD*)(v16 + 136) = 0;
    *(_BYTE*)(v16 + 144) = 0;
    *(_BYTE*)(v16 + 160) = 0;
    *(_BYTE*)(v16 + 168) = 0;
    *(_BYTE*)(v16 + 12) = 1;
    *v17 = v16;
    *(_QWORD*)(v16 + 48) = 0;
    *(_QWORD*)(v16 + 56) = v19 + 16;
    *(_WORD*)(v16 + 10) = 257;
    GameRoutine_f83520();
    v20 = fw_memory_HeapManager_Allocate(*v11, 40, 16, 0);
    v21 = GameData_212f4e8[0];
    if (*GameData_212f4e8[0] == 0) {
      *GameData_212fbd8[0] = 1;
    }
    v22 = (char*)GameData_212fbd0;
    *(_BYTE*)(v20 + 8) = 0;
    *(_BYTE*)(v20 + 12) = 0;
    *(_BYTE*)(v20 + 16) = 0;
    *(_BYTE*)(v20 + 20) = 0;
    *(_BYTE*)(v20 + 24) = 0;
    *(_BYTE*)(v20 + 28) = 0;
    *(_BYTE*)(v20 + 32) = 0;
    *(_BYTE*)(v20 + 36) = 0;
    *v21 = v20;
    *(_QWORD*)v20 = v22 + 16;
    GameRoutine_ff7980();
    v23 = (_QWORD*)fw_memory_HeapManager_Allocate(*v11, 8, 16, 0);
    v24 = GameData_212f4f0;
    if (*GameData_212f4f0 == 0) {
      *GameData_212f7b0 = 1;
    }
    v25 = GameData_212f7a8;
    *v24 = (__int64)v23;
    *v23 = v25 + 2;
    GameRoutine_ed6040();
    v26 = (__int64**)GameData_212f500[0];
    if (*(_QWORD*)GameData_212f500[0] != 0) {
      ++*GameData_212f4f8;
    }
    else {
      v27 = (__int64*)fw_memory_HeapManager_Allocate(*v11, 88, 16, 0);
      GameRoutine_1011740((__int64)v27);
      v28 = *v27;
      *v26 = v27;
      (*(void (**)(__int64*))(v28 + 16))(v27);
    }
    v29 = (__int64*)fw_memory_HeapManager_Allocate(*v11, 32, 16, 0);
    v30 = v29;
    v31 = (__int64**)GameData_212f508[0];
    if (*(_QWORD*)GameData_212f508[0] == 0) {
      *(_QWORD*)GameData_212f508[0] = v29;
      *GameData_212f990[0] = 1;
    }
    v32 = GameData_212f988;
    v29[2] = 0;
    v29[3] = 0;
    *v29 = (__int64)(v32 + 2);
    v29[1] = 0;
    game_9a3bc0(6, "Combat");
    v33 = *v30;
    *v31 = v30;
    (*(void (**)(__int64*))(v33 + 16))(v30);
    v34 = (_QWORD*)fw_memory_HeapManager_Allocate(*v11, 16, 16, 0);
    v35 = (_QWORD*)GameData_212f510[0];
    if (*(_QWORD*)GameData_212f510[0] == 0) {
      *GameData_212fc80[0] = 1;
    }
    v36 = GameData_212fc78;
    *v35 = v34;
    *v34 = v36 + 2;
    v34[1] = 0x1000000000000LL;
    GameRoutine_1011680();
    v37 = fw_memory_HeapManager_Allocate(*v11, 32, 16, 0);
    v38 = (__int64*)v37;
    v39 = (__int64**)GameData_212f518[0];
    if (*(_QWORD*)GameData_212f518[0] == 0) {
      *(_QWORD*)GameData_212f518[0] = v37;
      *GameData_212fc48 = 1;
    }
    v40 = GameData_212fc40;
    *(_WORD*)(v37 + 8) = 0;
    *(_BYTE*)(v37 + 10) = 0;
    *(_QWORD*)v37 = v40 + 2;
    v41 = GameData_212d2f0;
    *(_DWORD*)(v37 + 24) = 0;
    *(_QWORD*)(v37 + 16) = v41 + 2;
    GameHr_8679c0();
    v42 = game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v43 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      if ((v43 & 0x10) == 0) {
        v44 = *(float*)(game_ProcGameSkipView_instance_ + 224);
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
            v43 & 0xFFFFFFE2 | 1;
        if (v44 > 0x0.0p+0f) {
          *(_DWORD*)(v42 + 224) = 0;
        }
      }
    }
    v45 = *v38;
    *v39 = v38;
    (*(void (**)(__int64*))(v45 + 16))(v38);
    v46 = fw_memory_HeapManager_Allocate(*v11, 32, 16, 0);
    v47 = (__int64*)GameData_212f520[0];
    if (*(_QWORD*)GameData_212f520[0] == 0) {
      *GameData_212fc28[0] = 1;
    }
    v48 = GameData_212fc20;
    *(_BYTE*)(v46 + 16) = 0;
    *(_BYTE*)(v46 + 20) = 0;
    *(_DWORD*)(v46 + 8) = 0;
    *(_WORD*)(v46 + 12) = 0;
    *v47 = v46;
    *(_QWORD*)v46 = v48 + 2;
    *(_QWORD*)(v46 + 24) = 0x100000000LL;
    GameRoutine_10074c0();
    v49 = fw_memory_HeapManager_Allocate(*v11, 256, 16, 0);
    v50 = (__int64*)GameData_212f528[0];
    if (*(_QWORD*)GameData_212f528[0] == 0) {
      *GameData_212f940[0] = 1;
    }
    *(_BYTE*)(v49 + 8) = 0;
    v51 = GameData_212f938;
    *(_QWORD*)(v49 + 12) = 0;
    *(_QWORD*)(v49 + 24) = 0;
    *(_QWORD*)(v49 + 32) = 0;
    *(_QWORD*)(v49 + 40) = 0;
    *(_QWORD*)(v49 + 48) = 0;
    *(_QWORD*)(v49 + 56) = 0;
    *(_QWORD*)(v49 + 64) = 0;
    *(_QWORD*)(v49 + 72) = 0;
    *(_QWORD*)(v49 + 80) = 0;
    *(_QWORD*)(v49 + 88) = 0;
    *(_QWORD*)(v49 + 96) = 0;
    *(_QWORD*)(v49 + 104) = 0;
    *(_QWORD*)(v49 + 112) = 0;
    *(_BYTE*)(v49 + 228) = 0;
    *(_QWORD*)(v49 + 232) = 0;
    *(_QWORD*)(v49 + 240) = 0;
    *(_QWORD*)(v49 + 248) = 0;
    *(_QWORD*)(v49 + 136) = 0;
    *(_QWORD*)(v49 + 144) = 0;
    *(_QWORD*)(v49 + 152) = 0;
    *(_QWORD*)(v49 + 160) = 0;
    *(_QWORD*)(v49 + 168) = 0;
    *(_QWORD*)(v49 + 176) = 0;
    *(_QWORD*)(v49 + 184) = 0;
    *(_QWORD*)(v49 + 192) = 0;
    *(_QWORD*)(v49 + 200) = 0;
    *(_QWORD*)(v49 + 208) = 0;
    *(_QWORD*)(v49 + 216) = 0;
    *(_BYTE*)(v49 + 224) = 0;
    *v50 = v49;
    *(_QWORD*)v49 = v51 + 2;
    *(_QWORD*)(v49 + 128) = 0;
    *(_QWORD*)(v49 + 120) = v49 + 128;
    GameRoutine_f36980();
    v52 = fw_memory_HeapManager_Allocate(*v11, 64, 16, 0);
    v53 = GameData_212dec0[0];
    if (*GameData_212dec0[0] == 0) {
      *GameData_212dec0[0] = v52;
      *GameData_212f788 = 1;
    }
    v54 = GameData_212f780;
    *(_BYTE*)(v52 + 28) = 0;
    *(_BYTE*)(v52 + 32) = 0;
    *(_WORD*)(v52 + 36) = 0;
    *(_QWORD*)(v52 + 40) = 0;
    *(_QWORD*)(v52 + 48) = 0;
    *(_QWORD*)(v52 + 56) = 0;
    *(_DWORD*)(v52 + 8) = 0;
    *(_WORD*)(v52 + 12) = 0;
    *(_QWORD*)v52 = v54 + 2;
    if (game_GameModeData_instance_ != 0) {
      *(_DWORD*)(game_GameModeData_instance_ + 92) =
          *(_DWORD*)(game_GameModeData_instance_ + 92) & 0xFFFFFBE3 | 8;
    }
    *(_QWORD*)(v52 + 16) = 0;
    *(_DWORD*)(v52 + 24) = 0;
    if ((GameData_2216858 & 1) == 0) {
      GameRoutine_8123d0();
    }
    if ((GameData_2216820 & 0x10000) != 0) {
      v55 = v52;
      v56 = game_9a28e0(1);
      game_VariableManager_SetFlag((__int64)v56, 1);
      v52 = v55;
    }
    v57 = *(_QWORD*)v52;
    *v53 = v52;
    (*(void (**)(__int64))(v57 + 16))((__int64)v52);
    v58 = (_QWORD*)fw_memory_HeapManager_Allocate(*v11, 80, 16, 0);
    v59 = (_QWORD*)GameData_212f530[0];
    if (*(_QWORD*)GameData_212f530[0] == 0) {
      *GameData_212fc18[0] = 1;
    }
    v60 = GameData_212fc10;
    v58[2] = 0;
    v58[3] = 0;
    v58[4] = 0;
    v58[5] = 0;
    v58[6] = 0;
    v58[7] = 0;
    v58[8] = 0;
    v58[9] = 0;
    *v59 = v58;
    *v58 = v60 + 2;
    v58[1] = 0;
    GameRoutine_1006480();
    v61 = fw_memory_HeapManager_Allocate(*v11, 1600, 16, 0);
    v62 = (__int64*)v61;
    v63 = (__int64**)GameData_212d240;
    if (*(_QWORD*)GameData_212d240 == 0) {
      *(_QWORD*)GameData_212d240 = v61;
      *GameData_212f750 = 1;
    }
    memset(v61 + 16, 0, 0x618u);
    v64 = GameData_212f748;
    v62[197] = 0;
    v62[198] = 0;
    v62[199] = 0;
    v62[1] = (__int64)(v64 + 8);
    *v62 = (__int64)(v64 + 2);
    EventManagerBase_Unknown2(v62 + 1);
    v65 = *v62;
    *v63 = v62;
    (*(void (**)(__int64*))(v65 + 16))(v62);
    v66 = fw_memory_HeapManager_Allocate(*v11, 128, 16, 0);
    game_17c7dc0(v66);
    *(_QWORD*)GameData_212f538 = v66;
    (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66);
    v67 = fw_memory_HeapManager_Allocate(*v11, 384, 16, 0);
    v68 = v67;
    v69 = GameData_212d570[0];
    if (*GameData_212d570[0] == 0) {
      *GameData_212d570[0] = v67;
      *GameData_21320e0[0] = 1;
    }
    v70 = GameData_21320d8;
    *(_QWORD*)(v67 + 56) = 0;
    *(_QWORD*)(v67 + 16) = 0;
    *(_QWORD*)(v67 + 24) = 0;
    *(_QWORD*)(v67 + 32) = 0;
    *(_QWORD*)(v67 + 40) = 0;
    *(_QWORD*)(v67 + 64) = 0;
    *(_QWORD*)(v67 + 72) = 0;
    *(_QWORD*)(v67 + 48) = v67 + 56;
    *(_QWORD*)(v67 + 80) = 0;
    *(_QWORD*)(v67 + 88) = 0;
    *(_QWORD*)(v67 + 96) = 0;
    *(_DWORD*)(v67 + 104) = 1065353216;
    *(_QWORD*)(v67 + 112) = 0;
    *(_QWORD*)(v67 + 120) = 0;
    *(_QWORD*)(v67 + 128) = 0;
    *(_QWORD*)(v67 + 136) = 0;
    *(_QWORD*)(v67 + 144) = 0;
    *(_QWORD*)(v67 + 152) = 0;
    *(_QWORD*)(v67 + 160) = 0;
    *(_QWORD*)(v67 + 168) = 0;
    *(_QWORD*)(v67 + 176) = 0;
    *(_DWORD*)(v67 + 184) = 1065353216;
    *(_QWORD*)(v67 + 192) = 0;
    *(_QWORD*)(v67 + 200) = 0;
    *(_QWORD*)(v67 + 208) = 0;
    *(_QWORD*)(v67 + 216) = 0;
    *(_DWORD*)(v67 + 224) = 1065353216;
    *(_BYTE*)(v67 + 288) = 0;
    *(_DWORD*)(v67 + 304) = 0;
    *(_BYTE*)(v67 + 320) = 0;
    *(_BYTE*)(v67 + 336) = 0;
    *(_QWORD*)(v67 + 232) = 0;
    *(_QWORD*)(v67 + 240) = 0;
    *(_QWORD*)(v67 + 248) = 0;
    *(_QWORD*)(v67 + 256) = 0;
    *(_QWORD*)(v67 + 264) = 0;
    *(_BYTE*)(v67 + 272) = 0;
    *(_QWORD*)(v67 + 352) = 0;
    *(_QWORD*)(v67 + 360) = 0;
    *(_QWORD*)(v67 + 368) = 0;
    *(_DWORD*)(v67 + 376) = 0;
    *(_QWORD*)v67 = v70 + 2;
    *(_QWORD*)(v67 + 8) = 0;
    game_18c3020(v67);
    game_18c3220(v68);
    v71 = *v11;
    *v69 = v68;
    v72 = fw_memory_HeapManager_Allocate(v71, 256, 16, 0);
    game_17cdea0(v72);
    *GameData_212d578[0] = v72;
    (*(void (**)(__int64))(*(_QWORD*)v72 + 16LL))(v72);
    result = GameRoutine_1624230(v1, 0);
    if (GameData_225ca88 != 0) {
      *(_BYTE*)(GameData_225ca88 + 1978) = 1;
    }
  }
  return result;
}

__attribute__((swiftcall)) void game_f4ec40(PSEUDO_X8 x8_, _QWORD* a1,
                                            __int64 a2, __int64* a3,
                                            __int64* a4, float a6_bits_)
{

#pragma clang fp contract(off)
  __int64** a5 = (__int64**)PSEUDO_X8_VALUE(x8_);
  unsigned int a6 = COERCE_AS(unsigned int, a6_bits_);
  __int64* v6;
  __int64* v7;
  __int64* v8;
  __int64* v10;
  __int64* v11;
  __int64 v15;
  __int64* v16;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int128 v25;
  __int64 v26;
  __int64* v27;
  unsigned int v28;
  __int64* v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64** v35;
  __int64* v36;
  _QWORD* result;
  struct {
    _QWORD v39[3];
    int v40;
    char gap44_[4];
    __int64 v41;
    __int64 v42;
    __int128 v43;
    __int64 v44;
    __int64 v45;
    char gap96_[8];
    __int64* v46;
  } v39_;

  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = (__int64*)a1[1];
  v8 = (__int64*)a1[2];
  v6 = a1 + 1;
  v10 = a4;
  v11 = a3;
  if (v7 != v8) {
    while (1) {
      v15 = *(_QWORD*)*v7;
      if (v15 == 0 || *(_DWORD*)(v15 + 16) != *(_DWORD*)(*v7 + 8)) {
        break;
      }
      v7 += 2;
      if (v7 == v8) {
        v7 = (__int64*)a1[2];
        goto LABEL_26;
      }
    }
  }
  v39_.v46 = a3;
  v16 = v7 + 2;
  if (v7 != v8 && v16 != v8) {
    do {
      v18 = (_QWORD*)*v16;
      v19 = *(_QWORD*)*v16;
      if (v19 != 0 && *(_DWORD*)(v19 + 16) == *((_DWORD*)v18 + 2)) {
        v20 = v16[1];
        if (v20 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                    memory_order_relaxed);
        }
        v21 = v7[1];
        *v7 = (__int64)v18;
        v7[1] = v20;
        if (v21 != 0) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21),
                v28 =
                    COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak(v21),
                v28 =
                    COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v20 = v7[1];
        }
        if (v20 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20),
                v28 =
                    COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak(v20),
                v28 =
                    COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        v7 += 2;
      }
      v16 += 2;
    } while (v16 != v8);
    v8 = (__int64*)a1[2];
    v10 = a4;
  }
  v11 = v39_.v46;
LABEL_26:
  GameRoutine_e1d240((__int64)v6, v7, v8),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((unsigned int)GameData_21d92e0 > 7) {
    v22 = 6;
  }
  else {
    v22 = GameData_1b01468[GameData_21d92e0];
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v23 = *(_QWORD*)(a2 + 16);
  }
  else {
    v23 = a2 + 1;
  }
  v39_.v40 = v22;
  v39_.v39[0] = 0;
  v39_.v39[1] = 0;
  v39_.v39[2] = v23;
  v24 = v11[1];
  *(_QWORD*)&v25 = a6 | ((unsigned __int64)a6 << 32);
  *((_QWORD*)&v25 + 1) = a6;
  v39_.v41 = *v11;
  v39_.v42 = v24;
  v26 = v10[1];
  v39_.v44 = *v10;
  v39_.v45 = v26;
  v39_.v43 = v25;
  v27 = Manager_bc6460((_QWORD*)eft_g_effectSystem, (__int64)v39_.v39, 1),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameHr_14a10d0(a5, (__int64)v27, v28, (__int64)&GameData_1a9f09e),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v29 = *a5;
  v30 = **a5;
  if (v30 != 0 && *(_DWORD*)(v30 + 16) == *((_DWORD*)v29 + 2)) {
    v31 = *(unsigned int*)(v30 + 36);
    if ((_DWORD)v31 != 0) {
      v32 = 0;
      v33 = *(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 144LL;
      do {
        v34 = *(_QWORD*)(v30 + 40 + 8 * v32);
        if (v34 != 0) {
          *(_QWORD*)(*(_QWORD*)(v34 + 224) + 24LL) = v33;
          v31 = *(unsigned int*)(v30 + 36);
        }
        ++v32;
      } while (v32 < v31);
    }
  }
  v35 = (__int64**)a1[2];
  if ((unsigned __int64)v35 >= a1[3]) {
    result = GameHr_e5d5a0(v6, a5),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    *v35 = v29;
    v36 = a5[1];
    v35[1] = v36;
    if (v36 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 1), 1u,
                                memory_order_relaxed);
    }
    result = v35 + 2;
  }
  a1[2] = result;
  {
    result;
    return;
  }
}

__int64 game_ffc660(unsigned int a1, char* a2)
{
  char* v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  __int16* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  char v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  __int64* v18;
  int v19;
  __int64 v21;
  unsigned __int64 v23;
  unsigned __int64 v24;
  char* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v29;
  unsigned __int64 v30;
  int v31;
  __int64* v32;
  __int64 v33;
  int* v34;
  int v35;
  int v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  _QWORD* v46;
  unsigned __int64 v47;
  __int64 v48;
  _QWORD* v49;
  _QWORD* v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  struct {
    _QWORD v54[2];
    __int64* v55;
  } v54_;
  struct {
    __int64* v56;
    __int64* v57;
    __int64 v58;
  } v56_;

  if (a2 != nullptr) {
    v3 = a2;
  }
  else {
    v3 = &GameData_1a9f09e;
  }
  v4 = strlen(v3);
  if ((GameHr_ffd760(a1, (__int64)v3, v4, 1) & 1) != 0 &&
      ((v6 = strlen(v3), game_gmap_GmapClock_instance_ != 0)
           ? (v7 = (__int16*)(game_gmap_GmapClock_instance_ + 8))
           : (v7 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr),
       (GameRoutine_143d560(a1, (__int64)v3, v6, v7) & 1) == 0)) {
  LABEL_132:
    v14 = 0;
  }
  else {
    switch (a1) {
    case 0u:
    case 0xCu:
    case 0x1Du:
      v8 = game_HashString((__int64)v3);
      if (v8 == 0) {
        goto LABEL_132;
      }
      v9 = *(_QWORD*)(*(_QWORD*)GameData_212c970[0] + 96LL);
      if (v9 == 0 || *(_QWORD*)(*(_QWORD*)GameData_212c970[0] + 112LL) == 0) {
        goto LABEL_132;
      }
      v11 = v9 - 1;
      if ((v9 & (v9 - 1)) != 0) {
        v12 = v8;
        if (v8 >= v9) {
          v12 = v8 % v9;
        }
      }
      else {
        v12 = v11 & v8;
      }
      v45 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)GameData_212c970[0] + 88LL) +
                        8 * v12);
      if (v45 == nullptr) {
        goto LABEL_132;
      }
      v46 = (_QWORD*)*v45;
      if (v46 == nullptr) {
        goto LABEL_132;
      }
      if ((v9 & v11) != 0) {
        while (1) {
          v47 = v46[1];
          if (v47 == v8) {
            if (v46[2] == v8) {
              goto LABEL_128;
            }
          }
          else {
            if (v47 >= v9) {
              v47 %= v9;
            }
            if (v47 != v12) {
              goto LABEL_132;
            }
          }
          v46 = (_QWORD*)*v46;
          if (v46 == nullptr) {
            goto LABEL_132;
          }
        }
      }
      while (2) {
        v48 = v46[1];
        if (v48 != v8) {
          if ((v48 & v11) != v12) {
            goto LABEL_132;
          }
        }
        else if (v46[2] == v8) {
        LABEL_128:
          v53 = v46[3];
          if (v53 == 0) {
            goto LABEL_132;
          }
          v14 = GameRoutine_8a2b00(v53);
          return v14 & 1;
        }
        v46 = (_QWORD*)*v46;
        if (v46 == nullptr) {
          goto LABEL_132;
        }
        continue;
      }
    case 2u:
      v56_.v57 = nullptr;
      v56_.v58 = 0;
      v56_.v56 = nullptr;
      v31 = 1;
      GameSubquestData_125a000(*(_QWORD*)GameData_212c7b0[0],
                               (__int64*)&v56_.v56, 1);
      if (v56_.v56 != v56_.v57) {
        v32 = v56_.v56;
        while (1) {
          v33 = *v32++;
          if ((*(unsigned __int8*)(v33 + 9) | 2) == 3) {
            break;
          }
          if (v32 == v56_.v57) {
            v31 = 1;
            goto LABEL_78;
          }
        }
        v31 = 0;
      }
    LABEL_78:
      if (v56_.v56 != nullptr) {
        v56_.v57 = v56_.v56;
        v43 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v43 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, (__int64)v56_.v56);
      }
      if (v31 != 0) {
        goto LABEL_132;
      }
    LABEL_83:
      v14 = 1;
      return v14 & 1;
    case 6u:
      v34 = (int*)GameData_212d280;
      v35 = *GameData_212d280;
      if (GameData_21f230c == *GameData_212d280) {
        v36 = GameData_21f2308;
      }
      else {
        v37 = (__int64*)GameData_21f2288;
        v38 = GameData_21f2290;
        if (GameData_21f2288 == GameData_21f2290) {
          v36 = 0;
        }
        else {
          v36 = 0;
          do {
            v39 = *v37;
            if ((game_GameModeData_instance_ == 0 ||
                 (v40 = game_GameVariableTable_Find(
                      *(_QWORD**)(game_GameModeData_instance_ + 48),
                      (unsigned __int64*)(*(_QWORD*)(v39 + 24) + 40LL))) == 0 ||
                 *(_DWORD*)(v40 + 32) == 0) &&
                (unsigned __int16)game_anonymous_RuntimeTalk_GetCondition(
                    v39) == 0) {
              ++v36;
            }
            ++v37;
          } while (v37 != (__int64*)v38);
          v35 = *v34;
        }
        GameData_21f230c = v35;
        GameData_21f2308 = v36;
      }
      v14 = v36 > 0;
      return v14 & 1;
    case 0xBu:
      return FacilityUtil_949d50();
    case 0x12u:
      v23 = strlen(v3);
      if (v23 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      v24 = v23;
      if (v23 >= 0x17) {
        if ((v23 | 7) == 0x17) {
          v41 = 26;
        }
        else {
          v41 = (v23 | 7) + 1;
        }
        v25 = (char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v41, 16, 0);
        v54_.v54[1] = v24;
        v54_.v55 = (__int64*)v25;
        v54_.v54[0] = v41 | 1;
      }
      else {
        LOBYTE(v54_.v54[0]) = 2 * v23;
        v25 = (char*)v54_.v54 + 1;
        if (v23 == 0) {
          goto LABEL_72;
        }
      }
      memcpy((__int64)v25, (__int64)v3, v24);
    LABEL_72:
      v25[v24] = 0;
      v42 = GameRoutine_fbc550((__int64)v54_.v54);
      v14 = 0;
      if (HIDWORD(v42) != 0) {
        v14 = (unsigned int)game_fbc6b0(v42) == 2;
      }
      if ((v54_.v54[0] & 1) != 0) {
        v13 = v54_.v55;
        if (v54_.v55 != nullptr) {
        LABEL_20:
          v15 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v15 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, (__int64)v13);
        }
      }
      return v14 & 1;
    case 0x16u:
    case 0x1Cu:
      v56_.v57 = nullptr;
      v56_.v58 = 0;
      v56_.v56 = nullptr;
      GameSubquestData_125b0c0(*(_QWORD*)GameData_212c7b0[0],
                               (__int64*)&v56_.v56);
      v13 = v56_.v56;
      v14 = v56_.v57 != v56_.v56;
      if (v56_.v56 == nullptr) {
        return v14 & 1;
      }
      v56_.v57 = v56_.v56;
      goto LABEL_20;
    case 0x17u:
      v26 = game_HashString((__int64)v3);
      if (v26 == 0) {
        goto LABEL_132;
      }
      v27 = *(_QWORD*)(*GameData_212c890[0] + 96);
      if (v27 == 0 || *(_QWORD*)(*GameData_212c890[0] + 112) == 0) {
        goto LABEL_132;
      }
      v29 = v27 - 1;
      if ((v27 & (v27 - 1)) != 0) {
        v30 = v26;
        if (v26 >= v27) {
          v30 = v26 % v27;
        }
      }
      else {
        v30 = v29 & v26;
      }
      v49 = *(_QWORD**)(*(_QWORD*)(*GameData_212c890[0] + 88) + 8 * v30);
      if (v49 == nullptr) {
        goto LABEL_132;
      }
      v50 = (_QWORD*)*v49;
      if (v50 == nullptr) {
        goto LABEL_132;
      }
      if ((v27 & v29) != 0) {
        while (1) {
          v51 = v50[1];
          if (v51 == v26) {
            if (v50[2] == v26) {
              goto LABEL_130;
            }
          }
          else {
            if (v51 >= v27) {
              v51 %= v27;
            }
            if (v51 != v30) {
              goto LABEL_132;
            }
          }
          v50 = (_QWORD*)*v50;
          if (v50 == nullptr) {
            goto LABEL_132;
          }
        }
      }
    LABEL_125:
      v52 = v50[1];
      if (v52 != v26) {
        if ((v52 & v29) != v30) {
          goto LABEL_132;
        }
      }
      else if (v50[2] == v26) {
      LABEL_130:
        if (v50[3] == 0) {
          goto LABEL_132;
        }
        v56_.v56 = (__int64*)v50[3];
        v14 = ((__int64 (*)(__int64*))GameRoutine_94c860)((__int64*)&v56_.v56);
        break;
      }
      v50 = (_QWORD*)*v50;
      if (v50 == nullptr) {
        goto LABEL_132;
      }
      goto LABEL_125;
    case 0x18u:
      v56_.v57 = nullptr;
      v56_.v58 = 0;
      v56_.v56 = nullptr;
      GameSubquestData_125a860(*(_QWORD*)GameData_212c7b0[0],
                               (__int64*)&v56_.v56);
      if (v56_.v57 == v56_.v56) {
        if (v56_.v57 == nullptr) {
          goto LABEL_132;
        }
        v16 = 0;
      }
      else {
        v16 = *v56_.v56;
      }
      v56_.v57 = v56_.v56;
      v44 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v44 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, (__int64)v56_.v56);
      if (v16 == 0) {
        goto LABEL_132;
      }
      v14 = (*(_BYTE*)(v16 + 9) & 0xFE) != 2;
      return v14 & 1;
    case 0x1Bu:
      v56_.v57 = nullptr;
      v56_.v58 = 0;
      v56_.v56 = nullptr;
      v17 = true;
      GameSubquestData_125abc0(*(_QWORD*)GameData_212c7b0[0],
                               (__int64*)&v56_.v56, 1);
      if (v56_.v56 != v56_.v57) {
        v18 = v56_.v56 + 1;
        do {
          v19 = *(_BYTE*)(*(v18 - 1) + 9) & 0xFE;
          v17 = v19 == 2;
        } while (v19 == 2 && v18++ != v56_.v57);
      }
      if (v56_.v56 != nullptr) {
        v56_.v57 = v56_.v56;
        v21 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, (__int64)v56_.v56);
      }
      if (v17) {
        goto LABEL_132;
      }
      goto LABEL_83;
    default:
      goto LABEL_132;
    }
  }
  return v14 & 1;
}

__int64 game_100ef00(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _DWORD* v3;
  bool v4;
  unsigned int* v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64* v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _DWORD* v22;
  __int64 v23;
  int v24;
  char v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _DWORD* v39;
  __int64 v40;
  int v41;
  char v42;
  char* v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;
  char* v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  unsigned int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _DWORD* v56;
  __int64 v57;
  int v58;
  char v59;
  char* v60;
  __int64 v61;
  __int64 v62;
  _QWORD* v63;
  char* v64;
  __int64 v65;
  __int64 v66;
  __int64* v67;
  unsigned int v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  _DWORD* v73;
  __int64 v74;
  int v75;
  char v76;
  char* v77;
  __int64 v78;
  __int64 v79;
  _QWORD* v80;
  char* v81;
  __int64 v82;
  __int64 v83;
  __int64* v84;
  unsigned int v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  struct {
    __int64 v90;
    __int64 v91;
  } v90_;
  struct {
    _QWORD v92[2];
    char* v93;
    int v94;
    char gap44_[4];
    __int64 v95;
    __int64 v96;
    __int64 v97;
    __int64 v98;
    __int64 v99;
    __int64 v100;
  } v92_;

  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v51 = COERCE_AS(__typeof__(v51),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v1 = *(_QWORD*)(result + 8);
  v2 = result;
  if (*(_BYTE*)(v1 + 289) == 1 && (*(_BYTE*)(v1 + 288) & 1) != 0) {
    while ((*(_BYTE*)(v1 + 300) & 0xFD) != 1) {
      v1 = *(_QWORD*)(v1 + 736);
      if (v1 == 0) {
        v3 = *(_DWORD**)(result + 40);
        v4 = *(_QWORD*)v3 != 0 && *(_DWORD*)(*(_QWORD*)v3 + 16LL) == v3[2];
        v5 = (unsigned int*)GameData_212d168;
        v6 = (__int64*)GameData_212c540;
        v7 = (__int64*)GameData_212c548;
        v8 = eft_g_effectSystem_ptr[0];
        if (!v4 && *(_DWORD*)(result + 152) == 1) {
          v9 = (unsigned int)*GameData_212d168;
          if ((unsigned int)v9 > 7) {
            v10 = 6;
          }
          else {
            v10 = GameData_1b01468[v9];
          }
          v11 = *(_QWORD*)GameData_212c540;
          v12 = *((_QWORD*)GameData_212c540 + 1);
          v13 = *(_QWORD*)GameData_212c548;
          v14 = *((_QWORD*)GameData_212c548 + 1);
          v15 = (_QWORD*)*eft_g_effectSystem_ptr[0];
          v92_.v94 = v10;
          v92_.v92[0] = 0;
          v92_.v92[1] = 0;
          v92_.v93 = "UI_Range_CursorPK_Select";
          v92_.v95 = v11;
          v92_.v96 = v12;
          v92_.v97 = v13;
          v92_.v98 = v14;
          v92_.v99 = v11;
          v92_.v100 = v12;
          v16 = Manager_bc6460(v15, (__int64)v92_.v92, 0),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v68 = COERCE_AS(__typeof__(v68),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          result = GameHr_14a10d0(&v90_.v90, (__int64)v16, v17,
                                  (__int64)&GameData_1a9f09e),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v68 = COERCE_AS(__typeof__(v68),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v18 = v90_.v90;
          v19 = v90_.v91;
          if (v90_.v91 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v90_.v91 + 8),
                                      1u, memory_order_relaxed);
          }
          v20 = *(_QWORD*)(v2 + 48);
          *(_QWORD*)(v2 + 40) = v18;
          *(_QWORD*)(v2 + 48) = v19;
          if (v20 != 0) {
            if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20),
                  v17 = COERCE_AS(
                      __typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v34 = COERCE_AS(
                      __typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v51 = COERCE_AS(
                      __typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v68 = COERCE_AS(
                      __typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v85 = COERCE_AS(
                      __typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              result = std___1___shared_weak_count___release_weak(v20),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v85 = COERCE_AS(__typeof__(v85),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v19 = *(_QWORD*)(v2 + 48);
          }
          if (v19 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                      memory_order_relaxed);
            if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19),
                  v17 = COERCE_AS(
                      __typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v34 = COERCE_AS(
                      __typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v51 = COERCE_AS(
                      __typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v68 = COERCE_AS(
                      __typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v85 = COERCE_AS(
                      __typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              result = std___1___shared_weak_count___release_weak(v19),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v85 = COERCE_AS(__typeof__(v85),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          v21 = v90_.v91;
          if (v90_.v91 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v90_.v91 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21),
                v17 =
                    COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v51 =
                    COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v68 =
                    COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v85 =
                    COERCE_AS(__typeof__(v85),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            result = std___1___shared_weak_count___release_weak(v21),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v51 = COERCE_AS(__typeof__(v51),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v68 = COERCE_AS(__typeof__(v68),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v85 = COERCE_AS(__typeof__(v85),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        v22 = *(_DWORD**)(v2 + 64);
        if (*(_QWORD*)v22 == 0 || *(_DWORD*)(*(_QWORD*)v22 + 16LL) != v22[2]) {
          v23 = *v5;
          if ((unsigned int)v23 > 7) {
            v24 = 6;
          }
          else {
            v24 = GameData_1b01468[v23];
          }
          v25 = *(_BYTE*)(v2 + 160);
          v26 = *(const char**)(v2 + 176);
          v27 = *v7;
          v28 = v7[1];
          v29 = (_QWORD*)*v8;
          v92_.v92[0] = 0;
          v92_.v92[1] = 0;
          v92_.v97 = v27;
          v92_.v98 = v28;
          v92_.v94 = v24;
          if ((v25 & 1) != 0) {
            v30 = v26;
          }
          else {
            v30 = (const char*)(v2 + 161);
          }
          v31 = *v6;
          v32 = v6[1];
          v92_.v93 = v30;
          v92_.v95 = v31;
          v92_.v96 = v32;
          v92_.v99 = v31;
          v92_.v100 = v32;
          v33 = Manager_bc6460(v29, (__int64)v92_.v92, 0),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v68 = COERCE_AS(__typeof__(v68),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          result = GameHr_14a10d0(&v90_.v90, (__int64)v33, v34,
                                  (__int64)&GameData_1a9f09e),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v68 = COERCE_AS(__typeof__(v68),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v35 = v90_.v90;
          v36 = v90_.v91;
          if (v90_.v91 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v90_.v91 + 8),
                                      1u, memory_order_relaxed);
          }
          v37 = *(_QWORD*)(v2 + 72);
          *(_QWORD*)(v2 + 64) = v35;
          *(_QWORD*)(v2 + 72) = v36;
          if (v37 != 0) {
            if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37),
                  v17 = COERCE_AS(
                      __typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v34 = COERCE_AS(
                      __typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v51 = COERCE_AS(
                      __typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v68 = COERCE_AS(
                      __typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v85 = COERCE_AS(
                      __typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              result = std___1___shared_weak_count___release_weak(v37),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v85 = COERCE_AS(__typeof__(v85),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v36 = *(_QWORD*)(v2 + 72);
          }
          if (v36 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 8), 1u,
                                      memory_order_relaxed);
            if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36),
                  v17 = COERCE_AS(
                      __typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v34 = COERCE_AS(
                      __typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v51 = COERCE_AS(
                      __typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v68 = COERCE_AS(
                      __typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v85 = COERCE_AS(
                      __typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              result = std___1___shared_weak_count___release_weak(v36),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v85 = COERCE_AS(__typeof__(v85),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          v38 = v90_.v91;
          if (v90_.v91 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v90_.v91 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38),
                v17 =
                    COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v51 =
                    COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v68 =
                    COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v85 =
                    COERCE_AS(__typeof__(v85),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            result = std___1___shared_weak_count___release_weak(v38),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v51 = COERCE_AS(__typeof__(v51),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v68 = COERCE_AS(__typeof__(v68),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v85 = COERCE_AS(__typeof__(v85),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        v39 = *(_DWORD**)(v2 + 88);
        if (*(_QWORD*)v39 == 0 || *(_DWORD*)(*(_QWORD*)v39 + 16LL) != v39[2]) {
          v40 = *v5;
          if ((unsigned int)v40 > 7) {
            v41 = 6;
          }
          else {
            v41 = GameData_1b01468[v40];
          }
          v42 = *(_BYTE*)(v2 + 160);
          v43 = *(const char**)(v2 + 176);
          v44 = *v7;
          v45 = v7[1];
          v46 = (_QWORD*)*v8;
          v92_.v92[0] = 0;
          v92_.v92[1] = 0;
          v92_.v97 = v44;
          v92_.v98 = v45;
          v92_.v94 = v41;
          if ((v42 & 1) != 0) {
            v47 = v43;
          }
          else {
            v47 = (const char*)(v2 + 161);
          }
          v48 = *v6;
          v49 = v6[1];
          v92_.v93 = v47;
          v92_.v95 = v48;
          v92_.v96 = v49;
          v92_.v99 = v48;
          v92_.v100 = v49;
          v50 = Manager_bc6460(v46, (__int64)v92_.v92, 0),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v68 = COERCE_AS(__typeof__(v68),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          result = GameHr_14a10d0(&v90_.v90, (__int64)v50, v51,
                                  (__int64)&GameData_1a9f09e),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v68 = COERCE_AS(__typeof__(v68),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v52 = v90_.v90;
          v53 = v90_.v91;
          if (v90_.v91 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v90_.v91 + 8),
                                      1u, memory_order_relaxed);
          }
          v54 = *(_QWORD*)(v2 + 96);
          *(_QWORD*)(v2 + 88) = v52;
          *(_QWORD*)(v2 + 96) = v53;
          if (v54 != 0) {
            if (atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54),
                  v17 = COERCE_AS(
                      __typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v34 = COERCE_AS(
                      __typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v51 = COERCE_AS(
                      __typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v68 = COERCE_AS(
                      __typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v85 = COERCE_AS(
                      __typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              result = std___1___shared_weak_count___release_weak(v54),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v85 = COERCE_AS(__typeof__(v85),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v53 = *(_QWORD*)(v2 + 96);
          }
          if (v53 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v53 + 8), 1u,
                                      memory_order_relaxed);
            if (atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53),
                  v17 = COERCE_AS(
                      __typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v34 = COERCE_AS(
                      __typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v51 = COERCE_AS(
                      __typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v68 = COERCE_AS(
                      __typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v85 = COERCE_AS(
                      __typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              result = std___1___shared_weak_count___release_weak(v53),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v85 = COERCE_AS(__typeof__(v85),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          v55 = v90_.v91;
          if (v90_.v91 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v90_.v91 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55),
                v17 =
                    COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v51 =
                    COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v68 =
                    COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v85 =
                    COERCE_AS(__typeof__(v85),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            result = std___1___shared_weak_count___release_weak(v55),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v51 = COERCE_AS(__typeof__(v51),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v68 = COERCE_AS(__typeof__(v68),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v85 = COERCE_AS(__typeof__(v85),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        v56 = *(_DWORD**)(v2 + 112);
        if (*(_QWORD*)v56 == 0 || *(_DWORD*)(*(_QWORD*)v56 + 16LL) != v56[2]) {
          v57 = *v5;
          if ((unsigned int)v57 > 7) {
            v58 = 6;
          }
          else {
            v58 = GameData_1b01468[v57];
          }
          v59 = *(_BYTE*)(v2 + 160);
          v60 = *(const char**)(v2 + 176);
          v61 = *v7;
          v62 = v7[1];
          v63 = (_QWORD*)*v8;
          v92_.v92[0] = 0;
          v92_.v92[1] = 0;
          v92_.v97 = v61;
          v92_.v98 = v62;
          v92_.v94 = v58;
          if ((v59 & 1) != 0) {
            v64 = v60;
          }
          else {
            v64 = (const char*)(v2 + 161);
          }
          v65 = *v6;
          v66 = v6[1];
          v92_.v93 = v64;
          v92_.v95 = v65;
          v92_.v96 = v66;
          v92_.v99 = v65;
          v92_.v100 = v66;
          v67 = Manager_bc6460(v63, (__int64)v92_.v92, 0),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v68 = COERCE_AS(__typeof__(v68),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          result = GameHr_14a10d0(&v90_.v90, (__int64)v67, v68,
                                  (__int64)&GameData_1a9f09e),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v68 = COERCE_AS(__typeof__(v68),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v69 = v90_.v90;
          v70 = v90_.v91;
          if (v90_.v91 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v90_.v91 + 8),
                                      1u, memory_order_relaxed);
          }
          v71 = *(_QWORD*)(v2 + 120);
          *(_QWORD*)(v2 + 112) = v69;
          *(_QWORD*)(v2 + 120) = v70;
          if (v71 != 0) {
            if (atomic_fetch_add((atomic_ullong* volatile)(v71 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71),
                  v17 = COERCE_AS(
                      __typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v34 = COERCE_AS(
                      __typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v51 = COERCE_AS(
                      __typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v68 = COERCE_AS(
                      __typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v85 = COERCE_AS(
                      __typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              result = std___1___shared_weak_count___release_weak(v71),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v85 = COERCE_AS(__typeof__(v85),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v70 = *(_QWORD*)(v2 + 120);
          }
          if (v70 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v70 + 8), 1u,
                                      memory_order_relaxed);
            if (atomic_fetch_add((atomic_ullong* volatile)(v70 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v70 + 16LL))(v70),
                  v17 = COERCE_AS(
                      __typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v34 = COERCE_AS(
                      __typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v51 = COERCE_AS(
                      __typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v68 = COERCE_AS(
                      __typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v85 = COERCE_AS(
                      __typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              result = std___1___shared_weak_count___release_weak(v70),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v85 = COERCE_AS(__typeof__(v85),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          v72 = v90_.v91;
          if (v90_.v91 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v90_.v91 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v72 + 16LL))(v72),
                v17 =
                    COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v51 =
                    COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v68 =
                    COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v85 =
                    COERCE_AS(__typeof__(v85),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            result = std___1___shared_weak_count___release_weak(v72),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v51 = COERCE_AS(__typeof__(v51),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v68 = COERCE_AS(__typeof__(v68),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v85 = COERCE_AS(__typeof__(v85),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        v73 = *(_DWORD**)(v2 + 136);
        if (*(_QWORD*)v73 == 0 || *(_DWORD*)(*(_QWORD*)v73 + 16LL) != v73[2]) {
          v74 = *v5;
          if ((unsigned int)v74 > 7) {
            v75 = 6;
          }
          else {
            v75 = GameData_1b01468[v74];
          }
          v76 = *(_BYTE*)(v2 + 160);
          v77 = *(const char**)(v2 + 176);
          v78 = *v7;
          v79 = v7[1];
          v80 = (_QWORD*)*v8;
          v92_.v92[0] = 0;
          v92_.v92[1] = 0;
          v92_.v97 = v78;
          v92_.v98 = v79;
          v92_.v94 = v75;
          if ((v76 & 1) != 0) {
            v81 = v77;
          }
          else {
            v81 = (const char*)(v2 + 161);
          }
          v82 = *v6;
          v83 = v6[1];
          v92_.v93 = v81;
          v92_.v95 = v82;
          v92_.v96 = v83;
          v92_.v99 = v82;
          v92_.v100 = v83;
          v84 = Manager_bc6460(v80, (__int64)v92_.v92, 0),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v68 = COERCE_AS(__typeof__(v68),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          result = GameHr_14a10d0(&v90_.v90, (__int64)v84, v85,
                                  (__int64)&GameData_1a9f09e),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v68 = COERCE_AS(__typeof__(v68),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v86 = v90_.v90;
          v87 = v90_.v91;
          if (v90_.v91 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v90_.v91 + 8),
                                      1u, memory_order_relaxed);
          }
          v88 = *(_QWORD*)(v2 + 144);
          *(_QWORD*)(v2 + 136) = v86;
          *(_QWORD*)(v2 + 144) = v87;
          if (v88 != 0) {
            if (atomic_fetch_add((atomic_ullong* volatile)(v88 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v88 + 16LL))(v88),
                  v17 = COERCE_AS(
                      __typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v34 = COERCE_AS(
                      __typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v51 = COERCE_AS(
                      __typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v68 = COERCE_AS(
                      __typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v85 = COERCE_AS(
                      __typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              result = std___1___shared_weak_count___release_weak(v88),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v85 = COERCE_AS(__typeof__(v85),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v87 = *(_QWORD*)(v2 + 144);
          }
          if (v87 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v87 + 8), 1u,
                                      memory_order_relaxed);
            if (atomic_fetch_add((atomic_ullong* volatile)(v87 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v87 + 16LL))(v87),
                  v17 = COERCE_AS(
                      __typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v34 = COERCE_AS(
                      __typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v51 = COERCE_AS(
                      __typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v68 = COERCE_AS(
                      __typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v85 = COERCE_AS(
                      __typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              result = std___1___shared_weak_count___release_weak(v87),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v85 = COERCE_AS(__typeof__(v85),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          v89 = v90_.v91;
          if (v90_.v91 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v90_.v91 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v89 + 16LL))(v89),
                v17 =
                    COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v51 =
                    COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v68 =
                    COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v85 =
                    COERCE_AS(__typeof__(v85),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            return std___1___shared_weak_count___release_weak(v89);
          }
        }
        return result;
      }
      if (*(_BYTE*)(v1 + 289) != 1 || *(_BYTE*)(v1 + 288) != 1) {
        break;
      }
    }
  }
  GameHr_14a1390((__int64*)(result + 40), 1),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameHr_14a1390((__int64*)(v2 + 64), 1),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameHr_14a1390((__int64*)(v2 + 88), 1),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameHr_14a1390((__int64*)(v2 + 112), 1),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return GameHr_14a1390((__int64*)(v2 + 136), 1);
}

__attribute__((swiftcall)) void game_108e3e0(PSEUDO_X8 x8_, __int64 a1,
                                             char* a2, char* a3, int a4,
                                             char a5, float a7_bits_)
{

#pragma clang fp contract(off)
  __int64* a6 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned int a7 = COERCE_AS(unsigned int, a7_bits_);
  int v9;
  char* v10;
  char* v11;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  __int64 v20;
  int v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int128 v26;
  float32x4_t v27;
  struct {
    _QWORD v28[2];
    char* v29;
  } v28_;
  struct {
    _QWORD v30[2];
    char* v31;
    char gap80_[12];
    int v32;
  } v30_;

  v9 = a4;
  v10 = a3;
  v11 = a2;
  if (a3 == nullptr) {
    if (a2 != nullptr && (v14 = *(_QWORD*)(eft_g_effectSystem + 112),
                          (v15 = *(_QWORD*)(v14 + 24)) != 0)) {
      v16 = 0;
      if (*a2 != 0) {
        v17 = *(_DWORD*)(v14 + 32);
        if (v17 != 0) {
          v30_.v32 = a4;
          v18 = 0;
          while (1) {
            v19 = (v17 + v18) >> 1;
            v20 = v15 + 336LL * v19;
            v21 = strcmp(*(const char**)v20, v11);
            if (v21 == 0) {
              break;
            }
            if (v21 < 0) {
              v18 = v19 + 1;
            }
            else {
              v17 = (v17 + v18) >> 1;
            }
            if (v18 == v17) {
              v16 = 0;
              goto LABEL_15;
            }
          }
          v16 = *(_QWORD*)(v20 + 112);
        LABEL_15:
          v9 = v30_.v32;
        }
      }
    }
    else {
      v16 = 0;
    }
    v10 = (const char*)GameData_1fb0230[(unsigned __int8)GameHr_960f80(v16)];
  }
  v30_.v30[1] = 0;
  v30_.v31 = nullptr;
  v30_.v30[0] = 0;
  v28_.v28[1] = 0;
  v28_.v29 = nullptr;
  v28_.v28[0] = 0;
  v22 = strlen(v11);
  if ((game_109ecc0(v11, v22, (char*)v30_.v30, (char*)v28_.v28) & 1) != 0) {
    if ((v30_.v30[0] & 1) != 0) {
      v11 = v30_.v31;
    }
    else {
      v11 = (char*)v30_.v30 + 1;
    }
    if ((v28_.v28[0] & 1) != 0) {
      v10 = v28_.v29;
    }
    else {
      v10 = (char*)v28_.v28 + 1;
    }
  }
  v26 = (__typeof__(v26)){0};
  v27 = (__typeof__(v27)){0};
  game_108d130((void*)(a6), a1, v11, &v27, (__int64*)&v26,
               COERCE_LONG_DOUBLE((unsigned __int128)a7));
  v23 = *(_QWORD*)*a6;
  if (v23 != 0 && *(_DWORD*)(v23 + 16) == *(_DWORD*)(*a6 + 8)) {
    GameHr_108e620(a1, a6, v10, v9, a5 & 1);
  }
  if ((v28_.v28[0] & 1) != 0 && v28_.v29 != nullptr) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v24,
                                  (__int64)v28_.v29);
  }
  if ((v30_.v30[0] & 1) != 0 && v30_.v31 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v25,
                                  (__int64)v30_.v31);
  }
}

__int64 game_109e190(float32x4_t* a1, int8x16_t* a2)
{

#pragma clang fp contract(off)
  int8x16_t v3;
  float32x4_t v4;
  float32x4_t v5;
  unsigned int v6;
  __int128 v7;
  float32x4_t v8;
  float32x4_t v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  int8x16_t* v13;
  int v14;
  __int64 v15;
  __int64 v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  struct {
    _QWORD v21[4];
    unsigned __int64 v22;
    unsigned __int64 v23;
    unsigned __int64 v24;
    unsigned __int64 v25;
    unsigned __int64 v26;
    unsigned __int32 v27;
    char gap140_[4];
    char v28;
  } v21_;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                            memory_order_acquire) &
       1) == 0) {
    v13 = a2;
    v14 = __cxa_guard_acquire((__int64)&GameData_21fde98);
    a2 = v13;
    if (v14 != 0) {
      GameHr_a5aca0((__int64)GameData_21fdd90);
      GameRoutine_2b0();
      __cxa_guard_release((__int64)&GameData_21fde98);
      a2 = v13;
    }
  }
  v3 = *a2;
  LANES128(v4).n128_u32[0] = *(unsigned __int32*)&(*a2);
  LANES128(v4).n128_f32[1] =
      COERCE_FLOAT(HIDWORD(LANES128(*(a2)).n128_u64[0])) +
      0x1.0000000000000p+0f;
  LANES128(v4).n128_u64[1] = LANES128_OF(vextq_s8(v3, v3, 8u)).n128_u32[0];
  v18 = v4;
  LANES128(v3).n128_f32[1] = LANES128(v3).n128_f32[1] + -0x1.0000000000000p+0f;
  LANES128(v3).n128_u64[1] = LANES128(v4).n128_u64[1];
  v17 = v3;
  collision_670c60((void*)((__int64)v21_.v21), &v18, &v17, 513);
  if (v21_.v28 != 1) {
    LANES128(v18).n128_u32[1] = 1128792064;
    LANES128(v17).n128_u32[1] = -1027080192;
    collision_670c60((void*)((__int64)v21_.v21), &v18, &v17, 513);
    if (v21_.v28 != 1) {
      LANES128(v17).n128_f32[0] =
          LANES128(v18).n128_f32[0] + 0x1.47ae140000000p-6f;
      LANES128(v18).n128_f32[0] =
          LANES128(v18).n128_f32[0] + 0x1.47ae140000000p-6f;
      collision_670c60((void*)((__int64)v21_.v21), &v18, &v17, 513);
      if (v21_.v28 != 1) {
        LANES128(v5).n128_u64[0] = LANES128(v17).n128_u64[0];
        LANES128(v5).n128_u64[1] = COERCE_UNSIGNED_INT(
            LANES128(v18).n128_f32[2] + 0x1.47ae140000000p-6f);
        v17 = v5;
        LANES128(v5).n128_u64[0] = LANES128(v18).n128_u64[0];
        LANES128(v5).n128_f32[2] =
            LANES128(v18).n128_f32[2] + 0x1.47ae140000000p-6f;
        LANES128(v5).n128_u32[3] = 0;
        v18 = v5;
        collision_670c60((void*)((__int64)v21_.v21), &v18, &v17, 513);
        if ((v21_.v28 & 1) == 0) {
          return 0;
        }
      }
    }
  }
  v6 = v21_.v21[1];
  v7 = *(_OWORD*)&v21_.v21[2];
  LANES128(*(a1)).n128_u64[0] = v21_.v21[0];
  LANES128(a1[1]).n128_u64[0] = v7;
  v8 = *a1;
  v9 = a1[1];
  LANES128(v8).n128_u64[1] = v6;
  LANES128(v9).n128_u64[1] = DWORD2(v7);
  *a1 = v8;
  a1[1] = v9;
  v10 = v21_.v25;
  LANES128(a1[3]).n128_u64[0] = v21_.v24;
  LANES128(a1[3]).n128_u64[1] = v10;
  LANES128(a1[4]).n128_u64[0] = v21_.v26;
  LANES128(a1[4]).n128_u32[2] = v21_.v27;
  v11 = v21_.v23;
  LANES128(a1[2]).n128_u64[0] = v21_.v22;
  LANES128(a1[2]).n128_u64[1] = v11;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a6190) != 0) {
    v15 = *((_QWORD*)GameData_212c558 + 1);
    *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
    *((_QWORD*)&GameData_21a6180 + 1) = v15;
    __cxa_guard_release((__int64)&GameData_21a6190);
  }
  v20 = vaddq_f32(*a1, COERCE_AS(float32x4_t, GameData_21a6180));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a6190) != 0) {
    v16 = *((_QWORD*)GameData_212c558 + 1);
    *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
    *((_QWORD*)&GameData_21a6180 + 1) = v16;
    __cxa_guard_release((__int64)&GameData_21a6190);
  }
  v19 = vsubq_f32(*a1, COERCE_AS(float32x4_t, GameData_21a6180));
  collision_670c60((void*)((__int64)v21_.v21), &v20, &v19, 1024);
  if (v21_.v28 == 1) {
    LANES128(a1[2]).n128_u32[2] = v21_.v23;
  }
  return 1;
}

void game_1107040(float32x4_t* a1, _DWORD* a2, double a3, int32x2_t a4)
{

#pragma clang fp contract(off)
  float32x4_t v6;
  __int64 v7;
  __int64 v8;
  float v9;
  __int64 v10;
  float v11;
  __int128 v12;
  float v13;
  char v14;
  __int64 v15;
  __int128 v16;
  float v17;
  __int128 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  struct {
    __int64 v22;
    __int64 v23;
    char gap16_[8];
    unsigned __int8 v24;
  } v22_;
  float32x4_t v25;

  PSEUDO_LOW_LANE64(a4, n64_u32, -1027080192);
  LANES128(v6).n128_u32[1] = LANES64_OF(vdup_lane_s32(a4, 0)).n64_u32[1];
  LANES128(v6).n128_u32[0] = *(unsigned __int32*)&(*a1);
  LANES128(v6).n128_u64[1] = LANES128_OF(vextq_s8(*a1, *a1, 8u)).n128_u32[0];
  v25 = v6;
  collision_671400((void*)(&v22_.v22), a1, &v25, 515);
  if ((v22_.v24 & 1) == 0) {
    LANES128(*(a1)).n128_u32[1] = -1027080192;
    return;
  }
  v7 = v22_.v22;
  v8 = v22_.v23;
  if (v22_.v23 == v22_.v22) {
    goto LABEL_20;
  }
  v9 = -0x1.9000000000000p+6f;
  v10 = v22_.v23;
  v11 = -0x1.9000000000000p+6f;
  do {
    v13 = *(float*)(v10 - 76);
    if ((*(_BYTE*)(v10 - 31) & 2) != 0) {
      v9 = *(float*)(v10 - 76);
    }
    else {
      *(_DWORD*)a2 = *(_DWORD*)(v10 - 64);
      a2[1] = *(_DWORD*)(v10 - 60);
      v12 = *(_OWORD*)a2;
      *((_QWORD*)&v12 + 1) = *(unsigned int*)(v10 - 56);
      *(_OWORD*)a2 = v12;
      v11 = v13;
    }
    v10 -= 80;
  } while (v10 != v7);
  v14 = 0;
  v15 = v7;
  do {
    if ((*(_BYTE*)(v15 + 49) & 2) != 0) {
      v9 = *(float*)(v15 + 4);
    }
    else {
      if ((v14 & 1) == 0) {
        LANES128(*(a1)).n128_u32[1] = *(_DWORD*)(v15 + 4);
        *(_DWORD*)a2 = *(_DWORD*)(v15 + 16);
        a2[1] = *(_DWORD*)(v15 + 20);
        v16 = *(_OWORD*)a2;
        *((_QWORD*)&v16 + 1) = *(unsigned int*)(v15 + 24);
        *(_OWORD*)a2 = v16;
      }
      v14 = 1;
    }
    v15 += 80;
  } while (v15 != v8);
  v17 = v9 + -0x1.cccccc0000000p-1f;
  if (v17 <= v11) {
    goto LABEL_20;
  }
  LANES128(*(a1)).n128_f32[1] = v17;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a6190) != 0) {
    v21 = *((_QWORD*)GameData_212c558 + 1);
    *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
    *((_QWORD*)&GameData_21a6180 + 1) = v21;
    __cxa_guard_release((__int64)&GameData_21a6190);
  }
  *(_QWORD*)a2 = GameData_21a6180;
  v18 = *(_OWORD*)a2;
  v19 = v22_.v24;
  *((_QWORD*)&v18 + 1) = DWORD2(GameData_21a6180);
  *(_OWORD*)a2 = v18;
  if (v19 == 1) {
    v7 = v22_.v22;
  LABEL_20:
    if (v7 != 0) {
      v22_.v23 = v7;
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v7);
    }
  }
}

void game_11073c0(float32x4_t* a1, _DWORD* a2, double a3, int32x2_t a4)
{

#pragma clang fp contract(off)
  float32x4_t v6;
  __int64 v7;
  __int64 v8;
  float v9;
  __int64 v10;
  float v11;
  __int128 v12;
  float v13;
  char v14;
  __int64 v15;
  __int128 v16;
  float v17;
  __int128 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  struct {
    __int64 v22;
    __int64 v23;
    char gap16_[8];
    unsigned __int8 v24;
  } v22_;
  float32x4_t v25;

  PSEUDO_LOW_LANE64(a4, n64_u32, -1027080192);
  LANES128(v6).n128_u32[1] = LANES64_OF(vdup_lane_s32(a4, 0)).n64_u32[1];
  LANES128(v6).n128_u32[0] = *(unsigned __int32*)&(*a1);
  LANES128(v6).n128_u64[1] = LANES128_OF(vextq_s8(*a1, *a1, 8u)).n128_u32[0];
  v25 = v6;
  collision_671400((void*)(&v22_.v22), a1, &v25, 515);
  if ((v22_.v24 & 1) == 0) {
    LANES128(*(a1)).n128_u32[1] = -1027080192;
    return;
  }
  v7 = v22_.v22;
  v8 = v22_.v23;
  if (v22_.v23 == v22_.v22) {
    goto LABEL_20;
  }
  v9 = -0x1.9000000000000p+6f;
  v10 = v22_.v23;
  v11 = -0x1.9000000000000p+6f;
  do {
    v13 = *(float*)(v10 - 76);
    if ((*(_BYTE*)(v10 - 31) & 2) != 0) {
      v9 = *(float*)(v10 - 76);
    }
    else {
      *(_DWORD*)a2 = *(_DWORD*)(v10 - 64);
      a2[1] = *(_DWORD*)(v10 - 60);
      v12 = *(_OWORD*)a2;
      *((_QWORD*)&v12 + 1) = *(unsigned int*)(v10 - 56);
      *(_OWORD*)a2 = v12;
      v11 = v13;
    }
    v10 -= 80;
  } while (v10 != v7);
  v14 = 0;
  v15 = v7;
  do {
    if ((*(_BYTE*)(v15 + 49) & 2) != 0) {
      v9 = *(float*)(v15 + 4);
    }
    else {
      if ((v14 & 1) == 0) {
        LANES128(*(a1)).n128_u32[1] = *(_DWORD*)(v15 + 4);
        *(_DWORD*)a2 = *(_DWORD*)(v15 + 16);
        a2[1] = *(_DWORD*)(v15 + 20);
        v16 = *(_OWORD*)a2;
        *((_QWORD*)&v16 + 1) = *(unsigned int*)(v15 + 24);
        *(_OWORD*)a2 = v16;
      }
      v14 = 1;
    }
    v15 += 80;
  } while (v15 != v8);
  v17 = v9 + -0x1.3333340000000p-1f;
  if (v17 <= v11) {
    goto LABEL_20;
  }
  LANES128(*(a1)).n128_f32[1] = v17;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a6190) != 0) {
    v21 = *((_QWORD*)GameData_212c558 + 1);
    *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
    *((_QWORD*)&GameData_21a6180 + 1) = v21;
    __cxa_guard_release((__int64)&GameData_21a6190);
  }
  *(_QWORD*)a2 = GameData_21a6180;
  v18 = *(_OWORD*)a2;
  v19 = v22_.v24;
  *((_QWORD*)&v18 + 1) = DWORD2(GameData_21a6180);
  *(_OWORD*)a2 = v18;
  if (v19 == 1) {
    v7 = v22_.v22;
  LABEL_20:
    if (v7 != 0) {
      v22_.v23 = v7;
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v7);
    }
  }
}

__int64 game_111ef70(__int64 a1, __int64 a2, ...)
{
  int v3;
  _QWORD* v4;
  unsigned int v5;
  __int64 (**v6)(_QWORD*, unsigned int*);
  unsigned int v8;
  __int64 (**v9)(_QWORD*, unsigned int*);
  __builtin_va_list va;
  char v11[32];
  __builtin_va_list va1;
  unsigned int v13;

  __builtin_va_start(va, a2);
  __builtin_va_start(va1, a2);
  vsnprintf(v11, 32, a2, (__int64)&va);
  v3 = *(unsigned __int8*)(a1 + 64);
  v4 = *(_QWORD**)(a1 + 8);
  if (v3 == 1) {
    v5 = (unsigned int)game_HashString32(v11);
    v6 = (__int64 (**)(_QWORD*, unsigned int*))*v4;
    v13 = v5;
    return v6[2](v4, &v13);
  }
  else {
    v8 = (unsigned int)game_HashString32(v11);
    v9 = (__int64 (**)(_QWORD*, unsigned int*))*v4;
    v13 = v8;
    return (*v9)(v4, &v13);
  }
}

__int64 game_11c4a00(__int64 result, __int64 a2, float a3)
{
  __int64 v3;
  atomic_uchar* v4;
  unsigned __int8 explicit;
  int* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned int* v18;
  float v19;
  float v20;
  float v22;
  _DWORD* v23;
  __int64* v24;
  unsigned __int64 v25;
  float32x4_t v26;
  int8x16_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t* v33;
  float32x4_t v34;
  int8x16_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  unsigned int v44;
  unsigned int v45;
  int v46;
  int v47;
  float v48;
  int v49;
  float v50;
  __int64 v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int128 v56;
  int8x16_t v57;
  int8x16_t v58;

  v3 = *(_QWORD*)(result + 152);
  if (v3 != 0) {
    v4 = (atomic_uchar*)GameData_212deb8;
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212deb8,
                                    memory_order_acquire);
    v6 = GameData_212deb0;
    if ((explicit & 1) == 0) {
      v48 = a3;
      v53 = a2;
      v54 = result;
      v49 = __cxa_guard_acquire((__int64)GameData_212deb8);
      a2 = v53;
      result = v54;
      a3 = v48;
      if (v49 != 0) {
        *v6 = wld_Crc32(0, "CharacterBuilder", 0x10u);
        __cxa_guard_release((__int64)GameData_212deb8);
        a2 = v53;
        result = v54;
        a3 = v48;
      }
    }
    v7 = *(_QWORD*)(v3 + 512);
    v8 = v7;
    while (v8 != *(_QWORD*)(v3 + 504)) {
      v9 = *(_DWORD*)(v8 - 16);
      v8 -= 16;
      v7 -= 16;
      if (v9 == *v6) {
        if (*(_QWORD*)(v3 + 512) != v7) {
          v10 = *(_QWORD*)(v7 + 8);
          if (v10 != 0 && *(_QWORD*)(v10 + 112) != 0) {
            v11 = *(_QWORD*)(result + 152);
            if (v11 != 0) {
              if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0) {
                v50 = a3;
                v51 = a2;
                v55 = result;
                v52 = __cxa_guard_acquire((__int64)GameData_212deb8);
                result = v55;
                a3 = v50;
                a2 = v51;
                if (v52 != 0) {
                  *v6 = wld_Crc32(0, "CharacterBuilder", 0x10u);
                  __cxa_guard_release((__int64)GameData_212deb8);
                  result = v55;
                  a3 = v50;
                  a2 = v51;
                }
              }
              v12 = *(_QWORD*)(v11 + 512);
              v13 = v12;
              while (v13 != *(_QWORD*)(v11 + 504)) {
                v14 = *(_DWORD*)(v13 - 16);
                v13 -= 16;
                v12 -= 16;
                if (v14 == *v6) {
                  if (*(_QWORD*)(v11 + 512) != v12) {
                    v15 = *(_QWORD*)(v12 + 8);
                    if (v15 != 0) {
                      v16 = *(_QWORD*)(v15 + 112);
                      if (v16 != 0) {
                        *(_DWORD*)(v16 + 148) = 1065353216;
                        *(_DWORD*)(v16 + 152) =
                            *(_DWORD*)(*(_QWORD*)GameData_212d270 + 512LL);
                      }
                    }
                  }
                  break;
                }
              }
            }
            if (a2 != 0 && *(_QWORD*)(a2 + 152) != 0 &&
                *(_QWORD*)(result + 152) != 0) {
              v17 = *(_QWORD*)(a2 + 184);
              v18 = (unsigned int*)GameData_212d280;
              v19 = *(float*)(a2 + 180) + *(float*)(a2 + 196);
              v20 = 0x0.0p+0f;
              if (a3 >= 0x1.99999a0000000p-3f || a3 <= 0x0.0p+0f) {
                v22 = a3;
              }
              else {
                v22 = 0x0.0p+0f;
              }
              if (a3 >= 0x1.99999a0000000p-3f && a3 > 0x0.0p+0f) {
                if ((unsigned int)(*GameData_212d280 - *(int*)(result + 392)) >=
                    0xC) {
                  v22 = a3;
                }
                else {
                  v22 = 0x0.0p+0f;
                }
              }
              LANES128(v57).n128_u32[0] = *(_DWORD*)(a2 + 176);
              LANES128(v57).n128_f32[1] = v19;
              LANES128(v57).n128_u64[1] = v17;
              v23 = (_DWORD*)result;
              v24 = GameData_212fc38[0];
              if (*GameData_212fc38[0] != 0) {
                v20 = *(float*)(*GameData_212fc38[0] + 448) *
                      0x1.1df46a0000000p-6f;
              }
              {
                __typeof__(v25) z_ = (__typeof__(v25)){0};
                LODWORD(z_) = 0;
                v25 = z_;
              }
              *((float*)&v25 + 1) = v20;
              v56 = v25;
              math_Quat_FromEulerianAngle((void*)((float*)&v58), (float*)&v56);
              LANES128(v26).n128_u64[0] = LANES128(v57).n128_u64[0];
              v27 = vmulq_f32(v58, COERCE_AS(float32x4_t, GameData_1a829d0));
              LANES128(v28).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                      .n64_u64[0];
              LANES128(v29).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              LANES128(v30).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                      .n64_u64[0];
              LANES128(v31).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              LANES128(v28).n128_u64[1] = LANES128(v28).n128_u64[0];
              LANES128(v26).n128_u64[1] = LANES128(v29).n128_u64[0];
              *(int8x8_t*)&LANES128(v30).n128_i8[8] =
                  vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
              *(int32x2_t*)&LANES128(v31).n128_i8[8] = vdup_lane_s32(
                  COERCE_AS(int32x2_t, LANES128(v27).n128_u64[0]), 1);
              v32 = vmlaq_f32(vmulq_f32(v27, v28),
                              COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v26, v30));
              LANES128(v26).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              LANES128(v29).n128_u64[1] = LANES128(v26).n128_u64[0];
              LANES128(v26).n128_u64[1] = LANES128(v57).n128_u64[0];
              v33 = (float32x4_t*)*v24;
              LANES128(v34).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v34).n128_i8[8] =
                  vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
              LANES128(v27).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              v35 = vmlsq_f32(
                  vmlaq_f32(v32, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v26, v31)),
                  v34, v29);
              LANES128(v34).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                      .n64_u64[0];
              LANES128(v36).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                      .n64_u64[0];
              LANES128(v37).n128_u64[0] = LANES128(v58).n128_u64[0];
              LANES128(v34).n128_u64[1] = LANES128(v34).n128_u64[0];
              LANES128(v38).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              LANES128(v37).n128_u64[1] = LANES128(v27).n128_u64[0];
              *(int8x8_t*)&LANES128(v36).n128_i8[8] =
                  vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
              *(int32x2_t*)&LANES128(v38).n128_i8[8] = vdup_lane_s32(
                  COERCE_AS(int32x2_t, LANES128(v35).n128_u64[0]), 1);
              v39 = vmlaq_f32(vmulq_f32(v34, v35),
                              COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v37, v36));
              LANES128(v36).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              LANES128(v27).n128_u64[1] = LANES128(v36).n128_u64[0];
              LANES128(v36).n128_u64[1] = LANES128(v58).n128_u64[0];
              LANES128(v40).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v40).n128_i8[8] =
                  vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
              v41 = (__typeof__(v41)){0};
              v42 = vmlsq_f32(
                  vmlaq_f32(v39, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v36, v38)),
                  v40, v27);
              LANES128(v57).n128_u64[0] = LANES128(v42).n128_u64[0];
              LANES128(v43).n128_u64[0] = LANES128(v42).n128_u64[0];
              LANES128(v43).n128_u64[1] = LANES128(v42).n128_u32[2];
              if (v33 != nullptr) {
                v41 = v33[27];
              }
              v44 = *v18;
              v45 = v23[95];
              v46 = v23[94];
              v57 = vaddq_f32(v43, v41);
              if (v44 <= v45) {
                v47 = v46;
              }
              else {
                v47 = 0;
              }
              result = GameRoutine_10f33c0((__int64)(v23 + 60), &v57, v47, v22);
              v23[96] = *v18;
            }
          }
        }
        return result;
      }
    }
  }
  return result;
}

bool game_1214620(_DWORD* a1, int* a2)
{
  __int64 v2;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int* v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int* v40;
  __int64 v41;
  int v42;
  _DWORD* v43;
  int v44;
  int v45;
  __int64 v46;
  __int64 v47;
  char* v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;

  v2 = a2 - (__typeof__(a2))a1;
  if (v2 > 2) {
    switch (v2) {
    case 3LL:
      v26 = a1[1];
      v27 = *(a2 - 1);
      if (v26 <= v27) {
        v28 = *(a2 - 1);
      }
      else {
        v28 = a1[1];
      }
      if (v26 >= v27) {
        v26 = *(a2 - 1);
      }
      *(a2 - 1) = v26;
      a1[1] = v28;
      v29 = *(a2 - 1);
      if (v29 <= (signed __int32)*a1) {
        v30 = *(_DWORD*)a1;
      }
      else {
        v30 = *(a2 - 1);
      }
      if (v29 >= (signed __int32)*a1) {
        v29 = *(_DWORD*)a1;
      }
      *(a2 - 1) = v29;
      v32 = *(_DWORD*)a1;
      v31 = a1[1];
      if (v30 <= v31) {
        v32 = a1[1];
      }
      if (v30 < v31) {
        v31 = v30;
      }
      *(_DWORD*)a1 = v32;
      a1[1] = v31;
      return true;
    case 4LL:
      v50 = a1[1];
      v49 = a1[2];
      if ((signed __int32)*a1 <= v49) {
        v51 = a1[2];
      }
      else {
        v51 = *(_DWORD*)a1;
      }
      if ((signed __int32)*a1 < v49) {
        v49 = *(_DWORD*)a1;
      }
      a1[2] = v49;
      *(_DWORD*)a1 = v51;
      v52 = *(a2 - 1);
      if (v50 <= v52) {
        v53 = *(a2 - 1);
      }
      else {
        v53 = v50;
      }
      if (v50 < v52) {
        v52 = v50;
      }
      *(a2 - 1) = v52;
      v54 = *(_DWORD*)a1;
      if ((signed __int32)*a1 <= v53) {
        v55 = v53;
      }
      else {
        v55 = *(_DWORD*)a1;
      }
      if (v54 >= v53) {
        v54 = v53;
      }
      *(_DWORD*)a1 = v55;
      a1[1] = v54;
      v56 = a1[2];
      v57 = *(a2 - 1);
      if (v56 <= v57) {
        v58 = *(a2 - 1);
      }
      else {
        v58 = a1[2];
      }
      if (v56 >= v57) {
        v56 = *(a2 - 1);
      }
      *(a2 - 1) = v56;
      v59 = a1[1];
      if (v59 <= v58) {
        v60 = v58;
      }
      else {
        v60 = a1[1];
      }
      if (v59 >= v58) {
        v59 = v58;
      }
      a1[1] = v60;
      a1[2] = v59;
      return true;
    case 5LL:
      v4 = *(_DWORD*)a1;
      v5 = a1[1];
      if ((signed __int32)*a1 <= v5) {
        v6 = a1[1];
      }
      else {
        v6 = *(_DWORD*)a1;
      }
      if (v4 >= v5) {
        v4 = a1[1];
      }
      *(_DWORD*)a1 = v6;
      a1[1] = v4;
      v7 = a1[3];
      v8 = *(a2 - 1);
      if (v7 <= v8) {
        v9 = *(a2 - 1);
      }
      else {
        v9 = a1[3];
      }
      if (v7 >= v8) {
        v7 = *(a2 - 1);
      }
      *(a2 - 1) = v7;
      a1[3] = v9;
      v10 = *(a2 - 1);
      v11 = a1[2];
      if (v10 <= v11) {
        v12 = a1[2];
      }
      else {
        v12 = *(a2 - 1);
      }
      if (v10 >= v11) {
        v10 = a1[2];
      }
      *(a2 - 1) = v10;
      v14 = a1[2];
      v13 = a1[3];
      v15 = a1[1];
      if (v12 <= v13) {
        v14 = a1[3];
      }
      if (v12 < v13) {
        v13 = v12;
      }
      a1[2] = v14;
      a1[3] = v13;
      v16 = *(a2 - 1);
      if (v15 <= v16) {
        v17 = *(a2 - 1);
      }
      else {
        v17 = v15;
      }
      if (v15 < v16) {
        v16 = v15;
      }
      *(a2 - 1) = v16;
      v18 = *(_DWORD*)a1;
      v20 = a1[2];
      v19 = a1[3];
      if (v19 <= (signed __int32)*a1) {
        v21 = *(_DWORD*)a1;
      }
      else {
        v21 = a1[3];
      }
      if (v19 >= v18) {
        v19 = *(_DWORD*)a1;
      }
      if (v21 <= v20) {
        v18 = a1[2];
      }
      if (v21 < v20) {
        v20 = v21;
      }
      if (v19 <= v17) {
        v22 = v17;
      }
      else {
        v22 = v19;
      }
      if (v19 >= v17) {
        v19 = v17;
      }
      if (v22 <= v20) {
        v17 = v20;
      }
      *(_DWORD*)a1 = v18;
      a1[1] = v17;
      if (v22 >= v20) {
        v23 = v20;
      }
      else {
        v23 = v22;
      }
      a1[2] = v23;
      a1[3] = v19;
      return true;
    default:
      break;
    }
    goto LABEL_69;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 != 2) {
  LABEL_69:
    v34 = a1 + 2;
    v33 = a1[2];
    v36 = *(_DWORD*)a1;
    v35 = a1[1];
    if (v35 <= v33) {
      v37 = a1[2];
    }
    else {
      v37 = a1[1];
    }
    if (v35 < v33) {
      v33 = a1[1];
    }
    if (v33 <= v36) {
      v38 = *(_DWORD*)a1;
    }
    else {
      v38 = v33;
    }
    if (v33 >= v36) {
      v33 = *(_DWORD*)a1;
    }
    *v34 = v33;
    if (v36 <= v37) {
      v39 = v37;
    }
    else {
      v39 = v36;
    }
    if (v36 > v37) {
      v38 = v37;
    }
    *(_DWORD*)a1 = v39;
    a1[1] = v38;
    v40 = a1 + 3;
    if (a1 + 3 == a2) {
      return true;
    }
    v41 = 12;
    v42 = 0;
    while (1) {
      v44 = *v40;
      v45 = *v34;
      if (*v40 > v45) {
        v46 = v41;
        do {
          v47 = v46 - 4;
          *(_DWORD*)((char*)a1 + v46) = v45;
          if (v46 == 4) {
            v43 = a1;
            goto LABEL_87;
          }
          v48 = (char*)a1 + v46;
          v46 -= 4;
          v45 = *((_DWORD*)v48 - 2);
        } while (v44 > v45);
        v43 = (_DWORD*)((char*)a1 + v47);
      LABEL_87:
        ++v42;
        *(_DWORD*)v43 = v44;
        if (v42 == 8) {
          return v40 + 1 == a2;
        }
      }
      v34 = v40++;
      v41 += 4;
      if (v40 == a2) {
        return true;
      }
    }
  }
  v24 = *(a2 - 1);
  v25 = *(_DWORD*)a1;
  if (v24 <= (signed __int32)*a1) {
    return true;
  }
  *(_DWORD*)a1 = v24;
  *(a2 - 1) = v25;
  return true;
}

void game_156c910(__int64 result, char* a2, int a3, ...)
{
  __builtin_va_list va1;
  __builtin_va_list va;
  _BYTE v8[1024];

  if (result != 0 && a2 != nullptr) {
    memset((__int64)v8, 0, 0x400u);
    __builtin_va_start(va, a3);
    if (a3 < 1) {
      strcpy((__int64)v8, a2);
    }
    else {
      __builtin_va_copy(va1, va);
      vsnprintf(v8, 1024, a2, (__int64)&va1);
    }
    GameRoutine_156c5d0(result, (__int64)v8, 0);
  }
}

bool game_1732160(_DWORD* a1, int* a2)
{
  __int64 v2;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int* v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int* v23;
  __int64 v24;
  int v25;
  _DWORD* v26;
  int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;

  v2 = a2 - (__typeof__(a2))a1;
  if (v2 > 2) {
    if (v2 == 3) {
      v11 = *(_DWORD*)a1;
      v12 = a1[1];
      v13 = *(a2 - 1);
      if (v12 < (signed __int32)*a1) {
        if (v13 >= v12) {
          *(_DWORD*)a1 = v12;
          a1[1] = v11;
          v22 = *(a2 - 1);
          if (v22 >= v11) {
            return true;
          }
          a1[1] = v22;
        }
        else {
          *(_DWORD*)a1 = v13;
        }
        *(a2 - 1) = v11;
        return true;
      }
      if (v13 >= v12) {
        return true;
      }
      a1[1] = v13;
      *(a2 - 1) = v12;
      v21 = a1[1];
    LABEL_73:
      v37 = *(_DWORD*)a1;
      if (v21 >= (signed __int32)*a1) {
        return true;
      }
      *(_DWORD*)a1 = v21;
      a1[1] = v37;
      return true;
    }
    if (v2 != 4) {
      if (v2 != 5) {
        goto LABEL_16;
      }
      v5 = *(_DWORD*)a1;
      v4 = a1[1];
      v6 = a1[2];
      if (v4 >= (signed __int32)*a1) {
        if (v6 < v4) {
          a1[1] = v6;
          a1[2] = v4;
          if (v6 >= v5) {
            v7 = v5;
            v8 = v6;
          }
          else {
            *(_DWORD*)a1 = v6;
            a1[1] = v5;
            v7 = v6;
            v8 = v5;
          }
          goto LABEL_63;
        }
        v7 = *(_DWORD*)a1;
        v8 = a1[1];
      }
      else {
        if (v6 < v4) {
          *(_DWORD*)a1 = v6;
          a1[2] = v5;
          v7 = v6;
          v8 = v4;
        LABEL_51:
          v4 = v5;
        LABEL_63:
          v33 = a1[3];
          if (v33 >= v4) {
            v4 = a1[3];
          }
          else {
            a1[2] = v33;
            a1[3] = v4;
            if (v33 < v8) {
              a1[1] = v33;
              a1[2] = v8;
              if (v33 < v7) {
                *(_DWORD*)a1 = v33;
                a1[1] = v7;
              }
            }
          }
          v34 = *(a2 - 1);
          if (v34 >= v4) {
            return true;
          }
          a1[3] = v34;
          *(a2 - 1) = v4;
          v35 = a1[2];
          v21 = a1[3];
          if (v21 >= v35) {
            return true;
          }
          a1[2] = v21;
          a1[3] = v35;
        LABEL_71:
          v36 = a1[1];
          if (v21 >= v36) {
            return true;
          }
          a1[1] = v21;
          a1[2] = v36;
          goto LABEL_73;
        }
        *(_DWORD*)a1 = v4;
        a1[1] = v5;
        if (v6 < v5) {
          a1[1] = v6;
          a1[2] = v5;
          v7 = v4;
          v8 = v6;
          goto LABEL_51;
        }
        v7 = v4;
        v8 = v5;
      }
      v4 = v6;
      goto LABEL_63;
    }
    v19 = *(_DWORD*)a1;
    v18 = a1[1];
    v20 = a1[2];
    if (v18 >= (signed __int32)*a1) {
      if (v20 < v18) {
        a1[1] = v20;
        a1[2] = v18;
        if (v20 < v19) {
          *(_DWORD*)a1 = v20;
          a1[1] = v19;
        }
        goto LABEL_57;
      }
    }
    else {
      if (v20 < v18) {
        *(_DWORD*)a1 = v20;
      LABEL_55:
        a1[2] = v19;
        v18 = v19;
      LABEL_57:
        v32 = *(a2 - 1);
        if (v32 >= v18) {
          return true;
        }
        a1[2] = v32;
        *(a2 - 1) = v18;
        v21 = a1[2];
        goto LABEL_71;
      }
      *(_DWORD*)a1 = v18;
      a1[1] = v19;
      if (v20 < v19) {
        a1[1] = v20;
        goto LABEL_55;
      }
    }
    v18 = v20;
    goto LABEL_57;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 != 2) {
  LABEL_16:
    v15 = a1 + 2;
    v14 = a1[2];
    v16 = *(_DWORD*)a1;
    v17 = a1[1];
    if (v17 >= (signed __int32)*a1) {
      if (v14 < v17) {
        a1[1] = v14;
        a1[2] = v17;
        if (v14 < v16) {
          *(_DWORD*)a1 = v14;
          a1[1] = v16;
        }
      }
      goto LABEL_39;
    }
    if (v14 >= v17) {
      *(_DWORD*)a1 = v17;
      a1[1] = v16;
      if (v14 >= v16) {
      LABEL_39:
        v23 = a1 + 3;
        if (a1 + 3 == a2) {
          return true;
        }
        v24 = 12;
        v25 = 0;
        while (1) {
          v27 = *v23;
          v28 = *v15;
          if (*v23 < v28) {
            v29 = v24;
            do {
              v30 = v29 - 4;
              *(_DWORD*)((char*)a1 + v29) = v28;
              if (v29 == 4) {
                v26 = a1;
                goto LABEL_42;
              }
              v31 = (char*)a1 + v29;
              v29 -= 4;
              v28 = *((_DWORD*)v31 - 2);
            } while (v27 < v28);
            v26 = (_DWORD*)((char*)a1 + v30);
          LABEL_42:
            ++v25;
            *(_DWORD*)v26 = v27;
            if (v25 == 8) {
              return v23 + 1 == a2;
            }
          }
          v15 = v23++;
          v24 += 4;
          if (v23 == a2) {
            return true;
          }
        }
      }
      a1[1] = v14;
    }
    else {
      *(_DWORD*)a1 = v14;
    }
    a1[2] = v16;
    goto LABEL_39;
  }
  v9 = *(a2 - 1);
  v10 = *(_DWORD*)a1;
  if (v9 >= (signed __int32)*a1) {
    return true;
  }
  *(_DWORD*)a1 = v9;
  *(a2 - 1) = v10;
  return true;
}

#pragma GCC visibility pop
