#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
extern char GameData_1a9f09e;
extern _UNKNOWN GameData_1ad653b;
extern _UNKNOWN GameData_1af4ee7;
extern _DWORD GameData_1b373e4[17];
extern _DWORD GameData_1b3f044[14];
extern unsigned __int8 GameData_1b41aa9[22];
extern __int64 (*GameData_1f93458[])();
extern __int64 (*GameData_1f934e8[])();
extern __int64 (*GameData_1f94290[])();
extern __int64 (*GameData_1f94310[])();
extern __int64 (*GameData_1f94cd8[])();
extern __int64 (*GameData_1f959d8[])();
extern __int64 (*GameData_1f9fd40[])();
extern __int64 (*GameData_202d0c8[])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212c018[2];
extern __int64 GameData_212c060;
extern __int64 (**GameData_212c3c8)();
extern __int64 GameData_212c470;
extern _UNKNOWN* GameData_212c540;
extern __int64* GameData_212c790;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c930;
extern __int64* GameData_212ce30;
extern _UNKNOWN* GameData_212ce38;
extern __int64* GameData_212ce40;
extern __int64* GameData_212ce88[4];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cea0;
extern _UNKNOWN* GameData_212cf50;
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212cfc8[9];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212cff0[4];
extern __int64* GameData_212cff8[3];
extern __int64 GameData_212d020[5];
extern _UNKNOWN* GameData_212d208;
extern __int64 GameData_212d8b0[3];
extern __int64* GameData_21309c8[5];
extern int GameData_21762a8;
extern __int64 GameData_21a3a28;
extern __int128 GameData_21a6120;
extern _UNKNOWN GameData_21a6130;
extern __int64 GameData_21c9608;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21c9700;
extern __int64 GameData_21c9988;
extern __int64 GameData_21c99b0;
extern __int64 GameData_21ca0c8;
extern __int64 GameData_21ca0d0;
extern __int64 GameData_21ca0d8;
extern __int64 GameData_21ca0e8;
extern __int64 GameData_21ca0f0;
extern __int64 GameData_21ca100;
extern __int64 GameData_21ca108;
extern __int64 GameData_21ca110;
extern __int64 GameData_21ca118;
extern __int64 GameData_21ca120;
extern __int64 GameData_21ca128;
extern __int64 GameData_21ca130;
extern __int64 GameData_21ca138;
extern __int64 GameData_21ca140;
extern __int64 GameData_21ca148;
extern __int64 GameData_21ca150;
extern __int64 GameData_21ca158;
extern __int64 GameData_21ca160;
extern __int64 GameData_21ca168;
extern __int64 GameData_21ca170;
extern __int64 GameData_21ca178;
extern __int64 GameData_21ca270;
extern __int64 GameData_21ca278;
extern _UNKNOWN GameData_21ca280;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21ca310;
extern __int64 GameData_21caab0;
extern __int64 GameData_21cd0c8;
extern __int64 GameData_21cd0e0;
extern __int64 GameData_21cd0e8;
extern __int64 GameData_21cd108;
extern __int64 GameData_21cd120;
extern __int64 GameData_21cd128;
extern __int64 GameData_21cd130;
extern __int64 GameData_21cf830;
extern __int64 GameData_21d1e40;
extern __int64 GameData_21d1e50;
extern __int64 GameData_21d1e60;
extern _UNKNOWN GameData_21d40b8;
extern _UNKNOWN GameData_21d41b0;
extern int GameData_21d8810;
extern __int64 GameData_21d8818;
extern __int64 GameData_21d8820;
extern __int64 GameData_21ec550;
extern __int64 GameData_21ee240;
extern __int64 GameData_21eea58;
extern __int64 GameData_21f1780;
extern __int64 GameData_21f1e08;
extern __int64 GameData_21f4280;
extern __int64 GameData_21f42d0;
extern __int64 GameData_21f49b8;
extern __int64 GameData_2241428;
extern __int64 GameData_2258178;
extern __int64 GameData_2265ee0;
extern char GameData_22736e0;
__n128 GameRoutine_10c830(_QWORD, float);
__int64 GameRoutine_10cff0(_QWORD);
__int64 GameRoutine_127be60(_QWORD);
__int64 GameRoutine_1329500(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_13305c0(_QWORD);
__int64 GameRoutine_13460a0(_QWORD);
struct PseudoSret GameRoutine_134b980(_QWORD);
__int64 GameRoutine_1738620(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17d4db0(_QWORD, _QWORD);
__int64 GameRoutine_17d4e60(_QWORD, _QWORD);
__int64 GameRoutine_17d59a0(_QWORD, _QWORD);
__int64 GameRoutine_17d5f20(_QWORD, _QWORD);
__int64 GameRoutine_17d62a0(_QWORD, _QWORD);
__int64 GameRoutine_18aff60(_QWORD, _QWORD);
__int64 GameRoutine_19f5240(_QWORD);
__int64 GameRoutine_1a09b70(_QWORD);
__int64 GameRoutine_1a09b80(_QWORD);
__int64 GameRoutine_1a09c00(_QWORD);
__int64 GameRoutine_1a09c10(_QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD);
__int64 GameRoutine_1a09d00(_QWORD);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a180(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a680(_QWORD, _QWORD, _QWORD, _QWORD);
float GameRoutine_1a0a6a0(float, float);
__int64 GameRoutine_1a0a6f0(_QWORD);
__int64 GameRoutine_1a0a700(_QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5b3d10(__int64, int, __int64);
struct PseudoSret GameRoutine_5b3d60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5cc140(__int64, int);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD, _QWORD, _QWORD,
                                                  _QWORD, _QWORD, _QWORD,
                                                  _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a230(_QWORD);
__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
unsigned __int64 GameRoutine_61c30(__int64, __int64, __int64, unsigned __int64,
                                   __int64, __int64);
__int64 GameRoutine_632cd0(_QWORD, _QWORD);
_QWORD* GameRoutine_633840(_QWORD*);
__int64 GameRoutine_634d80(_QWORD, _QWORD);
__int64 GameRoutine_637b00(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_637c90(void);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 GameRoutine_6544c0(__int64, __int64);
__int64 GameRoutine_657a50(_QWORD, _QWORD);
__int64 GameRoutine_658d60(_QWORD);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
__int64 GameRoutine_65cf40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65d2d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_682780(_QWORD);
__int64 GameRoutine_689100(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_689280(_QWORD, _QWORD);
__int64 GameRoutine_6b3720(_QWORD);
__int64 GameRoutine_6b38a0(void);
__int64 GameRoutine_6b4ef0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6b50a0(_QWORD);
__int64 GameRoutine_6b51e0(_QWORD);
void __attribute__((noreturn)) GameRoutine_6b5390(_QWORD);
__int64 GameRoutine_6b55a0(__int64 result, unsigned __int8);
__int64 GameRoutine_6b63a0(_QWORD, _QWORD);
__int64 GameRoutine_6b6600(_QWORD, _QWORD);
__int64 GameRoutine_6b6860(_QWORD);
__int64 GameRoutine_6b6a60(_QWORD);
__int64 GameRoutine_6b6c80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6b6ee0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6b71e0(_QWORD);
__int64 GameRoutine_6b7f00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6b81a0(_QWORD, _QWORD);
__int64 GameRoutine_6b83e0(_QWORD, _QWORD);
__int64 GameRoutine_6b8990(_QWORD, _QWORD);
__int64 GameRoutine_6b8da0(_QWORD, _QWORD);
__int64 GameRoutine_6c1d00(_QWORD);
void __attribute__((noreturn)) GameRoutine_6c1f60(void);
__int64 GameRoutine_6c1f80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c2b50(_QWORD);
__int64 GameRoutine_6c8830(_QWORD);
__int64 GameRoutine_6c8a80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6d8f40(_QWORD, _QWORD);
__int64 GameRoutine_6dd190(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e9fa0(void);
void GameRoutine_6ea140();
__int64 GameRoutine_6ea8c0(_QWORD, long double);
__int64 GameRoutine_6ead60(_QWORD, _QWORD);
__int64 GameRoutine_6ec7a0(_QWORD, _QWORD);
__int64 GameRoutine_6eca40(_QWORD, _QWORD);
__int64 GameRoutine_715600(__int64);
__int64 GameRoutine_715780(void);
__int64 GameRoutine_715ca0(_QWORD);
__int64 GameRoutine_716d80(_QWORD, _QWORD);
__int64 GameRoutine_71f220(_QWORD);
__int64 GameRoutine_72a260(_QWORD);
__int64 GameRoutine_72b4a0(_QWORD);
__int64 GameRoutine_72b6c0(_QWORD);
void GameRoutine_730cb0(__int64, char*);
void GameRoutine_730e40(__int64, __int64);
float* GameRoutine_731180(float* result);
void GameRoutine_7317c0(__int64);
__int64 GameRoutine_73bd40(_QWORD, _QWORD);
__int64 GameRoutine_744480(_QWORD);
__int64 GameRoutine_748f80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_757f60(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
float GameRoutine_764490(void);
__int64 GameRoutine_765b20(void);
__int64 GameRoutine_76b550(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_778500(_QWORD);
__int64 GameRoutine_7797e0(_QWORD, _QWORD);
__int64 GameRoutine_77a740(__int64, unsigned int, long double);
__int64 GameRoutine_78d280(_QWORD, _QWORD);
__int64 GameRoutine_78e3c0(_QWORD, _QWORD);
__int64 GameRoutine_78f500(_QWORD);
__int64 GameRoutine_799290(_QWORD);
__int64 GameRoutine_7a0e10(_QWORD, _QWORD);
__int64 GameRoutine_7a7dc0(const char*, ...);
__int64 GameRoutine_7a86e0(_QWORD);
__int64 GameRoutine_7c16d0(_QWORD, _QWORD);
__int64 GameRoutine_7f8cc0(_QWORD, _QWORD);
__int64 GameRoutine_7f8fd0(_QWORD, _QWORD);
__int64 GameRoutine_80cb30(_QWORD);
__int64 GameRoutine_80cc80(_QWORD);
__int64 GameRoutine_80e090(void);
__int64 GameRoutine_81aee0(_QWORD, float);
__int64 GameRoutine_827530(_QWORD);
__int64 GameRoutine_829ca0(_QWORD);
__int64 GameRoutine_82ce80(_QWORD, _QWORD);
__int64 GameRoutine_845bc0(_QWORD, _QWORD);
__int64 GameRoutine_86c160(_QWORD);
__int64 GameRoutine_890160(_QWORD);
__int64 GameRoutine_89b540(_QWORD);
__int64 GameRoutine_90d5a0(void);
__int64 GameRoutine_93bb80(_QWORD);
__int64 GameRoutine_9728b0(_QWORD);
__int64 GameRoutine_97b680(_QWORD);
__int64 GameRoutine_9a28e0(_QWORD);
__int64 GameRoutine_9b3b00(_QWORD);
__int64 GameRoutine_a14660(_QWORD, _QWORD);
__int64 GameRoutine_a15480(_QWORD);
__int64 GameRoutine_db7ba0(_QWORD);
struct PseudoSret GameRoutine_ff2d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                    _QWORD, double, float);
_BYTE* ProcInst_657a50(__int64, char);
_DWORD* GameRoutine_6544c0_alt1(__int64, __int64) __asm__("GameRoutine_6544c0");
_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
_QWORD* Image_72b6c0(_QWORD*);
__attribute__((swiftcall)) void
GameRoutine_134b980_alt1(PSEUDO_X8,
                         __int64(__fastcall*)()) __asm__("GameRoutine_134b980");
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64* game_UnitPool_Get(_BYTE*);
__int64 BattleSide_7a0e10(__int64 result, __int64, __int64);
__int64 Camera_7c16d0(__int64, unsigned int);
__int64 GameHr_73bd40(int, __int64);
__int64 GameRoutine_18aff60_alt1(__int64 result,
                                 __int64) __asm__("GameRoutine_18aff60");
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64
GameRoutine_1a0a680_alt1(__int64, unsigned __int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a0a680");
__int64 GameRoutine_634d80_alt1(__int64, __int64) __asm__("GameRoutine_634d80");
__int64 GameRoutine_637b00_alt1(__int64 result,
                                _QWORD*) __asm__("GameRoutine_637b00");
__int64 GameRoutine_6b3720_alt1(__int64) __asm__("GameRoutine_6b3720");
__int64 GameRoutine_6c2b50_alt1(__int64) __asm__("GameRoutine_6c2b50");
__int64 GameRoutine_6e9fa0_alt1(__int64) __asm__("GameRoutine_6e9fa0");
__int64 GameRoutine_76b550_alt1(__int64, __int64, __int64, char, long double,
                                long double) __asm__("GameRoutine_76b550");
__int64 GameRoutine_78d280_alt1(__int64, __int64) __asm__("GameRoutine_78d280");
__int64 GameRoutine_799290_alt1(_QWORD*) __asm__("GameRoutine_799290");
__int64 GameRoutine_845bc0_alt1(__int64, __int64) __asm__("GameRoutine_845bc0");
__int64 Image_72b4a0(__int64);
__int64 ProcMapSeqTargetSelect_78e3c0(__int64);
__int64 VTarget_778500(__int64);
__int64 VTarget_7797e0(_DWORD*, unsigned __int8);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_Unit_EquipItem_6d8f40(__int64, unsigned int);
__int64 game_Unit_GetParam(__int64);
__int64 game_map_VTarget_EnumerateSubTarget(__int64, unsigned int);
__int64 game_sound_PlayCursorTargetSe();
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 std___1___next_prime(unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
bool Stream_65d2d0(__int64, int*, int*, int*);
bool game_Unit_CanSwitchMount(__int64);
bool game_map_TargetMask_Commit(_QWORD*, __int64);
extern _QWORD GameData_21d40b8_alt1[] __asm__("GameData_21d40b8");
extern __int64 (***GameData_212c3c8_alt1)() __asm__("GameData_212c3c8");
extern __int64* game_g_empty_item_ptr;
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting_ptr;
extern __int64 game_map_g_hint_data;
float fmodf(float, float);
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 fw_compression_Compress(__int64, __int64, __int64,
                                         unsigned __int64, unsigned int);
unsigned __int64 strlen(const char*);
unsigned int* game_6b7f00(unsigned int*, unsigned __int64, unsigned int*,
                          __int64, __int64*);
unsigned int* game_gmap_SpotMgr_GetCurrentSpot();
void Cursor_730cb0(__int64, char*);
void Cursor_730e40(__int64, __int64);
void GameRoutine_6b4ef0_alt1(__int64*, __int64) __asm__("GameRoutine_6b4ef0");
void GameRoutine_6b50a0_alt1(__int64*) __asm__("GameRoutine_6b50a0");
void GameRoutine_6b71e0_alt1(__int64*) __asm__("GameRoutine_6b71e0");
void GameRoutine_6b81a0_alt1(_QWORD*, __int64*) __asm__("GameRoutine_6b81a0");
void GameRoutine_6b8990_alt1(_QWORD*, __int64*) __asm__("GameRoutine_6b8990");
void GameRoutine_6b8da0_alt1(_QWORD*, __int64*) __asm__("GameRoutine_6b8da0");
void GameRoutine_6ec7a0_alt1(__int64*,
                             unsigned __int64) __asm__("GameRoutine_6ec7a0");
void GameRoutine_6eca40_alt1(__int64*, __int64) __asm__("GameRoutine_6eca40");
void GameRoutine_a15480_alt1(_QWORD*) __asm__("GameRoutine_a15480");
void Image_72a260(__int64);
void MapTerrainFile_6b38a0();
void MemoryInputStream_6b51e0(__int64);
void Stream_65cf40(__int64, int, int, int);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_637c90_alt1() __asm__("GameRoutine_637c90");
void __attribute__((noreturn))
GameRoutine_6b5390_alt1() __asm__("GameRoutine_6b5390");
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) String_60a230();
void __cxa_guard_release(__int64);
void game_6b83e0(_QWORD*, _QWORD*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
__int64 GameHr_637cc0(__int64* a1, __int64* a2, _QWORD* a3);
void GameHr_6604e0(__int64 a1, __int64 a2);
bool GameHr_6b3be0(const char* a1, const char* a2);
_QWORD* GameHr_6b63a0(unsigned int* a1, _QWORD* a2);
__int64 GameHr_6e9a40(__int64* a1);
__int64 GameHr_73c610(__int64 result, __int64 a2);
void GameHr_73ca80();
__int64 GameHr_769d60(__int64 a1, __int64 a2, _DWORD* a3, long double a4,
                      long double a5);
_QWORD* GameHr_788c60(__int64 a1);
__int64 GameHr_789670(__int64 result);
_BYTE* GameHr_78cb60(__int64 a1);
void GameHr_7a0b00(_QWORD* a1);

unsigned __int64 GameHr_5cd420(__int64* a1)
{
  unsigned __int64 v1;
  __int64 v4;
  float v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  float* v10;
  __int64 v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float* v20;
  float v21;
  float v22;
  __int64 v23;
  float v24;
  int v25;
  __int64 v26;
  __int64 v27;
  float* v28;
  __int64 v29;
  __int64 v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float* v38;
  float v39;
  float v40;
  _DWORD* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  int v47;
  int v48;
  int v49;

  if (*(_BYTE*)(*(_QWORD*)(*a1 + 160) + 1874LL) != 0) {
    goto LABEL_2;
  }
  v4 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)(*a1 + 2088) +
                                                   16LL))(*a1 + 2088, 64, 128);
  if (v4 == 0) {
    goto LABEL_2;
  }
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = 0;
  *(_QWORD*)v4 = 0;
  *(_QWORD*)(v4 + 8) = 0;
  *(_QWORD*)(*a1 + 1048) = v4;
  v5 = *(float*)(*(_QWORD*)(*a1 + 160) + 2048LL);
  v6 = *(_QWORD*)(*(_QWORD*)(*a1 + 568) + 696LL);
  if (v6 != 0) {
    v7 = *(_DWORD*)(v6 + 4);
    if (v7 >= 1) {
      v8 = v7 & 7;
      if ((unsigned int)v7 < 8) {
        v9 = 0;
      LABEL_29:
        if (v8 != 0) {
          v20 = (float*)(v6 + 16 * v9 + 12);
          do {
            v21 = *v20;
            v20 += 4;
            v22 = v21;
            if (v5 < v21) {
              v5 = v22;
            }
            --v8;
          } while (v8 != 0);
        }
        goto LABEL_34;
      }
      v10 = (float*)(v6 + 76);
      v11 = 0;
      v12 = -(__int64)(v7 & 0x7FFFFFF8);
      while (1) {
        v13 = *(v10 - 16);
        if (v5 >= v13) {
          v13 = v5;
          v14 = *(v10 - 12);
          if (v13 < v14) {
          LABEL_13:
            v15 = *(v10 - 8);
            if (v14 < v15) {
              goto LABEL_14;
            }
            goto LABEL_22;
          }
        }
        else {
          v14 = *(v10 - 12);
          if (v13 < v14) {
            goto LABEL_13;
          }
        }
        v14 = v13;
        v15 = *(v10 - 8);
        if (v14 < v15) {
        LABEL_14:
          v16 = *(v10 - 4);
          if (v15 < v16) {
            goto LABEL_15;
          }
          goto LABEL_23;
        }
      LABEL_22:
        v15 = v14;
        v16 = *(v10 - 4);
        if (v15 < v16) {
        LABEL_15:
          v17 = *v10;
          if (v16 < *v10) {
            goto LABEL_16;
          }
          goto LABEL_24;
        }
      LABEL_23:
        v16 = v15;
        v17 = *v10;
        if (v16 < *v10) {
        LABEL_16:
          v18 = v10[4];
          if (v17 < v18) {
            goto LABEL_17;
          }
          goto LABEL_25;
        }
      LABEL_24:
        v17 = v16;
        v18 = v10[4];
        if (v17 < v18) {
        LABEL_17:
          v19 = v10[8];
          if (v18 < v19) {
            goto LABEL_18;
          }
          goto LABEL_26;
        }
      LABEL_25:
        v18 = v17;
        v19 = v10[8];
        if (v18 < v19) {
        LABEL_18:
          v5 = v10[12];
          if (v19 >= v5) {
            goto LABEL_27;
          }
          goto LABEL_10;
        }
      LABEL_26:
        v19 = v18;
        v5 = v10[12];
        if (v19 >= v5) {
        LABEL_27:
          v5 = v19;
        }
      LABEL_10:
        v11 -= 8;
        v10 += 32;
        if (v12 == v11) {
          v9 = -v11;
          goto LABEL_29;
        }
      }
    }
  }
LABEL_34:
  *(_DWORD*)(v4 + 48) = vcvtps_u32_f32(v5);
  v23 = *(_QWORD*)(*(_QWORD*)(*a1 + 568) + 704LL);
  v24 = (float)*(int*)(*(_QWORD*)(*a1 + 160) + 2232LL);
  if (v23 == 0) {
    goto LABEL_63;
  }
  v25 = *(_DWORD*)(v23 + 4);
  if (v25 < 1) {
    goto LABEL_63;
  }
  v26 = v25 & 7;
  if ((unsigned int)v25 >= 8) {
    v28 = (float*)(v23 + 76);
    v29 = 0;
    v30 = -(__int64)(v25 & 0x7FFFFFF8);
    while (1) {
      v31 = *(v28 - 16);
      if (v24 >= v31) {
        v31 = v24;
        v32 = *(v28 - 12);
        if (v31 < v32) {
        LABEL_42:
          v33 = *(v28 - 8);
          if (v32 < v33) {
            goto LABEL_43;
          }
          goto LABEL_51;
        }
      }
      else {
        v32 = *(v28 - 12);
        if (v31 < v32) {
          goto LABEL_42;
        }
      }
      v32 = v31;
      v33 = *(v28 - 8);
      if (v32 < v33) {
      LABEL_43:
        v34 = *(v28 - 4);
        if (v33 < v34) {
          goto LABEL_44;
        }
        goto LABEL_52;
      }
    LABEL_51:
      v33 = v32;
      v34 = *(v28 - 4);
      if (v33 < v34) {
      LABEL_44:
        v35 = *v28;
        if (v34 < *v28) {
          goto LABEL_45;
        }
        goto LABEL_53;
      }
    LABEL_52:
      v34 = v33;
      v35 = *v28;
      if (v34 < *v28) {
      LABEL_45:
        v36 = v28[4];
        if (v35 < v36) {
          goto LABEL_46;
        }
        goto LABEL_54;
      }
    LABEL_53:
      v35 = v34;
      v36 = v28[4];
      if (v35 < v36) {
      LABEL_46:
        v37 = v28[8];
        if (v36 < v37) {
          goto LABEL_47;
        }
        goto LABEL_55;
      }
    LABEL_54:
      v36 = v35;
      v37 = v28[8];
      if (v36 < v37) {
      LABEL_47:
        v24 = v28[12];
        if (v37 >= v24) {
          goto LABEL_56;
        }
        goto LABEL_39;
      }
    LABEL_55:
      v37 = v36;
      v24 = v28[12];
      if (v37 >= v24) {
      LABEL_56:
        v24 = v37;
      }
    LABEL_39:
      v29 -= 8;
      v28 += 32;
      if (v30 == v29) {
        v27 = -v29;
        goto LABEL_58;
      }
    }
  }
  v27 = 0;
LABEL_58:
  if (v26 != 0) {
    v38 = (float*)(v23 + 16 * v27 + 12);
    do {
      v39 = *v38;
      v38 += 4;
      v40 = v39;
      if (v24 < v39) {
        v24 = v40;
      }
      --v26;
    } while (v26 != 0);
  }
LABEL_63:
  *(_DWORD*)(v4 + 52) = (int)v24;
  v41 = *(_DWORD**)(*(_QWORD*)(*a1 + 568) + 824LL);
  *(_DWORD*)v4 = v41[8];
  *(_DWORD*)(v4 + 4) = v41[9];
  *(_DWORD*)(v4 + 8) = v41[23];
  *(_DWORD*)(v4 + 12) = v41[24];
  if ((GameRoutine_5b3d10(*a1, 4, 96) & 1) == 0) {
  LABEL_2:
    LOBYTE(v1) = 0;
    return v1 & 1;
  }
  v42 = *a1;
  v43 = GameData_21a3a28;
  v44 = *(_QWORD*)(v42 + 1048);
  v45 = *(_QWORD*)(*(_QWORD*)(v42 + 568) + 824LL);
  v46 = (int)*(float*)(v45 + 24);
  v47 = *(_DWORD*)(v42 + 560) + GameRoutine_5cc140(v42, v46);
  *(_DWORD*)(v44 + 40) = v47;
  v48 = 2 * (v46 + *(_DWORD*)(v45 + 40) * (v46 - 1));
  *(_DWORD*)(v44 + 32) = v48;
  v1 = (unsigned int)(v48 * v47);
  v49 = *(_DWORD*)(v43 + 24);
  *(_BYTE*)(v44 + 16) = 0;
  *(_DWORD*)(v44 + 36) = v1 * v49;
  if ((_DWORD)v1 != 0) {
    if (((unsigned __int8)(*(struct PseudoSret*)((_QWORD*)v1) =
                               GameRoutine_5b3d60(v42,
                                                  *(unsigned int*)(v43 + 24),
                                                  80LL * (int)v1),
                           (void*)((_QWORD*)v1)) &
         1) != 0) {
      LOBYTE(v1) = 1;
      *(_BYTE*)(v44 + 16) = 1;
    }
    else {
      LOBYTE(v1) = *(_BYTE*)(v44 + 16);
    }
  }
  return v1 & 1;
}

_QWORD* GameHr_633840(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  _QWORD* result;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;

  v1 = a1[4];
  a1[4] = 0;
  if (v1 != 0) {
    v3 = a1[10];
    v14 = v1;
    if (v3 == 0) {
    LABEL_26:
      GameRoutine_60a310(v3);
    }
    (*(void (**)(__int64, __int64*))(*(_QWORD*)v3 + 48LL))(v3, &v14);
  }
  result = (_QWORD*)a1[10];
  if (result == a1 + 6) {
    v5 = 32;
    goto LABEL_8;
  }
  if (result != nullptr) {
    v5 = 40;
  LABEL_8:
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v5))((__int64)result);
  }
  v6 = (_QWORD*)*a1;
  if (*a1 == 0) {
    return result;
  }
  v7 = (_QWORD*)a1[1];
  if (v6 == v7) {
    goto LABEL_22;
  }
  v8 = (_QWORD*)a1[1];
  do {
    v11 = *(v8 - 10);
    v8 -= 10;
    v10 = v11;
    *v8 = 0;
    if (v11 != 0) {
      v14 = v10;
      v3 = *(v7 - 4);
      if (v3 == 0) {
        goto LABEL_26;
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v3 + 48LL))(v3, &v14);
    }
    result = (_QWORD*)*(v7 - 4);
    if (v7 - 8 == result) {
      v9 = 32;
    LABEL_13:
      result =
          (_QWORD*)(*(__int64 (**)(__int64))(*result + v9))((__int64)result);
      goto LABEL_14;
    }
    if (result != nullptr) {
      v9 = 40;
      goto LABEL_13;
    }
  LABEL_14:
    v7 = v8;
  } while (v8 != v6);
  v12 = (_QWORD*)*a1;
  a1[1] = v6;
  v6 = v12;
  if (v12 != nullptr) {
  LABEL_22:
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v13 = 56;
    }
    return (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v13, v6);
  }
  return result;
}

_QWORD* GameHr_633980(_QWORD* result, __int64* a2)
{
  _QWORD* v2;
  __int64 v3;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;

  v2 = result;
  if (*a2 == a2[1]) {
    v3 = 0;
  }
  else {
    v3 = *(_QWORD*)(*a2 + 64);
  }
  result[72] = v3;
  if (*a2 != a2[1] && *(_QWORD*)(*a2 + 64) != 0) {
    GameRoutine_1a09c00(result + 87);
    v5 = *((_DWORD*)v2 + 164);
    GameRoutine_1a09c10(v2 + 87);
    if ((v5 & 0x80) != 0) {
      return (_QWORD*)GameRoutine_17d62a0(v2, a2);
    }
    if (*a2 == a2[1]) {
      v6 = a2 + 4;
    }
    else {
      v6 = (__int64*)*a2;
    }
    v7 = *v6;
    *v6 = 0;
    v8 = v2[74];
    v2[74] = v7;
    if (v8 != 0) {
      v9 = v2[80];
      v12 = v8;
      if (v9 == 0) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v9 + 48LL))(v9, &v12);
    }
    result = (_QWORD*)v2[80];
    v2[80] = 0;
    if (result == v2 + 76) {
      v10 = 32;
    }
    else {
      if (result == nullptr) {
        goto LABEL_19;
      }
      v10 = 40;
    }
    result =
        (_QWORD*)(*(__int64 (**)(__int64))(*result + v10))((__int64)result);
  LABEL_19:
    v11 = (__int64*)v6[6];
    if (v11 != nullptr) {
      if (v11 == v6 + 2) {
        v2[80] = v2 + 76;
        return (_QWORD*)(*(__int64 (**)(__int64, _QWORD*))(
            *(_QWORD*)v6[6] + 24LL))(v6[6], v2 + 76);
      }
      else {
        v2[80] = v11;
        v6[6] = 0;
      }
    }
    else {
      v2[80] = 0;
    }
  }
  return result;
}

__int64 GameHr_634a10(__int64 a1, __int64 a2, char a3)
{
  _QWORD* v3;
  _QWORD* v7;
  int v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;

  v3 = *(_QWORD**)a2;
  v7 = *(_QWORD**)(*(_QWORD*)a2 + 112LL);
  GameRoutine_1a09c00(v7 + 87);
  v8 = *((_DWORD*)v7 + 164);
  GameRoutine_1a09c10(v7 + 87);
  if ((v8 & 0x10) == 0) {
    if (0xCCCCCCCCCCCCCCCDLL * ((__int64)(v3[1] - *v3) >> 4) < 2) {
      GameRoutine_17d5f20(v3, a3 & 1);
    }
    else {
      GameRoutine_17d59a0(v3, 0);
    }
    if (v3[26] < v3[25]) {
      return GameRoutine_17d4e60(a1 + 3640, a2);
    }
    GameRoutine_1a09c00(v7 + 87);
    v15 = *((_DWORD*)v7 + 164);
    GameRoutine_1a09c10(v7 + 87);
    if ((v15 & 0x10) == 0) {
      if (((*(__int64 (**)(_QWORD*))(*v7 + 32LL))(v7) & 1) != 0) {
        if (((*(__int64 (**)(_QWORD*))(*v7 + 48LL))(v7) & 1) == 0 ||
            (*(_BYTE*)(a1 + 4745) & 1) != 0) {
          GameRoutine_1a09b70(a1 + 3792);
          if ((*(_BYTE*)(a1 + 3832) & 1) == 0) {
            v16 = *(_QWORD*)(a1 + 3760);
            v17 = *(_QWORD*)(a1 + 3752);
            v18 = ((v16 - v17) << 6) - 1;
            if (v16 == v17) {
              v18 = 0;
            }
            v19 = *(_QWORD*)(a1 + 3784) + *(_QWORD*)(a1 + 3776);
            if (v18 == v19) {
              GameRoutine_9b3b00(a1 + 3744);
              v17 = *(_QWORD*)(a1 + 3752);
              v19 = *(_QWORD*)(a1 + 3784) + *(_QWORD*)(a1 + 3776);
            }
            *(_QWORD*)(*(_QWORD*)(v17 + 8 * (v19 >> 9)) + 8 * (v19 & 0x1FF)) =
                v7;
            ++*(_QWORD*)(a1 + 3784);
          }
          GameRoutine_1a09b80(a1 + 3792);
          goto LABEL_33;
        }
        GameRoutine_17d4db0(a1 + 3840, v7);
      LABEL_36:
        v23 = *(_QWORD**)a2;
        *(_QWORD*)a2 = 0;
        if (v23 == nullptr) {
        LABEL_48:
          v21 = GameData_2265ee0;
          goto LABEL_49;
        }
        v24 = v23[16];
        v23[16] = 0;
        if (v24 == 0) {
        LABEL_40:
          v25 = (_QWORD*)v23[22];
          if (v25 == v23 + 18) {
            v26 = 32;
          }
          else {
            if (v25 == nullptr) {
            LABEL_45:
              GameRoutine_633840(v23);
              v27 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v27 = 56;
              }
              GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v27, v23);
              goto LABEL_48;
            }
            v26 = 40;
          }
          (*(void (**)(__int64))(*v25 + v26))((__int64)v25);
          goto LABEL_45;
        }
        v11 = v23[22];
        v29 = v24;
        if (v11 != 0) {
          (*(void (**)(__int64, __int64*))(*(_QWORD*)v11 + 48LL))(v11, &v29);
          goto LABEL_40;
        }
      LABEL_53:
        GameRoutine_60a310(v11);
      }
      if (v7[97] != v7[96]) {
        GameRoutine_17d4db0(a1 + 3944, v7);
      LABEL_33:
        v22 = atomic_load((unsigned __int64*)(a1 + 4248));
        if (v22 != 0) {
          GameRoutine_1a0a180(a1 + 4184);
        }
        goto LABEL_36;
      }
    }
    GameRoutine_632cd0(a1, v7);
    goto LABEL_36;
  }
  GameRoutine_632cd0(a1, v7);
  v9 = *(_QWORD**)a2;
  *(_QWORD*)a2 = 0;
  if (v9 != nullptr) {
    v10 = v9[16];
    v9[16] = 0;
    if (v10 != 0) {
      v11 = v9[22];
      v29 = v10;
      if (v11 == 0) {
        goto LABEL_53;
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v11 + 48LL))(v11, &v29);
    }
    v12 = (_QWORD*)v9[22];
    if (v12 == v9 + 18) {
      v13 = 32;
    }
    else {
      if (v12 == nullptr) {
      LABEL_27:
        GameRoutine_633840(v9);
        v20 = 128;
        if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
          v20 = 56;
        }
        GameRoutine_1a0a4e0(GameData_2265ee0 + v20, v9);
        goto LABEL_30;
      }
      v13 = 40;
    }
    (*(void (**)(__int64))(*v12 + v13))((__int64)v12);
    goto LABEL_27;
  }
