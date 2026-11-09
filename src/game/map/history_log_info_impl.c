#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_1a9f09e;
extern char** msg_MessageManager_empty_text__ptr;
__int64 HistoryLogInfo_68e240(__int64 a1);
__int64 HistoryLogInfo_6fb810(__int64 a1);
__int64 HistoryLogInfo_6fc2d0(__int64 a1);
__int64 HistoryLogInfo_9076c0(__int64 a1);
__int64 HistoryLogInfo_12395a0(__int64 result, __int64 a2);
__int64 HistoryLogInfo_1239980(__int64 result, __int64 a2);

__int64 HistoryLogInfo_68e240(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD v4[4];
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v1 = *(_QWORD*)(a1 + 32);
  if (v1 == 0) {
    return 0;
  }
  v7 = -1;
  v8 = -1;
  v9 = -1;
  v10 = -1;
  v2 = *msg_MessageManager_instance__ptr[0];
  v11 = -1;
  v12 = -1;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v4[0] = msg_TagSelector_vtable;
  v4[1] = 0xFFFF0001FFFF0000LL;
  v4[2] = 0xFFFF0004FFFF0002LL;
  v4[3] = 0xFFFF0006FFFF0005LL;
  v19 = 8;
  v5 = -65529;
  v6 = -65528;
  return GameRoutine_a4dbe0(v2, v1, 0, v4);
}

__int64 HistoryLogInfo_6fb810(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v12[2];
  unsigned __int64 v13;
  unsigned __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;

  v1 = *(_QWORD*)(a1 + 40);
  v3 = msg_MessageManager_instance__ptr[0];
  v4 = *msg_MessageManager_instance__ptr[0];
  v5 = GameData_212e348;
  if (v1 != 0) {
    v6 = *msg_MessageManager_instance__ptr[0];
    v17 = -1;
    v18 = -1;
    v19 = -1;
    v20 = -1;
    v21 = -1;
    v22 = -1;
    v23 = -1;
    v24 = -1;
    v25 = -1;
    v26 = -1;
    v27 = -1;
    v28 = -1;
    v12[0] = GameData_212e348 + 2;
    v12[1] = 0xFFFF0001FFFF0000LL;
    v13 = 0xFFFF0004FFFF0002LL;
    v14 = 0xFFFF0006FFFF0005LL;
    v29 = 8;
    v15 = -65529;
    v16 = -65528;
    v7 = (char*)GameRoutine_a4dbe0(v6, v1, 0, v12);
    v8 = v4 + 14704;
    if (v7 == nullptr) {
      v7 = *msg_MessageManager_empty_text__ptr;
    }
  }
  else {
    v7 = &GameData_1a9f09e;
    v8 = v4 + 14704;
  }
  GameRoutine_60a020(v8, v7);
  v9 = *v3;
  v10 = *(_QWORD*)(a1 + 32);
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  v26 = -1;
  v27 = -1;
  v28 = -1;
  v12[0] = v5 + 2;
  v12[1] = 0xFFFF0001FFFF0000LL;
  v13 = 0xFFFF0004FFFF0002LL;
  v14 = 0xFFFF0006FFFF0005LL;
  v29 = 8;
  v15 = -65529;
  v16 = -65528;
  return GameRoutine_a4dbe0(v9, v10, 0, v12);
}

__int64 HistoryLogInfo_6fc2d0(__int64 a1)
{
  _BYTE* v1;
  __int64 v2;
  _QWORD v4[4];
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v1 = *(_BYTE**)(a1 + 80);
  if (v1 == nullptr || *v1 == 0) {
    return 0;
  }
  v7 = -1;
  v8 = -1;
  v9 = -1;
  v10 = -1;
  v2 = *msg_MessageManager_instance__ptr[0];
  v11 = -1;
  v12 = -1;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v4[0] = msg_TagSelector_vtable;
  v4[1] = 0xFFFF0001FFFF0000LL;
  v4[2] = 0xFFFF0004FFFF0002LL;
  v4[3] = 0xFFFF0006FFFF0005LL;
  v19 = 8;
  v5 = -65529;
  v6 = -65528;
  return GameRoutine_a4dbe0(v2, v1, 0, v4);
}

