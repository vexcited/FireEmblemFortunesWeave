#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d7a520(_QWORD, _QWORD);
__int64 GameRoutine_d7c8b0(_QWORD);
__int64 GameRoutine_f7fa20(void);
__int64 GameRoutine_f7fa70(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_220b6e0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212f0b8[5];
__int64 Popup2D_Destructor(_QWORD* a1);
__int64 Popup2D_DeletingDestructor(_QWORD* a1);
__int64 Popup2D_f7f870(__int64 a1);
bool Popup2D_Unknown8(__int64 a1);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_212d310;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dbc8[7];
extern __int64 GameData_212dc68;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
__int64 Popup2D_d7a520(__int64 result, __int64 a2);
__int64 Popup2D_f7fa20(__int64 a1);
__int64 Popup2D_f7fa70(__int64 a1);
__int64 GameRoutine_d60750(__int64 result);
__int64 GameRoutine_fb6e10(__int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 GameData_212dc38[7];
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern char GameData_1a9f09e;
void GameRoutine_16340d0(__int64);
void GameRoutine_1634510(__int64);
void GameRoutine_1634960(__int64);
void GameRoutine_1634f50(__int64);
void GameRoutine_1635160(__int64);
void PopupController_d7c9e0(_QWORD*, long double);
void UIBase_da1870(float*);
void Popup2D_Unknown2(__int64 a1);

__int64 Popup2D_d7a520(__int64 result, __int64 a2)
{
  char* v2;
  char* v3;
  unsigned __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;

  v3 = *(char**)(result + 136);
  v2 = *(char**)(result + 144);
  if (v3 != v2) {
    v4 = v2 - v3 - 8;
    if ((~(_BYTE)v4 & 0x18) != 0) {
      v5 = ((unsigned __int8)((unsigned int)v4 >> 3) + 1) & 3;
      while (*(_QWORD*)v3 != a2) {
        v3 += 8;
        if (--v5 == 0) {
          goto LABEL_6;
        }
      }
    }
    else {
    LABEL_6:
      if (v4 < 0x18) {
        return result;
      }
      for (v3 += 16;; v3 += 32) {
        if (*((_QWORD*)v3 - 2) == a2) {
          v3 -= 16;
          goto LABEL_17;
        }
        if (*((_QWORD*)v3 - 1) == a2) {
          v3 -= 8;
          goto LABEL_17;
        }
        if (*(_QWORD*)v3 == a2) {
          goto LABEL_17;
        }
        if (*((_QWORD*)v3 + 1) == a2) {
          break;
        }
        v6 = v3 + 16;
        if (v6 == v2) {
          return result;
        }
      }
      v3 += 8;
    }
  }

LABEL_17:
  v7 = v3 + 8;
  if (v3 == v2 || v7 == v2) {
    if (v3 != v2) {
    LABEL_28:
      *(_QWORD*)(result + 144) = v3;
    }
  }
  else {
    do {
      if (*(_QWORD*)v7 != a2) {
        *(_QWORD*)v3 = *(_QWORD*)v7;
        v3 += 8;
      }
      v7 += 8;
    } while (v7 != v2);
    if (v3 != *(char**)(result + 144)) {
      goto LABEL_28;
    }
  }
  return result;
}

__int64 Popup2D_Destructor(_QWORD* a1)
{
  *a1 = GameData_212f0b8[0] + 2;
  return GameRoutine_d7a520(GameData_220b6e0, a1);
}

__int64 Popup2D_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;

  *a1 = GameData_212f0b8[0] + 2;
  GameRoutine_d7a520(GameData_220b6e0, a1);
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v1);
}

