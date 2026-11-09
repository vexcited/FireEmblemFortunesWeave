#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a10d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 GameRoutine_14a1520(_QWORD, _QWORD);
__int64 GameRoutine_14a3920(void);
__int64 GameRoutine_155cda0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_155d940(_QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_155ea30(_QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, long double);
__int64 GameRoutine_1563c50(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_1749800(_QWORD);
__int64 GameRoutine_1749970(_QWORD, long double);
__int64 GameRoutine_bc6460(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern __int64 GameData_22736d0;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting_ptr;
extern __int64 ui_LayoutAccessor_empty_;
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern char GameData_1a9f09e;
__int64 TelopLevelUp_Unknown34(__int64 a1);
__int64 TelopLevelUp_Unknown36(__int64 a1);
__int64 TelopLevelUp_Unknown39(__int64 result, long double a2);
__int64 TelopLevelUp_Unknown2(__int64 a1, long double a2);

__int64 TelopLevelUp_Unknown34(__int64 a1)
{
  __int64 result;
  __int64 v2;
  int v3;

  result = GameRoutine_1749800(a1 + 928);
  v2 = GameData_22736d0;
  if (GameData_22736d0 != 0 && *(_DWORD*)(GameData_22736d0 + 624) != 2) {
    result = GameRoutine_155ea30(GameData_22736d0 + 168);
    if ((result & 1) != 0 || *(_DWORD*)(v2 + 624) != 1) {
      result = GameRoutine_155cda0(v2 + 272, "Out", 0);
      if (*(_DWORD*)(v2 + 624) == 1) {
        v3 = 2;
      }
      else {
        GameRoutine_155d940(v2 + 272);
        result = GameRoutine_155e830(v2 + 168, 0);
        v3 = 1;
      }
      *(_DWORD*)(v2 + 624) = v3;
    }
  }
  return result;
}

__int64 TelopLevelUp_Unknown36(__int64 a1)
{
  int v1;
  __int64 v3;
  long double v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _DWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 j;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  unsigned int v27;
  __int128 v28;
  unsigned int i;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  __int64 result;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _DWORD* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 m;
  __int64 v50;
  __int64* v51;
  __int64 v52;
  unsigned int v53;
  __int128 v54;
  unsigned int k;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64* v59;
  __int64* v60;
  __int64 v61;
  __int64 v62;
  _QWORD v63[2];
  const char* v64;
  int v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;

  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 224LL))(a1);
  LODWORD(v4) = 1.0;
  GameRoutine_1562680(a1 + 168, v3, v4);
  v5 = (__int64*)GameData_212c540;
  v6 = (__int64*)GameData_212c548;
  *(_DWORD*)(a1 + 420) = 0;
  v63[0] = 0;
  v63[1] = 0;
  v7 = v5[1];
  v66 = *v5;
  v67 = v7;
  v8 = *v6;
  v9 = v6[1];
  v70 = v66;
  v71 = v7;
  v68 = v8;
  v69 = v9;
  v65 = 9;
  v64 = "UI_Deco_ShineA_Loop";
  v10 = eft_g_effectSystem_ptr[0];
  v11 = GameRoutine_bc6460(*eft_g_effectSystem_ptr[0], v63, 0);
  GameRoutine_14a10d0(&v61, v11, v12, &GameData_1a9f09e);
  v13 = v61;
  v14 = v62;
  if (v62 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v62 + 8), 1u,
                              memory_order_relaxed);
  }
  v15 = *(_QWORD*)(a1 + 904);
  *(_QWORD*)(a1 + 896) = v13;
  *(_QWORD*)(a1 + 904) = v14;
  if (v15 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak();
    }
    v14 = *(_QWORD*)(a1 + 904);
  }
  if (v14 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak();
    }
  }
  v16 = v62;
  if (v62 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak();
  }
  v17 = *(_DWORD**)(a1 + 896);
  if (*(_QWORD*)v17 != 0 && *(_DWORD*)(*(_QWORD*)v17 + 16LL) == v17[2]) {
    v18 = *(_QWORD*)(a1 + 176);
    if (v18 != 0) {
      v19 = std___1___shared_weak_count_lock(v18);
      if (v19 != 0) {
        v20 = *(_QWORD*)(a1 + 168);
        if (v20 != 0) {
          v1 = *(_DWORD*)(v20 + 2372);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v20 != 0) {
            goto LABEL_21;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
          std___1___shared_weak_count___release_weak();
          if (v20 != 0) {
          LABEL_21:
            v21 = *(_QWORD*)v17;
            if (*(_QWORD*)v17 == 0) {
            LABEL_31:
              v25 = *(__int64**)(a1 + 896);
              v26 = *v25;
              if (*v25 != 0 && *(_DWORD*)(v26 + 16) == *((_DWORD*)v25 + 2)) {
                v27 = *(_DWORD*)(v26 + 36);
                if (v27 != 0) {
                  v28 = *(_OWORD*)(a1 + 864);
                  for (i = 0; i < v27; ++i) {
                    if ((int)v27 > (int)i) {
                      v30 = *(_QWORD*)(v26 + 40 + 8LL * (int)i);
                      if (v30 != 0) {
                        *(_OWORD*)(v30 + 16) = v28;
                        *(_BYTE*)(v30 + 128) = 1;
                        v27 = *(_DWORD*)(v26 + 36);
                      }
                    }
                  }
                }
              }
              GameRoutine_14a3920();
              goto LABEL_40;
            }
          LABEL_25:
            if (*(_DWORD*)(v21 + 16) == v17[2]) {
              v22 = *(unsigned int*)(v21 + 36);
              if ((_DWORD)v22 != 0) {
                for (j = 0; j < v22; ++j) {
                  v24 = *(_QWORD*)(v21 + 40 + 8 * j);
                  if (v24 != 0) {
                    *(_DWORD*)(v24 + 408) = v1 + 1;
                    v22 = *(unsigned int*)(v21 + 36);
                  }
                }
              }
            }
            goto LABEL_31;
          }
        }
      }
    }
    v1 = 0;
    v21 = *(_QWORD*)v17;
    if (*(_QWORD*)v17 == 0) {
      goto LABEL_31;
    }
    goto LABEL_25;
  }

