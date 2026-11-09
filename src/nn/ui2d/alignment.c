#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_56ba40(_QWORD, _QWORD);
__int64 GameRoutine_56c520(_QWORD, _QWORD);
__int64 GameRoutine_58c830(void);
__int64 GameRoutine_58c910(void);
__int64 GameRoutine_58d880(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_58e740(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Pane_58f7c0(_QWORD, _QWORD, _QWORD);
__int64 Pane_590310(_QWORD);
extern __int64 (*nn_ui2d_Alignment_vtable[])();
extern __int64* GameData_2136058[3];
extern __int64* GameData_2136060[2];
float Alignment_56b590(__int64 a1, __int64 a2);
__int64 Alignment_56b600(__int64 result);
float Alignment_56b610(__int64 a1, __int64 a2);
__int64 Alignment_Unknown26(__int64 a1, __int64 a2, __int64 a3, char a4);
__int64 Alignment_56b780(__int64 result);
__int64 Alignment_56c260(__int64 result);
__int64 Alignment_56c0c0(__int64 result);
__int64 Alignment_56cbc0(__int64 result);

float Alignment_56b590(__int64 a1, __int64 a2)
{
  float result;
  char v5;

  GameRoutine_58c910();
  *(_QWORD*)a1 = GameData_2136058[0] + 2;
  *(_DWORD*)(a1 + 212) = *(_DWORD*)(a2 + 84);
  result = *(float*)(a2 + 88);
  *(float*)(a1 + 216) = result;
  v5 = *(_BYTE*)(a2 + 92);
  *(_BYTE*)(a1 + 221) = 0;
  *(_BYTE*)(a1 + 220) = v5;
  *(_BYTE*)(a1 + 221) = (2 * (*(_BYTE*)(a2 + 93) & 1)) | 1;
  return result;
}

__int64 Alignment_56b600(__int64 result)
{
  *(_BYTE*)(result + 221) |= 1u;
  return result;
}

float Alignment_56b610(__int64 a1, __int64 a2)
{
  float result;

  GameRoutine_58c830();
  *(_QWORD*)a1 = GameData_2136060[0] + 2;
  *(_QWORD*)(a1 + 32) = a1 + 32;
  *(_QWORD*)(a1 + 40) = a1 + 32;
  GameRoutine_58d880(a1, a2, 0, 0, 0);
  *(_QWORD*)a1 = nn_ui2d_Alignment_vtable;
  *(_DWORD*)(a1 + 212) = *(_DWORD*)(a2 + 212);
  result = *(float*)(a2 + 216);
  *(float*)(a1 + 216) = result;
  *(_BYTE*)(a1 + 220) = *(_BYTE*)(a2 + 220);
  *(_BYTE*)(a1 + 221) = *(_BYTE*)(a2 + 221);
  return result;
}

__int64 Alignment_Unknown26(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7;
  unsigned int v8;

  if ((*(_BYTE*)(a1 + 221) & 1) != 0) {
    v7 = a3;
    *(_BYTE*)(a1 + 221) &= ~1u;
    Pane_58f7c0(a1, a3, 1);
    v8 = *(_DWORD*)(a1 + 212);
    if ((*(_BYTE*)(a1 + 221) & 2) != 0) {
      if (v8 > 1) {
        Alignment_56cbc0(a1);
      }
      else {
        Alignment_56c260(a1);
      }
    }
    else if (v8 > 1) {
      Alignment_56c0c0(a1);
    }
    else {
      Alignment_56b780(a1);
    }
    a3 = v7;
  }
  GameRoutine_58e740(a1, a2, a3, a4 & 1);
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 248LL))(a1, a2);
}

