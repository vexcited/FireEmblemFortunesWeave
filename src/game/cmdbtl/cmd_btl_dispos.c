#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7576e0(_QWORD, _QWORD);
__int64 GameRoutine_f36bc0(_QWORD, _QWORD);
extern __int64 GameData_21ca310;
__int64 CmdBtlDispos_f35040(__int64 result);
__int64 GameRoutine_f369a0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1ff4360[])();
extern __int64 GameData_22167c8;
extern __int64 GameData_22167d0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_2216858;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_6c1f60(void);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
__int64 CmdBtlDispos_f35d20(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 CmdBtlDispos_f35e20(__int64 a1, signed int a2);
__int64 CmdBtlDispos_f36bc0(__int64 result, _QWORD* a2);
__int64 game_cmdbtl_CmdBtlDispos_Initialize_lambda0_Invoke(__int64 result,
                                                           __int64 a2);
_QWORD* CmdbtlPartyNatives_eba910(_QWORD*, __int64*);
__int64 CmdbtlPartyNatives_eba740(__int64*);
__int64 GameRoutine_932c10(_QWORD, _QWORD);
extern __int64 GameData_21f4cc0;
extern int GameData_22167c0;
unsigned __int64 GameRoutine_f36300(__int64, __int64, int);
void __attribute__((noreturn))
GameRoutine_6c1f60_alt1(_QWORD) __asm__("GameRoutine_6c1f60");
__int64 game_cmdbtl_CmdBtlDispos_CreatePlayer_lambda0_Invoke(__int64 result,
                                                             __int64 a2);
unsigned __int64
game_cmdbtl_CmdBtlDispos_CreateAlly_lambda0_Invoke(unsigned __int64 result,
                                                   __int64 a2);
unsigned __int64
game_cmdbtl_CmdBtlDispos_CreateTemporary_lambda0_Invoke(unsigned __int64 result,
                                                        __int64 a2);
unsigned __int64
game_cmdbtl_CmdBtlDispos_CreateEnemyWave_lambda0_Invoke(unsigned __int64 result,
                                                        __int64 a2);
unsigned __int64
game_cmdbtl_CmdBtlDispos_CreateExpUnit_lambda0_Invoke(unsigned __int64 result,
                                                      __int64 a2);

__int64 CmdBtlDispos_f35040(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  int v19;
  _BYTE v20[4];

  if (*(_BYTE*)(result + 8) != 0) {
    v1 = (_QWORD*)(result + 128);
    v2 = result;
    GameRoutine_f36bc0(result + 120, *(_QWORD*)(result + 128));
    v4 = v1[5];
    v3 = v1[6];
    *v1 = 0;
    v1[1] = 0;
    v5 = v3 - v4;
    *(v1 - 1) = v1;
    if ((int)(v5 >> 3) >= 1) {
      v6 = (v5 >> 3) & 0x7FFFFFFF;
      v7 = GameData_21ca310;
      v8 = v6 - 1;
      while (1) {
        v10 = *(_QWORD**)(*(_QWORD*)(v2 + 168) + 8 * v8);
        if (v10[49] != 0) {
          break;
        }
      LABEL_6:
        v9 = v8-- + 1;
        if (v9 <= 1) {
          goto LABEL_21;
        }
      }
      v11 = v10[53];
      v12 = v10[54];
      v13 = *(_QWORD*)(v7 + 56) + 552960LL;
      if (v12 != 0) {
        *(_QWORD*)(v12 + 424) = v11;
        if (v11 == 0) {
          goto LABEL_14;
        }
      }
      else {
        *(_QWORD*)(*(_QWORD*)(v7 + 56) + 556008LL) = v11;
        if (v11 == 0 || (*(_QWORD*)(v11 + 432) = 0, (v11 = v10[53]) == 0)) {
        LABEL_14:
          v14 = v10[54];
          *(_QWORD*)(v13 + 3040) = v14;
          if (v14 != 0) {
            *(_QWORD*)(v14 + 424) = 0;
          }
          goto LABEL_16;
        }
      }
      *(_QWORD*)(v11 + 432) = v10[54];
    LABEL_16:
      v10[53] = 0;
      v10[54] = 0;
      v15 = *(_QWORD*)(v7 + 56) + 552960LL;
      v16 = (_QWORD*)(*(_QWORD*)(v7 + 56) + 556000LL);
      if (*(unsigned __int8*)(*(_QWORD*)(v7 + 56) + 556016LL) >= 0xAu) {
        v17 = nullptr;
      }
      else {
        v17 = &v16[3 * *(unsigned __int8*)(*(_QWORD*)(v7 + 56) + 556016LL)];
      }
      v10[55] = v17;
      v18 = *(_QWORD*)(v15 + 3040);
      if (v18 != 0) {
        *(_QWORD*)(v18 + 424) = v10;
        v10[54] = v18;
      }
      else {
        *(_QWORD*)(v15 + 3048) = v10;
      }
      *v16 = v10;
      goto LABEL_6;
    }
  LABEL_21:
    v20[0] = 0;
    v19 = 267;
    result = GameRoutine_7576e0(v20, &v19);
    *(_BYTE*)(v2 + 8) = 0;
  }
  return result;
}

__int64 CmdBtlDispos_f35d20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD v10[4];
  _QWORD* v11;
  int v12;
  unsigned int v13;

  *(_DWORD*)(a1 + 12) = a2;
  v12 = 0;
  v13 = 1;
  v10[0] = GameData_1ff4360;
  v10[1] = &v13;
  v10[2] = &v12;
  v10[3] = a1;
  v11 = v10;
  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0(a1);
  }
  v5 = GameData_22167c8;
  v6 = GameData_22167d0;
  if (GameData_22167c8 == GameData_22167d0) {
    v7 = v10;
  LABEL_9:
    v8 = 32;
    goto LABEL_10;
  }
  do {
    if (v11 == nullptr) {
      GameRoutine_60a310(0, a2, a3);
    }
    (*(void (**)(_QWORD*, __int64))(*v11 + 48LL))(v11, v5);
    v5 += 88;
  } while (v5 != v6);
  v7 = v11;
  if (v11 == v10) {
    goto LABEL_9;
  }
  if (v11 != nullptr) {
    v8 = 40;
  LABEL_10:
    (*(void (**)(_QWORD*, __int64, __int64, __int64))(*v7 + v8))(v7, a2, a3,
                                                                 a4);
  }
  return CmdBtlDispos_f35e20(a1, v13);
}

