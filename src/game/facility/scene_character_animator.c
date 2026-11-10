#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_112ea40(_QWORD, _QWORD);
__int64 GameRoutine_1952140(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (*game_facility_SceneCharacterAnimator_vtable[])();
extern __int64 GameData_22356f0;
extern __int64 GameData_22356f8;
extern __int64 GameData_2235708;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
__int64 SceneCharacterAnimator_Destructor(__int64 result);
__int64 SceneCharacterAnimator_DeletingDestructor(__int64 a1);
__int64 SceneCharacterAnimator_14112b0(__int64 a1);
__int64 SceneCharacterAnimator_14114e0(__int64 a1, unsigned int a2);
__int64 SceneCharacterAnimator_1411710(__int64 a1);
_BYTE* CharacterModel_1070320(__int64, unsigned int);
__attribute__((swiftcall)) void game_facility_1410b80(PSEUDO_X8, __int64);
__int64 CharacterAnimator_1079e10(__int64);
__int64 GameRoutine_1403e20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14127e0(_QWORD, _QWORD);
__int64
GameRoutine_14127e0_alt1(__int64,
                         unsigned __int8*) __asm__("GameRoutine_14127e0");
__int64 GameRoutine_1412f00(__int64, __int64, __int64);
__int64 GameRoutine_1413240(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_142af20(int);
__int64 GameRoutine_1469c40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1952360(__int64 result);
__int64 GameRoutine_1952d00(__int64, __int64, __int64);
__int64 GameRoutine_ecb40(_QWORD);
__int64 SceneCharacterAnimator_1411a00_alt1(_QWORD) __asm__(
    "SceneCharacterAnimator_1411a00");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_HashString32(__int64 result);
__int64 nn_os_LockMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 nn_os_UnlockMutex(_QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
char* game_util_Format(__int64, __int64, __int64, __int64, __int64, __int64,
                       __int64, __int64, char);
extern _UNKNOWN* GameData_2131330;
extern _UNKNOWN GameData_2242788;
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_2131320[2];
extern __int64* GameData_2131328;
extern __int64 GameData_212c638;
extern __int64 GameData_2242778;
extern __int64 GameData_2242780;
extern __int64 game_script_hub_g_frame_counter;
float CharacterAnimator_1079580(__int64, int, long double, float, float);
float Cursor_734120(int, int, float, float, float, float);
unsigned __int64 GameRoutine_d2b5f0(__int64);
unsigned __int64 game_108cc80(unsigned __int64 result, int);
void __attribute__((noreturn)) String_60a1d0();
void game_facility_14187c0(__int64, __n128);
void SceneCharacterAnimator_1410e00(__int64 a1, __int64 a2, __int64 a3,
                                    __int64 a4, __int64 a5, __int64 a6,
                                    __int64 a7, __int64 a8);
__attribute__((swiftcall)) void
SceneCharacterAnimator_1410f50(PSEUDO_X8 x8_, _QWORD* a1, float* a2);
__int64 SceneCharacterAnimator_Unknown2(__int64 a1);
__int64 SceneCharacterAnimator_1411a00(_QWORD* a1);
void SceneCharacterAnimator_Unknown3(__int64 a1);
void SceneCharacterAnimator_1411f80(__int64 a1, long double a2);
__int64 SceneCharacterAnimator_1412540(__int64 a1, int a2, unsigned __int8* a3);
void SceneCharacterAnimator_1412d00(__int64 a1, __int64 a2, __int64 a3);

void SceneCharacterAnimator_1410e00(__int64 a1, __int64 a2, __int64 a3,
                                    __int64 a4, __int64 a5, __int64 a6,
                                    __int64 a7, __int64 a8)
{

#pragma clang fp contract(off)
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
  char v19;
  int v20;
  char* v21;

  *(_QWORD*)a1 = game_facility_SceneCharacterAnimator_vtable;
  *(_QWORD*)(a1 + 8) = a2;
  if ((*(_BYTE*)(a2 + 72) & 1) != 0) {
    v9 = *(_QWORD*)(a2 + 88);
  }
  else {
    v9 = a2 + 73;
  }
  v21 =
      game_util_Format((__int64)"%s_Animator", v9, a3, a4, a5, a6, a7, a8, v19);
  v20 = 0;
  SceneCharacterAnimator_1410f50((void*)((__int64*)(a1 + 16)), &v21,
                                 (float*)&v20);
  *(_BYTE*)(a1 + 24) = 0;
  *(_BYTE*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0xFFFFFFFFLL;
  v10 = *(_QWORD*)(a1 + 16);
  if ((*(_BYTE*)(v10 + 136) & 1) == 0) {
    v11 = *(_QWORD**)(v10 + 96);
    *(_QWORD*)(v10 + 96) = 0;
    *(_BYTE*)(v10 + 136) = 1;
    if (v11 == (_QWORD*)(v10 + 64)) {
      v12 = 32;
    }
    else {
      if (v11 == nullptr) {
        goto LABEL_10;
      }
      v12 = 40;
    }
    (*(void (**)(__int64))(*v11 + v12))((__int64)v11);
  LABEL_10:
    v13 = *(_QWORD*)(v10 + 112);
    v14 = *(_QWORD*)(v10 + 120);
    if (v13 == v14) {
    LABEL_11:
      *(_QWORD*)(v10 + 120) = v13;
      return;
    }
    while (1) {
      v16 = *(_QWORD**)(v14 - 16);
      *(_QWORD*)(v14 - 16) = 0;
      if ((_QWORD*)(v14 - 48) == v16) {
        v17 = 32;
      }
      else {
        if (v16 == nullptr) {
          goto LABEL_15;
        }
        v17 = 40;
      }
      (*(void (**)(__int64))(*v16 + v17))((__int64)v16);
      v18 = *(_QWORD**)(v14 - 16);
      if ((_QWORD*)(v14 - 48) == v18) {
        v15 = 32;
      }
      else {
        if (v18 == nullptr) {
          goto LABEL_15;
        }
        v15 = 40;
      }
      (*(void (**)(__int64))(*v18 + v15))((__int64)v18);
    LABEL_15:
      v14 -= 64;
      if (v14 == v13) {
        goto LABEL_11;
      }
    }
  }
}

__attribute__((swiftcall)) void

SceneCharacterAnimator_1410f50(PSEUDO_X8 x8_, _QWORD* a1, float* a2)
{

#pragma clang fp contract(off)
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  float v14;
  unsigned __int64 v15;
  float v16;
  __int64* v17;
  __int64 v18;
  struct {
    __int64 v19;
    unsigned __int64 v20;
    char* v21;
  } v19_;

  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
  v8 = *a1;
  v9 = v7;
  v10 = strlen(*a1);
  if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v11 = v10;
  if (v10 >= 0x17) {
    if ((v10 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v10 | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate_alt1(*v6, v13, 16, 0);
    v19_.v20 = v11;
    v19_.v21 = v12;
    v19_.v19 = v13 | 1;
    goto LABEL_9;
  }
  LOBYTE(v19_.v19) = 2 * v10;
  v12 = (char*)&v19_.v19 + 1;
  if (v10 != 0) {
  LABEL_9:
    memmove(v12, v8, v11);
  }
  v12[v11] = 0;
  v14 = *a2;
  if ((v19_.v19 & 1) != 0) {
    fw_text_String_CopyTerminated((__int64*)v9, (__int64)v19_.v21, v19_.v20);
  }
  else {
    v15 = v19_.v20;
    *(_QWORD*)v9 = v19_.v19;
    *(_QWORD*)(v9 + 8) = v15;
    *(_QWORD*)(v9 + 16) = v19_.v21;
  }
  v16 = 0x0.0p+0f;
  *(_QWORD*)(v9 + 36) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_DWORD*)(v9 + 56) = 2;
  if (v14 >= 0x0.0p+0f) {
    v16 = v14;
  }
  *(float*)(v9 + 32) = v16;
  *(float*)(v9 + 44) = v16;
  v17 = GameData_2131320[0];
  *(_QWORD*)(v9 + 96) = 0;
  *(_QWORD*)(v9 + 112) = 0;
  *(_QWORD*)(v9 + 120) = 0;
  *(_QWORD*)(v9 + 128) = 0;
  *(_BYTE*)(v9 + 136) = 0;
  *a3 = v9;
  *(_QWORD*)(v9 + 24) = v17 + 2;
  if ((v19_.v19 & 1) != 0 && v19_.v21 != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v18);
  }
}

__int64 SceneCharacterAnimator_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)result = game_facility_SceneCharacterAnimator_vtable;
  if (*(_BYTE*)(result + 72) == 1 && (*(_BYTE*)(result + 24) & 1) != 0 &&
      *(_QWORD*)(result + 40) != 0) {
    v1 = result;
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
    result = v1;
  }
  v3 = *(_QWORD*)(result + 16);
  *(_QWORD*)(result + 16) = 0;
  if (v3 != 0) {
    GameRoutine_1952140(v3);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  return result;
}

__int64 SceneCharacterAnimator_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = game_facility_SceneCharacterAnimator_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if (*(_BYTE*)(a1 + 72) == 1 && (*(_BYTE*)(a1 + 24) & 1) != 0 &&
      *(_QWORD*)(a1 + 40) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  v4 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = 0;
  if (v4 != 0) {
    GameRoutine_1952140(v4);
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5);
  }
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6);
}

__int64 SceneCharacterAnimator_14112b0(__int64 a1)
{
  unsigned int v1;
  __int64 v2;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v7;
  unsigned __int64 v8;
  __int64** v9;
  __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 result;
  __int64** v14;
  __int64* v15;
  unsigned __int64 v16;
  __int64 v17;

  if (*(_BYTE*)(a1 + 72) != 1) {
    return 0;
  }
  v1 = *(_DWORD*)(a1 + 48);
  if (*(_QWORD*)(a1 + 80) == 0) {
    if (v1 == 0) {
      return v1;
    }
    if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
      v7 = GameData_22356f8 - 1;
      if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
        v8 = (int)v1;
        if (GameData_22356f8 <= (unsigned __int64)(int)v1) {
          v8 = (int)v1 % (unsigned __int64)GameData_22356f8;
        }
      }
      else {
        v8 = v7 & (int)v1;
      }
      v14 = *(__int64***)(GameData_22356f0 + 8 * v8);
      if (v14 != nullptr) {
        v15 = *v14;
        if (v15 != nullptr) {
          if ((GameData_22356f8 & v7) == 0) {
            while (1) {
              v17 = v15[1];
              if (v17 == v1) {
                if (*((_DWORD*)v15 + 4) == v1) {
                  return v1;
                }
              }
              else if ((v17 & v7) != v8) {
                return 0;
              }
              v15 = (__int64*)*v15;
              result = 0;
              if (v15 == nullptr) {
                return result;
              }
            }
          }
          while (1) {
            v16 = v15[1];
            if (v16 == v1) {
              if (*((_DWORD*)v15 + 4) == v1) {
                return v1;
              }
            }
            else {
              if (v16 >= GameData_22356f8) {
                v16 %= (unsigned __int64)GameData_22356f8;
              }
              if (v16 != v8) {
                return 0;
              }
            }
            v15 = (__int64*)*v15;
            result = 0;
            if (v15 == nullptr) {
              return result;
            }
          }
        }
      }
    }
    return 0;
  }
  if (v1 == 0) {
    return v1;
  }
  v2 = *(_QWORD*)(a1 + 88);
  if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
    v4 = GameData_22356f8 - 1;
    if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
      v5 = (int)v1;
      if (GameData_22356f8 <= (unsigned __int64)(int)v1) {
        v5 = (int)v1 % (unsigned __int64)GameData_22356f8;
      }
    }
    else {
      v5 = v4 & (int)v1;
    }
    v9 = *(__int64***)(GameData_22356f0 + 8 * v5);
    if (v9 != nullptr) {
      v10 = *v9;
      if (*v9 == nullptr) {
      LABEL_37:
        if (*(_QWORD*)(v2 + 5112) == 0) {
          return 0;
        }
        return v1;
      }
      if ((GameData_22356f8 & v4) == 0) {
        while (1) {
          v12 = v10[1];
          if (v12 == v1) {
            if (*((_DWORD*)v10 + 4) == v1) {
              goto LABEL_57;
            }
          }
          else if ((v12 & v4) != v5) {
            goto LABEL_37;
          }
          v10 = (__int64*)*v10;
          if (v10 == nullptr) {
            goto LABEL_37;
          }
        }
      }
      while (1) {
        v11 = v10[1];
        if (v11 == v1) {
          break;
        }
        if (v11 >= GameData_22356f8) {
          v11 %= (unsigned __int64)GameData_22356f8;
        }
        if (v11 != v5) {
          goto LABEL_37;
        }
      LABEL_25:
        v10 = (__int64*)*v10;
        if (v10 == nullptr) {
          goto LABEL_37;
        }
      }
      if (*((_DWORD*)v10 + 4) != v1) {
        goto LABEL_25;
      }
    LABEL_57:
      if (*(_QWORD*)(v2 + 8LL * *((int*)v10 + 5)) == 0) {
        return 0;
      }
      return v1;
    }
  }
  if (*(_QWORD*)(v2 + 5112) != 0) {
    return v1;
  }
  return 0;
}

