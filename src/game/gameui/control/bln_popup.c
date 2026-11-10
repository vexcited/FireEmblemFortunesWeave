#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Element_1886290(_QWORD, _QWORD);
__int64 GameRoutine_15638b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c240(_QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 LayoutAccessor_1563280(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1563380(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_15636c0(_QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(void);
extern _UNKNOWN* GameData_2130ea8;
extern _UNKNOWN* GameData_21318f0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e348;
extern __int64* GameData_2130ea0;
extern __int64* GameData_21318e8;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64* BlnPopup_19f1f60(__int64 a1);
__int64* BlnPopup_19f2340(__int64 a1, __int64 a2);
__int64 BlnPopup_19f25b0(__int64 a1);
__int64 BlnPopup_19f2680(__int64 a1);
__int64* BlnPopup_19f2740(__int64* result, char a2);
__int64 BlnPopup_19f27a0(__int64 a1);
__int64 Element_1884860(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1888c80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_576600(_QWORD, _QWORD);
__int64 GameRoutine_576740(_QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 Pane_58fac0(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 (*Element_1888840_ptr[])();
extern __int64 (*GameData_2126420[])();
extern __int64 (*GameData_21264a0[])();
extern __int64 (*GameData_2126658[])();
extern __int64 (*game_gameui_control_BlnPopup_vtable[])();
extern __int64 GameData_2126440;
extern __int64 GameData_2126450;
extern __int64 GameData_2126460;
extern __int64 GameData_2126470;
extern char* GameData_2126438;
extern char* GameData_2126448;
extern char* GameData_2126458;
extern char* GameData_2126468;
__attribute__((swiftcall)) void BlnPopup_19f1c50(PSEUDO_X8 x8_, __int64 a1,
                                                 __int64 a2, __int64 a3);

__attribute__((swiftcall)) void BlnPopup_19f1c50(PSEUDO_X8 x8_, __int64 a1,
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
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 result;
  __int64 v24;
  __int64 v25;

  v8 = (_QWORD*)LayoutEx_579160(1056, 8);
  v9 = v8 + 3;
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_21264a0;
  Element_1884860(v8 + 3, a1, a2, a3);
  *((_DWORD*)v10 + 263) = 0;
  v10[3] = game_gameui_control_BlnPopup_vtable;
  v10[12] = GameData_2126420;
  v11 = fw_memory_g_heap_manager_ptr;
  v12 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  v13 = GameData_2126460;
  v12[4] = GameData_2126458;
  v12[5] = v13;
  v14 = GameData_2126470;
  v12[6] = GameData_2126468;
  v12[7] = v14;
  v15 = GameData_2126440;
  *v12 = GameData_2126438;
  v12[1] = v15;
  v16 = GameData_2126450;
  v12[2] = GameData_2126448;
  v12[3] = v16;
  v17 = GameRoutine_576600(a1, "Wdw_R");
  if (v17 != 0) {
    v24 = v17;
    v25 = strlen(v17);
    if (v25 != 0) {
      GameRoutine_1888c80(v10 + 29, v12, &v24);
    }
  }
  v18 = GameRoutine_576600(a1, v12[2]);
  if (v18 != 0) {
    v24 = v18;
    v25 = strlen(v18);
    if (v25 != 0) {
      GameRoutine_1888c80(v10 + 29, v12 + 2, &v24);
    }
  }
  v19 = GameRoutine_576600(a1, v12[4]);
  if (v19 != 0) {
    v24 = v19;
    v25 = strlen(v19);
    if (v25 != 0) {
      GameRoutine_1888c80(v10 + 29, v12 + 4, &v24);
    }
  }
  v20 = GameRoutine_576600(a1, v12[6]);
  if (v20 != 0) {
    v24 = v20;
    v25 = strlen(v20);
    if (v25 != 0) {
      GameRoutine_1888c80(v10 + 29, v12 + 6, &v24);
    }
  }
  v21 = Pane_58fac0(*(_QWORD*)(v10[4] + 24LL), "BlnMargin");
  if (v21 != 0 || (v21 = GameRoutine_576740(a1, "BlnMargin")) != 0) {
    *((float*)v10 + 263) = (float)*(int*)(v21 + *(unsigned int*)(v21 + 4));
  }
  (*(void (**)(_QWORD*, _QWORD))(v10[3] + 40LL))(v9, 0);
  v22 = 128;
  if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
    v22 = 56;
  }
  result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v22);
  *a4 = v9;
  a4[1] = v10;
  v10[3] = Element_1888840_ptr;
  v10[12] = GameData_2126658;
  {
    result;
    return;
  }
}

__int64* BlnPopup_19f1f60(__int64 a1)
{
  __int64 v2;
  atomic_uchar* v3;
  unsigned __int8 explicit;
  __int64* v5;
  __int64* v6;
  __int64 v8;
  atomic_uchar* v9;
  unsigned __int8 v10;
  __int64* v11;
  __int64* v12;
  char v14;
  __int64 v15;
  __int64* v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* result;
  __int64* v23;
  char v25;
  __int64 v26;
  __int64* v27;
  int v28;
  __int64 v29;
  _QWORD v30[2];
  _QWORD v31[2];
  _QWORD v32[2];
  __int64* v33;
  __int64 v34;
  int v35;
  int v36;
  __int64 v37;
  __int64 v38;
  _BYTE v39[4];
  __int64 v40;

  v31[0] = "Wdw_R";
  v31[1] = 5;
  v2 = Element_1886290(a1, v31);
  v3 = (atomic_uchar*)GameData_21318f0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_21318f0,
                                  memory_order_acquire);
  v5 = GameData_21318e8;
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_21318f0) != 0) {
    *v5 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
    __cxa_guard_release(GameData_21318f0);
  }
  if (v2 == 0) {
    goto LABEL_10;
  }
  v6 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
  if (v6 != v5) {
    do {
      v6 = (__int64*)*v6;
    } while (v6 != v5 && v6 != nullptr);
    if (v6 == nullptr) {
    LABEL_10:
      v2 = 0;
    }
  }
  v30[0] = "Txt_R";
  v30[1] = 5;
  v8 = Element_1886290(a1, v30);
  v9 = (atomic_uchar*)GameData_2130ea8;
  v10 = atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                             memory_order_acquire);
  v11 = GameData_2130ea0;
  if ((v10 & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_2130ea8) != 0) {
    *v11 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
    __cxa_guard_release(GameData_2130ea8);
  }
  if (v8 != 0) {
    v12 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    if (v12 == v11) {
      if (v2 == 0) {
        goto LABEL_24;
      }
    }
    else {
      do {
        v12 = (__int64*)*v12;
      } while (v12 != v11 && v12 != nullptr);
      if (v2 == 0 || v12 == nullptr) {
        goto LABEL_24;
      }
    }
    GameRoutine_190a0c0(v32, &v40, v39, v8, *(_QWORD*)(v8 + 216));
    v14 = *(_BYTE*)(v8 + 88) | 0x10;
    *(_QWORD*)(v8 + 80) = v40;
    *(_BYTE*)(v8 + 88) = v14;
    v15 = fw_memory_g_heap_manager_ptr;
    v16 = (__int64*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
    v17 = *(_DWORD*)(a1 + 1028);
    *v16 = v8;
    v33 = v16;
    v37 = 0;
    v38 = 256;
    v32[0] = v2;
    v32[1] = 0;
    v34 = 1;
    v36 = 0;
    v35 = v17;
    GameRoutine_156c240(v32);
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v18);
  }
LABEL_24:
  v31[0] = "Wdw_L";
  v31[1] = 5;
  v19 = Element_1886290(a1, v31);
  if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_21318f0) != 0) {
    *v5 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
    __cxa_guard_release(GameData_21318f0);
  }
  if (v19 == 0) {
    goto LABEL_33;
  }
  v20 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
  if (v20 != v5) {
    do {
      v20 = (__int64*)*v20;
    } while (v20 != v5 && v20 != nullptr);
    if (v20 == nullptr) {
    LABEL_33:
      v19 = 0;
    }
  }
  v30[0] = "Txt_L";
  v30[1] = 5;
  result = (__int64*)Element_1886290(a1, v30);
  v23 = result;
  if ((atomic_load_explicit(v9, memory_order_acquire) & 1) == 0) {
    result = (__int64*)__cxa_guard_acquire(GameData_2130ea8);
    if ((_DWORD)result != 0) {
      *v11 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      result = (__int64*)__cxa_guard_release(GameData_2130ea8);
    }
  }
  if (v23 != nullptr) {
    result = (__int64*)(*(__int64 (**)(__int64*))(*v23 + 16))(v23);
    if (result == v11) {
      if (v19 == 0) {
        return result;
      }
      goto LABEL_44;
    }
    do {
      result = (__int64*)*result;
    } while (result != v11 && result != nullptr);
    if (v19 != 0 && result != nullptr) {
    LABEL_44:
      GameRoutine_190a0c0(v32, &v40, v39, v23, v23[27]);
      v25 = *((_BYTE*)v23 + 88) | 0x10;
      v23[10] = v40;
      *((_BYTE*)v23 + 88) = v25;
      v26 = fw_memory_g_heap_manager_ptr;
      v27 = (__int64*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
      v28 = *(_DWORD*)(a1 + 1028);
      *v27 = (__int64)v23;
      v33 = v27;
      v37 = 0;
      v38 = 256;
      v32[0] = v19;
      v32[1] = 0;
      v34 = 1;
      v36 = 0;
      v35 = v28;
      GameRoutine_156c240(v32);
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)v26 + 200LL) == 0) {
        v29 = 56;
      }
      return (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v26 + v29);
    }
  }
  return result;
}

