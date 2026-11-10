#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60dfc0(_QWORD);
__int64 GameRoutine_60e360(_QWORD);
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1a94a43;
extern __int64 (*GameData_1f8e180[])();
extern __int64 (*GameData_1f8e1b0[])();
extern __int64 (*GameData_1f8e200[])();
extern __int64 GameData_21a5458;
extern __int64 GameData_21a5460;
extern __int64 GameData_21a5470;
extern __int64 GameData_21a5480;
extern int GameData_21a5488;
__int64 GroundAttributeFile_Destructor(_QWORD* a1);
__int64 GroundAttributeFile_60b080(int a1);
__int64 GroundAttributeFile_60b220(__int64 a1);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
extern __int64* GameData_212c048;
extern __int64 GameData_21a5468;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_21a5478;
void __attribute__((noreturn)) GameRoutine_60a210();
void GroundAttributeFile_Unknown4();

__int64 GroundAttributeFile_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  __int64 result;

  *a1 = GameData_1f8e180;
  a1[1] = GameData_1f8e1b0;
  v2 = a1 + 1;
  GameRoutine_60e360(a1 + 1);
  result = GameRoutine_60dfc0(v2);
  *a1 = GameData_1f8e200;
  if ((_QWORD*)GameData_21a5480 == a1) {
    GameData_21a5480 = 0;
    GameData_21a5488 = 0;
  }
  return result;
}

__int64 GroundAttributeFile_60b080(int a1)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64** v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;

  if (GameData_21a5460 != 0 && GameData_21a5470 != 0) {
    v2 = a1 | 0xFFu;
    v3 = GameData_21a5460 - 1;
    if ((GameData_21a5460 & (GameData_21a5460 - 1)) != 0) {
      v4 = a1 | 0xFFu;
      if (GameData_21a5460 <= v2) {
        v4 = (unsigned int)v2 % (unsigned int)GameData_21a5460;
      }
    }
    else {
      v4 = ((_DWORD)GameData_21a5460 - 1) & (unsigned int)v2;
    }
    v5 = *(__int64***)(GameData_21a5458 + 8 * v4);
    if (v5 != nullptr) {
      v6 = *v5;
      if (v6 != nullptr) {
        if ((GameData_21a5460 & v3) == 0) {
          while (1) {
            v8 = v6[1];
            if (v8 == v2) {
              if (*((_DWORD*)v6 + 4) == (_DWORD)v2) {
                return v6[3];
              }
            }
            else if ((v8 & v3) != v4) {
              goto LABEL_24;
            }
            v6 = (__int64*)*v6;
            if (v6 == nullptr) {
              goto LABEL_24;
            }
          }
        }
        do {
          v7 = v6[1];
          if (v7 == v2) {
            if (*((_DWORD*)v6 + 4) == (_DWORD)v2) {
              return v6[3];
            }
          }
          else {
            if (v7 >= GameData_21a5460) {
              v7 %= (unsigned __int64)GameData_21a5460;
            }
            if (v7 != v4) {
              break;
            }
          }
          v6 = (__int64*)*v6;
        } while (v6 != nullptr);
      }
    }
  }

LABEL_24:
  v9 = game_HashString(&GameData_1a94a43);
  v10 = *(_QWORD*)(GameData_21a5480 + 96);
  if ((v10 & (v10 - 1)) != 0) {
    v11 = v9;
    if (v9 >= v10) {
      v11 = v9 % v10;
    }
    v6 = *(__int64**)(*(_QWORD*)(GameData_21a5480 + 88) + 8 * v11);
    do {
      do {
        v6 = (__int64*)*v6;
      } while (v6[1] != v9);
    } while (v6[2] != v9);
  }
  else {
    v6 = *(__int64**)(*(_QWORD*)(GameData_21a5480 + 88) + 8 * ((v10 - 1) & v9));
    do {
      do {
        v6 = (__int64*)*v6;
      } while (v6[1] != v9);
    } while (v6[2] != v9);
  }
  return v6[3];
}

