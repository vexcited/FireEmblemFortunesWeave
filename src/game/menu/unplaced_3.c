#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_BYTE* ProcInst_657a50(__int64, char);
__attribute__((swiftcall)) void GameRoutine_1114920(PSEUDO_X8, __int64*,
                                                    const char**);
__attribute__((swiftcall)) void GameRoutine_1572840(PSEUDO_X8, __int64*,
                                                    const char**);
__attribute__((swiftcall)) void GameRoutine_1573280(PSEUDO_X8, __int64*,
                                                    const char**);
__attribute__((swiftcall)) void GameRoutine_16d1510(PSEUDO_X8, __int64,
                                                    __int64);
__attribute__((swiftcall)) void GameSideStoryData_12b3ba0(PSEUDO_X8,
                                                          __int64 result);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64* UnitMake_1631b00(__int64* result, int);
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
__int64 Alignment_56b600(__int64 result);
__int64 BlnPopup_19f2340(__int64, const char*);
__int64 Dir_70e760(__int16*, __int16*);
__int64 GameHr_1798c30();
__int64 GameHr_1798cb0();
__int64 GameHr_1798d50();
__int64 GameHr_1798dd0();
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameRoutine_1553220(__int64 result);
__int64 GameRoutine_1572370(__int64, char);
__int64 GameRoutine_1585290(__int64*, const char*, const char*);
__int64 GameRoutine_1597cc0(__int64*, __int64, int, int);
__int64 GameRoutine_16afa80();
__int64 GameRoutine_16afaa0();
__int64 GameRoutine_16afc20();
__int64 GameRoutine_16afdf0();
__int64 GameRoutine_17992c0();
__int64 GameRoutine_1799760();
__int64 GameRoutine_17999d0();
__int64 GameRoutine_1799ce0();
__int64 GameRoutine_179a220();
__int64 GameRoutine_179a4b0();
__int64 GameRoutine_56e670(__int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameSideStoryData_12b56c0(_QWORD*, unsigned __int64**);
__int64 LayoutAccessor_155c780(__int64, __int64*);
__int64 LayoutAccessor_155ca60(__int64);
__int64 LayoutAccessor_155cda0(__int64 result, const char*, const char*);
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
__int64 MultiMenuSequence_17871c0(__int64 result, unsigned int, int);
__int64 Pane_58f8a0(__int64);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 ProcNextSeq_16b0340();
__int64 ProcNextSeq_16b0370();
__int64 ProcNextSeq_16b0680();
__int64 ProcNextSeq_16b06e0();
__int64 ProcNextSeq_16b0800(__int64, const char*, __int16*);
__int64 Registration_a4da40(__int64, __int64);
__int64 StatusLV_18a30a0(__int64 result, __int64);
__int64 UnitMakeSelectBody_1799770();
__int64 UnitMakeSelectBody_1799a80();
__int64 UnitMakeSelectBody_179a240();
__int64 UnitMakeSelectBody_179a4c0();
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_159df00(__int64, char);
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_menu_anonymous_ProcNextSeq_CheckFree_16b0100();
__int64 game_menu_anonymous_ProcNextSeq_CheckNextFree();
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 snd_stop_ffc40(__int64*, __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, const char*, char);
bool GameSituation_906560(__int64, __int64*);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
const char* game_HashString32(const char* result);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN GameData_2174af8;
extern _UNKNOWN GameData_21a6190;
extern _UNKNOWN GameData_22594f0;
extern _UNKNOWN GameData_2262198;
extern _UNKNOWN GameData_22627e0;
extern _UNKNOWN GameData_2263dd8;
extern _UNKNOWN GameData_2263e60;
extern _UNKNOWN GameData_2263ee8;
extern _UNKNOWN GameData_2263f70;
extern _UNKNOWN GameData_2264038;
extern _UNKNOWN GameData_2264100;
extern _UNKNOWN GameData_2264208;
extern _UNKNOWN GameData_2264310;
extern _UNKNOWN GameData_2264418;
extern _UNKNOWN GameData_2264520;
extern __int128 GameData_1a82a10;
extern __int128 GameData_21a6180;
extern __int64 (*GameData_2089010[])();
extern __int64 (*GameData_2089090[])();
extern __int64 (*GameData_20c91c8[])();
extern __int64 (*ReportInfo_Destructor_16a7490_ptr[])();
extern __int64 (*game_menu_UnitMakeSelectBody_vtable[])();
extern __int64 (*game_menu_anonymous_ProcHotelPart3Seq_vtable[])();
extern __int64 (*game_menu_anonymous_ProcSideStorySeq_vtable[])();
extern __int64 (*game_menu_anonymous_ReportInfo_vtable[])();
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212d890[2];
extern __int64* GameData_212dfc8;
extern __int64* GameData_212e030[4];
extern __int64* GameData_212e348;
extern __int64* GameData_212fc70[2];
extern __int64* GameData_21319e8[10];
extern __int64* GameData_2131a90[6];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 GameData_209f500;
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c610;
extern __int64 GameData_212c7b8[10];
extern __int64 GameData_2131c18[55];
extern __int64 GameData_21f4018[];
extern __int64 GameData_21f4228;
extern __int64 GameData_21f8638;
extern __int64 GameData_21f8640;
extern __int64 GameData_225d4f0;
extern __int64 GameData_2260e80;
extern __int64 GameData_2261508;
extern __int64 GameData_2261b60;
extern __int64 GameData_2261b68;
extern __int64 GameData_2261b70;
extern __int64 GameData_2261b80;
extern __int64 GameData_2261b90;
extern __int64 GameData_2261ba0;
extern __int64 GameData_2261ba8;
extern __int64 GameData_2261bb0;
extern __int64 GameData_2261bc0;
extern __int64 GameData_2261bd0;
extern __int64 GameData_2261be0;
extern __int64 GameData_2261be8;
extern __int64 GameData_2261bf0;
extern __int64 GameData_2261c00;
extern __int64 GameData_2261c10;
extern __int64 GameData_2261c20;
extern __int64 GameData_2261c28;
extern __int64 GameData_2261c30;
extern __int64 GameData_2261c40;
extern __int64 GameData_2261c50;
extern __int64 GameData_2261c60;
extern __int64 GameData_2261c68;
extern __int64 GameData_2261c70;
extern __int64 GameData_2261c80;
extern __int64 GameData_2261c90;
extern __int64 GameData_2261ca0;
extern __int64 GameData_2261ca8;
extern __int64 GameData_2261cb0;
extern __int64 GameData_2261cc0;
extern __int64 GameData_2261cd0;
extern __int64 GameData_2261ce0;
extern __int64 GameData_2261ce8;
extern __int64 GameData_2261cf0;
extern __int64 GameData_2261d00;
extern __int64 GameData_2261d10;
extern __int64 GameData_2261d20;
extern __int64 GameData_2261d28;
extern __int64 GameData_2261d30;
extern __int64 GameData_2261d40;
extern __int64 GameData_2261d50;
extern __int64 GameData_2261d60;
extern __int64 GameData_2261d68;
extern __int64 GameData_2261d70;
extern __int64 GameData_2261d80;
extern __int64 GameData_2261d90;
extern __int64 GameData_2261da0;
extern __int64 GameData_2261da8;
extern __int64 GameData_2261db0;
extern __int64 GameData_2261dc0;
extern __int64 GameData_2261dd0;
extern __int64 GameData_2261de0;
extern __int64 GameData_2261de8;
extern __int64 GameData_2261df0;
extern __int64 GameData_2261e00;
extern __int64 GameData_2261e10;
extern __int64 GameData_2261e20;
extern __int64 GameData_2261e28;
extern __int64 GameData_2261e30;
extern __int64 GameData_2261e40;
extern __int64 GameData_2261e50;
extern __int64 GameData_2261e60;
extern __int64 GameData_2261e68;
extern __int64 GameData_2261e70;
extern __int64 GameData_2261e80;
extern __int64 GameData_2261e90;
extern __int64 GameData_2261ea0;
extern __int64 GameData_2261ea8;
extern __int64 GameData_2261eb0;
extern __int64 GameData_2261ec0;
extern __int64 GameData_2261ed0;
extern __int64 GameData_2261ee0;
extern __int64 GameData_2261ee8;
extern __int64 GameData_2261ef0;
extern __int64 GameData_2261f00;
extern __int64 GameData_2261f10;
extern __int64 GameData_2261f20;
extern __int64 GameData_2261f28;
extern __int64 GameData_2261f30;
extern __int64 GameData_2261f40;
extern __int64 GameData_2261f50;
extern __int64 GameData_2261f60;
extern __int64 GameData_2261f68;
extern __int64 GameData_2261f70;
extern __int64 GameData_2261f80;
extern __int64 GameData_2261f90;
extern __int64 GameData_2261fa0;
extern __int64 GameData_2261fa8;
extern __int64 GameData_2261fb0;
extern __int64 GameData_2261fc0;
extern __int64 GameData_2261fd0;
extern __int64 GameData_2261fe0;
extern __int64 GameData_2261fe8;
extern __int64 GameData_2261ff0;
extern __int64 GameData_2262000;
extern __int64 GameData_2262010;
extern __int64 GameData_2262020;
extern __int64 GameData_2262028;
extern __int64 GameData_2262030;
extern __int64 GameData_2262040;
extern __int64 GameData_2262050;
extern __int64 GameData_2262060;
extern __int64 GameData_2262068;
extern __int64 GameData_2262070;
extern __int64 GameData_2262080;
extern __int64 GameData_2262090;
extern __int64 GameData_22620a0;
extern __int64 GameData_22620a8;
extern __int64 GameData_22620b0;
extern __int64 GameData_22620c0;
extern __int64 GameData_22620d0;
extern __int64 GameData_22620e0;
extern __int64 GameData_22620e8;
extern __int64 GameData_22620f0;
extern __int64 GameData_2262100;
extern __int64 GameData_2262110;
extern __int64 GameData_2262120;
extern __int64 GameData_2262128;
extern __int64 GameData_2262130;
extern __int64 GameData_2262140;
extern __int64 GameData_2262150;
extern __int64 GameData_2262160;
extern __int64 GameData_2262168;
extern __int64 GameData_2262170;
extern __int64 GameData_2262180;
extern __int64 GameData_2262190;
extern __int64 GameData_22621a8;
extern __int64 GameData_22621b0;
extern __int64 GameData_22621b8;
extern __int64 GameData_22621c8;
extern __int64 GameData_22621d8;
extern __int64 GameData_22621e8;
extern __int64 GameData_22621f0;
extern __int64 GameData_22621f8;
extern __int64 GameData_2262208;
extern __int64 GameData_2262218;
extern __int64 GameData_2262228;
extern __int64 GameData_2262230;
extern __int64 GameData_2262238;
extern __int64 GameData_2262248;
extern __int64 GameData_2262258;
extern __int64 GameData_2262268;
extern __int64 GameData_2262270;
extern __int64 GameData_2262278;
extern __int64 GameData_2262288;
extern __int64 GameData_2262298;
extern __int64 GameData_22622a8;
extern __int64 GameData_22622b0;
extern __int64 GameData_22622b8;
extern __int64 GameData_22622c8;
extern __int64 GameData_22622d8;
extern __int64 GameData_22622e8;
extern __int64 GameData_22622f0;
extern __int64 GameData_22622f8;
extern __int64 GameData_2262308;
extern __int64 GameData_2262318;
extern __int64 GameData_2262328;
extern __int64 GameData_2262330;
extern __int64 GameData_2262338;
extern __int64 GameData_2262348;
extern __int64 GameData_2262358;
extern __int64 GameData_2262368;
extern __int64 GameData_2262370;
extern __int64 GameData_2262378;
extern __int64 GameData_2262388;
extern __int64 GameData_2262398;
extern __int64 GameData_22623a8;
extern __int64 GameData_22623b0;
extern __int64 GameData_22623b8;
extern __int64 GameData_22623c8;
extern __int64 GameData_22623d8;
extern __int64 GameData_22623e8;
extern __int64 GameData_22623f0;
extern __int64 GameData_22623f8;
extern __int64 GameData_2262408;
extern __int64 GameData_2262418;
extern __int64 GameData_2262428;
extern __int64 GameData_2262430;
extern __int64 GameData_2262438;
extern __int64 GameData_2262448;
extern __int64 GameData_2262458;
extern __int64 GameData_2262468;
extern __int64 GameData_2262470;
extern __int64 GameData_2262478;
extern __int64 GameData_2262488;
extern __int64 GameData_2262498;
extern __int64 GameData_22624a8;
extern __int64 GameData_22624b0;
extern __int64 GameData_22624b8;
extern __int64 GameData_22624c8;
extern __int64 GameData_22624d8;
extern __int64 GameData_22624e8;
extern __int64 GameData_22624f0;
extern __int64 GameData_22624f8;
extern __int64 GameData_2262508;
extern __int64 GameData_2262518;
extern __int64 GameData_2262528;
extern __int64 GameData_2262530;
extern __int64 GameData_2262538;
extern __int64 GameData_2262548;
extern __int64 GameData_2262558;
extern __int64 GameData_2262568;
extern __int64 GameData_2262570;
extern __int64 GameData_2262578;
extern __int64 GameData_2262588;
extern __int64 GameData_2262598;
extern __int64 GameData_22625a8;
extern __int64 GameData_22625b0;
extern __int64 GameData_22625b8;
extern __int64 GameData_22625c8;
extern __int64 GameData_22625d8;
extern __int64 GameData_22625e8;
extern __int64 GameData_22625f0;
extern __int64 GameData_22625f8;
extern __int64 GameData_2262608;
extern __int64 GameData_2262618;
extern __int64 GameData_2262628;
extern __int64 GameData_2262630;
extern __int64 GameData_2262638;
extern __int64 GameData_2262648;
extern __int64 GameData_2262658;
extern __int64 GameData_2262668;
extern __int64 GameData_2262670;
extern __int64 GameData_2262678;
extern __int64 GameData_2262688;
extern __int64 GameData_2262698;
extern __int64 GameData_22626a8;
extern __int64 GameData_22626b0;
extern __int64 GameData_22626b8;
extern __int64 GameData_22626c8;
extern __int64 GameData_22626d8;
extern __int64 GameData_22626e8;
extern __int64 GameData_22626f0;
extern __int64 GameData_22626f8;
extern __int64 GameData_2262708;
extern __int64 GameData_2262718;
extern __int64 GameData_2262728;
extern __int64 GameData_2262730;
extern __int64 GameData_2262738;
extern __int64 GameData_2262748;
extern __int64 GameData_2262758;
extern __int64 GameData_2262768;
extern __int64 GameData_2262770;
extern __int64 GameData_2262778;
extern __int64 GameData_2262788;
extern __int64 GameData_2262798;
extern __int64 GameData_22627a8;
extern __int64 GameData_22627b0;
extern __int64 GameData_22627b8;
extern __int64 GameData_22627c8;
extern __int64 GameData_22627d8;
extern __int64 GameData_2263d60;
extern __int64 GameData_2263d68;
extern __int64 GameData_2263d70;
extern __int64 GameData_2263d80;
extern __int64 GameData_2263d90;
extern __int64 GameData_2263da0;
extern __int64 GameData_2263da8;
extern __int64 GameData_2263db0;
extern __int64 GameData_2263dc0;
extern __int64 GameData_2263dd0;
extern __int64 GameData_2263de8;
extern __int64 GameData_2263df0;
extern __int64 GameData_2263df8;
extern __int64 GameData_2263e08;
extern __int64 GameData_2263e18;
extern __int64 GameData_2263e28;
extern __int64 GameData_2263e30;
extern __int64 GameData_2263e38;
extern __int64 GameData_2263e48;
extern __int64 GameData_2263e58;
extern __int64 GameData_2263e70;
extern __int64 GameData_2263e78;
extern __int64 GameData_2263e80;
extern __int64 GameData_2263e90;
extern __int64 GameData_2263ea0;
extern __int64 GameData_2263eb0;
extern __int64 GameData_2263eb8;
extern __int64 GameData_2263ec0;
extern __int64 GameData_2263ed0;
extern __int64 GameData_2263ee0;
extern __int64 GameData_2263ef8;
extern __int64 GameData_2263f00;
extern __int64 GameData_2263f08;
extern __int64 GameData_2263f18;
extern __int64 GameData_2263f28;
extern __int64 GameData_2263f38;
extern __int64 GameData_2263f40;
extern __int64 GameData_2263f48;
extern __int64 GameData_2263f58;
extern __int64 GameData_2263f68;
extern __int64 GameData_2263f80;
extern __int64 GameData_2263f88;
extern __int64 GameData_2263f90;
extern __int64 GameData_2263fa0;
extern __int64 GameData_2263fb0;
extern __int64 GameData_2263fc0;
extern __int64 GameData_2263fc8;
extern __int64 GameData_2263fd0;
extern __int64 GameData_2263fe0;
extern __int64 GameData_2263ff0;
extern __int64 GameData_2264000;
extern __int64 GameData_2264008;
extern __int64 GameData_2264010;
extern __int64 GameData_2264020;
extern __int64 GameData_2264030;
extern __int64 GameData_2264048;
extern __int64 GameData_2264050;
extern __int64 GameData_2264058;
extern __int64 GameData_2264068;
extern __int64 GameData_2264078;
extern __int64 GameData_2264088;
extern __int64 GameData_2264090;
extern __int64 GameData_2264098;
extern __int64 GameData_22640a8;
extern __int64 GameData_22640b8;
extern __int64 GameData_22640c8;
extern __int64 GameData_22640d0;
extern __int64 GameData_22640d8;
extern __int64 GameData_22640e8;
extern __int64 GameData_22640f8;
extern __int64 GameData_2264110;
extern __int64 GameData_2264118;
extern __int64 GameData_2264120;
extern __int64 GameData_2264130;
extern __int64 GameData_2264140;
extern __int64 GameData_2264150;
extern __int64 GameData_2264158;
extern __int64 GameData_2264160;
extern __int64 GameData_2264170;
extern __int64 GameData_2264180;
extern __int64 GameData_2264190;
extern __int64 GameData_2264198;
extern __int64 GameData_22641a0;
extern __int64 GameData_22641b0;
extern __int64 GameData_22641c0;
extern __int64 GameData_22641d0;
extern __int64 GameData_22641d8;
extern __int64 GameData_22641e0;
extern __int64 GameData_22641f0;
extern __int64 GameData_2264200;
extern __int64 GameData_2264218;
extern __int64 GameData_2264220;
extern __int64 GameData_2264228;
extern __int64 GameData_2264238;
extern __int64 GameData_2264248;
extern __int64 GameData_2264258;
extern __int64 GameData_2264260;
extern __int64 GameData_2264268;
extern __int64 GameData_2264278;
extern __int64 GameData_2264288;
extern __int64 GameData_2264298;
extern __int64 GameData_22642a0;
extern __int64 GameData_22642a8;
extern __int64 GameData_22642b8;
extern __int64 GameData_22642c8;
extern __int64 GameData_22642d8;
extern __int64 GameData_22642e0;
extern __int64 GameData_22642e8;
extern __int64 GameData_22642f8;
extern __int64 GameData_2264308;
extern __int64 GameData_2264320;
extern __int64 GameData_2264328;
extern __int64 GameData_2264330;
extern __int64 GameData_2264340;
extern __int64 GameData_2264350;
extern __int64 GameData_2264360;
extern __int64 GameData_2264368;
extern __int64 GameData_2264370;
extern __int64 GameData_2264380;
extern __int64 GameData_2264390;
extern __int64 GameData_22643a0;
extern __int64 GameData_22643a8;
extern __int64 GameData_22643b0;
extern __int64 GameData_22643c0;
extern __int64 GameData_22643d0;
extern __int64 GameData_22643e0;
extern __int64 GameData_22643e8;
extern __int64 GameData_22643f0;
extern __int64 GameData_2264400;
extern __int64 GameData_2264410;
extern __int64 GameData_2264428;
extern __int64 GameData_2264430;
extern __int64 GameData_2264438;
extern __int64 GameData_2264448;
extern __int64 GameData_2264458;
extern __int64 GameData_2264468;
extern __int64 GameData_2264470;
extern __int64 GameData_2264478;
extern __int64 GameData_2264488;
extern __int64 GameData_2264498;
extern __int64 GameData_22644a8;
extern __int64 GameData_22644b0;
extern __int64 GameData_22644b8;
extern __int64 GameData_22644c8;
extern __int64 GameData_22644d8;
extern __int64 GameData_22644e8;
extern __int64 GameData_22644f0;
extern __int64 GameData_22644f8;
extern __int64 GameData_2264508;
extern __int64 GameData_2264518;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 msg_MessageManager_instance_;
extern char** msg_MessageManager_empty_text__ptr;
extern char GameData_1a9f09e;
extern char GameData_2261b58;
extern char GameData_2261b98;
extern char GameData_2261bd8;
extern char GameData_2261c18;
extern char GameData_2261c58;
extern char GameData_2261c98;
extern char GameData_2261cd8;
extern char GameData_2261d18;
extern char GameData_2261d58;
extern char GameData_2261d98;
extern char GameData_2261dd8;
extern char GameData_2261e18;
extern char GameData_2261e58;
extern char GameData_2261e98;
extern char GameData_2261ed8;
extern char GameData_2261f18;
extern char GameData_2261f58;
extern char GameData_2261f98;
extern char GameData_2261fd8;
extern char GameData_2262018;
extern char GameData_2262058;
extern char GameData_2262098;
extern char GameData_22620d8;
extern char GameData_2262118;
extern char GameData_2262158;
extern char GameData_22621a0;
extern char GameData_22621e0;
extern char GameData_2262220;
extern char GameData_2262260;
extern char GameData_22622a0;
extern char GameData_22622e0;
extern char GameData_2262320;
extern char GameData_2262360;
extern char GameData_22623a0;
extern char GameData_22623e0;
extern char GameData_2262420;
extern char GameData_2262460;
extern char GameData_22624a0;
extern char GameData_22624e0;
extern char GameData_2262520;
extern char GameData_2262560;
extern char GameData_22625a0;
extern char GameData_22625e0;
extern char GameData_2262620;
extern char GameData_2262660;
extern char GameData_22626a0;
extern char GameData_22626e0;
extern char GameData_2262720;
extern char GameData_2262760;
extern char GameData_22627a0;
extern char GameData_2263d58;
extern char GameData_2263d98;
extern char GameData_2263de0;
extern char GameData_2263e20;
extern char GameData_2263e68;
extern char GameData_2263ea8;
extern char GameData_2263ef0;
extern char GameData_2263f30;
extern char GameData_2263f78;
extern char GameData_2263fb8;
extern char GameData_2263ff8;
extern char GameData_2264040;
extern char GameData_2264080;
extern char GameData_22640c0;
extern char GameData_2264108;
extern char GameData_2264148;
extern char GameData_2264188;
extern char GameData_22641c8;
extern char GameData_2264210;
extern char GameData_2264250;
extern char GameData_2264290;
extern char GameData_22642d0;
extern char GameData_2264318;
extern char GameData_2264358;
extern char GameData_2264398;
extern char GameData_22643d8;
extern char GameData_2264420;
extern char GameData_2264460;
extern char GameData_22644a0;
extern char GameData_22644e0;
extern int GameData_22594e8;
extern int GameData_2261b78;
extern int GameData_2261b88;
extern int GameData_2261bb8;
extern int GameData_2261bc8;
extern int GameData_2261bf8;
extern int GameData_2261c08;
extern int GameData_2261c38;
extern int GameData_2261c48;
extern int GameData_2261c78;
extern int GameData_2261c88;
extern int GameData_2261cb8;
extern int GameData_2261cc8;
extern int GameData_2261cf8;
extern int GameData_2261d08;
extern int GameData_2261d38;
extern int GameData_2261d48;
extern int GameData_2261d78;
extern int GameData_2261d88;
extern int GameData_2261db8;
extern int GameData_2261dc8;
extern int GameData_2261df8;
extern int GameData_2261e08;
extern int GameData_2261e38;
extern int GameData_2261e48;
extern int GameData_2261e78;
extern int GameData_2261e88;
extern int GameData_2261eb8;
extern int GameData_2261ec8;
extern int GameData_2261ef8;
extern int GameData_2261f08;
extern int GameData_2261f38;
extern int GameData_2261f48;
extern int GameData_2261f78;
extern int GameData_2261f88;
extern int GameData_2261fb8;
extern int GameData_2261fc8;
extern int GameData_2261ff8;
extern int GameData_2262008;
extern int GameData_2262038;
extern int GameData_2262048;
extern int GameData_2262078;
extern int GameData_2262088;
extern int GameData_22620b8;
extern int GameData_22620c8;
extern int GameData_22620f8;
extern int GameData_2262108;
extern int GameData_2262138;
extern int GameData_2262148;
extern int GameData_2262178;
extern int GameData_2262188;
extern int GameData_22621c0;
extern int GameData_22621d0;
extern int GameData_2262200;
extern int GameData_2262210;
extern int GameData_2262240;
extern int GameData_2262250;
extern int GameData_2262280;
extern int GameData_2262290;
extern int GameData_22622c0;
extern int GameData_22622d0;
extern int GameData_2262300;
extern int GameData_2262310;
extern int GameData_2262340;
extern int GameData_2262350;
extern int GameData_2262380;
extern int GameData_2262390;
extern int GameData_22623c0;
extern int GameData_22623d0;
extern int GameData_2262400;
extern int GameData_2262410;
extern int GameData_2262440;
extern int GameData_2262450;
extern int GameData_2262480;
extern int GameData_2262490;
extern int GameData_22624c0;
extern int GameData_22624d0;
extern int GameData_2262500;
extern int GameData_2262510;
extern int GameData_2262540;
extern int GameData_2262550;
extern int GameData_2262580;
extern int GameData_2262590;
extern int GameData_22625c0;
extern int GameData_22625d0;
extern int GameData_2262600;
extern int GameData_2262610;
extern int GameData_2262640;
extern int GameData_2262650;
extern int GameData_2262680;
extern int GameData_2262690;
extern int GameData_22626c0;
extern int GameData_22626d0;
extern int GameData_2262700;
extern int GameData_2262710;
extern int GameData_2262740;
extern int GameData_2262750;
extern int GameData_2262780;
extern int GameData_2262790;
extern int GameData_22627c0;
extern int GameData_22627d0;
extern int GameData_2263d78;
extern int GameData_2263d88;
extern int GameData_2263db8;
extern int GameData_2263dc8;
extern int GameData_2263e00;
extern int GameData_2263e10;
extern int GameData_2263e40;
extern int GameData_2263e50;
extern int GameData_2263e88;
extern int GameData_2263e98;
extern int GameData_2263ec8;
extern int GameData_2263ed8;
extern int GameData_2263f10;
extern int GameData_2263f20;
extern int GameData_2263f50;
extern int GameData_2263f60;
extern int GameData_2263f98;
extern int GameData_2263fa8;
extern int GameData_2263fd8;
extern int GameData_2263fe8;
extern int GameData_2264018;
extern int GameData_2264028;
extern int GameData_2264060;
extern int GameData_2264070;
extern int GameData_22640a0;
extern int GameData_22640b0;
extern int GameData_22640e0;
extern int GameData_22640f0;
extern int GameData_2264128;
extern int GameData_2264138;
extern int GameData_2264168;
extern int GameData_2264178;
extern int GameData_22641a8;
extern int GameData_22641b8;
extern int GameData_22641e8;
extern int GameData_22641f8;
extern int GameData_2264230;
extern int GameData_2264240;
extern int GameData_2264270;
extern int GameData_2264280;
extern int GameData_22642b0;
extern int GameData_22642c0;
extern int GameData_22642f0;
extern int GameData_2264300;
extern int GameData_2264338;
extern int GameData_2264348;
extern int GameData_2264378;
extern int GameData_2264388;
extern int GameData_22643b8;
extern int GameData_22643c8;
extern int GameData_22643f8;
extern int GameData_2264408;
extern int GameData_2264440;
extern int GameData_2264450;
extern int GameData_2264480;
extern int GameData_2264490;
extern int GameData_22644c0;
extern int GameData_22644d0;
extern int GameData_2264500;
extern int GameData_2264510;
extern int game_script_hub_ui_g_talk_result;
float GameRoutine_618640(int, float result, float, float, float);
int __cxa_guard_acquire(__int64);
unsigned __int64 Registration_a51fe0(_QWORD*, __int64);
void* GameHr_67ed20(_QWORD*);
void* game_97b2f0(__int64);
void BasicInfo_15e5b50(__int64, __int64*, __int64);
void BasicMenu_16e1f40(_QWORD*, __int64, __int64);
void GameHr_a51e10(__int64, unsigned int, int, int);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_18c9b10(__int128*, __int64, int);
void GameRoutine_190a0c0(float*, __int64, float*, _QWORD*, __int64);
void LayoutAccessor_1562060(__int64*, const char*, const char*);
void __attribute__((noreturn)) GameRoutine_8123d0();
void __cxa_guard_release(__int64);
void gfx_render_b3aee0(float32x4_t*);
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_menu_1630040(__int64 a1);
__int64 game_menu_16308f0();
__int64 game_menu_16a6de0(__int64 a1);
__int64 game_menu_16af0a0(__int64 a1, __int64 a2);
__int64 game_menu_16af630(__int64 a1);
__int64 game_menu_16d1640(__int64 result);
__int64 game_menu_16d2250(__int64 a1);
__int64 game_menu_16ed000(_QWORD* a1);
__int64 game_menu_16ed430(_QWORD* a1, char a2, char a3);
__int64 game_menu_16ef9a0(__int64* a1);
void game_menu_16efdf0(__int64 a1, __int64 a2);
__int64 game_menu_16f5ea0(__int64 a1);
__int64 game_menu_17880d0(__int64* a1, __int64 a2);
__int64 game_menu_1789b80(__int64* a1);
__int64 game_menu_1789c60(__int64 a1);
__int64 game_menu_178c6c0(_QWORD* a1);
__int64 game_menu_1791ae0(_QWORD* a1, __int64* a2, unsigned __int8* a3,
                          _QWORD* a4, unsigned __int8* a5);
__int64 game_menu_1798540(__int64 a1, __int64 a2, __int64 a3, __int64* a4,
                          char a5, char a6);
__int64 game_menu_1798e70(__int64 a1, __int64 a2, __int64 a3, __int64* a4,
                          char a5);
__int64 game_menu_17992d0(__int64 a1, __int64 a2, __int64 a3, __int64* a4,
                          char a5);
__int64 game_menu_1799d90(__int64 a1, __int64 a2, __int64 a3, __int64* a4,
                          char a5);
void game_menu_179ac50(__int64 a1, __int64 a2, int a3);

__int64 game_menu_1630040(__int64 a1)
{
  __int64 result;
  int v3;
  __int64 v4;
  __int64 v5;
  __int16 v6;
  _QWORD v7[25];

  if (*(_DWORD*)(a1 + 152) == 3) {
    result = (__int64)UnitMake_1631b00((__int64*)a1, 3);
    v3 = 4;
    v4 = *(_QWORD*)(a1 + 8);
    if (v4 != 0) {
      goto LABEL_10;
    }
  }
  else {
    UnitMake_1631b00((__int64*)a1, 5);
    v5 = GameData_225d4f0;
    result = snd_fnd_WeakHandle_isValid((__int64*)(GameData_225d4f0 + 224));
    if ((result & 1) != 0) {
      snd_Fade_Fade_10c830((__int64)v7, 0x0.0p+0f);
      snd_stop_ffc40((__int64*)(v5 + 224), (__int64)v7);
      result = snd_Fade_Destroy_Fade(v7);
    }
    v3 = 6;
    v4 = *(_QWORD*)(a1 + 8);
    if (v4 != 0) {
      while (1) {
      LABEL_10:
        if (*(_BYTE*)v4 == 2) {
          if (*(_DWORD*)(v4 + 32) == v3) {
            v6 = *(_WORD*)(a1 + 136);
            *(_QWORD*)(a1 + 16) = v4;
            *(_WORD*)(a1 + 136) = v6 & 0xFF7F;
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
  return result;
}

__int64 game_menu_16308f0()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD v7[25];

  v0 = *GameData_2131a90[0];
  v1 = *(_QWORD*)(*GameData_2131a90[0] + 152);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                            memory_order_acquire) &
       1) == 0) {
    v5 = v1;
    v6 = v0;
    v3 = __cxa_guard_acquire((__int64)&GameData_21a6190);
    v1 = v5;
    v0 = v6;
    if (v3 != 0) {
      v4 = *((_QWORD*)GameData_212c558 + 1);
      *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
      *((_QWORD*)&GameData_21a6180 + 1) = v4;
      __cxa_guard_release((__int64)&GameData_21a6190);
      v1 = v5;
      v0 = v6;
    }
  }
  *(_OWORD*)(v1 + 48) = GameData_21a6180;
  *(_OWORD*)(*(_QWORD*)(v0 + 152) + 32LL) = GameData_1a82a10;
  *(_DWORD*)(*(_QWORD*)(v0 + 152) + 80LL) = 1077936128;
  *(_QWORD*)(*(_QWORD*)(v0 + 152) + 84LL) = 0;
  gfx_render_b3aee0(*(float32x4_t**)(v0 + 152));
  snd_Fade_Fade_10c830((__int64)v7, -0x1.0000000000000p+0f);
  return snd_Fade_Destroy_Fade(v7);
}

__int64 game_menu_16a6de0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  struct {
    __int64 (**v15)();
    __int64 v16;
    char gap112_[16];
    __int64* v17;
  } v15_;
  const char* v18;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      224, 16, 0);
  *(_QWORD*)v2 = 0;
  *(_QWORD*)(v2 + 8) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 24) = 0;
  *(_QWORD*)(v2 + 32) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)(v2 + 96) = 0;
  *(_QWORD*)(v2 + 104) = 0;
  *(_QWORD*)(v2 + 112) = 0;
  *(_QWORD*)(v2 + 120) = 0;
  *(_QWORD*)(v2 + 128) = 0;
  *(_QWORD*)(v2 + 136) = 0;
  *(_QWORD*)(v2 + 144) = 0;
  *(_QWORD*)(v2 + 152) = 0;
  *(_QWORD*)(v2 + 160) = 0;
  *(_QWORD*)(v2 + 168) = 0;
  *(_QWORD*)(v2 + 176) = 0;
  *(_QWORD*)(v2 + 184) = 0;
  *(_QWORD*)(v2 + 192) = 0;
  *(_QWORD*)(v2 + 200) = 0;
  *(_QWORD*)(v2 + 208) = 0;
  *(_QWORD*)(v2 + 216) = 0;
  v15_.v15 = nullptr;
  v15_.v16 = 0;
  BasicInfo_15e5b50(v2, (__int64*)&v15_.v15, 0);
  v3 = v15_.v16;
  if (v15_.v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15_.v16 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  if (GameData_2260e80 == 0) {
    GameData_2260e80 = v2;
  }
  *(_BYTE*)(v2 + 216) = 0;
  *(_QWORD*)v2 = game_menu_anonymous_ReportInfo_vtable;
  *(_QWORD*)(v2 + 208) = ReportInfo_Destructor_16a7490_ptr;
  if (a1 != 0) {
    v4 = *(_QWORD*)(a1 + 40);
    if (v4 != 0) {
      *(_QWORD*)(v4 + 48) = v2;
      *(_QWORD*)(v2 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v2;
    *(_QWORD*)(v2 + 24) = "ReportInfo";
    *(_QWORD*)(v2 + 32) = a1;
    *(_DWORD*)(v2 + 140) = (unsigned int)game_HashString32("ReportInfo");
    *(_QWORD*)(v2 + 64) = 0;
    *(_QWORD*)(v2 + 72) = 24;
    *(_QWORD*)(v2 + 80) = 1;
    *(_QWORD*)(v2 + 8) = &GameData_2174af8;
    *(_QWORD*)(v2 + 16) = &GameData_2174af8;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 32LL))(v2);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 136LL))(v2) & 1) != 0 &&
        (*(_WORD*)(v2 + 136) & 0x100) == 0) {
      *(_WORD*)(v2 + 136) |= 0x100u;
    }
  }
  else if ((*(_WORD*)(v2 + 136) & 1) == 0) {
    ProcInst_657a50(v2, 1);
  }
  *(_BYTE*)(v2 + 216) = 0;
  v18 = "MID_Save_Continue_Confirm";
  v15_.v15 = GameData_2089010;
  v15_.v16 = a1;
  v11_.v12 = v11_.v11;
  v15_.v17 = (__int64*)&v15_.v15;
  v13_.v14 = v13_.v13;
  v13_.v13[0] = GameData_2089090;
  v11_.v11[0] = GameData_2089090;
  v5 = MapSortieMenu_871860(a1, (__int64)&v18, (__int64)&v15_.v15,
                            (__int64)v13_.v13, (__int64)v11_.v11);
  if (v11_.v12 == v11_.v11) {
    v6 = 32;
  }
  else {
    if (v11_.v12 == nullptr) {
      goto LABEL_19;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v11_.v12 + v6))((__int64)v11_.v12);
