#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Seq_114da80(_QWORD, _QWORD, _QWORD, float, float, float, float, float,
                    float, long double);
__int64 Seq_114dda0(_QWORD, _QWORD, _QWORD, float, float, long double);
extern __int64* GameData_212d460[6];
extern __int64* GameData_212fc38[2];
extern __int64 game_ProcGameSkipView_instance_;
float powf(long double, float);
float strtof(_QWORD, _QWORD);
__int64 game_evt_demo_115d330(__int64 a1, long double a2, double a3, double a4,
                              double a5, double a6, double a7, long double a8);
__int64 game_evt_demo_115de00(__int64 a1, long double a2, double a3,
                              long double a4);

__int64 game_evt_demo_115d330(__int64 a1, long double a2, double a3, double a4,
                              double a5, double a6, double a7, long double a8)
{
  int v9;
  int v10;
  unsigned __int8* v11;
  float v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  float v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int8* v20;
  unsigned __int8* v21;
  unsigned __int8* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int8* v25;
  unsigned __int8* v26;
  unsigned __int8* v27;
  float v28;
  float v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  float v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  float v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  float v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  __int128 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  float v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  float v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  float v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  int v74;
  float v75;
  unsigned int v76;
  __int128 v77;
  __int128 v78;
  __int128 v79;
  _BYTE* v80;

  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v9 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v10 = (v9 & 8) != 0 ? 2 : 3;
    if ((v10 & v9) == 0) {
      return 0;
    }
  }
  v11 = *(unsigned __int8**)(a1 + 120);
  v12 = 1.0;
  v13 = *v11;
  v14 = *((_QWORD*)v11 + 1);
  if ((v13 & 1) == 0) {
    v14 = v13 >> 1;
  }
  if (v14 != 0) {
    v15 = *((unsigned __int8**)v11 + 2);
    v80 = nullptr;
    if ((v13 & 1) != 0) {
      v16 = v15;
    }
    else {
      v16 = v11 + 1;
    }
    v17 = strtof(v16, &v80);
    if (*v80 != 0) {
      if (*v80 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v80) != 0) {
          v17 = 1.0;
        }
      }
      else {
        v17 = 1.0;
      }
    }
    v11 = *(unsigned __int8**)(a1 + 120);
  }
  else {
    v17 = 1.0;
  }
  v18 = v11[24];
  v19 = *((_QWORD*)v11 + 4);
  if ((v18 & 1) == 0) {
    v19 = v18 >> 1;
  }
  if (v19 != 0) {
    v20 = *((unsigned __int8**)v11 + 5);
    v21 = v11 + 25;
    v80 = nullptr;
    if ((v18 & 1) != 0) {
      v22 = v20;
    }
    else {
      v22 = v21;
    }
    v12 = strtof(v22, &v80);
    if (*v80 != 0) {
      if (*v80 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v80) != 0) {
          v12 = 1.0;
        }
      }
      else {
        v12 = 1.0;
      }
    }
    v11 = *(unsigned __int8**)(a1 + 120);
  }
  v23 = v11[48];
  v24 = *((_QWORD*)v11 + 7);
  if ((v23 & 1) == 0) {
    v24 = v23 >> 1;
  }
  if (v24 != 0) {
    v25 = *((unsigned __int8**)v11 + 8);
    v26 = v11 + 49;
    v80 = nullptr;
    if ((v23 & 1) != 0) {
      v27 = v25;
    }
    else {
      v27 = v26;
    }
    v28 = strtof(v27, &v80);
    if (*v80 == 0) {
      goto LABEL_48;
    }
    if (*v80 == 102) {
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v80) != 0) {
        v28 = 1.0;
      }
      goto LABEL_48;
    }
  }
  v28 = 1.0;
