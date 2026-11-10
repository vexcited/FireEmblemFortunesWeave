#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 strverscmp(_BYTE* a1, unsigned __int8* a2);

__int64 strverscmp(_BYTE* a1, unsigned __int8* a2)
{
  int v2;
  int v3;
  __int64 v4;
  int v5;
  unsigned __int64 v6;
  int v7;
  unsigned int v8;
  int v9;
  bool v10;
  unsigned __int64 v11;
  bool v12;
  unsigned __int64 v13;
  unsigned int v14;
  char v15;

  v2 = (unsigned __int8)*a1;
  v3 = *a2;
  if (v2 == v3) {
    v4 = 1;
    v5 = 1;
    v6 = 0;
    LOBYTE(v7) = *a1;
    do {
      if ((_BYTE)v7 == 0) {
        return 0;
      }
      v8 = (unsigned __int8)(v7 - 48);
      if ((unsigned __int8)v7 == 48) {
        v9 = v5;
      }
      else {
        v9 = 0;
      }
      v10 = v8 >= 0xA;
      v3 = a2[v4];
      if (v10) {
        v5 = 1;
      }
      else {
        v5 = v9;
      }
      v7 = (unsigned __int8)a1[v4];
      if (v10) {
        v6 = v4;
      }
      ++v4;
    } while (v7 == v3);
    v11 = v4 - 1;
    v12 = v5 != 0;
    if ((unsigned int)(unsigned __int8)a1[v6] - 49 <= 8) {
      goto LABEL_17;
    }
    goto LABEL_23;
  }
  v11 = 0;
  v6 = 0;
  v12 = true;
  v7 = (unsigned __int8)*a1;
  if ((unsigned int)(v2 - 49) > 8) {
    goto LABEL_23;
  }
LABEL_17:
  if ((unsigned int)a2[v6] - 49 > 8) {
  LABEL_23:
    v10 = v6 >= v11;
    v15 = !v12;
    if (v10) {
      v15 = 1;
    }
    if ((v15 & 1) == 0 &&
        ((unsigned int)(v7 - 48) < 0xA || (unsigned __int8)(v3 - 48) <= 9u)) {
      return (unsigned __int8)(v7 - 48) -
             (unsigned int)(unsigned __int8)(v3 - 48);
    }
    return (unsigned int)(v7 - v3);
  }
  if ((unsigned int)(v7 - 48) > 9) {
    if ((unsigned int)a2[v11] - 48 < 0xA) {
      return 0xFFFFFFFFLL;
    }
  }
  else {
    do {
      if ((unsigned int)a2[v11] - 48 > 9) {
        return 1;
      }
      v13 = v11 + 1;
      v14 = (unsigned __int8)a1[++v11] - 48;
    } while (v14 < 0xA);
    if ((unsigned int)a2[v13] - 48 < 0xA) {
      return 0xFFFFFFFFLL;
    }
  }
  return (unsigned int)(v7 - v3);
}

#pragma GCC visibility pop
