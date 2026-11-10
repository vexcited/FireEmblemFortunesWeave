#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1074de0(_QWORD);
__int64 GameRoutine_81de20(_QWORD, _QWORD);
__int64 GameRoutine_81e020(_QWORD, _QWORD);
__int64 GameRoutine_a867a0(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 CharacterModel_cf4780(__int64 a1);
__int64 CharacterModel_cf4780_alt1(_QWORD) __asm__("CharacterModel_cf4780");
__int64 CharacterModel_cfa1b0_alt1(_QWORD) __asm__("CharacterModel_cfa1b0");
__int64 CharacterModel_cfb0d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CharacterModel_cfb240_alt1(_QWORD, _QWORD,
                                   _QWORD) __asm__("CharacterModel_cfb240");
__int64 CharacterModel_cfb400_alt1(_QWORD) __asm__("CharacterModel_cfb400");
__int64 CharacterModel_cfb780_alt1(_QWORD,
                                   _QWORD) __asm__("CharacterModel_cfb780");
__int64 GameRoutine_107e140(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_cf5da0(_QWORD);
__int64 GameRoutine_dac700(_QWORD, _QWORD);
__int64 HubCharacterNatives_cf7940(__int64);
__int64 WaitRelease_cfa2a0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_220f840;
extern _UNKNOWN* GameData_212d4d8;
extern __int64 (*GameData_1fd8080[])();
extern __int64 (*GameData_1fd8490[])();
extern __int64 (*GameData_1fd87b8[])();
extern __int64 (*game_zview_CharacterModel_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_220f838;
extern int* GameData_212d4d0;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_cfa190(void);
void __attribute__((noreturn)) GameRoutine_cfb8e0(void);
_QWORD* CharacterModel_Destructor(__int64 a1);
__int64 game_zview_CharacterModel_SetupReloadAppearance(__int64 result,
                                                        __int64 a2);
__int64 CharacterModel_cf4c10(__int64 a1);
__int64 game_zview_CharacterModel_SetActiveSignal(__int64 result, char a2);
__int64 CharacterModel_cf9f80(__int64* a1, __int64 a2);
_QWORD* CharacterModel_cfa1b0(_QWORD* result);
__int64 game_zview_CharacterModel_SetupComplete_lambda0_Invoke(__int64 result,
                                                               __int64* a2,
                                                               __int64* a3);
void game_zview_CharacterModel_SetupComplete_lambda1_Invoke(__int64 a1,
                                                            __int64 a2);
void game_zview_CharacterModel_GameViewExit_lambda0_Invoke(__int64 a1,
                                                           __int64 a2);
__int64 game_zview_CharacterModel_TryMakeObj_lambda0_Invoke(__int64 a1,
                                                            __int64 a2);
__int64 CharacterModel_cfb240(__int64* a1, __int64 a2, __int64 a3);
__int64 CharacterModel_cfb400(__int64 a1, __int64 a2);
__int64 CharacterModel_cfb540(__int64* a1, int* a2, __int64* a3, __int64 a4);
__int64* CharacterModel_cfb780(__int64* result, _QWORD* a2);
float game_zview_CharacterModel_UpdateOutlineBold_lambda0_Invoke(__int64 a1,
                                                                 __int64 a2);
__int64 game_zview_CharacterModel_CommitRimMode_lambda0_Invoke(__int64 result,
                                                               __int64 a2);
void game_zview_CharacterModel_ClothStabilize_lambda0_Invoke(__int64 a1,
                                                             __int64 a2);
__int64 CharacterModel_cf4c10_alt1(_QWORD) __asm__("CharacterModel_cf4c10");
extern _UNKNOWN* GameData_212df10;
extern int* GameData_212df08;
__int64
game_zview_CharacterModel_SetupReloadAppearance_lambda0_Invoke(__int64 a1);
__int64
game_zview_CharacterModel_SetShadowRemaining_lambda0_Invoke(__int64 result,
                                                            __int64 a2);

_QWORD* CharacterModel_Destructor(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD* result;
  __int64 v22;
  __int64 v23;

  *(_QWORD*)a1 = game_zview_CharacterModel_vtable;
  if (*(_BYTE*)(a1 + 44) == 1) {
    v2 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8LL * *(int*)(a1 + 40));
    (*(void (**)(__int64))(*(_QWORD*)v2 + 40LL))(v2);
    if (*(_BYTE*)(a1 + 44) == 1) {
      *(_BYTE*)(a1 + 44) = 0;
    }
  }
  v3 = *(_QWORD**)(a1 + 56);
  v4 = *(_QWORD**)(a1 + 64);
  if (v3 != v4) {
    do {
      if (*v3 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
        *v3 = 0;
      }
      ++v3;
    } while (v3 != v4);
    v3 = *(_QWORD**)(a1 + 56);
  }
  v5 = *(_QWORD*)(a1 + 336);
  *(_QWORD*)(a1 + 64) = v3;
  *(_QWORD*)(a1 + 336) = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = *(_QWORD*)(a1 + 328);
  *(_QWORD*)(a1 + 328) = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  v7 = *(_QWORD*)(a1 + 352);
  *(_QWORD*)(a1 + 352) = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  v8 = *(_QWORD*)(a1 + 344);
  *(_QWORD*)(a1 + 344) = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  CharacterModel_cf4780_alt1(a1);
  v9 = *(_QWORD*)(a1 + 392);
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  v10 = *(_QWORD*)(a1 + 376);
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  v11 = *(_QWORD*)(a1 + 352);
  *(_QWORD*)(a1 + 352) = 0;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
  v12 = *(_QWORD*)(a1 + 344);
  *(_QWORD*)(a1 + 344) = 0;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
  }
  v13 = *(_QWORD*)(a1 + 336);
  *(_QWORD*)(a1 + 336) = 0;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  v14 = *(_QWORD*)(a1 + 328);
  *(_QWORD*)(a1 + 328) = 0;
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
  }
  CharacterModel_cfa1b0_alt1(*(_QWORD*)(a1 + 288));
  if ((*(_BYTE*)(a1 + 192) & 1) != 0) {
    v15 = *(_QWORD*)(a1 + 208);
    if (v15 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v15);
    }
  }
  v17 = *(_QWORD*)(a1 + 168);
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak(v17);
  }
  *(_QWORD*)(a1 + 32) = GameData_1fd87b8;
  if (*(_BYTE*)(a1 + 44) == 1) {
    v18 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8LL * *(int*)(a1 + 40));
    (*(void (**)(__int64))(*(_QWORD*)v18 + 40LL))(v18);
    if (*(_BYTE*)(a1 + 44) == 1) {
      *(_BYTE*)(a1 + 44) = 0;
    }
  }
  v19 = *(_QWORD**)(a1 + 56);
  v20 = *(_QWORD**)(a1 + 64);
  if (v19 != v20) {
    do {
      if (*v19 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v19 + 8LL))(*v19);
        *v19 = 0;
      }
      ++v19;
    } while (v19 != v20);
    v19 = *(_QWORD**)(a1 + 56);
  }
  result = *(_QWORD**)(a1 + 112);
  *(_QWORD*)(a1 + 64) = v19;
  if (result == (_QWORD*)(a1 + 80)) {
    v22 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_54;
    }
    v22 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v22))((__int64)result);
  v19 = *(_QWORD**)(a1 + 56);
