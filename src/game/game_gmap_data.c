#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BladeResonance_14b6fc0(_QWORD, _QWORD);
__int64 GameRoutine_135fab0(__int64);
__int64 GameRoutine_14aa080(_QWORD);
__int64 GameRoutine_1521120(_QWORD, _QWORD);
__int64 GameRoutine_15453a0(_QWORD, _QWORD);
__int64 GameRoutine_65f240(_QWORD, _QWORD);
__int64 GameRoutine_65f300(_QWORD, _QWORD);
__int64 GameRoutine_876a40(_QWORD, _QWORD);
__int64 GameRoutine_ffa240(_QWORD);
__int64 GmapSituation_14dc560(_QWORD, _QWORD);
__int64 GmapSituation_14dc720(_QWORD, _QWORD);
__int64 MiasmaManager_14aa1a0(_QWORD);
__int64 MiasmaManager_14aa340(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_202edc0[])();
extern __int64 (*GameData_202eed0[])();
extern __int64 (*game_GameGmapData_vtable[])();
extern __int64 (*game_gmap_BanquetManager_vtable[])();
extern __int64 GameData_212c7a0[13];
extern __int64 GameData_212d740[3];
extern __int64 GameData_212d748[2];
extern __int64 GameData_2130e20;
extern __int64 GameData_21c96f8;
extern __int64 GameData_21eea40;
extern __int64 GameData_21f1620;
extern __int64 GameData_21f1628;
extern __int64 GameData_21f1660;
extern __int64 GameData_2241428;
extern __int64 GameData_22416b0;
extern __int64 GameData_22416c0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c790;
extern __int64* GameData_212d6d0;
extern __int64* GameData_2130e70;
extern int GameData_22416a0;
__int64 GameGmapData_Destructor(_QWORD* a1);
__int64 GameGmapData_135fe20();
__int64 GameGmapData_1360000(__int64 result, __int64 a2, char a3);
void GameGmapData_13601b0(long double a1, long double a2);
__int64 GameGmapData_Unknown6(__int64 a1);
__int64 GameGmapData_1360570(__int64 a1);
__int64 GameGmapData_Unknown8(__int64 a1, __int64 a2);
__int64 GameGmapData_Unknown9(__int64 result, __int64 a2, unsigned int a3);

__int64 GameGmapData_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  _QWORD* v12;

  *a1 = game_GameGmapData_vtable;
  a1[1] = GameData_202edc0;
  v2 = a1 + 1;
  GameGmapData_135fe20();
  v3 = (_QWORD*)a1[2];
  if (v3 != nullptr) {
    GameRoutine_ffa240(v3 + 9);
    v4 = (_QWORD*)v3[6];
    v3[2] = game_gmap_BanquetManager_vtable;
    v5 = fw_memory_g_heap_manager_ptr;
    if (v4 != nullptr) {
      do {
        v6 = (_QWORD*)*v4;
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v7);
        v4 = v6;
      } while (v6 != nullptr);
    }
    v8 = v3[4];
    v3[4] = 0;
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v9);
    }
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v10);
  }
  v12 = v2;
  a1[1] = GameData_212d6d0 + 2;
  result = GameRoutine_876a40(&GameData_21eea40, &v12);
  *a1 = GameData_202eed0;
  if (*(_QWORD**)GameData_212c7a0[0] == a1) {
    *(_QWORD*)GameData_212c7a0[0] = 0;
    GameData_22416a0 = 0;
  }
  return result;
}

__int64 GameGmapData_135fe20()
{
  __int64 result;

  (*(void (**)(__int64))(*(_QWORD*)GameData_21f1660 + 24LL))(GameData_21f1660);
  if (GameData_21f1660 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21f1660 + 8LL))(GameData_21f1660);
  }
  GameData_21f1660 = 0;
  (*(void (**)(__int64))(*(_QWORD*)GameData_21f1620 + 24LL))(GameData_21f1620);
  if (GameData_21f1620 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21f1620 + 8LL))(GameData_21f1620);
  }
  GameData_21f1620 = 0;
  (*(void (**)(__int64))(*(_QWORD*)GameData_2241428 + 24LL))(GameData_2241428);
  if (GameData_2241428 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_2241428 + 8LL))(GameData_2241428);
  }
  GameData_2241428 = 0;
  (*(void (**)(__int64))(*(_QWORD*)GameData_22416c0 + 24LL))(GameData_22416c0);
  if (GameData_22416c0 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_22416c0 + 8LL))(GameData_22416c0);
  }
  GameData_22416c0 = 0;
  (*(void (**)(__int64))(*(_QWORD*)GameData_22416b0 + 24LL))(GameData_22416b0);
  result = GameData_22416b0;
  if (GameData_22416b0 != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)GameData_22416b0 + 8LL))(
        GameData_22416b0);
  }
  GameData_22416b0 = 0;
  return result;
}

