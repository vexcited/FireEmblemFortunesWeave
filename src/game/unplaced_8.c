#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
__attribute__((swiftcall)) void
    LayoutAccessor_1560070_alt1(PSEUDO_X8, _QWORD,
                                _QWORD) __asm__("LayoutAccessor_1560070");
__attribute__((swiftcall)) void
game_195ba40_alt1(__attribute__((swift_indirect_result)) void*,
                  __int64 result) __asm__("game_195ba40");
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64* GameRoutine_165e2a0(__int64* result, __int64*, __int64*, __int64,
                             __int64, __int64*, __int64);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_1650120(_QWORD, _QWORD);
__int64 GameRoutine_1650a00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1650cc0(__int64, __int64);
__int64 GameRoutine_1651170(_QWORD);
__int64 GameRoutine_16512e0(_QWORD, _QWORD);
__int64 GameRoutine_1651740(_QWORD);
__int64 GameRoutine_1653f50(_DWORD*, __int64*);
__int64 GameRoutine_165e040(__int64 result, _QWORD*, unsigned __int64, _QWORD*);
__int64 GameRoutine_165f140(_QWORD, _QWORD);
__int64 GameRoutine_1679140(__int64 result);
__int64 GameRoutine_16ae120(__int64*, __int64);
__int64 GameRoutine_16dbb80(__int64*);
__int64 GameRoutine_16dc3e0(__int64);
__int64 GameRoutine_18b26a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1917400(__int64 result, __int64, unsigned __int64,
                            int8x16_t*, char, char);
