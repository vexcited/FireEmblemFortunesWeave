#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 emit_bits(_QWORD, _QWORD, _QWORD);
__int64 emit_eobrun(_QWORD);
__int64 emit_restart_34cc0(_QWORD, _QWORD);
extern __int64 SdkData_e868f0;
__int64 jcphuff_335a0(__int64 a1, __int64 a2);
__int64 jcphuff_337a0(__int64 a1, _QWORD* a2);
__int64 jcphuff_33be0(__int64 a1, __int64 a2);
__int64 jcphuff_33ce0(__int64 a1, _QWORD* a2);

__int64 jcphuff_335a0(__int64 a1, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  bool v15;
  __int64 v16;
  int v17;
  int v18;

  v2 = *(_QWORD*)(a1 + 568);
  v3 = *(_DWORD*)(a1 + 480);
  *(_QWORD*)(v2 + 32) = **(_QWORD**)(a1 + 48);
  *(_QWORD*)(v2 + 40) = *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL);
  if (*(_DWORD*)(a1 + 324) != 0 && *(_DWORD*)(v2 + 112) == 0) {
    emit_restart_34cc0(v2, *(unsigned int*)(v2 + 116));
  }
  if (*(int*)(a1 + 424) >= 1) {
    v5 = v2 + 72;
    v6 = 0;
    while (1) {
      v7 = *(int*)(a1 + 428 + 4 * v6);
      v8 = *(_DWORD*)(v5 + 4 * v7);
      v9 = *(_QWORD*)(a1 + 384 + 8 * v7);
      v10 = **(__int16**)(a2 + 8 * v6) >> v3;
      v11 = v10 - v8;
      *(_DWORD*)(v5 + 4 * v7) = v10;
      if (v10 == v8) {
        v12 = 0;
      }
      else {
        v13 = -1;
        if (v11 >= 0) {
          v14 = v11;
        }
        else {
          v14 = -v11;
        }
        do {
          ++v13;
          v15 = v14 > 1;
          v14 >>= 1;
        } while (v15);
        v12 = v13 + 1;
        if (v13 >= 0xB) {
          *(_DWORD*)(*(_QWORD*)a1 + 40LL) = 6;
          (**(void (***)(__int64))a1)(a1);
        }
      }
      v16 = *(int*)(v9 + 20);
      if (*(_DWORD*)(v2 + 24) != 0) {
        break;
      }
      emit_bits(
          v2, *(unsigned int*)(*(_QWORD*)(v2 + 120 + 8 * v16) + 4LL * v12),
          *(unsigned __int8*)(*(_QWORD*)(v2 + 120 + 8 * v16) + v12 + 1024LL));
      if (v12 != 0) {
        goto LABEL_19;
      }
    LABEL_6:
      if (++v6 >= *(int*)(a1 + 424)) {
        goto LABEL_20;
      }
    }
    ++*(_QWORD*)(*(_QWORD*)(v2 + 152 + 8 * v16) + 8LL * v12);
    if (v12 == 0) {
      goto LABEL_6;
    }
  LABEL_19:
    emit_bits(v2, (unsigned int)(v11 + (v11 >> 31)), v12);
    goto LABEL_6;
  }
LABEL_20:
  **(_QWORD**)(a1 + 48) = *(_QWORD*)(v2 + 32);
  *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL) = *(_QWORD*)(v2 + 40);
  v17 = *(_DWORD*)(a1 + 324);
  if (v17 != 0) {
    v18 = *(_DWORD*)(v2 + 112);
    if (v18 == 0) {
      *(_DWORD*)(v2 + 116) = ((unsigned __int8)*(_DWORD*)(v2 + 116) + 1) & 7;
      v18 = v17;
    }
    *(_DWORD*)(v2 + 112) = v18 - 1;
  }
  return 1;
}

