#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_d1fdc0(PSEUDO_X8, _QWORD);
__int64 GameRoutine_cf12a0(_QWORD);
__int64 GameRoutine_cf3760(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d196c0(_QWORD, _QWORD, float);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*GameData_1fdae80[])();
extern __int64 GameData_212dc38[7];
extern __int64 GameData_21f3cb0;
extern __int64 GameData_220b6f0;
extern __int64 GameData_220f848;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212ed08[13];
extern __int64* GameData_212f4d0[5];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_cf38d0(void);
__int64 EventFocusCharacter_Destructor(__int64 result);
__int64 EventFocusCharacter_DeletingDestructor_alt1(__int64 a1) __asm__(
    "EventFocusCharacter_DeletingDestructor");
__int64 EventFocusCharacter_e5ee20(__int64 result, _QWORD* a2);
_QWORD* EventFocusCharacter_e5f1b0_alt1(_QWORD* result) __asm__(
    "EventFocusCharacter_e5f1b0");
__attribute__((swiftcall)) void game_zview_d1fdc0(PSEUDO_X8, __int64);
__int64 GameRoutine_d196c0_alt1(__int64 result, char,
                                float) __asm__("GameRoutine_d196c0");
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
char** GameRoutine_cf12a0_alt1(char** result) __asm__("GameRoutine_cf12a0");
char** GameRoutine_cf3760_alt1(char** result, __int64, __int64,
                               unsigned __int64) __asm__("GameRoutine_cf3760");
__int64 EventFocusCharacter_e5f1b0(__int64 result);
__int64*
GameRoutine_cf3760_alt2(__int64* result, __int64, __int64,
                        unsigned __int64) __asm__("GameRoutine_cf3760");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void GameRoutine_cf12a0_alt2(_QWORD*) __asm__("GameRoutine_cf12a0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_cf38d0_alt1() __asm__("GameRoutine_cf38d0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void EventFocusCharacter_DeletingDestructor(__int64 a1);

__int64 EventFocusCharacter_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64* v4;
  int v5;
  int v6;

  v1 = result;
  *(_QWORD*)result = GameData_212f4d0[0] + 2;
  if (*(_BYTE*)(result + 8) != 0) {
    *(_BYTE*)(result + 8) = 0;
    v2 = GameData_21f3cb0;
    v3 = *(_DWORD*)(GameData_21f3cb0 + 1048) - 1;
    *(_DWORD*)(GameData_21f3cb0 + 1048) = v3;
    if (v3 == 0) {
      result =
          (*(__int64 (**)(__int64))(*(_QWORD*)(v2 + 1040) + 8LL))(v2 + 1040);
    }
  }
  v4 = GameData_212ed08[0];
  if (*(_BYTE*)(v1 + 9) != 0 &&
      (result = *GameData_212ed08[0], *(_BYTE*)(v1 + 9) = 0,
       v5 = *(_DWORD*)(result + 216) - 1, *(_DWORD*)(result + 216) = v5,
       v5 == 0)) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)(result + 208) + 8LL))(result +
                                                                        208);
    if (*(_BYTE*)(v1 + 10) == 0) {
      return result;
    }
  }
  else if (*(_BYTE*)(v1 + 10) == 0) {
    return result;
  }
  result = *v4;
  *(_BYTE*)(v1 + 10) = 0;
  v6 = *(_DWORD*)(result + 232) - 1;
  *(_DWORD*)(result + 232) = v6;
  if (v6 == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)(result + 224) + 8LL))(result +
                                                                      224);
  }
  return result;
}

