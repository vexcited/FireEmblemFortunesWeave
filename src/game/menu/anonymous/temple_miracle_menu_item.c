#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1464830(_QWORD);
__int64 GameRoutine_90c9e0(_QWORD);
extern __int64 game_GameModeData_instance_;
__int64 TempleMiracleMenuItem_OnSelect(__int64 a1);
__int64 TempleMiracleMenuItem_OnDeselect(__int64 a1);
bool TempleMiracleMenuItem_IsActive(__int64 a1);

__int64 TempleMiracleMenuItem_OnSelect(__int64 a1)
{
  __int64 v2;

  v2 = 512;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(void*))(*(_QWORD*)a1 + v2))((void*)a1);
  return GameRoutine_1464830(a1);
}

__int64 TempleMiracleMenuItem_OnDeselect(__int64 a1)
{
  __int64 v2;

  v2 = 504;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(void*))(*(_QWORD*)a1 + v2))((void*)a1);
  return GameRoutine_1464830(a1);
}

bool TempleMiracleMenuItem_IsActive(__int64 a1)
{
  __int64 v3;
  int v4;
  _DWORD* v5;
  int v6;
  bool v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  _BYTE* v16;
  __int64 v17;
  __int64 v18;
  char v19;
  int v20;
  char v21;
  char* v22;
  char v23;

  if ((GameRoutine_90c9e0(*(_QWORD*)(a1 + 96)) & 1) != 0) {
    return false;
  }
  v3 = *(_QWORD*)(a1 + 96);
  v4 = *(_DWORD*)(v3 + 4);
  v5 = *(_DWORD**)(*(_QWORD*)(v3 + 16) + 24LL);
  v6 = v5[105];
  if ((v6 <= 2 || v5[103] > v4) && (v6 <= 1 || v5[102] > v4)) {
    v9 = v6 >= 1 && v5[101] <= v4;
    if (!v9 && (int)v5[104] < 1) {
      return false;
    }
  }
  if ((*(_BYTE*)(v3 + 8) & 1) != 0) {
    return true;
  }
  v10 = *(_QWORD*)(game_GameModeData_instance_ + 160);
  v11 = *(_QWORD*)(v10 + 8);
  v12 = *(_QWORD*)(v10 + 16) - v11;
  if ((int)(v12 >> 5) < 1) {
    return true;
  }
  v13 = (unsigned __int8)v12 >> 5;
  if (((v12 >> 5) & 0x7FFFFFFF) - 1 >= 7) {
    v16 = (_BYTE*)(v11 + 136);
    v17 = 0;
    v15 = 0;
    v18 = -8LL * ((v12 >> 8) & 0xFFFFFFF);
    do {
      v17 -= 8;
      v19 = v16[96];
      v20 = v15 + (*(v16 - 128) & 1) + (*(v16 - 96) & 1) + (*(v16 - 64) & 1) +
            (*(v16 - 32) & 1) + (*v16 & 1) + (v16[32] & 1);
      v21 = v16[64];
      v16 += 256;
      v15 = v20 + (v21 & 1) + (v19 & 1);
    } while (v18 != v17);
    v14 = -v17;
    if (v13 == 0) {
      return v15 < 4;
    }
    goto LABEL_25;
  }
  v14 = 0;
  v15 = 0;
  if ((unsigned __int8)v12 >> 5 != 0) {
  LABEL_25:
    v22 = (char*)(v11 + 32 * v14 + 8);
    do {
      v23 = *v22;
      v22 += 32;
      --v13;
      v15 += v23 & 1;
    } while (v13 != 0);
  }
  return v15 < 4;
}

#pragma GCC visibility pop
