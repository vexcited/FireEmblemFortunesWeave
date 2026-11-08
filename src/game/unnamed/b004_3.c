#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1f914e8[])();
extern __int64 (*GameData_1f95160[])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212c880[5];
extern __int64 GameData_212cf80[5];
extern __int64 GameData_212cf88[4];
extern __int64* GameData_212d198[2];
extern __int64 GameData_21c6968;
extern __int64 GameData_21c6978;
extern __int64 GameData_21c9668;
extern __int64 GameData_21c9670;
extern __int64 GameData_21c9680;
extern __int64 GameData_21c9688;
extern __int64 GameData_21ca310;
extern int GameData_21d9700;
__int64 GameRoutine_11e8ae0(_QWORD, _QWORD);
__int64 GameRoutine_1210350(_QWORD, _QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
void __attribute__((noreturn)) GameRoutine_638240(const char*);
unsigned __int8* GameRoutine_638380(unsigned __int8* result, unsigned __int8*,
                                    __int64);
__int64* GameRoutine_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_662560(_QWORD);
__int64* GameRoutine_674b80(__int64* result, __int64*, __int64*, __int64*,
                            __int64*);
__int64 GameRoutine_67ed20(_QWORD*);
__int64* GameRoutine_6bde00(__int64* result, __int64*, unsigned __int64,
                            __int64*, signed __int64);
__int64 GameRoutine_6c1f80(__int64 result, __int64*, __int64, unsigned __int64,
                           __int64*, signed __int64);
__int64 GameRoutine_6c3050(__int64, __int64, __int64, __int64, __int64,
                           __int64);
__int64 GameRoutine_6c4610(_QWORD);
__int64 GameRoutine_6c4d60(_QWORD);
__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c6da0(__int64);
__int64 GameRoutine_6c6ec0(__int64);
__int64 GameRoutine_6cd010(void);
__int64 GameRoutine_6ce1c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6dd190(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e36c0(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_6e3e20(void);
__int64 GameRoutine_70f550(_QWORD, _QWORD);
__int64 GameRoutine_712a40(_QWORD);
__int64 GameRoutine_713480(_QWORD);
__int64 GameRoutine_74e220(_QWORD);
__int64 GameRoutine_7fb7c0(_QWORD);
__int64 GameRoutine_7fc5c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_819160(_QWORD);
__int64 GameRoutine_819400(_QWORD);
__int64 GameRoutine_843420(_QWORD, _QWORD);
__int64 GameRoutine_84cc00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_84cf20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_84d980(_QWORD, _QWORD);
__int64 GameRoutine_84ec80(_QWORD, _QWORD);
__int64 GameRoutine_936cf0(_QWORD, _QWORD);
__int64 GameRoutine_93c2e0(_QWORD, _QWORD);
__int64 GameRoutine_960280(_QWORD);
__int64 GameRoutine_97b2f0(_QWORD);
__int64 GameRoutine_a82380(_QWORD);

bool GameHr_6390c0(__int64 a1, unsigned __int8** a2, unsigned __int8* a3,
                   __int64 a4)
{
  unsigned __int8* v4;
  int v5;
  unsigned __int8* v6;
  int v7;
  unsigned __int8** v9;
  unsigned __int8* v11;
  int v12;
  __int16 v13;
  unsigned __int8* v14;
  unsigned __int8* v15;
  unsigned __int64 v16;
  unsigned __int8* v17;
  int v18;
  __int64 v19;

  v4 = *a2;
  v5 = **a2;
  if (v5 == 46) {
    v6 = v4 + 1;
    *a2 = v4 + 1;
    if (v4 + 1 == a3) {
      GameRoutine_638240(
          "End of input while parsing format specifier precision");
    }
    v7 = *v6;
    if (v7 == 123) {
      *a2 = v4 + 2;
      if (v4 + 2 == a3) {
        GameRoutine_638240("End of input while parsing an argument index");
      }
      v9 = a2;
      v11 = GameRoutine_638380(v4 + 2, a3, a4);
      if (a3 == v11 || *v11 != 125) {
        GameRoutine_638240("The argument index is invalid");
      }
      v13 = *(_WORD*)(a1 + 2);
      v14 = v11 + 1;
      *(_DWORD*)(a1 + 8) = v12;
      a2 = v9;
      *(_WORD*)(a1 + 2) = v13 | 0x8000;
    }
    else {
      if ((unsigned int)(v7 - 58) <= 0xFFFFFFF5) {
        GameRoutine_638240("The precision option does not contain a value or "
                           "an argument index");
      }
      v15 = v4 + 10;
      LODWORD(v16) = v7 - 48;
      v14 = v4 + 2;
      if (a3 - v6 <= 9) {
        v17 = a3;
      }
      else {
        v17 = v15;
      }
      if (v14 == v17) {
        v17 = v14;
        if (v14 == a3) {
        LABEL_23:
          v14 = a3;
        }
        else {
        LABEL_17:
          v19 = *v17;
          if ((unsigned int)(v19 - 48) > 9) {
            v14 = v17;
          }
          else {
            v16 = v19 + 10LL * (unsigned int)v16 - 48;
            if (v16 >> 31 != 0 ||
                (v14 = v6 + 2, v6 + 2 != a3) && (unsigned int)*v14 - 48 <= 9) {
              GameRoutine_638240(
                  "The numeric value of the format specifier is too large");
            }
          }
        }
      }
      else {
        v6 = v17 - 1;
        while (1) {
          v18 = *v14;
          if ((unsigned int)(v18 - 58) < 0xFFFFFFF6) {
            break;
          }
          ++v14;
          LODWORD(v16) = v18 + 10 * v16 - 48;
          if (v14 == v17) {
            if (v17 == a3) {
              goto LABEL_23;
            }
            goto LABEL_17;
          }
        }
      }
      *(_DWORD*)(a1 + 8) = v16;
      *(_WORD*)(a1 + 2) &= ~0x8000u;
    }
    *a2 = v14;
  }
  return v5 == 46;
}

__int64 GameHr_66ac50()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  GameRoutine_a82380(GameData_21c6978);
  v0 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) + 40LL);
  v1 = *(_QWORD*)(v0 + 24);
  if (v1 != 0) {
    v2 = *(_QWORD*)(v0 + 16);
    v3 = *(_QWORD*)(v0 + 24);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                              memory_order_relaxed);
    v4 = GameRoutine_1a0a0c0(v3);
    GameRoutine_1a09c50(v1);
    if (v4 != 0) {
      if (v2 != 0) {
        *(_BYTE*)(*(_QWORD*)(v2 + 288) + 381LL) = 0;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        GameRoutine_1a09c50(v4);
      }
    }
  }
  return GameRoutine_662560(GameData_21c6968);
}

__int64 GameHr_66ae00(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  unsigned __int64 add;
  bool v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v1 = *(_QWORD*)(result + 8);
  v2 = (__int64*)GameData_21c9668;
  v3 = GameData_21c9670;
  if (v1 != 0) {
    v4 = *(_QWORD*)result;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                              memory_order_relaxed);
    if (v2 != (__int64*)v3) {
      while (1) {
        v5 = GameRoutine_1a0a0c0(v1);
        v6 = v2[1];
        v7 = v5 != 0 ? v4 : 0LL;
        if (v6 != 0 && (v8 = GameRoutine_1a0a0c0(v6)) != 0) {
          v9 = v7 == *v2;
          add = atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                 0xFFFFFFFFFFFFFFFFLL);
          v11 = v9;
          if (add == 0) {
            v12 = v8;
            (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
            GameRoutine_1a09c50(v12);
          }
        }
        else {
          v11 = v7 == 0;
        }
        if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          GameRoutine_1a09c50(v5);
        }
        if (v11) {
          break;
        }
        v2 += 2;
        if (v2 == (__int64*)v3) {
          v2 = (__int64*)v3;
          break;
        }
      }
    }
    result = GameRoutine_1a09c50(v1);
  }
  else if (GameData_21c9668 != GameData_21c9670) {
    while (1) {
      result = v2[1];
      if (result == 0) {
        break;
      }
      result = GameRoutine_1a0a0c0(result);
      if (result == 0) {
        break;
      }
      v17 = *v2;
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v18 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = GameRoutine_1a09c50(v18);
      }
      if (v17 == 0) {
        break;
      }
      v2 += 2;
      if (v2 == (__int64*)v3) {
        v2 = (__int64*)v3;
        break;
      }
    }
  }
  v13 = GameData_21c9670;
  if (v2 != (__int64*)GameData_21c9670) {
    v14 = v2 + 2;
    if (v2 + 2 == (__int64*)GameData_21c9670) {
      if (v2 == (__int64*)GameData_21c9670) {
      LABEL_29:
        GameData_21c9670 = (__int64)v2;
        return result;
      }
    }
    else {
      do {
        v16 = *v14;
        v15 = v14[1];
        result = *(v14 - 1);
        *v14 = 0;
        v14[1] = 0;
        *(v14 - 2) = v16;
        *(v14 - 1) = v15;
        if (result != 0) {
          result = GameRoutine_1a09c50(result);
        }
        v14 += 2;
      } while (v14 != (__int64*)v13);
      v13 = GameData_21c9670;
      v2 = v14 - 2;
      if (v14 - 2 == (__int64*)GameData_21c9670) {
        goto LABEL_29;
      }
    }
    do {
      result = *(_QWORD*)(v13 - 8);
      if (result != 0) {
        result = GameRoutine_1a09c50(result);
      }
      v13 -= 16;
    } while ((__int64*)v13 != v2);
    goto LABEL_29;
  }
  return result;
}

__int64 GameHr_66b160(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  unsigned __int64 add;
  bool v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v1 = *(_QWORD*)(result + 8);
  v2 = (__int64*)GameData_21c9680;
  v3 = GameData_21c9688;
  if (v1 != 0) {
    v4 = *(_QWORD*)result;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                              memory_order_relaxed);
    if (v2 != (__int64*)v3) {
      while (1) {
        v5 = GameRoutine_1a0a0c0(v1);
        v6 = v2[1];
        v7 = v5 != 0 ? v4 : 0LL;
        if (v6 != 0 && (v8 = GameRoutine_1a0a0c0(v6)) != 0) {
          v9 = v7 == *v2;
          add = atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                 0xFFFFFFFFFFFFFFFFLL);
          v11 = v9;
          if (add == 0) {
            v12 = v8;
            (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
            GameRoutine_1a09c50(v12);
          }
        }
        else {
          v11 = v7 == 0;
        }
        if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          GameRoutine_1a09c50(v5);
        }
        if (v11) {
          break;
        }
        v2 += 2;
        if (v2 == (__int64*)v3) {
          v2 = (__int64*)v3;
          break;
        }
      }
    }
    result = GameRoutine_1a09c50(v1);
  }
  else if (GameData_21c9680 != GameData_21c9688) {
    while (1) {
      result = v2[1];
      if (result == 0) {
        break;
      }
      result = GameRoutine_1a0a0c0(result);
      if (result == 0) {
        break;
      }
      v17 = *v2;
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v18 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = GameRoutine_1a09c50(v18);
      }
      if (v17 == 0) {
        break;
      }
      v2 += 2;
      if (v2 == (__int64*)v3) {
        v2 = (__int64*)v3;
        break;
      }
    }
  }
  v13 = GameData_21c9688;
  if (v2 != (__int64*)GameData_21c9688) {
    v14 = v2 + 2;
    if (v2 + 2 == (__int64*)GameData_21c9688) {
      if (v2 == (__int64*)GameData_21c9688) {
      LABEL_29:
        GameData_21c9688 = (__int64)v2;
        return result;
      }
    }
    else {
      do {
        v16 = *v14;
        v15 = v14[1];
        result = *(v14 - 1);
        *v14 = 0;
        v14[1] = 0;
        *(v14 - 2) = v16;
        *(v14 - 1) = v15;
        if (result != 0) {
          result = GameRoutine_1a09c50(result);
        }
        v14 += 2;
      } while (v14 != (__int64*)v13);
      v13 = GameData_21c9688;
      v2 = v14 - 2;
      if (v14 - 2 == (__int64*)GameData_21c9688) {
        goto LABEL_29;
      }
    }
    do {
      result = *(_QWORD*)(v13 - 8);
      if (result != 0) {
        result = GameRoutine_1a09c50(result);
      }
      v13 -= 16;
    } while ((__int64*)v13 != v2);
    goto LABEL_29;
  }
  return result;
}