void EventFocusCharacter_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64* v4;
  __int64 v5;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;

  *(_QWORD*)a1 = GameData_212f4d0[0] + 2;
  if (*(_BYTE*)(a1 + 8) != 0) {
    *(_BYTE*)(a1 + 8) = 0;
    v2 = GameData_21f3cb0;
    v3 = *(_DWORD*)(GameData_21f3cb0 + 1048) - 1;
    *(_DWORD*)(GameData_21f3cb0 + 1048) = v3;
    if (v3 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v2 + 1040) + 8LL))(v2 + 1040);
    }
  }
  v4 = GameData_212ed08[0];
  if (*(_BYTE*)(a1 + 9) != 0) {
    v5 = *GameData_212ed08[0];
    *(_BYTE*)(a1 + 9) = 0;
    v6 = *(_DWORD*)(v5 + 216) - 1;
    *(_DWORD*)(v5 + 216) = v6;
    if (v6 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v5 + 208) + 8LL))(v5 + 208);
    }
  }
  if (*(_BYTE*)(a1 + 10) != 0) {
    v7 = *v4;
    *(_BYTE*)(a1 + 10) = 0;
    v8 = *(_DWORD*)(v7 + 232) - 1;
    *(_DWORD*)(v7 + 232) = v8;
    if (v8 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v7 + 224) + 8LL))(v7 + 224);
    }
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, a1);
}

__int64 EventFocusCharacter_e5ee20(__int64 result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64* v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64* v10;
  __int64* v11;
  char* v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  atomic_ullong* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;

  if ((*(_BYTE*)(result + 11) & 1) == 0) {
    v2 = result;
    *(_BYTE*)(result + 11) = 1;
    *(_QWORD*)(result + 16) = *a2;
    if ((*(_BYTE*)(result + 10) & 1) == 0) {
      *(_BYTE*)(result + 10) = 1;
      v3 = GameData_220f848;
      v4 = *(_DWORD*)(GameData_220f848 + 232);
      *(_DWORD*)(GameData_220f848 + 232) = v4 + 1;
      if (v4 == 0) {
        (**(void (***)(__int64))(v3 + 224))(v3 + 224);
      }
    }
    v5 = (__int64*)fw_memory_g_heap_manager_ptr;
    v6 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
    v7 = (__int64)v6;
    *v6 = *(_QWORD*)(v2 + 16);
    v8 = (unsigned __int64)(v6 + 1);
    v9 = (_QWORD*)GameData_220b6f0;
    v10 = *(__int64**)(GameData_220b6f0 + 8);
    v11 = *(__int64**)(GameData_220b6f0 + 16);
    if (v10 != v11) {
      v12 = (char*)(v6 + 1);
      do {
        v13 = *v10;
        if ((*(_BYTE*)(*v10 + 568) & 4) != 0) {
          if ((unsigned __int64)v12 < v8) {
            *(_QWORD*)v12 = v13;
            v12 += 8;
          }
          else {
            v14 = &v12[-v7];
            v15 = (__int64)&v12[-v7] >> 3;
            v16 = v15 + 1;
            if ((unsigned __int64)(v15 + 1) >> 61 != 0) {
              GameRoutine_cf38d0_alt1();
            }
            if ((__int64)(v8 - v7) >> 2 > v16) {
              v16 = (__int64)(v8 - v7) >> 2;
            }
            if (v8 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
              v17 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v17 = v16;
            }
            if (v17 != 0) {
              if (v17 >> 61 != 0) {
                GameRoutine_60a210_alt1();
              }
              v18 = fw_memory_HeapManager_Allocate_alt1(*v5, 8 * v17, 16, 0);
            }
            else {
              v18 = 0;
            }
            v8 = v18 + 8 * v17;
            v19 = (unsigned __int64)&v12[-v7];
            v20 = (__int64)&v14[v18 + -8 * v15];
            *(_QWORD*)&v14[v18] = v13;
            v12 = &v14[v18 + 8];
            memcpy_alt1(v20, v7, v19);
            if (v7 != 0) {
              v21 = 128;
              if (*(_QWORD*)(*v5 + 200) == 0) {
                v21 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v5 + v21, v7);
            }
            v7 = v20;
          }
        }
        v10 += 2;
      } while (v10 != v11);
      v8 = (unsigned __int64)v12;
      v9 = (_QWORD*)*GameData_212eba8[0];
    }
    GameRoutine_cf3760_alt2(v9 + 11, v7, v8, (__int64)(v8 - v7) >> 3);
    GameRoutine_cf12a0_alt2(v9);
    if (v7 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*v5 + 200) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v5 + v22, v7);
    }
    result = fw_memory_HeapManager_Allocate_alt1(*v5, 112, 16, 0);
    *(_QWORD*)(result + 8) = 0;
    v23 = (atomic_ullong*)(result + 8);
    *(_QWORD*)(result + 16) = 0;
    v24 = *(_QWORD*)(v2 + 16);
    *(_BYTE*)(result + 48) = 0;
    *(_BYTE*)(result + 64) = 0;
    *(_QWORD*)(result + 80) = 0;
    *(_QWORD*)(result + 88) = 0;
    *(_QWORD*)(result + 32) = v24;
    v25 = result + 32;
    *(_QWORD*)result = GameData_1fdae80;
    *(_BYTE*)(result + 96) = 1;
    v26 = GameData_21f3cb0;
    if (*(int*)(GameData_21f3cb0 + 1048) <= 0) {
      if (*(_BYTE*)(GameData_21f3cb0 + 904) == 1) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 8), 1u,
                                  memory_order_relaxed);
        *(_QWORD*)(v26 + 832) = v25;
        v27 = *(_QWORD*)(v26 + 840);
        *(_QWORD*)(v26 + 840) = result;
        if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          v28 = result;
          (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
          std___1___shared_weak_count___release_weak_alt2(v27);
          result = v28;
        }
        *(_BYTE*)(v26 + 856) = 1;
        *(_BYTE*)(v26 + 860) = 0;
        *(_DWORD*)(v26 + 872) = 0;
        *(_BYTE*)(v26 + 876) = 0;
        *(_WORD*)(v26 + 880) = 0;
        *(_BYTE*)(v26 + 884) = 0;
        *(_BYTE*)(v26 + 888) = 0;
        *(_BYTE*)(v26 + 892) = 0;
        *(_BYTE*)(v26 + 896) = 0;
      }
      else {
        *(_QWORD*)(GameData_21f3cb0 + 832) = v25;
        *(_QWORD*)(v26 + 840) = result;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 8), 1u,
                                  memory_order_relaxed);
        *(_BYTE*)(v26 + 856) = 1;
        *(_BYTE*)(v26 + 860) = 0;
        *(_DWORD*)(v26 + 872) = 0;
        *(_BYTE*)(v26 + 876) = 0;
        *(_WORD*)(v26 + 880) = 0;
        *(_BYTE*)(v26 + 884) = 0;
        *(_BYTE*)(v26 + 888) = 0;
        *(_BYTE*)(v26 + 892) = 0;
        *(_BYTE*)(v26 + 896) = 0;
        *(_BYTE*)(v26 + 904) = 1;
      }
      *(_QWORD*)(v26 + 848) = 0x3F00000000000004LL;
      *(_QWORD*)(v26 + 864) = 0x3F8000003F800000LL;
    }
    if (atomic_fetch_add(v23, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      v29 = result;
      (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      return std___1___shared_weak_count___release_weak_alt2(v29);
    }
  }
  return result;
}

