#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_21f3c98;
extern __int64 GameData_220b6d0;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_65c760(long double);
__int64 GlobalHashUtil_ff21e0(__int64 a1);
__n128 game_hub_GlobalHashUtil_FindFacilityList_lambda0_Invoke(__int64 a1,
                                                               _QWORD* a2,
                                                               __n128 result);
__attribute__((swiftcall)) void EventManager_cbbf20(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_1fffa18[])();
extern __int64* GameData_212d458[7];
extern __int64* GameData_212ebe0;
extern __int64 GameData_212dc68;
extern __int64 GameData_220d620;
extern __int64 GameData_220f950;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void
game_hub_GlobalHashUtil_FindFacilityList(PSEUDO_X8 x8_, __int64 a1, __int64 a2,
                                         __int64 a3, __n128 a5);
__attribute__((swiftcall)) void GlobalHashUtil_ff2a00(PSEUDO_X8 x8_,
                                                      __int64 a1);
__attribute__((swiftcall)) void
EventManager_cbbf20_alt1(PSEUDO_X8, __int64 result, __int64,
                         unsigned __int64) __asm__("EventManager_cbbf20");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
__attribute__((swiftcall)) void

game_hub_GlobalHashUtil_FindFacilityList(PSEUDO_X8 x8_, __int64 a1, __int64 a2,
                                         __int64 a3, __n128 a5)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  bool v28;
  _QWORD* result;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 j;
  _QWORD* v37;
  _QWORD* v38;
  __int64 v39;
  _QWORD* v40;
  __int64 i;
  _QWORD v42[4];
  _QWORD* v43;

  v5 = a4;
  a4[1] = 0;
  a4[2] = 0;
  *a4 = 0;
  v6 = *(_QWORD*)(*GameData_212ebe0 + 8);
  v7 = *(_QWORD**)(v6 + 24);
  v40 = (_QWORD*)(v6 + 32);
  if (v7 != (_QWORD*)(v6 + 32)) {
    do {
      v9 = v7[7];
      v8 = v7[8];
      for (i = v8; v9 != v8; v9 += 48) {
        v12 = *(_QWORD*)(*(_QWORD*)v9 + 552LL);
        v13 = *(_QWORD*)(*(_QWORD*)v9 + 560LL);
        if (v13 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v12 != 0 && *(_BYTE*)(v12 + 224) == 1) {
          v14 = *(_QWORD*)(*(_QWORD*)v9 + 56LL);
          v16 = (_QWORD*)v5[1];
          v15 = v5[2];
          if ((unsigned __int64)v16 >= v15) {
            v18 = *v5;
            v19 = v5;
            v20 = (__int64)v16 - *v5;
            v21 = (v20 >> 3) + 1;
            if (v21 >> 61 != 0) {
              GameRoutine_65c760(*(long double*)&a5);
            }
            v22 = v15 - v18;
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
                GameRoutine_60a210(a1);
              }
              v24 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v23, 16, 0);
            }
            else {
              v24 = 0;
            }
            v25 = v24 + 8 * v23;
            v26 = v24 + v20 - 8 * (v20 >> 3);
            *(_QWORD*)(v24 + v20) = v14;
            v17 = v24 + v20 + 8;
            a1 = memcpy(v26, v18, v20);
            v5 = v19;
            *v19 = v26;
            v19[2] = v25;
            if (v18 != 0) {
              v27 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v27 = 56;
              }
              a5 = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
            }
            v8 = i;
          }
          else {
            *v16 = v14;
            v17 = (__int64)(v16 + 1);
          }
          v5[1] = v17;
        }
        if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          a5 = std___1___shared_weak_count___release_weak(v13);
        }
      }
      v10 = (_QWORD*)v7[1];
      if (v10 != nullptr) {
        do {
          v11 = v10;
          v10 = (_QWORD*)*v10;
        } while (v10 != nullptr);
      }
      else {
        do {
          v11 = (_QWORD*)v7[2];
          v28 = v7 == (_QWORD*)*v11;
          v7 = v11;
        } while (!v28);
      }
      v7 = v11;
    } while (v11 != v40);
  }
  result = v42;
  v42[0] = GameData_1fffa18;
  v42[1] = v5;
  v43 = v42;
  v30 = *(_QWORD**)(*(_QWORD*)GameData_212dc68 + 152LL);
  v31 = *(_QWORD*)GameData_212dc68 + 160LL;
  if (v30 == (_QWORD*)v31) {
  LABEL_55:
    v39 = 32;
    {
      (_QWORD*)(*(__int64 (**)(__int64))(*result + v39))((__int64)result);
      return;
    }
  }
  do {
    v32 = v30[7];
    v33 = v30[8];
    if (v32 != v33) {
      while (1) {
        v34 = v43;
        if (v43 == nullptr) {
          break;
        }
        (*(void (**)(_QWORD*, __int64))(*v43 + 48LL))(v43, v32);
        v32 += 16;
        if (v32 == v33) {
          goto LABEL_43;
        }
      }
    LABEL_58:
      GameRoutine_60a310(v34, a2, a3);
    }
  LABEL_43:
    v35 = v30[10];
    for (j = v30[11]; v35 != j; v35 += 16) {
      v34 = v43;
      if (v43 == nullptr) {
        goto LABEL_58;
      }
      (*(void (**)(_QWORD*, __int64))(*v43 + 48LL))(v43, v35);
    }
    v37 = (_QWORD*)v30[1];
    if (v37 != nullptr) {
      do {
        v38 = v37;
        v37 = (_QWORD*)*v37;
      } while (v37 != nullptr);
    }
    else {
      do {
        v38 = (_QWORD*)v30[2];
        v28 = v30 == (_QWORD*)*v38;
        v30 = v38;
      } while (!v28);
    }
    v30 = v38;
  } while (v38 != (_QWORD*)v31);
  result = v43;
  if (v43 == v42) {
    goto LABEL_55;
  }
  if (v43 != nullptr) {
    v39 = 40;
    {
      (_QWORD*)(*(__int64 (**)(__int64))(*result + v39))((__int64)result);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 GlobalHashUtil_ff21e0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  char v14;
  _QWORD* v15;
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v2 = *(_QWORD*)(GameData_220b6d0 + 8);
  v3 = *(_QWORD**)(v2 + 24);
  v4 = (_QWORD*)(v2 + 32);
  if (v3 == v4) {
    goto LABEL_20;
  }
  while (1) {
    v5 = (__int64*)v3[7];
    v6 = (__int64*)v3[8];
    if (v5 != v6) {
      break;
    }
  LABEL_5:
    v9 = (_QWORD*)v3[1];
    if (v9 != nullptr) {
      do {
        v10 = v9;
        v9 = (_QWORD*)*v9;
      } while (v9 != nullptr);
    }
    else {
      do {
        v10 = (_QWORD*)v3[2];
        v11 = v3 == (_QWORD*)*v10;
        v3 = v10;
      } while (!v11);
    }
    v3 = v10;
    if (v10 == v4) {
      goto LABEL_20;
    }
  }
  while (1) {
    v8 = *v5;
    v5 += 6;
    v7 = v8;
    if (*(_QWORD*)(v8 + 56) == a1) {
      break;
    }
    if (v5 == v6) {
      goto LABEL_5;
    }
  }
  v12 = *(_QWORD*)(v7 + 552);
  v13 = *(_QWORD*)(v7 + 560);
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v12 != 0) {
    v1 = v12 + 144;
    v14 = *(_BYTE*)(v12 + 224) ^ 1;
    if (v13 == 0) {
      goto LABEL_19;
    }
  }
  else {
    v14 = 1;
    if (v13 == 0) {
      goto LABEL_19;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v26 = a1;
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
    a1 = v26;
    if ((v14 & 1) == 0) {
      return v1;
    }
    goto LABEL_20;
  }
LABEL_19:
  if ((v14 & 1) == 0) {
    return v1;
  }
LABEL_20:
  v15 = *(_QWORD**)(GameData_21f3c98 + 152);
  if (v15 == (_QWORD*)(GameData_21f3c98 + 160)) {
    return 0;
  }
  while (1) {
    v17 = (_QWORD*)v15[7];
    v18 = (_QWORD*)v15[8];
    if (v17 != v18) {
      while (*(_QWORD*)(*v17 + 176LL) != a1) {
        v17 += 2;
        if (v17 == v18) {
          goto LABEL_29;
        }
      }
    }
    if (v17 != v18) {
      break;
    }
  LABEL_29:
    v17 = (_QWORD*)v15[10];
    v19 = (_QWORD*)v15[11];
    if (v17 != v19) {
      while (*(_QWORD*)(*v17 + 176LL) != a1) {
        v17 += 2;
        if (v17 == v19) {
          goto LABEL_34;
        }
      }
    }
    if (v17 != v19) {
      break;
    }
  LABEL_34:
    v20 = (_QWORD*)v15[1];
    if (v20 != nullptr) {
      do {
        v21 = v20;
        v20 = (_QWORD*)*v20;
      } while (v20 != nullptr);
    }
    else {
      do {
        v21 = (_QWORD*)v15[2];
        v11 = v15 == (_QWORD*)*v21;
        v15 = v21;
      } while (!v11);
    }
    v15 = v21;
    if (v21 == (_QWORD*)(GameData_21f3c98 + 160)) {
      return 0;
    }
  }
  v22 = *v17;
  v23 = v17[1];
  if (v23 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v22 == 0) {
    v1 = 0;
    goto LABEL_57;
  }
  v24 = *(_QWORD*)(v22 + 840);
  v25 = *(_QWORD*)(v22 + 848);
  if (v25 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v24 == 0) {
    v1 = 0;
    if (v25 == 0) {
      goto LABEL_57;
    }
  LABEL_55:
    if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
      std___1___shared_weak_count___release_weak(v25);
    }
    goto LABEL_57;
  }
  if (*(_BYTE*)(v24 + 80) != 0) {
    v1 = v24;
  }
  else {
    v1 = 0;
  }
  if (v25 != 0) {
    goto LABEL_55;
  }
LABEL_57:
  if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak(v23);
  }
  return v1;
}

