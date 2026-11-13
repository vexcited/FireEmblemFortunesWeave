#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1993840(__int64);
__int64 PrimitiveDrawManager_1993480(__int64*);
__int64 PrimitiveDrawManager_1994180(__int64 result);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
bool GameHr_1613a00(__int64, __int64, __int64);
bool GameRoutine_1613dd0(__int64*, __int64*, __int64*, __int64*, __int64*);
bool GameRoutine_1613f30(__int64*, __int64*, __int64*, __int64*, __int64*,
                         __int64*);
bool GameRoutine_1614020(__int64*, __int64*, __int64*);
char* game_util_Format(const char*, ...);
extern _UNKNOWN* GameData_212c958;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_map_MapColorPalette_g_texture_archives;
extern int GameData_22594dc;
extern int GameData_22594e0;
extern int GameData_22594e4;
float ui_LayoutAccessor_GetScale(__int64*);
float32x4_t* GameRoutine_1994460(float32x4_t* result);
__int64 game_menu_anonymous_1612ec0(__int64 result, __int64* a2, __int64* a3,
                                    __int64 a4, char a5);
__int64 game_menu_anonymous_17a4cc0(int* a1, __int64 a2, float* a3);

__int64 game_menu_anonymous_1612ec0(__int64 result, __int64* a2, __int64* a3,
                                    __int64 a4, char a5)
{
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  bool v14;
  bool v15;
  __int64 v16;
  bool v17;
  bool v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  bool v25;
  bool v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  bool v32;
  bool v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  bool v38;
  bool v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  bool v45;
  __int64 v46;
  __int64 v47;
  bool v48;
  __int64 v49;
  __int64 v50;
  bool v51;
  __int64 v52;
  __int64* v54;
  __int64* v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64* v63;
  bool v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  __int64 v73;
  bool v74;
  __int64 v75;
  __int64* v76;
  bool v78;
  __int64 v79;
  __int64* v80;
  __int64* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  signed __int64 v86;
  signed __int64 v87;
  __int64 v88;
  __int64* v89;
  __int64* v90;
  __int64 v91;
  __int64* v92;
  __int64 v93;
  __int64 v94;
  __int64* v95;
  bool v96;
  __int64* v97;
  __int64 v98;
  __int64* v99;
  __int64* v100;
  __int64 v101;
  __int64* v102;
  __int64* v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  unsigned __int64 v107;
  unsigned __int64 v108;
  __int64* v109;
  __int64 v110;
  __int64* v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64* v117;
  __int64* v118;
  __int64 v119;
  __int64 v120;
  __int64* v121;
  signed __int64 v122;
  __int64 v123;

  v9 = (__int64*)result;
LABEL_2:
  v10 = v9;
  v121 = a2;
  while (1) {
    v9 = v10;
    v11 = a2 - v10;
    if (v11 > 2) {
      break;
    }
    if ((unsigned __int64)v11 < 2) {
      return result;
    }
    if (v11 == 2) {
      result = ((__int64 (*)(__int64, __int64, __int64))GameHr_1613a00)(
          *a3, *(a2 - 1), *v10);
      if ((result & 1) != 0) {
        v73 = *v10;
        *v10 = *(a2 - 1);
      LABEL_102:
        *(a2 - 1) = v73;
        return result;
      }
      return result;
    }
  LABEL_10:
    if (v11 <= 23) {
      v76 = v10 + 1;
      v78 = v10 == a2 || v76 == a2;
      if ((a5 & 1) != 0) {
        if (!v78) {
          v79 = 0;
          v80 = v10;
          do {
            v83 = *v80;
            v82 = v80[1];
            v80 = v76;
            result = ((__int64 (*)(__int64, __int64, __int64))GameHr_1613a00)(
                *a3, v82, v83);
            if ((result & 1) != 0) {
              v84 = *v80;
              v85 = v79;
              do {
                *(__int64*)((char*)v10 + v85 + 8) =
                    *(__int64*)((char*)v10 + v85);
                if (v85 == 0) {
                  v81 = v10;
                  goto LABEL_117;
                }
                result =
                    ((__int64 (*)(__int64, __int64, __int64))GameHr_1613a00)(
                        *a3, v84, *(__int64*)((char*)v10 + v85 - 8));
                v85 -= 8;
              } while ((result & 1) != 0);
              v81 = (__int64*)((char*)v10 + v85 + 8);
            LABEL_117:
              *v81 = v84;
            }
            v76 = v80 + 1;
            v79 += 8;
          } while (v80 + 1 != a2);
        }
      }
      else if (!v78) {
        do {
          v115 = *v9;
          v114 = v9[1];
          v9 = v76;
          result = ((__int64 (*)(__int64, __int64, __int64))GameHr_1613a00)(
              *a3, v114, v115);
          if ((result & 1) != 0) {
            v116 = *v9;
            v117 = v9;
            do {
              v118 = v117;
              v119 = *--v117;
              v120 = *(v118 - 2);
              *v118 = v119;
              result = ((__int64 (*)(__int64, __int64, __int64))GameHr_1613a00)(
                  *a3, v116, v120);
            } while ((result & 1) != 0);
            *v117 = v116;
          }
          v76 = v9 + 1;
        } while (v9 + 1 != a2);
      }
      return result;
    }
    if (a4 == 0) {
      if (v10 != a2) {
        v86 = (unsigned __int64)(v11 - 2) >> 1;
        v122 = v86;
        do {
          v87 = v86;
          if (v122 >= v86) {
            v88 = (2 * (v86 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
            v89 = &v9[v88];
            if (2 * v86 + 2 < v11 && GameHr_1613a00(*a3, *v89, v89[1])) {
              ++v89;
              v88 = 2 * v87 + 2;
            }
            v90 = &v9[v87];
            result = ((__int64 (*)(__int64, __int64, __int64))GameHr_1613a00)(
                *a3, *v89, *v90);
            if ((result & 1) == 0) {
              v91 = *v90;
              do {
                v92 = v89;
                *v90 = *v89;
                if (v122 < v88) {
                  break;
                }
                v93 = (2 * v88) | 1;
                v94 = 2 * v88 + 2;
                v89 = &v9[v93];
                if (v94 < v11 && GameHr_1613a00(*a3, *v89, v89[1])) {
                  ++v89;
                  v93 = v94;
                }
                result = ((__int64 (*)(__int64, __int64,
                                       __int64))GameHr_1613a00)(*a3, *v89, v91);
                v90 = v92;
                v88 = v93;
              } while ((result & 1) == 0);
              *v92 = v91;
            }
          }
          v86 = v87 - 1;
        } while (v87 != 0);
        v95 = v121;
        do {
          v97 = v95;
          v98 = 0;
          v99 = v9;
          v123 = *v9;
          do {
            v103 = &v99[v98];
            v104 = (2 * v98) | 1;
            v102 = v103 + 1;
            v105 = 2 * v98 + 2;
            if (v105 < v11) {
              v101 = v103[2];
              v100 = v103 + 2;
              result = ((__int64 (*)(__int64, __int64, __int64))GameHr_1613a00)(
                  *a3, *(v100 - 1), v101);
              if ((result & 1) != 0) {
                v102 = v100;
                v98 = v105;
              }
              else {
                v98 = v104;
              }
            }
            else {
              v98 = (2 * v98) | 1;
            }
            *v99 = *v102;
            v99 = v102;
          } while (v98 <= (__int64)((unsigned __int64)(v11 - 2) >> 1));
          v95 = v97 - 1;
          if (v102 == v97 - 1) {
            *v102 = v123;
          }
          else {
            *v102 = *v95;
            *v95 = v123;
            v106 = ((char*)v102 - (char*)v9 + 8) >> 3;
            v96 = v106 < 2;
            v107 = v106 - 2;
            if (!v96) {
              v108 = v107 >> 1;
              v109 = &v9[v107 >> 1];
              result = ((__int64 (*)(__int64, __int64, __int64))GameHr_1613a00)(
                  *a3, *v109, *v102);
              if ((result & 1) != 0) {
                v110 = *v102;
                do {
                  v111 = v109;
                  *v102 = *v109;
                  if (v108 == 0) {
                    break;
                  }
                  v108 = (v108 - 1) >> 1;
                  v109 = &v9[v108];
                  result =
                      ((__int64 (*)(__int64, __int64, __int64))GameHr_1613a00)(
                          *a3, *v109, v110);
                  v102 = v111;
                } while ((result & 1) != 0);
                *v111 = v110;
              }
            }
          }
          v96 = v11-- <= 2;
        } while (!v96);
      }
      return result;
    }
    v12 = *a3;
    v13 = &v10[(unsigned __int64)v11 >> 1];
    if ((unsigned __int64)v11 < 0x81) {
      v17 = GameHr_1613a00(v12, *v9, *v13);
      v18 = GameHr_1613a00(*a3, *(a2 - 1), *v9);
      if (v17) {
        v19 = *v13;
        if (v18) {
          *v13 = *(a2 - 1);
          *(a2 - 1) = v19;
        }
        else {
          *v13 = *v9;
          *v9 = v19;
          if (GameHr_1613a00(*a3, *(a2 - 1), v19)) {
            v30 = *v9;
            *v9 = *(a2 - 1);
            *(a2 - 1) = v30;
          }
        }
      }
      else if (v18) {
        v22 = *v9;
        *v9 = *(a2 - 1);
        *(a2 - 1) = v22;
        if (GameHr_1613a00(*a3, *v9, *v13)) {
          v23 = *v13;
          *v13 = *v9;
          *v9 = v23;
        }
      }
      goto LABEL_55;
    }
    v14 = GameHr_1613a00(v12, *v13, *v9);
    v15 = GameHr_1613a00(*a3, *(a2 - 1), *v13);
    if (v14) {
      v16 = *v9;
      if (v15) {
        *v9 = *(a2 - 1);
        *(a2 - 1) = v16;
      }
      else {
        *v9 = *v13;
        *v13 = v16;
        if (GameHr_1613a00(*a3, *(a2 - 1), v16)) {
          v24 = *v13;
          *v13 = *(a2 - 1);
          *(a2 - 1) = v24;
        }
      }
    }
    else if (v15) {
      v20 = *v13;
      *v13 = *(a2 - 1);
      *(a2 - 1) = v20;
      if (GameHr_1613a00(*a3, *v13, *v9)) {
        v21 = *v9;
        *v9 = *v13;
        *v13 = v21;
      }
    }
    v25 = GameHr_1613a00(*a3, *(v13 - 1), v9[1]);
    v26 = GameHr_1613a00(*a3, *(a2 - 2), *(v13 - 1));
    if (v25) {
      v27 = v9[1];
      if (v26) {
        v9[1] = *(a2 - 2);
        *(a2 - 2) = v27;
      }
      else {
        v9[1] = *(v13 - 1);
        *(v13 - 1) = v27;
        if (GameHr_1613a00(*a3, *(a2 - 2), v27)) {
          v31 = *(v13 - 1);
          *(v13 - 1) = *(a2 - 2);
          *(a2 - 2) = v31;
        }
      }
    }
    else if (v26) {
      v28 = *(v13 - 1);
      *(v13 - 1) = *(a2 - 2);
      *(a2 - 2) = v28;
      if (GameHr_1613a00(*a3, *(v13 - 1), v9[1])) {
        v29 = v9[1];
        v9[1] = *(v13 - 1);
        *(v13 - 1) = v29;
      }
    }
    v32 = GameHr_1613a00(*a3, v13[1], v9[2]);
    v33 = GameHr_1613a00(*a3, *(a2 - 3), v13[1]);
    if (v32) {
      v34 = v9[2];
      if (v33) {
        v9[2] = *(a2 - 3);
        *(a2 - 3) = v34;
      }
      else {
        v9[2] = v13[1];
        v13[1] = v34;
        if (GameHr_1613a00(*a3, *(a2 - 3), v34)) {
          v37 = v13[1];
          v13[1] = *(a2 - 3);
          *(a2 - 3) = v37;
        }
      }
    }
    else if (v33) {
      v35 = v13[1];
      v13[1] = *(a2 - 3);
      *(a2 - 3) = v35;
      if (GameHr_1613a00(*a3, v13[1], v9[2])) {
        v36 = v9[2];
        v9[2] = v13[1];
        v13[1] = v36;
      }
    }
    v38 = GameHr_1613a00(*a3, *v13, *(v13 - 1));
    v39 = GameHr_1613a00(*a3, v13[1], *v13);
    if (!v38) {
      v41 = *v13;
      if (!v39) {
        goto LABEL_54;
      }
      v43 = v13[1];
      v44 = *(v13 - 1);
      *v13 = v43;
      v13[1] = v41;
      v45 = GameHr_1613a00(*a3, v43, v44);
      v41 = *v13;
      if (!v45) {
        goto LABEL_54;
      }
      v46 = *(v13 - 1);
      *(v13 - 1) = v41;
      *v13 = v46;
      goto LABEL_53;
    }
    v40 = *(v13 - 1);
    if (v39) {
      v41 = *v13;
      v42 = v13[1];
      v13[1] = v40;
      *(v13 - 1) = v42;
    }
    else {
      v47 = v13[1];
      *(v13 - 1) = *v13;
      *v13 = v40;
      v48 = GameHr_1613a00(*a3, v47, v40);
      v41 = *v13;
      if (v48) {
        v46 = v13[1];
        *v13 = v46;
        v13[1] = v41;
      LABEL_53:
        v41 = v46;
      }
    }
  LABEL_54:
    v49 = *v9;
    *v9 = v41;
    *v13 = v49;
  LABEL_55:
    v50 = *v9;
    --a4;
    if ((a5 & 1) != 0 ||
        (v51 = GameHr_1613a00(*a3, *(v9 - 1), *v9), v50 = *v9, v51)) {
      v52 = 0;
      while (GameHr_1613a00(*a3, v9[++v52], v50))
        ;
      v54 = &v9[v52];
      v55 = a2;
      if (v52 == 1) {
        v55 = a2;
        do {
          if (v54 >= v55) {
            break;
          }
          v57 = *--v55;
        } while (!GameHr_1613a00(*a3, v57, v50));
      }
      else {
        do {
          v56 = *--v55;
        } while (!GameHr_1613a00(*a3, v56, v50));
      }
      if (v54 >= v55) {
        v63 = v54 - 1;
        if (v9 == v54 - 1) {
          goto LABEL_75;
        }
      LABEL_74:
        *v9 = *v63;
        goto LABEL_75;
      }
      v58 = &v9[v52];
      v59 = v55;
      do {
        v60 = *v58;
        *v58 = *v59;
        *v59 = v60;
        do {
          v61 = v58[1];
          ++v58;
        } while (GameHr_1613a00(*a3, v61, v50));
        do {
          v62 = *--v59;
        } while (!GameHr_1613a00(*a3, v62, v50));
      } while (v58 < v59);
      a2 = v121;
      v63 = v58 - 1;
      if (v9 != v63) {
        goto LABEL_74;
      }
    LABEL_75:
      *v63 = v50;
      if (v54 < v55) {
        goto LABEL_78;
      }
      v10 = v63 + 1;
      v64 = GameRoutine_1614020(v9, v63, a3);
      result = ((__int64 (*)(__int64*, __int64*, __int64*))GameRoutine_1614020)(
          v63 + 1, a2, a3);
      if ((result & 1) != 0) {
        a2 = v63;
        if (!v64) {
          goto LABEL_2;
        }
        return result;
      }
      if (!v64) {
      LABEL_78:
        result = game_menu_anonymous_1612ec0((__int64)v9, v63, a3, a4, a5 & 1);
        a5 = 0;
        v10 = v63 + 1;
      }
    }
    else {
      result = ((__int64 (*)(__int64, __int64, __int64))GameHr_1613a00)(
          *a3, *v9, *(a2 - 1));
      if ((result & 1) != 0) {
        v10 = v9;
        do {
          v65 = v10[1];
          ++v10;
          result = ((__int64 (*)(__int64, __int64, __int64))GameHr_1613a00)(
              *a3, v50, v65);
        } while ((result & 1) == 0);
      }
      else {
        v66 = (unsigned __int64)(v9 + 1);
        do {
          v10 = (__int64*)v66;
          if (v66 >= (unsigned __int64)a2) {
            break;
          }
          v66 += 8LL;
          result = ((__int64 (*)(__int64, __int64, __int64))GameHr_1613a00)(
              *a3, v50, *v10);
        } while ((result & 1) == 0);
      }
      v67 = a2;
      if (v10 < a2) {
        v67 = a2;
        do {
          v68 = *--v67;
          result = ((__int64 (*)(__int64, __int64, __int64))GameHr_1613a00)(
              *a3, v50, v68);
        } while ((result & 1) != 0);
      }
      while (v10 < v67) {
        v69 = *v10;
        *v10 = *v67;
        *v67 = v69;
        do {
          v70 = v10[1];
          ++v10;
        } while (!GameHr_1613a00(*a3, v50, v70));
        do {
          v71 = *--v67;
          result = ((__int64 (*)(__int64, __int64, __int64))GameHr_1613a00)(
              *a3, v50, v71);
        } while ((result & 1) != 0);
      }
      v72 = v10 - 1;
      if (v9 != v10 - 1) {
        *v9 = *v72;
      }
      a5 = 0;
      *v72 = v50;
    }
  }
  if (v11 != 3) {
    if (v11 == 4) {
      return GameRoutine_1613dd0(v10, v10 + 1, v10 + 2, a2 - 1, a3);
    }
    if (v11 == 5) {
      return GameRoutine_1613f30(v10, v10 + 1, v10 + 2, v10 + 3, a2 - 1, a3);
    }
    goto LABEL_10;
  }
  v74 = GameHr_1613a00(*a3, v10[1], *v10);
  result = ((__int64 (*)(__int64, __int64, __int64))GameHr_1613a00)(
      *a3, *(a2 - 1), v10[1]);
  if (v74) {
    v75 = *v10;
    if ((result & 1) != 0) {
      *v10 = *(a2 - 1);
      *(a2 - 1) = v75;
    }
    else {
      *v10 = v10[1];
      v10[1] = v75;
      result = ((__int64 (*)(__int64, __int64, __int64))GameHr_1613a00)(
          *a3, *(a2 - 1), v75);
      if ((result & 1) != 0) {
        v73 = v10[1];
        v10[1] = *(a2 - 1);
        goto LABEL_102;
      }
    }
  }
  else if ((result & 1) != 0) {
    v112 = v10[1];
    v10[1] = *(a2 - 1);
    *(a2 - 1) = v112;
    result = ((__int64 (*)(__int64, __int64, __int64))GameHr_1613a00)(
        *a3, v10[1], *v10);
    if ((result & 1) != 0) {
      v113 = *v10;
      *v10 = v10[1];
      v10[1] = v113;
    }
  }
  return result;
}

__int64 game_menu_anonymous_17a4cc0(int* a1, __int64 a2, float* a3)
{
  int v3;
  __int64 v5;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _BOOL4 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int32x4_t* v19;
  float v20;
  float v21;
  __int64 v22;
  __int64 v23;
  float v24;
  float v25;
  float* v26;
  char* v27;
  __int64 v28;
  float v29;
  float v30;
  int* v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  __int64** v41;
  __int64****** v42;
  int v43;
  unsigned __int64 v44;
  __int128 v45;
  __int64***** v46;
  __int64**** v47;
  __int64*** v48;
  __int64** v49;
  __int64* v50;
  __int64 v51;
  float32x4_t* v52;
  __int64 v53;
  float32x4_t* v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  int v59;
  float v60;
  float v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  int v66;
  __int128 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  int v74;
  int v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  int v80;
  int v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  int v88;
  int v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  int v94;
  int v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  int v100;
  int v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  int v108;
  int v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  int v114;
  int v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  int v120;
  int v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  int v128;
  int v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  int v134;
  int v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  int v140;
  int v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  int v148;
  int v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  int v154;
  int v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  int v160;
  int v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  int v168;
  int v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  int v174;
  int v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  int v180;
  int v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  int v188;
  int v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  int v194;
  int v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  int v200;
  int v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  int v207;
  int v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  int v213;
  int v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  int v219;
  int v220;
  __int64 v221;
  __int64 v222;
  __int64 result;
  float v224;
  float v225;
  struct {
    __int64 v226;
    __int64 v227;
    __int64 v228;
    __int64 v229;
    __int64 v230;
    __int64 v231;
    __int64 v232;
    __int64 v233;
  } v226_;

  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  {
    v5 = *(_QWORD*)(a2 + 8);
    __asm__ volatile("" ::"r"(v5));
  }
  if (v5 == 0) {
    v8 = 0;
    goto LABEL_5;
  }
  v8 = std___1___shared_weak_count_lock(v5),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v8 == 0) {
  LABEL_5:
    v9 = nullptr;
    goto LABEL_6;
  }
  {
    v9 = *(__int64**)a2;
    __asm__ volatile("" ::"r"(v9));
  }
LABEL_6:
  v10 = 0;
  if (v9[2] == 0) {
    goto LABEL_24;
  }
  {
    v11 = v9[1];
    __asm__ volatile("" ::"r"(v11));
  }
  if (v11 == 0) {
    goto LABEL_24;
  }
  v12 = std___1___shared_weak_count_lock(v11),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v12 != 0) {
    {
      v13 = *v9;
      __asm__ volatile("" ::"r"(v13));
    }
    if (*v9 != 0) {
      {
        v3 = *(unsigned __int8*)(v13 + 24);
        __asm__ volatile("" ::"r"(v3));
      }
      v14 = v13 + 152;
      if (v3 == 0) {
        v14 = 0;
      }
      {
        v15 = v14 != v9[2];
        __asm__ volatile("" ::"r"(v15));
      }
    }
    else {
      v15 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v15) {
        goto LABEL_16;
      }
    }
    else {
      v17 = v12;
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      std___1___shared_weak_count___release_weak(v17),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (v15) {
        goto LABEL_16;
      }
    }
    v10 = 0;
    if ((v3 & 1) == 0) {
      goto LABEL_24;
    }
    goto LABEL_21;
  }
