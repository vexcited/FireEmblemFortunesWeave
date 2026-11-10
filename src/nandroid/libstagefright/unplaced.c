#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* MPEG4Writer_50dda0(_QWORD*, __int64);
__attribute__((swiftcall)) void
    nandroid_ABuffer_CreateAsCopy_plt(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void nandroid_ABuffer_meta_plt(PSEUDO_X8);
__int64 AMediaFormat_setBuffer_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 AMediaFormat_setInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 AMediaFormat_setString_plt(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 SdkRoutine_85e050(unsigned __int64);
__int64 SdkRoutine_86e8b0(_QWORD);
__int64 SdkRoutine_8718d0(_QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 __errno_location_plt(_QWORD, _QWORD);
__int64 htonl_plt(_QWORD);
__int64 memcmp_plt(_QWORD, _QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 nandroid_AMessage_AMessage_plt_86da50(void);
__int64 nandroid_AMessage_setBuffer_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_setFloat_plt(_QWORD, _QWORD, float);
__int64 nandroid_AMessage_setInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_setInt64_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_setString_plt_86de10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_what_plt(_QWORD);
__int64 nandroid_MetaDataBase_findCString_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_MetaDataBase_findData_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                           _QWORD);
__int64 nandroid_MetaDataBase_findFloat_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_MetaDataBase_findInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_MetaDataBase_findInt64_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_NuCachedSource2_onFetch_plt(_QWORD);
__int64 nandroid_NuCachedSource2_onRead_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_decStrong_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_incStrong_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_renameRefId_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_RefBase_weakref_type_attemptIncStrong_plt(_QWORD, _QWORD);
__int64 nandroid_SortedVectorImpl_SortedVectorImpl_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_String8_String8_plt_86d870(_QWORD);
__int64 nandroid_U32_AT_plt(_QWORD);
__int64 nandroid_decodeBase64_plt_86f7b0(_QWORD, _QWORD, _QWORD);
__int64 nandroid_extractors_mp4_4f4780(__int64*, __int64*);
__int64 nandroid_extractors_mp4_4f4ab0(__int64 result, __int64);
__int64 nandroid_sp_report_race_plt(_QWORD);
__int64 nn_movie_detail_AllocateMemory(_QWORD);
__int64 nn_movie_detail_AllocateMemory_alt1(__int64, _QWORD**) __asm__(
    "nn_movie_detail_AllocateMemory");
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_movie_detail_FreeMemory_alt1(_QWORD, _QWORD) __asm__(
    "nn_movie_detail_FreeMemory");
__int64 nn_os_GetTlsValue_plt(_QWORD);
__int64 strcasecmp_plt(_QWORD, _QWORD);
__int64 strlen_plt(_QWORD);
__int64 strncasecmp_plt(_QWORD, _QWORD, _QWORD);
__int64 strnlen_plt(_QWORD, _QWORD);
__int64 strtol_plt(_QWORD, _QWORD, _QWORD);
extern __int64 SdkData_e88330;
extern __int64 SdkData_e88420;
extern __int64 SdkData_e885a8;
extern __int64 SdkData_e88a08;
extern char SdkData_e69c70[];
extern char SdkData_e69d60[];
extern void (*SdkData_e88338[493])();
extern void (*SdkData_e887c0[348])();
extern void (*SdkData_e887e0[344])();
extern void (*SdkData_e88858[329])();
extern void (*SdkData_e88860[328])();
extern void (*SdkData_e88868[327])();
extern void (*SdkData_e88870[326])();
extern void (*SdkData_e88878[325])();
extern void (*SdkData_e88880[324])();
extern void (*SdkData_e88888[323])();
extern void (*SdkData_e88890[322])();
extern void (*SdkData_e88898[321])();
extern void (*SdkData_e888a0[320])();
extern void (*SdkData_e888a8[319])();
extern void (*SdkData_e889a8[287])();
extern void (*SdkData_e889b0[286])();
extern void (*SdkData_e889b8[285])();
void SdkRoutine_85c8b0(void*);
void __attribute__((noreturn)) nn_fs_dc4d0(void);
__int64 nandroid_libstagefright_4deaa0(_QWORD* a1);
__int64 nandroid_libstagefright_4deb80(__int64 result);
__int64 nandroid_libstagefright_4df7e0(__int64 result, __int64 a2);
__int64 nandroid_libstagefright_4dfa30(__int64* a1, __int64 a2,
                                       unsigned __int64 a3);
__int64* nandroid_AMediaFormat_fromMsg(__int64* a1);
_QWORD* nandroid_AMediaFormat_getFormat(_QWORD* result, __int64* a2);
__int64 nandroid_libstagefright_502ed0(__int64 a1, __int64 a2);
void nandroid_parseVorbisComment(__int64 a1, __int64 a2, __int64 a3);
__int64 nandroid_libstagefright_514300(_QWORD* a1, __int64 a2);
__int64 nandroid_libstagefright_5144b0(__int64 a1, __int64 a2, __int64 a3);
__int64 nandroid_libstagefright_5172b0(__int64 result, _QWORD* a2);
__int64 nandroid_convertMetaDataToMessageFromMappings(__int64 a1, _QWORD* a2);
__int64 nandroid_libstagefright_56eae0(__int64 a1, __int64 a2, __int64 a3,
                                       __int64 a4);
__int64 nandroid_deserializeAudioPresentations(__int64 a1, __int64* a2);

__int64 nandroid_libstagefright_4deaa0(_QWORD* a1)
{
  __int64 v2;
  atomic_uchar* v3;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v5)();
  _QWORD* v6;
  _QWORD* v7;

  *a1 = SdkData_e885a8 + 16;
  nandroid_libstagefright_4deb80((__int64)a1);
  v2 = a1[1];
  v3 = (atomic_uchar*)SdkData_e88330;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v5 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v6 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  nn_movie_detail_FreeMemory(v2, v6);
  if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v7 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  return nn_movie_detail_FreeMemory((__int64)a1, v7);
}

__int64 nandroid_libstagefright_4deb80(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  atomic_uchar* v4;
  void(__attribute__((noreturn)) * v5)();
  __int64 v6;
  __int64 v7;
  _QWORD* v8;

  v1 = *(_QWORD*)(result + 8);
  v2 = result;
  v3 = *(_QWORD*)(v1 + 24);
  if (v3 != v1) {
    v4 = (atomic_uchar*)SdkData_e88330;
    v5 = SdkData_e88338[0];
    do {
      v6 = *(_QWORD*)(v3 + 8);
      v7 = *(_QWORD*)(v3 + 24);
      if (v6 != 0) {
        nandroid_RefBase_decStrong_plt(v6, v3 + 8);
      }
      if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(v4) != 0) {
        *(_DWORD*)v5 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
        __cxa_guard_release_plt(v4);
      }
      v8 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
      result = nn_movie_detail_FreeMemory(v3, v8);
      v1 = *(_QWORD*)(v2 + 8);
      v3 = v7;
    } while (v7 != v1);
  }
  *(_QWORD*)(v1 + 16) = v1;
  *(_QWORD*)(*(_QWORD*)(v2 + 8) + 24LL) = *(_QWORD*)(v2 + 8);
  return result;
}

__int64 nandroid_libstagefright_4df7e0(__int64 result, __int64 a2)
{
  __int64 v3;

  if (a2 != 0) {
    v3 = result;
    nandroid_libstagefright_4df7e0(result, *(_QWORD*)a2);
    nandroid_libstagefright_4df7e0(v3, *(_QWORD*)(a2 + 8));
    if ((*(_BYTE*)(a2 + 64) & 1) != 0) {
      nn_movie_detail_FreeMemory_alt1(*(_QWORD*)(a2 + 80), *(_QWORD*)(a2 + 88));
      if ((*(_BYTE*)(a2 + 32) & 1) == 0) {
        return nn_movie_detail_FreeMemory_alt1(a2, *(_QWORD*)(v3 + 16));
      }
    }
    else if ((*(_BYTE*)(a2 + 32) & 1) == 0) {
      return nn_movie_detail_FreeMemory_alt1(a2, *(_QWORD*)(v3 + 16));
    }
    nn_movie_detail_FreeMemory_alt1(*(_QWORD*)(a2 + 48), *(_QWORD*)(a2 + 56));
    return nn_movie_detail_FreeMemory_alt1(a2, *(_QWORD*)(v3 + 16));
  }
  return result;
}

__int64 nandroid_libstagefright_4dfa30(__int64* a1, __int64 a2,
                                       unsigned __int64 a3)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v8;

  if (a3 > 0x16) {
    if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
      nn_fs_dc4d0();
    }
    v6 = a2;
    if ((a3 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (a3 | 7) + 1;
    }
    v4 = nn_movie_detail_AllocateMemory(v8);
    a1[1] = a3;
    a1[2] = v4;
    a2 = v6;
    *a1 = v8 | 1;
    v5 = a3 + 1;
  }
  else {
    *(_BYTE*)a1 = 2 * a3;
    v4 = (__int64)a1 + 1;
    v5 = a3 + 1;
  }
  return memmove_plt(v4, a2, v5);
}

