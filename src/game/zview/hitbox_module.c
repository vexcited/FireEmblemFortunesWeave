#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* GameData_212ee20[6];
_QWORD* HitboxModule_Unknown5(_QWORD* result);
__int64 HitboxModule_d4e080(__int64 result, _QWORD* a2);
__int64 GameRoutine_d4e4e0(_QWORD, _QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__n128 nn_os_LockMutex(_QWORD);
__int64 HitboxModule_d4dfe0(__int64 a1, __int64 a2);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_zview_HitboxModule_vtable[])();
extern __int64 GameData_220f8a8;
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* HitboxModule_Destructor(_QWORD* result);
__int64 HitboxModule_d4e240(__int64 a1, __int64 a2);

_QWORD* HitboxModule_Destructor(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  char* v3;
  char* v4;
  unsigned __int64 v5;
  __int64 v6;
  char* v7;
  signed __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = result;
  *result = game_zview_HitboxModule_vtable;
  v2 = GameData_220f8a8;
  if (GameData_220f8a8 == 0) {
    goto LABEL_23;
  }
  nn_os_LockMutex(GameData_220f8a8 + 48);
  v4 = *(char**)(v2 + 16);
  v3 = *(char**)(v2 + 24);
  if (v4 == v3) {
    goto LABEL_18;
  }
  v5 = v3 - v4 - 8;
  if ((~(_BYTE)v5 & 0x18) != 0) {
    v6 = ((unsigned __int8)((unsigned int)v5 >> 3) + 1) & 3;
    while (*(_QWORD**)v4 != v1) {
      v4 += 8;
      if (--v6 == 0) {
        goto LABEL_7;
      }
    }
    goto LABEL_18;
  }
LABEL_7:
  if (v5 >= 0x18) {
    v4 += 16;
    while (1) {
      if (*((_QWORD**)v4 - 2) == v1) {
        v4 -= 16;
        goto LABEL_18;
      }
      if (*((_QWORD**)v4 - 1) == v1) {
        v4 -= 8;
        goto LABEL_18;
      }
      if (*(_QWORD**)v4 == v1) {
        goto LABEL_18;
      }
      if (*((_QWORD**)v4 + 1) == v1) {
        break;
      }
      v7 = v4 + 16;
      v4 += 32;
      if (v7 == v3) {
        goto LABEL_22;
      }
    }
    v4 += 8;
  LABEL_18:
    if (v4 != v3) {
      v8 = v3 - (v4 + 8);
      if (v3 != v4 + 8) {
        memmove(v4, v4 + 8, v3 - (v4 + 8));
      }
      *(_QWORD*)(v2 + 24) = &v4[v8];
    }
  }
LABEL_22:
  result = (_QWORD*)nn_os_UnlockMutex(v2 + 48);
LABEL_23:
  v9 = v1[3];
  if (v9 != 0) {
    v10 = v1[4];
    if (v9 == v10) {
      goto LABEL_31;
    }
    do {
      v11 = *(_QWORD*)(v10 - 8);
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v11);
      }
      v10 -= 16;
    } while (v10 != v9);
    v12 = v1[3];
    v1[4] = v9;
    v9 = v12;
    if (v12 != 0) {
    LABEL_31:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v9);
    }
  }
  return result;
}

