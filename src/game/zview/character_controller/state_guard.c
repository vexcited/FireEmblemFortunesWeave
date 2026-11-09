#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_d56ba0(_QWORD* __return_ptr, _QWORD, _QWORD, _QWORD, float);
_QWORD* GameRoutine_d57000(_QWORD* __return_ptr, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
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
__int64 StateGuard_f4f8b0(__int64 a1, __int64* a2, char a3);
__int64 StateGuard_Unknown2(__int64 a1);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_zview_CharacterController_StateActionBase_vtable[])();
extern __int64 (*game_zview_CharacterController_StateGuard_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ed48[5];
void StateGuard_f4fdb0(_QWORD* a1);
__n128 StateGuard_f4feb0(_QWORD* a1);

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

__int64 StateGuard_f4f8b0(__int64 a1, __int64* a2, char a3)
{
  _QWORD* v3;
  __int64 v7;
  __int64 v8;
  long double v9;
  __int64 v10;
  __int64 v11;
  float v12;
  _QWORD* v13;
  atomic_ullong* v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  float v18;
  float v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  float v25;
  __int64 v26;
  __int64 v27;
  float v28;
  float v29;
  float v30;
  float v31;
  __int64 v32;
  atomic_ullong* v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char v40;
  __int64 v41;
  long double v42;
  __int64 result;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  _QWORD* v48;
  _QWORD v49[2];
  __int64 v50;
  int v51;

  v3 = (_QWORD*)*a2;
  v51 = 0;
  v7 = v3[1];
  v49[0] = *v3;
  v49[1] = v7;
  v50 = 0;
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_d4eca0(v49, &v50);
    v8 = std___1___shared_weak_count___release_weak(v7);
  }
  else {
    v8 = GameRoutine_d4eca0(v49, &v50);
  }
  if ((a3 & 1) == 0) {
    v10 = *(_QWORD*)(a1 + 8);
    v11 = fw_memory_g_heap_manager;
    v12 = *(float*)(*a2 + 140);
    if (*(float*)(v10 + 820) >= v12) {
      v12 = *(float*)(v10 + 820);
    }
    *(float*)(v10 + 820) = v12;
    v13 = (_QWORD*)fw_memory_HeapManager_Allocate(v11, 48, 16, 0);
    v13[1] = 0;
    v14 = (atomic_ullong*)(v13 + 1);
    v13[2] = 0;
    v15 = v13 + 3;
    v16 = v13;
    *v13 = GameData_212ee78[0] + 2;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_22110b8) != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release(&GameData_22110b8);
    }
    v17 = *a2;
    *(_QWORD*)((char*)v16 + 36) = 0;
    v47 = v15;
    v48 = v16;
    v18 = *(float*)(v17 + 208);
    v19 = *(float*)(v17 + 212);
    v16[4] = 0x3DCCCCCD3F000000LL;
    *((_DWORD*)v16 + 10) = 1036831949;
    v20 = *(_QWORD*)(a1 + 8);
    *((float*)v16 + 6) = v18 * 6.0;
    *((float*)v16 + 7) = v19 * 6.0;
    v21 = *(_QWORD*)(v20 + 456);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 1), 1u,
                              memory_order_relaxed);
    v8 = GameRoutine_d47980(v21 + 8, &v47);
    v22 = v48;
    if (v48 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v48 + 1),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(_QWORD*))(*v22 + 16LL))(v22);
      v8 = std___1___shared_weak_count___release_weak(v22);
    }
    if (atomic_fetch_add(v14, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(_QWORD*))(*v16 + 16LL))(v16);
      v8 = std___1___shared_weak_count___release_weak(v16);
    }
  }
  v23 = *a2;
  if (*(_BYTE*)(*a2 + 100) != 1 || v50 == 0) {
    *(float*)&v9 = -*(float*)(v23 + 208);
    v25 = -*(float*)(v23 + 212);
  }
  else {
    v26 = *(_QWORD*)(v50 + 16);
    v27 = *(_QWORD*)(a1 + 8);
    *(float*)&v9 = *(float*)(v26 + 292) - *(float*)(v27 + 292);
    v25 = *(float*)(v26 + 296) - *(float*)(v27 + 296);
    if (*(float*)&v9 != 0.0 || v25 != 0.0) {
      v28 = sqrtf((float)(v25 * v25) + (float)(*(float*)&v9 * *(float*)&v9));
      *(float*)&v9 = *(float*)&v9 / v28;
      v25 = v25 / v28;
    }
  }
  v29 = 0.0;
  *(_DWORD*)(a1 + 96) = LODWORD(v9);
  *(float*)(a1 + 100) = v25;
  v30 = (float)(v25 * v25) + (float)(*(float*)&v9 * *(float*)&v9);
  if (v30 > 0.0) {
    if (*(float*)&v9 != 0.0 || v25 != 0.0) {
      v31 = sqrtf(v30);
      *(float*)&v9 = *(float*)&v9 / v31;
      v25 = v25 / v31;
    }
    v29 = atan2f(v8, v9, v25);
  }
  v32 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 96, 16, 0);
  *(_QWORD*)(v32 + 8) = 0;
  v33 = (atomic_ullong*)(v32 + 8);
  *(_QWORD*)(v32 + 16) = 0;
  v34 = v32;
  v35 = GameData_212ed18[0];
  v36 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(v32 + 40) = 0;
  *(_QWORD*)(v32 + 48) = 0;
  *(_QWORD*)(v32 + 56) = 0;
  *(_QWORD*)(v32 + 64) = 0;
  *(_QWORD*)(v32 + 72) = 0;
  *(_QWORD*)(v32 + 80) = 0;
  *(_QWORD*)(v32 + 88) = 0;
  *(_QWORD*)v32 = v35 + 2;
  *(_QWORD*)(v32 + 32) = 0;
  *(float*)(v32 + 32) = v29;
  v37 = *(_QWORD*)(v36 + 488);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                            memory_order_relaxed);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                            memory_order_relaxed);
  v38 = *(_QWORD*)(v37 + 192);
  *(_QWORD*)(v37 + 184) = v32 + 32;
  *(_QWORD*)(v37 + 192) = v32;
  if (v38 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
    std___1___shared_weak_count___release_weak(v38);
  }
  if (atomic_fetch_add(v33, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (atomic_fetch_add(v33, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      goto LABEL_32;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
    std___1___shared_weak_count___release_weak(v34);
    if (atomic_fetch_add(v33, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      goto LABEL_32;
    }
  }
  (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
  std___1___shared_weak_count___release_weak(v34);

LABEL_32:
  v39 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  if ((a3 & 1) != 0) {
    if ((v39 == 0 ||
         (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v39 + 16) + 8LL) + 387LL) & 0x40) !=
             0) &&
            (GameRoutine_edea70(*(_QWORD*)(GameData_21f3cb0 + 912), 0.24, 0.08),
             (v39 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL)) == 0) ||
        (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v39 + 16) + 8LL) + 387LL) & 0x40) !=
            0) {
      GameRoutine_edede0(*(_QWORD*)(*(_QWORD*)GameData_212dc38[0] + 912LL), 0.5,
                         0.048, 1.0);
    }
  }
  else if (v39 == 0 ||
           (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v39 + 16) + 8LL) + 387LL) & 0x40) !=
               0) {
    GameRoutine_edea70(*(_QWORD*)(GameData_21f3cb0 + 912), 0.06, 0.08);
  }
  v40 = a3 & 1;
  GameRoutine_d57000(&v45,
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 48LL),
                     "Btl_Guard_NormalA", 17, "Loc_C_Center", 12);
  v41 = v46;
  if (v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
    std___1___shared_weak_count___release_weak(v41);
  }
  GameRoutine_d56ba0(&v44,
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 40LL),
                     "Guard_Normal", 12, 1.0);
  result = *(_QWORD*)(a1 + 120);
  *(_BYTE*)(a1 + 128) = v40;
  *(_DWORD*)(result + 16) = 1;
  *(_BYTE*)(result + 20) = 1;
  if ((*(_BYTE*)(result + 96) & 1) == 0 && (*(_BYTE*)(result + 97) & 1) != 0) {
    return GameRoutine_cfa2a0(v42);
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
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = a1[7];
  *a1 = game_zview_CharacterController_StateActionBase_vtable;
  if (v4 != 0) {
    a1[8] = v4;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  v6 = a1[6];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
}

__n128 StateGuard_f4feb0(_QWORD* a1)
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
    std___1___shared_weak_count___release_weak(v3);
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
    nn_mem_StandardAllocator_Free(v6 + v7);
  }
  v8 = a1[6];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v9);
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
