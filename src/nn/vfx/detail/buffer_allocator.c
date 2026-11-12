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
__int64 BufferAllocator_5b4450(__int64, __int64, char);
__int64 BufferAllocator_5b56a0(__int64, __int64);
__int64 GameRoutine_5d2530(_QWORD, _QWORD);
__int64 BufferAllocator_5b2c60(__int64 result);
__int64 BufferAllocator_5b2ef0(__int64 result);
__int64 BufferAllocator_5b56a0(__int64 a1, __int64 a2);
__int64 BufferAllocator_5b57b0(__int64 a1);

__int64 BufferAllocator_5b2c60(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  void (*v5)(_QWORD);
  void (*v6)(_QWORD);
  __int64 (*v7)(_QWORD);
  __int64 v8;
  __int64 v9;
  float v10;
  __int64 v11;
  float v12;
  int v13;
  __int64 v14;
  char* v15;
  float v16;
  float* v17;
  float v18;
  int v19;
  char* v20;
  float v21;
  float* v22;
  float v23;
  int v24;
  float v25;
  float* v26;
  float v27;
  int v28;
  char* v29;
  struct {
    __int64 v30;
    __int64 v31;
    __int64 v32;
    float v33;
    int v34;
    __int64 v35;
  } v30_;

  v1 = *(_QWORD*)(result + 1008);
  v2 = *(_QWORD*)(result + 992);
  v3 = *(_QWORD*)(result + 1000);
  v4 = result;
  if (v1 != 0) {
    v5 = *(void (**)(_QWORD))(v1 + 64);
    if (v2 != 0) {
      goto LABEL_3;
    }
  }
  else {
    v5 = nullptr;
    if (v2 != 0) {
    LABEL_3:
      v6 = *(void (**)(_QWORD))(v2 + 64);
      if (v3 != 0) {
        goto LABEL_4;
      }
    LABEL_8:
      v7 = nullptr;
      if (v5 != nullptr) {
        goto LABEL_11;
      }
    LABEL_9:
      if (v6 == nullptr && v7 == nullptr) {
        return result;
      }
      goto LABEL_11;
    }
  }
  v6 = nullptr;
  if (v3 == 0) {
    goto LABEL_8;
  }
LABEL_4:
  v7 = *(__int64 (**)(_QWORD))(v3 + 64);
  if (v5 == nullptr) {
    goto LABEL_9;
  }
LABEL_11:
  if (*(int*)(result + 40) >= 1) {
    v8 = 0;
    if (v5 != nullptr) {
      if (v6 != nullptr) {
        if (v7 != nullptr) {
          v9 = 0;
          do {
            v10 = *(float*)(v4 + 68);
            v11 = *(_QWORD*)(v4 + 176) + v8;
            v12 = *(float*)(v11 + 8);
            v13 = *(_DWORD*)(v11 + 12);
            v30_.v32 = v4;
            v30_.v35 = (unsigned int)v9;
            v30_.v33 = v10 - v12;
            v30_.v34 = v13;
            v30_.v30 = *(_QWORD*)(v11 + 16);
            v30_.v31 = *(_QWORD*)(v11 + 24);
            v5(&v30_.v30);
            v6(&v30_.v30);
            result = v7(&v30_.v30);
            ++v9;
            *(_QWORD*)(*(_QWORD*)(v4 + 176) + v8 + 24) = 0;
            v14 = *(_QWORD*)(v4 + 176) + v8;
            v8 += 32;
            *(_QWORD*)(v14 + 16) = 0;
          } while (v9 < *(int*)(v4 + 40));
        }
        else {
          do {
            v25 = *(float*)(v4 + 68);
            v26 = (float*)((char*)v7 + *(_QWORD*)(v4 + 176));
            v27 = v26[2];
            v28 = *((_DWORD*)v26 + 3);
            v30_.v32 = v4;
            v30_.v35 = (unsigned int)v8;
            v30_.v33 = v25 - v27;
            v30_.v34 = v28;
            v30_.v30 = *((_QWORD*)v26 + 2);
            v30_.v31 = *((_QWORD*)v26 + 3);
            v5(&v30_.v30);
            result = ((__int64 (*)(__int64*))v6)(&v30_.v30);
            ++v8;
            *(_QWORD*)((char*)v7 + *(_QWORD*)(v4 + 176) + 24) = 0;
            v29 = (char*)v7 + *(_QWORD*)(v4 + 176);
            v7 = (__int64 (*)(_QWORD))((char*)v7 + 32);
            *((_QWORD*)v29 + 2) = 0;
          } while (v8 < *(int*)(v4 + 40));
        }
      }
      else {
        do {
          v21 = *(float*)(v4 + 68);
          v22 = (float*)((char*)v6 + *(_QWORD*)(v4 + 176));
          v23 = v22[2];
          v24 = *((_DWORD*)v22 + 3);
          v30_.v32 = v4;
          v30_.v35 = (unsigned int)v8;
          v30_.v33 = v21 - v23;
          v30_.v34 = v24;
          v30_.v30 = *((_QWORD*)v22 + 2);
          v30_.v31 = *((_QWORD*)v22 + 3);
          result = ((__int64 (*)(__int64*))v5)(&v30_.v30);
          if (v7 != nullptr) {
            result = v7(&v30_.v30);
          }
          ++v8;
          *(_QWORD*)((char*)v6 + *(_QWORD*)(v4 + 176) + 24) = 0;
          v20 = (char*)v6 + *(_QWORD*)(v4 + 176);
          v6 = (void (*)(_QWORD))((char*)v6 + 32);
          *((_QWORD*)v20 + 2) = 0;
        } while (v8 < *(int*)(v4 + 40));
      }
    }
    else {
      do {
        v16 = *(float*)(v4 + 68);
        v17 = (float*)((char*)v5 + *(_QWORD*)(v4 + 176));
        v18 = v17[2];
        v19 = *((_DWORD*)v17 + 3);
        v30_.v32 = v4;
        v30_.v35 = (unsigned int)v8;
        v30_.v33 = v16 - v18;
        v30_.v34 = v19;
        v30_.v30 = *((_QWORD*)v17 + 2);
        v30_.v31 = *((_QWORD*)v17 + 3);
        if (v6 != nullptr) {
          result = ((__int64 (*)(__int64*))v6)(&v30_.v30);
        }
        if (v7 != nullptr) {
          result = v7(&v30_.v30);
        }
        ++v8;
        *(_QWORD*)((char*)v5 + *(_QWORD*)(v4 + 176) + 24) = 0;
        v15 = (char*)v5 + *(_QWORD*)(v4 + 176);
        v5 = (void (*)(_QWORD))((char*)v5 + 32);
        *((_QWORD*)v15 + 2) = 0;
      } while (v8 < *(int*)(v4 + 40));
    }
  }
  return result;
}

