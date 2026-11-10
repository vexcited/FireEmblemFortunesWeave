#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_6bde00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1b37e20;
extern __int64 GameData_212c060;
extern __int64 GameData_21ca218;
extern __int64 GameData_21ca220;
extern __int64 GameData_21ca228;
extern __int64 GameData_21ca230;
extern __int64 GameData_21ca240;
extern __int64 GameData_21ca248;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6bddd0(void);
__int64 DisposFile_6bbce0(__int64 result, __int64 a2);
__int64 DisposFile_Unknown5();
__int64 DisposFile_6bc0a0();
_QWORD* DisposFile_6bc220(__int64 a1);
__int64 GameRoutine_6be180(__int64 result, __int64*, unsigned __int64,
                           __int64*);
char* GameRoutine_6be500(char* result, char*, char*, __int64, __int64, __int64,
                         __int64);
char* DisposFile_6bde00(char* result, char* a2, unsigned __int64 a3,
                        __int64* a4, __int64 a5);

__int64 DisposFile_6bbce0(__int64 result, __int64 a2)
{
  __int64** v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  bool v26;
  __int64 v27;
  __int64 v28;

  if (a2 != 0) {
    v2 = *(__int64***)(a2 + 40);
    v3 = (__int64*)result;
    v4 = *v2;
    v5 = v2[1];
    if (*v2 == v5) {
      v6 = *(_QWORD**)(result + 8);
    }
    else {
      v6 = *(_QWORD**)(result + 8);
      v7 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      do {
        v8 = *v4;
        v9 = v3[2];
        if ((unsigned __int64)v6 < v9) {
          *v6++ = v8;
        }
        else {
          v10 = *v3;
          v11 = (__int64)v6 - *v3;
          v12 = (v11 >> 3) + 1;
          if (v12 >> 61 != 0) {
            GameRoutine_6bddd0();
          }
          v13 = v9 - v10;
          if (v13 >> 2 > v12) {
            v12 = v13 >> 2;
          }
          if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
            v14 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v14 = v12;
          }
          if (v14 != 0) {
            if (v14 >> 61 != 0) {
              GameRoutine_60a210(result);
            }
            v15 = fw_memory_HeapManager_Allocate(*v7, 8 * v14, 16, 0);
          }
          else {
            v15 = 0;
          }
          v16 = v15 + 8 * v14;
          v17 = v15 + v11 - 8 * (v11 >> 3);
          *(_QWORD*)(v15 + v11) = v8;
          v6 = (_QWORD*)(v15 + v11 + 8);
          result = memcpy(v17, v10, v11);
          *v3 = v17;
          v3[1] = (__int64)v6;
          v3[2] = v16;
          if (v10 != 0) {
            v18 = 128;
            if (*(_QWORD*)(*v7 + 200LL) == 0) {
              v18 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*v7 + v18, v10);
          }
        }
        ++v4;
        v3[1] = (__int64)v6;
      } while (v4 != v5);
    }
    v19 = *v3;
    v20 = (__int64)v6 - *v3;
    v21 = v20 >> 3;
    if (v20 >> 3 < 129) {
      v25 = 0;
      return GameRoutine_6bde00(v19, v6, v21, 0, v25);
    }
    else {
      v22 = v20 >> 3;
      v23 = GameData_212c060;
      while (1) {
        v24 = GameRoutine_1a09d20(8 * v22, v23);
        if (v24 != 0) {
          break;
        }
        v25 = v22 >> 1;
        v26 = v22 > 1;
        v22 >>= 1;
        if (!v26) {
          return GameRoutine_6bde00(v19, v6, v21, 0, v25);
        }
      }
      v27 = v24;
      GameRoutine_6bde00(v19, v6, v21, v24, v22);
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v28 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v27);
    }
  }
  return result;
}

