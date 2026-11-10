#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_cbcbe0(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fd48f8[])();
extern __int64 (*game_hub_EventManager_vtable[])();
extern __int64 GameData_21f3c98;
extern int GameData_220b700;
__int64 EventManager_Destructor(_QWORD* a1);
_QWORD* GameRoutine_d59720(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 EventManager_cbb140(__int64 result);
__int64 GameRoutine_cbc720(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d83020(_QWORD, _QWORD);
__int64 GameRoutine_e152d0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1fd4b18[])();
extern __int64 GameData_212dbb8[9];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 EventManager_cbb140(__int64 result);
__int64 EventManager_cbb8c0(__int64 a1, _DWORD* a2);
__int64 EventManager_cbbb40(__int64 a1, __int64 a2);
_QWORD* EventManager_cbc520(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
_QWORD* EventManager_cbcbe0(_QWORD* result);
__int64 GameRoutine_cbd9c0(_QWORD, _QWORD);
__int64 GameRoutine_cbdb20(_QWORD, _QWORD);
__int64 GameRoutine_cbdc80(_QWORD, _QWORD);
__int64 GameRoutine_cbdde0(_QWORD, _QWORD);
__int64 GameRoutine_d5ad30(_QWORD, _QWORD);
__int64 fw_containers_BalanceAfterInsert(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_cbe390(void);
__int64 EventManager_cbce30(_QWORD* a1);
__int64 EventManager_cbd020(__int64 result);
__int64 game_hub_EventManager_TryRunHitEvent_lambda0_Invoke(__int64 result,
                                                            __int64* a2);
__int64* EventManager_cbdf40(__int64** a1, unsigned __int8* a2, __int64 a3,
                             __int64** a4);
__int64
game_hub_EventManager_GetCandidatesAccessEvent_lambda0_Invoke(__int64 a1,
                                                              __int64* a2);
_QWORD*
game_hub_EventManager_ForLoopEventOptimize_lambda0_Invoke(_QWORD* result,
                                                          __int64 a2);
void __attribute__((noreturn))
GameRoutine_60a310_alt1(_QWORD, _QWORD) __asm__("GameRoutine_60a310");

__int64 EventManager_Destructor(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int64 j;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v1 = a1[15];
  a1[14] = 0;
  a1[15] = 0;
  *a1 = game_hub_EventManager_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v3 = (_QWORD*)a1[19];
  if (v3 != a1 + 20) {
    do {
      v4 = v3[7];
      for (i = v3[8]; i != v4; i -= 16) {
        v10 = *(_QWORD*)(i - 8);
        if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak(v10);
        }
      }
      v3[8] = v4;
      v6 = v3[10];
      for (j = v3[11]; j != v6; j -= 16) {
        v11 = *(_QWORD*)(j - 8);
        if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak(v11);
        }
      }
      v8 = (_QWORD*)v3[1];
      v3[11] = v6;
      if (v8 != nullptr) {
        do {
          v9 = v8;
          v8 = (_QWORD*)*v8;
        } while (v8 != nullptr);
      }
      else {
        do {
          v9 = (_QWORD*)v3[2];
          v12 = v3 == (_QWORD*)*v9;
          v3 = v9;
        } while (!v12);
      }
      v3 = v9;
    } while (v9 != a1 + 20);
  }
  result = GameRoutine_cbcbe0(a1[20]);
  v14 = a1[17];
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    result = std___1___shared_weak_count___release_weak(v14);
  }
  v15 = a1[15];
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    result = std___1___shared_weak_count___release_weak(v15);
  }
  v16 = a1[13];
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    result = std___1___shared_weak_count___release_weak(v16);
  }
  *a1 = GameData_1fd48f8;
  if ((_QWORD*)GameData_21f3c98 == a1) {
    GameData_21f3c98 = 0;
    GameData_220b700 = 0;
  }
  return result;
}

