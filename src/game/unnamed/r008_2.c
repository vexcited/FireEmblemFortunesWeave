#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char GameData_1ae3834[];

extern __int64 GameData_212bf68;

extern __int64 GameData_212dce8;

extern __int64 GameData_2265ee0;

__int64 GameRoutine_138e5e0(_QWORD, _QWORD);

__int64 GameRoutine_14107c0(_QWORD, _QWORD);

__int64 GameRoutine_14127e0(_QWORD, _QWORD);

_QWORD* GameRoutine_144f120(_QWORD* __return_ptr, _QWORD, _QWORD);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a09c70(_QWORD);

__int64 GameRoutine_1a0a0c0(_QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD);

__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_7a7dc0(const char*, ...);

_QWORD* GameHr_1495a90()
{
  _QWORD* v0;
  char* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* result;
  _QWORD* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD v32[2];
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  char* v36;

  v0 = (_QWORD*)GameData_212dce8;
  v1 = (char*)&v34 + 1;
  v2 = GameRoutine_138e5e0(*(_QWORD*)GameData_212dce8, 0);
  if (v2 == 0) {
    goto LABEL_26;
  }
  v3 = v2;
  v4 = GameRoutine_7a7dc0(GameData_1ae3834, 0);
  v5 = GameRoutine_1a09c70(v4);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_65;
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)GameRoutine_651b90(GameData_2265ee0, v8, 16, 0);
    v35 = v6;
    v36 = v7;
    v34 = v8 | 1;
    goto LABEL_10;
  }
  v7 = (char*)&v34 + 1;
  LOBYTE(v34) = 2 * v5;
  if (v5 != 0) {
  LABEL_10:
    GameRoutine_1a0b940(v7, v4, v6);
  }
  v7[v6] = 0;
  GameRoutine_14107c0(v32, &v34);
  v9 = *(_QWORD*)(v3 + 112);
  v10 = *(_QWORD*)(v3 + 120);
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_14127e0(v9, v32);
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      GameRoutine_1a09c50(v10);
    }
    if ((v32[0] & 1) == 0) {
      goto LABEL_21;
    }
    goto LABEL_17;
  }
  GameRoutine_14127e0(v9, v32);
  if ((v32[0] & 1) != 0) {
  LABEL_17:
    if (v33 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v11 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v11);
    }
  }
LABEL_21:
  if ((v34 & 1) != 0 && v36 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v12 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v12);
  }
LABEL_26:
  result = (_QWORD*)GameRoutine_138e5e0(*v0, 1);
  if (result == nullptr) {
    goto LABEL_51;
  }
  v14 = result;
  v15 = GameRoutine_7a7dc0(GameData_1ae3834, 1);
  v5 = GameRoutine_1a09c70(v15);
  if (v5 > 0xFFFFFFFFFFFFFFF6LL) {
  LABEL_65:
    GameRoutine_60a1d0(v5);
  }
  v16 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (v5 | 7) + 1;
    }
    v1 = (char*)GameRoutine_651b90(GameData_2265ee0, v17, 16, 0);
    v35 = v16;
    v36 = v1;
    v34 = v17 | 1;
    goto LABEL_35;
  }
  LOBYTE(v34) = 2 * v5;
  if (v5 != 0) {
  LABEL_35:
    GameRoutine_1a0b940(v1, v15, v16);
  }
  v1[v16] = 0;
  GameRoutine_14107c0(v32, &v34);
  v18 = v14[14];
  v19 = v14[15];
  if (v19 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                              memory_order_relaxed);
    result = (_QWORD*)GameRoutine_14127e0(v18, v32);
    if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      result = (_QWORD*)GameRoutine_1a09c50(v19);
    }
    if ((v32[0] & 1) == 0) {
      goto LABEL_46;
    }
    goto LABEL_42;
  }
  result = (_QWORD*)GameRoutine_14127e0(v18, v32);
  if ((v32[0] & 1) != 0) {
  LABEL_42:
    if (v33 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v20 = 56;
      }
      result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v20);
    }
  }
LABEL_46:
  if ((v34 & 1) != 0 && v36 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v21 = 56;
    }
    result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v21);
  }
LABEL_51:
  v22 = *(_QWORD*)(*v0 + 264LL);
  if (v22 != 0) {
    v23 = *(_QWORD*)(*v0 + 256LL);
    v24 = *(_QWORD*)(*v0 + 264LL);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 16), 1u,
                              memory_order_relaxed);
    v25 = GameRoutine_1a0a0c0(v24);
    result = (_QWORD*)GameRoutine_1a09c50(v22);
    if (v25 != 0) {
      if (v23 != 0) {
        v26 = GameData_212bf68;
        v27 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 48, 16, 0);
        v32[0] = 49;
        v32[1] = 41;
        v33 = v27;
        *(_WORD*)(v27 + 40) = 173;
        *(_QWORD*)(v27 + 16) = 0x83E38683E35FAF82LL;
        *(_QWORD*)(v27 + 24) = 0x5FA882E39E83E3ABLL;
        *(_QWORD*)(v27 + 32) = 0xB8E4B1A9E89ABCE4LL;
        *(_QWORD*)v27 = 0x83E3A183E3AB82E3LL;
        *(_QWORD*)(v27 + 8) = 0xE3BC83E3AF83E3A9LL;
        result = GameRoutine_144f120(&v30, v23, v32);
        v28 = v31;
        if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
          result = (_QWORD*)GameRoutine_1a09c50(v28);
        }
        if ((v32[0] & 1) != 0 && v33 != 0) {
          v29 = 128;
          if (*(_QWORD*)(*(_QWORD*)v26 + 200LL) == 0) {
            v29 = 56;
          }
          result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)v26 + v29);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
        return (_QWORD*)GameRoutine_1a09c50(v25);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
