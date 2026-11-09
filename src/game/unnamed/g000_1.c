#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)
struct PseudoSret {
  _QWORD words[3];
};

extern __int64 GameData_204fdb0;
extern __int64 GameData_2057e80;
extern __int64 GameData_2057ec8;
extern __int64* GameData_212c878[6];
extern _UNKNOWN* GameData_212c8a8;
extern __int64* GameData_212cea0;
extern __int64 GameData_212dce8;
extern __int64* GameData_212e008[9];
extern __int64* GameData_21319e8[10];
extern __int64 GameData_21ee240;
extern __int64 GameData_21f4000;
__int64 GameRoutine_144ef80(_QWORD);
struct PseudoSret GameRoutine_1560070(_QWORD, _QWORD);
__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_15d2540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15d2c40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a6c0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameHr_13dcac0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int8* v14;
  unsigned int v15;
  bool v16;
  int v17;

  result = a1 + 152;
  if (a1 == 0) {
    return result;
  }
  v3 = a1;
  if (GameData_21ee240 != 0 && *(_BYTE*)(GameData_21ee240 + 152) == 3) {
    v4 = *(_DWORD*)(GameData_21ee240 + 156);
    v5 = *(_QWORD*)GameData_212dce8;
    if ((v4 & 8) != 0) {
      v6 = 2;
    }
    else {
      v6 = 3;
    }
    v7 = *(_QWORD*)(v5 + 256);
    v8 = *(_QWORD*)(v5 + 264);
    if ((v6 & v4) == 0) {
      if (v8 != 0) {
        v12 = *(_QWORD*)(v5 + 264);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                  memory_order_relaxed);
        v13 = GameRoutine_1a0a0c0(v12);
        result = GameRoutine_1a09c50(v8);
        if (v13 != 0) {
          if (v7 != 0) {
            result = GameRoutine_144ef80(v7);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            result = GameRoutine_1a09c50(v13);
          }
        }
      }
      goto LABEL_27;
    }
    if (v8 == 0) {
    LABEL_27:
      v14 = *(unsigned __int8**)(v3 + 16);
      if (v14 != nullptr) {
        v15 = *v14;
        v16 = v15 > 0x10;
        v17 = (1 << v15) & 0x1CE00;
        if (!v16 && v17 != 0) {
          *(_WORD*)(v3 + 136) |= 0x80u;
        }
      }
      *(_WORD*)(v3 + 136) |= 8u;
      return result;
    }
  }
  else {
    v8 = *(_QWORD*)(GameData_21f4000 + 264);
    if (v8 == 0) {
      goto LABEL_27;
    }
    v7 = *(_QWORD*)(GameData_21f4000 + 256);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                            memory_order_relaxed);
  v9 = GameRoutine_1a0a0c0(v8);
  result = GameRoutine_1a09c50(v8);
  if (v9 == 0) {
    goto LABEL_27;
  }
  v11 =
      v7 == 0 || (v10 = *(_QWORD*)(v7 + 424)) == 0 || *(_QWORD*)(v10 + 80) == 0;
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = GameRoutine_1a09c50(v9);
  }
  if (v11) {
    goto LABEL_27;
  }
  return result;
}

__int64 GameHr_1437140(__int64 a1)
{
  __int64 result;
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int8* v14;
  unsigned int v15;
  bool v16;
  int v17;

  result = a1 + 208;
  if (a1 == 0) {
    return result;
  }
  v3 = a1;
  if (GameData_21ee240 != 0 && *(_BYTE*)(GameData_21ee240 + 152) == 3) {
    v4 = *(_DWORD*)(GameData_21ee240 + 156);
    v5 = *(_QWORD*)GameData_212dce8;
    if ((v4 & 8) != 0) {
      v6 = 2;
    }
    else {
      v6 = 3;
    }
    v7 = *(_QWORD*)(v5 + 256);
    v8 = *(_QWORD*)(v5 + 264);
    if ((v6 & v4) == 0) {
      if (v8 != 0) {
        v12 = *(_QWORD*)(v5 + 264);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                  memory_order_relaxed);
        v13 = GameRoutine_1a0a0c0(v12);
        result = GameRoutine_1a09c50(v8);
        if (v13 != 0) {
          if (v7 != 0) {
            result = GameRoutine_144ef80(v7);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            result = GameRoutine_1a09c50(v13);
          }
        }
      }
      goto LABEL_27;
    }
    if (v8 == 0) {
    LABEL_27:
      v14 = *(unsigned __int8**)(v3 + 16);
      if (v14 != nullptr) {
        v15 = *v14;
        v16 = v15 > 0x10;
        v17 = (1 << v15) & 0x1CE00;
        if (!v16 && v17 != 0) {
          *(_WORD*)(v3 + 136) |= 0x80u;
        }
      }
      *(_WORD*)(v3 + 136) |= 8u;
      return result;
    }
  }
  else {
    v8 = *(_QWORD*)(GameData_21f4000 + 264);
    if (v8 == 0) {
      goto LABEL_27;
    }
    v7 = *(_QWORD*)(GameData_21f4000 + 256);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                            memory_order_relaxed);
  v9 = GameRoutine_1a0a0c0(v8);
  result = GameRoutine_1a09c50(v8);
  if (v9 == 0) {
    goto LABEL_27;
  }
  v11 =
      v7 == 0 || (v10 = *(_QWORD*)(v7 + 424)) == 0 || *(_QWORD*)(v10 + 80) == 0;
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = GameRoutine_1a09c50(v9);
  }
  if (v11) {
    goto LABEL_27;
  }
  return result;
}

