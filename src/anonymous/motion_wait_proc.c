#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool GameRoutine_118a5a0(_BOOL8 result);
bool MotionProc_118a440(_BOOL8 result);
extern __int64 game_ProcGameSkipView_instance_;
__int64 MotionWaitProc_Unknown2(__int64 result);

__int64 MotionWaitProc_Unknown2(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  unsigned __int8* v4;
  unsigned int v5;
  bool v6;
  int v7;

  v1 = result;
  if (game_ProcGameSkipView_instance_ != 0 &&
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3 &&
          (((v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v3 = 2)
               : (v3 = 3),
           (v3 & v2) == 0) ||
      ((result = ((__int64 (*)(_BOOL8 result))MotionProc_118a440)(
            *(_QWORD*)(result + 152))) &
       1) == 0 ||
      ((result = ((__int64 (*)(_BOOL8 result))GameRoutine_118a5a0)(
            *(_QWORD*)(v1 + 152))) &
       1) != 0) {
    v4 = *(unsigned __int8**)(v1 + 16);
    if (v4 != nullptr) {
      v5 = *v4;
      v6 = v5 > 0x10;
      v7 = (1 << v5) & 0x1CE00;
      if (!v6 && v7 != 0) {
        *(_WORD*)(v1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(v1 + 136) |= 8u;
  }
  return result;
}

#pragma GCC visibility pop
