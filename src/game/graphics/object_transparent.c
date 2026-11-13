#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1ff4628[])();
extern __int64 (*game_graphics_ObjectTransparent_vtable[])();
extern __int64 GameData_21c9758;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2221120;
_QWORD* ObjectTransparent_Destructor(_QWORD* result);
__int64 GameRoutine_654050(_QWORD);
__int64 GameRoutine_66b000(_QWORD, _QWORD);
__int64 GameRoutine_66b160(_QWORD);
__int64 GameRoutine_f38900(__int64, __int64);
__int64 GameRoutine_f38a80(__int64, _QWORD*);
__int64 GameRoutine_f38c20(__int64, _QWORD*);
__int64 GameRoutine_f38ee0(_QWORD, _QWORD);
__int64 GameRoutine_f39c40(__int64 result, char);
__int64 GameRoutine_f3b6f0(_QWORD, _QWORD);
__int64 GameRoutine_f3ca00(_QWORD, _QWORD);
__int64 InstanceObjectTransparentModule_fb82a0(_QWORD, _QWORD);
__int64 ObjectTransparentModuleBase_febc00(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN GameData_1aa53a0;
extern _UNKNOWN GameData_1ac0a59;
extern _UNKNOWN GameData_1ad7197;
extern _UNKNOWN GameData_1ae2e36;
extern __int64 (*GameData_1ff4658[])();
extern __int64 GameData_212c7d8[6];
extern __int64 GameData_21323e8[4];
extern __int64 GameData_21c6978;
extern __int64 GameData_21c9680;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212ee40[2];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_65c760(_QWORD);
void __attribute__((noreturn)) GameRoutine_f3bb00(void);
void __attribute__((noreturn)) GameRoutine_f3bb20(void);
float game_graphics_ObjectTransparent_ObjectTransparent(__int64 a1);
__int64 ObjectTransparent_f38dc0(__int64 result);
float ObjectTransparent_f391a0(__int64 a1, int a2);
float ObjectTransparent_f39230(__int64 a1, int a2);
__int64
ObjectTransparent_f392c0_alt1(__int64 result,
                              __int64 a2) __asm__("ObjectTransparent_f392c0");
__int64
ObjectTransparent_f396e0_alt1(__int64 result,
                              __int64 a2) __asm__("ObjectTransparent_f396e0");
__int64 ObjectTransparent_f3b380(__int64 result, unsigned __int8* a2,
                                 __int64 a3);
_QWORD*
ObjectTransparent_f3b8e0_alt1(__int64** a1,
                              __int64* a2) __asm__("ObjectTransparent_f3b8e0");
__int64
game_graphics_ObjectTransparent_ObjectTransparent_lambda0_Invoke(__int64 a1);
__int64 game_graphics_ObjectTransparent_Run_lambda1_Invoke(__int64 result,
                                                           __int64 a2,
                                                           atomic_uint* a3);
_QWORD* GameRoutine_fb7fe0(__int64, __int64, int);
_QWORD* MapObjectModule_a7dcc0(__int64);
_QWORD*
ObjectTransparent_f3b040_alt2(__int64, __int64, __int64,
                              __int64) __asm__("ObjectTransparent_f3b040");
__attribute__((swiftcall)) void MapObjectModule_a7d410(PSEUDO_X8,
                                                       __int64 result);
__attribute__((swiftcall)) void collision_671400(PSEUDO_X8, _QWORD, _QWORD,
                                                 _QWORD);
__attribute__((swiftcall)) void collision_672fa0(PSEUDO_X8, _OWORD*, __int64,
                                                 float);
__attribute__((swiftcall)) void collision_673460(PSEUDO_X8, float32x4_t*,
                                                 long double*, __int64, float);
__int64* GameRoutine_98f140(__int64* result, _QWORD*);
__int64 Camera_b3bb60(_QWORD);
__int64 GameRoutine_14a0820(_QWORD);
__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a8c0c0(__int64);
__int64 GameRoutine_feb9e0(__int64 result, __int64, int);
__int64 ObjectTransparentModule_f3cec0(__int64 result, float, float);
__int64
    ObjectTransparent_f3b040_alt1(_QWORD, _QWORD, _QWORD,
                                  _QWORD) __asm__("ObjectTransparent_f3b040");
__int64
    ObjectTransparent_f3b380_alt1(_QWORD, _QWORD,
                                  _QWORD) __asm__("ObjectTransparent_f3b380");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_world_JobContext_Drain(_QWORD);
__int64 fw_world_JobContext_Wait(_QWORD, _QWORD);
__int64 fw_world_JobQueue_Submit(_QWORD, _QWORD);
__int64 fw_world_SwapCallables(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_ClearLightEvent(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_InitializeMutex(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__n128 nn_mem_StandardAllocator_Free_alt2(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 nn_os_LockMutex_alt1(_QWORD) __asm__("nn_os_LockMutex");
__n128 nn_os_UnlockMutex_alt1(_QWORD) __asm__("nn_os_UnlockMutex");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_1f50948;
extern _UNKNOWN* GameData_212c840;
extern _UNKNOWN* GameData_212d498;
extern _UNKNOWN* GameData_212d4b8;
extern _UNKNOWN* GameData_212df28;
extern _UNKNOWN GameData_21ec960;
extern _UNKNOWN GameData_21ec980;
extern _UNKNOWN GameData_2221128;
extern __int64 (*GameData_1ff46d8[])();
extern __int64 (*GameData_1ff4758[])();
extern __int64 (*GameData_212c848[2])();
extern __int64* GameData_212c838;
extern __int64* GameData_212f950[4];
extern __int64 GameData_212c638;
extern __int64 GameData_212e368[4];
extern int* GameData_212d490;
extern int* GameData_212d4b0;
extern int GameData_21ec95c;
extern int GameData_21ec978;
extern int GameData_2221124;
float ObjectTransparent_f391a0_alt1(_QWORD,
                                    _QWORD) __asm__("ObjectTransparent_f391a0");
float ObjectTransparent_f39230_alt1(_QWORD,
                                    _QWORD) __asm__("ObjectTransparent_f39230");
void ObjectTransparent_f3b380_alt2(__int64*, unsigned __int8*,
                                   __int64) __asm__("ObjectTransparent_f3b380");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_98f290();
void __attribute__((noreturn)) GameRoutine_d28710(_QWORD, long double);
__int64 ObjectTransparent_f38800(__int64 a1, __int64 a2);
__int64 ObjectTransparent_f38900(__int64 a1, __int64 a2);
__int64 ObjectTransparent_f38a80(__int64 a1, __int64 a2);
__int64 ObjectTransparent_f38c20(__int64 a1, __int64 a2);
__int64 ObjectTransparent_f38ee0(__int64 a1, __int64 a2);
__int64 game_graphics_ObjectTransparent_Run_alt1(
    __int64 result, char a2) __asm__("game_graphics_ObjectTransparent_Run");
__int64 ObjectTransparent_f3a820_alt1(__int64 a1, unsigned int* a2) __asm__(
    "ObjectTransparent_f3a820");
__int64 ObjectTransparent_f3ac60_alt1(__int64 a1, unsigned int* a2) __asm__(
    "ObjectTransparent_f3ac60");
__n128
ObjectTransparent_f3b040_alt3(__int64 a1, __int64* a2, __int64 a3,
                              __int64 a4) __asm__("ObjectTransparent_f3b040");
__int64 game_graphics_ObjectTransparent_Run_lambda0_Invoke(__int64* a1,
                                                           __int64 a2,
                                                           atomic_uint* a3);
__int64 ObjectTransparentModuleBase_febc00_alt1(__int64 result) __asm__(
    "ObjectTransparentModuleBase_febc00");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void GameRoutine_f3b6f0_alt1(__int64*,
                             unsigned __int64) __asm__("GameRoutine_f3b6f0");
void __attribute__((noreturn))
GameRoutine_65c760_alt1() __asm__("GameRoutine_65c760");
void __attribute__((noreturn))
GameRoutine_f3bb00_alt1() __asm__("GameRoutine_f3bb00");
void nn_mem_StandardAllocator_Free_alt3(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ObjectTransparent_f392c0(__int64 a1, __int64 a2);
void ObjectTransparent_f396e0(__int64 a1, __int64 a2);
_QWORD* ObjectTransparent_f3b8e0(__int64* a1, __int64* a2);
_QWORD* fw_world_SwapCallables_alt1(_QWORD* result,
                                    _QWORD*) __asm__("fw_world_SwapCallables");
__attribute__((swiftcall)) void
collision_671400_alt1(PSEUDO_X8, float32x4_t* result, float32x4_t*,
                      __int64) __asm__("collision_671400");
__int64 GameRoutine_14a0820_alt1(_QWORD*) __asm__("GameRoutine_14a0820");
__int64 GameRoutine_2b0_alt1() __asm__("GameRoutine_2b0");
__int64 fw_world_JobContext_Drain_alt1(unsigned int*) __asm__(
    "fw_world_JobContext_Drain");
__int64
fw_world_JobContext_Wait_alt1(__int64 result,
                              unsigned int) __asm__("fw_world_JobContext_Wait");
__int64 fw_world_JobQueue_Submit_alt1(__int64,
                                      int) __asm__("fw_world_JobQueue_Submit");
__int64 nn_os_ClearLightEvent_alt1(__int64) __asm__("nn_os_ClearLightEvent");
__int64 nn_os_FinalizeMutex_alt1(__int64) __asm__("nn_os_FinalizeMutex");
__int64 nn_os_InitializeMutex_alt1(__int64, bool,
                                   int) __asm__("nn_os_InitializeMutex");
__int64 nn_os_LockMutex_alt2(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt2(__int64) __asm__("nn_os_UnlockMutex");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
int8x16_t Camera_b3bb60_alt1(__int64) __asm__("Camera_b3bb60");
void GameRoutine_98f140_alt1(__int64*, _QWORD*) __asm__("GameRoutine_98f140");
void GameRoutine_a8c0c0_alt1(__int64) __asm__("GameRoutine_a8c0c0");
void GameRoutine_feb9e0_alt1(__int64, __int64,
                             int) __asm__("GameRoutine_feb9e0");
void ObjectTransparentModule_f3cec0_alt1(__int64, float, float) __asm__(
    "ObjectTransparentModule_f3cec0");
void ObjectTransparent_f3b040_alt4(__int64, __int64, __int64,
                                   __int64) __asm__("ObjectTransparent_f3b040");
void __attribute__((noreturn))
GameRoutine_d28710_alt1() __asm__("GameRoutine_d28710");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void game_graphics_ObjectTransparent_Run(float32x4_t* a1, char a2);
__int64 ObjectTransparent_f3a820(__int64 a1, int* a2);
__int64 ObjectTransparent_f3ac60(__int64 a1, int* a2);
void ObjectTransparent_f3b040(__int64 a1, __int64* a2, __int64 a3, __int64 a4);

float game_graphics_ObjectTransparent_ObjectTransparent(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float result;
  int v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;

  if (*(_QWORD*)GameData_212c7d8[0] == 0) {
    *(_QWORD*)GameData_212c7d8[0] = a1;
    GameData_2221120 = 1;
  }
  *(_BYTE*)(a1 + 48) = 0;
  *(_BYTE*)(a1 + 80) = 0;
  *(_BYTE*)(a1 + 96) = 0;
  *(_BYTE*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)a1 = game_graphics_ObjectTransparent_vtable;
  *(_QWORD*)(a1 + 8) = 0x3D4CCCCD3DCCCCCDLL;
  *(_BYTE*)(a1 + 16) = 1;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 309) = 0;
  v2 = fw_memory_g_heap_manager;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(v2, 80, 16, 0);
  v3[2] = 0;
  v4 = GameData_212ee40[0];
  v3[8] = 0;
  *(_QWORD*)(a1 + 24) = v3 + 4;
  *(_QWORD*)(a1 + 32) = v3;
  v13 = v12;
  *v3 = v4 + 2;
  v3[1] = 0;
  v12[0] = GameData_1ff4658;
  v12[1] = a1;
  GameRoutine_654050(v12);
  if (v13 == v12) {
    v5 = 32;
  }
  else {
    if (v13 == nullptr) {
      goto LABEL_8;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v13 + v5))((__int64)v13);
LABEL_8:
  v6 = *(_QWORD*)(a1 + 24);
  v7 = *(_QWORD*)(a1 + 32);
  v10 = v6;
  v11 = v7;
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
    v12[0] = v6;
    v12[1] = v7;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_66b160(v12);
    std___1___shared_weak_count___release_weak(v7);
  }
  else {
    v12[0] = v6;
    v12[1] = 0;
    GameRoutine_66b160(v12);
  }
  GameRoutine_66b000(&GameData_21c9680, &v10);
  if (v11 != 0) {
    std___1___shared_weak_count___release_weak(v11);
  }
  result = *(float*)(a1 + 8);
  v9 = *(_DWORD*)(a1 + 12);
  *(float*)(a1 + 312) = result;
  *(_DWORD*)(a1 + 308) = v9;
  return result;
}

_QWORD* ObjectTransparent_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
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
  __int64 v29;
  __int64 v30;

  v1 = result[34];
  v2 = result;
  *result = game_graphics_ObjectTransparent_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[35] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = v2[30];
  if (v6 != 0) {
    v7 = v2[31];
    if (v6 == v7) {
      goto LABEL_24;
    }
    v8 = v2[31];
    do {
      v12 = *(_QWORD*)(v8 - 24);
      v8 -= 24;
      v10 = v12;
      if (v12 != 0) {
        v13 = *(_QWORD*)(v7 - 16);
        if (v10 == v13) {
          goto LABEL_9;
        }
        do {
          v14 = *(_QWORD*)(v13 - 24);
          if (v14 != 0) {
            *(_QWORD*)(v13 - 16) = v14;
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v15 = 128;
            }
            else {
              v15 = 56;
            }
            result =
                (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v15, v14);
          }
          v13 -= 48;
        } while (v13 != v10);
        v9 = *(_QWORD*)(v7 - 24);
        *(_QWORD*)(v7 - 16) = v10;
        v10 = v9;
        if (v9 != 0) {
        LABEL_9:
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v11 = 128;
          }
          else {
            v11 = 56;
          }
          result =
              (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11, v10);
        }
      }
      v7 = v8;
    } while (v6 != v8);
    v16 = v2[30];
    v2[31] = v6;
    v6 = v16;
    if (v16 != 0) {
    LABEL_24:
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v17 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v17, v6);
    }
  }
  v18 = v2[27];
  if (v18 != 0) {
    v19 = *(_QWORD*)v3;
    v2[28] = v18;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v19 + v20, v18);
  }
  v21 = v2[24];
  if (v21 != 0) {
    v22 = *(_QWORD*)v3;
    v2[25] = v21;
    v23 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v23 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v22 + v23, v21);
  }
  v24 = v2[21];
  if (v24 != 0) {
    v25 = *(_QWORD*)v3;
    v2[22] = v24;
    v26 = 128;
    if (*(_QWORD*)(v25 + 200) == 0) {
      v26 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v25 + v26, v24);
  }
  v27 = v2[18];
  if (v27 != 0) {
    v28 = *(_QWORD*)v3;
    v2[19] = v27;
    v29 = 128;
    if (*(_QWORD*)(v28 + 200) == 0) {
      v29 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v28 + v29, v27);
  }
  v30 = v2[4];
  if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v30);
  }
  *v2 = GameData_1ff4628;
  if ((_QWORD*)GameData_21c9758 == v2) {
    GameData_21c9758 = 0;
    GameData_2221120 = 0;
  }
  return result;
}

