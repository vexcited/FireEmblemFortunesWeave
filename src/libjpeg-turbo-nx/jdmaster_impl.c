#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 finish_output_pass();
__int64 memset_plt(void* this_, void*, int);
__int64 nndetailImageJpeg_jinit_1pass_quantizer_plt(_QWORD);
__int64 nndetailImageJpeg_jinit_2pass_quantizer_plt(_QWORD);
__int64 nndetailImageJpeg_jinit_color_deconverter_plt(_QWORD);
__int64 nndetailImageJpeg_jinit_d_coef_controller_plt(_QWORD, _QWORD);
__int64 nndetailImageJpeg_jinit_d_main_controller_plt(_QWORD, _QWORD);
__int64 nndetailImageJpeg_jinit_d_post_controller_plt(_QWORD, _QWORD);
__int64 nndetailImageJpeg_jinit_huff_decoder_plt(_QWORD);
__int64 nndetailImageJpeg_jinit_inverse_dct_plt(_QWORD);
__int64 nndetailImageJpeg_jinit_merged_upsampler_plt(_QWORD);
__int64 nndetailImageJpeg_jinit_phuff_decoder_plt(_QWORD);
__int64 nndetailImageJpeg_jinit_upsampler_plt(_QWORD);
__int64 nndetailImageJpeg_jpeg_calc_output_dimensions_plt(void);
__int64 prepare_for_output_pass();
__int64 use_merged_upsample(__int64);
__int64 nndetailImageJpeg_jinit_master_decompress(__int64 a1);

