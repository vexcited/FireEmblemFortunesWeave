#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1950850(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD);
__int64 GameRoutine_14107c0(_QWORD, _QWORD);
__int64 GameRoutine_14127e0(_QWORD, _QWORD);
__int64 GameRoutine_1958ed0(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 SceneCharacter_1400a90(_QWORD, _QWORD);
__int64 SceneManager_138e5e0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_facility_ReleaseGroups(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _DWORD* GameData_2130fb8;
extern __int64 (*GameData_203be98[])();
extern __int64 (*GameData_203bf18[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_212dd18[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2132488;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
_QWORD* game_facility_anonymous_ProcReaction_ResetMotion(__int64 a1);
_QWORD* game_facility_anonymous_ProcReaction_PlayMobMotion(__int64 a1);
_QWORD* ProcReaction_1430380(__int64 a1, __int64 a2);
__int64 ProcReaction_Destructor(__int64* a1);
__int64 ProcReaction_DeletingDestructor(__int64* a1);
__int64 GameRoutine_2b0();
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
extern _UNKNOWN GameData_224ae08;
extern __int64 GameData_224ae20;
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_facility_anonymous_ProcReaction_StartCameraWork_closure1_Invoke();
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
__int64 SceneManager_138c8e0(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy(__int64, __int64, unsigned __int64);
extern __int64 (*GameData_20330a8[])();
extern __int64 (*GameData_2033128[])();
extern __int64 fw_memory_g_heap_manager;
extern char GameData_1a9f09e;
unsigned __int64 strlen(const char*);
void SceneManager_138d7c0(__int64, __int64, __int64);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_facility_anonymous_ProcReaction_ResetMotion_closure_Invoke(
    __int64 a1, const char** a2);
void game_facility_anonymous_ProcReaction_PlayMobMotion_closure_Invoke(
    __int64 a1, const char** a2);

_QWORD* game_facility_anonymous_ProcReaction_ResetMotion(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD v13[4];
  _QWORD* v14;

  v2 = (_QWORD*)GameData_212dce8;
  v3 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8, 0);
  if (v3 != 0) {
    LOWORD(v13[0]) = 257;
    BYTE2(v13[0]) = 1;
    SceneCharacter_1400a90(v3, v13);
  }
  v4 = SceneManager_138e5e0(*v2, 1);
  if (v4 != 0) {
    LOWORD(v13[0]) = 257;
    BYTE2(v13[0]) = 1;
    SceneCharacter_1400a90(v4, v13);
  }
  result = v13;
  v6 = *(_QWORD*)(*(_QWORD*)(a1 + 184) + 32LL);
  v14 = v13;
  v13[0] = GameData_203be98;
  if (*(_WORD*)(v6 + 160) == 0) {
    goto LABEL_10;
  }
  v7 = 8LL * *(unsigned __int16*)(v6 + 160);
  v8 = 0;
  do {
    v9 = v14;
    if (v14 == nullptr) {
    LABEL_21:
      GameRoutine_60a310(v9);
    }
    (*(void (**)(_QWORD*, __int64))(*v14 + 48LL))(v14,
                                                  *(_QWORD*)(v6 + 168) + v8);
    v8 += 8;
  } while (v7 != v8);
  result = v14;
  if (v14 != nullptr) {
  LABEL_10:
    if (*(_WORD*)(v6 + 192) != 0) {
      v10 = 8LL * *(unsigned __int16*)(v6 + 192);
      v11 = 0;
      do {
        v9 = v14;
        if (v14 == nullptr) {
          goto LABEL_21;
        }
        (*(void (**)(_QWORD*, __int64))(*v14 + 48LL))(
            v14, *(_QWORD*)(v6 + 200) + v11);
        v11 += 8;
      } while (v10 != v11);
      result = v14;
    }
    if (result == v13) {
      v12 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v12 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v12))(result);
  }
  return result;
}

_QWORD* game_facility_anonymous_ProcReaction_PlayMobMotion(__int64 a1)
{
  __int64 v1;
  _QWORD* result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[4];
  _QWORD* v11;

  v1 = *(_QWORD*)(a1 + 184);
  result = v10;
  v3 = *(_QWORD*)(v1 + 32);
  v11 = v10;
  v10[0] = GameData_203bf18;
  if (*(_WORD*)(v3 + 160) == 0) {
    goto LABEL_6;
  }
  v4 = 8LL * *(unsigned __int16*)(v3 + 160);
  v5 = 0;
  do {
    v6 = v11;
    if (v11 == nullptr) {
    LABEL_17:
      GameRoutine_60a310(v6);
    }
    (*(void (**)(_QWORD*, __int64))(*v11 + 48LL))(v11,
                                                  *(_QWORD*)(v3 + 168) + v5);
    v5 += 8;
  } while (v4 != v5);
  result = v11;
  if (v11 != nullptr) {
  LABEL_6:
    if (*(_WORD*)(v3 + 192) != 0) {
      v7 = 8LL * *(unsigned __int16*)(v3 + 192);
      v8 = 0;
      do {
        v6 = v11;
        if (v11 == nullptr) {
          goto LABEL_17;
        }
        (*(void (**)(_QWORD*, __int64))(*v11 + 48LL))(
            v11, *(_QWORD*)(v3 + 200) + v8);
        v8 += 8;
      } while (v7 != v8);
      result = v11;
    }
    if (result == v10) {
      v9 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v9 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v9))(result);
  }
  return result;
}

void game_facility_anonymous_ProcReaction_ResetMotion_closure_Invoke(
    __int64 a1, const char** a2)
{
  __int64 v2;
  const char* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v10[2];
    char* v11;
  } v10_;
  struct {
    __int64 (**v12)();
    __int16 v13;
    char v14;
    char gap43_[21];
    __int64 (***v15)();
  } v12_;

  v2 = *(_QWORD*)GameData_212dce8;
  if (*a2 != nullptr) {
    v3 = *a2;
  }
  else {
    v3 = &GameData_1a9f09e;
  }
  v4 = strlen(v3);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v7, 16, 0);
    v10_.v10[1] = v5;
    v10_.v11 = v6;
    v10_.v10[0] = v7 | 1;
    goto LABEL_12;
  }
  LOBYTE(v10_.v10[0]) = 2 * v4;
  v6 = (char*)v10_.v10 + 1;
  if (v4 != 0) {
  LABEL_12:
    memcpy((__int64)v6, (__int64)v3, v5);
  }
  v6[v5] = 0;
  if ((SceneManager_138c8e0(v2, (__int64)v10_.v10) & 1) != 0) {
    v12_.v12 = GameData_2033128;
    v12_.v15 = &v12_.v12;
    v12_.v14 = 1;
    v12_.v13 = 257;
    SceneManager_138d7c0(v2, (__int64)v10_.v10, (__int64)&v12_.v12);
    if (v12_.v15 == &v12_.v12) {
      v8 = 4;
      goto LABEL_18;
    }
    if (v12_.v15 != nullptr) {
      v8 = 5;
    LABEL_18:
      ((__int64 (*)(__int64))(*v12_.v15)[v8])((__int64)v12_.v15);
    }
  }
  if ((v10_.v10[0] & 1) != 0 && v10_.v11 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, (__int64)v10_.v11);
  }
}

