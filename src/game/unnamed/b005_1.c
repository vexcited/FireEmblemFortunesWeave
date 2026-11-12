#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _DWORD GameData_1a82ec0[4];
extern _DWORD GameData_1b3c61c[25];
extern _UNKNOWN* GameData_1f50948;
extern __int64 (*GameData_1f91be8[])();
extern __int64 (*GameData_1f91c68[])();
extern __int64 (*GameData_1f91ce8[])();
extern __int64 (*GameData_1f94290[])();
extern __int64 (*GameData_1f94b38[])();
extern __int64 (*GameData_1f94bd8[])();
extern __int64 (*GameData_1f94e30[])();
extern __int64 (*GameData_1f95010[])();
extern __int64 (*GameData_1f95140[])();
extern __int64 (*GameData_1f95160[])();
extern __int64 (*GameData_1f95438[])();
extern __int64 GameData_212bf68;
extern __int64 GameData_212c060;
extern __int64 GameData_212c470;
extern __int64 GameData_212c608[2];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c8a0;
extern _UNKNOWN* GameData_212c8a8;
extern __int64* GameData_212c930;
extern __int64* GameData_212ce88[4];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212cfd8[7];
extern __int64* GameData_212d000[2];
extern __int64 GameData_212d0d0[2];
extern __int64 GameData_212d1b0;
extern __int64* GameData_212d1e8;
extern __int64* GameData_212d560[9];
extern __int64* GameData_21309c8[5];
extern int GameData_21762a8;
extern __int64 GameData_21c9988;
extern __int64 GameData_21c99b0;
extern __int64 GameData_21ca240;
extern __int64 GameData_21ca248;
extern __int64 GameData_21ca2f0;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
extern __int64 GameData_21caab0;
extern __int64 GameData_21cd0e0;
extern __int64 GameData_21cd0e8;
extern __int64 GameData_21cd100;
extern __int64 GameData_21cd108;
extern __int64 GameData_21cd128;
extern __int64 GameData_21cd130;
extern __int64 GameData_21cd138;
extern __int64 GameData_21cd148;
extern __int64 GameData_21cd158;
extern __int64 GameData_21cf830;
extern __int64 GameData_21cf840;
extern char GameData_21cf848;
extern char GameData_21cf850;
extern __int64 GameData_21cf858;
extern __int64 GameData_21cf860;
extern __int64 GameData_21cf868;
extern int GameData_21cf870;
extern __int64 GameData_21cf878;
extern int GameData_21cf880;
extern __int64 GameData_21cf888;
extern char GameData_21cf890;
extern __int64 GameData_21cf898;
extern __int64 GameData_21cf8a0;
extern __int64 GameData_21cf8a8;
extern int GameData_21cf8b0;
extern __int64 GameData_21cf8b8;
extern int GameData_21cf8c0;
extern __int64 GameData_21cf8c8;
extern char GameData_21cf8d0;
extern __int64 GameData_21cf8d8;
extern __int64 GameData_21cf8e0;
extern __int64 GameData_21cf8e8;
extern int GameData_21cf8f0;
extern __int64 GameData_21cf8f8;
extern int GameData_21cf900;
extern __int64 GameData_21cf908;
extern char GameData_21cf910;
extern __int64 GameData_21cf918;
extern __int64 GameData_21cf920;
extern __int64 GameData_21cf928;
extern int GameData_21cf930;
extern __int64 GameData_21cf938;
extern int GameData_21cf940;
extern __int64 GameData_21cf948;
extern char GameData_21cf950;
extern __int64 GameData_21cf958;
extern __int64 GameData_21cf960;
extern __int64 GameData_21cf968;
extern int GameData_21cf970;
extern __int64 GameData_21cf978;
extern int GameData_21cf980;
extern __int64 GameData_21cf988;
extern char GameData_21cf990;
extern __int64 GameData_21cf998;
extern __int64 GameData_21cf9a0;
extern __int64 GameData_21cf9a8;
extern int GameData_21cf9b0;
extern __int64 GameData_21cf9b8;
extern int GameData_21cf9c0;
extern __int64 GameData_21cf9c8;
extern char GameData_21cf9d0;
extern __int64 GameData_21cf9d8;
extern __int64 GameData_21cf9e0;
extern __int64 GameData_21cf9e8;
extern int GameData_21cf9f0;
extern __int64 GameData_21cf9f8;
extern int GameData_21cfa00;
extern __int64 GameData_21cfa08;
extern char GameData_21cfa10;
extern __int64 GameData_21cfa18;
extern __int64 GameData_21cfa20;
extern __int64 GameData_21cfa28;
extern int GameData_21cfa30;
extern __int64 GameData_21cfa38;
extern int GameData_21cfa40;
extern __int64 GameData_21cfa48;
extern _UNKNOWN GameData_21cfa50;
extern int GameData_21cfa68;
extern int GameData_21cfa6c;
extern int GameData_21cfa70;
extern int GameData_21cfa74;
extern int GameData_21cfa78;
extern __int64 GameData_21cfa80;
extern __int64 GameData_21cfa88;
extern __int64 GameData_21cfa90;
extern __int64 GameData_21d1e40;
extern __int64 GameData_21d1e50;
extern __int64 GameData_21d87f0;
extern __int64 GameData_21d9988;
extern __int64 GameData_21d9990;
extern __int64 GameData_21ed0a0;
extern __int64 GameData_21ee240;
extern __int64 GameData_21ee260;
extern __int64 GameData_21eea58;
extern __int64 GameData_22400f8;
extern __int64 GameData_2258a58;
extern __int64 GameData_2258ba8;
extern __int64 GameData_2265ed8;
extern __int64 GameData_2265ee0;
extern char GameData_22736e0;
__int64 GameRoutine_1090da0(_QWORD);
__int64 GameRoutine_10d4da0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_10ea6e0(_QWORD, _QWORD);
__int64 GameRoutine_1194890(void);
__int64 GameRoutine_12274e0(_QWORD, _QWORD);
__int64 GameRoutine_122f8e0(_QWORD);
__int64 GameRoutine_12370c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_127be60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1566d90(_QWORD, _QWORD);
__int64 GameRoutine_1567000(_QWORD, _QWORD);
__int64 GameRoutine_1828ef0(void);
__int64 GameRoutine_183e450(void);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_1a09fd0(_QWORD, _QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a6f0(void);
__int64 GameRoutine_1a0a700(_QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD,
                                                  _QWORD);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_658d60(_QWORD);
__int64 GameRoutine_65a7c0(void);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
__int64 GameRoutine_68e840(_QWORD, _QWORD);
__int64 GameRoutine_68ea90(_QWORD, _QWORD);
__int64 GameRoutine_6bea40(_QWORD);
void __attribute__((noreturn)) GameRoutine_6c1f60(void);
__int64 GameRoutine_6c29c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c4610(_QWORD);
__int64 GameRoutine_6c47b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c8530(_QWORD);
__int64 GameRoutine_6c8630(_QWORD);
__int64 GameRoutine_6c8830(_QWORD);
__int64 GameRoutine_6c9450(_QWORD);
__int64 GameRoutine_6cdd40(_QWORD, _QWORD);
__int64 GameRoutine_6cdf80(_QWORD, _QWORD);
__int64 GameRoutine_6d2d30(_QWORD);
__int64 GameRoutine_6d2e40(_QWORD);
__int64 GameRoutine_6dd190(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6ddb60(_QWORD);
__int64 GameRoutine_6ddce0(__int64);
__int64 GameRoutine_6e0810(__int64 result);
__int64 GameRoutine_6e31a0(void);
__int64 GameRoutine_6e36c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_6e4890(int*, int*, int*, _QWORD*);
__int64 GameRoutine_6e49c0(int*, int*, int*, int*, _QWORD*);
__int64 GameRoutine_6e4ab0(int*, int*, int*, int*, int*, _QWORD*);
__int64 GameRoutine_6ea8c0(_QWORD);
__int64 GameRoutine_6ea9d0(_QWORD);
__int64 GameRoutine_716d80(_QWORD, _QWORD);
__int64 GameRoutine_72a260(__int64, __int64, __int64, __int64, __int64,
                           __int64);
__int64 GameRoutine_72b080(__int64, __int64, __int64, __int64, __int64,
                           __int64);
__int64 GameRoutine_72b4a0(__int64, __int64, __int64, __int64, __int64,
                           __int64);
_QWORD* GameRoutine_72b6c0(_QWORD*);
void GameRoutine_730e40(__int64, __int64);
float GameRoutine_734120(int, int, float, float, float, float);
__int64 GameRoutine_739d40(_QWORD);
__int64 GameRoutine_73a7a0(_QWORD);
__int64 GameRoutine_73bf60(_QWORD, _QWORD);
__int64 GameRoutine_73c7c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_73d420(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_73d860(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_73dc80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
void __attribute__((noreturn)) GameRoutine_740050(void);
__int64 GameRoutine_740080(__int64 result, __int64*, unsigned __int64, __int64*,
                           signed __int64);
__int64 GameRoutine_7402a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7404e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_741960();
__int64 GameRoutine_741e40();
__int64 GameRoutine_741ee0();
__int64 GameRoutine_742000();
__int64 GameRoutine_7421a0();
__int64 GameRoutine_7424c0();
__int64 GameRoutine_742510();
__int64 GameRoutine_743a00(_QWORD);
bool GameRoutine_743d50(__int64);
__int64 GameRoutine_7447b0(__int64 result);
__int64 GameRoutine_744a40(__int64 result);
bool GameRoutine_745050(__int64);
__int64 GameRoutine_7450c0(__int64);
__int64 GameRoutine_7456c0(__int64 result, _DWORD*);
__int64 GameRoutine_745a40(__int64);
__int64 GameRoutine_745e80(__int64);
__int64 GameRoutine_746f00(void);
__int64 GameRoutine_747060(__int64);
__int64 GameRoutine_747180(__int64);
__int64 GameRoutine_747b10(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_747df0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_748f80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_74d560();
__int64 GameRoutine_74d660(_QWORD, _QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_74e1f0(void);
__int64 GameRoutine_74e3e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
_QWORD* GameRoutine_7529c0(__int64);
__int64 GameRoutine_756080(__int64, __int64, unsigned int, unsigned int,
                           _BYTE*);
__int64 GameRoutine_757430(__int64 result);
__int64 GameRoutine_757590(__int64 result);
__int64 GameRoutine_758760(__int64);
__int64 GameRoutine_75a370(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_75a4e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_75a5f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_75a760(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_75b490(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_75b600(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_75b710(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_75b880(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_765b20(_QWORD);
__int64 GameRoutine_768a20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_7693e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_76b0c0(_QWORD, _QWORD);
__int64 GameRoutine_76b8c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_76cbc0(_QWORD);
__int64 GameRoutine_777be0(_QWORD);
__int64 GameRoutine_790460(_QWORD, _QWORD);
__int64 GameRoutine_790ba0(_QWORD);
__int64 GameRoutine_7992e0(_QWORD);
__int64 GameRoutine_799aa0(_QWORD, _QWORD);
__int64 GameRoutine_7a86e0(_QWORD);
__int64 GameRoutine_7ac940(_QWORD, _QWORD);
__int64 GameRoutine_7bc1a0(void);
__int64 GameRoutine_7bc2c0(_QWORD);
__int64 GameRoutine_7c0910(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7c6120(_QWORD);
__int64 GameRoutine_7c9f00(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7fc7e0(_QWORD, _QWORD);
__int64 GameRoutine_808760(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_81aee0(_QWORD, double);
__int64 GameRoutine_81b5a0(_QWORD, _QWORD, float);
__int64 GameRoutine_81cf00(float);
__int64 GameRoutine_8206b0(_QWORD);
__int64 GameRoutine_821840(_QWORD);
__int64 GameRoutine_8224a0(_QWORD);
__int64 GameRoutine_825040(_QWORD, _QWORD);
__int64 GameRoutine_827b00(_QWORD, _QWORD);
__int64 GameRoutine_827c00(_QWORD);
__int64 GameRoutine_8288e0(_QWORD, _QWORD);
__int64 GameRoutine_829dc0(_QWORD);
__int64 GameRoutine_82dfe0(_QWORD, _QWORD);
__int64 GameRoutine_842fa0(_QWORD, _QWORD);
__int64 GameRoutine_844ee0(_QWORD);
__int64 GameRoutine_84cf20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_84eb60(_QWORD, _QWORD);
__int64 GameRoutine_89b540(_QWORD);
__int64 GameRoutine_8b0040(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8b9d00(_QWORD);
__int64 GameRoutine_8b9f80(_QWORD, _QWORD);
__int64 GameRoutine_8bbc40(_QWORD);
__int64 GameRoutine_8bc350(_QWORD);
__int64 GameRoutine_8e0880(_QWORD);
__int64 GameRoutine_8eab40(_QWORD);
__int64 GameRoutine_8fdae0(_QWORD, _QWORD);
__int64 GameRoutine_8fe740(_QWORD);
__int64 GameRoutine_90cd80(_QWORD);
__int64 GameRoutine_90d5a0(_QWORD);
__int64 GameRoutine_93bb80(_QWORD);
__int64 GameRoutine_961420(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_975940(void);
__int64 GameRoutine_99d540(_QWORD);
__int64 GameRoutine_9a28e0(_QWORD);
__int64 GameRoutine_9a5560(void);
__int64 GameRoutine_c8b5a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_7402a0_alt1(__int64 result, __int64, unsigned __int64,
                                __int64*) __asm__("GameRoutine_7402a0");
char* GameRoutine_7404e0_alt1(char* result, char*, char*, __int64, __int64,
                              __int64, __int64) __asm__("GameRoutine_7404e0");
char* GameHr_740080(char* result, char* a2, unsigned __int64 a3, __int64* a4,
                    __int64 a5);
_QWORD* GameRoutine_74d660_alt1(__int64, int, char,
                                char) __asm__("GameRoutine_74d660");
_QWORD* Image_72b6c0(_QWORD*);
__int64* Mind_745a40(__int64);
__int64* Mind_745e80(__int64);
__int64* Mind_747060(__int64);
__int64* Mind_747180(__int64);
__int64* game_9a28e0(int);
__int64* game_UnitPool_Get(_BYTE*);
__int64
GameRoutine_12274e0_alt1(__int64 result,
                         unsigned __int64*) __asm__("GameRoutine_12274e0");
__int64 GameRoutine_122f8e0_alt1(__int64) __asm__("GameRoutine_122f8e0");
__int64 GameRoutine_739d40_alt1() __asm__("GameRoutine_739d40");
__int64 GameRoutine_73bf60_alt1(__int64, __int64) __asm__("GameRoutine_73bf60");
__int64 GameRoutine_777be0_alt1(__int64) __asm__("GameRoutine_777be0");
__int64 GameRoutine_89b540_alt1(__int64) __asm__("GameRoutine_89b540");
__int64 GameVariable_827b00(__int64, unsigned __int64*);
__int64 GameVariable_8288e0(__int64 result, unsigned __int8);
__int64 GameVariable_829dc0(__int64);
__int64 IDeploy_748f80(__int64, __int64, unsigned int, unsigned int, int,
                       unsigned int*);
__int64 Image_72b4a0(__int64);
__int64 MapDrawer_808760(__int64, __int64, _DWORD*);
__int64 MapUnitInfo_1828ef0(__int64 result, __int64);
__int64 MapUtil_757430(__int64 result);
__int64 MapUtil_757590(__int64 result);
__int64 Situation_765b20(__int64);
__int64 game_821840();
__int64 game_90d5a0(__int64 result);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_Unit_SkillList_FindCategory(_QWORD*, unsigned __int8);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_map_758760(__int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 nn_oe_GetProgramTotalActiveTime();
__int64 nn_os_ConvertToTick(_QWORD);
bool Mind_743d50(__int64);
bool Mind_745050(__int64);
bool game_Unit_CanSwitchMount(__int64);
bool game_Unit_Unknown6c9450(__int64);
bool game_map_75a760(__int64*, __int64*, __int64*);
char* GameRoutine_6bea40_alt1(char*, char*,
                              char*) __asm__("GameRoutine_6bea40");
char* GameRoutine_6c29c0_alt1(char*, char*,
                              char*) __asm__("GameRoutine_6c29c0");
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_start_tick;
extern __int64 game_gmap_GmapClock_instance_;
extern int game_map_g_unit_menu_index;
unsigned __int64 GameHr_82dfe0(__int64, unsigned int);
void Cursor_730e40(__int64, __int64);
void GameHr_90cd80(__int64);
void GameRecord_99d540(__int64);
void GameReliance_8e0880(_QWORD*);
void GameRoutine_7bc1a0_alt1() __asm__("GameRoutine_7bc1a0");
void GameRoutine_7bc2c0_alt1() __asm__("GameRoutine_7bc2c0");
void GameRoutine_7c0910_alt1(__int64, __int64) __asm__("GameRoutine_7c0910");
void GameRoutine_8eab40_alt1(_QWORD*) __asm__("GameRoutine_8eab40");
void GameVariable_827c00(__int64);
void Image_72a260(__int64);
void Image_72b080(__int64);
void RidePool_93bb80(__int64);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void game_map_75a370(__int64*, __int64*, __int64*, __int64*);
void game_map_75a4e0(__int64*, __int64*, __int64*, __int64*, __int64*);
void game_map_75a5f0(__int64*, __int64*, __int64*, __int64*, __int64*,
                     __int64*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 GameHr_6d5d00(__int64 a1, unsigned __int8* a2, __int64 a3, __int64 a4,
                      char a5);
__int64 GameHr_716760(__int64 a1);
__int64 GameHr_717fc0(unsigned __int64* a1, int a2);
__int64 GameHr_71e760(__int64 a1);
__int64 GameHr_7369b0();
__int64 GameHr_737e40();
__int64 GameHr_73bd40(int a1, __int64 a2);
__int64 GameHr_73dc80(__int64 result, __int64* a2, __int64* a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7);
__int64 GameHr_73f640(__int64 a1, char a2, char a3, int a4, char a5);
void GameHr_73f960(_DWORD* a1, char a2, char a3, int a4);
char* GameHr_7404e0(char* result, char* a2, char* a3, __int64 a4, __int64 a5,
                    __int64 a6, __int64 a7);
__int64 GameHr_74aa60(__int64 result, char** a2, __int64 a3,
                      unsigned __int64 a4, int a5);
void GameHr_759860(__int64* a1, __int64* a2, __int64* a3, __int64 a4, char a5);
__int64 GameHr_75fdc0();
void GameHr_760880(__int64 a1);

__int64 GameHr_6d5d00(__int64 a1, unsigned __int8* a2, __int64 a3, __int64 a4,
                      char a5)
{
  __int64 v5;
  __int16 v8;
  int v9;
  _QWORD* v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  __int64 v26;
  unsigned int v27;
  bool v28;
  __int64 v29;
  int v30;
  unsigned __int64 v31;
  int v32;
  int v33;
  int v34;
  unsigned int v35;
  int v36;
  int v38;
  int v39;
  struct {
    _QWORD v40[2];
    char v41;
    char gap17_[7];
    int* v42;
    _QWORD* v43;
  } v40_;
  int v44;

  v5 = *a2;
  v8 = *(_WORD*)(a3 + 2 * v5 + 540);
  if (v8 == 0) {
    v8 = *(_WORD*)(a4 + 2 * v5 + 354);
  }
  v9 = *(__int16*)(a4 + 2 * v5 + 376) + v8;
  v44 = v9;
  if ((a5 & 1) == 0) {
    return v9 & (unsigned int)~(v9 >> 31);
  }
  v40_.v41 = v5;
  v10 = v40_.v40;
  v40_.v42 = &v44;
  v40_.v43 = v40_.v40;
  v11 = *(_BYTE*)(a1 + 1828);
  v40_.v40[0] = GameData_1f91ce8;
  v40_.v40[1] = a1;
  if ((v11 & 4) == 0) {
    goto LABEL_16;
  }
  v12 = *(_QWORD*)(a1 + 1784);
  v13 = *(_QWORD*)(a1 + 1776);
  if ((int)((unsigned __int64)(v12 - v13) >> 2) < 1) {
    v10 = v40_.v40;
  LABEL_16:
    v18 = 32;
    goto LABEL_17;
  }
  v14 = 0;
  v15 = 0;
  v16 = GameData_212c880[0];
  v17 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v17 + 64) +
                             8LL * (*(_DWORD*)(v13 + v14) & 0xFFF)) +
                  115LL) == 2) {
      if (v40_.v43 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(_QWORD*, __int64))(*v40_.v43 + 48LL))(v40_.v43, v13 + v14);
      v17 = *v16;
      v12 = *(_QWORD*)(a1 + 1784);
      v13 = *(_QWORD*)(a1 + 1776);
    }
    ++v15;
    v14 += 4;
  } while (v15 < (int)((unsigned __int64)(v12 - v13) >> 2));
  v10 = v40_.v43;
  if (v40_.v43 == v40_.v40) {
    goto LABEL_16;
  }
  if (v40_.v43 != nullptr) {
    v18 = 40;
  LABEL_17:
    (*(void (**)(_QWORD*, unsigned __int8*, __int64, __int64))(*v10 + v18))(
        v10, a2, a3, a4);
  }
  v19 = *(_QWORD*)(a1 + 400);
  v20 = *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                   8LL * *(unsigned __int8*)(a1 + 1880));
  if (v20 != 0 && *(_BYTE*)(v19 + 96) == 2) {
    v22 = *(_QWORD*)(v19 + 112);
    if (v22 != 0 &&
        *(unsigned __int8*)(v20 + 32) == *(unsigned __int8*)(v22 + 32)) {
      v23 = *(_QWORD*)(a1 + 392);
      if (v23 == 0) {
        goto LABEL_37;
      }
      v24 = *(_QWORD*)(a1 + 1904);
      if (v24 == 0) {
        goto LABEL_37;
      }
      v25 = *(unsigned __int8*)(v23 + 48);
      v26 = a1 + 1904;
      do {
        v27 = *(unsigned __int8*)(v24 + 26);
        v28 = v27 >= v25;
        if (v27 >= v25) {
          v29 = 0;
        }
        else {
          v29 = 8;
        }
        if (v28) {
          v26 = v24;
        }
        v24 = *(_QWORD*)(v24 + v29);
      } while (v24 != 0);
      if (v26 != a1 + 1904 && v25 >= *(unsigned __int8*)(v26 + 26)) {
        v30 = *(_WORD*)(v26 + 28) & 0xFFF;
      }
      else {
      LABEL_37:
        v30 = 0;
      }
      v31 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
      if ((int)v31 <= 0) {
        v38 = *(char*)(*(_QWORD*)(v20 + 24) + *a2 + 66LL);
      }
      else {
        v32 = 0;
        v33 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v31 - 1));
        if (v33 >= v30) {
          v33 = v30;
        }
        if (v30 >= (signed __int32)*(_DWORD*)GameData_21d9988) {
          v34 = v33;
        }
        else {
          v34 = *(_DWORD*)GameData_21d9988;
        }
        while (1) {
          v35 = (unsigned int)(v32 + v31) >> 1;
          v36 = *(_DWORD*)(GameData_21d9988 + 4LL * v35);
          if (v34 == v36) {
            break;
          }
          if (v34 < v36) {
            LODWORD(v31) = (unsigned int)(v32 + v31) >> 1;
          }
          else {
            v32 = v35 + 1;
          }
          if (v32 >= (int)v31) {
            goto LABEL_54;
          }
        }
        v32 = v35 + 1;
      LABEL_54:
        v38 = *(char*)(*(_QWORD*)(v20 + 24) + *a2 + 11LL * (unsigned int)v32 +
                       66);
        if (v19 == 0) {
          v39 = 1;
          goto LABEL_57;
        }
      }
      v39 = *(unsigned __int8*)(v19 + 120);
    LABEL_57:
      v9 = v44 + v39 * v38;
      return v9 & (unsigned int)~(v9 >> 31);
    }
  }
  v9 = v44;
  return v9 & (unsigned int)~(v9 >> 31);
}

_QWORD* GameHr_6d7e80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD* result;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[4];
  _QWORD* v23;

  if ((unsigned __int8)a2 == 1) {
    result = v22;
    v22[0] = GameData_1f91be8;
    v22[1] = a3;
    v6 = *(_BYTE*)(a1 + 1344);
    v23 = v22;
    if ((v6 & 2) != 0) {
      v7 = *(_QWORD*)(a1 + 1304);
      v8 = *(_QWORD*)(a1 + 1296);
      if ((int)((unsigned __int64)(v7 - v8) >> 2) >= 1) {
        v9 = 0;
        v10 = 0;
        v11 = GameData_212c880[0];
        v12 = *GameData_212c880[0];
        while (1) {
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v12 + 64) +
                                   8LL * (*(_DWORD*)(v8 + v9) & 0xFFF)) +
                        104LL) == 1) {
            v13 = v23;
            if (v23 == nullptr) {
              goto LABEL_23;
            }
            (*(void (**)(_QWORD*, __int64))(*v23 + 48LL))(v23, v8 + v9);
            v12 = *v11;
            v7 = *(_QWORD*)(a1 + 1304);
            v8 = *(_QWORD*)(a1 + 1296);
          }
          ++v10;
          v9 += 4;
          if (v10 >= (int)((unsigned __int64)(v7 - v8) >> 2)) {
            goto LABEL_16;
          }
        }
      }
      goto LABEL_19;
    }
  LABEL_20:
    v21 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v21))(result,
                                                                       a2);
  }
  result = v22;
  v23 = v22;
  v22[0] = GameData_1f91c68;
  v22[1] = a3;
  if ((*(_WORD*)(a1 + 1824) & (unsigned __int16)(1 << a2)) == 0) {
    goto LABEL_20;
  }
  v14 = *(_QWORD*)(a1 + 1784);
  v15 = *(_QWORD*)(a1 + 1776);
  if ((int)((unsigned __int64)(v14 - v15) >> 2) < 1) {
  LABEL_19:
    result = v22;
    goto LABEL_20;
  }
  v16 = (unsigned __int16)(1 << a2);
  v17 = 0;
  v18 = 0;
  v19 = GameData_212c880[0];
  v20 = *GameData_212c880[0];
  do {
    if (((v16 >> *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v20 + 64) +
                                      8LL * (*(_DWORD*)(v15 + v17) & 0xFFF)) +
                           104LL)) &
         1) != 0) {
      v13 = v23;
      if (v23 == nullptr) {
      LABEL_23:
        GameRoutine_60a310(v13, a2, a3, a4);
      }
      (*(void (**)(_QWORD*, __int64))(*v23 + 48LL))(v23, v15 + v17);
      v20 = *v19;
      v14 = *(_QWORD*)(a1 + 1784);
      v15 = *(_QWORD*)(a1 + 1776);
    }
    ++v18;
    v17 += 4;
  } while (v18 < (int)((unsigned __int64)(v14 - v15) >> 2));
LABEL_16:
  result = v23;
  if (v23 == v22) {
    goto LABEL_20;
  }
  if (v23 == nullptr) {
    return result;
  }
  v21 = 40;
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v21))(result,
                                                                     a2);
}

__int64 GameHr_6e2ce0(__int64 a1, __int64 a2, char a3)
{
  char v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  bool v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v25;
  __int64 v26;
  int v27;
  char v28;
  char v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  unsigned int v41;
  unsigned int v42;
  int v43;
  int v44;
  int v45;
  _BYTE v47[4];
  _BYTE v48[4];

  v6 = GameRoutine_6e31a0();
  if ((v6 & 1) != 0) {
    if ((a3 & 1) != 0) {
      v7 = *(_QWORD*)(a1 + 400);
      v8 = *(_QWORD*)(a2 + 400);
      if (v8 != 0 && v8 != v7 &&
          *(unsigned __int8*)(v8 + 49) >=
              (unsigned int)*(unsigned __int8*)(v7 + 49)) {
        *(_QWORD*)(a1 + 400) = v8;
        v7 = v8;
      }
      v9 = GameData_212c8a0;
      v10 = *GameData_212c8a0;
      if (*(_BYTE*)(a2 + 1880) != 0) {
        v11 = *(_QWORD*)(*(_QWORD*)(v10 + 64) +
                         8LL * *(unsigned __int8*)(a2 + 1880));
        if (v11 != 0 && *(_BYTE*)(v7 + 96) == 2) {
          v13 = *(_QWORD*)(v7 + 112);
          if (v13 != 0 &&
              *(unsigned __int8*)(v11 + 32) == *(unsigned __int8*)(v13 + 32)) {
            *(_WORD*)(a1 + 1880) = *(_WORD*)(a2 + 1880);
            *(_BYTE*)(a1 + 1882) = *(_BYTE*)(a2 + 1882);
            v14 = *(_QWORD*)(a2 + 1883);
            *(_BYTE*)(a1 + 1891) = *(_BYTE*)(a2 + 1891);
            *(_QWORD*)(a1 + 1883) = v14;
            if (a1 != a2) {
              GameRoutine_6e36c0(a1 + 1896, *(_QWORD*)(a2 + 1896), a2 + 1904);
              v15 = *(unsigned __int8*)(a2 + 1920);
              v16 = (_QWORD*)(a1 + 1920);
              if ((*(_BYTE*)(a1 + 1920) & 1) != 0) {
                v19 = (v15 & 1) == 0;
                v20 = v15 >> 1;
                if (v19) {
                  v21 = a2 + 1921;
                }
                else {
                  v21 = *(_QWORD*)(a2 + 1936);
                }
                if (v19) {
                  v22 = v20;
                }
                else {
                  v22 = *(_QWORD*)(a2 + 1928);
                }
                GameRoutine_64dde0(v16, v21, v22);
              }
              else if ((v15 & 1) != 0) {
                GameRoutine_64df20(v16, *(_QWORD*)(a2 + 1936),
                                   *(_QWORD*)(a2 + 1928));
              }
              else {
                v17 = *(_QWORD*)(a2 + 1920);
                v18 = *(_QWORD*)(a2 + 1936);
                *(_QWORD*)(a1 + 1928) = *(_QWORD*)(a2 + 1928);
                *(_QWORD*)(a1 + 1936) = v18;
                *v16 = v17;
              }
            }
            v10 = *v9;
            *(_BYTE*)(a1 + 1883) = *(_BYTE*)(a1 + 2088);
            v7 = *(_QWORD*)(a1 + 400);
          }
        }
      }
      v23 = *(_QWORD*)(*(_QWORD*)(v10 + 64) +
                       8LL * *(unsigned __int8*)(a1 + 1880));
      if (v23 != 0 && *(_BYTE*)(v7 + 96) == 2) {
        v25 = *(_QWORD*)(v7 + 112);
        if (v25 != 0 &&
            *(unsigned __int8*)(v23 + 32) == *(unsigned __int8*)(v25 + 32)) {
          goto LABEL_42;
        }
      }
      *(_DWORD*)(a1 + 1888) = 0;
      *(_QWORD*)(a1 + 1880) = 0;
      if ((*(_BYTE*)(a1 + 1920) & 1) != 0) {
        **(_BYTE**)(a1 + 1936) = 0;
        *(_QWORD*)(a1 + 1928) = 0;
      }
      else {
        *(_WORD*)(a1 + 1920) = 0;
      }
      GameRoutine_6e3b50(a1 + 1896, *(_QWORD*)(a1 + 1904));
      v26 = *(_QWORD*)(a1 + 400);
      *(_QWORD*)(a1 + 1912) = 0;
      *(_QWORD*)(a1 + 1896) = a1 + 1904;
      *(_QWORD*)(a1 + 1904) = 0;
      v27 = *(unsigned __int8*)(v26 + 96);
      if (*(_BYTE*)(a2 + 1944) != 0 && v27 == 1) {
        *(_WORD*)(a1 + 1944) = *(_WORD*)(a2 + 1944);
        *(_BYTE*)(a1 + 1946) = *(_BYTE*)(a2 + 1946);
        v28 = *(_BYTE*)(a2 + 1951);
        *(_DWORD*)(a1 + 1947) = *(_DWORD*)(a2 + 1947);
        v29 = *(_BYTE*)(a1 + 2088);
        *(_BYTE*)(a1 + 1951) = v28;
        *(_BYTE*)(a1 + 1945) = v29;
        v27 = *(unsigned __int8*)(v26 + 96);
      }
      if (v27 != 1) {
      LABEL_42:
        *(_QWORD*)(a1 + 1944) = 0;
      }
      GameRoutine_6d2e40(a1);
      *(_QWORD*)(a1 + 828) = *(_QWORD*)(a2 + 828);
      *(_QWORD*)(a1 + 836) = *(_QWORD*)(a2 + 836);
      *(_QWORD*)(a1 + 844) = *(_QWORD*)(a2 + 844);
      *(_QWORD*)(a1 + 852) = *(_QWORD*)(a2 + 852);
      *(_QWORD*)(a1 + 860) = *(_QWORD*)(a2 + 860);
      *(_QWORD*)(a1 + 868) = *(_QWORD*)(a2 + 868);
    }
    v30 = *(__int16*)(a1 + 468);
    if (v30 <= *(__int16*)(a2 + 468)) {
      LOWORD(v30) = *(_WORD*)(a2 + 468);
    }
    *(_WORD*)(a1 + 468) = v30;
    v31 = *(__int16*)(a1 + 470);
    if (v31 <= *(__int16*)(a2 + 470)) {
      LOWORD(v31) = *(_WORD*)(a2 + 470);
    }
    *(_WORD*)(a1 + 470) = v31;
    v32 = *(__int16*)(a1 + 472);
    if (v32 <= *(__int16*)(a2 + 472)) {
      LOWORD(v32) = *(_WORD*)(a2 + 472);
    }
    *(_WORD*)(a1 + 472) = v32;
    v33 = *(__int16*)(a1 + 474);
    if (v33 <= *(__int16*)(a2 + 474)) {
      LOWORD(v33) = *(_WORD*)(a2 + 474);
    }
    *(_WORD*)(a1 + 474) = v33;
    v34 = *(__int16*)(a1 + 476);
    if (v34 <= *(__int16*)(a2 + 476)) {
      LOWORD(v34) = *(_WORD*)(a2 + 476);
    }
    *(_WORD*)(a1 + 476) = v34;
    v35 = *(__int16*)(a1 + 478);
    if (v35 <= *(__int16*)(a2 + 478)) {
      LOWORD(v35) = *(_WORD*)(a2 + 478);
    }
    *(_WORD*)(a1 + 478) = v35;
    v36 = *(__int16*)(a1 + 480);
    if (v36 <= *(__int16*)(a2 + 480)) {
      LOWORD(v36) = *(_WORD*)(a2 + 480);
    }
    *(_WORD*)(a1 + 480) = v36;
    v37 = *(__int16*)(a1 + 482);
    if (v37 <= *(__int16*)(a2 + 482)) {
      LOWORD(v37) = *(_WORD*)(a2 + 482);
    }
    *(_WORD*)(a1 + 482) = v37;
    v38 = *(__int16*)(a1 + 484);
    if (v38 <= *(__int16*)(a2 + 484)) {
      LOWORD(v38) = *(_WORD*)(a2 + 484);
    }
    *(_WORD*)(a1 + 484) = v38;
    v39 = *(__int16*)(a1 + 486);
    if (v39 <= *(__int16*)(a2 + 486)) {
      LOWORD(v39) = *(_WORD*)(a2 + 486);
    }
    *(_WORD*)(a1 + 486) = v39;
    v40 = *(__int16*)(a1 + 488);
    if (v40 <= *(__int16*)(a2 + 488)) {
      LOWORD(v40) = *(_WORD*)(a2 + 488);
    }
    *(_WORD*)(a1 + 488) = v40;
    *(_BYTE*)(a1 + 456) = *(_BYTE*)(a2 + 456);
    *(_BYTE*)(a1 + 457) = *(_BYTE*)(a2 + 457);
    *(_BYTE*)(a1 + 458) = *(_BYTE*)(a2 + 458);
    *(_BYTE*)(a1 + 459) = *(_BYTE*)(a2 + 459);
    *(_BYTE*)(a1 + 460) = *(_BYTE*)(a2 + 460);
    *(_BYTE*)(a1 + 461) = *(_BYTE*)(a2 + 461);
    *(_BYTE*)(a1 + 462) = *(_BYTE*)(a2 + 462);
    *(_BYTE*)(a1 + 463) = *(_BYTE*)(a2 + 463);
    *(_BYTE*)(a1 + 464) = *(_BYTE*)(a2 + 464);
    *(_BYTE*)(a1 + 465) = *(_BYTE*)(a2 + 465);
    *(_BYTE*)(a1 + 466) = *(_BYTE*)(a2 + 466);
    GameRoutine_7fc7e0(a1 + 512, a2 + 512);
    v41 = *(unsigned __int8*)(a1 + 498);
    if (v41 <= *(unsigned __int8*)(a2 + 498)) {
      LOBYTE(v41) = *(_BYTE*)(a2 + 498);
    }
    *(_BYTE*)(a1 + 498) = v41;
    v42 = *(_DWORD*)(a1 + 504);
    if (v42 <= *(_DWORD*)(a2 + 504)) {
      v42 = *(_DWORD*)(a2 + 504);
    }
    *(_DWORD*)(a1 + 504) = v42;
    GameRoutine_84cf20(a1 + 1360, a2 + 1360, 1);
    GameRoutine_84cf20(a1 + 1552, a2 + 1552, 1);
    if ((a3 & 1) != 0) {
      GameRoutine_6c8630(a1);
      GameRoutine_6cdd40(a1, 0);
      GameRoutine_6cdf80(a1, 0);
      GameRoutine_6d2e40(a1);
      GameRoutine_6ddb60(a1);
      GameRoutine_6ddce0(a1);
    }
    else {
      GameRoutine_6d2d30(a1);
      GameRoutine_6c4610(a1);
    }
    v47[0] = 0;
    v43 = GameRoutine_6dd190(a1, v47, 1);
    v48[0] = 0;
    v44 = GameRoutine_6dd190(a1, v48, 1);
    if (*(_WORD*)(a1 + 494) != 0 && v43 != *(__int16*)(a1 + 494)) {
      *(_WORD*)(a1 + 494) = 0;
    }
    if (v44 >= v43) {
      v45 = v43;
    }
    else {
      v45 = v44;
    }
    if (v43 < 0) {
      v45 = 0;
    }
    if (v45 != *(__int16*)(a1 + 492)) {
      *(_WORD*)(a1 + 492) = v45;
    }
  }
  return v6 & 1;
}

__int64 GameHr_6e49c0(int* a1, int* a2, int* a3, int* a4, _QWORD* a5)
{
  int v10;
  __int64 result;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  GameRoutine_6e4890(a1, a2, a3, a5);
  v10 = GameRoutine_842fa0(a4, *a5);
  result = GameRoutine_842fa0(a3, *a5);
  if (v10 > (int)result) {
    v12 = *a3;
    *a3 = *a4;
    *a4 = v12;
    v13 = GameRoutine_842fa0(a3, *a5);
    result = GameRoutine_842fa0(a2, *a5);
    if (v13 > (int)result) {
      v14 = *a2;
      *a2 = *a3;
      *a3 = v14;
      v15 = GameRoutine_842fa0(a2, *a5);
      result = GameRoutine_842fa0(a1, *a5);
      if (v15 > (int)result) {
        v16 = *a1;
        *a1 = *a2;
        *a2 = v16;
      }
    }
  }
  return result;
}

__int64 GameHr_6e4ab0(int* a1, int* a2, int* a3, int* a4, int* a5, _QWORD* a6)
{
  int v12;
  __int64 result;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;

  GameRoutine_6e49c0(a1, a2, a3, a4, a6);
  v12 = GameRoutine_842fa0(a5, *a6);
  result = GameRoutine_842fa0(a4, *a6);
  if (v12 > (int)result) {
    v14 = *a4;
    *a4 = *a5;
    *a5 = v14;
    v15 = GameRoutine_842fa0(a4, *a6);
    result = GameRoutine_842fa0(a3, *a6);
    if (v15 > (int)result) {
      v16 = *a3;
      *a3 = *a4;
      *a4 = v16;
      v17 = GameRoutine_842fa0(a3, *a6);
      result = GameRoutine_842fa0(a2, *a6);
      if (v17 > (int)result) {
        v18 = *a2;
        *a2 = *a3;
        *a3 = v18;
        v19 = GameRoutine_842fa0(a2, *a6);
        result = GameRoutine_842fa0(a1, *a6);
        if (v19 > (int)result) {
          v20 = *a1;
          *a1 = *a2;
          *a2 = v20;
        }
      }
    }
  }
  return result;
}

bool GameHr_6e4be0(int* a1, int* a2, _QWORD* a3)
{
  __int64 v6;
  int* v7;
  int v8;
  int v9;
  int* v10;
  int* v11;
  __int64 v12;
  int v13;
  int* v14;
  int v15;
  __int64 v16;
  int v17;
  int v18;
  int v20;

  v6 = a2 - a1;
  if (v6 <= 2) {
    if ((unsigned __int64)v6 >= 2) {
      if (v6 == 2) {
        v7 = a2 - 1;
        v8 = GameRoutine_842fa0(a2 - 1, *a3);
        if (v8 > (int)GameRoutine_842fa0(a1, *a3)) {
          v9 = *a1;
          *a1 = *v7;
          *v7 = v9;
        }
        return true;
      }
      goto LABEL_11;
    }
    return true;
  }
  switch (v6) {
  case 3LL:
    GameRoutine_6e4890(a1, a1 + 1, a2 - 1, a3);
    return true;
  case 4LL:
    GameRoutine_6e49c0(a1, a1 + 1, a1 + 2, a2 - 1, a3);
    return true;
  case 5LL:
    GameRoutine_6e4ab0(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1, a3);
    return true;
  default:
    break;
  }
LABEL_11:
  v10 = a1 + 2;
  GameRoutine_6e4890(a1, a1 + 1, a1 + 2, a3);
  v11 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v12 = 0;
  v13 = 0;
  while (1) {
    v15 = GameRoutine_842fa0(v11, *a3);
    if (v15 > (int)GameRoutine_842fa0(v10, *a3)) {
      v16 = v12;
      v20 = *v11;
      do {
        *(int*)((char*)a1 + v16 + 12) = *(int*)((char*)a1 + v16 + 8);
        if (v16 == -8) {
          v14 = a1;
          goto LABEL_14;
        }
        v17 = GameRoutine_842fa0(&v20, *a3);
        v18 = GameRoutine_842fa0((char*)a1 + v16 + 4, *a3);
        v16 -= 4;
      } while (v17 > v18);
      v14 = (int*)((char*)a1 + v16 + 12);
    LABEL_14:
      ++v13;
      *v14 = v20;
      if (v13 == 8) {
        return v11 + 1 == a2;
      }
    }
    v10 = v11++;
    v12 += 4;
    if (v11 == a2) {
      return true;
    }
  }
}

__int64 GameHr_70ccb0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5;
  _BYTE v7[4];

  v5 = *(_QWORD*)(a1 + 32);
  v7[0] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v7);
    v5 = *(_QWORD*)(a1 + 32);
    v7[0] = 1;
    if (v5 != 0) {
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v7);
      v5 = *(_QWORD*)(a1 + 32);
      v7[0] = 2;
      if (v5 != 0) {
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v7);
        v5 = *(_QWORD*)(a1 + 32);
        v7[0] = 3;
        if (v5 != 0) {
          (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v7);
          v5 = *(_QWORD*)(a1 + 32);
          v7[0] = 4;
          if (v5 != 0) {
            (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v7);
            v5 = *(_QWORD*)(a1 + 32);
            v7[0] = 5;
            if (v5 != 0) {
              (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v7);
              v5 = *(_QWORD*)(a1 + 32);
              v7[0] = 6;
              if (v5 != 0) {
                (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v7);
                v5 = *(_QWORD*)(a1 + 32);
                v7[0] = 7;
                if (v5 != 0) {
                  return (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v5 +
                                                           48LL))(v5, v7);
                }
              }
            }
          }
        }
      }
    }
  }
  GameRoutine_60a310(v5, a2, a3, a4);
}

__int64 GameHr_70cdd0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5;
  _BYTE v7[4];

  v5 = *(_QWORD*)(a1 + 32);
  v7[0] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v7);
    v5 = *(_QWORD*)(a1 + 32);
    v7[0] = 1;
    if (v5 != 0) {
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v7);
      v5 = *(_QWORD*)(a1 + 32);
      v7[0] = 2;
      if (v5 != 0) {
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v7);
        v5 = *(_QWORD*)(a1 + 32);
        v7[0] = 3;
        if (v5 != 0) {
          (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v7);
          v5 = *(_QWORD*)(a1 + 32);
          v7[0] = 4;
          if (v5 != 0) {
            (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v7);
            v5 = *(_QWORD*)(a1 + 32);
            v7[0] = 5;
            if (v5 != 0) {
              (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v7);
              v5 = *(_QWORD*)(a1 + 32);
              v7[0] = 6;
              if (v5 != 0) {
                (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v7);
                v5 = *(_QWORD*)(a1 + 32);
                v7[0] = 7;
                if (v5 != 0) {
                  (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v7);
                  v5 = *(_QWORD*)(a1 + 32);
                  v7[0] = 8;
                  if (v5 != 0) {
                    (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5,
                                                                         v7);
                    v5 = *(_QWORD*)(a1 + 32);
                    v7[0] = 9;
                    if (v5 != 0) {
                      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5,
                                                                           v7);
                      v5 = *(_QWORD*)(a1 + 32);
                      v7[0] = 10;
                      if (v5 != 0) {
                        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(
                            v5, v7);
                        v5 = *(_QWORD*)(a1 + 32);
                        v7[0] = 11;
                        if (v5 != 0) {
                          (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(
                              v5, v7);
                          v5 = *(_QWORD*)(a1 + 32);
                          v7[0] = 12;
                          if (v5 != 0) {
                            return (*(__int64 (**)(__int64, _BYTE*))(
                                *(_QWORD*)v5 + 48LL))(v5, v7);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  GameRoutine_60a310(v5, a2, a3, a4);
}

__int64 GameHr_70cf90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5;
  _BYTE v7[4];

  v5 = *(_QWORD*)(a1 + 32);
  v7[0] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v7);
    v5 = *(_QWORD*)(a1 + 32);
    v7[0] = 1;
    if (v5 != 0) {
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v7);
      v5 = *(_QWORD*)(a1 + 32);
      v7[0] = 2;
      if (v5 != 0) {
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v7);
        v5 = *(_QWORD*)(a1 + 32);
        v7[0] = 3;
        if (v5 != 0) {
          (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v7);
          v5 = *(_QWORD*)(a1 + 32);
          v7[0] = 4;
          if (v5 != 0) {
            (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v7);
            v5 = *(_QWORD*)(a1 + 32);
            v7[0] = 5;
            if (v5 != 0) {
              (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v7);
              v5 = *(_QWORD*)(a1 + 32);
              v7[0] = 6;
              if (v5 != 0) {
                (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v7);
                v5 = *(_QWORD*)(a1 + 32);
                v7[0] = 7;
                if (v5 != 0) {
                  (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v7);
                  v5 = *(_QWORD*)(a1 + 32);
                  v7[0] = 8;
                  if (v5 != 0) {
                    (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5,
                                                                         v7);
                    v5 = *(_QWORD*)(a1 + 32);
                    v7[0] = 9;
                    if (v5 != 0) {
                      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5,
                                                                           v7);
                      v5 = *(_QWORD*)(a1 + 32);
                      v7[0] = 10;
                      if (v5 != 0) {
                        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(
                            v5, v7);
                        v5 = *(_QWORD*)(a1 + 32);
                        v7[0] = 11;
                        if (v5 != 0) {
                          (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(
                              v5, v7);
                          v5 = *(_QWORD*)(a1 + 32);
                          v7[0] = 12;
                          if (v5 != 0) {
                            return (*(__int64 (**)(__int64, _BYTE*))(
                                *(_QWORD*)v5 + 48LL))(v5, v7);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  GameRoutine_60a310(v5, a2, a3, a4);
}

__int64 GameHr_716760(__int64 a1)
{
  __int64 ProgramTotalActiveTimeEv;
  int v3;
  int v4;
  int v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  bool v30;
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
  __int64 i;
  __int64 v47;
  _QWORD* v48;
  _QWORD* v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;

  *(_WORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_BYTE*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_DWORD*)(a1 + 12) = 196608;
  *(_QWORD*)(a1 + 60) = 0x100000001LL;
  *(_DWORD*)(a1 + 68) = 1;
  ProgramTotalActiveTimeEv = nn_oe_GetProgramTotalActiveTime();
  v3 = nn_os_ConvertToTick(ProgramTotalActiveTimeEv);
  *(_QWORD*)(a1 + 2704) = 0;
  *(_QWORD*)(a1 + 2712) = 0;
  v4 = game_g_start_tick;
  *(_WORD*)(a1 + 2720) = 0;
  v5 = v3 - v4;
  v6 = *(_QWORD*)(a1 + 48);
  *(_DWORD*)(a1 + 8) = v5;
  GameVariable_827c00(v6);
  *(_BYTE*)(*(_QWORD*)(a1 + 48) + 3932768LL) |= 1u;
  GameVariable_829dc0(a1 + 40);
  *(_BYTE*)(*(_QWORD*)(a1 + 48) + 3932768LL) &= ~1u;
  GameReliance_8e0880(*(_QWORD**)(a1 + 128));
  GameHr_90cd80(*(_QWORD*)(a1 + 160));
  game_90d5a0(*(_QWORD*)(a1 + 160));
  GameRoutine_8eab40_alt1(*(_QWORD**)(a1 + 176));
  v7 = *(__int64**)(a1 + 192);
  v8 = *v7;
  *((_DWORD*)v7 + 6) = 0;
  v7[10] = 0;
  v7[11] = 0;
  v7[1] = v8;
  v7[5] = v7[4];
  v9 = fw_memory_g_heap_manager_ptr;
  if (v7[15] != 0) {
    v10 = (_QWORD*)v7[14];
    if (v10 != nullptr) {
      do {
        v11 = (_QWORD*)*v10;
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v12, (__int64)v10);
        v10 = v11;
      } while (v11 != nullptr);
    }
    v13 = v7[13];
    v7[14] = 0;
    if (v13 != 0) {
      v14 = v13 & 7;
      if (v13 >= 8) {
        v16 = v13 & 0xFFFFFFFFFFFFFFF8LL;
        v15 = 0;
        do {
          *(_QWORD*)(v7[12] + 8 * v15) = 0;
          *(_QWORD*)(v7[12] + 8 * v15 + 8) = 0;
          *(_QWORD*)(v7[12] + 8 * v15 + 16) = 0;
          *(_QWORD*)(v7[12] + 8 * v15 + 24) = 0;
          *(_QWORD*)(v7[12] + 8 * v15 + 32) = 0;
          *(_QWORD*)(v7[12] + 8 * v15 + 40) = 0;
          *(_QWORD*)(v7[12] + 8 * v15 + 48) = 0;
          v17 = v7[12] + 8 * v15;
          v15 += 8;
          *(_QWORD*)(v17 + 56) = 0;
        } while (v16 != v15);
      }
      else {
        v15 = 0;
      }
      if (v14 != 0) {
        v18 = 8 * v15;
        do {
          --v14;
          *(_QWORD*)(v7[12] + v18) = 0;
          v18 += 8;
        } while (v14 != 0);
      }
    }
    v7[15] = 0;
  }
  GameRecord_99d540(a1 + 104);
  v20 = *(_QWORD*)(a1 + 216);
  v19 = *(_QWORD*)(a1 + 224);
  *(_BYTE*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  if (v20 != v19) {
    v21 = v19;
    do {
      v22 = *(_BYTE*)(v21 - 24);
      v21 -= 24;
      if ((v22 & 1) != 0) {
        v23 = *(_QWORD*)(v19 - 8);
        if (v23 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v24 = 128;
          }
          else {
            v24 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v24, v23);
        }
      }
      v19 = v21;
    } while (v21 != v20);
  }
  v25 = *(_BYTE*)(a1 + 240);
  *(_QWORD*)(a1 + 224) = v20;
  if ((v25 & 1) != 0) {
    **(_BYTE**)(a1 + 256) = 0;
    *(_QWORD*)(a1 + 248) = 0;
    v26 = *(_QWORD*)(a1 + 304);
    if (v26 == 0) {
      goto LABEL_40;
    }
  }
  else {
    *(_WORD*)(a1 + 240) = 0;
    v26 = *(_QWORD*)(a1 + 304);
    if (v26 == 0) {
      goto LABEL_40;
    }
  }
  v27 = *(_QWORD*)(a1 + 280);
  do {
    v28 = *(_QWORD*)(a1 + 272);
    v29 = v27 - v28;
    v30 = v27 == v28;
    v31 = v26 - 1;
    v32 = v26 + *(_QWORD*)(a1 + 296);
    *(_QWORD*)(a1 + 304) = v31;
    v33 = (v29 << 6) - 1;
    if (v30) {
      v33 = 0;
    }
    if ((unsigned __int64)(v33 - v32 + 1) >= 0x400) {
      v34 = *(_QWORD*)(v27 - 8);
      if (v34 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v35 = 128;
        }
        else {
          v35 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v35, v34);
        v27 = *(_QWORD*)(a1 + 280);
        v31 = *(_QWORD*)(a1 + 304);
      }
      v27 -= 8;
      *(_QWORD*)(a1 + 280) = v27;
    }
    v26 = v31;
  } while (v31 != 0);
LABEL_40:
  GameHr_82dfe0(a1 + 40, 0xFFFFFFFF);
  *(_BYTE*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 330) = 0;
  *(_QWORD*)(a1 + 338) = 0;
  *(_QWORD*)(a1 + 346) = 0;
  *(_QWORD*)(a1 + 354) = 0;
  *(_QWORD*)(a1 + 362) = 0;
  *(_QWORD*)(a1 + 370) = 0;
  *(_QWORD*)(a1 + 378) = 0;
  *(_QWORD*)(a1 + 386) = 0;
  *(_QWORD*)(a1 + 394) = 0;
  memset(a1 + 404, 0, 0x8C8u);
  v36 = *(_QWORD*)(a1 + 2696);
  if (v36 != 0) {
    v37 = *(_QWORD*)(a1 + 2672);
    do {
      v38 = *(_QWORD*)(a1 + 2664);
      v39 = v37 - v38;
      v30 = v37 == v38;
      v40 = v36 - 1;
      v41 = v36 + *(_QWORD*)(a1 + 2688);
      *(_QWORD*)(a1 + 2696) = v40;
      v42 = (v39 << 9) - 1;
      if (v30) {
        v42 = 0;
      }
      if ((unsigned __int64)(v42 - v41 + 1) >= 0x2000) {
        v43 = *(_QWORD*)(v37 - 8);
        if (v43 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v44 = 128;
          }
          else {
            v44 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v44, v43);
          v37 = *(_QWORD*)(a1 + 2672);
          v40 = *(_QWORD*)(a1 + 2696);
        }
        v37 -= 8;
        *(_QWORD*)(a1 + 2672) = v37;
      }
      v36 = v40;
    } while (v40 != 0);
  }
  GameRoutine_89b540_alt1(*(_QWORD*)(a1 + 2736));
  v45 = *(_QWORD*)(a1 + 2752);
  for (i = -2400; i != 0; i += 160) {
    *(_QWORD*)(*(_QWORD*)(v45 + 48) + i + 2400) = 0;
    *(_QWORD*)(*(_QWORD*)(v45 + 48) + i + 2408) = 0;
    *(_QWORD*)(*(_QWORD*)(v45 + 48) + i + 2416) = 0;
    *(_QWORD*)(*(_QWORD*)(v45 + 48) + i + 2424) = 0;
    *(_QWORD*)(*(_QWORD*)(v45 + 48) + i + 2432) = 0;
    *(_QWORD*)(*(_QWORD*)(v45 + 48) + i + 2440) = 0;
    *(_QWORD*)(*(_QWORD*)(v45 + 48) + i + 2448) = 0;
    *(_QWORD*)(*(_QWORD*)(v45 + 48) + i + 2456) = 0;
    *(_QWORD*)(*(_QWORD*)(v45 + 48) + i + 2464) = 0;
    *(_QWORD*)(*(_QWORD*)(v45 + 48) + i + 2472) = 0;
    *(_QWORD*)(*(_QWORD*)(v45 + 48) + i + 2480) = 0;
    *(_QWORD*)(*(_QWORD*)(v45 + 48) + i + 2488) = 0;
    *(_QWORD*)(*(_QWORD*)(v45 + 48) + i + 2496) = 0;
    *(_QWORD*)(*(_QWORD*)(v45 + 48) + i + 2504) = 0;
    *(_QWORD*)(*(_QWORD*)(v45 + 48) + i + 2512) = 0;
    *(_QWORD*)(*(_QWORD*)(v45 + 48) + i + 2520) = 0;
    *(_QWORD*)(*(_QWORD*)(v45 + 48) + i + 2528) = 0;
    *(_QWORD*)(*(_QWORD*)(v45 + 48) + i + 2536) = 0;
    *(_QWORD*)(*(_QWORD*)(v45 + 48) + i + 2544) = 0;
    v47 = *(_QWORD*)(v45 + 48) + i;
    *(_QWORD*)(v47 + 2552) = 0;
  }
  if (*(_QWORD*)(v45 + 32) != 0) {
    v48 = *(_QWORD**)(v45 + 24);
    if (v48 != nullptr) {
      do {
        v49 = (_QWORD*)*v48;
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v50 = 128;
        }
        else {
          v50 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v50, (__int64)v48);
        v48 = v49;
      } while (v49 != nullptr);
    }
    v51 = *(_QWORD*)(v45 + 16);
    *(_QWORD*)(v45 + 24) = 0;
    if (v51 != 0) {
      v52 = v51 & 7;
      if (v51 >= 8) {
        v54 = v51 & 0xFFFFFFFFFFFFFFF8LL;
        v53 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v45 + 8) + 8 * v53) = 0;
          *(_QWORD*)(*(_QWORD*)(v45 + 8) + 8 * v53 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v45 + 8) + 8 * v53 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v45 + 8) + 8 * v53 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v45 + 8) + 8 * v53 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v45 + 8) + 8 * v53 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v45 + 8) + 8 * v53 + 48) = 0;
          v55 = *(_QWORD*)(v45 + 8) + 8 * v53;
          v53 += 8;
          *(_QWORD*)(v55 + 56) = 0;
        } while (v54 != v53);
      }
      else {
        v53 = 0;
      }
      if (v52 != 0) {
        v56 = 8 * v53;
        do {
          --v52;
          *(_QWORD*)(*(_QWORD*)(v45 + 8) + v56) = 0;
          v56 += 8;
        } while (v52 != 0);
      }
    }
    *(_QWORD*)(v45 + 32) = 0;
  }
  *(_DWORD*)(v45 + 72) = 0;
  RidePool_93bb80(*(_QWORD*)(a1 + 2768));
  *(_DWORD*)(a1 + 2832) = 0;
  *(_QWORD*)(a1 + 2824) = 0;
  return game_821840();
}

__int64 GameHr_717fc0(unsigned __int64* a1, int a2)
{
  int v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  if (game_GameModeData_instance_ == 0 ||
      (GameVariable_827b00(game_GameModeData_instance_ + 40, a1) & 1) == 0) {
    return 0;
  }
  v4 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), a1);
    if (v5 == 0) {
      if (a2 == 0) {
        return 0;
      }
      goto LABEL_10;
    }
    v4 = *(_DWORD*)(v5 + 32);
  }
  if (v4 == a2) {
    return 0;
  }
LABEL_10:
  if (game_GameModeData_instance_ == 0) {
    return 1;
  }
  v7 = *(_QWORD*)(game_GameModeData_instance_ + 48);
  v8 = game_GameVariableTable_Find((_QWORD*)v7, a1);
  if (v8 == 0) {
    return 1;
  }
  v9 = v8;
  if (*(_DWORD*)(v8 + 32) == a2) {
    return 1;
  }
  *(_DWORD*)(v8 + 32) = a2;
  if ((*(_BYTE*)(v7 + 3932768) & 0xAE) == 0 && GameData_22400f8 != 0) {
    GameRoutine_12274e0_alt1(GameData_22400f8, (unsigned __int64*)v8);
  }
  v11 = *(_QWORD*)(v9 + 88);
  v10 = *(_QWORD*)(v9 + 96);
  if (v10 == v11) {
    return 1;
  }
  do {
    v13 = v9;
    v12 = *(_QWORD*)(v11 + 32);
    if (v12 == 0) {
      GameRoutine_60a310_alt1();
    }
    (*(void (**)(__int64, __int64*))(*(_QWORD*)v12 + 48LL))(v12, &v13);
    v11 += 48;
    result = 1;
  } while (v11 != v10);
  return result;
}

__int64 GameHr_71e760(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  __int64 v10;
  __int64 v11;
  int v14;
  __int64* v15;
  __int64* v16;
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;
  __int64 v20;

  GameVariable_8288e0(a1 + 40, 3u);
  v2 = *(_QWORD*)(a1 + 24);
  if (v2 != 0) {
    v3 = *(unsigned __int16*)(v2 + 72);
    if (*(_WORD*)(v2 + 72) != 0) {
      v4 = 0;
      do {
        v18_.v19 = *(_QWORD*)(*(_QWORD*)(v2 + 80) + 8 * v4);
        v5 = game_HashString(v18_.v19);
        v6 = *(_QWORD*)(a1 + 48);
        v18_.v18 = v5;
        v7 = game_GameVariableTable_Find((_QWORD*)v6,
                                         (unsigned __int64*)&v18_.v18);
        if (v7 != 0) {
          v8 = v7;
          if (*(_DWORD*)(v7 + 32) != 1) {
            *(_DWORD*)(v7 + 32) = 1;
            if ((*(_BYTE*)(v6 + 3932768) & 0xAE) == 0 &&
                GameData_22400f8 != 0) {
              GameRoutine_12274e0_alt1(GameData_22400f8, (unsigned __int64*)v7);
            }
            v10 = *(_QWORD*)(v8 + 88);
            for (i = *(_QWORD*)(v8 + 96); v10 != i; v10 += 48) {
              v20 = v8;
              v11 = *(_QWORD*)(v10 + 32);
              if (v11 == 0) {
                GameRoutine_60a310_alt1();
              }
              (*(void (**)(__int64, __int64*))(*(_QWORD*)v11 + 48LL))(v11,
                                                                      &v20);
            }
          }
        }
        ++v4;
      } while (v4 != v3);
    }
  }
  v14 = game_gmap_GmapClock_instance_ != 0 &&
        *(_WORD*)(game_gmap_GmapClock_instance_ + 22) != 0 &&
        *(_WORD*)(game_gmap_GmapClock_instance_ + 20) != 0 &&
        *(_WORD*)(game_gmap_GmapClock_instance_ + 24) != 0;
  v15 = game_9a28e0(15);
  game_VariableManager_SetFlag((__int64)v15, v14);
  v16 = game_9a28e0(16);
  return game_VariableManager_SetFlag((__int64)v16, v14 ^ 1u);
}

__int64 GameHr_72dc70(__int64 a1)
{
  __int64 result;

  *(_BYTE*)(*(_QWORD*)(a1 + 48) + 136LL) = 0;
  result = *(_QWORD*)(a1 + 40);
  if (result != 0) {
    return GameRoutine_1a09c50(result);
  }
  return result;
}

_DWORD* GameHr_72dcc0(_DWORD* result, _DWORD* a2)
{
  int v2;
  int v3;
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

  v2 = result[1];
  *result |= *a2;
  result[1] = v2 | a2[1];
  v3 = result[3];
  result[2] |= a2[2];
  result[3] = v3 | a2[3];
  v4 = result[5];
  result[4] |= a2[4];
  result[5] = v4 | a2[5];
  v5 = result[7];
  result[6] |= a2[6];
  result[7] = v5 | a2[7];
  v6 = result[9];
  result[8] |= a2[8];
  result[9] = v6 | a2[9];
  v7 = result[11];
  result[10] |= a2[10];
  result[11] = v7 | a2[11];
  v8 = result[13];
  result[12] |= a2[12];
  result[13] = v8 | a2[13];
  v9 = result[15];
  result[14] |= a2[14];
  result[15] = v9 | a2[15];
  v10 = result[17];
  result[16] |= a2[16];
  result[17] = v10 | a2[17];
  v11 = result[19];
  result[18] |= a2[18];
  result[19] = v11 | a2[19];
  v12 = result[21];
  result[20] |= a2[20];
  result[21] = v12 | a2[21];
  v13 = result[23];
  result[22] |= a2[22];
  result[23] = v13 | a2[23];
  v14 = result[25];
  result[24] |= a2[24];
  result[25] = v14 | a2[25];
  v15 = result[27];
  result[26] |= a2[26];
  result[27] = v15 | a2[27];
  v16 = result[29];
  result[28] |= a2[28];
  result[29] = v16 | a2[29];
  v17 = result[31];
  result[30] |= a2[30];
  result[31] = v17 | a2[31];
  return result;
}

float GameHr_734f90(__int64 a1)
{
  float v1;
  float v2;

  v2 = *(float*)(a1 + 8);
  v1 = *(float*)(a1 + 12);
  if (v1 >= v2) {
    return *(float*)(a1 + 32);
  }
  else {
    return GameRoutine_734120(*(_DWORD*)(a1 + 16), *(_DWORD*)(a1 + 20),
                              *(float*)(a1 + 28), *(float*)(a1 + 32), v1, v2);
  }
}

__int64 GameHr_7368a0()
{
  __int64 result;

  result = GameData_21cd128;
  if (GameData_21cd128 != 0) {
    return GameRoutine_825040(GameData_21cd128, 3);
  }
  return result;
}

__int64 GameHr_7368c0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;

  GameRoutine_743a00(GameData_21cd108);
  GameRoutine_777be0(GameData_21cd0e8 + 8);
  v0 = *(_QWORD*)(*GameData_212ce88[0] + 8);
  *(_QWORD*)(v0 + 8) = 0x100000000LL;
  v1 = *(_QWORD*)(v0 + 24);
  *(_DWORD*)v0 = 0;
  *(_WORD*)(v0 + 4) = 9;
  *(_DWORD*)(v0 + 16) = 0;
  *(_DWORD*)(v0 + 48) = 0;
  *(_QWORD*)(v0 + 32) = v1;
  GameRoutine_1a0ba50(v0 + 64, 255, 1024, v2, v3, v4);
  result = GameRoutine_1a0ba50(v0 + 1096, 0, 1536, v5, v6, v7);
  v9 = *(_QWORD*)(v0 + 2640);
  *(_DWORD*)(v0 + 2632) = 0;
  *(_QWORD*)(v0 + 2664) = 0;
  *(_QWORD*)(v0 + 2672) = 0;
  *(_QWORD*)(v0 + 2648) = v9;
  v10 = GameData_21cd0e0;
  *(_DWORD*)(GameData_21cd0e0 + 196) = 0;
  *(_DWORD*)(v10 + 168) = 1;
  *(_BYTE*)(v10 + 200) = 0;
  *(_BYTE*)(v10 + 164) = 9;
  *(_DWORD*)(v10 + 160) = 0;
  *(_QWORD*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 184LL) = 0x100000001LL;
  return result;
}

__int64 GameHr_7369b0()
{
  __int64 v0;
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 result;
  int v5;
  __int64 v6;

  v0 = GameData_21ca300;
  v1 = *(_QWORD**)(GameData_21ca300 + 96);
  Image_72b4a0((__int64)v1);
  Image_72b6c0(v1);
  Image_72a260(*(_QWORD*)(v0 + 152));
  v2 = *GameData_212cfc0[0];
  v3 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
  *(_BYTE*)(v2 + 24) = 1;
  *(_BYTE*)(v3 + 240) = 1;
  *(_QWORD*)(*(_QWORD*)(v2 + 48) + 184LL) = 0x100000001LL;
  game_map_g_unit_menu_index = -1;
  GameData_22736e0 = 0;
  GameRoutine_739d40_alt1();
  result = GameData_21cf840;
  if (GameData_21cf840 != 0) {
    v5 = *(_DWORD*)(GameData_21cf840 + 16);
    *(_BYTE*)(GameData_21cf840 + 363) = 0;
    if (v5 <= 0) {
      v6 = *(_QWORD*)(result + 160);
      *(_BYTE*)(result + 360) = 1;
      return MapUnitInfo_1828ef0(result, v6);
    }
  }
  return result;
}

void GameHr_736a70()
{
  *(_BYTE*)(*GameData_212cfc0[0] + 24) = 1;
  *(_BYTE*)(GameData_21ca2f0 + 12888) = 1;
  *(_BYTE*)(GameData_21cd0e0 + 16) = 1;
}

__int64 GameHr_737c80()
{
  __int64 result;

  if (GameData_2258a58 != 0) {
    GameRoutine_1566d90(GameData_2258a58, 0);
  }
  result = GameData_2258ba8;
  if (GameData_2258ba8 != 0) {
    return GameRoutine_1567000(GameData_2258ba8, 0);
  }
  return result;
}

__int64 GameHr_737e40()
{
  __int64* v0;
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  int v6;
  int v7;
  char* v8;
  char* v9;
  _QWORD* v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  char v18;
  int v19;
  __int64* v20;
  __int64 v21;
  int v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  __int64 v26;
  int v27;
  int v28;
  __int64 v29;
  __int64 result;
  int v31;
  __int64 v32;
  struct {
    _QWORD v33[4];
    _QWORD* v34;
  } v33_;
  int v35;
  int v36;

  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v0 = GameData_212cfd0[0];
  if (*(_BYTE*)(*GameData_212cfd0[0] + 8) != 0) {
    v1 = game_UnitPool_Get((_BYTE*)(*GameData_212cfd0[0] + 8)),
    v2 = COERCE_AS(__typeof__(v2),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v3 = COERCE_AS(__typeof__(v3),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v1 != nullptr) {
      v4 = (__int64)v1;
      v5 = GameData_212ce98[0];
      v6 = *((char*)v1 + 584);
      v7 = *((char*)v1 + 585);
      v8 = (char*)v1[75];
      v9 = (char*)v1[76];
      v10 = v33_.v33;
      v33_.v33[2] = v4;
      v33_.v34 = v33_.v33;
      v11 = *(_QWORD*)(*GameData_212ce98[0] + 96);
      v33_.v33[0] = GameData_1f94290;
      v33_.v33[1] = v11;
      if (v8 == v9) {
        goto LABEL_9;
      }
      do {
        v12 = *v8 + v6;
        v35 = v8[1] + v7;
        v36 = v12;
        if (v33_.v34 == nullptr) {
          GameRoutine_60a310_alt1(),
              v2 = COERCE_AS(__typeof__(v2),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v3 = COERCE_AS(__typeof__(v3),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        }
        (*(void (**)(_QWORD*, int*, int*))(*v33_.v34 + 48LL))(v33_.v34, &v36,
                                                              &v35),
            v2 = COERCE_AS(__typeof__(v2),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v8 += 4;
      } while (v8 != v9);
      v10 = v33_.v34;
      if (v33_.v34 == v33_.v33) {
      LABEL_9:
        v13 = 32;
      }
      else {
        if (v33_.v34 == nullptr) {
        LABEL_11:
          Image_72a260(*(_QWORD*)(*v5 + 152)),
              v2 = COERCE_AS(__typeof__(v2),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v3 = COERCE_AS(__typeof__(v3),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          v14 = *(char*)(v4 + 584);
          v15 = *(char*)(v4 + 585);
          v16 = *(_QWORD*)(v4 + 440);
          v17 = *GameData_212cfd8[0];
          if (v16 != 0) {
            v18 = *(_BYTE*)(v16 + 16);
          }
          else {
            v18 = 9;
          }
          v19 = *(_DWORD*)(v4 + 592);
          *(_BYTE*)(v17 + 200) = 0;
          *(_DWORD*)(v17 + 192) = v15;
          *(_DWORD*)(v17 + 196) = 0;
          *(_DWORD*)(v17 + 184) = v15;
          *(_DWORD*)(v17 + 188) = v14;
          *(_DWORD*)(v17 + 176) = v15;
          *(_DWORD*)(v17 + 180) = v14;
          *(_BYTE*)(v17 + 164) = v18;
          *(_DWORD*)(v17 + 160) = 0;
          *(_DWORD*)(v17 + 168) = v19;
          *(_DWORD*)(v17 + 172) = v14;
          v20 = GameData_212cfc0[0];
          Cursor_730e40(*(_QWORD*)(*GameData_212cfc0[0] + 48), v4),
              v2 = COERCE_AS(__typeof__(v2),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v3 = COERCE_AS(__typeof__(v3),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          v21 = *v20;
          v22 = *(_DWORD*)(v4 + 592);
          v23 = *(_QWORD*)(*v20 + 48);
          *(_DWORD*)(v23 + 184) = v22;
          *(_DWORD*)(v23 + 188) = v22;
          *(_BYTE*)(v21 + 24) = 1;
          v24 = *(char*)(v4 + 584);
          v25 = *(char*)(v4 + 585);
          v26 = *GameData_212ce88[0];
          v27 = *(_DWORD*)(*v0 + 52);
          LODWORD(v33_.v33[0]) = 3215362;
          IDeploy_748f80(v26, v4, v24, v25, v27, (unsigned int*)v33_.v33),
              v2 = COERCE_AS(__typeof__(v2),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v3 = COERCE_AS(__typeof__(v3),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          v28 = *(_DWORD*)(v4 + 592);
          v29 = *(_QWORD*)(*v20 + 48);
          *(_DWORD*)(v29 + 184) = v28;
          *(_DWORD*)(v29 + 188) = v28;
          goto LABEL_15;
        }
        v13 = 40;
      }
      (*(void (**)(_QWORD*, __int64, __int64))(*v10 + v13))(v10, v2, v3),
          v2 = COERCE_AS(__typeof__(v2),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      goto LABEL_11;
    }
  }
LABEL_15:
  game_map_g_unit_menu_index = -1;
  GameData_22736e0 = 0;
  GameRoutine_739d40_alt1(),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  result = *(_QWORD*)GameData_212d0d0[0];
  if (*(_QWORD*)GameData_212d0d0[0] != 0) {
    v31 = *(_DWORD*)(result + 16);
    *(_BYTE*)(result + 363) = 1;
    if (v31 <= 0) {
      v32 = *(_QWORD*)(result + 160);
      *(_BYTE*)(result + 360) = 1;
      return MapUnitInfo_1828ef0(result, v32);
    }
  }
  return result;
}

__int64 GameHr_738080(__int64 a1)
{
  __int64 result;

  result = *GameData_212cfd0[0] + 8;
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_6ea8c0(result);
    if (result != 0 && *GameData_212d000[0] != 0) {
      return GameRoutine_c8b5a0(
          a1, 28, result, *(unsigned __int16*)(*(_QWORD*)(result + 392) + 16LL),
          0, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    }
  }
  return result;
}

__int64 GameHr_738100(__int64 a1)
{
  __int64 result;

  result = *GameData_212cfd0[0] + 8;
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_6ea8c0(result);
    if (result != 0 && *GameData_212d000[0] != 0) {
      return GameRoutine_c8b5a0(
          a1, 27, result, *(unsigned __int16*)(*(_QWORD*)(result + 392) + 16LL),
          0, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    }
  }
  return result;
}

__int64 GameHr_7381a0()
{
  __int64 result;
  __int64 v1;
  int v2;
  unsigned int v3;

  result = GameData_21cd108;
  if (*(_BYTE*)(GameData_21cd108 + 8) != 0) {
    v1 = GameRoutine_6ea8c0(GameData_21cd108 + 8);
    result = GameData_21cd108;
  }
  else {
    v1 = 0;
  }
  if ((*(_BYTE*)(result + 12672) & 1) != 0) {
    v3 = *(_DWORD*)(v1 + 416) & 0xFFFEFFFF;
  }
  else {
    result = GameRoutine_746f00();
    if ((result & 1) != 0) {
      v2 = 0x10000;
    }
    else {
      v2 = 0;
    }
    v3 = *(_DWORD*)(v1 + 416) & 0xFFFEFFFF | v2;
  }
  *(_DWORD*)(v1 + 416) = v3;
  return result;
}

__int64 GameHr_738c80()
{
  __int64 result;

  result = GameRoutine_6ea8c0(GameData_21cd108 + 8);
  *(_DWORD*)(result + 416) &= ~0x10000u;
  return result;
}

long double GameHr_739190()
{
  __int64* v0;
  unsigned int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  long double result;
  __int64 v7;
  __int64 v8;
  __int128 v9;
  long double v10;

  v0 = GameData_212cfc0[0];
  v1 = *(_DWORD*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 8LL) +
       32 * *(_DWORD*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 12LL);
  if (v1 >= 0x400) {
    v1 = 0;
  }
  v2 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
  v3 = *(__int16*)(v2 + 2LL * v1 + 10344);
  if ((v3 & 0x8000000000000000LL) == 0) {
    v4 = *(_QWORD*)(v2 + 8);
    if (v4 != 0) {
      v5 = v4 + 144LL * (int)v3;
      if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v5 + 40LL))(v5) == 13 &&
          ((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 776LL))(v5) & 1) != 0) {
        v7 = *v0;
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
            *(_QWORD*)v5 + 768LL))((void*)&v10, v5);
        result = v10;
        v8 = *(_QWORD*)(v7 + 48);
        *(_QWORD*)(v8 + 144) = *(_QWORD*)&v10;
        v9 = *(_OWORD*)(v8 + 144);
        *((_QWORD*)&v9 + 1) = DWORD2(result);
        *(_OWORD*)(v8 + 144) = v9;
      }
    }
  }
  return result;
}

__int64 GameHr_739270(__int64 result)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;

  if ((*(_BYTE*)(GameData_2265ed8 + 952) & 2) != 0) {
    v1 = *(unsigned __int8**)(result + 16);
    if (v1 != nullptr) {
      v2 = *v1;
      v3 = v2 > 0x10;
      v4 = (1 << v2) & 0x1CE00;
      if (!v3 && v4 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
  }
  return result;
}

void GameHr_739330()
{
  *(_BYTE*)(*GameData_212cfc0[0] + 24) = 0;
  *(_BYTE*)(GameData_21ca2f0 + 12888) = 0;
  *(_BYTE*)(GameData_21cd0e0 + 16) = 0;
}

__int64 GameHr_739370(__int64 a1)
{
  __int64 v2;
  _QWORD v4[6];
  char v5;

  *(_BYTE*)(*GameData_212d560[0] + 224) = 1;
  if (GameData_21cf840 != 0 && *(int*)(GameData_21cf840 + 16) <= 0) {
    *(_BYTE*)(GameData_21cf840 + 360) = 1;
    GameRoutine_1828ef0();
  }
  if (*(_BYTE*)(GameData_21cd108 + 8) != 0) {
    v2 = GameRoutine_6ea8c0(GameData_21cd108 + 8);
  }
  else {
    v2 = 0;
  }
  v5 = 1;
  v4[4] = 0;
  return GameRoutine_768a20(a1, v2, *GameData_212cfd8[0] + 24, &v5, 0, 0, v4);
}

__int64 GameHr_739430(__int64 result)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;

  if (*(int*)(GameData_21cd100 + 16) <= 0) {
    v1 = *(unsigned __int8**)(result + 16);
    if (v1 != nullptr) {
      v2 = *v1;
      v3 = v2 > 0x10;
      v4 = (1 << v2) & 0x1CE00;
      if (!v3 && v4 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    *(_WORD*)(result + 136) |= 8u;
  }
  return result;
}

__int64 GameHr_739670()
{
  __int64 result;

  result = GameData_21cd128;
  if (GameData_21cd128 != 0) {
    return GameRoutine_825040(GameData_21cd128, 15);
  }
  return result;
}

__int64 GameHr_739700()
{
  __int64 result;

  result = GameData_21cd128;
  if (GameData_21cd128 != 0) {
    return GameRoutine_825040(GameData_21cd128, 12);
  }
  return result;
}

__int64 GameHr_739720(__int64 a1)
{
  __int64 result;

  result = *GameData_212cfd0[0] + 8;
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_6ea8c0(result);
    if (result != 0 && *GameData_212d000[0] != 0) {
      return GameRoutine_c8b5a0(
          a1, 29, result, *(unsigned __int16*)(*(_QWORD*)(result + 392) + 16LL),
          0xFFFFFFFFLL, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    }
  }
  return result;
}

__int64 GameHr_739b20(__int64 a1)
{
  __int64 result;
  bool v3;
  __int64 v4;
  __int64 v5;

  result = *GameData_212cfd0[0] + 8;
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_6ea8c0(result);
    v3 = result == 0 || *GameData_212d000[0] == 0;
    if (!v3 && (*(_BYTE*)(result + 416) & 1) != 0) {
      v4 = *(_QWORD*)(result + 440);
      if (v4 != 0) {
        v5 = *(unsigned __int8*)(v4 + 16);
      }
      else {
        v5 = 9;
      }
      return GameRoutine_c8b5a0(
          a1, 31, result, *(unsigned __int16*)(*(_QWORD*)(result + 392) + 16LL),
          v5, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    }
  }
  return result;
}

__int64 GameHr_739cc0()
{
  __int64 result;

  result = GameData_21cd128;
  if (GameData_21cd128 != 0) {
    return GameRoutine_825040(GameData_21cd128, 13);
  }
  return result;
}

__int64 GameHr_739ce0()
{
  __int64 result;

  result = GameData_21cd128;
  if (GameData_21cd128 != 0) {
    return GameRoutine_825040(GameData_21cd128, 14);
  }
  return result;
}

__int64 GameHr_739d10(__int64 result)
{
  if (*(_BYTE*)(GameData_21cd138 + 20) == 1) {
    return GameRoutine_7c6120(result);
  }
  return result;
}

__int64 GameHr_739d40()
{
  __int64* v0;
  unsigned __int64 v1;
  int v2;
  __int64 result;
  __int64 v4;
  unsigned __int64 v5;
  unsigned int v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned int v11;
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;

  v0 = GameData_212ce90[0];
  v1 = *(unsigned __int8*)(*GameData_212ce90[0] + 24);
  if (v1 > 3) {
    v2 = 0;
  }
  else {
    v2 = GameData_1a82ec0[v1];
  }
  v16 = v2;
  result = GameRoutine_6ea9d0(&v16);
  v4 = result;
  v5 = *(unsigned __int8*)(*v0 + 24);
  if (v5 <= 3) {
    v6 = GameData_1a82ec0[v5];
    if (result == 0) {
      return result;
    }
  LABEL_8:
    v7 = *(_QWORD*)(result + 432);
    if (v7 == 0) {
      v7 = *(_QWORD*)(result + 440);
      if (v7 != 0) {
        v8 = *(unsigned __int8*)(v7 + 16);
        if (v8 < 9) {
          do {
            v15 = v8 + 1;
            if (((v6 >> v8) & 2) != 0) {
              v7 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                              24LL * (unsigned __int8)(v8 + 1) + 556000);
              if (v7 != 0) {
                goto LABEL_14;
              }
            }
            v8 = v15;
          } while (v15 != 9);
        }
        v7 = 0;
        goto LABEL_14;
      }
    }
    while (1) {
    LABEL_14:
      v9 = v4;
      v4 = v7;
      result = GameRoutine_6e0810(v9);
      v10 = *(unsigned __int8*)(*v0 + 24);
      if (v10 > 3) {
        v11 = 0;
        if (v4 == 0) {
          return result;
        }
      }
      else {
        v11 = GameData_1a82ec0[v10];
        if (v4 == 0) {
          return result;
        }
      }
      v7 = *(_QWORD*)(v4 + 432);
      if (v7 == 0) {
        v12 = *(_QWORD*)(v4 + 440);
        if (v12 != 0) {
          v13 = *(unsigned __int8*)(v12 + 16);
          v7 = 0;
          if (v13 <= 8) {
            while (1) {
              v14 = v13 + 1;
              if (((v11 >> v13) & 2) != 0) {
                v7 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                24LL * (unsigned __int8)(v13 + 1) + 556000);
                if (v7 != 0) {
                  break;
                }
              }
              ++v13;
              if (v14 == 9) {
                v7 = 0;
                goto LABEL_14;
              }
            }
          }
        }
      }
    }
  }
  v6 = 0;
  if (result != 0) {
    goto LABEL_8;
  }
  return result;
}

__int64 GameHr_73a560(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;

  v1 = *a1;
  v2 = a1[1];
  if (v2 != 0) {
    if (v1 == 0) {
      goto LABEL_31;
    }
  }
  else {
    if (v1 == 0) {
      return 0;
    }
    v2 = *(_QWORD*)(v1 + 40);
  }
  v3 = *(unsigned __int8*)(v1 + 58);
  if (v3 == 1) {
    v12 = a1;
    v4 = (_QWORD*)GameRoutine_73a7a0(*a1);
    a1 = v12;
    if (v4 != nullptr) {
      return GameRoutine_6c8530(v4);
    }
  LABEL_30:
    if (v2 != 0) {
      goto LABEL_31;
    }
    return 0;
  }
  if (v3 != 2) {
    goto LABEL_30;
  }
  if (v2 == 0) {
    return 0;
  }
  v4 = *(_QWORD**)(GameData_21ca310 + 56);
  if (v4 != nullptr) {
    v5 = 250;
    while (1) {
      v6 = v4[55];
      if (v6 != 0 && *(_BYTE*)(v6 + 16) != 9 && v4[49] == v2) {
        return GameRoutine_6c8530(v4);
      }
      v7 = v4[333];
      if (v7 != 0 && *(_BYTE*)(v7 + 16) != 9 && v4[327] == v2) {
        return GameRoutine_6c8530(v4 + 278);
      }
      v8 = v4[611];
      if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 && v4[605] == v2) {
        break;
      }
      v9 = v4[889];
      if (v9 != 0 && *(_BYTE*)(v9 + 16) != 9 && v4[883] == v2) {
        v11 = 834;
        return GameRoutine_6c8530(&v4[v11]);
      }
      v10 = v4[1167];
      if (v10 != 0 && *(_BYTE*)(v10 + 16) != 9 && v4[1161] == v2) {
        v11 = 1112;
        return GameRoutine_6c8530(&v4[v11]);
      }
      v4 += 1390;
      v5 -= 5;
      if (v5 == 0) {
        goto LABEL_30;
      }
    }
    v11 = 556;
    return GameRoutine_6c8530(&v4[v11]);
  }
LABEL_31:
  v14 = *((unsigned int*)a1 + 4);
  if ((int)v14 <= 0) {
    v15 = *a1;
    if (*a1 != 0) {
      v14 = *(unsigned __int8*)(v15 + 59);
      if (*(_BYTE*)(v15 + 59) != 0) {
        goto LABEL_32;
      }
      v16 = a1[1];
      if (v16 == 0) {
        v16 = *(_QWORD*)(v15 + 40);
        if (v16 == 0) {
        LABEL_43:
          v14 = 1;
          goto LABEL_32;
        }
      }
    }
    else {
      v16 = a1[1];
      if (v16 == 0) {
        goto LABEL_43;
      }
    }
    if (GameData_21caab0 != 0) {
      v17 = *(_DWORD*)(GameData_21caab0 + 68);
      v18 = *(_QWORD*)(GameData_21caab0 + 16);
      if (v18 != 0) {
        v17 += *(char*)(v18 + 128);
      }
    }
    else {
      v17 = 0;
    }
    v14 = *(unsigned __int8*)(v16 + 442);
    if (*(_BYTE*)(v16 + 442) == 0) {
      v19 = *(char*)(v16 + 443);
      v20 = v17 + v19;
      if ((int)(v17 + v19) <= 1) {
        v20 = 1;
      }
      if (v20 >= 99) {
        v20 = 99;
      }
      if (v19 != 0) {
        v14 = (unsigned int)v20;
      }
      else {
        v14 = v17;
      }
    }
  }
LABEL_32:
  if (*(_QWORD*)(v2 + 304) == 0 ||
      (v21 = *(_QWORD*)(v2 + 304),
       (result = GameRoutine_127be60(&v21, v14, 6)) == 0)) {
    if (*(_QWORD*)(v2 + 64) != 0) {
      return *(_QWORD*)(v2 + 64);
    }
    else {
      return GameData_21c9988;
    }
  }
  return result;
}

__int64 GameHr_73a7a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  char* v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  int v12;
  signed __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  signed __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  bool v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  if (result != 0) {
    v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
    if (v1 == 0) {
      return 0;
    }
    v2 = result;
    v3 = 0;
    v4 = nullptr;
    v5 = nullptr;
    do {
      v6 = v1;
      v1 = *(_QWORD*)(v1 + 432);
      v7 = GameData_21ca240;
      if (GameData_21ca240 == GameData_21ca248) {
      LABEL_12:
        if ((*(_BYTE*)(v2 + 58) & 0xFE) == 2) {
          goto LABEL_24;
        }
        v8 = *(_DWORD*)(v6 + 592);
        result = GameRoutine_6c8830(v6);
        if ((result & 1) != 0) {
          v9 = *(_QWORD*)(v6 + 400);
          v10 = *(_QWORD*)(v9 + 88);
          if ((*(_BYTE*)(v6 + 418) & 4) == 0) {
            v9 = *(_QWORD*)(v9 + 88);
          }
          if (v10 != 0 && v9 != 0) {
            v12 = *(unsigned __int8*)(v9 + 417);
            if (v8 <= v12) {
              v8 = v12;
            }
          }
        }
        if (*(_BYTE*)(v2 + 58) != 0 && v8 <= *(unsigned __int8*)(v2 + 56)) {
        LABEL_24:
          if ((unsigned __int64)v4 < v3) {
            *(_QWORD*)v4 = v6;
            v4 += 8;
          }
          else {
            v13 = v4 - v5;
            v14 = (v4 - v5) >> 3;
            v15 = v14 + 1;
            if ((unsigned __int64)(v14 + 1) >> 61 != 0) {
              GameRoutine_6c1f60();
            }
            if ((__int64)(v3 - (_QWORD)v5) >> 2 > v15) {
              v15 = (__int64)(v3 - (_QWORD)v5) >> 2;
            }
            if (v3 - (unsigned __int64)v5 >= 0x7FFFFFFFFFFFFFF8LL) {
              v16 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v16 = v15;
            }
            if (v16 != 0) {
              if (v16 >> 61 != 0) {
                GameRoutine_60a210(result);
              }
              v17 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v16, 16,
                                       0);
            }
            else {
              v17 = 0;
            }
            v3 = v17 + 8 * v16;
            v18 = v4 - v5;
            v19 = v17 + v13 - 8 * v14;
            *(_QWORD*)(v17 + v13) = v6;
            v4 = (char*)(v17 + v13 + 8);
            result = GameRoutine_1a0b950(v19, v5, v18);
            if (v5 != nullptr) {
              v20 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v20 = 56;
              }
              result =
                  GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v20, v5);
            }
            v5 = (char*)v19;
          }
        }
      }
      else {
        while (*(_BYTE*)(*(_QWORD*)v7 + 58LL) != 2 ||
               *(_QWORD*)(*(_QWORD*)v7 + 40LL) != *(_QWORD*)(v6 + 392)) {
          v7 += 8;
          if (v7 == GameData_21ca248) {
            goto LABEL_12;
          }
        }
      }
    } while (v1 != 0);
    v21 = v4 - v5;
    if (v4 == v5) {
      v28 = 0;
      result = 0;
      if (v5 == nullptr) {
        return result;
      }
    }
    else {
      if (*(unsigned __int8*)(v2 + 56) >= 2u) {
        v22 = v21 >> 3;
        if (v21 >> 3 < 129) {
          v26 = 0;
        LABEL_51:
          GameRoutine_73d420(v5, v4, v22, 0, v26);
        }
        else {
          v23 = v21 >> 3;
          v24 = GameData_212c060;
          while (1) {
            v25 = GameRoutine_1a09d20(8 * v23, v24);
            if (v25 != 0) {
              break;
            }
            v26 = v23 >> 1;
            v27 = v23 > 1;
            v23 >>= 1;
            if (!v27) {
              goto LABEL_51;
            }
          }
          v29 = v25;
          GameRoutine_73d420(v5, v4, v22, v25, v23);
          v30 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v30 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v30, v29);
        }
      }
      v28 = *(_QWORD*)v5;
    }
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v31 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v31, v5);
    return v28;
  }
  return result;
}

void GameHr_73b640()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;

  if ((GameData_21cf848 & 1) == 0) {
    GameData_21cf848 = 1;
    if (GameData_21eea58 == 0 || (*(_BYTE*)(GameData_21eea58 + 32) & 1) == 0) {
      v11 = 17;
      v0 = GameRoutine_6ea9d0(&v11);
      if (v0 != 0) {
        v1 = *(_QWORD*)(v0 + 432);
        if (v1 == 0) {
          v2 = *(_QWORD*)(v0 + 440);
          if (v2 != 0 &&
              (unsigned int)(v3 = *(unsigned __int8*)(v2 + 16)) <= 8) {
            v10 = v3 - 3;
            while (1) {
              if (v10 == 0) {
                v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v1 != 0) {
                  break;
                }
              }
              if (++v10 == 6) {
                goto LABEL_8;
              }
            }
          }
          else {
          LABEL_8:
            v1 = 0;
          }
        }
        v4 = GameData_21ca310;
        while (1) {
        LABEL_11:
          v5 = v1;
          v6 = *(_DWORD*)(v0 + 416);
          if ((v6 & 1) != 0) {
            *(_DWORD*)(v0 + 416) = v6 & 0xFFFFFFFE;
          }
          if (v5 == 0) {
            break;
          }
          v1 = *(_QWORD*)(v5 + 432);
          v0 = v5;
          if (v1 == 0) {
            v7 = *(_QWORD*)(v5 + 440);
            v0 = v5;
            if (v7 != 0) {
              v8 = *(unsigned __int8*)(v7 + 16);
              v1 = 0;
              v0 = v5;
              if (v8 <= 8) {
                v9 = v8 - 3;
                while (1) {
                  if (v9 == 0) {
                    v1 = *(_QWORD*)(*(_QWORD*)(v4 + 56) + 556096LL);
                    if (v1 != 0) {
                      break;
                    }
                  }
                  if (++v9 == 6) {
                    v1 = 0;
                    v0 = v5;
                    goto LABEL_11;
                  }
                }
                v0 = v5;
              }
            }
          }
        }
      }
    }
  }
}

__int64 GameHr_73b790(__int64 a1, __int64* a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int16 v12;
  __int64 v13;

  if (GameData_21cf848 != 1) {
    return 0;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21cfa50,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_21cfa50, a2) != 0) {
    GameData_21cf858 = 0;
    GameData_21cf860 = (__int64)GameRoutine_741960;
    GameData_21cf850 = 13;
    GameData_21cf898 = 0;
    GameData_21cf8a0 = (__int64)GameRoutine_741e40;
    GameData_21cf8d0 = 13;
    GameData_21cf950 = 13;
    GameData_21cf990 = 13;
    GameData_21cf9d0 = 13;
    GameData_21cf868 = 0;
    GameData_21cf870 = 0;
    GameData_21cf878 = 0;
    GameData_21cf890 = 15;
    GameData_21cf910 = 15;
    GameData_21cf880 = 0;
    GameData_21cf888 = 0;
    GameData_21cf8a8 = 0;
    GameData_21cf8b0 = 0;
    GameData_21cf8b8 = 0;
    GameData_21cf8c0 = 0;
    GameData_21cf8c8 = 0;
    GameData_21cf8d8 = 0;
    GameData_21cf8e0 = (__int64)GameRoutine_741ee0;
    GameData_21cf918 = 0;
    GameData_21cf920 = (__int64)GameRoutine_742000;
    GameData_21cf8e8 = 0;
    GameData_21cf8f0 = 0;
    GameData_21cf8f8 = 0;
    GameData_21cf900 = 0;
    GameData_21cf908 = 0;
    GameData_21cf928 = 0;
    GameData_21cf930 = 0;
    GameData_21cf938 = 0;
    GameData_21cf940 = 0;
    GameData_21cf958 = 0;
    GameData_21cf960 = (__int64)GameRoutine_7421a0;
    GameData_21cf948 = 0;
    GameData_21cf968 = 0;
    GameData_21cf970 = 0;
    GameData_21cf978 = 0;
    GameData_21cf980 = 0;
    GameData_21cf988 = 0;
    GameData_21cf9a8 = 0;
    GameData_21cf9b0 = 0;
    GameData_21cf9b8 = 0;
    GameData_21cf998 = 0;
    GameData_21cf9a0 = (__int64)GameRoutine_7424c0;
    GameData_21cf9c0 = 0;
    GameData_21cf9c8 = 0;
    GameData_21cf9d8 = 0;
    GameData_21cf9e0 = (__int64)GameRoutine_742510;
    GameData_21cf9e8 = 0;
    GameData_21cf9f0 = 0;
    GameData_21cf9f8 = 0;
    GameData_21cfa00 = 0;
    GameData_21cfa08 = 0;
    GameData_21cfa10 = 0;
    GameData_21cfa38 = 0;
    GameData_21cfa40 = 0;
    GameData_21cfa48 = 0;
    GameData_21cfa30 = 0;
    GameData_21cfa20 = 0;
    GameData_21cfa28 = 0;
    GameData_21cfa18 = 0;
    GameRoutine_1a09fe0(&GameData_21cfa50);
  }
  v4 = (_QWORD*)GameData_212bf68;
  v5 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 248, 16, 0);
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
  GameRoutine_65a7c0();
  v7 = *a2;
  *(_QWORD*)v5 = GameData_1f94b38;
  *(_QWORD*)(v5 + 152) = GameData_1f94bd8;
  v8 = GameRoutine_1a09c70(v7);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0();
  }
  v9 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v10 = GameRoutine_651b90(*v4, v11, 16, 0);
    *(_QWORD*)(v5 + 168) = v9;
    *(_QWORD*)(v5 + 176) = v10;
    *(_QWORD*)(v5 + 160) = v11 | 1;
  }
  else {
    v10 = v5 + 161;
    *(_BYTE*)(v5 + 160) = 2 * v8;
    if (v8 == 0) {
      goto LABEL_13;
    }
  }
  GameRoutine_1a0b940(v10, v7, v9);
LABEL_13:
  *(_BYTE*)(v10 + v9) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  v12 = *((_WORD*)a2 + 5);
  v13 = a2[2];
  *(_QWORD*)(v5 + 192) = 0;
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_WORD*)(v5 + 242) = 0;
  *(_WORD*)(v5 + 208) = v12;
  *(_WORD*)(v5 + 240) = *((_WORD*)a2 + 4);
  if (v13 != 0) {
    GameRoutine_60a020(v5 + 184, v13);
  }
  GameRoutine_657850(v5, &GameData_21cf850, "ProcDispos", 1, a1);
  return v5;
}

bool GameHr_73baa0(int a1, int a2, int a3, int a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v4 = GameData_21ca240;
  if (GameData_21ca240 == GameData_21ca248) {
    v6 = 0;
  LABEL_13:
    v7 = 0;
  }
  else {
    v5 = GameData_21ca240;
    while (1) {
      v6 = *(_QWORD*)v5;
      if (a1 == *(char*)(*(_QWORD*)v5 + 54LL) && a2 == *(char*)(v6 + 55)) {
        break;
      }
      v5 += 8;
      if (v5 == GameData_21ca248) {
        v6 = 0;
        break;
      }
    }
    while (1) {
      v7 = *(_QWORD*)v4;
      if (a3 == *(char*)(*(_QWORD*)v4 + 54LL) && a4 == *(char*)(v7 + 55)) {
        break;
      }
      v4 += 8;
      if (v4 == GameData_21ca248) {
        goto LABEL_13;
      }
    }
  }
  return v6 == v7;
}

__int64 GameHr_73bb40(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  __int64* v19;
  __int64 i;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;

  v28 = 17;
  result = GameRoutine_6ea9d0(&v28);
  if (result != 0) {
    v6 = *(_QWORD*)(result + 432);
    v7 = result;
    if (v6 == 0) {
      v6 = *(_QWORD*)(result + 440);
      if (v6 != 0) {
        v8 = *(unsigned __int8*)(v6 + 16);
        if (v8 <= 8) {
          v25 = v8 - 3;
          while (1) {
            if (v25 == 0) {
              v6 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v6 != 0) {
                break;
              }
            }
            if (++v25 == 6) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v6 = 0;
        }
      }
    }
    v9 = 1;
    while (1) {
    LABEL_8:
      v10 = *(_DWORD*)(v7 + 592);
      v11 = v6;
      result = GameRoutine_6c8830(v7);
      if ((result & 1) != 0) {
        v12 = *(_QWORD*)(v7 + 400);
        v13 = *(_QWORD*)(v12 + 88);
        if ((*(_BYTE*)(v7 + 418) & 4) == 0) {
          v12 = *(_QWORD*)(v12 + 88);
        }
        if (v13 != 0 && v12 != 0) {
          v15 = *(unsigned __int8*)(v12 + 417);
          if (v10 <= v15) {
            v10 = v15;
          }
        }
      }
      if (v9 <= v10) {
        v9 = v10;
      }
      if (v11 == 0) {
        break;
      }
      v6 = *(_QWORD*)(v11 + 432);
      v7 = v11;
      if (v6 == 0) {
        v16 = *(_QWORD*)(v11 + 440);
        v7 = v11;
        if (v16 != 0) {
          v17 = *(unsigned __int8*)(v16 + 16);
          v6 = 0;
          v7 = v11;
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
                v7 = v11;
                goto LABEL_8;
              }
            }
            v7 = v11;
          }
        }
      }
    }
  }
  else {
    v9 = 1;
  }
  v19 = (__int64*)GameData_21ca240;
  for (i = GameData_21ca248; v19 != (__int64*)i;
       result = (*(__int64 (**)(__int64, int*, int*, int*))(
           *(_QWORD*)v22 + 48LL))(v22, &v28, &v27, &v26)) {
    v21 = *v19++;
    v22 = *(_QWORD*)(a1 + 32);
    v23 = *(char*)(v21 + 54);
    v24 = *(unsigned __int8*)(v21 + 56);
    v27 = *(char*)(v21 + 55);
    v28 = v23;
    if (v9 < v24) {
      v24 = v9;
    }
    v26 = v24;
    if (v22 == 0) {
      GameRoutine_60a310(0, v3, v4, v5);
    }
  }
  return result;
}

__int64 GameHr_73bd40(int a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v12;
  int v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  bool v17;
  __int64 v18;
  __int64 v20;
  unsigned int v21;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v28;
  int v29;
  char v30;
  char v31;
  int v32;
  int v33;
  struct {
    _DWORD v34[8];
    __int64 v35;
  } v34_;
  int v36;
  int v37;

  if (a1 < 1) {
    return 0;
  }
  v4 = GameData_21ca240;
  v5 = GameData_21ca248;
  if (GameData_21ca240 == GameData_21ca248) {
    return 0;
  }
  v6 = GameData_21ca240;
  v7 = GameData_212ce98[0];
  v8 = *GameData_212ce98[0];
  do {
    v9 = *(_QWORD*)v6;
    v10 = *(unsigned __int8*)(*(_QWORD*)v6 + 56LL);
    if (*(_BYTE*)(*(_QWORD*)v6 + 58LL) != 0 && a1 <= v10) {
      v12 = *(char*)(v9 + 54);
      v13 = *(char*)(v9 + 55);
      LODWORD(v14) = v12 + 32 * v13;
      v14 = (unsigned int)v14 >= 0x400 ? 0LL : (unsigned int)v14;
      v15 = *(unsigned __int8*)(*(_QWORD*)(v8 + 96) + v14 + 8);
      if (*(_BYTE*)(*(_QWORD*)(v8 + 96) + v14 + 8) == 0 ||
          ((v16 = *(_QWORD*)(GameData_21ca310 + 56) +
                  2224LL * *(unsigned __int8*)(*(_QWORD*)(v8 + 96) + v14 + 8),
            v15 <= 0xFA)
               ? (v17 = v16 == 2224)
               : (v17 = true),
           v17 || *(_QWORD*)(v16 - 1832) == 0)) {
        v18 = *(_QWORD*)(a2 + 32);
        if (v18 != 0) {
          v34_.v34[0] = v12;
          v36 = v10;
          v37 = v13;
        LABEL_21:
          (*(void (**)(__int64, _DWORD*, int*, int*))(*(_QWORD*)v18 + 48LL))(
              v18, v34_.v34, &v37, &v36);
          return 1;
        }
        return 1;
      }
    }
    v6 += 8;
  } while (v6 != GameData_21ca248);
  if (a1 == 1) {
    return 0;
  }
  while (1) {
    v20 = *(_QWORD*)v4;
    if (a1 <= *(unsigned __int8*)(*(_QWORD*)v4 + 56LL)) {
      v21 = *(unsigned __int8*)(v20 + 58);
      if (v21 > 3 || v21 == 1) {
        LODWORD(v23) = *(char*)(v20 + 54) + 32 * *(char*)(v20 + 55);
        v24 = *(_QWORD*)(*v7 + 96);
        v34_.v35 = 0;
        v23 = (unsigned int)v23 >= 0x400 ? 0LL : (unsigned int)v23;
        v25 = v24 + v23;
        if (*(_BYTE*)(v25 + 8) != 0) {
          v26 = *(_QWORD*)(GameData_21ca310 + 56) +
                2224LL * *(unsigned __int8*)(v25 + 8);
          if (*(unsigned __int8*)(v25 + 8) <= 0xFAu && v26 != 2224 &&
              *(_QWORD*)(v26 - 1832) != 0) {
            v28 = a2;
            v29 = a1;
            v30 = GameRoutine_73bf60_alt1(v26 - 2224, (__int64)v34_.v34);
            a2 = v28;
            v31 = v30;
            a1 = v29;
            if ((v31 & 1) != 0) {
              break;
            }
          }
        }
      }
    }
    v4 += 8;
    if (v4 == v5) {
      return 0;
    }
  }
  v18 = *(_QWORD*)(v28 + 32);
  if (v18 != 0) {
    v32 = *(char*)(v20 + 55);
    v33 = *(unsigned __int8*)(v20 + 56);
    v34_.v34[0] = *(char*)(v20 + 54);
    v36 = v33;
    v37 = v32;
    goto LABEL_21;
  }
  return 1;
}

__int64 GameHr_73bf60(__int64 a1, __int64 a2)
{
  int v2;
  __int64 v5;
  __int64 v6;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int8 v12;
  unsigned int v13;
  int v15;
  int v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  bool v20;
  __int64 v21;
  int v23;
  int v24;
  int v25;

  v2 = *(_DWORD*)(a1 + 592);
  if ((GameRoutine_6c8830(a1) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 400);
    v6 = *(_QWORD*)(v5 + 88);
    if ((*(_BYTE*)(a1 + 418) & 4) == 0) {
      v5 = *(_QWORD*)(v5 + 88);
    }
    if (v6 != 0 && v5 != 0) {
      v8 = *(unsigned __int8*)(v5 + 417);
      if (v2 <= v8) {
        v2 = v8;
      }
    }
  }
  if (v2 != 1) {
    return 0;
  }
  v9 = GameData_21ca240;
  if (GameData_21ca240 == GameData_21ca248) {
    return 0;
  }
  v10 = *GameData_212ce98[0];
  while (1) {
    v11 = *(_QWORD*)v9;
    v12 = *(_BYTE*)(*(_QWORD*)v9 + 56LL);
    if (v12 != 0) {
      v13 = *(unsigned __int8*)(v11 + 58);
      if (v13 > 3 || v13 == 1) {
        v15 = *(char*)(v11 + 54);
        v16 = *(char*)(v11 + 55);
        LODWORD(v17) = v15 + 32 * v16;
        v17 = (unsigned int)v17 >= 0x400 ? 0LL : (unsigned int)v17;
        v18 = *(unsigned __int8*)(*(_QWORD*)(v10 + 96) + v17 + 8);
        if (*(_BYTE*)(*(_QWORD*)(v10 + 96) + v17 + 8) == 0) {
          break;
        }
        v19 = *(_QWORD*)(GameData_21ca310 + 56) +
              2224LL * *(unsigned __int8*)(*(_QWORD*)(v10 + 96) + v17 + 8);
        v20 = v18 > 0xFA || v19 == 2224;
        if (v20 || *(_QWORD*)(v19 - 1832) == 0) {
          break;
        }
      }
    }
    v9 += 8;
    if (v9 == GameData_21ca248) {
      return 0;
    }
  }
  v21 = *(_QWORD*)(a2 + 32);
  if (v21 != 0) {
    v24 = v16;
    v25 = v15;
    v23 = v12;
    (*(void (**)(__int64, int*, int*, int*))(*(_QWORD*)v21 + 48LL))(v21, &v25,
                                                                    &v24, &v23);
  }
  return 1;
}

__int64 GameHr_73c460()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  char v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  bool v10;
  int v11;
  __int64 v12;
  __int64 v13;
  int v15;
  char v16[4];

  v0 = GameData_21ca300;
  if (GameData_21ca300 == 0 || (v1 = GameData_21ca240, v2 = GameData_21ca248,
                                GameData_21ca240 == GameData_21ca248)) {
    v3 = 0;
  }
  else {
    v3 = 0;
    do {
      v6 = *(_QWORD*)v1;
      LODWORD(v7) =
          *(char*)(*(_QWORD*)v1 + 54LL) + 32 * *(char*)(*(_QWORD*)v1 + 55LL);
      if ((unsigned int)v7 >= 0x400) {
        v7 = 0;
      }
      else {
        v7 = (unsigned int)v7;
      }
      v8 = *(unsigned __int8*)(*(_QWORD*)(v0 + 96) + v7 + 8);
      if (v8 != 0) {
        v9 = *(_QWORD*)(GameData_21ca310 + 56) + 2224LL * v8;
        v10 = v8 > 0xFA || v9 == 2224;
        if (!v10 && *(_QWORD*)(v9 - 1832) != 0 &&
            (*(_BYTE*)(v6 + 58) & 0xFE) != 2) {
          v11 = *(_DWORD*)(v9 - 1632);
          if ((GameRoutine_6c8830(v9 - 2224) & 1) != 0) {
            v12 = *(_QWORD*)(v9 - 1824);
            v13 = *(_QWORD*)(v12 + 88);
            if ((*(_BYTE*)(v9 - 1806) & 4) == 0) {
              v12 = *(_QWORD*)(v12 + 88);
            }
            if (v13 != 0 && v12 != 0) {
              v15 = *(unsigned __int8*)(v12 + 417);
              if (v11 <= v15) {
                v11 = v15;
              }
            }
          }
          if (*(_BYTE*)(v6 + 58) == 0 || v11 > *(unsigned __int8*)(v6 + 56)) {
            v5 = *(_QWORD*)(v9 - 1784);
            if (v5 != 0) {
              if (*(_BYTE*)(v5 + 16) != 0) {
                LOBYTE(v5) = 0;
              }
              else {
                v16[0] = 4;
                GameRoutine_6c47b0(v9 - 2224, v16, 0, 0);
                GameRoutine_73c7c0(v9 - 2224, (unsigned int)*(char*)(v9 - 1640),
                                   (unsigned int)*(char*)(v9 - 1639));
                LOBYTE(v5) = 1;
              }
            }
            v3 |= v5;
          }
        }
      }
      v1 += 8;
    } while (v1 != v2);
  }
  return v3 & 1;
}

__int64 GameHr_73d420(__int64 result, __int64* a2, unsigned __int64 a3,
                      __int64* a4, signed __int64 a5)
{
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  int v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64* v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  int v30;
  int v31;
  __int64 v32;
  __int64 v33;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  int v43;
  int v44;
  __int64 v45;
  __int64 v46;
  int v48;
  unsigned __int64 v49;
  __int64* v50;
  unsigned __int64 v51;
  __int64* v54;
  __int64* v55;
  __int64* v56;
  __int64* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  int v63;
  __int64 v64;
  __int64 v65;
  int v67;
  int v68;
  __int64 v69;
  __int64 v70;
  int v72;
  __int64 v73;
  __int64 v74;

  if (a3 >= 2) {
    v6 = (_QWORD*)result;
    if (a3 == 2) {
      v7 = *(a2 - 1);
      v8 = *(_QWORD*)result;
      v9 = *(_DWORD*)(v7 + 592);
      if ((GameRoutine_6c8830(v7) & 1) != 0) {
        v10 = *(_QWORD*)(v7 + 400);
        v11 = *(_QWORD*)(v10 + 88);
        if ((*(_BYTE*)(v7 + 418) & 4) == 0) {
          v10 = *(_QWORD*)(v10 + 88);
        }
        if (v11 != 0 && v10 != 0) {
          v13 = *(unsigned __int8*)(v10 + 417);
          if (v9 <= v13) {
            v9 = v13;
          }
        }
      }
      v14 = *(_DWORD*)(v8 + 592);
      result = GameRoutine_6c8830(v8);
      if ((result & 1) != 0) {
        v15 = *(_QWORD*)(v8 + 400);
        v16 = *(_QWORD*)(v15 + 88);
        if ((*(_BYTE*)(v8 + 418) & 4) == 0) {
          v15 = *(_QWORD*)(v15 + 88);
        }
        if (v16 != 0 && v15 != 0) {
          v18 = *(unsigned __int8*)(v15 + 417);
          if (v14 <= v18) {
            v14 = v18;
          }
        }
      }
      if (v9 > v14) {
        v19 = *v6;
        *v6 = *(a2 - 1);
        *(a2 - 1) = v19;
      }
    }
    else if ((__int64)a3 > 128) {
      v49 = a3 >> 1;
      v50 = a4;
      v51 = a3 - (a3 >> 1);
      if ((__int64)a3 <= a5) {
        GameRoutine_73d860(result, result + 8 * v49, a3 >> 1, a4);
        v54 = &v50[v49];
        result = GameRoutine_73d860(&v6[v49], a2, v51, v54);
        v55 = &v50[a3];
        v56 = v54;
        while (v56 != v55) {
          v61 = *v56;
          v62 = *v50;
          v63 = *(_DWORD*)(*v56 + 592);
          if ((GameRoutine_6c8830(*v56) & 1) != 0) {
            v64 = *(_QWORD*)(v61 + 400);
            v65 = *(_QWORD*)(v64 + 88);
            if ((*(_BYTE*)(v61 + 418) & 4) == 0) {
              v64 = *(_QWORD*)(v64 + 88);
            }
            if (v65 != 0 && v64 != 0) {
              v67 = *(unsigned __int8*)(v64 + 417);
              if (v63 <= v67) {
                v63 = v67;
              }
            }
          }
          v68 = *(_DWORD*)(v62 + 592);
          result = GameRoutine_6c8830(v62);
          if ((result & 1) != 0) {
            v69 = *(_QWORD*)(v62 + 400);
            v70 = *(_QWORD*)(v69 + 88);
            if ((*(_BYTE*)(v62 + 418) & 4) == 0) {
              v69 = *(_QWORD*)(v69 + 88);
            }
            if (v70 != 0 && v69 != 0) {
              v72 = *(unsigned __int8*)(v69 + 417);
              if (v68 <= v72) {
                v68 = v72;
              }
            }
          }
          if (v63 <= v68) {
            v57 = v50;
          }
          else {
            v57 = v56;
          }
          if (v63 <= v68) {
            v58 = 8;
          }
          else {
            v58 = 0;
          }
          v59 = *v57;
          v50 = (__int64*)((char*)v50 + v58);
          if (v63 <= v68) {
            v60 = 0;
          }
          else {
            v60 = 8;
          }
          v56 = (__int64*)((char*)v56 + v60);
          *v6++ = v59;
          if (v50 == v54) {
            while (v56 != v55) {
              v74 = *v56++;
              *v6++ = v74;
            }
            return result;
          }
        }
        while (v50 != v54) {
          v73 = *v50++;
          *v6++ = v73;
        }
      }
      else {
        GameHr_73d420(result, result + 8 * v49, a3 >> 1, a4, a5);
        GameHr_73d420(&v6[v49], a2, v51, v50, a5);
        return GameRoutine_73dc80(v6, &v6[v49], a2, v49, v51, v50, a5);
      }
    }
    else if ((__int64*)result != a2) {
      v20 = (__int64*)(result + 8);
      if ((__int64*)(result + 8) != a2) {
        v21 = 0;
        v22 = (__int64*)result;
        do {
          v24 = *v22;
          v25 = v22[1];
          v22 = v20;
          v26 = *(_DWORD*)(v25 + 592);
          if ((GameRoutine_6c8830(v25) & 1) != 0) {
            v27 = *(_QWORD*)(v25 + 400);
            v28 = *(_QWORD*)(v27 + 88);
            if ((*(_BYTE*)(v25 + 418) & 4) == 0) {
              v27 = *(_QWORD*)(v27 + 88);
            }
            if (v28 != 0 && v27 != 0) {
              v30 = *(unsigned __int8*)(v27 + 417);
              if (v26 <= v30) {
                v26 = v30;
              }
            }
          }
          v31 = *(_DWORD*)(v24 + 592);
          result = GameRoutine_6c8830(v24);
          if ((result & 1) != 0) {
            v32 = *(_QWORD*)(v24 + 400);
            v33 = *(_QWORD*)(v32 + 88);
            if ((*(_BYTE*)(v24 + 418) & 4) == 0) {
              v32 = *(_QWORD*)(v32 + 88);
            }
            if (v33 != 0 && v32 != 0) {
              v35 = *(unsigned __int8*)(v32 + 417);
              if (v31 <= v35) {
                v31 = v35;
              }
            }
          }
          if (v26 > v31) {
            v36 = *v22;
            v37 = v21;
            do {
              *(_QWORD*)((char*)v6 + v37 + 8) = *(_QWORD*)((char*)v6 + v37);
              if (v37 == 0) {
                v23 = v6;
                goto LABEL_29;
              }
              v38 = *(_QWORD*)((char*)v6 + v37 - 8);
              v39 = *(_DWORD*)(v36 + 592);
              if ((GameRoutine_6c8830(v36) & 1) != 0) {
                v40 = *(_QWORD*)(v36 + 400);
                v41 = *(_QWORD*)(v40 + 88);
                if ((*(_BYTE*)(v36 + 418) & 4) == 0) {
                  v40 = *(_QWORD*)(v40 + 88);
                }
                if (v41 != 0 && v40 != 0) {
                  v43 = *(unsigned __int8*)(v40 + 417);
                  if (v39 <= v43) {
                    v39 = v43;
                  }
                }
              }
              v44 = *(_DWORD*)(v38 + 592);
              result = GameRoutine_6c8830(v38);
              if ((result & 1) != 0) {
                v45 = *(_QWORD*)(v38 + 400);
                v46 = *(_QWORD*)(v45 + 88);
                if ((*(_BYTE*)(v38 + 418) & 4) == 0) {
                  v45 = *(_QWORD*)(v45 + 88);
                }
                if (v46 != 0 && v45 != 0) {
                  v48 = *(unsigned __int8*)(v45 + 417);
                  if (v44 <= v48) {
                    v44 = v48;
                  }
                }
              }
              v37 -= 8;
            } while (v39 > v44);
            v23 = (_QWORD*)((char*)v6 + v37 + 8);
          LABEL_29:
            *v23 = v36;
          }
          v20 = v22 + 1;
          v21 += 8;
        } while (v22 + 1 != a2);
      }
    }
  }
  return result;
}

__int64 GameHr_73dc80(__int64 result, __int64* a2, __int64* a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v9;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int v24;
  char* v25;
  __int64 v26;
  __int64* v27;
  char* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  int v37;
  int v38;
  __int64 v39;
  __int64 v40;
  int v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64* v46;
  __int64 v47;
  int v48;
  __int64 v49;
  __int64 v50;
  int v52;
  int v53;
  __int64 v54;
  __int64 v55;
  int v57;
  __int64* v58;
  __int64* v59;
  __int64* v60;
  __int64 v61;
  __int64* v62;
  __int64 v63;
  __int64* v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  __int64* v68;
  __int64* v69;
  int v70;
  __int64 v71;
  __int64 v72;
  int v74;
  int v75;
  __int64 v76;
  __int64 v77;
  int v79;
  __int64 v80;
  __int64* v81;
  __int64* v82;
  __int64 v83;
  __int64* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64* v90;
  int v91;
  __int64 v92;
  __int64 v93;
  int v95;
  int v96;
  __int64 v97;
  __int64 v98;
  int v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64* v109;
  __int64 v110;
  __int64* v111;

  if (a5 != 0) {
    v9 = a5;
    v12 = (__int64*)result;
    while (a4 > a7 && v9 > a7) {
      v111 = a2;
      if (a4 == 0) {
        return result;
      }
      while (1) {
        v13 = *a2;
        v14 = *v12;
        v15 = *(_DWORD*)(*a2 + 592);
        if (game_Unit_CanSwitchMount(*a2)) {
          v16 = *(_QWORD*)(v13 + 400);
          v17 = *(_QWORD*)(v16 + 88);
          if ((*(_BYTE*)(v13 + 418) & 4) == 0) {
            v16 = *(_QWORD*)(v16 + 88);
          }
          if (v17 != 0 && v16 != 0) {
            v19 = *(unsigned __int8*)(v16 + 417);
            if (v15 <= v19) {
              v15 = v19;
            }
          }
        }
        v20 = *(_DWORD*)(v14 + 592);
        result = game_Unit_CanSwitchMount(v14);
        if ((result & 1) != 0) {
          v21 = *(_QWORD*)(v14 + 400);
          v22 = *(_QWORD*)(v21 + 88);
          if ((*(_BYTE*)(v14 + 418) & 4) == 0) {
            v21 = *(_QWORD*)(v21 + 88);
          }
          if (v22 != 0 && v21 != 0) {
            v24 = *(unsigned __int8*)(v21 + 417);
            if (v20 <= v24) {
              v20 = v24;
            }
          }
        }
        if (v15 > v20) {
          break;
        }
        a2 = v111;
        ++v12;
        if (--a4 == 0) {
          return result;
        }
      }
      v25 = (char*)v111;
      v110 = a6;
      if (a4 >= v9) {
        if (a4 == 1) {
          v101 = *v12;
          *v12 = *v111;
          *v111 = v101;
          return result;
        }
        v43 = a4 / 2;
        v28 = (char*)&v12[a4 / 2];
        if (a3 == v111) {
          v27 = a3;
        }
        else {
          v108 = a7;
          v109 = a3;
          v44 = a3 - v111;
          v106 = v9;
          v27 = v111;
          do {
            v45 = *(_QWORD*)v28;
            v46 = &v27[v44 >> 1];
            v47 = *v46;
            v48 = *(_DWORD*)(*v46 + 592);
            if (game_Unit_CanSwitchMount(*v46)) {
              v49 = *(_QWORD*)(v47 + 400);
              v50 = *(_QWORD*)(v49 + 88);
              if ((*(_BYTE*)(v47 + 418) & 4) == 0) {
                v49 = *(_QWORD*)(v49 + 88);
              }
              if (v50 != 0 && v49 != 0) {
                v52 = *(unsigned __int8*)(v49 + 417);
                if (v48 <= v52) {
                  v48 = v52;
                }
              }
            }
            v53 = *(_DWORD*)(v45 + 592);
            if (game_Unit_CanSwitchMount(v45)) {
              v54 = *(_QWORD*)(v45 + 400);
              v55 = *(_QWORD*)(v54 + 88);
              if ((*(_BYTE*)(v45 + 418) & 4) == 0) {
                v54 = *(_QWORD*)(v54 + 88);
              }
              if (v55 != 0 && v54 != 0) {
                v57 = *(unsigned __int8*)(v54 + 417);
                if (v53 <= v57) {
                  v53 = v57;
                }
              }
            }
            if (v48 <= v53) {
              v44 >>= 1;
            }
            else {
              v27 = v46 + 1;
              v44 += ~(v44 >> 1);
            }
          } while (v44 != 0);
          a7 = v108;
          a3 = v109;
          v25 = (char*)v111;
          v43 = a4 / 2;
          v9 = v106;
        }
        v26 = ((char*)v27 - v25) >> 3;
      }
      else {
        v26 = v9 / 2;
        v27 = &v111[v9 / 2];
        if (v12 == v111) {
          v28 = (char*)v111;
        }
        else {
          v107 = a7;
          v104 = v9 / 2;
          v105 = v9;
          v28 = (char*)v12;
          v29 = v111 - v12;
          do {
            v30 = *v27;
            v31 = (__int64*)&v28[8 * (v29 >> 1)];
            v32 = *v31;
            v33 = *(_DWORD*)(*v27 + 592);
            if (game_Unit_CanSwitchMount(*v27)) {
              v34 = *(_QWORD*)(v30 + 400);
              v35 = *(_QWORD*)(v34 + 88);
              if ((*(_BYTE*)(v30 + 418) & 4) == 0) {
                v34 = *(_QWORD*)(v34 + 88);
              }
              if (v35 != 0 && v34 != 0) {
                v37 = *(unsigned __int8*)(v34 + 417);
                if (v33 <= v37) {
                  v33 = v37;
                }
              }
            }
            v38 = *(_DWORD*)(v32 + 592);
            if (game_Unit_CanSwitchMount(v32)) {
              v39 = *(_QWORD*)(v32 + 400);
              v40 = *(_QWORD*)(v39 + 88);
              if ((*(_BYTE*)(v32 + 418) & 4) == 0) {
                v39 = *(_QWORD*)(v39 + 88);
              }
              if (v40 != 0 && v39 != 0) {
                v42 = *(unsigned __int8*)(v39 + 417);
                if (v38 <= v42) {
                  v38 = v42;
                }
              }
            }
            if (v33 > v38) {
              v29 >>= 1;
            }
            else {
              v28 = (char*)(v31 + 1);
              v29 += ~(v29 >> 1);
            }
          } while (v29 != 0);
          a7 = v107;
          v25 = (char*)v111;
          v26 = v104;
          v9 = v105;
        }
        v43 = (v28 - (char*)v12) >> 3;
      }
      a4 -= v43;
      v9 -= v26;
      v58 = (__int64*)GameRoutine_6c29c0_alt1(v28, v25, (char*)v27);
      v59 = v58;
      if (v43 + v26 >= a4 + v9) {
        v61 = v9;
        v9 = v26;
        result = GameHr_73dc80((__int64)v58, v27, a3, a4, v61, v110, a7);
        v62 = (__int64*)v28;
        a6 = v110;
        a4 = v43;
        a3 = v59;
        a2 = v62;
        if (v26 == 0) {
          return result;
        }
      }
      else {
        v60 = (__int64*)v28;
        a6 = v110;
        result = GameHr_73dc80((__int64)v12, v60, v58, v43, v26, v110, a7);
        v12 = v59;
        a2 = v27;
        if (v9 == 0) {
          return result;
        }
      }
    }
    if (a4 <= v9) {
      if (v12 != a2) {
        v80 = -a6;
        v81 = (__int64*)a6;
        v82 = v12;
        do {
          v83 = *v82++;
          v80 -= 8;
          *v81++ = v83;
        } while (v82 != a2);
        while (a2 != a3) {
          v88 = *a2;
          v89 = *(_QWORD*)a6;
          v90 = a2;
          v91 = *(_DWORD*)(*a2 + 592);
          if (game_Unit_CanSwitchMount(*a2)) {
            v92 = *(_QWORD*)(v88 + 400);
            v93 = *(_QWORD*)(v92 + 88);
            if ((*(_BYTE*)(v88 + 418) & 4) == 0) {
              v92 = *(_QWORD*)(v92 + 88);
            }
            if (v93 != 0 && v92 != 0) {
              v95 = *(unsigned __int8*)(v92 + 417);
              if (v91 <= v95) {
                v91 = v95;
              }
            }
          }
          v96 = *(_DWORD*)(v89 + 592);
          result = game_Unit_CanSwitchMount(v89);
          if ((result & 1) != 0) {
            v97 = *(_QWORD*)(v89 + 400);
            v98 = *(_QWORD*)(v97 + 88);
            if ((*(_BYTE*)(v89 + 418) & 4) == 0) {
              v97 = *(_QWORD*)(v97 + 88);
            }
            if (v98 != 0 && v97 != 0) {
              v100 = *(unsigned __int8*)(v97 + 417);
              if (v96 <= v100) {
                v96 = v100;
              }
            }
          }
          if (v91 <= v96) {
            v84 = (__int64*)a6;
          }
          else {
            v84 = v90;
          }
          v85 = v91 > v96;
          v86 = *v84;
          a2 = &v90[v85];
          if (v91 <= v96) {
            v87 = 8;
          }
          else {
            v87 = 0;
          }
          a6 += v87;
          *v12++ = v86;
          if (v81 == (__int64*)a6) {
            return result;
          }
        }
        return memmove((__int64)v12, a6, -(a6 + v80));
      }
    }
    else if (a2 != a3) {
      v63 = 0;
      do {
        *(_QWORD*)(a6 + v63 * 8) = a2[v63];
        ++v63;
      } while (&a2[v63] != a3);
      v64 = (__int64*)(a6 + v63 * 8);
      while (a2 != v12) {
        v66 = *(v64 - 1);
        v68 = a2 - 1;
        v67 = *(a2 - 1);
        v69 = a2;
        v70 = *(_DWORD*)(v66 + 592);
        if (game_Unit_CanSwitchMount(v66)) {
          v71 = *(_QWORD*)(v66 + 400);
          v72 = *(_QWORD*)(v71 + 88);
          if ((*(_BYTE*)(v66 + 418) & 4) == 0) {
            v71 = *(_QWORD*)(v71 + 88);
          }
          if (v72 != 0 && v71 != 0) {
            v74 = *(unsigned __int8*)(v71 + 417);
            if (v70 <= v74) {
              v70 = v74;
            }
          }
        }
        v75 = *(_DWORD*)(v67 + 592);
        result = game_Unit_CanSwitchMount(v67);
        if ((result & 1) != 0) {
          v76 = *(_QWORD*)(v67 + 400);
          v77 = *(_QWORD*)(v76 + 88);
          if ((*(_BYTE*)(v67 + 418) & 4) == 0) {
            v76 = *(_QWORD*)(v76 + 88);
          }
          if (v77 != 0 && v76 != 0) {
            v79 = *(unsigned __int8*)(v76 + 417);
            if (v75 <= v79) {
              v75 = v79;
            }
          }
        }
        if (v70 <= v75) {
          v65 = v64;
        }
        else {
          v65 = v69;
        }
        if (v70 <= v75) {
          a2 = v69;
        }
        else {
          a2 = v68;
        }
        if (v70 <= v75) {
          --v64;
        }
        *--a3 = *(v65 - 1);
        if (v64 == (__int64*)a6) {
          return result;
        }
      }
      if ((__int64*)a6 != v64) {
        v102 = 0x1FFFFFFFFFFFFFFFLL;
        do {
          v103 = *--v64;
          a3[v102--] = v103;
        } while (v64 != (__int64*)a6);
      }
    }
  }
  return result;
}

__int64 GameHr_73f640(__int64 a1, char a2, char a3, int a4, char a5)
{
  char* v7;
  char* v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
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
  struct {
    int v37;
    char gap4_[4];
    char* v38;
    char* v39;
    __int64 v40;
  } v37_;

  v37_.v37 = 0;
  v37_.v38 = nullptr;
  v37_.v39 = nullptr;
  v37_.v40 = 0;
  GameRoutine_74d660_alt1((__int64)&v37_.v37, a4, a2, a3);
  v7 = v37_.v38;
  v8 = v37_.v39;
  if (v37_.v38 == v37_.v39) {
    v17 = 1;
    if (v37_.v38 == nullptr) {
      return v17;
    }
    goto LABEL_43;
  }
  v9 = GameData_212c930;
  v10 = *GameData_212c930;
  v11 = GameData_212ce98[0];
  v12 = GameData_212cfb8[0];
  if ((a5 & 1) != 0) {
    while (1) {
      v13 = *(_QWORD*)(v10 + 64);
      v14 = *v7 + 32 * v7[1];
      if (v14 >= 0x400) {
        v15 = 0;
      }
      else {
        v15 = v14;
      }
      v16 = *(_QWORD*)(v13 +
                       8LL * *(unsigned __int16*)(*(_QWORD*)(*v11 + 72) +
                                                  2LL * (unsigned int)v15 + 8));
      if (v16 != 0 &&
          (*(_BYTE*)(a1 + 48) == 0 ||
           *(unsigned __int8*)(*(_QWORD*)(v16 + 48) +
                               *(unsigned __int8*)(a1 + 48) + 32LL) == 255)) {
        v17 = 0;
        v18 = *(_QWORD*)(*v12 + 16);
        v19 = *(__int16*)(v18 + 2 * v15 + 2152);
        if (v19 < 0) {
          goto LABEL_42;
        }
        v20 = *(_QWORD*)(v18 + 8);
        if (v20 == 0) {
          goto LABEL_42;
        }
        if (((*(__int64 (**)(__int64))(*(_QWORD*)(v20 + 144LL * (int)v19) +
                                       272LL))(v20 + 144LL * (int)v19) &
             1) == 0) {
          break;
        }
        v14 = *v7 + 32 * v7[1];
      }
      v21 = *(_QWORD*)(*v12 + 16);
      v22 = v14 >= 0x400 ? 0 : v14;
      v23 = *(__int16*)(v21 + 2LL * v22 + 12392);
      if ((v23 & 0x8000000000000000LL) == 0 &&
          (v24 = *(_QWORD*)(v21 + 8)) != 0 &&
          (v25 = v24 + 144LL * (unsigned int)v23,
           ((*(__int64 (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25) & 1) != 0) &&
          (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v25 + 168LL))(v25) != 9 &&
          (v26 = (*(__int64 (**)(__int64))(*(_QWORD*)v25 + 224LL))(v25)) != 0) {
        v10 = *v9;
      }
      else {
        v10 = *v9;
        v26 = **(_QWORD**)(*v9 + 64);
      }
      if (*(_BYTE*)(v26 + 57) == 14) {
        break;
      }
      v7 += 4;
      if (v7 == v8) {
        goto LABEL_41;
      }
    }
  }
  else {
    while (1) {
      v27 = *(_QWORD*)(v10 + 64);
      LODWORD(v28) = *v7 + 32 * v7[1];
      v28 = (unsigned int)v28 >= 0x400 ? 0LL : (unsigned int)v28;
      v29 = *(_QWORD*)(v27 +
                       8LL * *(unsigned __int16*)(*(_QWORD*)(*v11 + 72) +
                                                  2LL * (unsigned int)v28 + 8));
      if (v29 != 0 &&
          (*(_BYTE*)(a1 + 48) == 0 ||
           *(unsigned __int8*)(*(_QWORD*)(v29 + 48) +
                               *(unsigned __int8*)(a1 + 48) + 32LL) == 255)) {
        break;
      }
      v30 = *(_QWORD*)(*v12 + 16);
      v31 = *(__int16*)(v30 + 2 * v28 + 12392);
      if ((v31 & 0x8000000000000000LL) == 0 &&
          (v32 = *(_QWORD*)(v30 + 8)) != 0 &&
          (v33 = v32 + 144LL * (unsigned int)v31,
           ((*(__int64 (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33) & 1) != 0) &&
          (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v33 + 168LL))(v33) != 9 &&
          (v34 = (*(__int64 (**)(__int64))(*(_QWORD*)v33 + 224LL))(v33)) != 0) {
        v10 = *v9;
      }
      else {
        v10 = *v9;
        v34 = **(_QWORD**)(*v9 + 64);
      }
      if (*(_BYTE*)(v34 + 57) == 14) {
        break;
      }
      v7 += 4;
      if (v7 == v8) {
      LABEL_41:
        v17 = 1;
      LABEL_42:
        v7 = v37_.v38;
        if (v37_.v38 == nullptr) {
          return v17;
        }
        goto LABEL_43;
      }
    }
  }
  v17 = 0;
  v7 = v37_.v38;
  if (v37_.v38 != nullptr) {
  LABEL_43:
    v37_.v39 = v7;
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v35,
                                  (__int64)v7);
  }
  return v17;
}

void GameHr_73f960(_DWORD* a1, char a2, char a3, int a4)
{
  __int64 v5;
  char* v6;
  int v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  char v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  bool v15;
  __int64 v16;
  __int64 v17;
  struct {
    int v18;
    char gap4_[4];
    char* v19;
    __int64 v20;
    __int64 v21;
  } v18_;

  *a1 = 0;
  v18_.v18 = 0;
  v18_.v19 = nullptr;
  v18_.v20 = 0;
  v18_.v21 = 0;
  GameRoutine_74d660_alt1((__int64)&v18_.v18, a4, a2, a3);
  v5 = (__int64)v18_.v19;
  v6 = (char*)v18_.v20;
  if (v18_.v19 != (char*)v18_.v20) {
    v7 = 0;
    v8 = v18_.v19;
    v9 = GameData_21ca310;
    v10 = *(_QWORD*)(*GameData_212ce98[0] + 96) + 8LL;
    do {
      v12 = *v8 + 32 * v8[1];
      if (v12 >= 0x400) {
        v12 = 0;
      }
      v13 = *(unsigned __int8*)(v10 + v12);
      if (*(_BYTE*)(v10 + v12) != 0) {
        v14 = *(_QWORD*)(v9 + 56) + 2224LL * *(unsigned __int8*)(v10 + v12);
        v15 = v13 > 0xFA || v14 == 2224;
        if (!v15 && *(_QWORD*)(v14 - 1832) != 0) {
          v16 = *(_QWORD*)(v14 - 1784);
          if (v16 != 0) {
            v11 = *(_BYTE*)(v16 + 16);
          }
          else {
            v11 = 9;
          }
          v7 |= 1 << v11;
          *a1 = v7;
        }
      }
      v8 += 4;
    } while (v8 != v6);
  }
  if (v5 != 0) {
    v18_.v20 = v5;
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17,
                                  v5);
  }
}

__int64 GameHr_73fb50(__int64 result, __int64 a2)
{
  **(_BYTE**)(result + 8) |= *(_BYTE*)(*(_QWORD*)a2 + 217LL) & 1;
  return result;
}

__int64 GameHr_73ff00(__int64 result, __int64* a2)
{
  __int64 v2;
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

  v2 = *a2;
  if ((*(_BYTE*)(*a2 + 416) & 8) == 0) {
    v3 = *(__int64**)(result + 8);
    v5 = (_QWORD*)v3[1];
    v4 = v3[2];
    if ((unsigned __int64)v5 >= v4) {
      v7 = *v3;
      v8 = (__int64)v5 - *v3;
      v9 = (v8 >> 3) + 1;
      if (v9 >> 61 != 0) {
        GameRoutine_740050();
      }
      v10 = v4 - v7;
      v11 = GameData_212bf68;
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
        v13 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v12, 16, 0);
      }
      else {
        v13 = 0;
      }
      v14 = v13 + 8 * v12;
      v15 = v13 + v8 - 8 * (v8 >> 3);
      *(_QWORD*)(v13 + v8) = v2;
      v6 = v13 + v8 + 8;
      result = GameRoutine_1a0b950(v15, v7, v8);
      *v3 = v15;
      v3[1] = v6;
      v3[2] = v14;
      if (v7 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
          v16 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)v11 + v16, v7);
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

char* GameHr_740080(char* result, char* a2, unsigned __int64 a3, __int64* a4,
                    __int64 a5)
{
  __int64 v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  char* v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v16;
  char* v17;
  char* v20;
  __int64* v22;
  __int64* v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  unsigned int v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  if (a3 >= 2) {
    if (a3 == 2) {
      v5 = *((_QWORD*)a2 - 1);
      v6 = *(_QWORD*)result;
      if (*(unsigned __int8*)(v5 + 56) >
          (unsigned int)*(unsigned __int8*)(*(_QWORD*)result + 56LL)) {
        *(_QWORD*)result = v5;
        *((_QWORD*)a2 - 1) = v6;
      }
    }
    else if ((__int64)a3 > 128) {
      v14 = a3 >> 1;
      v16 = a3 - (a3 >> 1);
      if ((__int64)a3 <= a5) {
        v20 = result;
        v22 = a4;
        GameRoutine_7402a0_alt1((__int64)result, (__int64)&result[8 * v14],
                                a3 >> 1, a4);
        v23 = &v22[v14];
        result = (char*)GameRoutine_7402a0_alt1((__int64)&v20[8 * v14],
                                                (__int64)a2, v16, v23);
        v24 = &v22[a3];
        v25 = v23;
        while (v25 != v24) {
          v26 = *v25;
          v27 = *(unsigned __int8*)(*v25 + 56);
          v28 = *(unsigned __int8*)(*v22 + 56);
          if (v27 > v28) {
            v29 = 0;
          }
          else {
            v26 = *v22;
            v29 = 8;
          }
          v22 = (__int64*)((char*)v22 + v29);
          if (v27 <= v28) {
            v30 = 0;
          }
          else {
            v30 = 8;
          }
          *(_QWORD*)v20 = v26;
          v20 += 8;
          v25 = (__int64*)((char*)v25 + v30);
          if (v22 == v23) {
            while (v25 != v24) {
              v32 = *v25++;
              *(_QWORD*)v20 = v32;
              v20 += 8;
            }
            return result;
          }
        }
        while (v22 != v23) {
          v31 = *v22++;
          *(_QWORD*)v20 = v31;
          v20 += 8;
        }
      }
      else {
        v17 = result;
        GameHr_740080(result, &result[8 * v14], a3 >> 1, a4, a5);
        GameHr_740080(&v17[8 * v14], a2, v16, a4, a5);
        return GameRoutine_7404e0_alt1(v17, &v17[8 * v14], a2, v14, v16,
                                       (__int64)a4, a5);
      }
    }
    else if (result != a2) {
      v7 = result + 8;
      if (result + 8 != a2) {
        v8 = 0;
        v9 = result;
        do {
          v12 = *(_QWORD*)v9;
          v11 = *((_QWORD*)v9 + 1);
          v9 = v7;
          if (*(unsigned __int8*)(v11 + 56) >
              (unsigned int)*(unsigned __int8*)(v12 + 56)) {
            v13 = v8;
            do {
              *(_QWORD*)&result[v13 + 8] = v12;
              if (v13 == 0) {
                v10 = result;
                goto LABEL_11;
              }
              v12 = *(_QWORD*)&result[v13 - 8];
              v13 -= 8;
            } while (*(unsigned __int8*)(v11 + 56) >
                     (unsigned int)*(unsigned __int8*)(v12 + 56));
            v10 = &result[v13 + 8];
          LABEL_11:
            *(_QWORD*)v10 = v11;
          }
          v7 = v9 + 8;
          v8 += 8;
        } while (v9 + 8 != a2);
      }
    }
  }
  return result;
}

__int64 GameHr_7402a0(__int64 result, __int64* a2, unsigned __int64 a3,
                      __int64* a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64* v20;
  __int64 v21;
  __int64* v22;
  __int64* v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  unsigned int v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  if (a3 != 0) {
    if (a3 == 2) {
      v4 = *(a2 - 1);
      if (*(unsigned __int8*)(v4 + 56) <=
          (unsigned int)*(unsigned __int8*)(*(_QWORD*)result + 56LL)) {
        *a4 = *(_QWORD*)result;
        v5 = *(a2 - 1);
      }
      else {
        *a4 = v4;
        v5 = *(_QWORD*)result;
      }
      a4[1] = v5;
    }
    else if (a3 == 1) {
      *a4 = *(_QWORD*)result;
    }
    else if ((__int64)a3 > 8) {
      v15 = a3 >> 1;
      v16 = result;
      v20 = (__int64*)(result + 8 * (a3 >> 1));
      v21 = 8 * (a3 >> 1);
      GameRoutine_740080(result, v20, v15, a4, v15);
      result =
          GameRoutine_740080((__int64)v20, a2, a3 - v15, &a4[v15], a3 - v15);
      if (v21 != 0) {
        v22 = v20;
        v23 = a4;
        v24 = a2;
        v25 = (__int64*)v16;
        while (v22 != a2) {
          v26 = *v22;
          v27 = *(unsigned __int8*)(*v22 + 56);
          v28 = *(unsigned __int8*)(*v25 + 56);
          if (v27 > v28) {
            v29 = 8;
          }
          else {
            v26 = *v25;
            v29 = 0;
          }
          v22 = (__int64*)((char*)v22 + v29);
          if (v27 <= v28) {
            v30 = 8;
          }
          else {
            v30 = 0;
          }
          *v23++ = v26;
          v25 = (__int64*)((char*)v25 + v30);
          if (v25 == v20) {
            goto LABEL_38;
          }
        }
        while (v25 != v20) {
          v31 = *v25++;
          *v23++ = v31;
        }
      }
      else {
        v22 = v20;
        v23 = a4;
        v24 = a2;
      LABEL_38:
        while (v22 != v24) {
          v32 = *v22++;
          *v23++ = v32;
        }
      }
    }
    else if ((__int64*)result != a2) {
      v6 = *(_QWORD*)result;
      result += 8;
      *a4 = v6;
      if ((__int64*)result != a2) {
        v7 = 0;
        v8 = a4;
        v9 = a4;
        do {
          v11 = *v9++;
          v10 = v11;
          if (*(unsigned __int8*)(*(_QWORD*)result + 56LL) <=
              (unsigned int)*(unsigned __int8*)(v11 + 56)) {
            *v9 = *(_QWORD*)result;
          }
          else {
            v8[1] = v10;
            v12 = a4;
            if (v8 != a4) {
              v13 = v7;
              while (1) {
                v12 = (__int64*)((char*)a4 + v13);
                v14 = *(__int64*)((char*)a4 + v13 - 8);
                if (*(unsigned __int8*)(*(_QWORD*)result + 56LL) <=
                    (unsigned int)*(unsigned __int8*)(v14 + 56)) {
                  break;
                }
                v13 -= 8;
                *v12 = v14;
                if (v13 == 0) {
                  v12 = a4;
                  break;
                }
              }
            }
            *v12 = *(_QWORD*)result;
          }
          result += 8;
          v7 += 8;
          v8 = v9;
        } while ((__int64*)result != a2);
      }
    }
  }
  return result;
}

char* GameHr_7404e0(char* result, char* a2, char* a3, __int64 a4, __int64 a5,
                    __int64 a6, __int64 a7)
{
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  char* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  char* v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  char* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  char* v26;
  char* v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  char* v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  unsigned int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  __int64 v51;
  char* v52;
  __int64 v53;

  if (a5 != 0) {
    while (a4 > a7 && a5 > a7) {
      if (a4 == 0) {
        return result;
      }
      v9 = 0;
      v10 = 0;
      while (1) {
        v11 = *(_QWORD*)&result[8 * v10];
        if (*(unsigned __int8*)(*(_QWORD*)a2 + 56LL) >
            (unsigned int)*(unsigned __int8*)(v11 + 56)) {
          break;
        }
        ++v10;
        v9 -= 8;
        if (a4 == v10) {
          return result;
        }
      }
      v12 = a4 - v10;
      v53 = a6;
      v51 = a7;
      v52 = a3;
      v50 = &result[-v9];
      if (a4 - v10 >= a5) {
        if (a4 - 1 == v10) {
          *(_QWORD*)&result[8 * v10] = *(_QWORD*)a2;
          *(_QWORD*)a2 = v11;
          return result;
        }
        v22 = v12 / 2;
        v23 = &result[8 * (v12 / 2)];
        if (a3 == a2) {
          v14 = a3;
          v29 = a3;
        }
        else {
          v24 = (a3 - a2) >> 3;
          v14 = a2;
          do {
            v25 = v24 >> 1;
            v26 = &v14[8 * (v24 >> 1)];
            v28 = *(_QWORD*)v26;
            v27 = v26 + 8;
            v24 += ~(v24 >> 1);
            if (*(unsigned __int8*)(v28 + 56) >
                (unsigned int)*(unsigned __int8*)(*(_QWORD*)&v23[8 * v10] +
                                                  56LL)) {
              v14 = v27;
            }
            else {
              v24 = v25;
            }
          } while (v24 != 0);
          v29 = a2;
        }
        v15 = &v23[-v9];
        v13 = (v14 - v29) >> 3;
      }
      else {
        v13 = a5 / 2;
        v14 = &a2[8 * (a5 / 2)];
        if (&result[-v9] == a2) {
          v15 = a2;
          v21 = a2;
        }
        else {
          v15 = &result[-v9];
          v16 = (a2 - result + v9) >> 3;
          do {
            v17 = v16 >> 1;
            v18 = &v15[8 * (v16 >> 1)];
            v20 = *(_QWORD*)v18;
            v19 = v18 + 8;
            v16 += ~(v16 >> 1);
            if (*(unsigned __int8*)(*(_QWORD*)v14 + 56LL) >
                (unsigned int)*(unsigned __int8*)(v20 + 56)) {
              v16 = v17;
            }
            else {
              v15 = v19;
            }
          } while (v16 != 0);
          v21 = &result[-v9];
        }
        v22 = (v15 - v21) >> 3;
      }
      v30 = a5 - v13;
      v31 = a4;
      v32 = a5;
      v33 = a4 - v22 - v10;
      v34 = GameRoutine_6bea40_alt1(v15, a2, v14);
      v35 = v34;
      if (v22 + v13 >= v32 + v31 - (v22 + v13) - v10) {
        a7 = v51;
        a6 = v53;
        GameHr_7404e0(v34, v14, v52, v33, v30, v53, v51);
        result = v50;
        v14 = v15;
        v30 = v13;
        v33 = v22;
        a3 = v35;
      }
      else {
        a7 = v51;
        a6 = v53;
        GameHr_7404e0(v50, v15, v34, v22, v13, v53, v51);
        a3 = v52;
        result = v35;
      }
      a4 = v33;
      a5 = v30;
      a2 = v14;
      if (v30 == 0) {
        return result;
      }
    }
    if (a4 <= a5) {
      if (result != a2) {
        v39 = -a6;
        v40 = (_QWORD*)a6;
        v41 = result;
        do {
          v42 = *(_QWORD*)v41;
          v41 += 8;
          v39 -= 8;
          *v40++ = v42;
        } while (v41 != a2);
        while (a2 != a3) {
          v43 = *(_QWORD*)a2;
          v44 = *(unsigned __int8*)(*(_QWORD*)a2 + 56LL);
          v45 = *(unsigned __int8*)(*(_QWORD*)a6 + 56LL);
          if (v44 > v45) {
            v46 = 8;
          }
          else {
            v43 = *(_QWORD*)a6;
            v46 = 0;
          }
          a2 += v46;
          if (v44 <= v45) {
            v47 = 8;
          }
          else {
            v47 = 0;
          }
          *(_QWORD*)result = v43;
          result += 8;
          a6 += v47;
          if (v40 == (_QWORD*)a6) {
            return result;
          }
        }
        return (char*)memmove((__int64)result, a6, -(a6 + v39));
      }
    }
    else if (a2 != a3) {
      v36 = 0;
      do {
        *(_QWORD*)(a6 + v36) = *(_QWORD*)&a2[v36];
        v36 += 8;
      } while (&a2[v36] != a3);
      v37 = a6 + v36;
      while (a2 != result) {
        v38 = *((_QWORD*)a2 - 1);
        if (*(unsigned __int8*)(*(_QWORD*)(v37 - 8) + 56LL) >
            (unsigned int)*(unsigned __int8*)(v38 + 56)) {
          a2 -= 8;
        }
        else {
          v38 = *(_QWORD*)(v37 - 8);
          v37 -= 8;
        }
        *((_QWORD*)a3 - 1) = v38;
        a3 -= 8;
        if (v37 == a6) {
          return result;
        }
      }
      if (a6 != v37) {
        v48 = -8;
        do {
          v49 = *(_QWORD*)(v37 - 8);
          v37 -= 8;
          *(_QWORD*)&a3[v48] = v49;
          v48 -= 8;
        } while (v37 != a6);
      }
    }
  }
  return result;
}

__int64 GameHr_741740(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 result;
  __int64* v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64* v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;

  v2 = *a2;
  result = GameRoutine_6c8530(*a2);
  if (*(_BYTE*)(result + 51) == 1) {
    v5 = *(__int64**)(a1 + 16);
    v7 = (_QWORD*)v5[1];
    v6 = v5[2];
    if ((unsigned __int64)v7 >= v6) {
      v8 = *v5;
      v9 = (__int64)v7 - *v5;
      v10 = (v9 >> 3) + 1;
      if (v10 >> 61 == 0) {
        v11 = v6 - v8;
        if (v11 >> 2 > v10) {
          v10 = v11 >> 2;
        }
        if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF8LL) {
          v12 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v12 = v10;
        }
        if (v12 == 0) {
          v13 = 0;
          goto LABEL_24;
        }
        if (v12 >> 61 == 0) {
          v13 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v12, 16, 0);
        LABEL_24:
          v22 = v13 + 8 * v12;
          v23 = v13 + v9 - 8 * (v9 >> 3);
          *(_QWORD*)(v13 + v9) = v2;
          v15 = v13 + v9 + 8;
          result = GameRoutine_1a0b950(v23, v8, v9);
          *v5 = v23;
          v5[1] = v15;
          v5[2] = v22;
          if (v8 == 0) {
            goto LABEL_32;
          }
          v24 = GameData_2265ee0;
          goto LABEL_29;
        }
      LABEL_34:
        GameRoutine_60a210(result);
      }
    LABEL_33:
      GameRoutine_740050();
    }
  LABEL_13:
    *v7 = v2;
    v15 = (__int64)(v7 + 1);
    goto LABEL_32;
  }
  v5 = *(__int64**)(a1 + 8);
  v7 = (_QWORD*)v5[1];
  v14 = v5[2];
  if ((unsigned __int64)v7 < v14) {
    goto LABEL_13;
  }
  v8 = *v5;
  v16 = (__int64)v7 - *v5;
  v17 = (v16 >> 3) + 1;
  if (v17 >> 61 != 0) {
    goto LABEL_33;
  }
  v18 = v14 - v8;
  v19 = (__int64*)GameData_212bf68;
  if (v18 >> 2 > v17) {
    v17 = v18 >> 2;
  }
  if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF8LL) {
    v20 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v20 = v17;
  }
  if (v20 != 0) {
    if (v20 >> 61 != 0) {
      goto LABEL_34;
    }
    v21 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v20, 16, 0);
  }
  else {
    v21 = 0;
  }
  v25 = v21 + 8 * v20;
  v26 = v21 + v16 - 8 * (v16 >> 3);
  *(_QWORD*)(v21 + v16) = v2;
  v15 = v21 + v16 + 8;
  result = GameRoutine_1a0b950(v26, v8, v16);
  *v5 = v26;
  v5[1] = v15;
  v5[2] = v25;
  if (v8 != 0) {
    v24 = *v19;
  LABEL_29:
    v27 = 128;
    if (*(_QWORD*)(v24 + 200) == 0) {
      v27 = 56;
    }
    result = GameRoutine_1a0a4e0(v24 + v27, v8);
  }
LABEL_32:
  v5[1] = v15;
  return result;
}

_QWORD* GameHr_742cc0(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;

  if (result != nullptr) {
    v1 = result;
    GameHr_742cc0(*result);
    GameHr_742cc0(v1[1]);
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v2 = 56;
    }
    return (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v2, v1);
  }
  return result;
}

__int64 GameHr_7435e0()
{
  __int64 v0;
  __int64 v1;
  _BYTE* v2;
  __int64 result;
  __int64 v4;

  v0 = GameRoutine_8224a0(26);
  if (GameData_21caab0 != 0) {
    v1 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v0);
    if (v1 != 0 && *(_DWORD*)(v1 + 32) == 1) {
      return 1;
    }
  }
  v2 = *(_BYTE**)GameData_212c470;
  if ((*(_BYTE*)(*(_QWORD*)GameData_212c470 + 944LL) & 9) != 0) {
    return 1;
  }
  if (v2[807] == 1 &&
      ((v2[804] & 1) != 0 ||
       v2[940] == 1 && (v2[805] & 1) != 0 && (v2[806] & 1) != 0)) {
  LABEL_15:
    if ((v2[804] & 1) != 0 ||
        v2[940] == 1 && v2[805] == 1 && (v2[806] & 1) != 0) {
      v4 = 760;
      return v2[v4] & 1;
    }
  LABEL_20:
    if (v2[903] != 1 ||
        (v2[900] & 1) == 0 && (v2[940] != 1 || v2[901] != 1 || v2[902] != 1)) {
      return 0;
    }
    v4 = 856;
    return v2[v4] & 1;
  }
  if (v2[903] != 1) {
    return 0;
  }
  if ((v2[900] & 1) != 0) {
    goto LABEL_14;
  }
  result = 0;
  if (v2[940] == 1 && (v2[901] & 1) != 0) {
    if (v2[902] == 1) {
    LABEL_14:
      if (v2[807] == 0) {
        goto LABEL_20;
      }
      goto LABEL_15;
    }
    return 0;
  }
  return result;
}

__int64 GameHr_743760(__int64 a1)
{
  __int64 result;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  if (*GameData_212cfd0[0] == 0) {
    *GameData_212cfd0[0] = a1;
    GameData_21cfa68 = 1;
  }
  *(_BYTE*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 44) = 0;
  *(_DWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = GameData_1f94e30;
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
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_BYTE*)(a1 + 312) = 0;
  *(_DWORD*)(a1 + 314) = 2559;
  *(_BYTE*)(a1 + 313) = -1;
  *(_DWORD*)(a1 + 320) = 0;
  *(_WORD*)(a1 + 318) = -1;
  result = GameRoutine_844ee0(a1 + 328);
  *(_BYTE*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 12680) = 0;
  *(_QWORD*)(a1 + 12688) = 0;
  *(_QWORD*)(a1 + 12696) = 0;
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
  *(_QWORD*)(a1 + 12) = -1;
  *(_QWORD*)(a1 + 24) = -1;
  *(_QWORD*)(a1 + 32) = -1;
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
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_DWORD*)(a1 + 40) = -1;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_BYTE*)(a1 + 312) = 0;
  *(_DWORD*)(a1 + 314) = 2559;
  *(_BYTE*)(a1 + 313) = -1;
  *(_DWORD*)(a1 + 320) = 0;
  *(_WORD*)(a1 + 318) = -1;
  *(_DWORD*)(a1 + 12620) = 0;
  *(_QWORD*)(a1 + 56) = 0xFFFFFFFF00000000LL;
  *(_QWORD*)(a1 + 64) = 0;
  if (*(_QWORD*)(a1 + 12648) != 0) {
    v3 = *(_QWORD**)(a1 + 12640);
    if (v3 != nullptr) {
      v4 = GameData_212bf68;
      do {
        v5 = (_QWORD*)*v3;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)v4 + v6, v3);
        v3 = v5;
      } while (v5 != nullptr);
    }
    v7 = *(_QWORD*)(a1 + 12632);
    *(_QWORD*)(a1 + 12640) = 0;
    if (v7 != 0) {
      v8 = v7 & 7;
      if (v7 >= 8) {
        v10 = v7 & 0xFFFFFFFFFFFFFFF8LL;
        v9 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v9) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v9 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v9 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v9 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v9 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v9 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + 8 * v9 + 48) = 0;
          v11 = *(_QWORD*)(a1 + 12624) + 8 * v9;
          v9 += 8;
          *(_QWORD*)(v11 + 56) = 0;
        } while (v10 != v9);
      }
      else {
        v9 = 0;
      }
      if (v8 != 0) {
        v12 = 8 * v9;
        do {
          --v8;
          *(_QWORD*)(*(_QWORD*)(a1 + 12624) + v12) = 0;
          v12 += 8;
        } while (v8 != 0);
      }
    }
    v13 = *(_QWORD*)(a1 + 12688);
    v14 = *(_QWORD*)(a1 + 12680);
    *(_QWORD*)(a1 + 12648) = 0;
    *(_DWORD*)(a1 + 12664) = 0;
    if (v13 != v14) {
      *(_QWORD*)(a1 + 12688) = v14;
    }
  }
  else {
    *(_DWORD*)(a1 + 12664) = 0;
  }
  return result;
}

_QWORD* GameHr_743a00(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  *((_BYTE*)result + 8) = 0;
  result[1584] = 0;
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
  *(_QWORD*)((char*)result + 12) = -1;
  result[3] = -1;
  result[4] = -1;
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
  *((_DWORD*)result + 10) = -1;
  *((_BYTE*)result + 312) = 0;
  *((_DWORD*)result + 80) = 0;
  *((_DWORD*)result + 3155) = 0;
  result[7] = 0xFFFFFFFF00000000LL;
  result[8] = 0;
  *(_DWORD*)((char*)result + 314) = 2559;
  *((_BYTE*)result + 313) = -1;
  *((_WORD*)result + 159) = -1;
  if (result[1581] != 0) {
    v1 = (_QWORD*)result[1580];
    v2 = result;
    if (v1 != nullptr) {
      v3 = GameData_212bf68;
      do {
        v4 = (_QWORD*)*v1;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)v3 + v5, v1);
        v1 = v4;
      } while (v4 != nullptr);
    }
    v6 = v2[1579];
    result = v2;
    v2[1580] = 0;
    if (v6 != 0) {
      v7 = v6 & 7;
      if (v6 >= 8) {
        v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(v2[1578] + 8 * v8) = 0;
          *(_QWORD*)(v2[1578] + 8 * v8 + 8) = 0;
          *(_QWORD*)(v2[1578] + 8 * v8 + 16) = 0;
          *(_QWORD*)(v2[1578] + 8 * v8 + 24) = 0;
          *(_QWORD*)(v2[1578] + 8 * v8 + 32) = 0;
          *(_QWORD*)(v2[1578] + 8 * v8 + 40) = 0;
          *(_QWORD*)(v2[1578] + 8 * v8 + 48) = 0;
          v10 = v2[1578] + 8 * v8;
          v8 += 8;
          *(_QWORD*)(v10 + 56) = 0;
        } while (v9 != v8);
      }
      else {
        v8 = 0;
      }
      if (v7 != 0) {
        v11 = 8 * v8;
        do {
          --v7;
          *(_QWORD*)(v2[1578] + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    v2[1581] = 0;
  }
  v12 = result[1586];
  v13 = result[1585];
  *((_DWORD*)result + 3166) = 0;
  if (v12 != v13) {
    result[1586] = v13;
  }
  return result;
}

__int64 GameHr_7475c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6)
{
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
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 result;

  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 2656) = 0;
  *(_QWORD*)(a1 + 2664) = 0;
  *(_QWORD*)a1 = GameData_1f95010;
  *(_QWORD*)(a1 + 1104) = GameData_1f95160;
  *(_QWORD*)(a1 + 2672) = 0;
  *(_QWORD*)(a1 + 2720) = 0;
  *(_QWORD*)(a1 + 2728) = 0;
  *(_QWORD*)(a1 + 72) = GameData_1f95140;
  *(_QWORD*)(a1 + 2752) = GameData_1f95140;
  *(_QWORD*)(a1 + 5432) = GameData_1f95140;
  *(_QWORD*)(a1 + 8112) = GameData_1f95140;
  v7 = *(_QWORD*)(a1 + 40);
  *(_DWORD*)(a1 + 16) = 0;
  v8 = a1 + 16;
  *(_QWORD*)(a1 + 2736) = 0;
  *(_QWORD*)(a1 + 3784) = GameData_1f95160;
  *(_QWORD*)(a1 + 5336) = 0;
  *(_QWORD*)(a1 + 5344) = 0;
  *(_QWORD*)(a1 + 5352) = 0;
  *(_QWORD*)(a1 + 5400) = 0;
  *(_QWORD*)(a1 + 5408) = 0;
  *(_QWORD*)(a1 + 5416) = 0;
  *(_QWORD*)(a1 + 6464) = GameData_1f95160;
  *(_QWORD*)(a1 + 8032) = 0;
  *(_QWORD*)(a1 + 8024) = 0;
  *(_QWORD*)(a1 + 8016) = 0;
  *(_QWORD*)(a1 + 8096) = 0;
  *(_QWORD*)(a1 + 8088) = 0;
  *(_QWORD*)(a1 + 8080) = 0;
  *(_QWORD*)(a1 + 9144) = GameData_1f95160;
  *(_QWORD*)(a1 + 10712) = 0;
  *(_QWORD*)(a1 + 10704) = 0;
  *(_QWORD*)(a1 + 10696) = 0;
  *(_QWORD*)(a1 + 10736) = 0;
  *(_QWORD*)(a1 + 10744) = 0;
  *(_QWORD*)(a1 + 10752) = 0;
  *(_QWORD*)(a1 + 10760) = 0;
  *(_QWORD*)(a1 + 10768) = 0;
  *(_QWORD*)(a1 + 10776) = 0;
  *(_QWORD*)(a1 + 8) = a1 + 16;
  *(_WORD*)(a1 + 20) = 9;
  *(_QWORD*)(a1 + 24) = 0x100000000LL;
  *(_DWORD*)(a1 + 32) = 0;
  *(_DWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 48) = v7;
  *(_QWORD*)(a1 + 56) = 0;
  GameRoutine_1a0ba50(a1 + 80, 255, 1024, a4, a5, a6);
  GameRoutine_1a0ba50(v8 + 1096, 0, 1536, v9, v10, v11);
  v12 = *(_QWORD*)(a1 + 2656);
  *(_DWORD*)(v8 + 2632) = 0;
  *(_QWORD*)(v8 + 2664) = 0;
  *(_QWORD*)(v8 + 2672) = 0;
  *(_DWORD*)(v8 + 2680) = 0;
  *(_WORD*)(v8 + 2684) = 9;
  *(_QWORD*)(v8 + 2688) = 0x100000000LL;
  *(_DWORD*)(v8 + 2696) = 0;
  *(_DWORD*)(v8 + 2728) = 0;
  *(_QWORD*)(a1 + 2664) = v12;
  *(_QWORD*)(a1 + 2728) = *(_QWORD*)(a1 + 2720);
  GameRoutine_1a0ba50(v8 + 2744, 255, 1024, v13, v14, v15);
  GameRoutine_1a0ba50(v8 + 3776, 0, 1536, v16, v17, v18);
  v19 = *(_QWORD*)(a1 + 5336);
  *(_DWORD*)(v8 + 5312) = 0;
  *(_QWORD*)(v8 + 5344) = 0;
  *(_QWORD*)(v8 + 5352) = 0;
  *(_DWORD*)(v8 + 5360) = 0;
  *(_WORD*)(v8 + 5364) = 9;
  *(_QWORD*)(v8 + 5368) = 0x100000000LL;
  *(_DWORD*)(v8 + 5376) = 0;
  *(_DWORD*)(v8 + 5408) = 0;
  *(_QWORD*)(a1 + 5344) = v19;
  *(_QWORD*)(a1 + 5408) = *(_QWORD*)(a1 + 5400);
  GameRoutine_1a0ba50(v8 + 5424, 255, 1024, v20, v21, v22);
  *(_QWORD*)(v8 + 8024) = 0;
  *(_QWORD*)(v8 + 8032) = 0;
  *(_DWORD*)(v8 + 8040) = 0;
  GameRoutine_1a0ba50(v8 + 6456, 0, 1540, v23, v24, v25);
  *(_WORD*)(v8 + 8044) = 9;
  *(_QWORD*)(v8 + 8048) = 0x100000000LL;
  *(_DWORD*)(v8 + 8056) = 0;
  *(_QWORD*)(a1 + 8088) = 0;
  *(_DWORD*)(v8 + 8088) = 0;
  GameRoutine_1a0ba50(v8 + 8104, 255, 1024, v26, v27, v28);
  *(_QWORD*)(v8 + 10704) = 0;
  *(_QWORD*)(v8 + 10712) = 0;
  result = GameRoutine_1a0ba50(v8 + 9136, 0, 1540, v29, v30, v31);
  *(_QWORD*)(v8 + 12836) = -1;
  *(_QWORD*)(v8 + 12844) = -1;
  *(_DWORD*)(v8 + 12852) = -1;
  return result;
}

__int64 GameHr_747a00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5;
  unsigned int v8;
  unsigned int v9;
  char v11;
  char* v13;
  char* v14;

  LODWORD(v5) = a2 + 32 * a3;
  if ((unsigned int)v5 >= 0x400) {
    v5 = 0;
  }
  else {
    v5 = (unsigned int)v5;
  }
  if (*(unsigned __int8*)(a1 + v5 + 64) == 255 ||
      (v8 = a3, v9 = a2,
       (unsigned int)GameRoutine_747df0(a1, a2, a3,
                                        *(unsigned __int8*)(a1 + 5)) == 255)) {
    v11 = 0;
    return v11 & 1;
  }
  if (*(int*)(a1 + 2632) >= 2) {
    v13 = *(char**)(a1 + 2640);
    v14 = *(char**)(a1 + 2648);
    if (v13 == v14) {
      v11 = 1;
    }
    else {
      do {
        v11 = GameRoutine_747b10(a1, a5 & 1, v9 + *v13, v8 + v13[1], a4);
        if ((v11 & 1) == 0) {
          break;
        }
        v13 += 4;
      } while (v13 != v14);
    }
    return v11 & 1;
  }
  return GameRoutine_747b10(a1, a5 & 1, v9, v8, a4);
}

__int64 GameHr_747df0(__int64 a1, int a2, int a3, unsigned __int8 a4)
{
  __int64* v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
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
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 result;
  int v31;
  __int64 v32;
  int v33;
  unsigned int v34;
  int v35;

  v6 = GameData_212cfb8[0];
  v7 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
  v8 = a2 + 32 * a3;
  if (v8 >= 0x400) {
    v9 = 0;
  }
  else {
    v9 = v8;
  }
  v10 = *(__int16*)(v7 + 2LL * (unsigned int)v9 + 16488);
  v11 = GameData_212c930;
  if (v10 < 0 || (v12 = *(_QWORD*)(v7 + 8)) == 0 ||
      (v13 = v12 + 144LL * (unsigned int)v10,
       ((*(__int64 (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13) & 1) == 0) ||
      (v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 224LL))(v13)) == 0 ||
      (v15 = v14, (GameRoutine_68ea90(v14, a1 + 24) & 1) == 0) ||
      (v16 = GameRoutine_68e840(v15, a1 + 24)) == 0) {
    v16 = GameRoutine_68e840(
        *(_QWORD*)(*(_QWORD*)(*v11 + 64) +
                   8LL * *(unsigned __int16*)(*(_QWORD*)(*GameData_212ce98[0] +
                                                         72) +
                                              2 * v9 + 8)),
        a1 + 24);
  }
  if (a4 != 8) {
    v18 = *(_QWORD*)(*v6 + 16);
    v19 = *(__int16*)(v18 + 2 * v9 + 104);
    if ((v19 & 0x8000000000000000LL) == 0 && (v20 = *(_QWORD*)(v18 + 8)) != 0 &&
            (v21 = v20 + 144LL * (unsigned int)v19,
             (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v21 + 40LL))(v21) ==
                 2) &&
            ((*(__int64 (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21) & 1) != 0 &&
            (v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 224LL))(v21)) !=
                0 ||
        (v22 = **(_QWORD**)(*v11 + 64)) != 0) {
      v17 = GameRoutine_68e840(v22, a1 + 24);
      if ((*(_BYTE*)(a1 + 1) & 0x80) == 0) {
        goto LABEL_21;
      }
    }
    else {
      v17 = 0;
      if ((*(_BYTE*)(a1 + 1) & 0x80) == 0) {
        goto LABEL_21;
      }
    }
  LABEL_29:
    v29 = **(_QWORD**)(*v11 + 64);
    goto LABEL_30;
  }
  v17 = **(_QWORD**)(*v11 + 64);
  if ((*(_BYTE*)(a1 + 1) & 0x80) != 0) {
    goto LABEL_29;
  }
LABEL_21:
  v23 = *(_QWORD*)(*v6 + 16);
  v24 = *(__int16*)(v23 + 2 * v9 + 12392);
  if (v24 < 0 || (v25 = *(_QWORD*)(v23 + 8)) == 0 ||
      (v26 = *(unsigned __int8*)(a1 + 4), v27 = v25 + 144LL * (unsigned int)v24,
       ((*(__int64 (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27) & 1) == 0) ||
      v26 == (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v27 + 168LL))(v27) ||
      (v28 = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 224LL))(v27)) == 0) {
    v28 = **(_QWORD**)(*v11 + 64);
  }
  v29 = GameRoutine_68e840(v28, a1 + 24);
LABEL_30:
  if (*(_BYTE*)(v29 + 57) == 14) {
    return 255;
  }
  v31 = *(unsigned __int8*)(v17 + 76);
  if (*(_WORD*)(v17 + 16) != 0) {
    v32 = *(_QWORD*)(v17 + 48);
    if (*(_WORD*)(v32 + 16) != 0) {
      result = *(unsigned __int8*)(v32 + a4 + 32);
      v33 = *(_DWORD*)(a1 + 16);
      if (v33 == 0) {
        return result;
      }
      goto LABEL_42;
    }
  }
  if (*(int*)(a1 + 12) > 1) {
    v31 = 0;
  }
  v34 = v31 + *(unsigned __int8*)(*(_QWORD*)(v16 + 48) + a4 + 32LL);
  if (v34 >= 0xFF) {
    result = 255;
  }
  else {
    result = v34;
  }
  v33 = *(_DWORD*)(a1 + 16);
  if (v33 != 0) {
  LABEL_42:
    if ((_DWORD)result != 0 && (_DWORD)result != 255) {
      v35 = v33 + result;
      if (v35 <= 1) {
        v35 = 1;
      }
      if (v35 >= 255) {
        return 255;
      }
      else {
        return (unsigned int)v35;
      }
    }
  }
  return result;
}

__int64 GameHr_7484f0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;

  v6 = *(_QWORD*)(a1 + 8);
  *(_WORD*)(v6 + 4) = 9;
  *(_DWORD*)v6 = 0;
  *(_DWORD*)(v6 + 16) = 0;
  *(_DWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 8) = 0x100000000LL;
  *(_QWORD*)(v6 + 32) = *(_QWORD*)(v6 + 24);
  GameRoutine_1a0ba50(v6 + 64, 255, 1024, a4, a5, a6);
  result = GameRoutine_1a0ba50(v6 + 1096, 0, 1536, v7, v8, v9);
  v11 = *(_QWORD*)(v6 + 2640);
  *(_DWORD*)(v6 + 2632) = 0;
  *(_QWORD*)(v6 + 2664) = 0;
  *(_QWORD*)(v6 + 2672) = 0;
  *(_QWORD*)(v6 + 2648) = v11;
  return result;
}

__int64 GameHr_74a6c0(__int64 result, char** a2, __int64 a3,
                      unsigned __int64 a4, int a5)
{
  __int64* v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  bool v12;
  unsigned int v13;
  int v14;
  unsigned int v16;
  int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  char* v23;
  char* v24;
  __int64* v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  unsigned int v45;
  int v46;
  int v47;
  unsigned int v48;

  v5 = GameData_212ce98[0];
  v6 = *(_QWORD*)(result + 8) + 2120LL;
  v7 = *GameData_212ce98[0];
  if (a5 != 255) {
    v23 = *a2;
    v24 = a2[1];
    if (*a2 == v24) {
      return result;
    }
    v25 = GameData_212c930;
    while (1) {
      v26 = *v23;
      v27 = v23[1];
      v28 = v26 - a5;
      v29 = *(unsigned __int8*)(*v5 + 31);
      if (v26 - a5 <= *(unsigned __int8*)(*v5 + 28)) {
        v28 = *(unsigned __int8*)(*v5 + 28);
      }
      v30 = v27 - a5;
      if (v27 - a5 <= *(unsigned __int8*)(*v5 + 29)) {
        v30 = *(unsigned __int8*)(*v5 + 29);
      }
      v31 = *(_DWORD*)(a3 + 592) + a5;
      v32 = v31 + v26;
      result = (unsigned int)(v31 + v27);
      if (v32 >= *(unsigned __int8*)(*v5 + 30)) {
        v32 = *(unsigned __int8*)(*v5 + 30);
      }
      if ((int)result < v29) {
        v29 = result;
      }
      if (v30 <= v29 && v28 <= v32) {
        break;
      }
    LABEL_17:
      v23 += 2;
      if (v23 == v24) {
        return result;
      }
    }
  LABEL_33:
    result = (unsigned int)(32 * v30);
    v34 = v28;
    while (1) {
      v35 = *(_DWORD*)(a3 + 592);
      v36 = *v23;
      v37 = v23[1];
      if ((unsigned int)(v35 * v35) < 2) {
        break;
      }
      if (v35 >= 1) {
        v38 = v35 + v37;
        v39 = v35 + v36;
        v40 = 10000;
        do {
          v41 = v30 - v37;
          v42 = v34 - v36;
          v43 = *v23;
          if (v30 - v37 < 0) {
            v41 = v37 - v30;
          }
          do {
            ++v43;
            if (v42 >= 0) {
              v44 = v42;
            }
            else {
              v44 = -v42;
            }
            --v42;
            v45 = v44 + v41;
            if (v45 < v40) {
              v40 = v45;
            }
          } while (v43 < v39);
          ++v37;
        } while (v37 < v38);
        goto LABEL_54;
      }
      LOBYTE(v40) = 16;
      if (a5 >= 10000) {
      LABEL_55:
        if (((a4 >> v40) & 1) != 0) {
          v48 = v34 + result;
          if ((unsigned int)(v34 + result) >= 0x400) {
            v48 = 0;
          }
          if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v25 + 64) +
                                    8LL * *(unsigned __int16*)(*(_QWORD*)(v7 +
                                                                          72) +
                                                               2LL * v48 + 8)) +
                         216LL) &
               8) == 0) {
            *(_DWORD*)(v6 + 4LL * ((v30 + ((unsigned int)v34 >> 5)) &
                                   0x7FFFFFF)) |= 1 << v34;
          }
        }
      }
    LABEL_34:
      v12 = v34++ < v32;
      if (!v12) {
        v12 = v30++ < v29;
        if (!v12) {
          goto LABEL_17;
        }
        goto LABEL_33;
      }
    }
    v46 = v34 - v36;
    if (v46 < 0) {
      v46 = -v46;
    }
    v47 = v30 - v37;
    if (v47 < 0) {
      v47 = -v47;
    }
    v40 = v47 + v46;
  LABEL_54:
    if (v40 <= a5) {
      goto LABEL_55;
    }
    goto LABEL_34;
  }
  v8 = *(unsigned __int8*)(v7 + 28);
  v9 = *(unsigned __int8*)(v7 + 29);
  v10 = *(unsigned __int8*)(v7 + 30);
  v11 = *(unsigned __int8*)(v7 + 31);
  v12 = v9 > v11 || v8 > v10;
  if (!v12) {
    v13 = v10 - v8;
    v14 = -v10;
    do {
      v16 = v8;
      if ((((_BYTE)v13 + 1) & 7) != 0) {
        v17 = ((_BYTE)v13 + 1) & 7;
        v16 = v8;
        do {
          v18 = v9 + (v16 >> 5);
          v19 = 1 << v16++;
          --v17;
          result = v18 & 0x7FFFFFF;
          *(_DWORD*)(v6 + 4LL * (unsigned int)result) |= v19;
        } while (v17 != 0);
      }
      if (v13 >= 7) {
        v20 = v16 + 7;
        do {
          *(_DWORD*)(v6 + 4LL * ((v9 + ((v20 - 7) >> 5)) & 0x7FFFFFF)) |=
              1 << (v20 - 7);
          *(_DWORD*)(v6 + 4LL * ((v9 + ((v20 - 6) >> 5)) & 0x7FFFFFF)) |=
              1 << (v20 - 6);
          *(_DWORD*)(v6 + 4LL * ((v9 + ((v20 - 5) >> 5)) & 0x7FFFFFF)) |=
              1 << (v20 - 5);
          *(_DWORD*)(v6 + 4LL * ((v9 + ((v20 - 4) >> 5)) & 0x7FFFFFF)) |=
              1 << (v20 - 4);
          *(_DWORD*)(v6 + 4LL * ((v9 + ((v20 - 3) >> 5)) & 0x7FFFFFF)) |=
              1 << (v20 - 3);
          *(_DWORD*)(v6 + 4LL * ((v9 + ((v20 - 2) >> 5)) & 0x7FFFFFF)) |=
              1 << (v20 - 2);
          *(_DWORD*)(v6 + 4LL * ((v9 + ((v20 - 1) >> 5)) & 0x7FFFFFF)) |=
              1 << (v20 - 1);
          v21 = v9 + (v20 >> 5);
          v22 = 1 << v20;
          v20 += 8;
          v21 &= 0x7FFFFFFu;
          result = *(unsigned int*)(v6 + 4LL * v21);
          *(_DWORD*)(v6 + 4LL * v21) = v22 | result;
        } while (v14 + v20 != 8);
      }
    } while (v9++ != v11);
  }
  return result;
}

__int64 GameHr_74aa60(__int64 result, char** a2, __int64 a3,
                      unsigned __int64 a4, int a5)
{
  __int64* v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  bool v12;
  unsigned int v13;
  int v14;
  unsigned int v16;
  int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  char* v23;
  char* v24;
  __int64* v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  unsigned int v45;
  int v46;
  int v47;
  unsigned int v48;

  v5 = GameData_212ce98[0];
  v6 = *(_QWORD*)(result + 8) + 2248LL;
  v7 = *GameData_212ce98[0];
  if (a5 != 255) {
    v23 = *a2;
    v24 = a2[1];
    if (*a2 == v24) {
      return result;
    }
    v25 = GameData_212c930;
    while (1) {
      v26 = *v23;
      v27 = v23[1];
      v28 = v26 - a5;
      v29 = *(unsigned __int8*)(*v5 + 31);
      if (v26 - a5 <= *(unsigned __int8*)(*v5 + 28)) {
        v28 = *(unsigned __int8*)(*v5 + 28);
      }
      v30 = v27 - a5;
      if (v27 - a5 <= *(unsigned __int8*)(*v5 + 29)) {
        v30 = *(unsigned __int8*)(*v5 + 29);
      }
      v31 = *(_DWORD*)(a3 + 592) + a5;
      v32 = v31 + v26;
      result = (unsigned int)(v31 + v27);
      if (v32 >= *(unsigned __int8*)(*v5 + 30)) {
        v32 = *(unsigned __int8*)(*v5 + 30);
      }
      if ((int)result < v29) {
        v29 = result;
      }
      if (v30 <= v29 && v28 <= v32) {
        break;
      }
    LABEL_17:
      v23 += 2;
      if (v23 == v24) {
        return result;
      }
    }
  LABEL_33:
    result = (unsigned int)(32 * v30);
    v34 = v28;
    while (1) {
      v35 = *(_DWORD*)(a3 + 592);
      v36 = *v23;
      v37 = v23[1];
      if ((unsigned int)(v35 * v35) < 2) {
        break;
      }
      if (v35 >= 1) {
        v38 = v35 + v37;
        v39 = v35 + v36;
        v40 = 10000;
        do {
          v41 = v30 - v37;
          v42 = v34 - v36;
          v43 = *v23;
          if (v30 - v37 < 0) {
            v41 = v37 - v30;
          }
          do {
            ++v43;
            if (v42 >= 0) {
              v44 = v42;
            }
            else {
              v44 = -v42;
            }
            --v42;
            v45 = v44 + v41;
            if (v45 < v40) {
              v40 = v45;
            }
          } while (v43 < v39);
          ++v37;
        } while (v37 < v38);
        goto LABEL_54;
      }
      LOBYTE(v40) = 16;
      if (a5 >= 10000) {
      LABEL_55:
        if (((a4 >> v40) & 1) != 0) {
          v48 = v34 + result;
          if ((unsigned int)(v34 + result) >= 0x400) {
            v48 = 0;
          }
          if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v25 + 64) +
                                    8LL * *(unsigned __int16*)(*(_QWORD*)(v7 +
                                                                          72) +
                                                               2LL * v48 + 8)) +
                         216LL) &
               8) == 0) {
            *(_DWORD*)(v6 + 4LL * ((v30 + ((unsigned int)v34 >> 5)) &
                                   0x7FFFFFF)) |= 1 << v34;
          }
        }
      }
    LABEL_34:
      v12 = v34++ < v32;
      if (!v12) {
        v12 = v30++ < v29;
        if (!v12) {
          goto LABEL_17;
        }
        goto LABEL_33;
      }
    }
    v46 = v34 - v36;
    if (v46 < 0) {
      v46 = -v46;
    }
    v47 = v30 - v37;
    if (v47 < 0) {
      v47 = -v47;
    }
    v40 = v47 + v46;
  LABEL_54:
    if (v40 <= a5) {
      goto LABEL_55;
    }
    goto LABEL_34;
  }
  v8 = *(unsigned __int8*)(v7 + 28);
  v9 = *(unsigned __int8*)(v7 + 29);
  v10 = *(unsigned __int8*)(v7 + 30);
  v11 = *(unsigned __int8*)(v7 + 31);
  v12 = v9 > v11 || v8 > v10;
  if (!v12) {
    v13 = v10 - v8;
    v14 = -v10;
    do {
      v16 = v8;
      if ((((_BYTE)v13 + 1) & 7) != 0) {
        v17 = ((_BYTE)v13 + 1) & 7;
        v16 = v8;
        do {
          v18 = v9 + (v16 >> 5);
          v19 = 1 << v16++;
          --v17;
          result = v18 & 0x7FFFFFF;
          *(_DWORD*)(v6 + 4LL * (unsigned int)result) |= v19;
        } while (v17 != 0);
      }
      if (v13 >= 7) {
        v20 = v16 + 7;
        do {
          *(_DWORD*)(v6 + 4LL * ((v9 + ((v20 - 7) >> 5)) & 0x7FFFFFF)) |=
              1 << (v20 - 7);
          *(_DWORD*)(v6 + 4LL * ((v9 + ((v20 - 6) >> 5)) & 0x7FFFFFF)) |=
              1 << (v20 - 6);
          *(_DWORD*)(v6 + 4LL * ((v9 + ((v20 - 5) >> 5)) & 0x7FFFFFF)) |=
              1 << (v20 - 5);
          *(_DWORD*)(v6 + 4LL * ((v9 + ((v20 - 4) >> 5)) & 0x7FFFFFF)) |=
              1 << (v20 - 4);
          *(_DWORD*)(v6 + 4LL * ((v9 + ((v20 - 3) >> 5)) & 0x7FFFFFF)) |=
              1 << (v20 - 3);
          *(_DWORD*)(v6 + 4LL * ((v9 + ((v20 - 2) >> 5)) & 0x7FFFFFF)) |=
              1 << (v20 - 2);
          *(_DWORD*)(v6 + 4LL * ((v9 + ((v20 - 1) >> 5)) & 0x7FFFFFF)) |=
              1 << (v20 - 1);
          v21 = v9 + (v20 >> 5);
          v22 = 1 << v20;
          v20 += 8;
          v21 &= 0x7FFFFFFu;
          result = *(unsigned int*)(v6 + 4LL * v21);
          *(_DWORD*)(v6 + 4LL * v21) = v22 | result;
        } while (v14 + v20 != 8);
      }
    } while (v9++ != v11);
  }
  return result;
}

_QWORD* GameHr_74d4c0(_QWORD* result)
{
  *result = GameData_1f95438;
  if (*(_QWORD**)GameData_212ce88[0] == result - 1609) {
    *GameData_212ce88[0] = 0;
    GameData_21cfa6c = 0;
  }
  return result;
}

__int64 GameHr_74d500(_QWORD* a1)
{
  __int64 v1;

  *a1 = GameData_1f95438;
  if (*(_QWORD**)GameData_212ce88[0] == a1 - 1609) {
    *GameData_212ce88[0] = 0;
    GameData_21cfa6c = 0;
  }
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
    v1 = 56;
  }
  return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v1, a1);
}

_QWORD* GameHr_74d660(__int64 a1, int a2, char a3, char a4)
{
  _QWORD* v4;
  unsigned __int64 v5;
  int v7;
  int v8;
  char v9;
  unsigned __int64 v10;
  char v11;
  _BYTE* v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _BYTE* v19;
  _BYTE* v20;
  char v21;
  __int64 v22;
  int v25;
  int v26;

  v4 = (_QWORD*)a1;
  if (*(_DWORD*)a1 != a2) {
    v5 = *(_QWORD*)(a1 + 8);
    *(_DWORD*)a1 = a2;
    *(_QWORD*)(a1 + 16) = v5;
    if (a2 >= 1) {
      v7 = 0;
      v26 = a2;
      do {
        v8 = 0;
        v25 = v7;
        v9 = v7 + a4;
        do {
          v10 = v4[3];
          v11 = v8 + a3;
          if (v5 < v10) {
            *(_BYTE*)v5 = v11;
            *(_BYTE*)(v5 + 1) = v9;
            *(_WORD*)(v5 + 2) = 0;
            v5 += 4LL;
          }
          else {
            v12 = (_BYTE*)v4[1];
            v13 = v5 - (_QWORD)v12;
            v14 = (__int64)(v5 - (_QWORD)v12) >> 2;
            v15 = v14 + 1;
            if ((unsigned __int64)(v14 + 1) >> 62 != 0) {
              GameRoutine_74e1f0();
            }
            v16 = v10 - (_QWORD)v12;
            if (v16 >> 1 > v15) {
              v15 = v16 >> 1;
            }
            if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFFCLL) {
              v17 = 0x3FFFFFFFFFFFFFFFLL;
            }
            else {
              v17 = v15;
            }
            if (v17 >> 62 != 0) {
              GameRoutine_60a210(a1);
            }
            a1 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 4 * v17, 16, 0);
            v18 = a1 + v13;
            *(_BYTE*)v18 = v11;
            *(_BYTE*)(v18 + 1) = v9;
            *(_WORD*)(v18 + 2) = 0;
            if (v12 != (_BYTE*)v5) {
              v19 = v12;
              v20 = (_BYTE*)(a1 + v13 - 4 * v14);
              do {
                *v20 = *v19;
                v20[1] = v19[1];
                v20[2] = v19[2];
                v21 = v19[3];
                v19 += 4;
                v20[3] = v21;
                v20 += 4;
              } while (v19 != (_BYTE*)v5);
            }
            v5 = v18 + 4;
            v4[1] = a1 + v13 - 4 * v14;
            v4[2] = v18 + 4;
            v4[3] = a1 + 4 * v17;
            if (v12 != nullptr) {
              v22 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v22 = 56;
              }
              a1 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v22, v12);
            }
            a2 = v26;
          }
          ++v8;
          v4[2] = v5;
        } while (v8 != a2);
        v7 = v25 + 1;
      } while (v25 + 1 != a2);
    }
  }
  return v4;
}

_QWORD* GameHr_74d860(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3;
  _QWORD* v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  bool v8;
  unsigned __int64 v9;
  _QWORD* v10;
  bool v11;
  unsigned __int64 v12;
  _BYTE* v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  _BYTE* v20;
  _BYTE* v21;
  char v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned int v31;
  __int64 v32;
  int v33;
  unsigned int v34;
  unsigned __int64 v35;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = (_QWORD*)a1;
  *(_QWORD*)(a1 + 16) = v3;
  v5 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
  v6 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
  v7 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
  v8 = v6 > *(unsigned __int8*)(*GameData_212ce98[0] + 31) || v5 > v7;
  if (v8) {
    v9 = v3;
  }
  else {
    v33 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
    v31 = a2;
    v32 = a3;
    v10 = (_QWORD*)GameData_212bf68;
    v34 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
    while (1) {
      v12 = v4[3];
      if (v3 < v12) {
        *(_BYTE*)v3 = v5;
        *(_BYTE*)(v3 + 1) = v6;
        *(_WORD*)(v3 + 2) = 0;
        v3 += 4LL;
      }
      else {
        v13 = (_BYTE*)v4[1];
        v14 = v3 - (_QWORD)v13;
        v15 = (__int64)(v3 - (_QWORD)v13) >> 2;
        v16 = v15 + 1;
        if ((unsigned __int64)(v15 + 1) >> 62 != 0) {
          GameRoutine_74e1f0();
        }
        v17 = v12 - (_QWORD)v13;
        if (v17 >> 1 > v16) {
          v16 = v17 >> 1;
        }
        if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFFCLL) {
          v18 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v18 = v16;
        }
        if (v18 >> 62 != 0) {
          GameRoutine_60a210(a1);
        }
        a1 = GameRoutine_651b90(*v10, 4 * v18, 16, 0);
        v19 = a1 + v14;
        *(_BYTE*)v19 = v5;
        *(_BYTE*)(v19 + 1) = v6;
        *(_WORD*)(v19 + 2) = 0;
        if (v13 != (_BYTE*)v3) {
          v20 = v13;
          v21 = (_BYTE*)(a1 + v14 - 4 * v15);
          do {
            *v21 = *v20;
            v21[1] = v20[1];
            v21[2] = v20[2];
            v22 = v20[3];
            v20 += 4;
            v21[3] = v22;
            v21 += 4;
          } while (v20 != (_BYTE*)v3);
        }
        v3 = v19 + 4;
        v4[1] = a1 + v14 - 4 * v15;
        v4[2] = v19 + 4;
        v4[3] = a1 + 4 * v18;
        if (v13 != nullptr) {
          v23 = 128;
          if (*(_QWORD*)(*v10 + 200LL) == 0) {
            v23 = 56;
          }
          a1 = GameRoutine_1a0a4e0(*v10 + v23, v13);
        }
      }
      v4[2] = v3;
      v11 = v5++ == v7;
      if (v11) {
        v5 = v34;
        v11 = v6++ == v33;
        if (v11) {
          break;
        }
      }
    }
    v9 = v4[1];
    a3 = v32;
    a2 = v31;
  }
  v35 = a2 | (unsigned __int64)(a3 << 32);
  if ((__int64)(v3 - v9) >> 2 < 129) {
    v27 = 0;
  LABEL_33:
    GameRoutine_74e3e0(v9, v3, &v35, (__int64)(v3 - v9) >> 2, 0, v27);
  }
  else {
    v24 = (__int64)(v3 - v9) >> 2;
    v25 = GameData_212c060;
    while (1) {
      v26 = GameRoutine_1a09d20(4 * v24, v25);
      if (v26 != 0) {
        break;
      }
      v27 = v24 >> 1;
      v8 = v24 > 1;
      v24 >>= 1;
      if (!v8) {
        goto LABEL_33;
      }
    }
    v28 = v26;
    GameRoutine_74e3e0(v9, v3, &v35, (__int64)(v3 - v9) >> 2, v26, v24);
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v29 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v29, v28);
  }
  return v4;
}

__int64 GameHr_74df10()
{
  GameData_21cfa70 = 0;
  GameData_21cfa78 = 0;
  GameData_21cfa80 = 0;
  GameData_21cfa88 = 0;
  GameData_21cfa90 = 0;
  GameData_21cfa74 = 0;
  return GameRoutine_2b0(GameRoutine_74d560, &GameData_21cfa78,
                         &GameData_1f50948);
}

int* GameHr_74df60(int* result, __int64 a2, __int64 a3, __int64 a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  unsigned __int8* v9;
  int v10;
  int v11;
  _DWORD* v13;
  int v14;
  int v15;
  int v17;
  __int64 v18;
  int v19;
  int v20;

  v4 = *result;
  v5 = result[1];
  v6 = result[2];
  v7 = result[3];
  v9 = (unsigned __int8*)*GameData_212ce98[0];
  if (*GameData_212ce98[0] != 0) {
    if (v4 <= v9[20]) {
      v4 = v9[20];
    }
    if (v5 <= v9[21]) {
      v5 = v9[21];
    }
    v10 = v9[22];
    v11 = v9[23];
    if (v6 >= v10) {
      v6 = v10;
    }
    if (v7 >= v11) {
      v7 = v11;
    }
  }
  if (v5 <= v7 && v4 <= v6) {
    v13 = result + 4;
    v14 = v6 + 1;
    v15 = 32 * v5;
    do {
      v17 = v4;
      do {
        if (((v13[(v15 + v17) >> 5] >> v17) & 1) != 0) {
          v18 = *(_QWORD*)(a2 + 32);
          v20 = v17;
          v19 = v5;
          if (v18 == 0) {
            GameRoutine_60a310(0, a2, a3, a4);
          }
          result = (int*)(*(__int64 (**)(__int64, int*, int*))(
              *(_QWORD*)v18 + 48LL))(v18, &v20, &v19);
        }
        ++v17;
      } while (v14 != v17);
      v15 += 32;
    } while (v5++ != v7);
  }
  return result;
}

_BYTE* GameHr_74e080(_QWORD* a1, __int64 a2)
{
  unsigned __int64 v2;
  _BYTE* v3;
  _BYTE* v6;
  _BYTE* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  _DWORD* v15;
  _BYTE* v16;
  _BYTE* v17;
  _BYTE* v18;
  char v19;
  __int64 v20;

  v3 = (_BYTE*)a1[1];
  v2 = a1[2];
  if ((unsigned __int64)v3 >= v2) {
    v7 = (_BYTE*)*a1;
    v8 = (__int64)&v3[-*a1];
    v9 = v8 >> 2;
    v10 = (v8 >> 2) + 1;
    if (v10 >> 62 != 0) {
      GameRoutine_74e1f0();
    }
    v11 = v2 - (_QWORD)v7;
    if (v11 >> 1 > v10) {
      v10 = v11 >> 1;
    }
    if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFFCLL) {
      v12 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v10;
    }
    if (v12 >> 62 != 0) {
      GameRoutine_60a210(a1);
    }
    v13 = GameData_212bf68;
    v14 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 4 * v12, 16, 0);
    v15 = (_DWORD*)(v14 + v8);
    v16 = &v15[-v9];
    *v15 = *(_DWORD*)a2;
    v6 = v15 + 1;
    if (v7 != v3) {
      v17 = v7;
      v18 = v16;
      do {
        *v18 = *v17;
        v18[1] = v17[1];
        v18[2] = v17[2];
        v19 = v17[3];
        v17 += 4;
        v18[3] = v19;
        v18 += 4;
      } while (v17 != v3);
    }
    *a1 = v16;
    a1[1] = v6;
    a1[2] = v14 + 4 * v12;
    if (v7 != nullptr) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v20 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v13 + v20, v7);
    }
  }
  else {
    v6 = v3 + 4;
    *v3 = *(_BYTE*)a2;
    v3[1] = *(_BYTE*)(a2 + 1);
    v3[2] = *(_BYTE*)(a2 + 2);
    v3[3] = *(_BYTE*)(a2 + 3);
  }
  a1[1] = v6;
  return v6 - 4;
}

__int64 GameHr_74e220(__int64 result, int* a2, char* a3, unsigned __int64 a4)
{
  __int64 v5;
  char* v6;
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  int v14;
  char* v15;
  signed __int64 v16;
  char* v17;
  int v18;
  char* v19;
  char* v20;
  char v21;
  int v22;

  v5 = *(_QWORD*)(result + 16);
  v6 = *(char**)result;
  v8 = (_QWORD*)result;
  if (a4 <= (v5 - *(_QWORD*)result) >> 2) {
    v15 = *(char**)(result + 8);
    v16 = v15 - v6;
    if (a4 <= (v15 - v6) >> 2) {
      while (a2 != (int*)a3) {
        v22 = *a2++;
        *(_DWORD*)v6 = v22;
        v6 += 4;
      }
      *(_QWORD*)(result + 8) = v6;
    }
    else {
      v17 = (char*)a2 + v16;
      if (v15 != v6) {
        do {
          v18 = *a2++;
          v16 -= 4LL;
          *(_DWORD*)v6 = v18;
          v6 += 4;
        } while (v16 != 0);
        v15 = *(char**)(result + 8);
      }
      v19 = v15;
      if (v17 != a3) {
        v19 = v15;
        v20 = v15;
        do {
          v19 += 4;
          *v20 = *v17;
          v20[1] = v17[1];
          v20[2] = v17[2];
          v21 = v17[3];
          v17 += 4;
          v20[3] = v21;
          v20 += 4;
        } while (v17 != a3);
      }
      *(_QWORD*)(result + 8) = v19;
    }
  }
  else {
    if (v6 != nullptr) {
      v9 = GameData_2265ee0;
      *(_QWORD*)(result + 8) = v6;
      v10 = a4;
      v11 = 128;
      if (*(_QWORD*)(v9 + 200) == 0) {
        v11 = 56;
      }
      GameRoutine_1a0a4e0(v9 + v11, v6);
      a4 = v10;
      v5 = 0;
      v8[1] = 0;
      v8[2] = 0;
      *v8 = 0;
    }
    if (a4 >> 62 != 0) {
      goto LABEL_28;
    }
    v12 = v5 >> 1;
    if (v5 >> 1 <= a4) {
      v12 = a4;
    }
    v13 = (unsigned __int64)v5 >= 0x7FFFFFFFFFFFFFFCLL ? 0x3FFFFFFFFFFFFFFFLL
                                                       : v12;
    if (v13 >> 62 != 0) {
    LABEL_28:
      GameRoutine_74e1f0();
    }
    result = GameRoutine_651b90(GameData_2265ee0, 4 * v13, 16, 0);
    *v8 = result;
    v8[1] = result;
    for (v8[2] = result + 4 * v13; a2 != (int*)a3; result += 4) {
      v14 = *a2++;
      *(_DWORD*)result = v14;
    }
    v8[1] = result;
  }
  return result;
}

__int64 GameHr_7570a0(__int64 result, _QWORD* a2, __int64 a3, __int64 a4,
                      __int64 a5)
{
  __int64 v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  __int16* v34;
  int v35;
  __int64 v36;
  unsigned int v37;
  int v38;
  unsigned int v39;
  int v40;
  int v41;
  int v42;
  __int64 v43;
  __int64 v44;
  unsigned int v45;
  __int64 v46;
  __int64 v47;
  __int16* v50;
  int v51;
  int v52;
  __int16* v53;
  int v54;
  int v55;
  __int64 v56;
  _QWORD v58[4];
  __int64 v59;

  if (result != 0) {
    v5 = GameData_21ca300;
    if (GameData_21ca300 != 0) {
      v6 = *(unsigned __int8*)(GameData_21ca300 + 28);
      v7 = a4 + (_DWORD)a2;
      v8 = a4 + a3;
      v9 = a3;
      v10 = (int)a2;
      __builtin_memset(v58, 0, sizeof(v58));
      v11 = (int)a2 - 1 <= v6 ? v6 : (_DWORD)a2 - 1;
      v12 = (int)a3 - 1 <= *(unsigned __int8*)(GameData_21ca300 + 29)
                ? *(unsigned __int8*)(GameData_21ca300 + 29)
                : a3 - 1;
      v13 = v7 + 1 < *(unsigned __int8*)(GameData_21ca300 + 30)
                ? v7 + 1
                : *(unsigned __int8*)(GameData_21ca300 + 30);
      v14 = v8 + 1 < *(unsigned __int8*)(GameData_21ca300 + 31)
                ? v8 + 1
                : *(unsigned __int8*)(GameData_21ca300 + 31);
      v15 = v12 <= v14 && v11 <= v13;
      if (v15) {
        v56 = result;
        v54 = v14;
        v55 = v11;
        if ((unsigned int)(a4 * a4) <= 1) {
          v37 = v11 + 32 * v12;
          v38 = -(int)a2;
          do {
            v39 = v37;
            v40 = v11;
            if (v12 - v9 >= 0) {
              v41 = v12 - v9;
            }
            else {
              v41 = v9 - v12;
            }
            do {
              v42 = v38 + v40;
              if (v38 + v40 < 0) {
                v42 = -v42;
              }
              if (v42 + v41 == 1) {
                v43 = v39 >= 0x400 ? 0LL : v39;
                v44 = *(_QWORD*)(v5 + 96) + v43;
                v45 = *(unsigned __int8*)(v44 + 8);
                if (*(_BYTE*)(v44 + 8) != 0) {
                  v46 = *(_QWORD*)(GameData_21ca310 + 56) +
                        2224LL * *(unsigned __int8*)(v44 + 8);
                  v47 = v46 - 2224;
                  if (v45 <= 0xFA && v46 != 2224 &&
                      *(_QWORD*)(v46 - 1832) != 0 && v47 != result) {
                    v50 = (__int16*)(v46 - 1734);
                    v51 = *(__int16*)(v46 - 1734);
                    if (v51 <= 255 &&
                        ((*((_DWORD*)v58 + (v51 >> 5)) >> v51) & 1) == 0) {
                      v59 = v47;
                      v36 = *(_QWORD*)(a5 + 32);
                      if (v36 == 0) {
                      LABEL_82:
                        GameRoutine_60a310(v36, a2, a3, a4);
                      }
                      (*(void (**)(__int64, __int64*))(*(_QWORD*)v36 + 48LL))(
                          v36, &v59);
                      result = v56;
                      v14 = v54;
                      v11 = v55;
                      *((_DWORD*)v58 + (*v50 >> 5)) |= 1 << *v50;
                    }
                  }
                }
              }
              ++v39;
              v15 = v40++ < v13;
            } while (v15);
            v37 += 32;
            v15 = v12++ < v14;
          } while (v15);
        }
        else if ((int)a4 >= 1) {
          v16 = v11 - (_DWORD)a2;
          a2 = v58;
          v52 = v11 - v10;
          do {
            v17 = 32 * v12;
            v18 = v16;
            v19 = v11;
            do {
              v20 = 10000;
              v21 = v9;
              do {
                v22 = v12 - v21;
                v23 = v18;
                v24 = v10;
                if (v12 - v21 < 0) {
                  v22 = v21 - v12;
                }
                do {
                  ++v24;
                  if (v23 >= 0) {
                    v25 = v23;
                  }
                  else {
                    v25 = -v23;
                  }
                  --v23;
                  v26 = v25 + v22;
                  if (v26 < v20) {
                    v20 = v26;
                  }
                } while (v24 < v7);
                ++v21;
              } while (v21 < v8);
              if (v20 == 1) {
                LODWORD(v27) = v19 + v17;
                v27 = (unsigned int)(v19 + v17) >= 0x400 ? 0LL
                                                         : (unsigned int)v27;
                v28 = *(_QWORD*)(v5 + 96) + v27;
                v29 = *(unsigned __int8*)(v28 + 8);
                if (*(_BYTE*)(v28 + 8) != 0) {
                  v30 = *(_QWORD*)(GameData_21ca310 + 56) +
                        2224LL * *(unsigned __int8*)(v28 + 8);
                  v31 = v30 - 2224;
                  if (v29 <= 0xFA && v30 != 2224 &&
                      *(_QWORD*)(v30 - 1832) != 0 && v31 != result) {
                    v34 = (__int16*)(v30 - 1734);
                    v35 = *(__int16*)(v30 - 1734);
                    if (v35 <= 255 &&
                        ((*((_DWORD*)v58 + (v35 >> 5)) >> v35) & 1) == 0) {
                      v59 = v31;
                      v53 = v34;
                      v36 = *(_QWORD*)(a5 + 32);
                      if (v36 == 0) {
                        goto LABEL_82;
                      }
                      (*(void (**)(__int64, __int64*))(*(_QWORD*)v36 + 48LL))(
                          v36, &v59);
                      a2 = v58;
                      result = v56;
                      v14 = v54;
                      v11 = v55;
                      v16 = v52;
                      *((_DWORD*)v58 + (*v53 >> 5)) |= 1 << *v53;
                    }
                  }
                }
              }
              ++v18;
              v15 = v19++ < v13;
            } while (v15);
            v15 = v12++ < v14;
          } while (v15);
        }
      }
    }
  }
  return result;
}

__int64 GameHr_758bc0(float a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* i;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  int v15;

  v15 = 15;
  result = GameRoutine_6ea9d0(&v15);
  if (result != 0) {
    v3 = *(_QWORD*)(result + 432);
    if (v3 == 0) {
      v12 = *(_QWORD*)(result + 440);
      if (v12 == 0 || (v13 = *(unsigned __int8*)(v12 + 16)) > 8) {
      LABEL_11:
        result = GameRoutine_81cf00(a1);
        goto LABEL_12;
      }
      v14 = 24LL * (unsigned int)v13 + 556024;
      while (1) {
        if (v13 <= 2) {
          v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v14);
          if (v3 != 0) {
            break;
          }
        }
        ++v13;
        v14 += 24;
        if (v13 == 9) {
          goto LABEL_11;
        }
      }
    }
    while (1) {
      do {
        v4 = v3;
        GameRoutine_81cf00(a1);
        v3 = *(_QWORD*)(v4 + 432);
      } while (v3 != 0);
      v5 = *(_QWORD*)(v4 + 440);
      if (v5 == 0) {
        goto LABEL_11;
      }
      v6 = *(unsigned __int8*)(v5 + 16);
      if (v6 > 8) {
        goto LABEL_11;
      }
      v7 = 24LL * (unsigned int)v6 + 556024;
      while (1) {
        if (v6 <= 2) {
          v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v7);
          if (v3 != 0) {
            break;
          }
        }
        ++v6;
        v7 += 24;
        if (v6 == 9) {
          goto LABEL_11;
        }
      }
    }
  }
LABEL_12:
  if (GameData_21cd158 != 0) {
    v8 = *(_QWORD*)(GameData_21cd158 + 16);
    v9 = *(__int64**)(v8 + 32);
    for (i = *(__int64**)(v8 + 40); v9 != i;
         result = (*(__int64 (**)(__int64, float))(*(_QWORD*)v11 + 712LL))(
             v11, a1)) {
      v11 = *v9++;
    }
  }
  return result;
}

__int64 GameHr_7595d0()
{
  __int64 v0;
  int v1;
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 result;
  bool v9;

  if (GameData_21cd130 == 0) {
    goto LABEL_14;
  }
  v0 = *(_QWORD*)(GameData_21cd130 + 48);
  v1 = *(_DWORD*)(v0 + 8);
  v2 = *GameData_212ce98[0];
  if (*(unsigned __int8*)(*GameData_212ce98[0] + 18) <=
      (unsigned int)(unsigned __int8)(v1 -
                                      *(_BYTE*)(*GameData_212ce98[0] + 16))) {
    goto LABEL_14;
  }
  v3 = *(_DWORD*)(v0 + 12);
  if (*(unsigned __int8*)(v2 + 19) <=
      (unsigned int)(unsigned __int8)(v3 - *(_BYTE*)(v2 + 17))) {
    goto LABEL_14;
  }
  v4 = *(_QWORD*)(v2 + 96);
  LODWORD(v5) = v1 + 32 * v3;
  v5 = (unsigned int)v5 >= 0x400 ? 0LL : (unsigned int)v5;
  v6 = *(unsigned __int8*)(v4 + v5 + 8);
  if (v6 == 0 || ((v7 = *(_QWORD*)(GameData_21ca310 + 56) + 2224LL * v6,
                   result = v7 - 2224, v6 <= 0xFA)
                      ? (v9 = v7 == 2224)
                      : (v9 = true),
                  v9 || *(_QWORD*)(v7 - 1832) == 0 ||
                      (*(_BYTE*)(v7 - 1807) & 0x1C) != 0)) {
  LABEL_14:
    result = GameData_21cd108;
    if (GameData_21cd108 != 0) {
      if (*(_BYTE*)(GameData_21cd108 + 8) != 0) {
        return GameRoutine_6ea8c0(GameData_21cd108 + 8);
      }
      else {
        return 0;
      }
    }
  }
  return result;
}

void GameHr_759860(__int64* a1, __int64* a2, __int64* a3, __int64 a4, char a5)
{

#pragma clang fp contract(off)
  __int64* v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  float v26;
  float v27;
  float v28;
  __int64 v29;
  float v30;
  float v31;
  float v32;
  __int64* v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  float v37;
  float v38;
  float v39;
  __int64 v40;
  float v41;
  float v42;
  float v43;
  __int64* v44;
  bool v45;
  bool v46;
  __int64 v47;
  __int64 v48;
  float v49;
  float v50;
  float v51;
  __int64 v52;
  float v53;
  float v54;
  float v55;
  __int64* v56;
  __int64 v57;
  float v58;
  float v59;
  float v60;
  __int64* v61;
  __int64 v62;
  float v63;
  float v64;
  float v65;
  __int64 v66;
  __int64 v67;
  float v68;
  float v69;
  float v70;
  __int64 v71;
  float v72;
  float v73;
  float v74;
  __int64* v75;
  __int64 v76;
  float v77;
  float v78;
  float v79;
  __int64 v80;
  __int64* v81;
  bool v83;
  __int64 v84;
  __int64* v85;
  __int64* v86;
  __int64 v87;
  __int64 v88;
  float v89;
  float v90;
  float v91;
  __int64 v92;
  __int64* v93;
  __int64 v94;
  __int64 v95;
  float v96;
  float v97;
  float v98;
  signed __int64 v99;
  signed __int64 v100;
  __int64 v101;
  __int64* v102;
  __int64 v103;
  float v104;
  float v105;
  float v106;
  __int64* v107;
  __int64 v108;
  float v109;
  float v110;
  float v111;
  __int64 v112;
  float v113;
  float v114;
  float v115;
  __int64* v116;
  __int64 v117;
  __int64 v118;
  float v119;
  float v120;
  float v121;
  __int64* v122;
  bool v123;
  __int64 v124;
  __int64* v125;
  __int64* v126;
  __int64* v127;
  __int64 v128;
  __int64* v129;
  __int64 v130;
  float v131;
  float v132;
  float v133;
  __int64* v134;
  __int64 v135;
  unsigned __int64 v136;
  unsigned __int64 v137;
  __int64 v138;
  __int64* v139;
  float v140;
  float v141;
  float v142;
  __int64 v143;
  __int64* v144;
  float v145;
  float v146;
  float v147;
  __int64 v148;
  __int64 v149;
  float v150;
  float v151;
  float v152;
  __int64 v153;
  __int64* v154;
  __int64* v155;
  __int64 v156;
  __int64 v157;
  float v158;
  float v159;
  float v160;
  __int64* v161;
  __int64* v162;
  __int64* v163;
  __int64* v164;
  __int64* v165;
  signed __int64 v166;
  __int64 v167;

  v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
  v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(float, "s0", "=w")),
  v109 = COERCE_AS(__typeof__(v109), PSEUDO_REGISTER(float, "s0", "=w")),
  v111 = COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(float, "s0", "=w")),
  v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(float, "s0", "=w")),
  v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(float, "s0", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(float, "s0", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
  v131 = COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(float, "s0", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
  v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(float, "s0", "=w")),
  v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(float, "s0", "=w")),
  v145 = COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(float, "s0", "=w")),
  v147 = COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(float, "s0", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
  v150 = COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(float, "s0", "=w")),
  v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s0", "=w")),
  v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(float, "s0", "=w")),
  v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(float, "s0", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s0", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s0", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s0", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s0", "=w")),
  v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w")),
  v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
  v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s0", "=w")),
  v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s0", "=w")),
  v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(float, "s0", "=w")),
  v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
  v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(float, "s0", "=w")),
  v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s0", "=w")),
  v65 = COERCE_AS(__typeof__(v65), PSEUDO_REGISTER(float, "s0", "=w")),
  v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s0", "=w")),
  v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w")),
  v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(float, "s0", "=w")),
  v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
  v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s0", "=w")),
  v79 = COERCE_AS(__typeof__(v79), PSEUDO_REGISTER(float, "s0", "=w")),
  v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w")),
  v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(float, "s0", "=w")),
  v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(float, "s0", "=w")),
  v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(float, "s0", "=w"));
  while (2) {
    v10 = a1;
    v165 = a2 - 1;
    v161 = a2 - 3;
    v162 = a2 - 2;
    while (1) {
      while (1) {
        while (1) {
          a1 = v10;
          v11 = a2 - v10;
          if (v11 > 2) {
            switch (v11) {
            case 3LL:
              game_map_75a370(v10, v10 + 1, v165, a3),
                  v104 = COERCE_AS(__typeof__(v104),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v109 = COERCE_AS(__typeof__(v109),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v113 = COERCE_AS(__typeof__(v113),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v115 = COERCE_AS(__typeof__(v115),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v119 = COERCE_AS(__typeof__(v119),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v121 = COERCE_AS(__typeof__(v121),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v133 = COERCE_AS(__typeof__(v133),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v140 = COERCE_AS(__typeof__(v140),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v142 = COERCE_AS(__typeof__(v142),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v145 = COERCE_AS(__typeof__(v145),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v147 = COERCE_AS(__typeof__(v147),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v150 = COERCE_AS(__typeof__(v150),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v152 = COERCE_AS(__typeof__(v152),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v158 = COERCE_AS(__typeof__(v158),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v160 = COERCE_AS(__typeof__(v160),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v22 = COERCE_AS(__typeof__(v22),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v30 = COERCE_AS(__typeof__(v30),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v32 = COERCE_AS(__typeof__(v32),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v37 = COERCE_AS(__typeof__(v37),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v49 = COERCE_AS(__typeof__(v49),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v51 = COERCE_AS(__typeof__(v51),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v53 = COERCE_AS(__typeof__(v53),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v60 = COERCE_AS(__typeof__(v60),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v65 = COERCE_AS(__typeof__(v65),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v72 = COERCE_AS(__typeof__(v72),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v74 = COERCE_AS(__typeof__(v74),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v77 = COERCE_AS(__typeof__(v77),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v79 = COERCE_AS(__typeof__(v79),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v89 = COERCE_AS(__typeof__(v89),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v91 = COERCE_AS(__typeof__(v91),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v96 = COERCE_AS(__typeof__(v96),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              return;
            case 4LL:
              game_map_75a4e0(v10, v10 + 1, v10 + 2, v165, a3),
                  v104 = COERCE_AS(__typeof__(v104),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v109 = COERCE_AS(__typeof__(v109),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v113 = COERCE_AS(__typeof__(v113),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v115 = COERCE_AS(__typeof__(v115),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v119 = COERCE_AS(__typeof__(v119),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v121 = COERCE_AS(__typeof__(v121),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v133 = COERCE_AS(__typeof__(v133),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v140 = COERCE_AS(__typeof__(v140),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v142 = COERCE_AS(__typeof__(v142),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v145 = COERCE_AS(__typeof__(v145),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v147 = COERCE_AS(__typeof__(v147),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v150 = COERCE_AS(__typeof__(v150),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v152 = COERCE_AS(__typeof__(v152),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v158 = COERCE_AS(__typeof__(v158),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v160 = COERCE_AS(__typeof__(v160),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v22 = COERCE_AS(__typeof__(v22),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v30 = COERCE_AS(__typeof__(v30),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v32 = COERCE_AS(__typeof__(v32),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v37 = COERCE_AS(__typeof__(v37),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v49 = COERCE_AS(__typeof__(v49),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v51 = COERCE_AS(__typeof__(v51),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v53 = COERCE_AS(__typeof__(v53),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v60 = COERCE_AS(__typeof__(v60),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v65 = COERCE_AS(__typeof__(v65),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v72 = COERCE_AS(__typeof__(v72),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v74 = COERCE_AS(__typeof__(v74),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v77 = COERCE_AS(__typeof__(v77),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v79 = COERCE_AS(__typeof__(v79),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v89 = COERCE_AS(__typeof__(v89),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v91 = COERCE_AS(__typeof__(v91),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v96 = COERCE_AS(__typeof__(v96),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              return;
            case 5LL:
              game_map_75a5f0(v10, v10 + 1, v10 + 2, v10 + 3, v165, a3),
                  v104 = COERCE_AS(__typeof__(v104),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v109 = COERCE_AS(__typeof__(v109),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v113 = COERCE_AS(__typeof__(v113),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v115 = COERCE_AS(__typeof__(v115),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v119 = COERCE_AS(__typeof__(v119),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v121 = COERCE_AS(__typeof__(v121),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v133 = COERCE_AS(__typeof__(v133),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v140 = COERCE_AS(__typeof__(v140),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v142 = COERCE_AS(__typeof__(v142),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v145 = COERCE_AS(__typeof__(v145),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v147 = COERCE_AS(__typeof__(v147),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v150 = COERCE_AS(__typeof__(v150),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v152 = COERCE_AS(__typeof__(v152),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v158 = COERCE_AS(__typeof__(v158),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v160 = COERCE_AS(__typeof__(v160),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v22 = COERCE_AS(__typeof__(v22),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v30 = COERCE_AS(__typeof__(v30),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v32 = COERCE_AS(__typeof__(v32),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v37 = COERCE_AS(__typeof__(v37),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v49 = COERCE_AS(__typeof__(v49),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v51 = COERCE_AS(__typeof__(v51),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v53 = COERCE_AS(__typeof__(v53),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v60 = COERCE_AS(__typeof__(v60),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v65 = COERCE_AS(__typeof__(v65),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v72 = COERCE_AS(__typeof__(v72),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v74 = COERCE_AS(__typeof__(v74),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v77 = COERCE_AS(__typeof__(v77),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v79 = COERCE_AS(__typeof__(v79),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v89 = COERCE_AS(__typeof__(v89),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v91 = COERCE_AS(__typeof__(v91),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v96 = COERCE_AS(__typeof__(v96),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              return;
            default:
              break;
            }
          }
          else {
            if ((unsigned __int64)v11 < 2) {
              return;
            }
            if (v11 == 2) {
              v76 = *v10;
              GameRoutine_7c0910_alt1(*a3, *(a2 - 1)),
                  v104 = COERCE_AS(__typeof__(v104),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v109 = COERCE_AS(__typeof__(v109),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v113 = COERCE_AS(__typeof__(v113),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v115 = COERCE_AS(__typeof__(v115),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v119 = COERCE_AS(__typeof__(v119),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v121 = COERCE_AS(__typeof__(v121),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v133 = COERCE_AS(__typeof__(v133),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v140 = COERCE_AS(__typeof__(v140),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v142 = COERCE_AS(__typeof__(v142),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v145 = COERCE_AS(__typeof__(v145),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v147 = COERCE_AS(__typeof__(v147),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v150 = COERCE_AS(__typeof__(v150),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v152 = COERCE_AS(__typeof__(v152),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v158 = COERCE_AS(__typeof__(v158),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v160 = COERCE_AS(__typeof__(v160),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v22 = COERCE_AS(__typeof__(v22),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v30 = COERCE_AS(__typeof__(v30),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v32 = COERCE_AS(__typeof__(v32),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v37 = COERCE_AS(__typeof__(v37),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v49 = COERCE_AS(__typeof__(v49),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v51 = COERCE_AS(__typeof__(v51),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v53 = COERCE_AS(__typeof__(v53),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v60 = COERCE_AS(__typeof__(v60),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v65 = COERCE_AS(__typeof__(v65),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v72 = COERCE_AS(__typeof__(v72),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v74 = COERCE_AS(__typeof__(v74),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v77 = COERCE_AS(__typeof__(v77),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v79 = COERCE_AS(__typeof__(v79),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v89 = COERCE_AS(__typeof__(v89),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v91 = COERCE_AS(__typeof__(v91),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v96 = COERCE_AS(__typeof__(v96),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v78 = v77;
              GameRoutine_7c0910_alt1(*a3, v76),
                  v104 = COERCE_AS(__typeof__(v104),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v109 = COERCE_AS(__typeof__(v109),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v113 = COERCE_AS(__typeof__(v113),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v115 = COERCE_AS(__typeof__(v115),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v119 = COERCE_AS(__typeof__(v119),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v121 = COERCE_AS(__typeof__(v121),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v133 = COERCE_AS(__typeof__(v133),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v140 = COERCE_AS(__typeof__(v140),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v142 = COERCE_AS(__typeof__(v142),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v145 = COERCE_AS(__typeof__(v145),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v147 = COERCE_AS(__typeof__(v147),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v150 = COERCE_AS(__typeof__(v150),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v152 = COERCE_AS(__typeof__(v152),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v158 = COERCE_AS(__typeof__(v158),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v160 = COERCE_AS(__typeof__(v160),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v22 = COERCE_AS(__typeof__(v22),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v30 = COERCE_AS(__typeof__(v30),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v32 = COERCE_AS(__typeof__(v32),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v37 = COERCE_AS(__typeof__(v37),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v49 = COERCE_AS(__typeof__(v49),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v51 = COERCE_AS(__typeof__(v51),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v53 = COERCE_AS(__typeof__(v53),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v60 = COERCE_AS(__typeof__(v60),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v65 = COERCE_AS(__typeof__(v65),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v72 = COERCE_AS(__typeof__(v72),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v74 = COERCE_AS(__typeof__(v74),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v77 = COERCE_AS(__typeof__(v77),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v79 = COERCE_AS(__typeof__(v79),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v89 = COERCE_AS(__typeof__(v89),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v91 = COERCE_AS(__typeof__(v91),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v96 = COERCE_AS(__typeof__(v96),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              if (v78 > v79) {
                v80 = *v10;
                *v10 = *(a2 - 1);
                *(a2 - 1) = v80;
              }
              return;
            }
          }
          if (v11 <= 23) {
            v81 = v10 + 1;
            v83 = v10 == a2 || v81 == a2;
            if ((a5 & 1) != 0) {
              if (!v83) {
                v84 = 0;
                v85 = v10;
                do {
                  v88 = *v85;
                  v87 = v85[1];
                  v85 = v81;
                  GameRoutine_7c0910_alt1(*a3, v87),
                      v104 = COERCE_AS(__typeof__(v104),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v106 = COERCE_AS(__typeof__(v106),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v109 = COERCE_AS(__typeof__(v109),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v111 = COERCE_AS(__typeof__(v111),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v113 = COERCE_AS(__typeof__(v113),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v115 = COERCE_AS(__typeof__(v115),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v119 = COERCE_AS(__typeof__(v119),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v121 = COERCE_AS(__typeof__(v121),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v131 = COERCE_AS(__typeof__(v131),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v133 = COERCE_AS(__typeof__(v133),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v140 = COERCE_AS(__typeof__(v140),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v142 = COERCE_AS(__typeof__(v142),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v145 = COERCE_AS(__typeof__(v145),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v147 = COERCE_AS(__typeof__(v147),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v150 = COERCE_AS(__typeof__(v150),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v152 = COERCE_AS(__typeof__(v152),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v158 = COERCE_AS(__typeof__(v158),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v160 = COERCE_AS(__typeof__(v160),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v20 = COERCE_AS(__typeof__(v20),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v22 = COERCE_AS(__typeof__(v22),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v26 = COERCE_AS(__typeof__(v26),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v28 = COERCE_AS(__typeof__(v28),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v30 = COERCE_AS(__typeof__(v30),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v32 = COERCE_AS(__typeof__(v32),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v37 = COERCE_AS(__typeof__(v37),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v49 = COERCE_AS(__typeof__(v49),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v51 = COERCE_AS(__typeof__(v51),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v53 = COERCE_AS(__typeof__(v53),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v55 = COERCE_AS(__typeof__(v55),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v58 = COERCE_AS(__typeof__(v58),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v60 = COERCE_AS(__typeof__(v60),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v63 = COERCE_AS(__typeof__(v63),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v65 = COERCE_AS(__typeof__(v65),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v68 = COERCE_AS(__typeof__(v68),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v70 = COERCE_AS(__typeof__(v70),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v72 = COERCE_AS(__typeof__(v72),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v74 = COERCE_AS(__typeof__(v74),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v77 = COERCE_AS(__typeof__(v77),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v79 = COERCE_AS(__typeof__(v79),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v89 = COERCE_AS(__typeof__(v89),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v91 = COERCE_AS(__typeof__(v91),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v96 = COERCE_AS(__typeof__(v96),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v98 = COERCE_AS(__typeof__(v98),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                  v90 = v89;
                  GameRoutine_7c0910_alt1(*a3, v88),
                      v104 = COERCE_AS(__typeof__(v104),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v106 = COERCE_AS(__typeof__(v106),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v109 = COERCE_AS(__typeof__(v109),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v111 = COERCE_AS(__typeof__(v111),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v113 = COERCE_AS(__typeof__(v113),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v115 = COERCE_AS(__typeof__(v115),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v119 = COERCE_AS(__typeof__(v119),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v121 = COERCE_AS(__typeof__(v121),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v131 = COERCE_AS(__typeof__(v131),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v133 = COERCE_AS(__typeof__(v133),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v140 = COERCE_AS(__typeof__(v140),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v142 = COERCE_AS(__typeof__(v142),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v145 = COERCE_AS(__typeof__(v145),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v147 = COERCE_AS(__typeof__(v147),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v150 = COERCE_AS(__typeof__(v150),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v152 = COERCE_AS(__typeof__(v152),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v158 = COERCE_AS(__typeof__(v158),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v160 = COERCE_AS(__typeof__(v160),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v20 = COERCE_AS(__typeof__(v20),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v22 = COERCE_AS(__typeof__(v22),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v26 = COERCE_AS(__typeof__(v26),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v28 = COERCE_AS(__typeof__(v28),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v30 = COERCE_AS(__typeof__(v30),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v32 = COERCE_AS(__typeof__(v32),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v37 = COERCE_AS(__typeof__(v37),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v49 = COERCE_AS(__typeof__(v49),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v51 = COERCE_AS(__typeof__(v51),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v53 = COERCE_AS(__typeof__(v53),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v55 = COERCE_AS(__typeof__(v55),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v58 = COERCE_AS(__typeof__(v58),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v60 = COERCE_AS(__typeof__(v60),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v63 = COERCE_AS(__typeof__(v63),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v65 = COERCE_AS(__typeof__(v65),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v68 = COERCE_AS(__typeof__(v68),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v70 = COERCE_AS(__typeof__(v70),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v72 = COERCE_AS(__typeof__(v72),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v74 = COERCE_AS(__typeof__(v74),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v77 = COERCE_AS(__typeof__(v77),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v79 = COERCE_AS(__typeof__(v79),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v89 = COERCE_AS(__typeof__(v89),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v91 = COERCE_AS(__typeof__(v91),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v96 = COERCE_AS(__typeof__(v96),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v98 = COERCE_AS(__typeof__(v98),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                  if (v90 > v91) {
                    v92 = *v85;
                    v93 = a2;
                    v94 = v84;
                    do {
                      *(__int64*)((char*)v10 + v94 + 8) =
                          *(__int64*)((char*)v10 + v94);
                      if (v94 == 0) {
                        v86 = v10;
                        goto LABEL_73;
                      }
                      v95 = *(__int64*)((char*)v10 + v94 - 8);
                      GameRoutine_7c0910_alt1(*a3, v92),
                          v104 = COERCE_AS(__typeof__(v104),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v106 = COERCE_AS(__typeof__(v106),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v109 = COERCE_AS(__typeof__(v109),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v111 = COERCE_AS(__typeof__(v111),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v113 = COERCE_AS(__typeof__(v113),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v115 = COERCE_AS(__typeof__(v115),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v119 = COERCE_AS(__typeof__(v119),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v121 = COERCE_AS(__typeof__(v121),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v131 = COERCE_AS(__typeof__(v131),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v133 = COERCE_AS(__typeof__(v133),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v140 = COERCE_AS(__typeof__(v140),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v142 = COERCE_AS(__typeof__(v142),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v145 = COERCE_AS(__typeof__(v145),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v147 = COERCE_AS(__typeof__(v147),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v15 = COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v150 = COERCE_AS(__typeof__(v150),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v152 = COERCE_AS(__typeof__(v152),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v158 = COERCE_AS(__typeof__(v158),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v160 = COERCE_AS(__typeof__(v160),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v17 = COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v20 = COERCE_AS(__typeof__(v20),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v22 = COERCE_AS(__typeof__(v22),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v26 = COERCE_AS(__typeof__(v26),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v28 = COERCE_AS(__typeof__(v28),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v30 = COERCE_AS(__typeof__(v30),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v32 = COERCE_AS(__typeof__(v32),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v37 = COERCE_AS(__typeof__(v37),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v39 = COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v41 = COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v43 = COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v49 = COERCE_AS(__typeof__(v49),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v51 = COERCE_AS(__typeof__(v51),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v53 = COERCE_AS(__typeof__(v53),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v55 = COERCE_AS(__typeof__(v55),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v58 = COERCE_AS(__typeof__(v58),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v60 = COERCE_AS(__typeof__(v60),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v63 = COERCE_AS(__typeof__(v63),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v65 = COERCE_AS(__typeof__(v65),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v68 = COERCE_AS(__typeof__(v68),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v70 = COERCE_AS(__typeof__(v70),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v72 = COERCE_AS(__typeof__(v72),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v74 = COERCE_AS(__typeof__(v74),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v77 = COERCE_AS(__typeof__(v77),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v79 = COERCE_AS(__typeof__(v79),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v89 = COERCE_AS(__typeof__(v89),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v91 = COERCE_AS(__typeof__(v91),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v96 = COERCE_AS(__typeof__(v96),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v98 = COERCE_AS(__typeof__(v98),
                                          PSEUDO_REGISTER(float, "s0", "=w"));
                      v97 = v96;
                      GameRoutine_7c0910_alt1(*a3, v95),
                          v104 = COERCE_AS(__typeof__(v104),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v106 = COERCE_AS(__typeof__(v106),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v109 = COERCE_AS(__typeof__(v109),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v111 = COERCE_AS(__typeof__(v111),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v113 = COERCE_AS(__typeof__(v113),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v115 = COERCE_AS(__typeof__(v115),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v119 = COERCE_AS(__typeof__(v119),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v121 = COERCE_AS(__typeof__(v121),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v131 = COERCE_AS(__typeof__(v131),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v133 = COERCE_AS(__typeof__(v133),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v140 = COERCE_AS(__typeof__(v140),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v142 = COERCE_AS(__typeof__(v142),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v145 = COERCE_AS(__typeof__(v145),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v147 = COERCE_AS(__typeof__(v147),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v15 = COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v150 = COERCE_AS(__typeof__(v150),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v152 = COERCE_AS(__typeof__(v152),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v158 = COERCE_AS(__typeof__(v158),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v160 = COERCE_AS(__typeof__(v160),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v17 = COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v20 = COERCE_AS(__typeof__(v20),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v22 = COERCE_AS(__typeof__(v22),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v26 = COERCE_AS(__typeof__(v26),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v28 = COERCE_AS(__typeof__(v28),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v30 = COERCE_AS(__typeof__(v30),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v32 = COERCE_AS(__typeof__(v32),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v37 = COERCE_AS(__typeof__(v37),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v39 = COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v41 = COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v43 = COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v49 = COERCE_AS(__typeof__(v49),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v51 = COERCE_AS(__typeof__(v51),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v53 = COERCE_AS(__typeof__(v53),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v55 = COERCE_AS(__typeof__(v55),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v58 = COERCE_AS(__typeof__(v58),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v60 = COERCE_AS(__typeof__(v60),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v63 = COERCE_AS(__typeof__(v63),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v65 = COERCE_AS(__typeof__(v65),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v68 = COERCE_AS(__typeof__(v68),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v70 = COERCE_AS(__typeof__(v70),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v72 = COERCE_AS(__typeof__(v72),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v74 = COERCE_AS(__typeof__(v74),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v77 = COERCE_AS(__typeof__(v77),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v79 = COERCE_AS(__typeof__(v79),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v89 = COERCE_AS(__typeof__(v89),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v91 = COERCE_AS(__typeof__(v91),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v96 = COERCE_AS(__typeof__(v96),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v98 = COERCE_AS(__typeof__(v98),
                                          PSEUDO_REGISTER(float, "s0", "=w"));
                      v94 -= 8;
                    } while (v97 > v98);
                    v86 = (__int64*)((char*)v10 + v94 + 8);
                  LABEL_73:
                    *v86 = v92;
                    a2 = v93;
                  }
                  v81 = v85 + 1;
                  v84 += 8;
                } while (v85 + 1 != a2);
              }
            }
            else if (!v83) {
              do {
                v149 = *a1;
                v148 = a1[1];
                a1 = v81;
                GameRoutine_7c0910_alt1(*a3, v148),
                    v104 = COERCE_AS(__typeof__(v104),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v106 = COERCE_AS(__typeof__(v106),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v109 = COERCE_AS(__typeof__(v109),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v111 = COERCE_AS(__typeof__(v111),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v113 = COERCE_AS(__typeof__(v113),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v115 = COERCE_AS(__typeof__(v115),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v119 = COERCE_AS(__typeof__(v119),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v121 = COERCE_AS(__typeof__(v121),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v131 = COERCE_AS(__typeof__(v131),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v133 = COERCE_AS(__typeof__(v133),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v140 = COERCE_AS(__typeof__(v140),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v142 = COERCE_AS(__typeof__(v142),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v145 = COERCE_AS(__typeof__(v145),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v147 = COERCE_AS(__typeof__(v147),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v15 = COERCE_AS(__typeof__(v15),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v150 = COERCE_AS(__typeof__(v150),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v152 = COERCE_AS(__typeof__(v152),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v158 = COERCE_AS(__typeof__(v158),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v160 = COERCE_AS(__typeof__(v160),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v17 = COERCE_AS(__typeof__(v17),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v20 = COERCE_AS(__typeof__(v20),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v22 = COERCE_AS(__typeof__(v22),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v26 = COERCE_AS(__typeof__(v26),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v28 = COERCE_AS(__typeof__(v28),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v30 = COERCE_AS(__typeof__(v30),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v32 = COERCE_AS(__typeof__(v32),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v37 = COERCE_AS(__typeof__(v37),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v39 = COERCE_AS(__typeof__(v39),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v41 = COERCE_AS(__typeof__(v41),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v43 = COERCE_AS(__typeof__(v43),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v49 = COERCE_AS(__typeof__(v49),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v51 = COERCE_AS(__typeof__(v51),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v53 = COERCE_AS(__typeof__(v53),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v55 = COERCE_AS(__typeof__(v55),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v58 = COERCE_AS(__typeof__(v58),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v60 = COERCE_AS(__typeof__(v60),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v63 = COERCE_AS(__typeof__(v63),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v65 = COERCE_AS(__typeof__(v65),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v68 = COERCE_AS(__typeof__(v68),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v70 = COERCE_AS(__typeof__(v70),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v72 = COERCE_AS(__typeof__(v72),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v74 = COERCE_AS(__typeof__(v74),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v77 = COERCE_AS(__typeof__(v77),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v79 = COERCE_AS(__typeof__(v79),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v89 = COERCE_AS(__typeof__(v89),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v91 = COERCE_AS(__typeof__(v91),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v96 = COERCE_AS(__typeof__(v96),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v98 = COERCE_AS(__typeof__(v98),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                v151 = v150;
                GameRoutine_7c0910_alt1(*a3, v149),
                    v104 = COERCE_AS(__typeof__(v104),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v106 = COERCE_AS(__typeof__(v106),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v109 = COERCE_AS(__typeof__(v109),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v111 = COERCE_AS(__typeof__(v111),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v113 = COERCE_AS(__typeof__(v113),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v115 = COERCE_AS(__typeof__(v115),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v119 = COERCE_AS(__typeof__(v119),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v121 = COERCE_AS(__typeof__(v121),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v131 = COERCE_AS(__typeof__(v131),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v133 = COERCE_AS(__typeof__(v133),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v140 = COERCE_AS(__typeof__(v140),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v142 = COERCE_AS(__typeof__(v142),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v145 = COERCE_AS(__typeof__(v145),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v147 = COERCE_AS(__typeof__(v147),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v15 = COERCE_AS(__typeof__(v15),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v150 = COERCE_AS(__typeof__(v150),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v152 = COERCE_AS(__typeof__(v152),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v158 = COERCE_AS(__typeof__(v158),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v160 = COERCE_AS(__typeof__(v160),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v17 = COERCE_AS(__typeof__(v17),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v20 = COERCE_AS(__typeof__(v20),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v22 = COERCE_AS(__typeof__(v22),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v26 = COERCE_AS(__typeof__(v26),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v28 = COERCE_AS(__typeof__(v28),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v30 = COERCE_AS(__typeof__(v30),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v32 = COERCE_AS(__typeof__(v32),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v37 = COERCE_AS(__typeof__(v37),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v39 = COERCE_AS(__typeof__(v39),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v41 = COERCE_AS(__typeof__(v41),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v43 = COERCE_AS(__typeof__(v43),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v49 = COERCE_AS(__typeof__(v49),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v51 = COERCE_AS(__typeof__(v51),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v53 = COERCE_AS(__typeof__(v53),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v55 = COERCE_AS(__typeof__(v55),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v58 = COERCE_AS(__typeof__(v58),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v60 = COERCE_AS(__typeof__(v60),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v63 = COERCE_AS(__typeof__(v63),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v65 = COERCE_AS(__typeof__(v65),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v68 = COERCE_AS(__typeof__(v68),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v70 = COERCE_AS(__typeof__(v70),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v72 = COERCE_AS(__typeof__(v72),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v74 = COERCE_AS(__typeof__(v74),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v77 = COERCE_AS(__typeof__(v77),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v79 = COERCE_AS(__typeof__(v79),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v89 = COERCE_AS(__typeof__(v89),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v91 = COERCE_AS(__typeof__(v91),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v96 = COERCE_AS(__typeof__(v96),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v98 = COERCE_AS(__typeof__(v98),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                if (v151 > v152) {
                  v153 = *a1;
                  v154 = a1;
                  do {
                    v155 = v154;
                    v156 = *--v154;
                    v157 = *(v155 - 2);
                    *v155 = v156;
                    GameRoutine_7c0910_alt1(*a3, v153),
                        v104 = COERCE_AS(__typeof__(v104),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v106 = COERCE_AS(__typeof__(v106),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v109 = COERCE_AS(__typeof__(v109),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v111 = COERCE_AS(__typeof__(v111),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v113 = COERCE_AS(__typeof__(v113),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v115 = COERCE_AS(__typeof__(v115),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v119 = COERCE_AS(__typeof__(v119),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v121 = COERCE_AS(__typeof__(v121),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v131 = COERCE_AS(__typeof__(v131),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v133 = COERCE_AS(__typeof__(v133),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v140 = COERCE_AS(__typeof__(v140),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v142 = COERCE_AS(__typeof__(v142),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v145 = COERCE_AS(__typeof__(v145),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v147 = COERCE_AS(__typeof__(v147),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v150 = COERCE_AS(__typeof__(v150),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v152 = COERCE_AS(__typeof__(v152),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v158 = COERCE_AS(__typeof__(v158),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v160 = COERCE_AS(__typeof__(v160),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v17 = COERCE_AS(__typeof__(v17),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v20 = COERCE_AS(__typeof__(v20),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v22 = COERCE_AS(__typeof__(v22),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v26 = COERCE_AS(__typeof__(v26),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v28 = COERCE_AS(__typeof__(v28),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v30 = COERCE_AS(__typeof__(v30),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v32 = COERCE_AS(__typeof__(v32),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v37 = COERCE_AS(__typeof__(v37),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v43 = COERCE_AS(__typeof__(v43),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v49 = COERCE_AS(__typeof__(v49),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v51 = COERCE_AS(__typeof__(v51),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v53 = COERCE_AS(__typeof__(v53),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v55 = COERCE_AS(__typeof__(v55),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v58 = COERCE_AS(__typeof__(v58),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v60 = COERCE_AS(__typeof__(v60),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v63 = COERCE_AS(__typeof__(v63),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v65 = COERCE_AS(__typeof__(v65),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v68 = COERCE_AS(__typeof__(v68),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v70 = COERCE_AS(__typeof__(v70),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v72 = COERCE_AS(__typeof__(v72),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v74 = COERCE_AS(__typeof__(v74),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v77 = COERCE_AS(__typeof__(v77),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v79 = COERCE_AS(__typeof__(v79),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v89 = COERCE_AS(__typeof__(v89),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v91 = COERCE_AS(__typeof__(v91),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v96 = COERCE_AS(__typeof__(v96),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v98 = COERCE_AS(__typeof__(v98),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                    v159 = v158;
                    GameRoutine_7c0910_alt1(*a3, v157),
                        v104 = COERCE_AS(__typeof__(v104),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v106 = COERCE_AS(__typeof__(v106),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v109 = COERCE_AS(__typeof__(v109),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v111 = COERCE_AS(__typeof__(v111),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v113 = COERCE_AS(__typeof__(v113),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v115 = COERCE_AS(__typeof__(v115),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v119 = COERCE_AS(__typeof__(v119),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v121 = COERCE_AS(__typeof__(v121),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v131 = COERCE_AS(__typeof__(v131),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v133 = COERCE_AS(__typeof__(v133),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v140 = COERCE_AS(__typeof__(v140),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v142 = COERCE_AS(__typeof__(v142),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v145 = COERCE_AS(__typeof__(v145),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v147 = COERCE_AS(__typeof__(v147),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v150 = COERCE_AS(__typeof__(v150),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v152 = COERCE_AS(__typeof__(v152),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v158 = COERCE_AS(__typeof__(v158),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v160 = COERCE_AS(__typeof__(v160),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v17 = COERCE_AS(__typeof__(v17),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v20 = COERCE_AS(__typeof__(v20),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v22 = COERCE_AS(__typeof__(v22),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v26 = COERCE_AS(__typeof__(v26),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v28 = COERCE_AS(__typeof__(v28),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v30 = COERCE_AS(__typeof__(v30),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v32 = COERCE_AS(__typeof__(v32),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v37 = COERCE_AS(__typeof__(v37),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v43 = COERCE_AS(__typeof__(v43),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v49 = COERCE_AS(__typeof__(v49),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v51 = COERCE_AS(__typeof__(v51),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v53 = COERCE_AS(__typeof__(v53),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v55 = COERCE_AS(__typeof__(v55),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v58 = COERCE_AS(__typeof__(v58),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v60 = COERCE_AS(__typeof__(v60),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v63 = COERCE_AS(__typeof__(v63),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v65 = COERCE_AS(__typeof__(v65),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v68 = COERCE_AS(__typeof__(v68),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v70 = COERCE_AS(__typeof__(v70),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v72 = COERCE_AS(__typeof__(v72),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v74 = COERCE_AS(__typeof__(v74),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v77 = COERCE_AS(__typeof__(v77),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v79 = COERCE_AS(__typeof__(v79),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v89 = COERCE_AS(__typeof__(v89),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v91 = COERCE_AS(__typeof__(v91),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v96 = COERCE_AS(__typeof__(v96),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v98 = COERCE_AS(__typeof__(v98),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                  } while (v159 > v160);
                  *v154 = v153;
                }
                v81 = a1 + 1;
              } while (a1 + 1 != a2);
            }
            return;
          }
          if (a4 == 0) {
            if (v10 != a2) {
              v99 = (unsigned __int64)(v11 - 2) >> 1;
              v163 = a2;
              v166 = v99;
              do {
                v100 = v99;
                if (v166 >= v99) {
                  v101 = (2 * (v99 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                  v102 = &a1[v101];
                  if (2 * v99 + 2 < v11) {
                    v103 = v102[1];
                    GameRoutine_7c0910_alt1(*a3, *v102),
                        v104 = COERCE_AS(__typeof__(v104),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v106 = COERCE_AS(__typeof__(v106),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v109 = COERCE_AS(__typeof__(v109),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v111 = COERCE_AS(__typeof__(v111),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v113 = COERCE_AS(__typeof__(v113),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v115 = COERCE_AS(__typeof__(v115),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v119 = COERCE_AS(__typeof__(v119),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v121 = COERCE_AS(__typeof__(v121),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v131 = COERCE_AS(__typeof__(v131),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v133 = COERCE_AS(__typeof__(v133),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v140 = COERCE_AS(__typeof__(v140),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v142 = COERCE_AS(__typeof__(v142),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v145 = COERCE_AS(__typeof__(v145),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v147 = COERCE_AS(__typeof__(v147),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v150 = COERCE_AS(__typeof__(v150),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v152 = COERCE_AS(__typeof__(v152),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v158 = COERCE_AS(__typeof__(v158),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v160 = COERCE_AS(__typeof__(v160),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v17 = COERCE_AS(__typeof__(v17),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v20 = COERCE_AS(__typeof__(v20),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v22 = COERCE_AS(__typeof__(v22),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v26 = COERCE_AS(__typeof__(v26),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v28 = COERCE_AS(__typeof__(v28),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v30 = COERCE_AS(__typeof__(v30),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v32 = COERCE_AS(__typeof__(v32),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v37 = COERCE_AS(__typeof__(v37),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v43 = COERCE_AS(__typeof__(v43),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v49 = COERCE_AS(__typeof__(v49),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v51 = COERCE_AS(__typeof__(v51),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v53 = COERCE_AS(__typeof__(v53),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v55 = COERCE_AS(__typeof__(v55),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v58 = COERCE_AS(__typeof__(v58),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v60 = COERCE_AS(__typeof__(v60),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v63 = COERCE_AS(__typeof__(v63),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v65 = COERCE_AS(__typeof__(v65),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v68 = COERCE_AS(__typeof__(v68),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v70 = COERCE_AS(__typeof__(v70),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v72 = COERCE_AS(__typeof__(v72),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v74 = COERCE_AS(__typeof__(v74),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v77 = COERCE_AS(__typeof__(v77),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v79 = COERCE_AS(__typeof__(v79),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v89 = COERCE_AS(__typeof__(v89),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v91 = COERCE_AS(__typeof__(v91),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v96 = COERCE_AS(__typeof__(v96),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v98 = COERCE_AS(__typeof__(v98),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                    v105 = v104;
                    GameRoutine_7c0910_alt1(*a3, v103),
                        v104 = COERCE_AS(__typeof__(v104),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v106 = COERCE_AS(__typeof__(v106),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v109 = COERCE_AS(__typeof__(v109),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v111 = COERCE_AS(__typeof__(v111),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v113 = COERCE_AS(__typeof__(v113),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v115 = COERCE_AS(__typeof__(v115),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v119 = COERCE_AS(__typeof__(v119),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v121 = COERCE_AS(__typeof__(v121),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v131 = COERCE_AS(__typeof__(v131),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v133 = COERCE_AS(__typeof__(v133),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v140 = COERCE_AS(__typeof__(v140),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v142 = COERCE_AS(__typeof__(v142),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v145 = COERCE_AS(__typeof__(v145),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v147 = COERCE_AS(__typeof__(v147),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v150 = COERCE_AS(__typeof__(v150),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v152 = COERCE_AS(__typeof__(v152),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v158 = COERCE_AS(__typeof__(v158),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v160 = COERCE_AS(__typeof__(v160),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v17 = COERCE_AS(__typeof__(v17),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v20 = COERCE_AS(__typeof__(v20),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v22 = COERCE_AS(__typeof__(v22),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v26 = COERCE_AS(__typeof__(v26),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v28 = COERCE_AS(__typeof__(v28),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v30 = COERCE_AS(__typeof__(v30),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v32 = COERCE_AS(__typeof__(v32),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v37 = COERCE_AS(__typeof__(v37),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v43 = COERCE_AS(__typeof__(v43),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v49 = COERCE_AS(__typeof__(v49),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v51 = COERCE_AS(__typeof__(v51),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v53 = COERCE_AS(__typeof__(v53),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v55 = COERCE_AS(__typeof__(v55),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v58 = COERCE_AS(__typeof__(v58),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v60 = COERCE_AS(__typeof__(v60),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v63 = COERCE_AS(__typeof__(v63),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v65 = COERCE_AS(__typeof__(v65),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v68 = COERCE_AS(__typeof__(v68),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v70 = COERCE_AS(__typeof__(v70),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v72 = COERCE_AS(__typeof__(v72),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v74 = COERCE_AS(__typeof__(v74),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v77 = COERCE_AS(__typeof__(v77),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v79 = COERCE_AS(__typeof__(v79),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v89 = COERCE_AS(__typeof__(v89),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v91 = COERCE_AS(__typeof__(v91),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v96 = COERCE_AS(__typeof__(v96),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v98 = COERCE_AS(__typeof__(v98),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                    if (v105 > v106) {
                      ++v102;
                      v101 = 2 * v100 + 2;
                    }
                  }
                  v107 = &a1[v100];
                  v108 = *v107;
                  GameRoutine_7c0910_alt1(*a3, *v102),
                      v104 = COERCE_AS(__typeof__(v104),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v106 = COERCE_AS(__typeof__(v106),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v109 = COERCE_AS(__typeof__(v109),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v111 = COERCE_AS(__typeof__(v111),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v113 = COERCE_AS(__typeof__(v113),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v115 = COERCE_AS(__typeof__(v115),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v119 = COERCE_AS(__typeof__(v119),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v121 = COERCE_AS(__typeof__(v121),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v131 = COERCE_AS(__typeof__(v131),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v133 = COERCE_AS(__typeof__(v133),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v140 = COERCE_AS(__typeof__(v140),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v142 = COERCE_AS(__typeof__(v142),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v145 = COERCE_AS(__typeof__(v145),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v147 = COERCE_AS(__typeof__(v147),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v150 = COERCE_AS(__typeof__(v150),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v152 = COERCE_AS(__typeof__(v152),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v158 = COERCE_AS(__typeof__(v158),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v160 = COERCE_AS(__typeof__(v160),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v20 = COERCE_AS(__typeof__(v20),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v22 = COERCE_AS(__typeof__(v22),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v26 = COERCE_AS(__typeof__(v26),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v28 = COERCE_AS(__typeof__(v28),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v30 = COERCE_AS(__typeof__(v30),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v32 = COERCE_AS(__typeof__(v32),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v37 = COERCE_AS(__typeof__(v37),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v49 = COERCE_AS(__typeof__(v49),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v51 = COERCE_AS(__typeof__(v51),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v53 = COERCE_AS(__typeof__(v53),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v55 = COERCE_AS(__typeof__(v55),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v58 = COERCE_AS(__typeof__(v58),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v60 = COERCE_AS(__typeof__(v60),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v63 = COERCE_AS(__typeof__(v63),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v65 = COERCE_AS(__typeof__(v65),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v68 = COERCE_AS(__typeof__(v68),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v70 = COERCE_AS(__typeof__(v70),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v72 = COERCE_AS(__typeof__(v72),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v74 = COERCE_AS(__typeof__(v74),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v77 = COERCE_AS(__typeof__(v77),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v79 = COERCE_AS(__typeof__(v79),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v89 = COERCE_AS(__typeof__(v89),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v91 = COERCE_AS(__typeof__(v91),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v96 = COERCE_AS(__typeof__(v96),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v98 = COERCE_AS(__typeof__(v98),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                  v110 = v109;
                  GameRoutine_7c0910_alt1(*a3, v108),
                      v104 = COERCE_AS(__typeof__(v104),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v106 = COERCE_AS(__typeof__(v106),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v109 = COERCE_AS(__typeof__(v109),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v111 = COERCE_AS(__typeof__(v111),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v113 = COERCE_AS(__typeof__(v113),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v115 = COERCE_AS(__typeof__(v115),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v119 = COERCE_AS(__typeof__(v119),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v121 = COERCE_AS(__typeof__(v121),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v131 = COERCE_AS(__typeof__(v131),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v133 = COERCE_AS(__typeof__(v133),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v140 = COERCE_AS(__typeof__(v140),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v142 = COERCE_AS(__typeof__(v142),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v145 = COERCE_AS(__typeof__(v145),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v147 = COERCE_AS(__typeof__(v147),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v150 = COERCE_AS(__typeof__(v150),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v152 = COERCE_AS(__typeof__(v152),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v158 = COERCE_AS(__typeof__(v158),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v160 = COERCE_AS(__typeof__(v160),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v20 = COERCE_AS(__typeof__(v20),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v22 = COERCE_AS(__typeof__(v22),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v26 = COERCE_AS(__typeof__(v26),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v28 = COERCE_AS(__typeof__(v28),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v30 = COERCE_AS(__typeof__(v30),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v32 = COERCE_AS(__typeof__(v32),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v37 = COERCE_AS(__typeof__(v37),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v49 = COERCE_AS(__typeof__(v49),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v51 = COERCE_AS(__typeof__(v51),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v53 = COERCE_AS(__typeof__(v53),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v55 = COERCE_AS(__typeof__(v55),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v58 = COERCE_AS(__typeof__(v58),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v60 = COERCE_AS(__typeof__(v60),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v63 = COERCE_AS(__typeof__(v63),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v65 = COERCE_AS(__typeof__(v65),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v68 = COERCE_AS(__typeof__(v68),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v70 = COERCE_AS(__typeof__(v70),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v72 = COERCE_AS(__typeof__(v72),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v74 = COERCE_AS(__typeof__(v74),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v77 = COERCE_AS(__typeof__(v77),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v79 = COERCE_AS(__typeof__(v79),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v89 = COERCE_AS(__typeof__(v89),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v91 = COERCE_AS(__typeof__(v91),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v96 = COERCE_AS(__typeof__(v96),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v98 = COERCE_AS(__typeof__(v98),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                  if (v110 <= v111) {
                    v112 = *v107;
                    do {
                      v116 = v102;
                      *v107 = *v102;
                      if (v166 < v101) {
                        break;
                      }
                      v117 = 2 * v101 + 2;
                      v102 = &a1[(2 * v101) | 1];
                      v101 = (2 * v101) | 1;
                      if (v117 < v11) {
                        v118 = v102[1];
                        GameRoutine_7c0910_alt1(*a3, *v102),
                            v104 =
                                COERCE_AS(__typeof__(v104),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v106 =
                                COERCE_AS(__typeof__(v106),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v109 =
                                COERCE_AS(__typeof__(v109),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v111 =
                                COERCE_AS(__typeof__(v111),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v113 =
                                COERCE_AS(__typeof__(v113),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v115 =
                                COERCE_AS(__typeof__(v115),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v119 =
                                COERCE_AS(__typeof__(v119),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v121 =
                                COERCE_AS(__typeof__(v121),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v131 =
                                COERCE_AS(__typeof__(v131),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v133 =
                                COERCE_AS(__typeof__(v133),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v140 =
                                COERCE_AS(__typeof__(v140),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v142 =
                                COERCE_AS(__typeof__(v142),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v145 =
                                COERCE_AS(__typeof__(v145),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v147 =
                                COERCE_AS(__typeof__(v147),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v15 = COERCE_AS(__typeof__(v15),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v150 =
                                COERCE_AS(__typeof__(v150),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v152 =
                                COERCE_AS(__typeof__(v152),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v158 =
                                COERCE_AS(__typeof__(v158),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v160 =
                                COERCE_AS(__typeof__(v160),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v17 = COERCE_AS(__typeof__(v17),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v20 = COERCE_AS(__typeof__(v20),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v22 = COERCE_AS(__typeof__(v22),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v26 = COERCE_AS(__typeof__(v26),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v28 = COERCE_AS(__typeof__(v28),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v30 = COERCE_AS(__typeof__(v30),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v32 = COERCE_AS(__typeof__(v32),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v37 = COERCE_AS(__typeof__(v37),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v39 = COERCE_AS(__typeof__(v39),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v41 = COERCE_AS(__typeof__(v41),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v43 = COERCE_AS(__typeof__(v43),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v49 = COERCE_AS(__typeof__(v49),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v51 = COERCE_AS(__typeof__(v51),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v53 = COERCE_AS(__typeof__(v53),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v55 = COERCE_AS(__typeof__(v55),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v58 = COERCE_AS(__typeof__(v58),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v60 = COERCE_AS(__typeof__(v60),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v63 = COERCE_AS(__typeof__(v63),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v65 = COERCE_AS(__typeof__(v65),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v68 = COERCE_AS(__typeof__(v68),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v70 = COERCE_AS(__typeof__(v70),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v72 = COERCE_AS(__typeof__(v72),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v74 = COERCE_AS(__typeof__(v74),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v77 = COERCE_AS(__typeof__(v77),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v79 = COERCE_AS(__typeof__(v79),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v89 = COERCE_AS(__typeof__(v89),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v91 = COERCE_AS(__typeof__(v91),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v96 = COERCE_AS(__typeof__(v96),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v98 = COERCE_AS(__typeof__(v98),
                                            PSEUDO_REGISTER(float, "s0", "=w"));
                        v120 = v119;
                        GameRoutine_7c0910_alt1(*a3, v118),
                            v104 =
                                COERCE_AS(__typeof__(v104),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v106 =
                                COERCE_AS(__typeof__(v106),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v109 =
                                COERCE_AS(__typeof__(v109),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v111 =
                                COERCE_AS(__typeof__(v111),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v113 =
                                COERCE_AS(__typeof__(v113),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v115 =
                                COERCE_AS(__typeof__(v115),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v119 =
                                COERCE_AS(__typeof__(v119),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v121 =
                                COERCE_AS(__typeof__(v121),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v131 =
                                COERCE_AS(__typeof__(v131),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v133 =
                                COERCE_AS(__typeof__(v133),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v140 =
                                COERCE_AS(__typeof__(v140),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v142 =
                                COERCE_AS(__typeof__(v142),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v145 =
                                COERCE_AS(__typeof__(v145),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v147 =
                                COERCE_AS(__typeof__(v147),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v15 = COERCE_AS(__typeof__(v15),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v150 =
                                COERCE_AS(__typeof__(v150),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v152 =
                                COERCE_AS(__typeof__(v152),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v158 =
                                COERCE_AS(__typeof__(v158),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v160 =
                                COERCE_AS(__typeof__(v160),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v17 = COERCE_AS(__typeof__(v17),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v20 = COERCE_AS(__typeof__(v20),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v22 = COERCE_AS(__typeof__(v22),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v26 = COERCE_AS(__typeof__(v26),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v28 = COERCE_AS(__typeof__(v28),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v30 = COERCE_AS(__typeof__(v30),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v32 = COERCE_AS(__typeof__(v32),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v37 = COERCE_AS(__typeof__(v37),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v39 = COERCE_AS(__typeof__(v39),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v41 = COERCE_AS(__typeof__(v41),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v43 = COERCE_AS(__typeof__(v43),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v49 = COERCE_AS(__typeof__(v49),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v51 = COERCE_AS(__typeof__(v51),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v53 = COERCE_AS(__typeof__(v53),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v55 = COERCE_AS(__typeof__(v55),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v58 = COERCE_AS(__typeof__(v58),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v60 = COERCE_AS(__typeof__(v60),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v63 = COERCE_AS(__typeof__(v63),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v65 = COERCE_AS(__typeof__(v65),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v68 = COERCE_AS(__typeof__(v68),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v70 = COERCE_AS(__typeof__(v70),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v72 = COERCE_AS(__typeof__(v72),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v74 = COERCE_AS(__typeof__(v74),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v77 = COERCE_AS(__typeof__(v77),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v79 = COERCE_AS(__typeof__(v79),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v89 = COERCE_AS(__typeof__(v89),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v91 = COERCE_AS(__typeof__(v91),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v96 = COERCE_AS(__typeof__(v96),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v98 = COERCE_AS(__typeof__(v98),
                                            PSEUDO_REGISTER(float, "s0", "=w"));
                        if (v120 > v121) {
                          ++v102;
                          v101 = v117;
                        }
                      }
                      GameRoutine_7c0910_alt1(*a3, *v102),
                          v104 = COERCE_AS(__typeof__(v104),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v106 = COERCE_AS(__typeof__(v106),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v109 = COERCE_AS(__typeof__(v109),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v111 = COERCE_AS(__typeof__(v111),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v113 = COERCE_AS(__typeof__(v113),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v115 = COERCE_AS(__typeof__(v115),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v119 = COERCE_AS(__typeof__(v119),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v121 = COERCE_AS(__typeof__(v121),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v131 = COERCE_AS(__typeof__(v131),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v133 = COERCE_AS(__typeof__(v133),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v140 = COERCE_AS(__typeof__(v140),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v142 = COERCE_AS(__typeof__(v142),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v145 = COERCE_AS(__typeof__(v145),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v147 = COERCE_AS(__typeof__(v147),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v15 = COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v150 = COERCE_AS(__typeof__(v150),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v152 = COERCE_AS(__typeof__(v152),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v158 = COERCE_AS(__typeof__(v158),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v160 = COERCE_AS(__typeof__(v160),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v17 = COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v20 = COERCE_AS(__typeof__(v20),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v22 = COERCE_AS(__typeof__(v22),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v26 = COERCE_AS(__typeof__(v26),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v28 = COERCE_AS(__typeof__(v28),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v30 = COERCE_AS(__typeof__(v30),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v32 = COERCE_AS(__typeof__(v32),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v37 = COERCE_AS(__typeof__(v37),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v39 = COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v41 = COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v43 = COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v49 = COERCE_AS(__typeof__(v49),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v51 = COERCE_AS(__typeof__(v51),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v53 = COERCE_AS(__typeof__(v53),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v55 = COERCE_AS(__typeof__(v55),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v58 = COERCE_AS(__typeof__(v58),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v60 = COERCE_AS(__typeof__(v60),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v63 = COERCE_AS(__typeof__(v63),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v65 = COERCE_AS(__typeof__(v65),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v68 = COERCE_AS(__typeof__(v68),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v70 = COERCE_AS(__typeof__(v70),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v72 = COERCE_AS(__typeof__(v72),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v74 = COERCE_AS(__typeof__(v74),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v77 = COERCE_AS(__typeof__(v77),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v79 = COERCE_AS(__typeof__(v79),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v89 = COERCE_AS(__typeof__(v89),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v91 = COERCE_AS(__typeof__(v91),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v96 = COERCE_AS(__typeof__(v96),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v98 = COERCE_AS(__typeof__(v98),
                                          PSEUDO_REGISTER(float, "s0", "=w"));
                      v114 = v113;
                      GameRoutine_7c0910_alt1(*a3, v112),
                          v104 = COERCE_AS(__typeof__(v104),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v106 = COERCE_AS(__typeof__(v106),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v109 = COERCE_AS(__typeof__(v109),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v111 = COERCE_AS(__typeof__(v111),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v113 = COERCE_AS(__typeof__(v113),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v115 = COERCE_AS(__typeof__(v115),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v119 = COERCE_AS(__typeof__(v119),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v121 = COERCE_AS(__typeof__(v121),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v131 = COERCE_AS(__typeof__(v131),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v133 = COERCE_AS(__typeof__(v133),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v140 = COERCE_AS(__typeof__(v140),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v142 = COERCE_AS(__typeof__(v142),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v145 = COERCE_AS(__typeof__(v145),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v147 = COERCE_AS(__typeof__(v147),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v15 = COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v150 = COERCE_AS(__typeof__(v150),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v152 = COERCE_AS(__typeof__(v152),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v158 = COERCE_AS(__typeof__(v158),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v160 = COERCE_AS(__typeof__(v160),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v17 = COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v20 = COERCE_AS(__typeof__(v20),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v22 = COERCE_AS(__typeof__(v22),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v26 = COERCE_AS(__typeof__(v26),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v28 = COERCE_AS(__typeof__(v28),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v30 = COERCE_AS(__typeof__(v30),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v32 = COERCE_AS(__typeof__(v32),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v37 = COERCE_AS(__typeof__(v37),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v39 = COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v41 = COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v43 = COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v49 = COERCE_AS(__typeof__(v49),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v51 = COERCE_AS(__typeof__(v51),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v53 = COERCE_AS(__typeof__(v53),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v55 = COERCE_AS(__typeof__(v55),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v58 = COERCE_AS(__typeof__(v58),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v60 = COERCE_AS(__typeof__(v60),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v63 = COERCE_AS(__typeof__(v63),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v65 = COERCE_AS(__typeof__(v65),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v68 = COERCE_AS(__typeof__(v68),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v70 = COERCE_AS(__typeof__(v70),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v72 = COERCE_AS(__typeof__(v72),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v74 = COERCE_AS(__typeof__(v74),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v77 = COERCE_AS(__typeof__(v77),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v79 = COERCE_AS(__typeof__(v79),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v89 = COERCE_AS(__typeof__(v89),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v91 = COERCE_AS(__typeof__(v91),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v96 = COERCE_AS(__typeof__(v96),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v98 = COERCE_AS(__typeof__(v98),
                                          PSEUDO_REGISTER(float, "s0", "=w"));
                      v107 = v116;
                    } while (v114 <= v115);
                    *v116 = v112;
                  }
                }
                v99 = v100 - 1;
              } while (v100 != 0);
              v122 = v163;
              do {
                v164 = v122;
                v124 = 0;
                v125 = a1;
                v167 = *a1;
                do {
                  v126 = &v125[v124];
                  v127 = v125;
                  v125 = v126 + 1;
                  v128 = 2 * v124 + 2;
                  v124 = (2 * v124) | 1;
                  if (v128 < v11) {
                    v130 = v126[2];
                    v129 = v126 + 2;
                    GameRoutine_7c0910_alt1(*a3, *(v129 - 1)),
                        v104 = COERCE_AS(__typeof__(v104),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v106 = COERCE_AS(__typeof__(v106),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v109 = COERCE_AS(__typeof__(v109),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v111 = COERCE_AS(__typeof__(v111),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v113 = COERCE_AS(__typeof__(v113),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v115 = COERCE_AS(__typeof__(v115),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v119 = COERCE_AS(__typeof__(v119),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v121 = COERCE_AS(__typeof__(v121),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v131 = COERCE_AS(__typeof__(v131),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v133 = COERCE_AS(__typeof__(v133),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v140 = COERCE_AS(__typeof__(v140),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v142 = COERCE_AS(__typeof__(v142),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v145 = COERCE_AS(__typeof__(v145),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v147 = COERCE_AS(__typeof__(v147),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v150 = COERCE_AS(__typeof__(v150),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v152 = COERCE_AS(__typeof__(v152),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v158 = COERCE_AS(__typeof__(v158),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v160 = COERCE_AS(__typeof__(v160),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v17 = COERCE_AS(__typeof__(v17),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v20 = COERCE_AS(__typeof__(v20),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v22 = COERCE_AS(__typeof__(v22),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v26 = COERCE_AS(__typeof__(v26),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v28 = COERCE_AS(__typeof__(v28),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v30 = COERCE_AS(__typeof__(v30),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v32 = COERCE_AS(__typeof__(v32),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v37 = COERCE_AS(__typeof__(v37),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v43 = COERCE_AS(__typeof__(v43),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v49 = COERCE_AS(__typeof__(v49),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v51 = COERCE_AS(__typeof__(v51),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v53 = COERCE_AS(__typeof__(v53),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v55 = COERCE_AS(__typeof__(v55),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v58 = COERCE_AS(__typeof__(v58),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v60 = COERCE_AS(__typeof__(v60),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v63 = COERCE_AS(__typeof__(v63),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v65 = COERCE_AS(__typeof__(v65),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v68 = COERCE_AS(__typeof__(v68),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v70 = COERCE_AS(__typeof__(v70),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v72 = COERCE_AS(__typeof__(v72),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v74 = COERCE_AS(__typeof__(v74),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v77 = COERCE_AS(__typeof__(v77),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v79 = COERCE_AS(__typeof__(v79),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v89 = COERCE_AS(__typeof__(v89),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v91 = COERCE_AS(__typeof__(v91),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v96 = COERCE_AS(__typeof__(v96),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v98 = COERCE_AS(__typeof__(v98),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                    v132 = v131;
                    GameRoutine_7c0910_alt1(*a3, v130),
                        v104 = COERCE_AS(__typeof__(v104),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v106 = COERCE_AS(__typeof__(v106),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v109 = COERCE_AS(__typeof__(v109),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v111 = COERCE_AS(__typeof__(v111),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v113 = COERCE_AS(__typeof__(v113),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v115 = COERCE_AS(__typeof__(v115),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v119 = COERCE_AS(__typeof__(v119),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v121 = COERCE_AS(__typeof__(v121),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v131 = COERCE_AS(__typeof__(v131),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v133 = COERCE_AS(__typeof__(v133),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v140 = COERCE_AS(__typeof__(v140),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v142 = COERCE_AS(__typeof__(v142),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v145 = COERCE_AS(__typeof__(v145),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v147 = COERCE_AS(__typeof__(v147),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v150 = COERCE_AS(__typeof__(v150),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v152 = COERCE_AS(__typeof__(v152),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v158 = COERCE_AS(__typeof__(v158),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v160 = COERCE_AS(__typeof__(v160),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v17 = COERCE_AS(__typeof__(v17),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v20 = COERCE_AS(__typeof__(v20),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v22 = COERCE_AS(__typeof__(v22),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v26 = COERCE_AS(__typeof__(v26),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v28 = COERCE_AS(__typeof__(v28),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v30 = COERCE_AS(__typeof__(v30),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v32 = COERCE_AS(__typeof__(v32),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v37 = COERCE_AS(__typeof__(v37),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v43 = COERCE_AS(__typeof__(v43),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v49 = COERCE_AS(__typeof__(v49),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v51 = COERCE_AS(__typeof__(v51),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v53 = COERCE_AS(__typeof__(v53),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v55 = COERCE_AS(__typeof__(v55),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v58 = COERCE_AS(__typeof__(v58),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v60 = COERCE_AS(__typeof__(v60),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v63 = COERCE_AS(__typeof__(v63),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v65 = COERCE_AS(__typeof__(v65),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v68 = COERCE_AS(__typeof__(v68),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v70 = COERCE_AS(__typeof__(v70),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v72 = COERCE_AS(__typeof__(v72),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v74 = COERCE_AS(__typeof__(v74),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v77 = COERCE_AS(__typeof__(v77),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v79 = COERCE_AS(__typeof__(v79),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v89 = COERCE_AS(__typeof__(v89),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v91 = COERCE_AS(__typeof__(v91),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v96 = COERCE_AS(__typeof__(v96),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v98 = COERCE_AS(__typeof__(v98),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                    if (v132 > v133) {
                      v125 = v129;
                      v124 = v128;
                    }
                  }
                  *v127 = *v125;
                } while (v124 <= (__int64)((unsigned __int64)(v11 - 2) >> 1));
                v134 = v164 - 1;
                if (v125 == v164 - 1) {
                  v122 = v164 - 1;
                  *v125 = v167;
                }
                else {
                  v122 = v164 - 1;
                  *v125 = *v134;
                  *v134 = v167;
                  v135 = ((char*)v125 - (char*)a1 + 8) >> 3;
                  v123 = v135 < 2;
                  v136 = v135 - 2;
                  if (!v123) {
                    v137 = v136 >> 1;
                    v138 = *v125;
                    v139 = &a1[v136 >> 1];
                    GameRoutine_7c0910_alt1(*a3, *v139),
                        v104 = COERCE_AS(__typeof__(v104),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v106 = COERCE_AS(__typeof__(v106),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v109 = COERCE_AS(__typeof__(v109),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v111 = COERCE_AS(__typeof__(v111),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v113 = COERCE_AS(__typeof__(v113),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v115 = COERCE_AS(__typeof__(v115),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v119 = COERCE_AS(__typeof__(v119),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v121 = COERCE_AS(__typeof__(v121),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v131 = COERCE_AS(__typeof__(v131),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v133 = COERCE_AS(__typeof__(v133),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v140 = COERCE_AS(__typeof__(v140),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v142 = COERCE_AS(__typeof__(v142),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v145 = COERCE_AS(__typeof__(v145),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v147 = COERCE_AS(__typeof__(v147),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v150 = COERCE_AS(__typeof__(v150),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v152 = COERCE_AS(__typeof__(v152),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v158 = COERCE_AS(__typeof__(v158),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v160 = COERCE_AS(__typeof__(v160),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v17 = COERCE_AS(__typeof__(v17),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v20 = COERCE_AS(__typeof__(v20),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v22 = COERCE_AS(__typeof__(v22),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v26 = COERCE_AS(__typeof__(v26),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v28 = COERCE_AS(__typeof__(v28),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v30 = COERCE_AS(__typeof__(v30),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v32 = COERCE_AS(__typeof__(v32),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v37 = COERCE_AS(__typeof__(v37),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v43 = COERCE_AS(__typeof__(v43),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v49 = COERCE_AS(__typeof__(v49),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v51 = COERCE_AS(__typeof__(v51),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v53 = COERCE_AS(__typeof__(v53),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v55 = COERCE_AS(__typeof__(v55),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v58 = COERCE_AS(__typeof__(v58),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v60 = COERCE_AS(__typeof__(v60),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v63 = COERCE_AS(__typeof__(v63),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v65 = COERCE_AS(__typeof__(v65),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v68 = COERCE_AS(__typeof__(v68),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v70 = COERCE_AS(__typeof__(v70),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v72 = COERCE_AS(__typeof__(v72),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v74 = COERCE_AS(__typeof__(v74),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v77 = COERCE_AS(__typeof__(v77),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v79 = COERCE_AS(__typeof__(v79),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v89 = COERCE_AS(__typeof__(v89),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v91 = COERCE_AS(__typeof__(v91),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v96 = COERCE_AS(__typeof__(v96),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v98 = COERCE_AS(__typeof__(v98),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                    v141 = v140;
                    GameRoutine_7c0910_alt1(*a3, v138),
                        v104 = COERCE_AS(__typeof__(v104),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v106 = COERCE_AS(__typeof__(v106),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v109 = COERCE_AS(__typeof__(v109),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v111 = COERCE_AS(__typeof__(v111),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v113 = COERCE_AS(__typeof__(v113),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v115 = COERCE_AS(__typeof__(v115),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v119 = COERCE_AS(__typeof__(v119),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v121 = COERCE_AS(__typeof__(v121),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v131 = COERCE_AS(__typeof__(v131),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v133 = COERCE_AS(__typeof__(v133),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v140 = COERCE_AS(__typeof__(v140),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v142 = COERCE_AS(__typeof__(v142),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v145 = COERCE_AS(__typeof__(v145),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v147 = COERCE_AS(__typeof__(v147),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v150 = COERCE_AS(__typeof__(v150),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v152 = COERCE_AS(__typeof__(v152),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v158 = COERCE_AS(__typeof__(v158),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v160 = COERCE_AS(__typeof__(v160),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v17 = COERCE_AS(__typeof__(v17),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v20 = COERCE_AS(__typeof__(v20),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v22 = COERCE_AS(__typeof__(v22),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v26 = COERCE_AS(__typeof__(v26),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v28 = COERCE_AS(__typeof__(v28),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v30 = COERCE_AS(__typeof__(v30),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v32 = COERCE_AS(__typeof__(v32),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v37 = COERCE_AS(__typeof__(v37),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v43 = COERCE_AS(__typeof__(v43),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v49 = COERCE_AS(__typeof__(v49),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v51 = COERCE_AS(__typeof__(v51),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v53 = COERCE_AS(__typeof__(v53),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v55 = COERCE_AS(__typeof__(v55),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v58 = COERCE_AS(__typeof__(v58),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v60 = COERCE_AS(__typeof__(v60),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v63 = COERCE_AS(__typeof__(v63),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v65 = COERCE_AS(__typeof__(v65),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v68 = COERCE_AS(__typeof__(v68),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v70 = COERCE_AS(__typeof__(v70),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v72 = COERCE_AS(__typeof__(v72),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v74 = COERCE_AS(__typeof__(v74),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v77 = COERCE_AS(__typeof__(v77),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v79 = COERCE_AS(__typeof__(v79),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v89 = COERCE_AS(__typeof__(v89),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v91 = COERCE_AS(__typeof__(v91),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v96 = COERCE_AS(__typeof__(v96),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v98 = COERCE_AS(__typeof__(v98),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                    if (v141 > v142) {
                      v143 = *v125;
                      do {
                        v144 = v139;
                        *v125 = *v139;
                        if (v137 == 0) {
                          break;
                        }
                        v137 = (v137 - 1) >> 1;
                        v139 = &a1[v137];
                        GameRoutine_7c0910_alt1(*a3, *v139),
                            v104 =
                                COERCE_AS(__typeof__(v104),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v106 =
                                COERCE_AS(__typeof__(v106),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v109 =
                                COERCE_AS(__typeof__(v109),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v111 =
                                COERCE_AS(__typeof__(v111),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v113 =
                                COERCE_AS(__typeof__(v113),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v115 =
                                COERCE_AS(__typeof__(v115),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v119 =
                                COERCE_AS(__typeof__(v119),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v121 =
                                COERCE_AS(__typeof__(v121),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v131 =
                                COERCE_AS(__typeof__(v131),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v133 =
                                COERCE_AS(__typeof__(v133),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v140 =
                                COERCE_AS(__typeof__(v140),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v142 =
                                COERCE_AS(__typeof__(v142),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v145 =
                                COERCE_AS(__typeof__(v145),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v147 =
                                COERCE_AS(__typeof__(v147),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v15 = COERCE_AS(__typeof__(v15),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v150 =
                                COERCE_AS(__typeof__(v150),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v152 =
                                COERCE_AS(__typeof__(v152),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v158 =
                                COERCE_AS(__typeof__(v158),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v160 =
                                COERCE_AS(__typeof__(v160),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v17 = COERCE_AS(__typeof__(v17),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v20 = COERCE_AS(__typeof__(v20),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v22 = COERCE_AS(__typeof__(v22),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v26 = COERCE_AS(__typeof__(v26),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v28 = COERCE_AS(__typeof__(v28),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v30 = COERCE_AS(__typeof__(v30),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v32 = COERCE_AS(__typeof__(v32),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v37 = COERCE_AS(__typeof__(v37),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v39 = COERCE_AS(__typeof__(v39),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v41 = COERCE_AS(__typeof__(v41),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v43 = COERCE_AS(__typeof__(v43),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v49 = COERCE_AS(__typeof__(v49),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v51 = COERCE_AS(__typeof__(v51),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v53 = COERCE_AS(__typeof__(v53),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v55 = COERCE_AS(__typeof__(v55),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v58 = COERCE_AS(__typeof__(v58),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v60 = COERCE_AS(__typeof__(v60),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v63 = COERCE_AS(__typeof__(v63),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v65 = COERCE_AS(__typeof__(v65),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v68 = COERCE_AS(__typeof__(v68),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v70 = COERCE_AS(__typeof__(v70),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v72 = COERCE_AS(__typeof__(v72),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v74 = COERCE_AS(__typeof__(v74),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v77 = COERCE_AS(__typeof__(v77),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v79 = COERCE_AS(__typeof__(v79),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v89 = COERCE_AS(__typeof__(v89),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v91 = COERCE_AS(__typeof__(v91),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v96 = COERCE_AS(__typeof__(v96),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v98 = COERCE_AS(__typeof__(v98),
                                            PSEUDO_REGISTER(float, "s0", "=w"));
                        v146 = v145;
                        GameRoutine_7c0910_alt1(*a3, v143),
                            v104 =
                                COERCE_AS(__typeof__(v104),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v106 =
                                COERCE_AS(__typeof__(v106),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v109 =
                                COERCE_AS(__typeof__(v109),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v111 =
                                COERCE_AS(__typeof__(v111),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v113 =
                                COERCE_AS(__typeof__(v113),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v115 =
                                COERCE_AS(__typeof__(v115),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v119 =
                                COERCE_AS(__typeof__(v119),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v121 =
                                COERCE_AS(__typeof__(v121),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v131 =
                                COERCE_AS(__typeof__(v131),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v133 =
                                COERCE_AS(__typeof__(v133),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v140 =
                                COERCE_AS(__typeof__(v140),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v142 =
                                COERCE_AS(__typeof__(v142),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v145 =
                                COERCE_AS(__typeof__(v145),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v147 =
                                COERCE_AS(__typeof__(v147),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v15 = COERCE_AS(__typeof__(v15),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v150 =
                                COERCE_AS(__typeof__(v150),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v152 =
                                COERCE_AS(__typeof__(v152),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v158 =
                                COERCE_AS(__typeof__(v158),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v160 =
                                COERCE_AS(__typeof__(v160),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v17 = COERCE_AS(__typeof__(v17),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v20 = COERCE_AS(__typeof__(v20),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v22 = COERCE_AS(__typeof__(v22),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v26 = COERCE_AS(__typeof__(v26),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v28 = COERCE_AS(__typeof__(v28),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v30 = COERCE_AS(__typeof__(v30),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v32 = COERCE_AS(__typeof__(v32),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v37 = COERCE_AS(__typeof__(v37),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v39 = COERCE_AS(__typeof__(v39),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v41 = COERCE_AS(__typeof__(v41),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v43 = COERCE_AS(__typeof__(v43),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v49 = COERCE_AS(__typeof__(v49),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v51 = COERCE_AS(__typeof__(v51),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v53 = COERCE_AS(__typeof__(v53),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v55 = COERCE_AS(__typeof__(v55),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v58 = COERCE_AS(__typeof__(v58),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v60 = COERCE_AS(__typeof__(v60),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v63 = COERCE_AS(__typeof__(v63),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v65 = COERCE_AS(__typeof__(v65),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v68 = COERCE_AS(__typeof__(v68),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v70 = COERCE_AS(__typeof__(v70),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v72 = COERCE_AS(__typeof__(v72),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v74 = COERCE_AS(__typeof__(v74),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v77 = COERCE_AS(__typeof__(v77),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v79 = COERCE_AS(__typeof__(v79),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v89 = COERCE_AS(__typeof__(v89),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v91 = COERCE_AS(__typeof__(v91),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v96 = COERCE_AS(__typeof__(v96),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v98 = COERCE_AS(__typeof__(v98),
                                            PSEUDO_REGISTER(float, "s0", "=w"));
                        v125 = v144;
                      } while (v146 > v147);
                      *v144 = v143;
                    }
                  }
                }
                v123 = v11-- <= 2;
              } while (!v123);
            }
            return;
          }
          v12 = &v10[(unsigned __int64)v11 >> 1];
          if ((unsigned __int64)v11 < 0x81) {
            break;
          }
          game_map_75a370(a1, &a1[(unsigned __int64)v11 >> 1], v165, a3),
              v104 = COERCE_AS(__typeof__(v104),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v106 = COERCE_AS(__typeof__(v106),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v109 = COERCE_AS(__typeof__(v109),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v111 = COERCE_AS(__typeof__(v111),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v113 = COERCE_AS(__typeof__(v113),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v115 = COERCE_AS(__typeof__(v115),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v119 = COERCE_AS(__typeof__(v119),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v131 = COERCE_AS(__typeof__(v131),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v140 = COERCE_AS(__typeof__(v140),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v142 = COERCE_AS(__typeof__(v142),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v145 = COERCE_AS(__typeof__(v145),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v152 = COERCE_AS(__typeof__(v152),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v158 = COERCE_AS(__typeof__(v158),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v160 = COERCE_AS(__typeof__(v160),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v32 = COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v53 = COERCE_AS(__typeof__(v53),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v55 = COERCE_AS(__typeof__(v55),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v60 = COERCE_AS(__typeof__(v60),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v72 = COERCE_AS(__typeof__(v72),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v74 = COERCE_AS(__typeof__(v74),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v77 = COERCE_AS(__typeof__(v77),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v98 = COERCE_AS(__typeof__(v98),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          game_map_75a370(a1 + 1, v12 - 1, v162, a3),
              v104 = COERCE_AS(__typeof__(v104),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v106 = COERCE_AS(__typeof__(v106),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v109 = COERCE_AS(__typeof__(v109),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v111 = COERCE_AS(__typeof__(v111),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v113 = COERCE_AS(__typeof__(v113),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v115 = COERCE_AS(__typeof__(v115),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v119 = COERCE_AS(__typeof__(v119),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v131 = COERCE_AS(__typeof__(v131),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v140 = COERCE_AS(__typeof__(v140),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v142 = COERCE_AS(__typeof__(v142),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v145 = COERCE_AS(__typeof__(v145),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v152 = COERCE_AS(__typeof__(v152),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v158 = COERCE_AS(__typeof__(v158),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v160 = COERCE_AS(__typeof__(v160),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v32 = COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v53 = COERCE_AS(__typeof__(v53),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v55 = COERCE_AS(__typeof__(v55),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v60 = COERCE_AS(__typeof__(v60),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v72 = COERCE_AS(__typeof__(v72),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v74 = COERCE_AS(__typeof__(v74),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v77 = COERCE_AS(__typeof__(v77),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v98 = COERCE_AS(__typeof__(v98),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          game_map_75a370(a1 + 2, v12 + 1, v161, a3),
              v104 = COERCE_AS(__typeof__(v104),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v106 = COERCE_AS(__typeof__(v106),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v109 = COERCE_AS(__typeof__(v109),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v111 = COERCE_AS(__typeof__(v111),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v113 = COERCE_AS(__typeof__(v113),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v115 = COERCE_AS(__typeof__(v115),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v119 = COERCE_AS(__typeof__(v119),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v131 = COERCE_AS(__typeof__(v131),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v140 = COERCE_AS(__typeof__(v140),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v142 = COERCE_AS(__typeof__(v142),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v145 = COERCE_AS(__typeof__(v145),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v152 = COERCE_AS(__typeof__(v152),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v158 = COERCE_AS(__typeof__(v158),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v160 = COERCE_AS(__typeof__(v160),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v32 = COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v53 = COERCE_AS(__typeof__(v53),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v55 = COERCE_AS(__typeof__(v55),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v60 = COERCE_AS(__typeof__(v60),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v72 = COERCE_AS(__typeof__(v72),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v74 = COERCE_AS(__typeof__(v74),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v77 = COERCE_AS(__typeof__(v77),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v98 = COERCE_AS(__typeof__(v98),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          game_map_75a370(v12 - 1, &a1[(unsigned __int64)v11 >> 1], v12 + 1,
                          a3),
              v104 = COERCE_AS(__typeof__(v104),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v106 = COERCE_AS(__typeof__(v106),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v109 = COERCE_AS(__typeof__(v109),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v111 = COERCE_AS(__typeof__(v111),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v113 = COERCE_AS(__typeof__(v113),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v115 = COERCE_AS(__typeof__(v115),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v119 = COERCE_AS(__typeof__(v119),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v131 = COERCE_AS(__typeof__(v131),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v140 = COERCE_AS(__typeof__(v140),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v142 = COERCE_AS(__typeof__(v142),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v145 = COERCE_AS(__typeof__(v145),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v152 = COERCE_AS(__typeof__(v152),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v158 = COERCE_AS(__typeof__(v158),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v160 = COERCE_AS(__typeof__(v160),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v32 = COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v53 = COERCE_AS(__typeof__(v53),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v55 = COERCE_AS(__typeof__(v55),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v60 = COERCE_AS(__typeof__(v60),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v72 = COERCE_AS(__typeof__(v72),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v74 = COERCE_AS(__typeof__(v74),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v77 = COERCE_AS(__typeof__(v77),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v98 = COERCE_AS(__typeof__(v98),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v13 = *a1;
          *a1 = *v12;
          *v12 = v13;
          --a4;
          if ((a5 & 1) != 0) {
            goto LABEL_16;
          }
        LABEL_15:
          v14 = *a1;
          GameRoutine_7c0910_alt1(*a3, *(a1 - 1)),
              v104 = COERCE_AS(__typeof__(v104),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v106 = COERCE_AS(__typeof__(v106),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v109 = COERCE_AS(__typeof__(v109),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v111 = COERCE_AS(__typeof__(v111),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v113 = COERCE_AS(__typeof__(v113),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v115 = COERCE_AS(__typeof__(v115),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v119 = COERCE_AS(__typeof__(v119),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v131 = COERCE_AS(__typeof__(v131),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v140 = COERCE_AS(__typeof__(v140),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v142 = COERCE_AS(__typeof__(v142),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v145 = COERCE_AS(__typeof__(v145),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v152 = COERCE_AS(__typeof__(v152),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v158 = COERCE_AS(__typeof__(v158),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v160 = COERCE_AS(__typeof__(v160),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v32 = COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v53 = COERCE_AS(__typeof__(v53),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v55 = COERCE_AS(__typeof__(v55),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v60 = COERCE_AS(__typeof__(v60),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v72 = COERCE_AS(__typeof__(v72),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v74 = COERCE_AS(__typeof__(v74),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v77 = COERCE_AS(__typeof__(v77),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v98 = COERCE_AS(__typeof__(v98),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v16 = v15;
          GameRoutine_7c0910_alt1(*a3, v14),
              v104 = COERCE_AS(__typeof__(v104),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v106 = COERCE_AS(__typeof__(v106),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v109 = COERCE_AS(__typeof__(v109),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v111 = COERCE_AS(__typeof__(v111),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v113 = COERCE_AS(__typeof__(v113),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v115 = COERCE_AS(__typeof__(v115),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v119 = COERCE_AS(__typeof__(v119),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v131 = COERCE_AS(__typeof__(v131),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v140 = COERCE_AS(__typeof__(v140),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v142 = COERCE_AS(__typeof__(v142),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v145 = COERCE_AS(__typeof__(v145),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v152 = COERCE_AS(__typeof__(v152),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v158 = COERCE_AS(__typeof__(v158),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v160 = COERCE_AS(__typeof__(v160),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v32 = COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v53 = COERCE_AS(__typeof__(v53),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v55 = COERCE_AS(__typeof__(v55),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v60 = COERCE_AS(__typeof__(v60),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v72 = COERCE_AS(__typeof__(v72),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v74 = COERCE_AS(__typeof__(v74),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v77 = COERCE_AS(__typeof__(v77),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v98 = COERCE_AS(__typeof__(v98),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          if (v16 > v17) {
            goto LABEL_16;
          }
          v47 = *a1;
          v48 = *v165;
          GameRoutine_7c0910_alt1(*a3, *a1),
              v104 = COERCE_AS(__typeof__(v104),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v106 = COERCE_AS(__typeof__(v106),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v109 = COERCE_AS(__typeof__(v109),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v111 = COERCE_AS(__typeof__(v111),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v113 = COERCE_AS(__typeof__(v113),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v115 = COERCE_AS(__typeof__(v115),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v119 = COERCE_AS(__typeof__(v119),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v131 = COERCE_AS(__typeof__(v131),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v140 = COERCE_AS(__typeof__(v140),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v142 = COERCE_AS(__typeof__(v142),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v145 = COERCE_AS(__typeof__(v145),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v152 = COERCE_AS(__typeof__(v152),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v158 = COERCE_AS(__typeof__(v158),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v160 = COERCE_AS(__typeof__(v160),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v32 = COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v53 = COERCE_AS(__typeof__(v53),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v55 = COERCE_AS(__typeof__(v55),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v60 = COERCE_AS(__typeof__(v60),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v72 = COERCE_AS(__typeof__(v72),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v74 = COERCE_AS(__typeof__(v74),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v77 = COERCE_AS(__typeof__(v77),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v98 = COERCE_AS(__typeof__(v98),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v50 = v49;
          GameRoutine_7c0910_alt1(*a3, v48),
              v104 = COERCE_AS(__typeof__(v104),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v106 = COERCE_AS(__typeof__(v106),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v109 = COERCE_AS(__typeof__(v109),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v111 = COERCE_AS(__typeof__(v111),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v113 = COERCE_AS(__typeof__(v113),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v115 = COERCE_AS(__typeof__(v115),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v119 = COERCE_AS(__typeof__(v119),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v131 = COERCE_AS(__typeof__(v131),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v140 = COERCE_AS(__typeof__(v140),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v142 = COERCE_AS(__typeof__(v142),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v145 = COERCE_AS(__typeof__(v145),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v152 = COERCE_AS(__typeof__(v152),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v158 = COERCE_AS(__typeof__(v158),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v160 = COERCE_AS(__typeof__(v160),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v32 = COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v53 = COERCE_AS(__typeof__(v53),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v55 = COERCE_AS(__typeof__(v55),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v60 = COERCE_AS(__typeof__(v60),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v72 = COERCE_AS(__typeof__(v72),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v74 = COERCE_AS(__typeof__(v74),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v77 = COERCE_AS(__typeof__(v77),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v98 = COERCE_AS(__typeof__(v98),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          if (v50 <= v51) {
            v56 = a1 + 1;
            do {
              v10 = v56;
              if (v56 >= a2) {
                break;
              }
              ++v56;
              v57 = *v10;
              GameRoutine_7c0910_alt1(*a3, v47),
                  v104 = COERCE_AS(__typeof__(v104),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v109 = COERCE_AS(__typeof__(v109),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v113 = COERCE_AS(__typeof__(v113),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v115 = COERCE_AS(__typeof__(v115),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v119 = COERCE_AS(__typeof__(v119),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v121 = COERCE_AS(__typeof__(v121),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v133 = COERCE_AS(__typeof__(v133),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v140 = COERCE_AS(__typeof__(v140),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v142 = COERCE_AS(__typeof__(v142),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v145 = COERCE_AS(__typeof__(v145),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v147 = COERCE_AS(__typeof__(v147),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v150 = COERCE_AS(__typeof__(v150),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v152 = COERCE_AS(__typeof__(v152),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v158 = COERCE_AS(__typeof__(v158),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v160 = COERCE_AS(__typeof__(v160),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v22 = COERCE_AS(__typeof__(v22),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v30 = COERCE_AS(__typeof__(v30),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v32 = COERCE_AS(__typeof__(v32),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v37 = COERCE_AS(__typeof__(v37),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v49 = COERCE_AS(__typeof__(v49),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v51 = COERCE_AS(__typeof__(v51),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v53 = COERCE_AS(__typeof__(v53),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v60 = COERCE_AS(__typeof__(v60),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v65 = COERCE_AS(__typeof__(v65),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v72 = COERCE_AS(__typeof__(v72),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v74 = COERCE_AS(__typeof__(v74),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v77 = COERCE_AS(__typeof__(v77),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v79 = COERCE_AS(__typeof__(v79),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v89 = COERCE_AS(__typeof__(v89),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v91 = COERCE_AS(__typeof__(v91),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v96 = COERCE_AS(__typeof__(v96),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v59 = v58;
              GameRoutine_7c0910_alt1(*a3, v57),
                  v104 = COERCE_AS(__typeof__(v104),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v109 = COERCE_AS(__typeof__(v109),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v113 = COERCE_AS(__typeof__(v113),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v115 = COERCE_AS(__typeof__(v115),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v119 = COERCE_AS(__typeof__(v119),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v121 = COERCE_AS(__typeof__(v121),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v133 = COERCE_AS(__typeof__(v133),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v140 = COERCE_AS(__typeof__(v140),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v142 = COERCE_AS(__typeof__(v142),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v145 = COERCE_AS(__typeof__(v145),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v147 = COERCE_AS(__typeof__(v147),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v150 = COERCE_AS(__typeof__(v150),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v152 = COERCE_AS(__typeof__(v152),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v158 = COERCE_AS(__typeof__(v158),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v160 = COERCE_AS(__typeof__(v160),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v22 = COERCE_AS(__typeof__(v22),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v30 = COERCE_AS(__typeof__(v30),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v32 = COERCE_AS(__typeof__(v32),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v37 = COERCE_AS(__typeof__(v37),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v49 = COERCE_AS(__typeof__(v49),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v51 = COERCE_AS(__typeof__(v51),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v53 = COERCE_AS(__typeof__(v53),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v60 = COERCE_AS(__typeof__(v60),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v65 = COERCE_AS(__typeof__(v65),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v72 = COERCE_AS(__typeof__(v72),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v74 = COERCE_AS(__typeof__(v74),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v77 = COERCE_AS(__typeof__(v77),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v79 = COERCE_AS(__typeof__(v79),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v89 = COERCE_AS(__typeof__(v89),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v91 = COERCE_AS(__typeof__(v91),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v96 = COERCE_AS(__typeof__(v96),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
            } while (v59 <= v60);
          }
          else {
            v10 = a1;
            do {
              v52 = v10[1];
              ++v10;
              GameRoutine_7c0910_alt1(*a3, v47),
                  v104 = COERCE_AS(__typeof__(v104),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v109 = COERCE_AS(__typeof__(v109),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v113 = COERCE_AS(__typeof__(v113),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v115 = COERCE_AS(__typeof__(v115),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v119 = COERCE_AS(__typeof__(v119),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v121 = COERCE_AS(__typeof__(v121),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v133 = COERCE_AS(__typeof__(v133),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v140 = COERCE_AS(__typeof__(v140),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v142 = COERCE_AS(__typeof__(v142),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v145 = COERCE_AS(__typeof__(v145),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v147 = COERCE_AS(__typeof__(v147),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v150 = COERCE_AS(__typeof__(v150),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v152 = COERCE_AS(__typeof__(v152),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v158 = COERCE_AS(__typeof__(v158),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v160 = COERCE_AS(__typeof__(v160),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v22 = COERCE_AS(__typeof__(v22),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v30 = COERCE_AS(__typeof__(v30),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v32 = COERCE_AS(__typeof__(v32),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v37 = COERCE_AS(__typeof__(v37),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v49 = COERCE_AS(__typeof__(v49),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v51 = COERCE_AS(__typeof__(v51),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v53 = COERCE_AS(__typeof__(v53),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v60 = COERCE_AS(__typeof__(v60),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v65 = COERCE_AS(__typeof__(v65),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v72 = COERCE_AS(__typeof__(v72),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v74 = COERCE_AS(__typeof__(v74),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v77 = COERCE_AS(__typeof__(v77),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v79 = COERCE_AS(__typeof__(v79),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v89 = COERCE_AS(__typeof__(v89),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v91 = COERCE_AS(__typeof__(v91),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v96 = COERCE_AS(__typeof__(v96),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v54 = v53;
              GameRoutine_7c0910_alt1(*a3, v52),
                  v104 = COERCE_AS(__typeof__(v104),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v109 = COERCE_AS(__typeof__(v109),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v113 = COERCE_AS(__typeof__(v113),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v115 = COERCE_AS(__typeof__(v115),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v119 = COERCE_AS(__typeof__(v119),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v121 = COERCE_AS(__typeof__(v121),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v133 = COERCE_AS(__typeof__(v133),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v140 = COERCE_AS(__typeof__(v140),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v142 = COERCE_AS(__typeof__(v142),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v145 = COERCE_AS(__typeof__(v145),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v147 = COERCE_AS(__typeof__(v147),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v150 = COERCE_AS(__typeof__(v150),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v152 = COERCE_AS(__typeof__(v152),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v158 = COERCE_AS(__typeof__(v158),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v160 = COERCE_AS(__typeof__(v160),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v22 = COERCE_AS(__typeof__(v22),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v30 = COERCE_AS(__typeof__(v30),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v32 = COERCE_AS(__typeof__(v32),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v37 = COERCE_AS(__typeof__(v37),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v49 = COERCE_AS(__typeof__(v49),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v51 = COERCE_AS(__typeof__(v51),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v53 = COERCE_AS(__typeof__(v53),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v60 = COERCE_AS(__typeof__(v60),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v65 = COERCE_AS(__typeof__(v65),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v72 = COERCE_AS(__typeof__(v72),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v74 = COERCE_AS(__typeof__(v74),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v77 = COERCE_AS(__typeof__(v77),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v79 = COERCE_AS(__typeof__(v79),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v89 = COERCE_AS(__typeof__(v89),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v91 = COERCE_AS(__typeof__(v91),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v96 = COERCE_AS(__typeof__(v96),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
            } while (v54 <= v55);
          }
          v61 = a2;
          if (v10 < a2) {
            v61 = a2;
            do {
              v62 = *--v61;
              GameRoutine_7c0910_alt1(*a3, v47),
                  v104 = COERCE_AS(__typeof__(v104),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v109 = COERCE_AS(__typeof__(v109),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v113 = COERCE_AS(__typeof__(v113),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v115 = COERCE_AS(__typeof__(v115),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v119 = COERCE_AS(__typeof__(v119),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v121 = COERCE_AS(__typeof__(v121),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v133 = COERCE_AS(__typeof__(v133),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v140 = COERCE_AS(__typeof__(v140),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v142 = COERCE_AS(__typeof__(v142),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v145 = COERCE_AS(__typeof__(v145),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v147 = COERCE_AS(__typeof__(v147),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v150 = COERCE_AS(__typeof__(v150),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v152 = COERCE_AS(__typeof__(v152),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v158 = COERCE_AS(__typeof__(v158),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v160 = COERCE_AS(__typeof__(v160),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v22 = COERCE_AS(__typeof__(v22),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v30 = COERCE_AS(__typeof__(v30),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v32 = COERCE_AS(__typeof__(v32),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v37 = COERCE_AS(__typeof__(v37),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v49 = COERCE_AS(__typeof__(v49),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v51 = COERCE_AS(__typeof__(v51),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v53 = COERCE_AS(__typeof__(v53),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v60 = COERCE_AS(__typeof__(v60),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v65 = COERCE_AS(__typeof__(v65),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v72 = COERCE_AS(__typeof__(v72),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v74 = COERCE_AS(__typeof__(v74),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v77 = COERCE_AS(__typeof__(v77),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v79 = COERCE_AS(__typeof__(v79),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v89 = COERCE_AS(__typeof__(v89),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v91 = COERCE_AS(__typeof__(v91),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v96 = COERCE_AS(__typeof__(v96),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v64 = v63;
              GameRoutine_7c0910_alt1(*a3, v62),
                  v104 = COERCE_AS(__typeof__(v104),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v109 = COERCE_AS(__typeof__(v109),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v113 = COERCE_AS(__typeof__(v113),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v115 = COERCE_AS(__typeof__(v115),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v119 = COERCE_AS(__typeof__(v119),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v121 = COERCE_AS(__typeof__(v121),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v133 = COERCE_AS(__typeof__(v133),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v140 = COERCE_AS(__typeof__(v140),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v142 = COERCE_AS(__typeof__(v142),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v145 = COERCE_AS(__typeof__(v145),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v147 = COERCE_AS(__typeof__(v147),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v150 = COERCE_AS(__typeof__(v150),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v152 = COERCE_AS(__typeof__(v152),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v158 = COERCE_AS(__typeof__(v158),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v160 = COERCE_AS(__typeof__(v160),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v22 = COERCE_AS(__typeof__(v22),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v30 = COERCE_AS(__typeof__(v30),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v32 = COERCE_AS(__typeof__(v32),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v37 = COERCE_AS(__typeof__(v37),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v49 = COERCE_AS(__typeof__(v49),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v51 = COERCE_AS(__typeof__(v51),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v53 = COERCE_AS(__typeof__(v53),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v60 = COERCE_AS(__typeof__(v60),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v65 = COERCE_AS(__typeof__(v65),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v72 = COERCE_AS(__typeof__(v72),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v74 = COERCE_AS(__typeof__(v74),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v77 = COERCE_AS(__typeof__(v77),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v79 = COERCE_AS(__typeof__(v79),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v89 = COERCE_AS(__typeof__(v89),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v91 = COERCE_AS(__typeof__(v91),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v96 = COERCE_AS(__typeof__(v96),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
            } while (v64 > v65);
          }
          while (v10 < v61) {
            v66 = *v10;
            *v10 = *v61;
            *v61 = v66;
            do {
              v67 = v10[1];
              ++v10;
              GameRoutine_7c0910_alt1(*a3, v47),
                  v104 = COERCE_AS(__typeof__(v104),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v109 = COERCE_AS(__typeof__(v109),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v113 = COERCE_AS(__typeof__(v113),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v115 = COERCE_AS(__typeof__(v115),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v119 = COERCE_AS(__typeof__(v119),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v121 = COERCE_AS(__typeof__(v121),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v133 = COERCE_AS(__typeof__(v133),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v140 = COERCE_AS(__typeof__(v140),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v142 = COERCE_AS(__typeof__(v142),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v145 = COERCE_AS(__typeof__(v145),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v147 = COERCE_AS(__typeof__(v147),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v150 = COERCE_AS(__typeof__(v150),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v152 = COERCE_AS(__typeof__(v152),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v158 = COERCE_AS(__typeof__(v158),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v160 = COERCE_AS(__typeof__(v160),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v22 = COERCE_AS(__typeof__(v22),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v30 = COERCE_AS(__typeof__(v30),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v32 = COERCE_AS(__typeof__(v32),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v37 = COERCE_AS(__typeof__(v37),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v49 = COERCE_AS(__typeof__(v49),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v51 = COERCE_AS(__typeof__(v51),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v53 = COERCE_AS(__typeof__(v53),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v60 = COERCE_AS(__typeof__(v60),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v65 = COERCE_AS(__typeof__(v65),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v72 = COERCE_AS(__typeof__(v72),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v74 = COERCE_AS(__typeof__(v74),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v77 = COERCE_AS(__typeof__(v77),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v79 = COERCE_AS(__typeof__(v79),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v89 = COERCE_AS(__typeof__(v89),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v91 = COERCE_AS(__typeof__(v91),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v96 = COERCE_AS(__typeof__(v96),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v69 = v68;
              GameRoutine_7c0910_alt1(*a3, v67),
                  v104 = COERCE_AS(__typeof__(v104),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v109 = COERCE_AS(__typeof__(v109),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v113 = COERCE_AS(__typeof__(v113),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v115 = COERCE_AS(__typeof__(v115),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v119 = COERCE_AS(__typeof__(v119),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v121 = COERCE_AS(__typeof__(v121),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v133 = COERCE_AS(__typeof__(v133),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v140 = COERCE_AS(__typeof__(v140),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v142 = COERCE_AS(__typeof__(v142),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v145 = COERCE_AS(__typeof__(v145),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v147 = COERCE_AS(__typeof__(v147),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v150 = COERCE_AS(__typeof__(v150),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v152 = COERCE_AS(__typeof__(v152),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v158 = COERCE_AS(__typeof__(v158),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v160 = COERCE_AS(__typeof__(v160),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v22 = COERCE_AS(__typeof__(v22),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v30 = COERCE_AS(__typeof__(v30),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v32 = COERCE_AS(__typeof__(v32),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v37 = COERCE_AS(__typeof__(v37),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v49 = COERCE_AS(__typeof__(v49),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v51 = COERCE_AS(__typeof__(v51),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v53 = COERCE_AS(__typeof__(v53),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v60 = COERCE_AS(__typeof__(v60),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v65 = COERCE_AS(__typeof__(v65),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v72 = COERCE_AS(__typeof__(v72),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v74 = COERCE_AS(__typeof__(v74),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v77 = COERCE_AS(__typeof__(v77),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v79 = COERCE_AS(__typeof__(v79),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v89 = COERCE_AS(__typeof__(v89),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v91 = COERCE_AS(__typeof__(v91),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v96 = COERCE_AS(__typeof__(v96),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
            } while (v69 <= v70);
            do {
              v71 = *--v61;
              GameRoutine_7c0910_alt1(*a3, v47),
                  v104 = COERCE_AS(__typeof__(v104),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v109 = COERCE_AS(__typeof__(v109),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v113 = COERCE_AS(__typeof__(v113),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v115 = COERCE_AS(__typeof__(v115),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v119 = COERCE_AS(__typeof__(v119),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v121 = COERCE_AS(__typeof__(v121),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v133 = COERCE_AS(__typeof__(v133),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v140 = COERCE_AS(__typeof__(v140),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v142 = COERCE_AS(__typeof__(v142),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v145 = COERCE_AS(__typeof__(v145),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v147 = COERCE_AS(__typeof__(v147),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v150 = COERCE_AS(__typeof__(v150),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v152 = COERCE_AS(__typeof__(v152),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v158 = COERCE_AS(__typeof__(v158),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v160 = COERCE_AS(__typeof__(v160),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v22 = COERCE_AS(__typeof__(v22),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v30 = COERCE_AS(__typeof__(v30),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v32 = COERCE_AS(__typeof__(v32),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v37 = COERCE_AS(__typeof__(v37),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v49 = COERCE_AS(__typeof__(v49),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v51 = COERCE_AS(__typeof__(v51),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v53 = COERCE_AS(__typeof__(v53),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v60 = COERCE_AS(__typeof__(v60),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v65 = COERCE_AS(__typeof__(v65),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v72 = COERCE_AS(__typeof__(v72),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v74 = COERCE_AS(__typeof__(v74),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v77 = COERCE_AS(__typeof__(v77),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v79 = COERCE_AS(__typeof__(v79),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v89 = COERCE_AS(__typeof__(v89),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v91 = COERCE_AS(__typeof__(v91),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v96 = COERCE_AS(__typeof__(v96),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v73 = v72;
              GameRoutine_7c0910_alt1(*a3, v71),
                  v104 = COERCE_AS(__typeof__(v104),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v109 = COERCE_AS(__typeof__(v109),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v113 = COERCE_AS(__typeof__(v113),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v115 = COERCE_AS(__typeof__(v115),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v119 = COERCE_AS(__typeof__(v119),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v121 = COERCE_AS(__typeof__(v121),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v133 = COERCE_AS(__typeof__(v133),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v140 = COERCE_AS(__typeof__(v140),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v142 = COERCE_AS(__typeof__(v142),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v145 = COERCE_AS(__typeof__(v145),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v147 = COERCE_AS(__typeof__(v147),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v150 = COERCE_AS(__typeof__(v150),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v152 = COERCE_AS(__typeof__(v152),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v158 = COERCE_AS(__typeof__(v158),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v160 = COERCE_AS(__typeof__(v160),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v22 = COERCE_AS(__typeof__(v22),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v30 = COERCE_AS(__typeof__(v30),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v32 = COERCE_AS(__typeof__(v32),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v37 = COERCE_AS(__typeof__(v37),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v49 = COERCE_AS(__typeof__(v49),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v51 = COERCE_AS(__typeof__(v51),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v53 = COERCE_AS(__typeof__(v53),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v60 = COERCE_AS(__typeof__(v60),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v65 = COERCE_AS(__typeof__(v65),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v72 = COERCE_AS(__typeof__(v72),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v74 = COERCE_AS(__typeof__(v74),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v77 = COERCE_AS(__typeof__(v77),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v79 = COERCE_AS(__typeof__(v79),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v89 = COERCE_AS(__typeof__(v89),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v91 = COERCE_AS(__typeof__(v91),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v96 = COERCE_AS(__typeof__(v96),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
            } while (v73 > v74);
          }
          v75 = v10 - 1;
          if (a1 != v10 - 1) {
            *a1 = *v75;
          }
          a5 = 0;
          *v75 = v47;
        }
        game_map_75a370(&a1[(unsigned __int64)v11 >> 1], a1, v165, a3),
            v104 =
                COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
            v106 =
                COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(float, "s0", "=w")),
            v109 =
                COERCE_AS(__typeof__(v109), PSEUDO_REGISTER(float, "s0", "=w")),
            v111 =
                COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(float, "s0", "=w")),
            v113 =
                COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(float, "s0", "=w")),
            v115 =
                COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(float, "s0", "=w")),
            v119 =
                COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(float, "s0", "=w")),
            v121 =
                COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
            v131 =
                COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(float, "s0", "=w")),
            v133 =
                COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
            v140 =
                COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(float, "s0", "=w")),
            v142 =
                COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(float, "s0", "=w")),
            v145 =
                COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(float, "s0", "=w")),
            v147 =
                COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(float, "s0", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
            v150 =
                COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(float, "s0", "=w")),
            v152 =
                COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s0", "=w")),
            v158 =
                COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(float, "s0", "=w")),
            v160 =
                COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(float, "s0", "=w")),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
            v32 =
                COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s0", "=w")),
            v37 =
                COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s0", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s0", "=w")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w")),
            v49 =
                COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
            v51 =
                COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s0", "=w")),
            v53 =
                COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s0", "=w")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(float, "s0", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
            v60 =
                COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(float, "s0", "=w")),
            v63 =
                COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s0", "=w")),
            v65 =
                COERCE_AS(__typeof__(v65), PSEUDO_REGISTER(float, "s0", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s0", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w")),
            v72 =
                COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(float, "s0", "=w")),
            v74 =
                COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
            v77 =
                COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s0", "=w")),
            v79 =
                COERCE_AS(__typeof__(v79), PSEUDO_REGISTER(float, "s0", "=w")),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w")),
            v91 =
                COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(float, "s0", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(float, "s0", "=w")),
            v98 =
                COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(float, "s0", "=w"));
        --a4;
        if ((a5 & 1) == 0) {
          goto LABEL_15;
        }
      LABEL_16:
        v18 = *a1;
        v19 = 0;
        do {
          GameRoutine_7c0910_alt1(*a3, a1[v19 + 1]),
              v104 = COERCE_AS(__typeof__(v104),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v106 = COERCE_AS(__typeof__(v106),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v109 = COERCE_AS(__typeof__(v109),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v111 = COERCE_AS(__typeof__(v111),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v113 = COERCE_AS(__typeof__(v113),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v115 = COERCE_AS(__typeof__(v115),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v119 = COERCE_AS(__typeof__(v119),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v131 = COERCE_AS(__typeof__(v131),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v140 = COERCE_AS(__typeof__(v140),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v142 = COERCE_AS(__typeof__(v142),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v145 = COERCE_AS(__typeof__(v145),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v152 = COERCE_AS(__typeof__(v152),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v158 = COERCE_AS(__typeof__(v158),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v160 = COERCE_AS(__typeof__(v160),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v32 = COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v53 = COERCE_AS(__typeof__(v53),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v55 = COERCE_AS(__typeof__(v55),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v60 = COERCE_AS(__typeof__(v60),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v72 = COERCE_AS(__typeof__(v72),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v74 = COERCE_AS(__typeof__(v74),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v77 = COERCE_AS(__typeof__(v77),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v98 = COERCE_AS(__typeof__(v98),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v21 = v20;
          GameRoutine_7c0910_alt1(*a3, v18),
              v104 = COERCE_AS(__typeof__(v104),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v106 = COERCE_AS(__typeof__(v106),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v109 = COERCE_AS(__typeof__(v109),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v111 = COERCE_AS(__typeof__(v111),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v113 = COERCE_AS(__typeof__(v113),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v115 = COERCE_AS(__typeof__(v115),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v119 = COERCE_AS(__typeof__(v119),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v131 = COERCE_AS(__typeof__(v131),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v140 = COERCE_AS(__typeof__(v140),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v142 = COERCE_AS(__typeof__(v142),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v145 = COERCE_AS(__typeof__(v145),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v152 = COERCE_AS(__typeof__(v152),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v158 = COERCE_AS(__typeof__(v158),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v160 = COERCE_AS(__typeof__(v160),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v32 = COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v53 = COERCE_AS(__typeof__(v53),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v55 = COERCE_AS(__typeof__(v55),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v60 = COERCE_AS(__typeof__(v60),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v72 = COERCE_AS(__typeof__(v72),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v74 = COERCE_AS(__typeof__(v74),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v77 = COERCE_AS(__typeof__(v77),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v98 = COERCE_AS(__typeof__(v98),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          ++v19;
        } while (v21 > v22);
        v23 = &a1[v19];
        v24 = a2;
        if (v19 == 1) {
          do {
            if (v23 >= a2) {
              break;
            }
            v29 = *--a2;
            GameRoutine_7c0910_alt1(*a3, v29),
                v104 = COERCE_AS(__typeof__(v104),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v109 = COERCE_AS(__typeof__(v109),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v113 = COERCE_AS(__typeof__(v113),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v115 = COERCE_AS(__typeof__(v115),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v119 = COERCE_AS(__typeof__(v119),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v121 = COERCE_AS(__typeof__(v121),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v133 = COERCE_AS(__typeof__(v133),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v140 = COERCE_AS(__typeof__(v140),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v142 = COERCE_AS(__typeof__(v142),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v145 = COERCE_AS(__typeof__(v145),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v147 = COERCE_AS(__typeof__(v147),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v150 = COERCE_AS(__typeof__(v150),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v152 = COERCE_AS(__typeof__(v152),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v158 = COERCE_AS(__typeof__(v158),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v160 = COERCE_AS(__typeof__(v160),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v20 = COERCE_AS(__typeof__(v20),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v22 = COERCE_AS(__typeof__(v22),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v26 = COERCE_AS(__typeof__(v26),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v30 = COERCE_AS(__typeof__(v30),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v32 = COERCE_AS(__typeof__(v32),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v37 = COERCE_AS(__typeof__(v37),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v49 = COERCE_AS(__typeof__(v49),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v51 = COERCE_AS(__typeof__(v51),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v53 = COERCE_AS(__typeof__(v53),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v60 = COERCE_AS(__typeof__(v60),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v65 = COERCE_AS(__typeof__(v65),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v68 = COERCE_AS(__typeof__(v68),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v70 = COERCE_AS(__typeof__(v70),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v72 = COERCE_AS(__typeof__(v72),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v74 = COERCE_AS(__typeof__(v74),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v77 = COERCE_AS(__typeof__(v77),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v79 = COERCE_AS(__typeof__(v79),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v89 = COERCE_AS(__typeof__(v89),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v91 = COERCE_AS(__typeof__(v91),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v96 = COERCE_AS(__typeof__(v96),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v31 = v30;
            GameRoutine_7c0910_alt1(*a3, v18),
                v104 = COERCE_AS(__typeof__(v104),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v109 = COERCE_AS(__typeof__(v109),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v113 = COERCE_AS(__typeof__(v113),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v115 = COERCE_AS(__typeof__(v115),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v119 = COERCE_AS(__typeof__(v119),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v121 = COERCE_AS(__typeof__(v121),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v133 = COERCE_AS(__typeof__(v133),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v140 = COERCE_AS(__typeof__(v140),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v142 = COERCE_AS(__typeof__(v142),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v145 = COERCE_AS(__typeof__(v145),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v147 = COERCE_AS(__typeof__(v147),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v150 = COERCE_AS(__typeof__(v150),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v152 = COERCE_AS(__typeof__(v152),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v158 = COERCE_AS(__typeof__(v158),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v160 = COERCE_AS(__typeof__(v160),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v20 = COERCE_AS(__typeof__(v20),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v22 = COERCE_AS(__typeof__(v22),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v26 = COERCE_AS(__typeof__(v26),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v30 = COERCE_AS(__typeof__(v30),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v32 = COERCE_AS(__typeof__(v32),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v37 = COERCE_AS(__typeof__(v37),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v49 = COERCE_AS(__typeof__(v49),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v51 = COERCE_AS(__typeof__(v51),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v53 = COERCE_AS(__typeof__(v53),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v60 = COERCE_AS(__typeof__(v60),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v65 = COERCE_AS(__typeof__(v65),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v68 = COERCE_AS(__typeof__(v68),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v70 = COERCE_AS(__typeof__(v70),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v72 = COERCE_AS(__typeof__(v72),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v74 = COERCE_AS(__typeof__(v74),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v77 = COERCE_AS(__typeof__(v77),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v79 = COERCE_AS(__typeof__(v79),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v89 = COERCE_AS(__typeof__(v89),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v91 = COERCE_AS(__typeof__(v91),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v96 = COERCE_AS(__typeof__(v96),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(float, "s0", "=w"));
          } while (v31 <= v32);
        }
        else {
          do {
            v25 = *--a2;
            GameRoutine_7c0910_alt1(*a3, v25),
                v104 = COERCE_AS(__typeof__(v104),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v109 = COERCE_AS(__typeof__(v109),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v113 = COERCE_AS(__typeof__(v113),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v115 = COERCE_AS(__typeof__(v115),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v119 = COERCE_AS(__typeof__(v119),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v121 = COERCE_AS(__typeof__(v121),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v133 = COERCE_AS(__typeof__(v133),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v140 = COERCE_AS(__typeof__(v140),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v142 = COERCE_AS(__typeof__(v142),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v145 = COERCE_AS(__typeof__(v145),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v147 = COERCE_AS(__typeof__(v147),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v150 = COERCE_AS(__typeof__(v150),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v152 = COERCE_AS(__typeof__(v152),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v158 = COERCE_AS(__typeof__(v158),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v160 = COERCE_AS(__typeof__(v160),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v20 = COERCE_AS(__typeof__(v20),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v22 = COERCE_AS(__typeof__(v22),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v26 = COERCE_AS(__typeof__(v26),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v30 = COERCE_AS(__typeof__(v30),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v32 = COERCE_AS(__typeof__(v32),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v37 = COERCE_AS(__typeof__(v37),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v49 = COERCE_AS(__typeof__(v49),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v51 = COERCE_AS(__typeof__(v51),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v53 = COERCE_AS(__typeof__(v53),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v60 = COERCE_AS(__typeof__(v60),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v65 = COERCE_AS(__typeof__(v65),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v68 = COERCE_AS(__typeof__(v68),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v70 = COERCE_AS(__typeof__(v70),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v72 = COERCE_AS(__typeof__(v72),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v74 = COERCE_AS(__typeof__(v74),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v77 = COERCE_AS(__typeof__(v77),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v79 = COERCE_AS(__typeof__(v79),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v89 = COERCE_AS(__typeof__(v89),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v91 = COERCE_AS(__typeof__(v91),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v96 = COERCE_AS(__typeof__(v96),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v27 = v26;
            GameRoutine_7c0910_alt1(*a3, v18),
                v104 = COERCE_AS(__typeof__(v104),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v109 = COERCE_AS(__typeof__(v109),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v113 = COERCE_AS(__typeof__(v113),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v115 = COERCE_AS(__typeof__(v115),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v119 = COERCE_AS(__typeof__(v119),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v121 = COERCE_AS(__typeof__(v121),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v133 = COERCE_AS(__typeof__(v133),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v140 = COERCE_AS(__typeof__(v140),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v142 = COERCE_AS(__typeof__(v142),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v145 = COERCE_AS(__typeof__(v145),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v147 = COERCE_AS(__typeof__(v147),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v150 = COERCE_AS(__typeof__(v150),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v152 = COERCE_AS(__typeof__(v152),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v158 = COERCE_AS(__typeof__(v158),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v160 = COERCE_AS(__typeof__(v160),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v20 = COERCE_AS(__typeof__(v20),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v22 = COERCE_AS(__typeof__(v22),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v26 = COERCE_AS(__typeof__(v26),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v30 = COERCE_AS(__typeof__(v30),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v32 = COERCE_AS(__typeof__(v32),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v37 = COERCE_AS(__typeof__(v37),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v49 = COERCE_AS(__typeof__(v49),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v51 = COERCE_AS(__typeof__(v51),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v53 = COERCE_AS(__typeof__(v53),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v60 = COERCE_AS(__typeof__(v60),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v65 = COERCE_AS(__typeof__(v65),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v68 = COERCE_AS(__typeof__(v68),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v70 = COERCE_AS(__typeof__(v70),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v72 = COERCE_AS(__typeof__(v72),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v74 = COERCE_AS(__typeof__(v74),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v77 = COERCE_AS(__typeof__(v77),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v79 = COERCE_AS(__typeof__(v79),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v89 = COERCE_AS(__typeof__(v89),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v91 = COERCE_AS(__typeof__(v91),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v96 = COERCE_AS(__typeof__(v96),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(float, "s0", "=w"));
          } while (v27 <= v28);
        }
        if (v23 >= a2) {
          v44 = v23 - 1;
          if (a1 == v23 - 1) {
            goto LABEL_33;
          }
        LABEL_32:
          *a1 = *v44;
          goto LABEL_33;
        }
        v33 = &a1[v19];
        v34 = a2;
        do {
          v35 = *v33;
          *v33 = *v34;
          *v34 = v35;
          do {
            v36 = v33[1];
            ++v33;
            GameRoutine_7c0910_alt1(*a3, v36),
                v104 = COERCE_AS(__typeof__(v104),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v109 = COERCE_AS(__typeof__(v109),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v113 = COERCE_AS(__typeof__(v113),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v115 = COERCE_AS(__typeof__(v115),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v119 = COERCE_AS(__typeof__(v119),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v121 = COERCE_AS(__typeof__(v121),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v133 = COERCE_AS(__typeof__(v133),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v140 = COERCE_AS(__typeof__(v140),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v142 = COERCE_AS(__typeof__(v142),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v145 = COERCE_AS(__typeof__(v145),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v147 = COERCE_AS(__typeof__(v147),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v150 = COERCE_AS(__typeof__(v150),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v152 = COERCE_AS(__typeof__(v152),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v158 = COERCE_AS(__typeof__(v158),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v160 = COERCE_AS(__typeof__(v160),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v20 = COERCE_AS(__typeof__(v20),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v22 = COERCE_AS(__typeof__(v22),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v26 = COERCE_AS(__typeof__(v26),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v30 = COERCE_AS(__typeof__(v30),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v32 = COERCE_AS(__typeof__(v32),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v37 = COERCE_AS(__typeof__(v37),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v49 = COERCE_AS(__typeof__(v49),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v51 = COERCE_AS(__typeof__(v51),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v53 = COERCE_AS(__typeof__(v53),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v60 = COERCE_AS(__typeof__(v60),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v65 = COERCE_AS(__typeof__(v65),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v68 = COERCE_AS(__typeof__(v68),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v70 = COERCE_AS(__typeof__(v70),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v72 = COERCE_AS(__typeof__(v72),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v74 = COERCE_AS(__typeof__(v74),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v77 = COERCE_AS(__typeof__(v77),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v79 = COERCE_AS(__typeof__(v79),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v89 = COERCE_AS(__typeof__(v89),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v91 = COERCE_AS(__typeof__(v91),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v96 = COERCE_AS(__typeof__(v96),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v38 = v37;
            GameRoutine_7c0910_alt1(*a3, v18),
                v104 = COERCE_AS(__typeof__(v104),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v109 = COERCE_AS(__typeof__(v109),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v113 = COERCE_AS(__typeof__(v113),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v115 = COERCE_AS(__typeof__(v115),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v119 = COERCE_AS(__typeof__(v119),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v121 = COERCE_AS(__typeof__(v121),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v133 = COERCE_AS(__typeof__(v133),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v140 = COERCE_AS(__typeof__(v140),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v142 = COERCE_AS(__typeof__(v142),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v145 = COERCE_AS(__typeof__(v145),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v147 = COERCE_AS(__typeof__(v147),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v150 = COERCE_AS(__typeof__(v150),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v152 = COERCE_AS(__typeof__(v152),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v158 = COERCE_AS(__typeof__(v158),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v160 = COERCE_AS(__typeof__(v160),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v20 = COERCE_AS(__typeof__(v20),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v22 = COERCE_AS(__typeof__(v22),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v26 = COERCE_AS(__typeof__(v26),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v30 = COERCE_AS(__typeof__(v30),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v32 = COERCE_AS(__typeof__(v32),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v37 = COERCE_AS(__typeof__(v37),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v49 = COERCE_AS(__typeof__(v49),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v51 = COERCE_AS(__typeof__(v51),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v53 = COERCE_AS(__typeof__(v53),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v60 = COERCE_AS(__typeof__(v60),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v65 = COERCE_AS(__typeof__(v65),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v68 = COERCE_AS(__typeof__(v68),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v70 = COERCE_AS(__typeof__(v70),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v72 = COERCE_AS(__typeof__(v72),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v74 = COERCE_AS(__typeof__(v74),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v77 = COERCE_AS(__typeof__(v77),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v79 = COERCE_AS(__typeof__(v79),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v89 = COERCE_AS(__typeof__(v89),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v91 = COERCE_AS(__typeof__(v91),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v96 = COERCE_AS(__typeof__(v96),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(float, "s0", "=w"));
          } while (v38 > v39);
          do {
            v40 = *--v34;
            GameRoutine_7c0910_alt1(*a3, v40),
                v104 = COERCE_AS(__typeof__(v104),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v109 = COERCE_AS(__typeof__(v109),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v113 = COERCE_AS(__typeof__(v113),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v115 = COERCE_AS(__typeof__(v115),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v119 = COERCE_AS(__typeof__(v119),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v121 = COERCE_AS(__typeof__(v121),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v133 = COERCE_AS(__typeof__(v133),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v140 = COERCE_AS(__typeof__(v140),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v142 = COERCE_AS(__typeof__(v142),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v145 = COERCE_AS(__typeof__(v145),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v147 = COERCE_AS(__typeof__(v147),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v150 = COERCE_AS(__typeof__(v150),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v152 = COERCE_AS(__typeof__(v152),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v158 = COERCE_AS(__typeof__(v158),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v160 = COERCE_AS(__typeof__(v160),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v20 = COERCE_AS(__typeof__(v20),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v22 = COERCE_AS(__typeof__(v22),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v26 = COERCE_AS(__typeof__(v26),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v30 = COERCE_AS(__typeof__(v30),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v32 = COERCE_AS(__typeof__(v32),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v37 = COERCE_AS(__typeof__(v37),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v49 = COERCE_AS(__typeof__(v49),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v51 = COERCE_AS(__typeof__(v51),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v53 = COERCE_AS(__typeof__(v53),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v60 = COERCE_AS(__typeof__(v60),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v65 = COERCE_AS(__typeof__(v65),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v68 = COERCE_AS(__typeof__(v68),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v70 = COERCE_AS(__typeof__(v70),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v72 = COERCE_AS(__typeof__(v72),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v74 = COERCE_AS(__typeof__(v74),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v77 = COERCE_AS(__typeof__(v77),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v79 = COERCE_AS(__typeof__(v79),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v89 = COERCE_AS(__typeof__(v89),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v91 = COERCE_AS(__typeof__(v91),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v96 = COERCE_AS(__typeof__(v96),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v42 = v41;
            GameRoutine_7c0910_alt1(*a3, v18),
                v104 = COERCE_AS(__typeof__(v104),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v109 = COERCE_AS(__typeof__(v109),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v113 = COERCE_AS(__typeof__(v113),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v115 = COERCE_AS(__typeof__(v115),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v119 = COERCE_AS(__typeof__(v119),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v121 = COERCE_AS(__typeof__(v121),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v133 = COERCE_AS(__typeof__(v133),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v140 = COERCE_AS(__typeof__(v140),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v142 = COERCE_AS(__typeof__(v142),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v145 = COERCE_AS(__typeof__(v145),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v147 = COERCE_AS(__typeof__(v147),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v150 = COERCE_AS(__typeof__(v150),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v152 = COERCE_AS(__typeof__(v152),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v158 = COERCE_AS(__typeof__(v158),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v160 = COERCE_AS(__typeof__(v160),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v20 = COERCE_AS(__typeof__(v20),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v22 = COERCE_AS(__typeof__(v22),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v26 = COERCE_AS(__typeof__(v26),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v30 = COERCE_AS(__typeof__(v30),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v32 = COERCE_AS(__typeof__(v32),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v37 = COERCE_AS(__typeof__(v37),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v49 = COERCE_AS(__typeof__(v49),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v51 = COERCE_AS(__typeof__(v51),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v53 = COERCE_AS(__typeof__(v53),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v60 = COERCE_AS(__typeof__(v60),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v65 = COERCE_AS(__typeof__(v65),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v68 = COERCE_AS(__typeof__(v68),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v70 = COERCE_AS(__typeof__(v70),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v72 = COERCE_AS(__typeof__(v72),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v74 = COERCE_AS(__typeof__(v74),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v77 = COERCE_AS(__typeof__(v77),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v79 = COERCE_AS(__typeof__(v79),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v89 = COERCE_AS(__typeof__(v89),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v91 = COERCE_AS(__typeof__(v91),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v96 = COERCE_AS(__typeof__(v96),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(float, "s0", "=w"));
          } while (v42 <= v43);
        } while (v33 < v34);
        v44 = v33 - 1;
        if (a1 != v44) {
          goto LABEL_32;
        }
      LABEL_33:
        *v44 = v18;
        v45 = v23 >= a2;
        a2 = v24;
        if (v45) {
          break;
        }
      LABEL_37:
        GameHr_759860(a1, v44, a3, a4, a5 & 1),
            v104 =
                COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
            v106 =
                COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(float, "s0", "=w")),
            v109 =
                COERCE_AS(__typeof__(v109), PSEUDO_REGISTER(float, "s0", "=w")),
            v111 =
                COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(float, "s0", "=w")),
            v113 =
                COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(float, "s0", "=w")),
            v115 =
                COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(float, "s0", "=w")),
            v119 =
                COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(float, "s0", "=w")),
            v121 =
                COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
            v131 =
                COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(float, "s0", "=w")),
            v133 =
                COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
            v140 =
                COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(float, "s0", "=w")),
            v142 =
                COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(float, "s0", "=w")),
            v145 =
                COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(float, "s0", "=w")),
            v147 =
                COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(float, "s0", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
            v150 =
                COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(float, "s0", "=w")),
            v152 =
                COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s0", "=w")),
            v158 =
                COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(float, "s0", "=w")),
            v160 =
                COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(float, "s0", "=w")),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
            v32 =
                COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s0", "=w")),
            v37 =
                COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s0", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s0", "=w")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w")),
            v49 =
                COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
            v51 =
                COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s0", "=w")),
            v53 =
                COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s0", "=w")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(float, "s0", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
            v60 =
                COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(float, "s0", "=w")),
            v63 =
                COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s0", "=w")),
            v65 =
                COERCE_AS(__typeof__(v65), PSEUDO_REGISTER(float, "s0", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s0", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w")),
            v72 =
                COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(float, "s0", "=w")),
            v74 =
                COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
            v77 =
                COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s0", "=w")),
            v79 =
                COERCE_AS(__typeof__(v79), PSEUDO_REGISTER(float, "s0", "=w")),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w")),
            v91 =
                COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(float, "s0", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(float, "s0", "=w")),
            v98 =
                COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(float, "s0", "=w"));
        a5 = 0;
        v10 = v44 + 1;
      }
      v10 = v44 + 1;
      v46 = game_map_75a760(a1, v44, a3),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
      v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(float, "s0", "=w")),
      v109 = COERCE_AS(__typeof__(v109), PSEUDO_REGISTER(float, "s0", "=w")),
      v111 = COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(float, "s0", "=w")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(float, "s0", "=w")),
      v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(float, "s0", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(float, "s0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v131 = COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(float, "s0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(float, "s0", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(float, "s0", "=w")),
      v145 = COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(float, "s0", "=w")),
      v147 = COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(float, "s0", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
      v150 = COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(float, "s0", "=w")),
      v152 = COERCE_AS(__typeof__(v152), PSEUDO_REGISTER(float, "s0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(float, "s0", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(float, "s0", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s0", "=w")),
      v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s0", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s0", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w")),
      v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
      v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s0", "=w")),
      v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s0", "=w")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(float, "s0", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
      v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(float, "s0", "=w")),
      v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s0", "=w")),
      v65 = COERCE_AS(__typeof__(v65), PSEUDO_REGISTER(float, "s0", "=w")),
      v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s0", "=w")),
      v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w")),
      v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(float, "s0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s0", "=w")),
      v79 = COERCE_AS(__typeof__(v79), PSEUDO_REGISTER(float, "s0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w")),
      v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(float, "s0", "=w")),
      v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(float, "s0", "=w")),
      v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(float, "s0", "=w"));
      if (game_map_75a760(v44 + 1, v24, a3)) {
        break;
      }
      if (!v46) {
        goto LABEL_37;
      }
    }
    a2 = v44;
    if (!v46) {
      continue;
    }
    break;
  }
}

__int64 GameHr_75a980(__int64 result, __int64* a2, _QWORD* a3, __int64 a4,
                      char a5)
{
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  float v26;
  float v27;
  float v28;
  __int64 v29;
  float v30;
  float v31;
  float v32;
  __int64* v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  float v37;
  float v38;
  float v39;
  __int64 v40;
  float v41;
  float v42;
  float v43;
  __int64* v44;
  bool v45;
  char v46;
  __int64 v47;
  __int64 v48;
  float v49;
  float v50;
  float v51;
  __int64 v52;
  float v53;
  float v54;
  float v55;
  __int64* v56;
  __int64 v57;
  float v58;
  float v59;
  float v60;
  __int64* v61;
  __int64 v62;
  float v63;
  float v64;
  float v65;
  __int64 v66;
  __int64 v67;
  float v68;
  float v69;
  float v70;
  __int64 v71;
  float v72;
  float v73;
  float v74;
  __int64* v75;
  __int64 v76;
  float v77;
  float v78;
  float v79;
  __int64 v80;
  __int64* v81;
  bool v83;
  __int64 v84;
  __int64* v85;
  __int64* v86;
  __int64 v87;
  __int64 v88;
  float v89;
  float v90;
  float v91;
  __int64 v92;
  __int64* v93;
  __int64 v94;
  __int64 v95;
  float v96;
  float v97;
  float v98;
  signed __int64 v99;
  signed __int64 v100;
  __int64 v101;
  __int64* v102;
  __int64 v103;
  float v104;
  float v105;
  float v106;
  __int64* v107;
  __int64 v108;
  float v109;
  float v110;
  float v111;
  __int64 v112;
  float v113;
  float v114;
  float v115;
  __int64* v116;
  __int64 v117;
  __int64 v118;
  float v119;
  float v120;
  float v121;
  __int64* v122;
  bool v123;
  __int64 v124;
  __int64* v125;
  __int64* v126;
  __int64* v127;
  __int64 v128;
  __int64* v129;
  __int64 v130;
  float v131;
  float v132;
  float v133;
  __int64* v134;
  __int64 v135;
  unsigned __int64 v136;
  unsigned __int64 v137;
  __int64 v138;
  __int64* v139;
  float v140;
  float v141;
  float v142;
  __int64 v143;
  __int64* v144;
  float v145;
  float v146;
  float v147;
  __int64 v148;
  __int64 v149;
  float v150;
  float v151;
  float v152;
  __int64 v153;
  __int64* v154;
  __int64* v155;
  __int64 v156;
  __int64 v157;
  float v158;
  float v159;
  float v160;
  __int64* v161;
  __int64* v162;
  __int64* v163;
  __int64* v164;
  __int64* v165;
  signed __int64 v166;
  __int64 v167;

  v9 = (__int64*)result;
  while (2) {
    v10 = v9;
    v165 = a2 - 1;
    v161 = a2 - 3;
    v162 = a2 - 2;
    while (1) {
      while (1) {
        while (1) {
          v9 = v10;
          v11 = a2 - v10;
          if (v11 > 2) {
            switch (v11) {
            case 3LL:
              return GameRoutine_75b490(v10, v10 + 1, v165, a3);
            case 4LL:
              return GameRoutine_75b600(v10, v10 + 1, v10 + 2, v165, a3);
            case 5LL:
              return GameRoutine_75b710(v10, v10 + 1, v10 + 2, v10 + 3, v165,
                                        a3);
            default:
              break;
            }
          }
          else {
            if ((unsigned __int64)v11 < 2) {
              return result;
            }
            if (v11 == 2) {
              v76 = *v10;
              GameRoutine_7c0910(*a3, *(a2 - 1), 1);
              v78 = v77;
              result = GameRoutine_7c0910(*a3, v76, 1);
              if (v78 < v79) {
                v80 = *v10;
                *v10 = *(a2 - 1);
                *(a2 - 1) = v80;
              }
              return result;
            }
          }
          if (v11 <= 23) {
            v81 = v10 + 1;
            v83 = v10 == a2 || v81 == a2;
            if ((a5 & 1) != 0) {
              if (!v83) {
                v84 = 0;
                v85 = v10;
                do {
                  v88 = *v85;
                  v87 = v85[1];
                  v85 = v81;
                  GameRoutine_7c0910(*a3, v87, 1);
                  v90 = v89;
                  result = GameRoutine_7c0910(*a3, v88, 1);
                  if (v90 < v91) {
                    v92 = *v85;
                    v93 = a2;
                    v94 = v84;
                    do {
                      *(__int64*)((char*)v10 + v94 + 8) =
                          *(__int64*)((char*)v10 + v94);
                      if (v94 == 0) {
                        v86 = v10;
                        goto LABEL_74;
                      }
                      v95 = *(__int64*)((char*)v10 + v94 - 8);
                      GameRoutine_7c0910(*a3, v92, 1);
                      v97 = v96;
                      result = GameRoutine_7c0910(*a3, v95, 1);
                      v94 -= 8;
                    } while (v97 < v98);
                    v86 = (__int64*)((char*)v10 + v94 + 8);
                  LABEL_74:
                    *v86 = v92;
                    a2 = v93;
                  }
                  v81 = v85 + 1;
                  v84 += 8;
                } while (v85 + 1 != a2);
              }
            }
            else if (!v83) {
              do {
                v149 = *v9;
                v148 = v9[1];
                v9 = v81;
                GameRoutine_7c0910(*a3, v148, 1);
                v151 = v150;
                result = GameRoutine_7c0910(*a3, v149, 1);
                if (v151 < v152) {
                  v153 = *v9;
                  v154 = v9;
                  do {
                    v155 = v154;
                    v156 = *--v154;
                    v157 = *(v155 - 2);
                    *v155 = v156;
                    GameRoutine_7c0910(*a3, v153, 1);
                    v159 = v158;
                    result = GameRoutine_7c0910(*a3, v157, 1);
                  } while (v159 < v160);
                  *v154 = v153;
                }
                v81 = v9 + 1;
              } while (v9 + 1 != a2);
            }
            return result;
          }
          if (a4 == 0) {
            if (v10 != a2) {
              v99 = (unsigned __int64)(v11 - 2) >> 1;
              v163 = a2;
              v166 = v99;
              do {
                v100 = v99;
                if (v166 >= v99) {
                  v101 = (2 * (v99 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                  v102 = &v9[v101];
                  if (2 * v99 + 2 < v11) {
                    v103 = v102[1];
                    GameRoutine_7c0910(*a3, *v102, 1);
                    v105 = v104;
                    GameRoutine_7c0910(*a3, v103, 1);
                    if (v105 < v106) {
                      ++v102;
                      v101 = 2 * v100 + 2;
                    }
                  }
                  v107 = &v9[v100];
                  v108 = *v107;
                  GameRoutine_7c0910(*a3, *v102, 1);
                  v110 = v109;
                  result = GameRoutine_7c0910(*a3, v108, 1);
                  if (v110 >= v111) {
                    v112 = *v107;
                    do {
                      v116 = v102;
                      *v107 = *v102;
                      if (v166 < v101) {
                        break;
                      }
                      v117 = 2 * v101 + 2;
                      v102 = &v9[(2 * v101) | 1];
                      v101 = (2 * v101) | 1;
                      if (v117 < v11) {
                        v118 = v102[1];
                        GameRoutine_7c0910(*a3, *v102, 1);
                        v120 = v119;
                        GameRoutine_7c0910(*a3, v118, 1);
                        if (v120 < v121) {
                          ++v102;
                          v101 = v117;
                        }
                      }
                      GameRoutine_7c0910(*a3, *v102, 1);
                      v114 = v113;
                      result = GameRoutine_7c0910(*a3, v112, 1);
                      v107 = v116;
                    } while (v114 >= v115);
                    *v116 = v112;
                  }
                }
                v99 = v100 - 1;
              } while (v100 != 0);
              v122 = v163;
              do {
                v164 = v122;
                v124 = 0;
                v125 = v9;
                v167 = *v9;
                do {
                  v126 = &v125[v124];
                  v127 = v125;
                  v125 = v126 + 1;
                  v128 = 2 * v124 + 2;
                  v124 = (2 * v124) | 1;
                  if (v128 < v11) {
                    v130 = v126[2];
                    v129 = v126 + 2;
                    GameRoutine_7c0910(*a3, *(v129 - 1), 1);
                    v132 = v131;
                    result = GameRoutine_7c0910(*a3, v130, 1);
                    if (v132 < v133) {
                      v125 = v129;
                      v124 = v128;
                    }
                  }
                  *v127 = *v125;
                } while (v124 <= (__int64)((unsigned __int64)(v11 - 2) >> 1));
                v134 = v164 - 1;
                if (v125 == v164 - 1) {
                  v122 = v164 - 1;
                  *v125 = v167;
                }
                else {
                  v122 = v164 - 1;
                  *v125 = *v134;
                  *v134 = v167;
                  v135 = ((char*)v125 - (char*)v9 + 8) >> 3;
                  v123 = v135 < 2;
                  v136 = v135 - 2;
                  if (!v123) {
                    v137 = v136 >> 1;
                    v138 = *v125;
                    v139 = &v9[v136 >> 1];
                    GameRoutine_7c0910(*a3, *v139, 1);
                    v141 = v140;
                    result = GameRoutine_7c0910(*a3, v138, 1);
                    if (v141 < v142) {
                      v143 = *v125;
                      do {
                        v144 = v139;
                        *v125 = *v139;
                        if (v137 == 0) {
                          break;
                        }
                        v137 = (v137 - 1) >> 1;
                        v139 = &v9[v137];
                        GameRoutine_7c0910(*a3, *v139, 1);
                        v146 = v145;
                        result = GameRoutine_7c0910(*a3, v143, 1);
                        v125 = v144;
                      } while (v146 < v147);
                      *v144 = v143;
                    }
                  }
                }
                v123 = v11-- <= 2;
              } while (!v123);
            }
            return result;
          }
          v12 = &v10[(unsigned __int64)v11 >> 1];
          if ((unsigned __int64)v11 < 0x81) {
            break;
          }
          GameRoutine_75b490(v9, &v9[(unsigned __int64)v11 >> 1], v165, a3);
          GameRoutine_75b490(v9 + 1, v12 - 1, v162, a3);
          GameRoutine_75b490(v9 + 2, v12 + 1, v161, a3);
          GameRoutine_75b490(v12 - 1, &v9[(unsigned __int64)v11 >> 1], v12 + 1,
                             a3);
          v13 = *v9;
          *v9 = *v12;
          *v12 = v13;
          --a4;
          if ((a5 & 1) != 0) {
            goto LABEL_17;
          }
        LABEL_16:
          v14 = *v9;
          GameRoutine_7c0910(*a3, *(v9 - 1), 1);
          v16 = v15;
          GameRoutine_7c0910(*a3, v14, 1);
          if (v16 < v17) {
            goto LABEL_17;
          }
          v47 = *v9;
          v48 = *v165;
          GameRoutine_7c0910(*a3, *v9, 1);
          v50 = v49;
          result = GameRoutine_7c0910(*a3, v48, 1);
          if (v50 >= v51) {
            v56 = v9 + 1;
            do {
              v10 = v56;
              if (v56 >= a2) {
                break;
              }
              ++v56;
              v57 = *v10;
              GameRoutine_7c0910(*a3, v47, 1);
              v59 = v58;
              result = GameRoutine_7c0910(*a3, v57, 1);
            } while (v59 >= v60);
          }
          else {
            v10 = v9;
            do {
              v52 = v10[1];
              ++v10;
              GameRoutine_7c0910(*a3, v47, 1);
              v54 = v53;
              result = GameRoutine_7c0910(*a3, v52, 1);
            } while (v54 >= v55);
          }
          v61 = a2;
          if (v10 < a2) {
            v61 = a2;
            do {
              v62 = *--v61;
              GameRoutine_7c0910(*a3, v47, 1);
              v64 = v63;
              result = GameRoutine_7c0910(*a3, v62, 1);
            } while (v64 < v65);
          }
          while (v10 < v61) {
            v66 = *v10;
            *v10 = *v61;
            *v61 = v66;
            do {
              v67 = v10[1];
              ++v10;
              GameRoutine_7c0910(*a3, v47, 1);
              v69 = v68;
              GameRoutine_7c0910(*a3, v67, 1);
            } while (v69 >= v70);
            do {
              v71 = *--v61;
              GameRoutine_7c0910(*a3, v47, 1);
              v73 = v72;
              result = GameRoutine_7c0910(*a3, v71, 1);
            } while (v73 < v74);
          }
          v75 = v10 - 1;
          if (v9 != v10 - 1) {
            *v9 = *v75;
          }
          a5 = 0;
          *v75 = v47;
        }
        GameRoutine_75b490(&v9[(unsigned __int64)v11 >> 1], v9, v165, a3);
        --a4;
        if ((a5 & 1) == 0) {
          goto LABEL_16;
        }
      LABEL_17:
        v18 = *v9;
        v19 = 0;
        do {
          GameRoutine_7c0910(*a3, v9[v19 + 1], 1);
          v21 = v20;
          GameRoutine_7c0910(*a3, v18, 1);
          ++v19;
        } while (v21 < v22);
        v23 = &v9[v19];
        v24 = a2;
        if (v19 == 1) {
          do {
            if (v23 >= a2) {
              break;
            }
            v29 = *--a2;
            GameRoutine_7c0910(*a3, v29, 1);
            v31 = v30;
            GameRoutine_7c0910(*a3, v18, 1);
          } while (v31 >= v32);
        }
        else {
          do {
            v25 = *--a2;
            GameRoutine_7c0910(*a3, v25, 1);
            v27 = v26;
            GameRoutine_7c0910(*a3, v18, 1);
          } while (v27 >= v28);
        }
        if (v23 >= a2) {
          v44 = v23 - 1;
          if (v9 == v23 - 1) {
            goto LABEL_34;
          }
        LABEL_33:
          *v9 = *v44;
          goto LABEL_34;
        }
        v33 = &v9[v19];
        v34 = a2;
        do {
          v35 = *v33;
          *v33 = *v34;
          *v34 = v35;
          do {
            v36 = v33[1];
            ++v33;
            GameRoutine_7c0910(*a3, v36, 1);
            v38 = v37;
            GameRoutine_7c0910(*a3, v18, 1);
          } while (v38 < v39);
          do {
            v40 = *--v34;
            GameRoutine_7c0910(*a3, v40, 1);
            v42 = v41;
            GameRoutine_7c0910(*a3, v18, 1);
          } while (v42 >= v43);
        } while (v33 < v34);
        v44 = v33 - 1;
        if (v9 != v44) {
          goto LABEL_33;
        }
      LABEL_34:
        *v44 = v18;
        v45 = v23 >= a2;
        a2 = v24;
        if (v45) {
          break;
        }
      LABEL_38:
        result = GameHr_75a980(v9, v44, a3, a4, a5 & 1);
        a5 = 0;
        v10 = v44 + 1;
      }
      v10 = v44 + 1;
      v46 = GameRoutine_75b880(v9, v44, a3);
      result = GameRoutine_75b880(v44 + 1, v24, a3);
      if ((result & 1) != 0) {
        break;
      }
      if ((v46 & 1) == 0) {
        goto LABEL_38;
      }
    }
    a2 = v44;
    if ((v46 & 1) == 0) {
      continue;
    }
    return result;
  }
}

__int64 GameHr_75bbc0(__int64 result)
{
  __int64 i;
  _QWORD* v2;
  __int64 v3;
  char* v4;
  char* v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int8* v8;
  unsigned int v9;
  bool v10;
  int v11;

  for (i = *(_QWORD*)(result + 168); i != *(_QWORD*)(result + 176); i += 8) {
    v2 = *(_QWORD**)i;
    if (*(_QWORD*)(*(_QWORD*)i + 232LL) != 0) {
      if (v2[33] == 0) {
        return result;
      }
      v3 = v2[31] - v2[30];
      v6 = v2 + 34;
      v5 = (char*)v2[34];
      v4 = (char*)v6[1];
      if (v3 != v4 - v5) {
        return result;
      }
      while (v5 != v4) {
        v7 = *(_QWORD*)v5;
        v5 += 8;
        if ((*(_BYTE*)(v7 + 342) & 1) == 0) {
          return result;
        }
      }
    }
  }
  v8 = *(unsigned __int8**)(result + 16);
  if (v8 != nullptr) {
    v9 = *v8;
    v10 = v9 > 0x10;
    v11 = (1 << v9) & 0x1CE00;
    if (!v10 && v11 != 0) {
      *(_WORD*)(result + 136) |= 0x80u;
    }
  }
  *(_WORD*)(result + 136) |= 8u;
  return result;
}

_QWORD* GameHr_75bc60(_QWORD* result)
{
  __int64* v1;
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  v1 = (__int64*)result[21];
  v2 = (__int64*)result[22];
  if (v1 != v2) {
    v3 = result;
    if (*(_QWORD*)(result[20] + 784LL) != 0) {
      do {
        if (*(_QWORD*)(v3[20] + 784LL) != 0) {
          v4 = *v1;
          v5 = *(_QWORD*)(v3[20] + 784LL);
          result = (_QWORD*)GameRoutine_961420(v3, &v5, v4);
        }
        ++v1;
      } while (v1 != v2);
    }
  }
  return result;
}

__int64 GameHr_75bce0(__int64 result)
{
  __int64* v1;
  __int64* i;
  __int64 v3;

  v1 = *(__int64**)(result + 168);
  for (i = *(__int64**)(result + 176); v1 != i;
       result = GameRoutine_81aee0(v3, 0.0)) {
    v3 = *v1++;
  }
  return result;
}

__int64 GameHr_75cc40(__int64 a1, unsigned int* a2, unsigned int* a3)
{
  __int64 result;

  result = GameRoutine_756080(*(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 16), *a2, *a3,
                              (_BYTE*)(a1 + 24));
  if ((result & 1) == 0) {
    **(_BYTE**)(a1 + 32) = 0;
  }
  return result;
}

__int64 GameHr_75e720(__int64 a1)
{
  __int64* v2;
  __int64 result;
  __int64 v4;

  v2 = GameData_212cfd0[0];
  result = *GameData_212cfd0[0] + 8;
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_6ea8c0(result);
    if (result != 0 && *(_QWORD*)(result + 392) != 0) {
      if (*(_DWORD*)(*v2 + 12) == *(char*)(result + 584)) {
        v4 = *(_QWORD*)(a1 + 8);
        if (*(_DWORD*)(*v2 + 16) != *(char*)(result + 585) && v4 != 0) {
          while (1) {
          LABEL_15:
            if (*(_BYTE*)v4 == 2) {
              if (*(_DWORD*)(v4 + 32) == 0) {
                *(_QWORD*)(a1 + 16) = v4;
                *(_WORD*)(a1 + 136) &= ~0x80u;
                return result;
              }
            }
            else if (*(_BYTE*)v4 == 0) {
              return result;
            }
            v4 += 64;
          }
        }
      }
      else {
        v4 = *(_QWORD*)(a1 + 8);
        if (v4 != 0) {
          goto LABEL_15;
        }
      }
    }
  }
  return result;
}

__int64 GameHr_75e7e0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD v4[6];
  char v5;

  if (*(_BYTE*)(GameData_21cd108 + 8) == 0 ||
      (v1 = a1, v2 = GameRoutine_6ea8c0(GameData_21cd108 + 8), a1 = v1,
       v2 == 0) ||
      *(_QWORD*)(v2 + 392) == 0) {
    v2 = 0;
  }
  v5 = 1;
  v4[4] = 0;
  return GameRoutine_768a20(a1, v2, *GameData_212cfd8[0] + 24, &v5, 0, 0, v4);
}

__int64 GameHr_75e870(__int64 result)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;

  if (*(int*)(GameData_21cd100 + 16) <= 0) {
    v1 = *(unsigned __int8**)(result + 16);
    if (v1 != nullptr) {
      v2 = *v1;
      v3 = v2 > 0x10;
      v4 = (1 << v2) & 0x1CE00;
      if (!v3 && v4 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    *(_WORD*)(result + 136) |= 8u;
  }
  return result;
}

__int64 GameHr_75e9e0(__int64 result)
{
  int v1;
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int16 v5;

  v1 = *(unsigned __int8*)(GameData_21cd108 + 20);
  switch (*(_BYTE*)(GameData_21cd108 + 20)) {
  case 1:
    v1 = 25;
    break;
  case 2:
    break;
  case 3:
  case 5:
  case 6:
  case 8:
  case 9:
  case 0x10:
  case 0x12:
  case 0x1B:
    if ((*(_DWORD*)(GameData_21cd108 + 56) & 0xFFF) != 0) {
      v2 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                      8LL * (*(_DWORD*)(GameData_21cd108 + 56) & 0xFFF));
      if (v2 != 0 && (unsigned int)*(unsigned __int8*)(v2 + 250) - 13 < 2) {
        goto LABEL_5;
      }
    }
    v3 = v1 - 3;
    if (v3 >= 0x19) {
      goto LABEL_8;
    }
    v1 = GameData_1b3c61c[(unsigned __int8)v3];
    break;
  case 4:
    v1 = 4;
    break;
  case 0xB:
    v1 = 11;
    break;
  case 0xC:
    v1 = 12;
    break;
  case 0xD:
    v1 = 13;
    break;
  case 0xE:
    v1 = 21;
    break;
  case 0xF:
    v1 = 22;
    break;
  case 0x11:
    v1 = 24;
    break;
  case 0x15:
    v1 = 17;
    break;
  case 0x16:
    v1 = 18;
    break;
  case 0x17:
    v1 = 15;
    break;
  case 0x18:
    v1 = 14;
    break;
  case 0x1A:
    v1 = 16;
    break;
  case 0x1C:
    v1 = 19;
    break;
  case 0x1D:
  LABEL_5:
    v1 = 20;
    break;
  default:
  LABEL_8:
    v1 = 29;
    break;
  }
  v4 = *(_QWORD*)(result + 8);
  if (v4 != 0) {
    while (1) {
      if (*(_BYTE*)v4 == 2) {
        if (*(_DWORD*)(v4 + 32) == v1) {
          v5 = *(_WORD*)(result + 136);
          *(_QWORD*)(result + 16) = v4;
          *(_WORD*)(result + 136) = v5 & 0xFF7F;
          break;
        }
      }
      else if (*(_BYTE*)v4 == 0) {
        break;
      }
      v4 += 64;
    }
  }
  *(_WORD*)(result + 136) |= 8u;
  return result;
}

__int64 GameHr_75f1d0(__int64 a1)
{
  __int64* v2;
  __int64 result;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;

  v2 = GameData_212cfd0[0];
  if ((GameRoutine_8fdae0(a1 + 160, *GameData_212cfd0[0]) & 1) != 0) {
    GameRoutine_7ac940(a1, a1 + 160);
  }
  result = *v2 + 8;
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_6ea8c0(result);
    if (result != 0 && *(_QWORD*)(result + 392) != 0 &&
        (*(_DWORD*)(*v2 + 56) & 0xFFF) != 0) {
      v4 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                      8LL * (*(_DWORD*)(*v2 + 56) & 0xFFF));
      if (v4 != 0) {
        v5 = *(unsigned __int8*)(v4 + 104);
        if (v5 == 3) {
          v6 = 2172;
        }
        else {
          if (v5 != 5) {
            goto LABEL_18;
          }
          v6 = 2180;
        }
        v7 = *(_DWORD*)(result + v6);
        if (v7 <= -1) {
          v7 = -1;
        }
        if ((unsigned int)(v7 + 1) < 0x1869F) {
          v8 = v7 + 1;
        }
        else {
          v8 = 99999;
        }
        *(_DWORD*)(result + v6) = v8;
      }
    }
  }
LABEL_18:
  *(_QWORD*)(*v2 + 12672) |= 0x20uLL;
  return result;
}

__int64 GameHr_75f2b0(__int64 a1)
{
  __int64 result;

  result = GameRoutine_8fe740(a1 + 160);
  if ((result & 1) != 0) {
    return GameRoutine_7ac940(a1, a1 + 160);
  }
  return result;
}

__int64 GameHr_75f870(__int64 a1)
{
  __int64* v2;
  __int64 result;
  __int64 v4;
  _QWORD v5[6];

  v2 = GameData_212cfd0[0];
  result = *GameData_212cfd0[0] + 8;
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_6ea8c0(result);
    if (result != 0 && *(_QWORD*)(result + 392) != 0) {
      v4 = *v2;
      v5[4] = 0;
      return GameRoutine_8b0040(a1, result, *(unsigned int*)(v4 + 40), result,
                                v5);
    }
  }
  return result;
}

__int64 GameHr_75f8e0()
{
  __int64 result;

  result = GameData_21cd108 + 8;
  if (*(_BYTE*)(GameData_21cd108 + 8) != 0) {
    return GameRoutine_6ea8c0(result);
  }
  return result;
}

__int64 GameHr_75f900(__int64 result)
{
  unsigned int v1;
  unsigned int v2;
  __int64 v3;

  v1 = *(char*)(GameData_21cd108 + 313);
  v2 = *(char*)(GameData_21cd108 + 314);
  if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
      (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
    v3 = result;
    GameRoutine_12370c0(GameData_22400f8 + 864, v1, v2);
    result = v3;
  }
  if (GameData_21cd148 != 0) {
    return GameRoutine_c8b5a0(result, 5, 0, v1, v2, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  }
  return result;
}

__int64 GameHr_75f9b0(__int64 result)
{
  if (GameData_21cd148 != 0) {
    return GameRoutine_c8b5a0(
        result, 6, 0, (unsigned int)*(char*)(*GameData_212cfd0[0] + 313),
        (unsigned int)*(char*)(*GameData_212cfd0[0] + 314), 0xFFFFFFFFLL,
        0xFFFFFFFFLL);
  }
  return result;
}

__int64 GameHr_75f9f0(__int64 result)
{
  if (GameData_21cd148 != 0) {
    return GameRoutine_c8b5a0(
        result, 7, 0, (unsigned int)*(char*)(*GameData_212cfd0[0] + 313),
        (unsigned int)*(char*)(*GameData_212cfd0[0] + 314), 0xFFFFFFFFLL,
        0xFFFFFFFFLL);
  }
  return result;
}

__int64 GameHr_75fa30(__int64 a1)
{
  __int64 result;

  result = *GameData_212cfd0[0] + 8;
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_6ea8c0(result);
    if (result != 0 && *(_QWORD*)(result + 392) != 0 &&
        *GameData_212d000[0] != 0) {
      return GameRoutine_c8b5a0(a1, 10, result,
                                (unsigned int)*(char*)(result + 584),
                                (unsigned int)*(char*)(result + 585),
                                *(unsigned int*)(result + 592), 0xFFFFFFFFLL);
    }
  }
  return result;
}

__int64 GameHr_75fac0(__int64 a1)
{
  __int64* v2;
  __int64 result;
  __int64 v4;

  v2 = GameData_212cfd0[0];
  result = *GameData_212cfd0[0] + 8;
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_6ea8c0(result);
    if (result != 0) {
      v4 = *(_QWORD*)(result + 392);
      if (v4 != 0 && *GameData_212d000[0] != 0) {
        return GameRoutine_c8b5a0(a1, 11, result, *(unsigned int*)(*v2 + 12),
                                  *(unsigned int*)(*v2 + 16),
                                  *(unsigned int*)(result + 592),
                                  *(unsigned __int16*)(v4 + 16));
      }
    }
  }
  return result;
}

__int64 GameHr_75fc50(__int64 a1)
{
  __int64* v2;
  __int64 result;
  __int64 v4;

  v2 = GameData_212cfd0[0];
  result = *GameData_212cfd0[0] + 8;
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_6ea8c0(result);
    if (result != 0) {
      v4 = *(_QWORD*)(result + 392);
      if (v4 != 0 && *GameData_212d000[0] != 0) {
        return GameRoutine_c8b5a0(a1, 12, result, *(unsigned int*)(*v2 + 12),
                                  *(unsigned int*)(*v2 + 16),
                                  *(unsigned int*)(result + 592),
                                  *(unsigned __int16*)(v4 + 16));
      }
    }
  }
  return result;
}

__int64 GameHr_75fce0(__int64 a1)
{
  __int64* v2;
  __int64 result;
  _DWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = GameData_212cfd0[0];
  result = *GameData_212cfd0[0] + 8;
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_6ea8c0(result);
    if (result != 0 && *(_QWORD*)(result + 392) != 0) {
      *(_BYTE*)(*GameData_212d560[0] + 224) = 1;
      v4 = (_DWORD*)*v2;
      v5 = (unsigned int)*(char*)(*v2 + 313);
      v6 = (unsigned int)*(char*)(*v2 + 314);
      v4[8] = *(char*)(result + 584);
      v4[9] = *(char*)(result + 585);
      v7 = v4[14] & 0xFFF;
      if ((v4[14] & 0xFFF) != 0) {
        v8 = *(_QWORD*)(GameData_21c99b0 + 64);
        v9 = *(_QWORD*)(v8 + 8 * v7);
        if (v9 != 0) {
          v9 = *(_WORD*)(v9 + 16) & 0xFFF;
        }
      }
      else {
        v8 = *(_QWORD*)(GameData_21c99b0 + 64);
        v9 = 0;
      }
      return GameRoutine_7693e0(a1, result, v5, v6, 0,
                                *(_QWORD*)(*(_QWORD*)(v8 + 8 * v9) + 768LL),
                                *(_QWORD*)(*(_QWORD*)(v8 + 8 * v9) + 776LL));
    }
  }
  return result;
}

__int64 GameHr_75fdc0()
{
  __int64 v0;
  __int64* v1;
  int v2;
  __int64 v3;
  _QWORD* v4;
  __int64 result;

  v0 = GameData_21cd108;
  if (*(_BYTE*)(GameData_21cd108 + 8) != 0) {
    v1 = game_UnitPool_Get((_BYTE*)(GameData_21cd108 + 8));
    if (v1 != nullptr && v1[49] != 0) {
      v2 = *((char*)v1 + 585);
      *(_DWORD*)(v0 + 12) = *((char*)v1 + 584);
      *(_DWORD*)(v0 + 16) = v2;
    }
  }
  v3 = GameData_21ca300;
  v4 = *(_QWORD**)(GameData_21ca300 + 96);
  Image_72b4a0((__int64)v4);
  Image_72b6c0(v4);
  Image_72a260(*(_QWORD*)(v3 + 152));
  result = GameRoutine_777be0_alt1(GameData_21cd0e8 + 8);
  *(_BYTE*)(GameData_21ed0a0 + 224) = 0;
  return result;
}

__int64 GameHr_75fe60(__int64 a1)
{
  __int64* v2;
  __int64 result;

  v2 = GameData_212cfd0[0];
  result = *GameData_212cfd0[0] + 8;
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_6ea8c0(result);
    if (result != 0 && *(_QWORD*)(result + 392) != 0 &&
        *GameData_212d000[0] != 0) {
      return GameRoutine_c8b5a0(a1, 30, result, *(unsigned int*)(*v2 + 32),
                                *(unsigned int*)(*v2 + 36),
                                *(unsigned int*)(result + 592), 0xFFFFFFFFLL);
    }
  }
  return result;
}

__int64 GameHr_75ff00(__int64 a1)
{
  __int64* v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;

  v2 = GameData_212cfd0[0];
  result = GameRoutine_8206b0(*GameData_212cfd0[0]);
  if ((unsigned __int8)result == 2 && (*(_BYTE*)(*v2 + 12678) & 1) == 0) {
    v4 = *(_QWORD*)(a1 + 96);
    v5 = *(_QWORD*)(a1 + 104);
    v6 = ((v5 - v4) << 6) - 1;
    if (v5 == v4) {
      v6 = 0;
    }
    v7 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
    if (v6 == v7) {
      result = GameRoutine_658d60(a1 + 88);
      v4 = *(_QWORD*)(a1 + 96);
      v7 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
    }
    *(_QWORD*)(*(_QWORD*)(v4 + 8 * (v7 >> 9)) + 8 * (v7 & 0x1FF)) =
        *(_QWORD*)(a1 + 16);
    ++*(_QWORD*)(a1 + 128);
    v8 = *(_QWORD*)(a1 + 8);
    if (v8 != 0) {
      while (1) {
        if (*(_BYTE*)v8 == 2) {
          if (*(_DWORD*)(v8 + 32) == 28) {
            *(_QWORD*)(a1 + 16) = v8;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            break;
          }
        }
        else if (*(_BYTE*)v8 == 0) {
          break;
        }
        v8 += 64;
      }
    }
    *(_QWORD*)(*v2 + 12672) |= 0x1000000000000uLL;
  }
  return result;
}

__int64 GameHr_760000()
{
  __int64 result;
  __int64 v1;
  int v2;

  result = GameData_21cd108 + 8;
  if (*(_BYTE*)(GameData_21cd108 + 8) != 0) {
    result = GameRoutine_6ea8c0(result);
    if (result != 0 && *(_QWORD*)(result + 392) != 0) {
      result = GameData_21cd108;
      if ((*(_DWORD*)(GameData_21cd108 + 56) & 0xFFF) != 0) {
        v1 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                        8LL * (*(_DWORD*)(GameData_21cd108 + 56) & 0xFFF));
        if (v1 != 0) {
          GameRoutine_7450c0(GameData_21cd108);
          v2 = *(_WORD*)(v1 + 16) & 0xFFF;
          return GameRoutine_7456c0(GameData_21cd108, &v2);
        }
      }
    }
  }
  return result;
}

__int64 GameHr_760090(__int64 a1)
{
  __int64* v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = GameData_212cfd0[0];
  result = *GameData_212cfd0[0] + 8;
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_6ea8c0(result);
    if (result != 0) {
      v4 = *(_QWORD*)(result + 392);
      if (v4 != 0 && (*(_DWORD*)(*v2 + 56) & 0xFFF) != 0) {
        v5 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                        8LL * (*(_DWORD*)(*v2 + 56) & 0xFFF));
        if (v5 != 0 && GameData_21cd148 != 0) {
          v7 = *(unsigned __int16*)(v4 + 16);
          v8 = *(_QWORD*)(result + 440);
          if (v8 != 0) {
            v9 = *(unsigned __int8*)(v8 + 16);
          }
          else {
            v9 = 9;
          }
          return GameRoutine_c8b5a0(a1, 21, result, v7, v9,
                                    *(unsigned __int16*)(v5 + 16),
                                    0xFFFFFFFFLL);
        }
      }
    }
  }
  return result;
}

__int64 GameHr_760150(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = GameData_212cfd0[0];
  GameRoutine_7450c0(*GameData_212cfd0[0]);
  if (*(_BYTE*)(*v2 + 8) == 0 || (v3 = GameRoutine_6ea8c0(*v2 + 8)) == 0 ||
      (v4 = v3, *(_QWORD*)(v3 + 392) == 0)) {
    v4 = 0;
  }
  if ((*(_DWORD*)(*v2 + 56) & 0xFFF) != 0) {
    v5 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                    8LL * (*(_DWORD*)(*v2 + 56) & 0xFFF));
  }
  else {
    v5 = 0;
  }
  return GameRoutine_76b8c0(a1, v4, v5, 1);
}

__int64 GameHr_7601e0()
{
  __int64 v0;
  int v2;

  v0 = *(_DWORD*)(GameData_21cd108 + 56) & 0xFFF;
  if ((*(_DWORD*)(GameData_21cd108 + 56) & 0xFFF) != 0) {
    v0 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v0);
    if (v0 != 0) {
      LODWORD(v0) = *(_WORD*)(v0 + 16) & 0xFFF;
    }
  }
  v2 = v0;
  return GameRoutine_7456c0(GameData_21cd108, &v2);
}

__int64 GameHr_760240(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = GameData_212cfd0[0];
  GameRoutine_7450c0(*GameData_212cfd0[0]);
  if (*(_BYTE*)(*v2 + 8) == 0 || (v3 = GameRoutine_6ea8c0(*v2 + 8)) == 0 ||
      (v4 = v3, *(_QWORD*)(v3 + 392) == 0)) {
    v4 = 0;
  }
  if ((*(_DWORD*)(*v2 + 56) & 0xFFF) != 0) {
    v5 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                    8LL * (*(_DWORD*)(*v2 + 56) & 0xFFF));
  }
  else {
    v5 = 0;
  }
  return GameRoutine_76b8c0(a1, v4, v5, 0);
}

__int64 GameHr_7602d0()
{
  GameRoutine_7450c0(GameData_21cd108);
  return GameRoutine_7447b0(GameData_21cd108);
}

void GameHr_760320()
{
  __int64 v0;
  __int64 v1;
  unsigned __int64 v2;
  unsigned __int8* v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  __int64 v10;
  int v11;
  __int64 v12;

  if (*(_BYTE*)(GameData_21ca2f8 + *(unsigned __int8*)(GameData_21ca2f8 + 24) +
                16) == 1) {
    v0 = *(_QWORD*)(GameData_21cd108 + 12688);
    v1 = *(_QWORD*)(GameData_21cd108 + 12680);
    if (v0 != v1) {
      v2 = 0xCCCCCCCCCCCCCCCDLL * ((v0 - v1) >> 3);
      v3 = (unsigned __int8*)(v1 + 4);
      do {
        v4 = *(v3 - 3);
        v5 = *(v3 - 1);
        v6 = *(v3 - 2);
        v8 = *v3;
        v3 += 40;
        v7 = v8;
        if (v4 != v5 || v6 != v7) {
          goto LABEL_13;
        }
      } while (--v2 != 0);
    }
    if (*(_DWORD*)(GameData_21cd108 + 24) !=
            *(_DWORD*)(GameData_21cd108 + 12) ||
        *(_DWORD*)(GameData_21cd108 + 28) !=
            *(_DWORD*)(GameData_21cd108 + 16) ||
        ((v10 = *(_QWORD*)(GameData_21cd108 + 12672)) & 0x11) != 0) {
    LABEL_13:
      v11 = 13;
      goto LABEL_14;
    }
    if (v0 == v1) {
      if ((v10 & 0xC000) != 0) {
        goto LABEL_25;
      }
    }
    else {
      v12 = *(_QWORD*)(v0 - 16);
      if ((v10 & 0xC000) != 0 || v12 != 0) {
        goto LABEL_25;
      }
    }
    if ((v10 & 0x83E0C) != 0) {
      goto LABEL_13;
    }
  LABEL_25:
    v11 = 4;
  LABEL_14:
    if (GameData_21cf830 != 0) {
      *(_DWORD*)(GameData_21cf830 + 152) = v11;
    }
  }
}

__int64 GameHr_760430()
{
  GameRoutine_7450c0(GameData_21cd108);
  return GameRoutine_744a40(GameData_21cd108);
}

__int64 GameHr_760470(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  float v9;

  v1 = *(_QWORD*)(GameData_21caab0 + 160);
  v2 = *(unsigned int*)(*GameData_212cfd0[0] + 40);
  v3 = v1 + 32;
  v4 = *(_QWORD*)(v1 + 8) + 32 * v2;
  if ((int)v2 < 0) {
    v4 = v3;
  }
  v5 = *(_QWORD*)(v4 + 16);
  if (v5 != 0 && *(_QWORD*)(v5 + 96) != 0) {
    if ((v6 = result, result = GameRoutine_9a5560(), GameData_21ee240 == 0) ||
        *(_BYTE*)(GameData_21ee240 + 152) != 3 ||
        (((v7 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0 ? (v8 = 2)
                                                              : (v8 = 3),
         (v8 & v7) != 0)) {
      v9 = *(float*)(v6 + 144);
      *(_WORD*)(v6 + 136) = *(_WORD*)(v6 + 136) & 0xFF97 | 0x60;
      if (v9 < 30.0) {
        v9 = 30.0;
      }
      *(float*)(v6 + 144) = v9;
    }
  }
  return result;
}

void GameHr_760880(__int64 a1)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  int v21;
  int v22;
  _DWORD* v23;

  v2 = GameData_21309c8[0];
  if (*GameData_21309c8[0] != 0) {
    *(_BYTE*)(*GameData_21309c8[0] + 16) = 0;
  }
  if (*(_BYTE*)(GameData_21cd108 + 8) == 0) {
    return;
  }
  v3 = game_UnitPool_Get((_BYTE*)(GameData_21cd108 + 8));
  if (v3 == nullptr) {
    return;
  }
  v4 = (__int64)v3;
  if (v3[49] == 0) {
    return;
  }
  v5 = *((_DWORD*)v3 + 104);
  v6 = GameData_212ce98[0];
  if ((v5 & 0x20) != 0) {
    v8 = *v2;
    if (*v2 != 0 && *(_BYTE*)(v8 + 16) == 0) {
      *(_BYTE*)(v8 + 16) = GameRoutine_122f8e0_alt1((__int64)v3);
    }
    MapUtil_757430(v4);
  }
  else {
    if ((v5 & 0x10) == 0) {
      goto LABEL_17;
    }
    v7 = *v2;
    if (*v2 != 0 && *(_BYTE*)(v7 + 16) == 0) {
      *(_BYTE*)(v7 + 16) = 3;
    }
    MapUtil_757590((__int64)v3);
  }
  Image_72b080(*v6);
LABEL_17:
  if ((game_map_758760(a1) & 1) != 0) {
    Image_72b080(*v6);
  }
  if ((Situation_765b20(GameData_21ca2f8) & 1) == 0) {
    v9 = *(_QWORD*)(v4 + 440);
    if (v9 != 0) {
      v10 = *(unsigned __int8*)(v9 + 16);
      if (v10 <= 3 && v10 == *(unsigned __int8*)(GameData_21ca2f8 + 24)) {
        if (*(_BYTE*)(GameData_21cd108 + 8) != 0) {
          v11 = game_UnitPool_Get((_BYTE*)(GameData_21cd108 + 8));
          if (v11 != nullptr) {
            v12 = (__int64)v11;
            if (v11[49] != 0) {
              v13 = GameData_21cd108;
              Mind_745e80(GameData_21cd108);
              v14 = *(unsigned __int8*)(v13 + 20);
              if (v14 <= 0x1C) {
                if (((1 << v14) & 0x8070378) != 0) {
                  if (!Mind_743d50(v13)) {
                    goto LABEL_33;
                  }
                  v15 = GameData_21ca2f8;
                  v16 =
                      *(unsigned __int8*)(GameData_21ca2f8 +
                                          *(unsigned __int8*)(GameData_21ca2f8 +
                                                              24) +
                                          16);
                  if (v16 == 2) {
                    goto LABEL_44;
                  }
                  if (v16 != 1) {
                  LABEL_33:
                    if (!Mind_745050(v13)) {
                      goto LABEL_38;
                    }
                    v15 = GameData_21ca2f8;
                    v17 = *(
                        unsigned __int8*)(GameData_21ca2f8 +
                                          *(unsigned __int8*)(GameData_21ca2f8 +
                                                              24) +
                                          16);
                    if (v17 == 2) {
                      goto LABEL_44;
                    }
                    if (v17 != 1) {
                    LABEL_38:
                      if (game_Unit_Unknown6c9450(v12) &&
                          ((unsigned __int8)Mind_747060(GameData_21cd108) &
                           1) != 0) {
                        GameRoutine_777be0_alt1(GameData_21cd0e8 + 8);
                        v18 = *(
                            unsigned __int8*)(GameData_21ca2f8 +
                                              *(unsigned __int8*)(GameData_21ca2f8 +
                                                                  24) +
                                              16);
                        if (v18 == 2) {
                          goto LABEL_59;
                        }
                        if (v18 == 1) {
                          if ((*(_BYTE*)(GameData_21ca2f8 + 23) & 0x40) == 0) {
                            if (GameData_21cf830 != 0) {
                              *(_DWORD*)(GameData_21cf830 + 152) = 4;
                            }
                            goto LABEL_60;
                          }
                        LABEL_59:
                          GameRoutine_7bc2c0_alt1();
                        LABEL_60:
                          v22 = game_Unit_SkillList_FindCategory(
                              (_QWORD*)(v12 + 1744), 0x20u);
                          if (v22 <= -1) {
                            v23 = GameData_212c8a8;
                          }
                          else {
                            v23 = (_DWORD*)(*(_QWORD*)(v12 + 1776) +
                                            4LL * (unsigned int)v22);
                          }
                          MapDrawer_808760(0, v12, v23);
                          return;
                        }
                      }
                      goto LABEL_53;
                    }
                  }
                  if ((*(_BYTE*)(v15 + 23) & 0x40) == 0) {
                    if (GameData_21cf830 != 0) {
                      *(_DWORD*)(GameData_21cf830 + 152) = 13;
                    }
                    return;
                  }
                LABEL_44:
                  GameRoutine_7bc1a0_alt1();
                  return;
                }
                if (v14 == 2) {
                  return;
                }
                if (v14 == 28 &&
                    ((unsigned __int8)Mind_747180(GameData_21cd108) & 1) != 0) {
                  GameRoutine_777be0_alt1(GameData_21cd0e8 + 8);
                  v19 =
                      *(unsigned __int8*)(GameData_21ca2f8 +
                                          *(unsigned __int8*)(GameData_21ca2f8 +
                                                              24) +
                                          16);
                  if (v19 == 2) {
                    goto LABEL_64;
                  }
                  if (v19 == 1) {
                    if ((*(_BYTE*)(GameData_21ca2f8 + 23) & 0x40) == 0) {
                      if (GameData_21cf830 != 0) {
                        *(_DWORD*)(GameData_21cf830 + 152) = 4;
                      }
                      return;
                    }
                  LABEL_64:
                    GameRoutine_7bc2c0_alt1();
                    return;
                  }
                }
              }
            }
          }
        }
      LABEL_53:
        v20 = *v2;
        if (*v2 != 0 && *(_BYTE*)(v20 + 16) == 0) {
          *(_BYTE*)(v20 + 16) = GameRoutine_122f8e0_alt1(v4);
        }
        Mind_745a40(GameData_21cd108);
        v21 = *(_DWORD*)(v4 + 416);
        if ((v21 & 1) == 0) {
          *(_DWORD*)(v4 + 416) = v21 & 0xFFFEFFFE | 1;
          *(_WORD*)(v4 + 20) |= 4u;
        }
      }
    }
  }
}

__int64 GameHr_760c10(__int64 result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;

  v1 = GameData_212cfd0[0];
  v2 = *GameData_212cfd0[0];
  if ((*(_BYTE*)(*GameData_212cfd0[0] + 12674) & 1) == 0) {
    v4 = *(unsigned __int8*)(v2 + 8);
    v3 = v2 + 8;
    if (v4 != 0) {
      v5 = result;
      result = GameRoutine_6ea8c0(v3);
      if (result != 0 && *(_QWORD*)(result + 392) != 0) {
        v6 = *(_QWORD*)(result + 440);
        if (v6 != 0 && *(unsigned __int8*)(v6 + 16) <= 3u) {
          result = GameRoutine_76b0c0(v5, result);
          if (result != 0) {
            *(_QWORD*)(*v1 + 12672) |= 0x10000uLL;
          }
        }
      }
    }
  }
  return result;
}

__int64 GameHr_760ca0(__int64 a1)
{
  __int64 result;

  result = *GameData_212cfd0[0] + 8;
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_6ea8c0(result);
    if (result != 0 && *(_QWORD*)(result + 392) != 0) {
      return GameRoutine_76cbc0(a1);
    }
  }
  return result;
}

__int64 GameHr_7612e0(__int64 a1)
{
  __int64* v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = GameData_212cfd0[0];
  result = *GameData_212cfd0[0] + 8;
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_6ea8c0(result);
    if (result != 0) {
      v4 = *(_QWORD*)(result + 392);
      if (v4 != 0 && (*(_BYTE*)(*v2 + 12672) & 2) != 0 &&
          GameData_21cd148 != 0) {
        v5 = *(unsigned __int16*)(v4 + 16);
        v6 = *(_QWORD*)(result + 440);
        if (v6 != 0) {
          v7 = *(unsigned __int8*)(v6 + 16);
        }
        else {
          v7 = 9;
        }
        return GameRoutine_c8b5a0(a1, 20, result, v5, v7, 0xFFFFFFFFLL,
                                  0xFFFFFFFFLL);
      }
    }
  }
  return result;
}

__int64 GameHr_761380(__int64 a1)
{
  __int64* v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = GameData_212cfd0[0];
  result = *GameData_212cfd0[0] + 8;
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_6ea8c0(result);
    if (result != 0) {
      v4 = *(_QWORD*)(result + 392);
      if (v4 != 0 && (*(_BYTE*)(*v2 + 12672) & 2) != 0 &&
          GameData_21cd148 != 0) {
        v5 = *(unsigned __int16*)(v4 + 16);
        v6 = *(_QWORD*)(result + 440);
        if (v6 != 0) {
          v7 = *(unsigned __int8*)(v6 + 16);
        }
        else {
          v7 = 9;
        }
        result = GameRoutine_c8b5a0(a1, 19, result, v5, v7, 0xFFFFFFFFLL,
                                    0xFFFFFFFFLL);
        if ((result & 1) != 0) {
          v8 = *(_QWORD*)(*v2 + 12672);
          if ((v8 & 0x100000) != 0) {
            *(_QWORD*)(*v2 + 12672) = v8 & 0xFFFFFFFFFFEFFFFFLL;
          }
        }
      }
    }
  }
  return result;
}

__int64 GameHr_761430(__int64 a1)
{
  __int64* v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = GameData_212cfd0[0];
  result = *GameData_212cfd0[0] + 8;
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_6ea8c0(result);
    if (result != 0 && *(_QWORD*)(result + 392) != 0 &&
        (*(_BYTE*)(*v2 + 12672) & 2) != 0 && GameData_21cd148 != 0) {
      v4 = *(_QWORD*)(result + 440);
      if (v4 != 0) {
        v5 = *(unsigned __int8*)(v4 + 16);
      }
      else {
        v5 = 9;
      }
      result = GameRoutine_c8b5a0(
          a1, 4, result, (unsigned int)*(char*)(result + 584),
          (unsigned int)*(char*)(result + 585), v5, 0xFFFFFFFFLL);
      if ((result & 1) != 0) {
        v6 = *(_QWORD*)(*v2 + 12672);
        if ((v6 & 0x100000) != 0) {
          *(_QWORD*)(*v2 + 12672) = v6 & 0xFFFFFFFFFFEFFFFFLL;
        }
      }
    }
  }
  return result;
}

__int64 GameHr_7614e0()
{
  __int64* v0;
  __int64 result;
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  const char* v12;
  __int64* v13;
  __int64 v14;

  v0 = GameData_212cfd0[0];
  result = *GameData_212cfd0[0];
  if ((*(_BYTE*)(*GameData_212cfd0[0] + 12674) & 0x10) != 0) {
    v3 = *(unsigned __int8*)(result + 8);
    v2 = result + 8;
    if (v3 != 0) {
      v4 = GameRoutine_6ea8c0(v2);
      result = (__int64)GameRoutine_7529c0(v4);
      if (result == 0) {
        goto LABEL_2;
      }
    }
    else {
      result = (__int64)GameRoutine_7529c0(0);
      if (result == 0) {
        goto LABEL_2;
      }
    }
    v5 = result;
    if (GameData_21caab0 == 0 ||
        ((result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                      &GameData_21d1e50)) == 0 ||
         *(_DWORD*)(result + 32) == 0) &&
            (GameData_21caab0 == 0 ||
             (v6 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                      &GameData_21d1e50)) != 0 &&
                 *(_DWORD*)(v6 + 32) != 0 ||
             GameData_21caab0 == 0 ||
             (result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                          &GameData_21d1e40)) == 0 ||
             *(_DWORD*)(result + 32) == 0)) {
      result = GameRoutine_1194890();
      if ((result & 1) == 0) {
        result = *v0 + 8;
        if (*(_BYTE*)result != 0) {
          result = GameRoutine_6ea8c0(result);
          if (result != 0) {
            v7 = *(_QWORD*)(result + 392);
            if (v7 != 0) {
              if (*(_QWORD*)(*(_QWORD*)(v5 + 392) + 288LL) != 0 &&
                  (v8 = GameRoutine_975940()) != 0 &&
                  (v9 = v8, *(_QWORD*)(v7 + 288) != 0) &&
                  (v10 = GameRoutine_975940()) != 0 &&
                  (v11 = *(unsigned __int16*)(v9 + 312),
                   *(_WORD*)(v9 + 312) != 0)) {
                v12 = "Cheer_Senior";
                v13 = (__int64*)(*(_QWORD*)(v9 + 320) + 8LL);
                while (1) {
                  v14 = *v13;
                  v13 += 2;
                  if (v14 == v10) {
                    break;
                  }
                  if (--v11 == 0) {
                    v12 = "Cheer";
                    break;
                  }
                }
              }
              else {
                v12 = "Cheer";
              }
              result = GameRoutine_81b5a0(v5, v12, 1.0);
            }
          }
        }
      }
    }
  }
LABEL_2:
  *(_QWORD*)(*v0 + 12672) &= ~0x100000uLL;
  return result;
}

__int64 GameHr_761670(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  char v15[4];

  v2 = *GameData_212cfb8[0];
  v3 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
  result = GameData_21cd108;
  v5 = *(char*)(GameData_21cd108 + 313) + 32 * *(char*)(GameData_21cd108 + 314);
  if (v5 >= 0x400) {
    v6 = 0;
  }
  else {
    v6 = v5;
  }
  v7 = *(__int16*)(v3 + 2LL * (unsigned int)v6 + 4200);
  v8 = *(_QWORD*)(v3 + 8);
  if ((v7 < 0 || v8 == 0) &&
      ((v7 = *(__int16*)(v3 + 2 * v6 + 2152)) < 0 || v8 == 0)) {
    v14 = *(__int16*)(v3 + 104 + 2 * v6);
    if (v14 < 0) {
      return result;
    }
    v9 = v8 + 144LL * (unsigned int)v14;
    if (v9 == 0) {
      return result;
    }
  }
  else {
    v9 = v8 + 144LL * (unsigned int)v7;
    if (v9 == 0) {
      return result;
    }
  }
  if (*(_BYTE*)(GameData_21cd108 + 8) != 0 &&
      (v10 = GameRoutine_6ea8c0(GameData_21cd108 + 8)) != 0 &&
      *(_QWORD*)(v10 + 392) != 0 && (v11 = *(_QWORD*)(v10 + 440)) != 0) {
    v12 = *(_BYTE*)(v11 + 16);
  }
  else {
    v12 = 9;
  }
  v13 = *(_QWORD*)(v2 + 16);
  v15[0] = v12;
  return GameRoutine_7c9f00(v13, a1, v9, v15);
}

__int64 GameHr_761bc0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = GameData_212cfd0[0];
  if (*(_BYTE*)(*GameData_212cfd0[0] + 8) == 0 ||
      (v3 = GameRoutine_6ea8c0(*GameData_212cfd0[0] + 8)) == 0 ||
      (v4 = v3, *(_QWORD*)(v3 + 392) == 0)) {
    v4 = 0;
  }
  GameRoutine_790460(a1 + 12568, v4);
  if ((*(_DWORD*)(*v2 + 56) & 0xFFF) == 0) {
    v5 = 0;
    if (*(_BYTE*)(a1 + 23841) == 0) {
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  v5 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                  8LL * (*(_DWORD*)(*v2 + 56) & 0xFFF));
  if (*(_BYTE*)(a1 + 23841) != 0) {
  LABEL_7:
    GameRoutine_7992e0(a1 + 12584);
    GameRoutine_7992e0(a1 + 13344);
    GameRoutine_7992e0(a1 + 14104);
    GameRoutine_7992e0(a1 + 14864);
    *(_DWORD*)(a1 + 23824) = 0;
    *(_WORD*)(a1 + 23840) = 0;
    *(_QWORD*)(a1 + 23844) = 0;
    *(_QWORD*)(a1 + 23850) = 0;
    GameRoutine_8b9d00(a1 + 23864);
  }
LABEL_8:
  GameRoutine_799aa0(a1 + 12584, v5);
  *(_DWORD*)(a1 + 23844) |= 0x2041u;
  GameRoutine_790ba0(a1 + 12568);
  v6 = *(_QWORD*)(a1 + 23872);
  *(_BYTE*)(a1 + 23841) |= 1u;
  GameRoutine_8b9f80(v6, a1 + 12568);
  return GameRoutine_8bbc40(a1 + 23864);
}

__int64 GameHr_761d00(__int64 a1)
{
  __int64 v2;
  int v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;

  v2 = *(_QWORD*)GameData_212d1b0;
  if (*(_QWORD*)GameData_212d1b0 != 0) {
    *(_QWORD*)(v2 + 152) = 0;
    *(_BYTE*)(v2 + 289) = 1;
    v3 = *(_DWORD*)(a1 + 23844);
    *(_QWORD*)(v2 + 152) = a1 + 12568;
    *(_BYTE*)(v2 + 290) = (v3 & 0x800000) != 0;
    GameRoutine_183e450();
  }
  v4 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 792, 16, 0);
  v4[2] = 0;
  v5 = v4 + 3;
  v6 = v4;
  *v4 = GameData_212d1e8 + 2;
  v4[1] = 0;
  GameRoutine_1a0ba50(v4 + 3, 0, 728, v7, v8, v9);
  v6[32] = 0;
  v6[33] = 0;
  v6[44] = 0;
  v6[45] = 0;
  v6[56] = 0;
  v6[57] = 0;
  *(_DWORD*)((char*)v6 + 367) = 0;
  v6[22] = 0;
  v6[23] = 0;
  v6[24] = 0;
  v6[25] = 0;
  *((_WORD*)v6 + 104) = 0;
  v6[35] = 0;
  v6[36] = 0;
  *((_BYTE*)v6 + 296) = 0;
  v6[30] = 0;
  v6[31] = 0;
  *((_DWORD*)v6 + 82) = -1;
  v6[42] = 0;
  v6[43] = 0;
  v6[47] = 0;
  v6[48] = 0;
  *((_BYTE*)v6 + 392) = 0;
  v6[18] = 0x43FA000043FA0000LL;
  v6[19] = 0xC3FA0000C3FA0000LL;
  v6[20] = 0x43FA000043FA0000LL;
  v6[21] = 0xC3FA0000C3FA0000LL;
  v6[29] = 0;
  *(_DWORD*)((char*)v6 + 463) = 0;
  *((_DWORD*)v6 + 106) = -1;
  v6[54] = 0;
  v6[55] = 0;
  *((_BYTE*)v6 + 488) = 0;
  v6[59] = 0;
  v6[60] = 0;
  *(_DWORD*)((char*)v6 + 271) = 0;
  *((_DWORD*)v6 + 130) = -1;
  *(_DWORD*)((char*)v6 + 559) = 0;
  v6[69] = 0;
  v6[68] = 0;
  v6[67] = 0;
  v6[66] = 0;
  *((_BYTE*)v6 + 584) = 0;
  v6[72] = 0;
  v6[71] = 0;
  *((_DWORD*)v6 + 154) = -1;
  v6[78] = 0;
  v6[79] = 0;
  v6[80] = 0;
  v6[81] = 0;
  v6[82] = 0;
  v6[83] = 0;
  v6[84] = 0;
  v6[85] = 0;
  v6[86] = 0;
  v6[87] = 0;
  v6[88] = 0;
  *(_QWORD*)((char*)v6 + 300) = 0x6300000063LL;
  *(_QWORD*)((char*)v6 + 396) = 0x6300000063LL;
  *(_QWORD*)((char*)v6 + 492) = 0x6300000063LL;
  v6[89] = 0;
  v6[90] = 0;
  v6[91] = 0;
  v6[92] = 0;
  *((_DWORD*)v6 + 186) = 0;
  v6[98] = 0;
  v6[97] = 0;
  v6[96] = 0;
  v6[95] = 0;
  v6[94] = 0;
  v12 = v5;
  v13 = v6;
  v6[40] = -4294967197LL;
  v6[52] = -4294967197LL;
  v6[64] = -4294967197LL;
  *(_QWORD*)((char*)v6 + 588) = 0x6300000063LL;
  v6[76] = -4294967197LL;
  GameRoutine_10ea6e0(v5, a1 + 12568);
  GameRoutine_1090da0(v5);
  result = GameRoutine_10d4da0(a1, &v12, a1 + 152);
  v11 = v13;
  if (v13 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v13 + 1),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(_QWORD*))(*v11 + 16LL))(v11);
    return GameRoutine_1a09c50(v11);
  }
  return result;
}

__int64 GameHr_761f50(__int64 a1)
{
  GameRoutine_8bc350(a1 + 23864);
  return GameRoutine_8b9d00(a1 + 23864);
}

#pragma GCC visibility pop
