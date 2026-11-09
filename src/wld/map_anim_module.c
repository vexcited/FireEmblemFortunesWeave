#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 AnimCtrlModule_a77840(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_98f140(_QWORD, _QWORD);
__int64 GameRoutine_a76440(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a8c0c0(_QWORD);
__int64 GameRoutine_be3840(__int64 result, __int64);
__int64 GameRoutine_c09420(__int64 result, int, long double);
__int64 GameRoutine_c09920(__int64, int);
__int64 GameRoutine_c0b080(_QWORD, _QWORD);
__int64 GameRoutine_c0b220(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_22034c0;
extern _UNKNOWN* GameData_212df28;
extern _UNKNOWN* GameData_212ea90;
extern _UNKNOWN* GameData_212eaa0;
extern __int64 (*wld_MapAnimModule_vtable[])();
extern __int64 GameData_212c638;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_22034b8;
extern int* GameData_212ea88;
extern int* GameData_212ea98;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_98f290(_QWORD);
_QWORD* MapAnimModule_Destructor(_QWORD* result);
__int64 MapAnimModule_c086a0(__int64 a1, __int64 a2, __int64 a3,
                             unsigned int a4);
_QWORD* MapAnimModule_c08ee0(__int64 a1, __int64 a2, __int64 a3, int a4);
__int64 MapAnimModule_c09040(__int64 a1, __int64 a2, __int64 a3);
__int64 MapAnimModule_c09200(__int64 result, int a2, float a3);
__int64 MapAnimModule_Unknown5(__int64 result);
__int64 MapAnimModule_c09f40(__int64 a1, _QWORD* a2);
__int64 MapAnimModule_c0a840(__int64 a1);

_QWORD* MapAnimModule_Destructor(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 i;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* j;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v1 = (_QWORD*)result[15];
  v2 = result;
  *result = wld_MapAnimModule_vtable;
  for (i = fw_memory_g_heap_manager_ptr; v1 != nullptr;
       result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)i + v4)) {
    v5 = v1;
    v1 = (_QWORD*)*v1;
    if ((v5[2] & 1) != 0 && v5[4] != 0) {
      if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
        v6 = 128;
      }
      else {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)i + v6);
    }
    if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
      v4 = 128;
    }
    else {
      v4 = 56;
    }
  }
  v7 = v2[13];
  v2[13] = 0;
  if (v7 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)i + 200LL) == 0) {
      v8 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)i + v8);
  }
  for (j = (_QWORD*)v2[10]; j != nullptr;
       result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)i + v10)) {
    v11 = j;
    j = (_QWORD*)*j;
    if ((v11[5] & 1) != 0 && v11[7] != 0) {
      if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
        v12 = 128;
      }
      else {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)i + v12);
    }
    if ((v11[2] & 1) != 0 && v11[4] != 0) {
      if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
        v13 = 128;
      }
      else {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)i + v13);
    }
    if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
      v10 = 128;
    }
    else {
      v10 = 56;
    }
  }
  v14 = v2[8];
  v2[8] = 0;
  if (v14 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)i + 200LL) == 0) {
      v15 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)i + v15);
  }
  if ((v2[4] & 1) != 0 && v2[6] != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)i + 200LL) == 0) {
      v16 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)i + v16);
  }
  return result;
}

