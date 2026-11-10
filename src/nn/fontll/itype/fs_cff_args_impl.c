#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 FSS_free_plt(_QWORD, _QWORD);
__int64 FsScratchSpace_release_plt(_QWORD, _QWORD, _QWORD);
__int64 FsScratchSpace_reserve_plt(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_41efe0(_QWORD, _QWORD, _QWORD);
__int64 apply_transMatrix_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fnt_Execute_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fs_cff_args_41e120_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                                _QWORD) __asm__("fs_cff_args_41e120");
__int64 fs_cff_args_41e2c0_alt1(_QWORD, _QWORD, _QWORD,
                                _QWORD) __asm__("fs_cff_args_41e2c0");
__int64 fs_cff_args_41e840_alt1(_QWORD, _QWORD,
                                _QWORD) __asm__("fs_cff_args_41e840");
__int64 fsg_CopyElementBackwards_plt(_QWORD);
__int64 fsg_RunPreProgram_plt(_QWORD, _QWORD);
__int64 fsg_SetUpElement_plt(_QWORD, _QWORD, _QWORD);
__int64 fsg_WorkSpaceSetOffsets_plt(_QWORD, _QWORD);
__int64 getFDindex_plt(void);
__int64 get_glyph_metrics_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 loadGlyph_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_fontll_itype_4216f0(_QWORD, _QWORD);
__int64 nn_fontll_itype_422040(unsigned __int64*, int*, __int64,
                               unsigned __int64);
__int64 nn_fontll_itype_422040_alt1(_QWORD, _QWORD, _QWORD,
                                    _QWORD) __asm__("nn_fontll_itype_422040");
__int64 resetCIDdicts_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 scale_char_plt(_QWORD, _QWORD);
__int64 ttf_read_buf_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ttf_read_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 vardiv_64_plt(_QWORD, _QWORD, _QWORD);
__int64 which_script_plt(_QWORD, _QWORD, _QWORD);
__int64 getFDindex(__int64 a1, __int64 a2, __int64 a3, int a4);
__int64 resetCIDdicts(__int64 a1, __int64 a2, unsigned int* a3);
__int64 fs_cff_args_41e120(__int64 a1, __int64 a2, __int64 a3, signed int a4,
                           _DWORD* a5);
__int64 fs_cff_args_41e2c0(__int64 result, int a2, unsigned __int8* a3,
                           __int64 a4);
__int64 fs_cff_args_41e840(__int64 result, int a2, __int64 a3);
__int64 loadGlyph(__int64 a1, __int64 a2, __int64 a3, unsigned int a4);
__int64 cff_GridFit(__int64 a1, __int64 a2);

__int64 getFDindex(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7;
  int v12;
  int v13;
  unsigned int v14;
  int v15;
  int v16;
  _WORD v17[2];
  unsigned __int16 v18;
  _BYTE v21[4];
  _BYTE v22[4];

  if (a4 >= (signed __int32)*(_DWORD*)(a3 + 60)) {
    return 0;
  }
  v7 = *(unsigned int*)(a3 + 68);
  v22[0] = 0;
  v21[0] = 0;
  ttf_read_buf_plt(a1, a2, v7, 1, v22);
  if (v22[0] == 3) {
    v12 = *(_DWORD*)(a3 + 68);
    v18 = 0;
    v17[0] = 0;
    ttf_read_buf_plt(a1, a2, (unsigned int)(v12 + 1), 2, &v18);
    v21[0] = 0;
    v13 = bswap32(v18);
    v18 = HIWORD(v13);
    if (v13 >> 16 >= 1) {
      v14 = v12 + 3;
      v15 = 0;
      do {
        ttf_read_buf_plt(a1, a2, v14, 2, v17);
        v16 = bswap32(v17[0]);
        v17[0] = HIWORD(v16);
        if (a4 < v16 >> 16) {
          break;
        }
        ttf_read_buf_plt(a1, a2, v14 + 2, 1, v21);
        ++v15;
        v14 += 3;
      } while (v15 < (__int16)v18);
      return v21[0];
    }
  }
  else if (v22[0] == 0) {
    ttf_read_buf_plt(a1, a2, (unsigned int)(a4 + *(_DWORD*)(a3 + 68) + 1), 1,
                     v21);
    return v21[0];
  }
  return 0;
}

