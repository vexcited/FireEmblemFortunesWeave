#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Camera_7c0130(_QWORD, _QWORD);
__int64 Camera_7c0260(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN game_g_random_mutex;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212d270;
extern __int64 GameData_21cd140;
extern int GameData_21d92e0;
void kaneko_disposable_10abc40(char* a1, char* a2, char* a3, __int64 a4,
                               __int64 a5, _QWORD* a6, __int64 a7);
float kaneko_disposable_10ac520(__int64 a1, _DWORD* a2, int a3);

void kaneko_disposable_10abc40(char* a1, char* a2, char* a3, __int64 a4,
                               __int64 a5, _QWORD* a6, __int64 a7)
{
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  char* v17;
  __int64 v18;
  bool v19;
  float v20;
  char* v22;
  unsigned __int64 v23;
  __int64 v24;
  _QWORD* v25;
  char* v26;
  unsigned __int64 v27;
  char* v28;
  char* v29;
  __int64 v30;
  __int64 v32;
  bool v33;
  float v34;
  float v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  char* v39;
  unsigned __int64 v40;
  char* v41;
  __int64 v42;
  __int64 v43;
  __int64 v45;
  bool v46;
  float v47;
  char* v48;
  char* v49;
  __int64 v50;
  char* i;
  char* v52;
  __int64 v53;
  char* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  char* v61;
  char* v62;
  char* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  _BOOL4 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  char* v83;
  _QWORD* v84;
  char* v85;
  _QWORD* v86;
  _QWORD* v87;
  _QWORD* v88;
  char* v89;
  __int64 v90;
  _QWORD* v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  bool v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  float v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  _QWORD* v105;
  char* v106;
  char* v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v112;
  float v114;
  __int64 v115;
  char* v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  _QWORD* v125;
  char* v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  _QWORD* v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64* v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  _QWORD* v139;
  _QWORD* v140;
  __int64 v141;
  char* v142;
  char* v143;
  __int64 v145;

  v145 = a5;
  if (a5 == 0) {
    return;
  }
  while (a4 > a7 && v145 > a7) {
    if (a4 == 0) {
      return;
    }
    v12 = *((_QWORD*)a2 + 1);
    if (v12 == 0) {
      return;
    }
    v13 = 0;
    v14 = -a4;
  LABEL_7:
    v15 = *((_QWORD*)a2 + 2);
    v16 = *(_QWORD*)(v12 + 8) == -1 || v15 == 0;
    if (v16 ||
        (v17 = &a1[v13], (v18 = *(_QWORD*)&a1[v13 + 8]) != 0) &&
            (*(_QWORD*)(v18 + 8) != -1 ? (v19 = *((_QWORD*)v17 + 2) == 0)
                                       : (v19 = true),
             !v19 &&
                 (v20 = (*(float (**)(__int64))(*(_QWORD*)v15 + 144LL))(v15)) >=
                     (*(float (**)(_QWORD))(**((_QWORD**)v17 + 2) + 144LL))(
                         *((_QWORD*)v17 + 2)))) {
      while (!__CFADD__(v14++, 1)) {
        v12 = *((_QWORD*)a2 + 1);
        v13 += 24;
        if (v12 != 0) {
          goto LABEL_7;
        }
      }
      return;
    }
    v143 = a3;
    if (-v14 >= v145) {
      if (v14 == -1) {
        v116 = &a1[v13];
        v117 = *(_QWORD*)&a1[v13];
        v118 = *(_QWORD*)&a1[v13 + 8];
        *(_QWORD*)v116 = 0;
        *((_QWORD*)v116 + 1) = 0;
        v119 = *(_QWORD*)&a1[v13 + 16];
        v120 = *(_QWORD*)a2;
        v121 = *((_QWORD*)a2 + 1);
        *(_QWORD*)a2 = 0;
        *((_QWORD*)a2 + 1) = 0;
        v122 = *((_QWORD*)v116 + 1);
        *(_QWORD*)v116 = v120;
        *((_QWORD*)v116 + 1) = v121;
        if (v122 != 0) {
          std___1___shared_weak_count___release_weak(v122);
        }
        *((_QWORD*)v116 + 2) = *((_QWORD*)a2 + 2);
        v123 = *((_QWORD*)a2 + 1);
        *(_QWORD*)a2 = v117;
        *((_QWORD*)a2 + 1) = v118;
        if (v123 != 0) {
          std___1___shared_weak_count___release_weak(v123);
        }
        *((_QWORD*)a2 + 2) = v119;
        return;
      }
      v36 = -v14 / 2;
      v37 = a3 - a2;
      if (a3 == a2) {
        v48 = a3;
      }
      else {
        v139 = a6;
        a3 = a2;
        v38 = 0xAAAAAAAAAAAAAAABLL * (v37 >> 3);
        v39 = &a1[24 * v36 + v13];
        do {
          v40 = v38 >> 1;
          v41 = &a3[24 * (v38 >> 1)];
          v42 = *((_QWORD*)v41 + 1);
          if (v42 != 0) {
            v43 = *((_QWORD*)v41 + 2);
            if (*(_QWORD*)(v42 + 8) != -1 && v43 != 0) {
              v45 = *((_QWORD*)v39 + 1);
              if (v45 == 0 ||
                  (*(_QWORD*)(v45 + 8) != -1 ? (v46 = *((_QWORD*)v39 + 2) == 0)
                                             : (v46 = true),
                   v46 || (v47 = (*(float (**)(__int64))(*(_QWORD*)v43 +
                                                         144LL))(v43)) <
                              (*(float (**)(_QWORD))(**((_QWORD**)v39 + 2) +
                                                     144LL))(
                                  *((_QWORD*)v39 + 2)))) {
                a3 = v41 + 24;
                v40 = v38 + ~v40;
              }
            }
          }
          v38 = v40;
        } while (v40 != 0);
        v36 = -v14 / 2;
        a6 = v139;
        v48 = a2;
      }
      v49 = &a1[24 * v36 + v13];
      v141 = 0xAAAAAAAAAAAAAAABLL * ((a3 - v48) >> 3);
    }
    else {
      a3 = &a2[24 * (v145 / 2)];
      v141 = v145 / 2;
      if (v17 == a2) {
        v22 = a2;
        v26 = a2;
      }
      else {
        v22 = &a1[v13];
        v23 = 0xAAAAAAAAAAAAAAABLL * ((a2 - a1 - v13) >> 3);
        v24 = *((_QWORD*)a3 + 1);
        if (v24 != 0) {
          v25 = a6;
          v26 = v17;
          while (1) {
            v27 = v23 >> 1;
            v28 = &v26[24 * (v23 >> 1)];
            if (v24 == 0) {
              break;
            }
            v29 = v26;
            v30 = *((_QWORD*)a3 + 2);
            if (*(_QWORD*)(v24 + 8) == -1 || v30 == 0) {
              break;
            }
            v32 = *((_QWORD*)v28 + 1);
            if (v32 == 0 ||
                (*(_QWORD*)(v32 + 8) != -1 ? (v33 = *((_QWORD*)v28 + 2) == 0)
                                           : (v33 = true),
                 v33)) {
              v26 = v29;
            }
            else {
              v34 = (*(float (**)(__int64))(*(_QWORD*)v30 + 144LL))(v30);
              v35 = (*(float (**)(_QWORD))(**((_QWORD**)v28 + 2) + 144LL))(
                  *((_QWORD*)v28 + 2));
              v26 = v29;
              if (v34 >= v35) {
                break;
              }
            }
          LABEL_38:
            if (v27 == 0) {
              a6 = v25;
              goto LABEL_66;
            }
            v24 = *((_QWORD*)a3 + 1);
            v23 = v27;
          }
          v26 = v28 + 24;
          v27 = v23 + ~v27;
          goto LABEL_38;
        }
        v26 = v17;
        do {
          v26 += 24 * (v23 >> 1) + 24;
          v23 += ~(v23 >> 1);
        } while (v23 != 0);
      }
    LABEL_66:
      v49 = v26;
      v36 = 0xAAAAAAAAAAAAAAABLL * ((v26 - v22) >> 3);
    }
    v50 = v145;
    i = a3;
    v142 = v49;
    if (v49 != a2) {
      i = v49;
      if (a2 != a3) {
        v138 = v36;
        v140 = a6;
        v52 = a2;
        for (i = v49 + 24;; i += 24) {
          v53 = *((_QWORD*)i - 3);
          v55 = *((_QWORD*)i - 2);
          v54 = i - 24;
          *(_QWORD*)v54 = 0;
          *((_QWORD*)v54 + 1) = 0;
          v56 = *((_QWORD*)i - 1);
          v57 = *(_QWORD*)v52;
          v58 = *((_QWORD*)v52 + 1);
          *(_QWORD*)v52 = 0;
          *((_QWORD*)v52 + 1) = 0;
          v59 = *((_QWORD*)i - 2);
          *(_QWORD*)v54 = v57;
          *((_QWORD*)v54 + 1) = v58;
          if (v59 != 0) {
            std___1___shared_weak_count___release_weak(v59);
          }
          *((_QWORD*)i - 1) = *((_QWORD*)v52 + 2);
          v60 = *((_QWORD*)v52 + 1);
          *(_QWORD*)v52 = v53;
          *((_QWORD*)v52 + 1) = v55;
          if (v60 != 0) {
            std___1___shared_weak_count___release_weak(v60);
          }
          *((_QWORD*)v52 + 2) = v56;
          v52 += 24;
          v61 = i;
          if (v52 == a3) {
            break;
          }
          if (v61 == a2) {
            a2 = v52;
          }
        }
        if (i != a2) {
          v62 = i;
          v63 = a2;
          while (1) {
            v65 = *(_QWORD*)v62;
            v64 = *((_QWORD*)v62 + 1);
            *(_QWORD*)v62 = 0;
            *((_QWORD*)v62 + 1) = 0;
            v66 = *((_QWORD*)v62 + 2);
            v67 = *(_QWORD*)v63;
            v68 = *((_QWORD*)v63 + 1);
            *(_QWORD*)v63 = 0;
            *((_QWORD*)v63 + 1) = 0;
            v69 = *((_QWORD*)v62 + 1);
            *(_QWORD*)v62 = v67;
            *((_QWORD*)v62 + 1) = v68;
            if (v69 != 0) {
              std___1___shared_weak_count___release_weak(v69);
            }
            *((_QWORD*)v62 + 2) = *((_QWORD*)v63 + 2);
            v70 = *((_QWORD*)v63 + 1);
            *(_QWORD*)v63 = v65;
            *((_QWORD*)v63 + 1) = v64;
            if (v70 != 0) {
              std___1___shared_weak_count___release_weak(v70);
            }
            v62 += 24;
            *((_QWORD*)v63 + 2) = v66;
            v63 += 24;
            v71 = v62 == a2;
            if (v63 == a3) {
              if (v62 == a2) {
                break;
              }
              v63 = a2 + 24;
              while (1) {
                v73 = *(_QWORD*)v62;
                v72 = *((_QWORD*)v62 + 1);
                *(_QWORD*)v62 = 0;
                *((_QWORD*)v62 + 1) = 0;
                v74 = *((_QWORD*)v62 + 2);
                v75 = *(_QWORD*)a2;
                v76 = *((_QWORD*)a2 + 1);
                *(_QWORD*)a2 = 0;
                *((_QWORD*)a2 + 1) = 0;
                v77 = *((_QWORD*)v62 + 1);
                *(_QWORD*)v62 = v75;
                *((_QWORD*)v62 + 1) = v76;
                if (v77 != 0) {
                  std___1___shared_weak_count___release_weak(v77);
                }
                *((_QWORD*)v62 + 2) = *((_QWORD*)a2 + 2);
                v78 = *((_QWORD*)a2 + 1);
                *(_QWORD*)a2 = v73;
                *((_QWORD*)a2 + 1) = v72;
                if (v78 != 0) {
                  std___1___shared_weak_count___release_weak(v78);
                }
                v62 += 24;
                *((_QWORD*)a2 + 2) = v74;
                v71 = v62 == a2;
                if (v63 != a3) {
                  break;
                }
                if (v62 == a2) {
                  goto LABEL_95;
                }
              }
            }
            if (v71) {
              a2 = v63;
            }
          }
        }
      LABEL_95:
        v36 = v138;
        a6 = v140;
        v50 = v145;
      }
    }
    v79 = v36;
    a4 = -(v36 + v14);
    v80 = v50 - v141;
    if (v36 + v141 >= v50 - (v36 + v141) - v14) {
      kaneko_disposable_10abc40(i, a3, v143, -(v36 + v14), v80, a6, a7);
      a3 = v142;
      v80 = v141;
      a4 = v79;
      v143 = i;
    }
    else {
      kaneko_disposable_10abc40(v17, v142, i, v36, v141, a6, a7);
      v17 = i;
    }
    a2 = a3;
    a3 = v143;
    v145 = v80;
    a1 = v17;
    if (v80 == 0) {
      return;
    }
  }
  if (a4 > v145) {
    if (a2 == a3) {
      return;
    }
    v81 = 0;
    v82 = 0;
    do {
      v83 = &a2[v81 * 8];
      v84 = &a6[v81];
      ++v82;
      v81 += 3;
      *v84 = *(_QWORD*)v83;
      v84[1] = *((_QWORD*)v83 + 1);
      *(_QWORD*)v83 = 0;
      *((_QWORD*)v83 + 1) = 0;
      v84[2] = *((_QWORD*)v83 + 2);
    } while (v83 + 24 != a3);
    v85 = a3 - 8;
    v86 = a6;
    v87 = &a6[v81];
    while (1) {
      if (a2 == a1) {
        if (v86 != v87) {
          v130 = v87;
          do {
            v132 = *(v130 - 3);
            v133 = *(v130 - 2);
            v130 -= 3;
            *v130 = 0;
            v130[1] = 0;
            v134 = *((_QWORD*)v85 - 1);
            *((_QWORD*)v85 - 2) = v132;
            *((_QWORD*)v85 - 1) = v133;
            if (v134 != 0) {
              std___1___shared_weak_count___release_weak(v134);
            }
            v131 = *(v87 - 1);
            v87 = v130;
            *(_QWORD*)v85 = v131;
            v85 -= 24;
          } while (v130 != v86);
        }
        goto LABEL_164;
      }
      v104 = *(v87 - 2);
      if (v104 != 0) {
        v110 = *(v87 - 1);
        if (*(_QWORD*)(v104 + 8) != -1 && v110 != 0) {
          v112 = *((_QWORD*)a2 - 2);
          if (v112 == 0) {
            goto LABEL_148;
          }
          if (*(_QWORD*)(v112 + 8) == -1 || *((_QWORD*)a2 - 1) == 0) {
            goto LABEL_148;
          }
          v114 = (*(float (**)(__int64))(*(_QWORD*)v110 + 144LL))(v110);
          if (v114 < (*(float (**)(_QWORD))(**((_QWORD**)a2 - 1) + 144LL))(
                         *((_QWORD*)a2 - 1))) {
            v112 = *((_QWORD*)a2 - 2);
          LABEL_148:
            v107 = a2 - 24;
            v106 = a2;
            v105 = v87;
            v115 = *((_QWORD*)a2 - 3);
            *(_QWORD*)v107 = 0;
            *((_QWORD*)v107 + 1) = 0;
            a2 -= 24;
            v109 = *((_QWORD*)v85 - 1);
            *((_QWORD*)v85 - 2) = v115;
            *((_QWORD*)v85 - 1) = v112;
            if (v109 == 0) {
              goto LABEL_134;
            }
          LABEL_133:
            std___1___shared_weak_count___release_weak(v109);
            a2 = v107;
            v87 = v105;
            goto LABEL_134;
          }
          v104 = *(v87 - 2);
        }
      }
      v105 = v87 - 3;
      v106 = (char*)v87;
      v107 = a2;
      v108 = *(v87 - 3);
      *v105 = 0;
      v105[1] = 0;
      v87 -= 3;
      v109 = *((_QWORD*)v85 - 1);
      *((_QWORD*)v85 - 2) = v108;
      *((_QWORD*)v85 - 1) = v104;
      if (v109 != 0) {
        goto LABEL_133;
      }
    LABEL_134:
      *(_QWORD*)v85 = *((_QWORD*)v106 - 1);
      v85 -= 24;
      if (v87 == v86) {
        goto LABEL_164;
      }
    }
  }
  if (a1 == a2) {
    return;
  }
  v82 = 0;
  v88 = a6;
  v89 = a1;
  do {
    ++v82;
    *v88 = *(_QWORD*)v89;
    v88[1] = *((_QWORD*)v89 + 1);
    *(_QWORD*)v89 = 0;
    *((_QWORD*)v89 + 1) = 0;
    v90 = *((_QWORD*)v89 + 2);
    v89 += 24;
    v88[2] = v90;
    v88 += 3;
  } while (v89 != a2);
  v91 = v88 - 3;
  v86 = a6;
  while (a2 != a3) {
    v93 = *((_QWORD*)a2 + 1);
    if (v93 == 0 || ((v94 = *((_QWORD*)a2 + 2), *(_QWORD*)(v93 + 8) != -1)
                         ? (v95 = v94 == 0)
                         : (v95 = true),
                     v95)) {
    LABEL_119:
      v96 = *a6;
      v97 = a6[1];
      *a6 = 0;
      a6[1] = 0;
      v98 = *((_QWORD*)a1 + 1);
      *(_QWORD*)a1 = v96;
      *((_QWORD*)a1 + 1) = v97;
      if (v98 != 0) {
        std___1___shared_weak_count___release_weak(v98);
      }
      v92 = a6[2];
      a6 += 3;
      goto LABEL_111;
    }
    v99 = a6[1];
    if (v99 != 0 && *(_QWORD*)(v99 + 8) != -1 && a6[2] != 0) {
      v101 = (*(float (**)(__int64))(*(_QWORD*)v94 + 144LL))(v94);
      if (v101 >= (*(float (**)(_QWORD))(*(_QWORD*)a6[2] + 144LL))(a6[2])) {
        goto LABEL_119;
      }
      v93 = *((_QWORD*)a2 + 1);
    }
    v102 = *(_QWORD*)a2;
    *(_QWORD*)a2 = 0;
    *((_QWORD*)a2 + 1) = 0;
    v103 = *((_QWORD*)a1 + 1);
    *(_QWORD*)a1 = v102;
    *((_QWORD*)a1 + 1) = v93;
    if (v103 != 0) {
      std___1___shared_weak_count___release_weak(v103);
    }
    v92 = *((_QWORD*)a2 + 2);
    a2 += 24;
  LABEL_111:
    *((_QWORD*)a1 + 2) = v92;
    a1 += 24;
    if (v88 == a6) {
      goto LABEL_164;
    }
  }
  v124 = 0;
  do {
    v125 = &a6[v124];
    v126 = &a1[v124 * 8];
    v127 = a6[v124];
    v128 = a6[v124 + 1];
    *v125 = 0;
    v125[1] = 0;
    v129 = *(_QWORD*)&a1[v124 * 8 + 8];
    *(_QWORD*)v126 = v127;
    *((_QWORD*)v126 + 1) = v128;
    if (v129 != 0) {
      std___1___shared_weak_count___release_weak(v129);
    }
    v124 += 3;
    *((_QWORD*)v126 + 2) = v125[2];
  } while (v91 != v125);
LABEL_164:
  if (v86 != nullptr) {
    v135 = v86 + 1;
    do {
      v137 = *v135;
      v135 += 3;
      v136 = v137;
      if (v137 != 0) {
        std___1___shared_weak_count___release_weak(v136);
      }
      --v82;
    } while (v82 != 0);
  }
}

float kaneko_disposable_10ac520(__int64 a1, _DWORD* a2, int a3)
{
  unsigned int v4;
  int v5;
  _DWORD* v7;
  float result;
  __int128 v10;
  __int64 v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  __int64* v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  float v24;

  if ((a3 & ~(a3 >> 31)) >= 2) {
    v4 = 2;
  }
  else {
    v4 = a3 & ~(a3 >> 31);
  }
  v5 = GameData_21d92e0;
  if (GameData_21d92e0 != 6 && GameData_21d92e0 != 1) {
    goto LABEL_20;
  }
  if (v4 == 2) {
    if (GameData_21cd140 == 0) {
      goto LABEL_16;
    }
    v7 = a2;
    Camera_7c0260(GameData_21cd140, 0);
  }
  else {
    if (v4 != 1 || GameData_21cd140 == 0) {
      goto LABEL_16;
    }
    v7 = a2;
    Camera_7c0130(GameData_21cd140, 0);
  }
  a2 = v7;
LABEL_16:
  if (v5 != 1 && v5 != 6) {
  LABEL_20:
    *(_DWORD*)(a1 + 64) = *a2;
    *(_DWORD*)(a1 + 68) = a2[1];
    v10 = *(_OWORD*)(a1 + 64);
    *((_QWORD*)&v10 + 1) = (unsigned int)a2[2];
    *(_OWORD*)(a1 + 64) = v10;
    v11 = *(_QWORD*)GameData_212d270;
    v12 = (float)*(int*)(*(_QWORD*)GameData_212d270 + 108LL) *
          0x1.1111120000000p-6;
    if (v12 >= 0.0) {
      v13 = *(float*)(v11 + 112);
      v14 = (float)*(int*)(v11 + 104);
      v15 = *(float*)(v11 + 4LL * v4 + 128);
      *(_DWORD*)a1 = 0;
      *(_DWORD*)(a1 + 16) = 0;
      *(_QWORD*)(a1 + 8) = 0;
      *(_DWORD*)(a1 + 32) = -1082130432;
      v16 = v15 * v13;
      *(float*)(a1 + 4) = v16;
      *(float*)(a1 + 20) = v14 * 0x1.1111120000000p-6;
      *(float*)(a1 + 24) = v12;
      if (v16 != 0.0) {
      LABEL_24:
        v17 = *(float*)(a1 + 20);
        *(_DWORD*)(a1 + 32) = 0;
        *(_BYTE*)(a1 + 28) = v17 < 0.0;
      }
    }
    else if (*(float*)a1 != *(float*)(a1 + 4)) {
      goto LABEL_24;
    }
    nn_os_LockMutex(&game_g_random_mutex);
    v18 = game_map_MapRandom_instance__ptr[0];
    v19 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL));
    v20 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
    v21 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
    *((_DWORD*)v18 + 1) = v19;
    v22 = (v21 >> 8) ^ (v20 >> 19) ^ v21 ^ v20;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v18) = v20;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v18 + 4) = v22;
    v23 = v22 & 0x7FFFFFFF;
    nn_os_UnlockMutex(&game_g_random_mutex);
    v24 = (double)v23 / 0x1.fffffffc00000p+30;
    result = v24 * 0x1.f400000000000p+9;
    *(float*)(a1 + 36) = result;
  }
  return result;
}

#pragma GCC visibility pop