LABEL_30:
  v21 = GameData_2265ee0;
LABEL_49:
  v28 = 128;
  if (*(_QWORD*)(v21 + 200) == 0) {
    v28 = 56;
  }
  return GameRoutine_1a0a4e0(v21 + v28, a2);
}

__int64 GameHr_637cc0(__int64* a1, __int64* a2, _QWORD* a3)
{
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  struct {
    __int64 v27;
    _QWORD* v28;
    _QWORD* v29;
    unsigned __int64 v30;
    _QWORD* v31;
  } v27_;
  __int64 v32;

  v3 = *a1;
  v4 = a1[1] - *a1;
  v5 = 1 - 0x3333333333333333LL * (v4 >> 4);
  if (v5 > 0x333333333333333LL) {
    GameRoutine_637c90_alt1();
  }
  v6 = a1[2];
  v27_.v31 = a1 + 2;
  v10 = fw_memory_g_heap_manager_ptr;
  v11 = 0xCCCCCCCCCCCCCCCDLL * ((v6 - v3) >> 4);
  if (2 * v11 > v5) {
    v5 = 2 * v11;
  }
  if (v11 >= 0x199999999999999LL) {
    v12 = 0x333333333333333LL;
  }
  else {
    v12 = v5;
  }
  if (v12 != 0) {
    if (v12 > 0x333333333333333LL) {
      GameRoutine_60a210_alt1();
    }
    v13 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         80 * v12, 16, 0);
  }
  else {
    v13 = 0;
  }
  v14 = (_QWORD*)(v13 + v4);
  v15 = v13 + 80 * v12;
  v27_.v27 = v13;
  v27_.v28 = v14;
  v16 = (__int64*)a2[6];
  v27_.v30 = v15;
  v17 = *a2;
  *a2 = 0;
  *v14 = v17;
  if (v16 != nullptr) {
    if (v16 == a2 + 2) {
      v14[6] = v14 + 2;
      (*(void (**)(__int64*))(*v16 + 24))(v16);
    }
    else {
      v14[6] = v16;
      a2[6] = 0;
    }
  }
  else {
    v14[6] = 0;
  }
  v14[8] = *a3;
  v27_.v29 = v14 + 10;
  GameRoutine_637b00_alt1((__int64)a1, &v27_.v27);
  v18 = a1[1];
  v19 = v27_.v28;
  while (1) {
    v21 = v27_.v29;
    if (v19 == v27_.v29) {
      break;
    }
    v27_.v29 -= 10;
    v22 = *(v21 - 10);
    *(v21 - 10) = 0;
    if (v22 != 0) {
      v32 = v22;
      v23 = *(v21 - 4);
      if (v23 == 0) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v23 + 48LL))(v23, &v32);
    }
    v24 = (_QWORD*)*(v21 - 4);
    if (v24 == v21 - 8) {
      v20 = 32;
      goto LABEL_18;
    }
    if (v24 != nullptr) {
      v20 = 40;
    LABEL_18:
      (*(void (**)(__int64))(*v24 + v20))((__int64)v24);
    }
  }
  if (v27_.v27 != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v25, v27_.v27);
  }
  return v18;
}

void GameHr_6604e0(__int64 a1, __int64 a2)
{
  unsigned __int64 v4;
  int v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  int v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
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
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  int v30;
  int v31;
  unsigned int v32;

  if (!Stream_65d2d0(a2, (int*)&v32, &v31, &v30)) {
    return;
  }
  v4 = v32;
  if (v32 == 0) {
    return;
  }
  v5 = v30;
  if ((v30 & 3) != 1) {
    v12 = *(unsigned int*)(a2 + 20);
    if ((int)v12 < 1) {
      return;
    }
    v13 = *(_QWORD*)(a2 + 8);
    v14 = *(_QWORD*)(a1 + 8);
    if (v14 == v13) {
      goto LABEL_33;
    }
    if ((signed __int32)*(_DWORD*)(a1 + 16) >= (int)v12) {
    LABEL_32:
      memcpy(v14, v13, v12);
    LABEL_33:
      *(_DWORD*)(a1 + 20) = v12;
      return;
    }
    *(_QWORD*)(a1 + 8) = 0;
    if (v14 != 0) {
      v15 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v15, v14);
      v16 = *(_QWORD*)(a1 + 8);
    }
    else {
      v16 = 0;
    }
    v21 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 16) = 0;
    v22 = fw_memory_HeapManager_Allocate(v21, v12, 16, 0);
    memset(v22, 0, v12);
    *(_QWORD*)(a1 + 8) = v22;
    if (v16 != 0) {
      v23 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v23, v16);
      v22 = *(_QWORD*)(a1 + 8);
      *(_DWORD*)(a1 + 16) = v12;
      if (v22 == 0) {
        v14 = 0;
      LABEL_31:
        *(_DWORD*)(a1 + 20) = 0;
        goto LABEL_32;
      }
    }
    else {
      *(_DWORD*)(a1 + 16) = v12;
    }
    if ((unsigned int)v12 >= 0x20) {
      v24 = 32;
    }
    else {
      v24 = (unsigned int)v12;
    }
    memset(v22, 0, v24);
    v14 = *(_QWORD*)(a1 + 8);
    goto LABEL_31;
  }
  v6 = *(int*)(a2 + 16);
  v7 = fw_memory_g_heap_manager_ptr;
  v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      v6, 16, 0);
  memset(v8, 0, v6);
  v9 = fw_compression_Compress(v8, v6, *(_QWORD*)(a2 + 8) + 32LL, v4, 1u);
  if (v9 < v4) {
    v10 = v9;
    memcpy(*(_QWORD*)(a1 + 8) + 32LL, v8, v9);
    Stream_65cf40(a1, v10, v31, v5 | 2);
    LODWORD(v11) = v10 + 32;
  LABEL_48:
    *(_DWORD*)(a1 + 20) = v11;
    goto LABEL_49;
  }
  v11 = *(unsigned int*)(a2 + 20);
  if ((int)v11 >= 1) {
    v17 = *(_QWORD*)(a2 + 8);
    v18 = *(_QWORD*)(a1 + 8);
    if (v18 == v17) {
      goto LABEL_48;
    }
    if ((signed __int32)*(_DWORD*)(a1 + 16) >= (int)v11) {
    LABEL_47:
      memcpy(v18, v17, v11);
      goto LABEL_48;
    }
    *(_QWORD*)(a1 + 8) = 0;
    if (v18 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v19, v18);
      v20 = *(_QWORD*)(a1 + 8);
    }
    else {
      v20 = 0;
    }
    v25 = *(_QWORD*)v7;
    *(_QWORD*)(a1 + 16) = 0;
    v26 = fw_memory_HeapManager_Allocate(v25, v11, 16, 0);
    memset(v26, 0, v11);
    *(_QWORD*)(a1 + 8) = v26;
    if (v20 != 0) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v27, v20);
      v26 = *(_QWORD*)(a1 + 8);
      *(_DWORD*)(a1 + 16) = v11;
      if (v26 == 0) {
        v18 = 0;
      LABEL_46:
        *(_DWORD*)(a1 + 20) = 0;
        goto LABEL_47;
      }
    }
    else {
      *(_DWORD*)(a1 + 16) = v11;
    }
    if ((unsigned int)v11 >= 0x20) {
      v28 = 32;
    }
    else {
      v28 = (unsigned int)v11;
    }
    memset(v26, 0, v28);
    v18 = *(_QWORD*)(a1 + 8);
    goto LABEL_46;
  }
LABEL_49:
  v29 = 128;
  if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
    v29 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v29, v8);
}

__int64 GameHr_664ce0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64* v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 (*v12)(_QWORD);
  __int64 v13;
  _QWORD* v14;
  int v15;
  unsigned __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 i;
  __int64 v21;
  unsigned __int64 v22;
  __int64 j;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  unsigned int v32;
  char v33;
  char v34;
  int v35;
  __int64 v36;

  result = GameData_21caab0;
  if (GameData_21caab0 == 0) {
    return result;
  }
  v3 = *(_QWORD*)(GameData_21caab0 + 24);
  if (v3 == 0) {
    return result;
  }
  if ((unsigned int)*(unsigned __int8*)(v3 + 33) - 63 > 1) {
    if (GameData_21eea58 != 0 && *(_BYTE*)GameData_21eea58 == 7 &&
        (v15 = *(_DWORD*)(GameData_21caab0 + 2708) + 1,
         *(_DWORD*)(GameData_21caab0 + 2708) = v15,
         *(_DWORD*)(result + 2704) = v15, result = GameData_21caab0,
         GameData_21caab0 == 0)) {
      v17 = 19;
      v18 = GameData_21eea58;
      if (GameData_21eea58 == 0) {
        goto LABEL_26;
      }
    }
    else {
      v16 = *(unsigned __int8*)(result + 56);
      if (v16 > 0x10 || ((0x1F9F5u >> v16) & 1) == 0) {
        goto LABEL_66;
      }
      v17 = GameData_1b373e4[v16];
      v18 = GameData_21eea58;
      if (GameData_21eea58 == 0) {
      LABEL_26:
        v19 = GameRoutine_682780(9);
        if (v19 == 0) {
          goto LABEL_57;
        }
        for (i = v19; i != 0; i = *(_QWORD*)(i + 624)) {
          v21 = i;
        }
      LABEL_48:
        if (*(_BYTE*)(v21 + 441) == 3) {
          v24 = *(_QWORD*)(v19 + 624);
          if (v24 == 0) {
            v24 = v19;
          }
          v36 = v24;
          v35 = 241;
          v25 = GameRoutine_6ead60(&v36, &v35);
          if (v25 != 0) {
            v26 = (__int64*)(v25 + 2104);
          LABEL_58:
            GameRoutine_97b680(v26);
            if (GameData_21eea58 != 0) {
              v28 = *(_QWORD*)(GameData_21eea58 + 80);
              if (v28 != 0) {
                v36 = a1;
                (*(void (**)(__int64, __int64*))(*(_QWORD*)v28 + 48LL))(v28,
                                                                        &v36);
                v29 = GameData_21eea58;
                v30 = *(_QWORD**)(GameData_21eea58 + 80);
                *(_QWORD*)(GameData_21eea58 + 80) = 0;
                if (v30 == (_QWORD*)(v29 + 48)) {
                  v31 = 32;
                }
                else {
                  if (v30 == nullptr) {
                    goto LABEL_65;
                  }
                  v31 = 40;
                }
                (*(void (**)(__int64))(*v30 + v31))((__int64)v30);
              }
            }
          LABEL_65:
            result = GameData_21caab0;
            *(_DWORD*)(a1 + 152) = v17;
            if (result == 0) {
              return result;
            }
            goto LABEL_66;
          }
          v27 = *(_QWORD*)(GameData_21caab0 + 176);
          if (*(_BYTE*)(v27 + 144) != 0) {
            v26 = (__int64*)(v27 + 112);
            goto LABEL_58;
          }
        }
      LABEL_57:
        v26 = &GameData_21f49b8;
        goto LABEL_58;
      }
    }
    *(_BYTE*)(v18 + 32) = 1;
    goto LABEL_26;
  }
  v4 = *(_QWORD**)(v3 + 24);
  v6 = (__int64*)v4[38];
  v5 = (__int64*)v4[39];
  if (v5 == v6) {
    goto LABEL_32;
  }
  v7 = 0;
  do {
    v8 = *v6;
    v9 = v6[1];
    if (v9 == *v6) {
    LABEL_6:
      ++v7;
    }
    else {
      while (1) {
        if (*(_QWORD*)v8 != 0) {
          v10 = GameData_21caab0;
          if (GameData_21caab0 != 0) {
            v11 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v8);
            if (v11 != 0) {
              v12 = *(__int64 (**)(_QWORD))(v11 + 72);
              v13 = *(_QWORD*)(v11 + 80);
              v14 = (_QWORD*)(v11 + (v13 >> 1));
              if ((v13 & 1) != 0) {
                v12 = *(__int64 (**)(_QWORD))((char*)v12 + *v14);
              }
              LOBYTE(result) = v12(v14);
            }
            else {
              LOBYTE(result) = 1;
            }
          }
          if (*(_BYTE*)(v8 + 16) != ((v10 == 0) | result & 1)) {
            break;
          }
        }
        v8 += 24;
        if (v8 == v9) {
          goto LABEL_6;
        }
      }
    }
    v6 += 6;
  } while (v6 != v5);
  if (v7 != 0) {
    v4 = *(_QWORD**)(v3 + 24);
    result = GameData_21caab0;
  LABEL_32:
    if (v4[3] != 0) {
      if (result != 0 && (GameRoutine_715780(), GameData_21caab0 != 0)) {
        *(_BYTE*)(GameData_21caab0 + 312) = 0;
        v17 = 16;
      }
      else {
        v17 = 16;
      }
      goto LABEL_65;
    }
    goto LABEL_38;
  }
  result = GameData_21caab0;
LABEL_38:
  if (result == 0) {
    v17 = 19;
    goto LABEL_43;
  }
  v22 = *(unsigned __int8*)(result + 56);
  if (v22 <= 0x10 && ((0x1F9F5u >> v22) & 1) != 0) {
    v17 = GameData_1b373e4[v22];
  LABEL_43:
    if (GameData_21eea58 != 0) {
      *(_BYTE*)(GameData_21eea58 + 32) = 1;
    }
    v19 = GameRoutine_682780(9);
    if (v19 == 0) {
      goto LABEL_57;
    }
    for (j = v19; j != 0; j = *(_QWORD*)(j + 624)) {
      v21 = j;
    }
    goto LABEL_48;
  }
LABEL_66:
  v32 = *(unsigned __int8*)(result + 14);
  if (v32 >= *(unsigned __int8*)(result + 13)) {
    v33 = *(_BYTE*)(result + 13);
  }
  else {
    v33 = *(_BYTE*)(result + 14);
  }
  if (v32 == 3) {
    v34 = *(_BYTE*)(result + 13);
  }
  else {
    v34 = v33;
  }
  *(_BYTE*)(result + 14) = v34;
  return result;
}

__int64 GameHr_682cd0(__int64 a1, const char* a2, __int64 a3)
{
  __int64 v6;
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
  _BYTE v18[32];
  _BYTE* v19;

  GameRoutine_60a020(a1 + 16, a2);
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 32);
  }
  else {
    v6 = a1 + 17;
  }
  *(_QWORD*)a1 = GameRoutine_7a86e0(v6);
  *(_QWORD*)(a1 + 8) = v6;
  v7 = GameRoutine_7a7dc0("%s_%d", a2, 0);
  GameRoutine_60a020(a1 + 56, v7);
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 72);
  }
  else {
    v8 = a1 + 57;
  }
  *(_QWORD*)(a1 + 40) = GameRoutine_7a86e0(v8);
  *(_QWORD*)(a1 + 48) = v8;
  v9 = GameRoutine_7a7dc0("%s_%d", a2, 1);
  GameRoutine_60a020(a1 + 96, v9);
  if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
    v10 = *(_QWORD*)(a1 + 112);
  }
  else {
    v10 = a1 + 97;
  }
  *(_QWORD*)(a1 + 80) = GameRoutine_7a86e0(v10);
  *(_QWORD*)(a1 + 88) = v10;
  v11 = GameRoutine_7a7dc0("%s_%d", a2, 2);
  GameRoutine_60a020(a1 + 136, v11);
  if ((*(_BYTE*)(a1 + 136) & 1) != 0) {
    v12 = *(_QWORD*)(a1 + 152);
  }
  else {
    v12 = a1 + 137;
  }
  *(_QWORD*)(a1 + 120) = GameRoutine_7a86e0(v12);
  *(_QWORD*)(a1 + 128) = v12;
  v13 = GameRoutine_7a7dc0("%s_%d", a2, 3);
  GameRoutine_60a020(a1 + 176, v13);
  if ((*(_BYTE*)(a1 + 176) & 1) != 0) {
    v14 = *(_QWORD*)(a1 + 192);
  }
  else {
    v14 = a1 + 177;
  }
  *(_QWORD*)(a1 + 160) = GameRoutine_7a86e0(v14);
  *(_QWORD*)(a1 + 168) = v14;
  v15 = *(_QWORD*)(a3 + 32);
  if (v15 != 0) {
    if (v15 == a3) {
      v19 = v18;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v15 + 24LL))(v15, v18);
    }
    else {
      v19 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    }
  }
  else {
    v19 = nullptr;
  }
  GameRoutine_654050(v18, a1 + 208);
  if (v19 == v18) {
    v16 = 32;
    goto LABEL_25;
  }
  if (v19 != nullptr) {
    v16 = 40;
  LABEL_25:
    (*(void (**)(__int64))(*(_QWORD*)v19 + v16))((__int64)v19);
  }
  return a1;
}

__int64 GameHr_6886c0(__int64 result, __int64* a2, __int64 a3, char a4)
{
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned int v42;
  unsigned int v43;
  __int64 v44;
  __int64 v45;
  unsigned int v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64* v50;
  __int64* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64* v56;
  unsigned int v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  char v61;
  char v62;
  __int64 v63;
  __int64* v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned int v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned int v78;
  unsigned int v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned int v83;
  unsigned int v84;
  __int64* v85;
  bool v87;
  __int64 v88;
  __int64* v89;
  __int64* v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  char* v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  bool v98;
  __int64 v99;
  __int64* v100;
  __int64 v101;
  __int64* v102;
  __int64 v103;
  __int64* v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64* v109;
  __int64* v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64* v114;
  __int64* v115;
  __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  __int64 v120;
  __int64* v121;
  __int64 v122;
  __int64* v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;

  v7 = (__int64*)result;
  while (2) {
    v8 = v7;
    while (1) {
      while (1) {
        v7 = v8;
        v9 = a2 - v8;
        if (v9 > 2) {
          if (v9 == 3) {
            v75 = *v8;
            v76 = v8[1];
            v77 = *(a2 - 1);
            v78 = *(unsigned __int8*)(v76 + 48);
            v79 = *(unsigned __int8*)(v77 + 48);
            if (v78 < *(unsigned __int8*)(*v8 + 48)) {
              if (v79 >= v78) {
                *v8 = v76;
                v8[1] = v75;
                v127 = *(a2 - 1);
                if (*(unsigned __int8*)(v127 + 48) <
                    (unsigned int)*(unsigned __int8*)(v75 + 48)) {
                  v8[1] = v127;
                  *(a2 - 1) = v75;
                }
              }
              else {
                *v8 = v77;
                *(a2 - 1) = v75;
              }
              return result;
            }
            if (v79 >= v78) {
              return result;
            }
            v8[1] = v77;
            *(a2 - 1) = v76;
            v124 = v8[1];
          LABEL_182:
            v130 = *v8;
            if (*(unsigned __int8*)(v124 + 48) <
                (unsigned int)*(unsigned __int8*)(*v8 + 48)) {
              *v8 = v124;
              v8[1] = v130;
            }
            return result;
          }
          if (v9 != 4) {
            if (v9 == 5) {
              return GameRoutine_689100(v8, v8 + 1, v8 + 2, v8 + 3, a2 - 1);
            }
            goto LABEL_10;
          }
          v81 = *v8;
          v80 = v8[1];
          v82 = v8[2];
          v83 = *(unsigned __int8*)(v80 + 48);
          v84 = *(unsigned __int8*)(v82 + 48);
          if (v83 >= *(unsigned __int8*)(*v8 + 48)) {
            if (v84 < v83) {
              v8[1] = v82;
              v8[2] = v80;
              if (*(unsigned __int8*)(v82 + 48) <
                  (unsigned int)*(unsigned __int8*)(v81 + 48)) {
                *v8 = v82;
                v8[1] = v81;
              }
              goto LABEL_179;
            }
          }
          else {
            if (v84 < v83) {
              *v8 = v82;
            LABEL_177:
              v8[2] = v81;
              v80 = v81;
              goto LABEL_179;
            }
            *v8 = v80;
            v8[1] = v81;
            if (*(unsigned __int8*)(v82 + 48) <
                (unsigned int)*(unsigned __int8*)(v81 + 48)) {
              v8[1] = v82;
              goto LABEL_177;
            }
          }
          v80 = v82;
        LABEL_179:
          v128 = *(a2 - 1);
          if (*(unsigned __int8*)(v128 + 48) >=
              (unsigned int)*(unsigned __int8*)(v80 + 48)) {
            return result;
          }
          v8[2] = v128;
          *(a2 - 1) = v80;
          v129 = v8[1];
          v124 = v8[2];
          if (*(unsigned __int8*)(v124 + 48) >=
              (unsigned int)*(unsigned __int8*)(v129 + 48)) {
            return result;
          }
          v8[1] = v124;
          v8[2] = v129;
          goto LABEL_182;
        }
        if ((unsigned __int64)v9 < 2) {
          return result;
        }
        if (v9 == 2) {
          v73 = *(a2 - 1);
          v74 = *v8;
          if (*(unsigned __int8*)(v73 + 48) <
              (unsigned int)*(unsigned __int8*)(*v8 + 48)) {
            *v8 = v73;
            *(a2 - 1) = v74;
          }
          return result;
        }
      LABEL_10:
        if (v9 <= 23) {
          v85 = v8 + 1;
          v87 = v8 == a2 || v85 == a2;
          if ((a4 & 1) != 0) {
            if (!v87) {
              v88 = 8;
              v89 = v8;
              do {
                v92 = *v89;
                v91 = v89[1];
                v89 = v85;
                if (*(unsigned __int8*)(v91 + 48) <
                    (unsigned int)*(unsigned __int8*)(v92 + 48)) {
                  v93 = v88;
                  do {
                    v94 = v93 - 8;
                    *(__int64*)((char*)v8 + v93) = v92;
                    if (v93 == 8) {
                      v90 = v8;
                      goto LABEL_124;
                    }
                    v95 = (char*)v8 + v93;
                    v93 -= 8;
                    v92 = *((_QWORD*)v95 - 2);
                  } while (*(unsigned __int8*)(v91 + 48) <
                           (unsigned int)*(unsigned __int8*)(v92 + 48));
                  v90 = (__int64*)((char*)v8 + v94);
                LABEL_124:
                  *v90 = v91;
                }
                v85 = v89 + 1;
                v88 += 8;
              } while (v89 + 1 != a2);
            }
          }
          else if (!v87) {
            do {
              v126 = *v7;
              v125 = v7[1];
              v7 = v85;
              if (*(unsigned __int8*)(v125 + 48) <
                  (unsigned int)*(unsigned __int8*)(v126 + 48)) {
                do {
                  *v85 = v126;
                  v126 = *(v85 - 2);
                  --v85;
                } while (*(unsigned __int8*)(v125 + 48) <
                         (unsigned int)*(unsigned __int8*)(v126 + 48));
                *v85 = v125;
              }
              v85 = v7 + 1;
            } while (v7 + 1 != a2);
          }
          return result;
        }
        if (a3 == 0) {
          if (v8 != a2) {
            v96 = (unsigned __int64)(v9 - 2) >> 1;
            v97 = v96;
            do {
              if (v96 >= v97) {
                v99 = (2 * (v97 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                v100 = &v8[v99];
                v101 = *v100;
                if ((__int64)(2 * v97 + 2) < v9 &&
                    *(unsigned __int8*)(v101 + 48) <
                        (unsigned int)*(unsigned __int8*)(v100[1] + 48)) {
                  v101 = v100[1];
                  ++v100;
                  v99 = 2 * v97 + 2;
                }
                v102 = &v8[v97];
                v103 = *v102;
                if (*(unsigned __int8*)(v101 + 48) >=
                    (unsigned int)*(unsigned __int8*)(*v102 + 48)) {
                  do {
                    v104 = v100;
                    *v102 = v101;
                    if ((__int64)v96 < v99) {
                      break;
                    }
                    v105 = (2 * (v99 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                    v106 = 2 * v99 + 2;
                    v100 = &v8[v105];
                    v101 = *v100;
                    if (v106 < v9 &&
                        *(unsigned __int8*)(v101 + 48) <
                            (unsigned int)*(unsigned __int8*)(v100[1] + 48)) {
                      v101 = v100[1];
                      ++v100;
                      v105 = v106;
                    }
                    result = *(unsigned __int8*)(v103 + 48);
                    v102 = v104;
                    v99 = v105;
                  } while (*(unsigned __int8*)(v101 + 48) >=
                           (unsigned int)result);
                  *v104 = v103;
                }
              }
              v98 = (__int64)v97-- <= 0;
            } while (!v98);
            do {
              v107 = *v8;
              v108 = 0;
              v109 = v8;
              do {
                v115 = &v109[v108];
                v114 = v115 + 1;
                v113 = v115[1];
                v116 = (2 * v108) | 1;
                v108 = 2 * v108 + 2;
                if (v108 < v9) {
                  v112 = v115[2];
                  v110 = v115 + 2;
                  v111 = v112;
                  result = *(unsigned __int8*)(v112 + 48);
                  if (*(unsigned __int8*)(v113 + 48) >= (unsigned int)result) {
                    v108 = v116;
                  }
                  else {
                    v113 = v111;
                    v114 = v110;
                  }
                }
                else {
                  v108 = v116;
                }
                *v109 = v113;
                v109 = v114;
              } while (v108 <= (__int64)((unsigned __int64)(v9 - 2) >> 1));
              if (v114 == --a2) {
                *v114 = v107;
              }
              else {
                *v114 = *a2;
                *a2 = v107;
                v117 = ((char*)v114 - (char*)v8 + 8) >> 3;
                v98 = v117 < 2;
                v118 = v117 - 2;
                if (!v98) {
                  v119 = v118 >> 1;
                  v120 = *v114;
                  v121 = &v8[v119];
                  v122 = *v121;
                  if (*(unsigned __int8*)(*v121 + 48) <
                      (unsigned int)*(unsigned __int8*)(*v114 + 48)) {
                    do {
                      v123 = v121;
                      *v114 = v122;
                      if (v119 == 0) {
                        break;
                      }
                      v119 = (v119 - 1) >> 1;
                      v114 = v121;
                      v121 = &v8[v119];
                      v122 = *v121;
                    } while (*(unsigned __int8*)(*v121 + 48) <
                             (unsigned int)*(unsigned __int8*)(v120 + 48));
                    *v123 = v120;
                  }
                }
              }
              v98 = v9-- <= 2;
            } while (!v98);
          }
          return result;
        }
        v10 = *(a2 - 1);
        v11 = &v8[(unsigned __int64)v9 >> 1];
        v12 = *(unsigned __int8*)(v10 + 48);
        if ((unsigned __int64)v9 >= 0x81) {
          v13 = *v11;
          v14 = *v8;
          v15 = *(unsigned __int8*)(*v11 + 48);
          if (v15 >= *(unsigned __int8*)(*v8 + 48)) {
            if (v12 < v15) {
              *v11 = v10;
              *(a2 - 1) = v13;
              v19 = *v8;
              if (*(unsigned __int8*)(*v11 + 48) <
                  (unsigned int)*(unsigned __int8*)(*v8 + 48)) {
                *v8 = *v11;
                *v11 = v19;
              }
            }
          }
          else {
            if (v12 >= v15) {
              *v8 = v13;
              *v11 = v14;
              v21 = *(a2 - 1);
              if (*(unsigned __int8*)(v21 + 48) >=
                  (unsigned int)*(unsigned __int8*)(v14 + 48)) {
                goto LABEL_28;
              }
              *v11 = v21;
            }
            else {
              *v8 = v10;
            }
            *(a2 - 1) = v14;
          }
        LABEL_28:
          v22 = *(v11 - 1);
          v23 = v8[1];
          v24 = *(a2 - 2);
          v25 = *(unsigned __int8*)(v22 + 48);
          v26 = *(unsigned __int8*)(v24 + 48);
          if (v25 >= *(unsigned __int8*)(v23 + 48)) {
            if (v26 < v25) {
              *(v11 - 1) = v24;
              *(a2 - 2) = v22;
              v27 = *(v11 - 1);
              v28 = v8[1];
              if (*(unsigned __int8*)(v27 + 48) <
                  (unsigned int)*(unsigned __int8*)(v28 + 48)) {
                v8[1] = v27;
                *(v11 - 1) = v28;
              }
            }
          }
          else {
            if (v26 >= v25) {
              v8[1] = v22;
              *(v11 - 1) = v23;
              v30 = *(a2 - 2);
              if (*(unsigned __int8*)(v30 + 48) >=
                  (unsigned int)*(unsigned __int8*)(v23 + 48)) {
                goto LABEL_40;
              }
              *(v11 - 1) = v30;
            }
            else {
              v8[1] = v24;
            }
            *(a2 - 2) = v23;
          }
        LABEL_40:
          v31 = v11[1];
          v32 = v8[2];
          v33 = *(a2 - 3);
          v34 = *(unsigned __int8*)(v31 + 48);
          v35 = *(unsigned __int8*)(v33 + 48);
          if (v34 >= *(unsigned __int8*)(v32 + 48)) {
            if (v35 < v34) {
              v11[1] = v33;
              *(a2 - 3) = v31;
              v36 = v11[1];
              v37 = v8[2];
              if (*(unsigned __int8*)(v36 + 48) <
                  (unsigned int)*(unsigned __int8*)(v37 + 48)) {
                v8[2] = v36;
                v11[1] = v37;
              }
            }
          }
          else {
            if (v35 >= v34) {
              v8[2] = v31;
              v11[1] = v32;
              v38 = *(a2 - 3);
              if (*(unsigned __int8*)(v38 + 48) >=
                  (unsigned int)*(unsigned __int8*)(v32 + 48)) {
                goto LABEL_49;
              }
              v11[1] = v38;
            }
            else {
              v8[2] = v33;
            }
            *(a2 - 3) = v32;
          }
        LABEL_49:
          v39 = *(v11 - 1);
          v40 = *v11;
          v41 = v11[1];
          v42 = *(unsigned __int8*)(*v11 + 48);
          v43 = *(unsigned __int8*)(v41 + 48);
          if (v42 >= *(unsigned __int8*)(v39 + 48)) {
            if (v43 >= v42) {
              goto LABEL_55;
            }
            *v11 = v41;
            v11[1] = v40;
            if (*(unsigned __int8*)(v41 + 48) <
                (unsigned int)*(unsigned __int8*)(v39 + 48)) {
              *(v11 - 1) = v41;
              *v11 = v39;
            LABEL_59:
              v44 = *v8;
              *v8 = v39;
              *v11 = v44;
              goto LABEL_60;
            }
          }
          else {
            if (v43 < v42) {
              *(v11 - 1) = v41;
              v11[1] = v39;
            LABEL_55:
              v39 = v40;
              goto LABEL_59;
            }
            *(v11 - 1) = v40;
            *v11 = v39;
            if (*(unsigned __int8*)(v41 + 48) >=
                (unsigned int)*(unsigned __int8*)(v39 + 48)) {
              goto LABEL_59;
            }
            *v11 = v41;
            v11[1] = v39;
          }
          v39 = v41;
          goto LABEL_59;
        }
        v16 = *v8;
        v17 = *v11;
        v18 = *(unsigned __int8*)(*v8 + 48);
        if (v18 >= *(unsigned __int8*)(*v11 + 48)) {
          if (v12 < v18) {
            *v8 = v10;
            *(a2 - 1) = v16;
            v20 = *v11;
            if (*(unsigned __int8*)(*v8 + 48) <
                (unsigned int)*(unsigned __int8*)(*v11 + 48)) {
              *v11 = *v8;
              *v8 = v20;
            }
          }
        }
        else {
          if (v12 >= v18) {
            *v11 = v16;
            *v8 = v17;
            v29 = *(a2 - 1);
            if (*(unsigned __int8*)(v29 + 48) >=
                (unsigned int)*(unsigned __int8*)(v17 + 48)) {
              goto LABEL_60;
            }
            *v8 = v29;
          }
          else {
            *v11 = v10;
          }
          *(a2 - 1) = v17;
        }
      LABEL_60:
        v45 = *v8;
        --a3;
        if ((a4 & 1) != 0) {
          break;
        }
        v46 = *(unsigned __int8*)(v45 + 48);
        if (*(unsigned __int8*)(*(v8 - 1) + 48) < v46) {
          goto LABEL_63;
        }
        if (v46 >= *(unsigned __int8*)(*(a2 - 1) + 48)) {
          v64 = v8 + 1;
          do {
            v8 = v64;
            if (v64 >= a2) {
              break;
            }
            ++v64;
          } while (v46 >= *(unsigned __int8*)(*v8 + 48));
        }
        else {
          do {
            v63 = v8[1];
            ++v8;
          } while (v46 >= *(unsigned __int8*)(v63 + 48));
        }
        v65 = a2;
        if (v8 < a2) {
          v65 = a2;
          do {
            v66 = *--v65;
          } while (v46 < *(unsigned __int8*)(v66 + 48));
        }
        if (v8 < v65) {
          v67 = *v8;
          v68 = *v65;
          do {
            *v8 = v68;
            *v65 = v67;
            v69 = *(unsigned __int8*)(v45 + 48);
            do {
              v70 = v8[1];
              ++v8;
              v67 = v70;
            } while (v69 >= *(unsigned __int8*)(v70 + 48));
            do {
              v71 = *--v65;
              v68 = v71;
            } while (v69 < *(unsigned __int8*)(v71 + 48));
          } while (v8 < v65);
        }
        v72 = v8 - 1;
        if (v7 != v8 - 1) {
          *v7 = *v72;
        }
        a4 = 0;
        *v72 = v45;
      }
      v46 = *(unsigned __int8*)(v45 + 48);
    LABEL_63:
      v47 = 0;
      do {
        v48 = &v8[v47++];
        v49 = v48[1];
      } while (*(unsigned __int8*)(v49 + 48) < v46);
      v50 = &v8[v47];
      v51 = a2;
      if (v47 == 1) {
        v51 = a2;
        do {
          if (v50 >= v51) {
            break;
          }
          v53 = *--v51;
        } while (*(unsigned __int8*)(v53 + 48) >= v46);
      }
      else {
        do {
          v52 = *--v51;
        } while (*(unsigned __int8*)(v52 + 48) >= v46);
      }
      if (v50 >= v51) {
        v60 = v50 - 1;
        if (v8 == v50 - 1) {
          goto LABEL_81;
        }
      LABEL_80:
        *v8 = *v60;
        goto LABEL_81;
      }
      v54 = *v51;
      v55 = &v8[v47];
      v56 = v51;
      do {
        *v55 = v54;
        *v56 = v49;
        v57 = *(unsigned __int8*)(v45 + 48);
        do {
          v58 = v55[1];
          ++v55;
          v49 = v58;
        } while (*(unsigned __int8*)(v58 + 48) < v57);
        do {
          v59 = *--v56;
          v54 = v59;
        } while (*(unsigned __int8*)(v59 + 48) >= v57);
      } while (v55 < v56);
      v60 = v55 - 1;
      if (v8 != v55 - 1) {
        goto LABEL_80;
      }
    LABEL_81:
      *v60 = v45;
      if (v50 < v51) {
        goto LABEL_84;
      }
      v61 = GameRoutine_689280(v8, v60);
      v8 = v60 + 1;
      v62 = v61;
      result = GameRoutine_689280(v60 + 1, a2);
      if ((result & 1) != 0) {
        break;
      }
      if ((v62 & 1) == 0) {
      LABEL_84:
        result = GameHr_6886c0(v7, v60, a3, a4 & 1);
        a4 = 0;
        v8 = v60 + 1;
      }
    }
    a2 = v60;
    if ((v62 & 1) == 0) {
      continue;
    }
    return result;
  }
}

bool GameHr_6b3be0(const char* a1, const char* a2)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  unsigned int v8;
  __int64 v9;
  __int64** v10;
  __int64 (***v11)();
  __int64* v12;
  __int64* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  const char* v22;
  unsigned __int64 v23;
  _DWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned int* v34;
  unsigned int* v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  unsigned int* v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  _QWORD* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned int v61;
  __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  int v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64* v89;
  __int64 v90;
  __int64 v91;
  __int16 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int16 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int16 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int16 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  unsigned __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  unsigned __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64* v134;
  __int64* v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  char* v139;
  int v140;
  unsigned __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64* v145;
  __int64 v146;
  unsigned __int64 v147;
  __int64 v148;
  __int64 v149;
  unsigned int v150;
  bool v151;
  int v152;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  unsigned __int64 v157;
  __int64 v158;
  __int64 v159;
  unsigned int v160;
  int v161;
  __int64 v163;
  const char* v164;
  unsigned __int64 v165;
  __int64 v166;
  __int64* v168;
  __int64* v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  char* v173;
  int v174;
  unsigned __int64 v175;
  __int64 v176;
  __int64 v177;
  _DWORD* v178;
  unsigned __int64 v179;
  const char* v180;
  __int64 v181[2];
  struct {
    char* v182;
    __int64 v183;
    __int64 v184;
    char gap136_[8];
    __int64 v185;
    __int64 v186;
  } v182_;
  struct {
    const char* v187;
    unsigned __int64 v188;
    __int64 (***v189)();
    __int64 v190;
    __int64 v191;
    __int64 v192;
    __int64 v193;
    __int16 v194;
    char gap218_[2];
    int v195;
    __int64 v196;
    __int64 v197;
  } v187_;
  struct {
    __int64 v198;
    __int64 v199;
    const char* v200;
  } v198_;
  __int64 v201[2];
  struct {
    __int64 v202;
    __int64 v203;
    char* v204;
    __int64* v205;
  } v202_;

  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  MapTerrainFile_6b38a0(),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*GameData_212ce40 == 0) {
    return false;
  }
  if (a1 == nullptr) {
    v8 = 0;
    LOWORD(v198_.v198) = 0;
    goto LABEL_24;
  }
  v5 = strlen(a1),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v9, 16, 0),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v181[1] = v6;
    v182_.v182 = v7;
    v181[0] = v9 | 1;
    goto LABEL_12;
  }
  LOBYTE(v181[0]) = 2 * v5;
  v7 = (char*)v181 + 1;
  if (v5 != 0) {
  LABEL_12:
    memcpy((__int64)v7, (__int64)a1, v6),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v7[v6] = 0;
  v10 = (__int64**)GameRoutine_1a0a680_alt1((__int64)v181, 0,
                                            "GameData/Terrains/", 0x12u),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = v10[1];
  v11 = (__int64 (***)(void))v10[2],
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v187_.v187 = (const char*)*v10;
  v187_.v188 = (unsigned __int64)v12;
  v187_.v189 = v11;
  v10[1] = nullptr;
  v10[2] = nullptr;
  *v10 = nullptr;
  v13 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v187_.v187, ".txt", 4u),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = v13[1];
  v14 = v13[2];
  v198_.v198 = *v13;
  v198_.v199 = v15;
  v198_.v200 = (const char*)v14;
  v13[1] = 0;
  v13[2] = 0;
  *v13 = 0;
  if (((unsigned __int8)v187_.v187 & 1) != 0 && v187_.v189 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v16,
                                  (__int64)v187_.v189),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((v181[0] & 1) != 0 && v182_.v182 != nullptr) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17,
                                  (__int64)v182_.v182),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v8 = (unsigned __int8)v198_.v198;
  v4 = v198_.v199;