__int64 GameRoutine_191d070(_QWORD);
__int64 GameRoutine_191d220(_QWORD);
__int64 GameRoutine_19805e0(_QWORD, _QWORD);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_715440(_QWORD);
__int64 GameRoutine_80cc80(_QWORD);
__int64 GameSituation_906440(_QWORD, _QWORD);
__int64 GameSituation_906910(_QWORD, _QWORD);
__int64 GameSubquestData_125b8e0(_QWORD, _QWORD, _QWORD);
__int64 GameSubquestData_125bbc0(_QWORD);
__int64 GmapUIDef_1654300(__int64 result, __int64, char);
__int64 GmapUIDef_1654a80(_QWORD);
__int64 Impl_13261c0(_QWORD);
__int64 Impl_13261c0_alt1(__int64) __asm__("Impl_13261c0");
__int64 Impl_1328300(_QWORD);
__int64 Impl_1328460(_QWORD);
__int64 Impl_132a360(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1560520(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 LayoutAccessor_15636c0(_QWORD, _QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 Manager_136a920(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Manager_a501f0(_QWORD, _QWORD);
__int64 MultiMenuSequence_1786b20(_QWORD);
__int64 SpineCaptureProcessor_191e360(_QWORD, _QWORD, _QWORD);
__int64 SpineModel_1919040(_QWORD, _QWORD);
__int64 SpineSlotChecker_Unknown2(_QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(__int64 result, char,
                                                    unsigned __int8,
                                                    unsigned __int8);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fmodf(float, float);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_167a9b0_alt1(_QWORD, _QWORD) __asm__("game_167a9b0");
__int64 game_809dc0(_QWORD, _QWORD, float);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_gameui_1596b00(_QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(long double);
__int64 game_gmap_SpotMgr_GetCurrentSpot_alt1(void) __asm__(
    "game_gmap_SpotMgr_GetCurrentSpot");
__int64 game_util_Format(const char*, ...);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_ConvertToTimeSpan(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_startSurroundPan(_QWORD, _QWORD, float);
__int64 snd_stop_ffc40(_QWORD, _QWORD, long double);
__int64 spine_SlotData_getColor(_QWORD);
__int64 spine_SlotData_getName(_QWORD);
__int64 spine_Slot_getColor(_QWORD);
__int64 spine_Slot_getData(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPartsLayout(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPriority(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_Setup_155dda0(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_Setup_155dea0(_QWORD, _QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212c960;
extern _UNKNOWN GameData_22592e0;
extern _UNKNOWN GameData_2259310;
extern _UNKNOWN GameData_2259340;
extern _UNKNOWN GameData_2260e40;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a82b80;
extern __int128 GameData_1a82dc0;
extern __int128 GameData_1a837f0;
extern __int128 GameData_1a83970;
extern __int64 (*GameData_202d448[])();
extern __int64 (*GameData_2108660[])();
extern __int64 (*GameData_2108688[])();
extern __int64 (*GameData_21086b0[])();
extern __int64 (*GameData_2108888[])();
extern __int64 (*GameData_21088b0[])();
extern __int64 (
    *game_gameui_control_BlazeGauge_Destroy_BlazeGauge_18ca9b0_ptr[])();
extern __int64 (*game_gameui_control_BlazeGauge_vtable[])();
extern __int64 (*game_gmap_GmapSpotMenuItem_vtable[])();
extern __int64 (*game_gmap_LegionMenuUtil_EmptyMenuItem_vtable[])();
extern __int64 (*game_gmap_LegionMenuUtil_InfoMenuItem_vtable[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_2131b00[8];
extern __int64* GameData_2132358[2];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 GameData_212c638;
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_2132398[3];
extern __int64 GameData_21c96e8;
extern __int64 GameData_21c9718;
extern __int64 GameData_21c9cf8;
extern __int64 GameData_22592b8;
extern __int64 GameData_22592c0;
extern __int64 GameData_22592c8;
extern __int64 GameData_22592d0;
extern __int64 GameData_22592d8;
extern __int64 GameData_22592e8;
extern __int64 GameData_22592f0;
extern __int64 GameData_22592f8;
extern __int64 GameData_2259300;
extern __int64 GameData_2259308;
extern __int64 GameData_2259318;
extern __int64 GameData_2259320;
extern __int64 GameData_2259328;
extern __int64 GameData_2259330;
extern __int64 GameData_2259338;
extern __int64 GameData_225e7b0;
extern __int64 GameData_225e7d0;
extern __int64 GameData_225e7e0;
extern __int64 GameData_225e800;
extern __int64 GameData_225e810;
extern __int64 GameData_225e830;
extern __int64 GameData_225e840;
extern __int64 GameData_225e860;
extern __int64 GameData_225e870;
extern __int64 GameData_225e890;
extern __int64 GameData_225e8a0;
extern __int64 GameData_225e8c0;
extern __int64 GameData_225e8d0;
extern __int64 GameData_225e8f0;
extern __int64 GameData_225e900;
extern __int64 GameData_225e920;
extern __int64 GameData_225e930;
extern __int64 GameData_225e950;
extern __int64 GameData_225e960;
extern __int64 GameData_225e980;
extern __int64 GameData_225e990;
extern __int64 GameData_225e9b0;
extern __int64 GameData_225e9c0;
extern __int64 GameData_225e9e0;
extern __int64 GameData_225e9f0;
extern __int64 GameData_225ea10;
extern __int64 GameData_225ea20;
extern __int64 GameData_225ea40;
extern __int64 GameData_225ea50;
extern __int64 GameData_225ea70;
extern __int64 GameData_225ea80;
extern __int64 GameData_225eaa0;
extern __int64 GameData_225eab0;
extern __int64 GameData_225ead0;
extern __int64 GameData_225eae0;
extern __int64 GameData_225eb00;
extern __int64 GameData_225eb10;
extern __int64 GameData_225eb30;
extern __int64 GameData_225eb40;
extern __int64 GameData_225eb60;
extern __int64 GameData_225eb70;
extern __int64 GameData_225eb90;
extern __int64 GameData_225eba0;
extern __int64 GameData_225ebc0;
extern __int64 GameData_225ebd0;
extern __int64 GameData_225ebf0;
extern __int64 GameData_225ec00;
extern __int64 GameData_225ec20;
extern __int64 GameData_225ec30;
extern __int64 GameData_225ec50;
extern __int64 GameData_225ec60;
extern __int64 GameData_225ec80;
extern __int64 GameData_225ec90;
extern __int64 GameData_225ecb0;
extern __int64 GameData_225ecc0;
extern __int64 GameData_225ece0;
extern __int64 GameData_225ecf0;
extern __int64 GameData_225ed10;
extern __int64 GameData_225ed20;
extern __int64 GameData_225ed40;
extern __int64 GameData_225ed50;
extern __int64 GameData_225ed70;
extern __int64 GameData_225ed80;
extern __int64 GameData_225eda0;
extern __int64 GameData_225edb0;
extern __int64 GameData_225edd0;
extern __int64 GameData_225ede0;
extern __int64 GameData_225ee00;
extern __int64 GameData_225ee10;
extern __int64 GameData_225ee30;
extern __int64 GameData_225ee40;
extern __int64 GameData_225ee60;
extern __int64 GameData_225ee70;
extern __int64 GameData_225ee90;
extern __int64 GameData_225eea0;
extern __int64 GameData_225eec0;
extern __int64 GameData_225eed0;
extern __int64 GameData_225eef0;
extern __int64 GameData_225ef00;
extern __int64 GameData_225ef20;
extern __int64 GameData_225ef30;
extern __int64 GameData_225ef50;
extern __int64 GameData_225ef60;
extern __int64 GameData_225ef80;
extern __int64 GameData_225ef90;
extern __int64 GameData_225efb0;
extern __int64 GameData_225efc0;
extern __int64 GameData_225efe0;
extern __int64 GameData_225eff0;
extern __int64 GameData_225f010;
extern __int64 GameData_225f020;
extern __int64 GameData_225f040;
extern __int64 GameData_225f050;
extern __int64 GameData_225f070;
extern __int64 GameData_225f080;
extern __int64 GameData_225f0a0;
extern __int64 GameData_225f0b0;
extern __int64 GameData_225f0d0;
extern __int64 GameData_225f0e0;
extern __int64 GameData_225f100;
extern __int64 GameData_225f110;
extern __int64 GameData_225f130;
extern __int64 GameData_225f140;
extern __int64 GameData_225f160;
extern __int64 GameData_225f170;
extern __int64 GameData_225f190;
extern __int64 GameData_225f1a0;
extern __int64 GameData_225f1c0;
extern __int64 GameData_225f1d0;
extern __int64 GameData_225f1f0;
extern __int64 GameData_225f200;
extern __int64 GameData_225f220;
extern __int64 GameData_225f230;
extern __int64 GameData_225f250;
extern __int64 GameData_225f260;
extern __int64 GameData_225f280;
extern __int64 GameData_225f290;
extern __int64 GameData_225f2b0;
extern __int64 GameData_225f2c0;
extern __int64 GameData_225f2e0;
extern __int64 GameData_225f2f0;
extern __int64 GameData_225f310;
extern __int64 GameData_225f320;
extern __int64 GameData_225f340;
extern __int64 GameData_225f350;
extern __int64 GameData_225f370;
extern __int64 GameData_225f380;
extern __int64 GameData_225f3a0;
extern __int64 GameData_225f3b0;
extern __int64 GameData_225f3d0;
extern __int64 GameData_225f3e0;
extern __int64 GameData_225f400;
extern __int64 GameData_225f410;
extern __int64 GameData_225f430;
extern __int64 GameData_225f440;
extern __int64 GameData_225f460;
extern __int64 GameData_225f470;
extern __int64 GameData_225f490;
extern __int64 GameData_225f4a0;
extern __int64 GameData_225f4c0;
extern __int64 GameData_225f4d0;
extern __int64 GameData_225f4f0;
extern __int64 GameData_225f500;
extern __int64 GameData_225f520;
extern __int64 GameData_225f5f0;
extern __int64 GameData_225f610;
extern __int64 GameData_225f620;
extern __int64 GameData_225f640;
extern __int64 GameData_225f650;
extern __int64 GameData_225f670;
extern __int64 GameData_225f680;
extern __int64 GameData_225f6a0;
extern __int64 GameData_225f6b0;
extern __int64 GameData_225f6d0;
extern __int64 GameData_225f6e0;
extern __int64 GameData_225f700;
extern __int64 GameData_225f710;
extern __int64 GameData_225f730;
extern __int64 GameData_225f740;
extern __int64 GameData_225f760;
extern __int64 GameData_225f770;
extern __int64 GameData_225f790;
extern __int64 GameData_225f7a0;
extern __int64 GameData_225f7c0;
extern __int64 GameData_225f7d0;
extern __int64 GameData_225f7f0;
extern __int64 GameData_225f800;
extern __int64 GameData_225f820;
extern __int64 GameData_225f8f0;
extern __int64 GameData_225f910;
extern __int64 GameData_225f920;
extern __int64 GameData_225f940;
extern __int64 GameData_225f950;
extern __int64 GameData_225f970;
extern __int64 GameData_225f980;
extern __int64 GameData_225f9a0;
extern __int64 GameData_225f9b0;
extern __int64 GameData_225f9d0;
extern __int64 GameData_225f9e0;
extern __int64 GameData_225fa00;
extern __int64 GameData_225fa10;
extern __int64 GameData_225fa30;
extern __int64 GameData_225fa40;
extern __int64 GameData_225fa60;
extern __int64 GameData_225fa70;
extern __int64 GameData_225fa90;
extern __int64 GameData_225faa0;
extern __int64 GameData_225fac0;
extern __int64 GameData_225fad0;
extern __int64 GameData_225faf0;
extern __int64 GameData_225fb00;
extern __int64 GameData_225fb20;
extern __int64 GameData_225fb30;
extern __int64 GameData_225fb50;
extern __int64 GameData_225fb60;
extern __int64 GameData_225fb80;
extern __int64 GameData_225fb90;
extern __int64 GameData_225fbb0;
extern __int64 GameData_225fbc0;
extern __int64 GameData_225fbe0;
extern __int64 GameData_225fbf0;
extern __int64 GameData_225fc10;
extern __int64 GameData_225fc20;
extern __int64 GameData_225fc40;
extern __int64 GameData_225fc50;
extern __int64 GameData_225fc70;
extern __int64 GameData_225fc80;
extern __int64 GameData_225fca0;
extern __int64 GameData_225fcb0;
extern __int64 GameData_225fcd0;
extern __int64 GameData_225fce0;
extern __int64 GameData_225fd00;
extern __int64 GameData_225fd10;
extern __int64 GameData_225fd30;
extern __int64 GameData_225fd40;
extern __int64 GameData_225fd60;
extern __int64 GameData_225fd70;
extern __int64 GameData_225fd90;
extern __int64 GameData_225fda0;
extern __int64 GameData_225fdc0;
extern __int64 GameData_225fdd0;
extern __int64 GameData_225fdf0;
extern __int64 GameData_225fe00;
extern __int64 GameData_225fe20;
extern __int64 GameData_225fe30;
extern __int64 GameData_225fe50;
extern __int64 GameData_225fe60;
extern __int64 GameData_225fe80;
extern __int64 GameData_225fe90;
extern __int64 GameData_225feb0;
extern __int64 GameData_225fec0;
extern __int64 GameData_225fee0;
extern __int64 GameData_225fef0;
extern __int64 GameData_225ff10;
extern __int64 GameData_225ff20;
extern __int64 GameData_225ff40;
extern __int64 GameData_225ff50;
extern __int64 GameData_225ff70;
extern __int64 GameData_225ff80;
extern __int64 GameData_225ffa0;
extern __int64 GameData_2262ae0;
extern __int64 GameData_226d118[];
extern __int64 GameData_226d120;
extern __int64 GameData_226d130;
extern __int64 GameData_226d138;
extern __int64 GameData_226d148;
extern __int64 GameData_226d150;
extern __int64 GameData_226dcb0;
extern __int64 as_g_base_frame_counter;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_g_game_setting;
extern __int64 msg_MessageManager_instance_;
extern __int64 ui_LayoutAccessor_empty_;
extern __int64 ui_Manager_instance_;
extern char GameData_1a9f09e;
extern char GameData_1bf68f2;
extern int GameData_1bf6fb0[];
float cosf(float);
float sinf(float);
long double GameRoutine_1917380(__int64, __int64, _BYTE*, char, char, float,
                                double, float, float, float);
long double LayoutAccessor_15638b0(_QWORD, _QWORD, _QWORD);
long double spine_MathUtil_clamp(float, double, float);
struct PseudoSret LayoutAccessor_1560070(_QWORD, _QWORD);
void GameRoutine_1566440(__int64, char);
void GameRoutine_19171d0(__int64, __int64, int8x16_t*, char, char);
void __attribute__((noreturn)) GameRoutine_195daf0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD) __asm__("String_60a1d0");
__int64* game_165dd80(__int64* result, __int64* a2, unsigned __int64 a3,
                      __int64* a4, __int64 a5);
__int64 game_1678f00_alt1(__int64 a1, __int64 a2) __asm__("game_1678f00");
__int64 game_1679f70(__int64 result);
void game_167a220_alt1(_QWORD* a1) __asm__("game_167a220");
void game_167a9b0_alt2(_QWORD* a1, __int64 a2) __asm__("game_167a9b0");
__int64 game_167aa60(_QWORD* a1);
__int64 game_1691960();
__int64 game_1691c80();
__int64 game_1692120();
__int64 game_16922c0();
__int64 game_1692460();
__int64 game_1692600();
__int64 game_1692880();
__int64 game_1692bc0();
__int64 game_1692e20();
_QWORD* game_1693aa0();
const char* game_1694f00();
__int64* game_16ad210_alt1(__int64* result, __int64 a2, char a3,
                           __int64 a4) __asm__("game_16ad210");
void game_16db800(__int64 a1);
_QWORD* game_16f1350(_QWORD* a1, __int64 a2, char a3);
void game_170cea0();
__n128 game_170ecf0(__int64 a1, int a2);
__int64 game_1738db0(__int64 a1);
__int64 game_1786010_alt1(__int64 result) __asm__("game_1786010");
__attribute__((swiftcall)) void game_18c9a10(PSEUDO_X8 x8_, __int64 a1,
                                             __int64 a2, __int64 a3);
__int64 game_18ca380(__int64 a1, float a2);
__int64 game_18ca430(__int64 a1);
__int64 game_191b920(__int64 result, _BYTE* a2, _BYTE* a3, float a4, float a5,
                     float a6, float a7);
__int64 game_191c8b0(__int64 a1, __int64 a2);
__int64 game_191cb10(__int64 a1, __int64 a2);
__int64 game_191cd20(__int64 a1, __int64 a2);
__int64 game_191ce20(__int64 a1, __int64 a2);
void game_191d2f0(__int64 a1, __int64 a2, float a3);
__attribute__((swiftcall)) void
game_195ba40_alt2(PSEUDO_X8 x8_, __int64 result) __asm__("game_195ba40");
__int64 game_195c040_alt1(__int64 a1) __asm__("game_195c040");
__attribute__((swiftcall)) void game_196dfe0(PSEUDO_X8 x8_, __int64 a1, int a2);
void game_199d2e0_alt1(__int64 a1, __int64* a2) __asm__("game_199d2e0");
__int64 GameRoutine_19a1960(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            long double);
__int64 LayoutAccessor_1563280(_QWORD, _QWORD, _QWORD);
__int64 game_gmap_1656640(_QWORD, float);
__int64 game_gmap_GmapTroopInfo_Setup(_QWORD);
__n128 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212d708;
extern __int64* GameData_2130e70;
float LayoutAccessor_15637c0(_QWORD, _QWORD, _QWORD);
void game_19a0e60_alt1(__int64 a1) __asm__("game_19a0e60");
void game_19a14c0_alt1(__int64 a1) __asm__("game_19a14c0");
_QWORD* LayoutAccessor_1560520_alt1(__int64*, __int64, const char*,
                                    _BYTE*) __asm__("LayoutAccessor_1560520");
_QWORD* SpineModel_1919040_alt1(_QWORD*,
                                __int64*) __asm__("SpineModel_1919040");
_QWORD* ui_LayoutAccessor_Setup_155dda0_alt1(_QWORD*, _QWORD*) __asm__(
    "ui_LayoutAccessor_Setup_155dda0");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt2(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64 GameHr_1650120(__int64, __int64);
__int64 GameHr_1651170(__int64);
__int64 GameHr_165f140(__int64, __int64*);
__int64 GameRoutine_1650a00_alt1(__int64 result, __int64*,
                                 __int64) __asm__("GameRoutine_1650a00");
__int64 GameRoutine_16512e0_alt1(__int64*,
                                 __int64) __asm__("GameRoutine_16512e0");
__int64 GameRoutine_191d220_alt1(__int64) __asm__("GameRoutine_191d220");
__int64 GmapUIDef_1654a80_alt1(__int64) __asm__("GmapUIDef_1654a80");
__int64 Impl_1328460_alt1(__int64) __asm__("Impl_1328460");
__int64 Impl_132a360_alt1(__int64) __asm__("Impl_132a360");
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64
MultiMenuSequence_1786b20_alt1(_QWORD*) __asm__("MultiMenuSequence_1786b20");
__int64 SpineCaptureProcessor_191e360_alt1(
    __int64 result, unsigned __int64,
    char) __asm__("SpineCaptureProcessor_191e360");
__int64 game_167a9b0_alt3(__int64*, __int64) __asm__("game_167a9b0");
__int64 game_IsVibrationEnabled_alt1(_BYTE*) __asm__("game_IsVibrationEnabled");
__int64 game_gmap_GmapTroopInfo_Setup_alt1(__int64, __int64*) __asm__(
    "game_gmap_GmapTroopInfo_Setup");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_SetPriority_alt1(__int64 result, int) __asm__(
    "ui_LayoutAccessor_SetPriority");
bool Impl_1328300_alt1(__int64) __asm__("Impl_1328300");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
long double GameRoutine_1917380_alt1(__int64, __int64, _BYTE*, char,
                                     char) __asm__("GameRoutine_1917380");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
unsigned int* game_gmap_SpotMgr_GetCurrentSpot_alt2() __asm__(
    "game_gmap_SpotMgr_GetCurrentSpot");
void GameHr_1650120_alt1(__int64, __int64) __asm__("GameHr_1650120");
__int64 game_167a220(_QWORD* a1);
void game_167a9b0(__int64* a1, __int64 a2);
_QWORD* game_1786010(_QWORD* result);
__int64 game_199d2e0(__int64 a1, __int64* a2);
unsigned __int64 game_19a0e60(__int64 a1);
__int64 GameHr_19805e0(const char*, char);
__int64 GameRoutine_19a1960_alt1(__int64 result, __int64*, __int64*, __int64,
                                 char) __asm__("GameRoutine_19a1960");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 GameRoutine_715440_alt1() __asm__("GameRoutine_715440");
__int64 GameSituation_906440_alt1(__int64,
                                  __int64*) __asm__("GameSituation_906440");
__int64 GameSituation_906910_alt1(__int64,
                                  __int64*) __asm__("GameSituation_906910");
__int64 GameSubquestData_125b8e0_alt1(
    _QWORD*, const char*, unsigned __int8) __asm__("GameSubquestData_125b8e0");
__int64 GameSubquestData_125bbc0_alt1(__int64 result) __asm__(
    "GameSubquestData_125bbc0");
__int64 LayoutAccessor_1563280_alt1(__int64*, __int64,
                                    char) __asm__("LayoutAccessor_1563280");
__int64 game_gmap_1656640_alt1(__int64 result,
                               float) __asm__("game_gmap_1656640");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
float LayoutAccessor_15637c0_alt1(__int64*, __int64,
                                  char) __asm__("LayoutAccessor_15637c0");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameHr_1679140(__int64);
void __attribute__((noreturn))
GameRoutine_195daf0_alt1() __asm__("GameRoutine_195daf0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_1678f00(__int64 a1, __int64 a2);
void game_16ad210(__int64* a1, __int64 a2, char a3, const char* a4);
__attribute__((swiftcall)) void game_195ba40(PSEUDO_X8 x8_, char** a1);
__int64 game_195c040(char** a1);
__int64 game_19a14c0(__int64 a1);

__int64* game_165dd80(__int64* result, __int64* a2, unsigned __int64 a3,
                      __int64* a4, __int64 a5)
{
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  __int64* v9;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64* v21;
  __int64* v23;
  __int64* v24;
  __int64* v25;
  __int64* v26;
  __int64* v27;
  __int64 v28;
  __int64* v29;
  __int64* v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;

  if (a3 >= 2) {
    if (a3 == 2) {
      if (*((_DWORD*)a2 - 2) < *((_DWORD*)result + 2)) {
        v5 = *result;
        *result = *(a2 - 2);
        *(a2 - 2) = v5;
        LODWORD(v5) = *((_DWORD*)result + 2);
        *((_DWORD*)result + 2) = *((_DWORD*)a2 - 2);
        *((_DWORD*)a2 - 2) = v5;
      }
    }
    else if ((__int64)a3 <= 0) {
      if (result != a2) {
        v12 = result + 2;
        if (result + 2 != a2) {
          v13 = 0;
          v14 = result;
          do {
            v16 = *((_DWORD*)v14 + 6);
            v17 = *((_DWORD*)v14 + 2);
            v14 = v12;
            if (v16 < v17) {
              v18 = *v12;
              v19 = v13;
              do {
                v20 = (char*)result + v19;
                *((_QWORD*)v20 + 2) = *(__int64*)((char*)result + v19);
                *((_DWORD*)v20 + 6) = *(_DWORD*)((char*)result + v19 + 8);
                if (v19 == 0) {
                  v15 = result;
                  goto LABEL_13;
                }
                v19 -= 16;
              } while (v16 < *((_DWORD*)v20 - 2));
              v15 = (__int64*)((char*)result + v19 + 16);
            LABEL_13:
              *v15 = v18;
              *((_DWORD*)v15 + 2) = v16;
            }
            v12 = v14 + 2;
            v13 += 16;
          } while (v14 + 2 != a2);
        }
      }
    }
    else {
      v6 = a3 >> 1;
      v8 = a3 - (a3 >> 1);
      if ((__int64)a3 <= a5) {
        v21 = result;
        v23 = a4;
        GameRoutine_165e040((__int64)result, &result[2 * v6], a3 >> 1, a4);
        v24 = &v23[2 * v6];
        result =
            (__int64*)GameRoutine_165e040((__int64)&v21[2 * v6], a2, v8, v24);
        v25 = &v23[2 * a3];
        v26 = v24;
        while (v26 != v25) {
          if (*((_DWORD*)v26 + 2) >= *((_DWORD*)v23 + 2)) {
            v27 = v23;
            v23 += 2;
          }
          else {
            v27 = v26;
            v26 += 2;
          }
          *v21 = *v27;
          *((_DWORD*)v21 + 2) = *((_DWORD*)v27 + 2);
          v21 += 2;
          if (v23 == v24) {
            if (v26 != v25) {
              v31 = 0;
              do {
                v32 = &v26[v31];
                v33 = &v21[v31];
                v31 += 2;
                *v33 = *v32;
                *((_DWORD*)v33 + 2) = *((_DWORD*)v32 + 2);
              } while (v32 + 2 != v25);
            }
            return result;
          }
        }
        if (v23 != v24) {
          v28 = 0;
          do {
            v29 = &v23[v28];
            v30 = &v21[v28];
            v28 += 2;
            *v30 = *v29;
            *((_DWORD*)v30 + 2) = *((_DWORD*)v29 + 2);
          } while (v29 + 2 != v24);
        }
      }
      else {
        v9 = result;
        game_165dd80(result, &result[2 * v6], a3 >> 1, a4, a5);
        game_165dd80(&v9[2 * v6], a2, v8, a4, a5);
        return GameRoutine_165e2a0(v9, &v9[2 * v6], a2, v6, v8, a4, a5);
      }
    }
  }
  return result;
}

void game_1678f00(__int64 a1, __int64 a2)
{
  __int64* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    __int64* v15;
    __int64* v16;
    __int64 v17;
  } v15_;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;
  _QWORD* v20;

  *(_WORD*)(a1 + 16) = 0;
  v4 = GameData_2131b00[0];
  *(_WORD*)(a1 + 80) = 257;
  *(_DWORD*)(a1 + 96) = 6;
  *(_DWORD*)(a1 + 40) = 0;
  *(_BYTE*)(a1 + 82) = 1;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 1;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 88) = a2;
  *(_QWORD*)a1 = game_gmap_GmapSpotMenuItem_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  v15_.v16 = nullptr;
  v15_.v17 = 0;
  v15_.v15 = nullptr;
  *(_QWORD*)(a1 + 104) = v4 + 2;
  *(_QWORD*)(a1 + 112) = 0;
  v5 = (_QWORD*)a1;
  v6 = v18_.v18;
  *(_QWORD*)((char*)v5 + 172) = 0;
  v5 = (_QWORD*)((char*)v5 + 172);
  *(_DWORD*)(a1 + 176) = 2;
  v7 = a1 + 176;
  *(_QWORD*)(v7 + 20) = 0;
  *(_QWORD*)(v7 + 12) = 0;
  *(_QWORD*)(v7 + 4) = 0;
  v5[11] = 0;
  v5[12] = 0;
  *(_QWORD*)(v7 + 76) = 0;
  *(_QWORD*)(v7 + 68) = 0;
  *(_QWORD*)(v7 + 60) = 0;
  *(_QWORD*)(v7 + 52) = 0;
  *(_QWORD*)(v7 + 44) = 0;
  *(_QWORD*)(v7 + 36) = 0;
  *(_QWORD*)(v7 + 28) = 0;
  *(_QWORD*)(v7 + 8) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_DWORD*)(v7 + 16) = 2;
  *(_QWORD*)(v7 + 24) = 0;
  *(_QWORD*)(v7 + 32) = 0;
  *(_DWORD*)(v7 + 32) = 2;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_DWORD*)(v7 + 48) = 2;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_DWORD*)(v7 + 64) = 2;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_DWORD*)(v7 + 80) = 2;
  *(_DWORD*)(v7 + 100) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  v18_.v19 = v18_.v18;
  v18_.v18[0] = GameData_202d448;
  v18_.v18[1] = &v15_.v15;
  if (a2 == 0) {
    goto LABEL_12;
  }
  v8 = *(_QWORD*)(GameData_21c96e8 + 8);
  v9 = *(_QWORD**)(v8 + 8);
  v10 = *(_QWORD**)(v8 + 16);
  if (v9 == v10) {
    v6 = v18_.v18;
  LABEL_12:
    v12 = 32;
    goto LABEL_13;
  }
  do {
    if (*(_QWORD*)*v9 == a2) {
      v20 = (_QWORD*)*v9;
      if (v18_.v19 == nullptr) {
        GameRoutine_60a310();
      }
      (*(void (**)(_QWORD*, _QWORD**))(*v18_.v19 + 48LL))(v18_.v19, &v20);
    }
    ++v9;
  } while (v9 != v10);
  v6 = v18_.v19;
  if (v18_.v19 == v18_.v18) {
    goto LABEL_12;
  }
  if (v18_.v19 != nullptr) {
    v12 = 40;
  LABEL_13:
    (*(void (**)(__int64))(*v6 + v12))((__int64)v6);
  }
  if (v15_.v16 == v15_.v15) {
    v13 = 0;
  }
  else {
    v13 = *v15_.v15;
  }
  GmapUIDef_1654300(v7, v13, 0);
  GameHr_1679140(a1);
  if (v15_.v15 != nullptr) {
    v15_.v16 = v15_.v15;
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, (__int64)v15_.v15);
  }
}

__int64 game_1679f70(__int64 result)
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
  atomic_ullong* v10;
  __int64* v11;
  __int64* v12;
  long double v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  unsigned int v19;
  int v20;
  int v21;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  atomic_ullong* v27;
  __int64* v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  atomic_ullong* v33;
  __int64* v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;

  if (*(_BYTE*)(result + 77) == 1) {
    v38 = v5;
    v39 = v4;
    v40 = v3;
    v41 = v1;
    v42 = v2;
    v6 = result;
    result = game_gameui_1596b00(result + 104);
    if (*(int*)(v6 + 272) >= 3) {
      v7 = *(_QWORD*)(v6 + 56);
      if (v7 == 0) {
        goto LABEL_8;
      }
      v8 = std___1___shared_weak_count_lock(v7);
      if (v8 == 0) {
        goto LABEL_8;
      }
      v9 = v8;
      v10 = (atomic_ullong*)(v8 + 8);
      v11 = *(__int64**)(v6 + 48);
      if (atomic_fetch_add(v10, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v12 = v11;
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v9);
        v11 = v12;
      }
      if (v11 == nullptr) {
      LABEL_8:
        v11 = &ui_LayoutAccessor_empty_;
      }
      v13 = LayoutAccessor_15638b0(v11, "Change", 1);
      v14 = *(float*)&v13;
      result =
          nn_os_ConvertToTimeSpan(*(_QWORD*)(as_g_base_frame_counter + 128));
      v15 = (float)(result / 1000);
      v16 = v15 / 16683.0;
      if (v14 <= 0.0) {
        v19 = 0;
      }
      else {
        v17 = floorf(v16 / v14);
        result = fmodf(v15 / 16683.0, v14);
        v19 = (unsigned int)(float)(v17 + v17);
        if (v18 > 72.0) {
          ++v19;
        }
        if (v18 > 152.0) {
          ++v19;
        }
      }
      v20 = v19 & 1;
      v21 = v19 % *(_DWORD*)(v6 + 272);
      if (*(_DWORD*)(v6 + 280) != v21 || *(_DWORD*)(v6 + 284) != v20) {
        v23 = game_util_Format("L_Unit%02d", v20);
        v24 = *(_QWORD*)(v6 + 56);
        if (v24 == 0) {
          goto LABEL_25;
        }
        v25 = std___1___shared_weak_count_lock(v24);
        if (v25 == 0) {
          goto LABEL_25;
        }
        v26 = v25;
        v27 = (atomic_ullong*)(v25 + 8);
        v28 = *(__int64**)(v6 + 48);
        if (atomic_fetch_add(v27, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          v29 = v28;
          (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
          std___1___shared_weak_count___release_weak(v26);
          v28 = v29;
        }
        if (v28 == nullptr) {
        LABEL_25:
          v28 = &ui_LayoutAccessor_empty_;
        }
        *(struct PseudoSret*)(&v36) = LayoutAccessor_1560070(v28, v23);
        GameRoutine_1653f50((_DWORD*)(v6 + 176 + 16LL * v21), &v36);
        if (v37 != 0) {
          std___1___shared_weak_count___release_weak(v37);
        }
        *(_DWORD*)(v6 + 280) = v21;
        *(_DWORD*)(v6 + 284) = v20;
        fmodf(v16, v14);
        v30 = *(_QWORD*)(v6 + 56);
        if (v30 == 0) {
          goto LABEL_33;
        }
        v31 = std___1___shared_weak_count_lock(v30);
        if (v31 == 0) {
          goto LABEL_33;
        }
        v32 = v31;
        v33 = (atomic_ullong*)(v31 + 8);
        v34 = *(__int64**)(v6 + 48);
        if (atomic_fetch_add(v33, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          v35 = v34;
          (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
          std___1___shared_weak_count___release_weak(v32);
          v34 = v35;
        }
        if (v34 == nullptr) {
        LABEL_33:
          v34 = &ui_LayoutAccessor_empty_;
        }
        return LayoutAccessor_15636c0(v34, "Change", 1);
      }
    }
  }
  return result;
}

__int64 game_167a220(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  unsigned int* v10;
  unsigned int* v11;
  __int64 v12;
  const char* v13;
  __int64* v14;
  int v15;
  const char* v16;
  int v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  atomic_ullong* v27;
  __int64* v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  atomic_ullong* v33;
  __int64* v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  atomic_ullong* v39;
  __int64* v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  atomic_ullong* v45;
  __int64* v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  atomic_ullong* v51;
  __int64* v52;
  __int64* v53;
  char v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  atomic_ullong* v58;
  __int64* v59;
  __int64* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  atomic_ullong* v64;
  __int64* v65;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  atomic_ullong* v70;
  __int64* v71;
  __int64* v72;
  struct {
    __int64 v73;
    __int64 v74;
  } v73_;
  struct {
    __int64 v75;
    __int64 v76;
  } v75_;
  struct {
    __int64 v77;
    __int64 v78;
  } v77_;
  struct {
    __int64 v79;
    __int64 v80;
  } v79_;
  __int64 v81[2];
  struct {
    __int64 v82;
    const char* v83;
    char v84;
    char gap105_[3];
    int v85;
  } v82_;
  _QWORD v86[2];

  v2 = a1[7];
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock_alt1(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = (__int64*)a1[6];
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v14 = v6;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak_alt2(v4);
  v6 = v14;
  if (v14 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  LayoutAccessor_1560070_alt2((void*)(&v82_.v82), v6, "L_Info");
  v81[0] = 0;
  if (v82_.v83 == nullptr) {
    goto LABEL_52;
  }
  v7 = std___1___shared_weak_count_lock_alt1((__int64)v82_.v83);
  v81[1] = v7;
  if (v7 != 0) {
    v8 = v82_.v82;
    v81[0] = v82_.v82;
    result = (__int64)v82_.v83;
    if (v82_.v83 == nullptr) {
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  v8 = 0;
  result = (__int64)v82_.v83;
  if (v82_.v83 != nullptr) {
  LABEL_9:
    result = std___1___shared_weak_count___release_weak_alt2(result);
  }
LABEL_10:
  if (v8 != 0) {
    v10 = (unsigned int*)a1[11];
    v11 = game_gmap_SpotMgr_GetCurrentSpot_alt2();
    v12 = a1[11];
    if (v10 != v11 &&
        ((*(_BYTE*)(v12 + 178) & 4) == 0 || game_GameModeData_instance_ == 0 ||
         *(_DWORD*)(game_GameModeData_instance_ + 60) != 3)) {
      if (Impl_1328300_alt1(a1[11])) {
        if ((Impl_1328460_alt1(v12) & 1) != 0) {
          LayoutAccessor_155e830_alt1(v8, 1);
          v13 = "MID_Gmap_SpotInfo_TempleWarp_Opened";
          v86[0] = v8;
          v86[1] = v7;
          if (v7 == 0) {
            goto LABEL_46;
          }
          goto LABEL_25;
        }
        result = Impl_13261c0_alt1(a1[11]);
        if ((unsigned __int8)result != 2) {
          goto LABEL_47;
        }
        LayoutAccessor_155e830_alt1(v8, 1);
        v86[0] = v8;
        v86[1] = v7;
        if (v7 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                    memory_order_relaxed);
          v13 = "MID_Gmap_SpotInfo_TempleWarp_Unopened";
          goto LABEL_33;
        }
        v13 = "MID_Gmap_SpotInfo_TempleWarp_Unopened";
        goto LABEL_46;
      }
      if ((unsigned __int8)Impl_13261c0_alt1(a1[11]) == 2) {
        LayoutAccessor_155e830_alt1(v8, 1);
        v13 = "MID_Gmap_SpotInfo_TempleWarp_Null";
        v86[0] = v8;
        v86[1] = v7;
        if (v7 != 0) {
        LABEL_25:
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                    memory_order_relaxed);
        LABEL_33:
          v82_.v82 = 0;
          v82_.v83 = v13;
          v82_.v84 = 1;
          v82_.v85 = 0;
          GameHr_1650120((__int64)v86, (__int64)&v82_.v82);
          result = std___1___shared_weak_count___release_weak_alt2(v7);
          goto LABEL_47;
        }
      LABEL_46:
        v82_.v82 = 0;
        v82_.v83 = v13;
        v82_.v84 = 1;
        v82_.v85 = 0;
        result = GameHr_1650120((__int64)v86, (__int64)&v82_.v82);
        goto LABEL_47;
      }
      v12 = a1[11];
    }
    if ((Impl_132a360_alt1(v12) & 1) != 0) {
      LayoutAccessor_155e830_alt1(v8, 1);
      v86[0] = v8;
      v86[1] = v7;
      if (v7 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                  memory_order_relaxed);
        v13 = "MID_Gmap_SpotInfo_ExWarp_Opened";
        goto LABEL_33;
      }
      v13 = "MID_Gmap_SpotInfo_ExWarp_Opened";
      goto LABEL_46;
    }
    if ((unsigned __int8)Impl_13261c0_alt1(a1[11]) == 4) {
      v15 = GameHr_1651170(a1[11]);
      if (v15 == 5) {
        LayoutAccessor_155e830_alt1(v8, 1);
        v86[0] = v8;
        v86[1] = v7;
        if (v7 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                    memory_order_relaxed);
          v13 = "MID_Gmap_UnusableSpot_Temporarily";
          goto LABEL_33;
        }
        v13 = "MID_Gmap_UnusableSpot_Temporarily";
        goto LABEL_46;
      }
      if (v15 == 4) {
        LayoutAccessor_155e830_alt1(v8, 1);
        v86[0] = v8;
        v86[1] = v7;
        if (v7 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                    memory_order_relaxed);
          v13 = "MID_Gmap_UnusableSpot";
          goto LABEL_33;
        }
        v13 = "MID_Gmap_UnusableSpot";
        goto LABEL_46;
      }
    }
    result = Impl_13261c0_alt1(a1[11]);
    if ((unsigned __int8)result == 3) {
      result = GmapUIDef_1654a80_alt1(a1[11]);
      if ((_DWORD)result == 1) {
        v16 = "MID_Gmap_UnusableSpot_Temporarily";
        goto LABEL_123;
      }
      if ((_DWORD)result == 2) {
        v16 = "MID_Gmap_UnusableSpot";
      LABEL_123:
        result = game_167a9b0_alt3(v81, (__int64)v16);
      LABEL_47:
        v17 = 0;
        if (v7 != 0) {
        LABEL_48:
          if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
            result = std___1___shared_weak_count___release_weak_alt2(v7);
            if ((v17 & 1) == 0) {
              return result;
            }
            goto LABEL_52;
          }
        }
      LABEL_49:
        if (v17 == 0) {
          return result;
        }
      LABEL_52:
        v18 = a1[11];
        v19 = *(_QWORD*)(*GameData_212c790 + 8);
        v20 = *(_QWORD**)(v19 + 8);
        v21 = *(_QWORD**)(v19 + 16);
        while (1) {
          if (v20 == v21) {
            goto LABEL_59;
          }
          v22 = (_QWORD*)*v20;
          if (*(_QWORD*)*v20 == v18) {
            v23 = v22[12];
            if (v23 != 0 &&
                (unsigned int)*(unsigned __int8*)(v23 + 32) - 3 < 2) {
              break;
            }
          }
          ++v20;
        }
        if ((v22[68] & 8) != 0) {
          v61 = a1[7];
          if (v61 == 0) {
            goto LABEL_111;
          }
          v62 = std___1___shared_weak_count_lock_alt1(v61);
          if (v62 == 0) {
            goto LABEL_111;
          }
          v63 = v62;
          v64 = (atomic_ullong*)(v62 + 8);
          v65 = (__int64*)a1[6];
          if (atomic_fetch_add(v64, 0xFFFFFFFFFFFFFFFFLL) == 0) {
            v66 = v65;
            (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
            std___1___shared_weak_count___release_weak_alt2(v63);
            v65 = v66;
          }
          if (v65 == nullptr) {
          LABEL_111:
            v65 = &ui_LayoutAccessor_empty_;
          }
          LayoutAccessor_1562cf0_alt1((__int64)v65, "Info_HellGate");
          v67 = a1[7];
          if (v67 == 0) {
            goto LABEL_117;
          }
          v68 = std___1___shared_weak_count_lock_alt1(v67);
          if (v68 == 0) {
            goto LABEL_117;
          }
          v69 = v68;
          v70 = (atomic_ullong*)(v68 + 8);
          v71 = (__int64*)a1[6];
          if (atomic_fetch_add(v70, 0xFFFFFFFFFFFFFFFFLL) == 0) {
            v72 = v71;
            (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69);
            std___1___shared_weak_count___release_weak_alt2(v69);
            v71 = v72;
          }
          if (v71 == nullptr) {
          LABEL_117:
            v71 = &ui_LayoutAccessor_empty_;
          }
          LayoutAccessor_1560070_alt2((void*)(&v79_.v79), v71,
                                      "L_AppropriateLv");
          GameRoutine_16512e0_alt1(&v79_.v79, a1[11]);
          result = v79_.v80;
          if (v79_.v80 != 0) {
            return std___1___shared_weak_count___release_weak_alt2(result);
          }
        }
        else {
        LABEL_59:
          result = Impl_13261c0_alt1(v18);
          if ((unsigned __int8)result == 4) {
            v42 = a1[7];
            if (v42 == 0) {
              goto LABEL_88;
            }
            v43 = std___1___shared_weak_count_lock_alt1(v42);
            if (v43 == 0) {
              goto LABEL_88;
            }
            v44 = v43;
            v45 = (atomic_ullong*)(v43 + 8);
            v46 = (__int64*)a1[6];
            if (atomic_fetch_add(v45, 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v47 = v46;
              (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
              std___1___shared_weak_count___release_weak_alt2(v44);
              v46 = v47;
            }
            if (v46 == nullptr) {
            LABEL_88:
              v46 = &ui_LayoutAccessor_empty_;
            }
            LayoutAccessor_1562cf0_alt1((__int64)v46, "Info_GateOn");
            v48 = a1[7];
            if (v48 == 0) {
              goto LABEL_94;
            }
            v49 = std___1___shared_weak_count_lock_alt1(v48);
            if (v49 == 0) {
              goto LABEL_94;
            }
            v50 = v49;
            v51 = (atomic_ullong*)(v49 + 8);
            v52 = (__int64*)a1[6];
            if (atomic_fetch_add(v51, 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v53 = v52;
              (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
              std___1___shared_weak_count___release_weak_alt2(v50);
              v52 = v53;
            }
            if (v52 == nullptr) {
            LABEL_94:
              v52 = &ui_LayoutAccessor_empty_;
            }
            LayoutAccessor_1560070_alt2((void*)(&v73_.v73), v52, "L_Gate");
            v54 = GameRoutine_1650cc0((__int64)&v73_.v73, a1[11]);
            result = v73_.v74;
            if (v73_.v74 != 0) {
              result =
                  std___1___shared_weak_count___release_weak_alt2(v73_.v74);
            }
            if ((v54 & 1) == 0) {
              v55 = a1[7];
              if (v55 == 0) {
                goto LABEL_103;
              }
              v56 = std___1___shared_weak_count_lock_alt1(v55);
              if (v56 == 0) {
                goto LABEL_103;
              }
              v57 = v56;
              v58 = (atomic_ullong*)(v56 + 8);
              v59 = (__int64*)a1[6];
              if (atomic_fetch_add(v58, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                v60 = v59;
                (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
                std___1___shared_weak_count___release_weak_alt2(v57);
                v59 = v60;
              }
              if (v59 == nullptr) {
              LABEL_103:
                v59 = &ui_LayoutAccessor_empty_;
              }
              return LayoutAccessor_1562cf0_alt1((__int64)v59, "Info_GateOff");
            }
          }
          else if ((unsigned __int8)result == 9) {
            v24 = a1[7];
            if (v24 == 0) {
              goto LABEL_66;
            }
            v25 = std___1___shared_weak_count_lock_alt1(v24);
            if (v25 == 0) {
              goto LABEL_66;
            }
            v26 = v25;
            v27 = (atomic_ullong*)(v25 + 8);
            v28 = (__int64*)a1[6];
            if (atomic_fetch_add(v27, 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v29 = v28;
              (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
              std___1___shared_weak_count___release_weak_alt2(v26);
              v28 = v29;
            }
            if (v28 == nullptr) {
            LABEL_66:
              v28 = &ui_LayoutAccessor_empty_;
            }
            LayoutAccessor_1562cf0_alt1((__int64)v28, "Info_Dungeon");
            v30 = a1[7];
            if (v30 == 0) {
              goto LABEL_72;
            }
            v31 = std___1___shared_weak_count_lock_alt1(v30);
            if (v31 == 0) {
              goto LABEL_72;
            }
            v32 = v31;
            v33 = (atomic_ullong*)(v31 + 8);
            v34 = (__int64*)a1[6];
            if (atomic_fetch_add(v33, 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v35 = v34;
              (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
              std___1___shared_weak_count___release_weak_alt2(v32);
              v34 = v35;
            }
            if (v34 == nullptr) {
            LABEL_72:
              v34 = &ui_LayoutAccessor_empty_;
            }
            LayoutAccessor_1560070_alt2((void*)(&v77_.v77), v34,
                                        "L_AppropriateLv");
            v36 = a1[7];
            if (v36 == 0) {
              goto LABEL_78;
            }
            v37 = std___1___shared_weak_count_lock_alt1(v36);
            if (v37 == 0) {
              goto LABEL_78;
            }
            v38 = v37;
            v39 = (atomic_ullong*)(v37 + 8);
            v40 = (__int64*)a1[6];
            if (atomic_fetch_add(v39, 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v41 = v40;
              (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
              std___1___shared_weak_count___release_weak_alt2(v38);
              v40 = v41;
            }
            if (v40 == nullptr) {
            LABEL_78:
              v40 = &ui_LayoutAccessor_empty_;
            }
            LayoutAccessor_1560070_alt2((void*)(&v75_.v75), v40, "L_Treasure");
            GameRoutine_1650a00_alt1((__int64)&v77_.v77, &v75_.v75, a1[11]);
            if (v75_.v76 != 0) {
              std___1___shared_weak_count___release_weak_alt2(v75_.v76);
            }
            result = v77_.v78;
            if (v77_.v78 != 0) {
              return std___1___shared_weak_count___release_weak_alt2(result);
            }
          }
        }
        return result;
      }
    }
  }
  v17 = 1;
  if (v7 != 0) {
    goto LABEL_48;
  }
  goto LABEL_49;
}

void game_167a9b0(__int64* a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  struct {
    _QWORD v6[2];
    char v7;
    char gap25_[3];
    int v8;
  } v6_;
  _QWORD v9[2];

  LayoutAccessor_155e830_alt1(*a1, 1);
  v4 = *a1;
  v5 = a1[1];
  v9[0] = v4;
  v9[1] = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    v6_.v6[0] = 0;
    v6_.v6[1] = a2;
    v6_.v7 = 1;
    v6_.v8 = 0;
    GameHr_1650120_alt1((__int64)v9, (__int64)v6_.v6);
    std___1___shared_weak_count___release_weak_alt2(v5);
  }
  else {
    v6_.v6[0] = 0;
    v6_.v6[1] = a2;
    v6_.v7 = 1;
    v6_.v8 = 0;
    GameHr_1650120_alt1((__int64)v9, (__int64)v6_.v6);
  }
}

__int64 game_167aa60(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64* v10;

  v2 = a1[7];
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = (__int64*)a1[6];
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v10 = v6;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak(v4);
  v6 = v10;
  if (v10 == nullptr) {
  LABEL_5:
    v6 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  v7 = ui_LayoutAccessor_FindPane(v6, "Icon");
  if (v7 == 0) {
    return GameRoutine_1651740(a1[11]);
  }
  v8 = __dynamic_cast(v7, GameData_212d670[0], GameData_212d678[0], 0);
  result = GameRoutine_1651740(a1[11]);
  if (v8 != 0) {
    return Manager_136a920(ui_Manager_instance_ + 1264, v8, 0, 7);
  }
  return result;
}

__int64 game_1691960()
{
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
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  __int64 v16;

  if ((__int64*)GameData_225eaa0 == &GameData_225ea80) {
    v0 = 32;
  }
  else {
    if (GameData_225eaa0 == 0) {
      goto LABEL_6;
    }
    v0 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225eaa0 + v0))(
      (__int64)GameData_225eaa0);
LABEL_6:
  if ((__int64*)GameData_225ea70 == &GameData_225ea50) {
    v1 = 32;
  }
  else {
    if (GameData_225ea70 == 0) {
      goto LABEL_11;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225ea70 + v1))(
      (__int64)GameData_225ea70);
LABEL_11:
  if ((__int64*)GameData_225ea40 == &GameData_225ea20) {
    v2 = 32;
  }
  else {
    if (GameData_225ea40 == 0) {
      goto LABEL_16;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225ea40 + v2))(
      (__int64)GameData_225ea40);
LABEL_16:
  if ((__int64*)GameData_225ea10 == &GameData_225e9f0) {
    v3 = 32;
  }
  else {
    if (GameData_225ea10 == 0) {
      goto LABEL_21;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225ea10 + v3))(
      (__int64)GameData_225ea10);
LABEL_21:
  if ((__int64*)GameData_225e9e0 == &GameData_225e9c0) {
    v4 = 32;
  }
  else {
    if (GameData_225e9e0 == 0) {
      goto LABEL_26;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225e9e0 + v4))(
      (__int64)GameData_225e9e0);
LABEL_26:
  if ((__int64*)GameData_225e9b0 == &GameData_225e990) {
    v5 = 32;
  }
  else {
    if (GameData_225e9b0 == 0) {
      goto LABEL_31;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225e9b0 + v5))(
      (__int64)GameData_225e9b0);
LABEL_31:
  if ((__int64*)GameData_225e980 == &GameData_225e960) {
    v6 = 32;
  }
  else {
    if (GameData_225e980 == 0) {
      goto LABEL_36;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225e980 + v6))(
      (__int64)GameData_225e980);
LABEL_36:
  if ((__int64*)GameData_225e950 == &GameData_225e930) {
    v7 = 32;
  }
  else {
    if (GameData_225e950 == 0) {
      goto LABEL_41;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225e950 + v7))(
      (__int64)GameData_225e950);
LABEL_41:
  if ((__int64*)GameData_225e920 == &GameData_225e900) {
    v8 = 32;
  }
  else {
    if (GameData_225e920 == 0) {
      goto LABEL_46;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225e920 + v8))(
      (__int64)GameData_225e920);
LABEL_46:
  if ((__int64*)GameData_225e8f0 == &GameData_225e8d0) {
    v9 = 32;
  }
  else {
    if (GameData_225e8f0 == 0) {
      goto LABEL_51;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225e8f0 + v9))(
      (__int64)GameData_225e8f0);
LABEL_51:
  if ((__int64*)GameData_225e8c0 == &GameData_225e8a0) {
    v10 = 32;
  }
  else {
    if (GameData_225e8c0 == 0) {
      goto LABEL_56;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225e8c0 + v10))(
      (__int64)GameData_225e8c0);
LABEL_56:
  if ((__int64*)GameData_225e890 == &GameData_225e870) {
    v11 = 32;
  }
  else {
    if (GameData_225e890 == 0) {
      goto LABEL_61;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225e890 + v11))(
      (__int64)GameData_225e890);
LABEL_61:
  if ((__int64*)GameData_225e860 == &GameData_225e840) {
    v12 = 32;
  }
  else {
    if (GameData_225e860 == 0) {
      goto LABEL_66;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225e860 + v12))(
      (__int64)GameData_225e860);
LABEL_66:
  if ((__int64*)GameData_225e830 == &GameData_225e810) {
    v13 = 32;
  }
  else {
    if (GameData_225e830 == 0) {
      goto LABEL_71;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225e830 + v13))(
      (__int64)GameData_225e830);
LABEL_71:
  if ((__int64*)GameData_225e800 == &GameData_225e7e0) {
    v14 = 32;
  }
  else {
    if (GameData_225e800 == 0) {
      goto LABEL_76;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225e800 + v14))(
      (__int64)GameData_225e800);
LABEL_76:
  result = GameData_225e7d0;
  if ((__int64*)GameData_225e7d0 == &GameData_225e7b0) {
    v16 = 32;
  }
  else {
    if (GameData_225e7d0 == 0) {
      return result;
    }
    v16 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)GameData_225e7d0 + v16))(
      (__int64)GameData_225e7d0);
}

__int64 game_1691c80()
{
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
  __int64 result;
  __int64 v24;

  if ((__int64*)GameData_225ef20 == &GameData_225ef00) {
    v0 = 32;
  }
  else {
    if (GameData_225ef20 == 0) {
      goto LABEL_6;
    }
    v0 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225ef20 + v0))(
      (__int64)GameData_225ef20);
LABEL_6:
  if ((__int64*)GameData_225eef0 == &GameData_225eed0) {
    v1 = 32;
  }
  else {
    if (GameData_225eef0 == 0) {
      goto LABEL_11;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225eef0 + v1))(
      (__int64)GameData_225eef0);
LABEL_11:
  if ((__int64*)GameData_225eec0 == &GameData_225eea0) {
    v2 = 32;
  }
  else {
    if (GameData_225eec0 == 0) {
      goto LABEL_16;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225eec0 + v2))(
      (__int64)GameData_225eec0);
LABEL_16:
  if ((__int64*)GameData_225ee90 == &GameData_225ee70) {
    v3 = 32;
  }
  else {
    if (GameData_225ee90 == 0) {
      goto LABEL_21;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225ee90 + v3))(
      (__int64)GameData_225ee90);
LABEL_21:
  if ((__int64*)GameData_225ee60 == &GameData_225ee40) {
    v4 = 32;
  }
  else {
    if (GameData_225ee60 == 0) {
      goto LABEL_26;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225ee60 + v4))(
      (__int64)GameData_225ee60);
LABEL_26:
  if ((__int64*)GameData_225ee30 == &GameData_225ee10) {
    v5 = 32;
  }
  else {
    if (GameData_225ee30 == 0) {
      goto LABEL_31;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225ee30 + v5))(
      (__int64)GameData_225ee30);
LABEL_31:
  if ((__int64*)GameData_225ee00 == &GameData_225ede0) {
    v6 = 32;
  }
  else {
    if (GameData_225ee00 == 0) {
      goto LABEL_36;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225ee00 + v6))(
      (__int64)GameData_225ee00);
LABEL_36:
  if ((__int64*)GameData_225edd0 == &GameData_225edb0) {
    v7 = 32;
  }
  else {
    if (GameData_225edd0 == 0) {
      goto LABEL_41;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225edd0 + v7))(
      (__int64)GameData_225edd0);
LABEL_41:
  if ((__int64*)GameData_225eda0 == &GameData_225ed80) {
    v8 = 32;
  }
  else {
    if (GameData_225eda0 == 0) {
      goto LABEL_46;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225eda0 + v8))(
      (__int64)GameData_225eda0);
LABEL_46:
  if ((__int64*)GameData_225ed70 == &GameData_225ed50) {
    v9 = 32;
  }
  else {
    if (GameData_225ed70 == 0) {
      goto LABEL_51;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225ed70 + v9))(
      (__int64)GameData_225ed70);
LABEL_51:
  if ((__int64*)GameData_225ed40 == &GameData_225ed20) {
    v10 = 32;
  }
  else {
    if (GameData_225ed40 == 0) {
      goto LABEL_56;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225ed40 + v10))(
      (__int64)GameData_225ed40);
LABEL_56:
  if ((__int64*)GameData_225ed10 == &GameData_225ecf0) {
    v11 = 32;
  }
  else {
    if (GameData_225ed10 == 0) {
      goto LABEL_61;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225ed10 + v11))(
      (__int64)GameData_225ed10);
LABEL_61:
  if ((__int64*)GameData_225ece0 == &GameData_225ecc0) {
    v12 = 32;
  }
  else {
    if (GameData_225ece0 == 0) {
      goto LABEL_66;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225ece0 + v12))(
      (__int64)GameData_225ece0);
LABEL_66:
  if ((__int64*)GameData_225ecb0 == &GameData_225ec90) {
    v13 = 32;
  }
  else {
    if (GameData_225ecb0 == 0) {
      goto LABEL_71;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225ecb0 + v13))(
      (__int64)GameData_225ecb0);
LABEL_71:
  if ((__int64*)GameData_225ec80 == &GameData_225ec60) {
    v14 = 32;
  }
  else {
    if (GameData_225ec80 == 0) {
      goto LABEL_76;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225ec80 + v14))(
      (__int64)GameData_225ec80);
LABEL_76:
  if ((__int64*)GameData_225ec50 == &GameData_225ec30) {
    v15 = 32;
  }
  else {
    if (GameData_225ec50 == 0) {
      goto LABEL_81;
    }
    v15 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225ec50 + v15))(
      (__int64)GameData_225ec50);
LABEL_81:
  if ((__int64*)GameData_225ec20 == &GameData_225ec00) {
    v16 = 32;
  }
  else {
    if (GameData_225ec20 == 0) {
      goto LABEL_86;
    }
    v16 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225ec20 + v16))(
      (__int64)GameData_225ec20);
LABEL_86:
  if ((__int64*)GameData_225ebf0 == &GameData_225ebd0) {
    v17 = 32;
  }
  else {
    if (GameData_225ebf0 == 0) {
      goto LABEL_91;
    }
    v17 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225ebf0 + v17))(
      (__int64)GameData_225ebf0);
LABEL_91:
  if ((__int64*)GameData_225ebc0 == &GameData_225eba0) {
    v18 = 32;
  }
  else {
    if (GameData_225ebc0 == 0) {
      goto LABEL_96;
    }
    v18 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225ebc0 + v18))(
      (__int64)GameData_225ebc0);
LABEL_96:
  if ((__int64*)GameData_225eb90 == &GameData_225eb70) {
    v19 = 32;
  }
  else {
    if (GameData_225eb90 == 0) {
      goto LABEL_101;
    }
    v19 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225eb90 + v19))(
      (__int64)GameData_225eb90);
LABEL_101:
  if ((__int64*)GameData_225eb60 == &GameData_225eb40) {
    v20 = 32;
  }
  else {
    if (GameData_225eb60 == 0) {
      goto LABEL_106;
    }
    v20 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225eb60 + v20))(
      (__int64)GameData_225eb60);
LABEL_106:
  if ((__int64*)GameData_225eb30 == &GameData_225eb10) {
    v21 = 32;
  }
  else {
    if (GameData_225eb30 == 0) {
      goto LABEL_111;
    }
    v21 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225eb30 + v21))(
      (__int64)GameData_225eb30);
LABEL_111:
  if ((__int64*)GameData_225eb00 == &GameData_225eae0) {
    v22 = 32;
  }
  else {
    if (GameData_225eb00 == 0) {
      goto LABEL_116;
    }
    v22 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225eb00 + v22))(
      (__int64)GameData_225eb00);
LABEL_116:
  result = GameData_225ead0;
  if ((__int64*)GameData_225ead0 == &GameData_225eab0) {
    v24 = 32;
  }
  else {
    if (GameData_225ead0 == 0) {
      return result;
    }
    v24 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)GameData_225ead0 + v24))(
      (__int64)GameData_225ead0);
}

__int64 game_1692120()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;

  if ((__int64*)GameData_225f0a0 == &GameData_225f080) {
    v0 = 32;
  }
  else {
    if (GameData_225f0a0 == 0) {
      goto LABEL_6;
    }
    v0 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f0a0 + v0))(
      (__int64)GameData_225f0a0);
LABEL_6:
  if ((__int64*)GameData_225f070 == &GameData_225f050) {
    v1 = 32;
  }
  else {
    if (GameData_225f070 == 0) {
      goto LABEL_11;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f070 + v1))(
      (__int64)GameData_225f070);
LABEL_11:
  if ((__int64*)GameData_225f040 == &GameData_225f020) {
    v2 = 32;
  }
  else {
    if (GameData_225f040 == 0) {
      goto LABEL_16;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f040 + v2))(
      (__int64)GameData_225f040);
LABEL_16:
  if ((__int64*)GameData_225f010 == &GameData_225eff0) {
    v3 = 32;
  }
  else {
    if (GameData_225f010 == 0) {
      goto LABEL_21;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f010 + v3))(
      (__int64)GameData_225f010);
LABEL_21:
  if ((__int64*)GameData_225efe0 == &GameData_225efc0) {
    v4 = 32;
  }
  else {
    if (GameData_225efe0 == 0) {
      goto LABEL_26;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225efe0 + v4))(
      (__int64)GameData_225efe0);
LABEL_26:
  if ((__int64*)GameData_225efb0 == &GameData_225ef90) {
    v5 = 32;
  }
  else {
    if (GameData_225efb0 == 0) {
      goto LABEL_31;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225efb0 + v5))(
      (__int64)GameData_225efb0);
LABEL_31:
  if ((__int64*)GameData_225ef80 == &GameData_225ef60) {
    v6 = 32;
  }
  else {
    if (GameData_225ef80 == 0) {
      goto LABEL_36;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225ef80 + v6))(
      (__int64)GameData_225ef80);
LABEL_36:
  result = GameData_225ef50;
  if ((__int64*)GameData_225ef50 == &GameData_225ef30) {
    v8 = 32;
  }
  else {
    if (GameData_225ef50 == 0) {
      return result;
    }
    v8 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)GameData_225ef50 + v8))(
      (__int64)GameData_225ef50);
}

__int64 game_16922c0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;

  if ((__int64*)GameData_225f220 == &GameData_225f200) {
    v0 = 32;
  }
  else {
    if (GameData_225f220 == 0) {
      goto LABEL_6;
    }
    v0 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f220 + v0))(
      (__int64)GameData_225f220);
LABEL_6:
  if ((__int64*)GameData_225f1f0 == &GameData_225f1d0) {
    v1 = 32;
  }
  else {
    if (GameData_225f1f0 == 0) {
      goto LABEL_11;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f1f0 + v1))(
      (__int64)GameData_225f1f0);
LABEL_11:
  if ((__int64*)GameData_225f1c0 == &GameData_225f1a0) {
    v2 = 32;
  }
  else {
    if (GameData_225f1c0 == 0) {
      goto LABEL_16;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f1c0 + v2))(
      (__int64)GameData_225f1c0);
LABEL_16:
  if ((__int64*)GameData_225f190 == &GameData_225f170) {
    v3 = 32;
  }
  else {
    if (GameData_225f190 == 0) {
      goto LABEL_21;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f190 + v3))(
      (__int64)GameData_225f190);
LABEL_21:
  if ((__int64*)GameData_225f160 == &GameData_225f140) {
    v4 = 32;
  }
  else {
    if (GameData_225f160 == 0) {
      goto LABEL_26;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f160 + v4))(
      (__int64)GameData_225f160);
LABEL_26:
  if ((__int64*)GameData_225f130 == &GameData_225f110) {
    v5 = 32;
  }
  else {
    if (GameData_225f130 == 0) {
      goto LABEL_31;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f130 + v5))(
      (__int64)GameData_225f130);
LABEL_31:
  if ((__int64*)GameData_225f100 == &GameData_225f0e0) {
    v6 = 32;
  }
  else {
    if (GameData_225f100 == 0) {
      goto LABEL_36;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f100 + v6))(
      (__int64)GameData_225f100);
LABEL_36:
  result = GameData_225f0d0;
  if ((__int64*)GameData_225f0d0 == &GameData_225f0b0) {
    v8 = 32;
  }
  else {
    if (GameData_225f0d0 == 0) {
      return result;
    }
    v8 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)GameData_225f0d0 + v8))(
      (__int64)GameData_225f0d0);
}

