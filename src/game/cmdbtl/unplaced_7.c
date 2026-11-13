#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool GameRoutine_163a9f0(__int64*, __int64*, __int64*, __int64*);
bool GameRoutine_163ab40(__int64*, __int64*);
bool GameRoutine_ec1940();
bool ui_game_15b75f0(__int64, __int64);
extern __int64* GameData_212ea58;
extern __int64 GameData_21f4cc0;
extern __int64 GameData_21f61c0;
extern __int64 GameData_2241720;
extern int GameData_21f61c8;
__int64 game_cmdbtl_e63390();
__int64 game_cmdbtl_1639f60(__int64 result, __int64* a2, __int64 a3, char a4);

__int64 game_cmdbtl_e63390()
{
  __int64 result;
  int v1;
  __int64 v2;
  int v3;

  result = ((__int64 (*)())GameRoutine_ec1940)();
  if (((result & 1) != 0 || *(_BYTE*)(GameData_21f4cc0 + 12) == 1) &&
      (*(_BYTE*)(*GameData_212ea58 + 12576) & 1) == 0) {
    *(_BYTE*)(*GameData_212ea58 + 12576) = 1;
    v1 = GameData_21f61c8++;
    if (v1 == 0) {
      result = (*(__int64 (**)(void))GameData_21f61c0)();
    }
    v2 = GameData_2241720;
    if (GameData_2241720 != 0) {
      v3 = *(_DWORD*)(GameData_2241720 + 1736);
      *(_DWORD*)(GameData_2241720 + 1736) = v3 + 1;
      if (v3 == 0) {
        return (**(__int64 (***)(__int64))(v2 + 1728))(v2 + 1728);
      }
    }
  }
  return result;
}

