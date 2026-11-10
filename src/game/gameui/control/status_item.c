#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 AsyncLoadThumbImage_188f620(void);
__int64 GameRoutine_1890220(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 GameRoutine_18a57c0(void);
__int64 GameRoutine_18a82e0(void);
__int64 GameRoutine_18a8b50(void);
__int64 GameRoutine_18a8f40(void);
__int64 GameRoutine_18a9940(void);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 LayoutAccessor_15636c0(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 StatusItem_188e530(__int64 a1, __int64 a2);
__int64 StatusItem_188e720(_QWORD* a1);
__int64 StatusItem_188e7e0(__int64 a1);
__int64 StatusItem_188e890(__int64 a1, __int64* a2);

__int64 StatusItem_188e530(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  char v16[4];
  char v17[4];

  *(_QWORD*)(a1 + 1136) = a2;
  *(_BYTE*)(a1 + 1145) = 1;
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, "T_Txt", 0);
  v4 = *(_QWORD*)(a1 + 1088);
  if (v4 != 0) {
    v5 = std___1___shared_weak_count_lock(v4);
    if (v5 != 0) {
      v6 = v5;
      if (*(_QWORD*)(a1 + 1080) != 0) {
        AsyncLoadThumbImage_188f620();
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
    }
  }
  LayoutAccessor_1562cf0(a1 + 88, "HellPoint");
  LayoutAccessor_15636c0(a1 + 88, "HellPoint", 0);
  result = *(_QWORD*)(a1 + 1104);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v8 = *(_QWORD*)(a1 + 1096);
      v9 = result;
      if (v8 != 0) {
        v16[0] = 1;
        v10 = game_Unit_GetParam(a2, v16, 1);
        v11 = *(char*)(a2 + 807);
        v17[0] = 1;
        v12 = (v10 / 5 + v11) & ~((v10 / 5 + v11) >> 31);
        v13 = game_Unit_GetParam(a2, v17, 0);
        GameRoutine_1890220(v8, v12,
                            (v13 / 5) & (unsigned int)~((v13 / 5) >> 31),
                            0xFFFFFFFFLL, 1, 0, 0xFFFFFFFFLL);
        result =
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v8 + 40LL))(v8, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        result = std___1___shared_weak_count___release_weak(v9);
      }
    }
  }
  v14 = *(_QWORD*)(a1 + 1112);
  if (v14 != 0) {
    *(_BYTE*)(v14 + 88) &= ~1u;
  }
  v15 = *(_QWORD*)(a1 + 1120);
  if (v15 != 0) {
    *(_BYTE*)(v15 + 88) &= ~1u;
  }
  return result;
}

__int64 StatusItem_188e720(_QWORD* a1)
{
  __int64 v2;
  int v3;
  unsigned int v5;

  if (((*(__int64 (**)(_QWORD*))(a1[129] + 8LL))(a1 + 129) & 1) == 0 ||
      ((*(__int64 (**)(_QWORD*))(*a1 + 144LL))(a1) & 1) == 0 ||
      ((*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1) & 1) == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(a1[1] + 24LL);
  while (1) {
    v2 = *(_QWORD*)(v2 + 24);
    if (v2 == 0) {
      break;
    }
    if ((*(_BYTE*)(v2 + 88) & 1) == 0) {
      return 0;
    }
  }
  v3 = *((unsigned __int8*)a1 + 1145);
  if ((v3 & 1) == 0 && *((_DWORD*)a1 + 282) == 42) {
    return 0;
  }
  v5 = v3 ^ 1;
  if (a1[142] != 0) {
    return 1;
  }
  else {
    return v5;
  }
}

__int64 StatusItem_188e7e0(__int64 a1)
{
  __int64 v2;
  int v3;
  unsigned int v5;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 8LL))(a1) & 1) == 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)(a1 - 1032) + 144LL))(a1 - 1032) &
       1) == 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)(a1 - 1032) + 32LL))(a1 - 1032) &
       1) == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(*(_QWORD*)(a1 - 1024) + 24LL);
  while (1) {
    v2 = *(_QWORD*)(v2 + 24);
    if (v2 == 0) {
      break;
    }
    if ((*(_BYTE*)(v2 + 88) & 1) == 0) {
      return 0;
    }
  }
  v3 = *(unsigned __int8*)(a1 + 113);
  if ((v3 & 1) == 0 && *(_DWORD*)(a1 + 96) == 42) {
    return 0;
  }
  v5 = v3 ^ 1;
  if (*(_QWORD*)(a1 + 104) != 0) {
    return 1;
  }
  else {
    return v5;
  }
}

__int64 StatusItem_188e890(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = result;
      result = *a2;
      if (*a2 != 0) {
        if (*(_QWORD*)(a1 + 1136) != 0) {
          if (*(_BYTE*)(a1 + 1146) == 1) {
            result = GameRoutine_18a9940();
          }
          else if (*(_BYTE*)(a1 + 1145) == 1) {
            result = GameRoutine_18a8f40();
          }
          else {
            result = GameRoutine_18a82e0();
          }
        }
        else if (*(_DWORD*)(a1 + 1128) == 42) {
          result = GameRoutine_18a57c0();
        }
        else {
          result = GameRoutine_18a8b50();
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