__int64 jcphuff_337a0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  int v11;
  int v12;
  bool v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  bool v18;
  __int64 v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  int v27;
  _BYTE* v28;
  __int64 v29;
  __int64 v30;
  _BYTE* v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  int v37;
  _QWORD* v38;
  int v39;
  int v40;
  __int64 v43;
  int v44;
  unsigned int v45;

  v2 = *(_QWORD*)(a1 + 568);
  v3 = *(_DWORD*)(a1 + 472);
  v44 = *(_DWORD*)(a1 + 480);
  *(_QWORD*)(v2 + 32) = **(_QWORD**)(a1 + 48);
  *(_QWORD*)(v2 + 40) = *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL);
  if (*(_DWORD*)(a1 + 324) != 0 && *(_DWORD*)(v2 + 112) == 0) {
    v38 = a2;
    emit_restart_34cc0(v2, *(unsigned int*)(v2 + 116));
    a2 = v38;
    v4 = *(int*)(a1 + 468);
    if ((int)v4 > v3) {
      goto LABEL_52;
    }
  }
  else {
    v4 = *(int*)(a1 + 468);
    if ((int)v4 > v3) {
      goto LABEL_52;
    }
  }
  v5 = *a2;
  v6 = v2 + 152;
  v7 = v2 + 120;
  v8 = v3 + 1;
  v9 = 0;
  v10 = SdkData_e868f0;
  v43 = *a2;
  do {
    while (1) {
      v11 = v9;
      v12 = *(__int16*)(v5 + 2LL * *(int*)(v10 + 4 * v4));
      if (*(_WORD*)(v5 + 2LL * *(int*)(v10 + 4 * v4)) == 0) {
        break;
      }
      v13 = v12 < 0;
      v14 = (unsigned int)-v12 >> v44;
      v15 = (unsigned int)v12 >> v44;
      v16 = v12 < 0 ? ~v14 : (unsigned int)v12 >> v44;
      v17 = v13 ? v14 : v15;
      if (v17 == 0) {
        break;
      }
      v45 = v16;
      if (*(_DWORD*)(v2 + 92) != 0) {
        emit_eobrun(v2);
      }
      if (v11 >= 16) {
        do {
          v19 = *(int*)(v2 + 88);
          if (*(_DWORD*)(v2 + 24) != 0) {
            ++*(_QWORD*)(*(_QWORD*)(v6 + 8 * v19) + 1920LL);
          }
          else {
            v20 = *(_QWORD*)(v7 + 8 * v19);
            v21 = *(_DWORD*)(v2 + 56);
            v22 = *(_DWORD*)(v20 + 960);
            v23 = *(unsigned __int8*)(v20 + 1264);
            if (*(_BYTE*)(v20 + 1264) != 0 ||
                (*(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 41,
                 (***(void (****)(_QWORD))(v2 + 64))(*(_QWORD*)(v2 + 64)),
                 *(_DWORD*)(v2 + 24) == 0)) {
              v24 = ~(-1 << v23) & v22;
              v25 = v21 + v23;
              v26 =
                  *(_QWORD*)(v2 + 48) |
                  (v24 << (24 - ((unsigned __int8)v21 + (unsigned __int8)v23)));
              if (v25 < 8) {
                v27 = v25;
              LABEL_25:
                *(_QWORD*)(v2 + 48) = v26;
                *(_DWORD*)(v2 + 56) = v27;
                goto LABEL_20;
              }
              while (2) {
                v28 = *(_BYTE**)(v2 + 32);
                *(_QWORD*)(v2 + 32) = v28 + 1;
                *v28 = BYTE2(v26);
                v29 = *(_QWORD*)(v2 + 40) - 1LL;
                *(_QWORD*)(v2 + 40) = v29;
                if (v29 != 0) {
                  if ((~(_DWORD)v26 & 0xFF0000) == 0) {
                    goto LABEL_34;
                  }
                }
                else {
                  v30 = *(_QWORD*)(*(_QWORD*)(v2 + 64) + 48LL);
                  if ((*(unsigned int (**)(void*))(v30 + 24))(
                          (void*)*(_QWORD*)(v2 + 64)) == 0) {
                    *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
                    (***(void (****)(_QWORD))(v2 + 64))(*(_QWORD*)(v2 + 64));
                  }
                  *(_QWORD*)(v2 + 32) = *(_QWORD*)v30;
                  *(_QWORD*)(v2 + 40) = *(_QWORD*)(v30 + 8);
                  if ((~(_DWORD)v26 & 0xFF0000) == 0) {
                  LABEL_34:
                    v31 = *(_BYTE**)(v2 + 32);
                    *(_QWORD*)(v2 + 32) = v31 + 1;
                    *v31 = 0;
                    v32 = *(_QWORD*)(v2 + 40) - 1LL;
                    *(_QWORD*)(v2 + 40) = v32;
                    if (v32 == 0) {
                      v33 = *(_QWORD*)(*(_QWORD*)(v2 + 64) + 48LL);
                      if ((*(unsigned int (**)(void*))(v33 + 24))(
                              (void*)*(_QWORD*)(v2 + 64)) == 0) {
                        *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
                        (***(void (****)(_QWORD))(v2 + 64))(
                            *(_QWORD*)(v2 + 64));
                      }
                      *(_QWORD*)(v2 + 32) = *(_QWORD*)v33;
                      *(_QWORD*)(v2 + 40) = *(_QWORD*)(v33 + 8);
                    }
                  }
                }
                v26 <<= 8;
                v27 = v25 - 8;
                v18 = v25 <= 15;
                v25 -= 8;
                if (v18) {
                  goto LABEL_25;
                }
                continue;
              }
            }
          }
        LABEL_20:
          v18 = v11 <= 31;
          v11 -= 16;
        } while (!v18);
      }
      if (v17 == 1) {
        v5 = v43;
        v8 = v3 + 1;
        v10 = SdkData_e868f0;
      }
      else {
        v5 = v43;
        v8 = v3 + 1;
        v34 = 0;
        v10 = SdkData_e868f0;
        do {
          ++v34;
          v18 = v17 > 3;
          v17 >>= 1;
        } while (v18);
        v17 = v34 + 1;
        if (v34 >= 0xA) {
          *(_DWORD*)(*(_QWORD*)a1 + 40LL) = 6;
          (**(void (***)(__int64))a1)(a1);
        }
      }
      v35 = *(int*)(v2 + 88);
      v36 = (int)(v17 + 16 * v11);
      if (*(_DWORD*)(v2 + 24) != 0) {
        ++*(_QWORD*)(*(_QWORD*)(v6 + 8 * v35) + 8 * v36);
      }
      else {
        emit_bits(v2, *(unsigned int*)(*(_QWORD*)(v7 + 8 * v35) + 4 * v36),
                  *(unsigned __int8*)(*(_QWORD*)(v7 + 8 * v35) + v36 + 1024));
      }
      emit_bits(v2, v45, v17);
      ++v4;
      v9 = 0;
      if (v8 == (_DWORD)v4) {
        goto LABEL_52;
      }
    }
    v9 = v11 + 1;
    ++v4;
  } while (v8 != (_DWORD)v4);
  if ((v11 & 0x80000000) == 0) {
    v37 = *(_DWORD*)(v2 + 92) + 1;
    *(_DWORD*)(v2 + 92) = v37;
    if (v37 == 0x7FFF) {
      emit_eobrun(v2);
    }
  }
LABEL_52:
  **(_QWORD**)(a1 + 48) = *(_QWORD*)(v2 + 32);
  *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL) = *(_QWORD*)(v2 + 40);
  v39 = *(_DWORD*)(a1 + 324);
  if (v39 != 0) {
    v40 = *(_DWORD*)(v2 + 112);
    if (v40 == 0) {
      *(_DWORD*)(v2 + 116) = ((unsigned __int8)*(_DWORD*)(v2 + 116) + 1) & 7;
      v40 = v39;
    }
    *(_DWORD*)(v2 + 112) = v40 - 1;
  }
  return 1;
}

