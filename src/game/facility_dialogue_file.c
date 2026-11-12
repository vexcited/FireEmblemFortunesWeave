#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameReliance_8e17a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_196e540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_975940(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (**game_GameReliance_Impl_Data_vtable_ptr)();
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* game_vstring_kEmpty_ptr[2];
extern __int64 GameData_21c9e08;
extern __int64 GameData_21d99c8;
extern __int64 GameData_21d99d0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_vstring_kEmpty;
extern char GameData_1a9f09e;
extern char GameData_2166cf2;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e5a20(_QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__attribute__((swiftcall)) void
FacilityDialogueFile_196e2b0(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3);
__int64 FacilityDialogueFile_196e860(unsigned int a1, __int64 a2, __int64 a3);
__attribute__((swiftcall)) void
FacilityDialogueFile_196e9e0(PSEUDO_X8 x8_, unsigned __int64 result, __int64 a2,
                             int a3);
__int64 FacilityDialogueFile_196eb20(__int64 a1, __int64* a2, __int64 a3);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_6e5a20_alt1() __asm__("GameRoutine_6e5a20");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__attribute__((swiftcall)) void

FacilityDialogueFile_196e2b0(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3)
{
  unsigned int a4 = (unsigned int)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  __int64 v15;
  unsigned int v16;
  __int64 (***v17)();
  __int64 v18;
  unsigned __int64 v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 (*v24)(_QWORD);
  __int64 v25;
  _QWORD* v26;
  int v27;
  bool v28;
  __int64 v29;
  float v30;
  __int64* v31;
  int v32;
  unsigned int v33;
  unsigned int v34;
  int v35;
  unsigned int v36;
  _QWORD v37[3];
  _QWORD v38[2];
  __int64 v39;

  result = 0;
  if (a2 != 0 && a3 != 0) {
    v7 = *(_QWORD*)(a1 + 24);
    if (v7 == 0) {
      (v7 != 0) & (unsigned __int8)a4;
      return;
    }
    v8 = *(_QWORD*)(v7 + 16);
    v9 = *(_QWORD*)(v7 + 24);
    if (v9 != v8) {
      while (1) {
        if (*(_QWORD*)v8 != 0) {
          v22 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v23 = game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48), v8);
            if (v23 != 0) {
              v24 = *(__int64 (**)(_QWORD))(v23 + 72);
              v25 = *(_QWORD*)(v23 + 80);
              v26 = (_QWORD*)(v23 + (v25 >> 1));
              if ((v25 & 1) != 0) {
                v24 = *(__int64 (**)(_QWORD))((char*)v24 + *v26);
              }
              LOBYTE(result) = v24(v26);
            }
            else {
              LOBYTE(result) = 1;
            }
          }
          if (*(_BYTE*)(v8 + 16) != ((v22 == 0) | result & 1)) {
            break;
          }
        }
        v8 += 24;
        if (v8 == v9) {
          goto LABEL_5;
        }
      }
      LOBYTE(a4) = 0;
      {
        (v7 != 0) & (unsigned __int8)a4;
        return;
      }
    }
  LABEL_5:
    v11 = *(_QWORD*)(a2 + 24);
    v12 = *(_QWORD*)(a3 + 24);
    v38[0] = 0;
    v38[1] = a2;
    v37[0] = 0;
    v37[1] = a3;
    v13 = *(_QWORD*)(*(_QWORD*)(v12 + 1784) + 272LL);
    v39 = *(_QWORD*)(*(_QWORD*)(v11 + 1784) + 272LL);
    v37[2] = v13;
    v14 = v39 == 0 || v13 == 0;
    if (v14 ||
        (v15 = *(_QWORD*)(game_GameModeData_instance_ + 128),
         ((v16 = GameReliance_8e17a0(v15, v38, v37)) & 0x80000000) != 0)) {
      v17 = &game_GameReliance_Impl_Data_vtable_ptr;
      if (GameData_2166cf2 == 0) {
      LABEL_11:
        v18 = GameData_21d99c8;
        v19 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
        if ((int)v19 >= 4) {
          v20 = 4;
        }
        else {
          v20 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
        }
        if (*(int*)(GameData_21d99c8 + 4LL * v20 - 4) >= 1) {
          v21 = 0;
          goto LABEL_31;
        }
        goto LABEL_37;
      }
    }
    else {
      v17 = (__int64 (***)())(*(_QWORD*)(v15 + 8) + 56LL * v16);
      if (*((_BYTE*)v17 + 10) == 0) {
        goto LABEL_11;
      }
    }
    v21 = *((unsigned __int16*)v17 + 6);
    v18 = GameData_21d99c8;
    v19 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
    if ((int)v19 >= 4) {
      v27 = 4;
    }
    else {
      v27 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
    }
    if (*(_DWORD*)(GameData_21d99c8 + 4LL * v27 - 4) > v21) {
    LABEL_31:
      if ((int)v19 >= 3) {
        LODWORD(v19) = 3;
      }
      v28 = *(_DWORD*)(v18 + 4LL * (int)v19 - 4) <= v21;
      v29 = 104;
      if (v28) {
        v29 = 105;
      }
      a4 = *(unsigned __int8*)(a1 + v29);
      if (a4 == 0) {
        (v7 != 0) & (unsigned __int8)a4;
        return;
      }
      goto LABEL_38;
    }
  LABEL_37:
    a4 = *(unsigned __int8*)(a1 + 106);
    if (*(_BYTE*)(a1 + 106) == 0) {
      (v7 != 0) & (unsigned __int8)a4;
      return;
    }
  LABEL_38:
    v30 = (float)a4;
    nn_os_LockMutex(&game_g_random_mutex);
    v31 = game_map_MapRandom_instance__ptr[0];
    v32 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL));
    v33 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
    v34 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
    *((_DWORD*)v31 + 1) = v32;
    v35 = (v34 >> 8) ^ (v33 >> 19) ^ v34 ^ v33;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v31) = v33;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v31 + 4) = v35;
    v36 = v35 & 0x7FFFFFFF;
    nn_os_UnlockMutex(&game_g_random_mutex);
    LOBYTE(a4) = (float)(v30 * 0x1.3880000000000p+13f) > (float)(v36 % 0xF4240);
    {
      (v7 != 0) & (unsigned __int8)a4;
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 FacilityDialogueFile_196e860(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64* v7;
  _BYTE* v8;
  _BYTE* v9;
  __int64* v10;
  __int64 v11;
  __int64* v12;
  _BYTE* v13;
  _BYTE* v14;
  __int64* v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  bool v23;
  _QWORD* v24;
  char v25;
  __int64 result;

  if (a2 == 0 || a3 == 0) {
    return 0;
  }
  if (*(_QWORD*)(a2 + 288) == 0) {
    v10 = &game_vstring_kEmpty;
    goto LABEL_11;
  }
  v6 = GameRoutine_975940();
  if (v6 == 0) {
    v10 = &game_vstring_kEmpty;
    if (*(_QWORD*)(a3 + 288) == 0) {
      goto LABEL_18;
    }
    goto LABEL_12;
  }
  v9 = *(_BYTE**)(v6 + 160);
  v7 = (__int64*)(v6 + 160);
  v8 = v9;
  v10 = game_vstring_kEmpty_ptr[0];
  if (v9 == nullptr) {
  LABEL_11:
    if (*(_QWORD*)(a3 + 288) == 0) {
      goto LABEL_18;
    }
    goto LABEL_12;
  }
  if (*v8 != 0) {
    v10 = v7;
  }
  if (*(_QWORD*)(a3 + 288) != 0) {
  LABEL_12:
    v11 = GameRoutine_975940();
    if (v11 != 0) {
      v14 = *(_BYTE**)(v11 + 160);
      v12 = (__int64*)(v11 + 160);
      v13 = v14;
      v15 = game_vstring_kEmpty_ptr[0];
      if (v14 != nullptr && *v13 != 0) {
        v15 = v12;
      }
      goto LABEL_19;
    }
  }
LABEL_18:
  v15 = &game_vstring_kEmpty;
LABEL_19:
  v16 = GameRoutine_196e540(a1, v10, v15);
  v18 = *(__int64**)(GameData_21c9e08 + 64);
  v17 = *(__int64**)(GameData_21c9e08 + 72);
  if (v18 == v17) {
    return 0;
  }
  if (v16 != 0) {
    while (1) {
      v21 = *v18;
      v24 = *(_QWORD**)(*v18 + 24);
      if (v24 != nullptr && (v16 == *v24 || v16 == v24[1])) {
        break;
      }
      if (++v18 == v17) {
        return 0;
      }
    }
  }
  else {
    v19 = v18 + 1;
    v20 = 0;
    while (1) {
      v21 = *(v19 - 1);
      v22 = *(_QWORD**)(v21 + 24);
      if (v22 == nullptr || *v22 == 0) {
        break;
      }
      if (v22[1] != 0) {
        v23 = v19 == v17;
      }
      else {
        v20 = *(v19 - 1);
        v23 = true;
      }
      ++v19;
      if (v23) {
        v21 = v20;
        if (v20 != 0) {
          break;
        }
        return 0;
      }
    }
  }
  v25 = X8CALL_X0(__int64, FacilityDialogueFile_196e2b0(
                               (void*)((unsigned int)v17), v21, a2, a3));
  result = v21;
  if ((v25 & 1) == 0) {
    return 0;
  }
  return result;
}

__attribute__((swiftcall)) void

FacilityDialogueFile_196e9e0(PSEUDO_X8 x8_, unsigned __int64 result, __int64 a2,
                             int a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  char* v10;
  char* v11;
  char* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  if (a2 == 0) {
    *(_WORD*)a4 = 0;
    {
      result;
      return;
    }
  }
  if (a3 == 0 && *(_BYTE*)(a2 + 32) == 0) {
    (**(__int64 (***)(unsigned __int64))result)(result);
    return;
  }
  v5 = *(_QWORD*)(a2 + 24);
  if (v5 != 0) {
    v6 = 88;
    if (a3 == 0) {
      v6 = 64;
    }
    v7 = 104;
    if (a3 == 0) {
      v7 = 80;
    }
    v8 = *(_BYTE*)(v5 + v6);
    v9 = 89;
    v10 = *(char**)(v5 + v7);
    if (a3 == 0) {
      v9 = 65;
    }
    v11 = (char*)(v5 + v9);
    if ((v8 & 1) != 0) {
      v12 = v10;
    }
    else {
      v12 = v11;
    }
  }
  else {
    v12 = &GameData_1a9f09e;
  }
  result = strlen(v12);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  v13 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (result | 7) + 1;
    }
    v16 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v15, 16, 0);
    *(_QWORD*)(a4 + 8) = v13;
    *(_QWORD*)(a4 + 16) = v16;
    *(_QWORD*)a4 = v15 | 1;
    v14 = v16;
  }
  else {
    *(_BYTE*)a4 = 2 * result;
    v14 = a4 + 1;
    if (result == 0) {
      goto LABEL_26;
    }
  }
  result = memmove(v14, v12, v13);
