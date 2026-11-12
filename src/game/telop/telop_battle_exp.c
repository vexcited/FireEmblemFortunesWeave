#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Config_bc7060(_QWORD, _QWORD);
__int64 GameRoutine_1386f80(_QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, long double);
__int64 GameRoutine_1563280(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_173fe30(__int64);
__int64 GameRoutine_1743280(__int64);
__int64 GameRoutine_1750310(_QWORD, _QWORD);
__int64 GameRoutine_7fbb60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_931c00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9a58b0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 strcmp(_QWORD, _QWORD);
extern __int64 (*game_gameui_GaugeUtil_ExpChange_vtable[])();
extern __int64 (*game_telop_TelopBattleExp_vtable[])();
extern __int64 GameData_21d9968;
extern __int64 GameData_21d9970;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting;
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64* game_g_frame_clock_ptr[3];
extern char** GameData_212e998;
__int64 TelopBattleExp_Unknown35(__int64 result, long double a2);
__int64 TelopBattleExp_Unknown39(__int64 result, long double a2);
__int64 TelopBattleExp_Unknown34(__int64 a1);
__int64 TelopBattleExp_Unknown37(__int64 a1);
__int64 TelopBattleExp_1744940(__int64 result);
__int64 TelopBattleExp_Unknown47(__int64 a1);
__int64
TelopBattleExp_Destructor_alt1(__int64 a1) __asm__("TelopBattleExp_Destructor");
__int64 TelopBattleExp_Unknown46(__int64 result);
__attribute__((swiftcall)) void GameRoutine_1114920(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1587740(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__attribute__((swiftcall)) void game_80c770(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 BlnPopup_19f25b0(_QWORD, long double);
__int64 GameRoutine_14a10d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_174d800(float, float);
__int64 GameRoutine_174da00(_QWORD, _QWORD);
__int64 GameRoutine_174dbb0(_QWORD, _QWORD);
__int64 GameRoutine_9b11a0(_QWORD, _QWORD, _QWORD);
__int64 GaugeUtil_1750310(_QWORD, _QWORD);
__int64 JobIcon_19a8c50(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_1563280(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1563380(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1563c50(_QWORD, _QWORD, _QWORD, float);
__int64 Manager_136a920(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Manager_bc6460(_QWORD, _QWORD, _QWORD);
__int64 TelopBattleExp_1744940_alt1(_QWORD) __asm__("TelopBattleExp_1744940");
__int64 TelopBattleExp_1745000_alt1(_QWORD,
                                    _QWORD) __asm__("TelopBattleExp_1745000");
__int64 TelopBattleExp_17453e0_alt1(_QWORD,
                                    _QWORD) __asm__("TelopBattleExp_17453e0");
__int64 UnitVariables_931c00(_QWORD, _QWORD, _QWORD);
__int64 Unit_931120(_QWORD);
__int64 Util_1583920(_QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_7fbb60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__n128 ProcPopup_1736c50(int, __int64*, __int64, int*);
__n128 game_ProcInst_Register(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern _UNKNOWN GameData_1aa6471;
extern _UNKNOWN GameData_1ab1dc0;
extern _UNKNOWN GameData_1adffe6;
extern _UNKNOWN GameData_1af31c8;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_224b000;
extern __int128 GameData_21a6120;
extern __int64* GameData_212c8a0;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_2130240[8];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212d690;
extern __int64 GameData_2131678;
extern __int64 GameData_2131b98[9];
extern __int64 GameData_2131ce0[30];
extern __int64 GameData_2131ce8[29];
extern __int64 GameData_21d9988;
extern __int64 GameData_21d9990;
extern __int64 GameData_21d99a8;
extern __int64 GameData_21d99b0;
extern __int64 GameData_21f61c0;
extern __int64 GameData_224b6d8;
extern __int64 game_g_game_setting_ptr;
extern __int64 ui_Manager_instance_;
extern char GameData_1a9f09e;
float LayoutAccessor_15637c0(_QWORD, _QWORD, _QWORD);
__int64 TelopBattleExp_1742270(__int64 a1, __int64* a2);
void TelopBattleExp_1743280(__int64 a1);
__n128 TelopBattleExp_Unknown36_alt1(__int64 a1, __n128 result) __asm__(
    "TelopBattleExp_Unknown36");
__int64 TelopBattleExp_Unknown2(__int64 a1);
void TelopBattleExp_1745000_alt2(_QWORD* a1,
                                 int a2) __asm__("TelopBattleExp_1745000");
__n128 TelopBattleExp_17453e0(__int64 a1, __int64 a2);
_QWORD* GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__attribute__((swiftcall)) void
GameRoutine_1114920_alt1(PSEUDO_X8, __int64*,
                         __int64*) __asm__("GameRoutine_1114920");
__attribute__((swiftcall)) void
GameRoutine_1587740_alt1(PSEUDO_X8, __int64*,
                         __int64*) __asm__("GameRoutine_1587740");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__attribute__((swiftcall)) void
game_80c770_alt1(PSEUDO_X8, __int64 result) __asm__("game_80c770");
__int64*
LayoutAccessor_155fbe0_alt1(__int64*,
                            const char*) __asm__("LayoutAccessor_155fbe0");
__int64* Manager_bc6460_alt1(_QWORD*, __int64, char) __asm__("Manager_bc6460");
__int64 BlnPopup_19f25b0_alt1(__int64*) __asm__("BlnPopup_19f25b0");
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameRoutine_9b11a0_alt1(_QWORD*, unsigned __int64*,
                                unsigned int) __asm__("GameRoutine_9b11a0");
__int64 JobIcon_19a8c50_alt1(__int64, __int64) __asm__("JobIcon_19a8c50");
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64 LayoutAccessor_1563280_alt1(__int64*, const char*,
                                    char) __asm__("LayoutAccessor_1563280");
__int64 Manager_136a920_alt1(__int64, __int64, int, unsigned int,
                             _BYTE*) __asm__("Manager_136a920");
__int64 TelopBattleExp_17453e0_alt2(__int64,
                                    __int64) __asm__("TelopBattleExp_17453e0");
__int64 Util_1583920_alt1(__int64 result, __int64,
                          __int64) __asm__("Util_1583920");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_Unit_GetJob_alt1(__int64) __asm__("game_Unit_GetJob");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_play_ff2d0_alt1(__int64, __int64, __int64, unsigned int,
                            unsigned int, int, float,
                            float) __asm__("snd_play_ff2d0");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
bool LayoutAccessor_1563380_alt1(__int64*, __int64,
                                 char) __asm__("LayoutAccessor_1563380");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
extern _UNKNOWN* GameData_20b92a8;
float LayoutAccessor_15637c0_alt1(__int64*, __int64,
                                  char) __asm__("LayoutAccessor_15637c0");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
unsigned __int8* Unit_931120_alt1(unsigned __int8*) __asm__("Unit_931120");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void GameRoutine_156c910_alt1(__int64, const char*, int,
                              ...) __asm__("GameRoutine_156c910");
void GameRoutine_174d800_alt1(__int64*, float,
                              float) __asm__("GameRoutine_174d800");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 TelopBattleExp_1745000(__int64* a1, int a2);
__attribute__((swiftcall)) void
GameRoutine_1114920_alt2(PSEUDO_X8, __int64*,
                         _QWORD*) __asm__("GameRoutine_1114920");
__attribute__((swiftcall)) void
GameRoutine_1587740_alt2(PSEUDO_X8, __int64*,
                         _QWORD*) __asm__("GameRoutine_1587740");
__int64 GameHr_14a10d0_alt1(_QWORD*, __int64, __int64,
                            __int64) __asm__("GameHr_14a10d0");
__int64 GameRoutine_9b11a0_alt2(_QWORD*, unsigned __int64*,
                                int) __asm__("GameRoutine_9b11a0");
__int64 ProcPopup_1736c50_alt1(__int64 result, __int64*, __int64,
                               int*) __asm__("ProcPopup_1736c50");
__int64
TelopBattleExp_17453e0_alt3(__int64,
                            const char*) __asm__("TelopBattleExp_17453e0");
__int64 ui_LayoutAccessor_FindPane_alt2(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt2(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt2(
    __int64 result, const char*,
    char) __asm__("ui_LayoutAccessor_SetPaneVisible");
unsigned __int64 BlnPopup_19f25b0_alt2(__int64*) __asm__("BlnPopup_19f25b0");
unsigned __int64 GameHr_1562680_alt1(unsigned __int64 result, char*,
                                     float) __asm__("GameHr_1562680");
void TelopReliance_1386f80(__int64);
void game_174d800(__int64*, float, float);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 TelopBattleExp_Unknown36(__int64 result);
void TelopBattleExp_Destructor(__int64 a1);

__int64 TelopBattleExp_1742270(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;

  v4 = GameData_212c608[0];
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_WORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = "NULL";
  *(_QWORD*)(a1 + 138) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = v4 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  game_ProcInst_Register(a1);
  v5 = GameData_2130240[0];
  *(_DWORD*)(a1 + 320) = 3;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 324) = 0;
  *(_WORD*)(a1 + 336) = 1;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = a1 + 472;
  *(_QWORD*)(a1 + 640) = a1 + 648;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = a1 + 200;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_DWORD*)(a1 + 332) = 0;
  *(_BYTE*)(a1 + 338) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 536) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_WORD*)(a1 + 560) = 0;
  *(_WORD*)(a1 + 584) = 0;
  *(_BYTE*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 656) = 0;
  *(_QWORD*)(a1 + 648) = 0;
  *(_QWORD*)(a1 + 632) = 0;
  *(_QWORD*)(a1 + 624) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_QWORD*)(a1 + 688) = 0;
  *(_QWORD*)(a1 + 680) = 0;
  *(_QWORD*)(a1 + 672) = 0;
  *(_QWORD*)(a1 + 664) = 0;
  *(_QWORD*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 712) = 0;
  *(_QWORD*)(a1 + 704) = 0;
  *(_WORD*)(a1 + 736) = 0;
  *(_WORD*)(a1 + 760) = 0;
  *(_BYTE*)(a1 + 784) = 0;
  *(_QWORD*)(a1 + 792) = 0;
  *(_BYTE*)(a1 + 800) = 0;
  *(_BYTE*)(a1 + 816) = 0;
  *(_BYTE*)(a1 + 820) = 0;
  *(_DWORD*)(a1 + 248) = 1065353216;
  *(_DWORD*)(a1 + 432) = 0x2000;
  *(_QWORD*)a1 = game_telop_TelopBattleExp_vtable;
  *(_DWORD*)(a1 + 520) = 1065353216;
  *(_DWORD*)(a1 + 552) = 1065353216;
  *(_DWORD*)(a1 + 696) = 1065353216;
  *(_DWORD*)(a1 + 728) = 1065353216;
  *(_QWORD*)(a1 + 808) = v5 + 2;
  v6 = *a2;
  *(_QWORD*)(a1 + 824) = *a2;
  *(_QWORD*)(a1 + 832) = v6;
  *(_DWORD*)(a1 + 840) = *((_DWORD*)a2 + 2);
  *(_DWORD*)(a1 + 844) = *((_DWORD*)a2 + 3);
  *(_DWORD*)(a1 + 848) = *((_DWORD*)a2 + 4);
  *(_QWORD*)(a1 + 904) = a2[9];
  *(_QWORD*)(a1 + 912) = a2[10];
  *(_DWORD*)(a1 + 852) = *((_DWORD*)a2 + 5);
  *(_DWORD*)(a1 + 856) = *((_DWORD*)a2 + 6);
  *(_DWORD*)(a1 + 860) = *((_DWORD*)a2 + 7);
  *(_DWORD*)(a1 + 864) = *((_DWORD*)a2 + 8);
  *(_DWORD*)(a1 + 868) = *((_DWORD*)a2 + 9);
  *(_DWORD*)(a1 + 872) = *((_DWORD*)a2 + 10);
  *(_DWORD*)(a1 + 876) = *((_DWORD*)a2 + 11);
  *(_DWORD*)(a1 + 880) = *((_DWORD*)a2 + 12);
  *(_DWORD*)(a1 + 884) = *((_DWORD*)a2 + 13);
  *(_DWORD*)(a1 + 888) = *((_DWORD*)a2 + 14);
  *(_DWORD*)(a1 + 892) = *((_DWORD*)a2 + 15);
  *(_DWORD*)(a1 + 896) = *((_DWORD*)a2 + 16);
  LODWORD(v6) = *((_DWORD*)a2 + 17);
  *(_QWORD*)(a1 + 952) = 0;
  *(_QWORD*)(a1 + 959) = 0;
  v7 = GameData_2131ce0[0];
  *(_QWORD*)(a1 + 1080) = 0;
  *(_QWORD*)(a1 + 936) = v7 + 16;
  *(_QWORD*)(a1 + 1087) = 0;
  v8 = GameData_2131ce8[0];
  *(_QWORD*)(a1 + 1216) = 0;
  *(_QWORD*)(a1 + 1064) = v8 + 16;
  *(_QWORD*)(a1 + 1223) = 0;
  v9 = GameData_2131b98[0];
  *(_QWORD*)(a1 + 976) = 1065353216;
  *(_QWORD*)(a1 + 1104) = 1065353216;
  *(_QWORD*)(a1 + 1240) = 1065353216;
  *(_WORD*)(a1 + 928) = 0;
  *(_QWORD*)(a1 + 968) = 0;
  *(_QWORD*)(a1 + 944) = 0;
  *(_WORD*)(a1 + 984) = 0;
  *(_WORD*)(a1 + 992) = 0;
  *(_WORD*)(a1 + 1016) = 0;
  *(_WORD*)(a1 + 1040) = 0;
  *(_QWORD*)(a1 + 1096) = 0;
  *(_QWORD*)(a1 + 1072) = 0;
  *(_WORD*)(a1 + 1112) = 0;
  *(_WORD*)(a1 + 1120) = 0;
  *(_WORD*)(a1 + 1144) = 0;
  *(_WORD*)(a1 + 1168) = 0;
  *(_DWORD*)(a1 + 1192) = 0;
  *(_QWORD*)(a1 + 1232) = 0;
  *(_QWORD*)(a1 + 1208) = 0;
  *(_WORD*)(a1 + 1248) = 0;
  *(_WORD*)(a1 + 1256) = 0;
  *(_WORD*)(a1 + 1280) = 0;
  *(_WORD*)(a1 + 1304) = 0;
  *(_DWORD*)(a1 + 900) = v6;
  *(_QWORD*)(a1 + 1328) = 0;
  *(_QWORD*)(a1 + 1336) = 0;
  *(_QWORD*)(a1 + 1344) = 0;
  *(_QWORD*)(a1 + 1352) = 0;
  *(_QWORD*)(a1 + 1360) = 0;
  *(_QWORD*)(a1 + 1368) = 0;
  *(_QWORD*)(a1 + 1376) = 0;
  *(_QWORD*)(a1 + 1382) = 0;
  *(_QWORD*)(a1 + 1200) = v9 + 16;
  v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       296, 16, 0);
  *(_QWORD*)(v10 + 16) = 0;
  v11 = GameData_2131678;
  *(_DWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_DWORD*)(v10 + 48) = 0x2000;
  *(_DWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_WORD*)(v10 + 80) = 0;
  *(_WORD*)(v10 + 116) = 0;
  *(_WORD*)(v10 + 136) = 0;
  *(_BYTE*)(v10 + 160) = 0;
  *(_BYTE*)(v10 + 288) = 0;
  *(_QWORD*)(v10 + 272) = 0;
  *(_QWORD*)(v10 + 280) = 0;
  *(_QWORD*)(v10 + 256) = 0;
  *(_QWORD*)(v10 + 264) = 0;
  *(_QWORD*)(v10 + 240) = 0;
  *(_QWORD*)(v10 + 248) = 0;
  *(_QWORD*)(v10 + 224) = 0;
  *(_QWORD*)(v10 + 232) = 0;
  *(_QWORD*)(v10 + 208) = 0;
  *(_QWORD*)(v10 + 216) = 0;
  *(_QWORD*)(v10 + 192) = 0;
  *(_QWORD*)(v10 + 200) = 0;
  *(_QWORD*)(v10 + 176) = 0;
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 168) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_DWORD*)(v10 + 127) = 0;
  *(_QWORD*)(a1 + 1400) = v10;
  *(_QWORD*)v10 = v11 + 16;
  *(_QWORD*)(v10 + 8) = 0;
  *(_WORD*)(v10 + 108) = 256;
  *(_DWORD*)(v10 + 112) = -1082130432;
  *(_DWORD*)(v10 + 292) = 2;
  *(_QWORD*)(v10 + 24) = 0;
  result = v10 + 24;
  *(_QWORD*)(a1 + 1392) = result;
  return result;
}

void TelopBattleExp_1743280(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  bool v4;
  int v5;
  int v6;
  unsigned __int64 v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  _BOOL4 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  float v34;
  float v35;
  int v36;
  int v37;
  int v38;
  float v39;
  float v40;
  float v41;
  float v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  char* v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  char* v57;
  int v58;
  unsigned __int64 v59;
  int v60;
  unsigned int v61;
  int v62;
  int v63;
  int v64;
  unsigned int v65;
  int v66;
  __int64 v67;
  __int64* v68;
  __int64 v69;
  char* v70;
  unsigned __int8* v71;
  __int64 v72;
  __int64 v73;
  __int64* v74;
  int v75;
  int v76;
  unsigned __int64 v77;
  int v78;
  int v79;
  int v80;
  int v81;
  __int64* v82;
  float v83;
  float v84;
  int v85;
  int v86;
  int v87;
  float v88;
  float v89;
  float v90;
  float v91;
  unsigned __int64 v92;
  int v93;
  int v94;
  int v95;
  int v96;
  unsigned int v97;
  int v98;
  __int64 v99;
  __int64* v100;
  __int64* v101;
  unsigned int v102;
  float v103;
  float v104;
  unsigned int v105;
  float v106;
  float v107;
  __int64 v108;
  __int64* v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  unsigned int v113;
  __int64 v114;
  unsigned int v115;
  bool v116;
  __int64 v117;
  int v118;
  unsigned __int64 v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  unsigned int v126;
  int v127;
  void* v128;
  __int64 v129;
  __int64 v130;
  unsigned int v131;
  __int64 v132;
  unsigned int v133;
  bool v134;
  __int64 v135;
  signed int v136;
  int v137;
  int v138;
  int v139;
  unsigned int v140;
  int v141;
  _QWORD* v142;
  signed int v143;
  int v144;
  signed int v145;
  int v146;
  int v147;
  int v148;
  unsigned int v149;
  int v150;
  _QWORD* v151;
  _QWORD* v152;
  bool v153;
  char v154;
  __int64 v155;
  struct {
    char* v156;
    unsigned __int64 v157;
  } v156_;
  struct {
    __int64* v158;
    __int64 v159;
  } v158_;
  struct {
    __int64 v160;
    __int64 v161;
  } v160_;

  v2 = *(_QWORD*)(a1 + 824);
  v3 = *(_QWORD*)(v2 + 408);
  v4 = v3 != 0 || *(unsigned __int8*)(game_Unit_GetJob_alt1(v2) + 417) > 1u;
  v5 = *(_DWORD*)(a1 + 960);
  v6 = 0;
  v7 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
  if (v5 >= (int)v7) {
    v8 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
  }
  else {
    v8 = *(_DWORD*)(a1 + 960);
  }
  v9 = v8 - 1;
  if (v5 <= 0) {
    v9 = 0;
  }
  if (v5 < 1) {
    v10 = 1;
  }
  else {
    v10 = v8;
  }
  if (v10 != (_DWORD)v7) {
    v6 = *(_DWORD*)(GameData_21d9968 + 4LL * v10);
  }
  v11 = *(_DWORD*)(a1 + 944);
  if ((int)v7 < 1) {
    v13 = 0;
  }
  else {
    v12 = *(_DWORD*)GameData_21d9968;
    v13 = 0;
    v14 = *(_DWORD*)(GameData_21d9968 + 4LL * (unsigned int)(v7 - 1));
    if (v14 >= v11) {
      v14 = *(_DWORD*)(a1 + 944);
    }
    if (v11 >= v12) {
      v12 = v14;
    }
    while (1) {
      v15 = (unsigned int)(v13 + v7) >> 1;
      v16 = *(_DWORD*)(GameData_21d9968 + 4LL * v15);
      if (v12 == v16) {
        break;
      }
      if (v12 < v16) {
        LODWORD(v7) = (unsigned int)(v13 + v7) >> 1;
      }
      else {
        v13 = v15 + 1;
      }
      if (v13 >= (int)v7) {
        goto LABEL_27;
      }
    }
    v13 = v15 + 1;
  }
LABEL_27:
  v17 = *(_DWORD*)(GameData_21d9968 + 4LL * v9);
  LayoutAccessor_1560070_alt1((void*)(&v160_.v160), (__int64*)(a1 + 168),
                              "L_Lv");
  if (v160_.v161 != 0) {
    v18 = std___1___shared_weak_count_lock_alt1(v160_.v161);
    v19 = (__int64*)v160_.v160;
    if (v160_.v161 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v160_.v161);
    }
    if (v18 == 0 || v19 == nullptr) {
      if (v18 == 0) {
        goto LABEL_90;
      }
      goto LABEL_88;
    }
    if (v19[2] != 0) {
      v20 = v19[1];
      if (v20 != 0) {
        v21 = std___1___shared_weak_count_lock_alt1(v20);
        if (v21 == 0) {
          goto LABEL_45;
        }
        v23 = *v19;
        if (*v19 != 0) {
          v22 = *(unsigned __int8*)(v23 + 24);
          v24 = v23 + 152;
          if (v22 == 0) {
            v24 = 0;
          }
          v25 = v24 != v19[2];
        }
        else {
          v25 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v155 = v3;
          v26 = v21;
          v154 = v22;
          (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
          v27 = v26;
          v3 = v155;
          std___1___shared_weak_count___release_weak_alt2(v27);
          LOBYTE(v22) = v154;
        }
        if (v25) {
        LABEL_45:
          v28 = v19[1];
          if (v28 == 0 || *(_QWORD*)(v28 + 8) == -1) {
            goto LABEL_58;
          }
        LABEL_49:
          v29 = ui_LayoutAccessor_FindPane_alt2(v19, "T_Lv_Num");
          if (v29 != 0) {
            v30 = __dynamic_cast(v29, GameData_212d670[0], GameData_212d690, 0);
            if (v30 != 0) {
              GameRoutine_156c910_alt1(v30, "%d", 1, (unsigned int)v13);
            }
          }
          ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v19, "IconMax",
                                                *(_BYTE*)(a1 + 964));
          if (*(_BYTE*)(a1 + 1388) == 1) {
            if ((*(_BYTE*)(a1 + 1389) & 1) == 0 &&
                LayoutAccessor_15637c0_alt1(v19, (__int64)"LvUp", 0) >=
                    0x1.0000000000000p+2f) {
              *(_BYTE*)(a1 + 1389) = 1;
              TelopBattleExp_1745000((__int64*)a1, v13);
              game_80c770_alt1((void*)((__int64)&v160_.v160),
                               (__int64)"SE_SYS_Level_Up");
            }
            if (LayoutAccessor_1563380_alt1(v19, (__int64)"LvUp", 0)) {
              *(_WORD*)(a1 + 1388) = 0;
              GameHr_1562680_alt1((unsigned __int64)v19, "Wait",
                                  0x1.0000000000000p+0f);
            }
          }
          goto LABEL_58;
        }
        if ((v22 & 1) != 0) {
          goto LABEL_49;
        }
      }
    }
  LABEL_58:
    if ((*(_BYTE*)(a1 + 1388) & 1) == 0 && *(_DWORD*)(a1 + 1356) != v13) {
      *(_BYTE*)(a1 + 1388) = 1;
      GameHr_1562680_alt1((unsigned __int64)v19, "LvUp", 0x1.0000000000000p+0f);
      *(_DWORD*)(a1 + 1356) = v13;
    }
    v31 = a1 + 168;
    if (*(_BYTE*)(a1 + 964) == 1) {
      ui_LayoutAccessor_SetPaneVisible_alt2(v31, "T_Lv_More", 0);
      ui_LayoutAccessor_SetPaneVisible_alt2(a1 + 168, "T_Lv_NumMore", 0);
      ui_LayoutAccessor_SetPaneVisible_alt2(a1 + 168, "T_Lv_Max", 1);
    }
    else {
      ui_LayoutAccessor_SetPaneVisible_alt2(v31, "T_Lv_More", 1);
      ui_LayoutAccessor_SetPaneVisible_alt2(a1 + 168, "T_Lv_NumMore", 1);
      ui_LayoutAccessor_SetPaneVisible_alt2(a1 + 168, "T_Lv_Max", 0);
      v32 =
          ui_LayoutAccessor_FindPane_alt2((__int64*)(a1 + 168), "T_Lv_NumMore");
      if (v32 != 0) {
        v33 = __dynamic_cast(v32, GameData_212d670[0], GameData_212d690, 0);
        if (v33 != 0) {
          GameRoutine_156c910_alt1(v33, "%d", 1, (unsigned int)(v6 - v11));
        }
      }
    }
    LayoutAccessor_1560070_alt1((void*)(&v158_.v158), (__int64*)(a1 + 168),
                                "L_Lv_Gauge");
    v34 = 0x1.0000000000000p+0f;
    v35 = 0x1.0000000000000p+0f;
    if (v6 >= 1) {
      v36 = v6 - v17;
      if (v6 != v17) {
        v37 = *(_DWORD*)(a1 + 948);
        if (v37 <= v17) {
          v37 = v17;
        }
        v38 = v37 - v17;
        if (v36 < v38) {
          v38 = v6 - v17;
        }
        v35 = (float)v38 / (float)v36;
      }
    }
    if (v6 >= 1) {
      v39 = (float)v17;
      if ((float)v17 != (float)v6) {
        v40 = *(float*)(a1 + 968);
        v41 = (float)v6 - v39;
        if (v40 < v39) {
          v40 = (float)v17;
        }
        v42 = v40 - v39;
        if (v41 < v42) {
          v42 = v41;
        }
        v34 = v42 / v41;
      }
    }
    if (v158_.v159 != 0) {
      v43 = std___1___shared_weak_count_lock_alt1(v158_.v159);
      if (v43 != 0) {
        v44 = v43;
        if (v158_.v158 != nullptr) {
          game_174d800(v158_.v158, v35, v34);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
          std___1___shared_weak_count___release_weak_alt2(v44);
        }
      }
      if (v158_.v159 != 0) {
        std___1___shared_weak_count___release_weak_alt2(v158_.v159);
      }
    }
  LABEL_88:
    if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      std___1___shared_weak_count___release_weak_alt2(v18);
    }
  }
LABEL_90:
  v45 = *(_QWORD*)(a1 + 1328);
  v46 = *(_QWORD*)(a1 + 1336);
  if (v45 != v46 && !v4) {
    v47 = 0;
    while (1) {
      v58 = *(unsigned __int8*)(*(_QWORD*)(a1 + 1360) + v47);
      if (v58 ==
          (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45)) {
        goto LABEL_112;
      }
      v59 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
      if ((int)v59 < 1) {
        LOBYTE(v60) = 0;
      }
      else {
        v60 = 0;
        if ((unsigned int)v59 >= 0xC) {
          v61 = 12;
        }
        else {
          v61 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
        }
        v62 = *(_DWORD*)(GameData_21d99a8 + 4LL * (unsigned int)(v59 - 1));
        v63 = *(_DWORD*)(GameData_21d99a8 + 4LL * v61 - 4);
        if (v62 >= v63) {
          v62 = v63;
        }
        v64 = v63 >= (signed __int32)*(_DWORD*)GameData_21d99a8
                  ? v62
                  : *(_DWORD*)GameData_21d99a8;
        while (1) {
          v65 = (unsigned int)(v60 + v59) >> 1;
          v66 = *(_DWORD*)(GameData_21d99a8 + 4LL * v65);
          if (v64 == v66) {
            break;
          }
          if (v64 < v66) {
            LODWORD(v59) = (unsigned int)(v60 + v59) >> 1;
          }
          else {
            v60 = v65 + 1;
          }
          if (v60 >= (int)v59) {
            goto LABEL_131;
          }
        }
        LOBYTE(v60) = v65 + 1;
      }
    LABEL_131:
      if (*(unsigned __int8*)(*(_QWORD*)(a1 + 1360) + v47) ==
          (unsigned __int8)v60) {
        goto LABEL_112;
      }
      v156_.v156 = game_util_Format_alt1("L_MasteryLvUp_%02d", v47);
      v156_.v157 = strlen_alt1(v156_.v156);
      GameRoutine_1114920_alt2((void*)(&v160_.v160), (__int64*)(a1 + 168),
                               &v156_.v156);
      if (v160_.v161 != 0) {
        v67 = std___1___shared_weak_count_lock_alt1(v160_.v161);
        v68 = (__int64*)v160_.v160;
        if (v160_.v161 != 0) {
          std___1___shared_weak_count___release_weak_alt2(v160_.v161);
        }
        if (v67 != 0 && v68 != nullptr) {
          BlnPopup_19f25b0_alt2(v68);
        LABEL_139:
          if (atomic_fetch_add((atomic_ullong* volatile)(v67 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v67 + 16LL))(v67);
            std___1___shared_weak_count___release_weak_alt2(v67);
          }
          goto LABEL_111;
        }
        if (v67 != 0) {
          goto LABEL_139;
        }
      }
    LABEL_111:
      v57 = game_util_Format_alt1("N_MasteryEff_%02d", v47);
      TelopBattleExp_17453e0_alt3(a1, v57);
      *(_BYTE*)(*(_QWORD*)(a1 + 1360) + v47) =
          (*(__int64 (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
    LABEL_112:
      ++v47;
      v45 += 160;
      if (v45 == v46) {
        if ((int)v47 >= 4) {
          goto LABEL_94;
        }
        goto LABEL_93;
      }
    }
  }
  LODWORD(v47) = 0;
  do {
  LABEL_93:
    v48 = game_util_Format_alt1("L_IconMastery_Gauge_%02d", v47);
    v49 = LayoutAccessor_155fbe0_alt1((__int64*)(a1 + 168), v48);
    LayoutAccessor_155e830_alt1((__int64)v49, 0);
    LODWORD(v47) = v47 + 1;
  } while ((_DWORD)v47 != 4);
LABEL_94:
  if (v3 != 0) {
    ui_LayoutAccessor_SetPaneVisible_alt2(a1 + 168, "L_ClassIcon", 0);
  }
  v50 = *(_QWORD*)(a1 + 824);
  if (*(_QWORD*)(v50 + 408) == 0 && v3 == 0 &&
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v50 + 400) + 24LL) + 1104LL) != 0) {
    v156_.v156 = "L_ClassIcon";
    v156_.v157 = 11;
    GameRoutine_1587740_alt2((void*)(&v160_.v160), (__int64*)(a1 + 168),
                             &v156_.v156);
    if (v160_.v161 == 0) {
      goto LABEL_200;
    }
    v55 = std___1___shared_weak_count_lock_alt1(v160_.v161);
    v56 = v160_.v160;
    if (v160_.v161 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v160_.v161);
    }
    if (v55 != 0 && v56 != 0) {
      (*(void (**)(__int64, __int64))(*(_QWORD*)v56 + 40LL))(v56, 1);
      JobIcon_19a8c50_alt1(v56, *(_QWORD*)(a1 + 824));
    }
    else if (v55 == 0) {
      goto LABEL_200;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
      std___1___shared_weak_count___release_weak_alt2(v55);
    }
  LABEL_200:
    v101 = LayoutAccessor_155fbe0_alt1((__int64*)(a1 + 168),
                                       "L_ClassIcon/L_Gauge");
    v102 = *(_DWORD*)(a1 + 1192);
    if ((int)v102 < 1) {
      v106 = 0x1.0000000000000p+0f;
      v107 = 0x1.0000000000000p+0f;
    }
    else {
      v103 = *(float*)(a1 + 1096);
      v104 = (float)v102;
      v105 = *(_DWORD*)(a1 + 1076) & ~(*(int*)(a1 + 1076) >> 31);
      if (v102 < v105) {
        v105 = *(_DWORD*)(a1 + 1192);
      }
      if (v103 < 0x0.0p+0f) {
        v103 = 0x0.0p+0f;
      }
      v106 = (float)v105 / v104;
      if (v103 > v104) {
        v103 = (float)v102;
      }
      v107 = v103 / v104;
    }
    game_174d800(v101, v106, v107);
    if (*(_BYTE*)(a1 + 1092) != 1 || (*(_BYTE*)(a1 + 929) & 1) != 0) {
      goto LABEL_97;
    }
    v156_.v156 = "L_ClassLvUp";
    v156_.v157 = 11;
    GameRoutine_1114920_alt2((void*)(&v160_.v160), (__int64*)(a1 + 168),
                             &v156_.v156);
    if (v160_.v161 == 0) {
      goto LABEL_286;
    }
    v108 = std___1___shared_weak_count_lock_alt1(v160_.v161);
    v109 = (__int64*)v160_.v160;
    if (v160_.v161 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v160_.v161);
    }
    if (v108 != 0 && v109 != nullptr) {
      BlnPopup_19f25b0_alt2(v109);
    }
    else if (v108 == 0) {
    LABEL_286:
      TelopBattleExp_17453e0_alt3(a1, "N_ClassEff");
      snd_Fade_Fade_10c830_alt1((__int64)&v160_.v160, 0x0.0p+0f);
      snd_play_ff2d0_alt1((__int64)"SE_SYS_Level_Up",
                          (__int64)"SE_SYS_Level_Up", (__int64)&v160_.v160, 0,
                          0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade_alt1(&v160_.v160);
      *(_BYTE*)(a1 + 929) = 1;
      goto LABEL_97;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v108 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v108 + 16LL))(v108);
      std___1___shared_weak_count___release_weak_alt2(v108);
    }
    goto LABEL_286;
  }
