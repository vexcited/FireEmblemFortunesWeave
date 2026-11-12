#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__int64 Element_1884860(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Element_1886290(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_1888c80(__int64, __int64, __int64);
__int64 GameRoutine_576600(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 Pane_58f8a0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(void);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN* GameData_21318f0;
extern __int64 (*GameData_2103f90[])();
extern __int64 (*GameData_21040f8[])();
extern __int64 (*GameData_2104200[])();
extern __int64 (*GameData_2104250[])();
extern __int64 (*GameData_21043b8[])();
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* GameData_21318e8;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_2104118;
extern __int64 GameData_2104128;
extern __int64 GameData_212d690;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_2104110;
extern char* GameData_2104120;
__int64 FloatingHelp_18a4560(__int64 a1, int a2);
__attribute__((swiftcall)) void FloatingHelp_18a4c80(PSEUDO_X8 x8_, __int64 a1,
                                                     __int64 a2, __int64 a3);
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
float ui_LayoutAccessor_SetTranslate(__int64*, __int64);
void __attribute__((noreturn)) GameRoutine_8123d0();
void FloatingHelp_18a55a0(__int64 a1, float a2);
_QWORD* Element_1886290_alt1(__int64, const char**) __asm__("Element_1886290");
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1() __asm__(
    "nn_ui2d_Pane_GetRuntimeTypeInfoStatic");
__int64 Element_1884860_alt1(__int64, __int64, __int64,
                             __int64) __asm__("Element_1884860");
__int64 GameRoutine_576600_alt1(__int64,
                                const char*) __asm__("GameRoutine_576600");
__int64 LayoutEx_579160_alt1(__int64, __int64) __asm__("LayoutEx_579160");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_control_1888c80(__int64, __int64, __int64);
extern void (*GameData_2103f90_alt1)(__int64) __asm__("GameData_2103f90");
extern void (*GameData_2104250_alt1)(__int64) __asm__("GameData_2104250");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__attribute__((swiftcall)) void Pane_58dfa0(PSEUDO_X8, __int64);
__int64* Element_1886290_alt2(__int64, const char**) __asm__("Element_1886290");
__int64 GameHr_1562680(__int64 result, const char*, float);
double ui_LayoutAccessor_GetTranslate(__int64*);
extern _UNKNOWN* GameData_212dfe0;
extern __int64* GameData_212dfd8;
__int64 FloatingHelp_18a4fa0(__int64 a1, __int64** a2);

__int64 FloatingHelp_18a4560(__int64 a1, int a2)
{
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  const char* v16;
  int v17;
  _BYTE v18[24];
  __int64* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;

  nn_util_SNPrintf(v18, 24, "T_StatusDetail_Txt%02d", 1);
  v4 = msg_MessageManager_instance__ptr[0];
  v25 = -1;
  v26 = -1;
  v27 = -1;
  v28 = -1;
  v5 = *msg_MessageManager_instance__ptr[0];
  v6 = GameData_212e348;
  v29 = -1;
  v30 = -1;
  v31 = -1;
  v32 = -1;
  v33 = -1;
  v34 = -1;
  v35 = -1;
  v36 = -1;
  v19 = GameData_212e348 + 2;
  v20 = 0xFFFF0001FFFF0000LL;
  v21 = 0xFFFF0004FFFF0002LL;
  v22 = 0xFFFF0006FFFF0005LL;
  v37 = 8;
  v23 = -65529;
  v24 = -65528;
  v7 = GameRoutine_a4dbe0(v5, "MID_XHelp_Class", 0, &v19);
  if (v7 != 0) {
    v8 = v7;
    v9 = ui_LayoutAccessor_FindTextBox(a1, v18);
    if (v9 != 0) {
      GameRoutine_156c5d0(v9, v8, 0);
    }
  }
  nn_util_SNPrintf(v18, 24, "L_StatusDetail_Num%02d", 1);
  LayoutAccessor_1560070((void*)(&v19), a1, v18);
  result = v20;
  if (v20 != 0) {
    v11 = std___1___shared_weak_count_lock(v20);
    v12 = v19;
    result = v20;
    if (v20 != 0) {
      result = std___1___shared_weak_count___release_weak(v20);
    }
    if (v11 == 0 || v12 == nullptr) {
      if (v11 == 0) {
        return result;
      }
      goto LABEL_19;
    }
    ui_LayoutAccessor_SetPaneVisible(v12, "IconUpDown", 0);
    ui_LayoutAccessor_SetPaneVisible(v12, "IconMax", 0);
    v13 = ui_LayoutAccessor_FindPane(v12, "T_Num");
    if (v13 != 0) {
      v14 = __dynamic_cast(v13, GameData_212d670[0], GameData_212d690, 0);
      if ((a2 & 0x80000000) == 0) {
        goto LABEL_11;
      }
    }
    else {
      v14 = 0;
      if ((a2 & 0x80000000) == 0) {
      LABEL_11:
        v15 = *v4;
        v25 = -1;
        v26 = -1;
        v27 = -1;
        v28 = -1;
        v29 = -1;
        v30 = -1;
        v31 = -1;
        v32 = -1;
        v33 = -1;
        v34 = -1;
        v35 = -1;
        v36 = -1;
        v19 = v6 + 2;
        v20 = 0xFFFF0001FFFF0000LL;
        v21 = 0xFFFF0004FFFF0002LL;
        v22 = 0xFFFF0006FFFF0005LL;
        v37 = 8;
        v23 = -65529;
        v24 = -65528;
        v16 = (const char*)GameRoutine_a4dbe0(v15, "MID_Sys_Plus", 0, &v19);
        game_util_Format("%s%d", v16, a2);
        result = GameRoutine_156c910(v14, "%s", (_BYTE*)((_UNKNOWN*)0x0LL) + 1);
        if (v14 == 0) {
        LABEL_19:
          if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
            return std___1___shared_weak_count___release_weak(v11);
          }
          return result;
        }
      LABEL_17:
        v17 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
        result = Pane_58f8a0(v14);
        if (result != 0) {
          *(_DWORD*)(result + 12) = v17;
        }
        goto LABEL_19;
      }
    }
    result = GameRoutine_156c910(v14, "%d", 1);
    if (v14 == 0) {
      goto LABEL_19;
    }
    goto LABEL_17;
  }
  return result;
}

