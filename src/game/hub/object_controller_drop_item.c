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
__int64 ObjectControllerDropItem_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "ObjectControllerDropItem_DeletingDestructor");
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
__int64 ObjectControllerDropItem_dfca40_alt1(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    long double a7, long double a8) __asm__("ObjectControllerDropItem_dfca40");
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
__int64*
HandlePtr_Unknown24_d5bee0_alt1(__int64* result,
                                __int64) __asm__("HandlePtr_Unknown24_d5bee0");
__int64 HubEventNatives_d5bb40_alt1(__int64*,
                                    __int64) __asm__("HubEventNatives_d5bb40");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_hub_dfc300(__int64, int, float);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ObjectControllerDropItem_dfca40(__int64 a1, __int64 a2, float a3);
__int64 game_14a3920(__int64 result);
void game_hub_ObjectControllerDropItem_PlayGetItem_lambda0_Invoke(__int64 a1,
                                                                  __int64** a2);
__attribute__((swiftcall)) void game_hub_e1b4d0(PSEUDO_X8);
__attribute__((swiftcall)) void game_hub_e1bfe0(PSEUDO_X8, __int64, __int64,
                                                __int64*);
__int64 GameHr_14a1520(__int64*, char);
__int64 ObjectControllerDropItem_db1bc0_alt1(__int64, __int64, int*) __asm__(
    "ObjectControllerDropItem_db1bc0");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ObjectControllerDropItem_DeletingDestructor(_QWORD* a1);

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

__int64 ObjectControllerDropItem_dfca40(__int64 a1, __int64 a2, float a3)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  _BYTE* v9;
  _QWORD* v10;
  __int64 (**v11)();
  __int64 (***v12)();
  _QWORD* v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    _BYTE v20[32];
    _BYTE* v21;
  } v20_;
  struct {
    _BYTE v22[32];
    __int64 v23;
    char gap88_[8];
    unsigned int v24;
  } v22_;
  unsigned __int64 v25;

  game_hub_dfc300(a1, 0, a3);
  result = *(_QWORD*)(a1 + 712);
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v6 = *(__int64**)(a1 + 704);
      v7 = result;
      if (v6 == nullptr) {
        goto LABEL_24;
      }
      v8 = *(_QWORD*)(a2 + 32);
      if (v8 != 0) {
        if (v8 == a2) {
          v20_.v21 = v20_.v20;
          (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v8 + 24LL))(v8, v20_.v20);
          v9 = v20_.v21;
        }
        else {
          v9 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          v20_.v21 = v9;
        }
      }
      else {
        v9 = nullptr;
        v20_.v21 = nullptr;
      }
      v10 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
      v11 = GameData_1fe1ff0;
      v12 = (__int64 (***)(void))v10;
      *v10 = GameData_1fe1ff0;
      v13 = v10 + 2;
      if (v9 != nullptr) {
        if (v9 == v20_.v20) {
          v10[6] = v13;
          (*(void (**)(_BYTE*))(*(_QWORD*)v9 + 24LL))(v9);
          v11 = *v12;
        }
        else {
          v11 = GameData_1fe1ff0;
          v10[6] = v9;
          v20_.v21 = nullptr;
        }
      }
      else {
        v10[6] = 0;
      }
      v14 = ((__int64 (*)(__int64 (***)(void), _QWORD*))v11[2])(v12, v13);
      v15 = v6[164];
      v16 = v6[165];
      v22_.v23 = v14;
      v22_.v24 = 1;
      if (v15 >= v16) {
        v17 = HubEventNatives_d5bb40_alt1(v6 + 163, (__int64)v22_.v22);
      }
      else {
        *(_BYTE*)v15 = 0;
        v25 = v15;
        *(_DWORD*)(v15 + 48) = -1;
        HandlePtr_Unknown24_d5bee0_alt1((__int64*)&v25, (__int64)v22_.v22);
        *(_DWORD*)(v15 + 48) = 1;
        v17 = v15 + 64;
      }
      v18 = v22_.v24;
      v6[164] = v17;
      if ((_DWORD)v18 != -1) {
        ((void (*)(unsigned __int64*, _BYTE*))GameData_1fdce28[v18])(&v25,
                                                                     v22_.v22);
      }
      ((void (*)(__int64 (***)(void)))(*v12)[5])(v12);
      result = (__int64)v20_.v21;
      if (v20_.v21 == v20_.v20) {
        v19 = 32;
      }
      else {
        if (v20_.v21 == nullptr) {
          goto LABEL_24;
        }
        v19 = 40;
      }
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v20_.v21 + v19))(
          (__int64)v20_.v21);
    LABEL_24:
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        return std___1___shared_weak_count___release_weak_alt1(v7);
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

