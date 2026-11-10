#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool gfxa_TaskCharaTransparent_Impl_draw_lambda0_Invoke(__int64 a1, __int64 a2);
bool gfxa_TaskCharaTransparent_Impl_draw_lambda1_Invoke(__int64 a1, __int64 a2);

bool gfxa_TaskCharaTransparent_Impl_draw_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 v2;
  char* v3;
  char* v4;
  int v5;
  unsigned __int64 v6;
  __int64 v7;
  int v8;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(char**)(v2 + 32);
  v4 = *(char**)(v2 + 40);
  if (v3 == v4) {
    return false;
  }
  v5 = *(_DWORD*)(a2 + 12);
  v6 = v4 - v3 - 4;
  if ((~(_BYTE)v6 & 0xC) != 0) {
    v7 = ((unsigned __int8)((unsigned int)v6 >> 2) + 1) & 3;
    do {
      v8 = *(_DWORD*)v3;
      v3 += 4;
      if (v8 == v5) {
        return (*(_DWORD*)(a2 + 16) & 4) != 0;
      }
    } while (--v7 != 0);
  }
  if (v6 < 0xC) {
    return false;
  }
  while (*(_DWORD*)v3 != v5 && *((_DWORD*)v3 + 1) != v5 &&
         *((_DWORD*)v3 + 2) != v5 && *((_DWORD*)v3 + 3) != v5) {
    v3 += 16;
    if (v3 == v4) {
      return false;
    }
  }
  return (*(_DWORD*)(a2 + 16) & 4) != 0;
}

bool gfxa_TaskCharaTransparent_Impl_draw_lambda1_Invoke(__int64 a1, __int64 a2)
{
  __int64 v2;
  char* v3;
  char* v4;
  int v5;
  unsigned __int64 v6;
  __int64 v7;
  int v8;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(char**)(v2 + 8);
  v4 = *(char**)(v2 + 16);
  if (v3 == v4) {
    return false;
  }
  v5 = *(_DWORD*)(a2 + 12);
  v6 = v4 - v3 - 4;
  if ((~(_BYTE)v6 & 0xC) != 0) {
    v7 = ((unsigned __int8)((unsigned int)v6 >> 2) + 1) & 3;
    do {
      v8 = *(_DWORD*)v3;
      v3 += 4;
      if (v8 == v5) {
        return (*(_DWORD*)(a2 + 16) & 4) != 0;
      }
    } while (--v7 != 0);
  }
  if (v6 < 0xC) {
    return false;
  }
  while (*(_DWORD*)v3 != v5 && *((_DWORD*)v3 + 1) != v5 &&
         *((_DWORD*)v3 + 2) != v5 && *((_DWORD*)v3 + 3) != v5) {
    v3 += 16;
    if (v3 == v4) {
      return false;
    }
  }
  return (*(_DWORD*)(a2 + 16) & 4) != 0;
}

#pragma GCC visibility pop
