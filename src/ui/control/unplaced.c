#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Element_1885dc0(PSEUDO_X8, __int64 result,
                                                _QWORD*);
__attribute__((swiftcall)) void GameRoutine_15b71b0(PSEUDO_X8, _QWORD, _QWORD);
__int64 Element_1887de0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD, long double);
__int64 Manager_66cc20(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_control_1887780_alt1(_QWORD, _QWORD,
                                _QWORD) __asm__("ui_control_1887780");
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_18883b0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__attribute__((swiftcall)) void ui_control_18868e0(PSEUDO_X8 x8_,
                                                   __int64 result, int a2);
char* ui_control_1886bc0_alt1(_QWORD* a1, int a2) __asm__("ui_control_1886bc0");
__attribute__((swiftcall)) void ui_control_1886f20(PSEUDO_X8 x8_, _QWORD* a1,
                                                   int a2, __int64 a3);
__int64 ui_control_1887780(__int64 result, __int64 a2, __int64 a3, __int64 a4);
__attribute__((swiftcall)) void ui_control_1888120(PSEUDO_X8 x8_, _QWORD* a1,
                                                   int a2, __int64 a3);
__attribute__((swiftcall)) void
Element_1885dc0_alt1(PSEUDO_X8, __int64 result,
                     __int64*) __asm__("Element_1885dc0");
__attribute__((swiftcall)) void
    GameRoutine_15b71b0_alt1(PSEUDO_X8) __asm__("GameRoutine_15b71b0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void Element_1887de0_alt1(_QWORD*, __int64, const char*,
                          __int64) __asm__("Element_1887de0");
void __attribute__((noreturn))
GameRoutine_18883b0_alt1() __asm__("GameRoutine_18883b0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ui_control_1887780_alt2(const char**, __int64, const char*,
                             __int64) __asm__("ui_control_1887780");
__int64 ui_control_1886bc0(_QWORD* a1, int a2);
void Element_1887de0_alt2(_QWORD*, __int64*, const char*,
                          __int64) __asm__("Element_1887de0");
void ui_control_1887780_alt3(__int64*, __int64**, const char*,
                             __int64) __asm__("ui_control_1887780");

__attribute__((swiftcall)) void ui_control_18868e0(PSEUDO_X8 x8_,
                                                   __int64 result, int a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;

  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  v5 = result;
  v6 = result + 24LL * a2;
  v7 = *(unsigned __int8*)(v6 + 832);
  if ((v7 & 1) != 0) {
    v8 = *(_QWORD*)(v6 + 840);
  }
  else {
    v8 = v7 >> 1;
  }
  if (v8 != 0) {
    result = Manager_66cc20(a3, v6 + 832);
    v9 = (_QWORD*)result;
    a3[1] = result;
  }
  else {
    v9 = nullptr;
  }
  v10 = v5 + 120LL * a2;
  v11 = *(unsigned __int8*)(v10 + 352);
  v12 = *(_QWORD*)(v10 + 360);
  v13 = (__int64*)(v10 + 352);
  v14 = v11 >> 1;
  if ((v11 & 1) != 0) {
    v14 = v12;
  }
  if (v14 != 0) {
    if ((unsigned __int64)v9 >= a3[2]) {
      result = Manager_66cc20(a3, v13);
      v9 = (_QWORD*)result;
    }
    else {
      if ((v11 & 1) != 0) {
        result = fw_text_String_CopyTerminated(v9, v13[2], v12);
      }
      else {
        v15 = *v13;
        v16 = v13[2];
        v9[1] = v13[1];
        v9[2] = v16;
        *v9 = v15;
      }
      v9 += 3;
    }
    a3[1] = v9;
  }
  v17 = v13 + 3;
  v18 = *((unsigned __int8*)v13 + 24);
  v19 = v18 >> 1;
  if ((v18 & 1) != 0) {
    v19 = v13[4];
  }
  if (v19 != 0) {
    if ((unsigned __int64)v9 >= a3[2]) {
      result = Manager_66cc20(a3, v17);
      v9 = (_QWORD*)result;
    }
    else {
      if ((v18 & 1) != 0) {
        result = fw_text_String_CopyTerminated(v9, v13[5], v13[4]);
      }
      else {
        v20 = *v17;
        v21 = v13[5];
        v9[1] = v13[4];
        v9[2] = v21;
        *v9 = v20;
      }
      v9 += 3;
    }
    a3[1] = v9;
  }
  v22 = v13 + 6;
  v23 = *((unsigned __int8*)v13 + 48);
  v24 = v23 >> 1;
  if ((v23 & 1) != 0) {
    v24 = v13[7];
  }
  if (v24 != 0) {
    if ((unsigned __int64)v9 >= a3[2]) {
      result = Manager_66cc20(a3, v22);
      v9 = (_QWORD*)result;
    }
    else {
      if ((v23 & 1) != 0) {
        result = fw_text_String_CopyTerminated(v9, v13[8], v13[7]);
      }
      else {
        v25 = *v22;
        v26 = v13[8];
        v9[1] = v13[7];
        v9[2] = v26;
        *v9 = v25;
      }
      v9 += 3;
    }
    a3[1] = v9;
  }
  v27 = v13 + 9;
  v28 = *((unsigned __int8*)v13 + 72);
  v29 = v28 >> 1;
  if ((v28 & 1) != 0) {
    v29 = v13[10];
  }
  if (v29 != 0) {
    if ((unsigned __int64)v9 >= a3[2]) {
      result = Manager_66cc20(a3, v27);
      v9 = (_QWORD*)result;
    }
    else {
      if ((v28 & 1) != 0) {
        result = fw_text_String_CopyTerminated(v9, v13[11], v13[10]);
      }
      else {
        v30 = *v27;
        v31 = v13[11];
        v9[1] = v13[10];
        v9[2] = v31;
        *v9 = v30;
      }
      v9 += 3;
    }
    a3[1] = v9;
  }
  v32 = v13 + 12;
  v33 = *((unsigned __int8*)v13 + 96);
  v34 = v33 >> 1;
  if ((v33 & 1) != 0) {
    v34 = v13[13];
  }
  if (v34 != 0) {
    if ((unsigned __int64)v9 >= a3[2]) {
      result = Manager_66cc20(a3, v32);
    }
    else {
      if ((v33 & 1) != 0) {
        fw_text_String_CopyTerminated(v9, v13[14], v13[13]);
      }
      else {
        v35 = *v32;
        v36 = v13[14];
        v9[1] = v13[13];
        v9[2] = v36;
        *v9 = v35;
      }
      result = (__int64)(v9 + 3);
    }
    a3[1] = result;
  }
  {
    result;
    return;
  }
}

__int64 ui_control_1886bc0(_QWORD* a1, int a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  int v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  bool v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  bool v28;
  char v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  bool v42;
  char v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v56;
  struct {
    __int64 v57;
    __int64 v58;
  } v57_;
  __int64 v59[2];

  v3 = a1[38];
  if (v3 != 0) {
    v5 = std___1___shared_weak_count_lock_alt1(v3);
    if (v5 != 0) {
      v6 = a1[37];
    }
    else {
      v6 = 0;
    }
  }
  else {
    v5 = 0;
    v6 = 0;
  }
  v7 = a2;
  v8 = &a1[3 * a2];
  v9 = *((unsigned __int8*)v8 + 832);
  if ((v9 & 1) != 0) {
    v10 = v8[105];
  }
  else {
    v10 = v9 >> 1;
  }
  if (v10 != 0) {
    v11 = v8 + 104;
    if ((v9 & 1) != 0) {
      v12 = v11[2];
    }
    else {
      v12 = (__int64)v11 + 1;
    }
  }
  else {
    v13 = &a1[15 * v7];
    v14 = *((unsigned __int8*)v13 + 352);
    v15 = (__int64)v13 + 353;
    v18 = v13 + 45;
    v16 = v13[45];
    v17 = v18[1];
    v19 = (v14 & 1) == 0;
    v20 = v14 >> 1;
    if (v19) {
      v12 = v15;
    }
    else {
      v12 = v17;
    }
    if (v19) {
      v10 = v20;
    }
    else {
      v10 = v16;
    }
  }
  v21 = a1[40];
  v59[0] = v12;
  v59[1] = v10;
  if (v21 != 0 &&
      (v22 = a1[39],
       atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                                 memory_order_relaxed),
       v23 = std___1___shared_weak_count_lock_alt1(v21),
       std___1___shared_weak_count___release_weak_alt1(v21), v23 != 0)) {
    v56 = v23;
    if (v22 != 0) {
      do {
        Element_1885dc0_alt1((void*)(&v57_.v57), v22, v59);
        v24 = v57_.v58;
        if (v57_.v58 == 0) {
          break;
        }
        v25 = std___1___shared_weak_count_lock_alt1(v57_.v58);
        if (v25 == 0) {
          std___1___shared_weak_count___release_weak_alt1(v24);
          break;
        }
        v26 = v57_.v57;
        v27 = v25;
        std___1___shared_weak_count___release_weak_alt1(v24);
        v28 = v26 == 0 || v6 == v26;
        v29 = !v28;
        if (!v28) {
          v30 = v26 + 24LL * v7;
          v31 = *(unsigned __int8*)(v30 + 832);
          v32 = *(_QWORD*)(v30 + 840);
          if ((v31 & 1) == 0) {
            v32 = v31 >> 1;
          }
          if (v32 != 0) {
            v33 = v30 + 832;
            if ((v31 & 1) != 0) {
              v34 = *(_QWORD*)(v33 + 16);
            }
            else {
              v34 = v33 + 1;
            }
          }
          else {
            v35 = v26 + 120LL * v7;
            v36 = *(unsigned __int8*)(v35 + 352);
            v34 = v35 + 353;
            v38 = v35 + 360;
            v32 = *(_QWORD*)(v35 + 360);
            v37 = *(_QWORD*)(v38 + 8);
            v19 = (v36 & 1) == 0;
            v39 = v36 >> 1;
            if (v19) {
              v32 = v39;
            }
            else {
              v34 = v37;
            }
          }
          v59[0] = v34;
          v59[1] = v32;
          if (v32 != 0) {
            v12 = v34;
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
          std___1___shared_weak_count___release_weak_alt1(v27);
        }
      } while ((v29 & 1) != 0);
      v54 = v56;
      goto LABEL_80;
    }
  }
  else {
    v56 = 0;
  }
  do {
    GameRoutine_15b71b0_alt1((void*)(&v57_.v57));
    if (v57_.v58 == 0) {
      break;
    }
    v40 = std___1___shared_weak_count_lock_alt1(v57_.v58);
    if (v40 != 0) {
      v41 = v57_.v57;
    }
    else {
      v41 = 0;
    }
    if (v57_.v58 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v57_.v58);
    }
    v42 = v41 == 0 || v6 == v41;
    v43 = !v42;
    if (!v42) {
      v44 = v41 + 24LL * v7;
      v45 = *(unsigned __int8*)(v44 + 832);
      v46 = *(_QWORD*)(v44 + 840);
      if ((v45 & 1) == 0) {
        v46 = v45 >> 1;
      }
      if (v46 != 0) {
        v47 = v44 + 832;
        if ((v45 & 1) != 0) {
          v48 = *(_QWORD*)(v47 + 16);
        }
        else {
          v48 = v47 + 1;
        }
      }
      else {
        v49 = v41 + 120LL * v7;
        v50 = *(unsigned __int8*)(v49 + 352);
        v48 = v49 + 353;
        v52 = v49 + 360;
        v46 = *(_QWORD*)(v49 + 360);
        v51 = *(_QWORD*)(v52 + 8);
        v19 = (v50 & 1) == 0;
        v53 = v50 >> 1;
        if (v19) {
          v46 = v53;
        }
        else {
          v48 = v51;
        }
      }
      v59[0] = v48;
      v59[1] = v46;
      if (v46 != 0) {
        v12 = v48;
      }
    }
    if (v40 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
      std___1___shared_weak_count___release_weak_alt1(v40);
    }
  } while ((v43 & 1) != 0);
  v54 = v56;
  if (v56 != 0) {
  LABEL_80:
    if (atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
      std___1___shared_weak_count___release_weak_alt1(v54);
    }
  }
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt1(v5);
  }
  return v12;
}

