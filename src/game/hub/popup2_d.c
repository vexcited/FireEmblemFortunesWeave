#include "decomp/pseudo_helpers.h"

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
__int64 Popup2D_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "Popup2D_DeletingDestructor");
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
void Popup2D_Unknown2_alt1(__int64 a1) __asm__("Popup2D_Unknown2");
__int64 GameRoutine_1634510_alt1(__int64 result) __asm__("GameRoutine_1634510");
__int64 GameRoutine_1634960_alt1(__int64 result) __asm__("GameRoutine_1634960");
__int64 GameRoutine_1634f50_alt1(__int64 result) __asm__("GameRoutine_1634f50");
__int64 GameRoutine_1635160_alt1(__int64 result) __asm__("GameRoutine_1635160");
__int64 PopupController_d7c9e0_alt1(_QWORD*) __asm__("PopupController_d7c9e0");
__int64 ProcHubUI_16340d0(__int64 result);
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
__int64 Popup2D_Unknown2(__int64 a1);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Popup2D_DeletingDestructor(_QWORD* a1);

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

void Popup2D_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;

  *a1 = GameData_212f0b8[0] + 2;
  Popup2D_d7a520(GameData_220b6e0, (__int64)a1);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, (__int64)a1);
}

__int64 Popup2D_Unknown2(__int64 a1)
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
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  float v18;
  __int64 v19;
  int v20;
  int v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  char* v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  char* v32;
  __int64 v33;
  unsigned __int64 v34;
  __int128* v35;
  __int64 v36;
  __int128 v37;
  char v38;
  int v39;
  float32x4_t* v40;
  float32x4_t* v41;
  float32x4_t v42;
  int8x16_t v43;
  _QWORD* v44;
  __int64 v45;
  int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  int v52;
  __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  const char* v56;
  const char* v57;
  __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  const char* v61;
  int v62;
  char* v63;
  int v64;
  char* v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  struct {
    __int64 v75;
    int v76;
    char gap12_[4];
    __int64 v77;
    unsigned __int64 v78;
    __int64 v79;
  } v75_;
  _QWORD v80[2];
  int v81;
  char* v82;
  unsigned __int64 v83;
  __int128 v84;
  __int128 v85;
  __int64 v86;
  int v87;
  const char* v88;
  __int64 v89;
  int v90;
  __int64 v91;
  __int16 v92;

  v2 = ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1) & 1) == 0;
  v3 = 32;
  if (!v2) {
    v3 = 24;
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + v3))(a1, 0);
  v4 = *(_QWORD*)(a1 + 48);
  v5 = 0x1.0000000000000p+0f;
  v6 = *(_DWORD*)(v4 + 208) | *(_DWORD*)(v4 + 120);
  if ((v6 & 1) != 0 || (v6 & 0x406) == 0) {
    v7 = *(_QWORD*)(v4 + 32);
    if (v7 != 0) {
      v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 24) + 8LL) + 328LL);
      GameRoutine_d60750(v8);
      v5 = *(float*)(v8 + 376);
    }
  }
  *(float*)(a1 + 24) = v5;
  UIBase_da1870((float*)a1);
  v9 = *(_QWORD*)(a1 + 48);
  if (*(_DWORD*)(v9 + 96) != 0) {
    v10 = *(_QWORD*)(v9 + 308);
    if ((v10 & 0x100000000LL) == 0 || (int)v10 > 2) {
      v11 = *(float*)(a1 + 60);
      v18 = fabsf(
          (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                            104LL) *
                  0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f);
      if (v11 <= 0x0.0p+0f) {
        if (v11 >= 0x0.0p+0f) {
          goto LABEL_12;
        }
        v11 = v11 + v18;
        if (v11 <= 0x0.0p+0f) {
          goto LABEL_12;
        }
      }
      else {
        v11 = v11 - v18;
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
  result = Popup2D_f7f870(a1);
  if ((_DWORD)result != 0) {
    *(_DWORD*)(a1 + 56) = result;
  }
  if (*(float*)(a1 + 12) <= 0x0.0p+0f) {
    *(_DWORD*)(a1 + 56) = 0;
    return result;
  }
  v75_.v76 = 0;
  v75_.v77 = 0;
  v75_.v78 = 0;
  v75_.v79 = 0;
  memset(v80, 0, 11);
  v81 = 0;
  v82 = nullptr;
  v83 = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
    v71 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v71;
    __cxa_guard_release_alt1((__int64)&GameData_21a6130);
  }
  v84 = GameData_21a6120;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
    v72 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v72;
    __cxa_guard_release_alt1((__int64)&GameData_21a6130);
  }
  v87 = 0;
  v88 = nullptr;
  v89 = 0;
  v92 = 0;
  v86 = 0;
  v75_.v75 = a1;
  v85 = GameData_21a6120;
  v90 = 1;
  v91 = 0x3F8000003F800000LL;
  v13 = *(_QWORD*)(a1 + 48);
  v14 = *(_QWORD*)(v13 + 24);
  if (v14 != 0) {
    v15 = *(_QWORD*)(v13 + 16);
    v16 = *(_QWORD*)(v13 + 24);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                              memory_order_relaxed);
    v17 = std___1___shared_weak_count_lock_alt1(v16);
    std___1___shared_weak_count___release_weak_alt2(v14);
    if (v17 != 0) {
      LOBYTE(v14) = v15 != 0 && (*(_BYTE*)(v15 + 1760) & 0x10) != 0;
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak_alt2(v17);
      }
    }
    else {
      LOBYTE(v14) = 0;
    }
  }
  v19 = *(_QWORD*)(a1 + 48);
  BYTE2(v80[1]) = v14;
  v20 = *(_DWORD*)(v19 + 208) | *(_DWORD*)(v19 + 120);
  BYTE1(v80[1]) = (*(_DWORD*)(v19 + 120) & 0x100) != 0;
  v21 = *(unsigned __int8*)(v19 + 160);
  if ((v20 & 1) != 0) {
    v20 = 0;
  }
  v75_.v76 = v20;
  if (v21 == 1) {
    v22 = *(unsigned __int8*)(v19 + 136);
    v23 = v19 + 137;
    v2 = (v22 & 1) == 0;
    v24 = v22 >> 1;
    if (!v2) {
      v23 = *(_QWORD*)(v19 + 152);
      v24 = *(_QWORD*)(v19 + 144);
    }
    v75_.v77 = v23;
    v75_.v78 = v24;
    LOBYTE(v80[1]) = *(_BYTE*)(v19 + 128);
  }
  if (*(_BYTE*)(v19 + 192) == 1) {
    v25 = *(unsigned __int8*)(v19 + 168);
    v26 = v19 + 169;
    v2 = (v25 & 1) == 0;
    v27 = v25 >> 1;
    if (!v2) {
      v26 = *(_QWORD*)(v19 + 184);
      v27 = *(_QWORD*)(v19 + 176);
    }
    v75_.v79 = v26;
    v80[0] = v27;
  }
  v81 = 32;
  v28 = *(_QWORD*)(v19 + 200);
  v82 = &GameData_1a9f09e;
  v83 = 0;
  if (v28 != 0) {
    v29 = (char*)(v28 + 9);
    v81 = *(_DWORD*)v28;
    v30 = *(unsigned __int8*)(v28 + 8);
    v33 = v28 + 16;
    v31 = *(_QWORD*)(v28 + 16);
    v32 = *(char**)(v33 + 8);
    v2 = (v30 & 1) == 0;
    v34 = v30 >> 1;
    if (v2) {
      v31 = v34;
    }
    else {
      v29 = v32;
    }
    v82 = v29;
    v83 = v31;
  }
  if (*(_BYTE*)(v19 + 64) == 1) {
    v35 = (__int128*)(v19 + 48);
  }
  else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                 memory_order_acquire) &
            1) != 0) {
    v35 = &GameData_21a6120;
  }
  else {
    v35 = &GameData_21a6120;
    if (__cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
      v73 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v73;
      __cxa_guard_release_alt1((__int64)&GameData_21a6130);
    }
  }
  v36 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)&v37 = *(_QWORD*)v35;
  *((_QWORD*)&v37 + 1) = (unsigned int)*((_QWORD*)v35 + 1);
  v84 = v37;
  v85 = *(unsigned __int64*)(v36 + 80);
  v86 = *(_QWORD*)(v36 + 96);
  v38 = Popup2D_f7fa70(a1);
  v39 = *(_DWORD*)(a1 + 12);
  LOBYTE(v92) = v38 & 1;
  v40 = *(float32x4_t**)(a1 + 48);
  LODWORD(v91) = v39;
  if (LANES128(v40[4]).n128_u8[0] == 1) {
    v41 = v40 + 3;
  }
  else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                 memory_order_acquire) &
            1) != 0) {
    v41 = (float32x4_t*)&GameData_21a6120;
  }
  else {
    v41 = (float32x4_t*)&GameData_21a6120;
    if (__cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
      v74 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v74;
      __cxa_guard_release_alt1((__int64)&GameData_21a6130);
    }
  }
  v42 = vsubq_f32(*v41, *(float32x4_t*)(*(_QWORD*)GameData_212dc38[0] + 32LL));
  v43 = vmulq_f32(v42, v42);
  LANES128(v43).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v43, v43, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0])))
          .n64_u64[0];
  v44 = *(_QWORD**)(a1 + 48);
  *((float*)&v91 + 1) =
      (float)(fminf(
                  fmaxf((float)(fmaxf(LANES64_OF(
                                          vsqrt_f32(vpadd_f32(
                                              COERCE_AS(
                                                  float32x2_t,
                                                  LANES128(v43).n128_u64[0]),
                                              COERCE_AS(
                                                  float32x2_t,
                                                  LANES128(v43).n128_u64[0]))))
                                              .n64_f32[0] +
                                          -0x1.4000000000000p+2f,
                                      0x0.0p+0f) /
                                -0x1.1800000000000p+5f) +
                            0x1.0000000000000p+0f,
                        0x0.0p+0f),
                  0x1.0000000000000p+0f) *
              0x1.9999980000000p-3f) +
      0x1.99999a0000000p-1f;
  v45 = v44[4];
  if (v45 != 0) {
    v46 = GameRoutine_fb6e10(*(_QWORD*)(v45 + 1232));
    goto LABEL_66;
  }
  v47 = v44[3];
  if (v47 == 0) {
    goto LABEL_65;
  }
  v48 = v44[2];
  v49 = v44[3];
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v47 + 16), 1u,
                            memory_order_relaxed);
  v50 = std___1___shared_weak_count_lock_alt1(v49);
  v46 = std___1___shared_weak_count___release_weak_alt2(v47);
  if (v50 != 0 && v48 != 0) {
    v46 = GameRoutine_fb6e10(*(_QWORD*)(v48 + 1688));
  }
  else if (v50 == 0) {
  LABEL_65:
    v46 = 0;
    goto LABEL_66;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v51 = v46;
    (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
    std___1___shared_weak_count___release_weak_alt2(v50);
    v46 = v51;
  }
  if (v48 == 0) {
    goto LABEL_65;
  }
LABEL_66:
  v90 = v46;
  result = PopupController_d7c9e0_alt1(*(_QWORD**)(a1 + 48));
  v52 = *(_DWORD*)(a1 + 56);
  v87 = result;
  if (v52 > 3) {
    switch (v52) {
    case 4:
      HIBYTE(v92) = 0;
      return ProcHubUI_16340d0((__int64)&v75_.v75);
    case 5:
      return GameRoutine_1634f50_alt1((__int64)&v75_.v75);
    case 6:
      return GameRoutine_1635160_alt1((__int64)&v75_.v75);
    default:
      break;
    }
  }
  else {
    switch (v52) {
    case 1:
      v53 = *(_QWORD*)(a1 + 48);
      v54 = *(unsigned __int8*)(v53 + 232);
      v55 = *(_QWORD*)(v53 + 240);
      if ((v54 & 1) == 0) {
        v55 = v54 >> 1;
      }
      if (v55 != 0) {
        v56 = *(const char**)(v53 + 248);
        v57 = (const char*)(v53 + 233);
        if ((v54 & 1) != 0) {
          v57 = v56;
        }
      }
      else {
        v62 = *(_DWORD*)(v53 + 208) | *(_DWORD*)(v53 + 120);
        v63 = "MID_Access_AreaChange";
        if ((v62 & 1) != 0) {
          LOBYTE(v62) = 0;
        }
        if ((v62 & 0x40) == 0) {
          v63 = &GameData_1a9f09e;
        }
        if ((v62 & 0x80) != 0) {
          v57 = "MID_Access_ExitPos";
        }
        else {
          v57 = v63;
        }
      }
      v88 = v57;
      return GameRoutine_1634510_alt1((__int64)&v75_.v75);
    case 2:
      v58 = *(_QWORD*)(a1 + 48);
      v59 = *(unsigned __int8*)(v58 + 232);
      v60 = *(_QWORD*)(v58 + 240);
      if ((v59 & 1) == 0) {
        v60 = v59 >> 1;
      }
      if (v60 != 0) {
        if ((v59 & 1) != 0) {
          v61 = *(const char**)(v58 + 248);
        }
        else {
          v61 = (const char*)(v58 + 233);
        }
      }
      else {
        v64 = *(_DWORD*)(v58 + 208) | *(_DWORD*)(v58 + 120);
        v65 = "MID_Access_AreaChange";
        if ((v64 & 1) != 0) {
          LOBYTE(v64) = 0;
        }
        if ((v64 & 0x40) == 0) {
          v65 = &GameData_1a9f09e;
        }
        if ((v64 & 0x80) != 0) {
          v61 = "MID_Access_ExitPos";
        }
        else {
          v61 = v65;
        }
      }
      v66 = *(unsigned __int8*)(v58 + 256);
      v67 = v66 >> 1;
      v2 = (v66 & 1) == 0;
      v68 = *(_QWORD*)(v58 + 264);
      v69 = *(_QWORD*)(v58 + 272);
      v70 = v58 + 257;
      if (v2) {
        v68 = v67;
      }
      else {
        v70 = v69;
      }
      if (v68 == 0) {
        v70 = 0;
      }
      v88 = v61;
      v89 = v70;
      return GameRoutine_1634960_alt1((__int64)&v75_.v75);
    case 3:
      HIBYTE(v92) = 1;
      return ProcHubUI_16340d0((__int64)&v75_.v75);
    default:
      break;
    }
  }
  return result;
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
