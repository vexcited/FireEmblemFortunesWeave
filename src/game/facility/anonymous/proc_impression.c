#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1450640(_QWORD);
__int64 GameRoutine_14869b0(_QWORD);
__int64 GameRoutine_14877f0(_QWORD, _QWORD);
__int64 SceneCharacter_1400a90(_QWORD, _QWORD);
__int64 SceneManager_138a5a0(_QWORD);
__int64 SceneManager_138e5e0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1afa9c7;
extern __int64 (*GameData_203c258[])();
extern __int64 (*GameData_203c2d8[])();
extern __int64 GameData_212dce8;
extern __int64 GameData_21f3d10;
extern __int64 GameData_21f4000;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64* GameData_21311d8;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
_QWORD* game_facility_anonymous_ProcImpression_ResetMotion(__int64 a1);
unsigned __int64 game_facility_anonymous_ProcImpression_HideMob(__int64 a1);
__int64 ProcImpression_14312d0(__int64 result);
__int64 game_facility_anonymous_ProcImpression_PrepareCamera_closure_Invoke();
__int64 ProcImpression_1432340();
void ProcImpression_1432370();
_QWORD* GameRoutine_14514d0(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void TheaterWatchArgs_13db060(PSEUDO_X8, __int64,
                                                         int);
__int64 GameRoutine_1130770(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1958ed0_alt1(_QWORD, _QWORD) __asm__("GameRoutine_1958ed0");
__int64 ProcInst_657a50(_QWORD, _QWORD);
__int64 ProcOpening_142ea60(__int64);
__int64 game_809dc0(_QWORD, _QWORD, long double);
__int64 game_HashString32(_QWORD);
__int64 game_ProcInst_Unregister(__int64 result);
__int64 game_facility_ReleaseGroups();
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 GameRoutine_658c00(_QWORD*);
__n128 nn_mem_StandardAllocator_Free_alt2(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak();
extern _DWORD* GameData_2130fb8;
extern _UNKNOWN* GameData_212c960;
extern _UNKNOWN GameData_1a9e32f;
extern _UNKNOWN GameData_216de68;
extern __int16 GameData_224ae48;
extern __int64 (*GameData_203c358[])();
extern __int64 (*GameData_203c3d8[])();
extern __int64 (*GameData_203c600[])();
extern __int64 (*GameData_203c6b0[])();
extern __int64 (*GameData_203c6f8[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_facility_FacilitySceneBase_vtable[])();
extern __int64* GameData_2132488;
extern __int64 GameData_212c608[2];
extern __int64 GameData_21ec7b8;
extern __int64 game_ProcFadeView_instance_;
extern int GameData_2241730;
void GameRoutine_1958ed0(__int64, __int64);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__int64 (***game_facility_anonymous_ProcImpression_PlayMobMotion(__int64 a1))();
__n128 game_facility_anonymous_ProcImpression_PrepareCamera(__n128 result);
__int64 ProcImpression_1431480(__int64 a1, int a2);
__n128 ProcImpression_14320f0(__int64 a1);
__n128 ProcImpression_DeletingDestructor_1432200(__int64 a1);
__int64 ProcImpression_14323b0(__int64 a1);
__n128 ProcImpression_Destructor(_QWORD* a1);
__n128 ProcImpression_DeletingDestructor_1432640(_QWORD* a1);
__n128 ProcImpression_14327f0(__int64 a1);
__n128 ProcImpression_1432930(_QWORD* a1);
__n128 ProcImpression_1432a40(_QWORD* a1);

_QWORD* game_facility_anonymous_ProcImpression_ResetMotion(__int64 a1)
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
  v6 = *(_QWORD*)(*(_QWORD*)(a1 + 240) + 32LL);
  v14 = v13;
  v13[0] = GameData_203c258;
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

unsigned __int64 game_facility_anonymous_ProcImpression_HideMob(__int64 a1)
{
  __int64* v2;
  unsigned __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD v20[4];
  _QWORD* v21;

  v2 = GameData_21311d8;
  if (*GameData_21311d8 == 0) {
    goto LABEL_29;
  }
  result = game_HashString(&GameData_1afa9c7);
  if (result == 0) {
    goto LABEL_29;
  }
  v4 = *(_QWORD*)(*v2 + 96);
  if (v4 == 0 || *(_QWORD*)(*v2 + 112) == 0) {
    goto LABEL_29;
  }
  v6 = v4 - 1;
  if ((v4 & (v4 - 1)) != 0) {
    v7 = result;
    if (result >= v4) {
      v7 = result % v4;
    }
  }
  else {
    v7 = v6 & result;
  }
  v8 = *(_QWORD**)(*(_QWORD*)(*v2 + 88) + 8 * v7);
  if (v8 == nullptr) {
    goto LABEL_29;
  }
  v9 = (_QWORD*)*v8;
  if (v9 == nullptr) {
    goto LABEL_29;
  }
  if ((v4 & v6) == 0) {
    while (1) {
      v11 = v9[1];
      if (v11 == result) {
        if (v9[2] == result) {
          goto LABEL_27;
        }
      }
      else if ((v11 & v6) != v7) {
        goto LABEL_29;
      }
      v9 = (_QWORD*)*v9;
      if (v9 == nullptr) {
        goto LABEL_29;
      }
    }
  }
  while (1) {
    v10 = v9[1];
    if (v10 == result) {
      break;
    }
    if (v10 >= v4) {
      v10 %= v4;
    }
    if (v10 != v7) {
      goto LABEL_29;
    }
  LABEL_16:
    v9 = (_QWORD*)*v9;
    if (v9 == nullptr) {
      goto LABEL_29;
    }
  }
  if (v9[2] != result) {
    goto LABEL_16;
  }
LABEL_27:
  v12 = v9[3];
  if (v12 == 0 || *(float*)(v12 + 32) <= 0.0) {
  LABEL_29:
    result = (unsigned __int64)v20;
    v13 = *(_QWORD*)(*(_QWORD*)(a1 + 240) + 32LL);
    v21 = v20;
    v20[0] = GameData_203c2d8;
    if (*(_WORD*)(v13 + 160) == 0) {
      goto LABEL_34;
    }
    v14 = 8LL * *(unsigned __int16*)(v13 + 160);
    v15 = 0;
    do {
      v16 = v21;
      if (v21 == nullptr) {
      LABEL_45:
        GameRoutine_60a310(v16);
      }
      (*(void (**)(_QWORD*, __int64))(*v21 + 48LL))(v21, *(_QWORD*)(v13 + 168) +
                                                             v15);
      v15 += 8;
    } while (v14 != v15);
    result = (unsigned __int64)v21;
    if (v21 != nullptr) {
    LABEL_34:
      if (*(_WORD*)(v13 + 192) != 0) {
        v17 = 8LL * *(unsigned __int16*)(v13 + 192);
        v18 = 0;
        do {
          v16 = v21;
          if (v21 == nullptr) {
            goto LABEL_45;
          }
          (*(void (**)(_QWORD*, __int64))(*v21 + 48LL))(
              v21, *(_QWORD*)(v13 + 200) + v18);
          v18 += 8;
        } while (v17 != v18);
        result = (unsigned __int64)v21;
      }
      if ((_QWORD*)result == v20) {
        v19 = 32;
        return (*(__int64 (**)(unsigned __int64))(*(_QWORD*)result + v19))(
            result);
      }
      else if (result != 0) {
        v19 = 40;
        return (*(__int64 (**)(unsigned __int64))(*(_QWORD*)result + v19))(
            result);
      }
    }
  }
  return result;
}

__int64 (***game_facility_anonymous_ProcImpression_PlayMobMotion(__int64 a1))()
{
  int v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 (***result)();
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    __int64 (**v13)();
    int v14;
    char gap12_[20];
    __int64 (***v15)();
  } v13_;

  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = ProcOpening_142ea60((__int64)&GameData_1a9e32f),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = *(_QWORD*)(a1 + 240);
  v5 = v2 - 1;
  result = &v13_.v13;
  v13_.v14 = v5;
  v7 = *(_QWORD*)(v4 + 32);
  v13_.v15 = &v13_.v13;
  v13_.v13 = GameData_203c358;
  if (*(_WORD*)(v7 + 160) == 0) {
    goto LABEL_6;
  }
  v8 = 8LL * *(unsigned __int16*)(v7 + 160);
  v9 = 0;
  do {
    if (v13_.v15 == nullptr) {
    LABEL_17:
      GameRoutine_60a310_alt1(),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    ((void (*)(__int64 (***)(void), __int64))(*v13_.v15)[6])(
        v13_.v15, *(_QWORD*)(v7 + 168) + v9),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v9 += 8;
  } while (v8 != v9);
  result = v13_.v15;
  if (v13_.v15 != nullptr) {
  LABEL_6:
    if (*(_WORD*)(v7 + 192) != 0) {
      v10 = 8LL * *(unsigned __int16*)(v7 + 192);
      v11 = 0;
      do {
        if (v13_.v15 == nullptr) {
          goto LABEL_17;
        }
        ((void (*)(__int64 (***)(void), __int64))(*v13_.v15)[6])(
            v13_.v15, *(_QWORD*)(v7 + 200) + v11),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v11 += 8;
      } while (v10 != v11);
      result = v13_.v15;
    }
    if (result == &v13_.v13) {
      v12 = 4;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v12 = 5;
    }
    return (__int64 (***)(void))(
        (__int64 (*)(__int64 (***)(void), __int64))(*result)[v12])(result, v3);
  }
  return result;
}

__n128 game_facility_anonymous_ProcImpression_PrepareCamera(__n128 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;

  v1 = *(_QWORD*)(GameData_21f4000 + 264);
  if (v1 != 0) {
    v2 = *(_QWORD*)(GameData_21f4000 + 256);
    v3 = *(_QWORD*)(GameData_21f4000 + 264);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                              memory_order_relaxed);
    v4 = std___1___shared_weak_count_lock(v3);
    result = std___1___shared_weak_count___release_weak();
    if (v4 != 0) {
      if (v2 == 0) {
        goto LABEL_14;
      }
      v7_.v7[0] = GameData_203c3d8;
      v7_.v8 = v7_.v7;
      v9_.v10 = v9_.v9;
      v9_.v9[0] = GameData_203c3d8;
      GameRoutine_14514d0(v9_.v9, (_QWORD*)(v2 + 272));
      if (v9_.v10 == v9_.v9) {
        v5 = 32;
      }
      else {
        if (v9_.v10 == nullptr) {
          goto LABEL_9;
        }
        v5 = 40;
      }
      (*(void (**)(__int64))(*v9_.v10 + v5))((__int64)v9_.v10);
    LABEL_9:
      if (v7_.v8 == v7_.v7) {
        v6 = 32;
      }
      else {
        if (v7_.v8 == nullptr) {
          goto LABEL_14;
        }
        v6 = 40;
      }
      (*(void (**)(__int64))(*v7_.v8 + v6))((__int64)v7_.v8);
    LABEL_14:
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v4 + 16LL))(
            v4, *(long double*)&result);
        return std___1___shared_weak_count___release_weak();
      }
    }
  }
  return result;
}

