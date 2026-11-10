#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcmp_plt(_QWORD, _QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 nn_nifm_detail_GetGeneralServicePointer_plt(_QWORD);
__int64 nn_nifm_ExportMigrationNetworkProfile(int* a1, __int64 a2);
__int64 nn_nifm_ImportMigrationNetworkProfile(_DWORD* a1, int* a2);

__int64 nn_nifm_ExportMigrationNetworkProfile(int* a1, __int64 a2)
{
  __int64 result;
  int v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  int v27;
  __int64 v28;
  int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  int v36;
  __int64 v37;
  _BYTE* v38;
  __int64 v39;
  char v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int8* v51;
  __int64 v52;
  int v53;
  __int64 v54;
  int v55;
  __int64 v56;
  int v57;
  __int64 v58;
  int v59;
  __int64 v60;
  int v61;
  int v62;
  __int64 v63;
  char v64;
  int v65;
  _BYTE* v66;
  int v67;
  __int64 v68;
  _QWORD* v69;
  unsigned int v71;
  __int64 v72;
  __int64 v73;
  _QWORD v74[4];
  char v75;
  int v76;
  int v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  char v82;
  __int16 v83;
  _BYTE v84[100];
  char v85;
  char v86;
  char v87;
  char v88;
  char v89;
  char v90;
  char v91;
  char v92;
  char v93;
  char v94;
  char v95;
  char v96;
  char v97;
  char v98;
  char v99;
  char v100;
  char v101;
  char v102;
  char v103;
  char v104;
  char v105;
  char v106;
  char v107;
  char v108;
  char v109;
  char v110;
  char v111;
  char v112;
  char v113;
  char v114;
  char v115;
  unsigned __int8 v116;
  char v117;
  char v118;
  char v119;
  char v120;
  char v121;
  char v122;
  char v123;
  char v124;
  char v125;
  char v126;
  char v127;
  char v128;
  char v129;
  char v130;
  char v131;
  char v132;
  char v133;
  char v134;
  char v135;
  char v136;
  char v137;
  char v138;
  char v139;
  char v140;
  char v141;
  char v142;
  char v143;
  char v144;
  char v145;
  char v146;
  unsigned __int8 v147;
  __int16 v148;
  __int64 v149;
  __int64 v150;
  unsigned __int8 v151;
  char v152;
  __int16 v153;
  unsigned __int8 v154;
  _BYTE v155[102];
  _BYTE v156[3744];
  int v157;
  _QWORD* v158;
  _QWORD v159[5];

  v158 = nullptr;
  result = nn_nifm_detail_GetGeneralServicePointer_plt(&v158);
  if ((_DWORD)result == 0) {
    v157 = 0;
    memset_plt((void*)v156, nullptr, 3744);
    v74[0] = v156;
    v74[1] = 32;
    result = (*(__int64 (**)(_QWORD*, _QWORD*, int*, __int64))(*v158 + 72LL))(
        v158, v74, &v157, 1);
    if ((_DWORD)result == 0) {
      v7 = v157;
      if (v157 <= 0) {
        *a1 = v157;
      LABEL_221:
        v68 = v7 + 1LL;
        v69 = (_QWORD*)(a2 + 460LL * v7 + 4);
        do {
          *v69 = 0;
          v69[1] = 0;
          v69 = (_QWORD*)((char*)v69 + 460);
        } while ((_DWORD)v68++ != 32);
      LABEL_224:
        result = 0;
      }
      else {
        v72 = a2;
        v8 = 0;
        v9 = a2;
        v73 = a2 + 4;
        while (1) {
          memset_plt((void*)v74, nullptr, 436);
          result = (*(__int64 (**)(_QWORD*, _QWORD*, _BYTE*))(*v158 + 496LL))(
              v158, v74, &v156[117 * v8]);
          if ((_DWORD)result != 0) {
            break;
          }
          v12 = v73 + 460 * v8;
          v13 = v150;
          *(_QWORD*)v12 = v149;
          *(_QWORD*)(v12 + 8) = v13;
          v14 = 264;
          while (1) {
            v15 = (unsigned __int8*)v74 + v14;
            v16 = v9 + v14;
            if (*((_BYTE*)v74 + v14) == 0) {
              v38 = (_BYTE*)(v16 - 244);
              goto LABEL_53;
            }
            v17 = v15[1];
            *(_BYTE*)(v16 - 244) = *((_BYTE*)v74 + v14);
            if (v17 == 0) {
              v38 = (_BYTE*)(v9 + v14 - 243);
              goto LABEL_53;
            }
            *(_BYTE*)(v16 - 243) = v17;
            v18 = v9 + v14;
            if (v15[2] == 0) {
              v38 = (_BYTE*)(v18 - 242);
              goto LABEL_53;
            }
            v19 = v15[3];
            *(_BYTE*)(v18 - 242) = v15[2];
            if (v19 == 0) {
              v38 = (_BYTE*)(v9 + v14 - 241);
              goto LABEL_53;
            }
            *(_BYTE*)(v18 - 241) = v19;
            v20 = v9 + v14;
            if (v15[4] == 0) {
              v38 = (_BYTE*)(v20 - 240);
              goto LABEL_53;
            }
            v21 = v15[5];
            *(_BYTE*)(v20 - 240) = v15[4];
            if (v21 == 0) {
              v38 = (_BYTE*)(v9 + v14 - 239);
              goto LABEL_53;
            }
            *(_BYTE*)(v20 - 239) = v21;
            v22 = v9 + v14;
            if (v15[6] == 0) {
              v38 = (_BYTE*)(v22 - 238);
              goto LABEL_53;
            }
            v23 = v15[7];
            *(_BYTE*)(v22 - 238) = v15[6];
            if (v23 == 0) {
              v38 = (_BYTE*)(v9 + v14 - 237);
              goto LABEL_53;
            }
            *(_BYTE*)(v22 - 237) = v23;
            v24 = v9 + v14;
            if (v15[8] == 0) {
              v38 = (_BYTE*)(v24 - 236);
              goto LABEL_53;
            }
            v25 = v15[9];
            *(_BYTE*)(v24 - 236) = v15[8];
            if (v25 == 0) {
              v38 = (_BYTE*)(v9 + v14 - 235);
              goto LABEL_53;
            }
            *(_BYTE*)(v24 - 235) = v25;
            v26 = v9 + v14;
            if (v15[10] == 0) {
              v38 = (_BYTE*)(v26 - 234);
              goto LABEL_53;
            }
            v27 = v15[11];
            *(_BYTE*)(v26 - 234) = v15[10];
            if (v27 == 0) {
              v38 = (_BYTE*)(v9 + v14 - 233);
              goto LABEL_53;
            }
            *(_BYTE*)(v26 - 233) = v27;
            v28 = v9 + v14;
            if (v15[12] == 0) {
              v38 = (_BYTE*)(v28 - 232);
              goto LABEL_53;
            }
            v29 = v15[13];
            *(_BYTE*)(v28 - 232) = v15[12];
            if (v29 == 0) {
              v38 = (_BYTE*)(v9 + v14 - 231);
              goto LABEL_53;
            }
            *(_BYTE*)(v28 - 231) = v29;
            v30 = v9 + v14;
            if (v15[14] == 0) {
              v38 = (_BYTE*)(v30 - 230);
              goto LABEL_53;
            }
            v31 = v15[15];
            *(_BYTE*)(v30 - 230) = v15[14];
            if (v31 == 0) {
              v38 = (_BYTE*)(v9 + v14 - 229);
              goto LABEL_53;
            }
            *(_BYTE*)(v30 - 229) = v31;
            v32 = v9 + v14;
            if (v15[16] == 0) {
              v38 = (_BYTE*)(v32 - 228);
              goto LABEL_53;
            }
            v33 = v15[17];
            *(_BYTE*)(v32 - 228) = v15[16];
            if (v33 == 0) {
              v38 = (_BYTE*)(v9 + v14 - 227);
              goto LABEL_53;
            }
            *(_BYTE*)(v32 - 227) = v33;
            v34 = v9 + v14;
            if (v15[18] == 0) {
              v38 = (_BYTE*)(v34 - 226);
              goto LABEL_53;
            }
            v35 = v15[19];
            *(_BYTE*)(v34 - 226) = v15[18];
            if (v35 == 0) {
              v38 = (_BYTE*)(v9 + v14 - 225);
              goto LABEL_53;
            }
            v36 = v15[20];
            v37 = v9 + v14;
            *(_BYTE*)(v34 - 225) = v35;
            if (v36 == 0) {
              break;
            }
            v14 += 21;
            *(_BYTE*)(v37 - 224) = v36;
            if ((_DWORD)v14 == 327) {
              v38 = (_BYTE*)(v9 + v14 - 244);
              goto LABEL_53;
            }
          }
          v38 = (_BYTE*)(v37 - 224);
        LABEL_53:
          *v38 = 0;
          memset((char*)v159 + 1, 0, 33);
          *(_DWORD*)(v12 + 80) = v151;
          *(_BYTE*)(v12 + 84) = v152;
          *(_WORD*)(v12 + 85) = v153;
          if (v154 >= 0x20u) {
            v39 = 32;
          }
          else {
            v39 = v154;
          }
          if (v154 != 0) {
            memcpy_plt((char*)v159 + 1, v155, v39);
            v40 = v39;
          }
          else {
            v40 = 0;
          }
          memset_plt((void*)((char*)v159 + v39 + 1), nullptr, 33 - v39);
          LOBYTE(v159[0]) = v40;
          v41 = 0;
          v42 = v159[0];
          *(_QWORD*)(v12 + 95) = v159[1];
          v43 = v159[2];
          v44 = v159[3];
          *(_QWORD*)(v12 + 87) = v42;
          *(_QWORD*)(v12 + 103) = v43;
          LOWORD(v43) = v159[4];
          *(_QWORD*)(v12 + 111) = v44;
          LOBYTE(v44) = v155[32];
          *(_WORD*)(v12 + 119) = v43;
          LODWORD(v43) = v155[33];
          *(_BYTE*)(v12 + 121) = v44;
          LODWORD(v44) = v155[34];
          *(_DWORD*)(v12 + 124) = v43;
          *(_DWORD*)(v12 + 128) = v44;
          *(_BYTE*)(v12 + 132) = v155[35];
          v45 = *(_QWORD*)&v155[76];
          *(_QWORD*)(v12 + 165) = *(_QWORD*)&v155[68];
          *(_QWORD*)(v12 + 173) = v45;
          v46 = *(_QWORD*)&v155[92];
          *(_QWORD*)(v12 + 181) = *(_QWORD*)&v155[84];
          *(_QWORD*)(v12 + 189) = v46;
          v47 = *(_QWORD*)&v155[44];
          *(_QWORD*)(v12 + 133) = *(_QWORD*)&v155[36];
          *(_QWORD*)(v12 + 141) = v47;
          v48 = *(_QWORD*)&v155[60];
          *(_QWORD*)(v12 + 149) = *(_QWORD*)&v155[52];
          LOBYTE(v43) = v74[0];
          *(_QWORD*)(v12 + 157) = v48;
          *(_BYTE*)(v12 + 197) = v43;
          *(_QWORD*)(v12 + 200) = *(_QWORD*)((char*)v74 + 4);
          *(_DWORD*)(v12 + 208) = HIDWORD(v74[1]);
          *(_BYTE*)(v12 + 212) = v75;
          LODWORD(v48) = v77;
          *(_DWORD*)(v12 + 216) = v76;
          *(_DWORD*)(v12 + 220) = v48;
          v49 = v79;
          *(_QWORD*)(v12 + 224) = v78;
          *(_QWORD*)(v12 + 232) = v49;
          v50 = v81;
          *(_QWORD*)(v12 + 240) = v80;
          *(_QWORD*)(v12 + 248) = v50;
          *(_BYTE*)(v12 + 256) = v82;
          *(_WORD*)(v12 + 258) = v83;
          do {
            v51 = &v84[v41];
            v52 = v9 + v41;
            if (v84[v41] == 0) {
              *(_BYTE*)(v52 + 264) = 0;
              *(_BYTE*)(v12 + 360) = v85;
              v64 = v86;
              if (v86 == 0) {
                goto LABEL_128;
              }
              goto LABEL_93;
            }
            v53 = v51[1];
            *(_BYTE*)(v52 + 264) = v84[v41];
            if (v53 == 0) {
              *(_BYTE*)(v9 + v41 + 265) = 0;
              *(_BYTE*)(v12 + 360) = v85;
              v64 = v86;
              if (v86 == 0) {
                goto LABEL_128;
              }
              goto LABEL_93;
            }
            *(_BYTE*)(v52 + 265) = v53;
            v54 = v9 + v41;
            if (v51[2] == 0) {
              *(_BYTE*)(v54 + 266) = 0;
              *(_BYTE*)(v12 + 360) = v85;
              v64 = v86;
              if (v86 == 0) {
                goto LABEL_128;
              }
              goto LABEL_93;
            }
            v55 = v51[3];
            *(_BYTE*)(v54 + 266) = v51[2];
            if (v55 == 0) {
              *(_BYTE*)(v9 + v41 + 267) = 0;
              *(_BYTE*)(v12 + 360) = v85;
              v64 = v86;
              if (v86 == 0) {
                goto LABEL_128;
              }
              goto LABEL_93;
            }
            *(_BYTE*)(v54 + 267) = v55;
            v56 = v9 + v41;
            if (v51[4] == 0) {
              *(_BYTE*)(v56 + 268) = 0;
              *(_BYTE*)(v12 + 360) = v85;
              v64 = v86;
              if (v86 == 0) {
                goto LABEL_128;
              }
              goto LABEL_93;
            }
            v57 = v51[5];
            *(_BYTE*)(v56 + 268) = v51[4];
            if (v57 == 0) {
              *(_BYTE*)(v9 + v41 + 269) = 0;
              *(_BYTE*)(v12 + 360) = v85;
              v64 = v86;
              if (v86 == 0) {
                goto LABEL_128;
              }
              goto LABEL_93;
            }
            *(_BYTE*)(v56 + 269) = v57;
            v58 = v9 + v41;
            if (v51[6] == 0) {
              *(_BYTE*)(v58 + 270) = 0;
              *(_BYTE*)(v12 + 360) = v85;
              v64 = v86;
              if (v86 == 0) {
                goto LABEL_128;
              }
              goto LABEL_93;
            }
            v59 = v51[7];
            *(_BYTE*)(v58 + 270) = v51[6];
            if (v59 == 0) {
              *(_BYTE*)(v9 + v41 + 271) = 0;
              *(_BYTE*)(v12 + 360) = v85;
              v64 = v86;
              if (v86 == 0) {
                goto LABEL_128;
              }
              goto LABEL_93;
            }
            *(_BYTE*)(v58 + 271) = v59;
            v60 = v9 + v41;
            if (v51[8] == 0) {
              *(_BYTE*)(v60 + 272) = 0;
              *(_BYTE*)(v12 + 360) = v85;
              v64 = v86;
              if (v86 == 0) {
                goto LABEL_128;
              }
              goto LABEL_93;
            }
            v61 = v51[9];
            *(_BYTE*)(v60 + 272) = v51[8];
            if (v61 == 0) {
              *(_BYTE*)(v9 + v41 + 273) = 0;
              *(_BYTE*)(v12 + 360) = v85;
              v64 = v86;
              if (v86 != 0) {
                goto LABEL_93;
              }
              goto LABEL_128;
            }
            v62 = v51[10];
            v63 = v9 + v41;
            *(_BYTE*)(v60 + 273) = v61;
            if (v62 == 0) {
              *(_BYTE*)(v63 + 274) = 0;
              *(_BYTE*)(v12 + 360) = v85;
              v64 = v86;
              if (v86 != 0) {
                goto LABEL_93;
              }
            LABEL_128:
              v66 = (_BYTE*)(v12 + 361);
              goto LABEL_129;
            }
            v41 += 11;
            *(_BYTE*)(v63 + 274) = v62;
          } while ((_DWORD)v41 != 99);
          *(_BYTE*)(v9 + v41 + 264) = 0;
          *(_BYTE*)(v12 + 360) = v85;
          v64 = v86;
          if (v86 == 0) {
            goto LABEL_128;
          }
        LABEL_93:
          *(_BYTE*)(v12 + 361) = v64;
          if (v87 != 0) {
            *(_BYTE*)(v12 + 362) = v87;
            if (v88 != 0) {
              *(_BYTE*)(v12 + 363) = v88;
              if (v89 != 0) {
                *(_BYTE*)(v12 + 364) = v89;
                if (v90 != 0) {
                  *(_BYTE*)(v12 + 365) = v90;
                  if (v91 != 0) {
                    *(_BYTE*)(v12 + 366) = v91;
                    if (v92 != 0) {
                      *(_BYTE*)(v12 + 367) = v92;
                      if (v93 != 0) {
                        *(_BYTE*)(v12 + 368) = v93;
                        if (v94 != 0) {
                          *(_BYTE*)(v12 + 369) = v94;
                          if (v95 != 0) {
                            *(_BYTE*)(v12 + 370) = v95;
                            if (v96 != 0) {
                              *(_BYTE*)(v12 + 371) = v96;
                              if (v97 != 0) {
                                *(_BYTE*)(v12 + 372) = v97;
                                if (v98 != 0) {
                                  *(_BYTE*)(v12 + 373) = v98;
                                  if (v99 != 0) {
                                    *(_BYTE*)(v12 + 374) = v99;
                                    if (v100 != 0) {
                                      *(_BYTE*)(v12 + 375) = v100;
                                      if (v101 != 0) {
                                        *(_BYTE*)(v12 + 376) = v101;
                                        if (v102 != 0) {
                                          *(_BYTE*)(v12 + 377) = v102;
                                          if (v103 != 0) {
                                            *(_BYTE*)(v12 + 378) = v103;
                                            if (v104 != 0) {
                                              *(_BYTE*)(v12 + 379) = v104;
                                              if (v105 != 0) {
                                                *(_BYTE*)(v12 + 380) = v105;
                                                if (v106 != 0) {
                                                  *(_BYTE*)(v12 + 381) = v106;
                                                  if (v107 != 0) {
                                                    *(_BYTE*)(v12 + 382) = v107;
                                                    if (v108 != 0) {
                                                      *(_BYTE*)(v12 + 383) =
                                                          v108;
                                                      if (v109 != 0) {
                                                        *(_BYTE*)(v12 + 384) =
                                                            v109;
                                                        if (v110 != 0) {
                                                          *(_BYTE*)(v12 + 385) =
                                                              v110;
                                                          if (v111 != 0) {
                                                            *(_BYTE*)(v12 +
                                                                      386) =
                                                                v111;
                                                            if (v112 != 0) {
                                                              *(_BYTE*)(v12 +
                                                                        387) =
                                                                  v112;
                                                              if (v113 != 0) {
                                                                *(_BYTE*)(v12 +
                                                                          388) =
                                                                    v113;
                                                                if (v114 != 0) {
                                                                  *(_BYTE*)(v12 +
                                                                            389) =
                                                                      v114;
                                                                  if (v115 !=
                                                                      0) {
                                                                    v65 = v116;
                                                                    *(_BYTE*)(v12 +
                                                                              390) =
                                                                        v115;
                                                                    if (v65 !=
                                                                        0) {
                                                                      v66 =
                                                                          (_BYTE*)(v12 +
                                                                                   392);
                                                                      *(_BYTE*)(v12 +
                                                                                391) =
                                                                          v65;
                                                                    }
                                                                    else {
                                                                      v66 =
                                                                          (_BYTE*)(v12 +
                                                                                   391);
                                                                    }
                                                                  }
                                                                  else {
                                                                    v66 =
                                                                        (_BYTE*)(v12 +
                                                                                 390);
                                                                  }
                                                                }
                                                                else {
                                                                  v66 =
                                                                      (_BYTE*)(v12 +
                                                                               389);
                                                                }
                                                              }
                                                              else {
                                                                v66 =
                                                                    (_BYTE*)(v12 +
                                                                             388);
                                                              }
                                                            }
                                                            else {
                                                              v66 =
                                                                  (_BYTE*)(v12 +
                                                                           387);
                                                            }
                                                          }
                                                          else {
                                                            v66 = (_BYTE*)(v12 +
                                                                           386);
                                                          }
                                                        }
                                                        else {
                                                          v66 = (_BYTE*)(v12 +
                                                                         385);
                                                        }
                                                      }
                                                      else {
                                                        v66 =
                                                            (_BYTE*)(v12 + 384);
                                                      }
                                                    }
                                                    else {
                                                      v66 = (_BYTE*)(v12 + 383);
                                                    }
                                                  }
                                                  else {
                                                    v66 = (_BYTE*)(v12 + 382);
                                                  }
                                                }
                                                else {
                                                  v66 = (_BYTE*)(v12 + 381);
                                                }
                                              }
                                              else {
                                                v66 = (_BYTE*)(v12 + 380);
                                              }
                                            }
                                            else {
                                              v66 = (_BYTE*)(v12 + 379);
                                            }
                                          }
                                          else {
                                            v66 = (_BYTE*)(v12 + 378);
                                          }
                                        }
                                        else {
                                          v66 = (_BYTE*)(v12 + 377);
                                        }
                                      }
                                      else {
                                        v66 = (_BYTE*)(v12 + 376);
                                      }
                                    }
                                    else {
                                      v66 = (_BYTE*)(v12 + 375);
                                    }
                                  }
                                  else {
                                    v66 = (_BYTE*)(v12 + 374);
                                  }
                                }
                                else {
                                  v66 = (_BYTE*)(v12 + 373);
                                }
                              }
                              else {
                                v66 = (_BYTE*)(v12 + 372);
                              }
                            }
                            else {
                              v66 = (_BYTE*)(v12 + 371);
                            }
                          }
                          else {
                            v66 = (_BYTE*)(v12 + 370);
                          }
                        }
                        else {
                          v66 = (_BYTE*)(v12 + 369);
                        }
                      }
                      else {
                        v66 = (_BYTE*)(v12 + 368);
                      }
                    }
                    else {
                      v66 = (_BYTE*)(v12 + 367);
                    }
                  }
                  else {
                    v66 = (_BYTE*)(v12 + 366);
                  }
                }
                else {
                  v66 = (_BYTE*)(v12 + 365);
                }
              }
              else {
                v66 = (_BYTE*)(v12 + 364);
              }
            }
            else {
              v66 = (_BYTE*)(v12 + 363);
            }
          }
          else {
            v66 = (_BYTE*)(v12 + 362);
          }
        LABEL_129:
          *v66 = 0;
          if (v117 != 0) {
            *(_BYTE*)(v12 + 393) = v117;
            if (v118 != 0) {
              *(_BYTE*)(v12 + 394) = v118;
              if (v119 != 0) {
                *(_BYTE*)(v12 + 395) = v119;
                if (v120 != 0) {
                  *(_BYTE*)(v12 + 396) = v120;
                  if (v121 != 0) {
                    *(_BYTE*)(v12 + 397) = v121;
                    if (v122 != 0) {
                      *(_BYTE*)(v12 + 398) = v122;
                      if (v123 != 0) {
                        *(_BYTE*)(v12 + 399) = v123;
                        if (v124 != 0) {
                          *(_BYTE*)(v12 + 400) = v124;
                          if (v125 != 0) {
                            *(_BYTE*)(v12 + 401) = v125;
                            if (v126 != 0) {
                              *(_BYTE*)(v12 + 402) = v126;
                              if (v127 != 0) {
                                *(_BYTE*)(v12 + 403) = v127;
                                if (v128 != 0) {
                                  *(_BYTE*)(v12 + 404) = v128;
                                  if (v129 != 0) {
                                    *(_BYTE*)(v12 + 405) = v129;
                                    if (v130 != 0) {
                                      *(_BYTE*)(v12 + 406) = v130;
                                      if (v131 != 0) {
                                        *(_BYTE*)(v12 + 407) = v131;
                                        if (v132 != 0) {
                                          *(_BYTE*)(v12 + 408) = v132;
                                          if (v133 != 0) {
                                            *(_BYTE*)(v12 + 409) = v133;
                                            if (v134 != 0) {
                                              *(_BYTE*)(v12 + 410) = v134;
                                              if (v135 != 0) {
                                                *(_BYTE*)(v12 + 411) = v135;
                                                if (v136 != 0) {
                                                  *(_BYTE*)(v12 + 412) = v136;
                                                  if (v137 != 0) {
                                                    *(_BYTE*)(v12 + 413) = v137;
                                                    if (v138 != 0) {
                                                      *(_BYTE*)(v12 + 414) =
                                                          v138;
                                                      if (v139 != 0) {
                                                        *(_BYTE*)(v12 + 415) =
                                                            v139;
                                                        if (v140 != 0) {
                                                          *(_BYTE*)(v12 + 416) =
                                                              v140;
                                                          if (v141 != 0) {
                                                            *(_BYTE*)(v12 +
                                                                      417) =
                                                                v141;
                                                            if (v142 != 0) {
                                                              *(_BYTE*)(v12 +
                                                                        418) =
                                                                  v142;
                                                              if (v143 != 0) {
                                                                *(_BYTE*)(v12 +
                                                                          419) =
                                                                    v143;
                                                                if (v144 != 0) {
                                                                  *(_BYTE*)(v12 +
                                                                            420) =
                                                                      v144;
                                                                  if (v145 !=
                                                                      0) {
                                                                    *(_BYTE*)(v12 +
                                                                              421) =
                                                                        v145;
                                                                    if (v146 !=
                                                                        0) {
                                                                      v67 =
                                                                          v147;
                                                                      *(_BYTE*)(v12 +
                                                                                422) =
                                                                          v146;
                                                                      if (v67 !=
                                                                          0) {
                                                                        v10 =
                                                                            (_BYTE*)(v12 +
                                                                                     424);
                                                                        *(_BYTE*)(v12 +
                                                                                  423) =
                                                                            v67;
                                                                      }
                                                                      else {
                                                                        v10 =
                                                                            (_BYTE*)(v12 +
                                                                                     423);
                                                                      }
                                                                    }
                                                                    else {
                                                                      v10 =
                                                                          (_BYTE*)(v12 +
                                                                                   422);
                                                                    }
                                                                  }
                                                                  else {
                                                                    v10 =
                                                                        (_BYTE*)(v12 +
                                                                                 421);
                                                                  }
                                                                }
                                                                else {
                                                                  v10 =
                                                                      (_BYTE*)(v12 +
                                                                               420);
                                                                }
                                                              }
                                                              else {
                                                                v10 =
                                                                    (_BYTE*)(v12 +
                                                                             419);
                                                              }
                                                            }
                                                            else {
                                                              v10 =
                                                                  (_BYTE*)(v12 +
                                                                           418);
                                                            }
                                                          }
                                                          else {
                                                            v10 = (_BYTE*)(v12 +
                                                                           417);
                                                          }
                                                        }
                                                        else {
                                                          v10 = (_BYTE*)(v12 +
                                                                         416);
                                                        }
                                                      }
                                                      else {
                                                        v10 =
                                                            (_BYTE*)(v12 + 415);
                                                      }
                                                    }
                                                    else {
                                                      v10 = (_BYTE*)(v12 + 414);
                                                    }
                                                  }
                                                  else {
                                                    v10 = (_BYTE*)(v12 + 413);
                                                  }
                                                }
                                                else {
                                                  v10 = (_BYTE*)(v12 + 412);
                                                }
                                              }
                                              else {
                                                v10 = (_BYTE*)(v12 + 411);
                                              }
                                            }
                                            else {
                                              v10 = (_BYTE*)(v12 + 410);
                                            }
                                          }
                                          else {
                                            v10 = (_BYTE*)(v12 + 409);
                                          }
                                        }
                                        else {
                                          v10 = (_BYTE*)(v12 + 408);
                                        }
                                      }
                                      else {
                                        v10 = (_BYTE*)(v12 + 407);
                                      }
                                    }
                                    else {
                                      v10 = (_BYTE*)(v12 + 406);
                                    }
                                  }
                                  else {
                                    v10 = (_BYTE*)(v12 + 405);
                                  }
                                }
                                else {
                                  v10 = (_BYTE*)(v12 + 404);
                                }
                              }
                              else {
                                v10 = (_BYTE*)(v12 + 403);
                              }
                            }
                            else {
                              v10 = (_BYTE*)(v12 + 402);
                            }
                          }
                          else {
                            v10 = (_BYTE*)(v12 + 401);
                          }
                        }
                        else {
                          v10 = (_BYTE*)(v12 + 400);
                        }
                      }
                      else {
                        v10 = (_BYTE*)(v12 + 399);
                      }
                    }
                    else {
                      v10 = (_BYTE*)(v12 + 398);
                    }
                  }
                  else {
                    v10 = (_BYTE*)(v12 + 397);
                  }
                }
                else {
                  v10 = (_BYTE*)(v12 + 396);
                }
              }
              else {
                v10 = (_BYTE*)(v12 + 395);
              }
            }
            else {
              v10 = (_BYTE*)(v12 + 394);
            }
          }
          else {
            v10 = (_BYTE*)(v12 + 393);
          }
          *v10 = 0;
          ++v8;
          v9 += 460;
          *(_WORD*)(v12 + 426) = v148;
          v7 = v157;
          if (v8 >= v157) {
            a2 = v72;
            *a1 = v157;
            if (v7 <= 31) {
              goto LABEL_221;
            }
            goto LABEL_224;
          }
        }
      }
    }
  }
  if (v158 != nullptr) {
    v71 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v158 + 8LL))(
        (void*)(v158), v158);
    return v71;
  }
  return result;
}