__int64 game_cmdbtl_1639f60(__int64 result, __int64* a2, __int64 a3, char a4)
{
  __int64* v7;
  __int64* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  bool v12;
  bool v13;
  __int64 v14;
  bool v15;
  bool v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  bool v23;
  bool v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  bool v30;
  bool v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  bool v36;
  bool v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  bool v43;
  __int64 v44;
  __int64 v45;
  bool v46;
  __int64 v47;
  __int64 v48;
  bool v49;
  __int64 v50;
  __int64* v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  __int64* v56;
  __int64* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64* v61;
  bool v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  bool v79;
  __int64 v80;
  __int64* v81;
  bool v83;
  __int64 v84;
  __int64* v85;
  __int64* v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  signed __int64 v92;
  signed __int64 v93;
  __int64 v94;
  __int64* v95;
  __int64* v96;
  __int64 v97;
  __int64* v98;
  __int64 v99;
  __int64 v100;
  bool v101;
  __int64 v102;
  __int64 v103;
  __int64* v104;
  __int64* v105;
  __int64 v106;
  __int64* v107;
  __int64* v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  unsigned __int64 v112;
  unsigned __int64 v113;
  __int64* v114;
  __int64 v115;
  __int64* v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64* v122;
  __int64* v123;
  __int64 v124;
  __int64 v125;
  __int64* v126;

  v7 = (__int64*)result;
LABEL_2:
  v8 = v7;
  while (1) {
    v7 = v8;
    v9 = a2 - v8;
    v10 = v9 - 2;
    if (v9 > 2) {
      break;
    }
    if ((unsigned __int64)v9 < 2) {
      return result;
    }
    if (v9 == 2) {
      result = ((__int64 (*)(__int64, __int64))ui_game_15b75f0)(*(a2 - 1), *v8);
      if ((result & 1) != 0) {
        v78 = *v8;
        *v8 = *(a2 - 1);
      LABEL_105:
        *(a2 - 1) = v78;
        return result;
      }
      return result;
    }
  LABEL_10:
    if (v9 <= 23) {
      v81 = v8 + 1;
      v83 = v8 == a2 || v81 == a2;
      if ((a4 & 1) != 0) {
        if (!v83) {
          v84 = 0;
          v85 = v8;
          do {
            v88 = *v85;
            v87 = v85[1];
            v85 = v81;
            result = ((__int64 (*)(__int64, __int64))ui_game_15b75f0)(v87, v88);
            if ((result & 1) != 0) {
              v89 = *v85;
              v90 = v84;
              do {
                *(__int64*)((char*)v8 + v90 + 8) = *(__int64*)((char*)v8 + v90);
                if (v90 == 0) {
                  v86 = v8;
                  goto LABEL_120;
                }
                result = ((__int64 (*)(__int64, __int64))ui_game_15b75f0)(
                    v89, *(__int64*)((char*)v8 + v90 - 8));
                v90 -= 8;
              } while ((result & 1) != 0);
              v86 = (__int64*)((char*)v8 + v90 + 8);
            LABEL_120:
              *v86 = v89;
            }
            v81 = v85 + 1;
            v84 += 8;
          } while (v85 + 1 != a2);
        }
      }
      else if (!v83) {
        do {
          v120 = *v7;
          v119 = v7[1];
          v7 = v81;
          result = ((__int64 (*)(__int64, __int64))ui_game_15b75f0)(v119, v120);
          if ((result & 1) != 0) {
            v121 = *v7;
            v122 = v7;
            do {
              v123 = v122;
              v124 = *--v122;
              v125 = *(v123 - 2);
              *v123 = v124;
              result =
                  ((__int64 (*)(__int64, __int64))ui_game_15b75f0)(v121, v125);
            } while ((result & 1) != 0);
            *v122 = v121;
          }
          v81 = v7 + 1;
        } while (v7 + 1 != a2);
      }
      return result;
    }
    if (a3 == 0) {
      if (v8 != a2) {
        v91 = v10 >> 1;
        v126 = a2;
        v92 = v10 >> 1;
        do {
          v93 = v92;
          if (v91 >= v92) {
            v94 = (2 * (v92 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
            v95 = &v7[v94];
            if (2 * v92 + 2 < v9 && ui_game_15b75f0(*v95, v95[1])) {
              ++v95;
              v94 = 2 * v93 + 2;
            }
            v96 = &v7[v93];
            result =
                ((__int64 (*)(__int64, __int64))ui_game_15b75f0)(*v95, *v96);
            if ((result & 1) == 0) {
              v97 = *v96;
              do {
                v98 = v95;
                *v96 = *v95;
                if (v91 < v94) {
                  break;
                }
                v99 = (2 * v94) | 1;
                v100 = 2 * v94 + 2;
                v95 = &v7[v99];
                if (v100 < v9 && ui_game_15b75f0(*v95, v95[1])) {
                  ++v95;
                  v99 = v100;
                }
                result =
                    ((__int64 (*)(__int64, __int64))ui_game_15b75f0)(*v95, v97);
                v96 = v98;
                v94 = v99;
              } while ((result & 1) == 0);
              a2 = v126;
              *v98 = v97;
            }
          }
          v92 = v93 - 1;
        } while (v93 != 0);
        do {
          v102 = *v7;
          v103 = 0;
          v104 = v7;
          do {
            v108 = &v104[v103];
            v109 = (2 * v103) | 1;
            v107 = v108 + 1;
            v110 = 2 * v103 + 2;
            if (v110 < v9) {
              v106 = v108[2];
              v105 = v108 + 2;
              result = ((__int64 (*)(__int64, __int64))ui_game_15b75f0)(
                  *(v105 - 1), v106);
              if ((result & 1) != 0) {
                v107 = v105;
                v103 = v110;
              }
              else {
                v103 = v109;
              }
            }
            else {
              v103 = (2 * v103) | 1;
            }
            *v104 = *v107;
            v104 = v107;
          } while (v103 <= (__int64)((unsigned __int64)(v9 - 2) >> 1));
          if (v107 == --a2) {
            *v107 = v102;
          }
          else {
            *v107 = *a2;
            *a2 = v102;
            v111 = ((char*)v107 - (char*)v7 + 8) >> 3;
            v101 = v111 < 2;
            v112 = v111 - 2;
            if (!v101) {
              v113 = v112 >> 1;
              v114 = &v7[v112 >> 1];
              result = ((__int64 (*)(__int64, __int64))ui_game_15b75f0)(*v114,
                                                                        *v107);
              if ((result & 1) != 0) {
                v115 = *v107;
                do {
                  v116 = v114;
                  *v107 = *v114;
                  if (v113 == 0) {
                    break;
                  }
                  v113 = (v113 - 1) >> 1;
                  v114 = &v7[v113];
                  result = ((__int64 (*)(__int64, __int64))ui_game_15b75f0)(
                      *v114, v115);
                  v107 = v116;
                } while ((result & 1) != 0);
                *v116 = v115;
              }
            }
          }
          v101 = v9-- <= 2;
        } while (!v101);
      }
      return result;
    }
    v11 = &v8[(unsigned __int64)v9 >> 1];
    if ((unsigned __int64)v9 < 0x81) {
      v15 = ui_game_15b75f0(*v7, *v11);
      v16 = ui_game_15b75f0(*(a2 - 1), *v7);
      if (v15) {
        v17 = *v11;
        if (v16) {
          *v11 = *(a2 - 1);
          *(a2 - 1) = v17;
        }
        else {
          *v11 = *v7;
          *v7 = v17;
          if (ui_game_15b75f0(*(a2 - 1), v17)) {
            v28 = *v7;
            *v7 = *(a2 - 1);
            *(a2 - 1) = v28;
          }
        }
      }
      else if (v16) {
        v20 = *v7;
        *v7 = *(a2 - 1);
        *(a2 - 1) = v20;
        if (ui_game_15b75f0(*v7, *v11)) {
          v21 = *v11;
          *v11 = *v7;
          *v7 = v21;
        }
      }
      goto LABEL_55;
    }
    v12 = ui_game_15b75f0(*v11, *v7);
    v13 = ui_game_15b75f0(*(a2 - 1), *v11);
    if (v12) {
      v14 = *v7;
      if (v13) {
        *v7 = *(a2 - 1);
        *(a2 - 1) = v14;
      }
      else {
        *v7 = *v11;
        *v11 = v14;
        if (ui_game_15b75f0(*(a2 - 1), v14)) {
          v22 = *v11;
          *v11 = *(a2 - 1);
          *(a2 - 1) = v22;
        }
      }
    }
    else if (v13) {
      v18 = *v11;
      *v11 = *(a2 - 1);
      *(a2 - 1) = v18;
      if (ui_game_15b75f0(*v11, *v7)) {
        v19 = *v7;
        *v7 = *v11;
        *v11 = v19;
      }
    }
    v23 = ui_game_15b75f0(*(v11 - 1), v7[1]);
    v24 = ui_game_15b75f0(*(a2 - 2), *(v11 - 1));
    if (v23) {
      v25 = v7[1];
      if (v24) {
        v7[1] = *(a2 - 2);
        *(a2 - 2) = v25;
      }
      else {
        v7[1] = *(v11 - 1);
        *(v11 - 1) = v25;
        if (ui_game_15b75f0(*(a2 - 2), v25)) {
          v29 = *(v11 - 1);
          *(v11 - 1) = *(a2 - 2);
          *(a2 - 2) = v29;
        }
      }
    }
    else if (v24) {
      v26 = *(v11 - 1);
      *(v11 - 1) = *(a2 - 2);
      *(a2 - 2) = v26;
      if (ui_game_15b75f0(*(v11 - 1), v7[1])) {
        v27 = v7[1];
        v7[1] = *(v11 - 1);
        *(v11 - 1) = v27;
      }
    }
    v30 = ui_game_15b75f0(v11[1], v7[2]);
    v31 = ui_game_15b75f0(*(a2 - 3), v11[1]);
    if (v30) {
      v32 = v7[2];
      if (v31) {
        v7[2] = *(a2 - 3);
        *(a2 - 3) = v32;
      }
      else {
        v7[2] = v11[1];
        v11[1] = v32;
        if (ui_game_15b75f0(*(a2 - 3), v32)) {
          v35 = v11[1];
          v11[1] = *(a2 - 3);
          *(a2 - 3) = v35;
        }
      }
    }
    else if (v31) {
      v33 = v11[1];
      v11[1] = *(a2 - 3);
      *(a2 - 3) = v33;
      if (ui_game_15b75f0(v11[1], v7[2])) {
        v34 = v7[2];
        v7[2] = v11[1];
        v11[1] = v34;
      }
    }
    v36 = ui_game_15b75f0(*v11, *(v11 - 1));
    v37 = ui_game_15b75f0(v11[1], *v11);
    if (!v36) {
      v39 = *v11;
      if (!v37) {
        goto LABEL_54;
      }
      v41 = v11[1];
      v42 = *(v11 - 1);
      *v11 = v41;
      v11[1] = v39;
      v43 = ui_game_15b75f0(v41, v42);
      v39 = *v11;
      if (!v43) {
        goto LABEL_54;
      }
      v44 = *(v11 - 1);
      *(v11 - 1) = v39;
      *v11 = v44;
      goto LABEL_53;
    }
    v38 = *(v11 - 1);
    if (v37) {
      v39 = *v11;
      v40 = v11[1];
      v11[1] = v38;
      *(v11 - 1) = v40;
    }
    else {
      v45 = v11[1];
      *(v11 - 1) = *v11;
      *v11 = v38;
      v46 = ui_game_15b75f0(v45, v38);
      v39 = *v11;
      if (v46) {
        v44 = v11[1];
        *v11 = v44;
        v11[1] = v39;
      LABEL_53:
        v39 = v44;
      }
    }
  LABEL_54:
    v47 = *v7;
    *v7 = v39;
    *v11 = v47;
  LABEL_55:
    v48 = *v7;
    --a3;
    if ((a4 & 1) != 0 ||
        (v49 = ui_game_15b75f0(*(v7 - 1), *v7), v48 = *v7, v49)) {
      v50 = 0;
      while (ui_game_15b75f0(v7[++v50], v48))
        ;
      v52 = &v7[v50];
      v53 = a2;
      if (v50 == 1) {
        v53 = a2;
        do {
          if (v52 >= v53) {
            break;
          }
          v55 = *--v53;
        } while (!ui_game_15b75f0(v55, v48));
      }
      else {
        do {
          v54 = *--v53;
        } while (!ui_game_15b75f0(v54, v48));
      }
      if (v52 >= v53) {
        v61 = v52 - 1;
        if (v7 == v52 - 1) {
          goto LABEL_75;
        }
      LABEL_74:
        *v7 = *v61;
        goto LABEL_75;
      }
      v56 = &v7[v50];
      v57 = v53;
      do {
        v58 = *v56;
        *v56 = *v57;
        *v57 = v58;
        do {
          v59 = v56[1];
          ++v56;
        } while (ui_game_15b75f0(v59, v48));
        do {
          v60 = *--v57;
        } while (!ui_game_15b75f0(v60, v48));
      } while (v56 < v57);
      v61 = v56 - 1;
      if (v7 != v61) {
        goto LABEL_74;
      }
    LABEL_75:
      *v61 = v48;
      if (v52 < v53) {
        goto LABEL_78;
      }
      v8 = v61 + 1;
      v62 = GameRoutine_163ab40(v7, v61);
      result =
          ((__int64 (*)(__int64*, __int64*))GameRoutine_163ab40)(v61 + 1, a2);
      if ((result & 1) != 0) {
        a2 = v61;
        if (!v62) {
          goto LABEL_2;
        }
        return result;
      }
      if (!v62) {
      LABEL_78:
        result = game_cmdbtl_1639f60((__int64)v7, v61, a3, a4 & 1);
        a4 = 0;
        v8 = v61 + 1;
      }
    }
    else {
      result = ((__int64 (*)(__int64, __int64))ui_game_15b75f0)(*v7, *(a2 - 1));
      if ((result & 1) != 0) {
        v8 = v7;
        do {
          v63 = v8[1];
          ++v8;
          result = ((__int64 (*)(__int64, __int64))ui_game_15b75f0)(v48, v63);
        } while ((result & 1) == 0);
      }
      else {
        v64 = (unsigned __int64)(v7 + 1);
        do {
          v8 = (__int64*)v64;
          if (v64 >= (unsigned __int64)a2) {
            break;
          }
          v64 += 8LL;
          result = ((__int64 (*)(__int64, __int64))ui_game_15b75f0)(v48, *v8);
        } while ((result & 1) == 0);
      }
      v65 = a2;
      if (v8 < a2) {
        v65 = a2;
        do {
          v66 = *--v65;
          result = ((__int64 (*)(__int64, __int64))ui_game_15b75f0)(v48, v66);
        } while ((result & 1) != 0);
      }
      while (v8 < v65) {
        v67 = *v8;
        *v8 = *v65;
        *v65 = v67;
        do {
          v68 = v8[1];
          ++v8;
        } while (!ui_game_15b75f0(v48, v68));
        do {
          v69 = *--v65;
          result = ((__int64 (*)(__int64, __int64))ui_game_15b75f0)(v48, v69);
        } while ((result & 1) != 0);
      }
      v70 = v8 - 1;
      if (v7 != v8 - 1) {
        *v7 = *v70;
      }
      a4 = 0;
      *v70 = v48;
    }
  }
  if (v9 != 3) {
    if (v9 == 4) {
      return GameRoutine_163a9f0(v8, v8 + 1, v8 + 2, a2 - 1);
    }
    if (v9 == 5) {
      GameRoutine_163a9f0(v8, v8 + 1, v8 + 2, v8 + 3);
      result =
          ((__int64 (*)(__int64, __int64))ui_game_15b75f0)(*(a2 - 1), v8[3]);
      if ((result & 1) == 0) {
        return result;
      }
      v71 = v8[3];
      v8[3] = *(a2 - 1);
      *(a2 - 1) = v71;
      result = ((__int64 (*)(__int64, __int64))ui_game_15b75f0)(v8[3], v8[2]);
      if ((result & 1) == 0) {
        return result;
      }
      v73 = v8[2];
      v72 = v8[3];
      v74 = v8[1];
      v8[2] = v72;
      v8[3] = v73;
      result = ((__int64 (*)(__int64, __int64))ui_game_15b75f0)(v72, v74);
      if ((result & 1) == 0) {
        return result;
      }
      v76 = v8[1];
      v75 = v8[2];
      v77 = *v8;
      v8[1] = v75;
      v8[2] = v76;
      goto LABEL_161;
    }
    goto LABEL_10;
  }
  v79 = ui_game_15b75f0(v8[1], *v8);
  result = ((__int64 (*)(__int64, __int64))ui_game_15b75f0)(*(a2 - 1), v8[1]);
  if (!v79) {
    if ((result & 1) == 0) {
      return result;
    }
    v117 = v8[1];
    v8[1] = *(a2 - 1);
    *(a2 - 1) = v117;
    v77 = *v8;
    v75 = v8[1];
  LABEL_161:
    result = ((__int64 (*)(__int64, __int64))ui_game_15b75f0)(v75, v77);
    if ((result & 1) != 0) {
      v118 = *v8;
      *v8 = v8[1];
      v8[1] = v118;
    }
    return result;
  }
  v80 = *v8;
  if ((result & 1) != 0) {
    *v8 = *(a2 - 1);
    *(a2 - 1) = v80;
  }
  else {
    *v8 = v8[1];
    v8[1] = v80;
    result = ((__int64 (*)(__int64, __int64))ui_game_15b75f0)(*(a2 - 1), v80);
    if ((result & 1) != 0) {
      v78 = v8[1];
      v8[1] = *(a2 - 1);
      goto LABEL_105;
    }
  }
  return result;
}

#pragma GCC visibility pop