__int64 jcphuff_33be0(__int64 a1, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64 v6;
  int v7;
  int v8;

  v2 = *(_QWORD*)(a1 + 568);
  v3 = *(_DWORD*)(a1 + 480);
  *(_QWORD*)(v2 + 32) = **(_QWORD**)(a1 + 48);
  *(_QWORD*)(v2 + 40) = *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL);
  if (*(_DWORD*)(a1 + 324) != 0 && *(_DWORD*)(v2 + 112) == 0) {
    emit_restart_34cc0(v2, *(unsigned int*)(v2 + 116));
  }
  if (*(int*)(a1 + 424) >= 1) {
    v6 = 0;
    do {
      emit_bits(v2, (unsigned int)(**(__int16**)(a2 + 8 * v6++) >> v3), 1);
    } while (v6 < *(int*)(a1 + 424));
  }
  **(_QWORD**)(a1 + 48) = *(_QWORD*)(v2 + 32);
  *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL) = *(_QWORD*)(v2 + 40);
  v7 = *(_DWORD*)(a1 + 324);
  if (v7 != 0) {
    v8 = *(_DWORD*)(v2 + 112);
    if (v8 == 0) {
      *(_DWORD*)(v2 + 116) = ((unsigned __int8)*(_DWORD*)(v2 + 116) + 1) & 7;
      v8 = v7;
    }
    *(_DWORD*)(v2 + 112) = v8 - 1;
  }
  return 1;
}

