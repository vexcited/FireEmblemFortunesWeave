#include "decomp/pseudo_helpers.h"

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
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _DWORD* v17;
  atomic_uchar* v18;
  unsigned __int8 explicit;
  __int64* v20;
  __int64* v21;
  int v23;
  __int64 v24;
  __int64* v25;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 result;
  const char* v35;
  __int64 v36;

  v8 = (_QWORD*)LayoutEx_579160(1128, 8);
  v9 = v8 + 3;
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_2104200;
  Element_1884860(v8 + 3, a1, a2, a3);
  *((_BYTE*)v10 + 1088) = 0;
  *((_BYTE*)v10 + 1100) = 0;
  *((_BYTE*)v10 + 1104) = 0;
  *((_BYTE*)v10 + 1116) = 0;
  *((_DWORD*)v10 + 280) = 0;
  *((_BYTE*)v10 + 1084) = 0;
  v10[3] = GameData_2103f90;
  v10[12] = GameData_21040f8;
  *(_QWORD*)((char*)v10 + 1052) = 0;
  *(_QWORD*)((char*)v10 + 1060) = 0;
  *(_QWORD*)((char*)v10 + 1068) = 0;
  *(_QWORD*)((char*)v10 + 1076) = 0;
  v11 = fw_memory_g_heap_manager_ptr;
  v12 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v13 = GameData_2104118;
  *v12 = GameData_2104110;
  v12[1] = v13;
  v14 = GameData_2104128;
  v12[2] = GameData_2104120;
  v12[3] = v14;
  v15 = GameRoutine_576600(a1, "Anchor");
  if (v15 != 0) {
    v35 = (const char*)v15;
    v36 = strlen(v15);
    if (v36 != 0) {
      GameRoutine_1888c80((__int64)(v10 + 29), (__int64)v12, (__int64)&v35);
    }
  }
  v16 = GameRoutine_576600(a1, v12[2]);
  if (v16 != 0) {
    v35 = (const char*)v16;
    v36 = strlen(v16);
    if (v36 != 0) {
      GameRoutine_1888c80((__int64)(v10 + 29), (__int64)(v12 + 2),
                          (__int64)&v35);
    }
  }
  v35 = "Anchor";
  v36 = 6;
  v17 = (_DWORD*)Element_1886290(v9, &v35);
  v18 = (atomic_uchar*)GameData_21318f0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_21318f0,
                                  memory_order_acquire);
  v20 = GameData_21318e8;
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_21318f0) != 0) {
    *v20 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
    __cxa_guard_release(GameData_21318f0);
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
  v35 = "Window";
  v36 = 6;
  v24 = Element_1886290(v9, &v35);
  if ((atomic_load_explicit(v18, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_21318f0) != 0) {
    *v20 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
    __cxa_guard_release(GameData_21318f0);
  }
  if (v24 != 0) {
    v25 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    if (v25 == v20) {
      goto LABEL_26;
    }
    do {
      v25 = (__int64*)*v25;
    } while (v25 != v20 && v25 != nullptr);
    if (v25 != nullptr) {
    LABEL_26:
      v27 = *(_QWORD*)(v24 + 24);
      if (v27 != 0) {
        v28 = *(_DWORD*)(v27 + 52);
        *((_DWORD*)v10 + 265) = *(_DWORD*)(v27 + 48);
        *((_DWORD*)v10 + 266) = v28;
      }
      v29 = *(_DWORD*)(v24 + 52);
      *((_DWORD*)v10 + 267) = *(_DWORD*)(v24 + 48);
      *((_DWORD*)v10 + 268) = v29;
    }
  }
  v30 = ui_LayoutAccessor_FindPane(v10 + 14, "Arrow");
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
  result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v33);
  *a4 = v9;
  a4[1] = v10;
  v10[3] = GameData_2104250;
  v10[12] = GameData_21043b8;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