__int64* nandroid_AMediaFormat_fromMsg(__int64* a1)
{
  atomic_uchar* v2;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v4)();
  _QWORD** v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD** v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v2 = (atomic_uchar*)SdkData_e88330;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v4 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v4 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v5 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
  v6 = (__int64*)SdkRoutine_4c3860(16, 56, v5);
  *v6 = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[1] = 0;
  v6[2] = 0;
  nandroid_String8_String8_plt_86d870(v6 + 1);
  v7 = nandroid_SortedVectorImpl_SortedVectorImpl_plt(v6 + 2, 16, 0);
  v6[2] = SdkData_e88420 + 16;
  v8 = *v6;
  v9 = *a1;
  if (v9 != 0) {
    v7 = nandroid_RefBase_incStrong_plt(v9, v6);
  }
  if (v8 != 0) {
    v7 = nandroid_RefBase_decStrong_plt(v8, v6);
  }
  if (v8 != *v6) {
    nandroid_sp_report_race_plt(v7);
  }
  *v6 = v9;
  if (v9 == 0) {
    if ((atomic_load_explicit(v2, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v4 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v10 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
    v11 = SdkRoutine_4c3860(16, 1344, v10);
    nandroid_AMessage_AMessage_plt_86da50();
    v12 = *v6;
    v13 = nandroid_RefBase_incStrong_plt(v11, v6);
    if (v12 != 0) {
      v13 = nandroid_RefBase_decStrong_plt(v12, v6);
    }
    if (v12 != *v6) {
      nandroid_sp_report_race_plt(v13);
    }
    *v6 = v11;
  }
  return v6;
}

_QWORD* nandroid_AMediaFormat_getFormat(_QWORD* result, __int64* a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *a2;
  v3 = *result;
  if (*result != 0) {
    result = (_QWORD*)nandroid_RefBase_incStrong_plt(*result, a2);
  }
  if (v2 != 0) {
    result = (_QWORD*)nandroid_RefBase_decStrong_plt(v2, a2);
  }
  if (v2 != *a2) {
    result = (_QWORD*)nandroid_sp_report_race_plt(result);
  }
  *a2 = v3;
  return result;
}

__int64 nandroid_libstagefright_502ed0(__int64 a1, __int64 a2)
{
  __int64 v2;
  _QWORD* v3;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD**)(v2 + 8 * a2);
  if (v3 != nullptr) {
    v3 = (_QWORD*)((char*)v3 + *(_QWORD*)(*v3 - 24LL));
  }
  return nandroid_RefBase_renameRefId_plt(v3, *(_QWORD*)(a1 + 16) + 8 * a2,
                                          v2 + 8 * a2);
}

void nandroid_parseVorbisComment(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  void(__attribute__((noreturn)) * v20)();
  __int64 v21;
  void(__attribute__((noreturn)) * v22)();
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  unsigned int v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  _DWORD* v39;
  __int64 v40;
  _QWORD v41[34];
  _QWORD v42[16];
  unsigned __int64 v43;

  v6 = 0;
  v7 = *(_QWORD*)SdkData_e888a0[0];
  v8 = *(_QWORD*)SdkData_e88888[0];
  v9 = *(_QWORD*)SdkData_e88880[0];
  v10 = *(_QWORD*)SdkData_e88868[0];
  v11 = *(_QWORD*)SdkData_e88878[0];
  v12 = *(_QWORD*)SdkData_e88890[0];
  v41[0] = "TITLE";
  v41[1] = v7;
  v41[4] = "ALBUMARTIST";
  v41[5] = v8;
  v41[2] = "ARTIST";
  v41[3] = v9;
  v41[6] = "ALBUM ARTIST";
  v41[7] = v8;
  v13 = *(_QWORD*)SdkData_e88898[0];
  v41[8] = "COMPILATION";
  v41[9] = v10;
  v41[10] = "ALBUM";
  v41[11] = v11;
  v41[12] = "COMPOSER";
  v41[13] = v12;
  v41[14] = "GENRE";
  v41[15] = v13;
  v14 = *(_QWORD*)SdkData_e888a8[0];
  v41[16] = "AUTHOR";
  v41[17] = v14;
  v15 = *(_QWORD*)SdkData_e88860[0];
  v41[18] = "TRACKNUMBER";
  v41[19] = v15;
  v16 = *(_QWORD*)SdkData_e88858[0];
  v41[20] = "DISCNUMBER";
  v41[21] = v16;
  v17 = *(_QWORD*)SdkData_e887e0[0];
  v41[22] = "DATE";
  v41[23] = v17;
  v18 = *(_QWORD*)SdkData_e88870[0];
  v41[24] = "YEAR";
  v41[25] = v18;
  v19 = *(_QWORD*)SdkData_e889b0[0];
  v41[26] = "LYRICIST";
  v41[27] = v19;
  v20 = SdkData_e887c0[0];
  v21 = *(_QWORD*)SdkData_e887c0[0];
  v41[28] = "METADATA_BLOCK_PICTURE";
  v41[29] = v21;
  v22 = SdkData_e889a8[0];
  v23 = *(_QWORD*)SdkData_e889a8[0];
  v41[30] = "ANDROID_LOOP";
  v41[31] = v23;
  v24 = *(_QWORD*)SdkData_e889b8[0];
  v41[32] = "ANDROID_HAPTIC";
  v41[33] = v24;
  do {
    v25 = v41[v6];
    v26 = strlen_plt(v25);
    v27 = strncasecmp_plt(v25, a2, v26);
    if ((_DWORD)v27 == 0) {
      v28 = a2 + v26;
      if (*(_BYTE*)(a2 + v26) == 61) {
        v29 = v41[v6 + 1];
        if (v29 == *(_QWORD*)v20) {
          v43 = 3 * ((unsigned __int64)strnlen_plt(v28 + 1, a3 + ~v26) >> 2);
          v31 = (char*)SdkRoutine_86e8b0(v43);
          if ((nandroid_decodeBase64_plt_86f7b0(v31, &v43, v28 + 1) & 1) != 0) {
            memset(v42, 0, sizeof(v42));
            if (v43 >= 8 && (unsigned int)nandroid_U32_AT_plt(v31) == 3) {
              v33 = nandroid_U32_AT_plt(v31 + 4);
              if (v33 <= 0x7F) {
                v34 = v43;
                v35 = v33;
                if (v43 - 8 >= v33) {
                  memcpy_plt(v42, v31 + 8, v33);
                  *((_BYTE*)v42 + v35) = 0;
                  if (LODWORD(v42[0]) != 4074797 && v34 >= 0x20 &&
                      v34 - 32 >= v35) {
                    v36 = (unsigned int)nandroid_U32_AT_plt(&v31[v35 + 8]);
                    if (v43 - v35 - 32 >= v36) {
                      v37 = (unsigned int)nandroid_U32_AT_plt(
                          &v31[(unsigned int)(v35 + v36 + 28)]);
                      if (v43 - v35 - v36 - 32 >= v37) {
                        AMediaFormat_setBuffer_plt(
                            a1, *(_QWORD*)v20,
                            &v31[(unsigned int)(v35 + v36 + 32)], v37);
                      }
                    }
                  }
                }
              }
            }
          }
          SdkRoutine_85c8b0(v31);
        }
        else {
          v30 = *(_QWORD*)v22;
          if (v29 == *(_QWORD*)v22) {
            if ((unsigned int)strcasecmp_plt(v28 + 1, "true") == 0) {
              AMediaFormat_setInt32_plt(a1, v30, 1);
            }
          }
          else if (v29 == *(_QWORD*)SdkData_e889b8[0]) {
            v38 = v41[v6 + 1];
            v42[0] = 0;
            v39 = (_DWORD*)__errno_location_plt(v27, v29);
            *v39 = 0;
            v40 = strtol_plt(v28 + 1, v42, 10);
            if (*v39 == 0) {
              AMediaFormat_setInt32_plt(a1, v38, v40);
            }
          }
          else {
            AMediaFormat_setString_plt(a1, v29, v28 + 1);
          }
        }
      }
    }
    v6 += 2;
  } while (v6 != 34);
}

__int64 nandroid_libstagefright_514300(_QWORD* a1, __int64 a2)
{
  atomic_uchar* v4;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v6)();
  _QWORD** v7;
  __int64 result;
  __int64 v9;
  _QWORD* v10;
  _QWORD* i;
  _QWORD** v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;

  *a1 = SdkData_e88a08 + 16;
  v4 = (atomic_uchar*)SdkData_e88330;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v6 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v6 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v6) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v7 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v6);
  result = SdkRoutine_4c3860(16, 48, v7);
  a1[1] = result;
  *(_QWORD*)(result + 32) = result;
  v9 = a1[1];
  *(_QWORD*)(v9 + 40) = v9;
  v10 = *(_QWORD**)(a2 + 8);
  for (i = (_QWORD*)v10[5]; i != v10; i = (_QWORD*)i[5]) {
    if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(v4) != 0) {
      *(_DWORD*)v6 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v6) = 1;
      __cxa_guard_release_plt(v4);
    }
    v12 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v6);
    v13 = (_QWORD*)SdkRoutine_4c3860(16, 48, v12);
    v14 = i[1];
    v15 = v13;
    *v13 = *i;
    v13[1] = v14;
    result = (__int64)MPEG4Writer_50dda0(v13 + 2, (__int64)(i + 2));
    v15[5] = v9;
    v16 = *(_QWORD*)(v9 + 32);
    v15[4] = v16;
    *(_QWORD*)(v16 + 40) = v15;
    *(_QWORD*)(v9 + 32) = v15;
  }
  return result;
}

