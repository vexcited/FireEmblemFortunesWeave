#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* game_UnitPool_Find_6ead60(__int64*, _DWORD*);
__int64 GameHr_162f3d0();
__int64 GameHr_162fce0();
__int64 GameHr_162ff50();
__int64 GameHr_1630190();
__int64 GameHr_1630300();
__int64 GameRoutine_162f4e0();
__int64 GameRoutine_162f5c0();
__int64 GameRoutine_162fc80();
__int64 GameRoutine_162fda0();
__int64 GameRoutine_1630260();
__int64 GameRoutine_1630850();
__int64 GameRoutine_16309c0();
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 UnitMakeCamera_179be60(__int64);
__int64 UnitMake_162e480();
__int64 UnitMake_162f8c0();
__int64 UnitMake_162f980();
__int64 UnitMake_162fbe0();
__int64 UnitMake_1630110();
__int64 UnitMake_1630480();
__int64 UnitMake_1630620();
__int64 UnitMake_1630780();
__int64 UnitMake_1630a00();
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GetHero(unsigned __int8);
__int64 game_ProcInst_Register(__int64);
__int64 game_menu_162e6a0();
__int64 game_menu_1630040();
__int64 game_menu_16308f0();
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
const char* game_HashString32(const char* result);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21c6868;
extern _UNKNOWN GameData_225d450;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_212c720)();
extern __int64 (*GameData_212d060[8])();
extern __int64 (*game_80a680_ptr[11])();
extern __int64 (*game_menu_UnitMake_vtable[])();
extern __int64* GameData_2131a88[7];
extern __int64* GameData_2131a90[6];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212cf70[7];
extern __int64 GameData_2131678;
extern __int64 GameData_2131d80[10];
extern __int64 GameData_21c67b0;
extern __int64 GameData_21c67b8;
extern __int64 GameData_21c67c0;
extern __int64 GameData_21c67d0;
extern __int64 GameData_21c67e0;
extern __int64 GameData_21c67f0;
extern __int64 GameData_21c67f8;
extern __int64 GameData_21c6800;
extern __int64 GameData_21c6810;
extern __int64 GameData_21c6820;
extern __int64 GameData_21c6830;
extern __int64 GameData_21c6838;
extern __int64 GameData_21c6840;
extern __int64 GameData_21c6850;
extern __int64 GameData_21c6860;
extern __int64 GameData_22031a8;
extern __int64 GameData_22031b0;
extern __int64 GameData_22031b8;
extern __int64 GameData_225ca98;
extern __int64 GameData_225caa0;
extern __int64 GameData_225caa8;
extern __int64 GameData_225cab8;
extern __int64 GameData_225cac8;
extern __int64 GameData_225cad8;
extern __int64 GameData_225cae0;
extern __int64 GameData_225cae8;
extern __int64 GameData_225caf8;
extern __int64 GameData_225cb08;
extern __int64 GameData_225cb18;
extern __int64 GameData_225cb20;
extern __int64 GameData_225cb28;
extern __int64 GameData_225cb38;
extern __int64 GameData_225cb48;
extern __int64 GameData_225cb58;
extern __int64 GameData_225cb60;
extern __int64 GameData_225cb78;
extern __int64 GameData_225cb88;
extern __int64 GameData_225cb98;
extern __int64 GameData_225cba0;
extern __int64 GameData_225cbb8;
extern __int64 GameData_225cbc8;
extern __int64 GameData_225cbd8;
extern __int64 GameData_225cbe0;
extern __int64 GameData_225cbe8;
extern __int64 GameData_225cbf8;
extern __int64 GameData_225cc08;
extern __int64 GameData_225cc18;
extern __int64 GameData_225cc20;
extern __int64 GameData_225cc28;
extern __int64 GameData_225cc38;
extern __int64 GameData_225cc48;
extern __int64 GameData_225cc58;
extern __int64 GameData_225cc60;
extern __int64 GameData_225cc68;
extern __int64 GameData_225cc78;
extern __int64 GameData_225cc88;
extern __int64 GameData_225cc98;
extern __int64 GameData_225cca0;
extern __int64 GameData_225cca8;
extern __int64 GameData_225ccb8;
extern __int64 GameData_225ccc8;
extern __int64 GameData_225ccd8;
extern __int64 GameData_225cce0;
extern __int64 GameData_225cce8;
extern __int64 GameData_225ccf8;
extern __int64 GameData_225cd08;
extern __int64 GameData_225cd18;
extern __int64 GameData_225cd20;
extern __int64 GameData_225cd28;
extern __int64 GameData_225cd38;
extern __int64 GameData_225cd48;
extern __int64 GameData_225cd58;
extern __int64 GameData_225cd60;
extern __int64 GameData_225cd68;
extern __int64 GameData_225cd78;
extern __int64 GameData_225cd88;
extern __int64 GameData_225cd98;
extern __int64 GameData_225cda0;
extern __int64 GameData_225cda8;
extern __int64 GameData_225cdb8;
extern __int64 GameData_225cdc8;
extern __int64 GameData_225cdd8;
extern __int64 GameData_225cde0;
extern __int64 GameData_225cde8;
extern __int64 GameData_225cdf8;
extern __int64 GameData_225ce08;
extern __int64 GameData_225ce18;
extern __int64 GameData_225ce20;
extern __int64 GameData_225ce28;
extern __int64 GameData_225ce38;
extern __int64 GameData_225ce48;
extern __int64 GameData_225ce58;
extern __int64 GameData_225ce60;
extern __int64 GameData_225ce68;
extern __int64 GameData_225ce78;
extern __int64 GameData_225ce88;
extern __int64 GameData_225ce98;
extern __int64 GameData_225cea0;
extern __int64 GameData_225cea8;
extern __int64 GameData_225ceb8;
extern __int64 GameData_225cec8;
extern __int64 GameData_225ced8;
extern __int64 GameData_225cee0;
extern __int64 GameData_225cee8;
extern __int64 GameData_225cef8;
extern __int64 GameData_225cf08;
extern __int64 GameData_225cf18;
extern __int64 GameData_225cf20;
extern __int64 GameData_225cf28;
extern __int64 GameData_225cf38;
extern __int64 GameData_225cf48;
extern __int64 GameData_225cf58;
extern __int64 GameData_225cf60;
extern __int64 GameData_225cf68;
extern __int64 GameData_225cf78;
extern __int64 GameData_225cf88;
extern __int64 GameData_225cf98;
extern __int64 GameData_225cfa0;
extern __int64 GameData_225cfa8;
extern __int64 GameData_225cfb8;
extern __int64 GameData_225cfc8;
extern __int64 GameData_225cfd8;
extern __int64 GameData_225cfe0;
extern __int64 GameData_225cfe8;
extern __int64 GameData_225cff8;
extern __int64 GameData_225d008;
extern __int64 GameData_225d018;
extern __int64 GameData_225d020;
extern __int64 GameData_225d028;
extern __int64 GameData_225d038;
extern __int64 GameData_225d048;
extern __int64 GameData_225d058;
extern __int64 GameData_225d060;
extern __int64 GameData_225d068;
extern __int64 GameData_225d078;
extern __int64 GameData_225d088;
extern __int64 GameData_225d098;
extern __int64 GameData_225d0a0;
extern __int64 GameData_225d0a8;
extern __int64 GameData_225d0b8;
extern __int64 GameData_225d0c8;
extern __int64 GameData_225d0d8;
extern __int64 GameData_225d0e0;
extern __int64 GameData_225d0e8;
extern __int64 GameData_225d0f8;
extern __int64 GameData_225d108;
extern __int64 GameData_225d118;
extern __int64 GameData_225d120;
extern __int64 GameData_225d128;
extern __int64 GameData_225d138;
extern __int64 GameData_225d148;
extern __int64 GameData_225d158;
extern __int64 GameData_225d160;
extern __int64 GameData_225d168;
extern __int64 GameData_225d178;
extern __int64 GameData_225d188;
extern __int64 GameData_225d198;
extern __int64 GameData_225d1a0;
extern __int64 GameData_225d1a8;
extern __int64 GameData_225d1b8;
extern __int64 GameData_225d1c8;
extern __int64 GameData_225d1d8;
extern __int64 GameData_225d1e0;
extern __int64 GameData_225d1e8;
extern __int64 GameData_225d1f8;
extern __int64 GameData_225d208;
extern __int64 GameData_225d218;
extern __int64 GameData_225d220;
extern __int64 GameData_225d228;
extern __int64 GameData_225d238;
extern __int64 GameData_225d248;
extern __int64 GameData_225d258;
extern __int64 GameData_225d260;
extern __int64 GameData_225d268;
extern __int64 GameData_225d278;
extern __int64 GameData_225d288;
extern __int64 GameData_225d298;
extern __int64 GameData_225d2a0;
extern __int64 GameData_225d2a8;
extern __int64 GameData_225d2b8;
extern __int64 GameData_225d2c8;
extern __int64 GameData_225d2d8;
extern __int64 GameData_225d2e0;
extern __int64 GameData_225d2f8;
extern __int64 GameData_225d308;
extern __int64 GameData_225d318;
extern __int64 GameData_225d320;
extern __int64 GameData_225d338;
extern __int64 GameData_225d348;
extern __int64 GameData_225d358;
extern __int64 GameData_225d360;
extern __int64 GameData_225d368;
extern __int64 GameData_225d378;
extern __int64 GameData_225d388;
extern __int64 GameData_225d398;
extern __int64 GameData_225d3a0;
extern __int64 GameData_225d3a8;
extern __int64 GameData_225d3b8;
extern __int64 GameData_225d3c8;
extern __int64 GameData_225d3d8;
extern __int64 GameData_225d3e0;
extern __int64 GameData_225d3e8;
extern __int64 GameData_225d3f8;
extern __int64 GameData_225d408;
extern __int64 GameData_225d418;
extern __int64 GameData_225d420;
extern __int64 GameData_225d428;
extern __int64 GameData_225d438;
extern __int64 GameData_225d448;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char GameData_21759d0;
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern char GameData_2203488;
extern char GameData_2203489;
extern char GameData_225ca90;
extern char GameData_225cad0;
extern char GameData_225cb10;
extern char GameData_225cb50;
extern char GameData_225cb90;
extern char GameData_225cbd0;
extern char GameData_225cc10;
extern char GameData_225cc50;
extern char GameData_225cc90;
extern char GameData_225ccd0;
extern char GameData_225cd10;
extern char GameData_225cd50;
extern char GameData_225cd90;
extern char GameData_225cdd0;
extern char GameData_225ce10;
extern char GameData_225ce50;
extern char GameData_225ce90;
extern char GameData_225ced0;
extern char GameData_225cf10;
extern char GameData_225cf50;
extern char GameData_225cf90;
extern char GameData_225cfd0;
extern char GameData_225d010;
extern char GameData_225d050;
extern char GameData_225d090;
extern char GameData_225d0d0;
extern char GameData_225d110;
extern char GameData_225d150;
extern char GameData_225d190;
extern char GameData_225d1d0;
extern char GameData_225d210;
extern char GameData_225d250;
extern char GameData_225d290;
extern char GameData_225d2d0;
extern char GameData_225d310;
extern char GameData_225d350;
extern char GameData_225d390;
extern char GameData_225d3d0;
extern char GameData_225d410;
extern char GameData_2264530;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
extern int GameData_220348c;
extern int GameData_225cab0;
extern int GameData_225cac0;
extern int GameData_225caf0;
extern int GameData_225cb00;
extern int GameData_225cb30;
extern int GameData_225cb40;
extern int GameData_225cb70;
extern int GameData_225cb80;
extern int GameData_225cbb0;
extern int GameData_225cbc0;
extern int GameData_225cbf0;
extern int GameData_225cc00;
extern int GameData_225cc30;
extern int GameData_225cc40;
extern int GameData_225cc70;
extern int GameData_225cc80;
extern int GameData_225ccb0;
extern int GameData_225ccc0;
extern int GameData_225ccf0;
extern int GameData_225cd00;
extern int GameData_225cd30;
extern int GameData_225cd40;
extern int GameData_225cd70;
extern int GameData_225cd80;
extern int GameData_225cdb0;
extern int GameData_225cdc0;
extern int GameData_225cdf0;
extern int GameData_225ce00;
extern int GameData_225ce30;
extern int GameData_225ce40;
extern int GameData_225ce70;
extern int GameData_225ce80;
extern int GameData_225ceb0;
extern int GameData_225cec0;
extern int GameData_225cef0;
extern int GameData_225cf00;
extern int GameData_225cf30;
extern int GameData_225cf40;
extern int GameData_225cf70;
extern int GameData_225cf80;
extern int GameData_225cfb0;
extern int GameData_225cfc0;
extern int GameData_225cff0;
extern int GameData_225d000;
extern int GameData_225d030;
extern int GameData_225d040;
extern int GameData_225d070;
extern int GameData_225d080;
extern int GameData_225d0b0;
extern int GameData_225d0c0;
extern int GameData_225d0f0;
extern int GameData_225d100;
extern int GameData_225d130;
extern int GameData_225d140;
extern int GameData_225d170;
extern int GameData_225d180;
extern int GameData_225d1b0;
extern int GameData_225d1c0;
extern int GameData_225d1f0;
extern int GameData_225d200;
extern int GameData_225d230;
extern int GameData_225d240;
extern int GameData_225d270;
extern int GameData_225d280;
extern int GameData_225d2b0;
extern int GameData_225d2c0;
extern int GameData_225d2f0;
extern int GameData_225d300;
extern int GameData_225d330;
extern int GameData_225d340;
extern int GameData_225d370;
extern int GameData_225d380;
extern int GameData_225d3b0;
extern int GameData_225d3c0;
extern int GameData_225d3f0;
extern int GameData_225d400;
extern int GameData_225d430;
extern int GameData_225d440;
int __cxa_guard_acquire(__int64);
void* game_97b2f0(__int64);
void UnitMake_1630d20(__int64, char);
void __cxa_guard_release(__int64);
void game_97b400(__int64, __int64);
__int64 game_menu_162c2a0(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                          __int64 a9, __int64 a10, __int64 a11, __int64 a12,
                          __int64* a13);

