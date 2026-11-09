#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)
struct PseudoSret {
  _QWORD words[3];
};

extern char GameData_1a9f09e;
extern __int64 (*GameData_1fde958[7])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212c330[2];
extern __int64* GameData_212c370;
extern __int64* GameData_212cc00[71];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_21a6070;
extern __int64 GameData_22127a8;
__int64 GameRoutine_1a09c60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a8e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6b7aa0(_QWORD);
__int64 GameRoutine_7a86e0(_QWORD);
__int64 GameRoutine_d90ae0(_QWORD, _QWORD);
struct PseudoSret GameRoutine_d9bf20(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameHr_d8d760(unsigned __int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int8* v14;
  unsigned __int8* v15;
  unsigned __int64 v16;
  bool v17;
  __int64 v18;
  unsigned __int8* v19;
  __int64 v20;
  unsigned __int8* v21;
  __int64 v22;
  unsigned __int64 v23;
  char* v24;
  __int64 v25;
  _DWORD* v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int8* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int8* v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  bool v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int8* v47;
  unsigned __int8* v48;
  unsigned __int64 v49;
  bool v50;
  __int64 v51;
  unsigned __int8* v52;
  __int64 v53;
  unsigned __int8* v54;
  __int64 v55;
  unsigned __int64 v56;
  char* v57;
  __int64 v58;
  _DWORD* v59;
  __int64 v60;
  __int64 v61;
  _QWORD* v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  bool v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  bool v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  bool v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  __int64 result;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  bool v106;
  __int64 v107;
  __int64 v108;
  _DWORD* v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  char v113;
  char v114;

  v1 = *(unsigned __int8*)(a1 + 568);
  v2 = *(_QWORD*)(a1 + 576);
  v3 = a1;
  if ((v1 & 1) == 0) {
    v2 = v1 >> 1;
  }
  if (v2 == 0) {
    goto LABEL_33;
  }
  if ((v1 & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 584);
  }
  else {
    v4 = a1 + 569;
  }
  a1 = GameRoutine_7a86e0(v4);
  if (a1 == 0) {
    goto LABEL_31;
  }
  v5 = *(_QWORD*)(*GameData_212cc00[0] + 96);
  if (v5 == 0 || *(_QWORD*)(*GameData_212cc00[0] + 112) == 0) {
    goto LABEL_31;
  }
  v7 = v5 - 1;
  if ((v5 & (v5 - 1)) != 0) {
    v8 = a1;
    if (a1 >= v5) {
      v8 = a1 % v5;
    }
  }
  else {
    v8 = v7 & a1;
  }
  v9 = *(_QWORD**)(*(_QWORD*)(*GameData_212cc00[0] + 88) + 8 * v8);
  if (v9 == nullptr || (v10 = (_QWORD*)*v9) == nullptr) {
  LABEL_31:
    v12 = 0;
    goto LABEL_32;
  }
  if ((v5 & v7) == 0) {
    while (1) {
      v13 = v10[1];
      if (v13 == a1) {
        if (v10[2] == a1) {
          goto LABEL_232;
        }
      }
      else if ((v13 & v7) != v8) {
        goto LABEL_31;
      }
      v10 = (_QWORD*)*v10;
      v12 = 0;
      if (v10 == nullptr) {
        goto LABEL_32;
      }
    }
  }
  while (1) {
    v11 = v10[1];
    if (v11 == a1) {
      break;
    }
    if (v11 >= v5) {
      v11 %= v5;
    }
    if (v11 != v8) {
      goto LABEL_31;
    }
  LABEL_21:
    v10 = (_QWORD*)*v10;
    if (v10 == nullptr) {
      goto LABEL_31;
    }
  }
  if (v10[2] != a1) {
    goto LABEL_21;
  }
LABEL_232:
  v12 = v10[3];
LABEL_32:
  *(_QWORD*)(v3 + 592) = v12;
LABEL_33:
  v14 = *(unsigned __int8**)(v3 + 520);
  v15 = *(unsigned __int8**)(v3 + 512);
  if (v14 != v15) {
    while (2) {
      v16 = *v15;
      v17 = (v16 & 1) == 0;
      v18 = v16 >> 1;
      if (v17) {
        v19 = v15 + 1;
      }
      else {
        v19 = *((unsigned __int8**)v15 + 2);
      }
      if (v17) {
        v20 = v18;
      }
      else {
        v20 = *((_QWORD*)v15 + 1);
      }
      if (v20 >= 4) {
        v21 = &v19[v20];
        v22 = v20;
        a1 = (unsigned __int64)v19;
        do {
          a1 = GameRoutine_1a09c60(a1, 80, v22 - 3);
          if (a1 == 0) {
            break;
          }
          if (*(_DWORD*)a1 == 1598310736) {
            if ((unsigned __int8*)a1 != v21 && a1 - (_QWORD)v19 != -1) {
              goto LABEL_63;
            }
            break;
          }
          v22 = (__int64)&v21[-++a1];
        } while ((__int64)&v21[-a1] >= 4);
      }
      v23 = v20 + 4;
      if ((unsigned __int64)(v20 + 4) >= 0xFFFFFFFFFFFFFFF7LL) {
      LABEL_233:
        GameRoutine_60a1d0(a1);
      }
      if (v23 >= 0x17) {
        if ((v23 | 7) == 0x17) {
          v25 = 26;
        }
        else {
          v25 = (v23 | 7) + 1;
        }
        v26 =
            (_DWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v25, 16, 0);
        v108 = v20 + 4;
        v109 = v26;
        *v26 = 1598310736;
        v24 = (char*)(v26 + 1);
        v107 = v25 | 1;
      }
      else {
        v108 = 0;
        v109 = nullptr;
        HIDWORD(v107) = 0;
        v24 = (char*)&v107 + 5;
        *(_DWORD*)((char*)&v107 + 1) = 1598310736;
        LOBYTE(v107) = 2 * v23;
        if (v20 == 0) {
        LABEL_57:
          v24[v20] = 0;
          if ((*v15 & 1) != 0) {
            v27 = *((_QWORD*)v15 + 2);
            if (v27 != 0) {
              v28 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v28 = 56;
              }
              a1 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v28, v27);
            }
          }
          *(_QWORD*)v15 = v107;
          *((_QWORD*)v15 + 1) = v108;
          *((_QWORD*)v15 + 2) = v109;
        LABEL_63:
          v15 += 24;
          if (v15 == v14) {
            v14 = *(unsigned __int8**)(v3 + 520);
            v15 = *(unsigned __int8**)(v3 + 512);
            goto LABEL_65;
          }
          continue;
        }
      }
      break;
    }
    a1 = GameRoutine_1a0b940(v24, v19, v20);
    goto LABEL_57;
  }
