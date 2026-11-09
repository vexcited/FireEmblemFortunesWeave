#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int64 GameData_2240178;
extern __int64 game_GameModeData_instance_;
extern char GameData_1a9f09e;
__int64 Variable_Destructor(__int64 a1, __int64 a2);

__int64 Variable_Destructor(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int8 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64* i;
  int v21;
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
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD v36[4];

  v4 = *(int*)(a2 + 20);
  v6 = *(_BYTE*)(a1 + 8);
  result = a2;
  *(_DWORD*)(a2 + 20) = v4 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v4) = 1;
  v8 = GameData_2240178;
  if (GameData_2240178 != 0) {
    v36[2] = v2;
    v36[3] = v3;
    v9 = *(int*)(result + 20);
    v10 = result;
    *(_DWORD*)(result + 20) = v9 + 1;
    *(_BYTE*)(*(_QWORD*)(result + 8) + v9) = 11;
    v11 = v8 + 32LL * v6;
    v12 = game_GameModeData_instance_;
    v13 = *(int*)(result + 20);
    *(_DWORD*)(result + 20) = v13 + 1;
    *(_BYTE*)(*(_QWORD*)(result + 8) + v13) = 0;
    v14 = *(int*)(result + 20);
    v15 = *(_QWORD*)(v11 + 24) - *(_QWORD*)(v11 + 16);
    *(_DWORD*)(result + 20) = v14 + 1;
    *(_BYTE*)(*(_QWORD*)(result + 8) + v14) = v15 >> 3;
    v16 = *(int*)(result + 20);
    *(_DWORD*)(result + 20) = v16 + 1;
    *(_BYTE*)(*(_QWORD*)(result + 8) + v16) = v15 >> 11;
    v17 = *(int*)(result + 20);
    *(_DWORD*)(result + 20) = v17 + 1;
    *(_BYTE*)(*(_QWORD*)(result + 8) + v17) = v15 >> 19;
    v18 = *(int*)(result + 20);
    *(_DWORD*)(result + 20) = v18 + 1;
    *(_BYTE*)(*(_QWORD*)(result + 8) + v18) = v15 >> 27;
    v19 = *(__int64**)(v11 + 16);
    for (i = *(__int64**)(v11 + 24); v19 != i;
         *(_BYTE*)(*(_QWORD*)(v10 + 8) + v25) = HIBYTE(v21)) {
      v26 = *(int*)(v10 + 20);
      v36[1] = &GameData_1a9f09e;
      v27 = *v19;
      *(_DWORD*)(v10 + 20) = v26 + 1;
      v28 = *(_QWORD*)(v10 + 8);
      v36[0] = v27;
      *(_BYTE*)(v28 + v26) = v27;
      v29 = *(int*)(v10 + 20);
      *(_DWORD*)(v10 + 20) = v29 + 1;
      *(_BYTE*)(*(_QWORD*)(v10 + 8) + v29) = BYTE1(v27);
      v30 = *(int*)(v10 + 20);
      *(_DWORD*)(v10 + 20) = v30 + 1;
      *(_BYTE*)(*(_QWORD*)(v10 + 8) + v30) = BYTE2(v27);
      v31 = *(int*)(v10 + 20);
      *(_DWORD*)(v10 + 20) = v31 + 1;
      *(_BYTE*)(*(_QWORD*)(v10 + 8) + v31) = BYTE3(v27);
      v32 = *(int*)(v10 + 20);
      *(_DWORD*)(v10 + 20) = v32 + 1;
      *(_BYTE*)(*(_QWORD*)(v10 + 8) + v32) = BYTE4(v27);
      v33 = *(int*)(v10 + 20);
      *(_DWORD*)(v10 + 20) = v33 + 1;
      *(_BYTE*)(*(_QWORD*)(v10 + 8) + v33) = BYTE5(v27);
      v34 = *(int*)(v10 + 20);
      *(_DWORD*)(v10 + 20) = v34 + 1;
      *(_BYTE*)(*(_QWORD*)(v10 + 8) + v34) = BYTE6(v27);
      v35 = *(int*)(v10 + 20);
      *(_DWORD*)(v10 + 20) = v35 + 1;
      *(_BYTE*)(*(_QWORD*)(v10 + 8) + v35) = HIBYTE(v27);
      result = game_GameVariableTable_Find(*(_QWORD*)(v12 + 48), v36);
      if (result != 0) {
        v21 = *(_DWORD*)(result + 32);
      }
      else {
        v21 = 0;
      }
      v22 = *(int*)(v10 + 20);
      ++v19;
      *(_DWORD*)(v10 + 20) = v22 + 1;
      *(_BYTE*)(*(_QWORD*)(v10 + 8) + v22) = v21;
      v23 = *(int*)(v10 + 20);
      *(_DWORD*)(v10 + 20) = v23 + 1;
      *(_BYTE*)(*(_QWORD*)(v10 + 8) + v23) = BYTE1(v21);
      v24 = *(int*)(v10 + 20);
      *(_DWORD*)(v10 + 20) = v24 + 1;
      *(_BYTE*)(*(_QWORD*)(v10 + 8) + v24) = BYTE2(v21);
      v25 = *(int*)(v10 + 20);
      *(_DWORD*)(v10 + 20) = v25 + 1;
    }
  }
  return result;
}

#pragma GCC visibility pop
