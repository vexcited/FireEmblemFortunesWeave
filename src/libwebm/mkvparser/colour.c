#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 mkvparser_MasteringMetadata_Parse_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 mkvparser_ParseElementHeader_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                         _QWORD);
__int64 nn_os_GetTlsValue_plt(_QWORD);
extern __int64 SdkData_e88330;
extern void (*SdkData_e88338[493])();
void SdkRoutine_55dc80(__int64, __int64);
bool mkvparser_Colour_Parse(__int64 (***a1)(_QWORD, __int64, __int64, _BYTE*),
                            __int64 a2, __int64 a3, _QWORD* a4);

bool mkvparser_Colour_Parse(__int64 (***a1)(_QWORD, __int64, __int64, _BYTE*),
                            __int64 a2, __int64 a3, _QWORD* a4)
{
  _BOOL4 v5;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v11)();
  _QWORD** v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 (**v19)(_QWORD, __int64, __int64, _BYTE*);
  int v20;
  __int64 (**v21)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v22)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v23)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v24)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v25)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v26)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v27)(_QWORD, __int64, __int64, _BYTE*);
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 (**v31)(_QWORD, __int64, __int64, _BYTE*);
  int v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 (**v37)(_QWORD, __int64, __int64, _BYTE*);
  int v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 (**v43)(_QWORD, __int64, __int64, _BYTE*);
  int v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 (**v49)(_QWORD, __int64, __int64, _BYTE*);
  int v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 (**v55)(_QWORD, __int64, __int64, _BYTE*);
  int v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 (**v61)(_QWORD, __int64, __int64, _BYTE*);
  int v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 (**v67)(_QWORD, __int64, __int64, _BYTE*);
  int v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 (**v73)(_QWORD, __int64, __int64, _BYTE*);
  int v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 (**v79)(_QWORD, __int64, __int64, _BYTE*);
  int v80;
  unsigned __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 (**v85)(_QWORD, __int64, __int64, _BYTE*);
  int v86;
  unsigned __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 (**v91)(_QWORD, __int64, __int64, _BYTE*);
  int v92;
  unsigned __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 (**v97)(_QWORD, __int64, __int64, _BYTE*);
  int v98;
  unsigned __int64 v99;
  __int64 (**v100)(_QWORD, __int64, __int64, _BYTE*);
  unsigned __int64 v101;
  __int64 (**v102)(_QWORD, __int64, __int64, _BYTE*);
  unsigned __int64 v103;
  __int64 (**v104)(_QWORD, __int64, __int64, _BYTE*);
  unsigned __int64 v105;
  __int64 (**v106)(_QWORD, __int64, __int64, _BYTE*);
  unsigned __int64 v107;
  __int64 (**v108)(_QWORD, __int64, __int64, _BYTE*);
  unsigned __int64 v109;
  __int64 (**v110)(_QWORD, __int64, __int64, _BYTE*);
  unsigned __int64 v111;
  __int64 (**v112)(_QWORD, __int64, __int64, _BYTE*);
  unsigned __int64 v113;
  __int64 (**v114)(_QWORD, __int64, __int64, _BYTE*);
  unsigned __int64 v115;
  __int64 (**v116)(_QWORD, __int64, __int64, _BYTE*);
  unsigned __int64 v117;
  __int64 (**v118)(_QWORD, __int64, __int64, _BYTE*);
  unsigned __int64 v119;
  __int64 (**v120)(_QWORD, __int64, __int64, _BYTE*);
  unsigned __int64 v121;
  __int64 (**v122)(_QWORD, __int64, __int64, _BYTE*);
  unsigned __int64 v123;
  __int64 (**v124)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v125)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v126)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v127)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v128)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v129)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v130)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v131)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v132)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v133)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v134)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v135)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v136)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v137)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v138)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v139)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v140)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v141)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v142)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v143)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v144)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v145)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v146)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v147)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v148)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v149)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v150)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v151)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v152)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v153)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v154)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v155)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v156)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v157)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v158)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v159)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v160)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v161)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v162)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v163)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v164)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v165)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v166)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v167)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v168)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v169)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v170)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v171)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v172)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v173)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v174)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v175)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v176)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v177)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v178)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v179)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v180)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v181)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v182)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v183)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v184)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v185)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v186)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v187)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v188)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v189)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v190)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v191)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v192)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v193)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v194)(_QWORD, __int64, __int64, _BYTE*);
  __int64 (**v195)(_QWORD, __int64, __int64, _BYTE*);
  __int64 v196;
  __int64 v197;
  __int64 v198;
  _QWORD* v199;
  _BYTE v200[4];

  if (a1 == nullptr || *a4 != 0) {
    return false;
  }
  v199 = nullptr;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v11 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v11 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v11) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v12 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v11);
  v13 = (_QWORD*)SdkRoutine_4c3860(16, 112, v12);
  *v13 = 0x7FFFFFFFFFFFFFFFLL;
  v13[1] = 0x7FFFFFFFFFFFFFFFLL;
  v13[2] = 0x7FFFFFFFFFFFFFFFLL;
  v13[3] = 0x7FFFFFFFFFFFFFFFLL;
  v13[4] = 0x7FFFFFFFFFFFFFFFLL;
  v13[5] = 0x7FFFFFFFFFFFFFFFLL;
  v13[6] = 0x7FFFFFFFFFFFFFFFLL;
  v13[7] = 0x7FFFFFFFFFFFFFFFLL;
  v13[8] = 0x7FFFFFFFFFFFFFFFLL;
  v13[9] = 0x7FFFFFFFFFFFFFFFLL;
  v13[10] = 0x7FFFFFFFFFFFFFFFLL;
  v13[11] = 0x7FFFFFFFFFFFFFFFLL;
  v13[12] = 0x7FFFFFFFFFFFFFFFLL;
  v13[13] = 0;
  v14 = a2;
  v15 = a3 + a2;
  v199 = v13;
  v198 = v14;
  while (2) {
    v5 = v14 >= v15;
    if (v14 >= v15) {
      *a4 = v13;
      return v5;
    }
    v196 = 0;
    v197 = 0;
    if (mkvparser_ParseElementHeader_plt(a1, &v198, v15, &v197, &v196) < 0) {
      goto LABEL_346;
    }
    switch (v197) {
    case 21937LL:
      v16 = v198;
      v17 = -2;
      if (v198 < 0) {
        goto LABEL_320;
      }
      v18 = v196;
      if ((unsigned __int64)(v196 - 9) < 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_320;
      }
      v19 = *a1;
      v200[0] = 0;
      v20 = (*v19)(a1, v198, 1, v200);
      if (v20 < 0) {
        goto LABEL_319;
      }
      v17 = v200[0];
      if (v18 == 1) {
        goto LABEL_320;
      }
      v21 = *a1;
      v200[0] = 0;
      v20 = (*v21)(a1, v16 + 1, 1, v200);
      if (v20 < 0) {
        goto LABEL_319;
      }
      v17 = v200[0] | (unsigned __int64)(v17 << 8);
      if (v18 == 2) {
        goto LABEL_320;
      }
      v22 = *a1;
      v200[0] = 0;
      v20 = (*v22)(a1, v16 + 2, 1, v200);
      if (v20 < 0) {
        goto LABEL_319;
      }
      v17 = v200[0] | (unsigned __int64)(v17 << 8);
      if (v18 == 3) {
        goto LABEL_320;
      }
      v23 = *a1;
      v200[0] = 0;
      v20 = (*v23)(a1, v16 + 3, 1, v200);
      if (v20 < 0) {
        goto LABEL_319;
      }
      v17 = v200[0] | (unsigned __int64)(v17 << 8);
      if (v18 == 4) {
        goto LABEL_320;
      }
      v24 = *a1;
      v200[0] = 0;
      v20 = (*v24)(a1, v16 + 4, 1, v200);
      if (v20 < 0) {
        goto LABEL_319;
      }
      v17 = v200[0] | (unsigned __int64)(v17 << 8);
      if (v18 == 5) {
        goto LABEL_320;
      }
      v25 = *a1;
      v200[0] = 0;
      v20 = (*v25)(a1, v16 + 5, 1, v200);
      if (v20 < 0) {
        goto LABEL_319;
      }
      v17 = v200[0] | (unsigned __int64)(v17 << 8);
      if (v18 == 6) {
        goto LABEL_320;
      }
      v26 = *a1;
      v200[0] = 0;
      v20 = (*v26)(a1, v16 + 6, 1, v200);
      if (v20 < 0) {
        goto LABEL_319;
      }
      v17 = v200[0] | (unsigned __int64)(v17 << 8);
      if (v18 != 7) {
        v27 = *a1;
        v200[0] = 0;
        v20 = (*v27)(a1, v16 + 7, 1, v200);
        if (v20 < 0) {
        LABEL_319:
          v17 = v20;
        }
        else {
          v17 = v200[0] | (unsigned __int64)(v17 << 8);
        }
      }
    LABEL_320:
      *v13 = v17;
      v13 = v199;
      if ((*v199 & 0x8000000000000000LL) != 0) {
        goto LABEL_346;
      }
      goto LABEL_8;
    case 21938LL:
      v52 = v198;
      v53 = -2;
      if (v198 < 0) {
        goto LABEL_323;
      }
      v54 = v196;
      if ((unsigned __int64)(v196 - 9) < 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_323;
      }
      v55 = *a1;
      v200[0] = 0;
      v56 = (*v55)(a1, v198, 1, v200);
      if (v56 < 0) {
        goto LABEL_322;
      }
      v57 = v200[0];
      if (v54 == 1) {
        v13[1] = v200[0];
        goto LABEL_8;
      }
      v108 = *a1;
      v200[0] = 0;
      v56 = (*v108)(a1, v52 + 1, 1, v200);
      if (v56 < 0) {
        goto LABEL_322;
      }
      v109 = v200[0] | ((unsigned __int64)(unsigned __int8)v57 << 8);
      if (v54 == 2) {
        goto LABEL_109;
      }
      v128 = *a1;
      v200[0] = 0;
      v56 = (*v128)(a1, v52 + 2, 1, v200);
      if (v56 < 0) {
        goto LABEL_322;
      }
      v57 = v200[0] | ((unsigned __int64)(unsigned __int16)v109 << 8);
      if (v54 == 3) {
        goto LABEL_157;
      }
      v156 = *a1;
      v200[0] = 0;
      v56 = (*v156)(a1, v52 + 3, 1, v200);
      if (v56 < 0) {
        goto LABEL_322;
      }
      v109 = v200[0] | ((v57 & 0xFFFFFF) << 8);
      if (v54 == 4) {
        goto LABEL_109;
      }
      v157 = *a1;
      v200[0] = 0;
      v56 = (*v157)(a1, v52 + 4, 1, v200);
      if (v56 < 0) {
        goto LABEL_322;
      }
      v57 = v200[0] | ((unsigned __int64)(unsigned int)v109 << 8);
      if (v54 == 5) {
        goto LABEL_157;
      }
      v158 = *a1;
      v200[0] = 0;
      v56 = (*v158)(a1, v52 + 5, 1, v200);
      if (v56 < 0) {
        goto LABEL_322;
      }
      v109 = v200[0] | ((v57 & 0xFFFFFFFFFFLL) << 8);
      if (v54 == 6) {
      LABEL_109:
        v13[1] = v109;
        if (((v57 << 8) & 0x8000000000000000LL) != 0) {
          goto LABEL_346;
        }
      }
      else {
        v159 = *a1;
        v200[0] = 0;
        v56 = (*v159)(a1, v52 + 6, 1, v200);
        if (v56 < 0) {
          goto LABEL_322;
        }
        v57 = v200[0] | ((v109 & 0xFFFFFFFFFFFFLL) << 8);
        if (v54 == 7) {
        LABEL_157:
          v13[1] = v57;
          if (((v109 << 8) & 0x8000000000000000LL) != 0) {
            goto LABEL_346;
          }
        }
        else {
          v160 = *a1;
          v200[0] = 0;
          v56 = (*v160)(a1, v52 + 7, 1, v200);
          if (v56 < 0) {
          LABEL_322:
            v53 = v56;
          LABEL_323:
            v13[1] = v53;
            goto LABEL_346;
          }
          v13[1] = v200[0] | (v57 << 8);
          if (((v57 << 8) & 0x8000000000000000LL) != 0) {
            goto LABEL_346;
          }
        }
      }
      goto LABEL_8;
    case 21939LL:
      v46 = v198;
      v47 = -2;
      if (v198 < 0) {
        goto LABEL_325;
      }
      v48 = v196;
      if ((unsigned __int64)(v196 - 9) < 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_325;
      }
      v49 = *a1;
      v200[0] = 0;
      v50 = (*v49)(a1, v198, 1, v200);
      if (v50 < 0) {
        goto LABEL_324;
      }
      v51 = v200[0];
      if (v48 == 1) {
        v13[2] = v200[0];
        goto LABEL_8;
      }
      v106 = *a1;
      v200[0] = 0;
      v50 = (*v106)(a1, v46 + 1, 1, v200);
      if (v50 < 0) {
        goto LABEL_324;
      }
      v107 = v200[0] | ((unsigned __int64)(unsigned __int8)v51 << 8);
      if (v48 == 2) {
        goto LABEL_105;
      }
      v127 = *a1;
      v200[0] = 0;
      v50 = (*v127)(a1, v46 + 2, 1, v200);
      if (v50 < 0) {
        goto LABEL_324;
      }
      v51 = v200[0] | ((unsigned __int64)(unsigned __int16)v107 << 8);
      if (v48 == 3) {
        goto LABEL_153;
      }
      v151 = *a1;
      v200[0] = 0;
      v50 = (*v151)(a1, v46 + 3, 1, v200);
      if (v50 < 0) {
        goto LABEL_324;
      }
      v107 = v200[0] | ((v51 & 0xFFFFFF) << 8);
      if (v48 == 4) {
        goto LABEL_105;
      }
      v152 = *a1;
      v200[0] = 0;
      v50 = (*v152)(a1, v46 + 4, 1, v200);
      if (v50 < 0) {
        goto LABEL_324;
      }
      v51 = v200[0] | ((unsigned __int64)(unsigned int)v107 << 8);
      if (v48 == 5) {
        goto LABEL_153;
      }
      v153 = *a1;
      v200[0] = 0;
      v50 = (*v153)(a1, v46 + 5, 1, v200);
      if (v50 < 0) {
        goto LABEL_324;
      }
      v107 = v200[0] | ((v51 & 0xFFFFFFFFFFLL) << 8);
      if (v48 == 6) {
      LABEL_105:
        v13[2] = v107;
        if (((v51 << 8) & 0x8000000000000000LL) != 0) {
          goto LABEL_346;
        }
      }
      else {
        v154 = *a1;
        v200[0] = 0;
        v50 = (*v154)(a1, v46 + 6, 1, v200);
        if (v50 < 0) {
          goto LABEL_324;
        }
        v51 = v200[0] | ((v107 & 0xFFFFFFFFFFFFLL) << 8);
        if (v48 == 7) {
        LABEL_153:
          v13[2] = v51;
          if (((v107 << 8) & 0x8000000000000000LL) != 0) {
            goto LABEL_346;
          }
        }
        else {
          v155 = *a1;
          v200[0] = 0;
          v50 = (*v155)(a1, v46 + 7, 1, v200);
          if (v50 < 0) {
          LABEL_324:
            v47 = v50;
          LABEL_325:
            v13[2] = v47;
            goto LABEL_346;
          }
          v13[2] = v200[0] | (v51 << 8);
          if (((v51 << 8) & 0x8000000000000000LL) != 0) {
            goto LABEL_346;
          }
        }
      }
      goto LABEL_8;
    case 21940LL:
      v70 = v198;
      v71 = -2;
      if (v198 < 0) {
        goto LABEL_343;
      }
      v72 = v196;
      if ((unsigned __int64)(v196 - 9) < 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_343;
      }
      v73 = *a1;
      v200[0] = 0;
      v74 = (*v73)(a1, v198, 1, v200);
      if (v74 < 0) {
        goto LABEL_342;
      }
      v75 = v200[0];
      if (v72 == 1) {
        v13[3] = v200[0];
        goto LABEL_8;
      }
      v114 = *a1;
      v200[0] = 0;
      v74 = (*v114)(a1, v70 + 1, 1, v200);
      if (v74 < 0) {
        goto LABEL_342;
      }
      v115 = v200[0] | ((unsigned __int64)(unsigned __int8)v75 << 8);
      if (v72 == 2) {
        goto LABEL_121;
      }
      v131 = *a1;
      v200[0] = 0;
      v74 = (*v131)(a1, v70 + 2, 1, v200);
      if (v74 < 0) {
        goto LABEL_342;
      }
      v75 = v200[0] | ((unsigned __int64)(unsigned __int16)v115 << 8);
      if (v72 == 3) {
        goto LABEL_169;
      }
      v171 = *a1;
      v200[0] = 0;
      v74 = (*v171)(a1, v70 + 3, 1, v200);
      if (v74 < 0) {
        goto LABEL_342;
      }
      v115 = v200[0] | ((v75 & 0xFFFFFF) << 8);
      if (v72 == 4) {
        goto LABEL_121;
      }
      v172 = *a1;
      v200[0] = 0;
      v74 = (*v172)(a1, v70 + 4, 1, v200);
      if (v74 < 0) {
        goto LABEL_342;
      }
      v75 = v200[0] | ((unsigned __int64)(unsigned int)v115 << 8);
      if (v72 == 5) {
        goto LABEL_169;
      }
      v173 = *a1;
      v200[0] = 0;
      v74 = (*v173)(a1, v70 + 5, 1, v200);
      if (v74 < 0) {
        goto LABEL_342;
      }
      v115 = v200[0] | ((v75 & 0xFFFFFFFFFFLL) << 8);
      if (v72 == 6) {
      LABEL_121:
        v13[3] = v115;
        if (((v75 << 8) & 0x8000000000000000LL) != 0) {
          goto LABEL_346;
        }
      }
      else {
        v174 = *a1;
        v200[0] = 0;
        v74 = (*v174)(a1, v70 + 6, 1, v200);
        if (v74 < 0) {
          goto LABEL_342;
        }
        v75 = v200[0] | ((v115 & 0xFFFFFFFFFFFFLL) << 8);
        if (v72 == 7) {
        LABEL_169:
          v13[3] = v75;
          if (((v115 << 8) & 0x8000000000000000LL) != 0) {
            goto LABEL_346;
          }
        }
        else {
          v175 = *a1;
          v200[0] = 0;
          v74 = (*v175)(a1, v70 + 7, 1, v200);
          if (v74 < 0) {
          LABEL_342:
            v71 = v74;
          LABEL_343:
            v13[3] = v71;
            goto LABEL_346;
          }
          v13[3] = v200[0] | (v75 << 8);
          if (((v75 << 8) & 0x8000000000000000LL) != 0) {
            goto LABEL_346;
          }
        }
      }
      goto LABEL_8;
    case 21941LL:
      v88 = v198;
      v89 = -2;
      if (v198 < 0) {
        goto LABEL_339;
      }
      v90 = v196;
      if ((unsigned __int64)(v196 - 9) < 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_339;
      }
      v91 = *a1;
      v200[0] = 0;
      v92 = (*v91)(a1, v198, 1, v200);
      if (v92 < 0) {
        goto LABEL_338;
      }
      v93 = v200[0];
      if (v90 == 1) {
        v13[4] = v200[0];
        goto LABEL_8;
      }
      v120 = *a1;
      v200[0] = 0;
      v92 = (*v120)(a1, v88 + 1, 1, v200);
      if (v92 < 0) {
        goto LABEL_338;
      }
      v121 = v200[0] | ((unsigned __int64)(unsigned __int8)v93 << 8);
      if (v90 == 2) {
        goto LABEL_133;
      }
      v134 = *a1;
      v200[0] = 0;
      v92 = (*v134)(a1, v88 + 2, 1, v200);
      if (v92 < 0) {
        goto LABEL_338;
      }
      v93 = v200[0] | ((unsigned __int64)(unsigned __int16)v121 << 8);
      if (v90 == 3) {
        goto LABEL_181;
      }
      v186 = *a1;
      v200[0] = 0;
      v92 = (*v186)(a1, v88 + 3, 1, v200);
      if (v92 < 0) {
        goto LABEL_338;
      }
      v121 = v200[0] | ((v93 & 0xFFFFFF) << 8);
      if (v90 == 4) {
        goto LABEL_133;
      }
      v187 = *a1;
      v200[0] = 0;
      v92 = (*v187)(a1, v88 + 4, 1, v200);
      if (v92 < 0) {
        goto LABEL_338;
      }
      v93 = v200[0] | ((unsigned __int64)(unsigned int)v121 << 8);
      if (v90 == 5) {
        goto LABEL_181;
      }
      v188 = *a1;
      v200[0] = 0;
      v92 = (*v188)(a1, v88 + 5, 1, v200);
      if (v92 < 0) {
        goto LABEL_338;
      }
      v121 = v200[0] | ((v93 & 0xFFFFFFFFFFLL) << 8);
      if (v90 == 6) {
      LABEL_133:
        v13[4] = v121;
        if (((v93 << 8) & 0x8000000000000000LL) != 0) {
          goto LABEL_346;
        }
      }
      else {
        v189 = *a1;
        v200[0] = 0;
        v92 = (*v189)(a1, v88 + 6, 1, v200);
        if (v92 < 0) {
          goto LABEL_338;
        }
        v93 = v200[0] | ((v121 & 0xFFFFFFFFFFFFLL) << 8);
        if (v90 == 7) {
        LABEL_181:
          v13[4] = v93;
          if (((v121 << 8) & 0x8000000000000000LL) != 0) {
            goto LABEL_346;
          }
        }
        else {
          v190 = *a1;
          v200[0] = 0;
          v92 = (*v190)(a1, v88 + 7, 1, v200);
          if (v92 < 0) {
          LABEL_338:
            v89 = v92;
          LABEL_339:
            v13[4] = v89;
            goto LABEL_346;
          }
          v13[4] = v200[0] | (v93 << 8);
          if (((v93 << 8) & 0x8000000000000000LL) != 0) {
            goto LABEL_346;
          }
        }
      }
      goto LABEL_8;
    case 21942LL:
      v40 = v198;
      v41 = -2;
      if (v198 < 0) {
        goto LABEL_341;
      }
      v42 = v196;
      if ((unsigned __int64)(v196 - 9) < 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_341;
      }
      v43 = *a1;
      v200[0] = 0;
      v44 = (*v43)(a1, v198, 1, v200);
      if (v44 < 0) {
        goto LABEL_340;
      }
      v45 = v200[0];
      if (v42 == 1) {
        v13[5] = v200[0];
        goto LABEL_8;
      }
      v104 = *a1;
      v200[0] = 0;
      v44 = (*v104)(a1, v40 + 1, 1, v200);
      if (v44 < 0) {
        goto LABEL_340;
      }
      v105 = v200[0] | ((unsigned __int64)(unsigned __int8)v45 << 8);
      if (v42 == 2) {
        goto LABEL_101;
      }
      v126 = *a1;
      v200[0] = 0;
      v44 = (*v126)(a1, v40 + 2, 1, v200);
      if (v44 < 0) {
        goto LABEL_340;
      }
      v45 = v200[0] | ((unsigned __int64)(unsigned __int16)v105 << 8);
      if (v42 == 3) {
        goto LABEL_149;
      }
      v146 = *a1;
      v200[0] = 0;
      v44 = (*v146)(a1, v40 + 3, 1, v200);
      if (v44 < 0) {
        goto LABEL_340;
      }
      v105 = v200[0] | ((v45 & 0xFFFFFF) << 8);
      if (v42 == 4) {
        goto LABEL_101;
      }
      v147 = *a1;
      v200[0] = 0;
      v44 = (*v147)(a1, v40 + 4, 1, v200);
      if (v44 < 0) {
        goto LABEL_340;
      }
      v45 = v200[0] | ((unsigned __int64)(unsigned int)v105 << 8);
      if (v42 == 5) {
        goto LABEL_149;
      }
      v148 = *a1;
      v200[0] = 0;
      v44 = (*v148)(a1, v40 + 5, 1, v200);
      if (v44 < 0) {
        goto LABEL_340;
      }
      v105 = v200[0] | ((v45 & 0xFFFFFFFFFFLL) << 8);
      if (v42 == 6) {
      LABEL_101:
        v13[5] = v105;
        if (((v45 << 8) & 0x8000000000000000LL) != 0) {
          goto LABEL_346;
        }
      }
      else {
        v149 = *a1;
        v200[0] = 0;
        v44 = (*v149)(a1, v40 + 6, 1, v200);
        if (v44 < 0) {
          goto LABEL_340;
        }
        v45 = v200[0] | ((v105 & 0xFFFFFFFFFFFFLL) << 8);
        if (v42 == 7) {
        LABEL_149:
          v13[5] = v45;
          if (((v105 << 8) & 0x8000000000000000LL) != 0) {
            goto LABEL_346;
          }
        }
        else {
          v150 = *a1;
          v200[0] = 0;
          v44 = (*v150)(a1, v40 + 7, 1, v200);
          if (v44 < 0) {
          LABEL_340:
            v41 = v44;
          LABEL_341:
            v13[5] = v41;
            goto LABEL_346;
          }
          v13[5] = v200[0] | (v45 << 8);
          if (((v45 << 8) & 0x8000000000000000LL) != 0) {
            goto LABEL_346;
          }
        }
      }
      goto LABEL_8;
    case 21943LL:
      v82 = v198;
      v83 = -2;
      if (v198 < 0) {
        goto LABEL_329;
      }
      v84 = v196;
      if ((unsigned __int64)(v196 - 9) < 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_329;
      }
      v85 = *a1;
      v200[0] = 0;
      v86 = (*v85)(a1, v198, 1, v200);
      if (v86 < 0) {
        goto LABEL_328;
      }
      v87 = v200[0];
      if (v84 == 1) {
        v13[6] = v200[0];
        goto LABEL_8;
      }
      v118 = *a1;
      v200[0] = 0;
      v86 = (*v118)(a1, v82 + 1, 1, v200);
      if (v86 < 0) {
        goto LABEL_328;
      }
      v119 = v200[0] | ((unsigned __int64)(unsigned __int8)v87 << 8);
      if (v84 == 2) {
        goto LABEL_129;
      }
      v133 = *a1;
      v200[0] = 0;
      v86 = (*v133)(a1, v82 + 2, 1, v200);
      if (v86 < 0) {
        goto LABEL_328;
      }
      v87 = v200[0] | ((unsigned __int64)(unsigned __int16)v119 << 8);
      if (v84 == 3) {
        goto LABEL_177;
      }
      v181 = *a1;
      v200[0] = 0;
      v86 = (*v181)(a1, v82 + 3, 1, v200);
      if (v86 < 0) {
        goto LABEL_328;
      }
      v119 = v200[0] | ((v87 & 0xFFFFFF) << 8);
      if (v84 == 4) {
        goto LABEL_129;
      }
      v182 = *a1;
      v200[0] = 0;
      v86 = (*v182)(a1, v82 + 4, 1, v200);
      if (v86 < 0) {
        goto LABEL_328;
      }
      v87 = v200[0] | ((unsigned __int64)(unsigned int)v119 << 8);
      if (v84 == 5) {
        goto LABEL_177;
      }
      v183 = *a1;
      v200[0] = 0;
      v86 = (*v183)(a1, v82 + 5, 1, v200);
      if (v86 < 0) {
        goto LABEL_328;
      }
      v119 = v200[0] | ((v87 & 0xFFFFFFFFFFLL) << 8);
      if (v84 == 6) {
      LABEL_129:
        v13[6] = v119;
        if (((v87 << 8) & 0x8000000000000000LL) != 0) {
          goto LABEL_346;
        }
      }
      else {
        v184 = *a1;
        v200[0] = 0;
        v86 = (*v184)(a1, v82 + 6, 1, v200);
        if (v86 < 0) {
          goto LABEL_328;
        }
        v87 = v200[0] | ((v119 & 0xFFFFFFFFFFFFLL) << 8);
        if (v84 == 7) {
        LABEL_177:
          v13[6] = v87;
          if (((v119 << 8) & 0x8000000000000000LL) != 0) {
            goto LABEL_346;
          }
        }
        else {
          v185 = *a1;
          v200[0] = 0;
          v86 = (*v185)(a1, v82 + 7, 1, v200);
          if (v86 < 0) {
          LABEL_328:
            v83 = v86;
          LABEL_329:
            v13[6] = v83;
            goto LABEL_346;
          }
          v13[6] = v200[0] | (v87 << 8);
          if (((v87 << 8) & 0x8000000000000000LL) != 0) {
            goto LABEL_346;
          }
        }
      }
      goto LABEL_8;
    case 21944LL:
      v34 = v198;
      v35 = -2;
      if (v198 < 0) {
        goto LABEL_327;
      }
      v36 = v196;
      if ((unsigned __int64)(v196 - 9) < 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_327;
      }
      v37 = *a1;
      v200[0] = 0;
      v38 = (*v37)(a1, v198, 1, v200);
      if (v38 < 0) {
        goto LABEL_326;
      }
      v39 = v200[0];
      if (v36 == 1) {
        v13[7] = v200[0];
        goto LABEL_8;
      }
      v102 = *a1;
      v200[0] = 0;
      v38 = (*v102)(a1, v34 + 1, 1, v200);
      if (v38 < 0) {
        goto LABEL_326;
      }
      v103 = v200[0] | ((unsigned __int64)(unsigned __int8)v39 << 8);
      if (v36 == 2) {
        goto LABEL_97;
      }
      v125 = *a1;
      v200[0] = 0;
      v38 = (*v125)(a1, v34 + 2, 1, v200);
      if (v38 < 0) {
        goto LABEL_326;
      }
      v39 = v200[0] | ((unsigned __int64)(unsigned __int16)v103 << 8);
      if (v36 == 3) {
        goto LABEL_145;
      }
      v141 = *a1;
      v200[0] = 0;
      v38 = (*v141)(a1, v34 + 3, 1, v200);
      if (v38 < 0) {
        goto LABEL_326;
      }
      v103 = v200[0] | ((v39 & 0xFFFFFF) << 8);
      if (v36 == 4) {
        goto LABEL_97;
      }
      v142 = *a1;
      v200[0] = 0;
      v38 = (*v142)(a1, v34 + 4, 1, v200);
      if (v38 < 0) {
        goto LABEL_326;
      }
      v39 = v200[0] | ((unsigned __int64)(unsigned int)v103 << 8);
      if (v36 == 5) {
        goto LABEL_145;
      }
      v143 = *a1;
      v200[0] = 0;
      v38 = (*v143)(a1, v34 + 5, 1, v200);
      if (v38 < 0) {
        goto LABEL_326;
      }
      v103 = v200[0] | ((v39 & 0xFFFFFFFFFFLL) << 8);
      if (v36 == 6) {
      LABEL_97:
        v13[7] = v103;
        if (((v39 << 8) & 0x8000000000000000LL) != 0) {
          goto LABEL_346;
        }
      }
      else {
        v144 = *a1;
        v200[0] = 0;
        v38 = (*v144)(a1, v34 + 6, 1, v200);
        if (v38 < 0) {
          goto LABEL_326;
        }
        v39 = v200[0] | ((v103 & 0xFFFFFFFFFFFFLL) << 8);
        if (v36 == 7) {
        LABEL_145:
          v13[7] = v39;
          if (((v103 << 8) & 0x8000000000000000LL) != 0) {
            goto LABEL_346;
          }
        }
        else {
          v145 = *a1;
          v200[0] = 0;
          v38 = (*v145)(a1, v34 + 7, 1, v200);
          if (v38 < 0) {
          LABEL_326:
            v35 = v38;
          LABEL_327:
            v13[7] = v35;
            goto LABEL_346;
          }
          v13[7] = v200[0] | (v39 << 8);
          if (((v39 << 8) & 0x8000000000000000LL) != 0) {
            goto LABEL_346;
          }
        }
      }
      goto LABEL_8;
    case 21945LL:
      v64 = v198;
      v65 = -2;
      if (v198 < 0) {
        goto LABEL_331;
      }
      v66 = v196;
      if ((unsigned __int64)(v196 - 9) < 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_331;
      }
      v67 = *a1;
      v200[0] = 0;
      v68 = (*v67)(a1, v198, 1, v200);
      if (v68 < 0) {
        goto LABEL_330;
      }
      v69 = v200[0];
      if (v66 == 1) {
        v13[8] = v200[0];
        goto LABEL_8;
      }
      v112 = *a1;
      v200[0] = 0;
      v68 = (*v112)(a1, v64 + 1, 1, v200);
      if (v68 < 0) {
        goto LABEL_330;
      }
      v113 = v200[0] | ((unsigned __int64)(unsigned __int8)v69 << 8);
      if (v66 == 2) {
        goto LABEL_117;
      }
      v130 = *a1;
      v200[0] = 0;
      v68 = (*v130)(a1, v64 + 2, 1, v200);
      if (v68 < 0) {
        goto LABEL_330;
      }
      v69 = v200[0] | ((unsigned __int64)(unsigned __int16)v113 << 8);
      if (v66 == 3) {
        goto LABEL_165;
      }
      v166 = *a1;
      v200[0] = 0;
      v68 = (*v166)(a1, v64 + 3, 1, v200);
      if (v68 < 0) {
        goto LABEL_330;
      }
      v113 = v200[0] | ((v69 & 0xFFFFFF) << 8);
      if (v66 == 4) {
        goto LABEL_117;
      }
      v167 = *a1;
      v200[0] = 0;
      v68 = (*v167)(a1, v64 + 4, 1, v200);
      if (v68 < 0) {
        goto LABEL_330;
      }
      v69 = v200[0] | ((unsigned __int64)(unsigned int)v113 << 8);
      if (v66 == 5) {
        goto LABEL_165;
      }
      v168 = *a1;
      v200[0] = 0;
      v68 = (*v168)(a1, v64 + 5, 1, v200);
      if (v68 < 0) {
        goto LABEL_330;
      }
      v113 = v200[0] | ((v69 & 0xFFFFFFFFFFLL) << 8);
      if (v66 == 6) {
      LABEL_117:
        v13[8] = v113;
        if (((v69 << 8) & 0x8000000000000000LL) != 0) {
          goto LABEL_346;
        }
      }
      else {
        v169 = *a1;
        v200[0] = 0;
        v68 = (*v169)(a1, v64 + 6, 1, v200);
        if (v68 < 0) {
          goto LABEL_330;
        }
        v69 = v200[0] | ((v113 & 0xFFFFFFFFFFFFLL) << 8);
        if (v66 == 7) {
        LABEL_165:
          v13[8] = v69;
          if (((v113 << 8) & 0x8000000000000000LL) != 0) {
            goto LABEL_346;
          }
        }
        else {
          v170 = *a1;
          v200[0] = 0;
          v68 = (*v170)(a1, v64 + 7, 1, v200);
          if (v68 < 0) {
          LABEL_330:
            v65 = v68;
          LABEL_331:
            v13[8] = v65;
            goto LABEL_346;
          }
          v13[8] = v200[0] | (v69 << 8);
          if (((v69 << 8) & 0x8000000000000000LL) != 0) {
            goto LABEL_346;
          }
        }
      }
      goto LABEL_8;
    case 21946LL:
      v94 = v198;
      v95 = -2;
      if (v198 < 0) {
        goto LABEL_333;
      }
      v96 = v196;
      if ((unsigned __int64)(v196 - 9) < 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_333;
      }
      v97 = *a1;
      v200[0] = 0;
      v98 = (*v97)(a1, v198, 1, v200);
      if (v98 < 0) {
        goto LABEL_332;
      }
      v99 = v200[0];
      if (v96 == 1) {
        v13[9] = v200[0];
        goto LABEL_8;
      }
      v122 = *a1;
      v200[0] = 0;
      v98 = (*v122)(a1, v94 + 1, 1, v200);
      if (v98 < 0) {
        goto LABEL_332;
      }
      v123 = v200[0] | ((unsigned __int64)(unsigned __int8)v99 << 8);
      if (v96 == 2) {
        goto LABEL_137;
      }
      v135 = *a1;
      v200[0] = 0;
      v98 = (*v135)(a1, v94 + 2, 1, v200);
      if (v98 < 0) {
        goto LABEL_332;
      }
      v99 = v200[0] | ((unsigned __int64)(unsigned __int16)v123 << 8);
      if (v96 == 3) {
        goto LABEL_185;
      }
      v191 = *a1;
      v200[0] = 0;
      v98 = (*v191)(a1, v94 + 3, 1, v200);
      if (v98 < 0) {
        goto LABEL_332;
      }
      v123 = v200[0] | ((v99 & 0xFFFFFF) << 8);
      if (v96 == 4) {
        goto LABEL_137;
      }
      v192 = *a1;
      v200[0] = 0;
      v98 = (*v192)(a1, v94 + 4, 1, v200);
      if (v98 < 0) {
        goto LABEL_332;
      }
      v99 = v200[0] | ((unsigned __int64)(unsigned int)v123 << 8);
      if (v96 == 5) {
        goto LABEL_185;
      }
      v193 = *a1;
      v200[0] = 0;
      v98 = (*v193)(a1, v94 + 5, 1, v200);
      if (v98 < 0) {
        goto LABEL_332;
      }
      v123 = v200[0] | ((v99 & 0xFFFFFFFFFFLL) << 8);
      if (v96 == 6) {
      LABEL_137:
        v13[9] = v123;
        if (((v99 << 8) & 0x8000000000000000LL) != 0) {
          goto LABEL_346;
        }
      }
      else {
        v194 = *a1;
        v200[0] = 0;
        v98 = (*v194)(a1, v94 + 6, 1, v200);
        if (v98 < 0) {
          goto LABEL_332;
        }
        v99 = v200[0] | ((v123 & 0xFFFFFFFFFFFFLL) << 8);
        if (v96 == 7) {
        LABEL_185:
          v13[9] = v99;
          if (((v123 << 8) & 0x8000000000000000LL) != 0) {
            goto LABEL_346;
          }
        }
        else {
          v195 = *a1;
          v200[0] = 0;
          v98 = (*v195)(a1, v94 + 7, 1, v200);
          if (v98 < 0) {
          LABEL_332:
            v95 = v98;
          LABEL_333:
            v13[9] = v95;
            goto LABEL_346;
          }
          v13[9] = v200[0] | (v99 << 8);
          if (((v99 << 8) & 0x8000000000000000LL) != 0) {
            goto LABEL_346;
          }
        }
      }
      goto LABEL_8;
    case 21947LL:
      v28 = v198;
      v29 = -2;
      if (v198 < 0) {
        goto LABEL_337;
      }
      v30 = v196;
      if ((unsigned __int64)(v196 - 9) < 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_337;
      }
      v31 = *a1;
      v200[0] = 0;
      v32 = (*v31)(a1, v198, 1, v200);
      if (v32 < 0) {
        goto LABEL_336;
      }
      v33 = v200[0];
      if (v30 == 1) {
        v13[10] = v200[0];
        goto LABEL_8;
      }
      v100 = *a1;
      v200[0] = 0;
      v32 = (*v100)(a1, v28 + 1, 1, v200);
      if (v32 < 0) {
        goto LABEL_336;
      }
      v101 = v200[0] | ((unsigned __int64)(unsigned __int8)v33 << 8);
      if (v30 == 2) {
        goto LABEL_93;
      }
      v124 = *a1;
      v200[0] = 0;
      v32 = (*v124)(a1, v28 + 2, 1, v200);
      if (v32 < 0) {
        goto LABEL_336;
      }
      v33 = v200[0] | ((unsigned __int64)(unsigned __int16)v101 << 8);
      if (v30 == 3) {
        goto LABEL_141;
      }
      v136 = *a1;
      v200[0] = 0;
      v32 = (*v136)(a1, v28 + 3, 1, v200);
      if (v32 < 0) {
        goto LABEL_336;
      }
      v101 = v200[0] | ((v33 & 0xFFFFFF) << 8);
      if (v30 == 4) {
        goto LABEL_93;
      }
      v137 = *a1;
      v200[0] = 0;
      v32 = (*v137)(a1, v28 + 4, 1, v200);
      if (v32 < 0) {
        goto LABEL_336;
      }
      v33 = v200[0] | ((unsigned __int64)(unsigned int)v101 << 8);
      if (v30 == 5) {
        goto LABEL_141;
      }
      v138 = *a1;
      v200[0] = 0;
      v32 = (*v138)(a1, v28 + 5, 1, v200);
      if (v32 < 0) {
        goto LABEL_336;
      }
      v101 = v200[0] | ((v33 & 0xFFFFFFFFFFLL) << 8);
      if (v30 == 6) {
      LABEL_93:
        v13[10] = v101;
        if (((v33 << 8) & 0x8000000000000000LL) != 0) {
          goto LABEL_346;
        }
      }
      else {
        v139 = *a1;
        v200[0] = 0;
        v32 = (*v139)(a1, v28 + 6, 1, v200);
        if (v32 < 0) {
          goto LABEL_336;
        }
        v33 = v200[0] | ((v101 & 0xFFFFFFFFFFFFLL) << 8);
        if (v30 == 7) {
        LABEL_141:
          v13[10] = v33;
          if (((v101 << 8) & 0x8000000000000000LL) != 0) {
            goto LABEL_346;
          }
        }
        else {
          v140 = *a1;
          v200[0] = 0;
          v32 = (*v140)(a1, v28 + 7, 1, v200);
          if (v32 < 0) {
          LABEL_336:
            v29 = v32;
          LABEL_337:
            v13[10] = v29;
            goto LABEL_346;
          }
          v13[10] = v200[0] | (v33 << 8);
          if (((v33 << 8) & 0x8000000000000000LL) != 0) {
            goto LABEL_346;
          }
        }
      }
      goto LABEL_8;
    case 21948LL:
      v58 = v198;
      v59 = -2;
      if (v198 < 0) {
        goto LABEL_335;
      }
      v60 = v196;
      if ((unsigned __int64)(v196 - 9) < 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_335;
      }
      v61 = *a1;
      v200[0] = 0;
      v62 = (*v61)(a1, v198, 1, v200);
      if (v62 < 0) {
        goto LABEL_334;
      }
      v63 = v200[0];
      if (v60 == 1) {
        v13[11] = v200[0];
        goto LABEL_8;
      }
      v110 = *a1;
      v200[0] = 0;
      v62 = (*v110)(a1, v58 + 1, 1, v200);
      if (v62 < 0) {
        goto LABEL_334;
      }
      v111 = v200[0] | ((unsigned __int64)(unsigned __int8)v63 << 8);
      if (v60 == 2) {
        goto LABEL_113;
      }
      v129 = *a1;
      v200[0] = 0;
      v62 = (*v129)(a1, v58 + 2, 1, v200);
      if (v62 < 0) {
        goto LABEL_334;
      }
      v63 = v200[0] | ((unsigned __int64)(unsigned __int16)v111 << 8);
      if (v60 == 3) {
        goto LABEL_161;
      }
      v161 = *a1;
      v200[0] = 0;
      v62 = (*v161)(a1, v58 + 3, 1, v200);
      if (v62 < 0) {
        goto LABEL_334;
      }
      v111 = v200[0] | ((v63 & 0xFFFFFF) << 8);
      if (v60 == 4) {
        goto LABEL_113;
      }
      v162 = *a1;
      v200[0] = 0;
      v62 = (*v162)(a1, v58 + 4, 1, v200);
      if (v62 < 0) {
        goto LABEL_334;
      }
      v63 = v200[0] | ((unsigned __int64)(unsigned int)v111 << 8);
      if (v60 == 5) {
        goto LABEL_161;
      }
      v163 = *a1;
      v200[0] = 0;
      v62 = (*v163)(a1, v58 + 5, 1, v200);
      if (v62 < 0) {
        goto LABEL_334;
      }
      v111 = v200[0] | ((v63 & 0xFFFFFFFFFFLL) << 8);
      if (v60 == 6) {
      LABEL_113:
        v13[11] = v111;
        if (((v63 << 8) & 0x8000000000000000LL) != 0) {
          goto LABEL_346;
        }
      }
      else {
        v164 = *a1;
        v200[0] = 0;
        v62 = (*v164)(a1, v58 + 6, 1, v200);
        if (v62 < 0) {
          goto LABEL_334;
        }
        v63 = v200[0] | ((v111 & 0xFFFFFFFFFFFFLL) << 8);
        if (v60 == 7) {
        LABEL_161:
          v13[11] = v63;
          if (((v111 << 8) & 0x8000000000000000LL) != 0) {
            goto LABEL_346;
          }
        }
        else {
          v165 = *a1;
          v200[0] = 0;
          v62 = (*v165)(a1, v58 + 7, 1, v200);
          if (v62 < 0) {
          LABEL_334:
            v59 = v62;
          LABEL_335:
            v13[11] = v59;
            goto LABEL_346;
          }
          v13[11] = v200[0] | (v63 << 8);
          if (((v63 << 8) & 0x8000000000000000LL) != 0) {
            goto LABEL_346;
          }
        }
      }
      goto LABEL_8;
    case 21949LL:
      v76 = v198;
      v77 = -2;
      if (v198 < 0) {
        goto LABEL_345;
      }
      v78 = v196;
      if ((unsigned __int64)(v196 - 9) < 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_345;
      }
      v79 = *a1;
      v200[0] = 0;
      v80 = (*v79)(a1, v198, 1, v200);
      if (v80 < 0) {
        goto LABEL_344;
      }
      v81 = v200[0];
      if (v78 == 1) {
        v13[12] = v200[0];
        goto LABEL_8;
      }
      v116 = *a1;
      v200[0] = 0;
      v80 = (*v116)(a1, v76 + 1, 1, v200);
      if (v80 < 0) {
        goto LABEL_344;
      }
      v117 = v200[0] | ((unsigned __int64)(unsigned __int8)v81 << 8);
      if (v78 == 2) {
        goto LABEL_125;
      }
      v132 = *a1;
      v200[0] = 0;
      v80 = (*v132)(a1, v76 + 2, 1, v200);
      if (v80 < 0) {
        goto LABEL_344;
      }
      v81 = v200[0] | ((unsigned __int64)(unsigned __int16)v117 << 8);
      if (v78 == 3) {
        goto LABEL_173;
      }
      v176 = *a1;
      v200[0] = 0;
      v80 = (*v176)(a1, v76 + 3, 1, v200);
      if (v80 < 0) {
        goto LABEL_344;
      }
      v117 = v200[0] | ((v81 & 0xFFFFFF) << 8);
      if (v78 == 4) {
        goto LABEL_125;
      }
      v177 = *a1;
      v200[0] = 0;
      v80 = (*v177)(a1, v76 + 4, 1, v200);
      if (v80 < 0) {
        goto LABEL_344;
      }
      v81 = v200[0] | ((unsigned __int64)(unsigned int)v117 << 8);
      if (v78 == 5) {
        goto LABEL_173;
      }
      v178 = *a1;
      v200[0] = 0;
      v80 = (*v178)(a1, v76 + 5, 1, v200);
      if (v80 < 0) {
        goto LABEL_344;
      }
      v117 = v200[0] | ((v81 & 0xFFFFFFFFFFLL) << 8);
      if (v78 == 6) {
      LABEL_125:
        v13[12] = v117;
        if (((v81 << 8) & 0x8000000000000000LL) != 0) {
          goto LABEL_346;
        }
        goto LABEL_8;
      }
      v179 = *a1;
      v200[0] = 0;
      v80 = (*v179)(a1, v76 + 6, 1, v200);
      if (v80 < 0) {
        goto LABEL_344;
      }
      v81 = v200[0] | ((v117 & 0xFFFFFFFFFFFFLL) << 8);
      if (v78 == 7) {
      LABEL_173:
        v13[12] = v81;
        if (((v117 << 8) & 0x8000000000000000LL) != 0) {
          goto LABEL_346;
        }
        goto LABEL_8;
      }
      v180 = *a1;
      v200[0] = 0;
      v80 = (*v180)(a1, v76 + 7, 1, v200);
      if ((v80 & 0x80000000) == 0) {
        v13[12] = v200[0] | (v81 << 8);
        if (((v81 << 8) & 0x8000000000000000LL) != 0) {
          goto LABEL_346;
        }
      LABEL_8:
        v14 = v198 + v196;
        v198 = v14;
        if (v14 > v15) {
          goto LABEL_346;
        }
        continue;
      }
    LABEL_344:
      v77 = v80;
    LABEL_345:
      v13[12] = v77;
    LABEL_346:
      v199 = nullptr;
      if (v13 != nullptr) {
        SdkRoutine_55dc80((__int64)&v199, (__int64)v13);
      }
      return v5;
    case 21968LL:
      if ((mkvparser_MasteringMetadata_Parse_plt(a1, v198, v196, v13 + 13) &
           1) == 0) {
        goto LABEL_346;
      }
      goto LABEL_8;
    default:
      goto LABEL_346;
    }
  }
}

#pragma GCC visibility pop
