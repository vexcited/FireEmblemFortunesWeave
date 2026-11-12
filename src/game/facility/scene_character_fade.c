#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterBuilder_1083e90(_QWORD, _QWORD);
__int64 GameRoutine_1469c40(_QWORD, _QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_20076d8[])();
extern __int64 (*GameData_2007758[])();
void SceneCharacterFade_Unknown2(__int64 a1);
_QWORD** GameRoutine_1469c40_alt1(_QWORD** result, __int64,
                                  _QWORD*) __asm__("GameRoutine_1469c40");
__int64 game_character_1084940(__int64 result, char, float);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 game_script_hub_g_frame_counter_ptr[3];
__int64 SceneCharacterFade_Unknown3(__int64 result);

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

__int64 SceneCharacterFade_Unknown3(__int64 result)
{

#pragma clang fp contract(off)
  float v1;
  float v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  bool v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64* v21;

  v2 = *(float*)(result + 16);
  v1 = *(float*)(result + 20);
  v3 = result;
  if (v2 != v1) {
    v10 = *(float*)(result + 24);
    v11 = (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                            160LL) *
                  0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f;
    if (v10 > v11) {
      v12 = v11 / v10;
      v13 = 0x1.0000000000000p+0f;
      if (v12 <= 0x1.0000000000000p+0f) {
        v13 = v12;
      }
      v16 = v12 < 0x0.0p+0f;
      v14 = 0x0.0p+0f;
      if (!v16) {
        v14 = v13;
      }
      if (v1 <= v2) {
        v15 = v2 - v14;
        v16 = v15 < v1;
      }
      else {
        v15 = v2 + v14;
        v16 = v1 < v15;
      }
      if (!v16) {
        v1 = v15;
      }
    }
    v17 = *(_QWORD*)(result + 8);
    *(float*)(result + 16) = v1;
    v5 = *(_QWORD*)(v17 + 144);
    v6 = *(_QWORD*)(v17 + 152);
    if (v6 != 0) {
      goto LABEL_3;
    }
  LABEL_22:
    v18 = *(_QWORD*)(v5 + 8);
    if (v18 != 0) {
      v19 = *(_QWORD**)(v18 + 8);
      v20 = 0;
      v21 = &v20;
      result = (__int64)GameRoutine_1469c40_alt1(&v21, (__int64)&v21, v19);
      v9 = v20;
      if (v20 != 0) {
        return game_character_1084940(v9, 0, *(float*)(v3 + 16));
      }
    }
    return result;
  }
  v4 = *(_QWORD*)(result + 8);
  v5 = *(_QWORD*)(v4 + 144);
  v6 = *(_QWORD*)(v4 + 152);
  if (v6 == 0) {
    goto LABEL_22;
  }
LABEL_3:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                            memory_order_relaxed);
  v7 = *(_QWORD*)(v5 + 8);
  if (v7 != 0) {
    v8 = *(_QWORD**)(v7 + 8);
    v20 = 0;
    v21 = &v20;
    result = (__int64)GameRoutine_1469c40_alt1(&v21, (__int64)&v21, v8);
    v9 = v20;
  }
  else {
    v9 = 0;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v9 == 0) {
      return result;
    }
    return game_character_1084940(v9, 0, *(float*)(v3 + 16));
  }
  (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
  result = std___1___shared_weak_count___release_weak_alt1(v6);
  if (v9 != 0) {
    return game_character_1084940(v9, 0, *(float*)(v3 + 16));
  }
  return result;
}

#pragma GCC visibility pop