LABEL_54:
  if (v19 != nullptr) {
    *(_QWORD*)(a1 + 64) = v19;
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v19);
  }
  return result;
}

__int64 CharacterModel_cf4780(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  if (*(_BYTE*)(a1 + 367) == 1) {
    *(_BYTE*)(a1 + 367) = 0;
  }
  v2 = *(_QWORD*)(a1 + 16);
  do {
    v3 = v2;
    v2 = *(_QWORD*)(v2 + 600);
  } while (v2 != 0);
  v4 = *(_QWORD*)(v3 + 168);
  if (v4 != 0) {
    v5 = *(_QWORD*)(a1 + 376);
    v13 = *(_QWORD*)(a1 + 368);
    v14 = v5;
    if (v5 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
    }
    GameRoutine_81de20(v4, &v13);
    if (v14 != 0) {
      std___1___shared_weak_count___release_weak(v14);
    }
    v6 = *(_QWORD*)(a1 + 392);
    v11 = *(_QWORD*)(a1 + 384);
    v12 = v6;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                memory_order_relaxed);
    }
    GameRoutine_81e020(v4, &v11);
    if (v12 != 0) {
      std___1___shared_weak_count___release_weak(v12);
    }
  }
  v7 = *(_QWORD*)(a1 + 376);
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = *(_QWORD*)(a1 + 392);
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  if (*(_QWORD*)(a1 + 312) != 0) {
    GameRoutine_a867a0(a1 + 312);
  }
  v9 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 312) = 0;
  result = *(_QWORD*)(v9 + 128);
  if (result != 0) {
    result = GameRoutine_1074de0(result);
  }
  *(_BYTE*)(a1 + 225) = 0;
  return result;
}

__int64 game_zview_CharacterModel_SetupReloadAppearance(__int64 result,
                                                        __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v6;
  _QWORD v7[4];
  _QWORD* v8;

  if (*(_QWORD*)(result + 312) != 0) {
    v2 = *(_QWORD*)(result + 232);
    v3 = result;
    if (v2 != 0) {
      GameRoutine_cf5da0(result);
      if (*(_BYTE*)(v3 + 44) != 1 || *(_DWORD*)(v3 + 40) != 1) {
        *(_DWORD*)(v3 + 48) = 1;
        *(_BYTE*)(v3 + 52) = 1;
      }
      if ((*(_BYTE*)(v3 + 128) & 1) == 0 && (*(_BYTE*)(v3 + 129) & 1) != 0) {
        WaitRelease_cfa2a0(v3 + 32);
      }
      *(_BYTE*)(v3 + 225) = 1;
      *(_DWORD*)(v2 + 340) &= 0xFFFFFFE3;
      v7[0] = GameData_1fd8080;
      v7[1] = v3;
      v8 = v7;
      GameRoutine_107e140(v2, a2, v7);
      result = (__int64)v8;
      if (v8 == v7) {
        v6 = 32;
      }
      else {
        if (v8 == nullptr) {
          return result;
        }
        v6 = 40;
      }
      return (*(__int64 (**)(__int64))(*v8 + v6))((__int64)v8);
    }
  }
  return result;
}