__int64 HistoryLogInfo_9076c0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD v4[4];
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v7 = -1;
  v8 = -1;
  v9 = -1;
  v10 = -1;
  v11 = -1;
  v12 = -1;
  v1 = *(_QWORD*)(a1 + 32);
  v2 = *msg_MessageManager_instance__ptr[0];
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v4[0] = GameData_212e348 + 2;
  v4[1] = 0xFFFF0001FFFF0000LL;
  v4[2] = 0xFFFF0004FFFF0002LL;
  v4[3] = 0xFFFF0006FFFF0005LL;
  v19 = 8;
  v5 = -65529;
  v6 = -65528;
  return GameRoutine_a4dbe0(v2, v1, 0, v4);
}

__int64 HistoryLogInfo_12395a0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
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
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;

  v2 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = 2;
  v3 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_BYTE*)result;
  *(_DWORD*)(a2 + 20) = v3 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v3) = v2;
  v4 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_BYTE*)(result + 2);
  *(_DWORD*)(a2 + 20) = v4 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v4) = v2;
  v5 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_BYTE*)(result + 3);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v2;
  v6 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_BYTE*)(result + 4);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = v2;
  v7 = *(int*)(a2 + 20);
  LODWORD(v2) = *(_DWORD*)(result + 8);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = v2;
  v8 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = BYTE1(v2);
  v9 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = BYTE2(v2);
  v10 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = BYTE3(v2);
  v11 = *(int*)(a2 + 20);
  LODWORD(v2) = *(_DWORD*)(result + 16);
  *(_DWORD*)(a2 + 20) = v11 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = v2;
  v12 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v12 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = BYTE1(v2);
  v13 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v13 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = BYTE2(v2);
  v14 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v14 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = BYTE3(v2);
  v15 = *(int*)(a2 + 20);
  LODWORD(v2) = *(_DWORD*)(result + 20);
  *(_DWORD*)(a2 + 20) = v15 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = v2;
  v16 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v16 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = BYTE1(v2);
  v17 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v17 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = BYTE2(v2);
  v18 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v18 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = BYTE3(v2);
  v19 = *(int*)(a2 + 20);
  LODWORD(v2) = *(_DWORD*)(result + 32);
  *(_DWORD*)(a2 + 20) = v19 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v19) = v2;
  v20 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v20 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = BYTE1(v2);
  v21 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v21 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = BYTE2(v2);
  v22 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v22 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = BYTE3(v2);
  v23 = *(int*)(a2 + 20);
  LODWORD(v2) = *(_DWORD*)(result + 36);
  *(_DWORD*)(a2 + 20) = v23 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = v2;
  v24 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v24 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v24) = BYTE1(v2);
  v25 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v25 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v25) = BYTE2(v2);
  v26 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v26 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v26) = BYTE3(v2);
  v27 = *(int*)(a2 + 20);
  LODWORD(v2) = *(_DWORD*)(result + 48);
  *(_DWORD*)(a2 + 20) = v27 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v27) = v2;
  v28 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v28 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v28) = BYTE1(v2);
  v29 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v29 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v29) = BYTE2(v2);
  v30 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v30 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v30) = BYTE3(v2);
  v31 = *(int*)(a2 + 20);
  LODWORD(v2) = *(_DWORD*)(result + 52);
  *(_DWORD*)(a2 + 20) = v31 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v31) = v2;
  v32 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v32 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v32) = BYTE1(v2);
  v33 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v33 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v33) = BYTE2(v2);
  v34 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v34 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v34) = BYTE3(v2);
  v35 = *(int*)(a2 + 20);
  LODWORD(v2) = *(_DWORD*)(result + 64);
  *(_DWORD*)(a2 + 20) = v35 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v35) = v2;
  v36 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v36 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v36) = BYTE1(v2);
  v37 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v37 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v37) = BYTE2(v2);
  v38 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v38 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v38) = BYTE3(v2);
  v39 = *(int*)(a2 + 20);
  LODWORD(v2) = *(_DWORD*)(result + 68);
  *(_DWORD*)(a2 + 20) = v39 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v39) = v2;
  v40 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v40 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v40) = BYTE1(v2);
  v41 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v41 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v41) = BYTE2(v2);
  v42 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v42 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v42) = BYTE3(v2);
  return result;
}