__int64 SceneCharacterAnimator_14114e0(__int64 a1, unsigned int a2)
{
  __int64 v2;
  __int64 v4;
  unsigned __int64 v5;
  __int64 result;
  __int64 v8;
  unsigned __int64 v9;
  __int64** v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64** v14;
  __int64* v15;
  unsigned __int64 v16;
  __int64 v17;

  if (*(_QWORD*)(a1 + 80) == 0) {
    if (a2 == 0) {
      return a2;
    }
    if (GameData_22356f8 == 0 || GameData_2235708 == 0) {
      return 0;
    }
    v8 = GameData_22356f8 - 1;
    if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
      v9 = (int)a2;
      if (GameData_22356f8 <= (unsigned __int64)(int)a2) {
        v9 = (int)a2 % (unsigned __int64)GameData_22356f8;
      }
    }
    else {
      v9 = v8 & (int)a2;
    }
    v14 = *(__int64***)(GameData_22356f0 + 8 * v9);
    if (v14 != nullptr) {
      v15 = *v14;
      if (v15 != nullptr) {
        if ((GameData_22356f8 & v8) == 0) {
          while (1) {
            v17 = v15[1];
            if (v17 == a2) {
              if (*((_DWORD*)v15 + 4) == a2) {
                return a2;
              }
            }
            else if ((v17 & v8) != v9) {
              return 0;
            }
            v15 = (__int64*)*v15;
            result = 0;
            if (v15 == nullptr) {
              return result;
            }
          }
        }
        while (1) {
          v16 = v15[1];
          if (v16 == a2) {
            if (*((_DWORD*)v15 + 4) == a2) {
              return a2;
            }
          }
          else {
            if (v16 >= GameData_22356f8) {
              v16 %= (unsigned __int64)GameData_22356f8;
            }
            if (v16 != v9) {
              return 0;
            }
          }
          v15 = (__int64*)*v15;
          result = 0;
          if (v15 == nullptr) {
            return result;
          }
        }
      }
    }
    return 0;
  }
  if (a2 == 0) {
    return a2;
  }
  v2 = *(_QWORD*)(a1 + 88);
  if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
    v4 = GameData_22356f8 - 1;
    if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
      v5 = (int)a2;
      if (GameData_22356f8 <= (unsigned __int64)(int)a2) {
        v5 = (int)a2 % (unsigned __int64)GameData_22356f8;
      }
    }
    else {
      v5 = v4 & (int)a2;
    }
    v10 = *(__int64***)(GameData_22356f0 + 8 * v5);
    if (v10 != nullptr) {
      v11 = *v10;
      if (*v10 == nullptr) {
      LABEL_38:
        if (*(_QWORD*)(v2 + 5112) == 0) {
          return 0;
        }
        return a2;
      }
      if ((GameData_22356f8 & v4) == 0) {
        while (1) {
          v13 = v11[1];
          if (v13 == a2) {
            if (*((_DWORD*)v11 + 4) == a2) {
              goto LABEL_58;
            }
          }
          else if ((v13 & v4) != v5) {
            goto LABEL_38;
          }
          v11 = (__int64*)*v11;
          if (v11 == nullptr) {
            goto LABEL_38;
          }
        }
      }
      while (1) {
        v12 = v11[1];
        if (v12 == a2) {
          break;
        }
        if (v12 >= GameData_22356f8) {
          v12 %= (unsigned __int64)GameData_22356f8;
        }
        if (v12 != v5) {
          goto LABEL_38;
        }
      LABEL_26:
        v11 = (__int64*)*v11;
        if (v11 == nullptr) {
          goto LABEL_38;
        }
      }
      if (*((_DWORD*)v11 + 4) != a2) {
        goto LABEL_26;
      }
    LABEL_58:
      if (*(_QWORD*)(v2 + 8LL * *((int*)v11 + 5)) == 0) {
        return 0;
      }
      return a2;
    }
  }
  if (*(_QWORD*)(v2 + 5112) != 0) {
    return a2;
  }
  return 0;
}

