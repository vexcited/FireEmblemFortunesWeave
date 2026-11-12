#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 CalculateAllocatedSizeHeap_5c7360(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5d2320(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ad7390(_QWORD);
__int64 GameRoutine_bcd900(_QWORD, _QWORD);
__int64 ResFile_5e5f00(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_21675f0;
extern __int64 (*GameData_1fd05b8[])();
extern __int64 (*GameData_212e940[3])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD*
eft_res_Manager_Manager_alt1(__int64 a1,
                             __int64 a2) __asm__("eft_res_Manager_Manager");
__int64 Manager_bcd400(__int64 result, __int64 a2);
__int64 Manager_bcd4e0(__int64 result, __int64 a2);
__int64 Manager_bcd5c0_alt1(__int64 a1, __int64 a2) __asm__("Manager_bcd5c0");
__int64 eft_res_Manager_Manager_lambda0_Invoke(__int64 a1, __int64 a2,
                                               __int64* a3);
__int64 GameRoutine_18e5d80(_QWORD);
__int64 GameRoutine_bc7ac0(__int64, __int64);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 eft_g_effectSystem;
extern char GameData_1af96e6;
extern char GameData_1af96e7;
extern char GameData_1af96e8;
struct PseudoSret GameRoutine_bccce0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 Manager_bcc860(__int64 result);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 snprintf(_QWORD, _QWORD, const char*, ...);
extern __int64 GameData_212e9e0[2];
extern __int64 GameData_212e9e8;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__attribute__((swiftcall)) void Manager_bccce0(PSEUDO_X8 x8_, _QWORD* result,
                                               unsigned int a2);
__attribute__((swiftcall)) void
Manager_bccf60_alt1(PSEUDO_X8 x8_, unsigned __int64 result, int a2,
                    const char* a3, const char* a4) __asm__("Manager_bccf60");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
int snprintf_alt1(__int64, unsigned __int64, const char*,
                  ...) __asm__("snprintf");
int strcmp_alt1(const char*, const char*) __asm__("strcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_bcd900_alt1(__int64*,
                             unsigned __int64) __asm__("GameRoutine_bcd900");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void eft_res_Manager_Manager(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void Manager_bccf60(PSEUDO_X8 x8_, _QWORD* a1,
                                               int a2, const char* a3,
                                               const char* a4);
__int64 ResFile_5e5f00_alt1(__int64) __asm__("ResFile_5e5f00");
bool GameRoutine_ad7390_alt1(_QWORD*) __asm__("GameRoutine_ad7390");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
__int64 Manager_bcd5c0(__int64 a1, const char* a2);

void eft_res_Manager_Manager(__int64 a1, __int64 a2)
{
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_BYTE*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_BYTE*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = a1 + 8;
  *(_QWORD*)(a1 + 16) = a1 + 8;
  *(_QWORD*)(a1 + 24) = a1 + 24;
  *(_QWORD*)(a1 + 32) = a1 + 24;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 168) = a1 + 168;
  *(_QWORD*)(a1 + 176) = a1 + 168;
  *(_QWORD*)(a1 + 184) = a1 + 184;
  *(_QWORD*)(a1 + 192) = a1 + 184;
  v3 = *(unsigned int*)(a2 + 32);
  v4 = fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(v6 + 16) = 0;
  *(_QWORD*)(v6 + 24) = 0;
  *(_QWORD*)(v6 + 40) = a1;
  *(_DWORD*)v6 = 300;
  *(_QWORD*)(v6 + 8) = 0;
  v16_.v16[0] = GameData_1fd05b8;
  v16_.v16[1] = a1;
  *(_QWORD*)(v6 + 32) = GameData_1fd05b8;
  v16_.v17 = v16_.v16;
  *(_QWORD*)(v6 + 64) = v6 + 32;
  if ((_DWORD)v3 != 0) {
    GameRoutine_bcd900_alt1((__int64*)(v6 + 8), v3),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v7 = v16_.v17;
    if (v16_.v17 == v16_.v16) {
      v8 = 32;
    }
    else {
      if (v16_.v17 == nullptr) {
        goto LABEL_8;
      }
      v8 = 40;
    }
  }
  else {
    v8 = 32;
    v7 = v16_.v16;
  }
  (*(void (**)(_QWORD*, __int64))(*v7 + v8))(v7, v5),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_8:
  v9 = *(_QWORD**)(a1 + 208);
  *(_QWORD*)(a1 + 208) = v6;
  if (v9 == nullptr) {
    return;
  }
  v10 = (_QWORD*)v9[8];
  if (v10 == v9 + 4) {
    v11 = 32;
    goto LABEL_13;
  }
  if (v10 != nullptr) {
    v11 = 40;
  LABEL_13:
    (*(void (**)(_QWORD*, __int64))(*v10 + v11))(v10, v5),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v12 = v9[1];
  if (v12 != 0) {
    v13 = *(_QWORD*)v4;
    v9[2] = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v13 + v14, v12),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v15 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v15 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v15, (__int64)v9),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
}

__int64 Manager_bcc860(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 i;
  unsigned __int8* v6;
  int v7;
  char* v8;
  int v9;
  long double v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  __int64 j;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  _QWORD v38[2];
  char v39;
  __int64 v40;
  int v41;

  v1 = result;
  if ((*(_BYTE*)(result + 200) & 1) == 0 &&
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)result + 112LL) + 24LL) != 0) {
    v2 = *(_QWORD*)(eft_g_effectSystem + 112);
    v3 = *(unsigned int*)(v2 + 48);
    if ((int)v3 >= 1) {
      v4 = *(_QWORD*)(v2 + 40);
      for (i = 0; v3 != i; ++i) {
        v6 = *(unsigned __int8**)(v4 + 8 * i);
        v7 = *v6;
        if (v7 == 67) {
          v7 = v6[1];
          if (v7 == 77) {
            v7 = v6[2];
            if (v6[2] == 0) {
              v8 = &GameData_1af96e7;
            LABEL_17:
              v9 = (unsigned __int8)*v8;
              v7 = 0;
              goto LABEL_18;
            }
            if (v7 == 78) {
              v7 = v6[3];
              if (v6[3] == 0) {
                v8 = &GameData_1af96e8;
                goto LABEL_17;
              }
              v9 = 0;
            }
            else {
              v9 = 78;
            }
          }
          else {
            v8 = &GameData_1af96e6;
            if (v7 == 0) {
              goto LABEL_17;
            }
            v9 = 77;
          }
        }
        else {
          v9 = 67;
        }
      LABEL_18:
        if (v7 == v9) {
          goto LABEL_21;
        }
      }
    }
    i = 0xFFFFFFFFLL;
  LABEL_21:
    *(struct PseudoSret*)(v38) = GameRoutine_bccce0(result, i);
    result = GameRoutine_18e5d80(v38);
    if ((v39 & 1) != 0 && v40 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v10);
    }
    *(_BYTE*)(v1 + 200) = 1;
  }
  v12 = *(__int64**)(v1 + 32);
  if (v12 != (__int64*)(v1 + 24)) {
    v13 = v1 + 8;
    do {
      v16 = (__int64*)v12[1];
      result = (*(__int64 (**)(__int64*))(*(v12 - 2) + 16))(v12 - 2);
      if ((result & 1) != 0) {
        *(_QWORD*)(v1 + 40 + 8LL * (*((int*)v12 + 4) >> 6)) |=
            1LL << *((_DWORD*)v12 + 4);
        v17 = v12[3];
        if (v17 != 0 && *(_QWORD*)(v17 + 592) != 0) {
          result = GameRoutine_bc7ac0(*(_QWORD*)v1, (__int64)(v12 - 2));
        }
        v14 = (__int64*)v12[1];
        v15 = *v14;
        *(_QWORD*)(*v12 + 8) = v14;
        *v14 = *v12;
        *(_QWORD*)(v15 + 8) = v12;
        *v12 = v15;
        *v12 = *(_QWORD*)v13;
        *(_QWORD*)(v15 + 8) = v13;
        *(_QWORD*)(*(_QWORD*)v13 + 8LL) = v12;
        *(_QWORD*)v13 = v15;
      }
      v12 = v16;
    } while (v16 != (__int64*)(v1 + 24));
  }
  v18 = *(_QWORD*)(v1 + 16);
  if (v18 != v1 + 8) {
    while (1) {
      v19 = *(_QWORD*)(v18 + 8);
      if ((*(_BYTE*)(v18 - 7) & 1) != 0) {
        goto LABEL_42;
      }
      if (*(int*)(v18 - 4) <= 0) {
        break;
      }
    LABEL_38:
      v18 = v19;
      if (v19 == v1 + 8) {
        goto LABEL_44;
      }
    }
    *(_BYTE*)(v18 - 7) = 1;
  LABEL_42:
    v20 = *(_DWORD*)(v18 + 16);
    v21 = *(_QWORD*)(*(_QWORD*)(v1 + 208) + 8LL);
    if ((*(_BYTE*)(v21 + 24LL * v20 + 8) & 1) == 0) {
      v22 = v21 + 24LL * v20;
      *(_BYTE*)(v22 + 8) = 1;
      *(_QWORD*)(v22 + 16) = v18 - 16;
    }
    goto LABEL_38;
  }
