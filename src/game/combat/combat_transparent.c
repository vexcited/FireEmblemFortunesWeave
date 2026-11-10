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

void game_combat_CombatTransparent_Tick()
{
  __int64* v1;
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int128 v6;
  __int128 v7;
  __int128 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  float v38;
  char v39;
  float* v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  char* v50;
  __int64 v51;
  float* v52;
  long double v53;
  bool v54;
  char* v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  char* v61;
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
  char* v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  char* v78;
  __int64 v79;
  __int64 v80;
  int v81;
  char v82;
  __int64 v83;
  _QWORD* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  char* v88;
  __int64 v89;
  __int64 v90;
  char v91;
  __int128 v92;
  __int128 v93;
  __int128 v94;
  long double v95;
  __int128 v96;
  long double v97;
  __int128 v98;
  __int128 v99;
  _QWORD v100[4];
  _QWORD* v101;
  __int64 v102;
  char* v103;
  char* v104;
  _QWORD v105[2];

  if (*GameData_212d168 != 3 || *(_QWORD*)GameData_212c7d8[0] == 0) {
    return;
  }
  v1 = GameData_212d448[0];
  v102 = 0;
  v2 = *(_QWORD*)(*GameData_212d448[0] + 8);
  v103 = nullptr;
  v104 = nullptr;
  v101 = v100;
  v3 = *(_DWORD*)(v2 + 112);
  v100[0] = GameData_1ff4bd0;
  v100[1] = &v102;
  GameRoutine_106c820();
  v9 = (__int64)v101;
  if (v101 == v100) {
    v10 = 32;
  }
  else {
    if (v101 == nullptr) {
      goto LABEL_10;
    }
    v10 = 40;
  }
  v9 = (*(__int64 (**)(__int64))(*v101 + v10))((__int64)v101);
LABEL_10:
  v11 = *v1;
  v12 = *(_QWORD**)(*v1 + 120);
  if (v12 == nullptr) {
    goto LABEL_54;
  }
  v13 = v12[2];
  v14 = v100;
  v101 = v100;
  v100[0] = GameData_1ff4c60;
  v100[1] = &v102;
  v15 = *(_QWORD*)(v13 + 16);
  v16 = *(_QWORD*)(v13 + 24);
  if (v15 == v16) {
    goto LABEL_23;
  }
  do {
    v17 = *(_QWORD**)(*(_QWORD*)v15 + 24LL);
    v18 = *(_QWORD**)(*(_QWORD*)v15 + 32LL);
    while (v17 != v18) {
      if (*v17 != 0) {
        v19 = v101;
        v105[0] = *v17;
        if (v101 == nullptr) {
        LABEL_150:
          GameRoutine_60a310(v19, v4, v5);
        }
        (*(void (**)(_QWORD*, _QWORD*))(*v101 + 48LL))(v101, v105);
      }
      v17 += 2;
    }
    v15 += 16;
  } while (v15 != v16);
  v14 = v101;
  if (v101 == v100) {
  LABEL_23:
    v20 = 32;
    goto LABEL_24;
  }
  if (v101 != nullptr) {
    v20 = 40;
  LABEL_24:
    (*(void (**)(__int64))(*v14 + v20))((__int64)v14);
  }
  v21 = v12[3];
  v22 = v100;
  v101 = v100;
  v100[0] = GameData_1ff4c60;
  v100[1] = &v102;
  v23 = *(_QWORD*)(v21 + 16);
  v24 = *(_QWORD*)(v21 + 24);
  if (v23 == v24) {
    goto LABEL_37;
  }
  do {
    v25 = *(_QWORD**)(*(_QWORD*)v23 + 24LL);
    v26 = *(_QWORD**)(*(_QWORD*)v23 + 32LL);
    while (v25 != v26) {
      if (*v25 != 0) {
        v19 = v101;
        v105[0] = *v25;
        if (v101 == nullptr) {
          goto LABEL_150;
        }
        (*(void (**)(_QWORD*, _QWORD*))(*v101 + 48LL))(v101, v105);
      }
      v25 += 2;
    }
    v23 += 16;
  } while (v23 != v24);
  v22 = v101;
  if (v101 == v100) {
  LABEL_37:
    v27 = 32;
    goto LABEL_38;
  }
  if (v101 != nullptr) {
    v27 = 40;
  LABEL_38:
    (*(void (**)(__int64))(*v22 + v27))((__int64)v22);
  }
  v28 = v12[4];
  v9 = (__int64)v100;
  v101 = v100;
  v100[0] = GameData_1ff4c60;
  v100[1] = &v102;
  v29 = *(_QWORD*)(v28 + 16);
  v30 = *(_QWORD*)(v28 + 24);
  if (v29 == v30) {
    goto LABEL_51;
  }
  do {
    v31 = *(_QWORD**)(*(_QWORD*)v29 + 24LL);
    v32 = *(_QWORD**)(*(_QWORD*)v29 + 32LL);
    while (v31 != v32) {
      if (*v31 != 0) {
        v19 = v101;
        v105[0] = *v31;
        if (v101 == nullptr) {
          goto LABEL_150;
        }
        (*(void (**)(_QWORD*, _QWORD*))(*v101 + 48LL))(v101, v105);
      }
      v31 += 2;
    }
    v29 += 16;
  } while (v29 != v30);
  v9 = (__int64)v101;
  if (v101 == v100) {
  LABEL_51:
    v33 = 32;
    goto LABEL_52;
  }
  if (v101 != nullptr) {
    v33 = 40;
  LABEL_52:
    v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + v33))((__int64)v9);
  }
  v11 = *v1;
