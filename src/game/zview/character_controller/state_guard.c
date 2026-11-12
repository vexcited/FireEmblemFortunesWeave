#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_d56ba0(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, float);
__attribute__((swiftcall)) void GameRoutine_d57000(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_cfa2a0(long double);
__int64 GameRoutine_d47980(_QWORD, _QWORD);
__int64 GameRoutine_d4eca0(_QWORD, _QWORD);
__int64 GameRoutine_edea70(__int64, float, float);
__int64 GameRoutine_edede0(__int64, float, float, float);
__int64 StateActionBase_Unknown5(void);
__int64 StateActionBase_d48970(_QWORD, float);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_22110b8;
extern __int64 GameData_212dc38[7];
extern __int64 GameData_21f3cb0;
extern __int64 GameData_22110ac;
extern __int64 fw_memory_g_heap_manager;
extern __int64* GameData_212ed18[11];
extern __int64* GameData_212ee78[2];
float atan2f(_QWORD, long double, float);
__int64 StateGuard_Unknown5(_QWORD* a1);
__int64 StateGuard_f4f8b0_alt1(__int64 a1, __int64* a2,
                               char a3) __asm__("StateGuard_f4f8b0");
__int64 StateGuard_Unknown2(__int64 a1);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_zview_CharacterController_StateActionBase_vtable[])();
extern __int64 (*game_zview_CharacterController_StateGuard_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ed48[5];
void StateGuard_f4fdb0(_QWORD* a1);
__n128 StateGuard_f4feb0_alt1(_QWORD* a1) __asm__("StateGuard_f4feb0");
_QWORD* GameRoutine_d47980_alt1(__int64*,
                                _QWORD*) __asm__("GameRoutine_d47980");
__attribute__((swiftcall)) void game_zview_d56ba0(PSEUDO_X8, __int64, __int64,
                                                  float);
__attribute__((swiftcall)) void game_zview_d57000(PSEUDO_X8, _QWORD, _QWORD,
                                                  _QWORD, _QWORD, _QWORD);
__int64 WaitRelease_cfa2a0(__int64 result);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_edede0(__int64, float, float, float);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
bool GameRoutine_d4eca0_alt1(__int64*, __int64) __asm__("GameRoutine_d4eca0");
float atan2f_alt1(float, float) __asm__("atan2f");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void game_edea70(__int64, float, float);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 StateGuard_f4f8b0(__int64 a1, __int64** a2, char a3);
void StateGuard_f4feb0(_QWORD* a1);

__int64 StateGuard_Unknown5(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float v7;
  __int64 result;

  StateActionBase_Unknown5();
  v2 = a1[1];
  v3 = *(_QWORD*)(*(_QWORD*)(v2 + 8) + 32LL);
  if (v3 != 0 && *(_BYTE*)(v3 + 392) != 0) {
    *(_BYTE*)(v3 + 392) = 0;
    v2 = a1[1];
  }
  v4 = *(_QWORD*)(v2 + 488);
  v5 = *(_QWORD*)(v4 + 192);
  *(_QWORD*)(v4 + 184) = 0;
  *(_QWORD*)(v4 + 192) = 0;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = a1[14];
  a1[13] = 0;
  a1[14] = 0;
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  StateActionBase_d48970(a1, 0.4);
  if (v3 != 0) {
    v7 = *(float*)(v3 + 384);
    if (v7 < 0.3) {
      v7 = 0.3;
    }
    *(float*)(v3 + 384) = v7;
  }
  result = a1[15];
  a1[15] = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 StateGuard_f4f8b0(__int64 a1, __int64** a2, char a3)
{
  __int64* v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  _QWORD* v11;
  atomic_ullong* v12;
  _QWORD* v13;
  __int64 v14;
  __int64* v15;
  float v16;
  float v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  float v23;
  float v24;
  __int64 v25;
  __int64 v26;
  float v27;
  float v28;
  float v29;
  float v30;
  __int64 v31;
  atomic_ullong* v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  char v39;
  __int64 v40;
  __int64 result;
  __int64 v42;
  struct {
    __int64 v43;
    __int64 v44;
  } v43_;
  struct {
    _QWORD* v45;
    __int64 v46;
  } v45_;
  __int64 v47[2];
  struct {
    __int64 v48;
    int v49;
  } v48_;

  v3 = *a2;
  v48_.v49 = 0;
  v7 = v3[1];
  v47[0] = *v3;
  v47[1] = v7;
  v48_.v48 = 0;
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_d4eca0_alt1(v47, (__int64)&v48_.v48);
    std___1___shared_weak_count___release_weak_alt1(v7);
  }
  else {
    GameRoutine_d4eca0_alt1(v47, (__int64)&v48_.v48);
  }
  if ((a3 & 1) == 0) {
    v8 = *(_QWORD*)(a1 + 8);
    v9 = fw_memory_g_heap_manager;
    v10 = *((float*)*a2 + 35);
    if (*(float*)(v8 + 820) >= v10) {
      v10 = *(float*)(v8 + 820);
    }
    *(float*)(v8 + 820) = v10;
    v11 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v9, 48, 16, 0);
    v11[1] = 0;
    v12 = (atomic_ullong*)(v11 + 1);
    v11[2] = 0;
    v13 = v11 + 3;
    v14 = (__int64)v11;
    *v11 = GameData_212ee78[0] + 2;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_22110b8) != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release_alt1((__int64)&GameData_22110b8);
    }
    v15 = *a2;
    *(_QWORD*)(v14 + 36) = 0;
    v45_.v45 = v13;
    v45_.v46 = v14;
    v16 = *((float*)v15 + 52);
    v17 = *((float*)v15 + 53);
    *(_QWORD*)(v14 + 32) = 0x3DCCCCCD3F000000LL;
    *(_DWORD*)(v14 + 40) = 1036831949;
    v18 = *(_QWORD*)(a1 + 8);
    *(float*)(v14 + 24) = v16 * 0x1.8000000000000p+2f;
    *(float*)(v14 + 28) = v17 * 0x1.8000000000000p+2f;
    v19 = *(_QWORD*)(v18 + 456);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_d47980_alt1((__int64*)(v19 + 8), &v45_.v45);
    v20 = v45_.v46;
    if (v45_.v46 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v45_.v46 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      std___1___shared_weak_count___release_weak_alt1(v20);
    }
    if (atomic_fetch_add(v12, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak_alt1(v14);
    }
  }
  v21 = *a2;
  if (*((_BYTE*)*a2 + 100) != 1 || v48_.v48 == 0) {
    v23 = -*((float*)v21 + 52);
    v24 = -*((float*)v21 + 53);
  }
  else {
    v25 = *(_QWORD*)(v48_.v48 + 16);
    v26 = *(_QWORD*)(a1 + 8);
    v23 = *(float*)(v25 + 292) - *(float*)(v26 + 292);
    v24 = *(float*)(v25 + 296) - *(float*)(v26 + 296);
    if (v23 != 0x0.0p+0f || v24 != 0x0.0p+0f) {
      v27 = sqrtf((float)(PSEUDO_UNFUSED(v24 * v24)) + (float)(v23 * v23));
      v23 = v23 / v27;
      v24 = v24 / v27;
    }
  }
  v28 = 0x0.0p+0f;
  *(float*)(a1 + 96) = v23;
  *(float*)(a1 + 100) = v24;
  v29 = (float)(PSEUDO_UNFUSED(v24 * v24)) + (float)(v23 * v23);
  if (v29 > 0x0.0p+0f) {
    if (v23 != 0x0.0p+0f || v24 != 0x0.0p+0f) {
      v30 = sqrtf(v29);
      v23 = v23 / v30;
      v24 = v24 / v30;
    }
    v28 = atan2f_alt1(v23, v24);
  }
  v31 =
      fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, 96, 16, 0);
  *(_QWORD*)(v31 + 8) = 0;
  v32 = (atomic_ullong*)(v31 + 8);
  *(_QWORD*)(v31 + 16) = 0;
  v33 = v31;
  v34 = GameData_212ed18[0];
  v35 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(v31 + 40) = 0;
  *(_QWORD*)(v31 + 48) = 0;
  *(_QWORD*)(v31 + 56) = 0;
  *(_QWORD*)(v31 + 64) = 0;
  *(_QWORD*)(v31 + 72) = 0;
  *(_QWORD*)(v31 + 80) = 0;
  *(_QWORD*)(v31 + 88) = 0;
  *(_QWORD*)v31 = v34 + 2;
  *(_QWORD*)(v31 + 32) = 0;
  *(float*)(v31 + 32) = v28;
  v36 = *(_QWORD*)(v35 + 488);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 8), 1u,
                            memory_order_relaxed);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 8), 1u,
                            memory_order_relaxed);
  v37 = *(_QWORD*)(v36 + 192);
  *(_QWORD*)(v36 + 184) = v31 + 32;
  *(_QWORD*)(v36 + 192) = v31;
  if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
    std___1___shared_weak_count___release_weak_alt1(v37);
  }
  if (atomic_fetch_add(v32, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (atomic_fetch_add(v32, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      goto LABEL_32;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
    std___1___shared_weak_count___release_weak_alt1(v33);
    if (atomic_fetch_add(v32, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      goto LABEL_32;
    }
  }
  (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
  std___1___shared_weak_count___release_weak_alt1(v33);
LABEL_32:
  v38 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  if ((a3 & 1) != 0) {
    if ((v38 == 0 ||
         (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v38 + 16) + 8LL) + 387LL) & 0x40) !=
             0) &&
            (game_edea70(*(_QWORD*)(GameData_21f3cb0 + 912),
                         0x1.eb851e0000000p-3f, 0x1.47ae140000000p-4f),
             (v38 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL)) == 0) ||
        (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v38 + 16) + 8LL) + 387LL) & 0x40) !=
            0) {
      game_edede0(*(_QWORD*)(*(_QWORD*)GameData_212dc38[0] + 912LL),
                  0x1.0000000000000p-1f, 0x1.89374c0000000p-5f,
                  0x1.0000000000000p+0f);
    }
  }
  else if (v38 == 0 ||
           (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v38 + 16) + 8LL) + 387LL) & 0x40) !=
               0) {
    game_edea70(*(_QWORD*)(GameData_21f3cb0 + 912), 0x1.eb851e0000000p-5f,
                0x1.47ae140000000p-4f);
  }
  v39 = a3 & 1;
  game_zview_d57000((void*)(&v43_.v43),
                    *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 48LL),
                    "Btl_Guard_NormalA", 17, "Loc_C_Center", 12);
  v40 = v43_.v44;
  if (v43_.v44 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43_.v44 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
    std___1___shared_weak_count___release_weak_alt1(v40);
  }
  game_zview_d56ba0((void*)((__int64)&v42),
                    *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 40LL),
                    (__int64)"Guard_Normal", 0x1.0000000000000p+0f);
  result = *(_QWORD*)(a1 + 120);
  *(_BYTE*)(a1 + 128) = v39;
  *(_DWORD*)(result + 16) = 1;
  *(_BYTE*)(result + 20) = 1;
  if ((*(_BYTE*)(result + 96) & 1) == 0 && (*(_BYTE*)(result + 97) & 1) != 0) {
    return WaitRelease_cfa2a0(result);
  }
  return result;
}

void StateGuard_f4fdb0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *a1 = game_zview_CharacterController_StateGuard_vtable;
  v2 = a1[15];
  a1[15] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1[14];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  v4 = a1[7];
  *a1 = game_zview_CharacterController_StateActionBase_vtable;
  if (v4 != 0) {
    a1[8] = v4;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
  }
  v6 = a1[6];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt1(v6);
  }
}

void StateGuard_f4feb0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *a1 = game_zview_CharacterController_StateGuard_vtable;
  v2 = a1[15];
  a1[15] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1[14];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  v4 = a1[7];
  *a1 = GameData_212ed48[0] + 2;
  v5 = fw_memory_g_heap_manager_ptr;
  if (v4 != 0) {
    v6 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[8] = v4;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v6 + v7, v4);
  }
  v8 = a1[6];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt1(v8);
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v9, (__int64)a1);
}

__int64 StateGuard_Unknown2(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 48);
  *(_WORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0xFFFFFFFE00000000LL;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v3 = *(_QWORD*)(a1 + 56);
  v4 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 64) = v3;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  result = *(_QWORD*)(a1 + 120);
  *(_QWORD*)(a1 + 120) = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  *(_WORD*)(a1 + 128) = 0;
  return result;
}

#pragma GCC visibility pop
