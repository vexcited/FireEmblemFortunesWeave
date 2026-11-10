#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_1604a30(PSEUDO_X8, __int64, unsigned int);
__int64 Dir_70e760(__int16*, __int16*);
__int64 LayoutAccessor_1562060(__int64 result, __int64, __int64);
__int64 LayoutAccessor_1562cf0(__int64 result, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212d690;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_156c910(__int64, __int64, int, ...);
__int64 TelopReminder_Unknown33(__int64 a1);

__int64 TelopReminder_Unknown33(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    __int64 v17[2];
    unsigned __int64 v18;
    unsigned __int64 v19;
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
  } v17_;

  if (game_GameModeData_instance_ != 0) {
    v2 = (__int64*)(a1 + 168);
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 2) {
      v17_.v22 = -1;
      v17_.v23 = -1;
      v17_.v24 = -1;
      v17_.v25 = -1;
      v3 = *msg_MessageManager_instance__ptr[0];
      v17_.v26 = -1;
      v17_.v27 = -1;
      v17_.v28 = -1;
      v17_.v29 = -1;
      v17_.v30 = -1;
      v17_.v31 = -1;
      v17_.v32 = -1;
      v17_.v33 = -1;
      v17_.v17[0] = (__int64)(GameData_212e348 + 2);
      v17_.v17[1] = 0xFFFF0001FFFF0000LL;
      v17_.v18 = 0xFFFF0004FFFF0002LL;
      v17_.v19 = 0xFFFF0006FFFF0005LL;
      v17_.v34 = 8;
      v17_.v20 = -65529;
      v17_.v21 = -65528;
      v4 = GameRoutine_a4dbe0(v3, "MID_Sys_FreeAction_BattlePrepare_Start", 0);
      if (v4 != nullptr) {
        v5 = (__int64)v4;
        v6 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 168),
                                           (__int64)"T_Title");
        if (v6 != 0) {
          GameRoutine_156c5d0(v6, v5, 0);
        }
      }
      LayoutAccessor_1562cf0(a1 + 168, (__int64)"Type_Part2");
      goto LABEL_25;
    }
  }
  else {
    v2 = (__int64*)(a1 + 168);
  }
  if ((*(_BYTE*)(a1 + 824) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 840);
  }
  else {
    v7 = a1 + 825;
  }
  LayoutAccessor_1562060((__int64)v2, (__int64)"T_Title", v7);
  LayoutAccessor_1562cf0((__int64)v2, (__int64)"Type_Common");
  game_1604a30((void*)(v17_.v17), (unsigned int)*(__int16*)(a1 + 886),
               *(__int16*)(a1 + 888));
  v8 = v17_.v17[0] & 1;
  if ((v17_.v17[0] & 1) != 0) {
    v9 = (char*)v17_.v18;
  }
  else {
    v9 = (char*)v17_.v17 + 1;
  }
  if (v9 != nullptr) {
    v10 = ui_LayoutAccessor_FindTextBox(v2, (__int64)"T_Limit_Date");
    if (v10 != 0) {
      GameRoutine_156c5d0(v10, (__int64)v9, 0);
      v8 = v17_.v17[0] & 1;
    }
  }
  if (v8 != 0 && v17_.v18 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
  }
  v12 = Dir_70e760((__int16*)(a1 + 872), (__int16*)(a1 + 884));
  v13 = ui_LayoutAccessor_FindPane(v2, (__int64)"T_Limit_TurnNum");
  if (v13 != 0) {
    v14 = __dynamic_cast(v13, GameData_212d670[0], GameData_212d690, 0);
    if (v14 != 0) {
      GameRoutine_156c910(v14, (__int64)"%d", 1, v12);
    }
  }
LABEL_25:
  if ((*(_BYTE*)(a1 + 848) & 1) != 0) {
    v15 = *(_QWORD*)(a1 + 864);
  }
  else {
    v15 = a1 + 849;
  }
  return LayoutAccessor_1562060((__int64)v2, (__int64)"T_Goal_Body", v15);
}

#pragma GCC visibility pop
