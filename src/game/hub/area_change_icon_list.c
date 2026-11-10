#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_212dc38[7];
float fmodf(_QWORD, float, float);
void GameRoutine_1035650(__int64, __int64, __int64, float*);
_QWORD* AreaChangeIconList_Unknown3(_QWORD* result, __int64 a2);
void AreaChangeIconList_Unknown4(__int64 a1, __int64 a2, int* a3, float* a4,
                                 __int64 a5);
_QWORD* AreaChangeIconList_Unknown5(_QWORD* result);
_QWORD* LayoutAccessor_1560520(__int64*, __int64, __int64, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
char* GameRoutine_1038880(char**, _QWORD*);
void LayoutAccessor_1562680(__int64*, __int64, float);
void AreaChangeIconList_Unknown2(__int64 a1, __int64 a2);

void AreaChangeIconList_Unknown2(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 i;
  int v13;
  int j;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __n128 v24;
  __int64** v25;
  unsigned __int64 v26;
  __int64* v27;
  char* v28;
  __int64 v29;
  __int64 v30;
  __int64 k;
  int v32;
  int m;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  __int64 v41;
  __int64 v42;
  __n128 v43;
  __int64** v44;
  unsigned __int64 v45;
  __int64* v46;
  char* v47;
  __int64 v48;
  struct {
    __int64* v49;
    __int64* v50;
    __int64* v51;
    __int64 v52;
    __int64 v53;
    char gap40_[8];
    __int64* v54;
    __int64* v55;
  } v49_;
  _BYTE v56[264];

  v3 = *(_QWORD*)(a2 + 8);
  if (v3 != 0) {
    v5 = std___1___shared_weak_count_lock(v3);
    if (v5 != 0) {
      v6 = *(__int64**)a2;
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v7 = v5;
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v7);
      }
      if (v6 != nullptr) {
        v9 = *(__int64**)a2;
        v8 = *(_QWORD*)(a2 + 8);
        if (v8 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                    memory_order_relaxed);
        }
        v10 = *(_QWORD*)(a1 + 16);
        *(_QWORD*)(a1 + 8) = v9;
        *(_QWORD*)(a1 + 16) = v8;
        if (v10 != 0) {
          std___1___shared_weak_count___release_weak(v10);
        }
        v11 = *(_QWORD*)(a1 + 24);
        for (i = *(_QWORD*)(a1 + 32); i != v11; i -= 64) {
          v15 = *(_QWORD*)(i - 40);
          if (v15 != 0) {
            std___1___shared_weak_count___release_weak(v15);
          }
        }
        v13 = *(_DWORD*)(a1 + 72);
        *(_QWORD*)(a1 + 32) = v11;
        if (v13 >= 1) {
          for (j = 0; j < *(_DWORD*)(a1 + 72); ++j) {
            sprintf(v56, "L_AreaChange%d", j);
            if (j != 0) {
              v16 = *(_QWORD*)(a2 + 8);
              if (v16 != 0 &&
                  (v17 = std___1___shared_weak_count_lock(v16)) != 0) {
                v18 = v17;
                LayoutAccessor_1560520(*(__int64**)a2, (__int64)"L_AreaChange0",
                                       (__int64)"N_AreaChange", (__int64)v56);
                if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
                  std___1___shared_weak_count___release_weak(v18);
                }
              }
              else {
                LayoutAccessor_1560520(nullptr, (__int64)"L_AreaChange0",
                                       (__int64)"N_AreaChange", (__int64)v56);
              }
            }
            v19 = std___1___shared_weak_count_lock(*(_QWORD*)(a2 + 8));
            LayoutAccessor_1560070((void*)(&v49_.v49), *(__int64**)a2,
                                   (__int64)v56);
            if (v49_.v50 != nullptr) {
              v20 = std___1___shared_weak_count_lock(v49_.v50);
              if (v20 != 0) {
                v21 = v49_.v49;
              }
              else {
                v21 = nullptr;
              }
              if (v49_.v50 != nullptr) {
                std___1___shared_weak_count___release_weak(v49_.v50);
              }
            }
            else {
              v20 = 0;
              v21 = nullptr;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) != 0) {
              if (v21 != nullptr) {
                goto LABEL_35;
              }
            }
            else {
              (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
              std___1___shared_weak_count___release_weak(v19);
              if (v21 != nullptr) {
              LABEL_35:
                v22 = std___1___shared_weak_count_lock(*(_QWORD*)(a2 + 8));
                v23 = ui_LayoutAccessor_FindPane(*(__int64**)a2, (__int64)v56);
                if (v20 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16),
                                            1u, memory_order_relaxed);
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16),
                                            1u, memory_order_relaxed);
                }
                v25 = *(__int64***)(a1 + 32);
                v26 = *(_QWORD*)(a1 + 40);
                v49_.v49 = (__int64*)v23;
                v49_.v50 = nullptr;
                v49_.v51 = v21;
                v49_.v52 = v20;
                v49_.v53 = 0;
                v49_.v54 = nullptr;
                v49_.v55 = nullptr;
                if ((unsigned __int64)v25 >= v26) {
                  v28 = GameRoutine_1038880((char**)(a1 + 24), &v49_.v49);
                  v29 = v49_.v52;
                  *(_QWORD*)(a1 + 32) = v28;
                  if (v29 != 0) {
                    v24 = std___1___shared_weak_count___release_weak(v29);
                  }
                }
                else {
                  v27 = v49_.v49;
                  v25[3] = (__int64*)v20;
                  v25[4] = nullptr;
                  *v25 = v27;
                  v25[1] = v49_.v50;
                  v25[2] = v21;
                  v49_.v51 = nullptr;
                  v49_.v52 = 0;
                  v25[6] = v49_.v54;
                  v25[7] = v49_.v55;
                  *(_QWORD*)(a1 + 32) = v25 + 8;
                }
                if (v20 != 0) {
                  v24 = std___1___shared_weak_count___release_weak(v20);
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64, long double))(*(_QWORD*)v22 + 16LL))(
                      v22, *(long double*)&v24);
                  std___1___shared_weak_count___release_weak(v22);
                }
                LayoutAccessor_1562680(v21, (__int64)"Loop",
                                       0x1.0000000000000p+0f);
                if (v20 == 0) {
                  continue;
                }
              LABEL_46:
                if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
                  std___1___shared_weak_count___release_weak(v20);
                }
                continue;
              }
            }
            if (v20 != 0) {
              goto LABEL_46;
            }
          }
        }
        v30 = *(_QWORD*)(a1 + 48);
        for (k = *(_QWORD*)(a1 + 56); k != v30; k -= 64) {
          v34 = *(_QWORD*)(k - 40);
          if (v34 != 0) {
            std___1___shared_weak_count___release_weak(v34);
          }
        }
        v32 = *(_DWORD*)(a1 + 76);
        *(_QWORD*)(a1 + 56) = v30;
        if (v32 >= 1) {
          for (m = 0; m < *(_DWORD*)(a1 + 76); ++m) {
            sprintf(v56, "L_HubOut%d", m);
            if (m != 0) {
              v35 = *(_QWORD*)(a2 + 8);
              if (v35 != 0 &&
                  (v36 = std___1___shared_weak_count_lock(v35)) != 0) {
                v37 = v36;
                LayoutAccessor_1560520(*(__int64**)a2, (__int64)"L_HubOut0",
                                       (__int64)"N_HubOut", (__int64)v56);
                if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
                  std___1___shared_weak_count___release_weak(v37);
                }
              }
              else {
                LayoutAccessor_1560520(nullptr, (__int64)"L_HubOut0",
                                       (__int64)"N_HubOut", (__int64)v56);
              }
            }
            v38 = std___1___shared_weak_count_lock(*(_QWORD*)(a2 + 8));
            LayoutAccessor_1560070((void*)(&v49_.v49), *(__int64**)a2,
                                   (__int64)v56);
            if (v49_.v50 != nullptr) {
              v39 = std___1___shared_weak_count_lock(v49_.v50);
              if (v39 != 0) {
                v40 = v49_.v49;
              }
              else {
                v40 = nullptr;
              }
              if (v49_.v50 != nullptr) {
                std___1___shared_weak_count___release_weak(v49_.v50);
              }
            }
            else {
              v39 = 0;
              v40 = nullptr;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) != 0) {
              if (v40 != nullptr) {
                goto LABEL_73;
              }
            }
            else {
              (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
              std___1___shared_weak_count___release_weak(v38);
              if (v40 != nullptr) {
              LABEL_73:
                v41 = std___1___shared_weak_count_lock(*(_QWORD*)(a2 + 8));
                v42 = ui_LayoutAccessor_FindPane(*(__int64**)a2, (__int64)v56);
                if (v39 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v39 + 16),
                                            1u, memory_order_relaxed);
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v39 + 16),
                                            1u, memory_order_relaxed);
                }
                v44 = *(__int64***)(a1 + 56);
                v45 = *(_QWORD*)(a1 + 64);
                v49_.v49 = (__int64*)v42;
                v49_.v50 = nullptr;
                v49_.v51 = v40;
                v49_.v52 = v39;
                v49_.v53 = 0;
                v49_.v54 = nullptr;
                v49_.v55 = nullptr;
                if ((unsigned __int64)v44 >= v45) {
                  v47 = GameRoutine_1038880((char**)(a1 + 48), &v49_.v49);
                  v48 = v49_.v52;
                  *(_QWORD*)(a1 + 56) = v47;
                  if (v48 != 0) {
                    v43 = std___1___shared_weak_count___release_weak(v48);
                  }
                }
                else {
                  v46 = v49_.v49;
                  v44[3] = (__int64*)v39;
                  v44[4] = nullptr;
                  *v44 = v46;
                  v44[1] = v49_.v50;
                  v44[2] = v40;
                  v49_.v51 = nullptr;
                  v49_.v52 = 0;
                  v44[6] = v49_.v54;
                  v44[7] = v49_.v55;
                  *(_QWORD*)(a1 + 56) = v44 + 8;
                }
                if (v39 != 0) {
                  v43 = std___1___shared_weak_count___release_weak(v39);
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64, long double))(*(_QWORD*)v41 + 16LL))(
                      v41, *(long double*)&v43);
                  std___1___shared_weak_count___release_weak(v41);
                }
                LayoutAccessor_1562680(v40, (__int64)"Loop",
                                       0x1.0000000000000p+0f);
                if (v39 == 0) {
                  continue;
                }
              LABEL_84:
                if (atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
                  std___1___shared_weak_count___release_weak(v39);
                }
                continue;
              }
            }
            if (v39 != 0) {
              goto LABEL_84;
            }
          }
        }
      }
    }
  }
}

