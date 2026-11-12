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
__int64* BlnPopup_19f1f60_alt1(__int64 a1) __asm__("BlnPopup_19f1f60");
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
__int64 ui_control_1888c80(__int64, __int64, __int64);
const char* GameRoutine_576740_alt1(__int64,
                                    const char*) __asm__("GameRoutine_576740");
const char* Pane_58fac0_alt1(__int64, const char*) __asm__("Pane_58fac0");
extern __int64 (*GameData_21264f0[])();
float32x4_t*
GameRoutine_156c240_alt1(float32x4_t* result) __asm__("GameRoutine_156c240");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_190a0c0_alt1(float*, __int64, float*, _QWORD*,
                              __int64) __asm__("GameRoutine_190a0c0");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void BlnPopup_19f1f60(__int64 a1);

__attribute__((swiftcall)) void BlnPopup_19f1c50(PSEUDO_X8 x8_, __int64 a1,
                                                 __int64 a2, __int64 a3)
{

#pragma clang fp contract(off)
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  const char* v17;
  const char* v18;
  const char* v19;
  const char* v20;
  const char* v21;
  __int64 v22;
  struct {
    const char* v23;
    unsigned __int64 v24;
  } v23_;

  v8 = (_QWORD*)LayoutEx_579160_alt1(1056, 8);
  v9 = v8 + 3;
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_21264a0;
  Element_1884860_alt1((__int64)(v8 + 3), a1, a2, a3);
  *((_DWORD*)v10 + 263) = 0;
  v10[3] = game_gameui_control_BlnPopup_vtable;
  v10[12] = GameData_2126420;
  v11 = fw_memory_g_heap_manager_ptr;
  v12 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  v13 = GameData_2126460;
  *(_QWORD*)(v12 + 32) = GameData_2126458;
  *(_QWORD*)(v12 + 40) = v13;
  v14 = GameData_2126470;
  *(_QWORD*)(v12 + 48) = GameData_2126468;
  *(_QWORD*)(v12 + 56) = v14;
  v15 = GameData_2126440;
  *(_QWORD*)v12 = GameData_2126438;
  *(_QWORD*)(v12 + 8) = v15;
  v16 = GameData_2126450;
  *(_QWORD*)(v12 + 16) = GameData_2126448;
  *(_QWORD*)(v12 + 24) = v16;
  v17 = (const char*)GameRoutine_576600_alt1(a1, "Wdw_R");
  if (v17 != nullptr) {
    v23_.v23 = v17;
    v23_.v24 = strlen_alt1(v17);
    if (v23_.v24 != 0) {
      ui_control_1888c80((__int64)(v10 + 29), v12, (__int64)&v23_.v23);
    }
  }
  v18 = (const char*)GameRoutine_576600_alt1(a1, *(const char**)(v12 + 16));
  if (v18 != nullptr) {
    v23_.v23 = v18;
    v23_.v24 = strlen_alt1(v18);
    if (v23_.v24 != 0) {
      ui_control_1888c80((__int64)(v10 + 29), v12 + 16, (__int64)&v23_.v23);
    }
  }
  v19 = (const char*)GameRoutine_576600_alt1(a1, *(const char**)(v12 + 32));
  if (v19 != nullptr) {
    v23_.v23 = v19;
    v23_.v24 = strlen_alt1(v19);
    if (v23_.v24 != 0) {
      ui_control_1888c80((__int64)(v10 + 29), v12 + 32, (__int64)&v23_.v23);
    }
  }
  v20 = (const char*)GameRoutine_576600_alt1(a1, *(const char**)(v12 + 48));
  if (v20 != nullptr) {
    v23_.v23 = v20;
    v23_.v24 = strlen_alt1(v20);
    if (v23_.v24 != 0) {
      ui_control_1888c80((__int64)(v10 + 29), v12 + 48, (__int64)&v23_.v23);
    }
  }
  v21 = Pane_58fac0_alt1(*(_QWORD*)(v10[4] + 24LL), "BlnMargin");
  if (v21 != nullptr ||
      (v21 = GameRoutine_576740_alt1(a1, "BlnMargin")) != nullptr) {
    *((float*)v10 + 263) = (float)*(int*)&v21[*((unsigned int*)v21 + 1)];
  }
  (*(void (**)(_QWORD*, _QWORD))(v10[3] + 40LL))(v9, 0);
  v22 = 128;
  if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
    v22 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v11 + v22, v12);
  *a4 = v9;
  a4[1] = v10;
  v10[3] = GameData_21264f0;
  v10[12] = GameData_2126658;
}