__int64 resetCIDdicts(__int64 a1, __int64 a2, unsigned int* a3)
{
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  unsigned int v13;

  v6 = getFDindex_plt();
  if (a3[18] != v6) {
    v7 = v6;
    v8 = fs_cff_args_41e120_alt1(a1, a2, a3[16], v6, &v13);
    if (v8 != 0) {
      v9 = v8;
      fs_cff_args_41e2c0_alt1(a2, v13, v8, a3 + 14);
      a3[18] = v7;
      FsScratchSpace_release_plt(*(_QWORD*)(a1 + 128) + 16792LL, a1, v9);
      v10 = a3[39];
      if (v10 != 0) {
        v11 = ttf_read_plt(a1, a2, a3[38] + *(_DWORD*)(a2 + 272), v10);
        fs_cff_args_41e840_alt1(v11, v10, a3 + 44);
        FSS_free_plt(a1, v11);
      }
    }
  }
  return 0;
}

__int64 fs_cff_args_41e120(__int64 a1, __int64 a2, __int64 a3, signed int a4,
                           _DWORD* a5)
{
  int v7;
  __int64 v10;
  signed int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  __int16* v18;
  unsigned __int8* v19;
  int v20;
  __int64 v21;
  __int16 v23;
  __int64 v24;

  *a5 = 0;
  v7 = a3;
  v24 = 0;
  ttf_read_buf_plt(a1, a2, a3, 3, &v24);
  v10 = BYTE2(v24);
  v11 = __rev16((unsigned __int16)v24);
  ttf_read_buf_plt(a1, a2, v7 + a4 * (unsigned int)BYTE2(v24) + 3, 8, &v24);
  if (v11 < a4) {
    return 0;
  }
  if ((_DWORD)v10 == 0) {
    v16 = 0;
    v15 = 0;
    goto LABEL_13;
  }
  v13 = v10 & 3;
  if ((unsigned int)v10 < 4) {
    v14 = 0;
    v15 = 0;
    v16 = 0;
    if ((v10 & 3) == 0) {
      goto LABEL_13;
    }
    goto LABEL_11;
  }
  v17 = 0;
  v18 = &v23;
  do {
    v17 -= 4;
    v18 += 2;
  } while (-(__int64)((unsigned __int8)v10 & 0xFC) != v17);
  v14 = -v17;
  v16 = bswap32(*(_DWORD*)(v18 - 1));
  v15 = bswap32(*(_DWORD*)((char*)v18 + v10 - 2));
  if ((v10 & 3) != 0) {
  LABEL_11:
    v19 = (unsigned __int8*)&v24 + v14;
    do {
      --v13;
      v16 = *v19 | (v16 << 8);
      v20 = v19[v10];
      ++v19;
      v15 = v20 | (v15 << 8);
    } while (v13 != 0);
  }
LABEL_13:
  v21 = (unsigned int)(v15 - v16);
  *a5 = v21;
  v12 = FsScratchSpace_reserve_plt(*(_QWORD*)(a1 + 128) + 16792LL, a1, v21);
  if (v12 != 0) {
    ttf_read_buf_plt(a1, a2, (unsigned int)(v7 + v10 + v10 * v11 + v16 + 2),
                     (unsigned int)*a5, v12);
  }
  return v12;
}

