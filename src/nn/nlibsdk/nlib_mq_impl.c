#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nlib_mq_1485c0(__int64 a1, _QWORD* a2, unsigned int* a3, __int64 a4,
                       int a5);

__int64 nlib_mq_1485c0(__int64 a1, _QWORD* a2, unsigned int* a3, __int64 a4,
                       int a5)
{
  unsigned int v5;
  unsigned int i;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  __int64 v11;
  unsigned int v12;
  unsigned __int64 explicit;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  unsigned int v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned int v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned int v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  char v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  bool v57;
  unsigned int v58;

  if (*(int*)(a1 + 80) < 1) {
    return 9;
  }
  if (a5 == 1) {
    return 22;
  }
  v5 = atomic_load((unsigned int*)(a1 + 8));
  if (v5 == 0) {
    return 9;
  }
  i = *(_DWORD*)(a1 + 12);
  if (i == 0) {
    if (a5 == 2) {
      return 2;
    }
    else {
      return 11;
    }
  }
  v7 = __clz(i) ^ 0x1F;
  v8 = __clz(__rbit32(i));
  if (a5 == 2) {
    v9 = v7;
  }
  else {
    v9 = v8;
  }
  v10 = 1 << v9;
  v11 = *(_QWORD*)(a1 + 40) + 16LL * v9;
  if (a5 == 2) {
    v12 = 2;
  }
  else {
    v12 = 11;
  }
  while (2) {
    explicit = atomic_load_explicit((atomic_ullong* volatile)v11,
                                    memory_order_acquire);
    v14 = *(_QWORD*)(v11 + 8);
  LABEL_12:
    while (1) {
      v16 = *(_QWORD*)(a1 + 56);
      v15 = *(_QWORD*)(a1 + 64);
      v17 = v15 & explicit | v16;
      v18 = atomic_load_explicit((atomic_ullong* volatile)(v17 + 8),
                                 memory_order_acquire);
      if (explicit == *(_QWORD*)v11) {
        break;
      }
      v14 = *(_QWORD*)(v11 + 8);
      explicit = *(_QWORD*)v11;
    }
    v19 = (__int64*)(v15 & v14 | v16);
    while ((__int64*)v17 == v19) {
      if ((v18 & 1) == 0) {
        explicit = atomic_load_explicit((atomic_ullong* volatile)v11,
                                        memory_order_acquire);
        v45 = (*(_QWORD*)(a1 + 64) & v18 | (*(_QWORD*)(a1 + 64) + 1LL)) +
              (v14 & ~*(_QWORD*)(a1 + 64));
        v46 = v14;
        atomic_compare_exchange_strong_explicit(
            (atomic_ullong* volatile)(v11 + 8), &v46, v45, memory_order_relaxed,
            memory_order_relaxed);
        if (v46 == v14) {
          v14 = v45;
        }
        else {
          v14 = v46;
        }
        goto LABEL_12;
      }
      v26 = *(_DWORD*)(a1 + 12);
      if ((v26 & v10) != 0) {
        v27 = *(_DWORD*)(a1 + 12);
        do {
          atomic_compare_exchange_strong_explicit(
              (atomic_uint* volatile)(a1 + 12), (unsigned int*)&v27, v26 & ~v10,
              memory_order_acquire, memory_order_acquire);
          if (v27 == v26) {
            break;
          }
          v26 = v27;
        } while ((v27 & v10) != 0);
      }
      v28 = atomic_load_explicit((atomic_ullong* volatile)v11,
                                 memory_order_acquire);
      v29 = *(_QWORD*)(v11 + 8);
      while (1) {
        while (1) {
          v31 = *(_QWORD*)(a1 + 56);
          v30 = *(_QWORD*)(a1 + 64);
          v32 = v30 & v28 | v31;
          v33 = atomic_load_explicit((atomic_ullong* volatile)(v32 + 8),
                                     memory_order_acquire);
          if (v28 == *(_QWORD*)v11) {
            break;
          }
          v29 = *(_QWORD*)(v11 + 8);
          v28 = *(_QWORD*)v11;
        }
        if (v32 != (v30 & v29 | v31)) {
          v41 = *(_DWORD*)(a1 + 12);
          if ((v41 & v10) != 0) {
            i = *(_DWORD*)(a1 + 12);
          }
          else {
            i = *(_DWORD*)(a1 + 12);
            while (1) {
              atomic_compare_exchange_strong_explicit(
                  (atomic_uint* volatile)(a1 + 12), &i, v41 | v10,
                  memory_order_relaxed, memory_order_relaxed);
              if (i == v41) {
                break;
              }
              v41 = i;
              if ((i & v10) != 0) {
                goto LABEL_45;
              }
            }
            i = v41 | v10;
          }
          goto LABEL_45;
        }
        if ((v33 & 1) != 0) {
          break;
        }
        v28 = atomic_load_explicit((atomic_ullong* volatile)v11,
                                   memory_order_acquire);
        v34 = (*(_QWORD*)(a1 + 64) & v33 | (*(_QWORD*)(a1 + 64) + 1LL)) +
              (v29 & ~*(_QWORD*)(a1 + 64));
        v35 = v29;
        atomic_compare_exchange_strong_explicit(
            (atomic_ullong* volatile)(v11 + 8), &v35, v34, memory_order_relaxed,
            memory_order_relaxed);
        if (v35 == v29) {
          v29 = v34;
        }
        else {
          v29 = v35;
        }
      }
      i = *(_DWORD*)(a1 + 12);
      if (i == 0) {
        return v12;
      }
    LABEL_45:
      v39 = 31 - __clz(i);
      v40 = __clz(__rbit32(i));
      if (a5 == 2) {
        v9 = v39;
      }
      else {
        v9 = v40;
      }
    LABEL_20:
      v10 = 1 << v9;
      v11 = *(_QWORD*)(a1 + 40) + 16LL * (int)v9;
      explicit = atomic_load_explicit((atomic_ullong* volatile)v11,
                                      memory_order_acquire);
      v14 = *(_QWORD*)(v11 + 8);
      v24 = *(_QWORD*)(a1 + 56);
      v25 = *(_QWORD*)(a1 + 64);
      v17 = v25 & explicit | v24;
      v19 = (__int64*)(v25 & v14 | v24);
      v18 = atomic_load_explicit((atomic_ullong* volatile)(v17 + 8),
                                 memory_order_acquire);
      if (explicit != *(_QWORD*)v11) {
        v14 = *(_QWORD*)(v11 + 8);
        explicit = *(_QWORD*)v11;
        goto LABEL_12;
      }
    }
    v20 = (__int64*)(*(_QWORD*)(a1 + 64) & v18 | *(_QWORD*)(a1 + 56));
    v21 = *v20;
    __builtin_arm_dmb(9u);
    if (v20 == v19) {
      for (i = *(_DWORD*)(a1 + 12);; i = v38) {
        v36 = 31 - __clz(i);
        v37 = __clz(__rbit32(i));
        if (a5 != 2) {
          v36 = v37;
        }
        if (v36 != v9) {
          v9 = v36;
          if (i != 0) {
            goto LABEL_20;
          }
          return v12;
        }
        v38 = i;
        atomic_compare_exchange_strong_explicit(
            (atomic_uint* volatile)(a1 + 12), &v38, i & ~v10,
            memory_order_relaxed, memory_order_relaxed);
        if (v38 == i) {
          break;
        }
      }
      v43 = explicit;
      atomic_compare_exchange_strong(
          (atomic_ullong* volatile)v11, &v43,
          (*(_QWORD*)(a1 + 64) & v18 | (*(_QWORD*)(a1 + 64) + 1LL)) +
              (explicit & ~*(_QWORD*)(a1 + 64)));
      if (v43 != explicit) {
        v44 = i;
        do {
          atomic_compare_exchange_strong_explicit(
              (atomic_uint* volatile)(a1 + 12), &v44, i | v10,
              memory_order_relaxed, memory_order_relaxed);
          if (v44 == i) {
            break;
          }
          i = v44;
        } while ((v44 & v10) == 0);
        continue;
      }
      if (*(_QWORD*)(v11 + 8) != v14 ||
          ((v48 = atomic_load((unsigned __int64*)v19 + 1)) & 1) == 0) {
        v58 = i;
        do {
          atomic_compare_exchange_strong_explicit(
              (atomic_uint* volatile)(a1 + 12), &v58, i | v10,
              memory_order_relaxed, memory_order_relaxed);
          if (v58 == i) {
            break;
          }
          i = v58;
        } while ((v58 & v10) == 0);
      }
    }
    else {
      if (a5 == 2) {
        while (1) {
          v22 = i;
          atomic_compare_exchange_strong_explicit(
              (atomic_uint* volatile)(a1 + 12), &i, i, memory_order_relaxed,
              memory_order_relaxed);
          if (i == v22) {
            break;
          }
          v23 = 31 - __clz(i);
          if (v23 != v9) {
          LABEL_19:
            v9 = v23;
            if (i == 0) {
              return v12;
            }
            goto LABEL_20;
          }
        }
      }
      else {
        while (1) {
          v22 = i;
          atomic_compare_exchange_strong_explicit(
              (atomic_uint* volatile)(a1 + 12), &i, i, memory_order_relaxed,
              memory_order_relaxed);
          if (i == v22) {
            break;
          }
          v23 = __clz(__rbit32(i));
          if (v23 != v9) {
            goto LABEL_19;
          }
        }
      }
      v42 = explicit;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)v11, &v42,
          (*(_QWORD*)(a1 + 64) & v18 | (*(_QWORD*)(a1 + 64) + 1LL)) +
              (explicit & ~*(_QWORD*)(a1 + 64)),
          memory_order_relaxed, memory_order_relaxed);
      if (v42 != explicit) {
        explicit = atomic_load_explicit((atomic_ullong* volatile)v11,
                                        memory_order_acquire);
        v14 = *(_QWORD*)(v11 + 8);
        i = v22;
        goto LABEL_12;
      }
    }
    break;
  }
  *a2 = v21;
  *a3 = v9;
  v49 = *(_QWORD*)(a1 + 64);
  v50 = *(_QWORD*)(a1 + 48);
  v51 = v49 & explicit | *(_QWORD*)(a1 + 56);
  v52 = atomic_load((unsigned __int64*)(v51 + 8));
  v53 = (v52 | v49) + 1;
  *(_QWORD*)(v51 + 8) = v53 | v50 & v49;
  v54 = (*(_QWORD*)(a1 + 64) & v51 | (*(_QWORD*)(a1 + 64) + 1LL)) +
        (v50 & ~*(_QWORD*)(a1 + 64));
  v55 = v50;
  atomic_compare_exchange_strong((atomic_ullong* volatile)(a1 + 48),
                                 (unsigned __int64*)&v55, v54);
  if (v55 != v50) {
    v56 = v55;
    do {
      v12 = 0;
      *(_QWORD*)(v51 + 8) = v55 & v49 | v53;
      v54 = (*(_QWORD*)(a1 + 64) & v54 | (*(_QWORD*)(a1 + 64) + 1LL)) +
            (v55 & ~*(_QWORD*)(a1 + 64));
      atomic_compare_exchange_strong((atomic_ullong* volatile)(a1 + 48),
                                     (unsigned __int64*)&v56, v54);
      v57 = v56 == v55;
      v55 = v56;
    } while (!v57);
    return v12;
  }
  return 0;
}

#pragma GCC visibility pop