__int64 ObjectTransparent_f38800(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  int v6;
  _QWORD* v7;

  result = ObjectTransparent_f38900(a1, a2);
  if (result == 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ec980,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21ec980) != 0) {
      GameData_21ec978 = wld_Crc32(0, "MapObjectModule", 0xFu);
      __cxa_guard_release(&GameData_21ec980);
    }
    v4 = *(_QWORD*)(a2 + 512);
    v5 = v4;
    do {
      if (v5 == *(_QWORD*)(a2 + 504)) {
        return 0;
      }
      v6 = *(_DWORD*)(v5 - 16);
      v5 -= 16;
      v4 -= 16;
    } while (v6 != GameData_21ec978);
    if (*(_QWORD*)(a2 + 512) == v4) {
      return 0;
    }
    result = *(_QWORD*)(v4 + 8);
    if (result != 0) {
      v7 = MapObjectModule_a7dcc0(result);
      if (*v7 == v7[1]) {
        return ObjectTransparent_f38c20((__int64)v7, a2);
      }
      else {
        return ObjectTransparent_f38a80((__int64)v7, a2);
      }
    }
  }
  return result;
}

__int64 ObjectTransparent_f38900(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 result;
  __int64 v6;
  __int64 i;
  int v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ec960,
                            memory_order_acquire) &
       1) == 0) {
    v11 = a2;
    v9 = __cxa_guard_acquire(&GameData_21ec960);
    a2 = v11;
    if (v9 != 0) {
      GameData_21ec95c = wld_Crc32(0, "ObjectTransparentModule", 0x17u);
      __cxa_guard_release(&GameData_21ec960);
      a2 = v11;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  v3 = v2;
  while (v3 != *(_QWORD*)(a2 + 504)) {
    v4 = *(_DWORD*)(v3 - 16);
    v3 -= 16;
    v2 -= 16;
    if (v4 == GameData_21ec95c) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        result = *(_QWORD*)(v2 + 8);
        if (result != 0) {
          return result;
        }
      }
      break;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2221128,
                            memory_order_acquire) &
       1) == 0) {
    v12 = a2;
    v10 = __cxa_guard_acquire(&GameData_2221128);
    a2 = v12;
    if (v10 != 0) {
      GameData_2221124 = wld_Crc32(0, "InstanceObjectTransparentModule", 0x1Fu);
      __cxa_guard_release(&GameData_2221128);
      a2 = v12;
    }
  }
  v6 = *(_QWORD*)(a2 + 512);
  for (i = v6; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v8 = *(_DWORD*)(i - 16);
    v6 -= 16;
    if (v8 == GameData_2221124) {
      if (*(_QWORD*)(a2 + 512) != v6) {
        return *(_QWORD*)(v6 + 8);
      }
      return 0;
    }
  }
  return 0;
}

__int64 ObjectTransparent_f38a80(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  _BYTE* v7;
  _BYTE* v8;
  bool v9;
  int v11;
  unsigned int v13;

  v2 = a2;
  v13 = ((*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
          *(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL)) >>
         3) -
        1;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2221128,
                            memory_order_acquire) &
       1) == 0) {
    v11 = __cxa_guard_acquire(&GameData_2221128);
    v2 = a2;
    if (v11 != 0) {
      GameData_2221124 = wld_Crc32(0, "InstanceObjectTransparentModule", 0x1Fu);
      __cxa_guard_release(&GameData_2221128);
      v2 = a2;
    }
  }
  v3 = *(_QWORD*)(v2 + 512);
  v4 = v3;
  do {
    if (v4 == *(_QWORD*)(v2 + 504)) {
      goto LABEL_7;
    }
    v5 = *(_DWORD*)(v4 - 16);
    v4 -= 16;
    v3 -= 16;
  } while (v5 != GameData_2221124);
  if (*(_QWORD*)(v2 + 512) == v3 || (v6 = *(_QWORD*)(v3 + 8)) == 0) {
  LABEL_7:
    v6 = ObjectTransparent_f3ac60_alt1(v2, &v13);
  }
  if ((*(_BYTE*)(v6 + 16) & 1) == 0) {
    *(_BYTE*)(v6 + 16) = 1;
    *(_BYTE*)(v6 + 17) &= ~2u;
    *(_BYTE*)(v6 + 18) &= ~2u;
    *(_BYTE*)(v6 + 19) &= ~2u;
    *(_BYTE*)(v6 + 20) &= ~2u;
    v7 = *(_BYTE**)(v6 + 8);
    v7[632] = 0;
    v7[664] = 0;
    v7[696] = 0;
    v7[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 64LL))(v6);
    v8 = *(_BYTE**)(v6 + 8);
    v9 = v8[300] == 3 && v8[301] == 3;
    if (v9 || v8[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 72LL))(v6);
    }
  }
  return v6;
}

__int64 ObjectTransparent_f38c20(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned __int8 explicit;
  int* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  _BYTE* v9;
  _BYTE* v10;
  bool v11;
  int v13;
  unsigned int v15;

  v2 = a2;
  v15 = ((*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
          *(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL)) >>
         3) -
        1;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4b8,
                                  memory_order_acquire);
  v4 = GameData_212d4b0;
  if ((explicit & 1) == 0) {
    v13 = __cxa_guard_acquire(GameData_212d4b8);
    v2 = a2;
    if (v13 != 0) {
      *v4 = wld_Crc32(0, "ObjectTransparentModule", 0x17u);
      __cxa_guard_release(GameData_212d4b8);
      v2 = a2;
    }
  }
  v5 = *(_QWORD*)(v2 + 512);
  v6 = v5;
  do {
    if (v6 == *(_QWORD*)(v2 + 504)) {
      goto LABEL_7;
    }
    v7 = *(_DWORD*)(v6 - 16);
    v6 -= 16;
    v5 -= 16;
  } while (v7 != *v4);
  if (*(_QWORD*)(v2 + 512) == v5 || (v8 = *(_QWORD*)(v5 + 8)) == 0) {
  LABEL_7:
    v8 = ObjectTransparent_f3a820_alt1(v2, &v15);
  }
  if ((*(_BYTE*)(v8 + 16) & 1) == 0) {
    *(_BYTE*)(v8 + 16) = 1;
    *(_BYTE*)(v8 + 17) &= ~2u;
    *(_BYTE*)(v8 + 18) &= ~2u;
    *(_BYTE*)(v8 + 19) &= ~2u;
    *(_BYTE*)(v8 + 20) &= ~2u;
    v9 = *(_BYTE**)(v8 + 8);
    v9[632] = 0;
    v9[664] = 0;
    v9[696] = 0;
    v9[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 64LL))(v8);
    v10 = *(_BYTE**)(v8 + 8);
    v11 = v10[300] == 3 && v10[301] == 3;
    if (v11 || v10[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 72LL))(v8);
    }
  }
  return v8;
}

__int64 ObjectTransparent_f38dc0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  _QWORD* v8;

  v1 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) + 64LL);
  if (v1 != 0) {
    v2 = *(_QWORD*)(v1 + 96);
    if (v2 != 0 && *(_DWORD*)(v2 + 240) == 5) {
      v3 = (_QWORD*)(v1 + 120);
      while (1) {
        v3 = (_QWORD*)*v3;
        if (v3 == nullptr) {
          break;
        }
        if (*(_DWORD*)(v3[5] + 240LL) != 5) {
          return result;
        }
      }
      v5 = *(_QWORD*)(v2 + 24);
      v4 = *(_QWORD*)(v2 + 32);
      if (v4 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          result = std___1___shared_weak_count___release_weak(v4);
        }
      }
      v6 = *(__int64**)(v5 + 88);
      v7 = *(__int64**)(v5 + 96);
      if (v6 != v7) {
        while (1) {
          result = GameRoutine_f38900(result, *v6);
          if (result != 0) {
            goto LABEL_14;
          }
          result = GameRoutine_f38ee0(0, *v6);
          if ((_DWORD)result == 2) {
            result = GameRoutine_f38a80(result, (_QWORD*)*v6);
          LABEL_14:
            if (++v6 == v7) {
              return result;
            }
          }
          else {
            if ((_DWORD)result != 1) {
              goto LABEL_14;
            }
            v8 = (_QWORD*)*v6++;
            result = GameRoutine_f38c20(result, v8);
            if (v6 == v7) {
              return result;
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 ObjectTransparent_f38ee0(__int64 a1, __int64 a2)
{
  unsigned __int8 explicit;
  int* v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64** v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  int v31;
  struct {
    __int64 v32;
    __int64 v33;
  } v32_;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d498,
                                  memory_order_acquire);
  v3 = GameData_212d490;
  if ((explicit & 1) == 0) {
    v30 = a2;
    v31 = __cxa_guard_acquire(GameData_212d498);
    a2 = v30;
    if (v31 != 0) {
      *v3 = wld_Crc32(0, "MapObjectModule", 0xFu);
      __cxa_guard_release(GameData_212d498);
      a2 = v30;
    }
  }
  v4 = *(_QWORD*)(a2 + 512);
  v5 = v4;
  do {
    if (v5 == *(_QWORD*)(a2 + 504)) {
      return 0;
    }
    v6 = *(_DWORD*)(v5 - 16);
    v5 -= 16;
    v4 -= 16;
  } while (v6 != *v3);
  if (*(_QWORD*)(a2 + 512) == v4) {
    return 0;
  }
  v7 = *(_QWORD*)(v4 + 8);
  if (v7 == 0) {
    return 0;
  }
  v8 = a2;
  MapObjectModule_a7d410((void*)(&v32_.v32), *(_QWORD*)(v4 + 8));
  v9 = v32_.v33;
  if (v32_.v33 != 0) {
    v10 = v32_.v32;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v32_.v33 + 16), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak_alt1(v9);
    }
    v11 = (__int64**)MapObjectModule_a7dcc0(v7);
    if (*(_QWORD*)(v9 + 8) != -1) {
      v12 = *(_DWORD*)(v8 + 284);
      v13 = 0x200040000LL;
      if (v12 == 2) {
        v13 = 0x200000000LL;
      }
      if (v12 == 1) {
        v14 = 0x40000;
      }
      else {
        v14 = v13;
      }
      goto LABEL_31;
    }
  }
  else {
    v11 = (__int64**)MapObjectModule_a7dcc0(v7);
  }
  v16 = *v11;
  v17 = v8;
  if (*v11 == v11[1]) {
    goto LABEL_42;
  }
  v10 = *v16;
  v18 = v16[1];
  if (v18 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                              memory_order_relaxed);
  }
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v9);
    v17 = v8;
  }
  v19 = *(_DWORD*)(v17 + 284);
  v20 = 0x200040000LL;
  if (v19 == 2) {
    v20 = 0x200000000LL;
  }
  if (v19 == 1) {
    v14 = 0x40000;
  }
  else {
    v14 = v20;
  }
  if (v18 == 0) {
    v9 = 0;
    goto LABEL_45;
  }
  v9 = v18;
LABEL_31:
  v21 = std___1___shared_weak_count_lock(v9);
  if (v21 == 0) {
    goto LABEL_45;
  }
  if (v10 == 0) {
    goto LABEL_38;
  }
  v22 = *(_QWORD*)(v10 + 96);
  v23 = *(_QWORD*)(v10 + 104);
  v24 = v23 - v22;
  if (v23 != v22) {
    v25 = 0;
    v26 = 0xCCCCCCCCCCCCCCCDLL * (v24 >> 3);
    while ((*(_BYTE*)(v22 + 40LL * SHIDWORD(v25) + 37) & 1) != 0 ||
           (*(_QWORD*)(v22 + 40LL * SHIDWORD(v25) + 24) & v14) == 0) {
      v25 += 0x100000000LL;
      if (--v26 == 0) {
        goto LABEL_40;
      }
    }
  LABEL_38:
    if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v27 = v21;
      (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
      std___1___shared_weak_count___release_weak_alt1(v27);
    }
  LABEL_45:
    if (*v11 == v11[1]) {
      result = 1;
    }
    else {
      result = 2;
    }
    if (v9 != 0) {
      goto LABEL_49;
    }
    return result;
  }
