#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_107e090(_QWORD, _QWORD);
__int64 GameRoutine_108c8a0(_QWORD);
__int64 GameRoutine_1403f60(_QWORD);
__int64 GameRoutine_1405080(_QWORD);
__int64 GameRoutine_1407780(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_1412540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14127e0(_QWORD, _QWORD);
__int64 GameRoutine_1412d00(_QWORD);
__int64 GameRoutine_1416b10(_QWORD, _QWORD, float);
__int64 GameRoutine_1416c80(_QWORD, _QWORD);
__int64 GameRoutine_142b1a0(_QWORD, _QWORD);
__int64 GameRoutine_1469c40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_682bc0(_QWORD, _QWORD);
__int64 GameRoutine_7a88a0(_QWORD);
__int64 GameRoutine_a867a0(_QWORD);
__int64 SceneCharacterLookAt_1416a00(_QWORD, _QWORD, float, float);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
__int64* GameRoutine_1391860(__int64, unsigned __int8);
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN* GameData_212c540;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_2038958[])();
extern __int64 (*GameData_20389d8[])();
extern __int64 (*GameData_2038a28[])();
extern __int64 (*GameData_2038a78[])();
extern __int64 (*GameData_2038ac8[])();
extern __int64 (*GameData_2038b18[])();
extern __int64 (*GameData_2038b68[])();
extern __int64 (*game_facility_SceneCharacterBehaviorAnim_vtable[])();
extern __int64 (*game_facility_SceneCharacterBehaviorFade_vtable[])();
extern __int64 (*game_facility_SceneCharacterBehaviorTurnTarget_vtable[])();
extern __int64 (*game_facility_SceneCharacterBehaviorTurn_vtable[])();
extern __int64 (*game_facility_SceneCharacter_vtable[])();
extern __int64 (*game_facility_SceneInterpolatorFloat_vtable[])();
extern __int64 (*game_facility_SceneObjectHolder_vtable)();
extern __int64 GameData_212dce8;
extern __int64 GameData_21c99c8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2131308[5];
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
__int64 SceneCharacter_Destructor(__int64 a1);
__int64 SceneCharacter_13ff750(__int64 a1);
unsigned __int64 SceneCharacter_13ffb80(unsigned __int64 result);
__int64 SceneCharacter_13ffd30(__int64 a1);
__int64 SceneCharacter_14009a0(_QWORD* a1, __int64 a2);
__int64 SceneCharacter_1400a90(_QWORD* a1, __int64 a2);
__int64 SceneCharacter_1400b90(__int64 a1, __int64 a2);
__int64 SceneCharacter_1401090(__int64 result, __int64 a2);
__int64 SceneCharacter_1401180(__int64 a1, float a2);
__int64 SceneCharacter_1401300(__int64 result, __int64 a2, float a3);
__int64 SceneCharacter_14013e0(__int64 result, __int64 a2, float a3);
__int64 SceneCharacter_1401610(__int64 a1);
__int64* SceneCharacter_1401690(__int64 a1, unsigned __int8 a2);
__int64 SceneCharacter_1401750(__int64 a1, unsigned int a2, char a3,
                               __int64* a4);
__int64 SceneCharacter_1401850(__int64 a1, float a2);
__int64 SceneCharacter_14019b0(__int64 a1, float a2);
__int64 SceneCharacter_1401b10(__int64 a1, _QWORD* a2, char a3);
__int64 SceneCharacter_1401ce0(__int64 a1, _QWORD* a2);
__int64 SceneCharacter_1401e50(__int64 a1, float a2);
__int64 SceneCharacter_1401f80(__int64 a1, float a2);
_QWORD* SceneCharacter_14020c0(__int64 a1);
__int64 SceneCharacter_Unknown2(__int64 result);
__int64 GameRoutine_1413100(_QWORD);
__int64 GameRoutine_1984d70(_QWORD);
__int64 GameRoutine_a0d9a0(_QWORD);
__int64 GameRoutine_a7c2c0(_QWORD);
extern __int64 (*GameData_20387d8[])();
extern __int64 (*GameData_2038848[])();
extern __int64 (*GameData_20388d8[])();
__int64 SceneCharacter_1402240(_QWORD* a1, __int64* a2);
__int64 SceneCharacter_1402470(__int64 result, __int64 a2);
__int64 game_facility_SceneCharacter_SceneCharacter_lambda0_Destructor_1402980(
    _QWORD* a1);
__int64
game_facility_SceneCharacter_SceneCharacter_lambda0_DeletingDestructor_1402990(
    _QWORD* a1);
_QWORD*
game_facility_SceneCharacter_SceneCharacter_lambda0_Clone_14029f0(__int64 a1);
__int64 game_facility_SceneCharacter_SceneCharacter_lambda0_CloneInto_1402af0(
    __int64 a1, __int64 a2);
__int64 game_facility_SceneCharacter_SceneCharacter_lambda0_Destructor_1403400(
    _QWORD* a1);
__int64
game_facility_SceneCharacter_SceneCharacter_lambda0_DeletingDestructor_1403410(
    _QWORD* a1);
_QWORD*
game_facility_SceneCharacter_SceneCharacter_lambda0_Clone_1403470(__int64 a1);
__int64 game_facility_SceneCharacter_SceneCharacter_lambda0_CloneInto_1403570(
    __int64 a1, __int64 a2);
_QWORD* game_facility_SceneCharacter_ChangeAppearance_lambda0_Clone(_QWORD* a1);
_QWORD*
game_facility_SceneCharacter_ChangeAppearance_lambda0_CloneInto(_QWORD* result,
                                                                _QWORD* a2);
__int64
game_facility_SceneCharacter_ChangeAppearance_lambda0_Invoke(_QWORD* a1,
                                                             __int64* a2);

