#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_ProcInst_Unregister(__int64 result);
extern __int64 (*GameData_1fec658[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_menu_anonymous_TalkSelectSeqProc_vtable[])();
extern __int64 game_script_hub_talk_g_select_menu;
void GameRoutine_658c00(__int64*);
void GmapTalkCommandMenu_e95140(_QWORD*);
void TalkSelectSeqProc_Destructor(__int64 a1);

void TalkSelectSeqProc_Destructor(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;

  *(_QWORD*)a1 = game_menu_anonymous_TalkSelectSeqProc_vtable;
  GmapTalkCommandMenu_e95140((_QWORD*)(a1 + 208));
  v2 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_1fec658;
  if (v2 == (_QWORD*)(a1 + 160)) {
    v3 = 32;
  }
  else {
    if (v2 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v2 + v3))((__int64)v2);
LABEL_6:
  game_script_hub_talk_g_select_menu = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00((__int64*)(a1 + 88));
}

#pragma GCC visibility pop
