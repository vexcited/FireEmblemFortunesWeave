#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_90c6c0(_QWORD, _QWORD);
__int64 GameRoutine_90dc20(_QWORD, _QWORD);
extern __int64 game_GameModeData_instance_;
__int64 SortiePlanVolunteerArgs_Unknown12(__int64 a1);
__attribute__((swiftcall)) void
game_12dd620(PSEUDO_X8, unsigned __int16* result, int, int, int);
__int64 GameVariable_828800(__int64, unsigned __int64*, int);
__int64 game_958960();
extern __int64 GameData_212c6c0[2];
extern __int64 GameData_2246cb0;
extern __int64 GameData_22492a8;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
unsigned __int16* SortiePlanVolunteerArgs_Unknown4(_BYTE* a1);

unsigned __int16* SortiePlanVolunteerArgs_Unknown4(_BYTE* a1)
{
  __int16* v2;
  unsigned __int16* result;
  _WORD v4[6];

  (*(void (**)(_BYTE*))(*(_QWORD*)a1 + 88LL))(a1);
  if (GameData_2246cb0 != 0) {
    *(_QWORD*)(GameData_2246cb0 + 160) = *(_QWORD*)(GameData_2246cb0 + 152);
  }
  a1[16] = game_958960();
  (*(void (**)(_BYTE*))(*(_QWORD*)a1 + 96LL))(a1);
  if (game_gmap_GmapClock_instance_ != 0) {
    v2 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v2 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  result = X8CALL_X0(unsigned __int16*,
                     game_12dd620((void*)((__int64)v4),
                                  *(unsigned __int16**)GameData_212c6c0[0], *v2,
                                  v2[1], v2[2]));
  if (game_GameModeData_instance_ != 0) {
    return (unsigned __int16*)GameVariable_828800(
        game_GameModeData_instance_ + 40, (unsigned __int64*)&GameData_22492a8,
        100 * v4[1] + 10000 * v4[0] + v4[2]);
  }
  return result;
}

__int64 SortiePlanVolunteerArgs_Unknown12(__int64 a1)
{
  __int64 v1;
  __int64 result;
  unsigned int v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 8);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 72LL))(a1);
  if (v1 != 0) {
    v4 = result;
    result = GameRoutine_90dc20(game_GameModeData_instance_ + 152,
                                *(_QWORD*)(v1 + 112));
    if ((result & 0x80000000) == 0) {
      v5 = *(_QWORD*)(*(_QWORD*)(game_GameModeData_instance_ + 160) + 8LL);
      if (v5 != 0) {
        v6 = v5 + 32LL * (unsigned int)result;
        *(_DWORD*)(a1 + 20) = *(_DWORD*)(v6 + 4);
        result = GameRoutine_90c6c0(v6, v4);
        *(_DWORD*)(a1 + 24) = *(_DWORD*)(v6 + 4);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