__int64 SceneCharacter_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;

  *(_QWORD*)a1 = game_facility_SceneCharacter_vtable;
  if (*(_QWORD*)(a1 + 8) != 0) {
    v12 = *(_QWORD*)(a1 + 8);
    GameRoutine_a867a0(&v12);
    *(_QWORD*)(a1 + 8) = 0;
  }
  v2 = *(_QWORD*)(a1 + 200);
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = *(_QWORD*)(a1 + 184);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = *(_QWORD*)(a1 + 168);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = *(_QWORD*)(a1 + 152);
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = *(_QWORD*)(a1 + 136);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = *(_QWORD*)(a1 + 120);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
    if ((*(_BYTE*)(a1 + 72) & 1) == 0) {
      goto LABEL_26;
    }
  }
  else if ((*(_BYTE*)(a1 + 72) & 1) == 0) {
    goto LABEL_26;
  }
  if (*(_QWORD*)(a1 + 88) != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
  }

LABEL_26:
  if ((*(_BYTE*)(a1 + 48) & 1) != 0 && *(_QWORD*)(a1 + 64) != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
  }
  if ((*(_BYTE*)(a1 + 24) & 1) != 0 && *(_QWORD*)(a1 + 40) != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
  }
  result = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)a1 = &game_facility_SceneObjectHolder_vtable;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 SceneCharacter_13ff750(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v10;
  __int64* v11;

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0) {
    v2 = *(_QWORD*)(a1 + 144);
    v3 = *(_QWORD*)(a1 + 152);
    if (v3 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
      v5 = *(_QWORD*)(v2 + 8);
      if (v5 != 0 && (v6 = *(_QWORD*)(v5 + 8), v10 = 0, v11 = &v10,
                      GameRoutine_1469c40(&v11, &v11, v6), v10 != 0)) {
        v7 = *(_BYTE*)(v10 + 342) & 1;
      }
      else {
        v7 = 0;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v7 != 0) {
        LABEL_9:
          LOBYTE(v1) = *(_BYTE*)(a1 + 104);
          return v1 & 1;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v3);
        if ((v7 & 1) != 0) {
          goto LABEL_9;
        }
      }
    LABEL_15:
      LOBYTE(v1) = 0;
      return v1 & 1;
    }
    v1 = *(_QWORD*)(v2 + 8);
    if (v1 != 0) {
      v8 = *(_QWORD*)(v1 + 8);
      v10 = 0;
      v11 = &v10;
      GameRoutine_1469c40(&v11, &v11, v8);
      LOBYTE(v1) = v10;
      if (v10 != 0) {
        if ((*(_BYTE*)(v10 + 342) & 1) != 0) {
          goto LABEL_9;
        }
        goto LABEL_15;
      }
    }
  }
  return v1 & 1;
}

unsigned __int64 SceneCharacter_13ffb80(unsigned __int64 result)
{
  unsigned __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  bool v18;
  bool v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  char* v23;
  _QWORD v24[2];

  if ((*(_BYTE*)(result + 104) & 1) == 0) {
    v1 = result;
    v2 = *(_QWORD*)GameData_212dce8;
    if ((*(_BYTE*)(result + 24) & 1) != 0) {
      v3 = *(_QWORD*)(result + 40);
    }
    else {
      v3 = result + 25;
    }
    result = strlen(v3);
    if (result >= 0xFFFFFFFFFFFFFFF7LL) {
      GameRoutine_60a1d0(result);
    }
    v4 = result;
    if (result >= 0x17) {
      if ((result | 7) == 0x17) {
        v6 = 26;
      }
      else {
        v6 = (result | 7) + 1;
      }
      v5 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v6,
                                                 16, 0);
      v22 = v4;
      v23 = v5;
      v21 = v6 | 1;
    }
    else {
      LOBYTE(v21) = 2 * result;
      v5 = (char*)&v21 + 1;
      if (result == 0) {
      LABEL_14:
        v5[v4] = 0;
        v7 = *(_QWORD*)(v2 + 208);
        v8 = *(_QWORD*)(v2 + 216);
        if (v7 == v8) {
          v18 = false;
          if ((v21 & 1) == 0) {
          LABEL_34:
            if (!v18) {
              *(_BYTE*)(v1 + 104) = 1;
            }
            return result;
          }
        }
        else {
          v9 = v7 + 8;
          do {
            v10 = v23;
            v11 = *(_QWORD*)(v9 - 8);
            v12 = (unsigned __int64)(unsigned __int8)v21 >> 1;
            if ((v21 & 1) != 0) {
              v12 = v22;
            }
            else {
              v10 = (char*)&v21 + 1;
            }
            v24[0] = v10;
            v24[1] = v12;
            v13 = *(_BYTE*)(v11 + 24);
            v14 = *(_QWORD*)(v11 + 40);
            v15 = v11 + 25;
            if ((v13 & 1) != 0) {
              v16 = v14;
            }
            else {
              v16 = v15;
            }
            v17 = GameRoutine_7a88a0(v24);
            result = game_HashString(v16);
            v18 = v17 == result;
            v19 = v17 == result || v9 == v8;
            v9 += 8;
          } while (!v19);
          if ((v21 & 1) == 0) {
            goto LABEL_34;
          }
        }
        if (v23 != nullptr) {
          v20 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v20 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
        }
        goto LABEL_34;
      }
    }
    result = memmove(v5, v3, v4);
    goto LABEL_14;
  }
  return result;
}