__int64 CharacterModel_cf4c10(__int64 a1)
{
  __int64 result;
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

  *(_BYTE*)(a1 + 96) = 1;
  result = WaitRelease_cfa2a0(a1);
  if (*(_BYTE*)(a1 + 12) == 1) {
    v3 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
  }
  if (*(_BYTE*)(a1 + 20) == 1) {
    result = WaitRelease_cfa2a0(a1);
    if (*(_BYTE*)(a1 + 12) == 1) {
      v4 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    }
    if (*(_BYTE*)(a1 + 20) == 1) {
      result = WaitRelease_cfa2a0(a1);
      if (*(_BYTE*)(a1 + 12) == 1) {
        v5 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
      }
      if (*(_BYTE*)(a1 + 20) == 1) {
        result = WaitRelease_cfa2a0(a1);
        if (*(_BYTE*)(a1 + 12) == 1) {
          v6 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
        }
        if (*(_BYTE*)(a1 + 20) == 1) {
          result = WaitRelease_cfa2a0(a1);
          if (*(_BYTE*)(a1 + 12) == 1) {
            v7 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
            result = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
          }
          if (*(_BYTE*)(a1 + 20) == 1) {
            result = WaitRelease_cfa2a0(a1);
            if (*(_BYTE*)(a1 + 12) == 1) {
              v8 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
              result = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8);
            }
            if (*(_BYTE*)(a1 + 20) == 1) {
              result = WaitRelease_cfa2a0(a1);
              if (*(_BYTE*)(a1 + 12) == 1) {
                v9 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
                result = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9);
              }
              if (*(_BYTE*)(a1 + 20) == 1) {
                result = WaitRelease_cfa2a0(a1);
                if (*(_BYTE*)(a1 + 12) == 1) {
                  v10 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
                  result =
                      (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 32LL))(v10);
                }
                if (*(_BYTE*)(a1 + 20) == 1) {
                  result = WaitRelease_cfa2a0(a1);
                  if (*(_BYTE*)(a1 + 12) == 1) {
                    v11 =
                        *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
                    result =
                        (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 32LL))(v11);
                  }
                  if (*(_BYTE*)(a1 + 20) == 1) {
                    result = WaitRelease_cfa2a0(a1);
                    if (*(_BYTE*)(a1 + 12) == 1) {
                      v12 = *(_QWORD*)(*(_QWORD*)(a1 + 24) +
                                       8LL * *(int*)(a1 + 8));
                      result =
                          (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 32LL))(v12);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(_WORD*)(a1 + 96) = 256;
  return result;
}

__int64 game_zview_CharacterModel_SetActiveSignal(__int64 result, char a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  char* v10;
  char* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[4];
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  if (*(_BYTE*)(result + 256) != (a2 & 1)) {
    v4 = *(_QWORD**)(result + 232);
    if (v4 != nullptr) {
      v20 = v2;
      v21 = v3;
      v5 = v4[15];
      *(_BYTE*)(result + 256) = a2 & 1;
      if ((a2 & 1) != 0) {
        v6 = v4[6];
        v7 = v4[7];
        v8 = result;
        if (v7 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                    memory_order_relaxed);
          v18 = v6;
          v19 = v7;
          v16[0] = GameData_1fd8490;
          v16[1] = result;
          v17 = v16;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                    memory_order_relaxed);
        }
        else {
          v18 = v4[6];
          v19 = 0;
          v16[0] = GameData_1fd8490;
          v16[1] = result;
          v17 = v16;
        }
        v12 = CharacterModel_cfb0d0(v5 + 120, &v18, v16, 1);
        if (v19 != 0) {
          std___1___shared_weak_count___release_weak(v19);
        }
        result = (__int64)v17;
        *(_DWORD*)(v8 + 320) = v12;
        *(_BYTE*)(v8 + 324) = 1;
        if ((_QWORD*)result == v16) {
          v13 = 32;
        }
        else {
          if (result == 0) {
            goto LABEL_21;
          }
          v13 = 40;
        }
        result =
            (*(__int64 (**)(__int64))(*(_QWORD*)result + v13))((__int64)result);
      LABEL_21:
        if (v7 != 0) {
          return std___1___shared_weak_count___release_weak(v7);
        }
        return result;
      }
      if (*(_BYTE*)(result + 324) == 1) {
        v9 = *(_DWORD*)(result + 320);
        if (v9 != 0) {
          v11 = *(char**)(v5 + 120);
          v10 = *(char**)(v5 + 128);
          if (v11 != v10) {
            do {
              if (v9 == *(_DWORD*)v11) {
                *(_DWORD*)v11 = 0;
              }
              v11 += 80;
            } while (v11 != v10);
            v11 = *(char**)(v5 + 120);
            v10 = *(char**)(v5 + 128);
          }
          if (0xCCCCCCCCCCCCCCCDLL * ((v10 - v11) >> 4) >= 0x40) {
            v14 = result;
            v15 = CharacterModel_cfb400_alt1(v11);
            CharacterModel_cfb240_alt1(v5 + 120, v15, *(_QWORD*)(v5 + 128));
            result = v14;
          }
        }
        if (*(_BYTE*)(result + 324) == 1) {
          *(_BYTE*)(result + 324) = 0;
        }
      }
    }
  }
  return result;
}

__int64 CharacterModel_cf9f80(__int64* a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;

  v2 = a1[1] - *a1;
  v3 = 1 - 0x5555555555555555LL * (v2 >> 4);
  if (v3 > 0x555555555555555LL) {
    GameRoutine_cfa190();
  }
  v6 = fw_memory_g_heap_manager_ptr;
  if (0x5555555555555556LL * ((a1[2] - *a1) >> 4) > v3) {
    v3 = 0x5555555555555556LL * ((a1[2] - *a1) >> 4);
  }
  if (0xAAAAAAAAAAAAAAABLL * ((a1[2] - *a1) >> 4) >= 0x2AAAAAAAAAAAAAALL) {
    v7 = 0x555555555555555LL;
  }
  else {
    v7 = v3;
  }
  if (v7 != 0) {
    if (v7 > 0x555555555555555LL) {
      GameRoutine_60a210(a1);
    }
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        48 * v7, 16, 0);
  }
  else {
    v8 = 0;
  }
  v9 = *(_QWORD*)(a2 + 32);
  v10 = v8 + v2;
  if (v9 != 0) {
    if (v9 == a2) {
      *(_QWORD*)(v10 + 32) = v10;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v9 + 24LL))(v9, v10);
    }
    else {
      *(_QWORD*)(v10 + 32) = v9;
      *(_QWORD*)(a2 + 32) = 0;
    }
  }
  else {
    *(_QWORD*)(v10 + 32) = 0;
  }
  v11 = v8 + 48 * v7;
  v12 = (_QWORD*)*a1;
  v13 = (_QWORD*)a1[1];
  v14 = v10 + 48;
  v15 = v10 + *a1 - (_QWORD)v13;
  if (v13 != (_QWORD*)*a1) {
    v16 = (_QWORD*)*a1;
    v17 = v10 + *a1 - (_QWORD)v13;
    do {
      v18 = (_QWORD*)v16[4];
      if (v18 != nullptr) {
        if (v16 == v18) {
          *(_QWORD*)(v17 + 32) = v17;
          (*(void (**)(_QWORD, __int64))(*(_QWORD*)v16[4] + 24LL))(v16[4], v17);
        }
        else {
          *(_QWORD*)(v17 + 32) = v18;
          v16[4] = 0;
        }
      }
      else {
        *(_QWORD*)(v17 + 32) = 0;
      }
      v16 += 6;
      v17 += 48;
    } while (v16 != v13);
    while (1) {
      v20 = (_QWORD*)v12[4];
      if (v12 == v20) {
        v19 = 32;
      }
      else {
        if (v20 == nullptr) {
          goto LABEL_26;
        }
        v19 = 40;
      }
      (*(void (**)(void))(*v20 + v19))();
    LABEL_26:
      v12 += 6;
      if (v12 == v13) {
        v12 = (_QWORD*)*a1;
        break;
      }
    }
  }
  *a1 = v15;
  a1[1] = v14;
  a1[2] = v11;
  if (v12 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v21, v12);
  }
  return v14;
}