LABEL_16:
  {
    v16 = v9[1];
    __asm__ volatile("" ::"r"(v16));
  }
  v10 = 0;
  if (v16 != 0 && *(_QWORD*)(v16 + 8) != -1) {
  LABEL_21:
    {
      v18 = v9[2];
      __asm__ volatile("" ::"r"(v18));
    }
    if (v18 != 0) {
      {
        v19 = *(int32x4_t**)(v18 + 24);
        __asm__ volatile("" ::"r"(v19));
      }
      if (v19 != nullptr) {
        LODWORD(v10) = LANES128_OF(vdupq_laneq_s32(v19[7], 3)).n128_u32[0];
        HIDWORD(v10) = HIDWORD(LANES128(v19[8]).n128_u64[1]);
      }
    }
  }
LABEL_24:
  {
    v20 = *a3;
    __asm__ volatile("" ::"w"(v20));
  }
  {
    v21 = a3[1];
    __asm__ volatile("" ::"w"(v21));
  }
  v22 = 0;
  v23 = 0;
  v226_.v232 = 0;
  v226_.v233 = 0;
  v226_.v230 = 0;
  v226_.v231 = 0;
  v226_.v228 = 0;
  v226_.v229 = 0;
  v226_.v226 = 0;
  v226_.v227 = 0;
  {
    v224 = -(float)(*((float*)&v10 + 1) - (float)(v21 * 0x1.0000000000000p-1f));
    __asm__ volatile("" ::"w"(v224));
  }
  {
    v225 = *(float*)&v10 + (float)(v20 * 0x1.0000000000000p-1f);
    __asm__ volatile("" ::"w"(v225));
  }
  do {
    v27 = game_util_Format("Locator%02d", v23),
    v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v28 = ui_LayoutAccessor_FindPane(v9, (__int64)v27),
    v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v28 != 0) {
      {
        v29 = *(float*)(v28 + 48);
        __asm__ volatile("" ::"w"(v29));
      }
      {
        v30 = *(float*)(v28 + 52);
        __asm__ volatile("" ::"w"(v30));
      }
      ui_LayoutAccessor_GetScale(v9),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      ui_LayoutAccessor_GetScale(v9),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      {
        v31 = &a1[v22];
        __asm__ volatile("" ::"r"(v31));
      }
      v32 = 0x0.0p+0f;
      v33 = 0x0.0p+0f;
      {
        v34 = *(float*)&a1[v22 + 1];
        __asm__ volatile("" ::"w"(v34));
      }
      if (v34 > 0x0.0p+0f) {
        {
          v35 = *((float*)v31 + 2);
          __asm__ volatile("" ::"w"(v35));
        }
        if (v35 > 0x0.0p+0f) {
          v36 = v34 / v35;
          if (v36 <= 0x1.0000000000000p+0f) {
            v33 = v36;
          }
          else {
            v33 = 0x1.0000000000000p+0f;
          }
        }
      }
      v37 = ui_LayoutAccessor_GetScale(v9),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      {
        v38 = *((float*)v31 + 1);
        __asm__ volatile("" ::"w"(v38));
      }
      if (v38 > 0x0.0p+0f) {
        {
          v39 = *((float*)v31 + 2);
          __asm__ volatile("" ::"w"(v39));
        }
        if (v39 > 0x0.0p+0f) {
          v40 = v38 / v39;
          if (v40 <= 0x1.0000000000000p+0f) {
            v32 = v40;
          }
          else {
            v32 = 0x1.0000000000000p+0f;
          }
        }
      }
      v24 = (float)(v29 * v33) * v37;
      ui_LayoutAccessor_GetScale(v9),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v26 = (float*)((char*)&v226_.v226 + v22 * 4);
      *v26 = v225 + v24;
      v26[1] = v224 + (float)(PSEUDO_UNFUSED((float)(v32 * (float)-v30) * v25));
    }
    ++v23;
    v22 += 2;
  } while (v23 != 8);
  v41 = (__int64**)game_map_MapColorPalette_g_texture_archives;
  GameRoutine_1993840(**(_QWORD**)game_map_MapColorPalette_g_texture_archives),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v42 = (__int64******)PrimitiveDrawManager_1993480(*v41),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v43 = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ != 0) {
    {
      v44 = game_ProcFadeView_instance_ +
            ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
             << 6);
      __asm__ volatile("" ::"r"(v44));
    }
    if (*(float*)(v44 + 172) == *(float*)(v44 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v44 + 160) + 16LL))(v44 + 160),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    else {
      v45 = *(_OWORD*)(v44 + 208);
    }
    if (*((float*)&v45 + 3) == 0x1.0000000000000p+0f) {
      if (LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v44 + 160) + 16LL))(
                          v44 + 160, *((float*)&v45 + 3)))
              .n128_f32[3] == 0x1.0000000000000p+0f) {
        v43 = 1010;
      }
      else {
        v43 = 0;
      }
    }
    else {
      v43 = 0;
    }
  }
  {
    v46 = *v42;
    __asm__ volatile("" ::"r"(v46));
  }
  *((_DWORD*)v46 + 4332) = v43;
  {
    v47 = *v46;
    __asm__ volatile("" ::"r"(v47));
  }
  *((_BYTE*)v47 + 17395) = 1;
  {
    v48 = *v47;
    __asm__ volatile("" ::"r"(v48));
  }
  *((_DWORD*)v48 + 4351) = 3;
  {
    v49 = *v48;
    __asm__ volatile("" ::"r"(v49));
  }
  *((_DWORD*)v49 + 4330) = 0;
  {
    v50 = *v49;
    __asm__ volatile("" ::"r"(v50));
  }
  *((_DWORD*)v50 + 4327) = 1;
  {
    v51 = *v50;
    __asm__ volatile("" ::"r"(v51));
  }
  {
    v52 = *(float32x4_t**)v51;
    __asm__ volatile("" ::"r"(v52));
  }
  *(_OWORD*)(v51 + 17344) = *(_OWORD*)GameData_212c958;
  GameRoutine_1994460(v52),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  {
    v53 = **v41;
    __asm__ volatile("" ::"r"(v53));
  }
  {
    v54 = *(float32x4_t**)v53;
    __asm__ volatile("" ::"r"(v54));
  }
  *(_DWORD*)(v53 + 17308) = 0;
  GameRoutine_1994460(v54),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  {
    v59 = *a1;
    __asm__ volatile("" ::"r"(v59));
  }
  if (*a1 != 0) {
    if (v59 == 1) {
      v55 = GameData_22594dc;
    }
    else {
      if (v59 != 2) {
        goto LABEL_54;
      }
      v55 = GameData_22594e4;
    }
  }
  else {
    v55 = GameData_22594e0;
  }
  v56 = v55 >> 8;
  v57 = HIWORD(v55);
  v58 = HIBYTE(v55);
