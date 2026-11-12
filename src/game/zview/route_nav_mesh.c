#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_fe6920(void);
__int64 GameRoutine_fe7660(_QWORD);
__int64 GameRoutine_fe7820(_QWORD, _QWORD);
__int64 GameRoutine_fe7900(float);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__n128 GameRoutine_fe6920_alt1(_QWORD*,
                               __n128 result) __asm__("GameRoutine_fe6920");
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1ffe6f8[])();
extern __int64 (*game_zview_RouteNavMesh_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ee30[4];
__n128 RouteNavMesh_Unknown5(_QWORD* a1);
__int64 RouteNavMesh_fe6b60(_QWORD* a1, __int64 a2, __n128 a3);
__int64 GameRoutine_268800(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_634d80(__int64, __int64);
__int64 GameRoutine_fe7900_alt1(__int64 result,
                                float) __asm__("GameRoutine_fe7900");
__int64 GameRoutine_fe7ea0(_QWORD);
__int64 GameRoutine_fe7fa0(_QWORD, _QWORD, _QWORD);
__int64 dtFreeNavMesh(__int64 result);
__int64 dtFreeNavMeshQuery(__int64 result);
__int64 dtFreeTileCache(__int64 result);
__int64 dtNavMeshQuery_findPath(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                _QWORD, _QWORD, _DWORD);
__int64 dtNavMeshQuery_findStraightPath(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                        _QWORD, _QWORD, _QWORD, _QWORD, _DWORD,
                                        _DWORD);
__int64 dtTileCache_addBoxObstacle(_QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 dtTileCache_addObstacle(_QWORD, _QWORD, _QWORD, float, float);
__int64 dtTileCache_update(_QWORD, _QWORD, _QWORD, double);
__int64 fs_Manager_createFileAsync_fs_File(__int64, __int64);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN GameData_1ba1724;
extern __int64 (*GameData_1ffe748[])();
extern __int64 (*fs_Memory_vtable_ptr)();
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 GameData_220f8b0;
extern __int64 game_script_hub_g_frame_counter;
unsigned __int64 GameRoutine_6360e0(__int64, __int64, unsigned __int64, char,
                                    int);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_fe74e0(void);
__int64 RouteNavMesh_Destructor(__int64 a1);
__attribute__((swiftcall)) void RouteNavMesh_fe7000(PSEUDO_X8 x8_, _QWORD* a1,
                                                    __int128* a2, __n128 result,
                                                    float a5);
__attribute__((swiftcall)) void RouteNavMesh_fe7260(PSEUDO_X8 x8_, _QWORD* a1,
                                                    __int128* a2, __int128* a3,
                                                    __n128 result);
__int64 RouteNavMesh_fe7760(__int64* a1);
void RouteNavMesh_fe7820(_QWORD* a1, __int64 a2);
__attribute__((swiftcall)) void
RouteNavMesh_fe7b50(PSEUDO_X8 x8_, _QWORD* result, __int128* a2, __int128* a3);
__int64*** GameRoutine_fe7fa0_alt1(__int64*** result, __int64**,
                                   __int64*) __asm__("GameRoutine_fe7fa0");
__int64 GameHr_268800(__int64*, __int64, __int64, __int64, _DWORD*, __int64);
__int64 dtNavMeshQuery_findPath_alt1(_QWORD*, unsigned int, unsigned int,
                                     float*, float*, __int64, unsigned int*,
                                     _DWORD*,
                                     int) __asm__("dtNavMeshQuery_findPath");
__int64 dtNavMeshQuery_findStraightPath_alt1(
    __int64*, _DWORD*, _DWORD*, unsigned int*, int, __int64, __int64, __int64,
    int*, int, int) __asm__("dtNavMeshQuery_findStraightPath");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void GameRoutine_fe7ea0_alt1(__int64*,
                             unsigned __int64) __asm__("GameRoutine_fe7ea0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__n128 RouteNavMesh_Unknown5(_QWORD* a1)
{
  __n128 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *a1 = game_zview_RouteNavMesh_vtable;
  GameRoutine_fe6920();
  v3 = a1[3];
  if (v3 != 0) {
    v4 = a1[4];
    if (v3 == v4) {
      goto LABEL_9;
    }
    do {
      v5 = *(_QWORD*)(v4 - 8);
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        result = std___1___shared_weak_count___release_weak(v5);
      }
      v4 -= 16;
    } while (v4 != v3);
    v6 = a1[3];
    a1[4] = v3;
    if (v6 != 0) {
    LABEL_9:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
    }
  }
  v8 = a1[2];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v8 + 16LL))(
        v8, *(long double*)&result);
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

__int64 RouteNavMesh_Destructor(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 result;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    return GameRoutine_fe7900_alt1(
        result, (float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                        0x1.0aef000000000p+4f) /
                    0x1.f400000000000p+9f);
  }
  return result;
}

__int64 RouteNavMesh_fe6b60(_QWORD* a1, __int64 a2, __n128 a3)
{
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v12[2];

  GameRoutine_fe6920_alt1(a1, a3);
  v5 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 376, 16, 0);
  v6 = v5 + 3;
  v7 = v5;
  v5[1] = 0;
  v5[2] = 0;
  *v5 = GameData_1ffe6f8;
  GameRoutine_fe7660(v5 + 3);
  v8 = a1[2];
  a1[1] = v6;
  a1[2] = v7;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  v9 = a1[1];
  if ((*(_BYTE*)a2 & 1) != 0) {
    v10 = *(_QWORD*)(a2 + 16);
  }
  else {
    v10 = a2 + 1;
  }
  v12[0] = v10;
  v12[1] = strlen(v10);
  GameRoutine_fe7820(v9, v12);
  ++*(_QWORD*)(*GameData_212ee30[0] + 80);
  return GameRoutine_fe7900(0.0f);
}

