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
__int64 TelopBattleExp_Destructor(__int64 a1);
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
__n128 TelopBattleExp_Unknown36(__int64 a1, __n128 result);
__int64 TelopBattleExp_Unknown2(__int64 a1);
void TelopBattleExp_1745000(_QWORD* a1, int a2);
__n128 TelopBattleExp_17453e0(__int64 a1, __int64 a2);

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
  long double v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  _BOOL4 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  float v33;
  float v34;
  int v35;
  int v36;
  int v37;
  float v38;
  float v39;
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
  long double v53;
  __int64 v54;
  long double v55;
  __int64 v56;
  int v57;
  unsigned __int64 v58;
  int v59;
  unsigned int v60;
  int v61;
  int v62;
  int v63;
  unsigned int v64;
  int v65;
  __int64 v66;
  long double v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  int v73;
  int v74;
  unsigned __int64 v75;
  int v76;
  int v77;
  int v78;
  int v79;
  float v80;
  float v81;
  int v82;
  int v83;
  int v84;
  float v85;
  float v86;
  float v87;
  float v88;
  unsigned __int64 v89;
  int v90;
  int v91;
  int v92;
  int v93;
  unsigned int v94;
  int v95;
  __int64 v96;
  long double v97;
  __int64 v98;
  unsigned int v99;
  float v100;
  float v101;
  unsigned int v102;
  float v103;
  float v104;
  __int64 v105;
  long double v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  unsigned int v111;
  __int64 v112;
  unsigned int v113;
  bool v114;
  __int64 v115;
  int v116;
  unsigned __int64 v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  unsigned int v124;
  int v125;
  void* v126;
  __int64 v127;
  __int64 v128;
  unsigned int v129;
  __int64 v130;
  unsigned int v131;
  bool v132;
  __int64 v133;
  signed int v134;
  int v135;
  int v136;
  int v137;
  unsigned int v138;
  int v139;
  _QWORD* v140;
  signed int v141;
  int v142;
  signed int v143;
  int v144;
  int v145;
  int v146;
  unsigned int v147;
  int v148;
  _QWORD* v149;
  _QWORD* v150;
  bool v151;
  char v152;
  const char* v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  void* v158;

  v2 = *(_QWORD*)(a1 + 824);
  v3 = *(_QWORD*)(v2 + 408);
  v4 = v3 != 0 || *(unsigned __int8*)(game_Unit_GetJob(v2) + 417) > 1u;
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
  LayoutAccessor_1560070((void*)(&v157), a1 + 168, "L_Lv");
  if (v158 != nullptr) {
    v19 = std___1___shared_weak_count_lock(v158);
    v20 = (__int64*)v157;
    if (v158 != nullptr) {
      *(__n128*)&v18 = std___1___shared_weak_count___release_weak_alt1();
    }
    if (v19 == 0 || v20 == nullptr) {
      if (v19 == 0) {
        goto LABEL_90;
      }
      goto LABEL_88;
    }
    if (v20[2] != 0) {
      v21 = v20[1];
      if (v21 != 0) {
        v22 = std___1___shared_weak_count_lock(v21);
        if (v22 == 0) {
          goto LABEL_45;
        }
        v24 = *v20;
        if (*v20 != 0) {
          v23 = *(unsigned __int8*)(v24 + 24);
          v25 = v24 + 152;
          if (v23 == 0) {
            v25 = 0;
          }
          v26 = v25 != v20[2];
        }
        else {
          v26 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v152 = v23;
          (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
          *(__n128*)&v18 = std___1___shared_weak_count___release_weak_alt1();
          LOBYTE(v23) = v152;
        }
        if (v26) {
        LABEL_45:
          v27 = v20[1];
          if (v27 == 0 || *(_QWORD*)(v27 + 8) == -1) {
            goto LABEL_58;
          }
        LABEL_49:
          v28 = ui_LayoutAccessor_FindPane(v20, "T_Lv_Num");
          if (v28 != 0) {
            v29 = __dynamic_cast(v28, GameData_212d670[0], GameData_212d690, 0);
            if (v29 != 0) {
              GameRoutine_156c910(v29, "%d", 1);
            }
          }
          *(__n128*)&v18 = ui_LayoutAccessor_SetPaneVisible(
              v20, "IconMax", *(unsigned __int8*)(a1 + 964));
          if (*(_BYTE*)(a1 + 1388) == 1) {
            if ((*(_BYTE*)(a1 + 1389) & 1) == 0 &&
                LayoutAccessor_15637c0(v20, "LvUp", 0) >= 4.0) {
              *(_BYTE*)(a1 + 1389) = 1;
              TelopBattleExp_1745000_alt1(a1, (unsigned int)v13);
              game_80c770((void*)(&v157), "SE_SYS_Level_Up");
            }
            if ((LayoutAccessor_1563380(v20, "LvUp", 0) & 1) != 0) {
              LODWORD(v18) = 1.0;
              *(_WORD*)(a1 + 1388) = 0;
              LayoutAccessor_1562680(v20, "Wait", v18);
            }
          }
          goto LABEL_58;
        }
        if ((v23 & 1) != 0) {
          goto LABEL_49;
        }
      }
    }
  LABEL_58:
    if ((*(_BYTE*)(a1 + 1388) & 1) == 0 && *(_DWORD*)(a1 + 1356) != v13) {
      LODWORD(v18) = 1.0;
      *(_BYTE*)(a1 + 1388) = 1;
      LayoutAccessor_1562680(v20, "LvUp", v18);
      *(_DWORD*)(a1 + 1356) = v13;
    }
    v30 = a1 + 168;
    if (*(_BYTE*)(a1 + 964) == 1) {
      ui_LayoutAccessor_SetPaneVisible(v30, "T_Lv_More", 0);
      ui_LayoutAccessor_SetPaneVisible(a1 + 168, "T_Lv_NumMore", 0);
      ui_LayoutAccessor_SetPaneVisible(a1 + 168, "T_Lv_Max", 1);
    }
    else {
      ui_LayoutAccessor_SetPaneVisible(v30, "T_Lv_More", 1);
      ui_LayoutAccessor_SetPaneVisible(a1 + 168, "T_Lv_NumMore", 1);
      ui_LayoutAccessor_SetPaneVisible(a1 + 168, "T_Lv_Max", 0);
      v31 = ui_LayoutAccessor_FindPane(a1 + 168, "T_Lv_NumMore");
      if (v31 != 0) {
        v32 = __dynamic_cast(v31, GameData_212d670[0], GameData_212d690, 0);
        if (v32 != 0) {
          GameRoutine_156c910(v32, "%d", 1);
        }
      }
    }
    LayoutAccessor_1560070((void*)(&v155), a1 + 168, "L_Lv_Gauge");
    v33 = 1.0;
    v34 = 1.0;
    if (v6 >= 1) {
      v35 = v6 - v17;
      if (v6 != v17) {
        v36 = *(_DWORD*)(a1 + 948);
        if (v36 <= v17) {
          v36 = v17;
        }
        v37 = v36 - v17;
        if (v35 < v37) {
          v37 = v6 - v17;
        }
        *(float*)&v18 = (float)v37;
        v34 = (float)v37 / (float)v35;
      }
    }
    if (v6 >= 1) {
      *(float*)&v18 = (float)v17;
      if ((float)v17 != (float)v6) {
        v38 = *(float*)(a1 + 968);
        v39 = (float)v6 - *(float*)&v18;
        if (v38 < *(float*)&v18) {
          v38 = (float)v17;
        }
        *(float*)&v18 = v38 - *(float*)&v18;
        if (v39 < *(float*)&v18) {
          *(float*)&v18 = v39;
        }
        v33 = *(float*)&v18 / v39;
      }
    }
    if (v156 != 0) {
      v40 = std___1___shared_weak_count_lock(v156);
      if (v40 != 0) {
        v41 = v40;
        if (v155 != 0) {
          GameRoutine_174d800(v34, v33);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
          *(__n128*)&v18 = std___1___shared_weak_count___release_weak_alt1();
        }
      }
      if (v156 != 0) {
        *(__n128*)&v18 = std___1___shared_weak_count___release_weak_alt1();
      }
    }
  LABEL_88:
    if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v19 + 16LL))(v19, v18);
      *(__n128*)&v18 = std___1___shared_weak_count___release_weak_alt1();
    }
  }
