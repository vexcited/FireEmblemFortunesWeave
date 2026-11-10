#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* nn_fontll_itype_41be50(__int64, _DWORD*);
_QWORD* fs_font_417380_alt1(__int64, char*, const char*, int, unsigned int, int,
                            char*) __asm__("fs_font_417380");
__int64 FSS_calloc_plt(_QWORD, _QWORD);
__int64 FSS_free_plt(_QWORD, _QWORD);
__int64 FSS_malloc_plt(_QWORD, _QWORD);
__int64 FS_callback_get_target_plt(_QWORD, _QWORD);
__int64 FS_close_plt(_QWORD, _QWORD);
__int64 FS_open_plt(_QWORD, _QWORD);
__int64 FS_read_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 FS_seek_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 FS_strdup_plt(_QWORD, _QWORD);
__int64 FsLtt_done_plt(_QWORD);
__int64 FsLtt_init_plt(_QWORD, _QWORD);
__int64 FsLtt_load_plt(_QWORD, _QWORD, _QWORD);
__int64 FsLtt_read_plt(_QWORD, _QWORD, _QWORD);
__int64 FsScratchSpace_release_plt(_QWORD, _QWORD, _QWORD);
__int64 FsScratchSpace_reserve_plt(_QWORD, _QWORD, _QWORD);
__int64 TYPESET_clear_plt(_QWORD, _QWORD);
__int64 TYPESET_init_plt(_QWORD, _QWORD, _QWORD);
__int64 any_used_fntset_or_unshared_lfnt_table_ptrs_plt(_QWORD, _QWORD);
__int64 delete_lfnt_plt(_QWORD);
__int64 fontfile_type_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 kill_fntset_plt(_QWORD, _QWORD);
__int64 load_fnt_plt(_QWORD, _QWORD);
__int64 load_ttf_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_fontll_itype_41bea0(__int64, char, char*, __int64, int, int, int);
__int64 squeeze_table_ptrs_plt(_QWORD, _QWORD);
__int64 strcmp_plt(void* this_, const char*, const char*);
__int64 strcmp_plt_alt1(void* this_, const char*) __asm__("strcmp_plt");
__int64 strlen_plt(_QWORD);
__int64 strncat_plt(_QWORD, _QWORD, _QWORD);
__int64 strncpy_plt(_QWORD, _QWORD, _QWORD);
__int64 strrchr_plt(_QWORD, _QWORD);
__int64 vardiv_64_plt(_QWORD, _QWORD, _QWORD);
__int64 varmul_64_plt(_QWORD, _QWORD, _QWORD);
extern char SdkData_bbbd5c;
void* SdkRoutine_418440(void* result, __int64, const char*, unsigned int);
__int64 FSS_set_font(__int64 a1, void* this_, const char* a3);
__int64 load_fnt(__int64 a1, __int64 a2);
__int64 FSS_add_font_with_offset(__int64 a1, const char* a2, char* a3,
                                 const char* a4, int a5, unsigned int a6,
                                 int a7);
_QWORD* fs_font_417380(__int64 a1, char* a2, __int64 a3, int a4, int a5, int a6,
                       char* a7);
__int64 fs_font_418590(__int64 a1, __int64 a2, __int64 a3);
__int64 FSS_delete_font(__int64 a1, char* a2, const char* a3);
__int64 FSS_get_link_info(__int64 a1, __int64 a2, unsigned __int8* a3,
                          __int64 a4);
__int64 fontfile_type(__int64 a1, __int64 a2, __int64 a3, unsigned int a4);
__int64 FSS_get_font_path(__int64 a1, void* this_, const char* a3, __int64 a4,
                          unsigned int a5, _DWORD* a6, _DWORD* a7, _DWORD* a8);

