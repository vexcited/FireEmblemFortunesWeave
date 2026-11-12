#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_a5cb20(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD);
__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a5aca0(_QWORD);
__int64 MapObjectModule_a7d120(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_21fdd90;
extern _UNKNOWN GameData_21fde98;
extern _UNKNOWN* GameData_1f50948;
extern __int64 (*GameData_212e358[2])();
extern __int64 (*wld_MapObjectModule_vtable[])();
extern __int64 GameData_21fdde0;
extern __int64 GameData_21fdde8;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_a5dcd0(_QWORD);
__int64 MapObjectModule_Destructor(__int64 result);
__int64 MapObjectModule_a7d220(__int64 result);
_QWORD*
MapObjectModule_a7dcc0_alt1(__int64 a1) __asm__("MapObjectModule_a7dcc0");
__int64
MapObjectModule_a7d120_alt1(__int64 result) __asm__("MapObjectModule_a7d120");
__int64 MapObjectModule_Unknown5(__int64 result);
__attribute__((swiftcall)) void
    GameRoutine_a5cb20_alt1(PSEUDO_X8, _QWORD, _QWORD,
                            _QWORD) __asm__("GameRoutine_a5cb20");
__int64 GameRoutine_66f720(__int64 result, int, char);
__int64 Registration_a5aca0(_QWORD);
__attribute__((swiftcall)) void MapObjectModule_a7d410(PSEUDO_X8 x8_,
                                                       __int64 result);
__int64 MapObjectModule_a7d640(__int64 a1, __int64 a2, __int64 a3, char a4);
__attribute__((swiftcall)) void
GameRoutine_a5cb20_alt2(PSEUDO_X8, __int64, __int64,
                        unsigned __int64) __asm__("GameRoutine_a5cb20");
__int64 GameRoutine_2b0_alt1() __asm__("GameRoutine_2b0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameHr_a5aca0(__int64);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_a5dcd0_alt1() __asm__("GameRoutine_a5dcd0");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64* MapObjectModule_a7dcc0(__int64 a1);
extern _QWORD GameData_21fdd90_alt1[] __asm__("GameData_21fdd90");
void GameRoutine_a5cc60(_QWORD*, unsigned __int8**);
void MapObjectModule_a7d780(__int64 a1);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* Manager_66cc20(__int64*, _QWORD*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
extern __int64 fw_memory_g_heap_manager;
void MapObjectModule_a7d8a0(__int64 a1, _QWORD* a2);

__int64 MapObjectModule_Destructor(__int64 result)
{
  __int64 v1;
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
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char v23;
  __int64 v24;
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

  v1 = result;
  *(_QWORD*)result = wld_MapObjectModule_vtable;
  if (*(_BYTE*)(result + 152) == 1) {
    *(_BYTE*)(result + 152) = 0;
    result = MapObjectModule_a7d120(result);
  }
  if (*(_BYTE*)(v1 + 153) == 1) {
    *(_BYTE*)(v1 + 153) = 0;
    result = MapObjectModule_a7d220(v1);
  }
  if ((*(_BYTE*)(v1 + 248) & 1) != 0) {
    v2 = *(_QWORD*)(v1 + 264);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
    }
  }
  v4 = *(_QWORD*)(v1 + 216);
  if (v4 != 0) {
    v5 = *(_QWORD*)(v1 + 224);
    if (v4 == v5) {
      goto LABEL_18;
    }
    do {
      v6 = *(_QWORD*)(v5 - 8);
      if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        result = std___1___shared_weak_count___release_weak(v6);
      }
      v5 -= 16;
    } while (v5 != v4);
    v7 = *(_QWORD*)(v1 + 216);
    *(_QWORD*)(v1 + 224) = v4;
    v4 = v7;
    if (v7 != 0) {
    LABEL_18:
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v4);
    }
  }
  v9 = *(_QWORD*)(v1 + 192);
  if (v9 != 0) {
    v10 = *(_QWORD*)(v1 + 200);
    if (v9 == v10) {
      goto LABEL_32;
    }
    v11 = *(_QWORD*)(v1 + 200);
    v12 = fw_memory_g_heap_manager_ptr;
    do {
      v13 = *(_BYTE*)(v11 - 24);
      v11 -= 24;
      if ((v13 & 1) != 0) {
        v14 = *(_QWORD*)(v10 - 8);
        if (v14 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
            v15 = 128;
          }
          else {
            v15 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v15, v14);
        }
      }
      v10 = v11;
    } while (v11 != v9);
    v16 = *(_QWORD*)(v1 + 192);
    *(_QWORD*)(v1 + 200) = v9;
    v9 = v16;
    if (v16 != 0) {
    LABEL_32:
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v9);
    }
  }
  v18 = *(_QWORD*)(v1 + 184);
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    result = std___1___shared_weak_count___release_weak(v18);
  }
  v19 = *(_QWORD*)(v1 + 128);
  if (v19 != 0) {
    v20 = *(_QWORD*)(v1 + 136);
    if (v19 == v20) {
      goto LABEL_49;
    }
    v21 = *(_QWORD*)(v1 + 136);
    v22 = fw_memory_g_heap_manager_ptr;
    do {
      v23 = *(_BYTE*)(v21 - 24);
      v21 -= 24;
      if ((v23 & 1) != 0) {
        v24 = *(_QWORD*)(v20 - 8);
        if (v24 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) != 0) {
            v25 = 128;
          }
          else {
            v25 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v22 + v25, v24);
        }
      }
      v20 = v21;
    } while (v21 != v19);
    v26 = *(_QWORD*)(v1 + 128);
    *(_QWORD*)(v1 + 136) = v19;
    v19 = v26;
    if (v26 != 0) {
    LABEL_49:
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v19);
    }
  }
  if ((*(_BYTE*)(v1 + 96) & 1) != 0) {
    v28 = *(_QWORD*)(v1 + 112);
    if (v28 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v29 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v28);
    }
  }
  if ((*(_BYTE*)(v1 + 72) & 1) != 0) {
    v30 = *(_QWORD*)(v1 + 88);
    if (v30 != 0) {
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v31 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v30);
    }
  }
  if ((*(_BYTE*)(v1 + 48) & 1) != 0) {
    v32 = *(_QWORD*)(v1 + 64);
    if (v32 != 0) {
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v33 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v32);
    }
  }
  if ((*(_BYTE*)(v1 + 24) & 1) != 0) {
    v34 = *(_QWORD*)(v1 + 40);
    if (v34 != 0) {
      v35 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v35 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, v34);
    }
  }
  return result;
}