__int64 EventManager_cbb140(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  bool v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;

  v1 = *(_QWORD**)(result + 152);
  v2 = (_QWORD*)(result + 160);
  if (v1 != (_QWORD*)(result + 160)) {
    while (1) {
      v3 = (_QWORD*)v1[7];
      v4 = (_QWORD*)v1[8];
      if (v3 != v4) {
        while ((*(_BYTE*)(*v3 + 1452LL) & 1) == 0) {
          v3 += 2;
          if (v3 == v4) {
            goto LABEL_24;
          }
        }
      }
      v5 = v3 + 2;
      v6 = v3 == v4 || v5 == v4;
      if (!v6) {
        break;
      }
      if (v3 != v4) {
        goto LABEL_22;
      }
    LABEL_24:
      v10 = (_QWORD*)v1[10];
      v11 = (_QWORD*)v1[11];
      if (v10 != v11) {
        while ((*(_BYTE*)(*v10 + 1452LL) & 1) == 0) {
          v10 += 2;
          if (v10 == v11) {
            goto LABEL_45;
          }
        }
      }
      if (v10 != v11) {
        v13 = v10 + 2;
        if (v10 + 2 != v11) {
          do {
            v14 = *v13;
            if ((*(_BYTE*)(*v13 + 1452LL) & 1) == 0) {
              v15 = v13[1];
              *v13 = 0;
              v13[1] = 0;
              v16 = v10[1];
              *v10 = v14;
              v10[1] = v15;
              if (v16 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
                result = std___1___shared_weak_count___release_weak(v16);
              }
              v10 += 2;
            }
            v13 += 2;
          } while (v13 != v11);
          v11 = (_QWORD*)v1[11];
        }
      }
      if (v10 != v11) {
        do {
          v19 = *(v11 - 1);
          if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
            result = std___1___shared_weak_count___release_weak(v19);
          }
          v11 -= 2;
        } while (v11 != v10);
        v1[11] = v10;
      }
    LABEL_45:
      v17 = (_QWORD*)v1[1];
      if (v17 != nullptr) {
        do {
          v18 = v17;
          v17 = (_QWORD*)*v17;
        } while (v17 != nullptr);
      }
      else {
        do {
          v18 = (_QWORD*)v1[2];
          v6 = v1 == (_QWORD*)*v18;
          v1 = v18;
        } while (!v6);
      }
      v1 = v18;
      if (v18 == v2) {
        return result;
      }
    }
    do {
      v7 = *v5;
      if ((*(_BYTE*)(*v5 + 1452LL) & 1) == 0) {
        v8 = v5[1];
        *v5 = 0;
        v5[1] = 0;
        v9 = v3[1];
        *v3 = v7;
        v3[1] = v8;
        if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          result = std___1___shared_weak_count___release_weak(v9);
        }
        v3 += 2;
      }
      v5 += 2;
    } while (v5 != v4);
    v4 = (_QWORD*)v1[8];
    if (v3 == v4) {
      goto LABEL_24;
    }
  LABEL_22:
    while (v4 != v3) {
      v12 = *(v4 - 1);
      if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        result = std___1___shared_weak_count___release_weak(v12);
      }
      v4 -= 2;
    }
    v1[8] = v3;
    goto LABEL_24;
  }
  return result;
}

__int64 EventManager_cbb8c0(__int64 a1, _DWORD* a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64* i;
  __int64* v7;
  _QWORD* v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  _QWORD* v15;
  _QWORD* v16;
  bool v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD v22[3];

  v2 = *(_QWORD**)(a1 + 152);
  v3 = (_QWORD*)(a1 + 160);
  if (v2 != (_QWORD*)(a1 + 160)) {
    do {
      v7 = (__int64*)v2[7];
      for (i = (__int64*)v2[8]; v7 != i; v7 += 2) {
        while (1) {
          if ((unsigned int)(*a2 - 3) < 2 ||
              (GameRoutine_e152d0(*v7 + 120) & 1) == 0) {
            v8 = *(_QWORD**)(a1 + 152);
            if (v8 != v3) {
              v9 = *v7;
              while (1) {
                v10 = (__int64*)v8[7];
                v11 = (__int64*)v8[8];
                if (v10 != v11) {
                  while (1) {
                    v12 = *v10;
                    if (*v10 == v9) {
                      break;
                    }
                    v10 += 2;
                    if (v10 == v11) {
                      goto LABEL_18;
                    }
                  }
                  if (v10 != v11) {
                    break;
                  }
                }
              LABEL_18:
                v13 = (__int64*)v8[10];
                v14 = (__int64*)v8[11];
                if (v13 != v14) {
                  while (1) {
                    v12 = *v13;
                    if (*v13 == v9) {
                      break;
                    }
                    v13 += 2;
                    if (v13 == v14) {
                      goto LABEL_23;
                    }
                  }
                  if (v13 != v14) {
                    break;
                  }
                }
              LABEL_23:
                v15 = (_QWORD*)v8[1];
                if (v15 != nullptr) {
                  do {
                    v16 = v15;
                    v15 = (_QWORD*)*v15;
                  } while (v15 != nullptr);
                }
                else {
                  do {
                    v16 = (_QWORD*)v8[2];
                    v17 = v8 == (_QWORD*)*v16;
                    v8 = v16;
                  } while (!v17);
                }
                v8 = v16;
                if (v16 == v3) {
                  goto LABEL_7;
                }
              }
              if ((*(_BYTE*)(v12 + 1452) & 1) == 0) {
                break;
              }
            }
          }
        LABEL_7:
          v7 += 2;
          if (v7 == i) {
            goto LABEL_36;
          }
        }
        if (*(_DWORD*)(v12 + 1244) == 1) {
          GameRoutine_d59720(v22, v12, 3);
          if (v22[0] != 0) {
            v22[1] = v22[0];
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
              v18 = 128;
            }
            else {
              v18 = 56;
            }
            nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v18);
          }
        }
        *(_BYTE*)(v12 + 1452) = 1;
      }
    LABEL_36:
      v19 = (_QWORD*)v2[1];
      if (v19 != nullptr) {
        do {
          v20 = v19;
          v19 = (_QWORD*)*v19;
        } while (v19 != nullptr);
      }
      else {
        do {
          v20 = (_QWORD*)v2[2];
          v17 = v2 == (_QWORD*)*v20;
          v2 = v20;
        } while (!v17);
      }
      v2 = v20;
    } while (v20 != v3);
  }
  EventManager_cbb140(a1);
  return GameRoutine_d83020(*(_QWORD*)(a1 + 112), a2);
}

