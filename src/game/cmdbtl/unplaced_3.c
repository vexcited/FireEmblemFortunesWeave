#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameHr_ea8da0(int*, int*);
__int64 GameRoutine_ea9100(__int64 result, _QWORD*, _QWORD*, unsigned __int64);
__int64 MindBtlInfo_Destructor(_QWORD*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_cmdbtl_ea86a0_alt1(__int64 result, __int64, __int64,
                                __int64) __asm__("game_cmdbtl_ea86a0");
__int64 std___1___shared_weak_count___release_weak(__int64);
bool game_19f0540(_QWORD*, _QWORD*);
extern __int64 (*game_cmdbtl_MindBtlInfo_vtable[])();
extern __int64 GameData_212f738;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_ea6540();
int* game_cmdbtl_ea86a0(int* result, int* a2, int* a3, int* a4);
bool game_cmdbtl_ea87c0(int* a1, int* a2);
bool game_cmdbtl_18fc9c0(__int64* a1, __int64* a2, __int64* a3, __int64*** a4);
bool game_cmdbtl_18fcec0(__int64* a1, __int64* a2, __int64* a3, __int64* a4,
                         __int64*** a5);
bool game_cmdbtl_18fd220(__int64* a1, __int64* a2, __int64* a3, __int64* a4,
                         __int64* a5, __int64*** a6);
bool game_cmdbtl_18fd680(__int64* a1, __int64* a2, __int64*** a3);

int* game_cmdbtl_ea86a0(int* result, int* a2, int* a3, int* a4)
{
  int v4;
  int v5;
  int* v9;
  int* v10;

  v4 = a2[33];
  v5 = a3[33];
  v9 = result;
  if (v4 <= result[33]) {
    if (v5 > v4) {
      result = (int*)GameHr_ea8da0(a2, a3);
      if (a2[33] > v9[33]) {
        result = v9;
        v10 = a2;
        goto LABEL_9;
      }
    }
  }
  else {
    if (v5 > v4) {
    LABEL_5:
      v10 = a3;
    LABEL_9:
      result = (int*)GameHr_ea8da0(result, v10);
      goto LABEL_10;
    }
    result = (int*)GameHr_ea8da0(result, a2);
    if (a3[33] > a2[33]) {
      result = a2;
      goto LABEL_5;
    }
  }
LABEL_10:
  if (a4[33] > a3[33]) {
    result = (int*)GameHr_ea8da0(a3, a4);
    if (a3[33] > a2[33]) {
      result = (int*)GameHr_ea8da0(a2, a3);
      if (a2[33] > v9[33]) {
        return (int*)GameHr_ea8da0(v9, a2);
      }
    }
  }
  return result;
}

bool game_cmdbtl_ea87c0(int* a1, int* a2)
{
  int* v2;
  int* v3;
  signed __int64 v4;
  int* v5;
  int* v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int* v11;
  int* v12;
  int* v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  _QWORD* v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  int* v54;
  __int64 v55;
  int v56;
  struct {
    __int64 (**v57)();
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    _BYTE v63[12];
    int v64;
    _QWORD* v65;
    _QWORD* v66;
    char* v67;
    __int64 v68;
    __int64 v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
    int v73;
  } v57_;

  v2 = a2;
  v3 = a1;
  v4 = 0x8E38E38E38E38E39LL * (((char*)a2 - (char*)a1) >> 4);
  if (v4 > 2) {
    switch (v4) {
    case 3LL:
      v7 = a1[69];
      v8 = *(a2 - 3);
      v5 = a2 - 36;
      if (v7 > a1[33]) {
        if (v8 <= v7) {
          GameHr_ea8da0(a1, a1 + 36);
          if (*(v2 - 3) > v3[69]) {
            GameHr_ea8da0(v3 + 36, v2 - 36);
          }
          return true;
        }
        goto LABEL_25;
      }
      if (v8 <= v7) {
        return true;
      }
      v6 = a1 + 36;
      break;
    case 4LL:
      game_cmdbtl_ea86a0_alt1((__int64)a1, (__int64)(a1 + 36),
                              (__int64)(a1 + 72), (__int64)(a2 - 36));
      return true;
    case 5LL:
      game_cmdbtl_ea86a0_alt1((__int64)a1, (__int64)(a1 + 36),
                              (__int64)(a1 + 72), (__int64)(a1 + 108));
      if (*(v2 - 3) <= v3[141]) {
        return true;
      }
      GameHr_ea8da0(v3 + 108, v2 - 36);
      if (v3[141] <= v3[105]) {
        return true;
      }
      GameHr_ea8da0(v3 + 72, v3 + 108);
      if (v3[105] <= v3[69]) {
        return true;
      }
      v6 = v3 + 36;
      v5 = v3 + 72;
      break;
    default:
      goto LABEL_17;
    }
    GameHr_ea8da0(v6, v5);
    if (v3[69] > v3[33]) {
      v5 = v3 + 36;
      goto LABEL_25;
    }
    return true;
  }
  if ((unsigned __int64)v4 < 2) {
    return true;
  }
  if (v4 == 2) {
    if (*(a2 - 3) > a1[33]) {
      v5 = a2 - 36;
    LABEL_25:
      GameHr_ea8da0(v3, v5);
      return true;
    }
    return true;
  }
LABEL_17:
  v9 = a1[69];
  v10 = a1[105];
  v11 = a1 + 72;
  if (v9 <= a1[33]) {
    if (v10 <= v9) {
      goto LABEL_33;
    }
    GameHr_ea8da0(a1 + 36, a1 + 72);
    if (v3[69] <= v3[33]) {
      goto LABEL_33;
    }
    v12 = v3 + 36;
    a1 = v3;
    goto LABEL_32;
  }
  if (v10 > v9) {
  LABEL_31:
    v12 = v3 + 72;
  LABEL_32:
    GameHr_ea8da0(a1, v12);
    goto LABEL_33;
  }
  GameHr_ea8da0(a1, a1 + 36);
  if (v3[105] > v3[69]) {
    a1 = v3 + 36;
    goto LABEL_31;
  }
LABEL_33:
  v13 = v3 + 108;
  if (v3 + 108 == v2) {
    return true;
  }
  v14 = 0;
  v15 = 0;
  v55 = GameData_212f738 + 16;
  v54 = v2;
  while (v13[33] <= v11[33]) {
  LABEL_35:
    v11 = v13;
    v13 += 36;
    v14 += 144;
    if (v13 == v2) {
      return true;
    }
  }
  v56 = *v13;
  v16 = *((_QWORD*)v13 + 3);
  v57_.v58 = *((_QWORD*)v13 + 2);
  v57_.v59 = v16;
  v17 = *((_QWORD*)v13 + 5);
  v57_.v60 = *((_QWORD*)v13 + 4);
  v57_.v57 = (__int64 (**)(void))v55;
  v18 = *((_QWORD*)v13 + 6);
  v57_.v61 = v17;
  v57_.v62 = v18;
  if (v18 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                              memory_order_relaxed);
  }
  v19 = *((char**)v13 + 9);
  v20 = *((char**)v13 + 10);
  v21 = v20 - v19;
  *(_DWORD*)v57_.v63 = v13[14];
  v22 = *(_QWORD*)(v13 + 15);
  v57_.v65 = nullptr;
  v57_.v66 = nullptr;
  v57_.v67 = nullptr;
  *(_QWORD*)&v57_.v63[4] = v22;
  v57_.v64 = v13[17];
  if (v20 != v19) {
    if (0xAAAAAAAAAAAAAAABLL * (v21 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_ea6540();
    }
    v23 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v20 - v19, 16, 0);
    v57_.v65 = v23;
    v57_.v66 = v23;
    v57_.v67 = (char*)v23 + v21;
    do {
      *v23 = *(_QWORD*)v19;
      v23[1] = *((_QWORD*)v19 + 1);
      v24 = *((_QWORD*)v19 + 2);
      v23[2] = v24;
      if (v24 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                                  memory_order_relaxed);
      }
      v19 += 24;
      v23 += 3;
    } while (v19 != v20);
    v57_.v66 = v23;
  }
  v26 = *((_QWORD*)v13 + 12);
  v25 = *((_QWORD*)v13 + 13);
  v57_.v57 = game_cmdbtl_MindBtlInfo_vtable;
  v57_.v68 = v26;
  v57_.v69 = v25;
  if (v25 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                              memory_order_relaxed);
  }
  v27 = *((_QWORD*)v13 + 15);
  v28 = v14;
  v57_.v70 = *((_QWORD*)v13 + 14);
  v57_.v71 = v27;
  v57_.v72 = *((_QWORD*)v13 + 16);
  v57_.v73 = v13[34];
  while (1) {
    v29 = (char*)v3 + v28;
    *((_DWORD*)v29 + 108) = *(int*)((char*)v3 + v28 + 288);
    v30 = *(_QWORD*)((char*)v3 + v28 + 312);
    *((_QWORD*)v29 + 56) = *(_QWORD*)((char*)v3 + v28 + 304);
    *((_QWORD*)v29 + 57) = v30;
    v31 = *(_QWORD*)((char*)v3 + v28 + 328);
    *((_QWORD*)v29 + 58) = *(_QWORD*)((char*)v3 + v28 + 320);
    v32 = *(_QWORD*)((char*)v3 + v28 + 336);
    if (v32 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 16), 1u,
                                memory_order_relaxed);
    }
    v33 = *((_QWORD*)v29 + 60);
    *((_QWORD*)v29 + 59) = v31;
    *((_QWORD*)v29 + 60) = v32;
    if (v33 != 0) {
      std___1___shared_weak_count___release_weak(v33);
    }
    v34 = (char*)v3 + v28;
    v35 = *(_QWORD**)((char*)v3 + v28 + 360);
    v36 = *(_QWORD**)((char*)v3 + v28 + 368);
    *((_QWORD*)v34 + 61) = *(_QWORD*)((char*)v3 + v28 + 344);
    *((_DWORD*)v34 + 124) = *(int*)((char*)v3 + v28 + 352);
    *((_DWORD*)v34 + 125) = *(int*)((char*)v3 + v28 + 356);
    GameRoutine_ea9100((__int64)v3 + v28 + 504, v35, v36,
                       0xAAAAAAAAAAAAAAABLL * (v36 - v35));
    v38 = *(_QWORD*)((char*)v3 + v28 + 384);
    v37 = *(_QWORD*)((char*)v3 + v28 + 392);
    if (v37 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                                memory_order_relaxed);
    }
    v39 = *((_QWORD*)v34 + 67);
    *((_QWORD*)v34 + 66) = v38;
    *((_QWORD*)v34 + 67) = v37;
    if (v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
      std___1___shared_weak_count___release_weak(v39);
    }
    v40 = (char*)v3 + v28;
    v41 = *(_QWORD*)((char*)v3 + v28 + 408);
    *((_QWORD*)v40 + 68) = *(_QWORD*)((char*)v3 + v28 + 400);
    v42 = *(_QWORD*)((char*)v3 + v28 + 416);
    *((_QWORD*)v40 + 69) = v41;
    *((_QWORD*)v40 + 70) = v42;
    *((_DWORD*)v40 + 142) = *(int*)((char*)v3 + v28 + 424);
    if (v28 == -288) {
      break;
    }
    v28 -= 144;
    if (SHIDWORD(v57_.v72) <= (signed __int32)*((_DWORD*)v40 + 69)) {
      v43 = (__int64)v3 + v28 + 432;
      goto LABEL_62;
    }
  }
  v43 = (__int64)v3;