LABEL_44:
  v23 = *(__int64**)(v1 + 192);
  if (v23 != (__int64*)(v1 + 184)) {
    v24 = v1 + 168;
    do {
      v27 = (__int64*)v23[1];
      result = (*(__int64 (**)(__int64*))(*(v23 - 2) + 16))(v23 - 2);
      if (v23[21] != 0) {
        if ((result & 1) != 0) {
          v28 = (__int64*)v23[1];
          v29 = *v28;
          *(_QWORD*)(*v23 + 8) = v28;
          *v28 = *v23;
          *(_QWORD*)(v29 + 8) = v23;
          *v23 = v29;
          *v23 = *(_QWORD*)v24;
          *(_QWORD*)(v29 + 8) = v24;
          *(_QWORD*)(*(_QWORD*)v24 + 8LL) = v23;
          *(_QWORD*)v24 = v29;
        }
      }
      else {
        v25 = (__int64*)v23[1];
        v26 = *v25;
        *(_QWORD*)(*v23 + 8) = v25;
        *v25 = *v23;
        *(_QWORD*)(v26 + 8) = v23;
        *v23 = v26;
      }
      v23 = v27;
    } while (v27 != (__int64*)(v1 + 184));
  }
  for (j = *(_QWORD*)(v1 + 176); j != v1 + 168; j = *(_QWORD*)(j + 8)) {
    if ((*(_BYTE*)(j - 7) & 1) == 0 && *(int*)(j - 4) <= 0) {
      *(_BYTE*)(j - 7) = 1;
    }
  }
  v31 = *(_QWORD**)(v1 + 208);
  v32 = v31[1];
  v33 = v31[2];
  if (v32 != v33) {
    if ((*(_BYTE*)(v1 + 216) & 1) != 0) {
      do {
        if (*(_BYTE*)(v32 + 8) == 1) {
          *(_BYTE*)v32 = 1;
          *(_DWORD*)(v32 + 4) = 1;
        }
        v32 += 24;
      } while (v32 != v33);
    }
    else {
      v34 = 0;
      do {
        if (*(_BYTE*)(v32 + 8) == 1 && *(_BYTE*)v32 == 1) {
          v35 = *(_DWORD*)(v32 + 4);
          if (v35 < 0) {
            v36 = *(_QWORD*)(v32 + 16);
            v37 = v31[8];
            v41 = v34;
            v38[0] = v36;
            if (v37 == 0) {
              GameRoutine_60a310(0);
            }
            result = (*(__int64 (**)(__int64, int*, _QWORD*))(
                *(_QWORD*)v37 + 48LL))(v37, &v41, v38);
            *(_BYTE*)v32 = 0;
            *(_DWORD*)(v32 + 4) = 0;
            *(_BYTE*)(v32 + 8) = 0;
            *(_QWORD*)(v32 + 16) = 0;
          }
          else {
            *(_DWORD*)(v32 + 4) = v35 - 1;
          }
        }
        ++v34;
        v32 += 24;
      } while (v32 != v33);
    }
  }
  *(_BYTE*)(v1 + 216) = 0;
  return result;
}

