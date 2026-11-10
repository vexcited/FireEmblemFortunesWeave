#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CombatLegionGroup_e58ae0(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
float32x4_t GameRoutine_e4c8c0(__int64, _QWORD*, _QWORD*, char);
__int64 game_combat_LegionGambit_MakeTimeline_TemplateBase_lambda0_Invoke(
    __int64 result);
void game_combat_LegionGambit_MakeTimeline_GambitCharacter_lambda1_Invoke(
    __int64 a1, __int64* a2);
__int64 game_combat_LegionGambit_MakeTimeline_InvisibleEnemy_lambda1_Invoke(
    __int64 a1, __int64* a2, int* a3);
__int64
game_combat_LegionGambit_MakeTimeline_Chariot_lambda0_Invoke(__int64 a1,
                                                             __int64 a2);
__int64
game_combat_LegionGambit_MakeTimeline_Chariot_lambda5_Invoke(__int64 a1,
                                                             __int64 a2);
float game_combat_LegionGambit_MakeTimeline_Chariot_lambda7_Invoke(__int64 a1,
                                                                   int* a2);
float game_combat_LegionGambit_MakeTimeline_Chariot_lambda8_Invoke(__int64 a1,
                                                                   int* a2);
__int64 game_combat_LegionGambit_MakeTimeline_Area_lambda0_Invoke(__int64 a1,
                                                                  __int64 a2);

__int64 game_combat_LegionGambit_MakeTimeline_TemplateBase_lambda0_Invoke(
    __int64 result)
{
  *(_BYTE*)(*(_QWORD*)(result + 8) + 145LL) = 1;
  return result;
}

void game_combat_LegionGambit_MakeTimeline_GambitCharacter_lambda1_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  unsigned int v6;
  __int128 v7;
  _OWORD* v8;
  __int128 v9;
  __int128 v10;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v9 = 0u;
  v10 = 0u;
  GameRoutine_e4c8c0(v2, &v10, &v9, 1);
  v4 = *(_QWORD*)(v3 + 128);
  if (*(_DWORD*)(v4 + 84) == 5) {
    v5 = *(unsigned __int8*)(v4 + 64);
    *(_DWORD*)(v4 + 104) = 1065353216;
    if (v5 == 1) {
      v6 = DWORD2(v9);
      *(_QWORD*)(v4 + 48) = v9;
      v7 = *(_OWORD*)(v4 + 48);
      *((_QWORD*)&v7 + 1) = v6;
      *(_OWORD*)(v4 + 48) = v7;
      return;
    }
    v8 = (_OWORD*)(v4 + 48);
  }
  else {
    *(_DWORD*)(v4 + 32) = 0;
    *(_QWORD*)(v4 + 88) = 0;
    *(_QWORD*)(v4 + 96) = 0;
    *(_DWORD*)(v4 + 84) = 5;
    v8 = (_OWORD*)(v4 + 48);
    *(_DWORD*)(v4 + 104) = 1065353216;
  }
  *v8 = v9;
  *(_BYTE*)(v4 + 64) = 1;
}