__int64 MapObjectModule_a7d220(__int64 result)
{
  __int64 v1;
  int v2;
  unsigned __int8** v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int8* v6;
  unsigned __int8* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int8* v11;
  unsigned __int8* v12;
  unsigned __int8* v13;
  unsigned __int8** v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int8* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int8* v22;

  if ((*(_BYTE*)(result + 168) & 1) == 0) {
    v1 = result;
    v2 =
        *(_BYTE*)(result + 153) & (unsigned __int8)~*(_BYTE*)(result + 157) & 1;
    if (*(unsigned __int8*)(result + 158) != v2) {
      v3 = *(unsigned __int8***)(result + 272);
      if (v3 != nullptr) {
        v4 = *(unsigned __int8*)(result + 72);
        if ((v4 & 1) != 0) {
          v5 = *(_QWORD*)(result + 80);
        }
        else {
          v5 = v4 >> 1;
        }
        if (v5 != 0) {
          v6 = *v3;
          v7 = v3[1];
          if (*v3 != v7) {
            if ((v4 & 1) != 0) {
              v8 = *(_QWORD*)(result + 88);
            }
            else {
              v8 = result + 73;
            }
            while (1) {
              v9 = *v6;
              v10 = *((_QWORD*)v6 + 1);
              if ((v9 & 1) == 0) {
                v10 = v9 >> 1;
              }
              if (v10 == v5) {
                v11 = (v9 & 1) != 0 ? *((unsigned __int8**)v6 + 2) : v6 + 1;
                result = memcmp(v11, v8, v5);
                if ((_DWORD)result == 0) {
                  break;
                }
              }
              v6 += 96;
              if (v6 == v7) {
                goto LABEL_22;
              }
            }
          }
          if (v6 != v7) {
            v6[24] = v2;
          }
        }
      LABEL_22:
        v12 = *(unsigned __int8**)(v1 + 192);
        v13 = *(unsigned __int8**)(v1 + 200);
        while (v12 != v13) {
          v14 = *(unsigned __int8***)(v1 + 272);
          v15 = *v14;
          v16 = v14[1];
          if (*v14 != v16) {
            v17 = *v12;
            if ((v17 & 1) != 0) {
              v18 = *((_QWORD*)v12 + 1);
            }
            else {
              v18 = v17 >> 1;
            }
            if ((v17 & 1) != 0) {
              v19 = *((unsigned __int8**)v12 + 2);
            }
            else {
              v19 = v12 + 1;
            }
            while (1) {
              v20 = *v15;
              v21 = *((_QWORD*)v15 + 1);
              if ((v20 & 1) == 0) {
                v21 = v20 >> 1;
              }
              if (v21 == v18) {
                v22 = (v20 & 1) != 0 ? *((unsigned __int8**)v15 + 2) : v15 + 1;
                result = memcmp(v22, v19, v18);
                if ((_DWORD)result == 0) {
                  break;
                }
              }
              v15 += 96;
              if (v15 == v16) {
                goto LABEL_23;
              }
            }
          }
          if (v15 != v16) {
            v15[24] = v2;
          }
        LABEL_23:
          v12 += 24;
        }
        *(_BYTE*)(v1 + 158) = v2;
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void MapObjectModule_a7d410(PSEUDO_X8 x8_,
                                                       __int64 result)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v2;
  __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64 v6;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  struct {
    __int64 v20;
    __int64 v21;
  } v20_;

  if (*(_QWORD*)(result + 176) == 0 && (*(_BYTE*)(result + 168) & 1) == 0) {
    v2 = *(unsigned __int8*)(result + 72);
    v3 = (v2 & 1) != 0 ? *(_QWORD*)(result + 80) : v2 >> 1;
    if (v3 != 0) {
      v4 = a2;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                                memory_order_acquire) &
           1) == 0) {
        v16 = result;
        v17 = __cxa_guard_acquire_alt1((__int64)&GameData_21fde98);
        result = v16;
        if (v17 != 0) {
          GameHr_a5aca0((__int64)&GameData_21fdd90);
          GameRoutine_2b0_alt1();
          __cxa_guard_release_alt1((__int64)&GameData_21fde98);
          result = v16;
        }
      }
      v5 = *(unsigned __int8*)(result + 72);
      v6 = result;
      v7 = (v5 & 1) == 0;
      v8 = v5 >> 1;
      if (v7) {
        v9 = result + 73;
      }
      else {
        v9 = *(_QWORD*)(result + 88);
      }
      if (v7) {
        v10 = v8;
      }
      else {
        v10 = *(_QWORD*)(result + 80);
      }
      GameRoutine_a5cb20_alt2((void*)(&v20_.v20), (__int64)&GameData_21fdd90,
                              v9, v10);
      v11 = v20_.v20;
      v12 = v20_.v21;
      v13 = *(_QWORD*)(v6 + 184);
      result = v6;
      v20_.v20 = 0;
      v20_.v21 = 0;
      *(_QWORD*)(v6 + 176) = v11;
      *(_QWORD*)(v6 + 184) = v12;
      if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak_alt1(v13);
        result = v6;
      }
      v14 = v20_.v21;
      a2 = v4;
      if (v20_.v21 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v20_.v21 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak_alt1(v14);
        result = v6;
        a2 = v4;
      }
      if (*(_QWORD*)(result + 176) == 0) {
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                                  memory_order_acquire) &
             1) == 0) {
          v18 = __cxa_guard_acquire_alt1((__int64)&GameData_21fde98);
          a2 = v4;
          v19 = v18;
          result = v6;
          if (v19 != 0) {
            GameHr_a5aca0((__int64)&GameData_21fdd90);
            GameRoutine_2b0_alt1();
            __cxa_guard_release_alt1((__int64)&GameData_21fde98);
            result = v6;
            a2 = v4;
          }
        }
        if (GameData_21fdde0 == GameData_21fdde8) {
          *(_BYTE*)(result + 168) = 1;
        }
      }
    }
  }
  v15 = *(_QWORD*)(result + 184);
  *a2 = *(_QWORD*)(result + 176);
  a2[1] = v15;
  if (v15 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                              memory_order_relaxed);
  }
  {
    result;
    return;
  }
}