__int64 SceneCharacter_13ffd30(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
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
  __int64* v23;

  v2 = *(_QWORD*)(a1 + 144);
  v3 = *(_QWORD*)(a1 + 152);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 32LL))(v2);
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      result = std___1___shared_weak_count___release_weak(v3);
    }
    if (*(_QWORD*)(a1 + 8) == 0) {
      return result;
    }
  }
  else {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 32LL))(v2);
    if (*(_QWORD*)(a1 + 8) == 0) {
      return result;
    }
  }
  v5 = *(_QWORD*)(a1 + 144);
  v6 = *(_QWORD*)(a1 + 152);
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    v7 = *(_QWORD*)(v5 + 8);
    if (v7 != 0 && (v8 = *(_QWORD*)(v7 + 8), v22 = 0, v23 = &v22,
                    result = GameRoutine_1469c40(&v23, &v23, v8), v22 != 0)) {
      v9 = *(_BYTE*)(v22 + 342) & 1;
    }
    else {
      v9 = 0;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v9 == 0) {
        return result;
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      result = std___1___shared_weak_count___release_weak(v6);
      if ((v9 & 1) == 0) {
        return result;
      }
    }
  }
  else {
    v10 = *(_QWORD*)(v5 + 8);
    if (v10 == 0) {
      return result;
    }
    v11 = *(_QWORD*)(v10 + 8);
    v22 = 0;
    v23 = &v22;
    result = GameRoutine_1469c40(&v23, &v23, v11);
    if (v22 == 0 || (*(_BYTE*)(v22 + 342) & 1) == 0) {
      return result;
    }
  }
  if (*(_BYTE*)(a1 + 104) == 1) {
    v12 = *(_QWORD*)(a1 + 128);
    v13 = *(_QWORD*)(a1 + 136);
    if (v13 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                memory_order_relaxed);
      (*(void (**)(__int64))(*(_QWORD*)v12 + 32LL))(v12);
      if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak(v13);
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 32LL))(v12);
    }
    v14 = *(_QWORD*)(a1 + 112);
    v15 = *(_QWORD*)(a1 + 120);
    if (v15 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                memory_order_relaxed);
      (*(void (**)(__int64))(*(_QWORD*)v14 + 32LL))(v14);
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak(v15);
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 32LL))(v14);
    }
    v16 = *(_QWORD*)(a1 + 160);
    v17 = *(_QWORD*)(a1 + 168);
    if (v17 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                memory_order_relaxed);
      (*(void (**)(__int64))(*(_QWORD*)v16 + 32LL))(v16);
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak(v17);
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 32LL))(v16);
    }
    v18 = *(_QWORD*)(a1 + 192);
    v19 = *(_QWORD*)(a1 + 200);
    if (v19 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                memory_order_relaxed);
      (*(void (**)(__int64))(*(_QWORD*)v18 + 32LL))(v18);
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        std___1___shared_weak_count___release_weak(v19);
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 32LL))(v18);
    }
    v20 = *(_QWORD*)(a1 + 176);
    v21 = *(_QWORD*)(a1 + 184);
    if (v21 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                                memory_order_relaxed);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 32LL))(v20);
      if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        return std___1___shared_weak_count___release_weak(v21);
      }
    }
    else {
      return (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 32LL))(v20);
    }
  }
  return result;
}

__int64 SceneCharacter_14009a0(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 result;

  v3 = a1[16];
  v4 = a1[17];
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_1405080(v3);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
    v6 = a1[14];
    v7 = a1[15];
    if (v7 != 0) {
      goto LABEL_5;
    }
    return GameRoutine_1412540(v6, *(unsigned int*)(v6 + 108), a2);
  }
  GameRoutine_1405080(v3);
  v6 = a1[14];
  v7 = a1[15];
  if (v7 == 0) {
    return GameRoutine_1412540(v6, *(unsigned int*)(v6 + 108), a2);
  }

LABEL_5:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                            memory_order_relaxed);
  result = GameRoutine_1412540(v6, *(unsigned int*)(v6 + 108), a2);
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    return std___1___shared_weak_count___release_weak(v7);
  }
  return result;
}

__int64 SceneCharacter_1400a90(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 result;
  unsigned int v10;

  v3 = a1[16];
  v4 = a1[17];
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_1405080(v3);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
    v7 = a1[14];
    v6 = a1[15];
    if (v6 != 0) {
      goto LABEL_5;
    }
  LABEL_8:
    v10 = GameRoutine_108c8a0(*(unsigned int*)(v7 + 108));
    return GameRoutine_1412540(v7, v10, a2);
  }
  GameRoutine_1405080(v3);
  v7 = a1[14];
  v6 = a1[15];
  if (v6 == 0) {
    goto LABEL_8;
  }

LABEL_5:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                            memory_order_relaxed);
  v8 = GameRoutine_108c8a0(*(unsigned int*)(v7 + 108));
  result = GameRoutine_1412540(v7, v8, a2);
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    return std___1___shared_weak_count___release_weak(v6);
  }
  return result;
}

__int64 SceneCharacter_1400b90(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  unsigned int v5;
  __int64 result;
  unsigned int v7;

  v3 = *(_QWORD*)(a1 + 112);
  v2 = *(_QWORD*)(a1 + 120);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
    v5 = GameRoutine_108c8a0(*(unsigned int*)(v3 + 108));
    result = GameRoutine_1412540(v3, v5, a2);
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      return std___1___shared_weak_count___release_weak(v2);
    }
  }
  else {
    v7 = GameRoutine_108c8a0(*(unsigned int*)(v3 + 108));
    return GameRoutine_1412540(v3, v7, a2);
  }
  return result;
}

__int64 SceneCharacter_1401090(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;

  v2 = *(_QWORD*)(result + 144);
  v3 = *(_QWORD*)(result + 152);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    v5 = *(_QWORD*)(v2 + 8);
    if (v5 != 0) {
      v6 = *(_QWORD*)(v5 + 8);
      v9 = 0;
      v10 = &v9;
      GameRoutine_1469c40(&v10, &v10, v6);
      result = v9;
      if (v9 != 0) {
        result = GameRoutine_107e090(v9, a2);
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      return std___1___shared_weak_count___release_weak(v3);
    }
  }
  else {
    v7 = *(_QWORD*)(v2 + 8);
    if (v7 != 0) {
      v8 = *(_QWORD*)(v7 + 8);
      v9 = 0;
      v10 = &v9;
      GameRoutine_1469c40(&v10, &v10, v8);
      result = v9;
      if (v9 != 0) {
        return GameRoutine_107e090(v9, a2);
      }
    }
  }
  return result;
}

