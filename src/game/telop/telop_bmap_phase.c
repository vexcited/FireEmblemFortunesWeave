#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_137b260(__int64);
__int64 GameRoutine_80c680(_QWORD);
__int64 TelopBmapPhase_Unknown35(__int64 a1);
__int64 ControlCreator_13633c0(void);
__int64 GameRoutine_14a10d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_155f760(_QWORD, _QWORD, _QWORD);
__int64 Manager_bc6460(_QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern __int64* eft_g_effectSystem_ptr[3];
extern char GameData_1a9f09e;
__int64 TelopBmapPhase_137b260(__int64 a1);

__int64 TelopBmapPhase_137b260(__int64 a1)
{
  int v1;
  int v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int32x4_t* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int128 v33;
  _DWORD* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 j;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  unsigned int v45;
  unsigned int i;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned int v56;
  __int64 result;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  _DWORD* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 m;
  __int64 v68;
  __int64* v69;
  __int64 v70;
  unsigned int v71;
  unsigned int k;
  __int64 v73;
  unsigned __int32 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int128 v78;
  __int64 v79;
  __int64 v80;
  _QWORD v81[2];
  __int64 v82;
  int v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;

  v4 = *(_QWORD*)(a1 + 176);
  if (v4 != 0) {
    v5 = std___1___shared_weak_count_lock(v4);
    if (v5 != 0) {
      v6 = v5;
      if (*(_QWORD*)(a1 + 168) != 0) {
        ControlCreator_13633c0();
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
        if (*(_QWORD*)(a1 + 184) == 0) {
          goto LABEL_14;
        }
      LABEL_7:
        v7 = *(_QWORD*)(a1 + 176);
        v74 = 0;
        if (v7 == 0) {
          goto LABEL_26;
        }
        v8 = std___1___shared_weak_count_lock(v7);
        if (v8 != 0) {
          v9 = *(_QWORD*)(a1 + 168);
          if (v9 != 0) {
            v1 = *(unsigned __int8*)(v9 + 24);
            v10 = v9 + 152;
            if (v1 == 0) {
              v10 = 0;
            }
            v11 = v10 != *(_QWORD*)(a1 + 184);
          }
          else {
            v11 = true;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if (v11) {
              goto LABEL_18;
            }
          }
          else {
            v13 = v8;
            (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
            std___1___shared_weak_count___release_weak(v13);
            if (v11) {
              goto LABEL_18;
            }
          }
          if ((v1 & 1) != 0) {
            goto LABEL_23;
          }
        LABEL_26:
          v77 = 0;
          goto LABEL_27;
        }
      LABEL_18:
        v12 = *(_QWORD*)(a1 + 176);
        if (v12 == 0 || *(_QWORD*)(v12 + 8) == -1) {
          goto LABEL_26;
        }
      LABEL_23:
        v14 = *(_QWORD*)(a1 + 184);
        if (v14 == 0) {
          goto LABEL_26;
        }
        v15 = (int32x4_t*)GameRoutine_155f760(a1 + 168, v14, "Lct_Eff");
        v77 = 0;
        if (v15 != nullptr) {
          LODWORD(v16) = LANES128_OF(vdupq_laneq_s32(v15[7], 3)).n128_u32[0];
          v74 = LANES128(v15[9]).n128_u32[3];
          HIDWORD(v16) = HIDWORD(LANES128(v15[8]).n128_u64[1]);
          v77 = v16;
        }
      LABEL_27:
        v17 = a1 + 849;
        if ((*(_BYTE*)(a1 + 848) & 1) != 0) {
          v18 = *(_QWORD*)(a1 + 864);
        }
        else {
          v18 = a1 + 849;
        }
        v19 = game_util_Format("UI_Deco_TurnPhase_%s_Fire", v18);
        v20 = (__int64*)GameData_212c540;
        v21 = (__int64*)GameData_212c548;
        v81[0] = 0;
        v81[1] = 0;
        v82 = v19;
        v22 = *((_QWORD*)GameData_212c540 + 1);
        v84 = *(_QWORD*)GameData_212c540;
        v85 = v22;
        v23 = *(_QWORD*)GameData_212c548;
        v24 = *((_QWORD*)GameData_212c548 + 1);
        v88 = v84;
        v89 = v22;
        v86 = v23;
        v87 = v24;
        v83 = 9;
        v25 = eft_g_effectSystem_ptr[0];
        v26 = Manager_bc6460(*eft_g_effectSystem_ptr[0], v81, 0);
        GameRoutine_14a10d0(&v79, v26, v27, &GameData_1a9f09e);
        v28 = v79;
        v29 = v80;
        if (v80 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v80 + 8), 1u,
                                    memory_order_relaxed);
        }
        v30 = *(_QWORD*)(a1 + 888);
        *(_QWORD*)(a1 + 880) = v28;
        v31 = v74;
        *(_QWORD*)(a1 + 888) = v29;
        if (v30 != 0) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
            std___1___shared_weak_count___release_weak(v30);
            v31 = v74;
          }
          v29 = *(_QWORD*)(a1 + 888);
        }
        if (v29 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v75 = v31;
            (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
            std___1___shared_weak_count___release_weak(v29);
            v31 = v75;
          }
        }
        v32 = v80;
        if (v80 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v80 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          v76 = v31;
          (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
          std___1___shared_weak_count___release_weak(v32);
          v31 = v76;
        }
        *(_QWORD*)&v33 = v77;
        v34 = *(_DWORD**)(a1 + 880);
        *((_QWORD*)&v33 + 1) = v31;
        v78 = v33;
        if (*(_QWORD*)v34 != 0 && *(_DWORD*)(*(_QWORD*)v34 + 16LL) == v34[2]) {
          v35 = *(_QWORD*)(a1 + 176);
          if (v35 != 0) {
            v36 = std___1___shared_weak_count_lock(v35);
            if (v36 != 0) {
              v37 = *(_QWORD*)(a1 + 168);
              if (v37 != 0) {
                v2 = *(_DWORD*)(v37 + 2372);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
                if (v37 != 0) {
                  goto LABEL_50;
                }
              }
              else {
                v39 = v36;
                (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
                std___1___shared_weak_count___release_weak(v39);
                if (v37 != 0) {
                LABEL_50:
                  v38 = *(_QWORD*)v34;
                  if (*(_QWORD*)v34 == 0) {
                    goto LABEL_60;
                  }
                  goto LABEL_54;
                }
              }
            }
          }
          v2 = 0;
          v38 = *(_QWORD*)v34;
          if (*(_QWORD*)v34 == 0) {
          LABEL_60:
            v43 = *(__int64**)(a1 + 880);
            v44 = *v43;
            if (*v43 != 0 && *(_DWORD*)(v44 + 16) == *((_DWORD*)v43 + 2)) {
              v45 = *(_DWORD*)(v44 + 36);
              if (v45 != 0) {
                for (i = 0; i < v45; ++i) {
                  if ((int)v45 > (int)i) {
                    v47 = *(_QWORD*)(v44 + 40 + 8LL * (int)i);
                    if (v47 != 0) {
                      *(_OWORD*)(v47 + 16) = v78;
                      *(_BYTE*)(v47 + 128) = 1;
                      v45 = *(_DWORD*)(v44 + 36);
                    }
                  }
                }
              }
            }
            goto LABEL_68;
          }
        LABEL_54:
          if (*(_DWORD*)(v38 + 16) == v34[2]) {
            v40 = *(unsigned int*)(v38 + 36);
            if ((_DWORD)v40 != 0) {
              for (j = 0; j < v40; ++j) {
                v42 = *(_QWORD*)(v38 + 40 + 8 * j);
                if (v42 != 0) {
                  *(_DWORD*)(v42 + 408) = v2 + 1;
                  v40 = *(unsigned int*)(v38 + 36);
                }
              }
            }
          }
          goto LABEL_60;
        }
      LABEL_68:
        if ((*(_BYTE*)(a1 + 848) & 1) != 0) {
          v48 = *(_QWORD*)(a1 + 864);
        }
        else {
          v48 = a1 + 849;
        }
        v49 = game_util_Format("UI_Deco_TurnPhase_%s_End", v48);
        v50 = *v20;
        v51 = v20[1];
        v52 = *v21;
        v53 = v21[1];
        v82 = v49;
        v54 = *v25;
        v81[0] = 0;
        v81[1] = 0;
        v84 = v50;
        v85 = v51;
        v88 = v50;
        v89 = v51;
        v86 = v52;
        v87 = v53;
        v83 = 9;
        v55 = Manager_bc6460(v54, v81, 0);
        result = GameRoutine_14a10d0(&v79, v55, v56, &GameData_1a9f09e);
        v58 = v79;
        v59 = v80;
        if (v80 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v80 + 8), 1u,
                                    memory_order_relaxed);
        }
        v60 = *(_QWORD*)(a1 + 904);
        *(_QWORD*)(a1 + 896) = v58;
        *(_QWORD*)(a1 + 904) = v59;
        if (v60 != 0) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v60 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v60 + 16LL))(v60);
            result = std___1___shared_weak_count___release_weak(v60);
          }
          v59 = *(_QWORD*)(a1 + 904);
        }
        if (v59 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v59 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v59 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
            result = std___1___shared_weak_count___release_weak(v59);
          }
        }
        v61 = v80;
        if (v80 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v80 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61);
          result = std___1___shared_weak_count___release_weak(v61);
        }
        v62 = *(_DWORD**)(a1 + 896);
        if (*(_QWORD*)v62 != 0 && *(_DWORD*)(*(_QWORD*)v62 + 16LL) == v62[2]) {
          result = *(_QWORD*)(a1 + 176);
          if (result != 0) {
            result = std___1___shared_weak_count_lock(result);
            if (result != 0) {
              v63 = *(_QWORD*)(a1 + 168);
              if (v63 != 0) {
                v17 = *(_DWORD*)(v63 + 2372);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
                if (v63 != 0) {
                  goto LABEL_91;
                }
              }
              else {
                v65 = result;
                (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
                result = std___1___shared_weak_count___release_weak(v65);
                if (v63 != 0) {
                LABEL_91:
                  v64 = *(_QWORD*)v62;
                  if (*(_QWORD*)v62 == 0) {
                    goto LABEL_101;
                  }
                  goto LABEL_95;
                }
              }
            }
          }
          v17 = 0;
          v64 = *(_QWORD*)v62;
          if (*(_QWORD*)v62 == 0) {
          LABEL_101:
            v69 = *(__int64**)(a1 + 896);
            v70 = *v69;
            if (*v69 != 0 && *(_DWORD*)(v70 + 16) == *((_DWORD*)v69 + 2)) {
              v71 = *(_DWORD*)(v70 + 36);
              if (v71 != 0) {
                for (k = 0; k < v71; ++k) {
                  if ((int)v71 > (int)k) {
                    v73 = *(_QWORD*)(v70 + 40 + 8LL * (int)k);
                    if (v73 != 0) {
                      *(_OWORD*)(v73 + 16) = v78;
                      *(_BYTE*)(v73 + 128) = 1;
                      v71 = *(_DWORD*)(v70 + 36);
                    }
                  }
                }
              }
            }
            return result;
          }
        LABEL_95:
          if (*(_DWORD*)(v64 + 16) == v62[2]) {
            v66 = *(unsigned int*)(v64 + 36);
            if ((_DWORD)v66 != 0) {
              for (m = 0; m < v66; ++m) {
                v68 = *(_QWORD*)(v64 + 40 + 8 * m);
                if (v68 != 0) {
                  *(_DWORD*)(v68 + 408) = v17 + 1;
                  v66 = *(unsigned int*)(v64 + 36);
                }
              }
            }
          }
          goto LABEL_101;
        }
        return result;
      }
    }
  }
  if (*(_QWORD*)(a1 + 184) != 0) {
    goto LABEL_7;
  }
LABEL_14:
  v74 = 0;
  goto LABEL_26;
}

__int64 TelopBmapPhase_Unknown35(__int64 a1)
{
  GameRoutine_137b260(a1);
  return GameRoutine_80c680(*(unsigned __int8*)(a1 + 912));
}

#pragma GCC visibility pop
