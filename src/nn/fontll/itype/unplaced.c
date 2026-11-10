#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CACHE_ENTRY_free_plt(_QWORD, _QWORD);
__int64 FSS_calloc_plt(_QWORD, _QWORD);
__int64 FSS_delete_font_plt(_QWORD, _QWORD);
__int64 FSS_free_char_plt(void* this_, void*);
__int64 FSS_free_plt(_QWORD, _QWORD);
__int64 FSS_malloc_plt(_QWORD, _QWORD);
__int64 FsScratchSpace_done_plt(_QWORD, _QWORD);
__int64 LFNT_map_char_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 RoundFuncCall_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ScaleFuncCall_plt(_QWORD, _QWORD, _QWORD);
__int64 Soften_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 TYPESET_destroy_plt(_QWORD, _QWORD);
__int64 __term_heap_plt(_QWORD);
__int64 copy_graymap_plt(_QWORD, _QWORD);
__int64 delete_kern_plt(_QWORD, _QWORD);
__int64 delete_key_plt(_QWORD, _QWORD);
__int64 fix_fnt_plt(_QWORD, _QWORD);
__int64 free_plt(_QWORD);
__int64 fs__free_plt(_QWORD, _QWORD);
__int64 fs__malloc_plt(void);
__int64 fs_cff_args_41e2c0(__int64 result, int, unsigned __int8*, __int64);
__int64 fs_cff_args_41e840(__int64 result, int, __int64);
__int64 fsg_SetUpElement_plt(_QWORD, _QWORD, _QWORD);
__int64 fsg_WorkSpaceSetOffsets_plt(_QWORD, _QWORD);
__int64 get_ttf_table_info_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 kill_table_ptrs_plt(_QWORD);
__int64 load_fnt_plt(_QWORD, _QWORD);
__int64 longjmp_plt(_QWORD, _QWORD);
__int64 malloc_plt(_QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 memset_plt_alt1(void* this_, void*, int,
                        unsigned __int64) __asm__("memset_plt");
__int64 muldiv_64_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_fontll_itype_41c6f0_alt1(_QWORD,
                                    _QWORD) __asm__("nn_fontll_itype_41c6f0");
__int64 nn_fontll_itype_421360_alt1(__int64, __int64,
                                    __int64) __asm__("nn_fontll_itype_421360");
__int64 nn_fontll_itype_432db0();
__int64 nn_fontll_itype_432de0();
__int64 nn_fontll_itype_433570();
__int64 nn_fontll_itype_4335a0();
__int64 nn_fontll_itype_4335b0();
__int64 nn_fontll_itype_4336b0(_QWORD, _QWORD, _QWORD);
__int64 nn_fontll_itype_4337a0();
__int64 nn_fontll_itype_433860(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 outline_graymap_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 pixelbold_graymap2_plt(_QWORD, _QWORD);
__int64 pixelbold_graymap4_plt(_QWORD, _QWORD);
__int64 pixelbold_graymap8_plt(_QWORD, _QWORD);
__int64 strcmp_plt(void* this_, const char*, const char*);
__int64 strlen_plt(_QWORD);
__int64 ttf_read_buf_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ttf_read_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 unload_cff_plt(_QWORD, _QWORD);
__int64 unload_ttf_plt(_QWORD);
__int64 vardiv_64_plt(_QWORD, _QWORD, _QWORD);
__int64 varmul_64_plt(_QWORD, _QWORD, _QWORD);
extern _BYTE SdkData_bbb770[2];
extern _BYTE SdkData_bbfab8[4];
extern _BYTE SdkData_c1d94a[4];
extern _BYTE SdkData_c3c692[2];
extern _DWORD SdkData_bd11f8[2];
extern _DWORD SdkData_bd1440[4];
extern _DWORD SdkData_bd1550[33];
extern _DWORD SdkData_c3c1d8[32];
extern _UNKNOWN* SdkData_bb5b78;
extern _UNKNOWN SdkData_c3c4bc;
extern _UNKNOWN SdkData_c3c504;
extern _UNKNOWN SdkData_c3c664;
extern _UNKNOWN SdkData_c3c670;
extern _UNKNOWN SdkData_c3c678;
extern _UNKNOWN SdkData_c3c680;
extern _UNKNOWN SdkData_c3c688;
extern __int64 SdkData_e880d0;
extern __int64 SdkData_e880d8;
extern char SdkData_bbe698[16];
extern unsigned __int8 SdkData_c1d93e[4];
extern unsigned __int8 SdkData_c3c258[256];
extern unsigned __int8 SdkData_c3c690[2];
unsigned __int64
nn_fontll_itype_421200_alt1(unsigned __int8*,
                            _DWORD*) __asm__("nn_fontll_itype_421200");
__int64 FSS_exit(__int64 a1);
_DWORD* nn_fontll_itype_41be50(__int64 a1, _DWORD* a2);
__int64 nn_fontll_itype_41bea0(__int64 a1, char a2, char* a3, __int64 a4,
                               int a5, int a6, int a7);
__int64 nn_fontll_itype_41c200(__int64 a1, __int16* a2, unsigned __int16 a3,
                               unsigned int a4, _DWORD* a5, _DWORD* a6,
                               _DWORD* a7, int* a8);
__int64 __init_heap(__int64 a1, unsigned int a2, __int64 a3,
                    unsigned __int64 a4);
__int64 nn_fontll_itype_41c430(__int64 result, __int64 a2);
__int64 __term_heap(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4);
__int64 fs__free(__int64 a1, __int64 a2);
__int64 nn_fontll_itype_41c6f0(__int64 result, unsigned int* a2);
unsigned int* fs__malloc(__int64 a1, int a2);
__int64 fs__realloc(__int64 a1, __int64 a2, int a3);
__int64 trim_bitmap(void* a1, __int64 a2);
__int64 load_cff(__int64 a1, __int64 a2);
__int64 nn_fontll_itype_4210f0(__int64 a1, __int64 a2, __int64 a3, _WORD* a4);
unsigned __int8* nn_fontll_itype_421200(unsigned __int8* a1, _DWORD* a2);
__int16* nn_fontll_itype_421360(__int64 a1, __int64 a2, __int64 a3);
__int64 nn_fontll_itype_4216f0(__int64 a1, unsigned int a2);
__int64 nn_fontll_itype_421940(__int64 a1, unsigned int a2, unsigned int a3,
                               _DWORD* a4);
__int64 nn_fontll_itype_421b40(__int64 a1, unsigned int a2, unsigned int a3,
                               __int64 a4);
__int64 nn_fontll_itype_421c60(__int64 a1, unsigned int a2, unsigned int a3,
                               unsigned int a4, unsigned int a5,
                               unsigned int a6, unsigned int a7, __int64 a8);
__int64 nn_fontll_itype_422040(unsigned __int64* a1, int* a2, __int64 a3,
                               unsigned __int64 a4);
__int64 map_font(__int64 a1, unsigned __int16 a2, unsigned __int16 a3);
__int64 map_char(__int64 a1, unsigned int a2, unsigned int a3);
__int64 engrave_graymap(__int64 result);
__int64 emboss_graymap(__int64 result);
__int64 outline_graymap(void* a1, __int64 a2, unsigned __int16 a3, int a4);
__int64 soft_outline_graymap(__int64 a1, __int64 a2, __int64 a3, int a4);
__int64 Soften(void* a1, int a2, int a3, _WORD* a4);
_WORD* pixelbold_graymap2(__int64 a1, _WORD* a2);
_WORD* pixelbold_graymap4(__int64 a1, _WORD* a2);
_WORD* pixelbold_graymap8(__int64 a1, _WORD* a2);
__int64 pixelbold_embedded_graymap(void* a1, __int64 a2);
__int64 nn_fontll_itype_42ce60(__int64 result);
__int64 nn_fontll_itype_42ce90(__int64 result);
__int64 nn_fontll_itype_42cec0(__int64 result);
__int64 nn_fontll_itype_42cf40(__int64 result);
__int64 nn_fontll_itype_42cfa0(__int64 a1);
__int64 nn_fontll_itype_42d0a0(__int64 a1);
__int64 nn_fontll_itype_42d190(__int64 result);
__int64 nn_fontll_itype_42d220(__int64 result);
__int64 nn_fontll_itype_42d2a0(__int64 result);
__int64 nn_fontll_itype_42d2d0(__int64 result);
__int64 nn_fontll_itype_42d300(__int64 result);
__int64 nn_fontll_itype_42d320(__int64 result);
__int64 nn_fontll_itype_42d5c0(__int64 result);
__int64 nn_fontll_itype_42d620(__int64 result);
__int64 nn_fontll_itype_42d690(__int64 result);
__int64 nn_fontll_itype_42d710(__int64 result);
__int64 nn_fontll_itype_42d740(__int64 result);
__int64 nn_fontll_itype_42d7e0(__int64 result);
__int64 nn_fontll_itype_42d800(__int64 result);
__int64 nn_fontll_itype_42d820(__int64 result);
__int64 nn_fontll_itype_42d840(__int64 a1);
__int64 nn_fontll_itype_42d890(__int64 result);
__int64 nn_fontll_itype_42d8b0(__int64 result);
__int64 nn_fontll_itype_42d8c0(__int64 result);
__int64 nn_fontll_itype_42d8d0(__int64 result);
__int64 nn_fontll_itype_42d900(__int64 result);
__int64 nn_fontll_itype_42d9c0(_QWORD* a1);
__int64 nn_fontll_itype_42da70(__int64 result);
__int64 nn_fontll_itype_42dab0(__int64 result);
_QWORD* nn_fontll_itype_42db00(_QWORD* result);
_QWORD* nn_fontll_itype_42dbe0(_QWORD* result);
__int64 nn_fontll_itype_42dca0(__int64 result);
void __attribute__((noreturn)) nn_fontll_itype_42dd90(__int64 a1);
__int64 nn_fontll_itype_42ddb0(__int64 a1);
__int64 fnt_IUP(__int64 result);
__int64 nn_fontll_itype_42e2c0(__int64 a1);
__int64 nn_fontll_itype_42e480(__int64 a1);
__int64 nn_fontll_itype_42ed00(__int64 a1);
__int64 nn_fontll_itype_42f340(__int64 a1);
__int64 nn_fontll_itype_42f540(__int64 a1);
__int64 nn_fontll_itype_42f7f0(__int64 a1);
__int64 nn_fontll_itype_42f920(__int64 result);
__int64 nn_fontll_itype_42f9e0(__int64 a1);
__int64 nn_fontll_itype_42fb00(__int64 result);
__int64 nn_fontll_itype_42fbe0(__int64 result);

__int64 FSS_exit(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  unsigned int v12;
  bool v13;
  int v14;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  int v20;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  void* v30;
  __int64 v31;
  _QWORD* v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0) {
    do {
      if (*(_DWORD*)(v1 + 16) >= 2u) {
        *(_DWORD*)(v1 + 16) = 1;
      }
      v3 = *(_QWORD*)(v1 + 24);
      FSS_delete_font_plt(a1, *(_QWORD*)v1);
      v1 = v3;
    } while (v3 != 0);
  }
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  TYPESET_destroy_plt(a1, a1 + 16);
  v4 = 0;
  *(_DWORD*)(a1 + 72) = 0;
  do {
    v6 = *(_QWORD*)(a1 + 128);
    v7 = *(_QWORD*)(v6 + 8 * v4 + 48);
    if (v7 != 0) {
      do {
        v8 = *(_QWORD*)(v7 + 48);
        FSS_free_plt(a1, *(_QWORD*)(v7 + 16));
        CACHE_ENTRY_free_plt(a1, v7);
        v7 = v8;
      } while (v8 != 0);
      v6 = *(_QWORD*)(a1 + 128);
    }
    v5 = v6 + 8 * v4++;
    *(_QWORD*)(v5 + 48) = 0;
  } while (v4 != 1021);
  v9 = *(_QWORD**)(*(_QWORD*)(a1 + 128) + 8LL);
  while (v9 != nullptr) {
    v10 = v9;
    v9 = (_QWORD*)v9[36];
    if (*v10 != 0) {
      v11 = v10[5];
      if (v11 != 0) {
        v12 = *(unsigned __int8*)(*v10 + 65LL);
        v13 = v12 > 7;
        v14 = (1 << v12) & 0x83;
        if (v13 || v14 == 0) {
          FSS_free_plt(a1, *(_QWORD*)(v11 + 16));
        }
        else {
          delete_key_plt(a1, *(_QWORD*)(v11 + 16));
        }
        FSS_free_plt(a1, v10[5]);
      }
    }
    FSS_free_plt(a1, v10);
  }
  kill_table_ptrs_plt(a1);
  v16 = *(__int64**)(a1 + 128);
  v17 = v16[2];
  if (v17 != 0) {
    do {
      v18 = *(_QWORD*)(v17 + 80);
      delete_kern_plt(a1, v17);
      if (*(_QWORD*)(v17 + 56) != 0) {
        v19 = *(unsigned __int8*)(v17 + 65);
        v13 = v19 > 7;
        v20 = (1 << v19) & 0x83;
        if (!v13 && v20 != 0) {
          unload_ttf_plt(a1);
          v22 = *(_QWORD*)(v17 + 40);
          if (v22 != 0) {
            FSS_free_plt(a1, v22);
            *(_QWORD*)(v17 + 40) = 0;
          }
        }
        *(_QWORD*)(v17 + 56) = 0;
      }
      v23 = *(_QWORD*)(v17 + 40);
      if (v23 != 0) {
        FSS_free_plt(a1, v23);
      }
      FSS_free_plt(a1, *(_QWORD*)v17);
      FSS_free_plt(a1, *(_QWORD*)(v17 + 8));
      FSS_free_plt(a1, v17);
      v17 = v18;
    } while (v18 != 0);
    v16 = *(__int64**)(a1 + 128);
  }
  v24 = *v16;
  if (*v16 == 0) {
    if (*((int*)v16 + 4202) < 1) {
      goto LABEL_40;
    }
    goto LABEL_39;
  }
  do {
    v31 = *(_QWORD*)(v24 + 136);
    FSS_free_plt(a1, *(_QWORD*)v24);
    FSS_free_plt(a1, *(_QWORD*)(v24 + 8));
    v32 = *(_QWORD**)(v24 + 40);
    if (*(_WORD*)(v24 + 32) != 0) {
      v33 = 0;
      do {
        *v32 = 0;
        v32 += 9;
        ++v33;
      } while (v33 < *(unsigned __int16*)(v24 + 32));
      v32 = *(_QWORD**)(v24 + 40);
    }
    FSS_free_plt(a1, v32);
    v34 = *(_QWORD*)(v24 + 88);
    if (v34 != 0) {
      FSS_free_plt(a1, v34);
    }
    v35 = *(_QWORD*)(v24 + 96);
    if (v35 != 0) {
      FSS_free_plt(a1, v35);
    }
    v36 = *(_QWORD*)(v24 + 104);
    if (v36 != 0) {
      FSS_free_plt(a1, v36);
    }
    v37 = *(_QWORD*)(v24 + 112);
    if (v37 != 0) {
      FSS_free_plt(a1, v37);
    }
    FSS_free_plt(a1, v24);
    v24 = v31;
  } while (v31 != 0);
  v16 = *(__int64**)(a1 + 128);
  if (*((int*)v16 + 4202) >= 1) {
  LABEL_39:
    FSS_free_plt(a1, v16[2102]);
    *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16816LL) = 0;
    v16 = *(__int64**)(a1 + 128);
  }
LABEL_40:
  v25 = v16[2097];
  if (v25 != 0) {
    v26 = v16 + 2097;
    do {
      *v26 = *(_QWORD*)(v25 + 16);
      FSS_free_plt(a1, v25);
      v16 = *(__int64**)(a1 + 128);
      v25 = v16[2097];
      v26 = v16 + 2097;
    } while (v25 != 0);
  }
  v16[2098] = 0;
  v27 = *(_QWORD*)(a1 + 128);
  v28 = *(_QWORD*)(v27 + 16840);
  if (v28 != 0) {
    if (*(_DWORD*)(v28 + 14360) != 0) {
      FSS_free_plt(a1, *(_QWORD*)(v28 + 14344));
    }
    FSS_free_plt(a1, v28);
    v27 = *(_QWORD*)(a1 + 128);
  }
  FsScratchSpace_done_plt(v27 + 16792, a1);
  __term_heap_plt(a1);
  v30 = *(void**)(a1 + 128);
  if (*((_BYTE*)v30 + 16760) == 1) {
    free_plt(v30);
  }
  else {
    memset_plt(v30, nullptr, 16848);
  }
  *(_QWORD*)(a1 + 128) = 0;
  return 0;
}

_DWORD* nn_fontll_itype_41be50(__int64 a1, _DWORD* a2)
{
  _DWORD* result;

  *(_DWORD*)(a1 + 72) = 0;
  if (*a2 == 0) {
    return nullptr;
  }
  result = (_DWORD*)FSS_calloc_plt(a1, 8);
  if (result != nullptr) {
    *result = *a2;
    result[1] = a2[1];
  }
  return result;
}

__int64 nn_fontll_itype_41bea0(__int64 a1, char a2, char* a3, __int64 a4,
                               int a5, int a6, int a7)
{
  __int64 v14;
  __int64 v15;
  __int64 v16;
  void* v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  int v33;
  unsigned int v34;
  unsigned __int16 v35;
  unsigned __int16 v36;
  unsigned __int16 v37;
  __int64 v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;

  v14 = *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16LL);
  if (v14 == 0) {
  LABEL_22:
    v18 = FSS_calloc_plt(a1, 88);
    if (v18 == 0) {
      return 0;
    }
    v15 = v18;
    if (a3 != nullptr) {
      v19 = strlen_plt(a3);
      if (v19 == 0 ||
          (v20 = v19 + 1,
           (v21 = FSS_malloc_plt(a1, (unsigned int)(v19 + 1))) == 0)) {
      LABEL_62:
        FSS_free_plt(a1, v15);
        return 0;
      }
      v16 = v21;
      memcpy_plt(v21, a3, v20);
    }
    else {
      v16 = 0;
    }
  LABEL_28:
    *(_QWORD*)(v15 + 8) = v16;
    *(_QWORD*)(v15 + 16) = a4;
    *(_DWORD*)(v15 + 28) = a6;
    *(_DWORD*)(v15 + 32) = a7;
    *(_DWORD*)(v15 + 24) = a5;
    *(_BYTE*)(v15 + 65) = a2;
    if ((unsigned int)load_fnt_plt(a1, v15) != 0) {
    LABEL_60:
      v41 = *(_QWORD*)(v15 + 8);
      if (v41 != 0) {
        FSS_free_plt(a1, v41);
      }
      goto LABEL_62;
    }
    v22 = *(unsigned __int8*)(v15 + 65);
    if (v22 != 7 && v22 != 1) {
      if (*(_BYTE*)(v15 + 65) != 0) {
      LABEL_54:
        if (*(_QWORD*)(v15 + 56) != 0) {
          v39 = *(unsigned __int8*)(v15 + 65);
          if (v39 <= 7 && ((1 << v39) & 0x83) != 0) {
            unload_ttf_plt(a1);
            v40 = *(_QWORD*)(v15 + 40);
            if (v40 != 0) {
              FSS_free_plt(a1, v40);
              *(_QWORD*)(v15 + 40) = 0;
            }
          }
          *(_QWORD*)(v15 + 56) = 0;
        }
        goto LABEL_60;
      }
      if (*(_QWORD*)(*(_QWORD*)(v15 + 56) + 24LL) != 0) {
        *(_BYTE*)(v15 + 65) = 1;
      }
    }
    v23 = *(_QWORD*)(v15 + 56);
    v24 = *(_QWORD*)(v23 + 192);
    if (v24 != 0) {
      v25 = strlen_plt(*(_QWORD*)(v23 + 192));
      if (v25 != 0) {
        v26 = v25 + 1;
        v27 = FSS_malloc_plt(a1, (unsigned int)(v25 + 1));
        if (v27 != 0) {
          v28 = v26;
          v29 = v27;
          memcpy_plt(v27, v24, v28);
          *(_QWORD*)v15 = v29;
          *(_DWORD*)(v15 + 52) = 0;
          *(_BYTE*)(v15 + 64) = 0;
          *(_QWORD*)(v15 + 80) = *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16LL);
          *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16LL) = v15;
          v30 = *(unsigned __int8*)(v15 + 65);
          if (v30 <= 7 && ((1 << v30) & 0x83) != 0 &&
              *(_QWORD*)(v15 + 40) == 0) {
            v31 = *(_QWORD*)(v15 + 56);
            if (v31 != 0) {
              v32 = *(_QWORD*)(v31 + 72);
              if (v32 != 0) {
                v33 = 1;
                v34 = *(unsigned __int16*)(v32 + 4) / 0xAu;
                if (v34 <= 0x100) {
                  v34 = 256;
                }
                v35 = 1;
                do {
                  v36 = v35;
                  v35 = v33;
                  v33 *= 2;
                } while (v34 > v35);
                if ((int)(v34 - v36) >= (int)(v35 - v34)) {
                  v36 = v35;
                }
                if (v34 == v35) {
                  v37 = v34;
                }
                else {
                  v37 = v36;
                }
                v38 = FSS_calloc_plt(a1, 4 * (unsigned int)v37);
                if (v38 != 0) {
                  *(_QWORD*)(v15 + 40) = v38;
                  *(_WORD*)(v15 + 48) = v37 - 1;
                }
              }
            }
          }
          return v15;
        }
      }
    }
    goto LABEL_54;
  }
  if (a3 != nullptr) {
    while (1) {
      v17 = *(void**)(v14 + 8);
      if (v17 != nullptr && (unsigned int)strcmp_plt(v17, a3, a3) == 0 &&
          *(_DWORD*)(v14 + 28) == a6 && *(_DWORD*)(v14 + 32) == a7 &&
          (*(_BYTE*)(v14 + 65) != 1 || *(_DWORD*)(v14 + 24) == a5)) {
        break;
      }
      v14 = *(_QWORD*)(v14 + 80);
      if (v14 == 0) {
        goto LABEL_22;
      }
    }
  }
  else {
    if (a4 == 0) {
      v15 = FSS_calloc_plt(a1, 88);
      v16 = 0;
      v14 = 0;
      if (v15 == 0) {
        return v14;
      }
      goto LABEL_28;
    }
    while (*(_QWORD*)(v14 + 8) != 0 || *(_QWORD*)(v14 + 16) != a4 ||
           *(_DWORD*)(v14 + 28) != a6 || *(_DWORD*)(v14 + 32) != a7 ||
           *(_BYTE*)(v14 + 65) == 1 && *(_DWORD*)(v14 + 24) != a5) {
      v14 = *(_QWORD*)(v14 + 80);
      if (v14 == 0) {
        goto LABEL_22;
      }
    }
  }
  return v14;
}

__int64 nn_fontll_itype_41c200(__int64 a1, __int16* a2, unsigned __int16 a3,
                               unsigned int a4, _DWORD* a5, _DWORD* a6,
                               _DWORD* a7, int* a8)
{
  __int16 v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  __int64 result;

  if (a1 != 0 && (v12 = *(_WORD*)(a1 + 78), *(_DWORD*)(a1 + 76) != 0)) {
    v15 = v12;
    v13 = (unsigned int)*(__int16*)(a1 + 76);
    v17 = a2[4] + a2[2] - (v12 + (_DWORD)v13 + a2[3]);
    v14 = v17 & ~(v17 >> 31);
    v16 = 1;
  }
  else {
    v13 = (unsigned int)a2[2];
    LOWORD(v14) = a2[4];
    v15 = (__int16)-a2[3];
    v16 = 2;
  }
  *a8 = v16;
  *a5 = muldiv_64_plt(v13, a4, a3);
  *a6 = muldiv_64_plt(v15, a4, a3);
  result = muldiv_64_plt((unsigned int)(__int16)v14, a4, a3);
  *a7 = result;
  return result;
}

__int64 __init_heap(__int64 a1, unsigned int a2, __int64 a3,
                    unsigned __int64 a4)
{
  __int64 v5;
  unsigned int v9;
  __int64 v10;
  int v11;
  __int64 v12;

  if (a2 < 0x28) {
    return 201;
  }
  v5 = *(_QWORD*)(a1 + 128);
  memset_plt_alt1((void*)(v5 + 8224), nullptr, 8536, a4);
  v9 = (a2 + 7) & 0xFFFFFFF8;
  if (a3 != 0) {
    if (v9 > a2) {
      v9 = (v9 - 1) & 0xFFFFFFF8;
    }
    *(_BYTE*)(*(_QWORD*)(a1 + 128) + 16760LL) = 0;
    goto LABEL_9;
  }
  v10 = malloc_plt((a2 + 7) & 0xFFFFFFF8);
  *(_BYTE*)(*(_QWORD*)(a1 + 128) + 16760LL) = 1;
  if (v10 != 0) {
    a3 = v10;
  LABEL_9:
    *(_QWORD*)(v5 + 8224) = a3;
    *(_DWORD*)(v5 + 8232) = v9;
    *(_QWORD*)a3 = 0x300000003LL;
    *(_QWORD*)(v5 + 16744) = a3;
    *(_DWORD*)(a3 + 4LL * ((v9 >> 2) - 1)) = 3;
    *(_DWORD*)(a3 + 4LL * ((v9 >> 2) - 2)) = 3;
    *(_QWORD*)(v5 + 16752) = a3 + 4 * (v9 >> 2) - 8;
    v11 = (v9 >> 2) - 4;
    *(_DWORD*)(a3 + 4LL * ((v9 >> 2) - 3)) = v11;
    *(_DWORD*)(a3 + 8) = v11;
    v12 = a3 + 8;
    *(_QWORD*)(v12 + 8) = 0;
    *(_QWORD*)(v12 + 16) = 0;
    nn_fontll_itype_41c430(*(_QWORD*)(a1 + 128), v12);
    return 0;
  }
  return 201;
}

__int64 nn_fontll_itype_41c430(__int64 result, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64* v4;
  unsigned int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;

  if (a2 != 0) {
    v2 = *(_DWORD*)a2 & 0xFFFFFFFE;
    *(_DWORD*)a2 = v2;
    *(_DWORD*)(a2 + 4LL * (unsigned int)(v2 - 1)) &= ~1u;
    v3 = v2 - 6;
    *(_QWORD*)(a2 + 16) = 0;
    if (((v2 - 6) & 0x1FFFFF800LL) == 0) {
      v7 = (v3 >> 1) & 0x3FF;
      v8 = result + 8376;
      v9 = *(_QWORD*)(result + 8376 + 8 * v7);
      if (v9 == 0) {
        *(_QWORD*)(v8 + 8 * v7) = a2;
        v17 = (v3 >> 1) & 0x1F;
        *(_QWORD*)(a2 + 8) = a2;
        v18 = (v3 >> 4) & 0x7C;
        LODWORD(v17) = SdkData_c3c1d8[v17];
        v19 = *(_DWORD*)(result + v18 + 8236);
        *(_DWORD*)(result + 8364) |= *(_DWORD*)((char*)SdkData_c3c1d8 + v18);
        *(_DWORD*)(result + v18 + 8236) = v19 | v17;
        return result;
      }
      v10 = *(_QWORD*)(v9 + 8);
      *(_QWORD*)(v10 + 16) = a2;
      *(_QWORD*)(a2 + 8) = v10;
      v11 = *(_QWORD*)(v8 + 8 * v7);
      goto LABEL_15;
    }
    v4 = (__int64*)(result + 16568);
    if (v3 < 0x10000) {
      if (v3 >= 0x100) {
        v5 = SdkData_c3c258[v3 >> 8];
        if (v5 <= 4) {
          v6 = v5 | 0x10;
          goto LABEL_19;
        }
      }
    LABEL_13:
      v14 = 0;
      v15 = *v4;
      if (*v4 == 0) {
      LABEL_20:
        v4[v14] = a2;
        *(_QWORD*)(a2 + 8) = a2;
        *(_DWORD*)(result + 8368) |= SdkData_c3c1d8[v14];
        return result;
      }
      goto LABEL_14;
    }
    v12 = v3 >> 24;
    if (v3 >> 24 != 0) {
      if (SdkData_c3c258[v12] > 0x14u) {
        goto LABEL_13;
      }
      v6 = SdkData_c3c258[v12];
    }
    else {
      v13 = v3 >> 16;
      if (SdkData_c3c258[v13] > 0xCu) {
        goto LABEL_13;
      }
      v6 = SdkData_c3c258[v13] + 8;
    }
  LABEL_19:
    v14 = (unsigned int)(20 - v6);
    v15 = v4[v14];
    if (v15 == 0) {
      goto LABEL_20;
    }
  LABEL_14:
    v16 = *(_QWORD*)(v15 + 8);
    *(_QWORD*)(v16 + 16) = a2;
    *(_QWORD*)(a2 + 8) = v16;
    v11 = v4[v14];
  LABEL_15:
    *(_QWORD*)(v11 + 8) = a2;
  }
  return result;
}

__int64 __term_heap(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4;

  v4 = *(_QWORD*)(a1 + 128);
  if (*(_BYTE*)(v4 + 16760) == 1) {
    free_plt(*(_QWORD*)(v4 + 8224));
  }
  return memset_plt_alt1((void*)(v4 + 8224), nullptr, 8536, a4);
}

__int64 fs__free(__int64 a1, __int64 a2)
{
  int v2;
  _DWORD* v3;
  __int64 result;
  int v5;
  __int64 v6;
  unsigned int v7;
  unsigned int v9;
  int* v10;
  int v11;
  int v12;

  v3 = (_DWORD*)(a2 - 8);
  v2 = *(_DWORD*)(a2 - 8);
  if ((v2 & 1) == 0) {
    return 0;
  }
  v5 = *(_DWORD*)(a1 + 72);
  v6 = *(unsigned int*)(a2 - 12);
  v7 = v2 & 0xFFFFFFFE;
  if ((v6 & 1) != 0) {
    v9 = v2 & 0xFFFFFFFE;
    v10 = &v3[v7];
    v11 = *v10;
    if ((*v10 & 1) != 0) {
    LABEL_11:
      nn_fontll_itype_41c430(*(_QWORD*)(a1 + 128), (__int64)v3);
      *(_DWORD*)(*(_QWORD*)(a1 + 128) + 8220LL) -= 4 * v7;
      *(_DWORD*)(a1 + 72) = v5;
      return 0;
    }
  }
  else {
    v3 -= v6;
    nn_fontll_itype_41c6f0_alt1(a1, v3);
    result = *(unsigned int*)(a1 + 72);
    if ((_DWORD)result != 0) {
      return result;
    }
    v9 = v6 + v7;
    v3[v9 - 1] = v9 | 1;
    *v3 = v9 | 1;
    v10 = &v3[v9];
    v11 = *v10;
    if ((*v10 & 1) != 0) {
      goto LABEL_11;
    }
  }
  nn_fontll_itype_41c6f0_alt1(a1, v10);
  result = *(unsigned int*)(a1 + 72);
  if ((_DWORD)result == 0) {
    v12 = (v11 + v9) | 1;
    v3[v11 - 1 + v9] = v12;
    *v3 = v12;
    goto LABEL_11;
  }
  return result;
}

__int64 nn_fontll_itype_41c6f0(__int64 result, unsigned int* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned int v5;
  int v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;

  v2 = *(_QWORD*)(result + 128);
  v3 = *a2 - 6LL;
  v4 = v3 >> 1;
  if ((unsigned int)(v3 >> 1) >= 0x400) {
    if (v3 < 0x10000) {
      if (v3 >= 0x100) {
        v5 = SdkData_c3c258[v3 >> 8];
        if (v5 <= 4) {
          v6 = v5 | 0x10;
          goto LABEL_26;
        }
      }
    LABEL_19:
      v7 = 0;
      v8 = v2 + 16568;
      v9 = *(_QWORD*)(v2 + 16568);
      if (v9 == 0) {
        goto LABEL_27;
      }
      goto LABEL_7;
    }
    v13 = v3 >> 24;
    if (v3 >> 24 != 0) {
      if (SdkData_c3c258[v13] > 0x14u) {
        goto LABEL_19;
      }
      v6 = SdkData_c3c258[v13];
    }
    else {
      v14 = v3 >> 16;
      if (SdkData_c3c258[v14] > 0xCu) {
        goto LABEL_19;
      }
      v6 = SdkData_c3c258[v14] + 8;
    }
  LABEL_26:
    v7 = 20 - v6;
    v8 = v2 + 16568;
    v9 = *(_QWORD*)(v2 + 16568 + 8LL * v7);
    if (v9 == 0) {
      goto LABEL_27;
    }
    goto LABEL_7;
  }
  v7 = v3 >> 1;
  v8 = v2 + 8376;
  v9 = *(_QWORD*)(v2 + 8376 + 8LL * (unsigned int)v4);
  if (v9 == 0) {
  LABEL_27:
    *(_DWORD*)(result + 72) = 214;
    return result;
  }
LABEL_7:
  v10 = *(_QWORD*)(v9 + 16);
  if (v10 != 0) {
    v11 = *(_QWORD*)(v9 + 8);
    if (a2 == (unsigned int*)v9) {
      *(_QWORD*)(v8 + 8LL * v7) = v10;
      *(_QWORD*)(v10 + 8) = v11;
      *(_DWORD*)(result + 72) = 0;
    }
    else {
      if (a2 == (unsigned int*)v11) {
        v17 = *(_QWORD*)(v11 + 8);
        *(_QWORD*)(v9 + 8) = v17;
        *(_QWORD*)(v17 + 16) = 0;
      }
      else {
        v12 = *((_QWORD*)a2 + 2);
        *(_QWORD*)(*((_QWORD*)a2 + 1) + 16LL) = v12;
        *(_QWORD*)(v12 + 8) = *((_QWORD*)a2 + 1);
      }
      *(_DWORD*)(result + 72) = 0;
    }
  }
  else {
    *(_QWORD*)(v8 + 8LL * v7) = 0;
    if ((unsigned int)v4 <= 0x3FF) {
      v15 = v2 + 4LL * (v7 >> 5);
      v16 = *(_DWORD*)(v15 + 8236) & ~SdkData_c3c1d8[v7 & 0x1F];
      *(_DWORD*)(v15 + 8236) = v16;
      if (v16 == 0) {
        *(_DWORD*)(v2 + 8364) &= ~SdkData_c3c1d8[v7 >> 5];
      }
      *(_DWORD*)(result + 72) = 0;
    }
    else {
      *(_DWORD*)(v2 + 8368) &= ~SdkData_c3c1d8[v7];
      *(_DWORD*)(result + 72) = 0;
    }
  }
  return result;
}

unsigned int* fs__malloc(__int64 a1, int a2)
{
  __int64 v2;
  unsigned int v3;
  __int64 v5;
  int* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  unsigned int* v14;
  int v15;
  unsigned int v16;
  _DWORD* v17;
  unsigned int v18;
  bool v19;
  unsigned int v20;
  unsigned __int64 v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  unsigned int v26;
  __int64 v27;
  unsigned __int64 v28;
  int v29;
  unsigned int* result;
  unsigned int v31;
  unsigned int v32;
  int v33;
  int v34;
  unsigned int* v35;
  __int64 v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  unsigned int* v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  int v51;
  unsigned int* v52;
  unsigned int* v53;
  unsigned int* v54;
  unsigned int v55;
  unsigned int v56;
  int v57;

  v2 = *(_QWORD*)(a1 + 128);
  v3 = a2 + 23;
  if ((unsigned int)(a2 + 23) <= 0x20) {
    v3 = 32;
  }
  v5 = v3 >> 2;
  v6 = *(int**)(v2 + 16736);
  *(_DWORD*)(a1 + 72) = 0;
  v7 = v5 + 0x1FFFFFFFALL;
  v8 = (unsigned __int64)(v5 + 0x1FFFFFFFALL) >> 1;
  if (v6 != nullptr) {
    v9 = *v6 & 0xFFFFFFFE;
    v10 = v5 & 0x3FFFFFFE;
    v11 = v2;
    if ((unsigned int)v8 <= 0x3FF) {
      goto LABEL_5;
    }
  LABEL_13:
    v17 = *(_DWORD**)(v11 + 16736);
    if (v17 == nullptr) {
      goto LABEL_47;
    }
    goto LABEL_14;
  }
  v9 = 0;
  v10 = v5 & 0x3FFFFFFE;
  v11 = v2;
  if ((unsigned int)v8 > 0x3FF) {
    goto LABEL_13;
  }
LABEL_5:
  v12 = 1023 - v8;
  v13 = v2 + 8376 + 8 * ((v7 >> 1) & 0x3FF);
  v14 = *(unsigned int**)v13;
  if ((unsigned int)(1023 - v8) >= 3) {
    v12 = 3;
  }
  if (v14 != nullptr) {
    v15 = 0;
  LABEL_9:
    nn_fontll_itype_41c6f0(a1, v14);
    if (*(_DWORD*)(a1 + 72) != 0) {
      return nullptr;
    }
    v16 = v15 + v10;
    goto LABEL_11;
  }
  if ((_DWORD)v8 != 1023) {
    v14 = *(unsigned int**)(v13 + 8);
    if (v14 != nullptr) {
      v15 = 2;
      goto LABEL_9;
    }
    v34 = v12 + 1;
    if (v34 != 2) {
      v14 = *(unsigned int**)(v13 + 16);
      if (v14 != nullptr) {
        v15 = 4;
        goto LABEL_9;
      }
      if (v34 != 3) {
        v14 = *(unsigned int**)(v13 + 24);
        if (v14 != nullptr) {
          v15 = 6;
          goto LABEL_9;
        }
      }
    }
  }
  v24 = v9 - v10;
  if (v9 >= (unsigned int)v10) {
    result = (unsigned int*)(v6 + 2);
    if (v24 >= 8) {
      v31 = v10;
    }
    else {
      v31 = v9;
    }
    v32 = v31 - 1;
    v33 = v31 | 1;
    v6[v32] = v33;
    *v6 = v33;
    if (v24 >= 8) {
      v35 = (unsigned int*)&v6[(unsigned int)v10];
    LABEL_39:
      v35[v24 - 1] = v24 | 1;
      *v35 = v24 | 1;
      *(_QWORD*)(v2 + 16736) = v35;
      goto LABEL_89;
    }
    *(_QWORD*)(v2 + 16736) = 0;
  LABEL_89:
    *(_DWORD*)(*(_QWORD*)(a1 + 128) + 8220LL) += 8 * (*(result - 2) >> 1);
    return result;
  }
  if (v6 != nullptr) {
    v25 = *(_DWORD*)(v2 + 8220);
    *(_QWORD*)(v2 + 16736) = 0;
    *(_DWORD*)(v2 + 8220) = v25 + 4 * v9;
    fs__free_plt(a1, v6 + 2);
  }
  v26 = (unsigned int)v8 >> 5;
  v27 = (unsigned int)(SdkData_bd1550[(v7 >> 1) & 0x1F] &
                       *(_DWORD*)(v2 + 8236 + 4LL * ((unsigned int)v8 >> 5)));
  if ((_DWORD)v27 != 0) {
    v28 = (unsigned int)v27;
    if ((unsigned int)v27 < 0x10000) {
      if ((unsigned int)v27 < 0x100) {
        v29 = SdkData_c3c258[v27];
      LABEL_104:
        v37 = v29 + 24;
        goto LABEL_108;
      }
    LABEL_105:
      v37 = SdkData_c3c258[v28 >> 8] + 16;
      goto LABEL_108;
    }
    if (BYTE3(v27) == 0) {
      goto LABEL_45;
    }
    goto LABEL_107;
  }
  v36 = (unsigned int)(SdkData_bd1550[v26 + 1] & *(_DWORD*)(v2 + 8364));
  if ((_DWORD)v36 != 0) {
    if ((unsigned int)v36 >= 0x10000) {
      if (BYTE3(v36) != 0) {
        v26 = SdkData_c3c258[(unsigned __int64)(unsigned int)v36 >> 24];
      }
      else {
        v26 = SdkData_c3c258[(unsigned __int64)(unsigned int)v36 >> 16] + 8;
      }
    }
    else if ((unsigned int)v36 >= 0x100) {
      v26 = SdkData_c3c258[(unsigned __int64)(unsigned int)v36 >> 8] + 16;
    }
    else {
      v26 = SdkData_c3c258[v36] + 24;
    }
    v28 = *(unsigned int*)(v2 + 8236 + 4LL * v26);
    if ((unsigned int)v28 < 0x10000) {
      if ((unsigned int)v28 < 0x100) {
        v29 = SdkData_c3c258[v28];
        goto LABEL_104;
      }
      goto LABEL_105;
    }
    if (BYTE3(v28) == 0) {
    LABEL_45:
      v37 = SdkData_c3c258[v28 >> 16] + 8;
      goto LABEL_108;
    }
  LABEL_107:
    v37 = SdkData_c3c258[v28 >> 24];
  LABEL_108:
    v54 = *(unsigned int**)(v2 + 8376 + 8LL * (v37 | (32 * v26)));
    nn_fontll_itype_41c6f0(a1, v54);
    if (*(_DWORD*)(a1 + 72) != 0) {
      return nullptr;
    }
    v55 = *v54;
    v24 = *v54 - v10;
    if (*v54 < (unsigned int)v10) {
      *(_DWORD*)(a1 + 72) = 214;
      return nullptr;
    }
    result = v54 + 2;
    if (v24 >= 8) {
      v55 = v10;
    }
    v56 = v55 - 1;
    v57 = v55 | 1;
    v54[v56] = v57;
    *v54 = v57;
    if (v24 >= 8) {
      v35 = &v54[(unsigned int)v10];
      goto LABEL_39;
    }
    goto LABEL_89;
  }
  v11 = *(_QWORD*)(a1 + 128);
  v17 = *(_DWORD**)(v11 + 16736);
  if (v17 == nullptr) {
  LABEL_47:
    v20 = -1;
    v21 = v10 - 6;
    if ((unsigned __int64)(v10 - 6) >= 0x10000) {
      goto LABEL_48;
    }
  LABEL_17:
    if (v21 >= 0x100) {
      v22 = SdkData_c3c258[v21 >> 8];
      if (v22 <= 4) {
        v23 = v22 | 0x10;
        goto LABEL_54;
      }
    }
    goto LABEL_52;
  }
LABEL_14:
  v18 = *v17 & 0xFFFFFFFE;
  v19 = v18 >= (unsigned int)v10;
  v20 = v18 - v10;
  if (!v19) {
    v20 = -1;
  }
  v21 = v10 - 6;
  if ((unsigned __int64)(v10 - 6) < 0x10000) {
    goto LABEL_17;
  }
LABEL_48:
  if (v21 >> 24 == 0) {
    v38 = SdkData_c3c258[v21 >> 16];
    if (v38 <= 0xC) {
      v23 = v38 + 8;
      goto LABEL_54;
    }
  LABEL_52:
    v39 = *(_DWORD*)(v11 + 8368);
    v40 = v39;
    if (v39 == 0) {
      goto LABEL_79;
    }
    goto LABEL_55;
  }
  v23 = SdkData_c3c258[v21 >> 24];
  if (v23 > 0x14) {
    goto LABEL_52;
  }
LABEL_54:
  v40 = (unsigned int)(*(_DWORD*)(v11 + 8368) & SdkData_bd1550[20LL - v23]);
  if ((_DWORD)v40 == 0) {
    goto LABEL_79;
  }
LABEL_55:
  v41 = v11 + 16568;
  while (v40 < 0x10000) {
    if (v40 >= 0x100) {
      v42 = SdkData_c3c258[v40 >> 8] + 16LL;
      v43 = *(_QWORD*)(v41 + 8 * v42);
      if (v43 != 0) {
        goto LABEL_67;
      }
    }
    else {
      v42 = SdkData_c3c258[v40] + 24LL;
      v43 = *(_QWORD*)(v41 + 8 * v42);
      if (v43 != 0) {
        goto LABEL_67;
      }
    }
  LABEL_56:
    v40 &= (unsigned int)SdkData_c3c1d8[v42] ^ 0xFFFFFFFFLL;
    if (v40 == 0) {
      goto LABEL_79;
    }
  }
  if (v40 >> 24 == 0) {
    v42 = SdkData_c3c258[v40 >> 16] + 8LL;
    v43 = *(_QWORD*)(v41 + 8 * v42);
    if (v43 != 0) {
      goto LABEL_67;
    }
    goto LABEL_56;
  }
  v42 = SdkData_c3c258[v40 >> 24];
  v43 = *(_QWORD*)(v41 + 8 * v42);
  if (v43 == 0) {
    goto LABEL_56;
  }
LABEL_67:
  v44 = -1;
  v14 = nullptr;
  do {
    v45 = *(_DWORD*)v43;
    v46 = *(_DWORD*)v43 - v10;
    if (v46 >= v44) {
      v47 = v14;
    }
    else {
      v47 = (unsigned int*)v43;
    }
    v43 = *(_QWORD*)(v43 + 16);
    if (v46 >= v44) {
      v46 = v44;
    }
    if (v45 >= (unsigned int)v10) {
      v44 = v46;
      v14 = v47;
    }
  } while (v43 != 0);
  if (v14 == nullptr) {
    goto LABEL_56;
  }
  if (v44 < v20) {
    nn_fontll_itype_41c6f0(a1, v14);
    if (*(_DWORD*)(a1 + 72) == 0) {
      if (v44 > 7) {
        v53 = &v14[v10];
        v14[(unsigned int)v10 - 1] = v5 | 1;
        *v14 = v5 | 1;
        v53[v44 - 1] = v44 | 1;
        *v53 = v44 | 1;
        nn_fontll_itype_41c430(*(_QWORD*)(a1 + 128), (__int64)v53);
        goto LABEL_88;
      }
      v16 = *v14;
    LABEL_11:
      v14[v16 - 1] = v16 | 1;
      *v14 = v16 | 1;
    LABEL_88:
      result = v14 + 2;
      goto LABEL_89;
    }
  }
LABEL_79:
  v48 = v9 - v10;
  if (v9 >= (unsigned int)v10) {
    if (v48 >= 8) {
      v49 = v10;
    }
    else {
      v49 = v9;
    }
    v50 = v49 - 1;
    v51 = v49 | 1;
    v6[v50] = v51;
    *v6 = v51;
    if (v48 >= 8) {
      v52 = (unsigned int*)&v6[(unsigned int)v10];
      v14 = (unsigned int*)v6;
      v52[v48 - 1] = v48 | 1;
      *v52 = v48 | 1;
      *(_QWORD*)(v2 + 16736) = v52;
    }
    else {
      *(_QWORD*)(v2 + 16736) = 0;
      v14 = (unsigned int*)v6;
    }
    goto LABEL_88;
  }
  if (*(_DWORD*)(a1 + 72) != 0) {
    return nullptr;
  }
  *(_DWORD*)(a1 + 72) = 201;
  return nullptr;
}

__int64 fs__realloc(__int64 a1, __int64 a2, int a3)
{
  int v3;
  unsigned int* v4;
  __int64 v6;
  __int64 v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int* v11;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  __int64 v17;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int v23;
  __int64 v24;
  unsigned int v26;
  unsigned int* v27;

  *(_DWORD*)(a1 + 72) = 0;
  if (a2 == 0) {
    return fs__malloc_plt();
  }
  if (a3 == 0) {
    ((void (*)(void))fs__free_plt)();
    return 0;
  }
  v4 = (unsigned int*)(a2 - 8);
  v3 = *(_DWORD*)(a2 - 8);
  if ((v3 & 1) != 0) {
    v6 = v3 & 0xFFFFFFFE;
    v7 = 4 * (v3 & 0xFFFFFFFE) - 16;
    v8 = a3 + 23;
    if ((unsigned int)(a3 + 23) <= 0x20) {
      v8 = 32;
    }
    v9 = (v8 & 0xFFFFFFF8) >> 2;
    v10 = v6 - v9;
    if ((_DWORD)v6 == v9) {
      return a2;
    }
    if ((unsigned int)v6 > v9) {
      if (v10 >= 8) {
        v11 = &v4[v9];
        *(v11 - 1) = v9 | 1;
        *v4 = v9 | 1;
        *v11 = v10;
        v13 = a2;
        v11[v10 - 1] = v10;
        nn_fontll_itype_41c430(*(_QWORD*)(a1 + 128), (__int64)v11);
        a2 = v13;
        *(_DWORD*)(*(_QWORD*)(a1 + 128) + 8220LL) -= 4 * v10;
      }
      return a2;
    }
    if ((*(_DWORD*)(a2 - 12) & 1) != 0) {
      v14 = 0;
    }
    else {
      v14 = *(_DWORD*)(a2 - 12);
    }
    if ((v4[v6] & 1) != 0) {
      v15 = 0;
    }
    else {
      v15 = v4[v6];
    }
    v16 = v15 + v6;
    if (v15 + (unsigned int)v6 >= v9) {
      v21 = a1;
      nn_fontll_itype_41c6f0(a1, &v4[v6]);
      if (*(_DWORD*)(v21 + 72) != 0) {
        return 0;
      }
    }
    else {
      v16 = v14 + v6;
      if (v14 + (unsigned int)v6 >= v9) {
        v4 -= v14;
        v24 = a2;
        nn_fontll_itype_41c6f0(a1, v4);
        if (*(_DWORD*)(a1 + 72) != 0) {
          return 0;
        }
        memmove_plt(v4 + 2, v24, v7);
        v22 = v16 | 1;
        v23 = v16 - 1;
        v21 = a1;
        v15 = v14;
      LABEL_28:
        v4[v23] = v22;
        *v4 = v22;
        v26 = v16 - v9;
        *(_DWORD*)(*(_QWORD*)(v21 + 128) + 8220LL) += 4 * v15;
        if (v16 - v9 >= 8) {
          v27 = &v4[v9];
          *(v27 - 1) = v9 | 1;
          *v4 = v9 | 1;
          v27[v26 - 1] = v26;
          *v27 = v26;
          nn_fontll_itype_41c430(*(_QWORD*)(v21 + 128), (__int64)v27);
          *(_DWORD*)(*(_QWORD*)(v21 + 128) + 8220LL) -= 4 * v26;
        }
        return (__int64)(v4 + 2);
      }
      v17 = a2;
      if (v16 + v15 < v9) {
        v19 = fs__malloc_plt();
        if (v19 != 0) {
          v20 = v19;
          memcpy_plt(v19, v17, v7);
          fs__free_plt(a1, v17);
          return v20;
        }
        return 0;
      }
      nn_fontll_itype_41c6f0(a1, &v4[v6]);
      if (*(_DWORD*)(a1 + 72) != 0) {
        return 0;
      }
      v4 -= v14;
      nn_fontll_itype_41c6f0(a1, v4);
      if (*(_DWORD*)(a1 + 72) != 0) {
        return 0;
      }
      v15 += v14;
      v16 = v15 + v6;
      memmove_plt(v4 + 2, v17, v7);
      v21 = a1;
    }
    v22 = v16 | 1;
    v23 = v16 - 1;
    goto LABEL_28;
  }
  a2 = 0;
  *(_DWORD*)(a1 + 72) = 213;
  return a2;
}

__int64 trim_bitmap(void* a1, __int64 a2)
{
  int v2;
  __int64 v5;
  __int16 v6;
  int v7;
  __int16 v8;
  __int16 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int16 v13;
  __int64 v14;
  __int64 v15;
  __int16 v16;
  __int16 v17;
  unsigned int v18;
  int v19;
  __int64 v20;
  int v21;
  _BYTE* v22;
  __int16 v23;
  int v24;
  _BYTE* v25;
  __int64 v26;
  unsigned int v27;
  bool v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int16 v32;
  _BYTE* v33;
  char v34;
  int v35;
  char v36;
  __int16 v37;
  __int64 v38;
  __int64 v39;
  _BYTE* v40;
  _BYTE* v41;
  unsigned int v42;
  int v43;
  unsigned int v44;
  int v45;
  int v46;
  __int64 v47;
  int v48;
  int v49;
  __int64 v50;
  int v51;
  __int64 v52;
  int v53;

  if (a2 != 0) {
    v2 = *(__int16*)(a2 + 30);
    if (*(_WORD*)(a2 + 30) == 0) {
      v6 = 0;
    LABEL_13:
      v8 = 0;
      v12 = *(unsigned __int16*)(a2 + 28);
      if (*(_WORD*)(a2 + 28) == 0) {
        goto LABEL_51;
      }
      goto LABEL_32;
    }
    v5 = (unsigned int)*(__int16*)(a2 + 32);
    v6 = *(_WORD*)(a2 + 30);
    v7 = *(__int16*)(a2 + 32);
    if ((int)v5 < 1) {
      if (*(_WORD*)(a2 + 32) == 0) {
        v16 = *(_WORD*)(a2 + 14);
        v8 = 0;
        *(_WORD*)(a2 + 30) = 0;
        *(_WORD*)(a2 + 14) = v16 - v6;
        v12 = *(unsigned __int16*)(a2 + 28);
        if (*(_WORD*)(a2 + 28) == 0) {
        LABEL_51:
          v19 = 0;
          goto LABEL_52;
        }
      LABEL_32:
        v17 = *(_WORD*)(a2 + 32);
        v18 = 128;
        v19 = v12;
        while (1) {
          v20 = a2 + 40 + v17 * (__int64)v6;
          if (v8 < 1) {
            v21 = 0;
          }
          else {
            v21 = 0;
            v22 = (_BYTE*)(a2 + 40 + v17 * (__int64)v6);
            while ((*v22 & (unsigned __int8)v18) == 0) {
              v22 += v17;
              if (v8 == ++v21) {
                goto LABEL_41;
              }
            }
          }
          if (v21 != v8) {
            break;
          }
        LABEL_41:
          v23 = *(_WORD*)(a2 + 12);
          *(_WORD*)(a2 + 28) = --v19;
          *(_WORD*)(a2 + 12) = v23 + 1;
          if (v18 > 1) {
            v18 >>= 1;
            if ((_WORD)v19 == 0) {
              goto LABEL_51;
            }
          }
          else {
            if (v8 >= 1) {
              v24 = 0;
              do {
                if (v17 >= 2) {
                  v25 = (_BYTE*)(v20 + 1);
                  v26 = 1;
                  do {
                    ++v26;
                    *(v25 - 1) = *v25;
                    ++v25;
                  } while (v26 < *(__int16*)(a2 + 32));
                  v17 = *(_WORD*)(a2 + 32);
                }
                ++v24;
                *(_BYTE*)(v20 + v17 - 1) = 0;
                v17 = *(_WORD*)(a2 + 32);
                v20 += v17;
              } while (v24 < *(__int16*)(a2 + 30));
              v8 = *(_WORD*)(a2 + 30);
              v19 = *(unsigned __int16*)(a2 + 28);
            }
            v18 = 128;
            if ((_WORD)v19 == 0) {
              goto LABEL_51;
            }
          }
        }
      LABEL_52:
        v27 = v12 - v19 -
              ((v12 - v19 + (((unsigned int)(__int16)(v12 - v19) >> 28) & 7)) &
               0xFFFFFFF8);
        v28 = (_WORD)v27 == 0 || v8 < 1;
        if (v28) {
          if ((_WORD)v19 == 0) {
            goto LABEL_73;
          }
        }
        else {
          v34 = v27;
          v35 = 0;
          v36 = 8 - v27;
          v37 = *(_WORD*)(a2 + 32);
          v38 = a2 + v37 * (__int64)v6 + 40;
          do {
            if (v37 >= 2) {
              v39 = 1;
              v40 = (_BYTE*)v38;
              v41 = (_BYTE*)v38;
              do {
                v42 = (unsigned __int8)*++v41;
                ++v39;
                *v40 = (v42 >> v36) | ((unsigned __int8)*v40 << v34);
                v40 = v41;
              } while (v39 < *(__int16*)(a2 + 32));
              v37 = *(_WORD*)(a2 + 32);
            }
            ++v35;
            *(_BYTE*)(v38 + v37 - 1) = *(unsigned __int8*)(v38 + v37 - 1)
                                       << v34;
            v37 = *(_WORD*)(a2 + 32);
            v38 += v37;
          } while (v35 < *(__int16*)(a2 + 30));
          LOWORD(v19) = *(_WORD*)(a2 + 28);
          v8 = *(_WORD*)(a2 + 30);
          if ((_WORD)v19 == 0) {
          LABEL_73:
            v43 = 0;
            v44 = 40;
            if (*(_DWORD*)(a2 + 8) == 40) {
              goto LABEL_82;
            }
            goto LABEL_79;
          }
        }
        v29 = *(__int16*)(a2 + 32);
        v30 = SdkData_e880d0;
        while (1) {
          v32 = v19 - 1;
          if (v8 < 1) {
            v31 = 0;
          }
          else {
            v31 = 0;
            v33 = (_BYTE*)(a2 + v29 * v6 + 40 +
                           ((((__int16)v19 << 13) - 0x2000) >> 16));
            while ((*v33 & *(_BYTE*)(v30 + (v32 & 7))) == 0) {
              v33 += v29;
              if (v8 == ++v31) {
                goto LABEL_61;
              }
            }
          }
          if (v31 != v8) {
            break;
          }
        LABEL_61:
          *(_WORD*)(a2 + 28) = v32;
          LOWORD(v19) = v19 - 1;
          if (v32 == 0) {
            LOWORD(v19) = 0;
            break;
          }
        }
        v45 = (__int16)v19 + 7;
        v28 = (__int16)v19 < -7;
        v46 = (__int16)v19 + 14;
        if (!v28) {
          v46 = v45;
        }
        v43 = v46 >> 3;
        v44 = (v46 >> 3) * v8 + 40;
        if (v44 == *(_DWORD*)(a2 + 8)) {
          goto LABEL_82;
        }
      LABEL_79:
        v47 = FSS_calloc_plt(a1, v44);
        if (v47 != 0) {
          *(_DWORD*)(v47 + 8) = v44;
          v11 = v47;
          *(_WORD*)(v47 + 12) = *(_WORD*)(a2 + 12);
          *(_WORD*)(v47 + 14) = *(_WORD*)(a2 + 14);
          *(_WORD*)(v47 + 28) = *(_WORD*)(a2 + 28);
          v48 = *(__int16*)(a2 + 30);
          *(_WORD*)(v47 + 32) = v43;
          *(_WORD*)(v47 + 30) = v48;
          *(_WORD*)(v47 + 16) = *(_WORD*)(a2 + 16);
          *(_WORD*)(v47 + 18) = *(_WORD*)(a2 + 18);
          *(_DWORD*)(v47 + 20) = *(_DWORD*)(a2 + 20);
          *(_DWORD*)(v47 + 24) = *(_DWORD*)(a2 + 24);
          v49 = v6;
          v50 = v47 + 40;
          v51 = *(unsigned __int16*)(a2 + 32);
          v52 = a2 + (__int16)v51 * (__int64)v49 + 40;
          if (v51 == (unsigned __int16)v43) {
            memcpy_plt(v47 + 40, a2 + (__int16)v51 * (__int64)v49 + 40,
                       v48 * (__int64)v43);
          }
          else if (v48 >= 1) {
            v53 = 0;
            do {
              memcpy_plt(v50, v52, (__int16)v43);
              ++v53;
              LOWORD(v43) = *(_WORD*)(v11 + 32);
              v50 += (__int16)v43;
              v52 += *(__int16*)(a2 + 32);
            } while (v53 < *(__int16*)(v11 + 30));
          }
          FSS_free_char_plt(a1, (void*)a2);
          goto LABEL_87;
        }
      LABEL_82:
        v11 = a2;
      LABEL_87:
        *((_DWORD*)a1 + 18) = 0;
        return v11;
      }
      v13 = 0;
      v8 = *(_WORD*)(a2 + 30);
      v14 = (unsigned int)*(__int16*)(a2 + 32);
      if ((int)v14 < 1) {
        goto LABEL_25;
      }
    }
    else {
      v8 = *(_WORD*)(a2 + 30);
    LABEL_7:
      v10 = 0;
      while (*(_BYTE*)(a2 + 40 + v7 * (__int64)(v2 - v8) + v10) == 0) {
        if (v5 == ++v10) {
        LABEL_6:
          v9 = *(_WORD*)(a2 + 14);
          *(_WORD*)(a2 + 30) = --v8;
          *(_WORD*)(a2 + 14) = v9 - 1;
          if (v8 == 0) {
            goto LABEL_13;
          }
          goto LABEL_7;
        }
      }
      if ((_DWORD)v5 == (_DWORD)v10) {
        goto LABEL_6;
      }
      v13 = v2 - v8;
      v14 = (unsigned int)*(__int16*)(a2 + 32);
      if ((int)v14 < 1) {
      LABEL_25:
        if ((_DWORD)v14 == 0) {
          v8 = 0;
          *(_WORD*)(a2 + 30) = 0;
          v6 = v13;
          v12 = *(unsigned __int16*)(a2 + 28);
          if (*(_WORD*)(a2 + 28) == 0) {
            goto LABEL_51;
          }
          goto LABEL_32;
        }
      LABEL_29:
        v6 = v13;
        v12 = *(unsigned __int16*)(a2 + 28);
        if (*(_WORD*)(a2 + 28) == 0) {
          goto LABEL_51;
        }
        goto LABEL_32;
      }
    }
    do {
      v15 = 0;
      while (*(_BYTE*)(a2 + 40 +
                       ((__int64)((v13 + 0xFFFFFFFFLL + v8) *
                                  ((unsigned __int64)(unsigned __int16)v14
                                   << 32)) >>
                        32) +
                       v15) == 0) {
        if (v14 == ++v15) {
          goto LABEL_19;
        }
      }
      if ((_DWORD)v14 != (_DWORD)v15) {
        goto LABEL_29;
      }
    LABEL_19:
      *(_WORD*)(a2 + 30) = --v8;
    } while (v8 != 0);
    v8 = 0;
    goto LABEL_29;
  }
  return 0;
}

__int64 load_cff(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  unsigned int v29;
  int v30;
  unsigned __int8* v31;
  int v32;
  __int64 v33;
  int v34;
  int v35;
  __int64 v36;
  int v37;
  int v38;
  __int64 v39;
  _WORD v40[2];
  int v41;
  __int64 v42;
  int v43;

  v42 = 0;
  v41 = 0;
  if ((unsigned int)get_ttf_table_info_plt(a1, a2, 1128678944, &v42, &v41) ==
      0) {
    return 0;
  }
  *(_DWORD*)(a2 + 272) = v42;
  result = FSS_malloc_plt(a1, 192);
  if (result == 0) {
    return result;
  }
  if (*(_DWORD*)(a1 + 72) != 0) {
    return 0;
  }
  v5 = result;
  ttf_read_buf_plt(a1, a2, (unsigned int)v42, 4, (char*)&v42 + 4);
  v6 = v5;
  v43 = 0;
  v7 = v42 + BYTE6(v42);
  *(_DWORD*)(v5 + 4) = v7;
  ttf_read_buf_plt(a1, a2, v7, 3, &v43);
  v8 = __rev16((unsigned __int16)v43);
  v40[0] = v8;
  if (v8 != 0) {
    v9 = BYTE2(v43);
    if (BYTE2(v43) >= 5u) {
    LABEL_6:
      v41 = 0;
      *(_DWORD*)(a1 + 72) = 461;
    LABEL_33:
      FSS_free_plt(a1, v6);
      return 0;
    }
    ttf_read_buf_plt(a1, a2, v7 + BYTE2(v43) * v8 + 3, 4, &v43);
    if (v9 != 0) {
      v11 = (unsigned __int8)v43;
      if (v9 != 1) {
        v11 = BYTE1(v43) | ((unsigned __int8)v43 << 8);
        if (v9 != 2) {
          v11 = BYTE2(v43) | (v11 << 8);
          if (v9 != 3) {
            v11 = HIBYTE(v43) | (v11 << 8);
          }
        }
      }
      v12 = *(_DWORD*)(a1 + 72);
      v41 = v11 + 2 + v9 + v9 * v8;
      if (v12 != 0) {
        goto LABEL_33;
      }
    }
    else {
      v13 = *(_DWORD*)(a1 + 72);
      v41 = 2;
      if (v13 != 0) {
        goto LABEL_33;
      }
    }
  }
  else {
    v10 = *(_DWORD*)(a1 + 72);
    v41 = 0;
    if (v10 != 0) {
      goto LABEL_33;
    }
  }
  ttf_read_buf_plt(a1, a2, *(unsigned int*)(v6 + 4), 2, (char*)&v42 + 4);
  if (__rev16(WORD2(v42)) != 1) {
    *(_DWORD*)(a1 + 72) = 458;
    goto LABEL_33;
  }
  v14 = *(_DWORD*)(v6 + 4);
  v43 = 0;
  v15 = v41 + v14;
  *(_DWORD*)(v6 + 16) = v41 + v14;
  ttf_read_buf_plt(a1, a2, v15, 3, &v43);
  v16 = __rev16((unsigned __int16)v43);
  if (v16 != 0) {
    v17 = BYTE2(v43);
    if (BYTE2(v43) >= 5u) {
      goto LABEL_6;
    }
    ttf_read_buf_plt(a1, a2, v15 + BYTE2(v43) * v16 + 3, 4, &v43);
    if (v17 != 0) {
      v18 = (unsigned __int8)v43;
      if (v17 != 1) {
        v18 = BYTE1(v43) | ((unsigned __int8)v43 << 8);
        if (v17 != 2) {
          v18 = BYTE2(v43) | (v18 << 8);
          if (v17 != 3) {
            v18 = HIBYTE(v43) | (v18 << 8);
          }
        }
      }
      v19 = v18 + 2;
    }
    else {
      v19 = 2;
    }
    v20 = v19 + v17 + v17 * v16;
  }
  else {
    v20 = 0;
  }
  v21 = *(_DWORD*)(a1 + 72);
  v41 = v20;
  if (v21 != 0) {
    goto LABEL_33;
  }
  v22 = ttf_read_plt(a1, a2, *(unsigned int*)(v6 + 16), v20);
  v23 = *(_DWORD*)(v6 + 16);
  v24 = v41;
  *(_QWORD*)(v6 + 8) = v22;
  v25 = (unsigned int)(v24 + v23);
  *(_DWORD*)(v6 + 20) = v25;
  v26 = nn_fontll_itype_4210f0(a1, a2, v25, v40);
  v27 = *(_DWORD*)(a1 + 72);
  v41 = v26;
  if (v27 != 0) {
    goto LABEL_33;
  }
  v28 = (unsigned int)(*(_DWORD*)(v6 + 20) + v26);
  *(_DWORD*)(v6 + 32) = v28;
  v29 = nn_fontll_itype_4210f0(a1, a2, v28, v40);
  v30 = *(_DWORD*)(a1 + 72);
  v41 = v29;
  if (v30 != 0) {
    goto LABEL_33;
  }
  *(_QWORD*)(v6 + 24) = ttf_read_plt(a1, a2, *(unsigned int*)(v6 + 32), v29);
  v31 = (unsigned __int8*)nn_fontll_itype_421200_alt1(
      *(unsigned __int8**)(v6 + 8), &v41);
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  v32 = v41;
  *(_QWORD*)(v6 + 88) = 0;
  *(_QWORD*)(v6 + 96) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)(v6 + 104) = 0;
  *(_QWORD*)(v6 + 112) = 0;
  *(_QWORD*)(v6 + 120) = 0;
  *(_QWORD*)(v6 + 128) = 0;
  *(_QWORD*)(v6 + 136) = 0;
  *(_QWORD*)(v6 + 144) = 0;
  *(_QWORD*)(v6 + 152) = 0;
  *(_QWORD*)(v6 + 160) = 0;
  *(_QWORD*)(v6 + 168) = 0;
  *(_QWORD*)(v6 + 176) = 0;
  *(_QWORD*)(v6 + 184) = 0;
  *(_DWORD*)(v6 + 100) = 1073742;
  *(_QWORD*)(v6 + 76) = 0xFFFFFF9C00000032LL;
  *(_QWORD*)(v6 + 84) = 0x10624E00000002LL;
  fs_cff_args_41e2c0(a2, v32, v31, v6 + 56);
  if (*(_DWORD*)(v6 + 84) != 2) {
    *(_DWORD*)(a1 + 72) = 459;
    goto LABEL_43;
  }
  v33 = (unsigned int)(*(_DWORD*)(v6 + 136) + *(_DWORD*)(a2 + 272));
  *(_DWORD*)(v6 + 48) = v33;
  v34 = nn_fontll_itype_4210f0(a1, a2, v33, v40);
  v35 = *(_DWORD*)(a1 + 72);
  v41 = v34;
  if (v35 != 0) {
  LABEL_43:
    unload_cff_plt(a1, v6);
    return 0;
  }
  *(_WORD*)(v6 + 160) = v40[0];
  if (*(_DWORD*)(v6 + 128) != 0) {
    nn_fontll_itype_421360_alt1(a1, a2, v6);
  }
  v36 = *(unsigned int*)(v6 + 156);
  result = v6;
  if ((_DWORD)v36 != 0) {
    v37 = *(_DWORD*)(a2 + 272);
    v38 = *(_DWORD*)(v6 + 152);
    v41 = *(_DWORD*)(v6 + 156);
    LODWORD(v42) = v38 + v37;
    v39 = ttf_read_plt(a1, a2, (unsigned int)(v38 + v37), v36);
    fs_cff_args_41e840(v39, v41, v6 + 176);
    FSS_free_plt(a1, v39);
    return v6;
  }
  return result;
}

__int64 nn_fontll_itype_4210f0(__int64 a1, __int64 a2, __int64 a3, _WORD* a4)
{
  int v5;
  unsigned int v8;
  int v9;
  int v11;
  int v12;
  int v13;

  v5 = a3;
  v13 = 0;
  ttf_read_buf_plt(a1, a2, a3, 3, &v13);
  v8 = __rev16((unsigned __int16)v13);
  *a4 = v8;
  if (v8 == 0) {
    return 0;
  }
  v9 = BYTE2(v13);
  if (BYTE2(v13) < 5u) {
    ttf_read_buf_plt(a1, a2, v5 + BYTE2(v13) * v8 + 3, 4, &v13);
    if (v9 != 0) {
      v11 = (unsigned __int8)v13;
      if (v9 != 1) {
        v11 = BYTE1(v13) | ((unsigned __int8)v13 << 8);
        if (v9 != 2) {
          v11 = BYTE2(v13) | (v11 << 8);
          if (v9 != 3) {
            v11 = HIBYTE(v13) | (v11 << 8);
          }
        }
      }
      v12 = v11 + 2;
    }
    else {
      v12 = 2;
    }
    return v12 + v9 + v9 * (unsigned int)(unsigned __int16)*a4;
  }
  else {
    *(_DWORD*)(a1 + 72) = 461;
    return 0;
  }
}

unsigned __int8* nn_fontll_itype_421200(unsigned __int8* a1, _DWORD* a2)
{
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  unsigned __int8* v9;
  __int64 v10;
  unsigned __int8* v11;
  unsigned __int8* v12;
  int v13;

  v2 = *a1;
  v3 = a1[1];
  v4 = a1[2];
  if (a1[2] == 0) {
    v8 = 0;
    v7 = 0;
    goto LABEL_11;
  }
  v5 = v4 & 7;
  if ((unsigned int)v4 < 8) {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    if ((v4 & 7) == 0) {
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  v9 = &a1[v4];
  v10 = 0;
  v11 = a1;
  do {
    v10 -= 8;
    v9 += 8;
    v11 += 8;
  } while (-(__int64)((unsigned __int8)v4 & 0xF8) != v10);
  v6 = -v10;
  v8 = bswap32(*(_DWORD*)(v11 - 1));
  v7 = bswap32(*(_DWORD*)(v9 - 1));
  if ((v4 & 7) != 0) {
  LABEL_9:
    v12 = &a1[v6 + 3];
    do {
      --v5;
      v8 = *v12 | (v8 << 8);
      v13 = v12[v4];
      ++v12;
      v7 = v13 | (v7 << 8);
    } while (v5 != 0);
  }
LABEL_11:
  *a2 = v7 - v8;
  return &a1[v4 + 2 +
             (unsigned int)v4 *
                 (unsigned __int64)(v3 | (unsigned int)(v2 << 8)) +
             v8];
}

__int16* nn_fontll_itype_421360(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3;
  int v4;
  int v5;
  __int16* result;
  int v10;
  unsigned __int16* v11;
  unsigned __int16* v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  unsigned int v20;
  unsigned int v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int16 v24;
  int v25;
  int v26;
  __int64 v29;
  __int64 v30;
  __int16* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int16* v35;
  __int16 v36;
  __int64 v37;
  __int64 v38;
  __int16 v39;
  char v40[4];
  unsigned __int16 v41;
  unsigned __int16 v42[2];
  char v43[4];

  v3 = *(unsigned __int16*)(a3 + 160);
  v4 = *(_DWORD*)(a2 + 272);
  v5 = *(_DWORD*)(a3 + 128);
  result = (__int16*)FSS_calloc_plt(a1, (unsigned int)(2 * v3));
  *(_QWORD*)(a3 + 168) = result;
  if (result != nullptr) {
    v10 = *(_DWORD*)(a3 + 128);
    if (v10 > 2) {
      v20 = v5 + v4;
      v43[0] = 0;
      result = (__int16*)ttf_read_buf_plt(a1, a2, v20, 1, v43);
      v21 = v20 + 1;
      if (v43[0] != 0) {
        if ((unsigned __int8)v43[0] <= 2u) {
          v42[0] = 0;
          v41 = 0;
          v40[0] = 0;
          if ((unsigned int)v3 >= 2) {
            LODWORD(v22) = 1;
            while (1) {
              ttf_read_buf_plt(a1, a2, v21, 2, v42);
              v23 = v21 + 2;
              v42[0] = bswap32(v42[0]) >> 16;
              if (v43[0] == 1) {
                result = (__int16*)ttf_read_buf_plt(a1, a2, v23, 1, v40);
                v24 = (unsigned __int8)v40[0];
                v25 = 3;
              }
              else {
                result = (__int16*)ttf_read_buf_plt(a1, a2, v23, 2, &v41);
                v24 = __rev16(v41);
                v25 = 4;
              }
              v26 = v42[0];
              v41 = v24;
              if (v42[0] == 1 && (_DWORD)v3 - 2 == v24) {
                break;
              }
              if ((unsigned int)v22 < (unsigned int)v3) {
                v22 = (unsigned int)v22;
                do {
                  *(_WORD*)(*(_QWORD*)(a3 + 168) + 2 * v22++) = v26++;
                } while (v41 + (unsigned int)v42[0] >= (unsigned __int16)v26 &&
                         v22 < v3);
              }
              v21 += v25;
              if ((unsigned int)v22 >= (unsigned int)v3) {
                return result;
              }
            }
            result = (__int16*)FSS_free_plt(a1, *(_QWORD*)(a3 + 168));
            *(_QWORD*)(a3 + 168) = 0;
          }
        }
      }
      else {
        result =
            (__int16*)ttf_read_plt(a1, a2, v21, (unsigned int)(2 * v3 - 2));
        if (result != nullptr) {
          if ((unsigned int)v3 >= 2) {
            v29 = (v3 - 1) & 7;
            if ((unsigned int)(v3 - 2) >= 7) {
              v32 = 0;
              v33 = (__int64)result;
              do {
                v34 = v33;
                v35 = &result[v32];
                *(_WORD*)(*(_QWORD*)(a3 + 168) + 2 * v32 + 2) = *v35;
                *(_WORD*)(*(_QWORD*)(a3 + 168) + 2 * v32 + 4) = v35[1];
                *(_WORD*)(*(_QWORD*)(a3 + 168) + 2 * v32 + 6) = v35[2];
                *(_WORD*)(*(_QWORD*)(a3 + 168) + 2 * v32 + 8) = v35[3];
                *(_WORD*)(*(_QWORD*)(a3 + 168) + 2 * v32 + 10) = v35[4];
                *(_WORD*)(*(_QWORD*)(a3 + 168) + 2 * v32 + 12) = v35[5];
                *(_WORD*)(*(_QWORD*)(a3 + 168) + 2 * v32 + 14) = v35[6];
                v36 = v35[7];
                v33 = (__int64)(v35 + 8);
                v37 = *(_QWORD*)(a3 + 168) + 2 * v32;
                v32 += 8;
                *(_WORD*)(v37 + 16) = v36;
              } while (((v3 - 1) & 0xFFFFFFFFFFFFFFF8LL) != v32);
              v31 = (__int16*)(v34 + 16);
              v30 = v32 + 1;
            }
            else {
              v30 = 1;
              v31 = result;
            }
            if (v29 != 0) {
              v38 = 2 * v30;
              do {
                v39 = *v31++;
                --v29;
                *(_WORD*)(*(_QWORD*)(a3 + 168) + v38) = v39;
                v38 += 2;
              } while (v29 != 0);
            }
          }
          return (__int16*)FSS_free_plt(a1, result);
        }
      }
    }
    else {
      v11 = (unsigned __int16*)&SdkData_bb5b78;
      if (v10 == 1) {
        v11 = (unsigned __int16*)&SdkData_c3c4bc;
      }
      if (v10 == 2) {
        v12 = (unsigned __int16*)&SdkData_c3c504;
      }
      else {
        v12 = v11;
      }
      v13 = *v12;
      v14 = v12[1];
      if (*v12 != 0 && v14 != 0) {
        LODWORD(v16) = 1;
        v17 = 0;
        do {
          if (v13 <= v14 && (int)v16 < (int)v3) {
            v19 = (int)v16;
            do {
              v16 = v19 + 1;
              *(_WORD*)(*(_QWORD*)(a3 + 168) + 2 * v19) = v13;
              if (v13 >= v14) {
                break;
              }
              ++v13;
              ++v19;
            } while (v16 < (__int64)v3);
          }
          v14 = v12[v17 + 3];
          v17 += 2;
          v13 = v12[v17];
        } while (v12[v17] != 0 && v14 != 0);
      }
    }
  }
  return result;
}

__int64 nn_fontll_itype_4216f0(__int64 a1, unsigned int a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int16 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  __int64 result;
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

  v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 40LL) + 16LL);
  v4 = *(_QWORD*)(v3 + 408);
  v5 = *(_QWORD*)(v3 + 400);
  v6 = *(_QWORD*)(v3 + 8);
  v7 = *(_WORD*)(v3 + 424);
  v26 = *(_QWORD*)(v3 + 392);
  v27 = *(_QWORD*)(v3 + 416);
  v8 = *(unsigned __int16*)(v6 + 8);
  v9 = *(unsigned __int16*)(v6 + 6);
  v24 = *(_QWORD*)(v3 + 344);
  v25 = *(_QWORD*)(v3 + 352);
  v22 = *(_QWORD*)(v3 + 360);
  v23 = *(_QWORD*)(v3 + 368);
  v10 = *(_QWORD*)(v3 + 376);
  v21 = *(_QWORD*)(v3 + 384);
  v11 = *(_QWORD*)(a1 + 128);
  v28 = *(_QWORD*)(v11 + 16816);
  v12 = *(_DWORD*)(v11 + 16808);
  LODWORD(v11) = (_DWORD)v8 << (a2 > 1);
  v13 = (_DWORD)v9 << (a2 & 1);
  *(_WORD*)(v6 + 8) = v11;
  *(_WORD*)(v3 + 514) = v11;
  *(_WORD*)(*(_QWORD*)(v3 + 8) + 6LL) = v13;
  *(_WORD*)(v3 + 516) = v13;
  v14 = fsg_WorkSpaceSetOffsets_plt(a1, v3);
  if (v14 <= v12) {
    v15 = v12;
  }
  else {
    v15 = v14;
  }
  v16 = FSS_calloc_plt(a1, v15);
  if (*(_DWORD*)(a1 + 72) != 0) {
    *(_WORD*)(*(_QWORD*)(v3 + 8) + 8LL) = v8;
    *(_WORD*)(*(_QWORD*)(v3 + 8) + 6LL) = v9;
    *(_WORD*)(v3 + 514) = v8;
    *(_WORD*)(v3 + 516) = v9;
    *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16816LL) = v28;
    *(_DWORD*)(*(_QWORD*)(a1 + 128) + 16808LL) = v12;
    fsg_WorkSpaceSetOffsets_plt(a1, v3);
    return fsg_SetUpElement_plt(a1, v3, 1);
  }
  else {
    *(_DWORD*)(*(_QWORD*)(a1 + 128) + 16808LL) = v15;
    *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16816LL) = v16;
    fsg_SetUpElement_plt(a1, v3, 1);
    v18 = *(int*)(v3 + 56);
    v19 = *(_QWORD*)(v3 + 400);
    v20 = *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16816LL);
    *(_WORD*)(v3 + 424) = v7;
    *(_QWORD*)(v3 + 552) = v20 + v18;
    memcpy_plt(v19, v5, 2 * v8);
    memcpy_plt(*(_QWORD*)(v3 + 408), v4, 2 * v8);
    memcpy_plt(*(_QWORD*)(v3 + 376), v10, 4 * v9);
    memcpy_plt(*(_QWORD*)(v3 + 384), v21, 4 * v9);
    memcpy_plt(*(_QWORD*)(v3 + 360), v22, 4 * v9);
    memcpy_plt(*(_QWORD*)(v3 + 368), v23, 4 * v9);
    memcpy_plt(*(_QWORD*)(v3 + 344), v24, 4 * v9);
    memcpy_plt(*(_QWORD*)(v3 + 352), v25, 4 * v9);
    memcpy_plt(*(_QWORD*)(v3 + 392), v26, v9);
    memcpy_plt(*(_QWORD*)(v3 + 416), v27, v9);
    result = FSS_free_plt(a1, v28);
    *(_DWORD*)(a1 + 72) = 0;
  }
  return result;
}

__int64 nn_fontll_itype_421940(__int64 a1, unsigned int a2, unsigned int a3,
                               _DWORD* a4)
{
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 result;
  __int64 v16;
  __int64 v17;
  unsigned int* v18;
  int v19;
  int v20;
  int v21;
  int v22;

  v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 40LL) + 16LL);
  v9 = a4[2];
  v10 = *(__int16*)(v8 + 424);
  if (*(_WORD*)(v8 + 424) != 0 && v9 != 0) {
    v12 = v9;
    v13 = *(_QWORD*)(v8 + 376);
    v14 = a4[55];
    if (*(_DWORD*)(v13 + 4LL * ((int)v12 - 1)) != v14 ||
        *(_DWORD*)(*(_QWORD*)(v8 + 384) + 4LL * ((int)v12 - 1)) != a4[56]) {
      if ((int)v12 + 1 >= *(__int16*)(v8 + 516)) {
        nn_fontll_itype_4216f0(a1, 1u);
        result = *(unsigned int*)(a1 + 72);
        if ((_DWORD)result != 0) {
          return result;
        }
        v14 = a4[55];
        v13 = *(_QWORD*)(v8 + 376);
      }
      *(_DWORD*)(v13 + 4 * v12) = v14;
      *(_DWORD*)(*(_QWORD*)(v8 + 384) + 4 * v12) = a4[56];
      *(_BYTE*)(*(_QWORD*)(v8 + 392) + v12) = 1;
      *(_WORD*)(*(_QWORD*)(v8 + 408) + 2 * v10 - 2) = v12;
      ++a4[2];
    }
  }
  *(_DWORD*)(a1 + 72) = 0;
  v16 = (int)a4[2];
  if ((int)v16 + 1 < *(__int16*)(v8 + 516) ||
      (nn_fontll_itype_4216f0(a1, 1u),
       (_DWORD)(result = *(unsigned int*)(a1 + 72)) == 0)) {
    if ((int)v10 + 1 < *(__int16*)(v8 + 514) ||
        (nn_fontll_itype_4216f0(a1, 2u),
         (_DWORD)(result = *(unsigned int*)(a1 + 72)) == 0)) {
      v17 = 2 * v10;
      *(_WORD*)(*(_QWORD*)(v8 + 400) + 2 * v10) = v16;
      ++*(_WORD*)(v8 + 424);
      v18 = *(unsigned int**)(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 56LL) + 264LL);
      v19 = varmul_64_plt(a2, v18[22], 30);
      v20 = varmul_64_plt(a3, v18[24], 30) + v19;
      v21 = varmul_64_plt(a2, v18[23], 30);
      v22 = varmul_64_plt(a3, v18[25], 30) + v21;
      *(_DWORD*)(*(_QWORD*)(v8 + 376) + 4 * v16) = v20;
      a4[55] = v20;
      *(_DWORD*)(*(_QWORD*)(v8 + 384) + 4 * v16) = v22;
      a4[56] = v22;
      *(_BYTE*)(*(_QWORD*)(v8 + 392) + v16) = 1;
      *(_WORD*)(*(_QWORD*)(v8 + 408) + v17) = v16;
      ++a4[2];
      *(_DWORD*)(a1 + 72) = 0;
      return 0;
    }
  }
  return result;
}

__int64 nn_fontll_itype_421b40(__int64 a1, unsigned int a2, unsigned int a3,
                               __int64 a4)
{
  __int64 v4;
  __int64 v9;
  __int64 v10;
  __int64 result;
  unsigned int* v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v4 = *(int*)(a4 + 8);
  v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 40LL) + 16LL);
  v10 = *(__int16*)(v9 + 424);
  if ((int)v4 + 1 < *(__int16*)(v9 + 516) ||
      (nn_fontll_itype_4216f0(a1, 1u),
       (_DWORD)(result = *(unsigned int*)(a1 + 72)) == 0)) {
    v12 = *(unsigned int**)(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 56LL) + 264LL);
    v13 = varmul_64_plt(a2, v12[22], 30);
    v14 = varmul_64_plt(a3, v12[24], 30) + v13;
    v15 = varmul_64_plt(a2, v12[23], 30);
    v16 = varmul_64_plt(a3, v12[25], 30) + v15;
    *(_DWORD*)(*(_QWORD*)(v9 + 376) + 4 * v4) = v14;
    *(_DWORD*)(*(_QWORD*)(v9 + 384) + 4 * v4) = v16;
    *(_BYTE*)(*(_QWORD*)(v9 + 392) + v4) = 1;
    *(_WORD*)(*(_QWORD*)(v9 + 408) + 2 * v10 - 2) = v4;
    ++*(_DWORD*)(a4 + 8);
    *(_DWORD*)(a1 + 72) = 0;
    return 0;
  }
  return result;
}

__int64 nn_fontll_itype_421c60(__int64 a1, unsigned int a2, unsigned int a3,
                               unsigned int a4, unsigned int a5,
                               unsigned int a6, unsigned int a7, __int64 a8)
{
  __int64 v8;
  __int64 v16;
  __int64 v17;
  __int64 result;
  unsigned int* v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  __int64 v31;
  int v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;

  v8 = *(int*)(a8 + 8);
  v16 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 40LL) + 16LL);
  v17 = *(__int16*)(v16 + 424);
  if ((int)v8 + 3 < *(__int16*)(v16 + 516) ||
      (nn_fontll_itype_4216f0(a1, 1u),
       (_DWORD)(result = *(unsigned int*)(a1 + 72)) == 0)) {
    v36 = a8;
    v19 = *(unsigned int**)(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 56LL) + 264LL);
    v35 = v17;
    v20 = varmul_64_plt(a2, v19[22], 30);
    v34 = varmul_64_plt(a3, v19[24], 30) + v20;
    v21 = varmul_64_plt(a2, v19[23], 30);
    v22 = varmul_64_plt(a3, v19[25], 30) + v21;
    v23 = varmul_64_plt(a4, v19[22], 30);
    v24 = varmul_64_plt(a5, v19[24], 30) + v23;
    v25 = varmul_64_plt(a4, v19[23], 30);
    v26 = varmul_64_plt(a5, v19[25], 30) + v25;
    v27 = varmul_64_plt(a6, v19[22], 30);
    v28 = varmul_64_plt(a7, v19[24], 30) + v27;
    v29 = varmul_64_plt(a6, v19[23], 30);
    v30 = varmul_64_plt(a7, v19[25], 30);
    v31 = v8 + 2;
    v32 = v30 + v29;
    *(_DWORD*)(*(_QWORD*)(v16 + 376) + 4 * v8) = v34;
    v33 = v8 + 1;
    *(_DWORD*)(*(_QWORD*)(v16 + 384) + 4 * v8) = v22;
    *(_BYTE*)(*(_QWORD*)(v16 + 392) + v8) = 0;
    *(_DWORD*)(*(_QWORD*)(v16 + 376) + 4 * v33) = v24;
    *(_DWORD*)(*(_QWORD*)(v16 + 384) + 4 * v33) = v26;
    *(_BYTE*)(*(_QWORD*)(v16 + 392) + v33) = 0;
    *(_DWORD*)(*(_QWORD*)(v16 + 376) + 4 * v31) = v28;
    *(_DWORD*)(*(_QWORD*)(v16 + 384) + 4 * v31) = v32;
    *(_BYTE*)(*(_QWORD*)(v16 + 392) + v31) = 1;
    *(_WORD*)(*(_QWORD*)(v16 + 408) + 2 * v35 - 2) = v8 + 2;
    *(_DWORD*)(v36 + 8) += 3;
    *(_DWORD*)(a1 + 72) = 0;
    return 0;
  }
  return result;
}

__int64 nn_fontll_itype_422040(unsigned __int64* a1, int* a2, __int64 a3,
                               unsigned __int64 a4)
{
  unsigned __int8* v4;
  __int64 result;
  int v6;
  unsigned __int8* v8;
  __int64 v9;
  int v10;
  int v11;
  unsigned int v12;
  unsigned __int8* v13;
  int v14;
  unsigned __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  unsigned __int8* v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  bool v28;
  __int64 v29;
  char* v30;
  unsigned __int8* v31;
  int v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  int v36;
  __int64 v37;
  unsigned __int8* v38;
  __int64 v39;
  int v40;
  int v41;
  unsigned __int8* v42;
  int v43;
  unsigned int v44;
  int v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;
  unsigned __int8* v50;
  unsigned __int8* v51;
  int v52;
  int v53;
  char v54;
  int v55;
  __int64 v58;
  unsigned __int64 v59;
  _QWORD v60[4];
  _QWORD v61[17];

  v4 = (unsigned __int8*)*a1;
  if (*a1 > a4) {
    return 0xFFFF;
  }
  v6 = *a2;
  v8 = (unsigned __int8*)*a1;
  v59 = a4;
  v9 = a3 + 192;
  v58 = a3 + 192;
  while (1) {
    v12 = *v8++;
    result = v12;
    if (v12 <= 0x1B) {
      break;
    }
    switch ((_DWORD)result) {
    case 0x1E:
      v11 = v6 + 1;
      v13 = v4 + 2;
      v14 = 0;
      memset(v61, 0, 128);
      do {
        while (1) {
          v8 = v13;
          v15 = *(v13 - 1);
          v16 = v14 + 1LL;
          *((_BYTE*)v61 + v14) = SdkData_bbe698[v15 >> 4];
          if ((unsigned int)(v15 >> 4) == 12) {
            v17 = v14 + 2;
            *((_BYTE*)v61 + v16) = 45;
          }
          else {
            v17 = v14 + 1;
            if ((unsigned int)(v15 >> 4) == 15) {
              LODWORD(v20) = 0;
              goto LABEL_24;
            }
          }
          v18 = v15 & 0xF;
          v13 = v8 + 1;
          v19 = v17 + 1LL;
          *((_BYTE*)v61 + v17) = SdkData_bbe698[v18];
          if ((_DWORD)v18 != 12) {
            break;
          }
          v14 = v17 + 2;
          *((_BYTE*)v61 + v19) = 45;
        }
        v14 = v17 + 1;
      } while ((_DWORD)v18 != 15);
      LODWORD(v20) = 1;
    LABEL_24:
      v21 = LOBYTE(v61[0]);
      memset(v60, 0, sizeof(v60));
      if (LOBYTE(v61[0]) == 45) {
        v22 = (unsigned __int8*)v61 + 1;
      }
      else {
        v22 = (unsigned __int8*)v61;
      }
      LODWORD(v23) = LOBYTE(v61[0]) == 45;
      v24 = *v22;
      if ((unsigned int)(v24 - 48) <= 9) {
        v20 = (unsigned int)v20;
        v23 = LOBYTE(v61[0]) == 45;
        do {
          *((_BYTE*)v60 + v20) = v24;
          v24 = *((unsigned __int8*)v61 + ++v23);
          ++v20;
        } while ((unsigned int)(v24 - 48) < 0xA);
      }
      if (v24 == 46) {
        v25 = (unsigned int)v23 + 1LL;
      }
      else {
        v25 = (unsigned int)v23;
      }
      if (v24 == 46) {
        v26 = (unsigned int)v20;
      }
      else {
        v26 = 0;
      }
      v27 = *((unsigned __int8*)v61 + v25);
      if ((unsigned int)(v27 - 48) <= 9) {
        v28 = v24 == 46;
        if (v24 == 46) {
          v29 = (unsigned int)v23 + 1LL;
        }
        else {
          v29 = (unsigned int)v23;
        }
        if (v28) {
          LODWORD(v25) = v23 + 1;
        }
        else {
          LODWORD(v25) = v23;
        }
        v30 = (char*)v60 + (unsigned int)v20;
        v31 = (unsigned __int8*)v61 + v29 + 1;
        do {
          *v30++ = v27;
          v32 = *v31++;
          v27 = v32;
          LODWORD(v25) = v25 + 1;
          LODWORD(v20) = v20 + 1;
        } while ((unsigned int)(v32 - 48) < 0xA);
      }
      if (v27 == 69) {
        v33 = (unsigned int)v25 + 1LL;
        v34 = v25 + 2;
        if (*((_BYTE*)v61 + v33) != 45) {
          v34 = v33;
        }
        if ((unsigned int)*((unsigned __int8*)v61 + v34) - 48 <= 9) {
          while (1)
            ;
        }
      }
      *((_BYTE*)v60 + (unsigned int)v20) = 0;
      if ((int)v26 < 1) {
        v36 = 0;
        goto LABEL_61;
      }
      if ((unsigned int)v26 >= 8) {
        v38 = (unsigned __int8*)v60 + 3;
        v39 = 0;
        v36 = 0;
        do {
          v39 -= 8;
          v40 = v38[3] +
                10 * (v38[2] +
                      10 * (v38[1] +
                            10 * (*v38 +
                                  10 * (*(v38 - 1) +
                                        10 * (*(v38 - 2) +
                                              10 * (*(v38 - 3) + 10 * v36))))));
          v41 = v38[4];
          v38 += 8;
          v36 = v41 + 10 * v40 - 533333328;
        } while (-(v26 & 0x7FFFFFF8) != v39);
        v35 = -v39;
        v37 = v26 & 7;
        if ((v26 & 7) != 0) {
          goto LABEL_59;
        }
      }
      else {
        v35 = 0;
        v36 = 0;
        v37 = v26 & 7;
        if ((v26 & 7) == 0) {
          goto LABEL_61;
        }
      LABEL_59:
        v42 = (unsigned __int8*)v60 + v35;
        do {
          v43 = *v42++;
          --v37;
          v36 = v43 + 10 * v36 - 48;
        } while (v37 != 0);
      }
    LABEL_61:
      v44 = v26 - v20;
      if ((int)v26 < (int)v20) {
        v45 = v20 - v26;
        if (v44 <= 0xFFFFFFF8) {
          LODWORD(v47) = 1;
          v49 = 0;
          LODWORD(v46) = 0;
          do {
            v50 = (unsigned __int8*)v60 + v26 + v49;
            v47 = (unsigned int)(100000000 * v47);
            v49 += 8;
            v46 =
                v50[7] +
                10 *
                    (v50[6] +
                     10 *
                         (v50[5] +
                          10 *
                              (v50[4] +
                               10 * (v50[3] +
                                     10 * (v50[2] +
                                           10 * (v50[1] +
                                                 10 * ((unsigned int)*v50 +
                                                       10 * (_DWORD)v46))))))) -
                533333328;
          } while ((v45 & 0xFFFFFFF8) != (_DWORD)v49);
          v26 += v49;
          v48 = v45 & 7;
          if (v48 == 0) {
            goto LABEL_73;
          }
        }
        else {
          v46 = 0;
          v47 = 1;
          v48 = v45 & 7;
          if (v48 == 0) {
            goto LABEL_73;
          }
        }
        v51 = (unsigned __int8*)v60 + v26;
        do {
          v52 = *v51++;
          --v48;
          v46 = (unsigned int)(v52 + 10 * v46 - 48);
          v47 = (unsigned int)(10 * v47);
        } while (v48 != 0);
        goto LABEL_73;
      }
      v46 = 0;
      v47 = 1;
    LABEL_73:
      if (v36 < 0x8000) {
        if (v36 < 2) {
          v55 = muldiv_64_plt(v46, 0x40000000, v47) + (v36 << 30);
          v9 = v58;
          if (v21 == 45) {
            v55 = -v55;
          }
          *(_DWORD*)(a3 + 4LL * v6) = v55;
          v54 = 3;
        }
        else {
          v53 = muldiv_64_plt(v46, 0x10000, v47) + (v36 << 16);
          v9 = v58;
          if (v21 == 45) {
            v53 = -v53;
          }
          *(_DWORD*)(a3 + 4LL * v6) = v53;
          v54 = 2;
        }
        a4 = v59;
        v11 = v6 + 1;
        *(_BYTE*)(v9 + v6) = v54;
        goto LABEL_7;
      }
      if (v21 == 45) {
        v10 = -v36;
      }
      else {
        v10 = v36;
      }
      goto LABEL_6;
    case 0x1D:
      v8 = v4 + 5;
      v10 = bswap32(*(_DWORD*)(v4 + 1));
      break;
    case 0x1C:
      v8 = v4 + 3;
      v10 = (__int16)(v4[1] << 8) | v4[2];
      break;
    default:
      if ((unsigned int)(result - 32) > 0xD6) {
        if ((unsigned int)(result - 247) > 3) {
          if ((unsigned int)(result - 251) > 3) {
            v11 = v6;
            goto LABEL_7;
          }
          v8 = v4 + 2;
          v10 = 64148 - (v4[1] | ((_DWORD)result << 8));
        }
        else {
          v8 = v4 + 2;
          v10 = (v4[1] | ((_DWORD)result << 8)) - 63124;
        }
      }
      else {
        v10 = result - 139;
      }
      break;
    }
    v11 = v6 + 1;
  LABEL_6:
    *(_DWORD*)(a3 + 4LL * v6) = v10;
    *(_BYTE*)(v9 + v6) = 1;
  LABEL_7:
    v6 = v11;
    v4 = v8;
    if ((unsigned __int64)v8 > a4) {
      return 0xFFFF;
    }
  }
  *a1 = (unsigned __int64)v8;
  *a2 = v6;
  return result;
}

__int64 map_font(__int64 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  __int64 v3;
  unsigned int v7;
  _BOOL4 v8;
  unsigned int v9;
  _DWORD* v11;
  __int16 v12;
  char v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  unsigned int* v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  unsigned int* v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  char v29;

  v3 = *(_QWORD*)(a1 + 16);
  if (v3 == 0) {
    v9 = 305;
  LABEL_70:
    *(_DWORD*)(a1 + 72) = v9;
    return v9;
  }
  *(_DWORD*)(a1 + 64) = -1;
  v7 = *(unsigned __int16*)(v3 + 32);
  if (v7 < 2) {
    if (v7 == 0) {
      goto LABEL_69;
    }
    v8 = true;
  }
  else {
    v8 = (a2 != 3 || a3 != 10) && (a2 != 0 || a3 != 5);
  }
  v11 = *(_DWORD**)(a1 + 32);
  v12 = a3 & a2;
  v9 = 0;
  v13 = 0;
  v14 = 0;
  do {
    v15 = *(_QWORD*)(*(_QWORD*)v11 + 56LL);
    if (v12 == -1) {
      *(_DWORD*)(a1 + 72) = 0;
      v11[4] = 0;
      v18 = *(_DWORD*)(a1 + 72);
      if (v18 == 0) {
        goto LABEL_16;
      }
      goto LABEL_41;
    }
    if (*(_QWORD*)(v15 + 56) == 0) {
      goto LABEL_27;
    }
    if ((unsigned int)fix_fnt_plt(a1, *(_QWORD*)(*(_QWORD*)v11 + 56LL)) != 0) {
      goto LABEL_28;
    }
    v16 = *(_QWORD*)(v15 + 56);
    if (v16 != 0) {
      v17 = *(_QWORD*)(v16 + 80);
      LODWORD(v16) = *(unsigned __int16*)(v17 + 2);
      if (*(_WORD*)(v17 + 2) == 0) {
        goto LABEL_40;
      }
    }
    else {
    LABEL_27:
      if ((unsigned int)load_fnt_plt(a1, v15) != 0) {
      LABEL_28:
        v11[4] = 0;
        v18 = *(_DWORD*)(a1 + 72);
        if (v18 == 0) {
          goto LABEL_16;
        }
        goto LABEL_41;
      }
      v17 = *(_QWORD*)(*(_QWORD*)(v15 + 56) + 80LL);
      LODWORD(v16) = *(unsigned __int16*)(v17 + 2);
      if (*(_WORD*)(v17 + 2) == 0) {
      LABEL_40:
        *(_DWORD*)(a1 + 72) = 402;
        v11[4] = v16;
        v18 = *(_DWORD*)(a1 + 72);
        if (v18 == 0) {
          goto LABEL_16;
        }
        goto LABEL_41;
      }
    }
    v16 = __rev16(v16);
    v19 = (unsigned int*)(v17 + 8);
    while (a2 != bswap32(*((unsigned __int16*)v19 - 2)) >> 16 ||
           a3 != bswap32(*((unsigned __int16*)v19 - 1)) >> 16) {
      --v16;
      v19 += 2;
      if (v16 == 0) {
        goto LABEL_40;
      }
    }
    v20 = *v19;
    v21 = bswap32(v20);
    if (v20 != 0) {
      v22 = 0;
    }
    else {
      v22 = 402;
    }
    *(_DWORD*)(a1 + 72) = v22;
    v11[4] = v21;
    v18 = *(_DWORD*)(a1 + 72);
    if (v18 == 0) {
    LABEL_16:
      if (!v8) {
        v13 = 1;
      }
      goto LABEL_18;
    }
  LABEL_41:
    if (v8) {
      return v18;
    }
    if (a2 != 0) {
      if (v9 == 0) {
        v9 = v18;
      }
      if (*(_QWORD*)(v15 + 56) == 0) {
        goto LABEL_50;
      }
      if ((unsigned int)fix_fnt_plt(a1, v15) != 0) {
        goto LABEL_51;
      }
      v23 = *(_QWORD*)(v15 + 56);
      if (v23 != 0) {
        v24 = *(_QWORD*)(v23 + 80);
        LODWORD(v23) = *(unsigned __int16*)(v24 + 2);
        if (*(_WORD*)(v24 + 2) == 0) {
          goto LABEL_63;
        }
      }
      else {
      LABEL_50:
        if ((unsigned int)load_fnt_plt(a1, v15) != 0) {
        LABEL_51:
          v11[4] = 0;
          if (*(_DWORD*)(a1 + 72) != 0) {
            goto LABEL_70;
          }
          goto LABEL_18;
        }
        v24 = *(_QWORD*)(*(_QWORD*)(v15 + 56) + 80LL);
        LODWORD(v23) = *(unsigned __int16*)(v24 + 2);
        if (*(_WORD*)(v24 + 2) == 0) {
        LABEL_63:
          *(_DWORD*)(a1 + 72) = 402;
          v11[4] = v23;
          if (*(_DWORD*)(a1 + 72) != 0) {
            goto LABEL_70;
          }
          goto LABEL_18;
        }
      }
      v23 = __rev16(v23);
      v25 = (unsigned int*)(v24 + 8);
      while (*((_WORD*)v25 - 2) != 768 || *((_WORD*)v25 - 1) != 256) {
        --v23;
        v25 += 2;
        if (v23 == 0) {
          goto LABEL_63;
        }
      }
      v26 = *v25;
      v27 = bswap32(v26);
      if (v26 != 0) {
        v28 = 0;
      }
      else {
        v28 = 402;
      }
      *(_DWORD*)(a1 + 72) = v28;
      v11[4] = v27;
      if (*(_DWORD*)(a1 + 72) != 0) {
        goto LABEL_70;
      }
    }
  LABEL_18:
    ++v14;
    v11 += 6;
  } while (v14 < *(unsigned __int16*)(*(_QWORD*)(a1 + 16) + 32LL));
  v29 = v13 != 0 || v8;
  if ((v29 & 1) == 0) {
    goto LABEL_70;
  }
LABEL_69:
  v9 = 0;
  *(_WORD*)(a1 + 64) = a2;
  *(_WORD*)(a1 + 66) = a3;
  *(_DWORD*)(a1 + 72) = 0;
  return v9;
}

__int64 map_char(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3;
  __int64* v5;
  __int16 v6;
  int v7;
  __int64* v8;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v20;
  unsigned __int16 v21;
  unsigned __int16* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v32;
  char v33;
  unsigned int v34;
  __int16 v35;

  v3 = *(_QWORD*)(a1 + 16);
  *(_DWORD*)(a1 + 72) = 0;
  if (v3 != 0) {
    v5 = *(__int64**)(a1 + 32);
    if (*(_WORD*)(v3 + 32) != 0) {
      v6 = (unsigned __int16)a2 >> 10;
      v7 = a2 & 0xF0000;
      v8 = v5 + 1;
      v11 = 0;
      v12 = HIWORD(a2);
      v35 = 16807 * a2;
      v34 = (unsigned __int16)a2;
      v33 = ((unsigned __int16)a2 >> 10) - 32;
      while (1) {
        v14 = *(v8 - 1);
        v15 = *(_QWORD*)(v14 + 56);
        if (v15 == 0) {
          return 0;
        }
        if ((*(_BYTE*)(a1 + 77) & 0x40) != 0) {
        LABEL_12:
          v13 = a2 - *(unsigned __int16*)(v14 + 40);
          if ((v13 & 0x80000000) != 0) {
            goto LABEL_62;
          }
          if (*(_QWORD*)(v15 + 56) == 0) {
            goto LABEL_16;
          }
          if ((unsigned int)fix_fnt_plt(a1, *(_QWORD*)(v14 + 56)) != 0) {
            return 0;
          }
          v17 = *(_QWORD*)(v15 + 56);
          if (v17 == 0) {
          LABEL_16:
            if ((unsigned int)load_fnt_plt(a1, v15) != 0) {
              return 0;
            }
            v17 = *(_QWORD*)(v15 + 56);
          }
          if (v13 < *(unsigned __int16*)(*(_QWORD*)(v17 + 72) + 4LL)) {
          LABEL_63:
            *(_WORD*)(a1 + 40) = v11;
            *(_QWORD*)(a1 + 48) = v15;
            v30 = *v8;
            *(_DWORD*)(a1 + 72) = 0;
            goto LABEL_66;
          }
          v3 = *(_QWORD*)(a1 + 16);
          if (v11 == *(unsigned __int16*)(v3 + 32) - 1) {
          LABEL_62:
            v13 = 0;
            *(_DWORD*)(a1 + 72) = 406;
            return v13;
          }
          goto LABEL_6;
        }
        v16 = *(unsigned __int16*)(a1 + 64);
        if (v16 != 3) {
          if (v16 == 0xFFFF && *(__int16*)(a1 + 66) == -1) {
            goto LABEL_12;
          }
        LABEL_53:
          v13 = LFNT_map_char_plt(a1, v15, *((unsigned int*)v8 + 2), a2, a3);
          if (*(_WORD*)(a1 + 64) == 3) {
            v27 = *(unsigned __int16*)(a1 + 66);
            if ((v27 == 10 || v27 == 1) && v12 == 0) {
              v28 = *(_QWORD*)(v15 + 40);
              if (v28 != 0) {
                v29 = 4LL * (unsigned __int16)(*(_WORD*)(v15 + 48) & v35);
                *(_WORD*)(v28 + v29) = a2;
                *(_WORD*)(*(_QWORD*)(v15 + 40) + v29 + 2) = v13;
              }
            }
          }
          if ((_WORD)v13 != 0) {
            goto LABEL_63;
          }
          v3 = *(_QWORD*)(a1 + 16);
          goto LABEL_6;
        }
        v18 = *(unsigned __int16*)(a1 + 66);
        if (v18 != 10 && v18 != 1) {
          goto LABEL_53;
        }
        if (v12 == 0) {
          v20 = *(_QWORD*)(v15 + 40);
          if (v20 != 0) {
            v21 = *(_WORD*)(v15 + 48) & v35;
            v22 = (unsigned __int16*)(v20 + 4LL * v21);
            if (a2 == *v22) {
              if (v22[1] != 0) {
                *(_WORD*)(a1 + 40) = v11;
                *(_QWORD*)(a1 + 48) = v15;
                v32 = *v8;
                *(_DWORD*)(a1 + 72) = 0;
                *(_QWORD*)(a1 + 56) = v32;
                return *(unsigned __int16*)(*(_QWORD*)(v15 + 40) + 4LL * v21 +
                                            2);
              }
              goto LABEL_6;
            }
          }
        }
        if (v7 >= 0x20000) {
          if (v7 == 0x20000) {
            v23 = *(_QWORD*)(v14 + 24);
            v24 = HIDWORD(v23);
            if ((_DWORD)v23 == -1 && v24 == 0xFFFFFFFF) {
              goto LABEL_53;
            }
            goto LABEL_49;
          }
          if (v7 != 917504) {
            goto LABEL_53;
          }
          v23 = *(_QWORD*)(v14 + 32);
          v24 = HIDWORD(v23);
          if ((_DWORD)v23 == -1) {
            goto LABEL_37;
          }
        }
        else {
          if (v7 == 0) {
            v23 = *(_QWORD*)(v14 + 8);
            v24 = HIDWORD(v23);
            if ((_DWORD)v23 == -1 && v24 == 0xFFFFFFFF) {
              goto LABEL_53;
            }
            goto LABEL_49;
          }
          if (v7 != 0x10000) {
            goto LABEL_53;
          }
          v23 = *(_QWORD*)(v14 + 16);
          v24 = HIDWORD(v23);
          if ((_DWORD)v23 == -1) {
          LABEL_37:
            if (v24 == 0xFFFFFFFF) {
              goto LABEL_53;
            }
          }
        }
      LABEL_49:
        if (v34 >> 15 != 0) {
          if (((v24 >> v33) & 1) != 0) {
            goto LABEL_53;
          }
        }
        else if (((v23 >> v6) & 1) != 0) {
          goto LABEL_53;
        }
      LABEL_6:
        ++v11;
        v8 += 3;
        if (v11 >= *(unsigned __int16*)(v3 + 32)) {
          v5 = *(__int64**)(a1 + 32);
          break;
        }
      }
    }
    *(_WORD*)(a1 + 40) = 0;
    v13 = 0;
    *(_QWORD*)(a1 + 48) = *(_QWORD*)(*v5 + 56);
    v30 = v5[1];
  LABEL_66:
    *(_QWORD*)(a1 + 56) = v30;
  }
  else {
    v13 = 0;
    *(_DWORD*)(a1 + 72) = 305;
  }
  return v13;
}

__int64 engrave_graymap(__int64 result)
{
  _BYTE* v1;
  int v2;
  int v3;
  int v4;
  __int64 v5;
  unsigned __int8* v6;
  unsigned __int8* v7;
  unsigned int v8;
  bool v9;
  int v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  bool v15;
  unsigned __int8 v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  char v20;
  unsigned int v21;
  unsigned int v22;
  char v23;
  unsigned int v24;
  unsigned int v25;
  char v26;
  unsigned int v27;
  unsigned int v28;
  char v29;
  unsigned int v30;
  unsigned int v31;
  char v32;
  unsigned int v33;
  unsigned int v34;
  char v35;
  unsigned int v36;
  unsigned int v37;
  char v38;
  unsigned int v39;
  unsigned int v40;
  char v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  int v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  int v51;
  char v52;
  char v53;
  unsigned __int8* v54;
  int v55;
  int v56;
  __int64 v57;
  int v58;
  int v59;
  int v60;
  int v61;
  unsigned int v62;
  unsigned int v63;
  unsigned int v64;
  unsigned int v65;
  char v66;
  char v67;
  unsigned __int8* v68;
  unsigned int v69;
  _BYTE* v70;
  unsigned int v71;
  unsigned int v72;
  unsigned int v73;
  int v74;
  unsigned int v75;
  char v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  int v80;
  unsigned int v81;
  char v82;
  __int64 v83;
  unsigned int v84;
  unsigned int v85;
  unsigned int v86;
  unsigned int v87;
  int v88;
  char v89;
  char v90;
  unsigned int v91;
  _BYTE* v92;
  unsigned __int8* v93;
  int v94;
  unsigned int v95;
  unsigned int v96;
  unsigned int v97;
  unsigned int v98;
  unsigned int v99;
  unsigned int v100;
  unsigned int v101;
  unsigned int v102;
  unsigned int v103;
  unsigned int v104;
  unsigned int v105;
  unsigned int v106;
  char v107;
  char v108;
  char v109;
  char v110;
  int v111;
  int v112;
  __int64 v113;
  int v114;
  int v115;
  unsigned int v116;
  unsigned int v117;
  unsigned int v118;
  unsigned int v119;
  unsigned int v120;
  unsigned int v121;
  unsigned int v122;
  unsigned int v123;
  unsigned int v124;
  int v125;
  char v126;
  char v127;
  char v128;
  unsigned __int8* v129;
  unsigned int v130;
  unsigned __int8* v131;
  unsigned int v132;
  unsigned int v133;
  unsigned int v134;
  unsigned int v135;
  unsigned int v136;
  unsigned int v137;
  unsigned int v138;
  unsigned int v139;
  unsigned int v140;
  unsigned int v141;
  unsigned int v142;
  char v143;
  char v144;
  char v145;
  char v146;

  if (result != 0) {
    v2 = *(__int16*)(result + 30);
    if (v2 >= 2 && *(__int16*)(result + 28) >= 2) {
      v3 = *(__int16*)(result + 32);
      v4 = *(unsigned __int16*)(result + 36);
      LOWORD(v2) = v2 - 1;
      v5 = *(__int16*)(result + 32);
      if (v4 != 2) {
        if (v4 != 4) {
          if (v4 != 8 || (int)v5 < 2) {
            return result;
          }
          v2 = (unsigned __int16)v2;
          v6 = (unsigned __int8*)(result +
                                  v3 * (unsigned int)(unsigned __int16)v2 + 39);
          v7 = &v6[v5];
          v8 = v3 - 2;
          while (1) {
            --v6;
            if ((v3 & 7) != 1) {
              break;
            }
            v10 = v3;
            if (v8 >= 7) {
              goto LABEL_19;
            }
          LABEL_10:
            v7 = v1 - 2;
            v9 = __OFSUB__(v2--, 1);
            if ((v2 < 0) ^ v9 | (v2 == 0)) {
              return result;
            }
          }
          v11 = 0;
          v12 = ((_BYTE)v3 - 1) & 7;
          v10 = v3;
          do {
            v13 = v7[v11];
            v14 = v6[v11];
            --v10;
            v15 = v13 >= v14;
            v16 = v13 - v14;
            if (!v15) {
              v16 = 0;
            }
            --v12;
            v7[v11--] = v16;
          } while (v12 != 0);
          v7 += v11;
          v6 += v11;
          v1 = v7 + 1;
          if (v8 < 7) {
            goto LABEL_10;
          }
        LABEL_19:
          v17 = v10 + 8;
          v1 = v7 + 1;
          do {
            v18 = (unsigned __int8)*(v1 - 1);
            v19 = *v6;
            v17 -= 8;
            v15 = v18 >= v19;
            v20 = v18 - v19;
            if (!v15) {
              v20 = 0;
            }
            *(v1 - 1) = v20;
            v21 = (unsigned __int8)*(v1 - 2);
            v22 = *(v6 - 1);
            v15 = v21 >= v22;
            v23 = v21 - v22;
            if (!v15) {
              v23 = 0;
            }
            *(v1 - 2) = v23;
            v24 = (unsigned __int8)*(v1 - 3);
            v25 = *(v6 - 2);
            v15 = v24 >= v25;
            v26 = v24 - v25;
            if (!v15) {
              v26 = 0;
            }
            *(v1 - 3) = v26;
            v27 = (unsigned __int8)*(v1 - 4);
            v28 = *(v6 - 3);
            v15 = v27 >= v28;
            v29 = v27 - v28;
            if (!v15) {
              v29 = 0;
            }
            *(v1 - 4) = v29;
            v30 = (unsigned __int8)*(v1 - 5);
            v31 = *(v6 - 4);
            v15 = v30 >= v31;
            v32 = v30 - v31;
            if (!v15) {
              v32 = 0;
            }
            *(v1 - 5) = v32;
            v33 = (unsigned __int8)*(v1 - 6);
            v34 = *(v6 - 5);
            v15 = v33 >= v34;
            v35 = v33 - v34;
            if (!v15) {
              v35 = 0;
            }
            *(v1 - 6) = v35;
            v36 = (unsigned __int8)*(v1 - 7);
            v37 = *(v6 - 6);
            v15 = v36 >= v37;
            v38 = v36 - v37;
            if (!v15) {
              v38 = 0;
            }
            *(v1 - 7) = v38;
            v39 = (unsigned __int8)*(v1 - 8);
            v1 -= 8;
            v40 = *(v6 - 7);
            v6 -= 8;
            v41 = v39 - v40;
            if (v39 < v40) {
              v41 = 0;
            }
            *v1 = v41;
          } while (v17 > 9);
          goto LABEL_10;
        }
        if (v3 < 1) {
          return result;
        }
        v2 = (unsigned __int16)v2;
        v42 = result + v3 * (unsigned int)(unsigned __int16)v2 + 39;
        v43 = v42 + v5;
        while ((v3 & 3) == 0) {
          v46 = v3;
          if ((unsigned int)v5 >= 4) {
            goto LABEL_56;
          }
        LABEL_41:
          v9 = __OFSUB__(v2--, 1);
          if ((v2 < 0) ^ v9 | (v2 == 0)) {
            return result;
          }
        }
        v44 = 0;
        v45 = v3 & 3;
        v46 = v3;
        do {
          v54 = (unsigned __int8*)(v42 + v44);
          if (1 - v3 == (_DWORD)v44) {
            v47 = 0;
          }
          else {
            v47 = *(v54 - 1) & 0xF;
          }
          v48 = *(unsigned __int8*)(v43 + v44);
          --v46;
          v49 = *v54 >> 4;
          v50 = v48 & 0xF;
          v15 = v48 >> 4 >= v47;
          v51 = 16 * ((v48 >> 4) - v47);
          v52 = (v48 - v49) & 0xF;
          if (!v15) {
            LOBYTE(v51) = 0;
          }
          if (v50 >= v49) {
            v53 = v52;
          }
          else {
            v53 = 0;
          }
          --v45;
          *(_BYTE*)(v43 + v44--) = v51 | v53;
        } while (v45 != 0);
        v42 += v44;
        v43 += v44;
        if ((unsigned int)v5 < 4) {
          goto LABEL_41;
        }
      LABEL_56:
        v55 = -v46;
        v56 = v46 + 4;
        v57 = 0;
        v58 = v55 + 4;
        v59 = v55 + 3;
        v60 = v55 + 2;
        v61 = v55 + 1;
        do {
          v68 = (unsigned __int8*)(v42 + v57);
          if (v61 == (_DWORD)v57) {
            v69 = 0;
          }
          else {
            v69 = *(v68 - 1) & 0xF;
          }
          v70 = (_BYTE*)(v43 + v57);
          v71 = 0;
          v72 = *(unsigned __int8*)(v43 + v57);
          v73 = v72 & 0xF;
          v15 = v72 >> 4 >= v69;
          v74 = 16 * ((v72 >> 4) - v69);
          if (!v15) {
            LOBYTE(v74) = 0;
          }
          v75 = *v68 >> 4;
          v76 = (v72 - v75) & 0xF;
          if (v73 < v75) {
            v76 = 0;
          }
          *v70 = v74 | v76;
          if (v60 != (_DWORD)v57) {
            v71 = *(v68 - 2) & 0xF;
          }
          v77 = (unsigned __int8)*(v70 - 1);
          v78 = 0;
          v79 = v77 & 0xF;
          v15 = v77 >> 4 >= v71;
          v80 = 16 * ((v77 >> 4) - v71);
          if (!v15) {
            LOBYTE(v80) = 0;
          }
          v81 = *(v68 - 1) >> 4;
          v82 = (v77 - v81) & 0xF;
          if (v79 < v81) {
            v82 = 0;
          }
          *(v70 - 1) = v80 | v82;
          v83 = v42 + v57;
          if (v59 != (_DWORD)v57) {
            v78 = *(_BYTE*)(v83 - 3) & 0xF;
          }
          v84 = (unsigned __int8)*(v70 - 2);
          v85 = *(v68 - 2) >> 4;
          v86 = 0;
          v15 = v84 >> 4 >= v78;
          v87 = v84 & 0xF;
          v88 = 16 * ((v84 >> 4) - v78);
          v89 = (v84 - v85) & 0xF;
          if (!v15) {
            LOBYTE(v88) = 0;
          }
          if (v87 >= v85) {
            v90 = v89;
          }
          else {
            v90 = 0;
          }
          *(v70 - 2) = v88 | v90;
          v91 = *(unsigned __int8*)(v83 - 3);
          if (v58 != (_DWORD)v57) {
            v86 = *(_BYTE*)(v83 - 4) & 0xF;
          }
          v62 = (unsigned __int8)*(v70 - 3);
          v63 = v91 >> 4;
          v57 -= 4;
          v56 -= 4;
          v64 = v62 & 0xF;
          v15 = v62 >> 4 >= v86;
          v65 = (v62 >> 4) - v86;
          v66 = (v62 - v63) & 0xF;
          v67 = 16 * v65;
          if (!v15) {
            v67 = 0;
          }
          if (v64 < v63) {
            v66 = 0;
          }
          *(v70 - 3) = v67 | v66;
        } while (v56 > 4);
        v42 += v57;
        v43 += v57;
        goto LABEL_41;
      }
      if ((int)v5 < 1) {
        return result;
      }
      v2 = (unsigned __int16)v2;
      v92 = (_BYTE*)(result + v3 * (unsigned int)(unsigned __int16)v2 + 39);
      v93 = &v92[v5];
      while ((v5 & 1) == 0) {
        v94 = v3;
        if ((_DWORD)v5 != 1) {
          goto LABEL_103;
        }
      LABEL_87:
        v9 = __OFSUB__(v2--, 1);
        if ((v2 < 0) ^ v9 | (v2 == 0)) {
          return result;
        }
      }
      v96 = (unsigned __int8)*v92--;
      v95 = v96;
      if (v3 == 1) {
        v97 = 0;
      }
      else {
        v97 = *v92 & 3;
      }
      v98 = *v93;
      v99 = v95 >> 2;
      v100 = (v95 >> 2) & 3;
      v101 = (v95 >> 4) & 3;
      v102 = v95 >> 6;
      v103 = (v98 >> 4) & 3;
      v104 = (v98 >> 2) & 3;
      v105 = v98 & 3;
      v15 = v98 >> 6 >= v97;
      v106 = (v98 >> 6) - v97;
      v107 = (v98 - v99) & 3;
      v108 = (_BYTE)v106 << 6;
      if (!v15) {
        v108 = 0;
      }
      v15 = v103 >= v102;
      v109 = 16 * (v103 - v102);
      if (!v15) {
        v109 = 0;
      }
      v110 = 4 * (v104 - v101);
      if (v104 < v101) {
        v110 = 0;
      }
      if (v105 < v100) {
        v107 = 0;
      }
      *v93-- = v107 | v109 | v110 | v108;
      v94 = v3 - 1;
      if ((_DWORD)v5 == 1) {
        goto LABEL_87;
      }
    LABEL_103:
      v111 = -v94;
      v112 = v94 + 2;
      v113 = 0;
      v114 = v111 + 2;
      v115 = v111 + 1;
      do {
        v129 = &v92[v113];
        if (v115 == (_DWORD)v113) {
          v130 = 0;
        }
        else {
          v130 = *(v129 - 1) & 3;
        }
        v131 = &v93[v113];
        v132 = *v129;
        v133 = 0;
        v134 = v93[v113];
        v135 = v132 >> 2;
        v136 = (v132 >> 2) & 3;
        v137 = (v134 >> 4) & 3;
        v138 = (v134 >> 2) & 3;
        v139 = v134 & 3;
        v15 = v134 >> 6 >= v130;
        v140 = (v134 >> 6) - v130;
        v141 = (v132 >> 4) & 3;
        v142 = v132 >> 6;
        v143 = (v134 - v135) & 3;
        v144 = (_BYTE)v140 << 6;
        if (!v15) {
          v144 = 0;
        }
        v15 = v137 >= v142;
        v145 = 16 * (v137 - v142);
        if (!v15) {
          v145 = 0;
        }
        v15 = v138 >= v141;
        v146 = 4 * (v138 - v141);
        if (!v15) {
          v146 = 0;
        }
        if (v139 < v136) {
          v143 = 0;
        }
        *v131 = v143 | v145 | v146 | v144;
        if (v114 != (_DWORD)v113) {
          v133 = *(v129 - 2) & 3;
        }
        v116 = *(v131 - 1);
        v117 = *(v129 - 1);
        v113 -= 2;
        v112 -= 2;
        v118 = (v116 >> 4) & 3;
        v119 = v117 >> 2;
        v120 = (v117 >> 2) & 3;
        v121 = (v117 >> 4) & 3;
        v122 = v117 >> 6;
        v123 = (v116 >> 2) & 3;
        v124 = v116 & 3;
        v15 = v116 >> 6 >= v133;
        v125 = ((v116 >> 6) - v133) << 6;
        v126 = (v116 - v119) & 3;
        if (!v15) {
          LOBYTE(v125) = 0;
        }
        v15 = v118 >= v122;
        v127 = 16 * (v118 - v122);
        if (!v15) {
          v127 = 0;
        }
        v128 = 4 * (v123 - v121);
        if (v123 < v121) {
          v128 = 0;
        }
        if (v124 < v120) {
          v126 = 0;
        }
        *(v131 - 1) = v126 | v127 | v128 | v125;
      } while (v112 > 2);
      v92 += v113;
      v93 += v113;
      goto LABEL_87;
    }
  }
  return result;
}

__int64 emboss_graymap(__int64 result)
{
  unsigned __int8* v1;
  int v2;
  __int64 v3;
  unsigned __int16 v4;
  int v5;
  int v6;
  unsigned int v7;
  unsigned __int8* v8;
  int v9;
  int v10;
  unsigned __int8* v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  bool v17;
  unsigned __int8 v18;
  unsigned int v19;
  unsigned int v20;
  unsigned __int8 v21;
  unsigned int v22;
  unsigned int v23;
  unsigned __int8 v24;
  unsigned int v25;
  unsigned int v26;
  unsigned __int8 v27;
  unsigned int v28;
  unsigned int v29;
  unsigned __int8 v30;
  unsigned int v31;
  unsigned int v32;
  unsigned __int8 v33;
  unsigned int v34;
  unsigned int v35;
  unsigned __int8 v36;
  unsigned int v37;
  unsigned int v38;
  unsigned __int8 v39;
  int i;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;
  unsigned __int8 v44;
  int v45;
  unsigned __int8* v46;
  int v47;
  char* v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  char v53;
  char v54;
  char* v55;
  int v56;
  unsigned int v57;
  unsigned int v58;
  int v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  int v63;
  char v64;
  char v65;
  unsigned int v66;
  int v67;
  unsigned int v68;
  unsigned int v69;
  unsigned int v70;
  unsigned int v71;
  int v72;
  char v73;
  char v74;
  char v75;
  unsigned int v76;
  int v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v80;
  unsigned int v81;
  int v82;
  char v83;
  char v84;
  char v85;
  unsigned int v86;
  unsigned int v87;
  int v88;
  unsigned int v89;
  unsigned int v90;
  unsigned int v91;
  unsigned int v92;
  int v93;
  char v94;
  char v95;
  int v96;
  unsigned int v97;
  char* v98;
  unsigned int v99;
  unsigned int v100;
  unsigned int v101;
  unsigned int v102;
  unsigned int v103;
  int v104;
  char v105;
  unsigned int v106;
  char v107;
  char v108;
  int v109;
  unsigned __int8* v110;
  int v111;
  unsigned __int8* v112;
  unsigned int v113;
  unsigned int v114;
  unsigned int v115;
  unsigned int v116;
  unsigned int v117;
  unsigned int v118;
  unsigned int v119;
  unsigned int v120;
  int v121;
  unsigned int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  unsigned int v127;
  unsigned int v128;
  unsigned int v129;
  unsigned int v130;
  unsigned int v131;
  unsigned int v132;
  unsigned int v133;
  unsigned int v134;
  unsigned int v135;
  char v136;
  int v137;
  char v138;
  char v139;
  char v140;
  unsigned int v141;
  unsigned int v142;
  unsigned int v143;
  unsigned int v144;
  unsigned int v145;
  unsigned int v146;
  unsigned int v147;
  unsigned int v148;
  unsigned int v149;
  unsigned int v150;
  unsigned int v151;
  int v152;
  char v153;
  char v154;
  char v155;
  char v156;
  unsigned int v157;
  unsigned int v158;
  unsigned int v159;
  unsigned int v160;
  unsigned int v161;
  unsigned int v162;
  unsigned int v163;
  unsigned int v164;
  unsigned int v165;
  unsigned int v166;
  unsigned int v167;
  char v168;
  int v169;
  char v170;
  char v171;
  char v172;
  unsigned int v173;
  unsigned int v174;
  unsigned int v175;

  if (result != 0) {
    v2 = *(__int16*)(result + 30);
    if (v2 >= 2 && *(__int16*)(result + 28) >= 2) {
      v3 = *(unsigned __int16*)(result + 32);
      v4 = v2 - 1;
      v5 = *(unsigned __int16*)(result + 36);
      v6 = (__int16)v3;
      if (v5 != 2) {
        if (v5 != 4) {
          if (v5 != 8) {
            return result;
          }
          v7 = (__int16)v3 - 2;
          if ((__int16)v3 < 2) {
            return result;
          }
          v8 = (unsigned __int8*)(result + 40);
          v9 = (__int16)v3 - 1;
          v10 = 0;
          v11 = (unsigned __int8*)(result + 40 + v3);
          v12 = (v6 - 1) & 7;
          v13 = v9 & 0xFFFFFFF8;
          while (1) {
            ++v11;
            if (v7 >= 7) {
              break;
            }
            if (v12 != 0) {
              goto LABEL_33;
            }
          LABEL_10:
            ++v10;
            v8 = v1 + 2;
            if (v10 == v4) {
              return result;
            }
          }
          v14 = v13;
          do {
            v15 = *v8;
            v16 = *v11;
            v17 = v15 >= v16;
            v18 = v15 - v16;
            if (!v17) {
              v18 = 0;
            }
            *v8 = v18;
            v19 = v8[1];
            v20 = v11[1];
            v17 = v19 >= v20;
            v21 = v19 - v20;
            if (!v17) {
              v21 = 0;
            }
            v8[1] = v21;
            v22 = v8[2];
            v23 = v11[2];
            v17 = v22 >= v23;
            v24 = v22 - v23;
            if (!v17) {
              v24 = 0;
            }
            v8[2] = v24;
            v25 = v8[3];
            v26 = v11[3];
            v17 = v25 >= v26;
            v27 = v25 - v26;
            if (!v17) {
              v27 = 0;
            }
            v8[3] = v27;
            v28 = v8[4];
            v29 = v11[4];
            v17 = v28 >= v29;
            v30 = v28 - v29;
            if (!v17) {
              v30 = 0;
            }
            v8[4] = v30;
            v31 = v8[5];
            v32 = v11[5];
            v17 = v31 >= v32;
            v33 = v31 - v32;
            if (!v17) {
              v33 = 0;
            }
            v8[5] = v33;
            v34 = v8[6];
            v35 = v11[6];
            v17 = v34 >= v35;
            v36 = v34 - v35;
            if (!v17) {
              v36 = 0;
            }
            v8[6] = v36;
            v37 = v8[7];
            v38 = v11[7];
            v11 += 8;
            v17 = v37 >= v38;
            v39 = v37 - v38;
            if (!v17) {
              v39 = 0;
            }
            v14 -= 8;
            v8[7] = v39;
            v8 += 8;
          } while (v14 != 0);
          v1 = v8 - 1;
          if (v12 == 0) {
            goto LABEL_10;
          }
        LABEL_33:
          v1 = v8 - 1;
          for (i = v12; i != 0; --i) {
            v42 = *++v1;
            v41 = v42;
            v43 = *v11++;
            v17 = v41 >= v43;
            v44 = v41 - v43;
            if (!v17) {
              v44 = 0;
            }
            *v1 = v44;
          }
          goto LABEL_10;
        }
        v45 = (__int16)v3 - 1;
        if ((__int16)v3 < 1) {
          return result;
        }
        v46 = (unsigned __int8*)(result + 40);
        v47 = 0;
        v48 = (char*)(result + 40 + (__int16)v3);
        while (1) {
          if ((__int16)v3 == 1) {
            v56 = 0;
          }
          else {
            if ((unsigned int)((__int16)v3 - 2) >= 3) {
              v57 = v45 & 0xFFFFFFFC;
              v55 = v48;
              do {
                v58 = *v46;
                v59 = (unsigned __int8)*v48;
                v60 = v58 >> 4;
                v61 = v59 & 0xF;
                v62 = v58 & 0xF;
                v63 = 16 * ((v58 >> 4) - v59);
                v64 = (v58 - ((unsigned __int8)v48[1] >> 4)) & 0xF;
                if (v60 >= v61) {
                  v65 = v63;
                }
                else {
                  v65 = 0;
                }
                if (v62 < (unsigned __int8)v48[1] >> 4) {
                  v64 = 0;
                }
                *v46 = v64 | v65;
                v66 = v46[1];
                v67 = (unsigned __int8)v48[1];
                v68 = v66 >> 4;
                v69 = v66 & 0xF;
                v70 = v67 & 0xF;
                v71 = (unsigned __int8)v48[2] >> 4;
                v72 = 16 * ((v66 >> 4) - v67);
                v73 = v66 - v71;
                if (v68 >= v70) {
                  v74 = v72;
                }
                else {
                  v74 = 0;
                }
                v75 = v73 & 0xF;
                if (v69 < v71) {
                  v75 = 0;
                }
                v46[1] = v75 | v74;
                v76 = v46[2];
                v77 = (unsigned __int8)v48[2];
                v78 = v76 >> 4;
                v79 = v76 & 0xF;
                v80 = v77 & 0xF;
                v81 = (unsigned __int8)v48[3] >> 4;
                v82 = 16 * ((v76 >> 4) - v77);
                v83 = v76 - v81;
                if (v78 >= v80) {
                  v84 = v82;
                }
                else {
                  v84 = 0;
                }
                v85 = v83 & 0xF;
                if (v79 < v81) {
                  v85 = 0;
                }
                v46[2] = v85 | v84;
                v86 = v46[3];
                v87 = (unsigned __int8)v55[4];
                v55 += 4;
                v88 = (unsigned __int8)v48[3];
                v89 = v86 >> 4;
                v90 = v86 & 0xF;
                v91 = v88 & 0xF;
                v92 = v87 >> 4;
                v93 = 16 * ((v86 >> 4) - v88);
                v94 = v86 - (v87 >> 4);
                if (v89 < v91) {
                  LOBYTE(v93) = 0;
                }
                v95 = v94 & 0xF;
                if (v90 < v92) {
                  v95 = 0;
                }
                v57 -= 4;
                v46[3] = v95 | v93;
                v46 += 4;
                v48 = v55;
              } while (v57 != 0);
              v48 = v55;
              v56 = (__int16)v3 - 1;
              if ((((_BYTE)v3 - 1) & 3) == 0) {
                goto LABEL_80;
              }
            LABEL_73:
              v96 = ((_BYTE)v3 - 1) & 3;
              do {
                v97 = *v46;
                v98 = v55;
                v99 = (unsigned __int8)*++v55;
                LODWORD(v98) = (unsigned __int8)*v98;
                v100 = v97 >> 4;
                v101 = (unsigned __int8)v98 & 0xF;
                v102 = v99 >> 4;
                v103 = v97 & 0xF;
                v104 = 16 * ((v97 >> 4) - (_DWORD)v98);
                v105 = (v97 - (v99 >> 4)) & 0xF;
                if (v100 < v101) {
                  LOBYTE(v104) = 0;
                }
                if (v103 < v102) {
                  v105 = 0;
                }
                --v96;
                *v46++ = v105 | v104;
              } while (v96 != 0);
              v56 = (__int16)v3 - 1;
              v48 = v55;
              goto LABEL_80;
            }
            v55 = v48;
            v56 = (__int16)v3 - 1;
            if ((((_BYTE)v3 - 1) & 3) != 0) {
              goto LABEL_73;
            }
          }
        LABEL_80:
          v106 = *v46;
          v108 = *v48++;
          v107 = v108;
          if (v56 == v45) {
            v49 = 0;
          }
          else {
            v49 = (unsigned __int8)*v48 >> 4;
          }
          v50 = v107 & 0xF;
          v51 = v106 & 0xF;
          ++v47;
          v17 = v106 >> 4 >= v50;
          v52 = (v106 >> 4) - v50;
          v53 = (v106 - v49) & 0xF;
          v54 = 16 * v52;
          if (!v17) {
            v54 = 0;
          }
          if (v51 < v49) {
            v53 = 0;
          }
          *v46++ = v53 | v54;
          if (v47 == v4) {
            return result;
          }
        }
      }
      v109 = (__int16)v3 - 1;
      if ((__int16)v3 < 1) {
        return result;
      }
      v110 = (unsigned __int8*)(result + 40);
      v111 = 0;
      v112 = (unsigned __int8*)(result + 40 + v3);
      do {
        if (v109 != 0) {
          if (v6 != 2) {
            LODWORD(v1) = 0;
            do {
              v127 = *v110;
              v128 = *v112;
              LODWORD(v1) = (_DWORD)v1 + 2;
              v129 = v127 >> 6;
              v130 = (v128 >> 4) & 3;
              v131 = (v128 >> 2) & 3;
              v132 = v128 & 3;
              v133 = (v127 >> 4) & 3;
              v134 = (v127 >> 2) & 3;
              v135 = v127 & 3;
              v136 = (v127 - (v112[1] >> 6)) & 3;
              v137 = (v129 - (v128 >> 4)) << 6;
              if (v129 >= v130) {
                v138 = v137;
              }
              else {
                v138 = 0;
              }
              v17 = v133 >= v131;
              v139 = 16 * (v133 - v131);
              if (!v17) {
                v139 = 0;
              }
              v17 = v134 >= v132;
              v140 = 4 * (v134 - v132);
              if (!v17) {
                v140 = 0;
              }
              if (v135 < v112[1] >> 6) {
                v136 = 0;
              }
              *v110 = v139 | v140 | v138 | v136;
              v141 = v110[1];
              v142 = v112[1];
              v143 = v112[2];
              v112 += 2;
              v144 = v141 >> 6;
              v145 = (v141 >> 4) & 3;
              v146 = (v141 >> 2) & 3;
              v147 = v141 & 3;
              v148 = (v142 >> 4) & 3;
              v149 = (v142 >> 2) & 3;
              v150 = v142 & 3;
              v151 = v143 >> 6;
              v152 = ((v141 >> 6) - (v142 >> 4)) << 6;
              v153 = (v141 - (v143 >> 6)) & 3;
              if (v144 >= v148) {
                v154 = v152;
              }
              else {
                v154 = 0;
              }
              v17 = v145 >= v149;
              v155 = 16 * (v145 - v149);
              if (!v17) {
                v155 = 0;
              }
              v17 = v146 >= v150;
              v156 = 4 * (v146 - v150);
              if (!v17) {
                v156 = 0;
              }
              if (v147 < v151) {
                v153 = 0;
              }
              v110[1] = v155 | v156 | v154 | v153;
              v110 += 2;
            } while ((v109 & 0xFFFFFFFE) != (_DWORD)v1);
            v126 = (_DWORD)v1 + 1;
            if ((v109 & 1) == 0) {
              goto LABEL_131;
            }
          LABEL_121:
            v157 = *v110;
            v158 = *v112;
            v159 = *++v112;
            v160 = v157 >> 6;
            v161 = (v158 >> 4) & 3;
            v162 = (v158 >> 2) & 3;
            v163 = v158 & 3;
            v164 = (v157 >> 4) & 3;
            v165 = (v157 >> 2) & 3;
            v166 = v159 >> 6;
            v167 = v157 & 3;
            v168 = (v157 - (v159 >> 6)) & 3;
            v169 = (v160 - (v158 >> 4)) << 6;
            if (v160 >= v161) {
              v170 = v169;
            }
            else {
              v170 = 0;
            }
            v17 = v164 >= v162;
            v171 = 16 * (v164 - v162);
            if (!v17) {
              v171 = 0;
            }
            v17 = v165 >= v163;
            v172 = 4 * (v165 - v163);
            if (!v17) {
              v172 = 0;
            }
            if (v167 < v166) {
              v168 = 0;
            }
            *v110++ = v171 | v172 | v170 | v168;
            LODWORD(v1) = v126;
            goto LABEL_131;
          }
          v126 = 1;
          if ((v109 & 1) != 0) {
            goto LABEL_121;
          }
        }
        else {
          LODWORD(v1) = 0;
        }
      LABEL_131:
        v173 = *v110;
        v175 = *v112++;
        v174 = v175;
        if ((_DWORD)v1 == v109) {
          v113 = 0;
        }
        else {
          v113 = *v112 >> 6;
        }
        v114 = (v174 >> 4) & 3;
        v115 = (v173 >> 4) & 3;
        v116 = (v174 >> 2) & 3;
        v117 = (v173 >> 2) & 3;
        v118 = v174 & 3;
        v119 = v173 & 3;
        ++v111;
        v17 = v173 >> 6 >= v114;
        v120 = (v173 >> 6) - v114;
        v121 = ((_BYTE)v173 - (_BYTE)v113) & 3;
        v122 = v120 << 6;
        if (!v17) {
          v122 = 0;
        }
        v17 = v115 >= v116;
        v123 = 16 * (v115 - v116);
        if (!v17) {
          v123 = 0;
        }
        v17 = v117 >= v118;
        v124 = 4 * (v117 - v118);
        if (!v17) {
          v124 = 0;
        }
        if (v119 >= v113) {
          v125 = v121;
        }
        else {
          v125 = 0;
        }
        LODWORD(v1) = v123 | v124 | v122 | v125;
        *v110++ = (unsigned __int8)v1;
      } while (v111 != v4);
    }
  }
  return result;
}

__int64 outline_graymap(void* a1, __int64 a2, unsigned __int16 a3, int a4)
{
  __int64 v4;
  int v6;
  int v7;
  __int64 v10;
  __int64 v11;
  char v12;
  char v13;
  __int64 result;
  int v15;
  __int64 v16;
  char* v17;
  _BYTE* v18;
  int v19;
  int v20;
  char* v21;
  unsigned int v22;
  __int16 v23;
  int v24;
  _BYTE* v25;
  int v26;
  char v27;
  char v28;
  int v29;
  char v30;
  int v31;
  unsigned int v32;
  unsigned int v33;
  int v34;
  char* v35;
  __int16 v36;
  int v37;
  _BYTE* v38;
  int v39;
  char v40;
  char v41;
  int v42;
  char v43;
  unsigned int v44;
  __int64 v45;
  int v46;
  _BYTE* v47;
  __int64 v48;
  _BYTE* v49;
  __int64 v50;
  _BYTE* v51;
  __int64 v52;
  _BYTE* v53;
  __int64 v54;
  _BYTE* v55;
  __int64 v56;
  _BYTE* v57;
  __int64 v58;
  _BYTE* v59;
  __int64 v60;
  int v61;
  int v62;
  int v63;
  _BYTE* v64;
  int v65;
  __int64 v66;
  __int64 v67;
  bool v69;
  __int64 v70;
  __int64 v71;
  _BYTE* v72;
  _BYTE* v73;
  __int64 v74;
  unsigned int v75;
  unsigned int v76;
  unsigned int v77;
  __int64 v78;
  __int64 v79;
  unsigned int v80;
  unsigned int v81;
  __int64 v82;
  unsigned int v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  int v87;
  _BYTE* v88;
  __int64 v89;
  unsigned __int8* v90;
  unsigned int v91;
  unsigned int v92;
  int v93;
  unsigned int v94;
  unsigned int v95;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  unsigned __int8* v100;
  unsigned int v101;
  char v102;
  _BYTE* v103;
  unsigned int v104;
  unsigned int v105;
  int v106;
  char v107;
  __int64 v108;
  unsigned __int8* v109;
  int v110;
  unsigned int v111;
  int v112;
  _BYTE* v113;
  __int64 v114;
  unsigned int v115;
  unsigned int v116;
  unsigned int v117;
  unsigned int v118;
  __int64 v119;
  __int64 v120;
  unsigned __int8 v121;
  __int64 v122;
  unsigned int v123;
  __int64 v124;
  unsigned int v125;
  unsigned int v126;
  unsigned int v127;
  unsigned int v128;
  __int64 v129;
  unsigned __int8 v130;
  unsigned int v131;
  __int64 v132;
  _BYTE* v133;
  _BYTE* v134;
  int v135;
  int v136;
  _BYTE* v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  char v143;
  unsigned int v144;
  int i;
  unsigned int v146;
  int v147;
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
  char v174;
  char v175;
  char v176;
  unsigned __int8 v177;
  int v178;
  char v179;
  char v180;
  unsigned int v181;
  int v182;
  int v183;
  int v184;
  int v185;
  char v186;
  char v187;
  char v188;
  char v189;
  char v190;
  char v191;
  char v192;
  char v193;
  char v194;
  char v195;
  char v196;
  char v197;
  char v198;
  char v199;
  char v200;
  char v201;
  char v202;
  char v203;
  char v204;
  char v205;
  char v206;
  char v207;
  char v208;
  char v209;
  char v210;
  char v211;
  char v212;
  char v213;
  unsigned __int8 v214;
  char v215;
  int v216;
  char v217;
  char v218;
  char v219;
  char v220;
  char v221;
  char v222;
  char v223;
  int v224;
  int v225;
  char v226;
  _BYTE* v227;
  int v228;
  char v229;
  _BYTE* v230;
  int v231;
  char v232;
  _BYTE* v233;
  int v234;
  char v235;
  int v236;
  unsigned int v237;
  int v238;
  __int64 v239;
  _BYTE* v240;
  char v241;
  _BYTE* v242;
  _BYTE* v243;
  _BYTE* v244;
  _BYTE* v245;
  _BYTE* v246;
  _BYTE* v247;
  unsigned int v248;
  int v249;
  unsigned int v250;
  int v251;
  _BYTE* v252;
  _BYTE* v253;
  _BYTE* v254;
  unsigned int v255;
  unsigned int v256;
  unsigned int v257;
  unsigned int v258;
  int v259;
  __int64 v260;
  _BYTE* v261;
  char v262;
  char v263;
  _BYTE* v264;
  char v265;
  _BYTE* v266;
  char v267;
  _BYTE* v268;
  char v269;
  unsigned int v270;
  int v271;
  char* v272;
  char v273;
  unsigned int v274;
  int v275;
  __int64 v276;
  _BYTE* v277;
  char v278;
  char v279;
  char v280;
  char v281;
  _BYTE* v282;
  char v283;
  char v284;
  char v285;
  unsigned int v286;
  char v287;
  char v288;
  char v289;
  __int64 v290;
  __int64 v291;
  __int64 v292;
  unsigned int v293;
  int v294;
  unsigned int* v295;
  unsigned int v296;
  unsigned int v297;
  int v298;
  unsigned __int8* v299;
  unsigned int v300;
  unsigned int v301;
  __int64 v302;
  _BYTE* v303;
  _BYTE* v304;
  _BYTE* v305;
  _BYTE* v306;
  __int64 v307;
  _BYTE* v308;
  __int16 v309;
  int v310;
  int v311;
  int v312;
  char* v313;
  int v314;
  char* v315;
  int v316;
  _BYTE* v317;
  int v318;
  _BYTE* v319;
  unsigned int v320;
  unsigned int v321;
  char v322;
  char v323;
  char v324;
  unsigned int v325;
  _BYTE* v326;
  _BYTE* v327;
  _BYTE* v328;
  _BYTE* v329;
  _BYTE* v330;
  _BYTE* v331;
  _BYTE* v332;
  _BYTE* v333;
  _BYTE* v334;
  _BYTE* v335;
  _BYTE* v336;
  _BYTE* v337;
  _BYTE* v338;
  _BYTE* v339;
  __int64 v340;
  int v341;
  _BYTE* v342;
  char v343;
  char v344;
  unsigned int v345;
  unsigned int v346;
  char v347;
  char v348;
  char v349;
  char v350;
  char v351;
  char v352;
  int v353;
  char* v354;
  unsigned int v355;
  _BYTE* v356;
  char v357;
  int v358;
  char* v359;
  unsigned int v360;
  _BYTE* v361;
  char v362;
  unsigned int v363;
  _BYTE* v364;
  char v365;
  char v366;
  unsigned int v367;
  _BYTE* v368;
  char v369;
  char v370;
  char v371;
  void* v372;
  __int64 v373;
  int v374;
  __int64 v375;
  int v376;
  __int64 v377;
  int v379;
  int v380;
  __int64 v381;
  bool v382;
  _BYTE* v383;
  __int64 v384;

  if (a2 == 0) {
    return 0;
  }
  if (*(_WORD*)(a2 + 28) == 0 || *(_WORD*)(a2 + 30) == 0) {
    return a2;
  }
  v6 = *(unsigned __int16*)(a2 + 36);
  v7 = a3;
  v10 = (unsigned int)a3 + 1;
  v11 = (unsigned int)(*(__int16*)(a2 + 28) + 2 * v10);
  if (v6 == 2) {
    v12 = 3;
  }
  else {
    v12 = 15;
  }
  if (v6 == 8) {
    v13 = -1;
  }
  else {
    v13 = v12;
  }
  result = FSS_calloc_plt(
      a1, (unsigned int)((*(__int16*)(a2 + 30) + 2 * v10) * v11));
  if (result != 0) {
    v15 = *(__int16*)(a2 + 30);
    v16 = (unsigned int)(2 * v10);
    v17 = (char*)(a2 + 40);
    v383 = (_BYTE*)result;
    v374 = v7;
    v373 = (unsigned int)(v7 + 1);
    v381 = v16;
    v18 = (_BYTE*)(result + (unsigned int)(v11 * v10) + v10);
    v19 = *(unsigned __int16*)(a2 + 36);
    if (v19 == 8) {
      if (v15 >= 1) {
        if ((unsigned int)v15 >= 8) {
          v46 = v15 & 0x7FF8;
          v45 = a2 + 40;
          do {
            memcpy_plt(v18, v45, *(__int16*)(a2 + 28));
            v47 = &v18[v11];
            v48 = v45 + *(__int16*)(a2 + 32);
            memcpy_plt(v47, v48, *(__int16*)(a2 + 28));
            v49 = &v47[v11];
            v50 = v48 + *(__int16*)(a2 + 32);
            memcpy_plt(v49, v50, *(__int16*)(a2 + 28));
            v51 = &v49[v11];
            v52 = v50 + *(__int16*)(a2 + 32);
            memcpy_plt(v51, v52, *(__int16*)(a2 + 28));
            v53 = &v51[v11];
            v54 = v52 + *(__int16*)(a2 + 32);
            memcpy_plt(v53, v54, *(__int16*)(a2 + 28));
            v55 = &v53[v11];
            v56 = v54 + *(__int16*)(a2 + 32);
            memcpy_plt(v55, v56, *(__int16*)(a2 + 28));
            v57 = &v55[v11];
            v58 = v56 + *(__int16*)(a2 + 32);
            memcpy_plt(v57, v58, *(__int16*)(a2 + 28));
            v59 = &v57[v11];
            v60 = v58 + *(__int16*)(a2 + 32);
            memcpy_plt(v59, v60, *(__int16*)(a2 + 28));
            v18 = &v59[v11];
            v46 -= 8;
            v45 = v60 + *(__int16*)(a2 + 32);
          } while (v46 != 0);
        }
        else {
          v45 = a2 + 40;
        }
        LODWORD(v16) = v381;
        if ((v15 & 7) != 0) {
          v61 = v15 & 7;
          do {
            memcpy_plt(v18, v45, *(__int16*)(a2 + 28));
            LODWORD(v16) = v381;
            v18 += v11;
            --v61;
            v45 += *(__int16*)(a2 + 32);
          } while (v61 != 0);
        }
      }
    }
    else if (v19 == 4) {
      if (v15 >= 1) {
        v34 = 0;
        v35 = (char*)(a2 + 40);
        do {
          v36 = *(_WORD*)(a2 + 28);
          v37 = v36 >> 1;
          if (v37 >= 1) {
            if ((unsigned int)v37 >= 8) {
              v39 = v37 & 0x7FF8;
              do {
                v39 -= 8;
                *v18 = (unsigned __int8)*v35 >> 4;
                v18[1] = *v35 & 0xF;
                v18[2] = (unsigned __int8)v35[1] >> 4;
                v18[3] = v35[1] & 0xF;
                v18[4] = (unsigned __int8)v35[2] >> 4;
                v18[5] = v35[2] & 0xF;
                v18[6] = (unsigned __int8)v35[3] >> 4;
                v18[7] = v35[3] & 0xF;
                v18[8] = (unsigned __int8)v35[4] >> 4;
                v18[9] = v35[4] & 0xF;
                v18[10] = (unsigned __int8)v35[5] >> 4;
                v18[11] = v35[5] & 0xF;
                v18[12] = (unsigned __int8)v35[6] >> 4;
                v18[13] = v35[6] & 0xF;
                v18[14] = (unsigned __int8)v35[7] >> 4;
                v40 = v35[7];
                v35 += 8;
                v41 = v40 & 0xF;
                v38 = v18 + 16;
                v18[15] = v41;
                v18 += 16;
              } while (v39 != 0);
            }
            else {
              v38 = v18;
            }
            v18 = v38;
            if ((v36 & 0xE) != 0) {
              v42 = (v36 >> 1) & 7;
              do {
                v18 = v38 + 2;
                --v42;
                *v38 = (unsigned __int8)*v35 >> 4;
                v43 = *v35++;
                v38[1] = v43 & 0xF;
                v38 += 2;
              } while (v42 != 0);
            }
            v36 = *(_WORD*)(a2 + 28);
          }
          if ((v36 & 1) != 0) {
            v44 = (unsigned __int8)*v35++;
            *v18++ = v44 >> 4;
          }
          v18 += v16;
          ++v34;
        } while (v34 != v15);
      }
    }
    else if (v19 == 2 && v15 >= 1) {
      v20 = 0;
      v21 = (char*)(a2 + 40);
      do {
        v23 = *(_WORD*)(a2 + 28);
        v24 = v23 >> 2;
        if (v24 >= 1) {
          if ((unsigned int)v24 >= 8) {
            v26 = v24 & 0x7FF8;
            do {
              v26 -= 8;
              *v18 = (unsigned __int8)*v21 >> 6;
              v18[1] = ((unsigned __int8)*v21 >> 4) & 3;
              v18[2] = ((unsigned __int8)*v21 >> 2) & 3;
              v18[3] = *v21 & 3;
              v18[4] = (unsigned __int8)v21[1] >> 6;
              v18[5] = ((unsigned __int8)v21[1] >> 4) & 3;
              v18[6] = ((unsigned __int8)v21[1] >> 2) & 3;
              v18[7] = v21[1] & 3;
              v18[8] = (unsigned __int8)v21[2] >> 6;
              v18[9] = ((unsigned __int8)v21[2] >> 4) & 3;
              v18[10] = ((unsigned __int8)v21[2] >> 2) & 3;
              v18[11] = v21[2] & 3;
              v18[12] = (unsigned __int8)v21[3] >> 6;
              v18[13] = ((unsigned __int8)v21[3] >> 4) & 3;
              v18[14] = ((unsigned __int8)v21[3] >> 2) & 3;
              v18[15] = v21[3] & 3;
              v18[16] = (unsigned __int8)v21[4] >> 6;
              v18[17] = ((unsigned __int8)v21[4] >> 4) & 3;
              v18[18] = ((unsigned __int8)v21[4] >> 2) & 3;
              v18[19] = v21[4] & 3;
              v18[20] = (unsigned __int8)v21[5] >> 6;
              v18[21] = ((unsigned __int8)v21[5] >> 4) & 3;
              v18[22] = ((unsigned __int8)v21[5] >> 2) & 3;
              v18[23] = v21[5] & 3;
              v18[24] = (unsigned __int8)v21[6] >> 6;
              v18[25] = ((unsigned __int8)v21[6] >> 4) & 3;
              v18[26] = ((unsigned __int8)v21[6] >> 2) & 3;
              v18[27] = v21[6] & 3;
              v18[28] = (unsigned __int8)v21[7] >> 6;
              v18[29] = ((unsigned __int8)v21[7] >> 4) & 3;
              v18[30] = ((unsigned __int8)v21[7] >> 2) & 3;
              v27 = v21[7];
              v21 += 8;
              v28 = v27 & 3;
              v25 = v18 + 32;
              v18[31] = v28;
              v18 += 32;
            } while (v26 != 0);
          }
          else {
            v25 = v18;
          }
          v18 = v25;
          if ((v23 & 0x1C) != 0) {
            v29 = (v23 >> 2) & 7;
            do {
              v18 = v25 + 4;
              --v29;
              *v25 = (unsigned __int8)*v21 >> 6;
              v25[1] = ((unsigned __int8)*v21 >> 4) & 3;
              v25[2] = ((unsigned __int8)*v21 >> 2) & 3;
              v30 = *v21++;
              v25[3] = v30 & 3;
              v25 += 4;
            } while (v29 != 0);
          }
        }
        v31 = v23 & 3;
        if (v31 > 1) {
          *v18 = (unsigned __int8)*v21 >> 6;
          if (v31 == 2) {
            v33 = (unsigned __int8)*v21++;
            v18[1] = (v33 >> 4) & 3;
            v18 += 2;
          }
          else {
            v18[1] = ((unsigned __int8)*v21 >> 4) & 3;
            v22 = (unsigned __int8)*v21++;
            v18[2] = (v22 >> 2) & 3;
            v18 += 3;
          }
        }
        else if (v31 != 0) {
          v32 = (unsigned __int8)*v21++;
          *v18++ = v32 >> 6;
        }
        v18 += v16;
        ++v20;
      } while (v20 != v15);
    }
    v62 = *(__int16*)(a2 + 28);
    v63 = v16 + *(__int16*)(a2 + 30);
    v380 = *(__int16*)(a2 + 30);
    v377 = (unsigned int)(v16 + v62);
    v375 = (unsigned int)(v63 * (v16 + v62));
    v384 = FSS_malloc_plt(a1, v375);
    if (v384 == 0) {
      FSS_free_plt(a1, v383);
      return 0;
    }
    v64 = v383;
    v376 = v63;
    v372 = a1;
    if (a3 != 0) {
      v65 = v374;
      v66 = (unsigned int)(v377 - 1);
      v67 = v66 - 1;
      v379 = v380 + 2 * v374;
      v69 = v376 < 3 || (int)v377 < 3;
      v382 = v69;
      do {
        memcpy_plt(v384, v64, (int)v375);
        if ((v65 & 1) != 0) {
          v64 = v383;
          if (!v382) {
            v84 = v384 + 2LL * (int)v377 + 1;
            v85 = (__int64)&v383[(int)v377 + 1];
            v86 = v384 + (int)v377;
            v87 = 1;
            v88 = v383;
            v89 = v384;
            do {
              if ((_DWORD)v377 == 3) {
                v94 = 0;
                v97 = 1;
              }
              else {
                v97 = 1;
                do {
                  v98 = v86 + v97;
                  v99 = v89 + v97;
                  v100 = (unsigned __int8*)(v84 + v97);
                  v94 = *(unsigned __int8*)(v86 + v97 + 1);
                  v101 = *(unsigned __int8*)(v89 + v97);
                  if (*(unsigned __int8*)(v86 + v97) > v94) {
                    v94 = *(unsigned __int8*)(v86 + v97);
                  }
                  if (v101 <= *(unsigned __int8*)(v86 + v97 - 1)) {
                    v101 = *(unsigned __int8*)(v86 + v97 - 1);
                  }
                  if (v101 <= *(unsigned __int8*)(v84 + v97 - 1)) {
                    v101 = *(unsigned __int8*)(v84 + v97 - 1);
                  }
                  if (v94 > v101) {
                    LOBYTE(v101) = v94;
                  }
                  if (*(_BYTE*)(v86 + v97) != 0) {
                    v102 = v13;
                  }
                  else {
                    v102 = v101;
                  }
                  v103 = (_BYTE*)(v85 + v97);
                  v97 += 2;
                  *(v103 - 1) = v102;
                  v104 = *(unsigned __int8*)(v99 + 1);
                  v105 = *(unsigned __int8*)(v98 + 2);
                  v106 = *(unsigned __int8*)(v98 + 1);
                  if (v104 <= v105) {
                    v104 = v105;
                  }
                  v4 = *v100;
                  if (v104 <= (unsigned int)v4) {
                    v104 = *v100;
                  }
                  if (v94 > v104) {
                    LOBYTE(v104) = v94;
                  }
                  if (v106 != 0) {
                    v107 = v13;
                  }
                  else {
                    v107 = v104;
                  }
                  *v103 = v107;
                } while (v97 - (v67 & 0xFFFFFFFFFFFFFFFELL) != 1);
              }
              v88 += (int)v377;
              v108 = v86 + (int)v377;
              if ((v67 & 1) != 0) {
                if ((v97 & 1) != 0) {
                  v109 = (unsigned __int8*)(v86 + v97);
                  v110 = *v109;
                  v111 = v109[1];
                  v95 = *(v109 - 1);
                  if (*(unsigned __int8*)(v89 + v97) > v95) {
                    v95 = *(unsigned __int8*)(v89 + v97);
                  }
                  v4 = *(unsigned __int8*)(v108 + v97);
                  if (v95 <= (unsigned int)v4) {
                    v95 = *(unsigned __int8*)(v108 + v97);
                  }
                  if (v111 > v95) {
                    LOBYTE(v95) = v111;
                  }
                  if (v110 != 0) {
                    LOBYTE(v95) = v13;
                  }
                }
                else {
                  v90 = (unsigned __int8*)(v86 + v97);
                  v91 = *(unsigned __int8*)(v89 + v97);
                  v92 = v90[1];
                  v93 = *v90;
                  if (v91 <= v92) {
                    v91 = v92;
                  }
                  v4 = *(unsigned __int8*)(v108 + v97);
                  if (v91 <= (unsigned int)v4) {
                    v91 = *(unsigned __int8*)(v108 + v97);
                  }
                  if (v94 <= v91) {
                    LOBYTE(v94) = v91;
                  }
                  if (v93 != 0) {
                    LOBYTE(v95) = v13;
                  }
                  else {
                    LOBYTE(v95) = v94;
                  }
                }
                v88[v97] = v95;
              }
              v89 += (int)v377;
              v85 += (int)v377;
              v84 += (int)v377;
              v86 = v108;
            } while (v87++ != v376 - 2);
          }
        }
        else {
          v64 = v383;
          if (!v382) {
            v70 = v384 + (int)v377;
            v71 = v384;
            v72 = v383;
            if (v379 != 1) {
              v70 = v384 + (int)v377;
              v71 = v384;
              v112 = 0;
              v72 = v383;
              do {
                v113 = &v72[(int)v377];
                v114 = v70 + (int)v377;
                LOBYTE(v115) = 0;
                LOBYTE(v116) = 0;
                LOBYTE(v117) = 0;
                if (*(unsigned __int8*)(v71 + 1) <=
                    (unsigned int)*(unsigned __int8*)(v70 + 1)) {
                  LOBYTE(v118) = *(_BYTE*)(v70 + 1);
                }
                else {
                  LOBYTE(v118) = *(_BYTE*)(v71 + 1);
                }
                v119 = 1;
                do {
                  while (1) {
                    v121 = v118;
                    if ((v119 & 1) == 0) {
                      break;
                    }
                    v122 = v119 + 1;
                    v117 = (unsigned __int8)v117;
                    if (*(unsigned __int8*)(v71 + v119 + 1) <=
                        (unsigned int)*(unsigned __int8*)(v70 + v119 + 1)) {
                      v118 = *(unsigned __int8*)(v70 + v119 + 1);
                    }
                    else {
                      v118 = *(unsigned __int8*)(v71 + v119 + 1);
                    }
                    v116 = *(unsigned __int8*)(v114 + v122);
                    if (v116 <= *(unsigned __int8*)(v114 + v119)) {
                      v116 = *(unsigned __int8*)(v114 + v119);
                    }
                    if (v116 <= *(unsigned __int8*)(v114 + v119 - 1)) {
                      v123 = *(unsigned __int8*)(v114 + v119 - 1);
                    }
                    else {
                      v123 = v116;
                    }
                    v115 = v121;
                    if (v121 <= v118) {
                      v115 = v118;
                    }
                    if ((unsigned __int8)v117 <= v123) {
                      v117 = v123;
                    }
                    if (v115 > v117) {
                      LOBYTE(v117) = v115;
                    }
                    if (*(_BYTE*)(v70 + v119) != 0) {
                      LOBYTE(v117) = v13;
                    }
                    v113[v119++] = v117;
                    LOBYTE(v117) = v121;
                    if (v122 == v66) {
                      goto LABEL_185;
                    }
                  }
                  v120 = v119 | 1;
                  v118 = *(unsigned __int8*)(v71 + (v119 | 1));
                  if (v118 <= *(unsigned __int8*)(v70 + (v119 | 1))) {
                    v118 = *(unsigned __int8*)(v70 + (v119 | 1));
                  }
                  v117 = *(unsigned __int8*)(v114 + v120);
                  if ((unsigned __int8)v116 > v117) {
                    v117 = (unsigned __int8)v116;
                  }
                  if (v118 > v117) {
                    v117 = v118;
                  }
                  if ((unsigned __int8)v115 > v117) {
                    LOBYTE(v117) = v115;
                  }
                  if (*(_BYTE*)(v70 + v119) != 0) {
                    LOBYTE(v117) = v13;
                  }
                  v113[v119] = v117;
                  v119 |= 1uLL;
                  LOBYTE(v117) = v121;
                } while (v120 != v66);
              LABEL_185:
                v124 = v71 + (int)v377;
                v72 = &v113[(int)v377];
                v70 = v114 + (int)v377;
                LOBYTE(v125) = 0;
                LOBYTE(v126) = 0;
                LOBYTE(v127) = 0;
                if (*(unsigned __int8*)(v124 + 1) <=
                    (unsigned int)*(unsigned __int8*)(v114 + 1)) {
                  LOBYTE(v128) = *(_BYTE*)(v114 + 1);
                }
                else {
                  LOBYTE(v128) = *(_BYTE*)(v124 + 1);
                }
                v129 = 1;
                do {
                  while (1) {
                    v130 = v128;
                    if ((v129 & 1) == 0) {
                      break;
                    }
                    v4 = v129 + 1;
                    v127 = (unsigned __int8)v127;
                    if (*(unsigned __int8*)(v124 + v129 + 1) <=
                        (unsigned int)*(unsigned __int8*)(v114 + v129 + 1)) {
                      v128 = *(unsigned __int8*)(v114 + v129 + 1);
                    }
                    else {
                      v128 = *(unsigned __int8*)(v124 + v129 + 1);
                    }
                    v126 = *(unsigned __int8*)(v70 + v4);
                    if (v126 <= *(unsigned __int8*)(v70 + v129)) {
                      v126 = *(unsigned __int8*)(v70 + v129);
                    }
                    if (v126 <= *(unsigned __int8*)(v70 + v129 - 1)) {
                      v131 = *(unsigned __int8*)(v70 + v129 - 1);
                    }
                    else {
                      v131 = v126;
                    }
                    v125 = v130;
                    if (v130 <= v128) {
                      v125 = v128;
                    }
                    if ((unsigned __int8)v127 <= v131) {
                      v127 = v131;
                    }
                    if (v125 > v127) {
                      LOBYTE(v127) = v125;
                    }
                    if (*(_BYTE*)(v114 + v129) != 0) {
                      LOBYTE(v127) = v13;
                    }
                    v72[v129++] = v127;
                    LOBYTE(v127) = v130;
                    if (v4 == v66) {
                      goto LABEL_151;
                    }
                  }
                  v4 = v129 | 1;
                  v128 = *(unsigned __int8*)(v124 + (v129 | 1));
                  if (v128 <= *(unsigned __int8*)(v114 + (v129 | 1))) {
                    v128 = *(unsigned __int8*)(v114 + (v129 | 1));
                  }
                  v127 = *(unsigned __int8*)(v70 + v4);
                  if ((unsigned __int8)v126 > v127) {
                    v127 = (unsigned __int8)v126;
                  }
                  if (v128 > v127) {
                    v127 = v128;
                  }
                  if ((unsigned __int8)v125 > v127) {
                    LOBYTE(v127) = v125;
                  }
                  if (*(_BYTE*)(v114 + v129) != 0) {
                    LOBYTE(v127) = v13;
                  }
                  v72[v129] = v127;
                  v129 |= 1uLL;
                  LOBYTE(v127) = v130;
                } while (v4 != v66);
              LABEL_151:
                v71 = v124 + (int)v377;
                v112 += 2;
              } while (v112 != v379 - (v380 & 1));
            }
            if ((v380 & 1) != 0) {
              v73 = &v72[(int)v377];
              v74 = v70 + (int)v377;
              LOBYTE(v75) = 0;
              LOBYTE(v76) = 0;
              LOBYTE(v4) = 0;
              if (*(unsigned __int8*)(v71 + 1) <=
                  (unsigned int)*(unsigned __int8*)(v70 + 1)) {
                v77 = *(unsigned __int8*)(v70 + 1);
              }
              else {
                v77 = *(unsigned __int8*)(v71 + 1);
              }
              v78 = 1;
              do {
                while (1) {
                  v81 = v77;
                  if ((v78 & 1) == 0) {
                    break;
                  }
                  v82 = v78 + 1;
                  LODWORD(v4) = (unsigned __int8)v4;
                  if (*(unsigned __int8*)(v71 + v78 + 1) <=
                      (unsigned int)*(unsigned __int8*)(v70 + v78 + 1)) {
                    v77 = *(unsigned __int8*)(v70 + v78 + 1);
                  }
                  else {
                    v77 = *(unsigned __int8*)(v71 + v78 + 1);
                  }
                  v76 = *(unsigned __int8*)(v74 + v82);
                  if (v76 <= *(unsigned __int8*)(v74 + v78)) {
                    v76 = *(unsigned __int8*)(v74 + v78);
                  }
                  if (v76 <= *(unsigned __int8*)(v74 + v78 - 1)) {
                    v83 = *(unsigned __int8*)(v74 + v78 - 1);
                  }
                  else {
                    v83 = v76;
                  }
                  v75 = (unsigned __int8)v81;
                  if ((unsigned __int8)v81 <= v77) {
                    v75 = v77;
                  }
                  if ((unsigned __int8)v4 <= v83) {
                    LODWORD(v4) = v83;
                  }
                  if (v75 > (unsigned int)v4) {
                    LOBYTE(v4) = v75;
                  }
                  if (*(_BYTE*)(v70 + v78) != 0) {
                    LOBYTE(v4) = v13;
                  }
                  v73[v78++] = v4;
                  v4 = v81;
                  if (v82 == v66) {
                    goto LABEL_64;
                  }
                }
                v79 = v78 | 1;
                v77 = *(unsigned __int8*)(v71 + (v78 | 1));
                if (v77 <= *(unsigned __int8*)(v70 + (v78 | 1))) {
                  v77 = *(unsigned __int8*)(v70 + (v78 | 1));
                }
                v80 = *(unsigned __int8*)(v74 + v79);
                if ((unsigned __int8)v76 > v80) {
                  v80 = (unsigned __int8)v76;
                }
                if (v77 > v80) {
                  v80 = v77;
                }
                if ((unsigned __int8)v75 > v80) {
                  LOBYTE(v80) = v75;
                }
                if (*(_BYTE*)(v70 + v78) != 0) {
                  LOBYTE(v80) = v13;
                }
                v73[v78] = v80;
                v78 |= 1uLL;
                v4 = v81;
              } while (v79 != v66);
            }
          }
        }
      LABEL_64:
        --v65;
      } while (v65 != 0);
    }
    v132 = FSS_free_plt(v372, v384);
    if ((*((_BYTE*)v372 + 76) & 0xB0) == 0) {
      goto LABEL_325;
    }
    v135 = *(__int16*)(a2 + 28);
    LOWORD(v136) = *(_WORD*)(a2 + 28);
    v137 = &v383[(unsigned int)((v381 + v135) * v373) + v373];
    v138 = *(__int16*)(a2 + 30);
    v139 = *(unsigned __int16*)(a2 + 36);
    if (v139 != 2) {
      if (v139 != 4) {
        if (v139 == 8 && v138 >= 1) {
          if ((unsigned int)v138 >= 4) {
            v224 = 0;
            do {
              if ((__int16)v136 >= 1) {
                v225 = 0;
                do {
                  v226 = *v17++;
                  ++v225;
                  *v137++ -= v226;
                } while (v225 < *(__int16*)(a2 + 28));
                LOWORD(v136) = *(_WORD*)(a2 + 28);
              }
              v227 = &v137[v381];
              if ((__int16)v136 >= 1) {
                v228 = 0;
                do {
                  v229 = *v17++;
                  ++v228;
                  *v227++ -= v229;
                } while (v228 < *(__int16*)(a2 + 28));
                LOWORD(v136) = *(_WORD*)(a2 + 28);
              }
              v230 = &v227[v381];
              if ((__int16)v136 >= 1) {
                v231 = 0;
                do {
                  v232 = *v17++;
                  ++v231;
                  *v230++ -= v232;
                } while (v231 < *(__int16*)(a2 + 28));
                LOWORD(v136) = *(_WORD*)(a2 + 28);
              }
              v233 = &v230[v381];
              if ((__int16)v136 >= 1) {
                v234 = 0;
                do {
                  v235 = *v17++;
                  ++v234;
                  *v233++ -= v235;
                } while (v234 < *(__int16*)(a2 + 28));
                LOWORD(v136) = *(_WORD*)(a2 + 28);
              }
              v137 = &v233[v381];
              v224 += 4;
            } while (v224 != (v138 & 0x7FFC));
          }
          if ((v138 & 3) != 0) {
            v140 = v138 & 3;
            v141 = 0;
            do {
              if ((__int16)v136 >= 1) {
                v142 = 0;
                do {
                  v143 = *v17++;
                  ++v142;
                  *v137++ -= v143;
                  v136 = *(__int16*)(a2 + 28);
                } while (v142 < v136);
              }
              v137 += v381;
              ++v141;
            } while (v141 != v140);
          }
        }
        goto LABEL_325;
      }
      if (v138 >= 1) {
        v144 = v135 >> 1;
        if (v135 >> 1 > 0) {
          for (i = 0; i != v138; ++i) {
            while (1) {
              v147 = v144 & 0x7FFFFFF8;
              if (v144 >= 8) {
                do {
                  v148 = v137[15];
                  v147 -= 8;
                  v149 = v137[1];
                  *v137 -= (unsigned __int8)*v17 >> 4;
                  v150 = v149 - (*v17 & 0xF);
                  v151 = v137[2];
                  v137[1] = v150;
                  v152 = v151 - ((unsigned __int8)v17[1] >> 4);
                  v153 = v137[3];
                  v137[2] = v152;
                  v154 = v153 - (v17[1] & 0xF);
                  v155 = v137[4];
                  v137[3] = v154;
                  v156 = v155 - ((unsigned __int8)v17[2] >> 4);
                  v157 = v137[5];
                  v137[4] = v156;
                  v158 = v157 - (v17[2] & 0xF);
                  v159 = v137[6];
                  v137[5] = v158;
                  v160 = v159 - ((unsigned __int8)v17[3] >> 4);
                  v161 = v137[7];
                  v137[6] = v160;
                  v162 = v161 - (v17[3] & 0xF);
                  v163 = v137[8];
                  v137[7] = v162;
                  v164 = v163 - ((unsigned __int8)v17[4] >> 4);
                  v165 = v137[9];
                  v137[8] = v164;
                  v166 = v165 - (v17[4] & 0xF);
                  v167 = v137[10];
                  v137[9] = v166;
                  v168 = v167 - ((unsigned __int8)v17[5] >> 4);
                  v169 = v137[11];
                  v137[10] = v168;
                  v170 = v169 - (v17[5] & 0xF);
                  v171 = v137[12];
                  v137[11] = v170;
                  v172 = v171 - ((unsigned __int8)v17[6] >> 4);
                  v173 = v137[13];
                  v137[12] = v172;
                  v174 = v173 - (v17[6] & 0xF);
                  v175 = v137[14];
                  v137[13] = v174;
                  v176 = v175 - ((unsigned __int8)v17[7] >> 4);
                  v134 = v137 + 16;
                  v137[14] = v176;
                  v177 = v17[7];
                  v17 += 8;
                  v137[15] = v148 - (v177 & 0xF);
                  v137 += 16;
                } while (v147 != 0);
                v133 = v134 - 2;
                v4 = (__int64)(v17 - 1);
                v137 = v134;
              }
              if ((((unsigned int)v135 >> 1) & 7) != 0) {
                v178 = ((unsigned int)v135 >> 1) & 7;
                do {
                  --v178;
                  v179 = v137[1];
                  *v137 -= (unsigned __int8)*v17 >> 4;
                  v180 = *v17++;
                  v137[1] = v179 - (v180 & 0xF);
                  v137 += 2;
                } while (v178 != 0);
                v133 = v137 - 2;
                v4 = (__int64)(v17 - 1);
                v134 = v137;
              }
              if ((*(_WORD*)(a2 + 28) & 1) == 0) {
                break;
              }
              v146 = (unsigned __int8)*v17;
              v17 = (char*)(v4 + 2);
              *v134 -= v146 >> 4;
              ++i;
              v137 = &v133[v381 + 3];
              if (i == v138) {
                goto LABEL_325;
              }
            }
            v137 = &v133[v381 + 2];
          }
          goto LABEL_325;
        }
        if ((unsigned int)v138 < 4) {
        LABEL_284:
          if ((v138 & 3) != 0) {
            v236 = v138 & 3;
            do {
              if ((*(_WORD*)(a2 + 28) & 1) != 0) {
                v237 = (unsigned __int8)*v17++;
                *v137++ -= v237 >> 4;
              }
              v137 += v381;
              --v236;
            } while (v236 != 0);
          }
          goto LABEL_325;
        }
        v251 = v138 & 0x7FFC;
        while ((*(_WORD*)(a2 + 28) & 1) != 0) {
          v255 = (unsigned __int8)*v17++;
          *v137 -= v255 >> 4;
          v252 = &v137[v381 + 1];
          if ((*(_WORD*)(a2 + 28) & 1) == 0) {
            goto LABEL_303;
          }
          v256 = (unsigned __int8)*v17++;
          *v252 -= v256 >> 4;
          v253 = &v252[v381 + 1];
          if ((*(_WORD*)(a2 + 28) & 1) == 0) {
          LABEL_304:
            v254 = &v253[v381];
            if ((*(_WORD*)(a2 + 28) & 1) != 0) {
              goto LABEL_309;
            }
            goto LABEL_300;
          }
        LABEL_308:
          v257 = (unsigned __int8)*v17++;
          *v253 -= v257 >> 4;
          v254 = &v253[v381 + 1];
          if ((*(_WORD*)(a2 + 28) & 1) != 0) {
          LABEL_309:
            v258 = (unsigned __int8)*v17++;
            *v254++ -= v258 >> 4;
          }
        LABEL_300:
          v137 = &v254[v381];
          v251 -= 4;
          if (v251 == 0) {
            goto LABEL_284;
          }
        }
        v252 = &v137[v381];
      LABEL_303:
        v253 = &v252[v381];
        if ((*(_WORD*)(a2 + 28) & 1) == 0) {
          goto LABEL_304;
        }
        goto LABEL_308;
      }
    LABEL_325:
      if (a4 < 0x10000) {
        v290 = FSS_malloc_plt(v372, 1024);
        if (v290 != 0) {
          v291 = v290;
          v292 = 0;
          v293 = 0;
          v294 = v375;
          v4 = (unsigned int)(2 * a4);
          do {
            v295 = (unsigned int*)(v291 + v292);
            v292 += 32;
            *v295 = HIWORD(v293);
            v295[1] = (a4 + v293) >> 16;
            v295[2] = ((unsigned int)v4 + v293) >> 16;
            v295[3] = (3 * a4 + v293) >> 16;
            v295[4] = (4 * a4 + v293) >> 16;
            v295[5] = (5 * a4 + v293) >> 16;
            v296 = 6 * a4 + v293;
            v297 = 7 * a4 + v293;
            v293 += 8 * a4;
            v295[6] = HIWORD(v296);
            v295[7] = HIWORD(v297);
          } while (v292 != 1024);
          if ((_DWORD)v375 != 0) {
            v298 = v375 & 7;
            v299 = v383;
            if ((v375 & 7) != 0) {
              v294 = v375 - v298;
              v299 = v383;
              do {
                --v298;
                *v299 = *(_DWORD*)(v291 + 4LL * *v299);
                ++v299;
              } while (v298 != 0);
            }
            if ((unsigned int)v375 >= 8) {
              do {
                v294 -= 8;
                *v299 = *(_DWORD*)(v291 + 4LL * *v299);
                v299[1] = *(_DWORD*)(v291 + 4LL * v299[1]);
                v299[2] = *(_DWORD*)(v291 + 4LL * v299[2]);
                v299[3] = *(_DWORD*)(v291 + 4LL * v299[3]);
                v299[4] = *(_DWORD*)(v291 + 4LL * v299[4]);
                v299[5] = *(_DWORD*)(v291 + 4LL * v299[5]);
                v299[6] = *(_DWORD*)(v291 + 4LL * v299[6]);
                v299[7] = *(_DWORD*)(v291 + 4LL * v299[7]);
                v299 += 8;
              } while (v294 != 0);
            }
          }
          FSS_free_plt(v372, v291);
        }
      }
      v300 = (unsigned int)(v377 * *(__int16*)(a2 + 36) + 7) >> 3;
      v301 = v300 * v376 + 40;
      v302 = FSS_calloc_plt(v372, v301);
      v306 = v383;
      v307 = v302;
      if (v302 == 0) {
        goto LABEL_370;
      }
      *(_DWORD*)(v302 + 8) = v301;
      v308 = (_BYTE*)(v302 + 40);
      *(_WORD*)(v302 + 12) = *(_WORD*)(a2 + 12) - (a3 + 1);
      v309 = *(_WORD*)(a2 + 14);
      *(_WORD*)(v302 + 28) = v377;
      *(_WORD*)(v302 + 32) = v300;
      *(_WORD*)(v302 + 30) = v376;
      *(_WORD*)(v302 + 14) = v309 + a3 + 1;
      *(_WORD*)(v302 + 16) = *(_WORD*)(a2 + 16);
      *(_WORD*)(v302 + 18) = *(_WORD*)(a2 + 18);
      *(_DWORD*)(v302 + 20) = *(_DWORD*)(a2 + 20);
      *(_DWORD*)(v302 + 24) = *(_DWORD*)(a2 + 24);
      *(_WORD*)(v302 + 36) = *(_WORD*)(a2 + 36);
      *(_WORD*)(v302 + 38) = *(_WORD*)(a2 + 38);
      v310 = *(unsigned __int16*)(a2 + 36);
      if (v310 == 8) {
        if (v376 != 0) {
          v316 = v376 & 7;
          if ((unsigned int)(v380 + 2 * v374 + 1) >= 7) {
            v325 = v376 & 0xFFFFFFF8;
            v317 = v383;
            do {
              memcpy_plt(v308, v317, v377);
              v326 = &v308[v377];
              v327 = &v317[v377];
              memcpy_plt(v326, v327, v377);
              v328 = &v326[v377];
              v329 = &v327[v377];
              memcpy_plt(v328, v329, v377);
              v330 = &v328[v377];
              v331 = &v329[v377];
              memcpy_plt(v330, v331, v377);
              v332 = &v330[v377];
              v333 = &v331[v377];
              memcpy_plt(v332, v333, v377);
              v334 = &v332[v377];
              v335 = &v333[v377];
              memcpy_plt(v334, v335, v377);
              v336 = &v334[v377];
              v337 = &v335[v377];
              memcpy_plt(v336, v337, v377);
              v338 = &v336[v377];
              v339 = (__int64)&v337[v377];
              memcpy_plt(v338, (_BYTE*)v339, v377);
              v308 = &v338[v377];
              v317 = (_BYTE*)(v339 + v377);
              v325 -= 8;
            } while (v325 != 0);
          }
          else {
            v317 = v383;
          }
          v306 = v383;
          if ((v376 & 7) != 0) {
            v340 = 0;
            do {
              memcpy_plt(&v308[v340], &v317[v340], v377);
              v306 = v383;
              v340 += v377;
              --v316;
            } while (v316 != 0);
          }
        }
        goto LABEL_370;
      }
      if (v310 == 4) {
        if (v376 != 0) {
          if ((unsigned int)v377 >= 2) {
            v318 = 0;
            v319 = v383;
            do {
              v320 = ((unsigned int)v377 >> 1) & 0x7FFFFFF8;
              if (((unsigned int)v377 >> 1) - 1 >= 7) {
                do {
                  v320 -= 8;
                  *v308 = v319[1] | (16 * *v319);
                  v308[1] = v319[3] | (16 * v319[2]);
                  v308[2] = v319[5] | (16 * v319[4]);
                  v308[3] = v319[7] | (16 * v319[6]);
                  v308[4] = v319[9] | (16 * v319[8]);
                  v308[5] = v319[11] | (16 * v319[10]);
                  v308[6] = v319[13] | (16 * v319[12]);
                  v303 = v319 + 16;
                  v304 = v308 + 8;
                  v308[7] = v319[15] | (16 * v319[14]);
                  v308 += 8;
                  v319 += 16;
                } while (v320 != 0);
                v4 = (__int64)(v303 - 2);
                v305 = v304 - 1;
                v308 = v304;
                v319 = v303;
              }
              if ((((unsigned int)v377 >> 1) & 7) != 0) {
                v321 = ((unsigned int)v377 >> 1) & 7;
                do {
                  v322 = *v319;
                  v323 = v319[1];
                  v319 += 2;
                  --v321;
                  *v308++ = v323 | (16 * v322);
                } while (v321 != 0);
                v305 = v308 - 1;
                v4 = (__int64)(v319 - 2);
                v303 = v319;
                v304 = v308;
              }
              if ((v62 & 1) != 0) {
                v324 = *v303;
                v303 = (_BYTE*)(v4 + 3);
                *v304 = 16 * v324;
                v304 = v305 + 2;
              }
              ++v318;
              v308 = v304;
              v319 = v303;
            } while (v318 != v376);
          }
          else if ((v62 & 1) != 0) {
            v314 = v376 & 7;
            if ((unsigned int)(v380 + 2 * v374 + 1) >= 7) {
              v355 = v376 & 0xFFFFFFF8;
              v356 = v383;
              do {
                v355 -= 8;
                *v308 = 16 * *v356;
                v308[1] = 16 * v356[1];
                v308[2] = 16 * v356[2];
                v308[3] = 16 * v356[3];
                v308[4] = 16 * v356[4];
                v308[5] = 16 * v356[5];
                v308[6] = 16 * v356[6];
                v315 = v356 + 8;
                v308[7] = 16 * v356[7];
                v308 += 8;
                v356 += 8;
              } while (v355 != 0);
            }
            else {
              v315 = v383;
            }
            if ((v376 & 7) != 0) {
              do {
                v357 = *v315++;
                --v314;
                *v308++ = 16 * v357;
              } while (v314 != 0);
            }
          }
        }
        goto LABEL_370;
      }
      if (v310 != 2 || v376 == 0) {
      LABEL_370:
        FSS_free_plt(v372, v306);
        FSS_free_char_plt(v372, (void*)a2);
        return v307;
      }
      v311 = v377 & 3;
      if ((unsigned int)v377 < 4) {
        if (((unsigned __int8)v377 & 3u) > 1) {
          if (v311 == 2) {
            v353 = v376 & 7;
            if ((unsigned int)(v380 + 2 * v374 + 1) >= 7) {
              v363 = v376 & 0xFFFFFFF8;
              v364 = v383;
              do {
                v363 -= 8;
                *v308 = (16 * v364[1]) | (*v364 << 6);
                v308[1] = (16 * v364[3]) | (v364[2] << 6);
                v308[2] = (16 * v364[5]) | (v364[4] << 6);
                v308[3] = (16 * v364[7]) | (v364[6] << 6);
                v308[4] = (16 * v364[9]) | (v364[8] << 6);
                v308[5] = (16 * v364[11]) | (v364[10] << 6);
                v308[6] = (16 * v364[13]) | (v364[12] << 6);
                v354 = v364 + 16;
                v308[7] = (16 * v364[15]) | (v364[14] << 6);
                v308 += 8;
                v364 += 16;
              } while (v363 != 0);
            }
            else {
              v354 = v383;
            }
            if ((v376 & 7) != 0) {
              do {
                v365 = v354[1];
                v366 = *v354;
                v354 += 2;
                --v353;
                *v308++ = (16 * v365) | (v366 << 6);
              } while (v353 != 0);
            }
          }
          else {
            v358 = v376 & 3;
            if ((unsigned int)(v380 + 2 * v374 + 1) >= 3) {
              v367 = v376 & 0xFFFFFFFC;
              v368 = v383;
              do {
                v367 -= 4;
                *v308 = (16 * v368[1]) | (*v368 << 6) | (4 * v368[2]);
                v308[1] = (16 * v368[4]) | (v368[3] << 6) | (4 * v368[5]);
                v308[2] = (16 * v368[7]) | (v368[6] << 6) | (4 * v368[8]);
                v359 = v368 + 12;
                v308[3] = (16 * v368[10]) | (v368[9] << 6) | (4 * v368[11]);
                v308 += 4;
                v368 += 12;
              } while (v367 != 0);
            }
            else {
              v359 = v383;
            }
            if ((v376 & 3) != 0) {
              do {
                v369 = v359[1];
                v370 = *v359;
                v371 = v359[2];
                --v358;
                v359 += 3;
                *v308++ = (16 * v369) | (v370 << 6) | (4 * v371);
              } while (v358 != 0);
            }
          }
        }
        else if ((v377 & 3) != 0) {
          v312 = v376 & 7;
          if ((unsigned int)(v380 + 2 * v374 + 1) >= 7) {
            v360 = v376 & 0xFFFFFFF8;
            v361 = v383;
            do {
              v360 -= 8;
              *v308 = *v361 << 6;
              v308[1] = v361[1] << 6;
              v308[2] = v361[2] << 6;
              v308[3] = v361[3] << 6;
              v308[4] = v361[4] << 6;
              v308[5] = v361[5] << 6;
              v308[6] = v361[6] << 6;
              v313 = v361 + 8;
              v308[7] = v361[7] << 6;
              v308 += 8;
              v361 += 8;
            } while (v360 != 0);
          }
          else {
            v313 = v383;
          }
          if ((v376 & 7) != 0) {
            do {
              v362 = *v313++;
              --v312;
              *v308++ = v362 << 6;
            } while (v312 != 0);
          }
        }
        goto LABEL_370;
      }
      v341 = 0;
      v342 = v383;
      while (1) {
        v345 = ((unsigned int)v377 >> 2) & 0x3FFFFFF8;
        if (((unsigned int)v377 >> 2) - 1 >= 7) {
          do {
            v345 -= 8;
            *v308 = (16 * v342[1]) | (*v342 << 6) | (4 * v342[2]) | v342[3];
            v308[1] = (16 * v342[5]) | (v342[4] << 6) | (4 * v342[6]) | v342[7];
            v308[2] =
                (16 * v342[9]) | (v342[8] << 6) | (4 * v342[10]) | v342[11];
            v308[3] =
                (16 * v342[13]) | (v342[12] << 6) | (4 * v342[14]) | v342[15];
            v308[4] =
                (16 * v342[17]) | (v342[16] << 6) | (4 * v342[18]) | v342[19];
            v308[5] =
                (16 * v342[21]) | (v342[20] << 6) | (4 * v342[22]) | v342[23];
            v308[6] =
                (16 * v342[25]) | (v342[24] << 6) | (4 * v342[26]) | v342[27];
            v303 = v342 + 32;
            v304 = v308 + 8;
            v308[7] =
                (16 * v342[29]) | (v342[28] << 6) | (4 * v342[30]) | v342[31];
            v342 += 32;
            v308 += 8;
          } while (v345 != 0);
          v4 = (__int64)(v303 - 4);
          v305 = v304 - 1;
          v308 = v304;
          v342 = v303;
        }
        if ((((unsigned int)v377 >> 2) & 7) != 0) {
          v346 = ((unsigned int)v377 >> 2) & 7;
          do {
            v347 = *v342;
            v348 = v342[2];
            --v346;
            v349 = 16 * v342[1];
            v350 = v342[3];
            v342 += 4;
            *v308++ = v349 | (v347 << 6) | (4 * v348) | v350;
          } while (v346 != 0);
          v305 = v308 - 1;
          v4 = (__int64)(v342 - 4);
          v303 = v342;
          v304 = v308;
        }
        if (((unsigned __int8)v377 & 3u) > 1) {
          v352 = *v303;
          if (v311 == 2) {
            v303 = (_BYTE*)(v4 + 6);
            v344 = (16 * *(_BYTE*)(v4 + 5)) | (v352 << 6);
          }
          else {
            v343 = 16 * *(_BYTE*)(v4 + 5);
            v303 = (_BYTE*)(v4 + 7);
            v4 = *(unsigned __int8*)(v4 + 6);
            v344 = v343 | (v352 << 6) | (4 * v4);
          }
        }
        else {
          if ((v377 & 3) == 0) {
            goto LABEL_375;
          }
          v351 = *v303;
          v303 = (_BYTE*)(v4 + 5);
          v344 = v351 << 6;
        }
        *v304 = v344;
        v304 = v305 + 2;
      LABEL_375:
        ++v341;
        v308 = v304;
        v342 = v303;
        if (v341 == v376) {
          goto LABEL_370;
        }
      }
    }
    if (v138 < 1) {
      goto LABEL_325;
    }
    v181 = v135 >> 2;
    v182 = v136 & 3;
    if (v135 >> 2 < 1) {
      if ((v136 & 3u) > 1) {
        if (v182 == 2) {
          if ((unsigned int)v138 >= 4) {
            v259 = v138 & 0x7FFC;
            v260 = 2LL * a3 + 4;
            do {
              v261 = v137;
              v259 -= 4;
              v262 = v137[1];
              *v137 -= (unsigned __int8)*v17 >> 6;
              v263 = v262 - (((unsigned __int8)*v17 >> 4) & 3);
              v264 = &v261[v260];
              v261[1] = v263;
              v265 = v261[v260 + 1];
              *v264 = v261[v260] - ((unsigned __int8)v17[1] >> 6);
              v264[1] = v265 - (((unsigned __int8)v17[1] >> 4) & 3);
              v266 = &v261[v260 + v260];
              v267 = v266[1];
              *v266 -= (unsigned __int8)v17[2] >> 6;
              v266[1] = v267 - (((unsigned __int8)v17[2] >> 4) & 3);
              v268 = &v266[v260];
              v269 = v268[1];
              *v268 -= (unsigned __int8)v17[3] >> 6;
              v270 = (unsigned __int8)v17[3];
              v17 += 4;
              v268[1] = v269 - ((v270 >> 4) & 3);
              v137 = &v268[v260];
            } while (v259 != 0);
            v137 = &v261[2 * v381 + 8 + v381 + v381];
          }
          if ((v138 & 3) != 0) {
            v271 = v138 & 3;
            v272 = v137 + 1;
            do {
              --v271;
              v273 = *v272;
              *(v272 - 1) -= (unsigned __int8)*v17 >> 6;
              v274 = (unsigned __int8)*v17++;
              *v272 = v273 - ((v274 >> 4) & 3);
              v272 += 2 * a3 + 4;
            } while (v271 != 0);
          }
        }
        else {
          if (v138 != 1) {
            v275 = v138 & 0x7FFE;
            v276 = 2LL * a3 + 5;
            do {
              v277 = v137;
              v275 -= 2;
              v278 = v137[1];
              *v137 -= (unsigned __int8)*v17 >> 6;
              v279 = v278 - (((unsigned __int8)*v17 >> 4) & 3);
              v280 = v277[2];
              v277[1] = v279;
              v281 = v280 - (((unsigned __int8)*v17 >> 2) & 3);
              v282 = &v277[v276];
              v277[2] = v281;
              v283 = v277[v276 + 1];
              *v282 = v277[v276] - ((unsigned __int8)v17[1] >> 6);
              v284 = v283 - (((unsigned __int8)v17[1] >> 4) & 3);
              v285 = v277[v276 + 2];
              v282[1] = v284;
              v286 = (unsigned __int8)v17[1];
              v17 += 2;
              v282[2] = v285 - ((v286 >> 2) & 3);
              v137 = &v277[v276 + v276];
            } while (v275 != 0);
            v137 = &v277[v381 + 6 + v381];
          }
          if ((v138 & 1) != 0) {
            v287 = v137[1];
            *v137 -= (unsigned __int8)*v17 >> 6;
            v288 = v287 - (((unsigned __int8)*v17 >> 4) & 3);
            v289 = v137[2];
            v137[1] = v288;
            v137[2] = v289 - (((unsigned __int8)*v17 >> 2) & 3);
          }
        }
      }
      else if ((v136 & 3) != 0) {
        if ((unsigned int)v138 >= 8) {
          v238 = v138 & 0x7FF8;
          v239 = 2LL * a3 + 3;
          do {
            v240 = v137;
            v238 -= 8;
            v241 = v137[v239];
            *v137 -= (unsigned __int8)*v17 >> 6;
            v137[v239] = v241 - ((unsigned __int8)v17[1] >> 6);
            v242 = &v137[v239 + v239];
            *v242 -= (unsigned __int8)v17[2] >> 6;
            v243 = &v242[v239];
            *v243 -= (unsigned __int8)v17[3] >> 6;
            v244 = &v243[v239];
            *v244 -= (unsigned __int8)v17[4] >> 6;
            v245 = &v244[v239];
            *v245 -= (unsigned __int8)v17[5] >> 6;
            v246 = &v245[v239];
            *v246 -= (unsigned __int8)v17[6] >> 6;
            v247 = &v246[v239];
            v248 = (unsigned __int8)v17[7];
            v17 += 8;
            *v247 -= v248 >> 6;
            v137 = &v247[v239];
          } while (v238 != 0);
          v137 = &v240[3 * v381 + 8 + 2 * v381 + 2 * v381 + v381];
        }
        if ((v138 & 7) != 0) {
          v249 = v138 & 7;
          do {
            v250 = (unsigned __int8)*v17++;
            --v249;
            *v137 -= v250 >> 6;
            v137 += v381 + 1;
          } while (v249 != 0);
        }
      }
      goto LABEL_325;
    }
    v183 = ((unsigned int)v135 >> 2) & 3;
    v184 = 0;
    while (1) {
      v185 = v181 & 0x7FFFFFFC;
      if (v181 >= 4) {
        do {
          v186 = v137[15];
          v185 -= 4;
          v187 = v137[1];
          *v137 -= (unsigned __int8)*v17 >> 6;
          v188 = v187 - (((unsigned __int8)*v17 >> 4) & 3);
          v189 = v137[2];
          v137[1] = v188;
          v190 = v189 - (((unsigned __int8)*v17 >> 2) & 3);
          v191 = v137[3];
          v137[2] = v190;
          v192 = v191 - (*v17 & 3);
          v193 = v137[4];
          v137[3] = v192;
          v194 = v193 - ((unsigned __int8)v17[1] >> 6);
          v195 = v137[5];
          v137[4] = v194;
          v196 = v195 - (((unsigned __int8)v17[1] >> 4) & 3);
          v197 = v137[6];
          v137[5] = v196;
          v198 = v197 - (((unsigned __int8)v17[1] >> 2) & 3);
          v199 = v137[7];
          v137[6] = v198;
          v200 = v199 - (v17[1] & 3);
          v201 = v137[8];
          v137[7] = v200;
          v202 = v201 - ((unsigned __int8)v17[2] >> 6);
          v203 = v137[9];
          v137[8] = v202;
          v204 = v203 - (((unsigned __int8)v17[2] >> 4) & 3);
          v205 = v137[10];
          v137[9] = v204;
          v206 = v205 - (((unsigned __int8)v17[2] >> 2) & 3);
          v207 = v137[11];
          v137[10] = v206;
          v208 = v207 - (v17[2] & 3);
          v209 = v137[12];
          v137[11] = v208;
          v210 = v209 - ((unsigned __int8)v17[3] >> 6);
          v211 = v137[13];
          v137[12] = v210;
          v212 = v211 - (((unsigned __int8)v17[3] >> 4) & 3);
          v213 = v137[14];
          v137[13] = v212;
          v137[14] = v213 - (((unsigned __int8)v17[3] >> 2) & 3);
          v214 = v17[3];
          v17 += 4;
          v215 = v214 & 3;
          v133 = v137 + 16;
          v137[15] = v186 - v215;
          v137 += 16;
        } while (v185 != 0);
        v4 = (__int64)(v133 - 4);
        v132 = (__int64)(v17 - 1);
        v137 = v133;
      }
      if (v183 != 0) {
        v216 = v183;
        do {
          --v216;
          v217 = v137[1];
          *v137 -= (unsigned __int8)*v17 >> 6;
          v218 = v217 - (((unsigned __int8)*v17 >> 4) & 3);
          v219 = v137[2];
          v137[1] = v218;
          v220 = v219 - (((unsigned __int8)*v17 >> 2) & 3);
          v221 = v137[3];
          v137[2] = v220;
          v222 = *v17++;
          v137[3] = v221 - (v222 & 3);
          v137 += 4;
        } while (v216 != 0);
        v4 = (__int64)(v137 - 4);
        v132 = (__int64)(v17 - 1);
        v133 = v137;
      }
      if (v182 > 1) {
        *v133 -= (unsigned __int8)*v17 >> 6;
        if (v182 == 2) {
          v133 = (_BYTE*)(v4 + 6);
          *(_BYTE*)(v4 + 5) -= ((unsigned __int8)*v17 >> 4) & 3;
        }
        else {
          v223 = *(_BYTE*)(v4 + 6);
          v133 = (_BYTE*)(v4 + 7);
          *(_BYTE*)(v4 + 5) -= ((unsigned __int8)*v17 >> 4) & 3;
          *(_BYTE*)(v4 + 6) = v223 - (((unsigned __int8)*v17 >> 2) & 3);
        }
      }
      else {
        if (v182 == 0) {
          goto LABEL_252;
        }
        *v133 -= (unsigned __int8)*v17 >> 6;
        v133 = (_BYTE*)(v4 + 5);
      }
      v17 = (char*)(v132 + 2);
    LABEL_252:
      v137 = &v133[v381];
      if (++v184 == v138) {
        goto LABEL_325;
      }
    }
  }
  return result;
}

__int64 soft_outline_graymap(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  unsigned int* v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  __int64 v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  unsigned int v32;
  unsigned __int8* v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  unsigned __int64 v39;
  int v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  _QWORD v44[8];

  result = outline_graymap_plt(a1, a2, a3, 0x10000);
  if (result == 0) {
    return result;
  }
  if (*(_DWORD*)(a1 + 72) != 0) {
    return result;
  }
  result = Soften_plt(a1, 0, 0, result);
  if (result == 0 || *(_DWORD*)(a1 + 72) != 0 ||
      *(_DWORD*)(a1 + 116) == 0x10000) {
    return result;
  }
  v7 = *(__int16*)(result + 32);
  v8 = *(__int16*)(result + 30);
  v9 = -1LL << *(_WORD*)(result + 36);
  memset(v44, 0, sizeof(v44));
  if ((_DWORD)v9 == -256) {
    v10 = result;
    v11 = (_QWORD*)FSS_malloc_plt(a1, 1024);
    result = v10;
    if (v11 == nullptr) {
      return result;
    }
    goto LABEL_11;
  }
  v11 = v44;
  if ((_DWORD)v9 != 0) {
  LABEL_11:
    v12 = ~(_DWORD)v9;
    v13 = 0;
    v14 = -v9 & 7;
    if ((unsigned __int64)(unsigned int)-(int)v9 - 1 >= 7) {
      v15 = 0;
      v16 = 0;
      v17 = (unsigned int*)(v11 + 2);
      do {
        v18 = HIWORD(v16);
        v15 -= 8;
        v19 = (a4 + v16) >> 16;
        if (HIWORD(v16) >= v12) {
          v18 = ~(_DWORD)v9;
        }
        if (v19 >= v12) {
          v19 = ~(_DWORD)v9;
        }
        *(v17 - 4) = v18;
        *(v17 - 3) = v19;
        v20 = (2 * a4 + v16) >> 16;
        v21 = (3 * a4 + v16) >> 16;
        if (v20 >= v12) {
          v20 = ~(_DWORD)v9;
        }
        if (v21 >= v12) {
          v21 = ~(_DWORD)v9;
        }
        *(v17 - 2) = v20;
        *(v17 - 1) = v21;
        v22 = (4 * a4 + v16) >> 16;
        v23 = (5 * a4 + v16) >> 16;
        if (v22 >= v12) {
          v22 = ~(_DWORD)v9;
        }
        if (v23 >= v12) {
          v23 = ~(_DWORD)v9;
        }
        *v17 = v22;
        v17[1] = v23;
        v24 = 6 * a4 + v16;
        v25 = 7 * a4 + v16;
        v16 += 8 * a4;
        v26 = HIWORD(v24);
        v27 = HIWORD(v25);
        if (v26 >= v12) {
          v26 = ~(_DWORD)v9;
        }
        if (v27 >= v12) {
          v27 = ~(_DWORD)v9;
        }
        v17[2] = v26;
        v17[3] = v27;
        v17 += 8;
      } while (-(-v9 & 0xFFFFFFF8LL) != v15);
      v13 = -v15;
    }
    if (v14 != 0) {
      v28 = 4 * v13;
      v29 = a4 * v13;
      do {
        v30 = HIWORD(v29);
        v29 += a4;
        if (v30 >= v12) {
          v30 = ~(_DWORD)v9;
        }
        --v14;
        *(_DWORD*)((char*)v11 + v28) = v30;
        v28 += 4;
      } while (v14 != 0);
    }
  }
  v31 = *(unsigned __int16*)(result + 36);
  v32 = v8 * v7;
  v33 = (unsigned __int8*)(result + 40);
  if (v31 == 4) {
    if (v32 != 0) {
      v36 = v32 & 3;
      if ((v32 & 3) != 0) {
        v37 = v32 - v36;
        do {
          --v36;
          *v33 = *((_BYTE*)v11 + 4 * (*v33 & 0xF)) |
                 (16 * *((_BYTE*)v11 + 4 * ((unsigned __int64)*v33 >> 4)));
          ++v33;
        } while (v36 != 0);
      }
      else {
        v37 = v8 * v7;
      }
      if (v32 >= 4) {
        do {
          v37 -= 4;
          *v33 = *((_DWORD*)v11 + (*v33 & 0xF)) |
                 (16 * *((_DWORD*)v11 + ((unsigned __int64)*v33 >> 4)));
          v33[1] = *((_DWORD*)v11 + (v33[1] & 0xF)) |
                   (16 * *((_DWORD*)v11 + ((unsigned __int64)v33[1] >> 4)));
          v33[2] = *((_DWORD*)v11 + (v33[2] & 0xF)) |
                   (16 * *((_DWORD*)v11 + ((unsigned __int64)v33[2] >> 4)));
          v33[3] = *((_BYTE*)v11 + 4 * (v33[3] & 0xF)) |
                   (16 * *((_BYTE*)v11 + 4 * ((unsigned __int64)v33[3] >> 4)));
          v33 += 4;
        } while (v37 != 0);
      }
    }
  }
  else if (v31 == 8) {
    if (v32 != 0) {
      v34 = v32 & 7;
      if ((v32 & 7) != 0) {
        v35 = v32 - v34;
        do {
          --v34;
          *v33 = *((_DWORD*)v11 + *v33);
          ++v33;
        } while (v34 != 0);
      }
      else {
        v35 = v8 * v7;
      }
      if (v32 >= 8) {
        do {
          v35 -= 8;
          *v33 = *((_DWORD*)v11 + *v33);
          v33[1] = *((_DWORD*)v11 + v33[1]);
          v33[2] = *((_DWORD*)v11 + v33[2]);
          v33[3] = *((_DWORD*)v11 + v33[3]);
          v33[4] = *((_DWORD*)v11 + v33[4]);
          v33[5] = *((_DWORD*)v11 + v33[5]);
          v33[6] = *((_DWORD*)v11 + v33[6]);
          v33[7] = *((_DWORD*)v11 + v33[7]);
          v33 += 8;
        } while (v35 != 0);
      }
    }
  }
  else if (v32 != 0) {
    v38 = v8 * v7;
    if ((v32 & 1) != 0) {
      v39 = *(unsigned __int8*)(result + 40);
      v38 = v32 - 1;
      v40 = (16 * *((_DWORD*)v11 + ((v39 >> 4) & 3))) |
            (*((_DWORD*)v11 + (v39 >> 6)) << 6) |
            (4 * *(_DWORD*)((char*)v11 + (v39 & 0xC))) |
            *((_DWORD*)v11 + (v39 & 3));
      v33 = (unsigned __int8*)(result + 41);
      *(_BYTE*)(result + 40) = v40;
    }
    if (v32 != 1) {
      do {
        v41 = *v33;
        v38 -= 2;
        *v33 = (16 * *((_DWORD*)v11 + ((v41 >> 4) & 3))) |
               ((unsigned __int8)*((_DWORD*)v11 + (v41 >> 6)) << 6) |
               (4 * *(_DWORD*)((char*)v11 + (v41 & 0xC))) |
               *((_DWORD*)v11 + (v41 & 3));
        v42 = v33[1];
        v33[1] = (16 * *((_BYTE*)v11 + 4 * ((v42 >> 4) & 3))) |
                 (*((_BYTE*)v11 + 4 * (v42 >> 6)) << 6) |
                 (4 * *((_BYTE*)v11 + (v42 & 0xC))) |
                 *((_BYTE*)v11 + 4 * (v42 & 3));
        v33 += 2;
      } while (v38 != 0);
    }
  }
  if ((_DWORD)v9 == -256) {
    v43 = result;
    FSS_free_plt(a1, v11);
    return v43;
  }
  return result;
}

__int64 Soften(void* a1, int a2, int a3, _WORD* a4)
{
  _WORD* v4;
  int v5;
  unsigned __int16* v6;
  unsigned __int16* v7;
  unsigned int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  __int64 result;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  _WORD* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  int v38;
  __int64 v39;
  _WORD* v40;
  __int64 v41;
  char v42;
  __int64 v43;
  unsigned __int64 v44;
  char v45;
  unsigned int v46;
  int v47;
  int v48;
  int v49;
  unsigned __int64 v50;
  __int64 v51;
  char v52;
  int v53;
  int v54;
  __int64 v55;
  int v56;
  int v57;
  int v58;
  unsigned __int64 v59;
  __int64 v60;
  char v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  __int64 v67;
  char v68;
  int v69;
  __int64 v70;
  _WORD* v71;
  __int64 v72;
  int v73;
  int v74;
  __int64 v75;
  int v76;
  __int64 v77;
  unsigned int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  unsigned __int64 v84;
  __int64 v85;
  char v86;
  int v87;
  int v88;
  unsigned __int64 v89;
  __int64 v90;
  char v91;
  int v92;
  int v93;
  int v94;
  __int64 v95;
  unsigned __int64 v96;
  char v97;
  int v98;
  int v99;
  char v100;
  int v101;
  __int64 v102;
  unsigned __int64 v103;
  char v104;
  int v105;
  int v106;
  __int16 v107;
  int v108;
  int v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  int v123;
  char v124;
  _BYTE* v125;
  unsigned int v126;
  __int64 v127;
  __int64 v128;
  int v129;
  char v130;
  char v131;
  __int64 v132;
  __int64 v133;
  int v134;
  int v135;
  int v136;
  __int64 v137;
  unsigned int v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  unsigned int v149;
  int v150;
  int v151;
  int v152;
  __int64 v153;
  __int64 v154;
  int v155;
  char v156;
  char v157;
  __int64 v158;
  int v159;
  unsigned int v160;
  int v161;
  int v162;
  int v163;
  int v164;
  int v165;
  int v166;
  int v167;
  int v168;
  int v169;
  int v170;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  unsigned int v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  int v182;
  int v183;
  int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  unsigned int v189;
  int v190;
  int v191;
  int v192;
  int v193;
  int v194;
  int v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  int v199;
  unsigned int v200;
  unsigned __int64 v201;
  unsigned __int8* v202;
  int v203;
  int v204;
  __int64 v205;
  char v206;
  _BYTE* v207;
  int v208;
  int v209;
  __int64 v210;
  unsigned int v211;
  unsigned int v212;
  char v213;
  char v214;
  unsigned int v215;
  unsigned int v216;
  unsigned __int64 v217;
  int v218;
  __int64 v219;
  unsigned int v220;
  unsigned __int8* v221;
  unsigned int v222;
  unsigned __int64 v223;
  unsigned __int64 v224;
  int v225;
  int v226;
  int v227;
  int v228;
  int v229;
  int v230;
  int v231;
  int v232;
  __int64 v233;
  int v234;
  int v235;
  int v236;
  int v237;
  int v238;
  unsigned int v239;
  unsigned __int64 v240;
  unsigned __int8* v241;
  _BYTE* v242;
  int v243;
  int v244;
  __int64 v245;
  char v246;
  _BYTE* v247;
  int v248;
  int v249;
  __int64 v250;
  unsigned int v251;
  unsigned int v252;
  char v253;
  char v254;
  unsigned int v255;
  unsigned int v256;
  unsigned __int64 v257;
  int v258;
  __int64 v259;
  unsigned int v260;
  unsigned __int8* v261;
  _BYTE* v262;
  unsigned int v263;
  unsigned __int64 v264;
  unsigned __int64 v265;
  int v266;
  int v267;
  int v268;
  int v269;
  int v270;
  int v271;
  int v272;
  int v273;
  __int64 v274;
  int v275;
  int v276;
  int v277;
  int v278;
  int v279;
  unsigned int v280;
  __int64 v281;
  __int64 v282;
  __int64 v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  int v287;
  int v288;
  __int64 v289;
  _BYTE* v290;
  int v291;
  int v292;
  int v293;
  int v294;
  int v295;
  int v296;
  __int64 v297;
  unsigned int v298;
  int v299;
  int v300;
  int v301;
  int v302;
  int v303;
  int v304;
  int v305;
  int v306;
  __int64 v307;
  int v308;
  int v309;
  __int64 v310;
  int v311;
  __int64 v312;
  __int64 v313;
  __int64 v314;
  int v315;
  int v316;
  __int64 v318;
  int v319;
  unsigned int v320;
  int v321;
  int v322;
  int v323;
  unsigned int v324;
  _WORD* v325;
  int v326;
  unsigned int v327;
  unsigned int v328;
  int v329;
  __int64 v330;
  _QWORD v331[6];

  v4 = a4;
  if (a3 > 4 || a2 > 4 || (a3 & a2) < 0) {
    return (__int64)a4;
  }
  v5 = (__int16)a4[18];
  v331[0] = &SdkData_c3c664;
  v331[1] = &SdkData_c3c670;
  v331[2] = &SdkData_c3c678;
  v331[3] = &SdkData_c3c680;
  v331[4] = &SdkData_c3c688;
  v6 = (unsigned __int16*)v331[a3];
  v7 = (unsigned __int16*)v331[a2];
  v324 = *v6;
  v8 = v324 + (v324 >> 15);
  v320 = *v7;
  v9 = (__int16)(((*v6 + (*v6 >> 15)) & 0xFFFE) + a4[15]);
  v10 = (__int16)(a4[14] + ((*v7 + (*v7 >> 15)) & 0xFFFE));
  if (v10 * v5 >= -7) {
    v11 = v10 * v5 + 7;
  }
  else {
    v11 = v10 * v5 + 14;
  }
  v12 = (__int16)(v11 >> 3) * v9 + 40;
  v329 = (__int16)(v11 >> 3);
  result = FSS_calloc_plt(a1, v12);
  if (result != 0) {
    LODWORD(v14) = v11 >> 3;
    *(_DWORD*)(result + 8) = v12;
    *(_WORD*)(result + 28) = v10;
    v15 = (__int16)v8 >> 1;
    *(_WORD*)(result + 30) = v9;
    v319 = v5;
    v323 = v10;
    v322 = v9;
    v318 = result;
    *(_WORD*)(result + 32) = v11 >> 3;
    v326 = (unsigned __int16)v5;
    *(_WORD*)(result + 16) = v4[8];
    *(_WORD*)(result + 18) = v4[9];
    *(_DWORD*)(result + 20) = *((_DWORD*)v4 + 5);
    *(_DWORD*)(result + 24) = *((_DWORD*)v4 + 6);
    *(_WORD*)(result + 14) = v4[7] + ((__int16)v8 >> 1);
    *(_WORD*)(result + 12) = v4[6] - ((__int16)(v320 + (v320 >> 15)) >> 1);
    *(_WORD*)(result + 36) = v4[18];
    *(_WORD*)(result + 38) = v4[19];
    if ((unsigned __int16)(v320 + 1) <= 2u) {
      v16 = (__int16)v4[15];
      v17 = (unsigned __int16)v5;
      if (v16 >= 1) {
        v18 = (__int16)v4[16];
        v19 = v4 + 20;
        v20 = (__int16)v14;
        v21 = result + v329 * (__int64)v15 + 40;
        if ((unsigned int)v16 >= 8) {
          v22 = v16 & 0x7FF8;
          do {
            memcpy_plt(v21, v19, v18);
            v23 = (__int64)v19 + v18;
            v24 = v21 + v20;
            memcpy_plt(v24, v23, v18);
            v25 = v23 + v18;
            v26 = v24 + v20;
            memcpy_plt(v26, v25, v18);
            v27 = v25 + v18;
            v28 = v26 + v20;
            memcpy_plt(v28, v27, v18);
            v29 = v27 + v18;
            v30 = v28 + v20;
            memcpy_plt(v30, v29, v18);
            v31 = v29 + v18;
            v32 = v30 + v20;
            memcpy_plt(v32, v31, v18);
            v33 = v31 + v18;
            v34 = v32 + v20;
            memcpy_plt(v34, v33, v18);
            v35 = v33 + v18;
            v36 = v34 + v20;
            memcpy_plt(v36, v35, v18);
            v19 = (_WORD*)(v35 + v18);
            v21 = v36 + v20;
            v22 -= 8;
          } while (v22 != 0);
        }
        if ((v16 & 7) != 0) {
          v37 = v16 & 7;
          do {
            memcpy_plt(v21, v19, v18);
            v19 = (_WORD*)((char*)v19 + v18);
            v21 += v20;
            --v37;
          } while (v37 != 0);
        }
      }
      goto LABEL_102;
    }
    if ((v320 & 0xFFFE) != 4) {
      v17 = (unsigned __int16)v5;
      if ((v320 & 0xFFFE) == 2 && (__int16)v4[15] >= 1) {
        v38 = 0;
        v39 = result + (__int16)(v11 >> 3) * (__int64)v15;
        v40 = v4 + 20;
        v41 = v39 + 40;
        do {
          if ((__int16)v4[14] < 1) {
            v55 = 0;
            v46 = 0;
            v54 = 0;
            if ((unsigned __int16)v5 == 2) {
              goto LABEL_22;
            }
          }
          else {
            switch ((unsigned __int16)v5) {
            case 8u:
              v55 = 0;
              v63 = 0;
              v64 = 0;
              do {
                v65 = v64;
                v64 = v63;
                v63 = *((unsigned __int8*)v40 + v55);
                v66 = (v64 * (__int16)v7[2] + v65 * (__int16)v7[1] +
                       (__int16)v7[3] * v63 + 128) >>
                      8;
                if (v66 >= 255) {
                  LOBYTE(v66) = -1;
                }
                *(_BYTE*)(v41 + v55++) = v66;
              } while (v55 < (__int16)v4[14]);
              v54 = (v63 * (__int16)v7[2] + v64 * (__int16)v7[1] + 128) >> 8;
            LABEL_56:
              if (v54 >= 255) {
                v68 = -1;
              }
              else {
                v68 = v54;
              }
              *(_BYTE*)(v41 + v55) = v68;
              goto LABEL_27;
            case 4u:
              v46 = 0;
              v56 = 0;
              v57 = 0;
              do {
                v58 = v57;
                v57 = v56;
                v59 = (unsigned __int64)v46 >> 1;
                v60 = v46++ & 1;
                v61 = SdkData_bbb770[v60];
                v56 = (unsigned __int8)(SdkData_c3c690[v60] &
                                        *((_BYTE*)v40 + v59)) >>
                      v61;
                v62 = (v57 * (__int16)v7[2] + v58 * (__int16)v7[1] +
                       v56 * (__int16)v7[3] + 128) >>
                      8;
                if (v62 >= 15) {
                  v62 = 15;
                }
                *(_BYTE*)(v41 + v59) |= v62 << v61;
              } while ((int)v46 < (__int16)v4[14]);
              v54 = (v56 * (__int16)v7[2] + v57 * (__int16)v7[1] + 128) >> 8;
            LABEL_52:
              if (v54 >= 15) {
                v42 = 15;
              }
              else {
                v42 = v54;
              }
              v67 = v46 & 1;
              v44 = (unsigned __int64)v46 >> 1;
              v45 = SdkData_bbb770[v67];
            LABEL_26:
              *(_BYTE*)(v41 + v44) |= v42 << v45;
              goto LABEL_27;
            case 2u:
              v46 = 0;
              v47 = 0;
              v48 = 0;
              do {
                v49 = v48;
                v48 = v47;
                v50 = (unsigned __int64)v46 >> 2;
                v51 = v46++ & 3;
                v52 = SdkData_bbfab8[v51];
                v47 = (unsigned __int8)(SdkData_c1d93e[v51] &
                                        *((_BYTE*)v40 + v50)) >>
                      v52;
                v53 = (v48 * (__int16)v7[2] + v49 * (__int16)v7[1] +
                       v47 * (__int16)v7[3] + 128) >>
                      8;
                if (v53 >= 3) {
                  v53 = 3;
                }
                *(_BYTE*)(v41 + v50) |= v53 << v52;
              } while ((int)v46 < (__int16)v4[14]);
              v54 = (v47 * (__int16)v7[2] + v48 * (__int16)v7[1] + 128) >> 8;
            LABEL_22:
              if (v54 >= 3) {
                v42 = 3;
              }
              else {
                v42 = v54;
              }
              v43 = v46 & 3;
              v44 = (unsigned __int64)v46 >> 2;
              v45 = SdkData_bbfab8[v43];
              goto LABEL_26;
            default:
              break;
            }
            v55 = (unsigned __int16)v4[14];
            v46 = (unsigned __int16)v4[14];
            v54 = 0;
          }
          if ((unsigned __int16)v5 == 8) {
            goto LABEL_56;
          }
          if ((unsigned __int16)v5 == 4) {
            goto LABEL_52;
          }
        LABEL_27:
          v41 += (__int16)v14;
          ++v38;
          v40 = (_WORD*)((char*)v40 + (__int16)v4[16]);
        } while (v38 < (__int16)v4[15]);
      }
    LABEL_102:
      v107 = v324;
      v325 = v4;
      v108 = v107 & 0xFFFE;
      if (v108 != 4) {
        v109 = v322;
        if (v108 == 2 && v323 >= 1) {
          v110 = (unsigned int)(v322 - 2);
          v111 = 0;
          v112 = *(__int16*)(v318 + 32);
          v330 = v318 + 40;
          v321 = (v322 - 1) & 3;
          v311 = (v322 - 1) & 7;
          v113 = 3 * v112;
          v114 = 8 * v112;
          v115 = 4 * v112;
          v116 = 2 * v112;
          v117 = 5 * v112;
          v118 = v112;
          v119 = 7 * v112;
          v120 = 6 * v112;
          v312 = 2 * v112;
          v313 = 3 * v112;
          v314 = 4 * v112;
          v310 = v318 + 40 + v112 + v112 * v110;
          while (1) {
            switch (v17) {
            case 4:
              v126 = (unsigned __int8)(SdkData_c3c690[v111 & 1] &
                                       *(_BYTE*)(v330 + ((int)v111 >> 1))) >>
                     SdkData_bbb770[v111 & 1];
              if (v109 < 2) {
                goto LABEL_120;
              }
              break;
            case 2:
              v126 = (unsigned __int8)(SdkData_c1d93e[v111 & 3] &
                                       *(_BYTE*)(v330 + ((int)v111 >> 2))) >>
                     SdkData_bbfab8[v111 & 3];
              if (v109 < 2) {
                goto LABEL_120;
              }
              break;
            case 8:
              v126 = *(unsigned __int8*)(v330 + v111);
              if (v109 < 2) {
                goto LABEL_120;
              }
              break;
            default:
              v126 = 0;
              if (v109 < 2) {
              LABEL_120:
                v133 = v318 + 40;
                v135 = 1;
                goto LABEL_192;
              }
              break;
            }
            switch (v17) {
            case 4:
              v127 = (__int64)(int)v111 >> 1;
              v128 = v111 & 1;
              v129 = SdkData_c3c690[v128];
              v130 = SdkData_bbb770[v128];
              v131 = SdkData_c3c692[v128];
              if ((unsigned int)v110 < 3) {
                v132 = v318 + 40 + v112;
                v133 = v318 + 40;
                v134 = 1;
                v135 = 1;
                if (v321 == 0) {
                  break;
                }
              LABEL_141:
                v148 = (v322 - 1) & 3;
                do {
                  v149 = *(unsigned __int8*)(v132 + v127);
                  v135 = v126;
                  v132 += v112;
                  v150 = v126 * (__int16)v6[2];
                  v126 = (v129 & v149) >> v130;
                  v151 = v150 + v134 * (__int16)v6[1];
                  v134 = v135;
                  v152 = (int)(v151 + v126 * (__int16)v6[3] + 128) >> 8;
                  if (v152 >= 15) {
                    LOBYTE(v152) = 15;
                  }
                  --v148;
                  *(_BYTE*)(v133 + v127) =
                      *(_BYTE*)(v133 + v127) & v131 | ((_BYTE)v152 << v130);
                  v133 += v112;
                } while (v148 != 0);
                break;
              }
              v138 = (v322 - 1) & 0xFFFFFFFC;
              v139 = v112 + v127;
              v134 = 1;
              v140 = v313 + v127;
              v141 = v312 + v127;
              v133 = v318 + 40;
              do {
                v142 = (unsigned __int8)(v129 & *(_BYTE*)(v133 + v139)) >> v130;
                v143 = (int)(v126 * (__int16)v6[2] + v134 * (__int16)v6[1] +
                             v142 * (__int16)v6[3] + 128) >>
                       8;
                if (v143 >= 15) {
                  v143 = 15;
                }
                *(_BYTE*)(v133 + v127) =
                    *(_BYTE*)(v133 + v127) & v131 | (v143 << v130);
                v144 = (unsigned __int8)(v129 & *(_BYTE*)(v133 + v141)) >> v130;
                v145 = (int)(v142 * (__int16)v6[2] + v126 * (__int16)v6[1] +
                             v144 * (__int16)v6[3] + 128) >>
                       8;
                if (v145 >= 15) {
                  v145 = 15;
                }
                *(_BYTE*)(v133 + v139) =
                    *(_BYTE*)(v133 + v139) & v131 | (v145 << v130);
                v134 = (unsigned __int8)(v129 & *(_BYTE*)(v133 + v140)) >> v130;
                v146 = (v144 * (__int16)v6[2] + v142 * (__int16)v6[1] +
                        v134 * (__int16)v6[3] + 128) >>
                       8;
                if (v146 >= 15) {
                  v146 = 15;
                }
                *(_BYTE*)(v133 + v141) =
                    *(_BYTE*)(v133 + v141) & v131 | (v146 << v130);
                v126 =
                    (unsigned __int8)(v129 & *(_BYTE*)(v133 + v314 + v127)) >>
                    v130;
                v147 = (int)(v134 * (__int16)v6[2] + v144 * (__int16)v6[1] +
                             v126 * (__int16)v6[3] + 128) >>
                       8;
                if (v147 >= 15) {
                  LOBYTE(v147) = 15;
                }
                v138 -= 4;
                *(_BYTE*)(v133 + v140) =
                    *(_BYTE*)(v133 + v140) & v131 | ((_BYTE)v147 << v130);
                v133 += v112 + 2 * v112 + v112;
              } while (v138 != 0);
              v4 = v325;
              v109 = v322;
              v5 = v319;
              v132 = v133 + v112;
              LODWORD(v110) = v322 - 2;
              v135 = v134;
              if (v321 != 0) {
                goto LABEL_141;
              }
              break;
            case 2:
              v153 = (__int64)(int)v111 >> 2;
              v154 = v111 & 3;
              v155 = SdkData_c1d93e[v154];
              v156 = SdkData_bbfab8[v154];
              v157 = SdkData_c1d94a[v154];
              if ((unsigned int)v110 < 3) {
                v158 = v318 + 40 + v112;
                v133 = v318 + 40;
                v159 = 1;
                v135 = 1;
                if (v321 == 0) {
                  break;
                }
              LABEL_188:
                v188 = (v322 - 1) & 3;
                do {
                  v189 = *(unsigned __int8*)(v158 + v153);
                  v135 = v126;
                  v158 += v112;
                  v190 = v126 * (__int16)v6[2];
                  v126 = (v155 & v189) >> v156;
                  v191 = v190 + v159 * (__int16)v6[1];
                  v159 = v135;
                  v192 = (int)(v191 + v126 * (__int16)v6[3] + 128) >> 8;
                  if (v192 >= 3) {
                    LOBYTE(v192) = 3;
                  }
                  --v188;
                  *(_BYTE*)(v133 + v153) =
                      *(_BYTE*)(v133 + v153) & v157 | ((_BYTE)v192 << v156);
                  v133 += v112;
                } while (v188 != 0);
                break;
              }
              v178 = (v322 - 1) & 0xFFFFFFFC;
              v179 = v112 + v153;
              v159 = 1;
              v180 = v313 + v153;
              v181 = v312 + v153;
              v133 = v318 + 40;
              do {
                v182 = (unsigned __int8)(v155 & *(_BYTE*)(v133 + v179)) >> v156;
                v183 = (int)(v126 * (__int16)v6[2] + v159 * (__int16)v6[1] +
                             v182 * (__int16)v6[3] + 128) >>
                       8;
                if (v183 >= 3) {
                  v183 = 3;
                }
                *(_BYTE*)(v133 + v153) =
                    *(_BYTE*)(v133 + v153) & v157 | (v183 << v156);
                v184 = (unsigned __int8)(v155 & *(_BYTE*)(v133 + v181)) >> v156;
                v185 = (int)(v182 * (__int16)v6[2] + v126 * (__int16)v6[1] +
                             v184 * (__int16)v6[3] + 128) >>
                       8;
                if (v185 >= 3) {
                  v185 = 3;
                }
                *(_BYTE*)(v133 + v179) =
                    *(_BYTE*)(v133 + v179) & v157 | (v185 << v156);
                v159 = (unsigned __int8)(v155 & *(_BYTE*)(v133 + v180)) >> v156;
                v186 = (v184 * (__int16)v6[2] + v182 * (__int16)v6[1] +
                        v159 * (__int16)v6[3] + 128) >>
                       8;
                if (v186 >= 3) {
                  v186 = 3;
                }
                *(_BYTE*)(v133 + v181) =
                    *(_BYTE*)(v133 + v181) & v157 | (v186 << v156);
                v126 =
                    (unsigned __int8)(v155 & *(_BYTE*)(v133 + v314 + v153)) >>
                    v156;
                v187 = (int)(v159 * (__int16)v6[2] + v184 * (__int16)v6[1] +
                             v126 * (__int16)v6[3] + 128) >>
                       8;
                if (v187 >= 3) {
                  LOBYTE(v187) = 3;
                }
                v178 -= 4;
                *(_BYTE*)(v133 + v180) =
                    *(_BYTE*)(v133 + v180) & v157 | ((_BYTE)v187 << v156);
                v133 += v112 + 2 * v112 + v112;
              } while (v178 != 0);
              v4 = v325;
              v109 = v322;
              v5 = v319;
              v158 = v133 + v112;
              LODWORD(v110) = v322 - 2;
              v135 = v159;
              if (v321 != 0) {
                goto LABEL_188;
              }
              break;
            case 8:
              v136 = 1;
              if ((unsigned int)v110 < 7) {
                v137 = v318 + 40 + v112;
                v133 = v318 + 40;
                v135 = 1;
                if (v311 == 0) {
                  break;
                }
              LABEL_172:
                v175 = (v322 - 1) & 7;
                do {
                  v135 = v126;
                  v126 = *(unsigned __int8*)(v137 + v111);
                  v137 += v112;
                  v176 = v135 * (__int16)v6[2] + v136 * (__int16)v6[1];
                  v136 = v135;
                  v177 = (int)(v176 + (__int16)v6[3] * v126 + 128) >> 8;
                  if (v177 >= 255) {
                    LOBYTE(v177) = -1;
                  }
                  --v175;
                  *(_BYTE*)(v133 + v111) = v177;
                  v133 += v112;
                } while (v175 != 0);
                break;
              }
              v160 = (v322 - 1) & 0xFFFFFFF8;
              v133 = v318 + 40;
              do {
                v161 = *(unsigned __int8*)(v133 + v118);
                v162 = (int)(v126 * (__int16)v6[2] + v136 * (__int16)v6[1] +
                             (__int16)v6[3] * v161 + 128) >>
                       8;
                if (v162 >= 255) {
                  LOBYTE(v162) = -1;
                }
                *(_BYTE*)(v133 + v111) = v162;
                v163 = *(unsigned __int8*)(v133 + v116);
                v164 = (int)(v161 * (__int16)v6[2] + v126 * (__int16)v6[1] +
                             (__int16)v6[3] * v163 + 128) >>
                       8;
                if (v164 >= 255) {
                  LOBYTE(v164) = -1;
                }
                *(_BYTE*)(v133 + v118) = v164;
                v165 = *(unsigned __int8*)(v133 + v113);
                v166 = (v163 * (__int16)v6[2] + v161 * (__int16)v6[1] +
                        (__int16)v6[3] * v165 + 128) >>
                       8;
                if (v166 >= 255) {
                  LOBYTE(v166) = -1;
                }
                *(_BYTE*)(v133 + v116) = v166;
                v167 = *(unsigned __int8*)(v133 + v115);
                v168 = (v165 * (__int16)v6[2] + v163 * (__int16)v6[1] +
                        (__int16)v6[3] * v167 + 128) >>
                       8;
                if (v168 >= 255) {
                  LOBYTE(v168) = -1;
                }
                *(_BYTE*)(v133 + v113) = v168;
                v169 = *(unsigned __int8*)(v133 + v117);
                v170 = (v167 * (__int16)v6[2] + v165 * (__int16)v6[1] +
                        (__int16)v6[3] * v169 + 128) >>
                       8;
                if (v170 >= 255) {
                  LOBYTE(v170) = -1;
                }
                *(_BYTE*)(v133 + v115) = v170;
                v171 = *(unsigned __int8*)(v133 + v120);
                v172 = (v169 * (__int16)v6[2] + v167 * (__int16)v6[1] +
                        (__int16)v6[3] * v171 + 128) >>
                       8;
                if (v172 >= 255) {
                  LOBYTE(v172) = -1;
                }
                *(_BYTE*)(v133 + v117) = v172;
                v136 = *(unsigned __int8*)(v133 + v119);
                v173 = (v171 * (__int16)v6[2] + v169 * (__int16)v6[1] +
                        (__int16)v6[3] * v136 + 128) >>
                       8;
                if (v173 >= 255) {
                  LOBYTE(v173) = -1;
                }
                *(_BYTE*)(v133 + v120) = v173;
                v126 = *(unsigned __int8*)(v133 + v114);
                v174 = (int)(v136 * (__int16)v6[2] + v171 * (__int16)v6[1] +
                             (__int16)v6[3] * v126 + 128) >>
                       8;
                if (v174 >= 255) {
                  LOBYTE(v174) = -1;
                }
                v160 -= 8;
                *(_BYTE*)(v133 + v119) = v174;
                v133 += v112 + 2 * v112 + 3 * v112 + 2 * v112;
              } while (v160 != 0);
              v137 = v133 + v112;
              v135 = v136;
              if (v311 != 0) {
                goto LABEL_172;
              }
              break;
            default:
              v133 = v310;
              if (v322 == 2) {
                v135 = v126;
              }
              else {
                v135 = 0;
              }
              v126 = 0;
              break;
            }
          LABEL_192:
            v17 = v326;
            v123 =
                (int)(v126 * (__int16)v6[2] + v135 * (__int16)v6[1] + 128) >> 8;
            if (v326 == 4) {
              v121 = v111 & 1;
              v122 = (__int64)(int)v111 >> 1;
              if (v123 >= 15) {
                LOBYTE(v123) = 15;
              }
              v124 = *(_BYTE*)(v133 + v122) & SdkData_c3c692[v121];
              v125 = SdkData_bbb770;
            }
            else {
              if (v5 != 2) {
                if ((unsigned __int16)v5 == 8) {
                  if (v123 >= 255) {
                    LOBYTE(v123) = -1;
                  }
                  *(_BYTE*)(v133 + v111) = v123;
                }
                goto LABEL_110;
              }
              if (v123 >= 3) {
                LOBYTE(v123) = 3;
              }
              v121 = v111 & 3;
              v122 = (__int64)(int)v111 >> 2;
              v124 = *(_BYTE*)(v133 + v122) & SdkData_c1d94a[v121];
              v125 = SdkData_bbfab8;
            }
            *(_BYTE*)(v133 + v122) = v124 | ((_BYTE)v123 << v125[v121]);
          LABEL_110:
            ++v111;
            ++v114;
            ++v119;
            ++v120;
            ++v117;
            ++v115;
            ++v113;
            ++v116;
            ++v118;
            if (v111 == v323) {
              goto LABEL_286;
            }
          }
        }
        goto LABEL_286;
      }
      v193 = v323;
      v194 = v322;
      if (v323 < 1) {
        goto LABEL_286;
      }
      v195 = v322 - 2;
      v196 = *(__int16*)(v318 + 32);
      v197 = v318 + 40;
      v198 = v318 + 40 + v196;
      if (v5 != 8) {
        if ((unsigned __int16)v5 != 4) {
          if ((unsigned __int16)v5 == 2) {
            v199 = v195 & 3;
            v200 = v322 - 3;
            v201 = 0;
            v327 = v195 & 0xFFFFFFFC;
            v202 = SdkData_c1d93e;
            v315 = v199;
            while (1) {
              v210 = (unsigned int)v201 >> 2;
              v211 = *(unsigned __int8*)(v197 + v210);
              v212 = v202[v201 & 3];
              v213 = SdkData_bbfab8[v201 & 3];
              v214 = SdkData_c1d94a[v201 & 3];
              v215 = (v212 & v211) >> v213;
              v216 = (unsigned __int8)(*(_BYTE*)(v198 + v210) & v212) >> v213;
              if (v194 >= 3) {
                break;
              }
              v203 = 0;
              v204 = 0;
              v205 = v318 + 40;
            LABEL_207:
              v206 = v211 & v214;
              ++v201;
              v207 = (_BYTE*)(v205 + v210);
              v4 = v325;
              v208 =
                  (int)(v204 * (__int16)v6[2] + v203 * (__int16)v6[1] +
                        v215 * (__int16)v6[3] + v216 * (__int16)v6[4] + 128) >>
                  8;
              if (v208 >= 3) {
                v208 = 3;
              }
              *v207 = v206 | (v208 << v213);
              v209 = (int)(v215 * (__int16)v6[3] + v204 * (__int16)v6[2] +
                           v216 * (__int16)v6[4] + 128) >>
                     8;
              if (v209 >= 3) {
                LOBYTE(v209) = 3;
              }
              v207[v329] = v207[v329] & v214 | ((_BYTE)v209 << v213);
              if ((_DWORD)v201 == v193) {
                goto LABEL_286;
              }
            }
            v217 = v201 >> 2;
            if (v200 >= 3) {
              v220 = v327;
              v221 = v202;
              v222 = v200;
              v204 = 0;
              v218 = 0;
              v205 = v318 + 40;
              v223 = 2 * v196 + v217;
              v224 = 3 * v196 + v217;
              do {
                v225 = v204 * (__int16)v6[2] + v218 * (__int16)v6[1];
                v218 = (unsigned __int8)(*(_BYTE*)(v205 + v223) & v212) >> v213;
                v226 =
                    (int)(v225 + v215 * (__int16)v6[3] + v216 * (__int16)v6[4] +
                          v218 * (__int16)v6[5] + 128) >>
                    8;
                if (v226 >= 3) {
                  v226 = 3;
                }
                *(_BYTE*)(v205 + v217) =
                    *(_BYTE*)(v205 + v217) & v214 | (v226 << v213);
                v227 = v215 * (__int16)v6[2] + v204 * (__int16)v6[1];
                v204 = (unsigned __int8)(*(_BYTE*)(v205 + v224) & v212) >> v213;
                v228 =
                    (int)(v227 + v216 * (__int16)v6[3] + v218 * (__int16)v6[4] +
                          v204 * (__int16)v6[5] + 128) >>
                    8;
                if (v228 >= 3) {
                  v228 = 3;
                }
                *(_BYTE*)(v205 + v196 + v217) =
                    *(_BYTE*)(v205 + v196 + v217) & v214 | (v228 << v213);
                v229 = v216 * (__int16)v6[2] + v215 * (__int16)v6[1];
                v215 = (unsigned __int8)(*(_BYTE*)(v205 + 4 * v196 + v217) &
                                         v212) >>
                       v213;
                v230 =
                    (int)(v229 + v218 * (__int16)v6[3] + v204 * (__int16)v6[4] +
                          v215 * (__int16)v6[5] + 128) >>
                    8;
                if (v230 >= 3) {
                  v230 = 3;
                }
                *(_BYTE*)(v205 + v223) =
                    *(_BYTE*)(v205 + v223) & v214 | (v230 << v213);
                v231 = v218 * (__int16)v6[2] + v216 * (__int16)v6[1];
                v216 = (unsigned __int8)(*(_BYTE*)(v205 + 5 * v196 + v217) &
                                         v212) >>
                       v213;
                v232 =
                    (int)(v231 + v204 * (__int16)v6[3] + v215 * (__int16)v6[4] +
                          v216 * (__int16)v6[5] + 128) >>
                    8;
                if (v232 >= 3) {
                  LOBYTE(v232) = 3;
                }
                v220 -= 4;
                *(_BYTE*)(v205 + v224) =
                    *(_BYTE*)(v205 + v224) & v214 | ((_BYTE)v232 << v213);
                v205 += v196 + 2 * v196 + v196;
              } while (v220 != 0);
              v194 = v322;
              v193 = v323;
              v200 = v222;
              v202 = v221;
              v199 = v315;
              v219 = v205 + v196;
              v203 = v218;
              if (v315 == 0) {
                goto LABEL_231;
              }
            }
            else {
              v204 = 0;
              v218 = 0;
              v205 = v318 + 40;
              v219 = v318 + 40 + v196;
              v203 = 0;
              if (v199 == 0) {
              LABEL_231:
                LOBYTE(v211) = *(_BYTE*)(v205 + v210);
                goto LABEL_207;
              }
            }
            v233 = v219 + v196;
            v234 = v199;
            do {
              v235 = *(unsigned __int8*)(v233 + v217);
              v203 = v204;
              v204 = v215;
              v215 = v216;
              v233 += v196;
              v216 = (v235 & v212) >> v213;
              v236 = v203 * (__int16)v6[2] + v218 * (__int16)v6[1];
              v218 = v203;
              v237 =
                  (int)(v236 + v204 * (__int16)v6[3] + v215 * (__int16)v6[4] +
                        v216 * (__int16)v6[5] + 128) >>
                  8;
              if (v237 >= 3) {
                LOBYTE(v237) = 3;
              }
              --v234;
              *(_BYTE*)(v205 + v217) =
                  *(_BYTE*)(v205 + v217) & v214 | ((_BYTE)v237 << v213);
              v205 += v196;
            } while (v234 != 0);
            goto LABEL_231;
          }
        LABEL_286:
          FSS_free_char_plt(a1, v4);
          return v318;
        }
        v238 = v195 & 3;
        v239 = v322 - 3;
        v240 = 0;
        v328 = v195 & 0xFFFFFFFC;
        v241 = SdkData_c3c690;
        v242 = SdkData_bbb770;
        v316 = v238;
        while (1) {
          v250 = (unsigned int)v240 >> 1;
          v251 = *(unsigned __int8*)(v197 + v250);
          v252 = v241[v240 & 1];
          v253 = v242[v240 & 1];
          v254 = SdkData_c3c692[v240 & 1];
          v255 = (v252 & v251) >> v253;
          v256 = (unsigned __int8)(*(_BYTE*)(v198 + v250) & v252) >> v253;
          if (v194 >= 3) {
            break;
          }
          v243 = 0;
          v244 = 0;
          v245 = v318 + 40;
        LABEL_234:
          v246 = v251 & v254;
          ++v240;
          v247 = (_BYTE*)(v245 + v250);
          v4 = v325;
          v248 = (int)(v244 * (__int16)v6[2] + v243 * (__int16)v6[1] +
                       v255 * (__int16)v6[3] + v256 * (__int16)v6[4] + 128) >>
                 8;
          if (v248 >= 15) {
            v248 = 15;
          }
          *v247 = v246 | (v248 << v253);
          v249 = (int)(v255 * (__int16)v6[3] + v244 * (__int16)v6[2] +
                       v256 * (__int16)v6[4] + 128) >>
                 8;
          if (v249 >= 15) {
            LOBYTE(v249) = 15;
          }
          v247[v329] = v247[v329] & v254 | ((_BYTE)v249 << v253);
          if ((_DWORD)v240 == v193) {
            goto LABEL_286;
          }
        }
        v257 = v240 >> 1;
        if (v239 >= 3) {
          v260 = v328;
          v261 = v241;
          v262 = v242;
          v263 = v239;
          v244 = 0;
          v258 = 0;
          v245 = v318 + 40;
          v264 = 2 * v196 + v257;
          v265 = 3 * v196 + v257;
          do {
            v266 = v244 * (__int16)v6[2] + v258 * (__int16)v6[1];
            v258 = (unsigned __int8)(*(_BYTE*)(v245 + v264) & v252) >> v253;
            v267 = (int)(v266 + v255 * (__int16)v6[3] + v256 * (__int16)v6[4] +
                         v258 * (__int16)v6[5] + 128) >>
                   8;
            if (v267 >= 15) {
              v267 = 15;
            }
            *(_BYTE*)(v245 + v257) =
                *(_BYTE*)(v245 + v257) & v254 | (v267 << v253);
            v268 = v255 * (__int16)v6[2] + v244 * (__int16)v6[1];
            v244 = (unsigned __int8)(*(_BYTE*)(v245 + v265) & v252) >> v253;
            v269 = (int)(v268 + v256 * (__int16)v6[3] + v258 * (__int16)v6[4] +
                         v244 * (__int16)v6[5] + 128) >>
                   8;
            if (v269 >= 15) {
              v269 = 15;
            }
            *(_BYTE*)(v245 + v196 + v257) =
                *(_BYTE*)(v245 + v196 + v257) & v254 | (v269 << v253);
            v270 = v256 * (__int16)v6[2] + v255 * (__int16)v6[1];
            v255 =
                (unsigned __int8)(*(_BYTE*)(v245 + 4 * v196 + v257) & v252) >>
                v253;
            v271 = (int)(v270 + v258 * (__int16)v6[3] + v244 * (__int16)v6[4] +
                         v255 * (__int16)v6[5] + 128) >>
                   8;
            if (v271 >= 15) {
              v271 = 15;
            }
            *(_BYTE*)(v245 + v264) =
                *(_BYTE*)(v245 + v264) & v254 | (v271 << v253);
            v272 = v258 * (__int16)v6[2] + v256 * (__int16)v6[1];
            v256 =
                (unsigned __int8)(*(_BYTE*)(v245 + 5 * v196 + v257) & v252) >>
                v253;
            v273 = (int)(v272 + v244 * (__int16)v6[3] + v255 * (__int16)v6[4] +
                         v256 * (__int16)v6[5] + 128) >>
                   8;
            if (v273 >= 15) {
              LOBYTE(v273) = 15;
            }
            v260 -= 4;
            *(_BYTE*)(v245 + v265) =
                *(_BYTE*)(v245 + v265) & v254 | ((_BYTE)v273 << v253);
            v245 += v196 + 2 * v196 + v196;
          } while (v260 != 0);
          v194 = v322;
          v193 = v323;
          v239 = v263;
          v242 = v262;
          v241 = v261;
          v238 = v316;
          v259 = v245 + v196;
          v243 = v258;
          if (v316 == 0) {
            goto LABEL_258;
          }
        }
        else {
          v244 = 0;
          v258 = 0;
          v245 = v318 + 40;
          v259 = v318 + 40 + v196;
          v243 = 0;
          if (v238 == 0) {
          LABEL_258:
            LOBYTE(v251) = *(_BYTE*)(v245 + v250);
            goto LABEL_234;
          }
        }
        v274 = v259 + v196;
        v275 = v238;
        do {
          v276 = *(unsigned __int8*)(v274 + v257);
          v243 = v244;
          v244 = v255;
          v255 = v256;
          v274 += v196;
          v256 = (v276 & v252) >> v253;
          v277 = v243 * (__int16)v6[2] + v258 * (__int16)v6[1];
          v258 = v243;
          v278 = (int)(v277 + v244 * (__int16)v6[3] + v255 * (__int16)v6[4] +
                       v256 * (__int16)v6[5] + 128) >>
                 8;
          if (v278 >= 15) {
            LOBYTE(v278) = 15;
          }
          --v275;
          *(_BYTE*)(v245 + v257) =
              *(_BYTE*)(v245 + v257) & v254 | ((_BYTE)v278 << v253);
          v245 += v196;
        } while (v275 != 0);
        goto LABEL_258;
      }
      v279 = v195 & 3;
      v280 = v195 & 0xFFFFFFFC;
      v281 = 0;
      v282 = *(__int16*)(v318 + 32);
      v283 = 3 * v196;
      v284 = 2 * v196;
      v285 = 5 * v196;
      v286 = 4 * v196;
      while (1) {
        v294 = *(unsigned __int8*)(v197 + v281);
        v295 = *(unsigned __int8*)(v198 + v281);
        if (v194 < 3) {
          v287 = 0;
          v288 = 0;
          v289 = v318 + 40;
        }
        else {
          if ((unsigned int)(v322 - 3) >= 3) {
            v288 = 0;
            v296 = 0;
            v298 = v280;
            v289 = v318 + 40;
            do {
              v299 = v288 * (__int16)v6[2] + v296 * (__int16)v6[1];
              v296 = *(unsigned __int8*)(v289 + v284);
              v300 = (v299 + v294 * (__int16)v6[3] + v295 * (__int16)v6[4] +
                      (__int16)v6[5] * v296 + 128) >>
                     8;
              if (v300 >= 255) {
                LOBYTE(v300) = -1;
              }
              *(_BYTE*)(v289 + v281) = v300;
              v301 = v294 * (__int16)v6[2] + v288 * (__int16)v6[1];
              v288 = *(unsigned __int8*)(v289 + v283);
              v302 = (v301 + v295 * (__int16)v6[3] + v296 * (__int16)v6[4] +
                      (__int16)v6[5] * v288 + 128) >>
                     8;
              if (v302 >= 255) {
                LOBYTE(v302) = -1;
              }
              *(_BYTE*)(v289 + v282) = v302;
              v303 = v295 * (__int16)v6[2] + v294 * (__int16)v6[1];
              v294 = *(unsigned __int8*)(v289 + v286);
              v304 = (v303 + v296 * (__int16)v6[3] + v288 * (__int16)v6[4] +
                      (__int16)v6[5] * v294 + 128) >>
                     8;
              if (v304 >= 255) {
                LOBYTE(v304) = -1;
              }
              *(_BYTE*)(v289 + v284) = v304;
              v305 = v296 * (__int16)v6[2] + v295 * (__int16)v6[1];
              v295 = *(unsigned __int8*)(v289 + v285);
              v306 = (v305 + v288 * (__int16)v6[3] + v294 * (__int16)v6[4] +
                      (__int16)v6[5] * v295 + 128) >>
                     8;
              if (v306 >= 255) {
                LOBYTE(v306) = -1;
              }
              v298 -= 4;
              *(_BYTE*)(v289 + v283) = v306;
              v289 += v196 + 2 * v196 + v196;
            } while (v298 != 0);
            v297 = v289 + v196;
            v287 = v296;
            if (v279 == 0) {
              goto LABEL_261;
            }
          LABEL_281:
            v307 = v297 + v196;
            v308 = v279;
            do {
              v287 = v288;
              v288 = v294;
              v294 = v295;
              v295 = *(unsigned __int8*)(v307 + v281);
              v307 += v196;
              v309 = (v287 * (__int16)v6[2] + v296 * (__int16)v6[1] +
                      v288 * (__int16)v6[3] + v294 * (__int16)v6[4] +
                      (__int16)v6[5] * v295 + 128) >>
                     8;
              if (v309 >= 255) {
                LOBYTE(v309) = -1;
              }
              --v308;
              *(_BYTE*)(v289 + v281) = v309;
              v289 += v196;
              v296 = v287;
            } while (v308 != 0);
            goto LABEL_261;
          }
          v288 = 0;
          v296 = 0;
          v289 = v318 + 40;
          v297 = v318 + 40 + v196;
          v287 = 0;
          if (v279 != 0) {
            goto LABEL_281;
          }
        }
      LABEL_261:
        v290 = (_BYTE*)(v289 + v281++);
        ++v283;
        ++v284;
        ++v282;
        ++v285;
        v194 = v322;
        ++v286;
        v291 = v288 * (__int16)v6[2] + v287 * (__int16)v6[1];
        v4 = v325;
        v292 =
            (v291 + v294 * (__int16)v6[3] + v295 * (__int16)v6[4] + 128) >> 8;
        if (v292 >= 255) {
          LOBYTE(v292) = -1;
        }
        *v290 = v292;
        v293 = (v294 * (__int16)v6[3] + v288 * (__int16)v6[2] +
                v295 * (__int16)v6[4] + 128) >>
               8;
        if (v293 >= 255) {
          LOBYTE(v293) = -1;
        }
        v290[v329] = v293;
        if (v281 == v323) {
          goto LABEL_286;
        }
      }
    }
    v17 = (unsigned __int16)v5;
    if ((__int16)v4[15] < 1) {
      goto LABEL_102;
    }
    v14 = (__int16)v14;
    v69 = 0;
    v70 = (__int16)v4[16];
    v71 = v4 + 20;
    v72 = result + (__int16)(v11 >> 3) * (__int64)v15 + 40;
    while (1) {
      LODWORD(v77) = (__int16)v4[14];
      if ((int)v77 < 1) {
        LODWORD(v77) = 0;
        v82 = 0;
        v81 = 0;
        v80 = 0;
        v79 = 0;
        v78 = 0;
        goto LABEL_90;
      }
      switch ((unsigned __int16)v5) {
      case 8u:
        v77 = 0;
        v79 = 0;
        v80 = 0;
        v81 = 0;
        v82 = 0;
        do {
          v93 = v82;
          v82 = v81;
          v81 = v80;
          v80 = v79;
          v79 = *((unsigned __int8*)v71 + v77);
          v94 = (v82 * (__int16)v7[2] + v93 * (__int16)v7[1] +
                 v81 * (__int16)v7[3] + v80 * (__int16)v7[4] +
                 (__int16)v7[5] * v79 + 128) >>
                8;
          if (v94 >= 255) {
            LOBYTE(v94) = -1;
          }
          *(_BYTE*)(v72 + v77++) = v94;
        } while (v77 < (__int16)v4[14]);
        break;
      case 4u:
        v78 = 0;
        v79 = 0;
        v80 = 0;
        v81 = 0;
        v82 = 0;
        do {
          v88 = v82;
          v82 = v81;
          v81 = v80;
          v80 = v79;
          v89 = (unsigned __int64)v78 >> 1;
          v90 = v78++ & 1;
          v91 = SdkData_bbb770[v90];
          v79 = (unsigned __int8)(SdkData_c3c690[v90] & *((_BYTE*)v71 + v89)) >>
                v91;
          v92 = (v82 * (__int16)v7[2] + v88 * (__int16)v7[1] +
                 v81 * (__int16)v7[3] + v80 * (__int16)v7[4] +
                 v79 * (__int16)v7[5] + 128) >>
                8;
          if (v92 >= 15) {
            v92 = 15;
          }
          *(_BYTE*)(v72 + v89) |= v92 << v91;
        } while ((int)v78 < (__int16)v4[14]);
        goto LABEL_82;
      case 2u:
        v78 = 0;
        v79 = 0;
        v80 = 0;
        v81 = 0;
        v82 = 0;
        do {
          v83 = v82;
          v82 = v81;
          v81 = v80;
          v80 = v79;
          v84 = (unsigned __int64)v78 >> 2;
          v85 = v78++ & 3;
          v86 = SdkData_bbfab8[v85];
          v79 = (unsigned __int8)(SdkData_c1d93e[v85] & *((_BYTE*)v71 + v84)) >>
                v86;
          v87 = (v82 * (__int16)v7[2] + v83 * (__int16)v7[1] +
                 v81 * (__int16)v7[3] + v80 * (__int16)v7[4] +
                 v79 * (__int16)v7[5] + 128) >>
                8;
          if (v87 >= 3) {
            v87 = 3;
          }
          *(_BYTE*)(v72 + v84) |= v87 << v86;
        } while ((int)v78 < (__int16)v4[14]);
      LABEL_82:
        LODWORD(v77) = v78;
        goto LABEL_90;
      default:
        v82 = 0;
        v81 = 0;
        v80 = 0;
        v79 = 0;
        break;
      }
      v78 = v77;
    LABEL_90:
      v73 = (v81 * (__int16)v7[2] + v82 * (__int16)v7[1] +
             v80 * (__int16)v7[3] + v79 * (__int16)v7[4] + 128) >>
            8;
      switch ((unsigned __int16)v5) {
      case 2u:
        v102 = v78 & 3;
        v103 = (unsigned __int64)v78 >> 2;
        v104 = SdkData_bbfab8[v102];
        if (v73 >= 3) {
          v73 = 3;
        }
        *(_BYTE*)(v72 + v103) |= v73 << v104;
        v105 = v80 * (__int16)v7[3] + v81 * (__int16)v7[2];
        v75 = (__int64)(__int16)(v77 + 1) >> 2;
        v106 = v105 + v79 * (__int16)v7[4];
        v100 = SdkData_bbfab8[((int)v77 + 1) & 3LL];
        v101 = (v106 + 128) >> 8;
        if (v101 >= 3) {
          v101 = 3;
        }
        break;
      case 8u:
        if (v73 >= 255) {
          LOBYTE(v73) = -1;
        }
        *(_BYTE*)(v72 + (unsigned __int16)v77) = v73;
        v74 = v80 * (__int16)v7[3] + v81 * (__int16)v7[2];
        v75 = (__int16)(v77 + 1);
        v76 = (v74 + v79 * (__int16)v7[4] + 128) >> 8;
        if (v76 >= 255) {
          LOBYTE(v76) = -1;
        }
        goto LABEL_66;
      case 4u:
        v95 = v78 & 1;
        v96 = (unsigned __int64)v78 >> 1;
        v97 = SdkData_bbb770[v95];
        if (v73 >= 15) {
          v73 = 15;
        }
        *(_BYTE*)(v72 + v96) |= v73 << v97;
        v98 = v80 * (__int16)v7[3] + v81 * (__int16)v7[2];
        v75 = (__int64)(__int16)(v77 + 1) >> 1;
        v99 = v98 + v79 * (__int16)v7[4];
        v100 = SdkData_bbb770[((int)v77 + 1) & 1LL];
        v101 = (v99 + 128) >> 8;
        if (v101 >= 15) {
          v101 = 15;
        }
        break;
      default:
        goto LABEL_67;
      }
      v76 = *(unsigned __int8*)(v72 + v75) | (v101 << v100);
    LABEL_66:
      *(_BYTE*)(v72 + v75) = v76;
    LABEL_67:
      v71 = (_WORD*)((char*)v71 + v70);
      v72 += v14;
      if (++v69 >= (__int16)v4[15]) {
        goto LABEL_102;
      }
    }
  }
  return result;
}

_WORD* pixelbold_graymap2(__int64 a1, _WORD* a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  int v5;
  _WORD* v6;
  __int64 v7;
  unsigned __int8* v8;
  _BYTE* v9;
  __int64 v10;
  unsigned __int8* v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  unsigned __int8* v20;
  unsigned int v21;
  int v22;
  int v23;
  int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  signed int v32;
  int v33;
  unsigned int v34;
  int v35;
  int v36;
  _BYTE* v37;
  int v38;
  unsigned int v39;
  int v40;
  int v41;
  __int64 v42;
  int v43;
  char* v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int8 v50;
  int v51;
  unsigned int v52;
  int v53;
  int v54;
  int v55;
  __int64 v57;
  __int64 v58;
  unsigned __int8 v59;
  int v60;
  unsigned int v61;
  int v62;
  int v63;
  unsigned int v64;
  int v65;
  bool v66;
  bool v67;
  int v68;
  bool v69;
  bool v70;
  int v72;
  int i;
  int v74;
  bool v75;
  __int64 v76;
  __int64 v77;
  int v78;
  unsigned __int8 v79;
  int v80;
  __int64 v81;
  unsigned __int8 v82;
  unsigned __int8 v83;
  int v84;
  unsigned __int8 v85;
  int v86;
  int v87;
  bool v88;
  int v89;
  int v90;
  bool v91;
  int v92;
  int v93;
  int v94;
  unsigned int v95;
  int j;
  __int64 v97;
  __int64 v98;
  unsigned __int8 v99;
  int v100;
  int v101;
  __int64 v102;
  int v103;
  int v104;
  __int64 v105;
  unsigned __int8 v106;
  char v107;
  char v108;
  int v109;
  unsigned __int8 v110;
  int v111;
  char v112;
  unsigned __int8 v113;
  int v114;
  char v115;
  unsigned __int8 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  int v120;
  __int64 v121;
  _WORD* v122;
  int v123;
  char* v124;
  int v125;
  int v126;
  int v128;
  int v129;
  int v130;
  int v131;
  bool v132;
  int v133;
  int m;
  __int64 v135;
  __int64 v136;
  unsigned __int8 v137;
  int v138;
  int v139;
  __int64 v140;
  int v141;
  unsigned __int8 v142;
  __int64 v143;
  __int64 v144;
  int v145;
  char v146;
  __int64 v147;
  char v148;
  int v149;
  unsigned __int8 v150;
  int v151;
  char v152;
  unsigned __int8 v153;
  unsigned __int8 v154;
  int v155;
  char v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  char* v161;
  char* v162;
  int v163;
  unsigned __int64 v164;
  unsigned int v165;
  int v166;
  unsigned __int64 v167;
  __int64 v168;
  unsigned __int8 v169;
  int v170;
  int v171;
  bool v173;
  bool v174;
  __int64 v176;
  __int64 v177;
  unsigned __int8 v178;
  int v179;
  __int64 v180;
  __int64 v181;
  int v182;
  char v185;
  __int64 v186;
  __int64 v187;
  unsigned __int8 v188;
  int v189;
  __int64 v190;
  int v191;
  unsigned int v192;
  int v193;
  int v194;
  bool v195;
  __int64 v196;
  __int64 v197;
  int v198;
  char v199;
  unsigned __int8 v200;
  int v201;
  unsigned int v202;
  __int64 v203;
  unsigned __int8 v204;
  unsigned __int8 v205;
  int v206;
  unsigned __int8 v207;
  int v208;
  unsigned __int64 v209;
  int v210;
  unsigned __int64 v211;
  int v212;
  unsigned __int64 v213;
  int v214;
  unsigned __int64 v215;
  int v216;
  int v217;
  unsigned __int64 v218;
  int v219;
  int v220;
  bool v221;
  bool v222;
  int v223;
  unsigned int v224;
  int k;
  unsigned __int64 v226;
  unsigned __int64 v227;
  __int64 v228;
  int v229;
  unsigned __int8 v230;
  __int64 v231;
  __int64 v232;
  int v233;
  char v234;
  __int64 v235;
  char v236;
  int v237;
  unsigned __int8 v238;
  int v239;
  char v240;
  unsigned __int8 v241;
  unsigned __int8 v242;
  int v243;
  char v244;
  unsigned __int64 v245;
  unsigned __int64 v246;
  unsigned __int64 v247;
  char* v249;
  __int64 v250;

  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 40LL);
  v3 = *(__int16*)(v2 + 14);
  if (*(_WORD*)(v2 + 14) == 0 || (__int16)a2[15] < 1) {
    return a2;
  }
  v4 = (__int16)a2[16];
  LOWORD(v5) = a2[14];
  v6 = a2 + 20;
  v7 = 0;
  v8 = (unsigned __int8*)(a2 + 21);
  v9 = a2 + 20;
  v250 = v4;
  do {
    v11 = (unsigned __int8*)v6 + v7 * v4;
    v12 = *v11;
    v13 = (v12 >> 4) & 3;
    if (v12 <= 0x3F && v13 != 0) {
      v15 = 2;
      if ((__int16)v5 >= 3) {
        while ((unsigned __int8)(SdkData_c1d93e[v15 & 3] &
                                 v11[(unsigned __int64)v15 >> 2]) >>
                   SdkData_bd1440[v15 & 3] !=
               0) {
          if ((__int16)v5 == ++v15) {
            v15 = (__int16)v5;
            break;
          }
        }
      }
      if (v15 <= 2) {
        v15 = 2;
      }
      v16 = v15 - 1;
      if (v15 - 2 >= 7) {
        v17 = 1;
        v18 = 1;
        v20 = v8;
        do {
          v21 = *(v20 - 2);
          v22 = (v21 >> 4) & 3;
          if (v13 < v22) {
            v17 = v18;
          }
          if (v22 <= (int)v13) {
            v22 = v13;
          }
          v23 = (v21 >> 2) & 3;
          v24 = v21 & 3;
          if (v22 < (unsigned int)v23) {
            v17 = v18 + 1;
          }
          if (v23 > v22) {
            v22 = v23;
          }
          if (v22 < (unsigned int)v24) {
            v17 = v18 + 2;
          }
          if (v24 <= v22) {
            v24 = v22;
          }
          v25 = *(v20 - 1);
          if (v24 < v25 >> 6) {
            v17 = v18 + 3;
          }
          if ((int)(v25 >> 6) > v24) {
            v24 = v25 >> 6;
          }
          v26 = (v25 >> 4) & 3;
          if (v24 < (unsigned int)v26) {
            v17 = v18 + 4;
          }
          if (v26 > v24) {
            v24 = (v25 >> 4) & 3;
          }
          v27 = (v25 >> 2) & 3;
          v28 = v25 & 3;
          if (v24 < (unsigned int)v27) {
            v17 = v18 + 5;
          }
          v29 = v18 + 7;
          if (v27 > v24) {
            v24 = v27;
          }
          v30 = v18 + 6;
          v18 += 8;
          if (v24 < (unsigned int)v28) {
            v17 = v30;
          }
          if (v28 > v24) {
            v24 = v28;
          }
          v31 = *v20;
          v20 += 2;
          v32 = v31 >> 6;
          if (v24 < v31 >> 6) {
            v17 = v29;
          }
          if (v32 <= v24) {
            v13 = v24;
          }
          else {
            v13 = v32;
          }
        } while (v29 != (v16 & 0xFFFFFFF8));
        v6 = a2 + 20;
        v19 = v16 & 7;
        if ((v16 & 7) == 0) {
        LABEL_60:
          if (v13 < 3) {
            goto LABEL_70;
          }
          if (v17 == 0) {
            goto LABEL_69;
          }
          if (v17 >= 4) {
            v36 = 0;
            v37 = v9;
            do {
              v11[(__int64)v36 >> 2] =
                  (4 * *v37) & 0xC0 | v11[(__int64)v36 >> 2] & 0x3F;
              v11[(__int64)(v36 + 1) >> 2] =
                  v11[(__int64)(v36 + 1) >> 2] & 0xCF | (4 * *v37) & 0x30;
              v11[(__int64)(v36 + 2) >> 2] =
                  v11[(__int64)(v36 + 2) >> 2] & 0xF3 | (4 * (*v37 & 3));
              v38 = v36 + 3;
              v36 += 4;
              v39 = (unsigned __int8)*++v37;
              v11[(__int64)v38 >> 2] =
                  v11[(__int64)v38 >> 2] & 0xFC | (v39 >> 6);
            } while ((v17 & 0xFFFFFFFC) != v36);
            v34 = v36 + 1;
            v35 = v17 & 3;
            if ((v17 & 3) == 0) {
              goto LABEL_69;
            }
          }
          else {
            v34 = 1;
            v35 = v17 & 3;
            if ((v17 & 3) == 0) {
            LABEL_69:
              v11[(unsigned __int64)v17 >> 2] =
                  SdkData_c1d94a[v17 & 3] & v11[(unsigned __int64)v17 >> 2] |
                  (3 << SdkData_bd1440[v17 & 3]);
              LOWORD(v5) = a2[14];
              goto LABEL_70;
            }
          }
          do {
            --v35;
            v40 = (unsigned __int8)(SdkData_c1d93e[v34 & 3] &
                                    v11[(unsigned __int64)v34 >> 2]) >>
                  SdkData_bd1440[v34 & 3];
            v41 = v34++ - 1;
            v11[(__int64)v41 >> 2] =
                SdkData_c1d94a[v41 & 3] & v11[(__int64)v41 >> 2] |
                ((_BYTE)v40 << SdkData_bd1440[v41 & 3]);
          } while (v35 != 0);
          goto LABEL_69;
        }
      }
      else {
        v17 = 1;
        v18 = 1;
        v19 = v16 & 7;
        if ((v16 & 7) == 0) {
          goto LABEL_60;
        }
      }
      do {
        v33 = (unsigned __int8)(SdkData_c1d93e[v18 & 3] &
                                v11[(unsigned __int64)v18 >> 2]) >>
              SdkData_bd1440[v18 & 3];
        if (v33 > v13) {
          v17 = v18;
        }
        if (v33 > (int)v13) {
          v13 = (unsigned __int8)(SdkData_c1d93e[v18 & 3] &
                                  v11[(unsigned __int64)v18 >> 2]) >>
                SdkData_bd1440[v18 & 3];
        }
        ++v18;
        --v19;
      } while (v19 != 0);
      goto LABEL_60;
    }
  LABEL_70:
    v42 = v7 + 1;
    if ((__int16)v5 >= 3) {
      v5 = (unsigned __int16)v5;
      v43 = 2;
      v44 = (char*)v6 + (v7 - 1) * v250;
      v249 = (char*)v6 + v42 * v250;
      do {
        v46 = (__int64)v43 >> 2;
        v47 = v43 & 3;
        v48 = (__int64)(v43 - 1) >> 2;
        v49 = (v43 - 1) & 3LL;
        v50 = SdkData_c1d93e[v47];
        v51 = SdkData_bd1440[v47];
        v52 = v11[v48];
        v53 = SdkData_c1d93e[v49];
        v54 = SdkData_bd1440[v49];
        v55 = (unsigned __int8)(v50 & v11[v46]) >> v51;
        if ((v53 & v52) >> v54 != 0 || v55 == 0) {
          v45 = v43;
        }
        else {
          v57 = (__int64)(v43 - 2) >> 2;
          v58 = (v43 - 2) & 3LL;
          v59 = SdkData_c1d93e[v58];
          v60 = SdkData_bd1440[v58];
          v61 = (unsigned __int8)(v59 & v11[v57]) >> v60;
          if (v5 <= v43 + 1) {
            v62 = v43 + 1;
          }
          else {
            v62 = v5;
          }
          v45 = v43;
          v63 = v62 - 1;
          do {
            if (v63 == v45) {
              v45 = v62;
              if (v61 == 0) {
                goto LABEL_85;
              }
              goto LABEL_88;
            }
            ++v45;
          } while ((unsigned __int8)(SdkData_c1d93e[v45 & 3] & v11[v45 >> 2]) >>
                       SdkData_bd1440[v45 & 3] !=
                   0);
          v63 = v45 - 1;
          if (v61 == 0) {
          LABEL_85:
            v64 = v63 - v43;
            if (v63 >= v43) {
              v72 = v43;
              v65 = v43;
              for (i = ((_BYTE)v64 + 1) & 3; i != 0; --i) {
                v74 = (unsigned __int8)(SdkData_c1d93e[v72 & 3] &
                                        v11[v72 >> 2]) >>
                      SdkData_bd1440[v72 & 3];
                v75 = v74 > (unsigned int)v55;
                if (v74 > v55) {
                  v55 = (unsigned __int8)(SdkData_c1d93e[v72 & 3] &
                                          v11[v72 >> 2]) >>
                        SdkData_bd1440[v72 & 3];
                }
                if (v75) {
                  v65 = v72;
                }
                ++v72;
              }
              if (v64 >= 3) {
                v76 = v72 & 3;
                v77 = ((_BYTE)v72 + 1) & 3;
                v78 = SdkData_bd1440[v76];
                v79 = SdkData_c1d93e[v77];
                v80 = SdkData_bd1440[v77];
                v81 = ((_BYTE)v72 - 1) & 3;
                v82 = SdkData_c1d93e[v76];
                v83 = SdkData_c1d93e[v76 ^ 2];
                v84 = SdkData_bd1440[v76 ^ 2];
                v85 = SdkData_c1d93e[v81];
                v86 = SdkData_bd1440[v81];
                do {
                  v87 = (unsigned __int8)(v82 & v11[v72 >> 2]) >> v78;
                  v88 = v87 > (unsigned int)v55;
                  v89 = (unsigned __int8)(v79 & v11[(v72 + 1) >> 2]) >> v80;
                  if (v87 <= v55) {
                    v87 = v55;
                  }
                  if (v88) {
                    v90 = v72;
                  }
                  else {
                    v90 = v65;
                  }
                  v91 = v89 > (unsigned int)v87;
                  if (v89 > v87) {
                    v87 = (unsigned __int8)(v79 & v11[(v72 + 1) >> 2]) >> v80;
                  }
                  if (v91) {
                    v90 = v72 + 1;
                  }
                  v92 = (unsigned __int8)(v83 & v11[(v72 + 2) >> 2]) >> v84;
                  if (v92 > (unsigned int)v87) {
                    v90 = v72 + 2;
                  }
                  v93 = v72 + 3;
                  if (v92 > v87) {
                    v87 = (unsigned __int8)(v83 & v11[(v72 + 2) >> 2]) >> v84;
                  }
                  v72 += 4;
                  v94 = (unsigned __int8)(v85 & v11[v93 >> 2]) >> v86;
                  if (v94 <= v87) {
                    v55 = v87;
                  }
                  else {
                    v55 = (unsigned __int8)(v85 & v11[v93 >> 2]) >> v86;
                  }
                  if (v94 <= (unsigned int)v87) {
                    v65 = v90;
                  }
                  else {
                    v65 = v93;
                  }
                } while (v93 != v63);
              }
            }
            else {
              v65 = v43;
            }
            if (v55 >= 3) {
              v95 = v65 - v43;
              if (v65 >= v43) {
                for (j = ((_BYTE)v95 + 1) & 3; j != 0;
                     v11[v97] = SdkData_c1d94a[v98] & v11[v97] |
                                ((unsigned __int8)(v99 & v11[v101]) >>
                                 v100 << SdkData_bd1440[v98])) {
                  --j;
                  v97 = (__int64)(v43 - 1) >> 2;
                  v98 = (v43 - 1) & 3LL;
                  v99 = SdkData_c1d93e[v43 & 3];
                  v100 = SdkData_bd1440[v43 & 3];
                  v101 = v43++ >> 2;
                }
                if (v95 >= 3) {
                  v102 = v43 & 3;
                  v103 = v43 + 3;
                  v104 = SdkData_bd1440[v102];
                  v105 = ((_BYTE)v43 + 1) & 3;
                  v106 = SdkData_c1d93e[v102];
                  v107 = SdkData_c1d94a[v102];
                  v108 = SdkData_c1d94a[v103 & 3];
                  v109 = SdkData_bd1440[v103 & 3];
                  v110 = SdkData_c1d93e[v105];
                  v111 = SdkData_bd1440[v105];
                  v112 = SdkData_c1d94a[v105];
                  v113 = SdkData_c1d93e[v102 ^ 2];
                  v114 = SdkData_bd1440[v102 ^ 2];
                  v115 = SdkData_c1d94a[v102 ^ 2];
                  v116 = SdkData_c1d93e[v103 & 3];
                  do {
                    v117 = (__int64)(v103 - 3) >> 2;
                    v11[(__int64)(v103 - 4) >> 2] =
                        v108 & v11[(__int64)(v103 - 4) >> 2] |
                        ((unsigned __int8)(v106 & v11[v117]) >> v104 << v109);
                    v118 = (__int64)(v103 - 2) >> 2;
                    v11[v117] =
                        v107 & v11[v117] |
                        ((unsigned __int8)(v110 & v11[v118]) >> v111 << v104);
                    v119 = (__int64)(v103 - 1) >> 2;
                    v11[v118] =
                        v112 & v11[v118] |
                        ((unsigned __int8)(v113 & v11[v119]) >> v114 << v111);
                    v120 = v103 >> 2;
                    v103 += 4;
                    v11[v119] =
                        v115 & v11[v119] |
                        ((unsigned __int8)(v116 & v11[v120]) >> v109 << v114);
                  } while (v103 - v65 != 4);
                }
              }
              v11[(__int64)v65 >> 2] =
                  SdkData_c1d94a[v65 & 3] & v11[(__int64)v65 >> 2] |
                  (3 << SdkData_bd1440[v65 & 3]);
            }
            goto LABEL_73;
          }
        LABEL_88:
          if (v7 != 0) {
            v66 = v7 != (__int16)a2[15] - 1 && v61 >= 0xC;
            v67 = v66 && v55 == 3;
            if (v67 && (unsigned __int8)(v44[v57] & v59) >> v60 == 0) {
              v68 = (unsigned __int8)(v249[v57] & v59) >> v60;
              v69 = (unsigned __int8)(v44[v46] & v50) >> v51 == 3 && v68 == 0;
              v70 = v69 && (unsigned __int8)(v249[v48] & v53) >> v54 == 0;
              if (v70 && (unsigned __int8)(v249[v46] & v50) >> v51 == 3) {
                v11[v48] =
                    SdkData_c1d94a[v49] & v52 | (3 << SdkData_bd1440[v49]);
              }
            }
          }
        }
      LABEL_73:
        v43 = v45 + 1;
        v5 = (__int16)a2[14];
      } while (v43 < v5);
      v6 = a2 + 20;
    }
    v4 = v250;
    v10 = (__int16)a2[15];
    ++v7;
    v8 += v250;
    v9 += v250;
  } while (v42 < v10);
  if (v3 >= 2 && (int)v10 >= 1) {
    v121 = 0;
    v122 = a2 + 20;
    while (1) {
      v123 = (__int16)a2[14];
      v124 = (char*)v122 + v121 * v4;
      v125 = v123 - 2;
      v126 = (unsigned __int8)(SdkData_c1d93e[v125 & 3] & v124[v125 >> 2]) >>
             SdkData_bd1440[v125 & 3];
      if ((unsigned __int8)(SdkData_c1d93e[(v123 - 1) & 3LL] &
                            v124[(v123 - 1) >> 2]) >>
                  SdkData_bd1440[(v123 - 1) & 3LL] !=
              0 ||
          v126 == 0) {
        goto LABEL_176;
      }
      v128 = v123 - 3;
      if (v123 >= 3) {
        while ((unsigned __int8)(SdkData_c1d93e[v128 & 3] &
                                 v124[(unsigned __int64)(unsigned int)v128 >>
                                      2]) >>
                   SdkData_bd1440[v128 & 3] !=
               0) {
          v75 = v128-- <= 0;
          if (v75) {
            v128 = -1;
            break;
          }
        }
        if (v125 <= v128) {
          break;
        }
      }
      v129 = v123 - 2;
      v130 = v123 - 2;
      do {
        v131 = (unsigned __int8)(SdkData_c1d93e[v129 & 3] & v124[v129 >> 2]) >>
               SdkData_bd1440[v129 & 3];
        v132 = v131 > (unsigned int)v126;
        if (v131 > v126) {
          v126 =
              (unsigned __int8)(SdkData_c1d93e[v129 & 3] & v124[v129 >> 2]) >>
              SdkData_bd1440[v129 & 3];
        }
        if (v132) {
          v130 = v129;
        }
        --v129;
      } while (v129 > v128);
      if (v126 >= 3) {
        goto LABEL_168;
      }
    LABEL_176:
      v160 = v121 + 1;
      if ((__int16)v123 >= 3) {
        v161 = (char*)v122 + (v121 - 1) * v250;
        v162 = (char*)v122 + v160 * v250;
        v163 = (unsigned __int16)v123 - 3;
        do {
          v165 = (unsigned __int8)(SdkData_c1d93e[(v163 + 2) & 3LL] &
                                   v124[(unsigned __int64)(unsigned int)(v163 +
                                                                         2) >>
                                        2]) >>
                 SdkData_bd1440[(v163 + 2) & 3LL];
          v166 = (unsigned __int8)(SdkData_c1d93e[(v163 + 1) & 3LL] &
                                   v124[(unsigned __int64)(unsigned int)(v163 +
                                                                         1) >>
                                        2]) >>
                 SdkData_bd1440[(v163 + 1) & 3LL];
          v167 = (unsigned __int64)(unsigned int)v163 >> 2;
          v168 = v163 & 3;
          v169 = SdkData_c1d93e[v168];
          v170 = SdkData_bd1440[v168];
          v171 = (unsigned __int8)(v169 & v124[v167]) >> v170;
          if (v166 != 0 || v171 == 0) {
            if (v121 != 0) {
              v173 = v121 != (__int16)a2[15] - 1 && v165 == 3;
              v174 = v173 && v166 == 0;
              if (v174 && v171 == 3) {
                v176 = (__int64)(v163 - 2) >> 2;
                v177 = (v163 - 2) & 3LL;
                v178 = SdkData_c1d93e[v177];
                v179 = SdkData_bd1440[v177];
                if ((unsigned __int8)(v178 & v161[v176]) >> v179 == 0 &&
                    (unsigned __int8)(v161[v167] & v169) >> v170 == 3 &&
                    (unsigned __int8)(v162[v176] & v178) >> v179 == 0) {
                  v180 = (__int64)(v163 - 1) >> 2;
                  v181 = (v163 - 1) & 3LL;
                  if ((unsigned __int8)(SdkData_c1d93e[v181] & v162[v180]) >>
                              SdkData_bd1440[v181] ==
                          0 &&
                      (unsigned __int8)(v162[v167] & v169) >> v170 == 3) {
                    v124[v180] = SdkData_c1d94a[v181] & v124[v180] |
                                 (3 << SdkData_bd1440[v181]);
                  }
                }
              }
            }
            LODWORD(v164) = v163;
            goto LABEL_179;
          }
          v182 = v163 - 1;
          if (v163 < 1) {
            LODWORD(v164) = v163 - 1;
            if (v165 == 0) {
              goto LABEL_225;
            }
          }
          else {
            LODWORD(v164) = v163;
            while (1) {
              v164 = (unsigned int)(v164 - 1);
              if ((unsigned __int8)(SdkData_c1d93e[v164 & 3] &
                                    v124[v164 >> 2]) >>
                      SdkData_bd1440[v164 & 3] ==
                  0) {
                break;
              }
              if ((int)v164 <= 0) {
                LODWORD(v164) = -1;
                break;
              }
            }
            if (v165 == 0) {
            LABEL_225:
              if (v163 <= (int)v164) {
                v193 = v163;
              }
              else {
                v191 = ((_BYTE)v163 - (_BYTE)v164) & 7;
                v192 = v163;
                if ((((_BYTE)v163 - (_BYTE)v164) & 7) != 0) {
                  v193 = v163;
                  do {
                    v194 =
                        (unsigned __int8)(SdkData_c1d93e[v192 & 3] &
                                          v124[(unsigned __int64)v192 >> 2]) >>
                        SdkData_bd1440[v192 & 3];
                    v195 = v194 > (unsigned int)v171;
                    if (v194 > v171) {
                      v171 = (unsigned __int8)(SdkData_c1d93e[v192 & 3] &
                                               v124[(unsigned __int64)v192 >>
                                                    2]) >>
                             SdkData_bd1440[v192 & 3];
                    }
                    if (v195) {
                      v193 = v192;
                    }
                    --v192;
                    --v191;
                  } while (v191 != 0);
                  if ((unsigned int)(v164 - v163) > 0xFFFFFFF8) {
                    goto LABEL_273;
                  }
                LABEL_237:
                  v196 = v192 & 3;
                  v197 = ((_BYTE)v192 - 1) & 3;
                  v198 = SdkData_bd1440[v196];
                  v199 = v192 + 1;
                  v200 = SdkData_c1d93e[v197];
                  v201 = SdkData_bd1440[v197];
                  v202 = v192 - 7;
                  v203 = v199 & 3;
                  v204 = SdkData_c1d93e[v196];
                  v205 = SdkData_c1d93e[v196 ^ 2];
                  v206 = SdkData_bd1440[v196 ^ 2];
                  v207 = SdkData_c1d93e[v203];
                  v208 = SdkData_bd1440[v203];
                  do {
                    v209 = v202 + 7;
                    v210 = (unsigned __int8)(v204 & v124[v209 >> 2]) >> v198;
                    if (v210 <= (unsigned int)v171) {
                      LODWORD(v209) = v193;
                    }
                    if (v210 > v171) {
                      v171 = v210;
                    }
                    v211 = v202 + 6;
                    v212 = (unsigned __int8)(v200 & v124[v211 >> 2]) >> v201;
                    if (v212 > (unsigned int)v171) {
                      LODWORD(v209) = v202 + 6;
                    }
                    if (v212 > v171) {
                      v171 = (unsigned __int8)(v200 & v124[v211 >> 2]) >> v201;
                    }
                    v213 = v202 + 5;
                    v214 = (unsigned __int8)(v205 & v124[v213 >> 2]) >> v206;
                    if (v214 > (unsigned int)v171) {
                      LODWORD(v209) = v202 + 5;
                    }
                    if (v214 > v171) {
                      v171 = (unsigned __int8)(v205 & v124[v213 >> 2]) >> v206;
                    }
                    v215 = v202 + 4;
                    v216 = (unsigned __int8)(v207 & v124[v215 >> 2]) >> v208;
                    if (v216 > (unsigned int)v171) {
                      LODWORD(v209) = v202 + 4;
                    }
                    if (v216 > v171) {
                      v171 = (unsigned __int8)(v207 & v124[v215 >> 2]) >> v208;
                    }
                    v217 =
                        (unsigned __int8)(v204 &
                                          v124[(unsigned __int64)(v202 + 3) >>
                                               2]) >>
                        v198;
                    if (v217 > (unsigned int)v171) {
                      LODWORD(v209) = v202 + 3;
                    }
                    v218 = v202 + 2;
                    if (v217 > v171) {
                      v171 =
                          (unsigned __int8)(v204 &
                                            v124[(unsigned __int64)(v202 + 3) >>
                                                 2]) >>
                          v198;
                    }
                    v219 = (unsigned __int8)(v200 & v124[v218 >> 2]) >> v201;
                    if (v219 > (unsigned int)v171) {
                      LODWORD(v209) = v202 + 2;
                    }
                    if (v219 > v171) {
                      v171 = (unsigned __int8)(v200 & v124[v218 >> 2]) >> v201;
                    }
                    v220 =
                        (unsigned __int8)(v205 &
                                          v124[(unsigned __int64)(v202 + 1) >>
                                               2]) >>
                        v206;
                    v221 = v220 > (unsigned int)v171;
                    if (v220 <= v171) {
                      v220 = v171;
                    }
                    if (v221) {
                      LODWORD(v209) = v202 + 1;
                    }
                    v171 =
                        (unsigned __int8)(v207 &
                                          v124[(unsigned __int64)v202 >> 2]) >>
                        v208;
                    v222 = v171 > (unsigned int)v220;
                    if (v171 <= v220) {
                      v171 = v220;
                    }
                    if (v222) {
                      v193 = v202;
                    }
                    else {
                      v193 = v209;
                    }
                    v223 = v202 - 1;
                    v202 -= 8;
                  } while (v223 > (int)v164);
                }
                else {
                  v193 = v163;
                  if ((unsigned int)(v164 - v163) <= 0xFFFFFFF8) {
                    goto LABEL_237;
                  }
                }
              }
            LABEL_273:
              if (v171 >= 3) {
                v224 = v163 - v193;
                if (v163 >= v193) {
                  for (k = ((_BYTE)v224 + 1) & 3; k != 0;
                       v124[v226 >> 2] =
                           SdkData_c1d94a[v226 & 3] & v124[v226 >> 2] |
                           ((unsigned __int8)(SdkData_c1d93e[v228] &
                                              v124[v227]) >>
                            SdkData_bd1440[v228] << SdkData_bd1440[v226 & 3])) {
                    v226 = (unsigned int)(v163 + 1);
                    --k;
                    v227 = (unsigned __int64)(unsigned int)v163 >> 2;
                    v228 = v163-- & 3;
                  }
                  if (v224 >= 3) {
                    v229 = v163 - 3;
                    v230 = SdkData_c1d93e[v163 & 3];
                    v231 = ((_BYTE)v163 - 1) & 3;
                    v232 = ((_BYTE)v163 + 1) & 3;
                    v233 = SdkData_bd1440[v163 & 3];
                    v234 = SdkData_c1d94a[v163 & 3];
                    v235 = v163 & 3 ^ 2LL;
                    v236 = SdkData_c1d94a[v232];
                    v237 = SdkData_bd1440[v232];
                    v238 = SdkData_c1d93e[v231];
                    v239 = SdkData_bd1440[v231];
                    v240 = SdkData_c1d94a[v231];
                    v241 = SdkData_c1d93e[v232];
                    v242 = SdkData_c1d93e[v235];
                    v243 = SdkData_bd1440[v235];
                    v244 = SdkData_c1d94a[v235];
                    do {
                      v245 = (unsigned __int64)(unsigned int)(v229 + 3) >> 2;
                      v124[(unsigned __int64)(unsigned int)(v229 + 4) >> 2] =
                          v236 &
                              v124[(unsigned __int64)(unsigned int)(v229 + 4) >>
                                   2] |
                          ((unsigned __int8)(v230 & v124[v245]) >> v233
                                                                       << v237);
                      v246 = (unsigned __int64)(unsigned int)(v229 + 2) >> 2;
                      v124[v245] = v234 & v124[v245] |
                                   ((unsigned __int8)(v238 & v124[v246]) >>
                                    v239 << v233);
                      v247 = (unsigned __int64)(unsigned int)(v229 + 1) >> 2;
                      v124[v246] = v240 & v124[v246] |
                                   ((unsigned __int8)(v242 & v124[v247]) >>
                                    v243 << v239);
                      v124[v247] =
                          v244 & v124[v247] |
                          ((unsigned __int8)(v241 &
                                             v124[(unsigned __int64)(unsigned int)
                                                      v229 >>
                                                  2]) >>
                           v237 << v243);
                      v75 = v229 <= v193;
                      v229 -= 4;
                    } while (!v75);
                  }
                }
                v124[(unsigned __int64)(unsigned int)v193 >> 2] =
                    SdkData_c1d94a[v193 & 3] &
                        v124[(unsigned __int64)(unsigned int)v193 >> 2] |
                    (3 << SdkData_bd1440[v193 & 3]);
              }
              goto LABEL_179;
            }
          }
          if (v121 != 0 && v121 != (__int16)a2[15] - 1 && v165 >= 0xC &&
              v171 == 3) {
            v185 = v163 - 2;
            v186 = (__int64)(v163 - 2) >> 2;
            v187 = v185 & 3;
            v188 = SdkData_c1d93e[v187];
            v189 = SdkData_bd1440[v187];
            if ((unsigned __int8)(v188 & v161[v186]) >> v189 == 0 &&
                (unsigned __int8)(v161[v167] & v169) >> v170 == 3 &&
                (unsigned __int8)(v162[v186] & v188) >> v189 == 0) {
              v190 = (__int64)v182 >> 2;
              if ((unsigned __int8)(SdkData_c1d93e[v182 & 3] & v162[v190]) >>
                          SdkData_bd1440[v182 & 3] ==
                      0 &&
                  (unsigned __int8)(v162[v167] & v169) >> v170 == 3) {
                v124[v190] = SdkData_c1d94a[v182 & 3] & v124[v190] |
                             (3 << SdkData_bd1440[v182 & 3]);
              }
            }
          }
        LABEL_179:
          v163 = v164 - 1;
        } while ((int)v164 > 0);
      }
      ++v121;
      v4 = v250;
      if (v160 >= (__int16)a2[15]) {
        return a2;
      }
    }
    v130 = v123 - 2;
    if (v126 < 3) {
      goto LABEL_176;
    }
  LABEL_168:
    if (v125 >= v130) {
      v133 = v123 - 2;
      for (m = ~(v130 - v123) & 3; m != 0;
           v124[v135] = SdkData_c1d94a[v136] & v124[v135] |
                        ((unsigned __int8)(v137 & v124[v139]) >>
                         v138 << SdkData_bd1440[v136])) {
        --m;
        v135 = (__int64)(v133 + 1) >> 2;
        v136 = (v133 + 1) & 3LL;
        v137 = SdkData_c1d93e[v133 & 3];
        v138 = SdkData_bd1440[v133 & 3];
        v139 = v133-- >> 2;
      }
      if ((unsigned int)(v123 - v130 - 2) >= 3) {
        v140 = v133 & 3;
        v141 = v133 - 3;
        v142 = SdkData_c1d93e[v140];
        v143 = ((_BYTE)v133 - 1) & 3;
        v144 = ((_BYTE)v133 + 1) & 3;
        v145 = SdkData_bd1440[v140];
        v146 = SdkData_c1d94a[v140];
        v147 = v133 & 3 ^ 2LL;
        v148 = SdkData_c1d94a[v144];
        v149 = SdkData_bd1440[v144];
        v150 = SdkData_c1d93e[v143];
        v151 = SdkData_bd1440[v143];
        v152 = SdkData_c1d94a[v143];
        v153 = SdkData_c1d93e[v144];
        v154 = SdkData_c1d93e[v147];
        v155 = SdkData_bd1440[v147];
        v156 = SdkData_c1d94a[v147];
        do {
          v157 = (__int64)(v141 + 3) >> 2;
          v124[(__int64)(v141 + 4) >> 2] =
              v148 & v124[(__int64)(v141 + 4) >> 2] |
              ((unsigned __int8)(v142 & v124[v157]) >> v145 << v149);
          v158 = (__int64)(v141 + 2) >> 2;
          v124[v157] = v146 & v124[v157] |
                       ((unsigned __int8)(v150 & v124[v158]) >> v151 << v145);
          v159 = (__int64)(v141 + 1) >> 2;
          v124[v158] = v152 & v124[v158] |
                       ((unsigned __int8)(v154 & v124[v159]) >> v155 << v151);
          v124[v159] =
              v156 & v124[v159] |
              ((unsigned __int8)(v153 & v124[v141 >> 2]) >> v149 << v155);
          v75 = v141 <= v130;
          v141 -= 4;
        } while (!v75);
      }
    }
    v124[(__int64)v130 >> 2] =
        SdkData_c1d94a[v130 & 3] & v124[(__int64)v130 >> 2] |
        (3 << SdkData_bd1440[v130 & 3]);
    LOWORD(v123) = a2[14];
    goto LABEL_176;
  }
  return a2;
}

_WORD* pixelbold_graymap4(__int64 a1, _WORD* a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned __int8* v7;
  unsigned __int8* v8;
  __int64 v9;
  unsigned __int8* v10;
  unsigned int v11;
  int v12;
  unsigned int v14;
  int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned __int8* v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  unsigned int v30;
  unsigned int v31;
  int i;
  int v33;
  unsigned int v34;
  int v35;
  int v36;
  unsigned __int8* v37;
  int v38;
  unsigned int v39;
  int v40;
  int v41;
  __int64 v42;
  int v43;
  char* v44;
  char* v45;
  int v46;
  __int64 v47;
  __int64 v48;
  unsigned __int8 v49;
  int v50;
  __int64 v51;
  __int64 v52;
  unsigned int v53;
  int v54;
  int v55;
  int v56;
  __int64 v58;
  unsigned int v59;
  int v60;
  int v61;
  unsigned int v62;
  int v63;
  bool v64;
  bool v65;
  bool v66;
  bool v67;
  int v69;
  int j;
  int v71;
  bool v72;
  __int64 v73;
  _BOOL8 v74;
  unsigned __int8 v75;
  int v76;
  unsigned __int8 v77;
  int v78;
  int v79;
  bool v80;
  int v81;
  int v82;
  bool v83;
  int v84;
  int v85;
  int v86;
  unsigned int v87;
  int k;
  int v89;
  int v90;
  __int64 v91;
  _BOOL8 v92;
  unsigned __int8 v93;
  int v94;
  char v95;
  char v96;
  int v97;
  unsigned __int8 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  _WORD* v103;
  int v104;
  char* v105;
  int v106;
  int v107;
  int v109;
  int v110;
  int v111;
  int v112;
  bool v113;
  int n;
  int v115;
  int v116;
  __int64 v117;
  _BOOL8 v118;
  unsigned __int8 v119;
  int v120;
  char v121;
  char v122;
  int v123;
  unsigned __int8 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  char* v129;
  int v130;
  char* v131;
  unsigned __int64 v132;
  __int64 v133;
  unsigned __int8 v134;
  int v135;
  unsigned int v136;
  int v137;
  unsigned __int64 v138;
  int v139;
  bool v141;
  bool v142;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  int v147;
  __int64 v150;
  __int64 v151;
  int v152;
  unsigned int v153;
  int v154;
  int v155;
  bool v156;
  __int64 v157;
  __int64 v158;
  unsigned int v159;
  __int64 v160;
  unsigned __int8 v161;
  int v162;
  unsigned __int8 v163;
  int v164;
  int v165;
  unsigned __int64 v166;
  int v167;
  unsigned __int64 v168;
  int v169;
  unsigned __int64 v170;
  int v171;
  int v172;
  unsigned __int64 v173;
  int v174;
  int v175;
  bool v176;
  int v177;
  bool v178;
  int v179;
  unsigned int v180;
  int m;
  int v182;
  unsigned __int64 v183;
  __int64 v184;
  __int64 v185;
  int v186;
  __int64 v187;
  unsigned __int8 v188;
  int v189;
  char v190;
  char v191;
  int v192;
  unsigned __int8 v193;
  unsigned __int64 v194;
  unsigned __int64 v195;
  unsigned __int64 v196;
  _WORD* v198;

  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 40LL);
  v3 = *(__int16*)(v2 + 14);
  if (*(_WORD*)(v2 + 14) == 0 || (__int16)a2[15] < 1) {
    return a2;
  }
  v4 = (__int16)a2[16];
  LOWORD(v5) = a2[14];
  v6 = 0;
  v7 = (unsigned __int8*)(a2 + 22);
  v8 = (unsigned __int8*)(a2 + 21);
  v198 = a2 + 20;
  do {
    v10 = (unsigned __int8*)v198 + v6 * v4;
    v11 = *v10;
    v12 = v11 & 0xF;
    if (v11 <= 0xF && v12 != 0) {
      v14 = 2;
      if ((__int16)v5 >= 3) {
        while ((unsigned __int8)(SdkData_c3c690[v14 & 1] &
                                 v10[(unsigned __int64)v14 >> 1]) >>
                   SdkData_bd11f8[v14 & 1] !=
               0) {
          if ((__int16)v5 == ++v14) {
            v14 = (__int16)v5;
            break;
          }
        }
      }
      v15 = v14 <= 2 ? 2 : v14;
      v16 = v15 - 1;
      if ((unsigned int)(v15 - 2) >= 7) {
        v17 = 1;
        v18 = 1;
        v19 = v7;
        do {
          v20 = *(v19 - 4) & 0xF;
          if (v12 < (unsigned int)v20) {
            v17 = v18;
          }
          if (v20 <= v12) {
            v20 = v12;
          }
          v21 = *(v19 - 3);
          v22 = v21 >> 4;
          v23 = v21 & 0xF;
          if (v20 < v22) {
            v17 = v18 + 1;
          }
          if ((int)v22 > v20) {
            v20 = v22;
          }
          if (v20 < (unsigned int)v23) {
            v17 = v18 + 2;
          }
          if (v23 > v20) {
            v20 = v23;
          }
          v24 = *(v19 - 2);
          v25 = v24 >> 4;
          v26 = v24 & 0xF;
          if (v20 < v25) {
            v17 = v18 + 3;
          }
          if ((int)v25 > v20) {
            v20 = v25;
          }
          if (v20 < (unsigned int)v26) {
            v17 = v18 + 4;
          }
          if (v26 > v20) {
            v20 = v26;
          }
          v27 = *(v19 - 1);
          v28 = v27 >> 4;
          v29 = v27 & 0xF;
          if (v20 < v28) {
            v17 = v18 + 5;
          }
          if ((int)v28 > v20) {
            v20 = v28;
          }
          if (v20 < (unsigned int)v29) {
            v17 = v18 + 6;
          }
          v30 = v18 + 7;
          v18 += 8;
          if (v29 > v20) {
            v20 = v29;
          }
          v31 = *v19;
          v19 += 4;
          v12 = v31 >> 4;
          if (v20 < v31 >> 4) {
            v17 = v30;
          }
          if (v12 <= v20) {
            v12 = v20;
          }
        } while (v30 != (v16 & 0xFFFFFFF8));
      }
      else {
        v17 = 1;
        v18 = 1;
      }
      for (i = v16 & 7; i != 0; --i) {
        v33 = (unsigned __int8)(SdkData_c3c690[v18 & 1] &
                                v10[(unsigned __int64)v18 >> 1]) >>
              SdkData_bd11f8[v18 & 1];
        if (v33 > (unsigned int)v12) {
          v17 = v18;
        }
        if (v33 > v12) {
          v12 = (unsigned __int8)(SdkData_c3c690[v18 & 1] &
                                  v10[(unsigned __int64)v18 >> 1]) >>
                SdkData_bd11f8[v18 & 1];
        }
        ++v18;
      }
      if ((unsigned int)v12 >= 5) {
        if (v17 != 0) {
          if (v17 >= 4) {
            v36 = 0;
            v37 = v8;
            do {
              v10[(__int64)v36 >> 1] =
                  v10[(__int64)v36 >> 1] & 0xF | (16 * *(v37 - 2));
              v10[(__int64)(v36 + 1) >> 1] =
                  v10[(__int64)(v36 + 1) >> 1] & 0xF0 | (*(v37 - 1) >> 4);
              v10[(__int64)(v36 + 2) >> 1] =
                  v10[(__int64)(v36 + 2) >> 1] & 0xF | (16 * *(v37 - 1));
              v38 = v36 + 3;
              v36 += 4;
              v39 = *v37;
              v37 += 2;
              v10[(__int64)v38 >> 1] =
                  v10[(__int64)v38 >> 1] & 0xF0 | (v39 >> 4);
            } while ((v17 & 0xFFFFFFFC) != v36);
            v34 = v36 + 1;
            v35 = v17 & 3;
            if ((v17 & 3) == 0) {
              goto LABEL_67;
            }
          }
          else {
            v34 = 1;
            v35 = v17 & 3;
            if ((v17 & 3) == 0) {
              goto LABEL_67;
            }
          }
          do {
            --v35;
            v40 = (unsigned __int8)(SdkData_c3c690[v34 & 1] &
                                    v10[(unsigned __int64)v34 >> 1]) >>
                  SdkData_bd11f8[v34 & 1];
            v41 = v34++ - 1;
            v10[(__int64)v41 >> 1] =
                SdkData_c3c692[v41 & 1] & v10[(__int64)v41 >> 1] |
                ((_BYTE)v40 << SdkData_bd11f8[v41 & 1]);
          } while (v35 != 0);
        }
      LABEL_67:
        v10[(unsigned __int64)v17 >> 1] =
            SdkData_c3c692[v17 & 1] & v10[(unsigned __int64)v17 >> 1] |
            (15 << SdkData_bd11f8[v17 & 1]);
        LOWORD(v5) = a2[14];
      }
    }
    v42 = v6 + 1;
    if ((__int16)v5 >= 3) {
      v5 = (unsigned __int16)v5;
      v43 = 2;
      v44 = (char*)v198 + (v6 - 1) * v4;
      v45 = (char*)v198 + v42 * v4;
      do {
        v47 = v43 & 1;
        v48 = (__int64)v43 >> 1;
        v49 = SdkData_c3c690[v47];
        v50 = SdkData_bd11f8[v47];
        v51 = (__int64)(v43 - 1) >> 1;
        v52 = (v43 - 1) & 1LL;
        v53 = v10[v51];
        v54 = SdkData_c3c690[v52];
        v55 = SdkData_bd11f8[v52];
        v56 = (unsigned __int8)(v10[v48] & v49) >> v50;
        if ((v54 & v53) >> v55 != 0 || v56 == 0) {
          v46 = v43;
        }
        else {
          v58 = (__int64)(v43 - 2) >> 1;
          v59 = (unsigned __int8)(v49 & v10[v58]) >> v50;
          if (v5 <= v43 + 1) {
            v60 = v43 + 1;
          }
          else {
            v60 = v5;
          }
          v46 = v43;
          v61 = v60 - 1;
          do {
            if (v61 == v46) {
              v46 = v60;
              if (v59 == 0) {
                goto LABEL_83;
              }
              goto LABEL_86;
            }
            ++v46;
          } while ((unsigned __int8)(SdkData_c3c690[v46 & 1] & v10[v46 >> 1]) >>
                       SdkData_bd11f8[v46 & 1] !=
                   0);
          v61 = v46 - 1;
          if (v59 == 0) {
          LABEL_83:
            v62 = v61 - v43;
            if (v61 >= v43) {
              v69 = v43;
              v63 = v43;
              for (j = ((_BYTE)v62 + 1) & 3; j != 0; --j) {
                v71 = (unsigned __int8)(SdkData_c3c690[v69 & 1] &
                                        v10[v69 >> 1]) >>
                      SdkData_bd11f8[v69 & 1];
                v72 = v71 > (unsigned int)v56;
                if (v71 > v56) {
                  v56 = (unsigned __int8)(SdkData_c3c690[v69 & 1] &
                                          v10[v69 >> 1]) >>
                        SdkData_bd11f8[v69 & 1];
                }
                if (v72) {
                  v63 = v69;
                }
                ++v69;
              }
              if (v62 >= 3) {
                v73 = v69 & 1;
                v74 = !(v69 & 1);
                v75 = SdkData_c3c690[v73];
                v76 = SdkData_bd11f8[v73];
                v77 = SdkData_c3c690[v74];
                v78 = SdkData_bd11f8[v74];
                do {
                  v79 = (unsigned __int8)(v75 & v10[v69 >> 1]) >> v76;
                  v80 = v79 > (unsigned int)v56;
                  v81 = (unsigned __int8)(v77 & v10[(v69 + 1) >> 1]) >> v78;
                  if (v79 <= v56) {
                    v79 = v56;
                  }
                  if (v80) {
                    v82 = v69;
                  }
                  else {
                    v82 = v63;
                  }
                  v83 = v81 > (unsigned int)v79;
                  if (v81 > v79) {
                    v79 = (unsigned __int8)(v77 & v10[(v69 + 1) >> 1]) >> v78;
                  }
                  if (v83) {
                    v82 = v69 + 1;
                  }
                  v84 = (unsigned __int8)(v75 & v10[(v69 + 2) >> 1]) >> v76;
                  if (v84 > (unsigned int)v79) {
                    v82 = v69 + 2;
                  }
                  v85 = v69 + 3;
                  if (v84 > v79) {
                    v79 = (unsigned __int8)(v75 & v10[(v69 + 2) >> 1]) >> v76;
                  }
                  v69 += 4;
                  v86 = (unsigned __int8)(v77 & v10[v85 >> 1]) >> v78;
                  if (v86 <= v79) {
                    v56 = v79;
                  }
                  else {
                    v56 = (unsigned __int8)(v77 & v10[v85 >> 1]) >> v78;
                  }
                  if (v86 <= (unsigned int)v79) {
                    v63 = v82;
                  }
                  else {
                    v63 = v85;
                  }
                } while (v85 != v61);
              }
            }
            else {
              v63 = v43;
            }
            if (v56 >= 5) {
              v87 = v63 - v43;
              if (v63 >= v43) {
                for (k = ((_BYTE)v87 + 1) & 3; k != 0;
                     v10[(__int64)v90 >> 1] =
                         SdkData_c3c692[v90 & 1] & v10[(__int64)v90 >> 1] |
                         ((_BYTE)v89 << SdkData_bd11f8[v90 & 1])) {
                  --k;
                  v89 = (unsigned __int8)(SdkData_c3c690[v43 & 1] &
                                          v10[v43 >> 1]) >>
                        SdkData_bd11f8[v43 & 1];
                  v90 = v43++ - 1;
                }
                if (v87 >= 3) {
                  v91 = v43 & 1;
                  v92 = !(v43 & 1);
                  v93 = SdkData_c3c690[v91];
                  v94 = SdkData_bd11f8[v91];
                  v95 = SdkData_c3c692[v91];
                  v96 = SdkData_c3c692[v92];
                  v97 = SdkData_bd11f8[v92];
                  v98 = SdkData_c3c690[v92];
                  do {
                    v99 = (__int64)v43 >> 1;
                    v10[(__int64)(v43 - 1) >> 1] =
                        v96 & v10[(__int64)(v43 - 1) >> 1] |
                        ((unsigned __int8)(v93 & v10[v99]) >> v94 << v97);
                    v100 = (__int64)(v43 + 1) >> 1;
                    v10[v99] =
                        v95 & v10[v99] |
                        ((unsigned __int8)(v98 & v10[v100]) >> v97 << v94);
                    v101 = (__int64)(v43 + 2) >> 1;
                    v10[v100] =
                        v96 & v10[v100] |
                        ((unsigned __int8)(v93 & v10[v101]) >> v94 << v97);
                    LODWORD(v100) = v43 + 3;
                    v43 += 4;
                    v10[v101] = v95 & v10[v101] |
                                ((unsigned __int8)(v98 & v10[(int)v100 >> 1]) >>
                                 v97 << v94);
                  } while ((_DWORD)v100 != v63);
                }
              }
              v10[(__int64)v63 >> 1] =
                  SdkData_c3c692[v63 & 1] & v10[(__int64)v63 >> 1] |
                  (15 << SdkData_bd11f8[v63 & 1]);
            }
            goto LABEL_71;
          }
        LABEL_86:
          if (v6 != 0) {
            v64 = v6 != (__int16)a2[15] - 1 && v59 >= 0xC;
            v65 = v64 && v56 == 15;
            if (v65 && (unsigned __int8)(v44[v58] & v49) >> v50 == 0) {
              v66 = (unsigned __int8)(v44[v48] & v49) >> v50 == 15 &&
                    (unsigned __int8)(v45[v58] & v49) >> v50 == 0;
              v67 = v66 && (unsigned __int8)(v45[v51] & v54) >> v55 == 0;
              if (v67 && (unsigned __int8)(v45[v48] & v49) >> v50 == 15) {
                v10[v51] =
                    SdkData_c3c692[v52] & v53 | (15 << SdkData_bd11f8[v52]);
              }
            }
          }
        }
      LABEL_71:
        v43 = v46 + 1;
        v5 = (__int16)a2[14];
      } while (v43 < v5);
    }
    v9 = (__int16)a2[15];
    v7 += v4;
    v8 += v4;
    ++v6;
  } while (v42 < v9);
  if (v3 >= 2 && (int)v9 >= 1) {
    v102 = 0;
    v103 = a2 + 20;
    while (1) {
      v104 = (__int16)a2[14];
      v105 = (char*)v103 + v102 * v4;
      v106 = v104 - 2;
      v107 =
          (unsigned __int8)(SdkData_c3c690[v104 & 1] & v105[(v104 - 2) >> 1]) >>
          SdkData_bd11f8[v104 & 1];
      if ((unsigned __int8)(SdkData_c3c690[(v104 - 1) & 1LL] &
                            v105[(v104 - 1) >> 1]) >>
                  SdkData_bd11f8[(v104 - 1) & 1LL] !=
              0 ||
          v107 == 0) {
        goto LABEL_173;
      }
      v109 = v104 - 3;
      if (v104 >= 3) {
        while ((unsigned __int8)(SdkData_c3c690[v109 & 1] &
                                 v105[(unsigned __int64)(unsigned int)v109 >>
                                      1]) >>
                   SdkData_bd11f8[v109 & 1] !=
               0) {
          v72 = v109-- <= 0;
          if (v72) {
            v109 = -1;
            break;
          }
        }
        if (v106 <= v109) {
          break;
        }
      }
      v110 = v104 - 2;
      v111 = v104 - 2;
      do {
        v112 = (unsigned __int8)(SdkData_c3c690[v110 & 1] & v105[v110 >> 1]) >>
               SdkData_bd11f8[v110 & 1];
        v113 = v112 > (unsigned int)v107;
        if (v112 > v107) {
          v107 =
              (unsigned __int8)(SdkData_c3c690[v110 & 1] & v105[v110 >> 1]) >>
              SdkData_bd11f8[v110 & 1];
        }
        if (v113) {
          v111 = v110;
        }
        --v110;
      } while (v110 > v109);
      if (v107 >= 5) {
        goto LABEL_166;
      }
    LABEL_173:
      v128 = v102 + 1;
      if ((__int16)v104 >= 3) {
        v129 = (char*)v103 + v128 * v4;
        v130 = (unsigned __int16)v104 - 3;
        v131 = (char*)v103 + (v102 - 1) * v4;
        do {
          v133 = v130 & 1;
          v134 = SdkData_c3c690[v133];
          v135 = SdkData_bd11f8[v133];
          v136 = (unsigned __int8)(v134 &
                                   v105[(unsigned __int64)(unsigned int)(v130 +
                                                                         2) >>
                                        1]) >>
                 v135;
          v137 = (unsigned __int8)(SdkData_c3c690[(v130 + 1) & 1LL] &
                                   v105[(unsigned __int64)(unsigned int)(v130 +
                                                                         1) >>
                                        1]) >>
                 SdkData_bd11f8[(v130 + 1) & 1LL];
          v138 = (unsigned __int64)(unsigned int)v130 >> 1;
          v139 = (unsigned __int8)(v105[v138] & v134) >> v135;
          if (v137 != 0 || v139 == 0) {
            if (v102 != 0) {
              v141 = v102 != (__int16)a2[15] - 1 && v136 == 15;
              v142 = v141 && v137 == 0;
              if (v142 && v139 == 15) {
                v144 = (__int64)(v130 - 2) >> 1;
                if ((unsigned __int8)(v131[v144] & v134) >> v135 == 0 &&
                    (unsigned __int8)(v131[v138] & v134) >> v135 == 15 &&
                    (unsigned __int8)(v129[v144] & v134) >> v135 == 0) {
                  v145 = (__int64)(v130 - 1) >> 1;
                  v146 = (v130 - 1) & 1LL;
                  if ((unsigned __int8)(SdkData_c3c690[v146] & v129[v145]) >>
                              SdkData_bd11f8[v146] ==
                          0 &&
                      (unsigned __int8)(v129[v138] & v134) >> v135 == 15) {
                    v105[v145] = SdkData_c3c692[v146] & v105[v145] |
                                 (15 << SdkData_bd11f8[v146]);
                  }
                }
              }
            }
            LODWORD(v132) = v130;
            goto LABEL_176;
          }
          v147 = v130 - 1;
          if (v130 < 1) {
            LODWORD(v132) = v130 - 1;
            if (v136 == 0) {
              goto LABEL_222;
            }
          }
          else {
            LODWORD(v132) = v130;
            while (1) {
              v132 = (unsigned int)(v132 - 1);
              if ((unsigned __int8)(SdkData_c3c690[v132 & 1] &
                                    v105[v132 >> 1]) >>
                      SdkData_bd11f8[v132 & 1] ==
                  0) {
                break;
              }
              if ((int)v132 <= 0) {
                LODWORD(v132) = -1;
                break;
              }
            }
            if (v136 == 0) {
            LABEL_222:
              if (v130 <= (int)v132) {
                v154 = v130;
              }
              else {
                v152 = ((_BYTE)v130 - (_BYTE)v132) & 7;
                v153 = v130;
                if ((((_BYTE)v130 - (_BYTE)v132) & 7) != 0) {
                  v154 = v130;
                  do {
                    v155 =
                        (unsigned __int8)(SdkData_c3c690[v153 & 1] &
                                          v105[(unsigned __int64)v153 >> 1]) >>
                        SdkData_bd11f8[v153 & 1];
                    v156 = v155 > (unsigned int)v139;
                    if (v155 > v139) {
                      v139 = (unsigned __int8)(SdkData_c3c690[v153 & 1] &
                                               v105[(unsigned __int64)v153 >>
                                                    1]) >>
                             SdkData_bd11f8[v153 & 1];
                    }
                    if (v156) {
                      v154 = v153;
                    }
                    --v153;
                    --v152;
                  } while (v152 != 0);
                  if ((unsigned int)(v132 - v130) > 0xFFFFFFF8) {
                    goto LABEL_269;
                  }
                LABEL_234:
                  v157 = v153 & 1;
                  v158 = v157;
                  v159 = v153 - 7;
                  v160 = v157 ^ 1;
                  v161 = SdkData_c3c690[v157];
                  v162 = SdkData_bd11f8[v158];
                  v163 = SdkData_c3c690[v160];
                  v164 = SdkData_bd11f8[v160];
                  do {
                    v165 =
                        (unsigned __int8)(v161 &
                                          v105[(unsigned __int64)(v159 + 7) >>
                                               1]) >>
                        v162;
                    if (v165 > (unsigned int)v139) {
                      v154 = v159 + 7;
                    }
                    if (v165 > v139) {
                      v139 =
                          (unsigned __int8)(v161 &
                                            v105[(unsigned __int64)(v159 + 7) >>
                                                 1]) >>
                          v162;
                    }
                    v166 = v159 + 6;
                    v167 = (unsigned __int8)(v163 & v105[v166 >> 1]) >> v164;
                    if (v167 > (unsigned int)v139) {
                      v154 = v159 + 6;
                    }
                    if (v167 > v139) {
                      v139 = (unsigned __int8)(v163 & v105[v166 >> 1]) >> v164;
                    }
                    v168 = v159 + 5;
                    v169 = (unsigned __int8)(v161 & v105[v168 >> 1]) >> v162;
                    if (v169 > (unsigned int)v139) {
                      v154 = v159 + 5;
                    }
                    if (v169 > v139) {
                      v139 = (unsigned __int8)(v161 & v105[v168 >> 1]) >> v162;
                    }
                    v170 = v159 + 4;
                    v171 = (unsigned __int8)(v163 & v105[v170 >> 1]) >> v164;
                    if (v171 > (unsigned int)v139) {
                      v154 = v159 + 4;
                    }
                    if (v171 > v139) {
                      v139 = (unsigned __int8)(v163 & v105[v170 >> 1]) >> v164;
                    }
                    v172 =
                        (unsigned __int8)(v161 &
                                          v105[(unsigned __int64)(v159 + 3) >>
                                               1]) >>
                        v162;
                    if (v172 > (unsigned int)v139) {
                      v154 = v159 + 3;
                    }
                    v173 = v159 + 2;
                    if (v172 > v139) {
                      v139 =
                          (unsigned __int8)(v161 &
                                            v105[(unsigned __int64)(v159 + 3) >>
                                                 1]) >>
                          v162;
                    }
                    v174 = (unsigned __int8)(v163 & v105[v173 >> 1]) >> v164;
                    if (v174 > (unsigned int)v139) {
                      v154 = v159 + 2;
                    }
                    if (v174 > v139) {
                      v139 = (unsigned __int8)(v163 & v105[v173 >> 1]) >> v164;
                    }
                    v175 =
                        (unsigned __int8)(v161 &
                                          v105[(unsigned __int64)(v159 + 1) >>
                                               1]) >>
                        v162;
                    v176 = v175 > (unsigned int)v139;
                    if (v175 > v139) {
                      v139 =
                          (unsigned __int8)(v161 &
                                            v105[(unsigned __int64)(v159 + 1) >>
                                                 1]) >>
                          v162;
                    }
                    if (v176) {
                      v154 = v159 + 1;
                    }
                    v177 =
                        (unsigned __int8)(v163 &
                                          v105[(unsigned __int64)v159 >> 1]) >>
                        v164;
                    v178 = v177 > (unsigned int)v139;
                    if (v177 > v139) {
                      v139 = (unsigned __int8)(v163 &
                                               v105[(unsigned __int64)v159 >>
                                                    1]) >>
                             v164;
                    }
                    if (v178) {
                      v154 = v159;
                    }
                    v179 = v159 - 1;
                    v159 -= 8;
                  } while (v179 > (int)v132);
                }
                else {
                  v154 = v130;
                  if ((unsigned int)(v132 - v130) <= 0xFFFFFFF8) {
                    goto LABEL_234;
                  }
                }
              }
            LABEL_269:
              if (v139 >= 5) {
                v180 = v130 - v154;
                if (v130 >= v154) {
                  for (m = ((_BYTE)v180 + 1) & 3; m != 0;
                       v105[v183 >> 1] =
                           SdkData_c3c692[v183 & 1] & v105[v183 >> 1] |
                           ((_BYTE)v182 << SdkData_bd11f8[v183 & 1])) {
                    --m;
                    v182 =
                        (unsigned __int8)(SdkData_c3c690[v130 & 1] &
                                          v105[(unsigned __int64)(unsigned int)
                                                   v130 >>
                                               1]) >>
                        SdkData_bd11f8[v130 & 1];
                    v183 = (unsigned int)(v130-- + 1);
                  }
                  if (v180 >= 3) {
                    v184 = v130 & 1;
                    v185 = v184;
                    v186 = v130 - 3;
                    v187 = v184 ^ 1;
                    v188 = SdkData_c3c690[v184];
                    v189 = SdkData_bd11f8[v185];
                    v190 = SdkData_c3c692[v185];
                    v191 = SdkData_c3c692[v187];
                    v192 = SdkData_bd11f8[v187];
                    v193 = SdkData_c3c690[v187];
                    do {
                      v194 = (unsigned __int64)(unsigned int)(v186 + 3) >> 1;
                      v105[(unsigned __int64)(unsigned int)(v186 + 4) >> 1] =
                          v191 &
                              v105[(unsigned __int64)(unsigned int)(v186 + 4) >>
                                   1] |
                          ((unsigned __int8)(v188 & v105[v194]) >> v189
                                                                       << v192);
                      v195 = (unsigned __int64)(unsigned int)(v186 + 2) >> 1;
                      v105[v194] = v190 & v105[v194] |
                                   ((unsigned __int8)(v193 & v105[v195]) >>
                                    v192 << v189);
                      v196 = (unsigned __int64)(unsigned int)(v186 + 1) >> 1;
                      v105[v195] = v191 & v105[v195] |
                                   ((unsigned __int8)(v188 & v105[v196]) >>
                                    v189 << v192);
                      v105[v196] =
                          v190 & v105[v196] |
                          ((unsigned __int8)(v193 &
                                             v105[(unsigned __int64)(unsigned int)
                                                      v186 >>
                                                  1]) >>
                           v192 << v189);
                      v72 = v186 <= v154;
                      v186 -= 4;
                    } while (!v72);
                  }
                }
                v105[(unsigned __int64)(unsigned int)v154 >> 1] =
                    SdkData_c3c692[v154 & 1] &
                        v105[(unsigned __int64)(unsigned int)v154 >> 1] |
                    (15 << SdkData_bd11f8[v154 & 1]);
              }
              goto LABEL_176;
            }
          }
          if (v102 != 0 && v102 != (__int16)a2[15] - 1 && v136 >= 0xC &&
              v139 == 15) {
            v150 = (__int64)(v130 - 2) >> 1;
            if ((unsigned __int8)(v131[v150] & v134) >> v135 == 0 &&
                (unsigned __int8)(v131[v138] & v134) >> v135 == 15 &&
                (unsigned __int8)(v129[v150] & v134) >> v135 == 0) {
              v151 = (__int64)v147 >> 1;
              if ((unsigned __int8)(SdkData_c3c690[v147 & 1] & v129[v151]) >>
                          SdkData_bd11f8[v147 & 1] ==
                      0 &&
                  (unsigned __int8)(v129[v138] & v134) >> v135 == 15) {
                v105[v151] = SdkData_c3c692[v147 & 1] & v105[v151] |
                             (15 << SdkData_bd11f8[v147 & 1]);
              }
            }
          }
        LABEL_176:
          v130 = v132 - 1;
        } while ((int)v132 > 0);
      }
      ++v102;
      if (v128 >= (__int16)a2[15]) {
        return a2;
      }
    }
    v111 = v104 - 2;
    if (v107 < 5) {
      goto LABEL_173;
    }
  LABEL_166:
    if (v106 >= v111) {
      for (n = ~(v111 - v104) & 3; n != 0;
           v105[(__int64)v116 >> 1] =
               SdkData_c3c692[v116 & 1] & v105[(__int64)v116 >> 1] |
               ((_BYTE)v115 << SdkData_bd11f8[v116 & 1])) {
        --n;
        v115 = (unsigned __int8)(SdkData_c3c690[v106 & 1] & v105[v106 >> 1]) >>
               SdkData_bd11f8[v106 & 1];
        v116 = v106-- + 1;
      }
      if ((unsigned int)(v104 - v111 - 2) >= 3) {
        v117 = v106 & 1;
        v118 = !(v106 & 1);
        v119 = SdkData_c3c690[v117];
        v120 = SdkData_bd11f8[v117];
        v121 = SdkData_c3c692[v117];
        v122 = SdkData_c3c692[v118];
        v123 = SdkData_bd11f8[v118];
        v124 = SdkData_c3c690[v118];
        do {
          v125 = (__int64)v106 >> 1;
          v105[(__int64)(v106 + 1) >> 1] =
              v122 & v105[(__int64)(v106 + 1) >> 1] |
              ((unsigned __int8)(v119 & v105[v125]) >> v120 << v123);
          v126 = (__int64)(v106 - 1) >> 1;
          v105[v125] = v121 & v105[v125] |
                       ((unsigned __int8)(v124 & v105[v126]) >> v123 << v120);
          v127 = (__int64)(v106 - 2) >> 1;
          v105[v126] = v122 & v105[v126] |
                       ((unsigned __int8)(v119 & v105[v127]) >> v120 << v123);
          LODWORD(v126) = v106 - 3;
          v106 -= 4;
          v105[v127] =
              v121 & v105[v127] |
              ((unsigned __int8)(v124 & v105[(int)v126 >> 1]) >> v123 << v120);
        } while ((int)v126 > v111);
      }
    }
    v105[(__int64)v111 >> 1] =
        SdkData_c3c692[v111 & 1] & v105[(__int64)v111 >> 1] |
        (15 << SdkData_bd11f8[v111 & 1]);
    LOWORD(v104) = a2[14];
    goto LABEL_173;
  }
  return a2;
}

_WORD* pixelbold_graymap8(__int64 a1, _WORD* a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  int v5;
  _WORD* v6;
  __int64 v7;
  unsigned __int8* v8;
  char* v9;
  _WORD* v10;
  _WORD* v11;
  __int64 v12;
  _BYTE* v13;
  unsigned int v14;
  __int64 v16;
  __int64 v17;
  unsigned __int8* v18;
  int v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64 i;
  unsigned __int64 v24;
  unsigned __int8* v25;
  unsigned int v26;
  bool v27;
  unsigned int v28;
  bool v29;
  unsigned int v30;
  bool v31;
  unsigned int v32;
  bool v33;
  unsigned int v34;
  bool v35;
  unsigned int v36;
  bool v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  bool v41;
  unsigned int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  _WORD* v48;
  _BYTE* v49;
  __int64 v50;
  char* v51;
  int v52;
  char* v53;
  int v54;
  __int64 v55;
  __int64 v56;
  unsigned int v57;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  int v62;
  int v63;
  int v64;
  unsigned int v65;
  int v66;
  bool v67;
  int v68;
  __int64 v69;
  int v70;
  unsigned int v71;
  bool v72;
  unsigned __int8* v73;
  unsigned int v74;
  bool v75;
  unsigned int v76;
  bool v77;
  unsigned int v78;
  bool v79;
  unsigned int v80;
  bool v81;
  unsigned int v82;
  bool v83;
  unsigned int v84;
  bool v85;
  unsigned int v86;
  unsigned int v87;
  bool v88;
  bool v89;
  int v90;
  bool v91;
  int v92;
  int j;
  char* v94;
  int v95;
  char* v96;
  int v97;
  __int64 v98;
  _WORD* v99;
  _WORD* v100;
  _WORD* v101;
  __int64 v102;
  char* v103;
  __int64 v104;
  unsigned int v105;
  int v107;
  __int64 v109;
  unsigned __int8* v110;
  __int64 v111;
  int v112;
  unsigned int v113;
  unsigned int v114;
  bool v115;
  __int64 v116;
  __int64 v117;
  char* v118;
  __int64 v119;
  __int64 v120;
  char* v121;
  __int64 v122;
  __int64 v123;
  char* v124;
  int v125;
  char* v126;
  int v127;
  __int64 v128;
  char* v129;
  int v130;
  unsigned int v131;
  unsigned int v132;
  __int64 v135;
  __int64 v136;
  __int64 v138;
  int v139;
  unsigned int v140;
  int v141;
  unsigned int v142;
  bool v143;
  unsigned int v144;
  unsigned int v145;
  unsigned int v146;
  unsigned int v147;
  unsigned int v148;
  unsigned int v149;
  unsigned int v150;
  unsigned int v151;
  unsigned int v152;
  bool v153;
  unsigned int v154;
  bool v155;
  int v156;
  __int64 v157;
  __int64 k;
  char* v159;
  __int64 v160;
  char* v161;
  __int64 v162;

  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 40LL);
  v3 = *(__int16*)(v2 + 14);
  if (*(_WORD*)(v2 + 14) == 0 || (__int16)a2[15] < 1) {
    return a2;
  }
  v4 = (__int16)a2[16];
  LOWORD(v5) = a2[14];
  v6 = a2 + 20;
  v7 = 0;
  v8 = (unsigned __int8*)(a2 + 21);
  v9 = (char*)a2 + 47;
  v10 = a2;
  v11 = a2 + 20;
  do {
    v13 = (char*)v6 + v7 * v4;
    v14 = (unsigned __int8)v13[1];
    if (*v13 == 0 && v14 != 0) {
      v16 = (unsigned int)(__int16)v5;
      if ((int)v16 < 3) {
        LOBYTE(v20) = 1;
      LABEL_14:
        v21 = 1;
        v22 = 1;
        for (i = v20 & 7; i != 0; --i) {
        LABEL_52:
          v42 = *((unsigned __int8*)v10 + v21 + 40);
          if (v14 < v42) {
            v22 = v21;
          }
          if (v14 <= v42) {
            v14 = *((unsigned __int8*)v10 + v21 + 40);
          }
          ++v21;
        }
      }
      else {
        v17 = 2;
        v18 = v8;
        while (1) {
          v19 = *v18++;
          if (v19 == 0) {
            break;
          }
          if (v16 == ++v17) {
            v20 = (unsigned int)v16 - 1LL;
            if ((unsigned int)(v16 - 2) < 7) {
              goto LABEL_14;
            }
            goto LABEL_17;
          }
        }
        if ((unsigned int)v17 <= 2) {
          v45 = 2;
        }
        else {
          v45 = (unsigned int)v17;
        }
        v20 = v45 - 1;
        if ((unsigned int)(v45 - 2) < 7) {
          goto LABEL_14;
        }
      LABEL_17:
        v22 = 1;
        v24 = 0;
        do {
          v25 = (unsigned __int8*)&v10[v24 / 2];
          v26 = HIBYTE(v10[v24 / 2 + 20]);
          v27 = v14 >= v26;
          if (v14 <= v26) {
            v14 = HIBYTE(v10[v24 / 2 + 20]);
          }
          v28 = v25[42];
          if (!v27) {
            v22 = v24 + 1;
          }
          v29 = v14 >= v28;
          if (v14 <= v28) {
            v14 = v25[42];
          }
          v30 = v25[43];
          if (!v29) {
            v22 = v24 + 2;
          }
          v31 = v14 >= v30;
          if (v14 <= v30) {
            v14 = v25[43];
          }
          v32 = v25[44];
          if (!v31) {
            v22 = v24 + 3;
          }
          v33 = v14 >= v32;
          if (v14 <= v32) {
            v14 = v25[44];
          }
          v34 = v25[45];
          if (!v33) {
            v22 = v24 + 4;
          }
          v35 = v14 >= v34;
          if (v14 <= v34) {
            v14 = v25[45];
          }
          v36 = v25[46];
          if (!v35) {
            v22 = v24 + 5;
          }
          v37 = v14 >= v36;
          if (v14 <= v36) {
            v14 = v25[46];
          }
          v38 = v25[47];
          v39 = v25[48];
          if (!v37) {
            v22 = v24 + 6;
          }
          v40 = v24 + 7;
          v24 += 8LL;
          v41 = v14 >= v38;
          if (v14 <= v38) {
            v14 = v38;
          }
          if (!v41) {
            v22 = v40;
          }
          if (v14 < v39) {
            v22 = v24;
          }
          if (v14 <= v39) {
            v14 = v39;
          }
        } while (v24 != (v20 & 0xFFFFFFFFFFFFFFF8LL));
        v21 = v24 + 1;
        i = v20 & 7;
        if (i != 0) {
          goto LABEL_52;
        }
      }
      if (v14 < 0x11) {
        goto LABEL_73;
      }
      if (v22 == 0) {
        goto LABEL_72;
      }
      if (v22 >= 8) {
        v46 = (v22 + 1 - 1LL) & 0xFFFFFFFFFFFFFFF8LL;
        v47 = 20;
        do {
          v48 = &v10[v47];
          v46 -= 8LL;
          v47 += 4;
          *(_DWORD*)v48 = *(_DWORD*)((char*)v48 + 1);
          v48[2] = *(_WORD*)((char*)v48 + 5);
          v48[3] = *(_WORD*)((char*)v48 + 7);
        } while (v46 != 0);
        v43 = v47 * 2 - 39;
        v44 = v22 & 7;
        if ((v22 & 7) == 0) {
          goto LABEL_72;
        }
      }
      else {
        v43 = 1;
        v44 = v22 & 7;
        if ((v22 & 7) == 0) {
        LABEL_72:
          v13[v22] = -1;
          LOWORD(v5) = a2[14];
          goto LABEL_73;
        }
      }
      v49 = (char*)v11 + v43;
      do {
        --v44;
        *(v49 - 1) = *v49;
        ++v49;
      } while (v44 != 0);
      goto LABEL_72;
    }
  LABEL_73:
    v50 = v7 + 1;
    if ((__int16)v5 >= 3) {
      v51 = (char*)v6 + v50 * v4;
      v5 = (unsigned __int16)v5;
      v52 = 2;
      v53 = (char*)v6 + (v7 - 1) * v4;
      do {
        v55 = v52;
        v56 = v52 - 1LL;
        v57 = (unsigned __int8)v13[v52];
        if (v13[v56] != 0 || v57 == 0) {
          v54 = v52;
          goto LABEL_76;
        }
        v59 = v52 - 2LL;
        v60 = v5;
        v61 = v52 + 41LL;
        if (v5 <= v52 + 1) {
          v62 = v52 + 1;
        }
        else {
          v62 = v5;
        }
        v54 = v52;
        v63 = v62 - 1;
        do {
          if (v61 - 40 >= v60) {
            v54 = v62;
            if (v13[v52 - 2] != 0) {
              goto LABEL_91;
            }
          LABEL_88:
            v65 = v63 - v52;
            if (v63 < v52) {
              v66 = v52;
              goto LABEL_145;
            }
            v68 = v63 + 1;
            v69 = v52;
            v70 = ((_BYTE)v63 + 1 - (_BYTE)v52) & 7;
            if (v70 != 0) {
              v66 = v52;
              do {
                v71 = *((unsigned __int8*)v11 + v69);
                v72 = v57 >= v71;
                if (v57 <= v71) {
                  v57 = *((unsigned __int8*)v11 + v69);
                }
                if (!v72) {
                  v66 = v69;
                }
                ++v69;
                --v70;
              } while (v70 != 0);
              if (v65 < 7) {
                goto LABEL_145;
              }
            }
            else {
              v66 = v52;
              if (v65 < 7) {
              LABEL_145:
                if (v57 >= 0x11) {
                  v91 = __OFSUB__(v66, v52);
                  v92 = v66 - v52;
                  if (v92 < 0 == v91) {
                    for (j = ((_BYTE)v92 + 1) & 7; j != 0; v94[39] = v94[40]) {
                      v94 = (char*)v10 + v55++;
                      --j;
                    }
                    if ((unsigned int)v92 >= 7) {
                      v95 = v66 - v55;
                      v96 = &v9[v55];
                      v97 = v95 + 1;
                      do {
                        v97 -= 8;
                        *((_DWORD*)v96 - 2) = *(_DWORD*)(v96 - 7);
                        *((_WORD*)v96 - 2) = *(_WORD*)(v96 - 3);
                        *((_WORD*)v96 - 1) = *(_WORD*)(v96 - 1);
                        v96 += 8;
                      } while (v97 != 0);
                    }
                  }
                  v13[v66] = -1;
                }
                goto LABEL_76;
              }
            }
            do {
              v73 = (unsigned __int8*)v11 + v69;
              v74 = *((unsigned __int8*)v11 + v69);
              v75 = v57 >= v74;
              if (v57 <= v74) {
                v57 = *((unsigned __int8*)v11 + v69);
              }
              v76 = v73[1];
              if (!v75) {
                v66 = v69;
              }
              v77 = v57 >= v76;
              if (v57 <= v76) {
                v57 = v73[1];
              }
              v78 = v73[2];
              if (!v77) {
                v66 = v69 + 1;
              }
              v79 = v57 >= v78;
              if (v57 <= v78) {
                v57 = v73[2];
              }
              if (!v79) {
                v66 = v69 + 2;
              }
              v80 = v73[3];
              v81 = v57 >= v80;
              if (v57 <= v80) {
                v57 = v73[3];
              }
              if (!v81) {
                v66 = v69 + 3;
              }
              v82 = v73[4];
              v83 = v57 >= v82;
              if (v57 <= v82) {
                v57 = v73[4];
              }
              if (!v83) {
                v66 = v69 + 4;
              }
              v84 = v73[5];
              v85 = v57 >= v84;
              if (v57 <= v84) {
                v57 = v73[5];
              }
              if (!v85) {
                v66 = v69 + 5;
              }
              v86 = v73[6];
              v87 = v73[7];
              v88 = v57 >= v86;
              if (v57 <= v86) {
                v57 = v86;
              }
              if (!v88) {
                v66 = v69 + 6;
              }
              v89 = v57 >= v87;
              if (v57 <= v87) {
                v57 = v87;
              }
              v90 = v69 + 7;
              v69 += 8;
              if (!v89) {
                v66 = v90;
              }
            } while (v68 != (_DWORD)v69);
            goto LABEL_145;
          }
          v64 = *((unsigned __int8*)v10 + v61);
          ++v54;
          ++v61;
        } while (v64 != 0);
        v63 = v54 - 1;
        if (v13[v52 - 2] == 0) {
          goto LABEL_88;
        }
      LABEL_91:
        if (v7 != 0) {
          v67 = v7 != (__int16)a2[15] - 1 &&
                (unsigned __int8)v13[v52 - 2] >= 0xCu;
          if (v67 && v57 == 255 && v53[v59] == 0 &&
              (unsigned __int8)v53[v52] == 255 && v51[v59] == 0 &&
              v51[v56] == 0 && (unsigned __int8)v51[v52] == 255) {
            v13[v56] = -1;
          }
        }
      LABEL_76:
        v52 = v54 + 1;
        v5 = (__int16)a2[14];
      } while (v52 < v5);
    }
    v12 = (__int16)a2[15];
    v8 += v4;
    v10 = (_WORD*)((char*)v10 + v4);
    v11 = (_WORD*)((char*)v11 + v4);
    v9 += v4;
    ++v7;
  } while (v50 < v12);
  if (v3 >= 2 && (int)v12 >= 1) {
    v98 = 0;
    v99 = a2 + 20;
    v100 = a2 + 19;
    v101 = a2;
    do {
      v102 = (__int16)a2[14];
      v103 = (char*)v99 + v98 * v4;
      v104 = v102 - 2;
      v105 = (unsigned __int8)v103[v102 - 2];
      if (v103[v102 - 1] == 0 && v105 != 0) {
        v107 = v102 - 3;
        if ((int)v102 < 3) {
          goto LABEL_169;
        }
        while (v103[v107] != 0) {
          if (v107-- <= 0) {
            v107 = -1;
            break;
          }
        }
        if ((int)v104 <= v107) {
          v112 = v102 - 2;
          if (v105 >= 0x11) {
            goto LABEL_176;
          }
        }
        else {
        LABEL_169:
          v109 = v107;
          v110 = (unsigned __int8*)v100 + v102;
          v111 = v102 - 2;
          v112 = v102 - 2;
          do {
            v114 = *v110--;
            v113 = v114;
            v115 = v105 >= v114;
            if (v105 <= v114) {
              v105 = v113;
            }
            if (!v115) {
              v112 = v111;
            }
            --v111;
          } while (v111 > v109);
          if (v105 >= 0x11) {
          LABEL_176:
            if ((int)v104 < v112) {
              v116 = v112;
            LABEL_187:
              v103[v116] = -1;
              LOWORD(v102) = a2[14];
              goto LABEL_188;
            }
            v117 = ~((_BYTE)v112 - (_BYTE)v102) & 7;
            if ((~((_BYTE)v112 - (_BYTE)v102) & 7) != 0) {
              do {
                v118 = (char*)v101 + v102--;
                --v117;
                v118[39] = v118[38];
              } while (v117 != 0);
              v119 = v102 - 2;
              v116 = v112;
              if ((unsigned __int64)(v104 - v112) < 7) {
                goto LABEL_187;
              }
            }
            else {
              v119 = v102 - 2;
              v116 = v112;
              if ((unsigned __int64)(v104 - v112) < 7) {
                goto LABEL_187;
              }
            }
            v120 = v119 + 33;
            do {
              v121 = (char*)v101 + v120;
              *(_DWORD*)(v121 + 5) = *(_DWORD*)((char*)v101 + v120 + 4);
              *(_WORD*)(v121 + 3) = *(_WORD*)((char*)v101 + v120 + 2);
              *(_WORD*)(v121 + 1) = *(_WORD*)((char*)v101 + v120);
              v122 = v120 - 40;
              v120 -= 8;
            } while (v122 > v116);
            goto LABEL_187;
          }
        }
      }
    LABEL_188:
      v123 = v98 + 1;
      if ((__int16)v102 >= 3) {
        v124 = (char*)v99 + v123 * v4;
        v125 = (unsigned __int16)v102 - 3;
        v126 = (char*)v99 + (v98 - 1) * v4;
        while (1) {
          v128 = (unsigned int)v125;
          v129 = &v103[v125];
          v130 = (unsigned __int8)v129[1];
          v131 = (unsigned __int8)v129[2];
          v132 = (unsigned __int8)*v129;
          if (v130 != 0 || v132 == 0) {
            if (v98 != 0 && v98 != (__int16)a2[15] - 1 && v131 == 255 &&
                v130 == 0 && v132 == 255) {
              v135 = v125 - 2LL;
              if (v126[v135] == 0 && (unsigned __int8)v126[v125] == 255 &&
                  v124[v135] == 0) {
                v136 = v125 - 1LL;
                if (v124[v136] == 0) {
                  v127 = v125;
                  if ((unsigned __int8)v124[v125] != 255) {
                    goto LABEL_191;
                  }
                  goto LABEL_285;
                }
              }
            }
            v127 = v125;
            goto LABEL_191;
          }
          v136 = v125 - 1LL;
          if (v125 < 1) {
            v127 = v125 - 1;
            if (v131 != 0) {
              goto LABEL_217;
            }
          }
          else {
            v127 = v125;
            while (v103[--v127] != 0) {
              if (v127 <= 0) {
                v127 = -1;
                break;
              }
            }
            if (v131 != 0) {
            LABEL_217:
              if (v98 == 0) {
                goto LABEL_191;
              }
              if (v98 == (__int16)a2[15] - 1 || v131 < 0xC) {
                goto LABEL_191;
              }
              if (v132 != 255) {
                goto LABEL_191;
              }
              v138 = v125 - 2LL;
              if (v126[v138] != 0 || (unsigned __int8)v126[v128] != 255 ||
                  v124[v138] != 0 || v124[v136] != 0 ||
                  (unsigned __int8)v124[v128] != 255) {
                goto LABEL_191;
              }
              goto LABEL_285;
            }
          }
          if (v125 <= v127) {
            v141 = v125;
            goto LABEL_277;
          }
          v139 = ((_BYTE)v125 - (_BYTE)v127) & 7;
          v140 = v125;
          if ((((_BYTE)v125 - (_BYTE)v127) & 7) == 0) {
            break;
          }
          v141 = v125;
          do {
            v142 = (unsigned __int8)v103[v140];
            v143 = v132 >= v142;
            if (v132 <= v142) {
              v132 = (unsigned __int8)v103[v140];
            }
            if (!v143) {
              v141 = v140;
            }
            --v140;
            --v139;
          } while (v139 != 0);
          if ((unsigned int)(v127 - v125) <= 0xFFFFFFF8) {
            goto LABEL_243;
          }
        LABEL_277:
          if (v132 >= 0x11) {
            if (v125 >= v141) {
              v157 = ((_BYTE)v125 - (_BYTE)v141 + 1) & 7;
              for (k = v125; v157 != 0; v159[41] = v159[40]) {
                v159 = (char*)v101 + k--;
                --v157;
              }
              if ((unsigned __int64)(v125 - (__int64)v141) >= 7) {
                v160 = k + 33;
                do {
                  v161 = (char*)v101 + v160;
                  *(_DWORD*)(v161 + 5) = *(_DWORD*)((char*)v101 + v160 + 4);
                  *(_WORD*)(v161 + 3) = *(_WORD*)((char*)v101 + v160 + 2);
                  *(_WORD*)(v161 + 1) = *(_WORD*)((char*)v101 + v160);
                  v162 = v160 - 40;
                  v160 -= 8;
                } while (v162 > v141);
              }
            }
            v136 = (unsigned int)v141;
          LABEL_285:
            v103[v136] = -1;
          }
        LABEL_191:
          v125 = v127 - 1;
          if (v127 <= 0) {
            goto LABEL_158;
          }
        }
        v141 = v125;
        if ((unsigned int)(v127 - v125) > 0xFFFFFFF8) {
          goto LABEL_277;
        }
      LABEL_243:
        v144 = v140 - 7;
        do {
          v145 = (unsigned __int8)v103[v144 + 7];
          if (v132 < v145) {
            v141 = v144 + 7;
          }
          if (v132 <= v145) {
            v132 = (unsigned __int8)v103[v144 + 7];
          }
          v146 = (unsigned __int8)v103[v144 + 6];
          if (v132 < v146) {
            v141 = v144 + 6;
          }
          if (v132 <= v146) {
            v132 = (unsigned __int8)v103[v144 + 6];
          }
          v147 = (unsigned __int8)v103[v144 + 5];
          if (v132 < v147) {
            v141 = v144 + 5;
          }
          if (v132 <= v147) {
            v132 = (unsigned __int8)v103[v144 + 5];
          }
          v148 = (unsigned __int8)v103[v144 + 4];
          if (v132 < v148) {
            v141 = v144 + 4;
          }
          if (v132 <= v148) {
            v132 = (unsigned __int8)v103[v144 + 4];
          }
          v149 = (unsigned __int8)v103[v144 + 3];
          if (v132 < v149) {
            v141 = v144 + 3;
          }
          v150 = v144 + 2;
          if (v132 <= v149) {
            v132 = (unsigned __int8)v103[v144 + 3];
          }
          v151 = (unsigned __int8)v103[v150];
          if (v132 < v151) {
            v141 = v144 + 2;
          }
          if (v132 <= v151) {
            v132 = (unsigned __int8)v103[v150];
          }
          v152 = (unsigned __int8)v103[v144 + 1];
          v153 = v132 >= v152;
          if (v132 <= v152) {
            v132 = (unsigned __int8)v103[v144 + 1];
          }
          v154 = (unsigned __int8)v103[v144];
          if (!v153) {
            v141 = v144 + 1;
          }
          v155 = v132 >= v154;
          if (v132 <= v154) {
            v132 = (unsigned __int8)v103[v144];
          }
          if (!v155) {
            v141 = v144;
          }
          v156 = v144 - 1;
          v144 -= 8;
        } while (v156 > v127);
        goto LABEL_277;
      }
    LABEL_158:
      v100 = (_WORD*)((char*)v100 + v4);
      v101 = (_WORD*)((char*)v101 + v4);
      ++v98;
    } while (v123 < (__int16)a2[15]);
  }
  return a2;
}

__int64 pixelbold_embedded_graymap(void* a1, __int64 a2)
{
  int v3;
  __int16 v5;
  __int16 v6;
  int v7;
  unsigned int v8;
  char v9;
  unsigned __int16 v10;
  char v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int16 v15;
  __int64 v16;
  __int16 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  char v26;
  _BYTE* v27;
  unsigned __int8* v28;
  unsigned __int64 v29;
  unsigned __int8* v30;
  _BYTE* v31;
  unsigned __int64 v32;
  char v33;
  unsigned int v34;
  _BYTE* v35;
  char* v36;
  __int64 v37;
  char v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;
  int v42;

  if (*(_WORD*)(*(_QWORD*)(*((_QWORD*)a1 + 7) + 40LL) + 14LL) == 0) {
    return a2;
  }
  v3 = *(__int16*)(a2 + 30);
  if (*(_WORD*)(*(_QWORD*)(*((_QWORD*)a1 + 7) + 40LL) + 14LL) == 1) {
    v5 = 1;
  }
  else {
    v5 = 2;
  }
  v6 = *(_WORD*)(a2 + 28) + v5;
  v7 = *(unsigned __int16*)(a2 + 36);
  v8 = (unsigned int)(v6 + 1) >> 1;
  if (v7 == 4) {
    v9 = 4;
  }
  else {
    LOWORD(v8) = 0;
    v9 = 0;
  }
  if (v7 == 8) {
    LOWORD(v8) = v6;
    v9 = 8;
  }
  if (v7 == 2) {
    v10 = (unsigned int)(v6 + 3) >> 2;
  }
  else {
    v10 = v8;
  }
  if (v7 == 2) {
    v11 = 2;
  }
  else {
    v11 = v9;
  }
  v12 = (__int16)v10 * v3 + 40;
  v13 = FSS_calloc_plt(a1, v12);
  v14 = v13;
  if (v13 != 0) {
    v15 = v3;
    *(_DWORD*)(v13 + 8) = v12;
    *(_WORD*)(v13 + 28) = v6;
    v16 = v13 + 40;
    *(_WORD*)(v13 + 32) = v10;
    *(_WORD*)(v13 + 30) = v15;
    *(_WORD*)(v13 + 16) = *(_WORD*)(a2 + 16);
    *(_WORD*)(v13 + 18) = *(_WORD*)(a2 + 18);
    *(_DWORD*)(v13 + 20) = *(_DWORD*)(a2 + 20);
    *(_DWORD*)(v13 + 24) = *(_DWORD*)(a2 + 24);
    *(_WORD*)(v13 + 14) = *(_WORD*)(a2 + 14);
    *(_WORD*)(v13 + 12) = *(_WORD*)(a2 + 12) - 1;
    *(_WORD*)(v13 + 36) = *(_WORD*)(a2 + 36);
    if (*(__int16*)(a2 + 30) >= 1) {
      v17 = *(_WORD*)(a2 + 32);
      v18 = a2 + 40;
      LOWORD(v19) = 0;
      v20 = v13 + 40;
      do {
        memcpy_plt(v20, v18, v17);
        v17 = *(_WORD*)(a2 + 32);
        v18 += v17;
        v20 += *(__int16*)(v14 + 32);
        v19 = (__int16)(v19 + 1);
      } while (v19 < *(__int16*)(a2 + 30));
    }
    v21 = copy_graymap_plt(a1, v14);
    if (v21 != 0) {
      v22 = (char*)v21;
      if (*(__int16*)(v14 + 30) >= 1) {
        if ((__int16)v10 > 1) {
          v23 = 0;
          v24 = v14 + 40;
          v25 = v22 + 40;
          v26 = 8 - v11;
          v27 = (_BYTE*)(v14 + 41);
          v28 = (unsigned __int8*)(v22 + 48);
          while (1) {
            *(_BYTE*)(v16 + v23 * v10) =
                (unsigned __int8)v22[v23 * v10 + 40] >> v11;
            if ((unsigned __int16)(v10 - 2) >= 7u) {
              break;
            }
            v29 = 1;
            if ((((_BYTE)v10 - 1) & 7) != 0) {
              goto LABEL_31;
            }
          LABEL_24:
            ++v23;
            v27 += v10;
            v28 += v10;
            v24 += v10;
            v25 += v10;
            if (v23 >= *(__int16*)(v14 + 30)) {
              goto LABEL_39;
            }
          }
          v30 = v28;
          v31 = v27;
          v32 = (v10 - 1LL) & 0xFFFFFFFFFFFFFFF8LL;
          do {
            v32 -= 8LL;
            *v31 = (*(v30 - 7) >> v11) | (*(v30 - 8) << v26);
            v31[1] = (*(v30 - 6) >> v11) | (*(v30 - 7) << v26);
            v31[2] = (*(v30 - 5) >> v11) | (*(v30 - 6) << v26);
            v31[3] = (*(v30 - 4) >> v11) | (*(v30 - 5) << v26);
            v31[4] = (*(v30 - 3) >> v11) | (*(v30 - 4) << v26);
            v31[5] = (*(v30 - 2) >> v11) | (*(v30 - 3) << v26);
            v31[6] = (*(v30 - 1) >> v11) | (*(v30 - 2) << v26);
            v33 = *(v30 - 1);
            v34 = *v30;
            v30 += 8;
            v31[7] = (v34 >> v11) | (v33 << v26);
            v31 += 8;
          } while (v32 != 0);
          v29 = (v10 - 1LL) & 0xFFFFFFFFFFFFFFF8LL | 1;
          if ((((_BYTE)v10 - 1) & 7) == 0) {
            goto LABEL_24;
          }
        LABEL_31:
          v35 = (_BYTE*)(v24 + v29);
          v36 = &v25[v29];
          v37 = ((_BYTE)v10 - 1) & 7;
          do {
            v38 = *(v36 - 1);
            v39 = (unsigned __int8)*v36++;
            --v37;
            *v35++ = (v39 >> v11) | (v38 << v26);
          } while (v37 != 0);
          goto LABEL_24;
        }
        v40 = 40;
        v41 = 0;
        do {
          ++v41;
          *(_BYTE*)(v14 + v40) = *(unsigned __int8*)(v21 + v40) >> v11;
          v40 += (__int16)v10;
        } while (v41 < *(__int16*)(v14 + 30));
      }
    LABEL_39:
      FSS_free_char_plt(a1, (void*)a2);
      FSS_free_char_plt(a1, v22);
      v42 = *(unsigned __int16*)(v14 + 36);
      switch (v42) {
      case 2:
        pixelbold_graymap2_plt(a1, v14);
        break;
      case 8:
        pixelbold_graymap8_plt(a1, v14);
        break;
      case 4:
        pixelbold_graymap4_plt(a1, v14);
        break;
      default:
        break;
      }
    }
    else {
      FSS_free_plt(a1, v14);
      return 0;
    }
  }
  else {
    FSS_free_char_plt(a1, (void*)a2);
  }
  return v14;
}

__int64 nn_fontll_itype_42ce60(__int64 result)
{
  *(_QWORD*)(result + 24) = 0x4000000040000000LL;
  *(_QWORD*)(result + 112) = nn_fontll_itype_4335a0;
  *(_QWORD*)(result + 96) = nn_fontll_itype_433570;
  *(_QWORD*)(result + 104) = nn_fontll_itype_4335a0;
  *(_WORD*)(result + 92) = 0x4000;
  return result;
}

__int64 nn_fontll_itype_42ce90(__int64 result)
{
  *(_QWORD*)(result + 24) = 0x400000004000LL;
  *(_QWORD*)(result + 112) = nn_fontll_itype_432de0;
  *(_QWORD*)(result + 96) = nn_fontll_itype_432db0;
  *(_QWORD*)(result + 104) = nn_fontll_itype_432de0;
  *(_WORD*)(result + 92) = 0x4000;
  return result;
}

__int64 nn_fontll_itype_42cec0(__int64 result)
{
  int v1;
  __int64 (*v2)();
  int v3;
  bool v4;
  __int64 v5;
  __int16 v6;
  __int16 v7;
  __int16 v8;

  v1 = *(unsigned __int8*)(result + 90);
  v2 = nn_fontll_itype_432de0;
  v3 = v1 << 31 >> 31;
  v4 = (v1 & 1) == 0;
  v5 = 28;
  if (v4) {
    v5 = 30;
  }
  v6 = v3 & 0x4000;
  if (v4) {
    v2 = nn_fontll_itype_4335a0;
  }
  v7 = *(_WORD*)(result + v5);
  if (v4) {
    v8 = 0x4000;
  }
  else {
    v8 = 0;
  }
  *(_WORD*)(result + 24) = v6;
  *(_QWORD*)(result + 112) = v2;
  *(_WORD*)(result + 26) = v8;
  if ((unsigned __int16)(v7 + 1023) < 0x7FFu) {
    v7 = v7 & 0x8000 | 0x4000;
  }
  *(_WORD*)(result + 92) = v7;
  *(_QWORD*)(result + 96) = nn_fontll_itype_4335b0;
  *(_QWORD*)(result + 104) = v2;
  return result;
}

__int64 nn_fontll_itype_42cf40(__int64 result)
{
  int v1;
  int v2;
  bool v3;
  __int64 v4;
  __int16 v5;
  __int16 v6;
  __int16 v7;

  v1 = *(unsigned __int8*)(result + 90);
  v2 = v1 << 31 >> 31;
  v3 = (v1 & 1) == 0;
  v4 = 24;
  if (v3) {
    v4 = 26;
  }
  v5 = v2 & 0x4000;
  v6 = *(_WORD*)(result + v4);
  if (v3) {
    v7 = 0x4000;
  }
  else {
    v7 = 0;
  }
  *(_WORD*)(result + 28) = v5;
  *(_WORD*)(result + 30) = v7;
  if ((unsigned __int16)(v6 + 1023) < 0x7FFu) {
    v6 = v6 & 0x8000 | 0x4000;
  }
  *(_WORD*)(result + 92) = v6;
  *(_QWORD*)(result + 96) = nn_fontll_itype_4335b0;
  return result;
}

__int64 nn_fontll_itype_42cfa0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 result;
  __int16 v5;
  int v6;
  int v7;
  unsigned int v8;
  __int16 v9;

  v1 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 40) = v1 - 4;
  v3 = *(int*)(v1 - 4);
  *(_QWORD*)(a1 + 40) = v1 - 8;
  result = nn_fontll_itype_4336b0(
      (unsigned int)(*(_DWORD*)(**(_QWORD**)(a1 + 8) + 4LL * *(int*)(v1 - 8)) -
                     *(_DWORD*)(**(_QWORD**)(a1 + 16) + 4 * v3)),
      (unsigned int)(*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) +
                                4LL * *(int*)(v1 - 8)) -
                     *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 8LL) +
                                4 * v3)),
      a1 + 24);
  v5 = *(_WORD*)(a1 + 24);
  v6 = *(unsigned __int16*)(a1 + 26);
  if ((*(_BYTE*)(a1 + 90) & 1) != 0) {
    v7 = -v6;
    *(_WORD*)(a1 + 26) = v5;
    LOWORD(v6) = v5;
    *(_WORD*)(a1 + 24) = v7;
    v5 = v7;
  }
  v8 = ((unsigned int)(4 * (__int16)v6 * *(__int16*)(a1 + 30) + 0x8000) >> 16) +
       ((unsigned int)(4 * v5 * *(__int16*)(a1 + 28) + 0x8000) >> 16);
  if ((v8 & 0x8000u) != 0) {
    v9 = -16384;
  }
  else {
    v9 = 0x4000;
  }
  if ((unsigned int)((__int16)v8 + 1023) < 0x7FF) {
    LOWORD(v8) = v9;
  }
  *(_WORD*)(a1 + 92) = v8;
  *(_QWORD*)(a1 + 112) = nn_fontll_itype_4337a0;
  *(_QWORD*)(a1 + 96) = nn_fontll_itype_4335b0;
  *(_QWORD*)(a1 + 104) = nn_fontll_itype_4337a0;
  return result;
}

__int64 nn_fontll_itype_42d0a0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 result;
  __int16 v5;
  int v6;
  int v7;
  unsigned int v8;
  __int16 v9;

  v1 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 40) = v1 - 4;
  v3 = *(int*)(v1 - 4);
  *(_QWORD*)(a1 + 40) = v1 - 8;
  result = nn_fontll_itype_4336b0(
      (unsigned int)(*(_DWORD*)(**(_QWORD**)(a1 + 8) + 4LL * *(int*)(v1 - 8)) -
                     *(_DWORD*)(**(_QWORD**)(a1 + 16) + 4 * v3)),
      (unsigned int)(*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) +
                                4LL * *(int*)(v1 - 8)) -
                     *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 8LL) +
                                4 * v3)),
      a1 + 28);
  v5 = *(_WORD*)(a1 + 28);
  v6 = *(unsigned __int16*)(a1 + 30);
  if ((*(_BYTE*)(a1 + 90) & 1) != 0) {
    v7 = -v6;
    *(_WORD*)(a1 + 30) = v5;
    LOWORD(v6) = v5;
    *(_WORD*)(a1 + 28) = v7;
    v5 = v7;
  }
  v8 = ((unsigned int)(4 * *(__int16*)(a1 + 26) * (__int16)v6 + 0x8000) >> 16) +
       ((unsigned int)(4 * *(__int16*)(a1 + 24) * v5 + 0x8000) >> 16);
  if ((v8 & 0x8000u) != 0) {
    v9 = -16384;
  }
  else {
    v9 = 0x4000;
  }
  if ((unsigned int)((__int16)v8 + 1023) < 0x7FF) {
    LOWORD(v8) = v9;
  }
  *(_WORD*)(a1 + 92) = v8;
  *(_QWORD*)(a1 + 96) = nn_fontll_itype_4335b0;
  return result;
}

__int64 nn_fontll_itype_42d190(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  unsigned int v4;
  __int16 v5;

  v1 = *(_QWORD*)(result + 40);
  *(_QWORD*)(result + 40) = v1 - 4;
  v2 = *(_DWORD*)(v1 - 4);
  *(_QWORD*)(result + 40) = v1 - 8;
  v3 = *(__int16*)(result + 28);
  *(_WORD*)(result + 26) = v2;
  LODWORD(v1) = *(_DWORD*)(v1 - 8);
  *(_WORD*)(result + 24) = v1;
  v4 = ((unsigned int)(4 * (__int16)v2 * *(__int16*)(result + 30) + 0x8000) >>
        16) +
       ((unsigned int)(4 * (__int16)v1 * v3 + 0x8000) >> 16);
  if ((v4 & 0x8000u) != 0) {
    v5 = -16384;
  }
  else {
    v5 = 0x4000;
  }
  if ((unsigned int)((__int16)v4 + 1023) < 0x7FF) {
    LOWORD(v4) = v5;
  }
  *(_WORD*)(result + 92) = v4;
  *(_QWORD*)(result + 112) = nn_fontll_itype_4337a0;
  *(_QWORD*)(result + 96) = nn_fontll_itype_4335b0;
  *(_QWORD*)(result + 104) = nn_fontll_itype_4337a0;
  return result;
}

__int64 nn_fontll_itype_42d220(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  unsigned int v4;
  __int16 v5;

  v1 = *(_QWORD*)(result + 40);
  *(_QWORD*)(result + 40) = v1 - 4;
  v2 = *(_DWORD*)(v1 - 4);
  *(_QWORD*)(result + 40) = v1 - 8;
  v3 = *(__int16*)(result + 24);
  *(_WORD*)(result + 30) = v2;
  LODWORD(v1) = *(_DWORD*)(v1 - 8);
  *(_WORD*)(result + 28) = v1;
  v4 = ((unsigned int)(4 * (__int16)v2 * *(__int16*)(result + 26) + 0x8000) >>
        16) +
       ((unsigned int)(4 * (__int16)v1 * v3 + 0x8000) >> 16);
  if ((v4 & 0x8000u) != 0) {
    v5 = -16384;
  }
  else {
    v5 = 0x4000;
  }
  if ((unsigned int)((__int16)v4 + 1023) < 0x7FF) {
    LOWORD(v4) = v5;
  }
  *(_WORD*)(result + 92) = v4;
  *(_QWORD*)(result + 96) = nn_fontll_itype_4335b0;
  return result;
}

__int64 nn_fontll_itype_42d2a0(__int64 result)
{
  _DWORD* v1;
  int v2;
  _DWORD* v3;
  int v4;

  v1 = *(_DWORD**)(result + 40);
  v2 = *(__int16*)(result + 24);
  *(_QWORD*)(result + 40) = v1 + 1;
  *v1 = v2;
  v3 = *(_DWORD**)(result + 40);
  v4 = *(__int16*)(result + 26);
  *(_QWORD*)(result + 40) = v3 + 1;
  *v3 = v4;
  return result;
}

__int64 nn_fontll_itype_42d2d0(__int64 result)
{
  _DWORD* v1;
  int v2;
  _DWORD* v3;
  int v4;

  v1 = *(_DWORD**)(result + 40);
  v2 = *(__int16*)(result + 28);
  *(_QWORD*)(result + 40) = v1 + 1;
  *v1 = v2;
  v3 = *(_DWORD**)(result + 40);
  v4 = *(__int16*)(result + 30);
  *(_QWORD*)(result + 40) = v3 + 1;
  *v3 = v4;
  return result;
}

__int64 nn_fontll_itype_42d300(__int64 result)
{
  *(_DWORD*)(result + 28) = *(_DWORD*)(result + 24);
  *(_WORD*)(result + 92) = 0x4000;
  *(_QWORD*)(result + 96) = nn_fontll_itype_4335b0;
  return result;
}

__int64 nn_fontll_itype_42d320(__int64 result)
{
  int* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v44;
  __int64 v45;
  __int64 v46;

  v1 = *(int**)(result + 40);
  v2 = *(__int64**)(result + 8);
  v4 = *(v1 - 5);
  v1 -= 5;
  v3 = v4;
  v5 = **(_QWORD**)result;
  v6 = *(_QWORD*)(*(_QWORD*)result + 8LL);
  v8 = v1[3];
  v7 = v1[4];
  v9 = *(_DWORD*)(v5 + 4 * v7);
  v10 = *(_DWORD*)(v5 + 4 * v8);
  v11 = *(_DWORD*)(v6 + 4 * v8);
  v13 = v1[1];
  v12 = v1[2];
  v14 = *(_DWORD*)(v6 + 4 * v7);
  v15 = *v2;
  v16 = v2[1];
  v17 = v9 - v10;
  v18 = v14 - v11;
  v19 = *(_DWORD*)(*v2 + 4 * v12);
  v20 = *(_DWORD*)(v15 + 4 * v13);
  v21 = *(_DWORD*)(v16 + 4 * v12);
  v22 = *(_DWORD*)(v16 + 4 * v13);
  *(_QWORD*)(result + 40) = v1;
  v23 = v19 - v20;
  v24 = v21 - v22;
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(result + 16) + 72LL) + v4) |= 3u;
  v25 = *(__int64**)(result + 16);
  v27 = *v25;
  v26 = v25[1];
  if (v14 == v11) {
    if (v19 == v20) {
      *(_DWORD*)(v27 + 4 * v3) = v19;
      goto LABEL_32;
    }
    v28 = v22 - v14;
    v29 = (unsigned int)(v22 - v21);
    if (v24 == 0) {
    LABEL_18:
      *(_DWORD*)(v27 + 4 * v3) =
          (v10 + (v17 >> 1) + v20 + ((int)v23 >> 1)) >> 1;
      v14 = (v11 + (v18 >> 1) + v22 + ((int)v24 >> 1)) >> 1;
      goto LABEL_32;
    }
  }
  else if (v9 == v10) {
    if (v21 == v22) {
      *(_DWORD*)(v27 + 4 * v3) = v9;
      v14 = v21;
      goto LABEL_32;
    }
    v28 = v20 - v9;
    v29 = (unsigned int)(v20 - v19);
    if (v23 == 0) {
      goto LABEL_18;
    }
  }
  else {
    v45 = v27;
    v44 = v21 - v22;
    if (v17 >= 0) {
      v30 = v9 - v10;
    }
    else {
      v30 = v10 - v9;
    }
    v46 = v26;
    if (v18 >= 0) {
      v31 = v18;
    }
    else {
      v31 = -v18;
    }
    if (v30 <= v31) {
      v43 = vardiv_64_plt((unsigned int)v17, (unsigned int)v18, 30);
      v28 = v10 - v20 + varmul_64_plt((unsigned int)(v22 - v11), v43, 30);
      result = varmul_64_plt(v24, v43, 30);
      v29 = v23 - (unsigned int)result;
    }
    else {
      v32 = vardiv_64_plt((unsigned int)v18, (unsigned int)v17, 30);
      v28 = v22 - v11 - varmul_64_plt((unsigned int)(v20 - v10), v32, 30);
      result = varmul_64_plt(v23, v32, 30);
      v24 = v44;
      v29 = (unsigned int)result - v44;
    }
    v26 = v46;
    v27 = v45;
    if ((_DWORD)v29 == 0) {
      goto LABEL_18;
    }
  }
  if (v28 >= 0) {
    v33 = v28;
  }
  else {
    v33 = -v28;
  }
  if ((int)v29 >= 0) {
    v34 = v29;
  }
  else {
    v34 = -(int)v29;
  }
  if (v33 >= v34) {
    if (v28 == 0) {
      *(_DWORD*)(v27 + 4 * v3) = v20;
      v14 = v22;
      goto LABEL_32;
    }
    v39 = (unsigned int)v29;
    v40 = (unsigned int)v28;
    v36 = v26;
    v41 = v27;
    v42 = vardiv_64_plt(v39, v40, 30);
    *(_DWORD*)(v41 + 4 * v3) = vardiv_64_plt(v23, v42, 30) + v20;
    result = vardiv_64_plt(v24, v42, 30);
  }
  else {
    v35 = (unsigned int)v28;
    v36 = v26;
    v37 = v27;
    v38 = vardiv_64_plt(v35, v29, 30);
    *(_DWORD*)(v37 + 4 * v3) = varmul_64_plt(v23, v38, 30) + v20;
    result = varmul_64_plt(v24, v38, 30);
  }
  v26 = v36;
  v14 = result + v22;
LABEL_32:
  *(_DWORD*)(v26 + 4 * v3) = v14;
  return result;
}

__int64 nn_fontll_itype_42d5c0(__int64 result)
{
  __int64 v1;
  unsigned int v2;
  int v3;

  v1 = *(_QWORD*)(result + 40);
  *(_QWORD*)(result + 40) = v1 - 4;
  v2 = *(unsigned __int8*)(result + 90);
  v3 = *(_DWORD*)(v1 - 4);
  if (v2 > 0x11) {
    if (v2 == 18) {
      *(_DWORD*)(result + 80) = v3;
    }
    else if (v2 == 23) {
      *(_DWORD*)(result + 84) = v3 - 1;
    }
  }
  else if (v2 == 16) {
    *(_DWORD*)(result + 72) = v3;
  }
  else if (v2 == 17) {
    *(_DWORD*)(result + 76) = v3;
  }
  return result;
}

__int64 nn_fontll_itype_42d620(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;

  v1 = *(_QWORD*)(result + 40);
  *(_QWORD*)(result + 40) = v1 - 4;
  v2 = *(_QWORD*)(result + 56) + 88LL * *(int*)(v1 - 4);
  v3 = *(unsigned __int8*)(result + 90);
  if (v3 > 0x14) {
    if (v3 == 21) {
      *(_QWORD*)(result + 16) = v2;
      return result;
    }
    if (v3 != 22) {
      return result;
    }
    *(_QWORD*)(result + 8) = v2;
    *(_QWORD*)(result + 16) = v2;
  LABEL_8:
    *(_QWORD*)result = v2;
    return result;
  }
  if (v3 == 19) {
    goto LABEL_8;
  }
  if (v3 == 20) {
    *(_QWORD*)(result + 8) = v2;
  }
  return result;
}

__int64 nn_fontll_itype_42d690(__int64 result)
{
  unsigned int v1;
  int v2;

  v1 = *(unsigned __int8*)(result + 90);
  if (v1 > 0x79) {
    switch (v1) {
    case 'z':
      v2 = 5;
      break;
    case '|':
      v2 = 7;
      break;
    case '}':
      v2 = 6;
      break;
    default:
      return result;
    }
  }
  else {
    switch (v1) {
    case 0x18u:
      v2 = 2;
      break;
    case 0x19u:
      v2 = 3;
      break;
    case 0x3Du:
      v2 = 4;
      break;
    default:
      return result;
    }
  }
  *(_DWORD*)(*(_QWORD*)(result + 64) + 136LL) = v2;
  return result;
}

__int64 nn_fontll_itype_42d710(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 40);
  *(_QWORD*)(result + 40) = v1 - 4;
  *(_DWORD*)(*(_QWORD*)(result + 64) + 132LL) = *(_DWORD*)(v1 - 4);
  return result;
}

__int64 nn_fontll_itype_42d740(__int64 result)
{
  unsigned __int8* v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(unsigned __int8**)(result + 48);
  v2 = 1;
  do {
    v3 = (__int64)(v1 + 1);
    *(_QWORD*)(result + 48) = v1 + 1;
    v4 = *v1;
    *(_BYTE*)(result + 90) = v4;
    if ((_DWORD)v4 == 88) {
      ++v2;
    }
    else if ((_DWORD)v4 == 89) {
      --v2;
    }
    else {
      if ((_DWORD)v4 == 65) {
        v3 = (__int64)&v1[2 * v1[1] + 2];
      }
      else if ((_DWORD)v4 == 64) {
        v3 = (__int64)&v1[v1[1] + 2];
      }
      else {
        v5 = v3 + 2 * v4;
        v3 = v3 + v4 - 175;
        v6 = v5 - 366;
        if ((v4 & 0xF8) != 0xB0) {
          v3 = (__int64)(v1 + 1);
        }
        if ((v4 & 0xF8) == 0xB8) {
          v3 = v6;
        }
      }
      *(_QWORD*)(result + 48) = v3;
    }
    v1 = (unsigned __int8*)v3;
  } while (v2 != 0);
  return result;
}

__int64 nn_fontll_itype_42d7e0(__int64 result)
{
  __int64 v1;
  int* v2;

  v1 = *(_QWORD*)(result + 48);
  v2 = (int*)(*(_QWORD*)(result + 40) - 4LL);
  *(_QWORD*)(result + 40) = v2;
  *(_QWORD*)(result + 48) = v1 + *v2 - 1;
  return result;
}

__int64 nn_fontll_itype_42d800(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 40);
  *(_QWORD*)(result + 40) = v1 - 4;
  *(_DWORD*)(*(_QWORD*)(result + 64) + 112LL) = *(_DWORD*)(v1 - 4);
  return result;
}

__int64 nn_fontll_itype_42d820(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 40);
  *(_QWORD*)(result + 40) = v1 - 4;
  *(_DWORD*)(*(_QWORD*)(result + 64) + 116LL) = *(_DWORD*)(v1 - 4);
  return result;
}

__int64 nn_fontll_itype_42d840(__int64 a1)
{
  __int64 v1;
  _DWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 64);
  v2 = (_DWORD*)(*(_QWORD*)(a1 + 40) - 4LL);
  *(_QWORD*)(a1 + 40) = v2;
  v3 = *(unsigned int*)(v1 + 272);
  v4 = (unsigned int)(__int16)*v2;
  *(_WORD*)(v1 + 160) = *v2;
  result = ScaleFuncCall_plt(v3, v1 + 256, v4);
  *(_DWORD*)(v1 + 120) = result;
  return result;
}

__int64 nn_fontll_itype_42d890(__int64 result)
{
  _DWORD* v1;
  int v2;

  v1 = *(_DWORD**)(result + 40);
  v2 = *(v1 - 1);
  *(_QWORD*)(result + 40) = v1 + 1;
  *v1 = v2;
  return result;
}

__int64 nn_fontll_itype_42d8b0(__int64 result)
{
  *(_QWORD*)(result + 40) = *(_QWORD*)(*(_QWORD*)(result + 64) + 8LL);
  return result;
}

__int64 nn_fontll_itype_42d8c0(__int64 result)
{
  __int64 v1;
  int v2;

  v1 = *(_QWORD*)(result + 40);
  v2 = *(_DWORD*)(v1 - 8);
  *(_DWORD*)(v1 - 8) = *(_DWORD*)(v1 - 4);
  *(_DWORD*)(v1 - 4) = v2;
  return result;
}

__int64 nn_fontll_itype_42d8d0(__int64 result)
{
  _DWORD* v1;
  __int64 v2;

  v1 = *(_DWORD**)(result + 40);
  v2 = *(_QWORD*)(*(_QWORD*)(result + 64) + 8LL);
  *(_QWORD*)(result + 40) = v1 + 1;
  *v1 = ((unsigned __int64)v1 - v2) >> 2;
  return result;
}

__int64 nn_fontll_itype_42d900(__int64 result)
{
  *(_DWORD*)(*(_QWORD*)(result + 40) - 4LL) =
      *(_DWORD*)(*(_QWORD*)(result + 40) - 4LL -
                 4LL * *(int*)(*(_QWORD*)(result + 40) - 4LL));
  return result;
}

__int64 nn_fontll_itype_42d9c0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  int v7;

  v1 = a1[5];
  a1[5] = v1 - 4;
  v3 = *(int*)(v1 - 4);
  a1[5] = v1 - 8;
  v4 = *(int*)(v1 - 8);
  v5 = ((__int64 (*)(_QWORD*, _QWORD, _QWORD))a1[13])(
      a1,
      (unsigned int)(*(_DWORD*)(*(_QWORD*)*a1 + 4 * v3) -
                     *(_DWORD*)(*(_QWORD*)a1[1] + 4 * v4)),
      (unsigned int)(*(_DWORD*)(*(_QWORD*)(*a1 + 8LL) + 4 * v3) -
                     *(_DWORD*)(*(_QWORD*)(a1[1] + 8LL) + 4 * v4)));
  v6 = v5 >> 1;
  v7 = v5;
  ((void (*)(_QWORD*, _QWORD, _QWORD, _QWORD))a1[12])(a1, *a1, (unsigned int)v4,
                                                      (unsigned int)(v5 >> 1));
  return ((__int64 (*)(_QWORD*, _QWORD, _QWORD, _QWORD))a1[12])(
      a1, a1[1], (unsigned int)v3, (unsigned int)(v6 - v7));
}

__int64 nn_fontll_itype_42da70(__int64 result)
{
  int v1;
  int* v2;

  v1 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(result + 56) + 104LL) +
                  4LL *
                      *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(result + 56) +
                                                      152LL) +
                                           2LL * *(__int16*)(*(_QWORD*)(result +
                                                                        56) +
                                                             168LL) -
                                           2) +
                  8) -
       *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(result + 56) + 104LL) +
                  4LL *
                      *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(result + 56) +
                                                      152LL) +
                                           2LL * *(__int16*)(*(_QWORD*)(result +
                                                                        56) +
                                                             168LL) -
                                           2) +
                  4);
  v2 = *(int**)(result + 40);
  *(_QWORD*)(result + 40) = v2 + 1;
  *v2 = v1;
  return result;
}

__int64 nn_fontll_itype_42dab0(__int64 result)
{
  __int64 v1;
  int v2;
  __int64 v3;
  __int64 v4;

  v1 = *(_QWORD*)(result + 40);
  v2 = *(unsigned __int16*)(result + 28);
  *(_QWORD*)(result + 40) = v1 - 4;
  v3 = *(int*)(v1 - 4);
  v4 = *(_QWORD*)(*(_QWORD*)result + 72LL);
  if (v2 != 0) {
    *(_BYTE*)(v4 + v3) &= ~1u;
  }
  if (*(_WORD*)(result + 30) != 0) {
    *(_BYTE*)(v4 + v3) &= ~2u;
  }
  return result;
}

_QWORD* nn_fontll_itype_42db00(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  int* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v10;
  unsigned __int8* v11;
  _QWORD* v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int8* v15;
  __int64 v16;
  bool v17;

  v1 = result[5];
  v2 = result[8];
  result[5] = v1 - 4;
  v3 = (int*)(*(_QWORD*)(v2 + 176) + 8LL * *(int*)(v1 - 4));
  v4 = v2 + 8LL * *((unsigned __int16*)v3 + 3);
  v5 = *v3;
  v6 = *((unsigned __int16*)v3 + 2);
  v7 = *(_QWORD*)(v4 + 304);
  result[5] = v1 - 8;
  v8 = *(_DWORD*)(v1 - 8);
  if (v8 >= 1 && (_DWORD)v6 != 0) {
    v10 = result[6];
    v11 = (unsigned __int8*)(v7 + v5);
    v12 = result;
    v13 = SdkData_e880d8;
    v14 = v7 + v5 + v6;
    do {
      v15 = v11;
      do {
        v12[6] = v15 + 1;
        v16 = *v15;
        *((_BYTE*)v12 + 90) = v16;
        result = (_QWORD*)(*(__int64 (**)(_QWORD*))(v13 + 8 * v16))(v12);
        v15 = (unsigned __int8*)v12[6];
      } while ((unsigned __int64)v15 < v14);
      v17 = __OFSUB__(v8--, 1);
      v12[6] = v10;
    } while (!((v8 < 0) ^ v17 | (v8 == 0)));
  }
  return result;
}

_QWORD* nn_fontll_itype_42dbe0(_QWORD* result)
{
  __int64 v1;
  int* v2;
  int* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int8* v9;
  unsigned __int8* v10;
  __int64 v11;

  v1 = result[8];
  v2 = (int*)(result[5] - 4LL);
  result[5] = v2;
  v3 = (int*)(*(_QWORD*)(v1 + 176) + 8LL * *v2);
  v4 = *(_QWORD*)(v1 + 8LL * *((unsigned __int16*)v3 + 3) + 304);
  if (v4 != 0) {
    v5 = *((unsigned __int16*)v3 + 2);
    v6 = result[6];
    v7 = result;
    if (*((_WORD*)v3 + 2) != 0) {
      v8 = SdkData_e880d8;
      v9 = (unsigned __int8*)(v4 + *v3);
      v10 = &v9[v5];
      do {
        v7[6] = v9 + 1;
        v11 = *v9;
        *((_BYTE*)v7 + 90) = v11;
        result = (_QWORD*)(*(__int64 (**)(_QWORD*))(v8 + 8 * v11))(v7);
        v9 = (unsigned __int8*)v7[6];
      } while (v9 < v10);
    }
    v7[6] = v6;
  }
  return result;
}

__int64 nn_fontll_itype_42dca0(__int64 result)
{
  __int64 v1;
  int* v2;
  __int64 v3;
  __int64 v4;
  unsigned __int8* v5;
  unsigned __int8* v6;
  unsigned int v7;
  unsigned __int8* v8;
  unsigned __int8* v9;
  __int64 v10;
  int v11;
  unsigned __int8* v12;
  __int64 v13;
  unsigned __int8* v14;

  v1 = *(_QWORD*)(result + 64);
  v2 = (int*)(*(_QWORD*)(result + 40) - 4LL);
  *(_QWORD*)(result + 40) = v2;
  v3 = *(_QWORD*)(v1 + 176) + 8LL * *v2;
  v4 = *(unsigned __int8*)(v1 + 289);
  *(_WORD*)(v3 + 6) = v4;
  *(_DWORD*)v3 = *(_DWORD*)(result + 48) - *(_DWORD*)(v1 + 8 * v4 + 304);
  v5 = *(unsigned __int8**)(result + 48);
  v6 = v5 + 1;
  *(_QWORD*)(result + 48) = v5 + 1;
  v7 = *v5;
  *(_BYTE*)(result + 90) = v7;
  if (v7 != 45) {
    v8 = v5;
    do {
      while (v7 == 65) {
        v9 = &v8[2 * *v6];
      LABEL_4:
        v8 = v9 + 2;
        v6 = v9 + 3;
        *(_QWORD*)(result + 48) = v6;
        v7 = *v8;
        *(_BYTE*)(result + 90) = v7;
        if (v7 == 45) {
          goto LABEL_14;
        }
      }
      if (v7 == 64) {
        v9 = &v8[*v6];
        goto LABEL_4;
      }
      v10 = v7;
      v11 = v7 & 0xF8;
      v12 = &v6[2 * v10];
      v13 = (__int64)&v6[v10 - 175];
      v14 = v12 - 366;
      if (v11 == 176) {
        v6 = (unsigned __int8*)v13;
      }
      if (v11 == 184) {
        v8 = v14;
      }
      else {
        v8 = v6;
      }
      v6 = v8 + 1;
      *(_QWORD*)(result + 48) = v8 + 1;
      v7 = *v8;
      *(_BYTE*)(result + 90) = v7;
    } while (v7 != 45);
  }
LABEL_14:
  *(_WORD*)(v3 + 4) = (_WORD)v6 + ~(_WORD)v5;
  return result;
}

void __attribute__((noreturn)) nn_fontll_itype_42dd90(__int64 a1)
{
  longjmp_plt(a1 + 136, 416);
  __udf(0);
}

__int64 nn_fontll_itype_42ddb0(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;
  int* v4;
  __int64 v5;
  char v6;
  __int64 v7;
  unsigned int v8;

  v1 = *(_QWORD**)a1;
  v2 = *(_QWORD*)(a1 + 64);
  v4 = (int*)(*(_QWORD*)(a1 + 40) - 4LL);
  *(_QWORD*)(a1 + 40) = v4;
  v5 = *v4;
  v6 = *(_BYTE*)(a1 + 90);
  *(_DWORD*)(a1 + 72) = v5;
  *(_DWORD*)(a1 + 76) = v5;
  if ((v6 & 1) != 0) {
    v8 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(a1 + 104))(
        a1, *(unsigned int*)(*v1 + 4 * v5), *(unsigned int*)(v1[1] + 4 * v5));
    v7 = (unsigned int)RoundFuncCall_plt(
             *(unsigned int*)(v2 + 136), v8,
             *(unsigned int*)(*(_QWORD*)(a1 + 64) + 44LL), a1) -
         v8;
  }
  else {
    v7 = 0;
  }
  return (*(__int64 (**)(__int64, _QWORD*, _QWORD, __int64))(a1 + 96))(
      a1, v1, (unsigned int)v5, v7);
}

__int64 fnt_IUP(__int64 result)
{
  __int64 v1;
  char v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  bool v14;
  int v15;
  int v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  __int64 v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  __int64 v40;
  unsigned int v41;
  int v42;
  char v43;
  int v44;
  int v45;
  int v46;
  unsigned int v47;
  int v48;
  int v49;
  __int64 v50;

  v1 = *(_QWORD*)(result + 16);
  if ((*(_BYTE*)(result + 90) & 1) != 0) {
    v2 = 1;
  }
  else {
    v2 = 2;
  }
  v3 = *(__int16*)(v1 + 80);
  if ((*(_BYTE*)(result + 90) & 1) != 0) {
    v4 = 16;
  }
  else {
    v4 = 24;
  }
  if ((*(_BYTE*)(result + 90) & 1) != 0) {
    v5 = 32;
  }
  else {
    v5 = 40;
  }
  if ((*(_BYTE*)(result + 90) & 1) != 0) {
    v6 = *(__int64**)(result + 16);
  }
  else {
    v6 = (__int64*)(v1 + 8);
  }
  if (v3 >= 1) {
    v7 = *(_QWORD*)(v1 + v4);
    v8 = *v6;
    v9 = 0;
    v10 = *(_QWORD*)(v1 + 64);
    v43 = v2;
    v50 = *(_QWORD*)(v1 + v5);
  LABEL_17:
    v11 = *(unsigned __int16*)(v10 + 2 * v9);
    v12 = *(unsigned __int16*)(*(_QWORD*)(v1 + 56) + 2 * v9) - 1LL;
    do {
      v13 = *(_QWORD*)(v1 + 72) + v12++;
      v14 = ((unsigned __int8)v2 & *(_BYTE*)(v13 + 1)) != 0 || v12 > v11;
    } while (!v14);
    if (v12 > v11) {
      goto LABEL_16;
    }
    v15 = v12;
    v42 = v12;
    while (1) {
      v16 = *(unsigned __int16*)(v10 + 2 * v9);
      v17 = v15 == v16 ? *(unsigned __int16*)(*(_QWORD*)(v1 + 56) + 2 * v9)
                       : v15 + 1;
      v18 = v17;
      while (1) {
        v19 = v18;
        if (((unsigned __int8)v2 & *(_BYTE*)(*(_QWORD*)(v1 + 72) + v18)) != 0) {
          break;
        }
        if (v18 == v16) {
          v18 = *(unsigned __int16*)(*(_QWORD*)(v1 + 56) + 2 * v9);
          if (v15 == v18) {
          LABEL_35:
            v20 = v15;
            v19 = v15;
            v21 = *(_DWORD*)(v50 + 4LL * v15);
            v22 = 0;
            goto LABEL_36;
          }
        }
        else if (v15 == ++v18) {
          goto LABEL_35;
        }
      }
      v20 = v15;
      v15 = v18;
      v26 = *(_DWORD*)(v50 + 4 * v20);
      v21 = *(_DWORD*)(v50 + 4LL * v18);
      v22 = v26 - v21;
      if (v26 >= v21) {
      LABEL_36:
        v23 = *(_DWORD*)(v8 + 4 * v19);
        v24 = *(_DWORD*)(v7 + 4 * v20);
        v25 = *(_DWORD*)(v8 + 4 * v20);
        v26 = v21;
        v27 = v25 - v24;
        v49 = v25 - v23;
        v28 = *(_DWORD*)(v7 + 4 * v19);
        v29 = v15;
        v30 = v23 - v28;
        if (v22 == 0) {
          goto LABEL_55;
        }
      }
      else {
        v23 = *(_DWORD*)(v8 + 4 * v20);
        v24 = *(_DWORD*)(v7 + 4 * v19);
        v37 = *(_DWORD*)(v8 + 4 * v19);
        v22 = v21 - v26;
        v27 = v37 - v24;
        v49 = v37 - v23;
        v28 = *(_DWORD*)(v7 + 4 * v20);
        v29 = v15;
        v30 = v23 - v28;
        if (v22 == 0) {
        LABEL_55:
          if (v17 != v29) {
            do {
              while (1) {
                *(_DWORD*)(v8 + 4LL * v17) += v30;
                v10 = *(_QWORD*)(v1 + 64);
                if (v17 == *(unsigned __int16*)(v10 + 2 * v9)) {
                  break;
                }
                if (++v17 == v15) {
                  goto LABEL_26;
                }
              }
              v17 = *(unsigned __int16*)(*(_QWORD*)(v1 + 56) + 2 * v9);
            } while (v17 != v15);
          }
          goto LABEL_26;
        }
      }
      if (v22 >> 15 == 0 && v49 < 0x8000) {
        if (v17 == v15) {
          goto LABEL_26;
        }
        v31 = v17;
        while (1) {
          v32 = *(_DWORD*)(v7 + 4LL * v31);
          v33 = v31;
          if (v32 <= v28) {
            *(_DWORD*)(v8 + 4LL * v31) = v32 + v30;
            v10 = *(_QWORD*)(v1 + 64);
            if (v31 != *(unsigned __int16*)(v10 + 2 * v9)) {
              goto LABEL_41;
            }
          }
          else if (v32 >= v24) {
            *(_DWORD*)(v8 + 4LL * v31) = v32 + v27;
            v10 = *(_QWORD*)(v1 + 64);
            if (v31 != *(unsigned __int16*)(v10 + 2 * v9)) {
              goto LABEL_41;
            }
          }
          else {
            v34 = (v22 >> 1) + (*(_DWORD*)(v50 + 4LL * v31) - v26) * v49;
            v14 = v34 < 0x8000;
            v35 = v34 / v22;
            v36 = v34 / (int)v22;
            if (!v14) {
              v36 = v35;
            }
            *(_DWORD*)(v8 + 4 * v33) = v36 + v23;
            v10 = *(_QWORD*)(v1 + 64);
            if ((_DWORD)v33 != *(unsigned __int16*)(v10 + 2 * v9)) {
            LABEL_41:
              v31 = v33 + 1;
              if ((_DWORD)v33 + 1 == v15) {
                goto LABEL_26;
              }
              continue;
            }
          }
          v31 = *(unsigned __int16*)(*(_QWORD*)(v1 + 56) + 2 * v9);
          if (v31 == v15) {
            goto LABEL_26;
          }
        }
      }
      if (v17 != v15) {
        break;
      }
    LABEL_26:
      v2 = v43;
      if (v29 == (_DWORD)v12) {
        LOWORD(v3) = *(_WORD*)(v1 + 80);
      LABEL_16:
        if (++v9 >= (__int16)v3) {
          return result;
        }
        goto LABEL_17;
      }
    }
    v38 = 1;
    v47 = 0;
    v48 = v26;
    v46 = v24;
    v45 = v29;
    v44 = v27;
    while (1) {
      while (1) {
        v39 = *(_DWORD*)(v7 + 4LL * v17);
        v40 = v17;
        if (v39 > v28) {
          break;
        }
        *(_DWORD*)(v8 + 4LL * v17) = v39 + v30;
        v10 = *(_QWORD*)(v1 + 64);
        if (v17 != *(unsigned __int16*)(v10 + 2 * v9)) {
          goto LABEL_63;
        }
      LABEL_73:
        v17 = *(unsigned __int16*)(*(_QWORD*)(v1 + 56) + 2 * v9);
        if (v17 == v15) {
        LABEL_25:
          LODWORD(v12) = v42;
          goto LABEL_26;
        }
      }
      if (v39 >= v24) {
        *(_DWORD*)(v8 + 4LL * v17) = v39 + v27;
        v10 = *(_QWORD*)(v1 + 64);
        if (v17 != *(unsigned __int16*)(v10 + 2 * v9)) {
          goto LABEL_63;
        }
        goto LABEL_73;
      }
      if (v38 != 0) {
        v41 = vardiv_64_plt((unsigned int)v49, v22, 16);
        v26 = v48;
        v47 = v41;
      }
      result = varmul_64_plt((unsigned int)(*(_DWORD*)(v50 + 4 * v40) - v26),
                             v47, 16);
      v26 = v48;
      v29 = v45;
      v24 = v46;
      v38 = 0;
      v27 = v44;
      *(_DWORD*)(v8 + 4 * v40) = result + v23;
      v10 = *(_QWORD*)(v1 + 64);
      if ((_DWORD)v40 == *(unsigned __int16*)(v10 + 2 * v9)) {
        goto LABEL_73;
      }
    LABEL_63:
      v17 = v40 + 1;
      if ((_DWORD)v40 + 1 == v15) {
        goto LABEL_25;
      }
    }
  }
  return result;
}

__int64 nn_fontll_itype_42e2c0(__int64 a1)
{
  __int64 result;
  int v3;
  int v4;
  int v5;
  _QWORD* v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _BYTE v15[4];
  __int64 v16;

  v16 = 0;
  result = nn_fontll_itype_433860(a1, (char*)&v16 + 4, &v16, v15);
  v3 = *(_DWORD*)(a1 + 84);
  if ((v3 & 0x80000000) == 0) {
    v5 = v16;
    v4 = HIDWORD(v16);
    v6 = *(_QWORD**)(a1 + 16);
    v7 = *(_DWORD*)(a1 + 84);
    if ((v3 & 1) == 0) {
      v8 = *(_QWORD*)(a1 + 40);
      *(_QWORD*)(a1 + 40) = v8 - 4;
      v9 = *(int*)(v8 - 4);
      if (*(_WORD*)(a1 + 28) != 0) {
        *(_DWORD*)(*v6 + 4 * v9) += v4;
        *(_BYTE*)(v6[9] + v9) |= 1u;
      }
      if (*(_WORD*)(a1 + 30) != 0) {
        *(_DWORD*)(v6[1] + 4 * v9) += v5;
        *(_BYTE*)(v6[9] + v9) |= 2u;
      }
      v7 = v3 - 1;
    }
    if (v3 != 0) {
      v10 = v7 + 2;
      do {
        v11 = *(_QWORD*)(a1 + 40);
        *(_QWORD*)(a1 + 40) = v11 - 4;
        v12 = *(int*)(v11 - 4);
        if (*(_WORD*)(a1 + 28) != 0) {
          *(_DWORD*)(*v6 + 4 * v12) += v4;
          *(_BYTE*)(v6[9] + v12) |= 1u;
        }
        if (*(_WORD*)(a1 + 30) != 0) {
          *(_DWORD*)(v6[1] + 4 * v12) += v5;
          *(_BYTE*)(v6[9] + v12) |= 2u;
        }
        v13 = *(_QWORD*)(a1 + 40);
        *(_QWORD*)(a1 + 40) = v13 - 4;
        v14 = *(int*)(v13 - 4);
        if (*(_WORD*)(a1 + 28) != 0) {
          *(_DWORD*)(*v6 + 4 * v14) += v4;
          *(_BYTE*)(v6[9] + v14) |= 1u;
        }
        if (*(_WORD*)(a1 + 30) != 0) {
          *(_DWORD*)(v6[1] + 4 * v14) += v5;
          *(_BYTE*)(v6[9] + v14) |= 2u;
        }
        v10 -= 2;
      } while (v10 > 1);
    }
  }
  *(_DWORD*)(a1 + 84) = 0;
  return result;
}

__int64 nn_fontll_itype_42e480(__int64 a1)
{
  __int64 result;
  __int64 v3;
  int v4;
  int v5;
  int* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  char v13;
  int v14;
  int v15;
  char v16;
  int v17;
  int v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int i;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned int v51;
  __int64 v52;

  v52 = 0;
  result = nn_fontll_itype_433860(a1, (char*)&v52 + 4, &v52, &v51);
  v3 = v51;
  v4 = v52;
  v5 = HIDWORD(v52);
  v6 = (int*)(*(_QWORD*)(a1 + 40) - 4LL);
  *(_QWORD*)(a1 + 40) = v6;
  v7 = *(_QWORD**)(a1 + 16);
  v8 = 2LL * *v6;
  v9 = *(unsigned __int16*)(v7[7] + v8);
  v10 = *(unsigned __int16*)(v7[8] + v8);
  v11 = v10 - v9;
  if (v10 - (int)v9 < 0) {
    return result;
  }
  if (*(_WORD*)(a1 + 28) == 0) {
    if (*(_WORD*)(a1 + 30) == 0) {
      return result;
    }
    v13 = v11 + 1;
    if ((_QWORD*)result != v7) {
      v14 = v13 & 3;
      if (v14 != 0) {
        do {
          --v14;
          *(_DWORD*)(v7[1] + 4 * v9) += v4;
          *(_BYTE*)(v7[9] + v9++) |= 2u;
        } while (v14 != 0);
        v15 = v10 - v9;
        if (v11 < 3) {
          return result;
        }
      }
      else {
        v15 = v10 - v9;
        if (v11 < 3) {
          return result;
        }
      }
      v31 = 4 * v9;
      v32 = 0;
      v33 = v15 + 1;
      do {
        *(_DWORD*)(v7[1] + v31 + 4 * v32) += v4;
        *(_BYTE*)(v7[9] + v9 + v32) |= 2u;
        v34 = v7[1] + v31 + 4 * v32;
        *(_DWORD*)(v34 + 4) += v4;
        v35 = v9 + v32;
        *(_BYTE*)(v7[9] + v9 + v32 + 1) |= 2u;
        v36 = v7[1] + v31 + 4 * v32;
        *(_DWORD*)(v36 + 8) += v4;
        *(_BYTE*)(v7[9] + v9 + v32 + 2) |= 2u;
        v37 = v7[1] + v31 + 4 * v32;
        v32 += 4;
        *(_DWORD*)(v37 + 12) += v4;
        *(_BYTE*)(v7[9] + v35 + 3) |= 2u;
      } while (v33 != (_DWORD)v32);
      return result;
    }
    v25 = v13 & 3;
    if (v25 != 0) {
      do {
        if (v3 != v9) {
          *(_DWORD*)(v7[1] + 4 * v9) += v4;
          *(_BYTE*)(v7[9] + v9) |= 2u;
        }
        ++v9;
        --v25;
      } while (v25 != 0);
      v26 = v10 - v9;
    }
    else {
      v26 = v10 - v9;
    }
    if (v11 < 3) {
      return result;
    }
    v43 = v26 + 4;
    while (1) {
      if (v3 == v9) {
        v44 = v9 + 1;
        if (v9 + 1 == v3) {
          goto LABEL_60;
        }
      }
      else {
        *(_DWORD*)(v7[1] + 4 * v9) += v4;
        *(_BYTE*)(v7[9] + v9) |= 2u;
        v44 = v9 + 1;
        if (v9 + 1 == v3) {
        LABEL_60:
          v45 = v44 + 1;
          if (v45 == v3) {
            goto LABEL_61;
          }
          goto LABEL_65;
        }
      }
      *(_DWORD*)(v7[1] + 4 * v9 + 4) += v4;
      *(_BYTE*)(v7[9] + v9 + 1) |= 2u;
      v45 = v44 + 1;
      if (v45 == v3) {
      LABEL_61:
        v46 = v45 + 1;
        if (v46 != v3) {
          goto LABEL_66;
        }
        goto LABEL_57;
      }
    LABEL_65:
      *(_DWORD*)(v7[1] + 4 * v9 + 8) += v4;
      *(_BYTE*)(v7[9] + v9 + 2) |= 2u;
      v46 = v45 + 1;
      if (v46 != v3) {
      LABEL_66:
        *(_DWORD*)(v7[1] + 4 * v9 + 12) += v4;
        *(_BYTE*)(v7[9] + v9 + 3) |= 2u;
      }
    LABEL_57:
      v43 -= 4;
      v9 = v46 + 1;
      if (v43 <= 3) {
        return result;
      }
    }
  }
  if (*(_WORD*)(a1 + 30) != 0) {
    if ((_QWORD*)result != v7) {
      if (((v10 + (_DWORD)v9) & 1) != 0) {
        v12 = v10 - v9;
        if (v11 == 0) {
          return result;
        }
      }
      else {
        *(_DWORD*)(*v7 + 4 * v9) += v5;
        *(_BYTE*)(v7[9] + v9) |= 1u;
        *(_DWORD*)(v7[1] + 4 * v9) += v4;
        *(_BYTE*)(v7[9] + v9++) |= 2u;
        v12 = v11 - 1;
        if (v11 == 0) {
          return result;
        }
      }
      v20 = 4 * v9;
      v21 = 0;
      v22 = v12 + 1;
      do {
        *(_DWORD*)(*v7 + v20 + 4 * v21) += v5;
        *(_BYTE*)(v7[9] + v9 + v21) |= 1u;
        *(_DWORD*)(v7[1] + v20 + 4 * v21) += v4;
        *(_BYTE*)(v7[9] + v9 + v21) |= 2u;
        *(_DWORD*)(*v7 + v20 + 4 * v21 + 4) += v5;
        v23 = v9 + v21;
        *(_BYTE*)(v7[9] + v9 + v21 + 1) |= 1u;
        v24 = v7[1] + v20 + 4 * v21;
        v21 += 2;
        *(_DWORD*)(v24 + 4) += v4;
        *(_BYTE*)(v7[9] + v23 + 1) |= 2u;
      } while (v22 != (_DWORD)v21);
      return result;
    }
    if (((v10 + (_DWORD)v9) & 1) != 0) {
      v19 = v10 - v9;
    }
    else {
      if (v9 != v3) {
        *(_DWORD*)(*v7 + 4 * v9) += v5;
        *(_BYTE*)(v7[9] + v9) |= 1u;
        *(_DWORD*)(v7[1] + 4 * v9) += v4;
        *(_BYTE*)(v7[9] + v9) |= 2u;
      }
      ++v9;
      v19 = v11 - 1;
    }
    if (v11 == 0) {
      return result;
    }
    v29 = v19 + 2;
    while (1) {
      if (v3 == v9) {
        v30 = v9 + 1;
        if (v9 + 1 != v3) {
          goto LABEL_45;
        }
      }
      else {
        *(_DWORD*)(*v7 + 4 * v9) += v5;
        *(_BYTE*)(v7[9] + v9) |= 1u;
        *(_DWORD*)(v7[1] + 4 * v9) += v4;
        *(_BYTE*)(v7[9] + v9) |= 2u;
        v30 = v9 + 1;
        if (v9 + 1 != v3) {
        LABEL_45:
          *(_DWORD*)(*v7 + 4 * v9 + 4) += v5;
          *(_BYTE*)(v7[9] + v9 + 1) |= 1u;
          *(_DWORD*)(v7[1] + 4 * v9 + 4) += v4;
          *(_BYTE*)(v7[9] + v9 + 1) |= 2u;
        }
      }
      v29 -= 2;
      v9 = v30 + 1;
      if (v29 <= 1) {
        return result;
      }
    }
  }
  v16 = v11 + 1;
  if ((_QWORD*)result != v7) {
    v17 = v16 & 3;
    if (v17 != 0) {
      do {
        --v17;
        *(_DWORD*)(*v7 + 4 * v9) += v5;
        *(_BYTE*)(v7[9] + v9++) |= 1u;
      } while (v17 != 0);
      v18 = v10 - v9;
      if (v11 < 3) {
        return result;
      }
    }
    else {
      v18 = v10 - v9;
      if (v11 < 3) {
        return result;
      }
    }
    v38 = 4 * v9;
    v39 = 0;
    v40 = v18 + 1;
    do {
      *(_DWORD*)(*v7 + v38 + 4 * v39) += v5;
      *(_BYTE*)(v7[9] + v9 + v39) |= 1u;
      *(_DWORD*)(*v7 + v38 + 4 * v39 + 4) += v5;
      v41 = v9 + v39;
      *(_BYTE*)(v7[9] + v9 + v39 + 1) |= 1u;
      *(_DWORD*)(*v7 + v38 + 4 * v39 + 8) += v5;
      *(_BYTE*)(v7[9] + v9 + v39 + 2) |= 1u;
      v42 = *v7 + v38 + 4 * v39;
      v39 += 4;
      *(_DWORD*)(v42 + 12) += v5;
      *(_BYTE*)(v7[9] + v41 + 3) |= 1u;
    } while (v40 != (_DWORD)v39);
    return result;
  }
  v27 = v16 & 3;
  if (v27 != 0) {
    do {
      if (v3 != v9) {
        *(_DWORD*)(*v7 + 4 * v9) += v5;
        *(_BYTE*)(v7[9] + v9) |= 1u;
      }
      ++v9;
      --v27;
    } while (v27 != 0);
    v28 = v10 - v9;
  }
  else {
    v28 = v10 - v9;
  }
  if (v11 >= 3) {
    for (i = v28 + 4; i > 3; i -= 4) {
      if (v3 == v9) {
        v48 = v9 + 1;
        if (v9 + 1 == v3) {
          goto LABEL_74;
        }
      }
      else {
        *(_DWORD*)(*v7 + 4 * v9) += v5;
        *(_BYTE*)(v7[9] + v9) |= 1u;
        v48 = v9 + 1;
        if (v9 + 1 == v3) {
        LABEL_74:
          v49 = v48 + 1;
          if (v49 == v3) {
            goto LABEL_75;
          }
          goto LABEL_79;
        }
      }
      *(_DWORD*)(*v7 + 4 * v9 + 4) += v5;
      *(_BYTE*)(v7[9] + v9 + 1) |= 1u;
      v49 = v48 + 1;
      if (v49 == v3) {
      LABEL_75:
        v50 = v49 + 1;
        if (v50 != v3) {
          goto LABEL_80;
        }
        goto LABEL_71;
      }
    LABEL_79:
      *(_DWORD*)(*v7 + 4 * v9 + 8) += v5;
      *(_BYTE*)(v7[9] + v9 + 2) |= 1u;
      v50 = v49 + 1;
      if (v50 != v3) {
      LABEL_80:
        *(_DWORD*)(*v7 + 4 * v9 + 12) += v5;
        *(_BYTE*)(v7[9] + v9 + 3) |= 1u;
      }
    LABEL_71:
      v9 = v50 + 1;
    }
  }
  return result;
}

__int64 nn_fontll_itype_42ed00(__int64 a1)
{
  __int64 result;
  __int64 v3;
  int v4;
  int v5;
  int v6;
  __int64 v7;
  unsigned __int16* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  unsigned __int8* v13;
  int v14;
  _DWORD* v15;
  int v16;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  _DWORD* v22;
  unsigned __int8* v23;
  bool v24;
  unsigned __int8* v25;
  __int64 v26;
  _DWORD* v27;
  int v28;
  unsigned int v29;
  int v30;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  _BYTE* v34;
  int v35;
  _DWORD* v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  unsigned int v42;
  int v43;
  _DWORD* v44;
  _BYTE* v45;
  int v46;
  bool v47;
  __int64 v48;
  int v49;
  _BYTE* v50;
  _DWORD* v51;
  unsigned int v52;
  int v53;
  unsigned int v54;
  int v55;
  int v56;
  int v57;

  v56 = 0;
  v55 = 0;
  result = nn_fontll_itype_433860(a1, &v56, &v55, &v57);
  v3 = *(_QWORD*)(a1 + 40);
  v4 = v56;
  v5 = v55;
  *(_QWORD*)(a1 + 40) = v3 - 4;
  v6 = *(_DWORD*)(v3 - 4);
  v7 = *(_QWORD*)(a1 + 56) + 88LL * v6;
  v8 = *(unsigned __int16**)(v7 + 56);
  v9 = *(_QWORD*)(v7 + 64) + 2LL * *(__int16*)(v7 + 80);
  if (result != v7) {
    v57 = -1;
  }
  v10 = *v8;
  v11 = *(unsigned __int16*)(v9 - 2);
  if (*(_WORD*)(a1 + 28) != 0) {
    v12 = *(_QWORD*)v7;
    v13 = (unsigned __int8*)(*(_QWORD*)(v7 + 72) + v10);
    v14 = v57;
    v15 = (_DWORD*)(v12 + 4 * v10);
    v16 = v57 + ~(_DWORD)v10;
    if (v16 >= 0) {
      v17 = ((_BYTE)v57 - (_BYTE)v10) & 7;
      if ((((_BYTE)v57 - (_BYTE)v10) & 7) != 0) {
        v18 = v57 + ~(_DWORD)v10;
        do {
          --v18;
          --v17;
          *v15++ += v4;
          result = *v13 | 1u;
          *v13++ |= 1u;
        } while (v17 != 0);
        if ((unsigned int)v16 < 7) {
          goto LABEL_9;
        }
      LABEL_15:
        v21 = v18 + 1;
        do {
          v21 -= 8;
          *v15 += v4;
          *v13 |= 1u;
          v15[1] += v4;
          v13[1] |= 1u;
          v15[2] += v4;
          v13[2] |= 1u;
          v15[3] += v4;
          v13[3] |= 1u;
          v15[4] += v4;
          v13[4] |= 1u;
          v15[5] += v4;
          v13[5] |= 1u;
          v15[6] += v4;
          v13[6] |= 1u;
          v22 = v15 + 8;
          v15[7] += v4;
          v23 = v13 + 8;
          v13[7] |= 1u;
          v13 += 8;
          v15 += 8;
        } while (v21 != 0);
        v15 = v22;
        v13 = v23;
        if (v14 == -1) {
          v19 = -(int)v10;
        }
        else {
          v19 = ~v14;
        }
        v20 = v19 + v11;
        if (v19 + v11 < 0) {
          goto LABEL_34;
        }
      LABEL_21:
        v24 = v14 == -1;
        if (v14 == -1) {
          v25 = v13;
        }
        else {
          v25 = v13 + 1;
        }
        v26 = 1;
        if (v24) {
          v26 = 0;
        }
        v27 = &v15[v26];
        v28 = v19 + v11;
        if ((~(v19 + v11) & 7) != 0) {
          v30 = ((_BYTE)v28 + 1) & 7;
          v29 = v28 - v30;
          do {
            --v30;
            *v27++ += v4;
            *v25++ |= 1u;
          } while (v30 != 0);
        }
        else {
          v29 = v20;
        }
        if (v20 >= 7) {
          v31 = v29 + 1;
          do {
            v31 -= 8;
            *v27 += v4;
            *v25 |= 1u;
            v27[1] += v4;
            v25[1] |= 1u;
            v27[2] += v4;
            v25[2] |= 1u;
            v27[3] += v4;
            v25[3] |= 1u;
            v27[4] += v4;
            v25[4] |= 1u;
            v27[5] += v4;
            v25[5] |= 1u;
            v27[6] += v4;
            v25[6] |= 1u;
            v27[7] += v4;
            v27 += 8;
            v25[7] |= 1u;
            v25 += 8;
          } while (v31 != 0);
        }
        goto LABEL_34;
      }
      v18 = v57 + ~(_DWORD)v10;
      if ((unsigned int)v16 >= 7) {
        goto LABEL_15;
      }
    }
  LABEL_9:
    if (v14 == -1) {
      v19 = -(int)v10;
    }
    else {
      v19 = ~v14;
    }
    v20 = v19 + v11;
    if (v19 + v11 < 0) {
      goto LABEL_34;
    }
    goto LABEL_21;
  }
LABEL_34:
  if (*(_WORD*)(a1 + 30) == 0) {
    return result;
  }
  v32 = *(_QWORD*)(a1 + 56) + 88LL * v6;
  v33 = *(_QWORD*)(v32 + 8);
  v34 = (_BYTE*)(*(_QWORD*)(v32 + 72) + (unsigned int)v10);
  v35 = v57;
  v36 = (_DWORD*)(v33 + 4LL * (unsigned int)v10);
  v37 = v57 + ~(_DWORD)v10;
  if (v37 < 0) {
    goto LABEL_40;
  }
  v38 = ((_BYTE)v57 - (_BYTE)v10) & 7;
  if ((((_BYTE)v57 - (_BYTE)v10) & 7) == 0) {
    v39 = v57 + ~(_DWORD)v10;
    if ((unsigned int)v37 >= 7) {
      goto LABEL_46;
    }
  LABEL_40:
    v40 = -(int)v10;
    if (v35 == -1) {
      v41 = v40;
    }
    else {
      v41 = ~v35;
    }
    v42 = v41 + v11;
    if (v41 + v11 < 0) {
      return result;
    }
    goto LABEL_52;
  }
  v39 = v57 + ~(_DWORD)v10;
  do {
    --v39;
    --v38;
    *v36++ += v5;
    *v34++ |= 2u;
  } while (v38 != 0);
  if ((unsigned int)v37 < 7) {
    goto LABEL_40;
  }
LABEL_46:
  v43 = v39 + 1;
  do {
    v43 -= 8;
    *v36 += v5;
    *v34 |= 2u;
    v36[1] += v5;
    v34[1] |= 2u;
    v36[2] += v5;
    v34[2] |= 2u;
    v36[3] += v5;
    v34[3] |= 2u;
    v36[4] += v5;
    v34[4] |= 2u;
    v36[5] += v5;
    v34[5] |= 2u;
    v36[6] += v5;
    v34[6] |= 2u;
    v44 = v36 + 8;
    v36[7] += v5;
    v45 = v34 + 8;
    v34[7] |= 2u;
    v34 += 8;
    v36 += 8;
  } while (v43 != 0);
  v36 = v44;
  v34 = v45;
  v46 = -(int)v10;
  if (v35 == -1) {
    v41 = v46;
  }
  else {
    v41 = ~v35;
  }
  v42 = v41 + v11;
  if (v41 + v11 < 0) {
    return result;
  }
LABEL_52:
  v47 = v35 == -1;
  v48 = 1;
  v49 = v41 + v11;
  if (v47) {
    v48 = 0;
  }
  if (v47) {
    v50 = v34;
  }
  else {
    v50 = v34 + 1;
  }
  v51 = &v36[v48];
  if ((~v49 & 7) != 0) {
    v53 = ((_BYTE)v49 + 1) & 7;
    v52 = v49 - v53;
    do {
      --v53;
      *v51++ += v5;
      *v50++ |= 2u;
    } while (v53 != 0);
  }
  else {
    v52 = v42;
  }
  if (v42 >= 7) {
    v54 = v52 + 1;
    do {
      v54 -= 8;
      *v51 += v5;
      *v50 |= 2u;
      v51[1] += v5;
      v50[1] |= 2u;
      v51[2] += v5;
      v50[2] |= 2u;
      v51[3] += v5;
      v50[3] |= 2u;
      v51[4] += v5;
      v50[4] |= 2u;
      v51[5] += v5;
      v50[5] |= 2u;
      v51[6] += v5;
      v50[6] |= 2u;
      v51[7] += v5;
      v51 += 8;
      v50[7] |= 2u;
      v50 += 8;
    } while (v54 != 0);
  }
  return result;
}

__int64 nn_fontll_itype_42f340(__int64 a1)
{
  __int64 v1;
  unsigned int* v3;
  unsigned int v4;
  int v5;
  __int64 v6;
  __int64 result;
  int v8;
  _QWORD* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v1 = (unsigned int)*(__int16*)(a1 + 28);
  v3 = (unsigned int*)(*(_QWORD*)(a1 + 40) - 4LL);
  *(_QWORD*)(a1 + 40) = v3;
  v4 = *v3;
  if ((_DWORD)v1 != 0) {
    v5 = varmul_64_plt(v4, v1, 14);
    v6 = (unsigned int)*(__int16*)(a1 + 30);
    if (*(_WORD*)(a1 + 30) != 0) {
      goto LABEL_3;
    }
  LABEL_6:
    result = 0;
    v8 = *(_DWORD*)(a1 + 84);
    if (v8 < 0) {
      goto LABEL_24;
    }
    goto LABEL_7;
  }
  v5 = 0;
  v6 = (unsigned int)*(__int16*)(a1 + 30);
  if (*(_WORD*)(a1 + 30) == 0) {
    goto LABEL_6;
  }
LABEL_3:
  result = varmul_64_plt(v4, v6, 14);
  v8 = *(_DWORD*)(a1 + 84);
  if (v8 < 0) {
    goto LABEL_24;
  }
LABEL_7:
  v9 = *(_QWORD**)(a1 + 16);
  v10 = v8;
  if ((v8 & 1) == 0) {
    v11 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)(a1 + 40) = v11 - 4;
    v12 = *(int*)(v11 - 4);
    if (*(_WORD*)(a1 + 28) != 0) {
      *(_DWORD*)(*v9 + 4 * v12) += v5;
      *(_BYTE*)(v9[9] + v12) |= 1u;
    }
    if (*(_WORD*)(a1 + 30) != 0) {
      *(_DWORD*)(v9[1] + 4 * v12) += result;
      *(_BYTE*)(v9[9] + v12) |= 2u;
    }
    v10 = v8 - 1;
  }
  if (v8 != 0) {
    v13 = v10 + 2;
    do {
      v14 = *(_QWORD*)(a1 + 40);
      *(_QWORD*)(a1 + 40) = v14 - 4;
      v15 = *(int*)(v14 - 4);
      if (*(_WORD*)(a1 + 28) != 0) {
        *(_DWORD*)(*v9 + 4 * v15) += v5;
        *(_BYTE*)(v9[9] + v15) |= 1u;
      }
      if (*(_WORD*)(a1 + 30) != 0) {
        *(_DWORD*)(v9[1] + 4 * v15) += result;
        *(_BYTE*)(v9[9] + v15) |= 2u;
      }
      v16 = *(_QWORD*)(a1 + 40);
      *(_QWORD*)(a1 + 40) = v16 - 4;
      v17 = *(int*)(v16 - 4);
      if (*(_WORD*)(a1 + 28) != 0) {
        *(_DWORD*)(*v9 + 4 * v17) += v5;
        *(_BYTE*)(v9[9] + v17) |= 1u;
      }
      if (*(_WORD*)(a1 + 30) != 0) {
        *(_DWORD*)(v9[1] + 4 * v17) += result;
        *(_BYTE*)(v9[9] + v17) |= 2u;
      }
      v13 -= 2;
    } while (v13 > 1);
  }
LABEL_24:
  *(_DWORD*)(a1 + 84) = 0;
  return result;
}

__int64 nn_fontll_itype_42f540(__int64 a1)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v5;
  __int64 v6;
  _BOOL4 v8;
  unsigned int v9;
  __int64 (*v10)(__int64, _QWORD, _QWORD);
  _QWORD* v11;
  unsigned int v12;
  __int64 result;
  unsigned int v14;
  int v15;
  int v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  int v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned int v25;

  v1 = *(_QWORD**)(a1 + 56);
  v3 = *(_QWORD**)a1;
  v2 = *(_QWORD**)(a1 + 8);
  v6 = *(int*)(a1 + 76);
  v5 = *(int*)(a1 + 80);
  v8 = *(_QWORD**)a1 == v1 || v2 == v1 || *(_QWORD*)(a1 + 16) == (_QWORD)v1;
  v9 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(a1 + 104))(
      a1, (unsigned int)(*(_DWORD*)(*v2 + 4 * v5) - *(_DWORD*)(*v3 + 4 * v6)),
      (unsigned int)(*(_DWORD*)(v2[1] + 4 * v5) - *(_DWORD*)(v3[1] + 4 * v6)));
  v10 = *(__int64 (**)(__int64, _QWORD, _QWORD))(a1 + 112);
  v11 = *(_QWORD**)(a1 + 8);
  v12 = v9;
  if (v8) {
    result = v10(a1,
                 (unsigned int)(*(_DWORD*)(v11[2] + 4 * v5) -
                                *(_DWORD*)(v3[2] + 4 * v6)),
                 (unsigned int)(*(_DWORD*)(v11[3] + 4 * v5) -
                                *(_DWORD*)(v3[3] + 4 * v6)));
    if ((*(_DWORD*)(a1 + 84) & 0x80000000) == 0) {
      v14 = result;
      do {
        v17 = *(_QWORD*)(a1 + 40);
        if (v17 <= *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8LL)) {
          break;
        }
        *(_QWORD*)(a1 + 40) = v17 - 4;
        v18 = *(int*)(v17 - 4);
        v19 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(a1 + 112))(
            a1,
            (unsigned int)(*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16LL) +
                                      4 * v18) -
                           *(_DWORD*)(v3[2] + 4 * v6)),
            (unsigned int)(*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 24LL) +
                                      4 * v18) -
                           *(_DWORD*)(v3[3] + 4 * v6)));
        if (v14 != 0) {
          v19 = muldiv_64_plt(v12, v19, v14);
        }
        v15 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(a1 + 104))(
            a1,
            (unsigned int)(*(_DWORD*)(**(_QWORD**)(a1 + 16) + 4 * v18) -
                           *(_DWORD*)(*v3 + 4 * v6)),
            (unsigned int)(*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 8LL) +
                                      4 * v18) -
                           *(_DWORD*)(v3[1] + 4 * v6)));
        result = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(a1 + 96))(
            a1, *(_QWORD*)(a1 + 16), (unsigned int)v18, v19 - v15);
        v16 = *(_DWORD*)(a1 + 84);
        *(_DWORD*)(a1 + 84) = v16 - 1;
      } while (v16 > 0);
    }
  }
  else {
    result = v10(a1,
                 (unsigned int)(*(_DWORD*)(v11[4] + 4 * v5) -
                                *(_DWORD*)(v3[4] + 4 * v6)),
                 (unsigned int)(*(_DWORD*)(v11[5] + 4 * v5) -
                                *(_DWORD*)(v3[5] + 4 * v6)));
    if ((*(_DWORD*)(a1 + 84) & 0x80000000) == 0) {
      v20 = result;
      do {
        v23 = *(_QWORD*)(a1 + 40);
        if (v23 <= *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8LL)) {
          break;
        }
        *(_QWORD*)(a1 + 40) = v23 - 4;
        v24 = *(int*)(v23 - 4);
        v25 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(a1 + 112))(
            a1,
            (unsigned int)(*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32LL) +
                                      4 * v24) -
                           *(_DWORD*)(v3[4] + 4 * v6)),
            (unsigned int)(*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 40LL) +
                                      4 * v24) -
                           *(_DWORD*)(v3[5] + 4 * v6)));
        if (v20 != 0) {
          v25 = muldiv_64_plt(v12, v25, v20);
        }
        v21 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(a1 + 104))(
            a1,
            (unsigned int)(*(_DWORD*)(**(_QWORD**)(a1 + 16) + 4 * v24) -
                           *(_DWORD*)(*v3 + 4 * v6)),
            (unsigned int)(*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 8LL) +
                                      4 * v24) -
                           *(_DWORD*)(v3[1] + 4 * v6)));
        result = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(a1 + 96))(
            a1, *(_QWORD*)(a1 + 16), (unsigned int)v24, v25 - v21);
        v22 = *(_DWORD*)(a1 + 84);
        *(_DWORD*)(a1 + 84) = v22 - 1;
      } while (v22 > 0);
    }
  }
  *(_DWORD*)(a1 + 84) = 0;
  return result;
}

__int64 nn_fontll_itype_42f7f0(__int64 a1)
{
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  int v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  __int64 result;
  char v12;

  v1 = *(_QWORD*)(a1 + 40);
  v3 = *(_QWORD**)a1;
  v2 = *(_QWORD**)(a1 + 8);
  v5 = *(_DWORD*)(a1 + 72);
  *(_QWORD*)(a1 + 40) = v1 - 4;
  v6 = *(_DWORD*)(v1 - 4);
  *(_QWORD*)(a1 + 40) = v1 - 8;
  v7 = *(_DWORD*)(v1 - 8);
  if (v2 == *(_QWORD**)(a1 + 56)) {
    v8 = *(_DWORD*)(v3[2] + 4LL * v5);
    *(_DWORD*)(v2[2] + 4LL * (int)v7) =
        varmul_64_plt(v6, (unsigned int)*(__int16*)(a1 + 24), 14) + v8;
    v9 = *(_DWORD*)(v3[3] + 4LL * v5);
    *(_DWORD*)(v2[3] + 4LL * (int)v7) =
        varmul_64_plt(v6, (unsigned int)*(__int16*)(a1 + 26), 14) + v9;
    *(_DWORD*)(*v2 + 4LL * (int)v7) = *(_DWORD*)(v2[2] + 4LL * (int)v7);
    *(_DWORD*)(v2[1] + 4LL * (int)v7) = *(_DWORD*)(v2[3] + 4LL * (int)v7);
  }
  v10 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(a1 + 104))(
      a1,
      (unsigned int)(*(_DWORD*)(*v2 + 4LL * (int)v7) -
                     *(_DWORD*)(*v3 + 4LL * v5)),
      (unsigned int)(*(_DWORD*)(v2[1] + 4LL * (int)v7) -
                     *(_DWORD*)(v3[1] + 4LL * v5)));
  result = (*(__int64 (**)(__int64, _QWORD*, _QWORD, _QWORD))(a1 + 96))(
      a1, v2, v7, v6 - v10);
  v12 = *(_BYTE*)(a1 + 90);
  *(_DWORD*)(a1 + 76) = v5;
  *(_DWORD*)(a1 + 80) = v7;
  if ((v12 & 1) != 0) {
    *(_DWORD*)(a1 + 72) = v7;
  }
  return result;
}

__int64 nn_fontll_itype_42f920(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  int v4;
  int v5;
  int* v6;
  __int64 v7;
  int v8;
  int v9;

  v1 = result;
  if ((*(_DWORD*)(result + 84) & 0x80000000) == 0) {
    v2 = *(_QWORD**)(result + 8);
    v3 = *(int*)(result + 72);
    v4 = *(_DWORD*)(**(_QWORD**)result + 4 * v3);
    v5 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)result + 8LL) + 4 * v3);
    do {
      v6 = (int*)(*(_QWORD*)(v1 + 40) - 4LL);
      *(_QWORD*)(v1 + 40) = v6;
      v7 = *v6;
      v8 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(v1 + 104))(
          v1, (unsigned int)(*(_DWORD*)(*v2 + 4 * v7) - v4),
          (unsigned int)(*(_DWORD*)(v2[1] + 4 * v7) - v5));
      result = (*(__int64 (**)(__int64, _QWORD*, _QWORD, _QWORD))(v1 + 96))(
          v1, v2, (unsigned int)v7, (unsigned int)-v8);
      v9 = *(_DWORD*)(v1 + 84);
      *(_DWORD*)(v1 + 84) = v9 - 1;
    } while (v9 > 0);
  }
  *(_DWORD*)(v1 + 84) = 0;
  return result;
}

__int64 nn_fontll_itype_42f9e0(__int64 a1)
{
  __int64 (*v1)(__int64, _QWORD);
  _QWORD* v2;
  unsigned int* v4;
  __int64 v5;
  unsigned int v6;
  int* v7;
  __int64 v8;
  _QWORD* v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  __int64 v14;

  v1 = *(__int64 (**)(__int64, _QWORD))(a1 + 120);
  v2 = *(_QWORD**)a1;
  v4 = (unsigned int*)(*(_QWORD*)(a1 + 40) - 4LL);
  v5 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 40) = v4;
  v6 = v1(a1, *v4);
  v7 = (int*)(*(_QWORD*)(a1 + 40) - 4LL);
  *(_QWORD*)(a1 + 40) = v7;
  v8 = *v7;
  v9 = *(_QWORD**)(a1 + 56);
  *(_DWORD*)(a1 + 72) = v8;
  *(_DWORD*)(a1 + 76) = v8;
  if (v2 == v9) {
    v10 = varmul_64_plt(v6, (unsigned int)*(__int16*)(a1 + 24), 14);
    *(_DWORD*)(v2[2] + 4 * v8) = v10;
    *(_DWORD*)(*v2 + 4 * v8) = v10;
    v11 = varmul_64_plt(v6, (unsigned int)*(__int16*)(a1 + 26), 14);
    *(_DWORD*)(v2[3] + 4 * v8) = v11;
    *(_DWORD*)(v2[1] + 4 * v8) = v11;
  }
  v12 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(a1 + 104))(
      a1, *(unsigned int*)(*v2 + 4 * v8), *(unsigned int*)(v2[1] + 4 * v8));
  if ((*(_BYTE*)(a1 + 90) & 1) != 0) {
    v13 = v6 - v12;
    if ((int)(v6 - v12) < 0) {
      v13 = v12 - v6;
    }
    if (v13 <= *(_DWORD*)(v5 + 112)) {
      v14 = v6;
    }
    else {
      v14 = v12;
    }
    v6 = RoundFuncCall_plt(*(unsigned int*)(v5 + 136), v14,
                           *(unsigned int*)(*(_QWORD*)(a1 + 64) + 44LL), a1);
  }
  return (*(__int64 (**)(__int64, _QWORD*, _QWORD, _QWORD))(a1 + 96))(
      a1, v2, (unsigned int)v8, v6 - v12);
}

__int64 nn_fontll_itype_42fb00(__int64 result)
{
  _DWORD* v1;
  unsigned __int8* v2;
  unsigned __int8* v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  _DWORD* v9;
  unsigned __int8* v10;

  v1 = *(_DWORD**)(result + 40);
  v2 = *(unsigned __int8**)(result + 48);
  v3 = v2 + 1;
  *(_QWORD*)(result + 48) = v2 + 1;
  v4 = *v2;
  if (v4 == 0) {
    goto LABEL_6;
  }
  v5 = v4 & 7;
  if ((v4 & 7) != 0) {
    v6 = v4 - v5;
    do {
      v7 = *v3++;
      --v5;
      *v1++ = v7;
    } while (v5 != 0);
    if (v4 < 8) {
      goto LABEL_6;
    }
  }
  else {
    v6 = v4;
    if (v4 < 8) {
    LABEL_6:
      *(_QWORD*)(result + 40) = v1;
      *(_QWORD*)(result + 48) = v3;
      return result;
    }
  }
  v8 = v6 - 1;
  do {
    v9 = v1 + 8;
    v8 -= 8;
    *v1 = *v3;
    v1[1] = v3[1];
    v1[2] = v3[2];
    v1[3] = v3[3];
    v1[4] = v3[4];
    v1[5] = v3[5];
    v1[6] = v3[6];
    v10 = v3 + 8;
    v1[7] = v3[7];
    v3 += 8;
    v1 += 8;
  } while (v8 < 0xFFFFFFFE);
  *(_QWORD*)(result + 40) = v9;
  *(_QWORD*)(result + 48) = v10;
  return result;
}

__int64 nn_fontll_itype_42fbe0(__int64 result)
{
  unsigned __int8* v1;
  int* v2;
  unsigned __int8* v3;
  unsigned __int8* v4;
  unsigned int v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned __int8* v9;
  _DWORD* v10;

  v2 = *(int**)(result + 40);
  v3 = *(unsigned __int8**)(result + 48);
  v4 = v3 + 1;
  *(_QWORD*)(result + 48) = v3 + 1;
  v5 = *v3;
  if (v5 != 0) {
    v6 = v5 & 7;
    if ((v5 & 7) != 0) {
      v7 = v5 - v6;
      do {
        --v6;
        v1 = v4 + 2;
        *v2++ = (__int16)(*v4 << 8) | v4[1];
        v4 += 2;
      } while (v6 != 0);
      v4 = v1;
      if (v5 < 8) {
        goto LABEL_6;
      }
    }
    else {
      v7 = v5;
      if (v5 < 8) {
      LABEL_6:
        *(_QWORD*)(result + 40) = v2;
        *(_QWORD*)(result + 48) = v1;
        return result;
      }
    }
    v8 = v7 - 1;
    do {
      v8 -= 8;
      *v2 = (__int16)(*v4 << 8) | v4[1];
      v2[1] = (__int16)(v4[2] << 8) | v4[3];
      v2[2] = (__int16)(v4[4] << 8) | v4[5];
      v2[3] = (__int16)(v4[6] << 8) | v4[7];
      v2[4] = (__int16)(v4[8] << 8) | v4[9];
      v2[5] = (__int16)(v4[10] << 8) | v4[11];
      v2[6] = (__int16)(v4[12] << 8) | v4[13];
      v9 = v4 + 16;
      v10 = v2 + 8;
      v2[7] = (__int16)(v4[14] << 8) | v4[15];
      v4 += 16;
      v2 += 8;
    } while (v8 < 0xFFFFFFFE);
    *(_QWORD*)(result + 40) = v10;
    *(_QWORD*)(result + 48) = v9;
  }
  else {
    *(_QWORD*)(result + 40) = v2;
    *(_QWORD*)(result + 48) = v4;
  }
  return result;
}

#pragma GCC visibility pop