__int64 GameHr_146d290(__int64 a1)
{
  __int64 result;
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int8* v14;
  unsigned int v15;
  bool v16;
  int v17;

  result = a1 + 208;
  if (a1 == 0) {
    return result;
  }
  v3 = a1;
  if (GameData_21ee240 != 0 && *(_BYTE*)(GameData_21ee240 + 152) == 3) {
    v4 = *(_DWORD*)(GameData_21ee240 + 156);
    v5 = *(_QWORD*)GameData_212dce8;
    if ((v4 & 8) != 0) {
      v6 = 2;
    }
    else {
      v6 = 3;
    }
    v7 = *(_QWORD*)(v5 + 256);
    v8 = *(_QWORD*)(v5 + 264);
    if ((v6 & v4) == 0) {
      if (v8 != 0) {
        v12 = *(_QWORD*)(v5 + 264);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                  memory_order_relaxed);
        v13 = GameRoutine_1a0a0c0(v12);
        result = GameRoutine_1a09c50(v8);
        if (v13 != 0) {
          if (v7 != 0) {
            result = GameRoutine_144ef80(v7);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            result = GameRoutine_1a09c50(v13);
          }
        }
      }
      goto LABEL_27;
    }
    if (v8 == 0) {
    LABEL_27:
      v14 = *(unsigned __int8**)(v3 + 16);
      if (v14 != nullptr) {
        v15 = *v14;
        v16 = v15 > 0x10;
        v17 = (1 << v15) & 0x1CE00;
        if (!v16 && v17 != 0) {
          *(_WORD*)(v3 + 136) |= 0x80u;
        }
      }
      *(_WORD*)(v3 + 136) |= 8u;
      return result;
    }
  }
  else {
    v8 = *(_QWORD*)(GameData_21f4000 + 264);
    if (v8 == 0) {
      goto LABEL_27;
    }
    v7 = *(_QWORD*)(GameData_21f4000 + 256);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                            memory_order_relaxed);
  v9 = GameRoutine_1a0a0c0(v8);
  result = GameRoutine_1a09c50(v8);
  if (v9 == 0) {
    goto LABEL_27;
  }
  v11 =
      v7 == 0 || (v10 = *(_QWORD*)(v7 + 424)) == 0 || *(_QWORD*)(v10 + 80) == 0;
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = GameRoutine_1a09c50(v9);
  }
  if (v11) {
    goto LABEL_27;
  }
  return result;
}