LABEL_65:
  if (v14 != v15) {
    v30 = (unsigned __int8*)(v3 + 88);
    v29 = *(unsigned __int8*)(v3 + 88);
    v31 = *(_QWORD*)(v3 + 96);
    if ((v29 & 1) == 0) {
      v31 = v29 >> 1;
    }
    if (v31 == 0) {
      if (v30 != v15) {
        v32 = *v15;
        if ((v29 & 1) != 0) {
          if ((v32 & 1) != 0) {
            v35 = *((unsigned __int8**)v15 + 2);
          }
          else {
            v35 = v15 + 1;
          }
          if ((v32 & 1) != 0) {
            v36 = *((_QWORD*)v15 + 1);
          }
          else {
            v36 = v32 >> 1;
          }
          a1 = GameRoutine_64dde0(v3 + 88, v35, v36);
        }
        else if ((v32 & 1) != 0) {
          a1 = GameRoutine_64df20(v3 + 88, *((_QWORD*)v15 + 2),
                                  *((_QWORD*)v15 + 1));
        }
        else {
          v33 = *(_QWORD*)v15;
          v34 = *((_QWORD*)v15 + 2);
          *(_QWORD*)(v3 + 96) = *((_QWORD*)v15 + 1);
          *(_QWORD*)(v3 + 104) = v34;
          *(_QWORD*)v30 = v33;
        }
      }
      v37 = *(unsigned __int8*)(v3 + 112);
      v38 = *(_QWORD*)(v3 + 120);
      if ((v37 & 1) == 0) {
        v38 = v37 >> 1;
      }
      if (v38 == 0) {
        v39 = *v30;
        if ((v37 & 1) != 0) {
          v41 = (v39 & 1) == 0;
          v42 = v39 >> 1;
          if (v41) {
            v43 = v3 + 89;
          }
          else {
            v43 = *(_QWORD*)(v3 + 104);
          }
          if (v41) {
            v44 = v42;
          }
          else {
            v44 = *(_QWORD*)(v3 + 96);
          }
          a1 = GameRoutine_64dde0(v3 + 112, v43, v44);
        }
        else if ((v39 & 1) != 0) {
          a1 = GameRoutine_64df20(v3 + 112, *(_QWORD*)(v3 + 104),
                                  *(_QWORD*)(v3 + 96));
        }
        else {
          v40 = *(_QWORD*)(v3 + 96);
          *(_QWORD*)(v3 + 112) = *(_QWORD*)v30;
          *(_QWORD*)(v3 + 120) = v40;
          *(_QWORD*)(v3 + 128) = *(_QWORD*)(v3 + 104);
        }
        v45 = *(unsigned __int8*)(v3 + 112);
        v46 = *(_QWORD*)(v3 + 120);
        if ((v45 & 1) == 0) {
          v46 = v45 >> 1;
        }
        if (v46 >= 4) {
          if ((v45 & 1) != 0) {
            v103 = *(_QWORD*)(v3 + 128);
          }
          else {
            v103 = v3 + 113;
          }
          v104 = v103 + v46;
        LABEL_218:
          a1 = v103;
          do {
            a1 = GameRoutine_1a09c60(a1, 80, v46 - 3);
            if (a1 == 0) {
              break;
            }
            if (*(_DWORD*)a1 == 1598310736) {
              if (a1 != v104 && a1 - v103 != -1) {
                a1 = GameRoutine_1a0a8e0(v3 + 112, a1 - v103, 4,
                                         &GameData_1a9f09e, 0);
                v105 = *(unsigned __int8*)(v3 + 112);
                v106 = (v105 & 1) == 0;
                v46 = v105 >> 1;
                if (v106) {
                  v103 = v3 + 113;
                }
                else {
                  v103 = *(_QWORD*)(v3 + 128);
                }
                if (!v106) {
                  v46 = *(_QWORD*)(v3 + 120);
                }
                v104 = v103 + v46;
                if (v46 > 3) {
                  goto LABEL_218;
                }
              }
              break;
            }
            ++a1;
            v46 = v104 - a1;
          } while ((__int64)(v104 - a1) >= 4);
        }
      }
    }
  }
  v47 = *(unsigned __int8**)(v3 + 160);
  v48 = *(unsigned __int8**)(v3 + 168);
  if (v47 != v48) {
    while (2) {
      v49 = *v47;
      v50 = (v49 & 1) == 0;
      v51 = v49 >> 1;
      if (v50) {
        v52 = v47 + 1;
      }
      else {
        v52 = *((unsigned __int8**)v47 + 2);
      }
      if (v50) {
        v53 = v51;
      }
      else {
        v53 = *((_QWORD*)v47 + 1);
      }
      if (v53 < 4) {
        goto LABEL_113;
      }
      v54 = &v52[v53];
      v55 = v53;
      a1 = (unsigned __int64)v52;
      while (1) {
        a1 = GameRoutine_1a09c60(a1, 65, v55 - 3);
        if (a1 == 0) {
          goto LABEL_113;
        }
        if (*(_DWORD*)a1 == 1598310721) {
          break;
        }
        v55 = (__int64)&v54[-++a1];
        if ((__int64)&v54[-a1] < 4) {
          goto LABEL_113;
        }
      }
      if ((unsigned __int8*)a1 == v54 || a1 - (_QWORD)v52 == -1) {
      LABEL_113:
        v56 = v53 + 4;
        if ((unsigned __int64)(v53 + 4) >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_233;
        }
        if (v56 >= 0x17) {
          if ((v56 | 7) == 0x17) {
            v58 = 26;
          }
          else {
            v58 = (v56 | 7) + 1;
          }
          v59 = (_DWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v58, 16,
                                            0);
          v108 = v53 + 4;
          v109 = v59;
          *v59 = 1598310721;
          v57 = (char*)(v59 + 1);
          v107 = v58 | 1;
        }
        else {
          v108 = 0;
          v109 = nullptr;
          HIDWORD(v107) = 0;
          v57 = (char*)&v107 + 5;
          *(_DWORD*)((char*)&v107 + 1) = 1598310721;
          LOBYTE(v107) = 2 * v56;
          if (v53 == 0) {
            goto LABEL_122;
          }
        }
        a1 = GameRoutine_1a0b940(v57, v52, v53);
      LABEL_122:
        v57[v53] = 0;
        if ((*v47 & 1) != 0) {
          v60 = *((_QWORD*)v47 + 2);
          if (v60 != 0) {
            v61 = 128;
            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
              v61 = 56;
            }
            a1 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v61, v60);
          }
        }
        *(_QWORD*)v47 = v107;
        *((_QWORD*)v47 + 1) = v108;
        *((_QWORD*)v47 + 2) = v109;
      }
      v47 += 24;
      if (v47 == v48) {
        break;
      }
      continue;
    }
  }
  v62 = (_QWORD*)GameData_212dbb8[0];
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v63 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
  }
  else {
    v63 = 0;
  }
  if (GameData_22127a8 != 0) {
    v64 = GameData_22127a8;
  }
  else {
    v64 = v63;
  }
  v65 = *(unsigned __int8*)(v3 + 200);
  v66 = (v65 & 1) == 0;
  v67 = v65 >> 1;
  if (v66) {
    v68 = v3 + 201;
  }
  else {
    v68 = *(_QWORD*)(v3 + 216);
  }
  if (v66) {
    v69 = v67;
  }
  else {
    v69 = *(_QWORD*)(v3 + 208);
  }
  *(struct PseudoSret*)(&v107) = GameRoutine_d9bf20(v64, v68, v69, v3 + 224);
  GameRoutine_d90ae0(v3 + 600, &v107);
  if (v113 == 1) {
    v70 = v111;
    if (v111 != 0) {
      v71 = v112;
      if (v111 == v112) {
        goto LABEL_149;
      }
      do {
        v72 = *(unsigned int*)(v71 - 8);
        v73 = v71 - 32;
        if ((_DWORD)v72 != -1) {
          ((void (*)(char*, __int64))GameData_1fde958[v72])(&v114, v71 - 32);
        }
        *(_DWORD*)(v71 - 8) = -1;
        v71 -= 32;
      } while (v73 != v70);
      v112 = v70;
      v70 = v111;
      if (v111 != 0) {
      LABEL_149:
        v74 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v74 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v74, v70);
      }
    }
    if (((unsigned __int8)v109 & 1) != 0 && v110 != 0) {
      v75 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v75 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v75, v110);
    }
  }
  if (*v62 != 0) {
    v76 = *v62 + 248LL;
  }
  else {
    v76 = 0;
  }
  if (GameData_22127a8 != 0) {
    v77 = GameData_22127a8;
  }
  else {
    v77 = v76;
  }
  v78 = *(unsigned __int8*)(v3 + 248);
  v79 = (v78 & 1) == 0;
  v80 = v78 >> 1;
  if (v79) {
    v81 = v3 + 249;
  }
  else {
    v81 = *(_QWORD*)(v3 + 264);
  }
  if (v79) {
    v82 = v80;
  }
  else {
    v82 = *(_QWORD*)(v3 + 256);
  }
  *(struct PseudoSret*)(&v107) = GameRoutine_d9bf20(v77, v81, v82, v3 + 272);
  GameRoutine_d90ae0(v3 + 672, &v107);
  if (v113 == 1) {
    v83 = v111;
    if (v111 != 0) {
      v84 = v112;
      if (v111 == v112) {
        goto LABEL_177;
      }
      do {
        v85 = *(unsigned int*)(v84 - 8);
        v86 = v84 - 32;
        if ((_DWORD)v85 != -1) {
          ((void (*)(char*, __int64))GameData_1fde958[v85])(&v114, v84 - 32);
        }
        *(_DWORD*)(v84 - 8) = -1;
        v84 -= 32;
      } while (v86 != v83);
      v112 = v83;
      v83 = v111;
      if (v111 != 0) {
      LABEL_177:
        v87 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v87 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v87, v83);
      }
    }
    if (((unsigned __int8)v109 & 1) != 0 && v110 != 0) {
      v88 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v88 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v88, v110);
    }
  }
  if (*v62 != 0) {
    v89 = *v62 + 248LL;
  }
  else {
    v89 = 0;
  }
  if (GameData_22127a8 != 0) {
    v90 = GameData_22127a8;
  }
  else {
    v90 = v89;
  }
  v91 = *(unsigned __int8*)(v3 + 296);
  v92 = (v91 & 1) == 0;
  v93 = v91 >> 1;
  if (v92) {
    v94 = v3 + 297;
  }
  else {
    v94 = *(_QWORD*)(v3 + 312);
  }
  if (v92) {
    v95 = v93;
  }
  else {
    v95 = *(_QWORD*)(v3 + 304);
  }
  *(struct PseudoSret*)(&v107) = GameRoutine_d9bf20(v90, v94, v95, v3 + 320);
  result = GameRoutine_d90ae0(v3 + 744, &v107);
  if (v113 == 1) {
    v97 = v111;
    if (v111 != 0) {
      v98 = v112;
      if (v111 == v112) {
        goto LABEL_205;
      }
      do {
        v99 = *(unsigned int*)(v98 - 8);
        v100 = v98 - 32;
        if ((_DWORD)v99 != -1) {
          result = ((__int64 (*)(char*, __int64))GameData_1fde958[v99])(
              &v114, v98 - 32);
        }
        *(_DWORD*)(v98 - 8) = -1;
        v98 -= 32;
      } while (v100 != v97);
      v112 = v97;
      v97 = v111;
      if (v111 != 0) {
      LABEL_205:
        v101 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v101 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v101, v97);
      }
    }
    if (((unsigned __int8)v109 & 1) != 0 && v110 != 0) {
      v102 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v102 = 56;
      }
      return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v102, v110);
    }
  }
  return result;
}

