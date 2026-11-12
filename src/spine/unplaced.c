#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_6380e0(__int64, __int64**);
__int64 GameHr_190c920(__int64*, _QWORD*);
__int64 GameRoutine_19131f0(__int64, float);
__int64 GameRoutine_5fc1f0(__int64);
__int64 GameRoutine_64be60();
__int64 SpineModel_19119d0(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 llvm_libcxx_21_libcxx_include___vector_190cb20(_QWORD*, __int64*);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 nn_os_AcquireReadLock(__int64);
__int64 nn_os_ReleaseReadLock(__int64);
__int64 spine_AnimationState_getCurrent(__int64, unsigned __int64);
__int64 spine_Animation_getDuration(_QWORD);
__int64 spine_SlotData_getColor(_QWORD);
__int64 spine_Slot_getColor(_QWORD);
__int64 spine_Slot_getData(_QWORD);
__int64 spine_TrackEntry_getAnimation(void);
__int64 spine_TrackEntry_setAnimationEnd(_QWORD, float);
__int64 spine_TrackEntry_setAnimationLast(_QWORD, float);
__int64 spine_TrackEntry_setLoop(_QWORD, _QWORD);
__int64 spine_TrackEntry_setTrackTime(_QWORD, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
float spine_MathUtil_clamp(float, float, float);
float spine_TrackEntry_getAnimationTime(__int64);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void std___1_locale_Destroy_locale(__int64);
__int64 spine_190b990(__int64 result, char a2);
__int64 spine_190c180(__int64 result);
void spine_19171d0(__int64 a1, __int64 a2, int8x16_t* a3, char a4, char a5);
long double spine_1917380(__int64 a1, __int64 a2, _BYTE* a3, char a4, char a5,
                          float a6, double a7, float a8, float a9, float a10);
__int64 spine_1917700(__int64 a1, unsigned __int8* a2, unsigned int a3);

__int64 spine_190b990(__int64 result, char a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  float v5;
  float v6;
  float v7;
  float v8;

  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  if (*(_BYTE*)(result + 1041) == 1) {
    result = spine_AnimationState_getCurrent(*(_QWORD*)(result + 104), 1u),
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
    if (result != 0) {
      v3 = result;
      result = spine_TrackEntry_getAnimation(),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
      if (result != 0) {
        v4 = result;
        v5 = spine_TrackEntry_getAnimationTime(v3),
        v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
        spine_Animation_getDuration(v4),
            v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
        v7 = 0x1.0000000000000p+1f;
        if (v5 > 0x1.0000000000000p+1f) {
          v7 = 0x1.4000000000000p+2f;
        }
        if (v7 >= v6) {
          v7 = v6;
        }
        if ((a2 & 1) != 0) {
          v8 = v6;
        }
        else {
          v8 = v7;
        }
        spine_TrackEntry_setLoop(v3, a2 & 1),
            v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
        spine_TrackEntry_setAnimationEnd(v3, v8),
            v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
        spine_TrackEntry_setAnimationLast(v3, v5),
            v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
        return spine_TrackEntry_setTrackTime(v3, v5);
      }
    }
  }
  return result;
}

__int64 spine_190c180(__int64 result)
{

#pragma clang fp contract(off)
  __int64* v1;
  __int64* v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64* i;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  __int64 v28;
  __int64* v29;
  __int64* v30;
  char v31;
  __int64* v32;
  __int64* v33;
  __int64 v34;
  int v35;
  __int64 v36;
  int v37;
  bool v38;
  int v39;
  _QWORD* v40;
  _QWORD* v42;
  __int64 v43;
  _QWORD* v44;
  _QWORD* v45;
  __int64 v46;
  __int64* v47;
  __int64* v48;
  char v49;
  __int64* v50;
  __int64* v51;
  __int64 v52;
  int v53;
  int v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;

  v1 = *(__int64**)(result + 24);
  v2 = *(__int64**)(result + 32);
  v3 = (_QWORD*)result;
  v4 = v2;
  if (v1 != v2) {
    while (1) {
      v6 = v1[1];
      if (v6 != 0 && *(_QWORD*)(v6 + 8) == 0) {
        break;
      }
      v5 = *v1;
      v1 += 2;
      result = GameRoutine_19131f0(
          v5, (float)(*(float*)(v3[9] + 104LL) * 0x1.0aef000000000p+4f) *
                  0x1.0624de0000000p-10f);
      if (v1 == v2) {
        goto LABEL_31;
      }
    }
    result = *(_QWORD*)(*v1 + 8);
    if (result != 0) {
      result = SpineModel_19119d0(result);
    }
    v7 = v3[7];
    if (v7 >= v3[8]) {
      result = GameHr_190c920(v3 + 6, v1);
      v3[7] = result;
      if (v1 == v2) {
        goto LABEL_31;
      }
      goto LABEL_13;
    }
    *(_QWORD*)v7 = *v1;
    v8 = v1[1];
    *(_QWORD*)(v7 + 8) = v8;
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
    }
    *(_DWORD*)(v7 + 16) = 2;
    v3[7] = v7 + 24;
  }
  if (v1 == v2) {
    goto LABEL_31;
  }
LABEL_13:
  v9 = v1 + 2;
  if (v1 + 2 == v2) {
    v4 = v1;
  }
  else {
    v4 = v1;
    do {
      v10 = v9[1];
      if (v10 != 0 && *(_QWORD*)(v10 + 8) == 0) {
        result = *(_QWORD*)(*v9 + 8);
        if (result != 0) {
          result = SpineModel_19119d0(result);
        }
        v14 = v3[7];
        if (v14 >= v3[8]) {
          result = GameHr_190c920(v3 + 6, v9);
          v3[7] = result;
        }
        else {
          *(_QWORD*)v14 = *v9;
          v15 = v9[1];
          *(_QWORD*)(v14 + 8) = v15;
          if (v15 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                      memory_order_relaxed);
          }
          *(_DWORD*)(v14 + 16) = 2;
          v3[7] = v14 + 24;
        }
      }
      else {
        result = GameRoutine_19131f0(
            *v9, (float)(*(float*)(v3[9] + 104LL) * 0x1.0aef000000000p+4f) *
                     0x1.0624de0000000p-10f);
        v11 = *v9;
        v12 = v9[1];
        *v9 = 0;
        v9[1] = 0;
        v13 = v4[1];
        *v4 = v11;
        v4[1] = v12;
        if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          result = std___1___shared_weak_count___release_weak(v13);
        }
        v4 += 2;
      }
      v9 += 2;
    } while (v9 != v2);
  }
