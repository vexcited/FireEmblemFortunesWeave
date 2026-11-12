#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1f95160[])();
extern __int64 GameData_212bf68;
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
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
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
__int64* GameRoutine_6bde00(__int64* result, __int64*, unsigned __int64,
                            __int64*, signed __int64);
__int64 GameRoutine_6c1f80(__int64 result, __int64*, __int64, unsigned __int64,
                           __int64*, signed __int64);
__int64 GameRoutine_6c3050(__int64, __int64, __int64, __int64, __int64,
                           __int64);
__int64 GameRoutine_6c4610(_QWORD);
__int64 GameRoutine_6c4d60(_QWORD);
__int64 GameRoutine_6e36c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_70f550(_QWORD, _QWORD);
__int64 GameRoutine_712a40(_QWORD);
__int64 GameRoutine_713480(_QWORD);
__int64 GameRoutine_74e220(_QWORD);
__int64 GameRoutine_7fb7c0(_QWORD);
__int64 GameRoutine_7fc5c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_819160(_QWORD);
__int64 GameRoutine_819400(_QWORD);
__int64 GameRoutine_843420(_QWORD, _QWORD);
__int64 GameRoutine_84cf20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_936cf0(_QWORD, _QWORD);
__int64 GameRoutine_93c2e0(_QWORD, _QWORD);
__int64 GameRoutine_960280(_QWORD);
__int64 GameRoutine_a82380(_QWORD);
__int64 GameHr_6c1f80(__int64 result, __int64*, __int64, unsigned __int64,
                      __int64*, __int64);
unsigned __int8* fs_638380(unsigned __int8* result, unsigned __int8*, __int64);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
bool GameHr_6390c0(__int64 a1, unsigned __int8** a2, unsigned __int8* a3,
                   __int64 a4);
__int64 GameHr_6c2240(__int64 result, __int64* a2, __int64 a3,
                      unsigned __int64 a4, __int64* a5);
_QWORD* LegionPool_936cf0(_QWORD* result, __int64);
_QWORD* UnitItemList_712a40(_QWORD* result);
__int64
GameRoutine_1210350_alt1(__int64 result,
                         unsigned __int8) __asm__("GameRoutine_1210350");