LABEL_19:
  if (v13_.v14 == v13_.v13) {
    v7 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      goto LABEL_24;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v13_.v14 + v7))((__int64)v13_.v14);
LABEL_24:
  if (v15_.v17 == (__int64*)&v15_.v15) {
    v8 = 32;
  }
  else {
    if (v15_.v17 == nullptr) {
      goto LABEL_29;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v15_.v17 + v8))((__int64)v15_.v17);
LABEL_29:
  if (v5 != 0) {
    v9 = *(_DWORD*)(v5 + 356);
    *(_DWORD*)(v5 + 372) = 0;
    *(_DWORD*)(v5 + 356) = v9 | 1;
    *(_QWORD*)(v5 + 364) = 0xC35C000000000000LL;
    *(_BYTE*)(v5 + 1301) = 1;
  }
  return v5;
}

__int64 game_menu_16af0a0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  int v8;
  int v9;
  __int64* v10;
  __int16* v11;
  int v12;
  __int64 v13;
  struct {
    unsigned __int64* v15;
    int v16;
    unsigned __int8 v17;
  } v15_;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2262198,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2262198) != 0) {
    GameData_2261cf8 = 3;
    GameData_2261be0 = 0;
    GameData_2261be8 = (__int64)GameRoutine_16afaa0;
    GameData_2261e28 = (__int64)GameRoutine_16afaa0;
    GameData_2261f28 = (__int64)GameRoutine_16afaa0;
    GameData_2261b60 = 0;
    GameData_2261b68 = 0;
    GameData_2261b78 = 1;
    GameData_2261ba0 = 0;
    GameData_2261ba8 = (__int64)GameRoutine_16afa80;
    GameData_2261b70 = 0;
    GameData_2261d20 = 0;
    GameData_2261d28 = (__int64)GameRoutine_16afdf0;
    GameData_2261f68 = (__int64)ProcNextSeq_16b0340;
    GameData_2261b98 = 13;
    GameData_2261bd8 = 13;
    GameData_2261c58 = 13;
    GameData_2261c60 = 0;
    GameData_2261c68 = (__int64)GameRoutine_16afc20;
    GameData_2261db8 = 4;
    GameData_2261ff8 = 6;
    GameData_2261d18 = 13;
    GameData_2261dd8 = 13;
    GameData_2261e18 = 13;
    GameData_2261ed8 = 13;
    GameData_2261f18 = 13;
    GameData_2261f58 = 13;
    GameData_2261de8 = (__int64)game_menu_anonymous_ProcNextSeq_CheckNextFree;
    GameData_2262018 = 13;
    GameData_2262028 = (__int64)ProcNextSeq_16b0370;
    GameData_2262058 = 13;
    GameData_2262098 = 13;
    GameData_2261b58 = 2;
    GameData_2261b80 = 0;
    GameData_2261eb8 = 5;
    GameData_2261b88 = 0;
    GameData_2261b90 = 0;
    GameData_2261bb0 = 0;
    GameData_2261bb8 = 0;
    GameData_2261bc0 = 0;
    GameData_2261bc8 = 0;
    GameData_2261bd0 = 0;
    GameData_2261bf0 = 0;
    GameData_2261bf8 = 0;
    GameData_2261c00 = 0;
    GameData_2261c08 = 0;
    GameData_2261c10 = 0;
    GameData_2261c18 = 2;
    GameData_2261c28 = 0;
    GameData_2261c30 = 0;
    GameData_2261c20 = 0;
    GameData_2261c38 = 2;
    GameData_2261c40 = 0;
    GameData_2261c48 = 0;
    GameData_2261c50 = 0;
    GameData_2261c70 = 0;
    GameData_2261c78 = 0;
    GameData_2261c80 = 0;
    GameData_2261c88 = 0;
    GameData_2261c90 = 0;
    GameData_2261c98 = 12;
    GameData_2261ca0 = 0;
    GameData_2261ca8 = 0;
    GameData_2261cb0 = 0;
    GameData_2261cb8 = 7;
    GameData_2261cc0 = 0;
    GameData_2261cc8 = 0;
    GameData_2261cd0 = 0;
    GameData_2261cd8 = 2;
    GameData_2261ce0 = 0;
    GameData_2261ce8 = 0;
    GameData_2261cf0 = 0;
    GameData_2261d00 = 0;
    GameData_2261d08 = 0;
    GameData_2261d10 = 0;
    GameData_2261d30 = 0;
    GameData_2261d38 = 0;
    GameData_2261d40 = 0;
    GameData_2261d48 = 0;
    GameData_2261d50 = 0;
    GameData_2261d58 = 12;
    GameData_2261d70 = 0;
    GameData_2261d68 = 0;
    GameData_2261d60 = 0;
    GameData_2261d78 = 7;
    GameData_2261d80 = 0;
    GameData_2261d88 = 0;
    GameData_2261d90 = 0;
    GameData_2261d98 = 2;
    GameData_2261db0 = 0;
    GameData_2261da8 = 0;
    GameData_2261da0 = 0;
    GameData_2261dc0 = 0;
    GameData_2261dc8 = 0;
    GameData_2261dd0 = 0;
    GameData_2261de0 = 0;
    GameData_2261df0 = 0;
    GameData_2261df8 = 0;
    GameData_2261e00 = 0;
    GameData_2261e08 = 0;
    GameData_2261e10 = 0;
    GameData_2261e20 = 0;
    GameData_2261e30 = 0;
    GameData_2261e38 = 0;
    GameData_2261e40 = 0;
    GameData_2261e48 = 0;
    GameData_2261e50 = 0;
    GameData_2261e58 = 12;
    GameData_2261e70 = 0;
    GameData_2261e68 = 0;
    GameData_2261e60 = 0;
    GameData_2261e78 = 7;
    GameData_2261e80 = 0;
    GameData_2261e88 = 0;
    GameData_2261e90 = 0;
    GameData_2261e98 = 2;
    GameData_2261ea0 = 0;
    GameData_2261ea8 = 0;
    GameData_2261eb0 = 0;
    GameData_2261ec0 = 0;
    GameData_2261ec8 = 0;
    GameData_2261ed0 = 0;
    GameData_2261ee0 = 0;
    GameData_2261ee8 =
        (__int64)game_menu_anonymous_ProcNextSeq_CheckFree_16b0100;
    GameData_2261ef0 = 0;
    GameData_2261ef8 = 0;
    GameData_2261f00 = 0;
    GameData_2261f08 = 0;
    GameData_2261f10 = 0;
    GameData_2261f20 = 0;
    GameData_2261f30 = 0;
    GameData_2261f38 = 0;
    GameData_2261f40 = 0;
    GameData_2261f48 = 0;
    GameData_2261f50 = 0;
    GameData_2261f60 = 0;
    GameData_2261f70 = 0;
    GameData_2261f78 = 0;
    GameData_2261f80 = 0;
    GameData_2261f88 = 0;
    GameData_2261f90 = 0;
    GameData_2261f98 = 12;
    GameData_2261fb0 = 0;
    GameData_2261fa8 = 0;
    GameData_2261fa0 = 0;
    GameData_2261fb8 = 7;
    GameData_2261fc0 = 0;
    GameData_2261fc8 = 0;
    GameData_2261fd0 = 0;
    GameData_2261fd8 = 2;
    GameData_2261fe0 = 0;
    GameData_2261fe8 = 0;
    GameData_2261ff0 = 0;
    GameData_2262000 = 0;
    GameData_2262008 = 0;
    GameData_2262010 = 0;
    GameData_2262020 = 0;
    GameData_2262030 = 0;
    GameData_2262038 = 0;
    GameData_2262040 = 0;
    GameData_2262048 = 0;
    GameData_2262050 = 0;
    GameData_2262060 = 0;
    GameData_2262068 = (__int64)ProcNextSeq_16b0680;
    GameData_2262070 = 0;
    GameData_2262078 = 0;
    GameData_2262080 = 0;
    GameData_2262088 = 0;
    GameData_2262090 = 0;
    GameData_22620a0 = 0;
    GameData_22620a8 = (__int64)ProcNextSeq_16b06e0;
    GameData_22620b0 = 0;
    GameData_22620b8 = 0;
    GameData_22620c0 = 0;
    GameData_22620c8 = 0;
    GameData_22620d0 = 0;
    GameData_22620d8 = 12;
    GameData_22620f0 = 0;
    GameData_22620e8 = 0;
    GameData_22620e0 = 0;
    GameData_22620f8 = 7;
    GameData_2262100 = 0;
    GameData_2262108 = 0;
    GameData_2262110 = 0;
    GameData_2262118 = 2;
    GameData_2262120 = 0;
    GameData_2262128 = 0;
    GameData_2262130 = 0;
    GameData_2262138 = 7;
    GameData_2262140 = 0;
    GameData_2262148 = 0;
    GameData_2262150 = 0;
    GameData_2262158 = 0;
    GameData_2262180 = 0;
    GameData_2262188 = 0;
    GameData_2262190 = 0;
    GameData_2262178 = 0;
    GameData_2262170 = 0;
    GameData_2262168 = 0;
    GameData_2262160 = 0;
    __cxa_guard_release((__int64)&GameData_2262198);
  }
  game_script_hub_ui_g_talk_result = 0;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      288, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  game_ProcInst_Register(v4);
  *(_QWORD*)(v4 + 152) = 0;
  *(_QWORD*)(v4 + 192) = 0;
  *(_WORD*)(v4 + 208) = 0;
  *(_QWORD*)(v4 + 232) = 0;
  *(_QWORD*)(v4 + 240) = 0;
  *(_BYTE*)(v4 + 248) = 0;
  *(_QWORD*)(v4 + 256) = 0;
  *(_BYTE*)(v4 + 264) = 0;
  *(_BYTE*)(v4 + 276) = 0;
  GameData_2261508 = v4;
  *(_QWORD*)v4 = game_menu_anonymous_ProcSideStorySeq_vtable;
  v6 = *(_QWORD**)GameData_212c7b8[0];
  *(_BYTE*)(*(_QWORD*)GameData_212c7b8[0] + 128LL) = 1;
  Registration_a51fe0(&v15_.v15, a2);
  v7 = GameSideStoryData_12b56c0(v6, &v15_.v15);
  *(_QWORD*)(v4 + 256) = v7;
  if (*(_BYTE*)(v7 + 22) == 1) {
    v15_.v15 = *(unsigned __int64**)(v7 + 10);
    v15_.v16 = *(_DWORD*)(v7 + 18);
    v8 = 1;
  }
  else {
    GameSideStoryData_12b3ba0((void*)((__int64)&v15_.v15), v7);
    v8 = v15_.v17;
  }
  v9 = *(unsigned __int8*)(v4 + 276);
  v10 = (__int64*)(v4 + 264);
  if (v9 == v8) {
    if ((v9 & 1) == 0) {
      return ProcInst_657850(v4, (__int64)&GameData_2261b58, (__int64)"T", 1,
                             a1);
    }
    *v10 = (__int64)v15_.v15;
    *(_DWORD*)(v4 + 272) = v15_.v16;
    if ((v8 & 1) == 0) {
      GameRoutine_8123d0();
    }
  }
  else {
    if (*(_BYTE*)(v4 + 276) != 0) {
      *(_BYTE*)(v4 + 276) = 0;
      return ProcInst_657850(v4, (__int64)&GameData_2261b58, (__int64)"T", 1,
                             a1);
    }
    *(_QWORD*)(v4 + 264) = v15_.v15;
    *(_DWORD*)(v4 + 272) = v15_.v16;
    *(_BYTE*)(v4 + 276) = 1;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v11 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v11 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v12 = Dir_70e760(v11, (__int16*)(v4 + 264));
  v13 = *v10;
  *(_DWORD*)(v4 + 232) = v12;
  *(_QWORD*)(v4 + 236) = v13;
  *(_DWORD*)(v4 + 244) = *(_DWORD*)(v4 + 272);
  return ProcInst_657850(v4, (__int64)&GameData_2261b58, (__int64)"T", 1, a1);
}

