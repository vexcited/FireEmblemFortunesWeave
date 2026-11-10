#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__attribute__((swiftcall)) void nandroid_M3UParser_unquoteString_plt(PSEUDO_X8,
                                                                     _QWORD);
__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 SdkRoutine_4d4780(__int64);
__int64 SdkRoutine_86e160(_QWORD, _QWORD);
__int64 SdkRoutine_86f350(_QWORD, _QWORD);
__int64 SdkRoutine_86fe70(_QWORD, _QWORD);
__int64 SdkRoutine_870550(_QWORD, _QWORD);
__int64 SdkRoutine_8705a0(_QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 nandroid_AMessage_AMessage_plt_86da50(void);
__int64 nandroid_AMessage_findInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findInt64_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findString_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_setInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_setInt64_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_setString_plt_86de10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nandroid_AString_AString_plt_86d9f0(_QWORD);
__int64 nandroid_AString_AString_plt_86da90(_QWORD, _QWORD);
__int64 nandroid_AString_AString_plt_86dba0(_QWORD, _QWORD);
__int64 nandroid_AString_AString_plt_86f440(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nandroid_AString_Destroy_AString_plt(_QWORD);
__int64 nandroid_AString_append_plt_86db20(_QWORD, _QWORD);
__int64 nandroid_AString_append_plt_86f320(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AString_c_str_plt(_QWORD);
__int64 nandroid_AString_clear_plt(_QWORD);
__int64 nandroid_AString_empty_plt(_QWORD);
__int64 nandroid_AString_erase_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AString_find_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AString_setTo_plt_86f3a0(_QWORD, _QWORD);
__int64 nandroid_AString_setTo_plt_86f3b0(_QWORD, _QWORD);
__int64 nandroid_AString_size_plt(_QWORD);
__int64 nandroid_AString_startsWith_plt(_QWORD, _QWORD);
__int64 nandroid_AString_tolower_plt(_QWORD);
__int64 nandroid_AString_trim_plt(_QWORD);
__int64 nandroid_M3UParser_codecIsType_plt(_QWORD, _QWORD);
__int64 nandroid_M3UParser_parseByteRange_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nandroid_M3UParser_parseCipherInfo_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_M3UParser_parseDiscontinuitySequence_plt(_QWORD, _QWORD);
__int64 nandroid_M3UParser_parseMap_plt(void);
__int64 nandroid_M3UParser_parseMedia_plt(_QWORD, _QWORD);
__int64 nandroid_M3UParser_parseMetaDataDuration_plt(_QWORD, _QWORD, _QWORD,
                                                     _QWORD);
__int64 nandroid_M3UParser_parseMetaData_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_M3UParser_parseStreamInf_plt(void);
__int64 nandroid_RefBase_decStrong_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_incStrong_plt(_QWORD, _QWORD);
__int64 nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(_QWORD);
__int64 nandroid_SortedVectorImpl_indexOf_plt(_QWORD, _QWORD);
__int64 nandroid_VectorImpl_Destroy_VectorImpl_plt(_QWORD);
__int64 nandroid_VectorImpl_clear_plt(_QWORD);
__int64 nandroid_VectorImpl_editItemLocation_plt(_QWORD, _QWORD);
__int64 nandroid_VectorImpl_finish_vector_plt(_QWORD);
__int64 nandroid_VectorImpl_insertAt_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nandroid_VectorImpl_push_plt_86e780(_QWORD);
__int64 nandroid_VectorImpl_setCapacity_plt(_QWORD, _QWORD);
__int64 nandroid_sp_report_race_plt(_QWORD);
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_os_GetTlsValue_plt(_QWORD);
__int64 strcasecmp_plt(_QWORD, _QWORD);
__int64 strchr_plt(void* this_, const char*);
__int64 strlen_plt(_QWORD);
__int64 strncasecmp_plt(_QWORD, _QWORD, _QWORD);
__int64 strstr_plt(void* this_, const char*);
__int64 strtod_plt(_QWORD, _QWORD);
__int64 strtoul_plt(_QWORD, _QWORD, _QWORD);
extern __int64 SdkData_e88330;
extern __int64 SdkData_e88ac8;
extern __int64 SdkData_e88ae0;
extern __int64 SdkData_e88ae8;
extern void (*SdkData_e88338[493])();
struct PseudoSret nandroid_M3UParser_MediaGroup_getTrackInfo_plt(_QWORD, _QWORD,
                                                                 _QWORD);
__int64 nandroid_M3UParser_getAacAudioObjectType(void* this_, __int64 a2,
                                                 const char* a3);
__int64 M3UParser_528a40(void* a1, _BYTE* a2, __int64 a3);
__int64 nandroid_M3UParser_parse(void* this_, _BYTE* a2, unsigned __int64 a3);
bool nandroid_M3UParser_groupAt(__int64 a1, unsigned __int64 a2, int* a3,
                                __int64 a4, __int64 a5);
bool nandroid_M3UParser_getGroupWithName(__int64 a1, __int64 a2, int* a3,
                                         __int64 a4);
bool nandroid_M3UParser_hasTypeBasedOnCodecsOnly(void* this_,
                                                 unsigned __int64 a2,
                                                 const char* a3);
__int64 nandroid_M3UParser_parseMetaDataDuration(__int64 a1, __int64* a2,
                                                 __int64 a3, _QWORD* a4);
__int64 nandroid_M3UParser_parseStreamInf(__int64 a1, __int64 a2, __int64* a3);
__int64 nandroid_M3UParser_parseMap(__int64 a1, __int64 a2, __int64* a3);
__int64 M3UParser_52d370(_QWORD* a1);
__int64 M3UParser_52d7a0(_QWORD* a1);
__int64 M3UParser_52db90(_QWORD* a1);

__int64 nandroid_M3UParser_getAacAudioObjectType(void* this_, __int64 a2,
                                                 const char* a3)
{
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD v15[3];
  _QWORD v16[3];
  _QWORD v17[3];
  __int64 v18;

  v4 = *(_QWORD*)(*((_QWORD*)this_ + 15) + 32 * a2 + 24);
  v18 = v4;
  if (v4 != 0) {
    nandroid_RefBase_incStrong_plt(v4, &v18);
  }
  memset(v17, 0, sizeof(v17));
  nandroid_AString_AString_plt_86d9f0(v17);
  if ((nandroid_AMessage_findString_plt(v18, a3, v17) & 1) != 0) {
    v5 = 0;
    nandroid_AString_Destroy_AString_plt(v17);
    v6 = v18;
    if (v18 == 0) {
      return v5;
    }
    goto LABEL_19;
  }
  memset(v16, 0, sizeof(v16));
  nandroid_AString_AString_plt_86d9f0(v16);
  if ((nandroid_AMessage_findString_plt(v18, "codecs", v16) & 1) == 0 ||
      (LOBYTE(v15[0]) = 44, nandroid_AString_append_plt_86f320(v16, v15, 1),
       (v7 = nandroid_AString_find_plt(v16, ",", 0)) < 0)) {
  LABEL_13:
    v5 = 0;
  }
  else {
    v8 = v7;
    v9 = 0;
    while (1) {
      memset(v15, 0, sizeof(v15));
      nandroid_AString_AString_plt_86f440(v15, v16, v9, v8 - v9);
      nandroid_AString_trim_plt(v15);
      v10 = nandroid_AString_c_str_plt(v15);
      if ((unsigned int)strcasecmp_plt(v10, "mp4a.40.2") == 0) {
        v13 = 2;
        goto LABEL_17;
      }
      v11 = nandroid_AString_c_str_plt(v15);
      if ((unsigned int)strcasecmp_plt(v11, "mp4a.40.5") == 0) {
        v13 = 5;
        goto LABEL_17;
      }
      v12 = nandroid_AString_c_str_plt(v15);
      if ((unsigned int)strcasecmp_plt(v12, "mp4a.40.29") == 0) {
        break;
      }
      v9 = v8 + 1;
      nandroid_AString_Destroy_AString_plt(v15);
      v8 = nandroid_AString_find_plt(v16, ",", v8 + 1);
      if (v8 < 0) {
        goto LABEL_13;
      }
    }
    v13 = 29;
  LABEL_17:
    nandroid_AMessage_setInt32_plt(v18, "aac-profile", v13);
    nandroid_AString_Destroy_AString_plt(v15);
    v5 = 1;
  }
  nandroid_AString_Destroy_AString_plt(v16);
  nandroid_AString_Destroy_AString_plt(v17);
  v6 = v18;
  if (v18 != 0) {
  LABEL_19:
    nandroid_RefBase_decStrong_plt(v6, &v18);
  }
  return v5;
}

__int64 M3UParser_528a40(void* a1, _BYTE* a2, __int64 a3)
{
  __int64 result;
  __int64 v8;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 i;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 j;
  __int64 v24;

  nandroid_AString_clear_plt(a3);
  if ((unsigned int)strncasecmp_plt("http://", a1, 7) != 0 &&
      (unsigned int)strncasecmp_plt("https://", a1, 8) != 0 &&
      (unsigned int)strncasecmp_plt("file://", a1, 7) != 0) {
    return 0;
  }
  result = strncasecmp_plt("data:", a2, 5);
  if ((_DWORD)result != 0) {
    v8 = strstr_plt(a1, "//");
    if ((unsigned int)strncasecmp_plt("http://", a2, 7) != 0 &&
        (unsigned int)strncasecmp_plt("https://", a2, 8) != 0) {
      if (*a2 == 47) {
        if (strchr_plt((void*)(v8 + 2), (const char*)((__int64*)0x28LL) + 7) !=
            0) {
          nandroid_AString_setTo_plt_86f3b0(a3, a1);
        }
        else {
          nandroid_AString_setTo_plt_86f3a0(a3, a1);
        }
        nandroid_AString_append_plt_86db20(a3, a2);
      }
      else {
        v10 = strchr_plt(a1, (const char*)((__int64*)0x38LL) + 7);
        if (v10 != 0) {
          v11 = v10 - (_QWORD)a1;
        }
        else {
          v11 = strlen_plt(a1);
        }
        v12 = v11 - 1;
        while ((v12 & 0x8000000000000000LL) == 0) {
          v13 = *((unsigned __int8*)a1 + v12--);
          if (v13 == 47) {
            v11 = v12 + 1;
            break;
          }
        }
        if (v11 >= v8 - (__int64)a1 + 1) {
          nandroid_AString_setTo_plt_86f3b0(a3, a1);
        }
        else {
          nandroid_AString_setTo_plt_86f3a0(a3, a1);
        }
        v14 = nandroid_AString_find_plt(a3, "//", 0) + 2;
        nandroid_AString_append_plt_86db20(a3, "/");
        nandroid_AString_append_plt_86db20(a3, a2);
        v15 = nandroid_AString_find_plt(a3, "/../", v14);
        if (v15 != -1) {
          for (i = v15; i != -1;
               i = nandroid_AString_find_plt(a3, "/../", v14)) {
            if (i != 0 &&
                (v20 = i - 1,
                 i - 1 < (unsigned __int64)nandroid_AString_size_plt(a3))) {
              v21 = nandroid_AString_c_str_plt(a3);
              if (i >= 1) {
                while (*(_BYTE*)(v21 + v20) != 47) {
                  if (v20-- <= 0) {
                    goto LABEL_36;
                  }
                }
              }
            }
            else {
            LABEL_36:
              v20 = -1;
            }
            if (v20 <= v14) {
              v17 = 3;
              v18 = a3;
              v19 = i;
            }
            else {
              v18 = a3;
              v19 = v20;
              v17 = i - v20 + 3;
            }
            nandroid_AString_erase_plt(v18, v19, v17);
          }
        }
        for (j = -1;; j = -1) {
          do {
            v24 = j;
            j = nandroid_AString_find_plt(a3, "./", j + 1);
          } while (j != -1);
          if (v24 == -1) {
            break;
          }
          nandroid_AString_erase_plt(a3, v24, 2);
        }
      }
    }
    else {
      nandroid_AString_setTo_plt_86f3a0(a3, a2);
    }
    return 1;
  }
  return result;
}

__int64 nandroid_M3UParser_parse(void* this_, _BYTE* a2, unsigned __int64 a3)
{
  char* v4;
  int v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char v11;
  unsigned int v12;
  __int64 v13;
  _QWORD** v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  void* v25;
  _BYTE* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  void(__attribute__((noreturn)) * v37)();
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  char v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  struct {
    __int64 v56;
    __int64 v57;
    __int64 v58;
  } v56_;
  __int64 v59;
  _QWORD v60[3];
  __int64 v61;

  v59 = 0;
  if (a3 == 0) {
  LABEL_99:
    if (*((_QWORD*)this_ + 16) == 0) {
      goto LABEL_134;
    }
    if ((*((_BYTE*)this_ + 65) & 1) != 0) {
    LABEL_101:
      v38 = 24;
      v39 = 0;
      while (1) {
        v40 = *((_QWORD*)this_ + 15);
        v55 = 0;
        v41 = *(_QWORD*)(v40 + v38);
        v55 = v41;
        if (v41 != 0) {
          nandroid_RefBase_incStrong_plt(v41, &v55);
        }
        v56_.v57 = 0;
        v56_.v58 = 0;
        v56_.v56 = 0;
        nandroid_AString_AString_plt_86d9f0(&v56_.v56);
        if ((nandroid_AMessage_findString_plt(v55, "audio", &v56_.v56) & 1) !=
            0) {
          nandroid_AString_AString_plt_86dba0(v60, &v56_.v56);
          v61 = 0;
          v42 = nandroid_SortedVectorImpl_indexOf_plt((char*)this_ + 192, v60);
          if (v61 != 0) {
            nandroid_RefBase_decStrong_plt(v61, &v61);
          }
          nandroid_AString_Destroy_AString_plt(v60);
          nandroid_AString_Destroy_AString_plt(&v56_.v56);
          if (v42 < 0) {
          LABEL_120:
            v45 = 0;
            v46 = v55;
            if (v55 == 0) {
              goto LABEL_125;
            }
          LABEL_124:
            nandroid_RefBase_decStrong_plt(v46, &v55);
            goto LABEL_125;
          }
        }
        else {
          nandroid_AString_Destroy_AString_plt(&v56_.v56);
        }
        v56_.v57 = 0;
        v56_.v58 = 0;
        v56_.v56 = 0;
        nandroid_AString_AString_plt_86d9f0(&v56_.v56);
        if ((nandroid_AMessage_findString_plt(v55, "video", &v56_.v56) & 1) !=
            0) {
          nandroid_AString_AString_plt_86dba0(v60, &v56_.v56);
          v61 = 0;
          v43 = nandroid_SortedVectorImpl_indexOf_plt((char*)this_ + 192, v60);
          if (v61 != 0) {
            nandroid_RefBase_decStrong_plt(v61, &v61);
          }
          nandroid_AString_Destroy_AString_plt(v60);
          nandroid_AString_Destroy_AString_plt(&v56_.v56);
          if (v43 < 0) {
            goto LABEL_120;
          }
        }
        else {
          nandroid_AString_Destroy_AString_plt(&v56_.v56);
        }
        v56_.v57 = 0;
        v56_.v58 = 0;
        v56_.v56 = 0;
        nandroid_AString_AString_plt_86d9f0(&v56_.v56);
        if ((nandroid_AMessage_findString_plt(v55, "subtitles", &v56_.v56) &
             1) != 0) {
          nandroid_AString_AString_plt_86dba0(v60, &v56_.v56);
          v61 = 0;
          v44 = nandroid_SortedVectorImpl_indexOf_plt((char*)this_ + 192, v60);
          if (v61 != 0) {
            nandroid_RefBase_decStrong_plt(v61, &v61);
          }
          nandroid_AString_Destroy_AString_plt(v60);
          nandroid_AString_Destroy_AString_plt(&v56_.v56);
          if (v44 < 0) {
            goto LABEL_120;
          }
        }
        else {
          nandroid_AString_Destroy_AString_plt(&v56_.v56);
        }
        v45 = 1;
        v46 = v55;
        if (v55 != 0) {
          goto LABEL_124;
        }
      LABEL_125:
        if ((v45 & 1) == 0) {
          goto LABEL_134;
        }
        ++v39;
        v38 += 32;
        if (v39 >= *((_QWORD*)this_ + 16)) {
          goto LABEL_127;
        }
      }
    }
    v48 = *((_QWORD*)this_ + 13);
    LODWORD(v60[0]) = 0;
    if (v48 != 0 &&
        (nandroid_AMessage_findInt32_plt(v48, "target-duration", v60) & 1) !=
            0) {
      v49 = v60[0];
      *((_DWORD*)this_ + 17) = 0;
      v50 = *((_QWORD*)this_ + 13);
      *((_QWORD*)this_ + 10) = 1000000LL * v49;
      if (v50 != 0) {
        nandroid_AMessage_findInt32_plt(v50, "media-sequence",
                                        (char*)this_ + 68);
        v51 = *((_QWORD*)this_ + 16);
        *((_DWORD*)this_ + 18) = *((_DWORD*)this_ + 17) - 1 + v51;
        if (v51 != 0) {
          goto LABEL_101;
        }
      }
      else {
        v53 = *((_QWORD*)this_ + 16);
        *((_DWORD*)this_ + 18) = v53 - 1;
        if (v53 != 0) {
          goto LABEL_101;
        }
      }
    LABEL_127:
      v12 = 0;
      v47 = v59;
      if (v59 == 0) {
        return v12;
      }
    }
    else {
    LABEL_134:
      v12 = -1007;
      v47 = v59;
      if (v59 == 0) {
        return v12;
      }
    }
  LABEL_135:
    nandroid_RefBase_decStrong_plt(v47, &v59);
    return v12;
  }
  v4 = a2 - 1;
  v7 = 0;
  v54 = 0;
  v8 = 0;
  while (1) {
    v9 = v8;
    if (a3 <= v8 + 1) {
      v10 = v8 + 1;
    }
    else {
      v10 = a3;
    }
    while (a2[v9] != 10) {
      if (v10 == ++v9) {
        v9 = v10;
        break;
      }
    }
    memset(v60, 0, sizeof(v60));
    nandroid_AString_AString_plt_86d9f0(v60);
    if (v9 > v8 && v4[v9] == 13) {
      nandroid_AString_setTo_plt_86f3b0(v60, &a2[v8]);
      if ((nandroid_AString_empty_plt(v60) & 1) != 0) {
        goto LABEL_5;
      }
    }
    else {
      nandroid_AString_setTo_plt_86f3b0(v60, &a2[v8]);
      if ((nandroid_AString_empty_plt(v60) & 1) != 0) {
        goto LABEL_5;
      }
    }
    if (v7 == 0) {
      nandroid_AString_AString_plt_86da90(&v56_.v56, "#EXTM3U");
      v11 = SdkRoutine_86f350(v60, &v56_.v56);
      nandroid_AString_Destroy_AString_plt(&v56_.v56);
      if ((v11 & 1) != 0) {
        *((_BYTE*)this_ + 64) = 1;
      }
    }
    if (*((_BYTE*)this_ + 64) != 1) {
      goto LABEL_80;
    }
    if ((nandroid_AString_startsWith_plt(v60, "#EXT-X-TARGETDURATION") & 1) !=
        0) {
      if ((*((_BYTE*)this_ + 65) & 1) != 0) {
        goto LABEL_137;
      }
      v12 = nandroid_M3UParser_parseMetaData_plt(v60, (char*)this_ + 104,
                                                 "target-duration");
      if (v12 != 0) {
        goto LABEL_138;
      }
      goto LABEL_80;
    }
    if ((nandroid_AString_startsWith_plt(v60, "#EXT-X-MEDIA-SEQUENCE") & 1) !=
        0) {
      if ((*((_BYTE*)this_ + 65) & 1) != 0) {
        goto LABEL_137;
      }
      v12 = nandroid_M3UParser_parseMetaData_plt(v60, (char*)this_ + 104,
                                                 "media-sequence");
      if (v12 != 0) {
        goto LABEL_138;
      }
      goto LABEL_80;
    }
    if ((nandroid_AString_startsWith_plt(v60, "#EXT-X-KEY") & 1) != 0) {
      if ((*((_BYTE*)this_ + 65) & 1) != 0) {
        goto LABEL_137;
      }
      v12 =
          nandroid_M3UParser_parseCipherInfo_plt(v60, &v59, (char*)this_ + 40);
      if (v12 != 0) {
        goto LABEL_138;
      }
      goto LABEL_80;
    }
    if ((nandroid_AString_startsWith_plt(v60, "#EXT-X-ENDLIST") & 1) != 0) {
      *((_BYTE*)this_ + 66) = 1;
      goto LABEL_80;
    }
    if ((nandroid_AString_startsWith_plt(v60, "#EXT-X-PLAYLIST-TYPE:EVENT") &
         1) != 0) {
      *((_BYTE*)this_ + 67) = 1;
      goto LABEL_80;
    }
    if ((nandroid_AString_startsWith_plt(v60, "#EXT-X-GAP") & 1) != 0) {
      if ((*((_BYTE*)this_ + 65) & 1) != 0) {
        goto LABEL_137;
      }
      v13 = v59;
      if (v59 == 0) {
        if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
          v37 = SdkData_e88338[0];
          *(_DWORD*)SdkData_e88338[0] = 0;
          *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v37) = 1;
          __cxa_guard_release_plt(SdkData_e88330);
        }
        v14 =
            (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)SdkData_e88338[0]);
        v15 = SdkRoutine_4c3860(16, 1344, v14);
        nandroid_AMessage_AMessage_plt_86da50();
        v16 = v59;
        v17 = nandroid_RefBase_incStrong_plt(v15, &v59);
        if (v16 != 0) {
          v17 = nandroid_RefBase_decStrong_plt(v16, &v59);
        }
        if (v16 != v59) {
          nandroid_sp_report_race_plt(v17);
        }
        v13 = v15;
        v59 = v15;
      }
      nandroid_AMessage_setInt32_plt(v13, "gap", 1);
      goto LABEL_80;
    }
    if ((nandroid_AString_startsWith_plt(v60, "#EXTINF") & 1) != 0) {
      if ((*((_BYTE*)this_ + 65) & 1) != 0) {
        goto LABEL_137;
      }
      v12 = nandroid_M3UParser_parseMetaDataDuration_plt(
          v60, &v59, "durationUs", (char*)this_ + 24);
      if (v12 != 0) {
        goto LABEL_138;
      }
      goto LABEL_80;
    }
    if ((nandroid_AString_startsWith_plt(v60, "#EXT-X-DISCONTINUITY-SEQUENCE") &
         1) != 0) {
      if ((*((_BYTE*)this_ + 65) & 1) != 0) {
        goto LABEL_137;
      }
      v56_.v56 = 0;
      v12 = nandroid_M3UParser_parseDiscontinuitySequence_plt(v60, &v56_.v56);
      if (v12 == 0) {
        *((_QWORD*)this_ + 11) = v56_.v56;
      }
    LABEL_55:
      if (v12 != 0) {
        goto LABEL_138;
      }
      goto LABEL_80;
    }
    if ((nandroid_AString_startsWith_plt(v60, "#EXT-X-DISCONTINUITY") & 1) !=
        0) {
      if ((*((_BYTE*)this_ + 65) & 1) != 0) {
        goto LABEL_137;
      }
      v18 = v59;
      if (v59 == 0) {
        v19 = SdkRoutine_4d4780(1344);
        nandroid_AMessage_AMessage_plt_86da50();
        SdkRoutine_870550(&v59, v19);
        v18 = v59;
      }
      nandroid_AMessage_setInt32_plt(v18, "discontinuity", 1);
      ++*((_DWORD*)this_ + 24);
      goto LABEL_80;
    }
    if ((nandroid_AString_startsWith_plt(v60, "#EXT-X-STREAM-INF") & 1) != 0) {
      if (*((_QWORD*)this_ + 13) != 0) {
        goto LABEL_137;
      }
      *((_BYTE*)this_ + 65) = 1;
      v12 = nandroid_M3UParser_parseStreamInf_plt();
      if (v12 != 0) {
        goto LABEL_138;
      }
      goto LABEL_80;
    }
    if ((nandroid_AString_startsWith_plt(v60, "#EXT-X-BYTERANGE") & 1) == 0) {
      break;
    }
    if ((*((_BYTE*)this_ + 65) & 1) != 0) {
      goto LABEL_137;
    }
    v55 = 0;
    v56_.v56 = 0;
    v12 = nandroid_M3UParser_parseByteRange_plt(v60, v54, &v56_.v56, &v55);
    if (v12 != 0) {
      goto LABEL_55;
    }
    v20 = v59;
    if (v59 == 0) {
      v21 = SdkRoutine_4d4780(1344);
      nandroid_AMessage_AMessage_plt_86da50();
      SdkRoutine_870550(&v59, v21);
      v20 = v59;
    }
    v22 = v55;
    nandroid_AMessage_setInt64_plt(v20, "range-offset", v55);
    v23 = v56_.v56;
    nandroid_AMessage_setInt64_plt(v59, "range-length", v56_.v56);
    v54 = v23 + v22;
  LABEL_80:
    if ((nandroid_AString_startsWith_plt(v60, "#") & 1) == 0) {
      v27 = v59;
      if (v59 == 0) {
        goto LABEL_137;
      }
      if ((*((_BYTE*)this_ + 65) & 1) == 0) {
        v56_.v56 = 0;
        if ((nandroid_AMessage_findInt64_plt(v59, "durationUs", &v56_.v56) &
             1) == 0) {
        LABEL_137:
          v12 = -1007;
        LABEL_138:
          nandroid_AString_Destroy_AString_plt(v60);
          v47 = v59;
          if (v59 != 0) {
            goto LABEL_135;
          }
          return v12;
        }
        nandroid_AMessage_setInt32_plt(
            v59, "discontinuity-sequence",
            (unsigned int)(*((_DWORD*)this_ + 24) + *((_DWORD*)this_ + 22)));
        v27 = v59;
      }
      LODWORD(v56_.v56) = 0;
      LODWORD(v55) = 0;
      nandroid_AMessage_findInt32_plt(v27, "width", &v56_.v56);
      nandroid_AMessage_findInt32_plt(v59, "height", &v55);
      v28 = *((_QWORD*)this_ + 4);
      if (v28 == 0 || v28 >= (int)v55 * (__int64)(int)v56_.v56) {
        nandroid_VectorImpl_push_plt_86e780((char*)this_ + 112);
        v29 = nandroid_VectorImpl_editItemLocation_plt(
            (char*)this_ + 112, *((_QWORD*)this_ + 16) - 1LL);
        v30 = SdkRoutine_86e160(v29, v60);
        v33 = *(_QWORD*)(v29 + 24);
        v32 = (__int64*)(v29 + 24);
        v31 = v33;
        v34 = v59;
        if (v59 != 0) {
          v30 = nandroid_RefBase_incStrong_plt(v59, v32);
        }
        if (v31 != 0) {
          v30 = nandroid_RefBase_decStrong_plt(v31, v32);
        }
        if (v31 != *v32) {
          nandroid_sp_report_race_plt(v30);
        }
        *v32 = v34;
      }
      v35 = v59;
      if (v59 != 0) {
        v36 = nandroid_RefBase_decStrong_plt(v59, &v59);
        if (v35 != v59) {
          nandroid_sp_report_race_plt(v36);
        }
        v59 = 0;
      }
    }
    ++v7;
  LABEL_5:
    v8 = v9 + 1;
    nandroid_AString_Destroy_AString_plt(v60);
    if (v9 + 1 >= a3) {
      goto LABEL_99;
    }
  }
  if ((nandroid_AString_startsWith_plt(v60, "#EXT-X-MEDIA") & 1) != 0) {
    v12 = nandroid_M3UParser_parseMedia_plt(this_, v60);
    if (v12 != 0) {
      goto LABEL_138;
    }
    goto LABEL_80;
  }
  if ((nandroid_AString_startsWith_plt(v60, "#EXT-X-MAP") & 1) == 0) {
    goto LABEL_80;
  }
  v24 = nandroid_M3UParser_parseMap_plt();
  if (v24 == 0) {
    v56_.v57 = 0;
    v56_.v58 = 0;
    v56_.v56 = 0;
    nandroid_AString_AString_plt_86d9f0(&v56_.v56);
    if ((nandroid_AMessage_findString_plt(v59, "URI", &v56_.v56) & 1) != 0) {
      nandroid_AMessage_setInt64_plt(v59, "durationUs", 0);
      nandroid_AMessage_setInt64_plt(v59, "startTimeUs", 0);
      SdkRoutine_86fe70((char*)this_ + 176, &v59);
      v25 = (void*)nandroid_AString_c_str_plt((char*)this_ + 40);
      v26 = (_BYTE*)nandroid_AString_c_str_plt(&v56_.v56);
      M3UParser_528a40(v25, v26, (__int64)this_ + 152);
    }
    SdkRoutine_8705a0(&v59);
    nandroid_AString_Destroy_AString_plt(&v56_.v56);
    goto LABEL_80;
  }
  v12 = v24;
  nandroid_AString_Destroy_AString_plt(v60);
  v47 = v59;
  if (v59 != 0) {
    goto LABEL_135;
  }
  return v12;
}