bool GameHr_674d00(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float v8;
  float v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  float v14;
  float v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  float v19;
  float v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  int v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  v2 = a2 - a1;
  if (v2 > 2) {
    if (v2 == 3) {
      v5 = *a1;
      v6 = a1[1];
      v7 = *(a2 - 1);
      v8 = *(float*)(v6 + 32);
      v9 = *(float*)(v7 + 32);
      if (v8 < *(float*)(*a1 + 32)) {
        if (v9 >= v8) {
          *a1 = v6;
          a1[1] = v5;
          v22 = *(a2 - 1);
          if (*(float*)(v22 + 32) < *(float*)(v5 + 32)) {
            a1[1] = v22;
            *(a2 - 1) = v5;
          }
        }
        else {
          *a1 = v7;
          *(a2 - 1) = v5;
        }
        return true;
      }
      if (v9 >= v8) {
        return true;
      }
      a1[1] = v7;
      *(a2 - 1) = v6;
      v21 = a1[1];
    LABEL_49:
      v34 = *a1;
      if (*(float*)(v21 + 32) < *(float*)(*a1 + 32)) {
        *a1 = v21;
        a1[1] = v34;
      }
      return true;
    }
    if (v2 != 4) {
      if (v2 != 5) {
        goto LABEL_13;
      }
      GameRoutine_674b80(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1);
      return true;
    }
    v17 = *a1;
    v16 = a1[1];
    v18 = a1[2];
    v19 = *(float*)(v16 + 32);
    v20 = *(float*)(v18 + 32);
    if (v19 >= *(float*)(*a1 + 32)) {
      if (v20 < v19) {
        a1[1] = v18;
        a1[2] = v16;
        if (*(float*)(v18 + 32) < *(float*)(v17 + 32)) {
          *a1 = v18;
          a1[1] = v17;
        }
        goto LABEL_46;
      }
    }
    else {
      if (v20 < v19) {
        *a1 = v18;
      LABEL_44:
        a1[2] = v17;
        v16 = v17;
        goto LABEL_46;
      }
      *a1 = v16;
      a1[1] = v17;
      if (*(float*)(v18 + 32) < *(float*)(v17 + 32)) {
        a1[1] = v18;
        goto LABEL_44;
      }
    }
    v16 = v18;
  LABEL_46:
    v32 = *(a2 - 1);
    if (*(float*)(v32 + 32) >= *(float*)(v16 + 32)) {
      return true;
    }
    a1[2] = v32;
    *(a2 - 1) = v16;
    v33 = a1[1];
    v21 = a1[2];
    if (*(float*)(v21 + 32) >= *(float*)(v33 + 32)) {
      return true;
    }
    a1[1] = v21;
    a1[2] = v33;
    goto LABEL_49;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 == 2) {
    v3 = *(a2 - 1);
    v4 = *a1;
    if (*(float*)(v3 + 32) < *(float*)(*a1 + 32)) {
      *a1 = v3;
      *(a2 - 1) = v4;
    }
    return true;
  }
LABEL_13:
  v10 = *a1;
  v11 = a1[1];
  v13 = a1 + 2;
  v12 = a1[2];
  v14 = *(float*)(v11 + 32);
  v15 = *(float*)(v12 + 32);
  if (v14 >= *(float*)(*a1 + 32)) {
    if (v15 < v14) {
      a1[1] = v12;
      a1[2] = v11;
      if (*(float*)(v12 + 32) < *(float*)(v10 + 32)) {
        *a1 = v12;
        a1[1] = v10;
      }
    }
  }
  else {
    if (v15 >= v14) {
      *a1 = v11;
      a1[1] = v10;
      if (*(float*)(v12 + 32) >= *(float*)(v10 + 32)) {
        goto LABEL_32;
      }
      a1[1] = v12;
    }
    else {
      *a1 = v12;
    }
    a1[2] = v10;
  }
LABEL_32:
  v23 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v24 = 24;
  v25 = 0;
  while (1) {
    v27 = *v23;
    v28 = *v13;
    if (*(float*)(*v23 + 32) < *(float*)(v28 + 32)) {
      v29 = v24;
      do {
        v30 = v29 - 8;
        *(__int64*)((char*)a1 + v29) = v28;
        if (v29 == 8) {
          v26 = a1;
          goto LABEL_35;
        }
        v31 = (char*)a1 + v29;
        v29 -= 8;
        v28 = *((_QWORD*)v31 - 2);
      } while (*(float*)(v27 + 32) < *(float*)(v28 + 32));
      v26 = (__int64*)((char*)a1 + v30);
    LABEL_35:
      ++v25;
      *v26 = v27;
      if (v25 == 8) {
        return v23 + 1 == a2;
      }
    }
    v13 = v23++;
    v24 += 8;
    if (v23 == a2) {
      return true;
    }
  }
}

