#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1ff4628[])();
extern __int64 (*game_graphics_ObjectTransparent_vtable[])();
extern __int64 GameData_21c9758;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2221120;
_QWORD* ObjectTransparent_Destructor(_QWORD* result);
__int64 GameRoutine_654050(_QWORD);
__int64 GameRoutine_66b000(_QWORD, _QWORD);
__int64 GameRoutine_66b160(_QWORD);
__int64 GameRoutine_f38900(__int64, __int64);
__int64 GameRoutine_f38a80(__int64, _QWORD*);
__int64 GameRoutine_f38c20(__int64, _QWORD*);
__int64 GameRoutine_f38ee0(_QWORD, _QWORD);
__int64 GameRoutine_f39c40(__int64 result, char);
__int64 GameRoutine_f3b6f0(_QWORD, _QWORD);
__int64 GameRoutine_f3ca00(_QWORD, _QWORD);
__int64 InstanceObjectTransparentModule_fb82a0(_QWORD, _QWORD);
__int64 ObjectTransparentModuleBase_febc00(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN GameData_1aa53a0;
extern _UNKNOWN GameData_1ac0a59;
extern _UNKNOWN GameData_1ad7197;
extern _UNKNOWN GameData_1ae2e36;
extern __int64 (*GameData_1ff4658[])();
extern __int64 GameData_212c7d8[6];
extern __int64 GameData_21323e8[4];
extern __int64 GameData_21c6978;
extern __int64 GameData_21c9680;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212ee40[2];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_65c760(_QWORD);
void __attribute__((noreturn)) GameRoutine_f3bb00(void);
void __attribute__((noreturn)) GameRoutine_f3bb20(void);
float game_graphics_ObjectTransparent_ObjectTransparent(__int64 a1);
__int64 ObjectTransparent_f38dc0(__int64 result);
float ObjectTransparent_f391a0(__int64 a1, int a2);
float ObjectTransparent_f39230(__int64 a1, int a2);
__int64 ObjectTransparent_f392c0(__int64 result, __int64 a2);
__int64 ObjectTransparent_f396e0(__int64 result, __int64 a2);
__int64 ObjectTransparent_f3b380(__int64 result, unsigned __int8* a2,
                                 __int64 a3);
_QWORD* ObjectTransparent_f3b8e0(__int64** a1, __int64* a2);
__int64
game_graphics_ObjectTransparent_ObjectTransparent_lambda0_Invoke(__int64 a1);
__int64 game_graphics_ObjectTransparent_Run_lambda1_Invoke(__int64 result,
                                                           __int64 a2,
                                                           atomic_uint* a3);

float game_graphics_ObjectTransparent_ObjectTransparent(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float result;
  int v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;

  if (*(_QWORD*)GameData_212c7d8[0] == 0) {
    *(_QWORD*)GameData_212c7d8[0] = a1;
    GameData_2221120 = 1;
  }
  *(_BYTE*)(a1 + 48) = 0;
  *(_BYTE*)(a1 + 80) = 0;
  *(_BYTE*)(a1 + 96) = 0;
  *(_BYTE*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)a1 = game_graphics_ObjectTransparent_vtable;
  *(_QWORD*)(a1 + 8) = 0x3D4CCCCD3DCCCCCDLL;
  *(_BYTE*)(a1 + 16) = 1;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 309) = 0;
  v2 = fw_memory_g_heap_manager;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(v2, 80, 16, 0);
  v3[2] = 0;
  v4 = GameData_212ee40[0];
  v3[8] = 0;
  *(_QWORD*)(a1 + 24) = v3 + 4;
  *(_QWORD*)(a1 + 32) = v3;
  v13 = v12;
  *v3 = v4 + 2;
  v3[1] = 0;
  v12[0] = GameData_1ff4658;
  v12[1] = a1;
  GameRoutine_654050(v12);
  if (v13 == v12) {
    v5 = 32;
  }
  else {
    if (v13 == nullptr) {
      goto LABEL_8;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v13 + v5))((__int64)v13);
LABEL_8:
  v6 = *(_QWORD*)(a1 + 24);
  v7 = *(_QWORD*)(a1 + 32);
  v10 = v6;
  v11 = v7;
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
    v12[0] = v6;
    v12[1] = v7;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_66b160(v12);
    std___1___shared_weak_count___release_weak(v7);
  }
  else {
    v12[0] = v6;
    v12[1] = 0;
    GameRoutine_66b160(v12);
  }
  GameRoutine_66b000(&GameData_21c9680, &v10);
  if (v11 != 0) {
    std___1___shared_weak_count___release_weak(v11);
  }
  result = *(float*)(a1 + 8);
  v9 = *(_DWORD*)(a1 + 12);
  *(float*)(a1 + 312) = result;
  *(_DWORD*)(a1 + 308) = v9;
  return result;
}

_QWORD* ObjectTransparent_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
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

  v1 = result[34];
  v2 = result;
  *result = game_graphics_ObjectTransparent_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[35] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = v2[30];
  if (v6 != 0) {
    v7 = v2[31];
    if (v6 == v7) {
      goto LABEL_24;
    }
    v8 = v2[31];
    do {
      v12 = *(_QWORD*)(v8 - 24);
      v8 -= 24;
      v10 = v12;
      if (v12 != 0) {
        v13 = *(_QWORD*)(v7 - 16);
        if (v10 == v13) {
          goto LABEL_9;
        }
        do {
          v14 = *(_QWORD*)(v13 - 24);
          if (v14 != 0) {
            *(_QWORD*)(v13 - 16) = v14;
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v15 = 128;
            }
            else {
              v15 = 56;
            }
            result =
                (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v15, v14);
          }
          v13 -= 48;
        } while (v13 != v10);
        v9 = *(_QWORD*)(v7 - 24);
        *(_QWORD*)(v7 - 16) = v10;
        v10 = v9;
        if (v9 != 0) {
        LABEL_9:
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v11 = 128;
          }
          else {
            v11 = 56;
          }
          result =
              (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11, v10);
        }
      }
      v7 = v8;
    } while (v6 != v8);
    v16 = v2[30];
    v2[31] = v6;
    v6 = v16;
    if (v16 != 0) {
    LABEL_24:
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v17 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v17, v6);
    }
  }
  v18 = v2[27];
  if (v18 != 0) {
    v19 = *(_QWORD*)v3;
    v2[28] = v18;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v19 + v20, v18);
  }
  v21 = v2[24];
  if (v21 != 0) {
    v22 = *(_QWORD*)v3;
    v2[25] = v21;
    v23 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v23 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v22 + v23, v21);
  }
  v24 = v2[21];
  if (v24 != 0) {
    v25 = *(_QWORD*)v3;
    v2[22] = v24;
    v26 = 128;
    if (*(_QWORD*)(v25 + 200) == 0) {
      v26 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v25 + v26, v24);
  }
  v27 = v2[18];
  if (v27 != 0) {
    v28 = *(_QWORD*)v3;
    v2[19] = v27;
    v29 = 128;
    if (*(_QWORD*)(v28 + 200) == 0) {
      v29 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v28 + v29, v27);
  }
  v30 = v2[4];
  if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v30);
  }
  *v2 = GameData_1ff4628;
  if ((_QWORD*)GameData_21c9758 == v2) {
    GameData_21c9758 = 0;
    GameData_2221120 = 0;
  }
  return result;
}

