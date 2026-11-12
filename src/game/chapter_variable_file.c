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
__int64 ChapterVariableFile_fd0680_alt1(__int64 result) __asm__(
    "ChapterVariableFile_fd0680");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern __int64* GameData_212cd70[25];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_fd0e10(void);
__attribute__((swiftcall)) void
ChapterVariableFile_fcfea0(PSEUDO_X8 x8_, __int64 result, int a2, int a3,
                           unsigned __int8 a4, int a5);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void GameRoutine_66cf00_alt1(__int64*) __asm__("GameRoutine_66cf00");
void GameRoutine_66d660_alt1(__int64*) __asm__("GameRoutine_66d660");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_fd0e10_alt1() __asm__("GameRoutine_fd0e10");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ChapterVariableFile_fd0680(__int64 a1);
__attribute__((swiftcall)) void

ChapterVariableFile_fcfea0(PSEUDO_X8 x8_, __int64 unused_int0, int a1, int a2,
                           unsigned __int8 a3, int a4)
{
  __int64* a5 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  char* v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;

  a5[1] = 0;
  a5[2] = 0;
  *a5 = 0;
  v6 = GameData_212cd70[0];
  v7 = *GameData_212cd70[0];
  v8 = *(_QWORD*)(*GameData_212cd70[0] + 64);
  if ((int)((unsigned __int64)(*(_QWORD*)(*GameData_212cd70[0] + 72) - v8) >>
            3) < 1) {
    v14 = 0;
  }
  else {
    v9 = a3;
    v12 = nullptr;
    v13 = 0;
    v14 = 0;
    do {
      v15 = *(_BYTE**)(v8 + 8 * v13);
      if (a1 == (unsigned __int8)v15[33] && a2 == (unsigned __int8)v15[34] &&
          ((a4 & 1) != 0 || v15[32] == 0) &&
          (v15[35] == 0 || (unsigned __int8)v15[35] == v9)) {
        v17 = a5[2];
        if ((unsigned __int64)v12 < v17) {
          *(_QWORD*)v12 = v15;
          v12 += 8;
        }
        else {
          v18 = &v12[-v14];
          v19 = (__int64)&v12[-v14] >> 3;
          v20 = v19 + 1;
          if ((unsigned __int64)(v19 + 1) >> 61 != 0) {
            *a5 = v14;
            GameRoutine_fd0e10_alt1();
          }
          v21 = v17 - v14;
          v29 = a4;
          v28 = v9;
          if (v21 >> 2 > v20) {
            v20 = v21 >> 2;
          }
          if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF8LL) {
            v22 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v22 = v20;
          }
          if (v22 != 0) {
            if (v22 >> 61 != 0) {
              *a5 = v14;
              GameRoutine_60a210_alt1();
            }
            v23 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v22, 16, 0);
          }
          else {
            v23 = 0;
          }
          v24 = v23 + 8 * v22;
          v25 = (unsigned __int64)&v12[-v14];
          v26 = (__int64)&v18[v23 + -8 * v19];
          *(_QWORD*)&v18[v23] = v15;
          v12 = &v18[v23 + 8];
          memcpy_alt1(v26, v14, v25);
          a5[1] = (__int64)v12;
          a5[2] = v24;
          if (v14 != 0) {
            v27 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v27 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v14);
          }
          a4 = v29;
          v14 = v26;
          v6 = GameData_212cd70[0];
          v9 = v28;
        }
        v7 = *v6;
        a5[1] = (__int64)v12;
      }
      v8 = *(_QWORD*)(v7 + 64);
      ++v13;
    } while (v13 < (int)((unsigned __int64)(*(_QWORD*)(v7 + 72) - v8) >> 3));
  }
  *a5 = v14;
}