__int64 DisposFile_Unknown5()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  __int64 result;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  if (GameData_21ca230 != 0) {
    v0 = (_QWORD*)GameData_21ca228;
    if (GameData_21ca228 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v4 = (_QWORD*)*v0;
        v5 = v0[3];
        if (v5 != 0) {
          v6 = *(_QWORD*)v1;
          v0[4] = v5;
          if (*(_QWORD*)(v6 + 200) != 0) {
            v7 = 128;
          }
          else {
            v7 = 56;
          }
          nn_mem_StandardAllocator_Free(v6 + v7, v5);
        }
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v2 = 128;
        }
        else {
          v2 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v2, v0);
        v0 = v4;
      } while (v4 != nullptr);
    }
    GameData_21ca228 = 0;
    if (GameData_21ca220 != 0) {
      v8 = GameData_21ca220 & 7;
      if ((unsigned __int64)GameData_21ca220 >= 8) {
        v10 = GameData_21ca220 & 0xFFFFFFFFFFFFFFF8LL;
        v9 = 0;
        do {
          *(_QWORD*)(GameData_21ca218 + 8 * v9) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v9 + 8) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v9 + 16) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v9 + 24) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v9 + 32) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v9 + 40) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v9 + 48) = 0;
          v11 = GameData_21ca218 + 8 * v9;
          v9 += 8;
          *(_QWORD*)(v11 + 56) = 0;
        } while (v10 != v9);
      }
      else {
        v9 = 0;
      }
      if (v8 != 0) {
        v12 = 8 * v9;
        do {
          --v8;
          *(_QWORD*)(GameData_21ca218 + v12) = 0;
          v12 += 8;
        } while (v8 != 0);
      }
    }
    GameData_21ca230 = 0;
  }
  GameData_21ca248 = GameData_21ca240;
  return result;
}

__int64 DisposFile_6bc0a0()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  __int64 result;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  if (GameData_21ca230 != 0) {
    v0 = (_QWORD*)GameData_21ca228;
    if (GameData_21ca228 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v4 = (_QWORD*)*v0;
        v5 = v0[3];
        if (v5 != 0) {
          v6 = *(_QWORD*)v1;
          v0[4] = v5;
          if (*(_QWORD*)(v6 + 200) != 0) {
            v7 = 128;
          }
          else {
            v7 = 56;
          }
          nn_mem_StandardAllocator_Free(v6 + v7, v5);
        }
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v2 = 128;
        }
        else {
          v2 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v2, v0);
        v0 = v4;
      } while (v4 != nullptr);
    }
    GameData_21ca228 = 0;
    if (GameData_21ca220 != 0) {
      v8 = GameData_21ca220 & 7;
      if ((unsigned __int64)GameData_21ca220 >= 8) {
        v10 = GameData_21ca220 & 0xFFFFFFFFFFFFFFF8LL;
        v9 = 0;
        do {
          *(_QWORD*)(GameData_21ca218 + 8 * v9) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v9 + 8) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v9 + 16) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v9 + 24) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v9 + 32) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v9 + 40) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v9 + 48) = 0;
          v11 = GameData_21ca218 + 8 * v9;
          v9 += 8;
          *(_QWORD*)(v11 + 56) = 0;
        } while (v10 != v9);
      }
      else {
        v9 = 0;
      }
      if (v8 != 0) {
        v12 = 8 * v9;
        do {
          --v8;
          *(_QWORD*)(GameData_21ca218 + v12) = 0;
          v12 += 8;
        } while (v8 != 0);
      }
    }
    GameData_21ca230 = 0;
  }
  GameData_21ca248 = GameData_21ca240;
  return result;
}