LABEL_31:
  v16 = (__int64*)v3[4];
  if (v4 != v16) {
    do {
      v17 = *(v16 - 1);
      if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        result = std___1___shared_weak_count___release_weak(v17);
      }
      v16 -= 2;
    } while (v16 != v4);
    v3[4] = v4;
  }
  v18 = (__int64*)*v3;
  v19 = (__int64*)v3[1];
  if ((__int64*)*v3 != v19) {
    while (1) {
      result = llvm_libcxx_21_libcxx_include___vector_190cb20(v3, v18);
      if ((result & 1) != 0) {
        break;
      }
      v18 += 2;
      if (v18 == v19) {
        v18 = v19;
        goto LABEL_51;
      }
    }
  }
  if (v18 != v19) {
    for (i = v18 + 2; i != v19; i += 2) {
      result = llvm_libcxx_21_libcxx_include___vector_190cb20(v3, i);
      if ((result & 1) == 0) {
        v21 = *i;
        v22 = i[1];
        *i = 0;
        i[1] = 0;
        v23 = v18[1];
        *v18 = v21;
        v18[1] = v22;
        if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
          result = std___1___shared_weak_count___release_weak(v23);
        }
        v18 += 2;
      }
    }
  }
LABEL_51:
  v24 = (__int64*)v3[1];
  if (v18 != v24) {
    do {
      v25 = *(v24 - 1);
      if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
        result = std___1___shared_weak_count___release_weak(v25);
      }
      v24 -= 2;
    } while (v24 != v18);
    v3[1] = v18;
  }
  v27 = (_QWORD*)v3[6];
  v26 = (_QWORD*)v3[7];
  if (v27 == v26) {
  LABEL_71:
    v40 = v27 + 3;
    if (v27 == v26 || v40 == v26) {
      v44 = v27;
      goto LABEL_78;
    }
    v44 = v27;
    v59 = v3;
    while (1) {
      v45 = v40;
      result = GameRoutine_19131f0(v27[3], 0x1.a36e2e0000000p-14f);
      v46 = v27[3];
      if (**(_DWORD**)(v46 + 8) != 0) {
        goto LABEL_98;
      }
      v47 = *(__int64**)(v46 + 128);
      v48 = *(__int64**)(v46 + 136);
      if (v47 != v48) {
        v49 = 0;
        do {
          v51 = (__int64*)*v47;
          if (*(_BYTE*)(*v47 + 120) == 1) {
            v52 = *v51;
            nn_os_AcquireReadLock(*v51 + 696);
            v53 = *(_DWORD*)(v52 + 656);
            result = nn_os_ReleaseReadLock(v52 + 696);
            if ((v53 & 8) != 0) {
              result = GameRoutine_5fc1f0(*(_QWORD*)(*v51 + 592));
              v51[1] = result;
              v51[11] = *(_QWORD*)(**(_QWORD**)(result + 40) + 144LL);
              *((_WORD*)v51 + 60) = 256;
            }
          }
          v50 = (__int64*)*v47++;
          v49 |= *((_BYTE*)v50 + 121) ^ 1;
        } while (v47 != v48);
        v3 = v59;
        if ((v49 & 1) != 0) {
          goto LABEL_98;
        }
      }
      v54 = *((_DWORD*)v27 + 10);
      v38 = __OFSUB__(v54, 1);
      v55 = v54 - 1;
      if (v55 < 0 == v38) {
        break;
      }
    LABEL_87:
      v40 = v45 + 3;
      v27 = v45;
      if (v45 + 3 == v26) {
        goto LABEL_78;
      }
    }
    *((_DWORD*)v27 + 10) = v55;
  LABEL_98:
    v56 = *v45;
    v57 = v27[4];
    *v45 = 0;
    v45[1] = 0;
    v58 = v44[1];
    *v44 = v56;
    v44[1] = v57;
    if (v58 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
      result = std___1___shared_weak_count___release_weak(v58);
    }
    *((_DWORD*)v44 + 4) = *((_DWORD*)v27 + 10);
    v44 += 3;
    goto LABEL_87;
  }
  do {
    result = GameRoutine_19131f0(*v27, 0x1.a36e2e0000000p-14f);
    v28 = *v27;
    if (**(_DWORD**)(*v27 + 8LL) == 0) {
      v29 = *(__int64**)(v28 + 128);
      v30 = *(__int64**)(v28 + 136);
      if (v29 == v30) {
        goto LABEL_69;
      }
      v31 = 0;
      do {
        v33 = (__int64*)*v29;
        if (*(_BYTE*)(*v29 + 120) == 1) {
          v34 = *v33;
          nn_os_AcquireReadLock(*v33 + 696);
          v35 = *(_DWORD*)(v34 + 656);
          result = nn_os_ReleaseReadLock(v34 + 696);
          if ((v35 & 8) != 0) {
            result = GameRoutine_5fc1f0(*(_QWORD*)(*v33 + 592));
            v33[1] = result;
            v36 = *(_QWORD*)(**(_QWORD**)(result + 40) + 144LL);
            *((_WORD*)v33 + 60) = 256;
            v33[11] = v36;
          }
        }
        v32 = (__int64*)*v29++;
        v31 |= *((_BYTE*)v32 + 121) ^ 1;
      } while (v29 != v30);
      if ((v31 & 1) == 0) {
      LABEL_69:
        v37 = *((_DWORD*)v27 + 4);
        v38 = __OFSUB__(v37, 1);
        v39 = v37 - 1;
        if (v39 < 0 != v38) {
          goto LABEL_71;
        }
        *((_DWORD*)v27 + 4) = v39;
      }
    }
    v27 += 3;
  } while (v27 != v26);
  v44 = v26;
