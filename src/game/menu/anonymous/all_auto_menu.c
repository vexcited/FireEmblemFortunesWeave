#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16eba80(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_20d5d20;
extern __int64* GameData_212e008[9];
__int64 AllAutoMenu_Unknown85(__int64 a1);
__int64 AllAutoMenu_Unknown100(_QWORD* a1);

__int64 AllAutoMenu_Unknown85(__int64 a1)
{
  int v1;
  __int64 result;
  __int64 v4;
  __int64 v5;
  _BOOL4 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  float v12;
  int v13;
  float v14;
  __int64* v15;
  __int64* v16;
  unsigned int v17;
  __int64 v18;
  float v19;
  char v20;

  result = GameRoutine_16eba80();
  if (*(_QWORD*)(a1 + 968) == 0) {
    return result;
  }
  result = *(_QWORD*)(a1 + 960);
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    goto LABEL_11;
  }
  v4 = *(_QWORD*)(a1 + 952);
  if (v4 != 0) {
    v1 = *(unsigned __int8*)(v4 + 24);
    v5 = v4 + 152;
    if (v1 == 0) {
      v5 = 0;
    }
    v6 = v5 != *(_QWORD*)(a1 + 968);
  }
  else {
    v6 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6) {
    LABEL_11:
      v7 = *(_QWORD*)(a1 + 960);
      if (v7 == 0 || *(_QWORD*)(v7 + 8) == -1) {
        return result;
      }
      goto LABEL_16;
    }
  }
  else {
    v8 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak(v8);
    if (v6) {
      goto LABEL_11;
    }
  }
  if ((v1 & 1) == 0) {
    return result;
  }

LABEL_16:
  v9 = *(_QWORD*)(a1 + 968);
  if (v9 != 0) {
    v10 = *(_QWORD*)(v9 + 24);
    if (v10 != 0) {
      v11 = *(_DWORD*)(v10 + 48);
      v12 = *(float*)(v10 + 52);
      v13 = *(_DWORD*)(v10 + 56);
      v14 = *(float*)(a1 + 1136);
      v16 = *(__int64**)(a1 + 232);
      v15 = *(__int64**)(a1 + 240);
      if (v16 == v15) {
        v19 = 0.0;
      }
      else {
        v17 = 0;
        do {
          v18 = *v16++;
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 48LL))(v18);
          v17 += result & 1;
        } while (v16 != v15);
        v19 = (float)v17;
      }
      v20 = *(_BYTE*)(v10 + 88);
      *(_DWORD*)(v10 + 56) = v13;
      *(_DWORD*)(v10 + 48) = v11;
      *(float*)(v10 + 52) = v12 + (float)(v14 * v19);
      *(_BYTE*)(v10 + 88) = v20 | 0x10;
    }
  }
  return result;
}

__int64 AllAutoMenu_Unknown100(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;

  v2 = a1[42];
  if (v2 == 0) {
    return 1;
  }
  v3 = __dynamic_cast(v2, GameData_212e008[0], &GameData_20d5d20, 0);
  if (v3 == 0) {
    return 1;
  }
  v4 = v3;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v3 + 464LL))(v3) & 1) == 0) {
    return 1;
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 584LL))(v4);
  if ((_DWORD)result == 13) {
    (*(void (**)(_QWORD*, _QWORD))(*a1 + 552LL))(a1, 0);
    v6 = a1[148];
    if (v6 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 48LL))(v6);
    }
    return 13;
  }
  return result;
}

#pragma GCC visibility pop