__int64 game_1692460()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;

  if ((__int64*)GameData_225f3a0 == &GameData_225f380) {
    v0 = 32;
  }
  else {
    if (GameData_225f3a0 == 0) {
      goto LABEL_6;
    }
    v0 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f3a0 + v0))(
      (__int64)GameData_225f3a0);
LABEL_6:
  if ((__int64*)GameData_225f370 == &GameData_225f350) {
    v1 = 32;
  }
  else {
    if (GameData_225f370 == 0) {
      goto LABEL_11;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f370 + v1))(
      (__int64)GameData_225f370);
LABEL_11:
  if ((__int64*)GameData_225f340 == &GameData_225f320) {
    v2 = 32;
  }
  else {
    if (GameData_225f340 == 0) {
      goto LABEL_16;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f340 + v2))(
      (__int64)GameData_225f340);
LABEL_16:
  if ((__int64*)GameData_225f310 == &GameData_225f2f0) {
    v3 = 32;
  }
  else {
    if (GameData_225f310 == 0) {
      goto LABEL_21;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f310 + v3))(
      (__int64)GameData_225f310);
LABEL_21:
  if ((__int64*)GameData_225f2e0 == &GameData_225f2c0) {
    v4 = 32;
  }
  else {
    if (GameData_225f2e0 == 0) {
      goto LABEL_26;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f2e0 + v4))(
      (__int64)GameData_225f2e0);
LABEL_26:
  if ((__int64*)GameData_225f2b0 == &GameData_225f290) {
    v5 = 32;
  }
  else {
    if (GameData_225f2b0 == 0) {
      goto LABEL_31;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f2b0 + v5))(
      (__int64)GameData_225f2b0);