LABEL_40:
  v31 = *v5;
  v32 = v5[1];
  v33 = *v6;
  v34 = v6[1];
  v35 = *v10;
  v63[0] = 0;
  v63[1] = 0;
  v66 = v31;
  v67 = v32;
  v70 = v31;
  v71 = v32;
  v68 = v33;
  v69 = v34;
  v65 = 9;
  v64 = "UI_Deco_LightA_Loop";
  v36 = GameRoutine_bc6460(v35, v63, 0);
  result = GameRoutine_14a10d0(&v61, v36, v37, &GameData_1a9f09e);
  v39 = v61;
  v40 = v62;
  if (v62 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v62 + 8), 1u,
                              memory_order_relaxed);
  }
  v41 = *(_QWORD*)(a1 + 920);
  *(_QWORD*)(a1 + 912) = v39;
  *(_QWORD*)(a1 + 920) = v40;
  if (v41 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
      result = std___1___shared_weak_count___release_weak();
    }
    v40 = *(_QWORD*)(a1 + 920);
  }
  if (v40 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
      result = std___1___shared_weak_count___release_weak();
    }
  }
  v42 = v62;
  if (v62 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
    result = std___1___shared_weak_count___release_weak();
  }
  v43 = *(_DWORD**)(a1 + 912);
  if (*(_QWORD*)v43 != 0 && *(_DWORD*)(*(_QWORD*)v43 + 16LL) == v43[2]) {
    v44 = *(_QWORD*)(a1 + 176);
    if (v44 != 0) {
      v45 = std___1___shared_weak_count_lock(v44);
      if (v45 != 0) {
        v46 = *(_QWORD*)(a1 + 168);
        if (v46 != 0) {
          LODWORD(v5) = *(_DWORD*)(v46 + 2372);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v46 != 0) {
            goto LABEL_60;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
          std___1___shared_weak_count___release_weak();
          if (v46 != 0) {
          LABEL_60:
            v47 = *(_QWORD*)v43;
            if (*(_QWORD*)v43 == 0) {
            LABEL_70:
              v51 = *(__int64**)(a1 + 912);
              v52 = *v51;
              if (*v51 != 0 && *(_DWORD*)(v52 + 16) == *((_DWORD*)v51 + 2)) {
                v53 = *(_DWORD*)(v52 + 36);
                if (v53 != 0) {
                  v54 = *(_OWORD*)(a1 + 864);
                  for (k = 0; k < v53; ++k) {
                    if ((int)v53 > (int)k) {
                      v56 = *(_QWORD*)(v52 + 40 + 8LL * (int)k);
                      if (v56 != 0) {
                        *(_OWORD*)(v56 + 16) = v54;
                        *(_BYTE*)(v56 + 128) = 1;
                        v53 = *(_DWORD*)(v52 + 36);
                      }
                    }
                  }
                }
              }
              result = GameRoutine_14a3920();
              goto LABEL_79;
            }
          LABEL_64:
            if (*(_DWORD*)(v47 + 16) == v43[2]) {
              v48 = *(unsigned int*)(v47 + 36);
              if ((_DWORD)v48 != 0) {
                for (m = 0; m < v48; ++m) {
                  v50 = *(_QWORD*)(v47 + 40 + 8 * m);
                  if (v50 != 0) {
                    *(_DWORD*)(v50 + 408) = (_DWORD)v5 - 1;
                    v48 = *(unsigned int*)(v47 + 36);
                  }
                }
              }
            }
            goto LABEL_70;
          }
        }
      }
    }
    LODWORD(v5) = 0;
    v47 = *(_QWORD*)v43;
    if (*(_QWORD*)v43 == 0) {
      goto LABEL_70;
    }
    goto LABEL_64;
  }