__int64 fs_cff_args_41e2c0(__int64 result, int a2, unsigned __int8* a3,
                           __int64 a4)
{
  unsigned __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
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
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  unsigned __int8* v38;
  int v39;
  struct {
    __int64 v40;
    __int64 v41;
    __int64 v42;
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
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
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
  } v40_;

  v39 = 0;
  if (a3 != nullptr) {
    v38 = a3;
    if (a2 >= 1) {
      v5 = (unsigned __int64)&a3[a2];
      v6 = result;
      v40_.v68 = 0;
      v40_.v69 = 0;
      v40_.v66 = 0;
      v40_.v67 = 0;
      v40_.v64 = 0;
      v40_.v65 = 0;
      v40_.v62 = 0;
      v40_.v63 = 0;
      v40_.v60 = 0;
      v40_.v61 = 0;
      v40_.v58 = 0;
      v40_.v59 = 0;
      v40_.v56 = 0;
      v40_.v57 = 0;
      v40_.v54 = 0;
      v40_.v55 = 0;
      v40_.v52 = 0;
      v40_.v53 = 0;
      v40_.v50 = 0;
      v40_.v51 = 0;
      v40_.v48 = 0;
      v40_.v49 = 0;
      v40_.v46 = 0;
      v40_.v47 = 0;
      v40_.v44 = 0;
      v40_.v45 = 0;
      v40_.v42 = 0;
      v40_.v43 = 0;
      v40_.v40 = 0;
      v40_.v41 = 0;
      do {
        result = nn_fontll_itype_422040((unsigned __int64*)&v38, &v39,
                                        (__int64)&v40_.v40, v5);
        if ((unsigned __int16)result > 0xFu) {
          if ((unsigned __int16)result > 0x11u) {
            if ((unsigned __int16)result == 18) {
              v10 = (int)v40_.v40 >> 16;
              if ((unsigned __int8)v40_.v64 != 2) {
                v10 = v40_.v40;
              }
              if ((unsigned __int8)v40_.v64 == 3) {
                v11 = (int)v40_.v40 >> 30;
              }
              else {
                v11 = v10;
              }
              v12 = SHIDWORD(v40_.v40) >> 16;
              if (BYTE1(v40_.v64) != 2) {
                v12 = HIDWORD(v40_.v40);
              }
              if (BYTE1(v40_.v64) == 3) {
                v13 = SHIDWORD(v40_.v40) >> 30;
              }
              else {
                v13 = v12;
              }
              *(_DWORD*)(a4 + 96) = v13;
              *(_DWORD*)(a4 + 100) = v11;
            }
            else if ((unsigned __int16)result == 0xFFFF) {
              return result;
            }
          }
          else if ((unsigned __int16)result == 16) {
            v7 = v40_.v40;
            if ((unsigned __int8)v40_.v64 == 2) {
              v7 = (int)v40_.v40 >> 16;
            }
            if ((unsigned __int8)v40_.v64 == 3) {
              v7 = (int)v40_.v40 >> 30;
            }
            *(_DWORD*)(a4 + 76) = v7;
          }
          else if ((unsigned __int16)result == 17) {
            v8 = v40_.v40;
            if ((unsigned __int8)v40_.v64 == 2) {
              v8 = (int)v40_.v40 >> 16;
            }
            if ((unsigned __int8)v40_.v64 == 3) {
              v8 = (int)v40_.v40 >> 30;
            }
            *(_DWORD*)(a4 + 80) = v8;
          }
          goto LABEL_9;
        }
        if ((unsigned __int16)result != 5) {
          if ((unsigned __int16)result != 12) {
            if ((unsigned __int16)result == 15) {
              v9 = v40_.v40;
              if ((unsigned __int8)v40_.v64 == 2) {
                v9 = (int)v40_.v40 >> 16;
              }
              if ((unsigned __int8)v40_.v64 == 3) {
                v9 = (int)v40_.v40 >> 30;
              }
              *(_DWORD*)(a4 + 72) = v9;
            }
            goto LABEL_9;
          }
          v21 = *v38++;
          if (v21 > 33) {
            switch (v21) {
            case '"':
              v25 = v40_.v40;
              if ((unsigned __int8)v40_.v64 == 2) {
                v25 = (int)v40_.v40 >> 16;
              }
              if ((unsigned __int8)v40_.v64 == 3) {
                v25 = (int)v40_.v40 >> 30;
              }
              *(_DWORD*)(a4 + 4) = v25;
              break;
            case '$':
              v37 = v40_.v40;
              if ((unsigned __int8)v40_.v64 == 3) {
                v37 = (int)v40_.v40 >> 30;
              }
              else if ((unsigned __int8)v40_.v64 == 2) {
                v37 = (int)v40_.v40 >> 16;
              }
              *(_DWORD*)(a4 + 8) = v37;
              *(_DWORD*)(a4 + 8) = *(_DWORD*)(v6 + 272) + v37;
              break;
            case '%':
              v23 = v40_.v40;
              if ((unsigned __int8)v40_.v64 == 3) {
                v23 = (int)v40_.v40 >> 30;
              }
              else if ((unsigned __int8)v40_.v64 == 2) {
                v23 = (int)v40_.v40 >> 16;
              }
              *(_DWORD*)(a4 + 12) = v23;
              *(_DWORD*)(a4 + 12) = *(_DWORD*)(v6 + 272) + v23;
              break;
            default:
              break;
            }
            goto LABEL_9;
          }
          if (v21 == 6) {
            v24 = v40_.v40;
            if ((unsigned __int8)v40_.v64 == 2) {
              v24 = (int)v40_.v40 >> 16;
            }
            if ((unsigned __int8)v40_.v64 == 3) {
              v24 = (int)v40_.v40 >> 30;
            }
            *(_DWORD*)(a4 + 28) = v24;
            goto LABEL_9;
          }
          if (v21 != 7) {
            if (v21 == 30) {
              LOWORD(v22) = v40_.v40;
              if ((unsigned __int8)v40_.v64 == 3) {
                v22 = (int)v40_.v40 >> 30;
              }
              else if ((unsigned __int8)v40_.v64 == 2) {
                v22 = (int)v40_.v40 >> 16;
              }
              *(_WORD*)a4 = v22;
              *(_DWORD*)(a4 + 16) = -1;
            }
            goto LABEL_9;
          }
          v26 = v40_.v40;
          if ((unsigned __int8)v40_.v64 == 2) {
            *(_DWORD*)(a4 + 32) = (_DWORD)v40_.v40 << 14;
            v27 = HIDWORD(v40_.v40);
            v28 = BYTE1(v40_.v64);
            if (BYTE1(v40_.v64) != 2) {
              goto LABEL_86;
            }
          }
          else {
            if ((unsigned __int8)v40_.v64 == 1) {
              v26 = (_DWORD)v40_.v40 << 30;
            }
            *(_DWORD*)(a4 + 32) = v26;
            v27 = HIDWORD(v40_.v40);
            v28 = BYTE1(v40_.v64);
            if (BYTE1(v40_.v64) != 2) {
            LABEL_86:
              if (v28 == 1) {
                v27 <<= 30;
              }
              *(_DWORD*)(a4 + 36) = v27;
              v29 = v40_.v41;
              v30 = BYTE2(v40_.v64);
              if (BYTE2(v40_.v64) != 2) {
              LABEL_89:
                if (v30 == 1) {
                  v29 <<= 30;
                }
                *(_DWORD*)(a4 + 40) = v29;
                v31 = HIDWORD(v40_.v41);
                v32 = BYTE3(v40_.v64);
                if (BYTE3(v40_.v64) != 2) {
                LABEL_92:
                  if (v32 == 1) {
                    v31 <<= 30;
                  }
                  *(_DWORD*)(a4 + 44) = v31;
                  v33 = v40_.v42;
                  v34 = BYTE4(v40_.v64);
                  if (BYTE4(v40_.v64) != 2) {
                    goto LABEL_95;
                  }
                LABEL_111:
                  *(_DWORD*)(a4 + 48) = v33 << 14;
                  v35 = HIDWORD(v40_.v42);
                  v36 = BYTE5(v40_.v64);
                  if (BYTE5(v40_.v64) == 2) {
                    goto LABEL_112;
                  }
                  goto LABEL_98;
                }
              LABEL_110:
                *(_DWORD*)(a4 + 44) = v31 << 14;
                v33 = v40_.v42;
                v34 = BYTE4(v40_.v64);
                if (BYTE4(v40_.v64) == 2) {
                  goto LABEL_111;
                }
              LABEL_95:
                if (v34 == 1) {
                  v33 <<= 30;
                }
                *(_DWORD*)(a4 + 48) = v33;
                v35 = HIDWORD(v40_.v42);
                v36 = BYTE5(v40_.v64);
                if (BYTE5(v40_.v64) == 2) {
                LABEL_112:
                  v35 <<= 14;
                LABEL_113:
                  *(_DWORD*)(a4 + 52) = v35;
                  goto LABEL_9;
                }
              LABEL_98:
                if (v36 != 1) {
                  goto LABEL_113;
                }
                *(_DWORD*)(a4 + 52) = v35 << 30;
                goto LABEL_9;
              }
            LABEL_109:
              *(_DWORD*)(a4 + 40) = v29 << 14;
              v31 = HIDWORD(v40_.v41);
              v32 = BYTE3(v40_.v64);
              if (BYTE3(v40_.v64) != 2) {
                goto LABEL_92;
              }
              goto LABEL_110;
            }
          }
          *(_DWORD*)(a4 + 36) = v27 << 14;
          v29 = v40_.v41;
          v30 = BYTE2(v40_.v64);
          if (BYTE2(v40_.v64) != 2) {
            goto LABEL_89;
          }
          goto LABEL_109;
        }
        v15 = v40_.v40;
        v14 = HIDWORD(v40_.v40);
        if ((unsigned __int8)v40_.v64 == 2) {
          v15 = (int)v40_.v40 >> 16;
        }
        if ((unsigned __int8)v40_.v64 == 3) {
          v16 = (int)v40_.v40 >> 30;
        }
        else {
          v16 = v15;
        }
        *(_DWORD*)(a4 + 56) = v16;
        if (BYTE1(v40_.v64) == 3) {
          *(_DWORD*)(a4 + 60) = v14 >> 30;
          v17 = v40_.v41;
          v18 = BYTE2(v40_.v64);
          if (BYTE2(v40_.v64) != 3) {
            goto LABEL_48;
          }
        }
        else {
          if (BYTE1(v40_.v64) == 2) {
            v14 >>= 16;
          }
          *(_DWORD*)(a4 + 60) = v14;
          v17 = v40_.v41;
          v18 = BYTE2(v40_.v64);
          if (BYTE2(v40_.v64) != 3) {
          LABEL_48:
            if (v18 == 2) {
              v17 >>= 16;
            }
            *(_DWORD*)(a4 + 64) = v17;
            v19 = HIDWORD(v40_.v41);
            v20 = BYTE3(v40_.v64);
            if (BYTE3(v40_.v64) == 3) {
            LABEL_68:
              v19 >>= 30;
            LABEL_69:
              *(_DWORD*)(a4 + 68) = v19;
              goto LABEL_9;
            }
            goto LABEL_51;
          }
        }
        *(_DWORD*)(a4 + 64) = v17 >> 30;
        v19 = HIDWORD(v40_.v41);
        v20 = BYTE3(v40_.v64);
        if (BYTE3(v40_.v64) == 3) {
          goto LABEL_68;
        }
      LABEL_51:
        if (v20 != 2) {
          goto LABEL_69;
        }
        *(_DWORD*)(a4 + 68) = v19 >> 16;
      LABEL_9:
        v39 = 0;
      } while ((unsigned __int64)v38 < v5);
    }
    *(_DWORD*)(a4 + 36) =
        vardiv_64_plt(*(unsigned int*)(a4 + 36), *(unsigned int*)(a4 + 32), 30);
    *(_DWORD*)(a4 + 40) =
        vardiv_64_plt(*(unsigned int*)(a4 + 40), *(unsigned int*)(a4 + 32), 30);
    *(_DWORD*)(a4 + 44) =
        vardiv_64_plt(*(unsigned int*)(a4 + 44), *(unsigned int*)(a4 + 32), 30);
    *(_DWORD*)(a4 + 48) =
        vardiv_64_plt(*(unsigned int*)(a4 + 48), *(unsigned int*)(a4 + 32), 30);
    result =
        vardiv_64_plt(*(unsigned int*)(a4 + 52), *(unsigned int*)(a4 + 32), 30);
    *(_DWORD*)(a4 + 52) = result;
    *(_DWORD*)(a4 + 32) = 0x40000000;
  }
  return result;
}