__int64 Alignment_56b780(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  float v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  float v10;
  bool v11;
  float v12;
  float v13;
  float v14;
  float v15;
  _QWORD* v16;
  int v17;
  float v18;
  int v19;
  float v20;
  float v21;
  char v22;
  float v23;
  int v24;
  float v25;
  float v26;
  float v27;
  int v28;
  float v29;
  char v30;
  float v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  v1 = *(_QWORD*)(result + 40);
  v2 = (_QWORD*)(result + 32);
  v3 = result;
  if (v1 == result + 32) {
    v4 = 0.0;
    v6 = 0;
    v7 = 0;
    goto LABEL_34;
  }
  v4 = 0.0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = *(_QWORD*)(result + 40);
  if (*(_DWORD*)(result + 212) == 1) {
    v9 = 0.0;
  }
  else {
    v9 = *(float*)(result + 80) * -0.5;
  }
  do {
    v33 = 0;
    v34 = 0;
    v32 = 0;
    result = GameRoutine_56ba40(v8 - 8, &v32);
    if ((result & 1) == 0) {
      goto LABEL_15;
    }
    if (*(_BYTE*)(v3 + 220) == 1) {
      v16 = *(_QWORD**)(v3 + 40);
      if (v16 != v2) {
        v17 = *(_DWORD*)(v3 + 212);
        if (v17 != 2) {
          if (v17 == 1) {
            if ((_QWORD*)v8 == v16) {
            LABEL_5:
              LODWORD(v32) = 0;
              LODWORD(v33) = 0;
              goto LABEL_6;
            }
          }
          else if (v17 != 0) {
            goto LABEL_6;
          }
          v16 = (_QWORD*)*v2;
        }
        if ((_QWORD*)v8 != v16) {
          goto LABEL_6;
        }
        goto LABEL_5;
      }
    }
  LABEL_6:
    v10 = *(float*)&v32;
    v11 = (v5 & 1) == 0;
    v12 = *(float*)&v33;
    v7 = v34;
    v5 = 1;
    if (v11) {
      v6 = v34;
    }
    v13 = v9 + *((float*)&v32 + 1);
    v14 = v4 - *((float*)&v32 + 1);
    v15 = *(float*)&v32 + *((float*)&v32 + 1);
    *(_BYTE*)(v8 + 80) |= 0x10u;
    if (v11) {
      v13 = v9;
    }
    if (!v11) {
      v14 = v4;
    }
    v4 = v14 + v15;
    v9 = v13 + v10;
    *(float*)(v8 + 40) = (float)(v13 + (float)(v10 * 0.5)) - v12;
  LABEL_15:
    v8 = *(_QWORD*)(v8 + 8);
  } while ((_QWORD*)v8 != v2);
  if (*(_DWORD*)(v3 + 212) == 1) {
    do {
      if ((*(_BYTE*)(v1 + 80) & 1) != 0) {
        result = Pane_590310(v1 - 8);
        if ((result & 1) == 0) {
          v18 = *(float*)(v1 + 40) - (float)(v4 * 0.5);
          *(_BYTE*)(v1 + 80) |= 0x10u;
          *(float*)(v1 + 40) = v18;
        }
      }
      v1 = *(_QWORD*)(v1 + 8);
    } while ((_QWORD*)v1 != v2);
  }

LABEL_34:
  if (*(_BYTE*)(v3 + 220) != 1) {
    return result;
  }
  v19 = *(_DWORD*)(v3 + 212);
  if (v19 != 1) {
    if (v19 == 0) {
      v20 = *(float*)(v3 + 80);
      v21 = *(float*)(v7 + 48);
      *(_BYTE*)(v7 + 88) |= 0x10u;
      v22 = *(_BYTE*)(v7 + 91);
      v23 = v20 - v4;
      *(float*)(v7 + 80) = v23;
      v24 = v22 & 3;
      if (v24 == 2) {
        goto LABEL_40;
      }
      if (v24 == 0) {
        v23 = v23 * 0.5;
      LABEL_40:
        *(float*)(v7 + 48) = v21 + v23;
      }
    }
    return result;
  }
  v25 = *(float*)(v3 + 80) - v4;
  *(_BYTE*)(v7 + 88) |= 0x10u;
  v26 = v25 * 0.5;
  v27 = *(float*)(v7 + 48);
  v28 = *(_BYTE*)(v7 + 91) & 3;
  v29 = v26;
  *(float*)(v7 + 80) = v26;
  if (v28 == 2) {
  LABEL_44:
    *(float*)(v7 + 48) = v27 + v29;
  }
  else if (v28 == 0) {
    v29 = v26 * 0.5;
    goto LABEL_44;
  }
  v30 = *(_BYTE*)(v6 + 88);
  v31 = *(float*)(v6 + 48);
  *(float*)(v6 + 80) = v26;
  *(_BYTE*)(v6 + 88) = v30 | 0x10;
  if ((*(_BYTE*)(v6 + 91) & 3) != 1) {
    if ((*(_BYTE*)(v6 + 91) & 3) != 0) {
      return result;
    }
    v26 = v26 * 0.5;
  }
  *(float*)(v6 + 48) = v31 - v26;
  return result;
}

