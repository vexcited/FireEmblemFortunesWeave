#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

unsigned __int64 nnmem_nlib_memchr_not_generic(unsigned __int64 result, int a2,
                                               __int64 a3);

unsigned __int64 nnmem_nlib_memchr_not_generic(unsigned __int64 result, int a2,
                                               __int64 a3)
{
  unsigned __int64 v3;
  int v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;

  v3 = result;
  if ((result & 3) != 0) {
    if (a3 == 0) {
      return 0;
    }
    v4 = *(unsigned __int8*)result;
    if (v4 != (unsigned __int8)a2) {
      return v3;
    }
    ++result;
    if (((v3 + 1) & 3) != 0) {
      if (a3 == 1) {
        return 0;
      }
      if (*(unsigned __int8*)result != v4) {
        return result;
      }
      result = v3 + 2;
      if (((v3 + 2) & 3) != 0) {
        if (a3 == 2) {
          return 0;
        }
        if (*(unsigned __int8*)result != v4) {
          return result;
        }
        result = v3 + 3;
      }
    }
  }
  else if (result == 0) {
    return result;
  }
  v5 = v3 + a3;
  if (result == v5) {
    return 0;
  }
  if (result != (v5 & 0xFFFFFFFFFFFFFFFCLL)) {
    while (1) {
      v6 = *(_DWORD*)result;
      if (*(_DWORD*)result != 16843009 * (unsigned __int8)a2) {
        if ((unsigned __int8)a2 != (unsigned __int8)v6) {
          return result;
        }
        if (BYTE1(v6) != (unsigned __int8)a2) {
          return ++result;
        }
        if (BYTE2(v6) != (unsigned __int8)a2) {
          result += 2LL;
          return result;
        }
        if (HIBYTE(v6) != (unsigned __int8)a2) {
          result += 3LL;
          return result;
        }
      }
      result += 4LL;
      if (result == (v5 & 0xFFFFFFFFFFFFFFFCLL)) {
        result = v5 & 0xFFFFFFFFFFFFFFFCLL;
        break;
      }
    }
  }
  v7 = v5 - result;
  if (v7 > 1) {
    if (v7 == 2) {
      if (a2 != *(unsigned __int8*)result) {
        return result;
      }
      v9 = *(unsigned __int8*)++result;
      v8 = v9;
    LABEL_31:
      if (a2 != v8) {
        return result;
      }
      return 0;
    }
    if (a2 != *(unsigned __int8*)result) {
      return result;
    }
    v3 = result + 1;
    if (a2 == *(unsigned __int8*)(result + 1)) {
      v10 = *(unsigned __int8*)(result + 2);
      result += 2LL;
      v8 = v10;
      goto LABEL_31;
    }
    return v3;
  }
  if (v7 != 0) {
    v8 = *(unsigned __int8*)result;
    goto LABEL_31;
  }
  return 0;
}

#pragma GCC visibility pop
