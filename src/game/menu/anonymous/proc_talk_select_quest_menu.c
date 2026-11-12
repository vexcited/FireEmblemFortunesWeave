#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 std___1___shared_weak_count___release_weak(__int64);
void game_gameui_159b580(__int64, _BYTE*, __int64, _DWORD*);
__int64 game_menu_anonymous_ProcTalkSelectQuestMenu_OnBuild_closure_Invoke(
    __int64 a1, _BYTE* a2, __int64 a3, _DWORD* a4);

__int64 game_menu_anonymous_ProcTalkSelectQuestMenu_OnBuild_closure_Invoke(
    __int64 a1, _BYTE* a2, __int64 a3, _DWORD* a4)
{
  __int64 result;
  struct {
    __int64 v8;
    __int64 v9;
  } v8_;

  LayoutAccessor_1560070((void*)(&v8_.v8),
                         (__int64*)(*(_QWORD*)(a1 + 8) + 848LL), "L_Img");
  game_gameui_159b580((__int64)&v8_.v8, a2, a3, a4);
  result = v8_.v9;
  if (v8_.v9 != 0) {
    return std___1___shared_weak_count___release_weak(v8_.v9);
  }
  return result;
}

#pragma GCC visibility pop
