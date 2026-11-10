#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterTrailModule_d3d7a0(_QWORD, _QWORD, _QWORD);
__int64 CharacterTrailModule_d3d960(long double);
__n128 GameRoutine_109d5e0(unsigned int*);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
char** GameRoutine_108c640(int);
extern __int64 (*GameData_2009400[])();
extern __int64 (*game_character_CharacterBaseModule_vtable)();
extern __int64 (*game_character_CharacterLookAt_vtable[])();
extern __int64 (*kaneko_WPHolder_vtable[])();
extern __int64 GameData_21d8778;
extern int GameData_21d92e0;
void CharacterLookAt_10b7fc0(__int64 a1);
__n128 CharacterLookAt_Destructor(__int64 a1);
char** game_character_CharacterLookAt_Startup_lambda2_Invoke(__int64 a1,
                                                             int* a2);
__int64 game_character_CharacterLookAt_Startup_lambda3_Invoke(__int64 result,
                                                              __int64 a2);

void CharacterLookAt_10b7fc0(__int64 a1)
{
  long double v2;
  int v3;
  __int64 v4;
  char* v5;
  char* v6;
  __int64 v7;

  GameRoutine_109d5e0((unsigned int*)(a1 + 168));
  GameRoutine_109d5e0((unsigned int*)(a1 + 200));
  *(__n128*)&v2 = GameRoutine_109d5e0((unsigned int*)(a1 + 232));
  *(_QWORD*)(a1 + 264) = 0;
  v3 = *(_DWORD*)(a1 + 440);
  if (v3 != 0) {
    v4 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 72LL);
    v5 = *(char**)(v4 + 56);
    v6 = *(char**)(v4 + 64);
    if (v5 != v6) {
      do {
        if (v3 == *(_DWORD*)v5) {
          *(_DWORD*)v5 = 0;
        }
        v5 += 80;
      } while (v5 != v6);
      v5 = *(char**)(v4 + 56);
      v6 = *(char**)(v4 + 64);
    }
    if (0xCCCCCCCCCCCCCCCDLL * ((v6 - v5) >> 4) >= 0x40) {
      v7 = CharacterTrailModule_d3d960(v2);
      CharacterTrailModule_d3d7a0(v4 + 56, v7, *(_QWORD*)(v4 + 64));
    }
  }
  *(_DWORD*)(a1 + 96) |= 1u;
}

__n128 CharacterLookAt_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __n128 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = game_character_CharacterLookAt_vtable;
  *(_QWORD*)(a1 + 56) = GameData_2009400;
  CharacterLookAt_10b7fc0(a1);
  GameRoutine_109d5e0((unsigned int*)(a1 + 232));
  v2 = *(_QWORD*)(a1 + 256);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  GameRoutine_109d5e0((unsigned int*)(a1 + 200));
  v3 = *(_QWORD*)(a1 + 224);
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  result = GameRoutine_109d5e0((unsigned int*)(a1 + 168));
  v5 = *(_QWORD*)(a1 + 192);
  if (v5 != 0) {
    result = std___1___shared_weak_count___release_weak(v5);
  }
  v6 = *(_QWORD*)(a1 + 88);
  *(_QWORD*)(a1 + 56) = kaneko_WPHolder_vtable;
  if (v6 != 0) {
    result = std___1___shared_weak_count___release_weak(v6);
  }
  v7 = *(_QWORD*)(a1 + 72);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v7 + 16LL))(
        v7, *(long double*)&result);
    result = std___1___shared_weak_count___release_weak(v7);
  }
  v8 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)a1 = &game_character_CharacterBaseModule_vtable;
  if (v8 != 0) {
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

char** game_character_CharacterLookAt_Startup_lambda2_Invoke(__int64 a1,
                                                             int* a2)
{
  int v2;
  float* v3;
  char** result;
  int v5;
  int v6;
  int v7;
  __int64 v8;
  float v9;
  int v15;
  int v16;

  v2 = *a2;
  v3 = *(float**)(a1 + 8);
  result = GameRoutine_108c640(*a2);
  v5 = *((_DWORD*)result + 6);
  v6 = *((_DWORD*)result + 7);
  v7 = *((_DWORD*)result + 8);
  v8 = 508;
  v3[115] = *((float*)result + 5);
  v9 = 0.0;
  *((_DWORD*)v3 + 118) = v5;
  *((_DWORD*)v3 + 121) = v6;
  *((_DWORD*)v3 + 124) = v7;
  if (v2 > -270062628) {
    if (v2 <= -77626399) {
      if (v2 != -270062627 && v2 != -93581017) {
        goto LABEL_9;
      }
    }
    else if (v2 != -77626398 && v2 != 1400556095 && v2 != 1715476756) {
      goto LABEL_9;
    }
  }
  else if (((unsigned int)(v2 + 1193575789) > 0x10 ||
            ((1 << (v2 + 109)) & 0x10403) == 0) &&
           v2 != -972548316) {
  LABEL_9:
    v9 = 1.0;
    v8 = 512;
  }
  v3[37] = v9;
  v15 = *(_DWORD*)(GameData_21d8778 + v8);
  v16 = *((_DWORD*)v3 + 108);
  *((_DWORD*)v3 + 38) = v15;
  if (v16 == 1) {
    *((_DWORD*)v3 + 108) = 2;
  }
  return result;
}

__int64 game_character_CharacterLookAt_Startup_lambda3_Invoke(__int64 result,
                                                              __int64 a2)
{
  __int64 v2;
  __int64 v3;
  int v5;

  v2 = *(_QWORD*)(result + 8);
  v3 = *(_QWORD*)(v2 + 32);
  if (v3 != 0 && *(_QWORD*)(v3 + 8) != -1 && *(_QWORD*)(v2 + 40) != 0) {
    if (*(_BYTE*)(*(_QWORD*)a2 + 32LL) != 1) {
      if (*(_DWORD*)(v2 + 432) == 3) {
        return result;
      }
      v5 = 2;
      goto LABEL_12;
    }
    if (GameData_21d92e0 != 4 && (*(_DWORD*)(v2 + 432) & 0xFFFFFFFE) != 2) {
      v5 = 1;
    LABEL_12:
      *(_DWORD*)(v2 + 432) = v5;
    }
  }
  return result;
}

#pragma GCC visibility pop
