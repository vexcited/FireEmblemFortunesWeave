#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 snd_fnd_WeakHandle_isValid(_QWORD);
extern __int64 game_ProcGameSkipView_instance_;
__int64 SeWaitProc_Unknown2(__int64 result);

__int64 SeWaitProc_Unknown2(__int64 result)
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
      ((result = snd_fnd_WeakHandle_isValid(result + 152)) & 1) == 0) {
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
