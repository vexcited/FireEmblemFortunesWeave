#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_138a5a0(_QWORD);
__int64 GameRoutine_14869b0(_QWORD);
__int64 GameRoutine_1487e00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1958ed0(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_6c3050(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_Unit_Destroy_Unit(_QWORD);
__int64 game_facility_ReleaseGroups(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _DWORD* GameData_2130fb8;
extern __int64 (*GameData_1fbcde0[])();
extern __int64 (*GameData_1fbceb0[])();
extern __int64 (*GameData_1fbcf60[])();
extern __int64 (*game_anonymous_ProcJobIntroScene_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_21f3d10;
extern __int64 GameData_21f4000;
extern __int64 GameData_21fa488;
extern __int64 GameData_224b478;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64* GameData_212ce20[3];
extern __int64* GameData_2132488;
extern int GameData_21f9698;
__int64 ProcJobIntroScene_Destructor(__int64 a1);
__int64 ProcJobIntroScene_a0eec0();
void ProcJobIntroScene_a0eef0();
__int64 ProcJobIntroScene_Unknown18_alt1(__int64 a1) __asm__(
    "ProcJobIntroScene_Unknown18");
__int64 ProcJobIntroScene_Unknown2_alt1(__int64 a1) __asm__(
    "ProcJobIntroScene_Unknown2");
_BYTE* ProcInst_657a50(__int64, char);
__int16* GameRoutine_1958ed0_alt1(__int16* result,
                                  __int64) __asm__("GameRoutine_1958ed0");
__int64 game_809dc0(__int64, _QWORD*, __n128);
__int64 game_facility_SceneManager_CreateMap(__int64, __int64);
extern _UNKNOWN* GameData_212c960;
extern __int64 (*game_facility_SceneManager_BattleFieldArgs_vtable[])();
extern __int64 (*game_facility_SceneManager_IMapArgs_vtable)();
extern __int64 game_ProcFadeView_instance_;
_BYTE* ProcJobIntroScene_a0ef30(__int64 a1);
__int64 ProcJobIntroScene_Unknown20(__int64 a1);
__int64 ProcJobIntroScene_Unknown4(__int64 a1);
__int64 ForceContinueBGMBinder_1487e00(__int64, __int64, __int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcJobIntroScene_Unknown18(__int64 a1);
void ProcJobIntroScene_Unknown2(__int64 a1);

__int64 ProcJobIntroScene_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;

  *(_QWORD*)a1 = game_anonymous_ProcJobIntroScene_vtable;
  v2 = a1 + 240;
  *(_QWORD*)(a1 + 152) = GameData_1fbcde0;
  v3 = a1 + 152;
  GameRoutine_6c3050(a1 + 240);
  if (GameData_224b478 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_224b478 + 24LL))(
        GameData_224b478);
    if (GameData_224b478 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_224b478 + 8LL))(
          GameData_224b478);
    }
    GameData_224b478 = 0;
  }
  if (*GameData_212ce20[0] != 0) {
    if (GameData_21f9698 + 1 < (int)((*(_QWORD*)(*GameData_212ce20[0] + 72) -
                                      *(_QWORD*)(*GameData_212ce20[0] + 64)) >>
                                     3)) {
      v4 = GameData_21f9698 + 1;
    }
    else {
      v4 = 0;
    }
    GameData_21f9698 = v4;
  }
  game_Unit_Destroy_Unit(v2);
  v5 = *(_QWORD*)(a1 + 208);
  if (v5 != 0) {
    *(_QWORD*)(a1 + 216) = v5;
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
  }
  *(_QWORD*)a1 = GameData_1fbceb0;
  *(_QWORD*)(a1 + 152) = GameData_1fbcf60;
  GameRoutine_1958ed0(v3, a1);
  *(_QWORD*)(a1 + 152) = GameData_2132488 + 2;
  v7 = (_QWORD*)GameData_212dce8;
  v8 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 24LL))(v8);
    if (*v7 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v7 + 8LL))(*v7);
    }
    *v7 = 0;
  }
  game_facility_ReleaseGroups();
  GameData_21fa488 = 0;
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcJobIntroScene_a0eec0()
{
  __int64 v0;

  v0 = GameRoutine_138a5a0(GameData_21f4000);
  return GameRoutine_14869b0(v0);
}

void ProcJobIntroScene_a0eef0()
{
  if (GameData_21f3d10 != 0 && *(int*)(GameData_21f3d10 + 152) >= 1) {
    *(_DWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 156LL) =
        1065353216;
  }
}

