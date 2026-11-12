#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_15b71b0(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_15638b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_1567fc0(_QWORD, _QWORD);
__int64 GameRoutine_1885260(_QWORD, _QWORD);
__int64 GameRoutine_1888c80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_576600(_QWORD);
__int64 GameRoutine_576740(_QWORD, _QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(void);
__int64 GameRoutine_8924a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c8aee0(_QWORD, _QWORD);
__int64 GameRoutine_d9d640(_QWORD);
__int64 GameRoutine_d9e780(_QWORD, _QWORD);
__int64 LayoutAccessor_155e140(_QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 LayoutAccessor_1562b50(_QWORD, _QWORD);
__int64 LayoutAccessor_1563030(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_15636c0(_QWORD, _QWORD, _QWORD);
__int64 ObjectBuildCreate_c23160(_QWORD);
__int64 Pane_58fac0(_QWORD, _QWORD);
__int64 SpineModel_64dde0(void);
__int64 __cxa_guard_acquire(_QWORD, _QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_ILayoutControl_UpdatePath(_QWORD);
__int64 ui_LayoutAccessor_Setup_155dea0(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_20ff038;
extern _UNKNOWN GameData_2258da0;
extern _UNKNOWN GameData_2259378;
extern _UNKNOWN GameData_226b450;
extern _UNKNOWN* GameData_21318f0;
extern _UNKNOWN* GameData_2131900;
extern __int64 (*GameData_20ff020[])();
extern __int64 (*ui_ILayoutControl_vtable)();
extern __int64 (*ui_control_Element_vtable[])();
extern __int64 GameData_220b680;
extern __int64 GameData_2258d98;
extern __int64 GameData_2259370;
extern __int64 GameData_226b448;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2131b48[2];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
void __attribute__((noreturn)) String_60a1d0(void);
__int64 Element_1884860_alt1(__int64 a1, __int64 a2, __int64 a3,
                             __int64 a4) __asm__("Element_1884860");
__int64* Element_1884d00_alt1(__int64 a1) __asm__("Element_1884d00");
__int64* Element_18850d0(__int64 a1, __int64 a2, __int64 a3);
__int64 Element_1885bc0(__int64 a1, __int64* a2);
__int64 Element_1885f00(__int64 result, __int64 a2);
_QWORD* Element_1886290(__int64 a1, _QWORD* a2);
__int64 Element_18863e0(__int64 a1, _QWORD* a2, char a3);
__int64* Element_1886580(__int64* result, char a2);
unsigned __int8* Element_1886b50(__int64 a1, int a2, _QWORD* a3);
__int64 Element_1887de0(__int64 result, __int64* a2, __int64 a3, __int64 a4);
_QWORD* Element_18882a0(_QWORD* result, __int64* a2);
__int64 Element_1888840(__int64 a1);
_QWORD* Element_1886290_alt1(__int64, const char**) __asm__("Element_1886290");
_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
_QWORD* ui_LayoutAccessor_Setup_155dea0_alt1(_QWORD*, _QWORD*, __int64) __asm__(
    "ui_LayoutAccessor_Setup_155dea0");
__int64* SpineModel_64dde0_alt1(__int64*, __int64,
                                unsigned __int64) __asm__("SpineModel_64dde0");
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1() __asm__(
    "nn_ui2d_Pane_GetRuntimeTypeInfoStatic");
__int64 GameRoutine_1888c80_alt1(__int64, __int64,
                                 __int64) __asm__("GameRoutine_1888c80");
__int64 GameRoutine_576600_alt1(__int64,
                                const char*) __asm__("GameRoutine_576600");
__int64 RuntimeBuffer_8924a0(__int64 result, __int64, unsigned __int64,
                             unsigned __int8);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
const char* GameRoutine_576740_alt1(__int64,
                                    const char*) __asm__("GameRoutine_576740");
const char* Pane_58fac0_alt1(__int64, const char*) __asm__("Pane_58fac0");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ui_ILayoutControl_UpdatePath_alt1(__int64) __asm__(
    "ui_ILayoutControl_UpdatePath");
void Element_1884860(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
void Element_1884d00(__int64 a1);

void Element_1884860(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64* v8;
  const char* v9;
  unsigned __int64 v10;
  const char* v11;
  unsigned __int64 v12;
  const char* v13;
  __int64 v14;
  __int64* v15;
  char* v16;
  const char* v17;
  int* v18;
  const char* v19;
  const char* v20;
  __int64 v21;
  const char* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64* v34;
  __int64* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  const char* v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  char v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  struct {
    const char* v56;
    __int64 v57;
    __int64 v58;
  } v56_;
  struct {
    __int64 v59;
    unsigned __int64 v60;
    __int64 v61;
  } v59_;

  v8 = GameData_2131b48[0];
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)a1 = v8 + 2;
  *(_QWORD*)(a1 + 8) = a3;
  v9 = (const char*)(*(_QWORD*)(a3 + 24) + 176LL);
  v10 = strlen_alt1(v9);
  *(_QWORD*)(a1 + 16) = v9;
  *(_QWORD*)(a1 + 24) = v10;
  v11 = *(const char**)(a3 + 48);
  v12 = strlen_alt1(v11);
  *(_QWORD*)(a1 + 32) = v11;
  *(_QWORD*)(a1 + 40) = v12;
  ui_ILayoutControl_UpdatePath_alt1(a1);
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = a1 + 120;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)a1 = ui_control_Element_vtable;
  *(_QWORD*)(a1 + 72) = GameData_20ff020;
  *(_QWORD*)(a1 + 80) = a4;
  *(_QWORD*)(a1 + 208) = 0;
  *(_DWORD*)(a1 + 168) = 1065353216;
  *(_DWORD*)(a1 + 240) = 1065353216;
  *(_DWORD*)(a1 + 280) = 1065353216;
  memset_alt1(a1 + 288, 0, 0x2E4u);
  v54 = a2;
  v56_.v56 = "Collision";
  v56_.v57 = 9;
  v13 = (const char*)GameRoutine_576600_alt1(a2, "Collision");
  if (v13 != nullptr) {
    v59_.v59 = (__int64)v13;
    v59_.v60 = strlen_alt1(v13);
    if (v59_.v60 != 0) {
      GameRoutine_1888c80_alt1(a1 + 208, (__int64)&v56_.v56,
                               (__int64)&v59_.v59);
    }
  }
  v14 = 0;
  v15 = (__int64*)fw_memory_g_heap_manager_ptr;
  v16 = (char*)&v59_.v59 + 1;
  do {
    v18 = (int*)((char*)&GameData_20ff038 + v14);
    v19 = *(const char**)((char*)&GameData_20ff038 + v14 + 8);
    v20 = Pane_58fac0_alt1(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL), v19);
    if (v20 == nullptr) {
      v20 = GameRoutine_576740_alt1(v54, v19);
      if (v20 == nullptr) {
        goto LABEL_5;
      }
    }
    v21 = *((unsigned int*)v20 + 1);
    v22 = v20;
    v23 = strlen_alt1(&v20[v21]);
    if (v23 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0_alt1();
    }
    v24 = v23;
    if (v23 >= 0x17) {
      v55 = v14;
      v26 = v16;
      if ((v23 | 7) == 0x17) {
        v27 = 26;
      }
      else {
        v27 = (v23 | 7) + 1;
      }
      v28 = fw_memory_HeapManager_Allocate_alt1(*v15, v27, 16, 0);
      v29 = v27 | 1;
      v16 = v26;
      v14 = v55;
      v25 = v28;
      v59_.v60 = v24;
      v59_.v61 = v28;
      v59_.v59 = v29;
    LABEL_18:
      memmove_alt1(v25, (__int64)&v22[v21], v24);
      goto LABEL_19;
    }
    v25 = (__int64)v16;
    LOBYTE(v59_.v59) = 2 * v23;
    if (v23 != 0) {
      goto LABEL_18;
    }
  LABEL_19:
    *(_BYTE*)(v25 + v24) = 0;
    v56_.v57 = 0;
    v56_.v58 = 0;
    v56_.v56 = nullptr;
    if ((v59_.v59 & 1) != 0) {
      v30 = v59_.v61;
    }
    else {
      v30 = (__int64)v16;
    }
    if ((v59_.v59 & 1) != 0) {
      v31 = v59_.v60;
    }
    else {
      v31 = (unsigned __int64)(unsigned __int8)v59_.v59 >> 1;
    }
    RuntimeBuffer_8924a0((__int64)&v56_.v56, v30, v31, 0xAu);
    v32 = 0;
    v33 = 0;
    v15 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      if (0xAAAAAAAAAAAAAAABLL * ((v56_.v57 - (__int64)v56_.v56) >> 3) <= v33) {
        v40 = *v18;
        v41 = a1 + 120LL * *v18 + v32;
        if ((*(_BYTE*)(v41 + 352) & 1) != 0) {
          v42 = a1 + 120LL * v40 + v32;
          **(_BYTE**)(v42 + 368) = 0;
          *(_QWORD*)(v42 + 360) = 0;
        }
        else {
          *(_BYTE*)(v41 + 352) = 0;
          *(_BYTE*)(a1 + 120LL * v40 + v32 + 353) = 0;
        }
      }
      else {
        v34 = (__int64*)&v56_.v56[v32];
        v35 = (__int64*)(a1 + v32 + 120LL * *v18 + 352);
        if (v35 != (__int64*)&v56_.v56[v32]) {
          v36 = *(unsigned __int8*)v34;
          if ((*(_BYTE*)v35 & 1) != 0) {
            v43 = &v56_.v56[v32];
            if ((v36 & 1) != 0) {
              v44 = *((_QWORD*)v43 + 2);
            }
            else {
              v44 = (__int64)(v43 + 1);
            }
            if ((v36 & 1) != 0) {
              v45 = *(_QWORD*)&v56_.v56[v32 + 8];
            }
            else {
              v45 = v36 >> 1;
            }
            SpineModel_64dde0_alt1(v35, v44, v45);
          }
          else if ((v36 & 1) != 0) {
            GameRoutine_64df20_alt1(v35, *(_QWORD*)&v56_.v56[v32 + 16],
                                    *(_QWORD*)&v56_.v56[v32 + 8]);
          }
          else {
            v37 = *v34;
            v38 = v34[1];
            v39 = v34[2];
            *(_QWORD*)(a1 + v32 + 120LL * *v18 + 360) = v38;
            v35[2] = v39;
            *v35 = v37;
          }
        }
      }
      ++v33;
      v32 += 24;
    } while (v32 != 120);
    v46 = (__int64)v56_.v56;
    if (v56_.v56 != nullptr) {
      v47 = v56_.v57;
      if (v56_.v56 == (const char*)v56_.v57) {
        goto LABEL_56;
      }
      v48 = v56_.v57;
      do {
        v49 = *(_BYTE*)(v48 - 24);
        v48 -= 24;
        if ((v49 & 1) != 0) {
          v50 = *(_QWORD*)(v47 - 8);
          if (v50 != 0) {
            if (*(_QWORD*)(*v15 + 200) != 0) {
              v51 = 128;
            }
            else {
              v51 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v15 + v51, v50);
          }
        }
        v47 = v48;
      } while (v48 != v46);
      v56_.v57 = v46;
      v46 = (__int64)v56_.v56;
      if (v56_.v56 != nullptr) {
      LABEL_56:
        if (*(_QWORD*)(*v15 + 200) != 0) {
          v52 = 128;
        }
        else {
          v52 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v15 + v52, v46);
      }
    }
    if ((v59_.v59 & 1) != 0 && v59_.v61 != 0) {
      if (*(_QWORD*)(*v15 + 200) != 0) {
        v53 = 128;
      }
      else {
        v53 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v15 + v53, v59_.v61);
    }
  LABEL_5:
    v17 =
        Pane_58fac0_alt1(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL), "HelpMoveMode");
    if (v17 != nullptr ||
        (v17 = GameRoutine_576740_alt1(v54, "HelpMoveMode")) != nullptr) {
      *(_DWORD*)(a1 + 1024) = *(_DWORD*)&v17[*((unsigned int*)v17 + 1)];
    }
    v14 += 16;
  } while (v14 != 64);
  Element_1884d00(a1);
}

void Element_1884d00(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64* v11;
  __int64* v13;
  __int64* v15;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  const char* v23[2];
  struct {
    __int64 v24;
    __int64 v25;
  } v24_;

  *(_QWORD*)(a1 + 288) = *(_QWORD*)(a1 + 288) & 0xFFFFFFFFFFFFFFF8LL | 1;
  v2 = *(_QWORD*)(a1 + 80);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 16);
    if (v3 != 0) {
      v4 = *(_QWORD*)(v2 + 8);
      v5 = *(_QWORD*)(v2 + 16);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                memory_order_relaxed);
      v24_.v24 = 0;
      v6 = *(_QWORD*)(a1 + 8);
      v7 = std___1___shared_weak_count_lock_alt1(v5);
      v24_.v25 = v7;
      if (v7 != 0) {
        v8 = v7;
        v24_.v24 = v4;
        ui_LayoutAccessor_Setup_155dea0_alt1((_QWORD*)(a1 + 88), &v24_.v24, v6);
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          std___1___shared_weak_count___release_weak_alt1(v8);
        }
      }
      else {
        ui_LayoutAccessor_Setup_155dea0_alt1((_QWORD*)(a1 + 88), &v24_.v24, v6);
      }
      std___1___shared_weak_count___release_weak_alt1(v3);
    }
    else {
      v9 = *(_QWORD*)(a1 + 8);
      v24_.v24 = 0;
      v24_.v25 = 0;
      ui_LayoutAccessor_Setup_155dea0_alt1((_QWORD*)(a1 + 88), &v24_.v24, v9);
    }
  }
  v23[0] = "Collision";
  v23[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 1);
  v10 = Element_1886290_alt1(a1, v23);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_226b450,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_226b450) != 0) {
    GameData_226b448 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release_alt1((__int64)&GameData_226b450);
  }
  if (v10 == nullptr) {
    goto LABEL_18;
  }
  v11 = (__int64*)(*(__int64 (**)(_QWORD*))(*v10 + 16LL))(v10);
  if (v11 != &GameData_226b448) {
    do {
      v11 = (__int64*)*v11;
    } while (v11 != &GameData_226b448 && v11 != nullptr);
    if (v11 == nullptr) {
    LABEL_18:
      *(_QWORD*)(a1 + 192) = 0;
      v23[0] = "Collision";
      v23[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 1);
      v10 = Element_1886290_alt1(a1, v23);
      if ((atomic_load_explicit((atomic_uchar* volatile)GameData_21318f0,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)&GameData_2258da0) != 0) {
        GameData_2258d98 =
            (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
        __cxa_guard_release_alt1((__int64)&GameData_2258da0);
      }
      if (v10 == nullptr) {
        goto LABEL_27;
      }
      v13 = (__int64*)(*(__int64 (**)(_QWORD*))(*v10 + 16LL))(v10);
      if (v13 != &GameData_2258d98) {
        do {
          v13 = (__int64*)*v13;
        } while (v13 != &GameData_2258d98 && v13 != nullptr);
        if (v13 == nullptr) {
        LABEL_27:
          *(_QWORD*)(a1 + 192) = 0;
          v23[0] = "Collision";
          v23[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 1);
          v10 = Element_1886290_alt1(a1, v23);
          if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2131900,
                                    memory_order_acquire) &
               1) == 0 &&
              __cxa_guard_acquire_alt1((__int64)&GameData_2259378) != 0) {
            GameData_2259370 =
                (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
            __cxa_guard_release_alt1((__int64)&GameData_2259378);
          }
          if (v10 == nullptr) {
            goto LABEL_36;
          }
          v15 = (__int64*)(*(__int64 (**)(_QWORD*))(*v10 + 16LL))(v10);
          if (v15 != &GameData_2259370) {
            do {
              v15 = (__int64*)*v15;
            } while (v15 != &GameData_2259370 && v15 != nullptr);
            if (v15 == nullptr) {
            LABEL_36:
              v10 = nullptr;
            }
          }
        }
      }
    }
  }
  v17 = *(_BYTE*)(a1 + 832);
  *(_QWORD*)(a1 + 192) = v10;
  if ((v17 & 1) != 0) {
    **(_BYTE**)(a1 + 848) = 0;
    *(_QWORD*)(a1 + 840) = 0;
    if ((*(_BYTE*)(a1 + 856) & 1) != 0) {
    LABEL_39:
      **(_BYTE**)(a1 + 872) = 0;
      *(_QWORD*)(a1 + 864) = 0;
      if ((*(_BYTE*)(a1 + 880) & 1) != 0) {
        goto LABEL_40;
      }
    LABEL_44:
      *(_WORD*)(a1 + 880) = 0;
      if ((*(_BYTE*)(a1 + 904) & 1) != 0) {
        goto LABEL_41;
      }
    LABEL_45:
      *(_WORD*)(a1 + 904) = 0;
      goto LABEL_46;
    }
  }
  else {
    *(_WORD*)(a1 + 832) = 0;
    if ((*(_BYTE*)(a1 + 856) & 1) != 0) {
      goto LABEL_39;
    }
  }
  *(_WORD*)(a1 + 856) = 0;
  if ((*(_BYTE*)(a1 + 880) & 1) == 0) {
    goto LABEL_44;
  }
