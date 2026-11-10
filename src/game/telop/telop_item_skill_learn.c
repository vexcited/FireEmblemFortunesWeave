#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 MapInfo_825790(_QWORD);
__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_telop_TelopItemSkillLearn_vtable[])();
extern __int64 GameData_21cd128;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TelopItemSkillLearn_Destructor(_QWORD* a1);
__int64 TelopItemSkillLearn_DeletingDestructor(_QWORD* a1);
__int64 TelopItemSkillLearn_Unknown56(__int64 a1);
__int64 MapInfo_825040(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__n128 game_ProcInst_Register(_QWORD);
extern __int64 (*game_telop_TelopResult_vtable[])();
extern __int64* GameData_212cff8[3];
extern __int64* GameData_2130240[8];
extern __int64* GameData_2130f98[4];
extern __int64 GameData_212c608[2];
extern __int64 GameData_2131678;
__int64 TelopItemSkillLearn_1767590(__int64 a1);

__int64 TelopItemSkillLearn_1767590(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 result;

  v2 = GameData_212c608[0];
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
  *(_QWORD*)a1 = v2 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  game_ProcInst_Register(a1);
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = a1 + 200;
  *(_QWORD*)(a1 + 240) = 0;
  *(_DWORD*)(a1 + 248) = 1065353216;
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
  *(_DWORD*)(a1 + 320) = 3;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_DWORD*)(a1 + 432) = 0x2000;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_DWORD*)(a1 + 520) = 1065353216;
  *(_QWORD*)(a1 + 324) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 536) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_DWORD*)(a1 + 552) = 1065353216;
  *(_WORD*)(a1 + 560) = 0;
  *(_WORD*)(a1 + 584) = 0;
  *(_BYTE*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 656) = 0;
  *(_QWORD*)(a1 + 648) = 0;
  *(_QWORD*)(a1 + 632) = 0;
  *(_WORD*)(a1 + 336) = 1;
  *(_QWORD*)(a1 + 624) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_QWORD*)(a1 + 688) = 0;
  *(_QWORD*)(a1 + 680) = 0;
  *(_QWORD*)(a1 + 672) = 0;
  *(_QWORD*)(a1 + 664) = 0;
  *(_DWORD*)(a1 + 696) = 1065353216;
  *(_QWORD*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 712) = 0;
  *(_QWORD*)(a1 + 704) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = a1 + 472;
  *(_DWORD*)(a1 + 728) = 1065353216;
  *(_WORD*)(a1 + 736) = 0;
  *(_WORD*)(a1 + 760) = 0;
  *(_BYTE*)(a1 + 784) = 0;
  *(_QWORD*)(a1 + 792) = 0;
  *(_QWORD*)(a1 + 640) = a1 + 648;
  v3 = GameData_2130240[0] + 2;
  *(_BYTE*)(a1 + 800) = 0;
  *(_BYTE*)(a1 + 816) = 0;
  *(_QWORD*)(a1 + 808) = v3;
  *(_QWORD*)a1 = game_telop_TelopResult_vtable;
  v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  *(_BYTE*)(a1 + 820) = 0;
  *(_WORD*)(a1 + 824) = 0;
  v5 = fw_memory_HeapManager_Allocate(v4, 296, 16, 0);
  v6 = GameData_2131678;
  *(_WORD*)(v5 + 108) = 256;
  *(_DWORD*)(v5 + 48) = 0x2000;
  *(_QWORD*)(v5 + 8) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_DWORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_DWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_WORD*)(v5 + 80) = 0;
  *(_DWORD*)(v5 + 112) = -1082130432;
  *(_WORD*)(v5 + 116) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_BYTE*)(v5 + 160) = 0;
  *(_BYTE*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 240) = 0;
  *(_QWORD*)(v5 + 248) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 192) = 0;
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_DWORD*)(v5 + 127) = 0;
  *(_QWORD*)(a1 + 856) = v5;
  *(_WORD*)(a1 + 960) = 0;
  *(_QWORD*)(a1 + 1016) = 0;
  *(_QWORD*)(a1 + 992) = 0;
  *(_QWORD*)(a1 + 1000) = 0;
  *(_BYTE*)(a1 + 952) = 0;
  *(_QWORD*)(a1 + 944) = 0;
  *(_QWORD*)(a1 + 936) = 0;
  *(_QWORD*)(a1 + 928) = 0;
  *(_QWORD*)(a1 + 920) = 0;
  *(_QWORD*)(a1 + 912) = 0;
  *(_QWORD*)(a1 + 904) = 0;
  *(_QWORD*)(a1 + 896) = 0;
  *(_QWORD*)(a1 + 888) = 0;
  *(_QWORD*)(a1 + 880) = 0;
  *(_QWORD*)(a1 + 872) = 0;
  *(_QWORD*)(a1 + 864) = 0;
  *(_QWORD*)(a1 + 1024) = 1065353216;
  *(_WORD*)(a1 + 1032) = 0;
  *(_WORD*)(a1 + 1040) = 0;
  *(_WORD*)(a1 + 1064) = 0;
  *(_WORD*)(a1 + 1088) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_DWORD*)(v5 + 292) = 2;
  *(_QWORD*)(v5 + 24) = 0;
  *(_QWORD*)(a1 + 848) = v5 + 24;
  *(_QWORD*)(a1 + 1007) = 0;
  v7 = GameData_2130f98[0] + 2;
  *(_QWORD*)(a1 + 1160) = 0;
  *(_BYTE*)(a1 + 1152) = 0;
  *(_QWORD*)(a1 + 1144) = 0;
  *(_QWORD*)(a1 + 1136) = 0;
  *(_QWORD*)(a1 + 1128) = 0;
  *(_QWORD*)(a1 + 1120) = 0;
  *(_QWORD*)(a1 + 984) = v7;
  v8 = GameData_212cff8[0];
  *(_QWORD*)a1 = game_telop_TelopItemSkillLearn_vtable;
  result = *v8;
  *(_QWORD*)(a1 + 1112) = 0;
  if (result != 0) {
    return MapInfo_825040(result, 14);
  }
  return result;
}

__int64 TelopItemSkillLearn_Destructor(_QWORD* a1)
{
  _QWORD* v1;

  *a1 = game_telop_TelopItemSkillLearn_vtable;
  if (GameData_21cd128 != 0) {
    v1 = a1;
    MapInfo_825790(GameData_21cd128);
    a1 = v1;
  }
  return game_telop_TelopResult_Destroy_TelopResult(a1);
}

__int64 TelopItemSkillLearn_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;

  *a1 = game_telop_TelopItemSkillLearn_vtable;
  if (GameData_21cd128 != 0) {
    MapInfo_825790(GameData_21cd128);
  }
  game_telop_TelopResult_Destroy_TelopResult(a1);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

__int64 TelopItemSkillLearn_Unknown56(__int64 a1)
{
  char v3[15];
  __int64 v4;

  v4 = 0;
  v3[12] = 0;
  *(_WORD*)&v3[13] = 0;
  strcpy(v3, "Pos_TalkOff");
  GameRoutine_1562cf0(a1 + 168, v3);
  return GameRoutine_1562cf0(a1 + 168, "Type_TitleOff");
}

#pragma GCC visibility pop
