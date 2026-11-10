#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_e1b4d0(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_e1bfe0(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD);
__int64 GameRoutine_14a1520(_QWORD, _QWORD);
__int64 GameRoutine_db1bc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_dfca40(__int64, __int64, __int64, __int64, __int64, __int64,
                           long double, long double);
__int64 __cxa_guard_acquire(_QWORD, long double, long double);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN GameData_1ac3bbb;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN* GameData_212c540;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fe2630[])();
extern __int64 (*game_hub_ObjectControllerDropItem_vtable[])();
extern __int64 GameData_212dc48[5];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212cbf0[73];
_QWORD* ObjectControllerDropItem_Destructor(_QWORD* result);
__int64 ObjectControllerDropItem_DeletingDestructor(_QWORD* a1);
__int64 ObjectControllerDropItem_Unknown6(__int64 a1);
__int64 GameRoutine_dfc300(__int64, int, long double, long double, __int64,
                           __int64, __int64, __int64);
__int64 HandlePtr_Unknown24_d5bee0(_QWORD, _QWORD);
__int64 HubEventNatives_d5bb40(_QWORD, _QWORD);
__int64 ObjectControllerDropItem_db1980(__int64, __int64, _DWORD*,
                                        unsigned __int8*, __int64);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memchr(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1fdce28[8])();
extern __int64 (*GameData_1fe1ff0[])();
extern unsigned __int8 GameData_1ac799d[];
__int64 ObjectControllerDropItem_db1bc0(char* a1, __int64 a2, int* a3);
__int64 ObjectControllerDropItem_dfca40(__int64 a1, __int64 a2, __int64 a3,
                                        __int64 a4, __int64 a5, __int64 a6,
                                        long double a7, long double a8);
__int64 GameRoutine_14a3920(__int64 result);
extern __int128 GameData_1a82cb0;
extern __int64 GameData_21ec7c0;
void ObjectControllerDropItem_ccc840(__int64 a1, __int64** a2);
__attribute__((swiftcall)) void
ObjectControllerDropItem_Unknown3(PSEUDO_X8 x8_, __int64 result);
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN game_g_random_mutex;
extern __int64* game_map_MapRandom_instance__ptr[3];
void game_hub_ObjectControllerDropItem_InitializeImpl_lambda0_Invoke(
    __int64 a1);

void ObjectControllerDropItem_ccc840(__int64 a1, __int64** a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64* v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  float32x4_t v12;
  float32x4_t* v13;

  v2 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v2 != 0) {
    v3 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v5 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    v6 = std___1___shared_weak_count_lock(v5);
    std___1___shared_weak_count___release_weak(v2);
    if (v6 == 0 || v3 == 0) {
      if (v6 == 0) {
        return;
      }
    }
    else {
      v8 = *a2;
      v9 = **a2;
      if (v9 != 0 && *(_DWORD*)(v9 + 16) == *((_DWORD*)v8 + 2)) {
        v10 = *(_DWORD*)(v9 + 36);
        if (v10 != 0) {
          v11 = 0;
          v12 = vaddq_f32(
              *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v3 + 24) + 16LL) + 560LL),
              COERCE_AS(float32x4_t, GameData_1a82cb0));
          do {
            if ((int)v10 > (int)v11) {
              v13 = *(float32x4_t**)(v9 + 40 + 8LL * (int)v11);
              if (v13 != nullptr) {
                v13[1] = v12;
                LANES128(v13[8]).n128_u8[0] = 1;
                v10 = *(_DWORD*)(v9 + 36);
              }
            }
            ++v11;
          } while (v11 < v10);
        }
      }
      GameRoutine_14a3920((__int64)v8);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
}