LABEL_40:
  **(_BYTE**)(a1 + 896) = 0;
  *(_QWORD*)(a1 + 888) = 0;
  if ((*(_BYTE*)(a1 + 904) & 1) == 0) {
    goto LABEL_45;
  }
LABEL_41:
  **(_BYTE**)(a1 + 920) = 0;
  *(_QWORD*)(a1 + 912) = 0;
LABEL_46:
  v18 = GameData_220b680;
  v19 = *(_QWORD*)(GameData_220b680 + 416);
  v20 = GameData_220b680 + 408;
  if (v19 == GameData_220b680 + 408) {
    goto LABEL_49;
  }
  while (*(_QWORD*)(v19 + 16) != a1) {
    v19 = *(_QWORD*)(v19 + 8);
    if (v19 == v20) {
      goto LABEL_49;
    }
  }
  if (v19 == v20) {
  LABEL_49:
    v21 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
    v21[1] = v20;
    v21[2] = a1;
    v22 = *(_QWORD*)(v18 + 408);
    *v21 = v22;
    *(_QWORD*)(v22 + 8) = v21;
    *(_QWORD*)(v18 + 408) = v21;
    ++*(_QWORD*)(v18 + 424);
  }
}

__int64* Element_18850d0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v6 = GameData_2131b48[0];
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)a1 = v6 + 2;
  *(_QWORD*)(a1 + 8) = a3;
  v7 = *(_QWORD*)(a3 + 24) + 176LL;
  v8 = strlen(v7);
  *(_QWORD*)(a1 + 16) = v7;
  *(_QWORD*)(a1 + 24) = v8;
  v9 = *(_QWORD*)(a3 + 48);
  v10 = strlen(v9);
  *(_QWORD*)(a1 + 32) = v9;
  *(_QWORD*)(a1 + 40) = v10;
  ui_ILayoutControl_UpdatePath(a1);
  *(_QWORD*)a1 = ui_control_Element_vtable;
  *(_QWORD*)(a1 + 72) = GameData_20ff020;
  v11 = *(_QWORD*)(a2 + 80);
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 112) = a1 + 120;
  *(_QWORD*)(a1 + 80) = v11;
  *(_QWORD*)(a1 + 88) = 0;
  *(_DWORD*)(a1 + 168) = 1065353216;
  GameRoutine_1885260(a1 + 208, a2 + 208);
  GameRoutine_1885260(a1 + 248, a2 + 248);
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  Element_18882a0(a1 + 352, a2 + 352);
  Element_18882a0(a1 + 472, a2 + 472);
  Element_18882a0(a1 + 592, a2 + 592);
  Element_18882a0(a1 + 712, a2 + 712);
  *(_QWORD*)(a1 + 1016) = 0;
  *(_QWORD*)(a1 + 1008) = 0;
  *(_QWORD*)(a1 + 1000) = 0;
  *(_QWORD*)(a1 + 992) = 0;
  *(_QWORD*)(a1 + 984) = 0;
  *(_QWORD*)(a1 + 976) = 0;
  *(_QWORD*)(a1 + 968) = 0;
  *(_QWORD*)(a1 + 960) = 0;
  *(_QWORD*)(a1 + 952) = 0;
  *(_QWORD*)(a1 + 944) = 0;
  *(_QWORD*)(a1 + 936) = 0;
  *(_QWORD*)(a1 + 928) = 0;
  *(_QWORD*)(a1 + 920) = 0;
  *(_QWORD*)(a1 + 912) = 0;
  *(_QWORD*)(a1 + 904) = 0;
  *(_QWORD*)(a1 + 896) = 0;
  *(_QWORD*)(a1 + 888) = 0;
  *(_QWORD*)(a1 + 880) = 0;
  *(_QWORD*)(a1 + 872) = 0;
  *(_QWORD*)(a1 + 864) = 0;
  *(_QWORD*)(a1 + 856) = 0;
  *(_QWORD*)(a1 + 848) = 0;
  *(_QWORD*)(a1 + 840) = 0;
  *(_QWORD*)(a1 + 832) = 0;
  *(_DWORD*)(a1 + 1024) = *(_DWORD*)(a2 + 1024);
  return Element_1884d00_alt1(a1);
}