LABEL_24:
  v18 = v8 & 1;
  v19 = v8 >> 1;
  if (v18 != 0) {
    v20 = v4;
  }
  else {
    v20 = v19;
  }
  if (v20 != 0) {
    v21 = *snd_g_fileIndex_ptr[0];
    if (v18 != 0) {
      v22 = v198_.v200;
    }
    else {
      v22 = (char*)&v198_.v198 + 1;
    }
    v23 = strlen(v22),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v187_.v187 = v22;
    v187_.v188 = v23;
    LODWORD(v187_.v190) = 0;
    v187_.v189 = GameData_212c3c8_alt1;
    v24 = GameRoutine_6544c0_alt1(v21, (__int64)&v187_.v187),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v25 = *((_QWORD*)v24 + 74);
    v26 = (__int64)v24;
    if (v25 == 0) {
    LABEL_263:
      GameRoutine_634d80_alt1(*(_QWORD*)(v26 + 8), v26),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v18 = v198_.v198 & 1;
      goto LABEL_264;
    }
    v179 = v20;
    v180 = a2;
    v187_.v194 = 257;
    v27 = *((_QWORD*)v24 + 72);
    v187_.v189 = nullptr;
    v187_.v190 = 0;
    v178 = v24;
    v187_.v196 = v25;
    v187_.v197 = v27;
    v187_.v192 = 0;
    v187_.v193 = 0;
    v187_.v195 = 0;
    v187_.v191 = -1;
    v187_.v187 = (const char*)(GameData_212ce30 + 2);
    v187_.v188 = 0;
    GameRoutine_6b4ef0_alt1(v181, (__int64)&v187_.v187),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (*(_QWORD*)(*(_QWORD*)(v182_.v183 +
                              8 * ((unsigned __int64)(v182_.v186 + v182_.v185 -
                                                      1) >>
                                   9)) +
                   8 * ((v182_.v186 + v182_.v185 - 1) & 0x1FF)) == 0) {
      goto LABEL_141;
    }
    strcpy((char*)&v202_.v202, "\nwidth");
    v202_.v205 = &game_map_g_hint_data;
    GameRoutine_6b81a0_alt1(v181, &v202_.v202),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v202_.v202 & 1) != 0 && v202_.v204 != nullptr) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, (__int64)v202_.v204),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v202_.v205 = (__int64*)((char*)&game_map_g_hint_data + 4);
    v202_.v202 = 0x7468676965680CLL;
    GameRoutine_6b81a0_alt1(v181, &v202_.v202),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v202_.v202 & 1) != 0 && v202_.v204 != nullptr) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, (__int64)v202_.v204),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v202_.v202 = 0x737265646E750CLL;
    v202_.v205 = &GameData_21ca0d0;
    game_6b83e0(v181, &v202_.v202),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v202_.v202 & 1) != 0 && v202_.v204 != nullptr) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, (__int64)v202_.v204),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v202_.v202 = 0x7372657070750CLL;
    v202_.v205 = &GameData_21ca0e8;
    game_6b83e0(v181, &v202_.v202),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v202_.v202 & 1) != 0 && v202_.v204 != nullptr) {
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, (__int64)v202_.v204),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v32 = *(_QWORD*)(*(_QWORD*)(v182_.v183 +
                                8 * ((unsigned __int64)(v182_.v186 +
                                                        v182_.v185 - 1) >>
                                     9)) +
                     8 * ((v182_.v186 + v182_.v185 - 1) & 0x1FF));
    if (v32 == 0) {
    LABEL_141:
      if (GameData_21ca0f0 - GameData_21ca0e8 == 24576 &&
          GameData_21ca0d8 - GameData_21ca0d0 == 24576) {
        v88 = 0;
        GameData_21ca120 = GameData_21ca118;
        GameData_21ca108 = GameData_21ca100;
        GameData_21ca138 = GameData_21ca130;
        v89 = (__int64*)fw_memory_g_heap_manager_ptr;
        do {
          if ((*(_BYTE*)(GameData_21ca0e8 + v88) & 1) != 0) {
            v91 = *(_QWORD*)(GameData_21ca0e8 + v88 + 16);
          }
          else {
            v91 = GameData_21ca0e8 + v88 + 1;
          }
          v92 = GameRoutine_6b3720_alt1(v91),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v93 = GameData_21ca120;
          if (GameData_21ca120 >= (unsigned __int64)GameData_21ca128) {
            v95 = GameData_21ca118;
            v96 = GameData_21ca120 - GameData_21ca118;
            v97 = (GameData_21ca120 - GameData_21ca118) >> 1;
            if (v97 <= -2) {
              goto LABEL_291;
            }
            if (GameData_21ca128 - GameData_21ca118 <=
                (unsigned __int64)(v97 + 1)) {
              v98 = v97 + 1;
            }
            else {
              v98 = GameData_21ca128 - GameData_21ca118;
            }
            if ((unsigned __int64)(GameData_21ca128 - GameData_21ca118) >=
                0x7FFFFFFFFFFFFFFELL) {
              v99 = 0x7FFFFFFFFFFFFFFFLL;
            }
            else {
              v99 = v98;
            }
            if (v99 != 0) {
              if (v99 < 0) {
                goto LABEL_292;
              }
              v100 = v92;
              v101 = fw_memory_HeapManager_Allocate(*v89, 2 * v99, 16, 0),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v92 = v100;
            }
            else {
              v101 = 0;
            }
            v102 = v101 + 2 * v99;
            v103 = v101 + v96 - 2 * v97;
            *(_WORD*)(v101 + v96) = v92;
            v94 = v101 + v96 + 2;
            memcpy(v103, v95, v96),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            GameData_21ca118 = v103;
            GameData_21ca120 = v94;
            GameData_21ca128 = v102;
            if (v95 != 0) {
              v104 = 128;
              if (*(_QWORD*)(*v89 + 200) == 0) {
                v104 = 56;
              }
              nn_mem_StandardAllocator_Free(*v89 + v104, v95),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          else {
            *(_WORD*)GameData_21ca120 = v92;
            v94 = v93 + 2;
          }
          GameData_21ca120 = v94;
          if ((*(_BYTE*)(GameData_21ca0d0 + v88) & 1) != 0) {
            v105 = *(_QWORD*)(GameData_21ca0d0 + v88 + 16);
          }
          else {
            v105 = GameData_21ca0d0 + v88 + 1;
          }
          v106 = GameRoutine_6b3720_alt1(v105),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v107 = GameData_21ca108;
          if (GameData_21ca108 >= (unsigned __int64)GameData_21ca110) {
            v109 = GameData_21ca100;
            v110 = GameData_21ca108 - GameData_21ca100;
            v111 = (GameData_21ca108 - GameData_21ca100) >> 1;
            if (v111 <= -2) {
              goto LABEL_291;
            }
            if (GameData_21ca110 - GameData_21ca100 <=
                (unsigned __int64)(v111 + 1)) {
              v112 = v111 + 1;
            }
            else {
              v112 = GameData_21ca110 - GameData_21ca100;
            }
            if ((unsigned __int64)(GameData_21ca110 - GameData_21ca100) >=
                0x7FFFFFFFFFFFFFFELL) {
              v113 = 0x7FFFFFFFFFFFFFFFLL;
            }
            else {
              v113 = v112;
            }
            if (v113 != 0) {
              if (v113 < 0) {
                goto LABEL_292;
              }
              v114 = v106;
              v115 = fw_memory_HeapManager_Allocate(*v89, 2 * v113, 16, 0),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v106 = v114;
            }
            else {
              v115 = 0;
            }
            v116 = v115 + 2 * v113;
            v117 = v115 + v110 - 2 * v111;
            *(_WORD*)(v115 + v110) = v106;
            v108 = v115 + v110 + 2;
            memcpy(v117, v109, v110),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            GameData_21ca100 = v117;
            GameData_21ca108 = v108;
            GameData_21ca110 = v116;
            if (v109 != 0) {
              v118 = 128;
              if (*(_QWORD*)(*v89 + 200) == 0) {
                v118 = 56;
              }
              nn_mem_StandardAllocator_Free(*v89 + v118, v109),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          else {
            *(_WORD*)GameData_21ca108 = v106;
            v108 = v107 + 2;
          }
          GameData_21ca108 = v108;
          v119 = GameData_21ca138;
          if (GameData_21ca138 < (unsigned __int64)GameData_21ca140) {
            *(_WORD*)GameData_21ca138 = 0;
            v90 = v119 + 2;
          }
          else {
            v120 = GameData_21ca130;
            v121 = GameData_21ca138 - GameData_21ca130;
            v122 = (GameData_21ca138 - GameData_21ca130) >> 1;
            if (v122 <= -2) {
            LABEL_291:
              GameRoutine_6b5390_alt1(),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            if (GameData_21ca140 - GameData_21ca130 <=
                (unsigned __int64)(v122 + 1)) {
              v123 = v122 + 1;
            }
            else {
              v123 = GameData_21ca140 - GameData_21ca130;
            }
            if ((unsigned __int64)(GameData_21ca140 - GameData_21ca130) >=
                0x7FFFFFFFFFFFFFFELL) {
              v124 = 0x7FFFFFFFFFFFFFFFLL;
            }
            else {
              v124 = v123;
            }
            if (v124 != 0) {
              if (v124 < 0) {
                goto LABEL_292;
              }
              v125 = fw_memory_HeapManager_Allocate(*v89, 2 * v124, 16, 0),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            else {
              v125 = 0;
            }
            v126 = v125 + 2 * v124;
            v127 = v125 + v121 - 2 * v122;
            *(_WORD*)(v125 + v121) = 0;
            v90 = v125 + v121 + 2;
            memcpy(v127, v120, v121),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            GameData_21ca130 = v127;
            GameData_21ca138 = v90;
            GameData_21ca140 = v126;
            if (v120 != 0) {
              v128 = 128;
              if (*(_QWORD*)(*v89 + 200) == 0) {
                v128 = 56;
              }
              nn_mem_StandardAllocator_Free(*v89 + v128, v120),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          v88 += 24;
          GameData_21ca138 = v90;
        } while (v88 != 24576);
      }
      if (v180 == nullptr ||
          (v129 = GameData_21ca148, GameData_21ca150 == GameData_21ca148)) {
      LABEL_232:
        GameData_21ca160 = 0;
      }
      else {
        v130 =
            0x2E8BA2E8BA2E8BA3LL * ((GameData_21ca150 - GameData_21ca148) >> 3);
        v131 = strlen(v180),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        while (1) {
          v132 = *(_BYTE*)v129 >> 1;
          if ((*(_BYTE*)v129 & 1) != 0) {
            v132 = *(_QWORD*)(v129 + 8);
          }
          if (v131 == v132) {
            if (v131 == -1) {
              String_60a230(),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v133 = (*(_BYTE*)v129 & 1) != 0 ? *(_QWORD*)(v129 + 16) : v129 + 1;
            if (memcmp(v133, (__int64)v180, v131) == 0) {
              break;
            }
          }
          --v130;
          v129 += 88;
          if (v130 == 0) {
            goto LABEL_232;
          }
        }
        GameData_21ca160 = v129;
        v134 = *(__int64**)(v129 + 40);
        v135 = *(__int64**)(v129 + 48);
        if (v134 != v135) {
          v136 = fw_memory_g_heap_manager_ptr;
          do {
            if ((*(_BYTE*)v134 & 1) != 0) {
              fw_text_String_CopyTerminated(&v202_.v202, v134[2], v134[1]),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            else {
              v137 = *v134;
              v138 = v134[2];
              v202_.v203 = v134[1];
              v202_.v204 = (char*)v138;
              v202_.v202 = v137;
            }
            v202_.v205 = (__int64*)v134[3];
            if ((v202_.v202 & 1) != 0) {
              v139 = v202_.v204;
            }
            else {
              v139 = (char*)&v202_.v202 + 1;
            }
            v140 = GameRoutine_6b3720_alt1((__int64)v139),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (v140 != 0) {
              v141 = (int)v202_.v205 + 32LL * SHIDWORD(v202_.v205);
              if (v141 < (GameData_21ca108 - GameData_21ca100) >> 1) {
                *(_WORD*)(GameData_21ca100 + 2 * v141) = v140;
              }
            }
            if ((v202_.v202 & 1) != 0 && v202_.v204 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)v136 + 200LL) != 0) {
                v142 = 128;
              }
              else {
                v142 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v136 + v142,
                                            (__int64)v202_.v204),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v134 += 4;
          } while (v134 != v135);
          v129 = GameData_21ca160;
        }
        v168 = *(__int64**)(v129 + 64);
        v169 = *(__int64**)(v129 + 72);
        if (v168 != v169) {
          v170 = fw_memory_g_heap_manager_ptr;
          do {
            if ((*(_BYTE*)v168 & 1) != 0) {
              fw_text_String_CopyTerminated(&v202_.v202, v168[2], v168[1]),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            else {
              v171 = *v168;
              v172 = v168[2];
              v202_.v203 = v168[1];
              v202_.v204 = (char*)v172;
              v202_.v202 = v171;
            }
            v202_.v205 = (__int64*)v168[3];
            if ((v202_.v202 & 1) != 0) {
              v173 = v202_.v204;
            }
            else {
              v173 = (char*)&v202_.v202 + 1;
            }
            v174 = GameRoutine_6b3720_alt1((__int64)v173),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (v174 != 0) {
              v175 = (int)v202_.v205 + 32LL * SHIDWORD(v202_.v205);
              if (v175 < (GameData_21ca120 - GameData_21ca118) >> 1) {
                *(_WORD*)(GameData_21ca118 + 2 * v175) = v174;
              }
            }
            if ((v202_.v202 & 1) != 0 && v202_.v204 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)v170 + 200LL) != 0) {
                v176 = 128;
              }
              else {
                v176 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v170 + v176,
                                            (__int64)v202_.v204),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v168 += 4;
          } while (v168 != v169);
        }
      }
      v144 = GameData_21ca100;
      v143 = GameData_21ca108;
      v145 = GameData_212c930;
      if (GameData_21ca108 != GameData_21ca100) {
        v146 = *GameData_212c930;
        v147 = 0;
        do {
          v148 = *(unsigned __int16*)(v144 + 2 * v147);
          v149 = *(_QWORD*)(*(_QWORD*)(v146 + 64) + 8 * v148);
          if (v149 != 0) {
            v150 = GameData_1b41aa9[*(unsigned __int8*)(v149 + 57)];
            v151 = v150 > 6;
            v152 = (1 << v150) & 0x68;
            if (!v151 && v152 != 0) {
              *(_WORD*)(GameData_21ca130 + 2 * v147) = v148;
              v146 = *v145;
              v144 = GameData_21ca100;
              v143 = GameData_21ca108;
            }
          }
          ++v147;
        } while (v147 < (v143 - v144) >> 1);
      }
      v155 = GameData_21ca118;
      v154 = GameData_21ca120;
      if (GameData_21ca120 != GameData_21ca118) {
        v156 = *v145;
        v157 = 0;
        do {
          v158 = *(unsigned __int16*)(v155 + 2 * v157);
          v159 = *(_QWORD*)(*(_QWORD*)(v156 + 64) + 8 * v158);
          if (v159 != 0) {
            v160 = GameData_1b41aa9[*(unsigned __int8*)(v159 + 57)];
            v151 = v160 > 0x10;
            v161 = (1 << v160) & 0x10096;
            if (!v151 && v161 != 0) {
              v163 = 2 * v157;
              *(_WORD*)(GameData_21ca130 + v163) = v158;
              *(_WORD*)(GameData_21ca118 + v163) = 0;
              v156 = *v145;
              v155 = GameData_21ca118;
              v154 = GameData_21ca120;
            }
          }
          ++v157;
        } while (v157 < (v154 - v155) >> 1);
      }
      if ((GameData_21ca168 & 1) != 0) {
        if ((v198_.v198 & 1) != 0) {
          v164 = v198_.v200;
        }
        else {
          v164 = (char*)&v198_.v198 + 1;
        }
        if ((v198_.v198 & 1) != 0) {
          v165 = v198_.v199;
        }
        else {
          v165 = (unsigned __int64)(unsigned __int8)v198_.v198 >> 1;
        }
        SpineModel_64dde0(&GameData_21ca168, (__int64)v164, v165),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v26 = (__int64)v178;
        v20 = v179;
      }
      else {
        v26 = (__int64)v178;
        v20 = v179;
        if ((v198_.v198 & 1) != 0) {
          GameRoutine_64df20_alt1(&GameData_21ca168, (__int64)v198_.v200,
                                  v198_.v199),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        else {
          GameData_21ca168 = v198_.v198;
          GameData_21ca170 = v198_.v199;
          GameData_21ca178 = (__int64)v198_.v200;
        }
      }
      GameRoutine_6b50a0_alt1(v181),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*((void (**)(const char**))v187_.v187 + 3))(&v187_.v187),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_263;
    }
    v202_.v202 = 0x7370616D6275730ELL;
    v202_.v203 = 0;
    if ((*(_BYTE*)v32 & 0x7F) == 8 &&
        (v33 = strlen((const char*)&v202_.v202 + 1),
         v34 = *(unsigned int**)(v32 + 1), v201[0] = (__int64)&v202_.v202 + 1,
         v201[1] = v33, v35 = game_6b7f00(v34, 0, v34, v34[1], v201),
         v36 != v34[1])) {
      v38 = *v35;
      if (v36 >= v38) {
        v40 = v36 - v38;
        v41 = __clz(v40 + 16);
        v39 = *(_QWORD*)(*((_QWORD*)v35 + 2) + 8 * (27 - v41) + 8) +
              32LL *
                  (unsigned int)(v40 - *((_DWORD*)GameData_212ce38 + 28 - v41));
      }
      else {
        v39 = *((_QWORD*)v35 + 1) + 32 * v36;
      }
      v37 = v39 + 16;
      if ((v202_.v202 & 1) == 0) {
        goto LABEL_66;
      }
    }
    else {
      v37 = 0;
      if ((v202_.v202 & 1) == 0) {
        goto LABEL_66;
      }
    }
    if (v202_.v204 != nullptr) {
      v42 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v42, (__int64)v202_.v204),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  LABEL_66:
    if (v37 != 0 && (*(_BYTE*)v37 & 0x7F) == 7) {
      v43 = *(unsigned int**)(v37 + 1);
      v45 = GameData_21ca148;
      v44 = GameData_21ca150;
      v46 = v43[1];
      v47 = GameData_21ca150 - GameData_21ca148;
      v48 = 0x2E8BA2E8BA2E8BA3LL * ((GameData_21ca150 - GameData_21ca148) >> 3);
      v49 = v46 - v48;
      if (v46 <= v48) {
        if (v46 < v48) {
          v59 = GameData_21ca148 + 88LL * (unsigned int)v46;
          if (v59 != GameData_21ca150) {
            do {
              v44 -= 88;
              MemoryInputStream_6b51e0(v44),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            } while (v44 != v59);
          }
          GameData_21ca150 = v59;
        }
      }
      else if (0x2E8BA2E8BA2E8BA3LL *
                   ((GameData_21ca158 - GameData_21ca150) >> 3) >=
               v49) {
        memset(GameData_21ca150, 0,
               88 * ((88 * (unsigned __int64)(unsigned int)v49 - 88) / 0x58) +
                   88),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        GameData_21ca150 =
            v44 +
            88 * ((88 * (unsigned __int64)(unsigned int)v49 - 88) / 0x58) + 88;
      }
      else {
        if (0x5D1745D1745D1746LL *
                ((GameData_21ca158 - GameData_21ca148) >> 3) >
            v46) {
          v46 = 0x5D1745D1745D1746LL *
                ((GameData_21ca158 - GameData_21ca148) >> 3);
        }
        if ((unsigned __int64)(0x2E8BA2E8BA2E8BA3LL *
                               ((GameData_21ca158 - GameData_21ca148) >> 3)) >=
            0x1745D1745D1745DLL) {
          v46 = 0x2E8BA2E8BA2E8BALL;
        }
        if (v46 > 0x2E8BA2E8BA2E8BALL) {
        LABEL_292:
          GameRoutine_60a210_alt1(),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v50 = 88 * v46;
        v51 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 88 * v46, 16, 0),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v52 = v51 + v47;
        v53 = v51;
        v177 = v51 + v50;
        memset(v52, 0,
               88 * ((88 * (unsigned __int64)(unsigned int)v49 - 88) / 0x58) +
                   88),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v45 != v44) {
          v54 = (__int64*)v45;
          v55 = (_QWORD*)v53;
          do {
            v56 = *v54;
            v57 = v54[2];
            v55[1] = v54[1];
            v55[2] = v57;
            *v55 = v56;
            v54[1] = 0;
            v54[2] = 0;
            *v54 = 0;
            v58 = v54[4];
            v55[3] = v54[3];
            v55[4] = v58;
            v55[5] = v54[5];
            v55[6] = v54[6];
            v55[7] = v54[7];
            v54[6] = 0;
            v54[7] = 0;
            v54[5] = 0;
            v55[8] = v54[8];
            v55[9] = v54[9];
            v55[10] = v54[10];
            v54[9] = 0;
            v54[10] = 0;
            v54[8] = 0;
            v54 += 11;
            v55 += 11;
          } while (v54 != (__int64*)v44);
          do {
            MemoryInputStream_6b51e0(v45),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v45 += 88;
          } while (v45 != v44);
          v45 = GameData_21ca148;
        }
        GameData_21ca148 = v53;
        GameData_21ca150 =
            v52 +
            88 * ((88 * (unsigned __int64)(unsigned int)v49 - 88) / 0x58) + 88;
        GameData_21ca158 = v177;
        if (v45 != 0) {
          v60 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v60 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v60, v45),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v61 = v43[1];
      if (v61 != 0) {
        v62 = 0;
        v63 = 0;
        v64 = 0;
        v65 = 88LL * v61;
        do {
          v66 = *v43;
          if (v64 >= v66) {
            v68 = v64 - v66;
            v69 = __clz(v68 + 16);
            v67 = *(_QWORD*)(*((_QWORD*)v43 + 2) + 8 * (27 - v69) + 8) +
                  16LL * (unsigned int)(v68 - *((_DWORD*)GameData_212ce38 + 28 -
                                                v69));
          }
          else {
            v67 = *((_QWORD*)v43 + 1) + v63;
          }
          v70 = v182_.v183;
          v71 = ((v182_.v184 - v182_.v183) << 6) - 1;
          if (v182_.v184 == v182_.v183) {
            v71 = 0;
          }
          v72 = v182_.v186 + v182_.v185;
          if (v71 == v182_.v186 + v182_.v185) {
            GameRoutine_6b71e0_alt1((__int64*)&v182_.v182),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v70 = v182_.v183;
            v72 = v182_.v186 + v182_.v185;
          }
          *(_QWORD*)(*(_QWORD*)(v70 + 8 * (v72 >> 9)) + 8 * (v72 & 0x1FF)) =
              v67;
          v73 = v182_.v185;
          v74 = v182_.v183;
          v75 = v182_.v186 + 1;
          v76 = v182_.v185 + v182_.v186++;
          if (*(_QWORD*)(*(_QWORD*)(v182_.v183 + 8 * (v76 >> 9)) +
                         8 * (v76 & 0x1FF)) != 0) {
            BYTE5(v202_.v202) = 0;
            v77 = GameData_21ca148;
            LOBYTE(v202_.v202) = 8;
            *(_DWORD*)((char*)&v202_.v202 + 1) = 1701667182;
            v202_.v205 = (__int64*)(GameData_21ca148 + v62);
            GameRoutine_6b8990_alt1(v181, &v202_.v202),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if ((v202_.v202 & 1) != 0 && v202_.v204 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v78 = 128;
              }
              else {
                v78 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v78,
                  (__int64)v202_.v204),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v202_.v205 = (__int64*)(v77 + v62 + 24);
            v202_.v202 = 0x5874657366666F0ELL;
            v202_.v203 = 0;
            GameRoutine_6b81a0_alt1(v181, &v202_.v202),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if ((v202_.v202 & 1) != 0 && v202_.v204 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v79 = 128;
              }
              else {
                v79 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v79,
                  (__int64)v202_.v204),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v202_.v205 = (__int64*)(v77 + v62 + 28);
            v202_.v202 = 0x5A74657366666F0ELL;
            v202_.v203 = 0;
            GameRoutine_6b81a0_alt1(v181, &v202_.v202),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if ((v202_.v202 & 1) != 0 && v202_.v204 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v80 = 128;
              }
              else {
                v80 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v80,
                  (__int64)v202_.v204),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v202_.v205 = (__int64*)(v77 + v62 + 32);
            v202_.v202 = 0x58657A69730ALL;
            GameRoutine_6b81a0_alt1(v181, &v202_.v202),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if ((v202_.v202 & 1) != 0 && v202_.v204 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v81 = 128;
              }
              else {
                v81 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v81,
                  (__int64)v202_.v204),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v202_.v205 = (__int64*)(v77 + v62 + 36);
            v202_.v202 = 0x5A657A69730ALL;
            GameRoutine_6b81a0_alt1(v181, &v202_.v202),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if ((v202_.v202 & 1) != 0 && v202_.v204 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v82 = 128;
              }
              else {
                v82 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v82,
                  (__int64)v202_.v204),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v83 = v77 + v62;
            v202_.v205 = (__int64*)(v83 + 40);
            v202_.v202 = 0x737265646E750CLL;
            GameRoutine_6b8da0_alt1(v181, &v202_.v202),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v202_.v205 = (__int64*)(v83 + 64);
            v202_.v202 = 0x7372657070750CLL;
            GameRoutine_6b8da0_alt1(v181, &v202_.v202),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v73 = v182_.v185;
            v75 = v182_.v186;
            v74 = v182_.v183;
          }
          v84 = v182_.v184;
          if (v182_.v184 == v74) {
            v85 = 0;
          }
          else {
            v85 = ((v182_.v184 - v74) << 6) - 1;
          }
          v182_.v186 = v75 - 1;
          if ((unsigned __int64)(v85 - (v73 + v75) + 1) >= 0x400) {
            v86 = *(_QWORD*)(v182_.v184 - 8);
            if (v86 != 0) {
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v87 = 128;
              }
              else {
                v87 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v87, v86),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v84 = v182_.v184;
            }
            v182_.v184 = v84 - 8;
          }
          ++v64;
          v63 += 16;
          v62 += 88;
        } while (v65 != v62);
      }
    }
    goto LABEL_141;
  }
LABEL_264:
  if (v18 != 0 && v198_.v200 != nullptr) {
    v166 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v166 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v166,
                                  (__int64)v198_.v200),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  return v20 != 0;
}

__int64 GameHr_6b55a0(__int64 result, unsigned __int8 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  unsigned __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _DWORD* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned int** v19;
  int v20;
  __int64 v21;
  unsigned int* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64* v26;
  unsigned __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  int v31;
  unsigned int v32;
  unsigned __int64* v33;
  unsigned __int64 v34;
  unsigned int v35;
  unsigned __int64 v36;
  unsigned int v37;
  unsigned __int64* v38;
  unsigned __int64 v39;
  unsigned int v40;
  unsigned __int64 v41;
  bool v42;
  unsigned int v43;
  unsigned int v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64* v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  unsigned int** v61;
  int v62;
  __int64 v63;
  unsigned int* v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64* v68;
  unsigned __int64 v69;
  __int64 v70;
  int v71;
  __int64 v72;
  int v73;
  unsigned int v74;
  unsigned __int64* v75;
  unsigned __int64 v76;
  unsigned int v77;
  unsigned __int64 v78;
  unsigned int v79;
  unsigned __int64* v80;
  unsigned __int64 v81;
  unsigned int v82;
  unsigned __int64 v83;
  unsigned int v84;
  unsigned int v85;
  __int64* v86;
  __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  unsigned __int64* v99;
  unsigned __int64 v100;
  __int64 v101;
  unsigned __int64* v102;
  unsigned __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64* v107;
  unsigned __int64* v108;
  __int64 v109;
  __int64 v110;
  __int64* v111;
  unsigned __int64* v112;
  __int64 v113;
  _QWORD v114[3];

  v2 = result;
  if (a2 == 6 || (unsigned int)a2 - 9 <= 1) {
    v3 = *(_QWORD*)(result + 8);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v4 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v4, v3);
    }
    *(_QWORD*)(v2 + 8) = 0;
    *(_DWORD*)(v2 + 4) = 0;
    return result;
  }
  v112 = nullptr;
  v108 = nullptr;
  v110 = 32;
  v111 = &v113;
  v106 = 32;
  v107 = &v109;
  if (a2 == 7) {
    result = GameRoutine_6b63a0(&v110, result + 1);
  }
  else {
    result = GameRoutine_6b6600(&v106, result + 1);
  }
  v5 = HIDWORD(v110);
  v6 = HIDWORD(v106);
  *(_BYTE*)v2 = 0;
  if ((v5 | v6) == 0) {
    goto LABEL_13;
  }
  v13 = (_QWORD*)GameData_212bf68;
  v14 = GameData_212ce38;
  while (2) {
    if (v5 == 0) {
      if (v6 != 0) {
        goto LABEL_115;
      }
      break;
    }
    do {
      v18 = v5 - 1LL;
      if (v18 >= (unsigned int)v110) {
        v20 = v18 - v110;
        v21 = __clz(v20 + 16);
        v19 = (unsigned int**)(v112[27 - v21 + 1] +
                               8LL * (unsigned int)(v20 - v14[28 - v21]));
      }
      else {
        v19 = (unsigned int**)&v111[v18];
      }
      v22 = *v19;
      HIDWORD(v110) = v5 - 1;
      v23 = v22[1];
      if ((_DWORD)v23 != 0) {
        v24 = 0;
        while (1) {
          v27 = *v22;
          if (v24 >= v27) {
            v29 = v24 - v27;
            v30 = __clz(v29 + 16);
            v28 = *(_QWORD*)(*((_QWORD*)v22 + 2) + 8 * (27 - v30) + 8) +
                  16LL * (unsigned int)(v29 - v14[28 - v30]);
          }
          else {
            v28 = *((_QWORD*)v22 + 1) + 16 * v24;
          }
          v31 = *(_BYTE*)v28 & 0x7F;
          if (v31 == 8) {
            v37 = HIDWORD(v106);
            v38 = v108;
            if (v108 == nullptr) {
              v40 = v106;
              if (HIDWORD(v106) >= (unsigned int)v106) {
                v41 = 1;
                v38 = (unsigned __int64*)GameRoutine_651b90(*v13, 232, 16, 0);
                v39 = 0;
                *v38 = 0;
                v38[1] = 0;
                v38[2] = 0;
                v38[3] = 0;
                v38[4] = 0;
                v38[5] = 0;
                v38[6] = 0;
                v38[7] = 0;
                v38[8] = 0;
                v38[9] = 0;
                v38[10] = 0;
                v38[11] = 0;
                v38[12] = 0;
                v38[13] = 0;
                v38[14] = 0;
                v38[15] = 0;
                v38[16] = 0;
                v38[17] = 0;
                v38[18] = 0;
                v38[19] = 0;
                v38[20] = 0;
                v38[21] = 0;
                v38[22] = 0;
                v38[23] = 0;
                v38[24] = 0;
                v38[25] = 0;
                v38[26] = 0;
                v38[27] = 0;
                v38[28] = 0;
                v108 = v38;
                goto LABEL_74;
              }
            LABEL_78:
              v42 = v37 >= v40;
              v44 = v37 - v40;
              if (v42) {
                v46 = __clz(v44 + 16);
                v45 = (__int64*)(v108[27 - v46 + 1] +
                                 8LL * (v44 - v14[28 - v46]));
              }
              else {
                v45 = &v107[v37];
              }
              *v45 = *(_QWORD*)(v28 + 1);
              ++HIDWORD(v106);
              goto LABEL_41;
            }
            v39 = *v108;
            v40 = v106;
            if (*v108 != 0) {
              v41 = v39 + 1;
              if ((unsigned int)v14[v39 + 1] +
                      (unsigned __int64)(unsigned int)v106 >
                  HIDWORD(v106)) {
                goto LABEL_78;
              }
              if (v41 <= 0x1C) {
                if (v39 != -1) {
                  goto LABEL_74;
                }
                v41 = 0;
              LABEL_77:
                *v38 = v41;
                v40 = v106;
                v37 = HIDWORD(v106);
                v14 = GameData_212ce38;
                goto LABEL_78;
              }
            }
            else {
              if (HIDWORD(v106) < (unsigned int)v106) {
                goto LABEL_78;
              }
              v39 = 0;
              v41 = 1;
            LABEL_74:
              while ((unsigned __int64)((16LL << v39) - 0x2000000000000000LL) >
                     0xE000000000000000LL) {
                v38[v39 + 1] = GameRoutine_651b90(*v13, 128LL << v39, 16, 0);
                if (v41 == ++v39) {
                  v38 = v108;
                  goto LABEL_77;
                }
              }
              for (; v39 > *v108; --v39) {
                v51 = v38[v39];
                if (v51 != 0) {
                  v52 = 128;
                  if (*(_QWORD*)(*v13 + 200LL) == 0) {
                    v52 = 56;
                  }
                  GameRoutine_1a0a4e0(*v13 + v52, v51);
                }
                v38[v39] = 0;
              }
            }
            v50 = *(_QWORD*)(v28 + 1);
            LOBYTE(v114[0]) = 8;
            v114[1] = 0;
            *(_QWORD*)((char*)v114 + 1) = v50;
            GameRoutine_6b6a60(v114);
          }
          else {
            if (v31 != 7) {
              goto LABEL_42;
            }
            v32 = HIDWORD(v110);
            v33 = v112;
            if (v112 == nullptr) {
              v35 = v110;
              if (HIDWORD(v110) >= (unsigned int)v110) {
                v36 = 1;
                v33 = (unsigned __int64*)GameRoutine_651b90(*v13, 232, 16, 0);
                v34 = 0;
                *v33 = 0;
                v33[1] = 0;
                v33[2] = 0;
                v33[3] = 0;
                v33[4] = 0;
                v33[5] = 0;
                v33[6] = 0;
                v33[7] = 0;
                v33[8] = 0;
                v33[9] = 0;
                v33[10] = 0;
                v33[11] = 0;
                v33[12] = 0;
                v33[13] = 0;
                v33[14] = 0;
                v33[15] = 0;
                v33[16] = 0;
                v33[17] = 0;
                v33[18] = 0;
                v33[19] = 0;
                v33[20] = 0;
                v33[21] = 0;
                v33[22] = 0;
                v33[23] = 0;
                v33[24] = 0;
                v33[25] = 0;
                v33[26] = 0;
                v33[27] = 0;
                v33[28] = 0;
                v112 = v33;
                goto LABEL_66;
              }
            LABEL_70:
              v42 = v32 >= v35;
              v43 = v32 - v35;
              if (v42) {
                v25 = __clz(v43 + 16);
                v26 = (__int64*)(v112[27 - v25 + 1] +
                                 8LL * (v43 - v14[28 - v25]));
              }
              else {
                v26 = &v111[v32];
              }
              *v26 = *(_QWORD*)(v28 + 1);
              ++HIDWORD(v110);
              goto LABEL_41;
            }
            v34 = *v112;
            v35 = v110;
            if (*v112 != 0) {
              v36 = v34 + 1;
              if ((unsigned int)v14[v34 + 1] +
                      (unsigned __int64)(unsigned int)v110 >
                  HIDWORD(v110)) {
                goto LABEL_70;
              }
              if (v36 <= 0x1C) {
                if (v34 != -1) {
                  goto LABEL_66;
                }
                v36 = 0;
              LABEL_69:
                *v33 = v36;
                v32 = HIDWORD(v110);
                v35 = v110;
                v14 = GameData_212ce38;
                goto LABEL_70;
              }
            }
            else {
              if (HIDWORD(v110) < (unsigned int)v110) {
                goto LABEL_70;
              }
              v34 = 0;
              v36 = 1;
            LABEL_66:
              while ((unsigned __int64)((16LL << v34) - 0x2000000000000000LL) >
                     0xE000000000000000LL) {
                v33[v34 + 1] = GameRoutine_651b90(*v13, 128LL << v34, 16, 0);
                if (v36 == ++v34) {
                  v33 = v112;
                  goto LABEL_69;
                }
              }
              for (; v34 > *v112; --v34) {
                v48 = v33[v34];
                if (v48 != 0) {
                  v49 = 128;
                  if (*(_QWORD*)(*v13 + 200LL) == 0) {
                    v49 = 56;
                  }
                  GameRoutine_1a0a4e0(*v13 + v49, v48);
                }
                v33[v34] = 0;
              }
            }
            v47 = *(_QWORD*)(v28 + 1);
            LOBYTE(v114[0]) = 7;
            v114[1] = 0;
            *(_QWORD*)((char*)v114 + 1) = v47;
            GameRoutine_6b6860(v114);
          }
          v14 = GameData_212ce38;
        LABEL_41:
          *(_BYTE*)v28 = 0;
          v23 = v22[1];
        LABEL_42:
          if (++v24 == v23) {
            goto LABEL_98;
          }
        }
      }
      v24 = 0;
    LABEL_98:
      GameRoutine_6b6c80(v22, 0, v22, v24);
      v15 = *((__int64**)v22 + 2);
      if (v15 != nullptr) {
        v53 = *v15;
        if (*v15 == 0) {
          goto LABEL_28;
        }
        do {
          v54 = *((_QWORD*)v22 + 2);
          v55 = *(_QWORD*)(v54 + 8 * v53);
          if (v55 != 0) {
            v56 = 128;
            if (*(_QWORD*)(*v13 + 200LL) == 0) {
              v56 = 56;
            }
            GameRoutine_1a0a4e0(*v13 + v56, v55);
            v54 = *((_QWORD*)v22 + 2);
          }
          *(_QWORD*)(v54 + 8 * v53--) = 0;
        } while (v53 != 0);
        v15 = *((__int64**)v22 + 2);
        if (v15 != nullptr) {
        LABEL_28:
          v16 = 128;
          if (*(_QWORD*)(*v13 + 200LL) == 0) {
            v16 = 56;
          }
          GameRoutine_1a0a4e0(*v13 + v16, v15);
        }
      }
      v17 = 128;
      if (*(_QWORD*)(*v13 + 200LL) == 0) {
        v17 = 56;
      }
      result = GameRoutine_1a0a4e0(*v13 + v17, v22);
      v5 = HIDWORD(v110);
      v14 = GameData_212ce38;
    } while (HIDWORD(v110) != 0);
    v6 = HIDWORD(v106);
    if (HIDWORD(v106) == 0) {
      break;
    }
  LABEL_115:
    while (2) {
      v60 = v6 - 1LL;
      if (v60 >= (unsigned int)v106) {
        v62 = v60 - v106;
        v63 = __clz(v62 + 16);
        v61 = (unsigned int**)(v108[27 - v63 + 1] +
                               8LL * (unsigned int)(v62 - v14[28 - v63]));
      }
      else {
        v61 = (unsigned int**)&v107[v60];
      }
      v64 = *v61;
      HIDWORD(v106) = v6 - 1;
      v65 = v64[1];
      if ((_DWORD)v65 != 0) {
        v66 = 0;
        while (1) {
          v69 = *v64;
          if (v66 >= v69) {
            v71 = v66 - v69;
            v72 = __clz(v71 + 16);
            v70 = *(_QWORD*)(*((_QWORD*)v64 + 2) + 8 * (27 - v72) + 8) +
                  32LL * (unsigned int)(v71 - v14[28 - v72]);
          }
          else {
            v70 = *((_QWORD*)v64 + 1) + 32 * v66;
          }
          v73 = *(_BYTE*)(v70 + 16) & 0x7F;
          if (v73 == 8) {
            v79 = HIDWORD(v106);
            v80 = v108;
            if (v108 == nullptr) {
              v82 = v106;
              if (HIDWORD(v106) >= (unsigned int)v106) {
                v83 = 1;
                v80 = (unsigned __int64*)GameRoutine_651b90(*v13, 232, 16, 0);
                v81 = 0;
                *v80 = 0;
                v80[1] = 0;
                v80[2] = 0;
                v80[3] = 0;
                v80[4] = 0;
                v80[5] = 0;
                v80[6] = 0;
                v80[7] = 0;
                v80[8] = 0;
                v80[9] = 0;
                v80[10] = 0;
                v80[11] = 0;
                v80[12] = 0;
                v80[13] = 0;
                v80[14] = 0;
                v80[15] = 0;
                v80[16] = 0;
                v80[17] = 0;
                v80[18] = 0;
                v80[19] = 0;
                v80[20] = 0;
                v80[21] = 0;
                v80[22] = 0;
                v80[23] = 0;
                v80[24] = 0;
                v80[25] = 0;
                v80[26] = 0;
                v80[27] = 0;
                v80[28] = 0;
                v108 = v80;
                goto LABEL_155;
              }
            LABEL_159:
              v42 = v79 >= v82;
              v85 = v79 - v82;
              if (v42) {
                v87 = __clz(v85 + 16);
                v86 = (__int64*)(v108[27 - v87 + 1] +
                                 8LL * (v85 - v14[28 - v87]));
              }
              else {
                v86 = &v107[v79];
              }
              *v86 = *(_QWORD*)(v70 + 17);
              ++HIDWORD(v106);
              goto LABEL_122;
            }
            v81 = *v108;
            v82 = v106;
            if (*v108 != 0) {
              v83 = v81 + 1;
              if ((unsigned int)v14[v81 + 1] +
                      (unsigned __int64)(unsigned int)v106 >
                  HIDWORD(v106)) {
                goto LABEL_159;
              }
              if (v83 <= 0x1C) {
                if (v81 != -1) {
                  goto LABEL_155;
                }
                v83 = 0;
              LABEL_158:
                *v80 = v83;
                v82 = v106;
                v79 = HIDWORD(v106);
                v14 = GameData_212ce38;
                goto LABEL_159;
              }
            }
            else {
              if (HIDWORD(v106) < (unsigned int)v106) {
                goto LABEL_159;
              }
              v81 = 0;
              v83 = 1;
            LABEL_155:
              while ((unsigned __int64)((16LL << v81) - 0x2000000000000000LL) >
                     0xE000000000000000LL) {
                v80[v81 + 1] = GameRoutine_651b90(*v13, 128LL << v81, 16, 0);
                if (v83 == ++v81) {
                  v80 = v108;
                  goto LABEL_158;
                }
              }
              for (; v81 > *v108; --v81) {
                v92 = v80[v81];
                if (v92 != 0) {
                  v93 = 128;
                  if (*(_QWORD*)(*v13 + 200LL) == 0) {
                    v93 = 56;
                  }
                  GameRoutine_1a0a4e0(*v13 + v93, v92);
                }
                v80[v81] = 0;
              }
            }
            v91 = *(_QWORD*)(v70 + 17);
            LOBYTE(v114[0]) = 8;
            v114[1] = 0;
            *(_QWORD*)((char*)v114 + 1) = v91;
            GameRoutine_6b6a60(v114);
          }
          else {
            if (v73 != 7) {
              goto LABEL_123;
            }
            v74 = HIDWORD(v110);
            v75 = v112;
            if (v112 == nullptr) {
              v77 = v110;
              if (HIDWORD(v110) >= (unsigned int)v110) {
                v78 = 1;
                v75 = (unsigned __int64*)GameRoutine_651b90(*v13, 232, 16, 0);
                v76 = 0;
                *v75 = 0;
                v75[1] = 0;
                v75[2] = 0;
                v75[3] = 0;
                v75[4] = 0;
                v75[5] = 0;
                v75[6] = 0;
                v75[7] = 0;
                v75[8] = 0;
                v75[9] = 0;
                v75[10] = 0;
                v75[11] = 0;
                v75[12] = 0;
                v75[13] = 0;
                v75[14] = 0;
                v75[15] = 0;
                v75[16] = 0;
                v75[17] = 0;
                v75[18] = 0;
                v75[19] = 0;
                v75[20] = 0;
                v75[21] = 0;
                v75[22] = 0;
                v75[23] = 0;
                v75[24] = 0;
                v75[25] = 0;
                v75[26] = 0;
                v75[27] = 0;
                v75[28] = 0;
                v112 = v75;
                goto LABEL_147;
              }
            LABEL_151:
              v42 = v74 >= v77;
              v84 = v74 - v77;
              if (v42) {
                v67 = __clz(v84 + 16);
                v68 = (__int64*)(v112[27 - v67 + 1] +
                                 8LL * (v84 - v14[28 - v67]));
              }
              else {
                v68 = &v111[v74];
              }
              *v68 = *(_QWORD*)(v70 + 17);
              ++HIDWORD(v110);
              goto LABEL_122;
            }
            v76 = *v112;
            v77 = v110;
            if (*v112 != 0) {
              v78 = v76 + 1;
              if ((unsigned int)v14[v76 + 1] +
                      (unsigned __int64)(unsigned int)v110 >
                  HIDWORD(v110)) {
                goto LABEL_151;
              }
              if (v78 <= 0x1C) {
                if (v76 != -1) {
                  goto LABEL_147;
                }
                v78 = 0;
              LABEL_150:
                *v75 = v78;
                v74 = HIDWORD(v110);
                v77 = v110;
                v14 = GameData_212ce38;
                goto LABEL_151;
              }
            }
            else {
              if (HIDWORD(v110) < (unsigned int)v110) {
                goto LABEL_151;
              }
              v76 = 0;
              v78 = 1;
            LABEL_147:
              while ((unsigned __int64)((16LL << v76) - 0x2000000000000000LL) >
                     0xE000000000000000LL) {
                v75[v76 + 1] = GameRoutine_651b90(*v13, 128LL << v76, 16, 0);
                if (v78 == ++v76) {
                  v75 = v112;
                  goto LABEL_150;
                }
              }
              for (; v76 > *v112; --v76) {
                v89 = v75[v76];
                if (v89 != 0) {
                  v90 = 128;
                  if (*(_QWORD*)(*v13 + 200LL) == 0) {
                    v90 = 56;
                  }
                  GameRoutine_1a0a4e0(*v13 + v90, v89);
                }
                v75[v76] = 0;
              }
            }
            v88 = *(_QWORD*)(v70 + 17);
            LOBYTE(v114[0]) = 7;
            v114[1] = 0;
            *(_QWORD*)((char*)v114 + 1) = v88;
            GameRoutine_6b6860(v114);
          }
          v14 = GameData_212ce38;
        LABEL_122:
          *(_BYTE*)(v70 + 16) = 0;
          v65 = v64[1];
        LABEL_123:
          if (++v66 == v65) {
            goto LABEL_179;
          }
        }
      }
      v66 = 0;
    LABEL_179:
      GameRoutine_6b6ee0(v64, 0, v64, v66);
      v57 = *((__int64**)v64 + 2);
      if (v57 != nullptr) {
        v94 = *v57;
        if (*v57 == 0) {
          goto LABEL_109;
        }
        do {
          v95 = *((_QWORD*)v64 + 2);
          v96 = *(_QWORD*)(v95 + 8 * v94);
          if (v96 != 0) {
            v97 = 128;
            if (*(_QWORD*)(*v13 + 200LL) == 0) {
              v97 = 56;
            }
            GameRoutine_1a0a4e0(*v13 + v97, v96);
            v95 = *((_QWORD*)v64 + 2);
          }
          *(_QWORD*)(v95 + 8 * v94--) = 0;
        } while (v94 != 0);
        v57 = *((__int64**)v64 + 2);
        if (v57 != nullptr) {
        LABEL_109:
          v58 = 128;
          if (*(_QWORD*)(*v13 + 200LL) == 0) {
            v58 = 56;
          }
          GameRoutine_1a0a4e0(*v13 + v58, v57);
        }
      }
      v59 = 128;
      if (*(_QWORD*)(*v13 + 200LL) == 0) {
        v59 = 56;
      }
      result = GameRoutine_1a0a4e0(*v13 + v59, v64);
      v6 = HIDWORD(v106);
      v14 = GameData_212ce38;
      if (HIDWORD(v106) != 0) {
        continue;
      }
      break;
    }
    v5 = HIDWORD(v110);
    if (HIDWORD(v110) != 0) {
      continue;
    }
    break;
  }
LABEL_13:
  v7 = v108;
  if (v108 != nullptr) {
    v8 = *v108;
    if (*v108 == 0) {
      goto LABEL_188;
    }
    v9 = GameData_212bf68;
    do {
      v10 = v108;
      v11 = v108[v8];
      if (v11 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)v9 + v12, v11);
        v10 = v108;
      }
      v10[v8--] = 0;
    } while (v8 != 0);
    v7 = v108;
    if (v108 != nullptr) {
    LABEL_188:
      v98 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v98 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v98, v7);
    }
  }
  v99 = v112;
  if (v112 != nullptr) {
    v100 = *v112;
    if (*v112 == 0) {
      goto LABEL_201;
    }
    v101 = GameData_212bf68;
    do {
      v102 = v112;
      v103 = v112[v100];
      if (v103 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v101 + 200LL) != 0) {
          v104 = 128;
        }
        else {
          v104 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)v101 + v104, v103);
        v102 = v112;
      }
      v102[v100--] = 0;
    } while (v100 != 0);
    v99 = v112;
    if (v112 != nullptr) {
    LABEL_201:
      v105 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v105 = 56;
      }
      return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v105, v99);
    }
  }
  return result;
}