bool nandroid_M3UParser_groupAt(__int64 a1, unsigned __int64 a2, int* a3,
                                __int64 a4, __int64 a5)
{
  unsigned __int64 v5;
  __int64 v10;
  int* v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v19;
  __int64 v20;

  v5 = *(_QWORD*)(a1 + 208);
  if (a2 < v5) {
    v10 = *(_QWORD*)(*(_QWORD*)(a1 + 200) + 32 * a2 + 24);
    v20 = v10;
    if (v10 != 0) {
      v11 = a3;
      nandroid_RefBase_incStrong_plt(v10, &v20);
      a3 = v11;
    }
    if (a3 != nullptr) {
      v12 = *(_DWORD*)(v20 + 40);
      if (v12 != 0) {
        if (v12 == 2) {
          v13 = 4;
        }
        else {
          v13 = 0;
        }
        if (v12 == 1) {
          v14 = 1;
        }
        else {
          v14 = v13;
        }
      }
      else {
        v14 = 2;
      }
      *a3 = v14;
    }
    if (a4 != 0) {
      nandroid_AString_clear_plt(a4);
      SdkRoutine_86e160(a4, v20 + 16);
    }
    if (a5 != 0) {
      nandroid_VectorImpl_clear_plt(a5);
      nandroid_VectorImpl_setCapacity_plt(a5, *(_QWORD*)(v20 + 64));
      v15 = v20;
      if (*(_QWORD*)(v20 + 64) != 0) {
        v16 = 0;
        do {
          v17 = nandroid_AString_c_str_plt(a1 + 40);
          *(struct PseudoSret*)(&v19) =
              nandroid_M3UParser_MediaGroup_getTrackInfo_plt(v15, v16, v17);
          nandroid_VectorImpl_insertAt_plt(a5, &v19, *(_QWORD*)(a5 + 16), 1);
          if (v19 != 0) {
            nandroid_RefBase_decStrong_plt(v19, &v19);
          }
          v15 = v20;
          ++v16;
        } while (v16 < *(_QWORD*)(v20 + 64));
      }
      goto LABEL_23;
    }
    v15 = v20;
    if (v20 != 0) {
    LABEL_23:
      nandroid_RefBase_decStrong_plt(v15, &v20);
    }
  }
  return a2 < v5;
}