void game_facility_anonymous_ProcReaction_PlayMobMotion_closure_Invoke(
    __int64 a1, const char** a2)
{
  __int64 v2;
  const char* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v10[2];
    char* v11;
  } v10_;
  struct {
    __int64 (**v12)();
    int v13;
    char gap44_[20];
    __int64 (***v14)();
  } v12_;

  v2 = *(_QWORD*)GameData_212dce8;
  if (*a2 != nullptr) {
    v3 = *a2;
  }
  else {
    v3 = &GameData_1a9f09e;
  }
  v4 = strlen(v3);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v7, 16, 0);
    v10_.v10[1] = v5;
    v10_.v11 = v6;
    v10_.v10[0] = v7 | 1;
    goto LABEL_12;
  }
  LOBYTE(v10_.v10[0]) = 2 * v4;
  v6 = (char*)v10_.v10 + 1;
  if (v4 != 0) {
  LABEL_12:
    memcpy((__int64)v6, (__int64)v3, v5);
  }
  v6[v5] = 0;
  if ((SceneManager_138c8e0(v2, (__int64)v10_.v10) & 1) != 0) {
    v12_.v12 = GameData_20330a8;
    v12_.v14 = &v12_.v12;
    v12_.v13 = 4;
    SceneManager_138d7c0(v2, (__int64)v10_.v10, (__int64)&v12_.v12);
    if (v12_.v14 == &v12_.v12) {
      v8 = 4;
      goto LABEL_18;
    }
    if (v12_.v14 != nullptr) {
      v8 = 5;
    LABEL_18:
      ((__int64 (*)(__int64))(*v12_.v14)[v8])((__int64)v12_.v14);
    }
  }
  if ((v10_.v10[0] & 1) != 0 && v10_.v11 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, (__int64)v10_.v11);
  }
}

