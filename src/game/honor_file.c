#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7d6200(_QWORD, _QWORD);
extern __int64 GameData_21f8118;
extern __int64 GameData_21f8120;
extern __int64 GameData_21f8138;
extern __int64 GameData_21f8140;
extern __int64* GameData_212c9a0[147];
extern int GameData_21f8110;
extern int GameData_21f8130;
__int64 HonorFile_Unknown4();
void HonorFile_Unknown5();
void HonorFile_9c6380();
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e5c60(void);
__attribute__((swiftcall)) void HonorFile_9c7620(PSEUDO_X8 x8_,
                                                 unsigned __int16* result);

__int64 HonorFile_Unknown4()
{
  __int64* v0;
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 result;
  __int64 v6;

  v0 = GameData_212c9a0[0];
  GameData_21f8110 = 0;
  v1 = *GameData_212c9a0[0];
  GameData_21f8120 = GameData_21f8118;
  v2 = *(__int64**)(v1 + 64);
  v3 = *(__int64**)(v1 + 72);
  if (v2 != v3) {
    do {
      v4 = *v2;
      if (*(_BYTE*)(*v2 + 32) != 0 && *(unsigned __int8*)(v4 + 33) <= 1u) {
        GameData_21f8110 += *(unsigned __int16*)(v4 + 34);
        result = GameRoutine_7d6200(&GameData_21f8118, &GameData_21f8110);
      }
      ++v2;
    } while (v2 != v3);
    v2 = *(__int64**)(*v0 + 64);
    v3 = *(__int64**)(*v0 + 72);
  }
  GameData_21f8130 = 0;
  GameData_21f8140 = GameData_21f8138;
  while (v2 != v3) {
    v6 = *v2;
    if (*(_BYTE*)(*v2 + 32) != 0 && *(unsigned __int8*)(v6 + 33) <= 3u) {
      GameData_21f8130 += *(unsigned __int16*)(v6 + 34);
      result = GameRoutine_7d6200(&GameData_21f8138, &GameData_21f8130);
    }
    ++v2;
  }
  return result;
}

void HonorFile_Unknown5()
{
  GameData_21f8110 = 0;
  GameData_21f8120 = GameData_21f8118;
  GameData_21f8130 = 0;
  GameData_21f8140 = GameData_21f8138;
}

void HonorFile_9c6380()
{
  GameData_21f8110 = 0;
  GameData_21f8120 = GameData_21f8118;
  GameData_21f8130 = 0;
  GameData_21f8140 = GameData_21f8138;
}

__attribute__((swiftcall)) void HonorFile_9c7620(PSEUDO_X8 x8_,
                                                 unsigned __int16* result)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  unsigned __int16* v4;
  char* v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  if (*result != 0) {
    v3 = 8;
    v4 = result;
    v5 = nullptr;
    v6 = 0;
    v7 = 0;
    do {
      v9 = *(_QWORD*)(*((_QWORD*)v4 + 1) + v3);
      v10 = a2[2];
      if ((unsigned __int64)v5 < v10) {
        *(_QWORD*)v5 = v9;
        v5 += 8;
      }
      else {
        v11 = &v5[-v7];
        v12 = (__int64)&v5[-v7] >> 3;
        v13 = v12 + 1;
        if ((unsigned __int64)(v12 + 1) >> 61 != 0) {
          *a2 = v7;
          GameRoutine_6e5c60();
        }
        v14 = v10 - v7;
        if (v14 >> 2 > v13) {
          v13 = v14 >> 2;
        }
        if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
          v15 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v15 = v13;
        }
        if (v15 != 0) {
          if (v15 >> 61 != 0) {
            *a2 = v7;
            GameRoutine_60a210(result);
          }
          v16 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0);
        }
        else {
          v16 = 0;
        }
        v17 = v16 + 8 * v15;
        v18 = &v5[-v7];
        v19 = (__int64)&v11[v16 + -8 * v12];
        *(_QWORD*)&v11[v16] = v9;
        v5 = &v11[v16 + 8];
        result = (unsigned __int16*)memcpy(v19, v7, v18);
        a2[1] = (__int64)v5;
        a2[2] = v17;
        if (v7 != 0) {
          v20 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v20 = 56;
          }
          result = (unsigned __int16*)nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v7);
        }
        v7 = v19;
      }
      v8 = *v4;
      ++v6;
      v3 += 16;
      a2[1] = (__int64)v5;
    } while (v6 < v8);
  }
  else {
    v7 = 0;
  }
  *a2 = v7;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
