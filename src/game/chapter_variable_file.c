#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_66cf00(_QWORD);
__int64 GameRoutine_66d660(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21c9760;
extern __int64 GameData_21c9768;
extern __int64 GameData_21c9770;
extern __int64 GameData_21c9780;
extern __int64 GameData_21c9788;
extern __int64 GameData_21c9790;
extern __int64 GameData_21c9798;
extern __int64 GameData_21c97a0;
extern __int64 GameData_21c97b0;
extern __int64 GameData_21c97b8;
extern __int64 GameData_21c97c0;
extern __int64 GameData_21c97c8;
extern __int64 GameData_21c97d0;
extern __int64 GameData_21c97e0;
extern __int64 GameData_21c97e8;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ChapterVariableFile_fd0680(__int64 result);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern __int64* GameData_212cd70[25];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_fd0e10(void);
__attribute__((swiftcall)) void
ChapterVariableFile_fcfea0(PSEUDO_X8 x8_, __int64 result, int a2, int a3,
                           unsigned __int8 a4, int a5);
__attribute__((swiftcall)) void

ChapterVariableFile_fcfea0(PSEUDO_X8 x8_, __int64 result, int a2, int a3,
                           unsigned __int8 a4, int a5)
{
  __int64* a6 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  char* v13;
  __int64 v14;
  __int64 v15;
  _BYTE* v16;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  int v29;
  int v30;

  a6[1] = 0;
  a6[2] = 0;
  *a6 = 0;
  v7 = GameData_212cd70[0];
  v8 = *GameData_212cd70[0];
  v9 = *(_QWORD*)(*GameData_212cd70[0] + 64);
  if ((int)((unsigned __int64)(*(_QWORD*)(*GameData_212cd70[0] + 72) - v9) >>
            3) < 1) {
    v15 = 0;
  }
  else {
    v10 = a4;
    v13 = nullptr;
    v14 = 0;
    v15 = 0;
    do {
      v16 = *(_BYTE**)(v9 + 8 * v14);
      if (a2 == (unsigned __int8)v16[33] && a3 == (unsigned __int8)v16[34] &&
          ((a5 & 1) != 0 || v16[32] == 0) &&
          (v16[35] == 0 || (unsigned __int8)v16[35] == v10)) {
        v18 = a6[2];
        if ((unsigned __int64)v13 < v18) {
          *(_QWORD*)v13 = v16;
          v13 += 8;
        }
        else {
          v19 = &v13[-v15];
          v20 = (__int64)&v13[-v15] >> 3;
          v21 = v20 + 1;
          if ((unsigned __int64)(v20 + 1) >> 61 != 0) {
            *a6 = v15;
            GameRoutine_fd0e10();
          }
          v22 = v18 - v15;
          v30 = a5;
          v29 = v10;
          if (v22 >> 2 > v21) {
            v21 = v22 >> 2;
          }
          if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF8LL) {
            v23 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v23 = v21;
          }
          if (v23 != 0) {
            if (v23 >> 61 != 0) {
              *a6 = v15;
              GameRoutine_60a210(result);
            }
            v24 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v23, 16, 0);
          }
          else {
            v24 = 0;
          }
          v25 = v24 + 8 * v23;
          v26 = &v13[-v15];
          v27 = (__int64)&v19[v24 + -8 * v20];
          *(_QWORD*)&v19[v24] = v16;
          v13 = &v19[v24 + 8];
          result = memcpy(v27, v15, v26);
          a6[1] = (__int64)v13;
          a6[2] = v25;
          if (v15 != 0) {
            v28 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v28 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v28);
          }
          a5 = v30;
          v15 = v27;
          v7 = GameData_212cd70[0];
          v10 = v29;
        }
        v8 = *v7;
        a6[1] = (__int64)v13;
      }
      v9 = *(_QWORD*)(v8 + 64);
      ++v14;
    } while (v14 < (int)((unsigned __int64)(*(_QWORD*)(v8 + 72) - v9) >> 3));
  }
  *a6 = v15;
  {
    result;
    return;
  }
}