__int64 nandroid_libstagefright_5144b0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 result;

  v3 = *(_QWORD*)(a1 + 8);
  v5 = (unsigned int)htonl_plt(*(unsigned int*)(a3 + 4));
  if (v3 > v5) {
    v6 = 0;
  LABEL_3:
    result = htonl_plt(v6);
    *(_DWORD*)(a3 + 4) = result;
    return result;
  }
  if (v3 < 0) {
    v6 = 0xFFFFFFFFLL;
    if (v3 + 0xFFFFFFFFLL < v5) {
      goto LABEL_3;
    }
  }
  result = htonl_plt((unsigned int)(v5 - v3));
  *(_DWORD*)(a3 + 4) = result;
  return result;
}

__int64 nandroid_libstagefright_5172b0(__int64 result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;

  v2 = *(_QWORD*)(result + 88);
  v7 = nullptr;
  if (v2 != 0) {
    v3 = result;
    result = nandroid_RefBase_weakref_type_attemptIncStrong_plt(
        *(_QWORD*)(result + 96), &v7);
    if ((result & 1) != 0) {
      v5 = *(_QWORD**)(v3 + 88);
      v7 = v5;
      if (v5 == nullptr) {
        goto LABEL_9;
      }
    }
    else {
      v5 = v7;
      if (v7 == nullptr) {
        goto LABEL_9;
      }
    }
    result = nandroid_AMessage_what_plt(*a2);
    if ((_DWORD)result == 1919246692) {
      result = nandroid_NuCachedSource2_onRead_plt(v5, a2);
      v6 = v7;
      if (v7 == nullptr) {
        return result;
      }
      return nandroid_RefBase_decStrong_plt((char*)v6 + *(_QWORD*)(*v6 - 24LL),
                                            &v7);
    }
    if ((_DWORD)result == 1717924963) {
      result = nandroid_NuCachedSource2_onFetch_plt(v5);
    }
  LABEL_9:
    v6 = v7;
    if (v7 == nullptr) {
      return result;
    }
    return nandroid_RefBase_decStrong_plt((char*)v6 + *(_QWORD*)(*v6 - 24LL),
                                          &v7);
  }
  return result;
}