__int64 FSS_set_font(__int64 a1, void* this_, const char* a3)
{
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  unsigned int v17;
  _QWORD* v18;
  __int64 result;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned int v23;
  unsigned int v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  int v29;
  int v30;
  unsigned int v31;
  int v32;
  int v33;
  int v34;
  unsigned int v35;
  unsigned int v36;

  if (this_ != nullptr) {
    v5 = (_QWORD*)a1;
    while (1) {
      v6 = v5[1];
      if (v6 != 0) {
        while (*(_QWORD*)v6 == 0 ||
               (unsigned int)strcmp_plt(*(void**)v6, (const char*)this_, a3) !=
                   0) {
          v6 = *(_QWORD*)(v6 + 24);
          if (v6 == 0) {
            goto LABEL_3;
          }
        }
        v7 = *(_QWORD**)(v6 + 8);
        if (v7 != nullptr) {
          break;
        }
      }
    LABEL_3:
      v5 = (_QWORD*)*v5;
      if (v5 == nullptr) {
        goto LABEL_18;
      }
    }
  }
  else {
    v8 = (_QWORD*)a1;
    do {
      v9 = (_QWORD*)v8[1];
      if (v9 != nullptr) {
        while (*v9 != 0) {
          v9 = (_QWORD*)v9[3];
          if (v9 == nullptr) {
            goto LABEL_13;
          }
        }
        v7 = (_QWORD*)v9[1];
        if (v7 != nullptr) {
          goto LABEL_32;
        }
      }
    LABEL_13:
      v8 = (_QWORD*)*v8;
    } while (v8 != nullptr);
  LABEL_18:
    if (*(_WORD*)(a1 + 24) != 0 && (v10 = *(_QWORD*)(a1 + 16)) != 0 &&
        (v11 = *(unsigned __int16*)(v10 + 32)) >= 2) {
      v16 = *(_QWORD*)(v10 + 40);
      if (this_ != nullptr) {
        v35 = 0;
        while (*(_QWORD*)v16 == 0 ||
               (unsigned int)strcmp_plt(this_, *(const char**)v16, a3) != 0) {
          ++v35;
          v16 += 72;
          if (v35 >= v11) {
            goto LABEL_21;
          }
        }
      }
      else {
        v36 = 0;
        while (*(_QWORD*)v16 != 0) {
          ++v36;
          v16 += 72;
          if (v36 >= v11) {
            goto LABEL_21;
          }
        }
      }
    }
    else {
    LABEL_21:
      v12 = *(_QWORD*)(a1 + 8);
      if (v12 == 0) {
      LABEL_44:
        *(_DWORD*)(a1 + 72) = 301;
        return 301;
      }
      v13 = *(_QWORD*)(a1 + 16);
      if (this_ != nullptr) {
        while (1) {
          v14 = *(_QWORD*)(v12 + 8);
          if (v14 != v13) {
            v15 = *(unsigned __int16*)(v14 + 32);
            if (v15 >= 2) {
              break;
            }
          }
        LABEL_24:
          v12 = *(_QWORD*)(v12 + 24);
          if (v12 == 0) {
            goto LABEL_44;
          }
        }
        v16 = *(_QWORD*)(v14 + 40);
        v17 = 0;
        while (*(_QWORD*)v16 == 0 ||
               (unsigned int)strcmp_plt(this_, *(const char**)v16, a3) != 0) {
          ++v17;
          v16 += 72;
          if (v17 >= v15) {
            goto LABEL_24;
          }
        }
      }
      else {
        while (1) {
          v22 = *(_QWORD*)(v12 + 8);
          if (v22 != v13) {
            v23 = *(unsigned __int16*)(v22 + 32);
            if (v23 >= 2) {
              break;
            }
          }
        LABEL_37:
          v12 = *(_QWORD*)(v12 + 24);
          if (v12 == 0) {
            goto LABEL_44;
          }
        }
        v16 = *(_QWORD*)(v22 + 40);
        v24 = 0;
        while (*(_QWORD*)v16 != 0) {
          ++v24;
          v16 += 72;
          if (v24 >= v23) {
            goto LABEL_37;
          }
        }
      }
    }
    v7 = fs_font_417380_alt1(a1, *(char**)(*(_QWORD*)(v16 + 56) + 8LL),
                             *(const char**)(*(_QWORD*)(v16 + 56) + 16LL),
                             *(_DWORD*)(*(_QWORD*)(v16 + 56) + 24LL),
                             *(_DWORD*)(*(_QWORD*)(v16 + 56) + 28LL),
                             *(_DWORD*)(*(_QWORD*)(v16 + 56) + 32LL), nullptr);
    if (v7 == nullptr) {
      return *(unsigned int*)(a1 + 72);
    }
  }
LABEL_32:
  v18 = *(_QWORD**)(a1 + 16);
  *(_DWORD*)(a1 + 72) = 0;
  if (v18 == v7) {
    return 0;
  }
  TYPESET_clear_plt(a1, a1 + 16);
  result = *(unsigned int*)(a1 + 72);
  if ((_DWORD)result == 0) {
    TYPESET_init_plt(a1, a1 + 16, v7);
    result = *(unsigned int*)(a1 + 72);
    if ((_DWORD)result == 0) {
      *(_QWORD*)(a1 + 80) = 0;
      *(_QWORD*)(a1 + 88) = 0;
      *(_QWORD*)(a1 + 48) = 0;
      *(_QWORD*)(a1 + 56) = 0;
      *(_DWORD*)(a1 + 64) = -1;
      if (*((_WORD*)v7 + 16) != 0) {
        v20 = 0;
        v21 = 0;
        while (1) {
          v25 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + v20) + 56LL);
          if (v25 == 0) {
            *(_DWORD*)(a1 + 72) = 304;
            return 304;
          }
          if (*(_QWORD*)(v25 + 56) == 0 ||
              (*(_DWORD*)(a1 + 72) = 0, *(_QWORD*)(v25 + 56) == 0)) {
            v26 = load_fnt_plt(a1, v25);
            *(_DWORD*)(v25 + 36) &= 0xFFFFFEE1;
            if (v26 != 0) {
              return *(unsigned int*)(a1 + 72);
            }
          }
          if (*(_BYTE*)(v25 + 65) != 6) {
            break;
          }
        LABEL_45:
          ++v21;
          v20 += 24;
          if (v21 >= *((unsigned __int16*)v7 + 16)) {
            return *(unsigned int*)(a1 + 72);
          }
        }
        v27 = *(_QWORD*)(v25 + 56);
        v28 = *(_QWORD*)(v27 + 56);
        v29 = *(unsigned __int16*)(*(_QWORD*)(v27 + 48) + 52LL);
        if (*(_WORD*)(v28 + 20) != 0) {
          v30 = 512;
        }
        else {
          v30 = 0;
        }
        v31 = *(_DWORD*)(v25 + 36) & 0xFFFFFDFF | v30;
        v32 = v29 & 0xFF00;
        *(_DWORD*)(v25 + 36) = v31;
        if (v32 == 512 || (unsigned int)(v29 - 1538) <= 0xFD) {
          v34 = v31 | 0xA;
        }
        else {
          if (v32 == 1792) {
            v33 = v31 | 0x12;
          LABEL_58:
            *(_DWORD*)(v25 + 36) = v33;
            *(_DWORD*)(a1 + 72) = 519;
            goto LABEL_61;
          }
          if ((v29 & 0xFFFE) == 0x9654) {
            v34 = v31 | 2;
          }
          else {
            if (v32 == 1280) {
              v33 = v31 | 0x10;
              goto LABEL_58;
            }
            if (v32 != 1024) {
            LABEL_61:
              if (v29 == 38485 || v29 == 1538) {
                *(_DWORD*)(v25 + 36) |= 0xC0u;
              }
              if (*(_QWORD*)(*(_QWORD*)(v25 + 56) + 200LL) != 0) {
                *(_DWORD*)(v25 + 36) |= 4u;
              }
              goto LABEL_45;
            }
            v34 = v31 | 8;
          }
        }
        *(_DWORD*)(v25 + 36) = v34;
        goto LABEL_61;
      }
      return 0;
    }
  }
  return result;
}

__int64 load_fnt(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  unsigned int v11;
  unsigned __int16 v12;
  unsigned __int16 v13;
  unsigned __int16 v14;
  __int64 v15;
  int v16;

  v3 = *(_QWORD*)(a2 + 8);
  if (v3 != 0) {
    v5 = 0;
    *(_BYTE*)(a2 + 64) = 1;
    v6 = *(unsigned __int8*)(a2 + 65);
    if (v6 < 2) {
      goto LABEL_7;
    }
  LABEL_5:
    if (v6 == 6) {
      *(_QWORD*)(a2 + 56) = 0;
      v16 = 436;
    }
    else {
      if (v6 == 7) {
        goto LABEL_7;
      }
      v16 = 304;
      *(_QWORD*)(a2 + 56) = 0;
    }
    *(_DWORD*)(a1 + 72) = v16;
    goto LABEL_24;
  }
  v5 = *(_QWORD*)(a2 + 16);
  *(_BYTE*)(a2 + 64) = 1;
  v6 = *(unsigned __int8*)(a2 + 65);
  if (v6 >= 2) {
    goto LABEL_5;
  }
LABEL_7:
  v7 = load_ttf_plt(a1, v3, v5, *(unsigned int*)(a2 + 24),
                    *(unsigned int*)(a2 + 28), *(unsigned int*)(a2 + 32), 0);
  v8 = *(_QWORD*)(a2 + 40);
  *(_QWORD*)(a2 + 56) = v7;
  if (v8 == 0 && v7 != 0) {
    v9 = *(_QWORD*)(v7 + 72);
    if (v9 != 0) {
      v10 = 1;
      v11 = *(unsigned __int16*)(v9 + 4) / 0xAu;
      if (v11 <= 0x100) {
        v11 = 256;
      }
      v12 = 1;
      do {
        v13 = v12;
        v12 = v10;
        v10 *= 2;
      } while (v11 > v12);
      if ((int)(v11 - v13) >= (int)(v12 - v11)) {
        v13 = v12;
      }
      if (v11 == v12) {
        v14 = v11;
      }
      else {
        v14 = v13;
      }
      v15 = FSS_calloc_plt(a1, 4 * (unsigned int)v14);
      if (v15 != 0) {
        *(_QWORD*)(a2 + 40) = v15;
        *(_WORD*)(a2 + 48) = v14 - 1;
      }
    }
  }
LABEL_24:
  *(_BYTE*)(a2 + 64) = 0;
  return *(unsigned int*)(a1 + 72);
}