__int64 ChapterVariableFile_fd0680(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  bool v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
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
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;

  if (*(_BYTE*)(result + 248) == 1) {
    v1 = *(_QWORD**)(result + 8);
    v2 = (_QWORD*)result;
    if (*(_QWORD**)(result + 16) == v1) {
      v3 = 0;
    }
    else {
      v3 = *v1 + 16LL;
    }
    v4 = GameData_21c9768;
    v5 = ((GameData_21c9770 - GameData_21c9768) << 6) - 1;
    if (GameData_21c9770 == GameData_21c9768) {
      v5 = 0;
    }
    v6 = GameData_21c9788 + GameData_21c9780;
    if (v5 == GameData_21c9788 + GameData_21c9780) {
      GameRoutine_66cf00(&GameData_21c9760);
      v4 = GameData_21c9768;
      v6 = GameData_21c9788 + GameData_21c9780;
    }
    *(_QWORD*)(*(_QWORD*)(v4 + 8 * (v6 >> 9)) + 8 * (v6 & 0x1FF)) = v3;
    ++GameData_21c9788;
    v7 = v2[4];
    if (v2[5] == v7) {
      v8 = 0;
    }
    else {
      v8 = *(_QWORD*)(*(_QWORD*)v7 + 8LL);
    }
    v9 = GameData_21c9798;
    v10 = ((GameData_21c97a0 - GameData_21c9798) << 6) - 1;
    if (GameData_21c97a0 == GameData_21c9798) {
      v10 = 0;
    }
    v11 = GameData_21c97b8 + GameData_21c97b0;
    if (v10 == GameData_21c97b8 + GameData_21c97b0) {
      GameRoutine_66cf00(&GameData_21c9790);
      v9 = GameData_21c9798;
      v11 = GameData_21c97b8 + GameData_21c97b0;
    }
    *(_QWORD*)(*(_QWORD*)(v9 + 8 * (v11 >> 9)) + 8 * (v11 & 0x1FF)) = v8;
    ++GameData_21c97b8;
    result = (*(__int64 (**)(_QWORD*))(*v2 + 48LL))(v2);
    v12 = (__int64*)v2[7];
    v13 = (__int64*)v2[8];
    v42 = v2;
    if (v12 != v13) {
      v14 = GameData_21c97c8;
      v15 = GameData_21c97d0;
      v16 = GameData_21c97e0;
      v17 = GameData_21c97e8;
      v18 = fw_memory_g_heap_manager_ptr;
      do {
        v19 = v15 - v14;
        v20 = *v12;
        v21 = v15 == v14;
        v22 = v17 + v16;
        v23 = (v19 << 6) - 1;
        if (v21) {
          v23 = 0;
        }
        if (v23 == v22) {
          result = GameRoutine_66d660(&GameData_21c97c0);
          v14 = GameData_21c97c8;
          v22 = GameData_21c97e8 + GameData_21c97e0;
        }
        *(_QWORD*)(*(_QWORD*)(v14 + 8 * (v22 >> 9)) + 8 * (v22 & 0x1FF)) = v20;
        v24 = ++GameData_21c97e8;
        v25 = *(_QWORD**)(v20 + 24);
        if (v25 != nullptr) {
          v26 = v25[3];
          if (v26 != 0) {
            v27 = *(_QWORD*)v18;
            v25[4] = v26;
            if (*(_QWORD*)(v27 + 200) != 0) {
              v28 = 128;
            }
            else {
              v28 = 56;
            }
            nn_mem_StandardAllocator_Free(v27 + v28);
          }
          if (*v25 != 0) {
            v29 = *(_QWORD*)v18;
            v25[1] = *v25;
            if (*(_QWORD*)(v29 + 200) != 0) {
              v30 = 128;
            }
            else {
              v30 = 56;
            }
            nn_mem_StandardAllocator_Free(v29 + v30);
          }
          if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
            v31 = 128;
          }
          else {
            v31 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v31);
          *(_QWORD*)(v20 + 24) = 0;
          v24 = GameData_21c97e8;
        }
        v14 = GameData_21c97c8;
        v15 = GameData_21c97d0;
        v16 = GameData_21c97e0;
        if (GameData_21c97d0 == GameData_21c97c8) {
          v32 = 0;
        }
        else {
          v32 = ((GameData_21c97d0 - GameData_21c97c8) << 6) - 1;
        }
        v17 = v24 - 1;
        GameData_21c97e8 = v24 - 1;
        if ((unsigned __int64)(v32 - (v24 + GameData_21c97e0) + 1) >= 0x400) {
          if (*(_QWORD*)(GameData_21c97d0 - 8) != 0) {
            if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
              v33 = 128;
            }
            else {
              v33 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v33);
            v14 = GameData_21c97c8;
            v15 = GameData_21c97d0;
            v16 = GameData_21c97e0;
            v17 = GameData_21c97e8;
          }
          v15 -= 8;
          GameData_21c97d0 = v15;
        }
        ++v12;
      } while (v12 != v13);
    }
    v34 = GameData_21c9770;
    v35 = ((GameData_21c9770 - GameData_21c9768) << 6) - 1;
    if (GameData_21c9770 == GameData_21c9768) {
      v35 = 0;
    }
    *((_BYTE*)v42 + 248) = 0;
    v36 = GameData_21c9788--;
    if ((unsigned __int64)(v35 - (v36 + GameData_21c9780) + 1) >= 0x400) {
      if (*(_QWORD*)(v34 - 8) != 0) {
        v37 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v37 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v37);
        v34 = GameData_21c9770;
      }
      GameData_21c9770 = v34 - 8;
    }
    v38 = GameData_21c97a0;
    v39 = GameData_21c97b8;
    v40 = ((GameData_21c97a0 - GameData_21c9798) << 6) - 1;
    if (GameData_21c97a0 == GameData_21c9798) {
      v40 = 0;
    }
    --GameData_21c97b8;
    if ((unsigned __int64)(v40 - (v39 + GameData_21c97b0) + 1) >= 0x400) {
      if (*(_QWORD*)(GameData_21c97a0 - 8) != 0) {
        v41 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v41 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v41);
        v38 = GameData_21c97a0;
      }
      GameData_21c97a0 = v38 - 8;
    }
  }
  return result;
}

#pragma GCC visibility pop