LABEL_54:
  v35 = *(_QWORD*)(v11 + 8);
  v34 = *(_QWORD*)(v11 + 16);
  if (v34 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
      v9 = std___1___shared_weak_count___release_weak(v34);
    }
  }
  v36 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if ((v3 & 0x40) == 0) {
    v37 = 0;
    if ((v3 & 0x198) != 0) {
      v38 = 10.0;
    }
    else {
      v38 = 0.0;
    }
    v89 = v35 + 120;
    v90 = v35 + 184;
    v39 = 1;
    while (1) {
      v91 = v39;
      if (*(_BYTE*)(v90 + v37) == 1) {
        v40 = (float*)(v89 + 16 * v37);
        v41 = v40[1];
        v43 = v40[2];
        v42 = v40[3];
        if (*v40 >= v43) {
          v44 = v40[2];
        }
        else {
          v44 = *v40;
        }
        if (*v40 >= v43) {
          v43 = *v40;
        }
        v45 = v44 - v38;
        v46 = v38 + v43;
        v47 = v41 >= v42 ? v40[1] : v40[3];
        *(float*)&v6 = v45 + 0x1.4000000000000p+1;
        if ((float)(v45 + 0x1.4000000000000p+1) <= v46) {
          v48 = v38 + v47;
          if (v41 >= v42) {
            v41 = v40[3];
          }
          v49 = (float)(v41 - v38) + 0x1.4000000000000p+1;
          if (v49 <= v48) {
            break;
          }
        }
      }
    LABEL_62:
      v37 = 1;
      v39 = 0;
      if ((v91 & 1) == 0) {
        goto LABEL_142;
      }
    }
    v50 = v103;
  LABEL_78:
    *(float*)&v7 = *(float*)&v6 + 0x1.4000000000000p+1;
    v94 = v6;
    *(float*)&v8 = v49;
    *(_OWORD*)&v97 = (unsigned int)v6;
    v92 = COERCE_UNSIGNED_INT(*(float*)&v6 + 0x1.4000000000000p+1);
    v93 = v7;
    while (1) {
      v51 = v102;
      if ((char*)v102 == v50) {
      LABEL_95:
        v53 = v97;
        DWORD2(v53) = v8;
        if (v50 >= v104) {
          v55 = &v50[-v102];
          v56 = (__int64)&v50[-v102] >> 5;
          v57 = v56 + 1;
          if ((unsigned __int64)(v56 + 1) >> 59 != 0) {
            goto LABEL_149;
          }
          v58 = (__int64)&v104[-v102];
          if ((__int64)&v104[-v102] >> 4 > v57) {
            v57 = v58 >> 4;
          }
          if ((unsigned __int64)v58 >= 0x7FFFFFFFFFFFFFE0LL) {
            v59 = 0x7FFFFFFFFFFFFFFLL;
          }
          else {
            v59 = v57;
          }
          if (v59 >> 59 != 0) {
            goto LABEL_148;
          }
          v60 = 32 * v59;
          v98 = v8;
          v95 = v53;
          v9 = fw_memory_HeapManager_Allocate(*v36, 32 * v59, 16, 0);
          v53 = v95;
          v61 = &v55[v9];
          *((_DWORD*)v61 + 4) = 1075838976;
          v61[20] = 1;
          *(long double*)v61 = v95;
          if ((char*)v51 != v50) {
            v62 = v51;
            v63 = (__int64)&v55[v9 + -32 * v56];
            do {
              *(_QWORD*)(v63 + 8) = *(_QWORD*)(v62 + 8);
              *(_QWORD*)v63 = *(_QWORD*)v62;
              v64 = *(_DWORD*)(v62 + 16);
              v65 = *(_BYTE*)(v62 + 20);
              v62 += 32;
              *(_BYTE*)(v63 + 20) = v65;
              *(_DWORD*)(v63 + 16) = v64;
              v63 += 32;
            } while ((char*)v62 != v50);
          }
          v50 = v61 + 32;
          v102 = (__int64)&v55[v9 + -32 * v56];
          v103 = v61 + 32;
          v104 = (char*)(v9 + v60);
          if (v51 != 0) {
            v66 = 128;
            if (*(_QWORD*)(*v36 + 200LL) == 0) {
              v66 = 56;
            }
            *(__n128*)&v53 = nn_mem_StandardAllocator_Free(*v36 + v66);
          }
          v7 = v93;
          v6 = v94;
          v8 = v98;
        }
        else {
          *(long double*)v50 = v53;
          *((_DWORD*)v50 + 4) = 1075838976;
          v50[20] = 1;
          v50 += 32;
        }
        v103 = v50;
        if (*(float*)&v7 < v46) {
        LABEL_113:
          *(float*)&v53 = *(float*)&v8 + 0x1.4000000000000p+1;
          if ((float)(*(float*)&v8 + 0x1.4000000000000p+1) < v48) {
            v67 = v102;
            if ((char*)v102 == v50) {
              goto LABEL_126;
            }
            v68 = v102;
            while (1) {
              v69 = *(_OWORD*)v68;
              if (COERCE_FLOAT(*(_OWORD*)v68) == *(float*)&v7) {
                v70 = *((float*)&v69 + 1) == 0.0 &&
                      *((float*)&v69 + 2) == *(float*)&v53;
                if (v70 && *(float*)(v68 + 16) == 0x1.4000000000000p+1 &&
                    (*(_BYTE*)(v68 + 20) & 1) != 0) {
                  break;
                }
              }
              v68 += 32;
              if ((char*)v68 == v50) {
                goto LABEL_126;
              }
            }
            if ((char*)v68 == v50) {
            LABEL_126:
              v71 = v92;
              *((float*)&v71 + 2) = *(float*)&v8 + 0x1.4000000000000p+1;
              if (v50 < v104) {
                *(_OWORD*)v50 = v71;
                *((_DWORD*)v50 + 4) = 1075838976;
                v50[20] = 1;
                v50 += 32;
              }
              else {
                v72 = &v50[-v102];
                v73 = (__int64)&v50[-v102] >> 5;
                v74 = v73 + 1;
                if ((unsigned __int64)(v73 + 1) >> 59 != 0) {
                LABEL_149:
                  GameRoutine_d28710(v9, v53);
                }
                v75 = (__int64)&v104[-v102];
                v96 = v71;
                v99 = v8;
                if ((__int64)&v104[-v102] >> 4 > v74) {
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
                  GameRoutine_60a210(v9);
                }
                v77 = 32 * v76;
                v9 = fw_memory_HeapManager_Allocate(*v36, 32 * v76, 16, 0);
                v78 = &v72[v9];
                *((_DWORD*)v78 + 4) = 1075838976;
                v78[20] = 1;
                *(_OWORD*)v78 = v96;
                if ((char*)v67 != v50) {
                  v79 = v67;
                  v80 = (__int64)&v72[v9 + -32 * v73];
                  do {
                    *(_QWORD*)(v80 + 8) = *(_QWORD*)(v79 + 8);
                    *(_QWORD*)v80 = *(_QWORD*)v79;
                    v81 = *(_DWORD*)(v79 + 16);
                    v82 = *(_BYTE*)(v79 + 20);
                    v79 += 32;
                    *(_BYTE*)(v80 + 20) = v82;
                    *(_DWORD*)(v80 + 16) = v81;
                    v80 += 32;
                  } while ((char*)v79 != v50);
                }
                v50 = v78 + 32;
                v102 = (__int64)&v72[v9 + -32 * v73];
                v103 = v78 + 32;
                v104 = (char*)(v9 + v77);
                if (v67 != 0) {
                  v83 = 128;
                  if (*(_QWORD*)(*v36 + 200LL) == 0) {
                    v83 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v36 + v83);
                }
                v7 = v93;
                v6 = v94;
                v8 = v99;
              }
              v103 = v50;
            }
          }
        }
      }
      else {
        v52 = (float*)v102;
        while (1) {
          v53 = *(long double*)v52;
          if (COERCE_FLOAT(*(_OWORD*)v52) == *(float*)&v6) {
            v54 = *((float*)&v53 + 1) == 0.0 &&
                  *((float*)&v53 + 2) == *(float*)&v8;
            if (v54 && v52[4] == 0x1.4000000000000p+1 &&
                ((_BYTE)v52[5] & 1) != 0) {
              break;
            }
          }
          v52 += 8;
          if (v52 == (float*)v50) {
            goto LABEL_95;
          }
        }
        if (*(float*)&v7 < v46) {
          goto LABEL_113;
        }
      }
      *(float*)&v8 = *(float*)&v8 + 5.0;
      if (*(float*)&v8 > v48) {
        *(float*)&v6 = *(float*)&v6 + 5.0;
        if (*(float*)&v6 > v46) {
          goto LABEL_62;
        }
        goto LABEL_78;
      }
    }
  }
LABEL_142:
  v84 = *(_QWORD**)GameData_212c7d8[0];
  v85 = *(_QWORD*)(*(_QWORD*)GameData_212c7d8[0] + 144LL);
  if (v85 != 0) {
    v86 = *v36;
    v84[19] = v85;
    v87 = 128;
    if (*(_QWORD*)(v86 + 200) == 0) {
      v87 = 56;
    }
    nn_mem_StandardAllocator_Free(v86 + v87);
  }
  v88 = v103;
  v84[18] = v102;
  v84[19] = v88;
  v84[20] = v104;
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