__int64 fs_cff_args_41e840(__int64 result, int a2, __int64 a3)
{
  unsigned __int64 v3;
  int v5;
  int v6;
  int v7;
  unsigned __int64 v8;
  _QWORD v9[24];
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;

  v16 = 0;
  v8 = result;
  *(_QWORD*)a3 = 0;
  *(_DWORD*)(a3 + 8) = 0;
  if (a2 >= 1) {
    v3 = result + a2;
    v14 = 0;
    v15 = 0;
    v12 = 0;
    v13 = 0;
    v10 = 0;
    v11 = 0;
    memset(v9, 0, sizeof(v9));
    do {
      result = nn_fontll_itype_422040_alt1(&v8, &v16, v9, v3);
      switch ((unsigned __int16)result) {
      case 0x15u:
        v7 = v9[0];
        if ((unsigned __int8)v10 == 2) {
          v7 = SLODWORD(v9[0]) >> 16;
        }
        if ((unsigned __int8)v10 == 3) {
          v7 = SLODWORD(v9[0]) >> 30;
        }
        *(_DWORD*)(a3 + 8) = v7;
        break;
      case 0x14u:
        v5 = v9[0];
        if ((unsigned __int8)v10 == 2) {
          v5 = SLODWORD(v9[0]) >> 16;
        }
        if ((unsigned __int8)v10 == 3) {
          v5 = SLODWORD(v9[0]) >> 30;
        }
        *(_DWORD*)(a3 + 4) = v5;
        break;
      case 0x13u:
        v6 = v9[0];
        if ((unsigned __int8)v10 == 2) {
          v6 = SLODWORD(v9[0]) >> 16;
        }
        if ((unsigned __int8)v10 == 3) {
          v6 = SLODWORD(v9[0]) >> 30;
        }
        *(_DWORD*)a3 = v6;
        break;
      default:
        break;
      }
      v16 = 0;
    } while (v8 < v3);
  }
  return result;
}

