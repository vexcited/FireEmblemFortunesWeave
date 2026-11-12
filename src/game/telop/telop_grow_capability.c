#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 TelopGrowCapability_Unknown56(__int64 a1);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__attribute__((swiftcall)) void GameRoutine_9d5180(PSEUDO_X8, __int64*,
                                                   _QWORD*);
__int64* GameRoutine_1760e40(__int64, unsigned int);
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 StatusNum_1890220(__int64, unsigned int, unsigned int, unsigned int,
                          char, char, int);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetParam(__int64);
__int64 game_Unit_GetParamLimit(_QWORD*, unsigned __int8*);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char* GameData_20c2790[11];
extern char** msg_MessageManager_empty_text__ptr;
void* GameHr_67ed20(_QWORD*);
void* game_97b2f0(__int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void LayoutAccessor_1562060(__int64*, const char*, const char*);
void TelopGrowCapability_Unknown57(__int64 a1);

__int64 TelopGrowCapability_Unknown56(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  __int128 v6;
  __int64 v7;

  v1 = *(unsigned __int8*)(a1 + 824);
  v2 = *(_QWORD*)(a1 + 832);
  v7 = 0;
  v6 = (__typeof__(v6)){0};
  if ((v1 & 1) != 0) {
    v4 = v2;
  }
  else {
    v4 = v1 >> 1;
  }
  if (v4 != 0) {
    *(_WORD*)((char*)&v6 + 9) = 28239;
    *(_QWORD*)((char*)&v6 + 1) = *(_QWORD*)"Pos_TalkOn";
  }
  else {
    DWORD2(v6) = 1717981035;
    *(_QWORD*)((char*)&v6 + 1) = *(_QWORD*)"Pos_TalkOff";
  }
  LayoutAccessor_1562cf0(a1 + 168, (const char*)&v6 + 1);
  return LayoutAccessor_1562cf0(a1 + 168, "Type_TitleOff");
}

void TelopGrowCapability_Unknown57(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  const char* v5;
  __int64* v6;
  const char* v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  _QWORD* v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  unsigned __int64 v24;
  const char* v25;
  _QWORD v26[2];
  struct {
    __int64* v27;
    __int64 v28;
    unsigned __int64 v29;
    unsigned __int64 v30;
    int v31;
    int v32;
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
  } v27_;

  v2 = GameRoutine_1760e40(a1, 0xCu);
  v3 = *(_QWORD*)(a1 + 1168);
  v4 = v2;
  if (*(_BYTE*)(v3 + 2136) != 0) {
    v5 = (const char*)game_97b2f0(v3 + 2104);
  }
  else {
    v5 = (const char*)GameHr_67ed20(*(_QWORD**)(v3 + 392));
  }
  v6 = msg_MessageManager_instance__ptr[0];
  if (v5 != nullptr) {
    v7 = v5;
  }
  else {
    v7 = *msg_MessageManager_empty_text__ptr;
  }
  GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v7);
  v8 = *v6;
  v27_.v33 = -1;
  v27_.v34 = -1;
  v27_.v35 = -1;
  v27_.v36 = -1;
  v27_.v37 = -1;
  v27_.v38 = -1;
  v27_.v39 = -1;
  v27_.v40 = -1;
  v27_.v41 = -1;
  v27_.v42 = -1;
  v27_.v43 = -1;
  v27_.v27 = GameData_212e348 + 2;
  v27_.v28 = 0xFFFF0001FFFF0000LL;
  v27_.v29 = 0xFFFF0004FFFF0002LL;
  v27_.v30 = 0xFFFF0006FFFF0005LL;
  v27_.v44 = -1;
  v27_.v45 = 8;
  v27_.v31 = -65529;
  v27_.v32 = -65528;
  v9 = GameRoutine_a4dbe0(v8, "MID_Sys_Result_Msg_Status_Up", 0);
  if (v9 != nullptr) {
    v10 = (__int64)v9;
    v11 = ui_LayoutAccessor_FindTextBox(v4, "T_Txt");
    if (v11 != 0) {
      GameRoutine_156c5d0(v11, v10, 0);
    }
  }
  v12 = ui_LayoutAccessor_FindPane(v4, "Face");
  if (v12 != 0) {
    v13 = __dynamic_cast(v12, GameData_212d670[0], GameData_212d678[0], 0);
    if (v13 != 0) {
      GameHr_1840740(v13, 0, *(_QWORD*)(a1 + 1168), 6u, 1);
    }
  }
  v26[0] = "L_NumStatusBefor";
  v26[1] = 16;
  GameRoutine_9d5180((void*)(&v27_.v27), v4, v26);
  if (v27_.v28 != 0) {
    v14 = std___1___shared_weak_count_lock(v27_.v28);
    v15 = (__int64)v27_.v27;
    if (v27_.v28 != 0) {
      std___1___shared_weak_count___release_weak(v27_.v28);
    }
    if (v14 != 0 && v15 != 0) {
      StatusNum_1890220(v15, *(_DWORD*)(a1 + 1180), *(_DWORD*)(a1 + 1180),
                        *(_DWORD*)(a1 + 1188), 1, 0, *(_DWORD*)(a1 + 1184));
      (*(void (**)(__int64, __int64))(*(_QWORD*)v15 + 40LL))(v15, 1);
    }
    else if (v14 == 0) {
      goto LABEL_22;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak(v14);
    }
  }
LABEL_22:
  v26[0] = "L_NumStatusAfter";
  v26[1] = 16;
  GameRoutine_9d5180((void*)(&v27_.v27), v4, v26);
  if (v27_.v28 == 0) {
    goto LABEL_31;
  }
  v16 = std___1___shared_weak_count_lock(v27_.v28);
  v17 = (__int64)v27_.v27;
  if (v27_.v28 != 0) {
    std___1___shared_weak_count___release_weak(v27_.v28);
  }
  if (v16 != 0 && v17 != 0) {
    v18 = *(_QWORD*)(a1 + 1168);
    LOBYTE(v27_.v27) = *(_BYTE*)(a1 + 1176);
    v19 = game_Unit_GetParam(v18);
    v20 = *(_QWORD**)(a1 + 1168);
    v21 = *(_DWORD*)(a1 + 1180);
    LOBYTE(v26[0]) = *(_BYTE*)(a1 + 1176);
    v22 = game_Unit_GetParamLimit(v20, (unsigned __int8*)v26);
    v23 = game_Unit_GetParam(*(_QWORD*)(a1 + 1168));
    StatusNum_1890220(v17, v19, v21, v22, 1, 0, v23);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v17 + 40LL))(v17, 1);
  }
  else if (v16 == 0) {
    goto LABEL_31;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
LABEL_31:
  v24 = *(unsigned __int8*)(a1 + 1176);
  if (v24 > 0xA) {
    v25 = nullptr;
  }
  else {
    v25 = GameData_20c2790[v24];
  }
  LayoutAccessor_1562060(v4, "T_Status", v25);
}

#pragma GCC visibility pop