LABEL_97:
  if (*(_BYTE*)(a1 + 928) != 1) {
    return;
  }
  v51 = *(_QWORD*)(a1 + 824);
  if (*(_BYTE*)(v51 + 1880) == 0) {
    return;
  }
  v52 = LayoutAccessor_155fbe0_alt1((__int64*)(a1 + 168), "L_Animal_Name");
  v53 = ui_LayoutAccessor_FindPane_alt2(v52, "Icon");
  if (v53 != 0) {
    v54 = __dynamic_cast(v53, GameData_212d670[0], GameData_212d678[0], 0);
    if (v54 != 0) {
      v69 = *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                       8LL * *(unsigned __int8*)(v51 + 1880));
      if (v69 != 0) {
        if ((unsigned int)*(unsigned __int8*)(v69 + 32) - 1 > 4) {
          v70 = &GameData_1a9f09e;
        }
        else {
          v70 = (char*)*(&GameData_20b92a8 +
                         (unsigned __int8)(*(_BYTE*)(v69 + 32) - 1));
        }
        Manager_136a920_alt1(ui_Manager_instance_ + 1264, v54, 0, 2u, v70);
      }
    }
  }
  v71 = Unit_931120_alt1((unsigned __int8*)(v51 + 1880));
  if (v71 != nullptr) {
    v72 = (__int64)v71;
    v73 = ui_LayoutAccessor_FindTextBox_alt2(v52, "T_Txt");
    if (v73 != 0) {
      GameRoutine_156c5d0_alt1(v73, v72, 0);
    }
  }
  v74 = LayoutAccessor_155fbe0_alt1((__int64*)(a1 + 168), "L_AnimalLv");
  Util_1583920_alt1((__int64)v74, v51 + 1880, *(_QWORD*)(a1 + 824));
  v75 = *(_DWORD*)(a1 + 1224);
  v76 = 0;
  v77 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  if (v75 >= (int)v77) {
    v78 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  }
  else {
    v78 = *(_DWORD*)(a1 + 1224);
  }
  v79 = v78 - 1;
  if (v75 <= 0) {
    v79 = 0;
  }
  if (v75 < 1) {
    v80 = 1;
  }
  else {
    v80 = v78;
  }
  if (v80 != (_DWORD)v77) {
    v76 = *(_DWORD*)(GameData_21d9988 + 4LL * v80);
  }
  v81 = *(_DWORD*)(GameData_21d9988 + 4LL * v79);
  v82 = LayoutAccessor_155fbe0_alt1((__int64*)(a1 + 168), "L_AnimalLv/L_Gauge");
  v83 = 0x1.0000000000000p+0f;
  v84 = 0x1.0000000000000p+0f;
  if (v76 >= 1) {
    v85 = v76 - v81;
    if (v76 != v81) {
      v86 = *(_DWORD*)(a1 + 1212);
      if (v86 <= v81) {
        v86 = v81;
      }
      v87 = v86 - v81;
      if (v85 < v87) {
        v87 = v76 - v81;
      }
      v84 = (float)v87 / (float)v85;
    }
  }
  if (v76 >= 1) {
    v88 = (float)v81;
    if ((float)v81 != (float)v76) {
      v89 = *(float*)(a1 + 1232);
      v90 = (float)v76 - v88;
      if (v89 < v88) {
        v89 = (float)v81;
      }
      v91 = v89 - v88;
      if (v90 < v91) {
        v91 = (float)v76 - v88;
      }
      v83 = v91 / v90;
    }
  }
  game_174d800(v82, v84, v83);
  v92 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  if ((int)v92 < 1) {
    v94 = 0;
  }
  else {
    v93 = *(_DWORD*)(a1 + 1208);
    v94 = 0;
    v95 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v92 - 1));
    if (v95 >= v93) {
      v95 = *(_DWORD*)(a1 + 1208);
    }
    v96 = v93 >= (signed __int32)*(_DWORD*)GameData_21d9988
              ? v95
              : *(_DWORD*)GameData_21d9988;
    while (1) {
      v97 = (unsigned int)(v94 + v92) >> 1;
      v98 = *(_DWORD*)(GameData_21d9988 + 4LL * v97);
      if (v96 == v98) {
        break;
      }
      if (v96 < v98) {
        LODWORD(v92) = (unsigned int)(v94 + v92) >> 1;
      }
      else {
        v94 = v97 + 1;
      }
      if (v94 >= (int)v92) {
        goto LABEL_190;
      }
    }
    v94 = v97 + 1;
  }
