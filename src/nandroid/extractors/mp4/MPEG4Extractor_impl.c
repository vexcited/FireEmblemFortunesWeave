#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 AMediaFormat_clear_plt(_QWORD);
__int64 AMediaFormat_getBuffer_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 AMediaFormat_getInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 AMediaFormat_getString_plt(_QWORD, _QWORD, _QWORD);
__int64 AMediaFormat_setBuffer_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 AMediaFormat_setInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 AMediaFormat_setInt64_plt(_QWORD, _QWORD, _QWORD);
__int64 AMediaFormat_setString_plt(_QWORD, _QWORD, _QWORD);
__int64 MatroskaExtractor_4e2540(__int64*, __int64**);
__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 SdkRoutine_8546b0();
__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 SdkRoutine_85e050(unsigned __int64);
__int64 SdkRoutine_86ee30(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 gmtime_plt(_QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_FindAVCLayerId_plt(_QWORD, _QWORD);
__int64 nandroid_ID3_Destroy_ID3_plt(_QWORD);
__int64 nandroid_ID3_ID3_plt_86ed50(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nandroid_ID3_Iterator_Destroy_Iterator_plt(_QWORD);
__int64 nandroid_ID3_Iterator_Iterator_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_ID3_Iterator_done_plt(_QWORD);
__int64 nandroid_ID3_Iterator_getString_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_ID3_getAlbumArt_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_ID3_isValid_plt(_QWORD);
__int64 nandroid_MPEG4Source_parseChunk_plt(_QWORD, _QWORD);
__int64 nandroid_MakeFourCCString_plt(_QWORD, _QWORD);
__int64 nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(_QWORD);
__int64 nandroid_String8_Destroy_String8_plt(_QWORD);
__int64 nandroid_String8_String8_plt_86d870(_QWORD);
__int64 nandroid_String8_setTo_plt_86ed10(_QWORD, _QWORD);
__int64 nandroid_U16_AT_plt(_QWORD);
__int64 nandroid_U32_AT_plt(_QWORD);
__int64 nandroid_VectorImpl_Destroy_VectorImpl_plt(_QWORD);
__int64 nandroid_VectorImpl_clear_plt(_QWORD);
__int64 nandroid_VectorImpl_finish_vector_plt(_QWORD);
__int64 nandroid_extractors_mp4_4f4780(_QWORD);
__int64 nandroid_extractors_mp4_4f4ab0(_QWORD, _QWORD);
__int64 nandroid_extractors_mp4_4f4d50();
__int64 nandroid_extractors_mp4_4f6440(__int64 result);
__int64 nandroid_ntoh64_plt(_QWORD);
__int64 nn_fs_dc120(_QWORD, _QWORD);
__int64 nn_fs_dcfe0(_QWORD, _QWORD);
__int64 nn_movie_detail_AllocateMemory(__int64, _QWORD**);
__int64 nn_movie_detail_AllocateMemory_alt1(_QWORD, _QWORD) __asm__(
    "nn_movie_detail_AllocateMemory");
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_movie_detail_FreeMemory_alt1(_QWORD, _QWORD) __asm__(
    "nn_movie_detail_FreeMemory");
__int64 nn_os_GetTlsValue_plt(_QWORD);
__int64 std___1_ios_base_init_plt(_QWORD, _QWORD);
__int64 std___1_locale_locale_plt_86ee50(_QWORD);
__int64 strcasecmp_plt(_QWORD, _QWORD);
__int64 strftime_plt(_QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN SdkData_f4cc68;
extern __int128 SdkData_bb3070;
extern __int128 SdkData_bb4110;
extern __int64 SdkData_e88330;
extern __int64 SdkData_e88720;
extern __int64 SdkData_e88760;
extern __int64 SdkData_e88768;
extern __int64 SdkData_e88780;
extern __int64 SdkData_e888d8;
extern __int64 SdkData_e888e8;
extern __int64 SdkData_e888f0;
extern __int64 SdkData_f4cc70;
extern __int64 SdkData_f4cc78;
extern __int64 SdkData_f4cc80;
extern __int64 SdkData_f4cc88;
extern __int64 SdkData_f4cc90;
extern __int64 SdkData_f4cc98;
extern __int64 SdkData_f4cca0;
extern __int64 SdkData_f4cca8;
extern __int64 SdkData_f4ccb0;
extern __int64 SdkData_f4ccb8;
extern __int64 SdkData_f4ccc0;
extern __int64 SdkData_f4ccc8;
extern __int64 SdkData_f4ccd0;
extern __int64 SdkData_f4ccd8;
extern __int64 SdkData_f4cce0;
extern __int64 SdkData_f4cce8;
extern __int64 SdkData_f4ccf0;
extern __int64 SdkData_f4ccf8;
extern __int64 SdkData_f4cd00;
extern __int64 SdkData_f4cd08;
extern __int64 SdkData_f4cd10;
extern __int64 SdkData_f4cd18;
extern __int64 SdkData_f4cd20;
extern __int64 SdkData_f4cd28;
extern __int64 SdkData_f4cd30;
extern __int64 SdkData_f4cd38;
extern __int64 SdkData_f4cd40;
extern __int64 SdkData_f4cd48;
extern __int64 SdkData_f4cd50;
extern __int64 SdkData_f4cd58;
extern __int64 SdkData_f4cd60;
extern __int64 SdkData_f4cd68;
extern __int64 SdkData_f4cd70;
extern void (*SdkData_e88338[493])();
extern void (*SdkData_e88430[462])();
extern void (*SdkData_e88448[459])();
extern void (*SdkData_e88450[458])();
extern void (*SdkData_e88470[454])();
extern void (*SdkData_e88478[453])();
extern void (*SdkData_e885f8[405])();
extern void (*SdkData_e88600[404])();
extern void (*SdkData_e88608[403])();
extern void (*SdkData_e88610[402])();
extern void (*SdkData_e88618[401])();
extern void (*SdkData_e88620[400])();
extern void (*SdkData_e88628[399])();
extern void (*SdkData_e88630[398])();
extern void (*SdkData_e88638[397])();
extern void (*SdkData_e88680[388])();
extern void (*SdkData_e886a8[383])();
extern void (*SdkData_e886d0[378])();
extern void (*SdkData_e886f0[374])();
extern void (*SdkData_e887c0[348])();
extern void (*SdkData_e887e8[343])();
extern void (*SdkData_e88800[340])();
extern void (*SdkData_e88808[339])();
extern void (*SdkData_e88810[338])();
extern void (*SdkData_e88818[337])();
extern void (*SdkData_e88820[336])();
extern void (*SdkData_e88828[335])();
extern void (*SdkData_e88830[334])();
extern void (*SdkData_e88838[333])();
extern void (*SdkData_e88840[332])();
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
extern void (*SdkData_e888e0[312])();
extern void (*SdkData_e88910[306])();
long double SdkRoutine_853f10(long double, long double);
long double SdkRoutine_854fd0(long double, long double);
long double __addtf3(long double, long double);
long double __floatditf(__int64);
long double __floatsitf(int);
long double __floatunditf(unsigned __int64);
long double __floatunsitf(unsigned int);
void __attribute__((noreturn)) nn_fs_dc4d0();
void __attribute__((noreturn)) nn_sf_cmif_client_2b2f80(void);
const char* MPEG4Extractor_4ec1f0(int a1);
__int64 MPEG4Extractor_4ec470(int a1, _DWORD* a2, int* a3);
__int64 MPEG4Extractor_4ec9b0(__int64 a1);
__int64* MPEG4Extractor_4ecaf0(__int64* a1);
__int64 MPEG4Extractor_4edb90(signed __int64 a1, __int64 a2);
__int64 nandroid_MPEG4Extractor_parseID3v2MetaData(void* this_, __int64 a2);
__int64* MPEG4Extractor_4efb00(__int64** a1, unsigned int* a2);
__int64 MPEG4Extractor_4efc00(_QWORD* a1, unsigned int* a2);
_QWORD* MPEG4Extractor_4f0040(_QWORD* result, _QWORD* a2);
__int64 MPEG4Extractor_4f00f0(__int64 a1);
__int64 MPEG4Extractor_4f01a0(__int64 a1, __int64* a2);
__int64 MPEG4Extractor_4f0270(_QWORD* a1);
__int64 MPEG4Extractor_4f02c0(__int64 a1, int a2);
__attribute__((swiftcall)) void MPEG4Extractor_4f03a0(PSEUDO_X8 x8_,
                                                      __int64 result);
__int64* MPEG4Extractor_4f0520(__int64* result);
__int64 nandroid_MPEG4Source_fragmentedRead(__int64 a1, _QWORD* a2, int* a3);
__int64 (*nandroid_MPEG4Extractor_Sniff(__int64 a1, _DWORD* a2))();
__int64 MPEG4Extractor_4f4430(_QWORD* a1);
__int64 MPEG4Extractor_4f52f0(_QWORD* a1);
__int64 MPEG4Extractor_4f5790(_QWORD* a1);

const char* MPEG4Extractor_4ec1f0(int a1)
{
  const char* result;
  void(__attribute__((noreturn)) * v3)();
  int v4;

  result = "application/octet-stream";
  if (a1 <= 1751479856) {
    if (a1 > 1635135536) {
      if (a1 <= 1700998450) {
        if (a1 == 1635135537) {
          v3 = SdkData_e886f0[0];
        }
        else {
          if (a1 != 1635148593) {
            return result;
          }
          v3 = SdkData_e885f8[0];
        }
        return *(const char**)v3;
      }
      if (a1 == 1700998451) {
        v3 = SdkData_e88838[0];
        return *(const char**)v3;
      }
      if (a1 == 1716281667) {
        v3 = SdkData_e88830[0];
        return *(const char**)v3;
      }
      v4 = 1748121139;
      goto LABEL_25;
    }
    if (a1 > 1332770162) {
      switch (a1) {
      case 1332770163:
        v3 = SdkData_e886d0[0];
        break;
      case 1633889588:
        v3 = SdkData_e88828[0];
        break;
      case 1634492771:
        v3 = SdkData_e88818[0];
        break;
      default:
        return result;
      }
      return *(const char**)v3;
    }
    if (a1 != 778924083) {
      v4 = 1211250227;
    LABEL_25:
      if (a1 != v4) {
        return result;
      }
      goto LABEL_36;
    }
  LABEL_37:
    v3 = SdkData_e88610[0];
    return *(const char**)v3;
  }
  if (a1 > 1932670514) {
    if (a1 <= 1935767393) {
      if (a1 != 1932670515) {
        if (a1 != 1935764850) {
          return result;
        }
        v3 = SdkData_e88820[0];
        return *(const char**)v3;
      }
    LABEL_36:
      v3 = SdkData_e886a8[0];
      return *(const char**)v3;
    }
    if (a1 == 1935767394) {
      v3 = SdkData_e88840[0];
      return *(const char**)v3;
    }
    if (a1 == 1936684916 || a1 == 1953984371) {
      v3 = SdkData_e88618[0];
      return *(const char**)v3;
    }
  }
  else {
    if (a1 > 1836069984) {
      if (a1 == 1836069985) {
        v3 = SdkData_e88608[0];
        return *(const char**)v3;
      }
      if (a1 == 1836070006) {
        v3 = SdkData_e88680[0];
        return *(const char**)v3;
      }
      if (a1 != 1836253269) {
        return result;
      }
      goto LABEL_37;
    }
    if (a1 == 1751479857 || a1 == 1752589105) {
      v3 = SdkData_e88600[0];
      return *(const char**)v3;
    }
  }
  return result;
}

__int64 MPEG4Extractor_4ec470(int a1, _DWORD* a2, int* a3)
{
  __int64 v5;
  const char* v6;
  int v8;

  v5 = *(_QWORD*)SdkData_e88820[0];
  v6 = MPEG4Extractor_4ec1f0(a1);
  if ((unsigned int)strcasecmp_plt(v5, v6) != 0) {
    if ((unsigned int)strcasecmp_plt(*(_QWORD*)SdkData_e88840[0], v6) != 0) {
      return 0;
    }
    v8 = 16000;
  }
  else {
    v8 = 8000;
  }
  *a2 = 1;
  *a3 = v8;
  return 1;
}

__int64 MPEG4Extractor_4ec9b0(__int64 a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD** v4;
  int v6;

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
  v4 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  return nn_movie_detail_AllocateMemory(a1, v4);
}

__int64* MPEG4Extractor_4ecaf0(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64* result;
  __int64 v5;
  __int64 v6;

  v1 = *a1;
  *a1 = 0;
  if (v1 != 0) {
    v3 = a1[6];
    v6 = v1;
    if (v3 == 0) {
      nn_sf_cmif_client_2b2f80();
    }
    (*(void (**)(__int64, __int64*))(*(_QWORD*)v3 + 48LL))(v3, &v6);
  }
  result = (__int64*)a1[6];
  if (result == a1 + 2) {
    v5 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (__int64*)(*(__int64 (**)(__int64))(*result + v5))((__int64)result);
}

__int64 MPEG4Extractor_4edb90(signed __int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  _QWORD v6[6];
  signed __int64 v7;

  if (a1 < (__int64)0x800000007C25B080LL) {
    return 0;
  }
  v6[4] = v2;
  v6[5] = v3;
  memset(v6, 0, 32);
  v7 = a1 - 2082844800;
  result = gmtime_plt(&v7);
  if (result != 0) {
    result = strftime_plt(v6, 32, "%Y%m%dT%H%M%S.000Z", result);
    if (result != 0) {
      nandroid_String8_setTo_plt_86ed10(a2, v6);
      return 1;
    }
  }
  return result;
}

__int64 nandroid_MPEG4Extractor_parseID3v2MetaData(void* this_, __int64 a2)
{
  __int64 v3;
  __int64 v5;
  atomic_uchar* v6;
  void(__attribute__((noreturn)) * v7)();
  __int64* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  _QWORD** v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD** v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD v27[6];
  __int64 v28;

  v3 = *((_QWORD*)this_ + 18);
  memset(v27, 0, sizeof(v27));
  nandroid_ID3_ID3_plt_86ed50(v27, v3, 1, a2);
  if ((nandroid_ID3_isValid_plt(v27) & 1) != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f4cc68,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(&SdkData_f4cc68) != 0) {
      SdkData_f4cc90 = (__int64)"TPE1";
      SdkData_f4cc98 = (__int64)"TP1";
      v19 = *(_QWORD*)SdkData_e88878[0];
      v20 = *(_QWORD*)SdkData_e88880[0];
      v21 = *(_QWORD*)SdkData_e88888[0];
      v22 = *(_QWORD*)SdkData_e88890[0];
      SdkData_f4ccc0 = (__int64)"TCOM";
      SdkData_f4ccc8 = (__int64)"TCM";
      SdkData_f4ccf0 = (__int64)"TIT2";
      SdkData_f4ccf8 = (__int64)"TT2";
      SdkData_f4cc70 = v19;
      SdkData_f4cc78 = (__int64)"TALB";
      SdkData_f4cc80 = (__int64)"TAL";
      SdkData_f4cc88 = v20;
      SdkData_f4cca0 = v21;
      SdkData_f4cca8 = (__int64)"TPE2";
      SdkData_f4ccb0 = (__int64)"TP2";
      SdkData_f4ccb8 = v22;
      v23 = *(_QWORD*)SdkData_e888a0[0];
      SdkData_f4ccd0 = *(_QWORD*)SdkData_e88898[0];
      SdkData_f4ccd8 = (__int64)"TCON";
      SdkData_f4cce0 = (__int64)"TCO";
      SdkData_f4cce8 = v23;
      SdkData_f4cd00 = *(_QWORD*)SdkData_e88870[0];
      SdkData_f4cd08 = (__int64)"TYE";
      v24 = *(_QWORD*)SdkData_e888a8[0];
      SdkData_f4cd10 = (__int64)"TYER";
      SdkData_f4cd18 = v24;
      SdkData_f4cd20 = (__int64)"TXT";
      SdkData_f4cd28 = (__int64)"TEXT";
      SdkData_f4cd30 = *(_QWORD*)SdkData_e88860[0];
      SdkData_f4cd38 = (__int64)"TRK";
      v25 = *(_QWORD*)SdkData_e88858[0];
      SdkData_f4cd40 = (__int64)"TRCK";
      SdkData_f4cd48 = v25;
      SdkData_f4cd50 = (__int64)"TPA";
      SdkData_f4cd58 = (__int64)"TPOS";
      SdkData_f4cd60 = *(_QWORD*)SdkData_e88868[0];
      SdkData_f4cd68 = (__int64)"TCP";
      SdkData_f4cd70 = (__int64)"TCMP";
      __cxa_guard_release_plt(&SdkData_f4cc68);
    }
    v5 = 11;
    v6 = (atomic_uchar*)SdkData_e88330;
    v7 = SdkData_e88338[0];
    v8 = &SdkData_f4cc78;
    do {
      v10 = *((_QWORD*)this_ + 23);
      v11 = *(v8 - 1);
      v28 = 0;
      if ((AMediaFormat_getString_plt(v10, v11, &v28) & 1) == 0) {
        if ((atomic_load_explicit(v6, memory_order_acquire) & 1) == 0 &&
            (unsigned int)__cxa_guard_acquire_plt(v6) != 0) {
          *(_DWORD*)v7 = 0;
          *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v7) = 1;
          __cxa_guard_release_plt(v6);
        }
        v12 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v7);
        v13 = SdkRoutine_4c3860(16, 40, v12);
        nandroid_ID3_Iterator_Iterator_plt(v13, v27, *v8);
        if ((nandroid_ID3_Iterator_done_plt(v13) & 1) != 0) {
          nandroid_ID3_Iterator_Destroy_Iterator_plt(v13);
          if ((atomic_load_explicit(v6, memory_order_acquire) & 1) == 0 &&
              (unsigned int)__cxa_guard_acquire_plt(v6) != 0) {
            *(_DWORD*)v7 = 0;
            *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v7) = 1;
            __cxa_guard_release_plt(v6);
          }
          v14 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v7);
          nn_movie_detail_FreeMemory(v13, v14);
          if ((atomic_load_explicit(v6, memory_order_acquire) & 1) == 0 &&
              (unsigned int)__cxa_guard_acquire_plt(v6) != 0) {
            *(_DWORD*)v7 = 0;
            *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v7) = 1;
            __cxa_guard_release_plt(v6);
          }
          v15 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v7);
          v13 = SdkRoutine_4c3860(16, 40, v15);
          nandroid_ID3_Iterator_Iterator_plt(v13, v27, v8[1]);
        }
        if ((nandroid_ID3_Iterator_done_plt(v13) & 1) != 0) {
          nandroid_ID3_Iterator_Destroy_Iterator_plt(v13);
          if ((atomic_load_explicit(v6, memory_order_acquire) & 1) == 0 &&
              (unsigned int)__cxa_guard_acquire_plt(v6) != 0) {
            *(_DWORD*)v7 = 0;
            *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v7) = 1;
            __cxa_guard_release_plt(v6);
          }
          v16 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v7);
          nn_movie_detail_FreeMemory(v13, v16);
        }
        else {
          v26 = 0;
          nandroid_String8_String8_plt_86d870(&v26);
          nandroid_ID3_Iterator_getString_plt(v13, &v26, 0);
          nandroid_ID3_Iterator_Destroy_Iterator_plt(v13);
          if ((atomic_load_explicit(v6, memory_order_acquire) & 1) == 0 &&
              (unsigned int)__cxa_guard_acquire_plt(v6) != 0) {
            *(_DWORD*)v7 = 0;
            *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v7) = 1;
            __cxa_guard_release_plt(v6);
          }
          v9 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v7);
          nn_movie_detail_FreeMemory(v13, v9);
          AMediaFormat_setString_plt(*((_QWORD*)this_ + 23), *(v8 - 1), v26);
          nandroid_String8_Destroy_String8_plt(&v26);
        }
      }
      --v5;
      v8 += 3;
    } while (v5 != 0);
    v28 = 0;
    v26 = 0;
    nandroid_String8_String8_plt_86d870(&v26);
    v17 = nandroid_ID3_getAlbumArt_plt(v27, &v28, &v26);
    if (v17 != 0) {
      AMediaFormat_setBuffer_plt(*((_QWORD*)this_ + 23),
                                 *(_QWORD*)SdkData_e887c0[0], v17, v28);
    }
    nandroid_String8_Destroy_String8_plt(&v26);
  }
  return nandroid_ID3_Destroy_ID3_plt(v27);
}

