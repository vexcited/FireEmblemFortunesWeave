#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_oe_SetCpuBoostMode(_QWORD);
__int64 nn_os_ClearEvent(_QWORD);
__int64 nn_os_SignalEvent(_QWORD);
extern __int64 GameData_212c638;
extern __int64 snd_g_fileIndex;
extern char GameData_21c9699;
__int64 ProcInst_Destructor();
__int64 ProcInst_DeletingDestructor();

__int64 ProcInst_Destructor()
{
  __int64 result;
  __int64 v1;

  if ((GameData_21c9699 & 1) == 0) {
    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                              GameData_212c638 +
                                                          32LL) -
                                               8LL) +
                                    40LL) +
                         16LL) +
              48LL) = 0;
    result = nn_oe_SetCpuBoostMode(1);
    v1 = snd_g_fileIndex;
    if (*(_DWORD*)(snd_g_fileIndex + 4736) != 1 &&
        (*(_BYTE*)(snd_g_fileIndex + 4742) & 1) == 0) {
      *(_DWORD*)(snd_g_fileIndex + 4736) = 1;
      result = nn_os_SignalEvent(v1 + 4144);
    }
    GameData_21c9699 = 1;
  }
  return result;
}

__int64 ProcInst_DeletingDestructor()
{
  __int64 result;
  __int64 v1;

  if (GameData_21c9699 == 1) {
    result = nn_oe_SetCpuBoostMode(0);
    v1 = snd_g_fileIndex;
    if (*(_DWORD*)(snd_g_fileIndex + 4736) != 0) {
      *(_DWORD*)(snd_g_fileIndex + 4736) = 0;
      result = nn_os_ClearEvent(v1 + 4144);
    }
    GameData_21c9699 = 0;
    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                              GameData_212c638 +
                                                          32LL) -
                                               8LL) +
                                    40LL) +
                         16LL) +
              48LL) = 1;
  }
  return result;
}

#pragma GCC visibility pop