_QWORD* GameHr_6b63a0(unsigned int* a1, _QWORD* a2)
{
  unsigned __int64 v2;
  unsigned __int64* v3;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64* v8;
  bool v9;
  int v10;
  _QWORD* result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;

  v2 = a1[1];
  v3 = *((unsigned __int64**)a1 + 2);
  if (v3 == nullptr) {
    LODWORD(v6) = *a1;
    if ((unsigned int)v2 < *a1) {
      goto LABEL_16;
    }
    v15 = a2;
    v3 = (unsigned __int64*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 232, 16, 0);
    v5 = 0;
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
    v3[3] = 0;
    v7 = 1;
    v3[4] = 0;
    v3[5] = 0;
    v3[6] = 0;
    v3[7] = 0;
    v3[8] = 0;
    v3[9] = 0;
    v3[10] = 0;
    v3[11] = 0;
    v3[12] = 0;
    v3[13] = 0;
    v3[14] = 0;
    v3[15] = 0;
    v3[16] = 0;
    v3[17] = 0;
    v3[18] = 0;
    v3[19] = 0;
    v3[20] = 0;
    v3[21] = 0;
    v3[22] = 0;
    v3[23] = 0;
    v3[24] = 0;
    v3[25] = 0;
    v3[26] = 0;
    v3[27] = 0;
    v3[28] = 0;
    *((_QWORD*)a1 + 2) = v3;
  LABEL_11:
    v8 = (__int64*)fw_memory_g_heap_manager_ptr;
    while ((unsigned __int64)((16LL << v5) - 0x2000000000000000LL) >
           0xE000000000000000LL) {
      v3[v5 + 1] = fw_memory_HeapManager_Allocate(*v8, 128LL << v5, 16, 0);
      if (v7 == ++v5) {
        v3 = *((unsigned __int64**)a1 + 2);
        a2 = v15;
        goto LABEL_15;
      }
    }
    for (; v5 > **((_QWORD**)a1 + 2); --v5) {
      v13 = v3[v5];
      if (v13 != 0) {
        if (*(_QWORD*)(*v8 + 200) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free(*v8 + v14, v13);
      }
      v3[v5] = 0;
    }
    return nullptr;
  }
  v5 = *v3;
  v6 = *a1;
  if (*v3 == 0) {
    if ((unsigned int)v2 < (unsigned int)v6) {
      goto LABEL_16;
    }
    v15 = a2;
    v5 = 0;
    v7 = 1;
    goto LABEL_11;
  }
  v7 = v5 + 1;
  if ((unsigned __int64)*((unsigned int*)GameData_212ce38 + v5 + 1) + v6 <=
      v2) {
    if (v7 > 0x1C) {
      return nullptr;
    }
    if (v5 != -1) {
      v15 = a2;
      goto LABEL_11;
    }
    v7 = 0;
  LABEL_15:
    *v3 = v7;
    LODWORD(v6) = *a1;
    LODWORD(v2) = a1[1];
  }
LABEL_16:
  v9 = (unsigned int)v2 >= (unsigned int)v6;
  v10 = v2 - v6;
  if (v9) {
    v12 = __clz(v10 + 16);
    result = (_QWORD*)(*(_QWORD*)(*((_QWORD*)a1 + 2) + 8 * (27 - v12) + 8) +
                       8LL * (unsigned int)(v10 - *((_DWORD*)GameData_212ce38 +
                                                    28 - v12)));
  }
  else {
    result = (_QWORD*)(*((_QWORD*)a1 + 1) + 8LL * (unsigned int)v2);
  }
  *result = *a2;
  ++a1[1];
  return result;
}

_QWORD* GameHr_6b6600(unsigned int* a1, _QWORD* a2)
{
  unsigned __int64 v2;
  unsigned __int64* v3;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  bool v9;
  int v10;
  _QWORD* result;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  _QWORD* v15;

  v2 = a1[1];
  v3 = *((unsigned __int64**)a1 + 2);
  if (v3 == nullptr) {
    LODWORD(v6) = *a1;
    if ((unsigned int)v2 < *a1) {
      goto LABEL_16;
    }
    v15 = a2;
    v3 = (unsigned __int64*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 232,
                                               16, 0);
    v5 = 0;
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
    v3[3] = 0;
    v7 = 1;
    v3[4] = 0;
    v3[5] = 0;
    v3[6] = 0;
    v3[7] = 0;
    v3[8] = 0;
    v3[9] = 0;
    v3[10] = 0;
    v3[11] = 0;
    v3[12] = 0;
    v3[13] = 0;
    v3[14] = 0;
    v3[15] = 0;
    v3[16] = 0;
    v3[17] = 0;
    v3[18] = 0;
    v3[19] = 0;
    v3[20] = 0;
    v3[21] = 0;
    v3[22] = 0;
    v3[23] = 0;
    v3[24] = 0;
    v3[25] = 0;
    v3[26] = 0;
    v3[27] = 0;
    v3[28] = 0;
    *((_QWORD*)a1 + 2) = v3;
  LABEL_11:
    v8 = (_QWORD*)GameData_212bf68;
    while ((unsigned __int64)((16LL << v5) - 0x2000000000000000LL) >
           0xE000000000000000LL) {
      v3[v5 + 1] = GameRoutine_651b90(*v8, 128LL << v5, 16, 0);
      if (v7 == ++v5) {
        v3 = *((unsigned __int64**)a1 + 2);
        a2 = v15;
        goto LABEL_15;
      }
    }
    for (; v5 > **((_QWORD**)a1 + 2); --v5) {
      v13 = v3[v5];
      if (v13 != 0) {
        if (*(_QWORD*)(*v8 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        GameRoutine_1a0a4e0(*v8 + v14, v13);
      }
      v3[v5] = 0;
    }
    return nullptr;
  }
  v5 = *v3;
  v6 = *a1;
  if (*v3 == 0) {
    if ((unsigned int)v2 < (unsigned int)v6) {
      goto LABEL_16;
    }
    v15 = a2;
    v5 = 0;
    v7 = 1;
    goto LABEL_11;
  }
  v7 = v5 + 1;
  if ((unsigned __int64)*((unsigned int*)GameData_212ce38 + v5 + 1) + v6 <=
      v2) {
    if (v7 > 0x1C) {
      return nullptr;
    }
    if (v5 != -1) {
      v15 = a2;
      goto LABEL_11;
    }
    v7 = 0;
  LABEL_15:
    *v3 = v7;
    LODWORD(v6) = *a1;
    LODWORD(v2) = a1[1];
  }
LABEL_16:
  v9 = (unsigned int)v2 >= (unsigned int)v6;
  v10 = v2 - v6;
  if (v9) {
    v12 = __clz(v10 + 16);
    result = (_QWORD*)(*(_QWORD*)(*((_QWORD*)a1 + 2) + 8 * (27 - v12) + 8) +
                       8LL * (unsigned int)(v10 - *((_DWORD*)GameData_212ce38 +
                                                    28 - v12)));
  }
  else {
    result = (_QWORD*)(*((_QWORD*)a1 + 1) + 8LL * (unsigned int)v2);
  }
  *result = *a2;
  ++a1[1];
  return result;
}

__int64 GameHr_6b6860(__int64 a1)
{
  unsigned int* v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  _DWORD* v5;
  int v6;
  __int64 v7;
  _BYTE* v8;
  unsigned __int64 v9;
  _BYTE* v10;
  int v11;
  __int64 v12;
  int v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  v1 = *(unsigned int**)(a1 + 1);
  v2 = v1[1];
  if ((_DWORD)v2 != 0) {
    v3 = 0;
    v4 = 0;
    v5 = GameData_212ce38;
    while (1) {
      v9 = *v1;
      if (v4 >= v9) {
        v11 = v4 - v9;
        v12 = __clz(v11 + 16);
        v10 = (_BYTE*)(*(_QWORD*)(*((_QWORD*)v1 + 2) + 8 * (27 - v12) + 8) +
                       16LL * (unsigned int)(v11 - v5[28 - v12]));
      }
      else {
        v10 = (_BYTE*)(*((_QWORD*)v1 + 1) + v3);
      }
      v13 = *v10 & 0x7F;
      if (v13 == 8) {
        GameRoutine_6b6a60(v10);
        v14 = *v1;
        if (v4 < v14) {
          v8 = (_BYTE*)(*((_QWORD*)v1 + 1) + v3);
          goto LABEL_4;
        }
      }
      else {
        if (v13 != 7) {
          goto LABEL_5;
        }
        GameHr_6b6860(v10);
        v14 = *v1;
        if (v4 < v14) {
          v8 = (_BYTE*)(*((_QWORD*)v1 + 1) + 16 * v4);
          goto LABEL_4;
        }
      }
      v6 = v4 - v14;
      v7 = __clz(v6 + 16);
      v8 = (_BYTE*)(*(_QWORD*)(*((_QWORD*)v1 + 2) + 8 * (27 - v7) + 8) +
                    16LL * (unsigned int)(v6 - v5[28 - v7]));
    LABEL_4:
      *v8 = 0;
      v2 = v1[1];
    LABEL_5:
      ++v4;
      v3 += 16;
      if (v4 == v2) {
        goto LABEL_16;
      }
    }
  }
  v4 = 0;
LABEL_16:
  GameRoutine_6b6c80(v1, 0, v1, v4);
  v15 = *((__int64**)v1 + 2);
  v16 = GameData_212bf68;
  if (v15 != nullptr) {
    v17 = *v15;
    if (*v15 == 0) {
      goto LABEL_26;
    }
    do {
      v18 = *((_QWORD*)v1 + 2);
      v19 = *(_QWORD*)(v18 + 8 * v17);
      if (v19 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
          v20 = 128;
        }
        else {
          v20 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)v16 + v20, v19);
        v18 = *((_QWORD*)v1 + 2);
      }
      *(_QWORD*)(v18 + 8 * v17--) = 0;
    } while (v17 != 0);
    v15 = *((__int64**)v1 + 2);
    if (v15 != nullptr) {
    LABEL_26:
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v21 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v16 + v21, v15);
    }
  }
  v22 = 128;
  if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
    v22 = 56;
  }
  return GameRoutine_1a0a4e0(*(_QWORD*)v16 + v22, v1);
}