LABEL_31:
  if ((__int64*)GameData_225f280 == &GameData_225f260) {
    v6 = 32;
  }
  else {
    if (GameData_225f280 == 0) {
      goto LABEL_36;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f280 + v6))(
      (__int64)GameData_225f280);
LABEL_36:
  result = GameData_225f250;
  if ((__int64*)GameData_225f250 == &GameData_225f230) {
    v8 = 32;
  }
  else {
    if (GameData_225f250 == 0) {
      return result;
    }
    v8 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)GameData_225f250 + v8))(
      (__int64)GameData_225f250);
}

__int64 game_1692600()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;

  if ((__int64*)GameData_225f520 == &GameData_225f500) {
    v0 = 32;
  }
  else {
    if (GameData_225f520 == 0) {
      goto LABEL_6;
    }
    v0 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f520 + v0))(
      (__int64)GameData_225f520);
LABEL_6:
  if ((__int64*)GameData_225f4f0 == &GameData_225f4d0) {
    v1 = 32;
  }
  else {
    if (GameData_225f4f0 == 0) {
      goto LABEL_11;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f4f0 + v1))(
      (__int64)GameData_225f4f0);
LABEL_11:
  if ((__int64*)GameData_225f4c0 == &GameData_225f4a0) {
    v2 = 32;
  }
  else {
    if (GameData_225f4c0 == 0) {
      goto LABEL_16;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f4c0 + v2))(
      (__int64)GameData_225f4c0);
LABEL_16:
  if ((__int64*)GameData_225f490 == &GameData_225f470) {
    v3 = 32;
  }
  else {
    if (GameData_225f490 == 0) {
      goto LABEL_21;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f490 + v3))(
      (__int64)GameData_225f490);
LABEL_21:
  if ((__int64*)GameData_225f460 == &GameData_225f440) {
    v4 = 32;
  }
  else {
    if (GameData_225f460 == 0) {
      goto LABEL_26;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f460 + v4))(
      (__int64)GameData_225f460);
LABEL_26:
  if ((__int64*)GameData_225f430 == &GameData_225f410) {
    v5 = 32;
  }
  else {
    if (GameData_225f430 == 0) {
      goto LABEL_31;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f430 + v5))(
      (__int64)GameData_225f430);
LABEL_31:
  if ((__int64*)GameData_225f400 == &GameData_225f3e0) {
    v6 = 32;
  }
  else {
    if (GameData_225f400 == 0) {
      goto LABEL_36;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f400 + v6))(
      (__int64)GameData_225f400);
LABEL_36:
  result = GameData_225f3d0;
  if ((__int64*)GameData_225f3d0 == &GameData_225f3b0) {
    v8 = 32;
  }
  else {
    if (GameData_225f3d0 == 0) {
      return result;
    }
    v8 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)GameData_225f3d0 + v8))(
      (__int64)GameData_225f3d0);
}

__int64 game_1692880()
{
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
  __int64 result;
  __int64 v12;

  if ((__int64*)GameData_225f820 == &GameData_225f800) {
    v0 = 32;
  }
  else {
    if (GameData_225f820 == 0) {
      goto LABEL_6;
    }
    v0 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f820 + v0))(
      (__int64)GameData_225f820);
LABEL_6:
  if ((__int64*)GameData_225f7f0 == &GameData_225f7d0) {
    v1 = 32;
  }
  else {
    if (GameData_225f7f0 == 0) {
      goto LABEL_11;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f7f0 + v1))(
      (__int64)GameData_225f7f0);
LABEL_11:
  if ((__int64*)GameData_225f7c0 == &GameData_225f7a0) {
    v2 = 32;
  }
  else {
    if (GameData_225f7c0 == 0) {
      goto LABEL_16;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f7c0 + v2))(
      (__int64)GameData_225f7c0);
LABEL_16:
  if ((__int64*)GameData_225f790 == &GameData_225f770) {
    v3 = 32;
  }
  else {
    if (GameData_225f790 == 0) {
      goto LABEL_21;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f790 + v3))(
      (__int64)GameData_225f790);
LABEL_21:
  if ((__int64*)GameData_225f760 == &GameData_225f740) {
    v4 = 32;
  }
  else {
    if (GameData_225f760 == 0) {
      goto LABEL_26;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f760 + v4))(
      (__int64)GameData_225f760);
LABEL_26:
  if ((__int64*)GameData_225f730 == &GameData_225f710) {
    v5 = 32;
  }
  else {
    if (GameData_225f730 == 0) {
      goto LABEL_31;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f730 + v5))(
      (__int64)GameData_225f730);
LABEL_31:
  if ((__int64*)GameData_225f700 == &GameData_225f6e0) {
    v6 = 32;
  }
  else {
    if (GameData_225f700 == 0) {
      goto LABEL_36;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f700 + v6))(
      (__int64)GameData_225f700);
LABEL_36:
  if ((__int64*)GameData_225f6d0 == &GameData_225f6b0) {
    v7 = 32;
  }
  else {
    if (GameData_225f6d0 == 0) {
      goto LABEL_41;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f6d0 + v7))(
      (__int64)GameData_225f6d0);
LABEL_41:
  if ((__int64*)GameData_225f6a0 == &GameData_225f680) {
    v8 = 32;
  }
  else {
    if (GameData_225f6a0 == 0) {
      goto LABEL_46;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f6a0 + v8))(
      (__int64)GameData_225f6a0);
LABEL_46:
  if ((__int64*)GameData_225f670 == &GameData_225f650) {
    v9 = 32;
  }
  else {
    if (GameData_225f670 == 0) {
      goto LABEL_51;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f670 + v9))(
      (__int64)GameData_225f670);
LABEL_51:
  if ((__int64*)GameData_225f640 == &GameData_225f620) {
    v10 = 32;
  }
  else {
    if (GameData_225f640 == 0) {
      goto LABEL_56;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f640 + v10))(
      (__int64)GameData_225f640);
LABEL_56:
  result = GameData_225f610;
  if ((__int64*)GameData_225f610 == &GameData_225f5f0) {
    v12 = 32;
  }
  else {
    if (GameData_225f610 == 0) {
      return result;
    }
    v12 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)GameData_225f610 + v12))(
      (__int64)GameData_225f610);
}

__int64 game_1692bc0()
{
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
  __int64 result;
  __int64 v12;

  if ((__int64*)GameData_225fb20 == &GameData_225fb00) {
    v0 = 32;
  }
  else {
    if (GameData_225fb20 == 0) {
      goto LABEL_6;
    }
    v0 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225fb20 + v0))(
      (__int64)GameData_225fb20);
LABEL_6:
  if ((__int64*)GameData_225faf0 == &GameData_225fad0) {
    v1 = 32;
  }
  else {
    if (GameData_225faf0 == 0) {
      goto LABEL_11;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225faf0 + v1))(
      (__int64)GameData_225faf0);
LABEL_11:
  if ((__int64*)GameData_225fac0 == &GameData_225faa0) {
    v2 = 32;
  }
  else {
    if (GameData_225fac0 == 0) {
      goto LABEL_16;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225fac0 + v2))(
      (__int64)GameData_225fac0);
LABEL_16:
  if ((__int64*)GameData_225fa90 == &GameData_225fa70) {
    v3 = 32;
  }
  else {
    if (GameData_225fa90 == 0) {
      goto LABEL_21;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225fa90 + v3))(
      (__int64)GameData_225fa90);
LABEL_21:
  if ((__int64*)GameData_225fa60 == &GameData_225fa40) {
    v4 = 32;
  }
  else {
    if (GameData_225fa60 == 0) {
      goto LABEL_26;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225fa60 + v4))(
      (__int64)GameData_225fa60);
LABEL_26:
  if ((__int64*)GameData_225fa30 == &GameData_225fa10) {
    v5 = 32;
  }
  else {
    if (GameData_225fa30 == 0) {
      goto LABEL_31;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225fa30 + v5))(
      (__int64)GameData_225fa30);
LABEL_31:
  if ((__int64*)GameData_225fa00 == &GameData_225f9e0) {
    v6 = 32;
  }
  else {
    if (GameData_225fa00 == 0) {
      goto LABEL_36;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225fa00 + v6))(
      (__int64)GameData_225fa00);
LABEL_36:
  if ((__int64*)GameData_225f9d0 == &GameData_225f9b0) {
    v7 = 32;
  }
  else {
    if (GameData_225f9d0 == 0) {
      goto LABEL_41;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f9d0 + v7))(
      (__int64)GameData_225f9d0);
LABEL_41:
  if ((__int64*)GameData_225f9a0 == &GameData_225f980) {
    v8 = 32;
  }
  else {
    if (GameData_225f9a0 == 0) {
      goto LABEL_46;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f9a0 + v8))(
      (__int64)GameData_225f9a0);
LABEL_46:
  if ((__int64*)GameData_225f970 == &GameData_225f950) {
    v9 = 32;
  }
  else {
    if (GameData_225f970 == 0) {
      goto LABEL_51;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f970 + v9))(
      (__int64)GameData_225f970);
LABEL_51:
  if ((__int64*)GameData_225f940 == &GameData_225f920) {
    v10 = 32;
  }
  else {
    if (GameData_225f940 == 0) {
      goto LABEL_56;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225f940 + v10))(
      (__int64)GameData_225f940);
LABEL_56:
  result = GameData_225f910;
  if ((__int64*)GameData_225f910 == &GameData_225f8f0) {
    v12 = 32;
  }
  else {
    if (GameData_225f910 == 0) {
      return result;
    }
    v12 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)GameData_225f910 + v12))(
      (__int64)GameData_225f910);
}

__int64 game_1692e20()
{
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
  __int64 result;
  __int64 v24;

  if ((__int64*)GameData_225ffa0 == &GameData_225ff80) {
    v0 = 32;
  }
  else {
    if (GameData_225ffa0 == 0) {
      goto LABEL_6;
    }
    v0 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225ffa0 + v0))(
      (__int64)GameData_225ffa0);
LABEL_6:
  if ((__int64*)GameData_225ff70 == &GameData_225ff50) {
    v1 = 32;
  }
  else {
    if (GameData_225ff70 == 0) {
      goto LABEL_11;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225ff70 + v1))(
      (__int64)GameData_225ff70);
LABEL_11:
  if ((__int64*)GameData_225ff40 == &GameData_225ff20) {
    v2 = 32;
  }
  else {
    if (GameData_225ff40 == 0) {
      goto LABEL_16;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225ff40 + v2))(
      (__int64)GameData_225ff40);
LABEL_16:
  if ((__int64*)GameData_225ff10 == &GameData_225fef0) {
    v3 = 32;
  }
  else {
    if (GameData_225ff10 == 0) {
      goto LABEL_21;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225ff10 + v3))(
      (__int64)GameData_225ff10);
LABEL_21:
  if ((__int64*)GameData_225fee0 == &GameData_225fec0) {
    v4 = 32;
  }
  else {
    if (GameData_225fee0 == 0) {
      goto LABEL_26;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225fee0 + v4))(
      (__int64)GameData_225fee0);
LABEL_26:
  if ((__int64*)GameData_225feb0 == &GameData_225fe90) {
    v5 = 32;
  }
  else {
    if (GameData_225feb0 == 0) {
      goto LABEL_31;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225feb0 + v5))(
      (__int64)GameData_225feb0);
LABEL_31:
  if ((__int64*)GameData_225fe80 == &GameData_225fe60) {
    v6 = 32;
  }
  else {
    if (GameData_225fe80 == 0) {
      goto LABEL_36;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225fe80 + v6))(
      (__int64)GameData_225fe80);
LABEL_36:
  if ((__int64*)GameData_225fe50 == &GameData_225fe30) {
    v7 = 32;
  }
  else {
    if (GameData_225fe50 == 0) {
      goto LABEL_41;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225fe50 + v7))(
      (__int64)GameData_225fe50);
LABEL_41:
  if ((__int64*)GameData_225fe20 == &GameData_225fe00) {
    v8 = 32;
  }
  else {
    if (GameData_225fe20 == 0) {
      goto LABEL_46;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225fe20 + v8))(
      (__int64)GameData_225fe20);
LABEL_46:
  if ((__int64*)GameData_225fdf0 == &GameData_225fdd0) {
    v9 = 32;
  }
  else {
    if (GameData_225fdf0 == 0) {
      goto LABEL_51;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225fdf0 + v9))(
      (__int64)GameData_225fdf0);
LABEL_51:
  if ((__int64*)GameData_225fdc0 == &GameData_225fda0) {
    v10 = 32;
  }
  else {
    if (GameData_225fdc0 == 0) {
      goto LABEL_56;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225fdc0 + v10))(
      (__int64)GameData_225fdc0);
LABEL_56:
  if ((__int64*)GameData_225fd90 == &GameData_225fd70) {
    v11 = 32;
  }
  else {
    if (GameData_225fd90 == 0) {
      goto LABEL_61;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225fd90 + v11))(
      (__int64)GameData_225fd90);
LABEL_61:
  if ((__int64*)GameData_225fd60 == &GameData_225fd40) {
    v12 = 32;
  }
  else {
    if (GameData_225fd60 == 0) {
      goto LABEL_66;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225fd60 + v12))(
      (__int64)GameData_225fd60);
LABEL_66:
  if ((__int64*)GameData_225fd30 == &GameData_225fd10) {
    v13 = 32;
  }
  else {
    if (GameData_225fd30 == 0) {
      goto LABEL_71;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225fd30 + v13))(
      (__int64)GameData_225fd30);
LABEL_71:
  if ((__int64*)GameData_225fd00 == &GameData_225fce0) {
    v14 = 32;
  }
  else {
    if (GameData_225fd00 == 0) {
      goto LABEL_76;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225fd00 + v14))(
      (__int64)GameData_225fd00);
LABEL_76:
  if ((__int64*)GameData_225fcd0 == &GameData_225fcb0) {
    v15 = 32;
  }
  else {
    if (GameData_225fcd0 == 0) {
      goto LABEL_81;
    }
    v15 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225fcd0 + v15))(
      (__int64)GameData_225fcd0);
LABEL_81:
  if ((__int64*)GameData_225fca0 == &GameData_225fc80) {
    v16 = 32;
  }
  else {
    if (GameData_225fca0 == 0) {
      goto LABEL_86;
    }
    v16 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225fca0 + v16))(
      (__int64)GameData_225fca0);
LABEL_86:
  if ((__int64*)GameData_225fc70 == &GameData_225fc50) {
    v17 = 32;
  }
  else {
    if (GameData_225fc70 == 0) {
      goto LABEL_91;
    }
    v17 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225fc70 + v17))(
      (__int64)GameData_225fc70);
LABEL_91:
  if ((__int64*)GameData_225fc40 == &GameData_225fc20) {
    v18 = 32;
  }
  else {
    if (GameData_225fc40 == 0) {
      goto LABEL_96;
    }
    v18 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225fc40 + v18))(
      (__int64)GameData_225fc40);
LABEL_96:
  if ((__int64*)GameData_225fc10 == &GameData_225fbf0) {
    v19 = 32;
  }
  else {
    if (GameData_225fc10 == 0) {
      goto LABEL_101;
    }
    v19 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225fc10 + v19))(
      (__int64)GameData_225fc10);
LABEL_101:
  if ((__int64*)GameData_225fbe0 == &GameData_225fbc0) {
    v20 = 32;
  }
  else {
    if (GameData_225fbe0 == 0) {
      goto LABEL_106;
    }
    v20 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225fbe0 + v20))(
      (__int64)GameData_225fbe0);
LABEL_106:
  if ((__int64*)GameData_225fbb0 == &GameData_225fb90) {
    v21 = 32;
  }
  else {
    if (GameData_225fbb0 == 0) {
      goto LABEL_111;
    }
    v21 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225fbb0 + v21))(
      (__int64)GameData_225fbb0);
LABEL_111:
  if ((__int64*)GameData_225fb80 == &GameData_225fb60) {
    v22 = 32;
  }
  else {
    if (GameData_225fb80 == 0) {
      goto LABEL_116;
    }
    v22 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_225fb80 + v22))(
      (__int64)GameData_225fb80);
LABEL_116:
  result = GameData_225fb50;
  if ((__int64*)GameData_225fb50 == &GameData_225fb30) {
    v24 = 32;
  }
  else {
    if (GameData_225fb50 == 0) {
      return result;
    }
    v24 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)GameData_225fb50 + v24))(
      (__int64)GameData_225fb50);
}

_QWORD* game_1693aa0()
{
  _QWORD* v0;
  __int64 i;
  __int64 v2;
  _QWORD* result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = &GameData_2260e40;
  for (i = -2048; i != 0; i += 64) {
    result = (_QWORD*)v0[4];
    if (v0 == result) {
      v2 = 32;
    LABEL_3:
      result =
          (_QWORD*)(*(__int64 (**)(__int64))(*result + v2))((__int64)result);
      goto LABEL_4;
    }
    if (result != nullptr) {
      v2 = 40;
      goto LABEL_3;
    }
  LABEL_4:
    v0 -= 8;
  }
  return result;
}

const char* game_1694f00()
{
  const char* result;

  result = "MID_Restart_Chapter";
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    return "MID_Restart_Chapter_Part3";
  }
  return result;
}

void game_16ad210(__int64* a1, __int64 a2, char a3, const char* a4)
{
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  struct {
    __int64 v13;
    char v14;
  } v13_;
  struct {
    __int64 v15;
    unsigned __int64 v16;
    __int64 v17;
  } v15_;

  if (a2 != 0) {
    LOWORD(v15_.v15) = 0;
    v13_.v13 = a2;
    GameRoutine_60a020_alt1((__int64)&v15_.v15, a4);
    v13_.v14 = a3;
    v6 = a1[203];
    if (v6 >= a1[204]) {
      v10 = GameRoutine_16ae120(a1 + 202, (__int64)&v13_.v13);
    }
    else {
      v7 = v13_.v13;
      *(_BYTE*)(v6 + 8) = v13_.v14;
      *(_QWORD*)v6 = v7;
      if ((v15_.v15 & 1) != 0) {
        fw_text_String_CopyTerminated((__int64*)(v6 + 16), v15_.v17, v15_.v16);
        v10 = v6 + 40;
      }
      else {
        v8 = v15_.v15;
        v9 = v15_.v17;
        v10 = v6 + 40;
        *(_QWORD*)(v6 + 24) = v15_.v16;
        *(_QWORD*)(v6 + 32) = v9;
        *(_QWORD*)(v6 + 16) = v8;
      }
    }
    v11 = v15_.v15;
    a1[203] = v10;
    if ((v11 & 1) != 0 && v15_.v17 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v15_.v17);
    }
  }
}

void game_16db800(__int64 a1)
{
  __int64 v1;
  int v2;
  __int64 v3;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _BOOL4 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  unsigned __int64 v16;
  __int128 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int8* v26;
  unsigned int v27;
  bool v28;
  int v29;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD v34[2];
  _QWORD v35[2];

  v3 = *(_QWORD*)(a1 + 832);
  if (v3 != 0) {
    if (*(_BYTE*)(v3 + 24) != 1) {
      return;
    }
    v5 = (__int64*)(a1 + 848);
    if (*(_QWORD*)(a1 + 864) == 0 || (v6 = *(_QWORD*)(a1 + 856)) == 0) {
    LABEL_22:
      v14 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 208LL))(a1);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 216LL))(a1) & 1) != 0) {
        v15 = game_ProcFadeView_instance_;
        if (game_ProcFadeView_instance_ == 0) {
        LABEL_32:
          LODWORD(v1) = v15 + v14;
        LABEL_33:
          v18 = *(_QWORD*)(a1 + 840);
          v35[0] = *(_QWORD*)(a1 + 832);
          v35[1] = v18;
          if (v18 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                      memory_order_relaxed);
            ui_LayoutAccessor_Setup_155dda0(a1 + 848, v35);
            if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
              std___1___shared_weak_count___release_weak(v18);
            }
          }
          else {
            ui_LayoutAccessor_Setup_155dda0(a1 + 848, v35);
          }
          v19 = *(_QWORD*)(a1 + 840);
          v34[0] = *(_QWORD*)(a1 + 832);
          v34[1] = v19;
          if (v19 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                      memory_order_relaxed);
            ui_LayoutAccessor_Setup_155dda0(a1 + 952, v34);
            if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
              std___1___shared_weak_count___release_weak(v19);
            }
          }
          else {
            ui_LayoutAccessor_Setup_155dda0(a1 + 952, v34);
          }
          ui_LayoutAccessor_SetPriority(a1 + 848, (unsigned int)v1);
          goto LABEL_42;
        }
        v16 = game_ProcFadeView_instance_ +
              ((unsigned __int64)*(
                   unsigned __int8*)(game_ProcFadeView_instance_ + 480)
               << 6);
        if (*(float*)(v16 + 172) == *(float*)(v16 + 168)) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)(v16 + 160) + 16LL))(v16 +
                                                                         160);
        }
        else {
          v17 = *(_OWORD*)(v16 + 208);
        }
        if (*((float*)&v17 + 3) == 1.0f) {
          if (LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                           (_QWORD*)(*(_QWORD*)(v16 + 160) + 16LL))(
                              v16 + 160, *((float*)&v17 + 3)))
                  .n128_f32[3] == 1.0f) {
            v15 = 1010;
          }
          else {
            v15 = 0;
          }
          goto LABEL_32;
        }
      }
      v15 = 0;
      goto LABEL_32;
    }
    v7 = std___1___shared_weak_count_lock(v6);
    if (v7 == 0) {
      goto LABEL_14;
    }
    v8 = *v5;
    if (*v5 != 0) {
      v2 = *(unsigned __int8*)(v8 + 24);
      v9 = v8 + 152;
      if (v2 == 0) {
        v9 = 0;
      }
      v10 = v9 != *(_QWORD*)(a1 + 864);
    }
    else {
      v10 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v1 = v7;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v1);
    }
    if (!v10) {
      if ((v2 & 1) == 0) {
        goto LABEL_22;
      }
      v11 = *(_QWORD*)(a1 + 856);
      if (v11 == 0) {
      LABEL_59:
        LODWORD(v1) = 0;
        goto LABEL_33;
      }
    }
    else {
    LABEL_14:
      v11 = *(_QWORD*)(a1 + 856);
      if (v11 == 0 || *(_QWORD*)(v11 + 8) == -1) {
        goto LABEL_22;
      }
    }
    v12 = std___1___shared_weak_count_lock(v11);
    if (v12 != 0) {
      v13 = *v5;
      if (*v5 != 0) {
        LODWORD(v1) = *(_DWORD*)(v13 + 2372);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v31 = v12;
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak(v31);
      }
      if (v13 != 0) {
        goto LABEL_33;
      }
    }
    goto LABEL_59;
  }
