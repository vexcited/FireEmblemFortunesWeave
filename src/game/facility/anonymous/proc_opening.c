#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1958ed0(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_HashString(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_facility_ReleaseGroups(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _DWORD* GameData_2130fb8;
extern __int64 (*GameData_203be08[])();
extern __int64 (*game_facility_anonymous_ProcOpening_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_212dd18[3];
extern __int64 GameData_2241850;
extern __int64 GameData_22420e0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2132488;
__int64 ProcOpening_142ea60(__int64 a1);
void game_facility_anonymous_ProcOpening_PlaySpecialTelop_closure_Invoke();
__int64 ProcOpening_Destructor(__int64* a1);
__int64 ProcOpening_DeletingDestructor(__int64* a1);
__attribute__((swiftcall)) void game_facility_144f120(PSEUDO_X8, _QWORD,
                                                      _QWORD);
__int64 GameRoutine_1488900();
__int64 GameRoutine_1795980(__int64, int, __int64);
__int64 GameRoutine_1952d00(__int64, __int64, __int64);
__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD, float);
__int64 SceneCameraWorkUpdater_14559c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern _UNKNOWN* GameData_1f50948;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN GameData_1aa23e1;
extern _UNKNOWN GameData_1ac11d7;
extern _UNKNOWN GameData_1aeed23;
extern _UNKNOWN GameData_1afe408;
extern _UNKNOWN GameData_224adf0;
extern _UNKNOWN GameData_224ae08;
extern __int64 (*GameData_203bbd8[])();
extern __int64 (*GameData_203bc48[])();
extern __int64 (*GameData_203bcd8[])();
extern __int64 GameData_224ae20;
__int64 (***game_facility_anonymous_ProcOpening_StartCameraWork(
    __int64 (***result)()))();
