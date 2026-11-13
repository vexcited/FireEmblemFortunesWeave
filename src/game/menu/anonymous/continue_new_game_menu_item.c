#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_878ea0(PSEUDO_X8, const char**);
__int64 GameRoutine_877330(char);
char* game_util_Format(const char*, ...);
extern __int64 GameData_21c9600;
unsigned __int64 strlen(const char*);
__int64 game_menu_anonymous_ContinueNewGameMenuItem_ACall_closure_Invoke();

__int64 game_menu_anonymous_ContinueNewGameMenuItem_ACall_closure_Invoke()
{
  struct {
    __int64 v1[7];
    char gap56_[3];
    char v2;
  } v1_;
  char* v3[2];

  v3[0] = game_util_Format("%s/%s", "000", "Auto");
  v3[1] = (const char*)strlen(v3[0]);
  GameRoutine_878ea0((void*)((__int64)v1_.v1), v3);
  if (LOBYTE(v1_.v1[0]) != 0 && (v1_.v2 & 8) != 0) {
    GameRoutine_877330(2);
    if (GameData_21c9600 != 0) {
      *(_DWORD*)(GameData_21c9600 + 152) = 36;
    }
  }
  return 4;
}

#pragma GCC visibility pop
