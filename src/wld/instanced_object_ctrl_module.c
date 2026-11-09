#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19862d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN* GameData_212eab0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212df08;
extern int* GameData_212eaa8;
void __attribute__((noreturn)) GameRoutine_193bda0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 InstancedObjectCtrlModule_Unknown7(__int64 result);
__int64 InstancedObjectCtrlModule_193b8a0(__int64 result, __int64 a2);

__int64 InstancedObjectCtrlModule_Unknown7(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int8 explicit;
  int* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  __int64 v13;
  bool v14;
  bool v15;
  _BOOL4 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;

  v1 = *(_QWORD*)(result + 8);
  v2 = result;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v4 = GameData_212df08;
  if ((explicit & 1) == 0) {
    result = __cxa_guard_acquire(GameData_212df10);
    if ((_DWORD)result != 0) {
      *v4 = wld_Crc32(0, "ModelModule", 11);
      result = __cxa_guard_release(GameData_212df10);
    }
  }
  v5 = *(_QWORD*)(v1 + 512);
  v6 = v5;
  do {
    v7 = *(_DWORD*)(v6 - 16);
    v6 -= 16;
    v5 -= 16;
  } while (v7 != *v4);
  v8 = *(_QWORD*)(v2 + 48) - *(_QWORD*)(v2 + 40);
  if (v8 != 0) {
    v9 = 0;
    v10 = *(_QWORD*)(*(_QWORD*)(v5 + 8) + 32LL);
    v11 = 0xAAAAAAAAAAAAAAABLL * (v8 >> 3);
    do {
      v12 = (_QWORD*)(*(_QWORD*)(v2 + 40) + 24 * v9);
      v13 = v12[1];
      if ((*(_BYTE*)(v13 + 114) & 1) != 0 ||
          (*(float*)(v13 + 120) >= 1.0 ? (v14 = *(float*)(v13 + 124) < 1.0)
                                       : (v14 = true),
           v14 ||
               (*(float*)(v13 + 128) <= 0.0 ? (v15 = *(float*)(v13 + 132) < 1.0)
                                            : (v15 = true),
                v15))) {
        v22 = *(_QWORD*)(v10 + 160);
        v23 = (unsigned __int64)(int)v9 >> 6;
        v24 = *(_QWORD*)(v22 + 8 * v23);
        if ((v24 & (1LL << v9)) != 0) {
          *(_QWORD*)(v22 + 8 * v23) = v24 & ~(1LL << v9);
          *(_BYTE*)(v10 + 141) = 1;
        }
      }
      else {
        v16 = false;
        *(_BYTE*)(*(_QWORD*)(v13 + 24) + 32LL) = 0;
        v17 = *v12;
        if (*(_BYTE*)(*v12 + 289LL) == 1 && (*(_BYTE*)(v17 + 288) & 1) != 0) {
          if ((*(_BYTE*)(v17 + 300) & 0xFD) == 1) {
            v16 = false;
          }
          else {
            do {
              v17 = *(_QWORD*)(v17 + 736);
              v16 = v17 == 0;
            } while (v17 != 0 && *(_BYTE*)(v17 + 289) == 1 &&
                     *(_BYTE*)(v17 + 288) == 1 &&
                     (*(_BYTE*)(v17 + 300) & 0xFD) != 1);
          }
        }
        v18 = *(_QWORD*)(v10 + 160);
        v19 = (unsigned __int64)(int)v9 >> 6;
        v20 = 1LL << v9;
        v21 = *(_QWORD*)(v18 + 8 * v19);
        if (v16 != ((v21 & (1LL << v9)) != 0)) {
          if (v16) {
            *(_QWORD*)(v18 + 8 * v19) = v21 | v20;
          }
          else {
            *(_QWORD*)(v18 + 8 * v19) = v21 & ~v20;
            *(_BYTE*)(v10 + 141) = 1;
          }
        }
        result = GameRoutine_19862d0(v10, (unsigned int)v9, *v12 + 352LL,
                                     *v12 + 320LL, *v12 + 304LL);
      }
      ++v9;
    } while (v9 != v11);
  }
  return result;
}

