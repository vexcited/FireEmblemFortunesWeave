#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_telop_TelopSubquestResult_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TelopSubquestResult_Destructor(_QWORD* a1);
__int64 TelopSubquestResult_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_1767f90(__int64, __int64, __int64);
__int64 GameRoutine_682bc0(_QWORD, _QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
extern __int64 GameData_1a8d218;
extern __int64 GameData_21ca310;
extern __int64 game_GameModeData_instance_;
__int64 game_telop_TelopSubquestResult_CreateBind_lambda1_Invoke(__int64 a1,
                                                                 __int64* a2);
__int64 GameRoutine_1374b10(_QWORD, _QWORD);
__int64 GameRoutine_1378190(_QWORD, _QWORD);
__int64 GameRoutine_16ae340(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Se_80e330(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__n128 game_ProcInst_Register(_QWORD);
extern _UNKNOWN* GameData_2130f68;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*game_telop_TelopResult_vtable[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212ceb0;
extern __int64* GameData_2130240[8];
extern __int64* GameData_2130f98[4];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212c608[2];
extern __int64 GameData_2131678;
__int64 game_telop_TelopSubquestResult_CreateBind_lambda0_Invoke_alt1(
    __int64 a1,
    __int64*
        a2) __asm__("game_telop_TelopSubquestResult_CreateBind_lambda0_Invoke");
__int64 GameRoutine_16ae340_alt1(__int64*,
                                 __int64) __asm__("GameRoutine_16ae340");
__int64 GameRoutine_930b90_alt1(__int64, __int64) __asm__("GameRoutine_930b90");
__int64 ProcInst_657850_alt1(__int64, __int64, __int64, char,
                             __int64) __asm__("ProcInst_657850");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_ProcInst_Register_alt1(__int64) __asm__("game_ProcInst_Register");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void GameRoutine_1374b10_alt1(__int64, int) __asm__("GameRoutine_1374b10");
void GameRoutine_1378190_alt1(__int64,
                              const char*) __asm__("GameRoutine_1378190");
void GameRoutine_6e3b50_alt1(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void Se_80e330_alt1(__int64, const char*) __asm__("Se_80e330");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_telop_TelopSubquestResult_CreateBind_lambda0_Invoke(__int64 a1,
                                                              __int64* a2);

__int64 TelopSubquestResult_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = a1[147];
  *a1 = game_telop_TelopSubquestResult_vtable;
  if (v1 != 0) {
    v3 = a1[148];
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v3) {
      goto LABEL_16;
    }
    v5 = v3 - 40;
    do {
      v8 = *(_BYTE*)(v5 - 8);
      *(_DWORD*)(v5 - 40) = 0;
      *(_QWORD*)(v5 - 48) = 0;
      if ((v8 & 1) != 0) {
        **(_BYTE**)(v5 + 8) = 0;
        *(_QWORD*)v5 = 0;
      }
      else {
        *(_WORD*)(v5 - 8) = 0;
      }
      GameRoutine_6e3b50(v5 - 32, *(_QWORD*)(v5 - 24));
      v9 = *(_BYTE*)(v5 - 8);
      *(_QWORD*)(v5 - 24) = 0;
      *(_QWORD*)(v5 - 16) = 0;
      *(_QWORD*)(v5 - 32) = v5 - 24;
      if ((v9 & 1) != 0) {
        v6 = *(_QWORD*)(v5 + 8);
        if (v6 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10, v6);
          v6 = *(_QWORD*)(v5 - 24);
        }
      }
      else {
        v6 = 0;
      }
      GameRoutine_6e3b50(v5 - 32, v6);
      v7 = v5 - 72;
      v5 -= 112;
    } while (v7 != v1);
    v11 = a1[147];
    a1[148] = v1;
    v1 = v11;
    if (v11 != 0) {
    LABEL_16:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v12, v1);
    }
  }
  return game_telop_TelopResult_Destroy_TelopResult(a1);
}

__int64 TelopSubquestResult_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = a1[147];
  *a1 = game_telop_TelopSubquestResult_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[148];
    if (v1 == v4) {
      goto LABEL_16;
    }
    v5 = v4 - 40;
    do {
      v8 = *(_BYTE*)(v5 - 8);
      *(_DWORD*)(v5 - 40) = 0;
      *(_QWORD*)(v5 - 48) = 0;
      if ((v8 & 1) != 0) {
        **(_BYTE**)(v5 + 8) = 0;
        *(_QWORD*)v5 = 0;
      }
      else {
        *(_WORD*)(v5 - 8) = 0;
      }
      GameRoutine_6e3b50(v5 - 32, *(_QWORD*)(v5 - 24));
      v9 = *(_BYTE*)(v5 - 8);
      *(_QWORD*)(v5 - 24) = 0;
      *(_QWORD*)(v5 - 16) = 0;
      *(_QWORD*)(v5 - 32) = v5 - 24;
      if ((v9 & 1) != 0) {
        v6 = *(_QWORD*)(v5 + 8);
        if (v6 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v6);
          v6 = *(_QWORD*)(v5 - 24);
        }
      }
      else {
        v6 = 0;
      }
      GameRoutine_6e3b50(v5 - 32, v6);
      v7 = v5 - 72;
      v5 -= 112;
    } while (v7 != v1);
    v11 = a1[147];
    a1[148] = v1;
    v1 = v11;
    if (v11 != 0) {
    LABEL_16:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12, v1);
    }
  }
  game_telop_TelopResult_Destroy_TelopResult(a1);
  v13 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v13 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13, a1);
}

