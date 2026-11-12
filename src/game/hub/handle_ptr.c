#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1fd3de0[28])();
extern __int64 (*GameData_1fd3e18[21])();
extern __int64 (*GameData_1fd3e50[14])();
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_64aa00(_QWORD);
void __attribute__((noreturn)) GameRoutine_919020(_QWORD);
__int64 HandlePtr_Unknown14(__int64 result, _DWORD* a2, _DWORD* a3);
__int64 HandlePtr_Unknown15(__int64 result, _QWORD* a2, _QWORD* a3);
__int64 HandlePtr_Unknown16(__int64 result, _DWORD* a2, _DWORD* a3);
float HandlePtr_Unknown17(__int64* a1, _DWORD* a2, float* a3);
__int64 HandlePtr_Unknown20(__int64 result, _BYTE* a2, _BYTE* a3);
_QWORD* HandlePtr_cb34a0(__int64 a1, __int64* a2);
char** HandlePtr_cb3600_alt1(char** result, __int64 a2, __int64 a3,
                             unsigned __int64 a4) __asm__("HandlePtr_cb3600");
__int64 HandlePtr_Unknown21_cb39c0(__int64 result, _DWORD* a2, _DWORD* a3);
__int64 HandlePtr_Unknown22(__int64 result, _QWORD* a2, _QWORD* a3);
__int64 HandlePtr_Unknown23_cb3ac0(__int64 result, _DWORD* a2, _DWORD* a3);
float HandlePtr_Unknown24_cb3b40(__int64* a1, _DWORD* a2, float* a3);
__int64 HandlePtr_Unknown25_alt1(__int64 result, __int64 a2,
                                 _QWORD* a3) __asm__("HandlePtr_Unknown25");
_QWORD** HandlePtr_Unknown23_d5be90(_QWORD** result, __int64* a2);
__int64* HandlePtr_Unknown24_d5bee0(__int64* result, __int64 a2);
_QWORD* HandlePtr_d5bf40(_QWORD* result, __int64 a2, __int64* a3);
__int64 HandlePtr_Unknown26(__int64* a1, __int64 a2);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
extern __int64 (*HandlePtr_Unknown14_ptr[14])();
void __attribute__((noreturn))
GameRoutine_919020_alt1() __asm__("GameRoutine_919020");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64* HandlePtr_cb3600(__int64* result, __int64 a2, __int64 a3,
                          unsigned __int64 a4);
void HandlePtr_Unknown25(__int64* a1, __int64 a2, _QWORD* a3);

__int64 HandlePtr_Unknown14(__int64 result, _DWORD* a2, _DWORD* a3)
{
  _DWORD* v3;
  int v4;
  _DWORD* v5;
  int v6;
  char v7;

  v3 = *(_DWORD**)result;
  v4 = *(_DWORD*)(*(_QWORD*)result + 24LL);
  if (v4 != -1) {
    if (v4 == 0) {
      *a2 = *a3;
      return result;
    }
    v5 = a3;
    result = ((__int64 (*)(char*, _DWORD*))GameData_1fd3de0[v4])(&v7, v3);
    a3 = v5;
  }
  v3[6] = -1;
  v6 = *a3;
  v3[6] = 0;
  *v3 = v6;
  return result;
}

__int64 HandlePtr_Unknown15(__int64 result, _QWORD* a2, _QWORD* a3)
{
  __int64 v3;
  int v4;
  _QWORD* v5;
  char v6;

  v3 = *(_QWORD*)result;
  v4 = *(_DWORD*)(*(_QWORD*)result + 24LL);
  if (v4 != -1) {
    if (v4 == 1) {
      *a2 = *a3;
      return result;
    }
    v5 = a3;
    result = ((__int64 (*)(char*, __int64))GameData_1fd3de0[v4])(&v6, v3);
    a3 = v5;
  }
  *(_DWORD*)(v3 + 24) = -1;
  *(_QWORD*)v3 = *a3;
  *(_DWORD*)(v3 + 24) = 1;
  return result;
}