__int64 CmdBtlDispos_f35e20(__int64 a1, signed int a2)
{
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  unsigned __int64 v10;
  char* v11;
  char* v12;
  __int64 v13;
  signed __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  signed __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  unsigned int v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned int v49;
  char v50;
  __int64* v51;
  __int64* v52;
  __int64 v53;

  v3 = a1 + 192;
  *(_QWORD*)(a1 + 192 + 8LL * a2) = 0;
  if ((unsigned int)a2 >= 3) {
    LOBYTE(v4) = 8;
  }
  else {
    v4 = 0x30100u >> (8 * a2);
  }
  v5 = 1 << v4;
  LODWORD(v51) = 1 << v4;
  result = game_UnitPool_GetFirst(&v51);
  if (result != 0) {
    v7 = *(_QWORD*)(result + 432);
    v8 = result;
    if (v7 == 0) {
      v7 = *(_QWORD*)(result + 440);
      if (v7 != 0) {
        v9 = *(unsigned __int8*)(v7 + 16);
        if (v9 <= 8) {
          while (1) {
            v49 = v9 + 1;
            if (((v5 >> v9) & 2) != 0) {
              v7 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                              24LL * (unsigned __int8)(v9 + 1) + 556000);
              if (v7 != 0) {
                break;
              }
            }
            v9 = v49;
            if (v49 == 9) {
              goto LABEL_8;
            }
          }
        }
        else {
        LABEL_8:
          v7 = 0;
        }
      }
    }
    v50 = v4;
    v10 = 0;
    v11 = nullptr;
    v12 = nullptr;
    while (1) {
    LABEL_11:
      v13 = v7;
      if (*(_QWORD*)(v3 + 8LL * a2) != 0) {
        if ((unsigned __int64)v11 < v10) {
          goto LABEL_13;
        }
      }
      else {
        *(_QWORD*)(v3 + 8LL * a2) = v8;
        if ((unsigned __int64)v11 < v10) {
        LABEL_13:
          *(_QWORD*)v11 = v8;
          v11 += 8;
          if (v7 == 0) {
            goto LABEL_39;
          }
          goto LABEL_31;
        }
      }
      v14 = v11 - v12;
      v15 = (v11 - v12) >> 3;
      v16 = v15 + 1;
      if ((unsigned __int64)(v15 + 1) >> 61 != 0) {
        GameRoutine_6c1f60();
      }
      if ((__int64)(v10 - (_QWORD)v12) >> 2 > v16) {
        v16 = (__int64)(v10 - (_QWORD)v12) >> 2;
      }
      if (v10 - (unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
        v17 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v17 = v16;
      }
      if (v17 != 0) {
        if (v17 >> 61 != 0) {
          GameRoutine_60a210(result);
        }
        v18 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v17, 16, 0);
      }
      else {
        v18 = 0;
      }
      v10 = v18 + 8 * v17;
      v19 = v11 - v12;
      v20 = v18 + v14 - 8 * v15;
      *(_QWORD*)(v18 + v14) = v8;
      v11 = (char*)(v18 + v14 + 8);
      result = memcpy(v20, v12, v19);
      if (v12 != nullptr) {
        v21 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v21 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v12);
      }
      v12 = (char*)v20;
      if (v13 == 0) {
      LABEL_39:
        v25 = v11 - v12;
        v52 = nullptr;
        v53 = 0;
        v51 = nullptr;
        if (v11 == v12 ||
            (v26 = v25 >> 3, result = GameRoutine_f369a0(&v51, v25 >> 3),
             v27 = (v25 << 28) - 0x80000000LL,
             *(__int64*)((char*)v51 + ((v27 >> 29) & 0xFFFFFFFFFFFFFFF8LL)) =
                 *(_QWORD*)v12,
             (unsigned __int64)(v25 >> 3) < 2)) {
          LOBYTE(v4) = v50;
        }
        else {
          LOBYTE(v4) = v50;
          v28 = v27 >> 32;
          v29 = v26 - 1;
          v30 = 1;
          v31 = v28 - 1;
          v32 = v28 + 1;
          do {
            if ((v32 & 0x8000000000000000LL) == 0 && v32 < v52 - v51 &&
                (v30 & 0x80000000) == 0 && v26 > v30) {
              v33 = *(_QWORD*)&v12[8 * v30++];
              v51[v32] = v33;
            }
            if ((v31 & 0x8000000000000000LL) == 0 && v31 < v52 - v51 &&
                (v30 & 0x80000000) == 0 && v26 > v30) {
              v34 = *(_QWORD*)&v12[8 * v30++];
              v51[v31] = v34;
            }
            --v29;
            --v31;
            ++v32;
          } while (v29 != 0);
        }
        goto LABEL_55;
      }
    LABEL_31:
      v7 = *(_QWORD*)(v13 + 432);
      v8 = v13;
      if (v7 == 0) {
        v22 = *(_QWORD*)(v13 + 440);
        v8 = v13;
        if (v22 != 0) {
          v23 = *(unsigned __int8*)(v22 + 16);
          v7 = 0;
          v8 = v13;
          if (v23 <= 8) {
            while (1) {
              v24 = v23 + 1;
              if (((v5 >> v23) & 2) != 0) {
                v7 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                24LL * (unsigned __int8)(v23 + 1) + 556000);
                if (v7 != 0) {
                  break;
                }
              }
              ++v23;
              if (v24 == 9) {
                v7 = 0;
                v8 = v13;
                goto LABEL_11;
              }
            }
            v8 = v13;
          }
        }
      }
    }
  }
  v12 = nullptr;
  v52 = nullptr;
  v53 = 0;
  v51 = nullptr;