LABEL_79:
  if (*(_DWORD*)(a1 + 944) == 0) {
    v57 = *(_QWORD*)(a1 + 936);
    if (v57 != 0) {
      v58 = std___1___shared_weak_count_lock(v57);
      v59 = ui_LayoutAccessor_empty__ptr[0];
      if (v58 != 0) {
        if (*(_QWORD*)(a1 + 928) != 0) {
          v59 = *(__int64**)(a1 + 928);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v60 = v59;
          (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
          std___1___shared_weak_count___release_weak();
          v59 = v60;
        }
      }
    }
    else {
      v59 = ui_LayoutAccessor_empty__ptr[0];
    }
    result = GameRoutine_1563c50(v59, "In", 0, 1.0);
    *(_DWORD*)(a1 + 944) = 1;
  }
  return result;
}

__int64 TelopLevelUp_Unknown39(__int64 result, long double a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  _DWORD* v7;
  __int64 v8;
  _DWORD* v9;
  __int64 v10;
  atomic_ullong* v11;
  atomic_ullong* v12;
  atomic_ullong* v13;
  _DWORD* v14;
  __int64 v15;
  __int64 v16;
  int v17;
  _DWORD* v18;
  __int64 v19;

  v2 = result;
  if (*(int*)(result + 944) >= 5) {
    v3 = *(_QWORD*)(result + 936);
    if (v3 != 0) {
      v4 = std___1___shared_weak_count_lock(v3);
      v5 = &ui_LayoutAccessor_empty_;
      if (v4 != 0) {
        if (*(_QWORD*)(v2 + 928) != 0) {
          v5 = *(__int64**)(v2 + 928);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v6 = v5;
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak();
          v5 = v6;
        }
      }
    }
    else {
      v5 = &ui_LayoutAccessor_empty_;
    }
    LODWORD(a2) = 1.0;
    result = GameRoutine_1562680(v5, "Out", a2);
  }
  v7 = *(_DWORD**)(v2 + 880);
  v8 = *(_QWORD*)(v2 + 888);
  *(_BYTE*)(v2 + 1376) = 1;
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
  }
  v9 = *(_DWORD**)(v2 + 896);
  v10 = *(_QWORD*)(v2 + 904);
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
  }
  if (*(_QWORD*)v7 != 0 && *(_DWORD*)(*(_QWORD*)v7 + 16LL) == v7[2]) {
    if (v8 != 0) {
      v11 = (atomic_ullong*)(v8 + 8);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
      v18 = v7;
      v19 = v8;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
      result = GameRoutine_14a1520(&v18, 1);
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          goto LABEL_24;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        result = std___1___shared_weak_count___release_weak();
        if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        LABEL_24:
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          result = std___1___shared_weak_count___release_weak();
        }
      }
    }
    else {
      v18 = v7;
      v19 = 0;
      result = GameRoutine_14a1520(&v18, 1);
    }
    *(_QWORD*)v7 = 0;
  }
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    result = std___1___shared_weak_count___release_weak();
  }
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  if (*(_QWORD*)v9 != 0 && *(_DWORD*)(*(_QWORD*)v9 + 16LL) == v9[2]) {
    if (v10 != 0) {
      v12 = (atomic_ullong*)(v10 + 8);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
      v18 = v9;
      v19 = v10;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
      result = GameRoutine_14a1520(&v18, 1);
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (atomic_fetch_add(v12, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          goto LABEL_39;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        result = std___1___shared_weak_count___release_weak();
        if (atomic_fetch_add(v12, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        LABEL_39:
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          result = std___1___shared_weak_count___release_weak();
        }
      }
    }
    else {
      v18 = v9;
      v19 = 0;
      result = GameRoutine_14a1520(&v18, 1);
    }
    *(_QWORD*)v9 = 0;
  }
  if (v10 == 0) {
    goto LABEL_44;
  }
  v13 = (atomic_ullong*)(v10 + 8);
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (atomic_fetch_add(v13, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      goto LABEL_44;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    result = std___1___shared_weak_count___release_weak();
    if (atomic_fetch_add(v13, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    LABEL_44:
      if (v8 == 0) {
        goto LABEL_49;
      }
      goto LABEL_45;
    }
  }
  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  result = std___1___shared_weak_count___release_weak();
  if (v8 != 0) {
  LABEL_45:
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      result = std___1___shared_weak_count___release_weak();
    }
  }

LABEL_49:
  v14 = *(_DWORD**)(v2 + 912);
  if (*(_QWORD*)v14 != 0 && *(_DWORD*)(*(_QWORD*)v14 + 16LL) == v14[2]) {
    v15 = *(_QWORD*)(v2 + 920);
    if (v15 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                memory_order_relaxed);
      v19 = v15;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                memory_order_relaxed);
    }
    else {
      v19 = 0;
    }
    v18 = v14;
    result = GameRoutine_14a1390(&v18, 1);
    v16 = v19;
    if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      result = std___1___shared_weak_count___release_weak();
    }
    if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      result = std___1___shared_weak_count___release_weak();
    }
    **(_QWORD**)(v2 + 912) = 0;
  }
  if (game_ProcGameSkipView_instance_ != 0) {
    v17 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v17 & 1) == 0 &&
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3 &&
        (v17 & 2) == 0) {
      result = *(_QWORD*)(v2 + 1360);
      if (result != 0) {
        return (*(__int64 (**)(__int64))(*(_QWORD*)result + 48LL))(result);
      }
    }
  }
  return result;
}

