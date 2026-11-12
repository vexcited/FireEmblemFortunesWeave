#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* Manager_bc6460(_QWORD*, __int64, char);
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameHr_1562680(__int64 result, unsigned int*, float);
__int64 GameMenuItem_16eacc0(_QWORD*);
__int64 GameRoutine_14a1520(__int64*, char);
__int64 GameRoutine_155f760(__int64, __int64, const char*);
__int64 LayoutAccessor_1563490(__int64*, __int64, char);
__int64 LayoutAccessor_15635a0(__int64*, __int64, char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_IsPaneMatrixUpdated(__int64*, const char*);
char* game_util_Format(const char*, ...);
extern _UNKNOWN* GameData_212c540;
extern __int128 GameData_1a837f0;
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_LayoutAccessor_empty_;
extern char GameData_1a9f09e;
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 TitleMenuItem_169e7d0(_QWORD* a1);
void TitleMenuItem_169ee50(_QWORD* a1);
void TitleMenuItem_169f600(_QWORD* a1);

__int64 TitleMenuItem_169e7d0(_QWORD* a1)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  atomic_ullong* v9;
  __int64* v10;
  __int64* v11;
  __int64 result;
  bool v13;
  __int64 v14;
  const char* v15;
  __int64 v16;
  __int64* v17;
  unsigned __int32 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _BOOL4 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int32x4_t* v28;
  __int128 v29;
  _QWORD* v30;
  __int64 v31;
  __int64* v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  struct {
    __int64 v38;
    __int64 v39;
    const char* v40;
    int v41;
    char gap28_[4];
    __int128 v42;
    __int128 v43;
    __int64 v44;
    __int64 v45;
  } v38_;

  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = a1[11];
  v3 = a1[12];
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    v38_.v39 = v3;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  else {
    v38_.v39 = 0;
  }
  v38_.v38 = v2;
  GameRoutine_14a1520(&v38_.v38, 1),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = v38_.v39;
  if (v38_.v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v38_.v39 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v5),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v3 == 0) {
      goto LABEL_8;
    }
  }
  else if (v3 == 0) {
    goto LABEL_8;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v3),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v6 = a1[7];
    if (v6 == 0) {
      goto LABEL_18;
    }
    goto LABEL_9;
  }
LABEL_8:
  v6 = a1[7];
  if (v6 == 0) {
    goto LABEL_18;
  }
LABEL_9:
  v7 = std___1___shared_weak_count_lock(v6),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v7 == 0) {
    goto LABEL_18;
  }
  v8 = v7;
  v9 = (atomic_ullong*)(v7 + 8);
  v10 = (__int64*)a1[6];
  if (atomic_fetch_add(v9, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v11 = v10;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v8),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v10 = v11;
    if (v11 != nullptr) {
      goto LABEL_19;
    }
  LABEL_18:
    v10 = &ui_LayoutAccessor_empty_;
    goto LABEL_19;
  }
  if (v10 == nullptr) {
    goto LABEL_18;
  }
LABEL_19:
  result = ui_LayoutAccessor_IsPaneMatrixUpdated(v10, "T_Txt"),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((result & 1) == 0) {
    return result;
  }
  v13 = ((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0,
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v14 = a1[7];
  if (v13) {
    v15 = "UI_Deco_Menu_Wait_Gray_Loop";
  }
  else {
    v15 = "UI_Deco_Menu_Wait_Gold_Loop";
  }
  if (v14 == 0) {
    goto LABEL_27;
  }
  v16 = std___1___shared_weak_count_lock(v14),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v16 == 0) {
    goto LABEL_27;
  }
  v17 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v24 = v16;
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v24),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v17 != nullptr) {
      goto LABEL_28;
    }
    goto LABEL_27;
  }
  if (v17 == nullptr) {
  LABEL_27:
    v17 = &ui_LayoutAccessor_empty_;
  }
LABEL_28:
  v18 = 0;
  if (v17[2] == 0) {
    goto LABEL_48;
  }
  v19 = v17[1];
  if (v19 == 0) {
    goto LABEL_48;
  }
  v20 = std___1___shared_weak_count_lock(v19),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v20 != 0) {
    v21 = *v17;
    if (*v17 != 0) {
      v1 = *(unsigned __int8*)(v21 + 24);
      v22 = v21 + 152;
      if (v1 == 0) {
        v22 = 0;
      }
      v23 = v22 != v17[2];
    }
    else {
      v23 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v23) {
        goto LABEL_40;
      }
    }
    else {
      v26 = v20;
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v26),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v23) {
        goto LABEL_40;
      }
    }
    v18 = 0;
    if ((v1 & 1) == 0) {
      goto LABEL_48;
    }
    goto LABEL_45;
  }