__int64 ObjectControllerDropItem_db1bc0(char* a1, __int64 a2, int* a3)
{
  __int64 v5;
  char* v6;
  __int64 v7;
  char* v8;
  int v9;
  unsigned int v10;
  __int64 v12;

  v5 = (__int64)a1;
  v12 = 0;
  if (a2 >= 4) {
    v6 = &a1[a2];
    v7 = a2;
    do {
      v8 = (char*)memchr(a1, 73, v7 - 3);
      if (v8 == nullptr) {
        break;
      }
      if (*(_DWORD*)v8 == 1598310729) {
        if (v8 != v6 && (char*)v5 == v8) {
          v9 = 1;
          v10 = 1;
          goto LABEL_14;
        }
        break;
      }
      a1 = v8 + 1;
      v7 = v6 - a1;
    } while (v6 - a1 >= 4);
  }
  if ((ObjectControllerDropItem_db1980(v5, a2, (_DWORD*)&v12 + 1, "P", 1) &
       1) != 0) {
    v9 = HIDWORD(v12);
    v10 = 2;
  LABEL_14:
    *a3 = v9;
    return v10;
  }
  v10 = 1;
  if ((ObjectControllerDropItem_db1980(v5, a2, &v12, GameData_1ac799d, 1) &
       1) != 0) {
    v9 = v12;
    v10 = 3;
    goto LABEL_14;
  }
  return v10;
}

__int64 ObjectControllerDropItem_dfca40(__int64 a1, __int64 a2, __int64 a3,
                                        __int64 a4, __int64 a5, __int64 a6,
                                        long double a7, long double a8)
{
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _BYTE* v14;
  _QWORD* v15;
  __int64 (**v16)();
  __int64 (***v17)();
  _QWORD* v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _BYTE v25[32];
  _BYTE* v26;
  _BYTE v27[32];
  __int64 v28;
  unsigned int v29;
  unsigned __int64 v30;

  GameRoutine_dfc300(a1, 0, a7, a8, a3, a4, a5, a6);
  result = *(_QWORD*)(a1 + 712);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v11 = *(_QWORD*)(a1 + 704);
      v12 = result;
      if (v11 == 0) {
        goto LABEL_24;
      }
      v13 = *(_QWORD*)(a2 + 32);
      if (v13 != 0) {
        if (v13 == a2) {
          v26 = v25;
          (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v13 + 24LL))(v13, v25);
          v14 = v26;
        }
        else {
          v14 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          v26 = v14;
        }
      }
      else {
        v14 = nullptr;
        v26 = nullptr;
      }
      v15 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
      v16 = GameData_1fe1ff0;
      v17 = (__int64 (***)())v15;
      *v15 = GameData_1fe1ff0;
      v18 = v15 + 2;
      if (v14 != nullptr) {
        if (v14 == v25) {
          v15[6] = v18;
          (*(void (**)(_BYTE*))(*(_QWORD*)v14 + 24LL))(v14);
          v16 = *v17;
        }
        else {
          v16 = GameData_1fe1ff0;
          v15[6] = v14;
          v26 = nullptr;
        }
      }
      else {
        v15[6] = 0;
      }
      v19 = ((__int64 (*)(__int64 (***)(), _QWORD*))v16[2])(v17, v18);
      v20 = *(_QWORD*)(v11 + 1312);
      v21 = *(_QWORD*)(v11 + 1320);
      v28 = v19;
      v29 = 1;
      if (v20 >= v21) {
        v22 = HubEventNatives_d5bb40(v11 + 1304, v27);
      }
      else {
        *(_BYTE*)v20 = 0;
        v30 = v20;
        *(_DWORD*)(v20 + 48) = -1;
        HandlePtr_Unknown24_d5bee0(&v30, v27);
        *(_DWORD*)(v20 + 48) = 1;
        v22 = v20 + 64;
      }
      v23 = v29;
      *(_QWORD*)(v11 + 1312) = v22;
      if ((_DWORD)v23 != -1) {
        ((void (*)(unsigned __int64*, _BYTE*))GameData_1fdce28[v23])(&v30, v27);
      }
      ((void (*)(__int64 (***)()))(*v17)[5])(v17);
      result = (__int64)v26;
      if (v26 == v25) {
        v24 = 32;
      }
      else {
        if (v26 == nullptr) {
          goto LABEL_24;
        }
        v24 = 40;
      }
      result = (*(__int64 (**)(void*))(*(_QWORD*)v26 + v24))((void*)v26);
    LABEL_24:
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        return std___1___shared_weak_count___release_weak(v12);
      }
    }
  }
  return result;
}