LABEL_90:
  v42 = *(_QWORD*)(a1 + 1328);
  v43 = *(_QWORD*)(a1 + 1336);
  if (v42 != v43 && !v4) {
    v44 = 0;
    while (1) {
      v57 = *(unsigned __int8*)(*(_QWORD*)(a1 + 1360) + v44);
      if (v57 == (*(unsigned __int8 (**)(__int64, long double))(
                     *(_QWORD*)v42 + 16LL))(v42, v18)) {
        goto LABEL_112;
      }
      v58 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
      if ((int)v58 < 1) {
        LOBYTE(v59) = 0;
      }
      else {
        v59 = 0;
        if ((unsigned int)v58 >= 0xC) {
          v60 = 12;
        }
        else {
          v60 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
        }
        v61 = *(_DWORD*)(GameData_21d99a8 + 4LL * (unsigned int)(v58 - 1));
        v62 = *(_DWORD*)(GameData_21d99a8 + 4LL * v60 - 4);
        if (v61 >= v62) {
          v61 = v62;
        }
        v63 = v62 >= *(_DWORD*)GameData_21d99a8 ? v61
                                                : *(_DWORD*)GameData_21d99a8;
        while (1) {
          v64 = (unsigned int)(v59 + v58) >> 1;
          v65 = *(_DWORD*)(GameData_21d99a8 + 4LL * v64);
          if (v63 == v65) {
            break;
          }
          if (v63 < v65) {
            LODWORD(v58) = (unsigned int)(v59 + v58) >> 1;
          }
          else {
            v59 = v64 + 1;
          }
          if (v59 >= (int)v58) {
            goto LABEL_131;
          }
        }
        LOBYTE(v59) = v64 + 1;
      }
    LABEL_131:
      if (*(unsigned __int8*)(*(_QWORD*)(a1 + 1360) + v44) ==
          (unsigned __int8)v59) {
        goto LABEL_112;
      }
      v153 = (const char*)game_util_Format("L_MasteryLvUp_%02d", v44);
      v154 = strlen(v153);
      GameRoutine_1114920((void*)(&v157), a1 + 168, &v153);
      if (v158 != nullptr) {
        v66 = std___1___shared_weak_count_lock(v158);
        v68 = v157;
        if (v158 != nullptr) {
          *(__n128*)&v67 = std___1___shared_weak_count___release_weak_alt1();
        }
        if (v66 != 0 && v68 != 0) {
          BlnPopup_19f25b0(v68, v67);
        LABEL_139:
          if (atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66);
            std___1___shared_weak_count___release_weak_alt1();
          }
          goto LABEL_111;
        }
        if (v66 != 0) {
          goto LABEL_139;
        }
      }
    LABEL_111:
      v56 = game_util_Format("N_MasteryEff_%02d", v44);
      TelopBattleExp_17453e0_alt1(a1, v56);
      *(_BYTE*)(*(_QWORD*)(a1 + 1360) + v44) =
          (*(__int64 (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
    LABEL_112:
      ++v44;
      v42 += 160;
      if (v42 == v43) {
        if ((int)v44 >= 4) {
          goto LABEL_94;
        }
        goto LABEL_93;
      }
    }
  }
  LODWORD(v44) = 0;
  do {
  LABEL_93:
    v45 = game_util_Format("L_IconMastery_Gauge_%02d", v44);
    v46 = LayoutAccessor_155fbe0(a1 + 168, v45);
    LayoutAccessor_155e830(v46, 0);
    LODWORD(v44) = v44 + 1;
  } while ((_DWORD)v44 != 4);
LABEL_94:
  if (v3 != 0) {
    ui_LayoutAccessor_SetPaneVisible(a1 + 168, "L_ClassIcon", 0);
  }
  v47 = *(_QWORD*)(a1 + 824);
  if (*(_QWORD*)(v47 + 408) == 0 && v3 == 0 &&
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v47 + 400) + 24LL) + 1104LL) != 0) {
    v153 = "L_ClassIcon";
    v154 = 11;
    GameRoutine_1587740((void*)(&v157), a1 + 168, &v153);
    if (v158 == nullptr) {
      goto LABEL_197;
    }
    v52 = std___1___shared_weak_count_lock(v158);
    v54 = v157;
    if (v158 != nullptr) {
      *(__n128*)&v53 = std___1___shared_weak_count___release_weak_alt1();
    }
    if (v52 != 0 && v54 != 0) {
      v55 = ((long double (*)(__int64, __int64, long double)) *
             (_QWORD*)(*(_QWORD*)v54 + 40LL))(v54, 1, v53);
      JobIcon_19a8c50(v54, *(_QWORD*)(a1 + 824), v55);
    }
    else if (v52 == 0) {
      goto LABEL_197;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
      std___1___shared_weak_count___release_weak_alt1();
    }
  LABEL_197:
    LayoutAccessor_155fbe0(a1 + 168, "L_ClassIcon/L_Gauge");
    v99 = *(_DWORD*)(a1 + 1192);
    if ((int)v99 < 1) {
      v103 = 1.0;
      v104 = 1.0;
    }
    else {
      v100 = *(float*)(a1 + 1096);
      v101 = (float)v99;
      v102 = *(_DWORD*)(a1 + 1076) & ~(*(int*)(a1 + 1076) >> 31);
      if (v99 < v102) {
        v102 = *(_DWORD*)(a1 + 1192);
      }
      if (v100 < 0.0) {
        v100 = 0.0;
      }
      v103 = (float)v102 / v101;
      if (v100 > v101) {
        v100 = (float)v99;
      }
      v104 = v100 / v101;
    }
    GameRoutine_174d800(v103, v104);
    if (*(_BYTE*)(a1 + 1092) != 1 || (*(_BYTE*)(a1 + 929) & 1) != 0) {
      goto LABEL_97;
    }
    v153 = "L_ClassLvUp";
    v154 = 11;
    GameRoutine_1114920((void*)(&v157), a1 + 168, &v153);
    if (v158 == nullptr) {
      goto LABEL_283;
    }
    v105 = std___1___shared_weak_count_lock(v158);
    v107 = v157;
    if (v158 != nullptr) {
      *(__n128*)&v106 = std___1___shared_weak_count___release_weak_alt1();
    }
    if (v105 != 0 && v107 != 0) {
      BlnPopup_19f25b0(v107, v106);
    }
    else if (v105 == 0) {
    LABEL_283:
      TelopBattleExp_17453e0_alt1(a1, "N_ClassEff");
      snd_Fade_Fade_10c830(&v157, 0.0);
      snd_play_ff2d0((void*)(&v153), "SE_SYS_Level_Up", "SE_SYS_Level_Up",
                     &v157, 0, 65537, 0, 0.0, 1.0);
      snd_Fade_Destroy_Fade(&v157);
      *(_BYTE*)(a1 + 929) = 1;
      goto LABEL_97;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v105 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v105 + 16LL))(v105);
      std___1___shared_weak_count___release_weak_alt1();
    }
    goto LABEL_283;
  }
