#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_106c820(void);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _DWORD* GameData_212d168;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1ff4bd0[])();
extern __int64 (*GameData_1ff4c60[])();
extern __int64* GameData_212d448[9];
extern __int64 GameData_212c7d8[6];
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_d28580(__int64*, __int64);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_d28710(_QWORD, long double);
void game_combat_CombatTransparent_Tick();
void game_combat_CombatTransparent_Tick_lambda0_Invoke(__int64 a1,
                                                       float32x4_t** a2);
void game_combat_CombatTransparent_Tick_lambda1_Invoke(__int64 a1, _QWORD* a2);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_combat_106c820(_QWORD*, __int64);
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_d28710_alt1() __asm__("GameRoutine_d28710");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

void game_combat_CombatTransparent_Tick()
{

#pragma clang fp contract(off)
  __int64* v1;
  _QWORD* v2;
  __int64 v3;
  int v4;
  __int128 v5;
  __int128 v6;
  __int128 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  float v36;
  char v37;
  float* v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int128 v51;
  bool v52;
  __int128 v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  int v64;
  char v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int128 v69;
  bool v70;
  __int128 v71;
  unsigned __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  int v82;
  char v83;
  __int64 v84;
  _QWORD* v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  __int64 v91;
  char v92;
  __int128 v93;
  __int128 v94;
  __int128 v95;
  __int128 v96;
  __int128 v97;
  __int128 v98;
  __int128 v99;
  __int128 v100;
  struct {
    _QWORD v101[4];
    _QWORD* v102;
  } v101_;
  struct {
    __int64 v103;
    unsigned __int64 v104;
    unsigned __int64 v105;
  } v103_;
  _QWORD v106[2];

  if (*GameData_212d168 != 3 || *(_QWORD*)GameData_212c7d8[0] == 0) {
    return;
  }
  v1 = GameData_212d448[0];
  v103_.v103 = 0;
  v2 = (_QWORD*)*GameData_212d448[0];
  v3 = *(_QWORD*)(*GameData_212d448[0] + 8);
  v103_.v104 = 0;
  v103_.v105 = 0;
  v101_.v102 = v101_.v101;
  v4 = *(_DWORD*)(v3 + 112);
  v101_.v101[0] = GameData_1ff4bd0;
  v101_.v101[1] = &v103_.v103;
  game_combat_106c820(v2, (__int64)v101_.v101);
  if (v101_.v102 == v101_.v101) {
    v8 = 32;
  }
  else {
    if (v101_.v102 == nullptr) {
      goto LABEL_10;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v101_.v102 + v8))((__int64)v101_.v102);
LABEL_10:
  v9 = *v1;
  v10 = *(_QWORD**)(*v1 + 120);
  if (v10 == nullptr) {
    goto LABEL_54;
  }
  v11 = v10[2];
  v12 = v101_.v101;
  v101_.v102 = v101_.v101;
  v101_.v101[0] = GameData_1ff4c60;
  v101_.v101[1] = &v103_.v103;
  v13 = *(_QWORD*)(v11 + 16);
  v14 = *(_QWORD*)(v11 + 24);
  if (v13 == v14) {
    goto LABEL_23;
  }
  do {
    v15 = *(_QWORD**)(*(_QWORD*)v13 + 24LL);
    v16 = *(_QWORD**)(*(_QWORD*)v13 + 32LL);
    while (v15 != v16) {
      if (*v15 != 0) {
        v106[0] = *v15;
        if (v101_.v102 == nullptr) {
        LABEL_150:
          GameRoutine_60a310_alt1();
        }
        (*(void (**)(_QWORD*, _QWORD*))(*v101_.v102 + 48LL))(v101_.v102, v106);
      }
      v15 += 2;
    }
    v13 += 16;
  } while (v13 != v14);
  v12 = v101_.v102;
  if (v101_.v102 == v101_.v101) {
  LABEL_23:
    v17 = 32;
    goto LABEL_24;
  }
  if (v101_.v102 != nullptr) {
    v17 = 40;
  LABEL_24:
    (*(void (**)(__int64))(*v12 + v17))((__int64)v12);
  }
  v18 = v10[3];
  v19 = v101_.v101;
  v101_.v102 = v101_.v101;
  v101_.v101[0] = GameData_1ff4c60;
  v101_.v101[1] = &v103_.v103;
  v20 = *(_QWORD*)(v18 + 16);
  v21 = *(_QWORD*)(v18 + 24);
  if (v20 == v21) {
    goto LABEL_37;
  }
  do {
    v22 = *(_QWORD**)(*(_QWORD*)v20 + 24LL);
    v23 = *(_QWORD**)(*(_QWORD*)v20 + 32LL);
    while (v22 != v23) {
      if (*v22 != 0) {
        v106[0] = *v22;
        if (v101_.v102 == nullptr) {
          goto LABEL_150;
        }
        (*(void (**)(_QWORD*, _QWORD*))(*v101_.v102 + 48LL))(v101_.v102, v106);
      }
      v22 += 2;
    }
    v20 += 16;
  } while (v20 != v21);
  v19 = v101_.v102;
  if (v101_.v102 == v101_.v101) {
  LABEL_37:
    v24 = 32;
    goto LABEL_38;
  }
  if (v101_.v102 != nullptr) {
    v24 = 40;
  LABEL_38:
    (*(void (**)(__int64))(*v19 + v24))((__int64)v19);
  }
  v25 = v10[4];
  v26 = v101_.v101;
  v101_.v102 = v101_.v101;
  v101_.v101[0] = GameData_1ff4c60;
  v101_.v101[1] = &v103_.v103;
  v27 = *(_QWORD*)(v25 + 16);
  v28 = *(_QWORD*)(v25 + 24);
  if (v27 == v28) {
    goto LABEL_51;
  }
  do {
    v29 = *(_QWORD**)(*(_QWORD*)v27 + 24LL);
    v30 = *(_QWORD**)(*(_QWORD*)v27 + 32LL);
    while (v29 != v30) {
      if (*v29 != 0) {
        v106[0] = *v29;
        if (v101_.v102 == nullptr) {
          goto LABEL_150;
        }
        (*(void (**)(_QWORD*, _QWORD*))(*v101_.v102 + 48LL))(v101_.v102, v106);
      }
      v29 += 2;
    }
    v27 += 16;
  } while (v27 != v28);
  v26 = v101_.v102;
  if (v101_.v102 == v101_.v101) {
  LABEL_51:
    v31 = 32;
    goto LABEL_52;
  }
  if (v101_.v102 != nullptr) {
    v31 = 40;
  LABEL_52:
    (*(void (**)(__int64))(*v26 + v31))((__int64)v26);
  }
  v9 = *v1;
LABEL_54:
  v33 = *(_QWORD*)(v9 + 8);
  v32 = *(_QWORD*)(v9 + 16);
  if (v32 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
      std___1___shared_weak_count___release_weak_alt2(v32);
    }
  }
  v34 = (__int64*)fw_memory_g_heap_manager_ptr;
  if ((v4 & 0x40) == 0) {
    v35 = 0;
    if ((v4 & 0x198) != 0) {
      v36 = 0x1.4000000000000p+3f;
    }
    else {
      v36 = 0x0.0p+0f;
    }
    v90 = v33 + 120;
    v91 = v33 + 184;
    v37 = 1;
    while (1) {
      v92 = v37;
      if (*(_BYTE*)(v91 + v35) == 1) {
        v38 = (float*)(v90 + 16 * v35);
        v39 = v38[1];
        v41 = v38[2];
        v40 = v38[3];
        if (*v38 >= v41) {
          v42 = v38[2];
        }
        else {
          v42 = *v38;
        }
        if (*v38 >= v41) {
          v41 = *v38;
        }
        v43 = v42 - v36;
        v44 = v36 + v41;
        v45 = v39 >= v40 ? v38[1] : v38[3];
        *(float*)&v5 = v43 + 0x1.4000000000000p+1f;
        if ((float)(v43 + 0x1.4000000000000p+1f) <= v44) {
          v46 = v36 + v45;
          if (v39 >= v40) {
            v39 = v38[3];
          }
          v47 = (float)(v39 - v36) + 0x1.4000000000000p+1f;
          if (v47 <= v46) {
            break;
          }
        }
      }
    LABEL_62:
      v35 = 1;
      v37 = 0;
      if ((v92 & 1) == 0) {
        goto LABEL_142;
      }
    }
    v48 = v103_.v104;
  LABEL_78:
    *(float*)&v6 = *(float*)&v5 + 0x1.4000000000000p+1f;
    v95 = v5;
    *(float*)&v7 = v47;
    v98 = (unsigned int)v5;
    v93 = COERCE_UNSIGNED_INT(*(float*)&v5 + 0x1.4000000000000p+1f);
    v94 = v6;
    while (1) {
      v49 = v103_.v103;
      if (v103_.v103 == v48) {
      LABEL_95:
        v53 = v98;
        DWORD2(v53) = v7;
        if (v48 >= v103_.v105) {
          v54 = v48 - v103_.v103;
          v55 = (__int64)(v48 - v103_.v103) >> 5;
          v56 = v55 + 1;
          if ((unsigned __int64)(v55 + 1) >> 59 != 0) {
            goto LABEL_149;
          }
          v57 = v103_.v105 - v103_.v103;
          if ((__int64)(v103_.v105 - v103_.v103) >> 4 > v56) {
            v56 = v57 >> 4;
          }
          if ((unsigned __int64)v57 >= 0x7FFFFFFFFFFFFFE0LL) {
            v58 = 0x7FFFFFFFFFFFFFFLL;
          }
          else {
            v58 = v56;
          }
          if (v58 >> 59 != 0) {
            goto LABEL_148;
          }
          v59 = 32 * v58;
          v99 = v7;
          v96 = v53;
          v60 = fw_memory_HeapManager_Allocate_alt1(*v34, 32 * v58, 16, 0);
          v61 = v60 + v54;
          *(_DWORD*)(v61 + 16) = 1075838976;
          *(_BYTE*)(v61 + 20) = 1;
          *(_OWORD*)v61 = v96;
          if (v49 != v48) {
            v62 = v49;
            v63 = v60 + v54 - 32 * v55;
            do {
              *(_QWORD*)(v63 + 8) = *(_QWORD*)(v62 + 8);
              *(_QWORD*)v63 = *(_QWORD*)v62;
              v64 = *(_DWORD*)(v62 + 16);
              v65 = *(_BYTE*)(v62 + 20);
              v62 += 32;
              *(_BYTE*)(v63 + 20) = v65;
              *(_DWORD*)(v63 + 16) = v64;
              v63 += 32;
            } while (v62 != v48);
          }
          v48 = v61 + 32;
          v103_.v103 = v60 + v54 - 32 * v55;
          v103_.v104 = v61 + 32;
          v103_.v105 = v60 + v59;
          if (v49 != 0) {
            v66 = 128;
            if (*(_QWORD*)(*v34 + 200) == 0) {
              v66 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v34 + v66, v49);
          }
          v6 = v94;
          v5 = v95;
          v7 = v99;
        }
        else {
          *(_OWORD*)v48 = v53;
          *(_DWORD*)(v48 + 16) = 1075838976;
          *(_BYTE*)(v48 + 20) = 1;
          v48 += 32LL;
        }
        v103_.v104 = v48;
        if (*(float*)&v6 < v44) {
        LABEL_113:
          if ((float)(*(float*)&v7 + 0x1.4000000000000p+1f) < v46) {
            v67 = v103_.v103;
            if (v103_.v103 == v48) {
              goto LABEL_126;
            }
            v68 = v103_.v103;
            while (1) {
              v69 = *(_OWORD*)v68;
              if (COERCE_FLOAT(*(_OWORD*)v68) == *(float*)&v6) {
                v70 = *((float*)&v69 + 1) == 0x0.0p+0f &&
                      *((float*)&v69 + 2) ==
                          (float)(*(float*)&v7 + 0x1.4000000000000p+1f);
                if (v70 && *(float*)(v68 + 16) == 0x1.4000000000000p+1f &&
                    (*(_BYTE*)(v68 + 20) & 1) != 0) {
                  break;
                }
              }
              v68 += 32;
              if (v68 == v48) {
                goto LABEL_126;
              }
            }
            if (v68 == v48) {
            LABEL_126:
              v71 = v93;
              *((float*)&v71 + 2) = *(float*)&v7 + 0x1.4000000000000p+1f;
              if (v48 < v103_.v105) {
                *(_OWORD*)v48 = v71;
                *(_DWORD*)(v48 + 16) = 1075838976;
                *(_BYTE*)(v48 + 20) = 1;
                v48 += 32LL;
              }
              else {
                v72 = v48 - v103_.v103;
                v73 = (__int64)(v48 - v103_.v103) >> 5;
                v74 = v73 + 1;
                if ((unsigned __int64)(v73 + 1) >> 59 != 0) {
                LABEL_149:
                  GameRoutine_d28710_alt1();
                }
                v75 = v103_.v105 - v103_.v103;
                v97 = v71;
                v100 = v7;
                if ((__int64)(v103_.v105 - v103_.v103) >> 4 > v74) {
                  v74 = v75 >> 4;
                }
                if ((unsigned __int64)v75 >= 0x7FFFFFFFFFFFFFE0LL) {
                  v76 = 0x7FFFFFFFFFFFFFFLL;
                }
                else {
                  v76 = v74;
                }
                if (v76 >> 59 != 0) {
                LABEL_148:
                  GameRoutine_60a210_alt1();
                }
                v77 = 32 * v76;
                v78 =
                    fw_memory_HeapManager_Allocate_alt1(*v34, 32 * v76, 16, 0);
                v79 = v78 + v72;
                *(_DWORD*)(v79 + 16) = 1075838976;
                *(_BYTE*)(v79 + 20) = 1;
                *(_OWORD*)v79 = v97;
                if (v67 != v48) {
                  v80 = v67;
                  v81 = v78 + v72 - 32 * v73;
                  do {
                    *(_QWORD*)(v81 + 8) = *(_QWORD*)(v80 + 8);
                    *(_QWORD*)v81 = *(_QWORD*)v80;
                    v82 = *(_DWORD*)(v80 + 16);
                    v83 = *(_BYTE*)(v80 + 20);
                    v80 += 32;
                    *(_BYTE*)(v81 + 20) = v83;
                    *(_DWORD*)(v81 + 16) = v82;
                    v81 += 32;
                  } while (v80 != v48);
                }
                v48 = v79 + 32;
                v103_.v103 = v78 + v72 - 32 * v73;
                v103_.v104 = v79 + 32;
                v103_.v105 = v78 + v77;
                if (v67 != 0) {
                  v84 = 128;
                  if (*(_QWORD*)(*v34 + 200) == 0) {
                    v84 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*v34 + v84, v67);
                }
                v6 = v94;
                v5 = v95;
                v7 = v100;
              }
              v103_.v104 = v48;
            }
          }
        }
      }
      else {
        v50 = v103_.v103;
        while (1) {
          v51 = *(_OWORD*)v50;
          if (COERCE_FLOAT(*(_OWORD*)v50) == *(float*)&v5) {
            v52 = *((float*)&v51 + 1) == 0x0.0p+0f &&
                  *((float*)&v51 + 2) == *(float*)&v7;
            if (v52 && *(float*)(v50 + 16) == 0x1.4000000000000p+1f &&
                (*(_BYTE*)(v50 + 20) & 1) != 0) {
              break;
            }
          }
          v50 += 32;
          if (v50 == v48) {
            goto LABEL_95;
          }
        }
        if (*(float*)&v6 < v44) {
          goto LABEL_113;
        }
      }
      *(float*)&v7 = *(float*)&v7 + 0x1.4000000000000p+2f;
      if (*(float*)&v7 > v46) {
        *(float*)&v5 = *(float*)&v5 + 0x1.4000000000000p+2f;
        if (*(float*)&v5 > v44) {
          goto LABEL_62;
        }
        goto LABEL_78;
      }
    }
  }