__int64 jcphuff_33ce0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  _QWORD* v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  unsigned int* v18;
  int* v19;
  int v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  int v31;
  int v32;
  unsigned int v33;
  int v34;
  _BYTE* v35;
  int v36;
  int v37;
  int v38;
  bool v39;
  int v40;
  unsigned int v41;
  unsigned int v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  unsigned int v47;
  __int64 v48;
  int v49;
  int v50;
  unsigned __int64 v51;
  int v52;
  int v53;
  _BYTE* v54;
  __int64 v55;
  __int64 v56;
  _BYTE* v57;
  __int64 v58;
  __int64 v59;
  int v60;
  unsigned __int64 v61;
  _BYTE* v62;
  int v63;
  __int64 v64;
  __int64 v65;
  _BYTE* v66;
  __int64 v67;
  __int64 v68;
  int v69;
  _BYTE* v70;
  int v71;
  int v72;
  unsigned __int64 v73;
  int v74;
  _BYTE* v75;
  __int64 v76;
  __int64 v77;
  _BYTE* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  int v82;
  __int64 v83;
  unsigned int v84;
  int v85;
  __int64 v86;
  int v87;
  unsigned __int64 v88;
  int v89;
  _BYTE* v90;
  __int64 v91;
  __int64 v92;
  _BYTE* v93;
  __int64 v94;
  __int64 v95;
  int v96;
  unsigned __int64 v97;
  int v98;
  _BYTE* v99;
  __int64 v100;
  __int64 v101;
  _BYTE* v102;
  __int64 v103;
  __int64 v104;
  int v105;
  __int64 v106;
  __int64 v107;
  int v108;
  unsigned __int64 v109;
  int v110;
  _BYTE* v111;
  __int64 v112;
  __int64 v113;
  _BYTE* v114;
  __int64 v115;
  __int64 v116;
  int v117;
  char v118;
  int v119;
  unsigned int v120;
  int v121;
  int v122;
  __int64 v124;
  __int64 v125;
  int v126;
  int v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  _QWORD v131[33];

  v2 = *(_QWORD*)(a1 + 568);
  v3 = *(_DWORD*)(a1 + 472);
  v4 = a1;
  v5 = *(_DWORD*)(a1 + 480);
  *(_QWORD*)(v2 + 32) = **(_QWORD**)(a1 + 48);
  *(_QWORD*)(v2 + 40) = *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL);
  if (*(_DWORD*)(a1 + 324) != 0 && *(_DWORD*)(v2 + 112) == 0) {
    v8 = a2;
    emit_restart_34cc0(v2, *(unsigned int*)(v2 + 116));
    a2 = v8;
    v6 = *(int*)(v4 + 468);
    if (v3 < (int)v6) {
      goto LABEL_4;
    }
  }
  else {
    v6 = *(int*)(a1 + 468);
    if (v3 < (int)v6) {
    LABEL_4:
      v7 = 0;
      goto LABEL_178;
    }
  }
  v9 = *a2;
  v10 = v3 - v6 + 1;
  v11 = v10 & 3;
  v12 = SdkData_e868f0;
  memset(v131, 0, 256);
  if ((unsigned int)(v3 - v6) >= 3) {
    v16 = v10 & 0xFFFFFFFC;
    v17 = 0;
    v13 = 0;
    v18 = (unsigned int*)&v131[1] + v6;
    v19 = (int*)(SdkData_e868f0 + 4 * v6 + 8);
    do {
      v20 = *(__int16*)(v9 + 2LL * *(v19 - 2));
      v21 = *(__int16*)(v9 + 2LL * *(v19 - 1));
      if (v20 < 0) {
        v20 = -v20;
      }
      v22 = (unsigned int)v20 >> v5;
      if (v22 == 1) {
        v13 = v6 + v17;
      }
      if (v21 < 0) {
        v21 = -v21;
      }
      v23 = (unsigned int)v21 >> v5;
      *(v18 - 2) = v22;
      *(v18 - 1) = v23;
      if (v23 == 1) {
        v13 = v6 + v17 + 1;
      }
      v24 = *v19;
      v25 = v19[1];
      v19 += 4;
      v26 = *(__int16*)(v9 + 2 * v24);
      v27 = *(__int16*)(v9 + 2 * v25);
      if (v26 < 0) {
        v26 = -v26;
      }
      v28 = (unsigned int)v26 >> v5;
      if (v28 == 1) {
        v13 = v6 + v17 + 2;
      }
      if (v27 < 0) {
        v27 = -v27;
      }
      v29 = (unsigned int)v27 >> v5;
      *v18 = v28;
      v18[1] = v29;
      v18 += 4;
      v30 = v6 + v17;
      v17 += 4;
      v31 = v30 + 3;
      if (v29 == 1) {
        v13 = v31;
      }
    } while (v16 != (_DWORD)v17);
    v15 = v6 + v17;
    v14 = v6;
    v124 = v4;
    if (v11 == 0) {
      goto LABEL_33;
    }
    goto LABEL_28;
  }
  v13 = 0;
  v14 = v6;
  v15 = v6;
  v124 = v4;
  if ((v10 & 3) != 0) {
    do {
    LABEL_28:
      v32 = *(__int16*)(v9 + 2LL * *(int*)(v12 + 4 * v15));
      if (v32 < 0) {
        v32 = -v32;
      }
      v33 = (unsigned int)v32 >> v5;
      *((_DWORD*)v131 + v15) = v33;
      if (v33 == 1) {
        v13 = v15;
      }
      ++v15;
      --v11;
    } while (v11 != 0);
  }