LABEL_190:
  if (*(_DWORD*)(a1 + 1384) == v94) {
    return;
  }
  *(_DWORD*)(a1 + 1384) = v94;
  v156_.v156 = "L_AnimalLvUp";
  v156_.v157 = 12;
  GameRoutine_1114920_alt2((void*)(&v160_.v160), (__int64*)(a1 + 168),
                           &v156_.v156);
  if (v160_.v161 != 0) {
    v99 = std___1___shared_weak_count_lock_alt1(v160_.v161);
    v100 = (__int64*)v160_.v160;
    if (v160_.v161 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v160_.v161);
    }
    if (v99 != 0 && v100 != nullptr) {
      BlnPopup_19f25b0_alt2(v100);
    }
    else if (v99 == 0) {
      goto LABEL_220;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v99 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v99 + 16LL))(v99);
      std___1___shared_weak_count___release_weak_alt2(v99);
    }
  }
LABEL_220:
  TelopBattleExp_17453e0_alt3(a1, "N_AnimalEff");
  snd_Fade_Fade_10c830_alt1((__int64)&v160_.v160, 0x0.0p+0f);
  snd_play_ff2d0_alt1((__int64)"SE_SYS_Level_Up", (__int64)"SE_SYS_Level_Up",
                      (__int64)&v160_.v160, 0, 0x10001u, 0, 0x0.0p+0f,
                      0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade_alt1(&v160_.v160);
  v110 = *(_QWORD*)(a1 + 824);
  if (v110 == 0) {
    goto LABEL_233;
  }
  v111 = *(_QWORD*)(v110 + 392);
  if (v111 == 0) {
    goto LABEL_233;
  }
  v112 = *(_QWORD*)(v51 + 1904);
  if (v112 == 0) {
    goto LABEL_233;
  }
  v113 = *(unsigned __int8*)(v111 + 48);
  v114 = v51 + 1904;
  do {
    v115 = *(unsigned __int8*)(v112 + 26);
    v116 = v115 >= v113;
    if (v115 >= v113) {
      v117 = 0;
    }
    else {
      v117 = 8;
    }
    if (v116) {
      v114 = v112;
    }
    v112 = *(_QWORD*)(v112 + v117);
  } while (v112 != 0);
  if (v114 != v51 + 1904 && v113 >= *(unsigned __int8*)(v114 + 26)) {
    v118 = *(_WORD*)(v114 + 28) & 0xFFF;
  }
  else {
  LABEL_233:
    v118 = 0;
  }
  v119 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  if ((int)v119 < 1) {
    return;
  }
  v120 = *(_DWORD*)GameData_21d9988;
  v121 = 0;
  v122 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v119 - 1));
  if (v122 >= v118) {
    v123 = v118;
  }
  else {
    v123 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v119 - 1));
  }
  if (v118 >= v120) {
    v124 = v123;
  }
  else {
    v124 = *(_DWORD*)GameData_21d9988;
  }
  v125 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  do {
    v126 = (unsigned int)(v121 + v125) >> 1;
    v127 = *(_DWORD*)(GameData_21d9988 + 4LL * v126);
    if (v124 == v127) {
      v121 = v126 + 1;
      if ((int)(v126 + 1) <= 3) {
        goto LABEL_248;
      }
      goto LABEL_252;
    }
    if (v124 < v127) {
      v125 = (unsigned int)(v121 + v125) >> 1;
    }
    else {
      v121 = v126 + 1;
    }
  } while (v121 < v125);
  if (v121 <= 3) {
  LABEL_248:
    if (v121 == 2) {
      v128 = &GameData_1ab1dc0;
    }
    else {
      if (v121 != 3) {
        return;
      }
      v128 = &GameData_1af31c8;
    }
    goto LABEL_318;
  }
