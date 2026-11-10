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
_QWORD* eft_res_Manager_Manager(__int64 a1, __int64 a2);
__int64 Manager_bcd400(__int64 result, __int64 a2);
__int64 Manager_bcd4e0(__int64 result, __int64 a2);
__int64 Manager_bcd5c0(__int64 a1, __int64 a2);
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
__attribute__((swiftcall)) void Manager_bccf60(PSEUDO_X8 x8_,
                                               unsigned __int64 result, int a2,
                                               const char* a3, const char* a4);

_QWORD* eft_res_Manager_Manager(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[4];
  _QWORD* v17;

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
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      80, 16, 0);
  *(_QWORD*)(v6 + 16) = 0;
  *(_QWORD*)(v6 + 24) = 0;
  *(_QWORD*)(v6 + 40) = a1;
  *(_DWORD*)v6 = 300;
  *(_QWORD*)(v6 + 8) = 0;
  v16[0] = GameData_1fd05b8;
  v16[1] = a1;
  *(_QWORD*)(v6 + 32) = GameData_1fd05b8;
  v17 = v16;
  *(_QWORD*)(v6 + 64) = v6 + 32;
  if ((_DWORD)v3 != 0) {
    GameRoutine_bcd900(v6 + 8, v3);
    result = v17;
    if (v17 == v16) {
      v8 = 32;
    }
    else {
      if (v17 == nullptr) {
        goto LABEL_8;
      }
      v8 = 40;
    }
  }
  else {
    v8 = 32;
    result = v16;
  }
  result =
      (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v8))(result, v5);
LABEL_8:
  v9 = *(_QWORD**)(a1 + 208);
  *(_QWORD*)(a1 + 208) = v6;
  if (v9 == nullptr) {
    return result;
  }
  v10 = (_QWORD*)v9[8];
  if (v10 == v9 + 4) {
    v11 = 32;
    goto LABEL_13;
  }
  if (v10 != nullptr) {
    v11 = 40;
  LABEL_13:
    (*(void (**)(_QWORD*, __int64))(*v10 + v11))(v10, v5);
  }
  v12 = v9[1];
  if (v12 != 0) {
    v13 = *(_QWORD*)v4;
    v9[2] = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(v13 + v14);
  }
  v15 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v15 = 56;
  }
  return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v15);
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
          *(_DWORD*)(*(_QWORD*)(eft_g_effectSystem + 112) + 48LL)) {
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

__attribute__((swiftcall)) void Manager_bccf60(PSEUDO_X8 x8_,
                                               unsigned __int64 result, int a2,
                                               const char* a3, const char* a4)
{
  __int64 a5 = (__int64)PSEUDO_X8_VALUE(x8_);
  _QWORD* v5;
  unsigned __int64 v7;
  __int64* v8;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  char v18;
  char v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  long double v23;
  unsigned __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  long double v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  _QWORD* v42;
  int v43;
  const char* v44;
  unsigned int v45;
  char* v46;
  __int64 v47;
  unsigned __int64 v48;
  char* v49;

  v5 = (_QWORD*)result;
  if (a4 == nullptr) {
    *(_QWORD*)a5 = result;
    *(_WORD*)(a5 + 16) = 0;
    *(_DWORD*)(a5 + 8) = -1;
  LABEL_41:
    *(_BYTE*)(a5 + 40) = 1;
    {
      result;
      return;
    }
  }
  v7 = result + 184;
  v8 = (__int64*)(result + 192);
  while (1) {
    v12 = *v8;
    if (*v8 == v7) {
      break;
    }
    v13 = *(_QWORD*)(v12 + 32);
    v8 = (__int64*)(v12 + 8);
    if ((unsigned int)strcmp(v13, a4) == 0) {
      result = strlen(v13);
      *(_QWORD*)a5 = v5;
      *(_DWORD*)(a5 + 8) = -1;
      if (result < 0xFFFFFFFFFFFFFFF7LL) {
        v14 = result;
        if (result >= 0x17) {
          if ((result | 7) == 0x17) {
            v28 = 26;
          }
          else {
            v28 = (result | 7) + 1;
          }
          v15 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v28, 16, 0);
          *(_QWORD*)(a5 + 24) = v14;
          *(_QWORD*)(a5 + 32) = v15;
          *(_QWORD*)(a5 + 16) = v28 | 1;
        }
        else {
          v15 = a5 + 17;
          *(_BYTE*)(a5 + 16) = 2 * result;
          if (result == 0) {
          LABEL_40:
            *(_BYTE*)(v15 + v14) = 0;
            goto LABEL_41;
          }
        }
        result = memmove(v15, v13, v14);
        goto LABEL_40;
      }
    LABEL_58:
      String_60a1d0(result);
    }
  }
  v16 = (_QWORD*)v5[22];
  v17 = v5 + 21;
  v43 = a2;
  v44 = a3;
  if (v16 == v5 + 21) {
    LOBYTE(v45) = 0;
    v46 = nullptr;
    goto LABEL_44;
  }
  v45 = 0;
  v40 = 0;
  v41 = 0;
  v18 = 1;
  v19 = 0;
  v42 = nullptr;
  v46 = nullptr;
LABEL_12:
  v20 = v16;
  do {
    v21 = v20[4];
    v16 = (_QWORD*)v20[1];
    result = strcmp(v21, a4);
    if ((_DWORD)result == 0) {
      *((_BYTE*)v20 - 7) = 0;
      result = strlen(v21);
      if (result >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_58;
      }
      v24 = result;
      if (result >= 0x17) {
        if ((result | 7) == 0x17) {
          v26 = 26;
        }
        else {
          v26 = (result | 7) + 1;
        }
        v25 = (char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v26, 16, 0);
        v48 = v24;
        v49 = v25;
        v47 = v26 | 1;
      }
      else {
        v25 = (char*)&v47 + 1;
        LOBYTE(v47) = 2 * result;
        if (result == 0) {
          goto LABEL_26;
        }
      }
      result = memmove(v25, v21, v24);
    LABEL_26:
      v25[v24] = 0;
      v42 = v5;
      if ((v45 & 1) != 0 && v46 != nullptr) {
        v27 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v27 = 56;
        }
        result = nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v23);
      }
      v19 = 1;
      v18 = 0;
      v41 = v48;
      v45 = (unsigned __int8)v47;
      v40 = v47 & 0xFFFFFFFFFFFFFF00LL;
      v46 = v49;
      if (v16 == v17) {
      LABEL_34:
        *(_BYTE*)(a5 + 40) = v19;
        *(_QWORD*)a5 = v42;
        *(_DWORD*)(a5 + 8) = -1;
        *(_QWORD*)(a5 + 16) = v40 | v45;
        *(_QWORD*)(a5 + 24) = v41;
        *(_QWORD*)(a5 + 32) = v46;
        {
          result;
          return;
        }
      }
      goto LABEL_12;
    }
    if (*((_BYTE*)v20 - 7) == 1) {
      v22 = *v16;
      *(_QWORD*)(*v20 + 8LL) = v16;
      *v16 = *v20;
      *(_QWORD*)(v22 + 8) = v20;
      *v20 = v22;
      result = (*(__int64 (**)(_QWORD*))(*(v20 - 2) + 8LL))(v20 - 2);
    }
    v20 = v16;
  } while (v16 != v17);
  if ((v18 & 1) == 0) {
    goto LABEL_34;
  }
