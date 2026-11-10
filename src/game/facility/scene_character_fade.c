#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterBuilder_1083e90(_QWORD, _QWORD);
__int64 GameRoutine_1469c40(_QWORD, _QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_20076d8[])();
extern __int64 (*GameData_2007758[])();
void SceneCharacterFade_Unknown2(__int64 a1);

void SceneCharacterFade_Unknown2(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 (**v13)();
  int v14;
  __int64 (***v15)();
  __int64 v16;

  v1 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(v1 + 144);
  v4 = *(_QWORD*)(v1 + 152);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    v5 = *(_QWORD*)(v3 + 8);
    if (v5 != 0) {
      v6 = *(_QWORD*)(v5 + 8);
      v16 = 0;
      v13 = (__int64 (**)())&v16;
      GameRoutine_1469c40(&v13, &v13, v6);
      v7 = v16;
    }
    else {
      v7 = 0;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
  else {
    v8 = *(_QWORD*)(v3 + 8);
    if (v8 == 0) {
      return;
    }
    v9 = *(_QWORD*)(v8 + 8);
    v16 = 0;
    v13 = (__int64 (**)())&v16;
    GameRoutine_1469c40(&v13, &v13, v9);
    v7 = v16;
  }
  if (v7 == 0) {
    return;
  }
  v10 = *(_DWORD*)(a1 + 16);
  v13 = GameData_20076d8;
  v15 = &v13;
  *(_DWORD*)((char*)((_UNKNOWN*)0x15CLL) + v7) = v10;
  v14 = v10;
  CharacterBuilder_1083e90(v7, &v13);
  if (v15 == &v13) {
    v11 = 4;
    goto LABEL_14;
  }
  if (v15 != nullptr) {
    v11 = 5;
  LABEL_14:
    (*v15)[v11]();
  }
  v14 = v10;
  v13 = GameData_2007758;
  v15 = &v13;
  CharacterBuilder_1083e90(v7, &v13);
  if (v15 == &v13) {
    v12 = 4;
  }
  else {
    if (v15 == nullptr) {
      return;
    }
    v12 = 5;
  }
  (*v15)[v12]();
}

#pragma GCC visibility pop