_QWORD* HitboxModule_Unknown5(_QWORD* result)
{
  _QWORD* v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  float v6;
  float v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* i;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  char v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;

  v1 = result;
  if (*GameData_212ee20[0] != 0) {
    v2 = (__int64*)result[3];
    v3 = (__int64*)result[4];
    if (v2 == v3) {
      goto LABEL_26;
    }
    while (1) {
      v5 = *v2;
      v4 = v2[1];
      if (v4 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v5 == 0) {
        goto LABEL_22;
      }
      if (*(_BYTE*)(v5 + 156) == 1 && (*(_BYTE*)(v5 + 176) & 1) == 0) {
        v6 = *(float*)(v5 + 152);
        if (v6 > 0.0f) {
          v7 =
              v6 -
              fabsf(
                  (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v5 + 168) +
                                                          8LL) +
                                               496LL) +
                                    16LL) *
                          16.683f) /
                  1000.0f);
          if (v7 < 0.0f) {
            *(_DWORD*)(v5 + 152) = 0;
            *(_BYTE*)(v5 + 156) = 1;
          LABEL_14:
            if ((*(_BYTE*)(v5 + 233) & 1) == 0) {
              v9 = *(_QWORD*)(v5 + 288);
              v8 = *(_QWORD*)(v5 + 296);
              while (v9 != v8) {
                result = *(_QWORD**)(v9 + 32);
                if (result != nullptr) {
                  result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 48LL))(
                      result);
                }
                v9 += 48;
              }
              *(_BYTE*)(v5 + 233) = 1;
            }
            goto LABEL_21;
          }
          *(float*)(v5 + 152) = v7;
          *(_BYTE*)(v5 + 156) = 1;
          if (v7 == 0.0f) {
            goto LABEL_14;
          }
        }
      }
    LABEL_21:
      *(_BYTE*)(v5 + 176) = 0;
    LABEL_22:
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v4);
      }
      v2 += 2;
      if (v2 == v3) {
        v2 = (__int64*)v1[3];
        v3 = (__int64*)v1[4];
      LABEL_26:
        v10 = v2;
        if (v2 != v3) {
          v10 = v2;
          while (*v10 != 0) {
            v10 += 2;
            if (v10 == v3) {
              goto LABEL_48;
            }
          }
        }
        if (v10 != v3) {
          v11 = v10 + 2;
          if (v10 + 2 != v3) {
            do {
              v12 = *v11;
              if (*v11 != 0) {
                v13 = v11[1];
                *v11 = 0;
                v11[1] = 0;
                v14 = v10[1];
                *v10 = v12;
                v10[1] = v13;
                if (v14 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
                  result =
                      (_QWORD*)std___1___shared_weak_count___release_weak(v14);
                }
                v10 += 2;
              }
              v11 += 2;
            } while (v11 != v3);
            v2 = (__int64*)v1[3];
            v3 = (__int64*)v1[4];
          }
        }
        if (v10 == v3) {
        LABEL_48:
          v10 = v3;
          if (v2 != v3) {
            goto LABEL_56;
          }
        LABEL_68:
          if (v2 != v10) {
            v21 = v2 + 2;
            if (v2 + 2 != v10) {
              while (2) {
                v22 = *v21;
                v23 = v21[1];
                if (v23 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8),
                                            1u, memory_order_relaxed);
                }
                if (*(_BYTE*)(v22 + 156) == 1 && *(float*)(v22 + 152) == 0.0f) {
                  v24 = 1;
                  if (v23 == 0) {
                  LABEL_81:
                    if ((v24 & 1) == 0) {
                      goto LABEL_82;
                    }
                    goto LABEL_72;
                  }
                }
                else {
                  v24 = 0;
                  if (v23 == 0) {
                    goto LABEL_81;
                  }
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) != 0) {
                  goto LABEL_81;
                }
                (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
                result =
                    (_QWORD*)std___1___shared_weak_count___release_weak(v23);
                if ((v24 & 1) == 0) {
                LABEL_82:
                  v25 = *v21;
                  v26 = v21[1];
                  *v21 = 0;
                  v21[1] = 0;
                  v27 = v2[1];
                  *v2 = v25;
                  v2[1] = v26;
                  if (v27 != 0 &&
                      atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
                    result =
                        (_QWORD*)std___1___shared_weak_count___release_weak(
                            v27);
                  }
                  v2 += 2;
                }
              LABEL_72:
                v21 += 2;
                if (v21 == v10) {
                  break;
                }
                continue;
              }
            }
          }
        LABEL_87:
          v28 = (__int64*)v1[4];
          if (v2 != v28) {
            do {
              v29 = *(v28 - 1);
              if (v29 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
                result =
                    (_QWORD*)std___1___shared_weak_count___release_weak(v29);
              }
              v28 -= 2;
            } while (v28 != v2);
            goto LABEL_93;
          }
          return result;
        }
        do {
          v17 = *(v3 - 1);
          if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
            result = (_QWORD*)std___1___shared_weak_count___release_weak(v17);
          }
          v3 -= 2;
        } while (v3 != v10);
        v2 = (__int64*)v1[3];
        v1[4] = v10;
        if (v2 == v10) {
          goto LABEL_68;
        }
      LABEL_56:
        while (2) {
          v18 = *v2;
          v19 = v2[1];
          if (v19 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                      memory_order_relaxed);
          }
          if (*(_BYTE*)(v18 + 156) == 1 && *(float*)(v18 + 152) == 0.0f) {
            v20 = 1;
            if (v19 == 0) {
              goto LABEL_65;
            }
          }
          else {
            v20 = 0;
            if (v19 == 0) {
              goto LABEL_65;
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
            result = (_QWORD*)std___1___shared_weak_count___release_weak(v19);
          }
        LABEL_65:
          if ((v20 & 1) != 0) {
            goto LABEL_68;
          }
          v2 += 2;
          if (v2 == v10) {
            v2 = v10;
            goto LABEL_87;
          }
          continue;
        }
      }
    }
  }
  v2 = (__int64*)result[3];
  for (i = (__int64*)result[4]; i != v2; i -= 2) {
    v16 = *(i - 1);
    if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      result = (_QWORD*)std___1___shared_weak_count___release_weak(v16);
    }
  }