LABEL_142:
  v85 = *(_QWORD**)GameData_212c7d8[0];
  v86 = *(_QWORD*)(*(_QWORD*)GameData_212c7d8[0] + 144LL);
  if (v86 != 0) {
    v87 = *v34;
    v85[19] = v86;
    v88 = 128;
    if (*(_QWORD*)(v87 + 200) == 0) {
      v88 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v87 + v88, v86);
  }
  v89 = v103_.v104;
  v85[18] = v103_.v103;
  v85[19] = v89;
  v85[20] = v103_.v105;
}

void game_combat_CombatTransparent_Tick_lambda0_Invoke(__int64 a1,
                                                       float32x4_t** a2)
{

#pragma clang fp contract(off)
  float32x4_t* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  float v10;
  unsigned __int64 v11;
  float32x4_t v12;
  __int128 v13;
  __int64 v14;
  struct {
    __int128 v15;
    float v16;
    char v17;
  } v15_;

  v2 = *a2;
  v15_.v15 = (__typeof__(v15_.v15)){0};
  v15_.v17 = 0;
  v15_.v16 = 0x1.0000000000000p-1f;
  v3 = LANES128(v2[5]).n128_u64[0];
  if (v3 != 0) {
    v4 = LANES128(v2[5]).n128_u64[1];
    if (*(_QWORD*)(v3 + 8) != -1 && v4 != 0) {
      v6 = *(_QWORD*)(v4 + 392);
      v7 = *(_QWORD*)(v4 + 400);
      if (v7 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v6 != 0) {
        v8 = *(_QWORD*)(v6 + 11792);
        v9 = *(float*)(v6 + 32) *
             (float)(*(float*)(v6 + 40) +
                     (float)(0x1.0000000000000p+0f - *(float*)(v6 + 40)));
        v15_.v16 = *(float*)(v8 + 40) * v9;
        v10 = *(float*)(v8 + 32) * v9;
        LODWORD(v11) = 0;
        *((float*)&v11 + 1) = v10;
        v12 = vaddq_f32(v2[7], COERCE_AS(float32x4_t, v11));
        *(_QWORD*)&v13 = LANES128(v12).n128_u64[0];
        *((_QWORD*)&v13 + 1) = LANES128(v12).n128_u32[2];
        v15_.v15 = v13;
      }
      if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        v14 = a1;
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak_alt1(v7);
        a1 = v14;
      }
    }
  }
  GameRoutine_d28580(*(__int64**)(a1 + 8), (__int64)&v15_.v15);
}