LABEL_40:
  if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v28 = v21;
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak_alt1(v28);
  }
LABEL_42:
  result = 0;
  if (v9 != 0) {
  LABEL_49:
    v29 = result;
    std___1___shared_weak_count___release_weak_alt1(v9);
    return v29;
  }
  return result;
}

float ObjectTransparent_f391a0(__int64 a1, int a2)
{
  void* v2;
  int v4;
  __int64 v5;
  _QWORD v6[2];

  if (a2 == 0) {
    return 0.0;
  }
  if (*(_DWORD*)(a1 + 300) == 1) {
    v2 = &GameData_1ad7197;
  }
  else {
    v2 = &GameData_1ae2e36;
  }
  v6[1] = v2;
  v6[0] = game_HashString(v2);
  v4 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v6);
    if (v5 != 0) {
      v4 = *(_DWORD*)(v5 + 32);
    }
    else {
      v4 = 0;
    }
  }
  return (float)v4 / 1000.0;
}

float ObjectTransparent_f39230(__int64 a1, int a2)
{
  void* v2;
  int v4;
  __int64 v5;
  _QWORD v6[2];

  if (a2 == 0) {
    return 0.0;
  }
  if (*(_DWORD*)(a1 + 300) == 1) {
    v2 = &GameData_1ac0a59;
  }
  else {
    v2 = &GameData_1aa53a0;
  }
  v6[1] = v2;
  v6[0] = game_HashString(v2);
  v4 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v6);
    if (v5 != 0) {
      v4 = *(_DWORD*)(v5 + 32);
    }
    else {
      v4 = 0;
    }
  }
  return (float)v4 / 1000.0;
}

void ObjectTransparent_f392c0(__int64 a1, __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  bool v28;
  unsigned __int64 v29;
  int v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int8* v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 i;
  __int64 v40;
  __int64 v41;
  unsigned __int8* v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  _QWORD* v46;
  _QWORD* v47;
  _QWORD* v48;
  __int64 v49;
  _QWORD* v50;
  _QWORD* v51;
  __int64 v52;
  int v54;
  struct {
    __int64 v55;
    __int64 v56;
    __int64 v57;
    _QWORD* v58;
    _QWORD* v59;
    _QWORD* v60;
  } v55_;

  v2 = *(_QWORD*)(a1 + 240);
  v4 = *(_QWORD*)(a1 + 248);
  v3 = (_QWORD*)(a1 + 240);
  v5 = *(int*)(a2 + 40);
  v7 = 0xAAAAAAAAAAAAAAABLL * ((v4 - v2) >> 3);
  if (v7 <= v5) {
    v8 = (int)v5 + 1;
    if (v8 <= v7) {
      if (v8 < v7) {
        v54 = *(_DWORD*)(a2 + 40);
        v9 = v2 + 24LL * (int)v8;
        if (v9 != v4) {
          v10 = *(_QWORD*)(a1 + 248);
          v11 = fw_memory_g_heap_manager_ptr;
          do {
            v15 = *(_QWORD*)(v10 - 24);
            v10 -= 24;
            v13 = v15;
            if (v15 != 0) {
              v16 = *(_QWORD*)(v4 - 16);
              if (v13 == v16) {
                goto LABEL_8;
              }
              do {
                v17 = *(_QWORD*)(v16 - 24);
                if (v17 != 0) {
                  *(_QWORD*)(v16 - 16) = v17;
                  if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
                    v18 = 128;
                  }
                  else {
                    v18 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v11 + v18, v17);
                }
                v16 -= 48;
              } while (v16 != v13);
              v12 = *(_QWORD*)(v4 - 24);
              *(_QWORD*)(v4 - 16) = v13;
              v13 = v12;
              if (v12 != 0) {
              LABEL_8:
                if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
                  v14 = 128;
                }
                else {
                  v14 = 56;
                }
                nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v11 + v14, v13);
              }
            }
            v4 = v10;
          } while (v9 != v10);
        }
        LODWORD(v5) = v54;
        *(_QWORD*)(a1 + 248) = v9;
      }
    }
    else {
      GameRoutine_f3b6f0_alt1((__int64*)(a1 + 240), v8 - v7);
    }
  }
  v19 = (__int64*)(*v3 + 24LL * (int)v5);
  v20 = *v19;
  v21 = v19[1];
  if (*v19 != v21) {
    while (*(_QWORD*)(v20 + 8) != a2) {
      v20 += 48;
      if (v20 == v21) {
        goto LABEL_29;
      }
    }
  }
  if (v20 != v21) {
    *(_BYTE*)v20 = 0;
    return;
  }
LABEL_29:
  v22 = *(_QWORD*)(a2 + 32);
  LOBYTE(v55_.v55) = 0;
  v55_.v56 = a2;
  v55_.v57 = 0;
  if (v22 == 0) {
    goto LABEL_39;
  }
  v23 = *(unsigned __int8*)(v22 + 72);
  v24 = v22 + 73;
  v27 = v22 + 80;
  v25 = *(_QWORD*)(v22 + 80);
  v26 = *(_QWORD*)(v27 + 8);
  v28 = (v23 & 1) == 0;
  v29 = v23 >> 1;
  if (v28) {
    v30 = v29;
  }
  else {
    v24 = v26;
    v30 = v25;
  }
  if (v24 == 0) {
  LABEL_39:
    v35 = 0;
    goto LABEL_49;
  }
  v31 = 0xCBF29CE484222325LL;
  if (v30 >= 8) {
    v32 = 7;
    do {
      v33 = (unsigned __int8*)(v24 + v32);
      v32 += 8LL;
      v31 = (0x100000001B3LL *
             ((0x100000001B3LL *
               ((0x100000001B3LL *
                 ((0x100000001B3LL *
                   ((0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL * v31) ^ *(v33 - 7))) ^
                        *(v33 - 6))) ^
                      *(v33 - 5))) ^
                    *(v33 - 4))) ^
                  *(v33 - 3))) ^
                *(v33 - 2))) ^
              *(v33 - 1))) ^
            *v33;
    } while (v32 < (v30 & 0x7FFFFFFFu));
    v34 = v30 & 0x7FFFFFF8;
    if ((v30 & 0x7FFFFFF8) >= v30) {
      goto LABEL_46;
    }
  LABEL_41:
    v36 = v34;
    v37 = (unsigned int)v30;
    v38 = v30 & 7;
    for (i = v36; v38 != 0; v31 = (0x100000001B3LL * v31) ^ v40) {
      v40 = *(unsigned __int8*)(v24 + i++);
      --v38;
    }
    if ((unsigned __int64)(v36 - v37) <= 0xFFFFFFFFFFFFFFF8LL) {
      v41 = v37 - i;
      v42 = (unsigned __int8*)(i + v24 + 3);
      do {
        v41 -= 8;
        v43 = (0x100000001B3LL *
               ((0x100000001B3LL *
                 ((0x100000001B3LL *
                   ((0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL * v31) ^ *(v42 - 3))) ^
                        *(v42 - 2))) ^
                      *(v42 - 1))) ^
                    *v42)) ^
                  v42[1])) ^
                v42[2])) ^
              v42[3];
        v44 = v42[4];
        v42 += 8;
        v31 = (0x100000001B3LL * v43) ^ v44;
      } while (v41 != 0);
    }
    goto LABEL_46;
  }
  v34 = 0;
  if (v30 > 0) {
    goto LABEL_41;
  }
LABEL_46:
  if (v31 != 0) {
    v35 = v31;
  }
  else {
    v35 = -1;
  }
LABEL_49:
  v45 = (__int64*)fw_memory_g_heap_manager_ptr;
  v46 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  *v46 = v35;
  v47 = v46;
  v55_.v58 = v46;
  v55_.v59 = v46 + 1;
  v55_.v60 = v46 + 1;
  v48 = (_QWORD*)v19[1];
  if ((unsigned __int64)v48 >= v19[2]) {
    v51 = ObjectTransparent_f3b8e0(v19, &v55_.v55);
  }
  else {
    v49 = v55_.v56;
    *v48 = v55_.v55;
    v48[1] = v49;
    v48[2] = v55_.v57;
    v50 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v45, 8, 16, 0);
    v48[3] = v50;
    v48[4] = v50;
    v48[5] = v50 + 1;
    *v50 = *v47;
    v48[4] = v50 + 1;
    v51 = v48 + 6;
  }
  v19[1] = (__int64)v51;
  ObjectTransparentModuleBase_febc00_alt1(a2);
  v52 = 128;
  if (*(_QWORD*)(*v45 + 200) == 0) {
    v52 = 56;
  }
  nn_mem_StandardAllocator_Free_alt3(*v45 + v52, (__int64)v47);
}

void ObjectTransparent_f396e0(__int64 a1, __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  unsigned __int8* v23;
  unsigned __int8* v24;
  __int64* v25;
  __int64* v26;
  unsigned __int64 v27;
  unsigned __int8* v28;
  bool v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int8* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 i;
  __int64 v38;
  unsigned __int8* v39;
  __int64 v40;
  unsigned __int8* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  _QWORD* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v66;
  __int64* v67;
  struct {
    __int64 v68;
    __int64 v69;
    __int64 v70;
    char* v71;
    __int64* v72;
    unsigned __int64 v73;
  } v68_;

  v2 = *(_QWORD*)(a1 + 240);
  v4 = *(_QWORD*)(a1 + 248);
  v3 = (_QWORD*)(a1 + 240);
  v5 = *(int*)(a2 + 40);
  v7 = 0xAAAAAAAAAAAAAAABLL * ((v4 - v2) >> 3);
  if (v7 <= v5) {
    v8 = (int)v5 + 1;
    if (v8 <= v7) {
      if (v8 < v7) {
        v66 = *(_DWORD*)(a2 + 40);
        v9 = v2 + 24LL * (int)v8;
        if (v9 != v4) {
          v10 = *(_QWORD*)(a1 + 248);
          v11 = fw_memory_g_heap_manager_ptr;
          do {
            v15 = *(_QWORD*)(v10 - 24);
            v10 -= 24;
            v13 = v15;
            if (v15 != 0) {
              v16 = *(_QWORD*)(v4 - 16);
              if (v13 == v16) {
                goto LABEL_8;
              }
              do {
                v17 = *(_QWORD*)(v16 - 24);
                if (v17 != 0) {
                  *(_QWORD*)(v16 - 16) = v17;
                  if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
                    v18 = 128;
                  }
                  else {
                    v18 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v11 + v18, v17);
                }
                v16 -= 48;
              } while (v16 != v13);
              v12 = *(_QWORD*)(v4 - 24);
              *(_QWORD*)(v4 - 16) = v13;
              v13 = v12;
              if (v12 != 0) {
              LABEL_8:
                if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
                  v14 = 128;
                }
                else {
                  v14 = 56;
                }
                nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v11 + v14, v13);
              }
            }
            v4 = v10;
          } while (v9 != v10);
        }
        LODWORD(v5) = v66;
        *(_QWORD*)(a1 + 248) = v9;
      }
    }
    else {
      GameRoutine_f3b6f0_alt1((__int64*)(a1 + 240), v8 - v7);
    }
  }
  v19 = (__int64*)(*v3 + 24LL * (int)v5);
  v20 = *v19;
  v21 = (__int64*)v19[1];
  if ((__int64*)*v19 != v21) {
    while (*(_QWORD*)(v20 + 16) != a2) {
      v20 += 48;
      if ((__int64*)v20 == v21) {
        goto LABEL_29;
      }
    }
  }
  if ((__int64*)v20 != v21) {
    *(_BYTE*)v20 = 0;
    return;
  }
