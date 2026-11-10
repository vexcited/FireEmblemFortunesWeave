#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nandroid_AString_Destroy_AString_plt(_QWORD);
__int64 nandroid_RefBase_decStrong_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_incStrong_plt(_QWORD, _QWORD);
__int64 nandroid_sp_report_race_plt(_QWORD);
__int64 AMessage_4fc490(__int64* a1, _QWORD* a2);
__int64 AMessage_4fc5c0(__int64* a1, _QWORD* a2);
__int64 AMessage_4fc6f0(__int64* a1, _QWORD* a2);
bool AMessage_4fcc60(__int64 a1, __int64* a2);
bool AMessage_4fcce0(__int64 a1, __int64* a2);
bool AMessage_4fcd60(__int64 a1, __int64* a2);

__int64 AMessage_4fc490(__int64* a1, _QWORD* a2)
{
  unsigned int v3;
  __int64 result;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;

  v3 = *((_DWORD*)a1 + 6);
  result = 0;
  v5 = v3 & 0xF;
  if (v5 <= 6) {
    if (v5 - 1 >= 6) {
      if ((v3 & 0xF) != 0) {
        return result;
      }
      v6 = *a2;
      *a1 = *a2;
      if (v6 != 0) {
      LABEL_5:
        nandroid_RefBase_incStrong_plt(v6, a1);
        v3 = *((_DWORD*)a1 + 6);
      }
    LABEL_6:
      a1[1] = 0;
      a1[2] = 0;
      *((_DWORD*)a1 + 6) = v3 & 0xFFFFFFF0 | 0xB;
      return 1;
    }
  LABEL_27:
    v3 = a1[3] & 0xFFFFFFF0;
    *((_DWORD*)a1 + 6) = v3;
    v6 = *a2;
    *a1 = *a2;
    if (v6 == 0) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if ((v3 & 0xF) > 8) {
    if (v5 != 9 && v5 != 10) {
      if (v5 == 11) {
        v7 = *a1;
        v8 = *a2;
        if (*a2 != 0) {
          result = nandroid_RefBase_incStrong_plt(*a2, a1);
        }
        if (v7 != 0) {
          result = nandroid_RefBase_decStrong_plt(v7, a1);
        }
        if (v7 != *a1) {
          nandroid_sp_report_race_plt(result);
        }
        *a1 = v8;
        return 1;
      }
      return result;
    }
    if (*a1 == 0) {
      goto LABEL_27;
    }
    v9 = a2;
    nandroid_RefBase_decStrong_plt(*a1, a1);
  LABEL_26:
    a2 = v9;
    goto LABEL_27;
  }
  if (v5 == 7) {
    v9 = a2;
    nandroid_AString_Destroy_AString_plt(a1);
    goto LABEL_26;
  }
  if (v5 == 8) {
    goto LABEL_27;
  }
  return result;
}

__int64 AMessage_4fc5c0(__int64* a1, _QWORD* a2)
{
  unsigned int v3;
  __int64 result;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;

  v3 = *((_DWORD*)a1 + 6);
  result = 0;
  v5 = v3 & 0xF;
  if (v5 <= 6) {
    if (v5 - 1 >= 6) {
      if ((v3 & 0xF) != 0) {
        return result;
      }
      v6 = *a2;
      *a1 = *a2;
      if (v6 != 0) {
      LABEL_5:
        nandroid_RefBase_incStrong_plt(v6, a1);
        v3 = *((_DWORD*)a1 + 6);
      }
    LABEL_6:
      a1[1] = 0;
      a1[2] = 0;
      *((_DWORD*)a1 + 6) = v3 & 0xFFFFFFF0 | 9;
      return 1;
    }
  LABEL_27:
    v3 = a1[3] & 0xFFFFFFF0;
    *((_DWORD*)a1 + 6) = v3;
    v6 = *a2;
    *a1 = *a2;
    if (v6 == 0) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if ((v3 & 0xF) > 8) {
    if (v5 != 11 && v5 != 10) {
      if (v5 == 9) {
        v7 = *a1;
        v8 = *a2;
        if (*a2 != 0) {
          result = nandroid_RefBase_incStrong_plt(*a2, a1);
        }
        if (v7 != 0) {
          result = nandroid_RefBase_decStrong_plt(v7, a1);
        }
        if (v7 != *a1) {
          nandroid_sp_report_race_plt(result);
        }
        *a1 = v8;
        return 1;
      }
      return result;
    }
    if (*a1 == 0) {
      goto LABEL_27;
    }
    v9 = a2;
    nandroid_RefBase_decStrong_plt(*a1, a1);
  LABEL_26:
    a2 = v9;
    goto LABEL_27;
  }
  if (v5 == 7) {
    v9 = a2;
    nandroid_AString_Destroy_AString_plt(a1);
    goto LABEL_26;
  }
  if (v5 == 8) {
    goto LABEL_27;
  }
  return result;
}

__int64 AMessage_4fc6f0(__int64* a1, _QWORD* a2)
{
  unsigned int v3;
  __int64 result;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;

  v3 = *((_DWORD*)a1 + 6);
  result = 0;
  v5 = v3 & 0xF;
  if (v5 <= 6) {
    if (v5 - 1 >= 6) {
      if ((v3 & 0xF) != 0) {
        return result;
      }
      v6 = *a2;
      *a1 = *a2;
      if (v6 != 0) {
      LABEL_5:
        nandroid_RefBase_incStrong_plt(v6, a1);
        v3 = *((_DWORD*)a1 + 6);
      }
    LABEL_6:
      a1[1] = 0;
      a1[2] = 0;
      *((_DWORD*)a1 + 6) = v3 & 0xFFFFFFF0 | 0xA;
      return 1;
    }
  LABEL_27:
    v3 = a1[3] & 0xFFFFFFF0;
    *((_DWORD*)a1 + 6) = v3;
    v6 = *a2;
    *a1 = *a2;
    if (v6 == 0) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if ((v3 & 0xF) > 8) {
    if (v5 != 9 && v5 != 11) {
      if (v5 == 10) {
        v7 = *a1;
        v8 = *a2;
        if (*a2 != 0) {
          result = nandroid_RefBase_incStrong_plt(*a2, a1);
        }
        if (v7 != 0) {
          result = nandroid_RefBase_decStrong_plt(v7, a1);
        }
        if (v7 != *a1) {
          nandroid_sp_report_race_plt(result);
        }
        *a1 = v8;
        return 1;
      }
      return result;
    }
    if (*a1 == 0) {
      goto LABEL_27;
    }
    v9 = a2;
    nandroid_RefBase_decStrong_plt(*a1, a1);
  LABEL_26:
    a2 = v9;
    goto LABEL_27;
  }
  if (v5 == 7) {
    v9 = a2;
    nandroid_AString_Destroy_AString_plt(a1);
    goto LABEL_26;
  }
  if (v5 == 8) {
    goto LABEL_27;
  }
  return result;
}

bool AMessage_4fcc60(__int64 a1, __int64* a2)
{
  int v2;
  __int64 v3;
  __int64 v4;

  v2 = *(_DWORD*)(a1 + 24) & 0xF;
  if (v2 == 11) {
    v3 = *a2;
    v4 = *(_QWORD*)a1;
    if (*(_QWORD*)a1 != 0) {
      a1 = nandroid_RefBase_incStrong_plt(*(_QWORD*)a1, a2);
    }
    if (v3 != 0) {
      a1 = nandroid_RefBase_decStrong_plt(v3, a2);
    }
    if (v3 != *a2) {
      nandroid_sp_report_race_plt(a1);
    }
    *a2 = v4;
  }
  return v2 == 11;
}

bool AMessage_4fcce0(__int64 a1, __int64* a2)
{
  int v2;
  __int64 v3;
  __int64 v4;

  v2 = *(_DWORD*)(a1 + 24) & 0xF;
  if (v2 == 9) {
    v3 = *a2;
    v4 = *(_QWORD*)a1;
    if (*(_QWORD*)a1 != 0) {
      a1 = nandroid_RefBase_incStrong_plt(*(_QWORD*)a1, a2);
    }
    if (v3 != 0) {
      a1 = nandroid_RefBase_decStrong_plt(v3, a2);
    }
    if (v3 != *a2) {
      nandroid_sp_report_race_plt(a1);
    }
    *a2 = v4;
  }
  return v2 == 9;
}

bool AMessage_4fcd60(__int64 a1, __int64* a2)
{
  int v2;
  __int64 v3;
  __int64 v4;

  v2 = *(_DWORD*)(a1 + 24) & 0xF;
  if (v2 == 10) {
    v3 = *a2;
    v4 = *(_QWORD*)a1;
    if (*(_QWORD*)a1 != 0) {
      a1 = nandroid_RefBase_incStrong_plt(*(_QWORD*)a1, a2);
    }
    if (v3 != 0) {
      a1 = nandroid_RefBase_decStrong_plt(v3, a2);
    }
    if (v3 != *a2) {
      nandroid_sp_report_race_plt(a1);
    }
    *a2 = v4;
  }
  return v2 == 10;
}

#pragma GCC visibility pop