_BYTE* ProcJobIntroScene_a0ef30(__int64 a1)
{

#pragma clang fp contract(off)
  _BYTE* result;
  __n128 v3;
  __int64 v4;
  unsigned __int64 v5;
  __n128* v6;
  __n128* v7;
  __n128 v8;

  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  result = GameRoutine_1958ed0_alt1((__int16*)(a1 + 152), a1),
  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (*(_BYTE*)(a1 + 164) == 1 && (*(_DWORD*)(a1 + 160) & 0x80000000) != 0) {
    v4 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v5 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v5 + 172) == *(float*)(v5 + 168) &&
          (v6 = (__n128*)(v5 + 160),
           LANES128(v3).n128_u64[1] =
               LANES128_OF(((__n128 (*)(unsigned __int64)) *
                            (_QWORD*)(*(_QWORD*)(v5 + 160) + 16LL))(v5 + 160))
                   .n128_u64[1],
           LANES128(v3).n128_f32[3] == 0x1.0000000000000p+0f)) {
        if (LANES128(*(v6)).n128_f32[3] == LANES128(*(v6)).n128_f32[2]) {
          (*(void (**)(__n128*))(LANES128(*(v6)).n128_u64[0] + 16))(v6),
              v3 = COERCE_AS(__typeof__(v3),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          v3 = v6[3];
        }
        v8 = v3;
        LANES128(v3).n128_u64[0] = 0;
        v7 = &v8;
      }
      else {
        LANES128(v3).n128_u64[0] = 0;
        v7 = (__n128*)GameData_212c960;
      }
      result = (_BYTE*)game_809dc0(v4, v7, v3),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  if ((*(_WORD*)(a1 + 136) & 1) == 0) {
    return ProcInst_657a50(a1, 1);
  }
  return result;
}

void ProcJobIntroScene_Unknown18(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  struct {
    _WORD v3[8];
    __int64 v4;
  } v3_;

  v1 = ***(_QWORD***)(*(_QWORD*)(a1 + 192) + 40LL);
  v3_.v3[0] = 0;
  ForceContinueBGMBinder_1487e00(*(_QWORD*)(v1 + 120), (__int64)v3_.v3, 0);
  if ((v3_.v3[0] & 1) != 0 && v3_.v4 != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v3_.v4);
  }
}

__int64 ProcJobIntroScene_Unknown20(__int64 a1)
{
  __int64 result;
  __int64 v2;
  struct {
    _QWORD v3[6];
    _QWORD* v4;
    __int64 v5;
    __int64 v6;
    char v7;
  } v3_;

  v3_.v4 = nullptr;
  v3_.v5 = 0;
  v3_.v3[0] = game_facility_SceneManager_BattleFieldArgs_vtable;
  memset(&v3_.v3[1], 0, 40);
  v3_.v6 = *(_QWORD*)(***(_QWORD***)(*(_QWORD*)(a1 + 192) + 40LL) + 120LL);
  v3_.v7 = 1;
  game_facility_SceneManager_CreateMap(GameData_21f4000, (__int64)v3_.v3);
  result = (__int64)v3_.v4;
  v3_.v3[0] = &game_facility_SceneManager_IMapArgs_vtable;
  if (v3_.v4 == &v3_.v3[2]) {
    v2 = 32;
  }
  else {
    if (v3_.v4 == nullptr) {
      return result;
    }
    v2 = 40;
  }
  return (*(__int64 (**)(_QWORD*))(*v3_.v4 + v2))(v3_.v4);
}

void ProcJobIntroScene_Unknown2(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  struct {
    _WORD v3[8];
    __int64 v4;
  } v3_;

  v1 = ***(_QWORD***)(*(_QWORD*)(a1 + 40) + 40LL);
  v3_.v3[0] = 0;
  ForceContinueBGMBinder_1487e00(*(_QWORD*)(v1 + 120), (__int64)v3_.v3, 0);
  if ((v3_.v3[0] & 1) != 0 && v3_.v4 != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v3_.v4);
  }
}

__int64 ProcJobIntroScene_Unknown4(__int64 a1)
{
  __int64 result;
  __int64 v2;
  struct {
    _QWORD v3[6];
    _QWORD* v4;
    __int64 v5;
    __int64 v6;
    char v7;
  } v3_;

  v3_.v4 = nullptr;
  v3_.v5 = 0;
  v3_.v3[0] = game_facility_SceneManager_BattleFieldArgs_vtable;
  memset(&v3_.v3[1], 0, 40);
  v3_.v6 = *(_QWORD*)(***(_QWORD***)(*(_QWORD*)(a1 + 40) + 40LL) + 120LL);
  v3_.v7 = 1;
  game_facility_SceneManager_CreateMap(GameData_21f4000, (__int64)v3_.v3);
  result = (__int64)v3_.v4;
  v3_.v3[0] = &game_facility_SceneManager_IMapArgs_vtable;
  if (v3_.v4 == &v3_.v3[2]) {
    v2 = 32;
  }
  else {
    if (v3_.v4 == nullptr) {
      return result;
    }
    v2 = 40;
  }
  return (*(__int64 (**)(_QWORD*))(*v3_.v4 + v2))(v3_.v4);
}

#pragma GCC visibility pop
