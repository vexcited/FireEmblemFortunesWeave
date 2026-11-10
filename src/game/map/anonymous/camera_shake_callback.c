#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21cd140;
extern __int64 GameData_22400f8;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
void Camera_7c0000(__int64, char);
void CameraShakeCallback_Destructor();

void CameraShakeCallback_Destructor()
{

#pragma clang fp contract(off)
  int v0;
  int v1;
  unsigned __int64 v2;
  __int128 v3;

  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v0 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v1 = 2)
           : (v1 = 3),
       (v1 & v0) != 0)) {
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_14;
    }
    v2 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v2 + 172) == *(float*)(v2 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v2 + 160) + 16LL))(v2 + 160);
    }
    else {
      v3 = *(_OWORD*)(v2 + 208);
    }
    if (*((float*)&v3 + 3) != 0x1.0000000000000p+0f ||
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v2 + 160) + 16LL))(
                        v2 + 160, *((float*)&v3 + 3)))
                .n128_f32[3] != 0x1.0000000000000p+0f) {
    LABEL_14:
      if ((GameData_22400f8 == 0 || *(_BYTE*)(GameData_22400f8 + 8) != 2) &&
          GameData_21cd140 != 0) {
        Camera_7c0000(GameData_21cd140, 0);
      }
    }
  }
}

#pragma GCC visibility pop
