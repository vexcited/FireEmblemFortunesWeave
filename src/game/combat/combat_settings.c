#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10aa280(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_111ed70(_QWORD);
__int64 GameRoutine_111f3e0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2008950[])();
extern __int64 (*GameData_20089d0[])();
extern __int64 (*game_combat_CombatSettings_CameraShake_t_vtable)();
extern __int64 (*game_combat_CombatSettings_Camera_t_vtable)();
extern __int64 (*game_combat_CombatSettings_Chariot_t_vtable)();
extern __int64 (*game_combat_CombatSettings_Eyedart_t_vtable)();
extern __int64 (*game_combat_CombatSettings_Facial_t_vtable)();
extern __int64 (*game_combat_CombatSettings_FootIK_t_vtable)();
extern __int64 (*game_combat_CombatSettings_Footprint_t_vtable)();
extern __int64 (*game_combat_CombatSettings_General_t_vtable)();
extern __int64 (*game_combat_CombatSettings_HitStop_t_vtable)();
extern __int64 (*game_combat_CombatSettings_Illusion_t_vtable)();
extern __int64 (*game_combat_CombatSettings_LookAt_t_vtable)();
extern __int64 (*game_combat_CombatSettings_Onbt_t_vtable)();
extern __int64 (*game_combat_CombatSettings_Physics_t_vtable)();
extern __int64 (*game_combat_CombatSettings_RadialBlur_t_vtable)();
extern __int64 (*game_combat_CombatSettings_vtable[])();
extern __int64 GameData_212d270;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
extern __int64* game_g_frame_clock_ptr[3];
extern int GameData_2235770;
__int64 game_combat_CombatSettings_CombatSettings(_QWORD* a1);
__int64 game_combat_CombatSettings_RadialBlur_t_Play(__int64 a1, float a2);
__int64 game_combat_CombatSettings_CombatSettings_lambda0_Invoke(__int64 a1,
                                                                 __int64 a2);
bool game_combat_CombatSettings_RadialBlur_t_Play_lambda0_Invoke(__int64 a1,
                                                                 float* a2);

__int64 game_combat_CombatSettings_CombatSettings(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  _QWORD v7[4];
  _QWORD* v8;
  _QWORD v9[4];
  _QWORD* v10;

  if (*(_QWORD*)GameData_212d270 == 0) {
    *(_QWORD*)GameData_212d270 = a1;
    GameData_2235770 = 1;
  }
  *a1 = game_combat_CombatSettings_vtable;
  a1[78] = a1 + 62;
  a1[79] = a1 + 65;
  a1[38] = &game_combat_CombatSettings_Chariot_t_vtable;
  a1[80] = a1 + 53;
  a1[81] = a1 + 56;
  a1[42] = &game_combat_CombatSettings_Facial_t_vtable;
  a1[82] = a1 + 59;
  a1[49] = &game_combat_CombatSettings_Eyedart_t_vtable;
  a1[53] = &game_combat_CombatSettings_RadialBlur_t_vtable;
  a1[56] = &game_combat_CombatSettings_Onbt_t_vtable;
  a1[59] = &game_combat_CombatSettings_Footprint_t_vtable;
  a1[62] = &game_combat_CombatSettings_LookAt_t_vtable;
  a1[65] = &game_combat_CombatSettings_Illusion_t_vtable;
  a1[68] = &game_combat_CombatSettings_Physics_t_vtable;
  a1[1] = &game_combat_CombatSettings_General_t_vtable;
  a1[72] = a1 + 1;
  a1[8] = &game_combat_CombatSettings_HitStop_t_vtable;
  a1[73] = a1 + 8;
  a1[12] = &game_combat_CombatSettings_CameraShake_t_vtable;
  a1[74] = a1 + 12;
  a1[19] = &game_combat_CombatSettings_Camera_t_vtable;
  a1[76] = a1 + 42;
  a1[75] = a1 + 19;
  a1[24] = &game_combat_CombatSettings_FootIK_t_vtable;
  a1[77] = a1 + 49;
  a1[83] = a1 + 24;
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  a1[84] = a1 + 38;
  a1[85] = a1 + 68;
  v3 = fw_memory_HeapManager_Allocate(*v2, 80, 16, 0);
  *(_QWORD*)(v3 + 48) = 0;
  a1[86] = v3;
  *(_QWORD*)v3 = "GameData/Combat/CombatSettings.bprop";
  *(_QWORD*)(v3 + 8) = 0;
  *(_WORD*)(v3 + 64) = 1;
  v10 = v9;
  v7[0] = GameData_2008950;
  v7[1] = a1;
  v8 = v7;
  v9[0] = GameData_2008950;
  v9[1] = a1;
  GameRoutine_111f3e0(v9, v3 + 16);
  if (v10 == v9) {
    v4 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_8;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v10 + v4))((__int64)v10);
LABEL_8:
  GameRoutine_111ed70(v3);
  result = (__int64)v8;
  if (v8 == v7) {
    v6 = 32;
  }
  else {
    if (v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(__int64))(*v8 + v6))((__int64)v8);
}

