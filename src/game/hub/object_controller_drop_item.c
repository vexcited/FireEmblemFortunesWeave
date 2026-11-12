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
_QWORD* GameRoutine_ccc9b0(_QWORD* result, _QWORD*);
_QWORD* game_hub_e1cee0(__int64*, _QWORD*);
__attribute__((swiftcall)) void
    game_hub_e1b4d0_alt1(PSEUDO_X8, _QWORD, _QWORD) __asm__("game_hub_e1b4d0");
__int64 GameHr_17cbee0(__int64, int);
__int64 GameHr_17cbfa0(__int64, int);
__int64 GameHr_dbc2c0(_QWORD*, __int64);
__int64 GameHr_eb62f0(int);
__int64 ItemSupport_f2e340();
__int64 game_989ea0(__int64 result, int, __int64);
__int64 game_hub_dfc000(__int64 result);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
extern _UNKNOWN GameData_1aa15ff;
extern __int64 (*GameData_1fe26b0[])();
extern __int64* GameData_212d458[7];
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_2130f48;
extern __int64 GameData_2131678;
extern __int64 game_GameModeData_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float powf(float, float);
void GameRoutine_dfa900(__int64);
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_hub_ObjectControllerDropItem_PlayGetItem(__int64 a1);

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

__int64 game_hub_ObjectControllerDropItem_PlayGetItem(__int64 a1)
{
  float v2;
  float v3;
  float32x4_t v4;
  float32x4_t v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  unsigned __int64 v15;
  float32x4_t v16;
  float32x4_t* v17;
  int16x4_t v18;
  float32x4_t v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  long double v29;
  __int64 v31;
  __int128* v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  _QWORD* v37;
  __int64 v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float32x4_t v44;
  float v45;
  float32x4_t v46;
  float v47;
  int8x16_t v48;
  float32x4_t v49;
  float32x4_t v50;
  int8x16_t v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float32x4_t v66;
  int8x16_t v67;
  float32x4_t v68;
  float32x4_t v69;
  int8x16_t v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  __int64 v76;
  float32x4_t v77;
  __int128 v78;
  __int128 v79;
  float32x4_t v80;
  int v81;
  int v82;
  int v83;
  int v84;
  __int64 v85;
  __int64** v86;
  __int64 v87;
  __int64* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64* v96;
  __int64** v97;
  __int64 v98;
  _QWORD* v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int128* v114;
  __int64 v115;
  __int64 v116;
  unsigned int v117;
  __int128 v118;
  unsigned int i;
  __int64 v120;
  __int64 v122;
  int v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  float32x4_t v127;
  float v128;
  float32x4_t v129;
  __int128 v130;
  float32x4_t v131;
  float v132;
  float32x4_t v133;
  __int64 v134[3];
  struct {
    __int64* v135;
    __int64 v136;
  } v135_;
  struct {
    _BYTE v137[32];
    _BYTE* v138;
    char gap152_[8];
    __int64* v139;
    __int64 v140;
  } v137_;
  struct {
    _QWORD v141[4];
    _QWORD* v142;
  } v141_;
  struct {
    __int64* v143;
    __int64 v144;
  } v143_;
  struct {
    _QWORD v145[2];
    __int64 v146;
    char gap264_[8];
    _QWORD* v147;
  } v145_;

  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (*(_BYTE*)(a1 + 48) == 1) {
    v2 = *(float*)(a1 + 80);
    v3 = fabsf(
        (float)((float)(*(float*)(*(_QWORD*)
                                      game_script_hub_g_frame_counter_ptr[0] +
                                  160LL) *
                        0x1.0aef000000000p+4f) /
                0x1.f400000000000p+9f) /
        0x1.3333340000000p-1f);
    if (v2 <= 0x1.0000000000000p+0f) {
      if (v2 >= 0x1.0000000000000p+0f ||
          (v2 = v2 + v3) <= 0x1.0000000000000p+0f) {
      LABEL_8:
        v4 = *(float32x4_t*)(a1 + 32);
        v5 = *(float32x4_t*)(a1 + 64);
        *(float*)(a1 + 80) = v2;
        v132 = v2;
        v127 = v5;
        v129 = v4;
        if (v2 >= 0x1.0000000000000p-1f) {
          v11 = (float)(v2 + -0x1.0000000000000p-1f) +
                (float)(v2 + -0x1.0000000000000p-1f);
          if (v11 <= 0x1.0000000000000p+0f) {
            v12 = (float)(v2 + -0x1.0000000000000p-1f) +
                  (float)(v2 + -0x1.0000000000000p-1f);
          }
          else {
            v12 = 0x1.0000000000000p+0f;
          }
          v13 = 0x1.0000000000000p+0f -
                fminf(fmaxf(v12, 0x0.0p+0f), 0x1.0000000000000p+0f);
          if (v11 >= 0x0.0p+0f) {
            v9 = v13;
          }
          else {
            v9 = 0x1.0000000000000p+0f;
          }
          v10 = 0x1.0000000000000p-1f;
        }
        else {
          v6 = v2 + v2;
          if ((float)(v2 + v2) <= 0x1.0000000000000p+0f) {
            v7 = v2 + v2;
          }
          else {
            v7 = 0x1.0000000000000p+0f;
          }
          v8 = (float)(fminf(fmaxf(v7, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                       0x1.99999a0000000p-1f) +
               0x1.99999a0000000p-3f;
          if (v6 >= 0x0.0p+0f) {
            v9 = v8;
          }
          else {
            v9 = 0x1.99999a0000000p-3f;
          }
          v10 = 0x1.3333340000000p-2f;
        }
        v14 = powf(v9, v10),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (*(float*)(a1 + 80) >= 0x1.0000000000000p+0f) {
          if (*(_BYTE*)(a1 + 48) == 1) {
            *(_BYTE*)(a1 + 48) = 0;
          }
          v16 = *(float32x4_t*)(a1 + 64);
          LANES128(v16).n128_u32[3] = 0;
        }
        else {
          LODWORD(v15) = 0;
          *((float*)&v15 + 1) = v14 * 0x1.4000000000000p+0f;
          v16 = vaddq_f32(vmlaq_n_f32(v129, vsubq_f32(v127, v129), v132),
                          COERCE_AS(float32x4_t, v15));
        }
        v17 = *(float32x4_t**)(a1 + 8);
        if (LANES128(v17[61]).n128_u8[0] == 1) {
          LANES64(v18).n64_u64[0] =
              LANES64_OF(vmovn_s32(vceqq_f32(v17[60], v16))).n64_u64[0];
          if ((LANES64(v18).n64_u8[0] & 1) != 0 &&
              (LANES64(v18).n64_u8[2] & 1) != 0 &&
              (LANES64(v18).n64_u8[4] & 1) != 0) {
          LABEL_35:
            if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
              goto LABEL_42;
            }
            goto LABEL_36;
          }
          LANES128(v17[60]).n128_u64[0] = LANES128(v16).n128_u64[0];
          v19 = v17[60];
          LANES128(v19).n128_u64[1] = LANES128(v16).n128_u32[2];
          v17[60] = v19;
        }
        else {
          v17[60] = v16;
          LANES128(v17[61]).n128_u8[0] = 1;
        }
        GameRoutine_dfa900((__int64)v17),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
        goto LABEL_35;
      }
    }
    else {
      v2 = v2 - v3;
      if (v2 >= 0x1.0000000000000p+0f) {
        goto LABEL_8;
      }
    }
    v2 = 0x1.0000000000000p+0f;
    goto LABEL_8;
  }
LABEL_36:
  v20 = *(_QWORD*)(a1 + 8);
  v21 = *(_QWORD*)(v20 + 712);
  if (v21 != 0) {
    v22 = std___1___shared_weak_count_lock_alt1(v21),
    v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v22 != 0) {
      v23 = *(_QWORD*)(v20 + 704);
      if (v23 != 0) {
        *(_DWORD*)(v23 + 1760) |= 0x100u;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v24 = v22;
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v24),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
  }
LABEL_42:
  if (*(_BYTE*)(a1 + 112) == 0) {
    goto LABEL_209;
  }
  v25 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v25 == 0) {
    goto LABEL_209;
  }
  v26 = *(_QWORD*)(*GameData_212d458[0] + 72);
  v27 = *(_QWORD*)(*GameData_212d458[0] + 80);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                            memory_order_relaxed);
  v28 = std___1___shared_weak_count_lock_alt1(v27),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
  std___1___shared_weak_count___release_weak_alt1(v25),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v28 == 0 || v26 == 0) {
    goto LABEL_206;
  }
  v31 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(v31 + 976) & 1) != 0) {
    v32 = (__int128*)(v31 + 960);
  }
  else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                 memory_order_acquire) &
            1) != 0) {
    v32 = &GameData_21a6120;
  }
  else {
    v32 = &GameData_21a6120;
    if (__cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
      v125 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v125;
      __cxa_guard_release_alt1((__int64)&GameData_21a6130),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  v130 = *v32;
  v133 = *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v26 + 24) + 16LL) + 560LL);
  v33 = game_HashString_alt1((__int64)&GameData_1aa15ff),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v34 = *GameData_212cbf0[0];
  v35 = *(_QWORD*)(*GameData_212cbf0[0] + 96);
  if ((v35 & (v35 - 1)) != 0) {
    v36 = v33;
    if (v33 >= v35) {
      v36 = v33 % v35;
    }
    v37 = *(_QWORD**)(*(_QWORD*)(v34 + 88) + 8 * v36);
    do {
      do {
        v37 = (_QWORD*)*v37;
      } while (v37[1] != v33);
    } while (v37[2] != v33);
  }
  else {
    v37 = *(_QWORD**)(*(_QWORD*)(v34 + 88) + 8 * ((v35 - 1) & v33));
    do {
      do {
        v37 = (_QWORD*)*v37;
      } while (v37[1] != v33);
    } while (v37[2] != v33);
  }
  v38 = v37[3];
  v39 = (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                          160LL) *
                0x1.0aef000000000p+4f) /
        0x1.f400000000000p+9f;
  v40 = *(float*)(a1 + 116);
  v41 = fabsf(v39 + v39);
  if (v40 > 0x1.0000000000000p+0f) {
    v40 = v40 - v41;
    if (v40 >= 0x1.0000000000000p+0f) {
      goto LABEL_68;
    }
  }
  else if (v40 >= 0x1.0000000000000p+0f ||
           (v40 = v40 + v41) <= 0x1.0000000000000p+0f) {
  LABEL_68:
    v42 = *(float*)(v38 + 32);
    v43 = v39 + *(float*)(a1 + 120);
    *(float*)(a1 + 116) = v40;
    *(float*)(a1 + 120) = v43;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0) {
      v128 = v39;
      v123 = __cxa_guard_acquire_alt1((__int64)&GameData_21a6130),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v39 = v128;
      if (v123 != 0) {
        v124 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v124;
        __cxa_guard_release_alt1((__int64)&GameData_21a6130),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v39 = v128;
      }
    }
    v44 = *(float32x4_t*)(a1 + 128);
    v45 = *(float*)(a1 + 116);
    v46 = vsubq_f32(COERCE_AS(float32x4_t, GameData_21a6120), v44);
    v47 = (float)(v39 * 0x1.4000000000000p+2f) * v45;
    v48 = vmulq_f32(v46, v46);
    LANES128(v48).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v48, v48, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])))
            .n64_u64[0];
    LANES128(v48).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])))
            .n64_u64[0];
    LANES128(v48).n128_u64[1] = LANES128(v48).n128_u64[0];
    v49 = vrsqrteq_f32(v48);
    v50 = vmulq_f32(v49, vrsqrtsq_f32(v49, vmulq_f32(v48, v49)));
    v51 = vbicq_s8(
        vmulq_f32(v46, vmulq_f32(v50, vrsqrtsq_f32(v50, vmulq_f32(v48, v50)))),
        vceqzq_f32(v48));
    v52 = fabsf(v47 * fabsf(LANES128(v51).n128_f32[0]));
    LODWORD(v53) = HIDWORD(*(_QWORD*)(a1 + 128));
    if ((LANES64_OF(vmovn_s32(vcgtq_f32(
                        v44, COERCE_AS(float32x4_t, GameData_21a6120))))
             .n64_u8[0] &
         1) == 0) {
      if ((LANES64_OF(vmovn_s32(vcgtq_f32(
                          COERCE_AS(float32x4_t, GameData_21a6120), v44)))
               .n64_u8[0] &
           1) == 0) {
        LODWORD(v54) = *(_OWORD*)(a1 + 128);
        goto LABEL_76;
      }
      v54 = LANES128(v44).n128_f32[0] + v52;
      if (v54 <= *(float*)&GameData_21a6120) {
        goto LABEL_76;
      }
    LABEL_74:
      v54 = *(float*)&GameData_21a6120;
      goto LABEL_76;
    }
    v54 = LANES128(v44).n128_f32[0] - v52;
    if (v54 < *(float*)&GameData_21a6120) {
      goto LABEL_74;
    }
  LABEL_76:
    LANES128(v44).n128_u32[0] = *(_QWORD*)(a1 + 136);
    v55 = fabsf(v47 * fabsf(LANES128(v51).n128_f32[1]));
    if (v53 > *((float*)&GameData_21a6120 + 1)) {
      v53 = v53 - v55;
      if (v53 >= *((float*)&GameData_21a6120 + 1)) {
        goto LABEL_82;
      }
    LABEL_81:
      v53 = *((float*)&GameData_21a6120 + 1);
      goto LABEL_82;
    }
    if (v53 < *((float*)&GameData_21a6120 + 1)) {
      v53 = v53 + v55;
      if (v53 > *((float*)&GameData_21a6120 + 1)) {
        goto LABEL_81;
      }
    }
  LABEL_82:
    v56 = fabsf(v47 * fabsf(LANES128(v51).n128_f32[2]));
    if (LANES128(v44).n128_f32[2] <= *((float*)&GameData_21a6120 + 2)) {
      v57 = COERCE_AS(float32x4_t, v130);
      v58 = v133;
      if (LANES128(v44).n128_f32[2] >= *((float*)&GameData_21a6120 + 2)) {
        goto LABEL_88;
      }
      LANES128(v44).n128_f32[0] = LANES128(v44).n128_f32[2] + v56;
      if ((float)(LANES128(v44).n128_f32[2] + v56) <=
          *((float*)&GameData_21a6120 + 2)) {
        goto LABEL_88;
      }
      goto LABEL_87;
    }
    v57 = COERCE_AS(float32x4_t, v130);
    v58 = v133;
    LANES128(v44).n128_f32[0] = LANES128(v44).n128_f32[2] - v56;
    if ((float)(LANES128(v44).n128_f32[2] - v56) <
        *((float*)&GameData_21a6120 + 2)) {
    LABEL_87:
      LANES128(v44).n128_u32[0] = DWORD2(GameData_21a6120);
    }
  LABEL_88:
    *(float*)(a1 + 128) = v54;
    *(float*)(a1 + 132) = v53;
    v59 = *(float32x4_t*)(a1 + 128);
    LANES128(v59).n128_u64[1] = LANES128(v44).n128_u32[0];
    *(float32x4_t*)(a1 + 128) = v59;
    v60 = vaddq_f32(v57, vmulq_n_f32(v59, v39));
    v61 = (float)(*(float*)(a1 + 120) + -0x1.0000000000000p+0f) /
          0x1.2000000000000p+3f;
    if (v61 <= 0x1.0000000000000p+0f) {
      v62 = (float)(*(float*)(a1 + 120) + -0x1.0000000000000p+0f) /
            0x1.2000000000000p+3f;
    }
    else {
      v62 = 0x1.0000000000000p+0f;
    }
    v63 = (float)(v62 * 0x1.0000000000000p+3f) + 0x1.0000000000000p+0f;
    if (v61 >= 0x0.0p+0f) {
      v64 = v63;
    }
    else {
      v64 = 0x1.0000000000000p+0f;
    }
    v65 = (float)((float)(v39 * 0x1.0000000000000p+4f) * v45) * v64;
    v66 = vsubq_f32(v58, v60);
    v67 = vmulq_f32(v66, v66);
    LANES128(v67).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v67, v67, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v67).n128_u64[0])))
            .n64_u64[0];
    LANES128(v67).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v67).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v67).n128_u64[0])))
            .n64_u64[0];
    LANES128(v67).n128_u64[1] = LANES128(v67).n128_u64[0];
    v68 = vrsqrteq_f32(v67);
    v69 = vmulq_f32(v68, vrsqrtsq_f32(v68, vmulq_f32(v67, v68)));
    v70 = vbicq_s8(
        vmulq_f32(v66, vmulq_f32(v69, vrsqrtsq_f32(v69, vmulq_f32(v67, v69)))),
        vceqzq_f32(v67));
    v71 = fabsf(v65 * fabsf(LANES128(v70).n128_f32[0]));
    v72 = LANES128(v60).n128_f32[1];
    if ((LANES64_OF(vmovn_s32(vcgtq_f32(v60, v58))).n64_u8[0] & 1) == 0) {
      if ((LANES64_OF(vmovn_s32(vcgtq_f32(v58, v60))).n64_u8[0] & 1) == 0) {
        v73 = LANES128(v60).n128_f32[0];
        goto LABEL_101;
      }
      v73 = LANES128(v60).n128_f32[0] + v71;
      if (v73 <= LANES128(v58).n128_f32[0]) {
        goto LABEL_101;
      }
    LABEL_99:
      v73 = LANES128(v58).n128_f32[0];
      goto LABEL_101;
    }
    v73 = LANES128(v60).n128_f32[0] - v71;
    if (v73 < LANES128(v58).n128_f32[0]) {
      goto LABEL_99;
    }
  LABEL_101:
    LANES128(v60).n128_u32[0] = LANES128(v60).n128_u32[2];
    v74 = fabsf(v65 * fabsf(LANES128(v70).n128_f32[1]));
    if (LANES128(v60).n128_f32[1] > LANES128(v58).n128_f32[1]) {
      v72 = LANES128(v60).n128_f32[1] - v74;
      if ((float)(LANES128(v60).n128_f32[1] - v74) >=
          LANES128(v58).n128_f32[1]) {
        goto LABEL_107;
      }
    LABEL_106:
      v72 = LANES128(v58).n128_f32[1];
      goto LABEL_107;
    }
    if (LANES128(v60).n128_f32[1] < LANES128(v58).n128_f32[1]) {
      v72 = LANES128(v60).n128_f32[1] + v74;
      if ((float)(LANES128(v60).n128_f32[1] + v74) >
          LANES128(v58).n128_f32[1]) {
        goto LABEL_106;
      }
    }
  LABEL_107:
    v75 = fabsf(v65 * fabsf(LANES128(v70).n128_f32[2]));
    if (LANES128(v60).n128_f32[2] > LANES128(v58).n128_f32[2]) {
      LANES128(v60).n128_f32[0] = LANES128(v60).n128_f32[2] - v75;
      if ((float)(LANES128(v60).n128_f32[2] - v75) >=
          LANES128(v58).n128_f32[2]) {
        goto LABEL_113;
      }
    LABEL_112:
      LANES128(v60).n128_u32[0] = LANES128(v58).n128_u32[2];
      goto LABEL_113;
    }
    if (LANES128(v60).n128_f32[2] < LANES128(v58).n128_f32[2]) {
      LANES128(v60).n128_f32[0] = LANES128(v60).n128_f32[2] + v75;
      if ((float)(LANES128(v60).n128_f32[2] + v75) >
          LANES128(v58).n128_f32[2]) {
        goto LABEL_112;
      }
    }
  LABEL_113:
    v76 = *(_QWORD*)(a1 + 8);
    LANES128(v77).n128_u64[0] = __PAIR64__(LODWORD(v72), LODWORD(v73));
    LANES128(v77).n128_u64[1] = LANES128(v60).n128_u32[0];
    if (*(_BYTE*)(v76 + 976) != 1) {
      v131 = v77;
      *(float32x4_t*)(v76 + 960) = v77;
      *(_BYTE*)(v76 + 976) = 1;
      goto LABEL_119;
    }
    v78 = *(_OWORD*)(v76 + 960);
    if (*(float*)&v78 != v73 || *((float*)&v78 + 1) != v72 ||
        *((float*)&v78 + 2) != LANES128(v60).n128_f32[0]) {
      *(float*)(v76 + 960) = v73;
      *(float*)(v76 + 964) = v72;
      v79 = *(_OWORD*)(v76 + 960);
      v131 = v77;
      *((_QWORD*)&v79 + 1) = LANES128(v60).n128_u32[0];
      *(_OWORD*)(v76 + 960) = v79;
    LABEL_119:
      GameRoutine_dfa900(v76),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v77 = v131;
      v58 = v133;
    }
    v80 = vsubq_f32(v77, v58);
    v29 = COERCE_LONG_DOUBLE(vmulq_f32(v80, v80));
    *(float32x2_t*)&v29 = vadd_f32(
        COERCE_AS(float32x2_t, LANES128_OF(vextq_s8(*(int8x16_t*)&v29,
                                                    *(int8x16_t*)&v29, 8u))
                                   .n128_u64[0]),
        *(float32x2_t*)&v29);
    *(float32x2_t*)&v29 = vpadd_f32(*(float32x2_t*)&v29, *(float32x2_t*)&v29);
    if (*(float*)&v29 < (float)(v42 * v42)) {
      v81 = *(_DWORD*)(a1 + 104);
      switch (v81) {
      case 3:
        v83 = *(_DWORD*)(a1 + 108);
        if (game_GameModeData_instance_ != 0) {
          v84 = (*(_DWORD*)(game_GameModeData_instance_ + 72) + v83) &
                ~((*(_DWORD*)(game_GameModeData_instance_ + 72) + v83) >> 31);
          if (v84 >= 9999999) {
            v84 = 9999999;
          }
          *(_DWORD*)(game_GameModeData_instance_ + 72) = v84;
        }
        if (*(_QWORD*)GameData_2130f48 != 0) {
          GameHr_17cbee0(*(_QWORD*)GameData_2130f48, v83),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        break;
      case 2:
        if (*(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 200LL) != 0) {
          v82 = *(_DWORD*)(a1 + 108);
          GameHr_eb62f0(v82),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          if (*(_QWORD*)GameData_2130f48 != 0) {
            GameHr_17cbfa0(*(_QWORD*)GameData_2130f48, v82),
                v29 = COERCE_AS(__typeof__(v29),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
        }
        break;
      case 1:
        ItemSupport_f2e340(),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
        break;
      default:
        break;
      }
      v85 = GameHr_14a1520((__int64*)(a1 + 88), 1),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v86 = (__int64**)GameData_212dc48[0];
      v87 = *(_QWORD*)GameData_212dc48[0];
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0) {
        v85 = __cxa_guard_acquire_alt1((__int64)&GameData_21a6130),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if ((_DWORD)v85 != 0) {
          v126 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v126;
          __cxa_guard_release_alt1((__int64)&GameData_21a6130),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      game_hub_e1b4d0_alt1((void*)(v145_.v145), v85, 11),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
      game_hub_e1bfe0((void*)(&v143_.v143), v87, (__int64)v145_.v145,
                      (__int64*)&GameData_21a6120),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v88 = (__int64*)fw_memory_g_heap_manager_ptr;
      if ((v145_.v145[0] & 1) != 0 && v145_.v146 != 0) {
        v89 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v89 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v89, v145_.v146),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v90 = fw_memory_HeapManager_Allocate_alt1(*v88, 296, 16, 0),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
      *(_DWORD*)(v90 + 48) = 0x2000;
      v91 = GameData_2131678;
      *(_WORD*)(v90 + 108) = 256;
      *(_QWORD*)(v90 + 16) = 0;
      *(_QWORD*)(v90 + 24) = 0;
      *(_DWORD*)(v90 + 32) = 0;
      *(_QWORD*)(v90 + 40) = 0;
      *(_DWORD*)(v90 + 104) = 0;
      *(_QWORD*)(v90 + 56) = 0;
      *(_QWORD*)(v90 + 64) = 0;
      *(_QWORD*)(v90 + 72) = 0;
      *(_WORD*)(v90 + 80) = 0;
      *(_DWORD*)(v90 + 112) = -1082130432;
      *(_WORD*)(v90 + 116) = 0;
      *(_WORD*)(v90 + 136) = 0;
      *(_BYTE*)(v90 + 160) = 0;
      *(_BYTE*)(v90 + 288) = 0;
      *(_QWORD*)(v90 + 272) = 0;
      *(_QWORD*)(v90 + 280) = 0;
      *(_QWORD*)(v90 + 256) = 0;
      *(_QWORD*)(v90 + 264) = 0;
      *(_QWORD*)(v90 + 240) = 0;
      *(_QWORD*)(v90 + 248) = 0;
      *(_QWORD*)(v90 + 224) = 0;
      *(_QWORD*)(v90 + 232) = 0;
      *(_QWORD*)(v90 + 208) = 0;
      *(_QWORD*)(v90 + 216) = 0;
      *(_QWORD*)(v90 + 192) = 0;
      *(_QWORD*)(v90 + 200) = 0;
      *(_QWORD*)(v90 + 176) = 0;
      *(_QWORD*)(v90 + 184) = 0;
      *(_QWORD*)(v90 + 168) = 0;
      *(_QWORD*)(v90 + 120) = 0;
      *(_DWORD*)(v90 + 127) = 0;
      v137_.v140 = v90;
      v141_.v142 = nullptr;
      *(_QWORD*)v90 = v91 + 16;
      *(_QWORD*)(v90 + 8) = 0;
      *(_DWORD*)(v90 + 292) = 2;
      v92 = v143_.v143;
      v93 = v143_.v144;
      if (v143_.v144 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v143_.v144 + 8), 1u,
                                  memory_order_relaxed);
        v90 = v137_.v140;
        v137_.v139 = v92;
        v137_.v140 = v93;
        if (v90 == 0) {
          goto LABEL_147;
        }
      }
      else {
        v137_.v139 = v143_.v143;
        v137_.v140 = 0;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v90 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v94 = v90;
        (*(void (**)(__int64))(*(_QWORD*)v90 + 16LL))(v90),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v94),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v93 = v137_.v140;
      if (v137_.v140 == 0) {
      LABEL_149:
        v145_.v147 = v145_.v145;
        v145_.v145[0] = GameData_1fe26b0;
        GameRoutine_ccc9b0(v145_.v145, v141_.v141),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v145_.v147 == v145_.v145) {
          v95 = 32;
        }
        else {
          if (v145_.v147 == nullptr) {
            goto LABEL_154;
          }
          v95 = 40;
        }
        (*(void (**)(__int64))(*v145_.v147 + v95))((__int64)v145_.v147),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
      LABEL_154:
        v96 = *v86;
        v135_.v135 = v137_.v139;
        v135_.v136 = v137_.v140;
        if (v137_.v140 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v137_.v140 + 8),
                                    1u, memory_order_relaxed);
        }
        if (v141_.v142 != nullptr) {
          if (v141_.v142 == v141_.v141) {
            v137_.v138 = v137_.v137;
            (*(void (**)(__int64))(*v141_.v142 + 24LL))((__int64)v141_.v142),
                v29 = COERCE_AS(__typeof__(v29),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          else {
            v137_.v138 = (_BYTE*)(*(__int64 (**)(__int64))(*v141_.v142 + 16LL))(
                (__int64)v141_.v142),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
        }
        else {
          v137_.v138 = nullptr;
        }
        v97 = (__int64**)v96[5];
        if ((unsigned __int64)v97 >= v96[6]) {
          v99 = game_hub_e1cee0(v96 + 4, &v135_.v135),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          *v97 = v135_.v135;
          v98 = v135_.v136;
          v97[1] = (__int64*)v135_.v136;
          if (v98 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v98 + 8), 1u,
                                      memory_order_relaxed);
          }
          if (v137_.v138 != nullptr) {
            if (v137_.v138 == v137_.v137) {
              v97[6] = (__int64*)(v97 + 2);
              (*(void (**)(_BYTE*))(*(_QWORD*)v137_.v138 + 24LL))(v137_.v138),
                  v29 = COERCE_AS(__typeof__(v29),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            else {
              v97[6] = (__int64*)(*(__int64 (**)(__int64))(
                  *(_QWORD*)v137_.v138 + 16LL))((__int64)v137_.v138),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
          }
          else {
            v97[6] = nullptr;
          }
          v99 = v97 + 8;
        }
        v96[5] = (__int64)v99;
        if (v137_.v138 == v137_.v137) {
          v100 = 32;
        }
        else {
          if (v137_.v138 == nullptr) {
          LABEL_176:
            v101 = v135_.v136;
            if (v135_.v136 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v135_.v136 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v101 + 16LL))(v101),
                  v29 = COERCE_AS(__typeof__(v29),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
              std___1___shared_weak_count___release_weak_alt1(v101),
                  v29 = COERCE_AS(__typeof__(v29),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            v102 = *(_QWORD*)(a1 + 8);
            v103 = *(_QWORD*)(v102 + 816);
            if (v103 != 0) {
              v105 = *(_QWORD*)(*(_QWORD*)(v102 + 800) + 8LL);
              v104 = *(_QWORD*)(*(_QWORD*)(v102 + 800) + 16LL);
              if (v104 != v105) {
                while (1) {
                  v106 = *(_QWORD*)(v105 + 8);
                  if (*(_DWORD*)(v106 + 284) == 2) {
                    break;
                  }
                  v105 += 32;
                  if (v105 == v104) {
                    goto LABEL_185;
                  }
                }
                game_989ea0(v103, 1, v106),
                    v29 = COERCE_AS(__typeof__(v29),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
            }
          LABEL_185:
            if (*(_DWORD*)(a1 + 104) == 2) {
              strcpy((char*)v134, "&SE_SYS_Recovery_Get");
            }
            else {
              LOBYTE(v134[0]) = 30;
              strcpy((char*)v134 + 1, "SE_SYS_Item_Get");
            }
            snd_Fade_Fade_10c830((__int64)v145_.v145, 0x0.0p+0f),
                v29 = COERCE_AS(__typeof__(v29),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            snd_play_ff2d0((__int64)v134 + 1, (__int64)v134 + 1,
                           (__int64)v145_.v145, 0, 0x10001u, 0, 0x0.0p+0f,
                           0x1.0000000000000p+0f),
                v29 = COERCE_AS(__typeof__(v29),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            snd_Fade_Destroy_Fade(v145_.v145),
                v29 = COERCE_AS(__typeof__(v29),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            if ((v134[0] & 1) != 0 && v134[2] != 0) {
              v107 = 128;
              if (*(_QWORD*)(*v88 + 200) == 0) {
                v107 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v88 + v107, v134[2]),
                  v29 = COERCE_AS(__typeof__(v29),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            v108 = *(_QWORD*)(a1 + 8);
            game_hub_dfc000(v108),
                v29 = COERCE_AS(__typeof__(v29),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            v109 = GameHr_dbc2c0(*(_QWORD**)GameData_212c6a0[0], v108),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
            if (v109 != 0) {
              *(_BYTE*)(v109 + 8) = 0;
            }
            if (v141_.v142 == v141_.v141) {
              v110 = 32;
            }
            else {
              if (v141_.v142 == nullptr) {
                goto LABEL_200;
              }
              v110 = 40;
            }
            (*(void (**)(__int64))(*v141_.v142 + v110))((__int64)v141_.v142),
                v29 = COERCE_AS(__typeof__(v29),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          LABEL_200:
            v111 = v137_.v140;
            if (v137_.v140 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v137_.v140 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v111 + 16LL))(v111),
                  v29 = COERCE_AS(__typeof__(v29),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
              std___1___shared_weak_count___release_weak_alt1(v111),
                  v29 = COERCE_AS(__typeof__(v29),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            v112 = v143_.v144;
            if (v143_.v144 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v143_.v144 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v112 + 16LL))(v112),
                  v29 = COERCE_AS(__typeof__(v29),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
              std___1___shared_weak_count___release_weak_alt1(v112),
                  v29 = COERCE_AS(__typeof__(v29),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            goto LABEL_206;
          }
          v100 = 40;
        }
        (*(void (**)(__int64))(*(_QWORD*)v137_.v138 + v100))(
            (__int64)v137_.v138),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
        goto LABEL_176;
      }
    LABEL_147:
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v93 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v93 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v93 + 16LL))(v93),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v93),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      goto LABEL_149;
    }
  LABEL_206:
    if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v28 + 16LL))(v28, v29),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
      std___1___shared_weak_count___release_weak_alt1(v28),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  LABEL_209:
    v113 = *(_QWORD*)(a1 + 8);
    if ((*(_BYTE*)(v113 + 976) & 1) != 0) {
      v114 = (__int128*)(v113 + 960);
    }
    else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                   memory_order_acquire) &
              1) != 0) {
      v114 = &GameData_21a6120;
    }
    else {
      v114 = &GameData_21a6120;
      if (__cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
        v122 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v122;
        __cxa_guard_release_alt1((__int64)&GameData_21a6130),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    v115 = *(_QWORD*)(a1 + 88);
    v116 = *(_QWORD*)v115;
    if (*(_QWORD*)v115 != 0 && *(_DWORD*)(v116 + 16) == *(_DWORD*)(v115 + 8)) {
      v117 = *(_DWORD*)(v116 + 36);
      if (v117 != 0) {
        v118 = *v114;
        for (i = 0; i < v117; ++i) {
          if ((int)v117 > (int)i) {
            v120 = *(_QWORD*)(v116 + 40 + 8LL * (int)i);
            if (v120 != 0) {
              *(_OWORD*)(v120 + 16) = v118;
              *(_BYTE*)(v120 + 128) = 1;
              v117 = *(_DWORD*)(v116 + 36);
            }
          }
        }
      }
    }
    return game_14a3920(v115);
  }
  v40 = 0x1.0000000000000p+0f;
  goto LABEL_68;
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