LABEL_252:
  if (v121 == 4) {
    v128 = &GameData_1adffe6;
  LABEL_318:
    v160_.v161 = (__int64)v128;
    v160_.v160 = game_HashString_alt1((__int64)v128);
    GameRoutine_9b11a0_alt2(&GameData_21f61c0, (unsigned __int64*)&v160_.v160,
                            1);
    return;
  }
  if (v121 != 5) {
    return;
  }
  if (v110 == 0) {
  LABEL_267:
    LODWORD(v129) = 0;
    goto LABEL_268;
  }
  v129 = *(_QWORD*)(v110 + 392);
  if (v129 != 0) {
    v130 = *(_QWORD*)(v51 + 1904);
    if (v130 != 0) {
      v131 = *(unsigned __int8*)(v129 + 48);
      v132 = v51 + 1904;
      do {
        v133 = *(unsigned __int8*)(v130 + 26);
        v134 = v133 >= v131;
        if (v133 >= v131) {
          v135 = 0;
        }
        else {
          v135 = 8;
        }
        if (v134) {
          v132 = v130;
        }
        v130 = *(_QWORD*)(v130 + v135);
      } while (v130 != 0);
      if (v132 != v51 + 1904 && v131 >= *(unsigned __int8*)(v132 + 26)) {
        LODWORD(v129) = *(_WORD*)(v132 + 28) & 0xFFF;
        goto LABEL_268;
      }
    }
    goto LABEL_267;
  }
