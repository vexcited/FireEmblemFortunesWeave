#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 CharacterObservable_Unknown5(__int64 result);

__int64 CharacterObservable_Unknown5(__int64 result)
{
  __int64 v1;
  __int64 v2;
  float v3;
  float v4;
  float v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int128 v15;
  __int128 v16;
  __int64 v17;
  __int128 v18;
  __int128 v19;
  _DWORD v20[2];

  v1 = result;
  v2 = *(_QWORD*)(*(_QWORD*)(result + 8) + 496LL);
  if (v2 != 0) {
    v3 = 1.0;
    do {
      v4 = *(float*)(v2 + 12);
      v2 = *(_QWORD*)(v2 + 24);
      v3 = v3 * v4;
    } while (v2 != 0);
  }
  else {
    v3 = 1.0;
  }
  v5 = *(float*)(result + 420);
  if (v5 != v3) {
    v6 = *(_QWORD*)(result + 184);
    v7 = *(_QWORD*)(result + 192);
    *(_BYTE*)(result + 208) = 1;
    while (v6 != v7) {
      if (*(_DWORD*)v6 != 0) {
        v8 = *(_QWORD*)(v6 + 16);
        if (v8 == 0 || *(_QWORD*)(v8 + 8) == -1) {
          goto LABEL_8;
        }
        *(float*)v20 = v5;
        *(float*)&v20[1] = v3;
        v9 = *(_QWORD*)(v6 + 64);
        if (v9 == 0) {
          GameRoutine_60a310(0);
        }
        result =
            (*(__int64 (**)(__int64, _DWORD*))(*(_QWORD*)v9 + 48LL))(v9, v20);
        if ((*(_DWORD*)v6 & 0x80000000) != 0) {
        LABEL_8:
          *(_DWORD*)v6 = 0;
        }
      }
      v6 += 80;
    }
    *(_BYTE*)(v1 + 208) = 0;
    *(float*)(v1 + 420) = v3;
  }
  v10 = *(_QWORD*)(v1 + 32);
  if (v10 != 0) {
    v11 = *(_QWORD*)(v10 + 8);
    v12 = *(_QWORD*)(v1 + 40);
    if (v11 != -1 && v12 != 0) {
      v14 = *(_QWORD*)(v12 + 432);
      if (v14 != 0) {
        v15 = *(_OWORD*)(v14 + 464);
        *(_QWORD*)(v1 + 448) = v15;
        v16 = *(_OWORD*)(v1 + 448);
        *((_QWORD*)&v16 + 1) = DWORD2(v15);
        *(_OWORD*)(v1 + 448) = v16;
      }
      v17 = *(_QWORD*)(v12 + 440);
      if (v17 != 0) {
        v18 = *(_OWORD*)(v17 + 464);
        *(_QWORD*)(v1 + 464) = v18;
        v19 = *(_OWORD*)(v1 + 464);
        *((_QWORD*)&v19 + 1) = DWORD2(v18);
        *(_OWORD*)(v1 + 464) = v19;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