_QWORD* CharacterModel_cfa1b0(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if (result != nullptr) {
    v1 = result;
    CharacterModel_cfa1b0(*result);
    CharacterModel_cfa1b0(v1[1]);
    v2 = v1[8];
    if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak(v2);
    }
    v3 = fw_memory_g_heap_manager_ptr;
    if ((v1[4] & 1) != 0) {
      v4 = v1[6];
      if (v4 != 0) {
        v5 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v5 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
      }
    }
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v6 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, v1);
  }
  return result;
}

__int64

game_zview_CharacterModel_SetupReloadAppearance_lambda0_Invoke(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v1 + 225) = 0;
  return CharacterModel_cf4c10_alt1(v1 + 32);
}

__int64 game_zview_CharacterModel_SetupComplete_lambda0_Invoke(__int64 result,
                                                               __int64* a2,
                                                               __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v3 = *a2;
  v4 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v5 = *a3;
  v6 = a3[1];
  *a3 = 0;
  a3[1] = 0;
  v7 = *(_QWORD*)(result + 8);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
  }
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                              memory_order_relaxed);
  }
  v8 = *(_QWORD*)(*(_QWORD*)(v7 + 16) + 32LL);
  if (v8 != 0) {
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                memory_order_relaxed);
    }
    v13 = v3;
    v14 = v4;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                memory_order_relaxed);
    }
    v9 = *(_QWORD**)(v8 + 408);
    v10 = *(_QWORD*)(v8 + 416);
    v15 = v5;
    v16 = v6;
    if ((unsigned __int64)v9 >= v10) {
      v12 = GameRoutine_dac700(v8 + 400, &v13);
      v11 = v16;
      *(_QWORD*)(v8 + 408) = v12;
      if (v11 == 0) {
        goto LABEL_19;
      }
    }
    else {
      *v9 = v3;
      v9[1] = v4;
      if (v4 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                  memory_order_relaxed);
      }
      v9[2] = v5;
      v9[3] = v6;
      if (v6 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                  memory_order_relaxed);
      }
      v11 = v6;
      *(_QWORD*)(v8 + 408) = v9 + 4;
      if (v6 == 0) {
        goto LABEL_19;
      }
    }
    std___1___shared_weak_count___release_weak(v11);
  LABEL_19:
    result = v14;
    if (v14 != 0) {
      result = std___1___shared_weak_count___release_weak(v14);
    }
  }
  if (v6 != 0) {
    result = std___1___shared_weak_count___release_weak(v6);
  }
  if (v4 != 0) {
    result = std___1___shared_weak_count___release_weak(v4);
  }
  if (v6 != 0) {
    result = std___1___shared_weak_count___release_weak(v6);
  }
  if (v4 != 0) {
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

void game_zview_CharacterModel_SetupComplete_lambda1_Invoke(__int64 a1,
                                                            __int64 a2)
{
  __int64 v2;
  __int64 i;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_220f840,
                            memory_order_acquire) &
       1) == 0) {
    v7 = a2;
    v6 = __cxa_guard_acquire(&GameData_220f840);
    a2 = v7;
    if (v6 != 0) {
      GameData_220f838 = wld_Crc32(0, "ClothModule", 11);
      __cxa_guard_release(&GameData_220f840);
      a2 = v7;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  for (i = v2; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v4 = *(_DWORD*)(i - 16);
    v2 -= 16;
    if (v4 == GameData_220f838) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          *(_BYTE*)(v5 + 60) = 1;
        }
      }
      return;
    }
  }
}