_QWORD* ObjectControllerDropItem_Destructor(_QWORD* result)
{
  _DWORD* v1;
  _QWORD* v2;
  __int64 v3;

  *result = game_hub_ObjectControllerDropItem_vtable;
  v1 = (_DWORD*)result[11];
  if (*(_QWORD*)v1 != 0 && *(_DWORD*)(*(_QWORD*)v1 + 16LL) == v1[2]) {
    v2 = result;
    GameRoutine_14a1520(result + 11, 1);
    result = v2;
  }
  v3 = result[12];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return (_QWORD*)std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 ObjectControllerDropItem_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *a1 = game_hub_ObjectControllerDropItem_vtable;
  v4 = (_QWORD*)a1[11];
  v2 = a1 + 11;
  v3 = v4;
  v5 = *v4;
  if (*v4 != 0 && *(_DWORD*)(v5 + 16) == *((_DWORD*)v3 + 2)) {
    GameRoutine_14a1520(v2, 1);
  }
  v6 = a1[12];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v7);
}

__int64 ObjectControllerDropItem_Unknown6(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  unsigned __int64 v4;
  char* v5;
  char* v6;
  unsigned __int64 v7;
  int v8;
  long double v9;
  long double v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int128* v15;
  __int64 v16;
  long double v17;
  long double v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int128* v25;
  __int128 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  long double v32;
  long double v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 result;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD v46[4];
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  char* v52;

  v2 = *(__int64**)(*(_QWORD*)(a1 + 8) + 224LL);
  if ((*(_BYTE*)v2 & 1) != 0) {
    fw_text_String_CopyTerminated(&v50, v2[2], v2[1]);
  }
  else {
    v3 = *v2;
    v4 = v2[1];
    v5 = (char*)v2[2];
    v51 = v4;
    v52 = v5;
    v50 = v3;
  }
  LODWORD(v48) = 0;
  if ((v50 & 1) != 0) {
    v6 = v52;
  }
  else {
    v6 = (char*)&v50 + 1;
  }
  if ((v50 & 1) != 0) {
    v7 = v51;
  }
  else {
    v7 = (unsigned __int64)(unsigned __int8)v50 >> 1;
  }
  v8 = GameRoutine_db1bc0(v6, v7, &v48);
  v11 = v48;
  *(_DWORD*)(a1 + 104) = v8;
  *(_DWORD*)(a1 + 108) = v11;
  if ((v50 & 1) != 0 && v52 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
    v8 = *(_DWORD*)(a1 + 104);
  }
  if (v8 != 2) {
    v13 = *(_QWORD*)GameData_212dc48[0];
    v16 = *(_QWORD*)(a1 + 8);
    if ((*(_BYTE*)(v16 + 976) & 1) != 0) {
      v15 = (__int128*)(v16 + 960);
      goto LABEL_25;
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) != 0) {
      v15 = &GameData_21a6120;
      goto LABEL_25;
    }
    v15 = &GameData_21a6120;
    if ((unsigned int)__cxa_guard_acquire(&GameData_21a6130, v9, v10) == 0) {
      goto LABEL_25;
    }
  LABEL_73:
    v44 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v44;
    __cxa_guard_release(&GameData_21a6130);
    goto LABEL_25;
  }
  v13 = *(_QWORD*)GameData_212dc48[0];
  v14 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(v14 + 976) & 1) == 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) != 0) {
      v15 = &GameData_21a6120;
      goto LABEL_25;
    }
    v15 = &GameData_21a6120;
    if ((unsigned int)__cxa_guard_acquire(&GameData_21a6130, v9, v10) == 0) {
      goto LABEL_25;
    }
    goto LABEL_73;
  }
  v15 = (__int128*)(v14 + 960);