__int64* BlnPopup_19f2340(__int64 a1, __int64 a2)
{
  __int64 v4;
  atomic_uchar* v5;
  unsigned __int8 explicit;
  __int64* v7;
  __int64* v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v15;
  __int64 v16;
  _QWORD v18[2];
  _QWORD v19[2];
  unsigned __int64 v20;
  unsigned __int64 v21;
  int v22;
  int v23;
  __int64 v24;
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

  v18[0] = "Txt_R";
  v18[1] = 5;
  v4 = Element_1886290(a1, v18);
  v5 = (atomic_uchar*)GameData_2130ea8;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                                  memory_order_acquire);
  v7 = GameData_2130ea0;
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_2130ea8) != 0) {
    *v7 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
    __cxa_guard_release(GameData_2130ea8);
  }
  if (v4 != 0) {
    v8 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    if (v8 == v7) {
      goto LABEL_10;
    }
    do {
      v8 = (__int64*)*v8;
    } while (v8 != v7 && v8 != nullptr);
    if (v8 != nullptr) {
    LABEL_10:
      v24 = -1;
      v25 = -1;
      v26 = -1;
      v27 = -1;
      v10 = *msg_MessageManager_instance__ptr[0];
      v28 = -1;
      v29 = -1;
      v30 = -1;
      v31 = -1;
      v32 = -1;
      v33 = -1;
      v34 = -1;
      v35 = -1;
      v19[0] = GameData_212e348 + 2;
      v19[1] = 0xFFFF0001FFFF0000LL;
      v20 = 0xFFFF0004FFFF0002LL;
      v21 = 0xFFFF0006FFFF0005LL;
      v36 = 8;
      v22 = -65529;
      v23 = -65528;
      v11 = GameRoutine_a4dbe0(v10, a2, 0, v19);
      GameRoutine_156c5d0(v4, v11, 0);
    }
  }
  v18[0] = "Txt_L";
  v18[1] = 5;
  v12 = Element_1886290(a1, v18);
  if ((atomic_load_explicit(v5, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_2130ea8) != 0) {
    *v7 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
    __cxa_guard_release(GameData_2130ea8);
  }
  if (v12 != 0) {
    v13 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    if (v13 == v7) {
      goto LABEL_20;
    }
    do {
      v13 = (__int64*)*v13;
    } while (v13 != v7 && v13 != nullptr);
    if (v13 != nullptr) {
    LABEL_20:
      v24 = -1;
      v25 = -1;
      v26 = -1;
      v27 = -1;
      v15 = *msg_MessageManager_instance__ptr[0];
      v28 = -1;
      v29 = -1;
      v30 = -1;
      v31 = -1;
      v32 = -1;
      v33 = -1;
      v34 = -1;
      v35 = -1;
      v19[0] = GameData_212e348 + 2;
      v19[1] = 0xFFFF0001FFFF0000LL;
      v20 = 0xFFFF0004FFFF0002LL;
      v21 = 0xFFFF0006FFFF0005LL;
      v36 = 8;
      v22 = -65529;
      v23 = -65528;
      v16 = GameRoutine_a4dbe0(v15, a2, 0, v19);
      GameRoutine_156c5d0(v12, v16, 0);
    }
  }
  return BlnPopup_19f1f60(a1);
}