_QWORD* AreaChangeIconList_Unknown3(_QWORD* result, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  int v9;
  __int64* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;

  v2 = *(unsigned __int8*)(a2 + 8);
  if ((v2 & 1) != 0) {
    v3 = *(_QWORD*)(a2 + 16);
  }
  else {
    v3 = v2 >> 1;
  }
  if (v3 != 0) {
    v4 = *(_QWORD*)(a2 + 184);
    v5 = *(_QWORD*)(a2 + 192);
    if (v4 != v5) {
      v6 = 0;
      v3 = 0;
      while (1) {
        v9 = *(_DWORD*)(v4 + 88);
        if (v9 != 0) {
          break;
        }
        v7 = (__int64*)(result[6] + (v3++ << 6));
        v8 = *v7;
        if (v8 != 0) {
          goto LABEL_8;
        }
      LABEL_9:
        v4 += 96;
        if (v4 == v5) {
          goto LABEL_16;
        }
      }
      if (v9 != 1) {
        goto LABEL_9;
      }
      v10 = (__int64*)(result[3] + (v6++ << 6));
      v8 = *v10;
      if (v8 == 0) {
        goto LABEL_9;
      }
    LABEL_8:
      *(_BYTE*)(v8 + 88) |= 1u;
      goto LABEL_9;
    }
    v3 = 0;
  }
  v6 = 0;

LABEL_16:
  v11 = result[3];
  if (v6 < (result[4] - v11) >> 6) {
    v12 = v6 << 6;
    do {
      v13 = *(_QWORD*)(v11 + v12);
      ++v6;
      v12 += 64LL;
      *(_BYTE*)(v13 + 88) &= ~1u;
      v11 = result[3];
    } while (v6 < (result[4] - v11) >> 6);
  }
  v14 = result[6];
  if (v3 < (result[7] - v14) >> 6) {
    v15 = v3 << 6;
    do {
      v16 = *(_QWORD*)(v14 + v15);
      ++v3;
      v15 += 64LL;
      *(_BYTE*)(v16 + 88) &= ~1u;
      v14 = result[6];
    } while (v3 < (result[7] - v14) >> 6);
  }
  return result;
}