__int64 MapObjectModule_a7d640(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result;
  __int64 v8;
  unsigned __int8* v9;
  unsigned __int8* v10;
  unsigned __int8* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int8* v14;
  int v15;
  __int64 v16;
  struct {
    __int64 v17;
    __int64 v18;
  } v17_;

  result = X8CALL_X0(__int64, MapObjectModule_a7d410((void*)(&v17_.v17), a1));
  v8 = v17_.v17;
  if (v17_.v17 != 0) {
    v9 = *(unsigned __int8**)(v17_.v17 + 96);
    v10 = *(unsigned __int8**)(v17_.v17 + 104);
    v11 = v9;
    if (v9 != v10) {
      while (1) {
        v12 = *v11;
        v13 = *((_QWORD*)v11 + 1);
        if ((v12 & 1) == 0) {
          v13 = v12 >> 1;
        }
        if (a3 == v13) {
          v14 = (v12 & 1) != 0 ? *((unsigned __int8**)v11 + 2) : v11 + 1;
          result = memcmp(a2, v14, a3);
          if ((_DWORD)result == 0) {
            break;
          }
        }
        v11 += 40;
        if (v11 == v10) {
          goto LABEL_15;
        }
      }
    }
    if (v11 != v10) {
      v15 = -858993459 * ((unsigned __int64)(v11 - v9) >> 3);
      if ((v15 & 0x80000000) == 0) {
        result = GameRoutine_66f720(v8, v15, a4 & 1);
      }
    }
  }
LABEL_15:
  v16 = v17_.v18;
  if (v17_.v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17_.v18 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    return std___1___shared_weak_count___release_weak(v16);
  }
  return result;
}

