#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fd7dc8[])();
extern __int64 (*game_zview_CharacterManager_vtable[])();
extern __int64 GameData_21f3cb0;
extern __int64 GameData_220b6f0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_220f814;
__int64 CharacterManager_Destructor(_QWORD* a1);
extern __int64 GameData_21323e8[4];
float GameRoutine_ceb570(__int64, float result);
void game_zview_CharacterManager_PersistentImpl_lambda0_Invoke(__int64 a1,
                                                               float a2,
                                                               __int64 a3,
                                                               atomic_uint* a4);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_zview_cf29e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern _DWORD* GameData_212d168;
extern __int64 GameData_21d96b8;
extern __int64 fw_memory_g_heap_manager;
void GameRoutine_ceb260(__int64, char);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_cefa90(void);
void CharacterManager_cf02a0(_QWORD* a1);

__int64 CharacterManager_Destructor(_QWORD* a1)
{
  __int64 v2;
  float v3;
  __int64 v4;
  __int64 i;
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
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 result;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;

  *a1 = game_zview_CharacterManager_vtable;
  v2 = GameData_21f3cb0;
  if (GameData_21f3cb0 != 0) {
    v3 = *(float*)(GameData_21f3cb0 + 1012);
    *(_DWORD*)(GameData_21f3cb0 + 1016) = 0;
    *(float*)(v2 + 1008) = v3 + 0.0;
  }
  v4 = a1[1];
  for (i = a1[2]; i != v4; i -= 16) {
    v6 = *(_QWORD*)(i - 8);
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  a1[2] = v4;
  v7 = a1[29];
  v8 = fw_memory_g_heap_manager_ptr;
  if (v7 != 0) {
    v9 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[30] = v7;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(v9 + v10, v7);
  }
  v11 = a1[20];
  if (v11 != 0) {
    v12 = *(_QWORD*)v8;
    a1[21] = v11;
    v13 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(v12 + v13, v11);
  }
  v14 = a1[17];
  if (v14 != 0) {
    v15 = *(_QWORD*)v8;
    a1[18] = v14;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(v15 + v16, v14);
  }
  v17 = a1[14];
  if (v17 != 0) {
    v18 = *(_QWORD*)v8;
    a1[15] = v17;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(v18 + v19, v17);
  }
  v20 = a1[11];
  if (v20 != 0) {
    v21 = *(_QWORD*)v8;
    a1[12] = v20;
    v22 = 128;
    if (*(_QWORD*)(v21 + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(v21 + v22, v20);
  }
  v23 = (__int64*)a1[9];
  a1[9] = 0;
  if (v23 != nullptr) {
    v24 = v23[3];
    if (v24 != 0) {
      v25 = *(_QWORD*)v8;
      v23[4] = v24;
      v26 = 128;
      if (*(_QWORD*)(v25 + 200) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free(v25 + v26, v24);
    }
    v27 = *v23;
    if (*v23 != 0) {
      v28 = *(_QWORD*)v8;
      v23[1] = v27;
      v29 = 128;
      if (*(_QWORD*)(v28 + 200) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free(v28 + v29, v27);
    }
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v30, v23);
  }
  result = a1[8];
  a1[8] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v32 = a1[4];
  if (v32 != 0) {
    v33 = a1[5];
    if (v32 == v33) {
      goto LABEL_51;
    }
    do {
      v34 = *(_QWORD*)(v33 - 8);
      if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
        result = std___1___shared_weak_count___release_weak(v34);
      }
      v33 -= 16;
    } while (v33 != v32);
    v35 = a1[4];
    a1[5] = v32;
    v32 = v35;
    if (v35 != 0) {
    LABEL_51:
      v36 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v36 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v36, v32);
    }
  }
  v37 = a1[1];
  if (v37 != 0) {
    v38 = a1[2];
    if (v37 == v38) {
      goto LABEL_62;
    }
    do {
      v39 = *(_QWORD*)(v38 - 8);
      if (v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
        result = std___1___shared_weak_count___release_weak(v39);
      }
      v38 -= 16;
    } while (v38 != v37);
    v40 = a1[1];
    a1[2] = v37;
    v37 = v40;
    if (v40 != 0) {
    LABEL_62:
      v41 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v41 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v41, v37);
    }
  }
  *a1 = GameData_1fd7dc8;
  if ((_QWORD*)GameData_220b6f0 == a1) {
    GameData_220b6f0 = 0;
    GameData_220f814 = 0;
  }
  return result;
}

void CharacterManager_cf02a0(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  int v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  char* v13;
  char* v14;
  unsigned __int64 v15;
  __int64 v16;
  char* v17;
  unsigned __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;
  __int64 v34;
  int v35;
  int v36;
  bool v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  int v42;

  v2 = a1[17];
  v1 = a1[18];
  v3 = a1;
  if (v2 != v1) {
    while (*GameData_212d168 != 1) {
      v4 = *(_QWORD*)(*(_QWORD*)v2 + 8LL);
      if ((*(_BYTE*)(v4 + 152) & 1) == 0 || (*(_BYTE*)(v4 + 145) & 1) != 0) {
        break;
      }
      v2 += 8;
      if (v2 == v1) {
        goto LABEL_20;
      }
    }
  }
  v5 = v2 + 8;
  if (v2 != v1 && v5 != v1) {
    v7 = *GameData_212d168;
    do {
      if (v7 != 1) {
        v8 = *(_QWORD*)(*(_QWORD*)v5 + 8LL);
        if ((*(_BYTE*)(v8 + 152) & 1) != 0 && (*(_BYTE*)(v8 + 145) & 1) == 0) {
          *(_QWORD*)v2 = *(_QWORD*)v5;
          v2 += 8;
        }
      }
      v5 += 8;
    } while (v5 != v1);
    v1 = a1[18];
  }
  if (v2 != v1) {
    a1[18] = v2;
  }
LABEL_20:
  if ((*(_BYTE*)(GameData_21d96b8 + 48) & 8) != 0) {
    v38 = a1[1];
    v39 = a1[2];
    while (v38 != v39) {
      a1 = *(_QWORD**)v38;
      v40 = *(_QWORD*)(*(_QWORD*)v38 + 8LL);
      v41 = *(unsigned __int8*)(v40 + 44);
      v42 = *(_DWORD*)(v40 + 40);
      if (v41 == 1 && v42 == 3) {
        GameRoutine_ceb260((__int64)a1, 1);
      }
      v38 += 16;
    }
  }
  v9 = (__int64*)v3[14];
  v10 = (__int64*)v3[1];
  v11 = (__int64*)v3[2];
  v3[15] = v9;
  if (v10 != v11) {
    while (1) {
      v12 = *v10;
      if (*(_BYTE*)(*v10 + 456) == 1) {
        v14 = (char*)v3[17];
        v13 = (char*)v3[18];
        if (v14 != v13) {
          v15 = v13 - v14 - 8;
          if ((~(_BYTE)v15 & 0x18) == 0) {
          LABEL_32:
            if (v15 >= 0x18) {
              v14 += 16;
              while (1) {
                if (*((_QWORD*)v14 - 2) == v12) {
                  if (v14 - 16 != v13) {
                    goto LABEL_25;
                  }
                  goto LABEL_44;
                }
                if (*((_QWORD*)v14 - 1) == v12) {
                  v14 -= 8;
                  goto LABEL_43;
                }
                if (*(_QWORD*)v14 == v12) {
                  goto LABEL_43;
                }
                if (*((_QWORD*)v14 + 1) == v12) {
                  break;
                }
                v17 = v14 + 16;
                v14 += 32;
                if (v17 == v13) {
                  goto LABEL_44;
                }
              }
              if (v14 + 8 != v13) {
                goto LABEL_25;
              }
            }
          LABEL_44:
            v18 = v3[16];
            if ((unsigned __int64)v9 < v18) {
              *v9++ = v12;
            }
            else {
              v19 = v3[14];
              v20 = (char*)v9 - v19;
              v21 = ((__int64)v9 - v19) >> 3;
              v22 = v21 + 1;
              if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
                GameRoutine_cefa90();
              }
              v23 = v18 - v19;
              if (v23 >> 2 > v22) {
                v22 = v23 >> 2;
              }
              if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL) {
                v24 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v24 = v22;
              }
              if (v24 != 0) {
                if (v24 >> 61 != 0) {
                  GameRoutine_60a210(a1);
                }
                v25 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                     8 * v24, 16, 0);
              }
              else {
                v25 = 0;
              }
              v26 = v25 + 8 * v24;
              v27 = (char*)v9 - v19;
              v28 = (__int64)&v20[v25 + -8 * v21];
              *(_QWORD*)&v20[v25] = v12;
              v9 = (__int64*)&v20[v25 + 8];
              a1 = (_QWORD*)memcpy(v28, v19, v27);
              v3[14] = v28;
              v3[15] = v9;
              v3[16] = v26;
              if (v19 != 0) {
                v29 = 128;
                if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                  v29 = 56;
                }
                a1 = (_QWORD*)nn_mem_StandardAllocator_Free(
                    fw_memory_g_heap_manager + v29, v19);
              }
            }
            v3[15] = v9;
            goto LABEL_25;
          }
          v16 = ((unsigned __int8)((unsigned int)v15 >> 3) + 1) & 3;
          while (*(_QWORD*)v14 != v12) {
            v14 += 8;
            if (--v16 == 0) {
              goto LABEL_32;
            }
          }
        }
      LABEL_43:
        if (v14 == v13) {
          goto LABEL_44;
        }
      }
    LABEL_25:
      v10 += 2;
      if (v10 == v11) {
        v30 = (__int64*)v3[14];
        if (v30 != v9) {
          game_zview_cf29e0(v3[14], v9, (2 * __clz(v9 - v30)) ^ 0x7E, 1);
          v30 = (__int64*)v3[14];
          v9 = (__int64*)v3[15];
        }
        while (v30 != v9) {
          v31 = *v30++;
          GameRoutine_ceb260(v31, 1);
        }
        break;
      }
    }
  }
  v32 = (__int64*)v3[1];
  v33 = (__int64*)v3[2];
  while (v32 != v33) {
    v34 = *v32;
    v32 += 2;
    GameRoutine_ceb260(v34, 0);
  }
  if (*((int*)v3 + 46) > 0 && v3[15] != v3[14]) {
    v35 = 1;
  LABEL_71:
    *((_DWORD*)v3 + 47) = v35;
    goto LABEL_72;
  }
  v36 = *((_DWORD*)v3 + 47);
  v37 = __OFSUB__(v36, 1);
  v35 = v36 - 1;
  if (v35 < 0 == v37) {
    goto LABEL_71;
  }