void AreaChangeIconList_Unknown4(__int64 a1, __int64 a2, int* a3, float* a4,
                                 __int64 a5)
{
  __int64 v5;
  __int64 v6;
  int v11;
  int v12;
  char v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  float v18;
  float v19;
  int v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  __int128 v26;
  float v27;
  float v28;
  char v29;
  int v30;

  v5 = *(_QWORD*)(a2 + 184);
  v6 = *(_QWORD*)(a2 + 192);
  if (v5 != v6) {
    v11 = 0;
    v12 = 0;
    while (1) {
      v14 = *(_DWORD*)(v5 + 88);
      if (v14 == 0) {
        break;
      }
      if (v14 == 1) {
        v15 = *(_QWORD*)(a1 + 24);
        v16 = v11++;
        goto LABEL_11;
      }
    LABEL_6:
      v5 += 96;
      if (v5 == v6) {
        return;
      }
    }
    v15 = *(_QWORD*)(a1 + 48);
    v16 = v12++;
  LABEL_11:
    v17 = *(_QWORD*)(v15 + (v16 << 6));
    if (v17 != 0) {
      v18 = *(float*)(v5 + 92);
      v19 = fmodf(a1, v18, 360.0);
      v20 = *a3;
      if (v18 >= 0.0) {
        v21 = v19;
      }
      else {
        v21 = v19 + 360.0;
      }
      if (v20 != 0) {
        v22 = 0.0;
        if (v20 == 1) {
          v22 = *a4;
        }
      }
      else {
        v22 = *(float*)a5;
      }
      v27 = v22 / 2.5;
      v28 = 1.0;
      if (v27 <= 1.0) {
        v28 = v27;
        if (v27 < 0.5) {
          v28 = 0.5;
        }
      }
      v29 = *(_BYTE*)(v17 + 88);
      *(float*)(v17 + 72) = v28;
      *(float*)(v17 + 76) = v28;
      *(_BYTE*)(v17 + 88) = v29 | 0x10;
      v30 = *a3;
      if (*a3 == 1) {
        GameRoutine_1035650(a1, v17, v5, a4);
        v30 = *a3;
      }
      if (v30 != 0) {
        v13 = *(_BYTE*)(v17 + 88);
      }
      else {
        v13 = *(_BYTE*)(v17 + 88);
        if ((v13 & 1) != 0) {
          v24 = *(float*)(a5 + 8);
          v23 = *(float*)(a5 + 12);
          v25 = *(float*)a5;
          if (*(_BYTE*)(a5 + 16) == 1) {
            fmodf(a1, *(float*)(*(_QWORD*)GameData_212dc38[0] + 100LL), 360.0);
            v13 = *(_BYTE*)(v17 + 88);
          }
          v26 = *(_OWORD*)v5;
          *(_DWORD*)(v17 + 56) = 0;
          *(float*)(v17 + 48) = v25 * (float)(*(float*)&v26 - v24);
          *(float*)(v17 + 52) =
              -(float)(v25 * (float)(*((float*)&v26 + 2) - v23));
        }
      }
      *(_QWORD*)(v17 + 60) = 0;
      *(float*)(v17 + 68) = v21;
      *(_BYTE*)(v17 + 88) = v13 | 0x10;
    }
    goto LABEL_6;
  }
}

_QWORD* AreaChangeIconList_Unknown5(_QWORD* result)
{
  __int64* v1;
  __int64* i;
  __int64 v3;
  __int64* v4;
  __int64* j;
  __int64 v6;

  v1 = (__int64*)result[6];
  for (i = (__int64*)result[7]; v1 != i; *(_BYTE*)(v3 + 88) &= ~1u) {
    v3 = *v1;
    v1 += 8;
  }
  v4 = (__int64*)result[3];
  for (j = (__int64*)result[4]; v4 != j; *(_BYTE*)(v6 + 88) &= ~1u) {
    v6 = *v4;
    v4 += 8;
  }
  return result;
}

#pragma GCC visibility pop
