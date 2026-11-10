#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64* GameData_212d728[2];
__int64 ProcFinishReconstruction_1525390();
__int64 game_gmap_ProcFinishReconstruction_SetCursorAtPlayer_closure_Invoke(
    __int64 a1, __int64* a2);

__int64 ProcFinishReconstruction_1525390()
{
  __int64 v0;
  __int64 result;

  v0 = *(_QWORD*)(*GameData_212d728[0] + 8);
  LayoutAccessor_155e830(*(_QWORD*)(v0 + 16), 1);
  result = game_hub_ProgressEventView_instance_;
  if (game_hub_ProgressEventView_instance_ != 0) {
    result = GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
  }
  *(_DWORD*)(v0 + 5856) |= 0x10000u;
  return result;
}

__int64

game_gmap_ProcFinishReconstruction_SetCursorAtPlayer_closure_Invoke(__int64 a1,
                                                                    __int64* a2)
{
  __int64 v2;
  __int64 result;

  v2 = *a2;
  if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(*a2 + 280) + 24LL))(
          *(_QWORD*)(*a2 + 280)) == 1) {
    (*(void (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 112LL))(
        *(_QWORD*)(v2 + 280));
  }
  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 48LL))(
      *(_QWORD*)(v2 + 280));
  if ((result & 1) != 0) {
    **(_BYTE**)(a1 + 8) = 1;
  }
  return result;
}

#pragma GCC visibility pop