__int64 ObjectTransparent_f38dc0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  _QWORD* v8;

  v1 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) + 64LL);
  if (v1 != 0) {
    v2 = *(_QWORD*)(v1 + 96);
    if (v2 != 0 && *(_DWORD*)(v2 + 240) == 5) {
      v3 = (_QWORD*)(v1 + 120);
      while (1) {
        v3 = (_QWORD*)*v3;
        if (v3 == nullptr) {
          break;
        }
        if (*(_DWORD*)(v3[5] + 240LL) != 5) {
          return result;
        }
      }
      v5 = *(_QWORD*)(v2 + 24);
      v4 = *(_QWORD*)(v2 + 32);
      if (v4 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          result = std___1___shared_weak_count___release_weak(v4);
        }
      }
      v6 = *(__int64**)(v5 + 88);
      v7 = *(__int64**)(v5 + 96);
      if (v6 != v7) {
        while (1) {
          result = GameRoutine_f38900(result, *v6);
          if (result != 0) {
            goto LABEL_14;
          }
          result = GameRoutine_f38ee0(0, *v6);
          if ((_DWORD)result == 2) {
            result = GameRoutine_f38a80(result, (_QWORD*)*v6);
          LABEL_14:
            if (++v6 == v7) {
              return result;
            }
          }
          else {
            if ((_DWORD)result != 1) {
              goto LABEL_14;
            }
            v8 = (_QWORD*)*v6++;
            result = GameRoutine_f38c20(result, v8);
            if (v6 == v7) {
              return result;
            }
          }
        }
      }
    }
  }
  return result;
}

float ObjectTransparent_f391a0(__int64 a1, int a2)
{
  void* v2;
  int v4;
  __int64 v5;
  _QWORD v6[2];

  if (a2 == 0) {
    return 0.0;
  }
  if (*(_DWORD*)(a1 + 300) == 1) {
    v2 = &GameData_1ad7197;
  }
  else {
    v2 = &GameData_1ae2e36;
  }
  v6[1] = v2;
  v6[0] = game_HashString(v2);
  v4 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v6);
    if (v5 != 0) {
      v4 = *(_DWORD*)(v5 + 32);
    }
    else {
      v4 = 0;
    }
  }
  return (float)v4 / 1000.0;
}

float ObjectTransparent_f39230(__int64 a1, int a2)
{
  void* v2;
  int v4;
  __int64 v5;
  _QWORD v6[2];

  if (a2 == 0) {
    return 0.0;
  }
  if (*(_DWORD*)(a1 + 300) == 1) {
    v2 = &GameData_1ac0a59;
  }
  else {
    v2 = &GameData_1aa53a0;
  }
  v6[1] = v2;
  v6[0] = game_HashString(v2);
  v4 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v6);
    if (v5 != 0) {
      v4 = *(_DWORD*)(v5 + 32);
    }
    else {
      v4 = 0;
    }
  }
  return (float)v4 / 1000.0;
}

__int64 ObjectTransparent_f392c0(__int64 result, __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
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
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  bool v28;
  unsigned __int64 v29;
  int v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int8* v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 i;
  __int64 v40;
  __int64 v41;
  unsigned __int8* v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64* v46;
  __int64* v47;
  _QWORD* v48;
  __int64 v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  int v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  _QWORD* v59;
  _QWORD* v60;

  v2 = *(_QWORD*)(result + 240);
  v4 = *(_QWORD*)(result + 248);
  v3 = (_QWORD*)(result + 240);
  v5 = *(int*)(a2 + 40);
  v7 = 0xAAAAAAAAAAAAAAABLL * ((v4 - v2) >> 3);
  if (v7 <= v5) {
    v8 = (int)v5 + 1;
    if (v8 <= v7) {
      if (v8 < v7) {
        v53 = result;
        v54 = *(_DWORD*)(a2 + 40);
        v9 = v2 + 24LL * (int)v8;
        if (v9 != v4) {
          v10 = *(_QWORD*)(result + 248);
          v11 = fw_memory_g_heap_manager_ptr;
          do {
            v15 = *(_QWORD*)(v10 - 24);
            v10 -= 24;
            v13 = v15;
            if (v15 != 0) {
              v16 = *(_QWORD*)(v4 - 16);
              if (v13 == v16) {
                goto LABEL_8;
              }
              do {
                v17 = *(_QWORD*)(v16 - 24);
                if (v17 != 0) {
                  *(_QWORD*)(v16 - 16) = v17;
                  if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
                    v18 = 128;
                  }
                  else {
                    v18 = 56;
                  }
                  result =
                      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v18, v17);
                }
                v16 -= 48;
              } while (v16 != v13);
              v12 = *(_QWORD*)(v4 - 24);
              *(_QWORD*)(v4 - 16) = v13;
              v13 = v12;
              if (v12 != 0) {
              LABEL_8:
                if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
                  v14 = 128;
                }
                else {
                  v14 = 56;
                }
                result =
                    nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v14, v13);
              }
            }
            v4 = v10;
          } while (v9 != v10);
        }
        LODWORD(v5) = v54;
        *(_QWORD*)(v53 + 248) = v9;
      }
    }
    else {
      result = GameRoutine_f3b6f0(result + 240, v8 - v7);
    }
  }
  v19 = (__int64*)(*v3 + 24LL * (int)v5);
  v20 = *v19;
  v21 = v19[1];
  if (*v19 != v21) {
    while (*(_QWORD*)(v20 + 8) != a2) {
      v20 += 48;
      if (v20 == v21) {
        goto LABEL_29;
      }
    }
  }
  if (v20 != v21) {
    *(_BYTE*)v20 = 0;
    return result;
  }