__attribute__((swiftcall)) void ui_control_1886f20(PSEUDO_X8 x8_, _QWORD* a1,
                                                   int a2, __int64 a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  _QWORD* v14;
  const char* v15;
  __int64 v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  _QWORD* v20;
  const char* v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64* v25;
  const char* v26;
  __int64 v27;
  __int64 v28;
  const char* v29;
  unsigned __int64 v30;
  __int64 v31;
  _QWORD* v32;
  unsigned __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  signed __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  const char* v41;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64* v49;
  __int64 v50;
  char v51;
  __int64 v52;
  __int64 v53;
  _QWORD* v54;
  __int64 v55;
  _QWORD* v56;
  __int64 v57;
  __int64* v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  const char* v62;
  unsigned __int64 v63;
  __int64 v64;
  _QWORD* v65;
  unsigned __int64 v66;
  __int64 v67;
  _QWORD* v68;
  __int64 v69;
  signed __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64* v75;
  __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64* v80;
  __int64* v81;
  __int64 v82;
  char v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  struct {
    __int64 v90;
    __int64 v91;
  } v90_;
  struct {
    __int64 v92;
    unsigned __int64 v93;
    const char* v94;
  } v92_;
  struct {
    __int64* v95;
    __int64* v96;
  } v95_;
  struct {
    _QWORD v97[2];
    __int64 v98;
    int* v99;
    _QWORD* v100;
  } v97_;
  struct {
    __int64 v101;
    __int64 v102;
  } v101_;
  struct {
    __int64 v103;
    __int64 v104;
  } v103_;
  int v105;

  v4 = a1[40];
  v8 = a4;
  v105 = a2;
  *a4 = 0;
  a4[1] = 0;
  a4[2] = 0;
  if (v4 == 0) {
    v103_.v103 = 0;
    v103_.v104 = 0;
    goto LABEL_16;
  }
  v9 = a1[39];
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v103_.v103 = 0;
  v103_.v104 = std___1___shared_weak_count_lock_alt1(v4);
  if (v103_.v104 == 0) {
    std___1___shared_weak_count___release_weak_alt1(v4);
  LABEL_16:
    v16 = a1[38];
    v101_.v101 = 0;
    v101_.v102 = 0;
    if (v16 != 0) {
      v101_.v102 = std___1___shared_weak_count_lock_alt1(v16);
      if (v101_.v102 != 0) {
        v101_.v101 = a1[37];
      }
    }
    v97_.v97[0] = a1;
    v97_.v97[1] = &v101_.v101;
    v97_.v98 = a3;
    v97_.v99 = &v105;
    v17 = &a1[3 * a2];
    v18 = *((unsigned __int8*)v17 + 832);
    if ((v18 & 1) != 0) {
      v19 = v17[105];
    }
    else {
      v19 = v18 >> 1;
    }
    if (v19 != 0) {
      v20 = v17 + 104;
      if ((v18 & 1) != 0) {
        v21 = (const char*)v20[2];
      }
      else {
        v21 = (char*)v20 + 1;
      }
    }
    else {
      v21 = nullptr;
    }
    Element_1887de0_alt2(&v95_.v95, v97_.v97, v21, v19);
    v22 = (__int64)v95_.v95;
    if (v95_.v95 != nullptr) {
      goto LABEL_86;
    }
    v23 = (__int64)v95_.v96;
    if (v95_.v96 != nullptr &&
        atomic_fetch_add((atomic_ullong* volatile)(v95_.v96 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
      std___1___shared_weak_count___release_weak_alt1(v23);
    }
    ui_control_18868e0((void*)(&v95_.v95), (__int64)a1, v105);
    v24 = v95_.v95;
    v25 = v95_.v96;
    if (v95_.v95 == v95_.v96) {
    LABEL_74:
      if (v24 == nullptr) {
        goto LABEL_149;
      }
      v48 = v95_.v96;
      if (v24 == v95_.v96) {
        goto LABEL_146;
      }
      v49 = v95_.v96;
      v50 = fw_memory_g_heap_manager_ptr;
      do {
        v51 = *((_BYTE*)v49 - 24);
        v49 -= 3;
        if ((v51 & 1) != 0) {
          v52 = *(v48 - 1);
          if (v52 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v50 + 200LL) != 0) {
              v53 = 128;
            }
            else {
              v53 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v50 + v53, v52);
          }
        }
        v48 = v49;
      } while (v49 != v24);
      goto LABEL_145;
    }
    v26 = (char*)&v92_.v92 + 1;
    while (1) {
      if ((*(_BYTE*)v24 & 1) != 0) {
        fw_text_String_CopyTerminated_alt1(&v92_.v92, v24[2], v24[1]);
      }
      else {
        v27 = *v24;
        v28 = v24[2];
        v92_.v93 = v24[1];
        v92_.v94 = (const char*)v28;
        v92_.v92 = v27;
      }
      if ((v92_.v92 & 1) != 0) {
        v29 = v92_.v94;
      }
      else {
        v29 = v26;
      }
      if ((v92_.v92 & 1) != 0) {
        v30 = v92_.v93;
      }
      else {
        v30 = (unsigned __int64)(unsigned __int8)v92_.v92 >> 1;
      }
      Element_1887de0_alt2(&v90_.v90, v97_.v97, v29, v30);
      v31 = v90_.v90;
      if (v90_.v90 != 0) {
        v32 = (_QWORD*)v8[1];
        v33 = v8[2];
        if ((unsigned __int64)v32 >= v33) {
          v36 = *v8;
          v37 = (signed __int64)v32 - *v8;
          v38 = (v37 >> 4) + 1;
          if (v38 >> 60 != 0) {
          LABEL_157:
            GameRoutine_18883b0_alt1();
          }
          v39 = v33 - v36;
          if (v39 >> 3 > v38) {
            v38 = v39 >> 3;
          }
          if ((unsigned __int64)v39 >= 0x7FFFFFFFFFFFFFF0LL) {
            v40 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v40 = v38;
          }
          if (v40 >> 60 != 0) {
          LABEL_156:
            GameRoutine_60a210_alt1();
          }
          v41 = v26;
          v42 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v40, 16, 0);
          v34 = v90_.v91;
          v43 = (__int64*)(v42 + v37);
          *v43 = v31;
          v43[1] = v34;
          if (v34 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 8), 1u,
                                      memory_order_relaxed);
          }
          v44 = (__int64)&v43[-2 * (v37 >> 4)];
          v45 = v42 + 16 * v40;
          v35 = v43 + 2;
          memcpy_alt1(v44, v36, v37);
          v8 = a4;
          *a4 = v44;
          a4[2] = v45;
          if (v36 != 0) {
            v46 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v46 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v36);
          }
          v26 = v41;
        }
        else {
          v34 = v90_.v91;
          *v32 = v90_.v90;
          v32[1] = v34;
          if (v34 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 8), 1u,
                                      memory_order_relaxed);
          }
          v35 = v32 + 2;
        }
        v8[1] = (__int64)v35;
        if (v34 == 0) {
        LABEL_66:
          if ((v92_.v92 & 1) != 0) {
            goto LABEL_67;
          }
          goto LABEL_33;
        }
      }
      else {
        v34 = v90_.v91;
        if (v90_.v91 == 0) {
          goto LABEL_66;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_66;
      }
      (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
      std___1___shared_weak_count___release_weak_alt1(v34);
      if ((v92_.v92 & 1) != 0) {
      LABEL_67:
        if (v92_.v94 != nullptr) {
          v47 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v47 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v47, (__int64)v92_.v94);
        }
      }
    LABEL_33:
      v24 += 3;
      if (v24 == v25) {
        v24 = v95_.v95;
        goto LABEL_74;
      }
    }
  }
  v103_.v103 = v9;
  std___1___shared_weak_count___release_weak_alt1(v4);
  if (v9 == 0) {
    goto LABEL_16;
  }
  v10 = a1[38];
  v101_.v101 = 0;
  v101_.v102 = 0;
  if (v10 != 0) {
    v101_.v102 = std___1___shared_weak_count_lock_alt1(v10);
    if (v101_.v102 != 0) {
      v101_.v101 = a1[37];
    }
  }
  v97_.v100 = a1;
  v97_.v97[0] = &v103_.v103;
  v97_.v97[1] = &v101_.v101;
  v97_.v98 = a3;
  v97_.v99 = &v105;
  v11 = &a1[3 * a2];
  v12 = *((unsigned __int8*)v11 + 832);
  if ((v12 & 1) != 0) {
    v13 = v11[105];
  }
  else {
    v13 = v12 >> 1;
  }
  if (v13 != 0) {
    v14 = v11 + 104;
    if ((v12 & 1) != 0) {
      v15 = (const char*)v14[2];
    }
    else {
      v15 = (char*)v14 + 1;
    }
  }
  else {
    v15 = nullptr;
  }
  ui_control_1887780_alt3((__int64*)&v95_.v95, (__int64**)v97_.v97, v15, v13);
  v22 = (__int64)v95_.v95;
  if (v95_.v95 != nullptr) {
  LABEL_86:
    v54 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
    v55 = (__int64)v95_.v96;
    v56 = v54 + 2;
    *v54 = v22;
    v54[1] = v55;
    if (v55 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v55 + 8), 1u,
                                memory_order_relaxed);
      v8[1] = (__int64)v56;
      v8[2] = (__int64)v56;
      *v8 = (__int64)v54;
      if (atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
        std___1___shared_weak_count___release_weak_alt1(v55);
      }
    }
    else {
      v8[1] = (__int64)v56;
      v8[2] = (__int64)v56;
      *v8 = (__int64)v54;
    }
    goto LABEL_149;
  }
  v57 = (__int64)v95_.v96;
  if (v95_.v96 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)(v95_.v96 + 1),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
    std___1___shared_weak_count___release_weak_alt1(v57);
  }
  ui_control_18868e0((void*)(&v95_.v95), (__int64)a1, v105);
  v24 = v95_.v95;
  v58 = v95_.v96;
  if (v95_.v95 != v95_.v96) {
    v59 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
      if ((*(_BYTE*)v24 & 1) != 0) {
        fw_text_String_CopyTerminated_alt1(&v92_.v92, v24[2], v24[1]);
      }
      else {
        v60 = *v24;
        v61 = v24[2];
        v92_.v93 = v24[1];
        v92_.v94 = (const char*)v61;
        v92_.v92 = v60;
      }
      if ((v92_.v92 & 1) != 0) {
        v62 = v92_.v94;
      }
      else {
        v62 = (char*)&v92_.v92 + 1;
      }
      if ((v92_.v92 & 1) != 0) {
        v63 = v92_.v93;
      }
      else {
        v63 = (unsigned __int64)(unsigned __int8)v92_.v92 >> 1;
      }
      ui_control_1887780_alt3(&v90_.v90, (__int64**)v97_.v97, v62, v63);
      v64 = v90_.v90;
      if (v90_.v90 != 0) {
        v65 = (_QWORD*)v8[1];
        v66 = v8[2];
        if ((unsigned __int64)v65 >= v66) {
          v69 = *v8;
          v70 = (signed __int64)v65 - *v8;
          v71 = (v70 >> 4) + 1;
          if (v71 >> 60 != 0) {
            goto LABEL_157;
          }
          v72 = v66 - v69;
          if (v72 >> 3 > v71) {
            v71 = v72 >> 3;
          }
          if ((unsigned __int64)v72 >= 0x7FFFFFFFFFFFFFF0LL) {
            v73 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v73 = v71;
          }
          if (v73 >> 60 != 0) {
            goto LABEL_156;
          }
          v74 = fw_memory_HeapManager_Allocate_alt1(*v59, 16 * v73, 16, 0);
          v67 = v90_.v91;
          v75 = (__int64*)(v74 + v70);
          *v75 = v64;
          v75[1] = v67;
          if (v67 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v67 + 8), 1u,
                                      memory_order_relaxed);
          }
          v76 = (__int64)&v75[-2 * (v70 >> 4)];
          v77 = v74 + 16 * v73;
          v68 = v75 + 2;
          memcpy_alt1(v76, v69, v70);
          v8 = a4;
          *a4 = v76;
          a4[2] = v77;
          if (v69 != 0) {
            v78 = 128;
            if (*(_QWORD*)(*v59 + 200) == 0) {
              v78 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v59 + v78, v69);
          }
        }
        else {
          v67 = v90_.v91;
          *v65 = v90_.v90;
          v65[1] = v67;
          if (v67 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v67 + 8), 1u,
                                      memory_order_relaxed);
          }
          v68 = v65 + 2;
        }
        v8[1] = (__int64)v68;
        if (v67 == 0) {
        LABEL_127:
          if ((v92_.v92 & 1) != 0) {
            goto LABEL_128;
          }
          goto LABEL_95;
        }
      }
      else {
        v67 = v90_.v91;
        if (v90_.v91 == 0) {
          goto LABEL_127;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v67 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_127;
      }
      (*(void (**)(__int64))(*(_QWORD*)v67 + 16LL))(v67);
      std___1___shared_weak_count___release_weak_alt1(v67);
      if ((v92_.v92 & 1) != 0) {
      LABEL_128:
        if (v92_.v94 != nullptr) {
          v79 = 128;
          if (*(_QWORD*)(*v59 + 200) == 0) {
            v79 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v59 + v79, (__int64)v92_.v94);
        }
      }
    LABEL_95:
      v24 += 3;
      if (v24 == v58) {
        v24 = v95_.v95;
        break;
      }
    }
  }
  if (v24 == nullptr) {
    goto LABEL_149;
  }
  v80 = v95_.v96;
  if (v24 != v95_.v96) {
    v81 = v95_.v96;
    v82 = fw_memory_g_heap_manager_ptr;
    do {
      v83 = *((_BYTE*)v81 - 24);
      v81 -= 3;
      if ((v83 & 1) != 0) {
        v84 = *(v80 - 1);
        if (v84 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v82 + 200LL) != 0) {
            v85 = 128;
          }
          else {
            v85 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v82 + v85, v84);
        }
      }
      v80 = v81;
    } while (v81 != v24);
  LABEL_145:
    v95_.v96 = v24;
    v24 = v95_.v95;
    if (v95_.v95 == nullptr) {
      goto LABEL_149;
    }
  }
