#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_13fa520(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_15e77c0(_QWORD);
__int64 GameRoutine_18b7c20(_QWORD);
__int64 GameRoutine_18b7f20(_QWORD, _QWORD);
__int64 GameRoutine_18b83a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18b8e80(_QWORD, _QWORD);
__int64 GameRoutine_18b90a0(_QWORD);
__int64 GameRoutine_192c430(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(long double, double);
extern __int64 GameData_2114370;
extern __int64* GameData_212e008[9];
extern char GameData_1a9f09e;
__int64 ProcThermaeThermaeMenu_Unknown84(__int64 a1);
__int64 ProcThermaeThermaeMenu_Unknown88_alt1(__int64 a1) __asm__(
    "ProcThermaeThermaeMenu_Unknown88");
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_15758f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
extern __int64* GameData_212dcd0;
__int64 ProcThermaeThermaeMenu_192c430(__int64 a1, unsigned int a2);
__int64 BasicMenuCursor_16ddaa0(_QWORD, _QWORD);
__int64
game_facility_anonymous_ProcThermaeThermaeMenu_ACall_closure_Invoke(__int64 a1);
_QWORD* GameRoutine_13fa790(__int64, __int64, __int64, __int64, __int64);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
__int64 GameRoutine_9db9e0(unsigned int, unsigned int);
char* GameHr_67ed20(_QWORD*);
char* GameRoutine_60a020(char*, const char*);
extern __int64 (*GameData_2114398[])();
extern __int64 (*GameData_2114498[])();
extern __int64 (*game_sound_PlayDecideLightSe_ptr[6])();
extern __int64* GameData_212cc58[60];
extern __int64* GameData_212d2b8;
void* game_97b2f0(__int64);
void game_16ad210(__int64, __int64, char, __int64);
__int64 ProcThermaeThermaeMenu_Unknown100(__int64 a1);
__attribute__((swiftcall)) void
GameRoutine_13fa520_alt1(PSEUDO_X8, __int64*,
                         _QWORD*) __asm__("GameRoutine_13fa520");
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 Util_15758f0(__int64, __int64, unsigned int, unsigned int, unsigned int,
                     char, char);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
void InfoTitle_18b7c20(__int64);
void InfoTitle_18b7f20(__int64, _BYTE*);
void InfoTitle_18b83a0(__int64, _BYTE*, char);
void InfoTitle_18b8e80(__int64, _BYTE*);
void InfoTitle_18b90a0(__int64);
void ProcThermaeThermaeMenu_Unknown88(__int64 a1);

__int64 ProcThermaeThermaeMenu_Unknown84(__int64 a1)
{
  GameRoutine_192c430(a1, 0);
  GameRoutine_192c430(a1, 1);
  return GameRoutine_15e77c0(a1);
}

void ProcThermaeThermaeMenu_Unknown88(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  char* v10;
  _QWORD v11[2];
  struct {
    __int64 v12;
    __int64 v13;
  } v12_;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 != 0) {
    v3 = __dynamic_cast(v2, GameData_212e008[0], &GameData_2114370, 0);
    if (v3 != 0) {
      v4 = *(_QWORD*)(v3 + 88);
      v5 = v3;
      v11[0] = "L_Info";
      v11[1] = 6;
      GameRoutine_13fa520_alt1((void*)(&v12_.v12), (__int64*)(a1 + 848), v11);
      if (v12_.v13 != 0) {
        v6 = std___1___shared_weak_count_lock_alt1(v12_.v13);
        v7 = v12_.v12;
        if (v12_.v13 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v12_.v13);
        }
        if (v6 == 0 || v7 == 0) {
          if (v6 == 0) {
            return;
          }
          goto LABEL_22;
        }
        InfoTitle_18b7c20(v7);
        InfoTitle_18b7f20(v7, *(_BYTE**)(v4 + 32));
        InfoTitle_18b83a0(v7, *(_BYTE**)(v4 + 40), 0);
        v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 560LL))(v5) & 0x70000;
        v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 560LL))(v5);
        if (v8 != 0) {
          if ((v9 & 0x40000) != 0) {
            v10 = "MID_Menu_Cause_UsedChapter";
          }
          else if ((v9 & 0x20000) != 0) {
            v10 = "MID_Menu_Cause_UsedWeek";
          }
          else if ((v9 & 0x10000) != 0) {
            v10 = "MID_Menu_Cause_UsedDay";
          }
          else {
            v10 = &GameData_1a9f09e;
          }
        }
        else {
          if ((v9 & 0x20) == 0) {
            InfoTitle_18b90a0(v7);
            goto LABEL_22;
          }
          v10 = "MID_Menu_Cause_NotSunday";
        }
        InfoTitle_18b8e80(v7, v10);
      LABEL_22:
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          std___1___shared_weak_count___release_weak_alt1(v6);
        }
      }
    }
  }
}