void game_zview_CharacterModel_GameViewExit_lambda0_Invoke(__int64 a1,
                                                           __int64 a2)
{
  __int64 v2;
  __int64 i;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_220f840,
                            memory_order_acquire) &
       1) == 0) {
    v7 = a2;
    v6 = __cxa_guard_acquire(&GameData_220f840);
    a2 = v7;
    if (v6 != 0) {
      GameData_220f838 = wld_Crc32(0, "ClothModule", 11);
      __cxa_guard_release(&GameData_220f840);
      a2 = v7;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  for (i = v2; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v4 = *(_DWORD*)(i - 16);
    v2 -= 16;
    if (v4 == GameData_220f838) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          *(_BYTE*)(v5 + 60) = 0;
        }
      }
      return;
    }
  }
}

__int64 game_zview_CharacterModel_TryMakeObj_lambda0_Invoke(__int64 a1,
                                                            __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(*(_QWORD*)a2 + 8LL);
  result = HubCharacterNatives_cf7940(v2);
  if (v3 == result) {
    *(_WORD*)(v2 + 366) = 257;
  }
  return result;
}

__int64 CharacterModel_cfb240(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;

  if (a2 == a3) {
    return a2;
  }
  v4 = a1[1];
  if (a3 == v4) {
    v19 = a2;
    if (a2 == v4) {
      goto LABEL_20;
    }
  LABEL_23:
    while (1) {
      v21 = *(_QWORD**)(v4 - 16);
      if ((_QWORD*)(v4 - 48) == v21) {
        break;
      }
      if (v21 != nullptr) {
        v22 = 40;
      LABEL_27:
        (*(void (**)(void))(*v21 + v22))();
      }
      v23 = *(_QWORD*)(v4 - 64);
      if (v23 != 0) {
        std___1___shared_weak_count___release_weak(v23);
      }
      v4 -= 80;
      if (v4 == v19) {
        goto LABEL_20;
      }
    }
    v22 = 32;
    goto LABEL_27;
  }
  v6 = *a1;
  v7 = *a1 + a2;
  v8 = -*a1;
  v9 = *a1 + a3;
  do {
    v10 = v9 + v8;
    v11 = v7 + v8;
    *(_DWORD*)v11 = *(_DWORD*)(v9 + v8);
    v12 = *(_QWORD*)(v9 + v8 + 8);
    v13 = *(_QWORD*)(v9 + v8 + 16);
    *(_QWORD*)(v10 + 8) = 0;
    *(_QWORD*)(v10 + 16) = 0;
    v14 = *(_QWORD*)(v7 + v8 + 16);
    *(_QWORD*)(v11 + 8) = v12;
    *(_QWORD*)(v11 + 16) = v13;
    if (v14 != 0) {
      std___1___shared_weak_count___release_weak(v14);
    }
    v15 = *(_QWORD**)(v11 + 64);
    *(_QWORD*)(v11 + 64) = 0;
    if ((_QWORD*)(v11 + 32) == v15) {
      v16 = 32;
    }
    else {
      if (v15 == nullptr) {
        goto LABEL_13;
      }
      v16 = 40;
    }
    (*(void (**)(void))(*v15 + v16))();
  LABEL_13:
    v17 = v9 + v8;
    v18 = *(_QWORD*)(v9 + v8 + 64);
    if (v18 != 0) {
      if (v10 + 32 == v18) {
        *(_QWORD*)(v11 + 64) = v11 + 32;
        (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v17 + 64) + 24LL))(
            *(_QWORD*)(v17 + 64), v11 + 32);
      }
      else {
        *(_QWORD*)(v11 + 64) = v18;
        *(_QWORD*)(v17 + 64) = 0;
      }
    }
    else {
      *(_QWORD*)(v11 + 64) = 0;
    }
    v9 += 80;
    v7 += 80;
  } while (v9 + v8 != v4);
  v4 = a1[1];
  v19 = v7 - v6;
  if (v7 - v6 != v4) {
    goto LABEL_23;
  }
LABEL_20:
  a1[1] = v19;
  return a2;
}

__int64 CharacterModel_cfb400(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;

  v3 = a1;
  if (a1 == a2) {
  LABEL_7:
    if (v3 == a2) {
      return v3;
    }
    for (i = v3 + 80;; i += 80) {
      if (i == a2) {
        return v3;
      }
      if (*(_DWORD*)i != 0) {
        v6 = *(_QWORD*)(i + 16);
        if (v6 != 0 && *(_QWORD*)(v6 + 8) != -1) {
          break;
        }
      }
    LABEL_11:;
    }
    *(_DWORD*)v3 = *(_DWORD*)i;
    v7 = *(_QWORD*)(i + 8);
    v8 = *(_QWORD*)(i + 16);
    *(_QWORD*)(i + 8) = 0;
    *(_QWORD*)(i + 16) = 0;
    v9 = *(_QWORD*)(v3 + 16);
    *(_QWORD*)(v3 + 8) = v7;
    *(_QWORD*)(v3 + 16) = v8;
    if (v9 != 0) {
      std___1___shared_weak_count___release_weak(v9);
    }
    v10 = *(_QWORD**)(v3 + 64);
    *(_QWORD*)(v3 + 64) = 0;
    if (v10 == (_QWORD*)(v3 + 32)) {
      v11 = 32;
    }
    else {
      if (v10 == nullptr) {
      LABEL_23:
        v12 = *(_QWORD*)(i + 64);
        if (v12 != 0) {
          if (i + 32 == v12) {
            *(_QWORD*)(v3 + 64) = v3 + 32;
            (*(void (**)(_QWORD, __int64))(**(_QWORD**)(i + 64) + 24LL))(
                *(_QWORD*)(i + 64), v3 + 32);
          }
          else {
            *(_QWORD*)(v3 + 64) = v12;
            *(_QWORD*)(i + 64) = 0;
          }
        }
        else {
          *(_QWORD*)(v3 + 64) = 0;
        }
        v3 += 80;
        goto LABEL_11;
      }
      v11 = 40;
    }
    (*(void (**)(void))(*v10 + v11))();
    goto LABEL_23;
  }
  do {
    if (*(_DWORD*)v3 == 0) {
      goto LABEL_7;
    }
    v4 = *(_QWORD*)(v3 + 16);
    if (v4 == 0 || *(_QWORD*)(v4 + 8) == -1) {
      goto LABEL_7;
    }
    v3 += 80;
  } while (v3 != a2);
  return a2;
}