__int64* MPEG4Extractor_4efb00(__int64** a1, unsigned int* a2)
{
  __int64 v2;
  __int64* v3;
  unsigned int v6;
  __int64* v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64* v12;

  v3 = (__int64*)(a1 + 1);
  v2 = (__int64)a1[1];
  if (v2 != 0) {
    v6 = *a2;
    while (1) {
      while (1) {
        v7 = (__int64*)v2;
        v8 = *(_DWORD*)(v2 + 28);
        if (v6 >= v8) {
          break;
        }
        v2 = *v7;
        v3 = v7;
        if (*v7 == 0) {
          goto LABEL_9;
        }
      }
      if (v8 >= v6) {
        break;
      }
      v2 = v7[1];
      if (v2 == 0) {
        v3 = v7 + 1;
        goto LABEL_9;
      }
    }
  }
  else {
    v7 = (__int64*)(a1 + 1);
  LABEL_9:
    v9 = nn_movie_detail_AllocateMemory_alt1(32, a1[2]);
    v10 = *a2;
    *(_QWORD*)v9 = 0;
    *(_QWORD*)(v9 + 8) = 0;
    *(_QWORD*)(v9 + 16) = v7;
    v7 = (__int64*)v9;
    v11 = v9;
    *(_DWORD*)(v9 + 28) = v10;
    *v3 = v9;
    v12 = (__int64*)**a1;
    if (v12 != nullptr) {
      *a1 = v12;
      v11 = *v3;
    }
    nn_fs_dc120(a1[1], v11);
    a1[3] = (__int64*)((char*)a1[3] + 1);
  }
  return v7;
}