__int64* GameHr_6be180(__int64* result, __int64* a2, unsigned __int64 a3,
                       __int64* a4)
{
  __int64 v4;
  __int64 v5;
  __int16 v6;
  int v7;
  __int16 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int16 v17;
  int v18;
  __int16 v19;
  int v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int16 v24;
  int v25;
  int v26;
  __int16 v27;
  int v28;
  unsigned __int64 v29;
  __int64* v30;
  __int64* v34;
  __int64 v35;
  __int64* v36;
  __int64* v37;
  __int64* v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int16 v42;
  int v43;
  __int16 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;

  if (a3 != 0) {
    if (a3 == 2) {
      v4 = *(a2 - 1);
      v5 = *result;
      v6 = *(_WORD*)(v4 + 50);
      if ((*(_BYTE*)(v4 + 58) & 0xFE) == 2) {
        v7 = 256;
      }
      else {
        v7 = 0;
      }
      if ((v6 & 0x20) != 0) {
        v7 -= 2;
      }
      if ((v6 & 0x10) != 0) {
        v7 -= 4;
      }
      v8 = *(_WORD*)(v5 + 50);
      if ((*(_BYTE*)(v5 + 58) & 0xFE) == 2) {
        v9 = 256;
      }
      else {
        v9 = 0;
      }
      if ((v8 & 0x20) != 0) {
        v9 -= 2;
      }
      if ((v8 & 0x10) != 0) {
        v9 -= 4;
      }
      if (v7 <= v9) {
        *a4 = v5;
        v10 = *(a2 - 1);
      }
      else {
        *a4 = v4;
        v10 = *result;
      }
      a4[1] = v10;
    }
    else if (a3 == 1) {
      *a4 = *result;
    }
    else if ((__int64)a3 > 8) {
      v29 = a3 >> 1;
      v30 = result;
      v34 = &result[a3 >> 1];
      v35 = 8 * (a3 >> 1);
      GameRoutine_6bde00(result, v34, v29, a4, v29);
      result = GameRoutine_6bde00(v34, a2, a3 - v29, &a4[v29], a3 - v29);
      if (v35 != 0) {
        v36 = v34;
        v37 = a4;
        v38 = a2;
        v39 = v30;
        while (v36 != a2) {
          v40 = *v36;
          v41 = *v39;
          v42 = *(_WORD*)(*v36 + 50);
          if ((*(_BYTE*)(*v36 + 58) & 0xFE) == 2) {
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
          v44 = *(_WORD*)(v41 + 50);
          if ((*(_BYTE*)(v41 + 58) & 0xFE) == 2) {
            v45 = 256;
          }
          else {
            v45 = 0;
          }
          if ((v44 & 0x20) != 0) {
            v45 -= 2;
          }
          result = (__int64*)(unsigned int)(v45 - 4);
          if ((v44 & 0x10) != 0) {
            v45 -= 4;
          }
          if (v43 > v45) {
            v46 = 8;
          }
          else {
            v40 = *v39;
            v46 = 0;
          }
          v36 = (__int64*)((char*)v36 + v46);
          if (v43 <= v45) {
            v47 = 8;
          }
          else {
            v47 = 0;
          }
          *v37++ = v40;
          v39 = (__int64*)((char*)v39 + v47);
          if (v39 == v34) {
            goto LABEL_95;
          }
        }
        while (v39 != v34) {
          v48 = *v39++;
          *v37++ = v48;
        }
      }
      else {
        v36 = v34;
        v37 = a4;
        v38 = a2;
      LABEL_95:
        while (v36 != v38) {
          v49 = *v36++;
          *v37++ = v49;
        }
      }
    }
    else if (result != a2) {
      v11 = *result++;
      *a4 = v11;
      if (result != a2) {
        v12 = 0;
        v13 = a4;
        v14 = a4;
        do {
          v16 = *v14++;
          v15 = v16;
          v17 = *(_WORD*)(*result + 50);
          if ((*(_BYTE*)(*result + 58) & 0xFE) == 2) {
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
          v19 = *(_WORD*)(v15 + 50);
          if ((*(_BYTE*)(v15 + 58) & 0xFE) == 2) {
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
          if (v18 <= v20) {
            *v14 = *result;
          }
          else {
            v13[1] = v15;
            v21 = a4;
            if (v13 != a4) {
              v22 = v12;
              while (1) {
                v21 = (__int64*)((char*)a4 + v22);
                v23 = *(__int64*)((char*)a4 + v22 - 8);
                v24 = *(_WORD*)(*result + 50);
                if ((*(_BYTE*)(*result + 58) & 0xFE) == 2) {
                  v25 = 256;
                }
                else {
                  v25 = 0;
                }
                if ((v24 & 0x20) != 0) {
                  v25 -= 2;
                }
                if ((v24 & 0x10) != 0) {
                  v26 = v25 - 4;
                }
                else {
                  v26 = v25;
                }
                v27 = *(_WORD*)(v23 + 50);
                if ((*(_BYTE*)(v23 + 58) & 0xFE) == 2) {
                  v28 = 256;
                }
                else {
                  v28 = 0;
                }
                if ((v27 & 0x20) != 0) {
                  v28 -= 2;
                }
                if ((v27 & 0x10) != 0) {
                  v28 -= 4;
                }
                if (v26 <= v28) {
                  break;
                }
                v22 -= 8;
                *v21 = v23;
                if (v22 == 0) {
                  v21 = a4;
                  break;
                }
              }
            }
            *v21 = *result;
          }
          ++result;
          v12 += 8;
          v13 = v14;
        } while (result != a2);
      }
    }
  }
  return result;
}

__int64 GameHr_6c2240(__int64 result, __int64* a2, __int64 a3,
                      unsigned __int64 a4, __int64* a5)
{
  __int64* v5;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64* v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  if (a4 != 0) {
    v5 = a5;
    v8 = (__int64*)result;
    if (a4 == 2) {
      v9 = *(a2 - 1);
      v10 = *(_QWORD*)(a3 + 32);
      v34 = *v8;
      v35 = v9;
      if (v10 == 0) {
        goto LABEL_48;
      }
      result = (*(__int64 (**)(__int64, __int64*, __int64*))(
          *(_QWORD*)v10 + 48LL))(v10, &v35, &v34);
      if ((result & 1) != 0) {
        *v5 = *(a2 - 1);
        v11 = *v8;
      }
      else {
        *v5 = *v8;
        v11 = *(a2 - 1);
      }
      v5[1] = v11;
    }
    else {
      if (a4 == 1) {
        *a5 = *(_QWORD*)result;
        return result;
      }
      if ((__int64)a4 > 8) {
        v22 = a4 >> 1;
        v24 = (__int64*)(result + 8 * (a4 >> 1));
        v25 = 8 * (a4 >> 1);
        GameRoutine_6c1f80(result, v24, a3, v22, a5, v22);
        result = GameRoutine_6c1f80((__int64)v24, a2, a3, a4 - v22, &v5[v22],
                                    a4 - v22);
        if (v25 != 0) {
          v26 = v24;
          while (v26 != a2) {
            v27 = *v26;
            v10 = *(_QWORD*)(a3 + 32);
            v34 = *v8;
            v35 = v27;
            if (v10 == 0) {
              goto LABEL_48;
            }
            result = (*(__int64 (**)(__int64, __int64*, __int64*))(
                *(_QWORD*)v10 + 48LL))(v10, &v35, &v34);
            if ((result & 1) != 0) {
              v28 = v26;
            }
            else {
              v28 = v8;
            }
            if ((result & 1) != 0) {
              v29 = 8;
            }
            else {
              v29 = 0;
            }
            v30 = *v28;
            v26 = (__int64*)((char*)v26 + v29);
            if ((result & 1) != 0) {
              v31 = 0;
            }
            else {
              v31 = 8;
            }
            v8 = (__int64*)((char*)v8 + v31);
            *v5++ = v30;
            if (v8 == v24) {
              goto LABEL_46;
            }
          }
          while (v8 != v24) {
            v32 = *v8++;
            *v5++ = v32;
          }
        }
        else {
          v26 = v24;
        LABEL_46:
          while (v26 != a2) {
            v33 = *v26++;
            *v5++ = v33;
          }
        }
      }
      else if ((__int64*)result != a2) {
        v12 = (__int64*)(result + 8);
        *a5 = *(_QWORD*)result;
        if ((__int64*)(result + 8) != a2) {
          v13 = 0;
          v14 = a5;
          v15 = a5;
          while (1) {
            v16 = *v15++;
            v17 = *v12;
            v10 = *(_QWORD*)(a3 + 32);
            v34 = v16;
            v35 = v17;
            if (v10 == 0) {
              break;
            }
            result = (*(__int64 (**)(__int64, __int64*, __int64*))(
                *(_QWORD*)v10 + 48LL))(v10, &v35, &v34);
            if ((result & 1) != 0) {
              v14[1] = *v14;
              v18 = v5;
              if (v14 != v5) {
                v19 = v13;
                while (1) {
                  v20 = (__int64*)((char*)v5 + v19);
                  v21 = *v12;
                  v10 = *(_QWORD*)(a3 + 32);
                  v34 = *(__int64*)((char*)v5 + v19 - 8);
                  v35 = v21;
                  if (v10 == 0) {
                    goto LABEL_48;
                  }
                  result = (*(__int64 (**)(__int64, __int64*, __int64*))(
                      *(_QWORD*)v10 + 48LL))(v10, &v35, &v34);
                  if ((result & 1) == 0) {
                    break;
                  }
                  v19 -= 8;
                  *v20 = *(v20 - 1);
                  if (v19 == 0) {
                    v18 = v5;
                    goto LABEL_23;
                  }
                }
                v18 = (__int64*)((char*)v5 + v19);
              }
            LABEL_23:
              *v18 = *v12;
            }
            else {
              *v15 = *v12;
            }
            ++v12;
            v13 += 8;
            v14 = v15;
            if (v12 == a2) {
              return result;
            }
          }
        LABEL_48:
          GameRoutine_60a310(v10);
        }
      }
    }
  }
  return result;
}

__int64 GameHr_6c3980(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  bool v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  int v41;
  __int64* v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  bool v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;

  if (a2 != 0) {
    v7 = result;
    GameRoutine_6c3050(result, a2, a3, a4, a5, a6);
    *(_QWORD*)(v7 + 392) = *(_QWORD*)(a2 + 392);
    *(_QWORD*)(v7 + 400) = *(_QWORD*)(a2 + 400);
    *(_DWORD*)(v7 + 448) = *(_DWORD*)(a2 + 448);
    *(_DWORD*)(v7 + 452) = *(_DWORD*)(a2 + 452);
    v8 = *(_QWORD*)(a2 + 456);
    *(_DWORD*)(v7 + 463) = *(_DWORD*)(a2 + 463);
    *(_QWORD*)(v7 + 456) = v8;
    *(_WORD*)(v7 + 468) = *(_WORD*)(a2 + 468);
    *(_WORD*)(v7 + 470) = *(_WORD*)(a2 + 470);
    *(_WORD*)(v7 + 472) = *(_WORD*)(a2 + 472);
    *(_WORD*)(v7 + 474) = *(_WORD*)(a2 + 474);
    *(_WORD*)(v7 + 476) = *(_WORD*)(a2 + 476);
    *(_WORD*)(v7 + 478) = *(_WORD*)(a2 + 478);
    *(_WORD*)(v7 + 480) = *(_WORD*)(a2 + 480);
    *(_WORD*)(v7 + 482) = *(_WORD*)(a2 + 482);
    *(_WORD*)(v7 + 484) = *(_WORD*)(a2 + 484);
    *(_WORD*)(v7 + 486) = *(_WORD*)(a2 + 486);
    *(_WORD*)(v7 + 488) = *(_WORD*)(a2 + 488);
    *(_BYTE*)(v7 + 498) = *(_BYTE*)(a2 + 498);
    *(_DWORD*)(v7 + 504) = *(_DWORD*)(a2 + 504);
    GameRoutine_7fc5c0(v7 + 512, a2 + 512, 0);
    *(_WORD*)(v7 + 492) = *(_WORD*)(a2 + 492);
    *(_WORD*)(v7 + 494) = *(_WORD*)(a2 + 494);
    *(_BYTE*)(v7 + 496) = *(_BYTE*)(a2 + 496);
    *(_BYTE*)(v7 + 497) = *(_BYTE*)(a2 + 497);
    *(_BYTE*)(v7 + 499) = *(_BYTE*)(a2 + 499);
    *(_BYTE*)(v7 + 500) = *(_BYTE*)(a2 + 500);
    *(_BYTE*)(v7 + 501) = *(_BYTE*)(a2 + 501);
    *(_BYTE*)(v7 + 584) = *(_BYTE*)(a2 + 584);
    *(_BYTE*)(v7 + 585) = *(_BYTE*)(a2 + 585);
    *(_BYTE*)(v7 + 586) = *(_BYTE*)(a2 + 586);
    *(_BYTE*)(v7 + 587) = *(_BYTE*)(a2 + 587);
    *(_DWORD*)(v7 + 592) = *(_DWORD*)(a2 + 592);
    if (v7 != a2) {
      GameRoutine_74e220(v7 + 600);
    }
    *(_BYTE*)(v7 + 624) = *(_BYTE*)(a2 + 624);
    v10 = *(_QWORD*)(a2 + 626);
    v9 = *(_QWORD*)(a2 + 634);
    *(_WORD*)(v7 + 642) = *(_WORD*)(a2 + 642);
    *(_QWORD*)(v7 + 626) = v10;
    *(_QWORD*)(v7 + 634) = v9;
    v11 = *(_QWORD*)(a2 + 676);
    v13 = *(_QWORD*)(a2 + 652);
    v12 = *(_QWORD*)(a2 + 660);
    *(_QWORD*)(v7 + 668) = *(_QWORD*)(a2 + 668);
    *(_QWORD*)(v7 + 676) = v11;
    *(_QWORD*)(v7 + 652) = v13;
    *(_QWORD*)(v7 + 660) = v12;
    v14 = *(_QWORD*)(a2 + 708);
    v16 = *(_QWORD*)(a2 + 684);
    v15 = *(_QWORD*)(a2 + 692);
    *(_QWORD*)(v7 + 700) = *(_QWORD*)(a2 + 700);
    *(_QWORD*)(v7 + 708) = v14;
    *(_QWORD*)(v7 + 684) = v16;
    *(_QWORD*)(v7 + 692) = v15;
    *(_QWORD*)(v7 + 644) = *(_QWORD*)(a2 + 644);
    v17 = *(_QWORD*)(a2 + 716);
    v18 = *(_QWORD*)(a2 + 732);
    *(_QWORD*)(v7 + 724) = *(_QWORD*)(a2 + 724);
    *(_QWORD*)(v7 + 732) = v18;
    *(_QWORD*)(v7 + 716) = v17;
    v19 = *(_QWORD*)(a2 + 740);
    v20 = *(_QWORD*)(a2 + 748);
    v21 = *(_QWORD*)(a2 + 764);
    *(_QWORD*)(v7 + 756) = *(_QWORD*)(a2 + 756);
    *(_QWORD*)(v7 + 764) = v21;
    *(_QWORD*)(v7 + 740) = v19;
    *(_QWORD*)(v7 + 748) = v20;
    v22 = *(_QWORD*)(a2 + 772);
    v23 = *(_QWORD*)(a2 + 780);
    v24 = *(_QWORD*)(a2 + 796);
    *(_QWORD*)(v7 + 788) = *(_QWORD*)(a2 + 788);
    *(_QWORD*)(v7 + 796) = v24;
    *(_QWORD*)(v7 + 772) = v22;
    *(_QWORD*)(v7 + 780) = v23;
    *(_BYTE*)(v7 + 804) = *(_BYTE*)(a2 + 804);
    *(_BYTE*)(v7 + 807) = *(_BYTE*)(a2 + 807);
    *(_BYTE*)(v7 + 805) = *(_BYTE*)(a2 + 805);
    *(_DWORD*)(v7 + 808) = *(_DWORD*)(a2 + 808);
    *(_BYTE*)(v7 + 812) = *(_BYTE*)(a2 + 812);
    *(_BYTE*)(v7 + 813) = *(_BYTE*)(a2 + 813);
    *(_BYTE*)(v7 + 814) = *(_BYTE*)(a2 + 814);
    *(_BYTE*)(v7 + 815) = *(_BYTE*)(a2 + 815);
    *(_BYTE*)(v7 + 816) = *(_BYTE*)(a2 + 816);
    *(_BYTE*)(v7 + 817) = *(_BYTE*)(a2 + 817);
    *(_BYTE*)(v7 + 818) = *(_BYTE*)(a2 + 818);
    *(_BYTE*)(v7 + 819) = *(_BYTE*)(a2 + 819);
    *(_BYTE*)(v7 + 820) = *(_BYTE*)(a2 + 820);
    *(_BYTE*)(v7 + 821) = *(_BYTE*)(a2 + 821);
    *(_BYTE*)(v7 + 822) = *(_BYTE*)(a2 + 822);
    *(_BYTE*)(v7 + 823) = *(_BYTE*)(a2 + 823);
    *(_BYTE*)(v7 + 824) = *(_BYTE*)(a2 + 824);
    LODWORD(v24) = *(_DWORD*)(a2 + 416);
    *(_DWORD*)(v7 + 1768) = 0;
    *(_QWORD*)(v7 + 1824) = 0;
    *(_QWORD*)(v7 + 1832) = 0;
    *(_DWORD*)(v7 + 416) = v24;
    *(_QWORD*)(v7 + 1752) = *(_QWORD*)(v7 + 1744);
    *(_QWORD*)(v7 + 1784) = *(_QWORD*)(v7 + 1776);
    GameRoutine_84cf20(v7 + 1744, a2 + 1744, 1);
    v25 = *(_QWORD*)(v7 + 1168);
    *(_DWORD*)(v7 + 1192) = 0;
    *(_QWORD*)(v7 + 1248) = 0;
    *(_QWORD*)(v7 + 1256) = 0;
    *(_QWORD*)(v7 + 1176) = v25;
    *(_QWORD*)(v7 + 1208) = *(_QWORD*)(v7 + 1200);
    GameRoutine_84cf20(v7 + 1168, a2 + 1168, 1);
    v26 = *(_QWORD*)(v7 + 1264);
    *(_DWORD*)(v7 + 1288) = 0;
    *(_QWORD*)(v7 + 1344) = 0;
    *(_QWORD*)(v7 + 1352) = 0;
    *(_QWORD*)(v7 + 1272) = v26;
    *(_QWORD*)(v7 + 1304) = *(_QWORD*)(v7 + 1296);
    GameRoutine_84cf20(v7 + 1264, a2 + 1264, 1);
    v27 = *(_QWORD*)(v7 + 1072);
    *(_DWORD*)(v7 + 1096) = 0;
    *(_QWORD*)(v7 + 1152) = 0;
    *(_QWORD*)(v7 + 1160) = 0;
    *(_QWORD*)(v7 + 1080) = v27;
    *(_QWORD*)(v7 + 1112) = *(_QWORD*)(v7 + 1104);
    GameRoutine_84cf20(v7 + 1072, a2 + 1072, 1);
    v28 = *(_QWORD*)(v7 + 1360);
    *(_DWORD*)(v7 + 1384) = 0;
    *(_QWORD*)(v7 + 1440) = 0;
    *(_QWORD*)(v7 + 1448) = 0;
    *(_QWORD*)(v7 + 1368) = v28;
    *(_QWORD*)(v7 + 1400) = *(_QWORD*)(v7 + 1392);
    GameRoutine_84cf20(v7 + 1360, a2 + 1360, 1);
    v29 = *(_QWORD*)(v7 + 1456);
    *(_DWORD*)(v7 + 1480) = 0;
    *(_QWORD*)(v7 + 1536) = 0;
    *(_QWORD*)(v7 + 1544) = 0;
    *(_QWORD*)(v7 + 1464) = v29;
    *(_QWORD*)(v7 + 1496) = *(_QWORD*)(v7 + 1488);
    GameRoutine_84cf20(v7 + 1456, a2 + 1456, 1);
    v30 = *(_QWORD*)(v7 + 1552);
    *(_DWORD*)(v7 + 1576) = 0;
    *(_QWORD*)(v7 + 1632) = 0;
    *(_QWORD*)(v7 + 1640) = 0;
    *(_QWORD*)(v7 + 1560) = v30;
    *(_QWORD*)(v7 + 1592) = *(_QWORD*)(v7 + 1584);
    GameRoutine_84cf20(v7 + 1552, a2 + 1552, 1);
    v31 = *(_QWORD*)(v7 + 1648);
    *(_DWORD*)(v7 + 1672) = 0;
    *(_QWORD*)(v7 + 1728) = 0;
    *(_QWORD*)(v7 + 1736) = 0;
    *(_QWORD*)(v7 + 1656) = v31;
    *(_QWORD*)(v7 + 1688) = *(_QWORD*)(v7 + 1680);
    GameRoutine_84cf20(v7 + 1648, a2 + 1648, 1);
    if (v7 != a2) {
      GameRoutine_7fb7c0(v7 + 1840);
    }
    *(_DWORD*)(v7 + 1864) = *(_DWORD*)(a2 + 1864);
    *(_DWORD*)(v7 + 1872) = *(_DWORD*)(a2 + 1872);
    GameRoutine_70f550(v7 + 828, a2 + 828);
    *(_WORD*)(v7 + 1880) = *(_WORD*)(a2 + 1880);
    *(_BYTE*)(v7 + 1882) = *(_BYTE*)(a2 + 1882);
    v32 = *(_QWORD*)(a2 + 1883);
    *(_BYTE*)(v7 + 1891) = *(_BYTE*)(a2 + 1891);
    *(_QWORD*)(v7 + 1883) = v32;
    if (v7 != a2) {
      GameRoutine_6e36c0(v7 + 1896, *(_QWORD*)(a2 + 1896), a2 + 1904);
      v33 = *(unsigned __int8*)(a2 + 1920);
      v34 = (__int64*)(v7 + 1920);
      if ((*(_BYTE*)(v7 + 1920) & 1) != 0) {
        v37 = (v33 & 1) == 0;
        v38 = v33 >> 1;
        if (v37) {
          v39 = a2 + 1921;
        }
        else {
          v39 = *(_QWORD*)(a2 + 1936);
        }
        if (v37) {
          v40 = v38;
        }
        else {
          v40 = *(_QWORD*)(a2 + 1928);
        }
        GameRoutine_64dde0(v34, v39, v40);
      }
      else if ((v33 & 1) != 0) {
        GameRoutine_64df20(v34, *(_QWORD*)(a2 + 1936), *(_QWORD*)(a2 + 1928));
      }
      else {
        v35 = *(_QWORD*)(a2 + 1920);
        v36 = *(_QWORD*)(a2 + 1936);
        *(_QWORD*)(v7 + 1928) = *(_QWORD*)(a2 + 1928);
        *(_QWORD*)(v7 + 1936) = v36;
        *v34 = v35;
      }
    }
    *(_WORD*)(v7 + 1944) = *(_WORD*)(a2 + 1944);
    *(_BYTE*)(v7 + 1946) = *(_BYTE*)(a2 + 1946);
    v41 = *(_DWORD*)(a2 + 1947);
    *(_BYTE*)(v7 + 1951) = *(_BYTE*)(a2 + 1951);
    *(_DWORD*)(v7 + 1947) = v41;
    *(_QWORD*)(v7 + 1960) = *(_QWORD*)(a2 + 1960);
    *(_BYTE*)(v7 + 2089) = *(_BYTE*)(a2 + 2089);
    GameRoutine_11e8ae0(v7 + 1968, a2 + 1968);
    *(_BYTE*)(v7 + 2090) = *(_BYTE*)(a2 + 2090);
    *(_BYTE*)(v7 + 2091) = *(_BYTE*)(a2 + 2091);
    *(_WORD*)(v7 + 2094) = *(_WORD*)(a2 + 2094);
    *(_BYTE*)(v7 + 2092) = *(_BYTE*)(a2 + 2092);
    *(_BYTE*)(v7 + 2093) = *(_BYTE*)(a2 + 2093);
    *(_WORD*)(v7 + 2096) = *(_WORD*)(a2 + 2096);
    if (v7 != a2) {
      v42 = (__int64*)(v7 + 2112);
      v43 = *(unsigned __int8*)(a2 + 2112);
      if ((*(_BYTE*)(v7 + 2112) & 1) != 0) {
        v46 = (v43 & 1) == 0;
        v47 = v43 >> 1;
        if (v46) {
          v48 = a2 + 2113;
        }
        else {
          v48 = *(_QWORD*)(a2 + 2128);
        }
        if (v46) {
          v49 = v47;
        }
        else {
          v49 = *(_QWORD*)(a2 + 2120);
        }
        GameRoutine_64dde0(v42, v48, v49);
      }
      else if ((v43 & 1) != 0) {
        GameRoutine_64df20(v42, *(_QWORD*)(a2 + 2128), *(_QWORD*)(a2 + 2120));
      }
      else {
        v44 = *(_QWORD*)(a2 + 2112);
        v45 = *(_QWORD*)(a2 + 2128);
        *(_QWORD*)(v7 + 2120) = *(_QWORD*)(a2 + 2120);
        *(_QWORD*)(v7 + 2128) = v45;
        *v42 = v44;
      }
    }
    *(_BYTE*)(v7 + 2136) = *(_BYTE*)(a2 + 2136);
    *(_BYTE*)(v7 + 2137) = *(_BYTE*)(a2 + 2137);
    *(_BYTE*)(v7 + 2138) = *(_BYTE*)(a2 + 2138);
    *(_BYTE*)(v7 + 2139) = *(_BYTE*)(a2 + 2139);
    *(_BYTE*)(v7 + 2140) = *(_BYTE*)(a2 + 2140);
    *(_QWORD*)(v7 + 2152) = *(_QWORD*)(a2 + 2152);
    v50 = *(_QWORD*)(a2 + 2160);
    v51 = *(_QWORD*)(a2 + 2168);
    v52 = *(_QWORD*)(a2 + 2176);
    *(_DWORD*)(v7 + 2184) = *(_DWORD*)(a2 + 2184);
    *(_QWORD*)(v7 + 2176) = v52;
    *(_QWORD*)(v7 + 2168) = v51;
    *(_QWORD*)(v7 + 2160) = v50;
    *(_QWORD*)(v7 + 408) = *(_QWORD*)(a2 + 408);
    *(_BYTE*)(v7 + 806) = *(_BYTE*)(a2 + 806);
    return GameRoutine_6c4610(v7);
  }
  return result;
}

__int64 GameHr_6c47b0(__int64 a1, _BYTE* a2, char a3, char a4)
{
  unsigned int v4;
  __int64 v5;
  unsigned int v10;
  _BOOL4 v11;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char v16;
  char v17;
  int v18;
  unsigned int v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  char v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  char v60;
  __int64 v61;
  char v62;
  unsigned int v63;
  int v64;
  int v65;

  v4 = (unsigned __int8)*a2;
  v5 = *(_QWORD*)(a1 + 440);
  if (v5 == 0) {
    if (v4 != 9) {
      v11 = true;
      goto LABEL_7;
    }
    return 0;
  }
  v10 = *(unsigned __int8*)(v5 + 16);
  if (v4 == v10) {
    return 0;
  }
  v11 = v10 > 3;
LABEL_7:
  v13 = *(_QWORD*)(a1 + 1744);
  v14 = *(_QWORD*)(a1 + 1752) - v13;
  v64 = GameData_21d9700 & 0xFFF;
  v15 = ((unsigned __int64)(unsigned int)GameData_21d9700 >> 5) & 0x7F;
  if (v15 + 1 <= v14 >> 2 &&
          ((*(_DWORD*)(v13 + 4LL * (unsigned int)v15) >> GameData_21d9700) &
           1) != 0 &&
          (v16 = GameRoutine_843420(&v64, a1 + 1744), v5 = *(_QWORD*)(a1 + 440),
           (v16 & 1) != 0) &&
          (v5 == 0 ? (v17 = 9) : (v17 = *(_BYTE*)(v5 + 16)),
           ((1 << v17) & 0xF1) != 0) ||
      v5 == 0 || (unsigned int)(v18 = *(unsigned __int8*)(v5 + 16)) > 7) {
    LOBYTE(v19) = 0;
  }
  else {
    v19 = 0x91u >> v18;
  }
  if ((((v4 < 4) ^ v11) & 1) == 0) {
    if (v4 > 3) {
      if (*a2 == 5) {
        *(_DWORD*)(a1 + 416) &= 0xFCFA407E;
        GameRoutine_713480(a1 + 828);
        *(_QWORD*)(a1 + 1976) = 0;
        *(_QWORD*)(a1 + 1992) = 0;
        *(_QWORD*)(a1 + 2000) = 0;
        *(_BYTE*)(a1 + 2022) = 0;
        *(_BYTE*)(a1 + 2026) = 0;
        *(_BYTE*)(a1 + 2030) = 0;
        *(_BYTE*)(a1 + 2034) = 0;
        *(_BYTE*)(a1 + 2038) = 0;
        *(_BYTE*)(a1 + 2042) = 0;
        *(_BYTE*)(a1 + 2046) = 0;
        *(_QWORD*)(a1 + 1981) = 0;
        *(_QWORD*)(a1 + 2006) = 0;
        *(_BYTE*)(a1 + 2050) = 0;
        *(_BYTE*)(a1 + 2054) = 0;
        *(_BYTE*)(a1 + 2058) = 0;
        *(_BYTE*)(a1 + 2062) = 0;
        *(_BYTE*)(a1 + 2066) = 0;
        *(_BYTE*)(a1 + 2070) = 0;
        *(_BYTE*)(a1 + 2074) = 0;
        *(_BYTE*)(a1 + 2078) = 0;
        *(_BYTE*)(a1 + 2082) = 0;
        *(_QWORD*)(a1 + 2014) = 0xFFFFFFFFLL;
        *(_WORD*)(a1 + 2024) = -1;
        *(_WORD*)(a1 + 2028) = -1;
        *(_WORD*)(a1 + 2032) = -1;
        *(_WORD*)(a1 + 2036) = -1;
        *(_WORD*)(a1 + 2040) = -1;
        *(_WORD*)(a1 + 2044) = -1;
        *(_WORD*)(a1 + 2048) = -1;
        *(_WORD*)(a1 + 2052) = -1;
        *(_WORD*)(a1 + 2056) = -1;
        *(_WORD*)(a1 + 2060) = -1;
        *(_WORD*)(a1 + 2064) = -1;
        *(_WORD*)(a1 + 2068) = -1;
        *(_WORD*)(a1 + 2072) = -1;
        *(_WORD*)(a1 + 2076) = -1;
        *(_WORD*)(a1 + 2080) = -1;
        *(_WORD*)(a1 + 2084) = -1;
      }
      else {
        GameRoutine_6c4d60(a1);
      }
      GameRoutine_819160(a1);
      GameRoutine_819400(a1);
      v28 = *(_QWORD**)(a1 + 2200);
      if (v28 != nullptr) {
        v29 = v28[330];
        v30 = GameData_212bf68;
        if (v29 != 0) {
          v31 = *(_QWORD*)GameData_212bf68;
          v28[331] = v29;
          v32 = 128;
          if (*(_QWORD*)(v31 + 200) == 0) {
            v32 = 56;
          }
          GameRoutine_1a0a4e0(v31 + v32, v29);
        }
        v33 = v28[3];
        if (v33 != 0) {
          v34 = *(_QWORD*)v30;
          v28[4] = v33;
          v35 = 128;
          if (*(_QWORD*)(v34 + 200) == 0) {
            v35 = 56;
          }
          GameRoutine_1a0a4e0(v34 + v35, v33);
        }
        v36 = 128;
        if (*(_QWORD*)(*(_QWORD*)v30 + 200LL) == 0) {
          v36 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)v30 + v36, v28);
        *(_QWORD*)(a1 + 2200) = 0;
      }
    }
    else if (*(_QWORD*)(a1 + 2200) == 0) {
      v20 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 2680, 16, 0);
      v21 = GameData_212d198[0];
      *(_QWORD*)(v20 + 24) = 0;
      *(_QWORD*)(v20 + 32) = 0;
      *(_QWORD*)(v20 + 56) = v21 + 2;
      *(_QWORD*)(v20 + 40) = 0;
      *(_DWORD*)v20 = 0;
      *(_QWORD*)(v20 + 2640) = 0;
      *(_QWORD*)(v20 + 2648) = 0;
      *(_QWORD*)(v20 + 2656) = 0;
      *(_DWORD*)(v20 + 16) = 0;
      *(_DWORD*)(v20 + 48) = 0;
      *(_QWORD*)(v20 + 1088) = GameData_1f95160;
      *(_WORD*)(v20 + 4) = 9;
      *(_QWORD*)(v20 + 8) = 0x100000000LL;
      GameRoutine_1a0ba50(v20 + 64, 255, 1024, v22, v23, v24);
      *(_QWORD*)(v20 + 2664) = 0;
      *(_QWORD*)(v20 + 2672) = 0;
      GameRoutine_1a0ba50(v20 + 1096, 0, 1540, v25, v26, v27);
      *(_QWORD*)(a1 + 2200) = v20;
    }
  }
  if ((a4 & 1) == 0) {
    v37 = *(_QWORD*)(a1 + 440);
    v38 = v37 != 0 ? *(_BYTE*)(v37 + 16) : 9;
    if (((1 << v38) & 0xB1) != 0) {
      v39 = (unsigned __int8)*a2;
      if (v39 == 9 || v39 == 5) {
        GameRoutine_712a40(a1 + 828);
        GameRoutine_960280(a1);
      }
    }
  }
  *(_WORD*)(a1 + 20) |= 4u;
  GameRoutine_1210350(a1, (unsigned __int8)*a2);
  v46 = *(_QWORD*)(a1 + 432);
  v45 = *(_QWORD**)(a1 + 440);
  v47 = *(_QWORD*)(a1 + 424);
  if (v46 != 0) {
    *(_QWORD*)(v46 + 424) = v47;
    if (v47 == 0) {
      goto LABEL_51;
    }
  LABEL_50:
    *(_QWORD*)(v47 + 432) = *(_QWORD*)(a1 + 432);
    goto LABEL_53;
  }
  v45[1] = v47;
  if (v47 != 0) {
    *(_QWORD*)(v47 + 432) = 0;
    v47 = *(_QWORD*)(a1 + 424);
    if (v47 != 0) {
      goto LABEL_50;
    }
  }
LABEL_51:
  v48 = *(_QWORD*)(a1 + 432);
  *v45 = v48;
  if (v48 != 0) {
    *(_QWORD*)(v48 + 424) = 0;
  }
LABEL_53:
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  v49 = (unsigned __int8)*a2;
  if (v49 == 9) {
    GameRoutine_6c3050(a1, v40, v41, v42, v43, v44);
    v49 = (unsigned __int8)*a2;
  }
  v50 = *(_QWORD*)(GameData_21ca310 + 56) + 556000LL;
  v51 = v50 + 24LL * v49;
  if ((a3 & 1) != 0) {
    if (v49 >= 0xA) {
      v52 = 0;
    }
    else {
      v52 = v50 + 24LL * v49;
    }
    v53 = v50 + 24LL * *(unsigned __int8*)(v51 + 16);
    if (*(unsigned __int8*)(v51 + 16) >= 0xAu) {
      v53 = 0;
    }
    *(_QWORD*)(a1 + 440) = v53;
    v54 = *(_QWORD*)(v52 + 8);
    if (v54 != 0) {
      *(_QWORD*)(v54 + 432) = a1;
      *(_QWORD*)(a1 + 424) = v54;
    }
    else {
      *(_QWORD*)v51 = a1;
    }
    *(_QWORD*)(v52 + 8) = a1;
  }
  else {
    v55 = v50 + 24LL * *(unsigned __int8*)(v51 + 16);
    if (*(unsigned __int8*)(v51 + 16) >= 0xAu) {
      v55 = 0;
    }
    *(_QWORD*)(a1 + 440) = v55;
    v56 = *(_QWORD*)v51;
    if (*(_QWORD*)v51 != 0) {
      *(_QWORD*)(v56 + 424) = a1;
      *(_QWORD*)(a1 + 432) = v56;
    }
    else {
      *(_QWORD*)(v51 + 8) = a1;
    }
    *(_QWORD*)v51 = a1;
  }
  GameRoutine_6c4610(a1);
  if ((a4 & 1) != 0) {
    return 1;
  }
  v57 = *(_QWORD*)(a1 + 1744);
  v58 = *(_QWORD*)(a1 + 1752) - v57;
  v65 = GameData_21d9700 & 0xFFF;
  v59 = ((unsigned __int64)(unsigned int)GameData_21d9700 >> 5) & 0x7F;
  if (v59 + 1 <= v58 >> 2 &&
      ((*(_DWORD*)(v57 + 4LL * (unsigned int)v59) >> GameData_21d9700) & 1) !=
          0) {
    v60 = GameRoutine_843420(&v65, a1 + 1744);
    v61 = *(_QWORD*)(a1 + 440);
    if ((v60 & 1) != 0) {
      v62 = v61 != 0 ? *(_BYTE*)(v61 + 16) : 9;
      if (((1 << v62) & 0xF1) != 0) {
        goto LABEL_85;
      }
    }
  }
  else {
    v61 = *(_QWORD*)(a1 + 440);
  }
  if (v61 != 0) {
    v63 = *(unsigned __int8*)(v61 + 16);
    if (v63 <= 7 && ((1 << v63) & 0x91) != 0) {
      if ((v19 & 1) != 0) {
        return 1;
      }
      goto LABEL_86;
    }
  }
LABEL_85:
  if ((v19 & 1) != 0) {
  LABEL_86:
    GameRoutine_93c2e0(*(_QWORD*)(*(_QWORD*)GameData_212cf88[0] + 8LL), a1);
    GameRoutine_936cf0(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL), a1);
  }
  return 1;
}

