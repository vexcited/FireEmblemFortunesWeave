#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* SdkRoutine_667510(_QWORD* result);
__int128* graphics_EmitProgramCommands(__int128* result, __int64, int, double,
                                       double, int32x4_t);
__int64 NvOsAlloc_plt(_QWORD);
__int64 SdkRoutine_64b750(__int64 result, __int64, __int64);
__int64 SdkRoutine_689ce0(__int64 result);
__int64 SdkRoutine_69a360(__int64 result, int, __int64, unsigned int);
__int64 nn_685bd0(__int64);
__int64 nvidia_617a90(_QWORD*);
extern __int128 SdkData_bb0e90;
extern __int128 SdkData_bb0ea0;
extern __int128 SdkData_bb0eb0;
extern __int128 SdkData_bb1140;
extern __int128 SdkData_bb13c0;
extern __int128 SdkData_bb1620;
extern __int128 SdkData_bb1630;
extern __int128 SdkData_bb1640;
extern __int128 SdkData_bb1800;
extern __int128 SdkData_bb1810;
extern __int128 SdkData_bb1a10;
extern __int128 SdkData_bb1a20;
extern __int128 SdkData_bb1a30;
extern __int128 SdkData_bb1a40;
extern __int128 SdkData_bb1a50;
extern __int128 SdkData_bb1a60;
extern __int128 SdkData_bb1c50;
extern __int128 SdkData_bb1c60;
extern __int128 SdkData_bb1c70;
extern __int128 SdkData_bb1cc0;
extern __int128 SdkData_bb1e20;
extern __int128 SdkData_bb1e30;
extern __int128 SdkData_bb1e40;
extern __int128 SdkData_bb1e50;
extern __int128 SdkData_bb20a0;
extern __int128 SdkData_bb20b0;
extern __int128 SdkData_bb22a0;
extern __int128 SdkData_bb24b0;
extern __int128 SdkData_bb24c0;
extern __int128 SdkData_bb24d0;
extern __int128 SdkData_bb24e0;
extern __int128 SdkData_bb26b0;
extern __int128 SdkData_bb26c0;
extern __int128 SdkData_bb2a00;
extern __int128 SdkData_bb2bb0;
extern __int128 SdkData_bb2bc0;
extern __int128 SdkData_bb2bd0;
extern __int128 SdkData_bb2be0;
extern __int128 SdkData_bb3200;
extern __int128 SdkData_bb3210;
extern __int128 SdkData_bb3220;
extern __int128 SdkData_bb3230;
extern __int128 SdkData_bb3530;
extern __int128 SdkData_bb3540;
extern __int128 SdkData_bb3550;
extern __int128 SdkData_bb3760;
extern __int128 SdkData_bb3a00;
extern __int128 SdkData_bb3a10;
extern __int128 SdkData_bb3a20;
extern __int128 SdkData_bb3de0;
extern __int128 SdkData_bb3df0;
extern __int128 SdkData_bb3e00;
extern __int128 SdkData_bb4020;
extern __int128 SdkData_bb4030;
extern __int128 SdkData_bb4040;
extern __int128 SdkData_bb42a0;
extern __int128 SdkData_bb42b0;
extern __int128 SdkData_bb42c0;
extern __int128 SdkData_bb42d0;
extern __int128 SdkData_bb44b0;
extern __int128 SdkData_bb44c0;
extern __int128 SdkData_bb4710;
extern __int128 SdkData_bb4720;
extern __int128 SdkData_bb4730;
extern __int128 SdkData_bb4960;
extern __int128 SdkData_bb4970;
extern __int128 SdkData_bb4c60;
extern __int128 SdkData_bb4c70;
extern __int128 SdkData_bb4e90;
extern __int128 SdkData_bb4ea0;
extern __int128 SdkData_bb4eb0;
extern __int128 SdkData_bb4ec0;
extern __int128 SdkData_bb5080;
extern __int128 SdkData_bb5090;
extern __int128 SdkData_bb50a0;
__int64 graphics_616510(_QWORD* a1, __int64 a2);
__int64 graphics_68f9e0(__int64 result, double a2, double a3, int32x4_t a4);

__int64 graphics_616510(_QWORD* a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  int v6;
  __int64 v7;
  bool v8;
  __int64 v9;

  result = NvOsAlloc_plt(a2);
  if (result != 0) {
    v5 = nvidia_617a90(a1);
    v6 = *(_DWORD*)v5 + 1;
    if (*(_DWORD*)v5 == -1) {
      v6 = -1;
    }
    *(_DWORD*)v5 = v6;
    v7 = *(_QWORD*)(v5 + 8);
    v8 = __CFADD__(v7, a2);
    v9 = v7 + a2;
    if (v8) {
      v9 = -1;
    }
    *(_QWORD*)(v5 + 8) = v9;
    return 1;
  }
  return result;
}