LABEL_40:
  v25 = v17[1];
  v18 = 0;
  if (v25 != 0 && *(_QWORD*)(v25 + 8) != -1) {
  LABEL_45:
    v27 = v17[2];
    if (v27 != 0) {
      v28 = (int32x4_t*)GameRoutine_155f760((__int64)v17, v27, "T_Txt"),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)&v29 = 0;
      v18 = 0;
      if (v28 != nullptr) {
        v18 = LANES128(v28[9]).n128_u32[3];
        LODWORD(v29) = LANES128_OF(vdupq_laneq_s32(v28[7], 3)).n128_u32[0];
        DWORD1(v29) = HIDWORD(LANES128(v28[8]).n128_u64[1]);
      }
      goto LABEL_49;
    }
  }
LABEL_48:
  *(_QWORD*)&v29 = 0;
LABEL_49:
  v38_.v38 = 0;
  v38_.v39 = 0;
  v30 = (_QWORD*)*eft_g_effectSystem_ptr[0];
  *((_QWORD*)&v29 + 1) = v18;
  v38_.v41 = 9;
  v38_.v42 = v29;
  v38_.v43 = GameData_1a837f0;
  v38_.v40 = v15;
  v31 = *((_QWORD*)GameData_212c540 + 1);
  v38_.v44 = *(_QWORD*)GameData_212c540;
  v38_.v45 = v31;
  v32 = Manager_bc6460(v30, (__int64)&v38_.v38, 1),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result =
      GameHr_14a10d0(&v38_.v38, (__int64)v32, v33, (__int64)&GameData_1a9f09e),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v34 = v38_.v38;
  v35 = v38_.v39;
  if (v38_.v39 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v38_.v39 + 8), 1u,
                              memory_order_relaxed);
  }
  v36 = a1[12];
  a1[11] = v34;
  a1[12] = v35;
  if (v36 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = std___1___shared_weak_count___release_weak(v36),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v35 = a1[12];
  }
  if (v35 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = std___1___shared_weak_count___release_weak(v35),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v37 = v38_.v39;
  if (v38_.v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v38_.v39 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return std___1___shared_weak_count___release_weak(v37);
  }
  return result;
}