_QWORD* ProcReaction_1430380(__int64 a1, __int64 a2)
{
  int v3;
  _QWORD* result;
  __int64 v5;
  unsigned int v6;
  _QWORD* v7;
  int v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
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
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;

  v3 = a2;
  result = (_QWORD*)SceneManager_138e5e0(*(_QWORD*)GameData_212dce8, a2);
  if (result != nullptr) {
    v5 = 40;
    if (v3 != 0) {
      v5 = 41;
    }
    v6 = *(unsigned __int8*)(*(_QWORD*)(a1 + 184) + v5);
    if (v6 <= 5) {
      v7 = result;
      v8 = 1 << v6;
      if ((v8 & 0x2C) != 0) {
        v9 = (_QWORD*)fw_memory_g_heap_manager_ptr;
        v10 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
        *(_BYTE*)(v10 + 48) = 0;
        v35 = 57;
        v36 = 48;
        v37 = v10;
        *(_QWORD*)(v10 + 16) = 0xB383E3A783E3B782LL;
        *(_QWORD*)(v10 + 24) = 0x5F878AE5B3A6E85FLL;
        *(_QWORD*)(v10 + 32) = 0xB8E49EB3E89191E9LL;
        *(_QWORD*)(v10 + 40) = 0xBDA5E5AF89E85FADLL;
        *(_QWORD*)v10 = 0x83E3A383E3AD82E3LL;
        *(_QWORD*)(v10 + 8) = 0xE3BC83E3A283E3A9LL;
        GameRoutine_14107c0(&v38, &v35);
        v11 = v7[14];
        v12 = v7[15];
        if (v12 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                    memory_order_relaxed);
          GameRoutine_14127e0(v11, &v38);
          if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
            std___1___shared_weak_count___release_weak(v12);
          }
        }
        else {
          GameRoutine_14127e0(v11, &v38);
        }
        if ((v38 & 1) != 0 && v40 != 0) {
          v16 = 128;
          if (*(_QWORD*)(*v9 + 200LL) == 0) {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free(*v9 + v16, v40);
        }
        if ((v35 & 1) != 0 && v37 != 0) {
          v17 = 128;
          if (*(_QWORD*)(*v9 + 200LL) == 0) {
            v17 = 56;
          }
          nn_mem_StandardAllocator_Free(*v9 + v17, v37);
        }
        v18 = fw_memory_HeapManager_Allocate(*v9, 40, 16, 0);
        *(_BYTE*)(v18 + 32) = 0;
        v38 = 41;
        v39 = 32;
        v40 = v18;
        *(_QWORD*)v18 = 0xE35F878AE5B3A6E8LL;
        *(_QWORD*)(v18 + 8) = 0xAF82E3A282E3AA83LL;
        *(_QWORD*)(v18 + 16) = 0x83E3A783E3B782E3LL;
        *(_QWORD*)(v18 + 24) = 0xBDA5E5AF89E85FB3LL;
        result =
            X8CALL_X0(_QWORD*, GameRoutine_1950850((void*)&v33, &v38, v7, 1));
        v19 = v34;
        if (v34 == 0) {
          goto LABEL_43;
        }
        goto LABEL_41;
      }
      if ((v8 & 0x11) != 0) {
        v9 = (_QWORD*)fw_memory_g_heap_manager_ptr;
        v13 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
        *(_BYTE*)(v13 + 48) = 0;
        v35 = 57;
        v36 = 48;
        v37 = v13;
        *(_QWORD*)(v13 + 16) = 0xB383E3A783E3B782LL;
        *(_QWORD*)(v13 + 24) = 0x5F878AE5B3A6E85FLL;
        *(_QWORD*)(v13 + 32) = 0xB8E49EB3E89191E9LL;
        *(_QWORD*)(v13 + 40) = 0xAA82E6809CE65FADLL;
        *(_QWORD*)v13 = 0x83E3A383E3AD82E3LL;
        *(_QWORD*)(v13 + 8) = 0xE3BC83E3A283E3A9LL;
        GameRoutine_14107c0(&v38, &v35);
        v14 = v7[14];
        v15 = v7[15];
        if (v15 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                    memory_order_relaxed);
          GameRoutine_14127e0(v14, &v38);
          if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
            std___1___shared_weak_count___release_weak(v15);
          }
        }
        else {
          GameRoutine_14127e0(v14, &v38);
        }
        if ((v38 & 1) != 0 && v40 != 0) {
          v24 = 128;
          if (*(_QWORD*)(*v9 + 200LL) == 0) {
            v24 = 56;
          }
          nn_mem_StandardAllocator_Free(*v9 + v24, v40);
        }
        if ((v35 & 1) != 0 && v37 != 0) {
          v25 = 128;
          if (*(_QWORD*)(*v9 + 200LL) == 0) {
            v25 = 56;
          }
          nn_mem_StandardAllocator_Free(*v9 + v25, v37);
        }
        v26 = fw_memory_HeapManager_Allocate(*v9, 40, 16, 0);
        *(_BYTE*)(v26 + 32) = 0;
        v38 = 41;
        v39 = 32;
        v40 = v26;
        *(_QWORD*)v26 = 0xE35F878AE5B3A6E8LL;
        *(_QWORD*)(v26 + 8) = 0xAF82E3A282E3AA83LL;
        *(_QWORD*)(v26 + 16) = 0x83E3A783E3B782E3LL;
        *(_QWORD*)(v26 + 24) = 0xAA82E6809CE65FB3LL;
        result =
            X8CALL_X0(_QWORD*, GameRoutine_1950850((void*)&v31, &v38, v7, 1));
        v19 = v32;
        if (v32 != 0) {
        LABEL_41:
          if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
            result = (_QWORD*)std___1___shared_weak_count___release_weak(v19);
          }
        }
      LABEL_43:
        if ((v38 & 1) == 0) {
          return result;
        }
        v27 = v40;
        if (v40 == 0) {
          return result;
        }
        v28 = *v9;
        goto LABEL_46;
      }
      v20 = fw_memory_g_heap_manager_ptr;
      v21 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
      *(_BYTE*)(v21 + 48) = 0;
      v35 = 57;
      v36 = 48;
      v37 = v21;
      *(_QWORD*)(v21 + 16) = 0xB383E3A783E3B782LL;
      *(_QWORD*)(v21 + 24) = 0x5F878AE5B3A6E85FLL;
      *(_QWORD*)(v21 + 32) = 0xB8E49EB3E89191E9LL;
      *(_QWORD*)(v21 + 40) = 0x9A80E9AE99E65FADLL;
      *(_QWORD*)v21 = 0x83E3A383E3AD82E3LL;
      *(_QWORD*)(v21 + 8) = 0xE3BC83E3A283E3A9LL;
      GameRoutine_14107c0(&v38, &v35);
      v22 = v7[14];
      v23 = v7[15];
      if (v23 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                                  memory_order_relaxed);
        result = (_QWORD*)GameRoutine_14127e0(v22, &v38);
        if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
          result = (_QWORD*)std___1___shared_weak_count___release_weak(v23);
        }
      }
      else {
        result = (_QWORD*)GameRoutine_14127e0(v22, &v38);
      }
      if ((v38 & 1) != 0 && v40 != 0) {
        v30 = 128;
        if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
          v30 = 56;
        }
        result =
            (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v30, v40);
      }
      if ((v35 & 1) != 0) {
        v27 = v37;
        if (v37 != 0) {
          v28 = *(_QWORD*)v20;
        LABEL_46:
          v29 = 128;
          if (*(_QWORD*)(v28 + 200) == 0) {
            v29 = 56;
          }
          return (_QWORD*)nn_mem_StandardAllocator_Free(v28 + v29, v27);
        }
      }
    }
  }
  return result;
}