__int64 BufferAllocator_5b2ef0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 (*v5)(__int64);
  __int64 (*v6)(__int64);
  __int64 (*v7)(__int64);

  v1 = result;
  v2 = *(_QWORD*)(*(_QWORD*)result + 1008LL);
  v3 = *(_QWORD*)(*(_QWORD*)result + 992LL);
  v4 = *(_QWORD*)(*(_QWORD*)result + 1000LL);
  if (v2 != 0) {
    v5 = *(__int64 (**)(__int64))(v2 + 48);
    if (v5 != nullptr) {
      result = v5(result);
    }
  }
  if (v3 != 0) {
    v6 = *(__int64 (**)(__int64))(v3 + 48);
    if (v6 != nullptr) {
      result = v6(v1);
    }
  }
  if (v4 != 0) {
    v7 = *(__int64 (**)(__int64))(v4 + 48);
    if (v7 != nullptr) {
      return v7(v1);
    }
  }
  return result;
}

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

__int64 BufferAllocator_5b56a0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int64 v7;

  if (a2 != 0) {
    v2 = a2;
    do {
      v4 = v2;
      v2 = *(_QWORD*)(v2 + 128);
      if (*(_DWORD*)(v4 + 24) == *(_DWORD*)(a1 + 44) &&
          *(_QWORD*)(v4 + 152) != 0) {
        for (i = 0; i != 16; ++i) {
          v6 = *(_QWORD*)(v4 + 1088 + 8 * i);
          while (v6 != 0) {
            v7 = v6;
            v6 = *(_QWORD*)(v6 + 128);
            if (*(_DWORD*)(v7 + 24) == *(_DWORD*)(a1 + 44) &&
                *(_QWORD*)(v7 + 152) != 0) {
              BufferAllocator_5b4450(v7, *(_QWORD*)a1, 1);
              GameRoutine_5d2530(*(_QWORD*)(a1 + 32), v7);
            }
          }
        }
        BufferAllocator_5b4450(v4, *(_QWORD*)a1, 1);
        GameRoutine_5d2530(*(_QWORD*)(a1 + 32), v4);
      }
    } while (v2 != 0);
  }
  return 1;
}

__int64 BufferAllocator_5b57b0(__int64 a1)
{
  __int64 v1;
  void (*v3)(_QWORD*);
  _QWORD v5[2];

  v1 = *(_QWORD*)(a1 + 352);
  if (v1 != 0) {
    BufferAllocator_5b56a0(a1, v1);
    *(_QWORD*)(a1 + 352) = 0;
    *(_DWORD*)(a1 + 360) = 0;
  }
  BufferAllocator_5b56a0(a1, *(_QWORD*)(a1 + 336));
  v3 = *(void (**)(_QWORD*))(a1 + 584);
  if (v3 != nullptr) {
    v5[0] = *(_QWORD*)(a1 + 32);
    v5[1] = a1;
    v3(v5);
    *(_QWORD*)(a1 + 584) = 0;
  }
  *(_BYTE*)(a1 + 12) = 0;
  *(_DWORD*)(a1 + 44) = -1;
  return 1;
}

#pragma GCC visibility pop
