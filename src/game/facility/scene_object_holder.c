#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void __attribute__((noreturn)) SceneObjectHolder_DeletingDestructor()
{
  __udf(0x8002u);
};
__int64 GameRoutine_13fec20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1462280(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a7bee0(_QWORD, _QWORD);
__int64 GameRoutine_bd3bc0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_21ec970;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_21ec968;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_d48080(void);
__int64 SceneObjectHolder_1461dc0(_QWORD* a1, __int64 a2);
void game_facility_SceneObjectHolder_HideBindEffect_lambda0_Invoke(__int64 a1,
                                                                   __int64 a2);
__int64 CharacterBuilder_1083e90(_QWORD*, __int64);
__int64 wld_Crc32_alt1(int, unsigned __int8*,
                       unsigned __int64) __asm__("wld_Crc32");
extern _UNKNOWN* GameData_212d4a8;
extern _UNKNOWN* GameData_212deb8;
extern __int64 (*GameData_203fd68[])();
extern int* GameData_212d4a0;
extern int* GameData_212deb0;
__int64 game_facility_SceneObjectHolder_HideBindEffect(__int64 result);

__int64 SceneObjectHolder_1461dc0(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v29;
  __int64* v30;

  v2 = a1[2];
  if (v2 == 0) {
    v13 = a1[1];
    v29 = 0;
    v30 = &v29;
    GameRoutine_13fec20(&v30, &v30, *(_QWORD*)(v13 + 8));
    v7 = v29;
    if (v29 == 0) {
      return v7;
    }
    v14 = a1[1];
    v29 = 0;
    v30 = &v29;
    GameRoutine_1462280(&v30, &v30, *(_QWORD*)(v14 + 8));
    v2 = v29;
    a1[2] = v29;
    if (v2 == 0) {
      v15 = *(_QWORD*)(a1[1] + 8LL);
      v30 = *(__int64**)(v7 + 24);
      v2 = GameRoutine_bd3bc0(v15, &v30);
      a1[2] = v2;
      if (v2 == 0) {
        return 0;
      }
    }
  }
  v5 = (__int64*)a1[3];
  v6 = (__int64*)a1[4];
  if (v5 == v6) {
  LABEL_5:
    v9 = GameRoutine_a7bee0(v2, a2);
    v7 = v9;
    if (v9 != 0) {
      v11 = (__int64*)a1[4];
      v10 = a1[5];
      if ((unsigned __int64)v11 >= v10) {
        v16 = a1[3];
        v17 = (char*)v11 - v16;
        v18 = ((__int64)v11 - v16) >> 3;
        v19 = v18 + 1;
        if ((unsigned __int64)(v18 + 1) >> 61 != 0) {
          GameRoutine_d48080();
        }
        v20 = v10 - v16;
        v21 = fw_memory_g_heap_manager_ptr;
        if (v20 >> 2 > v19) {
          v19 = v20 >> 2;
        }
        if ((unsigned __int64)v20 >= 0x7FFFFFFFFFFFFFF8LL) {
          v22 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v22 = v19;
        }
        if (v22 != 0) {
          if (v22 >> 61 != 0) {
            GameRoutine_60a210(v9);
          }
          v23 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v22, 16, 0);
        }
        else {
          v23 = 0;
        }
        v24 = v23 + 8 * v22;
        v25 = (char*)v11 - v16;
        v26 = (__int64)&v17[v23 + -8 * v18];
        *(_QWORD*)&v17[v23] = v7;
        v12 = (__int64)&v17[v23 + 8];
        memcpy(v26, v16, v25);
        a1[3] = v26;
        a1[4] = v12;
        a1[5] = v24;
        if (v16 != 0) {
          v27 = 128;
          if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) == 0) {
            v27 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v27, v16);
        }
      }
      else {
        *v11 = v9;
        v12 = (__int64)(v11 + 1);
      }
      a1[4] = v12;
    }
  }
  else {
    while (1) {
      v8 = *v5++;
      v7 = v8;
      if ((unsigned int)strcmp(a2, *(_QWORD*)(v8 + 8)) == 0) {
        break;
      }
      if (v5 == v6) {
        goto LABEL_5;
      }
    }
  }
  return v7;
}