__int64 MPEG4Extractor_4efc00(_QWORD* a1, unsigned int* a2)
{
  __int64 v2;
  unsigned int v3;
  _QWORD* v4;
  __int64 v5;
  unsigned int v6;
  bool v7;
  __int64 v8;
  _QWORD* v10;
  _QWORD* v11;
  _QWORD* v12;
  bool v13;

  v2 = a1[1];
  if (v2 == 0) {
    return 0;
  }
  v3 = *a2;
  v4 = a1 + 1;
  v5 = a1[1];
  do {
    v6 = *(_DWORD*)(v5 + 28);
    v7 = v6 >= v3;
    if (v6 >= v3) {
      v8 = 0;
    }
    else {
      v8 = 8;
    }
    if (v7) {
      v4 = (_QWORD*)v5;
    }
    v5 = *(_QWORD*)(v5 + v8);
  } while (v5 != 0);
  if (v4 == a1 + 1 || v3 < *((_DWORD*)v4 + 7)) {
    return 0;
  }
  v10 = (_QWORD*)v4[1];
  if (v10 != nullptr) {
    do {
      v11 = v10;
      v10 = (_QWORD*)*v10;
    } while (v10 != nullptr);
  }
  else {
    v12 = v4;
    do {
      v11 = (_QWORD*)v12[2];
      v13 = v12 == (_QWORD*)*v11;
      v12 = v11;
    } while (!v13);
  }
  if ((_QWORD*)*a1 == v4) {
    *a1 = v11;
  }
  --a1[3];
  nn_fs_dcfe0(v2, v4);
  nn_movie_detail_FreeMemory_alt1(v4, a1[2]);
  return 1;
}

