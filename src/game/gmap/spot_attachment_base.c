#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Dir_70d7a0(_QWORD);
__int64 Dir_70dd80(_QWORD, _QWORD);
__int64 GameRoutine_14d5090();
__int64 GameRoutine_14d51a0();
__int64 GameRoutine_14d5220();
__int64 GameRoutine_14d52b0();
__int64 GameRoutine_70e760(_QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(_QWORD);
extern _DWORD game_script_hub_schedule_kHourCycles[24];
extern _UNKNOWN GameData_2252200;
extern __int64 (*game_gmap_ProcTutorialAttachmentResult_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_2252048;
extern __int64 GameData_2252050;
extern __int64 GameData_2252058;
extern __int64 GameData_2252068;
extern __int64 GameData_2252078;
extern __int64 GameData_2252088;
extern __int64 GameData_2252090;
extern __int64 GameData_2252098;
extern __int64 GameData_22520a8;
extern __int64 GameData_22520b8;
extern __int64 GameData_22520c8;
extern __int64 GameData_22520d0;
extern __int64 GameData_22520d8;
extern __int64 GameData_22520e8;
extern __int64 GameData_22520f8;
extern __int64 GameData_2252108;
extern __int64 GameData_2252110;
extern __int64 GameData_2252118;
extern __int64 GameData_2252128;
extern __int64 GameData_2252138;
extern __int64 GameData_2252148;
extern __int64 GameData_2252150;
extern __int64 GameData_2252158;
extern __int64 GameData_2252168;
extern __int64 GameData_2252178;
extern __int64 GameData_2252188;
extern __int64 GameData_2252190;
extern __int64 GameData_2252198;
extern __int64 GameData_22521a8;
extern __int64 GameData_22521b8;
extern __int64 GameData_22521c8;
extern __int64 GameData_22521d0;
extern __int64 GameData_22521d8;
extern __int64 GameData_22521e8;
extern __int64 GameData_22521f8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern char GameData_2252040;
extern char GameData_2252080;
extern char GameData_22520c0;
extern char GameData_2252100;
extern char GameData_2252140;
extern char GameData_2252180;
extern char GameData_22521c0;
extern int GameData_21caa04;
extern int GameData_2252060;
extern int GameData_2252070;
extern int GameData_22520a0;
extern int GameData_22520b0;
extern int GameData_22520e0;
extern int GameData_22520f0;
extern int GameData_2252120;
extern int GameData_2252130;
extern int GameData_2252160;
extern int GameData_2252170;
extern int GameData_22521a0;
extern int GameData_22521b0;
extern int GameData_22521e0;
extern int GameData_22521f0;
bool SpotAttachmentBase_14d4740(__int64 a1);
__int64 SpotAttachmentBase_14d4820(__int64 a1, __int64 a2);
__int64 SpotAttachmentBase_14d4a20(__int64 a1, __int64 a2);
__int64 SpotAttachmentBase_14d4c90(__int64 result, __int64 a2, int a3);
__int64 SpotAttachmentBase_14d4e10(__int64 a1);

bool SpotAttachmentBase_14d4740(__int64 a1)
{
  __int64 v1;

  if (game_gmap_GmapClock_instance_ != 0) {
    v1 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v1 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  return (int)GameRoutine_70e760(v1, a1 + 20) > 1;
}

__int64 SpotAttachmentBase_14d4820(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2252200,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2252200) != 0) {
    GameData_2252040 = 14;
    GameData_22520c8 = 0;
    GameData_22520d0 = (__int64)GameRoutine_14d51a0;
    GameData_2252058 = 0;
    GameData_2252060 = 0;
    GameData_2252068 = 0;
    GameData_2252070 = 0;
    GameData_2252078 = 0;
    GameData_2252088 = 0;
    GameData_2252090 = 0;
    GameData_2252098 = 0;
    GameData_22520a0 = 1;
    GameData_2252048 = 0;
    GameData_2252050 = (__int64)GameRoutine_14d5090;
    GameData_22520a8 = 0;
    GameData_22520b0 = 500;
    GameData_22520b8 = 0;
    GameData_22520c0 = 13;
    GameData_22520d8 = 0;
    GameData_22520e0 = 0;
    GameData_22520e8 = 0;
    GameData_22520f0 = 0;
    GameData_22520f8 = 0;
    GameData_2252100 = 13;
    GameData_2252080 = 4;
    GameData_2252140 = 4;
    GameData_2252108 = 0;
    GameData_2252110 = (__int64)GameRoutine_14d5220;
    GameData_2252118 = 0;
    GameData_2252120 = 0;
    GameData_2252128 = 0;
    GameData_2252130 = 0;
    GameData_2252138 = 0;
    GameData_2252150 = 0;
    GameData_2252158 = 0;
    GameData_2252148 = 0;
    GameData_2252160 = 1;
    GameData_2252168 = 0;
    GameData_2252170 = 500;
    GameData_2252178 = 0;
    GameData_2252180 = 13;
    GameData_2252188 = 0;
    GameData_2252190 = (__int64)GameRoutine_14d52b0;
    GameData_2252198 = 0;
    GameData_22521a0 = 0;
    GameData_22521a8 = 0;
    GameData_22521b0 = 0;
    GameData_22521b8 = 0;
    GameData_22521c0 = 0;
    GameData_22521e8 = 0;
    GameData_22521f0 = 0;
    GameData_22521f8 = 0;
    GameData_22521e0 = 0;
    GameData_22521d0 = 0;
    GameData_22521d8 = 0;
    GameData_22521c8 = 0;
    __cxa_guard_release(&GameData_2252200);
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      168, 16, 0);
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
  *(_QWORD*)(v4 + 152) = a2;
  *(_DWORD*)(v4 + 160) = 0;
  *(_QWORD*)v4 = game_gmap_ProcTutorialAttachmentResult_vtable;
  return ProcInst_657850(v4, &GameData_2252040, "ProcTutorialAttachmentResult",
                         1, a1);
}

__int64 SpotAttachmentBase_14d4a20(__int64 a1, __int64 a2)
{
  __int64 result;
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
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  v5 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = result;
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = 9;
  v7 = ((__int64)*(__int16*)(a1 + 22) << 24) +
       ((__int64)*(__int16*)(a1 + 20) << 32) +
       ((__int64)*(__int16*)(a1 + 24) << 18) +
       ((__int64)*(__int16*)(a1 + 26) << 12) +
       ((__int64)*(__int16*)(a1 + 28) << 6) + *(__int16*)(a1 + 30);
  v8 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = v7;
  v9 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = BYTE1(v7);
  v10 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = BYTE2(v7);
  v11 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v11 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = BYTE3(v7);
  v12 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v12 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = BYTE4(v7);
  v13 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v13 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = BYTE5(v7);
  v14 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v14 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = BYTE6(v7);
  v15 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v15 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = HIBYTE(v7);
  v16 = ((__int64)*(__int16*)(a1 + 10) << 24) +
        ((__int64)*(__int16*)(a1 + 8) << 32) +
        ((__int64)*(__int16*)(a1 + 12) << 18) +
        ((__int64)*(__int16*)(a1 + 14) << 12) +
        ((__int64)*(__int16*)(a1 + 16) << 6) + *(__int16*)(a1 + 18);
  v17 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v17 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = v16;
  v18 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v18 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = BYTE1(v16);
  v19 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v19 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v19) = BYTE2(v16);
  v20 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v20 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = BYTE3(v16);
  v21 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v21 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = BYTE4(v16);
  v22 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v22 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = BYTE5(v16);
  v23 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v23 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = BYTE6(v16);
  v24 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v24 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v24) = HIBYTE(v16);
  v25 = *(int*)(a2 + 20);
  LOBYTE(v16) = *(_BYTE*)(a1 + 41);
  *(_DWORD*)(a2 + 20) = v25 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v25) = v16;
  v26 = *(int*)(a2 + 20);
  LOBYTE(v16) = *(_BYTE*)(a1 + 40);
  *(_DWORD*)(a2 + 20) = v26 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v26) = v16;
  return result;
}

