#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fdb368[])();
extern __int64 (*game_zview_Manager_vtable[])();
extern __int64 GameData_21d96b8;
extern __int64 GameData_21f3cb0;
extern __int64 GameData_220b6e8;
extern __int64 GameData_220b6f0;
extern __int64 GameData_220f818;
extern __int64 GameData_220f820;
extern __int64 GameData_220f848;
extern __int64 GameData_220f870;
extern __int64 GameData_220f8a0;
extern __int64 GameData_220f8a8;
extern __int64 GameData_220f8b0;
extern __int64 GameData_220f8b8;
extern int GameData_220f898;
__int64 Manager_Destructor_d2e850(__int64 a1);
_QWORD* GameRoutine_cf12a0(_QWORD* result);
_QWORD* HubCharacterNatives_ceccf0(_QWORD* result);
__int64 Cursor_f57c50(_QWORD, _QWORD);
__int64 GameRoutine_cebc60(__int64);
__int64 GameRoutine_cee4a0(__int64);
__int64 GameRoutine_cf06a0(__int64);
__int64 GameRoutine_d1dfd0(__int64 result);
__int64 GameRoutine_d25920(__int64 result);
__int64 GameRoutine_d46e40(void);
__int64 GameRoutine_d4b280(void);
__int64 GameRoutine_f56980(void);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_22110b8;
extern __int64 GameData_21c9758;
extern __int64 GameData_22110ac;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
extern __int64* GameData_212eda8[10];
extern __int64* GameData_212f9a0;
extern int* GameData_212f9a8[8];
void GameRoutine_d25cc0(__int64);
void GameRoutine_d26240(__int64);
__int64 Manager_d2ec20();
__int64 Manager_d2ed90(__int64 result, int a2);
__int64 Manager_d2ee80();
__int64 game_zview_Manager_Initialize_lambda1_Invoke(__int64 result);

__int64 Manager_Destructor_d2e850(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)a1 = game_zview_Manager_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v3 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  if (*(_BYTE*)(a1 + 14) != 0) {
    *(_BYTE*)(a1 + 14) = 0;
  }
  if (GameData_220f818 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_220f818 + 24LL))(
        GameData_220f818);
    if (GameData_220f818 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220f818 + 8LL))(
          GameData_220f818);
    }
    GameData_220f818 = 0;
  }
  if (GameData_220f870 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_220f870 + 24LL))(
        GameData_220f870);
    if (GameData_220f870 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220f870 + 8LL))(
          GameData_220f870);
    }
    GameData_220f870 = 0;
  }
  if (GameData_220f8a0 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_220f8a0 + 24LL))(
        GameData_220f8a0);
    if (GameData_220f8a0 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220f8a0 + 8LL))(
          GameData_220f8a0);
    }
    GameData_220f8a0 = 0;
  }
  if (GameData_220b6f0 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_220b6f0 + 24LL))(
        GameData_220b6f0);
    if (GameData_220b6f0 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220b6f0 + 8LL))(
          GameData_220b6f0);
    }
    GameData_220b6f0 = 0;
  }
  if (GameData_21f3cb0 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21f3cb0 + 24LL))(
        GameData_21f3cb0);
    if (GameData_21f3cb0 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f3cb0 + 8LL))(
          GameData_21f3cb0);
    }
    GameData_21f3cb0 = 0;
  }
  if (GameData_220f8b0 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_220f8b0 + 24LL))(
        GameData_220f8b0);
    if (GameData_220f8b0 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220f8b0 + 8LL))(
          GameData_220f8b0);
    }
    GameData_220f8b0 = 0;
  }
  if (GameData_220f8a8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_220f8a8 + 24LL))(
        GameData_220f8a8);
    if (GameData_220f8a8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220f8a8 + 8LL))(
          GameData_220f8a8);
    }
    GameData_220f8a8 = 0;
  }
  if (GameData_220b6e8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_220b6e8 + 24LL))(
        GameData_220b6e8);
    if (GameData_220b6e8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220b6e8 + 8LL))(
          GameData_220b6e8);
    }
    GameData_220b6e8 = 0;
  }
  if (GameData_220f8b8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_220f8b8 + 24LL))(
        GameData_220f8b8);
    if (GameData_220f8b8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220f8b8 + 8LL))(
          GameData_220f8b8);
    }
    GameData_220f8b8 = 0;
  }
  if (GameData_220f848 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_220f848 + 24LL))(
        GameData_220f848);
    if (GameData_220f848 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220f848 + 8LL))(
          GameData_220f848);
    }
    GameData_220f848 = 0;
  }
  result = GameData_220f820;
  if (GameData_220f820 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_220f820 + 24LL))(
        GameData_220f820);
    result = GameData_220f820;
    if (GameData_220f820 != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)GameData_220f820 + 8LL))(
          GameData_220f820);
    }
    GameData_220f820 = 0;
  }
  v5 = *(_QWORD*)(a1 + 80);
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = std___1___shared_weak_count___release_weak(v5);
  }
  v6 = *(_QWORD*)(a1 + 64);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = std___1___shared_weak_count___release_weak(v6);
  }
  *(_QWORD*)a1 = GameData_1fdb368;
  if (GameData_21d96b8 == a1) {
    GameData_21d96b8 = 0;
    GameData_220f898 = 0;
  }
  return result;
}

