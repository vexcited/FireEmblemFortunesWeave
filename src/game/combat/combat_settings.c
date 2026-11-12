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
__int64 GameRoutine_111f130(__int64, __int64, int*, unsigned int);
__int64 GameRoutine_65f7a0(_QWORD*, unsigned int*, unsigned int);
__int64 GameRoutine_6616e0(float*, unsigned int*);
__int64 game_HashString32(__int64 result);
void GameRoutine_111f220(__int64, __int64, float*, float);
__int64 CombatSettings_General_t_Destructor(__int64 a1, __int64 a2);
__int64 CombatSettings_HitStop_t_Destructor(__int64 a1, __int64 a2);
void CombatSettings_CameraShake_t_Destructor(__int64 a1, __int64 a2);
void CombatSettings_Camera_t_Destructor(float* a1, __int64 a2);
void CombatSettings_FootIK_t_Destructor(__int64 a1, __int64 a2);
void CombatSettings_Chariot_t_Destructor(float* a1, __int64 a2);
void CombatSettings_Facial_t_Destructor(__int64 a1, __int64 a2);
void CombatSettings_Eyedart_t_Destructor(float* a1, __int64 a2);
__int64 CombatSettings_RadialBlur_t_Destructor(__int64 a1, __int64 a2);
void CombatSettings_Onbt_t_Destructor(float* a1, __int64 a2);
void CombatSettings_Footprint_t_Destructor(float* a1, __int64 a2);
void CombatSettings_LookAt_t_Destructor(float* a1, __int64 a2);
void CombatSettings_Illusion_t_Destructor(__int64 a1, __int64 a2);
void CombatSettings_Physics_t_Destructor(float* a1, __int64 a2);
__int64 GameRoutine_10aa280_alt1(__int64, __int64, __int64,
                                 float) __asm__("GameRoutine_10aa280");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");

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

__int64 CombatSettings_General_t_Destructor(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  GameRoutine_111f130(a2, (__int64)"General_t.DefaultBlendFrames",
                      (int*)(a1 + 8), 0x14u);
  GameRoutine_111f130(a2, (__int64)"General_t.FrameToDodge", (int*)(a1 + 12),
                      0x12u);
  GameRoutine_111f130(a2, (__int64)"General_t.FrameToGuard", (int*)(a1 + 16),
                      8u);
  GameRoutine_111f130(a2, (__int64)"General_t.FrameToParry", (int*)(a1 + 20),
                      0xEu);
  GameRoutine_111f220(a2, (__int64)"General_t.MaxRunSpeed", (float*)(a1 + 28),
                      0x1.2000000000000p+4f);
  GameRoutine_111f220(a2, (__int64)"General_t.TimeToMaxRunSpeed",
                      (float*)(a1 + 48), 0x1.0000000000000p-1f);
  GameRoutine_111f130(a2, (__int64)"General_t.InitialAttackRRate",
                      (int*)(a1 + 32), 0x46u);
  GameRoutine_111f130(a2, (__int64)"General_t.ParryFlyingRate", (int*)(a1 + 36),
                      0x1Eu);
  GameRoutine_111f220(a2, (__int64)"General_t.PABS_Distance", (float*)(a1 + 40),
                      0x1.8000000000000p+0f);
  GameRoutine_111f130(a2, (__int64)"General_t.PABS_Angle", (int*)(a1 + 24),
                      0x2Du);
  return GameRoutine_111f130(a2, (__int64)"General_t.DamagerAttackCrushedRate",
                             (int*)(a1 + 44), 0x46u);
}

__int64 CombatSettings_HitStop_t_Destructor(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  GameRoutine_111f220(a2, (__int64)"HitStop_t.MinDamageRate", (float*)(a1 + 8),
                      0x1.99999a0000000p-3f);
  GameRoutine_111f220(a2, (__int64)"HitStop_t.MaxDamageRate", (float*)(a1 + 12),
                      0x1.99999a0000000p-1f);
  GameRoutine_111f130(a2, (__int64)"HitStop_t.MinFrames", (int*)(a1 + 16), 7u);
  GameRoutine_111f130(a2, (__int64)"HitStop_t.MaxFrames", (int*)(a1 + 20),
                      0xDu);
  return GameRoutine_111f130(a2, (__int64)"HitStop_t.GuardFrames",
                             (int*)(a1 + 24), 0);
}

