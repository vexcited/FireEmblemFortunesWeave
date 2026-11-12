#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_136afb0(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1760e40(__int64, unsigned int);
__int64 GameRoutine_1840a20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_974b60(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern _UNKNOWN GameData_1af7258;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char** msg_MessageManager_empty_text__ptr;
__int64 TelopScoutSuccessResult_Unknown57(__int64 a1);
__int64 GameRoutine_162aea0(_QWORD, _QWORD);
__int64 GameRoutine_887920(_QWORD, _QWORD);
extern _UNKNOWN GameData_1ab1fcb;
__int64
game_telop_TelopScoutSuccessResult_CreateBind_lambda1_Invoke(__int64 a1,
                                                             __int64* a2);
__int64 GameRoutine_1374b10(_QWORD, _QWORD);
__int64 GameRoutine_1378190(_QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Se_80e330(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__n128 game_ProcInst_Register(_QWORD);
extern _UNKNOWN* GameData_2130f68;
extern __int64 (*game_telop_TelopResult_vtable[])();
extern __int64 (*game_telop_TelopScoutSuccessResult_vtable[])();
extern __int64* GameData_2130240[8];
extern __int64* GameData_2130f98[4];
extern __int64 GameData_212c608[2];
extern __int64 GameData_2131678;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 game_telop_TelopScoutSuccessResult_CreateBind_lambda0_Invoke_alt1(
    __int64 a1, __int64* a2) __asm__("game_telop_TelopScoutSuccessResult_"
                                     "CreateBind_lambda0_Invoke");
__int64 ProcInst_657850_alt1(__int64, __int64, __int64, char,
                             __int64) __asm__("ProcInst_657850");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_ProcInst_Register_alt1(__int64) __asm__("game_ProcInst_Register");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
void GameRoutine_1374b10_alt1(__int64, int) __asm__("GameRoutine_1374b10");
void GameRoutine_1378190_alt1(__int64,
                              const char*) __asm__("GameRoutine_1378190");
void Se_80e330_alt1(__int64, const char*) __asm__("Se_80e330");
void game_telop_TelopScoutSuccessResult_CreateBind_lambda0_Invoke(__int64 a1,
                                                                  __int64* a2);

__int64 TelopScoutSuccessResult_Unknown57(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  const char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _BYTE* v18;
  _QWORD v19[4];
  int v20;
  int v21;
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
  __int64 v33;
  __int64 v34;

  v2 = GameRoutine_1760e40(a1, 0xEu);
  v3 = msg_MessageManager_instance__ptr[0];
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
      (unsigned int)strcmp(*(_QWORD*)(*(_QWORD*)(a1 + 1168) + 8LL),
                           &GameData_1af7258) == 0) {
    v7 = "MID_Sys_Result_Msg_Join_Maxim";
  }
  else {
    v4 = *(_DWORD*)(a1 + 1176);
    v5 = GameRoutine_67ed20(*(_QWORD*)(a1 + 1168));
    if (v5 != 0) {
      v6 = v5;
    }
    else {
      v6 = (__int64)*msg_MessageManager_empty_text__ptr;
    }
    GameRoutine_60a020(*v3 + 14704, v6);
    if (v4 == 2) {
      v7 = "MID_Sys_Result_Msg_Join_SideStory";
    }
    else {
      v7 = "MID_Sys_Result_Msg_Join";
    }
  }
  v8 = *v3;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  v26 = -1;
  v27 = -1;
  v28 = -1;
  v29 = -1;
  v30 = -1;
  v31 = -1;
  v32 = -1;
  v33 = -1;
  v19[0] = GameData_212e348 + 2;
  v19[1] = 0xFFFF0001FFFF0000LL;
  v19[2] = 0xFFFF0004FFFF0002LL;
  v19[3] = 0xFFFF0006FFFF0005LL;
  v34 = 8;
  v20 = -65529;
  v21 = -65528;
  v9 = GameRoutine_a4dbe0(v8, v7, 0, v19);
  if (v9 != 0) {
    v10 = v9;
    v11 = ui_LayoutAccessor_FindTextBox(v2, "T_Txt");
    if (v11 != 0) {
      GameRoutine_156c5d0(v11, v10, 0);
    }
  }
  v12 = ui_LayoutAccessor_FindPane(v2, "Face");
  if (v12 != 0) {
    v12 = __dynamic_cast(v12, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_1840a20(v12, 0, *(_QWORD*)(a1 + 1168), 6, 1);
  result = ui_LayoutAccessor_FindPane(v2, "Clan");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    v14 = result;
    v15 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      return result;
    }
  }
  else {
    v14 = 0;
    v15 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      return result;
    }
  }
  v16 = *(_QWORD*)(v15 + 96);
  if (v16 != 0) {
    v17 = *(_QWORD**)(v16 + 336);
    if (v17 != nullptr) {
      while (v17[10] != 0) {
        result = GameRoutine_974b60(v17[3]);
        if ((result & 1) == 0) {
          break;
        }
        v17 = (_QWORD*)v17[10];
      }
      if (v14 != 0) {
        v18 = (_BYTE*)v17[6];
        if (v18 != nullptr && *v18 != 0) {
          result = GameRoutine_136afb0(ui_Manager_instance_ + 1264, 5);
          if ((result & 1) != 0) {
            return GameRoutine_136a920(ui_Manager_instance_ + 1264, v14, 0, 5,
                                       v17[6]);
          }
        }
      }
    }
  }
  return result;
}

void game_telop_TelopScoutSuccessResult_CreateBind_lambda0_Invoke(__int64 a1,
                                                                  __int64* a2)
{
  __int64 v2;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  char* v12;
  char* v13;
  int v14;

  v2 = *a2;
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1184, 16, 0);
  memset_alt1(v5 + 144, 0, 0x410u);
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
  game_ProcInst_Register_alt1(v5);
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = v5 + 200;
  *(_QWORD*)(v5 + 240) = 0;
  *(_DWORD*)(v5 + 248) = 1065353216;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 296) = 0;
  *(_QWORD*)(v5 + 304) = 0;
  *(_QWORD*)(v5 + 312) = 0;
  *(_DWORD*)(v5 + 332) = 0;
  *(_BYTE*)(v5 + 338) = 0;
  *(_QWORD*)(v5 + 344) = 0;
  *(_QWORD*)(v5 + 352) = 0;
  *(_QWORD*)(v5 + 360) = 0;
  *(_QWORD*)(v5 + 368) = 0;
  *(_DWORD*)(v5 + 320) = 3;
  *(_QWORD*)(v5 + 376) = 0;
  *(_QWORD*)(v5 + 384) = 0;
  *(_QWORD*)(v5 + 392) = 0;
  *(_QWORD*)(v5 + 400) = 0;
  *(_QWORD*)(v5 + 408) = 0;
  *(_QWORD*)(v5 + 416) = 0;
  *(_QWORD*)(v5 + 424) = 0;
  *(_DWORD*)(v5 + 432) = 0x2000;
  *(_QWORD*)(v5 + 472) = 0;
  *(_QWORD*)(v5 + 480) = 0;
  *(_QWORD*)(v5 + 440) = 0;
  *(_QWORD*)(v5 + 448) = 0;
  *(_QWORD*)(v5 + 504) = 0;
  *(_QWORD*)(v5 + 512) = 0;
  *(_QWORD*)(v5 + 488) = 0;
  *(_QWORD*)(v5 + 496) = 0;
  *(_DWORD*)(v5 + 520) = 1065353216;
  *(_QWORD*)(v5 + 324) = 0;
  *(_QWORD*)(v5 + 528) = 0;
  *(_QWORD*)(v5 + 536) = 0;
  *(_QWORD*)(v5 + 544) = 0;
  *(_DWORD*)(v5 + 552) = 1065353216;
  *(_WORD*)(v5 + 560) = 0;
  *(_WORD*)(v5 + 584) = 0;
  *(_BYTE*)(v5 + 608) = 0;
  *(_QWORD*)(v5 + 656) = 0;
  *(_QWORD*)(v5 + 648) = 0;
  *(_QWORD*)(v5 + 632) = 0;
  *(_WORD*)(v5 + 336) = 1;
  *(_QWORD*)(v5 + 624) = 0;
  *(_QWORD*)(v5 + 616) = 0;
  *(_QWORD*)(v5 + 688) = 0;
  *(_QWORD*)(v5 + 680) = 0;
  *(_QWORD*)(v5 + 672) = 0;
  *(_QWORD*)(v5 + 664) = 0;
  *(_DWORD*)(v5 + 696) = 1065353216;
  *(_QWORD*)(v5 + 720) = 0;
  *(_QWORD*)(v5 + 712) = 0;
  *(_QWORD*)(v5 + 704) = 0;
  *(_QWORD*)(v5 + 456) = 0;
  *(_QWORD*)(v5 + 464) = v5 + 472;
  *(_DWORD*)(v5 + 728) = 1065353216;
  *(_WORD*)(v5 + 736) = 0;
  *(_WORD*)(v5 + 760) = 0;
  *(_BYTE*)(v5 + 784) = 0;
  *(_QWORD*)(v5 + 792) = 0;
  *(_BYTE*)(v5 + 800) = 0;
  *(_QWORD*)(v5 + 640) = v5 + 648;
  v7 = *v4;
  v8 = GameData_2130240[0] + 2;
  *(_BYTE*)(v5 + 816) = 0;
  *(_BYTE*)(v5 + 820) = 0;
  *(_WORD*)(v5 + 824) = 0;
  *(_QWORD*)(v5 + 808) = v8;
  *(_QWORD*)v5 = game_telop_TelopResult_vtable;
  v9 = fw_memory_HeapManager_Allocate_alt1(v7, 296, 16, 0);
  *(_DWORD*)(v9 + 48) = 0x2000;
  v10 = GameData_2131678;
  *(_WORD*)(v9 + 108) = 256;
  *(_QWORD*)(v9 + 8) = 0;
  *(_QWORD*)(v9 + 16) = 0;
  *(_DWORD*)(v9 + 32) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_DWORD*)(v9 + 104) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_WORD*)(v9 + 80) = 0;
  *(_DWORD*)(v9 + 112) = -1082130432;
  *(_WORD*)(v9 + 116) = 0;
  *(_WORD*)(v9 + 136) = 0;
  *(_BYTE*)(v9 + 160) = 0;
  *(_BYTE*)(v9 + 288) = 0;
  *(_QWORD*)(v9 + 272) = 0;
  *(_QWORD*)(v9 + 280) = 0;
  *(_QWORD*)(v9 + 256) = 0;
  *(_QWORD*)(v9 + 264) = 0;
  *(_QWORD*)(v9 + 240) = 0;
  *(_QWORD*)(v9 + 248) = 0;
  *(_QWORD*)(v9 + 224) = 0;
  *(_QWORD*)(v9 + 232) = 0;
  *(_QWORD*)(v9 + 208) = 0;
  *(_QWORD*)(v9 + 216) = 0;
  *(_QWORD*)(v9 + 192) = 0;
  *(_QWORD*)(v9 + 200) = 0;
  *(_QWORD*)(v9 + 176) = 0;
  *(_QWORD*)(v9 + 184) = 0;
  *(_QWORD*)(v9 + 168) = 0;
  *(_QWORD*)(v9 + 120) = 0;
  *(_DWORD*)(v9 + 127) = 0;
  *(_QWORD*)(v5 + 856) = v9;
  *(_WORD*)(v5 + 960) = 0;
  *(_QWORD*)(v5 + 1016) = 0;
  *(_QWORD*)(v5 + 992) = 0;
  *(_QWORD*)(v5 + 1000) = 0;
  *(_BYTE*)(v5 + 952) = 0;
  *(_QWORD*)(v5 + 944) = 0;
  *(_QWORD*)(v5 + 936) = 0;
  *(_QWORD*)(v5 + 928) = 0;
  *(_QWORD*)(v5 + 920) = 0;
  *(_QWORD*)(v5 + 912) = 0;
  *(_QWORD*)(v5 + 904) = 0;
  *(_QWORD*)(v5 + 896) = 0;
  *(_QWORD*)(v5 + 888) = 0;
  *(_QWORD*)(v5 + 880) = 0;
  *(_QWORD*)(v5 + 872) = 0;
  *(_QWORD*)(v5 + 864) = 0;
  *(_QWORD*)(v5 + 1024) = 1065353216;
  *(_WORD*)(v5 + 1032) = 0;
  *(_WORD*)(v5 + 1040) = 0;
  *(_WORD*)(v5 + 1064) = 0;
  *(_WORD*)(v5 + 1088) = 0;
  *(_QWORD*)v9 = v10 + 16;
  *(_DWORD*)(v9 + 292) = 2;
  *(_QWORD*)(v9 + 24) = 0;
  *(_QWORD*)(v5 + 848) = v9 + 24;
  *(_QWORD*)(v5 + 1007) = 0;
  v11 = GameData_2130f98[0] + 2;
  *(_QWORD*)(v5 + 1160) = 0;
  *(_BYTE*)(v5 + 1152) = 0;
  *(_QWORD*)(v5 + 1144) = 0;
  *(_QWORD*)(v5 + 1136) = 0;
  *(_QWORD*)(v5 + 1128) = 0;
  *(_QWORD*)(v5 + 1120) = 0;
  *(_QWORD*)(v5 + 1112) = 0;
  *(_QWORD*)(v5 + 1168) = 0;
  *(_DWORD*)(v5 + 1176) = 0;
  *(_QWORD*)(v5 + 984) = v11;
  *(_QWORD*)v5 = game_telop_TelopScoutSuccessResult_vtable;
  ProcInst_657850_alt1(v5, (__int64)GameData_2130f68,
                       (__int64)"TelopScoutSuccessResult", 1, v2);
  if ((*(_BYTE*)(v5 + 272) & 1) != 0) {
    *(_QWORD*)(v5 + 280) = 17;
    v12 = *(char**)(v5 + 288);
  }
  else {
    *(_BYTE*)(v5 + 272) = 34;
    v12 = (char*)(v5 + 273);
  }
  strcpy(v12, "Layout/Common.arc");
  if ((*(_BYTE*)(v5 + 296) & 1) != 0) {
    *(_QWORD*)(v5 + 304) = 16;
    v13 = *(char**)(v5 + 312);
  }
  else {
    *(_BYTE*)(v5 + 296) = 32;
    v13 = (char*)(v5 + 297);
  }
  strcpy(v13, "Common_TlpResult");
  GameRoutine_1374b10_alt1(v5, 2);
  Se_80e330_alt1(v5, "SE_SYS_Telop_Mini_In");
  GameRoutine_1378190_alt1(v5, "SE_SYS_Telop_Mini_Out");
  v14 = *(_DWORD*)(a1 + 16);
  *(_QWORD*)(v5 + 1168) = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(v5 + 1176) = v14;
  if (v14 != 0) {
    Se_80e330_alt1(v5, "SE_SYS_Telop_Join_In");
    GameRoutine_1378190_alt1(v5, "SE_SYS_Telop_Join_Out");
  }
  else {
    Se_80e330_alt1(v5, "FF_Scout_Success");
  }
}

__int64

game_telop_TelopScoutSuccessResult_CreateBind_lambda1_Invoke(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  char v4;

  v2 = *a2;
  GameRoutine_887920(&v4, &GameData_1ab1fcb);
  return GameRoutine_162aea0(v2, &v4);
}

#pragma GCC visibility pop