LABEL_55:
  v35 = v51;
  v36 = v52;
  if (v51 == v52) {
    goto LABEL_67;
  }
  do {
    v37 = *v35;
    v38 = *(_QWORD*)(*v35 + 424);
    v39 = *(_QWORD*)(*v35 + 432);
    v40 = (_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                    24LL * (unsigned __int8)v4 + 556000);
    if (v39 != 0) {
      *(_QWORD*)(v39 + 424) = v38;
      if (v38 != 0) {
        goto LABEL_57;
      }
    }
    else {
      *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                 24LL * (unsigned __int8)v4 + 556008) = v38;
      if (v38 != 0) {
        *(_QWORD*)(v38 + 432) = 0;
        v38 = *(_QWORD*)(v37 + 424);
        if (v38 != 0) {
        LABEL_57:
          *(_QWORD*)(v38 + 432) = *(_QWORD*)(v37 + 432);
          goto LABEL_58;
        }
      }
    }
    v41 = *(_QWORD*)(v37 + 432);
    *v40 = v41;
    if (v41 != 0) {
      *(_QWORD*)(v41 + 424) = 0;
    }
  LABEL_58:
    ++v35;
    *(_QWORD*)(v37 + 424) = 0;
    *(_QWORD*)(v37 + 432) = 0;
  } while (v35 != v36);
  v35 = v51;
  v36 = v52;