LABEL_78:
  v42 = (_QWORD*)v3[7];
  if (v44 != v42) {
    do {
      v43 = *(v42 - 2);
      if (v43 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
        result = std___1___shared_weak_count___release_weak(v43);
      }
      v42 -= 3;
    } while (v42 != v44);
    v3[7] = v44;
  }
  return result;
}

void spine_19171d0(__int64 a1, __int64 a2, int8x16_t* a3, char a4, char a5)
{

#pragma clang fp contract(off)
  float* v9;
  int8x16_t v10;
  float* v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  int8x16_t v16;
  float* v17;
  __int64 v18;
  __int64 v19;

  if (a2 != 0) {
    v9 = (float*)spine_Slot_getColor(a2);
    v10 = *a3;
    v11 = v9;
    v12 = HIDWORD(LANES128(*(a3)).n128_u64[0]);
    v13 = LANES128(*(a3)).n128_u64[1];
    if ((a4 & 1) != 0) {
      v9[2] = LANES128(v10).n128_f32[0];
      *((_DWORD*)v9 + 3) = v12;
      *((_DWORD*)v9 + 4) = v13;
      v9[5] = LANES128(v10).n128_f32[3];
      v9[2] = spine_MathUtil_clamp(LANES128(v10).n128_f32[0], 0x0.0p+0f,
                                   0x1.0000000000000p+0f);
      v11[3] = spine_MathUtil_clamp(v11[3], 0x0.0p+0f, 0x1.0000000000000p+0f);
      v11[4] = spine_MathUtil_clamp(v11[4], 0x0.0p+0f, 0x1.0000000000000p+0f);
      v11[5] = spine_MathUtil_clamp(v11[5], 0x0.0p+0f, 0x1.0000000000000p+0f);
      if ((a5 & 1) == 0) {
        return;
      }
      v14 = spine_Slot_getData(a2);
      v15 = spine_SlotData_getColor(v14);
      v16 = *a3;
      v17 = (float*)v15;
      *(_QWORD*)(v15 + 8) = LANES128(*(a3)).n128_u64[0];
      *(_QWORD*)(v15 + 16) = LANES128_OF(vextq_s8(v16, v16, 8u)).n128_u64[0];
    }
    else {
      v9[2] = LANES128(v10).n128_f32[0];
      *((_DWORD*)v9 + 3) = v12;
      *((_DWORD*)v9 + 4) = v13;
      v9[2] = spine_MathUtil_clamp(LANES128(v10).n128_f32[0], 0x0.0p+0f,
                                   0x1.0000000000000p+0f);
      v11[3] = spine_MathUtil_clamp(v11[3], 0x0.0p+0f, 0x1.0000000000000p+0f);
      v11[4] = spine_MathUtil_clamp(v11[4], 0x0.0p+0f, 0x1.0000000000000p+0f);
      v11[5] = spine_MathUtil_clamp(v11[5], 0x0.0p+0f, 0x1.0000000000000p+0f);
      if ((a5 & 1) == 0) {
        return;
      }
      v18 = spine_Slot_getData(a2);
      v19 = spine_SlotData_getColor(v18);
      v16 = *a3;
      v17 = (float*)v19;
      *(_QWORD*)(v19 + 8) = LANES128(*(a3)).n128_u64[0];
      *(_DWORD*)(v19 + 16) = LANES128(v16).n128_u32[2];
    }
    v17[2] = spine_MathUtil_clamp(LANES128(v16).n128_f32[0], 0x0.0p+0f,
                                  0x1.0000000000000p+0f);
    v17[3] = spine_MathUtil_clamp(v17[3], 0x0.0p+0f, 0x1.0000000000000p+0f);
    v17[4] = spine_MathUtil_clamp(v17[4], 0x0.0p+0f, 0x1.0000000000000p+0f);
    v17[5] = spine_MathUtil_clamp(v17[5], 0x0.0p+0f, 0x1.0000000000000p+0f);
  }
}