__int64 graphics_68f9e0(__int64 result, double a2, double a3, int32x4_t a4)
{

#pragma clang fp contract(off)
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _DWORD* v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  int v16;
  __int64 v17;
  int v18;
  int v19;
  __int64 v20;
  _DWORD* v21;
  __int64 v22;
  int* v23;
  char v24;
  int v25;
  int v26;
  int v27;
  char v28;
  int v29;
  int v30;
  int v31;
  char v32;
  int v33;
  __int64 v34;
  int v35;
  int v36;
  int v37;
  _DWORD* v38;
  char v39;
  int v40;
  int v41;
  int v42;
  char v43;
  int v44;
  int v45;
  int v46;
  int v47;
  char v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  char v55;
  int v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned int v62;
  int v63;
  char v64;
  char v65;
  unsigned int v66;
  char v67;
  unsigned int v68;
  __int64 v69;
  unsigned __int64 v70;
  int v71;
  __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned int v78;
  unsigned int v79;
  __int64 v80;
  int v81;
  __int64 v82;
  __int64 v83;
  int32x4_t v84;
  int32x4_t v85;
  unsigned __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  unsigned __int64 v90;
  __int64 v91;
  char v92;
  unsigned int v93;
  __int64 v94;
  __int128 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  unsigned int* v99;
  int8x16_t v100;
  unsigned int* v101;
  int8x16_t* v102;
  __int64 v103;
  int8x16_t v104;
  int8x16_t v105;
  float v106;
  float v107;
  __int64 v108;
  _BOOL4 v109;
  int v110;
  int v111;
  int v112;
  __int64 v113;
  int v114;
  float v115;
  int v116;
  float v117;
  __int64 v118;
  __int64 v119;
  unsigned int v120;
  int v121;
  int v122;
  __int64 v123;
  _OWORD* v124;
  int v125;
  int v126;
  int v127;
  int v128;
  __int64 v129;
  int v130;
  _DWORD* v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  int v141;
  int v142;
  char v143;
  unsigned int v144;
  char v145;
  unsigned int v146;
  char v147;
  unsigned int v148;
  __int128 var8;

  v4 = *(_DWORD*)(result + 356);
  if ((v4 & 0x10) == 0) {
    v5 = result;
    if ((v4 & 4) != 0) {
      return nn_685bd0(v5);
    }
    *(_QWORD*)&var8 = 1;
    graphics_EmitProgramCommands(&var8, result, 0, COERCE_DOUBLE(1), a3, a4);
    v6 = *(_QWORD*)(v5 + 11240);
    if ((unsigned __int64)(v6 + 28) > *(_QWORD*)(v5 + 11248)) {
      SdkRoutine_64b750(v5 + 11240, *(_QWORD*)(v5 + 11240),
                        4LL * (unsigned int)(*(_DWORD*)(v5 + 11344) + 7));
      v6 = *(_QWORD*)(v5 + 11240);
    }
    *(_DWORD*)(v6 + 24) = 0;
    v7 = v6 + 28;
    *(_OWORD*)v6 = SdkData_bb26b0;
    *(_QWORD*)(v6 + 16) = 0x394A0020E68LL;
    *(_QWORD*)(v5 + 11240) = v6 + 28;
    v8 = *(_DWORD**)(v5 + 16);
    if ((unsigned __int64)(v6 + 2076) > *(_QWORD*)(v5 + 11248)) {
      SdkRoutine_64b750(v5 + 11240, v7,
                        4LL * (unsigned int)(*(_DWORD*)(v5 + 11344) + 512));
      v7 = *(_QWORD*)(v5 + 11240);
    }
    *(_DWORD*)(v7 + 16) = 536937523;
    *(_OWORD*)v7 = SdkData_bb0e90;
    *(_DWORD*)(v7 + 20) = v8[1855];
    *(_DWORD*)(v7 + 24) = 536937528;
    *(_DWORD*)(v7 + 28) = v8[1856];
    *(_DWORD*)(v7 + 32) = 536937529;
    *(_DWORD*)(v7 + 36) = v8[1857];
    *(_DWORD*)(v7 + 40) = 536937531;
    *(_DWORD*)(v7 + 44) = v8[1858];
    *(_DWORD*)(v7 + 48) = 536937532;
    *(_DWORD*)(v7 + 52) = v8[1859];
    *(_OWORD*)(v7 + 56) = SdkData_bb4960;
    *(_OWORD*)(v7 + 72) = SdkData_bb0ea0;
    *(_OWORD*)(v7 + 88) = SdkData_bb4020;
    *(_OWORD*)(v7 + 104) = SdkData_bb3a00;
    *(_OWORD*)(v7 + 120) = SdkData_bb1140;
    *(_OWORD*)(v7 + 136) = SdkData_bb3de0;
    *(_OWORD*)(v7 + 152) = SdkData_bb20a0;
    *(_OWORD*)(v7 + 168) = SdkData_bb24b0;
    *(_OWORD*)(v7 + 184) = SdkData_bb2bb0;
    *(_OWORD*)(v7 + 200) = SdkData_bb3200;
    *(_OWORD*)(v7 + 216) = SdkData_bb1a10;
    *(_OWORD*)(v7 + 232) = SdkData_bb4710;
    *(_OWORD*)(v7 + 248) = SdkData_bb2bc0;
    *(_OWORD*)(v7 + 264) = SdkData_bb1a20;
    *(_OWORD*)(v7 + 280) = SdkData_bb3a10;
    *(_OWORD*)(v7 + 296) = SdkData_bb4720;
    *(_OWORD*)(v7 + 312) = SdkData_bb3760;
    *(_OWORD*)(v7 + 328) = SdkData_bb3df0;
    *(_OWORD*)(v7 + 344) = SdkData_bb4e90;
    *(_OWORD*)(v7 + 360) = SdkData_bb1a30;
    *(_OWORD*)(v7 + 376) = SdkData_bb1c50;
    *(_OWORD*)(v7 + 392) = SdkData_bb1620;
    *(_OWORD*)(v7 + 408) = SdkData_bb1e20;
    *(_OWORD*)(v7 + 424) = SdkData_bb5080;
    *(_QWORD*)(v7 + 440) = 0x800105A100000000LL;
    v9 = v8[1864];
    *(_DWORD*)(v7 + 448) = 536937472;
    *(_DWORD*)(v7 + 520) = -2147483453;
    *(_DWORD*)(v7 + 452) = 16 * (v9 & 3);
    *(_DWORD*)(v7 + 456) = 536936582;
    *(_DWORD*)(v7 + 460) = (v9 >> 8) & 0x30;
    *(_DWORD*)(v7 + 464) = 536937535;
    *(_DWORD*)(v7 + 468) = v9 & 0x30;
    *(_DWORD*)(v7 + 472) = 536937636;
    *(_DWORD*)(v7 + 476) = (v9 >> 4) & 0x30;
    *(_DWORD*)(v7 + 480) = 536937654;
    *(_DWORD*)(v7 + 492) = HIWORD(v9) & 0x30;
    *(_DWORD*)(v7 + 484) = (v9 >> 12) & 0x30;
    *(_DWORD*)(v7 + 488) = 536937655;
    *(_OWORD*)(v7 + 496) = SdkData_bb2a00;
    *(_QWORD*)(v7 + 512) = 0x8001008380010547LL;
    if (v8[1877] != 0) {
      *(_DWORD*)(v7 + 528) = v8[1877] & 0x1F;
      v10 = v7 + 532;
      *(_DWORD*)(v7 + 524) = 536936577;
    }
    else {
      v10 = v7 + 524;
    }
    *(_DWORD*)v10 = -2147286848;
    v11 = v10 + 4;
    if (v8[1861] != 0) {
      *(_DWORD*)(v10 + 12) = 536937632;
      *(_QWORD*)(v10 + 4) = 0x8001001E80010052LL;
      *(_DWORD*)(v10 + 16) = v8[1861] & 0x3FFFFF;
      *(_DWORD*)(v10 + 20) = -2147418029;
      v11 = v10 + 24;
    }
    if (v8[1862] != 0) {
      *(_DWORD*)(v11 + 8) = 536936631;
      *(_QWORD*)v11 = 0x8001001E80010052LL;
      *(_DWORD*)(v11 + 12) = v8[1862] & 0x3FFF;
      *(_DWORD*)(v11 + 16) = -2147418029;
      v11 += 20;
    }
    if (v8[1865] == 0) {
      *(_QWORD*)v11 = 0x80010670800103F7LL;
      v11 += 8;
    }
    *(_QWORD*)v11 = 0x80010565800003E3LL;
    v12 = v11 + 8;
    if (*(_DWORD*)(v5 + 324) == 41623) {
      *(_DWORD*)(v11 + 8) = -2147417225;
      v12 = v11 + 12;
    }
    v13 = v8[46];
    if (v13 > 1537) {
      if (v13 > 2053) {
        if ((unsigned int)(v13 - 2054) >= 3) {
          if (v13 == 2057) {
            v14 = -2012675900;
          }
          else {
            if (v13 != 2564) {
              goto LABEL_55;
            }
            v14 = -1979449148;
          }
        }
        else {
          v14 = -2012872508;
        }
      }
      else if (v13 <= 1793) {
        if (v13 == 1538) {
          v14 = -2063204156;
        }
        else {
          if (v13 != 1792) {
            goto LABEL_55;
          }
          v14 = -2030042940;
        }
      }
      else {
        switch (v13) {
        case 1794:
          v14 = -2029911868;
          break;
        case 1795:
          v14 = -2029846332;
          break;
        case 1797:
          v14 = -2029715260;
          break;
        default:
          goto LABEL_55;
        }
      }
    LABEL_54:
      *(_DWORD*)v12 = v14;
      v12 += 4;
    LABEL_55:
      *(_OWORD*)v12 = SdkData_bb1e30;
      if (v8[1867] != 0) {
        v15 = 16;
      }
      else {
        v15 = 0;
      }
      if (v8[1866] != 0) {
        v16 = v15 + 1;
      }
      else {
        v16 = v15;
      }
      *(_DWORD*)(v12 + 16) = v16;
      *(_DWORD*)(v12 + 28) = 536937608;
      *(_QWORD*)(v12 + 20) = 0x1000020010573LL;
      *(_DWORD*)(v12 + 32) = v8[1868];
      v17 = v12 + 36;
      if (v8[1869] != 0) {
        *(_DWORD*)v17 = 536937748;
        v18 = v8[1869];
      }
      else {
        v19 = v8[45] << (*(_DWORD*)(v5 + 324) > 0xC396u);
        if (v19 == 0) {
          goto LABEL_66;
        }
        *(_DWORD*)v17 = 536937748;
        v18 = (v19 << 16) | 8;
      }
      *(_DWORD*)(v12 + 40) = v18;
      v17 = v12 + 44;
    LABEL_66:
      *(_QWORD*)(v17 + 100) = 0;
      *(_OWORD*)v17 = SdkData_bb4ea0;
      *(_OWORD*)(v17 + 16) = SdkData_bb4c60;
      *(_OWORD*)(v17 + 108) = (__typeof__(*(_OWORD*)(v17 + 108))){0};
      *(_OWORD*)(v17 + 32) = SdkData_bb3530;
      *(_OWORD*)(v17 + 48) = SdkData_bb4030;
      *(_DWORD*)(v17 + 96) = 537265322;
      v20 = v17 + 132;
      *(_OWORD*)(v17 + 64) = SdkData_bb44b0;
      *(_OWORD*)(v17 + 80) = SdkData_bb44c0;
      *(_QWORD*)(v17 + 124) = 0x803F00B4800100B3LL;
      *(_QWORD*)(v5 + 11240) = v17 + 132;
      if ((unsigned __int64)(v17 + 144) > *(_QWORD*)(v5 + 11248)) {
        SdkRoutine_64b750(v5 + 11240, v20,
                          4LL * (unsigned int)(*(_DWORD*)(v5 + 11344) + 3));
        v20 = *(_QWORD*)(v5 + 11240);
      }
      v21 = (_DWORD*)(v20 + 12);
      *(_DWORD*)(v20 + 8) = -2080415199;
      *(_QWORD*)v20 = 0x800060A4800360ABLL;
      *(_QWORD*)(v5 + 11240) = v20 + 12;
      v22 = *(_QWORD*)(v5 + 16);
      v23 = *(int**)(v22 + 288);
      if ((unsigned __int64)(v20 + 2060) > *(_QWORD*)(v5 + 11248)) {
        SdkRoutine_64b750(v5 + 11240, (__int64)v21,
                          4LL * (unsigned int)(*(_DWORD*)(v5 + 11344) + 512));
        v21 = *(_DWORD**)(v5 + 11240);
      }
      v24 = *((_BYTE*)v23 + 20);
      v25 = v23[4];
      v26 = -*((unsigned __int8*)v23 + 21);
      v27 = v23[6] << v24;
      *v21 = -1610412520;
      v21[1] = v25;
      v21[2] = v27;
      v21[3] = 0xFFFFFFFF >> v26 << v24;
      v28 = *((_BYTE*)v23 + 52);
      v29 = v23[12];
      v30 = -*((unsigned __int8*)v23 + 53);
      v31 = v23[14] << v28;
      v21[4] = -1610412520;
      v21[5] = v29;
      v21[6] = v31;
      v21[7] = 0xFFFFFFFF >> v30 << v28;
      v32 = *((_BYTE*)v23 + 4);
      v33 = *v23;
      v34 = 2;
      v35 = -*((unsigned __int8*)v23 + 5);
      if (*(_DWORD*)(v22 + 7496) == 0) {
        v34 = 3;
      }
      v36 = v23[v34];
      v21[8] = -1610412520;
      v21[9] = v33;
      v21[10] = v36 << v32;
      v21[11] = 0xFFFFFFFF >> v35 << v32;
      v37 = *(_DWORD*)(v22 + 7412);
      if ((v37 & 1) != 0) {
        v39 = *((_BYTE*)v23 + 248);
        v40 = -*((unsigned __int8*)v23 + 249);
        v41 = v23[61];
        v42 = v23[63] << v39;
        v21[12] = -1610412520;
        v21[13] = v41;
        v21[14] = v42;
        v21[15] = 0xFFFFFFFF >> v40 << v39;
        v38 = v21 + 16;
        v37 = *(_DWORD*)(v22 + 7412);
        if ((v37 & 2) == 0) {
          goto LABEL_77;
        }
      }
      else {
        v38 = v21 + 12;
        if ((v37 & 2) == 0) {
        LABEL_77:
          if ((v37 & 0x10) != 0) {
            v48 = *((_BYTE*)v23 + 260);
            v49 = -*((unsigned __int8*)v23 + 261);
            v50 = v23[61];
            v51 = v23[66] << v48;
            *v38 = -1610412520;
            v38[1] = v50;
            v38[2] = v51;
            v38[3] = 0xFFFFFFFF >> v49 << v48;
            v38 += 4;
            if ((*(_DWORD*)(v22 + 7412) & 0x20) == 0) {
            LABEL_79:
              v47 = *(_DWORD*)(v22 + 7540);
              if ((v47 & 2) != 0) {
                goto LABEL_86;
              }
              goto LABEL_83;
            }
          }
          else if ((v37 & 0x20) == 0) {
            goto LABEL_79;
          }
          v52 = v23[61];
          v53 = v23[67];
          v54 = -*((unsigned __int8*)v23 + 261);
          v55 = *((_BYTE*)v23 + 260);
          *v38 = -1610412520;
          v38[1] = v52;
          v38[2] = v53 << v55;
          v38[3] = 0xFFFFFFFF >> v54 << v55;
          v38 += 4;
          v47 = *(_DWORD*)(v22 + 7540);
          if ((v47 & 2) != 0) {
            goto LABEL_86;
          }
        LABEL_83:
          if ((v47 & 1) != 0 || (*(_BYTE*)(v22 + 9) & 0x40) == 0) {
            v56 = -2147482294;
            v57 = -2147418082;
            v58 = 4;
            *v38 = -2147418030;
            v59 = 3;
            v60 = 2;
            v61 = 1;
            v62 = -2147418029;
          LABEL_97:
            v38[v61] = v57;
            v38[v60] = v56;
            v38[v59] = v62;
            v69 = (__int64)&v38[v58];
            v70 = *(_QWORD*)(v5 + 11248);
            *(_QWORD*)(v5 + 11240) = v69;
            if (v69 + 40 > v70) {
              SdkRoutine_64b750(
                  v5 + 11240, v69,
                  4LL * (unsigned int)(*(_DWORD*)(v5 + 11344) + 10));
              v69 = *(_QWORD*)(v5 + 11240);
            }
            if (*(_DWORD*)(*(_QWORD*)(v5 + 16) + 7292LL) == 147371889 ||
                (*(_BYTE*)(v5 + 356) & 0x22) != 0) {
              v71 = 63;
            }
            else {
              v71 = 0;
            }
            *(_DWORD*)(v69 + 16) = v71;
            v72 = v69 + 40;
            *(_OWORD*)v69 = SdkData_bb1800;
            *(_DWORD*)(v69 + 36) = -16777211;
            *(_OWORD*)(v69 + 20) = SdkData_bb3a20;
            *(_QWORD*)(v5 + 11240) = v69 + 40;
            if ((unsigned __int64)(v69 + 440) > *(_QWORD*)(v5 + 11248)) {
              SdkRoutine_64b750(
                  v5 + 11240, v72,
                  4LL * (unsigned int)(*(_DWORD*)(v5 + 11344) + 100));
              v72 = *(_QWORD*)(v5 + 11240);
            }
            *(_OWORD*)v72 = SdkData_bb1a50;
            v73 = *(_QWORD*)(v5 + 10784) + *(unsigned int*)(v5 + 11040);
            *(_DWORD*)(v72 + 24) = v73 >> 8;
            *(_DWORD*)(v72 + 28) = -1610412476;
            *(_DWORD*)(v72 + 32) = HIDWORD(v73);
            *(_DWORD*)(v72 + 36) = v73;
            *(_DWORD*)(v72 + 40) = 143;
            *(_QWORD*)(v72 + 16) = 0x537A0020E68LL;
            v74 = *(_QWORD*)(v5 + 10784) + *(unsigned int*)(v5 + 11080);
            *(_DWORD*)(v72 + 52) = v74;
            *(_DWORD*)(v72 + 44) = 537002977;
            *(_DWORD*)(v72 + 48) = HIDWORD(v74);
            *(_OWORD*)(v72 + 56) = SdkData_bb4040;
            v75 = *(_QWORD*)(v5 + 10784);
            v76 = *(unsigned int*)(v5 + 11088);
            *(_QWORD*)(v72 + 88) = 0;
            v77 = v75 + v76;
            *(_QWORD*)(v72 + 80) = v75 + v76;
            *(_QWORD*)(v72 + 72) = 0x200408E481940E36LL;
            *(_QWORD*)(v5 + 11240) = v72 + 96;
            v78 = *(_DWORD*)(v5 + 11084);
            v79 = *(_DWORD*)(v5 + 11092);
            if (v78 != 0) {
              SdkRoutine_69a360(v5, 0, v74, v78);
            }
            if (v79 != 0) {
              SdkRoutine_69a360(v5, 0, v77, v79);
            }
            v80 = *(_QWORD*)(v5 + 11240);
            v81 = *(_DWORD*)(*(_QWORD*)(v5 + 16) + 8LL);
            if ((unsigned __int64)(v80 + 128) > *(_QWORD*)(v5 + 11248)) {
              SdkRoutine_64b750(
                  v5 + 11240, *(_QWORD*)(v5 + 11240),
                  4LL * (unsigned int)(*(_DWORD*)(v5 + 11344) + 32));
              v80 = *(_QWORD*)(v5 + 11240);
            }
            v82 = *(_QWORD*)(v5 + 10784);
            v83 = *(unsigned int*)(v5 + 11040);
            LANES128(v84).n128_u64[0] = 0x400000004LL;
            LANES128(v84).n128_u64[1] = 0x400000004LL;
            LANES128(v85).n128_u64[0] = 0x800000008LL;
            LANES128(v85).n128_u64[1] = 0x800000008LL;
            v86 = 0;
            v87 = v80 + 36;
            *(_DWORD*)(v80 + 32) = -2147415772;
            if ((v81 & 0x300) != 0) {
              v88 = 2048;
            }
            else {
              v88 = 512;
            }
            *(_QWORD*)v80 = 0x900200308E0LL;
            v89 = v82 + v83;
            *(_DWORD*)(v80 + 8) = HIDWORD(v89);
            *(_DWORD*)(v80 + 12) = v89;
            *(_OWORD*)(v80 + 16) = SdkData_bb0eb0;
            v90 = v88 >> 2;
            v91 = (unsigned int)(v88 >> 2) | 0x20;
            if ((v81 & 0x300) != 0) {
              v92 = 11;
            }
            else {
              v92 = 9;
            }
            *(_QWORD*)(v5 + 11240) = v87;
            v93 = ((_DWORD)v90 << 16) | 0xA00108E3;
            v94 = (unsigned int)(v90 - 1) + 1LL;
            v95 = SdkData_bb1cc0;
            do {
              if ((unsigned __int64)(v87 + 4 * v91) > *(_QWORD*)(v5 + 11248)) {
                SdkRoutine_64b750(
                    v5 + 11240, v87,
                    4LL * (unsigned int)(*(_DWORD*)(v5 + 11344) + v91));
                v95 = SdkData_bb1cc0;
                LANES128(v85).n128_u64[0] = 0x800000008LL;
                LANES128(v85).n128_u64[1] = 0x800000008LL;
                LANES128(v84).n128_u64[0] = 0x400000004LL;
                LANES128(v84).n128_u64[1] = 0x400000004LL;
                v87 = *(_QWORD*)(v5 + 11240);
              }
              v96 = *(_QWORD*)(v5 + 10784);
              v97 = *(unsigned int*)(v5 + 11048);
              *(_DWORD*)v87 = 537069792;
              *(_DWORD*)(v87 + 4) = v88;
              v98 = v96 + (v86 << v92) + v97;
              *(_DWORD*)(v87 + 8) = HIDWORD(v98);
              *(_DWORD*)(v87 + 12) = v98;
              if (v86 > 4) {
                v99 = (unsigned int*)(v87 + 16);
              }
              else {
                *(_DWORD*)(v87 + 16) = (8 * v86) | 0x80210904;
                v99 = (unsigned int*)(v87 + 20);
              }
              v100 = COERCE_AS(int8x16_t, v95);
              v101 = &v99[v94];
              *v99 = v93;
              v99[1] = 0;
              v102 = (int8x16_t*)(v99 + 6);
              v87 = (__int64)(v101 + 2);
              v103 = v94;
              do {
                v104 = vaddq_s32(v100, v84);
                v103 -= 8;
                v105 = vorrq_s8(vcgeq_u32(v100, v85), v100);
                v100 = vaddq_s32(v100, v85);
                v102[-1] = v105;
                *v102 = vorrq_s8(vcgeq_u32(v104, v85), v104);
                v102 += 2;
              } while (v103 != 0);
              ++v86;
              *(_QWORD*)(v5 + 11240) = v87;
            } while (v86 != 7);
            if ((unsigned __int64)(v87 + 2560) > *(_QWORD*)(v5 + 11248)) {
              SdkRoutine_64b750(
                  v5 + 11240, v87,
                  4LL * (unsigned int)(*(_DWORD*)(v5 + 11344) + 640));
              v87 = *(_QWORD*)(v5 + 11240);
            }
            v106 = 0x0.0p+0f;
            v107 = 0x1.0000000000000p+0f;
            v108 = 0;
            *(_DWORD*)(v87 + 16) = 6173;
            *(_OWORD*)v87 = SdkData_bb4970;
            v109 = *(_DWORD*)(*(_QWORD*)(v5 + 16) + 4LL) == 1;
            if (*(_DWORD*)(*(_QWORD*)(v5 + 16) + 4LL) != 1) {
              v106 = 0x1.0000000000000p-1f;
              v107 = 0x1.0000000000000p-1f;
            }
            *(_DWORD*)(v87 + 20) = 536937311;
            *(_DWORD*)(v87 + 24) = v109;
            *(_DWORD*)(v87 + 28) = 536937090;
            *(float*)(v87 + 32) = v107;
            *(float*)(v87 + 40) = v106;
            *(float*)(v87 + 48) = v107;
            *(float*)(v87 + 56) = v106;
            *(float*)(v87 + 64) = v107;
            *(float*)(v87 + 72) = v106;
            *(float*)(v87 + 80) = v107;
            *(float*)(v87 + 88) = v106;
            *(float*)(v87 + 96) = v107;
            *(float*)(v87 + 104) = v106;
            *(float*)(v87 + 112) = v107;
            *(float*)(v87 + 120) = v106;
            *(float*)(v87 + 128) = v107;
            *(float*)(v87 + 136) = v106;
            *(float*)(v87 + 144) = v107;
            *(float*)(v87 + 152) = v106;
            *(float*)(v87 + 160) = v107;
            *(float*)(v87 + 168) = v106;
            *(float*)(v87 + 176) = v107;
            *(float*)(v87 + 184) = v106;
            *(float*)(v87 + 192) = v107;
            *(float*)(v87 + 200) = v106;
            *(float*)(v87 + 208) = v107;
            *(float*)(v87 + 216) = v106;
            *(float*)(v87 + 224) = v107;
            *(float*)(v87 + 232) = v106;
            *(float*)(v87 + 240) = v107;
            *(float*)(v87 + 248) = v106;
            *(float*)(v87 + 256) = v107;
            *(float*)(v87 + 264) = v106;
            *(float*)(v87 + 272) = v107;
            *(float*)(v87 + 280) = v106;
            *(_DWORD*)(v87 + 36) = 536937093;
            *(_DWORD*)(v87 + 44) = 536937098;
            *(_DWORD*)(v87 + 52) = 536937101;
            *(_DWORD*)(v87 + 60) = 536937106;
            *(_DWORD*)(v87 + 68) = 536937109;
            *(_DWORD*)(v87 + 76) = 536937114;
            *(_DWORD*)(v87 + 84) = 536937117;
            *(_DWORD*)(v87 + 92) = 536937122;
            *(_DWORD*)(v87 + 100) = 536937125;
            *(_DWORD*)(v87 + 108) = 536937130;
            *(_DWORD*)(v87 + 116) = 536937133;
            *(_DWORD*)(v87 + 124) = 536937138;
            *(_DWORD*)(v87 + 132) = 536937141;
            *(_DWORD*)(v87 + 140) = 536937146;
            *(_DWORD*)(v87 + 148) = 536937149;
            *(_DWORD*)(v87 + 156) = 536937154;
            *(_DWORD*)(v87 + 164) = 536937157;
            *(_DWORD*)(v87 + 172) = 536937162;
            *(_DWORD*)(v87 + 180) = 536937165;
            *(_DWORD*)(v87 + 188) = 536937170;
            *(_DWORD*)(v87 + 196) = 536937173;
            *(_DWORD*)(v87 + 204) = 536937178;
            *(_DWORD*)(v87 + 212) = 536937181;
            *(_DWORD*)(v87 + 220) = 536937186;
            *(_DWORD*)(v87 + 228) = 536937189;
            *(_DWORD*)(v87 + 236) = 536937194;
            *(_DWORD*)(v87 + 244) = 536937197;
            *(_DWORD*)(v87 + 252) = 536937202;
            *(_DWORD*)(v87 + 260) = 536937205;
            *(_DWORD*)(v87 + 268) = 536937210;
            *(_DWORD*)(v87 + 276) = 536937213;
            if (**(_DWORD**)(v5 + 16) == 1) {
              v110 = -2147482389;
            }
            else {
              v110 = -2146433813;
            }
            v111 = 537002635;
            v112 = 537002756;
            *(_DWORD*)(v87 + 284) = v110;
            do {
              v113 = v87 + v108;
              v108 += 72;
              *(_DWORD*)(v113 + 288) = v111 - 11;
              *(_DWORD*)(v113 + 292) = 1056964608;
              v114 = **(_DWORD**)(v5 + 16);
              *(_QWORD*)(v113 + 304) = 0x3F0000003F000000LL;
              *(_DWORD*)(v113 + 328) = 1056964608;
              *(_DWORD*)(v113 + 300) = v111 - 8;
              if (v114 == 1) {
                v115 = -0x1.0000000000000p-1f;
              }
              else {
                v115 = 0x1.0000000000000p-1f;
              }
              *(_DWORD*)(v113 + 312) = v112 - 4;
              *(_QWORD*)(v113 + 316) = 0x1000000010000LL;
              *(float*)(v113 + 296) = v115;
              *(_DWORD*)(v113 + 324) = v111 - 3;
              v116 = **(_DWORD**)(v5 + 16);
              *(_DWORD*)(v113 + 336) = v111;
              *(_DWORD*)(v113 + 348) = v112;
              v111 += 16;
              v112 += 8;
              *(_QWORD*)(v113 + 352) = 0x1000000010000LL;
              if (v116 == 1) {
                v117 = -0x1.0000000000000p-1f;
              }
              else {
                v117 = 0x1.0000000000000p-1f;
              }
              *(_QWORD*)(v113 + 340) = 0x3F0000003F000000LL;
              *(float*)(v113 + 332) = v117;
            } while ((_DWORD)v108 != 576);
            v118 = v87 + v108;
            v119 = v87;
            *(_OWORD*)(v118 + 288) = SdkData_bb5090;
            *(_OWORD*)(v118 + 304) = SdkData_bb42a0;
            *(_OWORD*)(v118 + 320) = SdkData_bb20b0;
            *(_OWORD*)(v118 + 336) = SdkData_bb3e00;
            *(_OWORD*)(v118 + 352) = SdkData_bb13c0;
            *(_OWORD*)(v118 + 368) = SdkData_bb3540;
            *(_OWORD*)(v118 + 384) = SdkData_bb2bd0;
            *(_OWORD*)(v118 + 400) = SdkData_bb3550;
            *(_OWORD*)(v118 + 416) = SdkData_bb3210;
            *(_OWORD*)(v118 + 432) = SdkData_bb26c0;
            *(_OWORD*)(v118 + 448) = SdkData_bb4730;
            *(_OWORD*)(v118 + 464) = SdkData_bb4eb0;
            *(_OWORD*)(v118 + 480) = SdkData_bb42b0;
            *(_OWORD*)(v118 + 496) = SdkData_bb1c60;
            *(_OWORD*)(v118 + 512) = SdkData_bb24c0;
            *(_OWORD*)(v118 + 528) = SdkData_bb42c0;
            *(_OWORD*)(v118 + 544) = SdkData_bb4c70;
            *(_OWORD*)(v118 + 560) = SdkData_bb50a0;
            *(_OWORD*)(v118 + 576) = SdkData_bb3220;
            *(_OWORD*)(v118 + 592) = SdkData_bb1630;
            *(_DWORD*)(v118 + 624) = -1;
            *(_OWORD*)(v118 + 608) = SdkData_bb42d0;
            SdkRoutine_667510(&var8);
            v120 = var8;
            v121 = 0;
            v122 = 0;
            *(_DWORD*)(v118 + 644) = 0;
            v123 = 32;
            *(_DWORD*)(v118 + 628) = 536939829;
            *(_DWORD*)(v118 + 632) = (v120 >> 17) & 2 | (v120 >> 4) & 0x3F0 |
                                     (v120 >> 14) & 0xC |
                                     ((v120 & 0x80000) != 0);
            v124 = (_OWORD*)(v118 + 1416);
            *(_QWORD*)(v118 + 636) = 0x544A0020E68LL;
            v125 = 537003777;
            do {
              v126 = v122 + 537003789;
              *(_DWORD*)(v118 + 648) = v125;
              *(_QWORD*)(v118 + 664) = 0;
              v122 += 8;
              v123 -= 4;
              *(_QWORD*)(v118 + 688) = 0;
              *(_DWORD*)(v118 + 672) = v125 + 4;
              *(_QWORD*)(v118 + 712) = 0;
              *(_QWORD*)(v118 + 736) = 0;
              *(_QWORD*)(v118 + 652) = 0;
              *(_QWORD*)(v118 + 676) = 0;
              *(_QWORD*)(v118 + 700) = 0;
              *(_QWORD*)(v118 + 724) = 0;
              *(_DWORD*)(v118 + 660) = v126 - 1421;
              v127 = v125 + 8;
              v125 += 16;
              *(_DWORD*)(v118 + 684) = v126 - 1419;
              v128 = v121 + 537003789;
              v121 += 16;
              *(_DWORD*)(v118 + 696) = v127;
              *(_DWORD*)(v118 + 720) = v128;
              *(_DWORD*)(v118 + 708) = v126 - 1417;
              *(_DWORD*)(v118 + 732) = v126 - 1415;
              v118 += 96;
            } while (v123 != 0);
            v129 = v119 + v108;
            v130 = 0;
            *(_DWORD*)(v129 + 1440) = v88;
            *v124 = SdkData_bb4ec0;
            *(_QWORD*)(v129 + 1432) = 0x543A0020E68LL;
            *(_QWORD*)(v119 + v108 + 1444) = 0x7A0090E66LL;
            *(_DWORD*)(v129 + 1452) = 1340;
            *(_DWORD*)(v129 + 1456) =
                (*(_QWORD*)(v5 + 10784) +
                 (unsigned __int64)*(unsigned int*)(v5 + 11048)) >>
                8;
            *(_DWORD*)(v129 + 1460) =
                (*(_QWORD*)(v5 + 10784) + (1LL << v92) +
                 (unsigned __int64)*(unsigned int*)(v5 + 11048)) >>
                8;
            *(_DWORD*)(v129 + 1464) =
                (*(_QWORD*)(v5 + 10784) + (2LL << v92) +
                 (unsigned __int64)*(unsigned int*)(v5 + 11048)) >>
                8;
            *(_DWORD*)(v129 + 1468) =
                (*(_QWORD*)(v5 + 10784) + (3LL << v92) +
                 (unsigned __int64)*(unsigned int*)(v5 + 11048)) >>
                8;
            *(_DWORD*)(v129 + 1472) =
                (*(_QWORD*)(v5 + 10784) + (4LL << v92) +
                 (unsigned __int64)*(unsigned int*)(v5 + 11048)) >>
                8;
            *(_DWORD*)(v129 + 1476) =
                (*(_QWORD*)(v5 + 10784) + (5LL << v92) +
                 (unsigned __int64)*(unsigned int*)(v5 + 11048)) >>
                8;
            *(_DWORD*)(v129 + 1480) =
                (*(_QWORD*)(v5 + 10784) + (6LL << v92) +
                 (unsigned __int64)*(unsigned int*)(v5 + 11048)) >>
                8;
            *(_OWORD*)(v119 + v108 + 1484) = SdkData_bb24d0;
            *(_OWORD*)(v119 + v108 + 1500) = SdkData_bb1c70;
            *(_OWORD*)(v119 + v108 + 1516) = SdkData_bb24e0;
            *(_QWORD*)(v119 + v108 + 1532) = 0x120010644LL;
            *(_DWORD*)(v129 + 1540) = 536937798;
            *(_DWORD*)(v129 + 1544) = 1065353216;
            *(_OWORD*)(v119 + v108 + 1548) = SdkData_bb2be0;
            *(_OWORD*)(v119 + v108 + 1564) = SdkData_bb1a60;
            *(_QWORD*)(v119 + v108 + 1580) = 0x200108E481840E36LL;
            *(_DWORD*)(v129 + 1588) = 1157627392;
            *(_OWORD*)(v119 + v108 + 1592) = SdkData_bb1e40;
            *(_DWORD*)(v129 + 1616) = -2147482498;
            *(_QWORD*)(v129 + 1608) = 0x8013044C800003F6LL;
            v131 = *(_DWORD**)(v5 + 16);
            *(_QWORD*)(v119 + v108 + 1620) = 0x515A0020E68LL;
            v132 = v131[674];
            if (v132 != -1) {
              v133 = v131[673] + v132;
              if (v133 != -1) {
                v130 = v131[672] + (v133 >> 8);
              }
            }
            *(_DWORD*)(v129 + 1628) = v130;
            v134 = 0;
            *(_QWORD*)(v129 + 1632) = 0x505A0020E68LL;
            v135 = v131[664];
            if (v135 != -1) {
              v136 = v131[663] + v135;
              if (v136 != -1) {
                v134 = v131[662] + (v136 >> 8);
              }
            }
            v137 = v119 + v108;
            v138 = 0;
            *(_DWORD*)(v137 + 1640) = v134;
            *(_DWORD*)(v137 + 1644) = (v131[670] << 16) | 0x80000813;
            v139 = (int)v131[664];
            if ((_DWORD)v139 != -1) {
              v140 = (int)v131[663] + v139;
              if ((_DWORD)v140 != -1) {
                v138 = v140 + ((unsigned __int64)(unsigned int)v131[662] << 8);
              }
            }
            *(_DWORD*)(v137 + 1656) = v138;
            *(_DWORD*)(v137 + 1652) = HIDWORD(v138);
            *(_DWORD*)(v137 + 1648) = 537004053;
            *(_OWORD*)(v137 + 1660) = SdkData_bb22a0;
            v141 = *(_DWORD*)(*(_QWORD*)(v5 + 16) + 7344LL);
            *(_DWORD*)(v137 + 1680) = 384;
            *(_DWORD*)(v137 + 1676) = v141;
            v142 = *(unsigned __int8*)(*(_QWORD*)(v5 + 16) + 7347LL);
            *(_OWORD*)(v137 + 1688) = SdkData_bb1810;
            *(_DWORD*)(v137 + 1684) = v142;
            *(_OWORD*)(v137 + 1704) = SdkData_bb1640;
            *(_OWORD*)(v137 + 1720) = SdkData_bb1e50;
            *(_OWORD*)(v137 + 1736) = SdkData_bb3230;
            *(_DWORD*)(v137 + 1760) = -2147482290;
            *(_QWORD*)(v137 + 1752) = 0x8000048700040000LL;
            *(_QWORD*)(v5 + 11240) = v137 + 1764;
            SdkRoutine_689ce0(v5);
            return nn_685bd0(v5);
          }
        LABEL_86:
          *(_OWORD*)v38 = SdkData_bb1a40;
          v63 = *(_DWORD*)(v22 + 7540);
          if ((v63 & 0x80) != 0) {
            v64 = *((_BYTE*)v23 + 408);
            v56 = v23[104] << v64;
            v62 = 0xFFFFFFFF >> -*((_BYTE*)v23 + 409) << v64;
            if ((v63 & 4) == 0) {
              goto LABEL_91;
            }
          }
          else {
            v56 = 0;
            v62 = 0;
            if ((v63 & 4) == 0) {
            LABEL_91:
              if ((v63 & 8) != 0) {
                v143 = *((_BYTE*)v23 + 312);
                v144 = 0xFFFFFFFF >> -*((_BYTE*)v23 + 313) << v143;
                v62 |= v144;
                v56 = v56 & ~v144 | (v23[80] << v143);
                if ((v63 & 0x10) == 0) {
                LABEL_93:
                  if ((v63 & 0x20) == 0) {
                    goto LABEL_94;
                  }
                  goto LABEL_156;
                }
              }
              else if ((v63 & 0x10) == 0) {
                goto LABEL_93;
              }
              v145 = *((_BYTE*)v23 + 432);
              v146 = 0xFFFFFFFF >> -*((_BYTE*)v23 + 433) << v145;
              v62 |= v146;
              v56 = v56 & ~v146 | (v23[110] << v145);
              if ((v63 & 0x20) == 0) {
              LABEL_94:
                v57 = v23[77];
                if ((v63 & 0x40) == 0) {
                LABEL_96:
                  v38[4] = -1610412520;
                  v58 = 8;
                  v59 = 7;
                  v60 = 6;
                  v61 = 5;
                  goto LABEL_97;
                }
              LABEL_95:
                v67 = *((_BYTE*)v23 + 468);
                v68 = 0xFFFFFFFF >> -*((_BYTE*)v23 + 469) << v67;
                v62 |= v68;
                v56 = v56 & ~v68 | (v23[119] << v67);
                goto LABEL_96;
              }
            LABEL_156:
              v147 = *((_BYTE*)v23 + 456);
              v148 = 0xFFFFFFFF >> -*((_BYTE*)v23 + 457) << v147;
              v62 |= v148;
              v56 = v56 & ~v148 | (v23[116] << v147);
              v57 = v23[77];
              if ((v63 & 0x40) == 0) {
                goto LABEL_96;
              }
              goto LABEL_95;
            }
          }
          v65 = *((_BYTE*)v23 + 396);
          v66 = 0xFFFFFFFF >> -*((_BYTE*)v23 + 397) << v65;
          v62 |= v66;
          v56 = v56 & ~v66 | (v23[101] << v65);
          goto LABEL_91;
        }
      }
      v43 = *((_BYTE*)v23 + 248);
      v44 = -*((unsigned __int8*)v23 + 249);
      v45 = v23[61];
      v46 = v23[64] << v43;
      *v38 = -1610412520;
      v38[1] = v45;
      v38[2] = v46;
      v38[3] = 0xFFFFFFFF >> v44 << v43;
      v38 += 4;
      v37 = *(_DWORD*)(v22 + 7412);
      goto LABEL_77;
    }
    if (v13 > 1279) {
      if (v13 > 1535) {
        v14 = -2063269692;
      }
      else {
        switch (v13) {
        case 1280:
          v14 = -2063597372;
          break;
        case 1282:
          v14 = -2063466300;
          break;
        case 1283:
          v14 = -2063400764;
          break;
        default:
          goto LABEL_55;
        }
      }
      goto LABEL_54;
    }
    v14 = -2097151804;
    if (v13 <= 847) {
      if (v13 == 768) {
        goto LABEL_54;
      }
      if (v13 != 800) {
        goto LABEL_55;
      }
    }
    else {
      if (v13 == 848) {
      LABEL_24:
        v14 = -2080374588;
        goto LABEL_54;
      }
      if (v13 != 864) {
        if (v13 != 1024) {
          goto LABEL_55;
        }
        goto LABEL_24;
      }
    }
    v14 = -2097020732;
    goto LABEL_54;
  }
  return result;
}

#pragma GCC visibility pop