_QWORD* MPEG4Extractor_4f0040(_QWORD* result, _QWORD* a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  bool v9;

  result[1] = 0;
  v2 = result + 1;
  *result = 0;
  v3 = a2 + 1;
  v4 = a2[2];
  *result = result + 1;
  result[2] = v4;
  result[3] = 0;
  v5 = (_QWORD*)*a2;
  if ((_QWORD*)*a2 != a2 + 1) {
    v6 = result;
    do {
      result = (_QWORD*)SdkRoutine_86ee30(v6, v2, v5 + 4, v5 + 4);
      v7 = (_QWORD*)v5[1];
      if (v7 != nullptr) {
        do {
          v8 = v7;
          v7 = (_QWORD*)*v7;
        } while (v7 != nullptr);
      }
      else {
        do {
          v8 = (_QWORD*)v5[2];
          v9 = v5 == (_QWORD*)*v8;
          v5 = v8;
        } while (!v9);
      }
      v5 = v8;
    } while (v8 != v3);
  }
  return result;
}

__int64 MPEG4Extractor_4f00f0(__int64 a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  __int64 result;
  int v5;

  *(_QWORD*)a1 = 0xFFFFFFFF00000000LL;
  *(_DWORD*)(a1 + 8) = -1;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v3 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v5 = __cxa_guard_acquire_plt(SdkData_e88330);
    v3 = SdkData_e88338[0];
    if (v5 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
    }
  }
  result = nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = result;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 71) = 0;
  *(_QWORD*)(a1 + 16) = a1 + 24;
  *(_DWORD*)a1 = 1;
  return result;
}

__int64 MPEG4Extractor_4f01a0(__int64 a1, __int64* a2)
{
  unsigned __int64 v2;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;

  v2 = *(_QWORD*)(a1 + 8);
  if (v2 >= *(_QWORD*)(a1 + 16)) {
    result = nandroid_extractors_mp4_4f4780(a1);
    *(_QWORD*)(a1 + 8) = result;
  }
  else {
    v4 = *a2;
    *(_DWORD*)(v2 + 8) = *((_DWORD*)a2 + 2);
    *(_QWORD*)v2 = v4;
    *(_QWORD*)(v2 + 16) = a2[2];
    v5 = a2[3];
    *(_QWORD*)(v2 + 24) = v5;
    v6 = v2 + 24;
    *(_QWORD*)(v2 + 32) = a2[4];
    v7 = a2[5];
    *(_QWORD*)(v2 + 40) = v7;
    if (v7 != 0) {
      *(_QWORD*)(v5 + 16) = v6;
      a2[2] = (__int64)(a2 + 3);
      a2[3] = 0;
      a2[5] = 0;
    }
    else {
      *(_QWORD*)(v2 + 16) = v6;
    }
    v9 = a2[6];
    v10 = a2[8];
    *(_QWORD*)(v2 + 56) = a2[7];
    *(_QWORD*)(v2 + 64) = v10;
    *(_QWORD*)(v2 + 48) = v9;
    a2[7] = 0;
    a2[8] = 0;
    a2[6] = 0;
    LODWORD(v9) = *((_DWORD*)a2 + 18);
    *(_DWORD*)(v2 + 75) = *(_DWORD*)((char*)a2 + 75);
    *(_DWORD*)(v2 + 72) = v9;
    *(_QWORD*)(a1 + 8) = v2 + 80;
    return v2 + 80;
  }
  return result;
}

__int64 MPEG4Extractor_4f0270(_QWORD* a1)
{
  if ((a1[6] & 1) != 0) {
    SdkRoutine_857220(a1[8], a1[6] & 0xFFFFFFFFFFFFFFFELL);
  }
  return nandroid_extractors_mp4_4f4ab0(a1 + 2, a1[3]);
}

__int64 MPEG4Extractor_4f02c0(__int64 a1, int a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  *(_QWORD*)(a1 + 160) = 0;
  v4 = SdkData_e888d8;
  v5 = SdkData_e888d8 + 64;
  *(_QWORD*)(a1 + 112) = SdkData_e888d8 + 64;
  v7 = *(_QWORD*)((char*)SdkData_e888e0[0] +
                  (unsigned __int64)((__int64*)0x4LL) + 4);
  v6 = *(_QWORD*)((char*)SdkData_e888e0[0] +
                  (unsigned __int64)((__int64*)0x4LL) + 4 + 8);
  *(_QWORD*)a1 = v7;
  *(_QWORD*)(a1 + *(_QWORD*)(v7 - 24)) = v6;
  v8 = a1 + *(_QWORD*)(*(_QWORD*)a1 - 24LL);
  std___1_ios_base_init_plt(v8, a1 + 8);
  *(_QWORD*)(v8 + 136) = 0;
  *(_DWORD*)(v8 + 144) = -1;
  *(_QWORD*)(a1 + 112) = v5;
  v9 = SdkData_e888e8 + 16;
  *(_QWORD*)a1 = v4 + 24;
  *(_QWORD*)(a1 + 8) = v9;
  std___1_locale_locale_plt_86ee50(a1 + 16);
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  v10 = SdkData_e888f0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_DWORD*)(a1 + 104) = a2 | 0x10;
  *(_QWORD*)(a1 + 8) = v10 + 16;
  return nandroid_extractors_mp4_4f6440(a1 + 8);
}

