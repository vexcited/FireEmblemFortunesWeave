#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* LayoutAccessor_155c910(_QWORD*, __int64*);
_QWORD* ui_LayoutAccessor_Setup_155dda0(_QWORD*, _QWORD*);
__attribute__((swiftcall)) void
EquipInfoItem_SkillStock_16cce20(PSEUDO_X8, __int64, _QWORD**, _BYTE**,
                                 __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void snd_BGM_getFirstHandle(PSEUDO_X8, __int64);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64* Manager_bc6460(_QWORD*, __int64, char);
unsigned __int128 Manager_bc6460_pair(_QWORD*, __int64,
                                      char) __asm__("Manager_bc6460");
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameManager_a22bd0();
__int64 GameRoutine_155da20(__int64 result, float);
__int64 GameRoutine_159dda0(__int64, char, char);
__int64 GameRoutine_1631660(__int64 result, char, char);
__int64 GameRoutine_2b0();
__int64 LayoutAccessor_155cda0(__int64 result, const char*, const char*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 Util_1586140(__int64*, __int64*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_14a3920(__int64 result);
__int64 game_gameui_1593d90(__int64*, __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_a290c0(__int64 result, const char*, __int64, int, char, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_SetPaneSize(__int64 result, __int64, float, float);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
__int64 ui_LayoutAccessor_SetPriority(__int64 result, int);
char* game_util_Format(const char*, ...);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern __int128 GameData_1a83170;
extern __int128 GameData_1a833a0;
extern __int128 GameData_1a83490;
extern __int128 GameData_1a83690;
extern __int16 GameData_225d720;
extern __int16 GameData_225d758;
extern __int16 GameData_225d790;
extern __int16 GameData_225d7c8;
extern __int16 GameData_225d800;
extern __int16 GameData_225d838;
extern __int16 GameData_225d870;
extern __int16 GameData_225d8a8;
extern __int16 GameData_225d8e0;
extern __int16 GameData_225d918;
extern __int16 GameData_225d950;
extern __int16 GameData_225d988;
extern __int16 GameData_225d9c0;
extern __int16 GameData_225d9f8;
extern __int16 GameData_225da30;
extern __int16 GameData_225da68;
extern __int16 GameData_225daa0;
extern __int16 GameData_225dad8;
extern __int16 GameData_225db10;
extern __int16 GameData_225db48;
extern __int16 GameData_225db80;
extern __int16 GameData_225dbf0;
extern __int16 GameData_225dc28;
extern __int16 GameData_225dc60;
extern __int16 GameData_225dc98;
extern __int16 GameData_225dcd0;
extern __int16 GameData_225dd08;
extern __int16 GameData_225dd40;
extern __int16 GameData_225dd78;
extern __int16 GameData_225ddb0;
extern __int16 GameData_225dde8;
extern __int16 GameData_225de20;
extern __int16 GameData_225de58;
extern __int16 GameData_225de90;
extern __int16 GameData_225dec8;
extern __int16 GameData_225df00;
extern __int16 GameData_225df38;
extern __int16 GameData_225df70;
extern __int16 GameData_225dfa8;
extern __int16 GameData_225dfe0;
extern __int16 GameData_225e018;
extern __int16 GameData_225e050;
extern __int16 GameData_225e088;
extern __int16 GameData_225e0c0;
extern __int16 GameData_225e2f0;
extern __int16 GameData_225e328;
extern __int16 GameData_225e360;
extern __int16 GameData_225e398;
extern __int16 GameData_225e3d0;
extern __int16 GameData_225e408;
extern __int16 GameData_225e440;
extern __int16 GameData_225e478;
extern __int16 GameData_225e4b0;
extern __int16 GameData_225e4e8;
extern __int16 GameData_225e520;
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64 GameData_225d708;
extern __int64 GameData_225d710;
extern __int64 GameData_225d718;
extern __int64 GameData_225d728;
extern __int64 GameData_225d730;
extern __int64 GameData_225d738;
extern __int64 GameData_225d740;
extern __int64 GameData_225d748;
extern __int64 GameData_225d760;
extern __int64 GameData_225d768;
extern __int64 GameData_225d770;
extern __int64 GameData_225d778;
extern __int64 GameData_225d780;
extern __int64 GameData_225d798;
extern __int64 GameData_225d7a0;
extern __int64 GameData_225d7a8;
extern __int64 GameData_225d7b0;
extern __int64 GameData_225d7b8;
extern __int64 GameData_225d7d0;
extern __int64 GameData_225d7d8;
extern __int64 GameData_225d7e0;
extern __int64 GameData_225d7e8;
extern __int64 GameData_225d7f0;
extern __int64 GameData_225d808;
extern __int64 GameData_225d810;
extern __int64 GameData_225d818;
extern __int64 GameData_225d820;
extern __int64 GameData_225d828;
extern __int64 GameData_225d840;
extern __int64 GameData_225d848;
extern __int64 GameData_225d850;
extern __int64 GameData_225d858;
extern __int64 GameData_225d860;
extern __int64 GameData_225d878;
extern __int64 GameData_225d880;
extern __int64 GameData_225d888;
extern __int64 GameData_225d890;
extern __int64 GameData_225d898;
extern __int64 GameData_225d8b0;
extern __int64 GameData_225d8b8;
extern __int64 GameData_225d8c0;
extern __int64 GameData_225d8c8;
extern __int64 GameData_225d8d0;
extern __int64 GameData_225d8e8;
extern __int64 GameData_225d8f0;
extern __int64 GameData_225d8f8;
extern __int64 GameData_225d900;
extern __int64 GameData_225d908;
extern __int64 GameData_225d920;
extern __int64 GameData_225d928;
extern __int64 GameData_225d930;
extern __int64 GameData_225d938;
extern __int64 GameData_225d940;
extern __int64 GameData_225d958;
extern __int64 GameData_225d960;
extern __int64 GameData_225d968;
extern __int64 GameData_225d970;
extern __int64 GameData_225d978;
extern __int64 GameData_225d990;
extern __int64 GameData_225d998;
extern __int64 GameData_225d9a0;
extern __int64 GameData_225d9a8;
extern __int64 GameData_225d9b0;
extern __int64 GameData_225d9c8;
extern __int64 GameData_225d9d0;
extern __int64 GameData_225d9d8;
extern __int64 GameData_225d9e0;
extern __int64 GameData_225d9e8;
extern __int64 GameData_225da00;
extern __int64 GameData_225da08;
extern __int64 GameData_225da10;
extern __int64 GameData_225da18;
extern __int64 GameData_225da20;
extern __int64 GameData_225da38;
extern __int64 GameData_225da40;
extern __int64 GameData_225da48;
extern __int64 GameData_225da50;
extern __int64 GameData_225da58;
extern __int64 GameData_225da70;
extern __int64 GameData_225da78;
extern __int64 GameData_225da80;
extern __int64 GameData_225da88;
extern __int64 GameData_225da90;
extern __int64 GameData_225daa8;
extern __int64 GameData_225dab0;
extern __int64 GameData_225dab8;
extern __int64 GameData_225dac0;
extern __int64 GameData_225dac8;
extern __int64 GameData_225dae0;
extern __int64 GameData_225dae8;
extern __int64 GameData_225daf0;
extern __int64 GameData_225daf8;
extern __int64 GameData_225db00;
extern __int64 GameData_225db18;
extern __int64 GameData_225db20;
extern __int64 GameData_225db28;
extern __int64 GameData_225db30;
extern __int64 GameData_225db38;
extern __int64 GameData_225db50;
extern __int64 GameData_225db58;
extern __int64 GameData_225db60;
extern __int64 GameData_225db68;
extern __int64 GameData_225db70;
extern __int64 GameData_225db88;
extern __int64 GameData_225db90;
extern __int64 GameData_225db98;
extern __int64 GameData_225dba0;
extern __int64 GameData_225dba8;
extern __int64 GameData_225dbc0;
extern __int64 GameData_225dbc8;
extern __int64 GameData_225dbd0;
extern __int64 GameData_225dbd8;
extern __int64 GameData_225dbe0;
extern __int64 GameData_225dbf8;
extern __int64 GameData_225dc00;
extern __int64 GameData_225dc08;
extern __int64 GameData_225dc10;
extern __int64 GameData_225dc18;
extern __int64 GameData_225dc30;
extern __int64 GameData_225dc38;
extern __int64 GameData_225dc40;
extern __int64 GameData_225dc48;
extern __int64 GameData_225dc50;
extern __int64 GameData_225dc68;
extern __int64 GameData_225dc70;
extern __int64 GameData_225dc78;
extern __int64 GameData_225dc80;
extern __int64 GameData_225dc88;
extern __int64 GameData_225dca0;
extern __int64 GameData_225dca8;
extern __int64 GameData_225dcb0;
extern __int64 GameData_225dcb8;
extern __int64 GameData_225dcc0;
extern __int64 GameData_225dcd8;
extern __int64 GameData_225dce0;
extern __int64 GameData_225dce8;
extern __int64 GameData_225dcf0;
extern __int64 GameData_225dcf8;
extern __int64 GameData_225dd10;
extern __int64 GameData_225dd18;
extern __int64 GameData_225dd20;
extern __int64 GameData_225dd28;
extern __int64 GameData_225dd30;
extern __int64 GameData_225dd48;
extern __int64 GameData_225dd50;
extern __int64 GameData_225dd58;
extern __int64 GameData_225dd60;
extern __int64 GameData_225dd68;
extern __int64 GameData_225dd80;
extern __int64 GameData_225dd88;
extern __int64 GameData_225dd90;
extern __int64 GameData_225dd98;
extern __int64 GameData_225dda0;
extern __int64 GameData_225ddb8;
extern __int64 GameData_225ddc0;
extern __int64 GameData_225ddc8;
extern __int64 GameData_225ddd0;
extern __int64 GameData_225ddd8;
extern __int64 GameData_225ddf0;
extern __int64 GameData_225ddf8;
extern __int64 GameData_225de00;
extern __int64 GameData_225de08;
extern __int64 GameData_225de10;
extern __int64 GameData_225de28;
extern __int64 GameData_225de30;
extern __int64 GameData_225de38;
extern __int64 GameData_225de40;
extern __int64 GameData_225de48;
extern __int64 GameData_225de60;
extern __int64 GameData_225de68;
extern __int64 GameData_225de70;
extern __int64 GameData_225de78;
extern __int64 GameData_225de80;
extern __int64 GameData_225de98;
extern __int64 GameData_225dea0;
extern __int64 GameData_225dea8;
extern __int64 GameData_225deb0;
extern __int64 GameData_225deb8;
extern __int64 GameData_225ded0;
extern __int64 GameData_225ded8;
extern __int64 GameData_225dee0;
extern __int64 GameData_225dee8;
extern __int64 GameData_225def0;
extern __int64 GameData_225df08;
extern __int64 GameData_225df10;
extern __int64 GameData_225df18;
extern __int64 GameData_225df20;
extern __int64 GameData_225df28;
extern __int64 GameData_225df40;
extern __int64 GameData_225df48;
extern __int64 GameData_225df50;
extern __int64 GameData_225df58;
extern __int64 GameData_225df60;
extern __int64 GameData_225df78;
extern __int64 GameData_225df80;
extern __int64 GameData_225df88;
extern __int64 GameData_225df90;
extern __int64 GameData_225df98;
extern __int64 GameData_225dfb0;
extern __int64 GameData_225dfb8;
extern __int64 GameData_225dfc0;
extern __int64 GameData_225dfc8;
extern __int64 GameData_225dfd0;
extern __int64 GameData_225dfe8;
extern __int64 GameData_225dff0;
extern __int64 GameData_225dff8;
extern __int64 GameData_225e000;
extern __int64 GameData_225e008;
extern __int64 GameData_225e020;
extern __int64 GameData_225e028;
extern __int64 GameData_225e030;
extern __int64 GameData_225e038;
extern __int64 GameData_225e040;
extern __int64 GameData_225e058;
extern __int64 GameData_225e060;
extern __int64 GameData_225e068;
extern __int64 GameData_225e070;
extern __int64 GameData_225e078;
extern __int64 GameData_225e090;
extern __int64 GameData_225e098;
extern __int64 GameData_225e0a0;
extern __int64 GameData_225e0a8;
extern __int64 GameData_225e0b0;
extern __int64 GameData_225e0c8;
extern __int64 GameData_225e0d0;
extern __int64 GameData_225e0d8;
extern __int64 GameData_225e0e0;
extern __int64 GameData_225e0e8;
extern __int64 GameData_225e100;
extern __int64 GameData_225e108;
extern __int64 GameData_225e110;
extern __int64 GameData_225e118;
extern __int64 GameData_225e120;
extern __int64 GameData_225e138;
extern __int64 GameData_225e140;
extern __int64 GameData_225e148;
extern __int64 GameData_225e150;
extern __int64 GameData_225e158;
extern __int64 GameData_225e170;
extern __int64 GameData_225e178;
extern __int64 GameData_225e180;
extern __int64 GameData_225e188;
extern __int64 GameData_225e190;
extern __int64 GameData_225e1a8;
extern __int64 GameData_225e1b0;
extern __int64 GameData_225e1b8;
extern __int64 GameData_225e1c0;
extern __int64 GameData_225e1c8;
extern __int64 GameData_225e1e0;
extern __int64 GameData_225e1e8;
extern __int64 GameData_225e1f0;
extern __int64 GameData_225e1f8;
extern __int64 GameData_225e200;
extern __int64 GameData_225e218;
extern __int64 GameData_225e220;
extern __int64 GameData_225e228;
extern __int64 GameData_225e230;
extern __int64 GameData_225e238;
extern __int64 GameData_225e250;
extern __int64 GameData_225e258;
extern __int64 GameData_225e260;
extern __int64 GameData_225e268;
extern __int64 GameData_225e270;
extern __int64 GameData_225e288;
extern __int64 GameData_225e290;
extern __int64 GameData_225e298;
extern __int64 GameData_225e2a0;
extern __int64 GameData_225e2a8;
extern __int64 GameData_225e2c0;
extern __int64 GameData_225e2c8;
extern __int64 GameData_225e2d0;
extern __int64 GameData_225e2d8;
extern __int64 GameData_225e2e0;
extern __int64 GameData_225e2f8;
extern __int64 GameData_225e300;
extern __int64 GameData_225e308;
extern __int64 GameData_225e310;
extern __int64 GameData_225e318;
extern __int64 GameData_225e330;
extern __int64 GameData_225e338;
extern __int64 GameData_225e340;
extern __int64 GameData_225e348;
extern __int64 GameData_225e350;
extern __int64 GameData_225e368;
extern __int64 GameData_225e370;
extern __int64 GameData_225e378;
extern __int64 GameData_225e380;
extern __int64 GameData_225e388;
extern __int64 GameData_225e3a0;
extern __int64 GameData_225e3a8;
extern __int64 GameData_225e3b0;
extern __int64 GameData_225e3b8;
extern __int64 GameData_225e3c0;
extern __int64 GameData_225e3d8;
extern __int64 GameData_225e3e0;
extern __int64 GameData_225e3e8;
extern __int64 GameData_225e3f0;
extern __int64 GameData_225e3f8;
extern __int64 GameData_225e410;
extern __int64 GameData_225e418;
extern __int64 GameData_225e420;
extern __int64 GameData_225e428;
extern __int64 GameData_225e430;
extern __int64 GameData_225e448;
extern __int64 GameData_225e450;
extern __int64 GameData_225e458;
extern __int64 GameData_225e460;
extern __int64 GameData_225e468;
extern __int64 GameData_225e480;
extern __int64 GameData_225e488;
extern __int64 GameData_225e490;
extern __int64 GameData_225e498;
extern __int64 GameData_225e4a0;
extern __int64 GameData_225e4b8;
extern __int64 GameData_225e4c0;
extern __int64 GameData_225e4c8;
extern __int64 GameData_225e4d0;
extern __int64 GameData_225e4d8;
extern __int64 GameData_225e4f0;
extern __int64 GameData_225e4f8;
extern __int64 GameData_225e500;
extern __int64 GameData_225e508;
extern __int64 GameData_225e510;
extern __int64 GameData_225e528;
extern __int64 GameData_225e530;
extern __int64 GameData_225e538;
extern __int64 GameData_225e540;
extern __int64 GameData_225e548;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
extern char GameData_225dbb8;
extern char GameData_225dbb9;
extern char GameData_225e0f8;
extern char GameData_225e0f9;
extern char GameData_225e130;
extern char GameData_225e131;
extern char GameData_225e168;
extern char GameData_225e169;
extern char GameData_225e1a0;
extern char GameData_225e1a1;
extern char GameData_225e1d8;
extern char GameData_225e1d9;
extern char GameData_225e210;
extern char GameData_225e211;
extern char GameData_225e248;
extern char GameData_225e249;
extern char GameData_225e280;
extern char GameData_225e281;
extern char GameData_225e2b8;
extern char GameData_225e2b9;
extern int GameData_225d750;
extern int GameData_225d788;
extern int GameData_225d7c0;
extern int GameData_225d7f8;
extern int GameData_225d830;
extern int GameData_225d868;
extern int GameData_225d8a0;
extern int GameData_225d8d8;
extern int GameData_225d910;
extern int GameData_225d948;
extern int GameData_225d980;
extern int GameData_225d9b8;
extern int GameData_225d9f0;
extern int GameData_225da28;
extern int GameData_225da60;
extern int GameData_225da98;
extern int GameData_225dad0;
extern int GameData_225db08;
extern int GameData_225db40;
extern int GameData_225db78;
extern int GameData_225dbb0;
extern int GameData_225dbe8;
extern int GameData_225dc20;
extern int GameData_225dc58;
extern int GameData_225dc90;
extern int GameData_225dcc8;
extern int GameData_225dd00;
extern int GameData_225dd38;
extern int GameData_225dd70;
extern int GameData_225dda8;
extern int GameData_225dde0;
extern int GameData_225de18;
extern int GameData_225de50;
extern int GameData_225de88;
extern int GameData_225dec0;
extern int GameData_225def8;
extern int GameData_225df30;
extern int GameData_225df68;
extern int GameData_225dfa0;
extern int GameData_225dfd8;
extern int GameData_225e010;
extern int GameData_225e048;
extern int GameData_225e080;
extern int GameData_225e0b8;
extern int GameData_225e0f0;
extern int GameData_225e128;
extern int GameData_225e160;
extern int GameData_225e198;
extern int GameData_225e1d0;
extern int GameData_225e208;
extern int GameData_225e240;
extern int GameData_225e278;
extern int GameData_225e2b0;
extern int GameData_225e2e8;
extern int GameData_225e320;
extern int GameData_225e358;
extern int GameData_225e390;
extern int GameData_225e3c8;
extern int GameData_225e400;
extern int GameData_225e438;
extern int GameData_225e470;
extern int GameData_225e4a8;
extern int GameData_225e4e0;
extern int GameData_225e518;
extern int GameData_225e550;
float ui_LayoutAccessor_GetPaneSize(__int64*, __int64);
void Dialog_1648c60(__int64);
void GameRoutine_18855c0(_QWORD*, _QWORD*);
void __attribute__((noreturn)) GameRoutine_64aa00();
void game_gameui_157a1e0(__int64*, __int64, unsigned __int8, char, char, char,
                         char);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
_QWORD* game_menu_162e6a0(_QWORD* result);
void game_menu_164c3c0(__int64 a1, int a2, __int64 a3);
__int64 game_menu_1669f70(__int64 a1);
__int64 game_menu_166ed90();
__int64 game_menu_16a0820(__int64 a1, char a2);
__attribute__((swiftcall)) void game_menu_16cccb0(PSEUDO_X8 x8_, _QWORD* a1,
                                                  _QWORD** a2, _BYTE** a3,
                                                  __int64 a4);
__int64 game_menu_16e7af0(__int64* a1);

_QWORD* game_menu_162e6a0(_QWORD* result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  char* v5;
  char* v6;
  char* v7;
  char* v8;
  char* v9;
  char* v10;
  char* v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  unsigned int i;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 j;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  __int64* v39;
  unsigned int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned int v47;
  unsigned int k;
  __int64 v49;
  __int64* v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 m;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  __int64* v60;
  unsigned int v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned int v68;
  unsigned int n;
  __int64 v70;
  __int64* v71;
  __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 ii;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  _QWORD* v80;
  __int64* v81;
  unsigned int v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  unsigned int v89;
  unsigned int jj;
  __int64 v91;
  __int64* v92;
  __int64 v93;
  unsigned __int64 v94;
  unsigned __int64 kk;
  __int64 v96;
  __int64 v97;
  float32x4_t v98;
  int8x16_t v99;
  __int128 v100;
  float32x4_t v101;
  int8x16_t v102;
  __int128 v103;
  bool v104;
  bool v105;
  __int64 v106;
  float32x4_t v107;
  int8x16_t v108;
  __int128 v109;
  float32x4_t v110;
  int8x16_t v111;
  __int128 v112;
  unsigned int v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  unsigned __int8* v119;
  unsigned int v120;
  struct {
    __int64 v121;
    __int64 v122;
  } v121_;
  _QWORD v123[2];
  _QWORD v124[2];
  struct {
    _QWORD v125[2];
    _BYTE v126[12];
    char v127;
    char gap77_[3];
    __int64 v128;
    __int64 v129;
    __int64 v130;
    __int64 v131;
    __int64 v132;
    __int64 v133;
  } v125_;

  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v61 = COERCE_AS(__typeof__(v61),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_BYTE*)(result[35] + 24LL) == 1) {
    v1 = (__int64)result;
    if (*(_BYTE*)(result[37] + 24LL) == 1) {
      v2 = result[36];
      v124[0] = result[35];
      v124[1] = v2;
      if (v2 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                                  memory_order_relaxed);
        ui_LayoutAccessor_Setup_155dda0(result + 39, v124),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v2),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      else {
        ui_LayoutAccessor_Setup_155dda0(result + 39, v124),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      ui_LayoutAccessor_SetPriority(v1 + 312, -3),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      LayoutAccessor_155e830(v1 + 312, 1),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v3 = *(_QWORD*)(v1 + 304);
      v123[0] = *(_QWORD*)(v1 + 296);
      v123[1] = v3;
      if (v3 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                  memory_order_relaxed);
        ui_LayoutAccessor_Setup_155dda0((_QWORD*)(v1 + 416), v123),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v3),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      else {
        ui_LayoutAccessor_Setup_155dda0((_QWORD*)(v1 + 416), v123),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      ui_LayoutAccessor_SetPriority(v1 + 416, -1),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v4 = LayoutAccessor_155fbe0((__int64*)(v1 + 312), "L_KeyHelp"),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v61 = COERCE_AS(__typeof__(v61),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v125_.v127 = 0;
      v125_.v128 = 0;
      v125_.v125[0] = &GameData_1a9f09e;
      v125_.v125[1] = "MID_KeyHelp_Mantle";
      v125_.v126[0] = 1;
      *(_QWORD*)&v125_.v126[4] = 0x20000000BLL;
      game_gameui_1593d90(v4, (__int64)v125_.v125),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      LayoutAccessor_155c910((_QWORD*)(v1 + 520), (__int64*)(v1 + 312)),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      LayoutAccessor_155cda0(v1 + 520, "Progress", nullptr),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      GameRoutine_155da20(v1 + 520, 0x0.0p+0f),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v5 = game_util_Format("N_Menu%02d", 1),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v61 = COERCE_AS(__typeof__(v61),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      ui_LayoutAccessor_SetPaneVisible(v1 + 312, (__int64)v5, 0),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v6 = game_util_Format("N_Menu%02d", 2),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v61 = COERCE_AS(__typeof__(v61),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      ui_LayoutAccessor_SetPaneVisible(v1 + 312, (__int64)v6, 0),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v7 = game_util_Format("N_Menu%02d", 3),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v61 = COERCE_AS(__typeof__(v61),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      ui_LayoutAccessor_SetPaneVisible(v1 + 312, (__int64)v7, 0),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v8 = game_util_Format("N_Menu%02d", 4),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v61 = COERCE_AS(__typeof__(v61),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      ui_LayoutAccessor_SetPaneVisible(v1 + 312, (__int64)v8, 0),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v9 = game_util_Format("N_Menu%02d", 5),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v61 = COERCE_AS(__typeof__(v61),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      ui_LayoutAccessor_SetPaneVisible(v1 + 312, (__int64)v9, 0),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v10 = game_util_Format("N_Menu%02d", 6),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v61 = COERCE_AS(__typeof__(v61),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      ui_LayoutAccessor_SetPaneVisible(v1 + 312, (__int64)v10, 0),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v11 = game_util_Format("N_Menu%02d", 7),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v61 = COERCE_AS(__typeof__(v61),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      ui_LayoutAccessor_SetPaneVisible(v1 + 312, (__int64)v11, 0),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v12 = (__int64*)GameData_212c540;
      v13 = (__int64*)GameData_212c548;
      v125_.v125[0] = 0;
      v125_.v125[1] = 0;
      v14 = *((_QWORD*)GameData_212c540 + 1);
      v15 = *(_QWORD*)GameData_212c548;
      v16 = *((_QWORD*)GameData_212c548 + 1);
      v125_.v128 = *(_QWORD*)GameData_212c540;
      v125_.v129 = v14;
      v125_.v132 = v125_.v128;
      v125_.v133 = v14;
      v125_.v130 = v15;
      v125_.v131 = v16;
      *(_DWORD*)&v125_.v126[8] = 9;
      *(_QWORD*)v125_.v126 = "UI_Deco_CharaMake_Graph_Loop";
      v17 = eft_g_effectSystem_ptr[0];
      v18 = ({
        unsigned __int128 r_ = Manager_bc6460_pair(
            *(_QWORD**)eft_g_effectSystem_ptr[0], (__int64)v125_.v125, 0);
        v19 = COERCE_AS(__typeof__(v19), (unsigned long long)(r_ >> 64));
        v40 = COERCE_AS(__typeof__(v40), (unsigned long long)(r_ >> 64));
        v61 = COERCE_AS(__typeof__(v61), (unsigned long long)(r_ >> 64));
        v82 = COERCE_AS(__typeof__(v82), (unsigned long long)(r_ >> 64));
        (__int64*)(unsigned long long)r_;
      });
      GameHr_14a10d0(&v121_.v121, (__int64)v18, v19,
                     (__int64)&GameData_1a9f09e),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v20 = v121_.v121;
      v21 = v121_.v122;
      if (v121_.v122 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v121_.v122 + 8), 1u,
                                  memory_order_relaxed);
      }
      v22 = *(_QWORD*)(v1 + 1064);
      *(_QWORD*)(v1 + 1056) = v20;
      *(_QWORD*)(v1 + 1064) = v21;
      if (v22 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v22),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v21 = *(_QWORD*)(v1 + 1064);
      }
      if (v21 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v21),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v23 = v121_.v122;
      if (v121_.v122 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v121_.v122 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v23),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v24 = *(_QWORD*)(v1 + 1056);
      v25 = *(_QWORD*)v24;
      if (*(_QWORD*)v24 != 0 && *(_DWORD*)(v25 + 16) == *(_DWORD*)(v24 + 8)) {
        v26 = *(_DWORD*)(v25 + 36);
        if (v26 != 0) {
          for (i = 0; i < v26; ++i) {
            if ((int)v26 > (int)i) {
              v28 = *(_QWORD*)(v25 + 40 + 8LL * (int)i);
              if (v28 != 0) {
                *(_QWORD*)(v28 + 16) = 0;
                *(_QWORD*)(v28 + 24) = 0;
                *(_BYTE*)(v28 + 128) = 1;
                v26 = *(_DWORD*)(v25 + 36);
              }
            }
          }
        }
      }
      game_14a3920(v24),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v29 = *(__int64**)(v1 + 1056);
      v30 = *v29;
      if (*v29 != 0 && *(_DWORD*)(v30 + 16) == *((_DWORD*)v29 + 2)) {
        v31 = *(unsigned int*)(v30 + 36);
        if ((_DWORD)v31 != 0) {
          for (j = 0; j < v31; ++j) {
            v33 = *(_QWORD*)(v30 + 40 + 8 * j);
            if (v33 != 0) {
              *(_DWORD*)(v33 + 408) = -2;
              v31 = *(unsigned int*)(v30 + 36);
            }
          }
        }
      }
      v34 = *v12;
      v35 = v12[1];
      v36 = *v13;
      v37 = v13[1];
      v38 = (_QWORD*)*v17;
      v125_.v125[0] = 0;
      v125_.v125[1] = 0;
      v125_.v128 = v34;
      v125_.v129 = v35;
      v125_.v132 = v34;
      v125_.v133 = v35;
      v125_.v130 = v36;
      v125_.v131 = v37;
      *(_DWORD*)&v125_.v126[8] = 9;
      *(_QWORD*)v125_.v126 = "UI_Deco_CharaMake_Noise_Loop";
      v39 = ({
        unsigned __int128 r_ = Manager_bc6460_pair(v38, (__int64)v125_.v125, 0);
        v19 = COERCE_AS(__typeof__(v19), (unsigned long long)(r_ >> 64));
        v40 = COERCE_AS(__typeof__(v40), (unsigned long long)(r_ >> 64));
        v61 = COERCE_AS(__typeof__(v61), (unsigned long long)(r_ >> 64));
        v82 = COERCE_AS(__typeof__(v82), (unsigned long long)(r_ >> 64));
        (__int64*)(unsigned long long)r_;
      });
      GameHr_14a10d0(&v121_.v121, (__int64)v39, v40,
                     (__int64)&GameData_1a9f09e),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v41 = v121_.v121;
      v42 = v121_.v122;
      if (v121_.v122 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v121_.v122 + 8), 1u,
                                  memory_order_relaxed);
      }
      v43 = *(_QWORD*)(v1 + 1080);
      *(_QWORD*)(v1 + 1072) = v41;
      *(_QWORD*)(v1 + 1080) = v42;
      if (v43 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v43),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v42 = *(_QWORD*)(v1 + 1080);
      }
      if (v42 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v42),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v44 = v121_.v122;
      if (v121_.v122 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v121_.v122 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v44),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v45 = *(_QWORD*)(v1 + 1072);
      v46 = *(_QWORD*)v45;
      if (*(_QWORD*)v45 != 0 && *(_DWORD*)(v46 + 16) == *(_DWORD*)(v45 + 8)) {
        v47 = *(_DWORD*)(v46 + 36);
        if (v47 != 0) {
          for (k = 0; k < v47; ++k) {
            if ((int)v47 > (int)k) {
              v49 = *(_QWORD*)(v46 + 40 + 8LL * (int)k);
              if (v49 != 0) {
                *(_QWORD*)(v49 + 16) = 0;
                *(_QWORD*)(v49 + 24) = 0;
                *(_BYTE*)(v49 + 128) = 1;
                v47 = *(_DWORD*)(v46 + 36);
              }
            }
          }
        }
      }
      game_14a3920(v45),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v50 = *(__int64**)(v1 + 1072);
      v51 = *v50;
      if (*v50 != 0 && *(_DWORD*)(v51 + 16) == *((_DWORD*)v50 + 2)) {
        v52 = *(unsigned int*)(v51 + 36);
        if ((_DWORD)v52 != 0) {
          for (m = 0; m < v52; ++m) {
            v54 = *(_QWORD*)(v51 + 40 + 8 * m);
            if (v54 != 0) {
              *(_DWORD*)(v54 + 408) = -4;
              v52 = *(unsigned int*)(v51 + 36);
            }
          }
        }
      }
      v55 = *v12;
      v56 = v12[1];
      v57 = *v13;
      v58 = v13[1];
      v59 = (_QWORD*)*v17;
      v125_.v125[0] = 0;
      v125_.v125[1] = 0;
      v125_.v128 = v55;
      v125_.v129 = v56;
      v125_.v132 = v55;
      v125_.v133 = v56;
      v125_.v130 = v57;
      v125_.v131 = v58;
      *(_DWORD*)&v125_.v126[8] = 9;
      *(_QWORD*)v125_.v126 = "Field_Dust_Hub_40_A2";
      v60 = ({
        unsigned __int128 r_ = Manager_bc6460_pair(v59, (__int64)v125_.v125, 0);
        v19 = COERCE_AS(__typeof__(v19), (unsigned long long)(r_ >> 64));
        v40 = COERCE_AS(__typeof__(v40), (unsigned long long)(r_ >> 64));
        v61 = COERCE_AS(__typeof__(v61), (unsigned long long)(r_ >> 64));
        v82 = COERCE_AS(__typeof__(v82), (unsigned long long)(r_ >> 64));
        (__int64*)(unsigned long long)r_;
      });
      GameHr_14a10d0(&v121_.v121, (__int64)v60, v61,
                     (__int64)&GameData_1a9f09e),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v62 = v121_.v121;
      v63 = v121_.v122;
      if (v121_.v122 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v121_.v122 + 8), 1u,
                                  memory_order_relaxed);
      }
      v64 = *(_QWORD*)(v1 + 1096);
      *(_QWORD*)(v1 + 1088) = v62;
      *(_QWORD*)(v1 + 1096) = v63;
      if (v64 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v64 + 16LL))(v64),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v64),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v63 = *(_QWORD*)(v1 + 1096);
      }
      if (v63 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v63 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v63),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v65 = v121_.v122;
      if (v121_.v122 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v121_.v122 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v65),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v66 = *(_QWORD*)(v1 + 1088);
      v67 = *(_QWORD*)v66;
      if (*(_QWORD*)v66 != 0 && *(_DWORD*)(v67 + 16) == *(_DWORD*)(v66 + 8)) {
        v68 = *(_DWORD*)(v67 + 36);
        if (v68 != 0) {
          for (n = 0; n < v68; ++n) {
            if ((int)v68 > (int)n) {
              v70 = *(_QWORD*)(v67 + 40 + 8LL * (int)n);
              if (v70 != 0) {
                *(_QWORD*)(v70 + 16) = 0;
                *(_QWORD*)(v70 + 24) = 0;
                *(_BYTE*)(v70 + 128) = 1;
                v68 = *(_DWORD*)(v67 + 36);
              }
            }
          }
        }
      }
      game_14a3920(v66),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v71 = *(__int64**)(v1 + 1088);
      v72 = *v71;
      if (*v71 != 0 && *(_DWORD*)(v72 + 16) == *((_DWORD*)v71 + 2)) {
        v73 = *(unsigned int*)(v72 + 36);
        if ((_DWORD)v73 != 0) {
          for (ii = 0; ii < v73; ++ii) {
            v75 = *(_QWORD*)(v72 + 40 + 8 * ii);
            if (v75 != 0) {
              *(_DWORD*)(v75 + 408) = -2;
              v73 = *(unsigned int*)(v72 + 36);
            }
          }
        }
      }
      v76 = *v12;
      v77 = v12[1];
      v78 = *v13;
      v79 = v13[1];
      v80 = (_QWORD*)*v17;
      v125_.v125[0] = 0;
      v125_.v125[1] = 0;
      v125_.v128 = v76;
      v125_.v129 = v77;
      v125_.v132 = v76;
      v125_.v133 = v77;
      v125_.v130 = v78;
      v125_.v131 = v79;
      *(_DWORD*)&v125_.v126[8] = 9;
      *(_QWORD*)v125_.v126 = "UI_Deco_CharaMake_Ball_Loop";
      v81 = ({
        unsigned __int128 r_ = Manager_bc6460_pair(v80, (__int64)v125_.v125, 0);
        v19 = COERCE_AS(__typeof__(v19), (unsigned long long)(r_ >> 64));
        v40 = COERCE_AS(__typeof__(v40), (unsigned long long)(r_ >> 64));
        v61 = COERCE_AS(__typeof__(v61), (unsigned long long)(r_ >> 64));
        v82 = COERCE_AS(__typeof__(v82), (unsigned long long)(r_ >> 64));
        (__int64*)(unsigned long long)r_;
      });
      GameHr_14a10d0(&v121_.v121, (__int64)v81, v82,
                     (__int64)&GameData_1a9f09e),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v83 = v121_.v121;
      v84 = v121_.v122;
      if (v121_.v122 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v121_.v122 + 8), 1u,
                                  memory_order_relaxed);
      }
      v85 = *(_QWORD*)(v1 + 1112);
      *(_QWORD*)(v1 + 1104) = v83;
      *(_QWORD*)(v1 + 1112) = v84;
      if (v85 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v85 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v85 + 16LL))(v85),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v85),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v84 = *(_QWORD*)(v1 + 1112);
      }
      if (v84 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v84 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v84 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v84 + 16LL))(v84),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v84),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v86 = v121_.v122;
      if (v121_.v122 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v121_.v122 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v86 + 16LL))(v86),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v86),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v87 = *(_QWORD*)(v1 + 1104);
      v88 = *(_QWORD*)v87;
      if (*(_QWORD*)v87 != 0 && *(_DWORD*)(v88 + 16) == *(_DWORD*)(v87 + 8)) {
        v89 = *(_DWORD*)(v88 + 36);
        if (v89 != 0) {
          for (jj = 0; jj < v89; ++jj) {
            if ((int)v89 > (int)jj) {
              v91 = *(_QWORD*)(v88 + 40 + 8LL * (int)jj);
              if (v91 != 0) {
                *(_QWORD*)(v91 + 16) = 0;
                *(_QWORD*)(v91 + 24) = 0;
                *(_BYTE*)(v91 + 128) = 1;
                v89 = *(_DWORD*)(v88 + 36);
              }
            }
          }
        }
      }
      game_14a3920(v87),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v92 = *(__int64**)(v1 + 1104);
      v93 = *v92;
      if (*v92 != 0 && *(_DWORD*)(v93 + 16) == *((_DWORD*)v92 + 2)) {
        v94 = *(unsigned int*)(v93 + 36);
        if ((_DWORD)v94 != 0) {
          for (kk = 0; kk < v94; ++kk) {
            v96 = *(_QWORD*)(v93 + 40 + 8 * kk);
            if (v96 != 0) {
              *(_DWORD*)(v96 + 408) = -2;
              v94 = *(unsigned int*)(v93 + 36);
            }
          }
        }
      }
      *(_BYTE*)(*(_QWORD*)(v1 + 720) + 289LL) = 1;
      v97 = *(_QWORD*)(v1 + 720);
      v98 = vaddq_f32(*(float32x4_t*)(v97 + 304),
                      COERCE_AS(float32x4_t, GameData_1a833a0));
      v99 = vmulq_f32(v98, v98);
      LANES128(v99).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v99, v99, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v99).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v99).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v99).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f) {
        *(_QWORD*)(v97 + 304) = 3204448256LL;
        v100 = *(_OWORD*)(v97 + 304);
        *(_DWORD*)(v97 + 296) |= 1u;
        *(_OWORD*)(v97 + 304) = (unsigned __int64)v100;
        v97 = *(_QWORD*)(v1 + 720);
      }
      v101 = vaddq_f32(*(float32x4_t*)(v97 + 320),
                       COERCE_AS(float32x4_t, GameData_1a83690));
      v102 = vmulq_f32(v101, v101);
      LANES128(v102).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v102, v102, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v102).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v102).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v102).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f) {
        *(_QWORD*)(v97 + 320) = 0x40A78D3600000000LL;
        v103 = *(_OWORD*)(v97 + 336);
        *(_OWORD*)(v97 + 320) = *(unsigned __int64*)(v97 + 320);
        v104 = *(float*)&v103 == 0x0.0p+0f &&
               *((float*)&v103 + 1) == 0x1.0000020000000p-1f;
        if (!v104 ||
            (*((float*)&v103 + 2) == 0x0.0p+0f
                 ? (v105 = *((float*)&v103 + 3) == -0x1.bb67ae0000000p-1f)
                 : (v105 = false),
             !v105)) {
          *(_QWORD*)(v97 + 336) = 0x3F00000180000000LL;
          *(_QWORD*)(v97 + 344) = 0xBF5DB3D780000000LL;
          *(_DWORD*)(v97 + 296) |= 1u;
        }
      }
      *(_BYTE*)(*(_QWORD*)(v1 + 888) + 289LL) = 1;
      v106 = *(_QWORD*)(v1 + 888);
      v107 = vaddq_f32(*(float32x4_t*)(v106 + 304),
                       COERCE_AS(float32x4_t, GameData_1a83170));
      v108 = vmulq_f32(v107, v107);
      LANES128(v108).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v108, v108, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v108).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v108).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v108).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f) {
        *(_QWORD*)(v106 + 304) = 1056964608;
        v109 = *(_OWORD*)(v106 + 304);
        *(_DWORD*)(v106 + 296) |= 1u;
        *(_OWORD*)(v106 + 304) = (unsigned __int64)v109;
        v106 = *(_QWORD*)(v1 + 888);
      }
      v110 = vaddq_f32(*(float32x4_t*)(v106 + 320),
                       COERCE_AS(float32x4_t, GameData_1a83490));
      v111 = vmulq_f32(v110, v110);
      LANES128(v111).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v111, v111, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v111).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v111).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v111).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f) {
        *(_QWORD*)(v106 + 320) = 0x3FA5514D00000000LL;
        v112 = *(_OWORD*)(v106 + 336);
        *(_OWORD*)(v106 + 320) = *(unsigned __int64*)(v106 + 320);
        if (*(float*)&v112 != 0x0.0p+0f ||
            *((float*)&v112 + 1) != 0x1.3421180000000p-1f ||
            *((float*)&v112 + 2) != 0x0.0p+0f ||
            *((float*)&v112 + 3) != 0x1.98e6c20000000p-1f) {
          *(_QWORD*)(v106 + 336) = 0x3F1A108C00000000LL;
          *(_QWORD*)(v106 + 344) = 0x3F4C736100000000LL;
          *(_DWORD*)(v106 + 296) |= 1u;
        }
      }
      v113 = *(unsigned __int8*)(v1 + 277);
      if (v113 <= 2) {
        GameRoutine_1631660(v1, 1, (4u >> (v113 & 7)) & 1),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        GameRoutine_1631660(v1, 2, v113 & 1),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v114 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
      v116 = *(_QWORD*)(v114 + 48);
      v115 = *(_QWORD*)(v114 + 56);
      if (v115 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v115 + 8), 1u,
                                  memory_order_relaxed);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v115 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v115 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v115 + 16LL))(v115),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v115),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v117 = *(_QWORD*)(*(_QWORD*)(v116 + 8) + 224LL);
        if (atomic_fetch_add((atomic_ullong* volatile)(v115 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v115 + 16LL))(v115),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v115),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      else {
        v117 = *(_QWORD*)(*(_QWORD*)(v116 + 8) + 224LL);
      }
      *(_DWORD*)(v117 + 540) = -1025009254;
      *(_BYTE*)(v117 + 544) = 1;
      v118 = *game_sound_g_game_sound_ptr[0];
      *(_BYTE*)(*game_sound_g_game_sound_ptr[0] + 3076) = 0;
      snd_Fade_Fade_10c830((__int64)v125_.v125, 0x0.0p+0f),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      snd_a290c0(v118, nullptr, (__int64)v125_.v125, 0, 0, 0x0.0p+0f),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      snd_Fade_Destroy_Fade(v125_.v125),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      GameManager_a22bd0(),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = (_QWORD*)X8CALL_X0(
          __int64, snd_BGM_getFirstHandle((void*)((__int64)v125_.v125),
                                          *(_QWORD*)(v118 + 8))),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v61 = COERCE_AS(__typeof__(v61),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v119 = *(unsigned __int8**)(v1 + 16);
      if (v119 != nullptr) {
        v120 = *v119;
        if (v120 <= 0x10 && ((1 << v120) & 0x1CE00) != 0) {
          *(_WORD*)(v1 + 136) |= 0x80u;
        }
      }
      *(_WORD*)(v1 + 136) |= 8u;
    }
  }
  return result;
}

