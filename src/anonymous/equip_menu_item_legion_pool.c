#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_157ac20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15823b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_212cf80[5];
extern __int64 GameData_21ca060;
extern __int64* GameData_212c998[148];
extern __int64* GameData_212ceb0;
extern __int64* ui_LayoutAccessor_empty__ptr[3];
__int64 EquipMenuItem_LegionPool_Unknown55(__int64 a1);
bool EquipMenuItem_LegionPool_Unknown58(__int64 a1);

__int64 EquipMenuItem_LegionPool_Unknown55(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  char* v8;
  int v9;
  __int64 v10;
  _BOOL4 v11;
  char v12;
  __int64 v13;
  __int64* v14;
  char* v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  atomic_ullong* v21;
  __int64* v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  _BOOL8 v26;
  __int64 v28;
  __int64* v29;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v28 = v3;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v28);
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v4 == nullptr) {
  LABEL_5:
    v4 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_6:
  v5 = *(unsigned int*)(a1 + 40);
  v6 = GameData_212ceb0;
  v7 = GameData_212cf80[0];
  if ((int)v5 >= 0) {
    v6 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                               48LL) +
                    8 * v5);
  }
  v9 = *((unsigned __int8*)v6 + 1);
  v8 = (char*)v6 + 1;
  if (v9 != 0) {
    v10 = game_UnitPool_Get(v8);
  }
  else {
    v10 = 0;
  }
  v11 = v10 == *(_QWORD*)(a1 + 96);
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  GameRoutine_157ac20(v4, "IconEquip", v11, v12 & 1);
  v13 = *(unsigned int*)(a1 + 40);
  v14 = GameData_212ceb0;
  if ((int)v13 >= 0) {
    v14 =
        (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v7 + 8LL) + 48LL) + 8 * v13);
  }
  v16 = *((unsigned __int8*)v14 + 1);
  v15 = (char*)v14 + 1;
  if (v16 != 0) {
    v17 = game_UnitPool_Get(v15);
  }
  else {
    v17 = 0;
  }
  *(_QWORD*)(a1 + 88) = v17;
  v18 = *(_QWORD*)(a1 + 56);
  if (v18 == 0) {
    goto LABEL_20;
  }
  v19 = std___1___shared_weak_count_lock(v18);
  if (v19 == 0) {
    goto LABEL_20;
  }
  v20 = v19;
  v21 = (atomic_ullong*)(v19 + 8);
  v22 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v21, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v22 != nullptr) {
      goto LABEL_21;
    }
    goto LABEL_20;
  }
  v29 = v22;
  (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
  std___1___shared_weak_count___release_weak(v20);
  v22 = v29;
  if (v29 == nullptr) {
  LABEL_20:
    v22 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_21:
  v23 = *(unsigned int*)(a1 + 40);
  v24 = GameData_212ceb0;
  if ((int)v23 >= 0) {
    v24 =
        (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v7 + 8LL) + 48LL) + 8 * v23);
  }
  v25 = *(_QWORD*)(a1 + 96);
  v26 =
      *(_BYTE*)v24 == 0 ||
      *(_BYTE*)(*(_QWORD*)(v25 + 400) + 96LL) == 1 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                                         8LL * *(unsigned __int8*)v24) +
                              50LL) <=
              (unsigned int)*(unsigned __int8*)(v25 + 552);
  return GameRoutine_15823b0(v22, v24, 1, v26);
}

bool EquipMenuItem_LegionPool_Unknown58(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  _BOOL8 result;

  v1 = *(unsigned int*)(a1 + 40);
  v2 = GameData_212ceb0;
  if ((int)v1 >= 0) {
    v2 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                               48LL) +
                    8 * v1);
  }
  v3 = *(unsigned __int8*)v2;
  result = true;
  if (v3 != 0) {
    v4 = *(_QWORD*)(a1 + 96);
    if (*(_BYTE*)(*(_QWORD*)(v4 + 400) + 96LL) != 1 ||
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21ca060 + 64) +
                                       8 * v3) +
                            50LL) >
            (unsigned int)*(unsigned __int8*)(v4 + 552)) {
      return false;
    }
  }
  return result;
}

#pragma GCC visibility pop