__int64 GameHr_15b99c0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  result = GameRoutine_1a0a6c0(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                               &GameData_204fdb0, 0);
  v13 = *(_QWORD*)(a1 + 336);
  if (v13 == 0) {
    return result;
  }
  v18 = v20;
  v19 = v21;
  v23 = v22;
  v1 = v13;
  v2 = result;
  if (*(_QWORD*)(v13 + 88) != 0) {
    v3 = *(_DWORD*)(v13 + 112);
    *(struct PseudoSret*)(&v16) =
        GameRoutine_1560070(result + 200, "L_InfoDetail");
    result = v17;
    if (v17 == 0) {
      return result;
    }
    v4 = *(unsigned __int8*)(v2 + 376);
    v5 = *(_QWORD*)(v2 + 360);
    v6 = GameRoutine_1a0a0c0(v17);
    if (v6 != 0) {
      v7 = v6;
      if (v16 != 0) {
        GameRoutine_15d2c40(v16, v1 + 108, v4, v5, v3, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        GameRoutine_1a09c50(v7);
      }
    }
    result = v17;
    if (v17 == 0) {
      return result;
    }
    return GameRoutine_1a09c50(result);
  }
  *(struct PseudoSret*)(&v14) =
      GameRoutine_1560070(result + 200, "L_InfoDetail");
  result = v15;
  if (v15 != 0) {
    v8 = *(unsigned __int8*)(v2 + 376);
    v9 = GameRoutine_1a0a0c0(v15);
    if (v9 != 0) {
      v10 = v9;
      if (v14 != 0) {
        GameRoutine_15d2c40(v14, GameData_212c8a8, v8, 0, 0, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        GameRoutine_1a09c50(v10);
      }
    }
    result = v15;
    if (v15 != 0) {
      return GameRoutine_1a09c50(result);
    }
  }
  return result;
}

__int64 GameHr_15cab80(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  char v5;
  _BYTE* v6;
  _DWORD* v7;
  __int64 v8;
  __int64 v9;
  _BOOL8 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  result = GameRoutine_1a0a6c0(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                               &GameData_2057ec8, 0);
  v17 = *(_QWORD*)(a1 + 336);
  if (v17 != 0) {
    v20 = v22;
    v21 = v23;
    v25 = v24;
    v1 = result;
    v2 = GameRoutine_1a0a6c0(v17, GameData_212e008[0], &GameData_2057e80, 0);
    v3 = GameData_212cea0;
    if (v2 != 0) {
      v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 560LL))(v2);
      v5 = *(_BYTE*)(v4 + 2);
      *(_WORD*)(v1 + 380) = *(_WORD*)v4;
      *(_BYTE*)(v1 + 382) = v5;
      v6 = (_BYTE*)(v4 + 3);
      v7 = (_DWORD*)(v4 + 4);
    }
    else {
      v6 = (char*)GameData_212cea0 + 3;
      *(_WORD*)(v1 + 380) = *(_WORD*)GameData_212cea0;
      *(_BYTE*)(v1 + 382) = *((_BYTE*)v3 + 2);
      v7 = (_DWORD*)v3 + 1;
    }
    v8 = v1 + 380;
    *(_BYTE*)(v1 + 383) = *v6;
    v9 = *v3;
    *(_DWORD*)(v1 + 384) = *v7;
    if (*(_QWORD*)(v1 + 380) == v9) {
      v10 = true;
    }
    else {
      v11 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                       8LL * (unsigned __int16)*(_QWORD*)(v1 + 380));
      v10 = *(unsigned __int8*)(v11 + 72) >= 8u &&
            (unsigned __int64)(*(_BYTE*)(v11 + 73) != 16);
    }
    GameRoutine_1567590("StatusChange", v10);
    *(struct PseudoSret*)(&v18) = GameRoutine_1560070(v1 + 200, "L_ItemDetail");
    result = v19;
    v12 = *(_BYTE*)(v1 + 389) != 0 ? *(_QWORD*)(v1 + 360) : 0LL;
    if (v19 != 0) {
      v13 = GameRoutine_1a0a0c0(v19);
      if (v13 != 0) {
        v14 = v13;
        if (v18 != 0) {
          GameRoutine_15d2540(v18, v8, v12);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
          GameRoutine_1a09c50(v14);
        }
      }
      result = v19;
      if (v19 != 0) {
        return GameRoutine_1a09c50(v19);
      }
    }
  }
  return result;
}