__int64 GameGmapData_1360000(__int64 result, __int64 a2, char a3)
{
  __int64 v3;
  __int64 v4;
  int v5;
  __int64* i;
  __int64 v7;

  v3 = *(_QWORD*)(result + 16);
  *(_QWORD*)v3 = a2;
  *(_BYTE*)(v3 + 128) = a3;
  v4 = *(_QWORD*)(*GameData_212c790 + 8);
  v5 = *(_DWORD*)(v4 + 56);
  if (v5 < 0) {
    for (i = *(__int64**)(v4 + 8);; ++i) {
      v7 = *i;
      if (*(_QWORD*)(*i + 96) == 0 && *(_QWORD*)(v7 + 552) == 0) {
        break;
      }
    }
    *(_DWORD*)(v3 + 124) = *(_DWORD*)(v7 + 84);
  }
  else {
    *(_DWORD*)(v3 + 124) = v5;
  }
  return result;
}

void GameGmapData_13601b0(long double a1, long double a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;

  LODWORD(a1) = *(_DWORD*)(*(_QWORD*)(GameData_21c96f8 + 16) + 120LL);
  if (*(float*)&a1 >= 0.0) {
    v6 = *(_DWORD*)(*(_QWORD*)(GameData_21c96f8 + 16) + 120LL);
    v2 = *(_QWORD*)(GameData_21f1628 + 16);
    if (*(_BYTE*)(v2 + 680) == 1) {
      v3 = *(_QWORD*)(v2 + 656);
      v4 = v2 + 656;
      LODWORD(a2) = LODWORD(a1);
    }
    else if (*(float*)(v2 + 664) <= 0.0) {
      if (((*(__int64 (**)(__int64, int*, __int64))(
               *(_QWORD*)(v2 + 656) + 8LL))(v2 + 656, &v6, v2 + 688) &
           1) == 0) {
      LABEL_9:
        *(_DWORD*)(*(_QWORD*)(GameData_21c96f8 + 16) + 120LL) = 0;
        return;
      }
      (*(void (**)(__int64))(*(_QWORD*)(v2 + 656) + 16LL))(v2 + 656);
      v3 = *(_QWORD*)(v2 + 656);
      LODWORD(a2) = v6;
      v4 = v2 + 656;
    }
    else {
      v5 = LODWORD(a1);
      (*(void (**)(__int64))(*(_QWORD*)(v2 + 656) + 16LL))(v2 + 656);
      v3 = *(_QWORD*)(v2 + 656);
      v4 = v2 + 656;
      LODWORD(a2) = v5;
    }
    (*(void (**)(__int64, long double, long double))(v3 + 24))(v4, a1, a2);
    *(_QWORD*)(v2 + 664) = 0;
    *(_WORD*)(v2 + 680) = 256;
    goto LABEL_9;
  }
}

__int64 GameGmapData_Unknown6(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;

  GameGmapData_135fe20();
  v2 = GameRoutine_135fab0(a1);
  v3 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)v3 = 0;
  *(_BYTE*)(v3 + 128) = 0;
  *(_DWORD*)(v3 + 124) = -1;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8LL) = 0;
  result = GameRoutine_14aa080(v2);
  v5 = GameData_22416c0;
  v6 = *(_QWORD*)(GameData_22416c0 + 8);
  *(_DWORD*)(GameData_22416c0 + 40) = -1;
  *(_QWORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 44) = 0;
  *(_QWORD*)(v5 + 49) = 0;
  *(_QWORD*)(v5 + 16) = v6;
  *(_BYTE*)(v5 + 59) = 1;
  return result;
}

