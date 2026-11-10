#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_15638b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9bea80(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(__int64 result, __int64, float);
__int64 LayoutAccessor_1562f00(_QWORD, _QWORD);
__int64 LayoutAccessor_1563030(_QWORD, _QWORD, _QWORD);
__int64 Layout_57b830(_QWORD, _QWORD);
__int64 UnitParams_6dd470(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 game_Unit_IsImmobile(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 LayoutAccessor_1562b50(__int64* a1, __int64 a2);
__int64 LayoutAccessor_1562ea0(__int64 a1, __int64 a2);
__int64 LayoutAccessor_1573500(__int64 a1, char a2, char a3);
_BYTE* Layout_579280(_QWORD*, __int64);
__attribute__((swiftcall)) void GameRoutine_15642e0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void
GameRoutine_15642e0_alt1(PSEUDO_X8, _QWORD* result,
                         _QWORD*) __asm__("GameRoutine_15642e0");
__attribute__((swiftcall)) void GameRoutine_1573280(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_15733c0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_15736e0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1() __asm__(
    "nn_ui2d_Pane_GetRuntimeTypeInfoStatic");
__int64 GameRoutine_155e4a0(__int64, __int64, __int64);
__int64 GameRoutine_155f760(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1571860(__int64*, __int64, char, char, char, char);
__int64 GameRoutine_15735c0(_QWORD);
__int64 GameRoutine_1586d80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _QWORD,
                            _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_188df50(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18c9b10(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19abf80(_QWORD, _QWORD);
__int64 IconLegion_19abe40(_QWORD, _QWORD);
__int64 LayoutAccessor_15641a0(_QWORD, _QWORD);
__int64 LayoutAccessor_1564440_alt1(_QWORD, _QWORD,
                                    _QWORD) __asm__("LayoutAccessor_1564440");
__int64 LayoutAccessor_15730d0(_QWORD, _QWORD);
__int64 LayoutEx_5791a0(__int64);
__int64 Pane_58dee0(_QWORD, _QWORD);
__int64 Pane_58df60(_QWORD, _QWORD);
__int64 Pane_58df60_alt1(__int64 result, _QWORD*) __asm__("Pane_58df60");
__int64 StatusItem_188e530(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetParamLimit(_QWORD, _QWORD);
__int64 game_gameui_SetHpStock(_QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(void);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 ui_LayoutAccessor_GetPartsLayout(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_Setup_155dea0(_QWORD, _QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN GameData_21f8028;
extern __int64 (*GameData_204d478[])();
extern __int64 (*GameData_204e798[])();
extern __int64* GameData_212c880[5];
extern __int64* GameData_212dfc0[2];
extern __int64* GameData_212dfc8;
extern __int64* GameData_2132000[4];
extern __int64* GameData_2132008[3];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 GameData_212d880;
extern __int64 GameData_21f8020;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
struct PseudoSret Layout_1363f00(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
__attribute__((swiftcall)) void LayoutAccessor_155ed40(PSEUDO_X8 x8_,
                                                       __int64* result,
                                                       __int64* a2, __int64 a3,
                                                       __int64 a4);
void LayoutAccessor_1560940(__int64* a1, __int64 a2);
_QWORD* LayoutAccessor_1564440(float* a1, unsigned __int8* a2, __int64** a3);
__int64 LayoutAccessor_1572ac0(__int64* a1, __int64 a2, char a3, char a4);
__attribute__((swiftcall)) void
LayoutAccessor_1837560(__attribute__((swift_indirect_result)) void* x8_,
                       __int64* a1, _QWORD* a2);
__attribute__((swiftcall)) void
LayoutAccessor_1839200(__attribute__((swift_indirect_result)) void* x8_,
                       __int64* a1, _QWORD* a2);

__attribute__((swiftcall)) void LayoutAccessor_155ed40(PSEUDO_X8 x8_,
                                                       __int64* result,
                                                       __int64* a2, __int64 a3,
                                                       __int64 a4)
{
  _QWORD* a5 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  int v5;
  int v6;
  __int64 v8;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _BOOL4 v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  char* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  char* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  char* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  char* v71;
  __int64* v72;

  v8 = result[2];
  v12 = result;
  v68 = a4;
  if (v8 == 0) {
    goto LABEL_18;
  }
  result = (__int64*)result[1];
  if (result == nullptr) {
    goto LABEL_18;
  }
  result = (__int64*)std___1___shared_weak_count_lock(result);
  if (result == nullptr) {
  LABEL_11:
    v15 = v12[1];
    if (v15 == 0 || *(_QWORD*)(v15 + 8) == -1) {
      goto LABEL_18;
    }
    goto LABEL_16;
  }
  v13 = *v12;
  if (*v12 != 0) {
    v5 = *(unsigned __int8*)(v13 + 24);
    v14 = v13 + 152;
    if (v5 == 0) {
      v14 = 0;
    }
    v6 = v14 != v12[2];
  }
  else {
    v6 = 1;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 1),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != 0) {
      goto LABEL_11;
    }
  }
  else {
    v16 = result;
    (*(void (**)(__int64*))(*result + 16))(result);
    result = (__int64*)std___1___shared_weak_count___release_weak(v16);
    if (v6 != 0) {
      goto LABEL_11;
    }
  }
  if ((v5 & 1) == 0) {
  LABEL_18:
    v18 = nullptr;
    goto LABEL_19;
  }
LABEL_16:
  v17 = v12[2];
  if (v17 == 0) {
    goto LABEL_18;
  }
  result = (__int64*)GameRoutine_155f760(v12, v17, a4);
  v18 = result;
LABEL_19:
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f8028,
                            memory_order_acquire) &
       1) == 0) {
    result = (__int64*)__cxa_guard_acquire(&GameData_21f8028);
    if ((_DWORD)result != 0) {
      GameData_21f8020 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      result = (__int64*)__cxa_guard_release(&GameData_21f8028);
    }
  }
  if (v18 != nullptr) {
    result = (__int64*)(*(__int64 (**)(__int64*))(*v18 + 16))(v18);
    if (result == &GameData_21f8020) {
      goto LABEL_28;
    }
    do {
      result = (__int64*)*result;
    } while (result != &GameData_21f8020 && result != nullptr);
    if (result != nullptr) {
    LABEL_28:
      Pane_58df60(v18[3], v18);
      v20 = v12[2];
      if (v20 != 0) {
        v21 = v12[1];
        if (v21 == 0) {
        LABEL_44:
          v20 = 0;
          goto LABEL_45;
        }
        v22 = std___1___shared_weak_count_lock(v21);
        if (v22 != 0) {
          v23 = *v12;
          if (*v12 != 0) {
            v6 = *(unsigned __int8*)(v23 + 24);
            v24 = v23 + 152;
            if (v6 == 0) {
              v24 = 0;
            }
            v25 = v24 != v12[2];
          }
          else {
            v25 = true;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if (v25) {
              goto LABEL_39;
            }
          LABEL_43:
            if ((v6 & 1) != 0) {
            LABEL_41:
              v20 = v12[2];
              goto LABEL_45;
            }
            goto LABEL_44;
          }
          v26 = v22;
          (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
          std___1___shared_weak_count___release_weak(v26);
          if (!v25) {
            goto LABEL_43;
          }
        }
      LABEL_39:
        v20 = v12[1];
        if (v20 == 0) {
          goto LABEL_45;
        }
        if (*(_QWORD*)(v20 + 8) != -1) {
          goto LABEL_41;
        }
        goto LABEL_44;
      }
    LABEL_45:
      v27 = v18 + 27;
      if (v18 + 27 != (__int64*)(v20 + 72)) {
        v28 = (__int64*)v18[28];
        v29 = *v28;
        *(_QWORD*)(v18[27] + 8) = v28;
        *v28 = v18[27];
        *(_QWORD*)(v29 + 8) = v27;
        v18[27] = v29;
      }
      Pane_58dee0(a3, v18);
      v30 = std___1___shared_weak_count_lock(a2[1]);
      if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        v31 = v30;
        (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
        std___1___shared_weak_count___release_weak(v31);
      }
      v32 = (_QWORD*)a2[2];
      v33 = *v27;
      v34 = v32[9];
      v32 += 9;
      *v27 = v34;
      *(_QWORD*)(v33 + 8) = v32;
      *(_QWORD*)(*v32 + 8LL) = v27;
      *v32 = v33;
      v35 = LayoutAccessor_15641a0(v12 + 6, &v68);
      if (v35 != 0) {
        GameRoutine_15642e0((void*)(&v69), v12 + 6, v35);
        v36 = v69;
        v69 = 0;
        if (v36 != 0) {
          if ((unsigned __int8)v71 == 1) {
            v37 = *(_QWORD*)(v36 + 48);
            if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              v38 = v36;
              (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
              std___1___shared_weak_count___release_weak(v37);
              v36 = v38;
            }
            if ((*(_BYTE*)(v36 + 16) & 1) != 0 && *(_QWORD*)(v36 + 32) != 0) {
              v39 = 128;
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                v39 = 56;
              }
              nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v39);
            }
          }
          v40 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v40 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v40);
        }
      }
      v41 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 128, 16, 0);
      *(_QWORD*)(v41 + 16) = 0;
      v42 = v41;
      v43 = GameData_212d880;
      *(_QWORD*)(v41 + 56) = 0;
      *(_QWORD*)(v41 + 24) = 0;
      v44 = v41 + 24;
      *(_QWORD*)(v41 + 32) = 0;
      *(_QWORD*)(v41 + 40) = 0;
      *(_QWORD*)(v41 + 48) = v41 + 56;
      *(_QWORD*)(v41 + 64) = 0;
      *(_QWORD*)(v41 + 72) = 0;
      *(_QWORD*)(v41 + 80) = 0;
      *(_QWORD*)(v41 + 88) = 0;
      *(_QWORD*)(v41 + 96) = 0;
      *(_QWORD*)(v41 + 112) = 0;
      *(_QWORD*)(v41 + 120) = 0;
      *(_QWORD*)v41 = v43 + 16;
      *(_QWORD*)(v41 + 8) = 0;
      *(_DWORD*)(v41 + 104) = 1065353216;
      v45 = strlen(a4);
      if (v45 >= 0xFFFFFFFFFFFFFFF7LL) {
      LABEL_117:
        String_60a1d0(v45);
      }
      v46 = v45;
      if (v45 >= 0x17) {
        if ((v45 | 7) == 0x17) {
          v48 = 26;
        }
        else {
          v48 = (v45 | 7) + 1;
        }
        v47 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v48, 16, 0);
        v70 = v46;
        v71 = v47;
        v69 = v48 | 1;
      }
      else {
        LOBYTE(v69) = 2 * v45;
        v47 = (char*)&v69 + 1;
        if (v45 == 0) {
          goto LABEL_73;
        }
      }
      memcpy(v47, a4, v46);
    LABEL_73:
      v47[v46] = 0;
      v72 = &v69;
      v49 = LayoutAccessor_1564440_alt1(a2 + 6, &v69, &v72);
      v50 = *(_QWORD*)(v49 + 48);
      *(_QWORD*)(v49 + 40) = v44;
      *(_QWORD*)(v49 + 48) = v42;
      if (v50 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
        std___1___shared_weak_count___release_weak(v50);
      }
      if ((v69 & 1) != 0 && v71 != nullptr) {
        v51 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v51 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v51);
      }
      v45 = strlen(a4);
      if (v45 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_117;
      }
      v52 = v45;
      if (v45 >= 0x17) {
        if ((v45 | 7) == 0x17) {
          v54 = 26;
        }
        else {
          v54 = (v45 | 7) + 1;
        }
        v53 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v54, 16, 0);
        v70 = v52;
        v71 = v53;
        v69 = v54 | 1;
      }
      else {
        LOBYTE(v69) = 2 * v45;
        v53 = (char*)&v69 + 1;
        if (v45 == 0) {
          goto LABEL_90;
        }
      }
      memcpy(v53, a4, v52);
    LABEL_90:
      v53[v52] = 0;
      v72 = &v69;
      v55 = *(_QWORD*)(LayoutAccessor_1564440_alt1(a2 + 6, &v69, &v72) + 40);
      v56 = a2[1];
      v66 = 0;
      v67 = 0;
      if (v56 != 0 &&
          (v57 = std___1___shared_weak_count_lock(v56), v67 = v57, v57 != 0)) {
        v58 = v18[29];
        v59 = v57;
        v66 = *a2;
        ui_LayoutAccessor_Setup_155dea0(v55, &v66, v58);
        if (atomic_fetch_add((atomic_ullong* volatile)(v59 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
          std___1___shared_weak_count___release_weak(v59);
        }
      }
      else {
        ui_LayoutAccessor_Setup_155dea0(v55, &v66, v18[29]);
      }
      if ((v69 & 1) != 0 && v71 != nullptr) {
        v60 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v60 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v60);
      }
      v45 = strlen(a4);
      if (v45 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_117;
      }
      v61 = v45;
      if (v45 >= 0x17) {
        if ((v45 | 7) == 0x17) {
          v63 = 26;
        }
        else {
          v63 = (v45 | 7) + 1;
        }
        v62 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v63, 16, 0);
        v70 = v61;
        v71 = v62;
        v69 = v63 | 1;
      }
      else {
        LOBYTE(v69) = 2 * v45;
        v62 = (char*)&v69 + 1;
        if (v45 == 0) {
          goto LABEL_109;
        }
      }
      memcpy(v62, a4, v61);
    LABEL_109:
      v62[v61] = 0;
      v72 = &v69;
      result = (__int64*)LayoutAccessor_1564440_alt1(a2 + 6, &v69, &v72);
      v64 = result[6];
      *a5 = result[5];
      a5[1] = v64;
      if (v64 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v64 + 16), 1u,
                                  memory_order_relaxed);
      }
      if ((v69 & 1) != 0 && v71 != nullptr) {
        v65 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v65 = 56;
        }
        {
          (__int64*)nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager +
                                                  v65);
          return;
        }
      }
      {
        result;
        return;
      }
    }
  }
  *a5 = 0;
  a5[1] = 0;
  {
    result;
    return;
  }
}