__int64 Element_1885bc0(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;

  v2 = *a2;
  result = *(_QWORD*)(*a2 + 320);
  *(_QWORD*)(v2 + 312) = 0;
  *(_QWORD*)(v2 + 320) = 0;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v6 = *(__int64**)(a1 + 328);
  v7 = *(__int64**)(a1 + 336);
  if (v6 != v7) {
    while (1) {
      result = v6[1];
      if (result != 0) {
        result = std___1___shared_weak_count_lock(result);
        v8 = *a2;
        if (result != 0) {
          v9 = *v6;
          if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v10 = result;
            (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
            result = std___1___shared_weak_count___release_weak(v10);
          }
          if (v8 == v9) {
            break;
          }
          goto LABEL_6;
        }
      }
      else {
        v8 = *a2;
      }
      if (v8 == 0) {
        break;
      }
    LABEL_6:
      v6 += 2;
      if (v6 == v7) {
        v6 = v7;
        goto LABEL_32;
      }
    }
  }
  v11 = v6 + 2;
  if (v6 != v7 && v11 != v7) {
    while (1) {
      result = v11[1];
      if (result == 0) {
        break;
      }
      result = std___1___shared_weak_count_lock(result);
      v13 = *a2;
      if (result == 0) {
        goto LABEL_26;
      }
      v14 = *v11;
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v13 != v14) {
          goto LABEL_27;
        }
      }
      else {
        v17 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak(v17);
        if (v13 != v14) {
        LABEL_27:
          v15 = *v11;
          v16 = v11[1];
          *v11 = 0;
          v11[1] = 0;
          result = v6[1];
          *v6 = v15;
          v6[1] = v16;
          if (result != 0) {
            result = std___1___shared_weak_count___release_weak(result);
          }
          v6 += 2;
        }
      }
    LABEL_19:
      v11 += 2;
      if (v11 == v7) {
        goto LABEL_32;
      }
    }
    v13 = *a2;
  LABEL_26:
    if (v13 != 0) {
      goto LABEL_27;
    }
    goto LABEL_19;
  }