__int64 game_facility_anonymous_ProcOpening_PlaySpecialTelop(__int64 result);
__int64 game_facility_anonymous_ProcOpening_StartCameraWork_closure0_Invoke();
__int64 GameRoutine_2b0_alt1() __asm__("GameRoutine_2b0");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_fnd_WeakHandle_get_alt1(__int64) __asm__("snd_fnd_WeakHandle_get");
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 GameRoutine_14127e0(__int64, unsigned __int8*);
__int64 SceneManager_138c8e0(__int64, __int64);
__int64 SceneManager_138e5e0(__int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_facility_14107c0(__int64, __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
char* game_util_Format(const char*, ...);
extern _UNKNOWN GameData_1aeed63;
extern __int64 (*GameData_20330a8[])();
extern __int64 (*GameData_203bad8[])();
extern __int64 (*GameData_203bb58[])();
extern __int64 fw_memory_g_heap_manager;
extern char GameData_1a9f09e;
extern char GameData_1afe562[];
unsigned __int64 strlen(const char*);
void SceneManager_138d7c0(__int64, __int64, __int64);
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 (***game_facility_anonymous_ProcOpening_PlayMotion(__int64 a1))();
void game_facility_anonymous_ProcOpening_PlayMotion_closure_Invoke(
    __int64 a1, const char** a2);
void game_facility_anonymous_ProcOpening_PlayMotion_closure0_Invoke(
    __int64 a1, const char** a2);

__int64 (***game_facility_anonymous_ProcOpening_PlayMotion(__int64 a1))()
{
  unsigned int v1;
  __int64* v2;
  __int64* v3;
  char v4;
  char v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 (***v17)();
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  int v24;
  __int64 (***result)();
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  struct {
    _QWORD v31[2];
    char* v32;
  } v31_;
  struct {
    __int64 (**v33)();
    int v34;
    char gap44_[4];
    __int64 v35;
    char gap56_[8];
    __int64 (***v36)();
  } v33_;

  v1 = 0;
  v2 = (__int64*)GameData_212dce8;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  v4 = 1;
  do {
    v5 = v4;
    v6 = SceneManager_138e5e0(*v2);
    if (v6 == 0) {
      goto LABEL_2;
    }
    v7 = v6;
    v8 = game_util_Format(GameData_1afe562, v1);
    v9 = strlen(v8);
    if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v10 = v9;
    if (v9 >= 0x17) {
      if ((v9 | 7) == 0x17) {
        v12 = 26;
      }
      else {
        v12 = (v9 | 7) + 1;
      }
      v11 = (char*)fw_memory_HeapManager_Allocate_alt1(*v3, v12, 16, 0);
      v31_.v31[1] = v10;
      v31_.v32 = v11;
      v31_.v31[0] = v12 | 1;
    LABEL_12:
      memmove((__int64)v11, (__int64)v8, v10);
      goto LABEL_13;
    }
    v11 = (char*)v31_.v31 + 1;
    LOBYTE(v31_.v31[0]) = 2 * v9;
    if (v9 != 0) {
      goto LABEL_12;
    }
  LABEL_13:
    v11[v10] = 0;
    game_facility_14107c0((__int64)&v33_.v33, (__int64)v31_.v31);
    v13 = *(_QWORD*)(v7 + 112);
    v14 = *(_QWORD*)(v7 + 120);
    if (v14 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                memory_order_relaxed);
      GameRoutine_14127e0(v13, (unsigned __int8*)&v33_.v33);
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak_alt1(v14);
      }
      if (((unsigned __int8)v33_.v33 & 1) == 0) {
        goto LABEL_23;
      }
    LABEL_19:
      if (v33_.v35 != 0) {
        v15 = 128;
        if (*(_QWORD*)(*v3 + 200) == 0) {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v3 + v15, v33_.v35);
      }
      goto LABEL_23;
    }
    GameRoutine_14127e0(v13, (unsigned __int8*)&v33_.v33);
    if (((unsigned __int8)v33_.v33 & 1) != 0) {
      goto LABEL_19;
    }
  LABEL_23:
    if ((v31_.v31[0] & 1) != 0 && v31_.v32 != nullptr) {
      v16 = 128;
      if (*(_QWORD*)(*v3 + 200) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v3 + v16, (__int64)v31_.v32);
    }
  LABEL_2:
    v1 = 1;
    v4 = 0;
  } while ((v5 & 1) != 0);
  v17 = &v33_.v33;
  v18 = *(_QWORD*)(*(_QWORD*)(a1 + 184) + 32LL);
  v33_.v36 = &v33_.v33;
  v33_.v33 = GameData_203bad8;
  if (*(_WORD*)(v18 + 192) == 0) {
    goto LABEL_35;
  }
  v19 = 8LL * *(unsigned __int16*)(v18 + 192);
  v20 = 0;
  do {
    if (v33_.v36 == nullptr) {
    LABEL_47:
      GameRoutine_60a310();
    }
    ((void (*)(__int64 (***)(void), __int64))(*v33_.v36)[6])(
        v33_.v36, *(_QWORD*)(v18 + 200) + v20);
    v20 += 8;
  } while (v19 != v20);
  v17 = v33_.v36;
  if (v33_.v36 == &v33_.v33) {
  LABEL_35:
    v21 = 4;
  LABEL_36:
    ((__int64 (*)(__int64))(*v17)[v21])((__int64)v17);
  }
  else if (v33_.v36 != nullptr) {
    v21 = 5;
    goto LABEL_36;
  }
  v22 = ProcOpening_142ea60((__int64)&GameData_1aeed63);
  v23 = *(_QWORD*)(a1 + 184);
  v24 = v22 - 1;
  result = &v33_.v33;
  v33_.v34 = v24;
  v26 = *(_QWORD*)(v23 + 32);
  v33_.v36 = &v33_.v33;
  v33_.v33 = GameData_203bb58;
  if (*(_WORD*)(v26 + 160) == 0) {
    goto LABEL_44;
  }
  v27 = 8LL * *(unsigned __int16*)(v26 + 160);
  v28 = 0;
  do {
    if (v33_.v36 == nullptr) {
      goto LABEL_47;
    }
    ((void (*)(__int64 (***)(void), __int64))(*v33_.v36)[6])(
        v33_.v36, *(_QWORD*)(v26 + 168) + v28);
    v28 += 8;
  } while (v27 != v28);
  result = v33_.v36;
  if (v33_.v36 == &v33_.v33) {
  LABEL_44:
    v29 = 4;
    return (__int64 (***)(void))((__int64 (*)(__int64))(*result)[v29])(
        (__int64)result);
  }
  else if (v33_.v36 != nullptr) {
    v29 = 5;
    return (__int64 (***)(void))((__int64 (*)(__int64))(*result)[v29])(
        (__int64)result);
  }
  return result;
}

