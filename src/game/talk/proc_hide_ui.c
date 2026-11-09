#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting_ptr;
__int64 ProcHideUI_Unknown2(__int64 result);

__int64 ProcHideUI_Unknown2(__int64 result)
{
  int v1;
  int v2;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;

  if (game_ProcGameSkipView_instance_ != 0 &&
          (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                            152) -
                  1 <=
              2 &&
          (((v1 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v2 = 2)
               : (v2 = 3),
           (v2 & v1) == 0) ||
      (*(_WORD*)(*(_QWORD*)game_g_game_setting_ptr + 952LL) & 0x3CC7) != 0) {
    v3 = *(unsigned __int8**)(result + 16);
    if (v3 != nullptr) {
      v4 = *v3;
      v5 = v4 > 0x10;
      v6 = (1 << v4) & 0x1CE00;
      if (!v5 && v6 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