__int64 GameGmapData_1360570(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;

  v2 = a1 - 8;
  GameGmapData_135fe20();
  v3 = GameRoutine_135fab0(v2);
  v4 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)v4 = 0;
  *(_BYTE*)(v4 + 128) = 0;
  *(_DWORD*)(v4 + 124) = -1;
  *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) = 0;
  result = GameRoutine_14aa080(v3);
  v6 = GameData_22416c0;
  v7 = *(_QWORD*)(GameData_22416c0 + 8);
  *(_DWORD*)(GameData_22416c0 + 40) = -1;
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 44) = 0;
  *(_QWORD*)(v6 + 49) = 0;
  *(_QWORD*)(v6 + 16) = v7;
  *(_BYTE*)(v6 + 59) = 1;
  return result;
}

__int64 GameGmapData_Unknown8(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  char v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 result;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char v33;
  __int64 v34;

  v2 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = 1;
  MiasmaManager_14aa1a0(*(_QWORD*)(GameData_22416b0 + 8));
  v5 = *(int*)(a2 + 20);
  v6 = *(_BYTE*)(*(_QWORD*)(a1 + 16) + 129LL);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v6;
  v7 = *(int*)(a2 + 20);
  v8 = *(_DWORD*)(*(_QWORD*)(GameData_21c96f8 + 16) + 120LL);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = v8;
  v9 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = BYTE1(v8);
  v10 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = BYTE2(v8);
  v11 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v11 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = HIBYTE(v8);
  GmapSituation_14dc560(GameData_22416c0, a2);
  v12 = *(int*)(a2 + 20);
  v13 = GameData_2241428;
  *(_DWORD*)(a2 + 20) = v12 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = 0;
  v14 = *(int*)(a2 + 20);
  LODWORD(v12) =
      (unsigned int)(*(_DWORD*)(v13 + 16) - *(_DWORD*)(v13 + 8)) >> 3;
  *(_DWORD*)(a2 + 20) = v14 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = v12;
  v15 = *(__int64**)(v13 + 8);
  v16 = *(__int64**)(v13 + 16);
  while (v15 != v16) {
    v17 = *v15++;
    GameRoutine_65f240(a2, *(_QWORD*)(v17 + 96));
  }
  v18 = *(int*)(a2 + 20);
  v19 = *(_QWORD*)(GameData_21f1620 + 8);
  *(_DWORD*)(a2 + 20) = v18 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = 1;
  v20 = *(int*)(a2 + 20);
  LOBYTE(v18) = *(_DWORD*)(v19 + 36);
  *(_DWORD*)(a2 + 20) = v20 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = v18;
  v21 = *(int*)(a2 + 20);
  LODWORD(v18) = *(_DWORD*)(v19 + 32);
  *(_DWORD*)(a2 + 20) = v21 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = v18;
  v22 = *(__int64**)(v19 + 16);
  if (v22 != nullptr) {
    v23 = *v22;
  }
  else {
    v23 = 0;
  }
  result = GameRoutine_65f240(a2, v23);
  v25 = *(__int64**)(*(_QWORD*)GameData_212d740[0] + 8LL);
  v26 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v26 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v26) = 1;
  v27 = *(int*)(a2 + 20);
  LOBYTE(v26) = *((_DWORD*)v25 + 12);
  *(_DWORD*)(a2 + 20) = v27 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v27) = v26;
  LODWORD(v26) =
      -1431655765 * ((unsigned int)(*((_DWORD*)v25 + 2) - *(_DWORD*)v25) >> 3);
  v28 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v28 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v28) = v26;
  v29 = *v25;
  v30 = v25[1];
  if (*v25 != v30) {
    do {
      if ((*(_BYTE*)v29 & 1) != 0) {
        v31 = *(_QWORD*)(v29 + 16);
      }
      else {
        v31 = v29 + 1;
      }
      result = GameRoutine_65f300(a2, v31);
      v29 += 24;
    } while (v29 != v30);
  }
  v32 = *(int*)(a2 + 20);
  v33 = *((_BYTE*)v25 + 56);
  *(_DWORD*)(a2 + 20) = v32 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v32) = v33;
  v34 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v34 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v34) = 0;
  return result;
}