LABEL_32:
  v18 = *(__int64**)(a1 + 336);
  if (v6 != v18) {
    do {
      result = *(v18 - 1);
      if (result != 0) {
        result = std___1___shared_weak_count___release_weak(result);
      }
      v18 -= 2;
    } while (v18 != v6);
    *(_QWORD*)(a1 + 336) = v6;
  }
  return result;
}

__int64 Element_1885f00(__int64 result, __int64 a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = *(__int64**)(result + 328);
  v3 = *(__int64**)(result + 336);
  if (v2 == v3) {
    return result;
  }
  while (1) {
    v9 = 0;
    result = v2[1];
    if (result != 0) {
      break;
    }
  LABEL_3:
    v2 += 2;
    if (v2 == v3) {
      return result;
    }
  }
  result = std___1___shared_weak_count_lock(result);
  v10 = result;
  if (result != 0) {
    v9 = *v2;
    if (v9 == 0) {
    LABEL_11:
      if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
        v7 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak(v7);
      }
      goto LABEL_3;
    }
  }
  else if (v9 == 0) {
    goto LABEL_11;
  }
  v5 = *(_QWORD*)(a2 + 32);
  if (v5 == 0) {
    GameRoutine_60a310(0);
  }
  v6 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v5 + 48LL))(v5, &v9);
  result = v10;
  if ((v6 & 1) == 0) {
    goto LABEL_11;
  }
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    v8 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