__attribute__((swiftcall)) void FloatingHelp_18a4c80(PSEUDO_X8 x8_, __int64 a1,
                                                     __int64 a2, __int64 a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  const char* v15;
  const char* v16;
  _DWORD* v17;
  atomic_uchar* v18;
  unsigned __int8 explicit;
  __int64* v20;
  __int64* v21;
  int v23;
  _QWORD* v24;
  __int64* v25;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  struct {
    const char* v34;
    unsigned __int64 v35;
  } v34_;

  v8 = (_QWORD*)LayoutEx_579160_alt1(1128, 8);
  v9 = (__int64)(v8 + 3);
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_2104200;
  Element_1884860_alt1((__int64)(v8 + 3), a1, a2, a3);
  *((_BYTE*)v10 + 1088) = 0;
  *((_BYTE*)v10 + 1100) = 0;
  *((_BYTE*)v10 + 1104) = 0;
  *((_BYTE*)v10 + 1116) = 0;
  *((_DWORD*)v10 + 280) = 0;
  *((_BYTE*)v10 + 1084) = 0;
  v10[3] = &GameData_2103f90_alt1;
  v10[12] = GameData_21040f8;
  *(_QWORD*)((char*)v10 + 1052) = 0;
  *(_QWORD*)((char*)v10 + 1060) = 0;
  *(_QWORD*)((char*)v10 + 1068) = 0;
  *(_QWORD*)((char*)v10 + 1076) = 0;
  v11 = fw_memory_g_heap_manager_ptr;
  v12 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v13 = GameData_2104118;
  *(_QWORD*)v12 = GameData_2104110;
  *(_QWORD*)(v12 + 8) = v13;
  v14 = GameData_2104128;
  *(_QWORD*)(v12 + 16) = GameData_2104120;
  *(_QWORD*)(v12 + 24) = v14;
  v15 = (const char*)GameRoutine_576600_alt1(a1, "Anchor");
  if (v15 != nullptr) {
    v34_.v34 = v15;
    v34_.v35 = strlen_alt1(v15);
    if (v34_.v35 != 0) {
      ui_control_1888c80((__int64)(v10 + 29), v12, (__int64)&v34_.v34);
    }
  }
  v16 = (const char*)GameRoutine_576600_alt1(a1, *(const char**)(v12 + 16));
  if (v16 != nullptr) {
    v34_.v34 = v16;
    v34_.v35 = strlen_alt1(v16);
    if (v34_.v35 != 0) {
      ui_control_1888c80((__int64)(v10 + 29), v12 + 16, (__int64)&v34_.v34);
    }
  }
  v34_.v34 = "Anchor";
  v34_.v35 = 6;
  v17 = Element_1886290_alt1(v9, &v34_.v34);
  v18 = (atomic_uchar*)GameData_21318f0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_21318f0,
                                  memory_order_acquire);
  v20 = GameData_21318e8;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_21318f0) != 0) {
    *v20 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release_alt1((__int64)GameData_21318f0);
  }
  if (v17 != nullptr) {
    v21 = (__int64*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)v17 + 16LL))(v17);
    if (v21 == v20) {
      goto LABEL_16;
    }
    do {
      v21 = (__int64*)*v21;
    } while (v21 != v20 && v21 != nullptr);
    if (v21 != nullptr) {
    LABEL_16:
      v23 = v17[13];
      *((_DWORD*)v10 + 263) = v17[12];
      *((_DWORD*)v10 + 264) = v23;
    }
  }
  v34_.v34 = "Window";
  v34_.v35 = 6;
  v24 = Element_1886290_alt1(v9, &v34_.v34);
  if ((atomic_load_explicit(v18, memory_order_acquire) & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_21318f0) != 0) {
    *v20 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release_alt1((__int64)GameData_21318f0);
  }
  if (v24 != nullptr) {
    v25 = (__int64*)(*(__int64 (**)(_QWORD*))(*v24 + 16LL))(v24);
    if (v25 == v20) {
      goto LABEL_26;
    }
    do {
      v25 = (__int64*)*v25;
    } while (v25 != v20 && v25 != nullptr);
    if (v25 != nullptr) {
    LABEL_26:
      v27 = v24[3];
      if (v27 != 0) {
        v28 = *(_DWORD*)(v27 + 52);
        *((_DWORD*)v10 + 265) = *(_DWORD*)(v27 + 48);
        *((_DWORD*)v10 + 266) = v28;
      }
      v29 = *((_DWORD*)v24 + 13);
      *((_DWORD*)v10 + 267) = *((_DWORD*)v24 + 12);
      *((_DWORD*)v10 + 268) = v29;
    }
  }
  v30 = ui_LayoutAccessor_FindPane_alt1(v10 + 14, (__int64)"Arrow");
  if (v30 != 0) {
    v31 = __dynamic_cast(v30, GameData_212d670[0], GameData_212d678[0], 0);
    if (v31 != 0) {
      v32 = *(_DWORD*)(v31 + 52);
      *((_DWORD*)v10 + 269) = *(_DWORD*)(v31 + 48);
      *((_DWORD*)v10 + 270) = v32;
    }
  }
  v33 = 128;
  if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
    v33 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v11 + v33, v12);
  *a4 = v9;
  a4[1] = (__int64)v10;
  v10[3] = &GameData_2104250_alt1;
  v10[12] = GameData_21043b8;
}

