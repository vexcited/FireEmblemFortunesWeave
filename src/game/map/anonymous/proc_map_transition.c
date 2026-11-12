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
__int64 ProcMapTransition_Destructor_alt1(__int64 a1) __asm__(
    "ProcMapTransition_Destructor");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__int64 ProcMapTransition_Unknown2(__int64 a1);
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void ProcMapTransition_Destructor(__int64 a1);

void ProcMapTransition_Destructor(__int64 a1)
{

#pragma clang fp contract(off)
  float v1;
  float v2;
  float v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  float v9;

  v2 = *(float*)(a1 + 160);
  v1 = *(float*)(a1 + 164);
  *(_QWORD*)a1 = game_map_anonymous_ProcMapTransition_vtable;
  if (v1 != v2) {
    if (GameData_21c96a8 != 0) {
      *(_DWORD*)(*(_QWORD*)(GameData_21c96a8 + 8) + 32LL) =
          *(_DWORD*)(a1 + 184);
    }
    if (*(_QWORD*)(a1 + 224) != 0) {
      v4 = (*(float (**)(__int64))(*(_QWORD*)(a1 + 152) + 16LL))(a1 + 152);
      v5 = *(_QWORD*)(a1 + 224);
      v9 = v4;
      if (v5 == 0) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(__int64, float*))(*(_QWORD*)v5 + 48LL))(v5, &v9);
    }
  }
  v6 = *(_QWORD*)(GameData_21c6978 + 32);
  if (*(_QWORD*)(GameData_21c6978 + 24) != v6 && *(_QWORD*)(v6 - 8) != 0) {
    *(_BYTE*)(GameData_21fdf18 + 58) = 1;
    *(_BYTE*)(GameData_21fdf28 + 58) = 1;
    *(_BYTE*)(GameData_21fdf38 + 58) = 1;
    *(_BYTE*)(GameData_21fdf48 + 58) = 1;
    *(_BYTE*)(GameData_21fdf58 + 58) = 1;
    *(_BYTE*)(GameData_21fdf68 + 58) = 1;
  }
  v7 = *(_QWORD**)(a1 + 224);
  if (v7 == (_QWORD*)(a1 + 192)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_15;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_15:
  GameData_21ed070 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

__int64 ProcMapTransition_Unknown2(__int64 a1)
{

#pragma clang fp contract(off)
  float v1;
  float v2;
  float v4;
  __int64 result;
  int v6;
  float v7;
  __int64 v8;
  unsigned __int8* v9;
  unsigned int v10;
  bool v11;
  int v12;
  float v14;

  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  v1 = *(float*)(a1 + 160);
  v2 = *(float*)(a1 + 164);
  *(_BYTE*)(a1 + 177) = 0;
  if (v2 < v1) {
    v4 = v2 + (**(float (***)(__int64))(a1 + 152))(a1 + 152),
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
    if (*(float*)(a1 + 160) < v4) {
      v4 = *(float*)(a1 + 160);
    }
    *(float*)(a1 + 164) = v4;
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 152) + 16LL))(a1 + 152),
  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  if (GameData_21c96a8 != 0) {
    *(_DWORD*)(*(_QWORD*)(GameData_21c96a8 + 8) + 32LL) = v6;
  }
  if (*(_QWORD*)(a1 + 224) != 0) {
    v7 = (*(float (**)(__int64))(*(_QWORD*)(a1 + 152) + 16LL))(a1 + 152),
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
    v8 = *(_QWORD*)(a1 + 224);
    v14 = v7;
    if (v8 == 0) {
      GameRoutine_60a310_alt1(),
          v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    result = (*(__int64 (**)(__int64, float*))(*(_QWORD*)v8 + 48LL))(v8, &v14),
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  if (*(float*)(a1 + 164) == *(float*)(a1 + 160)) {
    v9 = *(unsigned __int8**)(a1 + 16);
    if (v9 != nullptr) {
      v10 = *v9;
      v11 = v10 > 0x10;
      v12 = (1 << v10) & 0x1CE00;
      if (!v11 && v12 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

#pragma GCC visibility pop
