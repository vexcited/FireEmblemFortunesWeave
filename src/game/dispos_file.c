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

#pragma GCC visibility pop