__int64 ProcImpression_14312d0(__int64 result)
{
  if (*(_QWORD*)(*(_QWORD*)(result + 240) + 56LL) != 0) {
    *(_DWORD*)(result + 152) = 2;
  }
  return result;
}

__int64 ProcImpression_1431480(__int64 a1, int a2)
{
  __int64 result;
  int v4;
  char* v5;
  __int64 v7;
  __int64 v8;
  _BYTE* v9;
  char v10;
  __int64 v11;
  _QWORD v12[2];
  char* v13;

  result = X8CALL_X0(__int64, TheaterWatchArgs_13db060(
                                  (void*)(v12), *(_QWORD*)(a1 + 240), a2));
  v4 = v12[0] & 1;
  if ((v12[0] & 1) != 0) {
    v5 = v13;
  }
  else {
    v5 = (char*)v12 + 1;
  }
  if (GameData_21ec7b8 == 0 && v5 != nullptr) {
    v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770(v7, v5, 0);
    v8 = *(_QWORD*)(a1 + 40);
    if (v8 != 0) {
      *(_QWORD*)(v8 + 48) = v7;
      *(_QWORD*)(v7 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v7;
    *(_QWORD*)(v7 + 24) = "talk::Seq";
    *(_QWORD*)(v7 + 32) = a1;
    *(_DWORD*)(v7 + 140) = game_HashString32("talk::Seq");
    *(_QWORD*)(v7 + 64) = 0;
    *(_QWORD*)(v7 + 72) = 24;
    *(_QWORD*)(v7 + 80) = 1;
    *(_QWORD*)(v7 + 8) = &GameData_216de68;
    *(_QWORD*)(v7 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 136LL))(v7);
    if ((result & 1) != 0 && (*(_WORD*)(v7 + 136) & 0x100) == 0) {
      *(_WORD*)(v7 + 136) |= 0x100u;
    }
    v9 = *(_BYTE**)(v7 + 32);
    v10 = v9[138];
    if (v10 == 0) {
      result =
          (*(__int64 (**)(_QWORD))(*(_QWORD*)v9 + 64LL))(*(_QWORD*)(v7 + 32));
      v10 = v9[138];
    }
    v9[138] = v10 + 1;
    *(_WORD*)(v7 + 136) |= 2u;
    v4 = v12[0] & 1;
  }
  GameData_224ae48 = 261;
  if (v4 != 0 && v13 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
  }
  return result;
}

__int64 game_facility_anonymous_ProcImpression_PrepareCamera_closure_Invoke()
{
  __int64 v0;
  __int64 v1;
  __int64 result;
  __int64 v3;
  _QWORD v4[2];
  __int64 v5;

  v0 = fw_memory_g_heap_manager_ptr;
  v1 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      40, 16, 0);
  *(_BYTE*)(v1 + 38) = 0;
  v4[0] = 41;
  v4[1] = 38;
  v5 = v1;
  *(_QWORD*)(v1 + 16) = 0x8AE5B3A6E85FA983LL;
  *(_QWORD*)(v1 + 24) = 0xB682E3AA83E35F87LL;
  *(_QWORD*)(v1 + 30) = 0x8883E3AB83E3B682LL;
  *(_QWORD*)v1 = 0x83E3BC83E3B782E3LL;
  *(_QWORD*)(v1 + 8) = 0xE3A183E3AB82E3B3LL;
  result = GameRoutine_1450640(v4);
  if ((v4[0] & 1) != 0 && v5 != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v3 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v3, v5);
  }
  return result;
}