__int64 InstancedObjectCtrlModule_193b8a0(__int64 result, __int64 a2)
{
  __int64 v2;
  unsigned __int8 explicit;
  int* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  unsigned __int8 v9;
  int* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;

  v2 = result;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v4 = GameData_212df08;
  if ((explicit & 1) == 0) {
    v28 = a2;
    result = __cxa_guard_acquire(GameData_212df10);
    a2 = v28;
    if ((_DWORD)result != 0) {
      *v4 = wld_Crc32(0, "ModelModule", 11);
      result = __cxa_guard_release(GameData_212df10);
      a2 = v28;
    }
  }
  v5 = *(_QWORD*)(a2 + 512);
  v6 = v5;
  while (v6 != *(_QWORD*)(a2 + 504)) {
    v7 = *(_DWORD*)(v6 - 16);
    v6 -= 16;
    v5 -= 16;
    if (v7 == *v4) {
      if (*(_QWORD*)(a2 + 512) != v5) {
        v8 = *(_QWORD*)(v5 + 8);
        goto LABEL_8;
      }
      break;
    }
  }
  v8 = 0;

LABEL_8:
  v9 = atomic_load_explicit((atomic_uchar* volatile)GameData_212eab0,
                            memory_order_acquire);
  v10 = GameData_212eaa8;
  if ((v9 & 1) == 0) {
    v29 = a2;
    result = __cxa_guard_acquire(GameData_212eab0);
    a2 = v29;
    if ((_DWORD)result != 0) {
      *v10 = wld_Crc32(0, "LODModule", 9);
      result = __cxa_guard_release(GameData_212eab0);
      a2 = v29;
    }
  }
  v11 = *(_QWORD*)(a2 + 512);
  v12 = v11;
  while (v12 != *(_QWORD*)(a2 + 504)) {
    v13 = *(_DWORD*)(v12 - 16);
    v12 -= 16;
    v11 -= 16;
    if (v13 == *v10) {
      if (*(_QWORD*)(a2 + 512) != v11) {
        v14 = *(_QWORD*)(v11 + 8);
        goto LABEL_15;
      }
      break;
    }
  }
  v14 = 0;

LABEL_15:
  v16 = *(_QWORD**)(v2 + 48);
  v15 = *(_QWORD*)(v2 + 56);
  if ((unsigned __int64)v16 >= v15) {
    v18 = *(_QWORD*)(v2 + 40);
    v19 = (char*)v16 - v18;
    v20 = 1 - 0x5555555555555555LL * (((__int64)v16 - v18) >> 3);
    if (v20 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_193bda0();
    }
    v21 = fw_memory_g_heap_manager_ptr;
    v22 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v15 - v18) >> 3);
    if (2 * v22 > v20) {
      v20 = 2 * v22;
    }
    if (v22 >= 0x555555555555555LL) {
      v23 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v23 = v20;
    }
    if (v23 != 0) {
      if (v23 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210(result);
      }
      v24 = a2;
      v25 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v23, 16, 0);
      a2 = v24;
    }
    else {
      v25 = 0;
    }
    v26 = &v19[v25];
    *(_QWORD*)v26 = a2;
    *((_QWORD*)v26 + 1) = v8;
    *((_QWORD*)v26 + 2) = v14;
    v17 = (__int64)&v19[v25 + 24];
    result = memcpy(v25, v18, v19);
    *(_QWORD*)(v2 + 40) = v25;
    *(_QWORD*)(v2 + 48) = v17;
    *(_QWORD*)(v2 + 56) = v25 + 24 * v23;
    if (v18 != 0) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) == 0) {
        v27 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v27);
    }
  }
  else {
    *v16 = a2;
    v16[1] = v8;
    v17 = (__int64)(v16 + 3);
    v16[2] = v14;
  }
  *(_QWORD*)(v2 + 48) = v17;
  if (v14 != 0) {
    *(_BYTE*)(v2 + 64) = 1;
  }
  return result;
}

#pragma GCC visibility pop
