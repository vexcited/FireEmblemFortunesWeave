#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* Element_1886290(__int64, _QWORD*);
__int64 Element_1884860(__int64, __int64, __int64, __int64);
__int64 Element_1888840(__int64);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1888c80(__int64, __int64, __int64);
__int64 GameRoutine_188c4a0(_QWORD, _QWORD);
__int64 GameRoutine_18ae5e0(void);
__int64 GameRoutine_576600(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Registration_a4da40(_QWORD);
__int64 __cxa_guard_acquire(_QWORD, _QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64* Element_18850d0(__int64, __int64, __int64);
extern _UNKNOWN GameData_22416d8;
extern _UNKNOWN* GameData_2130ea8;
extern __int64 (*GameData_20ff810[])();
extern __int64 (*ui_Event_vtable[])();
extern __int64 (*ui_control_MenuItem_vtable[])();
extern __int64 GameData_2132070;
extern __int64 GameData_21f1e08;
extern __int64 GameData_22416d0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d890[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64* MenuItem_188afa0_alt1(_QWORD* a1, __int64 a2, __int64 a3,
                               __int64 a4) __asm__("MenuItem_188afa0");
__int64* MenuItem_188b0e0_alt1(_QWORD* a1, __int64 a2,
                               __int64 a3) __asm__("MenuItem_188b0e0");
_QWORD* MenuItem_188b5e0(_QWORD* result, __int64 a2);
_QWORD* MenuItem_188b880_alt2(_QWORD* result,
                              __int64 a2) __asm__("MenuItem_188b880");
__int64 MenuItem_188be80(_QWORD* a1, char a2);
__int64 MenuItem_188bf10_alt1(__int64 a1,
                              __int64 a2) __asm__("MenuItem_188bf10");
_QWORD* MenuItem_188c0a0_alt1(_QWORD* a1, char a2,
                              int a3) __asm__("MenuItem_188c0a0");
_QWORD* MenuItem_188c0f0_alt1(_QWORD* a1, char a2,
                              int a3) __asm__("MenuItem_188c0f0");
_QWORD* MenuItem_188c140_alt1(_QWORD* a1, char a2) __asm__("MenuItem_188c140");
_QWORD* MenuItem_188c190_alt1(_QWORD* a1, char a2) __asm__("MenuItem_188c190");
_QWORD* MenuItem_188c220_alt1(_QWORD* a1,
                              _QWORD* a2) __asm__("MenuItem_188c220");
_QWORD* MenuItem_188c270_alt1(_QWORD* result, __int64 a2,
                              int* a3) __asm__("MenuItem_188c270");
__int64 MenuItem_188c2d0();
__int64 MenuItem_188d320_alt1(__int64* a1) __asm__("MenuItem_188d320");
__int64 Registration_a4da40_alt1(__int64,
                                 __int64) __asm__("Registration_a4da40");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void MenuItem_188b880_alt1(__int64, __int64) __asm__("MenuItem_188b880");
__int64 MenuItem_188bf10(__int64 a1, _BYTE* a2);
void MenuItem_188c0a0(__int64 a1, char a2, int a3);
void MenuItem_188c0f0(__int64 a1, char a2, int a3);
void MenuItem_188c140(__int64 a1, char a2);
void MenuItem_188c190(__int64 a1, char a2);
void MenuItem_188c220(__int64 a1, _QWORD* a2);
void MenuItem_188c270(__int64 a1, __int64 a2, int* a3);
__int64* Element_1886290_alt1(__int64, const char**) __asm__("Element_1886290");
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1() __asm__(
    "nn_ui2d_Pane_GetRuntimeTypeInfoStatic");
__int64 Element_18850d0_alt1(__int64, __int64,
                             __int64) __asm__("Element_18850d0");
__int64 GameRoutine_576600_alt1(__int64,
                                const char*) __asm__("GameRoutine_576600");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 ui_control_1888c80(__int64, __int64, __int64);
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void Element_1888840_alt1(__int64) __asm__("Element_1888840");
void GameRoutine_188c4a0_alt1(__int64*, _QWORD*) __asm__("GameRoutine_188c4a0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MenuItem_188afa0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4);
void MenuItem_188b0e0(_QWORD* a1, __int64 a2, __int64 a3);
void MenuItem_188b880(__int64 a1, __int64 a2);
void MenuItem_188d320(__int64* a1);

void MenuItem_188afa0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4)
{
  const char* v6;
  __int64* v7;
  __int64* v8;
  _QWORD v10[2];
  struct {
    const char* v11;
    unsigned __int64 v12;
  } v11_;

  Element_1884860((__int64)a1, a2, a3, a4);
  a1[129] = 0;
  a1[132] = 0;
  *a1 = ui_control_MenuItem_vtable;
  a1[9] = GameData_20ff810;
  a1[130] = a1 + 130;
  a1[131] = a1 + 130;
  v10[0] = "Name";
  v10[1] = 4;
  v6 = (const char*)GameRoutine_576600_alt1(a2, "Name");
  if (v6 != nullptr) {
    v11_.v11 = v6;
    v11_.v12 = strlen_alt1(v6);
    if (v11_.v12 != 0) {
      ui_control_1888c80((__int64)(a1 + 26), (__int64)v10, (__int64)&v11_.v11);
    }
  }
  v11_.v11 = "Name";
  v11_.v12 = 4;
  v7 = Element_1886290_alt1((__int64)a1, &v11_.v11);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_22416d8) != 0) {
    GameData_22416d0 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release_alt1((__int64)&GameData_22416d8);
  }
  if (v7 == nullptr) {
    goto LABEL_13;
  }
  v8 = (__int64*)(*(__int64 (**)(__int64*))(*v7 + 16))(v7);
  if (v8 != &GameData_22416d0) {
    do {
      v8 = (__int64*)*v8;
    } while (v8 != &GameData_22416d0 && v8 != nullptr);
    if (v8 == nullptr) {
    LABEL_13:
      v7 = nullptr;
    }
  }
  a1[129] = v7;
}

void MenuItem_188b0e0(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64* v4;
  __int64* v5;
  const char* v7[2];

  Element_18850d0_alt1((__int64)a1, a2, a3);
  a1[129] = 0;
  a1[132] = 0;
  *a1 = ui_control_MenuItem_vtable;
  a1[9] = GameData_20ff810;
  a1[130] = a1 + 130;
  a1[131] = a1 + 130;
  v7[0] = "Name";
  v7[1] = (_BYTE*)(*(_WORD**)0x4LL);
  v4 = Element_1886290_alt1((__int64)a1, v7);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_22416d8) != 0) {
    GameData_22416d0 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release_alt1((__int64)&GameData_22416d8);
  }
  if (v4 == nullptr) {
    goto LABEL_10;
  }
  v5 = (__int64*)(*(__int64 (**)(__int64*))(*v4 + 16))(v4);
  if (v5 != &GameData_22416d0) {
    do {
      v5 = (__int64*)*v5;
    } while (v5 != &GameData_22416d0 && v5 != nullptr);
    if (v5 == nullptr) {
    LABEL_10:
      v4 = nullptr;
    }
  }
  a1[129] = v4;
}