__n128 ProcImpression_14320f0(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v4;
  __int64 v5;

  *(_QWORD*)a1 = GameData_203c600;
  *(_QWORD*)(a1 + 208) = GameData_203c6b0;
  v2 = (_QWORD*)(a1 + 208);
  GameRoutine_1958ed0(a1 + 208, a1);
  *v2 = game_facility_FacilitySceneBase_vtable;
  if (GameData_21f4000 != 0 && GameData_2241730-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 24LL))(
        (__int64)GameData_21f4000);
    if (GameData_21f4000 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 8LL))(
          GameData_21f4000);
    }
    GameData_21f4000 = 0;
  }
  game_facility_ReleaseGroups();
  v4 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_203c6f8;
  if (v4 == (_QWORD*)(a1 + 160)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_12;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_12:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00((_QWORD*)(a1 + 88));
}

__n128 ProcImpression_DeletingDestructor_1432200(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = GameData_203c600;
  *(_QWORD*)(a1 + 208) = GameData_203c6b0;
  v2 = (_QWORD*)(a1 + 208);
  GameRoutine_1958ed0(a1 + 208, a1);
  *v2 = game_facility_FacilitySceneBase_vtable;
  if (GameData_21f4000 != 0 && GameData_2241730-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 24LL))(
        (__int64)GameData_21f4000);
    if (GameData_21f4000 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 8LL))(
          GameData_21f4000);
    }
    GameData_21f4000 = 0;
  }
  game_facility_ReleaseGroups();
  v4 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_203c6f8;
  if (v4 == (_QWORD*)(a1 + 160)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_12;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_12:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00((_QWORD*)(a1 + 88));
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free_alt2(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
}

__int64 ProcImpression_1432340()
{
  __int64 v0;

  v0 = SceneManager_138a5a0(GameData_21f4000);
  return GameRoutine_14869b0(v0);
}

void ProcImpression_1432370()
{
  if (GameData_21f3d10 != 0 && *(int*)(GameData_21f3d10 + 152) >= 1) {
    *(_DWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 156LL) =
        1065353216;
  }
}

__int64 ProcImpression_14323b0(__int64 a1)
{
  __int64 result;
  long double v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  long double* v7;
  long double v8;

  result = GameRoutine_1958ed0_alt1(a1 + 208, a1);
  if (*(_BYTE*)(a1 + 220) == 1 && (*(_DWORD*)(a1 + 216) & 0x80000000) != 0) {
    v4 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v5 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v5 + 172) == *(float*)(v5 + 168) &&
          (v6 = v5 + 160,
           *((_QWORD*)&v3 + 1) =
               LANES128_OF(((__n128 (*)(unsigned __int64)) *
                            (_QWORD*)(*(_QWORD*)(v5 + 160) + 16LL))(v5 + 160))
                   .n128_u64[1],
           *((float*)&v3 + 3) == 1.0)) {
        if (*(float*)(v6 + 12) == *(float*)(v6 + 8)) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)v6 + 16LL))(v6);
        }
        else {
          v3 = *(long double*)(v6 + 48);
        }
        v8 = v3;
        *(_QWORD*)&v3 = 0;
        v7 = &v8;
      }
      else {
        *(_QWORD*)&v3 = 0;
        v7 = (long double*)GameData_212c960;
      }
      result = game_809dc0(v4, v7, v3);
    }
  }
  if ((*(_WORD*)(a1 + 136) & 1) == 0) {
    return ProcInst_657a50(a1, 1);
  }
  return result;
}