void Popup2D_Unknown2(__int64 a1)
{
  bool v2;
  __int64 v3;
  __int64 v4;
  float v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  float v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  long double v18;
  float v19;
  __int64 v20;
  int v21;
  int v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  char* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  unsigned __int64 v35;
  __int128* v36;
  __int64 v37;
  __int128 v38;
  char v39;
  int v40;
  float32x4_t* v41;
  float32x4_t* v42;
  float32x4_t v43;
  _QWORD* v44;
  int8x16_t v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  int v52;
  int v53;
  int v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  const char* v58;
  const char* v59;
  __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  const char* v63;
  int v64;
  char* v65;
  int v66;
  char* v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  struct {
    __int64 v77;
    int v78;
    char gap12_[4];
    __int64 v79;
    unsigned __int64 v80;
    __int64 v81;
  } v77_;
  _QWORD v82[2];
  int v83;
  char* v84;
  unsigned __int64 v85;
  __int128 v86;
  __int128 v87;
  __int64 v88;
  int v89;
  const char* v90;
  __int64 v91;
  int v92;
  __int64 v93;
  __int16 v94;

  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v2 = ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1) & 1) == 0,
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v3 = 32;
  if (!v2) {
    v3 = 24;
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + v3))(a1, 0),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v4 = *(_QWORD*)(a1 + 48);
  v5 = 0x1.0000000000000p+0f;
  v6 = *(_DWORD*)(v4 + 208) | *(_DWORD*)(v4 + 120);
  if ((v6 & 1) != 0 || (v6 & 0x406) == 0) {
    v7 = *(_QWORD*)(v4 + 32);
    if (v7 != 0) {
      v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 24) + 8LL) + 328LL);
      GameRoutine_d60750(v8),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v5 = *(float*)(v8 + 376);
    }
  }
  *(float*)(a1 + 24) = v5;
  UIBase_da1870((float*)a1),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v9 = *(_QWORD*)(a1 + 48);
  if (*(_DWORD*)(v9 + 96) != 0) {
    v10 = *(_QWORD*)(v9 + 308);
    if ((v10 & 0x100000000LL) == 0 || (int)v10 > 2) {
      v11 = *(float*)(a1 + 60);
      v19 = fabsf(
          (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                            104LL) *
                  0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f);
      if (v11 <= 0x0.0p+0f) {
        if (v11 >= 0x0.0p+0f) {
          goto LABEL_12;
        }
        v11 = v11 + v19;
        if (v11 <= 0x0.0p+0f) {
          goto LABEL_12;
        }
      }
      else {
        v11 = v11 - v19;
        if (v11 >= 0x0.0p+0f) {
          goto LABEL_12;
        }
      }
      v11 = 0x0.0p+0f;
      goto LABEL_12;
    }
  }
  v11 = *(float*)(a1 + 60);
  if (v11 < 0x1.0000000000000p-1f) {
    v11 = 0x1.0000000000000p-1f;
  }