unsigned int* GameHr_6b6c80(unsigned int* result, unsigned __int64 a2,
                            unsigned int* a3, __int64 a4)
{
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned int* v7;
  _DWORD* v8;
  __int64 v9;
  unsigned __int8* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  int v28;

  if (a2 == a4) {
    return result;
  }
  v4 = *result;
  v6 = a2;
  v7 = result;
  v8 = GameData_212ce38;
  if (a2 >= v4) {
    v11 = __clz(a2 - v4 + 16);
    v9 = 28 - v11;
    v10 = (unsigned __int8*)(*(_QWORD*)(*((_QWORD*)result + 2) +
                                        8 * (27 - v11) + 8) +
                             16LL * (unsigned int)(a2 - v4 -
                                                   *((_DWORD*)GameData_212ce38 +
                                                     28 - v11)));
  }
  else {
    v9 = 0;
    v10 = (unsigned __int8*)(*((_QWORD*)result + 1) + 16 * a2);
  }
  v12 = *a3;
  v13 = a4 - 1;
  if (a4 - 1 >= v12) {
    v16 = __clz(v13 - v12 + 16);
    v14 = *(_QWORD*)(*((_QWORD*)a3 + 2) + 8 * (27 - v16) + 8) +
          16LL * (unsigned int)(v13 - v12 -
                                *((_DWORD*)GameData_212ce38 + 28 - v16));
    if (v9 != 28 - v16) {
      goto LABEL_7;
    }
  }
  else {
    v14 = *((_QWORD*)a3 + 1) + 16 * v13;
    if (v9 != 0) {
    LABEL_7:
      if (v9 != 0) {
        v4 = 8LL << v9;
        v15 = *(_QWORD*)(*((_QWORD*)result + 2) + 8 * v9);
      }
      else {
        v15 = *((_QWORD*)result + 1);
      }
      v17 = v15 + 16 * v4;
      goto LABEL_13;
    }
  }
  v17 = v14 + 16;
LABEL_13:
  while (1) {
    if (v10 == (unsigned __int8*)v17) {
      v18 = *a3;
      if (v13 >= v18) {
        v21 = v13 - v18;
        v22 = __clz(v13 - v18 + 16);
        v19 = 28 - v22;
        v20 = *(_QWORD*)(*((_QWORD*)a3 + 2) + 8 * (27 - v22) + 8) +
              16LL * (unsigned int)(v21 - v8[28 - v22]);
      }
      else {
        v19 = 0;
        v20 = *((_QWORD*)a3 + 1) + 16 * v13;
      }
      v23 = *v7;
      v24 = 28LL - __clz(v6 - v23 + 16);
      if (v6 < v23) {
        v24 = 0;
      }
      if (v24 == v19) {
        break;
      }
      v6 = (unsigned int)v8[v24 + 1] + v23;
      v25 = v8[v24 + 1];
      v26 = __clz(v25 + 16);
      v27 = *(_QWORD*)(*((_QWORD*)v7 + 2) + 8 * (27 - v26) + 8);
      if (28 - v26 == v19) {
        v17 = v20 + 16;
      }
      else {
        v17 = (_DWORD)v26 == 28
                  ? *((_QWORD*)v7 + 1) + 16 * v23
                  : v27 + 16 * (16LL << (27 - (unsigned __int8)v26));
      }
      v10 = (unsigned __int8*)(v27 + 16LL * (unsigned int)(v25 - v8[28 - v26]));
      if ((unsigned __int8*)v17 == v10) {
        break;
      }
    }
    while (v10 != (unsigned __int8*)v17) {
      v28 = *v10;
      if ((unsigned int)(v28 - 6) <= 4) {
        result = (unsigned int*)GameRoutine_6b55a0((__int64)v10, v28);
      }
      v10 += 16;
    }
  }
  return result;
}

unsigned int* GameHr_6b6ee0(unsigned int* result, unsigned __int64 a2,
                            unsigned int* a3, __int64 a4)
{
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned int* v7;
  _DWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int8* v18;
  unsigned __int8* v19;
  unsigned __int8* v20;
  int v21;
  int v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;

  if (a2 == a4) {
    return result;
  }
  v4 = *result;
  v6 = a2;
  v7 = result;
  v8 = GameData_212ce38;
  if (a2 >= v4) {
    v11 = __clz(a2 - v4 + 16);
    v9 = 28 - v11;
    v10 = *(_QWORD*)(*((_QWORD*)result + 2) + 8 * (27 - v11) + 8) +
          32LL *
              (unsigned int)(a2 - v4 - *((_DWORD*)GameData_212ce38 + 28 - v11));
  }
  else {
    v9 = 0;
    v10 = *((_QWORD*)result + 1) + 32 * a2;
  }
  v12 = *a3;
  v13 = a4 - 1;
  if (a4 - 1 >= v12) {
    v17 = __clz(v13 - v12 + 16);
    v14 = *(_QWORD*)(*((_QWORD*)a3 + 2) + 8 * (27 - v17) + 8) +
          32LL * (unsigned int)(v13 - v12 -
                                *((_DWORD*)GameData_212ce38 + 28 - v17));
    if (v9 != 28 - v17) {
      goto LABEL_7;
    }
  }
  else {
    v14 = *((_QWORD*)a3 + 1) + 32 * v13;
    if (v9 != 0) {
    LABEL_7:
      if (v9 != 0) {
        v4 = 8LL << v9;
        v15 = *(_QWORD*)(*((_QWORD*)result + 2) + 8 * v9);
      }
      else {
        v15 = *((_QWORD*)result + 1);
      }
      v16 = v15 + 32 * v4;
      goto LABEL_14;
    }
  }
  v16 = v14 + 32;
LABEL_14:
  while (1) {
    if (v10 == v16) {
      v23 = *a3;
      if (v13 >= v23) {
        v26 = v13 - v23;
        v27 = __clz(v13 - v23 + 16);
        v24 = 28 - v27;
        v25 = *(_QWORD*)(*((_QWORD*)a3 + 2) + 8 * (27 - v27) + 8) +
              32LL * (unsigned int)(v26 - v8[28 - v27]);
      }
      else {
        v24 = 0;
        v25 = *((_QWORD*)a3 + 1) + 32 * v13;
      }
      v28 = *v7;
      v29 = 28LL - __clz(v6 - v28 + 16);
      if (v6 < v28) {
        v29 = 0;
      }
      if (v29 == v24) {
        break;
      }
      v6 = (unsigned int)v8[v29 + 1] + v28;
      v30 = v8[v29 + 1];
      v31 = __clz(v30 + 16);
      v32 = *(_QWORD*)(*((_QWORD*)v7 + 2) + 8 * (27 - v31) + 8);
      if (28 - v31 == v24) {
        v16 = v25 + 32;
      }
      else {
        v16 = (_DWORD)v31 == 28
                  ? *((_QWORD*)v7 + 1) + 32 * v28
                  : v32 + 32 * (16LL << (27 - (unsigned __int8)v31));
      }
      v10 = v32 + 32LL * (unsigned int)(v30 - v8[28 - v31]);
      if (v16 == v10) {
        break;
      }
    }
    if (v10 != v16) {
      v18 = (unsigned __int8*)(v10 + 16);
      do {
        v21 = *v18;
        if ((unsigned int)(v21 - 6) <= 4) {
          result = (unsigned int*)GameRoutine_6b55a0((__int64)v18, v21);
        }
        v22 = *(v18 - 16);
        if ((unsigned int)(v22 - 6) <= 4) {
          result = (unsigned int*)GameRoutine_6b55a0((__int64)(v18 - 16), v22);
        }
        v19 = v18 + 32;
        v20 = v18 + 16;
        v18 += 32;
      } while (v20 != (unsigned __int8*)v16);
      v10 = (__int64)(v19 - 16);
    }
  }
  return result;
}

__int64 GameHr_6b9520(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  result = a1[14];
  if (result == 0 || *(unsigned __int8*)(result + 72) >= 8u) {
    result = a1[17];
    if (result == 0 || *(unsigned __int8*)(result + 72) >= 8u) {
      result = a1[20];
      if (result == 0 || *(unsigned __int8*)(result + 72) >= 8u) {
        result = a1[23];
        if (result == 0 || *(unsigned __int8*)(result + 72) >= 8u) {
          result = a1[26];
          if (result == 0 || *(unsigned __int8*)(result + 72) >= 8u) {
            v3 = a1[5];
            if (v3 == 0 || *(_WORD*)(v3 + 16) == 0) {
              return 0;
            }
            result = *(_QWORD*)(v3 + 64);
            if (result != 0) {
              goto LABEL_14;
            }
            v7 = *(_QWORD*)(v3 + 304);
            if (v7 != 0) {
              v8 = *(_QWORD*)(v3 + 304);
              result = GameRoutine_127be60(&v8);
              if (result != 0) {
                goto LABEL_14;
              }
              v7 = *(_QWORD*)(v3 + 64);
            }
            result = v7 != 0 ? v7 : GameData_21c9988;
            if (result != 0) {
            LABEL_14:
              v4 = *(unsigned __int16*)(result + 128);
              if (*(_WORD*)(result + 128) != 0) {
                v5 = (__int64*)(*(_QWORD*)(result + 136) + 8LL);
                do {
                  v6 = *v5;
                  v5 += 2;
                  result = v6;
                  if (*(unsigned __int8*)(v6 + 72) <= 7u) {
                    break;
                  }
                  --v4;
                  result = 0;
                } while (v4 != 0);
                return result;
              }
              return 0;
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 GameHr_6c1760(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  char* v4;
  char* v5;
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  bool v21;
  __int64 v22;
  __int64 v23;
  __int64 result;
  __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _BYTE v38[32];
  _BYTE* v39;

  v2 = a1;
  v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                  24LL * *(unsigned __int8*)(a1 + 16) + 556000);
  if (v3 != 0) {
    v4 = nullptr;
    v5 = nullptr;
    v6 = 0;
    do {
      while (1) {
        v7 = v3;
        v3 = *(_QWORD*)(v3 + 432);
        if ((unsigned __int64)v5 >= v6) {
          break;
        }
        *(_QWORD*)v5 = v7;
        v5 += 8;
        if (v3 == 0) {
          goto LABEL_22;
        }
      }
      v8 = (char*)(v5 - v4);
      v9 = (v5 - v4) >> 3;
      v10 = v9 + 1;
      if ((unsigned __int64)(v9 + 1) >> 61 != 0) {
        GameRoutine_6c1f60();
      }
      if ((__int64)(v6 - (_QWORD)v4) >> 2 > v10) {
        v10 = (__int64)(v6 - (_QWORD)v4) >> 2;
      }
      if (v6 - (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFF8LL) {
        v11 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v11 = v10;
      }
      if (v11 != 0) {
        if (v11 >> 61 != 0) {
          GameRoutine_60a210(a1);
        }
        v12 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v11, 16, 0);
      }
      else {
        v12 = 0;
      }
      v6 = v12 + 8 * v11;
      v13 = (char*)(v5 - v4);
      v14 = (__int64)&v8[v12 + -8 * v9];
      *(_QWORD*)&v8[v12] = v7;
      v5 = &v8[v12 + 8];
      a1 = GameRoutine_1a0b950(v14, v4, v13);
      if (v4 != nullptr) {
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v15 = 56;
        }
        a1 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v15, v4);
      }
      v4 = (char*)v14;
    } while (v3 != 0);
  }
  else {
    v5 = nullptr;
    v4 = nullptr;
  }
LABEL_22:
  v16 = *(_QWORD*)(a2 + 32);
  if (v16 != 0) {
    if (v16 == a2) {
      v39 = v38;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v16 + 24LL))(v16, v38);
    }
    else {
      v39 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    }
  }
  else {
    v39 = nullptr;
  }
  if ((v5 - v4) >> 3 < 129) {
    v20 = 0;
  LABEL_33:
    GameRoutine_6c1f80(v4, v5, v38, (v5 - v4) >> 3, 0, v20);
  }
  else {
    v17 = (v5 - v4) >> 3;
    v18 = GameData_212c060;
    while (1) {
      v19 = GameRoutine_1a09d20(8 * v17, v18);
      if (v19 != 0) {
        break;
      }
      v20 = v17 >> 1;
      v21 = v17 > 1;
      v17 >>= 1;
      if (!v21) {
        goto LABEL_33;
      }
    }
    v22 = v19;
    GameRoutine_6c1f80(v4, v5, v38, (v5 - v4) >> 3, v19, v17);
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v23 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v23, v22);
  }
  result = (__int64)v39;
  if (v39 == v38) {
    v25 = 32;
  }
  else {
    if (v39 == nullptr) {
      goto LABEL_42;
    }
    v25 = 40;
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v39 + v25))((__int64)v39);
LABEL_42:
  if (v4 != v5) {
    v26 = v4;
    while (1) {
      v27 = *(_QWORD*)v26;
      v28 = *(_QWORD*)(*(_QWORD*)v26 + 424LL);
      v29 = *(_QWORD*)(*(_QWORD*)v26 + 432LL);
      if (v29 != 0) {
        *(_QWORD*)(v29 + 424) = v28;
        if (v28 == 0) {
          goto LABEL_51;
        }
      }
      else {
        *(_QWORD*)(v2 + 8) = v28;
        if (v28 == 0 ||
            (*(_QWORD*)(v28 + 432) = 0, (v28 = *(_QWORD*)(v27 + 424)) == 0)) {
        LABEL_51:
          v30 = *(_QWORD*)(v27 + 432);
          *(_QWORD*)v2 = v30;
          if (v30 != 0) {
            *(_QWORD*)(v30 + 424) = 0;
          }
          goto LABEL_45;
        }
      }
      *(_QWORD*)(v28 + 432) = *(_QWORD*)(v27 + 432);
    LABEL_45:
      v26 += 8;
      *(_QWORD*)(v27 + 424) = 0;
      *(_QWORD*)(v27 + 432) = 0;
      if (v26 == v5) {
        v31 = v4;
        v32 = GameData_21ca310;
        do {
          v33 = *(_QWORD*)v31;
          if (*(unsigned __int8*)(v2 + 16) >= 0xAu) {
            v34 = 0;
          }
          else {
            v34 = *(_QWORD*)(v32 + 56) + 24LL * *(unsigned __int8*)(v2 + 16) +
                  556000;
          }
          *(_QWORD*)(v33 + 440) = v34;
          v35 = *(_QWORD*)(v2 + 8);
          if (v35 != 0) {
            *(_QWORD*)(v35 + 432) = v33;
            *(_QWORD*)(v33 + 424) = v35;
          }
          else {
            *(_QWORD*)v2 = v33;
          }
          v31 += 8;
          *(_QWORD*)(v2 + 8) = v33;
        } while (v31 != v5);
        break;
      }
    }
  }
  if (v4 != nullptr) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v36 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v36, v4);
  }
  return result;
}

void GameHr_6c7cb0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  int v5;
  int v6;
  long double v7;
  long double v8;
  int v9;
  float v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  long double v14;
  long double v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  _QWORD v19[4];
  _QWORD* v20;
  char v21;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ca280,
                            memory_order_acquire) &
       1) == 0) {
    v18 = a3;
    v16 = a2;
    v17 = GameRoutine_1a09fd0(&GameData_21ca280);
    a3 = v18;
    a2 = v16;
    if (v17 != 0) {
      GameData_21ca278 = (__int64)&GameData_1af4ee7;
      GameData_21ca270 = GameRoutine_7a86e0(&GameData_1af4ee7);
      GameRoutine_1a09fe0(&GameData_21ca280);
      a3 = v18;
      a2 = v16;
    }
  }
  if (GameData_21ca2f8 == 0) {
    return;
  }
  if ((*(_BYTE*)(GameData_21ca2f8 + 21) & 2) == 0 ||
      (*(_BYTE*)(GameData_21ca2f8 + *(unsigned __int8*)(GameData_21ca2f8 + 24) +
                 16) != 1
           ? (v4 = 0)
           : (v4 = *(unsigned __int8*)(GameData_21ca2f8 + 24)),
       (v5 = *(unsigned __int8*)(*(_QWORD*)(a1 + 440) + 16LL)) == (_DWORD)v4)) {
  LABEL_11:
    v6 = *(_DWORD*)(a1 + 416);
    if ((v6 & 0x1000) == 0) {
      return;
    }
  LABEL_12:
    *(_DWORD*)(a1 + 416) = v6 & 0xFFFFEFFF;
    *(float*)&v7 = GameRoutine_764490();
    if (*(float*)&v7 <= 0.0) {
      return;
    }
    v9 = *(unsigned __int8*)(a1 + 176);
    v10 = *(float*)&v7;
    LODWORD(v19[0]) = 0;
    if (v9 == 1) {
      v11 = *(_QWORD*)(a1 + 152);
      *(_QWORD*)&v7 = 0;
    }
    else {
      if (*(float*)(a1 + 160) <= 0.0) {
        if (((*(__int64 (**)(__int64, _QWORD*, __int64))(
                 *(_QWORD*)(a1 + 152) + 8LL))(a1 + 152, v19, a1 + 184) &
             1) != 0) {
          (*(void (**)(__int64))(*(_QWORD*)(a1 + 152) + 16LL))(a1 + 152);
          LODWORD(v14) = v19[0];
          (*(void (**)(__int64, long double, long double))(
              *(_QWORD*)(a1 + 152) + 24LL))(a1 + 152, v15, v14);
        LABEL_18:
          *(_QWORD*)(a1 + 160) = 0;
          *(_WORD*)(a1 + 176) = 256;
          *(_WORD*)(a1 + 20) |= 8u;
        }
        GameRoutine_81aee0(a1, v10);
        return;
      }
      (*(void (**)(__int64))(*(_QWORD*)(a1 + 152) + 16LL))(a1 + 152);
      v11 = *(_QWORD*)(a1 + 152);
    }
    *(_QWORD*)&v8 = 0;
    (*(void (**)(__int64, long double, long double))(v11 + 24))(a1 + 152, v7,
                                                                v8);
    goto LABEL_18;
  }
  if (*(_BYTE*)(*(_QWORD*)(a1 + 440) + 16LL) != 0) {
    if (v5 == 3 && (_DWORD)v4 == 0) {
      goto LABEL_11;
    }
  }
  else if ((_DWORD)v4 == 3) {
    goto LABEL_11;
  }
  v21 = 0;
  v20 = v19;
  v12 = *(_QWORD*)(*GameData_212ce98[0] + 160) + (v4 << 7);
  v19[0] = GameData_1f94310;
  v19[1] = v12 + 8;
  v19[2] = &v21;
  GameRoutine_6c8a80(a1, a2, a3, v19);
  if (v20 == v19) {
    v13 = 32;
  }
  else {
    if (v20 == nullptr) {
      goto LABEL_29;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v20 + v13))((__int64)v20);
LABEL_29:
  v6 = *(_DWORD*)(a1 + 416);
  if (v21 == 1) {
    if ((v6 & 0x1000) != 0) {
      goto LABEL_12;
    }
  }
  else if ((v6 & 0x1000) == 0) {
    *(_DWORD*)(a1 + 416) = v6 | 0x1000;
  }
}

__int64 GameHr_6e9a40(__int64* a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 primeEm;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  bool v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  char* v27;
  char* v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  signed __int64 v42;
  bool v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  signed __int64 v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64* v59;
  __int64* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = 556000;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      556336, 16, 0);
  memset(v4, 0, 0x87D30u);
  v5 = v4;
  do {
    GameRoutine_6c2b50_alt1(v5);
    v3 -= 2224;
    v5 += 2224;
  } while (v3 != 0);
  *(_QWORD*)(v4 + 556256) = 0;
  *(_QWORD*)(v4 + 556264) = 0;
  *(_QWORD*)(v4 + 556240) = 0;
  *(_QWORD*)(v4 + 556248) = 0;
  *(_DWORD*)(v4 + 556272) = 1065353216;
  primeEm = std___1___next_prime(0xFAu);
  v7 = *(_QWORD*)(v4 + 556248);
  v8 = primeEm;
  if (primeEm > v7) {
    goto LABEL_4;
  }
  if (primeEm < v7) {
    v9 = vcvtps_u64_f32((float)*(unsigned __int64*)(v4 + 556264) /
                        *(float*)(v4 + 556272));
    if (v7 < 3 || (v7 & (v7 - 1)) != 0) {
      v9 = std___1___next_prime(v9);
    }
    else {
      v10 = 1LL << -(char)__clz(v9 - 1);
      if (v9 >= 2) {
        v9 = v10;
      }
    }
    if (v8 <= v9) {
      v8 = v9;
    }
    if (v8 < v7) {
    LABEL_4:
      GameRoutine_6ec7a0_alt1((__int64*)(v4 + 556240), v8);
    }
  }
  v11 = *v2;
  *(_QWORD*)(v4 + 556296) = 0;
  *(_QWORD*)(v4 + 556304) = 0;
  *(_QWORD*)(v4 + 556280) = 0;
  *(_QWORD*)(v4 + 556288) = 0;
  v12 = fw_memory_HeapManager_Allocate(v11, 2000, 16, 0);
  v13 = v12 + 2000;
  *(_QWORD*)(v4 + 556312) = v12;
  *(_QWORD*)(v4 + 556328) = v12 + 2000;
  memset(v12, 0, 0x7D0u);
  v14 = (__int64*)a1[2];
  v15 = (__int64*)a1[3];
  *(_QWORD*)(v4 + 556320) = v13;
  v16 = (char*)v15 - (char*)v14;
  if (v15 == v14) {
    v17 = 0;
  }
  else {
    v17 = (((char*)v15 - (char*)v14) << 6) - 1;
  }
  v18 = a1[5];
  if (v17 == a1[6] + v18) {
    v19 = v18 >= 0x200;
    v20 = v18 - 512;
    if (v19) {
      a1[5] = v20;
      v21 = *v14;
      a1[2] = (__int64)(v14 + 1);
    LABEL_22:
      GameRoutine_6eca40_alt1(a1 + 1, v21);
      goto LABEL_44;
    }
    v22 = a1[1];
    v23 = (__int64*)a1[4];
    if (v16 < (unsigned __int64)v23 - v22) {
      v24 = fw_memory_HeapManager_Allocate(*v2, 4096, 16, 0);
      if (v23 != v15) {
        *v15 = v24;
        a1[3] += 8;
        goto LABEL_44;
      }
      if (v14 != (__int64*)v22) {
        v30 = v14;
      LABEL_75:
        *(v30 - 1) = v24;
        v63 = a1[2];
        a1[2] = v63 - 8;
        v21 = *(_QWORD*)(v63 - 8);
        a1[2] = v63;
        goto LABEL_22;
      }
      if (v15 == v14) {
        v53 = 1;
      }
      else {
        v53 = ((char*)v23 - (char*)v14) >> 2;
      }
      if (v53 >> 61 == 0) {
        v54 = v24;
        v55 = fw_memory_HeapManager_Allocate(*v2, 8 * v53, 16, 0);
        v56 = v55 + 8 * v53;
        v57 = v55;
        v30 = (__int64*)(v55 + ((2 * v53 + 6) & 0xFFFFFFFFFFFFFFF8LL));
        v24 = v54;
        v58 = (__int64)v30;
        if (v15 != v14) {
          v58 = (__int64)v30 + v16;
          v59 = v30;
          v60 = v14;
          do {
            v61 = *v60++;
            v16 -= 8;
            *v59++ = v61;
          } while (v16 != 0);
        }
        a1[1] = v57;
        a1[2] = (__int64)v30;
        a1[3] = v58;
        a1[4] = v56;
        if (v14 != nullptr) {
          v62 = 128;
          if (*(_QWORD*)(*v2 + 200) == 0) {
            v62 = 56;
          }
          nn_mem_StandardAllocator_Free(*v2 + v62, v22);
          v30 = (__int64*)a1[2];
          v24 = v54;
        }
        goto LABEL_75;
      }
    LABEL_76:
      GameRoutine_60a210_alt1();
    }
    if (v23 == (__int64*)v22) {
      v25 = 1;
    }
    else {
      v25 = ((__int64)v23 - v22) >> 2;
    }
    if (v25 >> 61 != 0) {
      goto LABEL_76;
    }
    v26 = fw_memory_HeapManager_Allocate(*v2, 8 * v25, 16, 0);
    v27 = (char*)(v26 + v16);
    v28 = (char*)(v26 + 8 * v25);
    v29 = fw_memory_HeapManager_Allocate(*v2, 4096, 16, 0);
    if (v16 == 8 * v25) {
      if (v15 == v14) {
        v31 = v29;
        v27 = (char*)fw_memory_HeapManager_Allocate(*v2, 8, 16, 0);
        v28 = v27 + 8;
        v32 = 128;
        if (*(_QWORD*)(*v2 + 200) == 0) {
          v32 = 56;
        }
        nn_mem_StandardAllocator_Free(*v2 + v32, v26);
        v29 = v31;
        v14 = (__int64*)a1[2];
        v15 = (__int64*)a1[3];
        v26 = (__int64)v27;
      }
      else {
        v27 -= 8 *
               (((v16 >> 3) + 1 + ((unsigned __int64)((v16 >> 3) + 1) >> 63)) >>
                1);
      }
    }
    *(_QWORD*)v27 = v29;
    v33 = v27 + 8;
    if (v15 != v14) {
      while (1) {
        if (v27 == (char*)v26) {
          if (v33 >= v28) {
            if (v28 == v27) {
              v45 = 1;
            }
            else {
              v45 = (v28 - v27) >> 2;
            }
            if (v45 >> 61 != 0) {
              goto LABEL_76;
            }
            v46 = fw_memory_HeapManager_Allocate(*v2, 8 * v45, 16, 0);
            v47 = v46;
            v40 = (char*)(v46 + ((2 * v45 + 6) & 0xFFFFFFFFFFFFFFF8LL));
            v48 = v33 - v27;
            v43 = v33 == v27;
            v33 = v40;
            if (!v43) {
              v33 = &v40[v48];
              v49 = (_QWORD*)(v46 + ((2 * v45 + 6) & 0xFFFFFFFFFFFFFFF8LL));
              do {
                v50 = *(_QWORD*)v27;
                v27 += 8;
                v48 -= 8LL;
                *v49++ = v50;
              } while (v48 != 0);
            }
            v28 = (char*)(v46 + 8 * v45);
            v51 = 128;
            if (*(_QWORD*)(*v2 + 200) == 0) {
              v51 = 56;
            }
            nn_mem_StandardAllocator_Free(*v2 + v51, v26);
            v26 = v47;
          }
          else {
            v42 = v33 - v27;
            v44 = v33 - v27;
            v43 = v33 == v27;
            v33 += 8 * ((((v28 - v33) >> 3) + 1 +
                         ((unsigned __int64)(((v28 - v33) >> 3) + 1) >> 63)) >>
                        1);
            v40 = &v33[-v42];
            if (!v43) {
              memmove((__int64)&v33[-v42], (__int64)v27, v44);
            }
          }
        }
        else {
          v40 = v27;
        }
        v41 = *--v15;
        *((_QWORD*)v40 - 1) = v41;
        v34 = v40 - 8;
        v27 = v34;
        if (v15 == (__int64*)a1[2]) {
          goto LABEL_40;
        }
      }
    }
    v34 = v27;
  LABEL_40:
    v35 = a1[1];
    a1[1] = v26;
    a1[2] = (__int64)v34;
    a1[3] = (__int64)v33;
    a1[4] = (__int64)v28;
    if (v35 != 0) {
      v36 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v36, v35);
    }
  }
LABEL_44:
  v37 = a1[6] + a1[5];
  *(_QWORD*)(*(_QWORD*)(a1[2] + 8 * (v37 >> 9)) + 8 * (v37 & 0x1FF)) = v4;
  v38 = a1[6];
  a1[6] = v38 + 1;
  if (v38 == -1) {
    v39 = 0;
  }
  else {
    v39 = *(_QWORD*)(*(_QWORD*)(a1[2] +
                                8 * ((unsigned __int64)(a1[5] + v38) >> 9)) +
                     8 * ((a1[5] + v38) & 0x1FF));
  }
  a1[7] = v39;
  return GameRoutine_6e9fa0_alt1(v39);
}

