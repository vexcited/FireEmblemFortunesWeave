#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e779a0(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_2203490;
__int64 LinkMenuItem_Unknown6();
__int64 LinkMenuItem_Unknown25(_QWORD* a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_2068f10[])();
extern __int64 (*game_cmdbtl_anonymous_LinkSelectMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ea58;
extern int GameData_225c924;
__int64 game_cmdbtl_anonymous_LinkMenuItem_CreateSubMenu(int** a1,
                                                         unsigned int a2);

__int64 LinkMenuItem_Unknown6()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
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
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  int v27;
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
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  char v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;
  int v50;
  bool v51;
  __int64 v52;
  unsigned int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  char v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  int v73;
  __int64 v74;
  int v75;
  __int64 v76;
  __int64 v77;

  v0 = GameData_2203490;
  v1 = *(_QWORD*)(GameData_2203490 + 640);
  v2 = *(_QWORD*)(GameData_2203490 + 648);
  if (v2 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
    if (v1 != 0) {
      goto LABEL_4;
    }
  }
  else if (v1 != 0) {
    goto LABEL_4;
  }
  v1 = *(_QWORD*)(v0 + 656);
  v6 = *(_QWORD*)(v0 + 664);
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
      if ((*(_BYTE*)(v1 + 60) & 0x40) == 0) {
        goto LABEL_5;
      }
      return 0;
    }
  }

LABEL_4:
  if ((*(_BYTE*)(v1 + 60) & 0x40) != 0) {
    return 0;
  }

LABEL_5:
  v3 = GameData_2203490;
  v4 = *(_QWORD*)(GameData_2203490 + 640);
  v5 = *(_QWORD*)(GameData_2203490 + 648);
  if (v5 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v8 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
    v4 = v8;
    if (v8 != 0) {
      goto LABEL_18;
    }
  }
  else if (v4 != 0) {
    goto LABEL_18;
  }
  v4 = *(_QWORD*)(v3 + 656);
  v9 = *(_QWORD*)(v3 + 664);
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v10 = v4;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
      v4 = v10;
    }
  }

LABEL_18:
  v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  v12 = GameData_2203490;
  v13 = v11;
  v14 = *(_QWORD*)(GameData_2203490 + 640);
  v15 = *(_QWORD*)(GameData_2203490 + 648);
  if (v15 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v16 = v14;
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
    v14 = v16;
    if (v16 != 0) {
      goto LABEL_26;
    }
  }
  else if (v14 != 0) {
    goto LABEL_26;
  }
  v14 = *(_QWORD*)(v12 + 656);
  v17 = *(_QWORD*)(v12 + 664);
  if (v17 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v18 = v14;
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
      std___1___shared_weak_count___release_weak(v17);
      v14 = v18;
    }
  }