LABEL_29:
  v22 = *(_QWORD*)(a2 + 32);
  LOBYTE(v68_.v68) = 0;
  v68_.v71 = nullptr;
  v68_.v72 = nullptr;
  v23 = *(unsigned __int8**)(v22 + 192);
  v24 = *(unsigned __int8**)(v22 + 200);
  v68_.v73 = 0;
  v68_.v69 = 0;
  v68_.v70 = a2;
  if (v23 != v24) {
    v67 = v19;
    v25 = nullptr;
    v26 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v27 = *v23;
      v28 = *((unsigned __int8**)v23 + 2);
      v29 = (v27 & 1) == 0;
      v30 = v27 >> 1;
      if (v29) {
        v28 = v23 + 1;
      }
      if (!v29) {
        v30 = *((_QWORD*)v23 + 1);
      }
      if (v28 != nullptr) {
        break;
      }
      v35 = 0;
    LABEL_54:
      if ((unsigned __int64)v25 < v68_.v73) {
        *v25++ = v35;
      }
      else {
        v44 = (__int64)v68_.v71;
        v45 = (char*)v25 - v68_.v71;
        v46 = ((char*)v25 - v68_.v71) >> 3;
        v47 = v46 + 1;
        if ((unsigned __int64)(v46 + 1) >> 61 != 0) {
          goto LABEL_85;
        }
        v48 = v68_.v73 - (_QWORD)v68_.v71;
        if ((__int64)(v68_.v73 - (_QWORD)v68_.v71) >> 2 > v47) {
          v47 = v48 >> 2;
        }
        if ((unsigned __int64)v48 >= 0x7FFFFFFFFFFFFFF8LL) {
          v49 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v49 = v47;
        }
        if (v49 != 0) {
          if (v49 >> 61 != 0) {
            GameRoutine_60a210_alt1();
          }
          v50 = fw_memory_HeapManager_Allocate_alt1(*v26, 8 * v49, 16, 0);
        }
        else {
          v50 = 0;
        }
        v51 = v50 + 8 * v49;
        v52 = v50 + v45 - 8 * v46;
        *(_QWORD*)(v50 + v45) = v35;
        v25 = (__int64*)(v50 + v45 + 8);
        memcpy_alt1(v52, v44, v45);
        v68_.v71 = (char*)v52;
        v68_.v73 = v51;
        if (v44 != 0) {
          v53 = 128;
          if (*(_QWORD*)(*v26 + 200) == 0) {
            v53 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(*v26 + v53, v44);
        }
      }
      v23 += 24;
      v68_.v72 = v25;
      if (v23 == v24) {
        v19 = v67;
        v21 = (__int64*)v67[1];
        goto LABEL_71;
      }
    }
    if ((int)v30 < 8) {
      v34 = 0;
      v32 = 0xCBF29CE484222325LL;
      if ((int)v30 <= 0) {
      LABEL_51:
        if (v32 != 0) {
          v35 = v32;
        }
        else {
          v35 = -1;
        }
        goto LABEL_54;
      }
    }
    else {
      v31 = 7;
      v32 = 0xCBF29CE484222325LL;
      do {
        v33 = &v28[v31];
        v31 += 8LL;
        v32 = (0x100000001B3LL *
               ((0x100000001B3LL *
                 ((0x100000001B3LL *
                   ((0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL *
                           ((0x100000001B3LL * v32) ^ *(v33 - 7))) ^
                          *(v33 - 6))) ^
                        *(v33 - 5))) ^
                      *(v33 - 4))) ^
                    *(v33 - 3))) ^
                  *(v33 - 2))) ^
                *(v33 - 1))) ^
              *v33;
      } while (v31 < (v30 & 0x7FFFFFFF));
      v34 = v30 & 0x7FFFFFF8;
      if ((int)(v30 & 0x7FFFFFF8) >= (int)v30) {
        goto LABEL_51;
      }
    }
    v36 = v30 & 7;
    for (i = v34; v36 != 0; v32 = (0x100000001B3LL * v32) ^ v38) {
      v38 = v28[i++];
      --v36;
    }
    if (v34 - (unsigned __int64)(unsigned int)v30 <= 0xFFFFFFFFFFFFFFF8LL) {
      v39 = &v28[i];
      v40 = (unsigned int)v30 - i;
      v41 = v39 + 3;
      do {
        v40 -= 8;
        v42 = (0x100000001B3LL *
               ((0x100000001B3LL *
                 ((0x100000001B3LL *
                   ((0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL * v32) ^ *(v41 - 3))) ^
                        *(v41 - 2))) ^
                      *(v41 - 1))) ^
                    *v41)) ^
                  v41[1])) ^
                v41[2])) ^
              v41[3];
        v43 = v41[4];
        v41 += 8;
        v32 = (0x100000001B3LL * v42) ^ v43;
      } while (v40 != 0);
    }
    goto LABEL_51;
  }
  v25 = nullptr;
LABEL_71:
  if ((unsigned __int64)v21 >= v19[2]) {
    v60 = ObjectTransparent_f3b8e0(v19, &v68_.v68);
    v56 = (__int64)v68_.v71;
  }
  else {
    v54 = v68_.v68;
    v55 = v68_.v69;
    v21[4] = 0;
    v21[5] = 0;
    *v21 = v54;
    v21[1] = v55;
    v56 = (__int64)v68_.v71;
    v57 = (char*)v25 - v68_.v71;
    v29 = v25 == (__int64*)v68_.v71;
    v21[2] = v68_.v70;
    v21[3] = 0;
    if (!v29) {
      if ((v57 & 0x8000000000000000LL) != 0) {
      LABEL_85:
        GameRoutine_65c760_alt1();
      }
      v58 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v57, 16, 0);
      v59 = v58 + v57;
      v21[3] = v58;
      v21[4] = v58;
      v21[5] = v58 + v57;
      memcpy_alt1(v58, v56, v57);
      v21[4] = v59;
    }
    v60 = v21 + 6;
  }
  v61 = v68_.v69;
  v62 = v68_.v70;
  v19[1] = (__int64)v60;
  if (v61 != 0) {
    v63 = v61;
  }
  else {
    v63 = v62;
  }
  ObjectTransparentModuleBase_febc00_alt1(v63);
  if (v56 != 0) {
    v64 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v64 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v64, v56);
  }
}

void game_graphics_ObjectTransparent_Run(float32x4_t* a1, char a2)
{

#pragma clang fp contract(off)
  __int64** v2;
  __int64** v3;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int32 v20;
  __int64* v21;
  float v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned int** j;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  int v30;
  int8x16_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  float32x4_t* v40;
  __int64 v41;
  __int128 v42;
  unsigned int* v43;
  unsigned int** v44;
  __int64 v45;
  int v46;
  int v47;
  unsigned __int64 v48;
  int v49;
  unsigned __int64* v50;
  _QWORD* v51;
  _QWORD* v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64 (***v55)();
  __int64 v56;
  _QWORD* v57;
  unsigned __int64 i;
  __int64 v59;
  __int64* v60;
  int v61;
  unsigned __int32 v62;
  __int64 v63;
  __int64 (**v64)();
  __int64 v65;
  __int64 v66;
  __int64 v67;
  float32x4_t v68;
  int8x16_t v69;
  float v70;
  float32x4_t* v71;
  float32x4_t v72;
  unsigned __int64 v73;
  float32x4_t v74;
  int8x16_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  __int64 v79;
  char* v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  __int64 v86;
  float32x4_t* v87;
  __int64 v88;
  __int64 v89;
  int v90;
  char v91;
  __int64 v92;
  _QWORD* v93;
  __int64 v94;
  unsigned __int64 v95;
  unsigned int* v96;
  __int64 (**v97)();
  unsigned int* v98;
  __int64 v99;
  int v100;
  int v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  unsigned __int64* v104;
  _QWORD* v105;
  _QWORD* v106;
  __int64 v107;
  unsigned __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64* v114;
  float v115;
  __int128 v116;
  char v117;
  __int64 v118;
  float32x4_t v119;
  __int128 v120;
  __int64* v121;
  unsigned __int32* v122;
  struct {
    __int64 v123;
    __int64 v124;
    __int64 v125;
  } v123_;
  struct {
    __int64 v126;
    __int64 v127;
    __int64 v128;
  } v126_;
  struct {
    unsigned __int32 v129;
    char v130;
    char gap141_[3];
    __int64 v131;
    __int64 v132;
  } v129_;
  struct {
    __int64 (**v133)();
    __int64 (**v134)();
    __int128* v135;
    char v136;
    char gap185_[7];
    __int64 (***v137)();
    char gap200_[32];
    unsigned __int64 v138;
  } v133_;

  v3 = (__int64**)LANES128(a1[15]).n128_u64[0];
  v2 = (__int64**)LANES128(a1[15]).n128_u64[1];
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v3 != v2) {
    v117 = a2;
    while (1) {
      v6 = *v3;
      v7 = v3[1];
      if (*v3 != v7) {
        while ((*(_BYTE*)v6 & 1) == 0) {
          v6 += 6;
          if (v6 == v7) {
            goto LABEL_4;
          }
        }
      }
      v8 = v6 + 6;
      if (v6 != v7 && v8 != v7) {
        break;
      }
      if (v6 != v7) {
        goto LABEL_25;
      }
    LABEL_4:
      v3 += 3;
      if (v3 == v2) {
        v3 = (__int64**)LANES128(a1[15]).n128_u64[0];
        v17 = LANES128(a1[15]).n128_u64[1];
        a2 = v117;
        goto LABEL_35;
      }
    }
    do {
      if ((*(_BYTE*)v8 & 1) == 0) {
        v10 = *v8;
        v11 = v8[2];
        v12 = v6[3];
        v6[1] = v8[1];
        v6[2] = v11;
        *v6 = v10;
        if (v12 != 0) {
          v13 = *v5;
          v6[4] = v12;
          if (*(_QWORD*)(v13 + 200) != 0) {
            v14 = 128;
          }
          else {
            v14 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(v13 + v14, v12);
          v6[4] = 0;
          v6[5] = 0;
          v6[3] = 0;
        }
        v6[3] = v8[3];
        v6[4] = v8[4];
        v6[5] = v8[5];
        v6 += 6;
        v8[4] = 0;
        v8[5] = 0;
        v8[3] = 0;
      }
      v8 += 6;
    } while (v8 != v7);
    v7 = v3[1];
    if (v6 == v7) {
      goto LABEL_4;
    }
  LABEL_25:
    while (v7 != v6) {
      v15 = *(v7 - 3);
      if (v15 != 0) {
        *(v7 - 2) = v15;
        if (*(_QWORD*)(*v5 + 200) != 0) {
          v16 = 128;
        }
        else {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(*v5 + v16, v15);
      }
      v7 -= 6;
    }
    v3[1] = v6;
    goto LABEL_4;
  }
  v17 = LANES128(a1[15]).n128_u64[0];
LABEL_35:
  v18 = GameData_212c638;
  v19 = (((*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
           *(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL))
          << 29) -
         0x100000000LL) >>
        32;
  if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v17 - (_QWORD)v3) >> 3) <= v19) {
    return;
  }
  v20 = LANES128(a1[19]).n128_u32[0];
  v129_.v130 = a2 & 1;
  v129_.v129 = v20;
  if ((a2 & 1) != 0) {
    v129_.v131 = 0;
    v129_.v132 = 0;
  }
  else {
    LODWORD(v129_.v131) = 0;
    LODWORD(v129_.v132) = 0;
    v21 = (__int64*)GameData_212c7d8[0];
    v22 = ObjectTransparent_f391a0(*(_QWORD*)GameData_212c7d8[0], 1);
    v23 = *v21;
    *((float*)&v129_.v131 + 1) = v22;
    HIDWORD(v129_.v132) = COERCE_UNSIGNED_INT(ObjectTransparent_f39230(v23, 1));
  }
  v24 = LANES128(a1[17]).n128_u64[0];
  v126_.v127 = 0;
  v126_.v128 = 0;
  v123_.v125 = 0;
  v126_.v126 = 0;
  v123_.v123 = 0;
  v123_.v124 = 0;
  LANES128(a1[17]).n128_u64[1] = v24;
  j = (unsigned int**)GameData_21323e8[0];
  if (LANES128(a1[1]).n128_u8[0] == 0) {
    goto LABEL_123;
  }
  v26 = LANES128(a1[15]).n128_u64[0];
  v28 = *(_QWORD*)(*(_QWORD*)v18 + 24LL);
  v27 = *(_QWORD*)(*(_QWORD*)v18 + 32LL);
  v29 = (((v27 - v28) << 29) - 0x100000000LL) >> 32;
  if (0xAAAAAAAAAAAAAAABLL *
              ((__int64)(LANES128(a1[15]).n128_u64[1] - v26) >> 3) <=
          v29 ||
      *(_QWORD*)(v26 + 24LL * (int)v29) ==
          *(_QWORD*)(v26 + 24LL * (int)v29 + 8)) {
    goto LABEL_123;
  }
  v30 = LANES128(a1[5]).n128_u8[0];
  v133_.v138 = v19;
  if (v30 != 1) {
    if (v28 == v27) {
      goto LABEL_56;
    }
    v35 = *(_QWORD*)(v27 - 8);
    if (v35 == 0) {
      goto LABEL_56;
    }
    v36 = *(_QWORD*)(v35 + 24);
    v37 = *(_QWORD*)(v35 + 32);
    if (v37 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
        std___1___shared_weak_count___release_weak_alt2(v37);
      }
    }
    if (v36 == 0) {
      goto LABEL_56;
    }
    v31 = Camera_b3bb60_alt1(v36);
    v32 = *(float32x4_t*)(v36 + 32);
    if (LANES128(a1[8]).n128_u8[0] == 1) {
      goto LABEL_45;
    }
    LANES128(v32).n128_u32[3] = 0;
    LANES128(v31).n128_u32[3] = 0;
    a1[6] = v31;
    a1[7] = v32;
  LABEL_55:
    LANES128(a1[8]).n128_u8[0] = 1;
    goto LABEL_56;
  }
  if (LANES128(a1[8]).n128_u8[0] != 1) {
    v38 = LANES128(a1[3]).n128_u64[1];
    LANES128(a1[6]).n128_u64[0] = LANES128(a1[3]).n128_u64[0];
    LANES128(a1[6]).n128_u64[1] = v38;
    v39 = LANES128(a1[4]).n128_u64[1];
    LANES128(a1[7]).n128_u64[0] = LANES128(a1[4]).n128_u64[0];
    LANES128(a1[7]).n128_u64[1] = v39;
    goto LABEL_55;
  }
  v31 = a1[3];
  v32 = a1[4];
LABEL_45:
  LANES128(a1[6]).n128_u64[0] = LANES128(v31).n128_u64[0];
  LANES128(a1[7]).n128_u64[0] = LANES128(v32).n128_u64[0];
  v33 = a1[6];
  v34 = a1[7];
  LANES128(v33).n128_u64[1] = LANES128(v31).n128_u32[2];
  LANES128(v34).n128_u64[1] = LANES128(v32).n128_u32[2];
  a1[6] = v33;
  a1[7] = v34;