__int64 ProcThermaeThermaeMenu_Unknown100(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  int v8;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  const char* v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  void* v24;
  __int64 v25;
  struct {
    _QWORD v26[4];
    _QWORD* v27;
  } v26_;
  struct {
    __int64 (*v28[4])();
    __int64 (**v29)();
  } v28_;
  const char* v30;
  struct {
    __int64* v31;
    __int64 (*v32)();
    char gap128_[16];
    __int64** v33;
  } v31_;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 == 0) {
    return 1;
  }
  v3 = a1;
  v4 = __dynamic_cast(v2, GameData_212e008[0], &GameData_2114370, 0);
  if (v4 == 0) {
    return 1;
  }
  v5 = v4;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 464LL))(v4) & 1) == 0) {
    return 1;
  }
  v6 = GameData_212dcd0;
  v7 = *(_QWORD*)(v5 + 88);
  if (v7 != 0) {
    v8 = *(unsigned __int16*)(v7 + 16);
  }
  else {
    v8 = -1;
  }
  *(_DWORD*)(*GameData_212dcd0 + 8) = v8;
  v31_.v32 = (__int64 (*)())v3;
  v30 = "MID_ThermaeMenu_Confirm";
  v31_.v31 = (__int64*)GameData_2114398;
  v26_.v27 = v26_.v26;
  v31_.v33 = &v31_.v31;
  v28_.v29 = v28_.v28;
  v28_.v28[0] = (__int64 (*)())GameData_2114498;
  v26_.v26[0] = GameData_2114498;
  v10 = (char*)GameRoutine_13fa790(v3, (__int64)&v30, (__int64)&v31_.v31,
                                   (__int64)v28_.v28, (__int64)v26_.v26);
  if (v26_.v27 == v26_.v26) {
    v11 = 32;
  }
  else {
    if (v26_.v27 == nullptr) {
      goto LABEL_14;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v26_.v27 + v11))((__int64)v26_.v27);
LABEL_14:
  if (v28_.v29 == v28_.v28) {
    v12 = 32;
  }
  else {
    if (v28_.v29 == nullptr) {
      goto LABEL_19;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))((char*)*v28_.v29 + v12))((__int64)v28_.v29);
LABEL_19:
  if (v31_.v33 == &v31_.v31) {
    v13 = 4;
  }
  else {
    if (v31_.v33 == nullptr) {
      goto LABEL_24;
    }
    v13 = 5;
  }
  ((void (*)(void*))(*v31_.v33)[v13])(v31_.v33);