void ObjectControllerDropItem_DeletingDestructor(_QWORD* a1)
{
  __int64* v2;
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
    GameHr_14a1520(v2, 1);
  }
  v6 = a1[12];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt1(v6);
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v7 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, (__int64)a1);
}

__int64 ObjectControllerDropItem_Unknown6(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  char* v6;
  unsigned __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int128* v21;
  __int128 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  _QWORD* v27;
  __int64 v28;
  float v29;
  __int64 v30;
  __int64 v31;
  __int64 result;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  struct {
    _QWORD v37[4];
    _QWORD* v38;
  } v37_;
  struct {
    __int64* v39;
    __int64 v40;
  } v39_;
  struct {
    __int64 v41;
    unsigned __int64 v42;
    char* v43;
  } v41_;

  v2 = *(__int64**)(*(_QWORD*)(a1 + 8) + 224LL);
  if ((*(_BYTE*)v2 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v41_.v41, v2[2], v2[1]);
  }
  else {
    v3 = *v2;
    v4 = v2[1];
    v5 = v2[2];
    v41_.v42 = v4;
    v41_.v43 = (char*)v5;
    v41_.v41 = v3;
  }
  LODWORD(v39_.v39) = 0;
  if ((v41_.v41 & 1) != 0) {
    v6 = v41_.v43;
  }
  else {
    v6 = (char*)&v41_.v41 + 1;
  }
  if ((v41_.v41 & 1) != 0) {
    v7 = v41_.v42;
  }
  else {
    v7 = (unsigned __int64)(unsigned __int8)v41_.v41 >> 1;
  }
  v8 = ObjectControllerDropItem_db1bc0_alt1((__int64)v6, v7, (int*)&v39_.v39);
  v9 = (int)v39_.v39;
  *(_DWORD*)(a1 + 104) = v8;
  *(_DWORD*)(a1 + 108) = v9;
  if ((v41_.v41 & 1) != 0 && v41_.v43 != nullptr) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, (__int64)v41_.v43);
    v8 = *(_DWORD*)(a1 + 104);
  }
  if (v8 != 2) {
    v11 = *(_QWORD*)GameData_212dc48[0];
    v14 = *(_QWORD*)(a1 + 8);
    if ((*(_BYTE*)(v14 + 976) & 1) != 0) {
      v13 = (__int64*)(v14 + 960);
      goto LABEL_25;
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) != 0) {
      v13 = (__int64*)&GameData_21a6120;
      goto LABEL_25;
    }
    v13 = (__int64*)&GameData_21a6120;
    if (__cxa_guard_acquire_alt1((__int64)&GameData_21a6130) == 0) {
      goto LABEL_25;
    }
  LABEL_73:
    v35 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v35;
    __cxa_guard_release_alt1((__int64)&GameData_21a6130);
    goto LABEL_25;
  }
  v11 = *(_QWORD*)GameData_212dc48[0];
  v12 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(v12 + 976) & 1) == 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) != 0) {
      v13 = (__int64*)&GameData_21a6120;
      goto LABEL_25;
    }
    v13 = (__int64*)&GameData_21a6120;
    if (__cxa_guard_acquire_alt1((__int64)&GameData_21a6130) == 0) {
      goto LABEL_25;
    }
    goto LABEL_73;
  }
  v13 = (__int64*)(v12 + 960);
