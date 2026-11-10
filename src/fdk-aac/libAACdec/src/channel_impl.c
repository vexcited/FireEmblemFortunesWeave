#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_CBlock_ReadScaleFactorData_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_CBlock_ReadSectionData_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_CBlock_ReadSpectralData_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_CHcr_Read_plt(_QWORD, _QWORD);
__int64 nn_codec_CJointStereo_Read_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_CPulseData_Read_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_CRvlc_Decode_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_CRvlc_Read_plt(_QWORD, _QWORD);
__int64 nn_codec_CTns_ReadDataPresentFlag_plt(_QWORD, _QWORD);
__int64 nn_codec_CTns_Read_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_CTns_Reset_plt(_QWORD);
__int64 nn_codec_FDK_getValidBits_plt(_QWORD);
__int64 nn_codec_FDK_get_plt(_QWORD, _QWORD);
__int64 nn_codec_IcsRead_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_getBitstreamElementList_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_transportDec_CrcEndReg_plt(_QWORD);
__int64 nn_codec_transportDec_CrcStartReg_plt(_QWORD, _QWORD);
extern void (*SdkData_e87a50[778])();
__int64 nn_codec_CChannelElement_Read(unsigned int* a1, _QWORD* a2, __int64 a3,
                                      unsigned int a4, _QWORD* a5,
                                      unsigned int a6, unsigned int a7,
                                      unsigned int a8, unsigned __int8 a9,
                                      __int64 a10);