__int64 FloatingHelp_18a4fa0(__int64 a1, __int64** a2)
{
  __int64* v3;
  __int64 v4;
  float v5;
  float v6;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  __int64* v13;
  unsigned __int8 explicit;
  __int64* v15;
  float v16;
  float v17;
  __int64* v18;
  __int64 v20;
  __int64 v21;
  char v22;
  float v23;
  float v24;
  float (*v25)(__int64);
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  void (*v31)(__int64, float*);
  float v32;
  __int64 v33;
  __int64* v34;
  double v35;
  char v36;
  float v37;
  int v38;
  const char* v39;
  char v40;
  const char* v41;
  char v42;
  int v43;
  __int64* v44;
  __int64* v45;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  unsigned int v55;
  float v56;
  float v57;
  float v58;
  float v59;
  _BOOL4 v60;
  bool v61;
  float v62;
  float v63;
  __int64 v64;
  char v65;
  __int64 v66;
  __int64 v67;
  float v68;
  int v69;
  __int64 v70;
  __int64 v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  int v77;
  char v78;
  float v80[4];
  struct {
    char* v81;
    __int64 v82;
  } v81_;
  float v83[3];
  struct {
    const char* v84;
    __int64 v85;
  } v84_;
  struct {
    __int64 v86;
    __int64 v87;
  } v86_;

  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
  v3 = *a2;
  if (*a2 == nullptr) {
    return GameHr_1562680(a1 + 88, "Select", 0x1.0000000000000p+0f);
  }
  v4 = v3[24];
  if (v4 != 0) {
    v5 = *(float*)(v4 + 124);
    v6 = *(float*)(v4 + 140);
    Pane_58dfa0((void*)((float*)&v86_.v86), v3[24]),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s2", "=w")),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
    v3 = *a2;
    *(float*)&v86_.v86 = v5 + *(float*)&v86_.v86;
    *((float*)&v86_.v86 + 1) = v6 + *((float*)&v86_.v86 + 1);
    *(float*)&v86_.v87 = v5 + *(float*)&v86_.v87;
    *((float*)&v86_.v87 + 1) = v6 + *((float*)&v86_.v87 + 1);
  }
  else {
    v86_.v86 = 0;
    v86_.v87 = 0;
  }
  v8 = (*(float (**)(__int64*))(*v3 + 80))(v3),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
  v10 = v9;
  v84_.v84 = "Anchor";
  v84_.v85 = 6;
  v11 = *(float*)&v86_.v87 - *(float*)&v86_.v86;
  v12 = *((float*)&v86_.v87 + 1) - *((float*)&v86_.v86 + 1);
  v13 = Element_1886290_alt2(a1, &v84_.v84),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212dfe0,
                                  memory_order_acquire);
  v15 = GameData_212dfd8;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212dfe0) != 0) {
    *v15 = 0;
    __cxa_guard_release_alt1((__int64)GameData_212dfe0),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s2", "=w")),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v16 = v8 * v11;
  v17 = -(float)(v12 * v10);
  v18 = (__int64*)(*(__int64 (**)(__int64*))(*v13 + 16))(v13),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v18 != v15) {
    do {
      v18 = (__int64*)*v18;
    } while (v18 != v15 && v18 != nullptr);
  }
  v20 = v86_.v87;
  v21 = v86_.v86;
  v22 = *((_BYTE*)v13 + 88) | 0x10;
  v23 = *((float*)v13 + 31);
  v24 = *((float*)v13 + 35);
  *((float*)v13 + 20) = v16;
  *((float*)v13 + 21) = v17;
  *((_BYTE*)v13 + 88) = v22;
  Pane_58dfa0((void*)((float*)&v84_.v84), (__int64)v13),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s2", "=w")),
      v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
      v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
  v25 = *(float (**)(__int64))(*(_QWORD*)a1 + 48LL),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
  *(float*)&v84_.v85 = v23 + *(float*)&v84_.v85;
  *((float*)&v84_.v85 + 1) = v24 + *((float*)&v84_.v85 + 1);
  *(float*)&v84_.v84 = v23 + *(float*)&v84_.v84;
  *((float*)&v84_.v84 + 1) = v24 + *((float*)&v84_.v84 + 1);
  v26 = (float)(*(float*)&v86_.v86 -
                (float)(PSEUDO_UNFUSED(
                    (float)(v16 - (float)(*(float*)&v20 - *(float*)&v21)) *
                    0x1.0000000000000p-1f))) -
        *(float*)&v84_.v84;
  v27 = (float)(*((float*)&v86_.v86 + 1) -
                (float)(PSEUDO_UNFUSED(
                    (float)((float)-v17 - (float)(*((float*)&v20 + 1) -
                                                  *((float*)&v21 + 1))) *
                    0x1.0000000000000p-1f))) -
        *((float*)&v84_.v84 + 1);
  v28 = v25(a1),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
  v30 = v29;
  v31 = *(void (**)(__int64, float*))(*(_QWORD*)a1 + 56LL),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
  v83[0] = v26 + v28;
  v83[1] = v27 + v29;
  v83[2] = v32;
  v31(a1, v83),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s2", "=w")),
      v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
      v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
  LayoutAccessor_1560070_alt1((void*)(&v81_.v81), (__int64*)(a1 + 88),
                              "L_Cursor"),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s2", "=w")),
      v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
      v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v81_.v82 != 0) {
    v33 = std___1___shared_weak_count_lock_alt1(v81_.v82),
    v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
    v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s2", "=w")),
    v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
    v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
    v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
    v34 = (__int64*)v81_.v81;
    if (v81_.v82 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v81_.v82),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
          v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s2", "=w")),
          v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
          v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    if (v33 == 0 || v34 == nullptr) {
      if (v33 == 0) {
        goto LABEL_29;
      }
      goto LABEL_27;
    }
    if ((*(_BYTE*)(a1 + 1076) & 1) != 0) {
      v35 = ui_LayoutAccessor_GetTranslate(v34),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s2", "=w")),
      v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
      v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
      v36 = *(_BYTE*)(a1 + 1076);
      *(_DWORD*)(a1 + 1072) = v38;
      *(float*)(a1 + 1064) = *(float*)&v35 - v26;
      *(float*)(a1 + 1068) = v37 - v27;
      if ((v36 & 1) == 0) {
        *(_BYTE*)(a1 + 1076) = 1;
      }
      v39 = v84_.v84;
      v40 = *(_BYTE*)(a1 + 1092);
      *(_DWORD*)(a1 + 1088) = 0;
      *(float*)(a1 + 1080) =
          (float)(*(float*)&v39 - v28) + 0x1.2000000000000p+2f;
      *(float*)(a1 + 1084) =
          (float)(*((float*)&v39 + 1) - v30) + -0x1.c000000000000p+2f;
      if ((v40 & 1) != 0) {
        goto LABEL_26;
      }
    }
    else {
      v41 = v84_.v84;
      *(_DWORD*)(a1 + 1072) = 0;
      v42 = *(_BYTE*)(a1 + 1092);
      *(_BYTE*)(a1 + 1076) = 1;
      *(float*)(a1 + 1064) =
          (float)(*(float*)&v41 - v28) + 0x1.2000000000000p+2f;
      *(float*)(a1 + 1068) =
          (float)(*((float*)&v41 + 1) - v30) + -0x1.c000000000000p+2f;
      v43 = *(_DWORD*)(a1 + 1072);
      *(_QWORD*)(a1 + 1080) = *(_QWORD*)(a1 + 1064);
      *(_DWORD*)(a1 + 1088) = v43;
      if ((v42 & 1) != 0) {
      LABEL_26:
        *(_DWORD*)(a1 + 1096) = 0;
      LABEL_27:
        if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v32 = COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v38 = COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v9 =
                  COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v33),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v32 = COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v38 = COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v9 =
                  COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
        }
        goto LABEL_29;
      }
    }
    *(_BYTE*)(a1 + 1092) = 1;
    goto LABEL_26;
  }