void MapObjectModule_a7d780(__int64 a1)
{
  unsigned __int8* v1;
  __int64 v2;
  __int64 v3;
  struct {
    unsigned __int8* v4;
    __int64 v5;
  } v4_;
  struct {
    unsigned __int8* v6;
    __int64 v7;
  } v6_;

  MapObjectModule_a7d410((void*)(&v6_.v6), a1);
  v1 = v6_.v6;
  if (v6_.v6 != nullptr) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_21fde98) != 0) {
      GameHr_a5aca0((__int64)GameData_21fdd90_alt1);
      GameRoutine_2b0_alt1();
      __cxa_guard_release_alt1((__int64)&GameData_21fde98);
    }
    v4_.v4 = v1;
    v4_.v5 = v6_.v7;
    if (v6_.v7 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6_.v7 + 8), 1u,
                                memory_order_relaxed);
    }
    GameRoutine_a5cc60(GameData_21fdd90_alt1, &v4_.v4);
    v2 = v4_.v5;
    if (v4_.v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4_.v5 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak_alt1(v2);
    }
  }
  v3 = v6_.v7;
  if (v6_.v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6_.v7 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
}

void MapObjectModule_a7d8a0(__int64 a1, _QWORD* a2)
{
  _QWORD* v2;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  int v8;
  unsigned __int64 v9;
  _BYTE* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  char* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  bool v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  struct {
    __int64 v27;
    unsigned __int64 v28;
    char* v29;
  } v27_;

  v2 = *(_QWORD**)(a1 + 200);
  if ((unsigned __int64)v2 >= *(_QWORD*)(a1 + 208)) {
    v7 = Manager_66cc20((__int64*)(a1 + 192), a2);
  }
  else if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(*(__int64**)(a1 + 200), a2[2], a2[1]);
    v7 = v2 + 3;
  }
  else {
    v5 = *a2;
    v6 = a2[2];
    v7 = v2 + 3;
    v2[1] = a2[1];
    v2[2] = v6;
    *v2 = v5;
  }
  v8 = *(unsigned __int8*)(a1 + 18);
  *(_QWORD*)(a1 + 200) = v7;
  *(_BYTE*)(a1 + 18) = v8 & 0xFB;
  if (v8 != (v8 & 0xFFFFFFFB)) {
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + 664LL) = 0;
  }
  v10 = (_BYTE*)(a1 + 248);
  v9 = *(unsigned __int8*)(a1 + 248);
  v11 = *(_QWORD*)(a1 + 256);
  if ((v9 & 1) == 0) {
    v11 = v9 >> 1;
  }
  if (v11 != 0) {
    v12 = 0;
    if ((v9 & 1) != 0) {
      v13 = *(_QWORD*)(a1 + 264);
    }
    else {
      v13 = a1 + 249;
    }
    if ((*(_BYTE*)a2 & 1) != 0) {
      v14 = (char*)a2[2];
    }
    else {
      v14 = (char*)a2 + 1;
    }
    while (*(unsigned __int8*)(v13 + v12) == (unsigned __int8)v14[v12]) {
      if (v11 == ++v12) {
        return;
      }
    }
    if (v12 >= 0x17) {
      if ((v12 | 7) == 0x17) {
        v19 = 26;
      }
      else {
        v19 = (v12 | 7) + 1;
      }
      v18 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                       v19, 16, 0);
      v27_.v28 = v12;
      v27_.v29 = v18;
      v27_.v27 = v19 | 1;
    }
    else {
      LOBYTE(v27_.v27) = 2 * v12;
      v18 = (char*)&v27_.v27 + 1;
      if (v12 == 0) {
      LABEL_32:
        v18[v12] = 0;
        if ((*v10 & 1) != 0) {
          v20 = *(_QWORD*)(a1 + 264);
          if (v20 != 0) {
            v21 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v21 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v20);
          }
        }
        v22 = v27_.v28;
        *(_QWORD*)v10 = v27_.v27;
        *(_QWORD*)(a1 + 256) = v22;
        *(_QWORD*)(a1 + 264) = v27_.v29;
        return;
      }
    }
    memmove((__int64)v18, v13, v12);
    goto LABEL_32;
  }
  if (v10 != (_BYTE*)a2) {
    v15 = *(unsigned __int8*)a2;
    if ((v9 & 1) != 0) {
      v23 = (v15 & 1) == 0;
      v24 = v15 >> 1;
      if (v23) {
        v25 = (__int64)a2 + 1;
      }
      else {
        v25 = a2[2];
      }
      if (v23) {
        v26 = v24;
      }
      else {
        v26 = a2[1];
      }
      SpineModel_64dde0((__int64*)(a1 + 248), v25, v26);
    }
    else if ((v15 & 1) != 0) {
      GameRoutine_64df20((_QWORD*)(a1 + 248), a2[2], a2[1]);
    }
    else {
      v16 = *a2;
      v17 = a2[2];
      *(_QWORD*)(a1 + 256) = a2[1];
      *(_QWORD*)(a1 + 264) = v17;
      *(_QWORD*)v10 = v16;
    }
  }
}

