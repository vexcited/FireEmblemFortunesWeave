#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_20c6bf8[])();

extern __int64 (*GameData_20c7140[])();

extern __int64 (*GameData_20c7cf0[])();

extern __int64 (*GameData_20c8238[])();

extern __int64 GameData_212bf68;

__int64 GameRoutine_178bfa0(__int64, __int64, __int64*);

__int64 GameRoutine_1a09c50();

__int64 GameRoutine_1a0a0c0(_QWORD);

__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_688200(_QWORD);

_QWORD* GameHr_178e880(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;

  v2 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1184, 16, 0);
  v3 = *(_QWORD*)(a1 + 208);
  v6 = 0;
  v7 = 0;
  if (v3 != 0) {
    v4 = GameRoutine_1a0a0c0(v3);
    v7 = v4;
    if (v4 != 0) {
      v6 = *(_QWORD*)(a1 + 200);
    }
  }
  else {
    v4 = 0;
  }
  GameRoutine_178bfa0((__int64)v2, a1, &v6);
  *v2 = GameData_20c7cf0;
  v2[22] = GameData_20c8238;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    GameRoutine_1a09c50();
  }
  return v2;
}

__int64 GameHr_178eae0(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  atomic_ullong* v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v19[2];

  v2 = (_QWORD*)GameData_212bf68;
  v3 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1216, 16, 0);
  v4 = *(_QWORD*)(a1 + 208);
  if (v4 != 0 && (v5 = GameRoutine_1a0a0c0(v4)) != 0) {
    v6 = (atomic_ullong*)(v5 + 8);
    v7 = v5;
    v19[0] = *(_QWORD*)(a1 + 200);
    v19[1] = v5;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    v8 = GameRoutine_178bfa0(v3, a1, v19);
    *(_QWORD*)v3 = GameData_20c7cf0;
    *(_QWORD*)(v3 + 176) = GameData_20c8238;
    if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      v8 = GameRoutine_1a09c50();
    }
    v9 = 0;
  }
  else {
    v19[0] = 0;
    v19[1] = 0;
    v8 = GameRoutine_178bfa0(v3, a1, v19);
    v7 = 0;
    v9 = 1;
  }
  v10 = *(_QWORD*)(a1 + 512);
  *(_QWORD*)(v3 + 1192) = 0;
  *(_QWORD*)(v3 + 1200) = 0;
  *(_QWORD*)(v3 + 1208) = 0;
  *(_QWORD*)v3 = GameData_20c6bf8;
  *(_QWORD*)(v3 + 176) = GameData_20c7140;
  *(_DWORD*)(v3 + 1184) = *(_DWORD*)(a1 + 504);
  v11 = *(_QWORD*)(a1 + 520);
  v12 = v11 - v10;
  if (v11 != v10) {
    if (v12 < 0) {
      GameRoutine_688200(v8);
    }
    v13 = GameRoutine_651b90(*v2, v11 - v10, 16, 0);
    v14 = v13 + v12;
    *(_QWORD*)(v3 + 1192) = v13;
    *(_QWORD*)(v3 + 1200) = v13;
    *(_QWORD*)(v3 + 1208) = v13 + v12;
    GameRoutine_1a0b950(v13, v10, v12);
    *(_QWORD*)(v3 + 1200) = v14;
  }
  v16 = *(_QWORD**)(v3 + 256);
  v15 = *(_QWORD**)(v3 + 264);
  *(_QWORD*)(v3 + 336) = 0;
  while (v16 != v15) {
    if (*v16 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v16 + 8LL))(*v16);
      v15 = *(_QWORD**)(v3 + 264);
    }
    ++v16;
  }
  v17 = *(_QWORD*)(v3 + 344);
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
    *(_QWORD*)(v3 + 344) = 0;
  }
  *(_QWORD*)(v3 + 264) = *(_QWORD*)(v3 + 256);
  *(_QWORD*)(v3 + 240) = *(_QWORD*)(v3 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v3 + 1024LL))(v3);
  (*(void (**)(__int64))(*(_QWORD*)v3 + 1032LL))(v3);
  if ((v9 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    GameRoutine_1a09c50();
  }
  return v3;
}

#pragma GCC visibility pop