LABEL_29:
  v81_.v81 = "Window";
  v81_.v82 = 6;
  v44 = Element_1886290_alt2(a1, (const char**)&v81_.v81),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_21318f0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_21318f0) != 0) {
    *GameData_21318e8 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1(),
    v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
    v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s2", "=w")),
    v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
    v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
    v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
    __cxa_guard_release_alt1((__int64)GameData_21318f0),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s2", "=w")),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  if (v44 == nullptr) {
    goto LABEL_40;
  }
  v45 = (__int64*)(*(__int64 (**)(__int64*))(*v44 + 16))(v44),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v45 == GameData_21318e8) {
    goto LABEL_38;
  }
  do {
    v45 = (__int64*)*v45;
  } while (v45 != GameData_21318e8 && v45 != nullptr);
  if (v45 != nullptr) {
  LABEL_38:
    v47 = (float)(*(float*)(a1 + 1036) + *(float*)(a1 + 1044)) -
          *(float*)(a1 + 1028);
    v48 = (float)(*(float*)(a1 + 1040) + *(float*)(a1 + 1048)) -
          *(float*)(a1 + 1032);
    Pane_58dfa0((void*)((float*)&v81_.v81), (__int64)v44),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s2", "=w")),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
    v49 = *((float*)v44 + 12);
    v50 = *((float*)v44 + 13);
    v51 = v50 + *((float*)&v81_.v81 + 1);
    v52 = v50 + *((float*)&v81_.v82 + 1);
    v53 = (float)(v49 + *(float*)&v81_.v81) + (float)(v47 + *(float*)&v86_.v86);
    v54 = (float)(v49 + *(float*)&v81_.v82) + (float)(v47 + *(float*)&v86_.v86);
    *(float*)&v55 = v51 + (float)(v48 + *((float*)&v86_.v87 + 1));
    v56 = *(float*)(a1 + 1036);
    v81_.v81 = (char*)__PAIR64__(v55, LODWORD(v53));
    v57 = v52 + (float)(v48 + *((float*)&v86_.v87 + 1));
    v58 = *(float*)(a1 + 1044);
    *(float*)&v81_.v82 = v54;
    *((float*)&v81_.v82 + 1) = v57;
    if ((float)((float)(v53 - v56) - v58) >= -0x1.e000000000000p+9f) {
      v61 = v54 <= 0x1.e000000000000p+9f;
      v62 = v56 - (float)(v54 + -0x1.e000000000000p+9f);
      if (v61) {
        v59 = v56;
      }
      else {
        v59 = v62;
      }
    }
    else {
      v59 = v56 - (float)(v53 + 0x1.e000000000000p+9f);
    }
    v60 = v57 < -0x1.f400000000000p+8f;
    if (v57 < -0x1.f400000000000p+8f) {
      Pane_58dfa0((void*)(v80), (__int64)v13),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
          v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s2", "=w")),
          v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
          v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
      v63 = (float)((float)(*((float*)v13 + 13) + v80[1]) +
                    vabds_f32(*((float*)&v81_.v82 + 1),
                              *((float*)&v81_.v81 + 1))) -
            *(float*)(a1 + 1048);
      v64 = v44[3];
      if (v64 == 0) {
        goto LABEL_49;
      }
      goto LABEL_48;
    }
    v63 = *(float*)(a1 + 1040);
    v64 = v44[3];
    if (v64 != 0) {
    LABEL_48:
      v65 = *(_BYTE*)(v64 + 88);
      *(float*)(v64 + 48) = v59;
      *(float*)(v64 + 52) = v63;
      *(_DWORD*)(v64 + 56) = 0;
      *(_BYTE*)(v64 + 88) = v65 | 0x10;
    }
  }
  else {
  LABEL_40:
    v60 = false;
  }