LABEL_56:
  v40 = a1 + 9;
  v41 = 144;
  v118 = GameData_212e368[0] + 16;
  do {
    if (LANES128(*(v40)).n128_u64[1] - LANES128(*(v40)).n128_u64[0] >= 0x121) {
      LOWORD(v120) = 0;
      *(_QWORD*)((char*)&v120 + 4) = 0;
      v121 = nullptr;
      LODWORD(v122) = 0;
      nn_os_InitializeMutex_alt1((__int64)&v120, false, 0);
      fw_world_JobContext_Drain_alt1(*j);
      v43 = *j;
      v44 = j;
      v45 = (__int64)(*j + 8);
      do {
        v46 = v43[2];
        v47 = (v46 + 1) & 0xFFFFFF;
        if (v46 + 1 <= 0) {
          v47 = -(-(v46 + 1) & 0xFFFFFF);
        }
        v43[2] = v47;
        v48 = atomic_load((unsigned __int64*)(v45 + 32LL * (v46 & 0x3F)));
        if (v48 != 0) {
          v49 = -1;
        }
        else {
          v49 = v46;
        }
      } while (v49 < 0);
      v50 = (unsigned __int64*)(v45 + 32LL * (v49 & 0x3F));
      nn_os_ClearLightEvent_alt1((__int64)(v50 + 1));
      v51 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v5, 80, 16, 0);
      v51[1] = 0;
      v51[2] = 0;
      v51[8] = 0;
      v52 = v51;
      *v51 = v118;
      v53 = v50[3];
      v50[3] = (unsigned __int64)v52;
      if (v53 != 0) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)v53 + 8LL))(v53);
      }
      v54 = v49 | 0xC0000000;
      atomic_store(v54, v50);
      v52[1] = v43;
      *((_DWORD*)v52 + 4) = v54;
      v55 = (__int64 (***)(void))fw_memory_HeapManager_Allocate_alt1(*v5, 40,
                                                                     16, 0);
      v55[4] = (__int64 (**)(void))a1;
      v133_.v137 = v55;
      *v55 = GameData_1ff46d8;
      v55[1] = (__int64 (**)(void))&v120;
      v55[2] = (__int64 (**)(void))&v126_.v126;
      v55[3] = (__int64 (**)(void))v40;
      fw_world_SwapCallables_alt1(&v133_.v133, v52 + 4);
      if (v133_.v137 == &v133_.v133) {
        v56 = 4;
        j = v44;
      }
      else {
        j = v44;
        if (v133_.v137 == nullptr) {
        LABEL_78:
          fw_world_JobQueue_Submit_alt1(*((_QWORD*)v43 + 2), v54);
          fw_world_JobContext_Wait_alt1((__int64)*j, v54);
          nn_os_FinalizeMutex_alt1((__int64)&v120);
          goto LABEL_58;
        }
        v56 = 5;
      }
      ((__int64 (*)(__int64))(*v133_.v137)[v56])((__int64)v133_.v137);
      goto LABEL_78;
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)GameData_212c840) != 0) {
      v60 = GameData_212c838;
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c838) = 0;
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60 + 8) = 0;
      *v60 = 0;
      v60[1] = 0;
      *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v60) = 0;
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v60) = 0;
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v60) =
          (_UNKNOWN*)1065353216;
      *((_BYTE*)((char*)0x40LL) + (_QWORD)v60) = 0;
      *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v60) = 0;
      GameRoutine_14a0820_alt1(v60);
      GameRoutine_2b0_alt1();
      __cxa_guard_release_alt1((__int64)GameData_212c840);
    }
    v57 = *(_QWORD**)(*GameData_212c838 + 32);
    (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*v57 + 936LL))(*v57, 0, 0);
    v59 = LANES128(*(v40)).n128_u64[0];
    for (i = LANES128(*(v40)).n128_u64[1]; v59 != i; v59 += 32) {
      ObjectTransparent_f3b040_alt4((__int64)a1, (__int64)&v126_.v126, v59, 0);
    }
    (*(void (**)(_QWORD))(*(_QWORD*)*v57 + 944LL))(*v57);
  LABEL_58:
    v41 += 24;
    v40 = (float32x4_t*)((char*)a1 + v41);
  } while (v41 != 240);
  v61 = LANES128(a1[8]).n128_u8[0];
  v62 = LANES128(a1[18]).n128_u32[2];
  if (v61 == 1 && v62 == 1) {
    if (LANES128(a1[18]).n128_u32[3] == 1) {
      v63 = 0x40000;
    }
    else {
      v63 = 0x200000000LL;
    }
    collision_671400_alt1((void*)(&v133_.v133), a1 + 6, a1 + 7, v63);
    if (v133_.v136 == 1) {
      v65 = (__int64)v133_.v133;
      v64 = v133_.v134;
      if (v133_.v133 == v133_.v134) {
      LABEL_91:
        if (v65 != 0) {
          v66 = *v5;
          v133_.v134 = (__int64 (**)(void))v65;
          v67 = 128;
          if (*(_QWORD*)(v66 + 200) == 0) {
            v67 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(v66 + v67, v65);
        }
      }
      else {
        do {
          ObjectTransparent_f3b380_alt2(&v126_.v126,
                                        *(unsigned __int8**)(v65 + 56), 0);
          v65 += 80;
        } while ((__int64 (**)(void))v65 != v64);
        if (v133_.v136 == 1) {
          v65 = (__int64)v133_.v133;
          goto LABEL_91;
        }
      }
    }
    LODWORD(v19) = v133_.v138;
    if ((LANES128(a1[8]).n128_u8[0] & 1) != 0) {
      v62 = LANES128(a1[18]).n128_u32[2];
    LABEL_98:
      if (v62 == 0) {
        v68 = vsubq_f32(a1[6], a1[7]);
        v69 = vmulq_f32(v68, v68);
        LANES128(v69).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v69, v69, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0])))
                .n64_u64[0];
        v70 =
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]))))
                .n64_f32[0];
        if (v70 > 0x0.0p+0f) {
          v71 = (float32x4_t*)LANES128(a1[17]).n128_u64[1];
          *(_QWORD*)&v42 = 0;
          v115 = v70;
          do {
            v72 = a1[6];
            v73 = LANES128(a1[18]).n128_u64[0];
            v74 = vsubq_f32(a1[7], v72);
            v75 = vmulq_f32(v74, v74);
            LANES128(v75).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v75, v75, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v75).n128_u64[0] =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v75).n128_u64[1] = LANES128(v75).n128_u64[0];
            v76 = vrsqrteq_f32(v75);
            v77 = vmulq_f32(v76, vrsqrtsq_f32(v76, vmulq_f32(v75, v76)));
            v78 = vaddq_f32(
                v72,
                vmulq_n_f32(
                    vbicq_s8(
                        vmulq_f32(
                            v74, vmulq_f32(v77, vrsqrtsq_f32(
                                                    v77, vmulq_f32(v75, v77)))),
                        vceqzq_f32(v75)),
                    *(float*)&v42));
            LANES128(v78).n128_u32[3] = 0;
            if ((unsigned __int64)v71 < v73) {
              *v71 = v78;
              LANES128(v71[1]).n128_u32[0] = 1082130432;
              LANES128(v71[1]).n128_u8[4] = 0;
              v71 += 2;
            }
            else {
              v79 = LANES128(a1[17]).n128_i64[0];
              v80 = (char*)v71 - v79;
              v81 = ((__int64)v71 - v79) >> 5;
              v82 = v81 + 1;
              if ((unsigned __int64)(v81 + 1) >> 59 != 0) {
                GameRoutine_d28710_alt1();
              }
              v83 = v73 - v79;
              v116 = v42;
              v119 = v78;
              if (v83 >> 4 > v82) {
                v82 = v83 >> 4;
              }
              if ((unsigned __int64)v83 >= 0x7FFFFFFFFFFFFFE0LL) {
                v84 = 0x7FFFFFFFFFFFFFFLL;
              }
              else {
                v84 = v82;
              }
              if (v84 >> 59 != 0) {
                GameRoutine_60a210_alt1();
              }
              v85 = 32 * v84;
              v86 = fw_memory_HeapManager_Allocate_alt1(*v5, 32 * v84, 16, 0);
              v87 = (float32x4_t*)&v80[v86];
              LANES128(v87[1]).n128_u32[0] = 1082130432;
              LANES128(v87[1]).n128_u8[4] = 0;
              *v87 = v119;
              if ((float32x4_t*)v79 != v71) {
                v88 = v79;
                v89 = (__int64)&v80[v86 + -32 * v81];
                do {
                  *(_QWORD*)(v89 + 8) = *(_QWORD*)(v88 + 8);
                  *(_QWORD*)v89 = *(_QWORD*)v88;
                  v90 = *(_DWORD*)(v88 + 16);
                  v91 = *(_BYTE*)(v88 + 20);
                  v88 += 32;
                  *(_BYTE*)(v89 + 20) = v91;
                  *(_DWORD*)(v89 + 16) = v90;
                  v89 += 32;
                } while ((float32x4_t*)v88 != v71);
              }
              v71 = v87 + 2;
              LANES128(a1[17]).n128_u64[0] =
                  (unsigned __int64)&v80[v86 + -32 * v81];
              LANES128(a1[17]).n128_u64[1] =
                  (unsigned __int64)LANES128(v87[2]).n128_u64;
              LANES128(a1[18]).n128_u64[0] = v86 + v85;
              if (v79 != 0) {
                v92 = 128;
                if (*(_QWORD*)(*v5 + 200) == 0) {
                  v92 = 56;
                }
                nn_mem_StandardAllocator_Free_alt3(*v5 + v92, v79);
              }
              v70 = v115;
              v42 = v116;
            }
            *(float*)&v42 = *(float*)&v42 + 0x1.0000000000000p+2f;
            LANES128(a1[17]).n128_u64[1] = (unsigned __int64)v71;
          } while (*(float*)&v42 < v70);
        }
        if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire_alt1((__int64)GameData_212c840) != 0) {
          v114 = GameData_212c838;
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c838) = 0;
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v114 + 8) = 0;
          *v114 = 0;
          v114[1] = 0;
          *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v114) = 0;
          *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v114) = 0;
          *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v114) =
              (_UNKNOWN*)1065353216;
          *((_BYTE*)((char*)0x40LL) + (_QWORD)v114) = 0;
          *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v114) = 0;
          GameRoutine_14a0820_alt1(v114);
          GameRoutine_2b0_alt1();
          __cxa_guard_release_alt1((__int64)GameData_212c840);
        }
        v93 = *(_QWORD**)(*GameData_212c838 + 32);
        (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*v93 + 936LL))(*v93, 0,
                                                                       0);
        v94 = LANES128(a1[17]).n128_i64[0];
        v95 = LANES128(a1[17]).n128_u64[1];
        for (j = (unsigned int**)GameData_21323e8[0]; v94 != v95; v94 += 32) {
          ObjectTransparent_f3b040_alt4((__int64)a1, (__int64)&v123_.v123, v94,
                                        0);
        }
        (*(void (**)(_QWORD))(*(_QWORD*)*v93 + 944LL))(*v93);
        LODWORD(v19) = v133_.v138;
      }
    }
  }
  else {
    LODWORD(v19) = v133_.v138;
    if ((v61 & 1) != 0) {
      goto LABEL_98;
    }
  }