__int64 nn_codec_CChannelElement_Read(unsigned int* a1, _QWORD* a2, __int64 a3,
                                      unsigned int a4, _QWORD* a5,
                                      unsigned int a6, unsigned int a7,
                                      unsigned int a8, unsigned __int8 a9,
                                      __int64 a10)
{
  unsigned __int8 v11;
  __int64 v15;
  int** v16;
  _QWORD* v17;
  char v18;
  unsigned int v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  __int64 v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  __int64 v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v44;
  int v45;
  unsigned int v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  int v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  unsigned int v63;
  int v64;
  unsigned int v65;
  unsigned int v66;
  unsigned int v67;
  unsigned int v68;
  unsigned int v69;
  int v70;
  unsigned int v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  unsigned int v75;
  unsigned int v76;
  __int64 v78;
  int v79;
  int v80;
  int v81;
  unsigned int v83;
  int v84;
  unsigned __int8 v85;
  int v86;
  int v88;

  v11 = a8;
  v15 = nn_codec_getBitstreamElementList_plt(a4, a9, a8, 0);
  if (v15 == 0) {
    v19 = 8195;
    v88 = -1;
    v86 = -1;
    goto LABEL_112;
  }
  v16 = (int**)v15;
  nn_codec_CTns_Reset_plt(*(_QWORD*)(*a2 + 216LL) + 640LL);
  v78 = a3;
  v81 = v11;
  if (v11 == 2) {
    v17 = a2 + 1;
    nn_codec_CTns_Reset_plt(*(_QWORD*)(a2[1] + 216LL) + 640LL);
    if ((a6 & 0x18) != 0) {
      *(_BYTE*)(*(_QWORD*)(*a2 + 216LL) + 1250LL) = 1;
      *(_BYTE*)(*(_QWORD*)(a2[1] + 216LL) + 1250LL) =
          *(_BYTE*)(*(_QWORD*)(*a2 + 216LL) + 1250LL);
      v18 = *(_BYTE*)(*(_QWORD*)(*a2 + 216LL) + 1250LL);
    LABEL_8:
      *(_BYTE*)(*(_QWORD*)(*v17 + 216LL) + 1250LL) = v18;
    }
  }
  else if ((a6 & 0x18) != 0) {
    v18 = 1;
    v17 = a2;
    goto LABEL_8;
  }
  v83 = 0;
  v20 = 0;
  v21 = 0;
  v84 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                   (unsigned __int64)((__int64*)0x4LL));
  v80 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                   (unsigned __int64)(*(_BYTE**)0x20LL));
  v79 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                   (unsigned __int64)((__int64*)0xCLL) + 4);
  v88 = -1;
  v85 = v11;
  v86 = -1;
  v22 = **v16;
  while (2) {
    v19 = 8195;
    switch (v22) {
    case 0:
      v26 = a1[1];
      if (v26 < 5) {
        v42 = nn_codec_FDK_getValidBits_plt(a1 + 2);
        if (31 - a1[1] >= v42) {
          v43 = v42;
        }
        else {
          v43 = 31 - a1[1];
        }
        v44 = *a1 << v43;
        v45 = nn_codec_FDK_get_plt(a1 + 2, v43);
        v46 = a1[1];
        v27 = v44 | v45;
        *a1 = v44 | v45;
        v26 = v46 + v43;
        if (v26 <= 3) {
          v11 = v85;
          v47 = v27 << (4 - v26);
          *(_QWORD*)a1 = v47;
          goto LABEL_101;
        }
        v11 = v85;
      }
      else {
        v27 = *a1;
      }
      v73 = v26 - 4;
      v47 = v27 >> v73;
      a1[1] = v73;
    LABEL_101:
      *(_BYTE*)(*a2 + 44LL) = v47 & v79;
      if (v11 == 2) {
        *(_BYTE*)(a2[1] + 44LL) = *(_BYTE*)(*a2 + 44LL);
      }
      goto LABEL_11;
    case 1:
      v31 = a1[1];
      if (v31 >= 2) {
        v32 = *a1;
      LABEL_80:
        v59 = v31 - 1;
        v60 = v32 >> v59;
        a1[1] = v59;
        goto LABEL_81;
      }
      v54 = nn_codec_FDK_getValidBits_plt(a1 + 2);
      if (31 - a1[1] >= v54) {
        v55 = v54;
      }
      else {
        v55 = 31 - a1[1];
      }
      v56 = *a1 << v55;
      v57 = nn_codec_FDK_get_plt(a1 + 2, v55);
      v58 = a1[1];
      v32 = v56 | v57;
      *a1 = v56 | v57;
      v31 = v58 + v55;
      if (v31 != 0) {
        v11 = v85;
        goto LABEL_80;
      }
      v11 = v85;
      v60 = 2 * v32;
      *(_QWORD*)a1 = v60;
    LABEL_81:
      *(_BYTE*)(*(_QWORD*)(a2[v21] + 216LL) + 1250LL) = v60 & v84;
      v83 = v60 & (unsigned __int8)v84;
      if (v11 == 2) {
        *(_BYTE*)(*(_QWORD*)(a2[1] + 216LL) + 1250LL) =
            *(_BYTE*)(*(_QWORD*)(*a2 + 216LL) + 1250LL);
      }
      goto LABEL_11;
    case 2:
      v28 = a1[1];
      if (v28 < 9) {
        v48 = nn_codec_FDK_getValidBits_plt(a1 + 2);
        if (31 - a1[1] >= v48) {
          v49 = v48;
        }
        else {
          v49 = 31 - a1[1];
        }
        v50 = *a1 << v49;
        v51 = nn_codec_FDK_get_plt(a1 + 2, v49);
        v52 = a1[1];
        v29 = v50 | v51;
        *a1 = v50 | v51;
        v28 = v52 + v49;
        if (v28 <= 7) {
          v11 = v85;
          v53 = v29 << (8 - v28);
          *(_QWORD*)a1 = v53;
          goto LABEL_105;
        }
        v11 = v85;
      }
      else {
        v29 = *a1;
      }
      v74 = v28 - 8;
      v53 = v29 >> v74;
      a1[1] = v74;
    LABEL_105:
      *(_BYTE*)(*(_QWORD*)(a2[v21] + 216LL) + 1251LL) = v53 & v80;
      goto LABEL_11;
    case 3:
      v19 = nn_codec_IcsRead_plt(a1, a2[v21] + 24LL, a5, a6);
      if (v11 == 2) {
        v35 = *a2;
        if (*(_BYTE*)(*(_QWORD*)(*a2 + 216LL) + 1250LL) != 0) {
          v36 = a2[1];
          v37 = *(_QWORD*)(v35 + 24);
          *(_QWORD*)(v36 + 31) = *(_QWORD*)(v35 + 31);
          *(_QWORD*)(v36 + 24) = v37;
        }
      }
      v11 = v85;
      if (v19 != 0) {
        goto LABEL_112;
      }
      goto LABEL_11;
    case 5:
      if (*(unsigned __int8*)(*a2 + 36LL) <=
          (unsigned int)*(unsigned __int8*)(a2[1] + 36LL)) {
        v25 = *(unsigned __int8*)(a2[1] + 36LL);
      }
      else {
        v25 = *(unsigned __int8*)(*a2 + 36LL);
      }
      if ((unsigned int)nn_codec_CJointStereo_Read_plt(
              a1, *(_QWORD*)(*a2 + 224LL) + 660LL,
              *(unsigned __int8*)(*a2 + 32LL), v25, a6) == 0) {
        goto LABEL_11;
      }
      v19 = 16386;
      goto LABEL_112;
    case 6:
      v33 = a1[1];
      if (v33 >= 2) {
        v34 = *a1;
        goto LABEL_88;
      }
      v61 = nn_codec_FDK_getValidBits_plt(a1 + 2);
      if (31 - a1[1] >= v61) {
        v62 = v61;
      }
      else {
        v62 = 31 - a1[1];
      }
      v63 = *a1 << v62;
      v64 = nn_codec_FDK_get_plt(a1 + 2, v62);
      v65 = a1[1];
      v34 = v63 | v64;
      *a1 = v63 | v64;
      v33 = v65 + v62;
      if (v33 != 0) {
        v11 = v85;
      LABEL_88:
        v66 = v33 - 1;
        a1[1] = v66;
        if (((v34 >> v66) & v84) != 0) {
          goto LABEL_123;
        }
        goto LABEL_11;
      }
      v11 = v85;
      v75 = 2 * v34;
      *(_QWORD*)a1 = v75;
      if ((v75 & v84) == 0) {
      LABEL_11:
        v22 = (*v16)[++v20];
        if (v22 == 38) {
          v19 = 0;
          goto LABEL_112;
        }
        continue;
      }
    LABEL_123:
      v19 = 16391;
    LABEL_112:
      if (v88 != -1 || v86 != -1) {
        if (v19 == 0) {
          v19 = 16388;
        }
        if (v88 != -1) {
          nn_codec_transportDec_CrcEndReg_plt(a10);
        }
        if (v86 != -1) {
        LABEL_119:
          nn_codec_transportDec_CrcEndReg_plt(a10);
        }
      }
      return v19;
    case 8:
      v19 = nn_codec_CBlock_ReadSectionData_plt(a1, a2[v21], a5, a6);
      if (v19 != 0) {
        goto LABEL_112;
      }
      goto LABEL_11;
    case 9:
      v30 = a2[v21];
      if ((a6 & 2) != 0) {
        nn_codec_CRvlc_Read_plt(v30, a1);
      }
      else {
        v19 = nn_codec_CBlock_ReadScaleFactorData_plt(v30, a1, a6);
        if (v19 != 0) {
          goto LABEL_112;
        }
      }
      goto LABEL_11;
    case 10:
      if ((unsigned int)nn_codec_CPulseData_Read_plt(
              a1, *(_QWORD*)(a2[v21] + 216LL) + 1252LL, *a5, a2[v21] + 24LL,
              a7) == 0) {
        goto LABEL_11;
      }
      v19 = 16388;
      goto LABEL_112;
    case 11:
      nn_codec_CTns_ReadDataPresentFlag_plt(a1, *(_QWORD*)(a2[v21] + 216LL) +
                                                    640LL);
      goto LABEL_11;
    case 12:
      v19 = nn_codec_CTns_Read_plt(a1, *(_QWORD*)(a2[v21] + 216LL) + 640LL,
                                   a2[v21] + 24LL, a6);
      if (v19 != 0) {
        goto LABEL_112;
      }
      goto LABEL_11;
    case 13:
      v38 = a1[1];
      if (v38 >= 2) {
        v39 = *a1;
        goto LABEL_95;
      }
      v67 = nn_codec_FDK_getValidBits_plt(a1 + 2);
      if (31 - a1[1] >= v67) {
        v68 = v67;
      }
      else {
        v68 = 31 - a1[1];
      }
      v69 = *a1 << v68;
      v70 = nn_codec_FDK_get_plt(a1 + 2, v68);
      v71 = a1[1];
      v39 = v69 | v70;
      *a1 = v69 | v70;
      v38 = v71 + v68;
      if (v38 != 0) {
        v11 = v85;
      LABEL_95:
        v72 = v38 - 1;
        a1[1] = v72;
        if (((v39 >> v72) & v84) != 0) {
          goto LABEL_110;
        }
        goto LABEL_11;
      }
      v11 = v85;
      v76 = 2 * v39;
      *(_QWORD*)a1 = v76;
      if ((v76 & v84) != 0) {
      LABEL_110:
        v19 = 16394;
        goto LABEL_112;
      }
      goto LABEL_11;
    case 14:
      goto LABEL_11;
    case 15:
      if ((a6 & 4) != 0) {
        nn_codec_CHcr_Read_plt(a1, a2[v21]);
      }
      goto LABEL_11;
    case 16:
      if ((a6 & 2) != 0) {
        nn_codec_CRvlc_Decode_plt(a2[v21], *(_QWORD*)(v78 + 8LL * v21), a1);
      }
      goto LABEL_11;
    case 17:
      v40 = nn_codec_CBlock_ReadSpectralData_plt(a1, a2[v21], a5, a6);
      v41 = a2[v21];
      v19 = v40;
      if ((a6 & 0x10) != 0) {
        *(_DWORD*)(v41 + 48) = 2;
        if (v40 != 0) {
          goto LABEL_112;
        }
      }
      else {
        *(_DWORD*)(v41 + 48) = 1;
        if (v40 != 0) {
          goto LABEL_112;
        }
      }
      goto LABEL_11;
    case 29:
      if (a10 == 0) {
        goto LABEL_11;
      }
      v23 = 192;
      v24 = a10;
      goto LABEL_19;
    case 30:
      if (a10 != 0) {
        v86 = nn_codec_transportDec_CrcStartReg_plt(a10, 128);
      }
      goto LABEL_11;
    case 31:
    case 34:
      if (a10 == 0) {
        goto LABEL_11;
      }
      nn_codec_transportDec_CrcEndReg_plt(a10);
      goto LABEL_23;
    case 32:
      if (v88 != -1) {
        nn_codec_transportDec_CrcEndReg_plt(a10);
        v19 = 16388;
        if (v86 != -1) {
          goto LABEL_119;
        }
        return v19;
      }
      if (a10 != 0) {
        nn_codec_transportDec_CrcEndReg_plt(a10);
        v86 = -1;
        v88 = -1;
      }
      else {
      LABEL_23:
        v88 = -1;
      }
      goto LABEL_11;
    case 33:
      if (a10 == 0) {
        goto LABEL_11;
      }
      v24 = a10;
      v23 = 0;
    LABEL_19:
      v88 = nn_codec_transportDec_CrcStartReg_plt(v24, v23);
      goto LABEL_11;
    case 35:
      v21 = (v21 + 1) % v81;
      goto LABEL_11;
    case 37:
      v20 = -1;
      v16 = (int**)v16[v83 + 1];
      goto LABEL_11;
    default:
      goto LABEL_112;
    }
  }
}

#pragma GCC visibility pop