LABEL_25:
  game_hub_e1b4d0((void*)(&v41_.v41));
  game_hub_e1bfe0((void*)(&v39_.v39), v11, (__int64)&v41_.v41, v13);
  if ((v41_.v41 & 1) != 0 && v41_.v43 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, (__int64)v41_.v43);
  }
  v16 = v39_.v39;
  v17 = v39_.v40;
  if (v39_.v40 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v39_.v40 + 8), 1u,
                              memory_order_relaxed);
  }
  v18 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)(a1 + 88) = v16;
  *(_QWORD*)(a1 + 96) = v17;
  if (v18 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      std___1___shared_weak_count___release_weak_alt1(v18);
    }
    v17 = *(_QWORD*)(a1 + 96);
  }
  if (v17 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak_alt1(v17);
    v19 = v39_.v40;
    if (v39_.v40 == 0) {
      goto LABEL_40;
    }
  }
  else {
    v19 = v39_.v40;
    if (v39_.v40 == 0) {
      goto LABEL_40;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak_alt1(v19);
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
  v20 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(v20 + 976) & 1) != 0) {
    v21 = (__int128*)(v20 + 960);
  }
  else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                 memory_order_acquire) &
            1) != 0) {
    v21 = &GameData_21a6120;
  }
  else {
    v21 = &GameData_21a6120;
    if (__cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
      v36 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v36;
      __cxa_guard_release_alt1((__int64)&GameData_21a6130);
    }
  }
  *(_DWORD*)(a1 + 64) = *(_DWORD*)v21;
  *(_DWORD*)(a1 + 68) = *((_DWORD*)v21 + 1);
  v22 = *(_OWORD*)(a1 + 64);
  *((_QWORD*)&v22 + 1) = *((unsigned int*)v21 + 2);
  *(_OWORD*)(a1 + 64) = v22;
LABEL_46:
  v23 = game_HashString_alt1((__int64)&GameData_1ac3bbb);
  v24 = *GameData_212cbf0[0];
  v25 = *(_QWORD*)(*GameData_212cbf0[0] + 96);
  if ((v25 & (v25 - 1)) != 0) {
    v26 = v23;
    if (v23 >= v25) {
      v26 = v23 % v25;
    }
    v27 = *(_QWORD**)(*(_QWORD*)(v24 + 88) + 8 * v26);
    do {
      do {
        v27 = (_QWORD*)*v27;
      } while (v27[1] != v23);
    } while (v27[2] != v23);
  }
  else {
    v27 = *(_QWORD**)(*(_QWORD*)(v24 + 88) + 8 * ((v25 - 1) & v23));
    do {
      do {
        v27 = (_QWORD*)*v27;
      } while (v27[1] != v23);
    } while (v27[2] != v23);
  }
  v28 = *(_QWORD*)(a1 + 8);
  v29 = *(float*)(v27[3] + 32LL);
  v37_.v38 = v37_.v37;
  v37_.v37[0] = GameData_1fe2630;
  v37_.v37[1] = a1;
  ObjectControllerDropItem_dfca40(v28, (__int64)v37_.v37, v29);
  if (v37_.v38 == v37_.v37) {
    v30 = 32;
    goto LABEL_60;
  }
  if (v37_.v38 != nullptr) {
    v30 = 40;
  LABEL_60:
    (*(void (**)(__int64))(*v37_.v38 + v30))((__int64)v37_.v38);
  }
  v31 = *(_QWORD*)(a1 + 8);
  result = *(_QWORD*)(v31 + 712);
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v33 = *(_QWORD*)(v31 + 704);
      if (v33 != 0) {
        *(_DWORD*)(v33 + 1760) &= ~0x100u;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v34 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        return std___1___shared_weak_count___release_weak_alt1(v34);
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

void game_hub_ObjectControllerDropItem_PlayGetItem_lambda0_Invoke(__int64 a1,
                                                                  __int64** a2)
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
    v6 = std___1___shared_weak_count_lock_alt1(v5);
    std___1___shared_weak_count___release_weak_alt1(v2);
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
      game_14a3920((__int64)v8);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt1(v6);
    }
  }
}

#pragma GCC visibility pop