LABEL_123:
  v96 = *j;
  v97 = (__int64 (**)(void))&v3[3 * (int)v19];
  *(_QWORD*)&v120 = &v126_.v126;
  *((_QWORD*)&v120 + 1) = a1;
  v121 = &v123_.v123;
  v122 = &v129_.v129;
  fw_world_JobContext_Drain_alt1(v96);
  v98 = *j;
  v99 = (__int64)(*j + 8);
  do {
    v100 = v98[2];
    v101 = (v100 + 1) & 0xFFFFFF;
    if (v100 + 1 <= 0) {
      v101 = -(-(v100 + 1) & 0xFFFFFF);
    }
    v98[2] = v101;
    v102 = atomic_load((unsigned __int64*)(v99 + 32LL * (v100 & 0x3F)));
    if (v102 != 0) {
      v100 = -1;
    }
  } while (v100 < 0);
  v103 = v100 | 0xC0000000;
  v104 = (unsigned __int64*)(v99 + 32LL * (v100 & 0x3F));
  nn_os_ClearLightEvent_alt1((__int64)(v104 + 1));
  v105 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v5, 80, 16, 0);
  v105[2] = 0;
  v106 = v105;
  v107 = GameData_212e368[0];
  v105[8] = 0;
  *v105 = v107 + 16;
  v105[1] = 0;
  v108 = v104[3];
  v104[3] = (unsigned __int64)v106;
  if (v108 != 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v108 + 8LL))(v108);
  }
  atomic_store(v103, v104);
  v106[1] = v98;
  *((_DWORD*)v106 + 4) = v103;
  v133_.v133 = GameData_1ff4758;
  v133_.v134 = v97;
  v133_.v135 = &v120;
  v133_.v137 = &v133_.v133;
  fw_world_SwapCallables_alt1(&v133_.v133, v106 + 4);
  if (v133_.v137 == &v133_.v133) {
    v109 = 4;
  LABEL_135:
    ((__int64 (*)(__int64))(*v133_.v137)[v109])((__int64)v133_.v137);
  }
  else if (v133_.v137 != nullptr) {
    v109 = 5;
    goto LABEL_135;
  }
  fw_world_JobQueue_Submit_alt1(*((_QWORD*)v98 + 2), v103);
  fw_world_JobContext_Wait_alt1((__int64)*j, v103);
  if (v123_.v123 != 0) {
    v110 = *v5;
    v123_.v124 = v123_.v123;
    v111 = 128;
    if (*(_QWORD*)(v110 + 200) == 0) {
      v111 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(v110 + v111, v123_.v123);
  }
  if (v126_.v126 != 0) {
    v112 = *v5;
    v126_.v127 = v126_.v126;
    v113 = 128;
    if (*(_QWORD*)(v112 + 200) == 0) {
      v113 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(v112 + v113, v126_.v126);
  }
}

__int64 ObjectTransparent_f3a820(__int64 a1, int* a2)
{
  __int64* v4;
  __int64 v5;
  __int64* v6;
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
  unsigned __int64 v30;
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
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD v48[2];

  nn_os_LockMutex_alt2((__int64)GameData_212df28);
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
  GameRoutine_feb9e0_alt1(v5, a1, *a2);
  *(_BYTE*)(v5 + 100) = 0;
  v6 = GameData_212f950[0];
  *(_QWORD*)(v5 + 56) = 0x3F80000000000000LL;
  *(_QWORD*)(v5 + 68) = 0x3F80000000000000LL;
  *(_QWORD*)(v5 + 84) = 0;
  *(_QWORD*)(v5 + 76) = 0;
  *(_QWORD*)(v5 + 89) = 0;
  *(_DWORD*)(v5 + 52) = 0;
  *(_DWORD*)(v5 + 64) = 1;
  *(_QWORD*)v5 = v6 + 2;
  *(_QWORD*)(v5 + 104) = 1065353216;
  *(_DWORD*)(v5 + 44) = 1065353216;
  *(_DWORD*)(v5 + 80) = 1065353216;
  *(_DWORD*)(v5 + 84) = 1065353216;
  ObjectTransparentModule_f3cec0_alt1(v5, 0x1.0000000000000p+0f, 0x0.0p+0f);
  ObjectTransparentModule_f3cec0_alt1(v5, 0x1.0000000000000p+0f,
                                      0x1.0000000000000p+0f);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4b8,
                                  memory_order_acquire);
  v8 = GameData_212d4b0;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212d4b8) != 0) {
    *v8 = wld_Crc32(0, "ObjectTransparentModule", 0x17u);
    __cxa_guard_release_alt1((__int64)GameData_212d4b8);
  }
  v9 = *v8;
  v10 = *(_QWORD*)(a1 + 504);
  v11 = *(_QWORD*)(a1 + 512);
  v12 = v11;
  LODWORD(v48[0]) = v9;
  v48[1] = v5;
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
    v14 = fw_memory_HeapManager_Allocate_alt1(*v4, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v14;
    *(_QWORD*)(a1 + 512) = v14;
    *(_QWORD*)(a1 + 520) = v14 + 112;
    if (v11 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*v4 + v15, v10);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(a1 + 504), v48);
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
    (*(void (**)(__int64))(*(_QWORD*)v5 + 64LL))(v5);
    v17 = *(_BYTE**)(v5 + 8);
    v18 = v17[300] == 3 && v17[301] == 3;
    if (v18 || v17[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 72LL))(v5);
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
      v28 = fw_memory_HeapManager_Allocate_alt1(*v4, 8 * v27, 16, 0);
    }
    else {
      v28 = 0;
    }
    v29 = v28 + 8 * v27;
    v30 = (unsigned __int64)v19 - v22;
    v31 = (__int64)&v23[v28 + -8 * v24];
    *(_QWORD*)&v23[v28] = v5;
    v21 = (__int64)&v23[v28 + 8];
    memcpy_alt1(v31, v22, v30);
    *(_QWORD*)(a1 + 528) = v31;
    *(_QWORD*)(a1 + 536) = v21;
    *(_QWORD*)(a1 + 544) = v29;
    if (v22 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*v4 + v32, v22);
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
    GameRoutine_98f290();
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
      v42 = fw_memory_HeapManager_Allocate_alt1(*v4, 8 * v41, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210_alt1();
  }
  v42 = 0;
LABEL_48:
  v43 = v42 + 8 * v41;
  v44 = (unsigned __int64)v33 - v36;
  v45 = (__int64)&v37[v42 + -8 * v38];
  *(_QWORD*)&v37[v42] = v5;
  v35 = (__int64)&v37[v42 + 8];
  memcpy_alt1(v45, v36, v44);
  *(_QWORD*)(a1 + 552) = v45;
  *(_QWORD*)(a1 + 560) = v35;
  *(_QWORD*)(a1 + 568) = v43;
  if (v36 != 0) {
    v46 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*v4 + v46, v36);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v35;
  GameRoutine_a8c0c0_alt1(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex_alt2((__int64)GameData_212df28);
  return v5;
}

__int64 ObjectTransparent_f3ac60(__int64 a1, int* a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  _BYTE* v12;
  _BYTE* v13;
  bool v14;
  __int64* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  _QWORD v44[2];

  nn_os_LockMutex_alt2((__int64)GameData_212df28);
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  GameRoutine_fb7fe0(v5, a1, *a2);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2221128,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_2221128) != 0) {
    GameData_2221124 = wld_Crc32(0, "InstanceObjectTransparentModule", 0x1Fu);
    __cxa_guard_release_alt1((__int64)&GameData_2221128);
  }
  v6 = *(_QWORD*)(a1 + 504);
  v7 = *(_QWORD*)(a1 + 512);
  v8 = v7;
  LODWORD(v44[0]) = GameData_2221124;
  v44[1] = v5;
  while (v8 != v6) {
    v9 = *(_DWORD*)(v8 - 16);
    v8 -= 16;
    if (v9 == GameData_2221124) {
      if ((*(_BYTE*)(v5 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v6 == v7 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v6) <= 0x6F) {
    v10 = fw_memory_HeapManager_Allocate_alt1(*v4, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v10;
    *(_QWORD*)(a1 + 512) = v10;
    *(_QWORD*)(a1 + 520) = v10 + 112;
    if (v7 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*v4 + v11, v6);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(a1 + 504), v44);
  if ((*(_BYTE*)(v5 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v5 + 16) = 1;
    *(_BYTE*)(v5 + 17) &= ~2u;
    *(_BYTE*)(v5 + 18) &= ~2u;
    *(_BYTE*)(v5 + 19) &= ~2u;
    *(_BYTE*)(v5 + 20) &= ~2u;
    v12 = *(_BYTE**)(v5 + 8);
    v12[632] = 0;
    v12[664] = 0;
    v12[696] = 0;
    v12[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 64LL))(v5);
    v13 = *(_BYTE**)(v5 + 8);
    v14 = v13[300] == 3 && v13[301] == 3;
    if (v14 || v13[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 72LL))(v5);
    }
  }
LABEL_20:
  v15 = *(__int64**)(a1 + 536);
  v16 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v15 >= v16) {
    v18 = *(_QWORD*)(a1 + 528);
    v19 = (char*)v15 - v18;
    v20 = ((__int64)v15 - v18) >> 3;
    v21 = v20 + 1;
    if ((unsigned __int64)(v20 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v22 = v16 - v18;
    if (v22 >> 2 > v21) {
      v21 = v22 >> 2;
    }
    if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF8LL) {
      v23 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v23 = v21;
    }
    if (v23 != 0) {
      if (v23 >> 61 != 0) {
        goto LABEL_56;
      }
      v24 = fw_memory_HeapManager_Allocate_alt1(*v4, 8 * v23, 16, 0);
    }
    else {
      v24 = 0;
    }
    v25 = v24 + 8 * v23;
    v26 = (unsigned __int64)v15 - v18;
    v27 = (__int64)&v19[v24 + -8 * v20];
    *(_QWORD*)&v19[v24] = v5;
    v17 = (__int64)&v19[v24 + 8];
    memcpy_alt1(v27, v18, v26);
    *(_QWORD*)(a1 + 528) = v27;
    *(_QWORD*)(a1 + 536) = v17;
    *(_QWORD*)(a1 + 544) = v25;
    if (v18 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*v4 + v28, v18);
    }
  }
  else {
    *v15 = v5;
    v17 = (__int64)(v15 + 1);
  }
  *(_QWORD*)(a1 + 536) = v17;
  v29 = *(__int64**)(a1 + 560);
  v30 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v29 < v30) {
    *v29 = v5;
    v31 = (__int64)(v29 + 1);
    goto LABEL_52;
  }
  v32 = *(_QWORD*)(a1 + 552);
  v33 = (char*)v29 - v32;
  v34 = ((__int64)v29 - v32) >> 3;
  v35 = v34 + 1;
  if ((unsigned __int64)(v34 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290();
  }
  v36 = v30 - v32;
  if (v36 >> 2 > v35) {
    v35 = v36 >> 2;
  }
  if ((unsigned __int64)v36 >= 0x7FFFFFFFFFFFFFF8LL) {
    v37 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v37 = v35;
  }
  if (v37 != 0) {
    if (v37 >> 61 == 0) {
      v38 = fw_memory_HeapManager_Allocate_alt1(*v4, 8 * v37, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210_alt1();
  }
  v38 = 0;
LABEL_48:
  v39 = v38 + 8 * v37;
  v40 = (unsigned __int64)v29 - v32;
  v41 = (__int64)&v33[v38 + -8 * v34];
  *(_QWORD*)&v33[v38] = v5;
  v31 = (__int64)&v33[v38 + 8];
  memcpy_alt1(v41, v32, v40);
  *(_QWORD*)(a1 + 552) = v41;
  *(_QWORD*)(a1 + 560) = v31;
  *(_QWORD*)(a1 + 568) = v39;
  if (v32 != 0) {
    v42 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v42 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*v4 + v42, v32);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v31;
  GameRoutine_a8c0c0_alt1(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex_alt2((__int64)GameData_212df28);
  return v5;
}

void ObjectTransparent_f3b040(__int64 a1, __int64* a2, __int64 a3, __int64 a4)
{

#pragma clang fp contract(off)
  float32x4_t v4;
  int v5;
  float32x4_t v10;
  float32x4_t v11;
  float v12;
  __int64 v13;
  __int64 v14;
  unsigned __int8** v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int8** v19;
  __int64 v20;
  __int64 v21;
  unsigned __int8** v22;
  unsigned __int8** v23;
  unsigned __int8* v24;
  __int64 v25;
  __int64 v26;
  unsigned __int8** v27;
  unsigned __int8** v28;
  unsigned __int8* v29;
  __int64 v30;
  struct {
    unsigned __int8** v31;
    unsigned __int8** v32;
    char gap16_[8];
    char v33;
  } v31_;
  float32x4_t v34;
  float32x4_t v35;

  LANES128(v4).n128_u32[0] = 0;
  LANES128(v4).n128_u64[1] = 0;
  v5 = *(unsigned __int8*)(a3 + 20);
  LANES128(v11).n128_u64[0] = *(_QWORD*)a3;
  LANES128(v10).n128_u64[0] = *(_QWORD*)a3;
  LANES128(v11).n128_u64[1] = (unsigned int)*(_QWORD*)(a3 + 8);
  LANES128(v10).n128_u64[1] = LANES128(v11).n128_u64[1];
  v35 = v11;
  v34 = v10;
  v12 = *(float*)(a3 + 16);
  if (v5 == 1) {
    LANES128(v35).n128_u32[1] = -1027080192;
    LANES128(v34).n128_u32[1] = 1128792064;
  }
  else {
    LANES128(v4).n128_f32[1] = -(float)(v12 + 0x1.4000000000000p+2f);
    v35 = vaddq_f32(v11, v4);
  }
  if (*(_DWORD*)(a1 + 300) == 1) {
    v13 = 0x40000;
  }
  else {
    v13 = 0x200000000LL;
  }
  collision_673460((void*)(&v31_.v31), &v35,
                   (long double*)LANES128(v34).n128_u64, v13, v12);
  if (v31_.v33 != 1) {
    goto LABEL_16;
  }
  v14 = (__int64)v31_.v31;
  v15 = v31_.v32;
  if (v31_.v31 != v31_.v32) {
    do {
      ObjectTransparent_f3b380_alt2(a2, *(unsigned __int8**)(v14 + 56), a4);
      v14 += 80;
    } while ((unsigned __int8**)v14 != v15);
    if (v31_.v33 != 1) {
      goto LABEL_16;
    }
    v14 = (__int64)v31_.v31;
  }
  if (v14 != 0) {
    v31_.v32 = (unsigned __int8**)v14;
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v14);
  }
LABEL_16:
  if (*(_DWORD*)(a1 + 300) == 1) {
    v17 = 0x40000;
  }
  else {
    v17 = 0x200000000LL;
  }
  collision_673460((void*)(&v31_.v31), &v34,
                   (long double*)LANES128(v35).n128_u64, v17,
                   *(float*)(a3 + 16));
  if (v31_.v33 == 1) {
    v18 = (__int64)v31_.v31;
    v19 = v31_.v32;
    if (v31_.v31 != v31_.v32) {
      do {
        ObjectTransparent_f3b380_alt2(a2, *(unsigned __int8**)(v18 + 56), a4);
        v18 += 80;
      } while ((unsigned __int8**)v18 != v19);
      if (v31_.v33 != 1) {
        goto LABEL_28;
      }
      v18 = (__int64)v31_.v31;
    }
    if (v18 != 0) {
      v31_.v32 = (unsigned __int8**)v18;
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v18);
    }
  }
LABEL_28:
  if (*(_DWORD*)(a1 + 300) == 1) {
    v21 = 0x40000;
  }
  else {
    v21 = 0x200000000LL;
  }
  collision_672fa0((void*)((__int64)&v31_.v31), &v35, v21, *(float*)(a3 + 16));
  if (v31_.v33 == 1) {
    v22 = v31_.v31;
    v23 = v31_.v32;
    if (v31_.v31 != v31_.v32) {
      do {
        v24 = *v22;
        v22 += 6;
        ObjectTransparent_f3b380_alt2(a2, v24, a4);
      } while (v22 != v23);
      if (v31_.v33 != 1) {
        goto LABEL_40;
      }
      v22 = v31_.v31;
    }
    if (v22 != nullptr) {
      v31_.v32 = v22;
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, (__int64)v22);
    }
  }
LABEL_40:
  if (*(_DWORD*)(a1 + 300) == 1) {
    v26 = 0x40000;
  }
  else {
    v26 = 0x200000000LL;
  }
  collision_672fa0((void*)((__int64)&v31_.v31), &v34, v26, *(float*)(a3 + 16));
  if (v31_.v33 == 1) {
    v27 = v31_.v31;
    v28 = v31_.v32;
    if (v31_.v31 != v31_.v32) {
      do {
        v29 = *v27;
        v27 += 6;
        ObjectTransparent_f3b380_alt2(a2, v29, a4);
      } while (v27 != v28);
      if (v31_.v33 != 1) {
        return;
      }
      v27 = v31_.v31;
    }
    if (v27 != nullptr) {
      v31_.v32 = v27;
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, (__int64)v27);
    }
  }
}