void game_telop_TelopSubquestResult_CreateBind_lambda0_Invoke(__int64 a1,
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
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  _QWORD* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64* v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  __int16 v32;
  int v33;
  __int64 v34;
  unsigned __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  int v41;
  char v42;
  __int64 v43;
  int v44;
  int v45;
  unsigned __int64 v46;
  __int64 v47;
  _QWORD v48[2];
  _QWORD** v49;
  struct {
    _QWORD* v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    _BYTE* v54;
    __int64 v55;
    int v56;
  } v50_;

  v2 = *a2;
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1200, 16, 0);
  memset_alt1(v5 + 144, 0, 0x420u);
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
  *(_QWORD*)(v5 + 1192) = 0;
  *(_QWORD*)(v5 + 1184) = 0;
  *(_QWORD*)(v5 + 1176) = 0;
  *(_QWORD*)(v5 + 1168) = 0;
  *(_QWORD*)(v5 + 984) = v11;
  *(_QWORD*)v5 = game_telop_TelopSubquestResult_vtable;
  ProcInst_657850_alt1(v5, (__int64)GameData_2130f68,
                       (__int64)"TelopSubquestResult", 1, v2);
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
  *(_BYTE*)(v5 + 338) = 1;
  Se_80e330_alt1(v5, "FF_Quest_Clear");
  Se_80e330_alt1(v5, "SE_SYS_Telop_Clear");
  v14 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(v5 + 1168) = v14;
  v16 = (__int64*)(*(_QWORD*)(*(_QWORD*)v14 + 24LL) + 88LL);
  v15 = *v16;
  if ((v16[1] - *v16) << 28 >= 0x100000000LL) {
    v17 = v5 + 1168;
    v18 = 0;
    v19 = 0;
    v20 = GameData_212ceb0;
    v21 = GameData_212c8b0[0];
    do {
      v23 = v15 + v18;
      v24 = *(_QWORD*)(v15 + v18);
      v44 = *(_DWORD*)(v23 + 8);
      if (v24 != 0) {
        v25 = *(unsigned __int16*)(v24 + 16);
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8 * v25) +
                      73LL) == 17) {
          nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
          v26 = v21;
          v27 = game_map_MapRandom_instance__ptr[0];
          v28 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL));
          v29 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v30 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v27 + 1) = v28;
          v31 = (v30 >> 8) ^ (v29 >> 19) ^ v30 ^ v29;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v27) = v29;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v27 + 4) = v31;
          nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
          v32 = v31 - 1000 * ((v31 & 0x7FFFFFFFu) / 0x3E8);
          v21 = v26;
          v24 = (unsigned __int64)((16 * v32 + 16) & 0x3FF0 | 1u) << 32;
        }
        else {
          v24 = 0x100000000LL;
        }
      }
      else {
        v25 = 0;
      }
      v46 = v24 | v25;
      v33 = *(unsigned __int8*)v20;
      v45 = 8;
      if (v33 != 0) {
        v34 = *v20;
      }
      else {
        v34 = 0;
      }
      v47 = v34;
      WORD1(v48[0]) = 0;
      HIDWORD(v48[0]) = 0;
      v50_.v50 = nullptr;
      v50_.v51 = 0;
      v49 = &v50_.v50;
      v50_.v52 = 0;
      v50_.v53 = 0;
      v50_.v54 = nullptr;
      GameRoutine_930b90_alt1((__int64)v48, (__int64)v21);
      v35 = *(_QWORD*)(v5 + 1184);
      LODWORD(v50_.v55) = 0;
      HIDWORD(v50_.v55) = v44;
      v50_.v56 = -1;
      if (v35 >= *(_QWORD*)(v5 + 1192)) {
        v38 = GameRoutine_16ae340_alt1((__int64*)(v5 + 1176), (__int64)&v45);
      }
      else {
        v36 = v45;
        *(_QWORD*)(v35 + 4) = 0;
        *(_QWORD*)(v35 + 12) = 0;
        *(_DWORD*)v35 = v36;
        *(_QWORD*)(v35 + 4) = v46;
        if ((_BYTE)v47 != 0) {
          v37 = v47;
        }
        else {
          v37 = 0;
        }
        *(_QWORD*)(v35 + 48) = 0;
        v39 = v35 + 48;
        *(_QWORD*)(v39 - 36) = v37;
        *(_WORD*)(v39 - 22) = 0;
        *(_DWORD*)(v39 - 20) = 0;
        *(_QWORD*)(v39 - 8) = v39;
        *(_QWORD*)(v39 + 8) = 0;
        *(_QWORD*)(v39 + 16) = 0;
        *(_QWORD*)(v39 + 24) = 0;
        *(_QWORD*)(v39 + 32) = 0;
        GameRoutine_930b90_alt1(v39 - 24, (__int64)v48);
        v40 = v50_.v55;
        v41 = v50_.v56;
        *(_WORD*)(v39 + 56) = 0;
        v38 = v39 + 64;
        *(_DWORD*)(v39 + 48) = v41;
        *(_QWORD*)(v39 + 40) = v40;
      }
      v42 = v50_.v52;
      *(_QWORD*)(v5 + 1184) = v38;
      v48[0] = 0;
      LODWORD(v48[1]) = 0;
      if ((v42 & 1) != 0) {
        *v50_.v54 = 0;
        v50_.v53 = 0;
      }
      else {
        LOWORD(v50_.v52) = 0;
      }
      GameRoutine_6e3b50_alt1((__int64)&v49, v50_.v50);
      v50_.v50 = nullptr;
      v50_.v51 = 0;
      v49 = &v50_.v50;
      if ((v50_.v52 & 1) != 0) {
        v22 = v50_.v54;
        if (v50_.v54 != nullptr) {
          v43 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v43 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, (__int64)v50_.v54);
          v22 = v50_.v50;
        }
      }
      else {
        v22 = nullptr;
      }
      GameRoutine_6e3b50_alt1((__int64)&v49, v22);
      ++v19;
      v18 += 16;
      v15 = *(_QWORD*)(*(_QWORD*)(**(_QWORD**)v17 + 24LL) + 88LL);
    } while (
        v19 <
        (int)((unsigned __int64)(*(_QWORD*)(*(_QWORD*)(**(_QWORD**)v17 + 24LL) +
                                            96LL) -
                                 v15) >>
              4));
  }
}

