#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a06a0(float);
__int64 GameRoutine_19449a0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_ClearThreadCache(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_ClearLightEvent(_QWORD);
__int64 nn_os_DestroyThread(_QWORD);
__int64 nn_os_FinalizeLightEvent(_QWORD);
__int64 nn_os_SignalLightEvent(_QWORD);
__int64 nn_os_WaitLightEvent(_QWORD);
__int64 nn_os_WaitThread(_QWORD);
extern __int64 (*base_thread_ExecutorBase_vtable[])();
extern __int64 GameData_226b920;
extern __int64 fw_memory_g_heap_manager;
__int64 Executor_Unknown2_alt1(__int64 a1) __asm__("Executor_Unknown2");
__int64 Executor_Unknown4(__int64 a1);
__int64 GameRoutine_64dfe0(void);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) String_60a250(_QWORD);
__int64 Executor_19449a0(_QWORD* a1, __int64 a2);
__int64* GameRoutine_64dfe0_alt1(__int64* result,
                                 __int64*) __asm__("GameRoutine_64dfe0");
__int64 nn_os_ClearLightEvent_alt1(__int64) __asm__("nn_os_ClearLightEvent");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_SignalLightEvent_alt1(__int64) __asm__("nn_os_SignalLightEvent");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 nn_os_WaitLightEvent_alt1(__int64) __asm__("nn_os_WaitLightEvent");
void __attribute__((noreturn))
String_60a250_alt1(const char*) __asm__("String_60a250");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Executor_Unknown2(__int64 a1);

void Executor_Unknown2(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  nn_os_WaitLightEvent_alt1(a1 + 496);
  *(_QWORD*)(a1 + 512) = 0;
  *(_DWORD*)(a1 + 520) = 0;
  nn_os_ClearLightEvent_alt1(a1 + 496);
  nn_os_SignalLightEvent_alt1(a1 + 484);
  nn_os_WaitThread(a1 + 32);
  *(_BYTE*)(a1 + 480) = 0;
  Executor_19449a0((_QWORD*)GameData_226b920, *(_QWORD*)(a1 + 8));
  *(_QWORD*)(a1 + 8) = 0;
  nn_os_DestroyThread(a1 + 32);
  v2 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  if (v2 != 0) {
    v3 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v3, v2);
  }
  *(_QWORD*)(a1 + 16) = 0;
  nn_os_FinalizeLightEvent(a1 + 484);
  nn_os_FinalizeLightEvent(a1 + 496);
  v4 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)a1 = base_thread_ExecutorBase_vtable;
  if (v4 != 0) {
    v5 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v5, v4);
  }
}

__int64 Executor_Unknown4(__int64 a1)
{
  __int64 result;

  nn_os_WaitLightEvent(a1 + 484);
  for (result = *(_QWORD*)(a1 + 512); result != 0;
       result = *(_QWORD*)(a1 + 512)) {
    GameRoutine_14a06a0(*(float*)(a1 + 520));
    if (*(_QWORD*)(fw_memory_g_heap_manager + 760) != 0) {
      nn_mem_StandardAllocator_ClearThreadCache(fw_memory_g_heap_manager + 688);
    }
    nn_os_SignalLightEvent(a1 + 496);
    nn_os_WaitLightEvent(a1 + 484);
  }
  return result;
}