__int64 SceneCharacter_1401180(__int64 a1, float a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _BYTE v9[32];
  _BYTE* v10;
  int v11;
  float v12;
  __int16 v13;
  __int64 v14;

  v2 = *(_QWORD*)(a1 + 176);
  v3 = *(_QWORD*)(a1 + 184);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    v10 = nullptr;
    v12 = a2;
    v13 = 0;
    v11 = 0x800000;
    GameRoutine_1416c80(v2 + 168, v9);
    if ((v13 & 1) != 0 && v14 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v4);
    }
    result = (__int64)v10;
    if (v10 == v9) {
      v6 = 32;
    }
    else {
      if (v10 == nullptr) {
        goto LABEL_20;
      }
      v6 = 40;
    }
    result = (*(__int64 (**)(void))(*(_QWORD*)v10 + v6))();
  LABEL_20:
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      return std___1___shared_weak_count___release_weak(v3);
    }
    return result;
  }
  v10 = nullptr;
  v12 = a2;
  v13 = 0;
  v11 = 0x800000;
  GameRoutine_1416c80(v2 + 168, v9);
  if ((v13 & 1) != 0 && v14 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  result = (__int64)v10;
  if (v10 == v9) {
    v8 = 32;
  }
  else {
    if (v10 == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (*(__int64 (**)(void))(*(_QWORD*)v10 + v8))();
}

__int64 SceneCharacter_1401300(__int64 result, __int64 a2, float a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[4];
  _QWORD* v11;
  __int64 v12;
  __int64 v13;

  if (a2 != 0 && a2 != result) {
    v12 = v3;
    v13 = v4;
    v10[0] = GameData_2038958;
    v10[1] = a2;
    v11 = v10;
    v5 = result;
    v6 = *(_QWORD*)(result + 176);
    v7 = *(_QWORD*)(v5 + 184);
    if (v7 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                memory_order_relaxed);
      SceneCharacterLookAt_1416a00(v6, v10, 1.0, a3);
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v7);
      }
    }
    else {
      SceneCharacterLookAt_1416a00(v6, v10, 1.0, a3);
    }
    result = (__int64)v11;
    if (v11 == v10) {
      v9 = 32;
    }
    else {
      if (v11 == nullptr) {
        return result;
      }
      v9 = 40;
    }
    return (*(__int64 (**)(_QWORD*, __int64))(*v11 + v9))(v11, v8);
  }
  return result;
}

__int64 SceneCharacter_14013e0(__int64 result, __int64 a2, float a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[2];
  char* v13;

  if (a2 == 0 || a2 == result) {
    return result;
  }
  v4 = *(_QWORD*)(result + 176);
  v3 = *(_QWORD*)(result + 184);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  if ((*(_BYTE*)(a2 + 24) & 1) != 0) {
    v6 = *(_QWORD*)(a2 + 40);
  }
  else {
    v6 = a2 + 25;
  }
  v7 = strlen(v6);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v7);
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v10,
                                               16, 0);
    v12[1] = v8;
    v13 = v9;
    v12[0] = v10 | 1;
    goto LABEL_16;
  }
  LOBYTE(v12[0]) = 2 * v7;
  v9 = (char*)v12 + 1;
  if (v7 != 0) {
  LABEL_16:
    memmove(v9, v6, v8);
  }
  v9[v8] = 0;
  result = GameRoutine_1416b10(v4, v12, a3);
  if ((v12[0] & 1) != 0 && v13 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 SceneCharacter_1401610(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 112);
  v3 = *(_QWORD*)(a1 + 120);
  if (v3 == 0) {
    return GameRoutine_1412d00(v2);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                            memory_order_relaxed);
  result = GameRoutine_1412d00(v2);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64* SceneCharacter_1401690(__int64 a1, unsigned __int8 a2)
{
  __int64 v4;
  __int64* result;
  __int64 v6;
  __int64 v7;
  _BYTE v8[8];

  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 64);
  }
  else {
    v4 = a1 + 49;
  }
  GameRoutine_682bc0(v8, v4);
  result = GameRoutine_1391860((__int64)v8, a2);
  if (*result != 0 && *(_BYTE*)*result != 0) {
    strlen(*result);
    v6 = *(_QWORD*)(a1 + 112);
    v7 = *(_QWORD*)(a1 + 120);
    if (v7 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                memory_order_relaxed);
      result = (__int64*)GameRoutine_1412d00(v6);
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        return (__int64*)std___1___shared_weak_count___release_weak(v7);
      }
    }
    else {
      return (__int64*)GameRoutine_1412d00(v6);
    }
  }
  return result;
}

__int64 SceneCharacter_1401750(__int64 a1, unsigned int a2, char a3,
                               __int64* a4)
{
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  _QWORD v14[3];
  int v15;
  char v16;
  __int64 v17;
  int v18;
  __int16 v19;

  v7 = GameRoutine_142b1a0(a2, a1);
  v8 = *a4;
  v9 = *((_DWORD*)a4 + 2);
  v15 = v7;
  v14[0] = 0;
  v16 = a3;
  v17 = v8;
  LOWORD(v8) = *((_WORD*)a4 + 6);
  v10 = *(_QWORD*)(a1 + 112);
  v11 = *(_QWORD*)(a1 + 120);
  v18 = v9;
  v19 = v8;
  if (v11 == 0) {
    result = GameRoutine_14127e0(v10, v14);
    if ((v14[0] & 1) == 0) {
      return result;
    }
    goto LABEL_7;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                            memory_order_relaxed);
  result = GameRoutine_14127e0(v10, v14);
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    result = std___1___shared_weak_count___release_weak(v11);
  }
  if ((v14[0] & 1) != 0) {
  LABEL_7:
    if (v14[2] != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
    }
  }
  return result;
}

