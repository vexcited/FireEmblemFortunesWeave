#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
CombatCharacterSound_1091ac0(PSEUDO_X8, __int64 result, __int64, float);
__int64 GameRoutine_10aa280(__int64, __int64, __int64, float);
__int64 GameRoutine_10f1b40();
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2005f10[])();
extern __int64* GameData_212d448[9];
extern __int64 GameData_2235738;
void game_combat_ActionDamageCore_DoDie(__int64* a1);
__int64 game_combat_ActionDamageCore_DoDie_lambda0_Invoke(__int64 a1,
                                                          float* a2);

void game_combat_ActionDamageCore_DoDie(__int64* a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  bool v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    _BYTE v20[32];
    _BYTE* v21;
  } v20_;
  struct {
    __int64 (**v22)();
    int v23;
    char gap60_[20];
    __int64 (***v24)();
  } v22_;

  v2 = GameData_212d448[0];
  if (*GameData_212d448[0] != 0) {
    v3 = *(_QWORD*)(*GameData_212d448[0] + 8);
    v4 = *(_DWORD*)(v3 + 116);
    if ((v4 & 1) != 0) {
      v5 = 12;
      if ((*(_BYTE*)(v3 + 113) & 0x80) != 0) {
        goto LABEL_11;
      }
    }
    else {
      if ((v4 & 2) == 0) {
        goto LABEL_11;
      }
      v5 = 11;
      if ((*(_BYTE*)(v3 + 113) & 0x80) != 0) {
        goto LABEL_11;
      }
    }
    if (GameData_2235738 != 0) {
      v6 = GameData_2235738 + (v5 << 6);
      if (*(_BYTE*)(v6 + 16) == 1) {
        v7 = v6 + 8;
        if (*(float*)(v7 + 16) != *(float*)(v7 + 20)) {
          v8 = *(float*)(v7 + 36);
          *(_DWORD*)(v7 + 48) = 0;
          *(_BYTE*)(v7 + 44) = v8 < 0x0.0p+0f;
        }
      }
    }
  }
LABEL_11:
  if ((GameRoutine_10f1b40() & 1) != 0) {
    if (*v2 == 0) {
      goto LABEL_30;
    }
    v9 = *(_DWORD*)(*a1 + 12);
    if (v9 <= 3) {
      v10 = *v2 + 24LL * v9;
      v11 = *(_QWORD*)(v10 + 32);
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                  memory_order_relaxed);
        v12 = *(_QWORD*)(v10 + 40);
        v13 = *(_QWORD*)(v11 + 8) == -1 || v12 == 0;
        if (v13 || (v14 = *(_QWORD*)(v12 + 80)) == 0 ||
            (*(_QWORD*)(v14 + 8) != -1 ? (v15 = *(_QWORD*)(v12 + 88) == 0)
                                       : (v15 = true),
             v15 || *(_QWORD*)(v11 + 8) == -1)) {
          std___1___shared_weak_count___release_weak(v11);
        }
        else {
          std___1___shared_weak_count___release_weak(v11);
          *(_BYTE*)(v12 + 425) = 1;
        }
      }
    }
  }
  if (*v2 != 0) {
    v16 = *(_QWORD*)(*v2 + 8);
    if (v16 != 0 && (*(_BYTE*)(v16 + 113) & 0x80) != 0) {
      return;
    }
  }
LABEL_30:
  v17 = *a1;
  v22_.v22 = GameData_2005f10;
  LODWORD(v17) = *(_DWORD*)(v17 + 12);
  v20_.v21 = nullptr;
  v22_.v23 = v17;
  v22_.v24 = &v22_.v22;
  GameRoutine_10aa280(0, (__int64)&v22_.v22, (__int64)v20_.v20,
                      0x1.0000000000000p+0f);
  if (v20_.v21 == v20_.v20) {
    v18 = 32;
    goto LABEL_34;
  }
  if (v20_.v21 != nullptr) {
    v18 = 40;
  LABEL_34:
    (*(void (**)(__int64))(*(_QWORD*)v20_.v21 + v18))((__int64)v20_.v21);
  }
  if (v22_.v24 == &v22_.v22) {
    v19 = 4;
  }
  else {
    if (v22_.v24 == nullptr) {
      return;
    }
    v19 = 5;
  }
  ((__int64 (*)(__int64))(*v22_.v24)[v19])((__int64)v22_.v24);
}

__int64 game_combat_ActionDamageCore_DoDie_lambda0_Invoke(__int64 a1, float* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64* v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  const char* v19;
  _QWORD v20[4];

  if (*a2 <= 0x1.47ae140000000p-5f) {
    return 1;
  }
  v20[2] = v2;
  v20[3] = v3;
  v4 = *(_DWORD*)(a1 + 8);
  v5 = GameData_212d448[0];
  if (*GameData_212d448[0] == 0 || v4 > 3) {
    return 1;
  }
  v7 = *GameData_212d448[0] + 24LL * v4;
  v8 = *(_QWORD*)(v7 + 32);
  if (v8 == 0) {
    return 1;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                            memory_order_relaxed);
  v9 = *(_QWORD*)(v7 + 40);
  v10 = *(_QWORD*)(v8 + 8) == -1 || v9 == 0;
  if (v10 || (v11 = *(_QWORD*)(v9 + 80)) == 0 ||
      (*(_QWORD*)(v11 + 8) != -1 ? (v12 = *(_QWORD*)(v9 + 88) == 0)
                                 : (v12 = true),
       v12 || *(_QWORD*)(v8 + 8) == -1)) {
    std___1___shared_weak_count___release_weak(v8);
    return 1;
  }
  std___1___shared_weak_count___release_weak(v8);
  v14 = *(_QWORD*)(v9 + 80);
  if (v14 != 0) {
    v13 = *(_QWORD*)(v14 + 8);
    v15 = *(_QWORD*)(v9 + 88);
    v16 = v13 == -1 || v15 == 0;
    if (!v16 && (float)((float)(*(float*)(*(_QWORD*)(v15 + 304) + 16LL) *
                                0x1.0aef000000000p+4f) *
                        0x1.0624de0000000p-10f) <= 0x1.a36e2e0000000p-14f) {
      return 1;
    }
  }
  v17 = *v5;
  if (*v5 != 0) {
    LOBYTE(v13) = (*(_BYTE*)(*(_QWORD*)(v17 + 8) + 116LL) & 8) != 0;
  }
  if (((v17 != 0) & (unsigned __int8)v13) != 0) {
    v19 = "Damage_D";
  }
  else {
    v19 = "Damage_H";
  }
  CombatCharacterSound_1091ac0((void*)((__int64)v20), v9 + 872, (__int64)v19,
                               0x1.0000000000000p+0f);
  return 0;
}

#pragma GCC visibility pop