LABEL_62:
  *(_DWORD*)v43 = v56;
  v44 = v57_.v60;
  *((_QWORD*)v40 + 39) = v57_.v59;
  *((_QWORD*)v40 + 40) = v44;
  *((_QWORD*)v40 + 38) = v57_.v58;
  v46 = v57_.v61;
  v45 = v57_.v62;
  if (v57_.v62 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v57_.v62 + 16), 1u,
                              memory_order_relaxed);
  }
  v47 = *(_QWORD*)(v43 + 48);
  *(_QWORD*)(v43 + 40) = v46;
  *(_QWORD*)(v43 + 48) = v45;
  if (v47 != 0) {
    std___1___shared_weak_count___release_weak(v47);
  }
  *((_QWORD*)v40 + 43) = *(_QWORD*)v57_.v63;
  *((_DWORD*)v40 + 88) = *(_DWORD*)&v57_.v63[8];
  *(_DWORD*)(v43 + 68) = v57_.v64;
  if ((int*)v43 != &v56) {
    GameRoutine_ea9100(v43 + 72, v57_.v65, v57_.v66,
                       0xAAAAAAAAAAAAAAABLL * (v57_.v66 - v57_.v65));
  }
  v49 = v57_.v68;
  v48 = v57_.v69;
  if (v57_.v69 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v57_.v69 + 8), 1u,
                              memory_order_relaxed);
  }
  v50 = *(_QWORD*)(v43 + 104);
  *(_QWORD*)(v43 + 96) = v49;
  *(_QWORD*)(v43 + 104) = v48;
  if (v50 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
    std___1___shared_weak_count___release_weak(v50);
  }
  v51 = v57_.v71;
  v52 = v40 + 400;
  v2 = v54;
  ++v15;
  *(_QWORD*)v52 = v57_.v70;
  *((_QWORD*)v52 + 1) = v51;
  *((_QWORD*)v52 + 2) = v57_.v72;
  *((_DWORD*)v52 + 6) = v57_.v73;
  if (v15 != 8) {
    MindBtlInfo_Destructor(&v57_.v57);
    goto LABEL_35;
  }
  MindBtlInfo_Destructor(&v57_.v57);
  return v13 + 36 == v54;
}