bool nandroid_M3UParser_getGroupWithName(__int64 a1, __int64 a2, int* a3,
                                         __int64 a4)
{
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  _QWORD v16[3];
  _QWORD v17[3];
  __int64 v18;

  nandroid_AString_AString_plt_86da90(v16, a2);
  nandroid_AString_AString_plt_86dba0(v17, v16);
  v18 = 0;
  v7 = nandroid_SortedVectorImpl_indexOf_plt(a1 + 192, v17);
  if (v18 != 0) {
    nandroid_RefBase_decStrong_plt(v18, &v18);
  }
  nandroid_AString_Destroy_AString_plt(v17);
  nandroid_AString_Destroy_AString_plt(v16);
  if ((v7 & 0x8000000000000000LL) == 0) {
    v8 = *(_QWORD*)(*(_QWORD*)(a1 + 200) + 32 * v7 + 24);
    v17[0] = v8;
    if (v8 != 0) {
      nandroid_RefBase_incStrong_plt(v8, v17);
    }
    if (a3 != nullptr) {
      v9 = *(_DWORD*)(v17[0] + 40LL);
      if (v9 != 0) {
        if (v9 == 2) {
          v10 = 4;
        }
        else {
          v10 = 0;
        }
        if (v9 == 1) {
          v11 = 1;
        }
        else {
          v11 = v10;
        }
      }
      else {
        v11 = 2;
      }
      *a3 = v11;
    }
    if (a4 != 0) {
      nandroid_VectorImpl_clear_plt(a4);
      nandroid_VectorImpl_setCapacity_plt(a4, *(_QWORD*)(v17[0] + 64LL));
      v12 = v17[0];
      if (*(_QWORD*)(v17[0] + 64LL) != 0) {
        v13 = 0;
        do {
          v14 = nandroid_AString_c_str_plt(a1 + 40);
          *(struct PseudoSret*)(v16) =
              nandroid_M3UParser_MediaGroup_getTrackInfo_plt(v12, v13, v14);
          nandroid_VectorImpl_insertAt_plt(a4, v16, *(_QWORD*)(a4 + 16), 1);
          if (v16[0] != 0) {
            nandroid_RefBase_decStrong_plt(v16[0], v16);
          }
          v12 = v17[0];
          ++v13;
        } while (v13 < *(_QWORD*)(v17[0] + 64LL));
      }
      goto LABEL_23;
    }
    v12 = v17[0];
    if (v17[0] != 0) {
    LABEL_23:
      nandroid_RefBase_decStrong_plt(v12, v17);
    }
  }
  return v7 >= 0;
}

