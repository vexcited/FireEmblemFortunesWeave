#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_hub_anonymous_ProcHubUI_vtable[])();
extern __int64 GameData_225d640;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcHubUI_Destructor(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_1366bd0(PSEUDO_X8, __int64, __int64,
                                                    __int64);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 ProcHubUI_1635300(__int64 a1);
__int64 memmove(_QWORD, _QWORD, _QWORD);
char* ProcHubUI_1635cc0(char* result, char* a2, char* a3, __int64 a4,
                        __int64 a5, __int64 a6, __int64 a7);

__int64 ProcHubUI_1635300(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64 v14;
    __int64 v15;
  } v14_;
  struct {
    _QWORD v16[6];
    int v17;
    char gap68_[4];
    __int64 v18;
    __int64 v19;
    __int64 v20;
  } v16_;

  v16_.v18 = 0;
  v16_.v19 = 0;
  v16_.v20 = 0;
  v16_.v17 = 0;
  v16_.v16[0] = 0x800000018LL;
  v16_.v16[1] = 0x500000050LL;
  v16_.v16[2] = 0x10000000100000LL;
  memset(&v16_.v16[3], 0, 24);
  result = X8CALL_X0(__int64, GameRoutine_1366bd0(
                                  (void*)(&v14_.v14), (__int64)"Layout/Hub.arc",
                                  (__int64)"Hub_UI", (__int64)v16_.v16));
  v3 = v14_.v14;
  v4 = v14_.v15;
  v5 = *(_QWORD*)(a1 + 160);
  v14_.v14 = 0;
  v14_.v15 = 0;
  *(_QWORD*)(a1 + 152) = v3;
  *(_QWORD*)(a1 + 160) = v4;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = std___1___shared_weak_count___release_weak(v5);
  }
  v6 = v14_.v15;
  if (v14_.v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14_.v15 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = std___1___shared_weak_count___release_weak(v6);
  }
  v7 = v16_.v18;
  if (v16_.v18 != 0) {
    v8 = v16_.v19;
    v9 = fw_memory_g_heap_manager_ptr;
    if (v16_.v18 == v16_.v19) {
      goto LABEL_18;
    }
    v10 = v16_.v19;
    do {
      v11 = *(_BYTE*)(v10 - 24);
      v10 -= 24;
      if ((v11 & 1) != 0 && *(_QWORD*)(v8 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v9 + v12);
      }
      v8 = v10;
    } while (v10 != v7);
    v16_.v19 = v7;
    if (v16_.v18 != 0) {
    LABEL_18:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v13 = 56;
      }
      return nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v9 + v13);
    }
  }
  return result;
}

__int64 ProcHubUI_Destructor(__int64 a1)
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

  *(_QWORD*)a1 = game_hub_anonymous_ProcHubUI_vtable;
  v2 = *(_QWORD*)(a1 + 152);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_155e140(a1 + 168);
  v4 = *(_QWORD*)(a1 + 272);
  if (v4 != 0) {
    v5 = *(_QWORD*)(a1 + 280);
    if (v4 == v5) {
      goto LABEL_14;
    }
    do {
      v6 = *(_QWORD*)(v5 - 208);
      if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
      v5 -= 224;
    } while (v5 != v4);
    v7 = *(_QWORD*)(a1 + 272);
    *(_QWORD*)(a1 + 280) = v4;
    v4 = v7;
    if (v7 != 0) {
    LABEL_14:
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                    v4);
    }
  }
  GameRoutine_155e140(a1 + 168);
  v9 = *(_QWORD*)(a1 + 264);
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  GameRoutine_1564060(a1 + 216);
  GameRoutine_1563f90(a1 + 192, *(_QWORD*)(a1 + 200));
  v10 = *(_QWORD*)(a1 + 176);
  if (v10 != 0) {
    std___1___shared_weak_count___release_weak(v10);
  }
  v11 = *(_QWORD*)(a1 + 160);
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  GameData_225d640 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