__int64 ProcImpression_14324c0()
{
  return GameRoutine_14877f0(0, 0x13F000000LL);
}

__n128 ProcImpression_Destructor(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v6;
  __int64 v7;

  *(a1 - 26) = GameData_203c600;
  v2 = (__int64)(a1 - 26);
  *a1 = GameData_203c6b0;
  GameRoutine_1958ed0((__int64)a1, (__int64)(a1 - 26));
  *a1 = GameData_2132488 + 2;
  v3 = (_QWORD*)GameData_212dce8;
  v4 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4);
    if (*v3 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
    }
    *v3 = 0;
  }
  game_facility_ReleaseGroups();
  v6 = (_QWORD*)*(a1 - 2);
  *(a1 - 26) = GameData_203c6f8;
  if (v6 == a1 - 6) {
    v7 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_12;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
LABEL_12:
  *(a1 - 26) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 9) & 0x100) != 0) {
    *((_WORD*)a1 - 36) &= ~0x100u;
  }
  game_ProcInst_Unregister(v2);
  return GameRoutine_658c00(a1 - 15);
}

__n128 ProcImpression_DeletingDestructor_1432640(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;

  *(a1 - 26) = GameData_203c600;
  v2 = (__int64)(a1 - 26);
  *a1 = GameData_203c6b0;
  GameRoutine_1958ed0((__int64)a1, (__int64)(a1 - 26));
  *a1 = GameData_2132488 + 2;
  v3 = (_QWORD*)GameData_212dce8;
  v4 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4);
    if (*v3 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
    }
    *v3 = 0;
  }
  game_facility_ReleaseGroups();
  v6 = (_QWORD*)*(a1 - 2);
  *(a1 - 26) = GameData_203c6f8;
  if (v6 == a1 - 6) {
    v7 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_12;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
LABEL_12:
  *(a1 - 26) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 9) & 0x100) != 0) {
    *((_WORD*)a1 - 36) &= ~0x100u;
  }
  game_ProcInst_Unregister(v2);
  GameRoutine_658c00(a1 - 15);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free_alt2(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
}