LABEL_93:
  v1[4] = v2;
  return result;
}

__int64 HitboxModule_d4dfe0(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v4 = GameData_212ee20[0];
  v5 = *GameData_212ee20[0];
  nn_os_LockMutex(*GameData_212ee20[0] + 48);
  *(_QWORD*)(*(_QWORD*)a2 + 168LL) = a1;
  *(_BYTE*)(*(_QWORD*)a2 + 176LL) = 1;
  v6 = *v4;
  v7 = *(_QWORD*)(*v4 + 8);
  *(_QWORD*)(*(_QWORD*)a2 + 160LL) = v7;
  *(_QWORD*)(v6 + 8) = v7 + 1;
  GameRoutine_d4e4e0(a1 + 24, a2);
  v8 = *(_QWORD*)(*(_QWORD*)a2 + 160LL);
  nn_os_UnlockMutex(v5 + 48);
  return v8;
}

__int64 HitboxModule_d4e080(__int64 result, _QWORD* a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v5;
  __int64* v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = *(__int64**)result;
  v3 = *(__int64**)(result + 8);
  v5 = result;
  if (*(__int64**)result != v3) {
    while (*v2 != *a2) {
      v2 += 2;
      if (v2 == v3) {
        return result;
      }
    }
  }
  v6 = v2 + 2;
  if (v2 != v3 && v6 != v3) {
    do {
      v8 = *v6;
      if (*v6 != *a2) {
        v9 = v6[1];
        *v6 = 0;
        v6[1] = 0;
        v10 = v2[1];
        *v2 = v8;
        v2[1] = v9;
        if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          result = std___1___shared_weak_count___release_weak(v10);
        }
        v2 += 2;
      }
      v6 += 2;
    } while (v6 != v3);
    v3 = *(__int64**)(v5 + 8);
  }
  if (v2 != v3) {
    do {
      v11 = *(v3 - 1);
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        result = std___1___shared_weak_count___release_weak(v11);
      }
      v3 -= 2;
    } while (v3 != v2);
    *(_QWORD*)(v5 + 8) = v2;
  }
  return result;
}

__int64 HitboxModule_d4e240(__int64 a1, __int64 a2)
{
  __int64 v4;
  long double v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;

  v4 = *GameData_212ee20[0];
  *(__n128*)&v5 = nn_os_LockMutex(*GameData_212ee20[0] + 48);
  v6 = *(__int64**)(a1 + 24);
  v7 = *(__int64**)(a1 + 32);
  if (v6 == v7) {
  LABEL_9:
    v11 = v6 + 2;
    if (v6 == v7 || v11 == v7) {
      goto LABEL_27;
    }
    while (1) {
      v13 = *v11;
      v14 = v11[1];
      if (v14 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                  memory_order_relaxed);
        v15 = *(_QWORD*)(v13 + 160);
        if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v15 != a2) {
            goto LABEL_23;
          }
        }
        else {
          (*(void (**)(__int64, long double))(*(_QWORD*)v14 + 16LL))(v14, v5);
          std___1___shared_weak_count___release_weak(v14);
          if (v15 != a2) {
          LABEL_23:
            v16 = *v11;
            v17 = v11[1];
            *v11 = 0;
            v11[1] = 0;
            v18 = v6[1];
            *v6 = v16;
            v6[1] = v17;
            if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64, long double))(*(_QWORD*)v18 + 16LL))(v18,
                                                                         v5);
              std___1___shared_weak_count___release_weak(v18);
            }
            v6 += 2;
          }
        }
      }
      else if (*(_QWORD*)(v13 + 160) != a2) {
        goto LABEL_23;
      }
      v11 += 2;
      if (v11 == v7) {
        goto LABEL_27;
      }
    }
  }
  do {
    v8 = *v6;
    v9 = v6[1];
    if (v9 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
      v10 = *(_QWORD*)(v8 + 160);
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v9 + 16LL))(v9, v5);
        std___1___shared_weak_count___release_weak(v9);
      }
      if (v10 == a2) {
        goto LABEL_9;
      }
    }
    else if (*(_QWORD*)(v8 + 160) == a2) {
      goto LABEL_9;
    }
    v6 += 2;
  } while (v6 != v7);
  v6 = v7;
LABEL_27:
  v19 = *(__int64**)(a1 + 32);
  if (v6 != v19) {
    do {
      v20 = *(v19 - 1);
      if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v20 + 16LL))(v20, v5);
        std___1___shared_weak_count___release_weak(v20);
      }
      v19 -= 2;
    } while (v19 != v6);
    *(_QWORD*)(a1 + 32) = v6;
  }
  return nn_os_UnlockMutex(v4 + 48);
}

#pragma GCC visibility pop
