#include "nn/fontll/itype/fs_api.h"

#define NEGINFINITY ((FS_LONG)0x80000001)
#define POSINFINITY ((FS_LONG)0x7fffffff)

FS_FIXED FracSqrt(FS_FIXED xf) {
  if (xf < 0) {
    return NEGINFINITY;
  }
  if (xf == 0) {
    return 0;
  }

  FS_ULONG x = xf;
  FS_ULONG b = 0;
  if (x >= 0x40000000) {
    x -= 0x40000000;
    b = 0x40000000;
  }

  for (FS_ULONG c = 0x10000000; c != 0; c >>= 1) {
    FS_ULONG d = b + c;
    if (x >= d) {
      x -= d;
      b += c << 1;
    }
    x <<= 1;
  }

  if (x > b) {
    x -= b;
    x <<= 1;
    x -= 1;
    b += 1;
  }
  else {
    x <<= 1;
  }
  if (x > b) {
    b += 1;
  }
  return b;
}

FS_FIXED FixSqrt(FS_FIXED x) {
  if (x < 0) {
    return NEGINFINITY;
  }
  if (x == 0) {
    return 0;
  }

  int shift = 7;
  while (((FS_ULONG)x >> 29) == 0) {
    x <<= 2;
    ++shift;
  }
  return (FS_ULONG)(FracSqrt(x) + (1 << (shift - 1))) >> shift;
}

FS_ULONG norm(FS_LONG x, FS_LONG y) {
  FS_ULONG ax = x < 0 ? -x : x;
  FS_ULONG ay = y < 0 ? -y : y;
  if (ax > ay) {
    return ax + ay / 3;
  }
  return ay + ax / 3;
}

FS_LONG vardiv_64(FS_LONG a, FS_LONG b, FS_LONG shift) {
  if (b == 0) {
    return a < 0 ? -POSINFINITY : POSINFINITY;
  }
  if (a == 0) {
    return 0;
  }

  FS_LONG sign = a ^ b;
  if (a < 0) {
    a = -a;
  }
  if (b < 0) {
    b = -b;
  }

  FS_LONG quotient;
  if (a < (1 << (30 - shift))) {
    quotient = ((a << shift) + (b >> 1)) / b;
  }
  else {
    int64_t wide = (((int64_t)a << shift) + (b >> 1)) / b;
    quotient = wide < POSINFINITY ? (FS_LONG)wide : POSINFINITY;
  }
  return sign < 0 ? -quotient : quotient;
}

FS_LONG muldiv_64(FS_LONG a, FS_LONG b, FS_LONG c) {
  if (a == 0 || b == 0) {
    return 0;
  }

  FS_LONG sign = a ^ b ^ c;
  if (c == 0) {
    return sign < 0 ? -POSINFINITY : POSINFINITY;
  }

  FS_ULONG ua = a < 0 ? -a : a;
  FS_ULONG ub = b < 0 ? -b : b;
  FS_ULONG uc = c < 0 ? -c : c;

  FS_ULONG quotient;
  if (ua <= 46339 && ub <= 46339 && uc <= 176095) {
    quotient = (ua * ub + (uc >> 1)) / uc;
  }
  else {
    uint64_t wide = ((uint64_t)ua * ub + (uc >> 1)) / uc;
    quotient = wide < POSINFINITY ? (FS_ULONG)wide : POSINFINITY;
  }
  return sign < 0 ? -(FS_LONG)quotient : (FS_LONG)quotient;
}

FS_LONG varmul_64(FS_LONG a, FS_LONG b, FS_LONG shift) {
  if (a == 0 || b == 0) {
    return 0;
  }

  FS_LONG sign = a ^ b;
  FS_ULONG ua = a < 0 ? -a : a;
  FS_ULONG ub = b < 0 ? -b : b;
  FS_LONG round = 1 << (shift - 1);

  FS_LONG product;
  if (ua <= 46339 && ub <= 46339) {
    product = (FS_LONG)(ua * ub + round) >> shift;
  }
  else {
    int64_t wide = (int64_t)((uint64_t)ua * ub + round) >> shift;
    product = wide < POSINFINITY ? (FS_LONG)wide : POSINFINITY;
  }
  return sign < 0 ? -product : product;
}