__int64 MapObjectModule_Unknown5(__int64 result)
{
  _BOOL4 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v11;
  int v12;

  if ((*(_BYTE*)(result + 168) & 1) != 0) {
    v1 = true;
  }
  else {
    v2 = *(unsigned __int8*)(result + 72);
    if ((v2 & 1) != 0) {
      v3 = *(_QWORD*)(result + 80);
    }
    else {
      v3 = v2 >> 1;
    }
    v1 = v3 == 0;
  }
  if (v1 && (*(_BYTE*)(result + 240) & 1 |
             (*(_QWORD*)(result + 192) == *(_QWORD*)(result + 200))) != 0) {
    v4 = *(unsigned __int8*)(result + 18);
    *(_BYTE*)(result + 18) = v4 | 4;
    if (v4 != (v4 | 4)) {
      *(_BYTE*)(*(_QWORD*)(result + 8) + 664LL) = 0;
    }
  }
  else {
    v5 = *(unsigned __int8*)(result + 154);
    if (v5 == 1) {
      *(_BYTE*)(result + 154) = 0;
    }
    v6 = *(_QWORD*)(result + 8);
    v7 = *(unsigned __int8*)(v6 + 288);
    if (v7 == 1) {
      v8 = *(_QWORD*)(result + 8);
      do {
        v8 = *(_QWORD*)(v8 + 736);
        v9 = v8 == 0;
      } while (v8 != 0 && (*(_BYTE*)(v8 + 288) & 1) != 0);
    }
    else {
      v9 = 0;
    }
    if (*(unsigned __int8*)(result + 152) != v9 || v5 != 0) {
      *(_BYTE*)(result + 152) = v9;
      v11 = result;
      MapObjectModule_a7d120_alt1(result);
      v6 = *(_QWORD*)(v11 + 8);
      result = v11;
      LOBYTE(v7) = *(_BYTE*)(v6 + 288);
    }
    v12 = 0;
    if (*(_BYTE*)(v6 + 289) == 1 && (v7 & 1) != 0) {
      if ((*(_BYTE*)(v6 + 300) & 0xFD) == 1) {
        v12 = 0;
      }
      else {
        do {
          v6 = *(_QWORD*)(v6 + 736);
          v12 = v6 == 0;
        } while (v6 != 0 && *(_BYTE*)(v6 + 289) == 1 &&
                 *(_BYTE*)(v6 + 288) == 1 && (*(_BYTE*)(v6 + 300) & 0xFD) != 1);
      }
    }
    if (*(unsigned __int8*)(result + 153) != v12 || v5 != 0) {
      *(_BYTE*)(result + 153) = v12;
      return MapObjectModule_a7d220(result);
    }
  }
  return result;
}