__int64 Manager_d2ec20()
{
  __int64 v0;
  void (****v1)(_QWORD);
  void (****v2)(_QWORD);
  void (***v3)(_QWORD);
  __int64 v4;
  __int64 result;
  __int64 v6;
  int v7;

  v0 = GameData_220f848;
  if (GameData_220f848 != 0) {
    GameRoutine_d25920(GameData_220f848);
    GameRoutine_d25cc0(v0);
    GameRoutine_d26240(v0);
  }
  if (GameData_220f8b0 != 0) {
    v1 = *(void (*****)(_QWORD))(GameData_220f8b0 + 56);
    v2 = *(void (*****)(_QWORD))(GameData_220f8b0 + 64);
    while (v1 != v2) {
      v3 = *v1++;
      (**v3)(v3);
    }
  }
  if (GameData_220b6f0 != 0) {
    GameRoutine_cf06a0(GameData_220b6f0);
  }
  if (GameData_220f870 != 0) {
    v4 = *(_QWORD*)(GameData_220f870 + 8);
    if (*(_BYTE*)(v4 + 320) == 1) {
      GameRoutine_f56980();
    }
    else {
      *(_BYTE*)(v4 + 481) = 1;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                                memory_order_acquire) &
           1) == 0) {
        v6 = v4;
        v7 = __cxa_guard_acquire(&GameData_22110b8);
        v4 = v6;
        if (v7 != 0) {
          GameData_22110ac = 0;
          __cxa_guard_release(&GameData_22110b8);
          v4 = v6;
        }
      }
      *(_QWORD*)(v4 + 296) = GameData_22110ac;
    }
  }
  if (GameData_21f3cb0 != 0) {
    GameRoutine_d1dfd0(GameData_21f3cb0);
  }
  result = GameData_220f8a8;
  if (GameData_220f8a8 != 0) {
    result = GameRoutine_d4b280();
  }
  if (GameData_220f820 != 0) {
    return GameRoutine_d46e40();
  }
  return result;
}

__int64 Manager_d2ed90(__int64 result, int a2)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if (*(_DWORD*)(result + 8) != a2) {
    *(_DWORD*)(result + 8) = a2;
    if (a2 == 1) {
      v2 = (__int64*)fw_memory_g_heap_manager_ptr;
      v3 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
      v4 = (__int64*)v3;
      v5 = GameData_212eda8[0];
      if (*GameData_212eda8[0] == 0) {
        *GameData_212eda8[0] = v3;
        *GameData_212f9a8[0] = 1;
      }
      v6 = *v2;
      *v4 = (__int64)(GameData_212f9a0 + 2);
      v4[1] = 0;
      v7 = fw_memory_HeapManager_Allocate(v6, 496, 16, 0);
      Cursor_f57c50(v7, v8);
      v9 = v4[1];
      v4[1] = v7;
      if (v9 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
      }
      v10 = *v4;
      *v5 = (__int64)v4;
      return (*(__int64 (**)(__int64*))(v10 + 16))(v4);
    }
  }
  return result;
}

__int64 Manager_d2ee80()
{
  __int64 v0;
  _QWORD* v1;
  __int64 result;
  __int64* v3;
  __int64* i;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v0 = GameData_220b6f0;
  v1 = *(_QWORD**)(GameData_220b6f0 + 56);
  if (v1 != nullptr) {
    HubCharacterNatives_ceccf0(v1);
  }
  *(_QWORD*)(v0 + 56) = 0;
  result = (__int64)GameRoutine_cf12a0((_QWORD*)v0);
  v3 = *(__int64**)(v0 + 8);
  for (i = *(__int64**)(v0 + 16); v3 != i; result = GameRoutine_cebc60(v5)) {
    v5 = *v3;
    v3 += 2;
  }
  *(_BYTE*)(v0 + 200) = 0;
  *(_QWORD*)(GameData_21c9758 + 152) = *(_QWORD*)(GameData_21c9758 + 144);
  v6 = *(_QWORD*)(game_g_frame_clock + 13224);
  v7 = *(_QWORD*)(v6 + 48);
  v8 = *(_QWORD*)(v6 + 56);
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
    v9 = *(_QWORD*)(*(_QWORD*)(v7 + 8) + 344LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      result = std___1___shared_weak_count___release_weak(v8);
    }
  }
  else {
    v9 = *(_QWORD*)(*(_QWORD*)(v7 + 8) + 344LL);
  }
  if (*(_BYTE*)(v9 + 176) == 1) {
    *(_BYTE*)(v9 + 176) = 0;
  }
  if (*(_BYTE*)(v9 + 256) == 1) {
    *(_BYTE*)(v9 + 256) = 0;
  }
  return result;
}

__int64 game_zview_Manager_Initialize_lambda1_Invoke(__int64 result)
{
  __int64* v1;
  __int64* i;
  __int64 v3;

  if ((*(_BYTE*)(*(_QWORD*)(result + 8) + 55LL) & 1) == 0) {
    v1 = *(__int64**)(GameData_220b6f0 + 8);
    for (i = *(__int64**)(GameData_220b6f0 + 16); v1 != i;
         result = GameRoutine_cee4a0(v3)) {
      v3 = *v1;
      v1 += 2;
    }
  }
  return result;
}

#pragma GCC visibility pop