void CombatSettings_CameraShake_t_Destructor(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  GameRoutine_111f130(a2, (__int64)"CameraShake_t.MidFrames", (int*)(a1 + 8),
                      7u);
  GameRoutine_111f130(a2, (__int64)"CameraShake_t.OutFrames", (int*)(a1 + 12),
                      3u);
  GameRoutine_111f220(a2, (__int64)"CameraShake_t.Magnitude", (float*)(a1 + 16),
                      0x1.3333340000000p-2f);
  GameRoutine_111f220(a2, (__int64)"CameraShake_t.Speed", (float*)(a1 + 20),
                      0x1.4000000000000p+3f);
  GameRoutine_111f130(a2, (__int64)"CameraShake_t.ArmorStepFrames",
                      (int*)(a1 + 24), 3u);
  GameRoutine_111f220(a2, (__int64)"CameraShake_t.ArmorStepMagnitude",
                      (float*)(a1 + 28), 0x1.47ae140000000p-6f);
  GameRoutine_111f220(a2, (__int64)"Scale0", (float*)(a1 + 32),
                      0x1.99999a0000000p-3f);
  GameRoutine_111f220(a2, (__int64)"Scale1", (float*)(a1 + 36),
                      0x1.0000000000000p+0f);
  GameRoutine_111f220(a2, (__int64)"Scale2", (float*)(a1 + 40),
                      0x1.4000000000000p+1f);
  GameRoutine_111f220(a2, (__int64)"CameraShake_t.DecayStart",
                      (float*)(a1 + 44), 0x1.c000000000000p+3f);
  GameRoutine_111f220(a2, (__int64)"CameraShake_t.DecayEnd", (float*)(a1 + 48),
                      0x1.6000000000000p+4f);
}

void CombatSettings_Camera_t_Destructor(float* a1, __int64 a2)
{

#pragma clang fp contract(off)
  GameRoutine_111f220(a2, (__int64)"Camera_t.AutoCameraInterval", a1 + 2,
                      0x1.0000000000000p+2f);
  GameRoutine_111f220(a2, (__int64)"Camera_t.LookAtHeightOffset", a1 + 9,
                      0x1.99999a0000000p-5f);
  GameRoutine_111f220(a2, (__int64)"Camera_t.SmoothDiffMin", a1 + 3,
                      0x1.3333340000000p-2f);
  GameRoutine_111f220(a2, (__int64)"Camera_t.SmoothDiffMax", a1 + 4,
                      0x1.0000000000000p+0f);
  GameRoutine_111f220(a2, (__int64)"Camera_t.SmoothDiffMinHuge", a1 + 5,
                      0x1.3333340000000p+0f);
  GameRoutine_111f220(a2, (__int64)"Camera_t.SmoothDiffMaxHuge", a1 + 6,
                      0x1.0000000000000p+1f);
  GameRoutine_111f220(a2, (__int64)"Camera_t.LerpMin", a1 + 7,
                      0x1.47ae140000000p-7f);
  GameRoutine_111f220(a2, (__int64)"Camera_t.LerpMax", a1 + 8,
                      0x1.0000000000000p+0f);
}

