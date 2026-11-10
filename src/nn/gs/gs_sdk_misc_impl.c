#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_4772e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 gs_sdk_misc_476f10(__int64* a1, unsigned __int64* a2, unsigned int a3);

__int64 gs_sdk_misc_476f10(__int64* a1, unsigned __int64* a2, unsigned int a3)
{
  unsigned __int64 v3;
  int v4;
  unsigned int v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int8 v18;
  unsigned __int8 v19;
  unsigned __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  _QWORD v31[2];
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  char v38[8];
  __int64 v39;

  v3 = *a2;
  v4 = (unsigned __int8)*a2;
  if (v4 == 1) {
    v14 = 0;
    v15 = 0;
    v16 = 0;
  LABEL_7:
    *a1 = v16;
    a1[1] = v15;
    a1[2] = v14;
    return 0;
  }
  v5 = 65779;
  if (v4 != 2) {
    return v5;
  }
  v6 = a2[5];
  v7 = a2[6];
  v8 = a2[3];
  v34 = a2[4];
  v35 = v6;
  v9 = a2[7];
  v36 = v7;
  v37 = v9;
  v10 = a2[1];
  v11 = a2[2];
  v31[0] = v3;
  v31[1] = v10;
  v32 = v11;
  v33 = v8;
  if (a3 == 0) {
    v14 = 0;
    v16 = (unsigned __int8)v32;
    v18 = v34;
    v17 = v35;
    v19 = v36;
    v20 = (unsigned __int8)v37;
    if ((_BYTE)v32 == 0) {
      goto LABEL_15;
    }
  LABEL_9:
    if ((_DWORD)v16 == 8) {
      if ((unsigned __int8)v33 > 5uLL) {
        return 65779;
      }
      v23 = ((8LL << v33) + HIWORD(v3)) & -(8LL << v33);
      if (v23 == 0) {
        return 65779;
      }
      if (HIDWORD(v33) != 0) {
        v21 = (v23 * ((v33 >> 26) & 0x3FFFFFFFC0LL) + 1023) &
              0x7FFFFFFFFFFFFC00LL;
      }
      else {
        v21 = 0;
      }
    }
    else {
      if ((_DWORD)v16 != 1) {
        return 65779;
      }
      if (HIDWORD(v33) != 0) {
        v21 = (HIDWORD(v33) + HIDWORD(v33) * HIWORD(v3) + 1023) &
              0x3FFFFFFFFFC00LL;
      }
      else {
        v21 = 0;
      }
    }
    v16 = v14;
    v22 = v18;
    if (v18 == 0) {
      goto LABEL_16;
    }
    goto LABEL_23;
  }
  v12 = a1;
  v39 = 0;
  v5 = SdkRoutine_4772e0(&v39, v38, v31, a3);
  if (v5 != 0) {
    return v5;
  }
  v14 = v39;
  a1 = v12;
  v16 = (unsigned __int8)v32;
  v18 = v34;
  v17 = v35;
  v19 = v36;
  v20 = (unsigned __int8)v37;
  if ((_BYTE)v32 != 0) {
    goto LABEL_9;
  }
LABEL_15:
  v21 = v16;
  v22 = v18;
  if (v18 == 0) {
  LABEL_16:
    v15 = v18;
    goto LABEL_34;
  }
LABEL_23:
  if (v22 == 1) {
    v26 = HIDWORD(v17);
    v25 = (v26 + (unsigned int)v26 * HIWORD(v3) + 1023) & 0x3FFFFFFFFFC00LL;
    if (v26 == 0) {
      v25 = 0;
    }
  }
  else {
    if (v22 != 8) {
      return 65779;
    }
    if ((unsigned __int8)v17 > 5uLL) {
      return 65779;
    }
    v24 = ((8LL << v17) + HIWORD(v3)) & -(8LL << v17);
    if (v24 == 0) {
      return 65779;
    }
    if (HIDWORD(v17) != 0) {
      v25 =
          (v24 * ((v17 >> 26) & 0x3FFFFFFFC0LL) + 1023) & 0x7FFFFFFFFFFFFC00LL;
    }
    else {
      v25 = 0;
    }
  }
  v27 = (v21 + 1023) & 0x7FFFFFFFFFFFFC00LL;
  v15 = v27 + v14;
  v21 = v25 + v27;
LABEL_34:
  if (v19 == 0) {
    v14 = v19;
    goto LABEL_7;
  }
  if (v19 == 1) {
    if (v21 != 0) {
      v14 += (v21 + 1023) & 0xFFFFFFFFFFFFFC00LL;
    }
    goto LABEL_7;
  }
  if (v19 == 8 && v20 <= 5) {
    v28 = 8LL << v20;
    v29 = v28 + HIWORD(v3);
    v30 = v28 - 1;
    v5 = 65779;
    if (v29 <= v30) {
      return v5;
    }
    if (v21 != 0) {
      v14 += (v21 + 1023) & 0xFFFFFFFFFFFFFC00LL;
    }
    goto LABEL_7;
  }
  return 65779;
}

#pragma GCC visibility pop