void LayoutAccessor_1560940(__int64* a1, __int64 a2)
{
  int v2;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _BOOL4 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64* v15;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  char v22;
  __int64* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64** v28;
  __int64* v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64* v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _BOOL4 v48;
  __int64* v49;
  __int64 v50;
  __int64* v51;
  struct {
    __int64 v52;
    unsigned __int64 v53;
    __int64* v54;
  } v52_;
  struct {
    unsigned __int64 v55;
    char gap48_[8];
    char v56;
  } v55_;

  if (a1[2] == 0) {
    return;
  }
  v4 = a1[1];
  if (v4 == 0) {
    return;
  }
  v6 = std___1___shared_weak_count_lock(v4);
  if (v6 == 0) {
    goto LABEL_11;
  }
  v7 = *a1;
  if (*a1 != 0) {
    v2 = *(unsigned __int8*)(v7 + 24);
    v8 = v7 + 152;
    if (v2 == 0) {
      v8 = 0;
    }
    v9 = v8 != a1[2];
  }
  else {
    v9 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt1();
    if (v9) {
      goto LABEL_11;
    }
  LABEL_15:
    if ((v2 & 1) == 0) {
      return;
    }
    goto LABEL_16;
  }
  if (!v9) {
    goto LABEL_15;
  }
LABEL_11:
  v10 = a1[1];
  if (v10 == 0 || *(_QWORD*)(v10 + 8) == -1) {
    return;
  }
LABEL_16:
  v11 = a1[2];
  if (v11 != 0) {
    v12 = GameRoutine_155e4a0((__int64)a1, v11, a2);
    if (v12 != 0) {
      v13 = *(_QWORD**)(v12 + 24);
      v14 = (_QWORD*)v12;
      if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21f8028) != 0) {
        GameData_21f8020 =
            (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
        __cxa_guard_release(&GameData_21f8028);
      }
      if (v13 != nullptr) {
        v15 = (__int64*)(*(__int64 (**)(_QWORD*))(*v13 + 16LL))(v13);
        if (v15 == &GameData_21f8020) {
          goto LABEL_27;
        }
        do {
          v15 = (__int64*)*v15;
        } while (v15 != &GameData_21f8020 && v15 != nullptr);
        if (v15 != nullptr) {
        LABEL_27:
          v17 = strlen(a2);
          if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
            String_60a1d0_alt1();
          }
          v18 = v17;
          if (v17 >= 0x17) {
            if ((v17 | 7) == 0x17) {
              v20 = 26;
            }
            else {
              v20 = (v17 | 7) + 1;
            }
            v19 = (char*)fw_memory_HeapManager_Allocate_alt1(
                fw_memory_g_heap_manager, v20, 16, 0);
            v52_.v53 = v18;
            v52_.v54 = (__int64*)v19;
            v52_.v52 = v20 | 1;
          }
          else {
            LOBYTE(v52_.v52) = 2 * v17;
            v19 = (char*)&v52_.v52 + 1;
            if (v17 == 0) {
            LABEL_37:
              v19[v18] = 0;
              v21 = a1[7];
              v22 = v52_.v52;
              if (v21 != 0 && a1[9] != 0) {
                v23 = (v52_.v52 & 1) != 0 ? v52_.v54
                                          : (__int64*)((char*)&v52_.v52 + 1);
                v18 = (v52_.v52 & 1) != 0
                          ? v52_.v53
                          : (unsigned __int64)(unsigned __int8)v52_.v52 >> 1;
                v51 = v23;
                v24 = std___1___hash_memory(v23, v18);
                v25 = v21 - 1;
                v26 = v24;
                if ((v21 & (v21 - 1)) != 0) {
                  v27 = v24;
                  if (v24 >= v21) {
                    v27 = v24 % v21;
                  }
                }
                else {
                  v27 = v24 & v25;
                }
                v28 = *(__int64***)(a1[6] + 8 * v27);
                if (v28 != nullptr) {
                  v29 = *v28;
                  if (*v28 != nullptr) {
                    if ((v21 & v25) != 0) {
                      while (1) {
                        v30 = v29[1];
                        if (v30 == v26) {
                          v31 = *((unsigned __int8*)v29 + 16);
                          v32 = v29[3];
                          if ((v31 & 1) == 0) {
                            v32 = v31 >> 1;
                          }
                          if (v32 == v18) {
                            v33 = (v31 & 1) != 0 ? (__int64*)v29[4]
                                                 : (__int64*)((char*)v29 + 17);
                            if ((unsigned int)memcmp(v33, v51, v18) == 0) {
                              goto LABEL_76;
                            }
                          }
                        }
                        else {
                          if (v30 >= v21) {
                            v30 %= v21;
                          }
                          if (v30 != v27) {
                            goto LABEL_90;
                          }
                        }
                        v29 = (__int64*)*v29;
                        if (v29 == nullptr) {
                          goto LABEL_90;
                        }
                      }
                    }
                    do {
                      v34 = v29[1];
                      if (v34 == v26) {
                        v35 = *((unsigned __int8*)v29 + 16);
                        v36 = v29[3];
                        if ((v35 & 1) == 0) {
                          v36 = v35 >> 1;
                        }
                        if (v36 == v18) {
                          v37 = (v35 & 1) != 0 ? (__int64*)v29[4]
                                               : (__int64*)((char*)v29 + 17);
                          if ((unsigned int)memcmp(v37, v51, v18) == 0) {
                          LABEL_76:
                            GameRoutine_15642e0_alt1(
                                (void*)((__int64)&v55_.v55), a1 + 6, v29);
                            v38 = v55_.v55;
                            v55_.v55 = 0;
                            if (v38 != 0) {
                              if (v55_.v56 == 1) {
                                v39 = *(_QWORD*)(v38 + 48);
                                if (v39 != 0 &&
                                    atomic_fetch_add(
                                        (atomic_ullong* volatile)(v39 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
                                  v18 = v38;
                                  (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(
                                      v39);
                                  std___1___shared_weak_count___release_weak_alt1();
                                  v38 = v18;
                                }
                                if ((*(_BYTE*)(v38 + 16) & 1) != 0 &&
                                    *(_QWORD*)(v38 + 32) != 0) {
                                  v40 = 128;
                                  if (*(_QWORD*)(*(_QWORD*)
                                                     fw_memory_g_heap_manager_ptr +
                                                 200LL) == 0) {
                                    v40 = 56;
                                  }
                                  nn_mem_StandardAllocator_Free_alt1(
                                      *(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v40);
                                }
                              }
                              v41 = 128;
                              if (*(_QWORD*)(*(_QWORD*)
                                                 fw_memory_g_heap_manager_ptr +
                                             200LL) == 0) {
                                v41 = 56;
                              }
                              nn_mem_StandardAllocator_Free_alt1(
                                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v41);
                            }
                            v22 = v52_.v52;
                            break;
                          }
                        }
                      }
                      else if ((v34 & v25) != v27) {
                        break;
                      }
                      v29 = (__int64*)*v29;
                    } while (v29 != nullptr);
                  }
                }
              }
            LABEL_90:
              if ((v22 & 1) != 0 && v52_.v54 != nullptr) {
                v42 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v42 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v42);
              }
              Pane_58df60_alt1(*(_QWORD*)(v14[3] + 24LL), (_QWORD*)v14[3]);
              v43 = a1[2];
              if (v43 == 0) {
                goto LABEL_111;
              }
              v44 = a1[1];
              if (v44 != 0) {
                v45 = std___1___shared_weak_count_lock(v44);
                if (v45 == 0) {
                  goto LABEL_106;
                }
                v46 = *a1;
                if (*a1 != 0) {
                  LODWORD(v18) = *(unsigned __int8*)(v46 + 24);
                  v47 = v46 + 152;
                  if ((_DWORD)v18 == 0) {
                    v47 = 0;
                  }
                  v48 = v47 != a1[2];
                }
                else {
                  v48 = true;
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
                  std___1___shared_weak_count___release_weak_alt1();
                }
                if (!v48) {
                  if ((v18 & 1) != 0) {
                    goto LABEL_108;
                  }
                }
                else {
                LABEL_106:
                  v43 = a1[1];
                  if (v43 == 0) {
                  LABEL_111:
                    if (v13 + 27 != (_QWORD*)(v43 + 72)) {
                      v49 = (__int64*)v13[28];
                      v50 = *v49;
                      *(_QWORD*)(v13[27] + 8LL) = v49;
                      *v49 = v13[27];
                      *(_QWORD*)(v50 + 8) = v13 + 27;
                      v13[27] = v50;
                    }
                    Layout_579280(v14, *game_g_frame_clock_ptr[0] + 568);
                    (*(void (**)(_QWORD*))(*v14 + 8LL))(v14);
                    LayoutEx_5791a0((__int64)v14);
                    return;
                  }
                  if (*(_QWORD*)(v43 + 8) != -1) {
                  LABEL_108:
                    v43 = a1[2];
                    goto LABEL_111;
                  }
                }
              }
              v43 = 0;
              goto LABEL_111;
            }
          }
          memcpy(v19, a2, v18);
          goto LABEL_37;
        }
      }
    }
  }
}

__int64 LayoutAccessor_1562b50(__int64* a1, __int64 a2)
{
  int v2;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _BOOL4 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[2];

  if (a1[2] == 0) {
    return 0;
  }
  result = a1[1];
  if (result == 0) {
    return result;
  }
  v6 = std___1___shared_weak_count_lock(result);
  if (v6 != 0) {
    v7 = *a1;
    if (*a1 != 0) {
      v2 = *(unsigned __int8*)(v7 + 24);
      v8 = v7 + 152;
      if (v2 == 0) {
        v8 = 0;
      }
      v9 = v8 != a1[2];
    }
    else {
      v9 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (!v9) {
        goto LABEL_12;
      }
    }
    else {
      v10 = v6;
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v10);
      if (!v9) {
      LABEL_12:
        result = 0;
        if (a2 == 0) {
          return result;
        }
        goto LABEL_17;
      }
    }
  }
  v11 = a1[1];
  if (v11 == 0) {
    return 0;
  }
  LOBYTE(v2) = *(_QWORD*)(v11 + 8) != -1;
  result = 0;
  if (a2 == 0) {
    return result;
  }
LABEL_17:
  if ((v2 & 1) == 0) {
    return result;
  }
  v12 = a1[11];
  if (v12 != 0) {
    result = strlen(a2);
    v16[0] = a2;
    v16[1] = result;
    if (result == 0) {
      return result;
    }
    v13 = GameRoutine_9bea80(v12, v16);
  }
  else {
    v14 = std___1___shared_weak_count_lock(a1[1]);
    if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v15 = v14;
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak(v15);
    }
    v13 = Layout_57b830(a1[2], a2);
  }
  return v13 != 0;
}