bool game_cmdbtl_18fc9c0(__int64* a1, __int64* a2, __int64* a3, __int64*** a4)
{
  __int64 v4;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  bool v14;
  __int64 v15;
  int v16;
  bool v17;
  __int64 v18;
  bool v19;
  bool v20;
  bool v21;
  bool v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  bool v29;
  bool v30;
  int v31;
  bool v32;
  __int64 v33;
  bool v34;
  bool v35;
  int v36;
  bool v37;
  __int64 v38;
  bool v39;
  bool v40;
  int v41;
  bool v42;
  __int64 v43;
  bool v44;
  bool v45;
  int v46;
  bool v47;
  _BOOL8 result;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  bool v55;
  bool v56;
  int v57;
  bool v58;
  __int64 v59;
  __int64 v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  bool v65;
  bool v66;
  __int64 v67;
  bool v68;
  bool v69;
  int v70;
  bool v71;
  __int64 v72;
  int v73;
  bool v74;
  __int64 v75;
  bool v76;
  bool v77;
  bool v78;
  __int64 v79;
  struct {
    __int64 v80;
    bool v81;
    bool v82;
    bool v83;
    char gap11_[1];
    int v84;
    char v85;
  } v80_;
  struct {
    __int64 v86;
    char v87;
    bool v88;
    bool v89;
    char gap35_[1];
    int v90;
    char v91;
  } v86_;

  v4 = *a2;
  v9 = **a4;
  v11 = *v9;
  v10 = v9[1];
  if (v11 == v10) {
    v13 = false;
  }
  else {
    v12 = v11 + 8;
    do {
      v13 = v4 == *(_QWORD*)(v12 - 8);
      v14 = v4 == *(_QWORD*)(v12 - 8) || v12 == v10;
      v12 += 8;
    } while (!v14);
  }
  v15 = *a1;
  v86_.v86 = *a2;
  if (v4 != 0) {
    v16 = *(_DWORD*)(v4 + 416);
    LOBYTE(v4) = (v16 & 0x80) != 0;
    v17 = (v16 & 0x100) != 0;
  }
  else {
    v17 = false;
  }
  v86_.v87 = v4;
  v86_.v88 = v17;
  v86_.v89 = v13;
  v86_.v90 = 0;
  v86_.v91 = 0;
  if (v11 == v10) {
    v19 = false;
    v80_.v80 = v15;
    if (v15 != 0) {
    LABEL_21:
      LODWORD(v15) = *(_DWORD*)(v15 + 416);
      v21 = (v15 & 0x80) != 0;
      LOBYTE(v15) = (v15 & 0x100) != 0;
      goto LABEL_24;
    }
  }
  else {
    v18 = v11 + 8;
    do {
      v19 = v15 == *(_QWORD*)(v18 - 8);
      v20 = v15 == *(_QWORD*)(v18 - 8) || v18 == v10;
      v18 += 8;
    } while (!v20);
    v80_.v80 = v15;
    if (v15 != 0) {
      goto LABEL_21;
    }
  }
  v21 = false;
LABEL_24:
  v80_.v81 = v21;
  v80_.v82 = v15;
  v80_.v83 = v19;
  v80_.v84 = 0;
  v80_.v85 = 0;
  v22 = game_19f0540(&v86_.v86, &v80_.v80);
  v23 = *a3;
  v24 = *a2;
  v25 = **a4;
  v27 = *v25;
  v26 = v25[1];
  if (v22) {
    if (v27 == v26) {
      v29 = false;
      v86_.v86 = *a3;
      if (v23 != 0) {
      LABEL_33:
        v31 = *(_DWORD*)(v23 + 416);
        LOBYTE(v23) = (v31 & 0x80) != 0;
        v32 = (v31 & 0x100) != 0;
        goto LABEL_45;
      }
    }
    else {
      v28 = v27 + 8;
      do {
        v29 = v23 == *(_QWORD*)(v28 - 8);
        v30 = v23 == *(_QWORD*)(v28 - 8) || v28 == v26;
        v28 += 8;
      } while (!v30);
      v86_.v86 = *a3;
      if (v23 != 0) {
        goto LABEL_33;
      }
    }
    v32 = false;
  LABEL_45:
    v86_.v87 = v23;
    v86_.v88 = v32;
    v86_.v89 = v29;
    v86_.v90 = 0;
    v86_.v91 = 0;
    if (v27 == v26) {
      v39 = false;
      v80_.v80 = v24;
      if (v24 != 0) {
      LABEL_53:
        v41 = *(_DWORD*)(v24 + 416);
        LOBYTE(v24) = (v41 & 0x80) != 0;
        v42 = (v41 & 0x100) != 0;
        goto LABEL_67;
      }
    }
    else {
      v38 = v27 + 8;
      do {
        v39 = v24 == *(_QWORD*)(v38 - 8);
        v40 = v24 == *(_QWORD*)(v38 - 8) || v38 == v26;
        v38 += 8;
      } while (!v40);
      v80_.v80 = v24;
      if (v24 != 0) {
        goto LABEL_53;
      }
    }
    v42 = false;
  LABEL_67:
    v80_.v81 = v24;
    v80_.v82 = v42;
    v80_.v83 = v39;
    v80_.v84 = 0;
    v80_.v85 = 0;
    result = game_19f0540(&v86_.v86, &v80_.v80);
    v49 = *a1;
    if (result) {
      *a1 = *a3;
    LABEL_107:
      *a3 = v49;
      return result;
    }
    *a1 = *a2;
    *a2 = v49;
    v50 = *a3;
    v51 = **a4;
    v53 = *v51;
    v52 = v51[1];
    if (v53 == v52) {
      v55 = false;
      v86_.v86 = *a3;
      if (v50 != 0) {
      LABEL_77:
        v57 = *(_DWORD*)(v50 + 416);
        LOBYTE(v50) = (v57 & 0x80) != 0;
        v58 = (v57 & 0x100) != 0;
        goto LABEL_91;
      }
    }
    else {
      v54 = v53 + 8;
      do {
        v55 = v50 == *(_QWORD*)(v54 - 8);
        v56 = v50 == *(_QWORD*)(v54 - 8) || v54 == v52;
        v54 += 8;
      } while (!v56);
      v86_.v86 = *a3;
      if (v50 != 0) {
        goto LABEL_77;
      }
    }
    v58 = false;
  LABEL_91:
    v86_.v87 = v50;
    v86_.v88 = v58;
    v86_.v89 = v55;
    v86_.v90 = 0;
    v86_.v91 = 0;
    if (v53 == v52) {
      v68 = false;
      v80_.v80 = v49;
      if (v49 != 0) {
      LABEL_99:
        v70 = *(_DWORD*)(v49 + 416);
        LOBYTE(v49) = (v70 & 0x80) != 0;
        v71 = (v70 & 0x100) != 0;
      LABEL_105:
        v80_.v81 = v49;
        v80_.v82 = v71;
        v80_.v83 = v68;
        v80_.v84 = 0;
        v80_.v85 = 0;
        result = game_19f0540(&v86_.v86, &v80_.v80);
        if (!result) {
          return result;
        }
        v49 = *a2;
        *a2 = *a3;
        goto LABEL_107;
      }
    }
    else {
      v67 = v53 + 8;
      do {
        v68 = v49 == *(_QWORD*)(v67 - 8);
        v69 = v49 == *(_QWORD*)(v67 - 8) || v67 == v52;
        v67 += 8;
      } while (!v69);
      v80_.v80 = v49;
      if (v49 != 0) {
        goto LABEL_99;
      }
    }
    v71 = false;
    goto LABEL_105;
  }
  if (v27 == v26) {
    v34 = false;
    v86_.v86 = *a3;
    if (v23 != 0) {
    LABEL_42:
      v36 = *(_DWORD*)(v23 + 416);
      LOBYTE(v23) = (v36 & 0x80) != 0;
      v37 = (v36 & 0x100) != 0;
      goto LABEL_56;
    }
  }
  else {
    v33 = v27 + 8;
    do {
      v34 = v23 == *(_QWORD*)(v33 - 8);
      v35 = v23 == *(_QWORD*)(v33 - 8) || v33 == v26;
      v33 += 8;
    } while (!v35);
    v86_.v86 = *a3;
    if (v23 != 0) {
      goto LABEL_42;
    }
  }
  v37 = false;
LABEL_56:
  v86_.v87 = v23;
  v86_.v88 = v37;
  v86_.v89 = v34;
  v86_.v90 = 0;
  v86_.v91 = 0;
  if (v27 == v26) {
    v44 = false;
    v80_.v80 = v24;
    if (v24 != 0) {
    LABEL_64:
      v46 = *(_DWORD*)(v24 + 416);
      LOBYTE(v24) = (v46 & 0x80) != 0;
      v47 = (v46 & 0x100) != 0;
      goto LABEL_80;
    }
  }
  else {
    v43 = v27 + 8;
    do {
      v44 = v24 == *(_QWORD*)(v43 - 8);
      v45 = v24 == *(_QWORD*)(v43 - 8) || v43 == v26;
      v43 += 8;
    } while (!v45);
    v80_.v80 = v24;
    if (v24 != 0) {
      goto LABEL_64;
    }
  }
  v47 = false;
LABEL_80:
  v80_.v81 = v24;
  v80_.v82 = v47;
  v80_.v83 = v44;
  v80_.v84 = 0;
  v80_.v85 = 0;
  result = game_19f0540(&v86_.v86, &v80_.v80);
  if (!result) {
    return result;
  }
  v59 = *a2;
  *a2 = *a3;
  *a3 = v59;
  v60 = *a2;
  v61 = **a4;
  v63 = *v61;
  v62 = v61[1];
  if (v63 == v62) {
    v65 = false;
  }
  else {
    v64 = v63 + 8;
    do {
      v65 = v60 == *(_QWORD*)(v64 - 8);
      v66 = v60 == *(_QWORD*)(v64 - 8) || v64 == v62;
      v64 += 8;
    } while (!v66);
  }
  v72 = *a1;
  v86_.v86 = *a2;
  if (v60 != 0) {
    v73 = *(_DWORD*)(v60 + 416);
    LOBYTE(v60) = (v73 & 0x80) != 0;
    v74 = (v73 & 0x100) != 0;
  }
  else {
    v74 = false;
  }
  v86_.v87 = v60;
  v86_.v88 = v74;
  v86_.v89 = v65;
  v86_.v90 = 0;
  v86_.v91 = 0;
  if (v63 == v62) {
    v76 = false;
    v80_.v80 = v72;
    if (v72 != 0) {
    LABEL_117:
      LODWORD(v72) = *(_DWORD*)(v72 + 416);
      v78 = (v72 & 0x80) != 0;
      LOBYTE(v72) = (v72 & 0x100) != 0;
      goto LABEL_120;
    }
  }
  else {
    v75 = v63 + 8;
    do {
      v76 = v72 == *(_QWORD*)(v75 - 8);
      v77 = v72 == *(_QWORD*)(v75 - 8) || v75 == v62;
      v75 += 8;
    } while (!v77);
    v80_.v80 = v72;
    if (v72 != 0) {
      goto LABEL_117;
    }
  }
  v78 = false;
LABEL_120:
  v80_.v81 = v78;
  v80_.v82 = v72;
  v80_.v83 = v76;
  v80_.v84 = 0;
  v80_.v85 = 0;
  result = game_19f0540(&v86_.v86, &v80_.v80);
  if (result) {
    v79 = *a1;
    *a1 = *a2;
    *a2 = v79;
  }
  return result;
}