__int64 HandlePtr_Unknown16(__int64 result, _DWORD* a2, _DWORD* a3)
{
  _DWORD* v3;
  int v4;
  _DWORD* v5;
  char v6;

  v3 = *(_DWORD**)result;
  v4 = *(_DWORD*)(*(_QWORD*)result + 24LL);
  if (v4 != -1) {
    if (v4 == 2) {
      *a2 = *a3;
      return result;
    }
    v5 = a3;
    result = ((__int64 (*)(char*, _DWORD*))GameData_1fd3de0[v4])(&v6, v3);
    a3 = v5;
  }
  v3[6] = -1;
  *v3 = *a3;
  v3[6] = 2;
  return result;
}

float HandlePtr_Unknown17(__int64* a1, _DWORD* a2, float* a3)
{
  __int64 v3;
  int v4;
  float result;
  float* v6;
  char v7;

  v3 = *a1;
  v4 = *(_DWORD*)(*a1 + 24);
  if (v4 != -1) {
    if (v4 == 3) {
      result = *a3;
      *a2 = *(_DWORD*)a3;
      return result;
    }
    v6 = a3;
    ((void (*)(char*, __int64))GameData_1fd3de0[v4])(&v7, v3);
    a3 = v6;
  }
  *(_DWORD*)(v3 + 24) = -1;
  result = *a3;
  *(_DWORD*)(v3 + 24) = 3;
  *(float*)v3 = result;
  return result;
}

__int64 HandlePtr_Unknown20(__int64 result, _BYTE* a2, _BYTE* a3)
{
  __int64 v3;
  int v4;
  _BYTE* v5;
  char v6;

  v3 = *(_QWORD*)result;
  v4 = *(_DWORD*)(*(_QWORD*)result + 24LL);
  if (v4 != -1) {
    if (v4 == 6) {
      *a2 = *a3;
      return result;
    }
    v5 = a3;
    result = ((__int64 (*)(char*, __int64))GameData_1fd3de0[v4])(&v6, v3);
    a3 = v5;
  }
  *(_DWORD*)(v3 + 24) = -1;
  *(_BYTE*)v3 = *a3;
  *(_DWORD*)(v3 + 24) = 6;
  return result;
}

_QWORD* HandlePtr_cb34a0(__int64 a1, __int64* a2)
{
  __int64 v2;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 (*v12)();
  __int64 v14;

  v2 = *a2;
  v4 = (_QWORD*)a1;
  *(_BYTE*)(a1 + 8) = *((_BYTE*)a2 + 8);
  *(_QWORD*)a1 = v2;
  if ((a2[2] & 1) != 0) {
    a1 = fw_text_String_CopyTerminated(a1 + 16, a2[4], a2[3]);
  }
  else {
    v5 = a2[2];
    v6 = a2[4];
    *(_QWORD*)(a1 + 24) = a2[3];
    *(_QWORD*)(a1 + 32) = v6;
    *(_QWORD*)(a1 + 16) = v5;
  }
  v4[6] = 0;
  v4[7] = 0;
  v4[5] = 0;
  v7 = a2[5];
  v8 = a2[6];
  v9 = v8 - v7;
  if (v8 != v7) {
    if (v9 < 0) {
      GameRoutine_919020(a1);
    }
    v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v8 - v7, 16, 0);
    v4[5] = v10;
    v4[6] = v10;
    v4[7] = v10 + v9;
    do {
      *(_BYTE*)v10 = 0;
      *(_DWORD*)(v10 + 24) = -1;
      v11 = *(_DWORD*)(v7 + 24);
      if (v11 != -1) {
        v12 = GameData_1fd3e18[v11];
        v14 = v10;
        ((void (*)(__int64*, __int64))v12)(&v14, v7);
        *(_DWORD*)(v10 + 24) = v11;
      }
      v7 += 32;
      v10 += 32;
    } while (v7 != v8);
    v4[6] = v10;
  }
  return v4;
}