LABEL_26:
  *(_BYTE*)(v14 + v13) = 0;
  {
    result;
    return;
  }
}

__int64 FacilityDialogueFile_196eb20(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  unsigned __int64 v6;
  __int64* v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  int v12;
  __int64 result;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  char* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  int v32;
  unsigned int v33;
  unsigned int v34;
  int v35;
  int v36;
  unsigned int v37;
  __int64 v38;

  v3 = *a2;
  v4 = a2[1];
  if (*a2 != v4) {
    if (a3 == 0 || *(_BYTE*)(a3 + 32) != 0) {
      v6 = (unsigned __int64)(v4 - v3) >> 3;
      nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
      v7 = game_map_MapRandom_instance__ptr[0];
      v8 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((_UNKNOWN**)0x8LL));
      v9 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v10 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v7 + 1) = v8;
      v11 = (v10 >> 8) ^ (v9 >> 19) ^ v10 ^ v9;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7) = v9;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7 + 4) = v11;
      v12 = v11 & 0x7FFFFFFF;
      nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
      return (unsigned int)(v12 % (int)v6);
    }
    if ((int)((unsigned __int64)(v4 - v3) >> 3) >= 1) {
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = nullptr;
      v19 = (__int64*)fw_memory_g_heap_manager_ptr;
      do {
        v20 = *(_QWORD*)(*(_QWORD*)(v3 + 8 * v15) + 392LL);
        if (v20 != 0) {
          v21 = *(_QWORD*)(a3 + 48);
          if (v21 != 0 && *(_QWORD*)(*(_QWORD*)(v20 + 24) + 1672LL) ==
                              *(_QWORD*)(*(_QWORD*)(v21 + 24) + 1672LL)) {
            if (*(_BYTE*)(a3 + 32) != 0) {
              goto LABEL_8;
            }
          }
          else {
            v22 = *(_QWORD*)(a3 + 72);
            if (v22 != 0 && *(_QWORD*)(*(_QWORD*)(v20 + 24) + 1672LL) ==
                                *(_QWORD*)(*(_QWORD*)(v22 + 24) + 1672LL)) {
              goto LABEL_8;
            }
          }
        }
        if ((unsigned __int64)v18 < v17) {
          *(_DWORD*)v18 = v15;
          v18 += 4;
        }
        else {
          v23 = &v18[-v16];
          v24 = (__int64)&v18[-v16] >> 2;
          v25 = v24 + 1;
          if ((unsigned __int64)(v24 + 1) >> 62 != 0) {
            GameRoutine_6e5a20_alt1();
          }
          if ((__int64)(v17 - v16) >> 1 > v25) {
            v25 = (__int64)(v17 - v16) >> 1;
          }
          if (v17 - v16 >= 0x7FFFFFFFFFFFFFFCLL) {
            v26 = 0x3FFFFFFFFFFFFFFFLL;
          }
          else {
            v26 = v25;
          }
          if (v26 != 0) {
            if (v26 >> 62 != 0) {
              GameRoutine_60a210_alt1();
            }
            v27 = fw_memory_HeapManager_Allocate_alt1(*v19, 4 * v26, 16, 0);
          }
          else {
            v27 = 0;
          }
          v17 = v27 + 4 * v26;
          v28 = (unsigned __int64)&v18[-v16];
          v29 = (__int64)&v23[v27 + -4 * v24];
          *(_DWORD*)&v23[v27] = v15;
          v18 = &v23[v27 + 4];
          memcpy_alt1(v29, v16, v28);
          if (v16 != 0) {
            v30 = 128;
            if (*(_QWORD*)(*v19 + 200) == 0) {
              v30 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v19 + v30, v16);
          }
          v16 = v29;
        }
      LABEL_8:
        v3 = *a2;
        ++v15;
      } while (v15 < (int)((unsigned __int64)(a2[1] - *a2) >> 3));
      if (v18 == (char*)v16) {
        result = 0;
        if (v16 == 0) {
          return result;
        }
      }
      else {
        nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
        v31 = game_map_MapRandom_instance__ptr[0];
        v32 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL));
        v33 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v34 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
              (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v31 + 1) = v32;
        v35 = (v34 >> 8) ^ (v33 >> 19) ^ v34 ^ v33;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v31) = v33;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v31 + 4) = v35;
        v36 = v35 & 0x7FFFFFFF;
        nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
        result =
            *(unsigned int*)(v16 +
                             4LL * (unsigned int)(v36 %
                                                  (int)((unsigned __int64)&v18
                                                            [-v16] >>
                                                        2)));
        if (v16 == 0) {
          return result;
        }
      }
      v37 = result;
      v38 = 128;
      if (*(_QWORD*)(*v19 + 200) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v19 + v38, v16);
      return v37;
    }
  }
  return 0;
}

#pragma GCC visibility pop