__int64 FSS_add_font_with_offset(__int64 a1, const char* a2, char* a3,
                                 const char* a4, int a5, unsigned int a6,
                                 int a7)
{
  char* v10;
  const char* v11;
  __int64* v12;
  __int64 v14;
  __int64 v15;
  __int64 i;
  __int64 result;
  struct {
    _QWORD v18[6];
    __int16 v19;
  } v18_;

  if (a4 != nullptr) {
    v10 = nullptr;
    v11 = a4;
  }
  else {
    v10 = a3;
    v11 = nullptr;
  }
  v12 = fs_font_417380_alt1(a1, v10, v11, a5, a6, a7, a3);
  v14 = (__int64)v12;
  if (v12 == nullptr) {
    return *(unsigned int*)(a1 + 72);
  }
  v15 = *(_QWORD*)(a1 + 8);
  v18_.v19 = 0;
  memset(v18_.v18, 0, sizeof(v18_.v18));
  if (v15 != 0) {
    for (i = v15; i != 0; i = *(_QWORD*)(i + 24)) {
      if (*(__int64**)(i + 8) == v12) {
        if (a2 != nullptr && (*(_QWORD*)i == 0 || (unsigned int)strcmp_plt_alt1(
                                                      *(void**)i, a2) != 0)) {
          *(_DWORD*)(a1 + 72) = 311;
          return 311;
        }
        else {
          ++*(_DWORD*)(i + 16);
          *(_DWORD*)(a1 + 72) = 0;
          return 0;
        }
      }
    }
    if (a2 == nullptr) {
      goto LABEL_17;
    }
    while (*(_QWORD*)v15 == 0 ||
           (unsigned int)strcmp_plt_alt1(*(void**)v15, a2) != 0) {
      v15 = *(_QWORD*)(v15 + 24);
      if (v15 == 0) {
        goto LABEL_18;
      }
    }
    if (*(_QWORD*)(v15 + 8) != 0) {
      *(_DWORD*)(a1 + 72) = 314;
      return 314;
    }
  }
  else if (a2 == nullptr) {
  LABEL_17:
    a2 = (const char*)v18_.v18;
    SdkRoutine_418440((void*)a1, *v12, (const char*)v18_.v18, 0x32u);
  }
LABEL_18:
  result = fs_font_418590(a1, (__int64)a2, v14);
  if ((_DWORD)result != 0) {
    return *(unsigned int*)(a1 + 72);
  }
  *(_DWORD*)(a1 + 72) = 0;
  return result;
}