__int64 LayoutAccessor_1562ea0(__int64 a1, __int64 a2)
{
  LayoutAccessor_1562680(a1, a2, 1.0);
  GameRoutine_15638b0(a1, a2, 0);
  LayoutAccessor_1562f00(a1, a2);
  return LayoutAccessor_1563030(a1, a2, 0);
}

_QWORD* LayoutAccessor_1564440(float* a1, unsigned __int8* a2, __int64** a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  _QWORD* v24;
  __int64* v25;
  _QWORD* v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  float v30;
  float v31;
  float v32;
  _BOOL8 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 primeEm;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64* v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  _QWORD* v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  _QWORD* v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  __int64 v60;
  unsigned __int64 v61;

  v4 = *a2;
  v7 = (v4 & 1) == 0;
  v8 = v4 >> 1;
  if (v7) {
    v9 = a2 + 1;
  }
  else {
    v9 = *((unsigned __int8**)a2 + 2);
  }
  if (v7) {
    v10 = v8;
  }
  else {
    v10 = *((_QWORD*)a2 + 1);
  }
  v11 = std___1___hash_memory(v9, v10);
  v12 = *((_QWORD*)a1 + 1);
  v13 = v11;
  if (v12 != 0) {
    v14 = v12 - 1;
    if ((v12 & (v12 - 1)) != 0) {
      v3 = v11;
      if (v11 >= v12) {
        v3 = v11 % v12;
      }
    }
    else {
      v3 = v14 & v11;
    }
    v15 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
    if (v15 != nullptr) {
      v16 = (_QWORD*)*v15;
      if (*v15 != 0) {
        if ((v12 & v14) == 0) {
          while (1) {
            v21 = v16[1];
            if (v21 == v13) {
              v22 = *((unsigned __int8*)v16 + 16);
              v23 = v16[3];
              if ((v22 & 1) == 0) {
                v23 = v22 >> 1;
              }
              if (v23 == v10) {
                v24 = (v22 & 1) != 0 ? (_QWORD*)v16[4]
                                     : (_QWORD*)((char*)v16 + 17);
                if ((unsigned int)memcmp(v24, v9, v10) == 0) {
                  return v16;
                }
              }
            }
            else if ((v21 & v14) != v3) {
              goto LABEL_41;
            }
            v16 = (_QWORD*)*v16;
            if (v16 == nullptr) {
              goto LABEL_41;
            }
          }
        }
        do {
          v17 = v16[1];
          if (v17 == v13) {
            v18 = *((unsigned __int8*)v16 + 16);
            v19 = v16[3];
            if ((v18 & 1) == 0) {
              v19 = v18 >> 1;
            }
            if (v19 == v10) {
              v20 =
                  (v18 & 1) != 0 ? (_QWORD*)v16[4] : (_QWORD*)((char*)v16 + 17);
              if ((unsigned int)memcmp(v20, v9, v10) == 0) {
                return v16;
              }
            }
          }
          else {
            if (v17 >= v12) {
              v17 %= v12;
            }
            if (v17 != v3) {
              break;
            }
          }
          v16 = (_QWORD*)*v16;
        } while (v16 != nullptr);
      }
    }
  }
LABEL_41:
  v25 = (__int64*)fw_memory_g_heap_manager_ptr;
  v26 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
  v27 = *a3;
  *v26 = 0;
  v26[1] = v13;
  v16 = v26;
  v28 = *v27;
  v29 = v27[2];
  v26[3] = v27[1];
  v26[4] = v29;
  v26[2] = v28;
  v27[1] = 0;
  v27[2] = 0;
  *v27 = 0;
  v26[5] = 0;
  v26[6] = 0;
  v30 = a1[8];
  v31 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v12 == 0 || (float)(v30 * (float)v12) < v31) {
    v32 = v31 / v30;
    v33 = true;
    if (v12 >= 3) {
      v33 = (v12 & (v12 - 1)) != 0;
    }
    v34 = v33 | (2 * v12);
    v35 = vcvtps_u64_f32(v32);
    if (v34 <= v35) {
      primeEm = v35;
    }
    else {
      primeEm = v34;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v37 = *((_QWORD*)a1 + 1);
    if (primeEm <= v37) {
      if (primeEm >= v37) {
        goto LABEL_102;
      }
      v43 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v37 < 3 || (v37 & (v37 - 1)) != 0) {
        v43 = std___1___next_prime(v43);
      }
      else {
        v44 = 1LL << -(char)__clz(v43 - 1);
        if (v43 >= 2) {
          v43 = v44;
        }
      }
      if (primeEm <= v43) {
        primeEm = v43;
      }
      if (primeEm >= v37) {
        goto LABEL_102;
      }
      if (primeEm == 0) {
        v56 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v56 != 0) {
          v57 = 128;
          if (*(_QWORD*)(*v25 + 200) == 0) {
            v57 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v25 + v57);
        }
        *((_QWORD*)a1 + 1) = 0;
        goto LABEL_102;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v38 = fw_memory_HeapManager_Allocate_alt1(*v25, 8 * primeEm, 16, 0);
    v39 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v38;
    if (v39 != 0) {
      v40 = 128;
      if (*(_QWORD*)(*v25 + 200) == 0) {
        v40 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v25 + v40);
    }
    v41 = primeEm & 7;
    *((_QWORD*)a1 + 1) = primeEm;
    if (primeEm >= 8) {
      v42 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 48) = 0;
        v45 = *(_QWORD*)a1 + 8 * v42;
        v42 += 8;
        *(_QWORD*)(v45 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v42);
    }
    else {
      v42 = 0;
    }
    if ((primeEm & 7) != 0) {
      v46 = 8 * v42;
      do {
        --v41;
        *(_QWORD*)(*(_QWORD*)a1 + v46) = 0;
        v46 += 8;
      } while (v41 != 0);
    }
    v48 = (__int64*)(a1 + 4);
    v47 = *((_QWORD**)a1 + 2);
    if (v47 != nullptr) {
      v49 = v47[1];
      v50 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v49 >= primeEm) {
          v49 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v49) = v48;
        v51 = (_QWORD*)*v47;
        if (*v47 == 0) {
          goto LABEL_102;
        }
        while (1) {
          v52 = v51[1];
          if (v52 >= primeEm) {
            v52 %= primeEm;
          }
          if (v52 != v49) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v52) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v52) = v47;
              goto LABEL_79;
            }
            *v47 = *v51;
            *v51 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v52);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v52) = v51;
            v51 = v47;
          }
          v52 = v49;
        LABEL_79:
          v47 = v51;
          v51 = (_QWORD*)*v51;
          v49 = v52;
          if (v51 == nullptr) {
            goto LABEL_102;
          }
        }
      }
      v53 = v49 & v50;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v53) = v48;
      while (1) {
        v54 = (_QWORD*)*v47;
        if (*v47 == 0) {
          break;
        }
        v55 = v54[1] & v50;
        if (v55 == v53) {
          v47 = (_QWORD*)*v47;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v55) != 0) {
          *v47 = *v54;
          *v54 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v55);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v55) = v54;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v55) = v47;
          v47 = v54;
          v53 = v55;
        }
      }
    }
  LABEL_102:
    v12 = *((_QWORD*)a1 + 1);
    if ((v12 & (v12 - 1)) != 0) {
      if (v13 >= v12) {
        v3 = v13 % v12;
      }
      else {
        v3 = v13;
      }
    }
    else {
      v3 = (v12 - 1) & v13;
    }
  }
  v58 = *(_QWORD*)a1;
  v59 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v59 != nullptr) {
    *v16 = *v59;
    *v59 = v16;
  }
  else {
    v60 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v16;
    *v16 = v60;
    *(_QWORD*)(v58 + 8 * v3) = a1 + 4;
    if (*v16 != 0) {
      v61 = *(_QWORD*)(*v16 + 8LL);
      if ((v12 & (v12 - 1)) != 0) {
        if (v61 >= v12) {
          v61 %= v12;
        }
      }
      else {
        v61 &= v12 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v61) = v16;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return v16;
}

__int64 LayoutAccessor_1572ac0(__int64* a1, __int64 a2, char a3, char a4)
{
  __int64 result;
  __int64 v7;
  __int64 (**v8)();
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 (**v13)();
  int v14;
  unsigned int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 (***v21)();
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 (**v26)();
  __int64 (***v27)();
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 (**v37)();
  __int64 (*v38)();
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 (**v42)();
  _QWORD* v43;
  int* v44;
  int v45;
  __int64 (***v46)();
  __int64 (***v47)();
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  _QWORD v52[2];
  int v53;

  result = GameRoutine_1571860(a1, a2, 0, 0, a3, a4);
  if (a2 == 0) {
    return result;
  }
  LayoutAccessor_15730d0(a1, a2);
  v52[0] = "L_OverBlaze";
  v52[1] = 11;
  GameRoutine_1573280((void*)(&v42), a1, v52);
  if (v43 != nullptr) {
    v7 = std___1___shared_weak_count_lock(v43);
    v8 = v42;
    if (v43 != nullptr) {
      std___1___shared_weak_count___release_weak(v43);
    }
    if (v7 != 0 && v8 != nullptr) {
      GameRoutine_18c9b10(v8, a2, 0xFFFFFFFFLL);
    }
    else if (v7 == 0) {
      goto LABEL_11;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
  }
LABEL_11:
  LayoutAccessor_1560070((void*)(&v50), a1, (__int64)"L_HPStock");
  if (v51 != 0) {
    v9 = std___1___shared_weak_count_lock(v51);
    if (v9 != 0) {
      v10 = v9;
      if (v50 != 0) {
        game_gameui_SetHpStock(v50, a2);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
    if (v51 != 0) {
      std___1___shared_weak_count___release_weak(v51);
    }
  }
  v52[0] = "L_Move";
  v52[1] = 6;
  GameRoutine_15733c0((void*)(&v42), a1, v52);
  v11 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v43 != nullptr) {
    v12 = std___1___shared_weak_count_lock(v43);
    v13 = v42;
    if (v43 != nullptr) {
      std___1___shared_weak_count___release_weak(v43);
    }
    if (v12 != 0 && v13 != nullptr) {
      LOBYTE(v42) = 10;
      v14 = game_Unit_GetParamLimit(a2, &v42);
      LOBYTE(v42) = 10;
      v15 = game_Unit_GetParam(a2, &v42, 1);
      if ((game_Unit_IsImmobile(a2) & 1) != 0 &&
          (*(_BYTE*)(a2 + 416) & 4) == 0 && (v16 = *(_QWORD*)(a2 + 392)) != 0 &&
          (v17 = *(unsigned __int16*)(v16 + 470),
           (v18 = game_Unit_GetJob(a2)) != 0)) {
        if (v17 == 0) {
          LOWORD(v17) = *(_WORD*)(v18 + 308);
        }
        v19 = *(__int16*)(v18 + 330) + (__int16)v17;
      }
      else {
        LOBYTE(v42) = 10;
        v20 = game_Unit_GetJob(a2);
        v19 = UnitParams_6dd470(a2, &v42, v20, 0);
      }
      v46 = nullptr;
      v47 = nullptr;
      v48 = 0;
      v49 = 0;
      v44 = (int*)__PAIR64__(v19, v15);
      v45 = v14;
      LODWORD(v42) = 37;
      WORD2(v42) = 1;
      LODWORD(v43) = -1;
      GameRoutine_188df50(v13, &v42, 1, 0);
      v21 = v46;
      v13[142] = (__int64 (*)())a2;
      if (v21 != nullptr) {
        v22 = *v11;
        v47 = v21;
        v23 = 128;
        if (*(_QWORD*)(v22 + 200) == 0) {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free(v22 + v23);
      }
    }
    else if (v12 == 0) {
      goto LABEL_40;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak(v12);
    }
  }
LABEL_40:
  v52[0] = "L_Physique";
  v52[1] = 10;
  GameRoutine_15733c0((void*)(&v42), a1, v52);
  if (v43 != nullptr) {
    v25 = std___1___shared_weak_count_lock(v43);
    v26 = v42;
    if (v43 != nullptr) {
      std___1___shared_weak_count___release_weak(v43);
    }
    if (v25 != 0 && v26 != nullptr) {
      StatusItem_188e530(v26, a2);
    }
    else if (v25 == 0) {
      goto LABEL_49;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
      std___1___shared_weak_count___release_weak(v25);
    }
  }
LABEL_49:
  v27 = &v42;
  v52[0] = a1;
  v53 = 0;
  v42 = GameData_204d478;
  v43 = v52;
  v46 = &v42;
  v44 = &v53;
  if ((*(_BYTE*)(a2 + 1825) & 1) == 0) {
  LABEL_60:
    v34 = 4;
    goto LABEL_61;
  }
  v28 = *(_QWORD*)(a2 + 1784);
  v29 = *(_QWORD*)(a2 + 1776);
  if ((int)((unsigned __int64)(v28 - v29) >> 2) < 1) {
    v27 = &v42;
    goto LABEL_60;
  }
  v30 = 0;
  v31 = 0;
  v32 = GameData_212c880[0];
  v33 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v33 + 64) +
                             8LL * (*(_DWORD*)(v29 + v30) & 0xFFF)) +
                  104LL) == 8) {
      if (v46 == nullptr) {
        GameRoutine_60a310(0, v24);
      }
      ((void (*)(__int64 (***)(), __int64))(*v46)[6])(v46, v29 + v30);
      v33 = *v32;
      v28 = *(_QWORD*)(a2 + 1784);
      v29 = *(_QWORD*)(a2 + 1776);
    }
    ++v31;
    v30 += 4;
  } while (v31 < (int)((unsigned __int64)(v28 - v29) >> 2));
  v27 = v46;
  if (v46 == &v42) {
    goto LABEL_60;
  }
  if (v46 != nullptr) {
    v34 = 5;
  LABEL_61:
    (*v27)[v34]();
  }
  if (v53 <= 2) {
    do {
      GameRoutine_15735c0(v52);
      v35 = v53++;
    } while (v35 < 2);
  }
  v52[0] = "L_IconLegion";
  v52[1] = 12;
  GameRoutine_15736e0((void*)(&v42), a1, v52);
  if (v43 != nullptr) {
    v36 = std___1___shared_weak_count_lock(v43);
    v37 = v42;
    if (v43 != nullptr) {
      std___1___shared_weak_count___release_weak(v43);
    }
    if (v36 != 0 && v37 != nullptr) {
      v37[138] = nullptr;
      v37[137] = nullptr;
      v37[136] = (__int64 (*)())a2;
      *((_BYTE*)v37 + 1112) = 1;
      if ((IconLegion_19abe40(v37, a2) & 1) == 0 &&
          (GameRoutine_19abf80(v37, v37[136]) & 1) == 0) {
        v38 = *v37;
        v37[136] = nullptr;
        (*((void (**)(__int64 (**)(), _QWORD))v38 + 5))(v37, 0);
      }
    }
    else if (v36 == 0) {
      goto LABEL_75;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
      std___1___shared_weak_count___release_weak(v36);
    }
  }