__int64 nandroid_convertMetaDataToMessageFromMappings(__int64 a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  char* v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64 i;
  __int64 v13;
  __int64 v14;
  __int64 result;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v2 = 240;
  v3 = SdkData_e69c70;
  do {
    v6 = *(unsigned int*)v3;
    v7 = *((_QWORD*)v3 - 1);
    v20 = 0;
    if ((nandroid_MetaDataBase_findCString_plt(a1, v6, &v20) & 1) != 0) {
      v8 = v20;
      v9 = *a2;
      v10 = strlen_plt(v20);
      nandroid_AMessage_setString_plt_86de10(v9, v7, v8, v10);
    }
    v3 += 16;
    v2 -= 16;
  } while (v2 != 0);
  LODWORD(v20) = 0;
  if ((nandroid_MetaDataBase_findFloat_plt(a1, 1667330118, &v20) & 1) != 0) {
    nandroid_AMessage_setFloat_plt(*a2, "capture-rate", *(float*)&v20);
  }
  v20 = 0;
  if ((nandroid_MetaDataBase_findInt64_plt(a1, 1702391654, &v20) & 1) != 0) {
    nandroid_AMessage_setInt64_plt(*a2, "exif-offset", v20);
  }
  v20 = 0;
  if ((nandroid_MetaDataBase_findInt64_plt(a1, 1702392698, &v20) & 1) != 0) {
    nandroid_AMessage_setInt64_plt(*a2, "exif-size", v20);
  }
  v20 = 0;
  if ((nandroid_MetaDataBase_findInt64_plt(a1, 1952543316, &v20) & 1) != 0) {
    nandroid_AMessage_setInt64_plt(*a2, "target-time", v20);
  }
  v20 = 0;
  if ((nandroid_MetaDataBase_findInt64_plt(a1, 1952997972, &v20) & 1) != 0) {
    nandroid_AMessage_setInt64_plt(*a2, "thumbnail-time", v20);
  }
  v20 = 0;
  if ((nandroid_MetaDataBase_findInt64_plt(a1, 1953066341, &v20) & 1) != 0) {
    nandroid_AMessage_setInt64_plt(*a2, "timeUs", v20);
  }
  v20 = 0;
  if ((nandroid_MetaDataBase_findInt64_plt(a1, 1685418593, &v20) & 1) != 0) {
    nandroid_AMessage_setInt64_plt(*a2, "durationUs", v20);
  }
  LODWORD(v20) = 0;
  if ((nandroid_MetaDataBase_findInt32_plt(a1, 1635087436, &v20) & 1) != 0) {
    nandroid_AMessage_setInt32_plt(*a2, "loop", (unsigned int)v20);
  }
  LODWORD(v20) = 0;
  if ((nandroid_MetaDataBase_findInt32_plt(a1, 1953330028, &v20) & 1) != 0) {
    nandroid_AMessage_setInt32_plt(*a2, "time-scale", (unsigned int)v20);
  }
  LODWORD(v20) = 0;
  if ((nandroid_MetaDataBase_findInt32_plt(a1, 1668446541, &v20) & 1) != 0) {
    nandroid_AMessage_setInt32_plt(*a2, "crypto-mode", (unsigned int)v20);
  }
  LODWORD(v20) = 0;
  if ((nandroid_MetaDataBase_findInt32_plt(a1, 1668446547, &v20) & 1) != 0) {
    nandroid_AMessage_setInt32_plt(*a2, "crypto-default-iv-size",
                                   (unsigned int)v20);
  }
  LODWORD(v20) = 0;
  if ((nandroid_MetaDataBase_findInt32_plt(a1, 1667394667, &v20) & 1) != 0) {
    nandroid_AMessage_setInt32_plt(*a2, "crypto-encrypted-byte-block",
                                   (unsigned int)v20);
  }
  LODWORD(v20) = 0;
  if ((nandroid_MetaDataBase_findInt32_plt(a1, 1935830123, &v20) & 1) != 0) {
    nandroid_AMessage_setInt32_plt(*a2, "crypto-skip-byte-block",
                                   (unsigned int)v20);
  }
  LODWORD(v20) = 0;
  if ((nandroid_MetaDataBase_findInt32_plt(a1, 1852207725, &v20) & 1) != 0) {
    nandroid_AMessage_setInt32_plt(*a2, "frame-count", (unsigned int)v20);
  }
  LODWORD(v20) = 0;
  if ((nandroid_MetaDataBase_findInt32_plt(a1, 1836597874, &v20) & 1) != 0) {
    nandroid_AMessage_setInt32_plt(*a2, "max-bitrate", (unsigned int)v20);
  }
  LODWORD(v20) = 0;
  if ((nandroid_MetaDataBase_findInt32_plt(a1, 1885564258, &v20) & 1) != 0) {
    nandroid_AMessage_setInt32_plt(*a2, "pcm-big-endian", (unsigned int)v20);
  }
  LODWORD(v20) = 0;
  if ((nandroid_MetaDataBase_findInt32_plt(a1, 1665956210, &v20) & 1) != 0) {
    nandroid_AMessage_setInt32_plt(*a2, "temporal-layer-count",
                                   (unsigned int)v20);
  }
  LODWORD(v20) = 0;
  if ((nandroid_MetaDataBase_findInt32_plt(a1, 1766619506, &v20) & 1) != 0) {
    nandroid_AMessage_setInt32_plt(*a2, "temporal-layer-id", (unsigned int)v20);
  }
  LODWORD(v20) = 0;
  if ((nandroid_MetaDataBase_findInt32_plt(a1, 1952997975, &v20) & 1) != 0) {
    nandroid_AMessage_setInt32_plt(*a2, "thumbnail-width", (unsigned int)v20);
  }
  LODWORD(v20) = 0;
  if ((nandroid_MetaDataBase_findInt32_plt(a1, 1952997960, &v20) & 1) != 0) {
    nandroid_AMessage_setInt32_plt(*a2, "thumbnail-height", (unsigned int)v20);
  }
  LODWORD(v20) = 0;
  if ((nandroid_MetaDataBase_findInt32_plt(a1, 1986096196, &v20) & 1) != 0) {
    nandroid_AMessage_setInt32_plt(*a2, "valid-samples", (unsigned int)v20);
  }
  v11 = SdkData_e69d60;
  for (i = 176; i != 0; i -= 16) {
    v13 = *(unsigned int*)v11;
    v14 = *((_QWORD*)v11 - 1);
    LODWORD(v16) = 0;
    v20 = 0;
    v19 = 0;
    if ((nandroid_MetaDataBase_findData_plt(a1, v13, &v16, &v20, &v19) & 1) !=
        0) {
      v18 = 0;
      nandroid_ABuffer_CreateAsCopy_plt((void*)(&v18), v20, v19);
      nandroid_AMessage_setBuffer_plt(*a2, v14, &v18);
      if (v18 != 0) {
        nandroid_RefBase_decStrong_plt(v18, &v18);
      }
    }
    v11 += 16;
  }
  v17 = 0;
  v20 = 0;
  v19 = 0;
  if ((nandroid_MetaDataBase_findData_plt(a1, 1668506672, &v17, &v20, &v19) &
       1) != 0) {
    v18 = 0;
    nandroid_ABuffer_CreateAsCopy_plt((void*)(&v18), v20, v19);
    nandroid_ABuffer_meta_plt((void*)(&v16));
    nandroid_AMessage_setInt32_plt(v16, "csd", 1);
    if (v16 != 0) {
      nandroid_RefBase_decStrong_plt(v16, &v16);
    }
    nandroid_ABuffer_meta_plt((void*)(&v16));
    nandroid_AMessage_setInt64_plt(v16, "timeUs", 0);
    if (v16 != 0) {
      nandroid_RefBase_decStrong_plt(v16, &v16);
    }
    nandroid_AMessage_setBuffer_plt(*a2, "csd-0", &v18);
    if (v18 != 0) {
      nandroid_RefBase_decStrong_plt(v18, &v18);
    }
  }
  v17 = 0;
  v20 = 0;
  v19 = 0;
  if ((nandroid_MetaDataBase_findData_plt(a1, 1668506673, &v17, &v20, &v19) &
       1) != 0) {
    v18 = 0;
    nandroid_ABuffer_CreateAsCopy_plt((void*)(&v18), v20, v19);
    nandroid_ABuffer_meta_plt((void*)(&v16));
    nandroid_AMessage_setInt32_plt(v16, "csd", 1);
    if (v16 != 0) {
      nandroid_RefBase_decStrong_plt(v16, &v16);
    }
    nandroid_ABuffer_meta_plt((void*)(&v16));
    nandroid_AMessage_setInt64_plt(v16, "timeUs", 0);
    if (v16 != 0) {
      nandroid_RefBase_decStrong_plt(v16, &v16);
    }
    nandroid_AMessage_setBuffer_plt(*a2, "csd-1", &v18);
    if (v18 != 0) {
      nandroid_RefBase_decStrong_plt(v18, &v18);
    }
  }
  v17 = 0;
  v20 = 0;
  v19 = 0;
  result = nandroid_MetaDataBase_findData_plt(a1, 1668506674, &v17, &v20, &v19);
  if ((result & 1) != 0) {
    v18 = 0;
    nandroid_ABuffer_CreateAsCopy_plt((void*)(&v18), v20, v19);
    nandroid_ABuffer_meta_plt((void*)(&v16));
    nandroid_AMessage_setInt32_plt(v16, "csd", 1);
    if (v16 != 0) {
      nandroid_RefBase_decStrong_plt(v16, &v16);
    }
    nandroid_ABuffer_meta_plt((void*)(&v16));
    nandroid_AMessage_setInt64_plt(v16, "timeUs", 0);
    if (v16 != 0) {
      nandroid_RefBase_decStrong_plt(v16, &v16);
    }
    nandroid_AMessage_setBuffer_plt(*a2, "csd-2", &v18);
    result = v18;
    if (v18 != 0) {
      return nandroid_RefBase_decStrong_plt(v18, &v18);
    }
  }
  return result;
}