void game_menu_164c3c0(__int64 a1, int a2, __int64 a3)
{
  __int64 v6;
  __int64* v7;
  char* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  char* v14;
  __int64 v15;
  __int64* v16;
  struct {
    __int64* v17;
    __int64 v18;
  } v17_;

  LayoutAccessor_1560070((void*)(&v17_.v17), (__int64*)(a1 + 848), "L_Result");
  if (v17_.v18 == 0) {
    goto LABEL_22;
  }
  v6 = std___1___shared_weak_count_lock(v17_.v18);
  v7 = v17_.v17;
  if (v17_.v18 != 0) {
    std___1___shared_weak_count___release_weak(v17_.v18);
  }
  if (v6 == 0 || v7 == nullptr) {
    if (v6 == 0) {
      goto LABEL_22;
    }
    goto LABEL_20;
  }
  v9 = game_util_Format("L_Item%02d", a2);
  LayoutAccessor_1560070((void*)(&v17_.v17), v7, v9);
  if (v17_.v18 != 0) {
    v10 = std___1___shared_weak_count_lock(v17_.v18);
    v11 = v17_.v17;
    if (v17_.v18 != 0) {
      std___1___shared_weak_count___release_weak(v17_.v18);
    }
    if (v10 != 0 && v11 != nullptr) {
      game_gameui_157a1e0(v11, a3, 1u, 0, 1, 0, 1);
      goto LABEL_18;
    }
    if (v10 != 0) {
    LABEL_18:
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
  }
LABEL_20:
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
LABEL_22:
  LayoutAccessor_1560070((void*)(&v17_.v17), (__int64*)(a1 + 848),
                         "L_InfoResult/L_ItemList");
  if (v17_.v18 == 0) {
    return;
  }
  v12 = std___1___shared_weak_count_lock(v17_.v18);
  v13 = v17_.v17;
  if (v17_.v18 != 0) {
    std___1___shared_weak_count___release_weak(v17_.v18);
  }
  if (v12 == 0 || v13 == nullptr) {
    if (v12 == 0) {
      return;
    }
    goto LABEL_38;
  }
  v14 = game_util_Format("L_Item%02d", a2);
  LayoutAccessor_1560070((void*)(&v17_.v17), v13, v14);
  if (v17_.v18 != 0) {
    v15 = std___1___shared_weak_count_lock(v17_.v18);
    v16 = v17_.v17;
    if (v17_.v18 != 0) {
      std___1___shared_weak_count___release_weak(v17_.v18);
    }
    if (v15 != 0 && v16 != nullptr) {
      game_gameui_157a1e0(v16, a3, 1u, 0, 1, 0, 1);
      goto LABEL_36;
    }
    if (v15 != 0) {
    LABEL_36:
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak(v15);
      }
    }
  }
LABEL_38:
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
}

