#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_22587e8;
extern __int64 ui_LayoutAccessor_empty_;
__int64 BasicMenuItem_16e5110(__int64 a1, __int64* a2);
__int64 BasicMenuItem_16e5340(__int64 result, char a2);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 BasicMenuItem_16e5720(_QWORD* a1);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__n64 BasicMenuItem_16e54e0(__int64 a1);

__int64 BasicMenuItem_16e5110(__int64 a1, __int64* a2)
{
  int v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _BOOL4 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  *(_BYTE*)(a1 + 78) = 1;
  v5 = *a2;
  v4 = a2[1];
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
  }
  v6 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 48) = v5;
  *(_QWORD*)(a1 + 56) = v4;
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak(v6);
    v4 = *(_QWORD*)(a1 + 56);
  }
  if (v4 != 0) {
    v7 = std___1___shared_weak_count_lock(v4);
    if (v7 != 0) {
      v8 = *(__int64**)(a1 + 48);
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v8 != nullptr) {
          goto LABEL_9;
        }
      }
      else {
        v9 = v7;
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v9);
        if (v8 != nullptr) {
        LABEL_9:
          if (v8[2] == 0) {
            return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 128LL))(a1);
          }
          goto LABEL_13;
        }
      }
    }
  }
  v8 = &ui_LayoutAccessor_empty_;
  if (GameData_22587e8 == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 128LL))(a1);
  }

LABEL_13:
  v10 = v8[1];
  if (v10 == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 128LL))(a1);
  }
  v11 = std___1___shared_weak_count_lock(v10);
  if (v11 == 0) {
  LABEL_22:
    v15 = v8[1];
    if (v15 == 0 || *(_QWORD*)(v15 + 8) == -1) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 128LL))(a1);
    }
    goto LABEL_27;
  }
  v12 = *v8;
  if (*v8 != 0) {
    v2 = *(unsigned __int8*)(v12 + 24);
    v13 = v12 + 152;
    if (v2 == 0) {
      v13 = 0;
    }
    v14 = v13 != v8[2];
  }
  else {
    v14 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v14) {
      goto LABEL_22;
    }
  }
  else {
    v16 = v11;
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v16);
    if (v14) {
      goto LABEL_22;
    }
  }
  if ((v2 & 1) == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 128LL))(a1);
  }

LABEL_27:
  v17 = *(_QWORD*)(a1 + 56);
  if (v17 == 0) {
    goto LABEL_32;
  }
  v18 = std___1___shared_weak_count_lock(v17);
  if (v18 == 0) {
    goto LABEL_32;
  }
  v19 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v20 = v18;
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v20);
  }
  if (v19 == nullptr) {
  LABEL_32:
    v19 = &ui_LayoutAccessor_empty_;
  }
  v21 = std___1___shared_weak_count_lock(v19[1]);
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    v22 = v21;
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak(v22);
  }
  v23 = *(_QWORD*)(v19[2] + 24);
  v24 = *(_QWORD*)(v23 + 48);
  *(_DWORD*)(a1 + 72) = *(_DWORD*)(v23 + 56);
  *(_QWORD*)(a1 + 64) = v24;
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 128LL))(a1);
}

__int64 BasicMenuItem_16e5340(__int64 result, char a2)
{
  int v2;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _BOOL4 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  atomic_ullong* v15;
  __int64* v16;
  __int64* v17;

  v4 = result;
  if ((a2 & 1) != 0) {
    if ((*(_BYTE*)(result + 77) & 1) == 0) {
      *(_BYTE*)(result + 78) = 1;
    }
    goto LABEL_33;
  }
  result = *(_QWORD*)(result + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = *(__int64**)(v4 + 48);
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v5 != nullptr) {
          goto LABEL_8;
        }
      }
      else {
        v6 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak(v6);
        if (v5 != nullptr) {
        LABEL_8:
          if (v5[2] == 0) {
            goto LABEL_33;
          }
          goto LABEL_12;
        }
      }
    }
  }
  v5 = &ui_LayoutAccessor_empty_;
  if (GameData_22587e8 == 0) {
    goto LABEL_33;
  }

LABEL_12:
  result = v5[1];
  if (result == 0) {
    goto LABEL_33;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
  LABEL_21:
    v10 = v5[1];
    if (v10 == 0 || *(_QWORD*)(v10 + 8) == -1) {
      goto LABEL_33;
    }
    goto LABEL_26;
  }
  v7 = *v5;
  if (*v5 != 0) {
    v2 = *(unsigned __int8*)(v7 + 24);
    v8 = v7 + 152;
    if (v2 == 0) {
      v8 = 0;
    }
    v9 = v8 != v5[2];
  }
  else {
    v9 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v9) {
      goto LABEL_21;
    }
  }
  else {
    v11 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak(v11);
    if (v9) {
      goto LABEL_21;
    }
  }
  if ((v2 & 1) != 0) {
  LABEL_26:
    v12 = *(_QWORD*)(v4 + 56);
    if (v12 == 0) {
      goto LABEL_31;
    }
    v13 = std___1___shared_weak_count_lock(v12);
    if (v13 == 0) {
      goto LABEL_31;
    }
    v14 = v13;
    v15 = (atomic_ullong*)(v13 + 8);
    v16 = *(__int64**)(v4 + 48);
    if (atomic_fetch_add(v15, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      v17 = v16;
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak(v14);
      v16 = v17;
    }
    if (v16 == nullptr) {
    LABEL_31:
      v16 = &ui_LayoutAccessor_empty_;
    }
    result = GameRoutine_155e830(v16, 0);
  }

LABEL_33:
  *(_BYTE*)(v4 + 77) = a2 & 1;
  return result;
}