LABEL_48:
  if (v17 <= 0x1.4b5dcc0000000p-5) {
    *(float*)&a2 = v17 / 0x1.9d70a40000000p+3;
  }
  else {
    *(float*)&a2 = (float)(v17 + 0x1.c28f5c0000000p-5) / 0x1.0e147a0000000p+0;
    *(float*)&a2 = powf(a2, 0x1.3333340000000p+1);
  }
  v76 = LODWORD(a2);
  if (v12 <= 0x1.4b5dcc0000000p-5) {
    *(float*)&a2 = v12 / 0x1.9d70a40000000p+3;
  }
  else {
    *(float*)&a2 = (float)(v12 + 0x1.c28f5c0000000p-5) / 0x1.0e147a0000000p+0;
    *(float*)&a2 = powf(a2, 0x1.3333340000000p+1);
  }
  v74 = LODWORD(a2);
  if (v28 <= 0x1.4b5dcc0000000p-5) {
    v29 = v28 / 0x1.9d70a40000000p+3;
  }
  else {
    *(float*)&a2 = (float)(v28 + 0x1.c28f5c0000000p-5) / 0x1.0e147a0000000p+0;
    v29 = powf(a2, 0x1.3333340000000p+1);
  }
  v30 = *(_QWORD*)(a1 + 120);
  v75 = v29;
  v31 = *(unsigned __int8*)(v30 + 72);
  v32 = *(_QWORD*)(v30 + 80);
  if ((v31 & 1) == 0) {
    v32 = v31 >> 1;
  }
  if (v32 != 0) {
    v33 = *(_QWORD*)(v30 + 88);
    v34 = v30 + 73;
    v80 = nullptr;
    if ((v31 & 1) != 0) {
      v35 = v33;
    }
    else {
      v35 = v34;
    }
    v36 = strtof(v35, &v80);
    if (*v80 != 0) {
      if (*v80 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v80) != 0) {
          v36 = 0.0;
        }
      }
      else {
        v36 = 0.0;
      }
    }
    v30 = *(_QWORD*)(a1 + 120);
  }
  else {
    v36 = 0.0;
  }
  v37 = *(unsigned __int8*)(v30 + 96);
  v38 = *(_QWORD*)(v30 + 104);
  v39 = 0.5;
  if ((v37 & 1) == 0) {
    v38 = v37 >> 1;
  }
  if (v38 != 0) {
    v40 = *(_QWORD*)(v30 + 112);
    v41 = v30 + 97;
    v80 = nullptr;
    if ((v37 & 1) != 0) {
      v42 = v40;
    }
    else {
      v42 = v41;
    }
    v43 = strtof(v42, &v80);
    if (*v80 != 0) {
      if (*v80 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v80) != 0) {
          v43 = 0.5;
        }
      }
      else {
        v43 = 0.5;
      }
    }
    v30 = *(_QWORD*)(a1 + 120);
  }
  else {
    v43 = 0.5;
  }
  v44 = *(unsigned __int8*)(v30 + 120);
  v45 = *(_QWORD*)(v30 + 128);
  if ((v44 & 1) == 0) {
    v45 = v44 >> 1;
  }
  if (v45 != 0) {
    v46 = *(_QWORD*)(v30 + 136);
    v47 = v30 + 121;
    v80 = nullptr;
    if ((v44 & 1) != 0) {
      v48 = v46;
    }
    else {
      v48 = v47;
    }
    v39 = strtof(v48, &v80);
    if (*v80 != 0) {
      if (*v80 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v80) != 0) {
          v39 = 0.5;
        }
      }
      else {
        v39 = 0.5;
      }
    }
    v30 = *(_QWORD*)(a1 + 120);
  }
  v49 = *(unsigned __int8*)(v30 + 144);
  v50 = *(_QWORD*)(v30 + 152);
  *((_QWORD*)&v51 + 1) = 0;
  if ((v49 & 1) == 0) {
    v50 = v49 >> 1;
  }
  if (v50 != 0) {
    v52 = *(_QWORD*)(v30 + 160);
    v53 = v30 + 145;
    v80 = nullptr;
    if ((v49 & 1) != 0) {
      v54 = v52;
    }
    else {
      v54 = v53;
    }
    v55 = strtof(v54, &v80);
    if (*v80 != 0) {
      if (*v80 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v80) != 0) {
          v55 = 0.5;
        }
      }
      else {
        v55 = 0.5;
      }
    }
    *((_QWORD*)&v51 + 1) = 0;
    v30 = *(_QWORD*)(a1 + 120);
  }
  else {
    v55 = 0.5;
  }
  v56 = *(unsigned __int8*)(v30 + 168);
  v57 = *(_QWORD*)(v30 + 176);
  LODWORD(v51) = v76;
  if ((v56 & 1) == 0) {
    v57 = v56 >> 1;
  }
  if (v57 != 0) {
    v58 = *(_QWORD*)(v30 + 184);
    v59 = v30 + 169;
    v80 = nullptr;
    if ((v56 & 1) != 0) {
      v60 = v58;
    }
    else {
      v60 = v59;
    }
    v61 = strtof(v60, &v80);
    if (*v80 != 0) {
      if (*v80 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v80) != 0) {
          v61 = 0x1.99999a0000000p-3;
        }
      }
      else {
        v61 = 0x1.99999a0000000p-3;
      }
    }
    v51 = v76;
    v30 = *(_QWORD*)(a1 + 120);
  }
  else {
    v61 = 0x1.99999a0000000p-3;
  }
  v62 = *(unsigned __int8*)(v30 + 192);
  v63 = *(_QWORD*)(v30 + 200);
  DWORD1(v51) = v74;
  if ((v62 & 1) == 0) {
    v63 = v62 >> 1;
  }
  if (v63 != 0) {
    v64 = *(_QWORD*)(v30 + 208);
    v65 = v30 + 193;
    v77 = v51;
    v80 = nullptr;
    if ((v62 & 1) != 0) {
      v66 = v64;
    }
    else {
      v66 = v65;
    }
    v67 = strtof(v66, &v80);
    if (*v80 != 0) {
      if (*v80 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v80) != 0) {
          v67 = 0x1.6800000000000p+6;
        }
      }
      else {
        v67 = 0x1.6800000000000p+6;
      }
    }
    v51 = v77;
    v30 = *(_QWORD*)(a1 + 120);
  }
  else {
    v67 = 0x1.6800000000000p+6;
  }
  v68 = *(unsigned __int8*)(v30 + 216);
  v69 = *(_QWORD*)(v30 + 224);
  *((float*)&v51 + 2) = v75;
  if ((v68 & 1) == 0) {
    v69 = v68 >> 1;
  }
  if (v69 != 0) {
    v70 = *(_QWORD*)(v30 + 232);
    v71 = v30 + 217;
    v78 = v51;
    v80 = nullptr;
    if ((v68 & 1) != 0) {
      v72 = v70;
    }
    else {
      v72 = v71;
    }
    LODWORD(a8) = COERCE_UNSIGNED_INT(strtof(v72, &v80));
    if (*v80 != 0) {
      if (*v80 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v80) != 0) {
          *(float*)&a8 = 0.0;
        }
      }
      else {
        *(_QWORD*)&a8 = 0;
      }
    }
    v51 = v78;
  }
  else {
    *(_QWORD*)&a8 = 0;
  }
  v79 = v51;
  Seq_114da80(*GameData_212fc38[0], 1, &v79, v36, v43, v39, v55, v61, v67, a8);
  return 0;
}