__int64 game_menu_1669f70(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  struct {
    __int64* v5;
    __int64 v6;
  } v5_;

  Dialog_1648c60(a1);
  LayoutAccessor_1560070((void*)(&v5_.v5), (__int64*)(a1 + 848), "L_ItemList");
  result = v5_.v6;
  if (v5_.v6 != 0) {
    v3 = std___1___shared_weak_count_lock(v5_.v6);
    if (v3 != 0) {
      v4 = v3;
      if (v5_.v5 != nullptr) {
        Util_1586140(v5_.v5, (__int64*)(a1 + 1496));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v4);
      }
    }
    result = v5_.v6;
    if (v5_.v6 != 0) {
      return std___1___shared_weak_count___release_weak(v5_.v6);
    }
  }
  return result;
}

__int64 game_menu_166ed90()
{
  __int64* v0;
  char* v1;
  char* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  __int64* v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  char* v46;
  __int64* v47;
  __int64 v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  _QWORD* v53;
  __int64 v54;
  __int64* v55;
  __int64 v56;
  __int64* v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64 v61;
  __int64* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  _QWORD* v68;
  __int64 v69;
  _QWORD* v70;
  __int64 v71;
  _QWORD* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  char* v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  _QWORD* v80;
  __int64 v81;
  _QWORD* v82;
  __int64 v83;
  char* v84;
  __int64 v85;
  __int64 v86;
  char* v87;
  char* v88;
  __int64 v89;
  __int64 v90;
  _QWORD* v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  _QWORD* v99;
  __int64 v100;
  _QWORD* v101;
  __int64 v102;
  _QWORD* v103;
  __int64 v104;
  _QWORD* v105;
  __int64 v106;
  _QWORD* v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  _QWORD* v111;
  __int64 v112;
  _QWORD* v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  _QWORD* v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  _QWORD* v129;
  __int64 v130;
  _QWORD* v131;
  __int64 v132;
  _QWORD* v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  _QWORD* v142;
  __int64 v143;
  __int64* v144;
  __int64 v145;
  __int64* v146;
  __int64 v147;
  __int64 v148;
  __int64* v149;
  __int64 v150;
  __int64* v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  _QWORD* v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  _QWORD* v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  _QWORD* v170;
  __int64 v171;
  _QWORD* v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  _QWORD v186[6];
  _QWORD v187[3];
  struct {
    _QWORD v188[3];
    __int64 v189;
    char* v190;
    char* v191;
    char* v192;
    char* v193;
    char* v194;
    char* v195;
    __int64 v196;
    __int64 v197;
  } v188_;

  v0 = (__int64*)fw_memory_g_heap_manager_ptr;
  v1 = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  strcpy(v1, "MID_Config_AnimType_PlayerUnit");
  v2 = (char*)fw_memory_HeapManager_Allocate(*v0, 32, 16, 0);
  strcpy(v2, "MID_Config_AnimType_PlayerPhase");
  v3 = fw_memory_HeapManager_Allocate(*v0, 120, 16, 0);
  GameData_225d708 = v3;
  GameData_225d710 = v3;
  strcpy((char*)v3, "\"MID_Config_Enable");
  *(_BYTE*)(v3 + 19) = 0;
  *(_DWORD*)(v3 + 20) = 0;
  GameData_225d718 = v3 + 120;
  fw_text_String_CopyTerminated((__int64*)(v3 + 24), (__int64)v1, 0x1Eu);
  fw_text_String_CopyTerminated((__int64*)(v3 + 48), (__int64)v2, 0x1Fu);
  *(_QWORD*)(v3 + 88) = 25964;
  strcpy((char*)(v3 + 96), "$MID_Config_Disable");
  GameData_225d710 = v3 + 120;
  qmemcpy((void*)(v3 + 72), "\"MID_Config_Simp", 16);
  *(_DWORD*)(v3 + 116) = 0;
  if (*(_QWORD*)(*v0 + 200) != 0) {
    v4 = 128;
  }
  else {
    v4 = 56;
  }
  nn_mem_StandardAllocator_Free(*v0 + v4, (__int64)v2);
  if (*(_QWORD*)(*v0 + 200) != 0) {
    v5 = 128;
  }
  else {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free(*v0 + v5, (__int64)v1);
  GameRoutine_2b0();
  v6 = *v0;
  GameData_225d720 = 0;
  GameData_225d728 = (__int64)"MID_Config_Graphics";
  GameData_225d730 = 0;
  v7 = (_QWORD*)fw_memory_HeapManager_Allocate(v6, 24, 16, 0);
  GameData_225d738 = (__int64)v7;
  *v7 = 0;
  GameData_225d750 = 0;
  GameData_225d740 = (__int64)(v7 + 3);
  GameData_225d748 = (__int64)(v7 + 3);
  v8 = *v0;
  GameData_225d758 = 512;
  GameData_225d760 = (__int64)"MID_Config_Graphics_Brightness";
  GameData_225d768 = (__int64)"MID_Config_Graphics_Brightness_Help";
  v9 = (_QWORD*)fw_memory_HeapManager_Allocate(v8, 24, 16, 0);
  GameData_225d770 = (__int64)v9;
  *v9 = 0;
  GameData_225d790 = 512;
  GameData_225d778 = (__int64)(v9 + 3);
  GameData_225d780 = (__int64)(v9 + 3);
  v10 = *v0;
  GameData_225d788 = 1;
  GameData_225d798 = (__int64)"MID_Config_Graphics_Brightness_UI";
  GameData_225d7a0 = (__int64)"MID_Config_Graphics_Brightness_UI_Help";
  v11 = (_QWORD*)fw_memory_HeapManager_Allocate(v10, 24, 16, 0);
  GameData_225d7a8 = (__int64)v11;
  *v11 = 0;
  GameData_225d7c8 = 0;
  GameData_225d7b0 = (__int64)(v11 + 3);
  GameData_225d7b8 = (__int64)(v11 + 3);
  v12 = *v0;
  GameData_225d7c0 = 2;
  GameData_225d7d0 = (__int64)"MID_Config_Sound";
  GameData_225d7d8 = 0;
  v13 = (_QWORD*)fw_memory_HeapManager_Allocate(v12, 24, 16, 0);
  GameData_225d7e0 = (__int64)v13;
  *v13 = 0;
  GameData_225d7f8 = 0;
  GameData_225d800 = 512;
  GameData_225d7e8 = (__int64)(v13 + 3);
  GameData_225d7f0 = (__int64)(v13 + 3);
  v14 = *v0;
  GameData_225d808 = (__int64)"MID_Config_Sound_BGM";
  GameData_225d810 = (__int64)"MID_Config_Sound_BGM_Help";
  v15 = (_QWORD*)fw_memory_HeapManager_Allocate(v14, 24, 16, 0);
  GameData_225d818 = (__int64)v15;
  *v15 = 0;
  GameData_225d820 = (__int64)(v15 + 3);
  GameData_225d828 = (__int64)(v15 + 3);
  v16 = *v0;
  GameData_225d830 = 3;
  GameData_225d838 = 1536;
  GameData_225d840 = (__int64)"MID_Config_Sound_SE";
  GameData_225d848 = (__int64)"MID_Config_Sound_SE_Help";
  v17 = (_QWORD*)fw_memory_HeapManager_Allocate(v16, 24, 16, 0);
  GameData_225d850 = (__int64)v17;
  *v17 = 0;
  GameData_225d870 = 512;
  GameData_225d858 = (__int64)(v17 + 3);
  GameData_225d860 = (__int64)(v17 + 3);
  v18 = *v0;
  GameData_225d868 = 4;
  GameData_225d878 = (__int64)"MID_Config_Sound_SystemSE";
  GameData_225d880 = (__int64)"MID_Config_Sound_SystemSE_Help";
  v19 = (_QWORD*)fw_memory_HeapManager_Allocate(v18, 24, 16, 0);
  GameData_225d888 = (__int64)v19;
  *v19 = 0;
  GameData_225d890 = (__int64)(v19 + 3);
  GameData_225d898 = (__int64)(v19 + 3);
  v20 = *v0;
  GameData_225d8a0 = 5;
  GameData_225d8a8 = 1792;
  GameData_225d8b0 = (__int64)"MID_Config_Sound_Voice";
  GameData_225d8b8 = (__int64)"MID_Config_Sound_Voice_Help";
  v21 = (_QWORD*)fw_memory_HeapManager_Allocate(v20, 24, 16, 0);
  GameData_225d8c0 = (__int64)v21;
  *v21 = 0;
  GameData_225d8e0 = 0;
  GameData_225d8c8 = (__int64)(v21 + 3);
  GameData_225d8d0 = (__int64)(v21 + 3);
  v22 = *v0;
  GameData_225d8d8 = 6;
  GameData_225d8e8 = (__int64)"MID_Config_Event";
  GameData_225d8f0 = 0;
  v23 = (_QWORD*)fw_memory_HeapManager_Allocate(v22, 24, 16, 0);
  GameData_225d8f8 = (__int64)v23;
  *v23 = 0;
  GameData_225d910 = 0;
  GameData_225d900 = (__int64)(v23 + 3);
  GameData_225d908 = (__int64)(v23 + 3);
  v24 = *v0;
  GameData_225d918 = 256;
  GameData_225d920 = (__int64)"MID_Config_Event_Auto";
  GameData_225d928 = (__int64)"MID_Config_Event_Auto_Help";
  v25 = fw_memory_HeapManager_Allocate(v24, 48, 16, 0);
  GameData_225d930 = v25;
  GameData_225d950 = 256;
  GameData_225d940 = v25 + 48;
  GameData_225d938 = v25 + 48;
  GameData_225d948 = 7;
  GameData_225d958 = (__int64)"MID_Config_Event_Subtitles";
  strcpy((char*)v25, "\"MID_Config_Manual");
  *(_QWORD*)(v25 + 32) = 0x6F7475415F676966LL;
  *(_QWORD*)(v25 + 40) = 0;
  *(_BYTE*)(v25 + 19) = 0;
  *(_DWORD*)(v25 + 20) = 0;
  *(_QWORD*)(v25 + 24) = 0x6E6F435F44494D1ELL;
  v26 = *v0;
  GameData_225d960 = (__int64)"MID_Config_Event_Subtitles_Help";
  v27 = fw_memory_HeapManager_Allocate(v26, 48, 16, 0);
  GameData_225d968 = v27;
  GameData_225d988 = 256;
  GameData_225d978 = v27 + 48;
  GameData_225d970 = v27 + 48;
  GameData_225d980 = 8;
  GameData_225d990 = (__int64)"MID_Config_Event_Skip";
  strcpy((char*)v27, "$MID_Config_Disable");
  *(_DWORD*)(v27 + 20) = 0;
  strcpy((char*)(v27 + 24), "\"MID_Config_Enable");
  *(_BYTE*)(v27 + 43) = 0;
  *(_DWORD*)(v27 + 44) = 0;
  v28 = *v0;
  GameData_225d998 = (__int64)"MID_Config_Event_Skip_Help";
  v29 = (char*)fw_memory_HeapManager_Allocate(v28, 32, 16, 0);
  strcpy(v29, "MID_Config_Button_Trigger");
  v30 = (__int64*)fw_memory_HeapManager_Allocate(*v0, 48, 16, 0);
  v31 = (__int64)(v30 + 6);
  v32 = v30;
  GameData_225d9a0 = (__int64)v30;
  GameData_225d9a8 = (__int64)v30;
  v188_.v195 = v29;
  GameData_225d9b0 = (__int64)(v30 + 6);
  fw_text_String_CopyTerminated(v30, (__int64)v29, 0x19u);
  v33 = *v0;
  GameData_225d9a8 = v31;
  GameData_225d9c0 = 0;
  GameData_225d9d0 = 0;
  strcpy((char*)v32 + 24, ",MID_Config_Button_Hold");
  GameData_225d9b8 = 9;
  GameData_225d9c8 = (__int64)"MID_Config_System";
  v34 = (_QWORD*)fw_memory_HeapManager_Allocate(v33, 24, 16, 0);
  GameData_225d9d8 = (__int64)v34;
  *v34 = 0;
  GameData_225d9f0 = 0;
  GameData_225d9e8 = (__int64)(v34 + 3);
  GameData_225d9e0 = (__int64)(v34 + 3);
  v35 = *v0;
  GameData_225d9f8 = 2048;
  GameData_225da08 = (__int64)"MID_Config_System_Vibration_Help";
  GameData_225da00 = (__int64)"MID_Config_System_Vibration";
  v36 = (_QWORD*)fw_memory_HeapManager_Allocate(v35, 24, 16, 0);
  GameData_225da10 = (__int64)v36;
  *v36 = 0;
  GameData_225da30 = 256;
  GameData_225da20 = (__int64)(v36 + 3);
  GameData_225da18 = (__int64)(v36 + 3);
  v37 = *v0;
  GameData_225da28 = 10;
  GameData_225da40 = (__int64)"MID_Config_System_MouseMode_Help";
  GameData_225da38 = (__int64)"MID_Config_System_MouseMode";
  v38 = (_QWORD*)fw_memory_HeapManager_Allocate(v37, 48, 16, 0);
  GameData_225da48 = (__int64)v38;
  *v38 = 0x6E6F435F44494D1ELL;
  v38[1] = 0x6F7475415F676966LL;
  v38[2] = 0;
  v38[3] = 0x6E6F435F44494D22LL;
  GameData_225da58 = (__int64)(v38 + 6);
  GameData_225da50 = (__int64)(v38 + 6);
  GameData_225da60 = 13;
  GameData_225da68 = 512;
  v38[4] = 0x756E614D5F676966LL;
  GameData_225da70 = (__int64)"MID_Config_System_MouseSense";
  v38[5] = 27745;
  v39 = *v0;
  GameData_225da78 = (__int64)"MID_Config_System_MouseSense_Help";
  v40 = (_QWORD*)fw_memory_HeapManager_Allocate(v39, 24, 16, 0);
  GameData_225da80 = (__int64)v40;
  *v40 = 0;
  GameData_225daa0 = 256;
  GameData_225da90 = (__int64)(v40 + 3);
  GameData_225da88 = (__int64)(v40 + 3);
  v41 = *v0;
  GameData_225da98 = 14;
  GameData_225dab0 = (__int64)"MID_Config_System_Tutorial_Help";
  GameData_225daa8 = (__int64)"MID_Config_System_Tutorial";
  v42 = (_QWORD*)fw_memory_HeapManager_Allocate(v41, 48, 16, 0);
  GameData_225dab8 = (__int64)v42;
  GameData_225dad8 = 256;
  v42[2] = 25964;
  v42[3] = 0x6E6F435F44494D24LL;
  GameData_225dac8 = (__int64)(v42 + 6);
  GameData_225dac0 = (__int64)(v42 + 6);
  GameData_225dae8 = (__int64)"MID_Config_System_Bug_Help";
  GameData_225dad0 = 11;
  GameData_225dae0 = (__int64)"MID_Config_System_Bug";
  qmemcpy(v42, "\"MID_Config_Enab", 16);
  v42[4] = 0x617369445F676966LL;
  v42[5] = 6646882;
  v43 = fw_memory_HeapManager_Allocate(*v0, 48, 16, 0);
  GameData_225daf0 = v43;
  v44 = v43 + 48;
  strcpy((char*)v43, "$MID_Config_Disable");
  *(_DWORD*)(v43 + 20) = 0;
  strcpy((char*)(v43 + 24), "\"MID_Config_Enable");
  *(_BYTE*)(v43 + 43) = 0;
  *(_DWORD*)(v43 + 44) = 0;
  v45 = *v0;
  GameData_225db00 = v44;
  GameData_225daf8 = v44;
  GameData_225db10 = 256;
  GameData_225db20 = (__int64)"MID_Config_System_Speed_Help";
  GameData_225db08 = 12;
  GameData_225db18 = (__int64)"MID_Config_System_Speed";
  v46 = (char*)fw_memory_HeapManager_Allocate(v45, 26, 16, 0);
  strcpy(v46, "MID_Config_Speed_Normal");
  v47 = (__int64*)fw_memory_HeapManager_Allocate(*v0, 48, 16, 0);
  v48 = (__int64)(v47 + 6);
  v49 = v47;
  GameData_225db28 = (__int64)v47;
  GameData_225db30 = (__int64)v47;
  GameData_225db38 = (__int64)(v47 + 6);
  fw_text_String_CopyTerminated(v47, (__int64)v46, 0x17u);
  v50 = *v0;
  GameData_225db30 = v48;
  GameData_225db48 = 256;
  strcpy((char*)v49 + 24, "*MID_Config_Speed_Fast");
  GameData_225db58 = (__int64)"MID_Config_System_TurnEndConfirm_Help";
  *((_BYTE*)v49 + 47) = 0;
  GameData_225db40 = 21;
  GameData_225db50 = (__int64)"MID_Config_System_TurnEndConfirm";
  v51 = fw_memory_HeapManager_Allocate(v50, 48, 16, 0);
  GameData_225db60 = v51;
  qmemcpy((void*)v51, "$MID_Config_Disa", 16);
  GameData_225db70 = v51 + 48;
  GameData_225db68 = v51 + 48;
  v188_.v197 = 0x6E6F435F44494D22LL;
  GameData_225db90 = 0;
  *(_QWORD*)(v51 + 16) = 6646882;
  strcpy((char*)(v51 + 24), "\"MID_Config_Enable");
  GameData_225db78 = 22;
  *(_BYTE*)(v51 + 43) = 0;
  *(_DWORD*)(v51 + 44) = 0;
  v52 = *v0;
  GameData_225db80 = 1;
  GameData_225db88 = (__int64)"MID_Config_Anim";
  v53 = (_QWORD*)fw_memory_HeapManager_Allocate(v52, 24, 16, 0);
  v55 = (__int64*)GameData_225d708;
  v54 = GameData_225d710;
  GameData_225db98 = (__int64)v53;
  v56 = GameData_225d710 - GameData_225d708;
  GameData_225dbb8 = 1;
  GameData_225dbb9 = 1;
  *v53 = 0;
  GameData_225dbc0 = (__int64)"MID_Config_Anim_Battle";
  GameData_225dba8 = (__int64)(v53 + 3);
  GameData_225dba0 = (__int64)(v53 + 3);
  GameData_225dbb0 = 0;
  GameData_225dbc8 = (__int64)"MID_Config_Anim_Battle_Help";
  GameData_225dbd0 = 0;
  GameData_225dbd8 = 0;
  GameData_225dbe0 = 0;
  if ((__int64*)v54 == v55) {
    v61 = 0;
    v60 = v55;
  }
  else {
    if (0xAAAAAAAAAAAAAAABLL * (v56 >> 3) > 0xAAAAAAAAAAAAAAALL) {
      goto LABEL_72;
    }
    v57 =
        (__int64*)fw_memory_HeapManager_Allocate(*v0, v54 - (_QWORD)v55, 16, 0);
    GameData_225dbd0 = (__int64)v57;
    GameData_225dbd8 = (__int64)v57;
    GameData_225dbe0 = (__int64)v57 + v56;
    do {
      if ((*(_BYTE*)v55 & 1) != 0) {
        fw_text_String_CopyTerminated(v57, v55[2], v55[1]);
      }
      else {
        v58 = *v55;
        v59 = v55[2];
        v57[1] = v55[1];
        v57[2] = v59;
        *v57 = v58;
      }
      v55 += 3;
      v57 += 3;
    } while (v55 != (__int64*)v54);
    v60 = (__int64*)GameData_225d708;
    v55 = (__int64*)GameData_225d710;
    GameData_225dbd8 = (__int64)v57;
    v61 = GameData_225d710 - GameData_225d708;
  }
  v188_.v194 = v46;
  GameData_225dbe8 = 15;
  GameData_225dbf0 = 257;
  GameData_225dc08 = 0;
  GameData_225dc10 = 0;
  GameData_225dc18 = 0;
  GameData_225dbf8 = (__int64)"MID_Config_Anim_Assist";
  GameData_225dc00 = (__int64)"MID_Config_Anim_Assist_Help";
  if (v55 != v60) {
    if (0xAAAAAAAAAAAAAAABLL * (v61 >> 3) > 0xAAAAAAAAAAAAAAALL) {
      goto LABEL_72;
    }
    v62 = (__int64*)fw_memory_HeapManager_Allocate(*v0, v61, 16, 0);
    GameData_225dc08 = (__int64)v62;
    GameData_225dc10 = (__int64)v62;
    GameData_225dc18 = (__int64)v62 + v61;
    do {
      if ((*(_BYTE*)v60 & 1) != 0) {
        fw_text_String_CopyTerminated(v62, v60[2], v60[1]);
      }
      else {
        v63 = *v60;
        v64 = v60[2];
        v62[1] = v60[1];
        v62[2] = v64;
        *v62 = v63;
      }
      v60 += 3;
      v62 += 3;
    } while (v60 != v55);
    GameData_225dc10 = (__int64)v62;
  }
  v65 = *v0;
  GameData_225dc20 = 16;
  GameData_225dc28 = 257;
  GameData_225dc30 = (__int64)"MID_Config_Anim_Special";
  GameData_225dc38 = (__int64)"MID_Config_Anim_Special_Help";
  v66 = fw_memory_HeapManager_Allocate(v65, 48, 16, 0);
  v67 = v188_.v197;
  GameData_225dc40 = v66;
  GameData_225dc70 = 0;
  GameData_225dc50 = v66 + 48;
  GameData_225dc48 = v66 + 48;
  *(_DWORD*)(v66 + 20) = 0;
  *(_QWORD*)(v66 + 24) = v188_.v197;
  strcpy((char*)v66, "$MID_Config_Disable");
  GameData_225dc58 = 17;
  GameData_225dc60 = 1;
  GameData_225dc68 = (__int64)"MID_Config_UI";
  *(_QWORD*)(v66 + 32) = 0x62616E455F676966LL;
  *(_QWORD*)(v66 + 40) = 25964;
  v68 = (_QWORD*)fw_memory_HeapManager_Allocate(*v0, 24, 16, 0);
  GameData_225dc78 = (__int64)v68;
  *v68 = 0;
  GameData_225dc90 = 0;
  GameData_225dc88 = (__int64)(v68 + 3);
  GameData_225dc80 = (__int64)(v68 + 3);
  v69 = *v0;
  GameData_225dc98 = 257;
  GameData_225dca0 = (__int64)"MID_Config_UI_Status";
  GameData_225dca8 = (__int64)"MID_Config_UI_Status_Help";
  v70 = (_QWORD*)fw_memory_HeapManager_Allocate(v69, 48, 16, 0);
  GameData_225dcb0 = (__int64)v70;
  GameData_225dcd0 = 257;
  v188_.v196 = 0x6E6F435F44494D26LL;
  qmemcpy(v70, "&MID_Config_Stan", 16);
  GameData_225dcc0 = (__int64)(v70 + 6);
  GameData_225dcb8 = (__int64)(v70 + 6);
  GameData_225dcc8 = 18;
  v70[2] = 1685217636;
  v70[3] = v67;
  GameData_225dcd8 = (__int64)"MID_Config_UI_HP";
  v70[4] = 0x617465445F676966LL;
  v70[5] = 27753;
  v71 = *v0;
  GameData_225dce0 = (__int64)"MID_Config_UI_HP_Help";
  v72 = (_QWORD*)fw_memory_HeapManager_Allocate(v71, 48, 16, 0);
  GameData_225dce8 = (__int64)v72;
  qmemcpy(v72, "$MID_Config_Disa", 16);
  GameData_225dd08 = 257;
  GameData_225dcf8 = (__int64)(v72 + 6);
  GameData_225dcf0 = (__int64)(v72 + 6);
  v72[2] = 6646882;
  v72[3] = v67;
  GameData_225dd00 = 19;
  GameData_225dd10 = (__int64)"MID_Config_UI_Face";
  GameData_225dd18 = (__int64)"MID_Config_UI_Face_Help";
  v72[4] = 0x62616E455F676966LL;
  v72[5] = 25964;
  v73 = fw_memory_HeapManager_Allocate(*v0, 48, 16, 0);
  GameData_225dd20 = v73;
  v74 = v73 + 48;
  strcpy((char*)v73, "$MID_Config_Disable");
  *(_DWORD*)(v73 + 20) = 0;
  *(_QWORD*)(v73 + 24) = v67;
  GameData_225dd40 = 257;
  *(_QWORD*)(v73 + 32) = 0x62616E455F676966LL;
  *(_QWORD*)(v73 + 40) = 25964;
  v75 = *v0;
  GameData_225dd30 = v74;
  GameData_225dd28 = v74;
  GameData_225dd38 = 20;
  GameData_225dd50 = (__int64)"MID_Config_UI_GridAlpha_Help";
  GameData_225dd48 = (__int64)"MID_Config_UI_GridAlpha";
  v76 = (char*)fw_memory_HeapManager_Allocate(v75, 26, 16, 0);
  strcpy(v76, "MID_Config_Enable_Thick");
  qmemcpy(v188_.v188, "le_Thickig_EnablMID_Conf", sizeof(v188_.v188));
  v188_.v193 = v76;
  v77 = fw_memory_HeapManager_Allocate(*v0, 72, 16, 0);
  GameData_225dd58 = v77;
  GameData_225dd60 = v77;
  v78 = v77 + 72;
  qmemcpy((void*)v77, "$MID_Config_Disa", 16);
  GameData_225dd68 = v77 + 72;
  *(_QWORD*)(v77 + 16) = 6646882;
  strcpy((char*)(v77 + 24), ",MID_Config_Enable_Thin");
  fw_text_String_CopyTerminated((__int64*)(v77 + 48), (__int64)v76, 0x17u);
  v79 = *v0;
  GameData_225dd60 = v78;
  GameData_225dd70 = 28;
  GameData_225dd78 = 513;
  GameData_225dd80 = (__int64)"MID_Config_UI_EnemyRangeAlpha";
  GameData_225dd88 = (__int64)"MID_Config_UI_EnemyRangeAlpha_Help";
  v80 = (_QWORD*)fw_memory_HeapManager_Allocate(v79, 24, 16, 0);
  GameData_225dd90 = (__int64)v80;
  *v80 = 0;
  GameData_225dda0 = (__int64)(v80 + 3);
  GameData_225dd98 = (__int64)(v80 + 3);
  v81 = *v0;
  GameData_225dda8 = 29;
  GameData_225ddc0 = (__int64)"MID_Config_UI_SupportInfo_Unit_Help";
  GameData_225ddb0 = 769;
  GameData_225ddb8 = (__int64)"MID_Config_UI_SupportInfo_Unit";
  v82 = (_QWORD*)fw_memory_HeapManager_Allocate(v81, 24, 16, 0);
  GameData_225ddc8 = (__int64)v82;
  *v82 = 0;
  GameData_225ddd8 = (__int64)(v82 + 3);
  GameData_225ddd0 = (__int64)(v82 + 3);
  v83 = *v0;
  GameData_225dde0 = 30;
  GameData_225dde8 = 257;
  GameData_225ddf8 = (__int64)"MID_Config_UI_Minimap_Bmap_Help";
  GameData_225ddf0 = (__int64)"MID_Config_UI_Minimap_Bmap";
  v84 = (char*)fw_memory_HeapManager_Allocate(v83, 26, 16, 0);
  strcpy(v84, "MID_Config_Enable_Small");
  qmemcpy(v187, "le_Smallig_EnablMID_Conf", sizeof(v187));
  v188_.v192 = v84;
  v85 = fw_memory_HeapManager_Allocate(*v0, 72, 16, 0);
  GameData_225de00 = v85;
  GameData_225de08 = v85;
  qmemcpy((void*)v85, "$MID_Config_Disa", 16);
  GameData_225de10 = v85 + 72;
  *(_QWORD*)(v85 + 16) = 6646882;
  fw_text_String_CopyTerminated((__int64*)(v85 + 24), (__int64)v84, 0x17u);
  v86 = *v0;
  GameData_225de08 = v85 + 72;
  GameData_225de20 = 257;
  strcpy((char*)(v85 + 48), "*MID_Config_Enable_Big");
  GameData_225de28 = (__int64)"MID_Config_UI_MinimapRotate_Bmap";
  *(_BYTE*)(v85 + 71) = 0;
  GameData_225de18 = 31;
  GameData_225de30 = (__int64)"MID_Config_UI_MinimapRotate_Bmap_Help";
  v87 = (char*)fw_memory_HeapManager_Allocate(v86, 32, 16, 0);
  strcpy(v87, "MID_Config_Enable_NotScale");
  v188_.v190 = v87;
  v88 = (char*)fw_memory_HeapManager_Allocate(*v0, 26, 16, 0);
  strcpy(v88, "MID_Config_Enable_Scale");
  qmemcpy(v186, "le_Scaleig_EnablMID_Confe_NotScaig_EnablMID_Conf",
          sizeof(v186));
  v188_.v191 = v88;
  v89 = fw_memory_HeapManager_Allocate(*v0, 72, 16, 0);
  GameData_225de38 = v89;
  GameData_225de40 = v89;
  GameData_225de48 = v89 + 72;
  *(_DWORD*)(v89 + 20) = 0;
  strcpy((char*)v89, "$MID_Config_Disable");
  fw_text_String_CopyTerminated((__int64*)(v89 + 24), (__int64)v87, 0x1Au);
  fw_text_String_CopyTerminated((__int64*)(v89 + 48), (__int64)v88, 0x17u);
  v90 = *v0;
  GameData_225de40 = v89 + 72;
  GameData_225de50 = 32;
  GameData_225de68 = 0;
  GameData_225de58 = 1;
  GameData_225de60 = (__int64)"MID_Config_TopCamera";
  v91 = (_QWORD*)fw_memory_HeapManager_Allocate(v90, 24, 16, 0);
  GameData_225de70 = (__int64)v91;
  *v91 = 0;
  GameData_225de88 = 0;
  GameData_225de80 = (__int64)(v91 + 3);
  GameData_225de78 = (__int64)(v91 + 3);
  v92 = *v0;
  GameData_225de90 = 257;
  GameData_225de98 = (__int64)"MID_Config_TopCamera_ReverseX";
  GameData_225dea0 = (__int64)"MID_Config_TopCamera_ReverseX_Help";
  v93 = fw_memory_HeapManager_Allocate(v92, 48, 16, 0);
  v94 = v188_.v196;
  GameData_225dea8 = v93;
  GameData_225dec8 = 257;
  GameData_225deb8 = v93 + 48;
  GameData_225deb0 = v93 + 48;
  *(_BYTE*)(v93 + 21) = 0;
  *(_WORD*)(v93 + 22) = 0;
  strcpy((char*)(v93 + 24), "$MID_Config_Reverse");
  v188_.v189 = 6648690;
  GameData_225dec0 = 24;
  GameData_225ded0 = (__int64)"MID_Config_TopCamera_ReverseY";
  *(_QWORD*)v93 = v188_.v196;
  strcpy((char*)(v93 + 8), "fig_Standard");
  *(_DWORD*)(v93 + 44) = 0;
  v95 = *v0;
  GameData_225ded8 = (__int64)"MID_Config_TopCamera_ReverseY_Help";
  v96 = fw_memory_HeapManager_Allocate(v95, 48, 16, 0);
  GameData_225dee0 = v96;
  v97 = v96 + 48;
  *(_QWORD*)v96 = v94;
  strcpy((char*)(v96 + 8), "fig_Standard");
  *(_BYTE*)(v96 + 21) = 0;
  *(_WORD*)(v96 + 22) = 0;
  strcpy((char*)(v96 + 24), "$MID_Config_Reverse");
  *(_DWORD*)(v96 + 44) = 0;
  v98 = *v0;
  GameData_225def0 = v97;
  GameData_225dee8 = v97;
  GameData_225df10 = (__int64)"MID_Config_Camera_Sense_Help";
  GameData_225def8 = 25;
  GameData_225df00 = 513;
  GameData_225df08 = (__int64)"MID_Config_Camera_Sense";
  v99 = (_QWORD*)fw_memory_HeapManager_Allocate(v98, 24, 16, 0);
  GameData_225df18 = (__int64)v99;
  *v99 = 0;
  GameData_225df48 = 0;
  GameData_225df28 = (__int64)(v99 + 3);
  GameData_225df20 = (__int64)(v99 + 3);
  v100 = *v0;
  GameData_225df30 = 27;
  GameData_225df38 = 1;
  GameData_225df40 = (__int64)"MID_Config_BGM";
  v101 = (_QWORD*)fw_memory_HeapManager_Allocate(v100, 24, 16, 0);
  GameData_225df50 = (__int64)v101;
  *v101 = 0;
  GameData_225df68 = 0;
  GameData_225df60 = (__int64)(v101 + 3);
  GameData_225df58 = (__int64)(v101 + 3);
  v102 = *v0;
  GameData_225df70 = 1025;
  GameData_225df80 = (__int64)"MID_Config_BGM_Encount_Help";
  GameData_225df78 = (__int64)"MID_Config_BGM_Encount";
  v103 = (_QWORD*)fw_memory_HeapManager_Allocate(v102, 24, 16, 0);
  GameData_225df88 = (__int64)v103;
  *v103 = 0;
  GameData_225dfa0 = 0;
  GameData_225df90 = (__int64)(v103 + 3);
  GameData_225df98 = (__int64)(v103 + 3);
  v104 = *v0;
  GameData_225dfa8 = 1281;
  GameData_225dfb0 = (__int64)"MID_Config_BGM_CmdBattle";
  GameData_225dfb8 = (__int64)"MID_Config_BGM_CmdBattle_Help";
  v105 = (_QWORD*)fw_memory_HeapManager_Allocate(v104, 24, 16, 0);
  GameData_225dfc0 = (__int64)v105;
  *v105 = 0;
  GameData_225dfd8 = 0;
  GameData_225dfe0 = 1;
  GameData_225dfc8 = (__int64)(v105 + 3);
  GameData_225dfd0 = (__int64)(v105 + 3);
  v106 = *v0;
  GameData_225dfe8 = (__int64)"MID_Config_System";
  GameData_225dff0 = 0;
  v107 = (_QWORD*)fw_memory_HeapManager_Allocate(v106, 24, 16, 0);
  GameData_225dff8 = (__int64)v107;
  *v107 = 0;
  GameData_225e010 = 0;
  GameData_225e018 = 257;
  GameData_225e000 = (__int64)(v107 + 3);
  GameData_225e008 = (__int64)(v107 + 3);
  v108 = *v0;
  GameData_225e020 = (__int64)"MID_Config_System_AI";
  GameData_225e028 = (__int64)"MID_Config_System_AI_Help";
  v109 = fw_memory_HeapManager_Allocate(v108, 48, 16, 0);
  v110 = v188_.v197;
  GameData_225e030 = v109;
  GameData_225e038 = v109 + 48;
  GameData_225e040 = v109 + 48;
  GameData_225e048 = 23;
  GameData_225e050 = 513;
  strcpy((char*)v109, "$MID_Config_Disable");
  *(_DWORD*)(v109 + 20) = 0;
  *(_QWORD*)(v109 + 24) = v188_.v197;
  GameData_225e058 = (__int64)"MID_Config_Cursor_Sense";
  GameData_225e060 = (__int64)"MID_Config_Cursor_Sense_Help";
  *(_QWORD*)(v109 + 32) = 0x62616E455F676966LL;
  *(_QWORD*)(v109 + 40) = 25964;
  v111 = (_QWORD*)fw_memory_HeapManager_Allocate(*v0, 24, 16, 0);
  GameData_225e068 = (__int64)v111;
  *v111 = 0;
  GameData_225e070 = (__int64)(v111 + 3);
  GameData_225e078 = (__int64)(v111 + 3);
  v112 = *v0;
  GameData_225e080 = 26;
  GameData_225e088 = 2;
  GameData_225e090 = (__int64)"MID_Config_UI";
  GameData_225e098 = 0;
  v113 = (_QWORD*)fw_memory_HeapManager_Allocate(v112, 24, 16, 0);
  GameData_225e0a0 = (__int64)v113;
  *v113 = 0;
  GameData_225e0b8 = 0;
  GameData_225e0a8 = (__int64)(v113 + 3);
  GameData_225e0b0 = (__int64)(v113 + 3);
  v114 = *v0;
  GameData_225e0c0 = 258;
  GameData_225e0c8 = (__int64)"MID_Config_UI_Minimap_Hub";
  GameData_225e0d0 = (__int64)"MID_Config_UI_Minimap_Hub_Help";
  v115 = fw_memory_HeapManager_Allocate(v114, 48, 16, 0);
  v116 = v115 + 48;
  strcpy((char*)v115, "$MID_Config_Disable");
  *(_DWORD*)(v115 + 20) = 0;
  *(_QWORD*)(v115 + 24) = v110;
  *(_QWORD*)(v115 + 32) = 0x62616E455F676966LL;
  *(_QWORD*)(v115 + 40) = 25964;
  GameData_225e0d8 = v115;
  v117 = *v0;
  GameData_225e0e0 = v116;
  GameData_225e0e8 = v116;
  GameData_225e0f8 = 2;
  GameData_225e0f9 = 1;
  GameData_225e0f0 = 33;
  GameData_225e100 = (__int64)"MID_Config_UI_MinimapRotate_Hub";
  GameData_225e108 = (__int64)"MID_Config_UI_MinimapRotate_Hub_Help";
  v118 = fw_memory_HeapManager_Allocate(v117, 48, 16, 0);
  v119 = v118 + 48;
  strcpy((char*)v118, "$MID_Config_Disable");
  *(_DWORD*)(v118 + 20) = 0;
  *(_QWORD*)(v118 + 24) = v110;
  *(_QWORD*)(v118 + 32) = 0x62616E455F676966LL;
  *(_QWORD*)(v118 + 40) = 25964;
  GameData_225e110 = v118;
  v120 = *v0;
  GameData_225e130 = 2;
  GameData_225e131 = 0;
  GameData_225e118 = v119;
  GameData_225e120 = v119;
  GameData_225e128 = 34;
  GameData_225e138 = (__int64)"MID_Config_BackCamera";
  GameData_225e140 = 0;
  v121 = (_QWORD*)fw_memory_HeapManager_Allocate(v120, 24, 16, 0);
  GameData_225e148 = (__int64)v121;
  *v121 = 0;
  GameData_225e160 = 0;
  GameData_225e168 = 2;
  GameData_225e150 = (__int64)(v121 + 3);
  GameData_225e158 = (__int64)(v121 + 3);
  v122 = *v0;
  GameData_225e169 = 1;
  GameData_225e170 = (__int64)"MID_Config_BackCamera_ReverseX";
  GameData_225e178 = (__int64)"MID_Config_BackCamera_ReverseX_Help";
  v123 = fw_memory_HeapManager_Allocate(v122, 48, 16, 0);
  v124 = v188_.v196;
  v125 = v188_.v189;
  GameData_225e1a0 = 2;
  GameData_225e1a1 = 1;
  GameData_225e180 = v123;
  GameData_225e188 = v123 + 48;
  GameData_225e190 = v123 + 48;
  GameData_225e198 = 35;
  GameData_225e1a8 = (__int64)"MID_Config_BackCamera_ReverseY";
  GameData_225e1b0 = (__int64)"MID_Config_BackCamera_ReverseY_Help";
  *(_QWORD*)v123 = v188_.v196;
  strcpy((char*)(v123 + 8), "fig_Standard");
  *(_BYTE*)(v123 + 21) = 0;
  *(_WORD*)(v123 + 22) = 0;
  qmemcpy((void*)(v123 + 24), "$MID_Config_Reve", 16);
  *(_QWORD*)(v123 + 40) = v188_.v189;
  v126 = fw_memory_HeapManager_Allocate(*v0, 48, 16, 0);
  v127 = v126 + 48;
  *(_QWORD*)v126 = v124;
  strcpy((char*)(v126 + 8), "fig_Standard");
  *(_BYTE*)(v126 + 21) = 0;
  *(_WORD*)(v126 + 22) = 0;
  qmemcpy((void*)(v126 + 24), "$MID_Config_Reve", 16);
  *(_QWORD*)(v126 + 40) = v125;
  GameData_225e1b8 = v126;
  v128 = *v0;
  GameData_225e1d8 = 2;
  GameData_225e1c0 = v127;
  GameData_225e1c8 = v127;
  GameData_225e1d9 = 2;
  GameData_225e1d0 = 36;
  GameData_225e1e0 = (__int64)"MID_Config_BackCamera_Sens";
  GameData_225e1e8 = (__int64)"MID_Config_BackCamera_Sens_Help";
  v129 = (_QWORD*)fw_memory_HeapManager_Allocate(v128, 24, 16, 0);
  GameData_225e1f0 = (__int64)v129;
  *v129 = 0;
  GameData_225e210 = 2;
  GameData_225e211 = 2;
  GameData_225e1f8 = (__int64)(v129 + 3);
  GameData_225e200 = (__int64)(v129 + 3);
  v130 = *v0;
  GameData_225e208 = 37;
  GameData_225e218 = (__int64)"MID_Config_BackCamera_Mouse_Sens";
  GameData_225e220 = (__int64)"MID_Config_BackCamera_Mouse_Sens_Help";
  v131 = (_QWORD*)fw_memory_HeapManager_Allocate(v130, 24, 16, 0);
  GameData_225e228 = (__int64)v131;
  *v131 = 0;
  GameData_225e248 = 2;
  GameData_225e249 = 2;
  GameData_225e230 = (__int64)(v131 + 3);
  GameData_225e238 = (__int64)(v131 + 3);
  v132 = *v0;
  GameData_225e240 = 38;
  GameData_225e250 = (__int64)"MID_Config_BackCamera_AutoSens";
  GameData_225e258 = (__int64)"MID_Config_BackCamera_AutoSens_Help";
  v133 = (_QWORD*)fw_memory_HeapManager_Allocate(v132, 24, 16, 0);
  GameData_225e260 = (__int64)v133;
  *v133 = 0;
  GameData_225e278 = 39;
  v134 = *v0;
  GameData_225e268 = (__int64)(v133 + 3);
  GameData_225e270 = (__int64)(v133 + 3);
  if (*(_QWORD*)(v134 + 200) != 0) {
    v135 = 128;
  }
  else {
    v135 = 56;
  }
  nn_mem_StandardAllocator_Free(v134 + v135, (__int64)v188_.v191);
  if (*(_QWORD*)(*v0 + 200) != 0) {
    v136 = 128;
  }
  else {
    v136 = 56;
  }
  nn_mem_StandardAllocator_Free(*v0 + v136, (__int64)v188_.v190);
  if (*(_QWORD*)(*v0 + 200) != 0) {
    v137 = 128;
  }
  else {
    v137 = 56;
  }
  nn_mem_StandardAllocator_Free(*v0 + v137, (__int64)v188_.v192);
  if (*(_QWORD*)(*v0 + 200) != 0) {
    v138 = 128;
  }
  else {
    v138 = 56;
  }
  nn_mem_StandardAllocator_Free(*v0 + v138, (__int64)v188_.v193);
  if (*(_QWORD*)(*v0 + 200) != 0) {
    v139 = 128;
  }
  else {
    v139 = 56;
  }
  nn_mem_StandardAllocator_Free(*v0 + v139, (__int64)v188_.v194);
  if (*(_QWORD*)(*v0 + 200) != 0) {
    v140 = 128;
  }
  else {
    v140 = 56;
  }
  nn_mem_StandardAllocator_Free(*v0 + v140, (__int64)v188_.v195);
  GameRoutine_2b0();
  v141 = *v0;
  GameData_225e280 = 1;
  GameData_225e281 = 0;
  GameData_225e288 = (__int64)"MID_Config_Anim";
  GameData_225e290 = 0;
  v142 = (_QWORD*)fw_memory_HeapManager_Allocate(v141, 24, 16, 0);
  GameData_225e298 = (__int64)v142;
  *v142 = 0;
  v144 = (__int64*)GameData_225d708;
  v143 = GameData_225d710;
  GameData_225e2b8 = 1;
  GameData_225e2b9 = 1;
  v145 = GameData_225d710 - GameData_225d708;
  GameData_225e2a0 = (__int64)(v142 + 3);
  GameData_225e2a8 = (__int64)(v142 + 3);
  GameData_225e2b0 = 0;
  GameData_225e2c0 = (__int64)"MID_Config_Anim_Battle";
  GameData_225e2c8 = (__int64)"MID_Config_Anim_Battle_Help";
  GameData_225e2d0 = 0;
  GameData_225e2d8 = 0;
  GameData_225e2e0 = 0;
  if (GameData_225d710 == GameData_225d708) {
    v150 = 0;
    v149 = (__int64*)GameData_225d708;
  }
  else {
    if (0xAAAAAAAAAAAAAAABLL * (v145 >> 3) > 0xAAAAAAAAAAAAAAALL) {
      goto LABEL_72;
    }
    v146 = (__int64*)fw_memory_HeapManager_Allocate(
        *v0, GameData_225d710 - GameData_225d708, 16, 0);
    GameData_225e2d0 = (__int64)v146;
    GameData_225e2d8 = (__int64)v146;
    GameData_225e2e0 = (__int64)v146 + v145;
    do {
      if ((*(_BYTE*)v144 & 1) != 0) {
        fw_text_String_CopyTerminated(v146, v144[2], v144[1]);
      }
      else {
        v147 = *v144;
        v148 = v144[2];
        v146[1] = v144[1];
        v146[2] = v148;
        *v146 = v147;
      }
      v144 += 3;
      v146 += 3;
    } while (v144 != (__int64*)v143);
    v149 = (__int64*)GameData_225d708;
    v144 = (__int64*)GameData_225d710;
    GameData_225e2d8 = (__int64)v146;
    v150 = GameData_225d710 - GameData_225d708;
  }
  GameData_225e2e8 = 15;
  GameData_225e2f0 = 257;
  GameData_225e308 = 0;
  GameData_225e310 = 0;
  GameData_225e318 = 0;
  GameData_225e2f8 = (__int64)"MID_Config_Anim_Assist";
  GameData_225e300 = (__int64)"MID_Config_Anim_Assist_Help";
  if (v144 == v149) {
    goto LABEL_59;
  }
  if (0xAAAAAAAAAAAAAAABLL * (v150 >> 3) > 0xAAAAAAAAAAAAAAALL) {
  LABEL_72:
    GameRoutine_64aa00();
  }
  v151 = (__int64*)fw_memory_HeapManager_Allocate(*v0, v150, 16, 0);
  GameData_225e308 = (__int64)v151;
  GameData_225e310 = (__int64)v151;
  GameData_225e318 = (__int64)v151 + v150;
  do {
    if ((*(_BYTE*)v149 & 1) != 0) {
      fw_text_String_CopyTerminated(v151, v149[2], v149[1]);
    }
    else {
      v152 = *v149;
      v153 = v149[2];
      v151[1] = v149[1];
      v151[2] = v153;
      *v151 = v152;
    }
    v149 += 3;
    v151 += 3;
  } while (v149 != v144);
  GameData_225e310 = (__int64)v151;
LABEL_59:
  v154 = *v0;
  GameData_225e320 = 16;
  GameData_225e328 = 257;
  GameData_225e330 = (__int64)"MID_Config_Anim_Special";
  GameData_225e338 = (__int64)"MID_Config_Anim_Special_Help";
  v155 = fw_memory_HeapManager_Allocate(v154, 48, 16, 0);
  v156 = v188_.v197;
  GameData_225e340 = v155;
  GameData_225e348 = v155 + 48;
  GameData_225e350 = v155 + 48;
  *(_DWORD*)(v155 + 20) = 0;
  *(_QWORD*)(v155 + 24) = v188_.v197;
  strcpy((char*)v155, "$MID_Config_Disable");
  GameData_225e358 = 17;
  GameData_225e360 = 1;
  GameData_225e368 = (__int64)"MID_Config_UI";
  GameData_225e370 = 0;
  *(_QWORD*)(v155 + 32) = 0x62616E455F676966LL;
  *(_QWORD*)(v155 + 40) = 25964;
  v157 = (_QWORD*)fw_memory_HeapManager_Allocate(*v0, 24, 16, 0);
  GameData_225e378 = (__int64)v157;
  *v157 = 0;
  GameData_225e390 = 0;
  GameData_225e398 = 257;
  GameData_225e380 = (__int64)(v157 + 3);
  GameData_225e388 = (__int64)(v157 + 3);
  v158 = *v0;
  GameData_225e3a0 = (__int64)"MID_Config_UI_Status";
  GameData_225e3a8 = (__int64)"MID_Config_UI_Status_Help";
  v159 = fw_memory_HeapManager_Allocate(v158, 48, 16, 0);
  GameData_225e3b0 = v159;
  GameData_225e3d0 = 257;
  GameData_225e3b8 = v159 + 48;
  GameData_225e3c0 = v159 + 48;
  GameData_225e3c8 = 18;
  strcpy((char*)v159, "&MID_Config_Standard");
  *(_BYTE*)(v159 + 21) = 0;
  *(_WORD*)(v159 + 22) = 0;
  *(_QWORD*)(v159 + 24) = v156;
  *(_QWORD*)(v159 + 32) = 0x617465445F676966LL;
  *(_QWORD*)(v159 + 40) = 27753;
  v160 = *v0;
  GameData_225e3d8 = (__int64)"MID_Config_UI_HP";
  GameData_225e3e0 = (__int64)"MID_Config_UI_HP_Help";
  v161 = (_QWORD*)fw_memory_HeapManager_Allocate(v160, 48, 16, 0);
  qmemcpy(v161, "$MID_Config_Disa", 16);
  GameData_225e3e8 = (__int64)v161;
  GameData_225e408 = 257;
  v161[4] = 0x62616E455F676966LL;
  v161[5] = 25964;
  GameData_225e3f0 = (__int64)(v161 + 6);
  GameData_225e3f8 = (__int64)(v161 + 6);
  v161[2] = 6646882;
  v161[3] = v156;
  v162 = *v0;
  GameData_225e400 = 19;
  GameData_225e410 = (__int64)"MID_Config_UI_Face";
  GameData_225e418 = (__int64)"MID_Config_UI_Face_Help";
  v163 = fw_memory_HeapManager_Allocate(v162, 48, 16, 0);
  v164 = v163 + 48;
  strcpy((char*)v163, "$MID_Config_Disable");
  *(_DWORD*)(v163 + 20) = 0;
  *(_QWORD*)(v163 + 24) = v156;
  *(_QWORD*)(v163 + 32) = 0x62616E455F676966LL;
  *(_QWORD*)(v163 + 40) = 25964;
  GameData_225e420 = v163;
  v165 = *v0;
  GameData_225e428 = v164;
  GameData_225e430 = v164;
  GameData_225e440 = 257;
  GameData_225e438 = 20;
  GameData_225e448 = (__int64)"MID_Config_UI_GridAlpha";
  GameData_225e450 = (__int64)"MID_Config_UI_GridAlpha_Help";
  v166 = fw_memory_HeapManager_Allocate(v165, 26, 16, 0);
  *(_BYTE*)(v166 + 23) = 0;
  *(_QWORD*)v166 = v188_.v188[2];
  *(_QWORD*)(v166 + 8) = v188_.v188[1];
  *(_QWORD*)(v166 + 15) = v188_.v188[0];
  v167 = fw_memory_HeapManager_Allocate(*v0, 72, 16, 0);
  GameData_225e458 = v167;
  GameData_225e460 = v167;
  v168 = v167 + 72;
  strcpy((char*)v167, "$MID_Config_Disable");
  *(_DWORD*)(v167 + 20) = 0;
  *(_QWORD*)(v167 + 24) = 0x6E6F435F44494D2CLL;
  GameData_225e468 = v167 + 72;
  strcpy((char*)(v167 + 32), "fig_Enable_Thin");
  fw_text_String_CopyTerminated((__int64*)(v167 + 48), v166, 0x17u);
  v169 = *v0;
  GameData_225e460 = v168;
  GameData_225e470 = 28;
  GameData_225e478 = 513;
  GameData_225e480 = (__int64)"MID_Config_UI_EnemyRangeAlpha";
  GameData_225e488 = (__int64)"MID_Config_UI_EnemyRangeAlpha_Help";
  v170 = (_QWORD*)fw_memory_HeapManager_Allocate(v169, 24, 16, 0);
  GameData_225e490 = (__int64)v170;
  *v170 = 0;
  GameData_225e498 = (__int64)(v170 + 3);
  GameData_225e4a0 = (__int64)(v170 + 3);
  v171 = *v0;
  GameData_225e4a8 = 29;
  GameData_225e4b0 = 769;
  GameData_225e4b8 = (__int64)"MID_Config_UI_SupportInfo_Unit";
  GameData_225e4c0 = (__int64)"MID_Config_UI_SupportInfo_Unit_Help";
  v172 = (_QWORD*)fw_memory_HeapManager_Allocate(v171, 24, 16, 0);
  GameData_225e4c8 = (__int64)v172;
  *v172 = 0;
  GameData_225e4e8 = 257;
  GameData_225e4d0 = (__int64)(v172 + 3);
  GameData_225e4d8 = (__int64)(v172 + 3);
  v173 = *v0;
  GameData_225e4e0 = 30;
  GameData_225e4f0 = (__int64)"MID_Config_UI_Minimap_Bmap";
  GameData_225e4f8 = (__int64)"MID_Config_UI_Minimap_Bmap_Help";
  v174 = fw_memory_HeapManager_Allocate(v173, 26, 16, 0);
  *(_BYTE*)(v174 + 23) = 0;
  *(_QWORD*)v174 = v187[2];
  *(_QWORD*)(v174 + 8) = v187[1];
  *(_QWORD*)(v174 + 15) = v187[0];
  v175 = fw_memory_HeapManager_Allocate(*v0, 72, 16, 0);
  GameData_225e500 = v175;
  GameData_225e508 = v175;
  qmemcpy((void*)v175, "$MID_Config_Disa", 16);
  GameData_225e510 = v175 + 72;
  *(_QWORD*)(v175 + 16) = 6646882;
  fw_text_String_CopyTerminated((__int64*)(v175 + 24), v174, 0x17u);
  v176 = *v0;
  GameData_225e508 = v175 + 72;
  GameData_225e520 = 257;
  strcpy((char*)(v175 + 48), "*MID_Config_Enable_Big");
  *(_BYTE*)(v175 + 71) = 0;
  GameData_225e518 = 31;
  GameData_225e528 = (__int64)"MID_Config_UI_MinimapRotate_Bmap";
  GameData_225e530 = (__int64)"MID_Config_UI_MinimapRotate_Bmap_Help";
  v177 = fw_memory_HeapManager_Allocate(v176, 32, 16, 0);
  strcpy((char*)(v177 + 24), "le");
  *(_QWORD*)v177 = v186[5];
  *(_QWORD*)(v177 + 8) = v186[4];
  *(_QWORD*)(v177 + 16) = v186[3];
  v178 = fw_memory_HeapManager_Allocate(*v0, 26, 16, 0);
  *(_BYTE*)(v178 + 23) = 0;
  *(_QWORD*)v178 = v186[2];
  *(_QWORD*)(v178 + 8) = v186[1];
  *(_QWORD*)(v178 + 15) = v186[0];
  v179 = fw_memory_HeapManager_Allocate(*v0, 72, 16, 0);
  GameData_225e538 = v179;
  GameData_225e540 = v179;
  GameData_225e548 = v179 + 72;
  strcpy((char*)v179, "$MID_Config_Disable");
  *(_DWORD*)(v179 + 20) = 0;
  fw_text_String_CopyTerminated((__int64*)(v179 + 24), v177, 0x1Au);
  fw_text_String_CopyTerminated((__int64*)(v179 + 48), v178, 0x17u);
  v180 = *v0;
  GameData_225e540 = v179 + 72;
  GameData_225e550 = 32;
  if (*(_QWORD*)(v180 + 200) != 0) {
    v181 = 128;
  }
  else {
    v181 = 56;
  }
  nn_mem_StandardAllocator_Free(v180 + v181, v178);
  if (*(_QWORD*)(*v0 + 200) != 0) {
    v182 = 128;
  }
  else {
    v182 = 56;
  }
  nn_mem_StandardAllocator_Free(*v0 + v182, v177);
  if (*(_QWORD*)(*v0 + 200) != 0) {
    v183 = 128;
  }
  else {
    v183 = 56;
  }
  nn_mem_StandardAllocator_Free(*v0 + v183, v174);
  if (*(_QWORD*)(*v0 + 200) != 0) {
    v184 = 128;
  }
  else {
    v184 = 56;
  }
  nn_mem_StandardAllocator_Free(*v0 + v184, v166);
  return GameRoutine_2b0();
}

__int64 game_menu_16a0820(__int64 a1, char a2)
{
  __int64 result;
  struct {
    __int64 v4;
    __int64 v5;
  } v4_;

  LayoutAccessor_1560070((void*)(&v4_.v4), (__int64*)(a1 + 848), "L_KeyHelp");
  GameRoutine_159dda0((__int64)&v4_.v4, a2, 0);
  result = v4_.v5;
  if (v4_.v5 != 0) {
    return std___1___shared_weak_count___release_weak(v4_.v5);
  }
  return result;
}

__attribute__((swiftcall)) void game_menu_16cccb0(PSEUDO_X8 x8_, _QWORD* a1,
                                                  _QWORD** a2, _BYTE** a3,
                                                  __int64 a4)
{
  __int64** a5 = (__int64**)PSEUDO_X8_VALUE(x8_);
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v12;
  struct {
    __int64* v13;
    __int64 v14;
  } v13_;

  EquipInfoItem_SkillStock_16cce20((void*)(&v13_.v13), a1[10], a2, a3, a4);
  v7 = v13_.v14;
  if (v13_.v14 == 0) {
    goto LABEL_15;
  }
  v8 = std___1___shared_weak_count_lock(v13_.v14);
  v9 = v13_.v13;
  v10 = v8;
  std___1___shared_weak_count___release_weak(v7);
  if (v10 == 0 || v9 == nullptr) {
    if (v10 == 0) {
      goto LABEL_15;
    }
  }
  else {
    v13_.v13 = v9;
    v13_.v14 = v10;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_18855c0(a1, &v13_.v13);
    v12 = v13_.v14;
    if (v13_.v14 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v13_.v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak(v12);
    }
    *a5 = v9;
    a5[1] = (__int64*)v10;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v9 != nullptr) {
      return;
    }
    goto LABEL_15;
  }
  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  std___1___shared_weak_count___release_weak(v10);
  if (v9 == nullptr) {
  LABEL_15:
    *a5 = nullptr;
    a5[1] = nullptr;
  }
}