__int64 GameHr_6c82e0(__int64 a1)
{
  if (*(_BYTE*)(a1 + 2136) != 0) {
    return GameRoutine_97b2f0(a1 + 2104);
  }
  else {
    return GameRoutine_67ed20(*(_QWORD**)(a1 + 392));
  }
}

__int64 GameHr_6cc580(__int64 a1, _DWORD* a2)
{
  __int64* v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int* v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;

  v2 = GameData_212c880[0];
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                           8LL * (*a2 & 0xFFF)) +
                104LL) != 2) {
    return 0;
  }
  v5 = (*(_QWORD*)(a1 + 1208) - *(_QWORD*)(a1 + 1200)) >> 2;
  v28 = 32;
  if ((int)(GameRoutine_84ec80(a1 + 1744, &v28) + 3) <= (int)v5 ||
      (GameRoutine_84cc00(a1 + 1168, a2, 1) & 1) == 0) {
    return 0;
  }
  v6 = *(_QWORD*)(a1 + 1208);
  v7 = *(_QWORD*)(a1 + 1200);
  *(_QWORD*)(a1 + 1256) = 0;
  v8 = v6 - v7;
  *(_QWORD*)(a1 + 1248) = 0;
  if ((int)((unsigned __int64)(v6 - v7) >> 2) >= 1) {
    v9 = *v2;
    v10 = (int)(v8 >> 2);
    v11 = v10 <= 1 ? 1LL : (int)(v8 >> 2);
    if (v10 >= 2) {
      v18 = (int*)(v7 + 4);
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      do {
        v16 += 2;
        v19 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8LL * (*(v18 - 1) & 0xFFF));
        v20 = v15 | (1 << *(_BYTE*)(v19 + 104));
        *(_WORD*)(a1 + 1248) = v20;
        v21 = (1LL << *(_BYTE*)(v19 + 250)) | v14;
        *(_QWORD*)(a1 + 1256) = v21;
        v22 = (1 << *(_BYTE*)(v19 + 115)) | v13;
        *(_DWORD*)(a1 + 1252) = v22;
        v23 = *(unsigned __int16*)(*(_QWORD*)(v19 + 24) + 1064LL) | v12;
        *(_WORD*)(a1 + 1250) = v23;
        v24 = *v18;
        v18 += 2;
        v25 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8LL * (v24 & 0xFFF));
        v15 = v20 | (1 << *(_BYTE*)(v25 + 104));
        *(_WORD*)(a1 + 1248) = v15;
        v14 = (1LL << *(_BYTE*)(v25 + 250)) | v21;
        *(_QWORD*)(a1 + 1256) = v14;
        v13 = (1 << *(_BYTE*)(v25 + 115)) | v22;
        *(_DWORD*)(a1 + 1252) = v13;
        v12 = *(unsigned __int16*)(*(_QWORD*)(v25 + 24) + 1064LL) | v23;
        *(_WORD*)(a1 + 1250) = v12;
      } while ((v11 & 0x7FFFFFFFFFFFFFFELL) != v16);
    }
    else {
      LOWORD(v12) = 0;
      v13 = 0;
      v14 = 0;
      LOWORD(v15) = 0;
      v16 = 0;
    }
    if ((v11 & 1) != 0) {
      v26 = *(_QWORD*)(*(_QWORD*)(v9 + 64) +
                       8LL * (*(_DWORD*)(v7 + 4 * v16) & 0xFFF));
      *(_WORD*)(a1 + 1248) = v15 | (1 << *(_BYTE*)(v26 + 104));
      *(_QWORD*)(a1 + 1256) = (1LL << *(_BYTE*)(v26 + 250)) | v14;
      *(_DWORD*)(a1 + 1252) = (1 << *(_BYTE*)(v26 + 115)) | v13;
      *(_WORD*)(a1 + 1250) = *(_WORD*)(*(_QWORD*)(v26 + 24) + 1064LL) | v12;
    }
  }
  v27 = *(_DWORD*)(a1 + 416);
  if ((v27 & 0x10000000) == 0) {
    *(_DWORD*)(a1 + 416) = v27 | 0x10000000;
    GameRoutine_6c51e0(a1);
    GameRoutine_6c6da0(a1);
    GameRoutine_6c6ec0(a1);
    *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  }
  return 1;
}