bool game_cmdbtl_18fcec0(__int64* a1, __int64* a2, __int64* a3, __int64* a4,
                         __int64*** a5)
{
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  bool v16;
  __int64 v17;
  int v18;
  bool v19;
  __int64 v20;
  bool v21;
  bool v22;
  bool v23;
  _BOOL8 result;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  bool v31;
  bool v32;
  __int64 v33;
  int v34;
  bool v35;
  __int64 v36;
  bool v37;
  bool v38;
  bool v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  bool v46;
  bool v47;
  __int64 v48;
  int v49;
  bool v50;
  __int64 v51;
  bool v52;
  bool v53;
  bool v54;
  __int64 v55;
  struct {
    __int64 v56;
    bool v57;
    char v58;
    bool v59;
    char gap11_[1];
    int v60;
    char v61;
  } v56_;
  struct {
    __int64 v62;
    char v63;
    bool v64;
    bool v65;
    char gap35_[1];
    int v66;
    char v67;
  } v62_;

  game_cmdbtl_18fc9c0(a1, a2, a3, a5);
  v10 = *a4;
  v11 = **a5;
  v13 = *v11;
  v12 = v11[1];
  if (v13 == v12) {
    v15 = false;
  }
  else {
    v14 = v13 + 8;
    do {
      v15 = v10 == *(_QWORD*)(v14 - 8);
      v16 = v10 == *(_QWORD*)(v14 - 8) || v14 == v12;
      v14 += 8;
    } while (!v16);
  }
  v17 = *a3;
  v62_.v62 = *a4;
  if (v10 != 0) {
    v18 = *(_DWORD*)(v10 + 416);
    LOBYTE(v10) = (v18 & 0x80) != 0;
    v19 = (v18 & 0x100) != 0;
  }
  else {
    v19 = false;
  }
  v62_.v63 = v10;
  v62_.v64 = v19;
  v62_.v65 = v15;
  v62_.v66 = 0;
  v62_.v67 = 0;
  if (v13 == v12) {
    v21 = false;
    v56_.v56 = v17;
    if (v17 != 0) {
    LABEL_21:
      LODWORD(v17) = *(_DWORD*)(v17 + 416);
      v23 = (v17 & 0x80) != 0;
      LOBYTE(v17) = (v17 & 0x100) != 0;
      goto LABEL_24;
    }
  }
  else {
    v20 = v13 + 8;
    do {
      v21 = v17 == *(_QWORD*)(v20 - 8);
      v22 = v17 == *(_QWORD*)(v20 - 8) || v20 == v12;
      v20 += 8;
    } while (!v22);
    v56_.v56 = v17;
    if (v17 != 0) {
      goto LABEL_21;
    }
  }
  v23 = false;
LABEL_24:
  v56_.v57 = v23;
  v56_.v58 = v17;
  v56_.v59 = v21;
  v56_.v60 = 0;
  v56_.v61 = 0;
  result = game_19f0540(&v62_.v62, &v56_.v56);
  if (!result) {
    return result;
  }
  v25 = *a3;
  *a3 = *a4;
  *a4 = v25;
  v26 = *a3;
  v27 = **a5;
  v29 = *v27;
  v28 = v27[1];
  if (v29 == v28) {
    v31 = false;
  }
  else {
    v30 = v29 + 8;
    do {
      v31 = v26 == *(_QWORD*)(v30 - 8);
      v32 = v26 == *(_QWORD*)(v30 - 8) || v30 == v28;
      v30 += 8;
    } while (!v32);
  }
  v33 = *a2;
  v62_.v62 = *a3;
  if (v26 != 0) {
    v34 = *(_DWORD*)(v26 + 416);
    LOBYTE(v26) = (v34 & 0x80) != 0;
    v35 = (v34 & 0x100) != 0;
  }
  else {
    v35 = false;
  }
  v62_.v63 = v26;
  v62_.v64 = v35;
  v62_.v65 = v31;
  v62_.v66 = 0;
  v62_.v67 = 0;
  if (v29 == v28) {
    v37 = false;
    v56_.v56 = v33;
    if (v33 != 0) {
    LABEL_45:
      LODWORD(v33) = *(_DWORD*)(v33 + 416);
      v39 = (v33 & 0x80) != 0;
      LOBYTE(v33) = (v33 & 0x100) != 0;
      goto LABEL_48;
    }
  }
  else {
    v36 = v29 + 8;
    do {
      v37 = v33 == *(_QWORD*)(v36 - 8);
      v38 = v33 == *(_QWORD*)(v36 - 8) || v36 == v28;
      v36 += 8;
    } while (!v38);
    v56_.v56 = v33;
    if (v33 != 0) {
      goto LABEL_45;
    }
  }
  v39 = false;
LABEL_48:
  v56_.v57 = v39;
  v56_.v58 = v33;
  v56_.v59 = v37;
  v56_.v60 = 0;
  v56_.v61 = 0;
  result = game_19f0540(&v62_.v62, &v56_.v56);
  if (!result) {
    return result;
  }
  v40 = *a2;
  *a2 = *a3;
  *a3 = v40;
  v41 = *a2;
  v42 = **a5;
  v44 = *v42;
  v43 = v42[1];
  if (v44 == v43) {
    v46 = false;
  }
  else {
    v45 = v44 + 8;
    do {
      v46 = v41 == *(_QWORD*)(v45 - 8);
      v47 = v41 == *(_QWORD*)(v45 - 8) || v45 == v43;
      v45 += 8;
    } while (!v47);
  }
  v48 = *a1;
  v62_.v62 = *a2;
  if (v41 != 0) {
    v49 = *(_DWORD*)(v41 + 416);
    LOBYTE(v41) = (v49 & 0x80) != 0;
    v50 = (v49 & 0x100) != 0;
  }
  else {
    v50 = false;
  }
  v62_.v63 = v41;
  v62_.v64 = v50;
  v62_.v65 = v46;
  v62_.v66 = 0;
  v62_.v67 = 0;
  if (v44 == v43) {
    v52 = false;
    v56_.v56 = v48;
    if (v48 != 0) {
    LABEL_69:
      LODWORD(v48) = *(_DWORD*)(v48 + 416);
      v54 = (v48 & 0x80) != 0;
      LOBYTE(v48) = (v48 & 0x100) != 0;
      goto LABEL_72;
    }
  }
  else {
    v51 = v44 + 8;
    do {
      v52 = v48 == *(_QWORD*)(v51 - 8);
      v53 = v48 == *(_QWORD*)(v51 - 8) || v51 == v43;
      v51 += 8;
    } while (!v53);
    v56_.v56 = v48;
    if (v48 != 0) {
      goto LABEL_69;
    }
  }
  v54 = false;
LABEL_72:
  v56_.v57 = v54;
  v56_.v58 = v48;
  v56_.v59 = v52;
  v56_.v60 = 0;
  v56_.v61 = 0;
  result = game_19f0540(&v62_.v62, &v56_.v56);
  if (result) {
    v55 = *a1;
    *a1 = *a2;
    *a2 = v55;
  }
  return result;
}