__int64 EventManager_cbbb40(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  _QWORD* v10;
  _QWORD* v11;
  bool v12;
  __int64 v14;
  _QWORD v15[5];

  v4 = *(_QWORD**)(a1 + 152);
  if (v4 == (_QWORD*)(a1 + 160)) {
    return 0;
  }
  v15[3] = v2;
  v15[4] = v3;
  while (1) {
    v5 = (__int64*)v4[7];
    v6 = (__int64*)v4[8];
    if (v5 != v6) {
      while (1) {
        v7 = *v5;
        if (*v5 == a2) {
          break;
        }
        v5 += 2;
        if (v5 == v6) {
          goto LABEL_9;
        }
      }
      if (v5 != v6) {
        break;
      }
    }
  LABEL_9:
    v8 = (__int64*)v4[10];
    v9 = (__int64*)v4[11];
    if (v8 != v9) {
      while (1) {
        v7 = *v8;
        if (*v8 == a2) {
          break;
        }
        v8 += 2;
        if (v8 == v9) {
          goto LABEL_14;
        }
      }
      if (v8 != v9) {
        break;
      }
    }
  LABEL_14:
    v10 = (_QWORD*)v4[1];
    if (v10 != nullptr) {
      do {
        v11 = v10;
        v10 = (_QWORD*)*v10;
      } while (v10 != nullptr);
    }
    else {
      do {
        v11 = (_QWORD*)v4[2];
        v12 = v4 == (_QWORD*)*v11;
        v4 = v11;
      } while (!v12);
    }
    v4 = v11;
    if (v11 == (_QWORD*)(a1 + 160)) {
      return 0;
    }
  }
  if ((*(_BYTE*)(v7 + 1452) & 1) == 0) {
    if (*(_DWORD*)(v7 + 1244) == 1) {
      GameRoutine_d59720(v15, v7, 3);
      if (v15[0] != 0) {
        v15[1] = v15[0];
        v14 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v14);
      }
    }
    *(_BYTE*)(v7 + 1452) = 1;
  }
  return 1;
}