LABEL_44:
  v29 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v30 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       192, 16, 0);
  v31 = v30 + 16;
  *(_WORD*)(v30 + 8) = 0;
  *(_BYTE*)(v30 + 10) = 0;
  v32 = v30;
  *(_DWORD*)(v30 + 12) = 0;
  *(_QWORD*)(v30 + 16) = v30 + 16;
  *(_QWORD*)(v30 + 24) = v30 + 16;
  v33 = GameData_212e9e8;
  *(_QWORD*)(v30 + 184) = 0;
  *(_QWORD*)(v30 + 40) = v44;
  *(_QWORD*)(v30 + 48) = a4;
  *(_QWORD*)v30 = v33 + 16;
  *(_DWORD*)(v30 + 32) = v43;
  snprintf(v30 + 56, 128, "Effect/model/%s/%s.bfres", v44, a4);
  v34 = *(_QWORD*)(v32 + 16);
  *(_QWORD*)(v32 + 16) = v5[23];
  *(_QWORD*)(v34 + 8) = v7;
  *(_QWORD*)(v5[23] + 8LL) = v31;
  v5[23] = v34;
  result = strlen(a4);
  *(_QWORD*)a5 = v5;
  *(_DWORD*)(a5 + 8) = -1;
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_58;
  }
  v36 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v38 = 26;
    }
    else {
      v38 = (result | 7) + 1;
    }
    v37 = fw_memory_HeapManager_Allocate(*v29, v38, 16, 0);
    *(_QWORD*)(a5 + 24) = v36;
    *(_QWORD*)(a5 + 32) = v37;
    *(_QWORD*)(a5 + 16) = v38 | 1;
    goto LABEL_52;
  }
  v37 = a5 + 17;
  *(_BYTE*)(a5 + 16) = 2 * result;
  if (result != 0) {
  LABEL_52:
    result = memcpy(v37, a4, v36);
  }
  *(_BYTE*)(v37 + v36) = 0;
  *(_BYTE*)(a5 + 40) = 1;
  if ((v45 & 1) != 0 && v46 != nullptr) {
    v39 = 128;
    if (*(_QWORD*)(*v29 + 200LL) == 0) {
      v39 = 56;
    }
    {
      nn_mem_StandardAllocator_Free_alt1(*v29 + v39, v35);
      return;
    }
  }
  {
    result;
    return;
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

__int64 Manager_bcd5c0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
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
    v5 = *(_QWORD*)(v2 + 168);
    GameRoutine_ad7390(v5);
    v6 = ResFile_5e5f00(*(_QWORD*)(*(_QWORD*)(v5 + 8) + 592LL));
    v7 = *(_QWORD*)(v6 + 48);
    if (v7 != 0) {
      v8 = v6;
      if (a2 != 0) {
        v9 = strlen(a2);
      }
      else {
        v9 = 0;
      }
      v10 = v7 + 8;
      v11 = *(unsigned __int16*)(v7 + 12);
      v12 = v7 + 8 + 16 * v11;
      v13 = *(_DWORD*)v12;
      if (*(_DWORD*)(v7 + 8) < *(_DWORD*)v12) {
        do {
          v16 = (__int64)v13 >> 3;
          if (v9 > v16) {
            v14 = (*(unsigned __int8*)(a2 + v9 + ~v16) >> (v13 & 7)) & 1;
          }
          else {
            v14 = 0;
          }
          v11 = *(unsigned __int16*)(v7 + 12 + 16 * v11 + 2 * v14);
          v15 = v13 < *(_DWORD*)(v10 + 16 * v11);
          v13 = *(_DWORD*)(v10 + 16 * v11);
        } while (v15);
        v12 = v10 + 16 * v11;
      }
      v17 = *(unsigned __int16**)(v12 + 8);
      if (v9 == *v17 && (unsigned int)memcmp(v17 + 1, a2) == 0 &&
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