bool game_cmdbtl_18fd220(__int64* a1, __int64* a2, __int64* a3, __int64* a4,
                         __int64* a5, __int64*** a6)
{
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  bool v18;
  __int64 v19;
  int v20;
  bool v21;
  __int64 v22;
  bool v23;
  bool v24;
  bool v25;
  _BOOL8 result;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  bool v33;
  bool v34;
  __int64 v35;
  int v36;
  bool v37;
  __int64 v38;
  bool v39;
  bool v40;
  bool v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  bool v48;
  bool v49;
  __int64 v50;
  int v51;
  bool v52;
  __int64 v53;
  bool v54;
  bool v55;
  bool v56;
  __int64 v57;
  __int64 v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  bool v63;
  bool v64;
  __int64 v65;
  int v66;
  bool v67;
  __int64 v68;
  bool v69;
  bool v70;
  bool v71;
  __int64 v72;
  struct {
    __int64 v73;
    bool v74;
    char v75;
    bool v76;
    char gap11_[1];
    int v77;
    char v78;
  } v73_;
  struct {
    __int64 v79;
    char v80;
    bool v81;
    bool v82;
    char gap35_[1];
    int v83;
    char v84;
  } v79_;

  game_cmdbtl_18fcec0(a1, a2, a3, a4, a6);
  v12 = *a5;
  v13 = **a6;
  v15 = *v13;
  v14 = v13[1];
  if (v15 == v14) {
    v17 = false;
  }
  else {
    v16 = v15 + 8;
    do {
      v17 = v12 == *(_QWORD*)(v16 - 8);
      v18 = v12 == *(_QWORD*)(v16 - 8) || v16 == v14;
      v16 += 8;
    } while (!v18);
  }
  v19 = *a4;
  v79_.v79 = *a5;
  if (v12 != 0) {
    v20 = *(_DWORD*)(v12 + 416);
    LOBYTE(v12) = (v20 & 0x80) != 0;
    v21 = (v20 & 0x100) != 0;
  }
  else {
    v21 = false;
  }
  v79_.v80 = v12;
  v79_.v81 = v21;
  v79_.v82 = v17;
  v79_.v83 = 0;
  v79_.v84 = 0;
  if (v15 == v14) {
    v23 = false;
    v73_.v73 = v19;
    if (v19 != 0) {
    LABEL_21:
      LODWORD(v19) = *(_DWORD*)(v19 + 416);
      v25 = (v19 & 0x80) != 0;
      LOBYTE(v19) = (v19 & 0x100) != 0;
      goto LABEL_24;
    }
  }
  else {
    v22 = v15 + 8;
    do {
      v23 = v19 == *(_QWORD*)(v22 - 8);
      v24 = v19 == *(_QWORD*)(v22 - 8) || v22 == v14;
      v22 += 8;
    } while (!v24);
    v73_.v73 = v19;
    if (v19 != 0) {
      goto LABEL_21;
    }
  }
  v25 = false;
LABEL_24:
  v73_.v74 = v25;
  v73_.v75 = v19;
  v73_.v76 = v23;
  v73_.v77 = 0;
  v73_.v78 = 0;
  result = game_19f0540(&v79_.v79, &v73_.v73);
  if (!result) {
    return result;
  }
  v27 = *a4;
  *a4 = *a5;
  *a5 = v27;
  v28 = *a4;
  v29 = **a6;
  v31 = *v29;
  v30 = v29[1];
  if (v31 == v30) {
    v33 = false;
  }
  else {
    v32 = v31 + 8;
    do {
      v33 = v28 == *(_QWORD*)(v32 - 8);
      v34 = v28 == *(_QWORD*)(v32 - 8) || v32 == v30;
      v32 += 8;
    } while (!v34);
  }
  v35 = *a3;
  v79_.v79 = *a4;
  if (v28 != 0) {
    v36 = *(_DWORD*)(v28 + 416);
    LOBYTE(v28) = (v36 & 0x80) != 0;
    v37 = (v36 & 0x100) != 0;
  }
  else {
    v37 = false;
  }
  v79_.v80 = v28;
  v79_.v81 = v37;
  v79_.v82 = v33;
  v79_.v83 = 0;
  v79_.v84 = 0;
  if (v31 == v30) {
    v39 = false;
    v73_.v73 = v35;
    if (v35 != 0) {
    LABEL_45:
      LODWORD(v35) = *(_DWORD*)(v35 + 416);
      v41 = (v35 & 0x80) != 0;
      LOBYTE(v35) = (v35 & 0x100) != 0;
      goto LABEL_48;
    }
  }
  else {
    v38 = v31 + 8;
    do {
      v39 = v35 == *(_QWORD*)(v38 - 8);
      v40 = v35 == *(_QWORD*)(v38 - 8) || v38 == v30;
      v38 += 8;
    } while (!v40);
    v73_.v73 = v35;
    if (v35 != 0) {
      goto LABEL_45;
    }
  }
  v41 = false;
LABEL_48:
  v73_.v74 = v41;
  v73_.v75 = v35;
  v73_.v76 = v39;
  v73_.v77 = 0;
  v73_.v78 = 0;
  result = game_19f0540(&v79_.v79, &v73_.v73);
  if (!result) {
    return result;
  }
  v42 = *a3;
  *a3 = *a4;
  *a4 = v42;
  v43 = *a3;
  v44 = **a6;
  v46 = *v44;
  v45 = v44[1];
  if (v46 == v45) {
    v48 = false;
  }
  else {
    v47 = v46 + 8;
    do {
      v48 = v43 == *(_QWORD*)(v47 - 8);
      v49 = v43 == *(_QWORD*)(v47 - 8) || v47 == v45;
      v47 += 8;
    } while (!v49);
  }
  v50 = *a2;
  v79_.v79 = *a3;
  if (v43 != 0) {
    v51 = *(_DWORD*)(v43 + 416);
    LOBYTE(v43) = (v51 & 0x80) != 0;
    v52 = (v51 & 0x100) != 0;
  }
  else {
    v52 = false;
  }
  v79_.v80 = v43;
  v79_.v81 = v52;
  v79_.v82 = v48;
  v79_.v83 = 0;
  v79_.v84 = 0;
  if (v46 == v45) {
    v54 = false;
    v73_.v73 = v50;
    if (v50 != 0) {
    LABEL_69:
      LODWORD(v50) = *(_DWORD*)(v50 + 416);
      v56 = (v50 & 0x80) != 0;
      LOBYTE(v50) = (v50 & 0x100) != 0;
      goto LABEL_72;
    }
  }
  else {
    v53 = v46 + 8;
    do {
      v54 = v50 == *(_QWORD*)(v53 - 8);
      v55 = v50 == *(_QWORD*)(v53 - 8) || v53 == v45;
      v53 += 8;
    } while (!v55);
    v73_.v73 = v50;
    if (v50 != 0) {
      goto LABEL_69;
    }
  }
  v56 = false;
LABEL_72:
  v73_.v74 = v56;
  v73_.v75 = v50;
  v73_.v76 = v54;
  v73_.v77 = 0;
  v73_.v78 = 0;
  result = game_19f0540(&v79_.v79, &v73_.v73);
  if (!result) {
    return result;
  }
  v57 = *a2;
  *a2 = *a3;
  *a3 = v57;
  v58 = *a2;
  v59 = **a6;
  v61 = *v59;
  v60 = v59[1];
  if (v61 == v60) {
    v63 = false;
  }
  else {
    v62 = v61 + 8;
    do {
      v63 = v58 == *(_QWORD*)(v62 - 8);
      v64 = v58 == *(_QWORD*)(v62 - 8) || v62 == v60;
      v62 += 8;
    } while (!v64);
  }
  v65 = *a1;
  v79_.v79 = *a2;
  if (v58 != 0) {
    v66 = *(_DWORD*)(v58 + 416);
    LOBYTE(v58) = (v66 & 0x80) != 0;
    v67 = (v66 & 0x100) != 0;
  }
  else {
    v67 = false;
  }
  v79_.v80 = v58;
  v79_.v81 = v67;
  v79_.v82 = v63;
  v79_.v83 = 0;
  v79_.v84 = 0;
  if (v61 == v60) {
    v69 = false;
    v73_.v73 = v65;
    if (v65 != 0) {
    LABEL_93:
      LODWORD(v65) = *(_DWORD*)(v65 + 416);
      v71 = (v65 & 0x80) != 0;
      LOBYTE(v65) = (v65 & 0x100) != 0;
      goto LABEL_96;
    }
  }
  else {
    v68 = v61 + 8;
    do {
      v69 = v65 == *(_QWORD*)(v68 - 8);
      v70 = v65 == *(_QWORD*)(v68 - 8) || v68 == v60;
      v68 += 8;
    } while (!v70);
    v73_.v73 = v65;
    if (v65 != 0) {
      goto LABEL_93;
    }
  }
  v71 = false;
LABEL_96:
  v73_.v74 = v71;
  v73_.v75 = v65;
  v73_.v76 = v69;
  v73_.v77 = 0;
  v73_.v78 = 0;
  result = game_19f0540(&v79_.v79, &v73_.v73);
  if (result) {
    v72 = *a1;
    *a1 = *a2;
    *a2 = v72;
  }
  return result;
}