unsigned __int64 GameHr_6ec020(unsigned __int64 result)
{
  unsigned __int64 v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64* v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  int v19;
  int v20;
  unsigned __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64* v35;
  int v36;
  int v37;
  unsigned __int64* v38;
  __int64 v39;
  unsigned __int64 v40;
  _QWORD* v41;
  unsigned __int64 v42;
  unsigned __int64 v44;
  __int64 v45;
  __int64*** v46;
  __int64** v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64* v50;
  unsigned __int64* v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  float v56;
  float v57;
  float v58;
  _BOOL8 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64* v65;
  unsigned __int64 v66;
  unsigned __int64 v67;

  v1 = result + 552960;
  v2 = (_QWORD*)result;
  v3 = GameData_212bf68;
  if (*(_QWORD*)(result + 556264) != 0) {
    v4 = *(_QWORD**)(result + 556256);
    if (v4 != nullptr) {
      do {
        v5 = (_QWORD*)*v4;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)v3 + v6, v4);
        v4 = v5;
      } while (v5 != nullptr);
    }
    v7 = *(_QWORD*)(v1 + 3288);
    *(_QWORD*)(v1 + 3296) = 0;
    if (v7 != 0) {
      v8 = v7 & 7;
      if (v7 >= 8) {
        v10 = v7 & 0xFFFFFFFFFFFFFFF8LL;
        v9 = 0;
        do {
          *(_QWORD*)(v2[69530] + 8 * v9) = 0;
          *(_QWORD*)(v2[69530] + 8 * v9 + 8) = 0;
          *(_QWORD*)(v2[69530] + 8 * v9 + 16) = 0;
          *(_QWORD*)(v2[69530] + 8 * v9 + 24) = 0;
          *(_QWORD*)(v2[69530] + 8 * v9 + 32) = 0;
          *(_QWORD*)(v2[69530] + 8 * v9 + 40) = 0;
          *(_QWORD*)(v2[69530] + 8 * v9 + 48) = 0;
          v11 = v2[69530] + 8 * v9;
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
          *(_QWORD*)(v2[69530] + v12) = 0;
          v12 += 8;
        } while (v8 != 0);
      }
    }
    *(_QWORD*)(v1 + 3304) = 0;
  }
  v13 = *(unsigned __int64**)(v1 + 3352);
  v14 = 250;
  v15 = (unsigned __int64)v2;
  v16 = v2 + 69535;
  v2[69537] = 0;
  v2[69538] = 0;
  v2[69535] = 0;
  v2[69536] = 0;
  *(_QWORD*)(v1 + 3360) = v13;
  do {
    if (*(_QWORD*)(v15 + 392) != 0) {
      v17 = *(unsigned __int8*)(v15 + 2088);
      if (*(_BYTE*)(v15 + 2088) != 0) {
        v18 = v17 >> 5;
        v19 = *((_DWORD*)v16 + (v17 >> 5));
        v20 = 1 << v17;
        if ((v19 & v20) == 0) {
          *((_DWORD*)v16 + v18) = v19 | v20;
        }
        goto LABEL_18;
      }
      v28 = *(_QWORD*)(v1 + 3368);
      if ((unsigned __int64)v13 < v28) {
      LABEL_17:
        *v13++ = v15;
        *(_QWORD*)(v1 + 3360) = v13;
        goto LABEL_18;
      }
      v22 = *(_QWORD*)(v1 + 3352);
      v23 = (char*)v13 - v22;
      v24 = ((__int64)v13 - v22) >> 3;
      v29 = v24 + 1;
      if ((unsigned __int64)(v24 + 1) >> 61 != 0) {
      LABEL_146:
        GameRoutine_6c1f60();
      }
      v30 = v28 - v22;
      if (v30 >> 2 > v29) {
        v29 = v30 >> 2;
      }
      if ((unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFF8LL) {
        v27 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v27 = v29;
      }
      if (v27 == 0) {
      LABEL_43:
        v31 = 0;
        goto LABEL_44;
      }
      if (v27 >> 61 != 0) {
      LABEL_147:
        GameRoutine_60a210(result);
      }
    }
    else {
      v21 = *(_QWORD*)(v1 + 3368);
      if ((unsigned __int64)v13 < v21) {
        goto LABEL_17;
      }
      v22 = *(_QWORD*)(v1 + 3352);
      v23 = (char*)v13 - v22;
      v24 = ((__int64)v13 - v22) >> 3;
      v25 = v24 + 1;
      if ((unsigned __int64)(v24 + 1) >> 61 != 0) {
        goto LABEL_146;
      }
      v26 = v21 - v22;
      if (v26 >> 2 > v25) {
        v25 = v26 >> 2;
      }
      if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFF8LL) {
        v27 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v27 = v25;
      }
      if (v27 == 0) {
        goto LABEL_43;
      }
      if (v27 >> 61 != 0) {
        goto LABEL_147;
      }
    }
    v31 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v27, 16, 0);
  LABEL_44:
    v32 = v31 + 8 * v27;
    v33 = (__int64)&v23[v31 + -8 * v24];
    *(_QWORD*)&v23[v31] = v15;
    v13 = (unsigned __int64*)&v23[v31 + 8];
    result = GameRoutine_1a0b950(v33, v22, v23);
    *(_QWORD*)(v1 + 3352) = v33;
    *(_QWORD*)(v1 + 3360) = v13;
    *(_QWORD*)(v1 + 3368) = v32;
    if (v22 != 0) {
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v34 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v34, v22);
    }
    *(_QWORD*)(v1 + 3360) = v13;
  LABEL_18:
    --v14;
    v15 += 2224LL;
  } while (v14 != 0);
  v35 = *(unsigned __int64**)(v1 + 3352);
  if (v35 != v13) {
    v36 = 1;
    do {
      if (v36 <= 255) {
        v37 = v36;
        while (((1 << v37) & *((_DWORD*)v16 + (v37 >> 5))) != 0) {
          if (++v37 == 256) {
            goto LABEL_51;
          }
        }
        if (v37 != 0) {
          *(_BYTE*)(*v35 + 2088) = v37;
          *((_DWORD*)v16 + ((__int64)v37 >> 5)) |= 1 << v37;
          v36 = v37;
        }
      }
    LABEL_51:
      ++v35;
    } while (v35 != v13);
  }
  v38 = (unsigned __int64*)(v1 + 3296);
  v39 = 0;
  while (2) {
    v40 = *(_QWORD*)(v1 + 3288);
    v41 = &v2[278 * v39];
    v42 = *((unsigned __int8*)v41 + 2088);
    if (v40 == 0 || *(_QWORD*)(v1 + 3304) == 0) {
    LABEL_65:
      if (v40 != 0) {
        goto LABEL_82;
      }
    }
    else {
      v44 = v40 - 1;
      if ((v40 & (v40 - 1)) != 0) {
        v45 = *((unsigned __int8*)v41 + 2088);
        if (v40 <= v42) {
          v45 = (unsigned int)v42 % (unsigned int)v40;
        }
      }
      else {
        v45 = ((_DWORD)v40 - 1) & (unsigned int)v42;
      }
      v46 = *(__int64****)(v2[69530] + 8 * v45);
      if (v46 != nullptr) {
        v47 = *v46;
        if (v47 != nullptr) {
          if ((v40 & v44) == 0) {
            while (1) {
              v50 = v47[1];
              if (v50 == (__int64*)v42) {
                if (*((unsigned __int8*)v47 + 16) == (_DWORD)v42) {
                  goto LABEL_144;
                }
              }
              else if (((unsigned __int64)v50 & v44) != v45) {
                goto LABEL_65;
              }
              v47 = (__int64**)*v47;
              if (v47 == nullptr) {
                goto LABEL_65;
              }
            }
          }
          while (1) {
            v48 = (unsigned __int64)v47[1];
            if (v48 == v42) {
              if (*((unsigned __int8*)v47 + 16) == (_DWORD)v42) {
                goto LABEL_144;
              }
            }
            else {
              if (v48 >= v40) {
                v48 %= v40;
              }
              if (v48 != v45) {
                goto LABEL_65;
              }
            }
            v47 = (__int64**)*v47;
            if (v47 == nullptr) {
              goto LABEL_65;
            }
          }
        }
      }
    LABEL_82:
      v49 = v40 - 1;
      if ((v40 & (v40 - 1)) != 0) {
        v15 = *((unsigned __int8*)v41 + 2088);
        if (v40 <= v42) {
          v15 = (unsigned int)v42 % (unsigned int)v40;
        }
      }
      else {
        v15 = ((_DWORD)v40 - 1) & (unsigned int)v42;
      }
      v51 = *(unsigned __int64**)(v2[69530] + 8 * v15);
      if (v51 != nullptr) {
        v52 = *v51;
        if (*v51 != 0) {
          if ((v40 & v49) == 0) {
            while (1) {
              v54 = *(_QWORD*)(v52 + 8);
              if (v54 == v42) {
                if (*(unsigned __int8*)(v52 + 16) == (_DWORD)v42) {
                  goto LABEL_143;
                }
              }
              else if ((v54 & v49) != v15) {
                goto LABEL_106;
              }
              v52 = *(_QWORD*)v52;
              if (v52 == 0) {
                goto LABEL_106;
              }
            }
          }
          do {
            v53 = *(_QWORD*)(v52 + 8);
            if (v53 == v42) {
              if (*(unsigned __int8*)(v52 + 16) == (_DWORD)v42) {
                goto LABEL_143;
              }
            }
            else {
              if (v53 >= v40) {
                v53 %= v40;
              }
              if (v53 != v15) {
                break;
              }
            }
            v52 = *(_QWORD*)v52;
          } while (v52 != 0);
        }
      }
    }
  LABEL_106:
    result = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 32, 16, 0);
    v55 = *(_QWORD*)(v1 + 3304);
    v56 = *(float*)(v1 + 3312);
    v52 = result;
    *(_QWORD*)result = 0;
    *(_QWORD*)(result + 8) = v42;
    *(_BYTE*)(result + 16) = v42;
    *(_QWORD*)(result + 24) = 0;
    v57 = (float)(unsigned __int64)(v55 + 1);
    if (v40 == 0 || (float)(v56 * (float)v40) < v57) {
      v58 = v57 / v56;
      v59 = (v40 & (v40 - 1)) != 0;
      if (v40 < 3) {
        v59 = true;
      }
      v60 = v59 | (2 * v40);
      v61 = vcvtps_u64_f32(v58);
      if (v60 <= v61) {
        v62 = v61;
      }
      else {
        v62 = v60;
      }
      if (v62 == 1) {
        v62 = 2;
      }
      else if ((v62 & (v62 - 1)) != 0) {
        result = GameRoutine_1a09d00(v62);
        v40 = *(_QWORD*)(v1 + 3288);
        v62 = result;
      }
      if (v62 > v40) {
        goto LABEL_118;
      }
      if (v62 < v40) {
        result = vcvtps_u64_f32((float)*(unsigned __int64*)(v1 + 3304) /
                                *(float*)(v1 + 3312));
        if (v40 < 3 || (v40 & (v40 - 1)) != 0) {
          result = GameRoutine_1a09d00(result);
        }
        else {
          v63 = 1LL << -(char)__clz(result - 1);
          if (result >= 2) {
            result = v63;
          }
        }
        if (v62 <= result) {
          v62 = result;
        }
        if (v62 < v40) {
        LABEL_118:
          result = GameRoutine_6ec7a0(v2 + 69530, v62);
        }
      }
      v40 = *(_QWORD*)(v1 + 3288);
      if ((v40 & (v40 - 1)) != 0) {
        if (v40 <= v42) {
          v15 = v42 % v40;
        }
        else {
          v15 = v42;
        }
      }
      else {
        v15 = ((_DWORD)v40 - 1) & (unsigned int)v42;
      }
    }
    v64 = v2[69530];
    v65 = *(unsigned __int64**)(v64 + 8 * v15);
    if (v65 != nullptr) {
      *(_QWORD*)v52 = *v65;
      *v65 = v52;
    }
    else {
      v66 = *v38;
      *v38 = v52;
      *(_QWORD*)v52 = v66;
      *(_QWORD*)(v64 + 8 * v15) = v38;
      if (*(_QWORD*)v52 != 0) {
        v67 = *(_QWORD*)(*(_QWORD*)v52 + 8LL);
        if ((v40 & (v40 - 1)) != 0) {
          if (v67 >= v40) {
            v67 %= v40;
          }
        }
        else {
          v67 &= v40 - 1;
        }
        *(_QWORD*)(v2[69530] + 8 * v67) = v52;
      }
    }
    ++*(_QWORD*)(v1 + 3304);
  LABEL_143:
    *(_QWORD*)(v52 + 24) = v41;
  LABEL_144:
    if (++v39 != 250) {
      continue;
    }
    return result;
  }
}

_QWORD* GameHr_703310(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;

  result = (_QWORD*)a1[4];
  if (result == a1) {
    v3 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v3 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v3))((__int64)result);
}

__int64 GameHr_717e30(char a1)
{
  __int64 result;
  __int64 v3;
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
  _QWORD v15[4];
  _QWORD* v16;

  result = GameRoutine_890160(&GameData_1ad653b);
  if (result != 0) {
    v3 = **(_QWORD**)(result + 24);
    if (v3 != 0) {
      v5 = **(_QWORD**)(v3 + 40);
      v4 = *(_QWORD*)(*(_QWORD*)(v3 + 40) + 8LL);
      if ((int)((unsigned __int64)(v4 - v5) >> 3) >= 1) {
        v6 = *(_QWORD*)(v4 - 8);
        if (v6 != 0) {
          v7 = GameData_21caab0;
          v16 = v15;
          *(_DWORD*)(GameData_21caab0 + 60) = 2;
          v15[0] = GameData_1f93458;
          v15[1] = v7;
          GameRoutine_7f8cc0(2, v15);
          if (v16 == v15) {
            v8 = 32;
          }
          else {
            if (v16 == nullptr) {
              goto LABEL_10;
            }
            v8 = 40;
          }
          (*(void (**)(__int64))(*v16 + v8))((__int64)v16);
        LABEL_10:
          GameRoutine_71f220(v7);
          v9 = GameData_21caab0;
          *(_BYTE*)(GameData_21caab0 + 15) = a1;
          GameRoutine_715600(v9);
          v10 = GameData_21caab0;
          v11 = (unsigned int)*(char*)(v6 + 89);
          v16 = v15;
          *(_DWORD*)(GameData_21caab0 + 64) = v11;
          v15[0] = GameData_1f934e8;
          v15[1] = v10;
          GameRoutine_7f8fd0(v11, v15);
          if (v16 == v15) {
            v12 = 32;
          }
          else {
            if (v16 == nullptr) {
            LABEL_15:
              GameRoutine_71f220(v10);
              v13 = GameData_21caab0;
              v14 = *(_QWORD*)(v6 + 24) + 96LL;
              *(_BYTE*)(*(_QWORD*)(GameData_21caab0 + 48) + 3932768LL) |= 8u;
              result = GameRoutine_82ce80(*(_QWORD*)(v13 + 48), v14);
              *(_BYTE*)(*(_QWORD*)(v13 + 48) + 3932768LL) &= ~8u;
              return result;
            }
            v12 = 40;
          }
          (*(void (**)(__int64))(*v16 + v12))((__int64)v16);
          goto LABEL_15;
        }
      }
    }
  }
  return result;
}

__int64 GameHr_718440()
{
  __int64 v0;
  __int64 i;
  __int64 v2;
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
  __int64 v15;
  __int64 v16;
  __int64 j;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* k;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 ProgramTotalActiveTimeEv;
  __int64 result;
  _QWORD v30[4];
  _QWORD* v31;

  GameRoutine_6ea140();
  if (GameData_21caab0 != 0) {
    *(_DWORD*)(GameData_21caab0 + 72) = 0;
  }
  GameRoutine_715ca0(0);
  if (GameData_21caab0 != 0) {
    *(_DWORD*)(GameData_21caab0 + 84) = 0;
  }
  GameRoutine_89b540(*(_QWORD*)(GameData_21f1780 + 8));
  GameRoutine_93bb80(*(_QWORD*)(GameData_21f42d0 + 8));
  v0 = *(_QWORD*)(GameData_21f4280 + 8);
  for (i = -2400; i != 0; i += 160) {
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2400) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2408) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2416) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2424) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2432) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2440) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2448) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2456) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2464) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2472) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2480) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2488) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2496) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2504) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2512) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2520) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2528) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2536) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2544) = 0;
    v2 = *(_QWORD*)(v0 + 48) + i;
    *(_QWORD*)(v2 + 2552) = 0;
  }
  if (*(_QWORD*)(v0 + 32) != 0) {
    v3 = *(_QWORD**)(v0 + 24);
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
        GameRoutine_1a0a4e0(*(_QWORD*)v4 + v6, v3);
        v3 = v5;
      } while (v5 != nullptr);
    }
    v7 = *(_QWORD*)(v0 + 16);
    *(_QWORD*)(v0 + 24) = 0;
    if (v7 != 0) {
      v8 = v7 & 7;
      if (v7 >= 8) {
        v10 = v7 & 0xFFFFFFFFFFFFFFF8LL;
        v9 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v0 + 8) + 8 * v9) = 0;
          *(_QWORD*)(*(_QWORD*)(v0 + 8) + 8 * v9 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v0 + 8) + 8 * v9 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v0 + 8) + 8 * v9 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v0 + 8) + 8 * v9 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v0 + 8) + 8 * v9 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v0 + 8) + 8 * v9 + 48) = 0;
          v11 = *(_QWORD*)(v0 + 8) + 8 * v9;
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
          *(_QWORD*)(*(_QWORD*)(v0 + 8) + v12) = 0;
          v12 += 8;
        } while (v8 != 0);
      }
    }
    *(_QWORD*)(v0 + 32) = 0;
  }
  *(_DWORD*)(v0 + 72) = 0;
  v13 = GameData_21caab0;
  v31 = v30;
  v30[0] = GameData_1f9fd40;
  v30[1] = GameData_21caab0 + 40;
  GameRoutine_827530(v30);
  if (v31 == v30) {
    v14 = 32;
  }
  else {
    if (v31 == nullptr) {
      goto LABEL_28;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*v31 + v14))((__int64)v31);
LABEL_28:
  GameRoutine_829ca0(*(_QWORD*)(v13 + 48));
  v15 = *(_QWORD*)(GameData_21caab0 + 160);
  v16 = *(_QWORD*)(v15 + 8);
  for (j = *(_QWORD*)(v15 + 16); v16 != j; v16 += 32) {
    *(_DWORD*)(v16 + 4) = 0;
    *(_BYTE*)(v16 + 8) = 0;
  }
  v18 = GameRoutine_90d5a0();
  if (GameData_21c9700 != 0) {
    v19 = *(_QWORD*)(GameData_21c9700 + 8);
    v20 = *(__int64**)(v19 + 48);
    for (k = *(__int64**)(v19 + 56); v20 != k; *(_BYTE*)(v22 + 116) = 0) {
      v22 = *v20;
      if (*(_BYTE*)(*v20 + 176) != 1) {
        *(_BYTE*)(v22 + 176) = 1;
      }
      v23 = *(_QWORD*)(v22 + 120);
      *(_BYTE*)(v22 + 178) = 0;
      if (v23 != 0) {
        GameRoutine_1329500(v30, v22, 0, 1);
      }
      v18 = *(_QWORD*)(v22 + 280);
      if (v18 != 0) {
        v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
        *(_QWORD*)(v22 + 280) = 0;
      }
      ++v20;
    }
  }
  if (GameData_2241428 != 0) {
    *(_QWORD*)(GameData_2241428 + 16) = *(_QWORD*)(GameData_2241428 + 8);
  }
  if (GameData_21c96e8 != 0) {
    v30[0] = GameData_202d0c8;
    v31 = v30;
    GameRoutine_13460a0(v30);
    v18 = (__int64)v31;
    if (v31 == v30) {
      v24 = 32;
    }
    else {
      if (v31 == nullptr) {
        goto LABEL_48;
      }
      v24 = 40;
    }
    v18 = (*(__int64 (**)(__int64))(*v31 + v24))((__int64)v31);
  }
LABEL_48:
  GameRoutine_9728b0(v18);
  v25 = GameData_21c96e8;
  if (GameData_21c96e8 != 0) {
    v26 = *(_QWORD*)(GameData_21c96e8 + 8);
    *(_DWORD*)(v26 + 56) = -1;
    *(_QWORD*)(v26 + 40) = *(_QWORD*)(v26 + 32);
  }
  (*(void (**)(_QWORD))(**(_QWORD**)(v25 + 8) + 40LL))(*(_QWORD*)(v25 + 8));
  v27 = GameRoutine_db7ba0(GameData_21c9608);
  if (GameData_21caab0 != 0) {
    *(_BYTE*)(GameData_21caab0 + 14) = *(_BYTE*)(GameData_21caab0 + 13);
  }
  ProgramTotalActiveTimeEv = GameRoutine_1a0a6f0(v27);
  GameData_21d8818 = GameRoutine_1a0a700(ProgramTotalActiveTimeEv);
  GameData_21d8820 = 0;
  GameData_21d8810 = 0;
  result = GameRoutine_1a0a700(0);
  GameData_21d8820 = result;
  return result;
}

__int64 GameHr_71e5c0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 i;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  int v13;
  _BOOL4 v14;
  _BOOL4 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v19[4];
  _QWORD* v20;
  int v21;

  v2 = *(unsigned int*)(a1 + 60);
  v19[0] = GameData_1f93458;
  v19[1] = a1;
  v20 = v19;
  GameRoutine_7f8cc0(v2, v19);
  if (v20 == v19) {
    v3 = 32;
  }
  else {
    if (v20 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v20 + v3))((__int64)v20);
LABEL_6:
  GameRoutine_71f220(a1);
  GameRoutine_715600(a1);
  v4 = *(unsigned int*)(a1 + 64);
  v19[0] = GameData_1f934e8;
  v19[1] = a1;
  v20 = v19;
  GameRoutine_7f8fd0(v4, v19);
  if (v20 == v19) {
    v5 = 32;
  }
  else {
    if (v20 == nullptr) {
      goto LABEL_11;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v20 + v5))((__int64)v20);
LABEL_11:
  GameRoutine_71f220(a1);
  v6 = GameRoutine_682780(9);
  if (v6 == 0) {
    goto LABEL_21;
  }
  for (i = v6; i != 0; i = *(_QWORD*)(i + 624)) {
    v8 = i;
  }
  if (*(_BYTE*)(v8 + 441) != 3) {
    goto LABEL_21;
  }
  v9 = *(_QWORD*)(v6 + 624);
  if (v9 == 0) {
    v9 = v6;
  }
  v19[0] = v9;
  v21 = 241;
  v10 = GameRoutine_6ead60(v19, &v21);
  if (v10 != 0) {
    v11 = (__int64*)(v10 + 2104);
    goto LABEL_22;
  }
  v12 = *(_QWORD*)(GameData_21caab0 + 176);
  if (*(_BYTE*)(v12 + 144) != 0) {
    v11 = (__int64*)(v12 + 112);
  }
  else {
  LABEL_21:
    v11 = &GameData_21f49b8;
  }
LABEL_22:
  v13 = *((unsigned __int8*)v11 + 32);
  v14 = v13 == 1;
  v15 = v13 != 1 && v13 == 2;
  v16 = GameRoutine_9a28e0(7);
  GameRoutine_716d80(v16, v14);
  v17 = GameRoutine_9a28e0(8);
  return GameRoutine_716d80(v17, v15);
}

__int64 GameHr_724ec0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int16 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;

  v1 = result;
  if (GameData_21eea58 != 0 && (*(_BYTE*)(GameData_21eea58 + 32) & 1) != 0) {
    return result;
  }
  result = GameData_21ca2f8;
  if (GameData_21ca2f8 == 0) {
    return result;
  }
  result = GameRoutine_765b20();
  if (GameData_21caab0 == 0) {
    return result;
  }
  result =
      GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &GameData_21d1e50);
  if (result == 0 || *(_DWORD*)(result + 32) == 0) {
    if (GameData_21caab0 == 0) {
      return result;
    }
    result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                &GameData_21d1e50);
    if (result != 0 && *(_DWORD*)(result + 32) != 0) {
      goto LABEL_29;
    }
    if (GameData_21caab0 == 0) {
      return result;
    }
    result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                &GameData_21d1e40);
    if (result == 0 || *(_DWORD*)(result + 32) == 0) {
      goto LABEL_29;
    }
    if (GameData_21caab0 == 0) {
      return result;
    }
    result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                &GameData_21d1e60);
    if (result != 0 && *(_DWORD*)(result + 32) != 0) {
      v2 = GameData_21cd0c8;
      if (GameData_21cd0c8 == 0) {
        goto LABEL_35;
      }
      v3 = 15;
    }
    else {
    LABEL_29:
      if (GameData_21caab0 == 0) {
        return result;
      }
      result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                  &GameData_21d1e50);
      if (result != 0 && *(_DWORD*)(result + 32) != 0) {
        return result;
      }
      if (GameData_21caab0 == 0) {
        return result;
      }
      result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                  &GameData_21d1e40);
      if (result == 0 || *(_DWORD*)(result + 32) == 0) {
        return result;
      }
      v2 = GameData_21cd0c8;
      if (GameData_21cd0c8 == 0) {
        goto LABEL_35;
      }
      v3 = 11;
    }
    goto LABEL_34;
  }
  if (GameData_21caab0 == 0) {
    v2 = GameData_21cd0c8;
    if (GameData_21cd0c8 == 0) {
      goto LABEL_35;
    }
    v3 = 12;
    goto LABEL_34;
  }
  v2 = GameData_21cd0c8;
  if ((*(_DWORD*)(GameData_21caab0 + 92) & 0x100) != 0) {
    v3 = 16;
  }
  else {
    v3 = 12;
  }
  if (GameData_21cd0c8 != 0) {
  LABEL_34:
    *(_DWORD*)(v2 + 152) = v3;
  }
LABEL_35:
  v4 = *(_DWORD*)(v1 + 152);
  if (v4 != 0) {
    v5 = *(_QWORD*)(v1 + 192);
    if (v5 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 48LL))(v5);
      v4 = *(_DWORD*)(v1 + 152);
    }
    v6 = *(_QWORD*)(v1 + 8);
    if (v6 != 0) {
      while (1) {
        if (*(_BYTE*)v6 == 2) {
          if (*(_DWORD*)(v6 + 32) == v4) {
            v7 = *(_WORD*)(v1 + 136);
            *(_QWORD*)(v1 + 16) = v6;
            *(_WORD*)(v1 + 136) = v7 & 0xFF7F;
            break;
          }
        }
        else if (*(_BYTE*)v6 == 0) {
          break;
        }
        v6 += 64;
      }
    }
  }
  v8 = *(_DWORD*)(v1 + 156);
  if (v8 != 0) {
    v9 = *(_QWORD*)(v1 + 96);
    v10 = *(_QWORD*)(v1 + 104);
    v11 = ((v10 - v9) << 6) - 1;
    if (v10 == v9) {
      v11 = 0;
    }
    v12 = *(_QWORD*)(v1 + 128) + *(_QWORD*)(v1 + 120);
    if (v11 == v12) {
      GameRoutine_658d60(v1 + 88);
      v9 = *(_QWORD*)(v1 + 96);
      v12 = *(_QWORD*)(v1 + 128) + *(_QWORD*)(v1 + 120);
    }
    *(_QWORD*)(*(_QWORD*)(v9 + 8 * (v12 >> 9)) + 8 * (v12 & 0x1FF)) =
        *(_QWORD*)(v1 + 16);
    ++*(_QWORD*)(v1 + 128);
    v13 = *(_QWORD*)(v1 + 8);
    if (v13 != 0) {
      while (1) {
        if (*(_BYTE*)v13 == 2) {
          if (*(_DWORD*)(v13 + 32) == v8) {
            *(_QWORD*)(v1 + 16) = v13;
            *(_WORD*)(v1 + 136) &= ~0x80u;
            break;
          }
        }
        else if (*(_BYTE*)v13 == 0) {
          break;
        }
        v13 += 64;
      }
    }
  }
  result = *(_QWORD*)(v1 + 192);
  *(_QWORD*)(v1 + 152) = 0;
  *(_QWORD*)(v1 + 192) = 0;
  if (result == v1 + 160) {
    v14 = 32;
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + v14))((__int64)result);
  }
  if (result != 0) {
    v14 = 40;
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + v14))((__int64)result);
  }
  return result;
}

_QWORD* GameHr_725800(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  _QWORD* result;
  __int64 v8;
  __int64 v9;
  int v10;

  v2 = GameData_212ce90[0];
  v3 = *GameData_212ce90[0];
  v4 = *(unsigned __int8*)(*GameData_212ce90[0] + 24);
  if (*(_BYTE*)(*GameData_212ce90[0] + v4 + 16) != 0) {
    if (*(_BYTE*)(*GameData_212ce90[0] + v4 + 16) == 1) {
      goto LABEL_3;
    }
    v10 = 1 << v4;
    if ((unsigned int)GameRoutine_6c1d00(&v10) != 0) {
      v3 = *v2;
      v6 = *(unsigned __int8*)(*v2 + *(unsigned __int8*)(*v2 + 24) + 16);
      if (v6 == 2) {
        v5 = 5;
        goto LABEL_10;
      }
      if (v6 == 1) {
      LABEL_3:
        if (*(_BYTE*)(v3 + 25) != 0) {
          v5 = 5;
        }
        else {
          v5 = 4;
        }
      LABEL_10:
        result = *(_QWORD**)(a1 + 192);
        *(_QWORD*)(a1 + 152) = 0;
        *(_QWORD*)(a1 + 192) = 0;
        if (result == (_QWORD*)(a1 + 160)) {
          v8 = 32;
        }
        else {
          if (result == nullptr) {
            goto LABEL_15;
          }
          v8 = 40;
        }
        result =
            (_QWORD*)(*(__int64 (**)(__int64))(*result + v8))((__int64)result);
      LABEL_15:
        v9 = *(_QWORD*)(a1 + 8);
        if (v9 != 0) {
          while (1) {
            if (*(_BYTE*)v9 == 2) {
              if (*(_DWORD*)(v9 + 32) == v5) {
                *(_QWORD*)(a1 + 16) = v9;
                *(_WORD*)(a1 + 136) &= ~0x80u;
                return result;
              }
            }
            else if (*(_BYTE*)v9 == 0) {
              return result;
            }
            v9 += 64;
          }
        }
        return result;
      }
    }
  }
  v5 = 9;
  goto LABEL_10;
}

__int64 GameHr_725dc0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int16 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;

  result = *GameData_212ce90[0];
  if (*GameData_212ce90[0] == 0) {
    return result;
  }
  result = GameRoutine_765b20();
  if (GameData_21caab0 == 0) {
    return result;
  }
  result =
      GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &GameData_21d1e50);
  if (result != 0 && *(_DWORD*)(result + 32) != 0) {
    if (GameData_21caab0 != 0) {
      v3 = GameData_21cd0c8;
      if ((*(_DWORD*)(GameData_21caab0 + 92) & 0x100) != 0) {
        v4 = 16;
      }
      else {
        v4 = 12;
      }
      if (GameData_21cd0c8 == 0) {
        goto LABEL_33;
      }
    }
    else {
      v3 = GameData_21cd0c8;
      if (GameData_21cd0c8 == 0) {
        goto LABEL_33;
      }
      v4 = 12;
    }
  LABEL_32:
    *(_DWORD*)(v3 + 152) = v4;
    goto LABEL_33;
  }
  if (GameData_21caab0 == 0) {
    return result;
  }
  result =
      GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &GameData_21d1e50);
  if (result == 0 || *(_DWORD*)(result + 32) == 0) {
    if (GameData_21caab0 == 0) {
      return result;
    }
    result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                &GameData_21d1e40);
    if (result != 0 && *(_DWORD*)(result + 32) != 0) {
      if (GameData_21caab0 == 0) {
        return result;
      }
      result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                  &GameData_21d1e60);
      if (result != 0 && *(_DWORD*)(result + 32) != 0) {
        v3 = GameData_21cd0c8;
        if (GameData_21cd0c8 == 0) {
          goto LABEL_33;
        }
        v4 = 15;
        goto LABEL_32;
      }
    }
  }
  if (GameData_21caab0 == 0) {
    return result;
  }
  result =
      GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &GameData_21d1e50);
  if (result != 0 && *(_DWORD*)(result + 32) != 0) {
    return result;
  }
  if (GameData_21caab0 == 0) {
    return result;
  }
  result =
      GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &GameData_21d1e40);
  if (result == 0 || *(_DWORD*)(result + 32) == 0) {
    return result;
  }
  v3 = GameData_21cd0c8;
  if (GameData_21cd0c8 != 0) {
    v4 = 11;
    goto LABEL_32;
  }
LABEL_33:
  v5 = *(_DWORD*)(a1 + 152);
  if (v5 != 0) {
    v6 = *(_QWORD*)(a1 + 192);
    if (v6 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 48LL))(v6);
      v5 = *(_DWORD*)(a1 + 152);
    }
    v7 = *(_QWORD*)(a1 + 8);
    if (v7 != 0) {
      while (1) {
        if (*(_BYTE*)v7 == 2) {
          if (*(_DWORD*)(v7 + 32) == v5) {
            v8 = *(_WORD*)(a1 + 136);
            *(_QWORD*)(a1 + 16) = v7;
            *(_WORD*)(a1 + 136) = v8 & 0xFF7F;
            break;
          }
        }
        else if (*(_BYTE*)v7 == 0) {
          break;
        }
        v7 += 64;
      }
    }
  }
  v9 = *(_DWORD*)(a1 + 156);
  if (v9 != 0) {
    v10 = *(_QWORD*)(a1 + 96);
    v11 = *(_QWORD*)(a1 + 104);
    v12 = ((v11 - v10) << 6) - 1;
    if (v11 == v10) {
      v12 = 0;
    }
    v13 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
    if (v12 == v13) {
      GameRoutine_658d60(a1 + 88);
      v10 = *(_QWORD*)(a1 + 96);
      v13 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
    }
    *(_QWORD*)(*(_QWORD*)(v10 + 8 * (v13 >> 9)) + 8 * (v13 & 0x1FF)) =
        *(_QWORD*)(a1 + 16);
    ++*(_QWORD*)(a1 + 128);
    v14 = *(_QWORD*)(a1 + 8);
    if (v14 != 0) {
      while (1) {
        if (*(_BYTE*)v14 == 2) {
          if (*(_DWORD*)(v14 + 32) == v9) {
            *(_QWORD*)(a1 + 16) = v14;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            break;
          }
        }
        else if (*(_BYTE*)v14 == 0) {
          break;
        }
        v14 += 64;
      }
    }
  }
  result = *(_QWORD*)(a1 + 192);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (result == a1 + 160) {
    v15 = 32;
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + v15))((__int64)result);
  }
  if (result != 0) {
    v15 = 40;
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + v15))((__int64)result);
  }
  return result;
}

__int64 GameHr_726c50(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  _BYTE v4[200];

  GameRoutine_1738620(a1, 0, 0);
  GameRoutine_10c830(v4, 0.0f);
  *(struct PseudoSret*)(&v3) =
      GameRoutine_ff2d0("SE_SYS_Telop_Tettai", "SE_SYS_Telop_Tettai", v4, 0,
                        65537, 0, 0.0f, 1.0f);
  v1 = GameRoutine_10cff0(v4);
  return GameRoutine_80cc80(v1);
}

__int64 GameHr_726fc0(__int64 result)
{
  __int64 v1;
  _BYTE v2[200];

  if ((*(_BYTE*)(result + 234) & 1) == 0) {
    v1 = result;
    GameRoutine_10c830(v2, -1.0f);
    GameRoutine_80cb30(v2);
    result = GameRoutine_10cff0(v2);
    *(_BYTE*)(v1 + 234) = 1;
  }
  return result;
}

float* GameHr_739120()
{
  __int64 v1;
  _BYTE v2[200];

  GameRoutine_10c830(v2, 0.0f);
  *(struct PseudoSret*)(&v1) = GameRoutine_ff2d0(
      "SE_SYS_Decide_Unit", "SE_SYS_Decide_Unit", v2, 0, 65537, 0, 0.0f, 1.0f);
  GameRoutine_10cff0(v2);
  return GameRoutine_731180(*(float**)(GameData_21cd130 + 48));
}

void GameHr_7392c0()
{
  __int64 v0;
  _BYTE v1[200];

  GameRoutine_10c830(v1, 0.0f);
  *(struct PseudoSret*)(&v0) = GameRoutine_ff2d0(
      "SE_SYS_Cancel_Unit", "SE_SYS_Cancel_Unit", v1, 0, 65537, 0, 0.0f, 1.0f);
  GameRoutine_10cff0(v1);
  GameRoutine_7317c0(*(_QWORD*)(GameData_21cd130 + 48));
}