_QWORD* DisposFile_6bc220(__int64 a1)
{
  unsigned __int64 v1;
  __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v9;

  v1 = game_HashString(a1);
  if (GameData_21ca220 != 0 && GameData_21ca230 != 0) {
    v3 = GameData_21ca220 - 1;
    if ((GameData_21ca220 & (GameData_21ca220 - 1)) != 0) {
      v4 = v1;
      if (v1 >= GameData_21ca220) {
        v4 = v1 % GameData_21ca220;
      }
    }
    else {
      v4 = v3 & v1;
    }
    v5 = *(_QWORD**)(GameData_21ca218 + 8 * v4);
    if (v5 != nullptr) {
      v6 = (_QWORD*)*v5;
      if (v6 != nullptr) {
        if ((GameData_21ca220 & v3) != 0) {
          while (1) {
            v7 = v6[1];
            if (v7 == v1) {
              if (v6[2] == v1) {
                return v6 + 3;
              }
            }
            else {
              if (v7 >= GameData_21ca220) {
                v7 %= (unsigned __int64)GameData_21ca220;
              }
              if (v7 != v4) {
                return &GameData_1b37e20;
              }
            }
            v6 = (_QWORD*)*v6;
            if (v6 == nullptr) {
              return &GameData_1b37e20;
            }
          }
        }
        while (1) {
          v9 = v6[1];
          if (v9 == v1) {
            if (v6[2] == v1) {
              return v6 + 3;
            }
          }
          else if ((v9 & v3) != v4) {
            return &GameData_1b37e20;
          }
          v6 = (_QWORD*)*v6;
          if (v6 == nullptr) {
            return &GameData_1b37e20;
          }
        }
      }
    }
  }
  return &GameData_1b37e20;
}