void CombatSettings_FootIK_t_Destructor(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  char v5;
  unsigned int v6;
  float* v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11[2];

  GameRoutine_111f220(a2, (__int64)"FootIK_t.SinkSpeed", (float*)(a1 + 8),
                      0x1.99999a0000000p-3f);
  GameRoutine_111f220(a2, (__int64)"FootIK_t.StepoverSpeed", (float*)(a1 + 12),
                      0x1.3333340000000p-2f);
  GameRoutine_111f220(a2, (__int64)"FootIK_t.SlopeLeanWeight",
                      (float*)(a1 + 16), 0x1.3333340000000p-3f);
  GameRoutine_111f220(a2, (__int64)"FootIK_t.SoftDisableRate",
                      (float*)(a1 + 20), 0x1.99999a0000000p-5f);
  GameRoutine_111f220(a2, (__int64)"FootIK_t.AnkleMaxDegree", (float*)(a1 + 24),
                      0x1.9000000000000p+4f);
  GameRoutine_111f220(a2, (__int64)"FootIK_t.SpeedThreshold", (float*)(a1 + 28),
                      0x1.4000000000000p+3f);
  GameRoutine_111f220(a2, (__int64)"FootIK_t.MaxStepHeight.Human",
                      (float*)(a1 + 32), 0x1.99999a0000000p-2f);
  GameRoutine_111f220(a2, (__int64)"FootIK_t.MaxStepHeight.Giant",
                      (float*)(a1 + 36), 0x1.0000000000000p+1f);
  GameRoutine_111f220(a2, (__int64)"FootIK_t.MaxStepHeight.Others",
                      (float*)(a1 + 40), 0x1.6666660000000p-1f);
  GameRoutine_111f220(a2, (__int64)"FootIK_t.SlopeBiped.SpeedLimit",
                      (float*)(a1 + 44), 0x1.8000000000000p+1f);
  GameRoutine_111f220(a2, (__int64)"FootIK_t.SlopeBiped.LegsHeightDifference",
                      (float*)(a1 + 48), 0x1.3333340000000p-2f);
  GameRoutine_111f220(a2, (__int64)"FootIK_t.SlopeBiped.StartAngle",
                      (float*)(a1 + 52), 0x1.4000000000000p+4f);
  GameRoutine_111f220(a2, (__int64)"FootIK_t.SlopeBiped.LimitAngle",
                      (float*)(a1 + 56), 0x1.4000000000000p+5f);
  GameRoutine_111f220(a2, (__int64)"FootIK_t.SlopeBiped.Influence",
                      (float*)(a1 + 60), 0x1.0000000000000p+1f);
  GameRoutine_111f220(a2, (__int64)"FootIK_t.SlopeBiped.LerpRate",
                      (float*)(a1 + 64), 0x1.99999a0000000p-5f);
  GameRoutine_111f220(a2, (__int64)"FootIK_t.Biped2.StartTime1",
                      (float*)(a1 + 68), 0x1.0000000000000p-2f);
  GameRoutine_111f220(a2, (__int64)"FootIK_t.Biped2.StartTime2",
                      (float*)(a1 + 72), 0x1.0000000000000p-1f);
  GameRoutine_111f220(a2, (__int64)"FootIK_t.Biped2.NarrowingRate",
                      (float*)(a1 + 76), 0x1.99999a0000000p-3f);
  GameRoutine_111f220(a2, (__int64)"FootIK_t.Biped2.Duration",
                      (float*)(a1 + 80), 0x1.3333340000000p+0f);
  GameRoutine_111f130(a2, (__int64)"FootIK_t.Biped2.EasePower", (int*)(a1 + 84),
                      7u);
  GameRoutine_111f220(a2, (__int64)"FootIK_t.SlopeQuadrupedal.AntiSlopeFoots",
                      (float*)(a1 + 88), 0x1.6666660000000p-1f);
  GameRoutine_111f220(a2, (__int64)"FootIK_t.SlopeQuadrupedal.FootRadius",
                      (float*)(a1 + 92), 0x1.eb851e0000000p-4f);
  v4 = *(_QWORD*)(a2 + 8);
  if (*(_BYTE*)(a2 + 64) == 1) {
    v10 = game_HashString32((__int64)"FootIK_t.SlopeQuadrupedal.Slope");
    v5 = GameRoutine_65f7a0((_QWORD*)v4, &v10, 0);
  }
  else {
    v5 = *(_BYTE*)(a1 + 96);
    v6 = game_HashString32((__int64)"FootIK_t.SlopeQuadrupedal.Slope");
    v7 = *(float**)(v4 + 120);
    v8 = *(_DWORD*)(v4 + 20);
    v11[0] = v6;
    v11[1] = v8;
    GameRoutine_6616e0(v7, v11);
    v9 = *(int*)(v4 + 20);
    *(_DWORD*)(v4 + 20) = v9 + 1;
    *(_BYTE*)(*(_QWORD*)(v4 + 8) + v9) = v5;
  }
  *(_BYTE*)(a1 + 96) = v5 != 0;
  GameRoutine_111f220(a2,
                      (__int64)"FootIK_t.SlopeQuadrupedal.IdleStabilizerMin",
                      (float*)(a1 + 100), 0x1.3333340000000p-2f);
  GameRoutine_111f220(a2,
                      (__int64)"FootIK_t.SlopeQuadrupedal.IdleStabilizerMax",
                      (float*)(a1 + 104), 0x1.99999a0000000p-2f);
  GameRoutine_111f220(
      a2, (__int64)"FootIK_t.SlopeQuadrupedal.RootRotationInterpolation",
      (float*)(a1 + 108), 0x1.99999a0000000p-4f);
}

void CombatSettings_Chariot_t_Destructor(float* a1, __int64 a2)
{

#pragma clang fp contract(off)
  GameRoutine_111f220(a2, (__int64)"Chariot_t.VirticalMag", a1 + 2,
                      0x1.0000000000000p+0f);
  GameRoutine_111f220(a2, (__int64)"Chariot_t.VirticalFreq", a1 + 3,
                      0x1.0000000000000p+0f);
  GameRoutine_111f220(a2, (__int64)"Chariot_t.RotationMag", a1 + 4,
                      0x1.0000000000000p+0f);
  GameRoutine_111f220(a2, (__int64)"Chariot_t.RotationFreq", a1 + 5,
                      0x1.0000000000000p+0f);
  GameRoutine_111f220(a2, (__int64)"Chariot_t.WheelSpeed", a1 + 6,
                      0x1.0000000000000p+0f);
}