__int64 HistoryLogInfo_1239980(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
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
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;

  v2 = *(int*)(a2 + 20);
  v3 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  v4 = *(unsigned __int8*)(v3 + v2);
  *(_DWORD*)(a2 + 20) = v2 + 2;
  *(_BYTE*)result = *(_BYTE*)(v3 + v2 + 1);
  v5 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(result + 2) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5);
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(result + 3) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6);
  v7 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_BYTE*)(result + 4) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7);
  v8 = *(int*)(a2 + 20);
  v9 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  v10 = *(unsigned __int8*)(v9 + v8);
  *(_DWORD*)(a2 + 20) = v8 + 2;
  v11 = v10 | (*(unsigned __int8*)(v9 + v8 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v8 + 3;
  v12 = *(unsigned __int8*)(v9 + v8 + 2);
  *(_DWORD*)(a2 + 20) = v8 + 4;
  *(_DWORD*)(result + 8) =
      v11 | (v12 << 16) | (*(unsigned __int8*)(v9 + v8 + 3) << 24);
  v13 = *(int*)(a2 + 20);
  v14 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v13 + 1;
  v15 = *(unsigned __int8*)(v14 + v13);
  *(_DWORD*)(a2 + 20) = v13 + 2;
  v16 = *(unsigned __int8*)(v14 + v13 + 1);
  *(_DWORD*)(a2 + 20) = v13 + 3;
  v17 = *(unsigned __int8*)(v14 + v13 + 2);
  *(_DWORD*)(a2 + 20) = v13 + 4;
  v18 = *(unsigned __int8*)(v14 + v13 + 3);
  *(_DWORD*)(a2 + 20) = v13 + 5;
  v19 = *(unsigned __int8*)(v14 + v13 + 4);
  *(_DWORD*)(a2 + 20) = v13 + 6;
  v20 = *(unsigned __int8*)(v14 + v13 + 5);
  *(_DWORD*)(a2 + 20) = v13 + 7;
  v21 = *(unsigned __int8*)(v14 + v13 + 6);
  *(_DWORD*)(a2 + 20) = v13 + 8;
  *(_QWORD*)(result + 16) =
      v15 | (v16 << 8) | (v17 << 16) | (v18 << 24) | (v19 << 32) | (v20 << 40) |
      (v21 << 48) |
      ((unsigned __int64)*(unsigned __int8*)(v14 + v13 + 7) << 56);
  *(_QWORD*)(result + 24) = &GameData_1a9f09e;
  v22 = *(int*)(a2 + 20);
  v23 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v22 + 1;
  v24 = *(unsigned __int8*)(v23 + v22);
  *(_DWORD*)(a2 + 20) = v22 + 2;
  v25 = *(unsigned __int8*)(v23 + v22 + 1);
  *(_DWORD*)(a2 + 20) = v22 + 3;
  v26 = *(unsigned __int8*)(v23 + v22 + 2);
  *(_DWORD*)(a2 + 20) = v22 + 4;
  v27 = *(unsigned __int8*)(v23 + v22 + 3);
  *(_DWORD*)(a2 + 20) = v22 + 5;
  v28 = *(unsigned __int8*)(v23 + v22 + 4);
  *(_DWORD*)(a2 + 20) = v22 + 6;
  v29 = *(unsigned __int8*)(v23 + v22 + 5);
  *(_DWORD*)(a2 + 20) = v22 + 7;
  v30 = *(unsigned __int8*)(v23 + v22 + 6);
  *(_DWORD*)(a2 + 20) = v22 + 8;
  *(_QWORD*)(result + 32) =
      v24 | (v25 << 8) | (v26 << 16) | (v27 << 24) | (v28 << 32) | (v29 << 40) |
      (v30 << 48) |
      ((unsigned __int64)*(unsigned __int8*)(v23 + v22 + 7) << 56);
  *(_QWORD*)(result + 40) = &GameData_1a9f09e;
  if (v4 != 0) {
    v31 = *(int*)(a2 + 20);
    v32 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v31 + 1;
    v33 = *(unsigned __int8*)(v32 + v31);
    *(_DWORD*)(a2 + 20) = v31 + 2;
    v34 = *(unsigned __int8*)(v32 + v31 + 1);
    *(_DWORD*)(a2 + 20) = v31 + 3;
    v35 = *(unsigned __int8*)(v32 + v31 + 2);
    *(_DWORD*)(a2 + 20) = v31 + 4;
    v36 = *(unsigned __int8*)(v32 + v31 + 3);
    *(_DWORD*)(a2 + 20) = v31 + 5;
    v37 = *(unsigned __int8*)(v32 + v31 + 4);
    *(_DWORD*)(a2 + 20) = v31 + 6;
    v38 = *(unsigned __int8*)(v32 + v31 + 5);
    *(_DWORD*)(a2 + 20) = v31 + 7;
    v39 = *(unsigned __int8*)(v32 + v31 + 6);
    *(_DWORD*)(a2 + 20) = v31 + 8;
    *(_QWORD*)(result + 48) =
        v33 | (v34 << 8) | (v35 << 16) | (v36 << 24) | (v37 << 32) |
        (v38 << 40) | (v39 << 48) |
        ((unsigned __int64)*(unsigned __int8*)(v32 + v31 + 7) << 56);
    *(_QWORD*)(result + 56) = &GameData_1a9f09e;
    if (v4 == 1) {
      *(_QWORD*)(result + 64) = 0;
    }
    else {
      v40 = *(int*)(a2 + 20);
      v41 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v40 + 1;
      v42 = *(unsigned __int8*)(v41 + v40);
      *(_DWORD*)(a2 + 20) = v40 + 2;
      v43 = *(unsigned __int8*)(v41 + v40 + 1);
      *(_DWORD*)(a2 + 20) = v40 + 3;
      v44 = *(unsigned __int8*)(v41 + v40 + 2);
      *(_DWORD*)(a2 + 20) = v40 + 4;
      v45 = *(unsigned __int8*)(v41 + v40 + 3);
      *(_DWORD*)(a2 + 20) = v40 + 5;
      v46 = *(unsigned __int8*)(v41 + v40 + 4);
      *(_DWORD*)(a2 + 20) = v40 + 6;
      v47 = *(unsigned __int8*)(v41 + v40 + 5);
      *(_DWORD*)(a2 + 20) = v40 + 7;
      v48 = *(unsigned __int8*)(v41 + v40 + 6);
      *(_DWORD*)(a2 + 20) = v40 + 8;
      *(_QWORD*)(result + 64) =
          v42 | (v43 << 8) | (v44 << 16) | (v45 << 24) | (v46 << 32) |
          (v47 << 40) | (v48 << 48) |
          ((unsigned __int64)*(unsigned __int8*)(v41 + v40 + 7) << 56);
    }
    *(_QWORD*)(result + 72) = &GameData_1a9f09e;
  }
  else {
    *(_QWORD*)(result + 48) = 0;
    *(_QWORD*)(result + 56) = &GameData_1a9f09e;
    *(_QWORD*)(result + 64) = 0;
    *(_QWORD*)(result + 72) = &GameData_1a9f09e;
  }
  return result;
}

#pragma GCC visibility pop
