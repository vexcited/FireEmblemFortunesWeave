#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 FSS_free_plt(_QWORD, _QWORD);
__int64 FSS_set_cmap_plt(_QWORD, _QWORD, _QWORD);
__int64 FS_set_flags_plt(_QWORD, _QWORD);
__int64 apply_offsets_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD);
__int64 apply_transMatrix_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 apply_transformation_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 comp_phantom_points_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 compose_trans_plt(_QWORD, _QWORD, _QWORD);
__int64 do_hints_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                     _QWORD);
__int64 fnt_Execute_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fsg_CopyElementBackwards_plt(_QWORD);
__int64 fsg_IncrementElement_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fsg_InitInterpreterTrans_plt(_QWORD);
__int64 fsg_RunPreProgram_plt(_QWORD, _QWORD);
__int64 fsg_SetUpElement_plt(_QWORD, _QWORD, _QWORD);
__int64 fsglue_43a840_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD) __asm__("fsglue_43a840");
__int64 get_comp_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                     _QWORD, _DWORD, _QWORD);
__int64 get_glyph_metrics_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 inverse_map_char_plt(_QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 memset_plt_alt1(void* this_, void*, int,
                        unsigned __int64) __asm__("memset_plt");
__int64 muldiv_64_plt(_QWORD, _QWORD, _QWORD);
__int64 sfnt_UnfoldCurve_plt(void);
__int64 ttf_read_buf_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ttf_read_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 vardiv_64_plt(_QWORD, _QWORD, _QWORD);
__int64 varmul_64_plt(_QWORD, _QWORD, _QWORD);
__int64 which_script_plt(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN SdkData_bb4350;
extern unsigned int SdkData_c3c6e0[11];
void SdkRoutine_439260();
__int64 fs_NewTransformation(__int64 a1, __int64 a2, __int64 a3);
__int64 fsg_InitInterpreterTrans(__int64 result);
__int64 fsg_RunFontProgram(__int64 a1, __int64* a2);
__int64 compose_trans(_DWORD* a1, unsigned int* a2, unsigned int* a3);
__int64 init_phantom_points(__int64 result, __int16* a2, __int16* a3);
void apply_transformation(__int64 a1, __int64 a2, int** a3, unsigned int* a4);
__int64 do_hints(__int64 a1, __int64* a2, _QWORD* a3, int a4, __int16* a5,
                 int a6, unsigned int a7, __int64 a8);
_QWORD* fsglue_43a7c0(_QWORD* result, _DWORD* a2, unsigned int a3);
__int64 fsglue_43a840(_QWORD* a1, __int64 a2, unsigned int a3,
                      unsigned __int8 a4, int a5);
_DWORD* fsglue_43aa00(_DWORD* result, _QWORD* a2, unsigned int a3);
unsigned __int16** read_comp_parms_ttf(__int64 a1, unsigned __int16** a2,
                                       _WORD* a3, _WORD* a4, _WORD* a5,
                                       _WORD* a6, __int64 a7, bool* a8);
__int64 update_sp_ep(__int64 result, __int64 a2);
__int64 get_glyph_metrics(__int64 a1, __int64* a2, unsigned __int16 a3,
                          _WORD* a4);
__int64 get_glyph_advance(__int64 a1, __int64 a2, __int64 a3, unsigned int* a4,
                          unsigned int* a5);
unsigned __int16** get_charData_ttf(unsigned __int16** result, __int64 a2);
unsigned __int16** get_charData(__int64 a1, unsigned __int16** a2, __int64 a3);
__int64 apply_transMatrix(__int64 a1, unsigned int* a2, unsigned int* a3,
                          int a4, unsigned int* a5);
__int64 which_script(__int64 a1, int a2, int* a3);
__int64 get_comp(__int64 a1, __int64 a2, unsigned int a3, __int64* a4,
                 unsigned int a5, unsigned int a6, unsigned int a7, __int64 a8,
                 unsigned int a9, __int64 a10);
__int64 sfnt_UnfoldCurve(__int64 a1, __int64 a2, __int16* a3, _DWORD* a4,
                         _QWORD* a5, int a6);
__int64 fsg_GridFit(__int64 a1, __int64 a2);
__int64 fsg_RunPreProgram(__int64 a1, __int64 a2, __int64 a3,
                          unsigned __int64 a4);

__int64 fs_NewTransformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64* v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  __int16 v18;
  bool v19;
  unsigned int v20;
  int v21;
  int v22;
  unsigned int v23;
  int v24;
  char v25;
  __int64 result;
  char v27;
  unsigned int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  int v32;
  char v33;
  unsigned int v34;
  int v35;
  int v36;
  int v37;
  char v38;
  char v39;
  int v40;
  int v41;
  unsigned int v42;
  __int64 v43;
  __int64 v44;
  int v45;
  char v46;
  int v47;
  int v48;
  int v49;
  int* v50;
  int* v51;
  __int64 v52;
  int v53;
  __int64 v54;
  int v55;
  int v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  bool v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;

  v3 = *(__int64**)(a2 + 8);
  if ((~*((unsigned __int16*)v3 + 246) & 3) != 0) {
    return 412;
  }
  *v3 = *(_QWORD*)(a2 + 40);
  v3[3] = *(_QWORD*)(a2 + 8);
  v3[4] = *(_QWORD*)(a2 + 16);
  v3[5] = *(_QWORD*)(a2 + 24);
  v3[6] = *(_QWORD*)(a2 + 32);
  v3[56] = *(_QWORD*)(a2 + 60);
  v6 = *(_QWORD*)(a2 + 68);
  v7 = *(_QWORD*)(a2 + 76);
  v8 = *(_QWORD*)(a2 + 84);
  *((_DWORD*)v3 + 120) = *(_DWORD*)(a2 + 92);
  v3[58] = v7;
  v3[59] = v8;
  v3[57] = v6;
  v9 = *(unsigned int*)(a2 + 48);
  *((_DWORD*)v3 + 109) = v9;
  *((_DWORD*)v3 + 122) = *(_DWORD*)(a2 + 56);
  v10 = *(__int16*)(a2 + 54);
  v11 = muldiv_64_plt(v9, (unsigned int)*(__int16*)(a2 + 52), 72);
  *((_DWORD*)v3 + 112) = varmul_64_plt(*((unsigned int*)v3 + 112), v11, 16);
  *((_DWORD*)v3 + 115) = varmul_64_plt(*((unsigned int*)v3 + 115), v11, 16);
  *((_DWORD*)v3 + 118) = varmul_64_plt(*((unsigned int*)v3 + 118), v11, 16);
  v12 = muldiv_64_plt(*((unsigned int*)v3 + 109), v10, 72);
  *((_DWORD*)v3 + 113) = varmul_64_plt(*((unsigned int*)v3 + 113), v12, 16);
  *((_DWORD*)v3 + 116) = varmul_64_plt(*((unsigned int*)v3 + 116), v12, 16);
  v13 = varmul_64_plt(*((unsigned int*)v3 + 119), v12, 16);
  v14 = *((_DWORD*)v3 + 112);
  v15 = *((_DWORD*)v3 + 113);
  v16 = *((_DWORD*)v3 + 116);
  *((_DWORD*)v3 + 119) = v13;
  if (v14 < 0) {
    v14 = -v14;
  }
  if (v15 < 0) {
    v15 = -v15;
  }
  if (v14 <= (unsigned int)v15) {
    v14 = v15;
  }
  v17 = *((_DWORD*)v3 + 115);
  *((_DWORD*)v3 + 184) = v14;
  if (v17 < 0) {
    v17 = -v17;
  }
  if (v16 < 0) {
    v16 = -v16;
  }
  if (v17 <= (unsigned int)v16) {
    v17 = v16;
  }
  v18 = *((_WORD*)v3 + 243);
  *((_DWORD*)v3 + 191) = v17;
  v19 = (v18 & 8) == 0;
  if ((v18 & 8) != 0) {
    v20 = (v14 + 0x8000) & 0x7FFF0000;
  }
  else {
    v20 = v14;
  }
  v21 = *((unsigned __int16*)v3 + 216);
  if (!v19) {
    v17 = (v17 + 0x8000) & 0x7FFF0000;
  }
  *((_DWORD*)v3 + 185) = v20;
  *((_DWORD*)v3 + 192) = v17;
  v22 = v21 << 16;
  v23 = v22 | v20;
  if ((v22 | v20) != 0) {
    v24 = 0;
    if ((v20 & 1) == 0) {
      do {
        v25 = v23;
        v23 >>= 1;
        ++v24;
      } while ((v25 & 2) == 0);
    }
  }
  else {
    v24 = 32;
  }
  *((_DWORD*)v3 + 188) = 0;
  if (v24 <= 1) {
    LOBYTE(v24) = 1;
  }
  v27 = v24 - 1;
  v28 = v20 >> v27;
  v29 = v22 >> v27;
  if (v28 >> 25 != 0) {
    v30 = v28;
  }
  else {
    v30 = v28 << 6;
  }
  if (v28 >> 25 != 0) {
    v31 = (unsigned int)(v29 >> 6);
  }
  else {
    v31 = (unsigned int)v29;
  }
  *((_DWORD*)v3 + 186) = v30;
  *((_DWORD*)v3 + 187) = v31;
  if ((int)v30 >= 0x8000) {
    v35 = vardiv_64_plt(v30, v31, 16);
    v36 = *((unsigned __int16*)v3 + 216);
    v17 = *((_DWORD*)v3 + 192);
    *((_DWORD*)v3 + 188) = v35;
    v22 = v36 << 16;
    *((_DWORD*)v3 + 190) = 2;
    v34 = v22 | v17;
    if ((v22 | v17) != 0) {
      goto LABEL_41;
    }
    goto LABEL_45;
  }
  if (((unsigned int)v31 ^ ((_DWORD)v31 - 1)) <= (int)v31 - 1) {
    *((_DWORD*)v3 + 190) = 1;
    v34 = v22 | v17;
    if ((v22 | v17) != 0) {
      goto LABEL_41;
    }
  LABEL_45:
    v37 = 32;
    goto LABEL_46;
  }
  v32 = 0;
  if ((v31 & 1) == 0) {
    do {
      v33 = v31;
      LODWORD(v31) = (unsigned int)v31 >> 1;
      ++v32;
    } while ((v33 & 2) == 0);
  }
  *((_DWORD*)v3 + 189) = v32;
  *((_DWORD*)v3 + 190) = 0;
  v34 = v22 | v17;
  if ((v22 | v17) == 0) {
    goto LABEL_45;
  }
LABEL_41:
  v37 = 0;
  if ((v17 & 1) == 0) {
    do {
      v38 = v34;
      v34 >>= 1;
      ++v37;
    } while ((v38 & 2) == 0);
  }
LABEL_46:
  *((_DWORD*)v3 + 195) = 0;
  if (v37 <= 1) {
    LOBYTE(v37) = 1;
  }
  v39 = v37 - 1;
  v40 = v17 >> v39;
  v41 = v22 >> v39;
  v42 = v17 >> v39 << 6;
  if (v40 >= 0x2000000) {
    v43 = (unsigned int)v40;
  }
  else {
    v43 = v42;
  }
  if (v40 >= 0x2000000) {
    v44 = (unsigned int)(v41 >> 6);
  }
  else {
    v44 = (unsigned int)v41;
  }
  *((_DWORD*)v3 + 193) = v43;
  *((_DWORD*)v3 + 194) = v44;
  if ((int)v43 >= 0x8000) {
    v49 = vardiv_64_plt(v43, v44, 16);
    v17 = *((_DWORD*)v3 + 192);
    v47 = 2;
    *((_DWORD*)v3 + 195) = v49;
    v48 = *((_DWORD*)v3 + 185);
    *((_DWORD*)v3 + 197) = 2;
    if (v48 < v17) {
      goto LABEL_61;
    }
  }
  else {
    if (((unsigned int)v44 ^ ((_DWORD)v44 - 1)) > (int)v44 - 1) {
      v45 = 0;
      if ((v44 & 1) == 0) {
        do {
          v46 = v44;
          LODWORD(v44) = (unsigned int)v44 >> 1;
          ++v45;
        } while ((v46 & 2) == 0);
      }
      v47 = 0;
      *((_DWORD*)v3 + 196) = v45;
      v48 = *((_DWORD*)v3 + 185);
      *((_DWORD*)v3 + 197) = 0;
      if (v48 >= v17) {
        goto LABEL_63;
      }
    LABEL_61:
      *((_DWORD*)v3 + 204) = v47;
      v50 = (int*)v3 + 191;
      v51 = (int*)(v3 + 96);
      v52 = *(__int64*)((char*)v3 + 780);
      v3[100] = *(__int64*)((char*)v3 + 772);
      v3[101] = v52;
      *((_DWORD*)v3 + 198) =
          vardiv_64_plt((unsigned int)v48, (unsigned int)v17, 16);
      v53 = 0x10000;
      goto LABEL_64;
    }
    v47 = 1;
    v48 = *((_DWORD*)v3 + 185);
    *((_DWORD*)v3 + 197) = 1;
    if (v48 < v17) {
      goto LABEL_61;
    }
  }
LABEL_63:
  v50 = (int*)(v3 + 92);
  v51 = (int*)v3 + 185;
  *((_DWORD*)v3 + 204) = *((_DWORD*)v3 + 190);
  v54 = v3[93];
  v3[101] = v3[94];
  v3[100] = v54;
  *((_DWORD*)v3 + 198) = 0x10000;
  v53 = vardiv_64_plt((unsigned int)v17, (unsigned int)v48, 16);
LABEL_64:
  v55 = *v51;
  v56 = *v50;
  *((_DWORD*)v3 + 199) = v53;
  *((_DWORD*)v3 + 111) = v56;
  *((_DWORD*)v3 + 110) = v55;
  fsg_InitInterpreterTrans_plt(v3);
  if (*((_BYTE*)v3 + 541) == 0) {
    goto LABEL_72;
  }
  *((_DWORD*)v3 + 153) = 0;
  v3[77] = 0;
  *((_WORD*)v3 + 327) = 1;
  v3[79] = 0;
  v3[78] = 0x200000040LL;
  *(__int64*)((char*)v3 + 604) = 68;
  *(__int64*)((char*)v3 + 646) = 0x8000030009LL;
  v57 = *v3;
  *(__int64*)((char*)v3 + 638) = 0;
  v58 = *(_QWORD*)(*(_QWORD*)v57 + 56LL);
  *((_DWORD*)v3 + 209) = 0;
  if (*(_DWORD*)(v58 + 120) == 0) {
    goto LABEL_72;
  }
  *((_BYTE*)v3 + 833) = 1;
  if (*((_BYTE*)v3 + 542) != 0) {
    v59 = *(_QWORD*)(*(_QWORD*)v57 + 56LL);
    v3[106] = *(_QWORD*)(v59 + 96);
    v60 = *(_QWORD*)(v59 + 112);
    v61 = v3[1];
    *((_BYTE*)v3 + 542) = 0;
    v3[68] = v61;
    LODWORD(v61) = *((_DWORD*)v3 + 127);
    v3[107] = v60;
    *((_WORD*)v3 + 288) = v61;
  }
  else {
    v60 = v3[107];
  }
  v62 = v3[6] + *((int*)v3 + 125);
  v63 = *(_QWORD*)(*(_QWORD*)v57 + 56LL);
  v65 = v62 + 7;
  v64 = v62 < -7;
  v66 = v62 + 14;
  if (!v64) {
    v66 = v65;
  }
  v3[70] = v66 & 0xFFFFFFFFFFFFFFF8LL;
  v3[90] = *(_QWORD*)(v63 + 240);
  v67 = *((int*)v3 + 14);
  v3[91] = *(_QWORD*)(v63 + 248);
  v68 = *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16816LL);
  *((_WORD*)v3 + 420) = 0;
  v3[69] = v68 + v67;
  v3[89] = v3[4];
  result = fnt_Execute_plt(v3 + 32, v60, v60 + *(int*)(v58 + 120), v3 + 68,
                           *(_QWORD*)(a1 + 128));
  *((_BYTE*)v3 + 541) = 0;
  if ((_DWORD)result == 0) {
  LABEL_72:
    v69 = *((int*)v3 + 126);
    *((_BYTE*)v3 + 540) = 1;
    *((_WORD*)v3 + 246) = 7;
    *(_QWORD*)(a3 + 72) = v3[6] + v69;
    return 0;
  }
  return result;
}