__int64 game_menu_16e7af0(__int64* a1)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v3;
  __int64* v4;
  float v6;
  float v7;
  float v8;
  struct {
    __int64* v9;
    __int64 v10;
  } v9_;

  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s1", "=w"));
  LayoutAccessor_1560070((void*)(&v9_.v9), a1, "L_ScrollBar"),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s1", "=w"));
  result = v9_.v10;
  if (v9_.v10 != 0) {
    v3 = std___1___shared_weak_count_lock(v9_.v10),
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s1", "=w"));
    v4 = v9_.v9;
    result = v9_.v10;
    if (v9_.v10 != 0) {
      result = std___1___shared_weak_count___release_weak(v9_.v10),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    if (v3 == 0 || v4 == nullptr) {
      if (v3 == 0) {
        return result;
      }
    }
    else {
      ui_LayoutAccessor_GetPaneSize(a1, (__int64)"Viewport"),
          v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s1", "=w"));
      v7 = v6;
      v8 = ui_LayoutAccessor_GetPaneSize(v4, (__int64)"Frm"),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s1", "=w"));
      result =
          ui_LayoutAccessor_SetPaneSize((__int64)v4, (__int64)"Frm", v8, v7),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3),
          v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s1", "=w"));
      return std___1___shared_weak_count___release_weak(v3);
    }
  }
  return result;
}

#pragma GCC visibility pop