bool nandroid_M3UParser_hasTypeBasedOnCodecsOnly(void* this_,
                                                 unsigned __int64 a2,
                                                 const char* a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 v8;
  char v9;
  _QWORD v11[3];
  _QWORD v12[3];
  __int64 v13;

  if (a2 >= *((_QWORD*)this_ + 16)) {
    return false;
  }
  else {
    v4 = *(_QWORD*)(*((_QWORD*)this_ + 15) + 32 * a2 + 24);
    v13 = v4;
    if (v4 != 0) {
      nandroid_RefBase_incStrong_plt(v4, &v13);
    }
    memset(v12, 0, sizeof(v12));
    nandroid_AString_AString_plt_86d9f0(v12);
    if ((nandroid_AMessage_findString_plt(v13, "codecs", v12) & 1) != 0) {
      LOBYTE(v11[0]) = 44;
      nandroid_AString_append_plt_86f320(v12, v11, 1);
      v5 = 0;
      do {
        v6 = nandroid_AString_find_plt(v12, ",", v5);
        v7 = v6 >= 0;
        if (v6 < 0) {
          break;
        }
        v8 = v6;
        memset(v11, 0, sizeof(v11));
        nandroid_AString_AString_plt_86f440(v11, v12, v5, v6 - v5);
        nandroid_AString_trim_plt(v11);
        v9 = nandroid_M3UParser_codecIsType_plt(v11, a3);
        v5 = v8 + 1;
        nandroid_AString_Destroy_AString_plt(v11);
      } while ((v9 & 1) == 0);
    }
    else {
      v7 = false;
    }
    nandroid_AString_Destroy_AString_plt(v12);
    if (v13 != 0) {
      nandroid_RefBase_decStrong_plt(v13, &v13);
    }
  }
  return v7;
}