__int64 fsg_InitInterpreterTrans(__int64 result)
{
  int v1;
  int v2;
  int v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  bool v9;
  bool v10;
  char v11;

  v1 = *(_DWORD*)(result + 448);
  if (v1 != 0x10000) {
    v2 = *(_DWORD*)(result + 452);
    if ((unsigned int)(v1 - 65503) > 0x42) {
      goto LABEL_17;
    }
  LABEL_9:
    if ((unsigned int)(v2 + 33) > 0x42) {
      goto LABEL_17;
    }
    goto LABEL_10;
  }
  v2 = *(_DWORD*)(result + 452);
  if (v2 != 0) {
    goto LABEL_9;
  }
  if (*(_DWORD*)(result + 456) != 0 || *(_DWORD*)(result + 460) != 0 ||
      *(_DWORD*)(result + 464) != 0x10000) {
    v2 = 0;
    if ((unsigned int)(*(_DWORD*)(result + 456) + 33) > 0x42) {
      goto LABEL_17;
    }
    goto LABEL_13;
  }
  v2 = 0;
  if (*(_DWORD*)(result + 468) == 0) {
    v3 = 0x10000;
    v4 = 0;
  LABEL_16:
    *(_BYTE*)(result + 484) = 1;
    *(_QWORD*)(result + 824) = 0x1000000010000LL;
    *(_BYTE*)(result + 820) = 1;
    goto LABEL_35;
  }
LABEL_10:
  if ((unsigned int)(*(_DWORD*)(result + 456) + 33) <= 0x42) {
  LABEL_13:
    v4 = *(_DWORD*)(result + 460);
    if ((unsigned int)(v4 + 33) <= 0x42) {
      v3 = *(_DWORD*)(result + 464);
      if ((unsigned int)(v3 - 65503) <= 0x42 &&
          (unsigned int)(*(_DWORD*)(result + 468) + 33) <= 0x42) {
        goto LABEL_16;
      }
    }
  }
LABEL_17:
  *(_BYTE*)(result + 484) = 0;
  *(_BYTE*)(result + 820) = 0;
  if (v1 >= 0) {
    v5 = v1;
  }
  else {
    v5 = -v1;
  }
  if (v2 >= 0) {
    v6 = v2;
  }
  else {
    v6 = -v2;
  }
  if (v5 <= v6) {
    v5 = v6;
  }
  v4 = *(_DWORD*)(result + 460);
  *(_DWORD*)(result + 824) = v5;
  v3 = *(_DWORD*)(result + 464);
  if (v4 >= 0) {
    v7 = v4;
  }
  else {
    v7 = -v4;
  }
  if (v3 >= 0) {
    v8 = *(_DWORD*)(result + 464);
  }
  else {
    v8 = -v3;
  }
  if (v7 <= v8) {
    v7 = v8;
  }
  *(_DWORD*)(result + 828) = v7;
  if ((v1 | v3) == 0) {
    v3 = 0;
    v9 = false;
    goto LABEL_37;
  }
LABEL_35:
  v9 = v2 != 0;
  if (v4 != 0) {
    v9 = true;
  }
LABEL_37:
  *(_QWORD*)(result + 888) = 0;
  v10 = v1 + v3 == 0 || v1 == v3;
  v11 = v9 | 2;
  if (v10) {
    v11 = v9;
  }
  *(_BYTE*)(result + 821) = v11;
  return result;
}

__int64 fsg_RunFontProgram(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v2 = *a2;
  v3 = *(_QWORD*)(*(_QWORD*)*a2 + 56LL);
  *((_DWORD*)a2 + 209) = 0;
  if (*(_DWORD*)(v3 + 120) == 0) {
    return 0;
  }
  *((_BYTE*)a2 + 833) = 1;
  if (*((_BYTE*)a2 + 542) != 0) {
    v4 = *(_QWORD*)(*(_QWORD*)v2 + 56LL);
    a2[106] = *(_QWORD*)(v4 + 96);
    v5 = a2[1];
    v6 = *(_QWORD*)(v4 + 112);
    *((_BYTE*)a2 + 542) = 0;
    a2[68] = v5;
    LODWORD(v5) = *((_DWORD*)a2 + 127);
    a2[107] = v6;
    *((_WORD*)a2 + 288) = v5;
  }
  else {
    v6 = a2[107];
  }
  v9 = a2[6] + *((int*)a2 + 125);
  v10 = *(_QWORD*)(*(_QWORD*)v2 + 56LL);
  v12 = v9 + 7;
  v11 = v9 < -7;
  v13 = v9 + 14;
  if (!v11) {
    v13 = v12;
  }
  a2[70] = v13 & 0xFFFFFFFFFFFFFFF8LL;
  a2[90] = *(_QWORD*)(v10 + 240);
  v14 = *((int*)a2 + 14);
  a2[91] = *(_QWORD*)(v10 + 248);
  v15 = *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16816LL);
  *((_WORD*)a2 + 420) = 0;
  a2[69] = v15 + v14;
  a2[89] = a2[4];
  result = fnt_Execute_plt(a2 + 32, v6, v6 + *(int*)(v3 + 120), a2 + 68,
                           *(_QWORD*)(a1 + 128));
  *((_BYTE*)a2 + 541) = 0;
  return result;
}

__int64 compose_trans(_DWORD* a1, unsigned int* a2, unsigned int* a3)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  __int64 result;
  __int64 v14;
  __int64 v15;

  if (a2[1] == 0 && a2[2] == 0) {
    if (a3[1] == 0 && a3[2] == 0) {
      v7 = varmul_64_plt(*a3, *a2, 16);
      result = varmul_64_plt(a3[3], a2[3], 16);
      v9 = 0;
      v11 = 0;
      goto LABEL_11;
    }
    v7 = varmul_64_plt(*a3, *a2, 16);
    v9 = varmul_64_plt(a3[1], a2[3], 16);
    v14 = a3[2];
    v15 = *a2;
    goto LABEL_10;
  }
  if (a3[1] == 0 && a3[2] == 0) {
    v7 = varmul_64_plt(*a3, *a2, 16);
    v9 = varmul_64_plt(*a3, a2[1], 16);
    v14 = a3[3];
    v15 = a2[2];
  LABEL_10:
    v11 = varmul_64_plt(v14, v15, 16);
    result = varmul_64_plt(a3[3], a2[3], 16);
    goto LABEL_11;
  }
  v6 = varmul_64_plt(*a3, *a2, 16);
  v7 = varmul_64_plt(a3[1], a2[2], 16) + v6;
  v8 = varmul_64_plt(*a3, a2[1], 16);
  v9 = varmul_64_plt(a3[1], a2[3], 16) + v8;
  v10 = varmul_64_plt(a3[2], *a2, 16);
  v11 = varmul_64_plt(a3[3], a2[2], 16) + v10;
  v12 = varmul_64_plt(a3[2], a2[1], 16);
  result = (unsigned int)varmul_64_plt(a3[3], a2[3], 16) + v12;
LABEL_11:
  *a1 = v7;
  a1[1] = v9;
  a1[2] = v11;
  a1[3] = result;
  return result;
}

__int64 init_phantom_points(__int64 result, __int16* a2, __int16* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;

  v3 = *(__int16*)(result + 80);
  if (*(_WORD*)(result + 80) != 0) {
    LODWORD(v3) = *(unsigned __int16*)(*(_QWORD*)(result + 64) + 2 * v3 - 2) -
                  **(unsigned __int16**)(result + 56) + 1;
  }
  v4 = 4LL * (int)v3;
  v5 = v4 + 16;
  v6 = v4 + 20;
  v7 = v4 + 4;
  v8 = *a2 - a3[8];
  v9 = a3[19];
  *(_DWORD*)(*(_QWORD*)(result + 40) + v4) = 0;
  *(_DWORD*)(*(_QWORD*)(result + 40) + v5) = 0;
  *(_DWORD*)(*(_QWORD*)(result + 40) + v6) = 0;
  *(_DWORD*)(*(_QWORD*)(result + 40) + v7) = 0;
  *(_DWORD*)(*(_QWORD*)(result + 32) + v4) = v8;
  *(_DWORD*)(*(_QWORD*)(result + 32) + v5) = v8;
  *(_DWORD*)(*(_QWORD*)(result + 32) + v6) = *a2;
  v10 = v4 + 12;
  *(_DWORD*)(*(_QWORD*)(result + 32) + v7) = v8 + a3[9];
  v11 = *(_QWORD*)(result + 32);
  v12 = v4 + 24;
  v13 = *(_DWORD*)(v11 + v4 + 4) + *(_DWORD*)(v11 + v4);
  v14 = v4 + 8;
  v4 += 28;
  v13 /= 2;
  *(_DWORD*)(v11 + v14) = v13;
  *(_DWORD*)(*(_QWORD*)(result + 32) + v10) = v13;
  *(_DWORD*)(*(_QWORD*)(result + 32) + v12) = v13;
  *(_DWORD*)(*(_QWORD*)(result + 32) + v4) = v13;
  *(_DWORD*)(*(_QWORD*)(result + 40) + v14) = v9;
  *(_DWORD*)(*(_QWORD*)(result + 40) + v10) = a3[19] + v9;
  *(_DWORD*)(*(_QWORD*)(result + 40) + v12) = v9;
  *(_DWORD*)(*(_QWORD*)(result + 40) + v4) = a2[3];
  return result;
}

