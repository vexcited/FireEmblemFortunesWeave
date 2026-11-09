#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CScriptArray_Reserve(_QWORD, _QWORD);
__int64 GameRoutine_25ec90(_QWORD, _QWORD);
__int64 memchr(_QWORD, _QWORD, _QWORD);
extern __int64 GameData_2199c60;
extern __int64 GameData_2199c70;
extern __int64 GameData_2199c78;
extern __int64 GameData_2199c88;
extern __int64 GameData_2199c90;
extern __int64 GameData_2199ca0;
extern __int64 GameData_2199ca8;
extern __int64 GameData_2199cb8;
extern __int64 GameData_2199cc0;
extern __int64 GameData_2199cd0;
extern __int64 GameData_2199cd8;
extern __int64 GameData_2199ce8;
extern __int64 GameData_2199cf0;
extern __int64 GameData_2199d00;
extern __int64 GameData_2199d08;
extern __int64 GameData_2199d18;
extern __int64 GameData_2199d20;
extern __int64 GameData_2199d30;
extern __int64 GameData_2199d38;
extern __int64 GameData_2199d48;
__int64 FxBase_19a460(__int64 a1);
__int64 FxBase_19aa50(__int64 a1);
__int64 FxBase_1a5180();
__int64 FxBase_1aa0e0(unsigned __int8* a1, unsigned int a2,
                      unsigned __int8* a3);

__int64 FxBase_19a460(__int64 a1)
{
  __int64 v1;

  v1 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  *(_BYTE*)(v1 + 12) = 0;
  return atomic_fetch_add((atomic_uint* volatile)(v1 + 8), 1u) + 1;
}

__int64 FxBase_19aa50(__int64 a1)
{
  unsigned int v2;
  __int64 v3;

  v2 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 72LL))(a1, 0);
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  return CScriptArray_Reserve(v3, v2);
}

__int64 FxBase_1a5180()
{
  __int64 result;

  if ((GameData_2199d38 & 1) != 0) {
    result = GameRoutine_25ec90(GameData_2199d48,
                                GameData_2199d38 & 0xFFFFFFFFFFFFFFFELL);
    if ((GameData_2199d20 & 1) == 0) {
    LABEL_3:
      if ((GameData_2199d08 & 1) == 0) {
        goto LABEL_4;
      }
      goto LABEL_14;
    }
  }
  else if ((GameData_2199d20 & 1) == 0) {
    goto LABEL_3;
  }
  result = GameRoutine_25ec90(GameData_2199d30,
                              GameData_2199d20 & 0xFFFFFFFFFFFFFFFELL);
  if ((GameData_2199d08 & 1) == 0) {
  LABEL_4:
    if ((GameData_2199cf0 & 1) == 0) {
      goto LABEL_5;
    }
    goto LABEL_15;
  }

LABEL_14:
  result = GameRoutine_25ec90(GameData_2199d18,
                              GameData_2199d08 & 0xFFFFFFFFFFFFFFFELL);
  if ((GameData_2199cf0 & 1) == 0) {
  LABEL_5:
    if ((GameData_2199cd8 & 1) == 0) {
      goto LABEL_6;
    }
    goto LABEL_16;
  }

LABEL_15:
  result = GameRoutine_25ec90(GameData_2199d00,
                              GameData_2199cf0 & 0xFFFFFFFFFFFFFFFELL);
  if ((GameData_2199cd8 & 1) == 0) {
  LABEL_6:
    if ((GameData_2199cc0 & 1) == 0) {
      goto LABEL_7;
    }
    goto LABEL_17;
  }

LABEL_16:
  result = GameRoutine_25ec90(GameData_2199ce8,
                              GameData_2199cd8 & 0xFFFFFFFFFFFFFFFELL);
  if ((GameData_2199cc0 & 1) == 0) {
  LABEL_7:
    if ((GameData_2199ca8 & 1) == 0) {
      goto LABEL_8;
    }
    goto LABEL_18;
  }

LABEL_17:
  result = GameRoutine_25ec90(GameData_2199cd0,
                              GameData_2199cc0 & 0xFFFFFFFFFFFFFFFELL);
  if ((GameData_2199ca8 & 1) == 0) {
  LABEL_8:
    if ((GameData_2199c90 & 1) == 0) {
      goto LABEL_9;
    }
    goto LABEL_19;
  }

LABEL_18:
  result = GameRoutine_25ec90(GameData_2199cb8,
                              GameData_2199ca8 & 0xFFFFFFFFFFFFFFFELL);
  if ((GameData_2199c90 & 1) == 0) {
  LABEL_9:
    if ((GameData_2199c78 & 1) == 0) {
      goto LABEL_10;
    }
    goto LABEL_20;
  }

LABEL_19:
  result = GameRoutine_25ec90(GameData_2199ca0,
                              GameData_2199c90 & 0xFFFFFFFFFFFFFFFELL);
  if ((GameData_2199c78 & 1) == 0) {
  LABEL_10:
    if ((GameData_2199c60 & 1) == 0) {
      return result;
    }
    return GameRoutine_25ec90(GameData_2199c70,
                              GameData_2199c60 & 0xFFFFFFFFFFFFFFFELL);
  }

LABEL_20:
  result = GameRoutine_25ec90(GameData_2199c88,
                              GameData_2199c78 & 0xFFFFFFFFFFFFFFFELL);
  if ((GameData_2199c60 & 1) != 0) {
    return GameRoutine_25ec90(GameData_2199c70,
                              GameData_2199c60 & 0xFFFFFFFFFFFFFFFELL);
  }
  return result;
}

__int64 FxBase_1aa0e0(unsigned __int8* a1, unsigned int a2, unsigned __int8* a3)
{
  unsigned __int64 v3;
  bool v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int8* v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  unsigned __int8* v11;
  __int64 v12;
  __int64 v13;

  v3 = *a1;
  v4 = (v3 & 1) == 0;
  v5 = v3 >> 1;
  if (v4) {
    v6 = v5;
  }
  else {
    v6 = *((_QWORD*)a1 + 1);
  }
  v7 = *a3;
  if (v4) {
    v8 = a1 + 1;
  }
  else {
    v8 = *((unsigned __int8**)a1 + 2);
  }
  v9 = *((unsigned __int8**)a3 + 2);
  v4 = (v7 & 1) == 0;
  v10 = v7 >> 1;
  if (v4) {
    v9 = a3 + 1;
  }
  else {
    v10 = *((_QWORD*)a3 + 1);
  }
  v11 = v9 - 1;
  if (v10 > a2) {
    v12 = a2 + 1LL;
  }
  else {
    v12 = v10;
  }
  while (v12 != 0) {
    v13 = memchr(v8, v11[v12--], v6);
    if (v13 == 0) {
      return (unsigned int)v12;
    }
  }
  return 0xFFFFFFFFLL;
}

#pragma GCC visibility pop