LABEL_268:
  v136 = 0;
  if (v122 >= (int)v129) {
    v137 = v129;
  }
  else {
    v137 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v119 - 1));
  }
  if ((int)v129 >= v120) {
    v138 = v137;
  }
  else {
    v138 = *(_DWORD*)GameData_21d9988;
  }
  v139 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  while (1) {
    v140 = (unsigned int)(v136 + v139) >> 1;
    v141 = *(_DWORD*)(GameData_21d9988 + 4LL * v140);
    if (v138 == v141) {
      break;
    }
    if (v138 < v141) {
      v139 = (unsigned int)(v136 + v139) >> 1;
    }
    else {
      v136 = v140 + 1;
    }
    if (v136 >= v139) {
      goto LABEL_289;
    }
  }
  v136 = v140 + 1;
LABEL_289:
  v142 = *(_QWORD**)(v51 + 1896);
  if (v142 == (_QWORD*)(v51 + 1904)) {
    v143 = 0;
  }
  else {
    v143 = 0;
    do {
      v144 = *((unsigned __int8*)v142 + 28);
      if (*((_BYTE*)v142 + 28) != 0) {
        v145 = 0;
        if (v122 >= v144) {
          v146 = *((unsigned __int8*)v142 + 28);
        }
        else {
          v146 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v119 - 1));
        }
        if (v120 <= v144) {
          v147 = v146;
        }
        else {
          v147 = *(_DWORD*)GameData_21d9988;
        }
        v148 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
        while (1) {
          v149 = (unsigned int)(v145 + v148) >> 1;
          v150 = *(_DWORD*)(GameData_21d9988 + 4LL * v149);
          if (v147 == v150) {
            break;
          }
          if (v147 < v150) {
            v148 = (unsigned int)(v145 + v148) >> 1;
          }
          else {
            v145 = v149 + 1;
          }
          if (v145 >= v148) {
            goto LABEL_307;
          }
        }
        v145 = v149 + 1;
      LABEL_307:
        if (v143 <= v145) {
          v143 = v145;
        }
      }
      v151 = (_QWORD*)v142[1];
      if (v151 != nullptr) {
        do {
          v152 = v151;
          v151 = (_QWORD*)*v151;
        } while (v151 != nullptr);
      }
      else {
        do {
          v152 = (_QWORD*)v142[2];
          v153 = v142 == (_QWORD*)*v152;
          v142 = v152;
        } while (!v153);
      }
      v142 = v152;
    } while (v152 != (_QWORD*)(v51 + 1904));
  }
  if (v136 == v143) {
    v128 = &GameData_1aa6471;
    goto LABEL_318;
  }
}

__int64 TelopBattleExp_Unknown35(__int64 result, long double a2)
{
  if (*(_BYTE*)(result + 928) == 1) {
    LODWORD(a2) = 1.0;
    return GameRoutine_1562680(result + 168, "Animal_In", a2);
  }
  return result;
}

__int64 TelopBattleExp_Unknown39(__int64 result, long double a2)
{
  if (*(_BYTE*)(result + 928) == 1) {
    LODWORD(a2) = 1.0;
    return GameRoutine_1562680(result + 168, "Animal_Out", a2);
  }
  return result;
}

__int64 TelopBattleExp_Unknown34(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  char** v6;
  unsigned int v7;
  char** v8;
  int v9;
  unsigned int v10;

  *(_BYTE*)(a1 + 920) = 0;
  v1 = *eft_g_effectSystem_ptr[0];
  v2 = *(_QWORD*)(*eft_g_effectSystem_ptr[0] + 112);
  v3 = *(_QWORD*)(v2 + 24);
  if (v3 != 0 && (v4 = *(_DWORD*)(v2 + 32)) != 0) {
    v5 = 0;
    v6 = GameData_212e998;
    while (1) {
      v7 = (v4 + v5) >> 1;
      v8 = (char**)(v3 + 336LL * v7);
      v9 = strcmp(*v8, "UI_Deco_StatusUP");
      if (v9 == 0) {
        break;
      }
      if (v9 < 0) {
        v5 = v7 + 1;
      }
      else {
        v4 = (v4 + v5) >> 1;
      }
      if (v5 == v4) {
        v8 = v6;
        break;
      }
    }
  }
  else {
    v8 = GameData_212e998;
  }
  v10 = GameRoutine_9a58b0(v8);
  return Config_bc7060(v1, v10);
}

__int64 TelopBattleExp_Unknown37(__int64 a1)
{

#pragma clang fp contract(off)
  float v1;
  float v2;
  const char* v4;
  __int64 v5;
  char v6;
  float v7;
  float v8;

  v1 = *(float*)(a1 + 1352);
  v2 = 0x1.e000000000000p+4f;
  if (v1 < 0x1.e000000000000p+4f) {
    v6 = 0;
    v7 = 0x1.e000000000000p+5f /
         (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
    if (v7 <= 0x0.0p+0f) {
      v7 = 0x1.0000000000000p+0f;
    }
    if ((*(_DWORD*)(game_g_game_setting + 944) & 0xB) != 0) {
      v7 = v7 * 0x1.0000000000000p+3f;
    }
    v8 = v1 + v7;
    if (v8 <= 0x1.e000000000000p+4f) {
      v2 = v8;
    }
    *(float*)(a1 + 1352) = v2;
  }
  else {
    v4 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 208LL))(a1);
    v5 = *(_QWORD*)(a1 + 792);
    if (v5 != 0 && (GameRoutine_173fe30(v5) & 1) != 0) {
      v6 = 0;
    }
    else {
      v6 = LayoutAccessor_1563280_alt1((__int64*)(a1 + 168), v4, 0) ^ 1;
    }
  }
  return v6 & 1;
}

__int64 TelopBattleExp_Unknown36(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10[2];
  struct {
    __int64* v11;
    __int64 v12;
  } v11_;
  _QWORD v13[27];

  if (*(_BYTE*)(result + 928) == 1) {
    v13[25] = v1;
    v13[26] = v2;
    LayoutAccessor_1560070_alt1((void*)(&v11_.v11), (__int64*)(result + 168),
                                "L_AnimalLv");
    result = v11_.v12;
    if (v11_.v12 != 0) {
      v3 = std___1___shared_weak_count_lock_alt1(v11_.v12);
      if (v3 != 0) {
        v4 = v11_.v11;
        if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v5 = v3;
          (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
          std___1___shared_weak_count___release_weak_alt2(v5);
        }
        if (v4 != nullptr) {
          v6 = v11_.v12;
          v10[0] = (__int64)v11_.v11;
          v10[1] = v11_.v12;
          v7 = v11_.v12;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v11_.v12 + 16),
                                    1u, memory_order_relaxed);
          v8 = std___1___shared_weak_count_lock_alt1(v7);
          v9 = ui_LayoutAccessor_FindPane_alt2(v11_.v11, "Icon");
          v13[0] = 1119092736;
          ProcPopup_1736c50_alt1(1, v10, v9, (int*)v13);
          if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
            std___1___shared_weak_count___release_weak_alt2(v8);
          }
          std___1___shared_weak_count___release_weak_alt2(v6);
          snd_Fade_Fade_10c830_alt1((__int64)v13, 0x0.0p+0f);
          snd_play_ff2d0_alt1((__int64)"SE_SYS_FriendShip_Up",
                              (__int64)"SE_SYS_FriendShip_Up", (__int64)v13, 0,
                              0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
          snd_Fade_Destroy_Fade_alt1(v13);
        }
      }
      result = v11_.v12;
      if (v11_.v12 != 0) {
        return std___1___shared_weak_count___release_weak_alt2(v11_.v12);
      }
    }
  }
  return result;
}