_QWORD* EventManager_cbc520(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4;
  char v5;
  __int64 v6;
  _QWORD* v8;
  _QWORD* result;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 i;
  _QWORD* v16;
  _QWORD* v17;
  bool v18;
  __int64 v19;
  _QWORD v20[4];
  _QWORD* v21;
  _QWORD v22[4];
  _QWORD* v23;
  int v24;
  char v25;
  _QWORD v26[4];
  _QWORD* v27;

  v4 = *(unsigned __int8*)(a2 + 8);
  LOBYTE(v24) = 0;
  v25 = 0;
  if (v4 == 1) {
    v5 = *(_DWORD*)(a2 + 4);
    v25 = 1;
    v24 = 1 << v5;
  }
  if (*(_BYTE*)a2 == 1) {
    v22[0] = GameData_1fd4b18;
    v22[1] = a2;
    v22[2] = &v24;
    v22[3] = a3;
    v23 = v22;
    v26[3] = a3;
    v27 = v26;
    v26[0] = GameData_1fd4b18;
    v26[1] = a2;
    v26[2] = &v24;
    GameRoutine_cbc720(a1, *(_QWORD*)GameData_212dbb8[0] + 88LL, v26);
    if (v27 == v26) {
      v6 = 32;
    }
    else {
      if (v27 == nullptr) {
        goto LABEL_26;
      }
      v6 = 40;
    }
    (*(void (**)(__int64))(*v27 + v6))((__int64)v27);
  LABEL_26:
    result = v23;
    if (v23 != v22) {
      goto LABEL_27;
    }
    goto LABEL_23;
  }
  v20[0] = GameData_1fd4b18;
  v20[1] = a2;
  v20[2] = &v24;
  v20[3] = a3;
  v8 = *(_QWORD**)(a1 + 152);
  result = v20;
  v10 = (_QWORD*)(a1 + 160);
  v21 = v20;
  if (v8 == (_QWORD*)(a1 + 160)) {
  LABEL_23:
    v19 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64, __int64))(
        *result + v19))(result, a2, a3, a4);
  }
  do {
    v11 = v8[7];
    v12 = v8[8];
    if (v11 != v12) {
      while (1) {
        v13 = v21;
        if (v21 == nullptr) {
          break;
        }
        (*(void (**)(_QWORD*, __int64))(*v21 + 48LL))(v21, v11);
        v11 += 16;
        if (v11 == v12) {
          goto LABEL_13;
        }
      }
    LABEL_31:
      GameRoutine_60a310(v13);
    }
  LABEL_13:
    v14 = v8[10];
    for (i = v8[11]; v14 != i; v14 += 16) {
      v13 = v21;
      if (v21 == nullptr) {
        goto LABEL_31;
      }
      (*(void (**)(_QWORD*, __int64))(*v21 + 48LL))(v21, v14);
    }
    v16 = (_QWORD*)v8[1];
    if (v16 != nullptr) {
      do {
        v17 = v16;
        v16 = (_QWORD*)*v16;
      } while (v16 != nullptr);
    }
    else {
      do {
        v17 = (_QWORD*)v8[2];
        v18 = v8 == (_QWORD*)*v17;
        v8 = v17;
      } while (!v18);
    }
    v8 = v17;
  } while (v17 != v10);
  result = v21;
  if (v21 == v20) {
    goto LABEL_23;
  }

LABEL_27:
  if (result != nullptr) {
    v19 = 40;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64, __int64))(
        *result + v19))(result, a2, a3, a4);
  }
  return result;
}

_QWORD* EventManager_cbcbe0(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
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

  if (result != nullptr) {
    v1 = result;
    EventManager_cbcbe0(*result);
    EventManager_cbcbe0(v1[1]);
    v2 = v1[10];
    v3 = fw_memory_g_heap_manager_ptr;
    if (v2 != 0) {
      v4 = v1[11];
      if (v2 == v4) {
        goto LABEL_11;
      }
      do {
        v5 = *(_QWORD*)(v4 - 8);
        if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak(v5);
        }
        v4 -= 16;
      } while (v4 != v2);
      v6 = v1[10];
      v1[11] = v2;
      if (v6 != 0) {
      LABEL_11:
        v7 = 128;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
      }
    }
    v8 = v1[7];
    if (v8 != 0) {
      v9 = v1[8];
      if (v8 == v9) {
        goto LABEL_22;
      }
      do {
        v10 = *(_QWORD*)(v9 - 8);
        if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak(v10);
        }
        v9 -= 16;
      } while (v9 != v8);
      v11 = v1[7];
      v1[8] = v8;
      if (v11 != 0) {
      LABEL_22:
        v12 = 128;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12);
      }
    }
    if ((v1[4] & 1) != 0 && v1[6] != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13);
    }
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v14 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14);
  }
  return result;
}

__int64 EventManager_cbce30(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;

  v1 = a1[9];
  if (v1 != 0) {
    a1[10] = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  v4 = a1[8];
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = a1[6];
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak(v5);
  }
  result = a1[4];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 EventManager_cbd020(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(result + 24);
  if (v1 != 0) {
    v2 = *(_QWORD*)(result + 32);
    v3 = result;
    if (v1 == v2) {
      goto LABEL_9;
    }
    do {
      v4 = *(_QWORD*)(v2 - 8);
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        result = std___1___shared_weak_count___release_weak(v4);
      }
      v2 -= 16;
    } while (v2 != v1);
    v5 = *(_QWORD*)(v3 + 24);
    *(_QWORD*)(v3 + 32) = v1;
    if (v5 != 0) {
    LABEL_9:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
    }
  }
  return result;
}