__attribute__((swiftcall)) void MPEG4Extractor_4f03a0(PSEUDO_X8 x8_,
                                                      __int64 result)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v3;
  _BYTE* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;

  v3 = *(_DWORD*)(result + 104);
  if ((v3 & 0x10) != 0) {
    v5 = *(_QWORD*)(result + 96);
    v6 = *(_QWORD*)(result + 56);
    if (v5 < v6) {
      *(_QWORD*)(result + 96) = v6;
      v5 = v6;
    }
    v7 = *(_QWORD*)(result + 48);
    v8 = v5 - v7;
    if (v5 - v7 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_17;
    }
  }
  else {
    if ((v3 & 8) == 0) {
      *(_BYTE*)a2 = 0;
      v4 = (_BYTE*)(a2 + 1);
    LABEL_4:
      *v4 = 0;
      {
        result;
        return;
      }
    }
    v7 = *(_QWORD*)(result + 24);
    v8 = *(_QWORD*)(result + 40) - v7;
    if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_17:
      nn_fs_dc4d0();
    }
  }
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v8 | 7) + 1;
    }
    v10 = SdkRoutine_85e050(v9);
    *(_QWORD*)(a2 + 8) = v8;
    *(_QWORD*)(a2 + 16) = v10;
    *(_QWORD*)a2 = v9 | 1;
    v4 = (_BYTE*)v10;
  }
  else {
    *(_BYTE*)a2 = 2 * v8;
    v4 = (_BYTE*)(a2 + 1);
    if (v8 == 0) {
      goto LABEL_4;
    }
  }
  result = memmove_plt(v4, v7, v8);
  v4[v8] = 0;
  {
    result;
    return;
  }
}

__int64* MPEG4Extractor_4f0520(__int64* result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;

  v1 = *result;
  if (*result != 0) {
    v2 = result[1];
    v3 = result;
    v4 = *result;
    if (v1 != v2) {
      do {
        if ((*(_BYTE*)(v2 - 32) & 1) != 0) {
          SdkRoutine_857220(*(_QWORD*)(v2 - 16),
                            *(_QWORD*)(v2 - 32) & 0xFFFFFFFFFFFFFFFELL);
        }
        nandroid_extractors_mp4_4f4ab0(v2 - 64, *(_QWORD*)(v2 - 56));
        v2 -= 80;
      } while (v2 != v1);
      v4 = *v3;
    }
    v5 = v3[2];
    v3[1] = v1;
    return (__int64*)SdkRoutine_857220(v4, v5 - v4);
  }
  return result;
}