__int64 GameHr_15ce4b0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  char v5;
  _BYTE* v6;
  _DWORD* v7;
  __int64 v8;
  __int64 v9;
  _BOOL8 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  __int64 v17;
  _QWORD v18[8];

  result = GameRoutine_1a0a6c0(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                               &GameData_2057ec8, 0);
  v17 = *(_QWORD*)(a1 + 336);
  if (v17 != 0) {
    v18[2] = v18[4];
    v18[3] = v18[5];
    v18[7] = v18[6];
    v1 = result;
    v2 = GameRoutine_1a0a6c0(v17, GameData_212e008[0], &GameData_2057e80, 0);
    v3 = GameData_212cea0;
    if (v2 != 0) {
      v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 560LL))(v2);
      v5 = *(_BYTE*)(v4 + 2);
      *(_WORD*)(v1 + 380) = *(_WORD*)v4;
      *(_BYTE*)(v1 + 382) = v5;
      v6 = (_BYTE*)(v4 + 3);
      v7 = (_DWORD*)(v4 + 4);
    }
    else {
      v6 = (char*)GameData_212cea0 + 3;
      *(_WORD*)(v1 + 380) = *(_WORD*)GameData_212cea0;
      *(_BYTE*)(v1 + 382) = *((_BYTE*)v3 + 2);
      v7 = (_DWORD*)v3 + 1;
    }
    v8 = v1 + 380;
    *(_BYTE*)(v1 + 383) = *v6;
    v9 = *v3;
    *(_DWORD*)(v1 + 384) = *v7;
    if (*(_QWORD*)(v1 + 380) == v9) {
      v10 = true;
    }
    else {
      v11 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                       8LL * (unsigned __int16)*(_QWORD*)(v1 + 380));
      v10 = *(unsigned __int8*)(v11 + 72) >= 8u &&
            (unsigned __int64)(*(_BYTE*)(v11 + 73) != 16);
    }
    GameRoutine_1567590("StatusChange", v10);
    *(struct PseudoSret*)(v18) = GameRoutine_1560070(v1 + 200, "L_ItemDetail");
    result = v18[1];
    v12 = *(_BYTE*)(v1 + 389) != 0 ? *(_QWORD*)(v1 + 360) : 0LL;
    if (v18[1] != 0) {
      v13 = GameRoutine_1a0a0c0(v18[1]);
      if (v13 != 0) {
        v14 = v13;
        if (v18[0] != 0) {
          GameRoutine_15d2540(v18[0], v8, v12);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
          GameRoutine_1a09c50(v14);
        }
      }
      result = v18[1];
      if (v18[1] != 0) {
        return GameRoutine_1a09c50(v18[1]);
      }
    }
  }
  return result;
}

__int64 GameHr_194e190(__int64 a1)
{
  __int64 result;
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int8* v14;
  unsigned int v15;
  bool v16;
  int v17;

  result = a1 + 152;
  if (a1 == 0) {
    return result;
  }
  v3 = a1;
  if (GameData_21ee240 != 0 && *(_BYTE*)(GameData_21ee240 + 152) == 3) {
    v4 = *(_DWORD*)(GameData_21ee240 + 156);
    v5 = *(_QWORD*)GameData_212dce8;
    if ((v4 & 8) != 0) {
      v6 = 2;
    }
    else {
      v6 = 3;
    }
    v7 = *(_QWORD*)(v5 + 256);
    v8 = *(_QWORD*)(v5 + 264);
    if ((v6 & v4) == 0) {
      if (v8 != 0) {
        v12 = *(_QWORD*)(v5 + 264);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                  memory_order_relaxed);
        v13 = GameRoutine_1a0a0c0(v12);
        result = GameRoutine_1a09c50(v8);
        if (v13 != 0) {
          if (v7 != 0) {
            result = GameRoutine_144ef80(v7);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            result = GameRoutine_1a09c50(v13);
          }
        }
      }
      goto LABEL_27;
    }
    if (v8 == 0) {
    LABEL_27:
      v14 = *(unsigned __int8**)(v3 + 16);
      if (v14 != nullptr) {
        v15 = *v14;
        v16 = v15 > 0x10;
        v17 = (1 << v15) & 0x1CE00;
        if (!v16 && v17 != 0) {
          *(_WORD*)(v3 + 136) |= 0x80u;
        }
      }
      *(_WORD*)(v3 + 136) |= 8u;
      return result;
    }
  }
  else {
    v8 = *(_QWORD*)(GameData_21f4000 + 264);
    if (v8 == 0) {
      goto LABEL_27;
    }
    v7 = *(_QWORD*)(GameData_21f4000 + 256);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                            memory_order_relaxed);
  v9 = GameRoutine_1a0a0c0(v8);
  result = GameRoutine_1a09c50(v8);
  if (v9 == 0) {
    goto LABEL_27;
  }
  v11 =
      v7 == 0 || (v10 = *(_QWORD*)(v7 + 424)) == 0 || *(_QWORD*)(v10 + 80) == 0;
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = GameRoutine_1a09c50(v9);
  }
  if (v11) {
    goto LABEL_27;
  }
  return result;
}

#pragma GCC visibility pop
