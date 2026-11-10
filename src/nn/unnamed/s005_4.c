#include "decomp/pseudo_types.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_87cdc0(_QWORD, _QWORD);

__int64 SdkRoutine_87cfb0(_QWORD, _QWORD, _QWORD);

__int64 SdkHr_7f53c0(_QWORD* a1, __int64 a2, int a3)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;

  v4 = a1 + 2;
  v5 = a3 | 8u;
  if ((*(_BYTE*)a2 & 1) != 0) {
    v6 = *(_QWORD*)(a2 + 16);
  }
  else {
    v6 = a2 + 1;
  }
  v7 = SdkRoutine_87cfb0(v4, v6, v5);
  v8 = (char*)a1 + *(_QWORD*)(*a1 - 24LL);
  if (v7 != 0) {
    v9 = 0;
  }
  else {
    v9 = *((_DWORD*)v8 + 8) | 4u;
  }
  return SdkRoutine_87cdc0(v8, v9);
}

__int64 SdkHr_7f5430(_QWORD* a1, __int64 a2, int a3)
{
  __int64 v4;
  char* v5;
  __int64 v6;

  v4 = SdkRoutine_87cfb0(a1 + 1, a2, a3 | 0x10u);
  v5 = (char*)a1 + *(_QWORD*)(*a1 - 24LL);
  if (v4 != 0) {
    v6 = 0;
  }
  else {
    v6 = *((_DWORD*)v5 + 8) | 4u;
  }
  return SdkRoutine_87cdc0(v5, v6);
}

__int64 SdkHr_7f5490(_QWORD* a1, __int64 a2, int a3)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;

  v4 = a1 + 1;
  v5 = a3 | 0x10u;
  if ((*(_BYTE*)a2 & 1) != 0) {
    v6 = *(_QWORD*)(a2 + 16);
  }
  else {
    v6 = a2 + 1;
  }
  v7 = SdkRoutine_87cfb0(v4, v6, v5);
  v8 = (char*)a1 + *(_QWORD*)(*a1 - 24LL);
  if (v7 != 0) {
    v9 = 0;
  }
  else {
    v9 = *((_DWORD*)v8 + 8) | 4u;
  }
  return SdkRoutine_87cdc0(v8, v9);
}

#pragma GCC visibility pop