_QWORD* Element_1886290(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  _QWORD* result;
  _QWORD* v9;
  __int64 v10;
  char* v11;
  _QWORD v12[2];
  char* v13;

  v2 = *a2;
  v4 = strlen(*a2);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
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
    v12[1] = v5;
    v13 = v6;
    v12[0] = v7 | 1;
  }
  else {
    LOBYTE(v12[0]) = 2 * v4;
    v6 = (char*)v12 + 1;
    if (v4 == 0) {
      goto LABEL_10;
    }
  }
  memmove(v6, v2, v5);

LABEL_10:
  v6[v5] = 0;
  result = (_QWORD*)GameRoutine_d9e780(a1 + 208, v12);
  if ((v12[0] & 1) != 0 && v13 != nullptr) {
    v9 = result;
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
    result = v9;
  }
  if (result != nullptr) {
    if ((result[5] & 1) != 0) {
      v11 = (char*)result[7];
    }
    else {
      v11 = (char*)result + 41;
    }
    return X8CALL_X0(_QWORD*,
                     (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD,
                                                             char*, __int64))(
                         **(_QWORD**)(*(_QWORD*)(a1 + 8) + 24LL) + 120LL))(
                         (void*)*(_QWORD**)(*(_QWORD*)(a1 + 8) + 24LL),
                         *(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL), v11, 1));
  }
  return result;
}