LABEL_146:
  v86 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v86 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v86, (__int64)v24);
LABEL_149:
  v87 = v101_.v102;
  if (v101_.v102 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v101_.v102 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v87 + 16LL))(v87);
    std___1___shared_weak_count___release_weak_alt1(v87);
  }
  v88 = v103_.v104;
  if (v103_.v104 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v103_.v104 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v88 + 16LL))(v88);
    std___1___shared_weak_count___release_weak_alt1(v88);
  }
}

__int64 ui_control_1887780(__int64 result, __int64 a2, __int64 a3, __int64 a4)
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
  unsigned __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  long double v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  int v26;
  _QWORD* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  _QWORD* v30;
  char* v31;
  char* v32;
  _QWORD* v33;
  unsigned __int64 v34;
  char* v35;
  unsigned __int64 v36;
  char* v37;
  _QWORD* v38;
  bool v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  char* v42;
  _QWORD* v43;
  __int64 v44;
  int* v45;
  unsigned __int64 v46;
  char* v47;
  __int64 v48;
  char* v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  _QWORD* v53;
  long double v54;
  __int64 v55;
  int v56;
  __int64 v57;
  __int64 v58;
  unsigned int v59;
  _QWORD* v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  _QWORD* v63;
  char* v64;
  char* v65;
  _QWORD* v66;
  unsigned __int64 v67;
  char* v68;
  unsigned __int64 v69;
  char* v70;
  _QWORD* v71;
  bool v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  _QWORD* v77;
  __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  char* v81;
  _QWORD* v82;
  __int64 v83;
  _QWORD v84[2];
  _QWORD* v85;
  unsigned __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  char* v89;

  v4 = (_QWORD*)result;
  if (a4 == 0) {
    *(_QWORD*)result = 0;
    *(_QWORD*)(result + 8) = 0;
    return result;
  }
  v5 = *(_QWORD*)(a2 + 32);
  v8 = strlen(a3);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_131:
    String_60a1d0(v8);
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
    v80 = v9;
    v81 = v10;
    v79 = v11 | 1;
  }
  else {
    LOBYTE(v79) = 2 * v8;
    v10 = (char*)&v79 + 1;
    if (v8 == 0) {
      goto LABEL_12;
    }
  }
  memmove(v10, a3, v9);