__int64 nandroid_M3UParser_parseMetaDataDuration(__int64 a1, __int64* a2,
                                                 __int64 a3, _QWORD* a4)
{
  __int64 v8;
  __int64 v9;
  double v10;
  __int64 v11;
  double v12;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v14)();
  _QWORD** v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  double v19;
  _BYTE* v21;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(double, "d0", "=w"));
  v8 = nandroid_AString_find_plt(a1, ":", 0),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(double, "d0", "=w"));
  if (v8 < 0) {
    return 4294966289LL;
  }
  v21 = nullptr;
  v9 = nandroid_AString_c_str_plt(a1) + v8 + 1,
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(double, "d0", "=w"));
  strtod_plt(v9, &v21),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(double, "d0", "=w"));
  if (v21 == (_BYTE*)v9 || *v21 != 0 && *v21 != 44) {
    return 4294966289LL;
  }
  v11 = *a2;
  if (*a2 == 0) {
    v12 = v10;
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v14 = SdkData_e88338[0];
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v14 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v14) = 1;
      __cxa_guard_release_plt(SdkData_e88330),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(double, "d0", "=w"));
    }
    v15 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v14),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(double, "d0", "=w"));
    v16 = SdkRoutine_4c3860(16, 1344, v15),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(double, "d0", "=w"));
    nandroid_AMessage_AMessage_plt_86da50(),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(double, "d0", "=w"));
    v17 = *a2;
    v18 = nandroid_RefBase_incStrong_plt(v16, a2),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(double, "d0", "=w"));
    if (v17 != 0) {
      v18 = nandroid_RefBase_decStrong_plt(v17, a2),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(double, "d0", "=w"));
    }
    if (v17 != *a2) {
      nandroid_sp_report_race_plt(v18),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(double, "d0", "=w"));
    }
    v10 = v12;
    v11 = v16;
    *a2 = v16;
  }
  v19 = v10;
  nandroid_AMessage_setInt64_plt(v11, a3,
                                 (__int64)(v10 * 0x1.e848000000000p+19)),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(double, "d0", "=w"));
  nandroid_AMessage_setInt64_plt(*a2, "startTimeUs", *a4),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(double, "d0", "=w"));
  *a4 = (__int64)((double)(__int64)*a4 + v19 * 0x1.e848000000000p+19);
  return 0;
}