__int64 SceneCharacterAnimator_1411710(__int64 a1)
{
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  char* v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[2];
  char* v17;

  if (*(_BYTE*)(a1 + 72) != 1) {
    return 0;
  }
  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 40);
  }
  else {
    v2 = a1 + 25;
  }
  v3 = strlen(v2);
  if (v3 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v3);
  }
  v4 = v3;
  if (v3 >= 0x17) {
    if ((v3 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v3 | 7) + 1;
    }
    v5 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16,
                                               0);
    v16[1] = v4;
    v17 = v5;
    v16[0] = v7 | 1;
    goto LABEL_14;
  }
  LOBYTE(v16[0]) = 2 * v3;
  v5 = (char*)v16 + 1;
  if (v3 != 0) {
  LABEL_14:
    memmove(v5, v2, v4);
  }
  v5[v4] = 0;
  v8 = *(_QWORD*)(a1 + 8);
  v9 = *(_BYTE*)(v8 + 48);
  v10 = *(_QWORD*)(v8 + 64);
  v11 = v8 + 49;
  if ((v9 & 1) != 0) {
    v12 = v10;
  }
  else {
    v12 = v11;
  }
  if ((v16[0] & 1) != 0) {
    v13 = v17;
  }
  else {
    v13 = (char*)v16 + 1;
  }
  result = GameRoutine_112ea40(v12, v13);
  if ((v16[0] & 1) != 0 && v17 != nullptr) {
    v14 = result;
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
    return v14;
  }
  return result;
}