__int64 nndetailImageJpeg_jinit_master_decompress(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v6;
  unsigned __int64 v7;
  _BYTE* v8;
  char v9;
  __int64* v11;
  __int64 v12;
  __int64 v13;
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
  int v24;
  __int64 result;
  __int64 v26;
  int v27;
  int v28;
  int v29;
  int v30;

  v1 = *(_QWORD*)(a1 + 576);
  *(_QWORD*)v1 = prepare_for_output_pass;
  *(_QWORD*)(v1 + 8) = finish_output_pass;
  *(_DWORD*)(v1 + 16) = 0;
  *(_DWORD*)(v1 + 108) = 0;
  v3 = *(_QWORD*)(a1 + 576);
  nndetailImageJpeg_jpeg_calc_output_dimensions_plt();
  v4 = (_QWORD*)(**(__int64 (***)(__int64, __int64, __int64))(a1 + 8))(a1, 1,
                                                                       1408);
  v6 = v4;
  v7 = 0;
  *(_QWORD*)(a1 + 440) = v4 + 32;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  v4[8] = 0;
  v4[9] = 0;
  v4[10] = 0;
  v4[11] = 0;
  v4[12] = 0;
  v4[13] = 0;
  v4[14] = 0;
  v4[15] = 0;
  v4[16] = 0;
  v4[17] = 0;
  v4[18] = 0;
  v4[19] = 0;
  v4[20] = 0;
  v4[21] = 0;
  v4[22] = 0;
  v4[23] = 0;
  v4[24] = 0;
  v4[25] = 0;
  v4[26] = 0;
  v4[27] = 0;
  v4[28] = 0;
  v4[29] = 0;
  v4[30] = 0;
  v4[31] = 0;
  do {
    v8 = &v4[v7 / 8];
    v8[257] = v7 + 1;
    v8[256] = v7;
    v8[258] = v7 + 2;
    v8[259] = v7 + 3;
    v8[260] = v7 + 4;
    v8[261] = v7 + 5;
    v8[262] = v7 + 6;
    v8[263] = v7 + 7;
    v8[264] = v7 + 8;
    v8[265] = v7 + 9;
    v8[266] = v7 + 10;
    v8[267] = v7 + 11;
    v8[268] = v7 + 12;
    v8[269] = v7 + 13;
    v9 = v7 + 14;
    v7 += 16LL;
    v8[270] = v9;
    v8[271] = v9 + 1;
  } while (v7 != 256);
  memset_plt((void*)(v4 + 64), (char*)((_UNKNOWN*)0xFCLL) + 3, 384);
  memset_plt((void*)(v6 + 112), nullptr, 384);
  v11 = *(__int64**)(a1 + 440);
  v12 = *v11;
  v13 = v11[1];
  v14 = v11[2];
  v6[163] = v11[3];
  v6[162] = v14;
  v6[161] = v13;
  v6[160] = v12;
  v15 = v11[4];
  v16 = v11[5];
  v17 = v11[6];
  v6[167] = v11[7];
  v6[166] = v17;
  v6[165] = v16;
  v6[164] = v15;
  v18 = v11[8];
  v19 = v11[9];
  v20 = v11[10];
  v6[171] = v11[11];
  v6[170] = v20;
  v6[169] = v19;
  v6[168] = v18;
  v21 = v11[12];
  v22 = v11[13];
  v23 = v11[14];
  v6[175] = v11[15];
  v6[174] = v23;
  v6[173] = v22;
  v6[172] = v21;
  if ((*(int*)(a1 + 152) * (unsigned __int64)*(unsigned int*)(a1 + 144)) >>
          32 !=
      0) {
    *(_DWORD*)(*(_QWORD*)a1 + 40LL) = 72;
    (**(void (***)(__int64))a1)(a1);
  }
  *(_DWORD*)(v3 + 112) = 0;
  v24 = use_merged_upsample(a1);
  *(_QWORD*)(v3 + 120) = 0;
  *(_DWORD*)(v3 + 116) = v24;
  *(_QWORD*)(v3 + 128) = 0;
  if (*(_DWORD*)(a1 + 116) != 0) {
    if (*(_DWORD*)(a1 + 96) == 0) {
      *(_QWORD*)(a1 + 132) = 0;
      *(_DWORD*)(a1 + 140) = 0;
    }
    if (*(_DWORD*)(a1 + 100) != 0) {
      *(_DWORD*)(*(_QWORD*)a1 + 40LL) = 48;
      (**(void (***)(__int64))a1)(a1);
    }
    if (*(_DWORD*)(a1 + 152) == 3) {
      if (*(_QWORD*)(a1 + 168) != 0) {
        *(_DWORD*)(a1 + 136) = 1;
      }
      else if (*(_DWORD*)(a1 + 124) != 0) {
        *(_DWORD*)(a1 + 140) = 1;
      }
      else {
        *(_DWORD*)(a1 + 132) = 1;
      }
    }
    else {
      *(_DWORD*)(a1 + 140) = 0;
      *(_QWORD*)(a1 + 168) = 0;
      *(_QWORD*)(a1 + 132) = 1;
    }
    if (*(_DWORD*)(a1 + 132) != 0) {
      nndetailImageJpeg_jinit_1pass_quantizer_plt(a1);
      *(_QWORD*)(v3 + 120) = *(_QWORD*)(a1 + 656);
    }
    if (*(_DWORD*)(a1 + 140) != 0 || *(_DWORD*)(a1 + 136) != 0) {
      nndetailImageJpeg_jinit_2pass_quantizer_plt(a1);
      *(_QWORD*)(v3 + 128) = *(_QWORD*)(a1 + 656);
    }
  }
  else {
    *(_QWORD*)(a1 + 132) = 0;
    *(_DWORD*)(a1 + 140) = 0;
  }
  if (*(_DWORD*)(a1 + 100) != 0) {
    nndetailImageJpeg_jinit_inverse_dct_plt(a1);
    if (*(_DWORD*)(a1 + 328) != 0) {
      goto LABEL_22;
    }
  LABEL_28:
    if (*(_DWORD*)(a1 + 324) != 0) {
      nndetailImageJpeg_jinit_phuff_decoder_plt(a1);
      if (*(_DWORD*)(*(_QWORD*)(a1 + 608) + 32LL) == 0) {
        goto LABEL_44;
      }
    }
    else {
      nndetailImageJpeg_jinit_huff_decoder_plt(a1);
      if (*(_DWORD*)(*(_QWORD*)(a1 + 608) + 32LL) == 0) {
        goto LABEL_44;
      }
    }
    goto LABEL_30;
  }
  if (*(_DWORD*)(v3 + 116) != 0) {
    nndetailImageJpeg_jinit_merged_upsampler_plt(a1);
  }
  else {
    nndetailImageJpeg_jinit_color_deconverter_plt(a1);
    nndetailImageJpeg_jinit_upsampler_plt(a1);
  }
  nndetailImageJpeg_jinit_d_post_controller_plt(a1, *(unsigned int*)(a1 + 140));
  nndetailImageJpeg_jinit_inverse_dct_plt(a1);
  if (*(_DWORD*)(a1 + 328) == 0) {
    goto LABEL_28;
  }
LABEL_22:
  *(_DWORD*)(*(_QWORD*)a1 + 40LL) = 1;
  (**(void (***)(__int64))a1)(a1);
  if (*(_DWORD*)(*(_QWORD*)(a1 + 608) + 32LL) == 0) {
  LABEL_44:
    nndetailImageJpeg_jinit_d_coef_controller_plt(a1, *(_DWORD*)(a1 + 96) != 0);
    if (*(_DWORD*)(a1 + 100) != 0) {
      goto LABEL_32;
    }
    goto LABEL_31;
  }
LABEL_30:
  nndetailImageJpeg_jinit_d_coef_controller_plt(a1, 1);
  if (*(_DWORD*)(a1 + 100) == 0) {
  LABEL_31:
    nndetailImageJpeg_jinit_d_main_controller_plt(a1, 0);
  }
LABEL_32:
  (*(void (**)(__int64))(*(_QWORD*)(a1 + 8) + 48LL))(a1);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 608) + 16LL))(a1);
  *(_DWORD*)(*(_QWORD*)(a1 + 576) + 20LL) = 0;
  *(_DWORD*)(*(_QWORD*)(a1 + 576) + 24LL) = *(_DWORD*)(a1 + 488) - 1;
  v26 = *(_QWORD*)(a1 + 16);
  if (v26 != 0 && *(_DWORD*)(a1 + 96) == 0 &&
      *(_DWORD*)(*(_QWORD*)(a1 + 608) + 32LL) != 0) {
    v27 = *(_DWORD*)(a1 + 64);
    v28 = *(_DWORD*)(a1 + 324);
    *(_QWORD*)(v26 + 8) = 0;
    if (v28 != 0) {
      v29 = 3 * v27 + 2;
    }
    else {
      v29 = v27;
    }
    *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16LL) =
        v29 * (unsigned __int64)*(unsigned int*)(a1 + 432);
    *(_DWORD*)(*(_QWORD*)(a1 + 16) + 24LL) = 0;
    if (*(_DWORD*)(a1 + 140) != 0) {
      v30 = 3;
    }
    else {
      v30 = 2;
    }
    *(_DWORD*)(*(_QWORD*)(a1 + 16) + 28LL) = v30;
    ++*(_DWORD*)(v3 + 112);
  }
  return result;
}

#pragma GCC visibility pop