__int64 GameHr_739690(__int64 a1)
{
  __int64 v3;
  _BYTE v4[200];

  GameRoutine_10c830(v4, 0.0f);
  *(struct PseudoSret*)(&v3) = GameRoutine_ff2d0(
      "SE_SYS_Menu_Open", "SE_SYS_Menu_Open", v4, 0, 65537, 0, 0.0f, 1.0f);
  GameRoutine_10cff0(v4);
  return GameRoutine_86c160(a1);
}

__int64 GameHr_7397a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  _BYTE v9[200];

  v2 = *GameData_212ce98[0];
  v3 = *(_QWORD*)(*GameData_212ce98[0] + 96);
  GameRoutine_72b4a0(v3);
  GameRoutine_72b6c0(v3);
  GameRoutine_72a260(*(_QWORD*)(v2 + 152));
  v4 = (_QWORD*)GameData_21cd120;
  v5 = *(_QWORD*)(GameData_21cd120 + 128);
  if (*(_BYTE*)(v5 + 56) == 1) {
    *(_BYTE*)(v5 + 56) = 0;
  }
  if (v4[12] != 0) {
    v6 = v4[13];
    v4[12] = 0;
    v4[13] = 0;
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      GameRoutine_1a09c50(v6);
    }
    ++v4[22];
  }
  GameRoutine_10c830(v9, 0.0f);
  *(struct PseudoSret*)(&v8) = GameRoutine_ff2d0(
      "SE_SYS_Attention", "SE_SYS_Attention", v9, 0, 65537, 0, 0.0f, 1.0f);
  GameRoutine_10cff0(v9);
  return GameRoutine_19f5240(a1);
}

_BYTE* GameHr_7398c0(__int64 a1, long double a2)
{
  __int64* v3;
  _BYTE* result;
  _BYTE* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  char* v23;
  char* v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  _QWORD v29[4];
  _QWORD* v30;
  int v31;
  int v32;

  v3 = GameData_212cfd0[0];
  result = (_BYTE*)(*GameData_212cfd0[0] + 8);
  if (*result != 0) {
    result = (_BYTE*)GameRoutine_6ea8c0(result, a2);
    if (result != nullptr) {
      v5 = result;
      if ((GameRoutine_744480(*v3) & 1) != 0) {
        GameData_21762a8 = -1;
        GameData_22736e0 = 0;
      LABEL_18:
        v9 = v29;
        v10 = (unsigned int)(char)v5[584];
        v11 = (unsigned int)(char)v5[585];
        v12 = *GameData_212ce88[0];
        v13 = *(unsigned int*)(*v3 + 52);
        LODWORD(v29[0]) = 3215362;
        GameRoutine_748f80(v12, v5, v10, v11, v13, v29);
        v14 = *((_DWORD*)v5 + 148);
        v15 = *GameData_212cfc0[0];
        v16 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
        *(_DWORD*)(v16 + 184) = v14;
        *(_DWORD*)(v16 + 188) = v14;
        *(_BYTE*)(v15 + 24) = 1;
        v17 = GameData_212ce98[0];
        v18 = *GameData_212ce98[0];
        v19 = *(_QWORD*)(*GameData_212ce98[0] + 96);
        GameRoutine_72b4a0(v19);
        GameRoutine_72b6c0(v19);
        GameRoutine_72a260(*(_QWORD*)(v18 + 152));
        v20 = *v17;
        v21 = (char)v5[584];
        v22 = (char)v5[585];
        v29[2] = v5;
        v23 = *((char**)v5 + 75);
        v24 = *((char**)v5 + 76);
        v30 = v29;
        v25 = *(_QWORD*)(v20 + 96);
        v29[0] = GameData_1f94290;
        v29[1] = v25;
        if (v23 == v24) {
          goto LABEL_24;
        }
        do {
          v26 = *v23 + v21;
          v31 = v23[1] + v22;
          v32 = v26;
          if (v30 == nullptr) {
            GameRoutine_60a310(0);
          }
          result = (_BYTE*)(*(__int64 (**)(_QWORD*, int*, int*))(*v30 + 48LL))(
              v30, &v32, &v31);
          v23 += 4;
        } while (v23 != v24);
        v9 = v30;
        if (v30 == v29) {
        LABEL_24:
          v27 = 32;
        }
        else {
          if (v30 == nullptr) {
            goto LABEL_26;
          }
          v27 = 40;
        }
        result = (_BYTE*)(*(__int64 (**)(_QWORD*))(*v9 + v27))(v9);
      LABEL_26:
        v28 = *GameData_21309c8[0];
        if (*GameData_21309c8[0] != 0) {
          *(_DWORD*)(v28 + 872) = 0;
          *(_QWORD*)(v28 + 880) = 0;
          *(_QWORD*)(v28 + 896) = 0;
          *(_QWORD*)(v28 + 912) = 0;
          *(_QWORD*)(v28 + 928) = 0;
          *(_DWORD*)(v28 + 864) = -16777216;
          *(_BYTE*)(v28 + 868) = -1;
          *(_QWORD*)(v28 + 888) = &GameData_1a9f09e;
          *(_QWORD*)(v28 + 904) = &GameData_1a9f09e;
          *(_QWORD*)(v28 + 920) = &GameData_1a9f09e;
          *(_QWORD*)(v28 + 936) = &GameData_1a9f09e;
        }
        return result;
      }
      v6 = *(_QWORD**)(a1 + 192);
      *(_QWORD*)(a1 + 152) = 0;
      *(_QWORD*)(a1 + 192) = 0;
      if (v6 == (_QWORD*)(a1 + 160)) {
        v7 = 32;
      }
      else {
        if (v6 == nullptr) {
          goto LABEL_10;
        }
        v7 = 40;
      }
      (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
    LABEL_10:
      v8 = *(_QWORD*)(a1 + 8);
      if (v8 == 0) {
        goto LABEL_18;
      }
      while (1) {
        if (*(_BYTE*)v8 == 2) {
          if (*(_DWORD*)(v8 + 32) == 12) {
            *(_QWORD*)(a1 + 16) = v8;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            goto LABEL_18;
          }
        }
        else if (*(_BYTE*)v8 == 0) {
          goto LABEL_18;
        }
        v8 += 64;
      }
    }
  }
  return result;
}

__int64 GameHr_73c610(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _BYTE* v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  struct {
    _BYTE v14[32];
    _BYTE* v15;
  } v14_;
  struct {
    char v16[32];
    _QWORD* v17;
  } v16_;

  if (result == 0) {
    return result;
  }
  v2 = *(_QWORD*)(result + 440);
  v3 = result;
  if (v2 == 0 || *(_BYTE*)(v2 + 16) != 4) {
    return result;
  }
  v4 = *(_QWORD*)(a2 + 32);
  if (v4 != 0) {
    if (v4 == a2) {
      v14_.v15 = v14_.v14;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 24LL))(v4, v14_.v14);
      v6 = v3;
      v5 = v14_.v15;
      goto LABEL_10;
    }
    v5 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    v14_.v15 = v5;
  }
  else {
    v5 = nullptr;
    v14_.v15 = nullptr;
  }
  v6 = v3;
LABEL_10:
  v7 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v8 = v7;
  v7[2] = v6;
  *v7 = GameData_1f94cd8;
  if (v5 != nullptr) {
    if (v5 == v14_.v14) {
      v7[8] = v7 + 4;
      (*(void (**)(_BYTE*))(*(_QWORD*)v5 + 24LL))(v5);
    }
    else {
      v7[8] = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v5 + 16LL))(v5);
    }
  }
  else {
    v7[8] = 0;
  }
  v9 = *(_DWORD*)(v3 + 592);
  v16_.v17 = v8;
  if (game_Unit_CanSwitchMount(v3)) {
    v10 = *(_QWORD*)(v3 + 400);
    v11 = *(_QWORD*)(v10 + 88);
    if ((*(_BYTE*)(v3 + 418) & 4) == 0) {
      v10 = *(_QWORD*)(v10 + 88);
    }
    if (v11 != 0 && v10 != 0) {
      v12 = *(unsigned __int8*)(v10 + 417);
      if (v9 <= v12) {
        v9 = v12;
      }
    }
  }
  GameHr_73bd40(v9, (__int64)v16_.v16);
  (*(void (**)(_QWORD*))(*v8 + 40LL))(v8);
  result = (__int64)v14_.v15;
  if (v14_.v15 == v14_.v14) {
    v13 = 32;
  }
  else {
    if (v14_.v15 == nullptr) {
      return result;
    }
    v13 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v14_.v15 + v13))(
      (__int64)v14_.v15);
}

void GameHr_73ca80()
{

#pragma clang fp contract(off)
  unsigned __int64 v0;
  __int64 v1;
  __int64 v2;
  int v3;
  int v4;
  __int64 v5;
  int v6;
  unsigned int*** v7;
  unsigned int*** v8;
  unsigned int** v9;
  unsigned int** v10;
  unsigned int* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  unsigned int v15;
  unsigned __int64 v16;
  int v17;
  int v18;
  unsigned __int64 v19;
  __int64** v20;
  __int64* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  float v26;
  __int64 v27;
  float v28;
  float v29;
  _BOOL8 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 primeEm;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  _QWORD* v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  _QWORD* v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  _QWORD* v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  _QWORD* v55;
  unsigned __int64 v56;
  __int64 (*v57)();
  unsigned __int64 i;
  __int64 (*v59)();
  _QWORD* v60;
  __int64 v61;
  __int64 v62;
  int v63;
  bool v64;
  int v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  __int64** v68;
  __int64* v69;
  unsigned __int64 v70;
  __int64 v71;
  int v72;
  int v73;
  __int64 v74;
  int v75;
  int v76;
  int v77;
  int v78;
  void (***v79)(_QWORD);
  void (***v80)(_QWORD);
  void (***v81)(_QWORD);
  __int64 v82;
  __int64 v83;
  _QWORD* v84;
  _QWORD* v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 (*v89)();
  struct {
    __int64 (*v90)();
    __int64 (*v91)();
    char gap24_[8];
    __int64 v92;
    unsigned __int64 v93;
  } v90_;
  struct {
    _QWORD* v94;
    unsigned __int64 v95;
    float v96;
    char gap68_[8];
    char v97;
  } v94_;

  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    return;
  }
  if ((~*(_DWORD*)(game_GameModeData_instance_ + 92) & 0x110) == 0) {
    v2 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL);
    if (v2 != 0) {
      do {
        v0 = *(_QWORD*)(v2 + 432);
        LOBYTE(v90_.v92) = 0;
        v3 = game_Unit_GetParam(v2);
        if (*(unsigned __int16*)(v2 + 494) >= 2u) {
          *(_WORD*)(v2 + 494) = 0;
        }
        if (v3 >= 1) {
          v4 = 1;
        }
        else {
          v4 = v3;
        }
        if (v4 != *(__int16*)(v2 + 492)) {
          *(_WORD*)(v2 + 492) = v4;
        }
        v2 = v0;
      } while (v0 != 0);
      v1 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        return;
      }
    }
  }
  if ((*(_BYTE*)(v1 + 92) & 2) == 0) {
    return;
  }
  v5 = *(_QWORD*)(*GameData_212c790 + 8);
  v6 = *(_DWORD*)(v5 + 56);
  v7 = *(unsigned int****)(v5 + 8);
  v8 = *(unsigned int****)(v5 + 16);
  if ((v6 & 0x80000000) == 0) {
    while (v7 != v8) {
      v10 = *v7++;
      v9 = v10;
      if (*((_DWORD*)v10 + 21) == v6) {
        goto LABEL_26;
      }
    }
  LABEL_21:
    v11 = game_gmap_SpotMgr_GetCurrentSpot();
    if (v11 == nullptr) {
      return;
    }
    goto LABEL_27;
  }
  if (v7 == v8) {
    goto LABEL_21;
  }
  while (1) {
    v9 = *v7;
    if ((*v7)[12] == nullptr && v9[69] == nullptr) {
      break;
    }
    if (++v7 == v8) {
      goto LABEL_21;
    }
  }
LABEL_26:
  v11 = *v9;
  if (*v9 == nullptr) {
    return;
  }
LABEL_27:
  v94_.v94 = nullptr;
  v94_.v95 = 0;
  v90_.v92 = 0;
  v90_.v93 = 0;
  v89 = (__int64 (*)())v11;
  v94_.v96 = 0x1.0000000000000p+0f;
  v12 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556024LL);
  v13 = (__int64*)fw_memory_g_heap_manager_ptr;
  while (v12 != 0) {
    v14 = v12;
    v15 = *(unsigned __int8*)(v12 + 501);
    v12 = *(_QWORD*)(v12 + 432);
    v16 = v90_.v93;
    v17 = v15 & 0x1F | (v15 >> 5 << 8);
    if ((*(_BYTE*)(v14 + 418) & 0x20) != 0) {
      v18 = v17;
    }
    else {
      v18 = -1;
    }
    if (v90_.v93 != 0) {
      v19 = v90_.v93 - 1;
      if ((v90_.v93 & (v90_.v93 - 1)) != 0) {
        v0 = v18;
        if (v90_.v93 <= v18) {
          v0 = v18 % v90_.v93;
        }
      }
      else {
        v0 = v19 & v18;
      }
      v20 = *(__int64***)(v90_.v92 + 8 * v0);
      if (v20 != nullptr) {
        v21 = *v20;
        if (v21 != nullptr) {
          if ((v90_.v93 & v19) == 0) {
            while (1) {
              v23 = v21[1];
              if (v23 == v18) {
                if (*((_DWORD*)v21 + 4) == v18) {
                  goto LABEL_126;
                }
              }
              else if ((v23 & v19) != v0) {
                goto LABEL_51;
              }
              v21 = (__int64*)*v21;
              if (v21 == nullptr) {
                goto LABEL_51;
              }
            }
          }
          do {
            v22 = v21[1];
            if (v22 == v18) {
              if (*((_DWORD*)v21 + 4) == v18) {
                goto LABEL_126;
              }
            }
            else {
              if (v22 >= v90_.v93) {
                v22 %= v90_.v93;
              }
              if (v22 != v0) {
                break;
              }
            }
            v21 = (__int64*)*v21;
          } while (v21 != nullptr);
        }
      }
    }
  LABEL_51:
    v24 = fw_memory_HeapManager_Allocate(*v13, 32, 16, 0);
    v25 = v94_.v95;
    v26 = v94_.v96;
    v27 = v24;
    *(_QWORD*)v24 = 0;
    *(_QWORD*)(v24 + 8) = v18;
    *(_DWORD*)(v24 + 16) = v18;
    *(_QWORD*)(v24 + 24) = v14;
    v28 = (float)(v25 + 1);
    if (v16 != 0 && (float)(v26 * (float)v16) >= v28) {
      goto LABEL_117;
    }
    v29 = v28 / v26;
    v30 = (v16 & (v16 - 1)) != 0;
    if (v16 < 3) {
      v30 = true;
    }
    v31 = v30 | (2 * v16);
    v32 = vcvtps_u64_f32(v29);
    if (v31 <= v32) {
      primeEm = v32;
    }
    else {
      primeEm = v31;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v16 = v90_.v93;
      primeEm = std___1___next_prime(primeEm);
    }
    if (primeEm <= v16) {
      if (primeEm >= v16) {
        goto LABEL_112;
      }
      v38 = vcvtps_u64_f32((float)v94_.v95 / v94_.v96);
      if (v16 < 3 || (v16 & (v16 - 1)) != 0) {
        v38 = std___1___next_prime(v38);
      }
      else {
        v39 = 1LL << -(char)__clz(v38 - 1);
        if (v38 >= 2) {
          v38 = v39;
        }
      }
      if (primeEm <= v38) {
        primeEm = v38;
      }
      if (primeEm >= v16) {
        goto LABEL_112;
      }
      if (primeEm == 0) {
        v51 = v90_.v92;
        v90_.v92 = 0;
        if (v51 != 0) {
          v52 = 128;
          if (*(_QWORD*)(*v13 + 200) == 0) {
            v52 = 56;
          }
          nn_mem_StandardAllocator_Free(*v13 + v52, v51);
        }
        v90_.v93 = 0;
        goto LABEL_112;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210_alt1();
    }
    v34 = fw_memory_HeapManager_Allocate(*v13, 8 * primeEm, 16, 0);
    v35 = v90_.v92;
    v90_.v92 = v34;
    if (v35 != 0) {
      v36 = 128;
      if (*(_QWORD*)(*v13 + 200) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free(*v13 + v36, v35);
    }
    v90_.v93 = primeEm;
    if (primeEm >= 8) {
      v37 = 0;
      do {
        *(_QWORD*)(v90_.v92 + 8 * v37) = 0;
        *(_QWORD*)(v90_.v92 + 8 * v37 + 8) = 0;
        *(_QWORD*)(v90_.v92 + 8 * v37 + 16) = 0;
        *(_QWORD*)(v90_.v92 + 8 * v37 + 24) = 0;
        *(_QWORD*)(v90_.v92 + 8 * v37 + 32) = 0;
        *(_QWORD*)(v90_.v92 + 8 * v37 + 40) = 0;
        *(_QWORD*)(v90_.v92 + 8 * v37 + 48) = 0;
        v40 = v90_.v92 + 8 * v37;
        v37 += 8;
        *(_QWORD*)(v40 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v37);
    }
    else {
      v37 = 0;
    }
    v41 = primeEm & 7;
    if ((primeEm & 7) != 0) {
      v42 = 8 * v37;
      do {
        --v41;
        *(_QWORD*)(v90_.v92 + v42) = 0;
        v42 += 8;
      } while (v41 != 0);
    }
    v43 = v94_.v94;
    if (v94_.v94 != nullptr) {
      v44 = v94_.v94[1];
      v45 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v44 >= primeEm) {
          v44 %= primeEm;
        }
        *(_QWORD*)(v90_.v92 + 8 * v44) = &v94_.v94;
        v46 = (_QWORD*)*v43;
        if (*v43 == 0) {
          goto LABEL_112;
        }
        while (2) {
          v47 = v46[1];
          if (v47 >= primeEm) {
            v47 %= primeEm;
          }
          if (v47 != v44) {
            if (*(_QWORD*)(v90_.v92 + 8 * v47) == 0) {
              *(_QWORD*)(v90_.v92 + 8 * v47) = v43;
            LABEL_89:
              v43 = v46;
              v46 = (_QWORD*)*v46;
              v44 = v47;
              if (v46 == nullptr) {
                goto LABEL_112;
              }
              continue;
            }
            *v43 = *v46;
            *v46 = **(_QWORD**)(v90_.v92 + 8 * v47);
            **(_QWORD**)(v90_.v92 + 8 * v47) = v46;
            v46 = v43;
          }
          break;
        }
        v47 = v44;
        goto LABEL_89;
      }
      v48 = v44 & v45;
      *(_QWORD*)(v90_.v92 + 8 * v48) = &v94_.v94;
      while (1) {
        v49 = (_QWORD*)*v43;
        if (*v43 == 0) {
          break;
        }
        v50 = v49[1] & v45;
        if (v50 == v48) {
          v43 = (_QWORD*)*v43;
        }
        else if (*(_QWORD*)(v90_.v92 + 8 * v50) != 0) {
          *v43 = *v49;
          *v49 = **(_QWORD**)(v90_.v92 + 8 * v50);
          **(_QWORD**)(v90_.v92 + 8 * v50) = v49;
        }
        else {
          *(_QWORD*)(v90_.v92 + 8 * v50) = v43;
          v43 = v49;
          v48 = v50;
        }
      }
    }
  LABEL_112:
    v16 = v90_.v93;
    if ((v90_.v93 & (v90_.v93 - 1)) != 0) {
      if (v90_.v93 <= v18) {
        v0 = v18 % v90_.v93;
      }
      else {
        v0 = v18;
      }
    }
    else {
      v0 = (v90_.v93 - 1) & v18;
    }
  LABEL_117:
    v53 = v90_.v92;
    v54 = *(__int64**)(v90_.v92 + 8 * v0);
    if (v54 != nullptr) {
      *(_QWORD*)v27 = *v54;
      *v54 = v27;
    }
    else {
      v55 = v94_.v94;
      v94_.v94 = (_QWORD*)v27;
      *(_QWORD*)v27 = v55;
      *(_QWORD*)(v53 + 8 * v0) = &v94_.v94;
      if (*(_QWORD*)v27 != 0) {
        v56 = *(_QWORD*)(*(_QWORD*)v27 + 8LL);
        if ((v16 & (v16 - 1)) != 0) {
          if (v56 >= v16) {
            v56 %= v16;
          }
        }
        else {
          v56 &= v16 - 1;
        }
        *(_QWORD*)(v90_.v92 + 8 * v56) = v27;
      }
    }
    ++v94_.v95;
  LABEL_126:;
  }
  GameRoutine_134b980_alt1((void*)(&v90_.v90), v89);
  v57 = v90_.v90;
  if (v90_.v91 != v90_.v90) {
    for (i = 0; i < ((char*)v59 - (char*)v57) >> 3; ++i) {
      v60 = *((_QWORD**)v57 + i);
      v61 = v60[71];
      v62 = v60[72];
      if (v61 == v62) {
        goto LABEL_176;
      }
      do {
        v63 = *(_BYTE*)(v61 + 501) & 0x1F;
        if ((*(_BYTE*)(v61 + 418) & 0x20) == 0) {
          v63 = -1;
        }
        v64 = v90_.v93 == 0 || v94_.v95 == 0;
        if (v64) {
          goto LABEL_156;
        }
        v65 = v63 | ((_DWORD)i << 8);
        v66 = v90_.v93 - 1;
        if ((v90_.v93 & (v90_.v93 - 1)) != 0) {
          v67 = v65;
          if (v90_.v93 <= v65) {
            v67 = v65 % v90_.v93;
          }
        }
        else {
          v67 = v66 & v65;
        }
        v68 = *(__int64***)(v90_.v92 + 8 * v67);
        if (v68 == nullptr || (v69 = *v68) == nullptr) {
        LABEL_156:
          v94_.v97 = 0;
          v72 = game_Unit_GetParam(v61);
          if (*(_WORD*)(v61 + 494) != 0) {
            *(_WORD*)(v61 + 494) = 0;
          }
          v73 = v72 & (v72 >> 31);
          if (v73 != *(__int16*)(v61 + 492)) {
            *(_WORD*)(v61 + 492) = v73;
          }
          *(_DWORD*)(v61 + 416) |= 0x28u;
          goto LABEL_161;
        }
        if ((v90_.v93 & v66) == 0) {
          while (1) {
            v71 = v69[1];
            if (v71 == v65) {
              if (*((_DWORD*)v69 + 4) == v65) {
                goto LABEL_163;
              }
            }
            else if ((v71 & v66) != v67) {
              goto LABEL_156;
            }
            v69 = (__int64*)*v69;
            if (v69 == nullptr) {
              goto LABEL_156;
            }
          }
        }
        while (1) {
          v70 = v69[1];
          if (v70 == v65) {
            break;
          }
          if (v70 >= v90_.v93) {
            v70 %= v90_.v93;
          }
          if (v70 != v67) {
            goto LABEL_156;
          }
        LABEL_146:
          v69 = (__int64*)*v69;
          if (v69 == nullptr) {
            goto LABEL_156;
          }
        }
        if (*((_DWORD*)v69 + 4) != v65) {
          goto LABEL_146;
        }
      LABEL_163:
        v74 = v69[3];
        v94_.v97 = 0;
        v75 = *(unsigned __int16*)(v74 + 492);
        v76 = game_Unit_GetParam(v61);
        if (*(_WORD*)(v61 + 494) != 0 &&
            v75 != *(unsigned __int16*)(v61 + 494)) {
          *(_WORD*)(v61 + 494) = 0;
        }
        if (v76 >= (__int16)v75) {
          v77 = (__int16)v75;
        }
        else {
          v77 = v76;
        }
        if ((v75 & 0x8000u) == 0) {
          v78 = v77;
        }
        else {
          v78 = 0;
        }
        if (v78 != *(__int16*)(v61 + 492)) {
          *(_WORD*)(v61 + 492) = v78;
        }
        if ((*(_BYTE*)(v61 + 418) & 0x20) != 0) {
          *(_BYTE*)(v61 + 501) &= 0x1Fu;
        }
      LABEL_161:
        v61 += 2224;
      } while (v61 != v62);
      v57 = v90_.v90;
      v60 = *((_QWORD**)v90_.v90 + i);
    LABEL_176:
      v79 = (void (***)(_QWORD))v60[77];
      v80 = (void (***)(_QWORD))v60[76];
      if (v80 != v79) {
        v81 = v79 - 278;
        do {
          (**v81)(v81);
          v64 = v81 == v80;
          v81 -= 278;
        } while (!v64);
        v57 = v90_.v90;
      }
      v59 = v90_.v91;
      v60[77] = v80;
    }
  }
  if (v57 != nullptr) {
    v82 = *v13;
    v90_.v91 = v57;
    v83 = 128;
    if (*(_QWORD*)(v82 + 200) == 0) {
      v83 = 56;
    }
    nn_mem_StandardAllocator_Free(v82 + v83, (__int64)v57);
  }
  v84 = v94_.v94;
  if (v94_.v94 != nullptr) {
    do {
      v85 = (_QWORD*)*v84;
      if (*(_QWORD*)(*v13 + 200) != 0) {
        v86 = 128;
      }
      else {
        v86 = 56;
      }
      nn_mem_StandardAllocator_Free(*v13 + v86, (__int64)v84);
      v84 = v85;
    } while (v85 != nullptr);
  }
  v87 = v90_.v92;
  v90_.v92 = 0;
  if (v87 != 0) {
    v88 = 128;
    if (*(_QWORD*)(*v13 + 200) == 0) {
      v88 = 56;
    }
    nn_mem_StandardAllocator_Free(*v13 + v88, v87);
  }
}

bool GameHr_748d40(__int64 a1, int a2, int a3)
{
  int* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  _BOOL8 result;
  int v20;
  int v21;
  __int64 v23;
  unsigned __int8* v24;
  __int64 v25;
  unsigned int v26;
  char* v27;
  bool v30;
  _QWORD v31[4];
  _QWORD* v32;
  char v33;

  v3 = *(int**)(a1 + 8);
  v4 = *v3;
  if ((*v3 & 0xC2) == 0) {
    goto LABEL_24;
  }
  LODWORD(v5) = a2 + 32 * a3;
  v5 = (unsigned int)v5 >= 0x400 ? 0LL : (unsigned int)v5;
  v6 = *(_QWORD*)(*GameData_212ce98[0] + 96) + v5;
  if (*(_BYTE*)(v6 + 8) == 0) {
    goto LABEL_24;
  }
  v7 = *(_QWORD*)(GameData_21ca310 + 56) + 2224LL * *(unsigned __int8*)(v6 + 8);
  v8 = *(unsigned __int8*)(v6 + 8) > 0xFAu || v7 == 2224;
  if (v8 || *(_QWORD*)(v7 - 1832) == 0) {
    goto LABEL_24;
  }
  v9 = *(_QWORD*)(a1 + 8);
  if ((v4 & 0x10000) == 0) {
    goto LABEL_19;
  }
  v10 = a2;
  v11 = a3;
  v13 = (unsigned int)*(char*)(v7 - 1640);
  v14 = (unsigned int)*(char*)(v7 - 1639);
  v15 = *(_QWORD*)(*GameData_212ce98[0] + 160) +
        ((unsigned __int64)*((unsigned __int8*)v3 + 4) << 7) + 8;
  v33 = 0;
  v32 = v31;
  v31[0] = GameData_1f94310;
  v31[1] = v15;
  v31[2] = &v33;
  GameRoutine_6c8a80(v7 - 2224, v13, v14, v31);
  if (v32 == v31) {
    v16 = 32;
    goto LABEL_16;
  }
  a3 = v11;
  a2 = v10;
  if (v32 != nullptr) {
    v16 = 40;
  LABEL_16:
    (*(void (**)(__int64))(*v32 + v16))((__int64)v32);
    a3 = v11;
    a2 = v10;
  }
  if (v33 != 1) {
    goto LABEL_23;
  }
  v9 = *(_QWORD*)(a1 + 8);
LABEL_19:
  v17 = *(unsigned __int8*)(v9 + 4);
  v18 = *(unsigned __int8*)(*(_QWORD*)(v7 - 1784) + 16LL);
  if (v18 == v17) {
    goto LABEL_23;
  }
  if (*(_BYTE*)(*(_QWORD*)(v7 - 1784) + 16LL) != 0) {
    if (*(_BYTE*)(v9 + 4) == 0 && v18 == 3) {
      goto LABEL_23;
    }
    goto LABEL_45;
  }
  if (v17 == 3) {
  LABEL_23:
    v4 = *v3;
    goto LABEL_24;
  }
LABEL_45:
  v4 = *v3;
  if ((*v3 & 2) != 0 ||
      (v4 & 0x4000) == 0 &&
          (v18 != *(unsigned __int8*)(GameData_21ca2f8 + 24) ||
           (v4 & 0x40) != 0 && (*(_BYTE*)(v7 - 1808) & 1) != 0 ||
           (v4 & 0x80) != 0 && (*(_BYTE*)(v7 - 246) & 2) != 0)) {
    return false;
  }
LABEL_24:
  if ((v4 & 0x20) == 0) {
    return true;
  }
  v20 = *(_DWORD*)(GameData_21cd0e0 + 172);
  v21 = *(_DWORD*)(GameData_21cd0e0 + 176);
  if (a2 == v20 && a3 == v21) {
    return false;
  }
  v23 = *(unsigned int*)(GameData_21cd0e0 + 160);
  if ((int)v23 < 1) {
    return true;
  }
  v24 = (unsigned __int8*)(GameData_21cd0e0 + 32);
  v25 = v23 - 1;
  do {
    v26 = *v24++;
    v27 = (char*)GameData_212cf50 + v26;
    v20 += *v27;
    v21 += v27[256];
    result = a2 != v20 || a3 != v21;
    v30 = v25-- != 0;
  } while (result && v30);
  return result;
}

bool GameHr_757ed0(_BOOL8 result, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  _QWORD v5[4];
  _QWORD* v6;
  int v7;

  v7 = 0;
  if (result) {
    v5[0] = GameData_1f959d8;
    v5[1] = &v7;
    v6 = v5;
    GameRoutine_757f60(result, a2, a3, a4, v5);
    if (v6 == v5) {
      v4 = 32;
    }
    else {
      if (v6 == nullptr) {
        return v7 > 0;
      }
      v4 = 40;
    }
    (*(void (**)(__int64))(*v6 + v4))((__int64)v6);
    return v7 > 0;
  }
  return result;
}

__int64 GameHr_769d60(__int64 a1, __int64 a2, _DWORD* a3, long double a4,
                      long double a5)
{

#pragma clang fp contract(off)
  const char* v6;
  int v7;
  int v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  const char* v13;
  long double v15;
  long double v16;
  int v17;

  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (a2 == 0) {
    return 0;
  }
  v6 = *(const char**)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                  8LL * (*a3 & 0xFFF)) +
                       776LL);
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v7 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v8 = 2)
           : (v8 = 3),
       (v8 & v7) != 0)) {
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_16;
    }
    v9 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    LODWORD(a5) = *(_DWORD*)(v9 + 168);
    if (*(float*)(v9 + 172) == *(float*)&a5) {
      v10 = a1;
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v9 + 160) + 16LL))(v9 + 160),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v0", "=w"));
      a1 = v10;
    }
    else {
      a4 = *(long double*)(v9 + 208);
    }
    LODWORD(a4) = HIDWORD(a4);
    if (*((float*)&a4 + 3) != 0x1.0000000000000p+0f ||
        (v11 = a1,
         *(__n128*)& a4 = ((__n128 (*)(unsigned __int64, float)) *
                           (_QWORD*)(*(_QWORD*)(v9 + 160) + 16LL))(
             v9 + 160, *((float*)&a4 + 3)),
         LODWORD(a4) = HIDWORD(a4), a1 = v11,
         *((float*)&a4 + 3) != 0x1.0000000000000p+0f)) {
    LABEL_16:
      v13 = "Bmap_Warp_Hit";
      if (v6 != nullptr && *v6 != 0) {
        v13 = v6;
      }
      return GameRoutine_76b550_alt1(a1, a2, (__int64)v13, 0, a4, a5);
    }
  }
  v17 = 1065353216;
  if (*(_BYTE*)(a2 + 176) == 1) {
    v12 = *(_QWORD*)(a2 + 152);
    LODWORD(a4) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
  }
  else {
    if (*(float*)(a2 + 160) <= 0x0.0p+0f) {
      if (((*(__int64 (**)(__int64, int*, __int64))(
               *(_QWORD*)(a2 + 152) + 8LL))(a2 + 152, &v17, a2 + 184) &
           1) == 0) {
        return 0;
      }
      (*(void (**)(__int64))(*(_QWORD*)(a2 + 152) + 16LL))(a2 + 152),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v0", "=w"));
      LODWORD(v15) = v17;
      (*(void (**)(__int64, long double, long double))(
          *(_QWORD*)(a2 + 152) + 24LL))(a2 + 152, v16, v15),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v0", "=w"));
    LABEL_23:
      *(_QWORD*)(a2 + 160) = 0;
      *(_WORD*)(a2 + 176) = 256;
      *(_WORD*)(a2 + 20) |= 8u;
      return 0;
    }
    (*(void (**)(__int64))(*(_QWORD*)(a2 + 152) + 16LL))(a2 + 152),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v12 = *(_QWORD*)(a2 + 152);
  }
  LODWORD(a5) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
  (*(void (**)(__int64, long double, long double))(v12 + 24))(a2 + 152, a4, a5),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v0", "=w"));
  goto LABEL_23;
}

