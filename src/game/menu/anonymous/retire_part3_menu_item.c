#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_156e270(void);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64
RetirePart3MenuItem_Unknown77_alt1() __asm__("RetirePart3MenuItem_Unknown77");
__int64 GameRoutine_156e270_alt1() __asm__("GameRoutine_156e270");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
char* RetirePart3MenuItem_Unknown77();

char* RetirePart3MenuItem_Unknown77()
{
  if ((GameRoutine_156e270_alt1() & 1) != 0) {
    return nullptr;
  }
  else {
    return GameRoutine_a4dbe0_alt1(
        *msg_MessageManager_instance__ptr[0],
        "MID_Restart_ReturnObelisk_Part3_Chapter1_Annotation", 0);
  }
}

#pragma GCC visibility pop