_QWORD* fs_font_417380(__int64 a1, char* a2, __int64 a3, int a4, int a5, int a6,
                       char* a7)
{
  _QWORD* v14;
  __int64 v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  int v20;
  void* v21;
  __int64 v22;
  __int64 v23;
  int v24;
  unsigned __int16* v25;
  int v26;
  __int64 v27;
  __int64 v28;
  int v29;
  unsigned __int16* v30;
  const char* v31;
  int v32;
  int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  int v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  char* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v57;
  int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  int v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  char* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  int v82;
  __int64 v83;
  char* v84;
  _BYTE* v85;
  unsigned int v86;
  int v87;
  __int64 v88;
  __int64 v89;
  unsigned int v90;
  unsigned int v91;
  int v92;
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  __int64 v96;
  unsigned int v97;
  unsigned int v98;
  int v99;
  __int64 v100;
  __int64 v101;
  int v102;
  char v103;
  __int64 v104;
  __int64 v105;
  int v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  int v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  _QWORD* v128;
  unsigned int v129;
  __int64 v130;
  int v131;
  _QWORD* v132;
  unsigned int v133;
  __int64 v134;
  int v135;
  unsigned int v136;
  __int64 v137;
  unsigned __int64 v138;
  int v139;
  char* v140;
  __int64 v141;
  __int64 v142;
  struct {
    __int64 v143;
    __int64 v144;
  } v143_;

  v14 = **(_QWORD***)(a1 + 128);
  if (v14 != nullptr) {
    if (a2 != nullptr) {
      do {
        v21 = (void*)v14[1];
        if (v21 != nullptr &&
            (unsigned int)strcmp_plt(v21, a2, (const char*)a3) == 0 &&
            *((_DWORD*)v14 + 6) == a5 && *((_DWORD*)v14 + 7) == a6) {
          if (*((_WORD*)v14 + 16) != 1) {
            return v14;
          }
          v22 = *(_QWORD*)(v14[5] + 56LL);
          if (*(_BYTE*)(v22 + 65) != 1 || *(_DWORD*)(v22 + 24) == a4) {
            return v14;
          }
        }
        v14 = (_QWORD*)v14[17];
      } while (v14 != nullptr);
    }
    else if (a3 != 0) {
      do {
        if (v14[1] == 0 && v14[2] == a3 && *((_DWORD*)v14 + 6) == a5 &&
            *((_DWORD*)v14 + 7) == a6) {
          v23 = 0;
          v24 = 0;
          do {
            v25 = (unsigned __int16*)(a3 + v23);
            v23 += 80;
            v26 = v24 + *v25 + v25[1] + v25[2] + v25[3] + v25[4] + v25[5] +
                  v25[6] + v25[7] + v25[8] + v25[9] + v25[10] + v25[11] +
                  v25[12] + v25[13] + v25[14] + v25[15] + v25[16] + v25[17] +
                  v25[18] + v25[19] + v25[20] + v25[21] + v25[22] + v25[23] +
                  v25[24] + v25[25] + v25[26] + v25[27];
            v24 = v26 + v25[28] + v25[29] + v25[30] + v25[31] + v25[32] +
                  v25[33] + v25[34] + v25[35] + v25[36] + v25[37] + v25[38] +
                  v25[39];
          } while ((_DWORD)v23 != 400);
          if (v24 == *((_DWORD*)v14 + 32)) {
            if (*((_WORD*)v14 + 16) != 1) {
              return v14;
            }
            v27 = *(_QWORD*)(v14[5] + 56LL);
            if (*(_BYTE*)(v27 + 65) != 1 || *(_DWORD*)(v27 + 24) == a4) {
              return v14;
            }
          }
        }
        v14 = (_QWORD*)v14[17];
      } while (v14 != nullptr);
    }
  }
  if (((unsigned __int64)a2 | a3) == 0) {
    v14 = nullptr;
    *(_DWORD*)(a1 + 72) = 301;
    return v14;
  }
  v15 = FSS_calloc_plt(a1, 144);
  v14 = (_QWORD*)v15;
  if (v15 != 0) {
    if (a2 != nullptr) {
      v16 = strlen_plt(a2);
      if (v16 == 0 ||
          (v17 = v16 + 1,
           (v18 = FSS_malloc_plt(a1, (unsigned int)(v16 + 1))) == 0)) {
      LABEL_63:
        FSS_free_plt(a1, v14);
        return nullptr;
      }
      v19 = v18;
      memcpy_plt(v18, a2, v17);
      v14[1] = v19;
      v14[2] = a3;
      *((_DWORD*)v14 + 6) = a5;
      *((_DWORD*)v14 + 7) = a6;
      *((_DWORD*)v14 + 32) = 0;
      if (a3 == 0) {
        goto LABEL_10;
      }
    }
    else {
      *(_QWORD*)(v15 + 8) = 0;
      *(_QWORD*)(v15 + 16) = a3;
      *(_DWORD*)(v15 + 24) = a5;
      *(_DWORD*)(v15 + 28) = a6;
      *(_DWORD*)(v15 + 128) = 0;
      if (a3 == 0) {
      LABEL_10:
        v20 = (unsigned __int8)fontfile_type_plt(a1, a2, 0, (unsigned int)a5);
        goto LABEL_45;
      }
    }
    v28 = 0;
    v29 = 0;
    do {
      v30 = (unsigned __int16*)(a3 + v28);
      v28 += 40;
      v29 += *v30 + v30[1] + v30[2] + v30[3] + v30[4] + v30[5] + v30[6] +
             v30[7] + v30[8] + v30[9] + v30[10] + v30[11] + v30[12] + v30[13] +
             v30[14] + v30[15] + v30[16] + v30[17] + v30[18] + v30[19];
    } while ((_DWORD)v28 != 400);
    v31 = (const char*)(a3 + (unsigned int)a5);
    *((_DWORD*)v14 + 32) = v29;
    v32 = *(unsigned __int8*)v31;
    if (v32 == 80) {
      v20 = 6;
    }
    else {
      v33 = *((unsigned __int8*)v31 + 1);
      v34 = *((unsigned __int8*)v31 + 2);
      if (v32 == 79 && v33 == 84 && v34 == 84) {
        v20 = 7;
      }
      else if (((v33 << 8) | (v34 << 16) | v32) == 0x54544C) {
        v20 = 2;
      }
      else {
        v20 = 0;
      }
    }
  LABEL_45:
    if (v20 != 2) {
      if (v20 != 127) {
        v35 = nn_fontll_itype_41bea0(a1, v20, a2, a3, a4, a5, a6);
        if (v35 != 0) {
          v36 = v35;
          v37 = (_QWORD*)FSS_calloc_plt(a1, 72);
          if (v37 != nullptr) {
            v38 = *(_QWORD*)v36;
            v37[7] = v36;
            v39 = v37;
            *v37 = v38;
            ++*(_DWORD*)(v36 + 52);
            v14[5] = v37;
            v40 = *v37;
            v37[3] = -1;
            v37[4] = -1;
            v37[1] = -1;
            v37[2] = -1;
            if (v40 != 0) {
              v41 = strlen_plt(v40);
              if (v41 != 0) {
                v42 = v41 + 1;
                v43 = FSS_malloc_plt(a1, (unsigned int)(v41 + 1));
                if (v43 != 0) {
                  v44 = v42;
                  v45 = v43;
                  memcpy_plt(v43, v40, v44);
                  *v14 = v45;
                  *((_WORD*)v14 + 16) = 1;
                  v46 = v39[7];
                  v14[14] = 0;
                  v14[15] = 0;
                  v14[12] = 0;
                  v14[13] = 0;
                  v14[10] = 0;
                  v14[11] = 0;
                  v14[8] = 0;
                  v14[9] = 0;
                  v14[6] = v46;
                  v14[7] = 0;
                  v14[17] = **(_QWORD**)(a1 + 128);
                  **(_QWORD**)(a1 + 128) = v14;
                  return v14;
                }
              }
            }
            --*(_DWORD*)(v39[7] + 52LL);
            *v39 = 0;
          }
        }
      }
      goto LABEL_61;
    }
    v47 = FsScratchSpace_reserve_plt(*(_QWORD*)(a1 + 128) + 16792LL, a1, 256);
    if (v47 == 0 || *(_DWORD*)(a1 + 72) != 0) {
    LABEL_61:
      v55 = v14[1];
      if (v55 != 0) {
        FSS_free_plt(a1, v55);
      }
      goto LABEL_63;
    }
    v48 = (char*)v47;
    v49 = FsScratchSpace_reserve_plt(*(_QWORD*)(a1 + 128) + 16792LL, a1, 152);
    if (v49 == 0) {
      goto LABEL_90;
    }
    v50 = v49;
    if ((unsigned int)FsLtt_init_plt(a1, v49) != 0) {
      v51 = v14[1];
      if (v51 != 0) {
        FSS_free_plt(a1, v51);
      }
      FSS_free_plt(a1, v14);
      FsScratchSpace_release_plt(*(_QWORD*)(a1 + 128) + 16792LL, a1, v48);
      v52 = a1;
      v53 = v50;
      v54 = *(_QWORD*)(a1 + 128) + 16792LL;
      goto LABEL_94;
    }
    if (a3 != 0) {
      v57 = FsLtt_load_plt(v50, a3, 0);
      if (v57 != 0) {
        v58 = v57;
        FsLtt_done_plt(v50);
        FsScratchSpace_release_plt(*(_QWORD*)(a1 + 128) + 16792LL, a1, v50);
        v59 = v14[1];
        if (v59 != 0) {
          FSS_free_plt(a1, v59);
        }
        FSS_free_plt(a1, v14);
        *(_DWORD*)(a1 + 72) = v58;
      LABEL_93:
        v52 = a1;
        v53 = (__int64)v48;
        v54 = *(_QWORD*)(a1 + 128) + 16792LL;
      LABEL_94:
        FsScratchSpace_release_plt(v54, v52, v53);
        return nullptr;
      }
    }
    else if (a2 != nullptr) {
      v60 = FS_open_plt(a1, a2);
      if (v60 == 0) {
        goto LABEL_89;
      }
      v61 = v60;
      v62 = FsLtt_read_plt(v50, v60, 0);
      FS_close_plt(a1, v61);
      if (v62 != 0) {
        FsLtt_done_plt(v50);
        FsScratchSpace_release_plt(*(_QWORD*)(a1 + 128) + 16792LL, a1, v50);
        v63 = v14[1];
        if (v63 != 0) {
          FSS_free_plt(a1, v63);
        }
        FSS_free_plt(a1, v14);
        FsScratchSpace_release_plt(*(_QWORD*)(a1 + 128) + 16792LL, a1, v48);
        v14 = nullptr;
        *(_DWORD*)(a1 + 72) = v62;
        return v14;
      }
    }
    v64 = FS_strdup_plt(a1, *(_QWORD*)(v50 + 16));
    if (v64 != 0) {
      *v14 = v64;
      *((_WORD*)v14 + 16) = *(_WORD*)(v50 + 40);
      *((_DWORD*)v14 + 14) = *(_DWORD*)(v50 + 56);
      *((_DWORD*)v14 + 15) = *(_DWORD*)(v50 + 60);
      *((_DWORD*)v14 + 16) = *(_DWORD*)(v50 + 64);
      *((_DWORD*)v14 + 17) = *(_DWORD*)(v50 + 68);
      *((_DWORD*)v14 + 18) = *(_DWORD*)(v50 + 72);
      *((_DWORD*)v14 + 19) = *(_DWORD*)(v50 + 76);
      *((_DWORD*)v14 + 20) = *(_DWORD*)(v50 + 80);
      *((_DWORD*)v14 + 21) = *(_DWORD*)(v50 + 84);
      v14[11] = nn_fontll_itype_41be50(a1, (_DWORD*)(v50 + 88));
      if (*(_DWORD*)(a1 + 72) != 0) {
      LABEL_88:
        FSS_free_plt(a1, *v14);
        goto LABEL_89;
      }
      v14[12] = nn_fontll_itype_41be50(a1, (_DWORD*)(v50 + 96));
      if (*(_DWORD*)(a1 + 72) != 0) {
      LABEL_86:
        v67 = v14[11];
        if (v67 != 0) {
          FSS_free_plt(a1, v67);
        }
        goto LABEL_88;
      }
      v14[13] = nn_fontll_itype_41be50(a1, (_DWORD*)(v50 + 104));
      if (*(_DWORD*)(a1 + 72) != 0) {
      LABEL_84:
        v66 = v14[12];
        if (v66 != 0) {
          FSS_free_plt(a1, v66);
        }
        goto LABEL_86;
      }
      v14[14] = nn_fontll_itype_41be50(a1, (_DWORD*)(v50 + 112));
      if (*(_DWORD*)(a1 + 72) != 0) {
      LABEL_82:
        v65 = v14[13];
        if (v65 != 0) {
          FSS_free_plt(a1, v65);
        }
        goto LABEL_84;
      }
      if (a7 != nullptr) {
        v69 = a7;
      }
      else {
        v69 = &SdkData_bbbd5c;
      }
      v70 = strncpy_plt(v48, v69, 255);
      v48[255] = 0;
      v71 = strrchr_plt(v70, 47);
      v72 = v71;
      if (v71 != 0) {
        v73 = v71 + 1;
      }
      else {
        v73 = 0;
      }
      v74 = strrchr_plt(v48, 92);
      if (v74 != 0) {
        v75 = v74 + 1;
      }
      else {
        v75 = 0;
      }
      if (v73 > v75) {
        v75 = v73;
      }
      if (v74 != 0) {
        v76 = v74 + 1;
      }
      else {
        v76 = (__int64)v48;
      }
      if (v74 == 0) {
        v75 = v72 + 1;
      }
      if (v72 == 0) {
        v75 = v76;
      }
      v138 = v75;
      v77 =
          FSS_calloc_plt(a1, 72 * (unsigned int)*(unsigned __int16*)(v50 + 40));
      v14[5] = v77;
      if (v77 != 0) {
        v140 = (char*)FsScratchSpace_reserve_plt(*(_QWORD*)(a1 + 128) + 16792LL,
                                                 a1, 256);
        if (v140 != nullptr) {
          if (*(_WORD*)(v50 + 40) == 0) {
          LABEL_173:
            FsScratchSpace_release_plt(*(_QWORD*)(a1 + 128) + 16792LL, a1,
                                       v140);
            v14[15] = 0;
            v14[17] = **(_QWORD**)(a1 + 128);
            **(_QWORD**)(a1 + 128) = v14;
            FsLtt_done_plt(v50);
            FsScratchSpace_release_plt(*(_QWORD*)(a1 + 128) + 16792LL, a1, v50);
            FsScratchSpace_release_plt(*(_QWORD*)(a1 + 128) + 16792LL, a1, v48);
            return v14;
          }
          v78 = -128;
          v141 = 0;
          v79 = v14[5] + 36LL;
          v139 = 0;
          v137 = (unsigned int)((_DWORD)v48 - v138 + 255);
          while (1) {
            v80 = *(_QWORD*)(v50 + 48);
            v143_.v144 = 0;
            v81 = v80 + v78;
            v142 = v80;
            if (*(_QWORD*)(v80 + v78 + 160) == 0) {
              break;
            }
            v143_.v143 = 0;
            *v140 = 0;
            v82 =
                FS_callback_get_target_plt(*(_QWORD*)(v81 + 160), &v143_.v143);
            if (v82 != 0) {
              v117 = v82;
              goto LABEL_199;
            }
            v83 = v143_.v143;
            if (v143_.v143 != 0) {
              v84 = nullptr;
            }
            else {
              v84 = v140;
              if (*v140 == 0) {
                v117 = 521;
              LABEL_199:
                if (v78 != -128) {
                  v128 = (_QWORD*)v14[5];
                  v129 = 0;
                  do {
                    v130 = v128[7];
                    v131 = *(_DWORD*)(v130 + 52) - 1;
                    *(_DWORD*)(v130 + 52) = v131;
                    if (v131 == 0) {
                      delete_lfnt_plt(a1);
                    }
                    *v128 = 0;
                    v128 += 9;
                    ++v129;
                  } while (v129 < (unsigned int)v141);
                }
                FsScratchSpace_release_plt(*(_QWORD*)(a1 + 128) + 16792LL, a1,
                                           v140);
                FSS_free_plt(a1, v14[5]);
                v123 = v14[14];
                if (v123 != 0) {
                  FSS_free_plt(a1, v123);
                }
                v124 = v14[13];
                if (v124 != 0) {
                  FSS_free_plt(a1, v124);
                }
                v125 = v14[12];
                if (v125 != 0) {
                  FSS_free_plt(a1, v125);
                }
                v126 = v14[11];
                if (v126 != 0) {
                  FSS_free_plt(a1, v126);
                }
                FSS_free_plt(a1, *v14);
                FsLtt_done_plt(v50);
                FsScratchSpace_release_plt(*(_QWORD*)(a1 + 128) + 16792LL, a1,
                                           v50);
                v127 = v14[1];
                if (v127 != 0) {
                  FSS_free_plt(a1, v127);
                }
                FSS_free_plt(a1, v14);
                FsScratchSpace_release_plt(*(_QWORD*)(a1 + 128) + 16792LL, a1,
                                           v48);
                *(_DWORD*)(a1 + 72) = v117;
                return nullptr;
              }
            }
            v88 = HIDWORD(v143_.v144);
          LABEL_158:
            v103 = fontfile_type_plt(a1, v84, v83, v88);
            if (*(_DWORD*)(a1 + 72) != 0) {
              FsScratchSpace_release_plt(*(_QWORD*)(a1 + 128) + 16792LL, a1,
                                         v140);
              FSS_free_plt(a1, v14[5]);
              v112 = v14[14];
              if (v112 != 0) {
                FSS_free_plt(a1, v112);
              }
              v113 = v14[13];
              if (v113 != 0) {
                FSS_free_plt(a1, v113);
              }
              v114 = v14[12];
              if (v114 != 0) {
                FSS_free_plt(a1, v114);
              }
              v115 = v14[11];
              if (v115 != 0) {
                FSS_free_plt(a1, v115);
              }
              FSS_free_plt(a1, *v14);
              FsLtt_done_plt(v50);
              FsScratchSpace_release_plt(*(_QWORD*)(a1 + 128) + 16792LL, a1,
                                         v50);
              v116 = v14[1];
              if (v116 != 0) {
                FSS_free_plt(a1, v116);
              }
              FSS_free_plt(a1, v14);
              FsScratchSpace_release_plt(*(_QWORD*)(a1 + 128) + 16792LL, a1,
                                         v48);
              return nullptr;
            }
            v104 = nn_fontll_itype_41bea0(
                a1, v103, v84, v83, *(unsigned __int16*)(v142 + v78 + 156),
                SHIDWORD(v143_.v144), v143_.v144);
            if (v104 != 0) {
              v105 = *(_QWORD*)v104;
              *(_QWORD*)(v79 + 20) = v104;
              *(_QWORD*)(v79 - 36) = v105;
              ++*(_DWORD*)(v104 + 52);
            }
            else {
              v106 = *(_DWORD*)(a1 + 72);
              if (v106 != 0) {
                if (v78 != -128) {
                  v132 = (_QWORD*)v14[5];
                  v133 = 0;
                  do {
                    v134 = v132[7];
                    v135 = *(_DWORD*)(v134 + 52) - 1;
                    *(_DWORD*)(v134 + 52) = v135;
                    if (v135 == 0) {
                      delete_lfnt_plt(a1);
                    }
                    *v132 = 0;
                    v132 += 9;
                    ++v133;
                  } while (v133 < (unsigned int)v141);
                }
                FsScratchSpace_release_plt(*(_QWORD*)(a1 + 128) + 16792LL, a1,
                                           v140);
                FSS_free_plt(a1, v14[5]);
                v118 = v14[14];
                if (v118 != 0) {
                  FSS_free_plt(a1, v118);
                }
                v119 = v14[13];
                if (v119 != 0) {
                  FSS_free_plt(a1, v119);
                }
                v120 = v14[12];
                if (v120 != 0) {
                  FSS_free_plt(a1, v120);
                }
                v121 = v14[11];
                if (v121 != 0) {
                  FSS_free_plt(a1, v121);
                }
                FSS_free_plt(a1, *v14);
                FsLtt_done_plt(v50);
                FsScratchSpace_release_plt(*(_QWORD*)(a1 + 128) + 16792LL, a1,
                                           v50);
                v122 = v14[1];
                if (v122 != 0) {
                  FSS_free_plt(a1, v122);
                }
                FSS_free_plt(a1, v14);
                FsScratchSpace_release_plt(*(_QWORD*)(a1 + 128) + 16792LL, a1,
                                           v48);
                *(_DWORD*)(a1 + 72) = v106;
                return nullptr;
              }
            }
            if (v141 == *(unsigned __int16*)(v50 + 42)) {
              v14[6] = *(_QWORD*)(v79 + 20);
            }
            v107 = v142 + v78;
            *(_DWORD*)(v79 - 28) = *(_DWORD*)(v142 + v78 + 144);
            *(_DWORD*)(v79 - 24) = *(_DWORD*)(v142 + v78 + 148);
            *(_DWORD*)(v79 - 20) = *(_DWORD*)(v142 + v78 + 212);
            *(_DWORD*)(v79 - 16) = *(_DWORD*)(v142 + v78 + 216);
            *(_DWORD*)(v79 - 12) = *(_DWORD*)(v142 + v78 + 220);
            *(_DWORD*)(v79 - 8) = *(_DWORD*)(v142 + v78 + 224);
            *(_DWORD*)(v79 - 4) = *(_DWORD*)(v142 + v78 + 228);
            *(_DWORD*)v79 = *(_DWORD*)(v142 + v78 + 232);
            *(_DWORD*)(v79 + 28) = *(_DWORD*)(v142 + v78 + 236);
            *(_WORD*)(v79 + 32) = *(_WORD*)(v142 + v78 + 240);
            if (*(_BYTE*)(v142 + v78 + 196) != 0) {
              *(_BYTE*)(v79 + 6) = 1;
              *(_DWORD*)(v79 + 8) =
                  varmul_64_plt(*(unsigned int*)(v107 + 200), 655, 16);
            }
            if (*(_BYTE*)(v107 + 204) != 0) {
              *(_BYTE*)(v79 + 7) = 1;
              v108 =
                  varmul_64_plt(*(unsigned int*)(v142 + v78 + 208), 1144, 16);
              *(_DWORD*)(v79 + 12) = v108;
              v109 = varmul_64_plt(v108, (unsigned int)v108, 16);
              v110 = varmul_64_plt(v109, *(unsigned int*)(v79 + 12), 16);
              *(_DWORD*)(v79 + 12) += vardiv_64_plt(v110, 196608, 16);
            }
            if (v78 == -128) {
              v139 = *(unsigned __int16*)(v79 + 4);
            }
            else {
              v139 += *(unsigned __int16*)(v142 + v78) +
                      *(unsigned __int16*)(v142 + v78 + 2);
              *(_WORD*)(v79 + 4) = v139;
            }
            v78 += 152;
            v79 += 72;
            if (++v141 >= (unsigned __int64)*(unsigned __int16*)(v50 + 40)) {
              goto LABEL_173;
            }
          }
          v85 = *(_BYTE**)(v81 + 168);
          if (v85 == nullptr) {
            v89 = v80 + v78;
            v83 = *(unsigned int*)(v142 + v78 + 176);
            if ((_DWORD)v83 != 0) {
              v88 = 0;
              v84 = nullptr;
              goto LABEL_158;
            }
            v88 = *(unsigned int*)(v89 + 188);
            v84 = a2;
            v83 = a3;
            HIDWORD(v143_.v144) = *(_DWORD*)(v89 + 188);
            v102 = *(_DWORD*)(v89 + 192);
            goto LABEL_157;
          }
          if (*v85 != 46) {
            goto LABEL_143;
          }
          v86 = (unsigned __int8)v85[1];
          if (v86 > 0x2E) {
            if (v86 != 47 && v86 != 92) {
              goto LABEL_143;
            }
          }
          else {
            if (v85[1] == 0) {
              v93 = (unsigned int)((_DWORD)v48 - v138 + 255);
              v94 = v138;
              v95 = *(_QWORD*)(v142 + v78 + 136);
            LABEL_155:
              strncpy_plt(v94, v95, v93);
              v84 = v48;
              v48[255] = 0;
            LABEL_156:
              v83 = 0;
              v88 = *(unsigned int*)(v142 + v78 + 180);
              HIDWORD(v143_.v144) = *(_DWORD*)(v142 + v78 + 180);
              v102 = *(_DWORD*)(v142 + v78 + 184);
            LABEL_157:
              LODWORD(v143_.v144) = v102;
              goto LABEL_158;
            }
            if (v86 != 46 ||
                (v87 = (unsigned __int8)v85[2]) != 92 && v87 != 47) {
            LABEL_143:
              v96 = strncpy_plt(v140, *(_QWORD*)(v81 + 168), 255);
              *(_BYTE*)(v96 + 255) = 0;
              v97 = strlen_plt(v96);
              v98 = v97;
              if (v97 != 0) {
                v99 = (unsigned __int8)v140[v97 - 1];
                if (v99 != 47 && v99 != 92) {
                  if (v97 <= 0xFD) {
                    *(_WORD*)&v140[strlen_plt(v140)] = 47;
                  }
                  ++v98;
                }
              }
              else {
                v98 = 0;
              }
              v100 = *(_QWORD*)(v142 + v78 + 136);
              v101 = strlen_plt(v100);
              if (v101 + (unsigned __int64)v98 <= 0xFF) {
                strncat_plt(v140, v100, v101);
              }
              v84 = v140;
              v140[255] = 0;
              goto LABEL_156;
            }
          }
          v136 = strlen_plt(*(_QWORD*)(v81 + 168));
          strncpy_plt(v138, v85, v137);
          v90 = v137 - v136;
          v91 = v136;
          v92 = *(unsigned __int8*)(*(_QWORD*)(v81 + 168) + v136 - 1);
          if (v92 != 47 && v92 != 92) {
            if (v90 != 0) {
              --v90;
              *(_BYTE*)(v138 + v136) = 47;
              v91 = v136 + 1;
            }
            *(_BYTE*)(v138 + v91) = 0;
          }
          v93 = v90;
          v94 = v138 + v91;
          v95 = *(_QWORD*)(v142 + v78 + 136);
          goto LABEL_155;
        }
        FSS_free_plt(a1, v14[5]);
      }
      v111 = v14[14];
      if (v111 != 0) {
        FSS_free_plt(a1, v111);
      }
      goto LABEL_82;
    }
  LABEL_89:
    FsLtt_done_plt(v50);
    FsScratchSpace_release_plt(*(_QWORD*)(a1 + 128) + 16792LL, a1, v50);
  LABEL_90:
    v68 = v14[1];
    if (v68 != 0) {
      FSS_free_plt(a1, v68);
    }
    FSS_free_plt(a1, v14);
    goto LABEL_93;
  }
  return v14;
}