LABEL_67:
  if (v35 != v36) {
    do {
      v42 = *v35;
      v43 = *(_QWORD*)(GameData_21ca310 + 56) + 556000LL;
      v44 = v43 + 24LL * (unsigned __int8)v4;
      v45 = v43 + 24LL * *(unsigned __int8*)(v44 + 16);
      if (*(unsigned __int8*)(v44 + 16) >= 0xAu) {
        v45 = 0;
      }
      *(_QWORD*)(v42 + 440) = v45;
      v46 = *(_QWORD*)(v44 + 8);
      if (v46 != 0) {
        *(_QWORD*)(v46 + 432) = v42;
        *(_QWORD*)(v42 + 424) = v46;
      }
      else {
        *(_QWORD*)v44 = v42;
      }
      ++v35;
      *(_QWORD*)(v44 + 8) = v42;
    } while (v35 != v36);
    v35 = v51;
  }
  if (v35 != nullptr) {
    v52 = v35;
    v47 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v47 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v47, v35);
  }
  if (v12 != nullptr) {
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, v12);
  }
  return result;
}

__int64 CmdBtlDispos_f36bc0(__int64 result, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if (a2 != nullptr) {
    v3 = result;
    CmdBtlDispos_f36bc0(result, *a2);
    CmdBtlDispos_f36bc0(v3, a2[1]);
    v4 = a2[6];
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, a2);
  }
  return result;
}

__int64 game_cmdbtl_CmdBtlDispos_Initialize_lambda0_Invoke(__int64 result,
                                                           __int64 a2)
{
  __int64 v2;
  int v3;

  v2 = *(_QWORD*)(result + 8);
  v3 = *(_DWORD*)(a2 + 68);
  if (v3 <= *(_DWORD*)(v2 + 16)) {
    v3 = *(_DWORD*)(v2 + 16);
  }
  *(_DWORD*)(v2 + 16) = v3;
  return result;
}