LABEL_97:
  if (*(_BYTE*)(a1 + 928) != 1) {
    return;
  }
  v48 = *(_QWORD*)(a1 + 824);
  if (*(_BYTE*)(v48 + 1880) == 0) {
    return;
  }
  v49 = LayoutAccessor_155fbe0(a1 + 168, "L_Animal_Name");
  v50 = ui_LayoutAccessor_FindPane(v49, "Icon");
  if (v50 != 0) {
    v51 = __dynamic_cast(v50, GameData_212d670[0], GameData_212d678[0], 0);
    if (v51 != 0 && *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                               8LL * *(unsigned __int8*)(v48 + 1880)) != 0) {
      Manager_136a920(ui_Manager_instance_ + 1264, v51, 0, 2);
    }
  }
  v69 = Unit_931120(v48 + 1880);
  if (v69 != 0) {
    v70 = v69;
    v71 = ui_LayoutAccessor_FindTextBox(v49, "T_Txt");
    if (v71 != 0) {
      GameRoutine_156c5d0(v71, v70, 0);
    }
  }
  v72 = LayoutAccessor_155fbe0(a1 + 168, "L_AnimalLv");
  Util_1583920(v72, v48 + 1880, *(_QWORD*)(a1 + 824));
  v73 = *(_DWORD*)(a1 + 1224);
  v74 = 0;
  v75 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  if (v73 >= (int)v75) {
    v76 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  }
  else {
    v76 = *(_DWORD*)(a1 + 1224);
  }
  v77 = v76 - 1;
  if (v73 <= 0) {
    v77 = 0;
  }
  if (v73 < 1) {
    v78 = 1;
  }
  else {
    v78 = v76;
  }
  if (v78 != (_DWORD)v75) {
    v74 = *(_DWORD*)(GameData_21d9988 + 4LL * v78);
  }
  v79 = *(_DWORD*)(GameData_21d9988 + 4LL * v77);
  LayoutAccessor_155fbe0(a1 + 168, "L_AnimalLv/L_Gauge");
  v80 = 1.0;
  v81 = 1.0;
  if (v74 >= 1) {
    v82 = v74 - v79;
    if (v74 != v79) {
      v83 = *(_DWORD*)(a1 + 1212);
      if (v83 <= v79) {
        v83 = v79;
      }
      v84 = v83 - v79;
      if (v82 < v84) {
        v84 = v74 - v79;
      }
      v81 = (float)v84 / (float)v82;
    }
  }
  if (v74 >= 1) {
    v85 = (float)v79;
    if ((float)v79 != (float)v74) {
      v86 = *(float*)(a1 + 1232);
      v87 = (float)v74 - v85;
      if (v86 < v85) {
        v86 = (float)v79;
      }
      v88 = v86 - v85;
      if (v87 < v88) {
        v88 = (float)v74 - v85;
      }
      v80 = v88 / v87;
    }
  }
  GameRoutine_174d800(v81, v80);
  v89 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  if ((int)v89 < 1) {
    v91 = 0;
  }
  else {
    v90 = *(_DWORD*)(a1 + 1208);
    v91 = 0;
    v92 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v89 - 1));
    if (v92 >= v90) {
      v92 = *(_DWORD*)(a1 + 1208);
    }
    v93 = v90 >= *(_DWORD*)GameData_21d9988 ? v92 : *(_DWORD*)GameData_21d9988;
    while (1) {
      v94 = (unsigned int)(v91 + v89) >> 1;
      v95 = *(_DWORD*)(GameData_21d9988 + 4LL * v94);
      if (v93 == v95) {
        break;
      }
      if (v93 < v95) {
        LODWORD(v89) = (unsigned int)(v91 + v89) >> 1;
      }
      else {
        v91 = v94 + 1;
      }
      if (v91 >= (int)v89) {
        goto LABEL_187;
      }
    }
    v91 = v94 + 1;
  }