LABEL_49:
  v66 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 88), (__int64)"Arrow"),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v66 != 0) {
    v67 = __dynamic_cast(v66, GameData_212d670[0], GameData_212d678[0], 0),
    v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
    v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s2", "=w")),
    v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
    v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
    v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v67 != 0) {
      v68 = *(float*)(a1 + 1028);
      v69 = *(_DWORD*)(v67 + 56);
      v70 = *(_QWORD*)(v67 + 60);
      v71 = v67;
      v61 = v16 > 0x1.2c00000000000p+6f;
      v72 = v68 + 0x1.e000000000000p+4f;
      v73 = v68 + (float)(v16 * 0x1.0000000000000p-1f);
      v74 = fabsf(*(float*)(v67 + 84));
      if (v61) {
        v75 = v72;
      }
      else {
        v75 = v73;
      }
      Pane_58dfa0((void*)((float*)&v81_.v81), (__int64)v13),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
          v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s2", "=w")),
          v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
          v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v60) {
        v76 = (float)(*((float*)v13 + 13) + *((float*)&v81_.v81 + 1)) +
              (float)(v74 * 0x1.0000000000000p-1f);
        v77 = 1127481344;
      }
      else {
        v76 = (float)(*((float*)v13 + 13) + *((float*)&v81_.v82 + 1)) +
              (float)(v74 * -0x1.0000000000000p-1f);
        v77 = 0;
      }
      v78 = *(_BYTE*)(v71 + 88);
      *(float*)(v71 + 48) = v75;
      *(float*)(v71 + 52) = v76;
      *(_DWORD*)(v71 + 56) = v69;
      *(_QWORD*)(v71 + 60) = v70;
      *(_DWORD*)(v71 + 68) = v77;
      *(_BYTE*)(v71 + 88) = v78 | 0x10;
    }
  }
  return GameHr_1562680(a1 + 88, "Select", 0x1.0000000000000p+0f);
}