__int64 game_menu_162c2a0(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                          __int64 a9, __int64 a10, __int64 a11, __int64 a12,
                          __int64* a13)
{
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
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
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
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
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 i;
  __int64 v137;
  __int64 v138;
  _QWORD* v139;
  _BYTE* v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64* v146;
  __int128 v147;
  __int64 v148;
  __int64* v149;
  int v150;
  unsigned int v151;
  unsigned int v152;
  int v153;
  unsigned int v154;
  int v155;
  bool v156;
  _BOOL4 v157;
  _QWORD* v158;
  unsigned int v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  void* v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  void* v170;
  __int64 v171;
  void* v172;
  __int64 v173;
  void* v174;
  __int64 result;
  __int64 v176;
  __int64 v177;
  int v179;
  __int64 v180;

  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_225d450,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_225d450) != 0) {
    GameData_225cad8 = 0;
    GameData_225cae0 = (__int64)UnitMake_162e480;
    GameData_225ca90 = 2;
    GameData_225cab8 = 0;
    GameData_225cac0 = 0;
    GameData_225cac8 = 0;
    GameData_225ca98 = 0;
    GameData_225caa0 = 0;
    GameData_225caa8 = 0;
    GameData_225cab0 = 0;
    GameData_225cad0 = 13;
    GameData_225cb18 = 0;
    GameData_225cb20 = (__int64)game_menu_162e6a0;
    GameData_225cae8 = 0;
    GameData_225caf0 = 0;
    GameData_225caf8 = 0;
    GameData_225cb00 = 0;
    GameData_225cb08 = 0;
    GameData_225cb10 = 14;
    GameData_225cb28 = 0;
    GameData_225cb30 = 0;
    GameData_225cb38 = 0;
    GameData_225cb40 = 0;
    GameData_225cb48 = 0;
    GameData_225cb50 = 19;
    GameData_225cb78 = 0;
    GameData_225cb80 = 0;
    GameData_225cb88 = 0;
    GameData_225cb90 = 10;
    GameData_225cb58 = 0;
    GameData_225cb60 = (__int64)GameData_212d060[0];
    GameData_225cb70 = 500;
    GameData_225cbf0 = 1;
    GameData_225cc90 = 14;
    GameData_225d050 = 14;
    GameData_225cbd0 = 2;
    GameData_225ccd0 = 2;
    GameData_225ccf0 = 2;
    GameData_225cd90 = 2;
    GameData_225ce50 = 2;
    GameData_225cf10 = 2;
    GameData_225cfd0 = 2;
    GameData_225d0d0 = 2;
    GameData_225d190 = 2;
    GameData_225d250 = 2;
    GameData_225cbb0 = 0;
    GameData_225cbb8 = 0;
    GameData_225cbc0 = 0;
    GameData_225cbc8 = 0;
    GameData_225cbe0 = 0;
    GameData_225cbe8 = 0;
    GameData_225cbd8 = 0;
    GameData_225cbf8 = 0;
    GameData_225cc00 = 0;
    GameData_225cc08 = 0;
    GameData_225cc10 = 13;
    GameData_225cc28 = 0;
    GameData_225cc30 = 0;
    GameData_225cc38 = 0;
    GameData_225cc40 = 0;
    GameData_225cc48 = 0;
    GameData_225cc50 = 13;
    GameData_225cc68 = 0;
    GameData_225cc70 = 0;
    GameData_225cc78 = 0;
    GameData_225cc80 = 0;
    GameData_225cc88 = 0;
    GameData_225cc98 = 0;
    GameData_225cca8 = 0;
    GameData_225ccb0 = 0;
    GameData_225ccb8 = 0;
    GameData_225ccc0 = 0;
    GameData_225ccc8 = 0;
    GameData_225cce8 = 0;
    GameData_225cce0 = 0;
    GameData_225ccd8 = 0;
    GameData_225ccf8 = 0;
    GameData_225cd00 = 0;
    GameData_225cd08 = 0;
    GameData_225cd10 = 13;
    GameData_225cd18 = 0;
    GameData_225cd28 = 0;
    GameData_225cd30 = 0;
    GameData_225cd38 = 0;
    GameData_225cd40 = 0;
    GameData_225cd48 = 0;
    GameData_225cd50 = 13;
    GameData_225cd58 = 0;
    GameData_225cd68 = 0;
    GameData_225cd70 = 0;
    GameData_225cd78 = 0;
    GameData_225cd80 = 0;
    GameData_225cd88 = 0;
    GameData_225cda8 = 0;
    GameData_225cda0 = 0;
    GameData_225cd98 = 0;
    GameData_225cdb8 = 0;
    GameData_225cdc0 = 0;
    GameData_225cdc8 = 0;
    GameData_225cdd0 = 13;
    GameData_225cdd8 = 0;
    GameData_225cde8 = 0;
    GameData_225cdf0 = 0;
    GameData_225cdf8 = 0;
    GameData_225ce00 = 0;
    GameData_225ce08 = 0;
    GameData_225ce10 = 13;
    GameData_225ce18 = 0;
    GameData_225ce28 = 0;
    GameData_225ce30 = 0;
    GameData_225ce38 = 0;
    GameData_225ce40 = 0;
    GameData_225ce48 = 0;
    GameData_225cc18 = 0;
    GameData_225cc20 = (__int64)GameHr_162f3d0;
    GameData_225d060 = (__int64)GameHr_1630190;
    GameData_225d270 = 9;
    GameData_225ce68 = 0;
    GameData_225ce60 = 0;
    GameData_225ce58 = 0;
    GameData_225cc58 = 0;
    GameData_225cc60 = (__int64)GameRoutine_162f4e0;
    GameData_225d0a0 = (__int64)GameRoutine_1630260;
    GameData_225ce78 = 0;
    GameData_225ce80 = 0;
    GameData_225ce88 = 0;
    GameData_225ce90 = 13;
    GameData_225ce98 = 0;
    GameData_225cea8 = 0;
    GameData_225ceb0 = 0;
    GameData_225cca0 = (__int64)GameRoutine_162f5c0;
    GameData_225d0f0 = 7;
    GameData_225ceb8 = 0;
    GameData_225cec0 = 0;
    GameData_225cec8 = 0;
    GameData_225ced0 = 13;
    GameData_225ced8 = 0;
    GameData_225cee8 = 0;
    GameData_225cd20 = (__int64)UnitMake_162f8c0;
    GameData_225d120 = (__int64)GameHr_1630300;
    GameData_225cb98 = 0;
    GameData_225cba0 = (__int64)GameData_212c720;
    GameData_225cef0 = 0;
    GameData_225cef8 = 0;
    GameData_225cf00 = 0;
    GameData_225cf08 = 0;
    GameData_225cf28 = 0;
    GameData_225cd60 = (__int64)UnitMake_162f980;
    GameData_225d160 = (__int64)UnitMake_1630480;
    GameData_225cf20 = 0;
    GameData_225cf18 = 0;
    GameData_225cf38 = 0;
    GameData_225cf40 = 0;
    GameData_225cf48 = 0;
    GameData_225cf50 = 13;
    GameData_225cf58 = 0;
    GameData_225cf68 = 0;
    GameData_225cdb0 = 3;
    GameData_225d1b0 = 8;
    GameData_225cf70 = 0;
    GameData_225cf78 = 0;
    GameData_225cf80 = 0;
    GameData_225cf88 = 0;
    GameData_225cf90 = 13;
    GameData_225cf98 = 0;
    GameData_225cde0 = (__int64)UnitMake_162fbe0;
    GameData_225d1e0 = (__int64)UnitMake_1630620;
    GameData_225cfa8 = 0;
    GameData_225cfb0 = 0;
    GameData_225cfb8 = 0;
    GameData_225cfc0 = 0;
    GameData_225cfc8 = 0;
    GameData_225cfe8 = 0;
    GameData_225ce20 = (__int64)GameRoutine_162fc80;
    GameData_225cfe0 = 0;
    GameData_225cfd8 = 0;
    GameData_225cff8 = 0;
    GameData_225d000 = 0;
    GameData_225d008 = 0;
    GameData_225d010 = 13;
    GameData_225d018 = 0;
    GameData_225d028 = 0;
    GameData_225d030 = 0;
    GameData_225d038 = 0;
    GameData_225ce70 = 4;
    GameData_225d040 = 0;
    GameData_225d048 = 0;
    GameData_225d058 = 0;
    GameData_225d068 = 0;
    GameData_225d070 = 0;
    GameData_225d078 = 0;
    GameData_225d080 = 0;
    GameData_225d088 = 0;
    GameData_225d090 = 13;
    GameData_225cea0 = (__int64)GameHr_162fce0;
    GameData_225d098 = 0;
    GameData_225d0a8 = 0;
    GameData_225d0b0 = 0;
    GameData_225d0b8 = 0;
    GameData_225d0c0 = 0;
    GameData_225d0c8 = 0;
    GameData_225d0e8 = 0;
    GameData_225d0e0 = 0;
    GameData_225d0d8 = 0;
    GameData_225cee0 = (__int64)GameRoutine_162fda0;
    GameData_225d0f8 = 0;
    GameData_225d100 = 0;
    GameData_225d108 = 0;
    GameData_225d110 = 13;
    GameData_225d118 = 0;
    GameData_225d128 = 0;
    GameData_225d130 = 0;
    GameData_225d138 = 0;
    GameData_225d140 = 0;
    GameData_225d148 = 0;
    GameData_225cf30 = 5;
    GameData_225d150 = 13;
    GameData_225d158 = 0;
    GameData_225d168 = 0;
    GameData_225d170 = 0;
    GameData_225d178 = 0;
    GameData_225d180 = 0;
    GameData_225d188 = 0;
    GameData_225d1a8 = 0;
    GameData_225d1a0 = 0;
    GameData_225cf60 = (__int64)GameHr_162ff50;
    GameData_225d198 = 0;
    GameData_225d1b8 = 0;
    GameData_225d1c0 = 0;
    GameData_225d1c8 = 0;
    GameData_225d1d0 = 13;
    GameData_225d1d8 = 0;
    GameData_225d1e8 = 0;
    GameData_225d1f0 = 0;
    GameData_225d1f8 = 0;
    GameData_225cfa0 = (__int64)game_menu_1630040;
    GameData_225d200 = 0;
    GameData_225d208 = 0;
    GameData_225d210 = 13;
    GameData_225d218 = 0;
    GameData_225d220 = (__int64)UnitMake_1630780;
    GameData_225d228 = 0;
    GameData_225d230 = 0;
    GameData_225d238 = 0;
    GameData_225d240 = 0;
    GameData_225d248 = 0;
    GameData_225cff0 = 6;
    GameData_225d268 = 0;
    GameData_225d260 = 0;
    GameData_225d258 = 0;
    GameData_225d278 = 0;
    GameData_225d280 = 0;
    GameData_225d288 = 0;
    GameData_225d290 = 13;
    GameData_225d298 = 0;
    GameData_225d2a0 = (__int64)GameRoutine_1630850;
    GameData_225d020 = (__int64)UnitMake_1630110;
    GameData_225d2a8 = 0;
    GameData_225d2b0 = 0;
    GameData_225d2b8 = 0;
    GameData_225d2c0 = 0;
    GameData_225d2c8 = 0;
    GameData_225d2d0 = 19;
    GameData_225d2d8 = 0;
    GameData_225d350 = 13;
    GameData_225d390 = 13;
    GameData_225d3d0 = 13;
    GameData_225d2f0 = 500;
    GameData_225d2f8 = 0;
    GameData_225d300 = 0;
    GameData_225d308 = 0;
    GameData_225d310 = 10;
    GameData_225d318 = 0;
    GameData_225d320 = (__int64)GameData_212c720;
    GameData_225d330 = 0;
    GameData_225d338 = 0;
    GameData_225d340 = 0;
    GameData_225d348 = 0;
    GameData_225d358 = 0;
    GameData_225d368 = 0;
    GameData_225d370 = 0;
    GameData_225d378 = 0;
    GameData_225d380 = 0;
    GameData_225d388 = 0;
    GameData_225d398 = 0;
    GameData_225d3a8 = 0;
    GameData_225d3b0 = 0;
    GameData_225d3b8 = 0;
    GameData_225d3c0 = 0;
    GameData_225d3c8 = 0;
    GameData_225d3d8 = 0;
    GameData_225d3e0 = (__int64)UnitMake_1630a00;
    GameData_225d3e8 = 0;
    GameData_225d3f0 = 0;
    GameData_225d3f8 = 0;
    GameData_225d400 = 0;
    GameData_225d408 = 0;
    GameData_225d410 = 0;
    GameData_225d438 = 0;
    GameData_225d440 = 0;
    GameData_225d448 = 0;
    GameData_225d430 = 0;
    GameData_225d428 = 0;
    GameData_225d420 = 0;
    GameData_225d418 = 0;
    GameData_225d2e0 = (__int64)game_80a680_ptr[0];
    GameData_225d360 = (__int64)game_menu_16308f0;
    GameData_225d3a0 = (__int64)GameRoutine_16309c0;
    __cxa_guard_release((__int64)&GameData_225d450),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  v20 = (__int64*)fw_memory_g_heap_manager_ptr;
  v21 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       1600, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v22 = a13[1];
  v23 = v21;
  v177 = *a13;
  if (v22 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                              memory_order_relaxed);
  }
  v24 = GameData_212c608[0];
  *(_QWORD*)(v21 + 96) = 0;
  *(_QWORD*)(v21 + 104) = 0;
  *(_QWORD*)(v21 + 112) = 0;
  *(_QWORD*)(v21 + 120) = 0;
  *(_QWORD*)(v21 + 128) = 0;
  *(_WORD*)(v21 + 136) = 0;
  *(_QWORD*)(v21 + 16) = 0;
  *(_QWORD*)(v21 + 24) = "NULL";
  *(_QWORD*)(v21 + 138) = 0;
  *(_QWORD*)(v21 + 144) = 0;
  *(_QWORD*)(v21 + 32) = 0;
  *(_QWORD*)(v21 + 40) = 0;
  *(_QWORD*)(v21 + 48) = 0;
  *(_QWORD*)(v21 + 56) = 0;
  *(_QWORD*)(v21 + 64) = 0;
  *(_QWORD*)(v21 + 72) = 0;
  *(_QWORD*)(v21 + 80) = 0;
  *(_QWORD*)(v21 + 88) = 0;
  *(_QWORD*)v21 = v24 + 16;
  *(_QWORD*)(v21 + 8) = 0;
  game_ProcInst_Register(v21),
      v137 = COERCE_AS(__typeof__(v137),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_DWORD*)(v23 + 152) = 0;
  v25 = GameData_2131a88[0];
  *(_QWORD*)v23 = game_menu_UnitMake_vtable;
  *(_QWORD*)(v23 + 344) = 0;
  *(_QWORD*)(v23 + 352) = 0;
  *(_QWORD*)(v23 + 280) = 0;
  *(_QWORD*)(v23 + 288) = 0;
  *(_QWORD*)(v23 + 296) = 0;
  *(_QWORD*)(v23 + 304) = 0;
  *(_WORD*)(v23 + 276) = 1;
  *(_QWORD*)(v23 + 312) = 0;
  *(_QWORD*)(v23 + 320) = 0;
  *(_QWORD*)(v23 + 360) = 0;
  *(_QWORD*)(v23 + 368) = 0;
  *(_QWORD*)(v23 + 376) = 0;
  *(_QWORD*)(v23 + 384) = 0;
  *(_QWORD*)(v23 + 448) = 0;
  *(_QWORD*)(v23 + 456) = 0;
  *(_QWORD*)(v23 + 400) = 0;
  *(_QWORD*)(v23 + 408) = 0;
  *(_QWORD*)(v23 + 416) = 0;
  *(_QWORD*)(v23 + 424) = 0;
  *(_QWORD*)(v23 + 464) = 0;
  *(_QWORD*)(v23 + 472) = 0;
  *(_QWORD*)(v23 + 480) = 0;
  *(_QWORD*)(v23 + 488) = 0;
  *(_QWORD*)(v23 + 552) = 0;
  *(_QWORD*)(v23 + 560) = 0;
  *(_QWORD*)(v23 + 536) = 0;
  *(_QWORD*)(v23 + 528) = 0;
  *(_QWORD*)(v23 + 328) = 0;
  *(_QWORD*)(v23 + 336) = v23 + 344;
  *(_QWORD*)(v23 + 520) = 0;
  *(_QWORD*)(v23 + 504) = 0;
  *(_QWORD*)(v23 + 512) = 0;
  *(_QWORD*)(v23 + 592) = 0;
  *(_QWORD*)(v23 + 584) = 0;
  *(_QWORD*)(v23 + 576) = 0;
  *(_QWORD*)(v23 + 568) = 0;
  *(_QWORD*)(v23 + 608) = 0;
  *(_QWORD*)(v23 + 616) = 0;
  *(_QWORD*)(v23 + 624) = 0;
  *(_WORD*)(v23 + 640) = 0;
  *(_QWORD*)(v23 + 432) = 0;
  *(_QWORD*)(v23 + 440) = v23 + 448;
  *(_WORD*)(v23 + 664) = 0;
  *(_BYTE*)(v23 + 688) = 0;
  *(_QWORD*)(v23 + 544) = v23 + 552;
  *v25 = v23;
  *(_DWORD*)(v23 + 392) = 1065353216;
  *(_DWORD*)(v23 + 496) = 1065353216;
  *(_DWORD*)(v23 + 600) = 1065353216;
  *(_DWORD*)(v23 + 632) = 1065353216;
  v26 = a2[1];
  *(_QWORD*)(v23 + 696) = *a2;
  *(_QWORD*)(v23 + 704) = v26;
  if (v26 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 16), 1u,
                              memory_order_relaxed);
  }
  v27 = *(_QWORD*)(a5 + 32);
  *(_QWORD*)(v23 + 712) = a3;
  *(_QWORD*)(v23 + 720) = a4;
  *(_BYTE*)(v23 + 728) = 1;
  *(_DWORD*)(v23 + 732) = 0;
  if (v27 != 0) {
    if (v27 == a5) {
      *(_QWORD*)(v23 + 768) = v23 + 736;
      (*(void (**)(__int64))(*(_QWORD*)v27 + 24LL))(v27),
          v137 = COERCE_AS(__typeof__(v137),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    else {
      *(_QWORD*)(v23 +
                 768) = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27),
                 v137 =
                     COERCE_AS(__typeof__(v137),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
  }
  else {
    *(_QWORD*)(v23 + 768) = 0;
  }
  v28 = *(_QWORD*)(a6 + 32);
  if (v28 != 0) {
    if (v28 == a6) {
      *(_QWORD*)(v23 + 816) = v23 + 784;
      (*(void (**)(__int64))(*(_QWORD*)v28 + 24LL))(v28),
          v137 = COERCE_AS(__typeof__(v137),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    else {
      *(_QWORD*)(v23 +
                 816) = (*(__int64 (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28),
                 v137 =
                     COERCE_AS(__typeof__(v137),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
  }
  else {
    *(_QWORD*)(v23 + 816) = 0;
  }
  v29 = *(_QWORD*)(a7 + 32);
  if (v29 != 0) {
    if (v29 == a7) {
      *(_QWORD*)(v23 + 864) = v23 + 832;
      (*(void (**)(__int64))(*(_QWORD*)v29 + 24LL))(v29),
          v137 = COERCE_AS(__typeof__(v137),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    else {
      *(_QWORD*)(v23 +
                 864) = (*(__int64 (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29),
                 v137 =
                     COERCE_AS(__typeof__(v137),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
  }
  else {
    *(_QWORD*)(v23 + 864) = 0;
  }
  v30 = *(_QWORD*)(a10 + 32);
  *(_QWORD*)(v23 + 880) = a8;
  *(_QWORD*)(v23 + 888) = a9;
  *(_DWORD*)(v23 + 900) = 0;
  *(_BYTE*)(v23 + 896) = 1;
  if (v30 != 0) {
    if (v30 == a10) {
      *(_QWORD*)(v23 + 944) = v23 + 912;
      (*(void (**)(__int64))(*(_QWORD*)v30 + 24LL))(v30),
          v137 = COERCE_AS(__typeof__(v137),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v31 = *(_QWORD*)(a11 + 32);
      if (v31 == 0) {
        goto LABEL_30;
      }
    }
    else {
      *(_QWORD*)(v23 +
                 944) = (*(__int64 (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30),
                 v137 =
                     COERCE_AS(__typeof__(v137),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v31 = *(_QWORD*)(a11 + 32);
      if (v31 == 0) {
      LABEL_30:
        *(_QWORD*)(v23 + 992) = 0;
        v32 = *(_QWORD*)(a12 + 32);
        if (v32 != 0) {
          goto LABEL_31;
        }
        goto LABEL_34;
      }
    }
  }
  else {
    *(_QWORD*)(v23 + 944) = 0;
    v31 = *(_QWORD*)(a11 + 32);
    if (v31 == 0) {
      goto LABEL_30;
    }
  }
  if (v31 == a11) {
    *(_QWORD*)(v23 + 992) = v23 + 960;
    (*(void (**)(__int64))(*(_QWORD*)v31 + 24LL))(v31),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v32 = *(_QWORD*)(a12 + 32);
    if (v32 != 0) {
    LABEL_31:
      if (v32 == a12) {
        *(_QWORD*)(v23 + 1040) = v23 + 1008;
        (*(void (**)(__int64))(*(_QWORD*)v32 + 24LL))(v32),
            v137 = COERCE_AS(__typeof__(v137),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      else {
        *(_QWORD*)(v23 + 1040) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32),
                         v137 = COERCE_AS(
                             __typeof__(v137),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      goto LABEL_36;
    }
  }
  else {
    *(_QWORD*)(v23 +
               992) = (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31),
               v137 =
                   COERCE_AS(__typeof__(v137),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v32 = *(_QWORD*)(a12 + 32);
    if (v32 != 0) {
      goto LABEL_31;
    }
  }
LABEL_34:
  *(_QWORD*)(v23 + 1040) = 0;
LABEL_36:
  v33 = fw_memory_HeapManager_Allocate(*v20, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v33 + 16) = 0;
  v34 = GameData_2131678;
  *(_DWORD*)(v33 + 32) = 0;
  *(_QWORD*)(v33 + 40) = 0;
  *(_DWORD*)(v33 + 48) = 0x2000;
  v35 = v34 + 16;
  *(_DWORD*)(v33 + 104) = 0;
  *(_WORD*)(v33 + 108) = 256;
  *(_QWORD*)(v33 + 56) = 0;
  *(_QWORD*)(v33 + 64) = 0;
  *(_QWORD*)(v33 + 72) = 0;
  *(_WORD*)(v33 + 80) = 0;
  *(_DWORD*)(v33 + 112) = -1082130432;
  *(_WORD*)(v33 + 116) = 0;
  *(_WORD*)(v33 + 136) = 0;
  *(_BYTE*)(v33 + 160) = 0;
  *(_BYTE*)(v33 + 288) = 0;
  *(_QWORD*)(v33 + 272) = 0;
  *(_QWORD*)(v33 + 280) = 0;
  *(_QWORD*)(v33 + 256) = 0;
  *(_QWORD*)(v33 + 264) = 0;
  *(_QWORD*)(v33 + 240) = 0;
  *(_QWORD*)(v33 + 248) = 0;
  *(_QWORD*)(v33 + 224) = 0;
  *(_QWORD*)(v33 + 232) = 0;
  *(_QWORD*)(v33 + 208) = 0;
  *(_QWORD*)(v33 + 216) = 0;
  *(_QWORD*)(v33 + 192) = 0;
  *(_QWORD*)(v33 + 200) = 0;
  *(_QWORD*)(v33 + 176) = 0;
  *(_QWORD*)(v33 + 184) = 0;
  *(_QWORD*)(v33 + 168) = 0;
  *(_QWORD*)(v33 + 120) = 0;
  *(_DWORD*)(v33 + 127) = 0;
  *(_DWORD*)(v33 + 292) = 2;
  *(_QWORD*)(v23 + 1064) = v33;
  *(_QWORD*)(v33 + 24) = 0;
  v36 = v33 + 24;
  *(_QWORD*)v33 = v35;
  *(_QWORD*)(v33 + 8) = 0;
  v37 = *v20;
  *(_QWORD*)(v23 + 1056) = v36;
  v38 = fw_memory_HeapManager_Allocate(v37, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v38 + 8) = 0;
  *(_QWORD*)(v38 + 16) = 0;
  *(_QWORD*)v38 = v35;
  v39 = v38;
  *(_DWORD*)(v38 + 32) = 0;
  *(_QWORD*)(v38 + 40) = 0;
  *(_DWORD*)(v38 + 48) = 0x2000;
  *(_DWORD*)(v38 + 104) = 0;
  *(_WORD*)(v38 + 108) = 256;
  *(_QWORD*)(v38 + 56) = 0;
  *(_QWORD*)(v38 + 64) = 0;
  *(_QWORD*)(v38 + 72) = 0;
  *(_WORD*)(v38 + 80) = 0;
  *(_DWORD*)(v38 + 112) = -1082130432;
  *(_WORD*)(v38 + 116) = 0;
  *(_WORD*)(v38 + 136) = 0;
  *(_BYTE*)(v38 + 160) = 0;
  *(_BYTE*)(v38 + 288) = 0;
  *(_QWORD*)(v38 + 272) = 0;
  *(_QWORD*)(v38 + 280) = 0;
  *(_QWORD*)(v38 + 256) = 0;
  *(_QWORD*)(v38 + 264) = 0;
  *(_QWORD*)(v38 + 240) = 0;
  *(_QWORD*)(v38 + 248) = 0;
  *(_QWORD*)(v38 + 224) = 0;
  *(_QWORD*)(v38 + 232) = 0;
  *(_QWORD*)(v38 + 208) = 0;
  *(_QWORD*)(v38 + 216) = 0;
  *(_QWORD*)(v38 + 192) = 0;
  *(_QWORD*)(v38 + 200) = 0;
  *(_QWORD*)(v38 + 176) = 0;
  *(_QWORD*)(v38 + 184) = 0;
  *(_QWORD*)(v38 + 168) = 0;
  *(_QWORD*)(v38 + 120) = 0;
  *(_DWORD*)(v38 + 127) = 0;
  *(_DWORD*)(v38 + 292) = 2;
  *(_QWORD*)(v23 + 1080) = v38;
  v40 = *v20;
  *(_QWORD*)(v39 + 24) = 0;
  *(_QWORD*)(v23 + 1072) = v39 + 24;
  v41 = fw_memory_HeapManager_Allocate(v40, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v41 + 8) = 0;
  *(_QWORD*)(v41 + 16) = 0;
  *(_QWORD*)v41 = v35;
  v42 = v41;
  *(_DWORD*)(v41 + 32) = 0;
  *(_QWORD*)(v41 + 40) = 0;
  *(_DWORD*)(v41 + 48) = 0x2000;
  *(_DWORD*)(v41 + 104) = 0;
  *(_WORD*)(v41 + 108) = 256;
  *(_QWORD*)(v41 + 56) = 0;
  *(_QWORD*)(v41 + 64) = 0;
  *(_QWORD*)(v41 + 72) = 0;
  *(_WORD*)(v41 + 80) = 0;
  *(_DWORD*)(v41 + 112) = -1082130432;
  *(_WORD*)(v41 + 116) = 0;
  *(_WORD*)(v41 + 136) = 0;
  *(_BYTE*)(v41 + 160) = 0;
  *(_BYTE*)(v41 + 288) = 0;
  *(_QWORD*)(v41 + 272) = 0;
  *(_QWORD*)(v41 + 280) = 0;
  *(_QWORD*)(v41 + 256) = 0;
  *(_QWORD*)(v41 + 264) = 0;
  *(_QWORD*)(v41 + 240) = 0;
  *(_QWORD*)(v41 + 248) = 0;
  *(_QWORD*)(v41 + 224) = 0;
  *(_QWORD*)(v41 + 232) = 0;
  *(_QWORD*)(v41 + 208) = 0;
  *(_QWORD*)(v41 + 216) = 0;
  *(_QWORD*)(v41 + 192) = 0;
  *(_QWORD*)(v41 + 200) = 0;
  *(_QWORD*)(v41 + 176) = 0;
  *(_QWORD*)(v41 + 184) = 0;
  *(_QWORD*)(v41 + 168) = 0;
  *(_QWORD*)(v41 + 120) = 0;
  *(_DWORD*)(v41 + 127) = 0;
  *(_DWORD*)(v41 + 292) = 2;
  *(_QWORD*)(v23 + 1096) = v41;
  v43 = *v20;
  *(_QWORD*)(v42 + 24) = 0;
  *(_QWORD*)(v23 + 1088) = v42 + 24;
  v44 = fw_memory_HeapManager_Allocate(v43, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v44 + 8) = 0;
  *(_QWORD*)(v44 + 16) = 0;
  *(_QWORD*)v44 = v35;
  v45 = v44;
  *(_DWORD*)(v44 + 32) = 0;
  *(_QWORD*)(v44 + 40) = 0;
  *(_DWORD*)(v44 + 48) = 0x2000;
  *(_DWORD*)(v44 + 104) = 0;
  *(_WORD*)(v44 + 108) = 256;
  *(_QWORD*)(v44 + 56) = 0;
  *(_QWORD*)(v44 + 64) = 0;
  *(_QWORD*)(v44 + 72) = 0;
  *(_WORD*)(v44 + 80) = 0;
  *(_DWORD*)(v44 + 112) = -1082130432;
  *(_WORD*)(v44 + 116) = 0;
  *(_WORD*)(v44 + 136) = 0;
  *(_BYTE*)(v44 + 160) = 0;
  *(_BYTE*)(v44 + 288) = 0;
  *(_QWORD*)(v44 + 272) = 0;
  *(_QWORD*)(v44 + 280) = 0;
  *(_QWORD*)(v44 + 256) = 0;
  *(_QWORD*)(v44 + 264) = 0;
  *(_QWORD*)(v44 + 240) = 0;
  *(_QWORD*)(v44 + 248) = 0;
  *(_QWORD*)(v44 + 224) = 0;
  *(_QWORD*)(v44 + 232) = 0;
  *(_QWORD*)(v44 + 208) = 0;
  *(_QWORD*)(v44 + 216) = 0;
  *(_QWORD*)(v44 + 192) = 0;
  *(_QWORD*)(v44 + 200) = 0;
  *(_QWORD*)(v44 + 176) = 0;
  *(_QWORD*)(v44 + 184) = 0;
  *(_QWORD*)(v44 + 168) = 0;
  *(_QWORD*)(v44 + 120) = 0;
  *(_DWORD*)(v44 + 127) = 0;
  *(_DWORD*)(v44 + 292) = 2;
  *(_QWORD*)(v23 + 1112) = v44;
  v46 = *v20;
  *(_QWORD*)(v45 + 24) = 0;
  *(_QWORD*)(v23 + 1104) = v45 + 24;
  v47 = fw_memory_HeapManager_Allocate(v46, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v47 + 8) = 0;
  *(_QWORD*)(v47 + 16) = 0;
  *(_QWORD*)v47 = v35;
  v48 = v47;
  *(_DWORD*)(v47 + 32) = 0;
  *(_QWORD*)(v47 + 40) = 0;
  *(_DWORD*)(v47 + 48) = 0x2000;
  *(_DWORD*)(v47 + 104) = 0;
  *(_WORD*)(v47 + 108) = 256;
  *(_QWORD*)(v47 + 56) = 0;
  *(_QWORD*)(v47 + 64) = 0;
  *(_QWORD*)(v47 + 72) = 0;
  *(_WORD*)(v47 + 80) = 0;
  *(_DWORD*)(v47 + 112) = -1082130432;
  *(_WORD*)(v47 + 116) = 0;
  *(_WORD*)(v47 + 136) = 0;
  *(_BYTE*)(v47 + 160) = 0;
  *(_BYTE*)(v47 + 288) = 0;
  *(_QWORD*)(v47 + 272) = 0;
  *(_QWORD*)(v47 + 280) = 0;
  *(_QWORD*)(v47 + 256) = 0;
  *(_QWORD*)(v47 + 264) = 0;
  *(_QWORD*)(v47 + 240) = 0;
  *(_QWORD*)(v47 + 248) = 0;
  *(_QWORD*)(v47 + 224) = 0;
  *(_QWORD*)(v47 + 232) = 0;
  *(_QWORD*)(v47 + 208) = 0;
  *(_QWORD*)(v47 + 216) = 0;
  *(_QWORD*)(v47 + 192) = 0;
  *(_QWORD*)(v47 + 200) = 0;
  *(_QWORD*)(v47 + 176) = 0;
  *(_QWORD*)(v47 + 184) = 0;
  *(_QWORD*)(v47 + 168) = 0;
  *(_QWORD*)(v47 + 120) = 0;
  *(_DWORD*)(v47 + 127) = 0;
  *(_DWORD*)(v47 + 292) = 2;
  *(_QWORD*)(v23 + 1128) = v47;
  v49 = *v20;
  *(_QWORD*)(v48 + 24) = 0;
  *(_QWORD*)(v23 + 1120) = v48 + 24;
  v50 = fw_memory_HeapManager_Allocate(v49, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v50 + 8) = 0;
  *(_QWORD*)(v50 + 16) = 0;
  *(_QWORD*)v50 = v35;
  v51 = v50;
  *(_DWORD*)(v50 + 32) = 0;
  *(_QWORD*)(v50 + 40) = 0;
  *(_DWORD*)(v50 + 48) = 0x2000;
  *(_DWORD*)(v50 + 104) = 0;
  *(_WORD*)(v50 + 108) = 256;
  *(_QWORD*)(v50 + 56) = 0;
  *(_QWORD*)(v50 + 64) = 0;
  *(_QWORD*)(v50 + 72) = 0;
  *(_WORD*)(v50 + 80) = 0;
  *(_DWORD*)(v50 + 112) = -1082130432;
  *(_WORD*)(v50 + 116) = 0;
  *(_WORD*)(v50 + 136) = 0;
  *(_BYTE*)(v50 + 160) = 0;
  *(_BYTE*)(v50 + 288) = 0;
  *(_QWORD*)(v50 + 272) = 0;
  *(_QWORD*)(v50 + 280) = 0;
  *(_QWORD*)(v50 + 256) = 0;
  *(_QWORD*)(v50 + 264) = 0;
  *(_QWORD*)(v50 + 240) = 0;
  *(_QWORD*)(v50 + 248) = 0;
  *(_QWORD*)(v50 + 224) = 0;
  *(_QWORD*)(v50 + 232) = 0;
  *(_QWORD*)(v50 + 208) = 0;
  *(_QWORD*)(v50 + 216) = 0;
  *(_QWORD*)(v50 + 192) = 0;
  *(_QWORD*)(v50 + 200) = 0;
  *(_QWORD*)(v50 + 176) = 0;
  *(_QWORD*)(v50 + 184) = 0;
  *(_QWORD*)(v50 + 168) = 0;
  *(_QWORD*)(v50 + 120) = 0;
  *(_DWORD*)(v50 + 127) = 0;
  *(_DWORD*)(v50 + 292) = 2;
  *(_QWORD*)(v23 + 1144) = v50;
  v52 = *v20;
  *(_QWORD*)(v51 + 24) = 0;
  *(_QWORD*)(v23 + 1136) = v51 + 24;
  v53 = fw_memory_HeapManager_Allocate(v52, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v53 + 8) = 0;
  *(_QWORD*)(v53 + 16) = 0;
  *(_QWORD*)v53 = v35;
  v54 = v53;
  *(_DWORD*)(v53 + 32) = 0;
  *(_QWORD*)(v53 + 40) = 0;
  *(_DWORD*)(v53 + 48) = 0x2000;
  *(_DWORD*)(v53 + 104) = 0;
  *(_WORD*)(v53 + 108) = 256;
  *(_QWORD*)(v53 + 56) = 0;
  *(_QWORD*)(v53 + 64) = 0;
  *(_QWORD*)(v53 + 72) = 0;
  *(_WORD*)(v53 + 80) = 0;
  *(_DWORD*)(v53 + 112) = -1082130432;
  *(_WORD*)(v53 + 116) = 0;
  *(_WORD*)(v53 + 136) = 0;
  *(_BYTE*)(v53 + 160) = 0;
  *(_BYTE*)(v53 + 288) = 0;
  *(_QWORD*)(v53 + 272) = 0;
  *(_QWORD*)(v53 + 280) = 0;
  *(_QWORD*)(v53 + 256) = 0;
  *(_QWORD*)(v53 + 264) = 0;
  *(_QWORD*)(v53 + 240) = 0;
  *(_QWORD*)(v53 + 248) = 0;
  *(_QWORD*)(v53 + 224) = 0;
  *(_QWORD*)(v53 + 232) = 0;
  *(_QWORD*)(v53 + 208) = 0;
  *(_QWORD*)(v53 + 216) = 0;
  *(_QWORD*)(v53 + 192) = 0;
  *(_QWORD*)(v53 + 200) = 0;
  *(_QWORD*)(v53 + 176) = 0;
  *(_QWORD*)(v53 + 184) = 0;
  *(_QWORD*)(v53 + 168) = 0;
  *(_QWORD*)(v53 + 120) = 0;
  *(_DWORD*)(v53 + 127) = 0;
  *(_DWORD*)(v53 + 292) = 2;
  *(_QWORD*)(v23 + 1160) = v53;
  v55 = *v20;
  *(_QWORD*)(v54 + 24) = 0;
  *(_QWORD*)(v23 + 1152) = v54 + 24;
  v56 = fw_memory_HeapManager_Allocate(v55, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v56 + 8) = 0;
  *(_QWORD*)(v56 + 16) = 0;
  *(_QWORD*)v56 = v35;
  v57 = v56;
  *(_DWORD*)(v56 + 32) = 0;
  *(_QWORD*)(v56 + 40) = 0;
  *(_DWORD*)(v56 + 48) = 0x2000;
  *(_DWORD*)(v56 + 104) = 0;
  *(_WORD*)(v56 + 108) = 256;
  *(_QWORD*)(v56 + 56) = 0;
  *(_QWORD*)(v56 + 64) = 0;
  *(_QWORD*)(v56 + 72) = 0;
  *(_WORD*)(v56 + 80) = 0;
  *(_DWORD*)(v56 + 112) = -1082130432;
  *(_WORD*)(v56 + 116) = 0;
  *(_WORD*)(v56 + 136) = 0;
  *(_BYTE*)(v56 + 160) = 0;
  *(_BYTE*)(v56 + 288) = 0;
  *(_QWORD*)(v56 + 272) = 0;
  *(_QWORD*)(v56 + 280) = 0;
  *(_QWORD*)(v56 + 256) = 0;
  *(_QWORD*)(v56 + 264) = 0;
  *(_QWORD*)(v56 + 240) = 0;
  *(_QWORD*)(v56 + 248) = 0;
  *(_QWORD*)(v56 + 224) = 0;
  *(_QWORD*)(v56 + 232) = 0;
  *(_QWORD*)(v56 + 208) = 0;
  *(_QWORD*)(v56 + 216) = 0;
  *(_QWORD*)(v56 + 192) = 0;
  *(_QWORD*)(v56 + 200) = 0;
  *(_QWORD*)(v56 + 176) = 0;
  *(_QWORD*)(v56 + 184) = 0;
  *(_QWORD*)(v56 + 168) = 0;
  *(_QWORD*)(v56 + 120) = 0;
  *(_DWORD*)(v56 + 127) = 0;
  *(_DWORD*)(v56 + 292) = 2;
  *(_QWORD*)(v23 + 1176) = v56;
  v58 = *v20;
  *(_QWORD*)(v57 + 24) = 0;
  *(_QWORD*)(v23 + 1168) = v57 + 24;
  v59 = fw_memory_HeapManager_Allocate(v58, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v59 + 8) = 0;
  *(_QWORD*)(v59 + 16) = 0;
  *(_QWORD*)v59 = v35;
  v60 = v59;
  *(_DWORD*)(v59 + 32) = 0;
  *(_QWORD*)(v59 + 40) = 0;
  *(_DWORD*)(v59 + 48) = 0x2000;
  *(_DWORD*)(v59 + 104) = 0;
  *(_WORD*)(v59 + 108) = 256;
  *(_QWORD*)(v59 + 56) = 0;
  *(_QWORD*)(v59 + 64) = 0;
  *(_QWORD*)(v59 + 72) = 0;
  *(_WORD*)(v59 + 80) = 0;
  *(_DWORD*)(v59 + 112) = -1082130432;
  *(_WORD*)(v59 + 116) = 0;
  *(_WORD*)(v59 + 136) = 0;
  *(_BYTE*)(v59 + 160) = 0;
  *(_BYTE*)(v59 + 288) = 0;
  *(_QWORD*)(v59 + 272) = 0;
  *(_QWORD*)(v59 + 280) = 0;
  *(_QWORD*)(v59 + 256) = 0;
  *(_QWORD*)(v59 + 264) = 0;
  *(_QWORD*)(v59 + 240) = 0;
  *(_QWORD*)(v59 + 248) = 0;
  *(_QWORD*)(v59 + 224) = 0;
  *(_QWORD*)(v59 + 232) = 0;
  *(_QWORD*)(v59 + 208) = 0;
  *(_QWORD*)(v59 + 216) = 0;
  *(_QWORD*)(v59 + 192) = 0;
  *(_QWORD*)(v59 + 200) = 0;
  *(_QWORD*)(v59 + 176) = 0;
  *(_QWORD*)(v59 + 184) = 0;
  *(_QWORD*)(v59 + 168) = 0;
  *(_QWORD*)(v59 + 120) = 0;
  *(_DWORD*)(v59 + 127) = 0;
  *(_DWORD*)(v59 + 292) = 2;
  *(_QWORD*)(v23 + 1192) = v59;
  v61 = *v20;
  *(_QWORD*)(v60 + 24) = 0;
  *(_QWORD*)(v23 + 1184) = v60 + 24;
  v62 = fw_memory_HeapManager_Allocate(v61, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v62 + 8) = 0;
  *(_QWORD*)(v62 + 16) = 0;
  *(_QWORD*)v62 = v35;
  v63 = v62;
  *(_DWORD*)(v62 + 32) = 0;
  *(_QWORD*)(v62 + 40) = 0;
  *(_DWORD*)(v62 + 48) = 0x2000;
  *(_DWORD*)(v62 + 104) = 0;
  *(_WORD*)(v62 + 108) = 256;
  *(_QWORD*)(v62 + 56) = 0;
  *(_QWORD*)(v62 + 64) = 0;
  *(_QWORD*)(v62 + 72) = 0;
  *(_WORD*)(v62 + 80) = 0;
  *(_DWORD*)(v62 + 112) = -1082130432;
  *(_WORD*)(v62 + 116) = 0;
  *(_WORD*)(v62 + 136) = 0;
  *(_BYTE*)(v62 + 160) = 0;
  *(_BYTE*)(v62 + 288) = 0;
  *(_QWORD*)(v62 + 272) = 0;
  *(_QWORD*)(v62 + 280) = 0;
  *(_QWORD*)(v62 + 256) = 0;
  *(_QWORD*)(v62 + 264) = 0;
  *(_QWORD*)(v62 + 240) = 0;
  *(_QWORD*)(v62 + 248) = 0;
  *(_QWORD*)(v62 + 224) = 0;
  *(_QWORD*)(v62 + 232) = 0;
  *(_QWORD*)(v62 + 208) = 0;
  *(_QWORD*)(v62 + 216) = 0;
  *(_QWORD*)(v62 + 192) = 0;
  *(_QWORD*)(v62 + 200) = 0;
  *(_QWORD*)(v62 + 176) = 0;
  *(_QWORD*)(v62 + 184) = 0;
  *(_QWORD*)(v62 + 168) = 0;
  *(_QWORD*)(v62 + 120) = 0;
  *(_DWORD*)(v62 + 127) = 0;
  *(_DWORD*)(v62 + 292) = 2;
  *(_QWORD*)(v23 + 1208) = v62;
  v64 = *v20;
  *(_QWORD*)(v63 + 24) = 0;
  *(_QWORD*)(v23 + 1200) = v63 + 24;
  v65 = fw_memory_HeapManager_Allocate(v64, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v65 + 8) = 0;
  *(_QWORD*)(v65 + 16) = 0;
  *(_QWORD*)v65 = v35;
  v66 = v65;
  *(_DWORD*)(v65 + 32) = 0;
  *(_QWORD*)(v65 + 40) = 0;
  *(_DWORD*)(v65 + 48) = 0x2000;
  *(_DWORD*)(v65 + 104) = 0;
  *(_WORD*)(v65 + 108) = 256;
  *(_QWORD*)(v65 + 56) = 0;
  *(_QWORD*)(v65 + 64) = 0;
  *(_QWORD*)(v65 + 72) = 0;
  *(_WORD*)(v65 + 80) = 0;
  *(_DWORD*)(v65 + 112) = -1082130432;
  *(_WORD*)(v65 + 116) = 0;
  *(_WORD*)(v65 + 136) = 0;
  *(_BYTE*)(v65 + 160) = 0;
  *(_BYTE*)(v65 + 288) = 0;
  *(_QWORD*)(v65 + 272) = 0;
  *(_QWORD*)(v65 + 280) = 0;
  *(_QWORD*)(v65 + 256) = 0;
  *(_QWORD*)(v65 + 264) = 0;
  *(_QWORD*)(v65 + 240) = 0;
  *(_QWORD*)(v65 + 248) = 0;
  *(_QWORD*)(v65 + 224) = 0;
  *(_QWORD*)(v65 + 232) = 0;
  *(_QWORD*)(v65 + 208) = 0;
  *(_QWORD*)(v65 + 216) = 0;
  *(_QWORD*)(v65 + 192) = 0;
  *(_QWORD*)(v65 + 200) = 0;
  *(_QWORD*)(v65 + 176) = 0;
  *(_QWORD*)(v65 + 184) = 0;
  *(_QWORD*)(v65 + 168) = 0;
  *(_QWORD*)(v65 + 120) = 0;
  *(_DWORD*)(v65 + 127) = 0;
  *(_DWORD*)(v65 + 292) = 2;
  *(_QWORD*)(v23 + 1224) = v65;
  v67 = *v20;
  *(_QWORD*)(v66 + 24) = 0;
  *(_QWORD*)(v23 + 1216) = v66 + 24;
  v68 = fw_memory_HeapManager_Allocate(v67, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v68 + 8) = 0;
  *(_QWORD*)(v68 + 16) = 0;
  *(_QWORD*)v68 = v35;
  v69 = v68;
  *(_DWORD*)(v68 + 32) = 0;
  *(_QWORD*)(v68 + 40) = 0;
  *(_DWORD*)(v68 + 48) = 0x2000;
  *(_DWORD*)(v68 + 104) = 0;
  *(_BYTE*)(v68 + 108) = 0;
  *(_QWORD*)(v68 + 56) = 0;
  *(_QWORD*)(v68 + 64) = 0;
  *(_QWORD*)(v68 + 72) = 0;
  *(_WORD*)(v68 + 80) = 0;
  *(_BYTE*)(v68 + 109) = 1;
  *(_DWORD*)(v68 + 112) = -1082130432;
  *(_WORD*)(v68 + 116) = 0;
  *(_WORD*)(v68 + 136) = 0;
  *(_BYTE*)(v68 + 160) = 0;
  *(_BYTE*)(v68 + 288) = 0;
  *(_QWORD*)(v68 + 272) = 0;
  *(_QWORD*)(v68 + 280) = 0;
  *(_QWORD*)(v68 + 256) = 0;
  *(_QWORD*)(v68 + 264) = 0;
  *(_QWORD*)(v68 + 240) = 0;
  *(_QWORD*)(v68 + 248) = 0;
  *(_QWORD*)(v68 + 224) = 0;
  *(_QWORD*)(v68 + 232) = 0;
  *(_QWORD*)(v68 + 208) = 0;
  *(_QWORD*)(v68 + 216) = 0;
  *(_QWORD*)(v68 + 192) = 0;
  *(_QWORD*)(v68 + 200) = 0;
  *(_QWORD*)(v68 + 176) = 0;
  *(_QWORD*)(v68 + 184) = 0;
  *(_QWORD*)(v68 + 168) = 0;
  *(_QWORD*)(v68 + 120) = 0;
  *(_DWORD*)(v68 + 127) = 0;
  *(_DWORD*)(v68 + 292) = 2;
  *(_QWORD*)(v23 + 1240) = v68;
  v70 = *v20;
  *(_QWORD*)(v69 + 24) = 0;
  *(_QWORD*)(v23 + 1232) = v69 + 24;
  v71 = fw_memory_HeapManager_Allocate(v70, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v71 + 8) = 0;
  *(_QWORD*)(v71 + 16) = 0;
  *(_QWORD*)v71 = v35;
  v72 = v71;
  *(_DWORD*)(v71 + 32) = 0;
  *(_QWORD*)(v71 + 40) = 0;
  *(_DWORD*)(v71 + 48) = 0x2000;
  *(_DWORD*)(v71 + 104) = 0;
  *(_BYTE*)(v71 + 108) = 0;
  *(_QWORD*)(v71 + 56) = 0;
  *(_QWORD*)(v71 + 64) = 0;
  *(_QWORD*)(v71 + 72) = 0;
  *(_WORD*)(v71 + 80) = 0;
  *(_BYTE*)(v71 + 109) = 1;
  *(_DWORD*)(v71 + 112) = -1082130432;
  *(_WORD*)(v71 + 116) = 0;
  *(_WORD*)(v71 + 136) = 0;
  *(_BYTE*)(v71 + 160) = 0;
  *(_BYTE*)(v71 + 288) = 0;
  *(_QWORD*)(v71 + 272) = 0;
  *(_QWORD*)(v71 + 280) = 0;
  *(_QWORD*)(v71 + 256) = 0;
  *(_QWORD*)(v71 + 264) = 0;
  *(_QWORD*)(v71 + 240) = 0;
  *(_QWORD*)(v71 + 248) = 0;
  *(_QWORD*)(v71 + 224) = 0;
  *(_QWORD*)(v71 + 232) = 0;
  *(_QWORD*)(v71 + 208) = 0;
  *(_QWORD*)(v71 + 216) = 0;
  *(_QWORD*)(v71 + 192) = 0;
  *(_QWORD*)(v71 + 200) = 0;
  *(_QWORD*)(v71 + 176) = 0;
  *(_QWORD*)(v71 + 184) = 0;
  *(_QWORD*)(v71 + 168) = 0;
  *(_QWORD*)(v71 + 120) = 0;
  *(_DWORD*)(v71 + 127) = 0;
  *(_DWORD*)(v71 + 292) = 2;
  *(_QWORD*)(v23 + 1256) = v71;
  v73 = *v20;
  *(_QWORD*)(v72 + 24) = 0;
  *(_QWORD*)(v23 + 1248) = v72 + 24;
  v74 = fw_memory_HeapManager_Allocate(v73, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v74 + 8) = 0;
  *(_QWORD*)(v74 + 16) = 0;
  *(_QWORD*)v74 = v35;
  v75 = v74;
  *(_DWORD*)(v74 + 32) = 0;
  *(_QWORD*)(v74 + 40) = 0;
  *(_DWORD*)(v74 + 48) = 0x2000;
  *(_DWORD*)(v74 + 104) = 0;
  *(_BYTE*)(v74 + 108) = 0;
  *(_QWORD*)(v74 + 56) = 0;
  *(_QWORD*)(v74 + 64) = 0;
  *(_QWORD*)(v74 + 72) = 0;
  *(_WORD*)(v74 + 80) = 0;
  *(_BYTE*)(v74 + 109) = 1;
  *(_DWORD*)(v74 + 112) = -1082130432;
  *(_WORD*)(v74 + 116) = 0;
  *(_WORD*)(v74 + 136) = 0;
  *(_BYTE*)(v74 + 160) = 0;
  *(_BYTE*)(v74 + 288) = 0;
  *(_QWORD*)(v74 + 272) = 0;
  *(_QWORD*)(v74 + 280) = 0;
  *(_QWORD*)(v74 + 256) = 0;
  *(_QWORD*)(v74 + 264) = 0;
  *(_QWORD*)(v74 + 240) = 0;
  *(_QWORD*)(v74 + 248) = 0;
  *(_QWORD*)(v74 + 224) = 0;
  *(_QWORD*)(v74 + 232) = 0;
  *(_QWORD*)(v74 + 208) = 0;
  *(_QWORD*)(v74 + 216) = 0;
  *(_QWORD*)(v74 + 192) = 0;
  *(_QWORD*)(v74 + 200) = 0;
  *(_QWORD*)(v74 + 176) = 0;
  *(_QWORD*)(v74 + 184) = 0;
  *(_QWORD*)(v74 + 168) = 0;
  *(_QWORD*)(v74 + 120) = 0;
  *(_DWORD*)(v74 + 127) = 0;
  *(_DWORD*)(v74 + 292) = 2;
  *(_QWORD*)(v23 + 1272) = v74;
  v76 = *v20;
  *(_QWORD*)(v75 + 24) = 0;
  *(_QWORD*)(v23 + 1264) = v75 + 24;
  v77 = fw_memory_HeapManager_Allocate(v76, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v77 + 8) = 0;
  *(_QWORD*)(v77 + 16) = 0;
  *(_QWORD*)v77 = v35;
  v78 = v77;
  *(_DWORD*)(v77 + 32) = 0;
  *(_QWORD*)(v77 + 40) = 0;
  *(_DWORD*)(v77 + 48) = 0x2000;
  *(_DWORD*)(v77 + 104) = 0;
  *(_BYTE*)(v77 + 108) = 0;
  *(_QWORD*)(v77 + 56) = 0;
  *(_QWORD*)(v77 + 64) = 0;
  *(_QWORD*)(v77 + 72) = 0;
  *(_WORD*)(v77 + 80) = 0;
  *(_BYTE*)(v77 + 109) = 1;
  *(_DWORD*)(v77 + 112) = -1082130432;
  *(_WORD*)(v77 + 116) = 0;
  *(_WORD*)(v77 + 136) = 0;
  *(_BYTE*)(v77 + 160) = 0;
  *(_BYTE*)(v77 + 288) = 0;
  *(_QWORD*)(v77 + 272) = 0;
  *(_QWORD*)(v77 + 280) = 0;
  *(_QWORD*)(v77 + 256) = 0;
  *(_QWORD*)(v77 + 264) = 0;
  *(_QWORD*)(v77 + 240) = 0;
  *(_QWORD*)(v77 + 248) = 0;
  *(_QWORD*)(v77 + 224) = 0;
  *(_QWORD*)(v77 + 232) = 0;
  *(_QWORD*)(v77 + 208) = 0;
  *(_QWORD*)(v77 + 216) = 0;
  *(_QWORD*)(v77 + 192) = 0;
  *(_QWORD*)(v77 + 200) = 0;
  *(_QWORD*)(v77 + 176) = 0;
  *(_QWORD*)(v77 + 184) = 0;
  *(_QWORD*)(v77 + 168) = 0;
  *(_QWORD*)(v77 + 120) = 0;
  *(_DWORD*)(v77 + 127) = 0;
  *(_DWORD*)(v77 + 292) = 2;
  *(_QWORD*)(v23 + 1288) = v77;
  v79 = *v20;
  *(_QWORD*)(v78 + 24) = 0;
  *(_QWORD*)(v23 + 1280) = v78 + 24;
  v80 = fw_memory_HeapManager_Allocate(v79, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v80 + 8) = 0;
  *(_QWORD*)(v80 + 16) = 0;
  *(_QWORD*)v80 = v35;
  v81 = v80;
  *(_DWORD*)(v80 + 32) = 0;
  *(_QWORD*)(v80 + 40) = 0;
  *(_DWORD*)(v80 + 48) = 0x2000;
  *(_DWORD*)(v80 + 104) = 0;
  *(_BYTE*)(v80 + 108) = 0;
  *(_QWORD*)(v80 + 56) = 0;
  *(_QWORD*)(v80 + 64) = 0;
  *(_QWORD*)(v80 + 72) = 0;
  *(_WORD*)(v80 + 80) = 0;
  *(_BYTE*)(v80 + 109) = 1;
  *(_DWORD*)(v80 + 112) = -1082130432;
  *(_WORD*)(v80 + 116) = 0;
  *(_WORD*)(v80 + 136) = 0;
  *(_BYTE*)(v80 + 160) = 0;
  *(_BYTE*)(v80 + 288) = 0;
  *(_QWORD*)(v80 + 272) = 0;
  *(_QWORD*)(v80 + 280) = 0;
  *(_QWORD*)(v80 + 256) = 0;
  *(_QWORD*)(v80 + 264) = 0;
  *(_QWORD*)(v80 + 240) = 0;
  *(_QWORD*)(v80 + 248) = 0;
  *(_QWORD*)(v80 + 224) = 0;
  *(_QWORD*)(v80 + 232) = 0;
  *(_QWORD*)(v80 + 208) = 0;
  *(_QWORD*)(v80 + 216) = 0;
  *(_QWORD*)(v80 + 192) = 0;
  *(_QWORD*)(v80 + 200) = 0;
  *(_QWORD*)(v80 + 176) = 0;
  *(_QWORD*)(v80 + 184) = 0;
  *(_QWORD*)(v80 + 168) = 0;
  *(_QWORD*)(v80 + 120) = 0;
  *(_DWORD*)(v80 + 127) = 0;
  *(_DWORD*)(v80 + 292) = 2;
  *(_QWORD*)(v23 + 1304) = v80;
  v82 = *v20;
  *(_QWORD*)(v81 + 24) = 0;
  *(_QWORD*)(v23 + 1296) = v81 + 24;
  v83 = fw_memory_HeapManager_Allocate(v82, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v83 + 8) = 0;
  *(_QWORD*)(v83 + 16) = 0;
  *(_QWORD*)v83 = v35;
  v84 = v83;
  *(_DWORD*)(v83 + 32) = 0;
  *(_QWORD*)(v83 + 40) = 0;
  *(_DWORD*)(v83 + 48) = 0x2000;
  *(_DWORD*)(v83 + 104) = 0;
  *(_BYTE*)(v83 + 108) = 0;
  *(_QWORD*)(v83 + 56) = 0;
  *(_QWORD*)(v83 + 64) = 0;
  *(_QWORD*)(v83 + 72) = 0;
  *(_WORD*)(v83 + 80) = 0;
  *(_BYTE*)(v83 + 109) = 1;
  *(_DWORD*)(v83 + 112) = -1082130432;
  *(_WORD*)(v83 + 116) = 0;
  *(_WORD*)(v83 + 136) = 0;
  *(_BYTE*)(v83 + 160) = 0;
  *(_BYTE*)(v83 + 288) = 0;
  *(_QWORD*)(v83 + 272) = 0;
  *(_QWORD*)(v83 + 280) = 0;
  *(_QWORD*)(v83 + 256) = 0;
  *(_QWORD*)(v83 + 264) = 0;
  *(_QWORD*)(v83 + 240) = 0;
  *(_QWORD*)(v83 + 248) = 0;
  *(_QWORD*)(v83 + 224) = 0;
  *(_QWORD*)(v83 + 232) = 0;
  *(_QWORD*)(v83 + 208) = 0;
  *(_QWORD*)(v83 + 216) = 0;
  *(_QWORD*)(v83 + 192) = 0;
  *(_QWORD*)(v83 + 200) = 0;
  *(_QWORD*)(v83 + 176) = 0;
  *(_QWORD*)(v83 + 184) = 0;
  *(_QWORD*)(v83 + 168) = 0;
  *(_QWORD*)(v83 + 120) = 0;
  *(_DWORD*)(v83 + 127) = 0;
  *(_DWORD*)(v83 + 292) = 2;
  *(_QWORD*)(v23 + 1320) = v83;
  v85 = *v20;
  *(_QWORD*)(v84 + 24) = 0;
  *(_QWORD*)(v23 + 1312) = v84 + 24;
  v86 = fw_memory_HeapManager_Allocate(v85, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v86 + 8) = 0;
  *(_QWORD*)(v86 + 16) = 0;
  *(_QWORD*)v86 = v35;
  v87 = v86;
  *(_DWORD*)(v86 + 32) = 0;
  *(_QWORD*)(v86 + 40) = 0;
  *(_DWORD*)(v86 + 48) = 0x2000;
  *(_DWORD*)(v86 + 104) = 0;
  *(_BYTE*)(v86 + 108) = 0;
  *(_QWORD*)(v86 + 56) = 0;
  *(_QWORD*)(v86 + 64) = 0;
  *(_QWORD*)(v86 + 72) = 0;
  *(_WORD*)(v86 + 80) = 0;
  *(_BYTE*)(v86 + 109) = 1;
  *(_DWORD*)(v86 + 112) = -1082130432;
  *(_WORD*)(v86 + 116) = 0;
  *(_WORD*)(v86 + 136) = 0;
  *(_BYTE*)(v86 + 160) = 0;
  *(_BYTE*)(v86 + 288) = 0;
  *(_QWORD*)(v86 + 272) = 0;
  *(_QWORD*)(v86 + 280) = 0;
  *(_QWORD*)(v86 + 256) = 0;
  *(_QWORD*)(v86 + 264) = 0;
  *(_QWORD*)(v86 + 240) = 0;
  *(_QWORD*)(v86 + 248) = 0;
  *(_QWORD*)(v86 + 224) = 0;
  *(_QWORD*)(v86 + 232) = 0;
  *(_QWORD*)(v86 + 208) = 0;
  *(_QWORD*)(v86 + 216) = 0;
  *(_QWORD*)(v86 + 192) = 0;
  *(_QWORD*)(v86 + 200) = 0;
  *(_QWORD*)(v86 + 176) = 0;
  *(_QWORD*)(v86 + 184) = 0;
  *(_QWORD*)(v86 + 168) = 0;
  *(_QWORD*)(v86 + 120) = 0;
  *(_DWORD*)(v86 + 127) = 0;
  *(_DWORD*)(v86 + 292) = 2;
  *(_QWORD*)(v23 + 1336) = v86;
  v88 = *v20;
  *(_QWORD*)(v87 + 24) = 0;
  *(_QWORD*)(v23 + 1328) = v87 + 24;
  v89 = fw_memory_HeapManager_Allocate(v88, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v89 + 8) = 0;
  *(_QWORD*)(v89 + 16) = 0;
  *(_QWORD*)v89 = v35;
  v90 = v89;
  *(_DWORD*)(v89 + 32) = 0;
  *(_QWORD*)(v89 + 40) = 0;
  *(_DWORD*)(v89 + 48) = 0x2000;
  *(_DWORD*)(v89 + 104) = 0;
  *(_BYTE*)(v89 + 108) = 0;
  *(_QWORD*)(v89 + 56) = 0;
  *(_QWORD*)(v89 + 64) = 0;
  *(_QWORD*)(v89 + 72) = 0;
  *(_WORD*)(v89 + 80) = 0;
  *(_BYTE*)(v89 + 109) = 1;
  *(_DWORD*)(v89 + 112) = -1082130432;
  *(_WORD*)(v89 + 116) = 0;
  *(_WORD*)(v89 + 136) = 0;
  *(_BYTE*)(v89 + 160) = 0;
  *(_BYTE*)(v89 + 288) = 0;
  *(_QWORD*)(v89 + 272) = 0;
  *(_QWORD*)(v89 + 280) = 0;
  *(_QWORD*)(v89 + 256) = 0;
  *(_QWORD*)(v89 + 264) = 0;
  *(_QWORD*)(v89 + 240) = 0;
  *(_QWORD*)(v89 + 248) = 0;
  *(_QWORD*)(v89 + 224) = 0;
  *(_QWORD*)(v89 + 232) = 0;
  *(_QWORD*)(v89 + 208) = 0;
  *(_QWORD*)(v89 + 216) = 0;
  *(_QWORD*)(v89 + 192) = 0;
  *(_QWORD*)(v89 + 200) = 0;
  *(_QWORD*)(v89 + 176) = 0;
  *(_QWORD*)(v89 + 184) = 0;
  *(_QWORD*)(v89 + 168) = 0;
  *(_QWORD*)(v89 + 120) = 0;
  *(_DWORD*)(v89 + 127) = 0;
  *(_DWORD*)(v89 + 292) = 2;
  *(_QWORD*)(v23 + 1352) = v89;
  v91 = *v20;
  *(_QWORD*)(v90 + 24) = 0;
  *(_QWORD*)(v23 + 1344) = v90 + 24;
  v92 = fw_memory_HeapManager_Allocate(v91, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v92 + 8) = 0;
  *(_QWORD*)(v92 + 16) = 0;
  *(_QWORD*)v92 = v35;
  v93 = v92;
  *(_DWORD*)(v92 + 32) = 0;
  *(_QWORD*)(v92 + 40) = 0;
  *(_DWORD*)(v92 + 48) = 0x2000;
  *(_DWORD*)(v92 + 104) = 0;
  *(_BYTE*)(v92 + 108) = 0;
  *(_QWORD*)(v92 + 56) = 0;
  *(_QWORD*)(v92 + 64) = 0;
  *(_QWORD*)(v92 + 72) = 0;
  *(_WORD*)(v92 + 80) = 0;
  *(_BYTE*)(v92 + 109) = 1;
  *(_DWORD*)(v92 + 112) = -1082130432;
  *(_WORD*)(v92 + 116) = 0;
  *(_WORD*)(v92 + 136) = 0;
  *(_BYTE*)(v92 + 160) = 0;
  *(_BYTE*)(v92 + 288) = 0;
  *(_QWORD*)(v92 + 272) = 0;
  *(_QWORD*)(v92 + 280) = 0;
  *(_QWORD*)(v92 + 256) = 0;
  *(_QWORD*)(v92 + 264) = 0;
  *(_QWORD*)(v92 + 240) = 0;
  *(_QWORD*)(v92 + 248) = 0;
  *(_QWORD*)(v92 + 224) = 0;
  *(_QWORD*)(v92 + 232) = 0;
  *(_QWORD*)(v92 + 208) = 0;
  *(_QWORD*)(v92 + 216) = 0;
  *(_QWORD*)(v92 + 192) = 0;
  *(_QWORD*)(v92 + 200) = 0;
  *(_QWORD*)(v92 + 176) = 0;
  *(_QWORD*)(v92 + 184) = 0;
  *(_QWORD*)(v92 + 168) = 0;
  *(_QWORD*)(v92 + 120) = 0;
  *(_DWORD*)(v92 + 127) = 0;
  *(_DWORD*)(v92 + 292) = 2;
  *(_QWORD*)(v23 + 1368) = v92;
  v94 = *v20;
  *(_QWORD*)(v93 + 24) = 0;
  *(_QWORD*)(v23 + 1360) = v93 + 24;
  v95 = fw_memory_HeapManager_Allocate(v94, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v95 + 8) = 0;
  *(_QWORD*)(v95 + 16) = 0;
  *(_QWORD*)v95 = v35;
  v96 = v95;
  *(_DWORD*)(v95 + 32) = 0;
  *(_QWORD*)(v95 + 40) = 0;
  *(_DWORD*)(v95 + 48) = 0x2000;
  *(_DWORD*)(v95 + 104) = 0;
  *(_BYTE*)(v95 + 108) = 0;
  *(_QWORD*)(v95 + 56) = 0;
  *(_QWORD*)(v95 + 64) = 0;
  *(_QWORD*)(v95 + 72) = 0;
  *(_WORD*)(v95 + 80) = 0;
  *(_BYTE*)(v95 + 109) = 1;
  *(_DWORD*)(v95 + 112) = -1082130432;
  *(_WORD*)(v95 + 116) = 0;
  *(_WORD*)(v95 + 136) = 0;
  *(_BYTE*)(v95 + 160) = 0;
  *(_BYTE*)(v95 + 288) = 0;
  *(_QWORD*)(v95 + 272) = 0;
  *(_QWORD*)(v95 + 280) = 0;
  *(_QWORD*)(v95 + 256) = 0;
  *(_QWORD*)(v95 + 264) = 0;
  *(_QWORD*)(v95 + 240) = 0;
  *(_QWORD*)(v95 + 248) = 0;
  *(_QWORD*)(v95 + 224) = 0;
  *(_QWORD*)(v95 + 232) = 0;
  *(_QWORD*)(v95 + 208) = 0;
  *(_QWORD*)(v95 + 216) = 0;
  *(_QWORD*)(v95 + 192) = 0;
  *(_QWORD*)(v95 + 200) = 0;
  *(_QWORD*)(v95 + 176) = 0;
  *(_QWORD*)(v95 + 184) = 0;
  *(_QWORD*)(v95 + 168) = 0;
  *(_QWORD*)(v95 + 120) = 0;
  *(_DWORD*)(v95 + 127) = 0;
  *(_DWORD*)(v95 + 292) = 2;
  *(_QWORD*)(v23 + 1384) = v95;
  v97 = *v20;
  *(_QWORD*)(v96 + 24) = 0;
  *(_QWORD*)(v23 + 1376) = v96 + 24;
  v98 = fw_memory_HeapManager_Allocate(v97, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v98 + 8) = 0;
  *(_QWORD*)(v98 + 16) = 0;
  *(_QWORD*)v98 = v35;
  v99 = v98;
  *(_DWORD*)(v98 + 32) = 0;
  *(_QWORD*)(v98 + 40) = 0;
  *(_DWORD*)(v98 + 48) = 0x2000;
  *(_DWORD*)(v98 + 104) = 0;
  *(_BYTE*)(v98 + 108) = 0;
  *(_QWORD*)(v98 + 56) = 0;
  *(_QWORD*)(v98 + 64) = 0;
  *(_QWORD*)(v98 + 72) = 0;
  *(_WORD*)(v98 + 80) = 0;
  *(_BYTE*)(v98 + 109) = 1;
  *(_DWORD*)(v98 + 112) = -1082130432;
  *(_WORD*)(v98 + 116) = 0;
  *(_WORD*)(v98 + 136) = 0;
  *(_BYTE*)(v98 + 160) = 0;
  *(_BYTE*)(v98 + 288) = 0;
  *(_QWORD*)(v98 + 272) = 0;
  *(_QWORD*)(v98 + 280) = 0;
  *(_QWORD*)(v98 + 256) = 0;
  *(_QWORD*)(v98 + 264) = 0;
  *(_QWORD*)(v98 + 240) = 0;
  *(_QWORD*)(v98 + 248) = 0;
  *(_QWORD*)(v98 + 224) = 0;
  *(_QWORD*)(v98 + 232) = 0;
  *(_QWORD*)(v98 + 208) = 0;
  *(_QWORD*)(v98 + 216) = 0;
  *(_QWORD*)(v98 + 192) = 0;
  *(_QWORD*)(v98 + 200) = 0;
  *(_QWORD*)(v98 + 176) = 0;
  *(_QWORD*)(v98 + 184) = 0;
  *(_QWORD*)(v98 + 168) = 0;
  *(_QWORD*)(v98 + 120) = 0;
  *(_DWORD*)(v98 + 127) = 0;
  *(_DWORD*)(v98 + 292) = 2;
  *(_QWORD*)(v23 + 1400) = v98;
  v100 = *v20;
  *(_QWORD*)(v99 + 24) = 0;
  *(_QWORD*)(v23 + 1392) = v99 + 24;
  v101 = fw_memory_HeapManager_Allocate(v100, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v101 + 8) = 0;
  *(_QWORD*)(v101 + 16) = 0;
  *(_QWORD*)v101 = v35;
  v102 = v101;
  *(_DWORD*)(v101 + 32) = 0;
  *(_QWORD*)(v101 + 40) = 0;
  *(_DWORD*)(v101 + 48) = 0x2000;
  *(_DWORD*)(v101 + 104) = 0;
  *(_BYTE*)(v101 + 108) = 0;
  *(_QWORD*)(v101 + 56) = 0;
  *(_QWORD*)(v101 + 64) = 0;
  *(_QWORD*)(v101 + 72) = 0;
  *(_WORD*)(v101 + 80) = 0;
  *(_BYTE*)(v101 + 109) = 1;
  *(_DWORD*)(v101 + 112) = -1082130432;
  *(_WORD*)(v101 + 116) = 0;
  *(_WORD*)(v101 + 136) = 0;
  *(_BYTE*)(v101 + 160) = 0;
  *(_BYTE*)(v101 + 288) = 0;
  *(_QWORD*)(v101 + 272) = 0;
  *(_QWORD*)(v101 + 280) = 0;
  *(_QWORD*)(v101 + 256) = 0;
  *(_QWORD*)(v101 + 264) = 0;
  *(_QWORD*)(v101 + 240) = 0;
  *(_QWORD*)(v101 + 248) = 0;
  *(_QWORD*)(v101 + 224) = 0;
  *(_QWORD*)(v101 + 232) = 0;
  *(_QWORD*)(v101 + 208) = 0;
  *(_QWORD*)(v101 + 216) = 0;
  *(_QWORD*)(v101 + 192) = 0;
  *(_QWORD*)(v101 + 200) = 0;
  *(_QWORD*)(v101 + 176) = 0;
  *(_QWORD*)(v101 + 184) = 0;
  *(_QWORD*)(v101 + 168) = 0;
  *(_QWORD*)(v101 + 120) = 0;
  *(_DWORD*)(v101 + 127) = 0;
  *(_DWORD*)(v101 + 292) = 2;
  *(_QWORD*)(v23 + 1416) = v101;
  v103 = *v20;
  *(_QWORD*)(v102 + 24) = 0;
  *(_QWORD*)(v23 + 1408) = v102 + 24;
  v104 = fw_memory_HeapManager_Allocate(v103, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v104 + 8) = 0;
  *(_QWORD*)(v104 + 16) = 0;
  *(_QWORD*)v104 = v35;
  v105 = v104;
  *(_DWORD*)(v104 + 32) = 0;
  *(_QWORD*)(v104 + 40) = 0;
  *(_DWORD*)(v104 + 48) = 0x2000;
  *(_DWORD*)(v104 + 104) = 0;
  *(_BYTE*)(v104 + 108) = 0;
  *(_QWORD*)(v104 + 56) = 0;
  *(_QWORD*)(v104 + 64) = 0;
  *(_QWORD*)(v104 + 72) = 0;
  *(_WORD*)(v104 + 80) = 0;
  *(_BYTE*)(v104 + 109) = 1;
  *(_DWORD*)(v104 + 112) = -1082130432;
  *(_WORD*)(v104 + 116) = 0;
  *(_WORD*)(v104 + 136) = 0;
  *(_BYTE*)(v104 + 160) = 0;
  *(_BYTE*)(v104 + 288) = 0;
  *(_QWORD*)(v104 + 272) = 0;
  *(_QWORD*)(v104 + 280) = 0;
  *(_QWORD*)(v104 + 256) = 0;
  *(_QWORD*)(v104 + 264) = 0;
  *(_QWORD*)(v104 + 240) = 0;
  *(_QWORD*)(v104 + 248) = 0;
  *(_QWORD*)(v104 + 224) = 0;
  *(_QWORD*)(v104 + 232) = 0;
  *(_QWORD*)(v104 + 208) = 0;
  *(_QWORD*)(v104 + 216) = 0;
  *(_QWORD*)(v104 + 192) = 0;
  *(_QWORD*)(v104 + 200) = 0;
  *(_QWORD*)(v104 + 176) = 0;
  *(_QWORD*)(v104 + 184) = 0;
  *(_QWORD*)(v104 + 168) = 0;
  *(_QWORD*)(v104 + 120) = 0;
  *(_DWORD*)(v104 + 127) = 0;
  *(_DWORD*)(v104 + 292) = 2;
  *(_QWORD*)(v23 + 1432) = v104;
  v106 = *v20;
  *(_QWORD*)(v105 + 24) = 0;
  *(_QWORD*)(v23 + 1424) = v105 + 24;
  v107 = fw_memory_HeapManager_Allocate(v106, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v107 + 8) = 0;
  *(_QWORD*)(v107 + 16) = 0;
  *(_QWORD*)v107 = v35;
  v108 = v107;
  *(_DWORD*)(v107 + 32) = 0;
  *(_QWORD*)(v107 + 40) = 0;
  *(_DWORD*)(v107 + 48) = 0x2000;
  *(_DWORD*)(v107 + 104) = 0;
  *(_BYTE*)(v107 + 108) = 0;
  *(_QWORD*)(v107 + 56) = 0;
  *(_QWORD*)(v107 + 64) = 0;
  *(_QWORD*)(v107 + 72) = 0;
  *(_WORD*)(v107 + 80) = 0;
  *(_BYTE*)(v107 + 109) = 1;
  *(_DWORD*)(v107 + 112) = -1082130432;
  *(_WORD*)(v107 + 116) = 0;
  *(_WORD*)(v107 + 136) = 0;
  *(_BYTE*)(v107 + 160) = 0;
  *(_BYTE*)(v107 + 288) = 0;
  *(_QWORD*)(v107 + 272) = 0;
  *(_QWORD*)(v107 + 280) = 0;
  *(_QWORD*)(v107 + 256) = 0;
  *(_QWORD*)(v107 + 264) = 0;
  *(_QWORD*)(v107 + 240) = 0;
  *(_QWORD*)(v107 + 248) = 0;
  *(_QWORD*)(v107 + 224) = 0;
  *(_QWORD*)(v107 + 232) = 0;
  *(_QWORD*)(v107 + 208) = 0;
  *(_QWORD*)(v107 + 216) = 0;
  *(_QWORD*)(v107 + 192) = 0;
  *(_QWORD*)(v107 + 200) = 0;
  *(_QWORD*)(v107 + 176) = 0;
  *(_QWORD*)(v107 + 184) = 0;
  *(_QWORD*)(v107 + 168) = 0;
  *(_QWORD*)(v107 + 120) = 0;
  *(_DWORD*)(v107 + 127) = 0;
  *(_DWORD*)(v107 + 292) = 2;
  *(_QWORD*)(v23 + 1448) = v107;
  v109 = *v20;
  *(_QWORD*)(v108 + 24) = 0;
  *(_QWORD*)(v23 + 1440) = v108 + 24;
  v110 = fw_memory_HeapManager_Allocate(v109, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v110 + 8) = 0;
  *(_QWORD*)(v110 + 16) = 0;
  *(_QWORD*)v110 = v35;
  v111 = v110;
  *(_DWORD*)(v110 + 32) = 0;
  *(_QWORD*)(v110 + 40) = 0;
  *(_DWORD*)(v110 + 48) = 0x2000;
  *(_DWORD*)(v110 + 104) = 0;
  *(_BYTE*)(v110 + 108) = 0;
  *(_QWORD*)(v110 + 56) = 0;
  *(_QWORD*)(v110 + 64) = 0;
  *(_QWORD*)(v110 + 72) = 0;
  *(_WORD*)(v110 + 80) = 0;
  *(_BYTE*)(v110 + 109) = 1;
  *(_DWORD*)(v110 + 112) = -1082130432;
  *(_WORD*)(v110 + 116) = 0;
  *(_WORD*)(v110 + 136) = 0;
  *(_BYTE*)(v110 + 160) = 0;
  *(_BYTE*)(v110 + 288) = 0;
  *(_QWORD*)(v110 + 272) = 0;
  *(_QWORD*)(v110 + 280) = 0;
  *(_QWORD*)(v110 + 256) = 0;
  *(_QWORD*)(v110 + 264) = 0;
  *(_QWORD*)(v110 + 240) = 0;
  *(_QWORD*)(v110 + 248) = 0;
  *(_QWORD*)(v110 + 224) = 0;
  *(_QWORD*)(v110 + 232) = 0;
  *(_QWORD*)(v110 + 208) = 0;
  *(_QWORD*)(v110 + 216) = 0;
  *(_QWORD*)(v110 + 192) = 0;
  *(_QWORD*)(v110 + 200) = 0;
  *(_QWORD*)(v110 + 176) = 0;
  *(_QWORD*)(v110 + 184) = 0;
  *(_QWORD*)(v110 + 168) = 0;
  *(_QWORD*)(v110 + 120) = 0;
  *(_DWORD*)(v110 + 127) = 0;
  *(_DWORD*)(v110 + 292) = 2;
  *(_QWORD*)(v23 + 1464) = v110;
  v112 = *v20;
  *(_QWORD*)(v111 + 24) = 0;
  *(_QWORD*)(v23 + 1456) = v111 + 24;
  v113 = fw_memory_HeapManager_Allocate(v112, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v113 + 8) = 0;
  *(_QWORD*)(v113 + 16) = 0;
  *(_QWORD*)v113 = v35;
  v114 = v113;
  *(_DWORD*)(v113 + 32) = 0;
  *(_QWORD*)(v113 + 40) = 0;
  *(_DWORD*)(v113 + 48) = 0x2000;
  *(_DWORD*)(v113 + 104) = 0;
  *(_BYTE*)(v113 + 108) = 0;
  *(_QWORD*)(v113 + 56) = 0;
  *(_QWORD*)(v113 + 64) = 0;
  *(_QWORD*)(v113 + 72) = 0;
  *(_WORD*)(v113 + 80) = 0;
  *(_BYTE*)(v113 + 109) = 1;
  *(_DWORD*)(v113 + 112) = -1082130432;
  *(_WORD*)(v113 + 116) = 0;
  *(_WORD*)(v113 + 136) = 0;
  *(_BYTE*)(v113 + 160) = 0;
  *(_BYTE*)(v113 + 288) = 0;
  *(_QWORD*)(v113 + 272) = 0;
  *(_QWORD*)(v113 + 280) = 0;
  *(_QWORD*)(v113 + 256) = 0;
  *(_QWORD*)(v113 + 264) = 0;
  *(_QWORD*)(v113 + 240) = 0;
  *(_QWORD*)(v113 + 248) = 0;
  *(_QWORD*)(v113 + 224) = 0;
  *(_QWORD*)(v113 + 232) = 0;
  *(_QWORD*)(v113 + 208) = 0;
  *(_QWORD*)(v113 + 216) = 0;
  *(_QWORD*)(v113 + 192) = 0;
  *(_QWORD*)(v113 + 200) = 0;
  *(_QWORD*)(v113 + 176) = 0;
  *(_QWORD*)(v113 + 184) = 0;
  *(_QWORD*)(v113 + 168) = 0;
  *(_QWORD*)(v113 + 120) = 0;
  *(_DWORD*)(v113 + 127) = 0;
  *(_DWORD*)(v113 + 292) = 2;
  *(_QWORD*)(v23 + 1480) = v113;
  v115 = *v20;
  *(_QWORD*)(v114 + 24) = 0;
  *(_QWORD*)(v23 + 1472) = v114 + 24;
  v116 = fw_memory_HeapManager_Allocate(v115, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v116 + 8) = 0;
  *(_QWORD*)(v116 + 16) = 0;
  *(_QWORD*)v116 = v35;
  v117 = v116;
  *(_DWORD*)(v116 + 32) = 0;
  *(_QWORD*)(v116 + 40) = 0;
  *(_DWORD*)(v116 + 48) = 0x2000;
  *(_DWORD*)(v116 + 104) = 0;
  *(_BYTE*)(v116 + 108) = 0;
  *(_QWORD*)(v116 + 56) = 0;
  *(_QWORD*)(v116 + 64) = 0;
  *(_QWORD*)(v116 + 72) = 0;
  *(_WORD*)(v116 + 80) = 0;
  *(_BYTE*)(v116 + 109) = 1;
  *(_DWORD*)(v116 + 112) = -1082130432;
  *(_WORD*)(v116 + 116) = 0;
  *(_WORD*)(v116 + 136) = 0;
  *(_BYTE*)(v116 + 160) = 0;
  *(_BYTE*)(v116 + 288) = 0;
  *(_QWORD*)(v116 + 272) = 0;
  *(_QWORD*)(v116 + 280) = 0;
  *(_QWORD*)(v116 + 256) = 0;
  *(_QWORD*)(v116 + 264) = 0;
  *(_QWORD*)(v116 + 240) = 0;
  *(_QWORD*)(v116 + 248) = 0;
  *(_QWORD*)(v116 + 224) = 0;
  *(_QWORD*)(v116 + 232) = 0;
  *(_QWORD*)(v116 + 208) = 0;
  *(_QWORD*)(v116 + 216) = 0;
  *(_QWORD*)(v116 + 192) = 0;
  *(_QWORD*)(v116 + 200) = 0;
  *(_QWORD*)(v116 + 176) = 0;
  *(_QWORD*)(v116 + 184) = 0;
  *(_QWORD*)(v116 + 168) = 0;
  *(_QWORD*)(v116 + 120) = 0;
  *(_DWORD*)(v116 + 127) = 0;
  *(_DWORD*)(v116 + 292) = 2;
  *(_QWORD*)(v23 + 1496) = v116;
  v118 = *v20;
  *(_QWORD*)(v117 + 24) = 0;
  *(_QWORD*)(v23 + 1488) = v117 + 24;
  v119 = fw_memory_HeapManager_Allocate(v118, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v119 + 8) = 0;
  *(_QWORD*)(v119 + 16) = 0;
  *(_QWORD*)v119 = v35;
  v120 = v119;
  *(_DWORD*)(v119 + 32) = 0;
  *(_QWORD*)(v119 + 40) = 0;
  *(_DWORD*)(v119 + 48) = 0x2000;
  *(_DWORD*)(v119 + 104) = 0;
  *(_BYTE*)(v119 + 108) = 0;
  *(_QWORD*)(v119 + 56) = 0;
  *(_QWORD*)(v119 + 64) = 0;
  *(_QWORD*)(v119 + 72) = 0;
  *(_WORD*)(v119 + 80) = 0;
  *(_BYTE*)(v119 + 109) = 1;
  *(_DWORD*)(v119 + 112) = -1082130432;
  *(_WORD*)(v119 + 116) = 0;
  *(_WORD*)(v119 + 136) = 0;
  *(_BYTE*)(v119 + 160) = 0;
  *(_BYTE*)(v119 + 288) = 0;
  *(_QWORD*)(v119 + 272) = 0;
  *(_QWORD*)(v119 + 280) = 0;
  *(_QWORD*)(v119 + 256) = 0;
  *(_QWORD*)(v119 + 264) = 0;
  *(_QWORD*)(v119 + 240) = 0;
  *(_QWORD*)(v119 + 248) = 0;
  *(_QWORD*)(v119 + 224) = 0;
  *(_QWORD*)(v119 + 232) = 0;
  *(_QWORD*)(v119 + 208) = 0;
  *(_QWORD*)(v119 + 216) = 0;
  *(_QWORD*)(v119 + 192) = 0;
  *(_QWORD*)(v119 + 200) = 0;
  *(_QWORD*)(v119 + 176) = 0;
  *(_QWORD*)(v119 + 184) = 0;
  *(_QWORD*)(v119 + 168) = 0;
  *(_QWORD*)(v119 + 120) = 0;
  *(_DWORD*)(v119 + 127) = 0;
  *(_DWORD*)(v119 + 292) = 2;
  *(_QWORD*)(v23 + 1512) = v119;
  v121 = *v20;
  *(_QWORD*)(v120 + 24) = 0;
  *(_QWORD*)(v23 + 1504) = v120 + 24;
  v122 = fw_memory_HeapManager_Allocate(v121, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v122 + 8) = 0;
  *(_QWORD*)(v122 + 16) = 0;
  *(_QWORD*)v122 = v35;
  v123 = v122;
  *(_DWORD*)(v122 + 32) = 0;
  *(_QWORD*)(v122 + 40) = 0;
  *(_DWORD*)(v122 + 48) = 0x2000;
  *(_DWORD*)(v122 + 104) = 0;
  *(_BYTE*)(v122 + 108) = 0;
  *(_QWORD*)(v122 + 56) = 0;
  *(_QWORD*)(v122 + 64) = 0;
  *(_QWORD*)(v122 + 72) = 0;
  *(_WORD*)(v122 + 80) = 0;
  *(_BYTE*)(v122 + 109) = 1;
  *(_DWORD*)(v122 + 112) = -1082130432;
  *(_WORD*)(v122 + 116) = 0;
  *(_WORD*)(v122 + 136) = 0;
  *(_BYTE*)(v122 + 160) = 0;
  *(_BYTE*)(v122 + 288) = 0;
  *(_QWORD*)(v122 + 272) = 0;
  *(_QWORD*)(v122 + 280) = 0;
  *(_QWORD*)(v122 + 256) = 0;
  *(_QWORD*)(v122 + 264) = 0;
  *(_QWORD*)(v122 + 240) = 0;
  *(_QWORD*)(v122 + 248) = 0;
  *(_QWORD*)(v122 + 224) = 0;
  *(_QWORD*)(v122 + 232) = 0;
  *(_QWORD*)(v122 + 208) = 0;
  *(_QWORD*)(v122 + 216) = 0;
  *(_QWORD*)(v122 + 192) = 0;
  *(_QWORD*)(v122 + 200) = 0;
  *(_QWORD*)(v122 + 176) = 0;
  *(_QWORD*)(v122 + 184) = 0;
  *(_QWORD*)(v122 + 168) = 0;
  *(_QWORD*)(v122 + 120) = 0;
  *(_DWORD*)(v122 + 127) = 0;
  *(_DWORD*)(v122 + 292) = 2;
  *(_QWORD*)(v23 + 1528) = v122;
  v124 = *v20;
  *(_QWORD*)(v123 + 24) = 0;
  *(_QWORD*)(v23 + 1520) = v123 + 24;
  v125 = fw_memory_HeapManager_Allocate(v124, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v125 + 8) = 0;
  *(_QWORD*)(v125 + 16) = 0;
  *(_QWORD*)v125 = v35;
  v126 = v125;
  *(_DWORD*)(v125 + 32) = 0;
  *(_QWORD*)(v125 + 40) = 0;
  *(_DWORD*)(v125 + 48) = 0x2000;
  *(_DWORD*)(v125 + 104) = 0;
  *(_BYTE*)(v125 + 108) = 0;
  *(_QWORD*)(v125 + 56) = 0;
  *(_QWORD*)(v125 + 64) = 0;
  *(_QWORD*)(v125 + 72) = 0;
  *(_WORD*)(v125 + 80) = 0;
  *(_BYTE*)(v125 + 109) = 1;
  *(_DWORD*)(v125 + 112) = -1082130432;
  *(_WORD*)(v125 + 116) = 0;
  *(_WORD*)(v125 + 136) = 0;
  *(_BYTE*)(v125 + 160) = 0;
  *(_BYTE*)(v125 + 288) = 0;
  *(_QWORD*)(v125 + 272) = 0;
  *(_QWORD*)(v125 + 280) = 0;
  *(_QWORD*)(v125 + 256) = 0;
  *(_QWORD*)(v125 + 264) = 0;
  *(_QWORD*)(v125 + 240) = 0;
  *(_QWORD*)(v125 + 248) = 0;
  *(_QWORD*)(v125 + 224) = 0;
  *(_QWORD*)(v125 + 232) = 0;
  *(_QWORD*)(v125 + 208) = 0;
  *(_QWORD*)(v125 + 216) = 0;
  *(_QWORD*)(v125 + 192) = 0;
  *(_QWORD*)(v125 + 200) = 0;
  *(_QWORD*)(v125 + 176) = 0;
  *(_QWORD*)(v125 + 184) = 0;
  *(_QWORD*)(v125 + 168) = 0;
  *(_QWORD*)(v125 + 120) = 0;
  *(_DWORD*)(v125 + 127) = 0;
  *(_DWORD*)(v125 + 292) = 2;
  *(_QWORD*)(v23 + 1544) = v125;
  v127 = *v20;
  *(_QWORD*)(v126 + 24) = 0;
  *(_QWORD*)(v23 + 1536) = v126 + 24;
  v128 = fw_memory_HeapManager_Allocate(v127, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v128 + 8) = 0;
  *(_QWORD*)(v128 + 16) = 0;
  *(_QWORD*)v128 = v35;
  v129 = v128;
  *(_DWORD*)(v128 + 32) = 0;
  *(_QWORD*)(v128 + 40) = 0;
  *(_DWORD*)(v128 + 48) = 0x2000;
  *(_DWORD*)(v128 + 104) = 0;
  *(_BYTE*)(v128 + 108) = 0;
  *(_QWORD*)(v128 + 56) = 0;
  *(_QWORD*)(v128 + 64) = 0;
  *(_QWORD*)(v128 + 72) = 0;
  *(_WORD*)(v128 + 80) = 0;
  *(_BYTE*)(v128 + 109) = 1;
  *(_DWORD*)(v128 + 112) = -1082130432;
  *(_WORD*)(v128 + 116) = 0;
  *(_WORD*)(v128 + 136) = 0;
  *(_BYTE*)(v128 + 160) = 0;
  *(_BYTE*)(v128 + 288) = 0;
  *(_QWORD*)(v128 + 272) = 0;
  *(_QWORD*)(v128 + 280) = 0;
  *(_QWORD*)(v128 + 256) = 0;
  *(_QWORD*)(v128 + 264) = 0;
  *(_QWORD*)(v128 + 240) = 0;
  *(_QWORD*)(v128 + 248) = 0;
  *(_QWORD*)(v128 + 224) = 0;
  *(_QWORD*)(v128 + 232) = 0;
  *(_QWORD*)(v128 + 208) = 0;
  *(_QWORD*)(v128 + 216) = 0;
  *(_QWORD*)(v128 + 192) = 0;
  *(_QWORD*)(v128 + 200) = 0;
  *(_QWORD*)(v128 + 176) = 0;
  *(_QWORD*)(v128 + 184) = 0;
  *(_QWORD*)(v128 + 168) = 0;
  *(_QWORD*)(v128 + 120) = 0;
  *(_DWORD*)(v128 + 127) = 0;
  *(_DWORD*)(v128 + 292) = 2;
  *(_QWORD*)(v23 + 1560) = v128;
  v130 = *v20;
  *(_QWORD*)(v129 + 24) = 0;
  *(_QWORD*)(v23 + 1552) = v129 + 24;
  v131 = fw_memory_HeapManager_Allocate(v130, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v131 + 8) = 0;
  *(_QWORD*)(v131 + 16) = 0;
  *(_QWORD*)v131 = v35;
  v132 = v131;
  *(_DWORD*)(v131 + 32) = 0;
  *(_QWORD*)(v131 + 40) = 0;
  *(_DWORD*)(v131 + 48) = 0x2000;
  *(_DWORD*)(v131 + 104) = 0;
  *(_BYTE*)(v131 + 108) = 0;
  *(_QWORD*)(v131 + 56) = 0;
  *(_QWORD*)(v131 + 64) = 0;
  *(_QWORD*)(v131 + 72) = 0;
  *(_WORD*)(v131 + 80) = 0;
  *(_BYTE*)(v131 + 109) = 1;
  *(_DWORD*)(v131 + 112) = -1082130432;
  *(_WORD*)(v131 + 116) = 0;
  *(_WORD*)(v131 + 136) = 0;
  *(_BYTE*)(v131 + 160) = 0;
  *(_BYTE*)(v131 + 288) = 0;
  *(_QWORD*)(v131 + 272) = 0;
  *(_QWORD*)(v131 + 280) = 0;
  *(_QWORD*)(v131 + 256) = 0;
  *(_QWORD*)(v131 + 264) = 0;
  *(_QWORD*)(v131 + 240) = 0;
  *(_QWORD*)(v131 + 248) = 0;
  *(_QWORD*)(v131 + 224) = 0;
  *(_QWORD*)(v131 + 232) = 0;
  *(_QWORD*)(v131 + 208) = 0;
  *(_QWORD*)(v131 + 216) = 0;
  *(_QWORD*)(v131 + 192) = 0;
  *(_QWORD*)(v131 + 200) = 0;
  *(_QWORD*)(v131 + 176) = 0;
  *(_QWORD*)(v131 + 184) = 0;
  *(_QWORD*)(v131 + 168) = 0;
  *(_QWORD*)(v131 + 120) = 0;
  *(_DWORD*)(v131 + 127) = 0;
  *(_DWORD*)(v131 + 292) = 2;
  *(_QWORD*)(v23 + 1576) = v131;
  v133 = *v20;
  *(_QWORD*)(v132 + 24) = 0;
  *(_QWORD*)(v23 + 1568) = v132 + 24;
  v134 = fw_memory_HeapManager_Allocate(v133, 296, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v134 + 8) = 0;
  *(_QWORD*)(v134 + 16) = 0;
  *(_QWORD*)v134 = v35;
  *(_DWORD*)(v134 + 32) = 0;
  *(_QWORD*)(v134 + 40) = 0;
  *(_DWORD*)(v134 + 48) = 0x2000;
  *(_DWORD*)(v134 + 104) = 0;
  *(_BYTE*)(v134 + 108) = 0;
  *(_QWORD*)(v134 + 56) = 0;
  *(_QWORD*)(v134 + 64) = 0;
  *(_QWORD*)(v134 + 72) = 0;
  *(_WORD*)(v134 + 80) = 0;
  *(_BYTE*)(v134 + 109) = 1;
  *(_DWORD*)(v134 + 112) = -1082130432;
  *(_WORD*)(v134 + 116) = 0;
  *(_WORD*)(v134 + 136) = 0;
  *(_BYTE*)(v134 + 160) = 0;
  *(_BYTE*)(v134 + 288) = 0;
  *(_QWORD*)(v134 + 272) = 0;
  *(_QWORD*)(v134 + 280) = 0;
  *(_QWORD*)(v134 + 256) = 0;
  *(_QWORD*)(v134 + 264) = 0;
  *(_QWORD*)(v134 + 240) = 0;
  *(_QWORD*)(v134 + 248) = 0;
  *(_QWORD*)(v134 + 224) = 0;
  *(_QWORD*)(v134 + 232) = 0;
  *(_QWORD*)(v134 + 208) = 0;
  *(_QWORD*)(v134 + 216) = 0;
  *(_QWORD*)(v134 + 192) = 0;
  *(_QWORD*)(v134 + 200) = 0;
  *(_QWORD*)(v134 + 176) = 0;
  *(_QWORD*)(v134 + 184) = 0;
  *(_QWORD*)(v134 + 168) = 0;
  *(_QWORD*)(v134 + 120) = 0;
  *(_DWORD*)(v134 + 127) = 0;
  *(_DWORD*)(v134 + 292) = 2;
  *(_QWORD*)(v23 + 1592) = v134;
  *(_QWORD*)(v134 + 24) = 0;
  *(_QWORD*)(v23 + 1584) = v134 + 24;
  v135 = game_GetHero(9u),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v135 == 0) {
    goto LABEL_46;
  }
  for (i = v135; i != 0; i = *(_QWORD*)(i + 624)) {
    v137 = i;
  }
  if (*(_BYTE*)(v137 + 441) != 3) {
    goto LABEL_46;
  }
  v138 = *(_QWORD*)(v135 + 624);
  if (v138 == 0) {
    v138 = v135;
  }
  v180 = v138;
  v179 = 241;
  v139 = game_UnitPool_Find_6ead60(&v180, &v179),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v139 != nullptr) {
    v140 = v139 + 263;
    goto LABEL_47;
  }
  v141 = *(_QWORD*)(game_GameModeData_instance_ + 176);
  if (*(_BYTE*)(v141 + 144) != 0) {
    v140 = (_BYTE*)(v141 + 112);
  }
  else {
  LABEL_46:
    v140 = (_BYTE*)GameData_212cf70[0];
  }
LABEL_47:
  v142 = *v20;
  *(_BYTE*)(v23 + 277) = v140[32];
  v143 = fw_memory_HeapManager_Allocate(v142, 240, 16, 0),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v144 = v143;
  if (v22 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                              memory_order_relaxed);
  }
  v145 = GameData_212c608[0];
  *(_QWORD*)(v143 + 96) = 0;
  *(_QWORD*)(v143 + 104) = 0;
  *(_QWORD*)(v143 + 112) = 0;
  *(_QWORD*)(v143 + 120) = 0;
  *(_QWORD*)(v143 + 128) = 0;
  *(_WORD*)(v143 + 136) = 0;
  *(_QWORD*)(v143 + 138) = 0;
  *(_QWORD*)(v143 + 144) = 0;
  *(_QWORD*)(v143 + 32) = 0;
  *(_QWORD*)(v143 + 40) = 0;
  *(_QWORD*)(v143 + 48) = 0;
  *(_QWORD*)(v143 + 56) = 0;
  *(_QWORD*)(v143 + 64) = 0;
  *(_QWORD*)(v143 + 72) = 0;
  *(_QWORD*)(v143 + 80) = 0;
  *(_QWORD*)(v143 + 88) = 0;
  *(_QWORD*)v143 = v145 + 16;
  *(_QWORD*)(v143 + 8) = 0;
  *(_QWORD*)(v143 + 16) = 0;
  *(_QWORD*)(v143 + 24) = "NULL";
  game_ProcInst_Register(v143),
      v137 = COERCE_AS(__typeof__(v137),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v146 = GameData_2131a90[0];
  *GameData_2131a90[0] = v144;
  *(_QWORD*)v144 = GameData_2131d80[0] + 16;
  *(_QWORD*)(v144 + 152) = v177;
  *(_QWORD*)(v144 + 160) = v22;
  if (v22 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_BYTE*)(v144 + 168) = 0;
  *(_QWORD*)(v144 + 176) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
    v176 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v176;
    __cxa_guard_release((__int64)&GameData_21a6130),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  v147 = GameData_21a6120;
  *(_BYTE*)(v144 + 208) = 0;
  *(_DWORD*)(v144 + 212) = 0;
  *(_BYTE*)(v144 + 216) = 0;
  *(_DWORD*)(v144 + 220) = 0;
  *(_QWORD*)(v144 + 224) = 0;
  *(_OWORD*)(v144 + 192) = v147;
  *(_DWORD*)(v144 + 232) = 0x2000;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21c6868) != 0) {
    GameData_21c67d0 = 0;
    GameData_21c67d8 = 0;
    GameData_21c67e0 = 0;
    GameData_21c67b0 = 0;
    GameData_21c67b8 = 0;
    GameData_21c67c0 = 0;
    GameData_21c67c8 = 0;
    GameData_21c6808 = 0;
    GameData_21c6810 = 0;
    GameData_21c6818 = 0;
    GameData_21c67a8 = 3;
    GameData_21c6820 = 0;
    GameData_21c6828 = 0;
    GameData_21c6850 = 0;
    GameData_21c6858 = 0;
    GameData_21c6860 = 0;
    GameData_21c6848 = 0;
    GameData_21c6838 = 0;
    GameData_21c6840 = 0;
    GameData_21c6830 = 0;
    GameData_21c67e8 = 14;
    GameData_21c67f0 = 0;
    GameData_21c67f8 = 16;
    GameData_21c6800 = 1;
    __cxa_guard_release((__int64)&GameData_21c6868),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  v148 = *(_QWORD*)(v23 + 40);
  if (v148 != 0) {
    *(_QWORD*)(v148 + 48) = v144;
    *(_QWORD*)(v144 + 56) = *(_QWORD*)(v23 + 40);
  }
  *(_QWORD*)(v23 + 40) = v144;
  *(_QWORD*)(v144 + 24) = "UnitMakeCamera";
  *(_QWORD*)(v144 + 32) = v23;
  *(_DWORD*)(v144 +
             140) = (unsigned int)game_HashString32("UnitMakeCamera"),
             v137 = COERCE_AS(__typeof__(v137),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v144 + 8) = &GameData_21c67a8;
  *(_QWORD*)(v144 + 16) = &GameData_21c67a8;
  *(_QWORD*)(v144 + 64) = 0;
  *(_QWORD*)(v144 + 72) = 24;
  *(_QWORD*)(v144 + 80) = 1;
  (*(void (**)(__int64))(*(_QWORD*)v144 + 32LL))(v144),
      v137 = COERCE_AS(__typeof__(v137),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v144 + 136LL))(v144) & 1) != 0 &&
      (*(_WORD*)(v144 + 136) & 0x100) == 0) {
    *(_WORD*)(v144 + 136) |= 0x100u;
  }
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    std___1___shared_weak_count___release_weak(v22),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  GameData_2264530 = 0;
  GameData_21759d0 = 1;
  GameData_2203488 = 0;
  GameData_2203489 = 0;
  nn_os_LockMutex((__int64)&game_g_random_mutex),
      v137 = COERCE_AS(__typeof__(v137),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v149 = game_map_MapRandom_instance__ptr[0];
  v150 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((_UNKNOWN**)0x8LL));
  v151 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v152 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
         (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v149 + 1) = v150;
  v153 = (v152 >> 8) ^ (v151 >> 19) ^ v152 ^ v151;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v149) = v151;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v149 + 4) = v153;
  v154 = v153 & 0x7FFFFFFF;
  nn_os_UnlockMutex((__int64)&game_g_random_mutex),
      v137 = COERCE_AS(__typeof__(v137),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  GameData_220348c = v154 - 3 * ((1431655766 * (unsigned __int64)v154) >> 32);
  if ((GameData_22031a8 & 1) != 0) {
    *(_BYTE*)GameData_22031b8 = 0;
    GameData_22031b0 = 0;
  }
  else {
    LOWORD(GameData_22031a8) = 0;
  }
  UnitMake_1630d20(v23, 0),
      v137 = COERCE_AS(__typeof__(v137),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v155 = *(unsigned __int8*)(v23 + 277);
  if (*(_BYTE*)(v23 + 277) != 0) {
    v156 = v155 == 1;
    *(_BYTE*)(v23 + 276) = v155;
    v157 = v155 != 1;
    *(_DWORD*)(v23 + 156) = v157;
    v158 = (_QWORD*)(v23 + 196 + 40LL * v157);
    *(_DWORD*)(v23 + 168) = (unsigned __int8)v140[36];
    *(_DWORD*)(v23 + 164) = (unsigned __int8)v140[34];
    *(_DWORD*)(v23 + 160) = (unsigned __int8)v140[35];
    *(_DWORD*)(v23 + 172) = (unsigned __int8)v140[33];
    v159 = v156;
    v160 = v23 + 196 + 40LL * v159;
    v161 = *(_QWORD*)(v23 + 188);
    v162 = *(_QWORD*)(v23 + 172);
    *(_QWORD*)v160 = -1;
    *(_QWORD*)(v160 + 8) = -1;
    *(_QWORD*)(v160 + 24) = -1;
    *(_QWORD*)(v160 + 32) = -1;
    *(_QWORD*)(v160 + 16) = -1;
    *(_DWORD*)(v160 + 4) = 0;
    *(_DWORD*)(v160 + 8) = 0;
    v163 = *(_QWORD*)(v23 + 180);
    v158[2] = v162;
    v164 = *(_QWORD*)(v23 + 164);
    v158[3] = v163;
    v158[4] = v161;
    *v158 = *(_QWORD*)(v23 + 156);
    v158[1] = v164;
    if (v156) {
      v173 = *(_QWORD*)(v23 + 712);
      v174 = game_97b2f0((__int64)v140),
      v137 = COERCE_AS(__typeof__(v137),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      game_97b400(v173, (__int64)v174),
          v137 = COERCE_AS(__typeof__(v137),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      *(_DWORD*)(v23 + 732) = 1;
    }
    else {
      v165 = *(_QWORD*)(v23 + 880);
      v166 = game_97b2f0((__int64)v140),
      v137 = COERCE_AS(__typeof__(v137),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      game_97b400(v165, (__int64)v166),
          v137 = COERCE_AS(__typeof__(v137),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      *(_DWORD*)(v23 + 900) = 1;
    }
    UnitMakeCamera_179be60(*v146),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  else {
    *(_QWORD*)(v23 + 156) = -1;
    *(_DWORD*)(v23 + 160) = 0;
    v167 = *(_QWORD*)(v23 + 156);
    *(_QWORD*)(v23 + 236) = v167;
    *(_QWORD*)(v23 + 164) = -1;
    *(_QWORD*)(v23 + 172) = -1;
    *(_DWORD*)(v23 + 164) = 0;
    *(_BYTE*)(v23 + 276) = 1;
    *(_QWORD*)(v23 + 180) = -1;
    *(_QWORD*)(v23 + 188) = -1;
    *(_QWORD*)(v23 + 212) = -1;
    *(_QWORD*)(v23 + 220) = -1;
    *(_QWORD*)(v23 + 228) = -1;
    *(_QWORD*)(v23 + 260) = -1;
    *(_QWORD*)(v23 + 268) = -1;
    v168 = *(_QWORD*)(v23 + 164);
    *(_QWORD*)(v23 + 244) = v168;
    *(_QWORD*)(v23 + 252) = -1;
    *(_QWORD*)(v23 + 196) = v167;
    *(_QWORD*)(v23 + 204) = v168;
    v169 = *(_QWORD*)(v23 + 712);
    v170 = game_97b2f0((__int64)v140),
    v137 = COERCE_AS(__typeof__(v137),
                     PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    game_97b400(v169, (__int64)v170),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v171 = *(_QWORD*)(v23 + 880);
    v172 = game_97b2f0((__int64)v140),
    v137 = COERCE_AS(__typeof__(v137),
                     PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    game_97b400(v171, (__int64)v172),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    *(_DWORD*)(v23 + 732) = 0;
    *(_DWORD*)(v23 + 900) = 0;
  }
  result = ProcInst_657850(v23, (__int64)&GameData_225ca90, (__int64)"UnitMake",
                           1, a1),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    return std___1___shared_weak_count___release_weak(v22);
  }
  return result;
}

#pragma GCC visibility pop