__int64 GameHr_6cc7e0(__int64 a1, __int64 a2)
{
  char v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  int* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  char v25;

  v3 = GameRoutine_84d980(a1 + 1168, a2);
  if ((v3 & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 1208);
    v5 = *(_QWORD*)(a1 + 1200);
    *(_QWORD*)(a1 + 1256) = 0;
    v6 = v4 - v5;
    *(_QWORD*)(a1 + 1248) = 0;
    if ((int)((unsigned __int64)(v4 - v5) >> 2) >= 1) {
      v7 = (int)(v6 >> 2);
      v8 = v7 <= 1 ? 1LL : (int)(v6 >> 2);
      v9 = *GameData_212c880[0];
      if (v7 >= 2) {
        v15 = (int*)(v5 + 4);
        v10 = 0;
        v11 = 0;
        v12 = 0;
        v13 = 0;
        v14 = 0;
        do {
          v14 += 2;
          v16 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8LL * (*(v15 - 1) & 0xFFF));
          v17 = v13 | (1 << *(_BYTE*)(v16 + 104));
          *(_WORD*)(a1 + 1248) = v17;
          v18 = (1LL << *(_BYTE*)(v16 + 250)) | v12;
          *(_QWORD*)(a1 + 1256) = v18;
          v19 = (1 << *(_BYTE*)(v16 + 115)) | v11;
          *(_DWORD*)(a1 + 1252) = v19;
          v20 = *(unsigned __int16*)(*(_QWORD*)(v16 + 24) + 1064LL) | v10;
          *(_WORD*)(a1 + 1250) = v20;
          v21 = *v15;
          v15 += 2;
          v22 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8LL * (v21 & 0xFFF));
          v13 = v17 | (1 << *(_BYTE*)(v22 + 104));
          *(_WORD*)(a1 + 1248) = v13;
          v12 = (1LL << *(_BYTE*)(v22 + 250)) | v18;
          *(_QWORD*)(a1 + 1256) = v12;
          v11 = (1 << *(_BYTE*)(v22 + 115)) | v19;
          *(_DWORD*)(a1 + 1252) = v11;
          v10 = *(unsigned __int16*)(*(_QWORD*)(v22 + 24) + 1064LL) | v20;
          *(_WORD*)(a1 + 1250) = v10;
        } while ((v8 & 0x7FFFFFFFFFFFFFFELL) != v14);
      }
      else {
        LOWORD(v10) = 0;
        v11 = 0;
        v12 = 0;
        LOWORD(v13) = 0;
        v14 = 0;
      }
      if ((v8 & 1) != 0) {
        v23 = *(_QWORD*)(*(_QWORD*)(v9 + 64) +
                         8LL * (*(_DWORD*)(v5 + 4 * v14) & 0xFFF));
        *(_WORD*)(a1 + 1248) = v13 | (1 << *(_BYTE*)(v23 + 104));
        *(_QWORD*)(a1 + 1256) = (1LL << *(_BYTE*)(v23 + 250)) | v12;
        *(_DWORD*)(a1 + 1252) = (1 << *(_BYTE*)(v23 + 115)) | v11;
        *(_WORD*)(a1 + 1250) = *(_WORD*)(*(_QWORD*)(v23 + 24) + 1064LL) | v10;
      }
    }
    v24 = *(_DWORD*)(a1 + 416);
    if ((v24 & 0x10000000) == 0) {
      v25 = v3;
      *(_DWORD*)(a1 + 416) = v24 | 0x10000000;
      GameRoutine_6c51e0(a1);
      GameRoutine_6c6da0(a1);
      GameRoutine_6c6ec0(a1);
      v3 = v25;
      *(_DWORD*)(a1 + 416) &= ~0x10000000u;
    }
  }
  return v3 & 1;
}