LABEL_75:
  v39 = (_QWORD*)fw_memory_HeapManager_Allocate(*v11, 16, 16, 0);
  v52[0] = a2;
  v46 = &v42;
  *v39 = 0xA00000000LL;
  v39[1] = 0x100000000FLL;
  v42 = GameData_204e798;
  v43 = v52;
  ((void (*)(__int64*, _QWORD*, _QWORD*, __int64 (***)(), __int64, _QWORD,
             _QWORD, __int64, _DWORD, _BYTE, _BYTE))GameRoutine_1586d80)(
      a1, v39, v39 + 2, &v42, 1, 0, 0, a2, 0, 0, 0);
  if (v46 == &v42) {
    v40 = 4;
    goto LABEL_79;
  }
  if (v46 != nullptr) {
    v40 = 5;
  LABEL_79:
    (*v46)[v40]();
  }
  v41 = 128;
  if (*(_QWORD*)(*v11 + 200LL) == 0) {
    v41 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v11 + v41);
}

__int64 LayoutAccessor_1573500(__int64 a1, char a2, char a3)
{
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v10;
  char v11[4];

  if ((game_Unit_IsImmobile(a1) & 1) != 0 && (*(_BYTE*)(a1 + 416) & 4) == 0 &&
      (v6 = *(_QWORD*)(a1 + 392)) != 0 &&
      (v7 = *(unsigned __int16*)(v6 + 470), (v8 = game_Unit_GetJob(a1)) != 0)) {
    if (v7 != 0) {
      if ((a2 & 1) != 0) {
        return 0;
      }
    }
    else {
      LOWORD(v7) = *(_WORD*)(v8 + 308);
      if ((a2 & 1) != 0) {
        return 0;
      }
    }
    return (unsigned int)(*(__int16*)(v8 + 330) + (__int16)v7);
  }
  else {
    v11[0] = 10;
    if ((a2 & 1) != 0) {
      v10 = 0;
    }
    else {
      v10 = game_Unit_GetJob(a1);
    }
    return UnitParams_6dd470(a1, v11, v10, (a3 & 1) == 0);
  }
}