__int64 game_cmdbtl_CmdBtlDispos_CreatePlayer_lambda0_Invoke(__int64 result,
                                                             __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _BYTE* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _DWORD* v8;
  __int64 v9;
  __int64 v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64* v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;

  if (*(_DWORD*)(a2 + 64) == **(_DWORD**)(result + 8)) {
    v2 = *(_QWORD*)a2;
    if (*(_QWORD*)a2 != 0) {
      v3 = *(_QWORD*)(result + 32);
      v4 = *(_BYTE**)(v2 + 40);
      if (v4 == nullptr || *v4 == 0) {
        goto LABEL_11;
      }
      v5 = *(__int64**)(result + 16);
      v6 = *v5;
      v7 = v5[1];
      if (v6 != v7) {
        while (*(_QWORD*)v6 == 0 ||
               *(_QWORD*)(*(_QWORD*)(v2 + 24) + 1672LL) !=
                   *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v6 + 24LL) + 1672LL)) {
          v6 += 8;
          if (v6 == v7) {
            goto LABEL_11;
          }
        }
      }
      if (v6 == v7) {
      LABEL_11:
        if ((*(_BYTE*)(a2 + 76) & 1) != 0) {
          if ((GameData_2216858 & 1) == 0) {
            GameRoutine_8123d0(result);
          }
          v8 = *(_DWORD**)(result + 24);
          if (*v8 >= GameData_22167c0) {
            v13 = *(_QWORD*)(v3 + 240);
            if (v13 >= *(_QWORD*)(v3 + 248)) {
              result = CmdbtlPartyNatives_eba740((__int64*)(v3 + 232));
              *(_QWORD*)(v3 + 240) = result;
            }
            else {
              result = (__int64)CmdbtlPartyNatives_eba910(*(_QWORD**)(v3 + 240),
                                                          (__int64*)a2);
              *(_QWORD*)(v3 + 240) = v13 + 88;
            }
            return result;
          }
          ++*v8;
        }
        if (**(int**)(result + 40) <= 5) {
          v9 = result;
          result = GameRoutine_f36300(v3, a2, -1);
          if (result != 0) {
            v11 = result;
            ++**(_DWORD**)(v9 + 40);
            result = GameRoutine_932c10(*(_QWORD*)(v9 + 16), a2);
            if ((*(_BYTE*)(a2 + 76) & 2) != 0) {
              v14 = *(__int64**)(v9 + 48);
              v16 = (__int64*)v14[1];
              v15 = v14[2];
              if ((unsigned __int64)v16 >= v15) {
                v18 = *v14;
                v19 = (__int64)v16 - *v14;
                v20 = (v19 >> 3) + 1;
                if (v20 >> 61 != 0) {
                  GameRoutine_6c1f60_alt1(result);
                }
                v21 = v15 - v18;
                v22 = fw_memory_g_heap_manager_ptr;
                if (v21 >> 2 > v20) {
                  v20 = v21 >> 2;
                }
                if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v23 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v23 = v20;
                }
                if (v23 != 0) {
                  if (v23 >> 61 != 0) {
                    GameRoutine_60a210(result);
                  }
                  v24 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v23, 16, 0);
                }
                else {
                  v24 = 0;
                }
                v25 = v24 + 8 * v23;
                v26 = v24 + v19 - 8 * (v19 >> 3);
                *(_QWORD*)(v24 + v19) = v11;
                v17 = v24 + v19 + 8;
                result = memcpy(v26, v18, v19);
                *v14 = v26;
                v14[1] = v17;
                v14[2] = v25;
                if (v18 != 0) {
                  v27 = 128;
                  if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) == 0) {
                    v27 = 56;
                  }
                  result =
                      nn_mem_StandardAllocator_Free(*(_QWORD*)v22 + v27, v18);
                }
              }
              else {
                *v16 = v11;
                v17 = (__int64)(v16 + 1);
              }
              v14[1] = v17;
            }
            else if ((*(_BYTE*)(GameData_21f4cc0 + 12) & 1) == 0) {
              v12 = *(__int64**)(v9 + 56);
              if (*v12 == 0) {
                *v12 = v11;
              }
            }
            v28 = *(unsigned __int8*)(v11 + 498);
            if ((*(_BYTE*)(v3 + 228) & 1) != 0 && *(_DWORD*)(v3 + 224) < v28) {
              v28 = *(_DWORD*)(v3 + 224);
            }
            *(_DWORD*)(v3 + 224) = v28;
            *(_BYTE*)(v3 + 228) = 1;
          }
        }
      }
    }
  }
  return result;
}

unsigned __int64

game_cmdbtl_CmdBtlDispos_CreateAlly_lambda0_Invoke(unsigned __int64 result,
                                                   __int64 a2)
{
  if (*(_DWORD*)(a2 + 64) == 2) {
    return GameRoutine_f36300(*(_QWORD*)(result + 8), a2, -1);
  }
  return result;
}

unsigned __int64

game_cmdbtl_CmdBtlDispos_CreateTemporary_lambda0_Invoke(unsigned __int64 result,
                                                        __int64 a2)
{
  if (*(_DWORD*)(a2 + 64) == 3) {
    return GameRoutine_f36300(*(_QWORD*)(result + 8), a2, -1);
  }
  return result;
}

unsigned __int64

game_cmdbtl_CmdBtlDispos_CreateEnemyWave_lambda0_Invoke(unsigned __int64 result,
                                                        __int64 a2)
{
  unsigned __int64 v2;

  if (*(_DWORD*)(a2 + 64) == **(_DWORD**)(result + 8) &&
      **(int**)(result + 16) <= 5) {
    v2 = result;
    result = GameRoutine_f36300(*(_QWORD*)(result + 24), a2,
                                *(_DWORD*)(*(_QWORD*)(result + 24) + 12LL));
    if (result != 0) {
      ++**(_DWORD**)(v2 + 16);
    }
  }
  return result;
}

unsigned __int64

game_cmdbtl_CmdBtlDispos_CreateExpUnit_lambda0_Invoke(unsigned __int64 result,
                                                      __int64 a2)
{
  if (*(_DWORD*)(a2 + 64) == 1) {
    return GameRoutine_f36300(*(_QWORD*)(result + 8), a2, -1);
  }
  return result;
}

#pragma GCC visibility pop