LABEL_187:
  if (*(_DWORD*)(a1 + 1384) == v91) {
    return;
  }
  *(_DWORD*)(a1 + 1384) = v91;
  v153 = "L_AnimalLvUp";
  v154 = 12;
  GameRoutine_1114920((void*)(&v157), a1 + 168, &v153);
  if (v158 != nullptr) {
    v96 = std___1___shared_weak_count_lock(v158);
    v98 = v157;
    if (v158 != nullptr) {
      *(__n128*)&v97 = std___1___shared_weak_count___release_weak_alt1();
    }
    if (v96 != 0 && v98 != 0) {
      BlnPopup_19f25b0(v98, v97);
    }
    else if (v96 == 0) {
      goto LABEL_217;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v96 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v96 + 16LL))(v96);
      std___1___shared_weak_count___release_weak_alt1();
    }
  }
LABEL_217:
  TelopBattleExp_17453e0_alt1(a1, "N_AnimalEff");
  snd_Fade_Fade_10c830(&v157, 0.0);
  snd_play_ff2d0((void*)(&v153), "SE_SYS_Level_Up", "SE_SYS_Level_Up", &v157, 0,
                 65537, 0, 0.0, 1.0);
  snd_Fade_Destroy_Fade(&v157);
  v108 = *(_QWORD*)(a1 + 824);
  if (v108 == 0) {
    goto LABEL_230;
  }
  v109 = *(_QWORD*)(v108 + 392);
  if (v109 == 0) {
    goto LABEL_230;
  }
  v110 = *(_QWORD*)(v48 + 1904);
  if (v110 == 0) {
    goto LABEL_230;
  }
  v111 = *(unsigned __int8*)(v109 + 48);
  v112 = v48 + 1904;
  do {
    v113 = *(unsigned __int8*)(v110 + 26);
    v114 = v113 >= v111;
    if (v113 >= v111) {
      v115 = 0;
    }
    else {
      v115 = 8;
    }
    if (v114) {
      v112 = v110;
    }
    v110 = *(_QWORD*)(v110 + v115);
  } while (v110 != 0);
  if (v112 != v48 + 1904 && v111 >= *(unsigned __int8*)(v112 + 26)) {
    v116 = *(_WORD*)(v112 + 28) & 0xFFF;
  }
  else {
  LABEL_230:
    v116 = 0;
  }
  v117 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  if ((int)v117 < 1) {
    return;
  }
  v118 = *(_DWORD*)GameData_21d9988;
  v119 = 0;
  v120 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v117 - 1));
  if (v120 >= v116) {
    v121 = v116;
  }
  else {
    v121 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v117 - 1));
  }
  if (v116 >= v118) {
    v122 = v121;
  }
  else {
    v122 = *(_DWORD*)GameData_21d9988;
  }
  v123 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  do {
    v124 = (unsigned int)(v119 + v123) >> 1;
    v125 = *(_DWORD*)(GameData_21d9988 + 4LL * v124);
    if (v122 == v125) {
      v119 = v124 + 1;
      if ((int)(v124 + 1) <= 3) {
        goto LABEL_245;
      }
      goto LABEL_249;
    }
    if (v122 < v125) {
      v123 = (unsigned int)(v119 + v123) >> 1;
    }
    else {
      v119 = v124 + 1;
    }
  } while (v119 < v123);
  if (v119 <= 3) {
  LABEL_245:
    if (v119 == 2) {
      v126 = &GameData_1ab1dc0;
    }
    else {
      if (v119 != 3) {
        return;
      }
      v126 = &GameData_1af31c8;
    }
    goto LABEL_315;
  }