__int64 game_hub_EventManager_TryRunHitEvent_lambda0_Invoke(__int64 result,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  int v5;
  unsigned __int64 v6;
  char* v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  char* v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64* v27;
  unsigned __int64 v28;
  _QWORD* v29;
  char* v30;
  __int64 v31;
  char* v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  char* v41;
  char* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  bool v57;
  signed __int64 v58;
  _QWORD* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64* v65;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  _QWORD* v69;
  __int64* v70;
  __int64 v71;
  signed __int64 v72;
  signed __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  signed __int64 v77;
  _QWORD* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;

  v3 = *a2;
  v2 = a2[1];
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  v4 = *(__int64**)(result + 8);
  if (**(_BYTE**)(result + 16) != 1 || (*(_BYTE*)(v3 + 1760) & 0x80) != 0) {
    v5 = *(_DWORD*)(v3 + 1448);
    if (v5 != -1) {
      if (v5 != 0) {
        goto LABEL_64;
      }
      if (v2 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                  memory_order_relaxed);
      }
      v6 = v4[4];
      if (v6 != 0) {
        goto LABEL_59;
      }
      v8 = (char*)v4[1];
      v7 = (char*)v4[2];
      v9 = 32 * (v7 - v8) - 1;
      if (v7 == v8) {
        v9 = 0;
      }
      if ((unsigned __int64)(v9 - v4[5]) >= 0x100) {
        v4[4] = 256;
        v10 = *((_QWORD*)v7 - 1);
        v4[2] = (__int64)(v7 - 8);
        v81 = v10;
        result = GameRoutine_cbd9c0(v4, &v81);
      LABEL_58:
        v6 = v4[4];
      LABEL_59:
        v48 = v4[1];
        v49 = (_QWORD*)(v48 + 8 * (v6 >> 8));
        v50 = *v49 + 16LL * (unsigned __int8)v6;
        if (v4[2] == v48) {
          v50 = 0;
        }
        if (v50 == *v49) {
          v50 = *(v49 - 1) + 4096LL;
        }
        *(_QWORD*)(v50 - 16) = v3;
        *(_QWORD*)(v50 - 8) = v2;
        v51 = v4[5] + 1;
        --v4[4];
        v4[5] = v51;
        goto LABEL_64;
      }
      v20 = (char*)v4[3];
      v21 = (char*)*v4;
      v22 = (__int64)&v20[-*v4];
      if (v7 - v8 < (unsigned __int64)v22) {
        if (v8 == v21) {
          v81 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 4096,
                                               16, 0);
          GameRoutine_cbdc80(v4, &v81);
          v35 = v4[2];
          v36 = *(_QWORD*)(v35 - 8);
          v4[2] = v35 - 8;
          v81 = v36;
          result = GameRoutine_cbd9c0(v4, &v81);
        }
        else {
          v81 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 4096,
                                               16, 0);
          result = GameRoutine_cbdb20(v4, &v81);
        }
        v37 = 128;
        if (v4[2] - v4[1] != 8) {
          v37 = v4[4] + 256;
        }
        v4[4] = v37;
        goto LABEL_58;
      }
      if (v20 == v21) {
        v28 = 1;
      }
      else {
        v28 = v22 >> 2;
      }
      if (v28 >> 61 == 0) {
        v29 = (_QWORD*)fw_memory_g_heap_manager_ptr;
        v30 = (char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v28, 16, 0);
        result = fw_memory_HeapManager_Allocate(*v29, 4096, 16, 0);
        v31 = result;
        if (v28 != 0) {
          v32 = &v30[8 * v28];
        }
        else {
          v38 = fw_memory_HeapManager_Allocate(*v29, 8, 16, 0);
          v32 = (char*)(v38 + 8);
          v39 = 128;
          if (*(_QWORD*)(*v29 + 200LL) == 0) {
            v39 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v29 + v39);
          v8 = (char*)v4[1];
          v7 = (char*)v4[2];
          v30 = (char*)v38;
        }
        *(_QWORD*)v30 = v31;
        v40 = v30 + 8;
        v41 = v30;
        if (v8 != v7) {
          while (1) {
            if (v40 == v32) {
              if (v30 <= v41) {
                if (v40 == v41) {
                  v54 = 1;
                }
                else {
                  v54 = (v40 - v41) >> 2;
                }
                if (v54 >> 61 != 0) {
                  goto LABEL_113;
                }
                v55 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v54, 16, 0);
                v56 = v55;
                v42 = (char*)(v55 + 8 * (v54 >> 2));
                v58 = v40 - v30;
                v57 = v40 == v30;
                v40 = v42;
                if (!v57) {
                  v40 = &v42[v58];
                  v59 = (_QWORD*)(v55 + 8 * (v54 >> 2));
                  do {
                    v60 = *(_QWORD*)v30;
                    v30 += 8;
                    v58 -= 8LL;
                    *v59++ = v60;
                  } while (v58 != 0);
                }
                v32 = (char*)(v55 + 8 * v54);
                v61 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v61 = 56;
                }
                result = nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v61);
                v41 = (char*)v56;
              }
              else {
                v53 = (((v30 - v41) >> 3) + 1 +
                       ((unsigned __int64)(((v30 - v41) >> 3) + 1) >> 63)) >>
                      1;
                v42 = &v30[-8 * v53];
                if (v40 != v30) {
                  result = memmove(&v30[-8 * v53], v30, v40 - v30);
                }
                v40 = &v42[v40 - v30];
              }
            }
            else {
              v42 = v30;
            }
            v52 = *(_QWORD*)v8;
            v8 += 8;
            v30 = v42;
            *(_QWORD*)v40 = v52;
            v40 += 8;
            if (v8 == (char*)v4[2]) {
              goto LABEL_52;
            }
          }
        }
        v42 = v30;
      LABEL_52:
        v43 = v4[4];
        v44 = *v4;
        *v4 = (__int64)v41;
        v4[1] = (__int64)v42;
        v45 = 128;
        v4[2] = (__int64)v40;
        v4[3] = (__int64)v32;
        v46 = v43 + 256;
        if (v40 - v42 != 8) {
          v45 = v46;
        }
        v4[4] = v45;
        if (v44 != 0) {
          v47 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v47 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v47);
        }
        goto LABEL_58;
      }
    LABEL_113:
      GameRoutine_60a210(result);
    }
    if (v2 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
    }
    v11 = (__int64*)v4[1];
    v12 = (__int64*)v4[2];
    v13 = (char*)v12 - (char*)v11;
    if (v12 == v11) {
      v14 = 0;
    }
    else {
      v14 = 32 * ((char*)v12 - (char*)v11) - 1;
    }
    v15 = v4[4];
    v16 = v4[5] + v15;
    if (v14 != v16) {
    LABEL_95:
      v69 = (_QWORD*)(v11[v16 >> 8] + 16LL * (unsigned __int8)v16);
      *v69 = v3;
      v69[1] = v2;
      ++v4[5];
      if (v2 == 0) {
        return result;
      }
      goto LABEL_65;
    }
    if (v15 < 0x100) {
      v18 = (__int64*)v4[3];
      v19 = (__int64)v18 - *v4;
      if (v13 >= (unsigned __int64)v19) {
        v23 = v19 >> 2;
        if (v18 == (__int64*)*v4) {
          v24 = 1;
        }
        else {
          v24 = v23;
        }
        if (v24 >> 61 != 0) {
          goto LABEL_113;
        }
        v25 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v24, 16, 0);
        v26 = (__int64*)(v25 + v13);
        v27 = (__int64*)(v25 + 8 * v24);
        result = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4096, 16, 0);
        if (v13 == 8 * v24) {
          if (v12 == v11) {
            v62 = result;
            v63 = fw_memory_g_heap_manager_ptr;
            v26 = (__int64*)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
            v27 = v26 + 1;
            v64 = 128;
            if (*(_QWORD*)(*(_QWORD*)v63 + 200LL) == 0) {
              v64 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v63 + v64);
            result = v62;
            v11 = (__int64*)v4[1];
            v12 = (__int64*)v4[2];
            v25 = (__int64)v26;
          }
          else {
            v26 -=
                ((v13 >> 3) + 1 + ((unsigned __int64)((v13 >> 3) + 1) >> 63)) >>
                1;
          }
        }
        *v26 = result;
        v65 = v26 + 1;
        if (v12 != v11) {
          while (1) {
            if (v26 == (__int64*)v25) {
              if (v65 >= v27) {
                if (v27 == v26) {
                  v74 = 1;
                }
                else {
                  v74 = ((char*)v27 - (char*)v26) >> 2;
                }
                if (v74 >> 61 != 0) {
                  goto LABEL_113;
                }
                v75 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v74, 16, 0);
                v76 = v75;
                v70 = (__int64*)(v75 + ((2 * v74 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                v77 = (char*)v65 - (char*)v26;
                v57 = v65 == v26;
                v65 = v70;
                if (!v57) {
                  v65 = (__int64*)((char*)v70 + v77);
                  v78 = (_QWORD*)(v75 + ((2 * v74 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                  do {
                    v79 = *v26++;
                    v77 -= 8LL;
                    *v78++ = v79;
                  } while (v77 != 0);
                }
                v27 = (__int64*)(v75 + 8 * v74);
                v80 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v80 = 56;
                }
                result = nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v80);
                v25 = v76;
              }
              else {
                v72 = (char*)v65 - (char*)v26;
                v73 = (char*)v65 - (char*)v26;
                v57 = v65 == v26;
                v65 += (v27 - v65 + 1 +
                        ((unsigned __int64)(v27 - v65 + 1) >> 63)) >>
                       1;
                v70 = (__int64*)((char*)v65 - v72);
                if (!v57) {
                  result = memmove((char*)v65 - v72, v26, v73);
                }
              }
            }
            else {
              v70 = v26;
            }
            v71 = *--v12;
            *(v70 - 1) = v71;
            v66 = v70 - 1;
            v26 = v66;
            if (v12 == (__int64*)v4[1]) {
              goto LABEL_90;
            }
          }
        }
        v66 = v26;
      LABEL_90:
        v67 = *v4;
        *v4 = v25;
        v4[1] = (__int64)v66;
        v4[2] = (__int64)v65;
        v4[3] = (__int64)v27;
        if (v67 != 0) {
          v68 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v68 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v68);
        }
        goto LABEL_94;
      }
      if (v18 != v12) {
        v81 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4096, 16, 0);
        result = GameRoutine_cbdc80(v4, &v81);
        goto LABEL_94;
      }
      v81 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4096, 16, 0);
      GameRoutine_cbdb20(v4, &v81);
      v33 = (__int64*)v4[1];
      v34 = *v33;
      v4[1] = (__int64)(v33 + 1);
      v81 = v34;
    }
    else {
      v4[4] = v15 - 256;
      v17 = *v11;
      v4[1] = (__int64)(v11 + 1);
      v81 = v17;
    }
    result = GameRoutine_cbdde0(v4, &v81);
  LABEL_94:
    v11 = (__int64*)v4[1];
    v16 = v4[5] + v4[4];
    goto LABEL_95;
  }