__attribute__((swiftcall)) void RouteNavMesh_fe7000(PSEUDO_X8 x8_, _QWORD* a1,
                                                    __int128* a2, __n128 result,
                                                    float a5)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  float v10;
  __int128 v11;
  __int64 v12;
  int v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  _DWORD v33[3];

  v5 = a1[1];
  if (v5 == 0) {
    goto LABEL_6;
  }
  if (*(_QWORD*)(v5 + 24) == 0) {
    goto LABEL_6;
  }
  v10 = LANES128(result).n128_f32[0];
  nn_os_LockMutex(v5 + 320);
  v11 = *a2;
  v12 = *(_QWORD*)(v5 + 24);
  *(_QWORD*)v33 = *(_QWORD*)a2;
  v33[2] = DWORD2(v11);
  dtTileCache_addObstacle(v12, v33, &v32, v10, a5);
  dtTileCache_update(*(_QWORD*)(v5 + 24), *(_QWORD*)(v5 + 32), 0, 0.0);
  v13 = v32;
  nn_os_UnlockMutex(v5 + 320);
  if (v13 != 0) {
    v14 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         32, 16, 0);
    *(_DWORD*)(v15 + 24) = v13;
    v16 = v15 + 24;
    v17 = v15;
    *(_QWORD*)(v15 + 8) = 0;
    *(_QWORD*)(v15 + 16) = 0;
    *(_QWORD*)v15 = GameData_1ffe748;
    v18 = (__int64*)a1[4];
    v19 = a1[5];
    if ((unsigned __int64)v18 >= v19) {
      v21 = a1[3];
      v22 = (char*)v18 - v21;
      v23 = ((__int64)v18 - v21) >> 4;
      v24 = v23 + 1;
      if ((unsigned __int64)(v23 + 1) >> 60 != 0) {
        GameRoutine_fe74e0();
      }
      v25 = v19 - v21;
      if (v25 >> 3 > v24) {
        v24 = v25 >> 3;
      }
      if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFF0LL) {
        v26 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v26 = v24;
      }
      if (v26 >> 60 != 0) {
        GameRoutine_60a210(v15);
      }
      v27 = fw_memory_HeapManager_Allocate(*v14, 16 * v26, 16, 0);
      v28 = (__int64*)&v22[v27];
      v29 = v27 + 16 * v26;
      *v28 = v16;
      v28[1] = v17;
      v30 = (__int64)&v22[v27 + -16 * v23];
      v20 = (__int64)&v22[v27 + 16];
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                memory_order_relaxed);
      memcpy(v30, v21, v22);
      a1[3] = v30;
      a1[4] = v20;
      a1[5] = v29;
      if (v21 != 0) {
        v31 = 128;
        if (*(_QWORD*)(*v14 + 200LL) == 0) {
          v31 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*v14 + v31);
      }
    }
    else {
      *v18 = v16;
      v18[1] = v15;
      v20 = (__int64)(v18 + 2);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                memory_order_relaxed);
    }
    a1[4] = v20;
    *a3 = v16;
    a3[1] = v17;
    ++*(_QWORD*)(GameData_220f8b0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v17 + 16LL))(
          v17, *(long double*)&result);
      {
        std___1___shared_weak_count___release_weak(v17);
        return;
      }
    }
  }
  else {
  LABEL_6:
    *a3 = 0;
    a3[1] = 0;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void RouteNavMesh_fe7260(PSEUDO_X8 x8_, _QWORD* a1,
                                                    __int128* a2, __int128* a3,
                                                    __n128 result)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  float v8;
  __int128 v11;
  __int64 v12;
  __int128 v13;
  int v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
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
  __int64* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  _DWORD v33[3];
  _DWORD v34[3];
  int v35;

  v5 = a1[1];
  if (v5 == 0) {
    goto LABEL_6;
  }
  if (*(_QWORD*)(v5 + 24) == 0) {
    goto LABEL_6;
  }
  v8 = LANES128(result).n128_f32[0];
  nn_os_LockMutex(v5 + 320);
  v11 = *a2;
  v12 = *(_QWORD*)(v5 + 24);
  *(_QWORD*)v34 = *(_QWORD*)a2;
  v34[2] = DWORD2(v11);
  v13 = *a3;
  v33[2] = *((_QWORD*)a3 + 1);
  *(_QWORD*)v33 = v13;
  dtTileCache_addBoxObstacle(v12, v34, v33, &v35, v8 * 0x1.1df46a0000000p-6);
  dtTileCache_update(*(_QWORD*)(v5 + 24), *(_QWORD*)(v5 + 32), 0, 0.0);
  v14 = v35;
  nn_os_UnlockMutex(v5 + 320);
  if (v14 != 0) {
    v15 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         32, 16, 0);
    *(_DWORD*)(v16 + 24) = v14;
    v17 = v16 + 24;
    v18 = v16;
    *(_QWORD*)(v16 + 8) = 0;
    *(_QWORD*)(v16 + 16) = 0;
    *(_QWORD*)v16 = GameData_1ffe748;
    v19 = (__int64*)a1[4];
    v20 = a1[5];
    if ((unsigned __int64)v19 >= v20) {
      v22 = a1[3];
      v23 = (char*)v19 - v22;
      v24 = ((__int64)v19 - v22) >> 4;
      v25 = v24 + 1;
      if ((unsigned __int64)(v24 + 1) >> 60 != 0) {
        GameRoutine_fe74e0();
      }
      v26 = v20 - v22;
      if (v26 >> 3 > v25) {
        v25 = v26 >> 3;
      }
      if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFF0LL) {
        v27 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v27 = v25;
      }
      if (v27 >> 60 != 0) {
        GameRoutine_60a210(v16);
      }
      v28 = fw_memory_HeapManager_Allocate(*v15, 16 * v27, 16, 0);
      v29 = (__int64*)&v23[v28];
      v30 = v28 + 16 * v27;
      *v29 = v17;
      v29[1] = v18;
      v31 = (__int64)&v23[v28 + -16 * v24];
      v21 = (__int64)&v23[v28 + 16];
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                memory_order_relaxed);
      memcpy(v31, v22, v23);
      a1[3] = v31;
      a1[4] = v21;
      a1[5] = v30;
      if (v22 != 0) {
        v32 = 128;
        if (*(_QWORD*)(*v15 + 200LL) == 0) {
          v32 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*v15 + v32);
      }
    }
    else {
      *v19 = v17;
      v19[1] = v16;
      v21 = (__int64)(v19 + 2);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                memory_order_relaxed);
    }
    a1[4] = v21;
    *a4 = v17;
    a4[1] = v18;
    ++*(_QWORD*)(GameData_220f8b0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v18 + 16LL))(
          v18, *(long double*)&result);
      {
        std___1___shared_weak_count___release_weak(v18);
        return;
      }
    }
  }
  else {
  LABEL_6:
    *a4 = 0;
    a4[1] = 0;
  }
  {
    result;
    return;
  }
}