__int64 game_telop_TelopSubquestResult_CreateBind_lambda1_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64 v2;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v13;
  __int64 v14;

  v2 = *a2;
  if (*(_BYTE*)(**(_QWORD**)(a1 + 8) + 112LL) == 7 &&
      (GameRoutine_682bc0(&v14, &GameData_1a8d218), v14 != 0) &&
      (v4 = *(_QWORD**)(GameData_21ca310 + 56)) != nullptr) {
    v5 = 250;
    while (1) {
      v6 = v4[55];
      if (v6 != 0 && *(_BYTE*)(v6 + 16) != 9 && v4[49] == v14) {
        break;
      }
      v7 = v4[333];
      if (v7 != 0 && *(_BYTE*)(v7 + 16) != 9 && v4[327] == v14) {
        v4 += 278;
        return GameRoutine_1767f90(v2, (__int64)v4, *(_QWORD*)(a1 + 16));
      }
      v8 = v4[611];
      if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 && v4[605] == v14) {
        v4 += 556;
        return GameRoutine_1767f90(v2, (__int64)v4, *(_QWORD*)(a1 + 16));
      }
      v9 = v4[889];
      if (v9 != 0 && *(_BYTE*)(v9 + 16) != 9 && v4[883] == v14) {
        v4 += 834;
        return GameRoutine_1767f90(v2, (__int64)v4, *(_QWORD*)(a1 + 16));
      }
      v10 = v4[1167];
      if (v10 != 0 && *(_BYTE*)(v10 + 16) != 9 && v4[1161] == v14) {
        v4 += 1112;
        return GameRoutine_1767f90(v2, (__int64)v4, *(_QWORD*)(a1 + 16));
      }
      v4 += 1390;
      v5 -= 5;
      if (v5 == 0) {
        goto LABEL_22;
      }
    }
  }
  else {
  LABEL_22:
    v11 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v11 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    }
    v14 = v11;
    v13 = 241;
    v4 = (_QWORD*)game_UnitPool_Find_6ead60(&v14, &v13);
  }
  return GameRoutine_1767f90(v2, (__int64)v4, *(_QWORD*)(a1 + 16));
}

#pragma GCC visibility pop