bool game_cmdbtl_18fd680(__int64* a1, __int64* a2, __int64*** a3)
{
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  bool v13;
  __int64* v14;
  __int64* v15;
  int v16;
  __int64* v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  bool v23;
  bool v24;
  __int64 v25;
  int v26;
  bool v27;
  __int64 v28;
  bool v29;
  bool v30;
  bool v31;
  __int64 v32;
  bool v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  bool v39;
  bool v40;
  bool v41;
  bool v42;
  __int64 v43;
  bool v44;
  bool v45;
  __int64 v46;
  int v47;
  bool v48;
  __int64 v49;
  bool v50;
  bool v51;
  bool v52;
  __int64 v53;
  struct {
    __int64 v55;
    bool v56;
    char v57;
    bool v58;
    char gap11_[1];
    int v59;
    char v60;
  } v55_;
  struct {
    __int64 v61;
    bool v62;
    bool v63;
    bool v64;
    char gap35_[1];
    int v65;
    char v66;
  } v61_;

  v6 = a2 - a1;
  if (v6 <= 2) {
    if ((unsigned __int64)v6 >= 2) {
      if (v6 == 2) {
        v7 = *(a2 - 1);
        v8 = **a3;
        v10 = *v8;
        v9 = v8[1];
        if (v10 == v9) {
          v12 = false;
        }
        else {
          v11 = v10 + 8;
          do {
            v12 = v7 == *(_QWORD*)(v11 - 8);
            v13 = v7 == *(_QWORD*)(v11 - 8) || v11 == v9;
            v11 += 8;
          } while (!v13);
        }
        v46 = *a1;
        v61_.v61 = *(a2 - 1);
        if (v7 != 0) {
          v47 = *(_DWORD*)(v7 + 416);
          LOBYTE(v7) = (v47 & 0x80) != 0;
          v48 = (v47 & 0x100) != 0;
        }
        else {
          v48 = false;
        }
        v61_.v62 = v7;
        v61_.v63 = v48;
        v61_.v64 = v12;
        v61_.v65 = 0;
        v61_.v66 = 0;
        if (v10 == v9) {
          v50 = false;
          v55_.v55 = v46;
          if (v46 != 0) {
          LABEL_86:
            LODWORD(v46) = *(_DWORD*)(v46 + 416);
            v52 = (v46 & 0x80) != 0;
            LOBYTE(v46) = (v46 & 0x100) != 0;
            goto LABEL_89;
          }
        }
        else {
          v49 = v10 + 8;
          do {
            v50 = v46 == *(_QWORD*)(v49 - 8);
            v51 = v46 == *(_QWORD*)(v49 - 8) || v49 == v9;
            v49 += 8;
          } while (!v51);
          v55_.v55 = v46;
          if (v46 != 0) {
            goto LABEL_86;
          }
        }
        v52 = false;
      LABEL_89:
        v55_.v56 = v52;
        v55_.v57 = v46;
        v55_.v58 = v50;
        v55_.v59 = 0;
        v55_.v60 = 0;
        if (game_19f0540(&v61_.v61, &v55_.v55)) {
          v53 = *a1;
          *a1 = *(a2 - 1);
          *(a2 - 1) = v53;
        }
        return true;
      }
      goto LABEL_17;
    }
    return true;
  }
  switch (v6) {
  case 3LL:
    game_cmdbtl_18fc9c0(a1, a1 + 1, a2 - 1, a3);
    return true;
  case 4LL:
    game_cmdbtl_18fcec0(a1, a1 + 1, a1 + 2, a2 - 1, a3);
    return true;
  case 5LL:
    game_cmdbtl_18fd220(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1, a3);
    return true;
  default:
    break;
  }
LABEL_17:
  v14 = a1 + 2;
  game_cmdbtl_18fc9c0(a1, a1 + 1, a1 + 2, a3);
  v15 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v16 = 0;
  while (2) {
    v18 = *v15;
    v19 = **a3;
    v21 = *v19;
    v20 = v19[1];
    if (v21 == v20) {
      v23 = false;
    }
    else {
      v22 = v21 + 8;
      do {
        v23 = v18 == *(_QWORD*)(v22 - 8);
        v24 = v18 == *(_QWORD*)(v22 - 8) || v22 == v20;
        v22 += 8;
      } while (!v24);
    }
    v25 = *v14;
    v61_.v61 = *v15;
    if (v18 != 0) {
      v26 = *(_DWORD*)(v18 + 416);
      LOBYTE(v18) = (v26 & 0x80) != 0;
      v27 = (v26 & 0x100) != 0;
    }
    else {
      v27 = false;
    }
    v61_.v62 = v18;
    v61_.v63 = v27;
    v61_.v64 = v23;
    v61_.v65 = 0;
    v61_.v66 = 0;
    if (v21 != v20) {
      v28 = v21 + 8;
      do {
        v29 = v25 == *(_QWORD*)(v28 - 8);
        v30 = v25 == *(_QWORD*)(v28 - 8) || v28 == v20;
        v28 += 8;
      } while (!v30);
      v55_.v55 = v25;
      if (v25 != 0) {
        goto LABEL_42;
      }
    LABEL_44:
      v31 = false;
      goto LABEL_45;
    }
    v29 = false;
    v55_.v55 = v25;
    if (v25 == 0) {
      goto LABEL_44;
    }
  LABEL_42:
    LODWORD(v25) = *(_DWORD*)(v25 + 416);
    v31 = (v25 & 0x80) != 0;
    LOBYTE(v25) = (v25 & 0x100) != 0;
  LABEL_45:
    v55_.v56 = v31;
    v55_.v57 = v25;
    v55_.v58 = v29;
    v55_.v59 = 0;
    v55_.v60 = 0;
    if (!game_19f0540(&v61_.v61, &v55_.v55)) {
      goto LABEL_21;
    }
    v32 = *v15;
    v17 = v15;
    while (1) {
      *v17 = *v14;
      if (v14 == a1) {
        break;
      }
      v17 = v14;
      v35 = **a3;
      v37 = *v35;
      v36 = v35[1];
      if (v37 == v36) {
        v39 = false;
      }
      else {
        v38 = v37 + 8;
        do {
          v39 = v32 == *(_QWORD*)(v38 - 8);
          v40 = v32 == *(_QWORD*)(v38 - 8) || v38 == v36;
          v38 += 8;
        } while (!v40);
      }
      --v14;
      v34 = *(v17 - 1);
      v61_.v61 = v32;
      if (v32 != 0) {
        v41 = (*(_DWORD*)(v32 + 416) & 0x80) != 0;
        v42 = (*(_DWORD*)(v32 + 416) & 0x100) != 0;
      }
      else {
        v41 = false;
        v42 = false;
      }
      v61_.v62 = v41;
      v61_.v63 = v42;
      v61_.v64 = v39;
      v61_.v65 = 0;
      v61_.v66 = 0;
      if (v37 == v36) {
        v44 = false;
        v55_.v55 = v34;
        if (v34 == 0) {
          goto LABEL_72;
        }
      }
      else {
        v43 = v37 + 8;
        do {
          v44 = v34 == *(_QWORD*)(v43 - 8);
          v45 = v34 == *(_QWORD*)(v43 - 8) || v43 == v36;
          v43 += 8;
        } while (!v45);
        v55_.v55 = v34;
        if (v34 == 0) {
        LABEL_72:
          v33 = false;
          goto LABEL_48;
        }
      }
      LODWORD(v34) = *(_DWORD*)(v34 + 416);
      v33 = (v34 & 0x80) != 0;
      LOBYTE(v34) = (v34 & 0x100) != 0;
    LABEL_48:
      v55_.v56 = v33;
      v55_.v57 = v34;
      v55_.v58 = v44;
      v55_.v59 = 0;
      v55_.v60 = 0;
      if (!game_19f0540(&v61_.v61, &v55_.v55)) {
        goto LABEL_20;
      }
    }
    v17 = a1;
  LABEL_20:
    ++v16;
    *v17 = v32;
    if (v16 != 8) {
    LABEL_21:
      v14 = v15++;
      if (v15 == a2) {
        return true;
      }
      continue;
    }
    return v15 + 1 == a2;
  }
}

#pragma GCC visibility pop