_QWORD* GameHr_e0dce0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* result;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  _QWORD* v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  unsigned __int64 v22;
  __int64* v23;
  __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  unsigned __int64 v28;
  char* v29;
  __int64 v30;
  __int64* v31;
  unsigned __int64 v32;
  char* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  char* v41;

  v6 = *GameData_212c370;
  v7 = *(
      _QWORD*)(v6 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v7 != 0) {
    v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 472LL))(v7);
  }
  else {
    v8 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v8 + 24) + 448LL))(
      *(_QWORD*)(v8 + 24), 1);
  result = *(_QWORD**)(v8 + 2240);
  *(_QWORD*)(v8 + 2240) = 0;
  if (result == (_QWORD*)(v8 + 2208)) {
    v10 = 32;
    goto LABEL_8;
  }
  if (result != nullptr) {
    v10 = 40;
  LABEL_8:
    result =
        (_QWORD*)(*(__int64 (**)(__int64))(*result + v10))((__int64)result);
  }
  v11 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v11 == 0x4000) {
    return result;
  }
  v12 = GameData_212c330[0];
  v13 = (_QWORD*)(GameData_212c330[0][*(unsigned int*)(a1 + 20)] + 16 * v11);
  if (v13[1] == 0 || *v13 != *(_QWORD*)(a1 + 8)) {
    return result;
  }
  if ((*(_BYTE*)a3 & 1) != 0) {
    v14 = *(_QWORD*)(a3 + 16);
  }
  else {
    v14 = a3 + 1;
  }
  v15 = GameRoutine_1a09c70(v14);
  if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_68:
    GameRoutine_60a1d0(v15);
  }
  v16 = v15;
  v17 = (_QWORD*)GameData_212bf68;
  if (v15 >= 0x17) {
    if ((v15 | 7) == 0x17) {
      v19 = 26;
    }
    else {
      v19 = (v15 | 7) + 1;
    }
    v18 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v19, 16, 0);
    v40 = v16;
    v41 = v18;
    v39 = v19 | 1;
  }
  else {
    LOBYTE(v39) = 2 * v15;
    v18 = (char*)&v39 + 1;
    if (v15 == 0) {
      goto LABEL_24;
    }
  }
  GameRoutine_1a0b940(v18, v14, v16);