void apply_transformation(__int64 a1, __int64 a2, int** a3, unsigned int* a4)
{
  int* v4;
  int* v5;
  int v6;
  int v7;
  unsigned __int16* v8;
  int* v9;
  int* v10;
  unsigned int v11;
  int v12;
  int** v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  int v22;
  bool v23;
  int v24;
  int v25;
  unsigned int v26;
  __int64 v27;
  unsigned int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  int v37;
  int v38;
  unsigned int v39;
  int v40;
  int v41;
  int v42;
  __int64 v43;
  int v44;
  int v45;
  unsigned int v46;
  int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  int v51;
  int v52;
  unsigned int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  int* v61;
  int v62;
  int* v63;
  int v64;
  int** v65;
  int* v66;
  int* v67;
  int v68;
  unsigned int v69;
  unsigned int v70;
  unsigned int v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  int v75;
  unsigned int v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;

  if (*((_WORD*)a3 + 40) != 0 && *(_BYTE*)(a2 + 528) == 0) {
    v5 = *a3;
    v4 = a3[1];
    v6 = *(_DWORD*)(a2 + 532);
    v7 = *(_DWORD*)(a2 + 536);
    v8 = *(unsigned __int16**)(*(_QWORD*)a2 + 40LL);
    v10 = a3[2];
    v9 = a3[3];
    v78 = a4[1];
    v79 = *a4;
    v11 = a4[3];
    v77 = a4[2];
    if (*((_BYTE*)v8 + 4) != 0) {
      v12 = *v8;
      v13 = a3;
      if (v12 == v6 >> 16) {
        v6 = 0x10000;
        v14 = v8[1];
        if (v14 != v7 >> 16) {
        LABEL_7:
          v7 = vardiv_64_plt((unsigned int)v7, (unsigned int)(v14 << 16), 16);
          a3 = v13;
        LABEL_31:
          if (*((_WORD*)a3 + 40) != 0) {
            v22 = *((unsigned __int16*)a3[8] + *((__int16*)a3 + 40) - 1) + 9;
            if (v6 == 0 || v7 == 0) {
              if (*((_WORD*)a3[8] + *((__int16*)a3 + 40) - 1) == 0xFFF7) {
                goto LABEL_136;
              }
            LABEL_65:
              if ((v22 & 7) != 0) {
                v31 = 0;
                v32 = v22;
                do {
                  ++v31;
                  --v32;
                  *v4++ = 0;
                  *v5++ = 0;
                } while ((v22 & 7) != (unsigned __int16)v31);
                if ((unsigned __int16)v22 < 8u) {
                LABEL_136:
                  v58 = *((__int16*)a3 + 40);
                  if (*((_WORD*)a3 + 40) != 0) {
                    v59 = *((unsigned __int16*)a3[8] + v58 - 1);
                    v58 = v59 + 1;
                    v60 = v59 + 2;
                    v61 = *a3;
                    v62 = (*a3)[v60];
                    if (((a3[4][v60] ^ v62) & 0x80000000) == 0) {
                      return;
                    }
                  }
                  else {
                    v60 = 1;
                    v61 = *a3;
                    v62 = (*a3)[1];
                    if (((a3[4][1] ^ v62) & 0x80000000) == 0) {
                      return;
                    }
                  }
                  v63 = a3[1];
                  v61[v60] = v61[v58];
                  v61[v58] = v62;
                  v64 = v63[v60];
                  v63[v60] = v63[v58];
                  v63[v58] = v64;
                  return;
                }
              }
              else {
                v32 = v22;
                if ((unsigned __int16)v22 < 8u) {
                  goto LABEL_136;
                }
              }
              do {
                *v4 = 0;
                *v5 = 0;
                v32 -= 8;
                v4[1] = 0;
                v5[1] = 0;
                v4[2] = 0;
                v5[2] = 0;
                v4[3] = 0;
                v5[3] = 0;
                v4[4] = 0;
                v5[4] = 0;
                v4[5] = 0;
                v5[5] = 0;
                v4[6] = 0;
                v5[6] = 0;
                v4[7] = 0;
                v4 += 8;
                v5[7] = 0;
                v5 += 8;
              } while ((_WORD)v32 != 0);
              goto LABEL_136;
            }
          }
          else {
            v22 = 8;
            if (v6 == 0 || v7 == 0) {
              goto LABEL_65;
            }
          }
          v66 = v10;
          v67 = v9;
          v65 = a3;
          v23 = v6 == 0x10000 && v7 == 0x10000;
          v68 = (__int16)v22;
          v24 = v23;
          if (v23 && v78 == 0 && v77 == 0) {
            if ((_WORD)v22 != 0) {
              v25 = (__int16)v22;
              v26 = v11 + 0x20000;
              while (1) {
                v27 = (unsigned int)*v5;
                v28 = *v4;
                if (v79 + 0x20000 >= 0x40001 ||
                    (unsigned int)(v27 + 0x4000) > 0x8000) {
                  *v5++ = varmul_64_plt(v27, v79, 16);
                  if (v26 < 0x40001) {
                    goto LABEL_59;
                  }
                LABEL_50:
                  --v25;
                  *v4++ = varmul_64_plt(v28, v11, 16);
                  if (v25 == 0) {
                    break;
                  }
                }
                else {
                  if ((int)(v27 * v79) <= 0) {
                    v29 = 0x7FFF;
                  }
                  else {
                    v29 = 0x8000;
                  }
                  *v5++ = (int)(v29 + v27 * v79) >> 16;
                  if (v26 >= 0x40001) {
                    goto LABEL_50;
                  }
                LABEL_59:
                  if (v28 + 0x4000 > 0x8000) {
                    goto LABEL_50;
                  }
                  if ((int)(v28 * v11) <= 0) {
                    v30 = 0x7FFF;
                  }
                  else {
                    v30 = 0x8000;
                  }
                  --v25;
                  *v4++ = (int)(v30 + v28 * v11) >> 16;
                  if (v25 == 0) {
                    break;
                  }
                }
              }
            }
          LABEL_135:
            memcpy_plt(v66, *v65, 4 * v68);
            memcpy_plt(v67, v65[1], 4 * v68);
            a3 = v65;
            goto LABEL_136;
          }
          v76 = v11;
          if (v24 != 0) {
            if ((_WORD)v22 == 0) {
              goto LABEL_135;
            }
            v33 = (__int16)v22;
            v73 = v78 + 0x20000;
            v74 = v77 + 0x20000;
            v71 = v11 + 0x20000;
            while (1) {
              while (1) {
                v34 = *v5;
                v35 = *v4;
                v36 = *v5 + 0x4000;
                if (v79 + 0x20000 < 0x40001 && v36 <= 0x8000) {
                  break;
                }
                v38 = varmul_64_plt(v34, v79, 16);
                v39 = v35 + 0x4000;
                if (v74 >= 0x40001) {
                  goto LABEL_88;
                }
              LABEL_82:
                if (v39 > 0x8000) {
                  goto LABEL_88;
                }
                if ((int)(v35 * v77) <= 0) {
                  v40 = 0x7FFF;
                }
                else {
                  v40 = 0x8000;
                }
                *v5++ = ((int)(v40 + v35 * v77) >> 16) + v38;
                if (v73 < 0x40001) {
                  goto LABEL_89;
                }
              LABEL_95:
                v42 = varmul_64_plt(v34, v78, 16);
                v43 = v76;
                if (v71 < 0x40001) {
                  goto LABEL_96;
                }
              LABEL_73:
                --v33;
                *v4++ = varmul_64_plt(v35, v43, 16) + v42;
                if (v33 == 0) {
                  goto LABEL_135;
                }
              }
              if ((int)(v34 * v79) <= 0) {
                v37 = 0x7FFF;
              }
              else {
                v37 = 0x8000;
              }
              v38 = (int)(v37 + v34 * v79) >> 16;
              v39 = v35 + 0x4000;
              if (v74 < 0x40001) {
                goto LABEL_82;
              }
            LABEL_88:
              *v5++ = varmul_64_plt(v35, v77, 16) + v38;
              if (v73 >= 0x40001) {
                goto LABEL_95;
              }
            LABEL_89:
              if (v36 > 0x8000) {
                goto LABEL_95;
              }
              if ((int)(v34 * v78) <= 0) {
                v41 = 0x7FFF;
              }
              else {
                v41 = 0x8000;
              }
              v42 = (int)(v41 + v34 * v78) >> 16;
              v43 = v76;
              if (v71 >= 0x40001) {
                goto LABEL_73;
              }
            LABEL_96:
              if (v39 > 0x8000) {
                goto LABEL_73;
              }
              if ((int)(v35 * v43) <= 0) {
                v44 = 0x7FFF;
              }
              else {
                v44 = 0x8000;
              }
              --v33;
              *v4++ = ((int)(v44 + v35 * v43) >> 16) + v42;
              if (v33 == 0) {
                goto LABEL_135;
              }
            }
          }
          if ((_WORD)v22 == 0) {
            goto LABEL_135;
          }
          v45 = (__int16)v22;
          v75 = v6;
          v72 = v77 + 0x20000;
          v69 = v11 + 0x20000;
          v70 = v78 + 0x20000;
          while (1) {
            while (1) {
              v46 = vardiv_64_plt((unsigned int)*v5, (unsigned int)v6, 16);
              v47 = v7;
              v48 = vardiv_64_plt((unsigned int)*v4, (unsigned int)v7, 16);
              v49 = v46 + 0x4000;
              v50 = v48;
              if (v79 + 0x20000 < 0x40001 && v49 <= 0x8000) {
                break;
              }
              v52 = varmul_64_plt(v46, v79, 16);
              v53 = v50 + 0x4000;
              if (v72 >= 0x40001) {
                goto LABEL_122;
              }
            LABEL_116:
              if (v53 > 0x8000) {
                goto LABEL_122;
              }
              if ((int)(v50 * v77) <= 0) {
                v54 = 0x7FFF;
              }
              else {
                v54 = 0x8000;
              }
              *v5++ = ((int)(v54 + v50 * v77) >> 16) + v52;
              if (v70 < 0x40001) {
                goto LABEL_123;
              }
            LABEL_129:
              v56 = varmul_64_plt(v46, v78, 16);
              v7 = v47;
              if (v69 < 0x40001) {
                goto LABEL_130;
              }
            LABEL_107:
              v6 = v75;
              --v45;
              *v4++ = varmul_64_plt(v50, v76, 16) + v56;
              if (v45 == 0) {
                goto LABEL_135;
              }
            }
            if ((int)(v46 * v79) <= 0) {
              v51 = 0x7FFF;
            }
            else {
              v51 = 0x8000;
            }
            v52 = (int)(v51 + v46 * v79) >> 16;
            v53 = v48 + 0x4000;
            if (v72 < 0x40001) {
              goto LABEL_116;
            }
          LABEL_122:
            *v5++ = varmul_64_plt(v50, v77, 16) + v52;
            if (v70 >= 0x40001) {
              goto LABEL_129;
            }
          LABEL_123:
            if (v49 > 0x8000) {
              goto LABEL_129;
            }
            if ((int)(v46 * v78) <= 0) {
              v55 = 0x7FFF;
            }
            else {
              v55 = 0x8000;
            }
            v56 = (int)(v55 + v46 * v78) >> 16;
            v7 = v47;
            if (v69 >= 0x40001) {
              goto LABEL_107;
            }
          LABEL_130:
            if (v53 > 0x8000) {
              goto LABEL_107;
            }
            v6 = v75;
            if ((int)(v50 * v76) <= 0) {
              v57 = 0x7FFF;
            }
            else {
              v57 = 0x8000;
            }
            --v45;
            *v4++ = ((int)(v57 + v50 * v76) >> 16) + v56;
            if (v45 == 0) {
              goto LABEL_135;
            }
          }
        }
      }
      else {
        v6 = vardiv_64_plt((unsigned int)v6, (unsigned int)(v12 << 16), 16);
        v14 = v8[1];
        if (v14 != v7 >> 16) {
          goto LABEL_7;
        }
      }
      v7 = 0x10000;
      a3 = v13;
      goto LABEL_31;
    }
    v15 = *(_DWORD*)(a2 + 448);
    v16 = *(_DWORD*)(a2 + 452);
    if (v15 >= 0) {
      v17 = *(_DWORD*)(a2 + 448);
    }
    else {
      v17 = -v15;
    }
    if (v16 >= 0) {
      v18 = *(_DWORD*)(a2 + 452);
    }
    else {
      v18 = -v16;
    }
    if (v17 >= v18) {
      v18 = v17;
      if (v17 < 0x10000) {
        goto LABEL_21;
      }
    }
    else if (HIWORD(v18) == 0) {
    LABEL_21:
      v19 = *(_DWORD*)(a2 + 460);
      v20 = *(_DWORD*)(a2 + 464);
      if ((v19 & 0x80000000) != 0) {
        v19 = -v19;
      }
      if ((v20 & 0x80000000) != 0) {
        v20 = -v20;
      }
      if (v19 >= v20) {
        if (v19 < 0x10000) {
          goto LABEL_31;
        }
        v21 = HIWORD(v19);
      }
      else {
        if (v20 < 0x10000) {
          goto LABEL_31;
        }
        v21 = HIWORD(v20);
      }
      v7 /= v21;
      goto LABEL_31;
    }
    v6 /= (int)HIWORD(v18);
    goto LABEL_21;
  }
}

__int64 do_hints(__int64 a1, __int64* a2, _QWORD* a3, int a4, __int16* a5,
                 int a6, unsigned int a7, __int64 a8)
{
  __int64 v8;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  _QWORD* v21;
  __int16* v22;
  unsigned int v23;
  int v25;
  int v26;
  bool v28;
  __int64 result;
  int* v30;
  int* v31;
  unsigned int* v32;
  unsigned int* v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  __int64 v37;
  unsigned int v38;
  int v39;
  __int64 v40;
  unsigned int v41;
  unsigned int v42;
  int v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  bool v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int16* v58;
  __int16 v59;
  char v60;

  v8 = *((__int16*)a3 + 40);
  v12 = *(_QWORD*)(*(_QWORD*)(a1 + 48) + 56LL);
  v60 = 127;
  v59 = 176;
  v13 = *(__int64*)((char*)a2 + 620);
  a2[85] = *(__int64*)((char*)a2 + 628);
  v14 = *(__int64*)((char*)a2 + 636);
  v15 = *(__int64*)((char*)a2 + 644);
  a2[84] = v13;
  a2[86] = v14;
  LODWORD(v14) = *((_DWORD*)a2 + 163);
  a2[87] = v15;
  *((_DWORD*)a2 + 176) = v14;
  v16 = *(__int64*)((char*)a2 + 612);
  a2[82] = *(__int64*)((char*)a2 + 604);
  a2[83] = v16;
  if (v8 != 0) {
    v17 = *(unsigned __int16*)(a3[8] + 2 * v8 - 2) - *(unsigned __int16*)a3[7] +
          1;
    if (a6 == 0) {
      goto LABEL_7;
    }
  }
  else {
    v17 = 0;
    if (a6 == 0) {
      goto LABEL_7;
    }
  }
  if (*(_BYTE*)(a8 + 40) != 0) {
    v18 = v17 + 1;
    *(_DWORD*)(*a3 + 4LL * v17) = *(_DWORD*)a8;
    *(_DWORD*)(a3[1] + 4LL * v17) = *(_DWORD*)(a8 + 4);
    *(_DWORD*)(*a3 + 4LL * v18) = *(_DWORD*)(a8 + 8);
    *(_DWORD*)(a3[1] + 4LL * v18) = *(_DWORD*)(a8 + 12);
    v19 = v17 + 2;
    *(_DWORD*)(*a3 + 4LL * v19) = *(_DWORD*)(a8 + 20);
    *(_DWORD*)(a3[1] + 4LL * v19) = *(_DWORD*)(a8 + 24);
    v20 = v17 + 3;
    *(_DWORD*)(*a3 + 4LL * v20) = *(_DWORD*)(a8 + 28);
    *(_DWORD*)(a3[1] + 4LL * v20) = *(_DWORD*)(a8 + 32);
    *(_BYTE*)(a8 + 40) = 0;
    goto LABEL_10;
  }
LABEL_7:
  if (a6 == 0) {
    v21 = a3;
    v22 = a5;
    v23 = a7;
    fsglue_43a840_alt1(a3, a2, v17, 1, a7);
    a5 = v22;
    a7 = v23;
    a6 = 0;
    a3 = v21;
    if (*(_BYTE*)(a8 + 40) != 0) {
      *(_DWORD*)a8 = *(_DWORD*)(*v21 + 4LL * v17);
      *(_DWORD*)(a8 + 4) = *(_DWORD*)(v21[1] + 4LL * v17);
      *(_DWORD*)(a8 + 8) = *(_DWORD*)(*v21 + 4LL * (v17 + 1));
      *(_DWORD*)(a8 + 12) = *(_DWORD*)(v21[1] + 4LL * (v17 + 1));
      *(_DWORD*)(a8 + 20) = *(_DWORD*)(*v21 + 4LL * (v17 + 2));
      *(_DWORD*)(a8 + 24) = *(_DWORD*)(v21[1] + 4LL * (v17 + 2));
      *(_DWORD*)(a8 + 28) = *(_DWORD*)(*v21 + 4LL * (v17 + 3));
      *(_DWORD*)(a8 + 32) = *(_DWORD*)(v21[1] + 4LL * (v17 + 3));
    }
  }
LABEL_10:
  v25 = *(_DWORD*)(*(_QWORD*)(a1 + 48) + 36LL);
  if ((v25 & 0x40) != 0 && (a6 | a4) == 0 && a7 != 0 && (v25 & 2) != 0) {
    v26 = *(unsigned __int16*)(*(_QWORD*)(v12 + 48) + 52LL);
    v28 = v26 == 38485 || v26 == 1538;
    if (*(_BYTE*)(a1 + 110) == 0 && v28) {
      a5 = &v59;
      a4 = 3;
    }
    else {
      a4 = 0;
    }
  }
  result = 0;
  if (a7 != 0 && a4 != 0) {
    v58 = a5;
    if (a6 != 0) {
      v30 = (int*)a3[4];
      v31 = (int*)a3[5];
      v32 = (unsigned int*)*a3;
      v33 = (unsigned int*)a3[1];
      v34 = vardiv_64_plt(*((unsigned __int16*)a2 + 216) << 10,
                          *((unsigned int*)a2 + 110), 16);
      if ((v17 & 0x80000000) == 0) {
        v35 = v34;
        if (v34 + 0x20000 <= 0x40000) {
          v36 = v17 + 1;
          while (1) {
            v38 = *v32++;
            v37 = v38;
            if (v38 + 0x4000 > 0x8000) {
              *v30++ = varmul_64_plt(v37, v35, 16);
              v42 = *v33++;
              v40 = v42;
              if (v42 + 0x4000 > 0x8000) {
                goto LABEL_29;
              }
            LABEL_37:
              if ((int)(v40 * v35) <= 0) {
                v43 = 0x7FFF;
              }
              else {
                v43 = 0x8000;
              }
              *v31++ = (int)(v43 + v40 * v35) >> 16;
              if (--v36 == 0) {
                goto LABEL_44;
              }
            }
            else {
              if ((int)(v37 * v35) <= 0) {
                v39 = 0x7FFF;
              }
              else {
                v39 = 0x8000;
              }
              *v30++ = (int)(v39 + v37 * v35) >> 16;
              v41 = *v33++;
              v40 = v41;
              if (v41 + 0x4000 <= 0x8000) {
                goto LABEL_37;
              }
            LABEL_29:
              *v31++ = varmul_64_plt(v40, v35, 16);
              if (--v36 == 0) {
                goto LABEL_44;
              }
            }
          }
        }
        v44 = v17 + 1;
        do {
          v45 = *v32++;
          *v30++ = varmul_64_plt(v45, v35, 16);
          v46 = *v33++;
          *v31++ = varmul_64_plt(v46, v35, 16);
          --v44;
        } while (v44 != 0);
      }
    }
  LABEL_44:
    v47 = *((unsigned __int8*)a2 + 542);
    v48 = *a2;
    *((_BYTE*)a2 + 833) = 0;
    if (v47 != 0) {
      v49 = *(_QWORD*)(*(_QWORD*)v48 + 56LL);
      a2[106] = *(_QWORD*)(v49 + 96);
      v50 = *(_QWORD*)(v49 + 112);
      *((_BYTE*)a2 + 542) = 0;
      a2[107] = v50;
      a2[68] = a2[1];
      *((_WORD*)a2 + 288) = *((_DWORD*)a2 + 127);
    }
    v51 = a2[6];
    v52 = *(_QWORD*)(*(_QWORD*)v48 + 56LL);
    a2[71] = v51 + *((int*)a2 + 126);
    v53 = v51 + *((int*)a2 + 125);
    v55 = v53 + 7;
    v54 = v53 < -7;
    v56 = v53 + 14;
    if (!v54) {
      v56 = v55;
    }
    a2[70] = v56 & 0xFFFFFFFFFFFFFFF8LL;
    a2[90] = *(_QWORD*)(v52 + 240);
    v57 = *((int*)a2 + 14);
    a2[91] = *(_QWORD*)(v52 + 248);
    a2[69] = *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16816LL) + v57;
    a2[89] = a2[4];
    *((_WORD*)a2 + 420) = 1;
    a2[108] = *(_QWORD*)(a1 + 56);
    *((_DWORD*)a2 + 222) = *(_DWORD*)(*(_QWORD*)(a1 + 48) + 36LL);
    *((_DWORD*)a2 + 223) = *(_DWORD*)(a1 + 76);
    *((_WORD*)a2 + 480) = *(_WORD*)(*(_QWORD*)(a1 + 56) + 48LL);
    *((_WORD*)a2 + 481) = *(unsigned __int8*)(*(_QWORD*)(a1 + 48) + 65LL);
    *(_BYTE*)(a1 + 109) |= 1u;
    if (v58 != nullptr) {
      return fnt_Execute_plt(a2 + 32, v58, (char*)v58 + a4, a2 + 68,
                             *(_QWORD*)(a1 + 128));
    }
    else {
      return 0;
    }
  }
  return result;
}

_QWORD* fsglue_43a7c0(_QWORD* result, _DWORD* a2, unsigned int a3)
{
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;

  v3 = a3 + 1;
  *(_DWORD*)(*result + 4LL * a3) = *a2;
  *(_DWORD*)(result[1] + 4LL * a3) = a2[1];
  *(_DWORD*)(*result + 4LL * v3) = a2[2];
  *(_DWORD*)(result[1] + 4LL * v3) = a2[3];
  v4 = a3 + 2;
  *(_DWORD*)(*result + 4LL * v4) = a2[5];
  *(_DWORD*)(result[1] + 4LL * v4) = a2[6];
  v5 = a3 + 3;
  *(_DWORD*)(*result + 4LL * v5) = a2[7];
  *(_DWORD*)(result[1] + 4LL * v5) = a2[8];
  return result;
}