__int64 game_menu_16af630(__int64 a1)
{
  _QWORD* v2;
  int v3;
  __int64 v5;
  int v6;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22627e0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_22627e0) != 0) {
    GameData_2262340 = 3;
    GameData_2262228 = 0;
    GameData_2262230 = (__int64)GameRoutine_16afaa0;
    GameData_2262470 = (__int64)GameRoutine_16afaa0;
    GameData_2262570 = (__int64)GameRoutine_16afaa0;
    GameData_22621a8 = 0;
    GameData_22621b0 = 0;
    GameData_22621c0 = 1;
    GameData_22621e8 = 0;
    GameData_22621f0 = (__int64)GameRoutine_16afa80;
    GameData_22621b8 = 0;
    GameData_2262368 = 0;
    GameData_2262370 = (__int64)GameRoutine_16afdf0;
    GameData_22625b0 = (__int64)ProcNextSeq_16b0340;
    GameData_22621e0 = 13;
    GameData_2262220 = 13;
    GameData_22622a0 = 13;
    GameData_22622a8 = 0;
    GameData_22622b0 = (__int64)GameRoutine_16afc20;
    GameData_2262400 = 4;
    GameData_2262640 = 6;
    GameData_2262360 = 13;
    GameData_2262420 = 13;
    GameData_2262460 = 13;
    GameData_2262520 = 13;
    GameData_2262560 = 13;
    GameData_22625a0 = 13;
    GameData_2262430 = (__int64)game_menu_anonymous_ProcNextSeq_CheckNextFree;
    GameData_2262660 = 13;
    GameData_2262670 = (__int64)ProcNextSeq_16b0370;
    GameData_22626a0 = 13;
    GameData_22626e0 = 13;
    GameData_22621a0 = 2;
    GameData_22621c8 = 0;
    GameData_2262500 = 5;
    GameData_22621d0 = 0;
    GameData_22621d8 = 0;
    GameData_22621f8 = 0;
    GameData_2262200 = 0;
    GameData_2262208 = 0;
    GameData_2262210 = 0;
    GameData_2262218 = 0;
    GameData_2262238 = 0;
    GameData_2262240 = 0;
    GameData_2262248 = 0;
    GameData_2262250 = 0;
    GameData_2262258 = 0;
    GameData_2262260 = 2;
    GameData_2262270 = 0;
    GameData_2262278 = 0;
    GameData_2262268 = 0;
    GameData_2262280 = 2;
    GameData_2262288 = 0;
    GameData_2262290 = 0;
    GameData_2262298 = 0;
    GameData_22622b8 = 0;
    GameData_22622c0 = 0;
    GameData_22622c8 = 0;
    GameData_22622d0 = 0;
    GameData_22622d8 = 0;
    GameData_22622e0 = 12;
    GameData_22622e8 = 0;
    GameData_22622f0 = 0;
    GameData_22622f8 = 0;
    GameData_2262300 = 7;
    GameData_2262308 = 0;
    GameData_2262310 = 0;
    GameData_2262318 = 0;
    GameData_2262320 = 2;
    GameData_2262328 = 0;
    GameData_2262330 = 0;
    GameData_2262338 = 0;
    GameData_2262348 = 0;
    GameData_2262350 = 0;
    GameData_2262358 = 0;
    GameData_2262378 = 0;
    GameData_2262380 = 0;
    GameData_2262388 = 0;
    GameData_2262390 = 0;
    GameData_2262398 = 0;
    GameData_22623a0 = 12;
    GameData_22623b8 = 0;
    GameData_22623b0 = 0;
    GameData_22623a8 = 0;
    GameData_22623c0 = 7;
    GameData_22623c8 = 0;
    GameData_22623d0 = 0;
    GameData_22623d8 = 0;
    GameData_22623e0 = 2;
    GameData_22623f8 = 0;
    GameData_22623f0 = 0;
    GameData_22623e8 = 0;
    GameData_2262408 = 0;
    GameData_2262410 = 0;
    GameData_2262418 = 0;
    GameData_2262428 = 0;
    GameData_2262438 = 0;
    GameData_2262440 = 0;
    GameData_2262448 = 0;
    GameData_2262450 = 0;
    GameData_2262458 = 0;
    GameData_2262468 = 0;
    GameData_2262478 = 0;
    GameData_2262480 = 0;
    GameData_2262488 = 0;
    GameData_2262490 = 0;
    GameData_2262498 = 0;
    GameData_22624a0 = 12;
    GameData_22624b8 = 0;
    GameData_22624b0 = 0;
    GameData_22624a8 = 0;
    GameData_22624c0 = 7;
    GameData_22624c8 = 0;
    GameData_22624d0 = 0;
    GameData_22624d8 = 0;
    GameData_22624e0 = 2;
    GameData_22624e8 = 0;
    GameData_22624f0 = 0;
    GameData_22624f8 = 0;
    GameData_2262508 = 0;
    GameData_2262510 = 0;
    GameData_2262518 = 0;
    GameData_2262528 = 0;
    GameData_2262530 =
        (__int64)game_menu_anonymous_ProcNextSeq_CheckFree_16b0100;
    GameData_2262538 = 0;
    GameData_2262540 = 0;
    GameData_2262548 = 0;
    GameData_2262550 = 0;
    GameData_2262558 = 0;
    GameData_2262568 = 0;
    GameData_2262578 = 0;
    GameData_2262580 = 0;
    GameData_2262588 = 0;
    GameData_2262590 = 0;
    GameData_2262598 = 0;
    GameData_22625a8 = 0;
    GameData_22625b8 = 0;
    GameData_22625c0 = 0;
    GameData_22625c8 = 0;
    GameData_22625d0 = 0;
    GameData_22625d8 = 0;
    GameData_22625e0 = 12;
    GameData_22625f8 = 0;
    GameData_22625f0 = 0;
    GameData_22625e8 = 0;
    GameData_2262600 = 7;
    GameData_2262608 = 0;
    GameData_2262610 = 0;
    GameData_2262618 = 0;
    GameData_2262620 = 2;
    GameData_2262628 = 0;
    GameData_2262630 = 0;
    GameData_2262638 = 0;
    GameData_2262648 = 0;
    GameData_2262650 = 0;
    GameData_2262658 = 0;
    GameData_2262668 = 0;
    GameData_2262678 = 0;
    GameData_2262680 = 0;
    GameData_2262688 = 0;
    GameData_2262690 = 0;
    GameData_2262698 = 0;
    GameData_22626a8 = 0;
    GameData_22626b0 = (__int64)ProcNextSeq_16b0680;
    GameData_22626b8 = 0;
    GameData_22626c0 = 0;
    GameData_22626c8 = 0;
    GameData_22626d0 = 0;
    GameData_22626d8 = 0;
    GameData_22626e8 = 0;
    GameData_22626f0 = (__int64)ProcNextSeq_16b06e0;
    GameData_22626f8 = 0;
    GameData_2262700 = 0;
    GameData_2262708 = 0;
    GameData_2262710 = 0;
    GameData_2262718 = 0;
    GameData_2262720 = 12;
    GameData_2262738 = 0;
    GameData_2262730 = 0;
    GameData_2262728 = 0;
    GameData_2262740 = 7;
    GameData_2262748 = 0;
    GameData_2262750 = 0;
    GameData_2262758 = 0;
    GameData_2262760 = 2;
    GameData_2262768 = 0;
    GameData_2262770 = 0;
    GameData_2262778 = 0;
    GameData_2262780 = 7;
    GameData_2262788 = 0;
    GameData_2262790 = 0;
    GameData_2262798 = 0;
    GameData_22627a0 = 0;
    GameData_22627c8 = 0;
    GameData_22627d0 = 0;
    GameData_22627d8 = 0;
    GameData_22627c0 = 0;
    GameData_22627b8 = 0;
    GameData_22627b0 = 0;
    GameData_22627a8 = 0;
    __cxa_guard_release((__int64)&GameData_22627e0);
  }
  game_script_hub_ui_g_talk_result = 0;
  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 288, 16, 0);
  v3 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) +
                  game_gmap_GmapClock_kDefaultTime_ptr);
  v5 = *(_QWORD*)game_gmap_GmapClock_kDefaultTime_ptr;
  v6 = v3;
  ProcNextSeq_16b0800((__int64)v2, &GameData_1a9f09e, (__int16*)&v5);
  *v2 = game_menu_anonymous_ProcHotelPart3Seq_vtable;
  return ProcInst_657850((__int64)v2, (__int64)&GameData_22621a0, (__int64)"T",
                         1, a1);
}