__int64 Alignment_56c0c0(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  float v4;
  char v5;
  __int64 v6;
  _QWORD* v7;
  float v8;
  float v9;
  bool v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  _QWORD* v16;
  _QWORD* v17;
  _QWORD* v18;
  int v19;
  float v20;
  float v21;
  char v22;
  float v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v1 = *(_QWORD**)(result + 40);
  v2 = (_QWORD*)(result + 32);
  v3 = result;
  if ((_QWORD*)(result + 32) != v1) {
    v4 = 0.0;
    v5 = 0;
    v6 = 0;
    v7 = (_QWORD*)(result + 32);
    v8 = *(float*)(result + 80) * 0.5;
    while (1) {
      v16 = (_QWORD*)*v7;
      v26 = 0;
      v27 = 0;
      v25 = 0;
      result = GameRoutine_56ba40(v16 - 1, (__int64)&v25);
      if ((result & 1) != 0) {
        break;
      }
    LABEL_10:
      v7 = (_QWORD*)*v7;
      if (v7 == v1) {
        goto LABEL_23;
      }
    }
    v17 = (_QWORD*)*v7;
    if (*(_BYTE*)(v3 + 220) != 1 || (v18 = *(_QWORD**)(v3 + 40)) == v2) {
    LABEL_4:
      v9 = *(float*)&v25;
      v10 = (v5 & 1) == 0;
      v11 = *(float*)&v26;
      v5 = 1;
      v6 = v27;
      v12 = v8 - *((float*)&v25 + 1);
      v13 = *(float*)&v25 * -0.5;
      v14 = v4 - *((float*)&v25 + 1);
      v15 = *((float*)&v25 + 1) + *(float*)&v25;
      *((_BYTE*)v17 + 80) |= 0x10u;
      if (v10) {
        v12 = v8;
      }
      if (!v10) {
        v14 = v4;
      }
      v4 = v14 + v15;
      v8 = v12 - v9;
      *((float*)v17 + 10) = (float)(v12 + v13) - v11;
      goto LABEL_10;
    }
    v19 = *(_DWORD*)(v3 + 212);
    if (v19 != 2) {
      if (v19 == 1) {
        if (v17 == v18) {
        LABEL_3:
          LODWORD(v25) = 0;
          LODWORD(v26) = 0;
          goto LABEL_4;
        }
      }
      else if (v19 != 0) {
        goto LABEL_4;
      }
      v18 = (_QWORD*)*v2;
    }
    if (v17 != v18) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v4 = 0.0;
  v6 = 0;

LABEL_23:
  if ((*(_BYTE*)(v3 + 220) & 1) != 0) {
    v20 = *(float*)(v3 + 80);
    v21 = *(float*)(v6 + 48);
    *(_BYTE*)(v6 + 88) |= 0x10u;
    v22 = *(_BYTE*)(v6 + 91);
    v23 = v20 - v4;
    *(float*)(v6 + 80) = v23;
    v24 = v22 & 3;
    if (v24 != 1) {
      if (v24 != 0) {
        return result;
      }
      v23 = v23 * 0.5;
    }
    *(float*)(v6 + 48) = v21 - v23;
  }
  return result;
}

__int64 Alignment_56c260(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  float v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  float v10;
  bool v11;
  float v12;
  float v13;
  float v14;
  float v15;
  _QWORD* v16;
  int v17;
  float v18;
  int v19;
  float v20;
  float v21;
  unsigned int v22;
  float v23;
  int v24;
  float v25;
  float v26;
  float v27;
  int v28;
  float v29;
  char v30;
  float v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  v1 = *(_QWORD*)(result + 40);
  v2 = (_QWORD*)(result + 32);
  v3 = result;
  if (v1 == result + 32) {
    v4 = 0.0;
    v6 = 0;
    v7 = 0;
    goto LABEL_34;
  }
  v4 = 0.0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = *(_QWORD*)(result + 40);
  if (*(_DWORD*)(result + 212) == 1) {
    v9 = 0.0;
  }
  else {
    v9 = *(float*)(result + 84) * 0.5;
  }
  do {
    v34 = 0;
    v35 = 0;
    v33 = 0;
    result = GameRoutine_56c520(v8 - 8, &v33);
    if ((result & 1) == 0) {
      goto LABEL_15;
    }
    if (*(_BYTE*)(v3 + 220) == 1) {
      v16 = *(_QWORD**)(v3 + 40);
      if (v16 != v2) {
        v17 = *(_DWORD*)(v3 + 212);
        if (v17 != 2) {
          if (v17 == 1) {
            if ((_QWORD*)v8 == v16) {
            LABEL_5:
              LODWORD(v33) = 0;
              LODWORD(v34) = 0;
              goto LABEL_6;
            }
          }
          else if (v17 != 0) {
            goto LABEL_6;
          }
          v16 = (_QWORD*)*v2;
        }
        if ((_QWORD*)v8 != v16) {
          goto LABEL_6;
        }
        goto LABEL_5;
      }
    }
  LABEL_6:
    v10 = *(float*)&v33;
    v11 = (v5 & 1) == 0;
    v12 = *(float*)&v34;
    v7 = v35;
    v5 = 1;
    if (v11) {
      v6 = v35;
    }
    v13 = v9 - *((float*)&v33 + 1);
    v14 = v4 - *((float*)&v33 + 1);
    v15 = *(float*)&v33 + *((float*)&v33 + 1);
    *(_BYTE*)(v8 + 80) |= 0x10u;
    if (v11) {
      v13 = v9;
    }
    if (!v11) {
      v14 = v4;
    }
    v4 = v14 + v15;
    v9 = v13 - v10;
    *(float*)(v8 + 44) = (float)(v13 + (float)(v10 * -0.5)) - v12;
  LABEL_15:
    v8 = *(_QWORD*)(v8 + 8);
  } while ((_QWORD*)v8 != v2);
  if (*(_DWORD*)(v3 + 212) == 1) {
    do {
      if ((*(_BYTE*)(v1 + 80) & 1) != 0) {
        result = Pane_590310(v1 - 8);
        if ((result & 1) == 0) {
          v18 = (float)(v4 * 0.5) + *(float*)(v1 + 44);
          *(_BYTE*)(v1 + 80) |= 0x10u;
          *(float*)(v1 + 44) = v18;
        }
      }
      v1 = *(_QWORD*)(v1 + 8);
    } while ((_QWORD*)v1 != v2);
  }

LABEL_34:
  if (*(_BYTE*)(v3 + 220) != 1) {
    return result;
  }
  v19 = *(_DWORD*)(v3 + 212);
  if (v19 != 1) {
    if (v19 == 0) {
      v20 = *(float*)(v3 + 84);
      v21 = *(float*)(v7 + 52);
      *(_BYTE*)(v7 + 88) |= 0x10u;
      v22 = *(unsigned __int8*)(v7 + 91);
      v23 = v20 - v4;
      *(float*)(v7 + 84) = v23;
      v24 = (v22 >> 2) & 3;
      if (v24 == 2) {
        goto LABEL_40;
      }
      if (v24 == 0) {
        v23 = v23 * 0.5;
      LABEL_40:
        *(float*)(v7 + 52) = v21 - v23;
      }
    }
    return result;
  }
  v25 = *(float*)(v3 + 84) - v4;
  *(_BYTE*)(v7 + 88) |= 0x10u;
  v26 = v25 * 0.5;
  v27 = *(float*)(v7 + 52);
  v28 = (*(unsigned __int8*)(v7 + 91) >> 2) & 3;
  v29 = v26;
  *(float*)(v7 + 84) = v26;
  if (v28 == 2) {
  LABEL_44:
    *(float*)(v7 + 52) = v27 - v29;
  }
  else if (v28 == 0) {
    v29 = v26 * 0.5;
    goto LABEL_44;
  }
  v30 = *(_BYTE*)(v6 + 88);
  v31 = *(float*)(v6 + 52);
  *(float*)(v6 + 84) = v26;
  *(_BYTE*)(v6 + 88) = v30 | 0x10;
  v32 = (*(unsigned __int8*)(v6 + 91) >> 2) & 3;
  if (v32 != 1) {
    if (v32 != 0) {
      return result;
    }
    v26 = v26 * 0.5;
  }
  *(float*)(v6 + 52) = v31 + v26;
  return result;
}

__int64 Alignment_56cbc0(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  float v4;
  char v5;
  __int64 v6;
  _QWORD* v7;
  float v8;
  float v9;
  bool v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  _QWORD* v16;
  _QWORD* v17;
  _QWORD* v18;
  int v19;
  float v20;
  float v21;
  unsigned int v22;
  float v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v1 = *(_QWORD**)(result + 40);
  v2 = (_QWORD*)(result + 32);
  v3 = result;
  if ((_QWORD*)(result + 32) != v1) {
    v4 = 0.0;
    v5 = 0;
    v6 = 0;
    v7 = (_QWORD*)(result + 32);
    v8 = *(float*)(result + 84) * -0.5;
    while (1) {
      v16 = (_QWORD*)*v7;
      v26 = 0;
      v27 = 0;
      v25 = 0;
      result = GameRoutine_56c520(v16 - 1, (__int64)&v25);
      if ((result & 1) != 0) {
        break;
      }
    LABEL_10:
      v7 = (_QWORD*)*v7;
      if (v7 == v1) {
        goto LABEL_23;
      }
    }
    v17 = (_QWORD*)*v7;
    if (*(_BYTE*)(v3 + 220) != 1 || (v18 = *(_QWORD**)(v3 + 40)) == v2) {
    LABEL_4:
      v9 = *(float*)&v25;
      v10 = (v5 & 1) == 0;
      v11 = *(float*)&v26;
      v5 = 1;
      v6 = v27;
      v12 = v8 + *((float*)&v25 + 1);
      v13 = *(float*)&v25 * 0.5;
      v14 = v4 - *((float*)&v25 + 1);
      v15 = *((float*)&v25 + 1) + *(float*)&v25;
      *((_BYTE*)v17 + 80) |= 0x10u;
      if (v10) {
        v12 = v8;
      }
      if (!v10) {
        v14 = v4;
      }
      v4 = v14 + v15;
      v8 = v9 + v12;
      *((float*)v17 + 11) = (float)(v12 + v13) - v11;
      goto LABEL_10;
    }
    v19 = *(_DWORD*)(v3 + 212);
    if (v19 != 2) {
      if (v19 == 1) {
        if (v17 == v18) {
        LABEL_3:
          LODWORD(v25) = 0;
          LODWORD(v26) = 0;
          goto LABEL_4;
        }
      }
      else if (v19 != 0) {
        goto LABEL_4;
      }
      v18 = (_QWORD*)*v2;
    }
    if (v17 != v18) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v4 = 0.0;
  v6 = 0;

LABEL_23:
  if ((*(_BYTE*)(v3 + 220) & 1) != 0) {
    v20 = *(float*)(v3 + 84);
    v21 = *(float*)(v6 + 52);
    *(_BYTE*)(v6 + 88) |= 0x10u;
    v22 = *(unsigned __int8*)(v6 + 91);
    v23 = v20 - v4;
    *(float*)(v6 + 84) = v23;
    v24 = (v22 >> 2) & 3;
    if (v24 != 1) {
      if (v24 != 0) {
        return result;
      }
      v23 = v23 * 0.5;
    }
    *(float*)(v6 + 52) = v21 + v23;
  }
  return result;
}

#pragma GCC visibility pop