__int64 game_combat_CombatSettings_RadialBlur_t_Play(__int64 a1, float a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float v7;
  float v8;
  int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  _BYTE v16[32];
  _BYTE* v17;
  _QWORD v18[2];
  int v19;
  _QWORD* v20;

  v2 = *(_QWORD*)(game_g_frame_clock + 13224);
  v3 = *(_QWORD*)(v2 + 48);
  v4 = *(_QWORD*)(v2 + 56);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    v5 = *(_QWORD*)(*(_QWORD*)(v3 + 8) + 168LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v6 = a1;
      v7 = a2;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
      a2 = v7;
      a1 = v6;
    }
  }
  else {
    v5 = *(_QWORD*)(*(_QWORD*)(v3 + 8) + 168LL);
  }
  v8 = a2 * *(float*)(a1 + 16);
  v9 = *(_DWORD*)(a1 + 8);
  v10 = 128;
  if (*(_BYTE*)(v5 + 96) != 0) {
    v10 = 92;
  }
  v11 = *(_DWORD*)(a1 + 12);
  v12 = *(unsigned int*)(v5 + v10);
  v17 = nullptr;
  v19 = v11;
  v18[0] = GameData_20089d0;
  v18[1] = v12 | ((unsigned __int64)LODWORD(v8) << 32);
  v20 = v18;
  GameRoutine_10aa280(0, v18, v16, (float)v9 / 60.0f);
  if (v17 == v16) {
    v13 = 32;
  }
  else {
    if (v17 == nullptr) {
      goto LABEL_12;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v17 + v13))((__int64)v17);
LABEL_12:
  result = (__int64)v20;
  if (v20 == v18) {
    v15 = 32;
  }
  else {
    if (v20 == nullptr) {
      return result;
    }
    v15 = 40;
  }
  return (*(__int64 (**)(__int64))(*v20 + v15))((__int64)v20);
}

__int64 game_combat_CombatSettings_CombatSettings_lambda0_Invoke(__int64 a1,
                                                                 __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 8);
  (***(void (****)(_QWORD))(v2 + 576))(*(_QWORD*)(v2 + 576));
  (***(void (****)(_QWORD, __int64))(v2 + 584))(*(_QWORD*)(v2 + 584), a2);
  (***(void (****)(_QWORD, __int64))(v2 + 592))(*(_QWORD*)(v2 + 592), a2);
  (***(void (****)(_QWORD, __int64))(v2 + 600))(*(_QWORD*)(v2 + 600), a2);
  (***(void (****)(_QWORD, __int64))(v2 + 608))(*(_QWORD*)(v2 + 608), a2);
  (***(void (****)(_QWORD, __int64))(v2 + 616))(*(_QWORD*)(v2 + 616), a2);
  (***(void (****)(_QWORD, __int64))(v2 + 624))(*(_QWORD*)(v2 + 624), a2);
  (***(void (****)(_QWORD, __int64))(v2 + 632))(*(_QWORD*)(v2 + 632), a2);
  (***(void (****)(_QWORD, __int64))(v2 + 640))(*(_QWORD*)(v2 + 640), a2);
  (***(void (****)(_QWORD, __int64))(v2 + 648))(*(_QWORD*)(v2 + 648), a2);
  (***(void (****)(_QWORD, __int64))(v2 + 656))(*(_QWORD*)(v2 + 656), a2);
  (***(void (****)(_QWORD, __int64))(v2 + 664))(*(_QWORD*)(v2 + 664), a2);
  (***(void (****)(_QWORD, __int64))(v2 + 672))(*(_QWORD*)(v2 + 672), a2);
  return (***(__int64 (****)(_QWORD, __int64))(v2 + 680))(*(_QWORD*)(v2 + 680),
                                                          a2);
}

bool game_combat_CombatSettings_RadialBlur_t_Play_lambda0_Invoke(__int64 a1,
                                                                 float* a2)
{
  float v2;
  int v3;
  float v4;
  float v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = *a2;
  v3 = *(_DWORD*)(a1 + 16);
  v4 = (float)(1.0f - *a2) * (float)(1.0f - *a2);
  v5 = *(float*)(a1 + 8) +
       (float)((float)(*(float*)(a1 + 12) - *(float*)(a1 + 8)) *
               (float)(1.0f - (float)(v4 * v4)));
  v6 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
  v7 = *(_QWORD*)(v6 + 48);
  v8 = *(_QWORD*)(v6 + 56);
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
    v9 = *(_QWORD*)(*(_QWORD*)(v7 + 8) + 168LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
    if (v5 > 0.0f) {
      goto LABEL_5;
    }
  }
  else {
    v9 = *(_QWORD*)(*(_QWORD*)(v7 + 8) + 168LL);
    if (v5 > 0.0f) {
    LABEL_5:
      *(float*)(v9 + 92) = v5;
      *(_BYTE*)(v9 + 96) = 1;
      if (v3 >= 1) {
        *(_DWORD*)(v9 + 172) = v3;
        *(_BYTE*)(v9 + 176) = 1;
      }
      return v2 < 1.0f;
    }
  }
  if (*(_BYTE*)(v9 + 96) == 1) {
    *(_BYTE*)(v9 + 96) = 0;
  }
  return v2 < 1.0f;
}

#pragma GCC visibility pop
