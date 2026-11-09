#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_66cc20(_QWORD, _QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD);
extern __int64 GameData_212dbb8[9];
__int64 HubInitNatives_ff5d00(__int64 result);
__int64 HubInitNatives_ff5f00(__int64 result, _QWORD* a2, unsigned __int8* a3);

__int64 HubInitNatives_ff5d00(__int64 result)
{
  char* v1;
  char* v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  bool v19;
  unsigned __int64 v20;
  char* v21;
  unsigned __int64 v22;

  v1 = *(char**)(result + 8);
  v2 = *(char**)(result + 16);
  v3 = result;
  if (v2 - v1 == 24) {
    result += 32;
    if ((char*)(v3 + 32) != v1) {
      v4 = (unsigned __int8)*v1;
      if ((*(_BYTE*)result & 1) == 0) {
        if ((v4 & 1) == 0) {
        LABEL_5:
          v5 = *(_QWORD*)v1;
          v6 = *((_QWORD*)v1 + 1);
          v7 = *((_QWORD*)v1 + 2);
        LABEL_6:
          *(_QWORD*)(result + 8) = v6;
          *(_QWORD*)(result + 16) = v7;
          *(_QWORD*)result = v5;
          return result;
        }
        goto LABEL_32;
      }
    LABEL_34:
      v19 = (v4 & 1) == 0;
      v20 = v4 >> 1;
      if (v19) {
        v21 = v1 + 1;
      }
      else {
        v21 = *((char**)v1 + 2);
      }
      if (v19) {
        v22 = v20;
      }
      else {
        v22 = *((_QWORD*)v1 + 1);
      }
      return SpineModel_64dde0(result, v21, v22);
    }
  }
  else if (0xAAAAAAAAAAAAAAABLL * ((v2 - v1) >> 3) < 2) {
    if ((*(_BYTE*)(result + 32) & 1) != 0) {
      **(_BYTE**)(result + 48) = 0;
      *(_QWORD*)(result + 40) = 0;
    }
    else {
      *(_WORD*)(result + 32) = 0;
    }
  }
  else if (v1 == v2) {
  LABEL_29:
    result = v3 + 32;
    if ((char*)(v3 + 32) != v1) {
      v4 = (unsigned __int8)*v1;
      if ((*(_BYTE*)result & 1) == 0) {
        if ((v4 & 1) == 0) {
          goto LABEL_5;
        }
      LABEL_32:
        v18 = *((_QWORD*)v1 + 1);
        v17 = *((_QWORD*)v1 + 2);
        return GameRoutine_64df20(result, v17, v18);
      }
      goto LABEL_34;
    }
  }
  else {
    v8 = *(char**)(result + 8);
    v9 = *(unsigned __int8*)(*(_QWORD*)GameData_212dbb8[0] + 88LL);
    if ((v9 & 1) != 0) {
      v10 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 96LL);
    }
    else {
      v10 = v9 >> 1;
    }
    if ((v9 & 1) != 0) {
      v11 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 104LL);
    }
    else {
      v11 = *(_QWORD*)GameData_212dbb8[0] + 89LL;
    }
    while (1) {
      v12 = (unsigned __int8)*v8;
      v13 = *((_QWORD*)v8 + 1);
      v14 = v12 >> 1;
      if ((v12 & 1) != 0) {
        v14 = *((_QWORD*)v8 + 1);
      }
      if (v10 == v14) {
        v15 = *((_QWORD*)v8 + 2);
        v16 = (v12 & 1) != 0 ? *((char**)v8 + 2) : v8 + 1;
        if ((unsigned int)memcmp(v11, v16) == 0) {
          break;
        }
      }
      v8 += 24;
      if (v8 == v2) {
        goto LABEL_29;
      }
    }
    result = v3 + 32;
    if (v8 != (char*)(v3 + 32)) {
      if ((*(_BYTE*)result & 1) == 0) {
        if ((v12 & 1) == 0) {
          v5 = *(_QWORD*)v8;
          v6 = *((_QWORD*)v8 + 1);
          v7 = *((_QWORD*)v8 + 2);
          goto LABEL_6;
        }
        v17 = v15;
        v18 = v13;
        return GameRoutine_64df20(result, v17, v18);
      }
      v21 = v16;
      v22 = v10;
      return SpineModel_64dde0(result, v21, v22);
    }
  }
  return result;
}

__int64 HubInitNatives_ff5f00(__int64 result, _QWORD* a2, unsigned __int8* a3)
{
  __int64 v3;
  __int64 v4;
  unsigned __int8* v5;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int8* v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  unsigned __int64 v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int8* v22;
  __int64 v23;
  __int64 v24;
  char* v25;

  v3 = *(_QWORD*)(result + 8);
  v4 = *(_QWORD*)(result + 16);
  if (v3 != v4) {
    v5 = a3 + 1;
    v25 = (char*)a2 + 1;
    do {
      v9 = *(unsigned __int8*)(v3 + 56);
      if ((v9 & 1) != 0) {
        v10 = *(_QWORD*)(v3 + 64);
      }
      else {
        v10 = v9 >> 1;
      }
      v11 = *a3;
      v12 = *((_QWORD*)a3 + 1);
      if ((v11 & 1) == 0) {
        v12 = v11 >> 1;
      }
      if (v10 == v12) {
        v13 = (v9 & 1) != 0 ? *(_QWORD*)(v3 + 72) : v3 + 57;
        v14 = (v11 & 1) != 0 ? *((unsigned __int8**)a3 + 2) : v5;
        result = memcmp(v13, v14);
        if ((_DWORD)result == 0) {
          v15 = *(unsigned __int8**)(v3 + 8);
          v16 = *(unsigned __int8**)(v3 + 16);
          *(_DWORD*)v3 = 1;
          *(_BYTE*)(v3 + 4) = 1;
          if (v15 == v16) {
            goto LABEL_36;
          }
          v17 = *(unsigned __int8*)a2;
          v18 = (v17 & 1) != 0 ? a2[1] : v17 >> 1;
          v19 = (v17 & 1) != 0 ? (char*)a2[2] : v25;
          while (1) {
            v20 = *v15;
            v21 = *((_QWORD*)v15 + 1);
            if ((v20 & 1) == 0) {
              v21 = v20 >> 1;
            }
            if (v21 == v18) {
              v22 = (v20 & 1) != 0 ? *((unsigned __int8**)v15 + 2) : v15 + 1;
              if ((unsigned int)memcmp(v22, v19) == 0) {
                break;
              }
            }
            v15 += 24;
            if (v15 == v16) {
              goto LABEL_36;
            }
          }
          if (v15 == v16) {
          LABEL_36:
            if ((unsigned __int64)v16 >= *(_QWORD*)(v3 + 24)) {
              v8 = GameRoutine_66cc20(v3 + 8, a2);
            }
            else if ((*(_BYTE*)a2 & 1) != 0) {
              fw_text_String_CopyTerminated(v16, a2[2], a2[1]);
              v8 = (__int64)(v16 + 24);
            }
            else {
              v23 = *a2;
              v24 = a2[2];
              v8 = (__int64)(v16 + 24);
              *((_QWORD*)v16 + 1) = a2[1];
              *((_QWORD*)v16 + 2) = v24;
              *(_QWORD*)v16 = v23;
            }
            *(_QWORD*)(v3 + 16) = v8;
          }
          result = HubInitNatives_ff5d00(v3);
        }
      }
      v3 += 80;
    } while (v3 != v4);
  }
  return result;
}

#pragma GCC visibility pop
