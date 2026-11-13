#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_ce90(unsigned int**);
unsigned __int128
GameRoutine_ce90_pair(unsigned int**) __asm__("GameRoutine_ce90");
extern unsigned int GameData_1b37d88[29];
void __attribute__((noreturn)) GameHr_4c20();
void __attribute__((noreturn)) timeline_4c1c();
unsigned int* timeline_cca0(unsigned int* result, unsigned __int64 a2,
                            unsigned int* a3, __int64 a4);
void __attribute__((noreturn)) timeline_4c1c() { GameHr_4c20(); }

unsigned int* timeline_cca0(unsigned int* result, unsigned __int64 a2,
                            unsigned int* a3, __int64 a4)
{
  unsigned __int64 v4;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned int* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned int* v18;
  unsigned int* v19;
  __int64 v20;
  struct {
    unsigned int* v21;
    unsigned __int64 v22;
  } v21_;
  unsigned int* v23[2];

  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v21_.v21 = result;
  v21_.v22 = a2;
  if (a2 == a4) {
    return result;
  }
  v4 = *result;
  if (a2 < v4) {
    v6 = 0;
    v7 = *((_QWORD*)result + 1) + 16 * a2;
    v8 = *a3;
    v9 = (unsigned int*)(a4 - 1);
    if (a4 - 1 >= v8) {
      goto LABEL_4;
    }
  LABEL_8:
    v11 = *((_QWORD*)a3 + 1) + 16LL * (_QWORD)v9;
    if (v6 != 0) {
      goto LABEL_5;
    }
  LABEL_9:
    v14 = v11 + 16;
    goto LABEL_15;
  }
  v13 = __clz((unsigned int)(a2 - v4 + 16));
  v6 = 28 - v13;
  v7 = *(_QWORD*)(*((_QWORD*)result + 2) + 8 * (27 - v13) + 8) +
       16LL * ((_DWORD)a2 - (_DWORD)v4 - GameData_1b37d88[28 - v13]);
  v8 = *a3;
  v9 = (unsigned int*)(a4 - 1);
  if (a4 - 1 < v8) {
    goto LABEL_8;
  }
LABEL_4:
  v10 = __clz((unsigned int)((_DWORD)v9 - v8 + 16));
  v11 = *(_QWORD*)(*((_QWORD*)a3 + 2) + 8 * (27 - v10) + 8) +
        16LL * ((_DWORD)v9 - (_DWORD)v8 - GameData_1b37d88[28 - v10]);
  if (v6 == 28 - v10) {
    goto LABEL_9;
  }
LABEL_5:
  if (v6 != 0) {
    v4 = 8LL << v6;
    v12 = *(_QWORD*)(*((_QWORD*)result + 2) + 8 * v6);
  }
  else {
    v12 = *((_QWORD*)result + 1);
  }
  v14 = v12 + 16 * v4;
LABEL_15:
  while (1) {
    if (v7 == v14) {
      v23[0] = a3;
      v23[1] = v9;
      result = (unsigned int*)({
        unsigned __int128 r_ = GameRoutine_ce90_pair(v23);
        v15 = COERCE_AS(__typeof__(v15), (unsigned long long)(r_ >> 64));
        (__int64)(unsigned long long)r_;
      });
      v16 = *v21_.v21;
      v17 = 28LL - __clz((unsigned int)(v21_.v22 - v16 + 16));
      v18 = v21_.v22 >= v16 ? (unsigned int*)v17 : nullptr;
      if (v18 == result) {
        break;
      }
      v19 = result;
      v20 = v15;
      v21_.v22 = GameData_1b37d88[(_QWORD)v18 + 1] + v16;
      result = (unsigned int*)({
        unsigned __int128 r_ = GameRoutine_ce90_pair(&v21_.v21);
        v15 = COERCE_AS(__typeof__(v15), (unsigned long long)(r_ >> 64));
        (__int64)(unsigned long long)r_;
      });
      if (result == v19) {
        v14 = v20 + 16;
      }
      else {
        v14 = result != nullptr
                  ? *(_QWORD*)(*((_QWORD*)v21_.v21 + 2) +
                               8LL * ((_QWORD)result - 1) + 8) +
                        16 * (16LL << ((unsigned __int8)result - 1))
                  : *((_QWORD*)v21_.v21 + 1) + 16LL * *v21_.v21;
      }
      if (v14 == v7) {
        break;
      }
    }
    v7 += (v14 - v7) & 0xFFFFFFFFFFFFFFF0LL;
  }
  return result;
}

#pragma GCC visibility pop