__int64 fs_font_418590(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v6 = strlen_plt(a2);
  v7 = FSS_malloc_plt(a1, 32);
  if (v7 != 0) {
    v8 = v7;
    v9 = FSS_malloc_plt(a1, v6 + 1);
    *(_QWORD*)v8 = v9;
    if (v9 != 0) {
      strncpy_plt(v9, a2, v6);
      *(_BYTE*)(*(_QWORD*)v8 + v6) = 0;
      *(_QWORD*)(v8 + 8) = a3;
      *(_DWORD*)(v8 + 16) = 1;
      *(_QWORD*)(v8 + 24) = *(_QWORD*)(a1 + 8);
      *(_QWORD*)(a1 + 8) = v8;
      ++*(_DWORD*)(a3 + 124);
      return 0;
    }
    FSS_free_plt(a1, v8);
  }
  *(_DWORD*)(a1 + 72) = 201;
  return 201;
}

__int64 FSS_delete_font(__int64 a1, char* a2, const char* a3)
{
  __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  void* v17;
  __int64 v18;

  v3 = *(_QWORD*)(a1 + 8);
  if (v3 == 0) {
    goto LABEL_28;
  }
  if (a2 == nullptr) {
    if (*(_QWORD*)v3 != 0) {
      while (1) {
        v6 = v3;
        v3 = *(_QWORD*)(v3 + 24);
        if (v3 == 0) {
          goto LABEL_28;
        }
        if (*(_QWORD*)v3 == 0) {
          v8 = *(_QWORD*)(v3 + 8);
          if (v8 == 0) {
            goto LABEL_28;
          }
          goto LABEL_13;
        }
      }
    }
    v6 = 0;
    v8 = *(_QWORD*)(v3 + 8);
    if (v8 != 0) {
      goto LABEL_13;
    }
  LABEL_28:
    result = 301;
    goto LABEL_29;
  }
  v6 = 0;
  while (1) {
    v7 = v3;
    if (*(_QWORD*)v3 != 0 &&
        (unsigned int)strcmp_plt(*(void**)v3, a2, a3) == 0) {
      break;
    }
    v3 = *(_QWORD*)(v3 + 24);
    v6 = v7;
    if (v3 == 0) {
      goto LABEL_28;
    }
  }
  v8 = *(_QWORD*)(v3 + 8);
  if (v8 == 0) {
    goto LABEL_28;
  }
LABEL_13:
  v9 = *(_DWORD*)(v3 + 16);
  if (v9 == 0) {
    goto LABEL_39;
  }
  v10 = v9 - 1;
  if (v10 != 0) {
    result = 0;
    *(_DWORD*)(v3 + 16) = v10;
    goto LABEL_29;
  }
  v11 = *(_DWORD*)(v8 + 124);
  if (v11 == 0) {
    goto LABEL_39;
  }
  if (v11 == 1) {
    if (*(_WORD*)(v8 + 32) != 0) {
      v12 = *(_QWORD*)(v8 + 40);
      v13 = 0;
      while (1) {
        v14 = *(_QWORD*)(v12 + 56);
        if (*(_DWORD*)(v14 + 52) <= 1u) {
          v15 = *(_QWORD*)(*(_QWORD*)(a1 + 128) + 8LL);
          if (v15 != 0) {
            break;
          }
        }
      LABEL_19:
        ++v13;
        v12 += 72;
        if (v13 >= *(unsigned __int16*)(v8 + 32)) {
          goto LABEL_31;
        }
      }
      while (*(_QWORD*)v15 != v14 || *(_DWORD*)(v15 + 284) == 0) {
        v15 = *(_QWORD*)(v15 + 288);
        if (v15 == 0) {
          goto LABEL_19;
        }
      }
      goto LABEL_32;
    }
  LABEL_31:
    if ((unsigned __int8)any_used_fntset_or_unshared_lfnt_table_ptrs_plt(
            a1, v8) != 0) {
    LABEL_32:
      result = 610;
      goto LABEL_29;
    }
  }
  if (*(_WORD*)(a1 + 24) != 0 && *(_QWORD*)(a1 + 16) == v8) {
    if (*(_DWORD*)(v8 + 120) != 0) {
      TYPESET_clear_plt(a1, a1 + 16);
      *(_QWORD*)(a1 + 48) = 0;
      *(_QWORD*)(a1 + 56) = 0;
      *(_DWORD*)(a1 + 64) = -1;
      goto LABEL_37;
    }
  LABEL_39:
    result = 313;
    goto LABEL_29;
  }
LABEL_37:
  --*(_DWORD*)(v8 + 124);
  v17 = *(void**)v3;
  --*(_DWORD*)(v3 + 16);
  FSS_free_plt(a1, v17);
  v18 = *(_QWORD*)(v3 + 24);
  if (v6 != 0) {
    *(_QWORD*)(v6 + 24) = v18;
  }
  else {
    *(_QWORD*)(a1 + 8) = v18;
  }
  FSS_free_plt(a1, v3);
  squeeze_table_ptrs_plt(a1, v8);
  if (*(_DWORD*)(v8 + 120) == 0 && *(_DWORD*)(v8 + 124) == 0) {
    kill_fntset_plt(a1, v8);
  }
  result = 0;
LABEL_29:
  *(_DWORD*)(a1 + 72) = result;
  return result;
}