__int64 game_evt_demo_115de00(__int64 a1, long double a2, double a3,
                              long double a4)
{
  int v5;
  int v6;
  unsigned __int8* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int8* v10;
  unsigned __int8* v11;
  float v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  unsigned __int8* v17;
  float v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  float v21;
  unsigned __int8* v22;
  unsigned __int8* v23;
  unsigned __int8* v24;
  float v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int8* v28;
  unsigned __int8* v29;
  unsigned __int8* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int8* v33;
  unsigned __int8* v34;
  unsigned __int8* v35;
  float v36;
  float v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int128 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  long double v46;
  int v47;
  __int128 v48;
  __int128 v49;
  _BYTE* v50;

  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v6 = (v5 & 8) != 0 ? 2 : 3;
    if ((v6 & v5) == 0) {
      return 0;
    }
  }
  v7 = *(unsigned __int8**)(a1 + 120);
  v8 = *v7;
  v9 = *((_QWORD*)v7 + 1);
  if ((v8 & 1) == 0) {
    v9 = v8 >> 1;
  }
  if (v9 != 0) {
    v10 = *((unsigned __int8**)v7 + 2);
    v50 = nullptr;
    if ((v8 & 1) != 0) {
      v11 = v10;
    }
    else {
      v11 = v7 + 1;
    }
    v12 = strtof(v11, &v50);
    if (*v50 != 0) {
      if (*v50 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v50) != 0) {
          v12 = 10.0;
        }
      }
      else {
        v12 = 10.0;
      }
    }
    v7 = *(unsigned __int8**)(a1 + 120);
  }
  else {
    v12 = 10.0;
  }
  v13 = v7[24];
  v14 = *((_QWORD*)v7 + 4);
  if ((v13 & 1) == 0) {
    v14 = v13 >> 1;
  }
  if (v14 != 0) {
    v15 = *((unsigned __int8**)v7 + 5);
    v16 = v7 + 25;
    v50 = nullptr;
    if ((v13 & 1) != 0) {
      v17 = v15;
    }
    else {
      v17 = v16;
    }
    v18 = strtof(v17, &v50);
    if (*v50 != 0) {
      if (*v50 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v50) != 0) {
          v18 = 0x1.f400000000000p+9;
        }
      }
      else {
        v18 = 0x1.f400000000000p+9;
      }
    }
    v7 = *(unsigned __int8**)(a1 + 120);
  }
  else {
    v18 = 0x1.f400000000000p+9;
  }
  v19 = v7[48];
  v20 = *((_QWORD*)v7 + 7);
  v21 = 1.0;
  if ((v19 & 1) == 0) {
    v20 = v19 >> 1;
  }
  if (v20 != 0) {
    v22 = *((unsigned __int8**)v7 + 8);
    v23 = v7 + 49;
    v50 = nullptr;
    if ((v19 & 1) != 0) {
      v24 = v22;
    }
    else {
      v24 = v23;
    }
    v25 = strtof(v24, &v50);
    if (*v50 != 0) {
      if (*v50 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v50) != 0) {
          v25 = 1.0;
        }
      }
      else {
        v25 = 1.0;
      }
    }
    v7 = *(unsigned __int8**)(a1 + 120);
  }
  else {
    v25 = 1.0;
  }
  v26 = v7[72];
  v27 = *((_QWORD*)v7 + 10);
  if ((v26 & 1) == 0) {
    v27 = v26 >> 1;
  }
  if (v27 != 0) {
    v28 = *((unsigned __int8**)v7 + 11);
    v29 = v7 + 73;
    v50 = nullptr;
    if ((v26 & 1) != 0) {
      v30 = v28;
    }
    else {
      v30 = v29;
    }
    v21 = strtof(v30, &v50);
    if (*v50 != 0) {
      if (*v50 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v50) != 0) {
          v21 = 1.0;
        }
      }
      else {
        v21 = 1.0;
      }
    }
    v7 = *(unsigned __int8**)(a1 + 120);
  }
  v31 = v7[96];
  v32 = *((_QWORD*)v7 + 13);
  if ((v31 & 1) == 0) {
    v32 = v31 >> 1;
  }
  if (v32 != 0) {
    v33 = *((unsigned __int8**)v7 + 14);
    v34 = v7 + 97;
    v50 = nullptr;
    if ((v31 & 1) != 0) {
      v35 = v33;
    }
    else {
      v35 = v34;
    }
    v36 = strtof(v35, &v50);
    if (*v50 == 0) {
      goto LABEL_76;
    }
    if (*v50 == 102) {
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v50) != 0) {
        v36 = 1.0;
      }
      goto LABEL_76;
    }
  }
  v36 = 1.0;