__attribute__((swiftcall)) void GlobalHashUtil_ff2a00(PSEUDO_X8 x8_,
                                                      __int64 result)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _QWORD* i;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  _QWORD* v24;
  _QWORD* v25;
  _QWORD* v26;
  _QWORD* v27;
  _QWORD* v28;
  _QWORD* v29;
  _QWORD* v30;
  _QWORD* v31;
  _QWORD* v32;
  _QWORD* v33;
  _QWORD* v34;
  _QWORD* v35;
  __int64* v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  bool v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  _QWORD* v52;
  _QWORD* v53;
  _QWORD* v54;
  _QWORD* v55;
  _QWORD* v56;
  _QWORD* v57;
  _QWORD* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  struct {
    _QWORD* v67;
    __int64 v68;
  } v67_;

  for (i = *(_QWORD**)(GameData_220d620 + 8);; i += 2) {
    if (i == *(_QWORD**)(GameData_220d620 + 16)) {
      v21 = *(_QWORD*)(GameData_220b6d0 + 8);
      v22 = *(_QWORD**)(v21 + 24);
      v23 = (_QWORD*)(v21 + 32);
      if (v22 == v23) {
      LABEL_39:
        v30 = *(_QWORD**)(GameData_21f3c98 + 152);
        if (v30 != (_QWORD*)(GameData_21f3c98 + 160)) {
          while (1) {
            v31 = (_QWORD*)v30[7];
            v32 = (_QWORD*)v30[8];
            if (v31 != v32) {
              while (*(_QWORD*)(*v31 + 176LL) != result) {
                v31 += 2;
                if (v31 == v32) {
                  goto LABEL_47;
                }
              }
            }
            if (v31 != v32) {
              break;
            }
          LABEL_47:
            v31 = (_QWORD*)v30[10];
            v33 = (_QWORD*)v30[11];
            if (v31 != v33) {
              while (*(_QWORD*)(*v31 + 176LL) != result) {
                v31 += 2;
                if (v31 == v33) {
                  goto LABEL_52;
                }
              }
            }
            if (v31 != v33) {
              break;
            }
          LABEL_52:
            v34 = (_QWORD*)v30[1];
            if (v34 != nullptr) {
              do {
                v35 = v34;
                v34 = (_QWORD*)*v34;
              } while (v34 != nullptr);
            }
            else {
              do {
                v35 = (_QWORD*)v30[2];
                v44 = v30 == (_QWORD*)*v35;
                v30 = v35;
              } while (!v44);
            }
            v30 = v35;
            if (v35 == (_QWORD*)(GameData_21f3c98 + 160)) {
              goto LABEL_80;
            }
          }
          v40 = (_QWORD*)*v31;
          v39 = v31[1];
          if (v39 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v39 + 8), 1u,
                                      memory_order_relaxed);
          }
          if (v40 != nullptr) {
            if ((v40[107] & 1) != 0) {
              v50 = result;
              fw_text_String_CopyTerminated_alt1(a2, v40[109], v40[108]);
              result = v50;
            }
            else {
              v41 = v40[107];
              v42 = v40[109];
              a2[1] = v40[108];
              a2[2] = v42;
              *a2 = v41;
            }
          }
          if (v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            v51 = result;
            (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
            std___1___shared_weak_count___release_weak_alt1(v39);
            result = v51;
          }
          if (v40 != nullptr) {
            result;
            return;
          }
        }
      LABEL_80:
        v52 = *(_QWORD**)(GameData_220f950 + 40);
        v53 = *(_QWORD**)(GameData_220f950 + 48);
        if (v52 == v53) {
        LABEL_83:
          v57 = *(_QWORD**)(GameData_220f950 + 64);
          v56 = *(_QWORD**)(GameData_220f950 + 72);
          if (v57 == v56) {
          LABEL_86:
            *(_WORD*)a2 = 0;
            {
              result;
              return;
            }
          }
          while (1) {
            v58 = (_QWORD*)*v57;
            v57 += 2;
            v54 = v58;
            if (v58[9] == result) {
              break;
            }
            if (v57 == v56) {
              goto LABEL_86;
            }
          }
        }
        else {
          while (1) {
            v55 = (_QWORD*)*v52;
            v52 += 2;
            v54 = v55;
            if (v55[9] == result) {
              break;
            }
            if (v52 == v53) {
              goto LABEL_83;
            }
          }
        }
        if ((v54[82] & 1) == 0) {
          v36 = v54 + 82;
          goto LABEL_89;
        }
        v37 = v54[84];
        v38 = v54[83];
      }
      else {
        while (1) {
          v24 = (_QWORD*)v22[7];
          v25 = (_QWORD*)v22[8];
          if (v24 != v25) {
            break;
          }
        LABEL_33:
          v28 = (_QWORD*)v22[1];
          if (v28 != nullptr) {
            do {
              v29 = v28;
              v28 = (_QWORD*)*v28;
            } while (v28 != nullptr);
          }
          else {
            do {
              v29 = (_QWORD*)v22[2];
              v44 = v22 == (_QWORD*)*v29;
              v22 = v29;
            } while (!v44);
          }
          v22 = v29;
          if (v29 == v23) {
            goto LABEL_39;
          }
        }
        while (1) {
          v27 = (_QWORD*)*v24;
          v24 += 6;
          v26 = v27;
          if (v27[7] == result) {
            break;
          }
          if (v24 == v25) {
            goto LABEL_33;
          }
        }
        if ((v26[103] & 1) == 0) {
          v36 = v26 + 103;
        LABEL_89:
          v59 = *v36;
          v60 = v36[1];
          v61 = v36[2];
          a2[1] = v60;
          a2[2] = v61;
          *a2 = v59;
          {
            result;
            return;
          }
        }
        v37 = v26[105];
        v38 = v26[104];
      }
      {
        fw_text_String_CopyTerminated_alt1(a2, v37, v38);
        return;
      }
    }
    v4 = *i;
    if ((*(_BYTE*)(*i + 16LL) & 1) == 0 && *(_QWORD*)(v4 + 80) == result) {
      break;
    }
  }
  v5 = i[1];
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
  }
  v6 = *(unsigned __int8*)(v4 + 704);
  if ((v6 & 1) != 0) {
    v7 = *(_QWORD*)(v4 + 712);
  }
  else {
    v7 = v6 >> 1;
  }
  if (v7 == 0) {
    goto LABEL_96;
  }
  v8 = *GameData_212d458[0];
  if ((v6 & 1) != 0) {
    v9 = *(_QWORD*)(v4 + 720);
  }
  else {
    v9 = v4 + 705;
  }
  v10 = *(_QWORD**)(v8 + 24);
  v11 = *(_QWORD**)(v8 + 32);
  while (1) {
    if (v10 == v11) {
      goto LABEL_66;
    }
    v12 = (_QWORD*)*v10;
    v13 = *(unsigned __int8*)(*v10 + 320LL);
    v14 = *(_QWORD*)(*v10 + 328LL);
    if ((v13 & 1) == 0) {
      v14 = v13 >> 1;
    }
    if (v7 == v14) {
      v15 = (v13 & 1) != 0 ? v12[42] : (__int64)v12 + 321;
      if (memcmp_alt1(v9, v15, v7) == 0) {
        break;
      }
    }
    v10 += 2;
  }
  v16 = v10[1];
  if (v16 != 0) {
    v17 = v10[1];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                              memory_order_relaxed);
    v18 = std___1___shared_weak_count_lock_alt1(v17);
    result = std___1___shared_weak_count___release_weak_alt1(v16);
    if (v18 != 0) {
      if ((v12[129] & 1) != 0) {
        result = fw_text_String_CopyTerminated_alt1(a2, v12[131], v12[130]);
      }
      else {
        v19 = v12[129];
        v20 = v12[131];
        a2[1] = v12[130];
        a2[2] = v20;
        *a2 = v19;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_106;
      }
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      v66 = v18;
    LABEL_103:
      result = std___1___shared_weak_count___release_weak_alt1(v66);
      goto LABEL_106;
    }
  }