__int64 GameGmapData_Unknown9(__int64 result, __int64 a2, unsigned int a3)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  float v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;
  int v23;
  bool v24;
  float v25;

  if ((int)a3 >= 1) {
    v4 = result;
    ++*(_DWORD*)(a2 + 20);
    result = MiasmaManager_14aa340(*(_QWORD*)(GameData_22416b0 + 8));
    if (a3 - 2 <= 4) {
      v6 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v6 + 1;
      *(_BYTE*)(GameData_22416c0 + 54) =
          *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) != 0;
      ++*(_DWORD*)(a2 + 20);
    }
    if (a3 >= 3) {
      v7 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v7 + 1;
      *(_BYTE*)(*(_QWORD*)(v4 + 16) + 129LL) =
          *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) != 0;
      if (a3 - 4 > 5) {
        if (a3 >= 0xC) {
          v16 = 1.0;
          v17 = *(int*)(a2 + 20);
          v18 = *(_QWORD*)(a2 + 8);
          v19 = *(_QWORD*)(*(_QWORD*)GameData_212c7a0[0] + 16LL);
          *(_DWORD*)(a2 + 20) = v17 + 1;
          v20 = *(unsigned __int8*)(v18 + v17);
          *(_DWORD*)(a2 + 20) = v17 + 2;
          v21 = v20 | (*(unsigned __int8*)(v18 + v17 + 1) << 8);
          *(_DWORD*)(a2 + 20) = v17 + 3;
          v22 = *(unsigned __int8*)(v18 + v17 + 2);
          *(_DWORD*)(a2 + 20) = v17 + 4;
          v23 = v21 | (v22 << 16) | (*(unsigned __int8*)(v18 + v17 + 3) << 24);
          if (*(float*)&v23 <= 1.0) {
            LODWORD(v16) =
                v21 | (v22 << 16) | (*(unsigned __int8*)(v18 + v17 + 3) << 24);
          }
          v24 = *(float*)&v23 < 0.0;
          v25 = 0.0;
          if (!v24) {
            v25 = v16;
          }
          *(float*)(v19 + 120) = v25;
          GmapSituation_14dc720(GameData_22416c0, a2);
          GameRoutine_1521120(*(_QWORD*)GameData_2130e20, a2);
          BladeResonance_14b6fc0(
              *(_QWORD*)(*(_QWORD*)GameData_212d748[0] + 8LL), a2);
          goto LABEL_15;
        }
      }
      else {
        v8 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v8 + 1;
        v9 = *(_QWORD*)(a2 + 8);
        v10 = v9 + v8;
        v11 = *(unsigned __int8*)(v9 + v8);
        *(_DWORD*)(a2 + 20) = v8 + 5;
        if (v11 != 4) {
          v12 = v8 + 7;
          v13 = v8 + 8;
          *(_DWORD*)(a2 + 20) = v12;
          v14 = *(unsigned __int8*)(v10 + 6);
          *(_DWORD*)(a2 + 20) = v13;
          v15 = v14 | (*(unsigned __int8*)(v9 + v12) << 8);
          if (v15 != 0) {
            *(_DWORD*)(a2 + 20) = v13 + v15;
          }
        }
      }
      if (a3 < 6) {
        if (a3 != 5) {
          return result;
        }
        goto LABEL_22;
      }
      result = GmapSituation_14dc720(*GameData_2130e70, a2);
      if (a3 < 8 ||
          (result = GameRoutine_1521120(*(_QWORD*)GameData_2130e20, a2),
           a3 == 8) ||
          (result = BladeResonance_14b6fc0(
               *(_QWORD*)(*(_QWORD*)GameData_212d748[0] + 8LL), a2),
           a3 < 0xB)) {
      LABEL_22:
        ++*(_DWORD*)(a2 + 20);
        return result;
      }
    LABEL_15:
      result = GameRoutine_15453a0(
          *(_QWORD*)(*(_QWORD*)GameData_212d740[0] + 8LL), a2);
      goto LABEL_22;
    }
  }
  return result;
}

#pragma GCC visibility pop