LABEL_29:
  v22 = *(_QWORD*)(a2 + 32);
  LOBYTE(v55) = 0;
  v56 = a2;
  v57 = 0;
  if (v22 != 0) {
    v23 = *(unsigned __int8*)(v22 + 72);
    v24 = v22 + 73;
    v27 = v22 + 80;
    v25 = *(_QWORD*)(v22 + 80);
    v26 = *(_QWORD*)(v27 + 8);
    v28 = (v23 & 1) == 0;
    v29 = v23 >> 1;
    if (v28) {
      v30 = v29;
    }
    else {
      v24 = v26;
      v30 = v25;
    }
    if (v24 != 0) {
      v31 = 0xCBF29CE484222325LL;
      if (v30 >= 8) {
        v32 = 7;
        do {
          v33 = (unsigned __int8*)(v24 + v32);
          v32 += 8LL;
          v31 = (0x100000001B3LL *
                 ((0x100000001B3LL *
                   ((0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL *
                           ((0x100000001B3LL *
                             ((0x100000001B3LL * v31) ^ *(v33 - 7))) ^
                            *(v33 - 6))) ^
                          *(v33 - 5))) ^
                        *(v33 - 4))) ^
                      *(v33 - 3))) ^
                    *(v33 - 2))) ^
                  *(v33 - 1))) ^
                *v33;
        } while (v32 < (v30 & 0x7FFFFFFFu));
        v34 = v30 & 0x7FFFFFF8;
        if ((v30 & 0x7FFFFFF8) >= v30) {
          goto LABEL_46;
        }
      LABEL_41:
        v36 = v34;
        v37 = (unsigned int)v30;
        v38 = v30 & 7;
        for (i = v36; v38 != 0; v31 = (0x100000001B3LL * v31) ^ v40) {
          v40 = *(unsigned __int8*)(v24 + i++);
          --v38;
        }
        if ((unsigned __int64)(v36 - v37) <= 0xFFFFFFFFFFFFFFF8LL) {
          v41 = v37 - i;
          v42 = (unsigned __int8*)(i + v24 + 3);
          do {
            v41 -= 8;
            v43 = (0x100000001B3LL *
                   ((0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL *
                           ((0x100000001B3LL *
                             ((0x100000001B3LL * v31) ^ *(v42 - 3))) ^
                            *(v42 - 2))) ^
                          *(v42 - 1))) ^
                        *v42)) ^
                      v42[1])) ^
                    v42[2])) ^
                  v42[3];
            v44 = v42[4];
            v42 += 8;
            v31 = (0x100000001B3LL * v43) ^ v44;
          } while (v41 != 0);
        }
        goto LABEL_46;
      }
      v34 = 0;
      if (v30 > 0) {
        goto LABEL_41;
      }
    LABEL_46:
      if (v31 != 0) {
        v35 = v31;
      }
      else {
        v35 = -1;
      }
    LABEL_49:
      v45 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v46 = (__int64*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
      *v46 = v35;
      v47 = v46;
      v58 = v46;
      v59 = v46 + 1;
      v60 = v46 + 1;
      v48 = (_QWORD*)v19[1];
      if ((unsigned __int64)v48 >= v19[2]) {
        v51 = ObjectTransparent_f3b8e0(v19, &v55);
      }
      else {
        v49 = v56;
        *v48 = v55;
        v48[1] = v49;
        v48[2] = v57;
        v50 = (__int64*)fw_memory_HeapManager_Allocate(*v45, 8, 16, 0);
        v48[3] = v50;
        v48[4] = v50;
        v48[5] = v50 + 1;
        *v50 = *v47;
        v48[4] = v50 + 1;
        v51 = (__int64)(v48 + 6);
      }
      v19[1] = v51;
      ObjectTransparentModuleBase_febc00(a2);
      v52 = 128;
      if (*(_QWORD*)(*v45 + 200LL) == 0) {
        v52 = 56;
      }
      return nn_mem_StandardAllocator_Free(*v45 + v52, v47);
    }
  }
  v35 = 0;
  goto LABEL_49;
}

__int64 ObjectTransparent_f396e0(__int64 result, __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
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
  _QWORD* v21;
  __int64 v22;
  unsigned __int8* v23;
  unsigned __int8* v24;
  __int64* v25;
  _QWORD* v26;
  unsigned __int64 v27;
  unsigned __int8* v28;
  bool v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int8* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 i;
  __int64 v38;
  unsigned __int8* v39;
  __int64 v40;
  unsigned __int8* v41;
  __int64 v42;
  __int64 v43;
  char* v44;
  char* v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  char* v56;
  signed __int64 v57;
  __int64 v58;
  char* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  int v66;
  _QWORD* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  char* v71;
  __int64* v72;
  unsigned __int64 v73;

  v2 = *(_QWORD*)(result + 240);
  v4 = *(_QWORD*)(result + 248);
  v3 = (_QWORD*)(result + 240);
  v5 = *(int*)(a2 + 40);
  v7 = 0xAAAAAAAAAAAAAAABLL * ((v4 - v2) >> 3);
  if (v7 <= v5) {
    v8 = (int)v5 + 1;
    if (v8 <= v7) {
      if (v8 < v7) {
        v65 = result;
        v66 = *(_DWORD*)(a2 + 40);
        v9 = v2 + 24LL * (int)v8;
        if (v9 != v4) {
          v10 = *(_QWORD*)(result + 248);
          v11 = fw_memory_g_heap_manager_ptr;
          do {
            v15 = *(_QWORD*)(v10 - 24);
            v10 -= 24;
            v13 = v15;
            if (v15 != 0) {
              v16 = *(_QWORD*)(v4 - 16);
              if (v13 == v16) {
                goto LABEL_8;
              }
              do {
                v17 = *(_QWORD*)(v16 - 24);
                if (v17 != 0) {
                  *(_QWORD*)(v16 - 16) = v17;
                  if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
                    v18 = 128;
                  }
                  else {
                    v18 = 56;
                  }
                  result =
                      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v18, v17);
                }
                v16 -= 48;
              } while (v16 != v13);
              v12 = *(_QWORD*)(v4 - 24);
              *(_QWORD*)(v4 - 16) = v13;
              v13 = v12;
              if (v12 != 0) {
              LABEL_8:
                if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
                  v14 = 128;
                }
                else {
                  v14 = 56;
                }
                result =
                    nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v14, v13);
              }
            }
            v4 = v10;
          } while (v9 != v10);
        }
        LODWORD(v5) = v66;
        *(_QWORD*)(v65 + 248) = v9;
      }
    }
    else {
      result = GameRoutine_f3b6f0(result + 240, v8 - v7);
    }
  }
  v19 = (_QWORD*)(*v3 + 24LL * (int)v5);
  v20 = (_QWORD*)*v19;
  v21 = (_QWORD*)v19[1];
  if ((_QWORD*)*v19 != v21) {
    while (v20[2] != a2) {
      v20 += 6;
      if (v20 == v21) {
        goto LABEL_29;
      }
    }
  }
  if (v20 != v21) {
    *(_BYTE*)v20 = 0;
    return result;
  }
