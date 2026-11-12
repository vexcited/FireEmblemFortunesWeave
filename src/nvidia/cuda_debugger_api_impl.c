#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_12df40(_DWORD*, void (*)(void));
__int64 CudaDriverRoutine_12e300();
__int64 CudaDriverStub_12db70(_QWORD, _QWORD);
__int64 atoi_plt(_QWORD);
extern _DWORD CudaDriverData_14328d4;
extern int CudaDriverData_1433588;
extern int CudaDriverData_14335d4;
extern void (*CudaDriverData_1421fe8[25])();
extern void (*CudaDriverData_1421ff0[24])();
extern void (*CudaDriverData_1421ff8[23])();
extern void (*CudaDriverData_1422000[22])();
extern void (*CudaDriverData_1422008[21])();
extern void (*CudaDriverData_1422010[20])();
bool cuda_debugger_api_7cff0();
__int64 cuda_debugger_api_7d040();
bool cuda_debugger_api_7d1d0();
bool cuda_debugger_api_7d1f0();
__int64 cuda_debugger_api_7d210();
bool cuda_debugger_api_7d220();
unsigned __int64 cuda_debugger_api_7d280(unsigned __int8 a1,
                                         unsigned __int16 a2, unsigned int a3,
                                         char a4);

bool cuda_debugger_api_7cff0()
{
  CudaDriverRoutine_12df40(&CudaDriverData_14328d4,
                           (void (*)(void))cuda_debugger_api_7d040);
  return *(_DWORD*)CudaDriverData_1421ff0[0] != 0 &&
         *(_DWORD*)CudaDriverData_1421ff8[0] == 0;
}

__int64 cuda_debugger_api_7d040()
{
  __int64 result;
  _QWORD v1[8];

  memset(v1, 0, sizeof(v1));
  if ((unsigned int)CudaDriverRoutine_12e300() != 0) {
    result = (unsigned int)CudaDriverData_14335d4;
    if (CudaDriverData_14335d4 == 0) {
      return result;
    }
  LABEL_5:
    if ((unsigned int)CudaDriverRoutine_12e300() != 0) {
      if ((unsigned int)CudaDriverRoutine_12e300() != 0) {
        goto LABEL_7;
      }
    }
    else {
      *(_DWORD*)CudaDriverData_1421ff0[0] = atoi_plt(v1);
      if ((unsigned int)CudaDriverRoutine_12e300() != 0) {
      LABEL_7:
        if ((unsigned int)CudaDriverRoutine_12e300() != 0) {
          goto LABEL_8;
        }
        goto LABEL_12;
      }
    }
    *(_DWORD*)CudaDriverData_1422000[0] = atoi_plt(v1);
    if ((unsigned int)CudaDriverRoutine_12e300() != 0) {
    LABEL_8:
      if ((unsigned int)CudaDriverRoutine_12e300() != 0) {
        return CudaDriverStub_12db70("CUDBG_GET_SESSION_FROM_ENV", "0");
      }
    LABEL_13:
      *(_DWORD*)CudaDriverData_1422010[0] = atoi_plt(v1);
      return CudaDriverStub_12db70("CUDBG_GET_SESSION_FROM_ENV", "0");
    }
  LABEL_12:
    *(_DWORD*)CudaDriverData_1422008[0] = atoi_plt(v1);
    if ((unsigned int)CudaDriverRoutine_12e300() != 0) {
      return CudaDriverStub_12db70("CUDBG_GET_SESSION_FROM_ENV", "0");
    }
    goto LABEL_13;
  }
  result = atoi_plt(v1);
  CudaDriverData_14335d4 = result;
  if ((_DWORD)result != 0) {
    goto LABEL_5;
  }
  return result;
}

bool cuda_debugger_api_7d1d0()
{
  return *(_DWORD*)CudaDriverData_1421ff8[0] != 0;
}

bool cuda_debugger_api_7d1f0() { return CudaDriverData_1433588 != 0; }

__int64 cuda_debugger_api_7d210()
{
  return *(unsigned int*)CudaDriverData_1422000[0];
}

bool cuda_debugger_api_7d220()
{
  return *(_DWORD*)CudaDriverData_1421fe8[0] != 0;
}

unsigned __int64 cuda_debugger_api_7d280(unsigned __int8 a1,
                                         unsigned __int16 a2, unsigned int a3,
                                         char a4)
{
  return a3 | ((unsigned __int64)(a4 & 3) << 32) |
         ((unsigned __int64)a2 << 34) | ((unsigned __int64)a1 << 50);
}

#pragma GCC visibility pop