__int64 (***game_facility_anonymous_ProcOpening_StartCameraWork(
    __int64 (***result)()))()
{
  __int64 v1;
  __int64 v2;
  __int64 (***v3)();
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 (**v17)();
  __int64 v18;
  __int64 v19;
  __int64 (***v20)();
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 (***v24)();
  __int64* v25;

  v1 = *(_QWORD*)(*(_QWORD*)GameData_212dce8 + 264LL);
  if (v1 != 0) {
    v2 = *(_QWORD*)(*(_QWORD*)GameData_212dce8 + 256LL);
    v3 = result;
    v4 = *(_QWORD*)(*(_QWORD*)GameData_212dce8 + 264LL);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                              memory_order_relaxed);
    v5 = std___1___shared_weak_count_lock(v4);
    result = (__int64 (***)())std___1___shared_weak_count___release_weak(v1);
    if (v5 != 0) {
      if (v2 == 0) {
      LABEL_26:
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          return (__int64 (***)())std___1___shared_weak_count___release_weak(
              v5);
        }
        return result;
      }
      v6 = fw_memory_g_heap_manager_ptr;
      if (*((_BYTE*)v3[23][4] + 72) == 3) {
        v7 = &GameData_1aa23e1;
      }
      else {
        v7 = &GameData_1ac11d7;
      }
      v8 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
      *(_BYTE*)(v8 + 39) = 0;
      v17 = (__int64 (**)())((*(__int64 (*)[2])0x28LL) + 1);
      v18 = 39;
      v19 = v8;
      v9 = v7[3];
      *(_QWORD*)(v8 + 16) = v7[2];
      *(_QWORD*)(v8 + 24) = v9;
      *(_QWORD*)(v8 + 31) = *(_QWORD*)((char*)v7 + 31);
      v10 = v7[1];
      *(_QWORD*)v8 = *v7;
      *(_QWORD*)(v8 + 8) = v10;
      result = (__int64 (***)())(game_facility_144f120((void*)(&v21), v2, &v17),
                                 (void*)(&v21));
      if (((unsigned __int8)v17 & 1) != 0 && v19 != 0) {
        v11 = 128;
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
          v11 = 56;
        }
        result = (__int64 (***)())nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)v6 + v11, (_QWORD)(v19));
      }
      v12 = v21;
      if (v21 == 0) {
        goto LABEL_23;
      }
      v17 = GameData_203bbd8;
      v18 = (__int64)v3;
      v20 = &v17;
      v23 = game_HashString(&GameData_1afe408);
      v24 = &v17;
      v25 = &v23;
      SceneCameraWorkUpdater_14559c0(
          v12 + 144, &v23, std___1_piecewise_construct_ptr, &v25, &v24);
      if (v20 == &v17) {
        v13 = 4;
      }
      else {
        if (v20 == nullptr) {
        LABEL_18:
          v14 = v21;
          v17 = GameData_203bcd8;
          v20 = &v17;
          v23 = game_HashString(&GameData_1aeed23);
          v24 = &v17;
          v25 = &v23;
          SceneCameraWorkUpdater_14559c0(
              v14 + 144, &v23, std___1_piecewise_construct_ptr, &v25, &v24);
          result = v20;
          if (v20 == &v17) {
            v15 = 4;
            goto LABEL_22;
          }
          if (v20 != nullptr) {
            v15 = 5;
          LABEL_22:
            result = (__int64 (***)())(*v20)[v15]();
          }
        LABEL_23:
          v16 = v22;
          if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
            result =
                (__int64 (***)())std___1___shared_weak_count___release_weak(
                    v16);
          }
          goto LABEL_26;
        }
        v13 = 5;
      }
      (*v20)[v13]();
      goto LABEL_18;
    }
  }
  return result;
}