__int64 FSS_get_link_info(__int64 a1, __int64 a2, unsigned __int8* a3,
                          __int64 a4)
{
  int v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  __int64 v13;
  __int64 v14;

  *(_DWORD*)(a1 + 72) = 0;
  if (a3 != nullptr) {
    v7 = *a3;
    if (v7 == 80) {
      goto LABEL_18;
    }
    v9 = a3[1];
    v10 = a3[2];
    if (v7 == 79 && v9 == 84 && v10 == 84) {
      goto LABEL_18;
    }
    v8 = 0;
    v11 = ((v9 << 8) | (v10 << 16) | v7) == 0x54544C ? 2 : 0;
    if (v11 != 2) {
      goto LABEL_18;
    }
  }
  else {
    v8 = a2;
    if ((unsigned __int8)fontfile_type_plt(a1, a2, 0, 0) != 2) {
      goto LABEL_18;
    }
  }
  if (a4 == 0) {
  LABEL_18:
    *(_DWORD*)(a1 + 72) = 442;
    return 442;
  }
  FsLtt_init_plt(a1, a4);
  if (a3 != nullptr) {
    FsLtt_load_plt(a4, a3, 0);
  }
  else if (v8 != 0) {
    v13 = FS_open_plt(a1, v8);
    if (v13 == 0) {
      *(_DWORD*)(a1 + 72) = 102;
      return 102;
    }
    v14 = v13;
    FsLtt_read_plt(a4, v13, 0);
    FS_close_plt(a1, v14);
  }
  if (*(_DWORD*)(a1 + 72) == 0) {
    return 0;
  }
  FsLtt_done_plt(a4);
  return *(unsigned int*)(a1 + 72);
}