__int64 GameHr_6cc9e0(__int64 a1, _DWORD* a2)
{
  __int64* v2;
  char v4;
  int v6;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int* v20;
  __int64 v21;
  int v22;
  __int64 v23;
  int v24;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  _BYTE v34[4];
  _BYTE v35[4];

  v2 = GameData_212c880[0];
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                           8LL * (*a2 & 0xFFF)) +
                104LL) == 1 &&
      (int)((*(_QWORD*)(a1 + 1304) - *(_QWORD*)(a1 + 1296)) >> 2) <= 4) {
    v6 = *(__int16*)(a1 + 492);
    v34[0] = 0;
    v8 = GameRoutine_6dd190(a1, v34, 1);
    v4 = GameRoutine_84cc00(a1 + 1264, a2, 1);
    if ((v4 & 1) != 0) {
      v9 = *(_QWORD*)(a1 + 1304);
      v10 = *(_QWORD*)(a1 + 1296);
      *(_QWORD*)(a1 + 1352) = 0;
      v11 = v9 - v10;
      *(_QWORD*)(a1 + 1344) = 0;
      if ((int)((unsigned __int64)(v9 - v10) >> 2) >= 1) {
        v12 = *v2;
        v13 = (int)(v11 >> 2);
        v14 = v13 <= 1 ? 1LL : (int)(v11 >> 2);
        if (v13 >= 2) {
          v20 = (int*)(v10 + 4);
          v15 = 0;
          v16 = 0;
          v17 = 0;
          v18 = 0;
          v19 = 0;
          do {
            v19 += 2;
            v21 = *(_QWORD*)(*(_QWORD*)(v12 + 64) + 8LL * (*(v20 - 1) & 0xFFF));
            v22 = v18 | (1 << *(_BYTE*)(v21 + 104));
            *(_WORD*)(a1 + 1344) = v22;
            v23 = (1LL << *(_BYTE*)(v21 + 250)) | v17;
            *(_QWORD*)(a1 + 1352) = v23;
            v24 = (1 << *(_BYTE*)(v21 + 115)) | v16;
            *(_DWORD*)(a1 + 1348) = v24;
            v25 = *(unsigned __int16*)(*(_QWORD*)(v21 + 24) + 1064LL) | v15;
            *(_WORD*)(a1 + 1346) = v25;
            v26 = *v20;
            v20 += 2;
            v27 = *(_QWORD*)(*(_QWORD*)(v12 + 64) + 8LL * (v26 & 0xFFF));
            v18 = v22 | (1 << *(_BYTE*)(v27 + 104));
            *(_WORD*)(a1 + 1344) = v18;
            v17 = (1LL << *(_BYTE*)(v27 + 250)) | v23;
            *(_QWORD*)(a1 + 1352) = v17;
            v16 = (1 << *(_BYTE*)(v27 + 115)) | v24;
            *(_DWORD*)(a1 + 1348) = v16;
            v15 = *(unsigned __int16*)(*(_QWORD*)(v27 + 24) + 1064LL) | v25;
            *(_WORD*)(a1 + 1346) = v15;
          } while ((v14 & 0x7FFFFFFFFFFFFFFELL) != v19);
        }
        else {
          LOWORD(v15) = 0;
          v16 = 0;
          v17 = 0;
          LOWORD(v18) = 0;
          v19 = 0;
        }
        if ((v14 & 1) != 0) {
          v28 = *(_QWORD*)(*(_QWORD*)(v12 + 64) +
                           8LL * (*(_DWORD*)(v10 + 4 * v19) & 0xFFF));
          *(_WORD*)(a1 + 1344) = v18 | (1 << *(_BYTE*)(v28 + 104));
          *(_QWORD*)(a1 + 1352) = (1LL << *(_BYTE*)(v28 + 250)) | v17;
          *(_DWORD*)(a1 + 1348) = (1 << *(_BYTE*)(v28 + 115)) | v16;
          *(_WORD*)(a1 + 1346) = *(_WORD*)(*(_QWORD*)(v28 + 24) + 1064LL) | v15;
        }
      }
      v29 = *(_DWORD*)(a1 + 416);
      if ((v29 & 0x10000000) == 0) {
        *(_DWORD*)(a1 + 416) = v29 | 0x10000000;
        GameRoutine_6c51e0(a1);
        GameRoutine_6c6da0(a1);
        GameRoutine_6c6ec0(a1);
        *(_DWORD*)(a1 + 416) &= ~0x10000000u;
      }
    }
    v35[0] = 0;
    v30 = GameRoutine_6dd190(a1, v35, 1);
    if (v30 != v8) {
      v31 = v30 - v8 + v6;
      if (*(_WORD*)(a1 + 494) != 0 && v31 != *(__int16*)(a1 + 494)) {
        *(_WORD*)(a1 + 494) = 0;
      }
      if (v30 >= v31) {
        v32 = v30 - v8 + v6;
      }
      else {
        v32 = v30;
      }
      if (v31 < 1) {
        v33 = 1;
      }
      else {
        v33 = v32;
      }
      if (v33 != *(__int16*)(a1 + 492)) {
        *(_WORD*)(a1 + 492) = v33;
      }
    }
  }
  else {
    v4 = 0;
  }
  return v4 & 1;
}

__int64 GameHr_6ccca0(__int64 a1, __int64 a2)
{
  int v2;
  int v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int* v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  _BYTE v33[4];
  _BYTE v34[4];

  v2 = *(__int16*)(a1 + 492);
  v33[0] = 0;
  v5 = GameRoutine_6dd190(a1, v33, 1);
  v6 = GameRoutine_84d980(a1 + 1264, a2);
  if ((v6 & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 1304);
    v8 = *(_QWORD*)(a1 + 1296);
    *(_QWORD*)(a1 + 1352) = 0;
    v9 = v7 - v8;
    *(_QWORD*)(a1 + 1344) = 0;
    if ((int)((unsigned __int64)(v7 - v8) >> 2) >= 1) {
      v10 = (int)(v9 >> 2);
      v11 = v10 <= 1 ? 1LL : (int)(v9 >> 2);
      v12 = *GameData_212c880[0];
      if (v10 >= 2) {
        v18 = (int*)(v8 + 4);
        v13 = 0;
        v14 = 0;
        v15 = 0;
        v16 = 0;
        v17 = 0;
        do {
          v17 += 2;
          v19 = *(_QWORD*)(*(_QWORD*)(v12 + 64) + 8LL * (*(v18 - 1) & 0xFFF));
          v20 = v16 | (1 << *(_BYTE*)(v19 + 104));
          *(_WORD*)(a1 + 1344) = v20;
          v21 = (1LL << *(_BYTE*)(v19 + 250)) | v15;
          *(_QWORD*)(a1 + 1352) = v21;
          v22 = (1 << *(_BYTE*)(v19 + 115)) | v14;
          *(_DWORD*)(a1 + 1348) = v22;
          v23 = *(unsigned __int16*)(*(_QWORD*)(v19 + 24) + 1064LL) | v13;
          *(_WORD*)(a1 + 1346) = v23;
          v24 = *v18;
          v18 += 2;
          v25 = *(_QWORD*)(*(_QWORD*)(v12 + 64) + 8LL * (v24 & 0xFFF));
          v16 = v20 | (1 << *(_BYTE*)(v25 + 104));
          *(_WORD*)(a1 + 1344) = v16;
          v15 = (1LL << *(_BYTE*)(v25 + 250)) | v21;
          *(_QWORD*)(a1 + 1352) = v15;
          v14 = (1 << *(_BYTE*)(v25 + 115)) | v22;
          *(_DWORD*)(a1 + 1348) = v14;
          v13 = *(unsigned __int16*)(*(_QWORD*)(v25 + 24) + 1064LL) | v23;
          *(_WORD*)(a1 + 1346) = v13;
        } while ((v11 & 0x7FFFFFFFFFFFFFFELL) != v17);
      }
      else {
        LOWORD(v13) = 0;
        v14 = 0;
        v15 = 0;
        LOWORD(v16) = 0;
        v17 = 0;
      }
      if ((v11 & 1) != 0) {
        v26 = *(_QWORD*)(*(_QWORD*)(v12 + 64) +
                         8LL * (*(_DWORD*)(v8 + 4 * v17) & 0xFFF));
        *(_WORD*)(a1 + 1344) = v16 | (1 << *(_BYTE*)(v26 + 104));
        *(_QWORD*)(a1 + 1352) = (1LL << *(_BYTE*)(v26 + 250)) | v15;
        *(_DWORD*)(a1 + 1348) = (1 << *(_BYTE*)(v26 + 115)) | v14;
        *(_WORD*)(a1 + 1346) = *(_WORD*)(*(_QWORD*)(v26 + 24) + 1064LL) | v13;
      }
    }
    v27 = *(_DWORD*)(a1 + 416);
    if ((v27 & 0x10000000) == 0) {
      *(_DWORD*)(a1 + 416) = v27 | 0x10000000;
      GameRoutine_6c51e0(a1);
      GameRoutine_6c6da0(a1);
      GameRoutine_6c6ec0(a1);
      *(_DWORD*)(a1 + 416) &= ~0x10000000u;
    }
  }
  v34[0] = 0;
  v28 = GameRoutine_6dd190(a1, v34, 1);
  if (v28 != v5) {
    v29 = v28 - v5 + v2;
    if (*(_WORD*)(a1 + 494) != 0 && v29 != *(__int16*)(a1 + 494)) {
      *(_WORD*)(a1 + 494) = 0;
    }
    if (v28 >= v29) {
      v30 = v28 - v5 + v2;
    }
    else {
      v30 = v28;
    }
    if (v29 < 1) {
      v31 = 1;
    }
    else {
      v31 = v30;
    }
    if (v31 != *(__int16*)(a1 + 492)) {
      *(_WORD*)(a1 + 492) = v31;
    }
  }
  return v6 & 1;
}