LABEL_12:
  *(float*)(a1 + 60) = v11;
  v12 = Popup2D_f7f870(a1),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v12 != 0) {
    *(_DWORD*)(a1 + 56) = v12;
  }
  if (*(float*)(a1 + 12) <= 0x0.0p+0f) {
    *(_DWORD*)(a1 + 56) = 0;
    return;
  }
  v77_.v78 = 0;
  v77_.v79 = 0;
  v77_.v80 = 0;
  v77_.v81 = 0;
  memset(v82, 0, 11);
  v83 = 0;
  v84 = nullptr;
  v85 = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v73 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v73;
    __cxa_guard_release(&GameData_21a6130),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v86 = GameData_21a6120;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v74 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v74;
    __cxa_guard_release(&GameData_21a6130),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v89 = 0;
  v90 = nullptr;
  v91 = 0;
  v94 = 0;
  v88 = 0;
  v77_.v77 = a1;
  v87 = GameData_21a6120;
  v92 = 1;
  v93 = 0x3F8000003F800000LL;
  v13 = *(_QWORD*)(a1 + 48);
  v14 = *(_QWORD*)(v13 + 24);
  if (v14 != 0) {
    v15 = *(_QWORD*)(v13 + 16);
    v16 = *(_QWORD*)(v13 + 24);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                              memory_order_relaxed);
    v17 = std___1___shared_weak_count_lock(v16),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    *(__n128*)&v18 = std___1___shared_weak_count___release_weak_alt1(v14),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if (v17 != 0) {
      LOBYTE(v14) = v15 != 0 && (*(_BYTE*)(v15 + 1760) & 0x10) != 0;
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v17 + 16LL))(v17, v18),
            v47 = COERCE_AS(__typeof__(v47),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v17),
            v47 = COERCE_AS(__typeof__(v47),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
    }
    else {
      LOBYTE(v14) = 0;
    }
  }
  v20 = *(_QWORD*)(a1 + 48);
  BYTE2(v82[1]) = v14;
  v21 = *(_DWORD*)(v20 + 208) | *(_DWORD*)(v20 + 120);
  BYTE1(v82[1]) = (*(_DWORD*)(v20 + 120) & 0x100) != 0;
  v22 = *(unsigned __int8*)(v20 + 160);
  if ((v21 & 1) != 0) {
    v21 = 0;
  }
  v77_.v78 = v21;
  if (v22 == 1) {
    v23 = *(unsigned __int8*)(v20 + 136);
    v24 = v20 + 137;
    v2 = (v23 & 1) == 0;
    v25 = v23 >> 1;
    if (!v2) {
      v24 = *(_QWORD*)(v20 + 152);
      v25 = *(_QWORD*)(v20 + 144);
    }
    v77_.v79 = v24;
    v77_.v80 = v25;
    LOBYTE(v82[1]) = *(_BYTE*)(v20 + 128);
  }
  if (*(_BYTE*)(v20 + 192) == 1) {
    v26 = *(unsigned __int8*)(v20 + 168);
    v27 = v20 + 169;
    v2 = (v26 & 1) == 0;
    v28 = v26 >> 1;
    if (!v2) {
      v27 = *(_QWORD*)(v20 + 184);
      v28 = *(_QWORD*)(v20 + 176);
    }
    v77_.v81 = v27;
    v82[0] = v28;
  }
  v83 = 32;
  v29 = *(_QWORD*)(v20 + 200);
  v84 = &GameData_1a9f09e;
  v85 = 0;
  if (v29 != 0) {
    v30 = (char*)(v29 + 9);
    v83 = *(_DWORD*)v29;
    v31 = *(unsigned __int8*)(v29 + 8);
    v34 = v29 + 16;
    v32 = *(_QWORD*)(v29 + 16);
    v33 = *(char**)(v34 + 8);
    v2 = (v31 & 1) == 0;
    v35 = v31 >> 1;
    if (v2) {
      v32 = v35;
    }
    else {
      v30 = v33;
    }
    v84 = v30;
    v85 = v32;
  }
  if (*(_BYTE*)(v20 + 64) == 1) {
    v36 = (__int128*)(v20 + 48);
  }
  else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                 memory_order_acquire) &
            1) != 0) {
    v36 = &GameData_21a6120;
  }
  else {
    v36 = &GameData_21a6120;
    if ((unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
      v75 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v75;
      __cxa_guard_release(&GameData_21a6130),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
  v37 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)&v38 = *(_QWORD*)v36;
  *((_QWORD*)&v38 + 1) = (unsigned int)*((_QWORD*)v36 + 1);
  v86 = v38;
  v87 = *(unsigned __int64*)(v37 + 80);
  v88 = *(_QWORD*)(v37 + 96);
  v39 = Popup2D_f7fa70(a1),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v40 = *(_DWORD*)(a1 + 12);
  LOBYTE(v94) = v39 & 1;
  v41 = *(float32x4_t**)(a1 + 48);
  LODWORD(v93) = v40;
  if (LANES128(v41[4]).n128_u8[0] == 1) {
    v42 = v41 + 3;
  }
  else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                 memory_order_acquire) &
            1) != 0) {
    v42 = (float32x4_t*)&GameData_21a6120;
  }
  else {
    v42 = (float32x4_t*)&GameData_21a6120;
    if ((unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
      v76 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v76;
      __cxa_guard_release(&GameData_21a6130),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
  v43 = vsubq_f32(*v42, *(float32x4_t*)(*(_QWORD*)GameData_212dc38[0] + 32LL));
  v45 = vmulq_f32(v43, v43);
  LANES128(v45).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v45, v45, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0])))
          .n64_u64[0];
  LANES128(v45).n128_u64[0] =
      LANES64_OF(vsqrt_f32(vpadd_f32(
                     COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0]))))
          .n64_u64[0];
  v44 = *(_QWORD**)(a1 + 48);
  PSEUDO_LOW_LANE128(
      v45, n128_f32,
      (float)(fminf(fmaxf((float)(fmaxf(LANES128(v45).n128_f32[0] +
                                            -0x1.4000000000000p+2f,
                                        0x0.0p+0f) /
                                  -0x1.1800000000000p+5f) +
                              0x1.0000000000000p+0f,
                          0x0.0p+0f),
                    0x1.0000000000000p+0f) *
              0x1.9999980000000p-3f) +
          0x1.99999a0000000p-1f);
  HIDWORD(v93) = LANES128(v45).n128_u32[0];
  v46 = v44[4];
  if (v46 != 0) {
    v47 = GameRoutine_fb6e10(*(_QWORD*)(v46 + 1232)),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    goto LABEL_66;
  }
  v48 = v44[3];
  if (v48 == 0) {
    goto LABEL_65;
  }
  v49 = v44[2];
  v50 = v44[3];
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v48 + 16), 1u,
                            memory_order_relaxed);
  v51 = std___1___shared_weak_count_lock(v50),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v45 = std___1___shared_weak_count___release_weak_alt1(v48),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v51 != 0 && v49 != 0) {
    v47 = GameRoutine_fb6e10(*(_QWORD*)(v49 + 1688)),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  else if (v51 == 0) {
  LABEL_65:
    v47 = 0;
    goto LABEL_66;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v52 = v47;
    (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v45 = std___1___shared_weak_count___release_weak_alt1(v51),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v47 = v52;
  }
  if (v49 == 0) {
    goto LABEL_65;
  }
LABEL_66:
  v92 = v47;
  PopupController_d7c9e0(*(_QWORD**)(a1 + 48), *(long double*)&v45),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v53 = *(_DWORD*)(a1 + 56);
  v89 = v54;
  if (v53 > 3) {
    switch (v53) {
    case 4:
      HIBYTE(v94) = 0;
      goto LABEL_82;
    case 5:
      GameRoutine_1634f50((__int64)&v77_.v77),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      break;
    case 6:
      GameRoutine_1635160((__int64)&v77_.v77),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      break;
    default:
      break;
    }
  }
  else {
    switch (v53) {
    case 1:
      v55 = *(_QWORD*)(a1 + 48);
      v56 = *(unsigned __int8*)(v55 + 232);
      v57 = *(_QWORD*)(v55 + 240);
      if ((v56 & 1) == 0) {
        v57 = v56 >> 1;
      }
      if (v57 != 0) {
        v58 = *(const char**)(v55 + 248);
        v59 = (const char*)(v55 + 233);
        if ((v56 & 1) != 0) {
          v59 = v58;
        }
      }
      else {
        v64 = *(_DWORD*)(v55 + 208) | *(_DWORD*)(v55 + 120);
        v65 = "MID_Access_AreaChange";
        if ((v64 & 1) != 0) {
          LOBYTE(v64) = 0;
        }
        if ((v64 & 0x40) == 0) {
          v65 = &GameData_1a9f09e;
        }
        if ((v64 & 0x80) != 0) {
          v59 = "MID_Access_ExitPos";
        }
        else {
          v59 = v65;
        }
      }
      v90 = v59;
      GameRoutine_1634510((__int64)&v77_.v77),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      break;
    case 2:
      v60 = *(_QWORD*)(a1 + 48);
      v61 = *(unsigned __int8*)(v60 + 232);
      v62 = *(_QWORD*)(v60 + 240);
      if ((v61 & 1) == 0) {
        v62 = v61 >> 1;
      }
      if (v62 != 0) {
        if ((v61 & 1) != 0) {
          v63 = *(const char**)(v60 + 248);
        }
        else {
          v63 = (const char*)(v60 + 233);
        }
      }
      else {
        v66 = *(_DWORD*)(v60 + 208) | *(_DWORD*)(v60 + 120);
        v67 = "MID_Access_AreaChange";
        if ((v66 & 1) != 0) {
          LOBYTE(v66) = 0;
        }
        if ((v66 & 0x40) == 0) {
          v67 = &GameData_1a9f09e;
        }
        if ((v66 & 0x80) != 0) {
          v63 = "MID_Access_ExitPos";
        }
        else {
          v63 = v67;
        }
      }
      v68 = *(unsigned __int8*)(v60 + 256);
      v69 = v68 >> 1;
      v2 = (v68 & 1) == 0;
      v70 = *(_QWORD*)(v60 + 264);
      v71 = *(_QWORD*)(v60 + 272);
      v72 = v60 + 257;
      if (v2) {
        v70 = v69;
      }
      else {
        v72 = v71;
      }
      if (v70 == 0) {
        v72 = 0;
      }
      v90 = v63;
      v91 = v72;
      GameRoutine_1634960((__int64)&v77_.v77),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      break;
    case 3:
      HIBYTE(v94) = 1;
    LABEL_82:
      GameRoutine_16340d0((__int64)&v77_.v77),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      break;
    default:
      break;
    }
  }
}

__int64 Popup2D_f7f870(__int64 a1)
{
  __int64 v1;
  int v2;
  __int16 v3;
  unsigned __int64 v4;
  int v5;
  unsigned __int64 v6;
  bool v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  bool v11;
  bool v12;
  unsigned int v13;
  bool v15;

  v1 = *(_QWORD*)(a1 + 48);
  v2 = *(_DWORD*)(v1 + 208) | *(_DWORD*)(v1 + 120);
  if ((v2 & 1) != 0) {
    v3 = 0;
  }
  else {
    v3 = *(_WORD*)(v1 + 208) | *(_WORD*)(v1 + 120);
  }
  if ((v3 & 0x20) != 0) {
    return 6;
  }
  v4 = *(unsigned __int8*)(v1 + 232);
  v5 = *(_DWORD*)(v1 + 96);
  if ((v4 & 1) != 0) {
    v6 = *(_QWORD*)(v1 + 240);
  }
  else {
    v6 = v4 >> 1;
  }
  v8 = (v3 & 0xC0) == 0 && v6 == 0;
  if (*(_QWORD*)(v1 + 32) == 0) {
    v15 = !v8;
    if (v5 >= 3) {
      v15 = false;
    }
    if (!v15) {
      goto LABEL_32;
    }
    return 1;
  }
  if (v5 > 1 || *(float*)(a1 + 60) <= 0.0) {
    if (v5 > 2) {
      v8 = true;
    }
    if (v8) {
      goto LABEL_32;
    }
    return 1;
  }
  v9 = *(unsigned __int8*)(v1 + 256);
  if ((v9 & 1) != 0) {
    v10 = *(_QWORD*)(v1 + 264);
  }
  else {
    v10 = v9 >> 1;
  }
  v11 = v10 == 0;
  v12 = v10 == 0 && v8;
  if (v11) {
    v13 = 1;
  }
  else {
    v13 = 2;
  }
  if (!v12) {
    return v13;
  }

LABEL_32:
  if ((v2 & 1) == 0 && (v2 & 0x406) != 0) {
    if (v5 >= 1 && *(float*)(v1 + 100) >= 2.0) {
      return 3;
    }
    return 4;
  }
  if ((v3 & 0xAC0) != 0) {
    if (v5 <= 2) {
      if (GameRoutine_f7fa20() != 0) {
        return 1;
      }
      else {
        return 4;
      }
    }
  }
  else if (v5 <= 1 && (v3 & 8) != 0) {
    return 4;
  }
  if ((GameRoutine_f7fa70(a1) & 1) != 0) {
    return 5;
  }
  else {
    return 0;
  }
}

bool Popup2D_Unknown8(__int64 a1)
{
  return (GameRoutine_d7c8b0(*(_QWORD*)(a1 + 48)) & 1) != 0 &&
         *(_BYTE*)(*(_QWORD*)(a1 + 48) + 88LL) == 1 &&
         (unsigned int)Popup2D_f7f870(a1) != 0;
}

__int64 Popup2D_f7fa20(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64 result;
  int v4;
  __int64 v5;

  v1 = *(_QWORD*)(a1 + 48);
  v2 = *(unsigned __int8*)(v1 + 232);
  if ((v2 & 1) != 0) {
    result = *(_QWORD*)(v1 + 240);
  }
  else {
    result = v2 >> 1;
  }
  if (result == 0) {
    v4 = *(_DWORD*)(v1 + 208) | *(_DWORD*)(v1 + 120);
    v5 = 21;
    if ((v4 & 1) != 0) {
      LOBYTE(v4) = 0;
    }
    if ((v4 & 0x40) == 0) {
      v5 = 0;
    }
    if ((v4 & 0x80) != 0) {
      return 18;
    }
    else {
      return v5;
    }
  }
  return result;
}

__int64 Popup2D_f7fa70(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v16;
  float v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;

  v1 = *(_QWORD*)(a1 + 48);
  if (*(int*)(v1 + 96) > 2) {
    goto LABEL_50;
  }
  v2 = GameData_212dbc8[0];
  if (*(int*)(*(_QWORD*)GameData_212dbc8[0] + 32LL) > 0 ||
      *(_DWORD*)(*(_QWORD*)GameData_212dbc8[0] + 16LL) > 0) {
    goto LABEL_50;
  }
  v4 = GameData_212dc68;
  v5 = *(_QWORD*)(*(_QWORD*)GameData_212dc68 + 96LL);
  if (game_ProcGameSkipView_instance_ != 0 &&
      (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) -
              1 <=
          2) {
    v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v7 = (v6 & 8) != 0 ? 2 : 3;
    if ((v7 & v6) == 0) {
      goto LABEL_50;
    }
  }
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    v8 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    if (v8 != 0 && *(_QWORD*)(v8 + 40) != 0) {
      goto LABEL_50;
    }
  }
  v9 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
  if (v9 != 0 && *(_QWORD*)(v9 + 40) != 0) {
    goto LABEL_50;
  }
  v10 = GameData_212dbb8[0];
  if (*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 10LL) != 1) {
    goto LABEL_50;
  }
  v11 = 0;
  v12 = GameData_212d310;
  if (*(int*)(*(_QWORD*)GameData_212d310 + 24LL) > 0 ||
      *(float*)(v5 + 72) > 0.0 || (*(_BYTE*)(v5 + 76) & 1) != 0) {
    return v11 & 1;
  }
  if (*(_BYTE*)(v1 + 217) != 1) {
    goto LABEL_50;
  }
  v13 = *(_QWORD*)(v1 + 24);
  if (v13 == 0) {
    goto LABEL_50;
  }
  v14 = *(_QWORD*)(v1 + 16);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                            memory_order_relaxed);
  v16 = std___1___shared_weak_count_lock(v13);
  std___1___shared_weak_count___release_weak(v13);
  if (v16 == 0 || v14 == 0) {
    if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak(v16);
    }
    goto LABEL_50;
  }
  v17 = *(float*)(v14 + 1756);
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  if (v17 > 0.0) {
    goto LABEL_50;
  }
  v11 = 0;
  if (*(int*)(*(_QWORD*)v2 + 32LL) > 0 || *(int*)(*(_QWORD*)v2 + 16LL) > 0) {
    return v11 & 1;
  }
  if ((v18 = *(_QWORD*)(*(_QWORD*)v4 + 96LL),
       game_ProcGameSkipView_instance_ != 0) &&
          (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                            152) -
                  1 <=
              2 &&
          (((v19 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v20 = 2)
               : (v20 = 3),
           (v20 & v19) == 0) ||
      game_hub_ProcHubSeqView_instance_ != 0 &&
          (v21 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408)) != 0 &&
          *(_QWORD*)(v21 + 40) != 0 ||
      (v22 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416)) != 0 &&
          *(_QWORD*)(v22 + 40) != 0 ||
      *(_BYTE*)(*(_QWORD*)v10 + 10LL) != 1) {
  LABEL_50:
    v11 = 0;
    return v11 & 1;
  }
  v11 = 0;
  if (*(int*)(*(_QWORD*)v12 + 24LL) <= 0 && *(float*)(v18 + 72) <= 0.0 &&
      (*(_BYTE*)(v18 + 76) & 1) == 0) {
    v11 = *(_BYTE*)(*(_QWORD*)(a1 + 48) + 305LL) ^ 1;
  }
  return v11 & 1;
}

#pragma GCC visibility pop