__attribute__((swiftcall)) void Manager_bccce0(PSEUDO_X8 x8_, _QWORD* result,
                                               unsigned int a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v3;
  _QWORD* v5;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned int v11;
  char v12;
  _QWORD* v13;
  unsigned __int64 v14;
  _QWORD* v15;
  int v16;
  __int64 v17;
  int* v18;
  __int64 v19;
  int v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v5 = result;
  if ((a2 & 0x80000000) == 0 &&
      (signed int)a2 <
          (signed __int32)*(_DWORD*)(*(_QWORD*)(eft_g_effectSystem + 112) +
                                     48LL)) {
    v7 = result + 3;
    v8 = result + 4;
    while (1) {
      v9 = (_QWORD*)*v8;
      if ((_QWORD*)*v8 == v7) {
        break;
      }
      v8 = v9 + 1;
      if (*((_DWORD*)v9 + 4) == a2) {
        goto LABEL_26;
      }
    }
    v10 = (_QWORD*)result[2];
    if (v10 == result + 1) {
      v21 = 0;
      v13 = nullptr;
      v11 = -1;
      v12 = 1;
    }
    else {
      v11 = -1;
      v12 = 1;
      v13 = nullptr;
      v14 = 0;
      do {
        v15 = (_QWORD*)v10[1];
        v16 = *((_DWORD*)v10 + 4);
        if (v16 == a2) {
          v11 = a2;
          if (*((_BYTE*)v10 - 7) != 0) {
            *((_BYTE*)v10 - 7) = 0;
            v17 = *(_QWORD*)(result[26] + 8LL) + 24LL * a2;
            *(_BYTE*)v17 = 0;
            *(_DWORD*)(v17 + 4) = 0;
            *(_BYTE*)(v17 + 8) = 0;
            *(_QWORD*)(v17 + 16) = 0;
            v11 = *((_DWORD*)v10 + 4);
          }
          v3 &= 0xFFFFFFFFFFFF0000LL;
          v12 = 0;
          v13 = result;
          v14 = v3 >> 8;
        }
        else if (*((_BYTE*)v10 - 7) != 0) {
          v18 = (int*)result[26];
          v19 = *((_QWORD*)v18 + 1) + 24LL * v16;
          if ((*(_BYTE*)v19 & 1) == 0) {
            v20 = *v18;
            *(_BYTE*)v19 = 1;
            *(_DWORD*)(v19 + 4) = v20;
          }
        }
        v10 = v15;
      } while (v15 != result + 1);
      v21 = v14 << 8;
    }
    result = (_QWORD*)result[22];
    v22 = v5 + 21;
    if (result != v5 + 21) {
      do {
        while (*((_BYTE*)result - 7) != 1) {
          result = (_QWORD*)result[1];
          if (result == v22) {
            goto LABEL_24;
          }
        }
        v23 = (_QWORD*)result[1];
        v24 = *v23;
        *(_QWORD*)(*result + 8LL) = v23;
        *v23 = *result;
        *(_QWORD*)(v24 + 8) = result;
        *result = v24;
        (*(void (**)(_QWORD*))(*(result - 2) + 8LL))(result - 2);
        result = v23;
      } while (v23 != v22);
    }
  LABEL_24:
    if ((v12 & 1) == 0) {
      *(_QWORD*)a3 = v13;
      *(_DWORD*)(a3 + 8) = v11;
      *(_QWORD*)(a3 + 16) = v21;
      *(_QWORD*)(a3 + 24) = 0;
      *(_QWORD*)(a3 + 32) = 0;
      goto LABEL_27;
    }
    v25 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
    *(_WORD*)(v25 + 8) = 0;
    *(_BYTE*)(v25 + 10) = 0;
    *(_DWORD*)(v25 + 12) = 0;
    v26 = GameData_212e9e0[0];
    *(_DWORD*)(v25 + 32) = a2;
    *(_QWORD*)(v25 + 40) = 0;
    *(_QWORD*)(v25 + 24) = v7;
    *(_QWORD*)v25 = v26 + 16;
    v27 = v5[3];
    *(_QWORD*)(v25 + 16) = v27;
    result = (_QWORD*)(v25 + 16);
    *(_QWORD*)(v27 + 8) = result;
    v5[3] = result;
  }
LABEL_26:
  *(_QWORD*)a3 = v5;
  *(_DWORD*)(a3 + 8) = a2;
  *(_WORD*)(a3 + 16) = 0;
LABEL_27:
  *(_BYTE*)(a3 + 40) = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void Manager_bccf60(PSEUDO_X8 x8_, _QWORD* a1,
                                               int a2, const char* a3,
                                               const char* a4)
{
  __int64 a5 = (__int64)PSEUDO_X8_VALUE(x8_);
  _QWORD* v7;
  __int64* v8;
  _QWORD* v12;
  const char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  char v19;
  char v20;
  _QWORD* v21;
  const char* v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  _QWORD* v43;
  int v44;
  const char* v45;
  unsigned int v46;
  __int64 v47;
  struct {
    __int64 v48;
    unsigned __int64 v49;
    char* v50;
  } v48_;

  if (a4 == nullptr) {
    *(_QWORD*)a5 = a1;
    *(_WORD*)(a5 + 16) = 0;
    *(_DWORD*)(a5 + 8) = -1;
  LABEL_41:
    *(_BYTE*)(a5 + 40) = 1;
    return;
  }
  v7 = a1 + 23;
  v8 = a1 + 24;
  while (1) {
    v12 = (_QWORD*)*v8;
    if ((_QWORD*)*v8 == v7) {
      break;
    }
    v13 = (const char*)v12[4];
    v8 = v12 + 1;
    if (strcmp_alt1(v13, a4) == 0) {
      v14 = strlen_alt1(v13);
      *(_QWORD*)a5 = a1;
      *(_DWORD*)(a5 + 8) = -1;
      if (v14 < 0xFFFFFFFFFFFFFFF7LL) {
        v15 = v14;
        if (v14 >= 0x17) {
          if ((v14 | 7) == 0x17) {
            v29 = 26;
          }
          else {
            v29 = (v14 | 7) + 1;
          }
          v16 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v29, 16, 0);
          *(_QWORD*)(a5 + 24) = v15;
          *(_QWORD*)(a5 + 32) = v16;
          *(_QWORD*)(a5 + 16) = v29 | 1;
        }
        else {
          v16 = a5 + 17;
          *(_BYTE*)(a5 + 16) = 2 * v14;
          if (v14 == 0) {
          LABEL_40:
            *(_BYTE*)(v16 + v15) = 0;
            goto LABEL_41;
          }
        }
        memmove_alt1(v16, (__int64)v13, v15);
        goto LABEL_40;
      }
    LABEL_58:
      String_60a1d0_alt1();
    }
  }
  v17 = (_QWORD*)a1[22];
  v18 = a1 + 21;
  v44 = a2;
  v45 = a3;
  if (v17 == a1 + 21) {
    LOBYTE(v46) = 0;
    v47 = 0;
    goto LABEL_44;
  }
  v46 = 0;
  v41 = 0;
  v42 = 0;
  v19 = 1;
  v20 = 0;
  v43 = nullptr;
  v47 = 0;
LABEL_12:
  v21 = v17;
  do {
    v22 = (const char*)v21[4];
    v17 = (_QWORD*)v21[1];
    if (strcmp_alt1(v22, a4) == 0) {
      *((_BYTE*)v21 - 7) = 0;
      v24 = strlen_alt1(v22);
      if (v24 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_58;
      }
      v25 = v24;
      if (v24 >= 0x17) {
        if ((v24 | 7) == 0x17) {
          v27 = 26;
        }
        else {
          v27 = (v24 | 7) + 1;
        }
        v26 = (char*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v27, 16, 0);
        v48_.v49 = v25;
        v48_.v50 = v26;
        v48_.v48 = v27 | 1;
      }
      else {
        v26 = (char*)&v48_.v48 + 1;
        LOBYTE(v48_.v48) = 2 * v24;
        if (v24 == 0) {
          goto LABEL_26;
        }
      }
      memmove_alt1((__int64)v26, (__int64)v22, v25);
    LABEL_26:
      v26[v25] = 0;
      v43 = a1;
      if ((v46 & 1) != 0 && v47 != 0) {
        v28 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v47);
      }
      v20 = 1;
      v19 = 0;
      v42 = v48_.v49;
      v46 = (unsigned __int8)v48_.v48;
      v41 = v48_.v48 & 0xFFFFFFFFFFFFFF00LL;
      v47 = (__int64)v48_.v50;
      if (v17 == v18) {
      LABEL_34:
        *(_BYTE*)(a5 + 40) = v20;
        *(_QWORD*)a5 = v43;
        *(_DWORD*)(a5 + 8) = -1;
        *(_QWORD*)(a5 + 16) = v41 | v46;
        *(_QWORD*)(a5 + 24) = v42;
        *(_QWORD*)(a5 + 32) = v47;
        return;
      }
      goto LABEL_12;
    }
    if (*((_BYTE*)v21 - 7) == 1) {
      v23 = *v17;
      *(_QWORD*)(*v21 + 8LL) = v17;
      *v17 = *v21;
      *(_QWORD*)(v23 + 8) = v21;
      *v21 = v23;
      (*(void (**)(_QWORD*))(*(v21 - 2) + 8LL))(v21 - 2);
    }
    v21 = v17;
  } while (v17 != v18);
  if ((v19 & 1) == 0) {
    goto LABEL_34;
  }