void CombatSettings_Facial_t_Destructor(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  GameRoutine_111f220(a2, (__int64)"Facial_t.MinBlinkFrequency",
                      (float*)(a1 + 8), 0x1.8000000000000p+1f);
  GameRoutine_111f220(a2, (__int64)"Facial_t.MaxBlinkFrequency",
                      (float*)(a1 + 12), 0x1.4000000000000p+2f);
  GameRoutine_111f130(a2, (__int64)"Facial_t.BlinkRateOnChanged",
                      (int*)(a1 + 16), 0x32u);
  GameRoutine_111f220(a2, (__int64)"Facial_t.IrisBlendTime", (float*)(a1 + 20),
                      0x1.99999a0000000p-4f);
  GameRoutine_111f220(a2, (__int64)"Facial_t.FutureVoiceReading",
                      (float*)(a1 + 24), 0x1.0000000000000p+2f);
  GameRoutine_111f220(a2, (__int64)"Facial_t.VoiceInputSwitchingRate",
                      (float*)(a1 + 28), 0x1.3333340000000p-3f);
  GameRoutine_111f220(a2, (__int64)"Facial_t.MaxNodAngle", (float*)(a1 + 32),
                      0x1.4000000000000p+2f);
  GameRoutine_111f220(a2, (__int64)"Facial_t.NoddingSpeed", (float*)(a1 + 36),
                      0x1.0000000000000p+0f);
  GameRoutine_111f220(a2, (__int64)"Facial_t.MaxUsualBlend", (float*)(a1 + 40),
                      0x1.0000000000000p+0f);
  GameRoutine_111f220(a2, (__int64)"Facial_t.UsualBlendSpeed",
                      (float*)(a1 + 44), 0x1.0000000000000p+0f);
  GameRoutine_111f220(a2, (__int64)"Facial_t.MaxBrowup", (float*)(a1 + 48),
                      0x1.0000000000000p+0f);
  GameRoutine_111f220(a2, (__int64)"Facial_t.BrowupSpeed", (float*)(a1 + 52),
                      0x1.0000000000000p+0f);
}

void CombatSettings_Eyedart_t_Destructor(float* a1, __int64 a2)
{

#pragma clang fp contract(off)
  GameRoutine_111f220(a2, (__int64)"Eyedart_t.MinFrequency", a1 + 2,
                      0x1.0000000000000p-1f);
  GameRoutine_111f220(a2, (__int64)"Eyedart_t.MaxFrequency", a1 + 3,
                      0x1.0000000000000p+1f);
  GameRoutine_111f220(a2, (__int64)"Eyedart_t.HAmplitude", a1 + 4,
                      0x1.47ae140000000p-6f);
  GameRoutine_111f220(a2, (__int64)"Eyedart_t.VAmplitude", a1 + 5,
                      0x1.0624de0000000p-8f);
  GameRoutine_111f220(a2, (__int64)"Eyedart_t.SmoothRate", a1 + 6,
                      0x1.0000000000000p-1f);
}

__int64 CombatSettings_RadialBlur_t_Destructor(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  GameRoutine_111f220(a2, (__int64)"RadialBlur_t.Strength", (float*)(a1 + 16),
                      0x1.4000000000000p+3f);
  GameRoutine_111f130(a2, (__int64)"RadialBlur_t.SampleCount", (int*)(a1 + 12),
                      0xAu);
  return GameRoutine_111f130(a2, (__int64)"RadialBlur_t.FadeFrames",
                             (int*)(a1 + 8), 0xCu);
}

__int64 game_combat_CombatSettings_RadialBlur_t_Play(__int64 a1, float a2)
{

#pragma clang fp contract(off)
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
  struct {
    _BYTE v16[32];
    _BYTE* v17;
  } v16_;
  struct {
    _QWORD v18[2];
    int v19;
    char gap68_[12];
    _QWORD* v20;
  } v18_;

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
      std___1___shared_weak_count___release_weak_alt1(v4);
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
  v16_.v17 = nullptr;
  v18_.v19 = v11;
  v18_.v18[0] = GameData_20089d0;
  v18_.v18[1] = v12 | ((unsigned __int64)LODWORD(v8) << 32);
  v18_.v20 = v18_.v18;
  GameRoutine_10aa280_alt1(0, (__int64)v18_.v18, (__int64)v16_.v16,
                           (float)v9 / 0x1.e000000000000p+5f);
  if (v16_.v17 == v16_.v16) {
    v13 = 32;
  }
  else {
    if (v16_.v17 == nullptr) {
      goto LABEL_12;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v16_.v17 + v13))((__int64)v16_.v17);
LABEL_12:
  result = (__int64)v18_.v20;
  if (v18_.v20 == v18_.v18) {
    v15 = 32;
  }
  else {
    if (v18_.v20 == nullptr) {
      return result;
    }
    v15 = 40;
  }
  return (*(__int64 (**)(__int64))(*v18_.v20 + v15))((__int64)v18_.v20);
}