__int64 CharacterModel_cfb540(__int64* a1, int* a2, __int64* a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  _QWORD* v33;

  v4 = *a1;
  v5 = a1[1] - *a1;
  v6 = 1 - 0x3333333333333333LL * (v5 >> 4);
  if (v6 > 0x333333333333333LL) {
    GameRoutine_cfb8e0();
  }
  v7 = a1[2];
  v33 = a1 + 2;
  v12 = fw_memory_g_heap_manager_ptr;
  v13 = 0xCCCCCCCCCCCCCCCDLL * ((v7 - v4) >> 4);
  if (2 * v13 > v6) {
    v6 = 2 * v13;
  }
  if (v13 >= 0x199999999999999LL) {
    v14 = 0x333333333333333LL;
  }
  else {
    v14 = v6;
  }
  if (v14 != 0) {
    if (v14 > 0x333333333333333LL) {
      GameRoutine_60a210(a1);
    }
    v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         80 * v14, 16, 0);
  }
  else {
    v15 = 0;
  }
  v16 = *a2;
  v17 = v15 + v5;
  v29 = v15;
  v30 = v17;
  v32 = v15 + 80 * v14;
  v18 = *a3;
  v19 = a3[1];
  if (v19 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
    *(_DWORD*)v17 = v16;
    *(_QWORD*)(v17 + 8) = v18;
    *(_QWORD*)(v17 + 16) = v19;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
    v20 = *(_QWORD*)(a4 + 32);
    if (v20 != 0) {
      goto LABEL_13;
    }
  }
  else {
    *(_DWORD*)v17 = v16;
    *(_QWORD*)(v17 + 8) = v18;
    *(_QWORD*)(v17 + 16) = 0;
    v20 = *(_QWORD*)(a4 + 32);
    if (v20 != 0) {
    LABEL_13:
      if (v20 == a4) {
        *(_QWORD*)(v17 + 64) = v17 + 32;
        (*(void (**)(__int64))(*(_QWORD*)v20 + 24LL))(v20);
        if (v19 == 0) {
          goto LABEL_19;
        }
      }
      else {
        *(_QWORD*)(v17 + 64) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        if (v19 == 0) {
          goto LABEL_19;
        }
      }
      goto LABEL_18;
    }
  }
  *(_QWORD*)(v17 + 64) = 0;
  if (v19 != 0) {
  LABEL_18:
    std___1___shared_weak_count___release_weak(v19);
  }
LABEL_19:
  v31 = v17 + 80;
  CharacterModel_cfb780_alt1(a1, &v29);
  v21 = a1[1];
  v22 = v30;
  while (1) {
    v23 = v31;
    if (v22 == v31) {
      break;
    }
    v31 -= 80;
    v24 = *(_QWORD**)(v23 - 16);
    if (v24 == (_QWORD*)(v23 - 48)) {
      v25 = 32;
      goto LABEL_25;
    }
    if (v24 != nullptr) {
      v25 = 40;
    LABEL_25:
      (*(void (**)(__int64))(*v24 + v25))((__int64)v24);
    }
    v26 = *(_QWORD*)(v23 - 64);
    if (v26 != 0) {
      std___1___shared_weak_count___release_weak(v26);
    }
  }
  if (v29 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v27, v29);
  }
  return v21;
}

__int64* CharacterModel_cfb780(__int64* result, _QWORD* a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v3 = *result;
  v2 = (_QWORD*)result[1];
  v5 = result;
  v6 = a2[1] + *result - (_QWORD)v2;
  if (v2 != (_QWORD*)*result) {
    v7 = 0;
    do {
      v8 = v3 + v7;
      v9 = v6 + v7;
      *(_DWORD*)v9 = *(_DWORD*)(v3 + v7);
      *(_QWORD*)(v9 + 8) = *(_QWORD*)(v3 + v7 + 8);
      *(_QWORD*)(v9 + 16) = *(_QWORD*)(v3 + v7 + 16);
      *(_QWORD*)(v8 + 8) = 0;
      *(_QWORD*)(v8 + 16) = 0;
      v10 = *(_QWORD*)(v3 + v7 + 64);
      if (v10 != 0) {
        if (v8 + 32 == v10) {
          *(_QWORD*)(v9 + 64) = v9 + 32;
          (*(void (**)(_QWORD))(**(_QWORD**)(v8 + 64) + 24LL))(
              *(_QWORD*)(v8 + 64));
        }
        else {
          *(_QWORD*)(v9 + 64) = v10;
          *(_QWORD*)(v8 + 64) = 0;
        }
      }
      else {
        *(_QWORD*)(v9 + 64) = 0;
      }
      v7 += 80;
    } while ((_QWORD*)(v3 + v7) != v2);
    v11 = (_QWORD*)(v3 + 32);
    while (1) {
      v13 = (_QWORD*)v11[4];
      if (v11 == v13) {
        break;
      }
      if (v13 != nullptr) {
        v14 = 40;
      LABEL_15:
        (*(void (**)(void))(*v13 + v14))();
      }
      result = (__int64*)*(v11 - 2);
      if (result != nullptr) {
        result = (__int64*)std___1___shared_weak_count___release_weak(result);
      }
      v12 = v11 + 6;
      v11 += 10;
      if (v12 == v2) {
        goto LABEL_18;
      }
    }
    v14 = 32;
    goto LABEL_15;
  }
LABEL_18:
  a2[1] = v6;
  v15 = *v5;
  v5[1] = *v5;
  *v5 = a2[1];
  a2[1] = v15;
  v16 = v5[1];
  v5[1] = a2[2];
  a2[2] = v16;
  v17 = v5[2];
  v5[2] = a2[3];
  a2[3] = v17;
  *a2 = a2[1];
  return result;
}