__int64 nandroid_M3UParser_parseStreamInf(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  int v13;
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
  _QWORD** v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  unsigned int v30;
  __int64 v31;
  _QWORD** v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD** v37;
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  __int64 v41;
  unsigned int v42;
  unsigned int v43;
  __int64 v44;
  unsigned int v45;
  _QWORD** v46;
  __int64 v47;
  __int64 v48;
  void(__attribute__((noreturn)) * v49)();
  void(__attribute__((noreturn)) * v50)();
  void(__attribute__((noreturn)) * v51)();
  void(__attribute__((noreturn)) * v52)();
  char v54;
  _QWORD v55[3];
  _QWORD v56[3];
  _QWORD v57[3];
  _QWORD v58[3];

  v5 = nandroid_AString_find_plt(a2, ":", 0);
  if (v5 < 0) {
    return 4294966289LL;
  }
  v6 = v5 + 1;
  v7 = nandroid_AString_size_plt(a2);
  v8 = -1007;
  if (v6 >= v7) {
    goto LABEL_75;
  }
  v54 = 0;
  while (2) {
    if (v6 >= nandroid_AString_size_plt(a2)) {
      goto LABEL_16;
    }
    v11 = 0;
    v12 = v6;
    while (1) {
      v13 = *(unsigned __int8*)(nandroid_AString_c_str_plt(a2) + v12);
      if (v13 != 34) {
        break;
      }
      v11 ^= 1u;
    LABEL_12:
      if (++v12 >= (unsigned __int64)nandroid_AString_size_plt(a2)) {
        goto LABEL_16;
      }
    }
    if (((v13 != 44) | v11 & 1) != 0) {
      goto LABEL_12;
    }
    if (v12 < 0) {
    LABEL_16:
      v12 = nandroid_AString_size_plt(a2);
    }
    memset(v58, 0, sizeof(v58));
    nandroid_AString_AString_plt_86f440(v58, a2, v6, v12 - v6);
    nandroid_AString_trim_plt(v58);
    v14 = nandroid_AString_find_plt(v58, "=", 0);
    if (v14 < 0) {
      goto LABEL_8;
    }
    v15 = v14;
    memset(v57, 0, sizeof(v57));
    nandroid_AString_AString_plt_86f440(v57, v58, 0, v14);
    nandroid_AString_trim_plt(v57);
    memset(v56, 0, sizeof(v56));
    v16 = nandroid_AString_size_plt(v58);
    nandroid_AString_AString_plt_86f440(v56, v58, v15 + 1, v16 + ~v15);
    nandroid_AString_trim_plt(v56);
    v17 = nandroid_AString_c_str_plt(v57);
    if ((unsigned int)strcasecmp_plt("bandwidth", v17) == 0) {
      v28 = nandroid_AString_c_str_plt(v56);
      v55[0] = 0;
      v29 = strtoul_plt(v28, v55, 10);
      if (v55[0] != v28 && *(_BYTE*)v55[0] == 0) {
        v30 = v29;
        v31 = *a3;
        if (*a3 == 0) {
          if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
            v51 = SdkData_e88338[0];
            *(_DWORD*)SdkData_e88338[0] = 0;
            *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v51) = 1;
            __cxa_guard_release_plt(SdkData_e88330);
          }
          v32 = (_QWORD**)nn_os_GetTlsValue_plt(
              *(unsigned int*)SdkData_e88338[0]);
          v33 = SdkRoutine_4c3860(16, 1344, v32);
          nandroid_AMessage_AMessage_plt_86da50();
          v34 = *a3;
          v35 = nandroid_RefBase_incStrong_plt(v33, a3);
          if (v34 != 0) {
            v35 = nandroid_RefBase_decStrong_plt(v34, a3);
          }
          if (v34 != *a3) {
            nandroid_sp_report_race_plt(v35);
          }
          v31 = v33;
          *a3 = v33;
        }
        nandroid_AMessage_setInt32_plt(v31, "bandwidth", v30);
        v54 = 1;
      }
      goto LABEL_7;
    }
    v18 = nandroid_AString_c_str_plt(v57);
    if ((unsigned int)strcasecmp_plt("codecs", v18) == 0) {
      if ((unsigned __int64)nandroid_AString_size_plt(v56) < 2) {
        goto LABEL_78;
      }
      if (*(_BYTE*)nandroid_AString_c_str_plt(v56) != 34) {
        goto LABEL_78;
      }
      v36 = nandroid_AString_c_str_plt(v56);
      if (*(_BYTE*)(v36 + nandroid_AString_size_plt(v56) - 1) != 34) {
        goto LABEL_78;
      }
      nandroid_AString_tolower_plt(v57);
      nandroid_M3UParser_unquoteString_plt((void*)(v55), v56);
      v24 = *a3;
      if (*a3 == 0) {
        if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
          v49 = SdkData_e88338[0];
          *(_DWORD*)SdkData_e88338[0] = 0;
          *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v49) = 1;
          __cxa_guard_release_plt(SdkData_e88330);
        }
        v37 =
            (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)SdkData_e88338[0]);
        v24 = SdkRoutine_4c3860(16, 1344, v37);
        nandroid_AMessage_AMessage_plt_86da50();
        v38 = *a3;
        v27 = nandroid_RefBase_incStrong_plt(v24, a3);
        if (v38 != 0) {
          v27 = nandroid_RefBase_decStrong_plt(v38, a3);
        }
        if (v38 != *a3) {
          goto LABEL_4;
        }
      LABEL_5:
        *a3 = v24;
      }
    LABEL_6:
      v9 = nandroid_AString_c_str_plt(v57);
      v10 = nandroid_AString_c_str_plt(v55);
      nandroid_AMessage_setString_plt_86de10(v24, v9, v10, -1);
      nandroid_AString_Destroy_AString_plt(v55);
    LABEL_7:
      nandroid_AString_Destroy_AString_plt(v56);
      nandroid_AString_Destroy_AString_plt(v57);
    LABEL_8:
      nandroid_AString_Destroy_AString_plt(v58);
      v6 = v12 + 1;
      if (v12 + 1 >= (unsigned __int64)nandroid_AString_size_plt(a2)) {
        if ((v54 & 1) != 0) {
          v8 = 0;
        }
        else {
          v8 = -1007;
        }
      LABEL_75:
        if (*a3 != 0) {
          return v8;
        }
        else {
          return 4294966289LL;
        }
      }
      continue;
    }
    break;
  }
  v19 = nandroid_AString_c_str_plt(v57);
  if ((unsigned int)strcasecmp_plt("resolution", v19) == 0) {
    v39 = nandroid_AString_c_str_plt(v56);
    v55[0] = 0;
    v40 = strtoul_plt(v39, v55, 10);
    if (v55[0] != v39 && *(_BYTE*)v55[0] == 120) {
      v41 = v55[0] + 1LL;
      v42 = v40;
      v43 = strtoul_plt(v55[0] + 1LL, v55, 10);
      if (v55[0] != v41 && *(_BYTE*)v55[0] == 0) {
        v44 = *a3;
        v45 = v43;
        if (*a3 == 0) {
          if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
            v52 = SdkData_e88338[0];
            *(_DWORD*)SdkData_e88338[0] = 0;
            *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v52) = 1;
            __cxa_guard_release_plt(SdkData_e88330);
          }
          v46 = (_QWORD**)nn_os_GetTlsValue_plt(
              *(unsigned int*)SdkData_e88338[0]);
          v44 = SdkRoutine_4c3860(16, 1344, v46);
          nandroid_AMessage_AMessage_plt_86da50();
          v47 = *a3;
          v48 = nandroid_RefBase_incStrong_plt(v44, a3);
          if (v47 != 0) {
            v48 = nandroid_RefBase_decStrong_plt(v47, a3);
          }
          if (v47 != *a3) {
            nandroid_sp_report_race_plt(v48);
          }
          *a3 = v44;
        }
        nandroid_AMessage_setInt32_plt(v44, "width", v42);
        nandroid_AMessage_setInt32_plt(*a3, "height", v45);
      }
    }
    goto LABEL_7;
  }
  v20 = nandroid_AString_c_str_plt(v57);
  if ((unsigned int)strcasecmp_plt("audio", v20) != 0) {
    v21 = nandroid_AString_c_str_plt(v57);
    if ((unsigned int)strcasecmp_plt("video", v21) != 0) {
      v22 = nandroid_AString_c_str_plt(v57);
      if ((unsigned int)strcasecmp_plt("subtitles", v22) != 0) {
        goto LABEL_7;
      }
    }
  }
  if ((unsigned __int64)nandroid_AString_size_plt(v56) >= 2 &&
      *(_BYTE*)nandroid_AString_c_str_plt(v56) == 34) {
    v23 = nandroid_AString_c_str_plt(v56);
    if (*(_BYTE*)(v23 + nandroid_AString_size_plt(v56) - 1) == 34) {
      nandroid_M3UParser_unquoteString_plt((void*)(v55), v56);
      nandroid_AString_tolower_plt(v57);
      v24 = *a3;
      if (*a3 == 0) {
        if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
          v50 = SdkData_e88338[0];
          *(_DWORD*)SdkData_e88338[0] = 0;
          *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v50) = 1;
          __cxa_guard_release_plt(SdkData_e88330);
        }
        v25 =
            (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)SdkData_e88338[0]);
        v24 = SdkRoutine_4c3860(16, 1344, v25);
        nandroid_AMessage_AMessage_plt_86da50();
        v26 = *a3;
        v27 = nandroid_RefBase_incStrong_plt(v24, a3);
        if (v26 != 0) {
          v27 = nandroid_RefBase_decStrong_plt(v26, a3);
        }
        if (v26 == *a3) {
          goto LABEL_5;
        }
      LABEL_4:
        nandroid_sp_report_race_plt(v27);
        goto LABEL_5;
      }
      goto LABEL_6;
    }
  }