__int64 BlnPopup_19f25b0(__int64 a1)
{
  __int64 v1;

  v1 = a1 + 88;
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
  if ((LayoutAccessor_1563280(v1, "In", 0) & 1) != 0) {
    GameRoutine_15638b0(v1, "In", 0);
    LayoutAccessor_15636c0(v1, "In", 0);
  }
  if ((LayoutAccessor_1563280(v1, "Out", 0) & 1) != 0) {
    GameRoutine_15638b0(v1, "Out", 0);
    LayoutAccessor_15636c0(v1, "Out", 0);
  }
  return LayoutAccessor_1562680(v1, "In", 1.0);
}

__int64 BlnPopup_19f2680(__int64 a1)
{
  if ((LayoutAccessor_1563280(a1 + 88, "In", 0) & 1) != 0) {
    GameRoutine_15638b0(a1 + 88, "In", 0);
    LayoutAccessor_15636c0(a1 + 88, "In", 0);
  }
  if ((LayoutAccessor_1563280(a1 + 88, "Out", 0) & 1) != 0) {
    GameRoutine_15638b0(a1 + 88, "Out", 0);
    LayoutAccessor_15636c0(a1 + 88, "Out", 0);
  }
  return LayoutAccessor_1562680(a1 + 88, "Out", 1.0);
}

__int64* BlnPopup_19f2740(__int64* result, char a2)
{
  __int64 v3;

  v3 = (__int64)result;
  if ((a2 & 1) != 0) {
    result = (__int64*)(*(__int64 (**)(__int64*))(*result + 32))(result);
    if (((unsigned __int8)result & 1) == 0) {
      result = BlnPopup_19f1f60(v3);
    }
  }
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 24LL) + 88LL) =
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 24LL) + 88LL) & 0xFE | a2 & 1;
  return result;
}

__int64 BlnPopup_19f27a0(__int64 a1)
{
  __int64 result;

  result = LayoutAccessor_1563380(a1 + 88, "Out", 0);
  if ((result & 1) != 0) {
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 40LL))(a1, 0);
  }
  return result;
}

#pragma GCC visibility pop