void CombatSettings_Onbt_t_Destructor(float* a1, __int64 a2)
{

#pragma clang fp contract(off)
  GameRoutine_111f220(a2, (__int64)"Onbt_t.Speed", a1 + 2,
                      0x1.0000000000000p+1f);
  GameRoutine_111f220(a2, (__int64)"Onbt_t.PhaseInterval", a1 + 3,
                      0x1.0000000000000p+0f);
  GameRoutine_111f220(a2, (__int64)"Onbt_t.MagicEffectScale", a1 + 4,
                      0x1.4000000000000p+1f);
}

void CombatSettings_Footprint_t_Destructor(float* a1, __int64 a2)
{

#pragma clang fp contract(off)
  GameRoutine_111f220(a2, (__int64)"Footprint_t.Lifespan", a1 + 2,
                      0x1.4000000000000p+4f);
  GameRoutine_111f220(a2, (__int64)"Footprint_t.Distance", a1 + 3,
                      0x1.4000000000000p+4f);
  GameRoutine_111f220(a2, (__int64)"Footprint_t.Dot", a1 + 4,
                      0x1.6666660000000p-1f);
}

void CombatSettings_LookAt_t_Destructor(float* a1, __int64 a2)
{

#pragma clang fp contract(off)
  GameRoutine_111f220(a2, (__int64)"LookAt_t.ToHeadEaseRatio", a1 + 2,
                      0x1.eb851e0000000p-6f);
  GameRoutine_111f220(a2, (__int64)"LookAt_t.SignalWeightReductionRate", a1 + 3,
                      0x1.6666660000000p-2f);
  GameRoutine_111f220(a2, (__int64)"LookAt_t.SignalWeightExpansionRate", a1 + 4,
                      0x1.eb851e0000000p-6f);
}

void CombatSettings_Illusion_t_Destructor(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  GameRoutine_111f130(a2, (__int64)"Illusion_t.Interval", (int*)(a1 + 8), 1u);
  GameRoutine_111f220(a2, (__int64)"Illusion_t.Lifespan", (float*)(a1 + 12),
                      0x1.3333340000000p-3f);
  GameRoutine_111f220(a2, (__int64)"Illusion_t.StartAlpha", (float*)(a1 + 16),
                      0x1.0000000000000p+0f);
}

void CombatSettings_Physics_t_Destructor(float* a1, __int64 a2)
{

#pragma clang fp contract(off)
  GameRoutine_111f220(a2, (__int64)"Physics_t.AngVelMinOnDie", a1 + 2,
                      0x1.4000000000000p+3f);
  GameRoutine_111f220(a2, (__int64)"Physics_t.AngVelMaxOnDie", a1 + 3,
                      0x1.e000000000000p+3f);
  GameRoutine_111f220(a2, (__int64)"Physics_t.HorizontalPowerOnDie", a1 + 4,
                      0x1.c000000000000p+2f);
  GameRoutine_111f220(a2, (__int64)"Physics_t.VerticalPowerOnDie", a1 + 5,
                      0x1.4000000000000p+2f);
  GameRoutine_111f220(a2, (__int64)"Physics_t.DropSound_HL", a1 + 6,
                      0x1.4000000000000p+1f);
  GameRoutine_111f220(a2, (__int64)"Physics_t.DropSound_LN", a1 + 7,
                      0x1.99999a0000000p-1f);
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

#pragma clang fp contract(off)
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
  v5 = __builtin_fmaf(*(float*)(a1 + 12) - *(float*)(a1 + 8),
                      (float)(1.0f - (float)(v4 * v4)), *(float*)(a1 + 8));
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
    if (!(v5 <= 0.0f)) {
      goto LABEL_5;
    }
  }
  else {
    v9 = *(_QWORD*)(*(_QWORD*)(v7 + 8) + 168LL);
    if (!(v5 <= 0.0f)) {
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