long double spine_1917380(__int64 a1, __int64 a2, _BYTE* a3, char a4, char a5,
                          float a6, double a7, float a8, float a9, float a10)
{

#pragma clang fp contract(off)
  int8x16_t v10;
  long double result;
  int8x16_t v12;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LOBYTE(a6) = *a3;
  LOBYTE(a8) = a3[1];
  LOBYTE(a9) = a3[2];
  LOBYTE(a10) = a3[3];
  LANES128(v10).n128_f32[0] = (float)LODWORD(a6) / 0x1.fe00000000000p+7f;
  LANES128(v10).n128_f32[1] = (float)LODWORD(a8) / 0x1.fe00000000000p+7f;
  LANES128(v10).n128_f32[2] = (float)LODWORD(a9) / 0x1.fe00000000000p+7f;
  LANES128(v10).n128_f32[3] = (float)LODWORD(a10) / 0x1.fe00000000000p+7f;
  v12 = v10;
  spine_19171d0(a1, a2, &v12, a4, a5),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  return result;
}

__int64 spine_1917700(__int64 a1, unsigned __int8* a2, unsigned int a3)
{
  unsigned __int64 v3;
  bool v5;
  unsigned __int8* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  _BYTE* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v19[7];
  struct {
    _QWORD v20[2];
    unsigned __int64 v21;
    __int64 (*v22)();
    __int64 v23;
  } v20_;
  struct {
    _BYTE v24[256];
    _BYTE* v25;
  } v24_;
  struct {
    __int64* v26;
    __int64 v27;
    _QWORD* v28;
    __int64 v29;
  } v26_;
  struct {
    _BYTE v30[8];
    char v31;
  } v30_;
  struct {
    _QWORD v32[2];
    int v33;
    char gap428_[4];
    __int64 v34;
    __int64 v35;
  } v32_;

  v19[2] = a3;
  v19[3] = 0;
  v3 = *a2;
  v20_.v23 = 0;
  v32_.v33 = 0;
  v20_.v21 = 0;
  v20_.v22 = GameRoutine_64be60;
  v5 = (v3 & 1) == 0;
  v20_.v20[0] = v24_.v24;
  v20_.v20[1] = 256;
  v32_.v32[0] = "{}_{:03}";
  v32_.v32[1] = "";
  v7 = *((_QWORD*)a2 + 1);
  v6 = *((unsigned __int8**)a2 + 2);
  v8 = v3 >> 1;
  v24_.v25 = v24_.v24;
  v30_.v30[0] = 0;
  v30_.v31 = 0;
  if (v5) {
    v6 = a2 + 1;
  }
  else {
    v8 = v7;
  }
  v19[0] = v6;
  v19[1] = v8;
  v19[4] = 109;
  v32_.v34 = 0;
  v32_.v35 = 2;
  v26_.v28 = v19;
  v26_.v29 = 109;
  v26_.v26 = v20_.v20;
  v26_.v27 = 2;
  GameRoutine_6380e0((__int64)v32_.v32, &v26_.v26);
  if (v30_.v31 == 1) {
    std___1_locale_Destroy_locale((__int64)v30_.v30);
  }
  v9 = v20_.v21;
  if (v20_.v21 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v10 = (__int64)v24_.v25;
  if (v20_.v21 >= 0x17) {
    if ((v20_.v21 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v20_.v21 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v12,
                                                16, 0);
    v26_.v27 = v9;
    v26_.v28 = v11;
    v26_.v26 = (__int64*)(v12 | 1);
  }
  else {
    LOBYTE(v26_.v26) = 2 * v20_.v21;
    v11 = (char*)&v26_.v26 + 1;
    if (v20_.v21 == 0) {
      goto LABEL_15;
    }
  }
  memmove((__int64)v11, v10, v9);
LABEL_15:
  v13 = v24_.v25;
  v11[v9] = 0;
  if (v13 != v24_.v24 && v13 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                  (__int64)v13);
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v15 = *(_QWORD*)(a1 + 16);
    if (v15 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v15);
    }
  }
  v17 = v26_.v27;
  *(_QWORD*)a1 = v26_.v26;
  *(_QWORD*)(a1 + 8) = v17;
  *(_QWORD*)(a1 + 16) = v26_.v28;
  return a1;
}

#pragma GCC visibility pop