LABEL_64:
  if (v2 == 0) {
    return result;
  }
LABEL_65:
  if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return std___1___shared_weak_count___release_weak(v2);
  }
  return result;
}

__int64* EventManager_cbdf40(__int64** a1, unsigned __int8* a2, __int64 a3,
                             __int64** a4)
{
  __int64* v4;
  __int64* v5;
  unsigned __int64 v8;
  bool v9;
  unsigned __int64 v10;
  unsigned __int8* v11;
  unsigned __int64 v12;
  __int64* v13;
  unsigned __int64 v14;
  bool v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  _QWORD* v22;
  __int64* v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64* v29;

  v5 = (__int64*)(a1 + 1);
  v4 = a1[1];
  if (v4 != nullptr) {
    v8 = *a2;
    v9 = (v8 & 1) == 0;
    v10 = v8 >> 1;
    if (v9) {
      v11 = a2 + 1;
    }
    else {
      v11 = *((unsigned __int8**)a2 + 2);
    }
    if (v9) {
      v12 = v10;
    }
    else {
      v12 = *((_QWORD*)a2 + 1);
    }
    while (1) {
      while (1) {
        v13 = v4;
        v14 = *((unsigned __int8*)v4 + 32);
        v15 = (v14 & 1) == 0;
        v16 = v14 >> 1;
        v17 = v15 ? v16 : v13[5];
        v18 = v15 ? (__int64)v13 + 33 : v13[6];
        v19 = v17 >= v12 ? v12 : v17;
        v20 = memcmp(v11, v18, v19);
        if (v20 != 0) {
          break;
        }
        if (v12 >= v17) {
          goto LABEL_22;
        }
      LABEL_8:
        v4 = (__int64*)*v13;
        v5 = v13;
        if (*v13 == 0) {
          goto LABEL_29;
        }
      }
      if (v20 < 0) {
        goto LABEL_8;
      }
    LABEL_22:
      v21 = memcmp(v18, v11, v19);
      if (v21 != 0) {
        if ((v21 & 0x80000000) == 0) {
          return v13;
        }
      }
      else if (v17 >= v12) {
        return v13;
      }
      v4 = (__int64*)v13[1];
      if (v4 == nullptr) {
        v5 = v13 + 1;
        goto LABEL_29;
      }
    }
  }
  v13 = (__int64*)(a1 + 1);
LABEL_29:
  v22 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
  v23 = *a4;
  v24 = v22;
  if ((*(_BYTE*)*a4 & 1) != 0) {
    fw_text_String_CopyTerminated(v22 + 4, v23[2], v23[1]);
  }
  else {
    v25 = *v23;
    v26 = v23[1];
    v27 = v23[2];
    v22[5] = v26;
    v22[6] = v27;
    v22[4] = v25;
  }
  v24[11] = 0;
  v24[12] = 0;
  v24[9] = 0;
  v24[10] = 0;
  v28 = v24;
  v24[7] = 0;
  v24[8] = 0;
  *v24 = 0;
  v24[1] = 0;
  v24[2] = v13;
  *v5 = (__int64)v24;
  v29 = (__int64*)**a1;
  if (v29 != nullptr) {
    *a1 = v29;
    v28 = (_QWORD*)*v5;
  }
  fw_containers_BalanceAfterInsert(a1[1], v28);
  a1[2] = (__int64*)((char*)a1[2] + 1);
  return v24;
}

