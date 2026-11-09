#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*gfxa_GrassInfluenceMapUpdateTask_vtable[])();
extern __int64 game_g_frame_clock;
__int64 GrassInfluenceMapUpdateTask_Destructor(_QWORD* a1);

__int64 GrassInfluenceMapUpdateTask_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
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
  __int64 v24;
  __int64 v25;
  __int64 v26;
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
  __int64 result;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;

  *a1 = gfxa_GrassInfluenceMapUpdateTask_vtable;
  GameRoutine_6040f0(a1 + 13, game_g_frame_clock + 568);
  v2 = a1[151];
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = a1[149];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = a1[142];
  a1[142] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[141];
  a1[141] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = a1[135];
  a1[135] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  v7 = a1[134];
  a1[134] = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  v8 = a1[128];
  a1[128] = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  v9 = a1[127];
  a1[127] = 0;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  v10 = a1[121];
  a1[121] = 0;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
  }
  v11 = a1[120];
  a1[120] = 0;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
  v12 = a1[114];
  a1[114] = 0;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
  }
  v13 = a1[113];
  a1[113] = 0;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  v14 = a1[107];
  a1[107] = 0;
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
  }
  v15 = a1[106];
  a1[106] = 0;
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  v16 = a1[100];
  a1[100] = 0;
  if (v16 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
  }
  v17 = a1[99];
  a1[99] = 0;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
  }
  v18 = a1[93];
  a1[93] = 0;
  if (v18 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
  }
  v19 = a1[92];
  a1[92] = 0;
  if (v19 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 8LL))(v19);
  }
  v20 = a1[86];
  a1[86] = 0;
  if (v20 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
  }
  v21 = a1[85];
  a1[85] = 0;
  if (v21 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 8LL))(v21);
  }
  v22 = a1[79];
  a1[79] = 0;
  if (v22 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 8LL))(v22);
  }
  v23 = a1[78];
  a1[78] = 0;
  if (v23 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 8LL))(v23);
  }
  v24 = a1[72];
  a1[72] = 0;
  if (v24 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 8LL))(v24);
  }
  v25 = a1[71];
  a1[71] = 0;
  if (v25 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 8LL))(v25);
  }
  v26 = a1[65];
  a1[65] = 0;
  if (v26 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 8LL))(v26);
  }
  v27 = a1[64];
  a1[64] = 0;
  if (v27 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 8LL))(v27);
  }
  v28 = a1[58];
  a1[58] = 0;
  if (v28 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 8LL))(v28);
  }
  v29 = a1[57];
  a1[57] = 0;
  if (v29 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 8LL))(v29);
  }
  v30 = a1[51];
  a1[51] = 0;
  if (v30 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 8LL))(v30);
  }
  v31 = a1[50];
  a1[50] = 0;
  if (v31 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 8LL))(v31);
  }
  v32 = a1[44];
  a1[44] = 0;
  if (v32 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 8LL))(v32);
  }
  v33 = a1[43];
  a1[43] = 0;
  if (v33 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 8LL))(v33);
  }
  v34 = a1[37];
  a1[37] = 0;
  if (v34 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v34 + 8LL))(v34);
  }
  v35 = a1[36];
  a1[36] = 0;
  if (v35 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v35 + 8LL))(v35);
  }
  v36 = a1[30];
  a1[30] = 0;
  if (v36 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v36 + 8LL))(v36);
  }
  v37 = a1[29];
  a1[29] = 0;
  if (v37 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37 + 8LL))(v37);
  }
  result = GameRoutine_604050(a1 + 13);
  v39 = a1[9];
  if (v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
    result = std___1___shared_weak_count___release_weak(v39);
  }
  v40 = a1[7];
  if (v40 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
    result = std___1___shared_weak_count___release_weak(v40);
  }
  v41 = a1[5];
  if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
    result = std___1___shared_weak_count___release_weak(v41);
    v42 = a1[3];
    if (v42 == 0) {
      return result;
    }
  }
  else {
    v42 = a1[3];
    if (v42 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
    return std___1___shared_weak_count___release_weak(v42);
  }
  return result;
}

#pragma GCC visibility pop