__int64 MapAnimModule_c086a0(__int64 a1, __int64 a2, __int64 a3,
                             unsigned int a4)
{
  unsigned __int64 v4;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 result;
  __int64** v15;
  __int64* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64* v24;
  __int64 v25;
  unsigned __int8 explicit;
  int* v27;
  __int64 v28;
  __int64 i;
  int v30;

  if (*(_BYTE*)(a1 + 21) != 1) {
    return 0;
  }
  v4 = *(_QWORD*)(a1 + 72);
  if (v4 == 0 || *(_QWORD*)(a1 + 88) == 0) {
    return 0;
  }
  v10 = std___1___hash_memory(a2, a3);
  v11 = v4 - 1;
  v12 = v10;
  if ((v4 & (v4 - 1)) != 0) {
    v13 = v10;
    if (v10 >= v4) {
      v13 = v10 % v4;
    }
  }
  else {
    v13 = v10 & v11;
  }
  v15 = *(__int64***)(*(_QWORD*)(a1 + 64) + 8 * v13);
  if (v15 == nullptr) {
    return 0;
  }
  v16 = *v15;
  if (*v15 == nullptr) {
    return 0;
  }
  if ((v4 & v11) == 0) {
    while (1) {
      v21 = v16[1];
      if (v21 == v12) {
        v22 = *((unsigned __int8*)v16 + 16);
        v23 = v16[3];
        if ((v22 & 1) == 0) {
          v23 = v22 >> 1;
        }
        if (a3 == v23) {
          v24 = (v22 & 1) != 0 ? (__int64*)v16[4] : (__int64*)((char*)v16 + 17);
          if ((unsigned int)memcmp(a2, v24, a3) == 0) {
            goto LABEL_38;
          }
        }
      }
      else if ((v21 & v11) != v13) {
        return 0;
      }
      v16 = (__int64*)*v16;
      result = 0;
      if (v16 == nullptr) {
        return result;
      }
    }
  }
  while (1) {
    v17 = v16[1];
    if (v17 == v12) {
      break;
    }
    if (v17 >= v4) {
      v17 %= v4;
    }
    if (v17 != v13) {
      return 0;
    }
  LABEL_16:
    v16 = (__int64*)*v16;
    if (v16 == nullptr) {
      return 0;
    }
  }
  v18 = *((unsigned __int8*)v16 + 16);
  v19 = v16[3];
  if ((v18 & 1) == 0) {
    v19 = v18 >> 1;
  }
  if (a3 != v19) {
    goto LABEL_16;
  }
  v20 = (v18 & 1) != 0 ? (__int64*)v16[4] : (__int64*)((char*)v16 + 17);
  if ((unsigned int)memcmp(a2, v20, a3) != 0) {
    goto LABEL_16;
  }

LABEL_38:
  if (v16[8] != 0 || v16[9] != 0 || v16[10] != 0 || v16[11] != 0 ||
      v16[12] != 0) {
    v25 = *(_QWORD*)(a1 + 8);
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ea90,
                                    memory_order_acquire);
    v27 = GameData_212ea88;
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire(GameData_212ea90) != 0) {
      *v27 = wld_Crc32(0, "AnimCtrlModule", 14);
      __cxa_guard_release(GameData_212ea90);
    }
    v28 = *(_QWORD*)(v25 + 512);
    for (i = v28; i != *(_QWORD*)(v25 + 504); i -= 16) {
      v30 = *(_DWORD*)(i - 16);
      v28 -= 16;
      if (v30 == *v27) {
        if (*(_QWORD*)(v25 + 512) == v28) {
          return 0;
        }
        result = *(_QWORD*)(v28 + 8);
        if (result != 0) {
          AnimCtrlModule_a77840(result, v16 + 5, a4);
          return 1;
        }
        return result;
      }
    }
  }
  return 0;
}

_QWORD* MapAnimModule_c08ee0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4;
  _QWORD* result;
  bool v10;
  __int64 v11;
  __int64 v12;
  __int64 i;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v4 = *(unsigned __int8*)(a1 + 21);
  v18 = a2;
  v19 = a3;
  if (v4 == 1) {
    result = (_QWORD*)GameRoutine_c0b080(a1 + 64, &v18);
    if (result == nullptr) {
      return result;
    }
    v10 =
        result[8] == 0 && result[9] == 0 && result[10] == 0 && result[11] == 0;
    if (!v10 || result[12] != 0) {
      v11 = *(_QWORD*)(a1 + 8);
      if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212ea90,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_22034c0) != 0) {
        GameData_22034b8 = wld_Crc32(0, "AnimCtrlModule", 14);
        __cxa_guard_release(&GameData_22034c0);
      }
      v12 = *(_QWORD*)(v11 + 512);
      for (i = v12; i != *(_QWORD*)(v11 + 504); i -= 16) {
        v14 = *(_DWORD*)(i - 16);
        v12 -= 16;
        if (v14 == GameData_22034b8) {
          if (*(_QWORD*)(v11 + 512) != v12) {
            v15 = *(_QWORD*)(v12 + 8);
            if (v15 != 0) {
              v16 = *(_QWORD*)(*(_QWORD*)(v15 + 72) + 104LL * a4);
              if (v16 != 0) {
                v17 = v19;
                if (v17 == strlen(v16 + 104)) {
                  return (_QWORD*)((unsigned int)memcmp(v18, v16 + 104, v17) ==
                                   0);
                }
              }
            }
          }
          return nullptr;
        }
      }
    }
  }
  return nullptr;
}