LABEL_78:
  nandroid_AString_Destroy_AString_plt(v56);
  nandroid_AString_Destroy_AString_plt(v57);
  nandroid_AString_Destroy_AString_plt(v58);
  return 4294966289LL;
}

__int64 nandroid_M3UParser_parseMap(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v5;
  unsigned __int64 v6;
  char v7;
  void(__attribute__((noreturn)) * v8)();
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  bool v20;
  _QWORD** v21;
  __int64 v22;
  __int64 v23;
  _QWORD v25[3];
  _QWORD v26[3];
  _QWORD v27[3];
  _QWORD v28[3];

  v5 = nandroid_AString_find_plt(a2, ":", 0);
  if (v5 < 0) {
    return 4294966289LL;
  }
  v6 = v5 + 1;
  if (v5 + 1 >= (unsigned __int64)nandroid_AString_size_plt(a2)) {
    return 4294966289LL;
  }
  v7 = 0;
  v8 = SdkData_e88338[0];
  while (2) {
    if (v6 >= nandroid_AString_size_plt(a2)) {
      goto LABEL_14;
    }
    v11 = 0;
    v12 = v6;
    while (1) {
      v13 = *(unsigned __int8*)(nandroid_AString_c_str_plt(a2) + v12);
      if (v13 != 34) {
        break;
      }
      v11 ^= 1u;
    LABEL_10:
      if (++v12 >= (unsigned __int64)nandroid_AString_size_plt(a2)) {
        goto LABEL_14;
      }
    }
    if (((v13 != 44) | v11 & 1) != 0) {
      goto LABEL_10;
    }
    if (v12 < 0) {
    LABEL_14:
      v12 = nandroid_AString_size_plt(a2);
    }
    memset(v28, 0, sizeof(v28));
    nandroid_AString_AString_plt_86f440(v28, a2, v6, v12 - v6);
    nandroid_AString_trim_plt(v28);
    v14 = nandroid_AString_find_plt(v28, "=", 0);
    if ((v14 & 0x8000000000000000LL) == 0) {
      v15 = v14;
      memset(v27, 0, sizeof(v27));
      nandroid_AString_AString_plt_86f440(v27, v28, 0, v14);
      nandroid_AString_trim_plt(v27);
      memset(v26, 0, sizeof(v26));
      v16 = nandroid_AString_size_plt(v28);
      nandroid_AString_AString_plt_86f440(v26, v28, v15 + 1, v16 + ~v15);
      nandroid_AString_trim_plt(v26);
      v17 = nandroid_AString_c_str_plt(v27);
      v18 = strcasecmp_plt("uri", v17);
      v19 = *a3;
      v20 = v18 == 0;
      if (*a3 == 0) {
        if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
          *(_DWORD*)v8 = 0;
          *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v8) = 1;
          __cxa_guard_release_plt(SdkData_e88330);
        }
        v21 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v8);
        v19 = SdkRoutine_4c3860(16, 1344, v21);
        nandroid_AMessage_AMessage_plt_86da50();
        v22 = *a3;
        v23 = nandroid_RefBase_incStrong_plt(v19, a3);
        if (v22 != 0) {
          v23 = nandroid_RefBase_decStrong_plt(v22, a3);
        }
        if (v22 != *a3) {
          nandroid_sp_report_race_plt(v23);
        }
        *a3 = v19;
      }
      v7 |= v20;
      v9 = nandroid_AString_c_str_plt(v27);
      nandroid_M3UParser_unquoteString_plt((void*)(v25), v26);
      v10 = nandroid_AString_c_str_plt(v25);
      nandroid_AMessage_setString_plt_86de10(v19, v9, v10, -1);
      nandroid_AString_Destroy_AString_plt(v25);
      nandroid_AString_Destroy_AString_plt(v26);
      nandroid_AString_Destroy_AString_plt(v27);
    }
    nandroid_AString_Destroy_AString_plt(v28);
    v6 = v12 + 1;
    if (v12 + 1 < (unsigned __int64)nandroid_AString_size_plt(a2)) {
      continue;
    }
    break;
  }
  if ((v7 & 1) != 0) {
    return 0;
  }
  else {
    return 4294966289LL;
  }
}