__int64 RidePool_93c2e0(__int64 result, __int64);
__int64 UnitActor_819160(__int64);
__int64 UnitActor_819400(__int64);
__int64 UnitItemList_713480(unsigned __int16*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_6c4d60(__int64);
__int64 game_960280(__int64 result);
__int64 game_Unit_Unknown6c4610(__int64);
__int64 memset(__int64, int, unsigned __int64);
bool game_HasActiveSkill_843420(_DWORD*, __int64);
extern __int64 fw_memory_g_heap_manager_ptr;
extern int game_g_shared_system_skills;
void GameHr_6c3050(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 GameHr_6c47b0(__int64 a1, unsigned __int8* a2, char a3, char a4);
bool GameHr_674d00(__int64* a1, __int64* a2);

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

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = *a2;
  v5 = **a2;
  if (v5 == 46) {
    v6 = v4 + 1;
    *a2 = v4 + 1;
    if (v4 + 1 == a3) {
      GameRoutine_638240(
          "End of input while parsing format specifier precision"),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v7 = *v6;
    if (v7 == 123) {
      *a2 = v4 + 2;
      if (v4 + 2 == a3) {
        GameRoutine_638240("End of input while parsing an argument index"),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v9 = a2;
      v11 = fs_638380(v4 + 2, a3, a4),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (a3 == v11 || *v11 != 125) {
        GameRoutine_638240("The argument index is invalid"),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
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
                           "an argument index"),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
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
                  "The numeric value of the format specifier is too large"),
                  v12 = COERCE_AS(
                      __typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
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

#pragma clang fp contract(off)
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
  __int64 v18;
  __int64* v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64* v26;
  unsigned __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;

  if (a4 != 0) {
    v5 = a5;
    v8 = (__int64*)result;
    if (a4 == 2) {
      v9 = *(a2 - 1);
      v10 = *(_QWORD*)(a3 + 32);
      v37 = *v8;
      v38 = v9;
      if (v10 == 0) {
        goto LABEL_48;
      }
      result = (*(__int64 (**)(__int64, __int64*, __int64*))(
          *(_QWORD*)v10 + 48LL))(v10, &v38, &v37);
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
        v24 = a4 >> 1;
        v26 = (__int64*)(result + 8 * (a4 >> 1));
        v27 = 8 * (a4 >> 1);
        GameHr_6c1f80(result, v26, a3, v24, a5, v24);
        result =
            GameHr_6c1f80((__int64)v26, a2, a3, a4 - v24, &v5[v24], a4 - v24);
        if (v27 != 0) {
          v28 = v26;
          while (v28 != a2) {
            v29 = *v28;
            v30 = *(_QWORD*)(a3 + 32);
            v37 = *v8;
            v38 = v29;
            if (v30 == 0) {
              goto LABEL_48;
            }
            result = (*(__int64 (**)(__int64, __int64*, __int64*))(
                *(_QWORD*)v30 + 48LL))(v30, &v38, &v37);
            if ((result & 1) != 0) {
              v31 = v28;
            }
            else {
              v31 = v8;
            }
            if ((result & 1) != 0) {
              v32 = 8;
            }
            else {
              v32 = 0;
            }
            v33 = *v31;
            v28 = (__int64*)((char*)v28 + v32);
            if ((result & 1) != 0) {
              v34 = 0;
            }
            else {
              v34 = 8;
            }
            v8 = (__int64*)((char*)v8 + v34);
            *v5++ = v33;
            if (v8 == v26) {
              goto LABEL_46;
            }
          }
          while (v8 != v26) {
            v35 = *v8++;
            *v5++ = v35;
          }
        }
        else {
          v28 = v26;
        LABEL_46:
          while (v28 != a2) {
            v36 = *v28++;
            *v5++ = v36;
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
            v18 = *(_QWORD*)(a3 + 32);
            v37 = v16;
            v38 = v17;
            if (v18 == 0) {
              break;
            }
            result = (*(__int64 (**)(__int64, __int64*, __int64*))(
                *(_QWORD*)v18 + 48LL))(v18, &v38, &v37);
            if ((result & 1) != 0) {
              v14[1] = *v14;
              v19 = v5;
              if (v14 != v5) {
                v20 = v13;
                while (1) {
                  v21 = (__int64*)((char*)v5 + v20);
                  v22 = *v12;
                  v23 = *(_QWORD*)(a3 + 32);
                  v37 = *(__int64*)((char*)v5 + v20 - 8);
                  v38 = v22;
                  if (v23 == 0) {
                    goto LABEL_48;
                  }
                  result = (*(__int64 (**)(__int64, __int64*, __int64*))(
                      *(_QWORD*)v23 + 48LL))(v23, &v38, &v37);
                  if ((result & 1) == 0) {
                    break;
                  }
                  v20 -= 8;
                  *v21 = *(v21 - 1);
                  if (v20 == 0) {
                    v19 = v5;
                    goto LABEL_23;
                  }
                }
                v19 = (__int64*)((char*)v5 + v20);
              }
            LABEL_23:
              *v19 = *v12;
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
          GameRoutine_60a310_alt1();
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

__int64 GameHr_6c47b0(__int64 a1, unsigned __int8* a2, char a3, char a4)
{
  unsigned int v4;
  __int64 v5;
  unsigned int v10;
  _BOOL4 v11;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  bool v16;
  char v17;
  int v18;
  unsigned int v19;
  __int64 v20;
  __int64* v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  char v32;
  int v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  bool v49;
  __int64 v50;
  char v51;
  unsigned int v52;
  int v53;
  int v54;

  v4 = *a2;
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
  v53 = game_g_shared_system_skills & 0xFFF;
  v15 =
      ((unsigned __int64)(unsigned int)game_g_shared_system_skills >> 5) & 0x7F;
  if (v15 + 1 <= v14 >> 2 &&
          ((*(_DWORD*)(v13 + 4LL * (unsigned int)v15) >>
            game_g_shared_system_skills) &
           1) != 0 &&
          (v16 = game_HasActiveSkill_843420(&v53, a1 + 1744),
           v5 = *(_QWORD*)(a1 + 440), v16) &&
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
        UnitItemList_713480((unsigned __int16*)(a1 + 828));
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
        game_6c4d60(a1);
      }
      UnitActor_819160(a1);
      UnitActor_819400(a1);
      v22 = *(_QWORD**)(a1 + 2200);
      if (v22 != nullptr) {
        v23 = v22[330];
        v24 = fw_memory_g_heap_manager_ptr;
        if (v23 != 0) {
          v25 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
          v22[331] = v23;
          v26 = 128;
          if (*(_QWORD*)(v25 + 200) == 0) {
            v26 = 56;
          }
          nn_mem_StandardAllocator_Free(v25 + v26, v23);
        }
        v27 = v22[3];
        if (v27 != 0) {
          v28 = *(_QWORD*)v24;
          v22[4] = v27;
          v29 = 128;
          if (*(_QWORD*)(v28 + 200) == 0) {
            v29 = 56;
          }
          nn_mem_StandardAllocator_Free(v28 + v29, v27);
        }
        v30 = 128;
        if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) == 0) {
          v30 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v24 + v30, (__int64)v22);
        *(_QWORD*)(a1 + 2200) = 0;
      }
    }
    else if (*(_QWORD*)(a1 + 2200) == 0) {
      v20 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 2680, 16, 0);
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
      memset(v20 + 64, 255, 0x400u);
      *(_QWORD*)(v20 + 2664) = 0;
      *(_QWORD*)(v20 + 2672) = 0;
      memset(v20 + 1096, 0, 0x604u);
      *(_QWORD*)(a1 + 2200) = v20;
    }
  }
  if ((a4 & 1) == 0) {
    v31 = *(_QWORD*)(a1 + 440);
    v32 = v31 != 0 ? *(_BYTE*)(v31 + 16) : 9;
    if (((1 << v32) & 0xB1) != 0) {
      v33 = *a2;
      if (v33 == 9 || v33 == 5) {
        UnitItemList_712a40((_QWORD*)(a1 + 828));
        game_960280(a1);
      }
    }
  }
  *(_WORD*)(a1 + 20) |= 4u;
  GameRoutine_1210350_alt1(a1, *a2);
  v35 = *(_QWORD*)(a1 + 432);
  v34 = *(_QWORD**)(a1 + 440);
  v36 = *(_QWORD*)(a1 + 424);
  if (v35 != 0) {
    *(_QWORD*)(v35 + 424) = v36;
    if (v36 == 0) {
      goto LABEL_51;
    }
  LABEL_50:
    *(_QWORD*)(v36 + 432) = *(_QWORD*)(a1 + 432);
    goto LABEL_53;
  }
  v34[1] = v36;
  if (v36 != 0) {
    *(_QWORD*)(v36 + 432) = 0;
    v36 = *(_QWORD*)(a1 + 424);
    if (v36 != 0) {
      goto LABEL_50;
    }
  }
LABEL_51:
  v37 = *(_QWORD*)(a1 + 432);
  *v34 = v37;
  if (v37 != 0) {
    *(_QWORD*)(v37 + 424) = 0;
  }
LABEL_53:
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  v38 = *a2;
  if (v38 == 9) {
    GameHr_6c3050(a1);
    v38 = *a2;
  }
  v39 = *(_QWORD*)(GameData_21ca310 + 56) + 556000LL;
  v40 = v39 + 24LL * v38;
  if ((a3 & 1) != 0) {
    if (v38 >= 0xA) {
      v41 = 0;
    }
    else {
      v41 = v39 + 24LL * v38;
    }
    v42 = v39 + 24LL * *(unsigned __int8*)(v40 + 16);
    if (*(unsigned __int8*)(v40 + 16) >= 0xAu) {
      v42 = 0;
    }
    *(_QWORD*)(a1 + 440) = v42;
    v43 = *(_QWORD*)(v41 + 8);
    if (v43 != 0) {
      *(_QWORD*)(v43 + 432) = a1;
      *(_QWORD*)(a1 + 424) = v43;
    }
    else {
      *(_QWORD*)v40 = a1;
    }
    *(_QWORD*)(v41 + 8) = a1;
  }
  else {
    v44 = v39 + 24LL * *(unsigned __int8*)(v40 + 16);
    if (*(unsigned __int8*)(v40 + 16) >= 0xAu) {
      v44 = 0;
    }
    *(_QWORD*)(a1 + 440) = v44;
    v45 = *(_QWORD*)v40;
    if (*(_QWORD*)v40 != 0) {
      *(_QWORD*)(v45 + 424) = a1;
      *(_QWORD*)(a1 + 432) = v45;
    }
    else {
      *(_QWORD*)(v40 + 8) = a1;
    }
    *(_QWORD*)v40 = a1;
  }
  game_Unit_Unknown6c4610(a1);
  if ((a4 & 1) != 0) {
    return 1;
  }
  v46 = *(_QWORD*)(a1 + 1744);
  v47 = *(_QWORD*)(a1 + 1752) - v46;
  v54 = game_g_shared_system_skills & 0xFFF;
  v48 =
      ((unsigned __int64)(unsigned int)game_g_shared_system_skills >> 5) & 0x7F;
  if (v48 + 1 <= v47 >> 2 && ((*(_DWORD*)(v46 + 4LL * (unsigned int)v48) >>
                               game_g_shared_system_skills) &
                              1) != 0) {
    v49 = game_HasActiveSkill_843420(&v54, a1 + 1744);
    v50 = *(_QWORD*)(a1 + 440);
    if (v49) {
      v51 = v50 != 0 ? *(_BYTE*)(v50 + 16) : 9;
      if (((1 << v51) & 0xF1) != 0) {
        goto LABEL_85;
      }
    }
  }
  else {
    v50 = *(_QWORD*)(a1 + 440);
  }
  if (v50 != 0) {
    v52 = *(unsigned __int8*)(v50 + 16);
    if (v52 <= 7 && ((1 << v52) & 0x91) != 0) {
      if ((v19 & 1) != 0) {
        return 1;
      }
      goto LABEL_86;
    }
  }
LABEL_85:
  if ((v19 & 1) != 0) {
  LABEL_86:
    RidePool_93c2e0(*(_QWORD*)(*(_QWORD*)GameData_212cf88[0] + 8LL), a1);
    LegionPool_936cf0(*(_QWORD**)(*(_QWORD*)GameData_212cf80[0] + 8LL), a1);
  }
  return 1;
}

#pragma GCC visibility pop