__int64 loadGlyph(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned int v31;
  unsigned int v32;
  __int64 v33;
  _BYTE* v34;
  int* v35;
  int* v36;
  int* v37;
  int* v38;
  int v39;
  int v40;
  _BYTE* v41;
  char v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  _BYTE* v65;
  int* v66;
  int* v67;
  int v68;
  int v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  _DWORD* v74;
  _QWORD v76[4];
  __int64 v77;
  int v78;
  int v79;

  v4 = *(_QWORD*)(a3 + 8);
  v5 = *(_QWORD*)(a2 + 264);
  if (*(__int16*)(a3 + 516) < (int)*(unsigned __int16*)(v4 + 6) ||
      *(__int16*)(a3 + 514) < (int)*(unsigned __int16*)(v4 + 8)) {
    fsg_WorkSpaceSetOffsets_plt(a1, a3);
    fsg_SetUpElement_plt(a1, a3, 1);
    v10 = *(_QWORD*)(a3 + 8);
    *(_WORD*)(a3 + 514) = *(_WORD*)(v10 + 8);
    *(_WORD*)(a3 + 516) = *(_WORD*)(v10 + 6);
  }
  *(_DWORD*)(a3 + 976) = 0;
  *(_DWORD*)(a3 + 968) = 0;
  *(_WORD*)(a3 + 424) = 0;
  *(_DWORD*)(a3 + 1204) = 0;
  *(_QWORD*)(a3 + 1172) = 0;
  *(_QWORD*)(a3 + 1180) = 0;
  *(_QWORD*)(a3 + 1188) = 0;
  *(_QWORD*)(a3 + 1196) = 0;
  **(_WORD**)(a3 + 400) = 0;
  **(_WORD**)(a3 + 408) = 0;
  if (*(_WORD*)(v5 + 56) == 0 ||
      (resetCIDdicts_plt(a1, a2, v5, a4), *(_DWORD*)(a1 + 72) == 0)) {
    v11 = *(_DWORD*)(a2 + 272);
    v12 = *(_DWORD*)(v5 + 136);
    v79 = 0;
    v13 = fs_cff_args_41e120(a1, a2, (unsigned int)(v12 + v11), a4, &v79);
    if (v13 != 0 && v79 >= 1) {
      v15 = v13;
      v16 = SdkRoutine_41efe0(a1, a2, v13);
      if (v16 != 0) {
        *(_DWORD*)(a1 + 72) = v16;
        FSS_free_plt(a1, v15);
        return 0;
      }
      v17 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 40LL) + 16LL);
      v18 = *(_DWORD*)(a3 + 976);
      v19 = *(__int16*)(v17 + 424);
      if (*(_WORD*)(v17 + 424) != 0 && v18 != 0) {
        v21 = v18;
        v22 = *(_QWORD*)(v17 + 376);
        v23 = *(_DWORD*)(a3 + 1188);
        if (*(_DWORD*)(v22 + 4LL * ((int)v21 - 1)) != v23 ||
            *(_DWORD*)(*(_QWORD*)(v17 + 384) + 4LL * ((int)v21 - 1)) !=
                *(_DWORD*)(a3 + 1192)) {
          if ((int)v21 + 1 >= *(__int16*)(v17 + 516)) {
            nn_fontll_itype_4216f0(a1, 1);
            if (*(_DWORD*)(a1 + 72) != 0) {
              goto LABEL_23;
            }
            v23 = *(_DWORD*)(a3 + 1188);
            v22 = *(_QWORD*)(v17 + 376);
          }
          *(_DWORD*)(v22 + 4 * v21) = v23;
          *(_DWORD*)(*(_QWORD*)(v17 + 384) + 4 * v21) = *(_DWORD*)(a3 + 1192);
          *(_BYTE*)(*(_QWORD*)(v17 + 392) + v21) = 1;
          *(_WORD*)(*(_QWORD*)(v17 + 408) + 2 * v19 - 2) = v21;
          ++*(_DWORD*)(a3 + 976);
        }
      }
      *(_DWORD*)(a1 + 72) = 0;
    LABEL_23:
      FsScratchSpace_release_plt(*(_QWORD*)(a1 + 128) + 16792LL, a1, v15);
      v24 = *(__int16*)(a3 + 424);
      if (v24 >= 1) {
        v25 = 0;
        do {
          v26 = *(unsigned __int16*)(*(_QWORD*)(a3 + 400) + 2 * v25);
          v27 = *(unsigned __int16*)(*(_QWORD*)(a3 + 408) + 2 * v25);
          if ((int)v27 - (int)v26 >= -1) {
            v28 = *(_QWORD*)(a3 + 376);
            v29 = *(_QWORD*)(a3 + 384);
            v30 = *(_QWORD*)(a3 + 392);
            v31 = ((int)v27 - (int)v26) / 2;
            v32 = v31 + 1;
            if (v31 >= 7) {
              v33 = 0;
              v34 = (_BYTE*)(v30 + v27 - 3);
              v35 = (int*)(v29 + 4 * v27 - 12);
              v36 = (int*)(v28 + 4 * v27 - 12);
              v37 = (int*)(v28 + 4 * v26 + 16);
              v38 = (int*)(v29 + 4 * v26 + 16);
              do {
                v39 = *(v37 - 4);
                *(v37 - 4) = v36[3];
                v36[3] = v39;
                v40 = *(v38 - 4);
                *(v38 - 4) = v35[3];
                v35[3] = v40;
                v41 = (_BYTE*)(v30 + v26 + 3 + v33);
                v33 += 8;
                v42 = *(v41 - 3);
                *(v41 - 3) = v34[3];
                v34[3] = v42;
                v43 = *(v37 - 3);
                *(v37 - 3) = v36[2];
                v36[2] = v43;
                v44 = *(v38 - 3);
                *(v38 - 3) = v35[2];
                v35[2] = v44;
                LOBYTE(v44) = *(v41 - 2);
                *(v41 - 2) = v34[2];
                v34[2] = v44;
                v45 = *(v37 - 2);
                *(v37 - 2) = v36[1];
                v36[1] = v45;
                v46 = *(v38 - 2);
                *(v38 - 2) = v35[1];
                v35[1] = v46;
                LOBYTE(v46) = *(v41 - 1);
                *(v41 - 1) = v34[1];
                v34[1] = v46;
                v47 = *(v37 - 1);
                *(v37 - 1) = *v36;
                *v36 = v47;
                v48 = *(v38 - 1);
                *(v38 - 1) = *v35;
                *v35 = v48;
                LOBYTE(v48) = *v41;
                *v41 = *v34;
                *v34 = v48;
                v49 = *v37;
                *v37 = *(v36 - 1);
                *(v36 - 1) = v49;
                v50 = *v38;
                *v38 = *(v35 - 1);
                *(v35 - 1) = v50;
                LOBYTE(v50) = v41[1];
                v41[1] = *(v34 - 1);
                *(v34 - 1) = v50;
                v51 = v37[1];
                v37[1] = *(v36 - 2);
                *(v36 - 2) = v51;
                v52 = v38[1];
                v38[1] = *(v35 - 2);
                *(v35 - 2) = v52;
                LOBYTE(v52) = v41[2];
                v41[2] = *(v34 - 2);
                *(v34 - 2) = v52;
                v53 = v37[2];
                v37[2] = *(v36 - 3);
                *(v36 - 3) = v53;
                v54 = v38[2];
                v38[2] = *(v35 - 3);
                *(v35 - 3) = v54;
                LOBYTE(v54) = v41[3];
                v41[3] = *(v34 - 3);
                *(v34 - 3) = v54;
                v55 = v37[3];
                v37[3] = *(v36 - 4);
                *(v36 - 4) = v55;
                v36 -= 8;
                v37 += 8;
                v56 = v38[3];
                v38[3] = *(v35 - 4);
                *(v35 - 4) = v56;
                v35 -= 8;
                v38 += 8;
                LOBYTE(v56) = v41[4];
                v41[4] = *(v34 - 4);
                *(v34 - 4) = v56;
                v34 -= 8;
              } while ((v32 & 0x7FFFFFF8) != v33);
            }
            else {
              v33 = 0;
            }
            v57 = v32 & 7;
            if ((v32 & 7) != 0) {
              v58 = v27 - v33;
              v59 = 0;
              v60 = 4 * v27 - 4 * v33;
              v61 = v33 + v26;
              v62 = v30 + v58;
              v63 = v29 + v60;
              v64 = v28 + v60;
              v65 = (_BYTE*)(v30 + v61);
              v66 = (int*)(v29 + 4 * v61);
              v67 = (int*)(v28 + 4 * v61);
              do {
                v68 = *v67;
                *v67++ = *(_DWORD*)(v64 + 4 * v59);
                *(_DWORD*)(v64 + 4 * v59) = v68;
                v69 = *v66;
                *v66++ = *(_DWORD*)(v63 + 4 * v59);
                *(_DWORD*)(v63 + 4 * v59) = v69;
                LOBYTE(v69) = *v65;
                *v65++ = *(_BYTE*)(v62 + v59);
                *(_BYTE*)(v62 + v59--) = v69;
              } while (-v57 != v59);
            }
            LOWORD(v24) = *(_WORD*)(a3 + 424);
          }
          ++v25;
        } while (v25 < (__int16)v24);
      }
      v70 = *(int*)(a3 + 976);
      *(_DWORD*)(*(_QWORD*)(a3 + 376) + 4 * v70) = 0;
      *(_DWORD*)(*(_QWORD*)(a3 + 384) + 4 * v70) = 0;
      v71 = *(int*)(a3 + 976) + 1LL;
      if (*(_DWORD*)(a3 + 1184) != 0) {
        *(_DWORD*)(*(_QWORD*)(a3 + 376) + 4 * v71) =
            *(_DWORD*)(v5 + 184) + *(_DWORD*)(a3 + 1204);
        *(_DWORD*)(*(_QWORD*)(a3 + 384) + 4 * v71) = 0;
        if ((*(_BYTE*)(a1 + 78) & 1) == 0) {
          return 0;
        }
      }
      else {
        *(_DWORD*)(*(_QWORD*)(a3 + 376) + 4 * v71) = *(_DWORD*)(v5 + 180);
        *(_DWORD*)(*(_QWORD*)(a3 + 384) + 4 * v71) = 0;
        if ((*(_BYTE*)(a1 + 78) & 1) == 0) {
          return 0;
        }
      }
      v72 = *(_QWORD*)(a3 + 376);
      v73 = *(int*)(a3 + 976);
      v78 = 0;
      v74 = (_DWORD*)(v72 + 4 * v73);
      v77 = 0;
      memset(v76, 0, sizeof(v76));
      LODWORD(v73) = (v74[1] + *v74) / 2;
      v74[2] = v73;
      *(_DWORD*)(*(_QWORD*)(a3 + 376) + 4LL * *(int*)(a3 + 976) + 12) = v73;
      *(_DWORD*)(*(_QWORD*)(a3 + 376) + 4LL * *(int*)(a3 + 976) + 24) = v73;
      *(_DWORD*)(*(_QWORD*)(a3 + 376) + 4LL * *(int*)(a3 + 976) + 28) = v73;
      get_glyph_metrics_plt(a1, a3, a4, v76);
      *(_DWORD*)(*(_QWORD*)(a3 + 384) + 4LL * *(int*)(a3 + 976) + 8) =
          SHIWORD(v77);
      *(_DWORD*)(*(_QWORD*)(a3 + 384) + 4LL * *(int*)(a3 + 976) + 12) =
          2 * SHIWORD(v77);
      *(_DWORD*)(*(_QWORD*)(a3 + 384) + 4LL * *(int*)(a3 + 976) + 24) =
          SHIWORD(v77);
      *(_DWORD*)(*(_QWORD*)(a3 + 384) + 4LL * *(int*)(a3 + 976) + 28) = 0;
    }
  }
  return 0;
}

