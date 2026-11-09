#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e0e00(void);
__int64 GameRoutine_17e5830(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17e6660(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17e67b0(_QWORD);
__int64 GameRoutine_17e68f0(_QWORD, _QWORD);
__int64 GameRoutine_579160(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_206dab8[])();
extern __int64 (*GameData_206db08[])();
extern __int64 game_g_game_setting;
__int64 TutorialInfo_Unknown114(__int64 a1);
__int64 TutorialInfo_Unknown135(__int64 a1);
__int64 TutorialInfo_162ba40(__int64 a1);
__int64 TutorialInfo_Unknown136(__int64 a1, __int64 a2);
__int64 TutorialInfo_162ba90(__int64 a1, __int64 a2);
__int64 TutorialInfo_Unknown115(__int64 a1);
__int64 TutorialInfo_Unknown84(_QWORD* a1);

__int64 TutorialInfo_Unknown114(__int64 a1)
{
  if ((*(_BYTE*)(a1 + 1080) & 1) != 0) {
    return 3;
  }
  else {
    return GameRoutine_16e0e00();
  }
}

__int64 TutorialInfo_Unknown135(__int64 a1)
{
  GameRoutine_17e67b0(*(_QWORD*)(a1 + 1064));
  return 0;
}

__int64 TutorialInfo_162ba40(__int64 a1)
{
  GameRoutine_17e67b0(*(_QWORD*)(a1 + 888));
  return 0;
}

__int64 TutorialInfo_Unknown136(__int64 a1, __int64 a2)
{
  GameRoutine_17e6660(*(_QWORD*)(a1 + 1064), a2, 0);
  return 0;
}

__int64 TutorialInfo_162ba90(__int64 a1, __int64 a2)
{
  GameRoutine_17e6660(*(_QWORD*)(a1 + 888), a2, 0);
  return 0;
}

__int64 TutorialInfo_Unknown115(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int8 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(_QWORD*)(a1 + 1064);
  v3 = *(_QWORD*)(v1 + 272);
  if (v3 != 0) {
    v4 = std___1___shared_weak_count_lock(v3);
    if (v4 != 0) {
      v5 = *(_QWORD*)(v1 + 264);
      if (v5 != 0) {
        if ((*(_BYTE*)(v5 + 240) & 1) != 0) {
          v6 = 1;
        }
        else {
          v8 = v4;
          v6 =
              (unsigned __int8)(*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD))(
                  *(_QWORD*)v5 + 160LL))((_QWORD*)v5, *(_QWORD*)(v1 + 264));
          v4 = v8;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if ((v6 & 1) == 0) {
            goto LABEL_13;
          }
          return 0;
        }
        v9 = v4;
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v9);
        if ((v6 & 1) != 0) {
          return 0;
        }
      }
      else if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
        v7 = v4;
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v7);
      }
    }
  }

LABEL_13:
  if ((*(_BYTE*)(game_g_game_setting + 807) == 1 &&
           ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
            *(_BYTE*)(game_g_game_setting + 940) == 1 &&
                (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
                (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0) ||
       *(_BYTE*)(game_g_game_setting + 903) == 1 &&
           ((*(_BYTE*)(game_g_game_setting + 900) & 1) != 0 ||
            *(_BYTE*)(game_g_game_setting + 940) == 1 &&
                (*(_BYTE*)(game_g_game_setting + 901) & 1) != 0 &&
                (*(_BYTE*)(game_g_game_setting + 902) & 1) != 0)) &&
      (*(_BYTE*)(a1 + 1080) & 1) != 0 &&
      (*(_BYTE*)(game_g_game_setting + 952) & 3) == 0) {
    return 0;
  }
  if ((GameRoutine_17e6660(*(_QWORD*)(a1 + 1064), 1, 1) & 1) != 0) {
    return 13;
  }
  else {
    return 3;
  }
}

__int64 TutorialInfo_Unknown84(_QWORD* a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;

  if (a1[108] == 0) {
    goto LABEL_17;
  }
  v3 = a1[107];
  if (v3 == 0) {
    goto LABEL_17;
  }
  v4 = std___1___shared_weak_count_lock(v3);
  if (v4 != 0) {
    v5 = a1[106];
    if (v5 != 0) {
      v1 = *(unsigned __int8*)(v5 + 24);
      v6 = v5 + 152;
      if (v1 == 0) {
        v6 = 0;
      }
      v7 = v6 != a1[108];
    }
    else {
      v7 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v7) {
        goto LABEL_11;
      }
    }
    else {
      v13 = v4;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v13);
      if (v7) {
        goto LABEL_11;
      }
    }
    if ((v1 & 1) != 0) {
      goto LABEL_13;
    }
  LABEL_17:
    v9 = 0;
    v10 = a1[107];
    if (v10 == 0) {
      goto LABEL_14;
    }
    goto LABEL_18;
  }

LABEL_11:
  v8 = a1[107];
  if (v8 == 0 || *(_QWORD*)(v8 + 8) == -1) {
    goto LABEL_17;
  }

LABEL_13:
  v9 = a1[108];
  v10 = a1[107];
  if (v10 == 0) {
  LABEL_14:
    v11 = 0;
    v12 = 0;
    goto LABEL_21;
  }

LABEL_18:
  v12 = std___1___shared_weak_count_lock(v10);
  if (v12 != 0) {
    v11 = a1[106];
  }
  else {
    v11 = 0;
  }

LABEL_21:
  v14 = (_QWORD*)GameRoutine_579160(352, 16);
  v15 = v14 + 4;
  v16 = v14;
  v14[1] = 0;
  v14[2] = 0;
  *v14 = GameData_206dab8;
  GameRoutine_17e5830(v14 + 4, v9, v11, 1);
  v16[4] = GameData_206db08;
  a1[133] = v15;
  v17 = a1[134];
  a1[134] = v16;
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak(v17);
  }
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  return GameRoutine_17e68f0(a1[133], a1[132]);
}

#pragma GCC visibility pop