__int64 game_menu_16d1640(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64* v5;
  atomic_uchar* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _BOOL4 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  struct {
    __int64 v39;
    __int64 v40;
  } v39_;

  v2 = *(_QWORD**)(result + 232);
  v3 = *(_QWORD**)(result + 240);
  v38 = result;
  if (v2 != v3) {
    v37 = 0;
    v4 = 0;
    v5 = ui_LayoutAccessor_empty__ptr[0];
    v6 = (atomic_uchar*)GameData_212dfd0;
    v7 = GameData_212dfc8;
    while (1) {
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v2 + 48LL))(*v2) & 1) == 0) {
        goto LABEL_4;
      }
      v8 = *v2;
      v9 = *(_QWORD*)(*v2 + 56LL);
      if (v9 != 0) {
        v10 = std___1___shared_weak_count_lock(v9);
        if (v10 != 0) {
          v11 = *(__int64**)(v8 + 48);
          if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if (v11 != nullptr) {
              goto LABEL_10;
            }
          }
          else {
            v12 = v10;
            (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
            std___1___shared_weak_count___release_weak(v12);
            if (v11 != nullptr) {
            LABEL_10:
              if (v11[2] == 0) {
                goto LABEL_28;
              }
              goto LABEL_14;
            }
          }
        }
      }
      v11 = v5;
      if (*(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v5) == 0) {
        goto LABEL_28;
      }
    LABEL_14:
      v13 = v11[1];
      if (v13 == 0) {
        goto LABEL_28;
      }
      v14 = v4;
      v15 = v5;
      v16 = std___1___shared_weak_count_lock(v13);
      if (v16 != 0) {
        v17 = *v11;
        if (*v11 != 0) {
          LODWORD(v1) = *(unsigned __int8*)(v17 + 24);
          v18 = v17 + 152;
          if ((_DWORD)v1 == 0) {
            v18 = 0;
          }
          v19 = v18 != v11[2];
        }
        else {
          v19 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (!v19) {
            goto LABEL_32;
          }
        }
        else {
          v23 = v16;
          (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
          std___1___shared_weak_count___release_weak(v23);
          if (!v19) {
          LABEL_32:
            v5 = v15;
            if ((v1 & 1) != 0) {
            LABEL_25:
              v21 = v11[2];
              v4 = v14;
              if (v21 != 0) {
                v22 = *(_QWORD*)(v21 + 24);
                if ((atomic_load_explicit(v6, memory_order_acquire) & 1) == 0) {
                  goto LABEL_94;
                }
                goto LABEL_35;
              }
            LABEL_28:
              v22 = 0;
              if ((atomic_load_explicit(v6, memory_order_acquire) & 1) == 0) {
                goto LABEL_94;
              }
              goto LABEL_35;
            }
            goto LABEL_33;
          }
        }
      }
      v20 = v11[1];
      if (v20 == 0) {
        v22 = 0;
        v5 = v15;
        goto LABEL_34;
      }
      v5 = v15;
      if (*(_QWORD*)(v20 + 8) != -1) {
        goto LABEL_25;
      }
    LABEL_33:
      v22 = 0;
    LABEL_34:
      v4 = v14;
      if ((atomic_load_explicit(v6, memory_order_acquire) & 1) == 0) {
      LABEL_94:
        if (__cxa_guard_acquire((__int64)v6) != 0) {
          *v7 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
          __cxa_guard_release((__int64)v6);
        }
      }
    LABEL_35:
      if (v22 == 0) {
        goto LABEL_4;
      }
      v24 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      if (v24 != v7) {
        do {
          v24 = (__int64*)*v24;
        } while (v24 != v7 && v24 != nullptr);
        if (v24 == nullptr) {
          goto LABEL_4;
        }
      }
      v26 = *(_QWORD*)(v38 + 960);
      if (v26 == 0) {
        goto LABEL_4;
      }
      v27 = std___1___shared_weak_count_lock(v26);
      if (v27 == 0) {
        goto LABEL_4;
      }
      v28 = v27;
      v1 = *(_QWORD*)(v38 + 952);
      if (v1 != 0) {
        GameRoutine_16d1510((void*)(&v39_.v39), *(_QWORD*)(v38 + 952), v22);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v1 == 0) {
          goto LABEL_4;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
        std___1___shared_weak_count___release_weak(v28);
        if (v1 == 0) {
          goto LABEL_4;
        }
      }
      if (v39_.v40 != 0) {
        v29 = std___1___shared_weak_count_lock(v39_.v40);
        v1 = v39_.v39;
        if (v39_.v40 != 0) {
          std___1___shared_weak_count___release_weak(v39_.v40);
        }
        if (v29 != 0 && v1 != 0) {
          if ((*(_BYTE*)(v1 + 832) & 1) != 0) {
            **(_BYTE**)(v1 + 848) = 0;
            *(_QWORD*)(v1 + 840) = 0;
            if ((*(_BYTE*)(v1 + 856) & 1) == 0) {
              goto LABEL_70;
            }
          LABEL_58:
            **(_BYTE**)(v1 + 872) = 0;
            *(_QWORD*)(v1 + 864) = 0;
            v30 = v37;
            if (v37 != 0) {
              goto LABEL_59;
            }
          LABEL_71:
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 16), 1u,
                                      memory_order_relaxed);
          }
          else {
            *(_WORD*)(v1 + 832) = 0;
            if ((*(_BYTE*)(v1 + 856) & 1) != 0) {
              goto LABEL_58;
            }
          LABEL_70:
            *(_WORD*)(v1 + 856) = 0;
            v30 = v37;
            if (v37 == 0) {
              goto LABEL_71;
            }
          LABEL_59:
            v31 = std___1___shared_weak_count_lock(v30);
            if (v31 != 0) {
              v32 = v31;
              if (v4 != 0) {
                v33 = *(unsigned __int8*)(v1 + 832);
                if (*(_QWORD*)(v4 + 24) != 0) {
                  v34 = *(_QWORD*)(v1 + 840);
                  if ((v33 & 1) == 0) {
                    v34 = v33 >> 1;
                  }
                  if (v34 != 0) {
                    if ((v33 & 1) != 0) {
                      **(_BYTE**)(v1 + 848) = 0;
                      *(_QWORD*)(v1 + 840) = 0;
                    }
                    else {
                      *(_WORD*)(v1 + 832) = 0;
                    }
                  }
                  GameRoutine_60a060((char*)(v1 + 832), *(_QWORD*)(v4 + 16),
                                     *(_QWORD*)(v4 + 24));
                }
                else if ((v33 & 1) != 0) {
                  **(_BYTE**)(v1 + 848) = 0;
                  *(_QWORD*)(v1 + 840) = 0;
                }
                else {
                  *(_WORD*)(v1 + 832) = 0;
                }
                v35 = *(unsigned __int8*)(v4 + 856);
                if (*(_QWORD*)(v1 + 24) != 0) {
                  v36 = *(_QWORD*)(v4 + 864);
                  if ((v35 & 1) == 0) {
                    v36 = v35 >> 1;
                  }
                  if (v36 != 0) {
                    if ((v35 & 1) != 0) {
                      **(_BYTE**)(v4 + 872) = 0;
                      *(_QWORD*)(v4 + 864) = 0;
                    }
                    else {
                      *(_WORD*)(v4 + 856) = 0;
                    }
                  }
                  GameRoutine_60a060((char*)(v4 + 856), *(_QWORD*)(v1 + 16),
                                     *(_QWORD*)(v1 + 24));
                }
                else if ((v35 & 1) != 0) {
                  **(_BYTE**)(v4 + 872) = 0;
                  *(_QWORD*)(v4 + 864) = 0;
                }
                else {
                  *(_WORD*)(v4 + 856) = 0;
                }
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
                std___1___shared_weak_count___release_weak(v32);
              }
            }
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 16), 1u,
                                      memory_order_relaxed);
            std___1___shared_weak_count___release_weak(v37);
          }
          v37 = v29;
        LABEL_92:
          if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
            std___1___shared_weak_count___release_weak(v29);
          }
          v4 = v1;
          goto LABEL_4;
        }
        v1 = v4;
        if (v29 != 0) {
          goto LABEL_92;
        }
      }
    LABEL_4:
      if (++v2 == v3) {
        result = v37;
        if (v37 != 0) {
          return std___1___shared_weak_count___release_weak(v37);
        }
        return result;
      }
    }
  }
  return result;
}

__int64 game_menu_16d2250(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    __int64* v7;
    int v8;
    char gap20_[4];
    __int64 v9;
  } v7_;
  __int64 var4;

  result = *(_QWORD*)(a1 + 112);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 104);
      v4 = result;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 16), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        std___1___shared_weak_count___release_weak(v4);
      }
      v7_.v9 = 0;
      v7_.v7 = GameData_212d890[0] + 2;
      v7_.v8 = 20;
      v5 = std___1___shared_weak_count_lock(v4);
      if (v5 != 0) {
        v6 = v5;
        if (v3 != 0) {
          (*(__attribute__((swiftcall)) void (**)(
              PSEUDO_X8, __int64, __int64**))(*(_QWORD*)(v3 + 72) + 16LL))(
              (void*)(&var4), v3 + 72, &v7_.v7);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          std___1___shared_weak_count___release_weak(v6);
        }
      }
      return std___1___shared_weak_count___release_weak(v4);
    }
  }
  return result;
}

__int64 game_menu_16ed000(_QWORD* a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  int v5;
  const char* v6;
  const char* v7;
  __int64* v8;
  const char** v9;
  __int64 v10;
  char* v11;
  int v12;
  const char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  atomic_ullong* v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  char* v23;
  char* v24;
  unsigned int* v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  const char* v29[2];
  struct {
    __int64* v30;
    __int64 v31;
    unsigned __int64 v32;
    unsigned __int64 v33;
    int v34;
    int v35;
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
    __int64 v46;
    __int64 v47;
    __int64 v48;
  } v30_;

  result = a1[7];
  if (result == 0) {
    goto LABEL_39;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    goto LABEL_39;
  }
  v3 = (__int64*)a1[6];
  v4 = result;
  if (v3 != nullptr) {
    v5 = (*(__int64 (**)(_QWORD*))(*a1 + 576LL))(a1);
    v6 = (const char*)(*(__int64 (**)(_QWORD*))(*a1 + 24LL))(a1);
    v7 = v6;
    if (v5 >= 2) {
      v8 = msg_MessageManager_instance__ptr[0];
      v9 = (const char**)msg_MessageManager_empty_text__ptr;
      if (v6 != nullptr && *v6 != 0) {
        v10 = *msg_MessageManager_instance__ptr[0];
        v30_.v36 = -1;
        v30_.v37 = -1;
        v30_.v38 = -1;
        v30_.v39 = -1;
        v30_.v40 = -1;
        v30_.v41 = -1;
        v30_.v42 = -1;
        v30_.v43 = -1;
        v30_.v44 = -1;
        v30_.v45 = -1;
        v30_.v46 = -1;
        v30_.v47 = -1;
        v30_.v30 = GameData_212e348 + 2;
        v30_.v31 = 0xFFFF0001FFFF0000LL;
        v30_.v32 = 0xFFFF0004FFFF0002LL;
        v30_.v33 = 0xFFFF0006FFFF0005LL;
        v30_.v48 = 8;
        v30_.v34 = -65529;
        v30_.v35 = -65528;
        v11 = GameRoutine_a4dbe0(v10, v7, 0);
      }
      else {
        v11 = *msg_MessageManager_empty_text__ptr;
      }
      v12 = (*(__int64 (**)(_QWORD*))(*a1 + 576LL))(a1);
      if (v11 != nullptr) {
        v13 = v11;
      }
      else {
        v13 = *v9;
      }
      GameRoutine_60a020(*v8 + 14704, v13);
      GameHr_a51e10(*v8 + 14704, 1u, v12, 0);
      v7 = "MID_Facility_Menu_Lv";
    }
    LayoutAccessor_1562060(v3, "T_Txt", v7);
    v14 = a1[7];
    if (v14 == 0) {
      goto LABEL_18;
    }
    v15 = std___1___shared_weak_count_lock(v14);
    if (v15 == 0) {
      goto LABEL_18;
    }
    v16 = v15;
    v17 = (atomic_ullong*)(v15 + 8);
    v18 = (__int64*)a1[6];
    if (atomic_fetch_add(v17, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      v19 = v18;
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak(v16);
      v18 = v19;
    }
    if (v18 == nullptr) {
    LABEL_18:
      v18 = ui_LayoutAccessor_empty__ptr[0];
    }
    v20 = ui_LayoutAccessor_FindPane(v18, "IconNew");
    if (v20 != 0) {
      *(_BYTE*)(v20 + 88) &= ~1u;
    }
    v29[0] = "L_Special";
    v29[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 1);
    GameRoutine_1114920((void*)(&v30_.v30), v3, v29);
    if (v30_.v31 == 0) {
      goto LABEL_30;
    }
    v21 = std___1___shared_weak_count_lock(v30_.v31);
    v22 = v30_.v30;
    if (v30_.v31 != 0) {
      std___1___shared_weak_count___release_weak(v30_.v31);
    }
    if (v21 != 0 && v22 != nullptr) {
      (*(void (**)(__int64*, _QWORD))(*v22 + 40))(v22, 0);
    }
    else if (v21 == 0) {
    LABEL_30:
      if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) != 0) {
        v23 = &GameData_1a9f09e;
      }
      else {
        v23 = "_Disable";
      }
      v24 = game_util_Format("StatusTurn%s", v23);
      if (((*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1) & 1) != 0) {
        v25 = (unsigned int*)v24;
      }
      else {
        v25 = (unsigned int*)"StatusNone";
      }
      result = LayoutAccessor_1562cf0((__int64)v3, v25);
      goto LABEL_37;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
      std___1___shared_weak_count___release_weak(v21);
    }
    goto LABEL_30;
  }
LABEL_37:
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    result = std___1___shared_weak_count___release_weak(v4);
  }
LABEL_39:
  if (*(_QWORD**)(a1[1] + 336LL) == a1) {
    (*(void (**)(_QWORD*))(*a1 + 584LL))(a1);
    v26 = a1[1];
    if (v26 != 0 && (v27 = __dynamic_cast(v26, GameData_212e030[0],
                                          &GameData_209f500, 0)) != 0) {
      v28 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v27 + 1112LL))(v27);
    }
    else {
      v28 = (__int64*)(v26 + 848);
    }
    result = ui_LayoutAccessor_FindAlignment(v28, "A_Txt");
    if (result != 0) {
      return Alignment_56b600(result);
    }
  }
  return result;
}