LABEL_42:
  v20 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 280LL))(a1);
  v21 = ui_LayoutAccessor_FindPartsLayout(a1 + 848, v20);
  if (v21 != 0) {
    v22 = v21;
    v23 = *(_QWORD*)(a1 + 856);
    v32 = 0;
    v33 = 0;
    if (v23 != 0 &&
        (v24 = std___1___shared_weak_count_lock(v23), v33 = v24, v24 != 0)) {
      v25 = v24;
      v32 = *(_QWORD*)(a1 + 848);
      ui_LayoutAccessor_Setup_155dea0(a1 + 952, &v32, v22);
      if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
        std___1___shared_weak_count___release_weak(v25);
      }
    }
    else {
      ui_LayoutAccessor_Setup_155dea0(a1 + 952, &v32, v22);
    }
  }
  v26 = *(unsigned __int8**)(a1 + 16);
  if (v26 != nullptr) {
    v27 = *v26;
    v28 = v27 > 0x10;
    v29 = (1 << v27) & 0x1CE00;
    if (!v28 && v29 != 0) {
      *(_WORD*)(a1 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(a1 + 136) |= 8u;
}

_QWORD* game_16f1350(_QWORD* a1, __int64 a2, char a3)
{
  unsigned __int8 v5;
  char* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  const char* v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  char* v23;
  __int64 v24;
  char* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  char* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  char* v32;
  __int64 v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  char* v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  char* v45;
  __int64 v46;
  char* v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  char* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  char* v55;
  __int64 v56;
  char* v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  char* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  char* v65;
  __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  char* v69;
  __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  char* v73;
  __int64 v74;
  char* v76;
  struct {
    __int64 v77;
    unsigned __int64 v78;
    char* v79;
    __int16 v80;
    char gap58_[6];
    __int64 v81;
    __int64 v82;
    char* v83;
  } v77_;
  struct {
    __int64 v84;
    unsigned __int64 v85;
    char* v86;
    __int16 v87;
    char gap114_[6];
    __int64 v88;
    __int64 v89;
    char* v90;
  } v84_;
  struct {
    __int64 v91;
    unsigned __int64 v92;
    char* v93;
    __int16 v94;
    char gap170_[6];
    __int64 v95;
    __int64 v96;
    char* v97;
  } v91_;
  struct {
    __int64 v98;
    unsigned __int64 v99;
    char* v100;
    __int16 v101;
    char gap226_[6];
    __int64 v102;
    __int64 v103;
    char* v104;
  } v98_;
  struct {
    __int64 v105;
    unsigned __int64 v106;
    char* v107;
    __int16 v108;
    char gap282_[6];
    __int64 v109;
    __int64 v110;
    __int64 v111;
  } v105_;
  struct {
    __int64 v112;
    unsigned __int64 v113;
    char* v114;
    __int16 v115;
  } v112_;

  if (a2 == 0 ||
      (*(_BYTE*)(a2 + 178) & 4) != 0 && game_GameModeData_instance_ != 0 &&
          *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 ||
      (v5 = Impl_13261c0_alt1(a2) - 5) > 4u) {
    v6 = &GameData_1bf68f2;
  }
  else {
    v6 = (char*)GameData_1bf6fb0 + GameData_1bf6fb0[v5];
  }
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      152, 16, 0);
  v9 = *v7;
  v10 = a3 == 1;
  if (a3 == 1) {
    v11 = "MID_DeployMenu_Dispatch";
  }
  else {
    v11 = "MID_LegionDispatchMenu_Unused";
  }
  if (v10) {
    v12 = 23;
  }
  else {
    v12 = 29;
  }
  if ((v12 | 7) == 0x17) {
    v13 = 26;
  }
  else {
    v13 = (v12 | 7) + 1;
  }
  v105_.v110 = v12;
  v105_.v111 = fw_memory_HeapManager_Allocate(v9, v13, 16, 0);
  v105_.v109 = v13 | 1;
  memcpy(v105_.v111, v11, v12);
  *(_BYTE*)(v105_.v111 + v12) = 0;
  v14 = strlen(v6);
  if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_72:
    String_60a1d0();
  }
  v15 = v14;
  if (v14 >= 0x17) {
    if ((v14 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (v14 | 7) + 1;
    }
    v16 = (char*)fw_memory_HeapManager_Allocate(*v7, v17, 16, 0);
    v112_.v113 = v15;
    v112_.v114 = v16;
    v112_.v112 = v17 | 1;
    goto LABEL_25;
  }
  LOBYTE(v112_.v112) = 2 * v14;
  v16 = (char*)&v112_.v112 + 1;
  if (v14 != 0) {
  LABEL_25:
    memcpy(v16, v6, v15);
  }
  v16[v15] = 0;
  v112_.v115 = 0;
  *(_DWORD*)(v8 + 88) = -1;
  *(_WORD*)(v8 + 16) = 0;
  *(_QWORD*)(v8 + 48) = 0;
  *(_QWORD*)(v8 + 56) = 0;
  *(_QWORD*)(v8 + 64) = 0;
  *(_QWORD*)(v8 + 72) = 0;
  *(_BYTE*)(v8 + 84) = 0;
  *(_QWORD*)v8 = game_gmap_LegionMenuUtil_InfoMenuItem_vtable;
  *(_QWORD*)(v8 + 8) = 0;
  *(_DWORD*)(v8 + 40) = 0;
  *(_DWORD*)(v8 + 80) = 65793;
  v18 = v105_.v109;
  v19 = v105_.v110;
  v105_.v109 = 0;
  *(_QWORD*)(v8 + 96) = v18;
  *(_QWORD*)(v8 + 104) = v19;
  v20 = v105_.v111;
  v21 = v112_.v112;
  v22 = v112_.v113;
  v105_.v110 = 0;
  v105_.v111 = 0;
  v112_.v112 = 0;
  v112_.v113 = 0;
  *(_QWORD*)(v8 + 112) = v20;
  *(_QWORD*)(v8 + 120) = v21;
  v23 = v112_.v114;
  v112_.v114 = nullptr;
  *(_QWORD*)(v8 + 128) = v22;
  *(_QWORD*)(v8 + 136) = v23;
  *(_WORD*)(v8 + 144) = v112_.v115;
  BasicMenuCursor_16e0c00(a1, v8);
  v24 = fw_memory_HeapManager_Allocate(*v7, 152, 16, 0);
  v25 = (char*)fw_memory_HeapManager_Allocate(*v7, 32, 16, 0);
  v98_.v102 = 33;
  v98_.v103 = 29;
  v98_.v104 = v25;
  strcpy(v25, "MID_LegionDispatchMenu_Unused");
  v26 = strlen(v6);
  if (v26 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_72;
  }
  v27 = v26;
  if (v26 >= 0x17) {
    if ((v26 | 7) == 0x17) {
      v29 = 26;
    }
    else {
      v29 = (v26 | 7) + 1;
    }
    v28 = (char*)fw_memory_HeapManager_Allocate(*v7, v29, 16, 0);
    v105_.v106 = v27;
    v105_.v107 = v28;
    v105_.v105 = v29 | 1;
    goto LABEL_34;
  }
  LOBYTE(v105_.v105) = 2 * v26;
  v28 = (char*)&v105_.v105 + 1;
  if (v26 != 0) {
  LABEL_34:
    memcpy(v28, v6, v27);
  }
  v28[v27] = 0;
  *(_WORD*)(v24 + 16) = 0;
  *(_QWORD*)(v24 + 48) = 0;
  *(_QWORD*)(v24 + 56) = 0;
  *(_QWORD*)(v24 + 64) = 0;
  *(_QWORD*)(v24 + 72) = 0;
  *(_BYTE*)(v24 + 84) = 0;
  *(_QWORD*)v24 = game_gmap_LegionMenuUtil_InfoMenuItem_vtable;
  *(_QWORD*)(v24 + 8) = 0;
  v105_.v108 = 256;
  *(_DWORD*)(v24 + 80) = 16843009;
  *(_DWORD*)(v24 + 88) = -1;
  v30 = v98_.v102;
  v31 = v98_.v103;
  v98_.v102 = 0;
  *(_QWORD*)(v24 + 96) = v30;
  *(_QWORD*)(v24 + 104) = v31;
  v32 = v98_.v104;
  v33 = v105_.v105;
  v34 = v105_.v106;
  v98_.v103 = 0;
  v98_.v104 = nullptr;
  v105_.v105 = 0;
  v105_.v106 = 0;
  *(_QWORD*)(v24 + 112) = v32;
  *(_QWORD*)(v24 + 120) = v33;
  v35 = v105_.v107;
  v105_.v107 = nullptr;
  *(_QWORD*)(v24 + 128) = v34;
  *(_QWORD*)(v24 + 136) = v35;
  *(_WORD*)(v24 + 144) = v105_.v108;
  *(_DWORD*)(v24 + 40) = 1;
  BasicMenuCursor_16e0c00(a1, v24);
  v36 = fw_memory_HeapManager_Allocate(*v7, 152, 16, 0);
  v37 = (char*)fw_memory_HeapManager_Allocate(*v7, 32, 16, 0);
  v91_.v95 = 33;
  v91_.v96 = 30;
  v91_.v97 = v37;
  strcpy(v37, "MID_LegionDispatchMenu_Explore");
  v38 = strlen(v6);
  if (v38 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_72;
  }
  v39 = v38;
  if (v38 >= 0x17) {
    if ((v38 | 7) == 0x17) {
      v41 = 26;
    }
    else {
      v41 = (v38 | 7) + 1;
    }
    v40 = (char*)fw_memory_HeapManager_Allocate(*v7, v41, 16, 0);
    v98_.v99 = v39;
    v98_.v100 = v40;
    v98_.v98 = v41 | 1;
    goto LABEL_43;
  }
  LOBYTE(v98_.v98) = 2 * v38;
  v40 = (char*)&v98_.v98 + 1;
  if (v38 != 0) {
  LABEL_43:
    memcpy(v40, v6, v39);
  }
  v40[v39] = 0;
  *(_WORD*)(v36 + 16) = 0;
  *(_QWORD*)(v36 + 48) = 0;
  *(_QWORD*)(v36 + 56) = 0;
  *(_QWORD*)(v36 + 64) = 0;
  *(_QWORD*)(v36 + 72) = 0;
  *(_BYTE*)(v36 + 84) = 0;
  *(_QWORD*)v36 = game_gmap_LegionMenuUtil_InfoMenuItem_vtable;
  *(_QWORD*)(v36 + 8) = 0;
  v98_.v101 = 513;
  *(_DWORD*)(v36 + 80) = 33620225;
  *(_DWORD*)(v36 + 88) = -1;
  v42 = v91_.v96;
  *(_QWORD*)(v36 + 96) = v91_.v95;
  *(_QWORD*)(v36 + 104) = v42;
  v43 = v98_.v98;
  v44 = v98_.v99;
  *(_QWORD*)(v36 + 112) = v91_.v97;
  *(_QWORD*)(v36 + 120) = v43;
  v45 = v98_.v100;
  *(_QWORD*)(v36 + 128) = v44;
  *(_QWORD*)(v36 + 136) = v45;
  *(_WORD*)(v36 + 144) = v98_.v101;
  *(_DWORD*)(v36 + 40) = 2;
  BasicMenuCursor_16e0c00(a1, v36);
  v46 = fw_memory_HeapManager_Allocate(*v7, 152, 16, 0);
  v47 = (char*)fw_memory_HeapManager_Allocate(*v7, 32, 16, 0);
  v84_.v88 = 33;
  v84_.v89 = 27;
  v84_.v90 = v47;
  strcpy(v47, "MID_LegionDispatchMenu_Fort");
  v48 = strlen(v6);
  if (v48 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_72;
  }
  v49 = v48;
  if (v48 >= 0x17) {
    if ((v48 | 7) == 0x17) {
      v51 = 26;
    }
    else {
      v51 = (v48 | 7) + 1;
    }
    v50 = (char*)fw_memory_HeapManager_Allocate(*v7, v51, 16, 0);
    v91_.v92 = v49;
    v91_.v93 = v50;
    v91_.v91 = v51 | 1;
    goto LABEL_52;
  }
  LOBYTE(v91_.v91) = 2 * v48;
  v50 = (char*)&v91_.v91 + 1;
  if (v48 != 0) {
  LABEL_52:
    memcpy(v50, v6, v49);
  }
  v50[v49] = 0;
  *(_WORD*)(v46 + 16) = 0;
  *(_QWORD*)(v46 + 48) = 0;
  *(_QWORD*)(v46 + 56) = 0;
  *(_QWORD*)(v46 + 64) = 0;
  *(_QWORD*)(v46 + 72) = 0;
  *(_BYTE*)(v46 + 84) = 0;
  *(_QWORD*)v46 = game_gmap_LegionMenuUtil_InfoMenuItem_vtable;
  *(_QWORD*)(v46 + 8) = 0;
  v91_.v94 = 769;
  *(_DWORD*)(v46 + 80) = 50397441;
  *(_DWORD*)(v46 + 88) = -1;
  v52 = v84_.v89;
  *(_QWORD*)(v46 + 96) = v84_.v88;
  *(_QWORD*)(v46 + 104) = v52;
  v53 = v91_.v91;
  v54 = v91_.v92;
  *(_QWORD*)(v46 + 112) = v84_.v90;
  *(_QWORD*)(v46 + 120) = v53;
  v55 = v91_.v93;
  *(_QWORD*)(v46 + 128) = v54;
  *(_QWORD*)(v46 + 136) = v55;
  *(_WORD*)(v46 + 144) = v91_.v94;
  *(_DWORD*)(v46 + 40) = 3;
  BasicMenuCursor_16e0c00(a1, v46);
  v56 = fw_memory_HeapManager_Allocate(*v7, 152, 16, 0);
  v57 = (char*)fw_memory_HeapManager_Allocate(*v7, 40, 16, 0);
  v77_.v81 = 41;
  v77_.v82 = 37;
  v77_.v83 = v57;
  strcpy(v57, "MID_LegionDispatchMenu_Reconstruction");
  v58 = strlen(v6);
  if (v58 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_72;
  }
  v59 = v58;
  if (v58 >= 0x17) {
    if ((v58 | 7) == 0x17) {
      v61 = 26;
    }
    else {
      v61 = (v58 | 7) + 1;
    }
    v60 = (char*)fw_memory_HeapManager_Allocate(*v7, v61, 16, 0);
    v84_.v85 = v59;
    v84_.v86 = v60;
    v84_.v84 = v61 | 1;
    goto LABEL_61;
  }
  LOBYTE(v84_.v84) = 2 * v58;
  v60 = (char*)&v84_.v84 + 1;
  if (v58 != 0) {
  LABEL_61:
    memcpy(v60, v6, v59);
  }
  v60[v59] = 0;
  *(_WORD*)(v56 + 16) = 0;
  *(_QWORD*)(v56 + 48) = 0;
  *(_QWORD*)(v56 + 56) = 0;
  *(_QWORD*)(v56 + 64) = 0;
  *(_QWORD*)(v56 + 72) = 0;
  *(_BYTE*)(v56 + 84) = 0;
  *(_QWORD*)v56 = game_gmap_LegionMenuUtil_InfoMenuItem_vtable;
  *(_QWORD*)(v56 + 8) = 0;
  v84_.v87 = 1025;
  *(_DWORD*)(v56 + 80) = 67174657;
  *(_DWORD*)(v56 + 88) = -1;
  v62 = v77_.v82;
  *(_QWORD*)(v56 + 96) = v77_.v81;
  *(_QWORD*)(v56 + 104) = v62;
  v63 = v84_.v84;
  v64 = v84_.v85;
  *(_QWORD*)(v56 + 112) = v77_.v83;
  *(_QWORD*)(v56 + 120) = v63;
  v65 = v84_.v86;
  *(_QWORD*)(v56 + 128) = v64;
  *(_QWORD*)(v56 + 136) = v65;
  *(_WORD*)(v56 + 144) = v84_.v87;
  *(_DWORD*)(v56 + 40) = 4;
  BasicMenuCursor_16e0c00(a1, v56);
  v66 = fw_memory_HeapManager_Allocate(*v7, 152, 16, 0);
  v76 = (char*)fw_memory_HeapManager_Allocate(*v7, 32, 16, 0);
  strcpy(v76, "MID_LegionDispatchMenu_Deployed");
  v67 = strlen(v6);
  if (v67 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_72;
  }
  v68 = v67;
  if (v67 >= 0x17) {
    if ((v67 | 7) == 0x17) {
      v70 = 26;
    }
    else {
      v70 = (v67 | 7) + 1;
    }
    v69 = (char*)fw_memory_HeapManager_Allocate(*v7, v70, 16, 0);
    v77_.v78 = v68;
    v77_.v79 = v69;
    v77_.v77 = v70 | 1;
  }
  else {
    LOBYTE(v77_.v77) = 2 * v67;
    v69 = (char*)&v77_.v77 + 1;
    if (v67 == 0) {
      goto LABEL_71;
    }
  }
  memcpy(v69, v6, v68);
LABEL_71:
  v69[v68] = 0;
  *(_WORD*)(v66 + 16) = 0;
  *(_QWORD*)(v66 + 48) = 0;
  *(_QWORD*)(v66 + 56) = 0;
  *(_QWORD*)(v66 + 64) = 0;
  *(_QWORD*)(v66 + 72) = 0;
  *(_BYTE*)(v66 + 84) = 0;
  *(_QWORD*)v66 = game_gmap_LegionMenuUtil_InfoMenuItem_vtable;
  *(_QWORD*)(v66 + 8) = 0;
  v77_.v80 = 1281;
  *(_DWORD*)(v66 + 88) = -1;
  *(_DWORD*)(v66 + 80) = 83951873;
  *(_QWORD*)(v66 + 96) = 33;
  *(_QWORD*)(v66 + 104) = 31;
  v71 = v77_.v77;
  v72 = v77_.v78;
  *(_QWORD*)(v66 + 112) = v76;
  *(_QWORD*)(v66 + 120) = v71;
  v73 = v77_.v79;
  *(_QWORD*)(v66 + 128) = v72;
  *(_QWORD*)(v66 + 136) = v73;
  *(_WORD*)(v66 + 144) = v77_.v80;
  *(_DWORD*)(v66 + 40) = 5;
  BasicMenuCursor_16e0c00(a1, v66);
  v74 = fw_memory_HeapManager_Allocate(*v7, 96, 16, 0);
  *(_WORD*)(v74 + 16) = 0;
  *(_DWORD*)(v74 + 40) = 0;
  *(_QWORD*)(v74 + 48) = 0;
  *(_QWORD*)(v74 + 56) = 0;
  *(_QWORD*)(v74 + 64) = 0;
  *(_QWORD*)(v74 + 72) = 0;
  *(_BYTE*)(v74 + 84) = 0;
  *(_DWORD*)(v74 + 88) = -1;
  *(_DWORD*)(v74 + 80) = 65793;
  *(_QWORD*)v74 = game_gmap_LegionMenuUtil_EmptyMenuItem_vtable;
  *(_QWORD*)(v74 + 8) = 0;
  return BasicMenuCursor_16e0c00(a1, v74);
}

void game_170cea0()
{
  __int64* v0;
  _QWORD* v1;
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
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    _QWORD* v19;
    __int64 v20;
    _QWORD* v21;
  } v19_;

  if (GameData_2262ae0 != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22592e0,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_22592e0) != 0) {
      BYTE4(GameData_22592d0) = 0;
      GameData_22592d8 = 0;
      GameData_22592b8 = (__int64)&GameData_1a9f09e;
      GameData_22592c0 = (__int64)"MID_KeyHelp_Cancel";
      LOBYTE(GameData_22592c8) = 1;
      *(__int64*)((char*)&GameData_22592c8 + 4) = 0x1200000001LL;
      __cxa_guard_release_alt1((__int64)&GameData_22592e0);
    }
    v6 = GameData_22592c8;
    v7 = GameData_22592d0;
    v8 = GameData_22592d8;
    v4 = GameData_22592b8;
    v5 = GameData_22592c0;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2259310,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_2259310) != 0) {
      BYTE4(GameData_2259300) = 0;
      GameData_2259308 = 0;
      GameData_22592e8 = (__int64)&GameData_1a9f09e;
      GameData_22592f0 = (__int64)"MID_KeyHelp_Camera";
      LOBYTE(GameData_22592f8) = 1;
      *(__int64*)((char*)&GameData_22592f8 + 4) = 0x1200000017LL;
      __cxa_guard_release_alt1((__int64)&GameData_2259310);
    }
    v11 = GameData_22592f8;
    v12 = GameData_2259300;
    v13 = GameData_2259308;
    v9 = GameData_22592e8;
    v10 = GameData_22592f0;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2259340,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_2259340) != 0) {
      BYTE4(GameData_2259330) = 0;
      GameData_2259338 = 0;
      GameData_2259318 = (__int64)&GameData_1a9f09e;
      GameData_2259320 = (__int64)"MID_KeyHelp_CameraChange";
      LOBYTE(GameData_2259328) = 1;
      *(__int64*)((char*)&GameData_2259328 + 4) = 0x1200000010LL;
      __cxa_guard_release_alt1((__int64)&GameData_2259340);
    }
    v16 = GameData_2259328;
    v17 = GameData_2259330;
    v18 = GameData_2259338;
    v14 = GameData_2259318;
    v15 = GameData_2259320;
    v0 = (__int64*)fw_memory_g_heap_manager_ptr;
    v1 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 120, 16, 0);
    v19_.v19 = v1;
    v1[12] = v16;
    v1[13] = v17;
    v1[14] = v18;
    v1[8] = v12;
    v1[9] = v13;
    v19_.v20 = (__int64)(v1 + 15);
    v19_.v21 = v1 + 15;
    v1[10] = v14;
    v1[11] = v15;
    v1[4] = v8;
    v1[5] = v9;
    v1[6] = v10;
    v1[7] = v11;
    *v1 = v4;
    v1[1] = v5;
    v1[2] = v6;
    v1[3] = v7;
    GameRoutine_1566440((__int64)&v19_.v19, 0);
    if (v19_.v19 != nullptr) {
      v2 = *v0;
      v19_.v20 = (__int64)v19_.v19;
      v3 = 128;
      if (*(_QWORD*)(v2 + 200) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v2 + v3, (__int64)v19_.v19);
    }
  }
}

