#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ContactReport_DeletingDestructor(__int64 a1, __int64* a2,
                                         unsigned int a3);
__int64 ContactReport_Unknown2(__int64 a1, __int64* a2, unsigned int a3);
__int64 ContactReport_Unknown3(__int64 a1, _QWORD* a2);
__int64 ContactReport_DeletingDestructor(__int64 a1, __int64* a2,
                                         unsigned int a3)
{
  __int64 i;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;

  if (a3 != 0) {
    for (i = a3; i != 0; --i) {
      v6 = *a2++;
      v5 = v6;
      if (v6 != 0) {
        v7 = *(_QWORD*)(v5 + 16);
        if (v7 != 0) {
          result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v7 + 8) + 24LL))(
              *(_QWORD*)(v7 + 8));
        }
      }
    }
  }
  return result;
}

__int64 ContactReport_Unknown2(__int64 a1, __int64* a2, unsigned int a3)
{
  __int64 i;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;

  if (a3 != 0) {
    for (i = a3; i != 0; --i) {
      v6 = *a2++;
      v5 = v6;
      if (v6 != 0) {
        v7 = *(_QWORD*)(v5 + 16);
        if (v7 != 0) {
          result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v7 + 8) + 32LL))(
              *(_QWORD*)(v7 + 8));
        }
      }
    }
  }
  return result;
}

__int64 ContactReport_Unknown3(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;

  if (*a2 != 0) {
    v3 = *(_QWORD*)(*a2 + 16LL);
    if (v3 != 0) {
      result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 8) + 56LL))(
          *(_QWORD*)(v3 + 8));
    }
  }
  v5 = a2[1];
  if (v5 != 0) {
    v6 = *(_QWORD*)(v5 + 16);
    if (v6 != 0) {
      return (*(__int64 (**)(_QWORD))(**(_QWORD**)(v6 + 8) + 56LL))(
          *(_QWORD*)(v6 + 8));
    }
  }
  return result;
}

#pragma GCC visibility pop