__int64 Element_18863e0(__int64 a1, _QWORD* a2, char a3)
{
  __int64 v3;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD v14[2];
  char* v15;

  v3 = *a2;
  v6 = strlen(*a2);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16,
                                               0);
    v14[1] = v7;
    v15 = v8;
    v14[0] = v9 | 1;
  }
  else {
    LOBYTE(v14[0]) = 2 * v6;
    v8 = (char*)v14 + 1;
    if (v6 == 0) {
      goto LABEL_10;
    }
  }
  memmove(v8, v3, v7);

LABEL_10:
  v8[v7] = 0;
  result = GameRoutine_1567fc0(a1 + 248, v14);
  if ((v14[0] & 1) != 0 && v15 != nullptr) {
    v11 = result;
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
    result = v11;
  }
  if (result != 0) {
    if ((*(_BYTE*)(result + 40) & 1) != 0) {
      v13 = *(_QWORD*)(result + 56);
    }
    else {
      v13 = result + 41;
    }
    if ((LayoutAccessor_1562b50(a1 + 88, v13) & 1) != 0) {
      LayoutAccessor_1562680(a1 + 88, v13, 1.0);
      if ((a3 & 1) != 0) {
        GameRoutine_15638b0(a1 + 88, v13, 0);
        LayoutAccessor_15636c0(a1 + 88, v13, 0);
        LayoutAccessor_1563030(a1 + 88, v13, 0);
      }
      return 1;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64* Element_1886580(__int64* result, char a2)
{
  __int64 v2;
  __int64 v3;
  _BYTE* v4;
  __int64 v6;
  _QWORD v8[2];

  v2 = (__int64)result;
  if ((a2 & 1) == 0) {
    goto LABEL_21;
  }
  v8[0] = "Collision";
  v8[1] = 9;
  v4 = Element_1886290((__int64)result, v8);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_226b450,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_226b450, v3) != 0) {
    GameData_226b448 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
    __cxa_guard_release(&GameData_226b450);
  }
  if (v4 != nullptr) {
    result = (__int64*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v4 + 16LL))(v4);
    if (result == &GameData_226b448) {
      goto LABEL_20;
    }
    do {
      result = (__int64*)*result;
    } while (result != &GameData_226b448 && result != nullptr);
    if (result != nullptr) {
      goto LABEL_20;
    }
  }
  *(_QWORD*)(v2 + 192) = 0;
  v8[0] = "Collision";
  v8[1] = 9;
  result = Element_1886290(v2, v8);
  v4 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_21318f0,
                            memory_order_acquire) &
       1) == 0) {
    result = (__int64*)__cxa_guard_acquire(&GameData_2258da0, v6);
    if ((_DWORD)result != 0) {
      GameData_2258d98 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      result = (__int64*)__cxa_guard_release(&GameData_2258da0);
    }
  }
  if (v4 == nullptr) {
    goto LABEL_21;
  }
  result = (__int64*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v4 + 16LL))(v4);
  if (result == &GameData_2258d98) {
    goto LABEL_20;
  }
  do {
    result = (__int64*)*result;
  } while (result != &GameData_2258d98 && result != nullptr);
  if (result != nullptr) {
  LABEL_20:
    *(_QWORD*)(v2 + 192) = v4;
    v4[88] |= 1u;
  }
  else {
  LABEL_21:
    *(_QWORD*)(v2 + 192) = 0;
  }
  return result;
}