__int64 SceneCharacterAnimator_Unknown2(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64* v12;

  v1 = *(_QWORD*)(a1 + 8);
  v11 = 0;
  v12 = &v11;
  GameRoutine_1413240(&v12, &v12, *(_QWORD*)(v1 + 8));
  v3 = v11;
  *(_QWORD*)(a1 + 80) = v11;
  v4 = *(_QWORD*)((char*)((char*)0x20LL) + v3 + 8);
  v5 = *(_QWORD*)((char*)((_UNKNOWN*)0x188LL) + v4);
  v6 = *(_QWORD*)((char*)((_UNKNOWN*)0x188LL) + v4 + 8);
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    v7 = *(_QWORD*)(v5 + 11608);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  else {
    v7 = *(_QWORD*)(v5 + 11608);
  }
  v8 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 88) = v7;
  v11 = 0;
  v9 = *(_QWORD*)(v8 + 8);
  v12 = &v11;
  result = GameRoutine_1403e20(&v12, &v12, v9);
  *(_QWORD*)(a1 + 96) = v11;
  if (*(_DWORD*)(a1 + 108) == 0) {
    result = SceneCharacterAnimator_1411a00_alt1(a1);
    if ((int)result <= -1009115454) {
      if ((_DWORD)result == -1689213573 || (_DWORD)result == -1101902990 ||
          (_DWORD)result == -1054720718) {
        goto LABEL_17;
      }
    }
    else {
      if ((int)result <= -574916403) {
        if ((_DWORD)result != -1009115453 && (_DWORD)result != -589947500) {
          return result;
        }
      LABEL_17:
        if ((_DWORD)result != *(_DWORD*)(a1 + 108)) {
          *(_DWORD*)(a1 + 108) = result;
        }
        return result;
      }
      if ((_DWORD)result == 1669996436 || (_DWORD)result == -574916402) {
        goto LABEL_17;
      }
    }
  }
  return result;
}

__int64 SceneCharacterAnimator_1411a00(_QWORD* a1)
{
  __int64 v1;
  unsigned int v3;
  __int64 v4;
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
  __int64** v17;
  __int64* v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64** v25;
  __int64* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v30;
  __int64* v31;

  v1 = a1[1];
  v3 = 1669996436;
  v4 = *(_QWORD*)(v1 + 144);
  v5 = *(_QWORD*)(v1 + 152);
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    v6 = *(_QWORD*)(v4 + 8);
    if (v6 != 0 && (v7 = *(_QWORD*)(v6 + 8), v30 = 0, v31 = &v30,
                    GameRoutine_1469c40(&v31, &v31, v7), v30 != 0)) {
      v9 = *(_QWORD*)((char*)((_UNKNOWN*)0x188LL) + v30);
      v8 = *(_QWORD*)((char*)((_UNKNOWN*)0x188LL) + v30 + 8);
      if (v8 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                  memory_order_relaxed);
      }
    }
    else {
      v9 = 0;
      v8 = 0;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak(v5);
    }
  }
  else {
    v10 = *(_QWORD*)(v4 + 8);
    if (v10 == 0) {
      return v3;
    }
    v11 = *(_QWORD*)(v10 + 8);
    v30 = 0;
    v31 = &v30;
    GameRoutine_1469c40(&v31, &v31, v11);
    if (v30 == 0) {
      return v3;
    }
    v9 = *(_QWORD*)((char*)((_UNKNOWN*)0x188LL) + v30);
    v8 = *(_QWORD*)((char*)((_UNKNOWN*)0x188LL) + v30 + 8);
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  if (v9 == 0) {
    goto LABEL_75;
  }
  v3 = -574916402;
  if (a1[10] != 0) {
    v12 = a1[11];
    if (GameData_22356f8 == 0 || GameData_2235708 == 0) {
      goto LABEL_44;
    }
    v13 = GameData_22356f8 - 1;
    if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
      v14 = 1669996436;
      if ((unsigned __int64)GameData_22356f8 <= 0x638A1F94) {
        v14 = 0x638A1F94 % (unsigned int)GameData_22356f8;
      }
    }
    else {
      v14 = ((_DWORD)GameData_22356f8 - 1) & 0x638A1F94;
    }
    v17 = *(__int64***)(GameData_22356f0 + 8 * v14);
    if (v17 == nullptr) {
      if (*(_QWORD*)(v12 + 5112) != 0) {
        goto LABEL_45;
      }
      goto LABEL_75;
    }
    v18 = *v17;
    if (*v17 == nullptr) {
    LABEL_44:
      if (*(_QWORD*)(v12 + 5112) == 0) {
        goto LABEL_75;
      }
      goto LABEL_45;
    }
    if ((GameData_22356f8 & v13) == 0) {
      while (1) {
        v20 = v18[1];
        if (v20 == 1669996436) {
          if (*((_DWORD*)v18 + 4) == 1669996436) {
            goto LABEL_74;
          }
        }
        else if ((v20 & v13) != v14) {
          goto LABEL_44;
        }
        v18 = (__int64*)*v18;
        if (v18 == nullptr) {
          goto LABEL_44;
        }
      }
    }
    while (1) {
      v19 = v18[1];
      if (v19 == 1669996436) {
        if (*((_DWORD*)v18 + 4) == 1669996436) {
        LABEL_74:
          if (*(_QWORD*)(v12 + 8LL * *((int*)v18 + 5)) == 0) {
            goto LABEL_75;
          }
        LABEL_45:
          v21 = *(unsigned __int8*)(v9 + 472);
          if ((v21 & 1) != 0) {
            v22 = *(_QWORD*)(v9 + 480);
          }
          else {
            v22 = v21 >> 1;
          }
          if (v22 == 0) {
            v23 = *(unsigned __int8*)(v9 + 400);
            v24 = (v23 & 1) != 0 ? *(_QWORD*)(v9 + 408) : v23 >> 1;
            if (v24 == 0 && *(_DWORD*)(v9 + 11624) == 0) {
              if (*(_DWORD*)(v9 + 11784) >= 2u) {
                v3 = -574916402;
              }
              else {
                v3 = 1669996436;
              }
            }
          }
          goto LABEL_75;
        }
      }
      else {
        if (v19 >= GameData_22356f8) {
          v19 %= (unsigned __int64)GameData_22356f8;
        }
        if (v19 != v14) {
          goto LABEL_44;
        }
      }
      v18 = (__int64*)*v18;
      if (v18 == nullptr) {
        goto LABEL_44;
      }
    }
  }
  if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
    v15 = GameData_22356f8 - 1;
    if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
      v16 = 1669996436;
      if ((unsigned __int64)GameData_22356f8 <= 0x638A1F94) {
        v16 = 0x638A1F94 % (unsigned int)GameData_22356f8;
      }
    }
    else {
      v16 = ((_DWORD)GameData_22356f8 - 1) & 0x638A1F94;
    }
    v25 = *(__int64***)(GameData_22356f0 + 8 * v16);
    if (v25 != nullptr) {
      v26 = *v25;
      if (v26 != nullptr) {
        if ((GameData_22356f8 & v15) == 0) {
          while (1) {
            v28 = v26[1];
            if (v28 == 1669996436) {
              if (*((_DWORD*)v26 + 4) == 1669996436) {
                goto LABEL_45;
              }
            }
            else if ((v28 & v15) != v16) {
              goto LABEL_75;
            }
            v26 = (__int64*)*v26;
            if (v26 == nullptr) {
              goto LABEL_75;
            }
          }
        }
        do {
          v27 = v26[1];
          if (v27 == 1669996436) {
            if (*((_DWORD*)v26 + 4) == 1669996436) {
              goto LABEL_45;
            }
          }
          else {
            if (v27 >= GameData_22356f8) {
              v27 %= (unsigned __int64)GameData_22356f8;
            }
            if (v27 != v16) {
              break;
            }
          }
          v26 = (__int64*)*v26;
        } while (v26 != nullptr);
      }
    }
  }