__int64 SpotAttachmentBase_14d4c90(__int64 result, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v4;
  unsigned __int8 v5;
  int v6;
  unsigned int v7;
  __int16 v8;
  __int16 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  unsigned int v14;
  __int16 v15;
  __int16 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;

  v3 = *(int*)(a2 + 20);
  v4 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v3 + 1;
  v5 = *(_BYTE*)(v4 + v3);
  *(_DWORD*)(a2 + 20) = v3 + 2;
  v6 = *(unsigned __int8*)(v4 + v3 + 1);
  *(_DWORD*)(a2 + 20) = v3 + 3;
  v7 = *(unsigned __int8*)(v4 + v3 + 2);
  *(_DWORD*)(a2 + 20) = v3 + 4;
  v8 = *(unsigned __int8*)(v4 + v3 + 3);
  *(_DWORD*)(a2 + 20) = v3 + 5;
  v9 = *(unsigned __int8*)(v4 + v3 + 4);
  *(_DWORD*)(a2 + 20) = v3 + 6;
  LOWORD(v4) = *(unsigned __int8*)(v4 + v3 + 5);
  *(_DWORD*)(a2 + 20) = v3 + 8;
  v10 = v5 | ((unsigned __int8)v6 << 8);
  *(_WORD*)(result + 24) = v7 >> 2;
  *(_WORD*)(result + 22) = v8;
  *(_WORD*)(result + 26) = (((v6 << 8) | (v7 << 16)) >> 12) & 0x3F;
  *(_WORD*)(result + 28) = (v10 >> 6) & 0x3F;
  *(_WORD*)(result + 20) = v9 | ((_WORD)v4 << 8);
  *(_WORD*)(result + 30) = v10 & 0x3F;
  v11 = *(int*)(a2 + 20);
  v12 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v11 + 1;
  LOBYTE(v10) = *(_BYTE*)(v12 + v11);
  *(_DWORD*)(a2 + 20) = v11 + 2;
  v13 = *(unsigned __int8*)(v12 + v11 + 1);
  *(_DWORD*)(a2 + 20) = v11 + 3;
  v14 = *(unsigned __int8*)(v12 + v11 + 2);
  *(_DWORD*)(a2 + 20) = v11 + 4;
  v15 = *(unsigned __int8*)(v12 + v11 + 3);
  *(_DWORD*)(a2 + 20) = v11 + 5;
  v16 = *(unsigned __int8*)(v12 + v11 + 4);
  *(_DWORD*)(a2 + 20) = v11 + 6;
  LOWORD(v12) = *(unsigned __int8*)(v12 + v11 + 5);
  *(_DWORD*)(a2 + 20) = v11 + 8;
  v17 = (unsigned __int8)v10 | ((unsigned __int8)v13 << 8);
  *(_WORD*)(result + 12) = v14 >> 2;
  *(_WORD*)(result + 10) = v15;
  *(_WORD*)(result + 14) = (((v13 << 8) | (v14 << 16)) >> 12) & 0x3F;
  *(_WORD*)(result + 16) = (v17 >> 6) & 0x3F;
  *(_WORD*)(result + 8) = v16 | ((_WORD)v12 << 8);
  *(_WORD*)(result + 18) = v17 & 0x3F;
  if (a3 >= 1) {
    v18 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v18 + 1;
    *(_BYTE*)(result + 41) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) != 0;
    if ((unsigned int)a3 >= 6) {
      v19 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v19 + 1;
      *(_BYTE*)(result + 40) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v19) != 0;
    }
  }
  return result;
}

