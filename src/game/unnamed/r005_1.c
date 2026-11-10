#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _DWORD GameData_1b9bcac[3];

extern _UNKNOWN* GameData_212c540;

extern __int64 GameData_212dc60[2];

extern __int64* GameData_212ea58;

extern __int128 GameData_21a6120;

extern _UNKNOWN GameData_21a6130;

extern __int64 GameData_21f4cc0;

extern __int64 GameData_2203490;

extern __int64 GameData_2219080;

__int64 GameRoutine_1005ba0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1373e60(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a09fd0(_QWORD);

__int64 GameRoutine_1a09fe0(_QWORD);

__int64 GameRoutine_1a0a0c0(_QWORD);

__int64 GameRoutine_e77060(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_e7c6f0(float);

__int64 GameRoutine_e80e80(_QWORD, _QWORD);

__int64 GameRoutine_eb62f0(_QWORD);

__int64 GameHr_f5a820()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  v0 = GameData_2203490;
  v1 = *(_QWORD*)(GameData_2203490 + 640);
  v2 = *(_QWORD*)(GameData_2203490 + 648);
  if (v2 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    GameRoutine_1a09c50(v2);
    if (v1 != 0) {
      goto LABEL_4;
    }
  }
  else if (v1 != 0) {
    goto LABEL_4;
  }
  v1 = *(_QWORD*)(v0 + 656);
  v5 = *(_QWORD*)(v0 + 664);
  if (v5 == 0 || (atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0)) {
  LABEL_4:
    v3 = *(_QWORD*)(v1 + 40);
    if (v3 == 0) {
      goto LABEL_11;
    }
    goto LABEL_5;
  }
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  GameRoutine_1a09c50(v5);
  v3 = *(_QWORD*)(v1 + 40);
  if (v3 == 0) {
    goto LABEL_11;
  }
LABEL_5:
  if (*(_QWORD*)(v3 + 8) != -1) {
    v4 = (__int64*)(v1 + 32);
    goto LABEL_13;
  }
LABEL_11:
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 32LL))(v1);
  v3 = *(_QWORD*)(result + 88);
  if (v3 == 0) {
    v8 = 0;
    v9 = 0;
    if ((*(_DWORD*)(v1 + 48) & 0x80000000) != 0) {
      goto LABEL_45;
    }
    goto LABEL_19;
  }
  v4 = (__int64*)(result + 80);
LABEL_13:
  v7 = *v4;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                            memory_order_relaxed);
  v8 = GameRoutine_1a0a0c0(v3);
  if (v8 != 0) {
    v9 = v7;
  }
  else {
    v9 = 0;
  }
  result = GameRoutine_1a09c50(v3);
  if ((*(_DWORD*)(v1 + 48) & 0x80000000) != 0) {
    goto LABEL_45;
  }
LABEL_19:
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 32LL))(v1);
  v10 = (__int64*)(*(_QWORD*)(result + 40) + 16LL * *(int*)(v1 + 48));
  v11 = v10[1];
  if (v11 != 0) {
    v12 = *v10;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      GameRoutine_1a09c50(v11);
    }
    v13 = GameRoutine_1a0a0c0(v11);
    if (v13 == 0) {
      v12 = 0;
    }
    result = GameRoutine_1a09c50(v11);
    if (v9 != 0 && v12 != 0) {
      if ((unsigned int)*(unsigned __int8*)(v1 + 8) - 7 > 2) {
        v14 = 3;
      }
      else {
        v14 = GameData_1b9bcac[(unsigned __int8)(*(_BYTE*)(v1 + 8) - 7)];
      }
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      v21 = v9;
      v22 = v8;
      if (v8 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                  memory_order_relaxed);
      }
      v19 = v12;
      v20 = v13;
      if (v13 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                  memory_order_relaxed);
      }
      v15 = GameRoutine_e77060(v14, &v21, &v19);
      v16 = v20;
      v17 = v15;
      if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        GameRoutine_1a09c50(v16);
      }
      v18 = v22;
      if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        GameRoutine_1a09c50(v18);
      }
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      if (*(_DWORD*)(result + 8) == 0 &&
          (*(_BYTE*)(GameData_21f4cc0 + 12) & 1) == 0) {
        result = GameRoutine_eb62f0((unsigned int)-v17);
      }
    }
    if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      result = GameRoutine_1a09c50(v13);
    }
  }
LABEL_45:
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    return GameRoutine_1a09c50(v8);
  }
  return result;
}