LABEL_75:
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  return v3;
}

void SceneCharacterAnimator_Unknown3(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  long double v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _BOOL4 v8;
  bool v10;
  __int64 v11;
  float v12;
  float v13;
  float v14;
  int v15;
  int v16;
  float v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;

  v2 = *(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL);
  if (*(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL) == v2) {
    v3 = 0;
    if ((GameRoutine_ecb40(a1) & 1) == 0) {
      goto LABEL_12;
    }
  }
  else {
    v3 = *(_QWORD*)(v2 - 8);
    if ((GameRoutine_ecb40(a1) & 1) == 0) {
      goto LABEL_12;
    }
  }
  v5 = *(_QWORD*)(v3 + 64);
  if (v5 == 0) {
    v8 = true;
    goto LABEL_14;
  }
  v6 = *(_QWORD*)(v5 + 96);
  if (v6 == 0 || *(_DWORD*)(v6 + 240) != 5) {
  LABEL_12:
    v8 = false;
    goto LABEL_14;
  }
  v7 = (_QWORD*)(v5 + 120);
  do {
    v7 = (_QWORD*)*v7;
    v8 = v7 == nullptr;
  } while (v7 != nullptr && *(_DWORD*)(v7[5] + 240LL) == 5);
LABEL_14:
  v10 = !v8 || *(_QWORD*)(a1 + 80) == 0 || *(_QWORD*)(a1 + 96) == 0;
  if (!v10 && (*(_BYTE*)(a1 + 72) & 1) != 0) {
    v11 = *(_QWORD*)(a1 + 16);
    if ((*(_BYTE*)(v11 + 136) & 1) == 0) {
      v13 = *(float*)(v11 + 32);
      v12 = *(float*)(v11 + 36);
      v14 = *(float*)(v11 + 48);
      if (v12 >= v13) {
        LODWORD(v4) = *(_DWORD*)(v11 + 44);
      }
      else {
        v15 = *(_DWORD*)(v11 + 52);
        v16 = *(_DWORD*)(v11 + 56);
        v17 = v12 +
              (float)((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                              0x1.0aef000000000p+4f) /
                      0x1.f400000000000p+9f);
        v18 = v13 >= v17 ? v17 : *(float*)(v11 + 32);
        v19 = *(float*)(v11 + 40);
        v20 = *(float*)(v11 + 44);
        *(float*)(v11 + 36) = v18;
        *(float*)&v4 = Cursor_734120(v15, v16, v19, v20, v18, v13);
      }
      *(_DWORD*)(v11 + 48) = LODWORD(v4);
      if (*(float*)&v4 != v14) {
        GameRoutine_1952360(v11);
      }
    }
    v21 = *(_QWORD*)(*(_QWORD*)(a1 + 80) + 96LL);
    if (v21 == 0 ||
        ((v22 = GameRoutine_d2b5f0(*(_QWORD*)(v21 + 32) + 72LL)) &
         0x100000000LL) == 0 ||
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v21 + 24) + 72LL) +
                   104LL * (int)v22) == 0 ||
        (CharacterAnimator_1079e10(*(_QWORD*)(a1 + 80)) & 1) != 0 ||
        (*(_BYTE*)(a1 + 52) & 1) != 0) {
      LODWORD(v4) = *(_DWORD*)(a1 + 60);
      if (*(float*)&v4 <= 0x0.0p+0f ||
          (v23 = *(_QWORD*)(a1 + 16), LODWORD(v4) = *(_DWORD*)(v23 + 36),
           *(float*)&v4 >= *(float*)(v23 + 32))) {
        SceneCharacterAnimator_1411f80(a1, v4);
      }
    }
  }
}