LABEL_29:
  v22 = *(_QWORD*)(a2 + 32);
  LOBYTE(v68) = 0;
  v71 = nullptr;
  v72 = nullptr;
  v23 = *(unsigned __int8**)(v22 + 192);
  v24 = *(unsigned __int8**)(v22 + 200);
  v73 = 0;
  v69 = 0;
  v70 = a2;
  if (v23 != v24) {
    v67 = v19;
    v25 = nullptr;
    v26 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v27 = *v23;
      v28 = *((unsigned __int8**)v23 + 2);
      v29 = (v27 & 1) == 0;
      v30 = v27 >> 1;
      if (v29) {
        v28 = v23 + 1;
      }
      if (!v29) {
        v30 = *((_QWORD*)v23 + 1);
      }
      if (v28 != nullptr) {
        break;
      }
      v35 = 0;
    LABEL_54:
      if ((unsigned __int64)v25 < v73) {
        *v25++ = v35;
      }
      else {
        v44 = v71;
        v45 = (char*)((char*)v25 - v71);
        v46 = ((char*)v25 - v71) >> 3;
        v47 = v46 + 1;
        if ((unsigned __int64)(v46 + 1) >> 61 != 0) {
          goto LABEL_85;
        }
        v48 = v73 - (_QWORD)v71;
        if ((__int64)(v73 - (_QWORD)v71) >> 2 > v47) {
          v47 = v48 >> 2;
        }
        if ((unsigned __int64)v48 >= 0x7FFFFFFFFFFFFFF8LL) {
          v49 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v49 = v47;
        }
        if (v49 != 0) {
          if (v49 >> 61 != 0) {
            GameRoutine_60a210(result);
          }
          v50 = fw_memory_HeapManager_Allocate(*v26, 8 * v49, 16, 0);
        }
        else {
          v50 = 0;
        }
        v51 = v50 + 8 * v49;
        v52 = (__int64)&v45[v50 + -8 * v46];
        *(_QWORD*)&v45[v50] = v35;
        v25 = (__int64*)&v45[v50 + 8];
        result = memcpy(v52, v44, v45);
        v71 = (char*)v52;
        v73 = v51;
        if (v44 != nullptr) {
          v53 = 128;
          if (*(_QWORD*)(*v26 + 200LL) == 0) {
            v53 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v26 + v53, v44);
        }
      }
      v23 += 24;
      v72 = v25;
      if (v23 == v24) {
        v19 = v67;
        v21 = (_QWORD*)v67[1];
        goto LABEL_71;
      }
    }
    if ((int)v30 < 8) {
      v34 = 0;
      v32 = 0xCBF29CE484222325LL;
      if ((int)v30 <= 0) {
      LABEL_51:
        if (v32 != 0) {
          v35 = v32;
        }
        else {
          v35 = -1;
        }
        goto LABEL_54;
      }
    }
    else {
      v31 = 7;
      v32 = 0xCBF29CE484222325LL;
      do {
        v33 = &v28[v31];
        v31 += 8LL;
        v32 = (0x100000001B3LL *
               ((0x100000001B3LL *
                 ((0x100000001B3LL *
                   ((0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL *
                           ((0x100000001B3LL * v32) ^ *(v33 - 7))) ^
                          *(v33 - 6))) ^
                        *(v33 - 5))) ^
                      *(v33 - 4))) ^
                    *(v33 - 3))) ^
                  *(v33 - 2))) ^
                *(v33 - 1))) ^
              *v33;
      } while (v31 < (v30 & 0x7FFFFFFF));
      v34 = v30 & 0x7FFFFFF8;
      if ((int)(v30 & 0x7FFFFFF8) >= (int)v30) {
        goto LABEL_51;
      }
    }
    v36 = v30 & 7;
    for (i = v34; v36 != 0; v32 = (0x100000001B3LL * v32) ^ v38) {
      v38 = v28[i++];
      --v36;
    }
    if (v34 - (unsigned __int64)(unsigned int)v30 <= 0xFFFFFFFFFFFFFFF8LL) {
      v39 = &v28[i];
      v40 = (unsigned int)v30 - i;
      v41 = v39 + 3;
      do {
        v40 -= 8;
        v42 = (0x100000001B3LL *
               ((0x100000001B3LL *
                 ((0x100000001B3LL *
                   ((0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL * v32) ^ *(v41 - 3))) ^
                        *(v41 - 2))) ^
                      *(v41 - 1))) ^
                    *v41)) ^
                  v41[1])) ^
                v41[2])) ^
              v41[3];
        v43 = v41[4];
        v41 += 8;
        v32 = (0x100000001B3LL * v42) ^ v43;
      } while (v40 != 0);
    }
    goto LABEL_51;
  }
  v25 = nullptr;
