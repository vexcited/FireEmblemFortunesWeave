#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_ad5d90(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__attribute__((swiftcall)) void gfx_ad5600(PSEUDO_X8 x8_,
                                           unsigned __int64 result);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_ad5a30(void);
_QWORD* gfx_ad57c0_alt1(_QWORD* result, unsigned __int64 a2,
                        _QWORD* a3) __asm__("gfx_ad57c0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_ad5a30_alt1() __asm__("GameRoutine_ad5a30");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void gfx_ad57c0(__int64* a1, unsigned __int64 a2, _QWORD* a3);

__attribute__((swiftcall)) void gfx_ad5600(PSEUDO_X8 x8_,
                                           unsigned __int64 result)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;

  v3 = *(_QWORD*)(result + 176);
  v4 = *(_QWORD*)(result + 184);
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  if (v3 != v4) {
    v5 = *(_QWORD*)(result + 120);
    v6 = result;
    if (*(_WORD*)(v5 + 228) != 0) {
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v18 = a2;
      while (1) {
        v11 = *(_QWORD*)(v6 + 176) + v7;
        if (*(_BYTE*)(v11 + 4) == 1) {
          v12 = *(_QWORD*)(*(_QWORD*)(v5 + 8) + v8) + 2LL;
          v19 = v12;
          if ((*(_BYTE*)(v11 + 4) & 1) == 0) {
            GameRoutine_8123d0(result);
          }
          if (v9 < a2[2]) {
            break;
          }
          result = GameRoutine_ad5d90(a2, &v19, v11);
          v9 = result;
        LABEL_5:
          v5 = *(_QWORD*)(v6 + 120);
          a2[1] = v9;
        }
        ++v10;
        v8 += 40;
        v7 += 8;
        if (v10 >= *(unsigned __int16*)(v5 + 228)) {
          result;
          return;
        }
      }
      result = strlen(v12);
      if (result >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0(result);
      }
      v13 = result;
      if (result >= 0x17) {
        if ((result | 7) == 0x17) {
          v15 = 26;
        }
        else {
          v15 = (result | 7) + 1;
        }
        v16 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v15, 16,
                                             0);
        v17 = v15 | 1;
        a2 = v18;
        v14 = v16;
        *(_QWORD*)(v9 + 8) = v13;
        *(_QWORD*)(v9 + 16) = v16;
        *(_QWORD*)v9 = v17;
      }
      else {
        *(_BYTE*)v9 = 2 * result;
        v14 = v9 + 1;
        if (result == 0) {
          goto LABEL_19;
        }
      }
      result = memmove(v14, v12, v13);
    LABEL_19:
      *(_BYTE*)(v14 + v13) = 0;
      *(_DWORD*)(v9 + 24) = *(_DWORD*)v11;
      v9 += 32LL;
      goto LABEL_5;
    }
  }
  {
    result;
    return;
  }
}

void gfx_ad57c0(__int64* a1, unsigned __int64 a2, _QWORD* a3)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  bool v17;
  _QWORD* v18;
  unsigned __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;

  v4 = (_QWORD*)a1[1];
  v3 = a1[2];
  if (a2 <= (v3 - (__int64)v4) >> 3) {
    if (a2 != 0) {
      v14 = &v4[a2];
      v15 = 8 * a2 - 8;
      if ((~(_BYTE)v15 & 0x38) != 0) {
        v16 = -(__int64)(((unsigned __int8)((unsigned int)v15 >> 3) + 1) & 7);
        do {
          v17 = __CFADD__(v16++, 1);
          *v4++ = *a3;
        } while (!v17);
      }
      if (v15 >= 0x38) {
        do {
          *v4 = *a3;
          v4[1] = *a3;
          v4[2] = *a3;
          v4[3] = *a3;
          v4[4] = *a3;
          v4[5] = *a3;
          v4[6] = *a3;
          v4[7] = *a3;
          v4 += 8;
        } while (v4 != v14);
      }
      v4 = v14;
    }
    a1[1] = (__int64)v4;
  }
  else {
    v6 = (__int64)v4 - *a1;
    v7 = a2 + (v6 >> 3);
    if (v7 >> 61 != 0) {
      GameRoutine_ad5a30_alt1();
    }
    v8 = v3 - *a1;
    v9 = fw_memory_g_heap_manager_ptr;
    if (v8 >> 2 > v7) {
      v7 = v8 >> 2;
    }
    if ((unsigned __int64)v8 >= 0x7FFFFFFFFFFFFFF8LL) {
      v10 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v10 = v7;
    }
    if (v10 != 0) {
      if (v10 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v11 = a2;
      v12 = a3;
      v13 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v10, 16, 0);
      a3 = v12;
      a2 = v11;
    }
    else {
      v13 = 0;
    }
    v18 = (_QWORD*)(v13 + v6);
    v19 = 8 * a2 - 8;
    v20 = v13 + v6 + 8 * a2;
    if ((~(_BYTE)v19 & 0x38) != 0) {
      v22 = -(__int64)(((unsigned __int8)((unsigned int)v19 >> 3) + 1) & 7);
      v21 = v18;
      do {
        v17 = __CFADD__(v22++, 1);
        *v21++ = *a3;
      } while (!v17);
    }
    else {
      v21 = v18;
    }
    if (v19 >= 0x38) {
      do {
        *v21 = *a3;
        v21[1] = *a3;
        v21[2] = *a3;
        v21[3] = *a3;
        v21[4] = *a3;
        v21[5] = *a3;
        v21[6] = *a3;
        v21[7] = *a3;
        v21 += 8;
      } while (v21 != (_QWORD*)v20);
    }
    v23 = v13 + 8 * v10;
    v24 = *a1;
    v25 = (unsigned __int64)v4 - *a1;
    v26 = (__int64)v18 - v25;
    memcpy_alt1((__int64)v18 - v25, *a1, v25);
    *a1 = v26;
    a1[1] = v20;
    a1[2] = v23;
    if (v24 != 0) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v9 + v27, v24);
    }
  }
}

#pragma GCC visibility pop