__int64 RouteNavMesh_fe7760(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;

  v1 = a1[39];
  if (v1 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v1 + 8), v1);
    a1[39] = 0;
  }
  v3 = a1[5];
  if (v3 != 0) {
    dtFreeNavMeshQuery(v3);
    a1[5] = 0;
  }
  v4 = a1[4];
  if (v4 != 0) {
    dtFreeNavMesh(v4);
    a1[4] = 0;
  }
  v5 = a1[3];
  if (v5 != 0) {
    dtFreeTileCache(v5);
    a1[3] = 0;
  }
  nn_os_FinalizeMutex(a1 + 40);
  v6 = a1[2];
  a1[2] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  v7 = a1[1];
  a1[1] = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  result = *a1;
  *a1 = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

void RouteNavMesh_fe7820(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    _QWORD v13[3];
    __int64 v14;
    __int64 (**v15)();
    int v16;
  } v13_;

  v3 = a1[39];
  if (v3 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v3 + 8), v3);
    a1[39] = 0;
  }
  v5 = a1[5];
  if (v5 != 0) {
    dtFreeNavMeshQuery(v5);
    a1[5] = 0;
  }
  v6 = a1[4];
  if (v6 != 0) {
    dtFreeNavMesh(v6);
    a1[4] = 0;
  }
  v7 = a1[3];
  if (v7 != 0) {
    dtFreeTileCache(v7);
    a1[3] = 0;
  }
  v8 = snd_g_fileIndex_ptr[0];
  if ((GameRoutine_6360e0(*snd_g_fileIndex_ptr[0], *(_QWORD*)a2,
                          *(_QWORD*)(a2 + 8), 0, 0) &
       1) != 0) {
    v9 = *(_QWORD*)a2;
    v10 = *(_QWORD*)(a2 + 8);
    v13_.v13[2] = 0;
    v13_.v14 = 0;
    v11 = *v8;
    v13_.v13[0] = v9;
    v13_.v13[1] = v10;
    v13_.v16 = 0;
    v13_.v15 = &fs_Memory_vtable_ptr;
    v12 = fs_Manager_createFileAsync_fs_File(v11, (__int64)v13_.v13);
    if (v13_.v14 != 0) {
      std___1___shared_weak_count___release_weak(v13_.v14);
    }
    a1[39] = v12;
  }
}