__int64 game_facility_SceneObjectHolder_HideBindEffect(__int64 result)
{
  __int64 v1;
  unsigned __int8 explicit;
  int* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int8 v13;
  int* v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 i;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 j;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  int v27;
  __int64 v28;
  struct {
    __int64 (**v29)();
    char v30;
    char gap25_[23];
    __int64 (***v31)();
    char gap56_[32];
    __int64 v32;
  } v29_;

  v1 = *(_QWORD*)(result + 8);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212deb8,
                                  memory_order_acquire);
  v3 = GameData_212deb0;
  if ((explicit & 1) == 0) {
    v29_.v32 = result;
    v28 = v1;
    v27 = __cxa_guard_acquire(GameData_212deb8);
    v3 = GameData_212deb0;
    v1 = v28;
    result = v29_.v32;
    if (v27 != 0) {
      *GameData_212deb0 = wld_Crc32_alt1(0, "CharacterBuilder", 0x10u);
      __cxa_guard_release(GameData_212deb8);
      v3 = GameData_212deb0;
      v1 = v28;
      result = v29_.v32;
    }
  }
  v4 = *v3;
  v6 = *(_QWORD*)(v1 + 504);
  v5 = *(_QWORD*)(v1 + 512);
  v7 = v5;
  v8 = v5;
  do {
    if (v8 == v6) {
      goto LABEL_10;
    }
    v9 = *(_DWORD*)(v8 - 16);
    v8 -= 16;
    v7 -= 16;
  } while (v9 != v4);
  if (v5 == v7 || (v10 = *(_QWORD**)(v7 + 8)) == nullptr) {
  LABEL_10:
    v12 = *(_QWORD*)(result + 8);
    v13 = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4a8,
                               memory_order_acquire);
    v14 = GameData_212d4a0;
    if ((v13 & 1) == 0) {
      v29_.v32 = v12;
      result = __cxa_guard_acquire(GameData_212d4a8);
      v14 = GameData_212d4a0;
      v12 = v29_.v32;
      if ((_DWORD)result != 0) {
        *GameData_212d4a0 = wld_Crc32_alt1(0, "EffectModule", 0xCu);
        result = __cxa_guard_release(GameData_212d4a8);
        v14 = GameData_212d4a0;
        v12 = v29_.v32;
      }
    }
    v15 = *v14;
    v17 = *(_QWORD*)(v12 + 504);
    v16 = *(_QWORD*)(v12 + 512);
    v18 = v16;
    for (i = v16; i != v17; i -= 16) {
      v20 = *(_DWORD*)(i - 16);
      v18 -= 16;
      if (v20 == v15) {
        if (v16 != v18) {
          v21 = *(_QWORD*)(v18 + 8);
          if (v21 != 0) {
            v22 = *(_QWORD*)(v21 + 8);
            if (*(_BYTE*)(v22 + 289) == 1 && (*(_BYTE*)(v22 + 288) & 1) != 0) {
              while ((*(_BYTE*)(v22 + 300) & 0xFD) != 1) {
                v22 = *(_QWORD*)(v22 + 736);
                if (v22 == 0) {
                  if (*(_DWORD*)(v21 + 84) != 0) {
                    *(_BYTE*)(v21 + 72) = 0;
                    *(_DWORD*)(v21 + 84) = 0;
                    *(_QWORD*)(v21 + 76) = 0;
                  }
                  v24 = *(_QWORD*)(v21 + 24);
                  for (j = *(_QWORD*)(v21 + 32); v24 != j; v24 += 128) {
                    v25 = *(__int64**)(v24 + 8);
                    v26 = *v25;
                    if (*v25 != 0 &&
                        *(_DWORD*)(v26 + 16) == *((_DWORD*)v25 + 2)) {
                      *(_BYTE*)(v26 + 33) = 0;
                    }
                    else {
                      *(_BYTE*)(v24 + 36) = 1;
                    }
                  }
                  return result;
                }
                if (*(_BYTE*)(v22 + 289) != 1 || *(_BYTE*)(v22 + 288) != 1) {
                  return result;
                }
              }
            }
          }
        }
        return result;
      }
    }
    return result;
  }
  v29_.v30 = 0;
  v29_.v29 = GameData_203fd68;
  v29_.v31 = &v29_.v29;
  CharacterBuilder_1083e90(v10, (__int64)&v29_.v29);
  result = (__int64)v29_.v31;
  if (v29_.v31 == &v29_.v29) {
    v11 = 4;
  }
  else {
    if (v29_.v31 == nullptr) {
      return result;
    }
    v11 = 5;
  }
  return ((__int64 (*)(__int64))(*v29_.v31)[v11])((__int64)v29_.v31);
}

void game_facility_SceneObjectHolder_HideBindEffect_lambda0_Invoke(__int64 a1,
                                                                   __int64 a2)
{
  __int64 v2;
  __int64 i;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 j;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  int v11;
  __int64 v12;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ec970,
                            memory_order_acquire) &
       1) == 0) {
    v12 = a2;
    v11 = __cxa_guard_acquire(&GameData_21ec970);
    a2 = v12;
    if (v11 != 0) {
      GameData_21ec968 = wld_Crc32(0, "EffectModule", 12);
      __cxa_guard_release(&GameData_21ec970);
      a2 = v12;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  for (i = v2; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v4 = *(_DWORD*)(i - 16);
    v2 -= 16;
    if (v4 == GameData_21ec968) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          v6 = *(_QWORD*)(v5 + 8);
          if (*(_BYTE*)(v6 + 289) == 1 && (*(_BYTE*)(v6 + 288) & 1) != 0) {
            while ((*(_BYTE*)(v6 + 300) & 0xFD) != 1) {
              v6 = *(_QWORD*)(v6 + 736);
              if (v6 == 0) {
                if (*(_DWORD*)(v5 + 84) != 0) {
                  *(_BYTE*)(v5 + 72) = 0;
                  *(_DWORD*)(v5 + 84) = 0;
                  *(_QWORD*)(v5 + 76) = 0;
                }
                v8 = *(_QWORD*)(v5 + 24);
                for (j = *(_QWORD*)(v5 + 32); v8 != j; v8 += 128) {
                  v9 = *(__int64**)(v8 + 8);
                  v10 = *v9;
                  if (*v9 != 0 && *(_DWORD*)(v10 + 16) == *((_DWORD*)v9 + 2)) {
                    *(_BYTE*)(v10 + 33) = 0;
                  }
                  else {
                    *(_BYTE*)(v8 + 36) = 1;
                  }
                }
                return;
              }
              if (*(_BYTE*)(v6 + 289) != 1 || *(_BYTE*)(v6 + 288) != 1) {
                return;
              }
            }
          }
        }
      }
      return;
    }
  }
}

#pragma GCC visibility pop