__n128 game_170ecf0(__int64 a1, int a2)
{
  float* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float* v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float32x4_t v13;
  float32x4_t* v14;
  __n128 result;
  float v16;
  float v17;
  float v18;
  float32x4_t v19;
  float32x4_t v20;
  char v21;
  float v22;

  *(_BYTE*)(a1 + 64) = 0;
  *(_BYTE*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)a1 = 0;
  *(_DWORD*)(a1 + 96) = a2;
  *(_QWORD*)(a1 + 100) = 0;
  v3 = (float*)(a1 + 100);
  *(_QWORD*)(a1 + 108) = 0;
  *(_DWORD*)(a1 + 116) = 0;
  v4 = *(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL);
  if (*(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL) == v4 ||
      (v5 = *(_QWORD*)(v4 - 8)) == 0) {
    v7 = nullptr;
    v6 = 0;
  }
  else {
    v7 = *(float**)(v5 + 24);
    v6 = *(_QWORD*)(v5 + 32);
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  *(long double*)(a1 + 32) =
      ((long double (*)(float*)) * (_QWORD*)(*(_QWORD*)v7 + 40LL))(v7);
  v8 = v7[21] * 0x1.1df46a0000000p-6;
  v9 = v7[22] * 0x1.1df46a0000000p-6;
  v10 = sinf(v8);
  v11 = cosf(v8);
  v22 = sinf(v9);
  v12 = cosf(v9);
  LANES128(v13).n128_u32[3] = 0;
  LANES128(v13).n128_f32[0] = v10 * v12;
  LANES128(v13).n128_f32[1] = v22;
  LANES128(v13).n128_f32[2] = v11 * v12;
  result = vsubq_f32(COERCE_AS(float32x4_t, 0), v13);
  *(__n128*)(a1 + 48) = result;
  v14 = *(float32x4_t**)GameData_2132398[0];
  LANES128(result).n128_u32[0] =
      *(_DWORD*)(*(_QWORD*)GameData_2132398[0] + 148LL);
  if (LANES128(result).n128_f32[0] > 0.0) {
    *v3 = 0x1.3333340000000p+1 / LANES128(result).n128_f32[0];
  }
  v16 = LANES128(v14[9]).n128_f32[2];
  if (v16 > 0.0) {
    *(float*)(a1 + 104) = 0x1.3333340000000p+1 / v16;
  }
  v17 = LANES128(v14[9]).n128_f32[3];
  if (v17 > 0.0) {
    *(float*)(a1 + 108) = 0x1.3333340000000p+1 / v17;
  }
  v18 = LANES128(v14[10]).n128_f32[0];
  if (v18 > 0.0) {
    *(float*)(a1 + 112) = 0x1.3333340000000p+1 / v18;
  }
  LANES128(result).n128_u32[0] = LANES128(v14[10]).n128_u32[1];
  if (LANES128(result).n128_f32[0] > 0.0) {
    LANES128(result).n128_f32[0] =
        0x1.3333340000000p+1 / LANES128(result).n128_f32[0];
    *(_DWORD*)(a1 + 116) = LANES128(result).n128_u32[0];
  }
  if (LANES128(v14[13]).n128_u8[0] == 1) {
    v19 = v14[12];
    LANES128(v20).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v20).n128_u64[1] = 0x3F0000003F000000LL;
    v21 = *(_BYTE*)(a1 + 80);
    result = vmulq_f32(v19, v20);
    *(__n128*)(a1 + 64) = result;
    if ((v21 & 1) == 0) {
      *(_BYTE*)(a1 + 80) = 1;
    }
  }
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    return std___1___shared_weak_count___release_weak(v6);
  }
  return result;
}

__int64 game_1738db0(__int64 a1)
{
  __int64 v1;
  float v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int128 v5;
  __int128* v6;
  __int128 v8;

  v1 = game_ProcFadeView_instance_;
  if (*(_BYTE*)(a1 + 1116) != 0) {
    v2 = 0.25f;
  }
  else {
    v2 = 1.0f;
  }
  if (game_ProcFadeView_instance_ != 0) {
    v3 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v3 + 172) == *(float*)(v3 + 168) &&
        (v4 = v3 + 160,
         LANES128_OF(((__n128 (*)(unsigned __int64)) *
                      (_QWORD*)(*(_QWORD*)(v3 + 160) + 16LL))(v3 + 160))
                 .n128_f32[3] == 1.0f)) {
      if (*(float*)(v4 + 12) == *(float*)(v4 + 8)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)v4 + 16LL))(v4);
      }
      else {
        v5 = *(_OWORD*)(v4 + 48);
      }
      v8 = v5;
      v6 = &v8;
    }
    else {
      v6 = (__int128*)GameData_212c960;
    }
    a1 = game_809dc0(v1, v6, v2);
  }
  return GameRoutine_80cc80(a1);
}

_QWORD* game_1786010(_QWORD* result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _BOOL4 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  int v19;
  unsigned __int64 v20;
  __int128 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  unsigned __int8* v47;
  unsigned int v48;
  __int64 v49;
  int v50;
  _QWORD v51[8];

  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = result[23];
  if (*(_BYTE*)(v5 + 24) != 1) {
    return result;
  }
  v51[2] = v4;
  v51[4] = v2;
  v51[5] = v3;
  v51[7] = v1;
  v6 = result[24];
  v7 = result;
  v51[0] = v5;
  v51[1] = v6;
  if (v6 != 0) {
    LOBYTE(v1) = v6 + 8;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0_alt1(result + 25, v51),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v7[27] == 0) {
        goto LABEL_27;
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt2(v6),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v7[27] == 0) {
        goto LABEL_27;
      }
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0_alt1(result + 25, v51),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v7[27] == 0) {
      goto LABEL_27;
    }
  }
  v8 = v7[26];
  if (v8 == 0) {
    goto LABEL_27;
  }
  v9 = std___1___shared_weak_count_lock_alt1(v8),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v9 == 0) {
  LABEL_18:
    v13 = v7[26];
    if (v13 == 0 || *(_QWORD*)(v13 + 8) == -1) {
      goto LABEL_27;
    }
    goto LABEL_24;
  }
  v10 = v7[25];
  if (v10 != 0) {
    LODWORD(v1) = *(unsigned __int8*)(v10 + 24);
    v11 = v10 + 152;
    if ((_DWORD)v1 == 0) {
      v11 = 0;
    }
    v12 = v11 != v7[27];
  }
  else {
    v12 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v12) {
      goto LABEL_18;
    }
  }
  else {
    v14 = v9;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak_alt2(v14),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v12) {
      goto LABEL_18;
    }
  }
  if ((v1 & 1) == 0) {
  LABEL_27:
    v18 = (*(__int64 (**)(_QWORD*))(*v7 + 248LL))(v7),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v19 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v20 = game_ProcFadeView_instance_ +
            ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
             << 6);
      if (*(float*)(v20 + 172) == *(float*)(v20 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v20 + 160) + 16LL))(v20 +
                                                                       160),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v21 = *(_OWORD*)(v20 + 208);
      }
      if (*((float*)&v21 + 3) == 0x1.0000000000000p+0f) {
        if (LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                         (_QWORD*)(*(_QWORD*)(v20 + 160) + 16LL))(
                            v20 + 160, *((float*)&v21 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
          v19 = 1010;
        }
        else {
          v19 = 0;
        }
      }
      else {
        v19 = 0;
      }
    }
    v16 = v19 + v18;
    goto LABEL_37;
  }
  v13 = v7[26];
  if (v13 == 0) {
  LABEL_83:
    v16 = 0;
    goto LABEL_37;
  }
LABEL_24:
  v15 = std___1___shared_weak_count_lock_alt1(v13),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v15 == 0) {
    goto LABEL_83;
  }
  v17 = v7[25];
  if (v17 != 0) {
    v16 = *(_DWORD*)(v17 + 2372);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v49 = v15;
    v50 = v16;
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak_alt2(v49),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v16 = v50;
  }
  if (v17 == 0) {
    goto LABEL_83;
  }
LABEL_37:
  ui_LayoutAccessor_SetPriority_alt1((__int64)(v7 + 25), v16),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD*))(*v7 + 304LL))(v7),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v22 = (*(__int64 (**)(_QWORD*))(*v7 + 280LL))(v7),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7[38] = v22;
  if (v22 != 0) {
    *(_DWORD*)(v22 + 1064) = 0;
  }
  v23 = (*(__int64 (**)(_QWORD*))(*v7 + 288LL))(v7),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7[39] = v23;
  if (v23 != 0) {
    *(_DWORD*)(v23 + 1064) = 1;
  }
  v24 = (*(__int64 (**)(_QWORD*))(*v7 + 296LL))(v7),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7[40] = v24;
  if (v24 == 0) {
    v25 = v7 + 41;
  LABEL_51:
    v7[43] = 0;
    v33 = v7[39];
    if (v33 == 0) {
      goto LABEL_72;
    }
  LABEL_52:
    *(_QWORD*)(v33 + 152) = v7;
    GameRoutine_16dbb80((__int64*)v33),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    GameRoutine_16dc3e0(v33),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v34 = *(_DWORD*)(v33 + 356);
    v35 = *(_QWORD*)(v33 + 336);
    *(_BYTE*)(v33 + 648) = 0;
    *(_DWORD*)(v33 + 356) = v34 | 6;
    if (v35 != 0 &&
        ((*(void (**)(__int64))(*(_QWORD*)v35 + 168LL))(v35),
         (v36 = *(_QWORD*)(v33 + 336)) != 0) &&
        ((*(void (**)(__int64))(*(_QWORD*)v36 + 168LL))(v36),
         *(_QWORD*)(v33 + 336) = 0,
         _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v33, 0, 1u, 0),
         (v37 = *(_QWORD*)(v33 + 336)) != 0)) {
      (*(void (**)(__int64))(*(_QWORD*)v37 + 160LL))(v37),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      game_IsVibrationEnabled_alt1((_BYTE*)(game_g_game_setting + 712)),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v38 = *(_QWORD*)(v33 + 336);
      v39 = 4;
      if (v38 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v38 + 120LL))(v38) & 1) != 0) {
          v39 = 4;
        }
        else {
          v39 = 0;
        }
      }
    }
    else {
      v39 = 4;
    }
    *(_DWORD*)(v33 + 356) = *(_DWORD*)(v33 + 356) & 0xFFFFFFFB | v39;
    v7[42] = v33 + 632;
    *(_BYTE*)(v33 + 648) = 0;
    v40 = v7[38];
    if (v40 == 0) {
      goto LABEL_73;
    }
  LABEL_61:
    *(_QWORD*)(v40 + 152) = v7;
    GameRoutine_16dbb80((__int64*)v40),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    GameRoutine_16dc3e0(v40),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v41 = *(_DWORD*)(v40 + 356);
    v42 = *(_QWORD*)(v40 + 336);
    *(_BYTE*)(v40 + 648) = 0;
    *(_DWORD*)(v40 + 356) = v41 | 6;
    if (v42 != 0 &&
        ((*(void (**)(__int64))(*(_QWORD*)v42 + 168LL))(v42),
         (v43 = *(_QWORD*)(v40 + 336)) != 0) &&
        ((*(void (**)(__int64))(*(_QWORD*)v43 + 168LL))(v43),
         *(_QWORD*)(v40 + 336) = 0,
         _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v40, 0, 1u, 0),
         (v44 = *(_QWORD*)(v40 + 336)) != 0)) {
      (*(void (**)(__int64))(*(_QWORD*)v44 + 160LL))(v44),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      game_IsVibrationEnabled_alt1((_BYTE*)(game_g_game_setting + 712)),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v45 = *(_QWORD*)(v40 + 336);
      v46 = 4;
      if (v45 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v45 + 120LL))(v45) & 1) != 0) {
          v46 = 4;
        }
        else {
          v46 = 0;
        }
      }
    }
    else {
      v46 = 4;
    }
    *(_DWORD*)(v40 + 356) = *(_DWORD*)(v40 + 356) & 0xFFFFFFFB | v46;
    *v25 = v40 + 632;
    *(_BYTE*)(v40 + 648) = 0;
    goto LABEL_74;
  }
  v25 = v7 + 41;
  *(_DWORD*)(v24 + 1064) = 2;
  v26 = v7[40];
  if (v26 == 0) {
    goto LABEL_51;
  }
  *(_QWORD*)(v26 + 152) = v7;
  GameRoutine_16dbb80((__int64*)v26),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_16dc3e0(v26),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = *(_DWORD*)(v26 + 356);
  v28 = *(_QWORD*)(v26 + 336);
  *(_BYTE*)(v26 + 648) = 0;
  *(_DWORD*)(v26 + 356) = v27 | 6;
  if (v28 != 0 &&
      ((*(void (**)(__int64))(*(_QWORD*)v28 + 168LL))(v28),
       (v29 = *(_QWORD*)(v26 + 336)) != 0) &&
      ((*(void (**)(__int64))(*(_QWORD*)v29 + 168LL))(v29),
       *(_QWORD*)(v26 + 336) = 0,
       _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v26, 0, 1u, 0),
       (v30 = *(_QWORD*)(v26 + 336)) != 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 160LL))(v30),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    game_IsVibrationEnabled_alt1((_BYTE*)(game_g_game_setting + 712)),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v31 = *(_QWORD*)(v26 + 336);
    v32 = 4;
    if (v31 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v31 + 120LL))(v31) & 1) != 0) {
        v32 = 4;
      }
      else {
        v32 = 0;
      }
    }
  }
  else {
    v32 = 4;
  }
  *(_DWORD*)(v26 + 356) = *(_DWORD*)(v26 + 356) & 0xFFFFFFFB | v32;
  v7[43] = v26 + 632;
  *(_BYTE*)(v26 + 648) = 0;
  v33 = v7[39];
  if (v33 != 0) {
    goto LABEL_52;
  }
LABEL_72:
  v7[42] = 0;
  v40 = v7[38];
  if (v40 != 0) {
    goto LABEL_61;
  }
LABEL_73:
  *v25 = 0;
LABEL_74:
  (*(void (**)(_QWORD*))(*v7 + 312LL))(v7),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = (_QWORD*)MultiMenuSequence_1786b20_alt1(v7),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v47 = (unsigned __int8*)v7[2];
  if (v47 != nullptr) {
    v48 = *v47;
    if (v48 <= 0x10 && ((1 << v48) & 0x1CE00) != 0) {
      *((_WORD*)v7 + 68) |= 0x80u;
    }
  }
  *((_WORD*)v7 + 68) |= 8u;
  return result;
}

__attribute__((swiftcall)) void game_18c9a10(PSEUDO_X8 x8_, __int64 a1,
                                             __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 result;

  v8 = (_QWORD*)LayoutEx_579160(1184, 8);
  v9 = v8 + 3;
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_21086b0;
  result = GameRoutine_18b26a0(v8 + 3, a1, a2, a3);
  v10[145] = 0;
  v10[138] = 0;
  v10[3] = game_gameui_control_BlazeGauge_vtable;
  v10[139] = 0;
  v10[141] = 0;
  *((_DWORD*)v10 + 284) = 0;
  v10[143] = 0;
  v10[144] = 0;
  *a4 = v9;
  a4[1] = v10;
  v10[132] = GameData_2108688;
  v10[12] = GameData_2108660;
  *((_DWORD*)v10 + 280) = 0x2000;
  *(_QWORD*)((char*)v10 + 1172) = 0;
  *(_DWORD*)((char*)v10 + 1167) = 0;
  *(_BYTE*)(*(_QWORD*)(v10[4] + 24LL) + 88LL) &= ~1u;
  v10[3] = game_gameui_control_BlazeGauge_Destroy_BlazeGauge_18ca9b0_ptr;
  v10[12] = GameData_2108888;
  v10[132] = GameData_21088b0;
  {
    result;
    return;
  }
}

__int64 game_18ca380(__int64 a1, float a2)
{
  __int64 result;
  _QWORD v5[2];
  _BYTE v6[200];

  snd_Fade_Fade_10c830(v6, 0.0f);
  snd_play_ff2d0((void*)(v5), "SE_SYS_BrazeGauge", "SE_SYS_BrazeGauge", v6, 0,
                 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v6);
  GameRoutine_112180(a1 + 1088, v5);
  snd_Fade_Fade_10c830(v6, 0.0f);
  snd_startSurroundPan(a1 + 1088, v6, a2);
  result = snd_Fade_Destroy_Fade(v6);
  *(_BYTE*)(a1 + 1146) = 1;
  return result;
}

__int64 game_18ca430(__int64 a1)
{
  long double v2;
  __int64 result;
  _BYTE v4[200];

  *(__n128*)&v2 = snd_Fade_Fade_10c830(v4, 0.0);
  snd_stop_ffc40(a1 + 1088, v4, v2);
  result = snd_Fade_Destroy_Fade(v4);
  *(_BYTE*)(a1 + 1146) = 0;
  return result;
}

__int64 game_191b920(__int64 result, _BYTE* a2, _BYTE* a3, float a4, float a5,
                     float a6, float a7)
{
  __int64 v7;
  int8x16_t v8;
  unsigned int v9;
  int8x16_t v10;
  unsigned int v11;
  unsigned int v12;
  int8x16_t v13;
  int8x16_t v14;

  if (result != 0) {
    LOBYTE(a4) = *a2;
    LOBYTE(a5) = a2[1];
    LOBYTE(a6) = *a3;
    v7 = result;
    LOBYTE(a7) = a3[1];
    LANES128(v8).n128_f32[0] = (float)LODWORD(a4) / 0x1.fe00000000000p+7f;
    *(float*)&v9 = (float)LODWORD(a5) / 0x1.fe00000000000p+7f;
    LANES128(v10).n128_f32[0] = (float)LODWORD(a6) / 0x1.fe00000000000p+7f;
    LANES128(v8).n128_u32[1] = v9;
    LOBYTE(v9) = a2[2];
    *(float*)&v11 = (float)v9 / 0x1.fe00000000000p+7f;
    LANES128(v8).n128_u32[2] = v11;
    LOBYTE(v11) = a2[3];
    *(float*)&v12 = (float)v11 / 0x1.fe00000000000p+7f;
    LANES128(v8).n128_u32[3] = v12;
    LOBYTE(v12) = a3[2];
    v14 = v8;
    LANES128(v8).n128_f32[0] = (float)LODWORD(a7);
    LOBYTE(a7) = a3[3];
    LANES128(v10).n128_f32[1] =
        LANES128(v8).n128_f32[0] / 0x1.fe00000000000p+7f;
    LANES128(v10).n128_u64[1] =
        __PAIR64__((float)LODWORD(a7) / 0x1.fe00000000000p+7f,
                   (float)v12 / 0x1.fe00000000000p+7f);
    v13 = v10;
    GameRoutine_1917400(result, (__int64)"_Skin", 5u, &v14, 1, 1);
    return GameRoutine_1917400(v7, (__int64)"_Lip", 4u, &v13, 1, 1);
  }
  return result;
}

__int64 game_191c8b0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  int v9;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  float* v21;
  float v22;
  long double v23;
  long double v24;
  long double v25;
  long double v26;
  __int64 v27;
  unsigned __int32 v28;
  int8x16_t v29;
  __int64* v31;
  int v32;
  int8x16_t v33;

  v4 = spine_Slot_getData(a2);
  v5 = *(_QWORD*)(spine_SlotData_getName(v4) + 16);
  v6 = strlen(v5);
  v7 = v6;
  if (v6 >= 6) {
    v8 = 6;
  }
  else {
    v8 = v6;
  }
  v9 = memcmp(v5, "Render", v8);
  if (v7 != 6 || v9 != 0) {
    v11 = spine_Slot_getData(a2);
    v12 = spine_SlotData_getName(v11);
    v13 = *(_QWORD*)(v12 + 16);
    if (v13 != 0) {
      v14 = strlen(*(_QWORD*)(v12 + 16));
      LANES128(v33).n128_u64[0] = v13;
      LANES128(v33).n128_u64[1] = v14;
      v15 = SpineModel_1919040(a1 + 1280, &v33);
      if (v15 != 0) {
        *(_DWORD*)(v15 + 88) = 0;
        *(_DWORD*)(v15 + 96) = 2;
      }
      LANES128(v33).n128_u64[0] = v13;
      LANES128(v33).n128_u64[1] = v14;
      v16 = SpineModel_1919040(a1 + 1280, &v33);
      if (v16 != 0) {
        *(_QWORD*)(v16 + 92) = 0x23F800000LL;
      }
      v32 = 0;
      v31 = GameData_2132358[0] + 2;
      v17 = SpineSlotChecker_Unknown2(&v31);
      v18 = (*(__int64 (**)(__int64, unsigned __int64, __int64))(
          *(_QWORD*)v17 + 24LL))(v17, v13, v14);
      (*(void (**)(__int64, int8x16_t*))(*(_QWORD*)v18 + 32LL))(v18, &v33);
      if ((v32 & 0x1000) != 0) {
        v27 = SpineCaptureProcessor_191e360(&v33, 3, 6);
        v28 = LANES128(v33).n128_u32[0];
      }
      else if ((v32 & 0x2000) != 0) {
        v27 = SpineCaptureProcessor_191e360(&v33, 3, 6);
        v28 = LANES128(v33).n128_u32[1];
      }
      else {
        if ((v32 & 0x4000) == 0) {
          v19 = spine_Slot_getColor(a2);
          v20 = spine_Slot_getData(a2);
          v21 = (float*)spine_SlotData_getColor(v20);
          v22 = v21[2];
          *(float*)(v19 + 8) = v22;
          *(float*)(v19 + 12) = v21[3];
          *(float*)(v19 + 16) = v21[4];
          *(float*)(v19 + 20) = v21[5];
          v23 = spine_MathUtil_clamp(v22, 0.0, 0x1.0000000000000p+0);
          *(_DWORD*)(v19 + 8) = LODWORD(v23);
          v24 = spine_MathUtil_clamp(*(float*)(v19 + 12), 0.0,
                                     0x1.0000000000000p+0);
          *(_DWORD*)(v19 + 12) = LODWORD(v24);
          v25 = spine_MathUtil_clamp(*(float*)(v19 + 16), 0.0,
                                     0x1.0000000000000p+0);
          *(_DWORD*)(v19 + 16) = LODWORD(v25);
          v26 = spine_MathUtil_clamp(*(float*)(v19 + 20), 0.0,
                                     0x1.0000000000000p+0);
          *(_DWORD*)(v19 + 20) = LODWORD(v26);
          return 1;
        }
        v27 = SpineCaptureProcessor_191e360(&v33, 3, 6);
        v28 = LANES128(v33).n128_u32[2];
      }
      LANES128(v29).n128_f32[0] =
          (float)(unsigned __int8)v28 / 0x1.fe00000000000p+7;
      LANES128(v29).n128_f32[1] = (float)BYTE1(v28) / 0x1.fe00000000000p+7;
      LANES128(v29).n128_f32[2] = (float)BYTE2(v28) / 0x1.fe00000000000p+7;
      LANES128(v29).n128_f32[3] = (float)HIBYTE(v28) / 0x1.fe00000000000p+7;
      v33 = v29;
      GameRoutine_19171d0(v27, a2, &v33, 1, 0);
    }
  }
  return 1;
}

