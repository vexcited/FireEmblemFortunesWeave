#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_203a380[])();

extern __int64 (*GameData_203a430[])();

extern __int64 GameData_212bf68;

extern __int64 GameData_212c608[2];

extern __int64 GameData_212dce8;

extern __int64* GameData_2130240[8];

extern _DWORD* GameData_2130fb8;

extern __int64* GameData_2132488;

extern char GameData_2243798;

extern __int64 GameData_22437a0;

extern __int64 GameData_22437a8;

extern __int64 GameData_22437b0;

extern int GameData_22437b8;

extern __int64 GameData_22437c0;

extern int GameData_22437c8;

extern __int64 GameData_22437d0;

extern char GameData_22437d8;

extern __int64 GameData_22437e0;

extern __int64 GameData_22437e8;

extern __int64 GameData_22437f0;

extern int GameData_22437f8;

extern __int64 GameData_2243800;

extern int GameData_2243808;

extern __int64 GameData_2243810;

extern char GameData_2243818;

extern __int64 GameData_2243820;

extern __int64 GameData_2243828;

extern __int64 GameData_2243830;

extern int GameData_2243838;

extern __int64 GameData_2243840;

extern int GameData_2243848;

extern __int64 GameData_2243850;

extern char GameData_2243858;

extern __int64 GameData_2243860;

extern __int64 GameData_2243868;

extern __int64 GameData_2243870;

extern int GameData_2243878;

extern __int64 GameData_2243880;

extern int GameData_2243888;

extern __int64 GameData_2243890;

extern char GameData_2243898;

extern __int64 GameData_22438a0;

extern __int64 GameData_22438a8;

extern __int64 GameData_22438b0;

extern int GameData_22438b8;

extern __int64 GameData_22438c0;

extern int GameData_22438c8;

extern __int64 GameData_22438d0;

extern char GameData_22438d8;

extern __int64 GameData_22438e0;

extern __int64 GameData_22438e8;

extern __int64 GameData_22438f0;

extern int GameData_22438f8;

extern __int64 GameData_2243900;

extern int GameData_2243908;

extern __int64 GameData_2243910;

extern char GameData_2243918;

extern __int64 GameData_2243920;

extern __int64 GameData_2243928;

extern __int64 GameData_2243930;

extern int GameData_2243938;

extern __int64 GameData_2243940;

extern int GameData_2243948;

extern __int64 GameData_2243950;

extern _UNKNOWN GameData_2243958;

__int64 GameRoutine_13892a0(__int64);

void GameRoutine_1418aa0();

__int64 GameRoutine_141ff70();

__int64 GameRoutine_1420000();

__int64 GameRoutine_1420010();

__int64 GameRoutine_1a09fd0(_QWORD);

__int64 GameRoutine_1a09fe0(_QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_65a7c0(_QWORD);

__int64 GameRoutine_7a8520(_QWORD);

__int64 GameHr_141fb90(__int64 a1)
{
  int v1;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  __int64* v8;
  __int64** v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  _BYTE* v14;
  char v15;

  v1 = *(_DWORD*)(a1 + 224);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2243958,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_2243958) != 0) {
    GameData_22437a0 = 0;
    GameData_22437a8 = 0;
    GameData_22437b0 = 0;
    GameData_22437c0 = 0;
    GameData_22437d0 = 0;
    GameData_22437d8 = 13;
    GameData_22437e0 = 0;
    GameData_22437e8 = (__int64)GameRoutine_141ff70;
    GameData_2243858 = 13;
    GameData_2243798 = 4;
    GameData_22437b8 = 1;
    GameData_22437c8 = 250;
    GameData_22437f0 = 0;
    GameData_22437f8 = 0;
    GameData_2243800 = 0;
    GameData_2243818 = 3;
    GameData_2243860 = 0;
    GameData_2243868 = (__int64)GameRoutine_1420000;
    GameData_2243808 = 0;
    GameData_2243810 = 0;
    GameData_2243840 = 0;
    GameData_2243848 = 0;
    GameData_2243850 = 0;
    GameData_2243838 = 0;
    GameData_2243828 = 0;
    GameData_2243830 = 0;
    GameData_2243820 = 0;
    GameData_2243870 = 0;
    GameData_2243878 = 0;
    GameData_2243880 = 0;
    GameData_2243888 = 0;
    GameData_2243890 = 0;
    GameData_2243898 = 15;
    GameData_22438a0 = 0;
    GameData_22438a8 = (__int64)GameRoutine_1420010;
    GameData_22438b0 = 0;
    GameData_22438b8 = 0;
    GameData_22438c0 = 0;
    GameData_22438c8 = 0;
    GameData_22438d0 = 0;
    GameData_22438d8 = 4;
    GameData_22438e8 = 0;
    GameData_22438f0 = 0;
    GameData_22438e0 = 0;
    GameData_22438f8 = 1;
    GameData_2243900 = 0;
    GameData_2243908 = 250;
    GameData_2243910 = 0;
    GameData_2243918 = 0;
    GameData_2243940 = 0;
    GameData_2243948 = 0;
    GameData_2243950 = 0;
    GameData_2243920 = 0;
    GameData_2243928 = 0;
    GameData_2243930 = 0;
    GameData_2243938 = 0;
    GameRoutine_1a09fe0(&GameData_2243958);
  }
  v3 = (_QWORD*)GameData_212bf68;
  v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 192, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 32) = 0;
  v6 = (_QWORD*)(v4 + 32);
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  GameRoutine_65a7c0(v4);
  v7 = GameData_2132488;
  *(_BYTE*)(v4 + 160) = 0;
  *(_BYTE*)(v4 + 164) = 0;
  *(_QWORD*)(v4 + 152) = v7 + 2;
  v8 = GameData_2130240[0];
  *(_BYTE*)(v4 + 176) = 0;
  *(_BYTE*)(v4 + 180) = 0;
  *(_QWORD*)(v4 + 168) = v8 + 2;
  GameRoutine_1418aa0();
  v9 = (__int64**)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0) {
    ++*GameData_2130fb8;
  }
  else {
    v10 = (__int64*)GameRoutine_651b90(*v3, 336, 16, 0);
    GameRoutine_13892a0((__int64)v10);
    v11 = *v10;
    *v9 = v10;
    (*(void (**)(__int64*))(v11 + 16))(v10);
  }
  *(_DWORD*)(v4 + 184) = v1;
  *(_QWORD*)v4 = GameData_203a380;
  *(_QWORD*)(v4 + 152) = GameData_203a430;
  v12 = *(_QWORD*)(a1 + 40);
  if (v12 != 0) {
    *(_QWORD*)(v12 + 48) = v4;
    *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v4;
  *(_QWORD*)(v4 + 24) = "ProcStayScene";
  *(_QWORD*)(v4 + 32) = a1;
  *(_DWORD*)(v4 + 140) = GameRoutine_7a8520("ProcStayScene");
  *(_QWORD*)(v4 + 8) = &GameData_2243798;
  *(_QWORD*)(v4 + 16) = &GameData_2243798;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 24;
  *(_QWORD*)(v4 + 80) = 1;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4);
  if ((result & 1) != 0 && (*(_WORD*)(v4 + 136) & 0x100) == 0) {
    *(_WORD*)(v4 + 136) |= 0x100u;
  }
  v14 = (_BYTE*)*v6;
  v15 = *(_BYTE*)(*v6 + 138LL);
  if (v15 == 0) {
    result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v14 + 64LL))(*v6);
    v15 = v14[138];
  }
  v14[138] = v15 + 1;
  *(_WORD*)(v4 + 136) |= 2u;
  return result;
}

#pragma GCC visibility pop