__int64 SceneCharacter_1401850(__int64 a1, float a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;

  v3 = *(_QWORD**)(a1 + 128);
  v2 = *(_QWORD*)(a1 + 136);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  v5 = v3[1];
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 32) = v3;
  *(_QWORD*)(result + 40) = v5;
  v7 = result;
  *(_BYTE*)(result + 48) = 0;
  *(_QWORD*)result = GameData_20389d8;
  *(float*)(result + 52) = a2;
  *(_QWORD*)(result + 72) = 0;
  *(_DWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 24) = game_facility_SceneCharacterBehaviorTurn_vtable;
  v8 = result + 24;
  *(_QWORD*)(result + 84) = 0x200000003LL;
  *(_QWORD*)(result + 56) = game_facility_SceneInterpolatorFloat_vtable;
  *(_QWORD*)(result + 64) = 0;
  v9 = v3[3];
  v10 = v3[4];
  v11 = 32 * (v10 - v9) - 1;
  if (v10 == v9) {
    v11 = 0;
  }
  v12 = v3[7] + v3[6];
  if (v11 == v12) {
    result = GameRoutine_1403f60(v3 + 2);
    v9 = v3[3];
    v12 = v3[7] + v3[6];
  }
  v13 =
      (__int64*)(*(_QWORD*)(v9 + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12);
  *v13 = v8;
  v13[1] = v7;
  ++v3[7];
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return std___1___shared_weak_count___release_weak(v2);
  }
  return result;
}

__int64 SceneCharacter_14019b0(__int64 a1, float a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;

  v3 = *(_QWORD**)(a1 + 128);
  v2 = *(_QWORD*)(a1 + 136);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  v5 = v3[1];
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 32) = v3;
  *(_QWORD*)(result + 40) = v5;
  v7 = result;
  *(_BYTE*)(result + 48) = 0;
  *(_DWORD*)(result + 52) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_DWORD*)(result + 80) = 0;
  *(_QWORD*)result = GameData_2038a28;
  *(_QWORD*)(result + 84) = 0x200000003LL;
  *(_QWORD*)(result + 56) = game_facility_SceneInterpolatorFloat_vtable;
  *(_QWORD*)(result + 64) = 0;
  *(float*)(result + 96) = a2;
  *(_QWORD*)(result + 24) =
      game_facility_SceneCharacterBehaviorTurnTarget_vtable;
  v8 = result + 24;
  v9 = v3[3];
  v10 = v3[4];
  v11 = 32 * (v10 - v9) - 1;
  if (v10 == v9) {
    v11 = 0;
  }
  v12 = v3[7] + v3[6];
  if (v11 == v12) {
    result = GameRoutine_1403f60(v3 + 2);
    v9 = v3[3];
    v12 = v3[7] + v3[6];
  }
  v13 =
      (__int64*)(*(_QWORD*)(v9 + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12);
  *v13 = v8;
  v13[1] = v7;
  ++v3[7];
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return std___1___shared_weak_count___release_weak(v2);
  }
  return result;
}

__int64 SceneCharacter_1401b10(__int64 a1, _QWORD* a2, char a3)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int128 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64* v18;
  __int64 v19;

  v4 = *(_QWORD**)(a1 + 128);
  v3 = *(_QWORD*)(a1 + 136);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  v7 = v4[1];
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  v9 = result;
  *(_QWORD*)result = GameData_2038a78;
  v10 = GameData_2131308[0];
  *(_QWORD*)(result + 40) = v4;
  *(_QWORD*)(result + 48) = v7;
  *(_BYTE*)(result + 56) = 0;
  *(_QWORD*)(result + 32) = v10 + 2;
  v11 = result + 32;
  if ((*(_BYTE*)a2 & 1) != 0) {
    result = fw_text_String_CopyTerminated(result + 64, a2[2], a2[1]);
  }
  else {
    v12 = a2[1];
    *(_QWORD*)(result + 64) = *a2;
    *(_QWORD*)(result + 72) = v12;
    *(_QWORD*)(result + 80) = a2[2];
  }
  *(_BYTE*)(v9 + 88) = a3 & 1;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_21a6130);
    if ((_DWORD)result != 0) {
      v19 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v19;
      result = __cxa_guard_release(&GameData_21a6130);
    }
  }
  v13 = GameData_21a6120;
  *(_BYTE*)(v9 + 112) = 0;
  *(_BYTE*)(v9 + 128) = 0;
  *(_DWORD*)(v9 + 144) = 0;
  *(_OWORD*)(v9 + 96) = v13;
  v14 = v4[3];
  v15 = v4[4];
  v16 = 32 * (v15 - v14) - 1;
  if (v15 == v14) {
    v16 = 0;
  }
  v17 = v4[7] + v4[6];
  if (v16 == v17) {
    result = GameRoutine_1403f60(v4 + 2);
    v14 = v4[3];
    v17 = v4[7] + v4[6];
  }
  v18 = (__int64*)(*(_QWORD*)(v14 + 8 * (v17 >> 8)) +
                   16LL * (unsigned __int8)v17);
  *v18 = v11;
  v18[1] = v9;
  ++v4[7];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 SceneCharacter_1401ce0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v5;
  __int64 result;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64* v15;

  v3 = *(_QWORD**)(a1 + 128);
  v2 = *(_QWORD*)(a1 + 136);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  v5 = v3[1];
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  v7 = (_QWORD*)result;
  *(_QWORD*)result = GameData_2038ac8;
  *(_QWORD*)(result + 32) = v3;
  *(_QWORD*)(result + 40) = v5;
  *(_BYTE*)(result + 48) = 0;
  *(_QWORD*)(result + 24) = game_facility_SceneCharacterBehaviorAnim_vtable;
  v8 = result + 24;
  if ((*(_BYTE*)a2 & 1) != 0) {
    result = fw_text_String_CopyTerminated(result + 56, a2[2], a2[1]);
  }
  else {
    v9 = a2[1];
    *(_QWORD*)(result + 56) = *a2;
    *(_QWORD*)(result + 64) = v9;
    *(_QWORD*)(result + 72) = a2[2];
  }
  v10 = a2[4];
  v7[10] = a2[3];
  v7[11] = v10;
  *(_QWORD*)((char*)v7 + 94) = *(_QWORD*)((char*)a2 + 38);
  v11 = v3[3];
  v12 = v3[4];
  v13 = 32 * (v12 - v11) - 1;
  if (v12 == v11) {
    v13 = 0;
  }
  v14 = v3[7] + v3[6];
  if (v13 == v14) {
    result = GameRoutine_1403f60(v3 + 2);
    v11 = v3[3];
    v14 = v3[7] + v3[6];
  }
  v15 = (__int64*)(*(_QWORD*)(v11 + 8 * (v14 >> 8)) +
                   16LL * (unsigned __int8)v14);
  *v15 = v8;
  v15[1] = (__int64)v7;
  ++v3[7];
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return std___1___shared_weak_count___release_weak(v2);
  }
  return result;
}