__int64 TelopBattleExp_Unknown2(__int64 a1)
{
  __int64 (***v2)(_QWORD);
  __int64 (***v3)(_QWORD);
  unsigned __int8* v4;
  unsigned int v5;
  bool v6;
  int v7;
  unsigned __int8* v9;
  unsigned int v10;
  int v11;
  __int64 v13;
  int v14;
  float v15;
  int v16;
  __int64 v17;
  int* v18;
  int v19;
  unsigned __int64 v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  unsigned int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  __int64 v36;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  int v47;
  __int16 v48;
  __int64 v49;
  _QWORD v50[25];

  if (*(_BYTE*)(a1 + 920) == 1) {
    if (*(float*)(a1 + 952) == 0.0f && *(float*)(a1 + 1080) == 0.0f &&
        *(float*)(a1 + 1216) == 0.0f) {
      v2 = *(__int64 (****)(_QWORD))(a1 + 1328);
      v3 = *(__int64 (****)(_QWORD))(a1 + 1336);
      if (v2 == v3) {
      LABEL_8:
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
      LABEL_63:
        TelopBattleExp_1743280(a1);
        goto LABEL_64;
      }
      while (((**v2)(v2) & 1) == 0) {
        v2 += 20;
        if (v2 == v3) {
          goto LABEL_8;
        }
      }
    }
    snd_Fade_Fade_10c830(v50, 0.0f);
    snd_play_ff2d0((void*)(&v49), "SE_SYS_EXP", "SE_SYS_EXP", v50, 0, 65537, 0,
                   0.0f, 1.0f);
    snd_Fade_Destroy_Fade(v50);
    v13 = LayoutAccessor_155fbe0(a1 + 168, "L_Lv");
    v14 = *(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 944LL);
    if ((LayoutAccessor_1563280(v13, "LvUp", 0) & 1) != 0) {
      v15 = 8.0f;
      if ((v14 & 0xB) == 0) {
        v15 = 1.0f;
      }
      LayoutAccessor_1563c50(v13, "LvUp", 0, v15);
    }
    if (*(float*)(a1 + 952) != 0.0f) {
      v16 = GameRoutine_174dbb0(a1 + 936, 1);
      v17 = *(_QWORD*)(a1 + 824);
      v18 = (int*)GameData_21d9968;
      v19 = *(_DWORD*)(v17 + 504);
      v20 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
      if ((int)v20 >= 99) {
        v21 = 99;
      }
      else {
        v21 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
      }
      v22 = *(_DWORD*)(GameData_21d9968 + 4LL * v21 - 4);
      if (v22 >= v19 + v16) {
        v22 = v19 + v16;
      }
      v23 = v19 + v16 >= 0 ? v22 : 0;
      if (v19 != v23) {
        *(_DWORD*)(v17 + 504) = v23;
        if ((int)v20 < 1) {
          LOBYTE(v24) = 0;
        }
        else {
          v24 = 0;
          v25 = v18[(unsigned int)(v20 - 1)];
          if (v25 >= v23) {
            v25 = v23;
          }
          if (v23 >= *v18) {
            v26 = v25;
          }
          else {
            v26 = *v18;
          }
          while (1) {
            v27 = (unsigned int)(v24 + v20) >> 1;
            v28 = v18[v27];
            if (v26 == v28) {
              break;
            }
            if (v26 < v28) {
              LODWORD(v20) = (unsigned int)(v24 + v20) >> 1;
            }
            else {
              v24 = v27 + 1;
            }
            if (v24 >= (int)v20) {
              goto LABEL_50;
            }
          }
          LOBYTE(v24) = v27 + 1;
        }
      LABEL_50:
        *(_BYTE*)(v17 + 498) = v24;
      }
    }
    if (*(float*)(a1 + 1080) != 0.0f) {
      v29 = *(_QWORD*)(a1 + 824);
      if (*(_QWORD*)(v29 + 408) == 0) {
        v38 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v29 + 400) + 24LL) + 1104LL);
        if (v38 != 0) {
          v39 = GameRoutine_174dbb0(a1 + 1064, 1);
          v40 = *(_QWORD*)(*(_QWORD*)(v38 + 24) + 1104LL);
          if (v40 != 0) {
            v41 = *(_QWORD*)(a1 + 824);
            v42 = *(unsigned __int16*)(v40 + 16);
            v43 = *(_QWORD*)(v41 + 568);
            v44 = *(_QWORD*)(v41 + 560);
            if (v42 < (v43 - v44) >> 1) {
              v45 = 2 * v42;
              v46 = *(unsigned __int16*)(v40 + 412);
              v47 = v39 + (*(_WORD*)(v44 + v45) & 0x3FF);
              if (v46 >= v47) {
                LOWORD(v46) = v39 + (*(_WORD*)(v44 + v45) & 0x3FF);
              }
              v48 = v46 & 0x3FF;
              if (v47 < 0) {
                v48 = 0;
              }
              *(_WORD*)(v44 + v45) = v48 | *(_WORD*)(v44 + v45) & 0xFC00;
            }
          }
        }
      }
    }
    v30 = *(_QWORD*)(a1 + 1328);
    v31 = *(_QWORD*)(a1 + 1336);
    while (v30 != v31) {
      if (((**(__int64 (***)(__int64))v30)(v30) & 1) != 0) {
        v32 = GameRoutine_174da00(v30, 1);
        v33 = *(_QWORD*)(a1 + 824);
        LOBYTE(v50[0]) = *(_BYTE*)(v30 + 144);
        game_7fbb60(v33 + 512, v33, v50, v32);
        GaugeUtil_1750310(v30, 1);
      }
      v30 += 160;
    }
    if (*(_BYTE*)(a1 + 928) == 1 && *(float*)(a1 + 1216) != 0.0f) {
      v34 = *(_QWORD*)(a1 + 824);
      v35 = GameRoutine_174dbb0(a1 + 1200, 1);
      v36 = *(_QWORD*)(a1 + 824);
      v50[0] = 0;
      v50[1] = v36;
      if (v36 != 0) {
        v50[0] = *(_QWORD*)(v36 + 392);
      }
      UnitVariables_931c00(v34 + 1880, v50, v35);
    }
    goto LABEL_63;
  }
  TelopBattleExp_1744940_alt1(a1);
  v9 = *(unsigned __int8**)(a1 + 16);
  if (v9 != nullptr) {
    v10 = *v9;
    v6 = v10 > 0x10;
    v11 = (1 << v10) & 0x1CE00;
    if (!v6 && v11 != 0) {
      *(_WORD*)(a1 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(a1 + 136) |= 8u;
LABEL_64:
  if (*(_BYTE*)(a1 + 335) == 1 &&
      (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 944LL) & 0xB) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)a1 + 360LL))(a1);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 400LL))(a1);
}

__int64 TelopBattleExp_1744940(__int64 result)
{
  __int64 v1;
  char v2;
  float v3;
  int v4;
  int v5;
  float v6;
  float* v7;
  int v8;
  int v9;
  float v10;
  bool v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  int v19;
  int* v20;
  unsigned __int64 v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  unsigned int v28;
  int v29;
  __int64 v30;
  __int64 i;
  float* v32;
  float v33;
  int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  char v41;
  float v42;
  float v43;
  int v44;
  int v45;
  float v46;
  float v47;
  __int64 v48;
  __int64 v49;
  char v50;
  float v51;
  int v52;
  int v53;
  float v54;
  float* v55;
  __int64 v56;
  char v57;
  float v58;
  int v59;
  int v60;
  float v61;
  float* v62;
  __int64 v63;
  __int64 v64;
  int v65;
  float v66;
  int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  int v71;
  int v72;
  int v73;
  float v74;
  int v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  int v79;
  __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  int v86;
  __int16 v87;
  int v88;
  __int16 v89;
  __int16 v90;
  _QWORD v91[2];

  v1 = result;
  if (*(float*)(result + 952) != 0.0) {
    if (*(_BYTE*)(result + 985) == 1) {
      v2 = (**(__int64 (***)(__int64))(result + 936))(result + 936);
      v3 = 0.0;
      v4 = *(_DWORD*)(v1 + 944);
      v5 = *(unsigned __int8*)(v1 + 984);
      if ((v2 & 1) != 0) {
        v3 = *(float*)(v1 + 952);
      }
      v6 = *(float*)(v1 + 952) - v3;
      *(float*)(v1 + 952) = v6;
      if (v5 == 1) {
        v7 = (float*)v91;
        LODWORD(v91[0]) = 0;
        if (v6 < 0.0) {
          v7 = (float*)(v1 + 952);
        }
      }
      else {
        v7 = (float*)v91;
        LODWORD(v91[0]) = 0;
        if (v6 > 0.0) {
          v7 = (float*)(v1 + 952);
        }
      }
      v9 = *(_DWORD*)(v1 + 972);
      v10 = v3 + *(float*)(v1 + 968);
      v11 = *v7 == 0.0;
      *(float*)(v1 + 952) = *v7;
      v12 = (int)v10;
      *(float*)(v1 + 968) = v10;
      if (v11) {
        v12 = v9;
      }
      *(_DWORD*)(v1 + 944) = v12;
      v13 = v12 >= v9 ? 944LL : 972LL;
      v14 = v9 >= v12 ? 944LL : 972LL;
      v15 = v5 != 0 ? v13 : v14;
      v16 = *(_DWORD*)(v1 + v15);
      *(_BYTE*)(v1 + 966) = 0;
      *(_DWORD*)(v1 + 944) = v16;
      result =
          (*(__int64 (**)(__int64))(*(_QWORD*)(v1 + 936) + 48LL))(v1 + 936);
      v8 = *(_DWORD*)(v1 + 944) - v4;
    }
    else {
      v8 = 0;
    }
    v17 = *(_QWORD*)(v1 + 824);
    v18 = *(_DWORD*)(v17 + 504);
    v19 = v18 + v8;
    v20 = (int*)GameData_21d9968;
    v21 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
    if ((int)v21 >= 99) {
      v22 = 99;
    }
    else {
      v22 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
    }
    v23 = *(_DWORD*)(GameData_21d9968 + 4LL * v22 - 4);
    if (v23 >= v19) {
      v23 = v19;
    }
    v24 = v19 >= 0 ? v23 : 0;
    if (v18 != v24) {
      *(_DWORD*)(v17 + 504) = v24;
      if ((int)v21 < 1) {
        LOBYTE(v25) = 0;
      }
      else {
        v25 = 0;
        v26 = v20[(unsigned int)(v21 - 1)];
        if (v26 >= v24) {
          v26 = v24;
        }
        if (v24 >= *v20) {
          v27 = v26;
        }
        else {
          v27 = *v20;
        }
        while (1) {
          v28 = (unsigned int)(v25 + v21) >> 1;
          v29 = v20[v28];
          if (v27 == v29) {
            break;
          }
          if (v27 < v29) {
            LODWORD(v21) = (unsigned int)(v25 + v21) >> 1;
          }
          else {
            v25 = v28 + 1;
          }
          if (v25 >= (int)v21) {
            goto LABEL_48;
          }
        }
        LOBYTE(v25) = v28 + 1;
      }
    LABEL_48:
      *(_BYTE*)(v17 + 498) = v25;
    }
  }
  v30 = *(_QWORD*)(v1 + 1328);
  for (i = *(_QWORD*)(v1 + 1336); v30 != i; v30 += 160) {
    result = (**(__int64 (***)(__int64))v30)(v30);
    if ((result & 1) != 0) {
      v41 = (**(__int64 (***)(__int64))v30)(v30);
      v32 = (float*)(v30 + 16);
      v42 = *(float*)(v30 + 16);
      v43 = *(float*)(v30 + 32);
      v44 = *(_DWORD*)(v30 + 8);
      v45 = *(unsigned __int8*)(v30 + 48);
      if ((v41 & 1) != 0) {
        v46 = *(float*)(v30 + 16);
      }
      else {
        v46 = 0.0;
      }
      v47 = v42 - v46;
      *v32 = v42 - v46;
      if (v45 == 1) {
        LODWORD(v91[0]) = 0;
        if (v47 >= 0.0) {
          v32 = (float*)v91;
        }
      }
      else {
        LODWORD(v91[0]) = 0;
        if (v47 <= 0.0) {
          v32 = (float*)v91;
        }
      }
      v33 = *v32;
      v34 = *(_DWORD*)(v30 + 36);
      v35 = (int)(float)(v46 + v43);
      if (v33 == 0.0) {
        v35 = *(_DWORD*)(v30 + 36);
      }
      *(_DWORD*)(v30 + 8) = v35;
      if (v35 >= v34) {
        v36 = 8;
      }
      else {
        v36 = 36;
      }
      if (v34 >= v35) {
        v37 = 8;
      }
      else {
        v37 = 36;
      }
      if (v45 != 0) {
        v38 = v36;
      }
      else {
        v38 = v37;
      }
      v39 = *(_DWORD*)(v30 + v38);
      *(float*)(v30 + 16) = v42;
      *(_DWORD*)(v30 + 8) = v44;
      v40 = *(_QWORD*)(v1 + 824);
      LOBYTE(v91[0]) = *(_BYTE*)(v30 + 144);
      GameRoutine_7fbb60(v40 + 512, v40, v91, (unsigned int)(v39 - v44));
      result = GameRoutine_1750310(v30, 2);
    }
  }
  if (*(float*)(v1 + 1080) != 0.0) {
    v48 = *(_QWORD*)(v1 + 824);
    if (*(_QWORD*)(v48 + 408) == 0) {
      v56 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v48 + 400) + 24LL) + 1104LL);
      if (v56 != 0) {
        if (*(_BYTE*)(v1 + 1113) == 1) {
          v57 = (**(__int64 (***)(__int64))(v1 + 1064))(v1 + 1064);
          v58 = 0.0;
          v59 = *(_DWORD*)(v1 + 1072);
          v60 = *(unsigned __int8*)(v1 + 1112);
          if ((v57 & 1) != 0) {
            v58 = *(float*)(v1 + 1080);
          }
          v61 = *(float*)(v1 + 1080) - v58;
          *(float*)(v1 + 1080) = v61;
          if (v60 == 1) {
            v62 = (float*)v91;
            LODWORD(v91[0]) = 0;
            if (v61 < 0.0) {
              v62 = (float*)(v1 + 1080);
            }
          }
          else {
            v62 = (float*)v91;
            LODWORD(v91[0]) = 0;
            if (v61 > 0.0) {
              v62 = (float*)(v1 + 1080);
            }
          }
          v73 = *(_DWORD*)(v1 + 1100);
          v74 = v58 + *(float*)(v1 + 1096);
          v11 = *v62 == 0.0;
          *(float*)(v1 + 1080) = *v62;
          v75 = (int)v74;
          *(float*)(v1 + 1096) = v74;
          if (v11) {
            v75 = v73;
          }
          *(_DWORD*)(v1 + 1072) = v75;
          if (v75 >= v73) {
            v76 = 1072;
          }
          else {
            v76 = 1100;
          }
          if (v73 >= v75) {
            v77 = 1072;
          }
          else {
            v77 = 1100;
          }
          if (v60 != 0) {
            v78 = v76;
          }
          else {
            v78 = v77;
          }
          v79 = *(_DWORD*)(v1 + v78);
          *(_BYTE*)(v1 + 1094) = 0;
          *(_DWORD*)(v1 + 1072) = v79;
          result = (*(__int64 (**)(__int64))(*(_QWORD*)(v1 + 1064) + 48LL))(
              v1 + 1064);
          v72 = *(_DWORD*)(v1 + 1072) - v59;
        }
        else {
          v72 = 0;
        }
        v80 = *(_QWORD*)(*(_QWORD*)(v56 + 24) + 1104LL);
        if (v80 != 0) {
          v81 = *(_QWORD*)(v1 + 824);
          v82 = *(unsigned __int16*)(v80 + 16);
          v83 = *(_QWORD*)(v81 + 568);
          v84 = *(_QWORD*)(v81 + 560);
          if (v82 < (v83 - v84) >> 1) {
            v85 = 2 * v82;
            v86 = *(unsigned __int16*)(v80 + 412);
            v87 = *(_WORD*)(v84 + v85);
            v88 = v72 + (v87 & 0x3FF);
            if (v86 >= v88) {
              LOWORD(v86) = v88;
            }
            v89 = v86 & 0x3FF;
            if (v88 >= 0) {
              v90 = v89;
            }
            else {
              v90 = 0;
            }
            *(_WORD*)(v84 + v85) = v90 | v87 & 0xFC00;
          }
        }
      }
    }
  }
  if (*(_BYTE*)(v1 + 928) == 1 && *(float*)(v1 + 1216) != 0.0) {
    v49 = *(_QWORD*)(v1 + 824);
    if (*(_BYTE*)(v1 + 1249) == 1) {
      v50 = (**(__int64 (***)(__int64))(v1 + 1200))(v1 + 1200);
      v51 = 0.0;
      v52 = *(_DWORD*)(v1 + 1208);
      v53 = *(unsigned __int8*)(v1 + 1248);
      if ((v50 & 1) != 0) {
        v51 = *(float*)(v1 + 1216);
      }
      v54 = *(float*)(v1 + 1216) - v51;
      *(float*)(v1 + 1216) = v54;
      if (v53 == 1) {
        v55 = (float*)v91;
        LODWORD(v91[0]) = 0;
        if (v54 < 0.0) {
          v55 = (float*)(v1 + 1216);
        }
      }
      else {
        v55 = (float*)v91;
        LODWORD(v91[0]) = 0;
        if (v54 > 0.0) {
          v55 = (float*)(v1 + 1216);
        }
      }
      v65 = *(_DWORD*)(v1 + 1236);
      v66 = v51 + *(float*)(v1 + 1232);
      v11 = *v55 == 0.0;
      *(float*)(v1 + 1216) = *v55;
      v67 = (int)v66;
      *(float*)(v1 + 1232) = v66;
      if (v11) {
        v67 = v65;
      }
      *(_DWORD*)(v1 + 1208) = v67;
      if (v67 >= v65) {
        v68 = 1208;
      }
      else {
        v68 = 1236;
      }
      if (v65 >= v67) {
        v69 = 1208;
      }
      else {
        v69 = 1236;
      }
      if (v53 != 0) {
        v70 = v68;
      }
      else {
        v70 = v69;
      }
      v71 = *(_DWORD*)(v1 + v70);
      *(_BYTE*)(v1 + 1230) = 0;
      *(_DWORD*)(v1 + 1208) = v71;
      (*(void (**)(__int64))(*(_QWORD*)(v1 + 1200) + 48LL))(v1 + 1200);
      v63 = (unsigned int)(*(_DWORD*)(v1 + 1208) - v52);
      v64 = *(_QWORD*)(v1 + 824);
      v91[0] = 0;
      v91[1] = v64;
      if (v64 == 0) {
        return GameRoutine_931c00(v49 + 1880, v91, v63);
      }
    }
    else {
      v63 = 0;
      v64 = *(_QWORD*)(v1 + 824);
      v91[0] = 0;
      v91[1] = v49;
      if (v49 == 0) {
        return GameRoutine_931c00(v49 + 1880, v91, v63);
      }
    }
    v91[0] = *(_QWORD*)(v64 + 392);
    return GameRoutine_931c00(v49 + 1880, v91, v63);
  }
  return result;
}