__n64 BasicMenuItem_16e54e0(__int64 a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __n64 result;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BOOL4 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int32x4_t* v27;

  v3 = *(_QWORD*)(a1 + 56);
  if (v3 != 0) {
    v4 = std___1___shared_weak_count_lock_alt1(v3);
    if (v4 != 0) {
      v5 = *(__int64**)(a1 + 48);
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v5 != nullptr) {
          goto LABEL_5;
        }
      }
      else {
        v6 = v4;
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak_alt1(v6);
        if (v5 != nullptr) {
        LABEL_5:
          if (v5[2] == 0) {
            return ((__n64){0});
          }
          goto LABEL_9;
        }
      }
    }
  }
  v5 = &ui_LayoutAccessor_empty_;
  if (GameData_22587e8 == 0) {
    return ((__n64){0});
  }
LABEL_9:
  v7 = v5[1];
  if (v7 == 0) {
    return ((__n64){0});
  }
  v8 = std___1___shared_weak_count_lock_alt1(v7);
  if (v8 != 0) {
    v9 = *v5;
    if (*v5 != 0) {
      v1 = *(unsigned __int8*)(v9 + 24);
      v10 = v9 + 152;
      if (v1 == 0) {
        v10 = 0;
      }
      v11 = v10 != v5[2];
    }
    else {
      v11 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v11) {
        goto LABEL_18;
      }
    }
    else {
      v23 = v8;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak_alt1(v23);
      if (v11) {
        goto LABEL_18;
      }
    }
    if ((v1 & 1) != 0) {
      goto LABEL_20;
    }
    return ((__n64){0});
  }
LABEL_18:
  v12 = v5[1];
  if (v12 == 0 || *(_QWORD*)(v12 + 8) == -1) {
    return ((__n64){0});
  }
LABEL_20:
  v13 = *(_QWORD*)(a1 + 56);
  if (v13 == 0) {
    goto LABEL_25;
  }
  v14 = std___1___shared_weak_count_lock_alt1(v13);
  if (v14 == 0) {
    goto LABEL_25;
  }
  v15 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v16 = v14;
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak_alt1(v16);
  }
  if (v15 == nullptr) {
  LABEL_25:
    v15 = &ui_LayoutAccessor_empty_;
  }
  LANES64(result).n64_u64[0] = 0;
  if (v15[2] != 0) {
    v18 = v15[1];
    if (v18 != 0) {
      v19 = std___1___shared_weak_count_lock_alt1(v18);
      if (v19 == 0) {
        goto LABEL_40;
      }
      v20 = *v15;
      if (*v15 != 0) {
        LODWORD(v5) = *(unsigned __int8*)(v20 + 24);
        v21 = v20 + 152;
        if ((_DWORD)v5 == 0) {
          v21 = 0;
        }
        v22 = v21 != v15[2];
      }
      else {
        v22 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v24 = v19;
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        std___1___shared_weak_count___release_weak_alt1(v24);
      }
      if (!v22) {
        LANES64(result).n64_u64[0] = 0;
        if (((unsigned __int8)v5 & 1) == 0) {
          return result;
        }
      }
      else {
      LABEL_40:
        v25 = v15[1];
        LANES64(result).n64_u64[0] = 0;
        if (v25 == 0 || *(_QWORD*)(v25 + 8) == -1) {
          return result;
        }
      }
      v26 = v15[2];
      if (v26 != 0) {
        v27 = *(int32x4_t**)(v26 + 24);
        if (v27 != nullptr) {
          LANES64(result).n64_u32[0] =
              LANES128_OF(vdupq_laneq_s32(v27[7], 3)).n128_u32[0];
          LANES64(result).n64_u32[1] = HIDWORD(LANES128(v27[8]).n128_u64[1]);
        }
      }
    }
  }
  return result;
}

__int64 BasicMenuItem_16e5720(_QWORD* a1)
{
  int v1;
  __int64 result;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  long double v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  result = a1[7];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v4 = (__int64*)a1[6];
      if (v4 == nullptr || v4[2] == 0 || v4[1] == 0) {
        goto LABEL_31;
      }
      v5 = result;
      v6 = std___1___shared_weak_count_lock(v4[1]);
      *(_QWORD*)&v7 = 0;
      v8 = v6;
      result = v5;
      if (v8 == 0) {
        goto LABEL_16;
      }
      v9 = *v4;
      if (*v4 != 0) {
        v1 = *(unsigned __int8*)(v9 + 24);
        v10 = v9 + 152;
        if (v1 == 0) {
          v10 = 0;
        }
        v11 = v10 != v4[2];
      }
      else {
        v11 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v8 + 16LL))(v8, v7);
        std___1___shared_weak_count___release_weak(v8);
        result = v5;
      }
      if (!v11) {
        if ((v1 & 1) == 0) {
        LABEL_31:
          if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v16 = result;
            (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
            return std___1___shared_weak_count___release_weak(v16);
          }
          return result;
        }
      }
      else {
      LABEL_16:
        v12 = v4[1];
        if (v12 == 0 || *(_QWORD*)(v12 + 8) == -1) {
          goto LABEL_31;
        }
      }
      if (ui_LayoutAccessor_FindPane(v4, "LctCursor") != 0) {
        result = v5;
      }
      else {
        if (v4[2] != 0) {
          v13 = v4[1];
          if (v13 != 0) {
            v14 = std___1___shared_weak_count_lock(v13);
            if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              v15 = v14;
              (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
              std___1___shared_weak_count___release_weak(v15);
            }
          }
        }
        if (ui_LayoutAccessor_FindPane(v4, "Frm") == 0) {
          (*(void (**)(_QWORD*))(*a1 + 88LL))(a1);
        }
        result = v5;
      }
      goto LABEL_31;
    }
  }
  return result;
}

#pragma GCC visibility pop