LABEL_25:
  GameRoutine_e1b4d0((void*)&v50);
  GameRoutine_e1bfe0((void*)&v48, v13, &v50, v15);
  if ((v50 & 1) != 0 && v52 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
  }
  v20 = v48;
  v21 = v49;
  if (v49 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 8), 1u,
                              memory_order_relaxed);
  }
  v22 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)(a1 + 88) = v20;
  *(_QWORD*)(a1 + 96) = v21;
  if (v22 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      std___1___shared_weak_count___release_weak(v22);
    }
    v21 = *(_QWORD*)(a1 + 96);
  }
  if (v21 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak(v21);
    v23 = v49;
    if (v49 == 0) {
      goto LABEL_40;
    }
  }
  else {
    v23 = v49;
    if (v49 == 0) {
      goto LABEL_40;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak(v23);
    if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
      goto LABEL_46;
    }
    goto LABEL_41;
  }

LABEL_40:
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    goto LABEL_46;
  }

LABEL_41:
  v24 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(v24 + 976) & 1) != 0) {
    v25 = (__int128*)(v24 + 960);
  }
  else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                 memory_order_acquire) &
            1) != 0) {
    v25 = &GameData_21a6120;
  }
  else {
    v25 = &GameData_21a6120;
    if ((unsigned int)__cxa_guard_acquire(&GameData_21a6130, v17, v18) != 0) {
      v45 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v45;
      __cxa_guard_release(&GameData_21a6130);
    }
  }
  *(_DWORD*)(a1 + 64) = *(_DWORD*)v25;
  *(_DWORD*)(a1 + 68) = *((_DWORD*)v25 + 1);
  v26 = *(_OWORD*)(a1 + 64);
  *((_QWORD*)&v26 + 1) = *((unsigned int*)v25 + 2);
  *(_OWORD*)(a1 + 64) = v26;

LABEL_46:
  v27 = game_HashString(&GameData_1ac3bbb);
  v34 = *GameData_212cbf0[0];
  v35 = *(_QWORD*)(*GameData_212cbf0[0] + 96);
  if ((v35 & (v35 - 1)) != 0) {
    v36 = v27;
    if (v27 >= v35) {
      v36 = v27 % v35;
    }
    v37 = *(_QWORD**)(*(_QWORD*)(v34 + 88) + 8 * v36);
    do {
      do {
        v37 = (_QWORD*)*v37;
      } while (v37[1] != v27);
    } while (v37[2] != v27);
  }
  else {
    v37 = *(_QWORD**)(*(_QWORD*)(v34 + 88) + 8 * ((v35 - 1) & v27));
    do {
      do {
        v37 = (_QWORD*)*v37;
      } while (v37[1] != v27);
    } while (v37[2] != v27);
  }
  v38 = *(_QWORD*)(a1 + 8);
  LODWORD(v32) = *(_DWORD*)(v37[3] + 32LL);
  v47 = v46;
  v46[0] = GameData_1fe2630;
  v46[1] = a1;
  GameRoutine_dfca40(v38, (__int64)v46, v28, v29, v30, v31, v32, v33);
  if (v47 == v46) {
    v39 = 32;
    goto LABEL_60;
  }
  if (v47 != nullptr) {
    v39 = 40;
  LABEL_60:
    (*(void (**)(void*))(*v47 + v39))(v47);
  }
  v40 = *(_QWORD*)(a1 + 8);
  result = *(_QWORD*)(v40 + 712);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v42 = *(_QWORD*)(v40 + 704);
      if (v42 != 0) {
        *(_DWORD*)(v42 + 1760) &= ~0x100u;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v43 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        return std___1___shared_weak_count___release_weak(v43);
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void

ObjectControllerDropItem_Unknown3(PSEUDO_X8 x8_, __int64 result)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v2;

  v2 = *(_QWORD*)(result + 72);
  *(_QWORD*)a2 = *(_QWORD*)(result + 64);
  *(_QWORD*)(a2 + 8) = v2;
  *(_BYTE*)(a2 + 16) = 1;
  {
    result;
    return;
  }
}