void SceneCharacterAnimator_1411f80(__int64 a1, long double a2)
{

#pragma clang fp contract(off)
  float v2;
  __int64 v3;
  signed int v5;
  __int64 v6;
  __int64 v8;
  unsigned __int64 v9;
  __int64** v10;
  __int64* v11;
  unsigned __int64 v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  char v16;
  _BYTE* v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  float v25;
  __int64 v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  __n128 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  __int64 v52;
  _QWORD* v53;
  struct {
    _BYTE v54[32];
    _BYTE* v55;
  } v54_;

  v3 = *(_QWORD*)(a1 + 80);
  if (v3 == 0) {
  LABEL_26:
    v14 = 0;
    goto LABEL_57;
  }
  v5 = *(_DWORD*)(a1 + 48);
  if (v5 == 0) {
    goto LABEL_35;
  }
  v6 = *(_QWORD*)(a1 + 88);
  if (GameData_22356f8 == 0 || GameData_2235708 == 0) {
    goto LABEL_22;
  }
  v8 = GameData_22356f8 - 1;
  if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
    v9 = v5;
    if (GameData_22356f8 <= (unsigned __int64)v5) {
      v9 = v5 % (unsigned __int64)GameData_22356f8;
    }
  }
  else {
    v9 = v8 & v5;
  }
  v10 = *(__int64***)(GameData_22356f0 + 8 * v9);
  if (v10 == nullptr) {
  LABEL_22:
    if (*(_QWORD*)(v6 + 5112) == 0) {
      goto LABEL_23;
    }
    goto LABEL_35;
  }
  v11 = *v10;
  if (*v10 == nullptr) {
  LABEL_34:
    if (*(_QWORD*)(v6 + 5112) == 0) {
      goto LABEL_23;
    }
  LABEL_35:
    if ((*(_BYTE*)(a1 + 52) & 2) != 0) {
      goto LABEL_24;
    }
  LABEL_36:
    v16 = 1;
    v14 = 0;
    if (v5 == 0) {
      goto LABEL_57;
    }
  LABEL_37:
    if ((v16 & 1) == 0) {
      goto LABEL_57;
    }
    v2 = -0x1.0000000000000p+0f;
    if (*(_QWORD*)(a1 + 80) == 0) {
      goto LABEL_51;
    }
    v17 = CharacterModel_1070320(*(_QWORD*)(a1 + 88), v5);
    if (v17 == nullptr) {
      goto LABEL_51;
    }
    v18 = *((_QWORD*)v17 + 3);
    if (v18 == 0) {
      goto LABEL_51;
    }
    if ((*(_BYTE*)(a1 + 52) & 4) != 0) {
      v20 = *(_DWORD*)(v18 + 64);
      v21 = *(_QWORD*)(a1 + 8);
      v22 = *(_BYTE*)(v21 + 72);
      v23 = *(_QWORD*)(v21 + 88);
      v24 = v21 + 73;
      v25 = (float)v20;
      if ((v22 & 1) != 0) {
        v26 = v23;
      }
      else {
        v26 = v24;
      }
      v27 = game_HashString32(v26);
      nn_os_LockMutex(&game_g_random_mutex);
      v28 = v27 ^ (v27 >> 30);
      v29 = 1812433253 * v28;
      v30 = 1812433253 * ((1812433253 * (v29 ^ (v29 >> 30)) + 1) ^
                          ((1812433253 * (v29 ^ (v29 >> 30)) + 1) >> 30)) +
            2;
      v31 = 1812433253 * (v30 ^ (v30 >> 30)) + 3;
      nn_os_UnlockMutex(&game_g_random_mutex);
      nn_os_LockMutex(&game_g_random_mutex);
      *(__n128*)&a2 = nn_os_UnlockMutex(&game_g_random_mutex);
      *(float*)&a2 =
          (float)((float)(unsigned __int16)((((1011558400 * v28) ^ v29) >> 8) ^
                                            (v31 >> 19) ^ (10240 * v28) ^ v29 ^
                                            v31) /
                  0x1.fffe000000000p+15f) *
          v25;
    }
    else {
      if (*(_WORD*)(a1 + 68) == 0) {
      LABEL_51:
        LODWORD(a2) = *(_DWORD*)(a1 + 56);
        CharacterAnimator_1079580(*(_QWORD*)(a1 + 80), v5, a2, v2,
                                  0x1.0000000000000p+0f);
        PSEUDO_LOW_LANE128(v32, n128_u32, *(_DWORD*)(a1 + 56));
        if (LANES128(v32).n128_f32[0] == 0x0.0p+0f) {
          v33 = *(_QWORD*)(a1 + 8);
          v34 = *(_QWORD*)(v33 + 192);
          v35 = *(_QWORD*)(v33 + 200);
          if (v35 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 8), 1u,
                                      memory_order_relaxed);
            game_facility_14187c0(v34, v32);
            if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
              std___1___shared_weak_count___release_weak_alt1();
            }
          }
          else {
            game_facility_14187c0(v34, v32);
          }
        }
        v14 = v5;
        goto LABEL_57;
      }
      v19 = *(_DWORD*)(v18 + 64);
      if (v19 >= *(unsigned __int16*)(a1 + 68)) {
        v19 = *(unsigned __int16*)(a1 + 68);
      }
      *(float*)&a2 = (float)v19;
    }
    v2 = (float)(*(float*)&a2 * 0x1.0aaaaa0000000p+4f) / 0x1.f400000000000p+9f;
    goto LABEL_51;
  }
  if ((GameData_22356f8 & v8) == 0) {
    while (1) {
      v15 = v11[1];
      if (v15 == v5) {
        if (*((_DWORD*)v11 + 4) == v5) {
          goto LABEL_109;
        }
      }
      else if ((v15 & v8) != v9) {
        goto LABEL_34;
      }
      v11 = (__int64*)*v11;
      if (v11 == nullptr) {
        goto LABEL_34;
      }
    }
  }
  while (1) {
    v12 = v11[1];
    if (v12 == v5) {
      break;
    }
    if (v12 >= GameData_22356f8) {
      v12 %= (unsigned __int64)GameData_22356f8;
    }
    if (v12 != v9) {
      goto LABEL_34;
    }
  LABEL_16:
    v11 = (__int64*)*v11;
    if (v11 == nullptr) {
      goto LABEL_34;
    }
  }
  if (*((_DWORD*)v11 + 4) != v5) {
    goto LABEL_16;
  }