void BlnPopup_19f1f60(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  atomic_uchar* v3;
  unsigned __int8 explicit;
  __int64* v5;
  __int64* v6;
  _QWORD* v8;
  atomic_uchar* v9;
  unsigned __int8 v10;
  __int64* v11;
  __int64* v12;
  char v14;
  __int64 v15;
  _QWORD* v16;
  int v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64* v21;
  _QWORD* v23;
  __int64* v24;
  char v26;
  __int64 v27;
  _QWORD* v28;
  int v29;
  __int64 v30;
  __int64 v31;
  const char* v32[2];
  const char* v33[2];
  struct {
    float32x4_t v34;
    _QWORD* v35;
    __int64 v36;
    int v37;
    int v38;
    __int64 v39;
    __int64 v40;
  } v34_;
  float v41;
  __int64 v42;

  v33[0] = "Wdw_R";
  v33[1] = (_BYTE*)((_UNKNOWN*)0x5LL);
  v2 = Element_1886290_alt1(a1, v33);
  v3 = (atomic_uchar*)GameData_21318f0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_21318f0,
                                  memory_order_acquire);
  v5 = GameData_21318e8;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_21318f0) != 0) {
    *v5 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release_alt1((__int64)GameData_21318f0);
  }
  if (v2 == nullptr) {
    goto LABEL_10;
  }
  v6 = (__int64*)(*(__int64 (**)(_QWORD*))(*v2 + 16LL))(v2);
  if (v6 != v5) {
    do {
      v6 = (__int64*)*v6;
    } while (v6 != v5 && v6 != nullptr);
    if (v6 == nullptr) {
    LABEL_10:
      v2 = nullptr;
    }
  }
  v32[0] = "Txt_R";
  v32[1] = (_BYTE*)((_UNKNOWN*)0x5LL);
  v8 = Element_1886290_alt1(a1, v32);
  v9 = (atomic_uchar*)GameData_2130ea8;
  v10 = atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                             memory_order_acquire);
  v11 = GameData_2130ea0;
  if ((v10 & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_2130ea8) != 0) {
    *v11 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release_alt1((__int64)GameData_2130ea8);
  }
  if (v8 != nullptr) {
    v12 = (__int64*)(*(__int64 (**)(_QWORD*))(*v8 + 16LL))(v8);
    if (v12 == v11) {
      if (v2 == nullptr) {
        goto LABEL_24;
      }
    }
    else {
      do {
        v12 = (__int64*)*v12;
      } while (v12 != v11 && v12 != nullptr);
      if (v2 == nullptr || v12 == nullptr) {
        goto LABEL_24;
      }
    }
    GameRoutine_190a0c0_alt1((float*)&v34_.v34, (__int64)&v42, &v41, v8,
                             v8[27]);
    v14 = *((_BYTE*)v8 + 88) | 0x10;
    v8[10] = v42;
    *((_BYTE*)v8 + 88) = v14;
    v15 = fw_memory_g_heap_manager_ptr;
    v16 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
    v17 = *(_DWORD*)(a1 + 1028);
    v18 = (__int64)v16;
    *v16 = v8;
    v34_.v35 = v16;
    v34_.v39 = 0;
    v34_.v40 = 256;
    v34_.v34 = COERCE_AS(float32x4_t, (unsigned __int64)v2);
    v34_.v36 = 1;
    v34_.v38 = 0;
    v34_.v37 = v17;
    GameRoutine_156c240_alt1(&v34_.v34);
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v15 + v19, v18);
  }
LABEL_24:
  v33[0] = "Wdw_L";
  v33[1] = (_BYTE*)((_UNKNOWN*)0x5LL);
  v20 = Element_1886290_alt1(a1, v33);
  if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_21318f0) != 0) {
    *v5 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release_alt1((__int64)GameData_21318f0);
  }
  if (v20 == nullptr) {
    goto LABEL_33;
  }
  v21 = (__int64*)(*(__int64 (**)(_QWORD*))(*v20 + 16LL))(v20);
  if (v21 != v5) {
    do {
      v21 = (__int64*)*v21;
    } while (v21 != v5 && v21 != nullptr);
    if (v21 == nullptr) {
    LABEL_33:
      v20 = nullptr;
    }
  }
  v32[0] = "Txt_L";
  v32[1] = (_BYTE*)((_UNKNOWN*)0x5LL);
  v23 = Element_1886290_alt1(a1, v32);
  if ((atomic_load_explicit(v9, memory_order_acquire) & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_2130ea8) != 0) {
    *v11 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release_alt1((__int64)GameData_2130ea8);
  }
  if (v23 != nullptr) {
    v24 = (__int64*)(*(__int64 (**)(_QWORD*))(*v23 + 16LL))(v23);
    if (v24 == v11) {
      if (v20 == nullptr) {
        return;
      }
      goto LABEL_44;
    }
    do {
      v24 = (__int64*)*v24;
    } while (v24 != v11 && v24 != nullptr);
    if (v20 != nullptr && v24 != nullptr) {
    LABEL_44:
      GameRoutine_190a0c0_alt1((float*)&v34_.v34, (__int64)&v42, &v41, v23,
                               v23[27]);
      v26 = *((_BYTE*)v23 + 88) | 0x10;
      v23[10] = v42;
      *((_BYTE*)v23 + 88) = v26;
      v27 = fw_memory_g_heap_manager_ptr;
      v28 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
      v29 = *(_DWORD*)(a1 + 1028);
      v30 = (__int64)v28;
      *v28 = v23;
      v34_.v35 = v28;
      v34_.v39 = 0;
      v34_.v40 = 256;
      v34_.v34 = COERCE_AS(float32x4_t, (unsigned __int64)v20);
      v34_.v36 = 1;
      v34_.v38 = 0;
      v34_.v37 = v29;
      GameRoutine_156c240_alt1(&v34_.v34);
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v27 + v31, v30);
    }
  }
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
  return BlnPopup_19f1f60_alt1(a1);
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
      result = BlnPopup_19f1f60_alt1(v3);
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