__int64 GroundAttributeFile_60b220(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int8* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;

  v1 = game_HashString(a1);
  if (v1 == 0) {
    goto LABEL_27;
  }
  v2 = *(_QWORD*)(GameData_21a5480 + 96);
  if (v2 == 0 || *(_QWORD*)(GameData_21a5480 + 112) == 0) {
    goto LABEL_27;
  }
  v4 = v2 - 1;
  if ((v2 & (v2 - 1)) != 0) {
    v5 = v1;
    if (v1 >= v2) {
      v5 = v1 % v2;
    }
  }
  else {
    v5 = v4 & v1;
  }
  v6 = *(_QWORD**)(*(_QWORD*)(GameData_21a5480 + 88) + 8 * v5);
  if (v6 == nullptr || (v7 = (_QWORD*)*v6) == nullptr) {
  LABEL_27:
    v11 = game_HashString(&GameData_1a94a43);
    v12 = *(_QWORD*)(GameData_21a5480 + 96);
    if ((v12 & (v12 - 1)) != 0) {
      v13 = v11;
      if (v11 >= v12) {
        v13 = v11 % v12;
      }
      v14 = *(_QWORD**)(*(_QWORD*)(GameData_21a5480 + 88) + 8 * v13);
      do {
        do {
          v14 = (_QWORD*)*v14;
        } while (v14[1] != v11);
      } while (v14[2] != v11);
    }
    else {
      v14 = *(_QWORD**)(*(_QWORD*)(GameData_21a5480 + 88) +
                        8 * ((v12 - 1) & v11));
      do {
        do {
          v14 = (_QWORD*)*v14;
        } while (v14[1] != v11);
      } while (v14[2] != v11);
    }
    v10 = (unsigned __int8*)v14[3];
    return (v10[32] << 24) | (v10[33] << 16) | (v10[34] << 8) | 0xFFu;
  }
  if ((v2 & v4) == 0) {
    while (1) {
      v9 = v7[1];
      if (v9 == v1) {
        if (v7[2] == v1) {
          goto LABEL_26;
        }
      }
      else if ((v9 & v4) != v5) {
        goto LABEL_27;
      }
      v7 = (_QWORD*)*v7;
      if (v7 == nullptr) {
        goto LABEL_27;
      }
    }
  }
  while (1) {
    v8 = v7[1];
    if (v8 == v1) {
      break;
    }
    if (v8 >= v2) {
      v8 %= v2;
    }
    if (v8 != v5) {
      goto LABEL_27;
    }
  LABEL_15:
    v7 = (_QWORD*)*v7;
    if (v7 == nullptr) {
      goto LABEL_27;
    }
  }
  if (v7[2] != v1) {
    goto LABEL_15;
  }

LABEL_26:
  v10 = (unsigned __int8*)v7[3];
  if (v10 == nullptr) {
    goto LABEL_27;
  }
  return (v10[32] << 24) | (v10[33] << 16) | (v10[34] << 8) | 0xFFu;
}

