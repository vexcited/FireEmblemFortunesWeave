#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_66bfc0(_QWORD);
__int64 GameRoutine_92bcc0(_QWORD);
__int64 GameRoutine_930580(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_930d50(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21f4018;
extern __int64 GameData_21f4058;
extern __int64 GameData_21f4098;
extern __int64 GameData_21f40d8;
extern __int64 GameData_21f4118;
extern __int64 GameData_21f4158;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 RideFile_Unknown4(_QWORD* a1);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_HashString(__int64 result);
extern _UNKNOWN GameData_1a90d8a;
extern _UNKNOWN GameData_1a94d35;
extern _UNKNOWN GameData_1abfa88;
extern _UNKNOWN GameData_1ade134;
extern _UNKNOWN GameData_1ae1fe1;
extern _UNKNOWN GameData_1af51eb;
extern _UNKNOWN GameData_21f41f8;
extern __int64 GameData_21c99a8;
extern __int64 GameData_21f4198[];
extern __int64 GameData_21f41a0;
extern __int64 GameData_21f41a8;
extern __int64 GameData_21f41b0;
extern __int64 GameData_21f41b8;
extern __int64 GameData_21f41c0;
extern __int64 GameData_21f41c8;
extern __int64 GameData_21f41d0;
extern __int64 GameData_21f41d8;
extern __int64 GameData_21f41e0;
extern __int64 GameData_21f41e8;
extern __int64 GameData_21f41f0;
__int64 RideFile_92bcc0(unsigned __int8* a1);

__int64 RideFile_Unknown4(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int** v19;
  unsigned int** v20;
  unsigned int* v21;
  __int64 v22;
  _BYTE v23[4];

  v23[0] = 0;
  v2 = GameRoutine_92bcc0(v23);
  GameRoutine_930d50(&GameData_21f4018, v2);
  v23[0] = 1;
  v3 = GameRoutine_92bcc0(v23);
  GameRoutine_930d50(&GameData_21f4058, v3);
  v23[0] = 2;
  v4 = GameRoutine_92bcc0(v23);
  GameRoutine_930d50(&GameData_21f4098, v4);
  v23[0] = 3;
  v5 = GameRoutine_92bcc0(v23);
  GameRoutine_930d50(&GameData_21f40d8, v5);
  v23[0] = 4;
  v6 = GameRoutine_92bcc0(v23);
  GameRoutine_930d50(&GameData_21f4118, v6);
  v23[0] = 5;
  v7 = GameRoutine_92bcc0(v23);
  result = GameRoutine_930d50(&GameData_21f4158, v7);
  if (a1[19] != 0) {
    v9 = (_QWORD*)a1[18];
    if (v9 != nullptr) {
      v10 = fw_memory_g_heap_manager_ptr;
      do {
        v11 = (_QWORD*)*v9;
        if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v12);
        v9 = v11;
      } while (v11 != nullptr);
    }
    v13 = a1[17];
    a1[18] = 0;
    if (v13 != 0) {
      v14 = v13 & 7;
      if (v13 >= 8) {
        v16 = v13 & 0xFFFFFFFFFFFFFFF8LL;
        v15 = 0;
        do {
          *(_QWORD*)(a1[16] + 8 * v15) = 0;
          *(_QWORD*)(a1[16] + 8 * v15 + 8) = 0;
          *(_QWORD*)(a1[16] + 8 * v15 + 16) = 0;
          *(_QWORD*)(a1[16] + 8 * v15 + 24) = 0;
          *(_QWORD*)(a1[16] + 8 * v15 + 32) = 0;
          *(_QWORD*)(a1[16] + 8 * v15 + 40) = 0;
          *(_QWORD*)(a1[16] + 8 * v15 + 48) = 0;
          v17 = a1[16] + 8 * v15;
          v15 += 8;
          *(_QWORD*)(v17 + 56) = 0;
        } while (v16 != v15);
      }
      else {
        v15 = 0;
      }
      if (v14 != 0) {
        v18 = 8 * v15;
        do {
          --v14;
          *(_QWORD*)(a1[16] + v18) = 0;
          v18 += 8;
        } while (v14 != 0);
      }
    }
    a1[19] = 0;
  }
  v19 = (unsigned int**)a1[8];
  v20 = (unsigned int**)a1[9];
  while (v19 != v20) {
    v21 = *v19;
    v22 = **v19;
    if ((_DWORD)v22 != 0) {
      GameRoutine_930580(a1 + 1, v22, *v19);
    }
    result = GameRoutine_66bfc0(v21);
    if ((_DWORD)result != 0) {
      result = GameRoutine_930580(a1 + 1, (unsigned int)result, v21);
    }
    ++v19;
  }
  return result;
}

__int64 RideFile_92bcc0(unsigned __int8* a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 result;
  __int64 v10;
  int v11;
  unsigned __int8* v12;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f41f8,
                            memory_order_acquire) &
       1) == 0) {
    v12 = a1;
    v11 = __cxa_guard_acquire(&GameData_21f41f8);
    a1 = v12;
    if (v11 != 0) {
      GameData_21f41a0 = (__int64)&GameData_1a94d35;
      GameData_21f4198[0] = game_HashString((__int64)&GameData_1a94d35);
      GameData_21f41b0 = (__int64)&GameData_1ae1fe1;
      GameData_21f41a8 = game_HashString((__int64)&GameData_1ae1fe1);
      GameData_21f41c0 = (__int64)&GameData_1af51eb;
      GameData_21f41b8 = game_HashString((__int64)&GameData_1af51eb);
      GameData_21f41d0 = (__int64)&GameData_1a90d8a;
      GameData_21f41c8 = game_HashString((__int64)&GameData_1a90d8a);
      GameData_21f41e0 = (__int64)&GameData_1ade134;
      GameData_21f41d8 = game_HashString((__int64)&GameData_1ade134);
      GameData_21f41f0 = (__int64)&GameData_1abfa88;
      GameData_21f41e8 = game_HashString((__int64)&GameData_1abfa88);
      __cxa_guard_release(&GameData_21f41f8);
      a1 = v12;
    }
  }
  v1 = GameData_21f4198[2 * *a1];
  if (v1 != 0) {
    v2 = *(_QWORD*)(GameData_21c99a8 + 96);
    if (v2 != 0 && *(_QWORD*)(GameData_21c99a8 + 112) != 0) {
      v4 = v2 - 1;
      if ((v2 & (v2 - 1)) != 0) {
        v5 = GameData_21f4198[2 * *a1];
        if (v1 >= v2) {
          v5 = v1 % v2;
        }
      }
      else {
        v5 = v4 & v1;
      }
      v6 = *(_QWORD**)(*(_QWORD*)(GameData_21c99a8 + 88) + 8 * v5);
      if (v6 != nullptr) {
        v7 = (_QWORD*)*v6;
        if (v7 != nullptr) {
          if ((v2 & v4) == 0) {
            while (1) {
              v10 = v7[1];
              if (v10 == v1) {
                if (v7[2] == v1) {
                  return v7[3];
                }
              }
              else if ((v10 & v4) != v5) {
                return 0;
              }
              v7 = (_QWORD*)*v7;
              result = 0;
              if (v7 == nullptr) {
                return result;
              }
            }
          }
          do {
            v8 = v7[1];
            if (v8 == v1) {
              if (v7[2] == v1) {
                return v7[3];
              }
            }
            else {
              if (v8 >= v2) {
                v8 %= v2;
              }
              if (v8 != v5) {
                return 0;
              }
            }
            v7 = (_QWORD*)*v7;
          } while (v7 != nullptr);
        }
      }
    }
  }
  return 0;
}

#pragma GCC visibility pop