LABEL_44:
  v30 = (__int64*)fw_memory_g_heap_manager_ptr;
  v31 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 192, 16, 0);
  v32 = v31 + 16;
  *(_WORD*)(v31 + 8) = 0;
  *(_BYTE*)(v31 + 10) = 0;
  v33 = v31;
  *(_DWORD*)(v31 + 12) = 0;
  *(_QWORD*)(v31 + 16) = v31 + 16;
  *(_QWORD*)(v31 + 24) = v31 + 16;
  v34 = GameData_212e9e8;
  *(_QWORD*)(v31 + 184) = 0;
  *(_QWORD*)(v31 + 40) = v45;
  *(_QWORD*)(v31 + 48) = a4;
  *(_QWORD*)v31 = v34 + 16;
  *(_DWORD*)(v31 + 32) = v44;
  snprintf_alt1(v31 + 56, 0x80u, "Effect/model/%s/%s.bfres", v45, a4);
  v35 = *(_QWORD*)(v33 + 16);
  *(_QWORD*)(v33 + 16) = a1[23];
  *(_QWORD*)(v35 + 8) = v7;
  *(_QWORD*)(a1[23] + 8LL) = v32;
  a1[23] = v35;
  v36 = strlen_alt1(a4);
  *(_QWORD*)a5 = a1;
  *(_DWORD*)(a5 + 8) = -1;
  if (v36 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_58;
  }
  v37 = v36;
  if (v36 >= 0x17) {
    if ((v36 | 7) == 0x17) {
      v39 = 26;
    }
    else {
      v39 = (v36 | 7) + 1;
    }
    v38 = fw_memory_HeapManager_Allocate_alt1(*v30, v39, 16, 0);
    *(_QWORD*)(a5 + 24) = v37;
    *(_QWORD*)(a5 + 32) = v38;
    *(_QWORD*)(a5 + 16) = v39 | 1;
    goto LABEL_52;
  }
  v38 = a5 + 17;
  *(_BYTE*)(a5 + 16) = 2 * v36;
  if (v36 != 0) {
  LABEL_52:
    memcpy_alt1(v38, (__int64)a4, v37);
  }
  *(_BYTE*)(v38 + v37) = 0;
  *(_BYTE*)(a5 + 40) = 1;
  if ((v46 & 1) != 0 && v47 != 0) {
    v40 = 128;
    if (*(_QWORD*)(*v30 + 200) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v30 + v40, v47);
  }
}