__int64 nandroid_libstagefright_56eae0(__int64 a1, __int64 a2, __int64 a3,
                                       __int64 a4)
{
  __int64 v4;
  bool v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v4 = *(_QWORD*)(a1 + 16);
  v5 = v4 <= a2;
  v6 = v4 - a2;
  v7 = *(_QWORD*)(a1 + 8) + a2;
  if (v5) {
    v6 = 0;
  }
  if (v6 >= a4) {
    v8 = a4;
  }
  else {
    v8 = v6;
  }
  memcpy_plt(a3, v7, v8);
  return v8;
}

__int64 nandroid_deserializeAudioPresentations(__int64 a1, __int64* a2)
{
  __int64 v3;
  int v4;
  atomic_uchar* v5;
  void(__attribute__((noreturn)) * v6)();
  unsigned int i;
  __int64 v8;
  _QWORD** v9;
  void* v10;
  __int64 v12;
  _QWORD** v13;
  void* v14;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  char* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  bool v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  char* v31;
  unsigned __int64 v32;
  int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  __int64* v45;
  __int64** v46;
  __int64* v47;
  __int64 v48;
  __int64* v49;
  __int64 v50;
  __int64** v51;
  __int64 v52;
  __int64 v53;
  __int64** v54;
  __int64 v55;
  _QWORD** v56;
  void* v57;
  unsigned __int64 v59;
  char* v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  char v67;
  __int64 v68;
  __int64 v69;
  __int64* v71;
  int v72;
  __int64 v73;
  _QWORD* v74;
  struct {
    __int64 v75;
    __int64 v76;
    char* v77;
  } v75_;
  struct {
    __int64 v78;
    unsigned __int64 v79;
    char* v80;
  } v78_;
  unsigned int v81;
  unsigned int v82;
  unsigned int v83;
  __int64 v84;
  __int64 v85;
  __int64* v86;
  struct {
    __int64 v87;
    _QWORD** v88;
    __int64 v89;
    __int64 v90;
    unsigned __int64 v91;
  } v87_;
  __int128 v92;
  int v93;
  unsigned int v94[3];

  v3 = a1;
  v94[0] = 0;
  SdkRoutine_8718d0(a1, v94, 4);
  if (v94[0] == 0) {
    return 0;
  }
  v4 = 0;
  v5 = (atomic_uchar*)SdkData_e88330;
  v6 = SdkData_e88338[0];
  v73 = v3;
  v71 = a2;
  while (1) {
    v93 = 0;
    SdkRoutine_8718d0(v3, &v93, 4);
    if (v93 != 1) {
      return 4294967258LL;
    }
    v84 = 0xFFFFFFFF00000000LL;
    v85 = 0xFFFFFFFFLL;
    v92 = (__typeof__(v92)){0};
    v87_.v90 = 0;
    v87_.v91 = 0;
    v87_.v88 = nullptr;
    v87_.v89 = 0;
    v86 = nullptr;
    v87_.v87 = 0;
    if ((atomic_load_explicit(v5, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(v5) != 0) {
      *(_DWORD*)v6 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v6) = 1;
      __cxa_guard_release_plt(v5);
    }
    v72 = v4;
    v87_.v88 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v6);
    v87_.v89 = 0;
    v87_.v90 = 0;
    v87_.v91 = 0;
    *(_QWORD*)&v92 = 0;
    *(_QWORD*)((char*)&v92 + 7) = 0;
    v86 = &v87_.v87;
    v87_.v87 = 0;
    LODWORD(v84) = 1;
    SdkRoutine_8718d0(v3, (char*)&v84 + 4, 4);
    SdkRoutine_8718d0(v3, &v85, 4);
    v83 = 0;
    SdkRoutine_8718d0(v3, &v83, 4);
    if (v83 != 0) {
      for (i = 0; i < v83; ++i) {
        v82 = 0;
        SdkRoutine_8718d0(v3, &v82, 4);
        v8 = v82;
        if ((atomic_load_explicit(v5, memory_order_acquire) & 1) == 0 &&
            (unsigned int)__cxa_guard_acquire_plt(v5) != 0) {
          *(_DWORD*)v6 = 0;
          *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v6) = 1;
          __cxa_guard_release_plt(v5);
        }
        v9 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v6);
        v74 = v9;
        if ((_DWORD)v8 != 0) {
          v10 = (void*)nn_movie_detail_AllocateMemory_alt1(v8, v9);
          memset_plt(v10, nullptr, v8);
        }
        else {
          v10 = nullptr;
        }
        SdkRoutine_8718d0(v3, v10, v82);
        v81 = 0;
        SdkRoutine_8718d0(v3, &v81, 4);
        v12 = v81;
        if ((atomic_load_explicit(v5, memory_order_acquire) & 1) == 0 &&
            (unsigned int)__cxa_guard_acquire_plt(v5) != 0) {
          *(_DWORD*)v6 = 0;
          *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v6) = 1;
          __cxa_guard_release_plt(v5);
        }
        v13 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v6);
        if ((_DWORD)v12 != 0) {
          v14 = (void*)nn_movie_detail_AllocateMemory_alt1(v12, v13);
          memset_plt(v14, nullptr, v12);
        }
        else {
          v14 = nullptr;
        }
        SdkRoutine_8718d0(v3, v14, v81);
        v16 = v82;
        if (v82 >= 0x17) {
          if ((v82 | 7LL) == 0x17) {
            v23 = 26;
          }
          else {
            v23 = (v82 | 7LL) + 1;
          }
          v17 = (char*)SdkRoutine_85e050(v23);
          v78_.v79 = v16;
          v78_.v80 = v17;
          v78_.v78 = v23 | 1;
        }
        else {
          v17 = (char*)&v78_.v78 + 1;
          LOBYTE(v78_.v78) = 2 * v82;
          if (v82 == 0) {
            BYTE1(v78_.v78) = 0;
            v18 = v81;
            if (v81 >= 0x17) {
              goto LABEL_28;
            }
            goto LABEL_20;
          }
        }
        memmove_plt(v17, v10, v16);
        v17[v16] = 0;
        v18 = v81;
        if (v81 >= 0x17) {
        LABEL_28:
          if ((v18 | 7) == 0x17) {
            v24 = 26;
          }
          else {
            v24 = (v18 | 7) + 1;
          }
          v19 = (char*)SdkRoutine_85e050(v24);
          v75_.v76 = v18;
          v75_.v77 = v19;
          v75_.v75 = v24 | 1;
          goto LABEL_32;
        }
      LABEL_20:
        v19 = (char*)&v75_.v75 + 1;
        LOBYTE(v75_.v75) = 2 * v18;
        if ((_DWORD)v18 == 0) {
          v20 = v87_.v87;
          v21 = &v87_.v87;
          *((_BYTE*)&v75_.v75 + v18 + 1) = 0;
          v22 = &v87_.v87;
          if (v20 == 0) {
            goto LABEL_59;
          }
        LABEL_33:
          if ((v78_.v78 & 1) != 0) {
            v25 = v78_.v80;
          }
          else {
            v25 = (char*)&v78_.v78 + 1;
          }
          if ((v78_.v78 & 1) != 0) {
            v26 = v78_.v79;
          }
          else {
            v26 = (unsigned __int64)(unsigned __int8)v78_.v78 >> 1;
          }
          while (1) {
            v21 = (__int64*)v20;
            v27 = *(unsigned __int8*)(v20 + 32);
            v28 = (v27 & 1) == 0;
            v29 = v27 >> 1;
            if (v28) {
              v30 = v29;
            }
            else {
              v30 = v21[5];
            }
            if (v28) {
              v31 = (char*)v21 + 33;
            }
            else {
              v31 = (char*)v21[6];
            }
            if (v30 >= v26) {
              v32 = v26;
            }
            else {
              v32 = v30;
            }
            v33 = memcmp_plt(v25, v31, v32);
            if (v33 != 0) {
              if (v33 < 0) {
                goto LABEL_39;
              }
            }
            else if (v26 < v30) {
            LABEL_39:
              v20 = *v21;
              v22 = v21;
              if (*v21 == 0) {
                goto LABEL_59;
              }
              continue;
            }
            v34 = memcmp_plt(v31, v25, v32);
            if (v34 != 0) {
              if ((v34 & 0x80000000) == 0) {
                goto LABEL_98;
              }
            }
            else if (v30 >= v26) {
              goto LABEL_98;
            }
            v20 = v21[1];
            if (v20 == 0) {
              v22 = v21 + 1;
              goto LABEL_59;
            }
          }
        }
      LABEL_32:
        memmove_plt(v19, v14, v18);
        v20 = v87_.v87;
        v21 = &v87_.v87;
        v19[v18] = 0;
        v22 = &v87_.v87;
        if (v20 != 0) {
          goto LABEL_33;
        }
      LABEL_59:
        v35 = nn_movie_detail_AllocateMemory_alt1(80, v87_.v88);
        v36 = v78_.v78;
        v37 = v78_.v79;
        v78_.v78 = 0;
        v78_.v79 = 0;
        *(_QWORD*)(v35 + 32) = v36;
        *(_QWORD*)(v35 + 40) = v37;
        v38 = v78_.v80;
        v39 = v75_.v75;
        v40 = v75_.v76;
        v78_.v80 = nullptr;
        v75_.v75 = 0;
        *(_QWORD*)(v35 + 48) = v38;
        *(_QWORD*)(v35 + 56) = v39;
        v41 = v75_.v77;
        v75_.v76 = 0;
        v75_.v77 = nullptr;
        *(_QWORD*)v35 = 0;
        *(_QWORD*)(v35 + 8) = 0;
        *(_QWORD*)(v35 + 16) = v21;
        *(_QWORD*)(v35 + 64) = v40;
        *(_QWORD*)(v35 + 72) = v41;
        *v22 = v35;
        if (*v86 != 0) {
          v86 = (__int64*)*v86;
          v35 = *v22;
        }
        v42 = v87_.v87;
        *(_BYTE*)(v35 + 24) = v35 == v87_.v87;
        if (v35 != v42) {
          do {
            v43 = *(__int64**)(v35 + 16);
            if ((v43[3] & 1) != 0) {
              break;
            }
            v44 = v43[2];
            v45 = *(__int64**)v44;
            if (v43 == *(__int64**)v44) {
              v45 = *(__int64**)(v44 + 8);
              if (v45 == nullptr || (v45[3] & 1) != 0) {
                if (v35 == *v43) {
                  *((_BYTE*)v43 + 24) = 1;
                  *(_BYTE*)(v44 + 24) = 0;
                  v49 = *(__int64**)v44;
                  v53 = *(_QWORD*)(*(_QWORD*)v44 + 8LL);
                  *(_QWORD*)v44 = v53;
                  if (v53 != 0) {
                    goto LABEL_91;
                  }
                }
                else {
                  v46 = (__int64**)v43[1];
                  v47 = *v46;
                  v43[1] = (__int64)*v46;
                  if (v47 != nullptr) {
                    v47[2] = (__int64)v43;
                    v44 = v43[2];
                  }
                  v46[2] = (__int64*)v44;
                  if (v43 == *(__int64**)v44) {
                    *(_QWORD*)v44 = v46;
                  }
                  else {
                    *(_QWORD*)(v44 + 8) = v46;
                  }
                  *v46 = v43;
                  v43[2] = (__int64)v46;
                  v44 = (__int64)v46[2];
                  *((_BYTE*)v46 + 24) = 1;
                  *(_BYTE*)(v44 + 24) = 0;
                  v49 = *(__int64**)v44;
                  v53 = *(_QWORD*)(*(_QWORD*)v44 + 8LL);
                  *(_QWORD*)v44 = v53;
                  if (v53 != 0) {
                  LABEL_91:
                    *(_QWORD*)(v53 + 16) = v44;
                  }
                }
                v54 = *(__int64***)(v44 + 16);
                v49[2] = (__int64)v54;
                if ((__int64*)v44 == *v54) {
                  *v54 = v49;
                }
                else {
                  v54[1] = v49;
                }
                v49[1] = v44;
              LABEL_96:
                *(_QWORD*)(v44 + 16) = v49;
                break;
              }
            }
            else if (v45 == nullptr || (v45[3] & 1) != 0) {
              v48 = *v43;
              if (v35 == *v43) {
                v52 = *(_QWORD*)(v48 + 8);
                *v43 = v52;
                if (v52 != 0) {
                  *(_QWORD*)(v52 + 16) = v43;
                  v44 = v43[2];
                }
                *(_QWORD*)(v48 + 16) = v44;
                if (v43 == *(__int64**)v44) {
                  *(_QWORD*)v44 = v48;
                }
                else {
                  *(_QWORD*)(v44 + 8) = v48;
                }
                *(_QWORD*)(v48 + 8) = v43;
                v43[2] = v48;
                v44 = *(_QWORD*)(v48 + 16);
                *(_BYTE*)(v48 + 24) = 1;
                *(_BYTE*)(v44 + 24) = 0;
                v49 = *(__int64**)(v44 + 8);
                v50 = *v49;
                *(_QWORD*)(v44 + 8) = *v49;
                if (v50 != 0) {
                LABEL_78:
                  *(_QWORD*)(v50 + 16) = v44;
                }
              }
              else {
                *((_BYTE*)v43 + 24) = 1;
                *(_BYTE*)(v44 + 24) = 0;
                v49 = *(__int64**)(v44 + 8);
                v50 = *v49;
                *(_QWORD*)(v44 + 8) = *v49;
                if (v50 != 0) {
                  goto LABEL_78;
                }
              }
              v51 = *(__int64***)(v44 + 16);
              v49[2] = (__int64)v51;
              if ((__int64*)v44 == *v51) {
                *v51 = v49;
              }
              else {
                v51[1] = v49;
              }
              *v49 = v44;
              goto LABEL_96;
            }
            *((_BYTE*)v43 + 24) = 1;
            v35 = v44;
            *(_BYTE*)(v44 + 24) = v44 == v42;
            *((_BYTE*)v45 + 24) = 1;
          } while (v44 != v42);
        }
        ++v87_.v89;
      LABEL_98:
        if ((v75_.v75 & 1) != 0) {
          SdkRoutine_857220(v75_.v77, v75_.v75 & 0xFFFFFFFFFFFFFFFELL);
          v3 = v73;
          v6 = SdkData_e88338[0];
          if ((v78_.v78 & 1) != 0) {
          LABEL_105:
            SdkRoutine_857220(v78_.v80, v78_.v78 & 0xFFFFFFFFFFFFFFFELL);
            if (v14 == nullptr) {
              goto LABEL_102;
            }
          LABEL_101:
            nn_movie_detail_FreeMemory((__int64)v14, v13);
            goto LABEL_102;
          }
        }
        else {
          v3 = v73;
          v6 = SdkData_e88338[0];
          if ((v78_.v78 & 1) != 0) {
            goto LABEL_105;
          }
        }
        if (v14 != nullptr) {
          goto LABEL_101;
        }
      LABEL_102:
        if (v10 != nullptr) {
          nn_movie_detail_FreeMemory((__int64)v10, v74);
        }
        v5 = (atomic_uchar*)SdkData_e88330;
      }
    }
    LODWORD(v75_.v75) = 0;
    SdkRoutine_8718d0(v3, &v75_.v75, 4);
    v55 = (unsigned int)v75_.v75;
    if ((atomic_load_explicit(v5, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(v5) != 0) {
      *(_DWORD*)v6 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v6) = 1;
      __cxa_guard_release_plt(v5);
    }
    v56 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v6);
    if ((_DWORD)v55 != 0) {
      v57 = (void*)nn_movie_detail_AllocateMemory_alt1(v55, v56);
      memset_plt(v57, nullptr, v55);
    }
    else {
      v57 = nullptr;
    }
    SdkRoutine_8718d0(v3, v57, (unsigned int)v75_.v75);
    v59 = (unsigned int)v75_.v75;
    if ((unsigned int)v75_.v75 >= 0x17) {
      if (((unsigned int)v75_.v75 | 7LL) == 0x17) {
        v66 = 26;
      }
      else {
        v66 = ((unsigned int)v75_.v75 | 7LL) + 1;
      }
      v60 = (char*)SdkRoutine_85e050(v66);
      v78_.v79 = v59;
      v78_.v80 = v60;
      v78_.v78 = v66 | 1;
    }
    else {
      v60 = (char*)&v78_.v78 + 1;
      LOBYTE(v78_.v78) = 2 * v75_.v75;
      if ((_DWORD)v75_.v75 == 0) {
        BYTE1(v78_.v78) = 0;
        if ((v87_.v90 & 1) == 0) {
          goto LABEL_122;
        }
      LABEL_121:
        SdkRoutine_857220(v92, v87_.v90 & 0xFFFFFFFFFFFFFFFELL);
        goto LABEL_122;
      }
    }
    memmove_plt(v60, v57, v59);
    v67 = v87_.v90;
    v60[v59] = 0;
    if ((v67 & 1) != 0) {
      goto LABEL_121;
    }
  LABEL_122:
    v87_.v90 = v78_.v78;
    v87_.v91 = v78_.v79;
    *(_QWORD*)&v92 = v78_.v80;
    SdkRoutine_8718d0(v3, (char*)&v92 + 8, 4);
    SdkRoutine_8718d0(v3, (char*)&v92 + 12, 1);
    SdkRoutine_8718d0(v3, (char*)&v92 + 13, 1);
    SdkRoutine_8718d0(v3, (char*)&v92 + 14, 1);
    v61 = v71[1];
    v5 = (atomic_uchar*)SdkData_e88330;
    if (v61 >= v71[2]) {
      v71[1] = nandroid_extractors_mp4_4f4780(v71, &v84);
      if (v57 == nullptr) {
        goto LABEL_136;
      }
    }
    else {
      v62 = v84;
      *(_DWORD*)(v61 + 8) = v85;
      *(_QWORD*)v61 = v62;
      *(_QWORD*)(v61 + 16) = v86;
      v63 = v87_.v87;
      *(_QWORD*)(v61 + 24) = v87_.v87;
      v64 = v61 + 24;
      *(_QWORD*)(v61 + 32) = v87_.v88;
      v65 = v87_.v89;
      *(_QWORD*)(v61 + 40) = v87_.v89;
      if (v65 != 0) {
        *(_QWORD*)(v63 + 16) = v64;
        v87_.v89 = 0;
        v86 = &v87_.v87;
        v87_.v87 = 0;
      }
      else {
        *(_QWORD*)(v61 + 16) = v64;
      }
      v68 = v87_.v90;
      v69 = v92;
      *(_QWORD*)(v61 + 56) = v87_.v91;
      *(_QWORD*)(v61 + 64) = v69;
      *(_QWORD*)(v61 + 48) = v68;
      v87_.v91 = 0;
      *(_QWORD*)&v92 = 0;
      v87_.v90 = 0;
      LODWORD(v68) = *(_DWORD*)((char*)&v92 + 11);
      *(_DWORD*)(v61 + 72) = DWORD2(v92);
      *(_DWORD*)(v61 + 75) = v68;
      v71[1] = v61 + 80;
      if (v57 == nullptr) {
        goto LABEL_136;
      }
    }
    nn_movie_detail_FreeMemory((__int64)v57, v56);
  LABEL_136:
    if ((v87_.v90 & 1) != 0) {
      SdkRoutine_857220(v92, v87_.v90 & 0xFFFFFFFFFFFFFFFELL);
    }
    nandroid_extractors_mp4_4f4ab0((__int64)&v86, v87_.v87);
    v4 = v72 + 1;
    v6 = SdkData_e88338[0];
    if (v72 + 1 >= v94[0]) {
      return 0;
    }
  }
}

#pragma GCC visibility pop
