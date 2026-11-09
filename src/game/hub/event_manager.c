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

#pragma GCC visibility pop