__int64* HandlePtr_cb3600(__int64* result, __int64 a2, __int64 a3,
                          unsigned __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 (*v16)();
  __int64 v17;
  __int64 v18;
  __int64 (*v19)();
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  bool v25;
  unsigned __int64 v26;
  __int64 v27;
  int v28;
  __int64 (*v29)();
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 (*v33)();
  __int64 v34;
  __int64 v35;
  __int64 v36;

  v4 = result[2];
  v5 = *result;
  v8 = a2;
  v9 = result;
  if (a4 > (v4 - *result) >> 5) {
    if (v5 != 0) {
      v10 = result[1];
      if (v5 == v10) {
        goto LABEL_26;
      }
      do {
        v11 = *(unsigned int*)(v10 - 8);
        v12 = v10 - 32;
        if ((_DWORD)v11 != -1) {
          ((void (*)(__int64*, __int64))GameData_1fd3de0[v11])(&v36, v10 - 32);
        }
        *(_DWORD*)(v10 - 8) = -1;
        v10 -= 32;
      } while (v12 != v5);
      v22 = *v9;
      v9[1] = v5;
      v5 = v22;
      if (v22 != 0) {
      LABEL_26:
        v23 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v23, v5);
      }
      v4 = 0;
      v9[1] = 0;
      v9[2] = 0;
      *v9 = 0;
    }
    if (a4 >> 59 == 0) {
      v24 = v4 >> 4;
      if (v4 >> 4 <= a4) {
        v24 = a4;
      }
      v25 = (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFE0LL;
      v26 = 0x7FFFFFFFFFFFFFFLL;
      if (!v25) {
        v26 = v24;
      }
      if (v26 >> 59 == 0) {
        v27 = 4 * v26;
        result = (__int64*)fw_memory_HeapManager_Allocate_alt1(
            fw_memory_g_heap_manager, 32 * v26, 16, 0);
        v5 = (__int64)result;
        *v9 = (__int64)result;
        v9[1] = (__int64)result;
        for (v9[2] = (__int64)&result[v27]; v8 != a3; v5 += 32) {
          v28 = *(_DWORD*)(v8 + 24);
          *(_BYTE*)v5 = 0;
          *(_DWORD*)(v5 + 24) = -1;
          if (v28 != -1) {
            v29 = GameData_1fd3e18[v28];
            v36 = v5;
            result = (__int64*)((__int64 (*)(__int64*, __int64))v29)(&v36, v8);
            *(_DWORD*)(v5 + 24) = v28;
          }
          v8 += 32;
        }
      LABEL_54:
        v9[1] = v5;
        return result;
      }
    }
    GameRoutine_919020_alt1();
  }
  v13 = result[1];
  v14 = v13 - v5;
  if (a4 <= (v13 - v5) >> 5) {
    if (a2 == a3) {
    LABEL_49:
      if (v5 != v13) {
        do {
          v34 = *(unsigned int*)(v13 - 8);
          v35 = v13 - 32;
          if ((_DWORD)v34 != -1) {
            result = (__int64*)((__int64 (*)(
                __int64*, __int64))GameData_1fd3de0[v34])(&v36, v13 - 32);
          }
          *(_DWORD*)(v13 - 8) = -1;
          v13 -= 32;
        } while (v35 != v5);
      }
      goto LABEL_54;
    }
    while (1) {
      v20 = *(unsigned int*)(v5 + 24);
      v21 = *(unsigned int*)(v8 + 24);
      if ((_DWORD)v20 != -1) {
        break;
      }
      if ((_DWORD)v21 != -1) {
        goto LABEL_20;
      }
    LABEL_21:
      v8 += 32;
      v5 += 32;
      if (v8 == a3) {
        v13 = v9[1];
        goto LABEL_49;
      }
    }
    if ((_DWORD)v21 == -1) {
      result = (__int64*)((
          __int64 (*)(__int64*, __int64))GameData_1fd3de0[v20])(&v36, v5);
      *(_DWORD*)(v5 + 24) = -1;
      goto LABEL_21;
    }
  LABEL_20:
    v19 = HandlePtr_Unknown14_ptr[v21];
    v36 = v5;
    result =
        (__int64*)((__int64 (*)(__int64*, __int64, __int64))v19)(&v36, v5, v8);
    goto LABEL_21;
  }
  v15 = a2 + v14;
  if (v13 == v5) {
    goto LABEL_42;
  }
  do {
    v17 = *(unsigned int*)(v5 + 24);
    v18 = *(unsigned int*)(v8 + 24);
    if ((_DWORD)v17 == -1) {
      if ((_DWORD)v18 == -1) {
        goto LABEL_13;
      }
    LABEL_12:
      v16 = HandlePtr_Unknown14_ptr[v18];
      v36 = v5;
      result = (__int64*)((__int64 (*)(__int64*, __int64, __int64))v16)(&v36,
                                                                        v5, v8);
      goto LABEL_13;
    }
    if ((_DWORD)v18 != -1) {
      goto LABEL_12;
    }
    result = (__int64*)((__int64 (*)(__int64*, __int64))GameData_1fd3de0[v17])(
        &v36, v5);
    *(_DWORD*)(v5 + 24) = -1;
  LABEL_13:
    v8 += 32;
    v5 += 32;
    v14 -= 32;
  } while (v14 != 0);
  v13 = v9[1];
LABEL_42:
  v30 = v13;
  if (v15 != a3) {
    v30 = v13;
    v31 = v13;
    do {
      *(_BYTE*)v31 = 0;
      *(_DWORD*)(v31 + 24) = -1;
      v32 = *(_DWORD*)(v15 + 24);
      if (v32 != -1) {
        v33 = GameData_1fd3e18[v32];
        v36 = v31;
        result = (__int64*)((__int64 (*)(__int64*, __int64))v33)(&v36, v15);
        *(_DWORD*)(v31 + 24) = v32;
      }
      v15 += 32;
      v31 += 32;
      v30 += 32;
    } while (v15 != a3);
  }
  v9[1] = v30;
  return result;
}