__int64 ProcImpression_1432780()
{
  return GameRoutine_14877f0(0, 0x13F000000LL);
}

__n128 ProcImpression_14327f0(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = GameData_203c600;
  *(_QWORD*)(a1 + 208) = GameData_203c6b0;
  v2 = (_QWORD*)(a1 + 208);
  GameRoutine_1958ed0(a1 + 208, a1);
  *v2 = game_facility_FacilitySceneBase_vtable;
  if (GameData_21f4000 != 0 && GameData_2241730-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 24LL))(
        (__int64)GameData_21f4000);
    if (GameData_21f4000 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 8LL))(
          GameData_21f4000);
    }
    GameData_21f4000 = 0;
  }
  game_facility_ReleaseGroups();
  v4 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_203c6f8;
  if (v4 == (_QWORD*)(a1 + 160)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_12;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_12:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00((_QWORD*)(a1 + 88));
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free_alt2(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
}

__n128 ProcImpression_1432930(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v6;
  __int64 v7;

  *(a1 - 26) = GameData_203c600;
  v2 = (__int64)(a1 - 26);
  *a1 = GameData_203c6b0;
  GameRoutine_1958ed0((__int64)a1, (__int64)(a1 - 26));
  *a1 = GameData_2132488 + 2;
  v3 = (_QWORD*)GameData_212dce8;
  v4 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4);
    if (*v3 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
    }
    *v3 = 0;
  }
  game_facility_ReleaseGroups();
  v6 = (_QWORD*)*(a1 - 2);
  *(a1 - 26) = GameData_203c6f8;
  if (v6 == a1 - 6) {
    v7 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_12;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
LABEL_12:
  *(a1 - 26) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 9) & 0x100) != 0) {
    *((_WORD*)a1 - 36) &= ~0x100u;
  }
  game_ProcInst_Unregister(v2);
  return GameRoutine_658c00(a1 - 15);
}

__n128 ProcImpression_1432a40(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;

  *(a1 - 26) = GameData_203c600;
  v2 = (__int64)(a1 - 26);
  *a1 = GameData_203c6b0;
  GameRoutine_1958ed0((__int64)a1, (__int64)(a1 - 26));
  *a1 = GameData_2132488 + 2;
  v3 = (_QWORD*)GameData_212dce8;
  v4 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4);
    if (*v3 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
    }
    *v3 = 0;
  }
  game_facility_ReleaseGroups();
  v6 = (_QWORD*)*(a1 - 2);
  *(a1 - 26) = GameData_203c6f8;
  if (v6 == a1 - 6) {
    v7 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_12;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
LABEL_12:
  *(a1 - 26) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 9) & 0x100) != 0) {
    *((_WORD*)a1 - 36) &= ~0x100u;
  }
  game_ProcInst_Unregister(v2);
  GameRoutine_658c00(a1 - 15);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free_alt2(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
}

#pragma GCC visibility pop
