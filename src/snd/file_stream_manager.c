#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64* GameData_2134520;
extern __int64* snd_g_memory_ptr[2];
_QWORD* FileStreamManager_Destructor(_QWORD* result);

_QWORD* FileStreamManager_Destructor(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v1 = result;
  v2 = result[2];
  *result = GameData_2134520 + 2;
  v4 = result + 1;
  v3 = result[1];
  v5 = snd_g_memory_ptr[0];
  if (v2 != v3) {
    v6 = 0;
    do {
      v7 = *(_QWORD*)(v3 + 8 * v6);
      if ((*(_BYTE*)v7 & 1) != 0) {
        (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v5 + 24LL))(
            *v5, *(_QWORD*)(v7 + 16));
      }
      result = (_QWORD*)(*(__int64 (**)(__int64, __int64))(*(_QWORD*)*v5 +
                                                           24LL))(*v5, v7);
      v3 = v1[1];
      ++v6;
    } while (v6 < (v1[2] - v3) >> 3);
  }
  v8 = v1[4];
  v9 = v1 + 4;
  if (v1[5] != v8) {
    v10 = 0;
    do {
      result = (_QWORD*)(*(__int64 (**)(__int64, _QWORD))(
          *(_QWORD*)*v5 + 24LL))(*v5, *(_QWORD*)(v8 + 8 * v10));
      v8 = v1[4];
      ++v10;
    } while (v10 < (v1[5] - v8) >> 3);
    v3 = *v4;
  }
  v11 = v1[3];
  v1[2] = v3;
  if (v11 != v3) {
    v4[1] = 0;
    v4[2] = 0;
    *v4 = 0;
    if (v3 != 0) {
      result = (_QWORD*)(*(__int64 (**)(__int64, __int64))(*(_QWORD*)*v5 +
                                                           24LL))(*v5, v3);
      v8 = *v9;
    }
  }
  v12 = v1[6];
  v1[5] = v8;
  if (v12 != v8) {
    v1[5] = 0;
    v1[6] = 0;
    *v9 = 0;
    if (v8 != 0) {
      result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)*v5 + 24LL))(*v5);
    }
  }
  v13 = v1[10];
  if (v13 != 0) {
    v14 = v1[11];
    v15 = v1[10];
    if (v13 != v14) {
      v16 = v1[11];
      do {
        v18 = *(_QWORD*)(v16 - 24);
        v16 -= 24;
        v17 = v18;
        if (v18 != 0) {
          *(_QWORD*)(v14 - 16) = v17;
          (*(void (**)(__int64))(*(_QWORD*)*v5 + 24LL))(*v5);
        }
        v14 = v16;
      } while (v16 != v13);
      v15 = v1[10];
    }
    v19 = *v5;
    v1[11] = v13;
    result = (_QWORD*)(*(__int64 (**)(__int64, __int64))(*(_QWORD*)v19 + 24LL))(
        v19, v15);
  }
  if (*v9 != 0) {
    v20 = *v5;
    v1[5] = *v9;
    result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v20 + 24LL))(v20);
  }
  if (*v4 != 0) {
    v21 = *v5;
    v1[2] = *v4;
    return (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v21 + 24LL))(v21);
  }
  return result;
}

#pragma GCC visibility pop