__attribute__((swiftcall)) void

LayoutAccessor_1837560(__attribute__((swift_indirect_result)) void* x8_,
                       __int64* a1, _QWORD* a2)
{
  __int64* a3 = (__int64*)(unsigned __int64)x8_;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  result = a1[1];
  if (result == 0) {
    goto LABEL_33;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    goto LABEL_33;
  }
  v7 = *a1;
  v8 = result;
  if (*a1 != 0 && (result = ui_LayoutAccessor_GetPartsLayout(a1, *a2)) != 0) {
    v9 = *(_QWORD*)(result + 24);
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(GameData_212dfd0) != 0) {
      *GameData_212dfc8 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      __cxa_guard_release(GameData_212dfd0);
    }
    if (v9 == 0) {
      goto LABEL_14;
    }
    v10 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    if (v10 != GameData_212dfc8) {
      do {
        v10 = (__int64*)*v10;
      } while (v10 != GameData_212dfc8 && v10 != nullptr);
      if (v10 == nullptr) {
      LABEL_14:
        v9 = 0;
      }
    }
    *(struct PseudoSret*)(&v19) = Layout_1363f00(v7, v9);
    v21 = 0;
    v22 = 0;
    if (v20 != 0 &&
        (v12 = std___1___shared_weak_count_lock(v20), v22 = v12, v12 != 0) &&
        (v21 = v19, v19 != 0) &&
        (v13 = v12, (v14 = __dynamic_cast(v19, GameData_212dfc0[0],
                                          GameData_2132000[0], 0)) != 0)) {
      v15 = &v21;
      v23 = v14;
      v24 = v13;
    }
    else {
      v15 = &v23;
    }
    *v15 = 0;
    v15[1] = 0;
    v17 = v24;
    *a3 = v23;
    a3[1] = v17;
    if (v17 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak(v17);
      }
    }
    v18 = v22;
    if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      std___1___shared_weak_count___release_weak(v18);
    }
    result = v20;
    if (v20 != 0) {
      result = std___1___shared_weak_count___release_weak(v20);
    }
    v16 = 0;
  }
  else {
    v16 = 1;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v16 == 0) {
      result;
      return;
    }
    goto LABEL_33;
  }
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  result = std___1___shared_weak_count___release_weak(v8);
  if (v16 != 0) {
  LABEL_33:
    *a3 = 0;
    a3[1] = 0;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

LayoutAccessor_1839200(__attribute__((swift_indirect_result)) void* x8_,
                       __int64* a1, _QWORD* a2)
{
  __int64* a3 = (__int64*)(unsigned __int64)x8_;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  result = a1[1];
  if (result == 0) {
    goto LABEL_33;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    goto LABEL_33;
  }
  v7 = *a1;
  v8 = result;
  if (*a1 != 0 && (result = ui_LayoutAccessor_GetPartsLayout(a1, *a2)) != 0) {
    v9 = *(_QWORD*)(result + 24);
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(GameData_212dfd0) != 0) {
      *GameData_212dfc8 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      __cxa_guard_release(GameData_212dfd0);
    }
    if (v9 == 0) {
      goto LABEL_14;
    }
    v10 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    if (v10 != GameData_212dfc8) {
      do {
        v10 = (__int64*)*v10;
      } while (v10 != GameData_212dfc8 && v10 != nullptr);
      if (v10 == nullptr) {
      LABEL_14:
        v9 = 0;
      }
    }
    *(struct PseudoSret*)(&v19) = Layout_1363f00(v7, v9);
    v21 = 0;
    v22 = 0;
    if (v20 != 0 &&
        (v12 = std___1___shared_weak_count_lock(v20), v22 = v12, v12 != 0) &&
        (v21 = v19, v19 != 0) &&
        (v13 = v12, (v14 = __dynamic_cast(v19, GameData_212dfc0[0],
                                          GameData_2132008[0], 0)) != 0)) {
      v15 = &v21;
      v23 = v14;
      v24 = v13;
    }
    else {
      v15 = &v23;
    }
    *v15 = 0;
    v15[1] = 0;
    v17 = v24;
    *a3 = v23;
    a3[1] = v17;
    if (v17 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak(v17);
      }
    }
    v18 = v22;
    if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      std___1___shared_weak_count___release_weak(v18);
    }
    result = v20;
    if (v20 != 0) {
      result = std___1___shared_weak_count___release_weak(v20);
    }
    v16 = 0;
  }
  else {
    v16 = 1;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v16 == 0) {
      result;
      return;
    }
    goto LABEL_33;
  }
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  result = std___1___shared_weak_count___release_weak(v8);
  if (v16 != 0) {
  LABEL_33:
    *a3 = 0;
    a3[1] = 0;
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