__int64 ProcOpening_142ea60(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;

  LODWORD(v1) = 0;
  if (a1 == 0 || GameData_2241850 == 0) {
    return (unsigned int)v1;
  }
  v2 = game_HashString(a1);
  if (v2 == 0) {
    goto LABEL_9;
  }
  v3 = *(_QWORD*)(GameData_2241850 + 96);
  if (v3 == 0 || *(_QWORD*)(GameData_2241850 + 112) == 0) {
    goto LABEL_9;
  }
  v6 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v7 = v2;
    if (v2 >= v3) {
      v7 = v2 % v3;
    }
  }
  else {
    v7 = v6 & v2;
  }
  v1 = *(_QWORD*)(*(_QWORD*)(GameData_2241850 + 88) + 8 * v7);
  if (v1 != 0) {
    v8 = *(_QWORD**)v1;
    if (*(_QWORD*)v1 != 0) {
      if ((v3 & v6) == 0) {
        while (1) {
          v10 = v8[1];
          if (v10 == v2) {
            if (v8[2] == v2) {
              goto LABEL_31;
            }
          }
          else if ((v10 & v6) != v7) {
            goto LABEL_9;
          }
          v8 = (_QWORD*)*v8;
          LODWORD(v1) = 0;
          if (v8 == nullptr) {
            return (unsigned int)v1;
          }
        }
      }
      while (1) {
        v9 = v8[1];
        if (v9 == v2) {
          if (v8[2] == v2) {
          LABEL_31:
            v1 = v8[3];
            if (v1 != 0) {
              LODWORD(v1) = (int)*(float*)(v1 + 32);
            }
            return (unsigned int)v1;
          }
        }
        else {
          if (v9 >= v3) {
            v9 %= v3;
          }
          if (v9 != v7) {
            break;
          }
        }
        v8 = (_QWORD*)*v8;
        LODWORD(v1) = 0;
        if (v8 == nullptr) {
          return (unsigned int)v1;
        }
      }
    }
  LABEL_9:
    LODWORD(v1) = 0;
  }
  return (unsigned int)v1;
}

void game_facility_anonymous_ProcOpening_PlayMotion_closure_Invoke(
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
    v12_.v13 = 1;
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
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, (__int64)v10_.v11);
  }
}

void game_facility_anonymous_ProcOpening_PlayMotion_closure0_Invoke(
    __int64 a1, const char** a2)
{
  __int64 v3;
  const char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  struct {
    _QWORD v12[2];
    char* v13;
  } v12_;
  struct {
    __int64 (**v14)();
    int v15;
    char gap44_[20];
    __int64 (***v16)();
  } v14_;

  v3 = *(_QWORD*)GameData_212dce8;
  if (*a2 != nullptr) {
    v4 = *a2;
  }
  else {
    v4 = &GameData_1a9f09e;
  }
  v5 = strlen(v4);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v8, 16, 0);
    v12_.v12[1] = v6;
    v12_.v13 = v7;
    v12_.v12[0] = v8 | 1;
    goto LABEL_12;
  }
  LOBYTE(v12_.v12[0]) = 2 * v5;
  v7 = (char*)v12_.v12 + 1;
  if (v5 != 0) {
  LABEL_12:
    memcpy((__int64)v7, (__int64)v4, v6);
  }
  v7[v6] = 0;
  v9 = *(_DWORD*)(a1 + 8);
  if ((SceneManager_138c8e0(v3, (__int64)v12_.v12) & 1) != 0) {
    v14_.v15 = v9;
    v14_.v14 = GameData_20330a8;
    v14_.v16 = &v14_.v14;
    SceneManager_138d7c0(v3, (__int64)v12_.v12, (__int64)&v14_.v14);
    if (v14_.v16 == &v14_.v14) {
      v10 = 4;
      goto LABEL_18;
    }
    if (v14_.v16 != nullptr) {
      v10 = 5;
    LABEL_18:
      ((__int64 (*)(__int64))(*v14_.v16)[v10])((__int64)v14_.v16);
    }
  }
  if ((v12_.v12[0] & 1) != 0 && v12_.v13 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v12_.v13);
  }
}

