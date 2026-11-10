#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_658c00(_QWORD* result);
__int64 GameRoutine_1563f90(__int64 result, __int64);
__int64 GameRoutine_1564060(__int64 result);
__int64 LayoutAccessor_155e140(__int64*);
__int64 game_ProcInst_Unregister(__int64 result);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gameui_anonymous_GameUIFade_vtable[])();
void __attribute__((noreturn)) GameRoutine_60a310();
_QWORD* GameUIFade_Destructor(__int64 a1);
__int64 GameRoutine_15e3a40(__int64 result, char, int, __int64, int);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
extern __int64 GameData_21c6968;
extern __int64 GameData_2259528;
extern __int64 GameData_2259530;
extern char* GameData_205c4d0[2];
__int64 GameUIFade_Unknown2(__int64 result);

_QWORD* GameUIFade_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _BYTE v13[4];

  *(_QWORD*)a1 = game_gameui_anonymous_GameUIFade_vtable;
  v2 = *(_QWORD*)(a1 + 152);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  LayoutAccessor_155e140((__int64*)(a1 + 168));
  v4 = *(_QWORD*)(a1 + 352);
  v13[0] = 0;
  if (v4 == 0) {
    GameRoutine_60a310();
  }
  (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v13);
  v5 = *(_QWORD**)(a1 + 400);
  if (v5 == (_QWORD*)(a1 + 368)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_12;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_12:
  v7 = *(_QWORD**)(a1 + 352);
  if (v7 == (_QWORD*)(a1 + 320)) {
    v8 = 32;
    goto LABEL_16;
  }
  if (v7 != nullptr) {
    v8 = 40;
  LABEL_16:
    (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
  }
  LayoutAccessor_155e140((__int64*)(a1 + 168));
  v9 = *(_QWORD*)(a1 + 264);
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  GameRoutine_1564060(a1 + 216);
  GameRoutine_1563f90(a1 + 192, *(_QWORD*)(a1 + 200));
  v10 = *(_QWORD*)(a1 + 176);
  if (v10 != 0) {
    std___1___shared_weak_count___release_weak(v10);
  }
  v11 = *(_QWORD*)(a1 + 160);
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00((_QWORD*)(a1 + 88));
}

__int64 GameUIFade_Unknown2(__int64 result)
{
  int v1;
  bool v2;
  int v3;
  __int64 v4;
  int v5;
  int* v6;
  __int64 v7;
  _DWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _DWORD* v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  char v17;
  int v18;
  unsigned __int8* v19;
  unsigned int v20;
  bool v21;
  int v22;

  v1 = *(_DWORD*)(result + 300);
  v2 = __OFSUB__(v1, 1);
  v3 = v1 - 1;
  if (v3 < 0 == v2) {
    v4 = result;
    *(_DWORD*)(result + 300) = v3;
    if (v3 == 0) {
      result = LayoutAccessor_1562680(
          result + 168, GameData_205c4d0[*(int*)(result + 292)], 1.0f);
      v5 = *(_DWORD*)(v4 + 296);
      if ((v5 & 0xFFFFFFFE) == 2) {
        v6 = (int*)GameData_2259528;
        v7 = GameData_2259530;
        if (GameData_2259530 == GameData_2259528) {
          v10 = -8;
        }
        else {
          v8 = (_DWORD*)(GameData_2259528 + 4);
          v9 = 0;
          while (*(v8 - 1) != *(_DWORD*)(v4 + 288) || *v8 != v5) {
            ++v9;
            v8 += 2;
            if ((GameData_2259530 - GameData_2259528) >> 3 == v9) {
              LODWORD(v9) = -1;
              break;
            }
          }
          v10 = 8LL * (int)v9;
        }
        v11 = GameData_2259528 + v10;
        v12 = (_DWORD*)(v11 + 8);
        if (v11 + 8 != GameData_2259530) {
          do {
            v13 = v12[1];
            *(v12 - 2) = *v12;
            *(v12 - 1) = v13;
            v12 += 2;
          } while (v12 != (_DWORD*)v7);
          v11 = (__int64)(v12 - 2);
          v6 = (int*)GameData_2259528;
        }
        GameData_2259530 = v11;
        if (v6 == (int*)v11) {
          v14 = *(_DWORD*)(v4 + 296);
          v18 = *(_DWORD*)(v4 + 304);
          v16 = v4 + 368;
          v17 = 0;
        }
        else {
          v15 = *v6;
          v14 = v6[1];
          do {
            if (*v6 > v15) {
              v14 = v6[1];
              v15 = *v6;
            }
            v6 += 2;
          } while (v6 != (int*)v11);
          v16 = v4 + 368;
          v17 = 1;
          v18 = 1;
        }
        result = GameRoutine_15e3a40(GameData_21c6968, v17, v14, v16, v18);
      }
      v19 = *(unsigned __int8**)(v4 + 16);
      if (v19 != nullptr) {
        v20 = *v19;
        v21 = v20 > 0x10;
        v22 = (1 << v20) & 0x1CE00;
        if (!v21 && v22 != 0) {
          *(_WORD*)(v4 + 136) |= 0x80u;
        }
      }
      *(_WORD*)(v4 + 136) |= 8u;
    }
  }
  return result;
}

#pragma GCC visibility pop