__int64 GameHr_6cdd40(__int64 a1, char a2)
{
  int v4;
  _QWORD* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 result;
  int v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD v23[4];
  _QWORD* v24;

  GameRoutine_6cd010();
  v4 = *(__int16*)(a1 + 492);
  v22 = 0;
  v20 = 0;
  v5 = v23;
  LOBYTE(v23[0]) = 0;
  v6 = GameRoutine_6dd190(a1, v23, 1);
  v21 = 0;
  v23[2] = a1;
  v24 = v23;
  v23[0] = GameData_1f914e8;
  v23[1] = &v20;
  if ((*(_BYTE*)(a1 + 1152) & 2) == 0) {
    goto LABEL_12;
  }
  v7 = *(_QWORD*)(a1 + 1112);
  v8 = *(_QWORD*)(a1 + 1104);
  if ((int)((unsigned __int64)(v7 - v8) >> 2) < 1) {
    v5 = v23;
  LABEL_12:
    v13 = 32;
    goto LABEL_13;
  }
  v9 = 0;
  v10 = 0;
  v11 = GameData_212c880[0];
  v12 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v12 + 64) +
                             8LL * (*(_DWORD*)(v8 + v9) & 0xFFF)) +
                  104LL) == 1) {
      if (v24 == nullptr) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(_QWORD*, __int64))(*v24 + 48LL))(v24, v8 + v9);
      v12 = *v11;
      v7 = *(_QWORD*)(a1 + 1112);
      v8 = *(_QWORD*)(a1 + 1104);
    }
    ++v10;
    v9 += 4;
  } while (v10 < (int)((unsigned __int64)(v7 - v8) >> 2));
  v5 = v24;
  if (v24 == v23) {
    goto LABEL_12;
  }
  if (v24 != nullptr) {
    v13 = 40;
  LABEL_13:
    (*(void (**)(_QWORD*))(*v5 + v13))(v5);
  }
  if ((GameRoutine_6ce1c0(&v20, a1, a1 + 1264, 5, a2 & 1) & 1) != 0) {
    v14 = *(_DWORD*)(a1 + 416);
    if ((v14 & 0x10000000) == 0) {
      *(_DWORD*)(a1 + 416) = v14 | 0x10000000;
      GameRoutine_6c51e0(a1);
      GameRoutine_6c6da0(a1);
      GameRoutine_6c6ec0(a1);
      *(_DWORD*)(a1 + 416) &= ~0x10000000u;
    }
  }
  LOBYTE(v23[0]) = 0;
  result = GameRoutine_6dd190(a1, v23, 1);
  if ((_DWORD)result != v6) {
    v16 = result - v6 + v4;
    if (*(_WORD*)(a1 + 494) != 0 && v16 != *(__int16*)(a1 + 494)) {
      *(_WORD*)(a1 + 494) = 0;
    }
    if ((int)result >= v16) {
      v17 = result - v6 + v4;
    }
    else {
      v17 = result;
    }
    if (v16 < 1) {
      v18 = 1;
    }
    else {
      v18 = v17;
    }
    if (v18 != *(__int16*)(a1 + 492)) {
      *(_WORD*)(a1 + 492) = v18;
    }
  }
  if (v20 != 0) {
    v21 = v20;
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v19 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v19, v20);
  }
  return result;
}

