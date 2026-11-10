#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_22445e8;
extern __int64 GameData_22445f8;
extern __int64 GameData_2244608;
__int64 BanquetSceneDiff_Unknown4(__int64 a1);
__int64 GameRoutine_149efe0(_QWORD, _QWORD);
extern __int64 GameData_226bb60;
extern __int64 game_ProcGameSkipView_instance_;
__int64 game_facility_BanquetSceneDiff_StartCameraWork_lambda0_Invoke();

__int64 BanquetSceneDiff_Unknown4(__int64 a1)
{
  unsigned __int64 v1;
  __int64 v2;
  __int64* v3;

  v1 = *(_QWORD*)(*(_QWORD*)(a1 + 96) + 8LL) - **(_QWORD**)(a1 + 96);
  v2 = v1 & 0x7FFFFFFF8LL;
  if ((int)(v1 >> 3) >= 4) {
    v3 = &GameData_2244608;
  }
  else {
    v3 = &GameData_22445f8;
  }
  if (v2 == 8) {
    v3 = &GameData_22445e8;
  }
  return *v3;
}

__int64 game_facility_BanquetSceneDiff_StartCameraWork_lambda0_Invoke()
{
  __int64 v0;
  int v1;
  int v2;
  __int64 result;

  v0 = GameData_226bb60;
  if (GameData_226bb60 != 0 && (*(_BYTE*)(GameData_226bb60 + 232) & 1) == 0) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                          152) -
                1 >
            2 ||
        (((v1 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v2 = 2)
             : (v2 = 3),
         (v2 & v1) != 0)) {
      result = GameRoutine_149efe0(GameData_226bb60, GameData_226bb60 + 184);
      *(_BYTE*)(v0 + 232) = 1;
    }
  }
  return result;
}

#pragma GCC visibility pop