void FloatingHelp_18a55a0(__int64 a1, float a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  long double v5;
  __int64* v6;
  float v7;
  char v8;
  float v9;
  struct {
    unsigned __int64 v10;
    __int64 v11;
  } v10_;

  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (*(float*)(a1 + 1096) <= 0x1.0000000000000p+2f &&
      *(_BYTE*)(a1 + 1076) == 1 && *(_BYTE*)(a1 + 1092) == 1) {
    LayoutAccessor_1560070_alt1((void*)(&v10_.v10), (__int64*)(a1 + 88),
                                "L_Cursor"),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v10_.v11 != 0) {
      v4 = std___1___shared_weak_count_lock_alt1(v10_.v11),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v6 = (__int64*)v10_.v10;
      if (v10_.v11 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v10_.v11),
            v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if (v4 != 0 && v6 != nullptr) {
        v7 = *(float*)(a1 + 1096);
        v8 = *(_BYTE*)(a1 + 1076);
        LODWORD(v10_.v11) = 0;
        v9 = a2 + v7;
        *(float*)(a1 + 1096) = v9;
        if (v9 > 0x1.0000000000000p+2f) {
          v9 = 0x1.0000000000000p+2f;
        }
        if ((v8 & 1) == 0 || (*(_BYTE*)(a1 + 1092) & 1) == 0) {
          GameRoutine_8123d0(),
              v5 = COERCE_AS(__typeof__(v5),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v10_.v10 = __PAIR64__(
            (float)(*(float*)(a1 + 1068) +
                    (float)((float)(v9 * (float)(*(float*)(a1 + 1084) -
                                                 *(float*)(a1 + 1068))) *
                            0x1.0000000000000p-2f)) +
                0x0.0p+0f,
            (float)(*(float*)(a1 + 1064) +
                    (float)((float)(v9 * (float)(*(float*)(a1 + 1080) -
                                                 *(float*)(a1 + 1064))) *
                            0x1.0000000000000p-2f)) +
                0x0.0p+0f);
        *(float*)&v5 = ui_LayoutAccessor_SetTranslate(v6, (__int64)&v10_.v10),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else if (v4 == 0) {
        return;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v4 + 16LL))(v4, v5),
            v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v4),
            v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
  }
}

#pragma GCC visibility pop