__int64 game_menu_16ed430(_QWORD* a1, char a2, char a3)
{
  __int64 v4;
  __int64 v7;
  __int64 v8;
  atomic_ullong* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  const char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  atomic_ullong* v17;
  __int64* v18;
  __int64* v19;
  __int64* v20;
  __int64 result;
  __int64 v22;
  __int64* v23;
  char v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  int* v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int* v33;
  int v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  const char* v42[2];
  struct {
    __int64* v43;
    __int64 v44;
    char gap32_[24];
    __int64 v45;
  } v43_;

  v4 = a1[7];
  if (v4 == 0) {
    goto LABEL_5;
  }
  v7 = std___1___shared_weak_count_lock(v4);
  if (v7 == 0) {
    goto LABEL_5;
  }
  v8 = v7;
  v9 = (atomic_ullong*)(v7 + 8);
  v10 = (__int64*)a1[6];
  if (atomic_fetch_add(v9, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v10 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v19 = v10;
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  std___1___shared_weak_count___release_weak(v8);
  v10 = v19;
  if (v19 == nullptr) {
  LABEL_5:
    v10 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  v42[0] = "L_Special";
  v42[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 1);
  GameRoutine_1114920((void*)(&v43_.v43), v10, v42);
  if (v43_.v44 == 0) {
    goto LABEL_17;
  }
  v11 = std___1___shared_weak_count_lock(v43_.v44);
  v12 = (__int64)v43_.v43;
  if (v43_.v44 != 0) {
    std___1___shared_weak_count___release_weak(v43_.v44);
  }
  if (v11 != 0 && v12 != 0) {
    if ((a3 & 1) != 0) {
      v13 = "MID_Facility_Special";
    }
    else {
      v13 = "MID_Facility_HalfPrice";
    }
    BlnPopup_19f2340(v12, v13);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v12 + 40LL))(v12, a2 & 1);
  }
  else if (v11 == 0) {
    goto LABEL_17;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
  LABEL_17:
    v14 = a1[7];
    if (v14 == 0) {
      goto LABEL_27;
    }
    goto LABEL_18;
  }
  (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
  std___1___shared_weak_count___release_weak(v11);
  v14 = a1[7];
  if (v14 == 0) {
    goto LABEL_27;
  }
LABEL_18:
  v15 = std___1___shared_weak_count_lock(v14);
  if (v15 != 0) {
    v16 = v15;
    v17 = (atomic_ullong*)(v15 + 8);
    v18 = (__int64*)a1[6];
    if (atomic_fetch_add(v17, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v18 != nullptr) {
        goto LABEL_28;
      }
    }
    else {
      v20 = v18;
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak(v16);
      v18 = v20;
      if (v20 != nullptr) {
        goto LABEL_28;
      }
    }
  }
LABEL_27:
  v18 = ui_LayoutAccessor_empty__ptr[0];
LABEL_28:
  LayoutAccessor_1560070((void*)(&v43_.v43), v18, "L_Special");
  result = v43_.v44;
  if (v43_.v44 != 0) {
    v22 = std___1___shared_weak_count_lock(v43_.v44);
    v23 = v43_.v43;
    result = v43_.v44;
    if (v43_.v44 != 0) {
      result = std___1___shared_weak_count___release_weak(v43_.v44);
    }
    if (v22 != 0 && v23 != nullptr) {
      v24 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
      v25 = ui_LayoutAccessor_FindPane(v23, "Wdw_L");
      v26 = (char*)GameData_212da30;
      if (v25 != 0) {
        v27 = __dynamic_cast(v25, GameData_212d670[0], GameData_212fc70[0], 0);
        if (v27 != 0) {
          if ((v24 & 1) != 0) {
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                                      memory_order_acquire) &
                 1) != 0) {
              v28 = &GameData_22594e8;
            }
            else {
              v43_.v45 = v27;
              v28 = &GameData_22594e8;
              if (__cxa_guard_acquire((__int64)&GameData_22594f0) != 0) {
                GameData_22594e8 = -1;
                __cxa_guard_release((__int64)&GameData_22594f0);
              }
              v27 = v43_.v45;
            }
          }
          else {
            v28 = (int*)(v26 + 120);
          }
          v29 = *v28;
          v30 = v27;
          LODWORD(v43_.v43) = v29;
          (*(void (**)(__int64, _QWORD, __int64**))(*(_QWORD*)v27 + 40LL))(
              v27, 0, &v43_.v43);
          (*(void (**)(__int64, __int64, __int64**))(*(_QWORD*)v30 + 40LL))(
              v30, 1, &v43_.v43);
          (*(void (**)(__int64, __int64, __int64**))(*(_QWORD*)v30 + 40LL))(
              v30, 2, &v43_.v43);
          (*(void (**)(__int64, __int64, __int64**))(*(_QWORD*)v30 + 40LL))(
              v30, 3, &v43_.v43);
        }
      }
      v31 = ui_LayoutAccessor_FindPane(v23, "Wdw_R");
      if (v31 != 0) {
        v32 = __dynamic_cast(v31, GameData_212d670[0], GameData_212fc70[0], 0);
        if (v32 != 0) {
          if ((v24 & 1) != 0) {
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                                      memory_order_acquire) &
                 1) != 0) {
              v33 = &GameData_22594e8;
            }
            else {
              v43_.v45 = v32;
              v33 = &GameData_22594e8;
              if (__cxa_guard_acquire((__int64)&GameData_22594f0) != 0) {
                GameData_22594e8 = -1;
                __cxa_guard_release((__int64)&GameData_22594f0);
              }
              v32 = v43_.v45;
            }
          }
          else {
            v33 = (int*)(v26 + 120);
          }
          v34 = *v33;
          v35 = v32;
          LODWORD(v43_.v43) = v34;
          (*(void (**)(__int64, _QWORD, __int64**))(*(_QWORD*)v32 + 40LL))(
              v32, 0, &v43_.v43);
          (*(void (**)(__int64, __int64, __int64**))(*(_QWORD*)v35 + 40LL))(
              v35, 1, &v43_.v43);
          (*(void (**)(__int64, __int64, __int64**))(*(_QWORD*)v35 + 40LL))(
              v35, 2, &v43_.v43);
          (*(void (**)(__int64, __int64, __int64**))(*(_QWORD*)v35 + 40LL))(
              v35, 3, &v43_.v43);
        }
      }
      v36 = 72;
      if ((v24 & 1) != 0) {
        v36 = 36;
      }
      v37 = *(_DWORD*)&v26[v36];
      v38 = ui_LayoutAccessor_FindTextBox(v23, "T_Txt_L");
      if (v38 != 0) {
        v39 = Pane_58f8a0(v38);
        if (v39 != 0) {
          *(_DWORD*)(v39 + 12) = v37;
        }
      }
      v40 = 72;
      if ((v24 & 1) != 0) {
        v40 = 36;
      }
      v41 = *(_DWORD*)&v26[v40];
      result = ui_LayoutAccessor_FindTextBox(v23, "T_Txt_R");
      if (result != 0) {
        result = Pane_58f8a0(result);
        if (result != 0) {
          *(_DWORD*)(result + 12) = v41;
        }
      }
    }
    else if (v22 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      return std___1___shared_weak_count___release_weak(v22);
    }
  }
  return result;
}

__int64 game_menu_16ef9a0(__int64* a1)
{

#pragma clang fp contract(off)
  unsigned int* v2;
  __int64* v3;
  __int64* v4;
  int v5;
  __int64 v6;
  int v7;
  unsigned int v8;
  __int64 v9;
  unsigned int* v10;
  __int64 v11;
  __int64* v12;
  _BOOL4 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  int v25;
  int v26;
  char v27;
  __int64* v28;
  __int64* v29;
  int v30;
  __int64 v31;
  int v32;
  __int64 result;
  struct {
    __int64 v34;
    __int64 v35;
  } v34_;
  struct {
    __int64 v36;
    __int64 v37;
  } v36_;
  struct {
    __int64* v38;
    __int64 v39;
    unsigned __int64 v40;
    unsigned __int64 v41;
    int v42;
    int v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
  } v38_;
  float v57;
  _DWORD v58[2];

  v2 = (unsigned int*)(*(__int64 (**)(__int64*))(*a1 + 1120))(a1);
  LayoutAccessor_1562cf0((__int64)(a1 + 106), v2);
  v3 = (__int64*)a1[29];
  v4 = (__int64*)a1[30];
  if (v3 == v4) {
    v5 = 0;
  }
  else {
    v5 = 0;
    do {
      v6 = *v3++;
      v5 += (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 48LL))(v6) & 1;
    } while (v3 != v4);
  }
  v7 = (*(__int64 (**)(__int64*))(*a1 + 1128))(a1);
  if (v7 + 1 < v5) {
    v8 = v7 + 1;
  }
  else {
    v8 = v5;
  }
  if (v5 < 1) {
    v9 = 1;
  }
  else {
    v9 = v8;
  }
  v10 = (unsigned int*)game_util_Format("Size_%02d", v9);
  LayoutAccessor_1562cf0((__int64)(a1 + 106), v10);
  GameRoutine_1572370((__int64)(a1 + 106), 0);
  LayoutAccessor_155c780((__int64)&v38_.v38, a1 + 106);
  LayoutAccessor_155cda0((__int64)&v38_.v38, "InfoDetailOut", nullptr);
  if (v38_.v40 == 0 || v38_.v39 == 0) {
    goto LABEL_29;
  }
  v11 = std___1___shared_weak_count_lock(v38_.v39);
  if (v11 == 0) {
    goto LABEL_22;
  }
  if (v38_.v38 != nullptr) {
    LOBYTE(v3) = *((_BYTE*)v38_.v38 + 24);
    v12 = v38_.v38 + 19;
    if ((_BYTE)v3 == 0) {
      v12 = nullptr;
    }
    v13 = v12 != (__int64*)v38_.v40;
  }
  else {
    v13 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v13) {
    LABEL_22:
      if (v38_.v39 == 0 || *(_QWORD*)(v38_.v39 + 8) == -1) {
        goto LABEL_29;
      }
      goto LABEL_27;
    }
  }
  else {
    v14 = v11;
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v14);
    if (v13) {
      goto LABEL_22;
    }
  }
  if (((unsigned __int8)v3 & 1) != 0) {
  LABEL_27:
    v15 = v38_.v52;
    if (v38_.v52 != 0) {
      *(float*)(v15 + 32) =
          (float)(unsigned __int16)GameRoutine_56e670(v38_.v52);
    }
  }
LABEL_29:
  LayoutAccessor_155ca60((__int64)&v38_.v38);
  LayoutAccessor_1560070((void*)(&v38_.v38), a1 + 106,
                         "L_InfoDetail/L_Remaining");
  if (v38_.v39 == 0) {
    goto LABEL_47;
  }
  v16 = std___1___shared_weak_count_lock(v38_.v39);
  v17 = v38_.v38;
  if (v38_.v39 != 0) {
    std___1___shared_weak_count___release_weak(v38_.v39);
  }
  if (v16 != 0 && v17 != nullptr) {
    v38_.v44 = -1;
    v38_.v45 = -1;
    v38_.v46 = -1;
    v38_.v47 = -1;
    v18 = *msg_MessageManager_instance__ptr[0];
    v38_.v48 = -1;
    v38_.v49 = -1;
    v38_.v50 = -1;
    v38_.v51 = -1;
    v38_.v52 = -1;
    v38_.v53 = -1;
    v38_.v54 = -1;
    v38_.v55 = -1;
    v38_.v38 = GameData_212e348 + 2;
    v38_.v39 = 0xFFFF0001FFFF0000LL;
    v38_.v40 = 0xFFFF0004FFFF0002LL;
    v38_.v41 = 0xFFFF0006FFFF0005LL;
    v38_.v56 = 8;
    v38_.v42 = -65529;
    v38_.v43 = -65528;
    v19 = GameRoutine_a4dbe0(v18, "MID_Sys_Remaining", 0);
    if (v19 != nullptr) {
      v20 = (__int64)v19;
      v21 = ui_LayoutAccessor_FindTextBox(v17, "T_Txt");
      if (v21 != 0) {
        GameRoutine_156c5d0(v21, v20, 0);
      }
    }
    v22 = ui_LayoutAccessor_FindTextBox(v17, "T_Txt");
    if (v22 != 0) {
      v23 = v22;
      v24 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v17, "T_Txt");
      if (v24 != nullptr) {
        GameRoutine_190a0c0((float*)&v38_.v38, (__int64)v58, &v57, v24,
                            v24[27]);
        v25 = v58[0];
        v26 = v58[1];
      }
      else {
        v25 = 0;
        v26 = 0;
      }
      v27 = *(_BYTE*)(v23 + 88);
      *(_DWORD*)(v23 + 80) = v25;
      *(_DWORD*)(v23 + 84) = v26;
      *(_BYTE*)(v23 + 88) = v27 | 0x10;
    }
    GameRoutine_1585290(v17, "T_Txt", "Bg");
  }
  else if (v16 == 0) {
    goto LABEL_47;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
LABEL_47:
  v28 = (__int64*)a1[29];
  v29 = (__int64*)a1[30];
  if (v28 == v29) {
    v30 = 0;
  }
  else {
    v30 = 0;
    do {
      v31 = *v28++;
      v30 += (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 48LL))(v31) & 1;
    } while (v28 != v29);
  }
  v32 = (*(__int64 (**)(__int64*))(*a1 + 1128))(a1);
  LayoutAccessor_1560070((void*)(&v36_.v36), a1 + 106, "L_ArrowU");
  game_159df00((__int64)&v36_.v36, v30 > v32);
  if (v36_.v37 != 0) {
    std___1___shared_weak_count___release_weak(v36_.v37);
  }
  LayoutAccessor_1560070((void*)(&v34_.v34), a1 + 106, "L_ArrowD");
  game_159df00((__int64)&v34_.v34, v30 > v32);
  result = v34_.v35;
  if (v34_.v35 != 0) {
    return std___1___shared_weak_count___release_weak(v34_.v35);
  }
  return result;
}

void game_menu_16efdf0(__int64 a1, __int64 a2)
{
  __int64 v4;
  char v5;
  void* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int128* v11;
  const char* v12[2];
  struct {
    __int128* v13;
    __int64 v14;
  } v13_;

  ui_LayoutAccessor_SetPaneVisible(a1 + 848, "N_Unit", a2 != 0);
  if (a2 == 0) {
    return;
  }
  v4 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 848), "IconFace");
  if (v4 != 0) {
    v4 = __dynamic_cast(v4, GameData_212d670[0], GameData_212d678[0], 0);
  }
  v5 = GameHr_1840740(v4, 0, a2, 6u, 1);
  ui_LayoutAccessor_SetPaneVisible(a1 + 848, "IconFace", v5 & 1);
  if (*(_BYTE*)(a2 + 2136) != 0) {
    v6 = game_97b2f0(a2 + 2104);
    if (v6 == nullptr) {
      goto LABEL_10;
    }
  }
  else {
    v6 = GameHr_67ed20(*(_QWORD**)(a2 + 392));
    if (v6 == nullptr) {
      goto LABEL_10;
    }
  }
  v7 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 848), "L_UnitName/T_Txt");
  if (v7 != 0) {
    GameRoutine_156c5d0(v7, (__int64)v6, 0);
  }
LABEL_10:
  v12[0] = "L_Lv";
  v12[1] = (_BYTE*)((_UNKNOWN*)0x4LL);
  GameRoutine_1572840((void*)(&v13_.v13), (__int64*)(a1 + 848), v12);
  if (v13_.v14 != 0) {
    v8 = std___1___shared_weak_count_lock(v13_.v14);
    v9 = (__int64)v13_.v13;
    if (v13_.v14 != 0) {
      std___1___shared_weak_count___release_weak(v13_.v14);
    }
    if (v8 != 0 && v9 != 0) {
      StatusLV_18a30a0(v9, a2);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v9 + 40LL))(v9, 1);
      goto LABEL_17;
    }
    if (v8 != 0) {
    LABEL_17:
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v8);
      }
    }
  }
  v12[0] = "L_OverBlaze";
  v12[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 3);
  GameRoutine_1573280((void*)(&v13_.v13), (__int64*)(a1 + 848), v12);
  if (v13_.v14 == 0) {
    return;
  }
  v10 = std___1___shared_weak_count_lock(v13_.v14);
  v11 = v13_.v13;
  if (v13_.v14 != 0) {
    std___1___shared_weak_count___release_weak(v13_.v14);
  }
  if (v10 != 0 && v11 != nullptr) {
    GameRoutine_18c9b10(v11, a2, -1);
  }
  else if (v10 == 0) {
    return;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
}

