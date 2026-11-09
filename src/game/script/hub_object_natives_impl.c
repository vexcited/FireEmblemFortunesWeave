#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Config_bc7520(_QWORD, _QWORD);
__int64 GameRoutine_60a060(_QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_dbc2c0(_QWORD*, __int64);
__int64 GameRoutine_e02a40(void);
__int64 MapAnimModule_c08540(_QWORD, _QWORD, _QWORD, _QWORD, double);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD, long double, long double);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD, float, float);
extern _UNKNOWN* GameData_212d308;
extern __int64 (*GameData_1fe20f0[])();
extern __int64 (*game_hub_ObjectControllerDone_vtable[])();
extern __int64 GameData_21c9608;
extern __int64 eft_g_effectSystem;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212d300;
__int64 HubObjectNatives_dfcc60(__int64 a1, __int64 a2, __int64 a3);
__int64 HubObjectNatives_dfd9e0(__int64 a1);
_QWORD* HubObjectNatives_dfdb40(_QWORD* a1, _QWORD* a2);

__int64 HubObjectNatives_dfcc60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  long double v7;
  long double v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  atomic_uchar* v12;
  int* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;

  result = GameRoutine_60a060(a1 + 776);
  v9 = *(_QWORD*)(a1 + 800);
  v10 = *(_QWORD*)(v9 + 8);
  v11 = *(_QWORD*)(v9 + 16);
  if (v10 != v11) {
    v12 = (atomic_uchar*)GameData_212d308;
    v13 = GameData_212d300;
    do {
      v14 = *(_QWORD*)(v10 + 8);
      if ((atomic_load_explicit(v12, memory_order_acquire) & 1) == 0) {
        v20 = v14;
        result = __cxa_guard_acquire(v12, v7, v8);
        v14 = v20;
        if ((_DWORD)result != 0) {
          *v13 = wld_Crc32(0, "MapAnimModule", 13, *(float*)&v7, *(float*)&v8);
          result = __cxa_guard_release(v12);
          v14 = v20;
        }
      }
      v16 = *(_QWORD*)(v14 + 504);
      v15 = *(_QWORD*)(v14 + 512);
      v17 = v15;
      v18 = v15;
      while (v18 != v16) {
        v19 = *(_DWORD*)(v18 - 16);
        v18 -= 16;
        v17 -= 16;
        if (v19 == *v13) {
          if (v15 != v17) {
            result = *(_QWORD*)(v17 + 8);
            if (result != 0) {
              result = MapAnimModule_c08540(result, a2, a3, 0, 0.0);
            }
          }
          break;
        }
      }
      v10 += 32;
    } while (v10 != v11);
  }
  return result;
}

__int64 HubObjectNatives_dfd9e0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  *(_BYTE*)(a1 + 947) = 1;
  v2 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 48, 16, 0);
  *(_QWORD*)(v2 + 8) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_WORD*)(v2 + 40) = 0;
  v3 = v2;
  *(_QWORD*)(v2 + 32) = a1;
  *(_QWORD*)v2 = GameData_1fe20f0;
  *(_QWORD*)(v2 + 24) = game_hub_ObjectControllerDone_vtable;
  v4 = v2 + 24;
  GameRoutine_dbc2c0((_QWORD*)GameData_21c9608, a1);
  *(_QWORD*)(a1 + 736) = v4;
  v5 = *(_QWORD*)(a1 + 744);
  *(_QWORD*)(a1 + 744) = v3;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
    v6 = *(_QWORD*)(a1 + 800);
    if (v6 != 0) {
    LABEL_4:
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
      if ((result & 1) != 0) {
        return result;
      }
    }
  }
  else {
    v6 = *(_QWORD*)(a1 + 800);
    if (v6 != 0) {
      goto LABEL_4;
    }
  }
  v8 = *(_QWORD*)(a1 + 824);
  v9 = *(_QWORD*)(a1 + 832);
  if (v8 == v9) {
  LABEL_13:
    result = *(_QWORD*)(a1 + 736);
    if (result != 0 && (*(_BYTE*)(result + 16) & 1) == 0) {
      return GameRoutine_e02a40();
    }
  }
  else {
    while (1) {
      v10 = (*(_BYTE*)v8 & 1) != 0 ? *(_QWORD*)(v8 + 16) : v8 + 1;
      result = Config_bc7520(eft_g_effectSystem, v10);
      if ((result & 1) == 0) {
        break;
      }
      v8 += 24;
      if (v8 == v9) {
        goto LABEL_13;
      }
    }
  }
  return result;
}

_QWORD* HubObjectNatives_dfdb40(_QWORD* a1, _QWORD* a2)
{
  _QWORD* result;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  unsigned __int64 v9;
  char* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;

  result = a1 + 109;
  if (result != a2) {
    v4 = *(unsigned __int8*)a2;
    if ((*(_BYTE*)result & 1) != 0) {
      v7 = a2[1];
      v8 = (v4 & 1) == 0;
      v9 = v4 >> 1;
      if (v8) {
        v10 = (char*)a2 + 1;
      }
      else {
        v10 = (char*)a2[2];
      }
      if (v8) {
        v11 = v9;
      }
      else {
        v11 = v7;
      }
      result = (_QWORD*)SpineModel_64dde0(result, v10, v11);
    }
    else if ((v4 & 1) != 0) {
      result = (_QWORD*)GameRoutine_64df20(result, a2[2], a2[1]);
    }
    else {
      v5 = *a2;
      v6 = a2[2];
      result[1] = a2[1];
      result[2] = v6;
      *result = v5;
    }
  }
  v12 = a1[113];
  v13 = a1[112];
  if (v13 != v12) {
    v14 = a1[113];
    v15 = fw_memory_g_heap_manager_ptr;
    do {
      v16 = *(_BYTE*)(v14 - 24);
      v14 -= 24;
      if ((v16 & 1) != 0 && *(_QWORD*)(v12 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v17);
      }
      v12 = v14;
    } while (v14 != v13);
  }
  a1[113] = v13;
  return result;
}

#pragma GCC visibility pop