char* ProcHubUI_1635cc0(char* result, char* a2, char* a3, __int64 a4,
                        __int64 a5, __int64 a6, __int64 a7)
{
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  char* v15;
  char* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  char* v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  char* v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  char* v27;
  char* v28;
  __int64 v29;
  char* v30;
  char* v31;
  char* v32;
  char* v33;
  signed __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  bool v38;
  signed __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  char* v46;
  __int64 v47;
  __int64 v48;
  char* v49;
  char* v50;
  char* v51;
  char* v52;
  __int64 v53;
  bool v54;
  char v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  char* v59;
  __int64 v60;
  char* v61;
  __int64 v62;
  _QWORD* v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  char* v67;
  __int64 v68;
  __int64 v69;
  float v70;
  float v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  char* v78;
  char* v79;
  char* v80;
  char* v81;

  if (a5 != 0) {
    while (a4 > a7 && a5 > a7) {
      if (a4 == 0) {
        return result;
      }
      v9 = 0;
      v10 = 0;
      while (1) {
        v11 = *(_QWORD*)&result[8 * v10];
        if (*(float*)(*(_QWORD*)a2 + 212LL) > *(float*)(v11 + 212)) {
          break;
        }
        ++v10;
        v9 -= 8LL;
        if (a4 == v10) {
          return result;
        }
      }
      v12 = a4 - v10;
      v13 = &result[-v9];
      if (a4 - v10 >= a5) {
        if (a4 - 1 == v10) {
          *(_QWORD*)&result[8 * v10] = *(_QWORD*)a2;
          *(_QWORD*)a2 = v11;
          return result;
        }
        v23 = v12 / 2;
        v24 = &result[8 * (v12 / 2)];
        if (a3 == a2) {
          v15 = a3;
          v30 = a3;
        }
        else {
          v25 = (a3 - a2) >> 3;
          v15 = a2;
          do {
            v26 = v25 >> 1;
            v27 = &v15[8 * (v25 >> 1)];
            v29 = *(_QWORD*)v27;
            v28 = v27 + 8;
            v25 += ~(v25 >> 1);
            if (*(float*)(v29 + 212) >
                *(float*)(*(_QWORD*)&v24[8 * v10] + 212LL)) {
              v15 = v28;
            }
            else {
              v25 = v26;
            }
          } while (v25 != 0);
          v30 = a2;
        }
        v16 = &v24[-v9];
        v14 = (v15 - v30) >> 3;
      }
      else {
        v14 = a5 / 2;
        v15 = &a2[8 * (a5 / 2)];
        if (v13 == a2) {
          v16 = a2;
          v22 = a2;
        }
        else {
          v16 = &result[-v9];
          v17 = (__int64)(a2 - result + v9) >> 3;
          do {
            v18 = v17 >> 1;
            v19 = (__int64*)&v16[8 * (v17 >> 1)];
            v21 = *v19;
            v20 = (char*)(v19 + 1);
            v17 += ~(v17 >> 1);
            if (*(float*)(*(_QWORD*)v15 + 212LL) > *(float*)(v21 + 212)) {
              v17 = v18;
            }
            else {
              v16 = v20;
            }
          } while (v17 != 0);
          v22 = v13;
        }
        v23 = (v16 - v22) >> 3;
      }
      v31 = v15;
      if (v16 != a2) {
        v31 = v16;
        if (a2 != v15) {
          v32 = v16 + 8;
          if (v16 + 8 == a2) {
            v39 = v15 - a2;
            v40 = a4;
            v41 = a5;
            v76 = *(_QWORD*)v16;
            v80 = a3;
            v78 = v13;
            memmove(v16, v16 + 8, v15 - a2);
            v13 = v78;
            a3 = v80;
            v31 = &v16[v39];
            a5 = v41;
            a4 = v40;
            *(_QWORD*)v31 = v76;
          }
          else {
            v33 = a2 + 8;
            if (a2 + 8 == v15) {
              v42 = *((_QWORD*)v15 - 1);
              v31 = v16 + 8;
              if (v15 - 8 != v16) {
                v81 = a3;
                v43 = a4;
                v77 = a5;
                v79 = v13;
                memmove(v16 + 8, v16, v15 - 8 - v16);
                a5 = v77;
                v13 = v79;
                a3 = v81;
                a4 = v43;
              }
              *(_QWORD*)v16 = v42;
            }
            else {
              v34 = a2 - v16;
              v35 = (a2 - v16) >> 3;
              v36 = (v15 - a2) >> 3;
              if (v35 == v36) {
                do {
                  v37 = *((_QWORD*)v32 - 1);
                  *((_QWORD*)v32 - 1) = *((_QWORD*)v33 - 1);
                  *((_QWORD*)v33 - 1) = v37;
                  if (v32 == a2) {
                    break;
                  }
                  v32 += 8;
                  v38 = v33 == v15;
                  v33 += 8;
                } while (!v38);
                v31 = a2;
              }
              else {
                v44 = (a2 - v16) >> 3;
                do {
                  v45 = v44;
                  v44 = v36;
                  v36 = v45 % v36;
                } while (v36 != 0);
                if (8 * v44 != 0) {
                  v46 = &v16[8 * v44];
                  do {
                    v48 = *((_QWORD*)v46 - 1);
                    v46 -= 8;
                    v47 = v48;
                    v49 = &v46[v34];
                    v50 = v46;
                    do {
                      v51 = v49;
                      *(_QWORD*)v50 = *(_QWORD*)v49;
                      v52 = &v49[v34];
                      v53 = (v15 - v49) >> 3;
                      v54 = __OFSUB__(v35, v53);
                      v56 = v35 - v53;
                      v55 = (v56 < 0) ^ v54;
                      v49 = &v16[8 * v56];
                      if (v55) {
                        v49 = v52;
                      }
                      v50 = v51;
                    } while (v49 != v46);
                    *(_QWORD*)v51 = v47;
                  } while (v46 != v16);
                }
                v31 = &v16[v15 - a2];
              }
            }
          }
        }
      }
      v57 = a5 - v14;
      v58 = a4 - v23 - v10;
      if (v23 + v14 >= a5 + a4 - (v23 + v14) - v10) {
        v60 = a4 - v23 - v10;
        v61 = v13;
        ProcHubUI_1635cc0(v31, v15, a3, v60, a5 - v14, a6, a7);
        result = v61;
        v15 = v16;
        v57 = v14;
        v58 = v23;
        a3 = v31;
      }
      else {
        v59 = a3;
        ProcHubUI_1635cc0(v13, v16, v31, v23, v14, a6, a7);
        a3 = v59;
        result = v31;
      }
      a4 = v58;
      a5 = v57;
      a2 = v15;
      if (v57 == 0) {
        return result;
      }
    }
    if (a4 <= a5) {
      if (result != a2) {
        v65 = -a6;
        v66 = (_QWORD*)a6;
        v67 = result;
        do {
          v68 = *(_QWORD*)v67;
          v67 += 8;
          v65 -= 8;
          *v66++ = v68;
        } while (v67 != a2);
        while (a2 != a3) {
          v69 = *(_QWORD*)a2;
          v70 = *(float*)(*(_QWORD*)a2 + 212LL);
          v71 = *(float*)(*(_QWORD*)a6 + 212LL);
          if (v70 > v71) {
            v72 = 8;
          }
          else {
            v69 = *(_QWORD*)a6;
            v72 = 0;
          }
          a2 += v72;
          if (v70 <= v71) {
            v73 = 8;
          }
          else {
            v73 = 0;
          }
          *(_QWORD*)result = v69;
          result += 8;
          a6 += v73;
          if (v66 == (_QWORD*)a6) {
            return result;
          }
        }
        return (char*)memmove(result, a6, -(a6 + v65));
      }
    }
    else if (a2 != a3) {
      v62 = 0;
      do {
        *(_QWORD*)(a6 + v62) = *(_QWORD*)&a2[v62];
        v62 += 8;
      } while (&a2[v62] != a3);
      v63 = (_QWORD*)(a6 + v62);
      while (a2 != result) {
        v64 = *((_QWORD*)a2 - 1);
        if (*(float*)(*(v63 - 1) + 212LL) > *(float*)(v64 + 212)) {
          a2 -= 8;
        }
        else {
          v64 = *--v63;
        }
        *((_QWORD*)a3 - 1) = v64;
        a3 -= 8;
        if (v63 == (_QWORD*)a6) {
          return result;
        }
      }
      if ((_QWORD*)a6 != v63) {
        v74 = -8;
        do {
          v75 = *--v63;
          *(_QWORD*)&a3[v74] = v75;
          v74 -= 8;
        } while (v63 != (_QWORD*)a6);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