LABEL_71:
  if ((unsigned __int64)v21 >= v19[2]) {
    v60 = ObjectTransparent_f3b8e0(v19, &v68);
    v56 = v71;
  }
  else {
    v54 = v68;
    v55 = v69;
    v21[4] = 0;
    v21[5] = 0;
    *v21 = v54;
    v21[1] = v55;
    v56 = v71;
    v57 = (char*)v25 - v71;
    v29 = v25 == (__int64*)v71;
    v21[2] = v70;
    v21[3] = 0;
    if (!v29) {
      if (v57 < 0) {
      LABEL_85:
        GameRoutine_65c760(result);
      }
      v58 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v57, 16, 0);
      v59 = (char*)(v58 + v57);
      v21[3] = v58;
      v21[4] = v58;
      v21[5] = v58 + v57;
      memcpy(v58, v56, v57);
      v21[4] = v59;
    }
    v60 = (__int64)(v21 + 6);
  }
  v61 = v69;
  v62 = v70;
  v19[1] = v60;
  if (v61 != 0) {
    v63 = v61;
  }
  else {
    v63 = v62;
  }
  result = ObjectTransparentModuleBase_febc00(v63);
  if (v56 != nullptr) {
    v64 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v64 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v64, v56);
  }
  return result;
}

__int64 ObjectTransparent_f3b380(__int64 result, unsigned __int8* a2,
                                 __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int8* v4;
  char** v7;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int8* v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 i;
  __int64 v20;
  __int64 v21;
  unsigned __int8* v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  char* v26;
  char* v27;
  unsigned __int64 v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  char* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;

  if (a2 == nullptr) {
    return result;
  }
  v3 = *a2;
  v4 = *((unsigned __int8**)a2 + 2);
  v7 = (char**)result;
  v8 = (v3 & 1) == 0;
  v9 = v3 >> 1;
  if (v8) {
    v4 = a2 + 1;
  }
  if (v8) {
    LODWORD(v10) = v9;
  }
  else {
    v10 = *((_QWORD*)a2 + 1);
  }
  if (v4 != nullptr) {
    v11 = 0xCBF29CE484222325LL;
    if ((int)v10 < 8) {
      v14 = 0;
      if ((int)v10 <= 0) {
        goto LABEL_22;
      }
    }
    else {
      v12 = 7;
      do {
        v13 = &v4[v12];
        v12 += 8LL;
        v11 = (0x100000001B3LL *
               ((0x100000001B3LL *
                 ((0x100000001B3LL *
                   ((0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL *
                           ((0x100000001B3LL * v11) ^ *(v13 - 7))) ^
                          *(v13 - 6))) ^
                        *(v13 - 5))) ^
                      *(v13 - 4))) ^
                    *(v13 - 3))) ^
                  *(v13 - 2))) ^
                *(v13 - 1))) ^
              *v13;
      } while (v12 < ((unsigned int)v10 & 0x7FFFFFFF));
      v14 = v10 & 0x7FFFFFF8;
      if ((v10 & 0x7FFFFFF8) >= (int)v10) {
        goto LABEL_22;
      }
    }
    v16 = v14;
    v17 = (unsigned int)v10;
    v18 = v10 & 7;
    for (i = v16; v18 != 0; v11 = (0x100000001B3LL * v11) ^ v20) {
      v20 = v4[i++];
      --v18;
    }
    if ((unsigned __int64)(v16 - v17) <= 0xFFFFFFFFFFFFFFF8LL) {
      v21 = v17 - i;
      v22 = &v4[i + 3];
      do {
        v21 -= 8;
        v23 = (0x100000001B3LL *
               ((0x100000001B3LL *
                 ((0x100000001B3LL *
                   ((0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL * v11) ^ *(v22 - 3))) ^
                        *(v22 - 2))) ^
                      *(v22 - 1))) ^
                    *v22)) ^
                  v22[1])) ^
                v22[2])) ^
              v22[3];
        v24 = v22[4];
        v22 += 8;
        v11 = (0x100000001B3LL * v23) ^ v24;
      } while (v21 != 0);
    }
  LABEL_22:
    if (v11 != 0) {
      v15 = v11;
    }
    else {
      v15 = -1;
    }
    if (a3 != 0) {
      goto LABEL_26;
    }
    goto LABEL_27;
  }
  v15 = 0;
  if (a3 != 0) {
  LABEL_26:
    result = nn_os_LockMutex(a3);
  }
LABEL_27:
  v26 = *v7;
  v25 = v7[1];
  v27 = *v7;
  if (*v7 != v25) {
    v27 = *v7;
    while (*((_QWORD*)v27 + 1) != v15) {
      v27 += 16;
      if (v27 == v25) {
        goto LABEL_35;
      }
    }
  }
  if (v27 == v25) {
  LABEL_35:
    v28 = (unsigned __int64)v7[2];
    if ((unsigned __int64)v25 >= v28) {
      v30 = (char*)(v25 - v26);
      v31 = (v25 - v26) >> 4;
      v32 = v31 + 1;
      if ((unsigned __int64)(v31 + 1) >> 60 != 0) {
        GameRoutine_f3bb20();
      }
      v33 = v28 - (_QWORD)v26;
      v34 = fw_memory_g_heap_manager_ptr;
      if (v33 >> 3 > v32) {
        v32 = v33 >> 3;
      }
      if ((unsigned __int64)v33 >= 0x7FFFFFFFFFFFFFF0LL) {
        v35 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v35 = v32;
      }
      if (v35 != 0) {
        if (v35 >> 60 != 0) {
          GameRoutine_60a210(result);
        }
        v36 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v35, 16, 0);
      }
      else {
        v36 = 0;
      }
      v37 = &v30[v36];
      v38 = v36 + 16 * v35;
      *(_QWORD*)v37 = a2;
      *((_QWORD*)v37 + 1) = v15;
      v39 = (__int64)&v30[v36 + -16 * v31];
      v29 = (__int64)&v30[v36 + 16];
      result = memcpy(v39, v26, v30);
      *v7 = (char*)v39;
      v7[1] = (char*)v29;
      v7[2] = (char*)v38;
      if (v26 != nullptr) {
        v40 = 128;
        if (*(_QWORD*)(*(_QWORD*)v34 + 200LL) == 0) {
          v40 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v34 + v40, v26);
      }
    }
    else {
      *(_QWORD*)v25 = a2;
      *((_QWORD*)v25 + 1) = v15;
      v29 = (__int64)(v25 + 16);
    }
    v7[1] = (char*)v29;
    if (a3 != 0) {
      return nn_os_UnlockMutex(a3);
    }
  }
  else if (a3 != 0) {
    return nn_os_UnlockMutex(a3);
  }
  return result;
}