void ChapterVariableFile_fd0680(__int64 a1)
{
  _QWORD* v1;
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
  __int64* v25;
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
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;

  if (*(_BYTE*)(a1 + 248) == 1) {
    v1 = *(_QWORD**)(a1 + 8);
    if (*(_QWORD**)(a1 + 16) == v1) {
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
      GameRoutine_66cf00_alt1(&GameData_21c9760);
      v4 = GameData_21c9768;
      v6 = GameData_21c9788 + GameData_21c9780;
    }
    *(_QWORD*)(*(_QWORD*)(v4 + 8 * (v6 >> 9)) + 8 * (v6 & 0x1FF)) = v3;
    ++GameData_21c9788;
    v7 = *(_QWORD*)(a1 + 32);
    if (*(_QWORD*)(a1 + 40) == v7) {
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
      GameRoutine_66cf00_alt1(&GameData_21c9790);
      v9 = GameData_21c9798;
      v11 = GameData_21c97b8 + GameData_21c97b0;
    }
    *(_QWORD*)(*(_QWORD*)(v9 + 8 * (v11 >> 9)) + 8 * (v11 & 0x1FF)) = v8;
    ++GameData_21c97b8;
    (*(void (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1);
    v12 = *(__int64**)(a1 + 56);
    v13 = *(__int64**)(a1 + 64);
    v46 = a1;
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
          GameRoutine_66d660_alt1(&GameData_21c97c0);
          v14 = GameData_21c97c8;
          v22 = GameData_21c97e8 + GameData_21c97e0;
        }
        *(_QWORD*)(*(_QWORD*)(v14 + 8 * (v22 >> 9)) + 8 * (v22 & 0x1FF)) = v20;
        v24 = ++GameData_21c97e8;
        v25 = *(__int64**)(v20 + 24);
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
            nn_mem_StandardAllocator_Free_alt1(v27 + v28, v26);
          }
          v29 = *v25;
          if (*v25 != 0) {
            v30 = *(_QWORD*)v18;
            v25[1] = v29;
            if (*(_QWORD*)(v30 + 200) != 0) {
              v31 = 128;
            }
            else {
              v31 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(v30 + v31, v29);
          }
          if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
            v32 = 128;
          }
          else {
            v32 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v18 + v32, (__int64)v25);
          *(_QWORD*)(v20 + 24) = 0;
          v24 = GameData_21c97e8;
        }
        v14 = GameData_21c97c8;
        v15 = GameData_21c97d0;
        v16 = GameData_21c97e0;
        if (GameData_21c97d0 == GameData_21c97c8) {
          v33 = 0;
        }
        else {
          v33 = ((GameData_21c97d0 - GameData_21c97c8) << 6) - 1;
        }
        v17 = v24 - 1;
        GameData_21c97e8 = v24 - 1;
        if ((unsigned __int64)(v33 - (v24 + GameData_21c97e0) + 1) >= 0x400) {
          v34 = *(_QWORD*)(GameData_21c97d0 - 8);
          if (v34 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
              v35 = 128;
            }
            else {
              v35 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v18 + v35, v34);
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
    v36 = GameData_21c9770;
    v37 = ((GameData_21c9770 - GameData_21c9768) << 6) - 1;
    if (GameData_21c9770 == GameData_21c9768) {
      v37 = 0;
    }
    *(_BYTE*)(v46 + 248) = 0;
    v38 = GameData_21c9788--;
    if ((unsigned __int64)(v37 - (v38 + GameData_21c9780) + 1) >= 0x400) {
      v39 = *(_QWORD*)(v36 - 8);
      if (v39 != 0) {
        v40 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v40 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v39);
        v36 = GameData_21c9770;
      }
      GameData_21c9770 = v36 - 8;
    }
    v41 = GameData_21c97a0;
    v42 = GameData_21c97b8;
    v43 = ((GameData_21c97a0 - GameData_21c9798) << 6) - 1;
    if (GameData_21c97a0 == GameData_21c9798) {
      v43 = 0;
    }
    --GameData_21c97b8;
    if ((unsigned __int64)(v43 - (v42 + GameData_21c97b0) + 1) >= 0x400) {
      v44 = *(_QWORD*)(GameData_21c97a0 - 8);
      if (v44 != 0) {
        v45 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v45 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, v44);
        v41 = GameData_21c97a0;
      }
      GameData_21c97a0 = v41 - 8;
    }
  }
}

#pragma GCC visibility pop