__int64 game_facility_anonymous_ProcReaction_StartCameraWork_closure1_Invoke()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 result;
  float v4;
  __int64* v5;
  __int64* v6;
  float v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  _QWORD v12[33];

  result = GameData_224ae20;
  if (GameData_224ae20 != 0) {
    v4 = 0x1.0000000000000p-1f;
    v12[25] = v2;
    v12[26] = v0;
    v12[27] = v1;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_224ae08,
                              memory_order_acquire) &
         1) == 0) {
      v9 = result;
      v10 = __cxa_guard_acquire_alt1((__int64)&GameData_224ae08);
      v4 = 0x1.0000000000000p-1f;
      v11 = v10;
      result = v9;
      if (v11 != 0) {
        GameRoutine_2b0();
        __cxa_guard_release_alt1((__int64)&GameData_224ae08);
        v4 = 0x1.0000000000000p-1f;
        result = v9;
      }
    }
    v5 = *(__int64**)(result + 32);
    v6 = *(__int64**)(result + 40);
    if (v5 != v6) {
      v7 = v4 * 0x1.f400000000000p+9f;
      do {
        result = snd_fnd_WeakHandle_isValid(v5);
        if ((result & 1) != 0) {
          v8 = snd_fnd_WeakHandle_get((__int64)v5);
          snd_Fade_Fade_10c830((__int64)v12, v7);
          (*(void (**)(__int64, _QWORD*, _QWORD, double))(
              *(_QWORD*)(v8 - 5592) + 248LL))(v8 - 5592, v12, 0, 0x0.0p+0);
          result = snd_Fade_Destroy_Fade(v12);
        }
        v5 += 2;
      } while (v5 != v6);
    }
  }
  return result;
}

