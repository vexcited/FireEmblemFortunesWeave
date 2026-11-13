#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memset(__int64, int, unsigned __int64);
__int64 strcpy(__int64, const char*);
__int64 vsnprintf(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 strlen(const char*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 fs_609140(__int64 a1, __int64 a2, ...);
unsigned __int64 fs_631b00(unsigned __int64 a1, unsigned __int64 a2,
                           unsigned __int64 a3, unsigned __int64 a4,
                           unsigned __int64* a5);

__int64 fs_609140(__int64 a1, __int64 a2, ...)
{
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __builtin_va_list va;
  __builtin_va_list va1;
  char v11[512];

  __builtin_va_start(va, a2);
  __builtin_va_start(va1, a2);
  vsnprintf(v11, 511, a2, (__int64)&va);
  v11[511] = 0;
  v3 = strlen(v11);
  v4 = fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      v3 + 1, 16, 0);
  memset(v5, 0, v3 + 1);
  v6 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = v5;
  if (v6 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7, v6);
    v5 = *(_QWORD*)(a1 + 24);
  }
  result = strcpy(v5, v11);
  *(_BYTE*)(a1 + 36) = 0;
  return result;
}

unsigned __int64 fs_631b00(unsigned __int64 a1, unsigned __int64 a2,
                           unsigned __int64 a3, unsigned __int64 a4,
                           unsigned __int64* a5)
{
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  int v9;
  unsigned int v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int128 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int128 v18;
  unsigned __int128 v19;
  __int64 v20;
  bool v21;
  unsigned __int64 v22;
  __int128 v23;
  unsigned __int64 v24;
  __int64 v25;
  char v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  char v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;

  if (__PAIR128__(a2, a1) < __PAIR128__(a4, a3)) {
    v5 = 0;
    if (a5 != nullptr) {
      *a5 = a1;
      a5[1] = a2;
      return 0;
    }
    return v5;
  }
  if (a4 == 0) {
    if (a2 >= a3) {
      v40 = __clz((unsigned long long)(a3));
      v41 = a3 << v40;
      v42 = (unsigned int)(a3 << v40);
      v43 = a1 << v40 >> 32;
      v44 = (unsigned int)(a1 << v40);
      v45 = ((a2 % a3) << v40) | (a1 >> 1 >> ((~v40) & 63));
      v46 = a3 << v40 >> 32;
      v47 = v45 / v46;
      v48 = v45 % v46;
      do {
        if (HIDWORD(v47) == 0 && v47 * v42 <= (v43 | (v48 << 32))) {
          break;
        }
        v48 += v46;
        --v47;
      } while (HIDWORD(v48) == 0);
      v49 = (v43 | (v45 << 32)) - v47 * v41;
      v50 = v49 / v46;
      v51 = v49 % v46;
      do {
        if (HIDWORD(v50) == 0 && v50 * v42 <= (v44 | (v51 << 32))) {
          break;
        }
        v51 += v46;
        --v50;
      } while (HIDWORD(v51) == 0);
      v38 = v50 + (v47 << 32);
      v39 = ((v44 | (v49 << 32)) - v50 * v41) >> v40;
      if (a5 == nullptr) {
        return v38;
      }
    }
    else {
      v26 = __clz((unsigned long long)(a3));
      v27 = a3 << v26;
      v28 = a1 << v26 >> 32;
      v29 = (unsigned int)(a3 << v26);
      v30 = a3 << v26 >> 32;
      v31 = (a2 << v26) | (a1 >> 1 >> ((~v26) & 63));
      v32 = (unsigned int)(a1 << v26);
      v33 = v31 / v30;
      v34 = v31 % v30;
      do {
        if (HIDWORD(v33) == 0 && v33 * v29 <= (v28 | (v34 << 32))) {
          break;
        }
        v34 += v30;
        --v33;
      } while (HIDWORD(v34) == 0);
      v35 = (v28 | (v31 << 32)) - v33 * v27;
      v36 = v35 / v30;
      v37 = v35 % v30;
      do {
        if (HIDWORD(v36) == 0 && v36 * v29 <= (v32 | (v37 << 32))) {
          break;
        }
        v37 += v30;
        --v36;
      } while (HIDWORD(v37) == 0);
      v38 = v36 + (v33 << 32);
      v39 = ((v32 | (v35 << 32)) - v36 * v27) >> v26;
      if (a5 == nullptr) {
        return v38;
      }
    }
    *a5 = v39;
    a5[1] = 0;
    return v38;
  }
  v5 = (unsigned int)__clz((unsigned long long)(a4)) -
       (unsigned int)__clz((unsigned long long)(a2));
  if ((v5 & 0x80000000) != 0LL) {
    v5 = 0;
    goto LABEL_50;
  }
  v7 = (a4 << v5) | (a3 >> 1 >> ((~(_BYTE)v5) & 63));
  if ((v5 & 0x40) != 0) {
    v7 = a3 << v5;
    v8 = 0;
  }
  else {
    v8 = a3 << v5;
  }
  v9 = v5 + 1;
  if ((_DWORD)v5 != 0) {
    v10 = v9 & 0xFFFFFFFE;
    v5 = 0;
    do {
      v11 = v7 >> 1;
      v12 = ~a2 + __CFADD__(v8, ~a1) + v7;
      *((_QWORD*)&v14 + 1) = v5;
      *(_QWORD*)&v14 = v12;
      v13 = v14 >> 62;
      if (v12 >= 0) {
        v15 = 0;
      }
      else {
        v15 = v8;
      }
      if (v12 >= 0) {
        v16 = 0;
      }
      else {
        v16 = v7;
      }
      *((_QWORD*)&v18 + 1) = v7;
      *(_QWORD*)&v18 = v8;
      v17 = v18 >> 1;
      v7 >>= 2;
      v19 = __PAIR128__(a2, a1) - __PAIR128__(v16, v15);
      v20 = ~*((_QWORD*)&v19 + 1) + __CFADD__(v17, ~(_QWORD)v19) + v11;
      v21 = v20 >= 0;
      v5 = v13 & 0xFFFFFFFFFFFFFFFELL | (v20 < 0);
      if (v20 >= 0) {
        v22 = 0;
      }
      else {
        v22 = v17;
      }
      *((_QWORD*)&v23 + 1) = v11;
      *(_QWORD*)&v23 = v17;
      v8 = v23 >> 1;
      if (v21) {
        v24 = 0;
      }
      else {
        v24 = v11;
      }
      a2 = (v19 - __PAIR128__(v24, v22)) >> 64;
      a1 = v19 - v22;
      v10 -= 2;
    } while (v10 != 0);
    v25 = 2 * v5;
    if ((v9 & 1) == 0) {
      goto LABEL_50;
    }
  }
  else {
    v25 = 0;
    if ((v9 & 1) == 0) {
      goto LABEL_50;
    }
  }
  v52 = ~a2 + __CFADD__(v8, ~a1) + v7;
  v5 = v25 | ((unsigned __int64)v52 >> 63);
  a2 =
      (__PAIR128__(a2, a1) - __PAIR128__((v52 >> 63) & v7, (v52 >> 63) & v8)) >>
      64;
  a1 -= (v52 >> 63) & v8;
LABEL_50:
  if (a5 != nullptr) {
    *a5 = a1;
    a5[1] = a2;
  }
  return v5;
}

#pragma GCC visibility pop