__int64 SceneCharacter_1401e50(__int64 a1, float a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;

  v3 = *(_QWORD**)(a1 + 128);
  v2 = *(_QWORD*)(a1 + 136);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  v5 = v3[1];
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 32) = v3;
  *(_QWORD*)(result + 40) = v5;
  v7 = result;
  *(_WORD*)(result + 48) = 0;
  *(_QWORD*)result = GameData_2038b18;
  *(float*)(result + 52) = a2;
  *(_QWORD*)(result + 24) = game_facility_SceneCharacterBehaviorFade_vtable;
  v8 = result + 24;
  v9 = v3[3];
  v10 = v3[4];
  v11 = 32 * (v10 - v9) - 1;
  if (v10 == v9) {
    v11 = 0;
  }
  v12 = v3[7] + v3[6];
  if (v11 == v12) {
    result = GameRoutine_1403f60(v3 + 2);
    v9 = v3[3];
    v12 = v3[7] + v3[6];
  }
  v13 =
      (__int64*)(*(_QWORD*)(v9 + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12);
  *v13 = v8;
  v13[1] = v7;
  ++v3[7];
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return std___1___shared_weak_count___release_weak(v2);
  }
  return result;
}

__int64 SceneCharacter_1401f80(__int64 a1, float a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;

  v3 = *(_QWORD**)(a1 + 128);
  v2 = *(_QWORD*)(a1 + 136);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  v5 = v3[1];
  v6 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  v7 = v6 + 3;
  v8 = v6;
  v6[1] = 0;
  v6[2] = 0;
  *v6 = GameData_2038b68;
  result = GameRoutine_1407780(v6 + 3, v3, v5, a2);
  v10 = v3[3];
  v11 = v3[4];
  v12 = 32 * (v11 - v10) - 1;
  if (v11 == v10) {
    v12 = 0;
  }
  v13 = v3[7] + v3[6];
  if (v12 == v13) {
    result = GameRoutine_1403f60(v3 + 2);
    v10 = v3[3];
    v13 = v3[7] + v3[6];
  }
  v14 =
      (_QWORD*)(*(_QWORD*)(v10 + 8 * (v13 >> 8)) + 16LL * (unsigned __int8)v13);
  *v14 = v7;
  v14[1] = v8;
  ++v3[7];
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return std___1___shared_weak_count___release_weak(v2);
  }
  return result;
}

_QWORD* SceneCharacter_14020c0(__int64 a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;

  v1 = *(_QWORD*)(a1 + 96);
  if (v1 != 0) {
    return *(_QWORD**)(v1 + 392);
  }
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 64);
  }
  else {
    v3 = a1 + 49;
  }
  v4 = game_HashString(v3);
  if (v4 == 0) {
    return nullptr;
  }
  v5 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v5 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    return nullptr;
  }
  v8 = v5 - 1;
  if ((v5 & (v5 - 1)) != 0) {
    v9 = v4;
    if (v4 >= v5) {
      v9 = v4 % v5;
    }
  }
  else {
    v9 = v8 & v4;
  }
  v2 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v9);
  if (v2 != nullptr) {
    v10 = (_QWORD*)*v2;
    if (*v2 != 0) {
      if ((v5 & v8) == 0) {
        while (1) {
          v12 = v10[1];
          if (v12 == v4) {
            if (v10[2] == v4) {
              return (_QWORD*)v10[3];
            }
          }
          else if ((v12 & v8) != v9) {
            return nullptr;
          }
          v10 = (_QWORD*)*v10;
          v2 = nullptr;
          if (v10 == nullptr) {
            return v2;
          }
        }
      }
      while (1) {
        v11 = v10[1];
        if (v11 == v4) {
          if (v10[2] == v4) {
            return (_QWORD*)v10[3];
          }
        }
        else {
          if (v11 >= v5) {
            v11 %= v5;
          }
          if (v11 != v9) {
            return nullptr;
          }
        }
        v10 = (_QWORD*)*v10;
        v2 = nullptr;
        if (v10 == nullptr) {
          return v2;
        }
      }
    }
    return nullptr;
  }
  return v2;
}

__int64 SceneCharacter_Unknown2(__int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = result;
  v2 = *(_QWORD*)(result + 8);
  if (v2 != 0) {
    result = GameRoutine_a867a0(&v2);
  }
  *(_QWORD*)(v1 + 8) = 0;
  return result;
}

__int64 SceneCharacter_1402240(_QWORD* a1, __int64* a2)
{
  _QWORD* v2;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  atomic_ullong* v16;
  __int64 v17;
  __int64 v18;
  __int64 result;

  v2 = (_QWORD*)a1[2];
  v5 = (_QWORD*)v2[3];
  v6 = (_QWORD*)v2[4];
  v2[2] = 0;
  if (v5 != v6) {
    do {
      v7 = (_QWORD*)*v5++;
      GameRoutine_a7c2c0(*v7);
    } while (v5 != v6);
    v5 = (_QWORD*)v2[3];
  }
  v2[4] = v5;
  v8 = a1[14];
  v9 = a1[15];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_1413100(v8);
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    }
  }
  else {
    GameRoutine_1413100(v8);
  }
  v11 = a1[18];
  v10 = a1[19];
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  v13 = *a2;
  v12 = a2[1];
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v13 == 0 || (v14 = *(_QWORD*)(v13 + 24)) == 0) {
    v14 = 0;
  }
  *(_QWORD*)(v11 + 112) = v14;
  if (v12 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak(v12);
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v13 == 0 || (v15 = *(_QWORD*)(v13 + 32)) == 0) {
    v15 = 0;
  }
  *(_QWORD*)(v11 + 120) = v15;
  if (v12 != 0) {
    v16 = (atomic_ullong*)(v12 + 8);
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (atomic_fetch_add(v16, 0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_25;
      }
    LABEL_29:
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak(v12);
      if (v10 == 0) {
        goto LABEL_30;
      }
      goto LABEL_26;
    }
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
    if (atomic_fetch_add(v16, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      goto LABEL_29;
    }
  }
LABEL_25:
  if (v10 != 0) {
  LABEL_26:
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
    }
  }