__int64 GameHr_f5acd0()
{
  __int64 v0;
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;

  v0 = GameData_2203490;
  v1 = *(__int64**)(GameData_2203490 + 640);
  v2 = *(_QWORD*)(GameData_2203490 + 648);
  if (v2 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    GameRoutine_1a09c50(v2);
    if (v1 != nullptr) {
      goto LABEL_4;
    }
  }
  else if (v1 != nullptr) {
    goto LABEL_4;
  }
  v1 = *(__int64**)(v0 + 656);
  v5 = *(_QWORD*)(v0 + 664);
  if (v5 == 0 || (atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0)) {
  LABEL_4:
    v3 = v1[5];
    if (v3 == 0) {
      goto LABEL_11;
    }
    goto LABEL_5;
  }
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  GameRoutine_1a09c50(v5);
  v3 = v1[5];
  if (v3 == 0) {
    goto LABEL_11;
  }
LABEL_5:
  if (*(_QWORD*)(v3 + 8) != -1) {
    v4 = v1 + 4;
    goto LABEL_13;
  }
LABEL_11:
  result = (*(__int64 (**)(__int64*))(*v1 + 32))(v1);
  v3 = *(_QWORD*)(result + 88);
  if (v3 == 0) {
    return result;
  }
  v4 = (__int64*)(result + 80);
LABEL_13:
  v7 = *v4;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                            memory_order_relaxed);
  v8 = GameRoutine_1a0a0c0(v3);
  result = GameRoutine_1a09c50(v3);
  if (v8 == 0 || v7 == 0) {
    if (v8 == 0) {
      return result;
    }
  }
  else {
    ++*(_DWORD*)(v7 + 408);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    return GameRoutine_1a09c50(v8);
  }
  return result;
}

__int64 GameHr_f5ae40()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  _QWORD v17[2];
  _QWORD v18[2];

  v0 = GameData_2203490;
  v1 = *(_QWORD*)(GameData_2203490 + 640);
  v2 = *(_QWORD*)(GameData_2203490 + 648);
  if (v2 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    GameRoutine_1a09c50(v2);
    if (v1 != 0) {
      goto LABEL_4;
    }
  }
  else if (v1 != 0) {
    goto LABEL_4;
  }
  v1 = *(_QWORD*)(v0 + 656);
  v5 = *(_QWORD*)(v0 + 664);
  if (v5 == 0 || (atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0)) {
  LABEL_4:
    v3 = *(_QWORD*)(v1 + 40);
    if (v3 == 0) {
      goto LABEL_11;
    }
    goto LABEL_5;
  }
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  GameRoutine_1a09c50(v5);
  v3 = *(_QWORD*)(v1 + 40);
  if (v3 == 0) {
    goto LABEL_11;
  }
LABEL_5:
  if (*(_QWORD*)(v3 + 8) != -1) {
    v4 = (__int64*)(v1 + 32);
    goto LABEL_13;
  }
LABEL_11:
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 32LL))(v1);
  v3 = *(_QWORD*)(result + 88);
  if (v3 == 0) {
    v8 = 0;
    v9 = 0;
    if ((*(_DWORD*)(v1 + 48) & 0x80000000) != 0) {
      goto LABEL_37;
    }
    goto LABEL_19;
  }
  v4 = (__int64*)(result + 80);
LABEL_13:
  v7 = *v4;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                            memory_order_relaxed);
  v8 = GameRoutine_1a0a0c0(v3);
  if (v8 != 0) {
    v9 = v7;
  }
  else {
    v9 = 0;
  }
  result = GameRoutine_1a09c50(v3);
  if ((*(_DWORD*)(v1 + 48) & 0x80000000) != 0) {
    goto LABEL_37;
  }
LABEL_19:
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 32LL))(v1);
  v10 = (__int64*)(*(_QWORD*)(result + 40) + 16LL * *(int*)(v1 + 48));
  v11 = v10[1];
  if (v11 == 0) {
    goto LABEL_37;
  }
  v12 = *v10;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                            memory_order_relaxed);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                            memory_order_relaxed);
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    GameRoutine_1a09c50(v11);
  }
  v13 = GameRoutine_1a0a0c0(v11);
  if (v13 != 0) {
    v14 = v12;
  }
  else {
    v14 = 0;
  }
  result = GameRoutine_1a09c50(v11);
  if (v9 == 0) {
    goto LABEL_35;
  }
  if (v14 == 0) {
    goto LABEL_35;
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  if (*(_DWORD*)(result + 8) != 0) {
    goto LABEL_35;
  }
  v18[0] = v9;
  v18[1] = v8;
  v15 = GameData_2219080;
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
  }
  v17[0] = v14;
  v17[1] = v13;
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
    v16 = GameRoutine_1005ba0(v15, v18, v17);
    result = GameRoutine_1a09c50(v13);
    if (v8 == 0) {
      goto LABEL_33;
    }
    goto LABEL_32;
  }
  result = GameRoutine_1005ba0(v15, v18, v17);
  v16 = result;
  if (v8 != 0) {
  LABEL_32:
    result = GameRoutine_1a09c50(v8);
  }
LABEL_33:
  if ((v16 & 1) != 0) {
    result =
        GameRoutine_1373e60(*(_QWORD*)(*(_QWORD*)(v9 + 16) + 392LL),
                            *(_QWORD*)(*(_QWORD*)(v12 + 16) + 392LL), 0, 1, 0);
  }