__int64 M3UParser_52d370(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88ae8 + 16;
  nandroid_VectorImpl_finish_vector_plt(a1);
  nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(a1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v3 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v6 = __cxa_guard_acquire_plt(SdkData_e88330);
    v3 = SdkData_e88338[0];
    if (v6 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
    }
  }
  v4 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  return nn_movie_detail_FreeMemory((__int64)a1, v4);
}

__int64 M3UParser_52d7a0(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88ac8 + 16;
  nandroid_VectorImpl_finish_vector_plt(a1);
  nandroid_VectorImpl_Destroy_VectorImpl_plt(a1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v3 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v6 = __cxa_guard_acquire_plt(SdkData_e88330);
    v3 = SdkData_e88338[0];
    if (v6 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
    }
  }
  v4 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  return nn_movie_detail_FreeMemory((__int64)a1, v4);
}

__int64 M3UParser_52db90(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88ae0 + 16;
  nandroid_VectorImpl_finish_vector_plt(a1);
  nandroid_VectorImpl_Destroy_VectorImpl_plt(a1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v3 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v6 = __cxa_guard_acquire_plt(SdkData_e88330);
    v3 = SdkData_e88338[0];
    if (v6 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
    }
  }
  v4 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  return nn_movie_detail_FreeMemory((__int64)a1, v4);
}

#pragma GCC visibility pop
