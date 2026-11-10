#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 GameRoutine_14a1520(_QWORD, _QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, long double);
__int64 GameRoutine_173fac0(__int64, char);
__int64 game_util_Format(const char*, ...);
__int64 std___1___shared_weak_count___release_weak();
extern __int64* ui_LayoutAccessor_empty__ptr[3];
__int64 TelopRecruitResult_Unknown39(_QWORD* a1);
__attribute__((swiftcall)) void TelopResult_17619f0(PSEUDO_X8, __int64, int);
__int64 ControlCreator_13633c0(_QWORD);
__int64 GameRoutine_14a10d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 Manager_bc6460(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__n128 GameRoutine_1760100(__int64);
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern __int64* eft_g_effectSystem_ptr[3];
extern char GameData_1a9f09e;
void TelopRecruitResult_Unknown36(_QWORD* a1);
void TelopRecruitResult_Unknown53(__int64 a1);

void TelopRecruitResult_Unknown36(_QWORD* a1)
{
  int v1;
  unsigned int v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int32x2_t* v19;
  long double v20;
  _DWORD* v21;
  __int64 v22;
  unsigned int v23;
  unsigned int i;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 j;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  long double v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _DWORD* v45;
  int32x2_t* v46;
  __int64* v47;
  __int64 v48;
  unsigned int v49;
  unsigned int k;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 m;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned int v66;
  long double v67;
  _DWORD* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  _DWORD* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 n;
  __int64 v79;
  long double v80;
  long double v81;
  __int64 v82;
  __int64 v83;
  _DWORD* v84;
  __int64 v85;
  _QWORD v86[2];
  const char* v87;
  int v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;

  GameRoutine_1760100((__int64)a1);
  v3 = *(unsigned __int8*)(a1[146] + 50LL);
  v4 = (__int64*)GameData_212c540;
  v5 = (__int64*)GameData_212c548;
  v6 = eft_g_effectSystem_ptr[0];
  if (v3 < 9) {
    goto LABEL_81;
  }
  v7 = LayoutAccessor_155fbe0(a1 + 21, "L_LegionGet_00");
  v8 = *v4;
  v9 = v4[1];
  v10 = (_QWORD*)v7;
  v11 = *v5;
  v12 = v5[1];
  v13 = *v6;
  v86[0] = 0;
  v86[1] = 0;
  v88 = 9;
  v89 = v8;
  v90 = v9;
  v93 = v8;
  v94 = v9;
  v91 = v11;
  v92 = v12;
  v87 = "UI_Deco_StatusUP";
  v14 = Manager_bc6460(v13, v86, 0);
  GameRoutine_14a10d0(&v84, v14, v15, &GameData_1a9f09e);
  if (*(_QWORD*)v84 != 0 && *(_DWORD*)(*(_QWORD*)v84 + 16LL) == v84[2]) {
    v16 = v10[1];
    if (v16 != 0) {
      v17 = std___1___shared_weak_count_lock(v16);
      if (v17 != 0) {
        v18 = v17;
        if (*v10 != 0) {
          ControlCreator_13633c0(*v10);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
          std___1___shared_weak_count___release_weak_alt1();
        }
      }
    }
    v80 = *(long double*)v4;
    v19 = (int32x2_t*)ui_LayoutAccessor_FindPane(v10, "N_Eff01");
    v20 = v80;
    if (v19 != nullptr) {
      *(int32x2_t*)&v20 = vzip2_s32(v19[15], v19[17]);
    }
    v21 = v84;
    v22 = *(_QWORD*)v84;
    if (*(_QWORD*)v84 != 0 && *(_DWORD*)(v22 + 16) == v84[2]) {
      v23 = *(_DWORD*)(v22 + 36);
      if (v23 != 0) {
        for (i = 0; i < v23; ++i) {
          if ((int)v23 > (int)i) {
            v25 = *(_QWORD*)(v22 + 40 + 8LL * (int)i);
            if (v25 != 0) {
              *(long double*)(v25 + 16) = v20;
              *(_BYTE*)(v25 + 128) = 1;
              v23 = *(_DWORD*)(v22 + 36);
            }
          }
        }
      }
    }
    v26 = a1[22];
    if (v26 != 0) {
      v27 = std___1___shared_weak_count_lock(v26);
      if (v27 != 0) {
        v28 = a1[21];
        if (v28 != 0) {
          v1 = *(_DWORD*)(v28 + 2372);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v28 != 0) {
            goto LABEL_26;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
          std___1___shared_weak_count___release_weak_alt1();
          if (v28 != 0) {
          LABEL_26:
            v29 = *(_QWORD*)v21;
            if (*(_QWORD*)v21 == 0) {
              goto LABEL_36;
            }
            goto LABEL_30;
          }
        }
      }
    }
    v1 = 0;
    v29 = *(_QWORD*)v21;
    if (*(_QWORD*)v21 == 0) {
      goto LABEL_36;
    }
  LABEL_30:
    if (*(_DWORD*)(v29 + 16) == v21[2]) {
      v30 = *(unsigned int*)(v29 + 36);
      if ((_DWORD)v30 != 0) {
        for (j = 0; j < v30; ++j) {
          v32 = *(_QWORD*)(v29 + 40 + 8 * j);
          if (v32 != 0) {
            *(_DWORD*)(v32 + 408) = v1 + 1;
            v30 = *(unsigned int*)(v29 + 36);
          }
        }
      }
    }
  }
LABEL_36:
  v33 = *v4;
  v34 = v4[1];
  v35 = *v5;
  v36 = v5[1];
  v37 = *v6;
  v86[0] = 0;
  v86[1] = 0;
  v88 = 9;
  v89 = v33;
  v90 = v34;
  v93 = v33;
  v94 = v34;
  v91 = v35;
  v92 = v36;
  v87 = "UI_Deco_ShineA_Side_Loop";
  v38 = Manager_bc6460(v37, v86, 0);
  GameRoutine_14a10d0(&v82, v38, v39, &GameData_1a9f09e);
  v41 = v82;
  v42 = v83;
  if (v83 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v83 + 8), 1u,
                              memory_order_relaxed);
  }
  v43 = a1[150];
  a1[149] = v41;
  a1[150] = v42;
  if (v43 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
      *(__n128*)&v40 = std___1___shared_weak_count___release_weak_alt1();
    }
    v42 = a1[150];
  }
  if (v42 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
      *(__n128*)&v40 = std___1___shared_weak_count___release_weak_alt1();
    }
  }
  v44 = v83;
  if (v83 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v83 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v44 + 16LL))(v44, v40);
    *(__n128*)&v40 = std___1___shared_weak_count___release_weak_alt1();
  }
  v45 = (_DWORD*)a1[149];
  if (*(_QWORD*)v45 == 0 || *(_DWORD*)(*(_QWORD*)v45 + 16LL) != v45[2]) {
    goto LABEL_77;
  }
  v81 = *(long double*)v4;
  v46 = (int32x2_t*)ui_LayoutAccessor_FindPane(v10, "N_Eff00");
  if (v46 != nullptr) {
    *(int32x2_t*)&v40 = vzip2_s32(v46[15], v46[17]);
    v81 = v40;
  }
  v47 = (__int64*)a1[149];
  v48 = *v47;
  if (*v47 != 0 && *(_DWORD*)(v48 + 16) == *((_DWORD*)v47 + 2)) {
    v49 = *(_DWORD*)(v48 + 36);
    if (v49 != 0) {
      v40 = v81;
      for (k = 0; k < v49; ++k) {
        if ((int)v49 > (int)k) {
          v51 = *(_QWORD*)(v48 + 40 + 8LL * (int)k);
          if (v51 != 0) {
            *(long double*)(v51 + 16) = v81;
            *(_BYTE*)(v51 + 128) = 1;
            v49 = *(_DWORD*)(v48 + 36);
          }
        }
      }
      v47 = (__int64*)a1[149];
    }
  }
  v52 = a1[22];
  if (v52 == 0) {
    goto LABEL_70;
  }
  v53 = std___1___shared_weak_count_lock(v52);
  if (v53 == 0) {
    goto LABEL_70;
  }
  v54 = a1[21];
  if (v54 != 0) {
    LODWORD(v43) = *(_DWORD*)(v54 + 2372);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v54 != 0) {
      goto LABEL_67;
    }
  LABEL_70:
    LODWORD(v43) = 0;
    v55 = *v47;
    if (*v47 == 0) {
      goto LABEL_77;
    }
  LABEL_71:
    if (*(_DWORD*)(v55 + 16) == *((_DWORD*)v47 + 2)) {
      v56 = *(unsigned int*)(v55 + 36);
      if ((_DWORD)v56 != 0) {
        for (m = 0; m < v56; ++m) {
          v58 = *(_QWORD*)(v55 + 40 + 8 * m);
          if (v58 != 0) {
            *(_DWORD*)(v58 + 408) = v43 + 1;
            v56 = *(unsigned int*)(v55 + 36);
          }
        }
      }
    }
    goto LABEL_77;
  }
  (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
  *(__n128*)&v40 = std___1___shared_weak_count___release_weak_alt1();
  if (v54 == 0) {
    goto LABEL_70;
  }
LABEL_67:
  v55 = *v47;
  if (*v47 != 0) {
    goto LABEL_71;
  }
LABEL_77:
  v59 = v85;
  if (v85 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v85 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v59 + 16LL))(v59, v40);
    std___1___shared_weak_count___release_weak_alt1();
  }
  v3 = *(unsigned __int8*)(a1[146] + 50LL);