__int64 game_menu_16f5ea0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64* v4;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64* v16;
  char v17;
  __int64* v18;
  struct {
    __int64* v19;
    __int64 v20;
  } v19_;

  LayoutAccessor_1560070((void*)(&v19_.v19), (__int64*)(a1 + 848), "L_List");
  result = v19_.v20;
  if (v19_.v20 != 0) {
    v3 = std___1___shared_weak_count_lock(v19_.v20);
    v4 = v19_.v19;
    result = v19_.v20;
    if (v19_.v20 != 0) {
      result = std___1___shared_weak_count___release_weak(v19_.v20);
    }
    if (v3 == 0 || v4 == nullptr) {
      if (v3 == 0) {
        return result;
      }
      goto LABEL_41;
    }
    v6 = *(_DWORD*)(a1 + 1076);
    v7 = *(_QWORD*)(a1 + 1088);
    if (v6 < (unsigned __int64)((*(_QWORD*)(a1 + 1096) - v7) >> 2)) {
      v6 = *(_DWORD*)(v7 + 4LL * v6);
    }
    if (v6 == 1) {
      v8 = *(_QWORD*)(a1 + 1064);
      v9 = *(_QWORD*)(v8 + 400);
      v10 = *(unsigned __int8*)(v9 + 96);
      if (v10 == 2) {
        if (*(_BYTE*)(v8 + 1880) != 0 ||
            ((v15 = *(_QWORD*)(v9 + 112)) == 0
                 ? (v16 = &GameData_21f4228)
                 : (v16 =
                        &GameData_21f4018[8 * (unsigned __int64)*(
                                                  unsigned __int8*)(v15 + 32)]),
             *(_BYTE*)v16 != 0)) {
          v11 = "Page02_Animal";
          goto LABEL_38;
        }
      }
      else if (v10 == 1 && *(_BYTE*)(v8 + 1944) != 0) {
        v11 = "Page02_Legion";
        goto LABEL_38;
      }
      v11 = "Page02_Default";
      goto LABEL_38;
    }
    v12 = *(_QWORD*)(*(_QWORD*)(a1 + 1064) + 392LL);
    v19_.v19 = nullptr;
    v19_.v20 = v12;
    if (GameSituation_906560(game_GameModeData_instance_ + 136,
                             (__int64*)&v19_.v19)) {
      v13 = *(_QWORD*)(*(_QWORD*)(a1 + 1064) + 440LL);
      if (v13 != 0) {
        v14 = *(_BYTE*)(v13 + 16);
      }
      else {
        v14 = 9;
      }
      if (((1 << v14) & 0xF1) == 0) {
        LayoutAccessor_1562cf0((__int64)v4, (unsigned int*)"Page01_CanScout");
        v18 = LayoutAccessor_155fbe0((__int64*)(a1 + 848), "L_List");
        GameRoutine_1597cc0(v18, *(_QWORD*)(*(_QWORD*)(a1 + 1064) + 392LL), 1,
                            1);
        goto LABEL_39;
      }
    }
    else {
      v13 = *(_QWORD*)(*(_QWORD*)(a1 + 1064) + 440LL);
    }
    if (v13 != 0) {
      v17 = *(_BYTE*)(v13 + 16);
    }
    else {
      v17 = 9;
    }
    if (((1 << v17) & 0xF1) != 0) {
      v11 = "Page01_Default";
    }
    else {
      v11 = "Page01_CannotScout";
    }
  LABEL_38:
    LayoutAccessor_1562cf0((__int64)v4, (unsigned int*)v11);
  LABEL_39:
    result = ui_LayoutAccessor_FindAlignment(v4, "MenuItemList");
    if (result != 0) {
      result = Alignment_56b600(result);
    }
  LABEL_41:
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      return std___1___shared_weak_count___release_weak(v3);
    }
  }
  return result;
}

__int64 game_menu_17880d0(__int64* a1, __int64 a2)
{
  __int64 v2;

  v2 = *a1;
  if ((*(_BYTE*)(a1[132] + 356) & 1) == 0) {
    return (*(__int64 (**)(__int64))(v2 + 1128))((__int64)a1);
  }
  (*(void (**)(__int64*, __int64))(v2 + 576))(a1, a2);
  *(_DWORD*)(a1[132] + 356) &= ~1u;
  *(_DWORD*)(a1[132] + 356) &= ~2u;
  MultiMenuSequence_17871c0(
      a1[132],
      *(_DWORD*)(*(_QWORD*)(a1[132] + 8LL * *(unsigned int*)(a1[132] + 352) +
                            304) +
                 1064LL) == 0,
      0);
  (*(void (**)(__int64*))(*a1 + 1112))(a1);
  return 0;
}

__int64 game_menu_1789b80(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = *a1;
  if (*a1 != 0) {
    v2 = GameData_21f8638;
    v3 = GameData_21f8640;
    if (GameData_21f8638 == GameData_21f8640) {
    LABEL_10:
      LOBYTE(v1) = 0;
    }
    else {
      v4 = *(_QWORD**)(v1 + 24);
      while (1) {
        v5 = *(_QWORD*)v2;
        v6 = *(_QWORD*)(*(_QWORD*)v2 + 8LL);
        if (v6 != 0 && (v7 = *(_QWORD*)(*(_QWORD*)(v6 + 24) + 8LL)) != 0) {
          v8 = *(_QWORD*)(v7 + 32);
        }
        else {
          v8 = 0;
        }
        if (*v4 == game_HashString(v8)) {
          break;
        }
        v2 += 8;
        if (v2 == v3) {
          goto LABEL_10;
        }
      }
      v9 = *(_QWORD*)(v5 + 8);
      if (v9 != 0 && (v10 = *(_QWORD*)(*(_QWORD*)(v9 + 24) + 8LL)) != 0) {
        v11 = *(_QWORD*)(v10 + 32);
      }
      else {
        v11 = 0;
      }
      LOBYTE(v1) = Registration_a4da40(msg_MessageManager_instance_, v11) ^ 1;
    }
  }
  return v1 & 1;
}

__int64 game_menu_1789c60(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 40);
  if (v2 != 0) {
    v3 = __dynamic_cast(v2, GameData_212c610, GameData_2131c18[0], 0);
    if (v3 != 0) {
      game_menu_1789c60(v3);
    }
  }
  result = *(_QWORD*)(a1 + 152);
  if ((result == 0 || (result = __dynamic_cast(result, GameData_2131c18[0],
                                               GameData_21319e8[0], 0)) == 0) &&
      *(_BYTE*)(a1 + 172) == 1) {
    result = GameRoutine_1553220(*(unsigned int*)(a1 + 168));
    if (*(_BYTE*)(a1 + 172) == 1) {
      *(_BYTE*)(a1 + 172) = 0;
    }
  }
  return result;
}

__int64 game_menu_178c6c0(_QWORD* a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  struct {
    _QWORD v4[4];
    _QWORD* v5;
  } v4_;
  struct {
    _BYTE v6[32];
    _BYTE* v7;
  } v6_;

  v6_.v7 = nullptr;
  v4_.v4[0] = GameData_20c91c8;
  v4_.v4[1] = a1;
  v4_.v5 = v4_.v4;
  BasicMenu_16e1f40(a1, (__int64)v6_.v6, (__int64)v4_.v4);
  if (v4_.v5 == v4_.v4) {
    v1 = 32;
  }
  else {
    if (v4_.v5 == nullptr) {
      goto LABEL_6;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*v4_.v5 + v1))((__int64)v4_.v5);
LABEL_6:
  result = (__int64)v6_.v7;
  if (v6_.v7 == v6_.v6) {
    v3 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      return result;
    }
    v3 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v6_.v7 + v3))((__int64)v6_.v7);
}

__int64 game_menu_1791ae0(_QWORD* a1, __int64* a2, unsigned __int8* a3,
                          _QWORD* a4, unsigned __int8* a5)
{
  __int64 v5;
  char* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  unsigned __int8* v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  struct {
    _BYTE v19[32];
    _BYTE* v20;
  } v19_;

  v5 = a1[2];
  v6 = (char*)a1[1];
  v7 = (_QWORD*)(a1[3] + (v5 >> 1));
  if ((v5 & 1) != 0) {
    v6 = *(char**)&v6[*v7];
  }
  v8 = *a2;
  v9 = *a3;
  v10 = (_QWORD*)a4[4];
  if (v10 != nullptr) {
    if (v10 == a4) {
      v11 = v8;
      v12 = v7;
      v13 = a4[4];
      v14 = a5;
      v15 = v9;
      v19_.v20 = v19_.v19;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, _BYTE*))(
          *v10 + 24LL))((void*)(v10), v13, v19_.v19);
      v9 = v15;
      v8 = v11;
      v7 = v12;
      a5 = v14;
    }
    else {
      v19_.v20 = (_BYTE*)a4[4];
      a4[4] = 0;
    }
  }
  else {
    v19_.v20 = nullptr;
  }
  v16 = ((__int64 (*)(_QWORD*, __int64, __int64, _BYTE*, _QWORD))v6)(
      v7, v8, v9, v19_.v19, *a5);
  if (v19_.v20 == v19_.v19) {
    v17 = 32;
    goto LABEL_12;
  }
  if (v19_.v20 != nullptr) {
    v17 = 40;
  LABEL_12:
    (*(void (**)(__int64))(*(_QWORD*)v19_.v20 + v17))((__int64)v19_.v20);
  }
  return v16;
}

__int64 game_menu_1798540(__int64 a1, __int64 a2, __int64 a3, __int64* a4,
                          char a5, char a6)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  __int64 v16;
  __int64 v17;
  char* v18;
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

  if ((a5 & 1) != 0) {
    if ((a6 & 1) != 0) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2263e60,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_2263e60) != 0) {
        GameData_2263de0 = 14;
        GameData_2263df8 = 0;
        GameData_2263e00 = 0;
        GameData_2263e08 = 0;
        GameData_2263e10 = 0;
        GameData_2263e18 = 0;
        GameData_2263e20 = 0;
        GameData_2263e48 = 0;
        GameData_2263e50 = 0;
        GameData_2263e58 = 0;
        GameData_2263e28 = 0;
        GameData_2263e30 = 0;
        GameData_2263e38 = 0;
        GameData_2263e40 = 0;
        GameData_2263de8 = 0;
        GameData_2263df0 = (__int64)GameHr_1798cb0;
        __cxa_guard_release((__int64)&GameData_2263e60);
      }
      v10 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 192, 16, 0);
      v12 = *a4;
      v11 = a4[1];
      v13 = v10;
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
      }
      v14 = GameData_212c608[0];
      *(_QWORD*)(v10 + 96) = 0;
      *(_QWORD*)(v10 + 104) = 0;
      *(_QWORD*)(v10 + 112) = 0;
      *(_QWORD*)(v10 + 120) = 0;
      *(_QWORD*)(v10 + 128) = 0;
      *(_WORD*)(v10 + 136) = 0;
      *(_QWORD*)(v10 + 16) = 0;
      *(_QWORD*)(v10 + 24) = "NULL";
      *(_QWORD*)(v10 + 138) = 0;
      *(_QWORD*)(v10 + 144) = 0;
      *(_QWORD*)(v10 + 32) = 0;
      *(_QWORD*)(v10 + 40) = 0;
      *(_QWORD*)(v10 + 48) = 0;
      *(_QWORD*)(v10 + 56) = 0;
      *(_QWORD*)(v10 + 64) = 0;
      *(_QWORD*)(v10 + 72) = 0;
      *(_QWORD*)(v10 + 80) = 0;
      *(_QWORD*)(v10 + 88) = 0;
      *(_QWORD*)v10 = v14 + 16;
      *(_QWORD*)(v10 + 8) = 0;
      result = game_ProcInst_Register(v10);
      *(_QWORD*)(v13 + 152) = a2;
      *(_QWORD*)(v13 + 160) = a3;
      *(_QWORD*)(v13 + 168) = v12;
      *(_QWORD*)(v13 + 176) = v11;
      *(_QWORD*)v13 = game_menu_UnitMakeSelectBody_vtable;
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
      }
      *(_DWORD*)(v13 + 184) = 0;
      *(_BYTE*)(v13 + 188) = 1;
      if (a1 != 0) {
        v16 = *(_QWORD*)(a1 + 40);
        if (v16 != 0) {
          *(_QWORD*)(v16 + 48) = v13;
          *(_QWORD*)(v13 + 56) = *(_QWORD*)(a1 + 40);
        }
        *(_QWORD*)(a1 + 40) = v13;
        *(_QWORD*)(v13 + 24) = "UnitMakeSelectBody";
        *(_QWORD*)(v13 + 32) = a1;
        *(_DWORD*)(v13 + 140) =
            (unsigned int)game_HashString32("UnitMakeSelectBody");
        v17 = v13;
        *(_QWORD*)(v13 + 64) = 0;
        *(_QWORD*)(v13 + 72) = 24;
        *(_QWORD*)(v13 + 80) = 1;
        v18 = &GameData_2263de0;
        goto LABEL_42;
      }
      goto LABEL_46;
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2263dd8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_2263dd8) != 0) {
      GameData_2263d58 = 14;
      GameData_2263d70 = 0;
      GameData_2263d78 = 0;
      GameData_2263d80 = 0;
      GameData_2263d88 = 0;
      GameData_2263d90 = 0;
      GameData_2263d98 = 0;
      GameData_2263dc0 = 0;
      GameData_2263dc8 = 0;
      GameData_2263dd0 = 0;
      GameData_2263da0 = 0;
      GameData_2263da8 = 0;
      GameData_2263db0 = 0;
      GameData_2263db8 = 0;
      GameData_2263d60 = 0;
      GameData_2263d68 = (__int64)GameHr_1798c30;
      __cxa_guard_release((__int64)&GameData_2263dd8);
    }
    v23 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         192, 16, 0);
    v24 = *a4;
    v11 = a4[1];
    v13 = v23;
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
    }
    v25 = GameData_212c608[0];
    *(_QWORD*)(v23 + 96) = 0;
    *(_QWORD*)(v23 + 104) = 0;
    *(_QWORD*)(v23 + 112) = 0;
    *(_QWORD*)(v23 + 120) = 0;
    *(_QWORD*)(v23 + 128) = 0;
    *(_WORD*)(v23 + 136) = 0;
    *(_QWORD*)(v23 + 16) = 0;
    *(_QWORD*)(v23 + 24) = "NULL";
    *(_QWORD*)(v23 + 138) = 0;
    *(_QWORD*)(v23 + 144) = 0;
    *(_QWORD*)(v23 + 32) = 0;
    *(_QWORD*)(v23 + 40) = 0;
    *(_QWORD*)(v23 + 48) = 0;
    *(_QWORD*)(v23 + 56) = 0;
    *(_QWORD*)(v23 + 64) = 0;
    *(_QWORD*)(v23 + 72) = 0;
    *(_QWORD*)(v23 + 80) = 0;
    *(_QWORD*)(v23 + 88) = 0;
    *(_QWORD*)v23 = v25 + 16;
    *(_QWORD*)(v23 + 8) = 0;
    result = game_ProcInst_Register(v23);
    *(_QWORD*)(v13 + 152) = a2;
    *(_QWORD*)(v13 + 160) = a3;
    *(_QWORD*)(v13 + 168) = v24;
    *(_QWORD*)(v13 + 176) = v11;
    *(_QWORD*)v13 = game_menu_UnitMakeSelectBody_vtable;
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
    }
    *(_DWORD*)(v13 + 184) = 0;
    *(_BYTE*)(v13 + 188) = 1;
    if (a1 != 0) {
      v26 = *(_QWORD*)(a1 + 40);
      if (v26 != 0) {
        *(_QWORD*)(v26 + 48) = v13;
        *(_QWORD*)(v13 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v13;
      *(_QWORD*)(v13 + 24) = "UnitMakeSelectBody";
      *(_QWORD*)(v13 + 32) = a1;
      *(_DWORD*)(v13 + 140) =
          (unsigned int)game_HashString32("UnitMakeSelectBody");
      v17 = v13;
      *(_QWORD*)(v13 + 64) = 0;
      *(_QWORD*)(v13 + 72) = 24;
      *(_QWORD*)(v13 + 80) = 1;
      v18 = &GameData_2263d58;
      goto LABEL_42;
    }
  LABEL_46:
    if ((*(_WORD*)(v13 + 136) & 1) == 0) {
      result = (__int64)ProcInst_657a50(v13, 1);
    }
    goto LABEL_48;
  }
  if ((a6 & 1) != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2263f70,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_2263f70) != 0) {
      GameData_2263ef0 = 14;
      GameData_2263f08 = 0;
      GameData_2263f10 = 0;
      GameData_2263f18 = 0;
      GameData_2263f20 = 0;
      GameData_2263f28 = 0;
      GameData_2263f30 = 0;
      GameData_2263f58 = 0;
      GameData_2263f60 = 0;
      GameData_2263f68 = 0;
      GameData_2263f38 = 0;
      GameData_2263f40 = 0;
      GameData_2263f48 = 0;
      GameData_2263f50 = 0;
      GameData_2263ef8 = 0;
      GameData_2263f00 = (__int64)GameHr_1798dd0;
      __cxa_guard_release((__int64)&GameData_2263f70);
    }
    v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         192, 16, 0);
    v20 = *a4;
    v11 = a4[1];
    v13 = v19;
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
    }
    v21 = GameData_212c608[0];
    *(_QWORD*)(v19 + 96) = 0;
    *(_QWORD*)(v19 + 104) = 0;
    *(_QWORD*)(v19 + 112) = 0;
    *(_QWORD*)(v19 + 120) = 0;
    *(_QWORD*)(v19 + 128) = 0;
    *(_WORD*)(v19 + 136) = 0;
    *(_QWORD*)(v19 + 16) = 0;
    *(_QWORD*)(v19 + 24) = "NULL";
    *(_QWORD*)(v19 + 138) = 0;
    *(_QWORD*)(v19 + 144) = 0;
    *(_QWORD*)(v19 + 32) = 0;
    *(_QWORD*)(v19 + 40) = 0;
    *(_QWORD*)(v19 + 48) = 0;
    *(_QWORD*)(v19 + 56) = 0;
    *(_QWORD*)(v19 + 64) = 0;
    *(_QWORD*)(v19 + 72) = 0;
    *(_QWORD*)(v19 + 80) = 0;
    *(_QWORD*)(v19 + 88) = 0;
    *(_QWORD*)v19 = v21 + 16;
    *(_QWORD*)(v19 + 8) = 0;
    result = game_ProcInst_Register(v19);
    *(_QWORD*)(v13 + 152) = a2;
    *(_QWORD*)(v13 + 160) = a3;
    *(_QWORD*)(v13 + 168) = v20;
    *(_QWORD*)(v13 + 176) = v11;
    *(_QWORD*)v13 = game_menu_UnitMakeSelectBody_vtable;
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
    }
    *(_DWORD*)(v13 + 184) = 0;
    *(_BYTE*)(v13 + 188) = 0;
    if (a1 != 0) {
      v22 = *(_QWORD*)(a1 + 40);
      if (v22 != 0) {
        *(_QWORD*)(v22 + 48) = v13;
        *(_QWORD*)(v13 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v13;
      *(_QWORD*)(v13 + 24) = "UnitMakeSelectBody";
      *(_QWORD*)(v13 + 32) = a1;
      *(_DWORD*)(v13 + 140) =
          (unsigned int)game_HashString32("UnitMakeSelectBody");
      *(_QWORD*)(v13 + 64) = 0;
      *(_QWORD*)(v13 + 72) = 24;
      *(_QWORD*)(v13 + 80) = 1;
      *(_QWORD*)(v13 + 8) = &GameData_2263ef0;
      *(_QWORD*)(v13 + 16) = &GameData_2263ef0;
      (*(void (**)(__int64))(*(_QWORD*)v13 + 32LL))(v13);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 136LL))(v13);
      if ((result & 1) != 0 && (*(_WORD*)(v13 + 136) & 0x100) == 0) {
        *(_WORD*)(v13 + 136) |= 0x100u;
      }
    LABEL_48:
      if (v11 == 0) {
        return result;
      }
      goto LABEL_49;
    }
    goto LABEL_46;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2263ee8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2263ee8) != 0) {
    GameData_2263e68 = 14;
    GameData_2263e80 = 0;
    GameData_2263e88 = 0;
    GameData_2263e90 = 0;
    GameData_2263e98 = 0;
    GameData_2263ea0 = 0;
    GameData_2263ea8 = 0;
    GameData_2263ed0 = 0;
    GameData_2263ed8 = 0;
    GameData_2263ee0 = 0;
    GameData_2263eb0 = 0;
    GameData_2263eb8 = 0;
    GameData_2263ec0 = 0;
    GameData_2263ec8 = 0;
    GameData_2263e70 = 0;
    GameData_2263e78 = (__int64)GameHr_1798d50;
    __cxa_guard_release((__int64)&GameData_2263ee8);
  }
  v27 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       192, 16, 0);
  v28 = *a4;
  v11 = a4[1];
  v13 = v27;
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
  }
  v29 = GameData_212c608[0];
  *(_QWORD*)(v27 + 96) = 0;
  *(_QWORD*)(v27 + 104) = 0;
  *(_QWORD*)(v27 + 112) = 0;
  *(_QWORD*)(v27 + 120) = 0;
  *(_QWORD*)(v27 + 128) = 0;
  *(_WORD*)(v27 + 136) = 0;
  *(_QWORD*)(v27 + 16) = 0;
  *(_QWORD*)(v27 + 24) = "NULL";
  *(_QWORD*)(v27 + 138) = 0;
  *(_QWORD*)(v27 + 144) = 0;
  *(_QWORD*)(v27 + 32) = 0;
  *(_QWORD*)(v27 + 40) = 0;
  *(_QWORD*)(v27 + 48) = 0;
  *(_QWORD*)(v27 + 56) = 0;
  *(_QWORD*)(v27 + 64) = 0;
  *(_QWORD*)(v27 + 72) = 0;
  *(_QWORD*)(v27 + 80) = 0;
  *(_QWORD*)(v27 + 88) = 0;
  *(_QWORD*)v27 = v29 + 16;
  *(_QWORD*)(v27 + 8) = 0;
  result = game_ProcInst_Register(v27);
  *(_QWORD*)(v13 + 152) = a2;
  *(_QWORD*)(v13 + 160) = a3;
  *(_QWORD*)(v13 + 168) = v28;
  *(_QWORD*)(v13 + 176) = v11;
  *(_QWORD*)v13 = game_menu_UnitMakeSelectBody_vtable;
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_DWORD*)(v13 + 184) = 0;
  *(_BYTE*)(v13 + 188) = 0;
  if (a1 == 0) {
    goto LABEL_46;
  }
  v30 = *(_QWORD*)(a1 + 40);
  if (v30 != 0) {
    *(_QWORD*)(v30 + 48) = v13;
    *(_QWORD*)(v13 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v13;
  *(_QWORD*)(v13 + 24) = "UnitMakeSelectBody";
  *(_QWORD*)(v13 + 32) = a1;
  *(_DWORD*)(v13 + 140) = (unsigned int)game_HashString32("UnitMakeSelectBody");
  v17 = v13;
  *(_QWORD*)(v13 + 64) = 0;
  *(_QWORD*)(v13 + 72) = 24;
  *(_QWORD*)(v13 + 80) = 1;
  v18 = &GameData_2263e68;
LABEL_42:
  *(_QWORD*)(v13 + 8) = v18;
  *(_QWORD*)(v13 + 16) = v18;
  (*(void (**)(__int64))(*(_QWORD*)v13 + 32LL))(v17);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 136LL))(v13);
  if ((result & 1) == 0 || (*(_WORD*)(v13 + 136) & 0x100) != 0) {
    goto LABEL_48;
  }
  *(_WORD*)(v13 + 136) |= 0x100u;
  if (v11 == 0) {
    return result;
  }