LABEL_54:
  v60 = (float)(unsigned __int8)v57;
  *(float*)&v67 = (float)(unsigned __int8)v55 / 0x1.fe00000000000p+7f;
  v61 = (float)(unsigned __int8)v58;
  v62 = game_map_MapColorPalette_g_texture_archives;
  {
    v63 = *(_QWORD*)game_map_MapColorPalette_g_texture_archives;
    __asm__ volatile("" ::"r"(v63));
  }
  {
    v64 = *(_QWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                     18736LL);
    __asm__ volatile("" ::"r"(v64));
  }
  *((float*)&v67 + 1) = (float)(unsigned __int8)v56 / 0x1.fe00000000000p+7f;
  {
    v65 = *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                     19200LL);
    __asm__ volatile("" ::"r"(v65));
  }
  {
    v66 = *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                     17280LL);
    __asm__ volatile("" ::"r"(v66));
  }
  *((float*)&v67 + 2) = v60 / 0x1.fe00000000000p+7f;
  *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives + 19200LL) =
      v65 + 1;
  *((float*)&v67 + 3) = v61 / 0x1.fe00000000000p+7f;
  v68 = v226_.v226;
  v69 = v226_.v227;
  if (v65 <= 262142) {
    {
      v70 = *(_QWORD*)(v63 + 19136) + 40LL * (v65 + 1);
      __asm__ volatile("" ::"r"(v70));
    }
    *(_QWORD*)(v70 + 8) = 0;
    *(_QWORD*)(v70 + 16) = 0;
    *(_OWORD*)(v70 + 24) = v67;
    *(_QWORD*)v70 = __PAIR64__(LODWORD(v224), LODWORD(v225));
    {
      v71 = v64 + 1440LL * v66 + 4LL * *(int*)(v64 + 1440LL * v66 + 256);
      __asm__ volatile("" ::"r"(v71));
    }
    ++*(_DWORD*)(v71 + 260);
  }
  {
    v72 = *(_QWORD*)v62;
    __asm__ volatile("" ::"r"(v72));
  }
  {
    v73 = *(_QWORD*)(*(_QWORD*)v62 + 18736LL);
    __asm__ volatile("" ::"r"(v73));
  }
  {
    v74 = *(_DWORD*)(*(_QWORD*)v62 + 19200LL);
    __asm__ volatile("" ::"r"(v74));
  }
  {
    v75 = *(_DWORD*)(*(_QWORD*)v62 + 17280LL);
    __asm__ volatile("" ::"r"(v75));
  }
  *(_DWORD*)(*(_QWORD*)v62 + 19200LL) = v74 + 1;
  if (v74 <= 262142) {
    {
      v76 = *(_QWORD*)(v72 + 19136) + 40LL * (v74 + 1);
      __asm__ volatile("" ::"r"(v76));
    }
    *(_QWORD*)v76 = v68;
    *(_QWORD*)(v76 + 8) = 0;
    *(_QWORD*)(v76 + 16) = 0;
    *(_OWORD*)(v76 + 24) = v67;
    {
      v77 = v73 + 1440LL * v75 + 4LL * *(int*)(v73 + 1440LL * v75 + 256);
      __asm__ volatile("" ::"r"(v77));
    }
    ++*(_DWORD*)(v77 + 260);
  }
  {
    v78 = *(_QWORD*)v62;
    __asm__ volatile("" ::"r"(v78));
  }
  {
    v79 = *(_QWORD*)(v78 + 18736);
    __asm__ volatile("" ::"r"(v79));
  }
  {
    v80 = *(_DWORD*)(v78 + 19200);
    __asm__ volatile("" ::"r"(v80));
  }
  {
    v81 = *(_DWORD*)(v78 + 17280);
    __asm__ volatile("" ::"r"(v81));
  }
  *(_DWORD*)(v78 + 19200) = v80 + 1;
  if (v80 <= 262142) {
    {
      v82 = *(_QWORD*)(v78 + 19136) + 40LL * (v80 + 1);
      __asm__ volatile("" ::"r"(v82));
    }
    *(_QWORD*)v82 = v69;
    *(_QWORD*)(v82 + 8) = 0;
    *(_QWORD*)(v82 + 16) = 0;
    *(_OWORD*)(v82 + 24) = v67;
    {
      v83 = v79 + 1440LL * v81 + 4LL * *(int*)(v79 + 1440LL * v81 + 256);
      __asm__ volatile("" ::"r"(v83));
    }
    ++*(_DWORD*)(v83 + 260);
  }
  v84 = game_map_MapColorPalette_g_texture_archives;
  v85 = v226_.v228;
  {
    v86 = *(_QWORD*)game_map_MapColorPalette_g_texture_archives;
    __asm__ volatile("" ::"r"(v86));
  }
  {
    v87 = *(_QWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                     18736LL);
    __asm__ volatile("" ::"r"(v87));
  }
  {
    v88 = *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                     19200LL);
    __asm__ volatile("" ::"r"(v88));
  }
  {
    v89 = *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                     17280LL);
    __asm__ volatile("" ::"r"(v89));
  }
  *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives + 19200LL) =
      v88 + 1;
  if (v88 <= 262142) {
    {
      v90 = *(_QWORD*)(v86 + 19136) + 40LL * (v88 + 1);
      __asm__ volatile("" ::"r"(v90));
    }
    *(_QWORD*)(v90 + 8) = 0;
    *(_QWORD*)(v90 + 16) = 0;
    *(_OWORD*)(v90 + 24) = v67;
    *(_QWORD*)v90 = __PAIR64__(LODWORD(v224), LODWORD(v225));
    {
      v91 = v87 + 1440LL * v89 + 4LL * *(int*)(v87 + 1440LL * v89 + 256);
      __asm__ volatile("" ::"r"(v91));
    }
    ++*(_DWORD*)(v91 + 260);
  }
  {
    v92 = *(_QWORD*)v84;
    __asm__ volatile("" ::"r"(v92));
  }
  {
    v93 = *(_QWORD*)(*(_QWORD*)v84 + 18736LL);
    __asm__ volatile("" ::"r"(v93));
  }
  {
    v94 = *(_DWORD*)(*(_QWORD*)v84 + 19200LL);
    __asm__ volatile("" ::"r"(v94));
  }
  {
    v95 = *(_DWORD*)(*(_QWORD*)v84 + 17280LL);
    __asm__ volatile("" ::"r"(v95));
  }
  *(_DWORD*)(*(_QWORD*)v84 + 19200LL) = v94 + 1;
  if (v94 <= 262142) {
    {
      v96 = *(_QWORD*)(v92 + 19136) + 40LL * (v94 + 1);
      __asm__ volatile("" ::"r"(v96));
    }
    *(_QWORD*)v96 = v69;
    *(_QWORD*)(v96 + 8) = 0;
    *(_QWORD*)(v96 + 16) = 0;
    *(_OWORD*)(v96 + 24) = v67;
    {
      v97 = v93 + 1440LL * v95 + 4LL * *(int*)(v93 + 1440LL * v95 + 256);
      __asm__ volatile("" ::"r"(v97));
    }
    ++*(_DWORD*)(v97 + 260);
  }
  {
    v98 = *(_QWORD*)v84;
    __asm__ volatile("" ::"r"(v98));
  }
  {
    v99 = *(_QWORD*)(v98 + 18736);
    __asm__ volatile("" ::"r"(v99));
  }
  {
    v100 = *(_DWORD*)(v98 + 19200);
    __asm__ volatile("" ::"r"(v100));
  }
  {
    v101 = *(_DWORD*)(v98 + 17280);
    __asm__ volatile("" ::"r"(v101));
  }
  *(_DWORD*)(v98 + 19200) = v100 + 1;
  if (v100 <= 262142) {
    {
      v102 = *(_QWORD*)(v98 + 19136) + 40LL * (v100 + 1);
      __asm__ volatile("" ::"r"(v102));
    }
    *(_QWORD*)v102 = v85;
    *(_QWORD*)(v102 + 8) = 0;
    *(_QWORD*)(v102 + 16) = 0;
    *(_OWORD*)(v102 + 24) = v67;
    {
      v103 = v99 + 1440LL * v101 + 4LL * *(int*)(v99 + 1440LL * v101 + 256);
      __asm__ volatile("" ::"r"(v103));
    }
    ++*(_DWORD*)(v103 + 260);
  }
  v104 = game_map_MapColorPalette_g_texture_archives;
  v105 = v226_.v229;
  {
    v106 = *(_QWORD*)game_map_MapColorPalette_g_texture_archives;
    __asm__ volatile("" ::"r"(v106));
  }
  {
    v107 = *(_QWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                      18736LL);
    __asm__ volatile("" ::"r"(v107));
  }
  {
    v108 = *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                      19200LL);
    __asm__ volatile("" ::"r"(v108));
  }
  {
    v109 = *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                      17280LL);
    __asm__ volatile("" ::"r"(v109));
  }
  *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives + 19200LL) =
      v108 + 1;
  if (v108 <= 262142) {
    {
      v110 = *(_QWORD*)(v106 + 19136) + 40LL * (v108 + 1);
      __asm__ volatile("" ::"r"(v110));
    }
    *(_QWORD*)(v110 + 8) = 0;
    *(_QWORD*)(v110 + 16) = 0;
    *(_OWORD*)(v110 + 24) = v67;
    *(_QWORD*)v110 = __PAIR64__(LODWORD(v224), LODWORD(v225));
    {
      v111 = v107 + 1440LL * v109 + 4LL * *(int*)(v107 + 1440LL * v109 + 256);
      __asm__ volatile("" ::"r"(v111));
    }
    ++*(_DWORD*)(v111 + 260);
  }
  {
    v112 = *(_QWORD*)v104;
    __asm__ volatile("" ::"r"(v112));
  }
  {
    v113 = *(_QWORD*)(*(_QWORD*)v104 + 18736LL);
    __asm__ volatile("" ::"r"(v113));
  }
  {
    v114 = *(_DWORD*)(*(_QWORD*)v104 + 19200LL);
    __asm__ volatile("" ::"r"(v114));
  }
  {
    v115 = *(_DWORD*)(*(_QWORD*)v104 + 17280LL);
    __asm__ volatile("" ::"r"(v115));
  }
  *(_DWORD*)(*(_QWORD*)v104 + 19200LL) = v114 + 1;
  if (v114 <= 262142) {
    {
      v116 = *(_QWORD*)(v112 + 19136) + 40LL * (v114 + 1);
      __asm__ volatile("" ::"r"(v116));
    }
    *(_QWORD*)v116 = v85;
    *(_QWORD*)(v116 + 8) = 0;
    *(_QWORD*)(v116 + 16) = 0;
    *(_OWORD*)(v116 + 24) = v67;
    {
      v117 = v113 + 1440LL * v115 + 4LL * *(int*)(v113 + 1440LL * v115 + 256);
      __asm__ volatile("" ::"r"(v117));
    }
    ++*(_DWORD*)(v117 + 260);
  }
  {
    v118 = *(_QWORD*)v104;
    __asm__ volatile("" ::"r"(v118));
  }
  {
    v119 = *(_QWORD*)(v118 + 18736);
    __asm__ volatile("" ::"r"(v119));
  }
  {
    v120 = *(_DWORD*)(v118 + 19200);
    __asm__ volatile("" ::"r"(v120));
  }
  {
    v121 = *(_DWORD*)(v118 + 17280);
    __asm__ volatile("" ::"r"(v121));
  }
  *(_DWORD*)(v118 + 19200) = v120 + 1;
  if (v120 <= 262142) {
    {
      v122 = *(_QWORD*)(v118 + 19136) + 40LL * (v120 + 1);
      __asm__ volatile("" ::"r"(v122));
    }
    *(_QWORD*)v122 = v105;
    *(_QWORD*)(v122 + 8) = 0;
    *(_QWORD*)(v122 + 16) = 0;
    *(_OWORD*)(v122 + 24) = v67;
    {
      v123 = v119 + 1440LL * v121 + 4LL * *(int*)(v119 + 1440LL * v121 + 256);
      __asm__ volatile("" ::"r"(v123));
    }
    ++*(_DWORD*)(v123 + 260);
  }
  v124 = game_map_MapColorPalette_g_texture_archives;
  v125 = v226_.v230;
  {
    v126 = *(_QWORD*)game_map_MapColorPalette_g_texture_archives;
    __asm__ volatile("" ::"r"(v126));
  }
  {
    v127 = *(_QWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                      18736LL);
    __asm__ volatile("" ::"r"(v127));
  }
  {
    v128 = *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                      19200LL);
    __asm__ volatile("" ::"r"(v128));
  }
  {
    v129 = *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                      17280LL);
    __asm__ volatile("" ::"r"(v129));
  }
  *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives + 19200LL) =
      v128 + 1;
  if (v128 <= 262142) {
    {
      v130 = *(_QWORD*)(v126 + 19136) + 40LL * (v128 + 1);
      __asm__ volatile("" ::"r"(v130));
    }
    *(_QWORD*)(v130 + 8) = 0;
    *(_QWORD*)(v130 + 16) = 0;
    *(_OWORD*)(v130 + 24) = v67;
    *(_QWORD*)v130 = __PAIR64__(LODWORD(v224), LODWORD(v225));
    {
      v131 = v127 + 1440LL * v129 + 4LL * *(int*)(v127 + 1440LL * v129 + 256);
      __asm__ volatile("" ::"r"(v131));
    }
    ++*(_DWORD*)(v131 + 260);
  }
  {
    v132 = *(_QWORD*)v124;
    __asm__ volatile("" ::"r"(v132));
  }
  {
    v133 = *(_QWORD*)(*(_QWORD*)v124 + 18736LL);
    __asm__ volatile("" ::"r"(v133));
  }
  {
    v134 = *(_DWORD*)(*(_QWORD*)v124 + 19200LL);
    __asm__ volatile("" ::"r"(v134));
  }
  {
    v135 = *(_DWORD*)(*(_QWORD*)v124 + 17280LL);
    __asm__ volatile("" ::"r"(v135));
  }
  *(_DWORD*)(*(_QWORD*)v124 + 19200LL) = v134 + 1;
  if (v134 <= 262142) {
    {
      v136 = *(_QWORD*)(v132 + 19136) + 40LL * (v134 + 1);
      __asm__ volatile("" ::"r"(v136));
    }
    *(_QWORD*)v136 = v105;
    *(_QWORD*)(v136 + 8) = 0;
    *(_QWORD*)(v136 + 16) = 0;
    *(_OWORD*)(v136 + 24) = v67;
    {
      v137 = v133 + 1440LL * v135 + 4LL * *(int*)(v133 + 1440LL * v135 + 256);
      __asm__ volatile("" ::"r"(v137));
    }
    ++*(_DWORD*)(v137 + 260);
  }
  {
    v138 = *(_QWORD*)v124;
    __asm__ volatile("" ::"r"(v138));
  }
  {
    v139 = *(_QWORD*)(v138 + 18736);
    __asm__ volatile("" ::"r"(v139));
  }
  {
    v140 = *(_DWORD*)(v138 + 19200);
    __asm__ volatile("" ::"r"(v140));
  }
  {
    v141 = *(_DWORD*)(v138 + 17280);
    __asm__ volatile("" ::"r"(v141));
  }
  *(_DWORD*)(v138 + 19200) = v140 + 1;
  if (v140 <= 262142) {
    {
      v142 = *(_QWORD*)(v138 + 19136) + 40LL * (v140 + 1);
      __asm__ volatile("" ::"r"(v142));
    }
    *(_QWORD*)v142 = v125;
    *(_QWORD*)(v142 + 8) = 0;
    *(_QWORD*)(v142 + 16) = 0;
    *(_OWORD*)(v142 + 24) = v67;
    {
      v143 = v139 + 1440LL * v141 + 4LL * *(int*)(v139 + 1440LL * v141 + 256);
      __asm__ volatile("" ::"r"(v143));
    }
    ++*(_DWORD*)(v143 + 260);
  }
  v144 = game_map_MapColorPalette_g_texture_archives;
  v145 = v226_.v231;
  {
    v146 = *(_QWORD*)game_map_MapColorPalette_g_texture_archives;
    __asm__ volatile("" ::"r"(v146));
  }
  {
    v147 = *(_QWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                      18736LL);
    __asm__ volatile("" ::"r"(v147));
  }
  {
    v148 = *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                      19200LL);
    __asm__ volatile("" ::"r"(v148));
  }
  {
    v149 = *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                      17280LL);
    __asm__ volatile("" ::"r"(v149));
  }
  *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives + 19200LL) =
      v148 + 1;
  if (v148 <= 262142) {
    {
      v150 = *(_QWORD*)(v146 + 19136) + 40LL * (v148 + 1);
      __asm__ volatile("" ::"r"(v150));
    }
    *(_QWORD*)(v150 + 8) = 0;
    *(_QWORD*)(v150 + 16) = 0;
    *(_OWORD*)(v150 + 24) = v67;
    *(_QWORD*)v150 = __PAIR64__(LODWORD(v224), LODWORD(v225));
    {
      v151 = v147 + 1440LL * v149 + 4LL * *(int*)(v147 + 1440LL * v149 + 256);
      __asm__ volatile("" ::"r"(v151));
    }
    ++*(_DWORD*)(v151 + 260);
  }
  {
    v152 = *(_QWORD*)v144;
    __asm__ volatile("" ::"r"(v152));
  }
  {
    v153 = *(_QWORD*)(*(_QWORD*)v144 + 18736LL);
    __asm__ volatile("" ::"r"(v153));
  }
  {
    v154 = *(_DWORD*)(*(_QWORD*)v144 + 19200LL);
    __asm__ volatile("" ::"r"(v154));
  }
  {
    v155 = *(_DWORD*)(*(_QWORD*)v144 + 17280LL);
    __asm__ volatile("" ::"r"(v155));
  }
  *(_DWORD*)(*(_QWORD*)v144 + 19200LL) = v154 + 1;
  if (v154 <= 262142) {
    {
      v156 = *(_QWORD*)(v152 + 19136) + 40LL * (v154 + 1);
      __asm__ volatile("" ::"r"(v156));
    }
    *(_QWORD*)v156 = v125;
    *(_QWORD*)(v156 + 8) = 0;
    *(_QWORD*)(v156 + 16) = 0;
    *(_OWORD*)(v156 + 24) = v67;
    {
      v157 = v153 + 1440LL * v155 + 4LL * *(int*)(v153 + 1440LL * v155 + 256);
      __asm__ volatile("" ::"r"(v157));
    }
    ++*(_DWORD*)(v157 + 260);
  }
  {
    v158 = *(_QWORD*)v144;
    __asm__ volatile("" ::"r"(v158));
  }
  {
    v159 = *(_QWORD*)(v158 + 18736);
    __asm__ volatile("" ::"r"(v159));
  }
  {
    v160 = *(_DWORD*)(v158 + 19200);
    __asm__ volatile("" ::"r"(v160));
  }
  {
    v161 = *(_DWORD*)(v158 + 17280);
    __asm__ volatile("" ::"r"(v161));
  }
  *(_DWORD*)(v158 + 19200) = v160 + 1;
  if (v160 <= 262142) {
    {
      v162 = *(_QWORD*)(v158 + 19136) + 40LL * (v160 + 1);
      __asm__ volatile("" ::"r"(v162));
    }
    *(_QWORD*)v162 = v145;
    *(_QWORD*)(v162 + 8) = 0;
    *(_QWORD*)(v162 + 16) = 0;
    *(_OWORD*)(v162 + 24) = v67;
    {
      v163 = v159 + 1440LL * v161 + 4LL * *(int*)(v159 + 1440LL * v161 + 256);
      __asm__ volatile("" ::"r"(v163));
    }
    ++*(_DWORD*)(v163 + 260);
  }
  v164 = game_map_MapColorPalette_g_texture_archives;
  v165 = v226_.v232;
  {
    v166 = *(_QWORD*)game_map_MapColorPalette_g_texture_archives;
    __asm__ volatile("" ::"r"(v166));
  }
  {
    v167 = *(_QWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                      18736LL);
    __asm__ volatile("" ::"r"(v167));
  }
  {
    v168 = *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                      19200LL);
    __asm__ volatile("" ::"r"(v168));
  }
  {
    v169 = *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                      17280LL);
    __asm__ volatile("" ::"r"(v169));
  }
  *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives + 19200LL) =
      v168 + 1;
  if (v168 <= 262142) {
    {
      v170 = *(_QWORD*)(v166 + 19136) + 40LL * (v168 + 1);
      __asm__ volatile("" ::"r"(v170));
    }
    *(_QWORD*)(v170 + 8) = 0;
    *(_QWORD*)(v170 + 16) = 0;
    *(_OWORD*)(v170 + 24) = v67;
    *(_QWORD*)v170 = __PAIR64__(LODWORD(v224), LODWORD(v225));
    {
      v171 = v167 + 1440LL * v169 + 4LL * *(int*)(v167 + 1440LL * v169 + 256);
      __asm__ volatile("" ::"r"(v171));
    }
    ++*(_DWORD*)(v171 + 260);
  }
  {
    v172 = *(_QWORD*)v164;
    __asm__ volatile("" ::"r"(v172));
  }
  {
    v173 = *(_QWORD*)(*(_QWORD*)v164 + 18736LL);
    __asm__ volatile("" ::"r"(v173));
  }
  {
    v174 = *(_DWORD*)(*(_QWORD*)v164 + 19200LL);
    __asm__ volatile("" ::"r"(v174));
  }
  {
    v175 = *(_DWORD*)(*(_QWORD*)v164 + 17280LL);
    __asm__ volatile("" ::"r"(v175));
  }
  *(_DWORD*)(*(_QWORD*)v164 + 19200LL) = v174 + 1;
  if (v174 <= 262142) {
    {
      v176 = *(_QWORD*)(v172 + 19136) + 40LL * (v174 + 1);
      __asm__ volatile("" ::"r"(v176));
    }
    *(_QWORD*)v176 = v145;
    *(_QWORD*)(v176 + 8) = 0;
    *(_QWORD*)(v176 + 16) = 0;
    *(_OWORD*)(v176 + 24) = v67;
    {
      v177 = v173 + 1440LL * v175 + 4LL * *(int*)(v173 + 1440LL * v175 + 256);
      __asm__ volatile("" ::"r"(v177));
    }
    ++*(_DWORD*)(v177 + 260);
  }
  {
    v178 = *(_QWORD*)v164;
    __asm__ volatile("" ::"r"(v178));
  }
  {
    v179 = *(_QWORD*)(v178 + 18736);
    __asm__ volatile("" ::"r"(v179));
  }
  {
    v180 = *(_DWORD*)(v178 + 19200);
    __asm__ volatile("" ::"r"(v180));
  }
  {
    v181 = *(_DWORD*)(v178 + 17280);
    __asm__ volatile("" ::"r"(v181));
  }
  *(_DWORD*)(v178 + 19200) = v180 + 1;
  if (v180 <= 262142) {
    {
      v182 = *(_QWORD*)(v178 + 19136) + 40LL * (v180 + 1);
      __asm__ volatile("" ::"r"(v182));
    }
    *(_QWORD*)v182 = v165;
    *(_QWORD*)(v182 + 8) = 0;
    *(_QWORD*)(v182 + 16) = 0;
    *(_OWORD*)(v182 + 24) = v67;
    {
      v183 = v179 + 1440LL * v181 + 4LL * *(int*)(v179 + 1440LL * v181 + 256);
      __asm__ volatile("" ::"r"(v183));
    }
    ++*(_DWORD*)(v183 + 260);
  }
  v184 = game_map_MapColorPalette_g_texture_archives;
  v185 = v226_.v233;
  {
    v186 = *(_QWORD*)game_map_MapColorPalette_g_texture_archives;
    __asm__ volatile("" ::"r"(v186));
  }
  {
    v187 = *(_QWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                      18736LL);
    __asm__ volatile("" ::"r"(v187));
  }
  {
    v188 = *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                      19200LL);
    __asm__ volatile("" ::"r"(v188));
  }
  {
    v189 = *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                      17280LL);
    __asm__ volatile("" ::"r"(v189));
  }
  *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives + 19200LL) =
      v188 + 1;
  if (v188 <= 262142) {
    {
      v190 = *(_QWORD*)(v186 + 19136) + 40LL * (v188 + 1);
      __asm__ volatile("" ::"r"(v190));
    }
    *(_QWORD*)(v190 + 8) = 0;
    *(_QWORD*)(v190 + 16) = 0;
    *(_OWORD*)(v190 + 24) = v67;
    *(_QWORD*)v190 = __PAIR64__(LODWORD(v224), LODWORD(v225));
    {
      v191 = v187 + 1440LL * v189 + 4LL * *(int*)(v187 + 1440LL * v189 + 256);
      __asm__ volatile("" ::"r"(v191));
    }
    ++*(_DWORD*)(v191 + 260);
  }
  {
    v192 = *(_QWORD*)v184;
    __asm__ volatile("" ::"r"(v192));
  }
  {
    v193 = *(_QWORD*)(*(_QWORD*)v184 + 18736LL);
    __asm__ volatile("" ::"r"(v193));
  }
  {
    v194 = *(_DWORD*)(*(_QWORD*)v184 + 19200LL);
    __asm__ volatile("" ::"r"(v194));
  }
  {
    v195 = *(_DWORD*)(*(_QWORD*)v184 + 17280LL);
    __asm__ volatile("" ::"r"(v195));
  }
  *(_DWORD*)(*(_QWORD*)v184 + 19200LL) = v194 + 1;
  if (v194 <= 262142) {
    {
      v196 = *(_QWORD*)(v192 + 19136) + 40LL * (v194 + 1);
      __asm__ volatile("" ::"r"(v196));
    }
    *(_QWORD*)v196 = v165;
    *(_QWORD*)(v196 + 8) = 0;
    *(_QWORD*)(v196 + 16) = 0;
    *(_OWORD*)(v196 + 24) = v67;
    {
      v197 = v193 + 1440LL * v195 + 4LL * *(int*)(v193 + 1440LL * v195 + 256);
      __asm__ volatile("" ::"r"(v197));
    }
    ++*(_DWORD*)(v197 + 260);
  }
  {
    v198 = *(_QWORD*)v184;
    __asm__ volatile("" ::"r"(v198));
  }
  {
    v199 = *(_QWORD*)(v198 + 18736);
    __asm__ volatile("" ::"r"(v199));
  }
  {
    v200 = *(_DWORD*)(v198 + 19200);
    __asm__ volatile("" ::"r"(v200));
  }
  {
    v201 = *(_DWORD*)(v198 + 17280);
    __asm__ volatile("" ::"r"(v201));
  }
  *(_DWORD*)(v198 + 19200) = v200 + 1;
  if (v200 <= 262142) {
    {
      v202 = *(_QWORD*)(v198 + 19136) + 40LL * (v200 + 1);
      __asm__ volatile("" ::"r"(v202));
    }
    *(_QWORD*)v202 = v185;
    *(_QWORD*)(v202 + 8) = 0;
    *(_QWORD*)(v202 + 16) = 0;
    *(_OWORD*)(v202 + 24) = v67;
    {
      v203 = v199 + 1440LL * v201 + 4LL * *(int*)(v199 + 1440LL * v201 + 256);
      __asm__ volatile("" ::"r"(v203));
    }
    ++*(_DWORD*)(v203 + 260);
  }
  v204 = game_map_MapColorPalette_g_texture_archives;
  {
    v205 = *(_QWORD*)game_map_MapColorPalette_g_texture_archives;
    __asm__ volatile("" ::"r"(v205));
  }
  {
    v206 = *(_QWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                      18736LL);
    __asm__ volatile("" ::"r"(v206));
  }
  {
    v207 = *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                      19200LL);
    __asm__ volatile("" ::"r"(v207));
  }
  {
    v208 = *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                      17280LL);
    __asm__ volatile("" ::"r"(v208));
  }
  *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives + 19200LL) =
      v207 + 1;
  if (v207 <= 262142) {
    {
      v209 = *(_QWORD*)(v205 + 19136) + 40LL * (v207 + 1);
      __asm__ volatile("" ::"r"(v209));
    }
    *(_QWORD*)(v209 + 8) = 0;
    *(_QWORD*)(v209 + 16) = 0;
    *(_OWORD*)(v209 + 24) = v67;
    *(_QWORD*)v209 = __PAIR64__(LODWORD(v224), LODWORD(v225));
    {
      v210 = v206 + 1440LL * v208 + 4LL * *(int*)(v206 + 1440LL * v208 + 256);
      __asm__ volatile("" ::"r"(v210));
    }
    ++*(_DWORD*)(v210 + 260);
  }
  {
    v211 = *(_QWORD*)v204;
    __asm__ volatile("" ::"r"(v211));
  }
  {
    v212 = *(_QWORD*)(*(_QWORD*)v204 + 18736LL);
    __asm__ volatile("" ::"r"(v212));
  }
  {
    v213 = *(_DWORD*)(*(_QWORD*)v204 + 19200LL);
    __asm__ volatile("" ::"r"(v213));
  }
  {
    v214 = *(_DWORD*)(*(_QWORD*)v204 + 17280LL);
    __asm__ volatile("" ::"r"(v214));
  }
  *(_DWORD*)(*(_QWORD*)v204 + 19200LL) = v213 + 1;
  if (v213 <= 262142) {
    {
      v215 = *(_QWORD*)(v211 + 19136) + 40LL * (v213 + 1);
      __asm__ volatile("" ::"r"(v215));
    }
    *(_QWORD*)v215 = v185;
    *(_QWORD*)(v215 + 8) = 0;
    *(_QWORD*)(v215 + 16) = 0;
    *(_OWORD*)(v215 + 24) = v67;
    {
      v216 = v212 + 1440LL * v214 + 4LL * *(int*)(v212 + 1440LL * v214 + 256);
      __asm__ volatile("" ::"r"(v216));
    }
    ++*(_DWORD*)(v216 + 260);
  }
  {
    v217 = *(_QWORD*)v204;
    __asm__ volatile("" ::"r"(v217));
  }
  {
    v218 = *(_QWORD*)(v217 + 18736);
    __asm__ volatile("" ::"r"(v218));
  }
  {
    v219 = *(_DWORD*)(v217 + 19200);
    __asm__ volatile("" ::"r"(v219));
  }
  {
    v220 = *(_DWORD*)(v217 + 17280);
    __asm__ volatile("" ::"r"(v220));
  }
  *(_DWORD*)(v217 + 19200) = v219 + 1;
  if (v219 <= 262142) {
    {
      v221 = *(_QWORD*)(v217 + 19136) + 40LL * (v219 + 1);
      __asm__ volatile("" ::"r"(v221));
    }
    *(_QWORD*)v221 = v68;
    *(_QWORD*)(v221 + 8) = 0;
    *(_QWORD*)(v221 + 16) = 0;
    *(_OWORD*)(v221 + 24) = v67;
    {
      v222 = v218 + 1440LL * v220 + 4LL * *(int*)(v218 + 1440LL * v220 + 256);
      __asm__ volatile("" ::"r"(v222));
    }
    ++*(_DWORD*)(v222 + 260);
  }
  result = PrimitiveDrawManager_1994180(**v41),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s1", "=w")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

#pragma GCC visibility pop
