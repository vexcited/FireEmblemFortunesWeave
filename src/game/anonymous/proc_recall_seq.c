#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_80a410(float);
extern __int64 game_ProcFadeView_instance_;
__int64 ProcRecallSeq_Unknown5();
__int64 GameRoutine_80a2a0(float);
__int64 ProcRecallSeq_Unknown4() { return GameRoutine_80a2a0(0.25); };

__int64 ProcRecallSeq_Unknown5()
{
  __int64 result;

  result = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ != 0) {
    return GameRoutine_80a410(0.25);
  }
  return result;
}

#pragma GCC visibility pop