__int64 cff_GridFit(__int64 a1, __int64 a2)
{
  unsigned int v2;
  __int64 v5;
  __int64 v6;
  __int64 result;
  int v8;
  unsigned int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int16 v14;
  char v15;
  char v16;

  v2 = *(unsigned __int16*)(a2 + 16);
  v15 = 127;
  v14 = 2992;
  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 48) + 56LL);
  *(_WORD*)(a1 + 108) = 0;
  *(_BYTE*)(a1 + 110) = 0;
  fsg_SetUpElement_plt(a1, a2, 1);
  v6 = *(_QWORD*)(a1 + 128);
  if (*(_QWORD*)a2 == *(_QWORD*)(v6 + 16824) ||
      (*(_QWORD*)(v6 + 16824) = *(_QWORD*)a2,
       result = fsg_RunPreProgram_plt(a1, a2), *(_DWORD*)(a1 + 72) = result,
       (_DWORD)result == 0)) {
    loadGlyph_plt(a1, v5, a2, v2);
    scale_char_plt(a2, a2 + 344);
    v8 = *(_DWORD*)(a1 + 76);
    if (*(_WORD*)(a2 + 424) != 0) {
      v9 = *(unsigned __int16*)(*(_QWORD*)(a2 + 408) +
                                2LL * *(__int16*)(a2 + 424) - 2) +
           1;
      if ((v8 & 2) != 0) {
        goto LABEL_15;
      }
    }
    else {
      v9 = 0;
      if ((v8 & 2) != 0) {
      LABEL_15:
        apply_transMatrix_plt(a2, *(_QWORD*)(a2 + 344), *(_QWORD*)(a2 + 352),
                              v9 + 8, a2 + 448);
        return *(unsigned int*)(a1 + 72);
      }
    }
    *(_DWORD*)(*(_QWORD*)(a2 + 344) + 4LL * v9) += 32;
    *(_DWORD*)(*(_QWORD*)(a2 + 344) + 4LL * v9) &= 0xFFFFFFC0;
    v10 = *(_DWORD*)(a1 + 76);
    if ((v10 & 0x400000) != 0 && (v10 & 0x21800000) != 0x800000 &&
        *(_WORD*)(*(_QWORD*)(a1 + 56) + 48LL) != 0 && v9 != 0) {
      fsg_CopyElementBackwards_plt(a2 + 344);
      *(_DWORD*)(a2 + 892) = *(_DWORD*)(a1 + 76);
      v11 = *(_QWORD*)(a1 + 56);
      *(_QWORD*)(a2 + 864) = v11;
      *(_WORD*)(a2 + 960) = *(_WORD*)(v11 + 48);
      *(_WORD*)(a2 + 962) = *(unsigned __int8*)(*(_QWORD*)(a1 + 48) + 65LL);
      *(_DWORD*)(a2 + 944) = which_script_plt(a1, v2, a2 + 948);
      fnt_Execute_plt(a2 + 256, &v14, &v16, a2 + 544, *(_QWORD*)(a1 + 128));
      *(_BYTE*)(a1 + 109) |= 0x10u;
    }
    v12 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 40LL);
    if (v12 != 0 && *(_BYTE*)(v12 + 4) != 0) {
      v13 = v9 + 1;
      *(_DWORD*)(*(_QWORD*)(a2 + 344) + 4LL * v13) += 32;
      *(_DWORD*)(*(_QWORD*)(a2 + 344) + 4LL * v13) &= 0xFFFFFFC0;
    }
    goto LABEL_15;
  }
  return result;
}

#pragma GCC visibility pop