__int64 fsglue_43a840(_QWORD* a1, __int64 a2, unsigned int a3,
                      unsigned __int8 a4, int a5)
{
  unsigned int v5;
  unsigned int v6;
  int v11;
  unsigned int v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  int v18;
  _DWORD* v19;
  int v20;
  unsigned int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  __int64 result;
  unsigned int v27;

  v5 = a3 + 2;
  v6 = a3 + 3;
  v11 = a4;
  v12 = (*(_DWORD*)(*a1 + 4LL * (a3 + 2)) + 32) & 0xFFFFFFC0;
  *(_DWORD*)(*a1 + 4LL * v5) = v12;
  *(_DWORD*)(*a1 + 4LL * (a3 + 3)) = v12;
  v13 = a1[1];
  v14 = (*(_DWORD*)(v13 + 4LL * (a3 + 2)) + 32) & 0xFFFFFFC0;
  *(_DWORD*)(v13 + 4LL * v5) = v14;
  v15 = (int)(muldiv_64_plt(*(unsigned int*)(a2 + 768),
                            (unsigned int)(*(_DWORD*)(a1[5] + 4LL * (a3 + 3)) -
                                           *(_DWORD*)(a1[5] + 4LL * (a3 + 2))),
                            *(unsigned __int16*)(a2 + 432)) +
              512) >>
        10;
  if (a5 != 0) {
    v15 = (v15 + 32) & 0xFFFFFFC0;
  }
  *(_DWORD*)(a1[1] + 4LL * v6) = v15 + v14;
  v16 = *(_DWORD*)(*a1 + 4LL * a3);
  v17 = (v16 + 32) & 0xFFFFFFC0;
  *(_DWORD*)(*a1 + 4LL * a3) = v17;
  if (v11 != 0) {
    v18 = v17 - v16;
    if (v18 != 0 && a3 != 0) {
      v19 = (_DWORD*)*a1;
      v20 = a3 & 7;
      if ((a3 & 7) == 0) {
        v21 = a3;
        if (a3 < 8) {
          goto LABEL_11;
        }
        goto LABEL_10;
      }
      v21 = a3 & 0xFFFFFFF8;
      do {
        --v20;
        *v19++ += v18;
      } while (v20 != 0);
      if (a3 >= 8) {
        do {
        LABEL_10:
          v21 -= 8;
          v22 = v18 + v19[1];
          *v19 += v18;
          v19[1] = v22;
          v23 = v18 + v19[3];
          v19[2] += v18;
          v19[3] = v23;
          v24 = v18 + v19[5];
          v19[4] += v18;
          v19[5] = v24;
          v25 = v18 + v19[7];
          v19[6] += v18;
          v19[7] = v25;
          v19 += 8;
        } while (v21 != 0);
      }
    }
  }
LABEL_11:
  result = muldiv_64_plt(*(unsigned int*)(a2 + 740),
                         (unsigned int)(*(_DWORD*)(a1[4] + 4LL * (a3 + 1)) -
                                        *(_DWORD*)(a1[4] + 4LL * a3)),
                         *(unsigned __int16*)(a2 + 432));
  v27 = ((int)result + 512) >> 10;
  if (a5 != 0) {
    v27 = (v27 + 32) & 0xFFFFFFC0;
  }
  *(_DWORD*)(*a1 + 4LL * (a3 + 1)) = v27 + v17;
  return result;
}

_DWORD* fsglue_43aa00(_DWORD* result, _QWORD* a2, unsigned int a3)
{
  *result = *(_DWORD*)(*a2 + 4LL * a3);
  result[1] = *(_DWORD*)(a2[1] + 4LL * a3);
  result[2] = *(_DWORD*)(*a2 + 4LL * (a3 + 1));
  result[3] = *(_DWORD*)(a2[1] + 4LL * (a3 + 1));
  result[5] = *(_DWORD*)(*a2 + 4LL * (a3 + 2));
  result[6] = *(_DWORD*)(a2[1] + 4LL * (a3 + 2));
  result[7] = *(_DWORD*)(*a2 + 4LL * (a3 + 3));
  result[8] = *(_DWORD*)(a2[1] + 4LL * (a3 + 3));
  return result;
}

unsigned __int16** read_comp_parms_ttf(__int64 a1, unsigned __int16** a2,
                                       _WORD* a3, _WORD* a4, _WORD* a5,
                                       _WORD* a6, __int64 a7, bool* a8)
{
  unsigned __int16* v8;
  unsigned int v9;
  __int16 v10;
  unsigned __int16* v11;
  unsigned __int16* v12;
  unsigned int v13;
  int v14;
  __int16 v15;
  unsigned int v17;
  unsigned int v18;

  v8 = *a2;
  v9 = bswap32(**a2) >> 16;
  *a4 = v9;
  *a3 = bswap32(v8[1]) >> 16;
  if ((v9 & 1) != 0) {
    *a5 = bswap32(v8[2]) >> 16;
    v15 = __rev16(v8[3]);
    v11 = v8 + 4;
    *a6 = v15;
    if ((v9 & 8) != 0) {
      goto LABEL_3;
    }
  }
  else {
    *a5 = *((char*)v8 + 4);
    v10 = *((char*)v8 + 5);
    v11 = v8 + 3;
    *a6 = v10;
    if ((v9 & 8) != 0) {
    LABEL_3:
      v13 = *v11;
      v12 = v11 + 1;
      v14 = 4 * ((int)bswap32(v13) >> 16);
      *(_DWORD*)(a7 + 12) = v14;
      *(_DWORD*)a7 = v14;
    LABEL_10:
      *(_QWORD*)(a7 + 4) = 0;
      *(_BYTE*)(a1 + 528) = 0;
      *a8 = (v9 & 0x20) != 0;
      *a2 = v12;
      return a2;
    }
  }
  if ((v9 & 0x40) != 0) {
    *(_DWORD*)a7 = 4 * ((int)bswap32(*v11) >> 16);
    v17 = v11[1];
    v12 = v11 + 2;
    *(_DWORD*)(a7 + 12) = 4 * ((int)bswap32(v17) >> 16);
    goto LABEL_10;
  }
  if ((v9 & 0x80) != 0) {
    *(_DWORD*)a7 = 4 * ((int)bswap32(*v11) >> 16);
    *(_DWORD*)(a7 + 4) = 4 * ((int)bswap32(v11[1]) >> 16);
    *(_DWORD*)(a7 + 8) = 4 * ((int)bswap32(v11[2]) >> 16);
    v18 = v11[3];
    v11 += 4;
    *(_DWORD*)(a7 + 12) = 4 * ((int)bswap32(v18) >> 16);
    *(_BYTE*)(a1 + 528) = 0;
  }
  else {
    *(_QWORD*)a7 = 0x10000;
    *(_QWORD*)(a7 + 8) = 0x1000000000000LL;
  }
  *a8 = (v9 & 0x20) != 0;
  *a2 = v11;
  return a2;
}

__int64 update_sp_ep(__int64 result, __int64 a2)
{
  unsigned int v2;
  _WORD* v3;
  _WORD* v4;
  int v5;
  __int16 v6;
  unsigned int v7;

  if ((int)result >= 1) {
    v2 = *(__int16*)(a2 + 80);
    if (*(_WORD*)(a2 + 80) != 0) {
      v4 = *(_WORD**)(a2 + 56);
      v3 = *(_WORD**)(a2 + 64);
      v5 = v2 & 7;
      v6 = *(v3 - 1) + 1;
      if ((v2 & 7) == 0) {
        v7 = *(__int16*)(a2 + 80);
        if (v2 < 8) {
          return result;
        }
        goto LABEL_7;
      }
      v7 = v2 - v5;
      do {
        --v5;
        *v4++ += v6;
        *v3++ += v6;
      } while (v5 != 0);
      if (v2 >= 8) {
        do {
        LABEL_7:
          v7 -= 8;
          *v4 += v6;
          *v3 += v6;
          v4[1] += v6;
          v3[1] += v6;
          v4[2] += v6;
          v3[2] += v6;
          v4[3] += v6;
          v3[3] += v6;
          v4[4] += v6;
          v3[4] += v6;
          v4[5] += v6;
          v3[5] += v6;
          v4[6] += v6;
          v3[6] += v6;
          v4[7] += v6;
          v4 += 8;
          v3[7] += v6;
          v3 += 8;
        } while (v7 != 0);
      }
    }
  }
  return result;
}

__int64 get_glyph_metrics(__int64 a1, __int64* a2, unsigned __int16 a3,
                          _WORD* a4)
{
  __int64 v4;
  unsigned int v5;
  __int64 v8;
  _WORD* v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  __int64 result;
  int v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  __int16 v18;
  unsigned int v19;
  __int64 v20;
  _WORD* v21;
  bool v22;
  __int16* v23;
  _WORD* v24;
  __int16 v25;
  unsigned int v26;
  _WORD v27[2];
  int v28;
  _WORD v29[2];
  int v30;

  v4 = *a2;
  v5 = a3;
  v30 = 0;
  v29[0] = 0;
  v8 = *(_QWORD*)(*(_QWORD*)v4 + 56LL);
  v9 = *(_WORD**)(v8 + 56);
  v10 = *(_DWORD*)(v8 + 172);
  v11 = (unsigned __int16)v9[17];
  v12 = a3 - v11;
  if (a3 < v11) {
    result = ttf_read_buf_plt(a1, v8, v10 + 4 * (unsigned int)a3, 4, &v30);
    if (*(_DWORD*)(a1 + 72) != 0) {
      return result;
    }
    a4[9] = bswap32((unsigned __int16)v30) >> 16;
    a4[8] = __rev16(HIWORD(v30));
    v14 = *(_DWORD*)(v8 + 176);
    if (v14 != 0) {
      goto LABEL_4;
    }
  LABEL_10:
    v20 = *(_QWORD*)(v8 + 184);
    v21 = (_WORD*)(v20 + 72);
    v22 = v20 == 0;
    if (v20 != 0) {
      v23 = (__int16*)(v20 + 70);
    }
    else {
      v23 = v9 + 2;
    }
    if (v22) {
      v24 = v9 + 3;
    }
    else {
      v24 = v21;
    }
    v25 = *v23;
    a4[19] = v25 - *v24;
    v18 = *(_WORD*)(*(_QWORD*)(v8 + 48) + 42LL) - v25;
    goto LABEL_17;
  }
  v19 = v10 + 4 * v11 - 4;
  result = ttf_read_buf_plt(a1, v8, v19, 4, &v30);
  if (*(_DWORD*)(a1 + 72) != 0) {
    return result;
  }
  a4[9] = bswap32((unsigned __int16)v30) >> 16;
  result = ttf_read_buf_plt(a1, v8, v19 + 2 * v12 + 4, 2, v29);
  if (*(_DWORD*)(a1 + 72) != 0) {
    return result;
  }
  a4[8] = __rev16(v29[0]);
  v14 = *(_DWORD*)(v8 + 176);
  if (v14 == 0) {
    goto LABEL_10;
  }
LABEL_4:
  v15 = *(_QWORD*)(v8 + 64);
  v28 = 0;
  v16 = *(unsigned __int16*)(v15 + 34);
  v17 = v5 - v16;
  if (v5 >= v16) {
    v27[0] = 0;
    v26 = v14 + 4 * v16 - 4;
    result = ttf_read_buf_plt(a1, v8, v26, 4, &v28);
    if (*(_DWORD*)(a1 + 72) == 0) {
      a4[19] = bswap32((unsigned __int16)v28) >> 16;
      result = ttf_read_buf_plt(a1, v8, v26 + 2 * v17 + 4, 2, v27);
      if (*(_DWORD*)(a1 + 72) == 0) {
        v18 = __rev16(v27[0]);
        goto LABEL_17;
      }
    }
  }
  else {
    result = ttf_read_buf_plt(a1, v8, v14 + 4 * v5, 4, &v28);
    if (*(_DWORD*)(a1 + 72) == 0) {
      a4[19] = bswap32((unsigned __int16)v28) >> 16;
      v18 = __rev16(HIWORD(v28));
    LABEL_17:
      a4[18] = v18;
    }
  }
  return result;
}

__int64 get_glyph_advance(__int64 a1, __int64 a2, __int64 a3, unsigned int* a4,
                          unsigned int* a5)
{
  __int64 result;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  struct {
    _QWORD v16[2];
    __int64 v17;
    __int64 v18;
    __int64 v19;
    int v20;
  } v16_;

  *a5 = 0;
  *a4 = 0;
  v16_.v20 = 0;
  v16_.v18 = 0;
  v16_.v19 = 0;
  v16_.v16[1] = 0;
  v16_.v17 = 0;
  v15 = 0;
  v16_.v16[0] = 0;
  result = get_glyph_metrics_plt(a1, a2, a3, v16_.v16);
  if (*(_DWORD*)(a1 + 72) == 0) {
    v10 = *(_DWORD*)(a1 + 76);
    v11 = SHIWORD(v16_.v19) & (v10 << 15 >> 31);
    if ((v10 & 0x10000) != 0) {
      v12 = 0;
    }
    else {
      v12 = SWORD1(v16_.v17);
    }
    v13 = v11;
    v14 = v12;
    result = ((__int64 (*)(__int64, char*, __int64*, int*, int*,
                           __int64))SdkRoutine_439260)(a2, (char*)&v15 + 4,
                                                       &v15, &v14, &v13, 1);
    *a4 = ((HIDWORD(v15) << 10) + 0x8000) & 0xFFFF0000;
    *a5 = (((_DWORD)v15 << 10) + 0x8000) & 0xFFFF0000;
  }
  return result;
}

unsigned __int16** get_charData_ttf(unsigned __int16** result, __int64 a2)
{
  unsigned __int16* v2;
  int v3;
  int v4;
  unsigned __int16* v5;
  unsigned __int16* v6;
  unsigned int v7;

  v2 = *result;
  v3 = bswap32(**result);
  v4 = v3 >> 16;
  *(_WORD*)a2 = HIWORD(v3);
  *(_WORD*)(a2 + 40) = bswap32(v2[1]) >> 16;
  *(_WORD*)(a2 + 42) = bswap32(v2[2]) >> 16;
  *(_WORD*)(a2 + 44) = bswap32(v2[3]) >> 16;
  *(_WORD*)(a2 + 46) = bswap32(v2[4]) >> 16;
  v5 = v2 + 5;
  if (v4 < 0) {
    *(_QWORD*)(a2 + 8) = 0;
    *(_WORD*)(a2 + 16) = 0;
    *(_QWORD*)(a2 + 24) = 0;
    *(_QWORD*)(a2 + 32) = 0;
    *result = v5;
  }
  else {
    v6 = &v5[v4];
    *(_QWORD*)(a2 + 8) = v5;
    v7 = *v6++;
    *(_WORD*)(a2 + 16) = __rev16(v7);
    *(_QWORD*)(a2 + 24) = v6;
    *(_QWORD*)(a2 + 32) = (char*)v6 + (__int16)(bswap32(v7) >> 16);
    *result = v6;
  }
  return result;
}