__int64 ObjectTransparent_f3b380(__int64 result, unsigned __int8* a2,
                                 __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int8* v4;
  char** v7;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int8* v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 i;
  __int64 v20;
  __int64 v21;
  unsigned __int8* v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  char* v26;
  char* v27;
  unsigned __int64 v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  char* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;

  if (a2 == nullptr) {
    return result;
  }
  v3 = *a2;
  v4 = *((unsigned __int8**)a2 + 2);
  v7 = (char**)result;
  v8 = (v3 & 1) == 0;
  v9 = v3 >> 1;
  if (v8) {
    v4 = a2 + 1;
  }
  if (v8) {
    LODWORD(v10) = v9;
  }
  else {
    v10 = *((_QWORD*)a2 + 1);
  }
  if (v4 != nullptr) {
    v11 = 0xCBF29CE484222325LL;
    if ((int)v10 < 8) {
      v14 = 0;
      if ((int)v10 <= 0) {
        goto LABEL_22;
      }
    }
    else {
      v12 = 7;
      do {
        v13 = &v4[v12];
        v12 += 8LL;
        v11 = (0x100000001B3LL *
               ((0x100000001B3LL *
                 ((0x100000001B3LL *
                   ((0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL *
                           ((0x100000001B3LL * v11) ^ *(v13 - 7))) ^
                          *(v13 - 6))) ^
                        *(v13 - 5))) ^
                      *(v13 - 4))) ^
                    *(v13 - 3))) ^
                  *(v13 - 2))) ^
                *(v13 - 1))) ^
              *v13;
      } while (v12 < ((unsigned int)v10 & 0x7FFFFFFF));
      v14 = v10 & 0x7FFFFFF8;
      if ((v10 & 0x7FFFFFF8) >= (int)v10) {
        goto LABEL_22;
      }
    }
    v16 = v14;
    v17 = (unsigned int)v10;
    v18 = v10 & 7;
    for (i = v16; v18 != 0; v11 = (0x100000001B3LL * v11) ^ v20) {
      v20 = v4[i++];
      --v18;
    }
    if ((unsigned __int64)(v16 - v17) <= 0xFFFFFFFFFFFFFFF8LL) {
      v21 = v17 - i;
      v22 = &v4[i + 3];
      do {
        v21 -= 8;
        v23 = (0x100000001B3LL *
               ((0x100000001B3LL *
                 ((0x100000001B3LL *
                   ((0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL * v11) ^ *(v22 - 3))) ^
                        *(v22 - 2))) ^
                      *(v22 - 1))) ^
                    *v22)) ^
                  v22[1])) ^
                v22[2])) ^
              v22[3];
        v24 = v22[4];
        v22 += 8;
        v11 = (0x100000001B3LL * v23) ^ v24;
      } while (v21 != 0);
    }
  LABEL_22:
    if (v11 != 0) {
      v15 = v11;
    }
    else {
      v15 = -1;
    }
    if (a3 != 0) {
      goto LABEL_26;
    }
    goto LABEL_27;
  }
  v15 = 0;
  if (a3 != 0) {
  LABEL_26:
    result = nn_os_LockMutex(a3);
  }
LABEL_27:
  v26 = *v7;
  v25 = v7[1];
  v27 = *v7;
  if (*v7 != v25) {
    v27 = *v7;
    while (*((_QWORD*)v27 + 1) != v15) {
      v27 += 16;
      if (v27 == v25) {
        goto LABEL_35;
      }
    }
  }
  if (v27 == v25) {
  LABEL_35:
    v28 = (unsigned __int64)v7[2];
    if ((unsigned __int64)v25 >= v28) {
      v30 = (char*)(v25 - v26);
      v31 = (v25 - v26) >> 4;
      v32 = v31 + 1;
      if ((unsigned __int64)(v31 + 1) >> 60 != 0) {
        GameRoutine_f3bb20();
      }
      v33 = v28 - (_QWORD)v26;
      v34 = fw_memory_g_heap_manager_ptr;
      if (v33 >> 3 > v32) {
        v32 = v33 >> 3;
      }
      if ((unsigned __int64)v33 >= 0x7FFFFFFFFFFFFFF0LL) {
        v35 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v35 = v32;
      }
      if (v35 != 0) {
        if (v35 >> 60 != 0) {
          GameRoutine_60a210(result);
        }
        v36 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v35, 16, 0);
      }
      else {
        v36 = 0;
      }
      v37 = &v30[v36];
      v38 = v36 + 16 * v35;
      *(_QWORD*)v37 = a2;
      *((_QWORD*)v37 + 1) = v15;
      v39 = (__int64)&v30[v36 + -16 * v31];
      v29 = (__int64)&v30[v36 + 16];
      result = memcpy(v39, v26, v30);
      *v7 = (char*)v39;
      v7[1] = (char*)v29;
      v7[2] = (char*)v38;
      if (v26 != nullptr) {
        v40 = 128;
        if (*(_QWORD*)(*(_QWORD*)v34 + 200LL) == 0) {
          v40 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v34 + v40, v26);
      }
    }
    else {
      *(_QWORD*)v25 = a2;
      *((_QWORD*)v25 + 1) = v15;
      v29 = (__int64)(v25 + 16);
    }
    v7[1] = (char*)v29;
    if (a3 != 0) {
      return nn_os_UnlockMutex(a3);
    }
  }
  else if (a3 != 0) {
    return nn_os_UnlockMutex(a3);
  }
  return result;
}

_QWORD* ObjectTransparent_f3b8e0(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v7;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64* v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v29;

  v2 = *a1;
  v3 = a1[1];
  v4 = v3 - *a1;
  v5 = 1 - 0x5555555555555555LL * (v4 >> 4);
  if (v5 > 0x555555555555555LL) {
    GameRoutine_f3bb00_alt1();
  }
  if (0x5555555555555556LL * ((a1[2] - v2) >> 4) > v5) {
    v5 = 0x5555555555555556LL * ((a1[2] - v2) >> 4);
  }
  if (0xAAAAAAAAAAAAAAABLL * ((a1[2] - v2) >> 4) >= 0x2AAAAAAAAAAAAAALL) {
    v5 = 0x555555555555555LL;
  }
  if (v5 > 0x555555555555555LL) {
    GameRoutine_60a210_alt1();
  }
  v7 = 3 * v5;
  v9 = (__int64*)fw_memory_g_heap_manager_ptr;
  v10 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v5, 16, 0);
  v11 = *a2;
  v12 = a2[1];
  v13 = (_QWORD*)(v10 + v4);
  v14 = v10;
  v13[4] = 0;
  v13[5] = 0;
  *v13 = v11;
  v13[1] = v12;
  v15 = a2[3];
  v13[2] = a2[2];
  v13[3] = 0;
  v16 = a2[4];
  v17 = v16 - v15;
  if (v16 != v15) {
    v29 = v7;
    if ((v17 & 0x8000000000000000LL) != 0) {
      GameRoutine_65c760_alt1();
    }
    v18 = fw_memory_HeapManager_Allocate_alt1(*v9, v16 - v15, 16, 0);
    v19 = v18 + v17;
    v13[3] = v18;
    v13[5] = v18 + v17;
    memcpy_alt1(v18, v15, v17);
    v13[4] = v19;
    v7 = v29;
  }
  v20 = v14 + 16 * v7;
  if (v2 != v3) {
    v21 = (__int64*)v2;
    v22 = (_QWORD*)((char*)v13 - v4);
    do {
      v23 = *v21;
      v24 = v21[2];
      v22[1] = v21[1];
      v22[2] = v24;
      *v22 = v23;
      v22[3] = v21[3];
      v22[4] = v21[4];
      v22[5] = v21[5];
      v21[4] = 0;
      v21[5] = 0;
      v21[3] = 0;
      v21 += 6;
      v22 += 6;
    } while (v21 != (__int64*)v3);
    do {
      v25 = *(_QWORD*)(v2 + 24);
      if (v25 != 0) {
        *(_QWORD*)(v2 + 32) = v25;
        if (*(_QWORD*)(*v9 + 200) != 0) {
          v26 = 128;
        }
        else {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(*v9 + v26, v25);
      }
      v2 += 48;
    } while (v2 != v3);
    v2 = *a1;
  }
  *a1 = (__int64)v13 - v4;
  a1[1] = (__int64)(v13 + 6);
  a1[2] = v20;
  if (v2 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*v9 + 200) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*v9 + v27, v2);
  }
  return v13 + 6;
}

__int64

game_graphics_ObjectTransparent_ObjectTransparent_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 8);
  result = GameRoutine_f39c40(v1, *(_BYTE*)(v1 + 316));
  *(_BYTE*)(v1 + 316) = 0;
  return result;
}