__int64 SpotAttachmentBase_14d4e10(__int64 a1)
{
  __int16 v1;
  __int64 v2;
  __int16 v4;
  __int16 v5;
  __int16 v6;
  __int16 v7;
  __int16 v8;
  __int16 v9;
  __int16 v10;
  __int64 result;
  __int16 v12;
  __int16 v13;
  __int16 v14;
  __int16 v15;
  __int16 v16;
  __int16 v17;
  __int16 v18;
  int v19;
  __int16 v20;
  int v21;
  __int16 v22;
  int v23;
  __int16 v24;
  int v25;

  v2 = a1 + 20;
  v1 = *(_WORD*)(a1 + 20);
  v21 = 0;
  v18 = v1;
  v19 = *(_DWORD*)(a1 + 22);
  v20 = *(_WORD*)(a1 + 26) - 6;
  Dir_70d7a0(&v18);
  if ((__int16)v19 * v18 * SHIWORD(v19) != 0) {
    v25 = 0;
    v23 = v19;
    v22 = v18;
    v24 = 6 * game_script_hub_schedule_kHourCycles[v20 % 24] % 0x18u;
    Dir_70dd80(&v22, v2);
    v4 = v22;
    v5 = v23;
    v6 = HIWORD(v23);
    v7 = v24;
    v8 = v25;
    v9 = HIWORD(v25);
  }
  else {
    v4 = game_gmap_GmapClock_kDefaultTime;
    v5 = WORD1(game_gmap_GmapClock_kDefaultTime);
    v6 = WORD2(game_gmap_GmapClock_kDefaultTime);
    v7 = HIWORD(game_gmap_GmapClock_kDefaultTime);
    v8 = GameData_21caa04;
    v9 = HIWORD(GameData_21caa04);
  }
  *(_WORD*)(a1 + 20) = v4;
  v10 = *(_WORD*)(a1 + 8);
  *(_WORD*)(a1 + 22) = v5;
  *(_WORD*)(a1 + 24) = v6;
  *(_WORD*)(a1 + 26) = v7;
  *(_WORD*)(a1 + 28) = v8;
  *(_WORD*)(a1 + 30) = v9;
  v21 = 0;
  v18 = v10;
  v19 = *(_DWORD*)(a1 + 10);
  v20 = *(_WORD*)(a1 + 14) - 6;
  result = Dir_70d7a0(&v18);
  if ((__int16)v19 * v18 * SHIWORD(v19) != 0) {
    v25 = 0;
    v23 = v19;
    v22 = v18;
    v24 = 6 * game_script_hub_schedule_kHourCycles[v20 % 24] % 0x18u;
    result = Dir_70dd80(&v22, a1 + 8);
    v12 = v22;
    v13 = v23;
    v14 = HIWORD(v23);
    v15 = v24;
    v16 = v25;
    v17 = HIWORD(v25);
  }
  else {
    v12 = game_gmap_GmapClock_kDefaultTime;
    v13 = WORD1(game_gmap_GmapClock_kDefaultTime);
    v14 = WORD2(game_gmap_GmapClock_kDefaultTime);
    v15 = HIWORD(game_gmap_GmapClock_kDefaultTime);
    v16 = GameData_21caa04;
    v17 = HIWORD(GameData_21caa04);
  }
  *(_WORD*)(a1 + 8) = v12;
  *(_WORD*)(a1 + 10) = v13;
  *(_WORD*)(a1 + 12) = v14;
  *(_WORD*)(a1 + 14) = v15;
  *(_WORD*)(a1 + 16) = v16;
  *(_WORD*)(a1 + 18) = v17;
  return result;
}

#pragma GCC visibility pop
