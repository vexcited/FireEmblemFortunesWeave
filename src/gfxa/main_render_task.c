#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 MainRenderTask_bb8650(__int64 result, __int64* a2);

__int64 MainRenderTask_bb8650(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  unsigned int v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;

  v3 = *a2;
  v2 = a2[1];
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  v4 = *(_QWORD*)(result + 32);
  *(_QWORD*)(result + 24) = v3;
  *(_QWORD*)(result + 32) = v2;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v5 = result;
    v6 = a2;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    a2 = v6;
    result = v5;
  }
  v7 = *((_DWORD*)a2 + 4);
  v8 = 1;
  v9 = 0;
  *(_DWORD*)(result + 40) = v7;
  v10 = *(__int64*)((char*)a2 + 20);
  v11 = *(__int64*)((char*)a2 + 28);
  *(_DWORD*)(result + 60) = *((_DWORD*)a2 + 9);
  *(_QWORD*)(result + 52) = v11;
  *(_QWORD*)(result + 44) = v10;
  if ((v7 & 0x80000000) != 0) {
    v13 = 0;
  }
  else {
    v12 = *(_QWORD*)(result + 24);
    v13 = 0;
    if ((signed int)v7 < *(_DWORD*)v12) {
      v14 = (__int64*)(*(_QWORD*)(v12 + 112) + 48LL * v7);
      v13 = *v14;
      v9 = v14[1];
      if (v9 != 0) {
        v8 = 0;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                  memory_order_relaxed);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                  memory_order_relaxed);
      }
    }
  }
  v15 = *(_QWORD*)(result + 72);
  *(_QWORD*)(result + 64) = v13;
  *(_QWORD*)(result + 72) = v9;
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    v17 = result;
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
    result = v17;
    if ((v8 & 1) != 0) {
      goto LABEL_17;
    }
  }
  else if ((v8 & 1) != 0) {
    goto LABEL_17;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v16 = result;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
    result = v16;
  }

LABEL_17:
  v18 = *(_QWORD**)(result + 1520);
  v20 = *(_QWORD*)(result + 24);
  v19 = *(_QWORD*)(result + 32);
  v21 = result;
  if (v19 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                              memory_order_relaxed);
  }
  v22 = v18[2];
  v18[1] = v20;
  v18[2] = v19;
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    result = std___1___shared_weak_count___release_weak(v22);
  }
  v24 = *(_QWORD*)(v21 + 64);
  v23 = *(_QWORD*)(v21 + 72);
  if (v23 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                              memory_order_relaxed);
  }
  v25 = v18[4];
  v18[3] = v24;
  v18[4] = v23;
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    result = std___1___shared_weak_count___release_weak(v25);
  }
  v26 = *(_QWORD**)(v21 + 1528);
  v28 = *(_QWORD*)(v21 + 24);
  v27 = *(_QWORD*)(v21 + 32);
  if (v27 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                              memory_order_relaxed);
  }
  v29 = v26[2];
  v26[1] = v28;
  v26[2] = v27;
  if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    result = std___1___shared_weak_count___release_weak(v29);
  }
  v31 = *(_QWORD*)(v21 + 64);
  v30 = *(_QWORD*)(v21 + 72);
  if (v30 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8), 1u,
                              memory_order_relaxed);
  }
  v32 = v26[4];
  v26[3] = v31;
  v26[4] = v30;
  if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
    result = std___1___shared_weak_count___release_weak(v32);
  }
  v33 = *(_QWORD*)(v21 + 1536);
  v35 = *(_QWORD*)(v21 + 24);
  v34 = *(_QWORD*)(v21 + 32);
  if (v34 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 8), 1u,
                              memory_order_relaxed);
  }
  v36 = *(_QWORD*)(v33 + 16);
  *(_QWORD*)(v33 + 8) = v35;
  *(_QWORD*)(v33 + 16) = v34;
  if (v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
    result = std___1___shared_weak_count___release_weak(v36);
  }
  v37 = *(_QWORD*)(v21 + 1544);
  v38 = *(_DWORD*)(v21 + 40);
  v40 = *(_QWORD*)(v21 + 24);
  v39 = *(_QWORD*)(v21 + 32);
  if (v39 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v39 + 8), 1u,
                              memory_order_relaxed);
  }
  v41 = *(_QWORD*)(v37 + 16);
  *(_QWORD*)(v37 + 8) = v40;
  *(_QWORD*)(v37 + 16) = v39;
  if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
    result = std___1___shared_weak_count___release_weak(v41);
  }
  v43 = *(_QWORD*)(v21 + 64);
  v42 = *(_QWORD*)(v21 + 72);
  if (v42 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 8), 1u,
                              memory_order_relaxed);
  }
  v44 = *(_QWORD*)(v37 + 32);
  *(_QWORD*)(v37 + 24) = v43;
  *(_QWORD*)(v37 + 32) = v42;
  if (v44 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
    result = std___1___shared_weak_count___release_weak(v44);
  }
  *(_DWORD*)(v37 + 88) = v38;
  v45 = *(_QWORD**)(v21 + 1552);
  v47 = *(_QWORD*)(v21 + 24);
  v46 = *(_QWORD*)(v21 + 32);
  if (v46 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v46 + 8), 1u,
                              memory_order_relaxed);
  }
  v48 = v45[2];
  v45[1] = v47;
  v45[2] = v46;
  if (v48 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
    result = std___1___shared_weak_count___release_weak(v48);
  }
  v50 = *(_QWORD*)(v21 + 64);
  v49 = *(_QWORD*)(v21 + 72);
  if (v49 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 8), 1u,
                              memory_order_relaxed);
  }
  v51 = v45[4];
  v45[3] = v50;
  v45[4] = v49;
  if (v51 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
    result = std___1___shared_weak_count___release_weak(v51);
  }
  v52 = *(_QWORD*)(v21 + 1616);
  *(_BYTE*)(v21 + 1667) = 0;
  *(_QWORD*)(v21 + 1608) = 0;
  *(_QWORD*)(v21 + 1616) = 0;
  *(_BYTE*)(v21 + 1664) = 1;
  *(_DWORD*)(v21 + 1676) = 3;
  if (v52 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
    return std___1___shared_weak_count___release_weak(v52);
  }
  return result;
}

#pragma GCC visibility pop