__int64 Executor_19449a0(_QWORD* a1, __int64 a2)
{
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  int v7;
  _BOOL4 v8;
  bool v9;
  __int64 v10;
  int v11;
  bool v12;
  _QWORD* v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  _QWORD* v27;
  _QWORD* v28;
  _QWORD* v30;
  _QWORD* v31;
  _QWORD* v32;
  _QWORD* v33;
  _QWORD* v34;
  __int64 v35;
  _QWORD* v36;
  struct {
    _QWORD* v38;
    _QWORD* v39;
    __int64 v40;
  } v38_;

  nn_os_LockMutex_alt1((__int64)a1);
  v4 = (__int64*)a1[5];
  if (v4 != nullptr) {
    v5 = a1 + 5;
    v6 = a1[5];
    do {
      v7 = *(_DWORD*)(v6 + 32);
      v9 = v7 == (_DWORD)a2;
      v8 = v7 < (int)a2;
      if (v9) {
        v8 = (signed __int32)*(_DWORD*)(v6 + 36) < SHIDWORD(a2);
      }
      v9 = !v8;
      if (v8) {
        v10 = 8;
      }
      else {
        v10 = 0;
      }
      if (v9) {
        v5 = (_QWORD*)v6;
      }
      v6 = *(_QWORD*)(v6 + v10);
    } while (v6 != 0);
    if (v5 != a1 + 5) {
      v11 = *((_DWORD*)v5 + 8);
      v9 = v11 == (_DWORD)a2;
      v12 = v11 > (int)a2;
      if (v9) {
        v12 = (signed __int32)*((_DWORD*)v5 + 9) > SHIDWORD(a2);
      }
      if (!v12) {
        v13 = (_QWORD*)v5[1];
        if (v13 != nullptr) {
          do {
            v14 = v13;
            v13 = (_QWORD*)*v13;
          } while (v13 != nullptr);
        }
        else {
          v15 = v5;
          do {
            v14 = (_QWORD*)v15[2];
            v9 = v15 == (_QWORD*)*v14;
            v15 = v14;
          } while (!v9);
        }
        if ((_QWORD*)a1[4] == v5) {
          a1[4] = v14;
        }
        --a1[6];
        GameRoutine_64dfe0_alt1(v4, v5);
        v16 = fw_memory_g_heap_manager_ptr;
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, (__int64)v5);
        if ((unsigned int)a2 >> 29 == 3) {
          v18 = (_QWORD*)v5[5];
          v19 = (_QWORD*)a1[8];
          v20 = a1 + 7;
          v38_.v40 = 0;
          v38_.v38 = &v38_.v38;
          v38_.v39 = &v38_.v38;
          if (v19 != a1 + 7) {
            if (&v38_.v38 == v20) {
              v21 = &v38_.v38;
              do {
                v28 = (_QWORD*)v19[1];
                if (v19 + 2 == v18) {
                  while (v28 != &v38_.v38 && v28 + 2 == v18) {
                    v28 = (_QWORD*)v28[1];
                  }
                  if (v19 != v28) {
                    v21 = (_QWORD*)*v28;
                    v30 = *(_QWORD**)(*v28 + 8LL);
                    *(_QWORD*)(*v19 + 8LL) = v30;
                    *v30 = *v19;
                    v31 = v38_.v38;
                    v38_.v38[1] = v19;
                    *v19 = v31;
                    v38_.v38 = v21;
                    v21[1] = &v38_.v38;
                  }
                  if (v28 != &v38_.v38) {
                    v28 = (_QWORD*)v28[1];
                  }
                }
                v19 = v28;
              } while (v28 != &v38_.v38);
            }
            else {
              v21 = &v38_.v38;
              do {
                v22 = (_QWORD*)v19[1];
                if (v19 + 2 == v18) {
                  while (v22 != v20 && v22 + 2 == v18) {
                    v22 = (_QWORD*)v22[1];
                  }
                  if (v19 != v22) {
                    v21 = (_QWORD*)*v22;
                    v24 = 1;
                    if (v19 != (_QWORD*)*v22) {
                      v25 = v19;
                      do {
                        v25 = (_QWORD*)v25[1];
                        ++v24;
                      } while (v25 != v21);
                    }
                    a1[9] -= v24;
                    v38_.v40 += v24;
                    v26 = (_QWORD*)v21[1];
                    *(_QWORD*)(*v19 + 8LL) = v26;
                    *v26 = *v19;
                    v27 = v38_.v38;
                    v38_.v38[1] = v19;
                    *v19 = v27;
                    v38_.v38 = v21;
                    v21[1] = &v38_.v38;
                  }
                  if (v22 != v20) {
                    v22 = (_QWORD*)v22[1];
                  }
                }
                v19 = v22;
              } while (v22 != v20);
            }
            if (v38_.v40 != 0) {
              v32 = v38_.v39;
              v33 = (_QWORD*)v21[1];
              *(_QWORD*)(*v38_.v39 + 8LL) = v33;
              *v33 = *v32;
              v38_.v40 = 0;
              if (v32 != &v38_.v38) {
                do {
                  v34 = (_QWORD*)v32[1];
                  if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
                    v35 = 128;
                  }
                  else {
                    v35 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v16 + v35,
                                                     (__int64)v32);
                  v32 = v34;
                } while (v34 != &v38_.v38);
              }
            }
          }
          if ((unsigned __int64)(a2 >> 32) >= 0x100) {
            String_60a250_alt1("bitset reset argument out of range");
          }
          v36 =
              &a1[4 * (a2 & 0x1FFFFFFF) + ((unsigned __int64)(a2 >> 32) >> 6)];
          v36[10] &= ~(1LL << SBYTE4(a2));
        }
      }
    }
  }
  return nn_os_UnlockMutex_alt1((__int64)a1);
}

#pragma GCC visibility pop