void game_hub_ObjectControllerDropItem_InitializeImpl_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  int v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  __n128 v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  __int128 v19;
  float v20;
  __n128 v21;

  v1 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(v1 + 112) & 1) == 0) {
    *(_BYTE*)(v1 + 112) = 1;
    nn_os_LockMutex(&game_g_random_mutex);
    v2 = game_map_MapRandom_instance__ptr[0];
    v3 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((_UNKNOWN**)0x8LL));
    v4 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
    v5 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
         (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
    *((_DWORD*)v2 + 1) = v3;
    v6 = (v5 >> 8) ^ (v4 >> 19) ^ v5 ^ v4;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2) = v4;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2 + 4) = v6;
    v7 = nn_os_UnlockMutex(&game_g_random_mutex);
    PSEUDO_LOW_LANE128(
        v7, n128_f32,
        (float)(fminf(fmaxf(vcvts_n_f32_u32((unsigned __int16)v6, 0x10u),
                            0x0.0p+0f),
                      0x1.0000000000000p+0f) *
                0x1.0000000000000p+1f) +
            -0x1.0000000000000p+0f);
    v21 = v7;
    nn_os_LockMutex(&game_g_random_mutex);
    v8 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2);
    v9 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2 + 4);
    v10 = *(_DWORD*)v2 ^ (*(_DWORD*)v2 << 11);
    *(_DWORD*)v2 = *((_DWORD*)v2 + 1);
    *((_DWORD*)v2 + 1) = v8;
    v11 = (v10 >> 8) ^ (v9 >> 19) ^ v10 ^ v9;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2) = v9;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2 + 4) = v11;
    nn_os_UnlockMutex(&game_g_random_mutex);
    v20 = (float)(fminf(fmaxf(vcvts_n_f32_u32((unsigned __int16)v11, 0x10u),
                              0x0.0p+0f),
                        0x1.0000000000000p+0f) *
                  0x1.8000000000000p+0f) +
          0x1.0000000000000p-1f;
    nn_os_LockMutex(&game_g_random_mutex);
    v12 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2);
    v13 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2 + 4);
    v14 = *(_DWORD*)v2 ^ (*(_DWORD*)v2 << 11);
    *(_DWORD*)v2 = *((_DWORD*)v2 + 1);
    *((_DWORD*)v2 + 1) = v12;
    v15 = (v14 >> 8) ^ (v13 >> 19) ^ v14 ^ v13;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2) = v13;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2 + 4) = v15;
    nn_os_UnlockMutex(&game_g_random_mutex);
    v16 = v21;
    LANES128(v16).n128_f32[1] = v20;
    LANES128(v16).n128_f32[2] =
        (float)(fminf(fmaxf(vcvts_n_f32_u32((unsigned __int16)v15, 0x10u),
                            0x0.0p+0f),
                      0x1.0000000000000p+0f) *
                0x1.0000000000000p+1f) +
        -0x1.0000000000000p+0f;
    LANES128(v17).n128_u64[0] = 0x4040000040400000LL;
    LANES128(v17).n128_u64[1] = 0x4040000040400000LL;
    v18 = vmulq_f32(v16, v17);
    *(_QWORD*)(v1 + 128) = LANES128(v18).n128_u64[0];
    v19 = *(_OWORD*)(v1 + 128);
    *((_QWORD*)&v19 + 1) = LANES128(v18).n128_u32[2];
    *(_OWORD*)(v1 + 128) = v19;
  }
}

#pragma GCC visibility pop