unsigned __int16** get_charData(__int64 a1, unsigned __int16** a2, __int64 a3)
{
  unsigned __int16* v3;
  unsigned __int16** result;
  int v5;
  int v6;
  unsigned __int16* v7;
  unsigned __int16* v8;
  unsigned int v9;

  v3 = *a2;
  result = a2;
  v5 = bswap32(**a2);
  v6 = v5 >> 16;
  *(_WORD*)a3 = HIWORD(v5);
  *(_WORD*)(a3 + 40) = bswap32(v3[1]) >> 16;
  *(_WORD*)(a3 + 42) = bswap32(v3[2]) >> 16;
  *(_WORD*)(a3 + 44) = bswap32(v3[3]) >> 16;
  *(_WORD*)(a3 + 46) = bswap32(v3[4]) >> 16;
  v7 = v3 + 5;
  if (v6 < 0) {
    *(_QWORD*)(a3 + 8) = 0;
    *(_WORD*)(a3 + 16) = 0;
    *(_QWORD*)(a3 + 24) = 0;
    *(_QWORD*)(a3 + 32) = 0;
    *a2 = v7;
  }
  else {
    v8 = &v7[v6];
    *(_QWORD*)(a3 + 8) = v7;
    v9 = *v8++;
    *(_WORD*)(a3 + 16) = __rev16(v9);
    *(_QWORD*)(a3 + 24) = v8;
    *(_QWORD*)(a3 + 32) = (char*)v8 + (__int16)(bswap32(v9) >> 16);
    *a2 = v8;
  }
  return result;
}

__int64 apply_transMatrix(__int64 a1, unsigned int* a2, unsigned int* a3,
                          int a4, unsigned int* a5)
{
  __int64 result;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  int v12;
  __int64 v13;
  bool v14;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  int j;
  __int64 v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  int v27;
  int v28;
  unsigned int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int i;
  __int64 v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;

  result = *a5;
  v8 = a5[1];
  v9 = a5[3];
  v10 = a5[4];
  if (a4 != 0) {
    v12 = a4;
  }
  else {
    v12 = 8;
  }
  v13 = *(unsigned int*)(a1 + 740);
  if ((_DWORD)result == (_DWORD)v13) {
    v14 = v10 == *(_DWORD*)(a1 + 768) && v8 == 0;
    if (v14 && v9 == 0) {
      return result;
    }
  }
  v16 = vardiv_64_plt(result, v13, 16);
  v17 = vardiv_64_plt(v8, *(unsigned int*)(a1 + 740), 16);
  v18 = vardiv_64_plt(v9, *(unsigned int*)(a1 + 768), 16);
  result = vardiv_64_plt(v10, *(unsigned int*)(a1 + 768), 16);
  v19 = result;
  if ((v17 | v18) != 0) {
    v43 = v16;
    v41 = v16 + 0x20000;
    v42 = v18;
    v39 = v17 + 0x20000;
    v40 = v18 + 0x20000;
    v38 = result + 0x20000;
    while (1) {
      v23 = *a2;
      v24 = *a3;
      v25 = v17;
      v26 = *a2 + 0x4000;
      if (v41 >= 0x40001 || v26 > 0x8000) {
        v28 = varmul_64_plt(v23, v16, 16);
        v29 = v24 + 0x4000;
        if (v40 >= 0x40001) {
          goto LABEL_38;
        }
      }
      else {
        if ((int)(v23 * v16) <= 0) {
          v27 = 0x7FFF;
        }
        else {
          v27 = 0x8000;
        }
        v28 = (int)(v27 + v23 * v16) >> 16;
        v29 = v24 + 0x4000;
        if (v40 >= 0x40001) {
          goto LABEL_38;
        }
      }
      if (v29 <= 0x8000) {
        if ((int)(v24 * v42) <= 0) {
          v30 = 0x7FFF;
        }
        else {
          v30 = 0x8000;
        }
        v31 = (int)(v30 + v24 * v42) >> 16;
        goto LABEL_39;
      }
    LABEL_38:
      v31 = varmul_64_plt(v24, v42, 16);
    LABEL_39:
      *a2++ = v31 + v28;
      if (v39 >= 0x40001 || v26 > 0x8000) {
        v17 = v25;
        v33 = varmul_64_plt(v23, v25, 16);
        v16 = v43;
        if (v38 < 0x40001) {
          goto LABEL_47;
        }
      LABEL_24:
        result = varmul_64_plt(v24, v19, 16);
        --v12;
        *a3++ = result + v33;
        if (v12 == 0) {
          return result;
        }
      }
      else {
        v17 = v25;
        if ((int)(v23 * v25) <= 0) {
          v32 = 0x7FFF;
        }
        else {
          v32 = 0x8000;
        }
        v33 = (int)(v32 + v23 * v25) >> 16;
        v16 = v43;
        if (v38 >= 0x40001) {
          goto LABEL_24;
        }
      LABEL_47:
        if (v29 > 0x8000) {
          goto LABEL_24;
        }
        if ((int)(v24 * v19) <= 0) {
          v34 = 0x7FFF;
        }
        else {
          v34 = 0x8000;
        }
        result = (unsigned int)((int)(v34 + v24 * v19) >> 16);
        --v12;
        *a3++ = result + v33;
        if (v12 == 0) {
          return result;
        }
      }
    }
  }
  if (v16 != 0x10000) {
    if (v16 + 0x20000 >= 0x40001) {
      for (i = v12; i != 0; --i) {
        result = varmul_64_plt(*a2, v16, 16);
        *a2++ = result;
      }
    }
    else {
      for (j = v12; j != 0; --j) {
        while (1) {
          v21 = *a2;
          if ((unsigned int)(v21 + 0x4000) <= 0x8000) {
            break;
          }
          result = varmul_64_plt(v21, v16, 16);
          --j;
          *a2++ = result;
          if (j == 0) {
            goto LABEL_55;
          }
        }
        if ((int)(v21 * v16) <= 0) {
          v22 = 0x7FFF;
        }
        else {
          v22 = 0x8000;
        }
        result = (unsigned int)((int)(v22 + v21 * v16) >> 16);
        *a2++ = result;
      }
    }
  }
LABEL_55:
  if (v19 != 0x10000) {
    if (v19 + 0x20000 < 0x40001) {
      do {
        while (1) {
          v36 = *a3;
          if ((unsigned int)(v36 + 0x4000) <= 0x8000) {
            break;
          }
          result = varmul_64_plt(v36, v19, 16);
          --v12;
          *a3++ = result;
          if (v12 == 0) {
            return result;
          }
        }
        if ((int)(v36 * v19) <= 0) {
          v37 = 0x7FFF;
        }
        else {
          v37 = 0x8000;
        }
        result = (unsigned int)((int)(v37 + v36 * v19) >> 16);
        --v12;
        *a3++ = result;
      } while (v12 != 0);
    }
    else {
      do {
        --v12;
        result = varmul_64_plt(*a3, v19, 16);
        *a3++ = result;
      } while (v12 != 0);
    }
  }
  return result;
}

