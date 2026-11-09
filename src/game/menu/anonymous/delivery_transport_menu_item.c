#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_menu_GameMenuItem_PlayCursorAnimation(void);
__int64 game_menu_GameMenuItem_PlayIdleAnimation(void);
__int64 DeliveryTransportMenuItem_Unknown63(_BYTE* a1);
__int64 DeliveryTransportMenuItem_Unknown64(_BYTE* a1);

__int64 DeliveryTransportMenuItem_Unknown63(_BYTE* a1)
{
  if (a1[96] == 1) {
    return (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 520LL))(a1);
  }
  else {
    return game_menu_GameMenuItem_PlayIdleAnimation();
  }
}

__int64 DeliveryTransportMenuItem_Unknown64(_BYTE* a1)
{
  if (a1[96] == 1) {
    return (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 520LL))(a1);
  }
  else {
    return game_menu_GameMenuItem_PlayCursorAnimation();
  }
}

#pragma GCC visibility pop