__int64 HandlePtr_Unknown21_cb39c0(__int64 result, _DWORD* a2, _DWORD* a3)
{
  _DWORD* v3;
  int v4;
  _DWORD* v5;
  int v6;
  char v7;

  v3 = *(_DWORD**)result;
  v4 = *(_DWORD*)(*(_QWORD*)result + 24LL);
  if (v4 != -1) {
    if (v4 == 0) {
      *a2 = *a3;
      return result;
    }
    v5 = a3;
    result = ((__int64 (*)(char*, _DWORD*))GameData_1fd3de0[v4])(&v7, v3);
    a3 = v5;
  }
  v3[6] = -1;
  v6 = *a3;
  v3[6] = 0;
  *v3 = v6;
  return result;
}

__int64 HandlePtr_Unknown22(__int64 result, _QWORD* a2, _QWORD* a3)
{
  __int64 v3;
  int v4;
  _QWORD* v5;
  char v6;

  v3 = *(_QWORD*)result;
  v4 = *(_DWORD*)(*(_QWORD*)result + 24LL);
  if (v4 != -1) {
    if (v4 == 1) {
      *a2 = *a3;
      return result;
    }
    v5 = a3;
    result = ((__int64 (*)(char*, __int64))GameData_1fd3de0[v4])(&v6, v3);
    a3 = v5;
  }
  *(_DWORD*)(v3 + 24) = -1;
  *(_QWORD*)v3 = *a3;
  *(_DWORD*)(v3 + 24) = 1;
  return result;
}

__int64 HandlePtr_Unknown23_cb3ac0(__int64 result, _DWORD* a2, _DWORD* a3)
{
  _DWORD* v3;
  int v4;
  _DWORD* v5;
  char v6;

  v3 = *(_DWORD**)result;
  v4 = *(_DWORD*)(*(_QWORD*)result + 24LL);
  if (v4 != -1) {
    if (v4 == 2) {
      *a2 = *a3;
      return result;
    }
    v5 = a3;
    result = ((__int64 (*)(char*, _DWORD*))GameData_1fd3de0[v4])(&v6, v3);
    a3 = v5;
  }
  v3[6] = -1;
  *v3 = *a3;
  v3[6] = 2;
  return result;
}

float HandlePtr_Unknown24_cb3b40(__int64* a1, _DWORD* a2, float* a3)
{
  __int64 v3;
  int v4;
  float result;
  float* v6;
  char v7;

  v3 = *a1;
  v4 = *(_DWORD*)(*a1 + 24);
  if (v4 != -1) {
    if (v4 == 3) {
      result = *a3;
      *a2 = *(_DWORD*)a3;
      return result;
    }
    v6 = a3;
    ((void (*)(char*, __int64))GameData_1fd3de0[v4])(&v7, v3);
    a3 = v6;
  }
  *(_DWORD*)(v3 + 24) = -1;
  result = *a3;
  *(_DWORD*)(v3 + 24) = 3;
  *(float*)v3 = result;
  return result;
}