__int64 fontfile_type(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int16* v4;
  __int16 v5;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;

  v12 = 0;
  if (a3 != 0) {
    v4 = (__int16*)(a3 + a4);
    v5 = *v4;
    LOBYTE(v4) = *((_BYTE*)v4 + 2);
    LOWORD(v12) = v5;
    BYTE2(v12) = (_BYTE)v4;
  LABEL_3:
    HIBYTE(v12) = 0;
    if ((unsigned __int8)v12 == 80) {
      return 6;
    }
    if ((unsigned __int8)v12 == 79 && BYTE1(v12) == 84 && BYTE2(v12) == 84) {
      return 7;
    }
    goto LABEL_14;
  }
  if (a2 != 0) {
    v9 = FS_open_plt(a1, a2);
    if (v9 != 0) {
      v10 = v9;
      if ((unsigned int)FS_seek_plt(a1, v9, a4, 0) != 0) {
        FS_close_plt(a1, v10);
        return 127;
      }
      v11 = FS_read_plt(a1, v10, &v12, 3);
      FS_close_plt(a1, v10);
      if (v11 == 3) {
        goto LABEL_3;
      }
    }
    return 127;
  }
  HIBYTE(v12) = 0;
LABEL_14:
  if (v12 == 5526604) {
    return 2;
  }
  else {
    return 0;
  }
}