__int64

game_hub_EventManager_GetCandidatesAccessEvent_lambda0_Invoke(__int64 a1,
                                                              __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 result;
  __int64* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;

  v3 = *a2;
  v2 = a2[1];
  if (v2 != 0) {
    v5 = *a2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
    result = GameRoutine_d5ad30(v5, *(_QWORD*)(a1 + 16));
    if ((result & 1) == 0) {
    LABEL_23:
      if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
        return std___1___shared_weak_count___release_weak(v2);
      }
      return result;
    }
    v7 = *(__int64**)(a1 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    result = GameRoutine_d5ad30(v3, *(_QWORD*)(a1 + 16));
    if ((result & 1) == 0) {
      return result;
    }
    v7 = *(__int64**)(a1 + 8);
  }
  v8 = (_QWORD*)v7[1];
  v9 = v7[2];
  if ((unsigned __int64)v8 >= v9) {
    v11 = *v7;
    v12 = (__int64)v8 - *v7;
    v13 = v12 >> 4;
    v14 = (v12 >> 4) + 1;
    if (v14 >> 60 != 0) {
      GameRoutine_cbe390();
    }
    v15 = v9 - v11;
    v16 = fw_memory_g_heap_manager_ptr;
    if (v15 >> 3 > v14) {
      v14 = v15 >> 3;
    }
    if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF0LL) {
      v17 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v17 = v14;
    }
    if (v17 != 0) {
      if (v17 >> 60 != 0) {
        GameRoutine_60a210(result);
      }
      v18 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v17, 16, 0);
      v11 = *v7;
      v19 = v7[1] - *v7;
      v13 = v19 >> 4;
    }
    else {
      v18 = 0;
      v19 = v12;
    }
    v20 = (_QWORD*)(v18 + v12);
    v21 = v18 + 16 * v17;
    *v20 = v3;
    v20[1] = v2;
    v22 = v18 + v12 - 16 * v13;
    v10 = v18 + v12 + 16;
    result = memcpy(v22, v11, v19);
    *v7 = v22;
    v7[1] = v10;
    v7[2] = v21;
    if (v11 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v23 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v23);
    }
  }
  else {
    *v8 = v3;
    v8[1] = v2;
    v10 = (__int64)(v8 + 2);
  }
  v7[1] = v10;
  if (v2 != 0) {
    goto LABEL_23;
  }
  return result;
}

_QWORD*

game_hub_EventManager_ForLoopEventOptimize_lambda0_Invoke(_QWORD* result,
                                                          __int64 a2)
{
  __int64 v2;
  __int64 v3;

  if (*(_BYTE*)(result[1] + 12LL) != 1 ||
      (*(_BYTE*)(*(_QWORD*)a2 + 1761LL) & 2) == 0) {
    v2 = result[2];
    if (*(_BYTE*)(v2 + 4) != 1 ||
        (*(_DWORD*)(*(_QWORD*)a2 + 1208LL) & *(_DWORD*)v2) != 0) {
      v3 = *(_QWORD*)(result[3] + 32LL);
      if (v3 == 0) {
        GameRoutine_60a310_alt1((unsigned __int8)v3, a2);
      }
      return (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 48LL))(v3);
    }
  }
  return result;
}

#pragma GCC visibility pop
