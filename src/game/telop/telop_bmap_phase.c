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
_QWORD* Se_80e330(__int64, __int64);
__int64 GameRoutine_137aea0(__int64, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HashString32(__int64 result);
__int64 game_ProcInst_Register(__int64);
__n128 memset(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_2170810;
extern __int64 (*game_telop_TelopBmapPhase_vtable[])();
extern __int64 (*game_telop_TelopGmapTurnStart_vtable[])();
extern __int64 (*game_telop_TelopPhase_vtable[])();
extern __int64* GameData_2130240[8];
extern __int64 GameData_212c608[2];
extern __int64 GameData_2131678;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_2032c50[3];
__int64 TelopBmapPhase_137bb90(__int64 a1, unsigned __int8 a2, int a3, int a4);
__int64 TelopBmapPhase_137c090(__int64 a1, char a2, char a3);

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

__int64 TelopBmapPhase_137bb90(__int64 a1, unsigned __int8 a2, int a3, int a4)
{
  __int64* v6;
  __int64 v7;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BYTE* v22;
  char v23;
  const char* v24;
  const char* v25;

  if (a1 != 0) {
    v6 = (__int64*)fw_memory_g_heap_manager_ptr;
    v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        920, 16, 0);
    memset(v7 + 144, 0, 776);
    v11 = GameData_212c608[0];
    *(_QWORD*)(v7 + 88) = 0;
    *(_QWORD*)(v7 + 96) = 0;
    *(_QWORD*)(v7 + 104) = 0;
    *(_QWORD*)(v7 + 112) = 0;
    *(_QWORD*)(v7 + 120) = 0;
    *(_QWORD*)(v7 + 128) = 0;
    *(_WORD*)(v7 + 136) = 0;
    *(_QWORD*)(v7 + 16) = 0;
    *(_QWORD*)(v7 + 24) = "NULL";
    *(_QWORD*)(v7 + 32) = 0;
    v12 = (_QWORD*)(v7 + 32);
    *(_QWORD*)(v7 + 138) = 0;
    *(_QWORD*)(v7 + 144) = 0;
    *(_QWORD*)(v7 + 40) = 0;
    *(_QWORD*)(v7 + 48) = 0;
    *(_QWORD*)(v7 + 56) = 0;
    *(_QWORD*)(v7 + 64) = 0;
    *(_QWORD*)(v7 + 72) = 0;
    *(_QWORD*)(v7 + 80) = 0;
    *(_QWORD*)v7 = v11 + 16;
    *(_QWORD*)(v7 + 8) = 0;
    game_ProcInst_Register(v7);
    *(_QWORD*)(v7 + 200) = 0;
    *(_QWORD*)(v7 + 152) = 0;
    *(_QWORD*)(v7 + 160) = 0;
    *(_QWORD*)(v7 + 168) = 0;
    *(_QWORD*)(v7 + 176) = 0;
    *(_QWORD*)(v7 + 208) = 0;
    *(_QWORD*)(v7 + 216) = 0;
    *(_QWORD*)(v7 + 224) = 0;
    *(_QWORD*)(v7 + 232) = 0;
    *(_DWORD*)(v7 + 320) = 3;
    *(_QWORD*)(v7 + 184) = 0;
    *(_QWORD*)(v7 + 192) = v7 + 200;
    *(_QWORD*)(v7 + 240) = 0;
    *(_QWORD*)(v7 + 256) = 0;
    *(_QWORD*)(v7 + 264) = 0;
    *(_QWORD*)(v7 + 272) = 0;
    *(_QWORD*)(v7 + 280) = 0;
    *(_QWORD*)(v7 + 288) = 0;
    *(_QWORD*)(v7 + 296) = 0;
    *(_QWORD*)(v7 + 304) = 0;
    *(_QWORD*)(v7 + 312) = 0;
    *(_DWORD*)(v7 + 332) = 0;
    *(_BYTE*)(v7 + 338) = 0;
    *(_QWORD*)(v7 + 344) = 0;
    *(_QWORD*)(v7 + 352) = 0;
    *(_QWORD*)(v7 + 324) = 0;
    *(_DWORD*)(v7 + 248) = 1065353216;
    *(_QWORD*)(v7 + 360) = 0;
    *(_QWORD*)(v7 + 368) = 0;
    *(_QWORD*)(v7 + 376) = 0;
    *(_QWORD*)(v7 + 384) = 0;
    *(_QWORD*)(v7 + 392) = 0;
    *(_QWORD*)(v7 + 400) = 0;
    *(_QWORD*)(v7 + 408) = 0;
    *(_QWORD*)(v7 + 416) = 0;
    *(_QWORD*)(v7 + 424) = 0;
    *(_DWORD*)(v7 + 432) = 0x2000;
    *(_QWORD*)(v7 + 472) = 0;
    *(_QWORD*)(v7 + 480) = 0;
    *(_QWORD*)(v7 + 440) = 0;
    *(_QWORD*)(v7 + 448) = 0;
    *(_QWORD*)(v7 + 504) = 0;
    *(_QWORD*)(v7 + 512) = 0;
    *(_WORD*)(v7 + 336) = 1;
    *(_QWORD*)(v7 + 488) = 0;
    *(_QWORD*)(v7 + 496) = 0;
    *(_DWORD*)(v7 + 520) = 1065353216;
    *(_QWORD*)(v7 + 528) = 0;
    *(_QWORD*)(v7 + 536) = 0;
    *(_QWORD*)(v7 + 544) = 0;
    *(_DWORD*)(v7 + 552) = 1065353216;
    *(_WORD*)(v7 + 560) = 0;
    *(_WORD*)(v7 + 584) = 0;
    *(_BYTE*)(v7 + 608) = 0;
    *(_QWORD*)(v7 + 656) = 0;
    *(_QWORD*)(v7 + 456) = 0;
    *(_QWORD*)(v7 + 464) = v7 + 472;
    *(_QWORD*)(v7 + 648) = 0;
    *(_QWORD*)(v7 + 632) = 0;
    *(_QWORD*)(v7 + 624) = 0;
    *(_QWORD*)(v7 + 616) = 0;
    *(_QWORD*)(v7 + 688) = 0;
    *(_QWORD*)(v7 + 680) = 0;
    *(_QWORD*)(v7 + 672) = 0;
    *(_QWORD*)(v7 + 664) = 0;
    *(_DWORD*)(v7 + 696) = 1065353216;
    *(_QWORD*)(v7 + 720) = 0;
    *(_QWORD*)(v7 + 640) = v7 + 648;
    *(_QWORD*)(v7 + 712) = 0;
    *(_QWORD*)(v7 + 704) = 0;
    *(_DWORD*)(v7 + 728) = 1065353216;
    *(_WORD*)(v7 + 736) = 0;
    *(_WORD*)(v7 + 760) = 0;
    *(_BYTE*)(v7 + 784) = 0;
    *(_QWORD*)(v7 + 792) = 0;
    v13 = *v6;
    v14 = GameData_2130240[0] + 2;
    *(_BYTE*)(v7 + 800) = 0;
    *(_BYTE*)(v7 + 816) = 0;
    *(_BYTE*)(v7 + 820) = 0;
    *(_WORD*)(v7 + 824) = 0;
    *(_WORD*)(v7 + 848) = 0;
    *(_QWORD*)(v7 + 872) = 0;
    *(_QWORD*)(v7 + 808) = v14;
    *(_QWORD*)v7 = game_telop_TelopPhase_vtable;
    v15 = fw_memory_HeapManager_Allocate(v13, 296, 16, 0);
    *(_QWORD*)(v15 + 16) = 0;
    v16 = GameData_2131678;
    *(_DWORD*)(v15 + 32) = 0;
    *(_QWORD*)(v15 + 40) = 0;
    *(_DWORD*)(v15 + 48) = 0x2000;
    v17 = v16 + 16;
    *(_DWORD*)(v15 + 104) = 0;
    *(_WORD*)(v15 + 108) = 256;
    *(_QWORD*)(v15 + 56) = 0;
    *(_QWORD*)(v15 + 64) = 0;
    *(_QWORD*)(v15 + 72) = 0;
    *(_WORD*)(v15 + 80) = 0;
    *(_DWORD*)(v15 + 112) = -1082130432;
    *(_WORD*)(v15 + 116) = 0;
    *(_WORD*)(v15 + 136) = 0;
    *(_BYTE*)(v15 + 160) = 0;
    *(_BYTE*)(v15 + 288) = 0;
    *(_QWORD*)(v15 + 272) = 0;
    *(_QWORD*)(v15 + 280) = 0;
    *(_QWORD*)(v15 + 256) = 0;
    *(_QWORD*)(v15 + 264) = 0;
    *(_QWORD*)(v15 + 240) = 0;
    *(_QWORD*)(v15 + 248) = 0;
    *(_QWORD*)(v15 + 224) = 0;
    *(_QWORD*)(v15 + 232) = 0;
    *(_QWORD*)(v15 + 208) = 0;
    *(_QWORD*)(v15 + 216) = 0;
    *(_QWORD*)(v15 + 192) = 0;
    *(_QWORD*)(v15 + 200) = 0;
    *(_QWORD*)(v15 + 176) = 0;
    *(_QWORD*)(v15 + 184) = 0;
    *(_QWORD*)(v15 + 168) = 0;
    *(_QWORD*)(v15 + 120) = 0;
    *(_DWORD*)(v15 + 127) = 0;
    *(_DWORD*)(v15 + 292) = 2;
    *(_QWORD*)(v7 + 888) = v15;
    *(_QWORD*)(v15 + 24) = 0;
    v18 = v15 + 24;
    *(_QWORD*)v15 = v17;
    *(_QWORD*)(v15 + 8) = 0;
    v19 = *v6;
    *(_QWORD*)(v7 + 880) = v18;
    v20 = fw_memory_HeapManager_Allocate(v19, 296, 16, 0);
    *(_QWORD*)(v20 + 8) = 0;
    *(_QWORD*)(v20 + 16) = 0;
    *(_QWORD*)v20 = v17;
    *(_DWORD*)(v20 + 32) = 0;
    *(_QWORD*)(v20 + 40) = 0;
    *(_DWORD*)(v20 + 48) = 0x2000;
    *(_DWORD*)(v20 + 104) = 0;
    *(_WORD*)(v20 + 108) = 256;
    *(_QWORD*)(v20 + 56) = 0;
    *(_QWORD*)(v20 + 64) = 0;
    *(_QWORD*)(v20 + 72) = 0;
    *(_QWORD*)v7 = game_telop_TelopBmapPhase_vtable;
    v21 = *(_QWORD*)(a1 + 40);
    *(_WORD*)(v20 + 80) = 0;
    *(_DWORD*)(v20 + 112) = -1082130432;
    *(_WORD*)(v20 + 116) = 0;
    *(_WORD*)(v20 + 136) = 0;
    *(_BYTE*)(v20 + 160) = 0;
    *(_BYTE*)(v20 + 288) = 0;
    *(_QWORD*)(v20 + 272) = 0;
    *(_QWORD*)(v20 + 280) = 0;
    *(_QWORD*)(v20 + 256) = 0;
    *(_QWORD*)(v20 + 264) = 0;
    *(_QWORD*)(v20 + 240) = 0;
    *(_QWORD*)(v20 + 248) = 0;
    *(_QWORD*)(v20 + 224) = 0;
    *(_QWORD*)(v20 + 232) = 0;
    *(_QWORD*)(v20 + 208) = 0;
    *(_QWORD*)(v20 + 216) = 0;
    *(_QWORD*)(v20 + 192) = 0;
    *(_QWORD*)(v20 + 200) = 0;
    *(_QWORD*)(v20 + 176) = 0;
    *(_QWORD*)(v20 + 184) = 0;
    *(_QWORD*)(v20 + 168) = 0;
    *(_QWORD*)(v20 + 120) = 0;
    *(_DWORD*)(v20 + 127) = 0;
    *(_DWORD*)(v20 + 292) = 2;
    *(_QWORD*)(v7 + 904) = v20;
    *(_QWORD*)(v20 + 24) = 0;
    *(_QWORD*)(v7 + 896) = v20 + 24;
    *(_BYTE*)(v7 + 912) = 10;
    if (v21 != 0) {
      *(_QWORD*)(v21 + 48) = v7;
      *(_QWORD*)(v7 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v7;
    *(_QWORD*)(v7 + 24) = "TelopBmapPhase";
    *(_QWORD*)(v7 + 32) = a1;
    *(_DWORD*)(v7 + 140) = game_HashString32((__int64)"TelopBmapPhase");
    *(_QWORD*)(v7 + 64) = 0;
    *(_QWORD*)(v7 + 72) = 24;
    *(_QWORD*)(v7 + 80) = 1;
    *(_QWORD*)(v7 + 8) = &GameData_2170810;
    *(_QWORD*)(v7 + 16) = &GameData_2170810;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 136LL))(v7) & 1) != 0 &&
        (*(_WORD*)(v7 + 136) & 0x100) == 0) {
      *(_WORD*)(v7 + 136) |= 0x100u;
    }
    v22 = (_BYTE*)*v12;
    v23 = *(_BYTE*)(*v12 + 138LL);
    if (v23 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v22 + 64LL))(*v12);
      v23 = v22[138];
    }
    v22[138] = v23 + 1;
    *(_WORD*)(v7 + 136) |= 2u;
    if ((unsigned int)a2 - 1 < 2) {
      v25 = "MID_Sys_EnemyPhase";
      if (a2 == 2) {
      LABEL_20:
        v24 = "Third";
        goto LABEL_21;
      }
    }
    else {
      if (a2 == 0) {
        v24 = "Player";
        v25 = "MID_Sys_PlayerPhase";
        goto LABEL_21;
      }
      if (a2 == 3) {
        v24 = "Ally";
        v25 = "MID_Sys_AllyPhase";
        goto LABEL_21;
      }
      v25 = nullptr;
      if (a2 == 2) {
        goto LABEL_20;
      }
    }
    if (a2 == 1) {
      v24 = "Enemy";
    }
    else {
      v24 = "Player";
    }
  LABEL_21:
    GameRoutine_137aea0(v7, (__int64)v25, (__int64)v24);
    *(_DWORD*)(v7 + 872) = a3;
    *(_DWORD*)(v7 + 876) = a4;
    if (a3 < 0) {
      *(_DWORD*)(v7 + 872) = -a3;
      if ((a4 & 0x80000000) == 0) {
        goto LABEL_23;
      }
    }
    else if ((a4 & 0x80000000) == 0) {
    LABEL_23:
      *(_BYTE*)(v7 + 912) = a2;
      return v7;
    }
    *(_DWORD*)(v7 + 876) = -a4;
    goto LABEL_23;
  }
  return 0;
}