float game_zview_CharacterModel_UpdateOutlineBold_lambda0_Invoke(__int64 a1,
                                                                 __int64 a2)
{
  unsigned __int8 explicit;
  int* v3;
  int v4;
  __int64 v5;
  __int64 i;
  int v7;
  __int64 v8;
  float* v9;
  float result;
  int v11;
  __int64 v12;
  __int64 v13;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4d8,
                                  memory_order_acquire);
  v3 = GameData_212d4d0;
  if ((explicit & 1) == 0) {
    v12 = a2;
    v13 = a1;
    v11 = __cxa_guard_acquire(GameData_212d4d8);
    v3 = GameData_212d4d0;
    a2 = v12;
    a1 = v13;
    if (v11 != 0) {
      *GameData_212d4d0 = wld_Crc32(0, "CharacterMaterial", 17);
      __cxa_guard_release(GameData_212d4d8);
      v3 = GameData_212d4d0;
      a2 = v12;
      a1 = v13;
    }
  }
  v4 = *v3;
  v5 = *(_QWORD*)(a2 + 512);
  for (i = v5; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v7 = *(_DWORD*)(i - 16);
    v5 -= 16;
    if (v7 == v4) {
      if (*(_QWORD*)(a2 + 512) != v5) {
        v8 = *(_QWORD*)(v5 + 8);
        if (v8 != 0) {
          v9 = *(float**)(a1 + 8);
          result = *v9;
          *(float*)(v8 + 32) = *v9;
        }
      }
      return result;
    }
  }
  return result;
}

__int64 game_zview_CharacterModel_CommitRimMode_lambda0_Invoke(__int64 result,
                                                               __int64 a2)
{
  unsigned __int8 explicit;
  int* v3;
  __int64 v4;
  __int64 i;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  float v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4d8,
                                  memory_order_acquire);
  v3 = GameData_212d4d0;
  if ((explicit & 1) == 0) {
    v14 = result;
    v15 = a2;
    v16 = __cxa_guard_acquire(GameData_212d4d8);
    a2 = v15;
    v17 = v16;
    result = v14;
    if (v17 != 0) {
      *v3 = wld_Crc32(0, "CharacterMaterial", 17);
      __cxa_guard_release(GameData_212d4d8);
      a2 = v15;
      result = v14;
    }
  }
  v4 = *(_QWORD*)(a2 + 512);
  for (i = v4; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v6 = *(_DWORD*)(i - 16);
    v4 -= 16;
    if (v6 == *v3) {
      if (*(_QWORD*)(a2 + 512) != v4) {
        v7 = *(_QWORD*)(v4 + 8);
        if (v7 != 0) {
          v8 = *(_DWORD*)(result + 8);
          v9 = *(_QWORD*)(*(_QWORD*)(v7 + 240) + 24LL);
          if (v8 == 1) {
            *(_WORD*)(v7 + 113) = 256;
          }
          v10 = *(__int64**)(v9 + 312);
          v11 = *(__int64**)(v9 + 320);
          if (v10 != v11) {
            v12 = (float)v8;
            do {
              v13 = *v10;
              v10 += 2;
              result = (*(__int64 (**)(__int64, const char*, __int64, float))(
                  *(_QWORD*)v13 + 16LL))(v13, "Game_RimPattern", 15, v12);
            } while (v10 != v11);
          }
        }
      }
      return result;
    }
  }
  return result;
}

__int64

