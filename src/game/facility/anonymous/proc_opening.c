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
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
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
            *(_QWORD*)v6 + v11);
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
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 result;
  float v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float v8;
  __int64 v9;
  double v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  _QWORD v15[33];

  result = GameData_224ae20;
  if (GameData_224ae20 != 0) {
    v4 = 0.5;
    v5 = 1;
    v15[25] = v2;
    v15[26] = v0;
    v15[27] = v1;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_224ae08,
                              memory_order_acquire) &
         1) == 0) {
      v12 = result;
      v13 = __cxa_guard_acquire(&GameData_224ae08);
      v4 = 0.5;
      v14 = v13;
      result = v12;
      if (v14 != 0) {
        GameRoutine_2b0(GameRoutine_1488900, &GameData_224adf0,
                        &GameData_1f50948, 0.5);
        __cxa_guard_release(&GameData_224ae08);
        v4 = 0.5;
        result = v12;
      }
    }
    v6 = *(_QWORD*)(result + 32);
    v7 = *(_QWORD*)(result + 40);
    if (v6 != v7) {
      v8 = v4 * 0x1.f400000000000p+9;
      do {
        result = snd_fnd_WeakHandle_isValid(v6, v5);
        if ((result & 1) != 0) {
          v9 = snd_fnd_WeakHandle_get(v6);
          *(float*)&v10 = v8;
          v11 = v9;
          snd_Fade_Fade_10c830(v15, v10);
          (*(void (**)(__int64, _QWORD*, _QWORD, double))(
              *(_QWORD*)(v11 - 5592) + 248LL))(v11 - 5592, v15, 0, 0.0);
          result = snd_Fade_Destroy_Fade(v15);
        }
        v6 += 16;
      } while (v6 != v7);
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