LABEL_109:
  if (*(_QWORD*)(v6 + 8LL * *((int*)v11 + 5)) != 0) {
    goto LABEL_35;
  }
LABEL_23:
  v5 = 0;
  if ((*(_BYTE*)(a1 + 52) & 2) == 0) {
    goto LABEL_36;
  }
LABEL_24:
  v13 = *(_DWORD*)(v3 + 120);
  if (v13 == v5 || (game_108cc80(v13, v5) & 1) != 0) {
    goto LABEL_26;
  }
  v16 = game_108cc80((unsigned int)v5, v13) ^ 1;
  v14 = 0;
  if (v5 != 0) {
    goto LABEL_37;
  }
LABEL_57:
  v36 = (_QWORD*)(a1 + 24);
  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    v37 = *(_QWORD*)(a1 + 40);
  }
  else {
    v37 = a1 + 25;
  }
  v38 = strlen(v37);
  GameRoutine_1412f00(a1, v37, v38);
  if (*(float*)(a1 + 64) <= 0x0.0p+0f) {
    LODWORD(v40) = 0;
  }
  else {
    v39 = GameRoutine_142af20(v14);
    v40 = HIDWORD(v39);
    if (HIDWORD(v39) != 0) {
      v2 = *(float*)(a1 + 64);
      if ((_DWORD)v39 != 0) {
        LODWORD(v37) = v39;
      }
      else {
        LODWORD(v37) = *(_DWORD*)(a1 + 108);
      }
      LODWORD(v40) = 1;
    }
  }
  if (*(unsigned __int8*)(a1 + 72) != (_DWORD)v40) {
    if (*(_BYTE*)(a1 + 72) == 0) {
      *(_DWORD*)(a1 + 48) = v37;
      v42 = *(_QWORD*)(a1 + 16);
      *(_QWORD*)(a1 + 32) = 0;
      *(_QWORD*)(a1 + 40) = 0;
      *v36 = 0;
      *(_BYTE*)(a1 + 52) = 0;
      *(float*)(a1 + 60) = v2;
      *(_WORD*)(a1 + 68) = 0;
      *(_DWORD*)(a1 + 56) = 1065353216;
      *(_DWORD*)(a1 + 64) = -1082130432;
      *(_BYTE*)(a1 + 72) = 1;
      goto LABEL_89;
    }
    if ((*(_BYTE*)v36 & 1) != 0 && *(_QWORD*)(a1 + 40) != 0) {
      v43 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v43);
    }
    v42 = *(_QWORD*)(a1 + 16);
    *(_BYTE*)(a1 + 72) = 0;
  LABEL_84:
    if ((*(_BYTE*)(v42 + 136) & 1) != 0) {
      return;
    }
    v44 = *(_QWORD**)(v42 + 96);
    *(_QWORD*)(v42 + 96) = 0;
    *(_BYTE*)(v42 + 136) = 1;
    if (v44 == (_QWORD*)(v42 + 64)) {
      v45 = 32;
    }
    else {
      if (v44 == nullptr) {
        goto LABEL_96;
      }
      v45 = 40;
    }
    (*(void (**)(__int64))(*v44 + v45))((__int64)v44);
  LABEL_96:
    v48 = *(_QWORD*)(v42 + 112);
    v49 = *(_QWORD*)(v42 + 120);
    if (v48 == v49) {
    LABEL_97:
      *(_QWORD*)(v42 + 120) = v48;
      return;
    }
    while (1) {
      v51 = *(_QWORD**)(v49 - 16);
      *(_QWORD*)(v49 - 16) = 0;
      if ((_QWORD*)(v49 - 48) == v51) {
        v52 = 32;
      }
      else {
        if (v51 == nullptr) {
          goto LABEL_101;
        }
        v52 = 40;
      }
      (*(void (**)(__int64))(*v51 + v52))((__int64)v51);
      v53 = *(_QWORD**)(v49 - 16);
      if ((_QWORD*)(v49 - 48) == v53) {
        v50 = 32;
      }
      else {
        if (v53 == nullptr) {
          goto LABEL_101;
        }
        v50 = 40;
      }
      (*(void (**)(__int64))(*v53 + v50))((__int64)v53);
    LABEL_101:
      v49 -= 64;
      if (v49 == v48) {
        goto LABEL_97;
      }
    }
  }
  if (*(_BYTE*)(a1 + 72) == 0) {
    v42 = *(_QWORD*)(a1 + 16);
    if ((_DWORD)v40 != 0) {
      goto LABEL_89;
    }
    goto LABEL_84;
  }
  if ((*(_BYTE*)v36 & 1) != 0 && *(_QWORD*)(a1 + 40) != 0) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v41);
    LOBYTE(v40) = *(_BYTE*)(a1 + 72);
  }
  *(_DWORD*)(a1 + 48) = v37;
  v42 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *v36 = 0;
  *(_BYTE*)(a1 + 52) = 0;
  *(float*)(a1 + 60) = v2;
  *(_WORD*)(a1 + 68) = 0;
  *(_DWORD*)(a1 + 56) = 1065353216;
  *(_DWORD*)(a1 + 64) = -1082130432;
  if ((v40 & 1) == 0) {
    goto LABEL_84;
  }
LABEL_89:
  v46 = *(unsigned int*)(a1 + 60);
  v54_.v55 = nullptr;
  GameRoutine_1952d00(v42, v46 | 0x100000000LL, (__int64)v54_.v54);
  if (v54_.v55 == v54_.v54) {
    v47 = 32;
  LABEL_93:
    (*(void (**)(__int64))(*(_QWORD*)v54_.v55 + v47))((__int64)v54_.v55);
  }
  else if (v54_.v55 != nullptr) {
    v47 = 40;
    goto LABEL_93;
  }
}