unsigned __int8* Element_1886b50(__int64 a1, int a2, _QWORD* a3)
{
  unsigned __int8* result;
  unsigned __int64 v4;
  unsigned __int64 v5;

  result = (unsigned __int8*)(a1 + 24LL * a2 + 832);
  v4 = *result;
  if (a3[1] != 0) {
    v5 = *((_QWORD*)result + 1);
    if ((v4 & 1) == 0) {
      v5 = v4 >> 1;
    }
    if (v5 != 0) {
      if ((v4 & 1) != 0) {
        **((_BYTE**)result + 2) = 0;
        *((_QWORD*)result + 1) = 0;
      }
      else {
        *(_WORD*)result = 0;
      }
    }
    return (unsigned __int8*)GameRoutine_60a060(result, *a3, a3[1]);
  }
  else if ((v4 & 1) != 0) {
    **((_BYTE**)result + 2) = 0;
    *((_QWORD*)result + 1) = 0;
  }
  else {
    *(_WORD*)result = 0;
  }
  return result;
}

__int64 Element_1887de0(__int64 result, __int64* a2, __int64 a3, __int64 a4)
{
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  int v23;
  _QWORD* v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  _QWORD* v27;
  char* v28;
  char* v29;
  _QWORD* v30;
  unsigned __int64 v31;
  char* v32;
  unsigned __int64 v33;
  char* v34;
  _QWORD* v35;
  bool v36;
  unsigned __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  _QWORD v41[2];
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  char* v46;

  v4 = (_QWORD*)result;
  if (a4 == 0) {
    *(_QWORD*)result = 0;
    *(_QWORD*)(result + 8) = 0;
    return result;
  }
  v5 = *a2;
  v8 = strlen(a3);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v9 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11,
                                                16, 0);
    v45 = v9;
    v46 = v10;
    v44 = v11 | 1;
  }
  else {
    LOBYTE(v44) = 2 * v8;
    v10 = (char*)&v44 + 1;
    if (v8 == 0) {
      goto LABEL_12;
    }
  }
  memmove(v10, a3, v9);

LABEL_12:
  v10[v9] = 0;
  do {
    v12 = v46;
    v13 = *(_QWORD*)(v5 + 80);
    v14 = (unsigned __int64)(unsigned __int8)v44 >> 1;
    if ((v44 & 1) != 0) {
      v14 = v45;
    }
    else {
      v12 = (char*)&v44 + 1;
    }
    v41[0] = v12;
    v41[1] = v14;
    GameRoutine_15b71b0((void*)&v42, v13, v41);
    result = v43;
    *v4 = 0;
    v4[1] = 0;
    if (result == 0) {
    LABEL_28:
      v18 = 3;
      v19 = v4[1];
      if (v19 == 0) {
        continue;
      }
    LABEL_54:
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        result = std___1___shared_weak_count___release_weak(v19);
      }
      continue;
    }
    v15 = std___1___shared_weak_count_lock(result);
    v4[1] = v15;
    if (v15 == 0) {
      v16 = nullptr;
      result = v43;
      if (v43 == 0) {
        goto LABEL_21;
      }
    LABEL_20:
      result = std___1___shared_weak_count___release_weak(result);
      goto LABEL_21;
    }
    v16 = v42;
    *v4 = v42;
    result = v43;
    if (v43 != 0) {
      goto LABEL_20;
    }
  LABEL_21:
    if (v16 == nullptr || *(_QWORD**)a2[1] == v16) {
      goto LABEL_28;
    }
    if (((*(__int64 (**)(_QWORD*))(*v16 + 32LL))(v16) & 1) != 0) {
      v17 = *(_QWORD*)(v16[1] + 24LL);
      while (1) {
        v17 = *(_QWORD*)(v17 + 24);
        if (v17 == 0) {
          break;
        }
        if ((*(_BYTE*)(v17 + 88) & 1) == 0) {
          goto LABEL_40;
        }
      }
      v20 = a2[2];
      result = *(_QWORD*)(v20 + 32);
      if (result == 0) {
        goto LABEL_57;
      }
      v39 = v16;
      v40 = v15;
      if (v15 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                  memory_order_relaxed);
        result = *(_QWORD*)(v20 + 32);
        if (result == 0) {
          GameRoutine_60a310(0);
        }
      }
      result = (*(__int64 (**)(__int64, _QWORD**))(*(_QWORD*)result + 48LL))(
          result, &v39);
      v21 = v40;
      if (v40 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        v22 = result;
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        std___1___shared_weak_count___release_weak(v21);
        result = v22;
      }
      if ((result & 1) != 0) {
        goto LABEL_57;
      }
      v16 = (_QWORD*)*v4;
    }
  LABEL_40:
    v23 = *(_DWORD*)a2[3];
    v24 = &v16[3 * v23];
    v25 = *((unsigned __int8*)v24 + 832);
    if ((v25 & 1) != 0) {
      v26 = v24[105];
    }
    else {
      v26 = v25 >> 1;
    }
    if (v26 != 0) {
      v27 = v24 + 104;
      v28 = (char*)v24[106];
      if ((v25 & 1) != 0) {
        v29 = v28;
      }
      else {
        v29 = (char*)v27 + 1;
      }
    }
    else {
      v30 = &v16[15 * v23];
      v31 = *((unsigned __int8*)v30 + 352);
      v32 = (char*)v30 + 353;
      v35 = v30 + 45;
      v33 = v30[45];
      v34 = (char*)v35[1];
      v36 = (v31 & 1) == 0;
      v37 = v31 >> 1;
      if (v36) {
        v29 = v32;
      }
      else {
        v29 = v34;
      }
      if (v36) {
        v26 = v37;
      }
      else {
        v26 = v33;
      }
    }
    result = GameRoutine_60a060(&v44, v29, v26);
    v18 = 0;
    v19 = v4[1];
    if (v19 != 0) {
      goto LABEL_54;
    }
  } while (v18 == 0);
  *v4 = 0;
  v4[1] = 0;