LABEL_249:
  if (v119 == 4) {
    v126 = &GameData_1adffe6;
  LABEL_315:
    v158 = v126;
    v157 = game_HashString(v126);
    GameRoutine_9b11a0(&GameData_21f61c0, &v157, 1);
    return;
  }
  if (v119 != 5) {
    return;
  }
  if (v108 == 0) {
  LABEL_264:
    LODWORD(v127) = 0;
    goto LABEL_265;
  }
  v127 = *(_QWORD*)(v108 + 392);
  if (v127 != 0) {
    v128 = *(_QWORD*)(v48 + 1904);
    if (v128 != 0) {
      v129 = *(unsigned __int8*)(v127 + 48);
      v130 = v48 + 1904;
      do {
        v131 = *(unsigned __int8*)(v128 + 26);
        v132 = v131 >= v129;
        if (v131 >= v129) {
          v133 = 0;
        }
        else {
          v133 = 8;
        }
        if (v132) {
          v130 = v128;
        }
        v128 = *(_QWORD*)(v128 + v133);
      } while (v128 != 0);
      if (v130 != v48 + 1904 && v129 >= *(unsigned __int8*)(v130 + 26)) {
        LODWORD(v127) = *(_WORD*)(v130 + 28) & 0xFFF;
        goto LABEL_265;
      }
    }
    goto LABEL_264;
  }
