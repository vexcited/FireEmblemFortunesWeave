#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 movie_detail_f540(_QWORD, _QWORD, _QWORD);
__int64 strlen_plt(_QWORD);
void __attribute__((noreturn)) movie_detail_f520(_QWORD);
__int64 movie_utils_eeb0(unsigned __int8* a1, __int64 a2);

__int64 movie_utils_eeb0(unsigned __int8* a1, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  int v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int8* v22;
  __int64 v23;

  v2 = *a1;
  v3 = *((_QWORD*)a1 + 1);
  v6 = strlen_plt(a2);
  v7 = *(_QWORD*)a1;
  if ((v2 & 1) != 0) {
    v8 = v3;
  }
  else {
    v8 = v2 >> 1;
  }
  v9 = v8 + v6;
  v10 = 22;
  v11 = (v7 & 0xFFFFFFFFFFFFFFFELL) - 1;
  if ((v2 & 1) != 0) {
    v10 = (v7 & 0xFFFFFFFFFFFFFFFELL) - 1;
  }
  if (v10 >= v9) {
    goto LABEL_28;
  }
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    movie_detail_f520(v6);
  }
  v12 = 22;
  if ((v7 & 1) != 0) {
    v12 = (v7 & 0xFFFFFFFFFFFFFFFELL) - 1;
  }
  if (v9 <= v12) {
    if ((v7 & 1) == 0) {
      v11 = 22;
    }
    if (v11 >= v9) {
      goto LABEL_28;
    }
  }
  else {
    if ((v9 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v9 | 7) + 1;
    }
    if (v9 >= 0x17) {
      v14 = v13;
    }
    else {
      v14 = 23;
    }
    v15 = (*(__int64 (**)(_QWORD, __int64))(**((_QWORD**)a1 + 3) + 40LL))(
        *((_QWORD*)a1 + 3), v14);
    v16 = *a1;
    v17 = v15;
    v18 = v16 & 1;
    v19 = v16 >> 1;
    if (v18 != 0) {
      v20 = *((_QWORD*)a1 + 1);
    }
    else {
      v20 = v19;
    }
    v21 = v20 + 1;
    if (v20 != -1) {
      if (v18 != 0) {
        v22 = *((unsigned __int8**)a1 + 2);
      }
      else {
        v22 = a1 + 1;
      }
      memmove_plt(v15, v22, v21);
      v18 = *a1 & 1;
    }
    if (v18 != 0) {
      (*(void (**)(_QWORD, _QWORD, unsigned __int64))(
          **((_QWORD**)a1 + 3) + 56LL))(*((_QWORD*)a1 + 3), *((_QWORD*)a1 + 2),
                                        v21);
    }
    *((_QWORD*)a1 + 2) = v17;
    *(_QWORD*)a1 = v14 | 1;
    *((_QWORD*)a1 + 1) = v20;
    if ((v14 & 0xFFFFFFFFFFFFFFFELL) - 1 >= v9) {
    LABEL_28:
      v23 = strlen_plt(a2);
      movie_detail_f540(a1, a2, v23);
      return 0;
    }
  }
  return 17;
}

#pragma GCC visibility pop