__int64 EventFocusCharacter_e5f1b0(__int64 result)
{
  int v1;
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  int v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
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
  struct {
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    char v36;
  } v28_;

  if (*(_BYTE*)(result + 11) != 0) {
    v1 = *(unsigned __int8*)(result + 10);
    *(_BYTE*)(result + 11) = 0;
    if (v1 != 0) {
      *(_BYTE*)(result + 10) = 0;
      v2 = GameData_220f848;
      v3 = *(_DWORD*)(GameData_220f848 + 232) - 1;
      *(_DWORD*)(GameData_220f848 + 232) = v3;
      if (v3 == 0) {
        v4 = result;
        (*(void (**)(__int64))(*(_QWORD*)(v2 + 224) + 8LL))(v2 + 224);
        result = v4;
      }
    }
    v5 = *(_QWORD*)(result + 16);
    v6 = *(unsigned __int8*)(v5 + 272);
    *(_DWORD*)(v5 + 280) = 0;
    if (v6 == 1) {
      *(_BYTE*)(v5 + 272) = 0;
    }
    v7 = *(_QWORD*)(*(_QWORD*)(v5 + 8) + 344LL);
    if (*(_BYTE*)(v7 + 345) != 0) {
      v8 = *(unsigned __int8*)(v7 + 88);
      *(_BYTE*)(v7 + 345) = 0;
      if (v8 == 1) {
        *(_BYTE*)(v7 + 88) = 0;
      }
    }
    GameRoutine_d196c0_alt1(*(_QWORD*)(*(_QWORD*)(v5 + 8) + 344LL), 0,
                            0x1.0000000000000p-1f);
    v9 = (_QWORD*)*GameData_212eba8[0];
    GameRoutine_cf3760_alt2((__int64*)(*GameData_212eba8[0] + 88), 0, 0, 0);
    GameRoutine_cf12a0_alt2(v9);
    v10 = GameData_212dc38[0];
    result =
        X8CALL_X0(__int64, game_zview_d1fdc0((void*)((__int64)&v28_.v28),
                                             *(_QWORD*)GameData_212dc38[0]));
    v11 = *(_QWORD*)v10;
    if (*(int*)(*(_QWORD*)v10 + 1048LL) <= 0) {
      if (BYTE4(v28_.v33) != 1 || (v28_.v34 & 1) != 0 ||
          ((v13 = *(_DWORD*)(v11 + 872), v14 = *(_DWORD*)(v11 + 956),
            *(_BYTE*)(v11 + 904) != 0)
               ? (LOBYTE(v14) = *(_BYTE*)(v11 + 876))
               : (v13 = *(_DWORD*)(v11 + 952)),
           (unsigned __int8)v14 == 1 ? (v15 = v13 == (_DWORD)v28_.v33)
                                     : (v15 = false),
           !v15)) {
        v16 = v28_.v28;
        if (*(_BYTE*)(v11 + 904) != 0) {
          v17 = v28_.v29;
          if (v28_.v29 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v28_.v29 + 8),
                                      1u, memory_order_relaxed);
          }
          v18 = *(_QWORD*)(v11 + 840);
          *(_QWORD*)(v11 + 832) = v16;
          *(_QWORD*)(v11 + 840) = v17;
          if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
            result = std___1___shared_weak_count___release_weak_alt2(v18);
          }
          v19 = v28_.v32;
          *(_QWORD*)(v11 + 872) = v28_.v33;
          v20 = v28_.v34;
          v21 = v28_.v35;
          *(_QWORD*)(v11 + 864) = v19;
          *(_QWORD*)(v11 + 880) = v20;
          LOBYTE(v20) = v28_.v36;
          *(_QWORD*)(v11 + 888) = v21;
          *(_BYTE*)(v11 + 896) = v20;
          v22 = v28_.v31;
          *(_QWORD*)(v11 + 848) = v28_.v30;
          *(_QWORD*)(v11 + 856) = v22;
        }
        else {
          v23 = v28_.v29;
          *(_QWORD*)(v11 + 832) = v28_.v28;
          *(_QWORD*)(v11 + 840) = v23;
          if (v23 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                                      memory_order_relaxed);
          }
          v24 = v28_.v32;
          *(_QWORD*)(v11 + 872) = v28_.v33;
          v25 = v28_.v34;
          v26 = v28_.v35;
          *(_QWORD*)(v11 + 864) = v24;
          *(_QWORD*)(v11 + 880) = v25;
          LOBYTE(v25) = v28_.v36;
          *(_QWORD*)(v11 + 888) = v26;
          *(_BYTE*)(v11 + 896) = v25;
          v27 = v28_.v31;
          *(_QWORD*)(v11 + 848) = v28_.v30;
          *(_QWORD*)(v11 + 856) = v27;
          *(_BYTE*)(v11 + 904) = 1;
        }
      }
    }
    v12 = v28_.v29;
    if (v28_.v29 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v28_.v29 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      return std___1___shared_weak_count___release_weak_alt2(v12);
    }
  }
  return result;
}

#pragma GCC visibility pop