LABEL_265:
  v134 = 0;
  if (v120 >= (int)v127) {
    v135 = v127;
  }
  else {
    v135 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v117 - 1));
  }
  if ((int)v127 >= v118) {
    v136 = v135;
  }
  else {
    v136 = *(_DWORD*)GameData_21d9988;
  }
  v137 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  while (1) {
    v138 = (unsigned int)(v134 + v137) >> 1;
    v139 = *(_DWORD*)(GameData_21d9988 + 4LL * v138);
    if (v136 == v139) {
      break;
    }
    if (v136 < v139) {
      v137 = (unsigned int)(v134 + v137) >> 1;
    }
    else {
      v134 = v138 + 1;
    }
    if (v134 >= v137) {
      goto LABEL_286;
    }
  }
  v134 = v138 + 1;
LABEL_286:
  v140 = *(_QWORD**)(v48 + 1896);
  if (v140 == (_QWORD*)(v48 + 1904)) {
    v141 = 0;
  }
  else {
    v141 = 0;
    do {
      v142 = *((unsigned __int8*)v140 + 28);
      if (*((_BYTE*)v140 + 28) != 0) {
        v143 = 0;
        if (v120 >= v142) {
          v144 = *((unsigned __int8*)v140 + 28);
        }
        else {
          v144 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v117 - 1));
        }
        if (v118 <= v142) {
          v145 = v144;
        }
        else {
          v145 = *(_DWORD*)GameData_21d9988;
        }
        v146 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
        while (1) {
          v147 = (unsigned int)(v143 + v146) >> 1;
          v148 = *(_DWORD*)(GameData_21d9988 + 4LL * v147);
          if (v145 == v148) {
            break;
          }
          if (v145 < v148) {
            v146 = (unsigned int)(v143 + v146) >> 1;
          }
          else {
            v143 = v147 + 1;
          }
          if (v143 >= v146) {
            goto LABEL_304;
          }
        }
        v143 = v147 + 1;
      LABEL_304:
        if (v141 <= v143) {
          v141 = v143;
        }
      }
      v149 = (_QWORD*)v140[1];
      if (v149 != nullptr) {
        do {
          v150 = v149;
          v149 = (_QWORD*)*v149;
        } while (v149 != nullptr);
      }
      else {
        do {
          v150 = (_QWORD*)v140[2];
          v151 = v140 == (_QWORD*)*v150;
          v140 = v150;
        } while (!v151);
      }
      v140 = v150;
    } while (v150 != (_QWORD*)(v48 + 1904));
  }
  if (v134 == v141) {
    v126 = &GameData_1aa6471;
    goto LABEL_315;
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
  float v1;
  float v2;
  __int64 v4;
  long double v5;
  __int64 v6;
  char v7;
  float v8;
  float v9;

  v1 = *(float*)(a1 + 1352);
  v2 = 30.0;
  if (v1 < 30.0) {
    v7 = 0;
    v8 = 60.0 / (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
    if (v8 <= 0.0) {
      v8 = 1.0;
    }
    if ((*(_DWORD*)(game_g_game_setting + 944) & 0xB) != 0) {
      v8 = v8 * 8.0;
    }
    v9 = v1 + v8;
    if (v9 <= 30.0) {
      v2 = v9;
    }
    *(float*)(a1 + 1352) = v2;
  }
  else {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 208LL))(a1);
    v6 = *(_QWORD*)(a1 + 792);
    if (v6 != 0 && (GameRoutine_173fe30(v6) & 1) != 0) {
      v7 = 0;
    }
    else {
      v7 = GameRoutine_1563280(a1 + 168, v4, 0, v5) ^ 1;
    }
  }
  return v7 & 1;
}