__int64 TelopBmapPhase_Unknown35(__int64 a1)
{
  GameRoutine_137b260(a1);
  return GameRoutine_80c680(*(unsigned __int8*)(a1 + 912));
}

__int64 TelopBmapPhase_137c090(__int64 a1, char a2, char a3)
{
  __int64* v5;
  __int64 v6;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _BYTE* v21;
  char v22;
  const char* v23;
  const char* v24;
  const char* v25;

  if (a1 == 0) {
    return 0;
  }
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      912, 16, 0);
  memset(v6 + 144, 0, 768);
  v10 = GameData_212c608[0];
  *(_QWORD*)(v6 + 88) = 0;
  *(_QWORD*)(v6 + 96) = 0;
  *(_QWORD*)(v6 + 104) = 0;
  *(_QWORD*)(v6 + 112) = 0;
  *(_QWORD*)(v6 + 120) = 0;
  *(_QWORD*)(v6 + 128) = 0;
  *(_WORD*)(v6 + 136) = 0;
  *(_QWORD*)(v6 + 16) = 0;
  *(_QWORD*)(v6 + 24) = "NULL";
  *(_QWORD*)(v6 + 32) = 0;
  v11 = (_QWORD*)(v6 + 32);
  *(_QWORD*)(v6 + 138) = 0;
  *(_QWORD*)(v6 + 144) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)v6 = v10 + 16;
  *(_QWORD*)(v6 + 8) = 0;
  game_ProcInst_Register(v6);
  *(_QWORD*)(v6 + 200) = 0;
  *(_QWORD*)(v6 + 152) = 0;
  *(_QWORD*)(v6 + 160) = 0;
  *(_QWORD*)(v6 + 168) = 0;
  *(_QWORD*)(v6 + 176) = 0;
  *(_QWORD*)(v6 + 208) = 0;
  *(_QWORD*)(v6 + 216) = 0;
  *(_QWORD*)(v6 + 224) = 0;
  *(_QWORD*)(v6 + 232) = 0;
  *(_DWORD*)(v6 + 320) = 3;
  *(_QWORD*)(v6 + 184) = 0;
  *(_QWORD*)(v6 + 192) = v6 + 200;
  *(_QWORD*)(v6 + 240) = 0;
  *(_QWORD*)(v6 + 256) = 0;
  *(_QWORD*)(v6 + 264) = 0;
  *(_QWORD*)(v6 + 272) = 0;
  *(_QWORD*)(v6 + 280) = 0;
  *(_QWORD*)(v6 + 288) = 0;
  *(_QWORD*)(v6 + 296) = 0;
  *(_QWORD*)(v6 + 304) = 0;
  *(_QWORD*)(v6 + 312) = 0;
  *(_DWORD*)(v6 + 332) = 0;
  *(_BYTE*)(v6 + 338) = 0;
  *(_QWORD*)(v6 + 344) = 0;
  *(_QWORD*)(v6 + 352) = 0;
  *(_QWORD*)(v6 + 324) = 0;
  *(_DWORD*)(v6 + 248) = 1065353216;
  *(_QWORD*)(v6 + 360) = 0;
  *(_QWORD*)(v6 + 368) = 0;
  *(_QWORD*)(v6 + 376) = 0;
  *(_QWORD*)(v6 + 384) = 0;
  *(_QWORD*)(v6 + 392) = 0;
  *(_QWORD*)(v6 + 400) = 0;
  *(_QWORD*)(v6 + 408) = 0;
  *(_QWORD*)(v6 + 416) = 0;
  *(_QWORD*)(v6 + 424) = 0;
  *(_DWORD*)(v6 + 432) = 0x2000;
  *(_QWORD*)(v6 + 472) = 0;
  *(_QWORD*)(v6 + 480) = 0;
  *(_QWORD*)(v6 + 440) = 0;
  *(_QWORD*)(v6 + 448) = 0;
  *(_QWORD*)(v6 + 504) = 0;
  *(_QWORD*)(v6 + 512) = 0;
  *(_WORD*)(v6 + 336) = 1;
  *(_QWORD*)(v6 + 488) = 0;
  *(_QWORD*)(v6 + 496) = 0;
  *(_DWORD*)(v6 + 520) = 1065353216;
  *(_QWORD*)(v6 + 528) = 0;
  *(_QWORD*)(v6 + 536) = 0;
  *(_QWORD*)(v6 + 544) = 0;
  *(_DWORD*)(v6 + 552) = 1065353216;
  *(_WORD*)(v6 + 560) = 0;
  *(_WORD*)(v6 + 584) = 0;
  *(_BYTE*)(v6 + 608) = 0;
  *(_QWORD*)(v6 + 656) = 0;
  *(_QWORD*)(v6 + 456) = 0;
  *(_QWORD*)(v6 + 464) = v6 + 472;
  *(_QWORD*)(v6 + 648) = 0;
  *(_QWORD*)(v6 + 632) = 0;
  *(_QWORD*)(v6 + 624) = 0;
  *(_QWORD*)(v6 + 616) = 0;
  *(_QWORD*)(v6 + 688) = 0;
  *(_QWORD*)(v6 + 680) = 0;
  *(_QWORD*)(v6 + 672) = 0;
  *(_QWORD*)(v6 + 664) = 0;
  *(_DWORD*)(v6 + 696) = 1065353216;
  *(_QWORD*)(v6 + 720) = 0;
  *(_QWORD*)(v6 + 640) = v6 + 648;
  *(_QWORD*)(v6 + 712) = 0;
  *(_QWORD*)(v6 + 704) = 0;
  *(_DWORD*)(v6 + 728) = 1065353216;
  *(_WORD*)(v6 + 736) = 0;
  *(_WORD*)(v6 + 760) = 0;
  *(_BYTE*)(v6 + 784) = 0;
  *(_QWORD*)(v6 + 792) = 0;
  v12 = *v5;
  v13 = GameData_2130240[0] + 2;
  *(_BYTE*)(v6 + 800) = 0;
  *(_BYTE*)(v6 + 816) = 0;
  *(_BYTE*)(v6 + 820) = 0;
  *(_WORD*)(v6 + 824) = 0;
  *(_WORD*)(v6 + 848) = 0;
  *(_QWORD*)(v6 + 872) = 0;
  *(_QWORD*)(v6 + 808) = v13;
  *(_QWORD*)v6 = game_telop_TelopPhase_vtable;
  v14 = fw_memory_HeapManager_Allocate(v12, 296, 16, 0);
  *(_QWORD*)(v14 + 16) = 0;
  v15 = GameData_2131678;
  *(_DWORD*)(v14 + 32) = 0;
  *(_QWORD*)(v14 + 40) = 0;
  *(_DWORD*)(v14 + 48) = 0x2000;
  v16 = v15 + 16;
  *(_DWORD*)(v14 + 104) = 0;
  *(_WORD*)(v14 + 108) = 256;
  *(_QWORD*)(v14 + 56) = 0;
  *(_QWORD*)(v14 + 64) = 0;
  *(_QWORD*)(v14 + 72) = 0;
  *(_WORD*)(v14 + 80) = 0;
  *(_DWORD*)(v14 + 112) = -1082130432;
  *(_WORD*)(v14 + 116) = 0;
  *(_WORD*)(v14 + 136) = 0;
  *(_BYTE*)(v14 + 160) = 0;
  *(_BYTE*)(v14 + 288) = 0;
  *(_QWORD*)(v14 + 272) = 0;
  *(_QWORD*)(v14 + 280) = 0;
  *(_QWORD*)(v14 + 256) = 0;
  *(_QWORD*)(v14 + 264) = 0;
  *(_QWORD*)(v14 + 240) = 0;
  *(_QWORD*)(v14 + 248) = 0;
  *(_QWORD*)(v14 + 224) = 0;
  *(_QWORD*)(v14 + 232) = 0;
  *(_QWORD*)(v14 + 208) = 0;
  *(_QWORD*)(v14 + 216) = 0;
  *(_QWORD*)(v14 + 192) = 0;
  *(_QWORD*)(v14 + 200) = 0;
  *(_QWORD*)(v14 + 176) = 0;
  *(_QWORD*)(v14 + 184) = 0;
  *(_QWORD*)(v14 + 168) = 0;
  *(_QWORD*)(v14 + 120) = 0;
  *(_DWORD*)(v14 + 127) = 0;
  *(_DWORD*)(v14 + 292) = 2;
  *(_QWORD*)(v6 + 888) = v14;
  *(_QWORD*)(v14 + 24) = 0;
  v17 = v14 + 24;
  *(_QWORD*)v14 = v16;
  *(_QWORD*)(v14 + 8) = 0;
  v18 = *v5;
  *(_QWORD*)(v6 + 880) = v17;
  v19 = fw_memory_HeapManager_Allocate(v18, 296, 16, 0);
  v20 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(v19 + 8) = 0;
  *(_QWORD*)(v19 + 16) = 0;
  *(_QWORD*)v19 = v16;
  *(_DWORD*)(v19 + 32) = 0;
  *(_QWORD*)(v19 + 40) = 0;
  *(_DWORD*)(v19 + 48) = 0x2000;
  *(_DWORD*)(v19 + 104) = 0;
  *(_WORD*)(v19 + 108) = 256;
  *(_QWORD*)(v19 + 56) = 0;
  *(_QWORD*)(v19 + 64) = 0;
  *(_QWORD*)(v19 + 72) = 0;
  *(_WORD*)(v19 + 80) = 0;
  *(_DWORD*)(v19 + 112) = -1082130432;
  *(_WORD*)(v19 + 116) = 0;
  *(_WORD*)(v19 + 136) = 0;
  *(_BYTE*)(v19 + 160) = 0;
  *(_BYTE*)(v19 + 288) = 0;
  *(_QWORD*)(v19 + 272) = 0;
  *(_QWORD*)(v19 + 280) = 0;
  *(_QWORD*)(v19 + 256) = 0;
  *(_QWORD*)(v19 + 264) = 0;
  *(_QWORD*)(v19 + 240) = 0;
  *(_QWORD*)(v19 + 248) = 0;
  *(_QWORD*)(v19 + 224) = 0;
  *(_QWORD*)(v19 + 232) = 0;
  *(_QWORD*)(v19 + 208) = 0;
  *(_QWORD*)(v19 + 216) = 0;
  *(_QWORD*)(v19 + 192) = 0;
  *(_QWORD*)(v19 + 200) = 0;
  *(_QWORD*)(v19 + 176) = 0;
  *(_QWORD*)(v19 + 184) = 0;
  *(_QWORD*)(v19 + 168) = 0;
  *(_QWORD*)(v19 + 120) = 0;
  *(_DWORD*)(v19 + 127) = 0;
  *(_DWORD*)(v19 + 292) = 2;
  *(_QWORD*)(v6 + 904) = v19;
  *(_QWORD*)(v19 + 24) = 0;
  *(_QWORD*)(v6 + 896) = v19 + 24;
  *(_QWORD*)v6 = game_telop_TelopGmapTurnStart_vtable;
  if (v20 != 0) {
    *(_QWORD*)(v20 + 48) = v6;
    *(_QWORD*)(v6 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v6;
  *(_QWORD*)(v6 + 24) = "TelopGmapTurnStart";
  *(_QWORD*)(v6 + 32) = a1;
  *(_DWORD*)(v6 + 140) = game_HashString32((__int64)"TelopGmapTurnStart");
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 24;
  *(_QWORD*)(v6 + 80) = 1;
  *(_QWORD*)(v6 + 8) = &GameData_2170810;
  *(_QWORD*)(v6 + 16) = &GameData_2170810;
  (*(void (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 136LL))(v6) & 1) != 0 &&
      (*(_WORD*)(v6 + 136) & 0x100) == 0) {
    *(_WORD*)(v6 + 136) |= 0x100u;
  }
  v21 = (_BYTE*)*v11;
  v22 = *(_BYTE*)(*v11 + 138LL);
  if (v22 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v21 + 64LL))(*v11);
    v22 = v21[138];
  }
  v21[138] = v22 + 1;
  *(_WORD*)(v6 + 136) |= 2u;
  if ((a3 & 1) != 0) {
    v23 = "MID_Gmap_TurnStart";
  }
  else {
    v23 = "MID_Gmap_NextTurn";
  }
  if ((unsigned __int8)(a2 - 1) > 2u) {
    v24 = "Player";
  }
  else {
    v24 = GameData_2032c50[(unsigned __int8)(a2 - 1)];
  }
  GameRoutine_137aea0(v6, (__int64)v23, (__int64)v24);
  if ((a3 & 1) != 0) {
    v25 = "SE_SYS_GMAP_Telop_TurnStart";
  }
  else {
    v25 = "SE_SYS_GMAP_Telop_NextTurn";
  }
  Se_80e330(v6, (__int64)v25);
  return v6;
}

#pragma GCC visibility pop