__int64 FSS_get_font_path(__int64 a1, void* this_, const char* a3, __int64 a4,
                          unsigned int a5, _DWORD* a6, _DWORD* a7, _DWORD* a8)
{
  char* v12;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  _DWORD* v24;
  _DWORD* v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  __int64 result;
  __int64 v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  _DWORD* v38;
  char* v39;

  v12 = (char*)a3;
  if (this_ != nullptr) {
    v15 = (_QWORD*)a1;
    while (1) {
      v16 = v15[1];
      if (v16 != 0) {
        while (*(_QWORD*)v16 == 0 ||
               (unsigned int)strcmp_plt(*(void**)v16, (const char*)this_, a3) !=
                   0) {
          v16 = *(_QWORD*)(v16 + 24);
          if (v16 == 0) {
            goto LABEL_3;
          }
        }
        v17 = *(_QWORD**)(v16 + 8);
        if (v17 != nullptr) {
          break;
        }
      }
    LABEL_3:
      v15 = (_QWORD*)*v15;
      if (v15 == nullptr) {
        goto LABEL_18;
      }
    }
  }
  else {
    v18 = (_QWORD*)a1;
    while (1) {
      v19 = (_QWORD*)v18[1];
      if (v19 != nullptr) {
        while (*v19 != 0) {
          v19 = (_QWORD*)v19[3];
          if (v19 == nullptr) {
            goto LABEL_13;
          }
        }
        v17 = (_QWORD*)v19[1];
        if (v17 != nullptr) {
          break;
        }
      }
    LABEL_13:
      v18 = (_QWORD*)*v18;
      if (v18 == nullptr) {
      LABEL_18:
        if (*(_WORD*)(a1 + 24) != 0 && (v20 = *(_QWORD*)(a1 + 16)) != 0 &&
            (v21 = *(unsigned __int16*)(v20 + 32)) >= 2) {
          v28 = *(_QWORD*)(v20 + 40);
          if (this_ != nullptr) {
            v36 = 0;
            while (*(_QWORD*)v28 == 0 ||
                   (unsigned int)strcmp_plt(this_, *(const char**)v28, a3) !=
                       0) {
              ++v36;
              v28 += 72;
              if (v36 >= v21) {
                goto LABEL_21;
              }
            }
          }
          else {
            v37 = 0;
            while (*(_QWORD*)v28 != 0) {
              ++v37;
              v28 += 72;
              if (v37 >= v21) {
                goto LABEL_21;
              }
            }
          }
        }
        else {
        LABEL_21:
          v38 = a7;
          v39 = v12;
          v22 = *(_QWORD*)(a1 + 8);
          if (v22 == 0) {
          LABEL_47:
            result = 301;
            goto LABEL_57;
          }
          v23 = *(_QWORD*)(a1 + 16);
          v24 = a8;
          v25 = a6;
          if (this_ != nullptr) {
            while (1) {
              v26 = *(_QWORD*)(v22 + 8);
              if (v26 != v23) {
                v27 = *(unsigned __int16*)(v26 + 32);
                if (v27 >= 2) {
                  break;
                }
              }
            LABEL_24:
              v22 = *(_QWORD*)(v22 + 24);
              if (v22 == 0) {
                goto LABEL_47;
              }
            }
            v28 = *(_QWORD*)(v26 + 40);
            v29 = 0;
            while (*(_QWORD*)v28 == 0 ||
                   (unsigned int)strcmp_plt(this_, *(const char**)v28, a3) !=
                       0) {
              ++v29;
              v28 += 72;
              if (v29 >= v27) {
                goto LABEL_24;
              }
            }
          }
          else {
            while (1) {
              v33 = *(_QWORD*)(v22 + 8);
              if (v33 != v23) {
                v34 = *(unsigned __int16*)(v33 + 32);
                if (v34 >= 2) {
                  break;
                }
              }
            LABEL_40:
              v22 = *(_QWORD*)(v22 + 24);
              if (v22 == 0) {
                goto LABEL_47;
              }
            }
            v28 = *(_QWORD*)(v33 + 40);
            v35 = 0;
            while (*(_QWORD*)v28 != 0) {
              ++v35;
              v28 += 72;
              if (v35 >= v34) {
                goto LABEL_40;
              }
            }
          }
          a6 = v25;
          a8 = v24;
          a7 = v38;
          v12 = v39;
        }
        v17 = fs_font_417380(a1, *(char**)(*(_QWORD*)(v28 + 56) + 8LL),
                             *(_QWORD*)(*(_QWORD*)(v28 + 56) + 16LL),
                             *(_DWORD*)(*(_QWORD*)(v28 + 56) + 24LL),
                             *(_DWORD*)(*(_QWORD*)(v28 + 56) + 28LL),
                             *(_DWORD*)(*(_QWORD*)(v28 + 56) + 32LL), nullptr);
        if (v17 != nullptr) {
          break;
        }
        return *(unsigned int*)(a1 + 72);
      }
    }
  }
  v30 = v17[1];
  if (v30 != 0) {
    if (strlen_plt(v17[1]) >= (unsigned __int64)a5) {
      result = 310;
      goto LABEL_57;
    }
    *(_BYTE*)(strncpy_plt(a4, v30, a5 - 1) + a5 - 1) = 0;
  }
  *(_QWORD*)v12 = v17[2];
  *a7 = *((_DWORD*)v17 + 6);
  *a8 = *((_DWORD*)v17 + 7);
  if (*((_WORD*)v17 + 16) != 1) {
  LABEL_39:
    *(_DWORD*)(a1 + 72) = 0;
    return 0;
  }
  v31 = *(_QWORD*)(v17[5] + 56LL);
  if (v31 != 0) {
    *a6 = *(_DWORD*)(v31 + 24);
    goto LABEL_39;
  }
  result = 304;
LABEL_57:
  *(_DWORD*)(a1 + 72) = result;
  return result;
}

#pragma GCC visibility pop
