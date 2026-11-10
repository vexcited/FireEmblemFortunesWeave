#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7c41f0(void);
extern __int64* GameData_212ce80[5];
__int64 game_map_history_Impl_UpdateMap_lambda0_Invoke(__int64 a1, int* a2,
                                                       int* a3);
bool game_map_history_Impl_PreviewDeserializer_Run_lambda0_Invoke(__int64 a1,
                                                                  __int64 a2);
bool game_map_history_Impl_PreviewDeserializer_Run_lambda1_Invoke(__int64 a1,
                                                                  __int64 a2);

__int64 game_map_history_Impl_UpdateMap_lambda0_Invoke(__int64 a1, int* a2,
                                                       int* a3)
{
  int v3;
  int v4;
  __int64 result;
  _DWORD* v6;
  int v7;
  int v8;
  int v9;
  int v10;
  __int64 v11;

  v3 = *a2;
  v4 = *a3;
  result = *GameData_212ce80[0];
  v6 = (_DWORD*)(*GameData_212ce80[0] + 61440);
  if (*(int*)(*GameData_212ce80[0] + 61624) < 1) {
    return GameRoutine_7c41f0();
  }
  v7 = *(_DWORD*)(*GameData_212ce80[0] + 61472);
  v8 = *(_DWORD*)(*GameData_212ce80[0] + 61476);
  if (v3 < v7) {
    v7 = v3;
  }
  if (v4 < v8) {
    v8 = v4;
  }
  *(_DWORD*)(*GameData_212ce80[0] + 61472) = v7;
  v6[9] = v8;
  v9 = v6[10];
  v10 = v6[11];
  if (v9 <= v3) {
    v9 = v3;
  }
  if (v10 <= v4) {
    v10 = v4;
  }
  v6[10] = v9;
  v6[11] = v10;
  v11 = result + 4LL * ((v3 + 32 * v4) >> 5);
  *(_DWORD*)(v11 + 61488) |= 1 << v3;
  return result;
}

bool game_map_history_Impl_PreviewDeserializer_Run_lambda0_Invoke(__int64 a1,
                                                                  __int64 a2)
{
  return *(_BYTE*)(a2 + 8) == 3;
}

bool game_map_history_Impl_PreviewDeserializer_Run_lambda1_Invoke(__int64 a1,
                                                                  __int64 a2)
{
  return *(_BYTE*)(a2 + 8) != 3;
}

#pragma GCC visibility pop