LABEL_57:
  if ((v44 & 1) != 0 && v46 != nullptr) {
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v38 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v38);
  }
  return result;
}

_QWORD* Element_18882a0(_QWORD* result, __int64* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v3 = result;
  if ((*(_BYTE*)a2 & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(result, a2[2]);
  }
  else {
    v4 = *a2;
    v5 = a2[2];
    result[1] = a2[1];
    result[2] = v5;
    *result = v4;
  }
  if ((a2[3] & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(v3 + 3, a2[5]);
  }
  else {
    v6 = a2[3];
    v7 = a2[5];
    v3[4] = a2[4];
    v3[5] = v7;
    v3[3] = v6;
  }
  if ((a2[6] & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(v3 + 6, a2[8]);
  }
  else {
    v8 = a2[6];
    v9 = a2[8];
    v3[7] = a2[7];
    v3[8] = v9;
    v3[6] = v8;
  }
  if ((a2[9] & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(v3 + 9, a2[11]);
  }
  else {
    v10 = a2[9];
    v11 = a2[11];
    v3[10] = a2[10];
    v3[11] = v11;
    v3[9] = v10;
  }
  if ((a2[12] & 1) != 0) {
    return (_QWORD*)fw_text_String_CopyTerminated(v3 + 12, a2[14]);
  }
  v12 = a2[12];
  v13 = a2[14];
  v3[13] = a2[13];
  v3[14] = v13;
  v3[12] = v12;
  return result;
}

__int64 Element_1888840(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 result;
  __int64 v19;

  *(_QWORD*)a1 = ui_control_Element_vtable;
  *(_QWORD*)(a1 + 72) = GameData_20ff020;
  LayoutAccessor_155e140(a1 + 88);
  GameRoutine_c8aee0(GameData_220b680, a1);
  if ((*(_BYTE*)(a1 + 1000) & 1) != 0 && *(_QWORD*)(a1 + 1016) != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  if ((*(_BYTE*)(a1 + 976) & 1) != 0 && *(_QWORD*)(a1 + 992) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  if ((*(_BYTE*)(a1 + 952) & 1) != 0 && *(_QWORD*)(a1 + 968) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  if ((*(_BYTE*)(a1 + 928) & 1) != 0 && *(_QWORD*)(a1 + 944) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  if ((*(_BYTE*)(a1 + 904) & 1) != 0 && *(_QWORD*)(a1 + 920) != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
  }
  if ((*(_BYTE*)(a1 + 880) & 1) != 0 && *(_QWORD*)(a1 + 896) != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  if ((*(_BYTE*)(a1 + 856) & 1) != 0 && *(_QWORD*)(a1 + 872) != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
  }
  if ((*(_BYTE*)(a1 + 832) & 1) != 0 && *(_QWORD*)(a1 + 848) != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
  }
  ObjectBuildCreate_c23160(a1 + 712);
  ObjectBuildCreate_c23160(a1 + 592);
  ObjectBuildCreate_c23160(a1 + 472);
  ObjectBuildCreate_c23160(a1 + 352);
  v10 = *(_QWORD*)(a1 + 328);
  if (v10 != 0) {
    v11 = *(_QWORD*)(a1 + 336);
    if (v10 == v11) {
      goto LABEL_48;
    }
    do {
      v12 = *(_QWORD*)(v11 - 8);
      if (v12 != 0) {
        std___1___shared_weak_count___release_weak(v12);
      }
      v11 -= 16;
    } while (v11 != v10);
    v13 = *(_QWORD*)(a1 + 328);
    *(_QWORD*)(a1 + 336) = v10;
    if (v13 != 0) {
    LABEL_48:
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v14);
    }
  }
  v15 = *(_QWORD*)(a1 + 320);
  if (v15 != 0) {
    std___1___shared_weak_count___release_weak(v15);
  }
  v16 = *(_QWORD*)(a1 + 304);
  if (v16 != 0) {
    std___1___shared_weak_count___release_weak(v16);
  }
  GameRoutine_d9d640(a1 + 248);
  GameRoutine_d9d640(a1 + 208);
  LayoutAccessor_155e140(a1 + 88);
  v17 = *(_QWORD*)(a1 + 184);
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak(v17);
  }
  GameRoutine_1564060(a1 + 136);
  GameRoutine_1563f90(a1 + 112, *(_QWORD*)(a1 + 120));
  result = *(_QWORD*)(a1 + 96);
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  *(_QWORD*)a1 = &ui_ILayoutControl_vtable;
  if ((*(_BYTE*)(a1 + 48) & 1) != 0 && *(_QWORD*)(a1 + 64) != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
  }
  return result;
}

#pragma GCC visibility pop