LABEL_81:
  if (v3 >= 7) {
    v60 = *v4;
    v61 = v4[1];
    v62 = *v5;
    v63 = v5[1];
    v64 = *v6;
    v86[0] = 0;
    v86[1] = 0;
    v89 = v60;
    v90 = v61;
    v93 = v60;
    v94 = v61;
    v91 = v62;
    v92 = v63;
    v88 = 9;
    v87 = "UI_Deco_Soldier_Paper_Loop";
    v65 = Manager_bc6460(v64, v86, 0);
    GameRoutine_14a10d0(&v84, v65, v66, &GameData_1a9f09e);
    v68 = v84;
    v69 = v85;
    if (v85 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v85 + 8), 1u,
                                memory_order_relaxed);
    }
    v70 = a1[148];
    a1[147] = v68;
    a1[148] = v69;
    if (v70 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v70 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v70 + 16LL))(v70);
        *(__n128*)&v67 = std___1___shared_weak_count___release_weak_alt1();
      }
      v69 = a1[148];
    }
    if (v69 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v69 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v69 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69);
        *(__n128*)&v67 = std___1___shared_weak_count___release_weak_alt1();
      }
    }
    v71 = v85;
    if (v85 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v85 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v71 + 16LL))(v71, v67);
      std___1___shared_weak_count___release_weak_alt1();
    }
    v72 = (_DWORD*)a1[147];
    if (*(_QWORD*)v72 != 0 && *(_DWORD*)(*(_QWORD*)v72 + 16LL) == v72[2]) {
      v73 = a1[22];
      if (v73 != 0) {
        v74 = std___1___shared_weak_count_lock(v73);
        if (v74 != 0) {
          v75 = a1[21];
          if (v75 != 0) {
            LODWORD(v70) = *(_DWORD*)(v75 + 2372);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v74 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if (v75 != 0) {
              goto LABEL_102;
            }
          }
          else {
            (*(void (**)(__int64))(*(_QWORD*)v74 + 16LL))(v74);
            std___1___shared_weak_count___release_weak_alt1();
            if (v75 != 0) {
            LABEL_102:
              v76 = *(_QWORD*)v72;
              if (*(_QWORD*)v72 == 0) {
                return;
              }
              goto LABEL_106;
            }
          }
        }
      }
      LODWORD(v70) = 0;
      v76 = *(_QWORD*)v72;
      if (*(_QWORD*)v72 == 0) {
        return;
      }
    LABEL_106:
      if (*(_DWORD*)(v76 + 16) == v72[2]) {
        v77 = *(unsigned int*)(v76 + 36);
        if ((_DWORD)v77 != 0) {
          for (n = 0; n < v77; ++n) {
            v79 = *(_QWORD*)(v76 + 40 + 8 * n);
            if (v79 != 0) {
              *(_DWORD*)(v79 + 408) = v70 + 1;
              v77 = *(unsigned int*)(v76 + 36);
            }
          }
        }
      }
    }
  }
}