__int64 game_facility_anonymous_ProcOpening_PlaySpecialTelop(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  struct {
    _QWORD v5[4];
    _QWORD* v6;
  } v5_;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(*(_QWORD*)(v1 + 184) + 32LL);
  if (*(_BYTE*)(v2 + 72) == 3) {
    GameRoutine_1795980(*(_QWORD*)(result + 8), 1, *(_QWORD*)(v2 + 48));
    v3 = *(_QWORD*)(v1 + 192);
    v5_.v5[0] = GameData_203bc48;
    v5_.v6 = v5_.v5;
    GameRoutine_1952d00(v3, 0, (__int64)v5_.v5);
    result = (__int64)v5_.v6;
    if (v5_.v6 == v5_.v5) {
      v4 = 32;
    }
    else {
      if (v5_.v6 == nullptr) {
        return result;
      }
      v4 = 40;
    }
    return (*(__int64 (**)(__int64))(*v5_.v6 + v4))((__int64)v5_.v6);
  }
  return result;
}

void game_facility_anonymous_ProcOpening_PlaySpecialTelop_closure_Invoke()
{
  if (GameData_22420e0 != 0) {
    *(_WORD*)(GameData_22420e0 + 880) = 1;
  }
}

__int64 game_facility_anonymous_ProcOpening_StartCameraWork_closure0_Invoke()
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
      v10 = __cxa_guard_acquire(&GameData_224ae08);
      v4 = 0x1.0000000000000p-1f;
      v11 = v10;
      result = v9;
      if (v11 != 0) {
        GameRoutine_2b0_alt1();
        __cxa_guard_release(&GameData_224ae08);
        v4 = 0x1.0000000000000p-1f;
        result = v9;
      }
    }
    v5 = *(__int64**)(result + 32);
    v6 = *(__int64**)(result + 40);
    if (v5 != v6) {
      v7 = v4 * 0x1.f400000000000p+9f;
      do {
        result = snd_fnd_WeakHandle_isValid_alt1(v5);
        if ((result & 1) != 0) {
          v8 = snd_fnd_WeakHandle_get_alt1((__int64)v5);
          snd_Fade_Fade_10c830_alt1((__int64)v12, v7);
          (*(void (**)(__int64, _QWORD*, _QWORD, double))(
              *(_QWORD*)(v8 - 5592) + 248LL))(v8 - 5592, v12, 0, 0x0.0p+0);
          result = snd_Fade_Destroy_Fade_alt1(v12);
        }
        v5 += 2;
      } while (v5 != v6);
    }
  }
  return result;
}

__int64 ProcOpening_Destructor(__int64* a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;

  v1 = a1[6];
  *(a1 - 19) = (__int64)game_facility_anonymous_ProcOpening_vtable;
  v3 = a1 - 19;
  *a1 = (__int64)GameData_203be08;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v4 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v4;
  GameRoutine_1958ed0(a1, v3);
  *a1 = (__int64)(GameData_2132488 + 2);
  v5 = (_QWORD*)GameData_212dce8;
  v6 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
    if (*v5 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v5 + 8LL))(*v5);
    }
    *v5 = 0;
  }
  game_facility_ReleaseGroups();
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister(v3);
  return GameRoutine_658c00(a1 - 8);
}

__int64 ProcOpening_DeletingDestructor(__int64* a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v8;

  v1 = a1[6];
  *(a1 - 19) = (__int64)game_facility_anonymous_ProcOpening_vtable;
  v3 = a1 - 19;
  *a1 = (__int64)GameData_203be08;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v4 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v4;
  GameRoutine_1958ed0(a1, v3);
  *a1 = (__int64)(GameData_2132488 + 2);
  v5 = (_QWORD*)GameData_212dce8;
  v6 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
    if (*v5 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v5 + 8LL))(*v5);
    }
    *v5 = 0;
  }
  game_facility_ReleaseGroups();
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister(v3);
  GameRoutine_658c00(a1 - 8);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v3);
}

#pragma GCC visibility pop