void HandlePtr_Unknown25(__int64* a1, __int64 a2, _QWORD* a3)
{
  __int64 v3;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;

  v3 = *a1;
  v5 = *(_DWORD*)(*a1 + 24);
  if (v5 == -1) {
    goto LABEL_10;
  }
  if (v5 != 4) {
    ((void (*)(char*, __int64))GameData_1fd3de0[v5])(&v13, v3);
  LABEL_10:
    *(_DWORD*)(v3 + 24) = -1;
    v11 = a3[1];
    v12 = a3[2];
    *(_QWORD*)v3 = *a3;
    *(_QWORD*)(v3 + 8) = v11;
    *(_QWORD*)(v3 + 16) = v12;
    a3[1] = 0;
    a3[2] = 0;
    *a3 = 0;
    *(_DWORD*)(v3 + 24) = 4;
    return;
  }
  if ((*(_BYTE*)a2 & 1) != 0 && *(_QWORD*)(a2 + 16) != 0) {
    v6 = a2;
    v7 = *(_QWORD*)(a2 + 16);
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v7);
    a2 = v6;
  }
  v9 = *a3;
  v10 = a3[2];
  *(_QWORD*)(a2 + 8) = a3[1];
  *(_QWORD*)(a2 + 16) = v10;
  *(_QWORD*)a2 = v9;
  *(_WORD*)a3 = 0;
}

_QWORD** HandlePtr_Unknown23_d5be90(_QWORD** result, __int64* a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;

  v2 = *result;
  v3 = a2[2];
  v4 = *a2;
  v2[1] = a2[1];
  v2[2] = v3;
  *v2 = v4;
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[3] = 0;
  v2[3] = a2[3];
  v2[4] = a2[4];
  v2[5] = a2[5];
  a2[4] = 0;
  a2[5] = 0;
  a2[3] = 0;
  return result;
}

__int64* HandlePtr_Unknown24_d5bee0(__int64* result, __int64 a2)
{
  __int64 v3;
  __int64 v4;

  v3 = *result;
  v4 = *(_QWORD*)(a2 + 32);
  if (v4 != 0) {
    if (v4 == a2) {
      *(_QWORD*)(v3 + 32) = v3;
      return (__int64*)(*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 32) + 24LL))(
          *(_QWORD*)(a2 + 32));
    }
    else {
      *(_QWORD*)(v3 + 32) = v4;
      *(_QWORD*)(a2 + 32) = 0;
    }
  }
  else {
    *(_QWORD*)(v3 + 32) = 0;
  }
  return result;
}

_QWORD* HandlePtr_d5bf40(_QWORD* result, __int64 a2, __int64* a3)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  char* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;

  v4 = result;
  if ((*(_BYTE*)a3 & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(result, a3[2], a3[1]);
  }
  else {
    v5 = *a3;
    v6 = a3[2];
    result[1] = a3[1];
    result[2] = v6;
    *result = v5;
  }
  v4[4] = 0;
  v4[5] = 0;
  v4[3] = 0;
  v7 = (char*)a3[3];
  v8 = (char*)a3[4];
  v9 = v8 - v7;
  if (v8 != v7) {
    if (0xAAAAAAAAAAAAAAABLL * (v9 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_64aa00(result);
    }
    result = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v8 - v7, 16, 0);
    v10 = result;
    v4[3] = result;
    v4[4] = result;
    v4[5] = (char*)result + v9;
    do {
      if ((*v7 & 1) != 0) {
        result = (_QWORD*)fw_text_String_CopyTerminated(v10, *((_QWORD*)v7 + 2),
                                                        *((_QWORD*)v7 + 1));
      }
      else {
        v11 = *(_QWORD*)v7;
        v12 = *((_QWORD*)v7 + 2);
        v10[1] = *((_QWORD*)v7 + 1);
        v10[2] = v12;
        *v10 = v11;
      }
      v7 += 24;
      v10 += 3;
    } while (v7 != v8);
    v4[4] = v10;
  }
  return result;
}

__int64 HandlePtr_Unknown26(__int64* a1, __int64 a2)
{
  __int64 v2;
  __int64 result;

  v2 = *a1;
  result = *(_QWORD*)(a2 + 32);
  if (result != 0) {
    if (result == a2) {
      *(_QWORD*)(v2 + 32) = v2;
      return (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a2 + 32) + 24LL))(
          *(_QWORD*)(a2 + 32), v2);
    }
    else {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      *(_QWORD*)(v2 + 32) = result;
    }
  }
  else {
    *(_QWORD*)(v2 + 32) = 0;
  }
  return result;
}

#pragma GCC visibility pop