__int64 MapAnimModule_c09040(__int64 a1, __int64 a2, __int64 a3)
{
  int v3;
  __int64 result;
  __int64 v6;
  unsigned __int8 explicit;
  int* v8;
  __int64 v9;
  __int64 i;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  unsigned __int64 v18;
  char* v19;
  char v20;
  unsigned __int64 v21;
  char* v22;
  char* v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  char* v28;
  __int64 v29;
  __int64 v30;

  v3 = *(unsigned __int8*)(a1 + 22);
  v29 = a2;
  v30 = a3;
  if (v3 == 1) {
    result = GameRoutine_c0b220(a1 + 104, &v29);
    if (result == 0) {
      return result;
    }
    v6 = *(_QWORD*)(a1 + 8);
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212eaa0,
                                    memory_order_acquire);
    v8 = GameData_212ea98;
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire(GameData_212eaa0) != 0) {
      *v8 = wld_Crc32(0, "MaterialAnimModule", 18);
      __cxa_guard_release(GameData_212eaa0);
    }
    v9 = *(_QWORD*)(v6 + 512);
    for (i = v9; i != *(_QWORD*)(v6 + 504); i -= 16) {
      v11 = *(_DWORD*)(i - 16);
      v9 -= 16;
      if (v11 == *v8) {
        if (*(_QWORD*)(v6 + 512) == v9) {
          return 0;
        }
        v12 = *(_QWORD*)(v9 + 8);
        if (v12 == 0) {
          return 0;
        }
        v14 = v29;
        v13 = v30;
        v15 = *(unsigned int*)(v12 + 72);
        if ((v15 & 0x80000000) != 0) {
          LOWORD(v26) = 0;
        }
        else {
          v16 = (__int64*)(*(_QWORD*)(v12 + 24) + (v15 << 6));
          if ((*(_BYTE*)v16 & 1) != 0) {
            fw_text_String_CopyTerminated(&v26, v16[2], v16[1]);
          }
          else {
            v17 = *v16;
            v18 = v16[1];
            v19 = (char*)v16[2];
            v27 = v18;
            v28 = v19;
            v26 = v17;
          }
        }
        v20 = v26;
        v21 = v27;
        v22 = v28;
        if ((v26 & 1) == 0) {
          v21 = (unsigned __int64)(unsigned __int8)v26 >> 1;
        }
        if (v13 == v21) {
          if ((v26 & 1) != 0) {
            v23 = v28;
          }
          else {
            v23 = (char*)&v26 + 1;
          }
          result = (unsigned int)memcmp(v14, v23, v13) == 0;
        }
        else {
          result = 0;
        }
        if ((v20 & 1) != 0 && v22 != nullptr) {
          v24 = result;
          v25 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v25 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v25);
          return v24;
        }
        return result;
      }
    }
  }
  return 0;
}

__int64 MapAnimModule_c09200(__int64 result, int a2, float a3)
{
  __int64 v3;
  unsigned __int8 explicit;
  int* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  unsigned __int8 v14;
  int* v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 i;
  int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  float v28;
  float v29;

  if (*(_BYTE*)(result + 21) == 1) {
    v3 = *(_QWORD*)(result + 8);
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ea90,
                                    memory_order_acquire);
    v5 = GameData_212ea88;
    if ((explicit & 1) == 0) {
      v26 = result;
      v28 = a3;
      v25 = a2;
      v24 = v3;
      v23 = __cxa_guard_acquire(GameData_212ea90);
      v5 = GameData_212ea88;
      a3 = v28;
      v3 = v24;
      a2 = v25;
      result = v26;
      if (v23 != 0) {
        *GameData_212ea88 = wld_Crc32(0, "AnimCtrlModule", 14);
        __cxa_guard_release(GameData_212ea90);
        v5 = GameData_212ea88;
        a3 = v28;
        v3 = v24;
        a2 = v25;
        result = v26;
      }
    }
    v6 = *v5;
    v8 = *(_QWORD*)(v3 + 504);
    v7 = *(_QWORD*)(v3 + 512);
    v9 = v7;
    v10 = v7;
    while (v10 != v8) {
      v11 = *(_DWORD*)(v10 - 16);
      v10 -= 16;
      v9 -= 16;
      if (v11 == v6) {
        if (v7 != v9) {
          v12 = *(_QWORD*)(v9 + 8);
          if (v12 != 0) {
            *(float*)(*(_QWORD*)(v12 + 72) + 104LL * a2 + 8) = a3;
          }
        }
        break;
      }
    }
  }
  if (a2 == 0 && (*(_BYTE*)(result + 22) & 1) != 0) {
    v13 = *(_QWORD*)(result + 8);
    v14 = atomic_load_explicit((atomic_uchar* volatile)GameData_212eaa0,
                               memory_order_acquire);
    v15 = GameData_212ea98;
    if ((v14 & 1) == 0) {
      v29 = a3;
      v27 = v13;
      result = __cxa_guard_acquire(GameData_212eaa0);
      v15 = GameData_212ea98;
      a3 = v29;
      v13 = v27;
      if ((_DWORD)result != 0) {
        *GameData_212ea98 = wld_Crc32(0, "MaterialAnimModule", 18);
        result = __cxa_guard_release(GameData_212eaa0);
        v15 = GameData_212ea98;
        a3 = v29;
        v13 = v27;
      }
    }
    v16 = *v15;
    v18 = *(_QWORD*)(v13 + 504);
    v17 = *(_QWORD*)(v13 + 512);
    v19 = v17;
    for (i = v17; i != v18; i -= 16) {
      v21 = *(_DWORD*)(i - 16);
      v19 -= 16;
      if (v21 == v16) {
        if (v17 != v19) {
          v22 = *(_QWORD*)(v19 + 8);
          if (v22 != 0) {
            if ((*(_BYTE*)(v22 + 76) & 1) == 0 &&
                ((*(_DWORD*)(v22 + 72) & 0x80000000) == 0 ||
                 (*(_DWORD*)(v22 + 104) & 0x80000000) == 0)) {
              *(_BYTE*)(v22 + 76) = 1;
            }
            *(float*)(v22 + 272) = a3;
          }
        }
        return result;
      }
    }
  }
  return result;
}

