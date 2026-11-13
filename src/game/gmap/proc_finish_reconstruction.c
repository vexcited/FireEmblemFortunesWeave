#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64* GameData_212d728[2];
__int64 ProcFinishReconstruction_1525390();
__int64 game_gmap_ProcFinishReconstruction_SetCursorAtPlayer_closure_Invoke(
    __int64 a1, __int64* a2);
__int64 GameRoutine_1317f10(float32x4_t*, float32x4_t*);
__int64 TroopMgr_1345be0();
__int64 game_gmap_SpotMgr_EachSpotAttachment(char, __int64);
extern __int64 (*GameData_204a9c0[])();
extern __int64* GameData_212d708;
float32x4_t* game_gmap_ProcFinishReconstruction_SetCursorAtPlayer();

float32x4_t* game_gmap_ProcFinishReconstruction_SetCursorAtPlayer()
{

#pragma clang fp contract(off)
  float32x4_t* result;
  __int64 v1;
  struct {
    _QWORD v2[4];
    float32x4_t* v3;
    char gap40_[36];
    char v4;
  } v2_;

  v2_.v4 = 0;
  v2_.v2[0] = GameData_204a9c0;
  v2_.v2[1] = &v2_.v4;
  v2_.v3 = (float32x4_t*)v2_.v2;
  game_gmap_SpotMgr_EachSpotAttachment(5, (__int64)v2_.v2);
  result = v2_.v3;
  if (v2_.v3 == (float32x4_t*)v2_.v2) {
    v1 = 32;
  }
  else {
    if (v2_.v3 == nullptr) {
      goto LABEL_6;
    }
    v1 = 40;
  }
  result = (float32x4_t*)(*(__int64 (**)(void*))(
      LANES128(*(v2_.v3)).n128_u64[0] + v1))((void*)v2_.v3);
LABEL_6:
  if ((v2_.v4 & 1) == 0) {
    result = (float32x4_t*)TroopMgr_1345be0();
    if (result != nullptr) {
      return (float32x4_t*)GameRoutine_1317f10(
          *(float32x4_t**)(*GameData_212d708 + 16), result + 3);
    }
  }
  return result;
}

__int64 ProcFinishReconstruction_1525390()
{
  __int64 v0;
  __int64 result;

  v0 = *(_QWORD*)(*GameData_212d728[0] + 8);
  LayoutAccessor_155e830(*(_QWORD*)(v0 + 16), 1);
  result = game_hub_ProgressEventView_instance_;
  if (game_hub_ProgressEventView_instance_ != 0) {
    result = GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
  }
  *(_DWORD*)(v0 + 5856) |= 0x10000u;
  return result;
}

__int64

game_gmap_ProcFinishReconstruction_SetCursorAtPlayer_closure_Invoke(__int64 a1,
                                                                    __int64* a2)
{
  __int64 v2;
  __int64 result;

  v2 = *a2;
  if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(*a2 + 280) + 24LL))(
          *(_QWORD*)(*a2 + 280)) == 1) {
    (*(void (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 112LL))(
        *(_QWORD*)(v2 + 280));
  }
  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 48LL))(
      *(_QWORD*)(v2 + 280));
  if ((result & 1) != 0) {
    **(_BYTE**)(a1 + 8) = 1;
  }
  return result;
}

#pragma GCC visibility pop