__int64 Manager_bcd400(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = *(_QWORD*)(result + 192);
  v3 = result + 184;
  v5 = result;
  if (v2 != result + 184) {
    while (1) {
      result = strcmp(*(_QWORD*)(v2 + 32), a2);
      if ((_DWORD)result == 0) {
        break;
      }
      v2 = *(_QWORD*)(v2 + 8);
      if (v2 == v3) {
        goto LABEL_6;
      }
    }
    nn_os_LockMutex(&GameData_21675f0);
    ++*(_DWORD*)(v2 - 4);
    result = nn_os_UnlockMutex(&GameData_21675f0);
  }
LABEL_6:
  v6 = v5 + 168;
  v7 = *(_QWORD*)(v5 + 176);
  if (v7 != v6) {
    while (1) {
      result = strcmp(*(_QWORD*)(v7 + 32), a2);
      if ((_DWORD)result == 0) {
        break;
      }
      v7 = *(_QWORD*)(v7 + 8);
      if (v7 == v6) {
        return result;
      }
    }
    nn_os_LockMutex(&GameData_21675f0);
    ++*(_DWORD*)(v7 - 4);
    return nn_os_UnlockMutex(&GameData_21675f0);
  }
  return result;
}

__int64 Manager_bcd4e0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = *(_QWORD*)(result + 192);
  v3 = result + 184;
  v5 = result;
  if (v2 != result + 184) {
    while (1) {
      result = strcmp(*(_QWORD*)(v2 + 32), a2);
      if ((_DWORD)result == 0) {
        break;
      }
      v2 = *(_QWORD*)(v2 + 8);
      if (v2 == v3) {
        goto LABEL_6;
      }
    }
    nn_os_LockMutex(&GameData_21675f0);
    --*(_DWORD*)(v2 - 4);
    result = nn_os_UnlockMutex(&GameData_21675f0);
  }