_QWORD* ObjectTransparent_f3b8e0(__int64** a1, __int64* a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v7;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v29;

  v2 = *a1;
  v3 = a1[1];
  v4 = (char*)v3 - (char*)*a1;
  v5 = 1 - 0x5555555555555555LL * (v4 >> 4);
  if (v5 > 0x555555555555555LL) {
    GameRoutine_f3bb00();
  }
  if (0x5555555555555556LL * (((char*)a1[2] - (char*)v2) >> 4) > v5) {
    v5 = 0x5555555555555556LL * (((char*)a1[2] - (char*)v2) >> 4);
  }
  if (0xAAAAAAAAAAAAAAABLL * (((char*)a1[2] - (char*)v2) >> 4) >=
      0x2AAAAAAAAAAAAAALL) {
    v5 = 0x555555555555555LL;
  }
  if (v5 > 0x555555555555555LL) {
    GameRoutine_60a210(a1);
  }
  v7 = 3 * v5;
  v9 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       48 * v5, 16, 0);
  v11 = *a2;
  v12 = a2[1];
  v13 = (_QWORD*)(v10 + v4);
  v14 = v10;
  v13[4] = 0;
  v13[5] = 0;
  *v13 = v11;
  v13[1] = v12;
  v15 = a2[3];
  v13[2] = a2[2];
  v13[3] = 0;
  v16 = a2[4];
  v17 = v16 - v15;
  if (v16 != v15) {
    v29 = v7;
    if (v17 < 0) {
      GameRoutine_65c760(v10);
    }
    v18 = fw_memory_HeapManager_Allocate(*v9, v16 - v15, 16, 0);
    v19 = v18 + v17;
    v13[3] = v18;
    v13[5] = v18 + v17;
    memcpy(v18, v15, v17);
    v13[4] = v19;
    v7 = v29;
  }
  v20 = v14 + 16 * v7;
  if (v2 != v3) {
    v21 = v2;
    v22 = (_QWORD*)((char*)v13 - v4);
    do {
      v23 = *v21;
      v24 = v21[2];
      v22[1] = v21[1];
      v22[2] = v24;
      *v22 = v23;
      v22[3] = v21[3];
      v22[4] = v21[4];
      v22[5] = v21[5];
      v21[4] = 0;
      v21[5] = 0;
      v21[3] = 0;
      v21 += 6;
      v22 += 6;
    } while (v21 != v3);
    do {
      v25 = v2[3];
      if (v25 != 0) {
        v2[4] = v25;
        if (*(_QWORD*)(*v9 + 200LL) != 0) {
          v26 = 128;
        }
        else {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free(*v9 + v26, v25);
      }
      v2 += 6;
    } while (v2 != v3);
    v2 = *a1;
  }
  *a1 = (_QWORD*)((char*)v13 - v4);
  a1[1] = v13 + 6;
  a1[2] = (__int64*)v20;
  if (v2 != nullptr) {
    v27 = 128;
    if (*(_QWORD*)(*v9 + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*v9 + v27, v2);
  }
  return v13 + 6;
}

__int64

game_graphics_ObjectTransparent_ObjectTransparent_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 8);
  result = GameRoutine_f39c40(v1, *(_BYTE*)(v1 + 316));
  *(_BYTE*)(v1 + 316) = 0;
  return result;
}