LABEL_76:
  if (v25 <= 0x1.4b5dcc0000000p-5) {
    *(float*)&a2 = v25 / 0x1.9d70a40000000p+3;
  }
  else {
    *(float*)&a2 = (float)(v25 + 0x1.c28f5c0000000p-5) / 0x1.0e147a0000000p+0;
    *(float*)&a2 = powf(a2, 0x1.3333340000000p+1);
  }
  v47 = LODWORD(a2);
  if (v21 <= 0x1.4b5dcc0000000p-5) {
    *(float*)&a4 = v21 / 0x1.9d70a40000000p+3;
  }
  else {
    *(float*)&a2 = (float)(v21 + 0x1.c28f5c0000000p-5) / 0x1.0e147a0000000p+0;
    LODWORD(a4) = COERCE_UNSIGNED_INT(powf(a2, 0x1.3333340000000p+1));
  }
  if (v36 <= 0x1.4b5dcc0000000p-5) {
    v37 = v36 / 0x1.9d70a40000000p+3;
  }
  else {
    v46 = a4;
    *(float*)&a2 = (float)(v36 + 0x1.c28f5c0000000p-5) / 0x1.0e147a0000000p+0;
    v37 = powf(a2, 0x1.3333340000000p+1);
    a4 = v46;
  }
  DWORD3(v41) = 0;
  v38 = *(_QWORD*)(a1 + 120);
  v39 = *(unsigned __int8*)(v38 + 120);
  v40 = *(_QWORD*)(v38 + 128);
  LODWORD(v41) = v47;
  if ((v39 & 1) == 0) {
    v40 = v39 >> 1;
  }
  DWORD1(v41) = LODWORD(a4);
  *((float*)&v41 + 2) = v37;
  if (v40 != 0) {
    v42 = *(_QWORD*)(v38 + 136);
    v43 = v38 + 121;
    v48 = v41;
    v50 = nullptr;
    if ((v39 & 1) != 0) {
      v44 = v42;
    }
    else {
      v44 = v43;
    }
    LODWORD(a4) = COERCE_UNSIGNED_INT(strtof(v44, &v50));
    if (*v50 != 0) {
      if (*v50 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v50) != 0) {
          *(float*)&a4 = 0.0;
        }
      }
      else {
        *(_QWORD*)&a4 = 0;
      }
    }
    v41 = v48;
  }
  else {
    *(_QWORD*)&a4 = 0;
  }
  v49 = v41;
  Seq_114dda0(*GameData_212fc38[0], 1, &v49, v12, v18, a4);
  return 0;
}

#pragma GCC visibility pop