LABEL_6:
  v6 = v5 + 168;
  v7 = *(_QWORD*)(v5 + 176);
  if (v7 != v6) {
    while (1) {
      result = strcmp(*(_QWORD*)(v7 + 32), a2);
      if ((_DWORD)result == 0) {
        break;
      }
      v7 = *(_QWORD*)(v7 + 8);
      if (v7 == v6) {
        return result;
      }
    }
    nn_os_LockMutex(&GameData_21675f0);
    --*(_DWORD*)(v7 - 4);
    return nn_os_UnlockMutex(&GameData_21675f0);
  }
  return result;
}

__int64 Manager_bcd5c0(__int64 a1, const char* a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  bool v15;
  unsigned __int64 v16;
  unsigned __int16* v17;

  v2 = *(_QWORD*)(a1 + 176);
  v3 = a1 + 168;
  if (v2 == a1 + 168) {
    return 0;
  }
  while (1) {
    v5 = *(_QWORD**)(v2 + 168);
    GameRoutine_ad7390_alt1(v5);
    v6 = ResFile_5e5f00_alt1(*(_QWORD*)(v5[1] + 592LL));
    v7 = *(_QWORD*)(v6 + 48);
    if (v7 != 0) {
      v8 = v6;
      if (a2 != nullptr) {
        v9 = strlen_alt1(a2);
      }
      else {
        v9 = 0;
      }
      v10 = v7 + 8;
      v11 = *(unsigned __int16*)(v7 + 12);
      v12 = v7 + 8 + 16 * v11;
      v13 = *(_DWORD*)v12;
      if ((signed __int32)*(_DWORD*)(v7 + 8) < (signed __int32)*(_DWORD*)v12) {
        do {
          v16 = (__int64)v13 >> 3;
          if (v9 > v16) {
            v14 = ((unsigned __int8)a2[v9 + ~v16] >> (v13 & 7)) & 1;
          }
          else {
            v14 = 0;
          }
          v11 = *(unsigned __int16*)(v7 + 12 + 16 * v11 + 2 * v14);
          v15 = v13 < (signed __int32)*(_DWORD*)(v10 + 16 * v11);
          v13 = *(_DWORD*)(v10 + 16 * v11);
        } while (v15);
        v12 = v10 + 16 * v11;
      }
      v17 = *(unsigned __int16**)(v12 + 8);
      if (v9 == *v17 && memcmp_alt1((__int64)(v17 + 1), (__int64)a2, v9) == 0 &&
          (~(v12 - v7 - 24) & 0xFFFFFFFF0LL) != 0 && *(_QWORD*)(v8 + 40) != 0) {
        break;
      }
    }
    v2 = *(_QWORD*)(v2 + 8);
    if (v2 == v3) {
      return 0;
    }
  }
  return *(_QWORD*)(v2 + 168);
}

