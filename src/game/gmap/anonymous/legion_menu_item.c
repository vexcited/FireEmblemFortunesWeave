#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1582f00(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_212cf80[5];
extern __int64* GameData_212ceb0;
extern __int64* ui_LayoutAccessor_empty__ptr[3];
__int64* LegionMenuItem_Unknown73(__int64 a1);
__int64 LegionMenuItem_Unknown55(__int64 a1);
__int64 LegionPool_937de0(_QWORD, _QWORD);
__int64 SpotMgr_132ffa0(_QWORD);
__int64 Spot_132b100(_QWORD, _QWORD);
extern __int64 GameData_212d750;
extern __int64 GameData_21316c8;
extern __int64 GameData_2131860;
extern __int64 GameData_22506e0;
extern __int64 GameData_22549a8;
extern __int64* GameData_2130e70;
extern char GameData_1a9f09e;
__int64 game_gmap_anonymous_LegionMenuItem_ACall_closure_Invoke(__int64 a1);
__int64 game_gmap_anonymous_LegionMenuItem_ACall_closure1_Invoke(__int64 a1);
__int64* game_UnitPool_Get(_BYTE*);
__int64 game_menu_16f64c0(__int64, __int64, int, __int64, __int64);
__int64 game_menu_16f69a0(__int64, __int64, int, __int64, __int64);
extern __int64 (*GameData_20a0b00[])();
extern __int64 (*GameData_20a0b80[])();
extern __int64 (*GameData_20a0c00[])();
extern __int64 (*GameData_20a0c80[])();
__int64 game_gmap_anonymous_LegionMenuItem_ACall(__int64 a1);

__int64* LegionMenuItem_Unknown73(__int64 a1)
{
  __int64 v1;

  v1 = *(unsigned int*)(a1 + 40);
  if ((int)v1 >= 0) {
    return (
        __int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                             48LL) +
                  8 * v1);
  }
  else {
    return GameData_212ceb0;
  }
}

__int64 game_gmap_anonymous_LegionMenuItem_ACall(__int64 a1)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  _BYTE* v9;
  int v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  struct {
    _QWORD v23[4];
    _QWORD* v24;
  } v23_;
  struct {
    _QWORD v25[4];
    _QWORD* v26;
  } v25_;

  if (*(_BYTE*)(a1 + 82) != 1) {
    return 1;
  }
  v3 = *(unsigned int*)(a1 + 40);
  v5 = GameData_212cf80[0];
  v6 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) + 48LL);
  v7 = GameData_212ceb0;
  if ((int)v3 >= 0) {
    v8 = (__int64*)(v6 + 8LL * (unsigned int)v3);
  }
  else {
    v8 = GameData_212ceb0;
  }
  v10 = *((unsigned __int8*)v8 + 1);
  v9 = (char*)v8 + 1;
  if (v10 != 0) {
    v11 = game_UnitPool_Get(v9);
    v3 = *(unsigned int*)(a1 + 40);
    if (v11 != nullptr) {
      v12 = *(_QWORD*)(a1 + 8);
      v25_.v25[2] = v11;
      v23_.v24 = v23_.v23;
      if (*(_QWORD*)(v12 + 152) != 0) {
        v12 = *(_QWORD*)(v12 + 152);
      }
      v25_.v25[0] = GameData_20a0b00;
      v25_.v25[1] = a1;
      v25_.v26 = v25_.v25;
      v23_.v23[0] = GameData_20a0b80;
      v13 = game_menu_16f69a0(v12,
                              (__int64)"MID_LegionDispatchMenu_Owner_Confirm",
                              v3, (__int64)v25_.v25, (__int64)v23_.v23);
      goto LABEL_19;
    }
    v6 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v5 + 8LL) + 48LL);
  }
  v15 = (__int64*)(v6 + 8 * v3);
  if ((int)v3 < 0) {
    v15 = v7;
  }
  if (*((_DWORD*)v15 + 1) != 0) {
    v16 = *(_QWORD*)(a1 + 8);
    v23_.v24 = v23_.v23;
    if (*(_QWORD*)(v16 + 152) != 0) {
      v17 = *(_QWORD*)(v16 + 152);
    }
    else {
      v17 = v16;
    }
    v25_.v25[0] = GameData_20a0c00;
    v25_.v25[1] = a1;
    v25_.v26 = v25_.v25;
    v23_.v23[0] = GameData_20a0c80;
    v13 = game_menu_16f64c0(v17,
                            (__int64)"MID_LegionDispatchMenu_Dispatch_Confirm",
                            v3, (__int64)v25_.v25, (__int64)v23_.v23);
  LABEL_19:
    v18 = v13;
    if (v23_.v24 == v23_.v23) {
      v19 = 32;
    }
    else {
      if (v23_.v24 == nullptr) {
        goto LABEL_24;
      }
      v19 = 40;
    }
    (*(void (**)(__int64))(*v23_.v24 + v19))((__int64)v23_.v24);
  LABEL_24:
    if (v25_.v26 == v25_.v25) {
      v20 = 32;
    }
    else {
      if (v25_.v26 == nullptr) {
      LABEL_29:
        result = 12;
        *(_QWORD*)(v18 + 1576) = *(_QWORD*)(a1 + 96);
        return result;
      }
      v20 = 40;
    }
    (*(void (**)(__int64))(*v25_.v26 + v20))((__int64)v25_.v26);
    goto LABEL_29;
  }
  *(_DWORD*)(*GameData_2130e70 + 40) = v3;
  if (*(_QWORD*)GameData_2131860 != 0) {
    *(_DWORD*)(*(_QWORD*)GameData_2131860 + 272LL) = 18;
    return 4;
  }
  else {
    v21 = *(_QWORD*)GameData_21316c8;
    if (*(_QWORD*)GameData_21316c8 != 0) {
      *(_DWORD*)(v21 + 208) = 18;
      v22 = 5;
    }
    else {
      v21 = *(_QWORD*)GameData_212d750;
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 276LL) = 18;
      v22 = 12;
    }
    *(_DWORD*)(v21 + 152) = v22;
    return 4;
  }
}

