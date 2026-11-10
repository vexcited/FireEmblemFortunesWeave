#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nandroid_RefBase_decStrong_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_incStrong_plt(_QWORD, _QWORD);
__int64 nandroid_SortedVectorImpl_add_plt(_QWORD, _QWORD);
__int64 nandroid_String8_Destroy_String8_plt(_QWORD);
__int64 nandroid_String8_String8_plt_86d8a0(_QWORD, _QWORD);
__int64 nandroid_sp_report_race_plt(_QWORD);
_QWORD* sp_4ce1f0(_QWORD** a1, _QWORD* a2);
_QWORD* sp_4cf090(_QWORD** a1, _QWORD* a2);
__int64 HTTPDownloader_56c020(__int64 a1, __int64 a2, __int64 a3);

_QWORD* sp_4ce1f0(_QWORD** a1, _QWORD* a2)
{
  _QWORD* v2;
  _QWORD* v4;

  v2 = *a1;
  v4 = a1;
  if (a2 != nullptr) {
    a1 = (_QWORD**)nandroid_RefBase_incStrong_plt(
        (char*)a2 + *(_QWORD*)(*a2 - 24LL), a1);
  }
  if (v2 != nullptr) {
    a1 = (_QWORD**)nandroid_RefBase_decStrong_plt(
        (char*)v2 + *(_QWORD*)(*v2 - 24LL), v4);
  }
  if (v2 != (_QWORD*)*v4) {
    nandroid_sp_report_race_plt(a1);
  }
  *v4 = a2;
  return v4;
}

_QWORD* sp_4cf090(_QWORD** a1, _QWORD* a2)
{
  _QWORD* v2;
  _QWORD* v4;

  v2 = *a1;
  v4 = a1;
  if (*a1 != nullptr) {
    a1 = (_QWORD**)nandroid_RefBase_decStrong_plt(
        (char*)v2 + *(_QWORD*)(*v2 - 24LL), a1);
  }
  if (v2 != (_QWORD*)*v4) {
    nandroid_sp_report_race_plt(a1);
  }
  *v4 = *a2;
  *a2 = 0;
  return v4;
}

__int64 HTTPDownloader_56c020(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5;
  __int64 v7;
  __int64 v8;

  nandroid_String8_String8_plt_86d8a0(&v7, a2);
  nandroid_String8_String8_plt_86d8a0(&v8, a3);
  v5 = nandroid_SortedVectorImpl_add_plt(a1, &v7);
  nandroid_String8_Destroy_String8_plt(&v8);
  nandroid_String8_Destroy_String8_plt(&v7);
  return v5;
}

#pragma GCC visibility pop