__attribute__((swiftcall)) void

RouteNavMesh_fe7b50(PSEUDO_X8 x8_, _QWORD* result, __int128* a2, __int128* a3)
{

#pragma clang fp contract(off)
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  bool v4;
  _QWORD* v5;
  __int64* v9;
  unsigned int* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int128 v18;
  __int64* v19;
  __int128 v20;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64** v28;
  __int64* v29[2];
  struct {
    __int64 v30;
    __int64 v31;
    __int64 v32;
  } v30_;
  float v33[3];
  float v34[3];
  __int64 v35;
  struct {
    __int64 v36;
    __int64 v37;
    __int64 v38;
  } v36_;
  __int64 v39;

  v4 = result[3] == 0 || result[4] == 0;
  if (v4 || (v5 = result, result[5] == 0)) {
    *(_BYTE*)a4 = 0;
    *(_BYTE*)(a4 + 24) = 0;
  }
  else {
    nn_os_LockMutex_alt1((__int64)(result + 40));
    v9 = (__int64*)fw_memory_g_heap_manager_ptr;
    v10 = (unsigned int*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 1024, 16, 0);
    memset_alt1((__int64)v10, 0, 0x400u);
    v11 = fw_memory_HeapManager_Allocate_alt1(*v9, 3072, 16, 0);
    v12 = v11 + 3072;
    v13 = v11;
    v36_.v36 = v11;
    v36_.v38 = v11 + 3072;
    memset_alt1(v11, 0, 0xC00u);
    v14 = *v9;
    v36_.v37 = v12;
    v15 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v14, 256, 16, 0);
    *v15 = 0;
    v15[1] = 0;
    v15[2] = 0;
    v15[3] = 0;
    v15[4] = 0;
    v15[5] = 0;
    v15[6] = 0;
    v15[7] = 0;
    v15[8] = 0;
    v15[9] = 0;
    v15[10] = 0;
    v15[11] = 0;
    v15[12] = 0;
    v15[13] = 0;
    v15[14] = 0;
    v15[15] = 0;
    v15[16] = 0;
    v15[17] = 0;
    v15[18] = 0;
    v15[19] = 0;
    v15[20] = 0;
    v15[21] = 0;
    v15[22] = 0;
    v15[23] = 0;
    v15[24] = 0;
    v15[25] = 0;
    v15[26] = 0;
    v15[27] = 0;
    v15[28] = 0;
    v15[29] = 0;
    v16 = *v9;
    v15[30] = 0;
    v15[31] = 0;
    v17 = fw_memory_HeapManager_Allocate_alt1(v16, 1024, 16, 0);
    memset_alt1(v17, 0, 0x400u);
    v18 = *a2;
    v19 = (__int64*)v5[5];
    v39 = 0;
    v35 = 0;
    qmemcpy(v34, &v18, sizeof(v34));
    v20 = *a3;
    *(_QWORD*)v33 = *(_QWORD*)a3;
    v33[2] = *((float*)&v20 + 2);
    if ((unsigned int)GameHr_268800(
            v19, (__int64)v34, (__int64)&GameData_1ba1724, (__int64)(v5 + 6),
            (_DWORD*)&v35 + 1, 0) == 0x40000000 &&
        (unsigned int)GameHr_268800((__int64*)v5[5], (__int64)v33,
                                    (__int64)&GameData_1ba1724,
                                    (__int64)(v5 + 6), &v35, 0) == 0x40000000 &&
        (unsigned int)dtNavMeshQuery_findPath_alt1(
            (_QWORD*)v5[5], HIDWORD(v35), v35, v34, v33, (__int64)(v5 + 6), v10,
            (_DWORD*)&v39 + 1, 256) == 0x40000000 &&
        (unsigned int)dtNavMeshQuery_findStraightPath_alt1(
            (__int64*)v5[5], v34, v33, v10, SHIDWORD(v39), v13, (__int64)v15,
            v17, (int*)&v39, 256, 0) == 0x40000000 &&
        (int)v39 >= 1) {
      v30_.v31 = 0;
      v30_.v32 = 0;
      v30_.v30 = 0;
      GameRoutine_fe7ea0_alt1(&v30_.v30, (unsigned int)v39);
      v29[0] = &v36_.v36;
      v29[1] = (__int64*)(int)v39;
      GameRoutine_fe7fa0_alt1(&v28, v29, &v30_.v30);
      v22 = v30_.v31;
      *(_QWORD*)a4 = v30_.v30;
      *(_QWORD*)(a4 + 8) = v22;
      *(_QWORD*)(a4 + 16) = v30_.v32;
      *(_BYTE*)(a4 + 24) = 1;
    }
    else {
      *(_BYTE*)a4 = 0;
      *(_BYTE*)(a4 + 24) = 0;
    }
    if (*(_QWORD*)(*v9 + 200) != 0) {
      v23 = 128;
    }
    else {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v9 + v23, v17);
    if (*(_QWORD*)(*v9 + 200) != 0) {
      v24 = 128;
    }
    else {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v9 + v24, (__int64)v15);
    if (v36_.v36 != 0) {
      v25 = *v9;
      v36_.v37 = v36_.v36;
      v26 = 128;
      if (*(_QWORD*)(v25 + 200) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v25 + v26, v36_.v36);
    }
    v27 = 128;
    if (*(_QWORD*)(*v9 + 200) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v9 + v27, (__int64)v10);
    {
      (_QWORD*)nn_os_UnlockMutex_alt1((__int64)(v5 + 40));
      return;
    }
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