_QWORD* MenuItem_188b5e0(_QWORD* result, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v5;
  __int64 v6;

  v2 = (_QWORD*)result[131];
  v3 = result + 130;
  v5 = result;
  if (v2 == result + 130) {
    goto LABEL_4;
  }
  while (v2[2] != a2) {
    v2 = (_QWORD*)v2[1];
    if (v2 == v3) {
      goto LABEL_4;
    }
  }
  if (v2 == v3) {
  LABEL_4:
    result = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
    v6 = v5[130];
    result[1] = v3;
    result[2] = a2;
    *result = v6;
    *(_QWORD*)(v6 + 8) = result;
    v5[130] = result;
    ++v5[132];
  }
  return result;
}

void MenuItem_188b880(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  unsigned __int64 v19;
  __int64 v20;
  char* v21;
  char* v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  signed __int64 v28;
  bool v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  signed __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64* v46;
  _QWORD* v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v60;
  __int64 v61;
  struct {
    __int64 v62;
    __int64* v63;
    __int64* v64;
    unsigned __int64 v65;
    unsigned __int64 v66;
    __int64 v67;
  } v62_;
  __int64 v68;

  v62_.v66 = 0;
  v62_.v67 = 0;
  v2 = *(_QWORD*)(a1 + 1048);
  v3 = a1 + 1040;
  v62_.v64 = nullptr;
  v62_.v65 = 0;
  v62_.v62 = 0;
  v62_.v63 = nullptr;
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v2 != a1 + 1040) {
    v5 = 0;
    v6 = nullptr;
    v7 = nullptr;
    v8 = 0;
    v60 = a1 + 1040;
    while (1) {
      v13 = (char*)v7 - (char*)v6;
      if (v7 == v6) {
        v14 = 0;
      }
      else {
        v14 = (((char*)v7 - (char*)v6) << 6) - 1;
      }
      v10 = v5 + v8;
      if (v14 != v5 + v8) {
        goto LABEL_6;
      }
      if (v5 >= 0x200) {
        break;
      }
      v16 = (__int64*)v62_.v65;
      v17 = v62_.v62;
      if (v13 >= v62_.v65 - v62_.v62) {
        v18 = v4;
        v61 = v62_.v62;
        if (v62_.v65 == v62_.v62) {
          v19 = 1;
        }
        else {
          v19 = (__int64)(v62_.v65 - v62_.v62) >> 2;
        }
        if (v19 >> 61 != 0) {
          goto LABEL_105;
        }
        v20 = fw_memory_HeapManager_Allocate_alt1(*v18, 8 * v19, 16, 0);
        v21 = (char*)(v20 + v13);
        v22 = (char*)(v20 + 8 * v19);
        v23 = fw_memory_HeapManager_Allocate_alt1(*v18, 4096, 16, 0);
        if (v13 == 8 * v19) {
          v3 = v60;
          if (v7 != v6) {
            v4 = v18;
            v21 -= 8 * (((v13 >> 3) + 1 +
                         ((unsigned __int64)((v13 >> 3) + 1) >> 63)) >>
                        1);
            *(_QWORD*)v21 = v23;
            v24 = v21 + 8;
            goto LABEL_26;
          }
          v4 = v18;
          v39 = v23;
          v21 = (char*)fw_memory_HeapManager_Allocate_alt1(*v18, 8, 16, 0);
          v40 = 128;
          if (*(_QWORD*)(*v18 + 200) == 0) {
            v40 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v18 + v40, v20);
          v25 = v61;
          *(_QWORD*)v21 = v39;
          v24 = v21 + 8;
          v20 = (__int64)v21;
          v22 = v21 + 8;
        }
        else {
          v3 = v60;
          *(_QWORD*)v21 = v23;
          v24 = v21 + 8;
          v4 = v18;
          if (v7 == v6) {
            v25 = v61;
          }
          else {
            do {
            LABEL_26:
              if (v21 == (char*)v20) {
                if (v24 >= v22) {
                  if (v22 == v21) {
                    v31 = 1;
                  }
                  else {
                    v31 = (v22 - v21) >> 2;
                  }
                  if (v31 >> 61 != 0) {
                    goto LABEL_105;
                  }
                  v32 =
                      fw_memory_HeapManager_Allocate_alt1(*v4, 8 * v31, 16, 0);
                  v33 = v32;
                  v26 = (char*)(v32 + ((2 * v31 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                  v34 = v24 - v21;
                  v29 = v24 == v21;
                  v24 = v26;
                  if (!v29) {
                    v24 = &v26[v34];
                    v35 =
                        (_QWORD*)(v32 + ((2 * v31 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                    do {
                      v36 = *(_QWORD*)v21;
                      v21 += 8;
                      v34 -= 8LL;
                      *v35++ = v36;
                    } while (v34 != 0);
                  }
                  v22 = (char*)(v32 + 8 * v31);
                  v37 = 128;
                  if (*(_QWORD*)(*v4 + 200) == 0) {
                    v37 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*v4 + v37, v20);
                  v20 = v33;
                }
                else {
                  v28 = v24 - v21;
                  v30 = v24 - v21;
                  v29 = v24 == v21;
                  v24 +=
                      8 *
                      ((((v22 - v24) >> 3) + 1 +
                        ((unsigned __int64)(((v22 - v24) >> 3) + 1) >> 63)) >>
                       1);
                  v26 = &v24[-v28];
                  if (!v29) {
                    memmove_alt1((__int64)&v24[-v28], (__int64)v21, v30);
                  }
                }
              }
              else {
                v26 = v21;
              }
              v27 = *--v7;
              *((_QWORD*)v26 - 1) = v27;
              v21 = v26 - 8;
            } while (v7 != v62_.v63);
            v25 = v62_.v62;
          }
        }
        v62_.v62 = v20;
        v62_.v63 = (__int64*)v21;
        v62_.v64 = (__int64*)v24;
        v62_.v65 = (unsigned __int64)v22;
        if (v25 != 0) {
          v41 = 128;
          if (*(_QWORD*)(*v4 + 200) == 0) {
            v41 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v41, v25);
        }
        goto LABEL_5;
      }
      v9 = fw_memory_HeapManager_Allocate_alt1(*v4, 4096, 16, 0);
      if (v16 == v7) {
        if (v6 == (__int64*)v17) {
          if (v7 == v6) {
            v42 = 1;
          }
          else {
            v42 = ((char*)v16 - (char*)v6) >> 2;
          }
          if (v42 >> 61 != 0) {
          LABEL_105:
            GameRoutine_60a210_alt1();
          }
          v43 = v17;
          v44 = v9;
          v45 = fw_memory_HeapManager_Allocate_alt1(*v4, 8 * v42, 16, 0);
          v38 = (__int64*)(v45 + ((2 * v42 + 6) & 0xFFFFFFFFFFFFFFF8LL));
          v46 = v38;
          if (v7 != v6) {
            v46 = (__int64*)((char*)v38 + v13);
            v47 = (_QWORD*)(v45 + ((2 * v42 + 6) & 0xFFFFFFFFFFFFFFF8LL));
            v48 = v6;
            do {
              v49 = *v48++;
              v13 -= 8;
              *v47++ = v49;
            } while (v13 != 0);
          }
          v62_.v62 = v45;
          v62_.v63 = (__int64*)(v45 + ((2 * v42 + 6) & 0xFFFFFFFFFFFFFFF8LL));
          v62_.v64 = v46;
          v62_.v65 = v45 + 8 * v42;
          if (v6 != nullptr) {
            v50 = 128;
            if (*(_QWORD*)(*v4 + 200) == 0) {
              v50 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v4 + v50, v43);
          }
          v9 = v44;
        }
        else {
          v38 = v6;
        }
        *(v38 - 1) = v9;
        v15 = *(v62_.v63 - 1);
        goto LABEL_13;
      }
      *v7 = v9;
      ++v62_.v64;
    LABEL_5:
      v5 = v62_.v66;
      v8 = v62_.v67;
      v6 = v62_.v63;
      v7 = v62_.v64;
      v10 = v62_.v67 + v62_.v66;
    LABEL_6:
      v11 = *(_QWORD*)(v2 + 16);
      ++v8;
      v12 = v6[v10 >> 9];
      v62_.v67 = v8;
      *(_QWORD*)(v12 + 8 * (v10 & 0x1FF)) = v11;
      v2 = *(_QWORD*)(v2 + 8);
      if (v2 == v3) {
        if (v8 == 0) {
          goto LABEL_78;
        }
        while (1) {
          v51 = *(_QWORD*)(v6[v5 >> 9] + 8 * (v5 & 0x1FF));
          if (v5 + 1 >= 0x400) {
            break;
          }
          ++v5;
          if (v51 != 0) {
            goto LABEL_66;
          }
        LABEL_67:
          if (--v8 == 0) {
            v62_.v63 = v6;
            v62_.v66 = v5;
            goto LABEL_78;
          }
        }
        if (*v6 != 0) {
          if (*(_QWORD*)(*v4 + 200) != 0) {
            v52 = 128;
          }
          else {
            v52 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v52, *v6);
        }
        ++v6;
        v5 -= 511LL;
        if (v51 == 0) {
          goto LABEL_67;
        }
      LABEL_66:
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64))(
            *(_QWORD*)v51 + 16LL))((void*)(&v68), v51, a2);
        goto LABEL_67;
      }
    }
    v62_.v66 = v5 - 512;
    v15 = *v6;
    v62_.v63 = v6 + 1;
  LABEL_13:
    v68 = v15;
    GameRoutine_188c4a0_alt1(&v62_.v62, &v68);
    goto LABEL_5;
  }
  v7 = nullptr;
  v6 = nullptr;
LABEL_78:
  v62_.v67 = 0;
  v53 = v7 - v6;
  if (v53 >= 3) {
    v54 = (char*)v7 - (char*)v6 - 8;
    do {
      if (*v6 != 0) {
        if (*(_QWORD*)(*v4 + 200) != 0) {
          v55 = 128;
        }
        else {
          v55 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v4 + v55, *v6);
      }
      ++v6;
      v53 = v54 >> 3;
      v54 -= 8;
    } while (v53 > 2);
    v62_.v63 = v6;
  }
  if (v53 == 1) {
    v56 = 256;
  }
  else {
    if (v53 != 2) {
      goto LABEL_92;
    }
    v56 = 512;
  }
  v62_.v66 = v56;
LABEL_92:
  while (v6 != v7) {
    if (*v6 != 0) {
      if (*(_QWORD*)(*v4 + 200) != 0) {
        v57 = 128;
      }
      else {
        v57 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v4 + v57, *v6);
    }
    ++v6;
  }
  if (v62_.v62 != 0) {
    v58 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v58 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v4 + v58, v62_.v62);
  }
}

__int64 MenuItem_188be80(_QWORD* a1, char a2)
{
  int v4;
  __int64 result;
  __int64 v6;

  v4 = a2 & 1;
  result = (*(__int64 (**)(_QWORD*))(*a1 + 144LL))(a1);
  a1[36] = a1[36] & 0xFFFFFFFFFFFFFFFELL | a2 & 1;
  if (v4 != (result & 1)) {
    v6 = 344;
    if ((a2 & 1) != 0) {
      v6 = 352;
    }
    return (*(__int64 (**)(_QWORD*))(*a1 + v6))(a1);
  }
  return result;
}

__int64 MenuItem_188bf10(__int64 a1, _BYTE* a2)
{
  __int64* v4;
  char v5;
  __int64 v6;
  char v7;
  char* v8;

  if (*(_QWORD*)(a1 + 1032) != 0) {
    v4 = msg_MessageManager_instance__ptr[0];
    v5 = Registration_a4da40_alt1(*msg_MessageManager_instance__ptr[0],
                                  (__int64)a2);
    v6 = *(_QWORD*)(a1 + 1032);
    v7 = v5;
    if ((v5 & 1) != 0) {
      v8 = GameRoutine_a4dbe0_alt1(*v4, a2, 0);
    }
    else {
      v8 = &GameData_1a9f09e;
    }
    GameRoutine_156c5d0_alt1(v6, (__int64)v8, 0);
  }
  else {
    v7 = 0;
  }
  return v7 & 1;
}

void MenuItem_188c0a0(__int64 a1, char a2, int a3)
{
  struct {
    __int64* v3;
    int v4;
    char gap12_[4];
    char* v5;
  } v3_;
  struct {
    char v6;
    char gap25_[3];
    int v7;
  } v6_;

  v6_.v6 = a2;
  v6_.v7 = a3;
  v3_.v3 = GameData_212d890[0] + 2;
  v3_.v4 = 30;
  v3_.v5 = &v6_.v6;
  MenuItem_188b880_alt1(a1, (__int64)&v3_.v3);
}

void MenuItem_188c0f0(__int64 a1, char a2, int a3)
{
  struct {
    __int64* v3;
    int v4;
    char gap12_[4];
    char* v5;
  } v3_;
  struct {
    char v6;
    char gap25_[3];
    int v7;
  } v6_;

  v6_.v6 = a2;
  v6_.v7 = a3;
  v3_.v3 = GameData_212d890[0] + 2;
  v3_.v4 = 29;
  v3_.v5 = &v6_.v6;
  MenuItem_188b880_alt1(a1, (__int64)&v3_.v3);
}

void MenuItem_188c140(__int64 a1, char a2)
{
  struct {
    __int64 (**v2)();
    int v3;
    char gap12_[4];
    char* v4;
  } v2_;
  struct {
    char v5;
    char gap25_[3];
    int v6;
  } v5_;

  v5_.v5 = a2;
  v5_.v6 = 1;
  v2_.v2 = ui_Event_vtable;
  v2_.v3 = 32;
  v2_.v4 = &v5_.v5;
  MenuItem_188b880_alt1(a1, (__int64)&v2_.v2);
}

void MenuItem_188c190(__int64 a1, char a2)
{
  struct {
    __int64 (**v2)();
    int v3;
    char gap12_[4];
    char* v4;
  } v2_;
  struct {
    char v5;
    char gap25_[3];
    int v6;
  } v5_;

  v5_.v5 = a2;
  v5_.v6 = 1;
  v2_.v2 = ui_Event_vtable;
  v2_.v3 = 31;
  v2_.v4 = &v5_.v5;
  MenuItem_188b880_alt1(a1, (__int64)&v2_.v2);
}

void MenuItem_188c220(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  struct {
    __int64 (**v3)();
    int v4;
    char gap20_[4];
    _QWORD* v5;
  } v3_;
  _QWORD v6[2];

  v2 = a2[1];
  v6[0] = *a2;
  v6[1] = v2;
  v3_.v3 = ui_Event_vtable;
  v3_.v4 = 6;
  v3_.v5 = v6;
  MenuItem_188b880_alt1(a1, (__int64)&v3_.v3);
}

void MenuItem_188c270(__int64 a1, __int64 a2, int* a3)
{
  struct {
    __int64 (**v3)();
    int v4;
    char gap12_[4];
    int* v5;
  } v3_;
  int v6;

  if ((*(_BYTE*)(a1 + 288) & 2) != 0) {
    v6 = *a3;
    v3_.v3 = ui_Event_vtable;
    v3_.v4 = 39;
    v3_.v5 = &v6;
    MenuItem_188b880_alt1(a1, (__int64)&v3_.v3);
  }
}

__int64 MenuItem_188c2d0()
{
  __int64 result;

  result = GameData_21f1e08;
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    return GameRoutine_18ae5e0();
  }
  return result;
}

void MenuItem_188d320(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;

  v2 = GameData_2132070 + 16;
  a1[9] = GameData_2132070 + 440;
  v3 = a1[132];
  *a1 = v2;
  if (v3 != 0) {
    v4 = (__int64*)a1[131];
    v5 = a1 + 130;
    v6 = *(__int64**)(a1[130] + 8);
    *(_QWORD*)(*v4 + 8) = v6;
    *v6 = *v4;
    a1[132] = 0;
    if (v4 != a1 + 130) {
      v7 = fw_memory_g_heap_manager_ptr;
      do {
        v8 = (__int64*)v4[1];
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v9, (__int64)v4);
        v4 = v8;
      } while (v8 != v5);
    }
  }
  Element_1888840_alt1((__int64)a1);
}

#pragma GCC visibility pop