__int64 TelopBattleExp_Unknown46(__int64 result)
{
  *(_DWORD*)(result + 1352) = 0;
  return result;
}

__int64 TelopBattleExp_Unknown47(__int64 a1)
{
  float v1;
  unsigned __int8* v2;
  unsigned int v3;
  bool v4;
  int v5;
  unsigned __int8* v7;
  unsigned int v8;
  int v9;
  float v11;
  float v12;

  if (*(_BYTE*)(a1 + 920) == 1) {
    v1 = *(float*)(a1 + 1352);
    if (v1 < 90.0) {
      v11 = 60.0 / (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
      if (v11 <= 0.0) {
        v11 = 1.0;
      }
      if ((*(_DWORD*)(game_g_game_setting + 944) & 0xB) != 0) {
        v11 = v11 * 8.0;
      }
      v12 = v1 + v11;
      if (v12 > 90.0) {
        v12 = 90.0;
      }
      *(float*)(a1 + 1352) = v12;
    }
    else {
      v2 = *(unsigned __int8**)(a1 + 16);
      if (v2 != nullptr) {
        v3 = *v2;
        v4 = v3 > 0x10;
        v5 = (1 << v3) & 0x1CE00;
        if (!v4 && v5 != 0) {
          *(_WORD*)(a1 + 136) |= 0x80u;
        }
      }
      *(_WORD*)(a1 + 136) |= 8u;
    }
    return GameRoutine_1743280(a1);
  }
  else {
    v7 = *(unsigned __int8**)(a1 + 16);
    if (v7 != nullptr) {
      v8 = *v7;
      v4 = v8 > 0x10;
      v9 = (1 << v8) & 0x1CE00;
      if (!v4 && v9 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return a1;
}

__int64 TelopBattleExp_1745000(__int64* a1, int a2)
{
  int v2;
  __int64 result;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  _BOOL4 v9;
  __int64 v10;
  __int64 v11;
  void* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _DWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 j;
  __int64 v32;
  const char* v33;
  __int128 v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  unsigned int i;
  __int64 v39;
  __int64 v40;
  __int128 v41;
  struct {
    __int64 v42;
    __int64 v43;
  } v42_;
  struct {
    _QWORD v44[3];
    int v45;
    char gap60_[4];
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
  } v44_;

  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = (__int64)LayoutAccessor_155fbe0_alt1(a1 + 21, "L_Lv"),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_QWORD*)(result + 16) == 0) {
    return result;
  }
  v6 = (__int64*)result;
  result = *(_QWORD*)(result + 8);
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock_alt1(result),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (result == 0) {
    goto LABEL_11;
  }
  v7 = *v6;
  if (*v6 != 0) {
    v2 = *(unsigned __int8*)(v7 + 24);
    v8 = v7 + 152;
    if (v2 == 0) {
      v8 = 0;
    }
    v9 = v8 != v6[2];
  }
  else {
    v9 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v11 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = std___1___shared_weak_count___release_weak_alt2(v11),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v9) {
      goto LABEL_11;
    }
  LABEL_15:
    if ((v2 & 1) == 0) {
      return result;
    }
    goto LABEL_16;
  }
  if (!v9) {
    goto LABEL_15;
  }
LABEL_11:
  v10 = v6[1];
  if (v10 == 0 || *(_QWORD*)(v10 + 8) == -1) {
    return result;
  }
LABEL_16:
  v12 = &GameData_224b000;
  v13 = GameData_212c540;
  v44_.v44[0] = 0;
  v44_.v44[1] = 0;
  v14 = *(_QWORD*)GameData_212c540;
  v15 = *((_QWORD*)GameData_212c540 + 1);
  LODWORD(GameData_224b6d8) = GameData_224b6d8 + 1;
  v17 = *(_QWORD*)GameData_212c548;
  v16 = *((_QWORD*)GameData_212c548 + 1);
  v44_.v46 = v14;
  v44_.v47 = v15;
  v44_.v50 = v14;
  v44_.v51 = v15;
  v44_.v48 = v17;
  v44_.v49 = v16;
  v44_.v45 = 9;
  v44_.v44[2] = "UI_Deco_StatusUP";
  v18 = Manager_bc6460_alt1(*(_QWORD**)eft_g_effectSystem_ptr[0],
                            (__int64)v44_.v44, 0),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = GameHr_14a10d0_alt1(&v42_.v42, (__int64)v18, v19,
                               (__int64)&GameData_1a9f09e),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v20 = v42_.v42;
  v21 = v42_.v43;
  if (v42_.v43 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v42_.v43 + 8), 1u,
                              memory_order_relaxed);
  }
  v22 = a1[175];
  a1[174] = v20;
  a1[175] = v21;
  if (v22 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = std___1___shared_weak_count___release_weak_alt2(v22),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v21 = a1[175];
  }
  if (v21 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = std___1___shared_weak_count___release_weak_alt2(v21),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v23 = v42_.v43;
  if (v42_.v43 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v42_.v43 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = std___1___shared_weak_count___release_weak_alt2(v23),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v24 = (_DWORD*)a1[174];
  LODWORD(GameData_224b6d8) = GameData_224b6d8 - 1;
  if (*(_QWORD*)v24 != 0 && *(_DWORD*)(*(_QWORD*)v24 + 16LL) == v24[2]) {
    v25 = a1[22];
    if (v25 != 0) {
      v26 = std___1___shared_weak_count_lock_alt1(v25),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v26 != 0) {
        v27 = a1[21];
        if (v27 != 0) {
          LODWORD(v12) = *(_DWORD*)(v27 + 2372);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v27 != 0) {
            goto LABEL_36;
          }
        }
        else {
          v29 = v26;
          (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak_alt2(v29),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v27 != 0) {
          LABEL_36:
            v28 = *(_QWORD*)v24;
            if (*(_QWORD*)v24 == 0) {
            LABEL_46:
              if ((atomic_load_explicit(
                       (atomic_uchar* volatile)&GameData_21a6130,
                       memory_order_acquire) &
                   1) == 0 &&
                  __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
                v40 = v13[1];
                *(_QWORD*)&GameData_21a6120 = *v13;
                *((_QWORD*)&GameData_21a6120 + 1) = v40;
                __cxa_guard_release_alt1((__int64)&GameData_21a6130),
                    v19 = COERCE_AS(
                        __typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              if (a2 <= 9) {
                v33 = "N_Effect_Single";
              }
              else {
                v33 = "N_Effect_Double";
              }
              v41 = GameData_21a6120;
              result = ui_LayoutAccessor_FindPane_alt2(v6, v33),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v34 = v41;
              if (result != 0) {
                v34 = LANES128_OF(
                          vuzp2q_s32(vuzp2q_s32(*(int32x4_t*)(result + 112),
                                                *(int32x4_t*)(result + 128)),
                                     *(int32x4_t*)(result + 112)))
                          .n128_u64[0];
              }
              v35 = a1[174];
              v36 = *(_QWORD*)v35;
              if (*(_QWORD*)v35 != 0 &&
                  *(_DWORD*)(v36 + 16) == *(_DWORD*)(v35 + 8)) {
                v37 = *(_DWORD*)(v36 + 36);
                if (v37 != 0) {
                  for (i = 0; i < v37; ++i) {
                    if ((int)v37 > (int)i) {
                      v39 = *(_QWORD*)(v36 + 40 + 8LL * (int)i);
                      if (v39 != 0) {
                        *(_OWORD*)(v39 + 16) = v34;
                        *(_BYTE*)(v39 + 128) = 1;
                        v37 = *(_DWORD*)(v36 + 36);
                      }
                    }
                  }
                }
              }
              return result;
            }
          LABEL_40:
            if (*(_DWORD*)(v28 + 16) == v24[2]) {
              v30 = *(unsigned int*)(v28 + 36);
              if ((_DWORD)v30 != 0) {
                for (j = 0; j < v30; ++j) {
                  v32 = *(_QWORD*)(v28 + 40 + 8 * j);
                  if (v32 != 0) {
                    *(_DWORD*)(v32 + 408) = (_DWORD)v12 + 1;
                    v30 = *(unsigned int*)(v28 + 36);
                  }
                }
              }
            }
            goto LABEL_46;
          }
        }
      }
    }
    LODWORD(v12) = 0;
    v28 = *(_QWORD*)v24;
    if (*(_QWORD*)v24 == 0) {
      goto LABEL_46;
    }
    goto LABEL_40;
  }
  return result;
}

__n128 TelopBattleExp_17453e0(__int64 a1, __int64 a2)
{
  int v2;
  __int64 v4;
  __n128 result;
  int32x2_t* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  _DWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 i;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  unsigned int v23;
  __n128* v24;
  __int64 v25;
  _DWORD* v26;
  __int64 v27;
  _QWORD v28[3];
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  v4 = ui_LayoutAccessor_FindPane(a1 + 168, a2);
  if (v4 == 0) {
    return result;
  }
  v6 = (int32x2_t*)v4;
  v28[0] = 0;
  v28[1] = 0;
  v8 = *(_QWORD*)GameData_212c540;
  v7 = *((_QWORD*)GameData_212c540 + 1);
  LODWORD(GameData_224b6d8) = GameData_224b6d8 + 1;
  v10 = *(_QWORD*)GameData_212c548;
  v9 = *((_QWORD*)GameData_212c548 + 1);
  v30 = v8;
  v31 = v7;
  v34 = v8;
  v35 = v7;
  v29 = 9;
  v32 = v10;
  v33 = v9;
  v28[2] = "UI_Deco_StatusUP";
  v11 = Manager_bc6460(*eft_g_effectSystem_ptr[0], v28, 0);
  GameRoutine_14a10d0(&v26, v11, v12, &GameData_1a9f09e);
  LODWORD(GameData_224b6d8) = GameData_224b6d8 - 1;
  v13 = v26;
  if (*(_QWORD*)v26 != 0 && *(_DWORD*)(*(_QWORD*)v26 + 16LL) == v26[2]) {
    v14 = *(_QWORD*)(a1 + 176);
    if (v14 != 0) {
      v15 = std___1___shared_weak_count_lock(v14);
      if (v15 != 0) {
        v16 = *(_QWORD*)(a1 + 168);
        if (v16 != 0) {
          v2 = *(_DWORD*)(v16 + 2372);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v16 != 0) {
            goto LABEL_10;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
          result = std___1___shared_weak_count___release_weak_alt1();
          if (v16 != 0) {
          LABEL_10:
            v17 = *(_QWORD*)v13;
            if (*(_QWORD*)v13 == 0) {
              goto LABEL_20;
            }
            goto LABEL_14;
          }
        }
      }
    }
    v2 = 0;
    v17 = *(_QWORD*)v13;
    if (*(_QWORD*)v13 == 0) {
    LABEL_20:
      v21 = *(_QWORD*)v26;
      if (*(_QWORD*)v26 != 0 && *(_DWORD*)(v21 + 16) == v26[2]) {
        v22 = *(_DWORD*)(v21 + 36);
        if (v22 != 0) {
          v23 = 0;
          LANES128(result).n128_u64[0] =
              LANES64_OF(vzip2_s32(v6[15], v6[17])).n64_u64[0];
          do {
            if ((int)v22 > (int)v23) {
              v24 = *(__n128**)(v21 + 40 + 8LL * (int)v23);
              if (v24 != nullptr) {
                v24[1] = result;
                LANES128(v24[8]).n128_u8[0] = 1;
                v22 = *(_DWORD*)(v21 + 36);
              }
            }
            ++v23;
          } while (v23 < v22);
        }
      }
      goto LABEL_28;
    }
  LABEL_14:
    if (*(_DWORD*)(v17 + 16) == v13[2]) {
      v18 = *(unsigned int*)(v17 + 36);
      if ((_DWORD)v18 != 0) {
        for (i = 0; i < v18; ++i) {
          v20 = *(_QWORD*)(v17 + 40 + 8 * i);
          if (v20 != 0) {
            *(_DWORD*)(v20 + 408) = v2 + 1;
            v18 = *(unsigned int*)(v17 + 36);
          }
        }
      }
    }
    goto LABEL_20;
  }
LABEL_28:
  v25 = v27;
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    return std___1___shared_weak_count___release_weak_alt1();
  }
  return result;
}