LABEL_35:
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    result = GameRoutine_1a09c50(v13);
    if (v8 == 0) {
      return result;
    }
    goto LABEL_38;
  }
LABEL_37:
  if (v8 == 0) {
    return result;
  }
LABEL_38:
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    return GameRoutine_1a09c50(v8);
  }
  return result;
}

__int64 GameHr_f5b640()
{
  __int64* v0;
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  char v16;
  __int64 v17;
  int v18;
  __int128 v19;
  char v20;
  int v21;
  char v22;

  v0 = GameData_212ea58;
  v1 = *GameData_212ea58;
  v2 = *(__int64**)(*GameData_212ea58 + 640);
  v3 = *(_QWORD*)(*GameData_212ea58 + 648);
  if (v3 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    GameRoutine_1a09c50(v3);
    if (v2 != nullptr) {
      goto LABEL_4;
    }
  }
  else if (v2 != nullptr) {
    goto LABEL_4;
  }
  v2 = *(__int64**)(v1 + 656);
  v6 = *(_QWORD*)(v1 + 664);
  if (v6 == 0 || (atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0)) {
  LABEL_4:
    v4 = v2[5];
    if (v4 == 0) {
      goto LABEL_11;
    }
    goto LABEL_5;
  }
  (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
  GameRoutine_1a09c50(v6);
  v4 = v2[5];
  if (v4 == 0) {
    goto LABEL_11;
  }
LABEL_5:
  if (*(_QWORD*)(v4 + 8) != -1) {
    v5 = v2 + 4;
    goto LABEL_13;
  }
LABEL_11:
  result = (*(__int64 (**)(__int64*))(*v2 + 32))(v2);
  v4 = *(_QWORD*)(result + 88);
  if (v4 == 0) {
    return result;
  }
  v5 = (__int64*)(result + 80);
LABEL_13:
  v8 = *v5;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v9 = GameRoutine_1a0a0c0(v4);
  result = GameRoutine_1a09c50(v4);
  if (v9 == 0 || v8 == 0) {
    if (v9 == 0) {
      return result;
    }
  }
  else {
    v16 = 0;
    v15 = 0;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)GameRoutine_1a09fd0(&GameData_21a6130) != 0) {
      v12 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v12;
      GameRoutine_1a09fe0(&GameData_21a6130);
    }
    v20 = 0;
    v19 = GameData_21a6120;
    v21 = 1109393408;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v13 = v8;
    v14 = v9;
    v22 = 0;
    v17 = 1092616192;
    v11 = *v0;
    v18 = -1102263091;
    v19 = 0x3E4CCCCD00000000uLL;
    GameRoutine_e80e80(v11 + 16, &v13);
    v18 = 0;
    v17 = 0x4040000040A00000LL;
    GameRoutine_e80e80(*v0 + 16, &v13);
    GameRoutine_e7c6f0(0.0);
    result = v14;
    if (v14 != 0) {
      result = GameRoutine_1a09c50(v14);
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    return GameRoutine_1a09c50(v9);
  }
  return result;
}

__int64 GameHr_f699d0(__int64 a1)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float* v7;
  bool v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v15;
  __int64 v16;

  if (*(_BYTE*)(a1 + 188) == 1 && *(float*)(a1 + 184) >= 3.0) {
    return 0;
  }
  v3 = *(_QWORD*)GameData_212dc60[0];
  v4 = *(_QWORD*)(*(_QWORD*)GameData_212dc60[0] + 16LL);
  v5 = *(_QWORD*)(v4 + 24);
  if (v5 != 0 && (v6 = GameRoutine_1a0a0c0(v5)) != 0) {
    v7 = *(float**)(v4 + 16);
    v8 = v7 != nullptr && ((*(_BYTE*)(*(_QWORD*)v7 + 12LL) & 1) != 0 ||
                           v7[8] < *(float*)(*(_QWORD*)v7 + 8LL));
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v10 = v6;
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      GameRoutine_1a09c50(v10);
    }
  }
  else {
    v8 = false;
  }
  result = 1;
  if (!v8 && *(float*)(v3 + 8) <= 0.0) {
    v11 = *(_QWORD*)(a1 + 168);
    v12 = *(_DWORD*)(v11 + 1112);
    v13 = *(_QWORD*)(v11 + 56);
    if (v12 == 2 && v13 != 0) {
      v15 = *(_QWORD*)(v13 + 40);
      if ((v15 & 0x100000000LL) == 0) {
        LODWORD(v15) = 0;
      }
      if ((_DWORD)v15 == 0) {
        return 0;
      }
      if ((_DWORD)v15 == 1) {
        v16 = *(_QWORD*)(*(_QWORD*)(v13 + 56) + 8LL);
        if (v16 != 0 && *(_BYTE*)(v16 + 33) == 1) {
          return 0;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
