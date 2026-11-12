#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* Registration_6064e0(_QWORD* result);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_606500(_QWORD);
__int64 cspine_1911b00(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
bool SpineModel_1912e70(__int64, __int64);
char* cspine_1919480(__int64, __int64, unsigned __int64);
extern __int64 (*GameData_210fed8[])();
extern __int64 (*GameData_210ff28[])();
extern __int64* GameData_21322b0[3];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
int memcmp(__int64, __int64, unsigned __int64);
void GameHr_1916980(__int64*, _QWORD*);
void __attribute__((noreturn)) GameRoutine_190c900();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) String_60a250(const char*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__attribute__((swiftcall)) void spine_190bad0(PSEUDO_X8 x8_, __int64* a1,
                                              __int64 a2);
__attribute__((swiftcall)) void spine_190bd20(PSEUDO_X8 x8_, __int64* a1,
                                              __int64 a2);
void spine_19167a0(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64* spine_1917900(__int64* result, __int64* a2);

__attribute__((swiftcall)) void spine_190bad0(PSEUDO_X8 x8_, __int64* a1,
                                              __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  atomic_ullong* v10;
  __int64* v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  signed __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;

  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1504, 16, 0);
  v8 = (__int64)(v7 + 4);
  v9 = (__int64)v7;
  v7[1] = 0;
  v10 = (atomic_ullong*)(v7 + 1);
  v7[2] = 0;
  *v7 = GameData_210fed8;
  cspine_1911b00((__int64)(v7 + 4));
  v11 = GameData_21322b0[0];
  *(_BYTE*)(v9 + 1464) = 12;
  *(_DWORD*)(v9 + 1456) = 0;
  *(_QWORD*)(v9 + 1488) = 0;
  *(_QWORD*)(v9 + 32) = v11 + 2;
  strcpy((char*)(v9 + 1465), "Face00");
  *(_BYTE*)(v9 + 1072) = 1;
  if (SpineModel_1912e70(v8, a2)) {
    atomic_fetch_add_explicit(v10, 1u, memory_order_relaxed);
    v12 = (__int64*)a1[1];
    v13 = a1[2];
    if ((unsigned __int64)v12 >= v13) {
      v15 = *a1;
      v16 = (signed __int64)v12 - *a1;
      v17 = (v16 >> 4) + 1;
      if (v17 >> 60 != 0) {
        GameRoutine_190c900();
      }
      v18 = v13 - v15;
      if (v18 >> 3 > v17) {
        v17 = v18 >> 3;
      }
      if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF0LL) {
        v19 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v19 = v17;
      }
      if (v19 >> 60 != 0) {
        GameRoutine_60a210();
      }
      v20 = fw_memory_HeapManager_Allocate(*v6, 16 * v19, 16, 0);
      v21 = (__int64*)(v20 + v16);
      v22 = v20 + 16 * v19;
      *v21 = v8;
      v21[1] = v9;
      v23 = v20 + v16 - 16 * (v16 >> 4);
      v14 = v20 + v16 + 16;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
      memcpy(v23, v15, v16);
      *a1 = v23;
      a1[1] = v14;
      a1[2] = v22;
      if (v15 != 0) {
        v24 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v24 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v15);
      }
    }
    else {
      *v12 = v8;
      v12[1] = v9;
      v14 = (__int64)(v12 + 2);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
    }
    a1[1] = v14;
    if (atomic_fetch_add(v10, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    }
    *a3 = v8;
    a3[1] = v9;
  }
  else {
    *a3 = 0;
    a3[1] = 0;
    if (atomic_fetch_add(v10, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    }
  }
}

__attribute__((swiftcall)) void spine_190bd20(PSEUDO_X8 x8_, __int64* a1,
                                              __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  atomic_ullong* v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  signed __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;

  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1456, 16, 0);
  v8 = (__int64)(v7 + 4);
  v9 = (__int64)v7;
  v7[1] = 0;
  v10 = (atomic_ullong*)(v7 + 1);
  v7[2] = 0;
  *v7 = GameData_210ff28;
  cspine_1911b00((__int64)(v7 + 4));
  if (SpineModel_1912e70(v8, a2)) {
    v11 = (__int64*)a1[1];
    v12 = a1[2];
    if ((unsigned __int64)v11 >= v12) {
      v14 = *a1;
      v15 = (signed __int64)v11 - *a1;
      v16 = (v15 >> 4) + 1;
      if (v16 >> 60 != 0) {
        GameRoutine_190c900();
      }
      v17 = v12 - v14;
      if (v17 >> 3 > v16) {
        v16 = v17 >> 3;
      }
      if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF0LL) {
        v18 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v18 = v16;
      }
      if (v18 >> 60 != 0) {
        GameRoutine_60a210();
      }
      v19 = fw_memory_HeapManager_Allocate(*v6, 16 * v18, 16, 0);
      v20 = (__int64*)(v19 + v15);
      v21 = v19 + 16 * v18;
      *v20 = v8;
      v20[1] = v9;
      v22 = v19 + v15 - 16 * (v15 >> 4);
      v13 = v19 + v15 + 16;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
      memcpy(v22, v14, v15);
      *a1 = v22;
      a1[1] = v13;
      a1[2] = v21;
      if (v14 != 0) {
        v23 = 128;
        if (*(_QWORD*)(*v6 + 200) == 0) {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free(*v6 + v23, v14);
      }
    }
    else {
      *v11 = v8;
      v11[1] = v9;
      v13 = (__int64)(v11 + 2);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
    }
    a1[1] = v13;
    *a3 = v8;
    a3[1] = v9;
  }
  else {
    *a3 = 0;
    a3[1] = 0;
    if (atomic_fetch_add(v10, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    }
  }
}

void spine_19167a0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  if (a3 != 0) {
    v5 = a2 - 1;
    v6 = a3;
    while (v6 != 0) {
      v7 = *(unsigned __int8*)(v5 + v6--);
      if (v7 == 47) {
        if (v6 != -1) {
          goto LABEL_11;
        }
        break;
      }
    }
    v6 = a3;
    while (v6 != 0) {
      v8 = *(unsigned __int8*)(v5 + v6--);
      if (v8 == 92) {
        goto LABEL_11;
      }
    }
  }
  v6 = -1;
LABEL_11:
  v9 = v6 + 1;
  v10 = a3 - (v6 + 1);
  if (a3 < v6 + 1) {
    String_60a250("string_view::substr");
  }
  v12 = *(__int64**)(a1 + 128);
  v13 = *(__int64**)(a1 + 136);
  v11 = (__int64*)(a1 + 128);
  v14 = a3 - v6;
  if (v10 >= v14) {
    v15 = v14;
  }
  else {
    v15 = v10;
  }
  while (v12 != v13) {
    v16 = *v12;
    v17 = *(unsigned __int8*)(*v12 + 96);
    v18 = *(_QWORD*)(*v12 + 104);
    if ((v17 & 1) == 0) {
      v18 = v17 >> 1;
    }
    if (v15 == v18) {
      v19 = v16 + 97;
      v20 = *(_QWORD*)(v16 + 112);
      v21 = (v17 & 1) != 0 ? v20 : v19;
      if (memcmp(a2 + v9, v21, v15) == 0) {
        return;
      }
    }
    ++v12;
  }
  v22 = fw_memory_g_heap_manager_ptr;
  v23 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       128, 16, 0);
  *(_QWORD*)v23 = 0;
  *(_QWORD*)(v23 + 8) = 0;
  Registration_6064e0((_QWORD*)(v23 + 16));
  *(_WORD*)(v23 + 96) = 0;
  *(_WORD*)(v23 + 120) = 0;
  v28 = v23;
  *(_QWORD*)(v23 + 88) = -1;
  cspine_1919480(v23, a2, a3);
  GameHr_1916980(v11, &v28);
  v24 = v28;
  v28 = 0;
  if (v24 != 0) {
    if ((*(_BYTE*)(v24 + 96) & 1) != 0) {
      v25 = *(_QWORD*)(v24 + 112);
      if (v25 != 0) {
        v26 = 128;
        if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) == 0) {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v22 + v26, v25);
      }
    }
    GameRoutine_606500(v24 + 16);
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v22 + v27, v24);
  }
}