void TelopBattleExp_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  bool v12;
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
  __int64 v32;

  v1 = *(_QWORD*)(a1 + 1400);
  *(_QWORD*)a1 = game_telop_TelopBattleExp_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt2(v1);
  }
  v3 = *(_QWORD*)(a1 + 1360);
  v4 = fw_memory_g_heap_manager_ptr;
  if (v3 != 0) {
    v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 1368) = v3;
    v6 = 128;
    if (*(_QWORD*)(v5 + 200) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v5 + v6, v3);
  }
  v7 = *(_QWORD*)(a1 + 1328);
  if (v7 != 0) {
    v8 = *(_QWORD*)(a1 + 1336);
    if (v7 == v8) {
      goto LABEL_14;
    }
    v9 = (_QWORD*)(v8 - 160);
    v10 = (_QWORD*)(v8 - 160);
    do {
      v11 = *v10;
      v10 -= 20;
      (*(void (**)(_QWORD*))(v11 + 24))(v9);
      v12 = v9 == (_QWORD*)v7;
      v9 = v10;
    } while (!v12);
    v13 = *(_QWORD*)(a1 + 1328);
    *(_QWORD*)(a1 + 1336) = v7;
    v7 = v13;
    if (v13 != 0) {
    LABEL_14:
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v14, v7);
    }
  }
  *(_QWORD*)(a1 + 1200) = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 1304) & 1) != 0) {
    v15 = *(_QWORD*)(a1 + 1320);
    if (v15 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v16, v15);
    }
  }
  if ((*(_BYTE*)(a1 + 1280) & 1) != 0) {
    v17 = *(_QWORD*)(a1 + 1296);
    if (v17 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v18, v17);
    }
  }
  if ((*(_BYTE*)(a1 + 1256) & 1) != 0) {
    v19 = *(_QWORD*)(a1 + 1272);
    if (v19 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v20, v19);
    }
  }
  *(_QWORD*)(a1 + 1064) = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 1168) & 1) != 0) {
    v21 = *(_QWORD*)(a1 + 1184);
    if (v21 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v22, v21);
    }
  }
  if ((*(_BYTE*)(a1 + 1144) & 1) != 0) {
    v23 = *(_QWORD*)(a1 + 1160);
    if (v23 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v24, v23);
    }
  }
  if ((*(_BYTE*)(a1 + 1120) & 1) != 0) {
    v25 = *(_QWORD*)(a1 + 1136);
    if (v25 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v26, v25);
    }
  }
  *(_QWORD*)(a1 + 936) = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 1040) & 1) != 0) {
    v27 = *(_QWORD*)(a1 + 1056);
    if (v27 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v28, v27);
    }
  }
  if ((*(_BYTE*)(a1 + 1016) & 1) != 0) {
    v29 = *(_QWORD*)(a1 + 1032);
    if (v29 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v30, v29);
    }
  }
  if ((*(_BYTE*)(a1 + 992) & 1) != 0) {
    v31 = *(_QWORD*)(a1 + 1008);
    if (v31 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v32, v31);
    }
  }
  TelopReliance_1386f80(a1);
}

#pragma GCC visibility pop