__int64 game_graphics_ObjectTransparent_Run_lambda1_Invoke(__int64 result,
                                                           __int64 a2,
                                                           atomic_uint* a3)
{
  int v3;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  float v11;
  __int64** v12;
  _QWORD* v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
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
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  float v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  float v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  float v97;

  v3 = -1431655765 *
       ((*(_QWORD*)(*(_QWORD*)(result + 8) + 8LL) - **(_QWORD**)(result + 8)) >>
        4);
  if (v3 >= 1) {
    v5 = result;
    v6 = GameData_212c7d8[0];
    if (v3 / (int)((((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                      *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                     2) &
                    0xFFFFFFFE) +
                   2) <=
        1) {
      v7 = 1;
    }
    else {
      v7 = v3 / (int)((((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                         *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                        2) &
                       0xFFFFFFFE) +
                      2);
    }
    while (1) {
      LODWORD(v8) = atomic_fetch_add(a3, v7);
      if ((int)v8 < v3) {
        break;
      }
    LABEL_5:
      if (v7 >> 1 <= 1) {
        v7 = 1;
      }
      else {
        v7 >>= 1;
      }
      if ((int)v8 >= v3) {
        return result;
      }
    }
    v9 = v8 + v7;
    v8 = (int)v8;
    if ((int)(v8 + v7) >= v3) {
      v9 = v3;
    }
    v10 = v9;
    while (1) {
      v12 = *(__int64***)(v5 + 16);
      v13 = (_QWORD*)(**(_QWORD**)(v5 + 8) + 48 * v8);
      v14 = v13[1];
      if (v14 == 0) {
        break;
      }
      if (*(_BYTE*)(v14 + 100) == 1) {
        *(_BYTE*)(v14 + 100) = 0;
      }
      v15 = *v12;
      v16 = **v12;
      v17 = (*v12)[1];
      if (v16 == v17) {
        goto LABEL_118;
      }
      v18 = v13[1];
      if (v18 == 0) {
        v34 = v13[3];
        v33 = v13[4];
        if (v33 == v34) {
          goto LABEL_118;
        }
        v35 = 0;
        v36 = (unsigned __int64)(v17 - v16) >> 4;
        while (2) {
          v37 = *v15;
          v38 = v15[1];
          if (*v15 != v38) {
            while (*(_QWORD*)(v37 + 8) != *(_QWORD*)(v34 + 8 * v35)) {
              v37 += 16;
              if (v37 == v38) {
                goto LABEL_45;
              }
            }
          }
          if (v37 != v38) {
            v39 = v13[2];
            if ((*(_BYTE*)(v39 + 49) & 1) != 0) {
              if (*(_BYTE*)(v39 + 48) != 1) {
                goto LABEL_65;
              }
            LABEL_57:
              if ((*(_BYTE*)(v39 + 80) & 1) == 0) {
                v41 = *(_QWORD*)(v39 + 56);
                v42 = *(_QWORD*)(v39 + 64);
                while (v41 != v42) {
                  if (*(_BYTE*)(v41 + 24) == 1) {
                    *(_BYTE*)(v41 + 24) = 0;
                  }
                  v41 += 28;
                }
                *(_BYTE*)(v39 + 80) = 1;
              }
              v43 = *(_QWORD*)(v39 + 56) + 28LL * (int)v35;
              *(_DWORD*)(v43 + 20) = 1;
              *(_BYTE*)(v43 + 24) = 1;
              *(_BYTE*)(v39 + 88) = 1;
            }
            else {
              if (*(_DWORD*)(*(_QWORD*)v6 + 296LL) == 1) {
                goto LABEL_57;
              }
              v40 = *(_QWORD*)(v39 + 32);
              if (v40 != 0 && (*(_BYTE*)(v40 + 164) & 1) != 0) {
                goto LABEL_57;
              }
            }
          LABEL_65:
            LODWORD(v36) = v36 - 1;
            if ((_DWORD)v36 == 0) {
              goto LABEL_118;
            }
            v34 = v13[3];
            v33 = v13[4];
          }
        LABEL_45:
          if (++v35 >= (unsigned __int64)((v33 - v34) >> 3)) {
            goto LABEL_118;
          }
          continue;
        }
      }
      v19 = v13[3];
      v20 = v13[4] - v19;
      if (v20 != 0) {
        v21 = v20 >> 3;
        v22 = 0;
      LABEL_29:
        v23 = **v12;
        while (*(_QWORD*)(v23 + 8) != *(_QWORD*)(v19 + 8 * v22)) {
          v23 += 16;
          if (v23 == v17) {
          LABEL_28:
            if (++v22 == v21) {
              goto LABEL_118;
            }
            goto LABEL_29;
          }
        }
        if (v23 == v17) {
          goto LABEL_28;
        }
        if ((*(_BYTE*)(v18 + 49) & 1) != 0) {
          if (*(_BYTE*)(v18 + 48) == 1) {
            goto LABEL_100;
          }
        }
        else if (*(_DWORD*)(*(_QWORD*)v6 + 296LL) == 1 ||
                 (v53 = *(_QWORD*)(v18 + 32)) != 0 &&
                     (*(_BYTE*)(v53 + 164) & 1) != 0) {
        LABEL_100:
          v54 = 0;
        LABEL_103:
          v55 = **v12;
          while (*(_QWORD*)(v55 + 8) != *(_QWORD*)(v19 + 8 * v54)) {
            v55 += 16;
            if (v55 == v17) {
            LABEL_102:
              if (++v54 == v21) {
                goto LABEL_118;
              }
              goto LABEL_103;
            }
          }
          if (v55 == v17) {
            goto LABEL_102;
          }
          *(_DWORD*)(v18 + 96) = 1;
          *(_BYTE*)(v18 + 100) = 1;
        }
      }
    LABEL_118:
      v59 = v12[2];
      v60 = *v59;
      v61 = v59[1];
      if (*v59 != v61) {
        v62 = v13[1];
        if (v62 != 0) {
          v63 = v13[3];
          v64 = v13[4] - v63;
          if (v64 != 0) {
            v65 = v64 >> 3;
            v66 = 0;
          LABEL_124:
            v67 = v60;
            while (*(_QWORD*)(v67 + 8) != *(_QWORD*)(v63 + 8 * v66)) {
              v67 += 16;
              if (v67 == v61) {
              LABEL_123:
                if (++v66 == v65) {
                  goto LABEL_18;
                }
                goto LABEL_124;
              }
            }
            if (v67 == v61) {
              goto LABEL_123;
            }
            v77 = 0;
          LABEL_148:
            v78 = v60;
            while (*(_QWORD*)(v78 + 8) != *(_QWORD*)(v63 + 8 * v77)) {
              v78 += 16;
              if (v78 == v61) {
              LABEL_147:
                if (++v77 == v65) {
                  goto LABEL_18;
                }
                goto LABEL_148;
              }
            }
            if (v78 == v61) {
              goto LABEL_147;
            }
            if (*(_QWORD*)v6 != 0) {
              v11 = *(float*)(*(_QWORD*)v6 + 312LL);
            }
            else {
              v11 = 0.0;
            }
            if (*(float*)(v62 + 56) >= v11) {
              v11 = *(float*)(v62 + 56);
            }
            *(float*)(v62 + 56) = v11;
          }
        }
        else {
          v69 = v13[3];
          v68 = v13[4];
          if (v68 != v69) {
            v70 = 0;
            v71 = (unsigned __int64)(v61 - v60) >> 4;
            do {
              v72 = *v59;
              v73 = v59[1];
              if (*v59 != v73) {
                while (*(_QWORD*)(v72 + 8) != *(_QWORD*)(v69 + 8 * v70)) {
                  v72 += 16;
                  if (v72 == v73) {
                    goto LABEL_130;
                  }
                }
              }
              if (v72 != v73) {
                v74 = v13[2];
                if (v74 != 0) {
                  if (*(_QWORD*)v6 != 0) {
                    v75 = *(float*)(*(_QWORD*)v6 + 312LL);
                  }
                  else {
                    v75 = 0.0;
                  }
                  v76 = *(_QWORD*)(v74 + 56);
                  if (*(float*)(v76 + 28LL * (int)v70) >= v75) {
                    v75 = *(float*)(v76 + 28LL * (int)v70);
                  }
                  *(float*)(v76 + 28LL * (int)v70) = v75;
                  *(_BYTE*)(v74 + 88) = 1;
                }
                LODWORD(v71) = v71 - 1;
                if ((_DWORD)v71 == 0) {
                  break;
                }
                v69 = v13[3];
                v68 = v13[4];
              }
            LABEL_130:
              ++v70;
            } while (v70 < (v68 - v69) >> 3);
          }
        }
      }
    LABEL_18:
      result = GameRoutine_f3ca00(v13[1], v12[3]);
    LABEL_19:
      if (++v8 >= v10) {
        goto LABEL_5;
      }
    }
    *(_BYTE*)(v13[2] + 80LL) = 0;
    v24 = *v12;
    v25 = **v12;
    v26 = (*v12)[1];
    if (v25 == v26) {
      goto LABEL_154;
    }
    v27 = v13[1];
    v28 = v13[3];
    v29 = v13[4];
    if (v27 != 0) {
      if (v29 != v28) {
        v30 = (v29 - v28) >> 3;
        v31 = 0;
      LABEL_39:
        v32 = **v12;
        while (*(_QWORD*)(v32 + 8) != *(_QWORD*)(v28 + 8 * v31)) {
          v32 += 16;
          if (v32 == v26) {
          LABEL_38:
            if (++v31 == v30) {
              goto LABEL_154;
            }
            goto LABEL_39;
          }
        }
        if (v32 == v26) {
          goto LABEL_38;
        }
        if ((*(_BYTE*)(v27 + 49) & 1) != 0) {
          if (*(_BYTE*)(v27 + 48) != 1) {
            goto LABEL_154;
          }
        }
        else if (*(_DWORD*)(*(_QWORD*)v6 + 296LL) != 1) {
          v56 = *(_QWORD*)(v27 + 32);
          if (v56 == 0 || (*(_BYTE*)(v56 + 164) & 1) == 0) {
            goto LABEL_154;
          }
        }
        v57 = 0;
      LABEL_113:
        v58 = **v12;
        while (*(_QWORD*)(v58 + 8) != *(_QWORD*)(v28 + 8 * v57)) {
          v58 += 16;
          if (v58 == v26) {
          LABEL_112:
            if (++v57 == v30) {
              goto LABEL_154;
            }
            goto LABEL_113;
          }
        }
        if (v58 == v26) {
          goto LABEL_112;
        }
        *(_DWORD*)(v27 + 96) = 1;
        *(_BYTE*)(v27 + 100) = 1;
      }
    LABEL_154:
      v79 = v12[2];
      v80 = *v79;
      v81 = v79[1];
      if (*v79 != v81) {
        v82 = v13[1];
        v83 = v13[3];
        v84 = v13[4];
        if (v82 != 0) {
          if (v84 != v83) {
            v85 = (v84 - v83) >> 3;
            v86 = 0;
          LABEL_160:
            v87 = v80;
            while (*(_QWORD*)(v87 + 8) != *(_QWORD*)(v83 + 8 * v86)) {
              v87 += 16;
              if (v87 == v81) {
              LABEL_159:
                if (++v86 == v85) {
                  goto LABEL_194;
                }
                goto LABEL_160;
              }
            }
            if (v87 == v81) {
              goto LABEL_159;
            }
            v95 = 0;
          LABEL_184:
            v96 = v80;
            while (*(_QWORD*)(v96 + 8) != *(_QWORD*)(v83 + 8 * v95)) {
              v96 += 16;
              if (v96 == v81) {
              LABEL_183:
                if (++v95 == v85) {
                  goto LABEL_194;
                }
                goto LABEL_184;
              }
            }
            if (v96 == v81) {
              goto LABEL_183;
            }
            if (*(_QWORD*)v6 != 0) {
              v97 = *(float*)(*(_QWORD*)v6 + 312LL);
            }
            else {
              v97 = 0.0;
            }
            if (*(float*)(v82 + 56) >= v97) {
              v97 = *(float*)(v82 + 56);
            }
            *(float*)(v82 + 56) = v97;
          }
        }
        else if (v84 != v83) {
          v88 = 0;
          v89 = (unsigned __int64)(v81 - v80) >> 4;
          do {
            v90 = *v79;
            v91 = v79[1];
            if (*v79 != v91) {
              while (*(_QWORD*)(v90 + 8) != *(_QWORD*)(v83 + 8 * v88)) {
                v90 += 16;
                if (v90 == v91) {
                  goto LABEL_166;
                }
              }
            }
            if (v90 != v91) {
              v92 = v13[2];
              if (v92 != 0) {
                if (*(_QWORD*)v6 != 0) {
                  v93 = *(float*)(*(_QWORD*)v6 + 312LL);
                }
                else {
                  v93 = 0.0;
                }
                v94 = *(_QWORD*)(v92 + 56);
                if (*(float*)(v94 + 28LL * (int)v88) >= v93) {
                  v93 = *(float*)(v94 + 28LL * (int)v88);
                }
                *(float*)(v94 + 28LL * (int)v88) = v93;
                *(_BYTE*)(v92 + 88) = 1;
              }
              LODWORD(v89) = v89 - 1;
              if ((_DWORD)v89 == 0) {
                break;
              }
              v83 = v13[3];
              v84 = v13[4];
            }
          LABEL_166:
            ++v88;
          } while (v88 < (v84 - v83) >> 3);
        }
      }
    LABEL_194:
      result = InstanceObjectTransparentModule_fb82a0(v13[2], v12[3]);
      goto LABEL_19;
    }
    if (v29 == v28) {
      goto LABEL_154;
    }
    v44 = 0;
    v45 = (unsigned __int64)(v26 - v25) >> 4;
    while (1) {
      v46 = *v24;
      v47 = v24[1];
      if (*v24 != v47) {
        while (*(_QWORD*)(v46 + 8) != *(_QWORD*)(v28 + 8 * v44)) {
          v46 += 16;
          if (v46 == v47) {
            goto LABEL_69;
          }
        }
      }
      if (v46 == v47) {
        goto LABEL_69;
      }
      v48 = v13[2];
      if ((*(_BYTE*)(v48 + 49) & 1) != 0) {
        if (*(_BYTE*)(v48 + 48) == 1) {
          goto LABEL_81;
        }
      }
      else if (*(_DWORD*)(*(_QWORD*)v6 + 296LL) == 1 ||
               (v49 = *(_QWORD*)(v48 + 32)) != 0 &&
                   (*(_BYTE*)(v49 + 164) & 1) != 0) {
      LABEL_81:
        if ((*(_BYTE*)(v48 + 80) & 1) == 0) {
          v50 = *(_QWORD*)(v48 + 56);
          v51 = *(_QWORD*)(v48 + 64);
          while (v50 != v51) {
            if (*(_BYTE*)(v50 + 24) == 1) {
              *(_BYTE*)(v50 + 24) = 0;
            }
            v50 += 28;
          }
          *(_BYTE*)(v48 + 80) = 1;
        }
        v52 = *(_QWORD*)(v48 + 56) + 28LL * (int)v44;
        *(_DWORD*)(v52 + 20) = 1;
        *(_BYTE*)(v52 + 24) = 1;
        *(_BYTE*)(v48 + 88) = 1;
      }
      LODWORD(v45) = v45 - 1;
      if ((_DWORD)v45 == 0) {
        goto LABEL_154;
      }
      v28 = v13[3];
      v29 = v13[4];
    LABEL_69:
      if (++v44 >= (unsigned __int64)((v29 - v28) >> 3)) {
        goto LABEL_154;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
