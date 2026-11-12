#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN NgxData_2b70a50;

extern __int64 (*NgxData_2b70a58)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD);

extern __int64 (*NgxData_2b70a60)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD, _QWORD);

extern __int64 (*NgxData_2b70a68)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD, _QWORD, _QWORD, _QWORD);

extern __int64 (*NgxData_2b70a70)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD, _QWORD, _QWORD, _QWORD);

extern __int64 (*NgxData_2b70a78)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD);

extern _UNKNOWN* NgxData_2b70a80;

extern __int64 (*NgxData_2b70a88)(_QWORD, _QWORD);

extern _UNKNOWN* NgxData_2b70a90;

extern _UNKNOWN* NgxData_2b70a98;

extern _UNKNOWN* NgxData_2b70aa0;

extern _UNKNOWN* NgxData_2b70aa8;

extern _UNKNOWN* NgxData_2b70ab0;

extern _UNKNOWN* NgxData_2b70ab8;

extern _UNKNOWN* NgxData_2b70ac0;

extern __int64 NgxData_2b70ac8;

extern _UNKNOWN* NgxData_2b70ad0;

extern _UNKNOWN* NgxData_2b70ad8;

extern _UNKNOWN* NgxData_2b70ae0;

extern _UNKNOWN* NgxData_2b70ae8;

extern __int64 NgxData_2b70af0;

extern __int64 NgxData_2b70af8;

__int64 NgxRoutine_e2db0(_QWORD);

__int64 NgxRoutine_e2de0(_QWORD);

__int64 NgxHr_b2dd0()
{
  __int64 v0;
  unsigned int v1;
  int v4;

  v0 = NgxRoutine_e2db0(&NgxData_2b70a50);
  v4 = 0;
  if (NgxData_2b70a80 != nullptr) {
    v1 = ((__int64 (*)(__int64))NgxData_2b70a80)(v0);
    if (v1 != 1) {
      goto LABEL_11;
    }
  LABEL_9:
    v1 = 1;
    NgxData_2b70a58 = nullptr;
    NgxData_2b70a60 = nullptr;
    NgxData_2b70a68 = nullptr;
    NgxData_2b70a70 = nullptr;
    NgxData_2b70a78 = nullptr;
    NgxData_2b70a80 = nullptr;
    NgxData_2b70a88 = nullptr;
    NgxData_2b70a90 = nullptr;
    NgxData_2b70a98 = nullptr;
    NgxData_2b70aa0 = nullptr;
    NgxData_2b70aa8 = nullptr;
    NgxData_2b70ab0 = nullptr;
    NgxData_2b70ab8 = nullptr;
    NgxData_2b70ac0 = nullptr;
    NgxData_2b70ac8 = 0;
    NgxData_2b70ad0 = nullptr;
    NgxData_2b70ad8 = nullptr;
    NgxData_2b70ae0 = nullptr;
    NgxData_2b70ae8 = nullptr;
    NgxData_2b70af0 = 0;
    NgxData_2b70af8 = 0;
    goto LABEL_11;
  }
  if (NgxData_2b70a88 == nullptr) {
    v1 = -1160773625;
    goto LABEL_11;
  }
  v1 = NgxData_2b70a88(0, &v4);
  if (v1 == 1 && v4 == 0) {
    goto LABEL_9;
  }
LABEL_11:
  NgxRoutine_e2de0(&NgxData_2b70a50);
  return v1;
}

#pragma GCC visibility pop