__int64* spine_1917900(__int64* result, __int64* a2)
{
  _BYTE* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64* v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  struct {
    __int64 v27;
    unsigned __int64 v28;
    __int64 v29;
  } v27_;

  if ((*(_BYTE*)result & 1) != 0) {
    v3 = (_BYTE*)result[2];
    result[1] = 0;
  }
  else {
    *(_BYTE*)result = 0;
    v3 = (char*)result + 1;
  }
  *v3 = 0;
  v4 = *(unsigned __int8*)a2;
  v5 = a2[1];
  if ((v4 & 1) != 0) {
    v6 = a2[2];
  }
  else {
    v6 = (__int64)a2 + 1;
  }
  if ((v4 & 1) != 0) {
    v7 = a2[1];
  }
  else {
    v7 = v4 >> 1;
  }
  if (v7 != 0) {
    v8 = v6 + v7;
    v9 = 1;
    do {
      if (v7 + v9 == 1) {
        goto LABEL_24;
      }
      v10 = v8 + v9--;
    } while (*(_BYTE*)(v10 - 2) != 95);
    v11 = v7 + v9;
    if (v7 + v9 == 0) {
      goto LABEL_24;
    }
    v12 = v11 - 1;
    if (v11 - 1 >= v7) {
      String_60a250("string_view::substr");
    }
    if (v9 != 0) {
      v13 = v9;
      while ((unsigned int)*(unsigned __int8*)(v8 + v13) - 48 < 0xA) {
        if (++v13 == 0) {
          goto LABEL_20;
        }
      }
      goto LABEL_24;
    }
  LABEL_20:
    if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v14 = result;
    if (v12 >= 0x17) {
      v21 = v6;
      if ((v12 | 7) == 0x17) {
        v22 = 26;
      }
      else {
        v22 = (v12 | 7) + 1;
      }
      v23 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v22, 16, 0);
      v6 = v21;
      v15 = (char*)v23;
      v27_.v28 = v12;
      v27_.v29 = v23;
      v27_.v27 = v22 | 1;
    }
    else {
      LOBYTE(v27_.v27) = 2 * v12;
      v15 = (char*)&v27_.v27 + 1;
      if (v11 == 1) {
      LABEL_35:
        result = v14;
        v15[v7 - 1 + v9] = 0;
        if ((*(_BYTE*)v14 & 1) != 0) {
          v24 = v14[2];
          if (v24 != 0) {
            v25 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v25 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v24);
            result = v14;
          }
        }
        v26 = v27_.v28;
        *result = v27_.v27;
        result[1] = v26;
        result[2] = v27_.v29;
        return result;
      }
    }
    memmove((__int64)v15, v6, v12);
    goto LABEL_35;
  }
LABEL_24:
  if (result != a2) {
    if ((*(_BYTE*)result & 1) != 0) {
      v19 = result;
      SpineModel_64dde0(result, v6, v7);
      return v19;
    }
    else if ((v4 & 1) != 0) {
      v20 = result;
      GameRoutine_64df20(result, a2[2], v5);
      return v20;
    }
    else {
      v16 = *a2;
      v17 = a2[1];
      v18 = a2[2];
      result[1] = v17;
      result[2] = v18;
      *result = v16;
    }
  }
  return result;
}

#pragma GCC visibility pop
