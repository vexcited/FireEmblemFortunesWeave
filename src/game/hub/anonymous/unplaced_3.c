#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameHr_dbd8e0();
__int64 LayoutAccessor_1567000(__int64, char);
__int64 LocatorDispos_db2560(__int64, unsigned __int8*);
__int64 Manager_d54850(__int64, char);
extern __int64* GameData_212ebc0[5];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dbf8;
extern __int64 GameData_212ebf8[2];
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
void GameRoutine_d799f0(__int64);
__int64 game_hub_anonymous_d8b3a0();

__int64 game_hub_anonymous_d8b3a0()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  int v3;
  int v4;
  __int64 result;
  __int64 v6;
  char v7;
  unsigned __int8 v8;
  char v9[23];

  v0 = (__int64*)GameData_212dbb8[0];
  v1 = *(_QWORD*)GameData_212dbb8[0];
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v8 = 20;
    strcpy(v9, "HugeMemory");
    LocatorDispos_db2560(v1 + 64, &v8);
  }
  v2 = *GameData_212ebc0[0];
  if (*GameData_212ebc0[0] != 0) {
    if (game_gameui_Footer_instance_ != 0) {
      LayoutAccessor_1567000(game_gameui_Footer_instance_, 1);
    }
    if ((*(_BYTE*)(v2 + 161) & 1) == 0) {
      *(_BYTE*)(v2 + 161) = 1;
      v3 = *(_DWORD*)(v2 + 176);
      *(_DWORD*)(v2 + 176) = v3 + 1;
      if (v3 == 0) {
        (**(void (***)(__int64))(v2 + 168))(v2 + 168);
      }
      GameRoutine_d799f0(v2);
    }
    if ((*(_BYTE*)(v2 + 162) & 1) == 0) {
      *(_BYTE*)(v2 + 162) = 1;
      v4 = *(_DWORD*)(v2 + 192);
      *(_DWORD*)(v2 + 192) = v4 + 1;
      if (v4 == 0) {
        (**(void (***)(__int64))(v2 + 184))(v2 + 184);
      }
      GameRoutine_d799f0(v2);
    }
  }
  result = *(_QWORD*)GameData_212dbf8;
  if (*(_QWORD*)GameData_212dbf8 != 0) {
    result = GameHr_dbd8e0();
  }
  v6 = *v0;
  if (*v0 != 0) {
    v8 = 20;
    strcpy(v9, "HugeMemory");
    v7 = LocatorDispos_db2560(v6 + 64, &v8);
    result = Manager_d54850(*v0, v7 & ~*(_BYTE*)(v6 + 768) & 1);
  }
  if (*(_QWORD*)GameData_212ebf8[0] != 0) {
    *(_DWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 156LL) =
        1065353216;
  }
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    *(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) = 1;
  }
  return result;
}

#pragma GCC visibility pop