__int64 game_combat_LegionGambit_MakeTimeline_InvisibleEnemy_lambda1_Invoke(
    __int64 a1, __int64* a2, int* a3)
{
  unsigned __int8* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  unsigned __int8** v9;
  unsigned __int8** v10;
  unsigned __int8* v11;
  unsigned __int8* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  __int64 v16;
  _BOOL4 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v4 = *(_QWORD*)(a1 + 8);
  v5 = *a2;
  v6 = *a3;
  result = CombatLegionGroup_e58ae0(
      *(_QWORD*)(*(_QWORD*)v4 +
                 8LL * (((*(_DWORD*)(v4 + 88) - 1) & 0xFFFFFFFD) == 0) + 16),
      "GambitInvisible", 15);
  if ((int)v6 >= (int)result) {
    return result;
  }
  v8 = *(_QWORD*)(*(_QWORD*)v4 +
                  8LL * (((*(_DWORD*)(v4 + 88) - 1) & 0xFFFFFFFD) == 0) + 16);
  v9 = *(unsigned __int8***)(v8 + 16);
  v10 = *(unsigned __int8***)(v8 + 24);
  if (v9 == v10) {
    goto LABEL_24;
  }
  v20 = v5;
  while (1) {
    v11 = *v9;
    v12 = v9[1];
    if (v12 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                memory_order_relaxed);
    }
    v13 = *v11;
    v14 = *((_QWORD*)v11 + 1);
    if ((v13 & 1) == 0) {
      v14 = v13 >> 1;
    }
    if (v14 != 15) {
      v17 = false;
      if (v12 == nullptr) {
        goto LABEL_19;
      }
    LABEL_17:
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(unsigned __int8*))(*(_QWORD*)v12 + 16LL))(v12);
        result = std___1___shared_weak_count___release_weak(v12);
      }
      goto LABEL_19;
    }
    if ((v13 & 1) != 0) {
      v15 = *((_QWORD**)v11 + 2);
    }
    else {
      v15 = v11 + 1;
    }
    v16 = *v15 ^ 0x6E497469626D6147LL |
          *(_QWORD*)((char*)v15 + 7) ^ 0x656C62697369766ELL;
    v17 = v16 == 0;
    if (v16 == 0) {
      v3 = v11;
    }
    if (v12 != nullptr) {
      goto LABEL_17;
    }
  LABEL_19:
    if (v17) {
      break;
    }
    v9 += 2;
    if (v9 == v10) {
      v5 = v20;
      goto LABEL_24;
    }
  }
  v5 = v20;
  if (v3 != nullptr) {
    v18 = *(_QWORD*)(*((_QWORD*)v3 + 3) + 16 * v6);
    goto LABEL_25;
  }
LABEL_24:
  v18 = 0;
LABEL_25:
  v19 = *(_QWORD*)(v5 + 128);
  *(_QWORD*)(v5 + 72) = v18;
  if (*(_DWORD*)(v19 + 84) != 2) {
    *(_DWORD*)(v19 + 32) = 0;
    *(_QWORD*)(v19 + 96) = 0;
    *(_DWORD*)(v19 + 84) = 2;
    if (*(_BYTE*)(v19 + 64) == 1) {
      *(_BYTE*)(v19 + 64) = 0;
    }
  }
  *(_QWORD*)(v19 + 88) = v18;
  *(_DWORD*)(v19 + 104) = 1065353216;
  return result;
}

__int64 game_combat_LegionGambit_MakeTimeline_Chariot_lambda0_Invoke(__int64 a1,
                                                                     __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 136LL);
  v3 = *(_QWORD*)(*(_QWORD*)a2 + 144LL);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    *(_BYTE*)(v2 + 60) = 1;
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      return std___1___shared_weak_count___release_weak(v3);
    }
  }
  else {
    *(_BYTE*)(v2 + 60) = 1;
  }
  return result;
}

__int64 game_combat_LegionGambit_MakeTimeline_Chariot_lambda5_Invoke(__int64 a1,
                                                                     __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 136LL);
  v3 = *(_QWORD*)(*(_QWORD*)a2 + 144LL);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    *(_BYTE*)(v2 + 60) = 1;
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      return std___1___shared_weak_count___release_weak(v3);
    }
  }
  else {
    *(_BYTE*)(v2 + 60) = 1;
  }
  return result;
}

float game_combat_LegionGambit_MakeTimeline_Chariot_lambda7_Invoke(__int64 a1,
                                                                   int* a2)
{
  return *(float*)(a1 + 4LL * *a2 + 8);
}

float game_combat_LegionGambit_MakeTimeline_Chariot_lambda8_Invoke(__int64 a1,
                                                                   int* a2)
{
  return *(float*)(a1 + 4LL * *a2 + 8);
}

__int64 game_combat_LegionGambit_MakeTimeline_Area_lambda0_Invoke(__int64 a1,
                                                                  __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 136LL);
  v3 = *(_QWORD*)(*(_QWORD*)a2 + 144LL);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    *(_BYTE*)(v2 + 60) = 1;
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      return std___1___shared_weak_count___release_weak(v3);
    }
  }
  else {
    *(_BYTE*)(v2 + 60) = 1;
  }
  return result;
}

#pragma GCC visibility pop