LABEL_12:
  v10[v9] = 0;
  do {
    v12 = v81;
    v13 = **(_QWORD**)a2;
    v14 = (unsigned __int64)(unsigned __int8)v79 >> 1;
    if ((v79 & 1) != 0) {
      v14 = v80;
    }
    else {
      v12 = (char*)&v79 + 1;
    }
    v85 = v12;
    v86 = v14;
    Element_1885dc0((void*)(&v87), v13, &v85);
    v15 = v88;
    *v4 = 0;
    v4[1] = 0;
    if (v15 == 0) {
      goto LABEL_27;
    }
    v16 = std___1___shared_weak_count_lock(v15);
    v4[1] = v16;
    if (v16 == 0) {
      std___1___shared_weak_count___release_weak(v15);
    LABEL_27:
      v21 = 3;
      v22 = v4[1];
      if (v22 == 0) {
        continue;
      }
    LABEL_28:
      if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        std___1___shared_weak_count___release_weak(v22);
      }
      continue;
    }
    v17 = (_QWORD*)v87;
    v18 = v16;
    *v4 = v87;
    std___1___shared_weak_count___release_weak(v15);
    if (v17 == nullptr || **(_QWORD***)(a2 + 8) == v17) {
      goto LABEL_27;
    }
    result = (*(__int64 (**)(_QWORD*))(*v17 + 32LL))(v17);
    if ((result & 1) != 0) {
      v20 = *(_QWORD*)(v17[1] + 24LL);
      while (1) {
        v20 = *(_QWORD*)(v20 + 24);
        if (v20 == 0) {
          break;
        }
        if ((*(_BYTE*)(v20 + 88) & 1) == 0) {
          goto LABEL_37;
        }
      }
      v23 = *(_QWORD*)(a2 + 16);
      if (*(_QWORD*)(v23 + 32) == 0) {
        goto LABEL_125;
      }
      v77 = v17;
      v78 = v18;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                memory_order_relaxed);
      result = *(_QWORD*)(v23 + 32);
      if (result == 0) {
      LABEL_132:
        GameRoutine_60a310(result);
      }
      result = (*(__int64 (**)(__int64, _QWORD**))(*(_QWORD*)result + 48LL))(
          result, &v77);
      v24 = v78;
      if (v78 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v78 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        v25 = result;
        (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
        std___1___shared_weak_count___release_weak(v24);
        result = v25;
      }
      if ((result & 1) != 0) {
        goto LABEL_125;
      }
      v17 = (_QWORD*)*v4;
    }
  LABEL_37:
    v26 = **(_DWORD**)(a2 + 24);
    v27 = &v17[3 * v26];
    v28 = *((unsigned __int8*)v27 + 832);
    if ((v28 & 1) != 0) {
      v29 = v27[105];
    }
    else {
      v29 = v28 >> 1;
    }
    if (v29 != 0) {
      v30 = v27 + 104;
      v31 = (char*)v27[106];
      if ((v28 & 1) != 0) {
        v32 = v31;
      }
      else {
        v32 = (char*)v30 + 1;
      }
    }
    else {
      v33 = &v17[15 * v26];
      v34 = *((unsigned __int8*)v33 + 352);
      v35 = (char*)v33 + 353;
      v38 = v33 + 45;
      v36 = v33[45];
      v37 = (char*)v38[1];
      v39 = (v34 & 1) == 0;
      v40 = v34 >> 1;
      if (v39) {
        v32 = v35;
      }
      else {
        v32 = v37;
      }
      if (v39) {
        v29 = v40;
      }
      else {
        v29 = v36;
      }
    }
    GameRoutine_60a060(&v79, v32, v29, v19);
    v21 = 0;
    v22 = v4[1];
    if (v22 != 0) {
      goto LABEL_28;
    }
  } while (v21 == 0);
  if ((v79 & 1) != 0) {
    v41 = v80;
  }
  else {
    v41 = (unsigned __int64)(unsigned __int8)v79 >> 1;
  }
  if ((v79 & 1) != 0) {
    v42 = v81;
  }
  else {
    v42 = (char*)&v79 + 1;
  }
  result = memchr(v42, 47, v41);
  if (result == 0 || result - (_QWORD)v42 == -1 || v41 == 0) {
    goto LABEL_124;
  }
  v43 = *(_QWORD**)(a2 + 8);
  v44 = *(_QWORD*)(a2 + 16);
  v45 = *(int**)(a2 + 24);
  v8 = strlen(v42);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_131;
  }
  v46 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v48 = 26;
    }
    else {
      v48 = (v8 | 7) + 1;
    }
    v47 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v48,
                                                16, 0);
    v88 = v46;
    v89 = v47;
    v87 = v48 | 1;
    goto LABEL_69;
  }
  LOBYTE(v87) = 2 * v8;
  v47 = (char*)&v87 + 1;
  if (v8 != 0) {
  LABEL_69:
    memmove(v47, v42, v46);
  }
  v47[v46] = 0;
  do {
    v49 = v89;
    v50 = *(_QWORD*)(v5 + 80);
    v51 = (unsigned __int64)(unsigned __int8)v87 >> 1;
    if ((v87 & 1) != 0) {
      v51 = v88;
    }
    else {
      v49 = (char*)&v87 + 1;
    }
    v84[0] = v49;
    v84[1] = v51;
    GameRoutine_15b71b0((void*)(&v85), v50, v84);
    result = v86;
    *v4 = 0;
    v4[1] = 0;
    if (result == 0) {
    LABEL_86:
      v56 = 3;
      v57 = v4[1];
      if (v57 == 0) {
        continue;
      }
    LABEL_112:
      if (atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
        result = std___1___shared_weak_count___release_weak(v57);
      }
      continue;
    }
    v52 = std___1___shared_weak_count_lock(result);
    v4[1] = v52;
    if (v52 == 0) {
      v53 = nullptr;
      result = v86;
      if (v86 == 0) {
        goto LABEL_79;
      }
    LABEL_78:
      result = std___1___shared_weak_count___release_weak(result);
      goto LABEL_79;
    }
    v53 = v85;
    *v4 = v85;
    result = v86;
    if (v86 != 0) {
      goto LABEL_78;
    }
  LABEL_79:
    if (v53 == nullptr || (_QWORD*)*v43 == v53) {
      goto LABEL_86;
    }
    if (((*(__int64 (**)(_QWORD*))(*v53 + 32LL))(v53) & 1) != 0) {
      v55 = *(_QWORD*)(v53[1] + 24LL);
      while (1) {
        v55 = *(_QWORD*)(v55 + 24);
        if (v55 == 0) {
          break;
        }
        if ((*(_BYTE*)(v55 + 88) & 1) == 0) {
          goto LABEL_98;
        }
      }
      result = *(_QWORD*)(v44 + 32);
      if (result == 0) {
        goto LABEL_115;
      }
      v82 = v53;
      v83 = v52;
      if (v52 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v52 + 8), 1u,
                                  memory_order_relaxed);
        result = *(_QWORD*)(v44 + 32);
        if (result == 0) {
          goto LABEL_132;
        }
      }
      result = (*(__int64 (**)(__int64, _QWORD**))(*(_QWORD*)result + 48LL))(
          result, &v82);
      v58 = v83;
      if (v83 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v83 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        v59 = result;
        (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
        std___1___shared_weak_count___release_weak(v58);
        result = v59;
      }
      if ((result & 1) != 0) {
        goto LABEL_115;
      }
      v53 = (_QWORD*)*v4;
    }
  LABEL_98:
    v60 = &v53[3 * *v45];
    v61 = *((unsigned __int8*)v60 + 832);
    if ((v61 & 1) != 0) {
      v62 = v60[105];
    }
    else {
      v62 = v61 >> 1;
    }
    if (v62 != 0) {
      v63 = v60 + 104;
      v64 = (char*)v60[106];
      if ((v61 & 1) != 0) {
        v65 = v64;
      }
      else {
        v65 = (char*)v63 + 1;
      }
    }
    else {
      v66 = &v53[15 * *v45];
      v67 = *((unsigned __int8*)v66 + 352);
      v68 = (char*)v66 + 353;
      v71 = v66 + 45;
      v69 = v66[45];
      v70 = (char*)v71[1];
      v72 = (v67 & 1) == 0;
      v73 = v67 >> 1;
      if (v72) {
        v65 = v68;
      }
      else {
        v65 = v70;
      }
      if (v72) {
        v62 = v73;
      }
      else {
        v62 = v69;
      }
    }
    result = GameRoutine_60a060(&v87, v65, v62, v54);
    v56 = 0;
    v57 = v4[1];
    if (v57 != 0) {
      goto LABEL_112;
    }
  } while (v56 == 0);
  *v4 = 0;
  v4[1] = 0;