LABEL_72:
  *((_DWORD*)v3 + 46) = 0;
}

void game_zview_CharacterManager_PersistentImpl_lambda0_Invoke(__int64 a1,
                                                               float a2,
                                                               __int64 a3,
                                                               atomic_uint* a4)
{
  int v4;
  unsigned int v7;
  signed int add;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v4 = *(_DWORD*)(a1 + 16);
  if (v4 >= 1) {
    if (v4 / (int)((((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                      *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                     2) &
                    0xFFFFFFFE) +
                   2) <=
        1) {
      v7 = 1;
    }
    else {
      v7 = v4 / (int)((((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                         *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                        2) &
                       0xFFFFFFFE) +
                      2);
    }
    do {
      add = atomic_fetch_add(a4, v7);
      if (add < v4) {
        v9 = add + v7;
        v10 = add;
        v11 = 16LL * add;
        if ((int)(add + v7) >= v4) {
          v9 = v4;
        }
        v12 = v9;
        do {
          a2 = GameRoutine_ceb570(*(_QWORD*)(*(_QWORD*)(a1 + 8) + v11), a2);
          ++v10;
          v11 += 16;
        } while (v10 < v12);
        add = v10;
      }
      if (v7 >> 1 <= 1) {
        v7 = 1;
      }
      else {
        v7 >>= 1;
      }
    } while (add < v4);
  }
}

#pragma GCC visibility pop