__int64 nandroid_MPEG4Source_fragmentedRead(__int64 a1, _QWORD* a2, int* a3)
{

#pragma clang fp contract(off)
  int v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  int v11;
  __int64 v12;
  long double v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  long double v20;
  long double v21;
  long double v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  _BOOL4 v34;
  __int64 v35;
  __int64 result;
  __int64* v37;
  unsigned __int64 v38;
  __int64 v39;
  int v40;
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
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v59;
  unsigned __int8* v60;
  __int64 v61;
  unsigned __int64 v62;
  bool v63;
  unsigned __int64 v65;
  unsigned __int64 v66;
  bool v67;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  long double v73;
  __int64 v74;
  __int64 v75;
  long double v76;
  long double v77;
  __int64 v78;
  __int64 v79;
  long double v80;
  long double v81;
  __int64 v82;
  __int64 v83;
  long double v84;
  __int64 v85;
  __int64 v86;
  long double v87;
  long double v88;
  __int64 v89;
  __int64 v90;
  long double v91;
  long double v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  _BOOL4 v96;
  __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  _BYTE* v101;
  int v102;
  int v103;
  _QWORD* v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  long double v109;
  long double v110;
  long double v111;
  __int64 v112;
  long double v113;
  long double v114;
  _BOOL4 v115;
  long double v116;
  long double v117;
  __int64 v118;
  __int64 v119;

  *a2 = 0;
  if (a3 == nullptr) {
    goto LABEL_3;
  }
  v5 = *a3;
  if ((*a3 & 8) == 0) {
    goto LABEL_3;
  }
  v19 = *((_QWORD*)a3 + 1);
  v20 = __floatunditf(*(_QWORD*)(a1 + 272));
  v116 = SdkRoutine_854fd0(v20, *(long double*)&SdkData_bb3070);
  v21 = __floatsitf(*(_DWORD*)(a1 + 64));
  v117 = SdkRoutine_853f10(v116, v21);
  v22 = __floatditf(v19);
  __addtf3(v117, v22);
  v23 = SdkRoutine_8546b0();
  v24 = *(_QWORD*)(a1 + 88);
  v25 = *(_QWORD*)(v24 + 16);
  if ((_DWORD)v25 == 0) {
    *(_QWORD*)(a1 + 112) = *(_QWORD*)(a1 + 104);
    *(_QWORD*)(a1 + 120) = -1;
    nandroid_VectorImpl_clear_plt(a1 + 336);
    v41 = *(_QWORD*)(a1 + 112);
    *(_DWORD*)(a1 + 80) = 0;
    v119 = v41;
    if ((unsigned int)nandroid_MPEG4Source_parseChunk_plt(a1, &v119) != 0) {
      return 4294957296LL;
    }
    *(_DWORD*)(a1 + 128) = *(_QWORD*)(a1 + 328);
    goto LABEL_53;
  }
  v26 = *(_QWORD*)(a1 + 328);
  v27 = *(_QWORD*)(a1 + 104);
  if ((int)v25 < 1) {
    v31 = *(_QWORD*)(a1 + 328);
  }
  else {
    v28 = *(__int64**)(v24 + 8);
    v29 = v5 & 7;
    v30 = v25 & 0x7FFFFFFF;
    while (1) {
      v31 = v26 + *((unsigned int*)v28 + 2);
      if (v31 > v23) {
        break;
      }
      v32 = *v28;
      v28 += 2;
      --v30;
      v26 = v31;
      v27 += v32;
      if (v30 == 0) {
        goto LABEL_49;
      }
    }
    v119 = v27;
    if ((v29 != 1 || v23 <= v26) && (v29 != 2 || v23 - v26 <= v31 - v23)) {
      goto LABEL_50;
    }
    v27 += *v28;
  }
LABEL_49:
  v119 = v27;
  v26 = v31;
LABEL_50:
  *(_QWORD*)(a1 + 112) = v27;
  *(_QWORD*)(a1 + 120) = -1;
  nandroid_VectorImpl_clear_plt(a1 + 336);
  *(_DWORD*)(a1 + 80) = 0;
  if ((unsigned int)nandroid_MPEG4Source_parseChunk_plt(a1, &v119) != 0) {
    return 4294957296LL;
  }
  *(_DWORD*)(a1 + 128) = v26 * *(int*)(a1 + 64) / 1000000;
LABEL_53:
  v50 = *(_QWORD*)(a1 + 240);
  if (v50 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
    *(_QWORD*)(a1 + 240) = 0;
  }
LABEL_3:
  v7 = (_QWORD*)(a1 + 240);
  v6 = *(_QWORD*)(a1 + 240);
  v8 = *(unsigned int*)(a1 + 128);
  if (v6 != 0) {
    v9 = *(unsigned int*)(a1 + 80);
    if (*(_QWORD*)(a1 + 352) > v9) {
      v112 = *(unsigned int*)(a1 + 128);
      v10 = 0;
      v11 = 0;
      v115 = false;
      v12 = 0;
      v13 = *(long double*)&SdkData_bb4110;
      goto LABEL_6;
    }
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    *v7 = 0;
  }
  v33 = *(unsigned int*)(a1 + 80);
  if (*(_QWORD*)(a1 + 352) <= v33) {
    v35 = *(_QWORD*)(a1 + 120);
    if (v35 <= (signed __int64)*(_QWORD*)(a1 + 112)) {
      return 4294957290LL;
    }
    v119 = *(_QWORD*)(a1 + 120);
    *(_QWORD*)(a1 + 112) = v35;
    nandroid_VectorImpl_clear_plt(a1 + 336);
    *(_DWORD*)(a1 + 80) = 0;
    if ((unsigned int)nandroid_MPEG4Source_parseChunk_plt(a1, &v119) == 0) {
      v33 = *(unsigned int*)(a1 + 80);
      if (*(_QWORD*)(a1 + 352) > v33) {
        goto LABEL_17;
      }
      return 4294957290LL;
    }
    return 4294957296LL;
  }
LABEL_17:
  v34 = v33 == 0;
  if ((_DWORD)v33 != 0 || (*(_BYTE*)(a1 + 320) & 1) == 0) {
    LODWORD(v9) = *(_DWORD*)(a1 + 128);
  }
  else {
    v9 = *(_QWORD*)(a1 + 328);
    v8 = (unsigned int)v9;
    *(_DWORD*)(a1 + 128) = v9;
  }
  v37 = *(__int64**)(a1 + 8);
  v38 = *(_QWORD*)(a1 + 272);
  v39 = *(_QWORD*)(a1 + 344) + 120LL * (unsigned int)v33;
  v12 = *(_QWORD*)v39;
  v10 = *(_QWORD*)(v39 + 8);
  v40 = *(_DWORD*)(v39 + 20);
  *(_DWORD*)(a1 + 128) = *(_DWORD*)(v39 + 16) + v9;
  if ((unsigned int)MatroskaExtractor_4e2540(v37, (__int64**)(a1 + 240)) != 0) {
    return 4294957296LL;
  }
  if (v10 > (*(__int64 (**)(_QWORD))(*(_QWORD*)*v7 + 32LL))(*v7)) {
    (*(void (**)(_QWORD))(*(_QWORD*)*v7 + 16LL))(*v7);
    *v7 = 0;
    return 4294957296LL;
  }
  v51 = (unsigned int)(v40 + v9);
  LODWORD(v9) = *(_DWORD*)(a1 + 80);
  v112 = v8;
  v115 = v34;
  v63 = v51 >= v38;
  v52 = v51 - v38;
  v53 = *(_QWORD*)(a1 + 240);
  if (!v63) {
    v52 = 0;
  }
  v13 = __floatditf(1000000 * v52);
  v11 = 1;
  v6 = v53;
LABEL_6:
  v111 = v13;
  v14 = *(_QWORD*)(a1 + 344) + 120LL * (unsigned int)v9;
  v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 64LL))(v6);
  AMediaFormat_clear_plt(v15);
  if (*(_QWORD*)(v14 + 96) != 0) {
    AMediaFormat_setBuffer_plt(v15, *(_QWORD*)SdkData_e88620[0],
                               *(_QWORD*)(v14 + 48),
                               4LL * *(_QWORD*)(v14 + 56));
    AMediaFormat_setBuffer_plt(v15, *(_QWORD*)SdkData_e88628[0],
                               *(_QWORD*)(v14 + 88),
                               4LL * *(_QWORD*)(v14 + 96));
    AMediaFormat_setInt32_plt(v15, *(_QWORD*)SdkData_e88800[0],
                              *(unsigned int*)(a1 + 144));
    AMediaFormat_setInt32_plt(v15, *(_QWORD*)SdkData_e887e8[0],
                              *(unsigned int*)(a1 + 140));
    AMediaFormat_setBuffer_plt(v15, *(_QWORD*)SdkData_e88630[0], a1 + 148, 16);
    AMediaFormat_setInt32_plt(v15, *(_QWORD*)SdkData_e88808[0],
                              *(unsigned int*)(a1 + 164));
    AMediaFormat_setInt32_plt(v15, *(_QWORD*)SdkData_e88810[0],
                              *(unsigned int*)(a1 + 168));
    v16 = *(_QWORD*)(a1 + 48);
    v118 = 0;
    v119 = 0;
    if ((AMediaFormat_getBuffer_plt(v16, "crypto-iv", &v119, &v118) & 1) != 0) {
      v18 = v118;
      v17 = v119;
    }
    else {
      v17 = v14 + 24;
      v18 = 16;
      v118 = 16;
      v119 = v14 + 24;
    }
    AMediaFormat_setBuffer_plt(v15, *(_QWORD*)SdkData_e88638[0], v17, v18);
  }
  if ((*(_BYTE*)(a1 + 216) & 1) == 0 && (*(_BYTE*)(a1 + 217) & 1) == 0) {
    if (v11 == 0) {
    LABEL_115:
      result = 0;
      *a2 = *v7;
      goto LABEL_116;
    }
    if (v10 >= (*(__int64 (**)(_QWORD))(*(_QWORD*)*v7 + 32LL))(*v7)) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v7 + 16LL))(*v7);
      *v7 = 0;
      return 4294957295LL;
    }
    v46 = *(_QWORD*)(a1 + 56);
    v47 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 240) + 24LL))(
        *(_QWORD*)(a1 + 240));
    v48 = (*(__int64 (**)(__int64, __int64, __int64, unsigned __int64))(
        *(_QWORD*)v46 + 16LL))(v46, v12, v47, v10);
    v49 = **(_QWORD**)(a1 + 240);
    if (v48 < (__int64)v10) {
      (*(void (**)(void*))(v49 + 16))((void*)*(_QWORD**)(a1 + 240));
      *v7 = 0;
      return 4294957289LL;
    }
    (*(void (**)(void*))(v49 + 56))((void*)*(_QWORD**)(a1 + 240));
    v83 = *(_QWORD*)SdkData_e88448[0];
    v84 = __floatsitf(*(_DWORD*)(a1 + 64));
    SdkRoutine_853f10(v111, v84);
    v85 = SdkRoutine_8546b0();
    AMediaFormat_setInt64_plt(v15, v83, v85);
    v86 = *(_QWORD*)SdkData_e88430[0];
    v87 = __floatunsitf(*(_DWORD*)(v14 + 16));
    v110 = SdkRoutine_854fd0(v87, *(long double*)&SdkData_bb3070);
    v88 = __floatsitf(*(_DWORD*)(a1 + 64));
    SdkRoutine_853f10(v110, v88);
    v89 = SdkRoutine_8546b0();
    AMediaFormat_setInt64_plt(v15, v86, v89);
    v90 = *(_QWORD*)SdkData_e88450[0];
    v91 = __floatditf(v112);
    v114 = SdkRoutine_854fd0(v91, *(long double*)&SdkData_bb3070);
    v92 = __floatsitf(*(_DWORD*)(a1 + 64));
    SdkRoutine_853f10(v114, v92);
    v93 = SdkRoutine_8546b0();
    AMediaFormat_setInt64_plt(v15, v90, v93);
    if (*(_BYTE*)(a1 + 216) == 1) {
      v94 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v7 + 24LL))(*v7);
      v95 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v7 + 48LL))(*v7);
      v96 = v115;
      v97 = (unsigned int)nandroid_FindAVCLayerId_plt(v94, v95);
    }
    else {
      v96 = v115;
      if (*(_BYTE*)(a1 + 217) != 1) {
        goto LABEL_112;
      }
      v98 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v7 + 24LL))(*v7);
      v99 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v7 + 48LL))(*v7);
      if (v98 == 0) {
        goto LABEL_112;
      }
      v100 = *(_QWORD*)(a1 + 224);
      if (v99 < v100 + 2) {
        goto LABEL_112;
      }
      v101 = (_BYTE*)(v98 + v100);
      v102 = *v101 & 0x7C;
      if (v102 == 8 || v102 == 4) {
        v103 = v101[1] & 7;
        if (v103 == 0) {
          goto LABEL_112;
        }
        v97 = (unsigned int)(v103 - 1);
      }
      else {
        v97 = 0;
      }
    }
    AMediaFormat_setInt32_plt(v15, *(_QWORD*)SdkData_e88910[0], v97);
  LABEL_112:
    if (v96) {
      AMediaFormat_setInt32_plt(v15, *(_QWORD*)SdkData_e88470[0], 1);
    }
    ++*(_DWORD*)(a1 + 80);
    goto LABEL_115;
  }
  LODWORD(v119) = 0;
  if ((AMediaFormat_getInt32_plt(*(_QWORD*)(a1 + 48),
                                 *(_QWORD*)SdkData_e88478[0], &v119) &
       1) == 0 ||
      v10 >= (int)v119 || (v42 = *(_QWORD*)(a1 + 248)) == 0) {
    v45 = *v7;
    if (*v7 == 0) {
      return 4294957295LL;
    }
  LABEL_40:
    (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
    result = 4294957295LL;
    goto LABEL_116;
  }
  v43 = (*(__int64 (**)(_QWORD, __int64, __int64, unsigned __int64))(
      **(_QWORD**)(a1 + 56) + 16LL))(*(_QWORD*)(a1 + 56), v12, v42, v10);
  v44 = **(_QWORD**)(a1 + 240);
  if (v43 >= (__int64)v10) {
    v104 = a2;
    v54 = (*(__int64 (**)(void*))(v44 + 24))((void*)*(_QWORD**)(a1 + 240));
    if (v10 == 0) {
      v56 = 0;
    LABEL_103:
      (*(void (**)(_QWORD, _QWORD, unsigned __int64))(
          **(_QWORD**)(a1 + 240) + 56LL))(*(_QWORD*)(a1 + 240), 0, v56);
      v71 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 240) + 64LL))(
          *(_QWORD*)(a1 + 240));
      v72 = *(_QWORD*)SdkData_e88448[0];
      v73 = __floatsitf(*(_DWORD*)(a1 + 64));
      SdkRoutine_853f10(v111, v73);
      v74 = SdkRoutine_8546b0();
      AMediaFormat_setInt64_plt(v71, v72, v74);
      v75 = *(_QWORD*)SdkData_e88430[0];
      v76 = __floatunsitf(*(_DWORD*)(v14 + 16));
      v109 = SdkRoutine_854fd0(v76, *(long double*)&SdkData_bb3070);
      v77 = __floatsitf(*(_DWORD*)(a1 + 64));
      SdkRoutine_853f10(v109, v77);
      v78 = SdkRoutine_8546b0();
      AMediaFormat_setInt64_plt(v71, v75, v78);
      v79 = *(_QWORD*)SdkData_e88450[0];
      v80 = __floatditf(v112);
      v113 = SdkRoutine_854fd0(v80, *(long double*)&SdkData_bb3070);
      v81 = __floatsitf(*(_DWORD*)(a1 + 64));
      SdkRoutine_853f10(v113, v81);
      v82 = SdkRoutine_8546b0();
      AMediaFormat_setInt64_plt(v71, v79, v82);
      if (v115) {
        AMediaFormat_setInt32_plt(v71, *(_QWORD*)SdkData_e88470[0], 1);
      }
      result = 0;
      ++*(_DWORD*)(a1 + 80);
      *v104 = *(_QWORD*)(a1 + 240);
      goto LABEL_116;
    }
    v55 = 0;
    v56 = 0;
    v108 = v54;
    v106 = v54 + 2;
    v107 = v54 + 1;
    v105 = v54 + 3;
    while (1) {
      v57 = *(_QWORD*)(a1 + 224);
      if (v57 + v55 < v55 || v57 + v55 > v10) {
        break;
      }
      v59 = 0;
      v60 = (unsigned __int8*)(*(_QWORD*)(a1 + 248) + v55);
      if (v57 > 2) {
        if (v57 == 3) {
          v61 = *v60;
          v59 = (unsigned __int16)nandroid_U16_AT_plt(v60 + 1) |
                (unsigned __int64)(v61 << 16);
        }
        else if (v57 == 4) {
          v59 = (unsigned int)nandroid_U32_AT_plt(v60);
        }
      }
      else if (v57 == 1) {
        v59 = *v60;
      }
      else if (v57 == 2) {
        v59 = (unsigned __int16)nandroid_U16_AT_plt(v60);
      }
      v55 += *(_QWORD*)(a1 + 224);
      v62 = v55 + v59;
      v63 = v55 < v10 && v62 >= v55;
      if (!v63 || v62 > v10) {
        break;
      }
      v65 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v7 + 32LL))(*v7);
      v66 = v56 + 4;
      v67 = v56 >= v65 || v56 > 0xFFFFFFFFFFFFFFFBLL;
      if (v67 || v66 > v65) {
        break;
      }
      v69 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v7 + 32LL))(*v7);
      if (v66 >= v69) {
        break;
      }
      v70 = v59 + v66;
      if (__CFADD__(v59, v66) || v70 > v69) {
        break;
      }
      if (v59 != 0) {
        if (__CFADD__(v59, v66) ||
            v70 > (*(__int64 (**)(_QWORD))(*(_QWORD*)*v7 + 32LL))(*v7)) {
          break;
        }
        *(_BYTE*)(v107 + v56) = 0;
        *(_BYTE*)(v108 + v56) = 0;
        *(_BYTE*)(v106 + v56) = 0;
        *(_BYTE*)(v105 + v56) = 1;
        memcpy_plt(v108 + v66, *(_QWORD*)(a1 + 248) + v55, v59);
        v56 = v59 + v66;
        v55 += v59;
      }
      if (v55 >= v10) {
        goto LABEL_103;
      }
    }
    v45 = *v7;
    goto LABEL_40;
  }
  (*(void (**)(void))(v44 + 16))();
  result = 4294957289LL;
