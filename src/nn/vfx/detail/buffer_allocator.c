#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5fca00(_QWORD);
__int64 GameRoutine_5fcb10(_QWORD, _QWORD);
__int64 GameRoutine_5fe300(_QWORD);
__int64 GameRoutine_5fe3b0(_QWORD, _QWORD);
extern __int64* GameData_21363f0;
void GameRoutine_651250(void*, unsigned __int64);
__int64 BufferAllocator_Unknown2(__int64 a1, __int64 a2);
__int64 BufferAllocator_5b4d20(__int64 result, __int64 a2, char a3);
__int64 BufferAllocator_5b4e20(__int64 result);
__int64 BufferAllocator_Destructor(_QWORD* a1);
void BufferAllocator_DeletingDestructor(_QWORD* a1);

__int64 BufferAllocator_Unknown2(__int64 a1, __int64 a2)
{
  __int64* i;
  __int64* v5;
  __int64 v6;

  for (i = *(__int64**)(a1 + 408); i != (__int64*)(a1 + 400);
       i = *(__int64**)(a1 + 408)) {
    v5 = (__int64*)i[1];
    v6 = *v5;
    *(_QWORD*)(*i + 8) = v5;
    *v5 = *i;
    *(_QWORD*)(v6 + 8) = i;
    *i = v6;
  }
  GameRoutine_5fcb10(a1 + 8, a2);
  return GameRoutine_5fe3b0(a1 + 80, a2);
}

__int64 BufferAllocator_5b4d20(__int64 result, __int64 a2, char a3)
{
  __int64* v3;
  __int64** v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  _QWORD* v9;
  __int64 v10;

  if (a2 != 0) {
    v3 = (__int64*)(result + 384);
    v4 = (__int64**)(result + 392);
    if ((a3 & 1) != 0) {
      while (1) {
        v5 = *v4;
        if (*v4 == v3) {
          break;
        }
        v4 = (__int64**)(v5 + 1);
        if (*(v5 - 2) == a2) {
          *(v5 - 2) = 0;
          *(_QWORD*)(result + 440) -= *(v5 - 1);
          v6 = (__int64*)v5[1];
          v7 = *v6;
          *(_QWORD*)(*v5 + 8) = v6;
          *v6 = *v5;
          *(_QWORD*)(v7 + 8) = v5;
          *v5 = v7;
          *(_QWORD*)(result + 464) = v5 - 3;
          --*(_DWORD*)(result + 432);
          return result;
        }
      }
    }
    else {
      v8 = *v4;
      if (*v4 != v3) {
        while (*(v8 - 2) != a2) {
          v8 = (__int64*)v8[1];
          if (v8 == v3) {
            return result;
          }
        }
        v10 = v8[2];
        v9 = v8 + 2;
        *((_DWORD*)v9 - 10) = *(_DWORD*)(result + 416);
        *v9 = *(_QWORD*)(result + 400);
        *(_QWORD*)(v10 + 8) = result + 400;
        *(_QWORD*)(*(_QWORD*)(result + 400) + 8LL) = v9;
        *(_QWORD*)(result + 400) = v10;
      }
    }
  }
  return result;
}

__int64 BufferAllocator_5b4e20(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  int v3;
  __int64 v4;
  __int64** v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;

  v1 = *(_QWORD**)(result + 408);
  while (v1 != (_QWORD*)(result + 400)) {
    v2 = v1;
    v1 = (_QWORD*)v1[1];
    v3 = *((_DWORD*)v2 - 10);
    if (v3 != 0) {
      *((_DWORD*)v2 - 10) = v3 - 1;
    }
    else {
      v4 = *v1;
      *(_QWORD*)(*v2 + 8LL) = v1;
      *v1 = *v2;
      *(_QWORD*)(v4 + 8) = v2;
      *v2 = v4;
      v5 = (__int64**)(result + 392);
      v6 = *(v2 - 4);
      while (1) {
        v7 = *v5;
        if (*v5 == (__int64*)(result + 384)) {
          break;
        }
        v5 = (__int64**)(v7 + 1);
        if (*(v7 - 2) == v6) {
          *(v7 - 2) = 0;
          *(_QWORD*)(result + 440) -= *(v7 - 1);
          v8 = (__int64*)v7[1];
          v9 = *v8;
          *(_QWORD*)(*v7 + 8) = v8;
          *v8 = *v7;
          *(_QWORD*)(v9 + 8) = v7;
          *v7 = v9;
          *(_QWORD*)(result + 464) = v7 - 3;
          --*(_DWORD*)(result + 432);
          break;
        }
      }
    }
  }
  return result;
}

__int64 BufferAllocator_Destructor(_QWORD* a1)
{
  *a1 = GameData_21363f0 + 2;
  GameRoutine_5fe300(a1 + 10);
  return GameRoutine_5fca00(a1 + 1);
}

void BufferAllocator_DeletingDestructor(_QWORD* a1)
{
  *a1 = GameData_21363f0 + 2;
  GameRoutine_5fe300(a1 + 10);
  GameRoutine_5fca00(a1 + 1);
  GameRoutine_651250(a1, 0x1E8u);
}

#pragma GCC visibility pop