__int64 MapAnimModule_Unknown5(__int64 result)
{
  __int64 v1;
  long double v2;
  __int64 v3;
  __int64 v4;

  if (*(_BYTE*)(result + 22) == 1) {
    v1 = result;
    if ((*(_BYTE*)(result + 59) & 1) != 0 &&
        (*(_BYTE*)(result + 56) & 1) != 0) {
      result = GameRoutine_c09920(result, 0);
      if ((result & 1) != 0) {
        v3 = *(
            _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                                8LL) +
                     40LL);
        v4 = 296;
        if ((*(_BYTE*)(v3 + 352) & 1 | ((*(_BYTE*)(v3 + 344) & 1) == 0)) != 0) {
          v4 = 248;
        }
        *(float*)&v2 =
            (float)((float)((float)((float)*(int*)(v3 + v4 + 40) / 60.0) +
                            (float)*(int*)(v3 + v4 + 36)) +
                    (float)((float)*(int*)(v3 + v4 + 44) / 3600.0)) *
            100.0;
        return GameRoutine_c09420(v1, 0, v2);
      }
    }
  }
  return result;
}

__int64 MapAnimModule_c09f40(__int64 a1, _QWORD* a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int8 explicit;
  int* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  _BYTE* v16;
  _BYTE* v17;
  bool v18;
  __int64* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  int v48;
  __int64 v49;

  nn_os_LockMutex(GameData_212df28);
  v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      400, 16, 0);
  v6 = GameRoutine_a76440(v5, a1, *a2, 4);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ea90,
                                  memory_order_acquire);
  v8 = GameData_212ea88;
  if ((explicit & 1) == 0) {
    v6 = __cxa_guard_acquire(GameData_212ea90);
    if ((_DWORD)v6 != 0) {
      *v8 = wld_Crc32(0, "AnimCtrlModule", 14);
      v6 = __cxa_guard_release(GameData_212ea90);
    }
  }
  v9 = *v8;
  v10 = *(_QWORD*)(a1 + 504);
  v11 = *(_QWORD*)(a1 + 512);
  v12 = v11;
  v48 = v9;
  v49 = v5;
  while (v12 != v10) {
    v13 = *(_DWORD*)(v12 - 16);
    v12 -= 16;
    if (v13 == v9) {
      if ((*(_BYTE*)(v5 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v10 == v11 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v10) <= 0x6F) {
    v14 = fw_memory_HeapManager_Allocate(*v4, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v14;
    *(_QWORD*)(a1 + 512) = v14;
    *(_QWORD*)(a1 + 520) = v14 + 112;
    if (v11 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*v4 + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(*v4 + v15);
    }
  }
  v6 = GameRoutine_98f140(a1 + 504, &v48);
  if ((*(_BYTE*)(v5 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v5 + 16) = 1;
    *(_BYTE*)(v5 + 17) &= ~2u;
    *(_BYTE*)(v5 + 18) &= ~2u;
    *(_BYTE*)(v5 + 19) &= ~2u;
    *(_BYTE*)(v5 + 20) &= ~2u;
    v16 = *(_BYTE**)(v5 + 8);
    v16[632] = 0;
    v16[664] = 0;
    v16[696] = 0;
    v16[728] = 0;
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 64LL))(v5);
    v17 = *(_BYTE**)(v5 + 8);
    v18 = v17[300] == 3 && v17[301] == 3;
    if (v18 || v17[302] == 1) {
      v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 72LL))(v5);
    }
  }

LABEL_20:
  v19 = *(__int64**)(a1 + 536);
  v20 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v19 >= v20) {
    v22 = *(_QWORD*)(a1 + 528);
    v23 = (char*)v19 - v22;
    v24 = ((__int64)v19 - v22) >> 3;
    v25 = v24 + 1;
    if ((unsigned __int64)(v24 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v26 = v20 - v22;
    if (v26 >> 2 > v25) {
      v25 = v26 >> 2;
    }
    if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFF8LL) {
      v27 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v27 = v25;
    }
    if (v27 != 0) {
      if (v27 >> 61 != 0) {
        goto LABEL_56;
      }
      v28 = fw_memory_HeapManager_Allocate(*v4, 8 * v27, 16, 0);
    }
    else {
      v28 = 0;
    }
    v29 = v28 + 8 * v27;
    v30 = (char*)v19 - v22;
    v31 = (__int64)&v23[v28 + -8 * v24];
    *(_QWORD*)&v23[v28] = v5;
    v21 = (__int64)&v23[v28 + 8];
    v6 = memcpy(v31, v22, v30);
    *(_QWORD*)(a1 + 528) = v31;
    *(_QWORD*)(a1 + 536) = v21;
    *(_QWORD*)(a1 + 544) = v29;
    if (v22 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*v4 + 200LL) == 0) {
        v32 = 56;
      }
      v6 = nn_mem_StandardAllocator_Free(*v4 + v32);
    }
  }
  else {
    *v19 = v5;
    v21 = (__int64)(v19 + 1);
  }
  *(_QWORD*)(a1 + 536) = v21;
  v33 = *(__int64**)(a1 + 560);
  v34 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v33 < v34) {
    *v33 = v5;
    v35 = (__int64)(v33 + 1);
    goto LABEL_52;
  }
  v36 = *(_QWORD*)(a1 + 552);
  v37 = (char*)v33 - v36;
  v38 = ((__int64)v33 - v36) >> 3;
  v39 = v38 + 1;
  if ((unsigned __int64)(v38 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290(v6);
  }
  v40 = v34 - v36;
  if (v40 >> 2 > v39) {
    v39 = v40 >> 2;
  }
  if ((unsigned __int64)v40 >= 0x7FFFFFFFFFFFFFF8LL) {
    v41 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v41 = v39;
  }
  if (v41 != 0) {
    if (v41 >> 61 == 0) {
      v42 = fw_memory_HeapManager_Allocate(*v4, 8 * v41, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210(v6);
  }
  v42 = 0;

LABEL_48:
  v43 = v42 + 8 * v41;
  v44 = (char*)v33 - v36;
  v45 = (__int64)&v37[v42 + -8 * v38];
  *(_QWORD*)&v37[v42] = v5;
  v35 = (__int64)&v37[v42 + 8];
  memcpy(v45, v36, v44);
  *(_QWORD*)(a1 + 552) = v45;
  *(_QWORD*)(a1 + 560) = v35;
  *(_QWORD*)(a1 + 568) = v43;
  if (v36 != 0) {
    v46 = 128;
    if (*(_QWORD*)(*v4 + 200LL) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v46);
  }

LABEL_52:
  *(_QWORD*)(a1 + 560) = v35;
  GameRoutine_a8c0c0(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex(GameData_212df28);
  return v5;
}

__int64 MapAnimModule_c0a840(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  unsigned __int8 explicit;
  int* v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  _BYTE* v14;
  _BYTE* v15;
  bool v16;
  __int64* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  char* v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  char* v42;
  __int64 v43;
  __int64 v44;
  int v46;
  __int64 v47;

  nn_os_LockMutex(GameData_212df28);
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      280, 16, 0);
  v4 = GameRoutine_be3840(v3, a1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212eaa0,
                                  memory_order_acquire);
  v6 = GameData_212ea98;
  if ((explicit & 1) == 0) {
    v4 = __cxa_guard_acquire(GameData_212eaa0);
    if ((_DWORD)v4 != 0) {
      *v6 = wld_Crc32(0, "MaterialAnimModule", 18);
      v4 = __cxa_guard_release(GameData_212eaa0);
    }
  }
  v7 = *v6;
  v8 = *(_QWORD*)(a1 + 504);
  v9 = *(_QWORD*)(a1 + 512);
  v10 = v9;
  v46 = v7;
  v47 = v3;
  while (v10 != v8) {
    v11 = *(_DWORD*)(v10 - 16);
    v10 -= 16;
    if (v11 == v7) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v8 == v9 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v8) <= 0x6F) {
    v12 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v12;
    *(_QWORD*)(a1 + 512) = v12;
    *(_QWORD*)(a1 + 520) = v12 + 112;
    if (v9 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v13);
    }
  }
  v4 = GameRoutine_98f140(a1 + 504, &v46);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v14 = *(_BYTE**)(v3 + 8);
    v14[632] = 0;
    v14[664] = 0;
    v14[696] = 0;
    v14[728] = 0;
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v15 = *(_BYTE**)(v3 + 8);
    v16 = v15[300] == 3 && v15[301] == 3;
    if (v16 || v15[302] == 1) {
      v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }

LABEL_20:
  v17 = *(__int64**)(a1 + 536);
  v18 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v17 >= v18) {
    v20 = *(_QWORD*)(a1 + 528);
    v21 = (char*)v17 - v20;
    v22 = ((__int64)v17 - v20) >> 3;
    v23 = v22 + 1;
    if ((unsigned __int64)(v22 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v24 = v18 - v20;
    if (v24 >> 2 > v23) {
      v23 = v24 >> 2;
    }
    if ((unsigned __int64)v24 >= 0x7FFFFFFFFFFFFFF8LL) {
      v25 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v25 = v23;
    }
    if (v25 != 0) {
      if (v25 >> 61 != 0) {
        goto LABEL_56;
      }
      v26 = fw_memory_HeapManager_Allocate(*v2, 8 * v25, 16, 0);
    }
    else {
      v26 = 0;
    }
    v27 = v26 + 8 * v25;
    v28 = (char*)v17 - v20;
    v29 = (__int64)&v21[v26 + -8 * v22];
    *(_QWORD*)&v21[v26] = v3;
    v19 = (__int64)&v21[v26 + 8];
    v4 = memcpy(v29, v20, v28);
    *(_QWORD*)(a1 + 528) = v29;
    *(_QWORD*)(a1 + 536) = v19;
    *(_QWORD*)(a1 + 544) = v27;
    if (v20 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v30 = 56;
      }
      v4 = nn_mem_StandardAllocator_Free(*v2 + v30);
    }
  }
  else {
    *v17 = v3;
    v19 = (__int64)(v17 + 1);
  }
  *(_QWORD*)(a1 + 536) = v19;
  v31 = *(__int64**)(a1 + 560);
  v32 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v31 < v32) {
    *v31 = v3;
    v33 = (__int64)(v31 + 1);
    goto LABEL_52;
  }
  v34 = *(_QWORD*)(a1 + 552);
  v35 = (char*)v31 - v34;
  v36 = ((__int64)v31 - v34) >> 3;
  v37 = v36 + 1;
  if ((unsigned __int64)(v36 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290(v4);
  }
  v38 = v32 - v34;
  if (v38 >> 2 > v37) {
    v37 = v38 >> 2;
  }
  if ((unsigned __int64)v38 >= 0x7FFFFFFFFFFFFFF8LL) {
    v39 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v39 = v37;
  }
  if (v39 != 0) {
    if (v39 >> 61 == 0) {
      v40 = fw_memory_HeapManager_Allocate(*v2, 8 * v39, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210(v4);
  }
  v40 = 0;

LABEL_48:
  v41 = v40 + 8 * v39;
  v42 = (char*)v31 - v34;
  v43 = (__int64)&v35[v40 + -8 * v36];
  *(_QWORD*)&v35[v40] = v3;
  v33 = (__int64)&v35[v40 + 8];
  memcpy(v43, v34, v42);
  *(_QWORD*)(a1 + 552) = v43;
  *(_QWORD*)(a1 + 560) = v33;
  *(_QWORD*)(a1 + 568) = v41;
  if (v34 != 0) {
    v44 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v44);
  }

LABEL_52:
  *(_QWORD*)(a1 + 560) = v33;
  GameRoutine_a8c0c0(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex(GameData_212df28);
  return v3;
}

#pragma GCC visibility pop
