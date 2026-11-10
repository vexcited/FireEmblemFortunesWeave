#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool GameRoutine_108cdc0(int);
extern int GameData_21d87e8;
__int64 game_character_CharacterIK_Startup_lambda0_Invoke(__int64 result);
bool game_character_CharacterIK_Startup_lambda1_Invoke(__int64 a1, int* a2);

__int64 game_character_CharacterIK_Startup_lambda0_Invoke(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;

  v1 = *(_QWORD*)(result + 8);
  if (*(float*)(v1 + 64) > 0.0 && (*(_BYTE*)(v1 + 16) & 1) != 0) {
    v2 = *(__int64**)(v1 + 80);
    v3 = *(__int64**)(v1 + 88);
    if (v2 != v3) {
      if (*(_DWORD*)(*(_QWORD*)(v1 + 40) + 384LL) == 1) {
        do {
          result = *v2;
          if (*(_BYTE*)(*v2 + 17) != 0) {
            result =
                (*(__int64 (**)(__int64))(*(_QWORD*)result + 40LL))(result);
            if ((result & 1) != 0) {
              result = (*(__int64 (**)(__int64))(*(_QWORD*)*v2 + 32LL))(*v2);
            }
          }
          ++v2;
        } while (v2 != v3);
      }
      else {
        do {
          result = *v2;
          if (*(_BYTE*)(*v2 + 17) != 0) {
            result =
                (*(__int64 (**)(__int64))(*(_QWORD*)result + 32LL))(result);
          }
          ++v2;
        } while (v2 != v3);
      }
    }
    *(_DWORD*)(v1 + 212) = GameData_21d87e8;
  }
  return result;
}

bool game_character_CharacterIK_Startup_lambda1_Invoke(__int64 a1, int* a2)
{
  __int64 v2;
  _BOOL8 result;
  int v4;

  v2 = *(_QWORD*)(a1 + 8);
  result = GameRoutine_108cdc0(*a2);
  if (result) {
    v4 = 0;
  }
  else {
    v4 = 256;
  }
  *(_DWORD*)(v2 + 56) = *(_DWORD*)(v2 + 56) & 0xFFFFFEDF | v4;
  return result;
}

#pragma GCC visibility pop
