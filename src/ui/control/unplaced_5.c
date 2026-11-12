#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* Element_1886290(__int64, const char**);
__attribute__((swiftcall)) void Element_1885a60(PSEUDO_X8, _QWORD* result);
__attribute__((swiftcall)) void GameRoutine_9d52c0(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void Layout_1363f00(PSEUDO_X8, __int64, __int64);
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
__int64* ui_control_18883e0(__int64, unsigned __int8*, char*);
__int64 GameRoutine_2b0();
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 std___1___next_prime(unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN* GameData_21318e0;
extern __int64* GameData_212dfc0[2];
extern __int64* GameData_212dfc8;
extern __int64* GameData_21318d8;
extern __int64* GameData_2132088[5];
extern __int64 GameData_21f1c48;
extern __int64 GameData_21f1c50;
extern __int64 GameData_21f1c58;
extern __int64 GameData_21f1c60;
extern __int64 GameData_21f1c68;
extern __int64 GameData_21f1c70;
extern __int64 GameData_21f1c78;
extern __int64 GameData_21f1c80;
extern __int64 GameData_21f1c88;
extern __int64 GameData_21f1c90;
extern __int64 GameData_21f1c98;
extern __int64 GameData_21f1ca0;
extern __int64 GameData_21f1ca8;
extern __int64 GameData_21f1cb0;
extern __int64 GameData_21f1cb8;
extern __int64 GameData_21f1cc0;
extern __int64 GameData_21f1cc8;
extern __int64 GameData_21f1cd0;
extern __int64 GameData_21f1cd8;
extern __int64 GameData_21f1ce0;
extern __int64 GameData_21f1ce8;
extern __int64 GameData_21f1cf0;
extern __int64 GameData_21f1cf8;
extern __int64 GameData_21f1d00;
extern __int64 GameData_21f1d08;
extern __int64 GameData_21f1d10;
extern __int64 GameData_21f1d18;
extern __int64 GameData_21f1d20;
extern __int64 GameData_21f1d28;
extern __int64 GameData_21f1d30;
extern __int64 GameData_21f1d38;
extern __int64 GameData_21f1d40;
extern __int64 GameData_21f1d48;
extern __int64 GameData_21f1d50;
extern __int64 GameData_21f1d58;
extern __int64 GameData_21f1d60;
extern __int64 GameData_21f1d68;
extern __int64 GameData_21f1d70;
extern __int64 GameData_21f1d78;
extern __int64 GameData_21f1d80;
extern __int64 GameData_21f1d88;
extern __int64 GameData_21f1d90;
extern __int64 GameData_21f1d98;
extern __int64 GameData_21f1da0;
extern __int64 GameData_21f1da8;
extern __int64 GameData_21f1db0;
extern __int64 GameData_21f1db8;
extern __int64 GameData_21f1dc0;
extern __int64 fw_memory_g_heap_manager_ptr;
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
void GameRoutine_d9e4e0(__int64*, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_16176c0();
void __attribute__((noreturn)) GameRoutine_60a210();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 ui_control_8b76c0();
void ui_control_1885260(__int64 a1, __int64 a2);
void ui_control_18855c0(_QWORD* a1, _QWORD* a2);
__int64 ui_control_188d7a0(__int64* a1);

__int64 ui_control_8b76c0()
{
  __int64* v0;
  _DWORD* v1;
  _DWORD* v2;
  __int64 v3;
  _QWORD* v4;
  _DWORD* v5;
  _DWORD* v6;
  _DWORD* v7;
  _DWORD* v9;
  _DWORD* v10;

  v0 = (__int64*)fw_memory_g_heap_manager_ptr;
  v10 = (_DWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 4, 16, 0);
  *v10 = 2;
  v9 = (_DWORD*)fw_memory_HeapManager_Allocate(*v0, 4, 16, 0);
  *v9 = 2;
  v1 = (_DWORD*)fw_memory_HeapManager_Allocate(*v0, 4, 16, 0);
  *v1 = 3;
  v2 = (_DWORD*)fw_memory_HeapManager_Allocate(*v0, 4, 16, 0);
  *v2 = 3;
  v3 = fw_memory_HeapManager_Allocate(*v0, 12, 16, 0);
  *(_QWORD*)v3 = 0xA00000009LL;
  *(_DWORD*)(v3 + 8) = 11;
  v4 = (_QWORD*)fw_memory_HeapManager_Allocate(*v0, 8, 16, 0);
  *v4 = 0x600000005LL;
  v5 = (_DWORD*)fw_memory_HeapManager_Allocate(*v0, 4, 16, 0);
  *v5 = 3;
  v6 = (_DWORD*)fw_memory_HeapManager_Allocate(*v0, 4, 16, 0);
  *v6 = 6;
  v7 = (_DWORD*)fw_memory_HeapManager_Allocate(*v0, 4, 16, 0);
  GameData_21f1d08 = (__int64)v4;
  GameData_21f1d10 = (__int64)(v4 + 1);
  GameData_21f1d18 = (__int64)(v4 + 1);
  GameData_21f1d20 = 0;
  GameData_21f1d38 = (__int64)v5;
  GameData_21f1d40 = (__int64)(v5 + 1);
  GameData_21f1d48 = (__int64)(v5 + 1);
  GameData_21f1d50 = 0;
  GameData_21f1d68 = (__int64)v6;
  GameData_21f1d70 = (__int64)(v6 + 1);
  GameData_21f1d78 = (__int64)(v6 + 1);
  GameData_21f1d80 = 0;
  *v7 = 7;
  GameData_21f1c68 = 0;
  GameData_21f1c70 = 0;
  GameData_21f1c98 = 0;
  GameData_21f1ca0 = 0;
  GameData_21f1cc8 = 0;
  GameData_21f1cd0 = 0;
  GameData_21f1d28 = 0;
  GameData_21f1d30 = 0;
  GameData_21f1d58 = 0;
  GameData_21f1d60 = 0;
  GameData_21f1d88 = 0;
  GameData_21f1d90 = 0;
  GameData_21f1d98 = (__int64)v7;
  GameData_21f1da0 = (__int64)(v7 + 1);
  GameData_21f1db8 = 0;
  GameData_21f1dc0 = 0;
  GameData_21f1da8 = (__int64)(v7 + 1);
  GameData_21f1db0 = 0;
  GameData_21f1c48 = (__int64)v10;
  GameData_21f1c50 = (__int64)(v10 + 1);
  GameData_21f1c58 = (__int64)(v10 + 1);
  GameData_21f1c60 = 0;
  GameData_21f1c78 = (__int64)v9;
  GameData_21f1c80 = (__int64)(v9 + 1);
  GameData_21f1c88 = (__int64)(v9 + 1);
  GameData_21f1c90 = 0;
  GameData_21f1cd8 = (__int64)v2;
  GameData_21f1ce0 = (__int64)(v2 + 1);
  GameData_21f1ce8 = (__int64)(v2 + 1);
  GameData_21f1cf0 = v3;
  GameData_21f1ca8 = (__int64)v1;
  GameData_21f1cb0 = (__int64)(v1 + 1);
  GameData_21f1cb8 = (__int64)(v1 + 1);
  GameData_21f1cc0 = 0;
  GameData_21f1cf8 = v3 + 12;
  GameData_21f1d00 = v3 + 12;
  return GameRoutine_2b0();
}

void ui_control_1885260(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 primeEm;
  unsigned __int64 v6;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int8* i;

  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_DWORD*)(a1 + 32) = *(_DWORD*)(a2 + 32);
  v4 = *(_QWORD*)(a2 + 8);
  if (v4 == 1) {
    v4 = 2;
  LABEL_17:
    GameRoutine_d9e4e0((__int64*)a1, v4);
    goto LABEL_18;
  }
  if ((v4 & (v4 - 1)) != 0) {
    primeEm = std___1___next_prime(v4);
    v6 = *(_QWORD*)(a1 + 8);
    v4 = primeEm;
    v7 = primeEm >= v6;
    if (primeEm > v6) {
      goto LABEL_17;
    }
  }
  else {
    v6 = 0;
    v7 = true;
    if (v4 != 0) {
      goto LABEL_17;
    }
  }
  if (!v7) {
    v8 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                        *(float*)(a1 + 32));
    if (v6 < 3 || (v6 & (v6 - 1)) != 0) {
      v10 = v4;
      v8 = std___1___next_prime(v8);
      v4 = v10;
    }
    else {
      v9 = 1LL << -(char)__clz(v8 - 1);
      if (v8 >= 2) {
        v8 = v9;
      }
    }
    if (v4 <= v8) {
      v4 = v8;
    }
    if (v4 < v6) {
      goto LABEL_17;
    }
  }
LABEL_18:
  for (i = *(unsigned __int8**)(a2 + 16); i != nullptr;
       i = *(unsigned __int8**)i) {
    ui_control_18883e0(a1, i + 16, (char*)i + 16);
  }
}

void ui_control_18855c0(_QWORD* a1, _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  signed __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  struct {
    __int64 v38;
    __int64 v39;
  } v38_;

  if (*a2 != 0) {
    Element_1885a60((void*)(&v38_.v38), a1);
    v4 = *a2;
    v5 = v38_.v38;
    v6 = v38_.v39;
    v38_.v38 = 0;
    v38_.v39 = 0;
    v7 = *(_QWORD*)(v4 + 320);
    *(_QWORD*)(v4 + 312) = v5;
    *(_QWORD*)(v4 + 320) = v6;
    if (v7 != 0) {
      std___1___shared_weak_count___release_weak(v7);
      if (v38_.v39 != 0) {
        std___1___shared_weak_count___release_weak(v38_.v39);
      }
    }
    v9 = (_QWORD*)a1[41];
    v8 = (_QWORD*)a1[42];
    if (v9 < v8) {
      while (1) {
        v10 = v9[1];
        if (v10 != 0) {
          v11 = std___1___shared_weak_count_lock(v10);
          if (v11 != 0) {
            break;
          }
        }
      LABEL_10:
        v8 = (_QWORD*)a1[42];
        v9 += 2;
        if (v9 >= v8) {
          goto LABEL_27;
        }
      }
      v12 = *v9;
      v13 = v11;
      if (*v9 == 0 || (v14 = *(_QWORD*)(v12 + 24)) != *(_QWORD*)(*a2 + 24LL) ||
          memcmp(*(_QWORD*)(v12 + 16), *(_QWORD*)(*a2 + 16LL), v14) != 0) {
      LABEL_8:
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak(v13);
        }
        goto LABEL_10;
      }
      v15 = (_QWORD*)a1[42];
      v16 = v9 + 2;
      v17 = v9;
      if (v9 + 2 == v15) {
        if (v9 == v15) {
        LABEL_7:
          a1[42] = v17;
          goto LABEL_8;
        }
      }
      else {
        do {
          v19 = v17[2];
          v18 = v17[3];
          v20 = v17[1];
          v17[2] = 0;
          v17[3] = 0;
          *v17 = v19;
          v17[1] = v18;
          if (v20 != 0) {
            std___1___shared_weak_count___release_weak(v20);
          }
          v16 += 2;
          v17 += 2;
        } while (v16 != v15);
        v15 = (_QWORD*)a1[42];
        if (v17 == v15) {
          goto LABEL_7;
        }
      }
      do {
        v21 = *(v15 - 1);
        if (v21 != 0) {
          std___1___shared_weak_count___release_weak(v21);
        }
        v15 -= 2;
      } while (v15 != v17);
      goto LABEL_7;
    }
  LABEL_27:
    v22 = a1[43];
    if ((unsigned __int64)v8 >= v22) {
      v25 = a1[41];
      v26 = (signed __int64)v8 - v25;
      v27 = ((__int64)v8 - v25) >> 4;
      v28 = v27 + 1;
      if ((unsigned __int64)(v27 + 1) >> 60 != 0) {
        GameRoutine_16176c0();
      }
      v29 = v22 - v25;
      if (v29 >> 3 > v28) {
        v28 = v29 >> 3;
      }
      if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFF0LL) {
        v30 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v30 = v28;
      }
      if (v30 >> 60 != 0) {
        GameRoutine_60a210();
      }
      v31 = fw_memory_g_heap_manager_ptr;
      v32 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v30, 16, 0);
      v33 = a2[1];
      v34 = (_QWORD*)(v32 + v26);
      v35 = v32 + 16 * v30;
      *v34 = *a2;
      v34[1] = v33;
      if (v33 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 16), 1u,
                                  memory_order_relaxed);
        v25 = a1[41];
        v26 = a1[42] - v25;
        v27 = v26 >> 4;
      }
      v36 = (__int64)&v34[-2 * v27];
      v24 = v34 + 2;
      memcpy(v36, v25, v26);
      a1[41] = v36;
      a1[42] = v24;
      a1[43] = v35;
      if (v25 != 0) {
        v37 = 128;
        if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) == 0) {
          v37 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v31 + v37, v25);
      }
    }
    else {
      *v8 = *a2;
      v23 = a2[1];
      v8[1] = v23;
      if (v23 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 16), 1u,
                                  memory_order_relaxed);
      }
      v24 = v8 + 2;
    }
    a1[42] = v24;
  }
}