__int64 game_191cb10(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  int v9;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int32 v20;
  int8x16_t v21;
  __int64 v23;
  __int64* v24;
  int v25;
  int8x16_t v26;

  v4 = spine_Slot_getData(a2);
  v5 = *(_QWORD*)(spine_SlotData_getName(v4) + 16);
  v6 = strlen(v5);
  v7 = v6;
  if (v6 >= 6) {
    v8 = 6;
  }
  else {
    v8 = v6;
  }
  v9 = memcmp(v5, "Render", v8);
  if (v7 == 6 && v9 == 0) {
    return 1;
  }
  v11 = spine_Slot_getData(a2);
  v12 = spine_SlotData_getName(v11);
  v13 = *(_QWORD*)(v12 + 16);
  if (v13 == 0) {
    return 1;
  }
  v14 = strlen(*(_QWORD*)(v12 + 16));
  LANES128(v26).n128_u64[0] = v13;
  LANES128(v26).n128_u64[1] = v14;
  v15 = SpineModel_1919040(a1 + 1280, &v26);
  if (v15 != 0) {
    *(_DWORD*)(v15 + 88) = 0;
    *(_DWORD*)(v15 + 96) = 2;
  }
  LANES128(v26).n128_u64[0] = v13;
  LANES128(v26).n128_u64[1] = v14;
  v16 = SpineModel_1919040(a1 + 1280, &v26);
  if (v16 != 0) {
    *(_QWORD*)(v16 + 92) = 0x23F800000LL;
  }
  v25 = 0;
  v24 = GameData_2132358[0] + 2;
  v17 = SpineSlotChecker_Unknown2(&v24);
  v18 = (*(__int64 (**)(__int64, unsigned __int64, __int64))(
      *(_QWORD*)v17 + 24LL))(v17, v13, v14);
  (*(void (**)(__int64, int8x16_t*))(*(_QWORD*)v18 + 32LL))(v18, &v26);
  if ((v25 & 0x1000) != 0) {
    v19 = SpineCaptureProcessor_191e360(&v26, 3, 5);
    v20 = LANES128(v26).n128_u32[0];
  LABEL_21:
    LANES128(v21).n128_f32[0] =
        (float)(unsigned __int8)v20 / 0x1.fe00000000000p+7f;
    LANES128(v21).n128_f32[1] = (float)BYTE1(v20) / 0x1.fe00000000000p+7f;
    LANES128(v21).n128_f32[2] = (float)BYTE2(v20) / 0x1.fe00000000000p+7f;
    LANES128(v21).n128_f32[3] = (float)HIBYTE(v20) / 0x1.fe00000000000p+7f;
    v26 = v21;
    GameRoutine_19171d0(v19, a2, &v26, 1, 0);
    return 1;
  }
  if ((v25 & 0x2000) != 0) {
    v19 = SpineCaptureProcessor_191e360(&v26, 3, 5);
    v20 = LANES128(v26).n128_u32[1];
    goto LABEL_21;
  }
  if ((v25 & 0x4000) != 0) {
    v19 = SpineCaptureProcessor_191e360(&v26, 3, 5);
    v20 = LANES128(v26).n128_u32[2];
    goto LABEL_21;
  }
  if ((v25 & 8) != 0) {
    GameRoutine_191d220(a2);
    LANES128(v26).n128_u64[0] = v13;
    LANES128(v26).n128_u64[1] = v14;
    v23 = SpineModel_1919040(a1 + 1280, &v26);
    if (v23 != 0) {
      *(_DWORD*)(v23 + 88) = -1082130432;
      *(_DWORD*)(v23 + 96) = 2;
    }
  }
  else {
    GameRoutine_191d070(a2);
  }
  return 1;
}

__int64 game_191cd20(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  int v9;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int128 v18;

  v4 = spine_Slot_getData(a2);
  v5 = *(_QWORD*)(spine_SlotData_getName(v4) + 16);
  v6 = strlen(v5);
  v7 = v6;
  if (v6 >= 6) {
    v8 = 6;
  }
  else {
    v8 = v6;
  }
  v9 = memcmp(v5, "Render", v8);
  if (v7 != 6 || v9 != 0) {
    v11 = spine_Slot_getData(a2);
    v12 = spine_SlotData_getName(v11);
    v13 = *(_QWORD*)(v12 + 16);
    if (v13 != 0) {
      v14 = strlen(*(_QWORD*)(v12 + 16));
      *(_QWORD*)&v18 = v13;
      *((_QWORD*)&v18 + 1) = v14;
      v15 = SpineModel_1919040(a1 + 1280, &v18);
      if (v15 != 0) {
        *(_DWORD*)(v15 + 88) = 0;
        *(_DWORD*)(v15 + 96) = 2;
      }
      *(_QWORD*)&v18 = v13;
      *((_QWORD*)&v18 + 1) = v14;
      v16 = SpineModel_1919040(a1 + 1280, &v18);
      if (v16 != 0) {
        *(_QWORD*)(v16 + 92) = 0x23F800000LL;
      }
      v18 = GameData_1a82dc0;
      GameRoutine_19171d0(v16, a2, (int8x16_t*)&v18, 1, 0);
    }
  }
  return 1;
}

__int64 game_191ce20(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  const char* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  int v9;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v24;
  unsigned __int32 v25;
  int8x16_t v26;
  struct {
    __int64* v28;
    int v29;
  } v28_;
  int8x16_t v30;

  v4 = spine_Slot_getData(a2);
  v5 = *(const char**)(spine_SlotData_getName(v4) + 16);
  v6 = strlen_alt1(v5);
  v7 = v6;
  if (v6 >= 6) {
    v8 = 6;
  }
  else {
    v8 = v6;
  }
  v9 = memcmp_alt1((__int64)v5, (__int64)"Render", v8);
  if (v7 != 6 || v9 != 0) {
    v11 = spine_Slot_getData(a2);
    v12 = spine_SlotData_getName(v11);
    v13 = *(_QWORD*)(v12 + 16);
    if (v13 != 0) {
      v14 = strlen_alt1(*(const char**)(v12 + 16));
      LANES128(v30).n128_u64[0] = v13;
      LANES128(v30).n128_u64[1] = v14;
      v15 = SpineModel_1919040_alt1((_QWORD*)(a1 + 1280), (__int64*)&v30);
      if (v15 != nullptr) {
        *((_DWORD*)v15 + 22) = -1098907648;
        *((_DWORD*)v15 + 24) = 2;
      }
      LANES128(v30).n128_u64[0] = v13;
      LANES128(v30).n128_u64[1] = v14;
      v16 = SpineModel_1919040_alt1((_QWORD*)(a1 + 1280), (__int64*)&v30);
      if (v16 != nullptr) {
        *(_QWORD*)((char*)v16 + 92) = 0x23F800000LL;
      }
      v28_.v29 = 0;
      v28_.v28 = GameData_2132358[0] + 2;
      v17 = SpineSlotChecker_Unknown2(&v28_.v28);
      v18 = (*(__int64 (**)(__int64, unsigned __int64, unsigned __int64))(
          *(_QWORD*)v17 + 24LL))(v17, v13, v14);
      (*(void (**)(__int64, int8x16_t*))(*(_QWORD*)v18 + 32LL))(v18, &v30);
      if ((v28_.v29 & 0x1000) != 0) {
        v24 = SpineCaptureProcessor_191e360_alt1((__int64)&v30, 3u, 1);
        v25 = LANES128(v30).n128_u32[0];
      }
      else if ((v28_.v29 & 0x2000) != 0) {
        v24 = SpineCaptureProcessor_191e360_alt1((__int64)&v30, 3u, 1);
        v25 = LANES128(v30).n128_u32[1];
      }
      else {
        if ((v28_.v29 & 0x4000) == 0) {
          if ((v28_.v29 & 8) != 0) {
            GameRoutine_191d220_alt1(a2);
          }
          else {
            LANES128(v30).n128_u32[0] = -6650740;
            GameRoutine_1917380_alt1(a1, a2, &v30, 1, 0);
          }
          return 1;
        }
        v24 = SpineCaptureProcessor_191e360_alt1((__int64)&v30, 3u, 1);
        v25 = LANES128(v30).n128_u32[2];
      }
      LANES128(v26).n128_f32[0] =
          (float)(unsigned __int8)v25 / 0x1.fe00000000000p+7f;
      LANES128(v26).n128_f32[1] = (float)BYTE1(v25) / 0x1.fe00000000000p+7f;
      LANES128(v26).n128_f32[2] = (float)BYTE2(v25) / 0x1.fe00000000000p+7f;
      LANES128(v26).n128_f32[3] = (float)HIBYTE(v25) / 0x1.fe00000000000p+7f;
      v30 = v26;
      GameRoutine_19171d0(v24, a2, &v30, 1, 0);
    }
  }
  return 1;
}

void game_191d2f0(__int64 a1, __int64 a2, float a3)
{
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  int v11;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int128 v22;
  __int64* v23;
  int v24;
  __int128 v25;

  v6 = spine_Slot_getData(a2);
  v7 = *(_QWORD*)(spine_SlotData_getName(v6) + 16);
  v8 = strlen(v7);
  v9 = v8;
  if (v8 >= 6) {
    v10 = 6;
  }
  else {
    v10 = v8;
  }
  v11 = memcmp(v7, "Render", v10);
  if (v9 != 6 || v11 != 0) {
    v13 = spine_Slot_getData(a2);
    v14 = spine_SlotData_getName(v13);
    v15 = *(_QWORD*)(v14 + 16);
    if (v15 != 0) {
      v16 = strlen(*(_QWORD*)(v14 + 16));
      *(_QWORD*)&v25 = v15;
      *((_QWORD*)&v25 + 1) = v16;
      v17 = SpineModel_1919040(a1 + 1280, &v25);
      if (v17 != 0) {
        *(_DWORD*)(v17 + 88) = -1098907648;
        *(_DWORD*)(v17 + 96) = 2;
      }
      *(_QWORD*)&v25 = v15;
      *((_QWORD*)&v25 + 1) = v16;
      v18 = SpineModel_1919040(a1 + 1280, &v25);
      if (v18 != 0) {
        *(float*)(v18 + 92) = a3;
        *(_DWORD*)(v18 + 96) = 2;
      }
      v24 = 0;
      v23 = GameData_2132358[0] + 2;
      v19 = SpineSlotChecker_Unknown2(&v23);
      v20 = (*(__int64 (**)(__int64, unsigned __int64, __int64))(
          *(_QWORD*)v19 + 24LL))(v19, v15, v16);
      v21 = (*(__int64 (**)(__int64, __int128*))(*(_QWORD*)v20 + 32LL))(v20,
                                                                        &v25);
      if ((v24 & 8) != 0) {
        v22 = GameData_1a83970;
      }
      else if ((v24 & 0x80) != 0) {
        v22 = GameData_1a82dc0;
      }
      else if ((v24 & 0x800) != 0) {
        v22 = GameData_1a837f0;
      }
      else {
        v22 = GameData_1a82b80;
      }
      v25 = v22;
      GameRoutine_19171d0(v21, a2, (int8x16_t*)&v25, 1, 0);
    }
  }
}

__attribute__((swiftcall)) void game_195ba40(PSEUDO_X8 x8_, char** a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  int v4;
  unsigned int*** v5;
  unsigned int*** v6;
  unsigned int** v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  unsigned int v22;
  bool v23;
  int v24;
  int v26;
  __int64 v27;
  unsigned __int8 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  char* v32;
  char* v33;
  unsigned __int64 v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64* v47;
  unsigned __int64 v48;
  _QWORD* v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  _QWORD* v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  _QWORD* v63;
  __int64 v64;
  unsigned int* v65;
  __int64 v68[2];

  *a2 = 0;
  a2[1] = 0;
  v2 = GameData_226d118[0];
  a2[2] = 0;
  GameData_226d120 = v2;
  GameData_226d138 = GameData_226d130;
  GameData_226d150 = GameData_226d148;
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(unsigned int****)(v3 + 8);
  v6 = *(unsigned int****)(v3 + 16);
  if (v4 < 0) {
    for (; v5 != v6; ++v5) {
      v7 = *v5;
      if ((*v5)[12] == nullptr && v7[69] == nullptr) {
        goto LABEL_11;
      }
    }
  LABEL_7:
    v65 = game_gmap_SpotMgr_GetCurrentSpot_alt2();
    goto LABEL_12;
  }
  if (v5 == v6) {
    goto LABEL_7;
  }
  while (1) {
    v8 = (__int64)*v5++;
    v7 = (unsigned int**)v8;
    if (*(_DWORD*)(v8 + 84) == v4) {
      break;
    }
    if (v5 == v6) {
      goto LABEL_7;
    }
  }
LABEL_11:
  v65 = *v7;
LABEL_12:
  v10 = *(__int64**)(GameData_21c9cf8 + 64);
  v9 = *(__int64**)(GameData_21c9cf8 + 72);
  if (v10 != v9) {
    v11 = nullptr;
    v12 = 0;
    while (1) {
      v13 = *v10;
      v14 = v12;
      v15 = GameHr_19805e0("DivinationHost", 1);
      v16 = *(_QWORD*)GameData_212c7b0[0];
      GameSubquestData_125bbc0_alt1(*(_QWORD*)GameData_212c7b0[0]);
      if (game_GameModeData_instance_ != 0) {
        v17 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
      }
      else {
        v17 = 0;
      }
      v18 = v16 + 136LL * v17;
      v19 = *(__int64**)(v18 + 72);
      v20 = *(__int64**)(v18 + 80);
      while (v19 != v20) {
        v21 = *v19;
        if (*(_BYTE*)(*(_QWORD*)*v19 + 113LL) == 5) {
          v22 = *(unsigned __int8*)(v21 + 9);
          if ((v22 & 0xFE) == 2) {
            break;
          }
          v23 = v22 > 5;
          v24 = (1 << v22) & 0x31;
          if (v23 || v24 == 0) {
            goto LABEL_31;
          }
        }
        ++v19;
      }
      v21 = 0;
    LABEL_31:
      if (GameData_226dcb0 != 0) {
        v26 = *(unsigned __int8*)(GameData_226dcb0 + 216);
        v27 = *(_QWORD*)(v13 + 88);
        if (v27 == 0) {
          goto LABEL_37;
        }
      }
      else {
        v26 = 0;
        v27 = *(_QWORD*)(v13 + 88);
        if (v27 == 0) {
        LABEL_37:
          if (((v15 | v26) & 1 | (v21 == 0)) == 0) {
            goto LABEL_14;
          }
          goto LABEL_42;
        }
      }
      if (v21 == 0 ||
          (game_GameModeData_instance_ == 0
               ? (v28 = 0)
               : (v28 = *(_BYTE*)(game_GameModeData_instance_ + 15)),
           (v29 = GameSubquestData_125b8e0_alt1((_QWORD*)GameData_21c9718,
                                                *(const char**)(v27 + 8),
                                                v28)) == 0 ||
               ((v26 | v15) & 1 | (v29 != v21)) != 0)) {
      LABEL_14:
        v12 = v14;
        goto LABEL_15;
      }
    LABEL_42:
      v12 = v14;
      if ((int)GameRoutine_715440_alt1() >= *(unsigned __int8*)(v13 + 58)) {
        if ((*(_BYTE*)(v13 + 56) & 1) != 0 ||
            v65 != nullptr &&
                (game_GameModeData_instance_ == 0
                     ? (v31 = 0)
                     : (v30 = *(_QWORD*)(v13 + 40), v68[0] = 0, v68[1] = v30,
                        v31 = GameSituation_906910_alt1(
                            game_GameModeData_instance_ + 136, v68)),
                 v31 == *((_QWORD*)v65 + 15))) {
          if (a1 == nullptr) {
            goto LABEL_67;
          }
          v33 = *a1;
          v32 = a1[1];
          if (*a1 != v32) {
            v34 = v32 - v33 - 8;
            if ((~(_BYTE)v34 & 0x18) == 0) {
            LABEL_55:
              if (v34 >= 0x18) {
                v33 += 16;
                while (1) {
                  if (*((_QWORD*)v33 - 2) == v13) {
                    if (v33 - 16 != v32) {
                      goto LABEL_15;
                    }
                    goto LABEL_67;
                  }
                  if (*((_QWORD*)v33 - 1) == v13) {
                    v33 -= 8;
                    goto LABEL_66;
                  }
                  if (*(_QWORD*)v33 == v13) {
                    goto LABEL_66;
                  }
                  if (*((_QWORD*)v33 + 1) == v13) {
                    break;
                  }
                  v36 = v33 + 16;
                  v33 += 32;
                  if (v36 == v32) {
                    goto LABEL_67;
                  }
                }
                if (v33 + 8 != v32) {
                  goto LABEL_15;
                }
              }
            LABEL_67:
              if (game_GameModeData_instance_ == 0 ||
                  (v37 = *(_QWORD*)(v13 + 40), v68[0] = 0, v68[1] = v37,
                   (unsigned __int8)(GameSituation_906440_alt1(
                                         game_GameModeData_instance_ + 136,
                                         v68) -
                                     2) >= 3u)) {
                v38 = a2[2];
                if ((unsigned __int64)v11 >= v38) {
                  v39 = (__int64)v11 - v14;
                  v40 = (v39 >> 3) + 1;
                  if (v40 >> 61 != 0) {
                    *a2 = v14;
                    GameRoutine_195daf0_alt1();
                  }
                  v41 = v38 - v14;
                  if (v41 >> 2 > v40) {
                    v40 = v41 >> 2;
                  }
                  if ((unsigned __int64)v41 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v42 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v42 = v40;
                  }
                  if (v42 != 0) {
                    if (v42 >> 61 != 0) {
                      *a2 = v14;
                      GameRoutine_60a210_alt1();
                    }
                    v43 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v42, 16, 0);
                  }
                  else {
                    v43 = 0;
                  }
                  v44 = v43 + 8 * v42;
                  v45 = v39;
                  v12 = v43 + v39 - 8 * (v39 >> 3);
                  *(_QWORD*)(v43 + v39) = v13;
                  v11 = (_QWORD*)(v43 + v39 + 8);
                  memcpy_alt1(v12, v14, v45);
                  a2[1] = (__int64)v11;
                  a2[2] = v44;
                  if (v14 != 0) {
                    v46 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v46 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v14);
                  }
                }
                else {
                  *v11++ = v13;
                }
                a2[1] = (__int64)v11;
                if (*(unsigned __int8*)(v13 + 57) <= 2uLL) {
                  v64 = v12;
                  v47 = &GameData_226d118[3 * *(unsigned __int8*)(v13 + 57)];
                  v49 = (_QWORD*)v47[1];
                  v48 = v47[2];
                  if ((unsigned __int64)v49 >= v48) {
                    v63 = v11;
                    v51 = *v47;
                    v52 = (__int64)v49 - *v47;
                    v53 = v52 >> 3;
                    v54 = (v52 >> 3) + 1;
                    if (v54 >> 61 != 0) {
                      *a2 = v64;
                      GameRoutine_195daf0_alt1();
                    }
                    v55 = v48 - v51;
                    if (v55 >> 2 > v54) {
                      v54 = v55 >> 2;
                    }
                    if ((unsigned __int64)v55 >= 0x7FFFFFFFFFFFFFF8LL) {
                      v56 = 0x1FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v56 = v54;
                    }
                    if (v56 != 0) {
                      if (v56 >> 61 != 0) {
                        *a2 = v64;
                        GameRoutine_60a210_alt1();
                      }
                      v57 = fw_memory_HeapManager_Allocate(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v56, 16,
                          0);
                      v53 = v52 >> 3;
                    }
                    else {
                      v57 = 0;
                    }
                    v58 = v52;
                    v59 = (_QWORD*)(v57 + v52);
                    v60 = v57 + 8 * v56;
                    v61 = (__int64)&v59[-v53];
                    *v59 = v13;
                    v50 = v59 + 1;
                    memcpy_alt1(v61, v51, v58);
                    *v47 = v61;
                    v47[1] = (__int64)v50;
                    v47[2] = v60;
                    if (v51 != 0) {
                      v62 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v62 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v62, v51);
                    }
                    v11 = v63;
                  }
                  else {
                    *v49 = v13;
                    v50 = v49 + 1;
                  }
                  v47[1] = (__int64)v50;
                  v12 = v64;
                }
              }
              goto LABEL_15;
            }
            v35 = ((unsigned __int8)((unsigned int)v34 >> 3) + 1) & 3;
            while (*(_QWORD*)v33 != v13) {
              v33 += 8;
              if (--v35 == 0) {
                goto LABEL_55;
              }
            }
          }
        LABEL_66:
          if (v33 == v32) {
            goto LABEL_67;
          }
        }
      }
    LABEL_15:
      if (++v10 == v9) {
        goto LABEL_107;
      }
    }
  }
  v12 = 0;
LABEL_107:
  *a2 = v12;
}

__int64 game_195c040(char** a1)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64* v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12[3];

  game_195ba40((void*)(v12), a1);
  v1 = v12[0];
  if (v12[0] == v12[1]) {
    v9 = 0;
    result = 0;
    if (v12[0] == 0) {
      return result;
    }
  }
  else {
    v2 = (unsigned __int64)(v12[1] - v12[0]) >> 3;
    nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
    v3 = game_map_MapRandom_instance__ptr[0];
    v4 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL) + 8);
    v5 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
    v6 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL)) ^
         (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL))
          << 11);
    *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
               (unsigned __int64)((__int128*)0x10LL)) =
        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 4);
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 4) = v4;
    v7 = (v6 >> 8) ^ (v5 >> 19) ^ v6 ^ v5;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 8) = v5;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 12) = v7;
    v8 = v7 & 0x7FFFFFFF;
    nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
    v9 = *(_QWORD*)(v1 + 8LL * (unsigned int)(v8 % (int)v2));
  }
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v11 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v1);
  return v9;
}

__attribute__((swiftcall)) void game_196dfe0(PSEUDO_X8 x8_, __int64 a1, int a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  unsigned __int64 result;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  char* v13;
  char* v14;
  char* v15;
  __int64 v16;
  __int64 v17;

  if (a2 == 0 && *(_BYTE*)(a1 + 32) == 0) {
    v4 = *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL);
    result = strlen(v4);
    if (result >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0_alt1(result);
    }
    v6 = result;
    if (result >= 0x17) {
      if ((result | 7) == 0x17) {
        v16 = 26;
      }
      else {
        v16 = (result | 7) + 1;
      }
      v17 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v16,
                                                16, 0);
      a3[1] = v6;
      a3[2] = v17;
      *a3 = v16 | 1;
      v7 = (char*)v17;
    }
    else {
      *(_BYTE*)a3 = 2 * result;
      v7 = (char*)a3 + 1;
      if (result == 0) {
        goto LABEL_22;
      }
    }
    result = memmove(v7, v4, v6);
  LABEL_22:
    v7[v6] = 0;
    {
      result;
      return;
    }
  }
  v8 = *(_QWORD*)(a1 + 24);
  if (v8 != 0) {
    v9 = 88;
    if (a2 == 0) {
      v9 = 64;
    }
    v10 = 104;
    if (a2 == 0) {
      v10 = 80;
    }
    v11 = *(_BYTE*)(v8 + v9);
    v12 = 89;
    v13 = *(char**)(v8 + v10);
    if (a2 == 0) {
      v12 = 65;
    }
    v14 = (char*)(v8 + v12);
    if ((v11 & 1) != 0) {
      v15 = v13;
    }
    else {
      v15 = v14;
    }
  }
  else {
    v15 = &GameData_1a9f09e;
  }
  {
    Manager_a501f0(msg_MessageManager_instance_, v15);
    return;
  }
}

