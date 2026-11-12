#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18ab160(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64* GameData_212c8a0;
__int64 EquipInfoItem_AnimalInfo_Unknown70(__int64 a1, __int64* a2);
__int64 LayoutEx_579180(_QWORD);
__int64 LayoutEx_5791a0(_QWORD);
__int64 LayoutEx_57b150(void);
__int64 LayoutEx_57cf40(_QWORD, _QWORD);
__int64 LayoutEx_58d200(_QWORD, _QWORD);
__int64 Layout_13639a0(_QWORD, _QWORD, long double);
__int64 Layout_1364020(_QWORD, _QWORD, _QWORD);
__int64 Layout_579280(_QWORD, _QWORD);
__int64 Pane_58dee0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(_QWORD, _QWORD, _QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212dfd0;
extern __int64* GameData_212dfc0[2];
extern __int64* GameData_212dfc8;
extern __int64* GameData_2131a68[11];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 GameData_2130ec0[2];
extern __int64 fw_memory_g_heap_manager_ptr;
__attribute__((swiftcall)) void EquipInfoItem_AnimalInfo_16c87e0_alt1(
    PSEUDO_X8 x8_, __int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4,
    __n128 result) __asm__("EquipInfoItem_AnimalInfo_16c87e0");
_BYTE* LayoutEx_58d200_alt1(_BYTE* result, _BYTE*) __asm__("LayoutEx_58d200");
_BYTE* Layout_579280_alt1(_QWORD*, __int64) __asm__("Layout_579280");
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1() __asm__(
    "nn_ui2d_Pane_GetRuntimeTypeInfoStatic");
__int64 LayoutEx_579180_alt1(__int64) __asm__("LayoutEx_579180");
__int64 LayoutEx_5791a0_alt1(__int64) __asm__("LayoutEx_5791a0");
__int64 LayoutEx_57b150_alt1(__int64, __int64, __int64, __int64,
                             __int64) __asm__("LayoutEx_57b150");
__int64 LayoutEx_57cf40_alt1(__int64, __int64) __asm__("LayoutEx_57cf40");
__int64 Pane_58dee0_alt1(__int64 result, __int64) __asm__("Pane_58dee0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void Layout_13639a0_alt1(_QWORD*, __int64) __asm__("Layout_13639a0");
void Layout_1364020_alt1(_QWORD*, __int64, __int64) __asm__("Layout_1364020");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
__attribute__((swiftcall)) void
EquipInfoItem_AnimalInfo_16c87e0(PSEUDO_X8 x8_, __int64 a1, _QWORD** a2,
                                 _BYTE** a3, __int64 a4);

__int64 EquipInfoItem_AnimalInfo_Unknown70(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = result;
      result = *a2;
      if (*a2 != 0) {
        result = GameRoutine_18ab160(
            result,
            *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                       8LL * *(unsigned __int8*)(*(_QWORD*)(a1 + 96) + 1880LL)),
            0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void

EquipInfoItem_AnimalInfo_16c87e0(PSEUDO_X8 x8_, __int64 a1, _QWORD** a2,
                                 _BYTE** a3, __int64 a4)
{
  __int64** a5 = (__int64**)PSEUDO_X8_VALUE(x8_);
  __int64* result;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  atomic_uchar* v16;
  __int64* v17;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _BYTE* v23;
  __int64 i;
  __int64 v25;
  __int64** v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  char v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  __int64* v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  struct {
    __int64* v45;
    __int64 v46;
  } v45_;
  struct {
    __int64* v47;
    __int64 v48;
  } v47_;

  result = a2[1];
  if (result == nullptr) {
    goto LABEL_63;
  }
  result = (__int64*)std___1___shared_weak_count_lock_alt1((__int64)result);
  if (result == nullptr) {
    goto LABEL_63;
  }
  v11 = *a2;
  v12 = (__int64)result;
  if (*a2 == nullptr) {
    goto LABEL_60;
  }
  v13 = v11[1];
  if (*(_QWORD*)(*(_QWORD*)(v13 + 24) + 24LL) == 0) {
    goto LABEL_60;
  }
  v14 = (_QWORD*)a4;
  v15 = *(_BYTE*)(a1 + 24) != 0 ? a1 + 152 : 0LL;
  v43 = v15;
  v16 = (atomic_uchar*)GameData_212dfd0;
  v17 = GameData_212dfc8;
  do {
    if ((atomic_load_explicit(v16, memory_order_acquire) & 1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)v16) != 0) {
      *v17 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
      __cxa_guard_release_alt1((__int64)v16);
    }
    result = (__int64*)(*(__int64 (**)(_QWORD*))(*v14 + 16LL))(v14);
    if (result == v17) {
      goto LABEL_21;
    }
    do {
      result = (__int64*)*result;
    } while (result != v17 && result != nullptr);
    if (result != nullptr) {
    LABEL_21:
      v19 = v14[29];
      if (v13 == 0) {
        goto LABEL_60;
      }
      goto LABEL_24;
    }
    v14 = (_QWORD*)v14[3];
  } while (v14 != nullptr);
  v19 = v43;
  if (v13 == 0) {
    goto LABEL_60;
  }
LABEL_24:
  if (*(_QWORD*)(*(_QWORD*)(v13 + 24) + 24LL) == 0) {
    goto LABEL_60;
  }
  v20 = *game_g_frame_clock_ptr[0];
  result = (__int64*)LayoutEx_579180_alt1(96);
  if (result == nullptr) {
    goto LABEL_60;
  }
  v21 = (__int64)result;
  v22 = GameData_2130ec0[0];
  result[2] = (__int64)(result + 1);
  v44 = v19;
  *result = v22 + 16;
  result[1] = (__int64)(result + 1);
  result[9] = (__int64)(result + 9);
  result[10] = (__int64)(result + 9);
  LayoutEx_57b150_alt1((__int64)result, v20 + 568, v13, v19, 0);
  v23 = *(_BYTE**)(v21 + 24);
  LayoutEx_58d200_alt1(v23, *a3);
  Pane_58dee0_alt1(a4, (__int64)v23);
  for (i = *(_QWORD*)(v13 + 80); i != v13 + 72; i = *(_QWORD*)(i + 8)) {
    v25 = LayoutEx_57cf40_alt1(v21, i - 40);
    if (v25 != 0) {
      Layout_1364020_alt1((_QWORD*)a1, i - 216, v25);
    }
  }
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, __int64))(
      *v11 + 16LL))((void*)(&v45_.v45), v11, v21);
  result = v45_.v45;
  if (v45_.v45 != nullptr &&
      (result = (__int64*)__dynamic_cast(v45_.v45, GameData_212dfc0[0],
                                         GameData_2131a68[0], 0)) != nullptr) {
    v47_.v47 = result;
    v47_.v48 = v45_.v46;
    v26 = &v45_.v45;
  }
  else {
    v26 = &v47_.v47;
  }
  *v26 = nullptr;
  v26[1] = nullptr;
  v27 = v45_.v46;
  if (v45_.v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v45_.v46 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    result = (__int64*)std___1___shared_weak_count___release_weak_alt2(v27);
  }
  v28 = v47_.v47;
  if (v47_.v47 == nullptr) {
    v36 = v47_.v48;
    if (v47_.v48 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v47_.v48 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
      result = (__int64*)std___1___shared_weak_count___release_weak_alt2(v36);
    }
    v37 = v44 + 72;
    if (*(_QWORD*)(v44 + 80) != v44 + 72) {
      v38 = *(_QWORD**)(*(_QWORD*)v37 + 16LL);
      if (v38 == (_QWORD*)v21) {
        v39 = *game_g_frame_clock_ptr[0];
        Layout_13639a0_alt1((_QWORD*)a1, *(_QWORD*)(*(_QWORD*)v37 + 16LL));
        v40 = *(__int64**)v37;
        v41 = *(__int64**)(*(_QWORD*)v37 + 8LL);
        v42 = *v41;
        *(_QWORD*)(**(_QWORD**)v37 + 8LL) = v41;
        *v41 = *v40;
        *(_QWORD*)(v42 + 8) = v40;
        *v40 = v42;
        Layout_579280_alt1(v38, v39 + 568);
        (*(void (**)(_QWORD*))(*v38 + 8LL))(v38);
        result = (__int64*)LayoutEx_5791a0_alt1((__int64)v38);
      }
    }
  LABEL_60:
    v35 = 0;
    goto LABEL_61;
  }
  v29 = v47_.v48;
  v45_.v45 = v47_.v47;
  v45_.v46 = v47_.v48;
  if (v47_.v48 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v47_.v48 + 8), 1u,
                              memory_order_relaxed);
  }
  v30 = *(_QWORD*)(a1 + 2280);
  v31 = a1 + 2272;
  if (v30 == a1 + 2272) {
    goto LABEL_44;
  }
  while (*(__int64**)(v30 + 16) != v28) {
    v30 = *(_QWORD*)(v30 + 8);
    if (v30 == v31) {
      goto LABEL_44;
    }
  }
  if (v30 == v31) {
  LABEL_44:
    v32 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    v32[2] = v28;
    v32[3] = v29;
    if (v29 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                memory_order_relaxed);
    }
    v33 = *(_QWORD*)(a1 + 2272);
    *v32 = v33;
    v32[1] = v31;
    *(_QWORD*)(v33 + 8) = v32;
    *(_QWORD*)(a1 + 2272) = v32;
    ++*(_QWORD*)(a1 + 2288);
    result = (__int64*)(*(__int64 (**)(__int64*, __int64**))(*v28 + 128))(
        v28, &v45_.v45);
    v29 = v45_.v46;
  }
  if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    result = (__int64*)std___1___shared_weak_count___release_weak_alt2(v29);
  }
  v34 = v47_.v48;
  *a5 = v47_.v47;
  a5[1] = (__int64*)v34;
  if (v34 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 16), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
      result = (__int64*)std___1___shared_weak_count___release_weak_alt2(v34);
    }
  }
  v35 = 1;
LABEL_61:
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if ((v35 & 1) != 0) {
      result;
      return;
    }
    goto LABEL_63;
  }
  (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
  result = (__int64*)std___1___shared_weak_count___release_weak_alt2(v12);
  if ((v35 & 1) == 0) {
  LABEL_63:
    *a5 = nullptr;
    a5[1] = nullptr;
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