LABEL_66:
  v43 = *(unsigned __int8*)(v4 + 704);
  v44 = (v43 & 1) == 0;
  v45 = v43 >> 1;
  if (v44) {
    v46 = v4 + 705;
  }
  else {
    v46 = *(_QWORD*)(v4 + 720);
  }
  if (v44) {
    v47 = v45;
  }
  else {
    v47 = *(_QWORD*)(v4 + 712);
  }
  result =
      X8CALL_X0(__int64, EventManager_cbbf20_alt1((void*)(&v67_.v67),
                                                  GameData_21f3c98, v46, v47));
  if (v67_.v67 == nullptr) {
    v62 = v67_.v68;
    if (v67_.v68 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v67_.v68 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
      result = std___1___shared_weak_count___release_weak_alt1(v62);
    }
  LABEL_96:
    if ((*(_BYTE*)(v4 + 376) & 1) != 0) {
      result = fw_text_String_CopyTerminated_alt1(a2, *(_QWORD*)(v4 + 392),
                                                  *(_QWORD*)(v4 + 384));
    }
    else {
      v63 = *(_QWORD*)(v4 + 376);
      v64 = *(_QWORD*)(v4 + 392);
      a2[1] = *(_QWORD*)(v4 + 384);
      a2[2] = v64;
      *a2 = v63;
    }
    goto LABEL_106;
  }
  if ((v67_.v67[107] & 1) != 0) {
    result =
        fw_text_String_CopyTerminated_alt1(a2, v67_.v67[109], v67_.v67[108]);
  }
  else {
    v48 = v67_.v67[107];
    v49 = v67_.v67[109];
    a2[1] = v67_.v67[108];
    a2[2] = v49;
    *a2 = v48;
  }
  v65 = v67_.v68;
  if (v67_.v68 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v67_.v68 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65);
    v66 = v65;
    goto LABEL_103;
  }