__int64 SceneCharacterAnimator_1412540(__int64 a1, int a2, unsigned __int8* a3)
{
  int v3;
  __int64* v4;
  char v5;
  __int64 v6;
  int v7;
  int v8;
  bool v9;
  char v10;
  int v11;
  char v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  int v16;
  int v17;
  __int64* v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int8* v24;
  unsigned __int8* v25;
  unsigned __int8* v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  __int128 v33;
  __int64 v34;
  int v35;
  char v36;
  _BYTE v37[14];
  __int128 v38;
  __int64 v39;
  int v40;
  char v41;
  _DWORD v42[4];

  v3 = *a3;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2131330,
                            memory_order_acquire) &
       1) == 0) {
    v21 = a1;
    v24 = a3;
    v27 = a2;
    v30 = v3;
    v16 = __cxa_guard_acquire(GameData_2131330);
    a2 = v27;
    v3 = v30;
    v17 = v16;
    a1 = v21;
    a3 = v24;
    if (v17 != 0) {
      v18 = GameData_2131328;
      *GameData_2131328 = 0xBF800000BF800000LL;
      *(_WORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v18 + 4) = 0;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v18) = -1082130432;
      __cxa_guard_release(GameData_2131330);
      a2 = v27;
      v3 = v30;
      a1 = v21;
      a3 = v24;
    }
  }
  if ((a3[2] & 1) != 0) {
    v4 = GameData_2131328;
  }
  else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2242788,
                                 memory_order_acquire) &
            1) != 0) {
    v4 = &GameData_2242778;
  }
  else {
    v23 = a1;
    v26 = a3;
    v29 = a2;
    v32 = v3;
    v20 = __cxa_guard_acquire(&GameData_2242788);
    v4 = &GameData_2242778;
    if (v20 != 0) {
      WORD2(GameData_2242780) = 0;
      GameData_2242778 = 0xBF80000000000000LL;
      LODWORD(GameData_2242780) = -1082130432;
      __cxa_guard_release(&GameData_2242788);
      v4 = &GameData_2242778;
    }
    a1 = v23;
    a3 = v26;
    a2 = v29;
    v3 = v32;
  }
  if (a3[1] == 1) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2242788,
                              memory_order_acquire) &
         1) != 0) {
      v5 = 4;
      v4 = &GameData_2242778;
    }
    else {
      v22 = a1;
      v25 = a3;
      v28 = a2;
      v31 = v3;
      v19 = __cxa_guard_acquire(&GameData_2242788);
      v4 = &GameData_2242778;
      if (v19 != 0) {
        WORD2(GameData_2242780) = 0;
        GameData_2242778 = 0xBF80000000000000LL;
        LODWORD(GameData_2242780) = -1082130432;
        __cxa_guard_release(&GameData_2242788);
        v4 = &GameData_2242778;
      }
      a1 = v22;
      a3 = v25;
      a2 = v28;
      v3 = v31;
      v5 = 4;
    }
  }
  else {
    v5 = 0;
  }
  v6 = v4[1];
  v7 = *(_DWORD*)v4;
  v8 = *((_DWORD*)v4 + 1);
  v9 = v3 == 0;
  v41 = v5;
  if (v3 != 0) {
    v10 = 12;
  }
  else {
    v10 = 0;
  }
  v11 = a3[1];
  if (v9) {
    v12 = 0;
  }
  else {
    v12 = -23;
  }
  v40 = a2;
  LOBYTE(v38) = v10;
  BYTE1(v38) = v12;
  *(_DWORD*)((char*)&v38 + 2) = -1192912256;
  v42[2] = v6;
  WORD3(v38) = 184;
  v42[0] = v7;
  v42[1] = v8;
  LOWORD(v42[3]) = WORD2(v6);
  if (v11 == 1) {
    v13 = a1;
    game_facility_1410b80((void*)((__int64)&v33), (__int64)&v38);
    a1 = v13;
    v38 = v33;
    v39 = v34;
    v40 = v35;
    v41 = v36;
    qmemcpy(v42, v37, 14);
  }
  result = GameRoutine_14127e0(a1, &v38);
  if ((v38 & 1) != 0 && v39 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
  }
  return result;
}

void SceneCharacterAnimator_1412d00(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  unsigned __int8 explicit;
  __int64* v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  struct {
    __int64 v17;
    __int64 v18;
    char* v19;
  } v17_;
  struct {
    __int64 v20[2];
    __int64 v21;
    int v22;
    char v23;
    char gap61_[3];
    int v24;
    int v25;
    int v26;
    __int16 v27;
  } v20_;

  if (GameRoutine_1412f00(a1, a2, a3) != 0) {
    return;
  }
  v5 = strlen(a2);
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
    v7 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v8, 16, 0);
    v17_.v18 = v6;
    v17_.v19 = v7;
    v17_.v17 = v8 | 1;
    goto LABEL_10;
  }
  LOBYTE(v17_.v17) = 2 * v5;
  v7 = (char*)&v17_.v17 + 1;
  if (v5 != 0) {
  LABEL_10:
    memmove(v7, a2, v6);
  }
  v7[v6] = 0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2131330,
                                  memory_order_acquire);
  v10 = GameData_2131328;
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_2131330) != 0) {
    *(_WORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v10 + 4) = 0;
    *v10 = 0xBF800000BF800000LL;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v10) = -1082130432;
    __cxa_guard_release(GameData_2131330);
  }
  v12 = *(_DWORD*)v10;
  v11 = *((_DWORD*)v10 + 1);
  v13 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v10);
  if ((v17_.v17 & 1) != 0) {
    v14 = (__int64)v17_.v19;
    fw_text_String_CopyTerminated(v20_.v20, (__int64)v17_.v19, v17_.v18);
    v20_.v22 = 0;
    v20_.v23 = 0;
    v20_.v24 = v12;
    v20_.v25 = v11;
    v20_.v26 = v13;
    v20_.v27 = WORD2(v13);
    if (v14 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
    }
  }
  else {
    v20_.v22 = 0;
    v20_.v23 = 0;
    v20_.v24 = v12;
    v20_.v25 = v11;
    v20_.v26 = v13;
    v20_.v20[0] = v17_.v17;
    v20_.v20[1] = v17_.v18;
    v20_.v21 = (__int64)v17_.v19;
    v20_.v27 = WORD2(v13);
  }
  GameRoutine_14127e0_alt1(a1, (unsigned __int8*)v20_.v20);
  if ((v20_.v20[0] & 1) != 0 && v20_.v21 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v16);
  }
}

#pragma GCC visibility pop