LABEL_115:
  if ((v87 & 1) != 0 && v89 != nullptr) {
    v74 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v74 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v74);
  }
  if (*v4 == 0) {
    v75 = v4[1];
    if (v75 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v75 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v75 + 16LL))(v75);
      result = std___1___shared_weak_count___release_weak(v75);
    }
  LABEL_124:
    *v4 = 0;
    v4[1] = 0;
  }
LABEL_125:
  if ((v79 & 1) != 0 && v81 != nullptr) {
    v76 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v76 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v76);
  }
  return result;
}

__attribute__((swiftcall)) void ui_control_1888120(PSEUDO_X8 x8_, _QWORD* a1,
                                                   int a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  _QWORD* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    _BYTE v15[32];
    _BYTE* v16;
  } v15_;
  __int64 v17[3];

  v5 = *(_QWORD*)(a3 + 32);
  if (v5 != 0) {
    v7 = a1;
    v8 = a2;
    if (v5 == a3) {
      v15_.v16 = v15_.v15;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 24LL))(v5, v15_.v15);
    }
    else {
      v15_.v16 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    }
    a2 = v8;
    a1 = v7;
  }
  else {
    v15_.v16 = nullptr;
  }
  ui_control_1886f20((void*)(v17), a1, a2, (__int64)v15_.v15);
  if (v15_.v16 == v15_.v15) {
    v9 = 32;
  }
  else {
    if (v15_.v16 == nullptr) {
      goto LABEL_12;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v15_.v16 + v9))((__int64)v15_.v16);
LABEL_12:
  v10 = v17[0];
  v11 = v17[1];
  if (v17[0] == v17[1]) {
    *a4 = 0;
    a4[1] = 0;
    if (v10 == 0) {
      return;
    }
    goto LABEL_20;
  }
  v12 = *(_QWORD*)(v17[0] + 8);
  *a4 = *(_QWORD*)v17[0];
  a4[1] = v12;
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
  }
  do {
    v13 = *(_QWORD*)(v11 - 8);
    if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak_alt1(v13);
    }
    v11 -= 16;
  } while (v11 != v10);
  v10 = v17[0];
  if (v17[0] != 0) {
  LABEL_20:
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v10);
  }
}

#pragma GCC visibility pop