game_zview_CharacterModel_SetShadowRemaining_lambda0_Invoke(__int64 result,
                                                            __int64 a2)
{
  unsigned __int8 explicit;
  int* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  float v10;
  float v11;
  __int64 v12;
  _BYTE* v13;
  float v14;
  float v15;
  __int64 v16;
  int v17;
  unsigned __int64 v18;
  int v19;
  float v20;
  float v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v3 = GameData_212df08;
  if ((explicit & 1) == 0) {
    v25 = a2;
    v26 = result;
    v24 = __cxa_guard_acquire(GameData_212df10);
    v3 = GameData_212df08;
    a2 = v25;
    result = v26;
    if (v24 != 0) {
      *GameData_212df08 = wld_Crc32(0, "ModelModule", 11);
      __cxa_guard_release(GameData_212df10);
      v3 = GameData_212df08;
      a2 = v25;
      result = v26;
    }
  }
  v4 = *v3;
  v5 = *(_QWORD*)(a2 + 512);
  v6 = v5;
  do {
    if (v6 == *(_QWORD*)(a2 + 504)) {
      return result;
    }
    v7 = *(_DWORD*)(v6 - 16);
    v6 -= 16;
    v5 -= 16;
  } while (v7 != v4);
  if (*(_QWORD*)(a2 + 512) != v5) {
    v8 = *(_QWORD*)(v5 + 8);
    if (v8 != 0) {
      v9 = *(_QWORD*)(v8 + 136);
      if (**(_BYTE**)(result + 8) == 1) {
        if ((v9 & 8) != 0) {
          v13 = (_BYTE*)(v8 + 169);
          if ((*(_BYTE*)(v8 + 169) & 1) == 0) {
            goto LABEL_29;
          }
        }
        else {
          v10 = *(float*)(v8 + 120);
          v11 = *(float*)(v8 + 144);
          v9 |= 8uLL;
          *(_QWORD*)(v8 + 136) = v9;
          if (v10 == v11 && *(float*)(v8 + 124) == *(float*)(v8 + 148) &&
              *(float*)(v8 + 128) == *(float*)(v8 + 152) &&
              *(float*)(v8 + 132) == *(float*)(v8 + 156)) {
            v12 =
                ((unsigned __int8)*(_DWORD*)(v8 + 160) ^ (unsigned __int8)v9) &
                0x3F;
            *(_BYTE*)(v8 + 169) =
                (((unsigned __int8)*(_DWORD*)(v8 + 160) ^ (unsigned __int8)v9) &
                 0x3F) != 0;
            v13 = (_BYTE*)(v8 + 169);
            if (v12 == 0) {
              goto LABEL_29;
            }
          }
          else {
            *(_BYTE*)(v8 + 169) = 1;
            v13 = (_BYTE*)(v8 + 169);
          }
        }
        v17 = *(unsigned __int8*)(v8 + 20);
        *(_BYTE*)(v8 + 20) = v17 & 0xFB;
        if (v17 != (v17 & 0xFFFFFFFB)) {
          *(_BYTE*)(*(_QWORD*)(v8 + 8) + 728LL) = 0;
          v9 = *(_QWORD*)(v8 + 136);
        }
      LABEL_29:
        if ((v9 & 0x10) == 0) {
          v18 = v9 | 0x10;
        LABEL_38:
          v20 = *(float*)(v8 + 120);
          v21 = *(float*)(v8 + 144);
          *(_QWORD*)(v8 + 136) = v18;
          if (v20 == v21 && *(float*)(v8 + 124) == *(float*)(v8 + 148) &&
              *(float*)(v8 + 128) == *(float*)(v8 + 152) &&
              *(float*)(v8 + 132) == *(float*)(v8 + 156)) {
            v22 =
                ((unsigned __int8)*(_DWORD*)(v8 + 160) ^ (unsigned __int8)v18) &
                0x3F;
            *(_BYTE*)(v8 + 169) = v22 != 0;
            if (v22 == 0) {
              return result;
            }
          }
          else {
            *v13 = 1;
          }
          goto LABEL_45;
        }
        goto LABEL_35;
      }
      if ((v9 & 8) != 0) {
        v14 = *(float*)(v8 + 120);
        v15 = *(float*)(v8 + 144);
        v9 &= ~8uLL;
        *(_QWORD*)(v8 + 136) = v9;
        if (v14 == v15 && *(float*)(v8 + 124) == *(float*)(v8 + 148) &&
            *(float*)(v8 + 128) == *(float*)(v8 + 152) &&
            *(float*)(v8 + 132) == *(float*)(v8 + 156)) {
          v16 = ((unsigned __int8)*(_DWORD*)(v8 + 160) ^ (unsigned __int8)v9) &
                0x3F;
          *(_BYTE*)(v8 + 169) =
              (((unsigned __int8)*(_DWORD*)(v8 + 160) ^ (unsigned __int8)v9) &
               0x3F) != 0;
          v13 = (_BYTE*)(v8 + 169);
          if (v16 == 0) {
            goto LABEL_34;
          }
        }
        else {
          *(_BYTE*)(v8 + 169) = 1;
          v13 = (_BYTE*)(v8 + 169);
        }
      }
      else {
        v13 = (_BYTE*)(v8 + 169);
        if ((*(_BYTE*)(v8 + 169) & 1) == 0) {
          goto LABEL_34;
        }
      }
      v19 = *(unsigned __int8*)(v8 + 20);
      *(_BYTE*)(v8 + 20) = v19 & 0xFB;
      if (v19 != (v19 & 0xFFFFFFFB)) {
        *(_BYTE*)(*(_QWORD*)(v8 + 8) + 728LL) = 0;
        v9 = *(_QWORD*)(v8 + 136);
      }
    LABEL_34:
      if ((v9 & 0x10) != 0) {
        v18 = v9 & 0xFFFFFFFFFFFFFFEFLL;
        goto LABEL_38;
      }
    LABEL_35:
      if ((*v13 & 1) == 0) {
        return result;
      }
    LABEL_45:
      v23 = *(unsigned __int8*)(v8 + 20);
      *(_BYTE*)(v8 + 20) = v23 & 0xFB;
      if (v23 != (v23 & 0xFFFFFFFB)) {
        *(_BYTE*)(*(_QWORD*)(v8 + 8) + 728LL) = 0;
      }
    }
  }
  return result;
}

void game_zview_CharacterModel_ClothStabilize_lambda0_Invoke(__int64 a1,
                                                             __int64 a2)
{
  __int64 v2;
  __int64 i;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_220f840,
                            memory_order_acquire) &
       1) == 0) {
    v7 = a2;
    v6 = __cxa_guard_acquire(&GameData_220f840);
    a2 = v7;
    if (v6 != 0) {
      GameData_220f838 = wld_Crc32(0, "ClothModule", 11);
      __cxa_guard_release(&GameData_220f840);
      a2 = v7;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  for (i = v2; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v4 = *(_DWORD*)(i - 16);
    v2 -= 16;
    if (v4 == GameData_220f838) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          *(_WORD*)(v5 + 61) = 1;
        }
      }
      return;
    }
  }
}

#pragma GCC visibility pop