__int64* MapObjectModule_a7dcc0(__int64 a1)
{
  __int64* v1;
  unsigned __int8* v3;
  unsigned __int8* v4;
  atomic_uchar* v5;
  void* v6;
  unsigned __int64 v7;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64* v18;
  signed __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  void* v23;
  atomic_uchar* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int8* v34;
  struct {
    __int64 v35;
    __int64 v36;
  } v35_;

  v1 = (__int64*)(a1 + 216);
  if (*(_QWORD*)(a1 + 216) == *(_QWORD*)(a1 + 224) &&
      (*(_BYTE*)(a1 + 240) & 1) == 0) {
    v4 = *(unsigned __int8**)(a1 + 192);
    v3 = *(unsigned __int8**)(a1 + 200);
    if (v4 == v3) {
      goto LABEL_45;
    }
    v5 = (atomic_uchar*)&GameData_21fde98;
    v6 = &GameData_21fdd90;
    v34 = *(unsigned __int8**)(a1 + 200);
    do {
      if ((atomic_load_explicit(v5, memory_order_acquire) & 1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)v5) != 0) {
        GameHr_a5aca0((__int64)v6);
        GameRoutine_2b0_alt1();
        __cxa_guard_release_alt1((__int64)v5);
      }
      v7 = *v4;
      v8 = (v7 & 1) == 0;
      v9 = v7 >> 1;
      if (v8) {
        v10 = (__int64)(v4 + 1);
      }
      else {
        v10 = *((_QWORD*)v4 + 2);
      }
      if (v8) {
        v11 = v9;
      }
      else {
        v11 = *((_QWORD*)v4 + 1);
      }
      GameRoutine_a5cb20_alt2((void*)(&v35_.v35), (__int64)v6, v10, v11);
      v12 = v35_.v35;
      if (v35_.v35 != 0) {
        v13 = *(_QWORD**)(a1 + 224);
        v14 = *(_QWORD*)(a1 + 232);
        if ((unsigned __int64)v13 >= v14) {
          v17 = *v1;
          v18 = v1;
          v19 = (signed __int64)v13 - *v1;
          v20 = v19 >> 4;
          v21 = (v19 >> 4) + 1;
          if (v21 >> 60 != 0) {
            GameRoutine_a5dcd0_alt1();
          }
          v22 = v14 - v17;
          v23 = v6;
          v24 = v5;
          if (v22 >> 3 > v21) {
            v21 = v22 >> 3;
          }
          if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF0LL) {
            v25 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v25 = v21;
          }
          if (v25 >> 60 != 0) {
            GameRoutine_60a210_alt1();
          }
          v26 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v25, 16, 0);
          v27 = v35_.v36;
          v28 = (_QWORD*)(v26 + v19);
          *v28 = v12;
          v28[1] = v27;
          if (v27 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                                      memory_order_relaxed);
            v17 = *(_QWORD*)(a1 + 216);
            v19 = *(_QWORD*)(a1 + 224) - v17;
            v20 = v19 >> 4;
          }
          v29 = (__int64)&v28[-2 * v20];
          v30 = v26 + 16 * v25;
          v16 = v28 + 2;
          memcpy_alt1(v29, v17, v19);
          *(_QWORD*)(a1 + 216) = v29;
          *(_QWORD*)(a1 + 224) = v16;
          *(_QWORD*)(a1 + 232) = v30;
          if (v17 != 0) {
            v31 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v31 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v17);
          }
          v5 = v24;
          v6 = v23;
          v3 = v34;
          v1 = v18;
        }
        else {
          *v13 = v35_.v35;
          v15 = v35_.v36;
          v13[1] = v35_.v36;
          if (v15 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                      memory_order_relaxed);
          }
          v16 = v13 + 2;
        }
        *(_QWORD*)(a1 + 224) = v16;
      }
      v32 = v35_.v36;
      if (v35_.v36 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v35_.v36 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
        std___1___shared_weak_count___release_weak_alt1(v32);
      }
      v4 += 24;
    } while (v4 != v3);
    if (*(_QWORD*)(a1 + 216) == *(_QWORD*)(a1 + 224)) {
    LABEL_45:
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)&GameData_21fde98) != 0) {
        GameHr_a5aca0((__int64)&GameData_21fdd90);
        GameRoutine_2b0_alt1();
        __cxa_guard_release_alt1((__int64)&GameData_21fde98);
      }
      if (GameData_21fdde0 == GameData_21fdde8) {
        *(_BYTE*)(a1 + 240) = 1;
      }
    }
  }
  return v1;
}

#pragma GCC visibility pop