__int64 TelopRecruitResult_Unknown39(_QWORD* a1)
{
  _DWORD* v1;
  __int64 v3;
  unsigned __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  long double v9;
  __int64 result;
  _DWORD* v11;
  __int64 v12;
  __int64 v13;
  _DWORD* v14;
  __int64 v15;
  __int64 v16;
  _DWORD* v17;
  __int64 v18;

  v1 = (_DWORD*)a1[106];
  if (*(_QWORD*)v1 != 0 && *(_DWORD*)(*(_QWORD*)v1 + 16LL) == v1[2]) {
    GameRoutine_14a1390(a1 + 106, 1);
  }
  v3 = a1[118];
  if (v3 != 0) {
    if (*(_QWORD*)(v3 + 216) != *(_QWORD*)(v3 + 208)) {
      v4 = 0;
      v5 = ui_LayoutAccessor_empty__ptr[0];
      do {
        if (*(_QWORD*)(v3 + 168) != 0) {
          v6 = *(__int64**)(v3 + 168);
        }
        else {
          v6 = v5;
        }
        v7 = game_util_Format("L_MotivationGauge%02d", (unsigned int)v4);
        v8 = GameRoutine_155fbe0(v6, v7);
        LODWORD(v9) = 1.0;
        GameRoutine_1562680(v8, "Out", v9);
        ++v4;
      } while (
          0xAAAAAAAAAAAAAAABLL *
              ((__int64)(*(_QWORD*)(v3 + 216) - *(_QWORD*)(v3 + 208)) >> 3) >
          v4);
    }
    *(_DWORD*)(v3 + 232) = 6;
  }
  result = a1[145];
  if (result != 0) {
    result = GameRoutine_173fac0(result, 0);
  }
  v11 = (_DWORD*)a1[149];
  if (*(_QWORD*)v11 != 0 && *(_DWORD*)(*(_QWORD*)v11 + 16LL) == v11[2]) {
    v12 = a1[150];
    if (v12 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                memory_order_relaxed);
      v18 = v12;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                memory_order_relaxed);
    }
    else {
      v18 = 0;
    }
    v17 = v11;
    result = GameRoutine_14a1520(&v17, 1);
    v13 = v18;
    if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      result = std___1___shared_weak_count___release_weak();
    }
    if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      result = std___1___shared_weak_count___release_weak();
    }
    *(_QWORD*)a1[149] = 0;
  }
  v14 = (_DWORD*)a1[147];
  if (*(_QWORD*)v14 != 0 && *(_DWORD*)(*(_QWORD*)v14 + 16LL) == v14[2]) {
    v15 = a1[148];
    if (v15 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                memory_order_relaxed);
      v18 = v15;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                memory_order_relaxed);
    }
    else {
      v18 = 0;
    }
    v17 = v14;
    result = GameRoutine_14a1520(&v17, 1);
    v16 = v18;
    if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      result = std___1___shared_weak_count___release_weak();
    }
    if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      result = std___1___shared_weak_count___release_weak();
    }
    *(_QWORD*)a1[147] = 0;
  }
  return result;
}

void TelopRecruitResult_Unknown53(__int64 a1)
{
  __int64 v1;
  long double v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;

  TelopResult_17619f0((void*)(&v5), a1, 10);
  if (v6 != 0) {
    v1 = std___1___shared_weak_count_lock(v6);
    v3 = v5;
    if (v6 != 0) {
      *(__n128*)&v2 = std___1___shared_weak_count___release_weak_alt1();
    }
    if (v1 == 0 || v3 == 0) {
      if (v1 == 0) {
        return;
      }
    }
    else {
      ui_LayoutAccessor_FindPane(v3, "L_Bg/Bg");
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v1 + 16LL))(v1, v2);
      std___1___shared_weak_count___release_weak_alt1();
    }
  }
}

#pragma GCC visibility pop
