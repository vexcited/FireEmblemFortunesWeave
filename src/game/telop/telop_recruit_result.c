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
__int64 TelopRecruitResult_Unknown39_alt1(_QWORD* a1) __asm__(
    "TelopRecruitResult_Unknown39");
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
void TelopRecruitResult_Unknown36_alt1(_QWORD* a1) __asm__(
    "TelopRecruitResult_Unknown36");
void TelopRecruitResult_Unknown53(__int64 a1);
_QWORD* GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64*
LayoutAccessor_155fbe0_alt1(__int64*,
                            const char*) __asm__("LayoutAccessor_155fbe0");
__int64* Manager_bc6460_alt1(_QWORD*, __int64, char) __asm__("Manager_bc6460");
__int64
ControlCreator_13633c0_alt1(__int64 result) __asm__("ControlCreator_13633c0");
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameRoutine_14a1390_alt1(__int64*, char) __asm__("GameRoutine_14a1390");
__int64 GameRoutine_14a1520_alt1(__int64*, char) __asm__("GameRoutine_14a1520");
__int64 GameRoutine_1760100_alt1(__int64) __asm__("GameRoutine_1760100");
__int64 ProcInOutAnim_173fac0(__int64, char);
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
__int64 TelopRecruitResult_Unknown36(__int64* a1);
__int64 TelopRecruitResult_Unknown39(__int64* a1);