LABEL_116:
  *v7 = 0;
  return result;
}

__int64 (*nandroid_MPEG4Extractor_Sniff(__int64 a1, _DWORD* a2))()
{
  __int64 v2;
  char v3;
  unsigned int v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  bool v16;
  int v17;
  int v19;
  bool v20;
  _BOOL4 v21;
  bool v22;
  bool v23;
  bool v24;
  bool v25;
  bool v26;
  bool v27;
  bool v28;
  bool v29;
  bool v30;
  bool v31;
  bool v32;
  bool v33;
  bool v34;
  _QWORD v38[2];
  unsigned int v39;
  struct {
    int v40;
    char v41;
  } v40_;
  unsigned __int64 v42;
  __int64 v43;

  v2 = 0;
  v3 = 0;
  v38[0] = SdkData_e88720 + 16;
  v38[1] = a1;
  do {
    while (1) {
      v43 = 0;
      if ((*(__int64 (**)(_QWORD*, __int64, __int64*, __int64))(v38[0] + 16LL))(
              v38, v2, &v43, 8) < 8) {
        goto LABEL_83;
      }
      v4 = HIDWORD(v43);
      v5 = v2 + 8;
      v6 = bswap32(v43);
      v42 = v6;
      if ((_DWORD)v43 == 0x1000000) {
        if ((*(__int64 (**)(_QWORD*, __int64, unsigned __int64*, __int64))(
                v38[0] + 16LL))(v38, v2 + 8, &v42, 8) < 8) {
          goto LABEL_83;
        }
        v6 = nandroid_ntoh64_plt(v42);
        v42 = v6;
        if (v6 < 0x10) {
          goto LABEL_83;
        }
        v5 = v2 + 16;
      }
      else if ((unsigned int)v6 < 8) {
        goto LABEL_83;
      }
      v7 = v2 - v5 + v6;
      if (v7 < 0) {
        goto LABEL_83;
      }
      v8 = bswap32(v4);
      v40_.v41 = 0;
      v40_.v40 = 0;
      nandroid_MakeFourCCString_plt(v8, &v40_.v40);
      if (v8 != 1718909296) {
        break;
      }
      if ((unsigned __int64)v7 < 8) {
        goto LABEL_83;
      }
      v9 = (v7 + 0x3FFFFFFF8LL) & 0x3FFFFFFFCLL;
      if (v9 == 0x3FFFFFFF8LL) {
        goto LABEL_14;
      }
      v39 = 0;
      if ((*(__int64 (**)(_QWORD*, __int64, unsigned int*, __int64))(
              v38[0] + 16LL))(v38, v5, &v39, 4) < 4) {
        goto LABEL_83;
      }
      v10 = bswap32(v39);
      if (v10 > 1752589104) {
        if (v10 <= 1836069936) {
          if (v10 > 1769172844) {
            if (v10 != 1769172845) {
              v11 = 1835623985;
              goto LABEL_42;
            }
          }
          else if (v10 != 1752589105) {
            v11 = 1769172786;
            goto LABEL_42;
          }
        }
        else {
          if (v10 > 1853256240) {
            if (v10 == 1853256241 || v10 == 1903435808) {
              goto LABEL_43;
            }
            v11 = 2003658272;
            goto LABEL_42;
          }
          if ((unsigned int)(v10 - 1836069937) >= 2) {
            v11 = 1836279345;
            goto LABEL_42;
          }
        }
      }
      else if (v10 > 1635148592) {
        if (v10 > 1751476578) {
          if (v10 == 1751476579 || v10 == 1751479857) {
            goto LABEL_43;
          }
          v11 = 1751479907;
          goto LABEL_42;
        }
        if (v10 != 1635148593) {
          v11 = 1684108136;
          goto LABEL_42;
        }
      }
      else if (v10 > 1297305173) {
        if (v10 != 1297305174) {
          v11 = 1635135537;
          goto LABEL_42;
        }
      }
      else if ((unsigned int)(v10 - 862401121) >= 2) {
        v11 = 862416948;
      LABEL_42:
        if (v10 == v11) {
          goto LABEL_43;
        }
        if (v9 == 0 ||
            (unsigned __int64)(v12 =
                                   (unsigned int)((unsigned __int64)(v7 +
                                                                     0x3FFFFFFF8LL) >>
                                                  2) +
                                   2) < 2) {
        LABEL_14:
          if ((v3 & 1) == 0) {
            goto LABEL_83;
          }
          goto LABEL_43;
        }
        v13 = v5 + 8;
        v14 = 2 - v12;
        while (1) {
          v39 = 0;
          if ((*(__int64 (**)(_QWORD*, __int64, unsigned int*, __int64))(
                  v38[0] + 16LL))(v38, v13, &v39, 4) < 4) {
            goto LABEL_83;
          }
          v15 = bswap32(v39);
          if (v15 > 1752589104) {
            if (v15 <= 1836069936) {
              if (v15 > 1769172844) {
                if (v15 == 1769172845) {
                  break;
                }
                v19 = 1835623985;
              }
              else {
                if (v15 == 1752589105) {
                  break;
                }
                v19 = 1769172786;
              }
            LABEL_78:
              if (v15 == v19) {
                break;
              }
              goto LABEL_79;
            }
            if (v15 > 1853256240) {
              if (v15 == 1853256241 || v15 == 2003658272) {
                break;
              }
              v19 = 1903435808;
              goto LABEL_78;
            }
            v16 = (unsigned int)(v15 - 1836069937) >= 2;
            v17 = 1836279345;
          }
          else {
            if (v15 > 1635148592) {
              if (v15 <= 1751476578) {
                if (v15 == 1635148593) {
                  break;
                }
                v19 = 1684108136;
              }
              else {
                if (v15 == 1751476579 || v15 == 1751479857) {
                  break;
                }
                v19 = 1751479907;
              }
              goto LABEL_78;
            }
            if (v15 > 1297305173) {
              if (v15 == 1297305174) {
                break;
              }
              v19 = 1635135537;
              goto LABEL_78;
            }
            v16 = (unsigned int)(v15 - 862401121) >= 2;
            v17 = 862416948;
          }
          if (!v16 || v15 == v17) {
            break;
          }
        LABEL_79:
          v13 += 4;
          v16 = __CFADD__(v14++, 1);
          if (v16) {
            goto LABEL_14;
          }
        }
      }
    LABEL_43:
      v3 = 1;
      v2 += v42;
      if (v2 >= 128) {
        goto LABEL_82;
      }
    }
    if (v8 == 1836019574) {
      break;
    }
    v2 += v42;
  } while (v2 < 128);
LABEL_82:
  if ((v3 & 1) == 0) {
  LABEL_83:
    v43 = 0;
    if ((*(__int64 (**)(_QWORD*, __int64, __int64*, __int64))(v38[0] + 16LL))(
            v38, 4, &v43, 8) < 8) {
      return nullptr;
    }
    v20 =
        (_DWORD)v43 == 1887007846 && *(_DWORD*)((char*)&v43 + 3) == 1885811568;
    v21 = !v20;
    v22 = !v21 || v43 == 0x3234706D70797466LL;
    v23 = v22 || (v43 & 0xFFFEFFFFFFFFFFFFLL) == 0x3672673370797466LL;
    v24 = v23 || v43 == 0x3665673370797466LL;
    v25 = v24 || v43 == 0x3667673370797466LL;
    v26 = v25 || v43 == 0x6D6F736970797466LL;
    v27 = v26 || v43 == 0x2056344D70797466LL;
    v28 = v27 || v43 == 0x2041344D70797466LL;
    v29 = v28 || v43 == 0x2076346670797466LL;
    v30 = v29 || v43 == 0x6964646B70797466LL;
    v31 = v30 || v43 == 0x5056344D70797466LL;
    v32 = v31 || v43 == 0x3166696D70797466LL;
    v33 = v32 || v43 == 0x6369656870797466LL;
    v34 = v33 || v43 == 0x3166736D70797466LL;
    if (!v34 && v43 != 0x6376656870797466LL) {
      return nullptr;
    }
  }
  *a2 = 1053609165;
  return nandroid_extractors_mp4_4f4d50;
}

__int64 MPEG4Extractor_4f4430(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88780 + 16;
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

__int64 MPEG4Extractor_4f52f0(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88760 + 16;
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

__int64 MPEG4Extractor_4f5790(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88768 + 16;
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