LABEL_49:
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    return std___1___shared_weak_count___release_weak(v11);
  }
  return result;
}

__int64 game_menu_1798e70(__int64 a1, __int64 a2, __int64 a3, __int64* a4,
                          char a5)
{
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  if ((a5 & 1) == 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2264100,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_2264100) != 0) {
      GameData_2264040 = 13;
      GameData_2264058 = 0;
      GameData_2264060 = 0;
      GameData_2264068 = 0;
      GameData_2264070 = 0;
      GameData_2264078 = 0;
      GameData_2264098 = 0;
      GameData_22640a0 = 0;
      GameData_22640a8 = 0;
      GameData_22640b0 = 0;
      GameData_22640b8 = 0;
      GameData_22640c0 = 0;
      GameData_22640e8 = 0;
      GameData_22640f0 = 0;
      GameData_22640f8 = 0;
      GameData_22640e0 = 0;
      GameData_22640d0 = 0;
      GameData_22640d8 = 0;
      GameData_2264048 = 0;
      GameData_2264050 = (__int64)GameRoutine_17992c0;
      GameData_22640c8 = 0;
      GameData_2264080 = 14;
      GameData_2264088 = 0;
      GameData_2264090 = (__int64)GameHr_1798d50;
      __cxa_guard_release((__int64)&GameData_2264100);
    }
    v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         192, 16, 0);
    v17 = *a4;
    v10 = a4[1];
    v12 = v16;
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
    }
    v18 = GameData_212c608[0];
    *(_QWORD*)(v16 + 96) = 0;
    *(_QWORD*)(v16 + 104) = 0;
    *(_QWORD*)(v16 + 112) = 0;
    *(_QWORD*)(v16 + 120) = 0;
    *(_QWORD*)(v16 + 128) = 0;
    *(_WORD*)(v16 + 136) = 0;
    *(_QWORD*)(v16 + 16) = 0;
    *(_QWORD*)(v16 + 24) = "NULL";
    *(_QWORD*)(v16 + 138) = 0;
    *(_QWORD*)(v16 + 144) = 0;
    *(_QWORD*)(v16 + 32) = 0;
    *(_QWORD*)(v16 + 40) = 0;
    *(_QWORD*)(v16 + 48) = 0;
    *(_QWORD*)(v16 + 56) = 0;
    *(_QWORD*)(v16 + 64) = 0;
    *(_QWORD*)(v16 + 72) = 0;
    *(_QWORD*)(v16 + 80) = 0;
    *(_QWORD*)(v16 + 88) = 0;
    *(_QWORD*)v16 = v18 + 16;
    *(_QWORD*)(v16 + 8) = 0;
    result = game_ProcInst_Register(v16);
    *(_QWORD*)(v12 + 152) = a2;
    *(_QWORD*)(v12 + 160) = a3;
    *(_QWORD*)(v12 + 168) = v17;
    *(_QWORD*)(v12 + 176) = v10;
    *(_QWORD*)v12 = game_menu_UnitMakeSelectBody_vtable;
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
    }
    *(_DWORD*)(v12 + 184) = 0;
    *(_BYTE*)(v12 + 188) = 0;
    if (a1 != 0) {
      v19 = *(_QWORD*)(a1 + 40);
      if (v19 != 0) {
        *(_QWORD*)(v19 + 48) = v12;
        *(_QWORD*)(v12 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v12;
      *(_QWORD*)(v12 + 24) = "UnitMakeSelectBody";
      *(_QWORD*)(v12 + 32) = a1;
      *(_DWORD*)(v12 + 140) =
          (unsigned int)game_HashString32("UnitMakeSelectBody");
      *(_QWORD*)(v12 + 64) = 0;
      *(_QWORD*)(v12 + 72) = 24;
      *(_QWORD*)(v12 + 80) = 1;
      *(_QWORD*)(v12 + 8) = &GameData_2264040;
      *(_QWORD*)(v12 + 16) = &GameData_2264040;
      (*(void (**)(__int64))(*(_QWORD*)v12 + 32LL))(v12);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 136LL))(v12);
      if ((result & 1) != 0 && (*(_WORD*)(v12 + 136) & 0x100) == 0) {
        *(_WORD*)(v12 + 136) |= 0x100u;
      }
    LABEL_27:
      if (v10 == 0) {
        return result;
      }
      goto LABEL_28;
    }
  LABEL_25:
    if ((*(_WORD*)(v12 + 136) & 1) == 0) {
      result = (__int64)ProcInst_657a50(v12, 1);
    }
    goto LABEL_27;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2264038,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2264038) != 0) {
    GameData_2263f78 = 13;
    GameData_2263f90 = 0;
    GameData_2263f98 = 0;
    GameData_2263fa0 = 0;
    GameData_2263fa8 = 0;
    GameData_2263fb0 = 0;
    GameData_2263fd0 = 0;
    GameData_2263fd8 = 0;
    GameData_2263fe0 = 0;
    GameData_2263fe8 = 0;
    GameData_2263ff0 = 0;
    GameData_2263ff8 = 0;
    GameData_2264020 = 0;
    GameData_2264028 = 0;
    GameData_2264030 = 0;
    GameData_2264018 = 0;
    GameData_2264008 = 0;
    GameData_2264010 = 0;
    GameData_2263f80 = 0;
    GameData_2263f88 = (__int64)GameRoutine_17992c0;
    GameData_2264000 = 0;
    GameData_2263fb8 = 14;
    GameData_2263fc0 = 0;
    GameData_2263fc8 = (__int64)GameHr_1798c30;
    __cxa_guard_release((__int64)&GameData_2264038);
  }
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      192, 16, 0);
  v11 = *a4;
  v10 = a4[1];
  v12 = v9;
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  v13 = GameData_212c608[0];
  *(_QWORD*)(v9 + 96) = 0;
  *(_QWORD*)(v9 + 104) = 0;
  *(_QWORD*)(v9 + 112) = 0;
  *(_QWORD*)(v9 + 120) = 0;
  *(_QWORD*)(v9 + 128) = 0;
  *(_WORD*)(v9 + 136) = 0;
  *(_QWORD*)(v9 + 16) = 0;
  *(_QWORD*)(v9 + 24) = "NULL";
  *(_QWORD*)(v9 + 138) = 0;
  *(_QWORD*)(v9 + 144) = 0;
  *(_QWORD*)(v9 + 32) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_QWORD*)(v9 + 80) = 0;
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)v9 = v13 + 16;
  *(_QWORD*)(v9 + 8) = 0;
  result = game_ProcInst_Register(v9);
  *(_QWORD*)(v12 + 152) = a2;
  *(_QWORD*)(v12 + 160) = a3;
  *(_QWORD*)(v12 + 168) = v11;
  *(_QWORD*)(v12 + 176) = v10;
  *(_QWORD*)v12 = game_menu_UnitMakeSelectBody_vtable;
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_DWORD*)(v12 + 184) = 0;
  *(_BYTE*)(v12 + 188) = 1;
  if (a1 == 0) {
    goto LABEL_25;
  }
  v15 = *(_QWORD*)(a1 + 40);
  if (v15 != 0) {
    *(_QWORD*)(v15 + 48) = v12;
    *(_QWORD*)(v12 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v12;
  *(_QWORD*)(v12 + 24) = "UnitMakeSelectBody";
  *(_QWORD*)(v12 + 32) = a1;
  *(_DWORD*)(v12 + 140) = (unsigned int)game_HashString32("UnitMakeSelectBody");
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 24;
  *(_QWORD*)(v12 + 80) = 1;
  *(_QWORD*)(v12 + 8) = &GameData_2263f78;
  *(_QWORD*)(v12 + 16) = &GameData_2263f78;
  (*(void (**)(__int64))(*(_QWORD*)v12 + 32LL))(v12);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 136LL))(v12);
  if ((result & 1) == 0 || (*(_WORD*)(v12 + 136) & 0x100) != 0) {
    goto LABEL_27;
  }
  *(_WORD*)(v12 + 136) |= 0x100u;
  if (v10 == 0) {
    return result;
  }
LABEL_28:
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    return std___1___shared_weak_count___release_weak(v10);
  }
  return result;
}

__int64 game_menu_17992d0(__int64 a1, __int64 a2, __int64 a3, __int64* a4,
                          char a5)
{
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  if ((a5 & 1) == 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2264310,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_2264310) != 0) {
      GameData_2264218 = 0;
      GameData_2264220 = (__int64)GameRoutine_1799760;
      GameData_2264210 = 13;
      GameData_2264290 = 13;
      GameData_2264228 = 0;
      GameData_2264230 = 0;
      GameData_2264238 = 0;
      GameData_2264240 = 0;
      GameData_2264248 = 0;
      GameData_2264268 = 0;
      GameData_2264270 = 0;
      GameData_2264278 = 0;
      GameData_2264280 = 0;
      GameData_2264288 = 0;
      GameData_22642a8 = 0;
      GameData_2264250 = 14;
      GameData_2264298 = 0;
      GameData_22642a0 = (__int64)GameRoutine_1799ce0;
      GameData_22642b0 = 0;
      GameData_22642b8 = 0;
      GameData_22642c0 = 0;
      GameData_22642c8 = 0;
      GameData_22642d0 = 0;
      GameData_22642f8 = 0;
      GameData_2264300 = 0;
      GameData_2264308 = 0;
      GameData_2264258 = 0;
      GameData_2264260 = (__int64)UnitMakeSelectBody_1799a80;
      GameData_22642f0 = 0;
      GameData_22642e0 = 0;
      GameData_22642e8 = 0;
      GameData_22642d8 = 0;
      __cxa_guard_release((__int64)&GameData_2264310);
    }
    v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         192, 16, 0);
    v17 = *a4;
    v10 = a4[1];
    v12 = v16;
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
    }
    v18 = GameData_212c608[0];
    *(_QWORD*)(v16 + 96) = 0;
    *(_QWORD*)(v16 + 104) = 0;
    *(_QWORD*)(v16 + 112) = 0;
    *(_QWORD*)(v16 + 120) = 0;
    *(_QWORD*)(v16 + 128) = 0;
    *(_WORD*)(v16 + 136) = 0;
    *(_QWORD*)(v16 + 16) = 0;
    *(_QWORD*)(v16 + 24) = "NULL";
    *(_QWORD*)(v16 + 138) = 0;
    *(_QWORD*)(v16 + 144) = 0;
    *(_QWORD*)(v16 + 32) = 0;
    *(_QWORD*)(v16 + 40) = 0;
    *(_QWORD*)(v16 + 48) = 0;
    *(_QWORD*)(v16 + 56) = 0;
    *(_QWORD*)(v16 + 64) = 0;
    *(_QWORD*)(v16 + 72) = 0;
    *(_QWORD*)(v16 + 80) = 0;
    *(_QWORD*)(v16 + 88) = 0;
    *(_QWORD*)v16 = v18 + 16;
    *(_QWORD*)(v16 + 8) = 0;
    result = game_ProcInst_Register(v16);
    *(_QWORD*)(v12 + 152) = a2;
    *(_QWORD*)(v12 + 160) = a3;
    *(_QWORD*)(v12 + 168) = v17;
    *(_QWORD*)(v12 + 176) = v10;
    *(_QWORD*)v12 = game_menu_UnitMakeSelectBody_vtable;
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
    }
    *(_DWORD*)(v12 + 184) = 0;
    *(_BYTE*)(v12 + 188) = 0;
    if (a1 != 0) {
      v19 = *(_QWORD*)(a1 + 40);
      if (v19 != 0) {
        *(_QWORD*)(v19 + 48) = v12;
        *(_QWORD*)(v12 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v12;
      *(_QWORD*)(v12 + 24) = "UnitMakeSelectBody";
      *(_QWORD*)(v12 + 32) = a1;
      *(_DWORD*)(v12 + 140) =
          (unsigned int)game_HashString32("UnitMakeSelectBody");
      *(_QWORD*)(v12 + 64) = 0;
      *(_QWORD*)(v12 + 72) = 24;
      *(_QWORD*)(v12 + 80) = 1;
      *(_QWORD*)(v12 + 8) = &GameData_2264210;
      *(_QWORD*)(v12 + 16) = &GameData_2264210;
      (*(void (**)(__int64))(*(_QWORD*)v12 + 32LL))(v12);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 136LL))(v12);
      if ((result & 1) != 0 && (*(_WORD*)(v12 + 136) & 0x100) == 0) {
        *(_WORD*)(v12 + 136) |= 0x100u;
      }
    LABEL_27:
      if (v10 == 0) {
        return result;
      }
      goto LABEL_28;
    }
  LABEL_25:
    if ((*(_WORD*)(v12 + 136) & 1) == 0) {
      result = (__int64)ProcInst_657a50(v12, 1);
    }
    goto LABEL_27;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2264208,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2264208) != 0) {
    GameData_2264110 = 0;
    GameData_2264118 = (__int64)GameRoutine_1799760;
    GameData_2264108 = 13;
    GameData_2264188 = 13;
    GameData_2264120 = 0;
    GameData_2264128 = 0;
    GameData_2264130 = 0;
    GameData_2264138 = 0;
    GameData_2264140 = 0;
    GameData_2264160 = 0;
    GameData_2264168 = 0;
    GameData_2264170 = 0;
    GameData_2264178 = 0;
    GameData_2264180 = 0;
    GameData_22641a0 = 0;
    GameData_2264148 = 14;
    GameData_2264190 = 0;
    GameData_2264198 = (__int64)GameRoutine_17999d0;
    GameData_22641a8 = 0;
    GameData_22641b0 = 0;
    GameData_22641b8 = 0;
    GameData_22641c0 = 0;
    GameData_22641c8 = 0;
    GameData_22641f0 = 0;
    GameData_22641f8 = 0;
    GameData_2264200 = 0;
    GameData_2264150 = 0;
    GameData_2264158 = (__int64)UnitMakeSelectBody_1799770;
    GameData_22641e8 = 0;
    GameData_22641d8 = 0;
    GameData_22641e0 = 0;
    GameData_22641d0 = 0;
    __cxa_guard_release((__int64)&GameData_2264208);
  }
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      192, 16, 0);
  v11 = *a4;
  v10 = a4[1];
  v12 = v9;
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  v13 = GameData_212c608[0];
  *(_QWORD*)(v9 + 96) = 0;
  *(_QWORD*)(v9 + 104) = 0;
  *(_QWORD*)(v9 + 112) = 0;
  *(_QWORD*)(v9 + 120) = 0;
  *(_QWORD*)(v9 + 128) = 0;
  *(_WORD*)(v9 + 136) = 0;
  *(_QWORD*)(v9 + 16) = 0;
  *(_QWORD*)(v9 + 24) = "NULL";
  *(_QWORD*)(v9 + 138) = 0;
  *(_QWORD*)(v9 + 144) = 0;
  *(_QWORD*)(v9 + 32) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_QWORD*)(v9 + 80) = 0;
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)v9 = v13 + 16;
  *(_QWORD*)(v9 + 8) = 0;
  result = game_ProcInst_Register(v9);
  *(_QWORD*)(v12 + 152) = a2;
  *(_QWORD*)(v12 + 160) = a3;
  *(_QWORD*)(v12 + 168) = v11;
  *(_QWORD*)(v12 + 176) = v10;
  *(_QWORD*)v12 = game_menu_UnitMakeSelectBody_vtable;
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_DWORD*)(v12 + 184) = 0;
  *(_BYTE*)(v12 + 188) = 1;
  if (a1 == 0) {
    goto LABEL_25;
  }
  v15 = *(_QWORD*)(a1 + 40);
  if (v15 != 0) {
    *(_QWORD*)(v15 + 48) = v12;
    *(_QWORD*)(v12 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v12;
  *(_QWORD*)(v12 + 24) = "UnitMakeSelectBody";
  *(_QWORD*)(v12 + 32) = a1;
  *(_DWORD*)(v12 + 140) = (unsigned int)game_HashString32("UnitMakeSelectBody");
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 24;
  *(_QWORD*)(v12 + 80) = 1;
  *(_QWORD*)(v12 + 8) = &GameData_2264108;
  *(_QWORD*)(v12 + 16) = &GameData_2264108;
  (*(void (**)(__int64))(*(_QWORD*)v12 + 32LL))(v12);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 136LL))(v12);
  if ((result & 1) == 0 || (*(_WORD*)(v12 + 136) & 0x100) != 0) {
    goto LABEL_27;
  }
  *(_WORD*)(v12 + 136) |= 0x100u;
  if (v10 == 0) {
    return result;
  }