__int64 TelopRecruitResult_Unknown36(__int64* a1)
{
  int v1;
  __int64 result;
  unsigned int v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64* v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int32x2_t* v20;
  __int128 v21;
  _DWORD* v22;
  __int64 v23;
  unsigned int v24;
  unsigned int i;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 j;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64* v40;
  unsigned int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _DWORD* v46;
  int32x2_t* v47;
  __int128 v48;
  __int64 v49;
  __int64 v50;
  unsigned int v51;
  unsigned int k;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 m;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  _QWORD* v65;
  __int64* v66;
  unsigned int v67;
  _DWORD* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  _DWORD* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 n;
  __int64 v78;
  __int128 v79;
  __int128 v80;
  struct {
    __int64 v81;
    __int64 v82;
  } v81_;
  struct {
    _DWORD* v83;
    __int64 v84;
  } v83_;
  struct {
    _QWORD v85[2];
    const char* v86;
    int v87;
    char gap76_[4];
    __int64 v88;
    __int64 v89;
    __int64 v90;
    __int64 v91;
    __int64 v92;
    __int64 v93;
  } v85_;

  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v67 = COERCE_AS(__typeof__(v67),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = GameRoutine_1760100_alt1((__int64)a1),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v67 = COERCE_AS(__typeof__(v67),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = *(unsigned __int8*)(a1[146] + 50);
  v5 = (__int64*)GameData_212c540;
  v6 = (__int64*)GameData_212c548;
  v7 = eft_g_effectSystem_ptr[0];
  if (v4 < 9) {
    goto LABEL_81;
  }
  v8 = LayoutAccessor_155fbe0_alt1(a1 + 21, "L_LegionGet_00"),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v67 = COERCE_AS(__typeof__(v67),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = *v5;
  v10 = v5[1];
  v11 = v8;
  v12 = *v6;
  v13 = v6[1];
  v14 = (_QWORD*)*v7;
  v85_.v85[0] = 0;
  v85_.v85[1] = 0;
  v85_.v87 = 9;
  v85_.v88 = v9;
  v85_.v89 = v10;
  v85_.v92 = v9;
  v85_.v93 = v10;
  v85_.v90 = v12;
  v85_.v91 = v13;
  v85_.v86 = "UI_Deco_StatusUP";
  v15 = Manager_bc6460_alt1(v14, (__int64)v85_.v85, 0),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v67 = COERCE_AS(__typeof__(v67),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameHr_14a10d0(&v83_.v83, (__int64)v15, v16, (__int64)&GameData_1a9f09e),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v67 = COERCE_AS(__typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_QWORD*)v83_.v83 != 0 &&
      *(_DWORD*)(*(_QWORD*)v83_.v83 + 16LL) == v83_.v83[2]) {
    v17 = v11[1];
    if (v17 != 0) {
      v18 = std___1___shared_weak_count_lock_alt1(v17),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v67 = COERCE_AS(__typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v18 != 0) {
        v19 = v18;
        if (*v11 != 0) {
          ControlCreator_13633c0_alt1(*v11),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak_alt2(v19),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
    }
    v79 = *(_OWORD*)v5;
    v20 = (int32x2_t*)ui_LayoutAccessor_FindPane_alt1(v11, (__int64)"N_Eff01"),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v67 = COERCE_AS(__typeof__(v67),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v21 = v79;
    if (v20 != nullptr) {
      *(int32x2_t*)&v21 = vzip2_s32(v20[15], v20[17]);
    }
    v22 = v83_.v83;
    v23 = *(_QWORD*)v83_.v83;
    if (*(_QWORD*)v83_.v83 != 0 && *(_DWORD*)(v23 + 16) == v83_.v83[2]) {
      v24 = *(_DWORD*)(v23 + 36);
      if (v24 != 0) {
        for (i = 0; i < v24; ++i) {
          if ((int)v24 > (int)i) {
            v26 = *(_QWORD*)(v23 + 40 + 8LL * (int)i);
            if (v26 != 0) {
              *(_OWORD*)(v26 + 16) = v21;
              *(_BYTE*)(v26 + 128) = 1;
              v24 = *(_DWORD*)(v23 + 36);
            }
          }
        }
      }
    }
    v27 = a1[22];
    if (v27 != 0) {
      v28 = std___1___shared_weak_count_lock_alt1(v27),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v67 = COERCE_AS(__typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v28 != 0) {
        v29 = a1[21];
        if (v29 != 0) {
          v1 = *(_DWORD*)(v29 + 2372);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v29 != 0) {
            goto LABEL_26;
          }
        }
        else {
          v31 = v28;
          (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak_alt2(v31),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v29 != 0) {
          LABEL_26:
            v30 = *(_QWORD*)v22;
            if (*(_QWORD*)v22 == 0) {
              goto LABEL_36;
            }
            goto LABEL_30;
          }
        }
      }
    }
    v1 = 0;
    v30 = *(_QWORD*)v22;
    if (*(_QWORD*)v22 == 0) {
      goto LABEL_36;
    }
  LABEL_30:
    if (*(_DWORD*)(v30 + 16) == v22[2]) {
      v32 = *(unsigned int*)(v30 + 36);
      if ((_DWORD)v32 != 0) {
        for (j = 0; j < v32; ++j) {
          v34 = *(_QWORD*)(v30 + 40 + 8 * j);
          if (v34 != 0) {
            *(_DWORD*)(v34 + 408) = v1 + 1;
            v32 = *(unsigned int*)(v30 + 36);
          }
        }
      }
    }
  }
LABEL_36:
  v35 = *v5;
  v36 = v5[1];
  v37 = *v6;
  v38 = v6[1];
  v39 = (_QWORD*)*v7;
  v85_.v85[0] = 0;
  v85_.v85[1] = 0;
  v85_.v87 = 9;
  v85_.v88 = v35;
  v85_.v89 = v36;
  v85_.v92 = v35;
  v85_.v93 = v36;
  v85_.v90 = v37;
  v85_.v91 = v38;
  v85_.v86 = "UI_Deco_ShineA_Side_Loop";
  v40 = Manager_bc6460_alt1(v39, (__int64)v85_.v85, 0),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v67 = COERCE_AS(__typeof__(v67),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = (__int64)GameHr_14a10d0(&v81_.v81, (__int64)v40, v41,
                                   (__int64)&GameData_1a9f09e),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v67 = COERCE_AS(__typeof__(v67),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v42 = v81_.v81;
  v43 = v81_.v82;
  if (v81_.v82 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v81_.v82 + 8), 1u,
                              memory_order_relaxed);
  }
  v44 = a1[150];
  a1[149] = v42;
  a1[150] = v43;
  if (v44 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v67 = COERCE_AS(__typeof__(v67),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = std___1___shared_weak_count___release_weak_alt2(v44),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v67 = COERCE_AS(__typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v43 = a1[150];
  }
  if (v43 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v67 = COERCE_AS(__typeof__(v67),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = std___1___shared_weak_count___release_weak_alt2(v43),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v67 = COERCE_AS(__typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v45 = v81_.v82;
  if (v81_.v82 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v81_.v82 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v67 = COERCE_AS(__typeof__(v67),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = std___1___shared_weak_count___release_weak_alt2(v45),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v67 = COERCE_AS(__typeof__(v67),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v46 = (_DWORD*)a1[149];
  if (*(_QWORD*)v46 == 0 || *(_DWORD*)(*(_QWORD*)v46 + 16LL) != v46[2]) {
    goto LABEL_77;
  }
  v80 = *(_OWORD*)v5;
  v47 = (int32x2_t*)ui_LayoutAccessor_FindPane_alt1(v11, (__int64)"N_Eff00"),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v67 = COERCE_AS(__typeof__(v67),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v47 != nullptr) {
    *(int32x2_t*)&v48 = vzip2_s32(v47[15], v47[17]);
    v80 = v48;
  }
  v49 = a1[149];
  v50 = *(_QWORD*)v49;
  if (*(_QWORD*)v49 != 0 && *(_DWORD*)(v50 + 16) == *(_DWORD*)(v49 + 8)) {
    v51 = *(_DWORD*)(v50 + 36);
    if (v51 != 0) {
      for (k = 0; k < v51; ++k) {
        if ((int)v51 > (int)k) {
          v53 = *(_QWORD*)(v50 + 40 + 8LL * (int)k);
          if (v53 != 0) {
            *(_OWORD*)(v53 + 16) = v80;
            *(_BYTE*)(v53 + 128) = 1;
            v51 = *(_DWORD*)(v50 + 36);
          }
        }
      }
      v49 = a1[149];
    }
  }
  result = a1[22];
  if (result == 0) {
    goto LABEL_70;
  }
  result = std___1___shared_weak_count_lock_alt1(result),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v67 = COERCE_AS(__typeof__(v67),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (result == 0) {
    goto LABEL_70;
  }
  v54 = a1[21];
  if (v54 != 0) {
    LODWORD(v44) = *(_DWORD*)(v54 + 2372);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v54 != 0) {
      goto LABEL_67;
    }
  LABEL_70:
    LODWORD(v44) = 0;
    v55 = *(_QWORD*)v49;
    if (*(_QWORD*)v49 == 0) {
      goto LABEL_77;
    }
  LABEL_71:
    if (*(_DWORD*)(v55 + 16) == *(_DWORD*)(v49 + 8)) {
      v57 = *(unsigned int*)(v55 + 36);
      if ((_DWORD)v57 != 0) {
        for (m = 0; m < v57; ++m) {
          v59 = *(_QWORD*)(v55 + 40 + 8 * m);
          if (v59 != 0) {
            *(_DWORD*)(v59 + 408) = v44 + 1;
            v57 = *(unsigned int*)(v55 + 36);
          }
        }
      }
    }
    goto LABEL_77;
  }
  v56 = result;
  (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v67 = COERCE_AS(__typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = std___1___shared_weak_count___release_weak_alt2(v56),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v67 = COERCE_AS(__typeof__(v67),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v54 == 0) {
    goto LABEL_70;
  }
LABEL_67:
  v55 = *(_QWORD*)v49;
  if (*(_QWORD*)v49 != 0) {
    goto LABEL_71;
  }
LABEL_77:
  v60 = v83_.v84;
  if (v83_.v84 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v83_.v84 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v60 + 16LL))(v60),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v67 = COERCE_AS(__typeof__(v67),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = std___1___shared_weak_count___release_weak_alt2(v60),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v67 = COERCE_AS(__typeof__(v67),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v4 = *(unsigned __int8*)(a1[146] + 50);
LABEL_81:
  if (v4 >= 7) {
    v61 = *v5;
    v62 = v5[1];
    v63 = *v6;
    v64 = v6[1];
    v65 = (_QWORD*)*v7;
    v85_.v85[0] = 0;
    v85_.v85[1] = 0;
    v85_.v88 = v61;
    v85_.v89 = v62;
    v85_.v92 = v61;
    v85_.v93 = v62;
    v85_.v90 = v63;
    v85_.v91 = v64;
    v85_.v87 = 9;
    v85_.v86 = "UI_Deco_Soldier_Paper_Loop";
    v66 = Manager_bc6460_alt1(v65, (__int64)v85_.v85, 0),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v67 = COERCE_AS(__typeof__(v67),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = (__int64)GameHr_14a10d0(&v83_.v83, (__int64)v66, v67,
                                     (__int64)&GameData_1a9f09e),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v67 = COERCE_AS(__typeof__(v67),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v68 = v83_.v83;
    v69 = v83_.v84;
    if (v83_.v84 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v83_.v84 + 8), 1u,
                                memory_order_relaxed);
    }
    v70 = a1[148];
    a1[147] = (__int64)v68;
    a1[148] = v69;
    if (v70 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v70 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v70 + 16LL))(v70),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v67 = COERCE_AS(__typeof__(v67),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        result = std___1___shared_weak_count___release_weak_alt2(v70),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v67 = COERCE_AS(__typeof__(v67),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v69 = a1[148];
    }
    if (v69 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v69 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v69 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v67 = COERCE_AS(__typeof__(v67),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        result = std___1___shared_weak_count___release_weak_alt2(v69),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v67 = COERCE_AS(__typeof__(v67),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    v71 = v83_.v84;
    if (v83_.v84 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v83_.v84 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v67 = COERCE_AS(__typeof__(v67),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = std___1___shared_weak_count___release_weak_alt2(v71),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v67 = COERCE_AS(__typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v72 = (_DWORD*)a1[147];
    if (*(_QWORD*)v72 != 0 && *(_DWORD*)(*(_QWORD*)v72 + 16LL) == v72[2]) {
      result = a1[22];
      if (result != 0) {
        result = std___1___shared_weak_count_lock_alt1(result),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v67 = COERCE_AS(__typeof__(v67),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (result != 0) {
          v73 = a1[21];
          if (v73 != 0) {
            LODWORD(v70) = *(_DWORD*)(v73 + 2372);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if (v73 != 0) {
              goto LABEL_102;
            }
          }
          else {
            v75 = result;
            (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
                v16 =
                    COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v41 =
                    COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v67 =
                    COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            result = std___1___shared_weak_count___release_weak_alt2(v75),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v67 = COERCE_AS(__typeof__(v67),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (v73 != 0) {
            LABEL_102:
              v74 = *(_QWORD*)v72;
              if (*(_QWORD*)v72 == 0) {
                return result;
              }
              goto LABEL_106;
            }
          }
        }
      }
      LODWORD(v70) = 0;
      v74 = *(_QWORD*)v72;
      if (*(_QWORD*)v72 == 0) {
        return result;
      }
    LABEL_106:
      if (*(_DWORD*)(v74 + 16) == v72[2]) {
        v76 = *(unsigned int*)(v74 + 36);
        if ((_DWORD)v76 != 0) {
          for (n = 0; n < v76; ++n) {
            v78 = *(_QWORD*)(v74 + 40 + 8 * n);
            if (v78 != 0) {
              *(_DWORD*)(v78 + 408) = v70 + 1;
              v76 = *(unsigned int*)(v74 + 36);
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 TelopRecruitResult_Unknown39(__int64* a1)
{
  _DWORD* v1;
  __int64 v3;
  unsigned __int64 v4;
  __int64* v5;
  __int64* v6;
  char* v7;
  __int64* v8;
  __int64 result;
  _DWORD* v10;
  __int64 v11;
  __int64 v12;
  _DWORD* v13;
  __int64 v14;
  __int64 v15;
  struct {
    _DWORD* v16;
    __int64 v17;
  } v16_;

  v1 = (_DWORD*)a1[106];
  if (*(_QWORD*)v1 != 0 && *(_DWORD*)(*(_QWORD*)v1 + 16LL) == v1[2]) {
    GameRoutine_14a1390_alt1(a1 + 106, 1);
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
        v7 = game_util_Format_alt1("L_MotivationGauge%02d", (unsigned int)v4);
        v8 = LayoutAccessor_155fbe0_alt1(v6, v7);
        GameHr_1562680((__int64)v8, "Out", 0x1.0000000000000p+0f);
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
    result = ProcInOutAnim_173fac0(result, 0);
  }
  v10 = (_DWORD*)a1[149];
  if (*(_QWORD*)v10 != 0 && *(_DWORD*)(*(_QWORD*)v10 + 16LL) == v10[2]) {
    v11 = a1[150];
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
      v16_.v17 = v11;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
    }
    else {
      v16_.v17 = 0;
    }
    v16_.v16 = v10;
    result = GameRoutine_14a1520_alt1((__int64*)&v16_.v16, 1);
    v12 = v16_.v17;
    if (v16_.v17 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v16_.v17 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      result = std___1___shared_weak_count___release_weak_alt2(v12);
    }
    if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      result = std___1___shared_weak_count___release_weak_alt2(v11);
    }
    *(_QWORD*)a1[149] = 0;
  }
  v13 = (_DWORD*)a1[147];
  if (*(_QWORD*)v13 != 0 && *(_DWORD*)(*(_QWORD*)v13 + 16LL) == v13[2]) {
    v14 = a1[148];
    if (v14 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                memory_order_relaxed);
      v16_.v17 = v14;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                memory_order_relaxed);
    }
    else {
      v16_.v17 = 0;
    }
    v16_.v16 = v13;
    result = GameRoutine_14a1520_alt1((__int64*)&v16_.v16, 1);
    v15 = v16_.v17;
    if (v16_.v17 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v16_.v17 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      result = std___1___shared_weak_count___release_weak_alt2(v15);
    }
    if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      result = std___1___shared_weak_count___release_weak_alt2(v14);
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