__int64 LegionMenuItem_Unknown55(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64* v10;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v10 = v6;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak(v4);
  v6 = v10;
  if (v10 == nullptr) {
  LABEL_5:
    v6 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_6:
  v7 = *(unsigned int*)(a1 + 40);
  if ((int)v7 >= 0) {
    v8 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                               48LL) +
                    8 * v7);
  }
  else {
    v8 = GameData_212ceb0;
  }
  return GameRoutine_1582f00(v6, v8, *(_QWORD*)(a1 + 96));
}

__int64 game_gmap_anonymous_LegionMenuItem_ACall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;

  v1 = *(_QWORD*)(a1 + 8);
  LegionPool_937de0(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL),
                    *(_QWORD*)(a1 + 16));
  *(_DWORD*)(*GameData_2130e70 + 40) = *(_DWORD*)(v1 + 40);
  if (GameData_22549a8 != 0) {
    *(_DWORD*)(GameData_22549a8 + 272) = 18;
  }
  else {
    v2 = GameData_22506e0;
    if (GameData_22506e0 != 0) {
      *(_DWORD*)(GameData_22506e0 + 208) = 18;
      v3 = 5;
    }
    else {
      v2 = *(_QWORD*)GameData_212d750;
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 276LL) = 18;
      v3 = 12;
    }
    *(_DWORD*)(v2 + 152) = v3;
  }
  return 4;
}

__int64 game_gmap_anonymous_LegionMenuItem_ACall_closure1_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  int v7;
  _QWORD v9[2];

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(unsigned int*)(v1 + 40);
  if ((int)v2 >= 0) {
    v3 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                               48LL) +
                    8 * v2);
  }
  else {
    v3 = GameData_212ceb0;
  }
  v4 = *((_DWORD*)v3 + 1);
  v9[1] = &GameData_1a9f09e;
  v9[0] = v4;
  v5 = SpotMgr_132ffa0(v9);
  Spot_132b100(v5, 0);
  *(_DWORD*)(*GameData_2130e70 + 40) = *(_DWORD*)(v1 + 40);
  if (*(_QWORD*)GameData_2131860 != 0) {
    *(_DWORD*)(*(_QWORD*)GameData_2131860 + 272LL) = 18;
  }
  else {
    v6 = *(_QWORD*)GameData_21316c8;
    if (*(_QWORD*)GameData_21316c8 != 0) {
      *(_DWORD*)(v6 + 208) = 18;
      v7 = 5;
    }
    else {
      v6 = *(_QWORD*)GameData_212d750;
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 276LL) = 18;
      v7 = 12;
    }
    *(_DWORD*)(v6 + 152) = v7;
  }
  return 4;
}

#pragma GCC visibility pop