LABEL_30:
  v17 = a1[20];
  v18 = a1[21];
  if (v18 == 0) {
    return GameRoutine_1984d70(v17);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                            memory_order_relaxed);
  result = GameRoutine_1984d70(v17);
  if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    return std___1___shared_weak_count___release_weak(v18);
  }
  return result;
}

__int64 SceneCharacter_1402470(__int64 result, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_BYTE*)result = 0;
  *(_BYTE*)(result + 112) = 0;
  if (*(_BYTE*)(a2 + 112) == 1) {
    v3 = result;
    *(_DWORD*)result = *(_DWORD*)a2;
    *(_QWORD*)(result + 24) = *(_QWORD*)(a2 + 24);
    *(_QWORD*)(result + 16) = *(_QWORD*)(a2 + 16);
    *(_DWORD*)(result + 32) = *(_DWORD*)(a2 + 32);
    if ((*(_BYTE*)(a2 + 40) & 1) != 0) {
      result = fw_text_String_CopyTerminated(result + 40, *(_QWORD*)(a2 + 56),
                                             *(_QWORD*)(a2 + 48));
    }
    else {
      v4 = *(_QWORD*)(a2 + 40);
      v5 = *(_QWORD*)(a2 + 56);
      *(_QWORD*)(result + 48) = *(_QWORD*)(a2 + 48);
      *(_QWORD*)(result + 56) = v5;
      *(_QWORD*)(result + 40) = v4;
    }
    if ((*(_BYTE*)(a2 + 64) & 1) != 0) {
      result = fw_text_String_CopyTerminated(v3 + 64, *(_QWORD*)(a2 + 80),
                                             *(_QWORD*)(a2 + 72));
    }
    else {
      *(_QWORD*)(v3 + 72) = *(_QWORD*)(a2 + 72);
      v6 = *(_QWORD*)(a2 + 64);
      *(_QWORD*)(v3 + 80) = *(_QWORD*)(a2 + 80);
      *(_QWORD*)(v3 + 64) = v6;
    }
    if ((*(_BYTE*)(a2 + 88) & 1) != 0) {
      result = fw_text_String_CopyTerminated(v3 + 88, *(_QWORD*)(a2 + 104),
                                             *(_QWORD*)(a2 + 96));
    }
    else {
      v7 = *(_QWORD*)(a2 + 88);
      v8 = *(_QWORD*)(a2 + 104);
      *(_QWORD*)(v3 + 96) = *(_QWORD*)(a2 + 96);
      *(_QWORD*)(v3 + 104) = v8;
      *(_QWORD*)(v3 + 88) = v7;
    }
    *(_BYTE*)(v3 + 112) = 1;
  }
  return result;
}

__int64 game_facility_SceneCharacter_SceneCharacter_lambda0_Destructor_1402980(
    _QWORD* a1)
{
  *a1 = GameData_20387d8;
  return GameRoutine_a0d9a0(a1 + 4);
}

__int64

game_facility_SceneCharacter_SceneCharacter_lambda0_DeletingDestructor_1402990(
    _QWORD* a1)
{
  __int64 v1;

  *a1 = GameData_20387d8;
  GameRoutine_a0d9a0(a1 + 4);
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v1);
}

_QWORD*

game_facility_SceneCharacter_SceneCharacter_lambda0_Clone_14029f0(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 272, 16, 0);
  v3 = v2;
  *v2 = GameData_20387d8;
  v2[2] = *(_QWORD*)(a1 + 16);
  v4 = *(_QWORD*)(a1 + 40);
  v2[4] = *(_QWORD*)(a1 + 32);
  v2[5] = v4;
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    fw_text_String_CopyTerminated(v2 + 6, *(_QWORD*)(a1 + 64),
                                  *(_QWORD*)(a1 + 56));
  }
  else {
    v5 = *(_QWORD*)(a1 + 56);
    v6 = *(_QWORD*)(a1 + 64);
    v2[6] = *(_QWORD*)(a1 + 48);
    v2[7] = v5;
    v2[8] = v6;
  }
  SceneCharacter_1402470((__int64)(v3 + 10), a1 + 80);
  v7 = *(_QWORD*)(a1 + 256);
  *((_BYTE*)v3 + 208) = *(_BYTE*)(a1 + 208);
  if (v7 != 0) {
    if (v7 == a1 + 224) {
      v3[32] = v3 + 28;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
    }
    else {
      v3[32] = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    }
  }
  else {
    v3[32] = 0;
  }
  return v3;
}

__int64 game_facility_SceneCharacter_SceneCharacter_lambda0_CloneInto_1402af0(
    __int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 result;

  *(_QWORD*)a2 = GameData_20387d8;
  *(_QWORD*)(a2 + 16) = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a2 + 32) = *(_QWORD*)(a1 + 32);
  v4 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a2 + 40) = v4;
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    fw_text_String_CopyTerminated(a2 + 48, *(_QWORD*)(a1 + 64),
                                  *(_QWORD*)(a1 + 56));
  }
  else {
    *(_QWORD*)(a2 + 56) = *(_QWORD*)(a1 + 56);
    v5 = *(_QWORD*)(a1 + 48);
    *(_QWORD*)(a2 + 64) = *(_QWORD*)(a1 + 64);
    *(_QWORD*)(a2 + 48) = v5;
  }
  SceneCharacter_1402470(a2 + 80, a1 + 80);
  *(_BYTE*)(a2 + 208) = *(_BYTE*)(a1 + 208);
  result = *(_QWORD*)(a1 + 256);
  if (result != 0) {
    if (result == a1 + 224) {
      *(_QWORD*)(a2 + 256) = a2 + 224;
      return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 256) + 24LL))(
          *(_QWORD*)(a1 + 256));
    }
    else {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      *(_QWORD*)(a2 + 256) = result;
    }
  }
  else {
    *(_QWORD*)(a2 + 256) = 0;
  }
  return result;
}