LABEL_24:
  v28_.v29 = v28_.v28;
  v31_.v33 = &v31_.v31;
  v28_.v28[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v28_.v28[1] = game_sound_PlayDecideLightSe_ptr[0];
  v31_.v31 = GameData_212d2b8 + 2;
  v31_.v32 = game_sound_PlayDecideLightSe_ptr[0];
  GameRoutine_654050(&v31_.v31, (_QWORD*)v10 + 144);
  if (v31_.v33 == &v31_.v31) {
    v14 = 4;
  }
  else {
    if (v31_.v33 == nullptr) {
      goto LABEL_29;
    }
    v14 = 5;
  }
  ((void (*)(void*))(*v31_.v33)[v14])(v31_.v33);
LABEL_29:
  if (v28_.v29 == v28_.v28) {
    v15 = 32;
  }
  else {
    if (v28_.v29 == nullptr) {
      goto LABEL_34;
    }
    v15 = 40;
  }
  (*(void (**)(__int64))((char*)*v28_.v29 + v15))((__int64)v28_.v29);
LABEL_34:
  v16 = *(unsigned int*)(*v6 + 8);
  if ((v16 & 0x80000000) == 0) {
    v17 = *(_QWORD*)(*(_QWORD*)(*GameData_212cc58[0] + 64) + 8 * v16);
    if (v17 != 0) {
      v18 = *(const char**)(v17 + 32);
      if (v18 != nullptr) {
        GameRoutine_60a020(v10 + 1496, v18);
      }
      v19 = GameRoutine_9db9e0(0x15u, *(unsigned __int16*)(v17 + 68));
      v20 = *v6;
      *((_DWORD*)v10 + 392) = v19;
      v21 = *(_QWORD*)(v20 + 48);
      v22 = *(_QWORD*)(v20 + 56);
      if ((int)((unsigned __int64)(v22 - v21) >> 3) >= 1) {
        v23 = 0;
        do {
          if (v23 < (v22 - v21) >> 3) {
            v25 = *(_QWORD*)(v21 + 8 * v23);
            if (v25 != 0) {
              if (*(_BYTE*)(v25 + 2136) != 0) {
                v24 = game_97b2f0(v25 + 2104);
              }
              else {
                v24 = GameHr_67ed20(*(_QWORD**)(v25 + 392));
              }
              game_16ad210((__int64)v10, *(_QWORD*)(v25 + 392), 6,
                           (__int64)v24);
              v20 = *v6;
            }
          }
          v21 = *(_QWORD*)(v20 + 48);
          v22 = *(_QWORD*)(v20 + 56);
          ++v23;
        } while ((__int64)v23 < (int)((unsigned __int64)(v22 - v21) >> 3));
      }
    }
  }
  return 12;
}

__int64 ProcThermaeThermaeMenu_192c430(__int64 a1, unsigned int a2)
{
  __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;
  struct {
    __int64 v13;
    __int64 v14;
  } v13_;

  v4 = *(_QWORD*)(*GameData_212dcd0 + 48);
  if (a2 >=
      (unsigned __int64)((*(_QWORD*)(*GameData_212dcd0 + 56) - v4) >> 3)) {
    v5 = 0;
  }
  else {
    v5 = *(_QWORD*)(v4 + 8LL * a2);
  }
  v6 = game_util_Format_alt1("L_UnitInfo%02d", a2);
  LayoutAccessor_1560070((void*)(&v13_.v13), (__int64*)(a1 + 848), v6);
  Util_15758f0((__int64)&v13_.v13, v5, 0xFFFFFFFF, 2u, 6u, 0, 1);
  if (v13_.v14 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v13_.v14);
  }
  v7 = game_util_Format_alt1("L_UnitInfo%02d/L_UnitInfo", a2);
  LayoutAccessor_1560070((void*)(&v11_.v11), (__int64*)(a1 + 848), v7);
  result = v11_.v12;
  if (v11_.v12 != 0) {
    v9 = std___1___shared_weak_count_lock_alt1(v11_.v12);
    if (v9 != 0) {
      v10 = v9;
      if (v11_.v11 != 0) {
        LayoutAccessor_1562cf0_alt1(v11_.v11, "Simple01");
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak_alt1(v10);
      }
    }
    result = v11_.v12;
    if (v11_.v12 != 0) {
      return std___1___shared_weak_count___release_weak_alt1(v11_.v12);
    }
  }
  return result;
}

__int64

game_facility_anonymous_ProcThermaeThermaeMenu_ACall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *GameData_212dcd0;
  *(_DWORD*)(v2 + 8) = -1;
  *(_DWORD*)(v2 + 44) = -1;
  *(_QWORD*)(v2 + 56) = *(_QWORD*)(v2 + 48);
  *(_QWORD*)(v2 + 80) = *(_QWORD*)(v2 + 72);
  *(_QWORD*)(v2 + 12) = -1;
  *(_QWORD*)(v2 + 20) = -1;
  *(_QWORD*)(v2 + 28) = -1;
  *(_QWORD*)(v2 + 36) = -1;
  return BasicMenuCursor_16ddaa0(v1, 5);
}

#pragma GCC visibility pop
