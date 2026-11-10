#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nandroid_RefBase_weakref_type_decWeak_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_weakref_type_incWeak_plt(_QWORD, _QWORD);
void nandroid_SortedVector_do_construct(__int64 a1, _QWORD* a2,
                                        unsigned __int64 a3);
__int64 nandroid_SortedVector_do_destroy(__int64 a1, __int64 a2, __int64 a3);
void nandroid_SortedVector_do_copy(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4);
void nandroid_SortedVector_do_splat_4de780(__int64 a1, __int64 a2, __int64 a3,
                                           __int64 a4);
void nandroid_SortedVector_do_move_forward(__int64 a1, __int64 a2, __int64 a3,
                                           __int64 a4);
void nandroid_SortedVector_do_move_backward(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4);
__int64 nandroid_SortedVector_do_compare(__int64 a1, _DWORD* a2, _DWORD* a3);

void nandroid_SortedVector_do_construct(__int64 a1, _QWORD* a2,
                                        unsigned __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;

  if (a3 != 0) {
    v3 = a3 & 7;
    if ((a3 & 7) != 0) {
      v4 = a3 & 0xFFFFFFFFFFFFFFF8LL;
      do {
        a2[1] = 0;
        a2[2] = 0;
        a2 += 3;
        --v3;
      } while (v3 != 0);
      if (a3 < 8) {
        return;
      }
    }
    else {
      v4 = a3;
      if (a3 < 8) {
        return;
      }
    }
    v5 = a2 + 13;
    do {
      *(v5 - 12) = 0;
      *(v5 - 11) = 0;
      *(v5 - 9) = 0;
      *(v5 - 8) = 0;
      v4 -= 8LL;
      *(v5 - 6) = 0;
      *(v5 - 5) = 0;
      *(v5 - 3) = 0;
      *(v5 - 2) = 0;
      *v5 = 0;
      v5[1] = 0;
      v5[3] = 0;
      v5[4] = 0;
      v5[6] = 0;
      v5[7] = 0;
      v5[9] = 0;
      v5[10] = 0;
      v5 += 24;
    } while (v4 != 0);
  }
}

__int64 nandroid_SortedVector_do_destroy(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 i;
  __int64 result;

  if (a3 != 0) {
    v3 = (_QWORD*)(a2 + 8);
    for (i = a3; i != 0; --i) {
      if (*v3 != 0) {
        result = nandroid_RefBase_weakref_type_decWeak_plt(v3[1], v3);
      }
      v3 += 3;
    }
  }
  return result;
}

void nandroid_SortedVector_do_copy(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4)
{
  _QWORD* v4;
  __int64 i;
  __int64 v7;
  __int64 v8;

  if (a4 != 0) {
    v4 = (_QWORD*)(a2 + 8);
    for (i = a4; i != 0; --i) {
      *((_DWORD*)v4 - 2) = *(_DWORD*)a3;
      v7 = *(_QWORD*)(a3 + 8);
      *v4 = v7;
      v8 = *(_QWORD*)(a3 + 16);
      v4[1] = v8;
      if (v7 != 0) {
        nandroid_RefBase_weakref_type_incWeak_plt(v8, v4);
      }
      a3 += 24;
      v4 += 3;
    }
  }
}

void nandroid_SortedVector_do_splat_4de780(__int64 a1, __int64 a2, __int64 a3,
                                           __int64 a4)
{
  _QWORD* v4;
  __int64 i;
  __int64 v7;
  __int64 v8;

  if (a4 != 0) {
    v4 = (_QWORD*)(a2 + 8);
    for (i = a4; i != 0; --i) {
      *((_DWORD*)v4 - 2) = *(_DWORD*)a3;
      v7 = *(_QWORD*)(a3 + 8);
      *v4 = v7;
      v8 = *(_QWORD*)(a3 + 16);
      v4[1] = v8;
      if (v7 != 0) {
        nandroid_RefBase_weakref_type_incWeak_plt(v8, v4);
      }
      v4 += 3;
    }
  }
}

void nandroid_SortedVector_do_move_forward(__int64 a1, __int64 a2, __int64 a3,
                                           __int64 a4)
{
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if (a4 != 0) {
    v4 = a4;
    v7 = 24 * a4;
    do {
      v8 = a2 + v7;
      *(_DWORD*)(v8 - 24) = *(_DWORD*)(a3 + v7 - 24);
      v9 = *(_QWORD*)(a3 + v7 - 16);
      *(_QWORD*)(v8 - 16) = v9;
      v10 = *(_QWORD*)(a3 + v7 - 8);
      *(_QWORD*)(a2 + v7 - 8) = v10;
      if (v9 != 0) {
        nandroid_RefBase_weakref_type_incWeak_plt(v10, a2 + v7 - 16);
      }
      if (*(_QWORD*)(a3 + v7 - 16) != 0) {
        nandroid_RefBase_weakref_type_decWeak_plt(*(_QWORD*)(a3 + v7 - 8),
                                                  a3 + v7 - 16);
      }
      --v4;
      a3 -= 24;
      a2 -= 24;
    } while (v4 != 0);
  }
}

void nandroid_SortedVector_do_move_backward(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4)
{
  _QWORD* v4;
  _QWORD* v5;
  __int64 i;
  __int64 v7;
  __int64 v8;

  if (a4 != 0) {
    v4 = (_QWORD*)(a2 + 8);
    v5 = (_QWORD*)(a3 + 8);
    for (i = a4; i != 0; --i) {
      *((_DWORD*)v4 - 2) = *((_DWORD*)v5 - 2);
      v7 = *v5;
      *v4 = *v5;
      v8 = v5[1];
      v4[1] = v8;
      if (v7 != 0) {
        nandroid_RefBase_weakref_type_incWeak_plt(v8, v4);
      }
      if (*v5 != 0) {
        nandroid_RefBase_weakref_type_decWeak_plt(v5[1], v5);
      }
      v4 += 3;
      v5 += 3;
    }
  }
}

__int64 nandroid_SortedVector_do_compare(__int64 a1, _DWORD* a2, _DWORD* a3)
{
  if ((signed __int32)*a2 < (signed __int32)*a3) {
    return 0xFFFFFFFFLL;
  }
  else {
    return (signed __int32)*a2 > (signed __int32)*a3;
  }
}

#pragma GCC visibility pop