_QWORD* GameHr_788c60(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int128 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  unsigned int v18;
  int v19;
  _BOOL4 v21;
  __int64* v23;
  __int64 v24;
  int v25;
  int v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  _QWORD* result;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;

  v2 = GameData_212cfc0[0];
  v3 = *GameData_212cfc0[0];
  v4 = GameData_212cfd0[0];
  if (*(_BYTE*)(*GameData_212cfd0[0] + 8) != 0) {
    v5 = game_UnitPool_Get((_BYTE*)(*GameData_212cfd0[0] + 8));
  }
  else {
    v5 = nullptr;
  }
  Cursor_730e40(*(_QWORD*)(v3 + 48), (__int64)v5);
  v6 = *v2;
  *(_QWORD*)(*(_QWORD*)(*v2 + 48) + 184LL) = 0x100000001LL;
  v7 = *(_QWORD*)(v6 + 48);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
    v35 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v35;
    __cxa_guard_release((__int64)&GameData_21a6130);
  }
  *(_DWORD*)(v7 + 168) = 0;
  v8 = DWORD2(GameData_21a6120);
  *(_QWORD*)(v7 + 144) = GameData_21a6120;
  v9 = *(_OWORD*)(v7 + 144);
  *((_QWORD*)&v9 + 1) = v8;
  *(_OWORD*)(v7 + 144) = v9;
  v10 = *(_QWORD*)(*GameData_212cfc8[0] + 432);
  v36 = 1065353216;
  if (*(_BYTE*)(v10 + 120) == 1) {
    (*(void (**)(__int64, float, float))(*(_QWORD*)(v10 + 96) + 24LL))(
        v10 + 96, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f);
    *(_DWORD*)(v10 + 104) = 0;
  }
  else {
    if (*(float*)(v10 + 104) <= 0x1.8000000000000p-1f) {
      if (((*(__int64 (**)(__int64, int*, __int64))(
               *(_QWORD*)(v10 + 96) + 8LL))(v10 + 96, &v36, v10 + 128) &
           1) == 0) {
        goto LABEL_13;
      }
      (*(void (**)(__int64))(*(_QWORD*)(v10 + 96) + 16LL))(v10 + 96);
      v11 = *(_QWORD*)(v10 + 96);
      v12 = v10 + 96;
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)(v10 + 96) + 16LL))(v10 + 96);
      v11 = *(_QWORD*)(v10 + 96);
      v12 = v10 + 96;
    }
    (*(void (**)(__int64))(v11 + 24))(v12);
    *(_DWORD*)(v10 + 104) = 1061158912;
  }
  *(_DWORD*)(v10 + 108) = 0;
  *(_WORD*)(v10 + 120) = 256;
LABEL_13:
  v13 = GameData_212cff0[0];
  v14 = (__int64*)(*GameData_212cff0[0] + 40);
  v15 = game_g_empty_item_ptr;
  v16 = GameData_212c878[0];
  if (*(_WORD*)v14 == 0) {
    v14 = game_g_empty_item_ptr;
  }
  v17 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                   8LL * *(unsigned __int16*)v14);
  v18 = *(unsigned __int8*)(v17 + 72);
  v19 = *(unsigned __int8*)(v17 + 73);
  v21 = v19 == 1 || v19 == 7;
  if (v18 > 7 || !v21) {
    GameRoutine_a15480_alt1((_QWORD*)(a1 + 23096));
  }
  else {
    if (*(_BYTE*)(*v4 + 8) != 0) {
      v23 = game_UnitPool_Get((_BYTE*)(*v4 + 8));
    }
    else {
      v23 = nullptr;
    }
    game_map_TargetMask_Commit((_QWORD*)(a1 + 23096), (__int64)v23);
  }
  *(_QWORD*)(a1 + 23040) = a1 + 23096;
  if ((*(_DWORD*)(*v13 + 48) & 0xFFF) != 0) {
    v24 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                     8LL * (*(_DWORD*)(*v13 + 48) & 0xFFF));
    if (v24 == 0) {
      goto LABEL_44;
    }
    v25 = *(unsigned __int8*)(v24 + 105);
  }
  else {
    v27 = *(unsigned __int16*)(*v13 + 40);
    if (*(_WORD*)(*v13 + 40) == 0) {
      v27 = *(unsigned __int16*)v15;
    }
    v28 = *(_QWORD*)(*(_QWORD*)(*v16 + 64) + 8LL * v27);
    v29 = *(_QWORD*)(v28 + 192);
    v30 = *(unsigned __int8*)(v28 + 72);
    if (v29 == 0 || v30 > 7) {
      goto LABEL_44;
    }
    v25 = *(unsigned __int8*)(v29 + 105);
    if (*(_BYTE*)(v29 + 105) == 0 || *(_BYTE*)(v29 + 104) == 2) {
      goto LABEL_44;
    }
  }
  if ((unsigned int)(v25 - 2) <= 2) {
    v26 = (unsigned __int8)(v25 - 1);
    goto LABEL_45;
  }
LABEL_44:
  v26 = 4;
LABEL_45:
  result = *(_QWORD**)(a1 + 192);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (result == (_QWORD*)(a1 + 160)) {
    v33 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_50;
    }
    v33 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v33))((__int64)result);
LABEL_50:
  v34 = *(_QWORD*)(a1 + 8);
  if (v34 != 0) {
    while (1) {
      if (*(_BYTE*)v34 == 2) {
        if (*(_DWORD*)(v34 + 32) == v26) {
          *(_QWORD*)(a1 + 16) = v34;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v34 == 0) {
        return result;
      }
      v34 += 64;
    }
  }
  return result;
}

__int64 GameHr_789670(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64* v2;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  int v7;
  unsigned __int8* v8;
  unsigned int v9;
  bool v10;
  int v11;
  const char* v13;
  int v14;
  __int64* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  float v19;
  float v20;
  float v21;
  int v22;
  __int64* v23;
  __int64 v24;
  unsigned __int8 v25;
  unsigned __int8 v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  void* v31;
  __int64 v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  void* v36;
  _QWORD v37[25];

  v1 = result;
  v2 = (__int64*)game_g_game_setting_ptr;
  v3 = *(_QWORD*)game_g_game_setting_ptr;
  v4 = *(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 952LL);
  if ((v4 & 1) != 0) {
    if ((GameRoutine_845bc0_alt1(*GameData_212cff0[0] + 12408,
                                 *GameData_212cff0[0] + 8) &
         1) == 0) {
      snd_Fade_Fade_10c830((__int64)v37, 0x0.0p+0f);
      v13 = "SE_SYS_NG";
    LABEL_32:
      snd_play_ff2d0((__int64)v13, (__int64)v13, (__int64)v37, 0, 0x10001u, 0,
                     0x0.0p+0f, 0x1.0000000000000p+0f);
      return snd_Fade_Destroy_Fade(v37);
    }
    snd_Fade_Fade_10c830((__int64)v37, 0x0.0p+0f);
    snd_play_ff2d0((__int64)"SE_SYS_Decide_M", (__int64)"SE_SYS_Decide_M",
                   (__int64)v37, 0, 0x10001u, 0, 0x0.0p+0f,
                   0x1.0000000000000p+0f);
    result = snd_Fade_Destroy_Fade(v37);
    v7 = 4;
    goto LABEL_25;
  }
  if ((v4 & 2) != 0) {
    v7 = 7;
  LABEL_25:
    *(_DWORD*)(v1 + 152) = v7;
    v8 = *(unsigned __int8**)(v1 + 16);
    if (v8 != nullptr) {
      v9 = *v8;
      v10 = v9 > 0x10;
      v11 = (1 << v9) & 0x1CE00;
      if (!v10 && v11 != 0) {
        *(_WORD*)(v1 + 136) |= 0x80u;
      }
    }
    return result;
  }
  if ((v4 & 0x40) != 0 &&
      (*(_QWORD*)GameData_212d8b0[0] == 0 ||
       (*(_BYTE*)(*(_QWORD*)GameData_212d8b0[0] + 256LL) & 1) == 0) &&
      (*GameData_212cff8[0] == 0 ||
       *(_QWORD*)(*GameData_212cff8[0] + 96) ==
           *(_QWORD*)(*GameData_212cff8[0] + 88))) {
    v37[0] = 0;
    v37[1] = 0;
    result = GameRoutine_18aff60_alt1(result, (__int64)v37);
    if ((result & 1) != 0) {
      return result;
    }
    v3 = *v2;
  }
  if (*(_BYTE*)(v3 + 807) == 1 &&
          ((*(_BYTE*)(v3 + 804) & 1) != 0 ||
           *(_BYTE*)(v3 + 940) == 1 && (*(_BYTE*)(v3 + 805) & 1) != 0 &&
               (*(_BYTE*)(v3 + 806) & 1) != 0) ||
      *(_BYTE*)(v3 + 903) == 1 &&
          ((*(_BYTE*)(v3 + 900) & 1) != 0 ||
           *(_BYTE*)(v3 + 940) == 1 && (*(_BYTE*)(v3 + 901) & 1) != 0 &&
               *(_BYTE*)(v3 + 902) == 1)) {
    if (GameData_2258178 == 0) {
      return result;
    }
    v5 = *(_DWORD*)(GameData_2258178 + 588);
    if (v5 > 2) {
      if (v5 == 4) {
        v6 = v1;
      }
      else {
        if (v5 != 3) {
          return result;
        }
        v6 = v1;
      }
    LABEL_57:
      result = ProcMapSeqTargetSelect_78e3c0(v6);
      if ((result & 1) == 0) {
        return result;
      }
      return game_sound_PlayCursorTargetSe();
    }
    if (v5 == 1) {
    LABEL_56:
      v6 = v1;
      goto LABEL_57;
    }
    if (v5 != 2) {
      return result;
    }
  LABEL_21:
    v6 = v1;
    goto LABEL_57;
  }
  v14 = *(_DWORD*)(v3 + 948);
  if ((v14 & 0x220000) == 0) {
    if ((v14 & 0x440000) != 0) {
      v23 = GameData_212cff0[0];
      v24 = *GameData_212cff0[0];
      if (*GameData_212cfc8[0] != 0) {
        v25 = Camera_7c16d0(*GameData_212cfc8[0], 8u);
      }
      else {
        v25 = 8;
      }
      result = VTarget_7797e0((_DWORD*)(v24 + 8), v25);
      if ((result & 0x80000000) != 0 ||
          (_DWORD)result == *(_DWORD*)(v1 + 272)) {
        return result;
      }
      v32 = *v23;
      *(_DWORD*)(v1 + 272) = result;
      game_map_VTarget_EnumerateSubTarget(v32 + 8, result);
      v33 = *(_DWORD*)(v1 + 276);
      if ((v33 & 0x80000000) != 0 ||
          (v34 = *v23, *(char*)(*v23 + 12LL * v33 + 12413) < 0) ||
          *(char*)(*v23 + 12LL * v33 + 12414) < 0) {
        v33 = *(_DWORD*)(v1 + 272);
        if ((v33 & 0x80000000) != 0) {
          v36 = GameData_212d208;
          goto LABEL_87;
        }
        v34 = *v23;
        v35 = 64;
      }
      else {
        v35 = 12408;
      }
      v36 = (void*)(v34 + v35 + 12LL * v33 + 4);
    LABEL_87:
      GameRoutine_78d280_alt1(v1, (__int64)v36);
      return game_sound_PlayCursorTargetSe();
    }
    if ((v14 & 0x88000) != 0) {
      goto LABEL_56;
    }
    if ((v14 & 0x110000) == 0) {
      return result;
    }
    goto LABEL_21;
  }
  v15 = GameData_212cff0[0];
  v16 = *GameData_212cff0[0];
  if (*GameData_212cfc8[0] == 0) {
    goto LABEL_60;
  }
  v17 = *(_QWORD**)(*GameData_212cfc8[0] + 432);
  v18 = v17[2];
  v17 += 2;
  v19 = (*(float (**)(_QWORD*))(v18 + 16))(v17);
  v20 = (*(float (**)(_QWORD*))(*v17 + 16LL))(v17);
  v21 = fmodf(v20, 0x1.6800000000000p+8f);
  if (v19 < 0x0.0p+0f) {
    v21 = v21 + 0x1.6800000000000p+8f;
  }
  if (v21 < 0x1.6800000000000p+5f) {
  LABEL_45:
    v22 = 1;
    goto LABEL_51;
  }
  if (v21 >= 0x1.0e00000000000p+7f) {
    if (v21 >= 0x1.c200000000000p+7f) {
      if (v21 < 0x1.3b00000000000p+8f) {
        v26 = 4;
        goto LABEL_61;
      }
      goto LABEL_45;
    }
  LABEL_60:
    v26 = 2;
    goto LABEL_61;
  }
  v22 = 0;
LABEL_51:
  if (v22 != 0) {
    v26 = 8;
  }
  else {
    v26 = 1;
  }
LABEL_61:
  result = VTarget_7797e0((_DWORD*)(v16 + 8), v26);
  if ((result & 0x80000000) == 0 && (_DWORD)result != *(_DWORD*)(v1 + 272)) {
    v27 = *v15;
    *(_DWORD*)(v1 + 272) = result;
    game_map_VTarget_EnumerateSubTarget(v27 + 8, result);
    v28 = *(_DWORD*)(v1 + 276);
    if ((v28 & 0x80000000) != 0 ||
        (v29 = *v15, *(char*)(*v15 + 12LL * v28 + 12413) < 0) ||
        *(char*)(*v15 + 12LL * v28 + 12414) < 0) {
      v28 = *(_DWORD*)(v1 + 272);
      if ((v28 & 0x80000000) != 0) {
        v31 = GameData_212d208;
        goto LABEL_80;
      }
      v29 = *v15;
      v30 = 64;
    }
    else {
      v30 = 12408;
    }
    v31 = (void*)(v29 + v30 + 12LL * v28 + 4);
  LABEL_80:
    GameRoutine_78d280_alt1(v1, (__int64)v31);
    snd_Fade_Fade_10c830((__int64)v37, 0x0.0p+0f);
    v13 = "SE_SYS_Cursor_Target";
    goto LABEL_32;
  }
  return result;
}

__int64 GameHr_78c950(__int64 result)
{
  __int64 v1;
  int v2;
  unsigned int v3;
  const char* v4;
  unsigned __int8* v5;
  unsigned int v6;
  bool v7;
  int v8;
  const char* v10;
  float v11;
  const char* v12;
  __int64 v13;
  _QWORD v14[2];
  _QWORD v15[25];

  v1 = result;
  v2 = *(_DWORD*)(*(_QWORD*)GameData_212c470 + 952LL);
  if ((v2 & 1) != 0) {
    if ((GameRoutine_78f500(result) & 1) == 0) {
      GameRoutine_10c830(v15, 0.0f);
      v10 = "SE_SYS_NG";
      v11 = 1.0f;
      v12 = "SE_SYS_NG";
    LABEL_27:
      *(struct PseudoSret*)(v14) =
          GameRoutine_ff2d0(v10, v12, v15, 0, 65537, 0, 0.0f, v11);
      return GameRoutine_10cff0(v15);
    }
    if (*(_DWORD*)(v1 + 152) == 8) {
      v3 = *(unsigned __int8*)(GameData_21cd0e8 + 32) - 3;
      if (v3 <= 6 && ((0x6Fu >> v3) & 1) != 0) {
        v4 = "SE_SYS_Decide_Battle";
      LABEL_26:
        GameRoutine_10c830(v15, 0.0f);
        v11 = 1.0f;
        v10 = v4;
        v12 = v4;
        goto LABEL_27;
      }
      if ((*(_DWORD*)(GameData_21cd108 + 56) & 0xFFF) != 0) {
        v13 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                         8LL * (*(_DWORD*)(GameData_21cd108 + 56) & 0xFFF));
        if (v13 != 0 && *(_BYTE*)(v13 + 104) == 9) {
          v4 = "SE_SYS_Decide_H";
          goto LABEL_26;
        }
      }
    }
    v4 = "SE_SYS_Decide_M";
    goto LABEL_26;
  }
  if ((v2 & 2) != 0) {
    GameRoutine_10c830(v15, 0.0f);
    *(struct PseudoSret*)(v14) = GameRoutine_ff2d0(
        "SE_SYS_Cancel_M", "SE_SYS_Cancel_M", v15, 0, 65537, 0, 0.0f, 1.0f);
    result = GameRoutine_10cff0(v15);
    *(_DWORD*)(v1 + 152) = 4;
    v5 = *(unsigned __int8**)(v1 + 16);
    if (v5 != nullptr) {
      v6 = *v5;
      v7 = v6 > 0x10;
      v8 = (1 << v6) & 0x1CE00;
      if (!v7 && v8 != 0) {
        *(_WORD*)(v1 + 136) |= 0x80u;
      }
    }
  }
  else if ((v2 & 0x40) != 0 &&
           (GameData_21f1e08 == 0 ||
            (*(_BYTE*)(GameData_21f1e08 + 256) & 1) == 0) &&
           (GameData_21cd128 == 0 || *(_QWORD*)(GameData_21cd128 + 96) ==
                                         *(_QWORD*)(GameData_21cd128 + 88))) {
    v15[0] = 0;
    v15[1] = 0;
    return GameRoutine_18aff60(result, v15);
  }
  return result;
}

_BYTE* GameHr_78cb60(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  __int64* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  __int64* v24;
  __int16 v25;
  int v26;
  unsigned int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  unsigned int v31;
  __int64* v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  __int64 v38;
  __int128 v39;
  __int64 v40;
  _BYTE* result;
  __int64 v42;
  __int64 v43;
  _QWORD v44[25];

  v2 = GameData_212cfc8[0];
  v3 = *(_QWORD*)(*GameData_212cfc8[0] + 432);
  LODWORD(v44[0]) = 1065353216;
  if (*(_BYTE*)(v3 + 160) == 1) {
    (*(void (**)(__int64, float, float))(*(_QWORD*)(v3 + 136) + 24LL))(
        v3 + 136, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f);
    *(_DWORD*)(v3 + 144) = 0;
  }
  else {
    if (*(float*)(v3 + 144) <= 0x1.8000000000000p-1f) {
      if (((*(__int64 (**)(__int64, _QWORD*, __int64))(
               *(_QWORD*)(v3 + 136) + 8LL))(v3 + 136, v44, v3 + 168) &
           1) == 0) {
        goto LABEL_9;
      }
      (*(void (**)(__int64))(*(_QWORD*)(v3 + 136) + 16LL))(v3 + 136);
      v4 = *(_QWORD*)(v3 + 136);
      v5 = v3 + 136;
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)(v3 + 136) + 16LL))(v3 + 136);
      v4 = *(_QWORD*)(v3 + 136);
      v5 = v3 + 136;
    }
    (*(void (**)(__int64))(v4 + 24))(v5);
    *(_DWORD*)(v3 + 144) = 1061158912;
  }
  *(_DWORD*)(v3 + 148) = 0;
  *(_WORD*)(v3 + 160) = 256;
LABEL_9:
  v6 = *(_QWORD*)GameData_212d020[0];
  v7 = *(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4372LL);
  if (v7 <= 1) {
    v7 = 1;
  }
  *(_DWORD*)(v6 + 4372) = v7;
  if (*(_QWORD*)(v6 + 80) != 0) {
    v8 = *(_QWORD*)(v6 + 88);
    *(_QWORD*)(v6 + 80) = 0;
    *(_QWORD*)(v6 + 88) = 0;
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
    ++*(_QWORD*)(v6 + 184);
  }
  v9 = GameData_212cff0[0];
  if (*(_BYTE*)(*GameData_212cff0[0] + 37100) == 1) {
    v10 = *(_QWORD*)(v6 + 128);
    if (*(_BYTE*)(v10 + 56) == 1) {
      *(_BYTE*)(v10 + 56) = 0;
    }
    if (*(_QWORD*)(v6 + 96) != 0) {
      v11 = *(_QWORD*)(v6 + 104);
      *(_QWORD*)(v6 + 96) = 0;
      *(_QWORD*)(v6 + 104) = 0;
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak(v11);
      }
      ++*(_QWORD*)(v6 + 176);
    }
  }
  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    v12 = 5;
  }
  else {
    v26 = *(unsigned __int8*)(a1 + 224);
    if (*(_DWORD*)(a1 + 228) != 0) {
      v27 = v26 - 3;
      if (v27 >= 0xE || ((0x206Fu >> v27) & 1) == 0) {
        goto LABEL_51;
      }
      v12 = GameData_1b3f044[(unsigned __int8)v27];
    }
    else {
      switch (v26) {
      case 5:
        v12 = 14;
        break;
      case 16:
        v12 = 16;
        break;
      case 6:
        v42 = *(_QWORD*)(a1 + 240);
        v12 = 15;
        if (v42 != 0) {
          if ((unsigned int)*(unsigned __int8*)(v42 + 250) - 33 >= 2) {
            v12 = 15;
          }
          else {
            v12 = 12;
          }
        }
        break;
      default:
        v12 = 12;
        break;
      }
    }
  }
  game_Unit_EquipItem_6d8f40(*(_QWORD*)(a1 + 216), *(_DWORD*)(a1 + 232));
  v13 = *(_QWORD*)(a1 + 216);
  if (v13 != 0) {
    v14 = *(_DWORD*)(a1 + 256);
    v15 = GameData_212ce98[0];
    *(_BYTE*)(v13 + 584) = *(_DWORD*)(a1 + 252);
    *(_BYTE*)(v13 + 585) = v14;
    v16 = *v15;
    v17 = *(_QWORD**)(*v15 + 96);
    Image_72b4a0((__int64)v17);
    Image_72b6c0(v17);
    Image_72a260(*(_QWORD*)(v16 + 152));
  }
  VTarget_778500(*v9 + 8);
  v18 = *v9;
  v19 = *(_QWORD*)(a1 + 216);
  if (v19 == 0) {
    *(_BYTE*)(v18 + 16) = 0;
    *(_BYTE*)(v18 + 32) = *(_BYTE*)(a1 + 224);
    v28 = *(_DWORD*)(a1 + 232);
    *(_DWORD*)(v18 + 36) = v28;
    if ((v28 & 0x80000000) == 0) {
      goto LABEL_39;
    }
    goto LABEL_38;
  }
  v20 = *(unsigned __int8*)(v19 + 2088);
  *(_BYTE*)(v18 + 16) = v20;
  *(_DWORD*)(v18 + 28) = *(_DWORD*)(v19 + 592);
  v21 = *(char*)(v19 + 584);
  v22 = *(char*)(v19 + 585);
  *(_DWORD*)(v18 + 20) = v21;
  *(_DWORD*)(v18 + 24) = v22;
  *(_BYTE*)(v18 + 32) = *(_BYTE*)(a1 + 224);
  v23 = *(unsigned int*)(a1 + 232);
  *(_DWORD*)(v18 + 36) = v23;
  if ((v23 & 0x80000000) != 0) {
  LABEL_38:
    *(_QWORD*)(v18 + 40) = 0;
    goto LABEL_39;
  }
  if (v20 != 0 && game_UnitPool_Get((_BYTE*)(v18 + 16)) != nullptr) {
    v24 = &game_UnitPool_Get((_BYTE*)(v18 + 16))[v23];
    v25 = *((_WORD*)v24 + 414);
    *(_BYTE*)(v18 + 42) = *((_BYTE*)v24 + 830);
    *(_WORD*)(v18 + 40) = v25;
    *(_BYTE*)(v18 + 43) = *((_BYTE*)v24 + 831);
    *(_DWORD*)(v18 + 44) = *((_DWORD*)v24 + 208);
  }
LABEL_39:
  v29 = *v9;
  v30 = *(_QWORD*)(a1 + 240);
  if (v30 != 0) {
    v31 = *(_DWORD*)(v29 + 48) & 0xFFFFF000 | *(_WORD*)(v30 + 16) & 0xFFF;
  }
  else {
    v31 = *(_DWORD*)(v29 + 48) & 0xFFFFF000;
  }
  *(_DWORD*)(v29 + 48) = v31;
  *(_BYTE*)(v29 + 37100) = *(_BYTE*)(a1 + 248);
  (*(void (**)(__int64))(*(_QWORD*)(v29 + 8) + 24LL))(v29 + 8);
  v32 = GameData_212cfc0[0];
  Cursor_730cb0(*GameData_212cfc0[0], (char*)(a1 + 260));
  v33 = *v32;
  v34 = *(char*)(a1 + 265);
  v35 = *(_QWORD*)(*v32 + 48);
  *(_DWORD*)(v35 + 184) = *(char*)(a1 + 264);
  *(_DWORD*)(v35 + 188) = v34;
  v36 = *(_QWORD*)(v33 + 48);
  *(_BYTE*)(v33 + 24) = *(_BYTE*)(a1 + 268);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
    v43 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v43;
    __cxa_guard_release((__int64)&GameData_21a6130);
  }
  *(_DWORD*)(v36 + 168) = 0;
  LODWORD(v44[0]) = 0;
  v37 = DWORD2(GameData_21a6120);
  v38 = *v32;
  *(_QWORD*)(v36 + 144) = GameData_21a6120;
  v39 = *(_OWORD*)(v36 + 144);
  *((_QWORD*)&v39 + 1) = v37;
  *(_OWORD*)(v36 + 144) = v39;
  *(_BYTE*)(*(_QWORD*)(v38 + 48) + 240LL) = 1;
  v40 = *(_QWORD*)(*v2 + 432);
  if (*(_BYTE*)(v40 + 120) == 1) {
    (*(void (**)(__int64, double, double))(*(_QWORD*)(v40 + 96) + 24LL))(
        v40 + 96, 0x0.0p+0, 0x0.0p+0);
    *(_DWORD*)(v40 + 104) = 0;
  LABEL_48:
    *(_DWORD*)(v40 + 108) = 0;
    *(_WORD*)(v40 + 120) = 256;
    goto LABEL_49;
  }
  if (*(float*)(v40 + 104) > 0x1.8000000000000p-1f ||
      ((*(__int64 (**)(__int64, _QWORD*, __int64))(*(_QWORD*)(v40 + 96) + 8LL))(
           v40 + 96, v44, v40 + 128) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v40 + 96) + 16LL))(v40 + 96);
    (*(void (**)(__int64))(*(_QWORD*)(v40 + 96) + 24LL))(v40 + 96);
    *(_DWORD*)(v40 + 104) = 1061158912;
    goto LABEL_48;
  }
LABEL_49:
  snd_Fade_Fade_10c830((__int64)v44, 0x0.0p+0f);
  snd_play_ff2d0((__int64)"SE_SYS_Cancel_M", (__int64)"SE_SYS_Cancel_M",
                 (__int64)v44, 0, 0x10001u, 0, 0x0.0p+0f,
                 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade(v44);
  if (GameData_21cf830 != 0) {
    *(_DWORD*)(GameData_21cf830 + 152) = v12;
  }
LABEL_51:
  result = *(_BYTE**)(a1 + 22912);
  if (result != nullptr) {
    if ((*((_WORD*)result + 68) & 1) == 0) {
      result = ProcInst_657a50((__int64)result, 1);
    }
    *(_QWORD*)(a1 + 22912) = 0;
  }
  return result;
}

void GameHr_7a0b00(_QWORD* a1)
{
  __int64 v1;
  __int64* v2;
  __int16 v3;
  __int16 v4;
  __int16 v5;
  __int16 v6;
  __int16 v7;
  __int16 v8;
  __int16 v9;
  __int16 v10;
  __int16 v11;
  __int64 v12;
  __int16 v13;
  __int16 v14;
  __int16 v15;
  __int16 v16;
  __int16 v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  __int64 v27;
  _WORD* v28;
  __int16 v29;
  __int16 v30;
  __int16 v31;
  __int16 v32;
  __int16 v33;
  int v34;
  __int64* v36;
  __int16 v37;
  __int16 v38;
  __int16 v39;
  struct {
    _WORD v40[7];
    __int16 v41;
    __int16 v42;
  } v40_;

  v1 = a1[3];
  if (v1 != 0) {
    v2 = (__int64*)a1[89];
    if (v2 == (__int64*)a1[90]) {
      v11 = 0;
      v10 = 0;
      v9 = 0;
      v8 = 0;
      v7 = 0;
      v6 = 0;
      v5 = 0;
      v4 = 0;
      v3 = 0;
    }
    else {
      v3 = 0;
      v4 = 0;
      v5 = 0;
      v6 = 0;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v36 = (__int64*)a1[90];
      do {
        v12 = *v2++;
        v37 = v5;
        v38 = v4;
        v39 = v3;
        v13 = v6;
        v14 = v8;
        v15 = v9;
        v16 = v11;
        v17 = v10;
        BattleSide_7a0e10((__int64)v40_.v40, v1, v12);
        v18 = (__int16)(v40_.v40[0] + v16);
        if (v18 <= -100) {
          v18 = -100;
        }
        if (v18 >= 100) {
          v11 = 100;
        }
        else {
          v11 = v18;
        }
        v19 = (__int16)(v40_.v40[1] + v17);
        if (v19 <= -100) {
          v19 = -100;
        }
        if (v19 >= 100) {
          v10 = 100;
        }
        else {
          v10 = v19;
        }
        v20 = (__int16)(v40_.v40[2] + v15);
        if (v20 <= -100) {
          v20 = -100;
        }
        if (v20 >= 100) {
          v9 = 100;
        }
        else {
          v9 = v20;
        }
        v21 = (__int16)(v40_.v40[3] + v14);
        if (v21 <= -100) {
          v21 = -100;
        }
        if (v21 >= 100) {
          v8 = 100;
        }
        else {
          v8 = v21;
        }
        v22 = (__int16)(v40_.v40[4] + v7);
        if (v22 <= -100) {
          v22 = -100;
        }
        if (v22 >= 100) {
          v7 = 100;
        }
        else {
          v7 = v22;
        }
        v23 = (__int16)(v40_.v40[5] + v13);
        if (v23 <= -100) {
          v23 = -100;
        }
        if (v23 >= 100) {
          v6 = 100;
        }
        else {
          v6 = v23;
        }
        v24 = (__int16)(v40_.v40[6] + v37);
        if ((__int16)v24 <= -100) {
          v24 = -100;
        }
        if (v24 >= 100) {
          v5 = 100;
        }
        else {
          v5 = v24;
        }
        if ((__int16)(v40_.v41 + v38) <= -100) {
          v25 = -100;
        }
        else {
          v25 = (__int16)(v40_.v41 + v38);
        }
        if (v25 >= 100) {
          v4 = 100;
        }
        else {
          v4 = v25;
        }
        v26 = (__int16)(v40_.v42 + v39);
        if (v26 <= -100) {
          v26 = -100;
        }
        if (v26 >= 100) {
          v3 = 100;
        }
        else {
          v3 = v26;
        }
      } while (v2 != v36);
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                              memory_order_acquire) &
         1) == 0) {
      v29 = v6;
      v30 = v8;
      v31 = v9;
      v32 = v11;
      v33 = v10;
      v34 = __cxa_guard_acquire((__int64)&GameData_21d41b0);
      v10 = v33;
      v11 = v32;
      v9 = v31;
      v8 = v30;
      v6 = v29;
      if (v34 != 0) {
        GameRoutine_799290_alt1(GameData_21d40b8_alt1);
        __cxa_guard_release((__int64)&GameData_21d41b0);
        v10 = v33;
        v11 = v32;
        v9 = v31;
        v8 = v30;
        v6 = v29;
      }
    }
    v27 = a1[21];
    if (v27 != 0) {
      v28 =
          (_WORD*)(*(_QWORD*)(a1[17] +
                              8 * ((unsigned __int64)(v27 + a1[20] - 1) >> 4)) +
                   244LL * (((_DWORD)v27 + *((_DWORD*)a1 + 40) - 1) & 0xF));
    }
    else {
      v28 = GameData_21d40b8_alt1;
    }
    if (((unsigned __int16)(v10 | v11 | v9 | v8 | v7 | v6 | v5) |
         (unsigned __int16)(v4 | v3)) != 0) {
      v28[104] = v11;
      v28[105] = v10;
      v28[106] = v7;
      v28[107] = v5;
      v28[110] = v4;
      v28[108] = v3;
      v28[111] = v9;
      v28[112] = v8;
      v28[109] = v6;
    }
    else {
      v28[112] = 0;
      *((_QWORD*)v28 + 26) = 0;
      *((_QWORD*)v28 + 27) = 0;
    }
  }
}

#pragma GCC visibility pop