LABEL_24:
  v20 = *v17;
  v18[v16] = 0;
  v21 = (__int64*)GameRoutine_651b90(v20, 24, 16, 0);
  v22 = v40;
  v23 = v21;
  *v21 = v39;
  v21[1] = v22;
  v21[2] = (__int64)v41;
  v24 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v24 == 0x4000 ||
      (v25 = (_QWORD*)(v12[*(unsigned int*)(a1 + 20)] + 16 * v24))[1] == 0) {
    v26 = nullptr;
  }
  else if (*v25 == *(_QWORD*)(a1 + 8)) {
    v26 = (_QWORD*)v25[1];
  }
  else {
    v26 = nullptr;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v27 = *(_QWORD*)(a2 + 16);
  }
  else {
    v27 = a2 + 1;
  }
  v15 = GameRoutine_1a09c70(v27);
  if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_68;
  }
  v28 = v15;
  if (v15 >= 0x17) {
    if ((v15 | 7) == 0x17) {
      v30 = 26;
    }
    else {
      v30 = (v15 | 7) + 1;
    }
    v29 = (char*)GameRoutine_651b90(*v17, v30, 16, 0);
    v40 = v28;
    v41 = v29;
    v39 = v30 | 1;
  }
  else {
    LOBYTE(v39) = 2 * v15;
    v29 = (char*)&v39 + 1;
    if (v15 == 0) {
      goto LABEL_42;
    }
  }
  GameRoutine_1a0b940(v29, v27, v28);
