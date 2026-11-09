#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_map_anonymous_ProcMapTransition_vtable[])();
extern __int64 GameData_21c6978;
extern __int64 GameData_21c96a8;
extern __int64 GameData_21ed070;
extern __int64 GameData_21fdf18;
extern __int64 GameData_21fdf28;
extern __int64 GameData_21fdf38;
extern __int64 GameData_21fdf48;
extern __int64 GameData_21fdf58;
extern __int64 GameData_21fdf68;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 ProcMapTransition_Destructor(__int64 a1);

__int64 ProcMapTransition_Destructor(__int64 a1)
{
  float v1;
  float v2;
  __int64 v4;
  float v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  float v11;

  v2 = *(float*)(a1 + 160);
  v1 = *(float*)(a1 + 164);
  *(_QWORD*)a1 = game_map_anonymous_ProcMapTransition_vtable;
  if (v1 != v2) {
    if (GameData_21c96a8 != 0) {
      *(_DWORD*)(*(_QWORD*)(GameData_21c96a8 + 8) + 32LL) =
          *(_DWORD*)(a1 + 184);
    }
    if (*(_QWORD*)(a1 + 224) != 0) {
      v5 = (*(float (**)(__int64))(*(_QWORD*)(a1 + 152) + 16LL))(a1 + 152);
      v6 = *(_QWORD*)(a1 + 224);
      v11 = v5;
      if (v6 == 0) {
        GameRoutine_60a310(0, v4);
      }
      (*(void (**)(__int64, float*))(*(_QWORD*)v6 + 48LL))(v6, &v11);
    }
  }
  v7 = *(_QWORD*)(GameData_21c6978 + 32);
  if (*(_QWORD*)(GameData_21c6978 + 24) != v7 && *(_QWORD*)(v7 - 8) != 0) {
    *(_BYTE*)(GameData_21fdf18 + 58) = 1;
    *(_BYTE*)(GameData_21fdf28 + 58) = 1;
    *(_BYTE*)(GameData_21fdf38 + 58) = 1;
    *(_BYTE*)(GameData_21fdf48 + 58) = 1;
    *(_BYTE*)(GameData_21fdf58 + 58) = 1;
    *(_BYTE*)(GameData_21fdf68 + 58) = 1;
  }
  v8 = *(_QWORD**)(a1 + 224);
  if (v8 == (_QWORD*)(a1 + 192)) {
    v9 = 32;
  }
  else {
    if (v8 == nullptr) {
      goto LABEL_15;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v8 + v9))((__int64)v8);

LABEL_15:
  GameData_21ed070 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