void game_combat_CombatTransparent_Tick_lambda1_Invoke(__int64 a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  float32x4_t* v10;
  float32x4_t* v11;
  unsigned __int64 v12;
  float32x4_t v13;
  __int128 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    __int128 v20;
    float v21;
    char v22;
  } v20_;

  v2 = (_QWORD*)*a2;
  v20_.v20 = (__typeof__(v20_.v20)){0};
  v20_.v22 = 0;
  v20_.v21 = 0x1.0000000000000p-1f;
  v3 = v2[6];
  if (v3 != 0) {
    v4 = v2[7];
    if (*(_QWORD*)(v3 + 8) != -1 && v4 != 0) {
      v6 = *(_QWORD*)(v4 + 392);
      v7 = *(_QWORD*)(v4 + 400);
      if (v7 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v6 != 0) {
        v8 = v2[6];
        v20_.v21 =
            *(float*)(*(_QWORD*)(v6 + 11792) + 40LL) *
            (float)(*(float*)(v6 + 32) *
                    (float)(*(float*)(v6 + 40) + (float)(0x1.0000000000000p+0f -
                                                         *(float*)(v6 + 40))));
        if (v8 != 0 &&
            (*(_QWORD*)(v8 + 8) != -1 ? (v9 = v2[7] == 0) : (v9 = true),
             !v9 && (v10 = (float32x4_t*)v2[1]) != nullptr)) {
          v11 = v10 + 19;
        }
        else if ((atomic_load_explicit(
                      (atomic_uchar* volatile)&GameData_21a6130,
                      memory_order_acquire) &
                  1) != 0) {
          v11 = (float32x4_t*)&GameData_21a6120;
        }
        else {
          v18 = a1;
          v19 = v6;
          v16 = __cxa_guard_acquire(&GameData_21a6130);
          v11 = (float32x4_t*)&GameData_21a6120;
          if (v16 != 0) {
            v17 = *((_QWORD*)GameData_212c540 + 1);
            *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
            *((_QWORD*)&GameData_21a6120 + 1) = v17;
            __cxa_guard_release(&GameData_21a6130);
            v11 = (float32x4_t*)&GameData_21a6120;
          }
          a1 = v18;
          v6 = v19;
        }
        LODWORD(v12) = 0;
        *((float*)&v12 + 1) =
            *(float*)(*(_QWORD*)(v6 + 11792) + 32LL) *
            (float)(*(float*)(v6 + 32) *
                    (float)(*(float*)(v6 + 40) + (float)(0x1.0000000000000p+0f -
                                                         *(float*)(v6 + 40))));
        v13 = vaddq_f32(*v11, COERCE_AS(float32x4_t, v12));
        *(_QWORD*)&v14 = LANES128(v13).n128_u64[0];
        *((_QWORD*)&v14 + 1) = LANES128(v13).n128_u32[2];
        v20_.v20 = v14;
      }
      if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        v15 = a1;
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak_alt1(v7);
        a1 = v15;
      }
    }
  }
  GameRoutine_d28580(*(__int64**)(a1 + 8), (__int64)&v20_.v20);
}

#pragma GCC visibility pop