LABEL_33:
  v34 = 0;
  v7 = 0;
  v125 = v13;
  v35 = (_BYTE*)(*(_QWORD*)(v2 + 104) + *(unsigned int*)(v2 + 96));
  v129 = v2 + 120;
  v130 = v2 + 152;
  v126 = v3 + 1;
  do {
    while (1) {
      while (1) {
        v36 = *((_DWORD*)v131 + v14);
        if (v36 != 0) {
          break;
        }
        ++v34;
        if (v126 == (_DWORD)++v14) {
          goto LABEL_174;
        }
      }
      v127 = *((_DWORD*)v131 + v14);
      v128 = v14;
      if (v34 < 16) {
        break;
      }
      v37 = v7;
      v38 = v34;
      if (v14 <= v125) {
        while (1) {
          v40 = *(_DWORD*)(v2 + 92);
          if (v40 == 0) {
            goto LABEL_109;
          }
          if (v40 == 1) {
            v41 = 0;
          }
          else {
            v42 = -1;
            do {
              v40 >>= 1;
              ++v42;
            } while ((unsigned int)v40 > 1);
            v41 = v42 + 1;
            if (v42 >= 0xE) {
              *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 41;
              (***(void (****)(_QWORD))(v2 + 64))(*(_QWORD*)(v2 + 64));
            }
          }
          v43 = *(int*)(v2 + 88);
          v44 = (int)(16 * v41);
          if (*(_DWORD*)(v2 + 24) != 0) {
            ++*(_QWORD*)(*(_QWORD*)(v130 + 8 * v43) + 8 * v44);
          LABEL_55:
            v53 = *(_DWORD*)(v2 + 24);
            goto LABEL_56;
          }
          v45 = *(_DWORD*)(v2 + 56);
          v46 = *(_QWORD*)(v129 + 8 * v43);
          v47 = *(_DWORD*)(v46 + 4 * v44);
          v48 = v46 + v44;
          v49 = *(unsigned __int8*)(v48 + 1024);
          if (*(_BYTE*)(v48 + 1024) != 0) {
            break;
          }
          *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 41;
          (***(void (****)(_QWORD))(v2 + 64))(*(_QWORD*)(v2 + 64));
          v53 = *(_DWORD*)(v2 + 24);
          if (v53 == 0) {
            break;
          }
        LABEL_56:
          if (v41 == 0) {
            goto LABEL_87;
          }
          if (v53 == 0) {
            v60 = *(_DWORD*)(v2 + 56) + v41;
            v61 =
                ((*(unsigned int*)(v2 + 92) & (unsigned __int64)~(-1LL << v41))
                 << (24 - (*(_BYTE*)(v2 + 56) + (unsigned __int8)v41))) |
                *(_QWORD*)(v2 + 48);
            if (v60 < 8) {
              v53 = 0;
              goto LABEL_86;
            }
            while (1) {
              v62 = *(_BYTE**)(v2 + 32);
              v63 = v60;
              *(_QWORD*)(v2 + 32) = v62 + 1;
              *v62 = BYTE2(v61);
              v64 = *(_QWORD*)(v2 + 40) - 1LL;
              *(_QWORD*)(v2 + 40) = v64;
              if (v64 == 0) {
                break;
              }
              if ((~(_DWORD)v61 & 0xFF0000) == 0) {
                goto LABEL_80;
              }
            LABEL_73:
              v61 <<= 8;
              v60 = v63 - 8;
              if (v63 <= 15) {
                v53 = *(_DWORD*)(v2 + 24);
              LABEL_86:
                *(_QWORD*)(v2 + 48) = v61;
                *(_DWORD*)(v2 + 56) = v60;
              LABEL_87:
                v69 = *(_DWORD*)(v2 + 96);
                *(_DWORD*)(v2 + 92) = 0;
                if (v69 == 0 || v53 != 0) {
                  goto LABEL_108;
                }
                v70 = *(_BYTE**)(v2 + 104);
                while (2) {
                  if (*(_DWORD*)(v2 + 24) == 0) {
                    v72 = *(_DWORD*)(v2 + 56);
                    v73 = ((unsigned __int64)(*v70 & 1)
                           << (23 - (unsigned __int8)v72)) |
                          *(_QWORD*)(v2 + 48);
                    if (v72 >= 7) {
                      v74 = v72 + 9;
                      while (1) {
                        v75 = *(_BYTE**)(v2 + 32);
                        *(_QWORD*)(v2 + 32) = v75 + 1;
                        *v75 = BYTE2(v73);
                        v76 = *(_QWORD*)(v2 + 40) - 1LL;
                        *(_QWORD*)(v2 + 40) = v76;
                        if (v76 == 0) {
                          break;
                        }
                        if ((~(_DWORD)v73 & 0xFF0000) == 0) {
                          goto LABEL_104;
                        }
                      LABEL_97:
                        v73 <<= 8;
                        v74 -= 8;
                        if (v74 <= 15) {
                          v71 = v74 - 8;
                          goto LABEL_91;
                        }
                      }
                      v77 = *(_QWORD*)(*(_QWORD*)(v2 + 64) + 48LL);
                      if ((*(unsigned int (**)(void*))(v77 + 24))(
                              (void*)*(_QWORD*)(v2 + 64)) == 0) {
                        *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
                        (***(void (****)(_QWORD))(v2 + 64))(
                            *(_QWORD*)(v2 + 64));
                      }
                      *(_QWORD*)(v2 + 32) = *(_QWORD*)v77;
                      *(_QWORD*)(v2 + 40) = *(_QWORD*)(v77 + 8);
                      if ((~(_DWORD)v73 & 0xFF0000) != 0) {
                        goto LABEL_97;
                      }
                    LABEL_104:
                      v78 = *(_BYTE**)(v2 + 32);
                      *(_QWORD*)(v2 + 32) = v78 + 1;
                      *v78 = 0;
                      v79 = *(_QWORD*)(v2 + 40) - 1LL;
                      *(_QWORD*)(v2 + 40) = v79;
                      if (v79 == 0) {
                        v80 = *(_QWORD*)(*(_QWORD*)(v2 + 64) + 48LL);
                        if ((*(unsigned int (**)(void*))(v80 + 24))(
                                (void*)*(_QWORD*)(v2 + 64)) == 0) {
                          *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
                          (***(void (****)(_QWORD))(v2 + 64))(
                              *(_QWORD*)(v2 + 64));
                        }
                        *(_QWORD*)(v2 + 32) = *(_QWORD*)v80;
                        *(_QWORD*)(v2 + 40) = *(_QWORD*)(v80 + 8);
                      }
                      goto LABEL_97;
                    }
                    v71 = v72 + 1;
                  LABEL_91:
                    *(_QWORD*)(v2 + 48) = v73;
                    *(_DWORD*)(v2 + 56) = v71;
                  }
                  ++v70;
                  if (--v69 == 0) {
                    goto LABEL_108;
                  }
                  continue;
                }
              }
            }
            v65 = *(_QWORD*)(*(_QWORD*)(v2 + 64) + 48LL);
            if ((*(unsigned int (**)(void*))(v65 + 24))(
                    (void*)*(_QWORD*)(v2 + 64)) == 0) {
              *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
              (***(void (****)(_QWORD))(v2 + 64))(*(_QWORD*)(v2 + 64));
            }
            *(_QWORD*)(v2 + 32) = *(_QWORD*)v65;
            *(_QWORD*)(v2 + 40) = *(_QWORD*)(v65 + 8);
            if ((~(_DWORD)v61 & 0xFF0000) != 0) {
              goto LABEL_73;
            }
          LABEL_80:
            v66 = *(_BYTE**)(v2 + 32);
            *(_QWORD*)(v2 + 32) = v66 + 1;
            *v66 = 0;
            v67 = *(_QWORD*)(v2 + 40) - 1LL;
            *(_QWORD*)(v2 + 40) = v67;
            if (v67 == 0) {
              v68 = *(_QWORD*)(*(_QWORD*)(v2 + 64) + 48LL);
              if ((*(unsigned int (**)(void*))(v68 + 24))(
                      (void*)*(_QWORD*)(v2 + 64)) == 0) {
                *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
                (***(void (****)(_QWORD))(v2 + 64))(*(_QWORD*)(v2 + 64));
              }
              *(_QWORD*)(v2 + 32) = *(_QWORD*)v68;
              *(_QWORD*)(v2 + 40) = *(_QWORD*)(v68 + 8);
            }
            goto LABEL_73;
          }
          *(_DWORD*)(v2 + 92) = 0;
        LABEL_108:
          *(_DWORD*)(v2 + 96) = 0;
        LABEL_109:
          v81 = *(int*)(v2 + 88);
          if (*(_DWORD*)(v2 + 24) != 0) {
            ++*(_QWORD*)(*(_QWORD*)(v130 + 8 * v81) + 1920LL);
            goto LABEL_127;
          }
          v82 = *(_DWORD*)(v2 + 56);
          v83 = *(_QWORD*)(v129 + 8 * v81);
          v84 = *(_DWORD*)(v83 + 960);
          v85 = *(unsigned __int8*)(v83 + 1264);
          if (*(_BYTE*)(v83 + 1264) != 0 ||
              (*(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 41,
               (***(void (****)(_QWORD))(v2 + 64))(*(_QWORD*)(v2 + 64)),
               *(_DWORD*)(v2 + 24) == 0)) {
            v86 = -1LL << v85;
            v87 = v82 + v85;
            v88 = *(_QWORD*)(v2 + 48) | ((unsigned __int64)(~(_DWORD)v86 & v84)
                                         << (24 - (unsigned __int8)v87));
            if (v87 < 8) {
              v89 = v87;
            LABEL_114:
              *(_QWORD*)(v2 + 48) = v88;
              *(_DWORD*)(v2 + 56) = v89;
              goto LABEL_127;
            }
            while (1) {
              v90 = *(_BYTE**)(v2 + 32);
              *(_QWORD*)(v2 + 32) = v90 + 1;
              *v90 = BYTE2(v88);
              v91 = *(_QWORD*)(v2 + 40) - 1LL;
              *(_QWORD*)(v2 + 40) = v91;
              if (v91 == 0) {
                break;
              }
              if ((~(_DWORD)v88 & 0xFF0000) == 0) {
                goto LABEL_123;
              }
            LABEL_116:
              v88 <<= 8;
              v89 = v87 - 8;
              v39 = v87 <= 15;
              v87 -= 8;
              if (v39) {
                goto LABEL_114;
              }
            }
            v92 = *(_QWORD*)(*(_QWORD*)(v2 + 64) + 48LL);
            if ((*(unsigned int (**)(void*))(v92 + 24))(
                    (void*)*(_QWORD*)(v2 + 64)) == 0) {
              *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
              (***(void (****)(_QWORD))(v2 + 64))(*(_QWORD*)(v2 + 64));
            }
            *(_QWORD*)(v2 + 32) = *(_QWORD*)v92;
            *(_QWORD*)(v2 + 40) = *(_QWORD*)(v92 + 8);
            if ((~(_DWORD)v88 & 0xFF0000) != 0) {
              goto LABEL_116;
            }
          LABEL_123:
            v93 = *(_BYTE**)(v2 + 32);
            *(_QWORD*)(v2 + 32) = v93 + 1;
            *v93 = 0;
            v94 = *(_QWORD*)(v2 + 40) - 1LL;
            *(_QWORD*)(v2 + 40) = v94;
            if (v94 == 0) {
              v95 = *(_QWORD*)(*(_QWORD*)(v2 + 64) + 48LL);
              if ((*(unsigned int (**)(void*))(v95 + 24))(
                      (void*)*(_QWORD*)(v2 + 64)) == 0) {
                *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
                (***(void (****)(_QWORD))(v2 + 64))(*(_QWORD*)(v2 + 64));
              }
              *(_QWORD*)(v2 + 32) = *(_QWORD*)v95;
              *(_QWORD*)(v2 + 40) = *(_QWORD*)(v95 + 8);
            }
            goto LABEL_116;
          }
        LABEL_127:
          if (v7 != 0 && *(_DWORD*)(v2 + 24) == 0) {
          LABEL_129:
            v96 = *(_DWORD*)(v2 + 56);
            v97 =
                ((unsigned __int64)(*v35 & 1) << (23 - (unsigned __int8)v96)) |
                *(_QWORD*)(v2 + 48);
            if (v96 >= 7) {
              v98 = v96 + 9;
              while (1) {
                v99 = *(_BYTE**)(v2 + 32);
                *(_QWORD*)(v2 + 32) = v99 + 1;
                *v99 = BYTE2(v97);
                v100 = *(_QWORD*)(v2 + 40) - 1LL;
                *(_QWORD*)(v2 + 40) = v100;
                if (v100 == 0) {
                  break;
                }
                if ((~(_DWORD)v97 & 0xFF0000) == 0) {
                  goto LABEL_139;
                }
              LABEL_132:
                v97 <<= 8;
                v98 -= 8;
                if (v98 <= 15) {
                  v105 = v98 - 8;
                  goto LABEL_144;
                }
              }
              v101 = *(_QWORD*)(*(_QWORD*)(v2 + 64) + 48LL);
              if ((*(unsigned int (**)(void*))(v101 + 24))(
                      (void*)*(_QWORD*)(v2 + 64)) == 0) {
                *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
                (***(void (****)(_QWORD))(v2 + 64))(*(_QWORD*)(v2 + 64));
              }
              *(_QWORD*)(v2 + 32) = *(_QWORD*)v101;
              *(_QWORD*)(v2 + 40) = *(_QWORD*)(v101 + 8);
              if ((~(_DWORD)v97 & 0xFF0000) != 0) {
                goto LABEL_132;
              }
            LABEL_139:
              v102 = *(_BYTE**)(v2 + 32);
              *(_QWORD*)(v2 + 32) = v102 + 1;
              *v102 = 0;
              v103 = *(_QWORD*)(v2 + 40) - 1LL;
              *(_QWORD*)(v2 + 40) = v103;
              if (v103 == 0) {
                v104 = *(_QWORD*)(*(_QWORD*)(v2 + 64) + 48LL);
                if ((*(unsigned int (**)(void*))(v104 + 24))(
                        (void*)*(_QWORD*)(v2 + 64)) == 0) {
                  *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
                  (***(void (****)(_QWORD))(v2 + 64))(*(_QWORD*)(v2 + 64));
                }
                *(_QWORD*)(v2 + 32) = *(_QWORD*)v104;
                *(_QWORD*)(v2 + 40) = *(_QWORD*)(v104 + 8);
              }
              goto LABEL_132;
            }
            v105 = v96 + 1;
          LABEL_144:
            *(_QWORD*)(v2 + 48) = v97;
            *(_DWORD*)(v2 + 56) = v105;
            while (--v7 != 0) {
              ++v35;
              if (*(_DWORD*)(v2 + 24) == 0) {
                goto LABEL_129;
              }
            }
          }
          v35 = *(_BYTE**)(v2 + 104);
          v38 = v34 - 16;
          v7 = 0;
          v37 = 0;
          v39 = v34 <= 31;
          v34 -= 16;
          if (v39) {
            goto LABEL_38;
          }
        }
        v50 = v45 + v49;
        v51 = *(_QWORD*)(v2 + 48) | ((unsigned __int64)(~(-1 << v49) & v47)
                                     << (24 - (unsigned __int8)v50));
        if (v50 < 8) {
          v52 = v50;
        LABEL_54:
          *(_QWORD*)(v2 + 48) = v51;
          *(_DWORD*)(v2 + 56) = v52;
          goto LABEL_55;
        }
        while (1) {
          v54 = *(_BYTE**)(v2 + 32);
          *(_QWORD*)(v2 + 32) = v54 + 1;
          *v54 = BYTE2(v51);
          v55 = *(_QWORD*)(v2 + 40) - 1LL;
          *(_QWORD*)(v2 + 40) = v55;
          if (v55 == 0) {
            break;
          }
          if ((~(_DWORD)v51 & 0xFF0000) == 0) {
            goto LABEL_67;
          }
        LABEL_60:
          v51 <<= 8;
          v52 = v50 - 8;
          v39 = v50 <= 15;
          v50 -= 8;
          if (v39) {
            goto LABEL_54;
          }
        }
        v56 = *(_QWORD*)(*(_QWORD*)(v2 + 64) + 48LL);
        if ((*(unsigned int (**)(void*))(v56 + 24))(
                (void*)*(_QWORD*)(v2 + 64)) == 0) {
          *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
          (***(void (****)(_QWORD))(v2 + 64))(*(_QWORD*)(v2 + 64));
        }
        *(_QWORD*)(v2 + 32) = *(_QWORD*)v56;
        *(_QWORD*)(v2 + 40) = *(_QWORD*)(v56 + 8);
        if ((~(_DWORD)v51 & 0xFF0000) != 0) {
          goto LABEL_60;
        }
      LABEL_67:
        v57 = *(_BYTE**)(v2 + 32);
        *(_QWORD*)(v2 + 32) = v57 + 1;
        *v57 = 0;
        v58 = *(_QWORD*)(v2 + 40) - 1LL;
        *(_QWORD*)(v2 + 40) = v58;
        if (v58 == 0) {
          v59 = *(_QWORD*)(*(_QWORD*)(v2 + 64) + 48LL);
          if ((*(unsigned int (**)(void*))(v59 + 24))(
                  (void*)*(_QWORD*)(v2 + 64)) == 0) {
            *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
            (***(void (****)(_QWORD))(v2 + 64))(*(_QWORD*)(v2 + 64));
          }
          *(_QWORD*)(v2 + 32) = *(_QWORD*)v59;
          *(_QWORD*)(v2 + 40) = *(_QWORD*)(v59 + 8);
        }
        goto LABEL_60;
      }
    LABEL_38:
      LOBYTE(v36) = v127;
      if (v127 >= 2) {
        goto LABEL_39;
      }
    LABEL_149:
      emit_eobrun(v2);
      v106 = *(int*)(v2 + 88);
      v107 = (16 * v38) | 1LL;
      if (*(_DWORD*)(v2 + 24) != 0) {
        ++*(_QWORD*)(*(_QWORD*)(v130 + 8 * v106) + 8 * v107);
      }
      else {
        emit_bits(
            v2, *(unsigned int*)(*(_QWORD*)(v129 + 8 * v106) + 4 * v107),
            *(unsigned __int8*)(*(_QWORD*)(v129 + 8 * v106) + v107 + 1024));
      }
      emit_bits(v2,
                (*(unsigned __int16*)(v9 + 2LL * *(int*)(SdkData_e868f0 +
                                                         4 * v128)) >>
                 15) ^
                    1u,
                1);
      if (v37 != 0 && *(_DWORD*)(v2 + 24) == 0) {
      LABEL_154:
        v108 = *(_DWORD*)(v2 + 56);
        v109 = ((unsigned __int64)(*v35 & 1) << (23 - (unsigned __int8)v108)) |
               *(_QWORD*)(v2 + 48);
        if (v108 >= 7) {
          v110 = v108 + 9;
          while (1) {
            v111 = *(_BYTE**)(v2 + 32);
            *(_QWORD*)(v2 + 32) = v111 + 1;
            *v111 = BYTE2(v109);
            v112 = *(_QWORD*)(v2 + 40) - 1LL;
            *(_QWORD*)(v2 + 40) = v112;
            if (v112 == 0) {
              break;
            }
            if ((~(_DWORD)v109 & 0xFF0000) == 0) {
              goto LABEL_164;
            }
          LABEL_157:
            v109 <<= 8;
            v110 -= 8;
            if (v110 <= 15) {
              v117 = v110 - 8;
              goto LABEL_169;
            }
          }
          v113 = *(_QWORD*)(*(_QWORD*)(v2 + 64) + 48LL);
          if ((*(unsigned int (**)(void*))(v113 + 24))(
                  (void*)*(_QWORD*)(v2 + 64)) == 0) {
            *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
            (***(void (****)(_QWORD))(v2 + 64))(*(_QWORD*)(v2 + 64));
          }
          *(_QWORD*)(v2 + 32) = *(_QWORD*)v113;
          *(_QWORD*)(v2 + 40) = *(_QWORD*)(v113 + 8);
          if ((~(_DWORD)v109 & 0xFF0000) != 0) {
            goto LABEL_157;
          }
        LABEL_164:
          v114 = *(_BYTE**)(v2 + 32);
          *(_QWORD*)(v2 + 32) = v114 + 1;
          *v114 = 0;
          v115 = *(_QWORD*)(v2 + 40) - 1LL;
          *(_QWORD*)(v2 + 40) = v115;
          if (v115 == 0) {
            v116 = *(_QWORD*)(*(_QWORD*)(v2 + 64) + 48LL);
            if ((*(unsigned int (**)(void*))(v116 + 24))(
                    (void*)*(_QWORD*)(v2 + 64)) == 0) {
              *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
              (***(void (****)(_QWORD))(v2 + 64))(*(_QWORD*)(v2 + 64));
            }
            *(_QWORD*)(v2 + 32) = *(_QWORD*)v116;
            *(_QWORD*)(v2 + 40) = *(_QWORD*)(v116 + 8);
          }
          goto LABEL_157;
        }
        v117 = v108 + 1;
      LABEL_169:
        *(_QWORD*)(v2 + 48) = v109;
        *(_DWORD*)(v2 + 56) = v117;
        while (--v37 != 0) {
          ++v35;
          if (*(_DWORD*)(v2 + 24) == 0) {
            goto LABEL_154;
          }
        }
      }
      v35 = *(_BYTE**)(v2 + 104);
      v7 = 0;
      v34 = 0;
      v14 = v128 + 1;
      if (v126 == (_DWORD)v128 + 1) {
        goto LABEL_174;
      }
    }
    v37 = v7;
    v38 = v34;
    if (v36 < 2) {
      goto LABEL_149;
    }
  LABEL_39:
    v7 = v37 + 1;
    v34 = v38;
    v35[v37] = v36 & 1;
    v14 = v128 + 1;
  } while (v126 != (_DWORD)v128 + 1);
LABEL_174:
  v39 = v34 <= 0;
  v4 = v124;
  v118 = !v39;
  if ((v118 & 1) == 0) {
  LABEL_178:
    if (v7 == 0) {
      goto LABEL_182;
    }
  }
  v119 = *(_DWORD*)(v2 + 92) + 1;
  v120 = *(_DWORD*)(v2 + 96) + v7;
  *(_DWORD*)(v2 + 92) = v119;
  *(_DWORD*)(v2 + 96) = v120;
  if (v119 == 0x7FFF || v120 >= 0x3AA) {
    emit_eobrun(v2);
  }
LABEL_182:
  **(_QWORD**)(v4 + 48) = *(_QWORD*)(v2 + 32);
  *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8LL) = *(_QWORD*)(v2 + 40);
  v121 = *(_DWORD*)(v4 + 324);
  if (v121 != 0) {
    v122 = *(_DWORD*)(v2 + 112);
    if (v122 == 0) {
      *(_DWORD*)(v2 + 116) = ((unsigned __int8)*(_DWORD*)(v2 + 116) + 1) & 7;
      v122 = v121;
    }
    *(_DWORD*)(v2 + 112) = v122 - 1;
  }
  return 1;
}

#pragma GCC visibility pop