LABEL_26:
  v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
  v20 = *(_QWORD*)(v19 + 88);
  if (v20 != 0) {
    v21 = 1;
    v22 = *(_QWORD*)(v19 + 80);
    v23 = *(_QWORD*)(v19 + 88);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                              memory_order_relaxed);
    v24 = std___1___shared_weak_count_lock(v23);
    if (v24 == 0) {
      v22 = 0;
    }
    std___1___shared_weak_count___release_weak(v20);
    v76 = v22;
    v77 = v24;
    if (v24 != 0) {
      v21 = 0;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  else {
    v24 = 0;
    v76 = 0;
    v77 = 0;
    v21 = 1;
  }
  v25 = GameRoutine_e779a0(v13, &v76, 0);
  v26 = v77;
  v27 = v25;
  if (v77 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v77 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    std___1___shared_weak_count___release_weak(v26);
  }
  if ((v21 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    std___1___shared_weak_count___release_weak(v24);
  }
  v28 = GameData_2203490;
  v29 = *(_QWORD*)(GameData_2203490 + 640);
  v30 = *(_QWORD*)(GameData_2203490 + 648);
  if (v30 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v31 = v29;
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    std___1___shared_weak_count___release_weak(v30);
    v29 = v31;
    if (v31 != 0) {
      goto LABEL_46;
    }
  }
  else if (v29 != 0) {
    goto LABEL_46;
  }
  v29 = *(_QWORD*)(v28 + 656);
  v32 = *(_QWORD*)(v28 + 664);
  if (v32 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v33 = v29;
      (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
      std___1___shared_weak_count___release_weak(v32);
      v29 = v33;
    }
  }

LABEL_46:
  v34 = (*(__int64 (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
  v35 = GameData_2203490;
  v36 = v34;
  v37 = *(_QWORD*)(GameData_2203490 + 640);
  v38 = *(_QWORD*)(GameData_2203490 + 648);
  if (v38 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v39 = v37;
    (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
    std___1___shared_weak_count___release_weak(v38);
    v37 = v39;
    if (v39 != 0) {
      goto LABEL_54;
    }
  }
  else if (v37 != 0) {
    goto LABEL_54;
  }
  v37 = *(_QWORD*)(v35 + 656);
  v40 = *(_QWORD*)(v35 + 664);
  if (v40 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v41 = v37;
      (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
      std___1___shared_weak_count___release_weak(v40);
      v37 = v41;
    }
  }

LABEL_54:
  v42 = (*(__int64 (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
  v43 = *(_QWORD*)(v42 + 88);
  if (v43 != 0) {
    v44 = 1;
    v45 = *(_QWORD*)(v42 + 80);
    v46 = *(_QWORD*)(v42 + 88);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 16), 1u,
                              memory_order_relaxed);
    v47 = std___1___shared_weak_count_lock(v46);
    if (v47 == 0) {
      v45 = 0;
    }
    std___1___shared_weak_count___release_weak(v43);
    v76 = v45;
    v77 = v47;
    if (v47 != 0) {
      v44 = 0;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v47 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  else {
    v47 = 0;
    v76 = 0;
    v77 = 0;
    v44 = 1;
  }
  v48 = GameRoutine_e779a0(v36, &v76, 1);
  v49 = v77;
  v50 = v48;
  if (v77 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v77 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
    std___1___shared_weak_count___release_weak(v49);
  }
  if ((v44 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
    std___1___shared_weak_count___release_weak(v47);
  }
  v51 = v27 == 0 || v50 == 0;
  v52 = GameData_2203490;
  v53 = v51;
  v54 = *(_QWORD*)(GameData_2203490 + 640);
  v55 = *(_QWORD*)(GameData_2203490 + 648);
  if (v55 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v55 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v56 = v54;
    (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
    std___1___shared_weak_count___release_weak(v55);
    v54 = v56;
    if (v56 != 0) {
      goto LABEL_80;
    }
  }
  else if (v54 != 0) {
    goto LABEL_80;
  }
  v54 = *(_QWORD*)(v52 + 656);
  v57 = *(_QWORD*)(v52 + 664);
  if (v57 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v57 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v58 = v54;
      (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
      std___1___shared_weak_count___release_weak(v57);
      v54 = v58;
    }
  }

LABEL_80:
  v59 = (*(__int64 (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
  v60 = GameData_2203490;
  v61 = v59;
  v62 = *(_QWORD*)(GameData_2203490 + 640);
  v63 = *(_QWORD*)(GameData_2203490 + 648);
  if (v63 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v63 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v64 = v62;
    (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
    std___1___shared_weak_count___release_weak(v63);
    v62 = v64;
    if (v64 == 0) {
    LABEL_85:
      v62 = *(_QWORD*)(v60 + 656);
      v65 = *(_QWORD*)(v60 + 664);
      if (v65 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v65 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v66 = v62;
          (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65);
          std___1___shared_weak_count___release_weak(v65);
          v62 = v66;
        }
      }
    }
  }
  else if (v62 == 0) {
    goto LABEL_85;
  }
  v67 = (*(__int64 (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
  v68 = *(_QWORD*)(v67 + 88);
  if (v68 != 0) {
    v69 = 1;
    v70 = *(_QWORD*)(v67 + 80);
    v71 = *(_QWORD*)(v67 + 88);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v68 + 16), 1u,
                              memory_order_relaxed);
    v72 = std___1___shared_weak_count_lock(v71);
    if (v72 == 0) {
      v70 = 0;
    }
    std___1___shared_weak_count___release_weak(v68);
    v76 = v70;
    v77 = v72;
    if (v72 != 0) {
      v69 = 0;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v72 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  else {
    v72 = 0;
    v76 = 0;
    v77 = 0;
    v69 = 1;
  }
  v73 = GameRoutine_e779a0(v61, &v76, 2);
  v74 = v77;
  v75 = v73;
  if (v77 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v77 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v74 + 16LL))(v74);
    std___1___shared_weak_count___release_weak(v74);
  }
  if ((v69 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v72 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v72 + 16LL))(v72);
    std___1___shared_weak_count___release_weak(v72);
  }
  if (v75 != 0) {
    return v53;
  }
  else {
    return 1;
  }
}

__int64 LinkMenuItem_Unknown25(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[1];
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = a1[1];
  }
  (*(void (**)(_QWORD*, __int64))(*a1 + 568LL))(a1, v3);
  return 10;
}

__int64 game_cmdbtl_anonymous_LinkMenuItem_CreateSubMenu(int** a1,
                                                         unsigned int a2)
{
  __int64 v4;
  int v5;
  __int64 v6;
  __int64* v7;
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
  char v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 result;
  int* v34;
  __int64 v35;
  int v36;
  _QWORD v37[4];
  _QWORD* v38;
  __int64 v39;
  __int64 v40;

  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      208, 16, 0);
  v5 = **a1;
  **a1 = v5 + 1;
  v6 = *(_QWORD*)a1[1];
  v38 = v37;
  *(_WORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_DWORD*)(v4 + 144) = a2;
  *(_DWORD*)(v4 + 40) = v5;
  *(_WORD*)(v4 + 80) = 257;
  *(_BYTE*)(v4 + 82) = 1;
  *(_QWORD*)v4 = game_cmdbtl_anonymous_LinkSelectMenuItem_vtable;
  *(_QWORD*)(v4 + 8) = 0;
  *(_QWORD*)(v4 + 160) = GameData_2068f10;
  v37[0] = GameData_2068f10;
  v37[1] = v6;
  *(_QWORD*)(v4 + 192) = v4 + 160;
  *(_QWORD*)(v4 + 168) = v6;
  v7 = GameData_212ea58;
  v8 = *GameData_212ea58;
  v9 = *(_QWORD*)(*GameData_212ea58 + 640);
  v10 = *(_QWORD*)(*GameData_212ea58 + 648);
  if (v10 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v11 = v9;
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
    v9 = v11;
    if (v11 != 0) {
      goto LABEL_9;
    }
  }
  else if (v9 != 0) {
    goto LABEL_9;
  }
  v9 = *(_QWORD*)(v8 + 656);
  v12 = *(_QWORD*)(v8 + 664);
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v13 = v9;
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak(v12);
      v9 = v13;
    }
  }
LABEL_9:
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
  v15 = *v7;
  v16 = v14;
  v17 = *(_QWORD*)(*v7 + 640);
  v18 = *(_QWORD*)(*v7 + 648);
  if (v18 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v19 = v17;
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v18);
    v17 = v19;
    if (v19 != 0) {
      goto LABEL_17;
    }
  }
  else if (v17 != 0) {
    goto LABEL_17;
  }
  v17 = *(_QWORD*)(v15 + 656);
  v20 = *(_QWORD*)(v15 + 664);
  if (v20 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v21 = v17;
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      std___1___shared_weak_count___release_weak(v20);
      v17 = v21;
    }
  }
LABEL_17:
  v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
  v23 = *(_QWORD*)(v22 + 88);
  if (v23 != 0) {
    v24 = 1;
    v25 = *(_QWORD*)(v22 + 80);
    v26 = *(_QWORD*)(v22 + 88);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 16), 1u,
                              memory_order_relaxed);
    v27 = std___1___shared_weak_count_lock(v26);
    if (v27 == 0) {
      v25 = 0;
    }
    std___1___shared_weak_count___release_weak(v23);
    v39 = v25;
    v40 = v27;
    if (v27 != 0) {
      v24 = 0;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  else {
    v27 = 0;
    v39 = 0;
    v40 = 0;
    v24 = 1;
  }
  v28 = GameRoutine_e779a0(v16, &v39, a2);
  v30 = v40;
  if (v40 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    v31 = v28;
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    std___1___shared_weak_count___release_weak(v30);
    v28 = v31;
  }
  *(_BYTE*)(v4 + 82) = v28 == 0;
  if ((v24 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    std___1___shared_weak_count___release_weak(v27);
  }
  if (v38 == v37) {
    v32 = 32;
  }
  else {
    if (v38 == nullptr) {
      goto LABEL_34;
    }
    v32 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v38 + v32))(v38, v29);
LABEL_34:
  result = BasicMenuCursor_16e0c00(*(_QWORD*)a1[2], v4);
  if (a2 != GameData_225c924) {
    return result;
  }
  v34 = a1[2];
  v35 = *(_QWORD*)v34;
  result = *(_QWORD*)(*(_QWORD*)v34 + 336LL);
  if (result == v4) {
    goto LABEL_40;
  }
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 168LL))(result);
  }
  *(_QWORD*)(v35 + 336) = v4;
  _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v35, 0, 1, 0);
  result = *(_QWORD*)(v35 + 336);
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 160LL))(result);
    result = *(_QWORD*)(v35 + 336);
  LABEL_40:
    v36 = 4;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 120LL))(result);
      if ((result & 1) != 0) {
        v36 = 4;
      }
      else {
        v36 = 0;
      }
    }
    goto LABEL_45;
  }
  v36 = 4;
LABEL_45:
  *(_DWORD*)(v35 + 356) = *(_DWORD*)(v35 + 356) & 0xFFFFFFFB | v36;
  return result;
}

#pragma GCC visibility pop