LABEL_28:
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    return std___1___shared_weak_count___release_weak(v10);
  }
  return result;
}

__int64 game_menu_1799d90(__int64 a1, __int64 a2, __int64 a3, __int64* a4,
                          char a5)
{
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  if ((a5 & 1) == 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2264520,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_2264520) != 0) {
      GameData_2264428 = 0;
      GameData_2264430 = (__int64)GameRoutine_179a220;
      GameData_2264420 = 13;
      GameData_22644a0 = 13;
      GameData_2264438 = 0;
      GameData_2264440 = 0;
      GameData_2264448 = 0;
      GameData_2264450 = 0;
      GameData_2264458 = 0;
      GameData_2264478 = 0;
      GameData_2264480 = 0;
      GameData_2264488 = 0;
      GameData_2264490 = 0;
      GameData_2264498 = 0;
      GameData_22644b8 = 0;
      GameData_2264460 = 14;
      GameData_22644a8 = 0;
      GameData_22644b0 = (__int64)GameRoutine_179a4b0;
      GameData_22644c0 = 0;
      GameData_22644c8 = 0;
      GameData_22644d0 = 0;
      GameData_22644d8 = 0;
      GameData_22644e0 = 0;
      GameData_2264508 = 0;
      GameData_2264510 = 0;
      GameData_2264518 = 0;
      GameData_2264468 = 0;
      GameData_2264470 = (__int64)UnitMakeSelectBody_179a4c0;
      GameData_2264500 = 0;
      GameData_22644f0 = 0;
      GameData_22644f8 = 0;
      GameData_22644e8 = 0;
      __cxa_guard_release((__int64)&GameData_2264520);
    }
    v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         192, 16, 0);
    v17 = *a4;
    v10 = a4[1];
    v12 = v16;
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
    }
    v18 = GameData_212c608[0];
    *(_QWORD*)(v16 + 96) = 0;
    *(_QWORD*)(v16 + 104) = 0;
    *(_QWORD*)(v16 + 112) = 0;
    *(_QWORD*)(v16 + 120) = 0;
    *(_QWORD*)(v16 + 128) = 0;
    *(_WORD*)(v16 + 136) = 0;
    *(_QWORD*)(v16 + 16) = 0;
    *(_QWORD*)(v16 + 24) = "NULL";
    *(_QWORD*)(v16 + 138) = 0;
    *(_QWORD*)(v16 + 144) = 0;
    *(_QWORD*)(v16 + 32) = 0;
    *(_QWORD*)(v16 + 40) = 0;
    *(_QWORD*)(v16 + 48) = 0;
    *(_QWORD*)(v16 + 56) = 0;
    *(_QWORD*)(v16 + 64) = 0;
    *(_QWORD*)(v16 + 72) = 0;
    *(_QWORD*)(v16 + 80) = 0;
    *(_QWORD*)(v16 + 88) = 0;
    *(_QWORD*)v16 = v18 + 16;
    *(_QWORD*)(v16 + 8) = 0;
    result = game_ProcInst_Register(v16);
    *(_QWORD*)(v12 + 152) = a2;
    *(_QWORD*)(v12 + 160) = a3;
    *(_QWORD*)(v12 + 168) = v17;
    *(_QWORD*)(v12 + 176) = v10;
    *(_QWORD*)v12 = game_menu_UnitMakeSelectBody_vtable;
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
    }
    *(_DWORD*)(v12 + 184) = 0;
    *(_BYTE*)(v12 + 188) = 0;
    if (a1 != 0) {
      v19 = *(_QWORD*)(a1 + 40);
      if (v19 != 0) {
        *(_QWORD*)(v19 + 48) = v12;
        *(_QWORD*)(v12 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v12;
      *(_QWORD*)(v12 + 24) = "UnitMakeSelectBody";
      *(_QWORD*)(v12 + 32) = a1;
      *(_DWORD*)(v12 + 140) =
          (unsigned int)game_HashString32("UnitMakeSelectBody");
      *(_QWORD*)(v12 + 64) = 0;
      *(_QWORD*)(v12 + 72) = 24;
      *(_QWORD*)(v12 + 80) = 1;
      *(_QWORD*)(v12 + 8) = &GameData_2264420;
      *(_QWORD*)(v12 + 16) = &GameData_2264420;
      (*(void (**)(__int64))(*(_QWORD*)v12 + 32LL))(v12);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 136LL))(v12);
      if ((result & 1) != 0 && (*(_WORD*)(v12 + 136) & 0x100) == 0) {
        *(_WORD*)(v12 + 136) |= 0x100u;
      }
    LABEL_27:
      if (v10 == 0) {
        return result;
      }
      goto LABEL_28;
    }
  LABEL_25:
    if ((*(_WORD*)(v12 + 136) & 1) == 0) {
      result = (__int64)ProcInst_657a50(v12, 1);
    }
    goto LABEL_27;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2264418,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2264418) != 0) {
    GameData_2264320 = 0;
    GameData_2264328 = (__int64)GameRoutine_179a220;
    GameData_2264318 = 13;
    GameData_2264398 = 13;
    GameData_2264330 = 0;
    GameData_2264338 = 0;
    GameData_2264340 = 0;
    GameData_2264348 = 0;
    GameData_2264350 = 0;
    GameData_2264370 = 0;
    GameData_2264378 = 0;
    GameData_2264380 = 0;
    GameData_2264388 = 0;
    GameData_2264390 = 0;
    GameData_22643b0 = 0;
    GameData_2264358 = 14;
    GameData_22643a0 = 0;
    GameData_22643a8 = (__int64)GameRoutine_179a4b0;
    GameData_22643b8 = 0;
    GameData_22643c0 = 0;
    GameData_22643c8 = 0;
    GameData_22643d0 = 0;
    GameData_22643d8 = 0;
    GameData_2264400 = 0;
    GameData_2264408 = 0;
    GameData_2264410 = 0;
    GameData_2264360 = 0;
    GameData_2264368 = (__int64)UnitMakeSelectBody_179a240;
    GameData_22643f8 = 0;
    GameData_22643e8 = 0;
    GameData_22643f0 = 0;
    GameData_22643e0 = 0;
    __cxa_guard_release((__int64)&GameData_2264418);
  }
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      192, 16, 0);
  v11 = *a4;
  v10 = a4[1];
  v12 = v9;
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  v13 = GameData_212c608[0];
  *(_QWORD*)(v9 + 96) = 0;
  *(_QWORD*)(v9 + 104) = 0;
  *(_QWORD*)(v9 + 112) = 0;
  *(_QWORD*)(v9 + 120) = 0;
  *(_QWORD*)(v9 + 128) = 0;
  *(_WORD*)(v9 + 136) = 0;
  *(_QWORD*)(v9 + 16) = 0;
  *(_QWORD*)(v9 + 24) = "NULL";
  *(_QWORD*)(v9 + 138) = 0;
  *(_QWORD*)(v9 + 144) = 0;
  *(_QWORD*)(v9 + 32) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_QWORD*)(v9 + 80) = 0;
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)v9 = v13 + 16;
  *(_QWORD*)(v9 + 8) = 0;
  result = game_ProcInst_Register(v9);
  *(_QWORD*)(v12 + 152) = a2;
  *(_QWORD*)(v12 + 160) = a3;
  *(_QWORD*)(v12 + 168) = v11;
  *(_QWORD*)(v12 + 176) = v10;
  *(_QWORD*)v12 = game_menu_UnitMakeSelectBody_vtable;
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_DWORD*)(v12 + 184) = 0;
  *(_BYTE*)(v12 + 188) = 1;
  if (a1 == 0) {
    goto LABEL_25;
  }
  v15 = *(_QWORD*)(a1 + 40);
  if (v15 != 0) {
    *(_QWORD*)(v15 + 48) = v12;
    *(_QWORD*)(v12 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v12;
  *(_QWORD*)(v12 + 24) = "UnitMakeSelectBody";
  *(_QWORD*)(v12 + 32) = a1;
  *(_DWORD*)(v12 + 140) = (unsigned int)game_HashString32("UnitMakeSelectBody");
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 24;
  *(_QWORD*)(v12 + 80) = 1;
  *(_QWORD*)(v12 + 8) = &GameData_2264318;
  *(_QWORD*)(v12 + 16) = &GameData_2264318;
  (*(void (**)(__int64))(*(_QWORD*)v12 + 32LL))(v12);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 136LL))(v12);
  if ((result & 1) == 0 || (*(_WORD*)(v12 + 136) & 0x100) != 0) {
    goto LABEL_27;
  }
  *(_WORD*)(v12 + 136) |= 0x100u;
  if (v10 == 0) {
    return result;
  }
LABEL_28:
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    return std___1___shared_weak_count___release_weak(v10);
  }
  return result;
}

void game_menu_179ac50(__int64 a1, __int64 a2, int a3)
{
  float v6;
  float v7;
  float v8;
  __int128 v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  bool v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  __int128 v25;
  unsigned __int8* v26;
  unsigned int v27;
  float v28;
  float v29;
  float v30;

  v6 = *(float*)(a1 + 184) + 0x1.0aaaaa0000000p+4f;
  *(float*)(a1 + 184) = v6;
  v7 = *(float*)(a2 + 36);
  if (v6 >= v7) {
    *(float*)(a1 + 184) = v7;
    v8 = *(float*)(a2 + 36);
  }
  else {
    v8 = *(float*)(a2 + 36);
    v7 = v6;
  }
  v29 = GameRoutine_618640(5, *(float*)a2, *(float*)(a2 + 16), v7, v8);
  v30 = GameRoutine_618640(5, *(float*)(a2 + 8), *(float*)(a2 + 24),
                           *(float*)(a1 + 184), *(float*)(a2 + 36));
  v28 = GameRoutine_618640(5, *(float*)(a2 + 4), *(float*)(a2 + 20),
                           *(float*)(a1 + 184), *(float*)(a2 + 36));
  *(_QWORD*)&v9 = __PAIR64__(LODWORD(v28), LODWORD(v29));
  *((_QWORD*)&v9 + 1) = LODWORD(v30);
  *(_OWORD*)(*(_QWORD*)(a1 + 168) + 32LL) = v9;
  v10 = GameRoutine_618640(a3, *(float*)(a2 + 40), *(float*)(a2 + 44),
                           *(float*)(a1 + 184), *(float*)(a2 + 36));
  v11 = GameRoutine_618640(a3, *(float*)(a2 + 48), *(float*)(a2 + 52),
                           *(float*)(a1 + 184), *(float*)(a2 + 36));
  v12 = (float)(PSEUDO_UNFUSED((float)(v11 + *(float*)(a2 + 32)) *
                               0x1.1df46a0000000p-6f)) +
        (float)(roundf((float)((float)(v11 + *(float*)(a2 + 32)) *
                               0x1.1df46a0000000p-6f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v12 <= 0x1.921fb60000000p+0f) {
    v14 = v12;
    if (v12 >= -0x1.921fb60000000p+0f) {
      goto LABEL_9;
    }
    v13 = -0x1.921fb60000000p+1f;
  }
  else {
    v13 = 0x1.921fb60000000p+1f;
  }
  v14 = v13 - v12;
LABEL_9:
  v15 =
      v29 +
      (float)((float)(v14 *
                      (float)((float)((float)-(
                                          float)(*(float*)((char*)((
                                                               __int128*)0x10LL) +
                                                           (_QWORD)
                                                               GameData_212c190) -
                                                 (float)((float)(*(float*)((char*)((
                                                                               _UNKNOWN**)0x8LL) +
                                                                           (_QWORD)
                                                                               GameData_212c190 +
                                                                           4) +
                                                                 (float)((float)-(
                                                                             float)(*(float*)((char*)((
                                                                                                  _UNKNOWN**)0x8LL) +
                                                                                              (_QWORD)
                                                                                                  GameData_212c190) -
                                                                                    (float)((float)(*((float*)
                                                                                                          GameData_212c190 +
                                                                                                      1) -
                                                                                                    (float)(*(float*)
                                                                                                                GameData_212c190 *
                                                                                                            (float)(v14 *
                                                                                                                    v14))) *
                                                                                            (float)(v14 *
                                                                                                    v14))) *
                                                                         (float)(v14 *
                                                                                 v14))) *
                                                         (float)(v14 * v14))) *
                                      (float)(v14 * v14)) +
                              0x1.0000000000000p+0f)) *
              v10);
  if (v12 < -0x1.921fb60000000p+0f) {
    v16 = -0x1.0000000000000p+0f;
  }
  else {
    v16 = 0x1.0000000000000p+0f;
  }
  v17 = -0x1.921fb60000000p+1f - v12;
  if (v12 >= -0x1.921fb60000000p+0f) {
    v17 = v12;
  }
  v18 = 0x1.921fb60000000p+1f - v12;
  v19 = v12 <= 0x1.921fb60000000p+0f;
  if (v12 > 0x1.921fb60000000p+0f) {
    v20 = -0x1.0000000000000p+0f;
  }
  else {
    v20 = v16;
  }
  if (v19) {
    v21 = v17;
  }
  else {
    v21 = v18;
  }
  v22 = v21 * v21;
  v23 =
      v30 +
      (float)((float)(v20 *
                      (float)((float)((float)-(
                                          float)(*(float*)((char*)((
                                                               __int128*)0x10LL) +
                                                           (_QWORD)
                                                               GameData_212c188) -
                                                 (float)((float)(*(float*)((char*)((
                                                                               _UNKNOWN**)0x8LL) +
                                                                           (_QWORD)
                                                                               GameData_212c188 +
                                                                           4) +
                                                                 (float)((float)-(
                                                                             float)(*(float*)((char*)((
                                                                                                  _UNKNOWN**)0x8LL) +
                                                                                              (_QWORD)
                                                                                                  GameData_212c188) -
                                                                                    (float)((float)(*((float*)
                                                                                                          GameData_212c188 +
                                                                                                      1) -
                                                                                                    (float)(*(float*)
                                                                                                                GameData_212c188 *
                                                                                                            v22)) *
                                                                                            v22)) *
                                                                         v22)) *
                                                         v22)) *
                                      v22) +
                              0x1.0000000000000p+0f)) *
              v10);
  v24 = 0x1.374bc60000000p-4f;
  if (*(_BYTE*)(a2 + 57) != 0) {
    v24 = 0x1.d2f1aa0000000p-3f;
  }
  if (*(_BYTE*)(a2 + 56) == 0) {
    v24 = 0x0.0p+0f;
  }
  *(float*)&v25 = v15;
  *((float*)&v25 + 1) = v28 + v24;
  *((_QWORD*)&v25 + 1) = LODWORD(v23);
  *(_OWORD*)(*(_QWORD*)(a1 + 168) + 16LL) = v25;
  gfx_render_b3aee0(*(float32x4_t**)(a1 + 168));
  if (*(float*)(a1 + 184) >= *(float*)(a2 + 36)) {
    v26 = *(unsigned __int8**)(a1 + 16);
    if (v26 != nullptr) {
      v27 = *v26;
      if (v27 <= 0x10 && ((1 << v27) & 0x1CE00) != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
}

#pragma GCC visibility pop