__int64 game_graphics_ObjectTransparent_Run_lambda0_Invoke(__int64* a1,
                                                           __int64 a2,
                                                           atomic_uint* a3)
{
  __int64 v3;
  unsigned __int8 explicit;
  __int64* v7;
  _QWORD* v8;
  __int64 v9;
  unsigned int v10;
  int add;
  signed int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v17;

  v3 = a1[4];
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                                  memory_order_acquire);
  v7 = GameData_212c838;
  if ((explicit & 1) == 0) {
    v17 = __cxa_guard_acquire(GameData_212c840);
    v7 = GameData_212c838;
    if (v17 != 0) {
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c838) = 0;
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 8) = 0;
      *v7 = 0;
      v7[1] = 0;
      *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v7) = 0;
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v7) = 0;
      *((_BYTE*)((char*)0x40LL) + (_QWORD)v7) = 0;
      *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v7) = 0;
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v7) =
          (_UNKNOWN*)1065353216;
      GameRoutine_14a0820(GameData_212c838);
      GameRoutine_2b0(GameData_212c848[0], GameData_212c838, &GameData_1f50948);
      __cxa_guard_release(GameData_212c840);
      v7 = GameData_212c838;
    }
  }
  v8 = *(_QWORD**)(*v7 + 32);
  (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*v8 + 936LL))(*v8, 0, 0);
  v9 = (*(_QWORD*)(a1[3] + 8) - *(_QWORD*)a1[3]) >> 5;
  if ((int)v9 >= 1) {
    if ((int)v9 /
            (int)((((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                     *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                    2) &
                   0xFFFFFFFE) +
                  2) <=
        1) {
      v10 = 1;
    }
    else {
      v10 = (int)v9 /
            (int)((((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                     *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                    2) &
                   0xFFFFFFFE) +
                  2);
    }
    do {
      add = atomic_fetch_add(a3, v10);
      if (add < (int)v9) {
        v12 = add + v10;
        v13 = add;
        v14 = 32LL * add;
        if ((int)(add + v10) >= (int)v9) {
          v12 = v9;
        }
        v15 = v12;
        do {
          ObjectTransparent_f3b040_alt2(v3, a1[2], *(_QWORD*)a1[3] + v14,
                                        a1[1]);
          ++v13;
          v14 += 32;
        } while (v13 < v15);
        add = v13;
      }
      if (v10 >> 1 <= 1) {
        v10 = 1;
      }
      else {
        v10 >>= 1;
      }
    } while (add < (int)v9);
  }
  return (*(__int64 (**)(_QWORD))(*(_QWORD*)*v8 + 944LL))(*v8);
}

__int64 game_graphics_ObjectTransparent_Run_lambda1_Invoke(__int64 result,
                                                           __int64 a2,
                                                           atomic_uint* a3)
{
  int v3;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  float v11;
  __int64** v12;
  _QWORD* v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  float v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  float v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  float v97;

  v3 = -1431655765 *
       ((*(_QWORD*)(*(_QWORD*)(result + 8) + 8LL) - **(_QWORD**)(result + 8)) >>
        4);
  if (v3 >= 1) {
    v5 = result;
    v6 = GameData_212c7d8[0];
    if (v3 / (int)((((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                      *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                     2) &
                    0xFFFFFFFE) +
                   2) <=
        1) {
      v7 = 1;
    }
    else {
      v7 = v3 / (int)((((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                         *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                        2) &
                       0xFFFFFFFE) +
                      2);
    }
    while (1) {
      LODWORD(v8) = atomic_fetch_add(a3, v7);
      if ((int)v8 < v3) {
        break;
      }
    LABEL_5:
      if (v7 >> 1 <= 1) {
        v7 = 1;
      }
      else {
        v7 >>= 1;
      }
      if ((int)v8 >= v3) {
        return result;
      }
    }
    v9 = v8 + v7;
    v8 = (int)v8;
    if ((int)(v8 + v7) >= v3) {
      v9 = v3;
    }
    v10 = v9;
    while (1) {
      v12 = *(__int64***)(v5 + 16);
      v13 = (_QWORD*)(**(_QWORD**)(v5 + 8) + 48 * v8);
      v14 = v13[1];
      if (v14 == 0) {
        break;
      }
      if (*(_BYTE*)(v14 + 100) == 1) {
        *(_BYTE*)(v14 + 100) = 0;
      }
      v15 = *v12;
      v16 = **v12;
      v17 = (*v12)[1];
      if (v16 == v17) {
        goto LABEL_118;
      }
      v18 = v13[1];
      if (v18 == 0) {
        v34 = v13[3];
        v33 = v13[4];
        if (v33 == v34) {
          goto LABEL_118;
        }
        v35 = 0;
        v36 = (unsigned __int64)(v17 - v16) >> 4;
        while (2) {
          v37 = *v15;
          v38 = v15[1];
          if (*v15 != v38) {
            while (*(_QWORD*)(v37 + 8) != *(_QWORD*)(v34 + 8 * v35)) {
              v37 += 16;
              if (v37 == v38) {
                goto LABEL_45;
              }
            }
          }
          if (v37 != v38) {
            v39 = v13[2];
            if ((*(_BYTE*)(v39 + 49) & 1) != 0) {
              if (*(_BYTE*)(v39 + 48) != 1) {
                goto LABEL_65;
              }
            LABEL_57:
              if ((*(_BYTE*)(v39 + 80) & 1) == 0) {
                v41 = *(_QWORD*)(v39 + 56);
                v42 = *(_QWORD*)(v39 + 64);
                while (v41 != v42) {
                  if (*(_BYTE*)(v41 + 24) == 1) {
                    *(_BYTE*)(v41 + 24) = 0;
                  }
                  v41 += 28;
                }
                *(_BYTE*)(v39 + 80) = 1;
              }
              v43 = *(_QWORD*)(v39 + 56) + 28LL * (int)v35;
              *(_DWORD*)(v43 + 20) = 1;
              *(_BYTE*)(v43 + 24) = 1;
              *(_BYTE*)(v39 + 88) = 1;
            }
            else {
              if (*(_DWORD*)(*(_QWORD*)v6 + 296LL) == 1) {
                goto LABEL_57;
              }
              v40 = *(_QWORD*)(v39 + 32);
              if (v40 != 0 && (*(_BYTE*)(v40 + 164) & 1) != 0) {
                goto LABEL_57;
              }
            }
          LABEL_65:
            LODWORD(v36) = v36 - 1;
            if ((_DWORD)v36 == 0) {
              goto LABEL_118;
            }
            v34 = v13[3];
            v33 = v13[4];
          }
        LABEL_45:
          if (++v35 >= (unsigned __int64)((v33 - v34) >> 3)) {
            goto LABEL_118;
          }
          continue;
        }
      }
      v19 = v13[3];
      v20 = v13[4] - v19;
      if (v20 != 0) {
        v21 = v20 >> 3;
        v22 = 0;
      LABEL_29:
        v23 = **v12;
        while (*(_QWORD*)(v23 + 8) != *(_QWORD*)(v19 + 8 * v22)) {
          v23 += 16;
          if (v23 == v17) {
          LABEL_28:
            if (++v22 == v21) {
              goto LABEL_118;
            }
            goto LABEL_29;
          }
        }
        if (v23 == v17) {
          goto LABEL_28;
        }
        if ((*(_BYTE*)(v18 + 49) & 1) != 0) {
          if (*(_BYTE*)(v18 + 48) == 1) {
            goto LABEL_100;
          }
        }
        else if (*(_DWORD*)(*(_QWORD*)v6 + 296LL) == 1 ||
                 (v53 = *(_QWORD*)(v18 + 32)) != 0 &&
                     (*(_BYTE*)(v53 + 164) & 1) != 0) {
        LABEL_100:
          v54 = 0;
        LABEL_103:
          v55 = **v12;
          while (*(_QWORD*)(v55 + 8) != *(_QWORD*)(v19 + 8 * v54)) {
            v55 += 16;
            if (v55 == v17) {
            LABEL_102:
              if (++v54 == v21) {
                goto LABEL_118;
              }
              goto LABEL_103;
            }
          }
          if (v55 == v17) {
            goto LABEL_102;
          }
          *(_DWORD*)(v18 + 96) = 1;
          *(_BYTE*)(v18 + 100) = 1;
        }
      }
    LABEL_118:
      v59 = v12[2];
      v60 = *v59;
      v61 = v59[1];
      if (*v59 != v61) {
        v62 = v13[1];
        if (v62 != 0) {
          v63 = v13[3];
          v64 = v13[4] - v63;
          if (v64 != 0) {
            v65 = v64 >> 3;
            v66 = 0;
          LABEL_124:
            v67 = v60;
            while (*(_QWORD*)(v67 + 8) != *(_QWORD*)(v63 + 8 * v66)) {
              v67 += 16;
              if (v67 == v61) {
              LABEL_123:
                if (++v66 == v65) {
                  goto LABEL_18;
                }
                goto LABEL_124;
              }
            }
            if (v67 == v61) {
              goto LABEL_123;
            }
            v77 = 0;
          LABEL_148:
            v78 = v60;
            while (*(_QWORD*)(v78 + 8) != *(_QWORD*)(v63 + 8 * v77)) {
              v78 += 16;
              if (v78 == v61) {
              LABEL_147:
                if (++v77 == v65) {
                  goto LABEL_18;
                }
                goto LABEL_148;
              }
            }
            if (v78 == v61) {
              goto LABEL_147;
            }
            if (*(_QWORD*)v6 != 0) {
              v11 = *(float*)(*(_QWORD*)v6 + 312LL);
            }
            else {
              v11 = 0.0;
            }
            if (*(float*)(v62 + 56) >= v11) {
              v11 = *(float*)(v62 + 56);
            }
            *(float*)(v62 + 56) = v11;
          }
        }
        else {
          v69 = v13[3];
          v68 = v13[4];
          if (v68 != v69) {
            v70 = 0;
            v71 = (unsigned __int64)(v61 - v60) >> 4;
            do {
              v72 = *v59;
              v73 = v59[1];
              if (*v59 != v73) {
                while (*(_QWORD*)(v72 + 8) != *(_QWORD*)(v69 + 8 * v70)) {
                  v72 += 16;
                  if (v72 == v73) {
                    goto LABEL_130;
                  }
                }
              }
              if (v72 != v73) {
                v74 = v13[2];
                if (v74 != 0) {
                  if (*(_QWORD*)v6 != 0) {
                    v75 = *(float*)(*(_QWORD*)v6 + 312LL);
                  }
                  else {
                    v75 = 0.0;
                  }
                  v76 = *(_QWORD*)(v74 + 56);
                  if (*(float*)(v76 + 28LL * (int)v70) >= v75) {
                    v75 = *(float*)(v76 + 28LL * (int)v70);
                  }
                  *(float*)(v76 + 28LL * (int)v70) = v75;
                  *(_BYTE*)(v74 + 88) = 1;
                }
                LODWORD(v71) = v71 - 1;
                if ((_DWORD)v71 == 0) {
                  break;
                }
                v69 = v13[3];
                v68 = v13[4];
              }
            LABEL_130:
              ++v70;
            } while (v70 < (v68 - v69) >> 3);
          }
        }
      }
    LABEL_18:
      result = GameRoutine_f3ca00(v13[1], v12[3]);
    LABEL_19:
      if (++v8 >= v10) {
        goto LABEL_5;
      }
    }
    *(_BYTE*)(v13[2] + 80LL) = 0;
    v24 = *v12;
    v25 = **v12;
    v26 = (*v12)[1];
    if (v25 == v26) {
      goto LABEL_154;
    }
    v27 = v13[1];
    v28 = v13[3];
    v29 = v13[4];
    if (v27 != 0) {
      if (v29 != v28) {
        v30 = (v29 - v28) >> 3;
        v31 = 0;
      LABEL_39:
        v32 = **v12;
        while (*(_QWORD*)(v32 + 8) != *(_QWORD*)(v28 + 8 * v31)) {
          v32 += 16;
          if (v32 == v26) {
          LABEL_38:
            if (++v31 == v30) {
              goto LABEL_154;
            }
            goto LABEL_39;
          }
        }
        if (v32 == v26) {
          goto LABEL_38;
        }
        if ((*(_BYTE*)(v27 + 49) & 1) != 0) {
          if (*(_BYTE*)(v27 + 48) != 1) {
            goto LABEL_154;
          }
        }
        else if (*(_DWORD*)(*(_QWORD*)v6 + 296LL) != 1) {
          v56 = *(_QWORD*)(v27 + 32);
          if (v56 == 0 || (*(_BYTE*)(v56 + 164) & 1) == 0) {
            goto LABEL_154;
          }
        }
        v57 = 0;
      LABEL_113:
        v58 = **v12;
        while (*(_QWORD*)(v58 + 8) != *(_QWORD*)(v28 + 8 * v57)) {
          v58 += 16;
          if (v58 == v26) {
          LABEL_112:
            if (++v57 == v30) {
              goto LABEL_154;
            }
            goto LABEL_113;
          }
        }
        if (v58 == v26) {
          goto LABEL_112;
        }
        *(_DWORD*)(v27 + 96) = 1;
        *(_BYTE*)(v27 + 100) = 1;
      }
    LABEL_154:
      v79 = v12[2];
      v80 = *v79;
      v81 = v79[1];
      if (*v79 != v81) {
        v82 = v13[1];
        v83 = v13[3];
        v84 = v13[4];
        if (v82 != 0) {
          if (v84 != v83) {
            v85 = (v84 - v83) >> 3;
            v86 = 0;
          LABEL_160:
            v87 = v80;
            while (*(_QWORD*)(v87 + 8) != *(_QWORD*)(v83 + 8 * v86)) {
              v87 += 16;
              if (v87 == v81) {
              LABEL_159:
                if (++v86 == v85) {
                  goto LABEL_194;
                }
                goto LABEL_160;
              }
            }
            if (v87 == v81) {
              goto LABEL_159;
            }
            v95 = 0;
          LABEL_184:
            v96 = v80;
            while (*(_QWORD*)(v96 + 8) != *(_QWORD*)(v83 + 8 * v95)) {
              v96 += 16;
              if (v96 == v81) {
              LABEL_183:
                if (++v95 == v85) {
                  goto LABEL_194;
                }
                goto LABEL_184;
              }
            }
            if (v96 == v81) {
              goto LABEL_183;
            }
            if (*(_QWORD*)v6 != 0) {
              v97 = *(float*)(*(_QWORD*)v6 + 312LL);
            }
            else {
              v97 = 0.0;
            }
            if (*(float*)(v82 + 56) >= v97) {
              v97 = *(float*)(v82 + 56);
            }
            *(float*)(v82 + 56) = v97;
          }
        }
        else if (v84 != v83) {
          v88 = 0;
          v89 = (unsigned __int64)(v81 - v80) >> 4;
          do {
            v90 = *v79;
            v91 = v79[1];
            if (*v79 != v91) {
              while (*(_QWORD*)(v90 + 8) != *(_QWORD*)(v83 + 8 * v88)) {
                v90 += 16;
                if (v90 == v91) {
                  goto LABEL_166;
                }
              }
            }
            if (v90 != v91) {
              v92 = v13[2];
              if (v92 != 0) {
                if (*(_QWORD*)v6 != 0) {
                  v93 = *(float*)(*(_QWORD*)v6 + 312LL);
                }
                else {
                  v93 = 0.0;
                }
                v94 = *(_QWORD*)(v92 + 56);
                if (*(float*)(v94 + 28LL * (int)v88) >= v93) {
                  v93 = *(float*)(v94 + 28LL * (int)v88);
                }
                *(float*)(v94 + 28LL * (int)v88) = v93;
                *(_BYTE*)(v92 + 88) = 1;
              }
              LODWORD(v89) = v89 - 1;
              if ((_DWORD)v89 == 0) {
                break;
              }
              v83 = v13[3];
              v84 = v13[4];
            }
          LABEL_166:
            ++v88;
          } while (v88 < (v84 - v83) >> 3);
        }
      }
    LABEL_194:
      result = InstanceObjectTransparentModule_fb82a0(v13[2], v12[3]);
      goto LABEL_19;
    }
    if (v29 == v28) {
      goto LABEL_154;
    }
    v44 = 0;
    v45 = (unsigned __int64)(v26 - v25) >> 4;
    while (1) {
      v46 = *v24;
      v47 = v24[1];
      if (*v24 != v47) {
        while (*(_QWORD*)(v46 + 8) != *(_QWORD*)(v28 + 8 * v44)) {
          v46 += 16;
          if (v46 == v47) {
            goto LABEL_69;
          }
        }
      }
      if (v46 == v47) {
        goto LABEL_69;
      }
      v48 = v13[2];
      if ((*(_BYTE*)(v48 + 49) & 1) != 0) {
        if (*(_BYTE*)(v48 + 48) == 1) {
          goto LABEL_81;
        }
      }
      else if (*(_DWORD*)(*(_QWORD*)v6 + 296LL) == 1 ||
               (v49 = *(_QWORD*)(v48 + 32)) != 0 &&
                   (*(_BYTE*)(v49 + 164) & 1) != 0) {
      LABEL_81:
        if ((*(_BYTE*)(v48 + 80) & 1) == 0) {
          v50 = *(_QWORD*)(v48 + 56);
          v51 = *(_QWORD*)(v48 + 64);
          while (v50 != v51) {
            if (*(_BYTE*)(v50 + 24) == 1) {
              *(_BYTE*)(v50 + 24) = 0;
            }
            v50 += 28;
          }
          *(_BYTE*)(v48 + 80) = 1;
        }
        v52 = *(_QWORD*)(v48 + 56) + 28LL * (int)v44;
        *(_DWORD*)(v52 + 20) = 1;
        *(_BYTE*)(v52 + 24) = 1;
        *(_BYTE*)(v48 + 88) = 1;
      }
      LODWORD(v45) = v45 - 1;
      if ((_DWORD)v45 == 0) {
        goto LABEL_154;
      }
      v28 = v13[3];
      v29 = v13[4];
    LABEL_69:
      if (++v44 >= (unsigned __int64)((v29 - v28) >> 3)) {
        goto LABEL_154;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