__int64 which_script(__int64 a1, int a2, int* a3)
{
  unsigned int v3;
  unsigned int v4;
  int v5;
  __int64 result;
  int v10;
  unsigned int v11;
  unsigned int v12;
  _DWORD* v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  int v31;
  int v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;

  v3 = *(unsigned __int16*)(a1 + 64);
  v4 = *(unsigned __int16*)(a1 + 66);
  v5 = *(_DWORD*)(a1 + 76);
  FSS_set_cmap_plt(a1, 3, 1);
  if (*(_DWORD*)(a1 + 72) != 0 &&
      (FSS_set_cmap_plt(a1, 3, 10), *(_DWORD*)(a1 + 72) != 0)) {
    FSS_set_cmap_plt(a1, v3, v4);
    return 0xFFFF;
  }
  else {
    FS_set_flags_plt(a1, 4294950911LL);
    if (*(_DWORD*)(a1 + 72) != 0) {
      FSS_set_cmap_plt(a1, v3, v4);
      *(_DWORD*)(a1 + 76) = v5;
      return 0xFFFF;
    }
    else {
      *a3 = inverse_map_char_plt(
          a1,
          a2 + (unsigned int)*(
                   unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) +
                                                 24LL *
                                                     *(unsigned __int16*)(a1 +
                                                                          40)) +
                                      40LL));
      FSS_set_cmap_plt(a1, v3, v4);
      *(_DWORD*)(a1 + 76) = v5;
      v10 = *a3;
      if (*a3 == 0xFFFF || (unsigned int)(v10 - 57344) >> 8 <= 0x18) {
        v13 = *(_DWORD**)(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 56LL) + 184LL);
        v15 = v13[11];
        v14 = v13[12];
        v16 = v13[13];
        v17 = v15 & 0x800;
        v18 = v17 >> 9;
        v19 = v14 & 0x80000000 | v15 & 0x2000 | v16 & 8;
        if (v19 != 0) {
          v18 = 5;
        }
        if ((v14 & 0x1100000) != 0) {
          v18 = 6;
        }
        if ((v14 & 0x28C10000) != 0) {
          v18 = 7;
        }
        v20 = v15 & 0x8000;
        if ((v15 & 0x8000) != 0) {
          v18 = 8;
        }
        v21 = v15 & 0x10000;
        if ((v15 & 0x10000) != 0) {
          v18 = 9;
        }
        v22 = v15 & 0x20000;
        if ((v15 & 0x20000) != 0) {
          v18 = 10;
        }
        v23 = v15 & 0x40000;
        if ((v15 & 0x40000) != 0) {
          v18 = 19;
        }
        v24 = v15 & 0x80000;
        if ((v15 & 0x80000) != 0) {
          v18 = 15;
        }
        v25 = v15 & 0x100000;
        if ((v15 & 0x100000) != 0) {
          v18 = 14;
        }
        v26 = v15 & 0x200000;
        if ((v15 & 0x200000) != 0) {
          v18 = 11;
        }
        v27 = v15 & 0x400000;
        if ((v15 & 0x400000) != 0) {
          v18 = 12;
        }
        v28 = v15 & 0x800000;
        if ((v15 & 0x800000) != 0) {
          v18 = 13;
        }
        v29 = v15 & 0x1000000;
        if (v29 != 0) {
          v18 = 17;
        }
        v30 = (v20 >> 15) + (v17 >> 11) + HIWORD(v21) + (v22 >> 17) +
              (v23 >> 18) + (v24 >> 19) + (v25 >> 20) + (v26 >> 21) +
              (v27 >> 22) + (v28 >> 23) + HIBYTE(v29);
        if ((v14 & 0x1100000) != 0) {
          ++v30;
        }
        if ((v14 & 0x28C10000) != 0) {
          v31 = v30 + 1;
        }
        else {
          v31 = v30;
        }
        v32 = v31 + ((v16 & 0x200) != 0);
        if ((v16 & 0x200) != 0) {
          v33 = 16;
        }
        else {
          v33 = v18;
        }
        v34 = v16 & 0x10000;
        if (v34 != 0) {
          v33 = 18;
        }
        v35 = v32 + HIWORD(v34);
        if (v19 != 0) {
          ++v35;
        }
        if (v35 == 1) {
          return v33;
        }
        else {
          return 0;
        }
      }
      else {
        result = 1;
        if ((unsigned int)(v10 - 64256) >= 7 &&
            (unsigned int)(v10 - 42784) >= 0xE0 &&
            (v10 & 0xFFFFFFE0) != 0x2C60) {
          v11 = v10 & 0xFFFFFF00;
          if ((v10 & 0xFFFFFF00) != 0x1E00) {
            v12 = v10 & 0xFFFFFF80;
            if ((v10 & 0xFFFFFF80) != 0x1D00 &&
                (unsigned int)(v10 - 384) >= 0x130 && v12 != 256 &&
                (unsigned int)(v10 - 32) >= 0x60 && v12 != 128) {
              result = 2;
              if (v12 != 11392 && (unsigned int)(v10 - 880) >= 0x90 &&
                  v11 != 7936) {
                result = 3;
                if ((unsigned int)(v10 - 42560) >= 0x60 &&
                    (v10 & 0xFFFFFFE0) != 0x2DE0 && v11 != 1024 &&
                    (unsigned int)(v10 - 1280) >= 0x30) {
                  result = 4;
                  if ((unsigned int)(v10 - 1424) >= 0x70 &&
                      (unsigned int)(v10 - 64285) >= 0x33) {
                    result = 5;
                    if ((unsigned int)(v10 - 65136) >= 0x90 &&
                        (unsigned int)(v10 - 64336) >= 0x2B0 && v11 != 1536 &&
                        (unsigned int)(v10 - 1872) >= 0x30) {
                      if ((unsigned int)(v10 - 44032) >> 4 >= 0x2BB) {
                        result = 7;
                        if (v11 != 63744 &&
                            (unsigned int)(v10 - 19968) >> 9 >= 0x29 &&
                            (unsigned int)(v10 - 13312) >> 6 >= 0x67 &&
                            (unsigned int)(v10 - 11904) >= 0x156 &&
                            (unsigned int)(v10 - 12736) >= 0x30) {
                          v36 = v10 - 2304;
                          if (v36 >= 0x580) {
                            if (v12 == 6016) {
                              return 18;
                            }
                            else {
                              return 0;
                            }
                          }
                          else {
                            return SdkData_c3c6e0[v36 >> 7];
                          }
                        }
                      }
                      else {
                        return 6;
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
  return result;
}

__int64 get_comp(__int64 a1, __int64 a2, unsigned int a3, __int64* a4,
                 unsigned int a5, unsigned int a6, unsigned int a7, __int64 a8,
                 unsigned int a9, __int64 a10)
{
  __int64 v10;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  unsigned int* v16;
  int v17;
  unsigned int v18;
  unsigned __int16* v19;
  unsigned __int16* v20;
  unsigned int v21;
  unsigned __int16* v22;
  unsigned __int16* v23;
  unsigned int v24;
  unsigned int v25;
  unsigned __int16* v26;
  __int16 v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned __int16* v31;
  unsigned int v32;
  int v33;
  int v34;
  __int64 v35;
  int v36;
  __int64 v37;
  unsigned __int16* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 result;
  __int64 v47;
  __int64 v48;
  int v49;
  int v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  int v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  int v66;
  int v68;
  unsigned int v69;
  unsigned int v70;
  int v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  unsigned int v75;
  unsigned int v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  __int64 v80;
  __int16 v81;
  __int64 v82;
  __int64 v83;
  int v84;
  __int64 v85;
  int v86;
  unsigned int v87;
  _WORD* v88;
  _WORD* v89;
  int v90;
  __int16 v91;
  unsigned int v92;
  int v93;
  unsigned int v94;
  int v95;
  __int16* v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  int v101;
  __int16* v102;
  __int64 v103;
  int v104;
  __int16 v105;
  __int64 v106;
  int v107;
  unsigned int v108;
  unsigned int v109;
  unsigned int v110;
  unsigned int v111;
  unsigned int v112;
  unsigned __int16* v113;
  int v114;
  int v115;
  unsigned int v120;
  struct {
    __int64 v121;
    __int64 v122;
  } v121_;
  __int128 v123;
  struct {
    _QWORD v124[2];
    __int64 v125;
    __int64 v126;
    __int64 v127;
    int v128;
  } v124_;
  struct {
    char gap144_[4];
    __int16 v129;
    char v130;
    char gap151_[1];
    __int64 v131;
    unsigned __int16* v132;
    __int64 v133;
    unsigned __int16* v134;
    __int64 v135;
  } v129_;
  __int64 v136;

  v10 = *(_QWORD*)(a1 + 48);
  v13 = a1;
  v129_.v135 = 0;
  v136 = 0;
  v129_.v133 = 0;
  v129_.v134 = nullptr;
  v14 = *(_QWORD*)(v10 + 56);
  v129_.v131 = 0;
  v129_.v132 = nullptr;
  v124_.v128 = 0;
  v124_.v126 = 0;
  v124_.v127 = 0;
  v124_.v124[1] = 0;
  v124_.v125 = 0;
  v124_.v124[0] = 0;
  v129_.v130 = 127;
  v129_.v129 = 2992;
  if (*(unsigned __int16*)(*(_QWORD*)(v14 + 72) + 4LL) <=
      (unsigned int)(unsigned __int16)a3) {
    v15 = 0;
  }
  else {
    v15 = a3;
  }
  if (*(_WORD*)(*(_QWORD*)(v14 + 48) + 50LL) != 0) {
    v16 = (unsigned int*)(*(_QWORD*)(v14 + 144) + 4LL * (unsigned __int16)v15);
    v17 = bswap32(*v16);
    v18 = bswap32(v16[1]) - v17;
    if (*(_DWORD*)(a1 + 72) != 0) {
    LABEL_6:
      v19 = nullptr;
      goto LABEL_19;
    }
  }
  else {
    v20 = (unsigned __int16*)(*(_QWORD*)(v14 + 144) +
                              2LL * (unsigned __int16)v15);
    v21 = bswap32(*v20) >> 16;
    v17 = 2 * v21;
    v18 = 2 * ((bswap32(v20[1]) >> 16) - v21);
    if (*(_DWORD*)(a1 + 72) != 0) {
      goto LABEL_6;
    }
  }
  if (*(_BYTE*)(a1 + 108) == 0) {
    v36 = *(_DWORD*)(a10 + 36);
    LODWORD(v124_.v125) = *(_DWORD*)(a10 + 16);
    HIDWORD(v124_.v127) = v36;
    v120 = a9;
    if (v18 != 0) {
      goto LABEL_10;
    }
  LABEL_15:
    v23 = nullptr;
    v33 = 0;
    v34 = 0;
    v35 = *(__int16*)(a2 + 424);
    *(_QWORD*)&v123 = 0;
    LODWORD(v121_.v121) = 0;
    if (v35 == 0) {
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  get_glyph_metrics_plt(a1, a2, v15, v124_.v124);
  v120 = a9;
  if (v18 == 0) {
    goto LABEL_15;
  }
LABEL_10:
  v22 = (unsigned __int16*)ttf_read_plt(
      v13, v14, (unsigned int)(*(_DWORD*)(v14 + 160) + v17), v18);
  v23 = v22;
  if (*(_DWORD*)(v13 + 72) != 0) {
    goto LABEL_18;
  }
  v24 = *v22;
  v25 = v22[1];
  v26 = v22 + 5;
  v27 = bswap32(v22[2]) >> 16;
  LOWORD(v129_.v131) = __rev16(v24);
  v28 = (int)bswap32(v24) >> 16;
  WORD1(v136) = v27;
  v29 = v22[3];
  LOWORD(v136) = bswap32(v25) >> 16;
  WORD2(v136) = bswap32(v29) >> 16;
  v30 = v22[4];
  HIWORD(v136) = bswap32(v30) >> 16;
  if ((v28 & 0x80000000) == 0) {
    v31 = &v26[v28];
    v32 = *v31;
    v129_.v132 = v22 + 5;
    LOWORD(v129_.v133) = __rev16(v32);
    v129_.v134 = v31 + 1;
    v129_.v135 = (__int64)v31 + (__int16)(bswap32(v32) >> 16) + 2;
    v33 = (__int16)__rev16(v25);
    v34 = (__int16)__rev16(v30);
    v35 = *(__int16*)(a2 + 424);
    *(_QWORD*)&v123 = 0;
    LODWORD(v121_.v121) = 0;
    if (v35 == 0) {
    LABEL_17:
      *(_WORD*)(a2 + 424) = 0;
      v45 = sfnt_UnfoldCurve_plt();
      *(_DWORD*)(v13 + 72) = v45;
      if (v45 != 0) {
        goto LABEL_18;
      }
      v47 = *(__int16*)(a2 + 424);
      if (*(_WORD*)(a2 + 424) != 0) {
        LODWORD(v47) =
            *(unsigned __int16*)(*(_QWORD*)(a2 + 408) + 2 * v47 - 2) -
            **(unsigned __int16**)(a2 + 400) + 1;
      }
      v48 = 4LL * (int)v47;
      v49 = (__int16)v124_.v125;
      v50 = SHIWORD(v124_.v127);
      v51 = v48 + 16;
      v52 = v48 + 20;
      v53 = v48 + 4;
      *(_DWORD*)(*(_QWORD*)(a2 + 384) + v48) = 0;
      v54 = v33 - v49;
      *(_DWORD*)(*(_QWORD*)(a2 + 384) + v51) = 0;
      *(_DWORD*)(*(_QWORD*)(a2 + 384) + v52) = 0;
      *(_DWORD*)(*(_QWORD*)(a2 + 384) + v53) = 0;
      *(_DWORD*)(*(_QWORD*)(a2 + 376) + v48) = v54;
      *(_DWORD*)(*(_QWORD*)(a2 + 376) + v51) = v54;
      *(_DWORD*)(*(_QWORD*)(a2 + 376) + v52) = v33;
      v55 = v48 + 12;
      *(_DWORD*)(*(_QWORD*)(a2 + 376) + v53) = v54 + SWORD1(v124_.v125);
      v56 = *(_QWORD*)(a2 + 376);
      v57 = v48 + 24;
      v58 = *(_DWORD*)(v56 + v48 + 4) + *(_DWORD*)(v56 + v48);
      v59 = v48 + 8;
      v48 += 28;
      v58 /= 2;
      *(_DWORD*)(v56 + v59) = v58;
      *(_DWORD*)(*(_QWORD*)(a2 + 376) + v55) = v58;
      *(_DWORD*)(*(_QWORD*)(a2 + 376) + v57) = v58;
      *(_DWORD*)(*(_QWORD*)(a2 + 376) + v48) = v58;
      *(_DWORD*)(*(_QWORD*)(a2 + 384) + v59) = v50;
      *(_DWORD*)(*(_QWORD*)(a2 + 384) + v55) = 2 * v50;
      *(_DWORD*)(*(_QWORD*)(a2 + 384) + v57) = v50;
      *(_DWORD*)(*(_QWORD*)(a2 + 384) + v48) = v34;
      v60 = *(_QWORD*)(a2 + 344);
      v61 = *(_QWORD*)(a2 + 352);
      v62 = *(_QWORD*)(a2 + 376);
      v63 = *(_QWORD*)(a2 + 384);
      if (*(_WORD*)(a2 + 424) != 0) {
        v64 = ((__int64 (*)(__int64, __int64, __int64, __int64, __int64,
                            _QWORD))SdkRoutine_439260)(
            a2, v60, v61, v62, v63,
            *(unsigned __int16*)(*(_QWORD*)(a2 + 408) +
                                 2LL * *(__int16*)(a2 + 424) - 2) -
                (unsigned int)**(unsigned __int16**)(a2 + 400) + 9);
        v65 = *(unsigned __int16*)(a2 + 424);
        if (*(_WORD*)(a2 + 424) == 0) {
        LABEL_26:
          if (v120 == 0) {
            goto LABEL_100;
          }
          v68 = *(_DWORD*)(v13 + 76);
          if ((v68 & 0x400000) == 0 ||
              (*(_BYTE*)(*(_QWORD*)(v13 + 48) + 36LL) & 2) != 0 ||
              *(_WORD*)(*(_QWORD*)(v13 + 56) + 48LL) == 0) {
            goto LABEL_100;
          }
          if ((v68 & 0x1000000) != 0) {
            if (*(_BYTE*)(v13 + 108) != 0) {
              *(_QWORD*)&v123 = 0;
              LODWORD(v121_.v121) = 0;
            LABEL_100:
              **(_BYTE**)(a2 + 416) = *(_BYTE*)(v13 + 110);
              if ((*(_BYTE*)(*(_QWORD*)(v13 + 48) + 36LL) & 0x40) != 0) {
                apply_transformation_plt(v64, a2, a2 + 344, a4);
                v104 = do_hints_plt(v13, a2, a2 + 344, (unsigned int)v121_.v121,
                                    v123, 0, v120, v124_.v124);
                *(_DWORD*)(v13 + 72) = v104;
                if (v104 != 0) {
                  goto LABEL_18;
                }
              }
              else {
                v102 = (__int16*)v123;
                v103 = do_hints_plt(v13, a2, a2 + 344, (unsigned int)v121_.v121,
                                    v123, 0, v120, v124_.v124);
                *(_DWORD*)(v13 + 72) = v103;
                if ((_DWORD)v103 != 0) {
                  goto LABEL_18;
                }
                if (v102 == &v129_.v129) {
                  *(_DWORD*)(*(_QWORD*)(v13 + 48) + 36LL) =
                      *(_DWORD*)(a2 + 888);
                }
                apply_transformation_plt(v103, a2, a2 + 344, a4);
              }
              apply_offsets_plt(v13, a2, (unsigned int)*(__int16*)(a2 + 518),
                                a5, a6, a7, a8, a2 + 344);
              v105 = *(_WORD*)(a2 + 520);
              ++*(_WORD*)(a2 + 518);
              v106 = *(__int16*)(a2 + 424);
              result = *(unsigned __int16*)(a2 + 424);
              *(_WORD*)(a2 + 520) = v105 + v106;
              if (v106 != 0) {
                LODWORD(v106) =
                    *(unsigned __int16*)(*(_QWORD*)(a2 + 408) +
                                         2LL * (unsigned int)(v106 - 1)) -
                    **(unsigned __int16**)(a2 + 400) + 1;
              }
              *(_DWORD*)(a2 + 524) += v106;
            LABEL_109:
              v107 = *(_DWORD*)(a2 + 668);
              if (v107 != 0) {
                v108 = (unsigned __int8)*(_DWORD*)(a2 + 668);
                v109 = (*(_DWORD*)(a2 + 496) | v107) & 0xFFFFFF00;
                if ((unsigned __int8)*(_DWORD*)(a2 + 496) > v108) {
                  v108 = (unsigned __int8)*(_DWORD*)(a2 + 496);
                }
                *(_DWORD*)(a2 + 496) = v109 | v108;
              }
              if (v23 != nullptr) {
                v110 = result;
                FSS_free_plt(v13, v23);
                return v110;
              }
              return result;
            }
          }
          else if ((_DWORD)v121_.v121 != 0 || (v68 & 0x800000) != 0 ||
                   *(_BYTE*)(v13 + 108) != 0) {
            goto LABEL_100;
          }
          v64 = which_script_plt(v13, (unsigned __int16)v15, a2 + 948);
          *(_DWORD*)(a2 + 944) = v64;
          *(_QWORD*)&v123 = &v129_.v129;
          LODWORD(v121_.v121) = 3;
          *(_BYTE*)(v13 + 109) |= 0x10u;
          goto LABEL_100;
        }
      }
      else {
        v64 = ((__int64 (*)(__int64, __int64, __int64, __int64, __int64,
                            __int64))SdkRoutine_439260)(a2, v60, v61, v62, v63,
                                                        8);
        v65 = *(unsigned __int16*)(a2 + 424);
        if (*(_WORD*)(a2 + 424) == 0) {
          goto LABEL_26;
        }
      }
      v66 = *(unsigned __int16*)(*(_QWORD*)(a2 + 408) +
                                 2LL * (unsigned int)(v65 - 1)) -
            **(unsigned __int16**)(a2 + 400) + 9;
      memcpy_plt(*(_QWORD*)(a2 + 360), *(_QWORD*)(a2 + 344), 4 * v66);
      memcpy_plt(*(_QWORD*)(a2 + 368), *(_QWORD*)(a2 + 352), 4 * v66);
      v64 = memset_plt(*(void**)(a2 + 416), nullptr, v66);
      goto LABEL_26;
    }
  LABEL_16:
    v37 = *(_QWORD*)(a2 + 416);
    v38 = *(unsigned __int16**)(a2 + 400);
    v39 = *(_QWORD*)(a2 + 408) + 2 * v35;
    v40 = *(_QWORD*)(a2 + 344);
    v41 = *(_QWORD*)(a2 + 352);
    v42 = *(unsigned __int16*)(v39 - 2) - (unsigned __int64)*v38 + 1;
    *(_QWORD*)(a2 + 392) += v42;
    *(_QWORD*)(a2 + 400) = &v38[v35];
    *(_QWORD*)(a2 + 408) = v39;
    *(_QWORD*)(a2 + 416) = v37 + v42;
    *(_QWORD*)(a2 + 344) = v40 + 4 * v42;
    *(_QWORD*)(a2 + 352) = v41 + 4 * v42;
    v43 = *(_QWORD*)(a2 + 368) + 4 * v42;
    *(_QWORD*)(a2 + 360) += 4 * v42;
    *(_QWORD*)(a2 + 368) = v43;
    v44 = *(_QWORD*)(a2 + 384) + 4 * v42;
    *(_QWORD*)(a2 + 376) += 4 * v42;
    *(_QWORD*)(a2 + 384) = v44;
    goto LABEL_17;
  }
  v129_.v132 = nullptr;
  LOWORD(v129_.v133) = 0;
  v129_.v134 = nullptr;
  v129_.v135 = 0;
  if (v24 != 0xFFFF) {
    *(_DWORD*)(v13 + 72) = 407;
    goto LABEL_18;
  }
  v69 = *(__int16*)(a2 + 520);
  v70 = *(_DWORD*)(a2 + 524);
  v123 = (__typeof__(v123)){0};
  v121_.v121 = 0;
  v121_.v122 = 0;
  v112 = v69;
  if (*(_BYTE*)(v13 + 108) == 0) {
    comp_phantom_points_plt(a2, a2 + 344, &v136, a10);
    fsglue_43a840((_QWORD*)(a2 + 344), a2, v70, 0, v120);
    fsglue_43aa00((_DWORD*)a10, (_QWORD*)(a2 + 344), v70);
  }
  v111 = v70;
  v71 = 0;
  v114 = 0;
  v113 = v23;
  do {
    v72 = bswap32(*v26);
    v73 = HIWORD(v72);
    if ((v72 & 0x10000) != 0) {
      v74 = __rev16(v26[2]);
      v75 = __rev16(v26[3]);
      v76 = v26[1];
      v26 += 4;
      if ((v72 & 0x80000) != 0) {
      LABEL_46:
        v77 = *v26++;
        HIDWORD(v123) = 4 * ((int)bswap32(v77) >> 16);
        LODWORD(v123) = HIDWORD(v123);
        goto LABEL_55;
      }
    }
    else {
      v74 = *((char*)v26 + 4);
      v75 = *((char*)v26 + 5);
      v76 = v26[1];
      v26 += 3;
      if ((v72 & 0x80000) != 0) {
        goto LABEL_46;
      }
    }
    if ((v72 & 0x400000) != 0) {
      LODWORD(v123) = 4 * ((int)bswap32(*v26) >> 16);
      v78 = v26[1];
      v26 += 2;
      HIDWORD(v123) = 4 * ((int)bswap32(v78) >> 16);
    LABEL_55:
      *(_QWORD*)((char*)&v123 + 4) = 0;
      *(_BYTE*)(a2 + 528) = 0;
      if ((v73 & 0x100) != 0) {
        v71 = 1;
      }
      v115 = v71;
      if ((v73 & 0xC8) != 0) {
        goto LABEL_58;
      }
      goto LABEL_62;
    }
    if ((v72 & 0x800000) != 0) {
      LODWORD(v123) = 4 * ((int)bswap32(*v26) >> 16);
      DWORD1(v123) = 4 * ((int)bswap32(v26[1]) >> 16);
      DWORD2(v123) = 4 * ((int)bswap32(v26[2]) >> 16);
      v79 = v26[3];
      v26 += 4;
      *(_BYTE*)(a2 + 528) = 0;
      HIDWORD(v123) = 4 * ((int)bswap32(v79) >> 16);
      if ((v73 & 0x100) != 0) {
        v71 = 1;
      }
      v115 = v71;
      if ((v73 & 0xC8) != 0) {
      LABEL_58:
        compose_trans_plt(&v121_.v121, &v123, a4);
        goto LABEL_63;
      }
    }
    else {
      *(_QWORD*)&v123 = 0x10000;
      *((_QWORD*)&v123 + 1) = 0x1000000000000LL;
      if ((v72 & 0x1000000) != 0) {
        v71 = 1;
      }
      v115 = v71;
      if ((v72 & 0xC80000) != 0) {
        goto LABEL_58;
      }
    }
  LABEL_62:
    v80 = a4[1];
    v121_.v121 = *a4;
    v121_.v122 = v80;
  LABEL_63:
    *(_BYTE*)(a10 + 40) = (v73 & 0x200) != 0;
    ++*(_BYTE*)(v13 + 108);
    v81 = get_comp_plt(v13, a2, __rev16(v76), &v121_.v121, v73, v74, v75, a4,
                       v120, a10);
    v23 = v113;
    if (*(_DWORD*)(v13 + 72) != 0) {
      goto LABEL_18;
    }
    --*(_BYTE*)(v13 + 108);
    if ((v73 & 0x200) != 0) {
      v82 = *(__int16*)(a2 + 424);
      if (*(_WORD*)(a2 + 424) != 0) {
        v82 = *(unsigned __int16*)(*(_QWORD*)(a2 + 408) + 2 * v82 - 2) + 1LL;
      }
      v83 = 4 * v82;
      *(_DWORD*)a10 = *(_DWORD*)(*(_QWORD*)(a2 + 344) + v83);
      *(_DWORD*)(a10 + 4) = *(_DWORD*)(*(_QWORD*)(a2 + 352) + v83);
      *(_DWORD*)(a10 + 8) = *(_DWORD*)(*(_QWORD*)(a2 + 344) + v83 + 4);
      v84 = *(_DWORD*)(*(_QWORD*)(a2 + 352) + v83 + 4);
      v85 = v83 + 8;
      v83 += 12;
      *(_DWORD*)(a10 + 12) = v84;
      *(_DWORD*)(a10 + 20) = *(_DWORD*)(*(_QWORD*)(a2 + 344) + v85);
      *(_DWORD*)(a10 + 24) = *(_DWORD*)(*(_QWORD*)(a2 + 352) + v85);
      *(_DWORD*)(a10 + 28) = *(_DWORD*)(*(_QWORD*)(a2 + 344) + v83);
      *(_DWORD*)(a10 + 32) = *(_DWORD*)(*(_QWORD*)(a2 + 352) + v83);
      *(_BYTE*)(a10 + 40) = 1;
    }
    if (v81 == 0) {
      v71 = v115;
      continue;
    }
    v71 = v115;
    v86 = (__int16)v114++;
    if (v86 >= 1) {
      v87 = *(__int16*)(a2 + 424);
      if (*(_WORD*)(a2 + 424) != 0) {
        v89 = *(_WORD**)(a2 + 400);
        v88 = *(_WORD**)(a2 + 408);
        v90 = v87 & 7;
        v91 = *(v88 - 1) + 1;
        if ((v87 & 7) == 0) {
          v92 = *(__int16*)(a2 + 424);
          if (v87 < 8) {
            continue;
          }
          do {
          LABEL_77:
            v92 -= 8;
            *v89 += v91;
            *v88 += v91;
            v89[1] += v91;
            v88[1] += v91;
            v89[2] += v91;
            v88[2] += v91;
            v89[3] += v91;
            v88[3] += v91;
            v89[4] += v91;
            v88[4] += v91;
            v89[5] += v91;
            v88[5] += v91;
            v89[6] += v91;
            v88[6] += v91;
            v89[7] += v91;
            v89 += 8;
            v88[7] += v91;
            v88 += 8;
          } while (v92 != 0);
          continue;
        }
        v92 = v87 - v90;
        do {
          --v90;
          *v89++ += v91;
          *v88++ += v91;
        } while (v90 != 0);
        if (v87 >= 8) {
          goto LABEL_77;
        }
      }
    }
  } while ((v73 & 0x20) != 0);
  fsg_SetUpElement_plt(v13, a2, 1);
  fsg_IncrementElement_plt(a2, 1, v111, v112);
  v93 = *(unsigned __int16*)(a2 + 520);
  *(_WORD*)(a2 + 424) = v93 - v112;
  if (v93 == (unsigned __int16)v112) {
    v94 = 0;
  }
  else {
    v94 = *(unsigned __int16*)(*(_QWORD*)(a2 + 408) +
                               2LL * (__int16)(v93 - v112) - 2) +
          1;
  }
  fsglue_43a7c0((_QWORD*)(a2 + 344), (_DWORD*)a10, v94);
  apply_offsets_plt(v13, a2, (unsigned int)*(__int16*)(a2 + 518), a5, a6, a7,
                    a8, a2 + 344);
  fsg_CopyElementBackwards_plt(a2 + 344);
  if (v120 == 0 || *(_BYTE*)(v13 + 108) != 0 ||
      ((v95 = *(_DWORD*)(v13 + 76)) & 0x400000) == 0 ||
      (*(_BYTE*)(*(_QWORD*)(v13 + 48) + 36LL) & 2) != 0 ||
      *(_WORD*)(*(_QWORD*)(v13 + 56) + 48LL) == 0) {
    if ((_BYTE)v115 == 0) {
      goto LABEL_96;
    }
    goto LABEL_94;
  }
  if ((v95 & 0x1000000) != 0) {
    goto LABEL_92;
  }
  if ((_BYTE)v115 != 0) {
  LABEL_94:
    v96 = (__int16*)(v26 + 1);
    v97 = (__int16)(*(unsigned __int8*)v26 << 8) |
          (unsigned int)*((unsigned __int8*)v26 + 1);
  LABEL_95:
    v98 = a2 + 344;
    v99 = v13;
    v100 = a2;
    goto LABEL_97;
  }
  if ((v95 & 0x800000 | *(_BYTE*)(v13 + 109) & 1) == 0) {
  LABEL_92:
    *(_DWORD*)(a2 + 944) =
        which_script_plt(v13, (unsigned __int16)v15, a2 + 948);
    v96 = &v129_.v129;
    v97 = 3;
    *(_BYTE*)(v13 + 109) |= 0x10u;
    goto LABEL_95;
  }
LABEL_96:
  v98 = a2 + 344;
  v99 = v13;
  v100 = a2;
  v97 = 0;
  v96 = nullptr;
LABEL_97:
  v101 = do_hints_plt(v99, v100, v98, v97, v96, 1, v120, a10);
  *(_DWORD*)(v13 + 72) = v101;
  if (v101 == 0) {
    result = *(unsigned __int16*)(a2 + 424);
    goto LABEL_109;
  }
LABEL_18:
  a1 = v13;
  v19 = v23;
LABEL_19:
  FSS_free_plt(a1, v19);
  return 0;
}

__int64 sfnt_UnfoldCurve(__int64 a1, __int64 a2, __int16* a3, _DWORD* a4,
                         _QWORD* a5, int a6)
{
  int v7;
  __int64 result;
  _WORD* v9;
  _WORD* v10;
  _WORD* v11;
  unsigned __int16* v12;
  unsigned int v13;
  int v14;
  __int16 v15;
  unsigned int v16;
  __int64 v17;
  int v18;
  unsigned __int16* v19;
  _WORD* v20;
  _WORD* v21;
  _WORD* v22;
  unsigned __int16* v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  __int64 v32;
  void* v33;
  char* v34;
  unsigned __int8* v35;
  void* v36;
  unsigned __int64 v37;
  void* v38;
  int v39;
  unsigned __int8* v40;
  unsigned __int64 v41;
  _DWORD* v42;
  unsigned __int64 v43;
  int v44;
  int v45;
  int v46;
  __int16 v47;
  int v48;
  _DWORD* v49;
  unsigned __int64 v50;
  int v51;
  int v52;
  int v53;
  char v54;
  __int16 v55;
  int v56;

  if (a6 >= 1 && (v7 = *a3, *a3 != 0)) {
    *(_WORD*)(a2 + 424) = v7;
    if (v7 < 0) {
      return 419;
    }
    else if (v7 <= *(unsigned __int16*)(*(_QWORD*)(a2 + 8) + 8LL)) {
      v11 = *(_WORD**)(a2 + 400);
      v10 = *(_WORD**)(a2 + 408);
      v12 = *((unsigned __int16**)a3 + 1);
      *v11 = 0;
      v13 = *v12;
      *v10 = bswap32(v13) >> 16;
      v14 = v7 - 1;
      if (v7 != 1) {
        v15 = __rev16(v13);
        v16 = v7 - 2;
        if ((v14 & 7) != 0) {
          v17 = 0;
          v18 = (2 * (_BYTE)v7 - 2) & 0xE;
          do {
            v19 = &v12[v17];
            v20 = &v10[v17];
            v11[v17 + 1] = v15 + 1;
            --v14;
            ++v17;
            LODWORD(v19) = v19[1];
            v15 = __rev16((unsigned int)v19);
            v20[1] = bswap32((unsigned int)v19) >> 16;
          } while (v18 != (_DWORD)(v17 * 2));
          v12 = (unsigned __int16*)((char*)v12 + v17 * 2);
          v10 = (_WORD*)((char*)v10 + v17 * 2);
          v11 = (_WORD*)((char*)v11 + v17 * 2);
        }
        if (v16 >= 7) {
          v21 = v11 + 4;
          v22 = v10 + 4;
          v23 = v12 + 4;
          do {
            v14 -= 8;
            *(v21 - 3) = v15 + 1;
            v24 = bswap32(*(v23 - 3)) >> 16;
            *(v22 - 3) = v24;
            *(v21 - 2) = v24 + 1;
            v25 = bswap32(*(v23 - 2)) >> 16;
            *(v22 - 2) = v25;
            *(v21 - 1) = v25 + 1;
            v26 = bswap32(*(v23 - 1)) >> 16;
            *(v22 - 1) = v26;
            *v21 = v26 + 1;
            v27 = bswap32(*v23) >> 16;
            *v22 = v27;
            v21[1] = v27 + 1;
            v28 = bswap32(v23[1]) >> 16;
            v22[1] = v28;
            v21[2] = v28 + 1;
            v29 = bswap32(v23[2]) >> 16;
            v22[2] = v29;
            v21[3] = v29 + 1;
            v30 = bswap32(v23[3]) >> 16;
            v22[3] = v30;
            v21[4] = v30 + 1;
            v21 += 8;
            v31 = v23[4];
            v23 += 8;
            v15 = __rev16(v31);
            v22[4] = bswap32(v31) >> 16;
            v22 += 8;
          } while (v14 != 0);
        }
      }
      v32 = *(unsigned __int16*)(*(_QWORD*)(a2 + 408) +
                                 2LL * *(__int16*)(a2 + 424) - 2);
      if ((unsigned int)v32 >= *(unsigned __int16*)(*(_QWORD*)(a2 + 8) + 6LL)) {
        return 418;
      }
      else {
        *a4 = a3[8];
        *a5 = *((_QWORD*)a3 + 3);
        v33 = *(void**)(a2 + 392);
        v34 = (char*)v33 + v32;
        v35 = *((unsigned __int8**)a3 + 4);
        v36 = v33;
        v37 = (unsigned __int64)(v34 + 1);
        do {
          while (1) {
            v38 = (void*)*v35;
            *(_BYTE*)v36 = (_BYTE)v38;
            v36 = (void*)((char*)v36 + 1);
            if (((unsigned __int8)v38 & 8) != 0) {
              break;
            }
            ++v35;
            v33 = v36;
            if ((unsigned __int64)v36 >= v37) {
              goto LABEL_24;
            }
          }
          v39 = v35[1];
          v40 = v35 + 2;
          if (v35[1] != 0) {
            memset_plt_alt1(v36, v38, v35[1], (unsigned __int64)a4);
            v36 = (void*)((char*)v33 + (unsigned int)(v39 - 1) + 2);
          }
          v35 = v40;
          v33 = v36;
        } while ((unsigned __int64)v36 < v37);
      LABEL_24:
        v41 = *(_QWORD*)(a2 + 392);
        if (v41 < v37) {
          v42 = *(_DWORD**)(a2 + 376);
          v43 = v41 - 1;
          v44 = 0;
          do {
            if ((*(_BYTE*)(v43 + 1) & 2) != 0) {
              v45 = *v35++;
              v46 = v44 - v45;
              v44 += v45;
              if ((*(_BYTE*)(v43 + 1) & 0x10) == 0) {
                v44 = v46;
              }
            }
            else if ((*(_BYTE*)(v43 + 1) & 0x10) == 0) {
              v47 = *v35;
              v48 = v35[1];
              v35 += 2;
              v44 += (__int16)(v47 << 8) | v48;
            }
            *v42++ = v44;
            ++v43;
          } while (v43 < (unsigned __int64)v34);
          v41 = *(_QWORD*)(a2 + 392);
        }
        if (v41 >= v37) {
          return 0;
        }
        else {
          v49 = *(_DWORD**)(a2 + 384);
          v50 = v41 - 1;
          v51 = 0;
          do {
            v54 = *(_BYTE*)(v50 + 1);
            if ((v54 & 4) != 0) {
              v52 = *v35++;
              v53 = v51 - v52;
              v51 += v52;
              if ((*(_BYTE*)(v50 + 1) & 0x20) == 0) {
                v51 = v53;
              }
            }
            else if ((*(_BYTE*)(v50 + 1) & 0x20) == 0) {
              v55 = *v35;
              v56 = v35[1];
              v35 += 2;
              v51 += (__int16)(v55 << 8) | v56;
            }
            *v49++ = v51;
            result = 0;
            *(_BYTE*)++v50 = v54 & 1;
          } while (v50 < (unsigned __int64)v34);
        }
      }
    }
    else {
      return 419;
    }
  }
  else {
    v9 = *(_WORD**)(a2 + 400);
    *(_WORD*)(a2 + 424) = 0;
    *v9 = 0;
    **(_WORD**)(a2 + 408) = 0;
    *a5 = 0;
    *a4 = 0;
    **(_BYTE**)(a2 + 392) = 1;
    **(_DWORD**)(a2 + 376) = 0;
    **(_DWORD**)(a2 + 384) = 0;
    return 0;
  }
  return result;
}

__int64 fsg_GridFit(__int64 a1, __int64 a2)
{
  unsigned int v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _WORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 result;
  _BOOL4 v32;
  __int16 v33;
  __int64 v34;
  _QWORD v35[5];
  int v36;

  *(_DWORD*)(a2 + 524) = 0;
  v2 = *(unsigned __int16*)(a2 + 16);
  v36 = 0;
  memset(v35, 0, sizeof(v35));
  *(_DWORD*)(a2 + 518) = 0;
  v5 = *(_QWORD*)(a1 + 128);
  *(_WORD*)(a1 + 108) = 0;
  *(_BYTE*)(a1 + 110) = 0;
  v7 = *(int*)(a2 + 84);
  v6 = *(int*)(a2 + 88);
  v8 = *(int*)(a2 + 92);
  v9 = *(int*)(a2 + 96);
  v10 = *(_QWORD*)(v5 + 16816);
  *(_WORD*)(a2 + 336) = 0;
  *(_QWORD*)(a2 + 256) = v10 + v6;
  *(_QWORD*)(a2 + 264) = v10 + v8;
  v11 = v10 + *(int*)(a2 + 76);
  *(_QWORD*)(a2 + 272) = v10 + *(int*)(a2 + 80);
  *(_QWORD*)(a2 + 280) = v10 + v7;
  v12 = v10 + *(int*)(a2 + 68);
  *(_QWORD*)(a2 + 288) = v10 + *(int*)(a2 + 72);
  *(_QWORD*)(a2 + 296) = v11;
  v13 = (_WORD*)(v10 + *(int*)(a2 + 64));
  v14 = v10 + *(int*)(a2 + 60);
  *(_QWORD*)(a2 + 304) = v10 + v9;
  *(_QWORD*)(a2 + 312) = v13;
  v15 = *(_QWORD*)(a2 + 8);
  *(_QWORD*)(a2 + 320) = v12;
  *(_QWORD*)(a2 + 328) = v14;
  *v13 = 0;
  **(_WORD**)(a2 + 320) = *(_WORD*)(v15 + 16) - 1;
  *(_WORD*)(a2 + 336) = 1;
  v17 = *(int*)(a2 + 180);
  v16 = *(int*)(a2 + 184);
  v18 = *(int*)(a2 + 188);
  v19 = *(int*)(a2 + 192);
  v20 = *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16816LL);
  *(_WORD*)(a2 + 424) = 0;
  *(_QWORD*)(a2 + 344) = v20 + v16;
  *(_QWORD*)(a2 + 352) = v20 + v18;
  v21 = v20 + *(int*)(a2 + 172);
  *(_QWORD*)(a2 + 360) = v20 + *(int*)(a2 + 176);
  *(_QWORD*)(a2 + 368) = v20 + v17;
  v22 = v20 + *(int*)(a2 + 164);
  *(_QWORD*)(a2 + 376) = v20 + *(int*)(a2 + 168);
  *(_QWORD*)(a2 + 384) = v21;
  v23 = *(int*)(a2 + 156);
  v24 = v20 + *(int*)(a2 + 160);
  *(_QWORD*)(a2 + 392) = v20 + v19;
  *(_QWORD*)(a2 + 400) = v24;
  *(_QWORD*)(a2 + 408) = v22;
  *(_QWORD*)(a2 + 416) = v20 + v23;
  v25 = *(int*)(a2 + 224);
  *(_QWORD*)(a2 + 872) = v20 + *(int*)(a2 + 220);
  *(_QWORD*)(a2 + 880) = v20 + v25;
  v26 = *(int*)(a2 + 232);
  *(_QWORD*)(a2 + 896) = v20 + *(int*)(a2 + 228);
  *(_QWORD*)(a2 + 904) = v20 + v26;
  v27 = *(int*)(a2 + 240);
  *(_QWORD*)(a2 + 912) = v20 + *(int*)(a2 + 236);
  *(_QWORD*)(a2 + 920) = v20 + v27;
  v28 = v20 + *(int*)(a2 + 244);
  v29 = v20 + *(int*)(a2 + 248);
  *(_QWORD*)(a2 + 928) = v28;
  *(_QWORD*)(a2 + 936) = v29;
  v30 = *(_QWORD*)(a1 + 128);
  if (*(_QWORD*)a2 == *(_QWORD*)(v30 + 16824) ||
      (*(_QWORD*)(v30 + 16824) = *(_QWORD*)a2,
       result = fsg_RunPreProgram_plt(a1, a2), *(_DWORD*)(a1 + 72) = result,
       (_DWORD)result == 0)) {
    v32 = (*(_BYTE*)(a1 + 76) & 2) == 0 && (*(_DWORD*)(a2 + 672) & 1) == 0;
    get_glyph_metrics_plt(a1, a2, v2, v35);
    *(_BYTE*)(a2 + 528) = 1;
    v33 = get_comp_plt(a1, a2, v2, &SdkData_bb4350, 2, 0, 0, &SdkData_bb4350,
                       v32, v35);
    result = *(unsigned int*)(a1 + 72);
    if ((_DWORD)result == 0) {
      if (v33 != 0) {
        v34 = *(unsigned __int16*)(*(_QWORD*)(a2 + 408) + 2LL * v33 - 2) -
              (unsigned int)**(unsigned __int16**)(a2 + 400) + 9;
      }
      else {
        v34 = 0;
      }
      apply_transMatrix_plt(a2, *(_QWORD*)(a2 + 344), *(_QWORD*)(a2 + 352), v34,
                            a2 + 448);
      return *(unsigned int*)(a1 + 72);
    }
  }
  return result;
}

__int64 fsg_RunPreProgram(__int64 a1, __int64 a2, __int64 a3,
                          unsigned __int64 a4)
{
  __int64 v4;
  __int64 v7;
  __int64 v8;
  unsigned __int16* v9;
  unsigned int v10;
  int v11;
  int v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  int* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;
  int v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  unsigned int v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  _WORD* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  void* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  int v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  bool v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 result;
  char v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;

  v71 = COERCE_AS(__typeof__(v71),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v4 = a2 + 604;
  v7 = *(_QWORD*)(**(_QWORD**)a2 + 56LL);
  v8 = *(int*)(a2 + 488);
  v9 = *(unsigned __int16**)(v7 + 128);
  v10 = *(_DWORD*)(v7 + 136);
  *(_QWORD*)(a2 + 604) = 68;
  *(_DWORD*)(a2 + 646) = 196617;
  v11 = *(_DWORD*)(a2 + 440);
  *(_BYTE*)(a2 + 654) = 1;
  *(_BYTE*)(a2 + 832) = 1;
  *(_DWORD*)(a2 + 612) = 0;
  *(_QWORD*)(a2 + 616) = 0;
  *(_QWORD*)(a2 + 624) = 0x200000040LL;
  v12 = *(_DWORD*)(a2 + 436);
  *(_WORD*)(a2 + 652) = 0;
  *(_BYTE*)(a2 + 655) = 0;
  *(_DWORD*)(a2 + 600) = 0;
  *(_DWORD*)(a2 + 588) = 0;
  *(_QWORD*)(a2 + 638) = 0;
  *(_QWORD*)(a2 + 632) = 0;
  *(_WORD*)(a2 + 650) = 128;
  v13 = *(_QWORD*)(a2 + 48);
  v14 = (unsigned __int64)(93194 - v8) >> 10;
  *(_DWORD*)(a2 + 584) = v11;
  *(_DWORD*)(a2 + 592) = v14;
  *(_DWORD*)(a2 + 596) = -(int)v14;
  v15 = *(int*)(a2 + 504);
  *(_WORD*)(a2 + 578) = (unsigned int)(v11 + 0x8000) >> 16;
  *(_WORD*)(a2 + 580) = (unsigned int)(v12 + 0x8000) >> 16;
  v16 = (int*)(v13 + v15);
  v17 = *(_QWORD*)(a2 + 612);
  v18 = *(_QWORD*)(a2 + 620);
  v19 = *(_QWORD*)(a2 + 628);
  *(_QWORD*)(a2 + 656) = *(_QWORD*)(a2 + 604);
  LODWORD(v15) = *(_DWORD*)(a2 + 652);
  *(_QWORD*)(a2 + 672) = v18;
  *(_QWORD*)(a2 + 664) = v17;
  *(_QWORD*)(a2 + 680) = v19;
  v20 = *(_QWORD*)(a2 + 636);
  v21 = *(_QWORD*)(a2 + 644);
  v22 = *(_DWORD*)(a2 + 816);
  *(_DWORD*)(a2 + 704) = v15;
  LODWORD(v15) = *(_DWORD*)(a2 + 824);
  *(_QWORD*)(a2 + 696) = v21;
  v23 = *(_DWORD*)(a2 + 804);
  *(_QWORD*)(a2 + 688) = v20;
  *(_DWORD*)(a2 + 532) = v15;
  v24 = v23 >> 1;
  *(_DWORD*)(a2 + 536) = *(_DWORD*)(a2 + 828);
  v25 = *(_DWORD*)(a2 + 800);
  if (v22 == 0) {
    if (v10 == 0) {
      goto LABEL_31;
    }
    v27 = *(_DWORD*)(a2 + 812);
    v28 = v10 & 3;
    if ((v10 & 3) != 0) {
      v29 = v10 & 0xFFFFFFFC;
      do {
        v30 = *v9++;
        --v28;
        *v16++ = (v24 + v25 * ((int)bswap32(v30) >> 16)) >> v27;
      } while (v28 != 0);
      if (v10 < 4) {
        goto LABEL_31;
      }
    }
    else {
      v29 = v10;
      if (v10 < 4) {
        goto LABEL_31;
      }
    }
    do {
      v29 -= 4;
      *v16 = (v24 + v25 * ((int)bswap32(*v9) >> 16)) >> v27;
      v16[1] = (v24 + v25 * ((int)bswap32(v9[1]) >> 16)) >> v27;
      v16[2] = (v24 + v25 * ((int)bswap32(v9[2]) >> 16)) >> v27;
      v41 = v9[3];
      v9 += 4;
      v16[3] = (v24 + v25 * ((int)bswap32(v41) >> 16)) >> v27;
      v16 += 4;
    } while (v29 != 0);
    goto LABEL_31;
  }
  if (v22 != 1) {
    if (v10 != 0) {
      v31 = *(_DWORD*)(a2 + 808);
      do {
        v32 = *v9++;
        --v10;
        *v16++ =
            varmul_64_plt(v31, (unsigned int)((int)bswap32(v32) >> 16), 16),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v73 = COERCE_AS(__typeof__(v73),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      } while (v10 != 0);
    }
    goto LABEL_31;
  }
  if (v10 == 0) {
    goto LABEL_31;
  }
  if ((v10 & 1) != 0) {
    v33 = *v9++;
    v26 = v10 - 1;
    v34 = (int)bswap32(v33) >> 16;
    if (v34 < 0) {
      v35 = -((v24 - v25 * v34) / v23);
    }
    else {
      v35 = (v25 * v34 + v24) / v23;
    }
    *v16++ = v35;
    if (v10 == 1) {
      goto LABEL_31;
    }
    while (1) {
    LABEL_23:
      v36 = (int)bswap32(*v9) >> 16;
      v37 = v25 * v36;
      if (v36 < 0) {
        *v16 = -((v24 - v37) / v23);
        v40 = (int)bswap32(v9[1]) >> 16;
        v39 = v25 * v40;
        if ((v40 & 0x80000000) == 0) {
          goto LABEL_27;
        }
      LABEL_22:
        v26 -= 2;
        v16[1] = -((v24 - v39) / v23);
        v16 += 2;
        v9 += 2;
        if (v26 == 0) {
          goto LABEL_31;
        }
      }
      else {
        *v16 = (v37 + v24) / v23;
        v38 = (int)bswap32(v9[1]) >> 16;
        v39 = v25 * v38;
        if (v38 < 0) {
          goto LABEL_22;
        }
      LABEL_27:
        v26 -= 2;
        v16[1] = (v39 + v24) / v23;
        v16 += 2;
        v9 += 2;
        if (v26 == 0) {
          goto LABEL_31;
        }
      }
    }
  }
  v26 = v10;
  if (v10 != 1) {
    goto LABEL_23;
  }
LABEL_31:
  v42 = *(unsigned __int8*)(a2 + 542);
  *(_BYTE*)(a2 + 833) = 0;
  if (v42 != 0) {
    v43 = *(_QWORD*)(a2 + 8);
    v44 = *(_QWORD*)(**(_QWORD**)a2 + 56LL);
    *(_QWORD*)(a2 + 848) = *(_QWORD*)(v44 + 96);
    v45 = *(_QWORD*)(v44 + 112);
    *(_QWORD*)(a2 + 544) = v43;
    *(_BYTE*)(a2 + 542) = 0;
    *(_QWORD*)(a2 + 856) = v45;
    *(_WORD*)(a2 + 576) = *(_DWORD*)(a2 + 508);
  }
  else {
    v43 = *(_QWORD*)(a2 + 8);
  }
  v47 = *(int*)(a2 + 84);
  v46 = *(int*)(a2 + 88);
  v48 = *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16816LL);
  v49 = *(int*)(a2 + 92);
  v50 = *(int*)(a2 + 96);
  *(_WORD*)(a2 + 336) = 0;
  *(_QWORD*)(a2 + 256) = v48 + v46;
  *(_QWORD*)(a2 + 264) = v48 + v49;
  v51 = v48 + *(int*)(a2 + 76);
  *(_QWORD*)(a2 + 272) = v48 + *(int*)(a2 + 80);
  *(_QWORD*)(a2 + 280) = v48 + v47;
  v52 = v48 + *(int*)(a2 + 68);
  *(_QWORD*)(a2 + 288) = v48 + *(int*)(a2 + 72);
  *(_QWORD*)(a2 + 296) = v51;
  v53 = (_WORD*)(v48 + *(int*)(a2 + 64));
  v54 = v48 + *(int*)(a2 + 60);
  *(_QWORD*)(a2 + 304) = v48 + v50;
  *(_QWORD*)(a2 + 312) = v53;
  *(_QWORD*)(a2 + 320) = v52;
  *(_QWORD*)(a2 + 328) = v54;
  *v53 = 0;
  **(_WORD**)(a2 + 320) = *(_WORD*)(v43 + 16) - 1;
  *(_WORD*)(a2 + 336) = 1;
  v56 = *(int*)(a2 + 180);
  v55 = *(int*)(a2 + 184);
  v57 = *(int*)(a2 + 188);
  v58 = *(int*)(a2 + 192);
  v59 = *(void**)(a2 + 256);
  v60 = *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16816LL);
  *(_WORD*)(a2 + 424) = 0;
  *(_QWORD*)(a2 + 344) = v60 + v55;
  *(_QWORD*)(a2 + 352) = v60 + v57;
  v61 = v60 + *(int*)(a2 + 172);
  *(_QWORD*)(a2 + 360) = v60 + *(int*)(a2 + 176);
  *(_QWORD*)(a2 + 368) = v60 + v56;
  v62 = v60 + *(int*)(a2 + 164);
  *(_QWORD*)(a2 + 376) = v60 + *(int*)(a2 + 168);
  *(_QWORD*)(a2 + 384) = v61;
  v63 = *(int*)(a2 + 156);
  v64 = v60 + *(int*)(a2 + 160);
  *(_QWORD*)(a2 + 392) = v60 + v58;
  *(_QWORD*)(a2 + 400) = v64;
  *(_QWORD*)(a2 + 408) = v62;
  *(_QWORD*)(a2 + 416) = v60 + v63;
  v65 = *(int*)(a2 + 224);
  *(_QWORD*)(a2 + 872) = v60 + *(int*)(a2 + 220);
  *(_QWORD*)(a2 + 880) = v60 + v65;
  v66 = *(int*)(a2 + 232);
  *(_QWORD*)(a2 + 896) = v60 + *(int*)(a2 + 228);
  *(_QWORD*)(a2 + 904) = v60 + v66;
  v67 = *(int*)(a2 + 240);
  *(_QWORD*)(a2 + 912) = v60 + *(int*)(a2 + 236);
  *(_QWORD*)(a2 + 920) = v60 + v67;
  v68 = v60 + *(int*)(a2 + 244);
  *(_QWORD*)(a2 + 936) = v60 + *(int*)(a2 + 248);
  v69 = *(_QWORD*)(a2 + 8);
  *(_QWORD*)(a2 + 928) = v68;
  v70 = 4 * *(unsigned __int16*)(v69 + 16);
  memset_plt_alt1(v59, nullptr, v70, a4),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  memset_plt_alt1(*(void**)(a2 + 264), nullptr, v70, v71),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  memset_plt_alt1(*(void**)(a2 + 272), nullptr, v70, v72),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  memset_plt_alt1(*(void**)(a2 + 280), nullptr, v70, v73),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v74 = *(_QWORD*)(a2 + 48);
  v75 = *(_QWORD*)(**(_QWORD**)a2 + 56LL);
  if (*(_BYTE*)(a2 + 833) != 1) {
    if (*(_BYTE*)(a2 + 833) != 0) {
      goto LABEL_40;
    }
    *(_QWORD*)(a2 + 568) = v74 + *(int*)(a2 + 504);
  }
  v76 = v74 + *(int*)(a2 + 500);
  v78 = v76 + 7;
  v77 = v76 < -7;
  v79 = v76 + 14;
  if (!v77) {
    v79 = v78;
  }
  *(_QWORD*)(a2 + 560) = v79 & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD*)(a2 + 720) = *(_QWORD*)(v75 + 240);
  v80 = *(int*)(a2 + 56);
  *(_QWORD*)(a2 + 728) = *(_QWORD*)(v75 + 248);
  *(_QWORD*)(a2 + 552) = *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16816LL) + v80;
  *(_QWORD*)(a2 + 712) = *(_QWORD*)(a2 + 32);
LABEL_40:
  *(_WORD*)(a2 + 840) = 0;
  result = fnt_Execute_plt(a2 + 256, *(_QWORD*)(a2 + 848),
                           *(_QWORD*)(a2 + 848) + *(int*)(v7 + 104), a2 + 544,
                           *(_QWORD*)(a1 + 128)),
  v71 = COERCE_AS(__typeof__(v71),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v82 = *(_BYTE*)(a2 + 672);
  *(_BYTE*)(a2 + 540) = 0;
  if ((v82 & 2) == 0) {
    v83 = *(_QWORD*)(a2 + 696);
    *(_QWORD*)(v4 + 32) = *(_QWORD*)(a2 + 688);
    *(_QWORD*)(v4 + 40) = v83;
    *(_DWORD*)(v4 + 48) = *(_DWORD*)(a2 + 704);
    v84 = *(_QWORD*)(a2 + 664);
    *(_QWORD*)v4 = *(_QWORD*)(a2 + 656);
    *(_QWORD*)(v4 + 8) = v84;
    v85 = *(_QWORD*)(a2 + 680);
    *(_QWORD*)(v4 + 16) = *(_QWORD*)(a2 + 672);
    *(_QWORD*)(v4 + 24) = v85;
  }
  return result;
}

#pragma GCC visibility pop