__int64 GameHr_6ce660(__int64 a1)
{
  char* v1;
  char* v2;
  __int64 v3;
  char* v4;
  char* v5;
  unsigned __int64 v6;
  int v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  char* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  _DWORD* v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  int v36;
  __int64 v37;
  int v38;
  __int64 v39;
  int v40;
  int v41;
  __int64 v42;
  int v43;
  __int64 v44;
  int v45;
  int v46;
  __int64 v47;
  int* v48;
  int v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  char* v53;
  int v54;
  char* v56;
  char* v57;
  unsigned __int64 v58;
  int v59;
  char* v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  char* v64;
  __int64 v65;
  char* v66;
  __int64 v67;
  __int64 v68;
  char v69;
  char* v70;
  char* v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  int v79;
  int v80;
  __int64 v81;
  int v82;
  __int64 v83;
  __int64 v84;
  _DWORD* v85;
  __int64 v86;
  __int64 v87;
  int v88;
  __int64 v89;
  int v90;
  int v91;
  __int64 v92;
  int v93;
  __int64 v94;
  int v95;
  int v96;
  __int64 v97;
  int v98;
  __int64 v99;
  int v100;
  int v101;
  __int64 v102;
  int* v103;
  int v104;
  __int64 v105;
  char v106;
  __int64 v107;
  int v108;
  int v110;
  __int64 v111;

  v1 = *(char**)(a1 + 1304);
  v2 = *(char**)(a1 + 1296);
  v3 = a1;
  if ((int)((unsigned __int64)(v1 - v2) >> 2) < 6 || v2 == v1) {
    v15 = 0;
  }
  else {
    v4 = nullptr;
    v5 = nullptr;
    v6 = 0;
    v7 = 0;
    do {
      if (v7 <= 4) {
        ++v7;
      }
      else if ((unsigned __int64)v5 >= v6) {
        v8 = (char*)(v5 - v4);
        v9 = (v5 - v4) >> 2;
        v10 = v9 + 1;
        if ((unsigned __int64)(v9 + 1) >> 62 != 0) {
        LABEL_102:
          GameRoutine_6e3e20();
        }
        if ((__int64)(v6 - (_QWORD)v4) >> 1 > v10) {
          v10 = (__int64)(v6 - (_QWORD)v4) >> 1;
        }
        if (v6 - (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFFCLL) {
          v11 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v11 = v10;
        }
        if (v11 != 0) {
          if (v11 >> 62 != 0) {
          LABEL_103:
            GameRoutine_60a210(a1);
          }
          v12 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 4 * v11, 16, 0);
        }
        else {
          v12 = 0;
        }
        v6 = v12 + 4 * v11;
        v13 = (__int64)&v8[v12 + -4 * v9];
        *(_DWORD*)&v8[v12] = *(_DWORD*)v2;
        v5 = &v8[v12 + 4];
        a1 = GameRoutine_1a0b950(v13, v4, v8);
        if (v4 != nullptr) {
          v14 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v14 = 56;
          }
          a1 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v14, v4);
        }
        v4 = (char*)v13;
      }
      else {
        *(_DWORD*)v5 = *(_DWORD*)v2;
        v5 += 4;
      }
      v2 += 4;
    } while (v2 != v1);
    if (v5 != v4) {
      v15 = 0;
      v16 = v4;
      v17 = GameData_212c880[0];
      while (1) {
        if ((GameRoutine_84d980(v3 + 1264, v16) & 1) != 0) {
          v18 = *(_QWORD*)(v3 + 1304);
          v19 = *(_QWORD*)(v3 + 1296);
          *(_QWORD*)(v3 + 1344) = 0;
          *(_QWORD*)(v3 + 1352) = 0;
          v20 = v18 - v19;
          if ((int)((unsigned __int64)(v18 - v19) >> 2) >= 1) {
            v21 = *v17;
            v22 = (int)(v20 >> 2);
            if (v22 <= 1) {
              v23 = 1;
            }
            else {
              v23 = (int)(v20 >> 2);
            }
            if (v22 >= 4) {
              v30 = (_DWORD*)(v19 + 8);
              v31 = 0;
              v24 = 0;
              v25 = 0;
              v26 = 0;
              v27 = 0;
              do {
                v31 -= 4;
                v32 = *(_QWORD*)(*(_QWORD*)(v21 + 64) +
                                 8LL * (*(v30 - 2) & 0xFFF));
                v33 = v27 | (1 << *(_BYTE*)(v32 + 104));
                *(_WORD*)(v3 + 1344) = v33;
                v34 = (1LL << *(_BYTE*)(v32 + 250)) | v26;
                *(_QWORD*)(v3 + 1352) = v34;
                v35 = (1 << *(_BYTE*)(v32 + 115)) | v25;
                *(_DWORD*)(v3 + 1348) = v35;
                v36 = *(unsigned __int16*)(*(_QWORD*)(v32 + 24) + 1064LL) | v24;
                *(_WORD*)(v3 + 1346) = v36;
                v37 = *(_QWORD*)(*(_QWORD*)(v21 + 64) +
                                 8LL * (*(v30 - 1) & 0xFFF));
                v38 = v33 | (1 << *(_BYTE*)(v37 + 104));
                *(_WORD*)(v3 + 1344) = v38;
                v39 = (1LL << *(_BYTE*)(v37 + 250)) | v34;
                *(_QWORD*)(v3 + 1352) = v39;
                v40 = (1 << *(_BYTE*)(v37 + 115)) | v35;
                *(_DWORD*)(v3 + 1348) = v40;
                v41 = *(unsigned __int16*)(*(_QWORD*)(v37 + 24) + 1064LL) | v36;
                *(_WORD*)(v3 + 1346) = v41;
                v42 = *(_QWORD*)(*(_QWORD*)(v21 + 64) + 8LL * (*v30 & 0xFFF));
                v43 = v38 | (1 << *(_BYTE*)(v42 + 104));
                *(_WORD*)(v3 + 1344) = v43;
                v44 = (1LL << *(_BYTE*)(v42 + 250)) | v39;
                *(_QWORD*)(v3 + 1352) = v44;
                v45 = (1 << *(_BYTE*)(v42 + 115)) | v40;
                *(_DWORD*)(v3 + 1348) = v45;
                v46 = *(unsigned __int16*)(*(_QWORD*)(v42 + 24) + 1064LL) | v41;
                *(_WORD*)(v3 + 1346) = v46;
                LOWORD(v42) = v30[1];
                v30 += 4;
                v47 = *(_QWORD*)(*(_QWORD*)(v21 + 64) + 8 * (v42 & 0xFFF));
                v27 = v43 | (1 << *(_BYTE*)(v47 + 104));
                *(_WORD*)(v3 + 1344) = v27;
                v26 = (1LL << *(_BYTE*)(v47 + 250)) | v44;
                *(_QWORD*)(v3 + 1352) = v26;
                v25 = (1 << *(_BYTE*)(v47 + 115)) | v45;
                *(_DWORD*)(v3 + 1348) = v25;
                v24 = *(unsigned __int16*)(*(_QWORD*)(v47 + 24) + 1064LL) | v46;
                *(_WORD*)(v3 + 1346) = v24;
              } while (-(__int64)(v23 & 0xFFFFFFFFFFFFFFFCLL) != v31);
              v28 = -v31;
              v29 = v23 & 3;
              if (v29 != 0) {
              LABEL_40:
                v48 = (int*)(v19 + 4 * v28);
                do {
                  v49 = *v48++;
                  v15 = 1;
                  --v29;
                  v50 = *(_QWORD*)(*(_QWORD*)(v21 + 64) + 8LL * (v49 & 0xFFF));
                  v27 |= 1 << *(_BYTE*)(v50 + 104);
                  *(_WORD*)(v3 + 1344) = v27;
                  v26 |= 1LL << *(_BYTE*)(v50 + 250);
                  *(_QWORD*)(v3 + 1352) = v26;
                  v25 |= 1 << *(_BYTE*)(v50 + 115);
                  *(_DWORD*)(v3 + 1348) = v25;
                  v24 |= *(unsigned __int16*)(*(_QWORD*)(v50 + 24) + 1064LL);
                  *(_WORD*)(v3 + 1346) = v24;
                } while (v29 != 0);
                goto LABEL_28;
              }
            }
            else {
              v24 = 0;
              v25 = 0;
              v26 = 0;
              v27 = 0;
              v28 = 0;
              v29 = v23 & 3;
              if (v29 != 0) {
                goto LABEL_40;
              }
            }
          }
          v15 = 1;
        }
      LABEL_28:
        v16 += 4;
        if (v16 == v5) {
          goto LABEL_44;
        }
      }
    }
    v15 = 0;
  LABEL_44:
    if (v4 != nullptr) {
      v51 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v51 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v51, v4);
    }
  }
  v111 = 32;
  a1 = GameRoutine_84ec80(v3 + 1744, &v111);
  v52 = *(char**)(v3 + 1208);
  v53 = *(char**)(v3 + 1200);
  v54 = a1 + 3;
  if ((int)a1 + 3 >= (int)((unsigned __int64)(v52 - v53) >> 2) || v53 == v52) {
    if ((v15 & 1) == 0) {
      return 1;
    }
    goto LABEL_99;
  }
  v56 = nullptr;
  v57 = nullptr;
  v58 = 0;
  v59 = 0;
  v110 = a1 + 3;
  do {
    if (v59 < v54) {
      ++v59;
    }
    else if ((unsigned __int64)v57 >= v58) {
      v60 = (char*)(v57 - v56);
      v61 = (v57 - v56) >> 2;
      v62 = v61 + 1;
      if ((unsigned __int64)(v61 + 1) >> 62 != 0) {
        goto LABEL_102;
      }
      if ((__int64)(v58 - (_QWORD)v56) >> 1 > v62) {
        v62 = (__int64)(v58 - (_QWORD)v56) >> 1;
      }
      if (v58 - (unsigned __int64)v56 >= 0x7FFFFFFFFFFFFFFCLL) {
        v63 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v63 = v62;
      }
      if (v63 != 0) {
        if (v63 >> 62 != 0) {
          goto LABEL_103;
        }
        v64 = v56;
        v65 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 4 * v63, 16, 0);
        v56 = v64;
      }
      else {
        v65 = 0;
      }
      v58 = v65 + 4 * v63;
      v66 = v56;
      v67 = (__int64)&v60[v65 + -4 * v61];
      *(_DWORD*)&v60[v65] = *(_DWORD*)v53;
      v57 = &v60[v65 + 4];
      a1 = GameRoutine_1a0b950(v67, v56, v60);
      if (v66 != nullptr) {
        v68 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v68 = 56;
        }
        a1 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v68, v66);
      }
      v54 = v110;
      v56 = (char*)v67;
    }
    else {
      *(_DWORD*)v57 = *(_DWORD*)v53;
      v57 += 4;
    }
    v53 += 4;
  } while (v53 != v52);
  if (v57 != v56) {
    v69 = 0;
    v70 = v56;
    v71 = v56;
    v72 = GameData_212c880[0];
    while (1) {
      if ((GameRoutine_84d980(v3 + 1168, v71) & 1) != 0) {
        v73 = *(_QWORD*)(v3 + 1208);
        v74 = *(_QWORD*)(v3 + 1200);
        *(_QWORD*)(v3 + 1248) = 0;
        *(_QWORD*)(v3 + 1256) = 0;
        v75 = v73 - v74;
        if ((int)((unsigned __int64)(v73 - v74) >> 2) >= 1) {
          v76 = *v72;
          v77 = (int)(v75 >> 2);
          if (v77 <= 1) {
            v78 = 1;
          }
          else {
            v78 = (int)(v75 >> 2);
          }
          if (v77 >= 4) {
            v85 = (_DWORD*)(v74 + 8);
            v86 = 0;
            v79 = 0;
            v80 = 0;
            v81 = 0;
            v82 = 0;
            do {
              v86 -= 4;
              v87 =
                  *(_QWORD*)(*(_QWORD*)(v76 + 64) + 8LL * (*(v85 - 2) & 0xFFF));
              v88 = v82 | (1 << *(_BYTE*)(v87 + 104));
              *(_WORD*)(v3 + 1248) = v88;
              v89 = (1LL << *(_BYTE*)(v87 + 250)) | v81;
              *(_QWORD*)(v3 + 1256) = v89;
              v90 = (1 << *(_BYTE*)(v87 + 115)) | v80;
              *(_DWORD*)(v3 + 1252) = v90;
              v91 = *(unsigned __int16*)(*(_QWORD*)(v87 + 24) + 1064LL) | v79;
              *(_WORD*)(v3 + 1250) = v91;
              v92 =
                  *(_QWORD*)(*(_QWORD*)(v76 + 64) + 8LL * (*(v85 - 1) & 0xFFF));
              v93 = v88 | (1 << *(_BYTE*)(v92 + 104));
              *(_WORD*)(v3 + 1248) = v93;
              v94 = (1LL << *(_BYTE*)(v92 + 250)) | v89;
              *(_QWORD*)(v3 + 1256) = v94;
              v95 = (1 << *(_BYTE*)(v92 + 115)) | v90;
              *(_DWORD*)(v3 + 1252) = v95;
              v96 = *(unsigned __int16*)(*(_QWORD*)(v92 + 24) + 1064LL) | v91;
              *(_WORD*)(v3 + 1250) = v96;
              v97 = *(_QWORD*)(*(_QWORD*)(v76 + 64) + 8LL * (*v85 & 0xFFF));
              v98 = v93 | (1 << *(_BYTE*)(v97 + 104));
              *(_WORD*)(v3 + 1248) = v98;
              v99 = (1LL << *(_BYTE*)(v97 + 250)) | v94;
              *(_QWORD*)(v3 + 1256) = v99;
              v100 = (1 << *(_BYTE*)(v97 + 115)) | v95;
              *(_DWORD*)(v3 + 1252) = v100;
              v101 = *(unsigned __int16*)(*(_QWORD*)(v97 + 24) + 1064LL) | v96;
              *(_WORD*)(v3 + 1250) = v101;
              LOWORD(v97) = v85[1];
              v85 += 4;
              v102 = *(_QWORD*)(*(_QWORD*)(v76 + 64) + 8 * (v97 & 0xFFF));
              v82 = v98 | (1 << *(_BYTE*)(v102 + 104));
              *(_WORD*)(v3 + 1248) = v82;
              v81 = (1LL << *(_BYTE*)(v102 + 250)) | v99;
              *(_QWORD*)(v3 + 1256) = v81;
              v80 = (1 << *(_BYTE*)(v102 + 115)) | v100;
              *(_DWORD*)(v3 + 1252) = v80;
              v79 = *(unsigned __int16*)(*(_QWORD*)(v102 + 24) + 1064LL) | v101;
              *(_WORD*)(v3 + 1250) = v79;
            } while (-(__int64)(v78 & 0xFFFFFFFFFFFFFFFCLL) != v86);
            v83 = -v86;
            v84 = v78 & 3;
            if (v84 != 0) {
            LABEL_90:
              v103 = (int*)(v74 + 4 * v83);
              do {
                v104 = *v103++;
                v69 = 1;
                --v84;
                v105 = *(_QWORD*)(*(_QWORD*)(v76 + 64) + 8LL * (v104 & 0xFFF));
                v82 |= 1 << *(_BYTE*)(v105 + 104);
                *(_WORD*)(v3 + 1248) = v82;
                v81 |= 1LL << *(_BYTE*)(v105 + 250);
                *(_QWORD*)(v3 + 1256) = v81;
                v80 |= 1 << *(_BYTE*)(v105 + 115);
                *(_DWORD*)(v3 + 1252) = v80;
                v79 |= *(unsigned __int16*)(*(_QWORD*)(v105 + 24) + 1064LL);
                *(_WORD*)(v3 + 1250) = v79;
              } while (v84 != 0);
              goto LABEL_78;
            }
          }
          else {
            v79 = 0;
            v80 = 0;
            v81 = 0;
            v82 = 0;
            v83 = 0;
            v84 = v78 & 3;
            if (v84 != 0) {
              goto LABEL_90;
            }
          }
        }
        v69 = 1;
      }
    LABEL_78:
      v71 += 4;
      if (v71 == v57) {
        goto LABEL_94;
      }
    }
  }
  v70 = v56;
  v69 = 0;
LABEL_94:
  v106 = v15 | v69;
  if (v70 != nullptr) {
    v107 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v107 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v107, v70);
  }
  if ((v106 & 1) != 0) {
  LABEL_99:
    v108 = *(_DWORD*)(v3 + 416);
    if ((v108 & 0x10000000) == 0) {
      *(_DWORD*)(v3 + 416) = v108 | 0x10000000;
      GameRoutine_6c51e0(v3);
      GameRoutine_6c6da0(v3);
      GameRoutine_6c6ec0(v3);
      *(_DWORD*)(v3 + 416) &= ~0x10000000u;
    }
  }
  return 1;
}

bool GameHr_6d2c90(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  char v4;
  int v5;
  __int64 v6;

  v2 = *(_QWORD*)(a1 + 1944);
  v3 = *a2;
  if (v2 != *a2) {
    *(_WORD*)(a1 + 1944) = v3;
    *(_BYTE*)(a1 + 1946) = *((_BYTE*)a2 + 2);
    v4 = *((_BYTE*)a2 + 7);
    *(_DWORD*)(a1 + 1947) = *(_DWORD*)((char*)a2 + 3);
    v5 = *(_DWORD*)(a1 + 416);
    *(_BYTE*)(a1 + 1951) = v4;
    if ((v5 & 0x10000000) == 0) {
      v6 = a1;
      *(_DWORD*)(a1 + 416) = v5 | 0x10000000;
      GameRoutine_6c51e0(a1);
      GameRoutine_6c6da0(v6);
      GameRoutine_6c6ec0(v6);
      a1 = v6;
      *(_DWORD*)(v6 + 416) &= ~0x10000000u;
    }
    *(_WORD*)(a1 + 20) |= 1u;
  }
  return v2 != v3;
}

#pragma GCC visibility pop