LABEL_106:
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    {
      std___1___shared_weak_count___release_weak_alt1(v5);
      return;
    }
  }
  {
    result;
    return;
  }
}

__n128 game_hub_GlobalHashUtil_FindFacilityList_lambda0_Invoke(__int64 a1,
                                                               _QWORD* a2,
                                                               __n128 result)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;

  v3 = (_QWORD*)*a2;
  v4 = a2[1];
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  v5 = v3[105];
  v6 = v3[106];
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v5 != 0 && *(_BYTE*)(v5 + 80) == 1) {
    v7 = *(__int64**)(a1 + 8);
    v8 = v3[22];
    v10 = (_QWORD*)v7[1];
    v9 = v7[2];
    if ((unsigned __int64)v10 >= v9) {
      v12 = *v7;
      v13 = (__int64)v10 - *v7;
      v14 = (v13 >> 3) + 1;
      if (v14 >> 61 != 0) {
        GameRoutine_65c760(*(long double*)&result);
      }
      v15 = v9 - v12;
      v16 = fw_memory_g_heap_manager_ptr;
      if (v15 >> 2 > v14) {
        v14 = v15 >> 2;
      }
      if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL) {
        v17 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v17 = v14;
      }
      if (v17 != 0) {
        if (v17 >> 61 != 0) {
          GameRoutine_60a210(a1);
        }
        v18 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v17, 16, 0);
      }
      else {
        v18 = 0;
      }
      v19 = v18 + 8 * v17;
      v20 = v18 + v13 - 8 * (v13 >> 3);
      *(_QWORD*)(v18 + v13) = v8;
      v11 = v18 + v13 + 8;
      memcpy(v20, v12, v13);
      *v7 = v20;
      v7[1] = v11;
      v7[2] = v19;
      if (v12 != 0) {
        v21 = 128;
        if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
          v21 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v21);
      }
    }
    else {
      *v10 = v8;
      v11 = (__int64)(v10 + 1);
    }
    v7[1] = v11;
  }
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = std___1___shared_weak_count___release_weak(v6);
    if (v4 == 0) {
      return result;
    }
  }
  else if (v4 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

#pragma GCC visibility pop