__n128 TelopBattleExp_Unknown36(__int64 a1, __n128 result)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  long double v9;
  __int64 v10;
  __int64 v11[2];
  __int64 v12;
  __int64 v13;
  _QWORD v14[27];

  if (*(_BYTE*)(a1 + 928) == 1) {
    v14[25] = v2;
    v14[26] = v3;
    LayoutAccessor_1560070((void*)(&v12), a1 + 168, "L_AnimalLv");
    if (v13 != 0) {
      v4 = std___1___shared_weak_count_lock(v13);
      if (v4 != 0) {
        v5 = v12;
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          result = std___1___shared_weak_count___release_weak_alt1();
        }
        if (v5 != 0) {
          v11[0] = v12;
          v11[1] = v13;
          v6 = v13;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                    memory_order_relaxed);
          v7 = std___1___shared_weak_count_lock(v6);
          v8 = ui_LayoutAccessor_FindPane(v12, "Icon");
          v14[0] = 1119092736;
          *(__n128*)&v9 = ProcPopup_1736c50(1, v11, v8, (int*)v14);
          if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64, long double))(*(_QWORD*)v7 + 16LL))(v7, v9);
            std___1___shared_weak_count___release_weak_alt1();
          }
          std___1___shared_weak_count___release_weak_alt1();
          snd_Fade_Fade_10c830(v14, 0.0);
          snd_play_ff2d0((void*)(&v10), "SE_SYS_FriendShip_Up",
                         "SE_SYS_FriendShip_Up", v14, 0, 65537, 0, 0.0, 1.0);
          snd_Fade_Destroy_Fade(v14);
        }
      }
      if (v13 != 0) {
        return std___1___shared_weak_count___release_weak_alt1();
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

void TelopBattleExp_1745000(_QWORD* a1, int a2)
{
  int v2;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  void* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  long double v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _DWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 j;
  __int64 v33;
  const char* v34;
  int32x4_t* v35;
  __int128 v36;
  __int64* v37;
  __int64 v38;
  unsigned int v39;
  unsigned int i;
  __int64 v41;
  __int64 v42;
  __int128 v43;
  __int64 v44;
  __int64 v45;
  _QWORD v46[3];
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;

  v5 = LayoutAccessor_155fbe0(a1 + 21, "L_Lv");
  if (*(_QWORD*)(v5 + 16) == 0) {
    return;
  }
  v6 = (__int64*)v5;
  v7 = *(_QWORD*)(v5 + 8);
  if (v7 == 0) {
    return;
  }
  v8 = std___1___shared_weak_count_lock(v7);
  if (v8 == 0) {
    goto LABEL_11;
  }
  v9 = *v6;
  if (*v6 != 0) {
    v2 = *(unsigned __int8*)(v9 + 24);
    v10 = v9 + 152;
    if (v2 == 0) {
      v10 = 0;
    }
    v11 = v10 != v6[2];
  }
  else {
    v11 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt1();
    if (v11) {
      goto LABEL_11;
    }
  LABEL_15:
    if ((v2 & 1) == 0) {
      return;
    }
    goto LABEL_16;
  }
  if (!v11) {
    goto LABEL_15;
  }
LABEL_11:
  v12 = v6[1];
  if (v12 == 0 || *(_QWORD*)(v12 + 8) == -1) {
    return;
  }
LABEL_16:
  v13 = &GameData_224b000;
  v14 = GameData_212c540;
  v46[0] = 0;
  v46[1] = 0;
  v15 = *(_QWORD*)GameData_212c540;
  v16 = *((_QWORD*)GameData_212c540 + 1);
  LODWORD(GameData_224b6d8) = GameData_224b6d8 + 1;
  v18 = *(_QWORD*)GameData_212c548;
  v17 = *((_QWORD*)GameData_212c548 + 1);
  v48 = v15;
  v49 = v16;
  v52 = v15;
  v53 = v16;
  v50 = v18;
  v51 = v17;
  v47 = 9;
  v46[2] = "UI_Deco_StatusUP";
  v19 = Manager_bc6460(*eft_g_effectSystem_ptr[0], v46, 0);
  GameRoutine_14a10d0(&v44, v19, v20, &GameData_1a9f09e);
  v22 = v44;
  v23 = v45;
  if (v45 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 8), 1u,
                              memory_order_relaxed);
  }
  v24 = a1[175];
  a1[174] = v22;
  a1[175] = v23;
  if (v24 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      *(__n128*)&v21 = std___1___shared_weak_count___release_weak_alt1();
    }
    v23 = a1[175];
  }
  if (v23 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
      *(__n128*)&v21 = std___1___shared_weak_count___release_weak_alt1();
    }
  }
  v25 = v45;
  if (v45 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v25 + 16LL))(v25, v21);
    std___1___shared_weak_count___release_weak_alt1();
  }
  v26 = (_DWORD*)a1[174];
  LODWORD(GameData_224b6d8) = GameData_224b6d8 - 1;
  if (*(_QWORD*)v26 != 0 && *(_DWORD*)(*(_QWORD*)v26 + 16LL) == v26[2]) {
    v27 = a1[22];
    if (v27 != 0) {
      v28 = std___1___shared_weak_count_lock(v27);
      if (v28 != 0) {
        v29 = a1[21];
        if (v29 != 0) {
          LODWORD(v13) = *(_DWORD*)(v29 + 2372);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v29 != 0) {
            goto LABEL_36;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
          std___1___shared_weak_count___release_weak_alt1();
          if (v29 != 0) {
          LABEL_36:
            v30 = *(_QWORD*)v26;
            if (*(_QWORD*)v26 == 0) {
            LABEL_46:
              if ((atomic_load_explicit(
                       (atomic_uchar* volatile)&GameData_21a6130,
                       memory_order_acquire) &
                   1) == 0 &&
                  (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
                v42 = v14[1];
                *(_QWORD*)&GameData_21a6120 = *v14;
                *((_QWORD*)&GameData_21a6120 + 1) = v42;
                __cxa_guard_release(&GameData_21a6130);
              }
              if (a2 <= 9) {
                v34 = "N_Effect_Single";
              }
              else {
                v34 = "N_Effect_Double";
              }
              v43 = GameData_21a6120;
              v35 = (int32x4_t*)ui_LayoutAccessor_FindPane(v6, v34);
              v36 = v43;
              if (v35 != nullptr) {
                v36 =
                    LANES128_OF(vuzp2q_s32(vuzp2q_s32(v35[7], v35[8]), v35[7]))
                        .n128_u64[0];
              }
              v37 = (__int64*)a1[174];
              v38 = *v37;
              if (*v37 != 0 && *(_DWORD*)(v38 + 16) == *((_DWORD*)v37 + 2)) {
                v39 = *(_DWORD*)(v38 + 36);
                if (v39 != 0) {
                  for (i = 0; i < v39; ++i) {
                    if ((int)v39 > (int)i) {
                      v41 = *(_QWORD*)(v38 + 40 + 8LL * (int)i);
                      if (v41 != 0) {
                        *(_OWORD*)(v41 + 16) = v36;
                        *(_BYTE*)(v41 + 128) = 1;
                        v39 = *(_DWORD*)(v38 + 36);
                      }
                    }
                  }
                }
              }
              return;
            }
          LABEL_40:
            if (*(_DWORD*)(v30 + 16) == v26[2]) {
              v31 = *(unsigned int*)(v30 + 36);
              if ((_DWORD)v31 != 0) {
                for (j = 0; j < v31; ++j) {
                  v33 = *(_QWORD*)(v30 + 40 + 8 * j);
                  if (v33 != 0) {
                    *(_DWORD*)(v33 + 408) = (_DWORD)v13 + 1;
                    v31 = *(unsigned int*)(v30 + 36);
                  }
                }
              }
            }
            goto LABEL_46;
          }
        }
      }
    }
    LODWORD(v13) = 0;
    v30 = *(_QWORD*)v26;
    if (*(_QWORD*)v26 == 0) {
      goto LABEL_46;
    }
    goto LABEL_40;
  }
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

__int64 TelopBattleExp_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  bool v12;
  _QWORD* v13;
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
    std___1___shared_weak_count___release_weak();
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
    nn_mem_StandardAllocator_Free(v5 + v6, v3);
  }
  v7 = *(_QWORD**)(a1 + 1328);
  if (v7 != nullptr) {
    v8 = *(_QWORD**)(a1 + 1336);
    if (v7 == v8) {
      goto LABEL_14;
    }
    v9 = v8 - 20;
    v10 = v8 - 20;
    do {
      v11 = *v10;
      v10 -= 20;
      (*(void (**)(_QWORD*))(v11 + 24))(v9);
      v12 = v9 == v7;
      v9 = v10;
    } while (!v12);
    v13 = *(_QWORD**)(a1 + 1328);
    *(_QWORD*)(a1 + 1336) = v7;
    v7 = v13;
    if (v13 != nullptr) {
    LABEL_14:
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v14, v7);
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
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v16, v15);
    }
  }
  if ((*(_BYTE*)(a1 + 1280) & 1) != 0) {
    v17 = *(_QWORD*)(a1 + 1296);
    if (v17 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v18, v17);
    }
  }
  if ((*(_BYTE*)(a1 + 1256) & 1) != 0) {
    v19 = *(_QWORD*)(a1 + 1272);
    if (v19 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v20, v19);
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
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v22, v21);
    }
  }
  if ((*(_BYTE*)(a1 + 1144) & 1) != 0) {
    v23 = *(_QWORD*)(a1 + 1160);
    if (v23 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v24, v23);
    }
  }
  if ((*(_BYTE*)(a1 + 1120) & 1) != 0) {
    v25 = *(_QWORD*)(a1 + 1136);
    if (v25 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v26, v25);
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
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v28, v27);
    }
  }
  if ((*(_BYTE*)(a1 + 1016) & 1) != 0) {
    v29 = *(_QWORD*)(a1 + 1032);
    if (v29 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v30, v29);
    }
  }
  if ((*(_BYTE*)(a1 + 992) & 1) != 0) {
    v31 = *(_QWORD*)(a1 + 1008);
    if (v31 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v32, v31);
    }
  }
  return GameRoutine_1386f80(a1);
}

#pragma GCC visibility pop