void TitleMenuItem_169ee50(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  atomic_ullong* v6;
  __int64* v7;
  char* v8;
  const char* v9;
  char* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned int* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  atomic_ullong* v17;
  __int64* v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  atomic_ullong* v23;
  __int64* v24;
  __int64* v25;
  const char* v26;
  char* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned int* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  atomic_ullong* v35;
  __int64* v36;
  unsigned int* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  atomic_ullong* v42;
  __int64* v43;
  __int64* v44;
  unsigned int* v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  atomic_ullong* v53;
  __int64* v54;
  __int64* v55;
  bool v56;
  __int64 v57;
  const char* v58;
  __int64 v59;
  __int64* v60;
  __int64 v61;
  unsigned __int32 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  _BOOL4 v67;
  __int64* v68;
  __int64* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  int32x4_t* v73;
  __int128 v74;
  _QWORD* v75;
  __int64 v76;
  __int64* v77;
  unsigned int v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  struct {
    __int64 v83;
    __int64 v84;
  } v83_;
  struct {
    _QWORD v85[2];
    unsigned int* v86;
  } v85_;
  struct {
    _QWORD v87[2];
    char* v88;
  } v87_;
  struct {
    _QWORD v89[2];
    char* v90;
  } v89_;
  struct {
    __int64 v91;
    __int64 v92;
    unsigned int* v93;
    int v94;
    char gap124_[4];
    __int128 v95;
    __int128 v96;
    __int64 v97;
    __int64 v98;
  } v91_;

  v78 = COERCE_AS(__typeof__(v78),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(*a1 + 528LL))(
      (void*)(v89_.v89), (__int64)a1),
      v78 = COERCE_AS(__typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*a1 + 544LL))(
      (void*)(v87_.v87), a1),
      v78 = COERCE_AS(__typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = a1[7];
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = std___1___shared_weak_count_lock(v3),
  v78 = COERCE_AS(__typeof__(v78),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v4 == 0) {
    goto LABEL_5;
  }
  v5 = v4;
  v6 = (atomic_ullong*)(v4 + 8);
  v7 = (__int64*)a1[6];
  if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v48 = v7;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v5),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v7 = v48;
    if (v48 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v7 == nullptr) {
  LABEL_5:
    v7 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  if ((v87_.v87[0] & 1) != 0) {
    v8 = v87_.v88;
  }
  else {
    v8 = (char*)v87_.v87 + 1;
  }
  if ((LayoutAccessor_15635a0(v7, (__int64)v8, 1) & 1) != 0) {
    v9 = (const char*)(*(__int64 (**)(_QWORD*))(*a1 + 552LL))(a1),
    v78 = COERCE_AS(__typeof__(v78),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v10 = game_util_Format("%sSelectWait", v9),
    v78 = COERCE_AS(__typeof__(v78),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v11 = strlen(v10),
    v78 = COERCE_AS(__typeof__(v78),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v11 < 0xFFFFFFFFFFFFFFF7LL) {
      v12 = v11;
      if (v11 >= 0x17) {
        if ((v11 | 7) == 0x17) {
          v31 = 26;
        }
        else {
          v31 = (v11 | 7) + 1;
        }
        v13 = (unsigned int*)fw_memory_HeapManager_Allocate(
            fw_memory_g_heap_manager, v31, 16, 0),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v91_.v92 = v12;
        v91_.v93 = v13;
        v91_.v91 = v31 | 1;
      }
      else {
        LOBYTE(v91_.v91) = 2 * v11;
        v13 = (unsigned int*)((char*)&v91_.v91 + 1);
        if (v11 == 0) {
          goto LABEL_39;
        }
      }
      memmove((__int64)v13, (__int64)v10, v12),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LABEL_39:
      *((_BYTE*)v13 + v12) = 0;
      v32 = a1[7];
      if (v32 != 0) {
        v33 = std___1___shared_weak_count_lock(v32),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v33 != 0) {
          v34 = v33;
          v35 = (atomic_ullong*)(v33 + 8);
          v36 = (__int64*)a1[6];
          if (atomic_fetch_add(v35, 0xFFFFFFFFFFFFFFFFLL) != 0) {
            if (v36 != nullptr) {
              goto LABEL_44;
            }
          }
          else {
            v69 = v36;
            (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34),
                v78 =
                    COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak(v34),
                v78 =
                    COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v36 = v69;
            if (v69 != nullptr) {
            LABEL_44:
              if ((v91_.v91 & 1) != 0) {
                v37 = v91_.v93;
              }
              else {
                v37 = (unsigned int*)((char*)&v91_.v91 + 1);
              }
              GameHr_1562680((__int64)v36, v37, 0x1.0000000000000p+0f),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if ((v91_.v91 & 1) == 0) {
                goto LABEL_124;
              }
              v38 = (__int64)v91_.v93;
              if (v91_.v93 == nullptr) {
                goto LABEL_124;
              }
              goto LABEL_121;
            }
          }
        }
      }
      v36 = &ui_LayoutAccessor_empty_;
      goto LABEL_44;
    }
  LABEL_135:
    String_60a1d0(),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v14 = a1[7];
  if (v14 == 0) {
    goto LABEL_18;
  }
  v15 = std___1___shared_weak_count_lock(v14),
  v78 = COERCE_AS(__typeof__(v78),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v15 == 0) {
    goto LABEL_18;
  }
  v16 = v15;
  v17 = (atomic_ullong*)(v15 + 8);
  v18 = (__int64*)a1[6];
  if (atomic_fetch_add(v17, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v68 = v18;
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v16),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v18 = v68;
    if (v68 != nullptr) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  if (v18 == nullptr) {
  LABEL_18:
    v18 = &ui_LayoutAccessor_empty_;
  }
LABEL_19:
  if ((v89_.v89[0] & 1) != 0) {
    v19 = v89_.v90;
  }
  else {
    v19 = (char*)v89_.v89 + 1;
  }
  if ((LayoutAccessor_15635a0(v18, (__int64)v19, 1) & 1) != 0) {
    goto LABEL_30;
  }
  v20 = a1[7];
  if (v20 == 0) {
    goto LABEL_28;
  }
  v21 = std___1___shared_weak_count_lock(v20),
  v78 = COERCE_AS(__typeof__(v78),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v21 == 0) {
    goto LABEL_28;
  }
  v22 = v21;
  v23 = (atomic_ullong*)(v21 + 8);
  v24 = (__int64*)a1[6];
  if (atomic_fetch_add(v23, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v25 = v24;
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v22),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v24 = v25;
  }
  if (v24 == nullptr) {
  LABEL_28:
    v24 = &ui_LayoutAccessor_empty_;
  }
  if ((LayoutAccessor_15635a0(v24, 0, 0) & 1) == 0) {
  LABEL_30:
    v26 = (const char*)(*(__int64 (**)(_QWORD*))(*a1 + 552LL))(a1),
    v78 = COERCE_AS(__typeof__(v78),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v27 = game_util_Format("%sSelectIn", v26),
    v78 = COERCE_AS(__typeof__(v78),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v28 = strlen(v27),
    v78 = COERCE_AS(__typeof__(v78),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v28 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_135;
    }
    v29 = v28;
    if (v28 >= 0x17) {
      if ((v28 | 7) == 0x17) {
        v1 = 26;
      }
      else {
        v1 = (v28 | 7) + 1;
      }
      v30 = (unsigned int*)fw_memory_HeapManager_Allocate(
          fw_memory_g_heap_manager, v1, 16, 0),
      v78 = COERCE_AS(__typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v85_.v85[1] = v29;
      v85_.v86 = v30;
      v85_.v85[0] = v1 | 1;
    }
    else {
      LOBYTE(v85_.v85[0]) = 2 * v28;
      v30 = (unsigned int*)((char*)v85_.v85 + 1);
      if (v28 == 0) {
      LABEL_55:
        *((_BYTE*)v30 + v29) = 0;
        v39 = a1[7];
        if (v39 == 0) {
          goto LABEL_60;
        }
        v40 = std___1___shared_weak_count_lock(v39),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v40 == 0) {
          goto LABEL_60;
        }
        v41 = v40;
        v42 = (atomic_ullong*)(v40 + 8);
        v43 = (__int64*)a1[6];
        if (atomic_fetch_add(v42, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          v44 = v43;
          (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v41),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v43 = v44;
        }
        if (v43 == nullptr) {
        LABEL_60:
          v43 = &ui_LayoutAccessor_empty_;
        }
        if ((v85_.v85[0] & 1) != 0) {
          v45 = v85_.v86;
        }
        else {
          v45 = (unsigned int*)((char*)v85_.v85 + 1);
        }
        GameHr_1562680((__int64)v43, v45, 0x1.0000000000000p+0f),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v46 = a1[11];
        v47 = a1[12];
        if (v47 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v47 + 8), 1u,
                                    memory_order_relaxed);
          v91_.v92 = v47;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v47 + 8), 1u,
                                    memory_order_relaxed);
        }
        else {
          v91_.v92 = 0;
        }
        v91_.v91 = v46;
        GameRoutine_14a1520(&v91_.v91, 1),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v49 = v91_.v92;
        if (v91_.v92 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v91_.v92 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v49),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v47 == 0) {
            goto LABEL_73;
          }
        }
        else if (v47 == 0) {
          goto LABEL_73;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v47),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v50 = a1[7];
          if (v50 == 0) {
            goto LABEL_82;
          }
        LABEL_74:
          v51 = std___1___shared_weak_count_lock(v50),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v51 != 0) {
            v52 = v51;
            v53 = (atomic_ullong*)(v51 + 8);
            v54 = (__int64*)a1[6];
            if (atomic_fetch_add(v53, 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v55 = v54;
              (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              std___1___shared_weak_count___release_weak(v52),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v54 = v55;
            }
            if (v54 != nullptr) {
            LABEL_83:
              if ((ui_LayoutAccessor_IsPaneMatrixUpdated(v54, "T_Txt") & 1) ==
                  0) {
                goto LABEL_119;
              }
              v56 = ((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0,
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v57 = a1[7];
              if (v56) {
                v58 = "UI_Deco_Menu_Select_Gray";
              }
              else {
                v58 = "UI_Deco_Menu_Select_Gold";
              }
              if (v57 == 0) {
                goto LABEL_92;
              }
              v59 = std___1___shared_weak_count_lock(v57),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if (v59 == 0) {
                goto LABEL_92;
              }
              v60 = (__int64*)a1[6];
              if (atomic_fetch_add((atomic_ullong* volatile)(v59 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v61 = v59;
                (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59),
                    v78 = COERCE_AS(
                        __typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                std___1___shared_weak_count___release_weak(v61),
                    v78 = COERCE_AS(
                        __typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              if (v60 == nullptr) {
              LABEL_92:
                v60 = &ui_LayoutAccessor_empty_;
              }
              v62 = 0;
              if (v60[2] == 0) {
                goto LABEL_115;
              }
              v63 = v60[1];
              if (v63 == 0) {
                goto LABEL_115;
              }
              v64 = std___1___shared_weak_count_lock(v63),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if (v64 == 0) {
                goto LABEL_108;
              }
              v65 = *v60;
              if (*v60 != 0) {
                LODWORD(v1) = *(unsigned __int8*)(v65 + 24);
                v66 = v65 + 152;
                if ((_DWORD)v1 == 0) {
                  v66 = 0;
                }
                v67 = v66 != v60[2];
              }
              else {
                v67 = true;
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v70 = v64;
                (*(void (**)(__int64))(*(_QWORD*)v64 + 16LL))(v64),
                    v78 = COERCE_AS(
                        __typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                std___1___shared_weak_count___release_weak(v70),
                    v78 = COERCE_AS(
                        __typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              if (!v67) {
                v62 = 0;
                if ((v1 & 1) == 0) {
                  goto LABEL_115;
                }
              }
              else {
              LABEL_108:
                v71 = v60[1];
                v62 = 0;
                if (v71 == 0 || *(_QWORD*)(v71 + 8) == -1) {
                  goto LABEL_115;
                }
              }
              v72 = v60[2];
              if (v72 != 0) {
                v73 =
                    (int32x4_t*)GameRoutine_155f760((__int64)v60, v72, "T_Txt"),
                v78 =
                    COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                *(_QWORD*)&v74 = 0;
                v62 = 0;
                if (v73 != nullptr) {
                  v62 = LANES128(v73[9]).n128_u32[3];
                  LODWORD(v74) =
                      LANES128_OF(vdupq_laneq_s32(v73[7], 3)).n128_u32[0];
                  DWORD1(v74) = HIDWORD(LANES128(v73[8]).n128_u64[1]);
                }
                goto LABEL_116;
              }
            LABEL_115:
              *(_QWORD*)&v74 = 0;
            LABEL_116:
              v91_.v91 = 0;
              v91_.v92 = 0;
              v75 = (_QWORD*)*eft_g_effectSystem_ptr[0];
              *((_QWORD*)&v74 + 1) = v62;
              v91_.v94 = 9;
              v91_.v95 = v74;
              v91_.v96 = GameData_1a837f0;
              v91_.v93 = (unsigned int*)v58;
              v76 = *((_QWORD*)GameData_212c540 + 1);
              v91_.v97 = *(_QWORD*)GameData_212c540;
              v91_.v98 = v76;
              v77 = Manager_bc6460(v75, (__int64)&v91_.v91, 1),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              GameHr_14a10d0(&v83_.v83, (__int64)v77, v78,
                             (__int64)&GameData_1a9f09e),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v79 = v83_.v84;
              if (v83_.v84 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v83_.v84 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v79 + 16LL))(v79),
                    v78 = COERCE_AS(
                        __typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                std___1___shared_weak_count___release_weak(v79),
                    v78 = COERCE_AS(
                        __typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
            LABEL_119:
              if ((v85_.v85[0] & 1) == 0) {
                goto LABEL_124;
              }
              v38 = (__int64)v85_.v86;
              if (v85_.v86 == nullptr) {
                goto LABEL_124;
              }
            LABEL_121:
              v80 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v80 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v80, v38),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              goto LABEL_124;
            }
          }
        LABEL_82:
          v54 = &ui_LayoutAccessor_empty_;
          goto LABEL_83;
        }
      LABEL_73:
        v50 = a1[7];
        if (v50 == 0) {
          goto LABEL_82;
        }
        goto LABEL_74;
      }
    }
    memmove((__int64)v30, (__int64)v27, v29),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_55;
  }
LABEL_124:
  GameMenuItem_16eacc0(a1),
      v78 = COERCE_AS(__typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v87_.v87[0] & 1) != 0 && v87_.v88 != nullptr) {
    v81 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v81 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v81,
                                  (__int64)v87_.v88),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((v89_.v89[0] & 1) != 0 && v89_.v90 != nullptr) {
    v82 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v82 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v82,
                                  (__int64)v89_.v90),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
}

void TitleMenuItem_169f600(_QWORD* a1)
{
  const char* v2;
  char* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  atomic_ullong* v11;
  __int64* v12;
  __int64* v13;
  char* v14;
  const char* v15;
  char* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned int* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  atomic_ullong* v24;
  __int64* v25;
  __int64* v26;
  unsigned int* v27;
  __int64 v28;
  __int64 v29;
  struct {
    _QWORD v30[2];
    unsigned int* v31;
  } v30_;
  struct {
    _QWORD v32[2];
    char* v33;
  } v32_;

  if (*(_QWORD**)(a1[1] + 336LL) != a1) {
    return;
  }
  v2 = (const char*)(*(__int64 (**)(_QWORD*))(*a1 + 552LL))(a1);
  v3 = game_util_Format("%sSelectIn", v2);
  v4 = strlen(v3);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_50;
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16,
                                               0);
    v32_.v32[1] = v5;
    v32_.v33 = v6;
    v32_.v32[0] = v7 | 1;
    goto LABEL_10;
  }
  LOBYTE(v32_.v32[0]) = 2 * v4;
  v6 = (char*)v32_.v32 + 1;
  if (v4 != 0) {
  LABEL_10:
    memmove((__int64)v6, (__int64)v3, v5);
  }
  v6[v5] = 0;
  v8 = a1[7];
  if (v8 == 0) {
    goto LABEL_16;
  }
  v9 = std___1___shared_weak_count_lock(v8);
  if (v9 == 0) {
    goto LABEL_16;
  }
  v10 = v9;
  v11 = (atomic_ullong*)(v9 + 8);
  v12 = (__int64*)a1[6];
  if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v13 = v12;
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
    v12 = v13;
  }
  if (v12 == nullptr) {
  LABEL_16:
    v12 = &ui_LayoutAccessor_empty_;
  }
  if ((v32_.v32[0] & 1) != 0) {
    v14 = v32_.v33;
  }
  else {
    v14 = (char*)v32_.v32 + 1;
  }
  if ((LayoutAccessor_1563490(v12, (__int64)v14, 1) & 1) == 0) {
    goto LABEL_44;
  }
  v15 = (const char*)(*(__int64 (**)(_QWORD*))(*a1 + 552LL))(a1);
  v16 = game_util_Format("%sSelectWait", v15);
  v17 = strlen(v16);
  if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_50:
    String_60a1d0();
  }
  v18 = v17;
  if (v17 >= 0x17) {
    if ((v17 | 7) == 0x17) {
      v20 = 26;
    }
    else {
      v20 = (v17 | 7) + 1;
    }
    v19 = (unsigned int*)fw_memory_HeapManager_Allocate(
        fw_memory_g_heap_manager, v20, 16, 0);
    v30_.v30[1] = v18;
    v30_.v31 = v19;
    v30_.v30[0] = v20 | 1;
  }
  else {
    LOBYTE(v30_.v30[0]) = 2 * v17;
    v19 = (unsigned int*)((char*)v30_.v30 + 1);
    if (v17 == 0) {
      goto LABEL_30;
    }
  }
  memmove((__int64)v19, (__int64)v16, v18);
LABEL_30:
  *((_BYTE*)v19 + v18) = 0;
  v21 = a1[7];
  if (v21 == 0) {
    goto LABEL_35;
  }
  v22 = std___1___shared_weak_count_lock(v21);
  if (v22 == 0) {
    goto LABEL_35;
  }
  v23 = v22;
  v24 = (atomic_ullong*)(v22 + 8);
  v25 = (__int64*)a1[6];
  if (atomic_fetch_add(v24, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v26 = v25;
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak(v23);
    v25 = v26;
  }
  if (v25 == nullptr) {
  LABEL_35:
    v25 = &ui_LayoutAccessor_empty_;
  }
  if ((v30_.v30[0] & 1) != 0) {
    v27 = v30_.v31;
  }
  else {
    v27 = (unsigned int*)((char*)v30_.v30 + 1);
  }
  GameHr_1562680((__int64)v25, v27, 0x1.0000000000000p+0f);
  TitleMenuItem_169e7d0(a1);
  if ((v30_.v30[0] & 1) != 0 && v30_.v31 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v28,
                                  (__int64)v30_.v31);
  }
LABEL_44:
  if ((v32_.v32[0] & 1) != 0 && v32_.v33 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v29,
                                  (__int64)v32_.v33);
  }
}

#pragma GCC visibility pop
