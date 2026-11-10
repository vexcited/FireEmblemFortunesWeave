#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};

extern __int64 GameData_212dce8;

extern __int64 GameData_21ee240;

extern __int64 GameData_21f4000;

__int64 GameRoutine_144ef80(_QWORD);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a0a0c0(_QWORD);

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