__int64 nn_nifm_ImportMigrationNetworkProfile(_DWORD* a1, int* a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 result;
  __int64 v9;
  int* v10;
  __int64 v11;
  int* v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  unsigned __int8* v17;
  unsigned int v19;
  bool v20;
  int v21;
  unsigned __int8* v23;
  __int64 v24;
  int v25;
  int v26;
  bool v27;
  __int64 v28;
  int v29;
  int* v30;
  int v31;
  bool v32;
  int v33;
  __int64 v34;
  int v35;
  int* v36;
  int* v37;
  __int64 v38;
  int* v39;
  __int64 v40;
  unsigned __int8* v41;
  char* v42;
  int v43;
  char* v44;
  int v45;
  char* v46;
  int v47;
  char* v48;
  int v49;
  char* v50;
  int v51;
  char* v52;
  int v53;
  char* v54;
  int v55;
  char* v56;
  int v57;
  char* v58;
  int v59;
  char* v60;
  int v61;
  int v62;
  char* v63;
  _BYTE* v64;
  __int64 v65;
  char v66;
  int v67;
  int v68;
  __int64 v69;
  char v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned __int8* v79;
  char* v80;
  int v81;
  char* v82;
  int v83;
  char* v84;
  int v85;
  char* v86;
  int v87;
  char* v88;
  int v89;
  int v90;
  char* v91;
  int v92;
  char* v93;
  char* v94;
  unsigned int v95;
  unsigned int v96;
  _DWORD* v97;
  int* v98;
  int v99;
  int v100;
  _QWORD v101[2];
  _QWORD v102[4];
  char v103;
  int v104;
  int v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  char v110;
  __int16 v111;
  _BYTE v112[100];
  char v113;
  char v114;
  char v115;
  char v116;
  char v117;
  char v118;
  char v119;
  char v120;
  char v121;
  char v122;
  char v123;
  char v124;
  char v125;
  char v126;
  char v127;
  char v128;
  char v129;
  char v130;
  char v131;
  char v132;
  char v133;
  char v134;
  char v135;
  char v136;
  char v137;
  char v138;
  char v139;
  char v140;
  char v141;
  char v142;
  char v143;
  char v144;
  int v145;
  char v146;
  char v147;
  char v148;
  char v149;
  char v150;
  char v151;
  char v152;
  char v153;
  char v154;
  char v155;
  char v156;
  char v157;
  char v158;
  char v159;
  char v160;
  char v161;
  char v162;
  char v163;
  char v164;
  char v165;
  char v166;
  char v167;
  char v168;
  char v169;
  char v170;
  char v171;
  char v172;
  char v173;
  int v174;
  __int64 v175;
  __int64 v176;
  _BYTE v177[70];
  _BYTE v178[34];
  char v179;
  _BYTE v180[71];
  _QWORD v181[4];
  _BYTE v182[81];
  _BYTE v183[3];
  __int64 v184;
  int v185;
  _QWORD* v186[4];

  if (*a2 > 1) {
    return 102510;
  }
  v186[2] = v2;
  v186[3] = v3;
  v186[0] = nullptr;
  result = nn_nifm_detail_GetGeneralServicePointer_plt(v186);
  if ((_DWORD)result == 0) {
    v185 = 0;
    memset_plt((void*)v182, nullptr, 3744);
    v102[0] = v182;
    v102[1] = 32;
    result = (*(__int64 (**)(_QWORD*, _QWORD*, int*, __int64))(
        *v186[0] + 72LL))(v186[0], v102, &v185, 1);
    if ((_DWORD)result == 0) {
      v97 = a1;
      v9 = (unsigned int)v185;
      v10 = a2 + 1;
      memset(v181, 0, sizeof(v181));
      v98 = a2;
      v100 = 32 - v185;
      if (v185 <= 0) {
        v28 = 31;
        v29 = 0;
        v30 = a2 + 3566;
        do {
          if (*(_OWORD*)v30 != 0 && v30[32] != 2) {
            v31 = v30[20];
            if ((unsigned int)(v31 - 1) <= 1) {
              if (v31 != 1 ||
                  ((unsigned int)*((unsigned __int8*)v30 + 87) - 33 >=
                           0xFFFFFFE0
                       ? (v32 = *((_BYTE*)v30 + 88) == 0)
                       : (v32 = true),
                   !v32 && (unsigned int)(v33 = v30[31]) <= 8 &&
                       ((1 << v33) & 0x156) != 0)) {
                if (v29 < v100) {
                  ++v29;
                  *((_BYTE*)v181 + v28) = 1;
                }
              }
            }
          }
          --v28;
          v30 -= 115;
        } while (v28 != -1);
      }
      else {
        v99 = 0;
        v11 = 31;
        do {
          v12 = &v10[115 * v11];
          v13 = v11;
          if (*(_OWORD*)v12 != 0) {
            v14 = v12[32];
            if (v14 != 2) {
              v15 = v12[20];
              if ((unsigned int)(v15 - 1) <= 1) {
                v16 = v9;
                v17 = v183;
                if (v15 == 1) {
                  if ((unsigned int)*((unsigned __int8*)v12 + 87) - 33 >=
                          0xFFFFFFE0 &&
                      *((_BYTE*)v12 + 88) != 0) {
                    v19 = v12[31];
                    v20 = v19 > 8;
                    v21 = (1 << v19) & 0x156;
                    if (!v20 && v21 != 0) {
                      v23 = (unsigned __int8*)&v184;
                      v24 = v9;
                      while (1) {
                        if (*(v23 - 35) == 1) {
                          v26 = *((unsigned __int8*)v12 + 87);
                          v27 = (unsigned int)memcmp_plt(
                                    v12 + 22, v23 - 33,
                                    *((unsigned __int8*)v12 + 87)) == 0 &&
                                v26 == *(v23 - 34);
                          if (v27 && v12[31] == *(v23 - 1) && v14 == *v23) {
                            break;
                          }
                        }
                        v23 += 117;
                        if (--v24 == 0) {
                          goto LABEL_22;
                        }
                      }
                    }
                  }
                }
                else {
                  while (1) {
                    v25 = *v17;
                    v17 += 117;
                    if (v25 == 2) {
                      break;
                    }
                    if (--v16 == 0) {
                    LABEL_22:
                      if (v99 < v100) {
                        ++v99;
                        *((_BYTE*)v181 + v13) = 1;
                      }
                      break;
                    }
                  }
                }
              }
            }
          }
          v11 = v13 - 1;
        } while (v13 != 0);
      }
      memset_plt((void*)v102, nullptr, 436);
      v34 = 0;
      v35 = 0;
      v36 = v98 + 5;
      v37 = v98 + 66;
      do {
        if (*((_BYTE*)v181 + v34) != 0) {
          v38 = 0;
          v39 = &v10[115 * v34];
          v40 = *((_QWORD*)v39 + 1);
          v175 = *(_QWORD*)v39;
          v176 = v40;
          while (1) {
            v41 = (unsigned __int8*)v36 + v38;
            v42 = (char*)v102 + v38;
            if (*((_BYTE*)v36 + v38) == 0) {
              v64 = v42 + 264;
              goto LABEL_98;
            }
            v43 = v41[1];
            v42[264] = *((_BYTE*)v36 + v38);
            if (v43 == 0) {
              v64 = &v177[v38 + 1];
              goto LABEL_98;
            }
            v42[265] = v43;
            v44 = (char*)v102 + v38;
            if (v41[2] == 0) {
              v64 = v44 + 266;
              goto LABEL_98;
            }
            v45 = v41[3];
            v44[266] = v41[2];
            if (v45 == 0) {
              v64 = &v177[v38 + 3];
              goto LABEL_98;
            }
            v44[267] = v45;
            v46 = (char*)v102 + v38;
            if (v41[4] == 0) {
              v64 = v46 + 268;
              goto LABEL_98;
            }
            v47 = v41[5];
            v46[268] = v41[4];
            if (v47 == 0) {
              v64 = &v177[v38 + 5];
              goto LABEL_98;
            }
            v46[269] = v47;
            v48 = (char*)v102 + v38;
            if (v41[6] == 0) {
              v64 = v48 + 270;
              goto LABEL_98;
            }
            v49 = v41[7];
            v48[270] = v41[6];
            if (v49 == 0) {
              v64 = &v177[v38 + 7];
              goto LABEL_98;
            }
            v48[271] = v49;
            v50 = (char*)v102 + v38;
            if (v41[8] == 0) {
              v64 = v50 + 272;
              goto LABEL_98;
            }
            v51 = v41[9];
            v50[272] = v41[8];
            if (v51 == 0) {
              v64 = &v177[v38 + 9];
              goto LABEL_98;
            }
            v50[273] = v51;
            v52 = (char*)v102 + v38;
            if (v41[10] == 0) {
              v64 = v52 + 274;
              goto LABEL_98;
            }
            v53 = v41[11];
            v52[274] = v41[10];
            if (v53 == 0) {
              v64 = &v177[v38 + 11];
              goto LABEL_98;
            }
            v52[275] = v53;
            v54 = (char*)v102 + v38;
            if (v41[12] == 0) {
              v64 = v54 + 276;
              goto LABEL_98;
            }
            v55 = v41[13];
            v54[276] = v41[12];
            if (v55 == 0) {
              v64 = &v177[v38 + 13];
              goto LABEL_98;
            }
            v54[277] = v55;
            v56 = (char*)v102 + v38;
            if (v41[14] == 0) {
              v64 = v56 + 278;
              goto LABEL_98;
            }
            v57 = v41[15];
            v56[278] = v41[14];
            if (v57 == 0) {
              v64 = &v177[v38 + 15];
              goto LABEL_98;
            }
            v56[279] = v57;
            v58 = (char*)v102 + v38;
            if (v41[16] == 0) {
              v64 = v58 + 280;
              goto LABEL_98;
            }
            v59 = v41[17];
            v58[280] = v41[16];
            if (v59 == 0) {
              v64 = &v177[v38 + 17];
              goto LABEL_98;
            }
            v58[281] = v59;
            v60 = (char*)v102 + v38;
            if (v41[18] == 0) {
              v64 = v60 + 282;
              goto LABEL_98;
            }
            v61 = v41[19];
            v60[282] = v41[18];
            if (v61 == 0) {
              v64 = &v177[v38 + 19];
              goto LABEL_98;
            }
            v62 = v41[20];
            v63 = (char*)v102 + v38;
            v60[283] = v61;
            if (v62 == 0) {
              break;
            }
            v38 += 21;
            v63[284] = v62;
            if ((_DWORD)v38 == 63) {
              v64 = &v177[v38];
              goto LABEL_98;
            }
          }
          v64 = v63 + 284;
        LABEL_98:
          *v64 = 0;
          v65 = *((unsigned __int8*)v39 + 87);
          v177[64] = 1;
          v177[65] = v39[20];
          v177[66] = *((_BYTE*)v39 + 84);
          *(_WORD*)&v177[67] = *(_WORD*)((char*)v39 + 85);
          memcpy_plt(v178, v39 + 22, v65);
          v66 = *((_BYTE*)v39 + 121);
          v67 = v39[31];
          v68 = v39[32];
          v69 = 0;
          v177[69] = v65;
          v102[2] = 0;
          v102[3] = 0;
          v178[32] = v66;
          v70 = *((_BYTE*)v39 + 132);
          v178[33] = v67;
          v71 = *(_QWORD*)((char*)v39 + 165);
          v179 = v68;
          v72 = *(_QWORD*)((char*)v39 + 173);
          v180[0] = v70;
          v73 = *(_QWORD*)((char*)v39 + 181);
          *(_QWORD*)&v180[33] = v71;
          *(_QWORD*)&v180[41] = v72;
          v74 = *(_QWORD*)((char*)v39 + 189);
          *(_QWORD*)&v180[49] = v73;
          *(_QWORD*)&v180[57] = v74;
          v75 = *(_QWORD*)((char*)v39 + 141);
          *(_QWORD*)&v180[1] = *(_QWORD*)((char*)v39 + 133);
          *(_QWORD*)&v180[9] = v75;
          v76 = *(_QWORD*)((char*)v39 + 157);
          *(_QWORD*)&v180[17] = *(_QWORD*)((char*)v39 + 149);
          *(_QWORD*)&v180[25] = v76;
          LOBYTE(v102[0]) = *((_BYTE*)v39 + 197);
          *(_QWORD*)((char*)v102 + 4) = *((_QWORD*)v39 + 25);
          HIDWORD(v102[1]) = v39[52];
          v103 = *((_BYTE*)v39 + 212);
          LODWORD(v76) = v39[55];
          v104 = v39[54];
          v105 = v76;
          v77 = *((_QWORD*)v39 + 28);
          v107 = *((_QWORD*)v39 + 29);
          v106 = v77;
          v78 = *((_QWORD*)v39 + 30);
          v109 = *((_QWORD*)v39 + 31);
          LOBYTE(v73) = *((_BYTE*)v39 + 256);
          v108 = v78;
          v110 = v73;
          v111 = *((_WORD*)v39 + 129);
          while (1) {
            v79 = (unsigned __int8*)v37 + v69;
            v80 = (char*)v102 + v69;
            if (*((_BYTE*)v37 + v69) == 0) {
              v80[80] = 0;
              v92 = *((unsigned __int8*)v39 + 361);
              v113 = *((_BYTE*)v39 + 360);
              v93 = &v114;
              if (v92 == 0) {
                goto LABEL_165;
              }
              goto LABEL_134;
            }
            v81 = v79[1];
            v80[80] = *((_BYTE*)v37 + v69);
            if (v81 == 0) {
              v112[v69 + 1] = 0;
              v92 = *((unsigned __int8*)v39 + 361);
              v113 = *((_BYTE*)v39 + 360);
              v93 = &v114;
              if (v92 == 0) {
                goto LABEL_165;
              }
              goto LABEL_134;
            }
            v80[81] = v81;
            v82 = (char*)v102 + v69;
            if (v79[2] == 0) {
              v82[82] = 0;
              v92 = *((unsigned __int8*)v39 + 361);
              v113 = *((_BYTE*)v39 + 360);
              v93 = &v114;
              if (v92 == 0) {
                goto LABEL_165;
              }
              goto LABEL_134;
            }
            v83 = v79[3];
            v82[82] = v79[2];
            if (v83 == 0) {
              v112[v69 + 3] = 0;
              v92 = *((unsigned __int8*)v39 + 361);
              v113 = *((_BYTE*)v39 + 360);
              v93 = &v114;
              if (v92 == 0) {
                goto LABEL_165;
              }
              goto LABEL_134;
            }
            v82[83] = v83;
            v84 = (char*)v102 + v69;
            if (v79[4] == 0) {
              v84[84] = 0;
              v92 = *((unsigned __int8*)v39 + 361);
              v113 = *((_BYTE*)v39 + 360);
              v93 = &v114;
              if (v92 == 0) {
                goto LABEL_165;
              }
              goto LABEL_134;
            }
            v85 = v79[5];
            v84[84] = v79[4];
            if (v85 == 0) {
              v112[v69 + 5] = 0;
              v92 = *((unsigned __int8*)v39 + 361);
              v113 = *((_BYTE*)v39 + 360);
              v93 = &v114;
              if (v92 == 0) {
                goto LABEL_165;
              }
              goto LABEL_134;
            }
            v84[85] = v85;
            v86 = (char*)v102 + v69;
            if (v79[6] == 0) {
              v86[86] = 0;
              v92 = *((unsigned __int8*)v39 + 361);
              v113 = *((_BYTE*)v39 + 360);
              v93 = &v114;
              if (v92 == 0) {
                goto LABEL_165;
              }
              goto LABEL_134;
            }
            v87 = v79[7];
            v86[86] = v79[6];
            if (v87 == 0) {
              v112[v69 + 7] = 0;
              v92 = *((unsigned __int8*)v39 + 361);
              v113 = *((_BYTE*)v39 + 360);
              v93 = &v114;
              if (v92 == 0) {
                goto LABEL_165;
              }
              goto LABEL_134;
            }
            v86[87] = v87;
            v88 = (char*)v102 + v69;
            if (v79[8] == 0) {
              v88[88] = 0;
              v92 = *((unsigned __int8*)v39 + 361);
              v113 = *((_BYTE*)v39 + 360);
              v93 = &v114;
              if (v92 == 0) {
                goto LABEL_165;
              }
              goto LABEL_134;
            }
            v89 = v79[9];
            v88[88] = v79[8];
            if (v89 == 0) {
              v112[v69 + 9] = 0;
              v92 = *((unsigned __int8*)v39 + 361);
              v113 = *((_BYTE*)v39 + 360);
              v93 = &v114;
              if (v92 == 0) {
                goto LABEL_165;
              }
              goto LABEL_134;
            }
            v90 = v79[10];
            v91 = (char*)v102 + v69;
            v88[89] = v89;
            if (v90 == 0) {
              break;
            }
            v69 += 11;
            v91[90] = v90;
            if ((_DWORD)v69 == 99) {
              v112[v69] = 0;
              v92 = *((unsigned __int8*)v39 + 361);
              v113 = *((_BYTE*)v39 + 360);
              v93 = &v114;
              if (v92 == 0) {
                goto LABEL_165;
              }
              goto LABEL_134;
            }
          }
          v91[90] = 0;
          v92 = *((unsigned __int8*)v39 + 361);
          v113 = *((_BYTE*)v39 + 360);
          v93 = &v114;
          if (v92 != 0) {
          LABEL_134:
            v114 = v92;
            v93 = &v115;
            if (*((_BYTE*)v39 + 362) != 0) {
              v115 = *((_BYTE*)v39 + 362);
              v93 = &v116;
              if (*((_BYTE*)v39 + 363) != 0) {
                v116 = *((_BYTE*)v39 + 363);
                v93 = &v117;
                if (*((_BYTE*)v39 + 364) != 0) {
                  v117 = *((_BYTE*)v39 + 364);
                  v93 = &v118;
                  if (*((_BYTE*)v39 + 365) != 0) {
                    v118 = *((_BYTE*)v39 + 365);
                    v93 = &v119;
                    if (*((_BYTE*)v39 + 366) != 0) {
                      v119 = *((_BYTE*)v39 + 366);
                      v93 = &v120;
                      if (*((_BYTE*)v39 + 367) != 0) {
                        v120 = *((_BYTE*)v39 + 367);
                        v93 = &v121;
                        if (*((_BYTE*)v39 + 368) != 0) {
                          v121 = *((_BYTE*)v39 + 368);
                          v93 = &v122;
                          if (*((_BYTE*)v39 + 369) != 0) {
                            v122 = *((_BYTE*)v39 + 369);
                            v93 = &v123;
                            if (*((_BYTE*)v39 + 370) != 0) {
                              v123 = *((_BYTE*)v39 + 370);
                              v93 = &v124;
                              if (*((_BYTE*)v39 + 371) != 0) {
                                v124 = *((_BYTE*)v39 + 371);
                                v93 = &v125;
                                if (*((_BYTE*)v39 + 372) != 0) {
                                  v125 = *((_BYTE*)v39 + 372);
                                  v93 = &v126;
                                  if (*((_BYTE*)v39 + 373) != 0) {
                                    v126 = *((_BYTE*)v39 + 373);
                                    v93 = &v127;
                                    if (*((_BYTE*)v39 + 374) != 0) {
                                      v127 = *((_BYTE*)v39 + 374);
                                      v93 = &v128;
                                      if (*((_BYTE*)v39 + 375) != 0) {
                                        v128 = *((_BYTE*)v39 + 375);
                                        v93 = &v129;
                                        if (*((_BYTE*)v39 + 376) != 0) {
                                          v129 = *((_BYTE*)v39 + 376);
                                          v93 = &v130;
                                          if (*((_BYTE*)v39 + 377) != 0) {
                                            v130 = *((_BYTE*)v39 + 377);
                                            v93 = &v131;
                                            if (*((_BYTE*)v39 + 378) != 0) {
                                              v131 = *((_BYTE*)v39 + 378);
                                              v93 = &v132;
                                              if (*((_BYTE*)v39 + 379) != 0) {
                                                v132 = *((_BYTE*)v39 + 379);
                                                v93 = &v133;
                                                if (*((_BYTE*)v39 + 380) != 0) {
                                                  v133 = *((_BYTE*)v39 + 380);
                                                  v93 = &v134;
                                                  if (*((_BYTE*)v39 + 381) !=
                                                      0) {
                                                    v134 = *((_BYTE*)v39 + 381);
                                                    v93 = &v135;
                                                    if (*((_BYTE*)v39 + 382) !=
                                                        0) {
                                                      v135 =
                                                          *((_BYTE*)v39 + 382);
                                                      v93 = &v136;
                                                      if (*((_BYTE*)v39 +
                                                            383) != 0) {
                                                        v136 = *((_BYTE*)v39 +
                                                                 383);
                                                        v93 = &v137;
                                                        if (*((_BYTE*)v39 +
                                                              384) != 0) {
                                                          v137 = *((_BYTE*)v39 +
                                                                   384);
                                                          v93 = &v138;
                                                          if (*((_BYTE*)v39 +
                                                                385) != 0) {
                                                            v138 =
                                                                *((_BYTE*)v39 +
                                                                  385);
                                                            v93 = &v139;
                                                            if (*((_BYTE*)v39 +
                                                                  386) != 0) {
                                                              v139 = *(
                                                                  (_BYTE*)v39 +
                                                                  386);
                                                              v93 = &v140;
                                                              if (*((_BYTE*)
                                                                        v39 +
                                                                    387) != 0) {
                                                                v140 =
                                                                    *((_BYTE*)
                                                                          v39 +
                                                                      387);
                                                                v93 = &v141;
                                                                if (*((_BYTE*)
                                                                          v39 +
                                                                      388) !=
                                                                    0) {
                                                                  v141 = *(
                                                                      (_BYTE*)
                                                                          v39 +
                                                                      388);
                                                                  v93 = &v142;
                                                                  if (*((_BYTE*)
                                                                            v39 +
                                                                        389) !=
                                                                      0) {
                                                                    v142 = *(
                                                                        (_BYTE*)
                                                                            v39 +
                                                                        389);
                                                                    v93 = &v143;
                                                                    if (*((_BYTE*)
                                                                              v39 +
                                                                          390) !=
                                                                        0) {
                                                                      v143 = *(
                                                                          (_BYTE*)
                                                                              v39 +
                                                                          390);
                                                                      v93 =
                                                                          &v144;
                                                                      if (*((_BYTE*)
                                                                                v39 +
                                                                            391) !=
                                                                          0) {
                                                                        v93 =
                                                                            (char*)&v145;
                                                                        v144 = *(
                                                                            (_BYTE*)
                                                                                v39 +
                                                                            391);
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        LABEL_165:
          *v93 = 0;
          v94 = (char*)&v145 + 1;
          if (*((_BYTE*)v39 + 393) != 0) {
            BYTE1(v145) = *((_BYTE*)v39 + 393);
            v94 = (char*)&v145 + 2;
            if (*((_BYTE*)v39 + 394) != 0) {
              BYTE2(v145) = *((_BYTE*)v39 + 394);
              v94 = (char*)&v145 + 3;
              if (*((_BYTE*)v39 + 395) != 0) {
                HIBYTE(v145) = *((_BYTE*)v39 + 395);
                v94 = &v146;
                if (*((_BYTE*)v39 + 396) != 0) {
                  v146 = *((_BYTE*)v39 + 396);
                  v94 = &v147;
                  if (*((_BYTE*)v39 + 397) != 0) {
                    v147 = *((_BYTE*)v39 + 397);
                    v94 = &v148;
                    if (*((_BYTE*)v39 + 398) != 0) {
                      v148 = *((_BYTE*)v39 + 398);
                      v94 = &v149;
                      if (*((_BYTE*)v39 + 399) != 0) {
                        v149 = *((_BYTE*)v39 + 399);
                        v94 = &v150;
                        if (*((_BYTE*)v39 + 400) != 0) {
                          v150 = *((_BYTE*)v39 + 400);
                          v94 = &v151;
                          if (*((_BYTE*)v39 + 401) != 0) {
                            v151 = *((_BYTE*)v39 + 401);
                            v94 = &v152;
                            if (*((_BYTE*)v39 + 402) != 0) {
                              v152 = *((_BYTE*)v39 + 402);
                              v94 = &v153;
                              if (*((_BYTE*)v39 + 403) != 0) {
                                v153 = *((_BYTE*)v39 + 403);
                                v94 = &v154;
                                if (*((_BYTE*)v39 + 404) != 0) {
                                  v154 = *((_BYTE*)v39 + 404);
                                  v94 = &v155;
                                  if (*((_BYTE*)v39 + 405) != 0) {
                                    v155 = *((_BYTE*)v39 + 405);
                                    v94 = &v156;
                                    if (*((_BYTE*)v39 + 406) != 0) {
                                      v156 = *((_BYTE*)v39 + 406);
                                      v94 = &v157;
                                      if (*((_BYTE*)v39 + 407) != 0) {
                                        v157 = *((_BYTE*)v39 + 407);
                                        v94 = &v158;
                                        if (*((_BYTE*)v39 + 408) != 0) {
                                          v158 = *((_BYTE*)v39 + 408);
                                          v94 = &v159;
                                          if (*((_BYTE*)v39 + 409) != 0) {
                                            v159 = *((_BYTE*)v39 + 409);
                                            v94 = &v160;
                                            if (*((_BYTE*)v39 + 410) != 0) {
                                              v160 = *((_BYTE*)v39 + 410);
                                              v94 = &v161;
                                              if (*((_BYTE*)v39 + 411) != 0) {
                                                v161 = *((_BYTE*)v39 + 411);
                                                v94 = &v162;
                                                if (*((_BYTE*)v39 + 412) != 0) {
                                                  v162 = *((_BYTE*)v39 + 412);
                                                  v94 = &v163;
                                                  if (*((_BYTE*)v39 + 413) !=
                                                      0) {
                                                    v163 = *((_BYTE*)v39 + 413);
                                                    v94 = &v164;
                                                    if (*((_BYTE*)v39 + 414) !=
                                                        0) {
                                                      v164 =
                                                          *((_BYTE*)v39 + 414);
                                                      v94 = &v165;
                                                      if (*((_BYTE*)v39 +
                                                            415) != 0) {
                                                        v165 = *((_BYTE*)v39 +
                                                                 415);
                                                        v94 = &v166;
                                                        if (*((_BYTE*)v39 +
                                                              416) != 0) {
                                                          v166 = *((_BYTE*)v39 +
                                                                   416);
                                                          v94 = &v167;
                                                          if (*((_BYTE*)v39 +
                                                                417) != 0) {
                                                            v167 =
                                                                *((_BYTE*)v39 +
                                                                  417);
                                                            v94 = &v168;
                                                            if (*((_BYTE*)v39 +
                                                                  418) != 0) {
                                                              v168 = *(
                                                                  (_BYTE*)v39 +
                                                                  418);
                                                              v94 = &v169;
                                                              if (*((_BYTE*)
                                                                        v39 +
                                                                    419) != 0) {
                                                                v169 =
                                                                    *((_BYTE*)
                                                                          v39 +
                                                                      419);
                                                                v94 = &v170;
                                                                if (*((_BYTE*)
                                                                          v39 +
                                                                      420) !=
                                                                    0) {
                                                                  v170 = *(
                                                                      (_BYTE*)
                                                                          v39 +
                                                                      420);
                                                                  v94 = &v171;
                                                                  if (*((_BYTE*)
                                                                            v39 +
                                                                        421) !=
                                                                      0) {
                                                                    v171 = *(
                                                                        (_BYTE*)
                                                                            v39 +
                                                                        421);
                                                                    v94 = &v172;
                                                                    if (*((_BYTE*)
                                                                              v39 +
                                                                          422) !=
                                                                        0) {
                                                                      v172 = *(
                                                                          (_BYTE*)
                                                                              v39 +
                                                                          422);
                                                                      v94 =
                                                                          &v173;
                                                                      if (*((_BYTE*)
                                                                                v39 +
                                                                            423) !=
                                                                          0) {
                                                                        v94 =
                                                                            (char*)&v174;
                                                                        v173 = *(
                                                                            (_BYTE*)
                                                                                v39 +
                                                                            423);
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          *v94 = 0;
          v95 = *((unsigned __int16*)v39 + 213);
          v175 = 0;
          v176 = 0;
          HIWORD(v174) = v95;
          if (v179 == 1) {
            memset(v180, 0, 65);
          }
          if (v95 <= 0x4FF) {
            HIWORD(v174) = 1280;
          }
          v101[1] = 0;
          v101[0] = 0;
          result = (*(__int64 (**)(_QWORD*, _QWORD*, _QWORD*))(
              *v186[0] + 504LL))(v186[0], v101, v102);
          if ((_DWORD)result != 0) {
            goto LABEL_202;
          }
          ++v35;
        }
        ++v34;
        v36 += 115;
        v37 += 115;
      } while (v34 != 32);
      result = 0;
      *v97 = v35;
    }
  }
LABEL_202:
  if (v186[0] != nullptr) {
    v96 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
        *v186[0] + 8LL))((void*)(v186[0]), v186[0]);
    return v96;
  }
  return result;
}

#pragma GCC visibility pop