void GroundAttributeFile_Unknown4()
{

#pragma clang fp contract(off)
  unsigned __int64 v0;
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  int v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64** v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64** v24;
  __int64* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  float v30;
  __int64 v31;
  float v32;
  float v33;
  _BOOL8 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 primeEm;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  _QWORD** v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  _QWORD* v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  _QWORD* v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64* v59;
  __int64 v60;
  unsigned __int64 v61;

  v1 = fw_memory_g_heap_manager_ptr;
  if (GameData_21a5470 != 0) {
    v2 = (_QWORD*)GameData_21a5468;
    if (GameData_21a5468 != 0) {
      do {
        v3 = (_QWORD*)*v2;
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v4 = 128;
        }
        else {
          v4 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v4, v2);
        v2 = v3;
      } while (v3 != nullptr);
    }
    GameData_21a5468 = 0;
    if (GameData_21a5460 != 0) {
      v5 = GameData_21a5460 & 7;
      if ((unsigned __int64)GameData_21a5460 >= 8) {
        v7 = GameData_21a5460 & 0xFFFFFFFFFFFFFFF8LL;
        v6 = 0;
        do {
          *(_QWORD*)(GameData_21a5458 + 8 * v6) = 0;
          *(_QWORD*)(GameData_21a5458 + 8 * v6 + 8) = 0;
          *(_QWORD*)(GameData_21a5458 + 8 * v6 + 16) = 0;
          *(_QWORD*)(GameData_21a5458 + 8 * v6 + 24) = 0;
          *(_QWORD*)(GameData_21a5458 + 8 * v6 + 32) = 0;
          *(_QWORD*)(GameData_21a5458 + 8 * v6 + 40) = 0;
          *(_QWORD*)(GameData_21a5458 + 8 * v6 + 48) = 0;
          v8 = GameData_21a5458 + 8 * v6;
          v6 += 8;
          *(_QWORD*)(v8 + 56) = 0;
        } while (v7 != v6);
      }
      else {
        v6 = 0;
      }
      if (v5 != 0) {
        v9 = 8 * v6;
        do {
          --v5;
          *(_QWORD*)(GameData_21a5458 + v9) = 0;
          v9 += 8;
        } while (v5 != 0);
      }
    }
    GameData_21a5470 = 0;
  }
  v10 = *(__int64**)(*GameData_212c048 + 64);
  v11 = *(__int64**)(*GameData_212c048 + 72);
  if (v10 == v11) {
    return;
  }
  v12 = 0;
  v13 = GameData_21a5460;
  do {
    v14 = *v10;
    v15 = (*(unsigned __int8*)(*v10 + 33) << 16) |
          (*(unsigned __int8*)(*v10 + 32) << 24) |
          (*(unsigned __int8*)(*v10 + 34) << 8);
    v16 = v15 | 0xFFu;
    if (v13 != 0 && v12 != 0) {
      v17 = v13 - 1;
      if ((v13 & (v13 - 1)) != 0) {
        v18 = v15 | 0xFFu;
        if (v13 <= v16) {
          v18 = (unsigned int)v16 % (unsigned int)v13;
        }
      }
      else {
        v18 = ((_DWORD)v13 - 1) & (unsigned int)v16;
      }
      v19 = *(__int64***)(GameData_21a5458 + 8 * v18);
      if (v19 != nullptr) {
        v20 = *v19;
        if (v20 != nullptr) {
          if ((v13 & v17) == 0) {
            while (1) {
              v22 = v20[1];
              if (v22 == v16) {
                if (*((_DWORD*)v20 + 4) == (_DWORD)v16) {
                  goto LABEL_20;
                }
              }
              else if ((v22 & v17) != v18) {
                goto LABEL_42;
              }
              v20 = (__int64*)*v20;
              if (v20 == nullptr) {
                goto LABEL_42;
              }
            }
          }
          while (1) {
            v21 = v20[1];
            if (v21 == v16) {
              if (*((_DWORD*)v20 + 4) == (_DWORD)v16) {
                goto LABEL_20;
              }
            }
            else {
              if (v21 >= v13) {
                v21 %= v13;
              }
              if (v21 != v18) {
                goto LABEL_42;
              }
            }
            v20 = (__int64*)*v20;
            if (v20 == nullptr) {
              goto LABEL_42;
            }
          }
        }
      }
    LABEL_43:
      v23 = v13 - 1;
      if ((v13 & (v13 - 1)) != 0) {
        v0 = v16;
        if (v13 <= v16) {
          v0 = (unsigned int)v16 % (unsigned int)v13;
        }
      }
      else {
        v0 = ((_DWORD)v13 - 1) & (unsigned int)v16;
      }
      v24 = *(__int64***)(GameData_21a5458 + 8 * v0);
      if (v24 != nullptr) {
        v25 = *v24;
        if (v25 != nullptr) {
          if ((v13 & v23) == 0) {
            while (1) {
              v27 = v25[1];
              if (v27 == v16) {
                if (*((_DWORD*)v25 + 4) == (_DWORD)v16) {
                  goto LABEL_20;
                }
              }
              else if ((v27 & v23) != v0) {
                goto LABEL_62;
              }
              v25 = (__int64*)*v25;
              if (v25 == nullptr) {
                goto LABEL_62;
              }
            }
          }
          while (1) {
            v26 = v25[1];
            if (v26 == v16) {
              if (*((_DWORD*)v25 + 4) == (_DWORD)v16) {
                goto LABEL_20;
              }
            }
            else {
              if (v26 >= v13) {
                v26 %= v13;
              }
              if (v26 != v0) {
                goto LABEL_62;
              }
            }
            v25 = (__int64*)*v25;
            if (v25 == nullptr) {
              goto LABEL_62;
            }
          }
        }
      }
      goto LABEL_62;
    }
  LABEL_42:
    if (v13 != 0) {
      goto LABEL_43;
    }
  LABEL_62:
    v28 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         32, 16, 0);
    v29 = GameData_21a5470;
    v30 = *(float*)&GameData_21a5478;
    v31 = v28;
    *(_QWORD*)v28 = 0;
    *(_QWORD*)(v28 + 8) = v16;
    *(_DWORD*)(v28 + 16) = v16;
    *(_QWORD*)(v28 + 24) = v14;
    v32 = (float)(unsigned __int64)(v29 + 1);
    if (v13 != 0 && (float)(v30 * (float)v13) >= v32) {
      goto LABEL_128;
    }
    v33 = v32 / v30;
    v34 = (v13 & (v13 - 1)) != 0;
    if (v13 < 3) {
      v34 = true;
    }
    v35 = v34 | (2 * v13);
    v36 = vcvtps_u64_f32(v33);
    if (v35 <= v36) {
      primeEm = v36;
    }
    else {
      primeEm = v35;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
      v13 = GameData_21a5460;
    }
    if (primeEm <= v13) {
      if (primeEm >= v13) {
        goto LABEL_123;
      }
      v43 = vcvtps_u64_f32((float)(unsigned __int64)GameData_21a5470 /
                           *(float*)&GameData_21a5478);
      if (v13 < 3 || (v13 & (v13 - 1)) != 0) {
        v43 = std___1___next_prime(v43);
      }
      else {
        v44 = 1LL << -(char)__clz(v43 - 1);
        if (v43 >= 2) {
          v43 = v44;
        }
      }
      if (primeEm <= v43) {
        primeEm = v43;
      }
      if (primeEm >= v13) {
        goto LABEL_123;
      }
      if (primeEm == 0) {
        v56 = GameData_21a5458;
        GameData_21a5458 = 0;
        if (v56 != 0) {
          v57 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v57 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v57, v56);
        }
        GameData_21a5460 = 0;
        goto LABEL_123;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v38 = fw_memory_g_heap_manager_ptr;
    v39 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * primeEm, 16, 0);
    v40 = GameData_21a5458;
    GameData_21a5458 = v39;
    if (v40 != 0) {
      v41 = 128;
      if (*(_QWORD*)(*(_QWORD*)v38 + 200LL) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v38 + v41, v40);
    }
    GameData_21a5460 = primeEm;
    if (primeEm >= 8) {
      v42 = 0;
      do {
        *(_QWORD*)(GameData_21a5458 + 8 * v42) = 0;
        *(_QWORD*)(GameData_21a5458 + 8 * v42 + 8) = 0;
        *(_QWORD*)(GameData_21a5458 + 8 * v42 + 16) = 0;
        *(_QWORD*)(GameData_21a5458 + 8 * v42 + 24) = 0;
        *(_QWORD*)(GameData_21a5458 + 8 * v42 + 32) = 0;
        *(_QWORD*)(GameData_21a5458 + 8 * v42 + 40) = 0;
        *(_QWORD*)(GameData_21a5458 + 8 * v42 + 48) = 0;
        v45 = GameData_21a5458 + 8 * v42;
        v42 += 8;
        *(_QWORD*)(v45 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v42);
    }
    else {
      v42 = 0;
    }
    v46 = primeEm & 7;
    if ((primeEm & 7) != 0) {
      v47 = 8 * v42;
      do {
        --v46;
        *(_QWORD*)(GameData_21a5458 + v47) = 0;
        v47 += 8;
      } while (v46 != 0);
    }
    v48 = (_QWORD**)GameData_21a5468;
    if (GameData_21a5468 != 0) {
      v49 = *(_QWORD*)(GameData_21a5468 + 8);
      v50 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v49 >= primeEm) {
          v49 %= primeEm;
        }
        *(_QWORD*)(GameData_21a5458 + 8 * v49) = &GameData_21a5468;
        v51 = *v48;
        if (*v48 == nullptr) {
          goto LABEL_123;
        }
        while (1) {
          v52 = v51[1];
          if (v52 >= primeEm) {
            v52 %= primeEm;
          }
          if (v52 != v49) {
            if (*(_QWORD*)(GameData_21a5458 + 8 * v52) == 0) {
              *(_QWORD*)(GameData_21a5458 + 8 * v52) = v48;
              goto LABEL_100;
            }
            *v48 = (_QWORD*)*v51;
            *v51 = **(_QWORD**)(GameData_21a5458 + 8 * v52);
            **(_QWORD**)(GameData_21a5458 + 8 * v52) = v51;
            v51 = v48;
          }
          v52 = v49;
        LABEL_100:
          v48 = (_QWORD**)v51;
          v51 = (_QWORD*)*v51;
          v49 = v52;
          if (v51 == nullptr) {
            goto LABEL_123;
          }
        }
      }
      v53 = v49 & v50;
      *(_QWORD*)(GameData_21a5458 + 8 * v53) = &GameData_21a5468;
      while (1) {
        v54 = *v48;
        if (*v48 == nullptr) {
          break;
        }
        v55 = v54[1] & v50;
        if (v55 == v53) {
          v48 = (_QWORD**)*v48;
        }
        else if (*(_QWORD*)(GameData_21a5458 + 8 * v55) != 0) {
          *v48 = (_QWORD*)*v54;
          *v54 = **(_QWORD**)(GameData_21a5458 + 8 * v55);
          **(_QWORD**)(GameData_21a5458 + 8 * v55) = v54;
        }
        else {
          *(_QWORD*)(GameData_21a5458 + 8 * v55) = v48;
          v48 = (_QWORD**)v54;
          v53 = v55;
        }
      }
    }
  LABEL_123:
    v13 = GameData_21a5460;
    if ((GameData_21a5460 & (GameData_21a5460 - 1)) != 0) {
      if (GameData_21a5460 <= v16) {
        v0 = v16 % GameData_21a5460;
      }
      else {
        v0 = v16;
      }
    }
    else {
      v0 = ((_DWORD)GameData_21a5460 - 1) & (unsigned int)v16;
    }
  LABEL_128:
    v58 = GameData_21a5458;
    v59 = *(__int64**)(GameData_21a5458 + 8 * v0);
    if (v59 != nullptr) {
      *(_QWORD*)v31 = *v59;
      *v59 = v31;
    }
    else {
      v60 = GameData_21a5468;
      GameData_21a5468 = v31;
      *(_QWORD*)v31 = v60;
      *(_QWORD*)(v58 + 8 * v0) = &GameData_21a5468;
      if (*(_QWORD*)v31 != 0) {
        v61 = *(_QWORD*)(*(_QWORD*)v31 + 8LL);
        if ((v13 & (v13 - 1)) != 0) {
          if (v61 >= v13) {
            v61 %= v13;
          }
        }
        else {
          v61 &= v13 - 1;
        }
        *(_QWORD*)(GameData_21a5458 + 8 * v61) = v31;
      }
    }
    v13 = GameData_21a5460;
    v12 = ++GameData_21a5470;
  LABEL_20:
    ++v10;
  } while (v10 != v11);
}

#pragma GCC visibility pop