__int64 game_199d2e0(__int64 a1, __int64* a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 result;
  struct {
    __int64 v15;
    __int64 v16;
  } v15_;
  struct {
    __int64 v17;
    __int64 v18;
  } v17_;
  struct {
    __int64 v19;
    __int64 v20;
  } v19_;

  v3 = a2[1];
  if (v3 != 0 && (v3 = std___1___shared_weak_count_lock_alt1(v3)) != 0) {
    v5 = *a2;
  }
  else {
    v5 = 0;
  }
  v6 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 8) = v5;
  *(_QWORD*)(a1 + 16) = v3;
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt2(v6);
  }
  LayoutAccessor_1560070_alt2((void*)(&v19_.v19), *(__int64**)(a1 + 8),
                              "L_Spot00");
  GameHr_165f140(a1 + 24, &v19_.v19);
  if (v19_.v20 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v19_.v20);
  }
  v7 = a1 + 144;
  v8 = -99;
  do {
    v10 = game_util_Format_alt1("L_Spot%02d", (int)v8 + 100);
    LayoutAccessor_1560520_alt1(*(__int64**)(a1 + 8), (__int64)"L_Spot00",
                                "N_Spot", v10);
    LayoutAccessor_1560070_alt2((void*)(&v15_.v15), *(__int64**)(a1 + 8), v10);
    if (v15_.v16 != 0 &&
        (v11 = std___1___shared_weak_count_lock_alt1(v15_.v16)) != 0) {
      v12 = v11;
      v13 = 0;
      v17_.v17 = v15_.v15;
      v17_.v18 = v11;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                memory_order_relaxed);
    }
    else {
      v12 = 0;
      v17_.v17 = 0;
      v17_.v18 = 0;
      v13 = 1;
    }
    GameHr_165f140(v7, &v17_.v17);
    if (v17_.v18 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v17_.v18);
    }
    if ((v13 & 1) != 0 || atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) != 0) {
      result = v15_.v16;
      if (v15_.v16 == 0) {
        goto LABEL_11;
      }
    LABEL_21:
      result = std___1___shared_weak_count___release_weak_alt2(result);
      goto LABEL_11;
    }
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak_alt2(v12);
    result = v15_.v16;
    if (v15_.v16 != 0) {
      goto LABEL_21;
    }
  LABEL_11:
    v9 = __CFADD__(v8++, 1);
    v7 += 120;
  } while (!v9);
  return result;
}

unsigned __int64 game_19a0e60(__int64 a1)
{
  unsigned __int64 result;
  unsigned __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  int v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v14;
  __int16 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v22;
  bool v23;
  unsigned __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  int v29;
  bool v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  bool v46;
  int v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int16 v62;
  int v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  _QWORD v69[100];

  result = ui_LayoutAccessor_FindPane_alt1(*(__int64**)(a1 + 5600),
                                           (__int64)"N_Unit");
  if (result == 0) {
    return result;
  }
  v3 = result;
  result = memset_alt1((__int64)v69, 0, 0x320u);
  v4 = *(_QWORD*)(GameData_21c96e8 + 8);
  v5 = *(__int64**)(v4 + 8);
  v6 = *(__int64**)(v4 + 16);
  if (v5 == v6) {
    *(_BYTE*)(v3 + 88) &= ~1u;
    return result;
  }
  v7 = 0;
  v8 = GameData_2130e70;
  v9 = *GameData_2130e70;
  do {
    v10 = *v5;
    if (*(_BYTE*)(*v5 + 546) != 0) {
      goto LABEL_6;
    }
    v11 = *(_QWORD*)(v10 + 96);
    v12 = *(_QWORD*)(v10 + 552);
    if ((v11 | v12) != 0) {
      if (v11 != 0 || v12 == 0) {
        if (v11 == 0 || (unsigned int)*(unsigned __int8*)(v11 + 32) - 1 > 1) {
          goto LABEL_6;
        }
      }
      else if (*(_QWORD*)(v10 + 104) == 0 && *(__int16*)(v10 + 642) *
                                                     *(__int16*)(v10 + 640) *
                                                     *(__int16*)(v10 + 644) ==
                                                 0) {
        goto LABEL_6;
      }
    }
    if (*(_BYTE*)(v4 + 60) != 1) {
      goto LABEL_29;
    }
    if (*(_BYTE*)(v9 + 54) == 1) {
      if ((v11 | v12) != 0 || *(_DWORD*)(v10 + 84) != *(_DWORD*)(v4 + 56)) {
      LABEL_29:
        v14 = false;
      }
      else {
        v14 = *(_QWORD*)(v10 + 32) != *(_QWORD*)(v10 + 24);
      }
    LABEL_30:
      if (!v14 && v7 >= 1) {
        v16 = v69;
        v17 = (unsigned int)v7;
        while (1) {
          v19 = *v16++;
          v18 = v19;
          if (*(_BYTE*)(v4 + 60) != 0) {
            result = *(_QWORD*)(v18 + 96);
            v20 = *(_QWORD*)(v18 + 552);
            if (*(_BYTE*)(v9 + 54) == 1) {
              if ((result | v20) == 0 &&
                  *(_DWORD*)(v18 + 84) == *(_DWORD*)(v4 + 56)) {
                result = *(_QWORD*)(v18 + 24);
                if (*(_QWORD*)(v18 + 32) != result) {
                  goto LABEL_58;
                }
              }
            }
            else if ((result | v20) != 0 &&
                     *(_QWORD*)(v18 + 32) != *(_QWORD*)(v18 + 24)) {
              if (result == 0) {
                result = *(_QWORD*)(v18 + 104);
                if (v20 != 0 && result == 0) {
                  result = (unsigned int)(*(__int16*)(v18 + 642) *
                                          *(__int16*)(v18 + 640) *
                                          *(__int16*)(v18 + 644));
                  if ((_DWORD)result == 0 && *(_QWORD*)(v20 + 352) == 0) {
                    goto LABEL_58;
                  }
                }
              }
              if ((*(_WORD*)(v18 + 544) & 3) != 2) {
                goto LABEL_58;
              }
            }
          }
          v22 = *(_DWORD*)(v10 + 540);
          v24 = (unsigned int)(v22 - 1);
          v23 = v22 < 1;
          v25 = (_QWORD*)*v5;
          if (!v23) {
            v26 = *(_QWORD*)(v10 + 24);
            v27 = *(_QWORD*)(v10 + 32) - v26;
            v28 = (_QWORD*)(v26 + 8LL * (unsigned int)v24);
            if (v24 >= v27 >> 3) {
              v25 = (_QWORD*)*v5;
            }
            else {
              v25 = v28;
            }
          }
          v29 = *(_DWORD*)(v18 + 540);
          v30 = __OFSUB__(v29, 1);
          result = (unsigned int)(v29 - 1);
          if (((result & 0x80000000) != 0LL) == v30) {
            v31 = *(_QWORD*)(v18 + 24);
            v32 = *(_QWORD*)(v18 + 32) - v31;
            v33 = v31 + 8LL * (unsigned int)result;
            if (result < v32 >> 3) {
              v18 = v33;
            }
          }
          if (*v25 == *(_QWORD*)v18) {
            goto LABEL_5;
          }
        LABEL_58:
          if (--v17 == 0) {
            goto LABEL_4;
          }
        }
      }
      goto LABEL_4;
    }
    if ((v11 | v12) == 0 || *(_QWORD*)(v10 + 32) == *(_QWORD*)(v10 + 24)) {
      goto LABEL_29;
    }
    if (v11 != 0 || v12 == 0 || *(_QWORD*)(v10 + 104) != 0 ||
        *(__int16*)(v10 + 642) * *(__int16*)(v10 + 640) *
                *(__int16*)(v10 + 644) !=
            0 ||
        *(_QWORD*)(v12 + 352) != 0) {
      v15 = *(_WORD*)(v10 + 544);
      if ((v15 & 1) == 0) {
        v14 = (v15 & 2) == 0;
        goto LABEL_30;
      }
    }
  LABEL_4:
    v69[v7++] = v10;
  LABEL_5:
    if (v7 >= 100) {
      *(_BYTE*)(v3 + 88) |= 1u;
      goto LABEL_72;
    }
  LABEL_6:
    ++v5;
  } while (v5 != v6);
  v34 = *(_BYTE*)(v3 + 88) & 0xFE;
  if (v7 > 0) {
    ++v34;
  }
  *(_BYTE*)(v3 + 88) = v34;
  if (v7 >= 1) {
  LABEL_72:
    v35 = 0;
    v36 = (unsigned int)v7;
    do {
      v38 = a1 + v35;
      if ((*(_BYTE*)(a1 + v35 + 36) & 1) != 0) {
        v39 = v69;
        v40 = v36;
        v41 = *(_QWORD*)(GameData_21c96e8 + 8);
        while (1) {
          v43 = *v39++;
          v42 = v43;
          if (*(_BYTE*)(v41 + 60) == 0) {
            break;
          }
          v44 = *(_QWORD*)(v42 + 96);
          v45 = *(_QWORD*)(v42 + 552);
          if (*(_BYTE*)(*v8 + 54) == 1) {
            if ((v44 | v45) != 0 ||
                *(_DWORD*)(v42 + 84) != *(_DWORD*)(v41 + 56) ||
                *(_QWORD*)(v42 + 32) == *(_QWORD*)(v42 + 24)) {
              break;
            }
          }
          else {
            if ((v44 | v45) == 0 ||
                *(_QWORD*)(v42 + 32) == *(_QWORD*)(v42 + 24)) {
              break;
            }
            if (v44 != 0 ||
                (v45 != 0 ? (v46 = *(_QWORD*)(v42 + 104) == 0) : (v46 = false),
                 !v46 ||
                     *(__int16*)(v42 + 642) * *(__int16*)(v42 + 640) *
                             *(__int16*)(v42 + 644) !=
                         0 ||
                     *(_QWORD*)(v45 + 352) != 0)) {
              if ((*(_WORD*)(v42 + 544) & 3) == 2) {
                break;
              }
            }
          }
          if (v42 == *(_QWORD*)(v38 + 8)) {
            goto LABEL_74;
          }
        LABEL_78:
          if (--v40 == 0) {
            v37 = *(_QWORD*)(v38 + 16);
            *(_QWORD*)v38 = 0;
            *(_QWORD*)(v38 + 8) = 0;
            (*(void (**)(__int64, _QWORD))(*(_QWORD*)v37 + 40LL))(v37, 0);
            result =
                LayoutAccessor_1562cf0_alt1(*(_QWORD*)(v38 + 16) + 88LL, "Out");
            *(_DWORD*)(v38 + 32) = 0;
            *(_BYTE*)(v38 + 36) = 0;
            *(_DWORD*)(v38 + 40) = 8;
            goto LABEL_74;
          }
        }
        if (*(_QWORD*)v38 != 0) {
          v47 = *(_DWORD*)(v42 + 540);
          v30 = __OFSUB__(v47, 1);
          v48 = (unsigned int)(v47 - 1);
          if (((v48 & 0x80000000) != 0LL) == v30) {
            v49 = *(_QWORD*)(v42 + 24);
            v50 = *(_QWORD*)(v42 + 32) - v49;
            v51 = v49 + 8LL * (unsigned int)v48;
            if (v48 < v50 >> 3) {
              v42 = v51;
            }
          }
          if (*(_QWORD*)(*(_QWORD*)v38 + 96LL) ==
              *(_QWORD*)(*(_QWORD*)v42 + 96LL)) {
            goto LABEL_74;
          }
        }
        goto LABEL_78;
      }
    LABEL_74:
      v35 += 56;
    } while (v35 != 5600);
    v52 = GameData_21c96e8;
    v53 = *v8;
    v54 = 0;
    if ((int)v36 <= 1) {
      v36 = 1;
    }
    else {
      v36 = (unsigned int)v36;
    }
  LABEL_108:
    v55 = *(_QWORD*)(v52 + 8);
    v56 = v69[v54];
    v57 = -1;
    v58 = 0;
    v59 = a1;
    while (*(_BYTE*)(v55 + 60) != 0) {
      v60 = *(_QWORD*)(v56 + 96);
      v61 = *(_QWORD*)(v56 + 552);
      if (*(_BYTE*)(v53 + 54) == 1) {
        if ((v60 | v61) != 0 || *(_DWORD*)(v56 + 84) != *(_DWORD*)(v55 + 56) ||
            *(_QWORD*)(v56 + 32) == *(_QWORD*)(v56 + 24)) {
          break;
        }
      }
      else {
        if ((v60 | v61) == 0 || *(_QWORD*)(v56 + 32) == *(_QWORD*)(v56 + 24)) {
          break;
        }
        if (v60 != 0 || v61 == 0 || *(_QWORD*)(v56 + 104) != 0 ||
            *(__int16*)(v56 + 642) * *(__int16*)(v56 + 640) *
                    *(__int16*)(v56 + 644) !=
                0 ||
            *(_QWORD*)(v61 + 352) != 0) {
          v62 = *(_WORD*)(v56 + 544);
          if ((v62 & 1) == 0 && (v62 & 2) != 0) {
            break;
          }
        }
      }
      if (v56 == *(_QWORD*)(v59 + 8)) {
        goto LABEL_106;
      }
    LABEL_129:
      if (v57 == -1) {
        if (*(_BYTE*)(v59 + 36) != 0) {
          v57 = -1;
        }
        else {
          v57 = v58;
        }
      }
      ++v58;
      v59 += 56;
      if (v58 == 100) {
        if (v57 != -1) {
          v58 = v57;
        LABEL_106:
          result =
              game_gmap_GmapTroopInfo_Setup_alt1(a1 + 56 * v58, (__int64*)v56);
          v52 = GameData_21c96e8;
          v53 = *v8;
        }
        if (++v54 == v36) {
          return result;
        }
        goto LABEL_108;
      }
    }
    if (*(_QWORD*)v59 != 0) {
      v63 = *(_DWORD*)(v56 + 540);
      v64 = v69[v54];
      v30 = __OFSUB__(v63, 1);
      v65 = (unsigned int)(v63 - 1);
      if (((v65 & 0x80000000) != 0LL) == v30) {
        v66 = *(_QWORD*)(v56 + 24);
        v67 = *(_QWORD*)(v56 + 32) - v66;
        v68 = v66 + 8LL * (unsigned int)v65;
        if (v65 >= v67 >> 3) {
          v64 = v69[v54];
        }
        else {
          v64 = v68;
        }
      }
      if (*(_QWORD*)(*(_QWORD*)v59 + 96LL) ==
          *(_QWORD*)(*(_QWORD*)v64 + 96LL)) {
        goto LABEL_106;
      }
    }
    goto LABEL_129;
  }
  return result;
}

__int64 game_19a14c0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  float v6;
  float v7;
  float v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  char* v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  bool v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  _QWORD* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD _FFFFFFFFFFFFFD00[102];
  __int64 vars28;

  v1 = a1 + 24;
  v2 = 5600;
  while (1) {
    if (*(_BYTE*)(v1 + 12) == 1) {
      v5 = *(_QWORD*)(v1 - 8);
      v4 = *(_QWORD*)v1;
      if (*(_QWORD*)v1 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak_alt2(v4);
        }
      }
      if ((LayoutAccessor_1563280_alt1((__int64*)(v5 + 88), (__int64)"Wait",
                                       0) &
           1) != 0) {
        break;
      }
    }
    v2 -= 56;
    v1 += 56;
    if (v2 == 0) {
      v6 = 0x1.9000000000000p+6f;
      goto LABEL_15;
    }
  }
  v7 = LayoutAccessor_15637c0_alt1((__int64*)(v5 + 88), (__int64)"Wait", 0);
  v8 = *(float*)(a1 + 5616);
  *(float*)(a1 + 5616) = v7;
  if (v8 >= 0x1.9000000000000p+6f || v7 < 0x1.9000000000000p+6f) {
    v6 = -0x1.0000000000000p+0f;
  }
  else {
    v6 = v7;
  }
LABEL_15:
  v10 = 5600;
  v11 = a1;
  do {
    game_gmap_1656640_alt1(v11, v6);
    v10 -= 56;
    v11 += 56;
  } while (v10 != 0);
  _FFFFFFFFFFFFFD00[100] = _FFFFFFFFFFFFFD00[98];
  _FFFFFFFFFFFFFD00[101] = _FFFFFFFFFFFFFD00[99];
  v12 = a1;
  result = ui_LayoutAccessor_FindPane_alt1(*(__int64**)(a1 + 5600),
                                           (__int64)"N_Unit");
  if (result == 0) {
    return result;
  }
  v14 = result;
  v15 = *(_QWORD*)(*(_QWORD*)(*GameData_212d708 + 16) + 96LL);
  if (v15 == 0) {
  LABEL_41:
    v31 = 0;
    goto LABEL_42;
  }
  v16 = 0;
  while (1) {
    v17 = (_QWORD*)(v12 + v16);
    if (*(_BYTE*)(v12 + v16 + 36) != 1) {
      goto LABEL_21;
    }
    if (*v17 == 0) {
      goto LABEL_21;
    }
    v18 = *(_QWORD*)(*GameData_212c790 + 8);
    v19 = *(char**)(v18 + 8);
    v20 = *(char**)(v18 + 16);
    if (v19 != v20) {
      v21 = v17[1];
      v22 = v20 - v19 - 8;
      if ((~(_BYTE)v22 & 0x18) != 0) {
        break;
      }
    LABEL_29:
      if (v22 >= 0x18) {
        while (v21 != *(_QWORD*)v19 && v21 != *((_QWORD*)v19 + 1) &&
               v21 != *((_QWORD*)v19 + 2) && v21 != *((_QWORD*)v19 + 3)) {
          v19 += 32;
          if (v19 == v20) {
            goto LABEL_21;
          }
        }
        goto LABEL_36;
      }
    }
  LABEL_21:
    v16 += 56;
    if (v16 == 5600) {
      goto LABEL_41;
    }
  }
  v23 = ((unsigned __int8)((unsigned int)v22 >> 3) + 1) & 3;
  while (1) {
    v24 = *(_QWORD*)v19;
    v19 += 8;
    if (v21 == v24) {
      break;
    }
    if (--v23 == 0) {
      goto LABEL_29;
    }
  }
LABEL_36:
  if (v21 == 0) {
    goto LABEL_21;
  }
  v25 = *(_DWORD*)(v21 + 540);
  v26 = __OFSUB__(v25, 1);
  v27 = (unsigned int)(v25 - 1);
  if (((v27 & 0x80000000) != 0LL) == v26) {
    v28 = *(_QWORD*)(v21 + 24);
    v29 = *(_QWORD*)(v21 + 32) - v28;
    v30 = v28 + 8LL * (unsigned int)v27;
    if (v27 < v29 >> 3) {
      v21 = v30;
    }
  }
  if (*(_QWORD*)v21 != v15) {
    goto LABEL_21;
  }
  v47 = v17[2];
  v48 = v17[3];
  if (v48 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v48 + 8), 1u,
                              memory_order_relaxed);
  }
  v49 = *(_QWORD*)(v47 + 8);
  if (v49 != 0) {
    v31 = *(_QWORD*)(v49 + 24);
  }
  else {
    v31 = 0;
  }
  if (v48 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
    std___1___shared_weak_count___release_weak_alt2(v48);
  }
LABEL_42:
  result = memset_alt1((__int64)_FFFFFFFFFFFFFD00, 0, 0x320u);
  v32 = *(_QWORD*)(v14 + 40);
  v33 = v14 + 32;
  if (v32 != v14 + 32) {
    v34 = 0;
    do {
      if ((*(_BYTE*)(v32 + 80) & 1) != 0 && *(_BYTE*)(v32 + 82) != 0) {
        _FFFFFFFFFFFFFD00[v34++] = v32 - 8;
      }
      v32 = *(_QWORD*)(v32 + 8);
    } while (v32 != v33);
    if (v34 >= 2) {
      vars28 = v31;
      v35 = _FFFFFFFFFFFFFD00;
      result = GameRoutine_19a1960_alt1((__int64)_FFFFFFFFFFFFFD00,
                                        &_FFFFFFFFFFFFFD00[v34], &vars28,
                                        (2 * __clz(v34)) ^ 0x7E, 1);
      v36 = v34 & 0xFFFFFFFFFFFFFFFELL;
      do {
        v37 = *v35 + 8LL;
        v38 = *(__int64**)(*v35 + 16LL);
        if ((__int64*)v37 != v38) {
          v39 = *v38;
          *(_QWORD*)(*(_QWORD*)v37 + 8LL) = v38;
          *v38 = *(_QWORD*)v37;
          *(_QWORD*)(v39 + 8) = v37;
          *(_QWORD*)v37 = v39;
          *(_QWORD*)v37 = *(_QWORD*)v33;
          *(_QWORD*)(v39 + 8) = v33;
          *(_QWORD*)(*(_QWORD*)v33 + 8LL) = v37;
          *(_QWORD*)v33 = v39;
        }
        v40 = v35[1];
        v41 = (__int64*)(v40 + 8);
        v42 = *(__int64**)(v40 + 16);
        if (v41 != v42) {
          v43 = *v42;
          *(_QWORD*)(*v41 + 8) = v42;
          *v42 = *v41;
          *(_QWORD*)(v43 + 8) = v41;
          *v41 = v43;
          *v41 = *(_QWORD*)v33;
          *(_QWORD*)(v43 + 8) = v33;
          *(_QWORD*)(*(_QWORD*)v33 + 8LL) = v41;
          *(_QWORD*)v33 = v43;
        }
        v35 += 2;
        v36 -= 2LL;
      } while (v36 != 0);
      if ((v34 & 1) != 0) {
        v44 = *v35 + 8LL;
        v45 = *(__int64**)(*v35 + 16LL);
        if ((__int64*)v44 != v45) {
          v46 = *v45;
          *(_QWORD*)(*(_QWORD*)v44 + 8LL) = v45;
          *v45 = *(_QWORD*)v44;
          *(_QWORD*)(v46 + 8) = v44;
          *(_QWORD*)v44 = v46;
          *(_QWORD*)v44 = *(_QWORD*)v33;
          *(_QWORD*)(v46 + 8) = v33;
          *(_QWORD*)(*(_QWORD*)v33 + 8LL) = v44;
          *(_QWORD*)v33 = v46;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