__int64 ui_control_188d7a0(__int64* a1)
{
  _QWORD* v2;
  atomic_uchar* v3;
  unsigned __int8 explicit;
  __int64* v5;
  __int64* v6;
  __int64 v8;
  __int64 v9;
  const char* v10;
  const char** v11;
  __int64 v12;
  const char* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64* v17;
  const char* v19;
  __int64 v20;
  __int64 v21;
  _BYTE* v22;
  atomic_uchar* v23;
  unsigned __int8 v24;
  __int64* v25;
  __int64* v26;
  _BYTE* v28;
  __int64* v29;
  struct {
    __int64 v32;
    __int64 v33;
  } v32_;
  struct {
    __int64 v34;
    __int64 v35;
  } v34_;
  struct {
    const char* v36;
    __int64 v37;
  } v36_;

  if (a1[10] != 0) {
    v36_.v36 = "Name";
    v36_.v37 = 4;
    v2 = Element_1886290((__int64)a1, &v36_.v36);
    v3 = (atomic_uchar*)GameData_212dfd0;
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                                    memory_order_acquire);
    v5 = GameData_212dfc8;
    if ((explicit & 1) == 0 &&
        __cxa_guard_acquire((__int64)GameData_212dfd0) != 0) {
      *v5 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      __cxa_guard_release((__int64)GameData_212dfd0);
    }
    if (v2 != nullptr) {
      v6 = (__int64*)(*(__int64 (**)(_QWORD*))(*v2 + 16LL))(v2);
      if (v6 == v5) {
        goto LABEL_11;
      }
      do {
        v6 = (__int64*)*v6;
      } while (v6 != v5 && v6 != nullptr);
      if (v6 != nullptr) {
      LABEL_11:
        Layout_1363f00((void*)(&v32_.v32), a1[10], (__int64)v2);
        v34_.v34 = 0;
        v34_.v35 = 0;
        if (v32_.v33 != 0 &&
            (v8 = std___1___shared_weak_count_lock(v32_.v33), v34_.v35 = v8,
             v8 != 0) &&
            (v34_.v34 = v32_.v32, v32_.v32 != 0) &&
            (v9 = v8, (v10 = (const char*)__dynamic_cast(
                           v32_.v32, GameData_212dfc0[0], GameData_2132088[0],
                           0)) != nullptr)) {
          v11 = (const char**)&v34_.v34;
          v36_.v36 = v10;
          v36_.v37 = v9;
        }
        else {
          v11 = &v36_.v36;
        }
        *v11 = nullptr;
        v11[1] = nullptr;
        v13 = v36_.v36;
        v12 = v36_.v37;
        if (v36_.v37 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v36_.v37 + 16),
                                    1u, memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
            std___1___shared_weak_count___release_weak(v12);
          }
        }
        v14 = v34_.v35;
        if (v34_.v35 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v34_.v35 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
          std___1___shared_weak_count___release_weak(v14);
        }
        if (v32_.v33 != 0) {
          std___1___shared_weak_count___release_weak(v32_.v33);
        }
        v15 = a1[136];
        a1[135] = (__int64)v13;
        a1[136] = v12;
        if (v15 != 0) {
          std___1___shared_weak_count___release_weak(v15);
        }
      }
    }
    v36_.v36 = "Num";
    v36_.v37 = 3;
    v16 = Element_1886290((__int64)a1, &v36_.v36);
    if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
        __cxa_guard_acquire((__int64)GameData_212dfd0) != 0) {
      *v5 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      __cxa_guard_release((__int64)GameData_212dfd0);
    }
    if (v16 != nullptr) {
      v17 = (__int64*)(*(__int64 (**)(_QWORD*))(*v16 + 16LL))(v16);
      if (v17 == v5) {
        goto LABEL_72;
      }
      do {
        v17 = (__int64*)*v17;
      } while (v17 != v5 && v17 != nullptr);
      if (v17 != nullptr) {
      LABEL_72:
        GameRoutine_9d52c0((void*)((__int64*)&v36_.v36), a1[10], (__int64)v16);
        v19 = v36_.v36;
        v20 = v36_.v37;
        v21 = a1[138];
        v36_.v36 = nullptr;
        v36_.v37 = 0;
        a1[137] = (__int64)v19;
        a1[138] = v20;
        if (v21 != 0) {
          std___1___shared_weak_count___release_weak(v21);
          if (v36_.v37 != 0) {
            std___1___shared_weak_count___release_weak(v36_.v37);
          }
        }
      }
    }
  }
  v36_.v36 = "Mastery";
  v36_.v37 = 7;
  v22 = Element_1886290((__int64)a1, &v36_.v36);
  v23 = (atomic_uchar*)GameData_21318e0;
  v24 = atomic_load_explicit((atomic_uchar* volatile)GameData_21318e0,
                             memory_order_acquire);
  v25 = GameData_21318d8;
  if ((v24 & 1) == 0 && __cxa_guard_acquire((__int64)GameData_21318e0) != 0) {
    *v25 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
    __cxa_guard_release((__int64)GameData_21318e0);
  }
  if (v22 == nullptr) {
    goto LABEL_49;
  }
  v26 = (__int64*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v22 + 16LL))(v22);
  if (v26 == v25) {
    goto LABEL_48;
  }
  do {
    v26 = (__int64*)*v26;
  } while (v26 != v25 && v26 != nullptr);
  if (v26 != nullptr) {
  LABEL_48:
    a1[139] = (__int64)v22;
    v22[88] &= ~1u;
  }
  else {
  LABEL_49:
    a1[139] = 0;
  }
  v36_.v36 = "Efficacy";
  v36_.v37 = 8;
  v28 = Element_1886290((__int64)a1, &v36_.v36);
  if ((atomic_load_explicit(v23, memory_order_acquire) & 1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_21318e0) != 0) {
    *v25 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
    __cxa_guard_release((__int64)GameData_21318e0);
  }
  if (v28 == nullptr) {
    goto LABEL_60;
  }
  v29 = (__int64*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v28 + 16LL))(v28);
  if (v29 == v25) {
    goto LABEL_59;
  }
  do {
    v29 = (__int64*)*v29;
  } while (v29 != v25 && v29 != nullptr);
  if (v29 != nullptr) {
  LABEL_59:
    a1[140] = (__int64)v28;
    v28[88] &= ~1u;
  }
  else {
  LABEL_60:
    a1[140] = 0;
  }
  return ui_LayoutAccessor_SetPaneVisible((__int64)(a1 + 11), (__int64)"T_Txt",
                                          0);
}

#pragma GCC visibility pop