__int64 game_facility_SceneCharacter_SceneCharacter_lambda0_Destructor_1403400(
    _QWORD* a1)
{
  *a1 = GameData_2038848;
  return GameRoutine_a0d9a0(a1 + 4);
}

__int64

game_facility_SceneCharacter_SceneCharacter_lambda0_DeletingDestructor_1403410(
    _QWORD* a1)
{
  __int64 v1;

  *a1 = GameData_2038848;
  GameRoutine_a0d9a0(a1 + 4);
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v1);
}

_QWORD*

game_facility_SceneCharacter_SceneCharacter_lambda0_Clone_1403470(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 272, 16, 0);
  v3 = v2;
  *v2 = GameData_2038848;
  v2[2] = *(_QWORD*)(a1 + 16);
  v4 = *(_QWORD*)(a1 + 40);
  v2[4] = *(_QWORD*)(a1 + 32);
  v2[5] = v4;
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    fw_text_String_CopyTerminated(v2 + 6, *(_QWORD*)(a1 + 64),
                                  *(_QWORD*)(a1 + 56));
  }
  else {
    v5 = *(_QWORD*)(a1 + 56);
    v6 = *(_QWORD*)(a1 + 64);
    v2[6] = *(_QWORD*)(a1 + 48);
    v2[7] = v5;
    v2[8] = v6;
  }
  SceneCharacter_1402470((__int64)(v3 + 10), a1 + 80);
  v7 = *(_QWORD*)(a1 + 256);
  *((_BYTE*)v3 + 208) = *(_BYTE*)(a1 + 208);
  if (v7 != 0) {
    if (v7 == a1 + 224) {
      v3[32] = v3 + 28;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
    }
    else {
      v3[32] = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    }
  }
  else {
    v3[32] = 0;
  }
  return v3;
}

__int64 game_facility_SceneCharacter_SceneCharacter_lambda0_CloneInto_1403570(
    __int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 result;

  *(_QWORD*)a2 = GameData_2038848;
  *(_QWORD*)(a2 + 16) = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a2 + 32) = *(_QWORD*)(a1 + 32);
  v4 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a2 + 40) = v4;
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    fw_text_String_CopyTerminated(a2 + 48, *(_QWORD*)(a1 + 64),
                                  *(_QWORD*)(a1 + 56));
  }
  else {
    *(_QWORD*)(a2 + 56) = *(_QWORD*)(a1 + 56);
    v5 = *(_QWORD*)(a1 + 48);
    *(_QWORD*)(a2 + 64) = *(_QWORD*)(a1 + 64);
    *(_QWORD*)(a2 + 48) = v5;
  }
  SceneCharacter_1402470(a2 + 80, a1 + 80);
  *(_BYTE*)(a2 + 208) = *(_BYTE*)(a1 + 208);
  result = *(_QWORD*)(a1 + 256);
  if (result != 0) {
    if (result == a1 + 224) {
      *(_QWORD*)(a2 + 256) = a2 + 224;
      return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 256) + 24LL))(
          *(_QWORD*)(a1 + 256));
    }
    else {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      *(_QWORD*)(a2 + 256) = result;
    }
  }
  else {
    *(_QWORD*)(a2 + 256) = 0;
  }
  return result;
}

_QWORD* game_facility_SceneCharacter_ChangeAppearance_lambda0_Clone(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  *result = GameData_20388d8;
  v3 = a1[3];
  result[2] = a1[2];
  result[3] = v3;
  v4 = a1[4];
  result[4] = v4;
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  v5 = (_QWORD*)a1[10];
  if (v5 != nullptr) {
    if (v5 == a1 + 6) {
      v6 = result;
      result[10] = result + 6;
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v5 + 24LL))(v5, v5);
    }
    else {
      v6 = result;
      result[10] =
          (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD*))(*v5 + 16LL))(v5,
                                                                         v5);
    }
    return v6;
  }
  else {
    result[10] = 0;
  }
  return result;
}

_QWORD*

game_facility_SceneCharacter_ChangeAppearance_lambda0_CloneInto(_QWORD* result,
                                                                _QWORD* a2)
{
  __int64 v3;
  _QWORD* v4;

  *a2 = GameData_20388d8;
  a2[2] = result[2];
  a2[3] = result[3];
  v3 = result[4];
  a2[4] = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  v4 = (_QWORD*)result[10];
  if (v4 != nullptr) {
    if (v4 == result + 6) {
      a2[10] = a2 + 6;
      return (_QWORD*)(*(__int64 (**)(_QWORD))(*(_QWORD*)result[10] + 24LL))(
          result[10]);
    }
    else {
      result = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD))(*v4 + 16LL))(
          v4, result[10]);
      a2[10] = result;
    }
  }
  else {
    a2[10] = 0;
  }
  return result;
}

__int64

game_facility_SceneCharacter_ChangeAppearance_lambda0_Invoke(_QWORD* a1,
                                                             __int64* a2)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 result;
  __int64 v7[2];
  __int64 v8;

  v3 = *a2;
  v4 = (_QWORD*)a1[2];
  v5 = a1[4];
  v7[0] = a1[3];
  v7[1] = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    SceneCharacter_1402240(v4, v7);
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak(v5);
    }
  }
  else {
    SceneCharacter_1402240(v4, v7);
  }
  result = a1[10];
  if (result != 0) {
    v8 = v3;
    return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)result + 48LL))(result,
                                                                         &v8);
  }
  return result;
}

#pragma GCC visibility pop