__int64 ProcReaction_Destructor(__int64* a1)
{
  __int64 v2;
  __int64* v3;
  _QWORD* v4;
  __int64 v5;

  v2 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  v3 = a1 - 19;
  *a1 = v2;
  GameRoutine_1958ed0(a1, a1 - 19);
  *a1 = (__int64)(GameData_2132488 + 2);
  v4 = (_QWORD*)GameData_212dce8;
  v5 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 24LL))(v5);
    if (*v4 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v4 + 8LL))(*v4);
    }
    *v4 = 0;
  }
  game_facility_ReleaseGroups();
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister(v3);
  return GameRoutine_658c00(a1 - 8);
}

__int64 ProcReaction_DeletingDestructor(__int64* a1)
{
  __int64 v2;
  __int64* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v7;

  v2 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  v3 = a1 - 19;
  *a1 = v2;
  GameRoutine_1958ed0(a1, a1 - 19);
  *a1 = (__int64)(GameData_2132488 + 2);
  v4 = (_QWORD*)GameData_212dce8;
  v5 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 24LL))(v5);
    if (*v4 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v4 + 8LL))(*v4);
    }
    *v4 = 0;
  }
  game_facility_ReleaseGroups();
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister(v3);
  GameRoutine_658c00(a1 - 8);
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v3);
}

#pragma GCC visibility pop