__int64 TelopLevelUp_Unknown2(__int64 a1, long double a2)
{
  __int64 v3;
  __int64 v4;
  int v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  __int16 v11;

  v3 = game_g_game_setting_ptr;
  v4 = GameData_22736d0;
  if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 944LL) & 0xB) != 0) {
    LODWORD(a2) = 8.0;
    if (GameData_22736d0 != 0 && *(_DWORD*)(GameData_22736d0 + 624) != 0) {
      if ((GameRoutine_155ea30(GameData_22736d0 + 168) & 1) != 0 &&
          *(_DWORD*)(v4 + 624) == 1) {
        LODWORD(a2) = 8.0;
        goto LABEL_21;
      }
      GameRoutine_155e830(v4 + 168, 1);
      GameRoutine_155cda0(v4 + 272, "In", 0);
      if (*(_DWORD*)(v4 + 624) == 1) {
        v5 = 0;
      }
      else {
        GameRoutine_155d940(v4 + 272);
        v5 = 1;
      }
      LODWORD(a2) = 8.0;
    LABEL_20:
      *(_DWORD*)(v4 + 624) = v5;
    }
  }
  else {
    LODWORD(a2) = 1.0;
    if (GameData_22736d0 != 0 && *(_DWORD*)(GameData_22736d0 + 624) != 2) {
      if ((GameRoutine_155ea30(GameData_22736d0 + 168) & 1) == 0 &&
          *(_DWORD*)(v4 + 624) == 1) {
        LODWORD(a2) = 1.0;
        goto LABEL_21;
      }
      GameRoutine_155cda0(v4 + 272, "Out", 0);
      if (*(_DWORD*)(v4 + 624) == 1) {
        v5 = 2;
      }
      else {
        GameRoutine_155d940(v4 + 272);
        GameRoutine_155e830(v4 + 168, 0);
        v5 = 1;
      }
      LODWORD(a2) = 1.0;
      goto LABEL_20;
    }
  }

LABEL_21:
  GameRoutine_1749970(a1 + 928, a2);
  if (*(_DWORD*)(a1 + 944) == 5) {
    v6 = *(unsigned __int8*)(a1 + 840);
    if ((v6 & 1) != 0) {
      v7 = *(_QWORD*)(a1 + 848);
    }
    else {
      v7 = v6 >> 1;
    }
    if (v7 == 0) {
      v10 = *(_DWORD*)(*(_QWORD*)v3 + 952LL);
      if ((v10 & 1) == 0 &&
          (*(_BYTE*)(a1 + 336) != 1 ||
           (v10 & 2) == 0 && (*(_BYTE*)(*(_QWORD*)v3 + 944LL) & 8) == 0)) {
        goto LABEL_40;
      }
      v8 = 6;
      v9 = *(_QWORD*)(a1 + 8);
      if (v9 == 0) {
        goto LABEL_40;
      }
      while (1) {
      LABEL_36:
        if (*(_BYTE*)v9 == 2) {
          if (*(_DWORD*)(v9 + 32) == v8) {
            v11 = *(_WORD*)(a1 + 136);
            *(_QWORD*)(a1 + 16) = v9;
            *(_WORD*)(a1 + 136) = v11 & 0xFF7F;
            goto LABEL_40;
          }
        }
        else if (*(_BYTE*)v9 == 0) {
          goto LABEL_40;
        }
        v9 += 64;
      }
    }
    v8 = 4;
    v9 = *(_QWORD*)(a1 + 8);
    if (v9 != 0) {
      goto LABEL_36;
    }
  }

LABEL_40:
  if (*(_BYTE*)(a1 + 335) == 1 &&
      (*(_BYTE*)(*(_QWORD*)v3 + 944LL) & 0xB) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)a1 + 360LL))(a1);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 400LL))(a1);
}

#pragma GCC visibility pop