char* DisposFile_6bde00(char* result, char* a2, unsigned __int64 a3,
                        __int64* a4, __int64 a5)
{
  __int64 v5;
  __int64 v6;
  __int16 v7;
  int v8;
  __int16 v9;
  int v10;
  char* v11;
  __int64 v12;
  char* v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  __int16 v17;
  int v18;
  __int16 v19;
  int v20;
  __int64 v21;
  __int16 v22;
  int v23;
  __int16 v24;
  int v25;
  unsigned __int64 v26;
  unsigned __int64 v28;
  char* v29;
  char* v32;
  __int64* v34;
  __int64* v35;
  __int64* v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  __int16 v40;
  int v41;
  __int16 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;

  if (a3 >= 2) {
    if (a3 == 2) {
      v5 = *((_QWORD*)a2 - 1);
      v6 = *(_QWORD*)result;
      v7 = *(_WORD*)(v5 + 50);
      if ((*(_BYTE*)(v5 + 58) & 0xFE) == 2) {
        v8 = 256;
      }
      else {
        v8 = 0;
      }
      if ((v7 & 0x20) != 0) {
        v8 -= 2;
      }
      if ((v7 & 0x10) != 0) {
        v8 -= 4;
      }
      v9 = *(_WORD*)(v6 + 50);
      if ((*(_BYTE*)(v6 + 58) & 0xFE) == 2) {
        v10 = 256;
      }
      else {
        v10 = 0;
      }
      if ((v9 & 0x20) != 0) {
        v10 -= 2;
      }
      if ((v9 & 0x10) != 0) {
        v10 -= 4;
      }
      if (v8 > v10) {
        *(_QWORD*)result = v5;
        *((_QWORD*)a2 - 1) = v6;
      }
    }
    else if ((__int64)a3 > 128) {
      v26 = a3 >> 1;
      v28 = a3 - (a3 >> 1);
      if ((__int64)a3 <= a5) {
        v32 = result;
        v34 = a4;
        GameRoutine_6be180((__int64)result, (__int64*)&result[8 * v26], a3 >> 1,
                           a4);
        v35 = &v34[v26];
        result = (char*)GameRoutine_6be180((__int64)&v32[8 * v26], (__int64*)a2,
                                           v28, v35);
        v36 = &v34[a3];
        v37 = v35;
        while (v37 != v36) {
          v38 = *v37;
          v39 = *v34;
          v40 = *(_WORD*)(*v37 + 50);
          if ((*(_BYTE*)(*v37 + 58) & 0xFE) == 2) {
            v41 = 256;
          }
          else {
            v41 = 0;
          }
          if ((v40 & 0x20) != 0) {
            v41 -= 2;
          }
          if ((v40 & 0x10) != 0) {
            v41 -= 4;
          }
          v42 = *(_WORD*)(v39 + 50);
          if ((*(_BYTE*)(v39 + 58) & 0xFE) == 2) {
            v43 = 256;
          }
          else {
            v43 = 0;
          }
          if ((v42 & 0x20) != 0) {
            v43 -= 2;
          }
          if ((v42 & 0x10) != 0) {
            v43 -= 4;
          }
          if (v41 > v43) {
            v44 = 0;
          }
          else {
            v38 = *v34;
            v44 = 8;
          }
          v34 = (__int64*)((char*)v34 + v44);
          if (v41 <= v43) {
            v45 = 0;
          }
          else {
            v45 = 8;
          }
          *(_QWORD*)v32 = v38;
          v32 += 8;
          v37 = (__int64*)((char*)v37 + v45);
          if (v34 == v35) {
            while (v37 != v36) {
              v47 = *v37++;
              *(_QWORD*)v32 = v47;
              v32 += 8;
            }
            return result;
          }
        }
        while (v34 != v35) {
          v46 = *v34++;
          *(_QWORD*)v32 = v46;
          v32 += 8;
        }
      }
      else {
        v29 = result;
        DisposFile_6bde00(result, (__int64*)&result[8 * v26], a3 >> 1, a4, a5);
        DisposFile_6bde00(&v29[8 * v26], (__int64*)a2, v28, a4, a5);
        return GameRoutine_6be500(v29, &v29[8 * v26], a2, v26, v28, (__int64)a4,
                                  a5);
      }
    }
    else if (result != a2) {
      v11 = result + 8;
      if (result + 8 != a2) {
        v12 = 0;
        v13 = result;
        do {
          v16 = *(_QWORD*)v13;
          v15 = *((_QWORD*)v13 + 1);
          v13 = v11;
          v17 = *(_WORD*)(v15 + 50);
          if ((*(_BYTE*)(v15 + 58) & 0xFE) == 2) {
            v18 = 256;
          }
          else {
            v18 = 0;
          }
          if ((v17 & 0x20) != 0) {
            v18 -= 2;
          }
          if ((v17 & 0x10) != 0) {
            v18 -= 4;
          }
          v19 = *(_WORD*)(v16 + 50);
          if ((*(_BYTE*)(v16 + 58) & 0xFE) == 2) {
            v20 = 256;
          }
          else {
            v20 = 0;
          }
          if ((v19 & 0x20) != 0) {
            v20 -= 2;
          }
          if ((v19 & 0x10) != 0) {
            v20 -= 4;
          }
          if (v18 > v20) {
            v21 = v12;
            do {
              *(_QWORD*)&result[v21 + 8] = v16;
              if (v21 == 0) {
                v14 = result;
                goto LABEL_25;
              }
              v16 = *(_QWORD*)&result[v21 - 8];
              v22 = *(_WORD*)(v15 + 50);
              v21 -= 8;
              if ((*(_BYTE*)(v15 + 58) & 0xFE) == 2) {
                v23 = 256;
              }
              else {
                v23 = 0;
              }
              if ((v22 & 0x20) != 0) {
                v23 -= 2;
              }
              if ((v22 & 0x10) != 0) {
                v23 -= 4;
              }
              v24 = *(_WORD*)(v16 + 50);
              if ((*(_BYTE*)(v16 + 58) & 0xFE) == 2) {
                v25 = 256;
              }
              else {
                v25 = 0;
              }
              if ((v24 & 0x20) != 0) {
                v25 -= 2;
              }
              if ((v24 & 0x10) != 0) {
                v25 -= 4;
              }
            } while (v23 > v25);
            v14 = &result[v21 + 8];
          LABEL_25:
            *(_QWORD*)v14 = v15;
          }
          v11 = v13 + 8;
          v12 += 8;
        } while (v13 + 8 != a2);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
