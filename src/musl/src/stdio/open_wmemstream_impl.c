#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 mbsnrtowcs_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 realloc_plt(_QWORD, _QWORD);
__int64 wms_write(_QWORD* a1, __int64 a2, __int64 a3);

__int64 wms_write(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v18;

  v18 = a2;
  v3 = a1[5];
  v4 = a1[7];
  v6 = a1[18];
  if (v3 != v4) {
    a1[5] = v4;
    if (wms_write(a1, v4, v3 - v4) < (unsigned __int64)(v3 - v4)) {
      return 0;
    }
  }
  v7 = *(_QWORD*)(v6 + 16);
  v8 = *(_QWORD*)(v6 + 40);
  if (v7 + a3 >= v8) {
    v9 = (v7 + a3 + 1) | (2 * v8);
    if (v9 >> 61 != 0) {
      return 0;
    }
    v8 = v9 | 1;
    v10 = realloc_plt(*(_QWORD*)(v6 + 24), 4 * (v9 | 1));
    if (v10 == 0) {
      return 0;
    }
    v12 = *(__int64**)v6;
    *(_QWORD*)(v6 + 24) = v10;
    v13 = *(_QWORD*)(v6 + 40);
    *v12 = v10;
    memset_plt(*(__int64**)(v6 + 24), (void*)(*(_QWORD*)(v6 + 24) + 4 * v13),
               nullptr, 4 * (v8 - v13));
    v7 = *(_QWORD*)(v6 + 16);
    *(_QWORD*)(v6 + 40) = v8;
  }
  v14 =
      mbsnrtowcs_plt(*(_QWORD*)(v6 + 24) + 4 * v7, &v18, a3, v8 - v7, v6 + 48);
  if (v14 == -1) {
    return 0;
  }
  v15 = *(_QWORD*)(v6 + 32);
  v16 = *(_QWORD*)(v6 + 16) + v14;
  *(_QWORD*)(v6 + 16) = v16;
  if (v16 >= v15) {
    *(_QWORD*)(v6 + 32) = v16;
  }
  **(_QWORD**)(v6 + 8) = v16;
  return a3;
}

#pragma GCC visibility pop