__int64 eft_res_Manager_Manager_lambda0_Invoke(__int64 a1, __int64 a2,
                                               __int64* a3)
{
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;

  v3 = *a3;
  v4 = *(__int64**)(a1 + 8);
  v5 = *(_QWORD*)(*a3 + 40);
  if (v5 != 0 && *(_QWORD*)(v5 + 592) != 0) {
    v6 = *v4;
    v7 = *(int*)(v3 + 32);
    CalculateAllocatedSizeHeap_5c7360(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v4 + 96) + 152LL) + 8 * v7),
        GameData_212e940[0], 0);
    GameRoutine_5d2320(*(_QWORD*)(v6 + 96), *(_QWORD*)(v6 + 88),
                       (unsigned int)v7);
  }
  v4[(*(int*)(v3 + 32) >> 6) + 5] &= ~(1LL << *(_DWORD*)(v3 + 32));
  if ((__int64*)(v3 + 16) != v4 + 1) {
    v8 = *(__int64**)(v3 + 24);
    v9 = *v8;
    *(_QWORD*)(*(_QWORD*)(v3 + 16) + 8LL) = v8;
    *v8 = *(_QWORD*)(v3 + 16);
    *(_QWORD*)(v9 + 8) = v3 + 16;
    *(_QWORD*)(v3 + 16) = v9;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
}

#pragma GCC visibility pop