LABEL_42:
  v31 = v26 + 109;
  v29[v28] = 0;
  if (v26 + 109 != &v39) {
    if ((*(_BYTE*)v31 & 1) != 0) {
      if ((v39 & 1) != 0) {
        v33 = v41;
      }
      else {
        v33 = (char*)&v39 + 1;
      }
      if ((v39 & 1) != 0) {
        v34 = v40;
      }
      else {
        v34 = (unsigned __int64)(unsigned __int8)v39 >> 1;
      }
      GameRoutine_64dde0(v31, v33, v34);
    }
    else if ((v39 & 1) != 0) {
      GameRoutine_64df20(v31, v41, v40);
    }
    else {
      v32 = v40;
      *v31 = v39;
      v26[110] = v32;
      v26[111] = v41;
    }
  }
  GameRoutine_6b7aa0(v26 + 112);
  if ((v39 & 1) != 0 && v41 != nullptr) {
    v35 = 128;
    if (*(_QWORD*)(*v17 + 200LL) == 0) {
      v35 = 56;
    }
    GameRoutine_1a0a4e0(*v17 + v35, v41);
  }
  if ((*(_BYTE*)v23 & 1) != 0) {
    v36 = v23[2];
    if (v36 != 0) {
      v37 = 128;
      if (*(_QWORD*)(*v17 + 200LL) == 0) {
        v37 = 56;
      }
      GameRoutine_1a0a4e0(*v17 + v37, v36);
    }
  }
  v38 = 128;
  if (*(_QWORD*)(*v17 + 200LL) == 0) {
    v38 = 56;
  }
  return (_QWORD*)GameRoutine_1a0a4e0(*v17 + v38, v23);
}

#pragma GCC visibility pop
