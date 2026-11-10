#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64** ATSParser_53b5e0_alt1(__int64** result, __int64*, __int64*,
                                unsigned __int64) __asm__("ATSParser_53b5e0");
__int64 ATSParser_53b960_alt1(__int64, __int64*, __int64*,
                              __int64) __asm__("ATSParser_53b960");
__int64 ATSParser_53b960_alt2(_QWORD, _QWORD, _QWORD,
                              _QWORD) __asm__("ATSParser_53b960");
__int64 ATSParser_53c140_alt1(_QWORD, _QWORD) __asm__("ATSParser_53c140");
__int64 ATSParser_53c240_alt1(_QWORD, _QWORD) __asm__("ATSParser_53c240");
__int64 ATSParser_53c460_alt1(_QWORD, _QWORD, _QWORD,
                              _QWORD) __asm__("ATSParser_53c460");
__int64 ATSParser_53c680_alt1(void) __asm__("ATSParser_53c680");
__int64 ATSParser_53c7b0_alt1(_QWORD, _QWORD,
                              _QWORD) __asm__("ATSParser_53c7b0");
__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 SdkRoutine_85e050(unsigned __int64);
__int64 SdkRoutine_870bc0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_870bd0(_QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 memcmp_plt(_QWORD, _QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_ABitReader_getBits_plt(_QWORD, _QWORD);
__int64 nandroid_ABitReader_skipBits_plt(_QWORD, _QWORD);
__int64 nandroid_ATSParser_Program_findCADescriptor_plt(_QWORD, _QWORD, _QWORD,
                                                        _QWORD);
__int64 nandroid_ATSParser_Program_switchPIDs_plt(_QWORD, _QWORD);
__int64 nandroid_ATSParser_Stream_Stream_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nandroid_ATSParser_Stream_ensureBufferCapacity_plt(_QWORD, _QWORD);
__int64 nandroid_ATSParser_Stream_signalNewSampleAesKey_plt(_QWORD, _QWORD);
__int64 nandroid_AnotherPacketSource_AnotherPacketSource_plt(_QWORD, _QWORD);
__int64 nandroid_ElementaryStreamQueue_ElementaryStreamQueue_plt(_QWORD, _QWORD,
                                                                 _QWORD);
__int64 nandroid_ElementaryStreamQueue_signalNewSampleAesKey_plt(_QWORD,
                                                                 _QWORD);
__int64 nandroid_MetaDataBase_setCString_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_MetaDataBase_setData_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                          _QWORD);
__int64 nandroid_MetaDataBase_setInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_MetaData_MetaData_plt_86da40(void);
__int64 nandroid_RefBase_Destroy_RefBase_plt_86def0(_QWORD, _QWORD);
__int64 nandroid_RefBase_Destroy_RefBase_plt_86def0_alt1(_QWORD) __asm__(
    "nandroid_RefBase_Destroy_RefBase_plt_86def0");
__int64 nandroid_RefBase_RefBase_plt(_QWORD);
__int64 nandroid_RefBase_decStrong_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_incStrong_plt(_QWORD, _QWORD);
__int64 nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(_QWORD);
__int64 nandroid_SortedVectorImpl_add_plt(_QWORD, _QWORD);
__int64 nandroid_SortedVectorImpl_indexOf_plt(_QWORD, _QWORD);
__int64 nandroid_SortedVectorImpl_remove_plt(_QWORD, _QWORD);
__int64 nandroid_VectorImpl_Destroy_VectorImpl_plt(_QWORD);
__int64 nandroid_VectorImpl_VectorImpl_plt_86e620(_QWORD, _QWORD, _QWORD);
__int64 nandroid_VectorImpl_editItemLocation_plt(_QWORD, _QWORD);
__int64 nandroid_VectorImpl_finish_vector_plt(_QWORD);
__int64 nandroid_VectorImpl_push_plt_86ea50(_QWORD, _QWORD);
__int64 nandroid_extractors_mp4_4f4ab0(__int64 result, __int64);
__int64 nandroid_extractors_mp4_4f61b0(unsigned __int64*, __int64,
                                       unsigned __int64);
__int64 nandroid_sp_report_race_plt(_QWORD);
__int64 nn_fs_dc120(_QWORD, _QWORD);
__int64 nn_movie_detail_AllocateMemory(_QWORD);
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_os_GetTlsValue_plt(_QWORD);
extern __int64 SdkData_e88330;
extern __int64 SdkData_e889d0;
extern __int64 SdkData_e88b18;
extern __int64 SdkData_e88b20;
extern __int64 SdkData_e88b28;
extern __int64 SdkData_e88b48;
extern __int64 SdkData_e88b50;
extern __int64 SdkData_e88b60;
extern __int64 SdkData_e88b68;
extern __int64 SdkData_e88b70;
extern __int64 SdkData_e88b80;
extern __int64 SdkData_e88b88;
extern __int64 SdkData_e88ba0;
extern void (*SdkData_e88338[493])();
extern void (*SdkData_e88b38[237])();
extern void (*SdkData_e88b40[236])();
void __attribute__((noreturn)) nn_fs_10de70();
void
    __attribute__((noreturn)) nn_fs_10de70_alt1(_QWORD) __asm__("nn_fs_10de70");
void __attribute__((noreturn)) nn_fs_dc4d0(_QWORD, _QWORD);
__int64 nandroid_ATSParser_Program_parseProgramMap(void* this_, void* a2);
__int64 nandroid_ATSParser_Stream_Stream(__int64 a1, __int64 a2, int a3,
                                         __int64 a4);
__int64 ATSParser_5374e0(_QWORD* a1);
__int64 ATSParser_537600(_QWORD* a1);
__int64 ATSParser_539e50(__int64 a1, int* a2);
__int64 ATSParser_53a920(_QWORD* a1);
__int64 ATSParser_53a990(_QWORD* a1);
__int64 ATSParser_53aec0(_QWORD* a1);
__int64 ATSParser_53b2d0(_QWORD* a1);
__int64 ATSParser_53b480(__int64* a1, char* a2, char* a3, unsigned __int64 a4);
__int64* ATSParser_53b5e0(__int64* result, __int64 a2, __int64 a3,
                          unsigned __int64 a4);
_QWORD* ATSParser_53b960(__int64 a1, __int64* a2, __int64* a3, _QWORD* a4);
__int64* std___1___tree___assign_multi(__int64* result, _QWORD* a2, _QWORD* a3);
unsigned __int64* ATSParser_53c140(unsigned __int64* result,
                                   unsigned __int64* a2);
__int64 ATSParser_53c240(__int64** a1, __int64 a2);
unsigned __int64* std___1___tree___emplace_hint_multi(__int64** a1, __int64 a2,
                                                      unsigned __int64* a3);
_QWORD* ATSParser_53c460(_QWORD* a1, __int64 a2, _QWORD* a3,
                         unsigned __int8* a4);
unsigned __int64* ATSParser_53c680(unsigned __int64* a1, __int64 a2,
                                   unsigned __int64 a3);
_QWORD* ATSParser_53c7b0(_QWORD* a1, __int64 a2, unsigned __int64 a3);
__int64 ATSParser_53c860(_QWORD* a1);
__int64 ATSParser_53c900(_QWORD* a1);
__int64 ATSParser_53ca20(__int64 result);
__int64 ATSParser_53cb00(_QWORD* a1);
__int64 ATSParser_53cbe0(_QWORD* a1);
__int64 ATSParser_53ccb0(_QWORD* a1);
__int64 ATSParser_53d0c0(_QWORD* a1);
__int64 ATSParser_53d4a0(_QWORD* a1);
void nandroid_Vector_do_destroy(__int64 a1, _QWORD* a2, __int64 a3);
_QWORD* nandroid_Vector_do_copy(_QWORD* result, __int64 a2, __int64* a3,
                                __int64 a4);
_QWORD* nandroid_Vector_do_splat(_QWORD* result, __int64 a2, __int64* a3,
                                 __int64 a4);
__int64 nandroid_Vector_do_move_backward(__int64 a1, __int64 a2, __int64* a3,
                                         __int64 a4);
__int64 ATSParser_53db80(__int64 result, __int64* a2, __int64 a3);
__int64 ATSParser_53dd40(_QWORD* a1);
__int64 ATSParser_53ddd0(_QWORD* a1);

__int64 nandroid_ATSParser_Program_parseProgramMap(void* this_, void* a2)
{
  int v4;
  int v5;
  int v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  int v11;
  char v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
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
  __int64 v31;
  int v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  int v37;
  _DWORD* v38;
  __int64 v39;
  __int64 v40;
  char v41;
  void(__attribute__((noreturn)) * v42)();
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  bool v49;
  _QWORD** v50;
  __int64 v51;
  bool v52;
  int v53;
  char v54;
  __int64 v55;
  __int64* v56;
  __int64* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64* v61;
  __int64* v62;
  __int64** v63;
  __int64* v64;
  __int64 v65;
  unsigned int v66;
  unsigned int v67;
  bool v68;
  char v69;
  struct {
    __int64* v70;
    __int64 v71;
  } v70_;
  char* v72;
  struct {
    unsigned __int64 v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
  } v73_;
  __int64 v77;
  struct {
    unsigned __int64 v78;
    unsigned __int64 v79;
    __int64 v80;
    __int64 v81;
    unsigned __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
  } v78_;
  struct {
    _QWORD v86[2];
    unsigned __int64 v87;
    __int64 v88;
    __int64 v89;
  } v86_;
  struct {
    unsigned __int64 v90;
    __int64 v91;
    __int64 v92;
    __int64 v93;
  } v90_;

  if ((unsigned int)nandroid_ABitReader_getBits_plt(a2, 8) != 2 ||
      (unsigned int)nandroid_ABitReader_getBits_plt(a2, 1) != 1) {
    return 4294966289LL;
  }
  nandroid_ABitReader_skipBits_plt(a2, 1);
  nandroid_ABitReader_getBits_plt(a2, 2);
  v4 = nandroid_ABitReader_getBits_plt(a2, 12);
  nandroid_ABitReader_getBits_plt(a2, 16);
  nandroid_ABitReader_getBits_plt(a2, 2);
  v5 = nandroid_ABitReader_getBits_plt(a2, 5);
  v6 = *((_DWORD*)this_ + 8);
  v68 = v5 != v6;
  if (v5 != v6) {
    *((_DWORD*)this_ + 8) = v5;
  }
  nandroid_ABitReader_getBits_plt(a2, 1);
  nandroid_ABitReader_getBits_plt(a2, 8);
  nandroid_ABitReader_getBits_plt(a2, 8);
  nandroid_ABitReader_getBits_plt(a2, 3);
  v67 = nandroid_ABitReader_getBits_plt(a2, 13);
  nandroid_ABitReader_getBits_plt(a2, 4);
  v7 = nandroid_ABitReader_getBits_plt(a2, 12);
  v8 = v7;
  v90_.v90 = 0xFFFFFFFF00000000LL;
  v90_.v91 = 0;
  v90_.v92 = 0;
  v90_.v93 = 0;
  v69 = nandroid_ATSParser_Program_findCADescriptor_plt(
      v7, a2, (unsigned int)v7, &v90_.v90);
  v86_.v88 = 0;
  v86_.v89 = 0;
  v86_.v86[1] = 0;
  v86_.v87 = 0;
  v86_.v86[0] = 0;
  nandroid_VectorImpl_VectorImpl_plt_86e620(v86_.v86, 72, 0);
  v86_.v86[0] = SdkData_e88b28 + 16;
  v9 = v4 - v8 - 13;
  if (v9 >= 5) {
    while (1) {
      v78_.v78 = 0;
      v78_.v79 = 0xFFFFFFFF00000000LL;
      v77 = 0;
      v78_.v80 = 0;
      v78_.v81 = 0;
      v78_.v82 = 0;
      v78_.v83 = 0;
      v78_.v84 = 0;
      v78_.v85 = 0;
      LODWORD(v77) = nandroid_ABitReader_getBits_plt(a2, 8);
      nandroid_ABitReader_getBits_plt(a2, 3);
      LODWORD(v78_.v78) = nandroid_ABitReader_getBits_plt(a2, 13);
      nandroid_ABitReader_getBits_plt(a2, 4);
      v10 = nandroid_ABitReader_getBits_plt(a2, 12);
      v11 = v10;
      v73_.v73 = 0xFFFFFFFF00000000LL;
      v73_.v74 = 0;
      v73_.v75 = 0;
      v73_.v76 = 0;
      v12 = nandroid_ATSParser_Program_findCADescriptor_plt(
          v10, a2, (unsigned int)v10, &v73_.v73);
      if ((v69 & 1) != 0) {
        break;
      }
      if ((v12 & 1) != 0) {
        v13 = v73_.v73;
        v14 = v73_.v74;
        v15 = v73_.v75;
        goto LABEL_12;
      }
    LABEL_34:
      nandroid_VectorImpl_push_plt_86ea50(v86_.v86, &v77);
      if (v73_.v74 != 0) {
        v73_.v75 = v73_.v74;
        SdkRoutine_857220(v73_.v74, v73_.v76 - v73_.v74);
      }
      v29 = v78_.v83;
      if (v78_.v83 != 0) {
        v30 = v78_.v84;
        v31 = v78_.v83;
        if (v78_.v83 != v78_.v84) {
          do {
            if ((*(_BYTE*)(v30 - 32) & 1) != 0) {
              SdkRoutine_857220(*(_QWORD*)(v30 - 16),
                                *(_QWORD*)(v30 - 32) & 0xFFFFFFFFFFFFFFFELL);
            }
            nandroid_extractors_mp4_4f4ab0(v30 - 64, *(_QWORD*)(v30 - 56));
            v30 -= 80;
          } while (v30 != v29);
          v31 = v78_.v83;
        }
        v78_.v84 = v29;
        SdkRoutine_857220(v31, v78_.v85 - v31);
      }
      if (v78_.v80 != 0) {
        v78_.v81 = v78_.v80;
        SdkRoutine_857220(v78_.v80, v78_.v82 - v78_.v80);
      }
      v9 = v9 - v11 - 5;
      if (v9 <= 4) {
        goto LABEL_47;
      }
    }
    v13 = v90_.v90;
    v14 = v90_.v91;
    v15 = v90_.v92;
  LABEL_12:
    v16 = v15 - v14;
    v78_.v79 = v13;
    v17 = v78_.v82;
    v18 = v78_.v80;
    if (v15 - v14 <= v78_.v82 - v78_.v80) {
      v24 = v78_.v81;
      v25 = v78_.v81 - v78_.v80;
      if (v16 <= v78_.v81 - v78_.v80) {
        if (v15 != v14) {
          v28 = v78_.v80;
          memmove_plt(v78_.v80, v14, v15 - v14);
          v18 = v28;
        }
        v23 = v18 + v16;
      }
      else {
        if (v78_.v81 != v78_.v80) {
          memmove_plt(v78_.v80, v14, v78_.v81 - v78_.v80);
          v24 = v78_.v81;
        }
        v26 = v14 + v25;
        v27 = v15 - (v14 + v25);
        if (v27 != 0) {
          memmove_plt(v24, v26, v27);
        }
        v23 = v24 + v27;
      }
    }
    else {
      if (v78_.v80 != 0) {
        v78_.v81 = v78_.v80;
        SdkRoutine_857220(v78_.v80, v78_.v82 - v78_.v80);
        v17 = 0;
        v78_.v81 = 0;
        v78_.v82 = 0;
        v78_.v80 = 0;
      }
      if ((v16 & 0x8000000000000000LL) != 0) {
        nn_fs_10de70();
      }
      v19 = 2 * v17;
      if (2 * v17 <= v16) {
        v19 = v15 - v14;
      }
      if (v17 >= 0x3FFFFFFFFFFFFFFFLL) {
        v20 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v20 = v19;
      }
      v21 = SdkRoutine_85e050(v20);
      v22 = v21;
      v78_.v80 = v21;
      v78_.v81 = v21;
      v78_.v82 = v21 + v20;
      if (v15 != v14) {
        memcpy_plt(v21, v14, v15 - v14);
      }
      v23 = v22 + v16;
    }
    v78_.v81 = v23;
    goto LABEL_34;
  }
LABEL_47:
  v33 = nandroid_ABitReader_getBits_plt(a2, 32);
  if (v33 != *((_DWORD*)this_ + 9)) {
    *((_DWORD*)this_ + 9) = v33;
    v68 = true;
  }
  if (v86_.v87 != 0) {
    v34 = 0;
    while (1) {
      v36 = nandroid_VectorImpl_editItemLocation_plt(v86_.v86, v34);
      v37 = *(_DWORD*)(v36 + 8);
      v38 = (_DWORD*)v36;
      v78_.v78 = 0;
      LODWORD(v77) = v37;
      v39 = nandroid_SortedVectorImpl_indexOf_plt((char*)this_ + 40, &v77);
      if (v78_.v78 != 0) {
        nandroid_RefBase_decStrong_plt(v78_.v78, &v78_.v78);
      }
      if ((v39 & 0x8000000000000000LL) == 0 &&
          *(_DWORD*)(*(_QWORD*)(nandroid_VectorImpl_editItemLocation_plt(
                                    (char*)this_ + 40, v39) +
                                8) +
                     28LL) != *v38) {
        break;
      }
      v35 = v86_.v87;
      if (++v34 >= v86_.v87) {
        goto LABEL_58;
      }
    }
    if ((nandroid_ATSParser_Program_switchPIDs_plt(this_, v86_.v86) & 1) == 0) {
      v66 = -1007;
      goto LABEL_113;
    }
    v35 = v86_.v87;
  LABEL_58:
    if (v35 != 0) {
      v40 = 0;
      v41 = 0;
      v42 = SdkData_e88338[0];
      while (1) {
        v43 = nandroid_VectorImpl_editItemLocation_plt(v86_.v86, v40);
        v44 = *(_DWORD*)(v43 + 8);
        v45 = v43;
        v78_.v78 = 0;
        LODWORD(v77) = v44;
        v46 = nandroid_SortedVectorImpl_indexOf_plt((char*)this_ + 40, &v77);
        if (v78_.v78 != 0) {
          nandroid_RefBase_decStrong_plt(v78_.v78, &v78_.v78);
        }
        if (v46 < 0) {
          v73_.v73 = 0;
          if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
            *(_DWORD*)v42 = 0;
            *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v42) = 1;
            __cxa_guard_release_plt(SdkData_e88330);
          }
          v50 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v42);
          v51 = SdkRoutine_4c3860(16, 160, v50);
          nandroid_ATSParser_Stream_Stream_plt(v51, this_, v67, v45);
          v73_.v73 = v51;
          nandroid_RefBase_incStrong_plt(v51, &v73_.v73);
          if (*((_QWORD*)this_ + 13) != 0) {
            nandroid_ATSParser_Stream_signalNewSampleAesKey_plt(
                v73_.v73, (char*)this_ + 104);
          }
          v52 = (signed __int32)*(_DWORD*)(v45 + 20) <= -1;
          v53 = *(_DWORD*)(v45 + 8);
          v78_.v78 = v73_.v73;
          v54 = !v52;
          LODWORD(v77) = v53;
          if (v73_.v73 != 0) {
            nandroid_RefBase_incStrong_plt(v73_.v73, &v78_.v78);
          }
          nandroid_SortedVectorImpl_add_plt((char*)this_ + 40, &v77);
          if (v78_.v78 != 0) {
            nandroid_RefBase_decStrong_plt(v78_.v78, &v78_.v78);
          }
          if (v73_.v73 != 0) {
            nandroid_RefBase_decStrong_plt(v73_.v73, &v73_.v73);
          }
          v41 |= v54;
          goto LABEL_61;
        }
        v47 = *(_QWORD*)(nandroid_VectorImpl_editItemLocation_plt(
                             (char*)this_ + 40, v46) +
                         8);
        v48 = *(_DWORD*)(v47 + 28);
        if (v48 > 128) {
          break;
        }
        if ((unsigned int)(v48 - 3) < 2) {
          goto LABEL_89;
        }
        if (v48 != 6) {
          if (v48 != 15) {
            goto LABEL_61;
          }
          goto LABEL_89;
        }
        if (v68 && *(_DWORD*)(v47 + 32) == 21) {
        LABEL_90:
          v55 =
              nandroid_VectorImpl_editItemLocation_plt((char*)this_ + 40, v46);
          v57 = *(__int64**)(v45 + 48);
          v56 = *(__int64**)(v45 + 56);
          v58 = *(_QWORD*)(v55 + 8);
          v59 = (char*)v56 - (char*)v57;
          v70_.v70 = nullptr;
          v70_.v71 = 0;
          v72 = nullptr;
          if (v56 == v57) {
            v61 = nullptr;
            v62 = nullptr;
            v63 = (__int64**)(v58 + 136);
            if ((__int64**)(v58 + 136) != &v70_.v70) {
              goto LABEL_93;
            }
          }
          else {
            if (0xCCCCCCCCCCCCCCCDLL * (v59 >> 4) >= 0x333333333333334LL) {
              nn_fs_10de70();
            }
            v70_.v70 = (__int64*)SdkRoutine_85e050((char*)v56 - (char*)v57);
            v70_.v71 = (__int64)v70_.v70;
            v72 = (char*)v70_.v70 + v59;
            v60 = ATSParser_53b960_alt1((__int64)&v72, v57, v56,
                                        (__int64)v70_.v70);
            v61 = v70_.v70;
            v62 = (__int64*)v60;
            v70_.v71 = v60;
            v63 = (__int64**)(v58 + 136);
            if ((__int64**)(v58 + 136) != &v70_.v70) {
            LABEL_93:
              ATSParser_53b5e0_alt1(v63, v61, v62,
                                    0xCCCCCCCCCCCCCCCDLL *
                                        (((char*)v62 - (char*)v61) >> 4));
              v61 = v70_.v70;
            }
          }
          if (v61 != nullptr) {
            v64 = (__int64*)v70_.v71;
            v65 = (__int64)v61;
            if (v61 != (__int64*)v70_.v71) {
              do {
                if ((*(_BYTE*)(v64 - 4) & 1) != 0) {
                  SdkRoutine_857220(*(v64 - 2),
                                    *(v64 - 4) & 0xFFFFFFFFFFFFFFFELL);
                }
                nandroid_extractors_mp4_4f4ab0((__int64)(v64 - 8), *(v64 - 7));
                v64 -= 10;
              } while (v64 != v61);
              v65 = (__int64)v70_.v70;
            }
            v70_.v71 = (__int64)v61;
            SdkRoutine_857220(v65, &v72[-v65]);
          }
        }
      LABEL_61:
        if (++v40 >= v86_.v87) {
          if ((v41 & 1) != 0) {
            v66 = -2004;
          }
          else {
            v66 = 0;
          }
          goto LABEL_113;
        }
      }
      v49 = (unsigned int)(v48 - 129) > 6 || ((1 << (v48 + 127)) & 0x45) == 0;
      if (v49 && v48 != 193 && v48 != 207) {
        goto LABEL_61;
      }
    LABEL_89:
      if (v68) {
        goto LABEL_90;
      }
      goto LABEL_61;
    }
  }
  v66 = 0;
LABEL_113:
  v86_.v86[0] = SdkData_e88b28 + 16;
  nandroid_VectorImpl_finish_vector_plt(v86_.v86);
  nandroid_VectorImpl_Destroy_VectorImpl_plt(v86_.v86);
  if (v90_.v91 != 0) {
    v90_.v92 = v90_.v91;
    SdkRoutine_857220(v90_.v91, v90_.v93 - v90_.v91);
  }
  return v66;
}

__int64 nandroid_ATSParser_Stream_Stream(__int64 a1, __int64 a2, int a3,
                                         __int64 a4)
{
  __int64 v8;
  _QWORD** v9;
  __int64 v10;
  atomic_uchar* v11;
  void(__attribute__((noreturn)) * v12)();
  _QWORD** v13;
  __int64 v14;
  int v15;
  _QWORD** v16;
  __int64 result;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  unsigned int v23;
  _BOOL4 v24;
  unsigned int v25;
  unsigned int v26;
  _QWORD** v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  unsigned int v31;
  _QWORD** v32;
  __int64 v33;
  int v34;
  void(__attribute__((noreturn)) * v35)();
  _QWORD** v36;
  _QWORD* v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;

  nandroid_RefBase_RefBase_plt(a1);
  v8 = SdkData_e88b60;
  *(_QWORD*)(a1 + 16) = a2;
  *(_QWORD*)a1 = v8 + 16;
  *(_DWORD*)(a1 + 24) = *(_DWORD*)(a4 + 8);
  *(_DWORD*)(a1 + 28) = *(_DWORD*)a4;
  LODWORD(v8) = *(_DWORD*)(a4 + 4);
  *(_QWORD*)(a1 + 56) = 0;
  v9 = (_QWORD**)(a1 + 56);
  *(_QWORD*)(a1 + 48) = 0;
  *(_WORD*)(a1 + 64) = 0;
  *(_DWORD*)(a1 + 32) = v8;
  *(_DWORD*)(a1 + 36) = a3;
  *(_DWORD*)(a1 + 40) = -1;
  v10 = SdkData_e889d0 + 16;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = v10;
  v11 = (atomic_uchar*)SdkData_e88330;
  LOBYTE(v10) = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                     memory_order_acquire);
  v12 = SdkData_e88338[0];
  if ((v10 & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v12 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v12) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v13 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v12);
  v14 = SdkRoutine_4c3860(16, 24, v13);
  *(_QWORD*)(a1 + 88) = v14;
  *(_QWORD*)(v14 + 8) = v14;
  *(_QWORD*)(*(_QWORD*)(a1 + 88) + 16LL) = *(_QWORD*)(a1 + 88);
  *(_QWORD*)(a1 + 96) = 0;
  v15 = *(_DWORD*)(a4 + 20);
  *(_QWORD*)(a1 + 112) = 0;
  *(_BYTE*)(a1 + 104) = v15 >= 0;
  *(_QWORD*)(a1 + 120) = SdkData_e88b68 + 16;
  if ((atomic_load_explicit(v11, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v12 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v12) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v16 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v12);
  result = SdkRoutine_4c3860(16, 32, v16);
  *(_QWORD*)(a1 + 128) = result;
  *(_QWORD*)(result + 16) = result;
  *(_QWORD*)(*(_QWORD*)(a1 + 128) + 24LL) = *(_QWORD*)(a1 + 128);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  v18 = *(__int64**)(a4 + 48);
  v19 = *(__int64**)(a4 + 56);
  v20 = (char*)v19 - (char*)v18;
  if (v19 != v18) {
    if (0xCCCCCCCCCCCCCCCDLL * (v20 >> 4) >= 0x333333333333334LL) {
      nn_fs_10de70();
    }
    v21 = SdkRoutine_85e050((char*)v19 - (char*)v18);
    *(_QWORD*)(a1 + 136) = v21;
    *(_QWORD*)(a1 + 144) = v21;
    *(_QWORD*)(a1 + 152) = v21 + v20;
    result = ATSParser_53b960_alt1(a1 + 152, v18, v19, v21);
    *(_QWORD*)(a1 + 144) = result;
  }
  v22 = *(_DWORD*)(a1 + 28);
  v23 = ((unsigned int)(v22 - 193) < 0x1B) & (0x4004001u >> (v22 + 63));
  v24 = true;
  *(_BYTE*)(a1 + 105) = v23;
  if (v22 <= 128) {
    if ((unsigned int)v22 > 0x1B) {
      goto LABEL_28;
    }
    if (((1 << v22) & 0x8010006) == 0) {
      if (((1 << v22) & 0x8018) == 0) {
        if (v22 != 6) {
          goto LABEL_28;
        }
        v24 = *(_DWORD*)(a1 + 32) == 21;
      }
      goto LABEL_21;
    }
  LABEL_19:
    if ((*(_BYTE*)(a1 + 104) & 1) != 0) {
      goto LABEL_23;
    }
    goto LABEL_28;
  }
  if (v22 > 192) {
    if (v22 != 193 && v22 != 207) {
      if (v22 != 219) {
        goto LABEL_28;
      }
      goto LABEL_19;
    }
  }
  else if ((unsigned int)(v22 - 129) > 6 || ((1 << (v22 + 127)) & 0x45) == 0) {
    goto LABEL_28;
  }
LABEL_21:
  if (v24 && (*(_BYTE*)(a1 + 104) & 1) != 0) {
  LABEL_23:
    v25 = 2;
    v26 = 2;
    if (v22 <= 20) {
      goto LABEL_24;
    }
  LABEL_32:
    if (v22 > 134) {
      if (v22 > 206) {
        if (v22 == 207) {
          goto LABEL_57;
        }
        if (v22 != 219) {
          return result;
        }
      LABEL_50:
        v26 = 1;
        v25 |= (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16LL) + 16LL) &
                2) != 0;
        goto LABEL_57;
      }
      if (v22 == 135) {
        v26 = 4;
        goto LABEL_57;
      }
      if (v22 != 193) {
        return result;
      }
    }
    else {
      if (v22 <= 128) {
        if (v22 == 21) {
          v26 = 10;
          goto LABEL_57;
        }
        if (v22 != 27) {
          return result;
        }
        goto LABEL_50;
      }
      if (v22 != 129 && v22 != 131) {
        return result;
      }
    }
    v26 = 3;
    goto LABEL_57;
  }
LABEL_28:
  if (v23 != 0) {
    v25 = 4;
  }
  else {
    v25 = 0;
  }
  v26 = 2;
  if (v22 > 20) {
    goto LABEL_32;
  }
LABEL_24:
  if (v22 > 5) {
    switch (v22) {
    case 6:
      if (*(_DWORD*)(a1 + 32) == 21) {
        v26 = 5;
      }
      else {
        v26 = 0;
      }
      break;
    case 15:
      break;
    case 16:
      v26 = 8;
      break;
    default:
      return result;
    }
  }
  else if ((unsigned int)(v22 - 1) < 2) {
    v26 = 7;
  }
  else {
    if ((unsigned int)(v22 - 3) >= 2) {
      return result;
    }
    v26 = 6;
  }
LABEL_57:
  if ((atomic_load_explicit(v11, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v12 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v12) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v27 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v12);
  v28 = SdkRoutine_4c3860(16, 120, v27);
  nandroid_ElementaryStreamQueue_ElementaryStreamQueue_plt(v28, v26, v25);
  v29 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 96) = v28;
  if (v29 != 0) {
    nandroid_ElementaryStreamQueue_signalNewSampleAesKey_plt(v28, a1 + 112);
  }
  result = nandroid_ATSParser_Stream_ensureBufferCapacity_plt(a1, 196608);
  if (*(_BYTE*)(a1 + 104) == 1) {
    v30 = *(_DWORD*)(a1 + 28);
    if (v30 > 0x1B) {
      goto LABEL_69;
    }
    if (((1 << v30) & 0x801801E) == 0) {
      if (v30 == 6) {
        if (*(_DWORD*)(a1 + 32) != 21) {
          return result;
        }
      }
      else {
      LABEL_69:
        if (v30 - 129 > 6 || ((1 << (v30 + 127)) & 0x45) == 0) {
          v31 = v30 - 193;
          if (v31 > 0x1A || ((1 << v31) & 0x4004001) == 0) {
            return result;
          }
        }
      }
    }
    v40 = 0;
    if ((atomic_load_explicit(v11, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v12 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v12) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v32 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v12);
    v33 = SdkRoutine_4c3860(16, 32, v32);
    nandroid_MetaData_MetaData_plt_86da40();
    v40 = v33;
    nandroid_RefBase_incStrong_plt(v33 + 16, &v40);
    v34 = *(_DWORD*)(a1 + 28);
    if (v34 <= 128) {
      if ((unsigned int)(v34 - 3) >= 2) {
        if (v34 == 6) {
          if (*(_DWORD*)(a1 + 32) == 21) {
            v35 = SdkData_e88b38[0];
          }
          else {
            v35 = SdkData_e88b40[0];
          }
          goto LABEL_81;
        }
        if (v34 != 15) {
          goto LABEL_92;
        }
      }
    }
    else if (((unsigned int)(v34 - 129) > 6 ||
              ((1 << (v34 + 127)) & 0x45) == 0) &&
             v34 != 193 && v34 != 207) {
    LABEL_92:
      v35 = SdkData_e88b40[0];
    LABEL_81:
      nandroid_MetaDataBase_setCString_plt(v40, 1835625829, *(_QWORD*)v35);
      nandroid_MetaDataBase_setInt32_plt(v40, 1667328356,
                                         *(unsigned int*)(a4 + 20));
      nandroid_MetaDataBase_setData_plt(v40, 1667327075, 0, *(_QWORD*)(a4 + 24),
                                        *(_QWORD*)(a4 + 32) -
                                            *(_QWORD*)(a4 + 24));
      if ((atomic_load_explicit(v11, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
        *(_DWORD*)v12 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v12) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
      }
      v36 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v12);
      v37 = (_QWORD*)SdkRoutine_4c3860(16, 152, v36);
      nandroid_AnotherPacketSource_AnotherPacketSource_plt(v37, &v40);
      v38 = *v9;
      result = nandroid_RefBase_incStrong_plt(
          (char*)v37 + *(_QWORD*)(*v37 - 24LL), v9);
      if (v38 != nullptr) {
        result = nandroid_RefBase_decStrong_plt(
            (char*)v38 + *(_QWORD*)(*v38 - 24LL), v9);
      }
      if (v38 != *v9) {
        result = nandroid_sp_report_race_plt(result);
      }
      v39 = v40;
      *v9 = v37;
      if (v39 != 0) {
        return nandroid_RefBase_decStrong_plt(v39 + 16, &v40);
      }
      return result;
    }
    v35 = SdkData_e88b38[0];
    goto LABEL_81;
  }
  return result;
}

__int64 ATSParser_5374e0(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v9)();
  _QWORD* v10;
  __int64 v11;
  __int64 result;
  _QWORD* v13;
  __int64 v14;
  int v15;

  v3 = a1 + 13;
  v2 = a1[13];
  if (v2 != 0) {
    nandroid_RefBase_decStrong_plt(v2, v3);
  }
  v4 = a1[12];
  if (v4 != 0) {
    nandroid_RefBase_decStrong_plt(v4 + 16, a1 + 12);
  }
  v5 = a1[9];
  if (v5 != 0) {
    v6 = a1[11];
    a1[10] = v5;
    SdkRoutine_857220(v5, v6 - v5);
  }
  a1[6] = SdkData_e88b70 + 16;
  ATSParser_53ca20((__int64)(a1 + 6));
  v7 = a1[7];
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v9 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v15 = __cxa_guard_acquire_plt(SdkData_e88330);
    v9 = SdkData_e88338[0];
    if (v15 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v9) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v9 = SdkData_e88338[0];
    }
  }
  v10 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v9);
  nn_movie_detail_FreeMemory(v7, v10);
  v11 = a1[5];
  if (v11 != 0) {
    nandroid_RefBase_decStrong_plt(v11, a1 + 5);
  }
  ATSParser_53c900(a1 + 3);
  v14 = a1[2];
  v13 = a1 + 2;
  result = v14;
  if (v14 != 0) {
    return nandroid_RefBase_decStrong_plt(result, v13);
  }
  return result;
}

__int64 ATSParser_537600(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  atomic_uchar* v4;
  void(__attribute__((noreturn)) * v5)();
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;

  *a1 = SdkData_e88b68 + 16;
  v2 = a1[1];
  v3 = *(_QWORD*)(v2 + 24);
  v4 = (atomic_uchar*)SdkData_e88330;
  v5 = SdkData_e88338[0];
  if (v3 != v2) {
    do {
      v6 = *(_QWORD*)(v3 + 24);
      if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(v4) != 0) {
        *(_DWORD*)v5 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
        __cxa_guard_release_plt(v4);
      }
      v7 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
      nn_movie_detail_FreeMemory(v3, v7);
      v2 = a1[1];
      v3 = v6;
    } while (v6 != v2);
  }
  *(_QWORD*)(v2 + 16) = v2;
  v8 = a1[1];
  *(_QWORD*)(v8 + 24) = v8;
  if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v9 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  return nn_movie_detail_FreeMemory(v8, v9);
}

__int64 ATSParser_539e50(__int64 a1, int* a2)
{
  int v2;
  __int64 result;
  __int64 v4;
  int v5;
  __int64 v6;

  v2 = *a2;
  v6 = 0;
  v5 = v2;
  result = nandroid_SortedVectorImpl_remove_plt(a1, &v5);
  if (v6 != 0) {
    v4 = result;
    nandroid_RefBase_decStrong_plt(v6, &v6);
    return v4;
  }
  return result;
}

__int64 ATSParser_53a920(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;

  *a1 = SdkData_e88b18 + 16;
  v3 = a1 + 13;
  v2 = a1[13];
  if (v2 != 0) {
    nandroid_RefBase_decStrong_plt(v2, v3);
  }
  a1[5] = SdkData_e88b20 + 16;
  nandroid_VectorImpl_finish_vector_plt(a1 + 5);
  nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(a1 + 5);
  return nandroid_RefBase_Destroy_RefBase_plt_86def0(a1, v4);
}

__int64 ATSParser_53a990(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v6)();
  _QWORD* v7;

  *a1 = SdkData_e88b18 + 16;
  v3 = a1 + 13;
  v2 = a1[13];
  if (v2 != 0) {
    nandroid_RefBase_decStrong_plt(v2, v3);
  }
  a1[5] = SdkData_e88b20 + 16;
  nandroid_VectorImpl_finish_vector_plt(a1 + 5);
  nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(a1 + 5);
  nandroid_RefBase_Destroy_RefBase_plt_86def0_alt1(a1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v6 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v6 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v6) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v7 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v6);
  return nn_movie_detail_FreeMemory((__int64)a1, v7);
}

__int64 ATSParser_53aec0(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88b48 + 16;
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

__int64 ATSParser_53b2d0(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88b50 + 16;
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

__int64 ATSParser_53b480(__int64* a1, char* a2, char* a3, unsigned __int64 a4)
{
  unsigned __int64 v5;
  __int64 result;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  signed __int64 v13;
  _BYTE* v14;
  _BYTE* v15;
  char* v16;
  _BYTE* v17;
  _BYTE* v18;
  char v19;
  __int64 v20;
  _BYTE* v21;
  __int64 v22;

  v5 = a1[2];
  result = *a1;
  if (a4 <= v5 - result) {
    v14 = (_BYTE*)a1[1];
    v15 = &v14[-result];
    if (a4 <= (unsigned __int64)&v14[-result]) {
      v21 = (_BYTE*)(a3 - a2);
      if (v21 != nullptr) {
        v22 = result;
        memmove_plt(result, a2, v21);
        result = v22;
      }
      v20 = (__int64)&v21[result];
    }
    else {
      v16 = &v15[(_QWORD)a2];
      if (v14 != (_BYTE*)result) {
        result = memmove_plt(result, a2, v15);
        v14 = (_BYTE*)a1[1];
      }
      v17 = v14;
      if (v16 != a3) {
        v17 = v14;
        v18 = v14;
        do {
          v19 = *v16++;
          ++v17;
          *v18++ = v19;
        } while (v16 != a3);
      }
      v20 = (__int64)v17;
    }
    a1[1] = v20;
  }
  else {
    if (result != 0) {
      a1[1] = result;
      v9 = a4;
      result = SdkRoutine_857220(result, v5 - result);
      a4 = v9;
      v5 = 0;
      a1[1] = 0;
      a1[2] = 0;
      *a1 = 0;
    }
    if ((a4 & 0x8000000000000000LL) != 0) {
      nn_fs_10de70_alt1(result);
    }
    v10 = 2 * v5;
    if (2 * v5 <= a4) {
      v10 = a4;
    }
    if (v5 >= 0x3FFFFFFFFFFFFFFFLL) {
      v11 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else {
      v11 = v10;
    }
    result = SdkRoutine_85e050(v11);
    v12 = result;
    *a1 = result;
    a1[1] = result;
    a1[2] = result + v11;
    if (a2 != a3) {
      v13 = a3 - a2;
      result = memcpy_plt(result, a2, v13);
      v12 += v13;
    }
    a1[1] = v12;
  }
  return result;
}

__int64* ATSParser_53b5e0(__int64* result, __int64 a2, __int64 a3,
                          unsigned __int64 a4)
{
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;

  v5 = result + 2;
  v4 = result[2];
  v6 = *result;
  v9 = result;
  v10 = v4 - *result;
  if (a4 <= 0xCCCCCCCCCCCCCCCDLL * (v10 >> 4)) {
    v14 = result[1];
    if (a4 <= 0xCCCCCCCCCCCCCCCDLL * ((v14 - v6) >> 4)) {
      if (a2 != a3) {
        v24 = 0;
        do {
          v26 = a2 + v24;
          v27 = v6 + v24;
          v28 = *(_QWORD*)(a2 + v24);
          *(_DWORD*)(v27 + 8) = *(_DWORD*)(a2 + v24 + 8);
          *(_QWORD*)v27 = v28;
          if (v6 != a2) {
            SdkRoutine_870bc0(v27 + 16, *(_QWORD*)(v26 + 16), v26 + 24);
            result = (__int64*)(v27 + 48);
            if ((*(_BYTE*)(v27 + 48) & 1) != 0) {
              result = (__int64*)ATSParser_53c680_alt1();
            }
            else if ((*(_BYTE*)(v26 + 48) & 1) != 0) {
              result = (__int64*)ATSParser_53c7b0_alt1(
                  result, *(_QWORD*)(a2 + v24 + 64), *(_QWORD*)(a2 + v24 + 56));
            }
            else {
              v29 = *(_QWORD*)(v26 + 48);
              v30 = *(_QWORD*)(v26 + 64);
              *(_QWORD*)(v27 + 56) = *(_QWORD*)(v26 + 56);
              *(_QWORD*)(v27 + 64) = v30;
              *result = v29;
            }
          }
          v25 = *(_DWORD*)(v26 + 72);
          v24 += 80;
          *(_DWORD*)(v27 + 75) = *(_DWORD*)(v26 + 75);
          *(_DWORD*)(v27 + 72) = v25;
        } while (v26 + 80 != a3);
        v14 = v9[1];
        v6 += v24;
      }
      for (; v14 != v6; v14 -= 80) {
        if ((*(_BYTE*)(v14 - 32) & 1) != 0) {
          SdkRoutine_857220(*(_QWORD*)(v14 - 16),
                            *(_QWORD*)(v14 - 32) & 0xFFFFFFFFFFFFFFFELL);
        }
        result = (__int64*)nandroid_extractors_mp4_4f4ab0(v14 - 64,
                                                          *(_QWORD*)(v14 - 56));
      }
      v9[1] = v6;
    }
    else {
      v15 = a2 + v14 - v6;
      if (v14 != v6) {
        v16 = 0;
        do {
          v18 = a2 + v16;
          v19 = v6 + v16;
          v20 = *(_QWORD*)(a2 + v16);
          *(_DWORD*)(v19 + 8) = *(_DWORD*)(a2 + v16 + 8);
          *(_QWORD*)v19 = v20;
          if (v6 != a2) {
            SdkRoutine_870bc0(v19 + 16, *(_QWORD*)(v18 + 16), v18 + 24);
            v21 = (_QWORD*)(v19 + 48);
            if ((*(_BYTE*)(v19 + 48) & 1) != 0) {
              ATSParser_53c680_alt1();
            }
            else if ((*(_BYTE*)(v18 + 48) & 1) != 0) {
              ATSParser_53c7b0_alt1(v21, *(_QWORD*)(a2 + v16 + 64),
                                    *(_QWORD*)(a2 + v16 + 56));
            }
            else {
              v22 = *(_QWORD*)(v18 + 48);
              v23 = *(_QWORD*)(v18 + 64);
              *(_QWORD*)(v19 + 56) = *(_QWORD*)(v18 + 56);
              *(_QWORD*)(v19 + 64) = v23;
              *v21 = v22;
            }
          }
          v17 = *(_DWORD*)(v18 + 72);
          v16 += 80;
          *(_DWORD*)(v19 + 75) = *(_DWORD*)(v18 + 75);
          *(_DWORD*)(v19 + 72) = v17;
        } while (v18 + 80 != v15);
        v14 = v9[1];
      }
      result = (__int64*)ATSParser_53b960_alt2(v5, v15, a3, v14);
      v9[1] = (__int64)result;
    }
  }
  else {
    if (v6 != 0) {
      v11 = result[1];
      v12 = a4;
      if (v6 == v11) {
        v13 = *result;
      }
      else {
        do {
          if ((*(_BYTE*)(v11 - 32) & 1) != 0) {
            SdkRoutine_857220(*(_QWORD*)(v11 - 16),
                              *(_QWORD*)(v11 - 32) & 0xFFFFFFFFFFFFFFFELL);
          }
          nandroid_extractors_mp4_4f4ab0(v11 - 64, *(_QWORD*)(v11 - 56));
          v11 -= 80;
        } while (v11 != v6);
        v13 = *v9;
        v10 = v9[2] - *v9;
      }
      v9[1] = v6;
      result = (__int64*)SdkRoutine_857220(v13, v10);
      v4 = 0;
      v9[1] = 0;
      v9[2] = 0;
      *v9 = 0;
      a4 = v12;
    }
    if (a4 > 0x333333333333333LL) {
      goto LABEL_45;
    }
    v31 = 0xCCCCCCCCCCCCCCCDLL * (v4 >> 4);
    v32 = 2 * v31;
    if (2 * v31 <= a4) {
      v32 = a4;
    }
    v33 = v31 >= 0x199999999999999LL ? 0x333333333333333LL : v32;
    if (v33 > 0x333333333333333LL) {
    LABEL_45:
      nn_fs_10de70_alt1(result);
    }
    v34 = 5 * v33;
    v35 = SdkRoutine_85e050(80 * v33);
    *v9 = v35;
    v9[1] = v35;
    v9[2] = v35 + 16 * v34;
    result = (__int64*)ATSParser_53b960_alt2(v5, a2, a3, v35);
    v9[1] = (__int64)result;
  }
  return result;
}

_QWORD* ATSParser_53b960(__int64 a1, __int64* a2, __int64* a3, _QWORD* a4)
{
  __int64* v5;
  _QWORD* v6;
  int v7;
  __int64 v8;
  int v9;
  unsigned __int64** v10;
  _QWORD* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64* v16;
  _QWORD** v17;
  unsigned __int64* v18;
  unsigned __int64* v19;
  unsigned __int64** v20;
  unsigned __int64 v21;
  bool v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  char* v26;
  bool v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  char* v30;
  unsigned __int64 v31;
  int v32;
  unsigned __int64** v33;
  unsigned __int64** v34;
  unsigned __int64 v35;
  bool v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  int v41;
  int v42;
  unsigned __int64* v43;
  unsigned __int64* v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64* v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  _QWORD* v51;
  unsigned __int64* v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64* v55;
  unsigned __int64* v56;
  unsigned __int64 v57;
  unsigned __int64* v58;
  unsigned __int64* v59;
  unsigned __int64 v60;
  unsigned __int64** v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int64** v64;
  __int64* v65;
  __int64* v66;
  __int64* v69;
  _QWORD* v70;
  __int64* v71;

  if (a2 == a3) {
    return a4;
  }
  v5 = a2;
  do {
    v8 = *v5;
    v9 = *((_DWORD*)v5 + 2);
    a4[3] = 0;
    v10 = (unsigned __int64**)(a4 + 3);
    v69 = v5;
    v70 = a4;
    *((_DWORD*)a4 + 2) = v9;
    *a4 = v8;
    a4[2] = 0;
    v11 = a4 + 2;
    v12 = v5[4];
    a4[2] = a4 + 3;
    a4[4] = v12;
    a4[5] = 0;
    v13 = (__int64*)v5[2];
    v71 = v5 + 3;
    if (v13 == v5 + 3) {
      goto LABEL_6;
    }
    do {
      v16 = *v10;
      v17 = (_QWORD**)v11;
      v18 = (unsigned __int64*)v10;
      if (v10 == (unsigned __int64**)*v11) {
        goto LABEL_31;
      }
      v19 = *v10;
      v20 = v10;
      if (v16 != nullptr) {
        do {
          v18 = v19;
          v19 = (unsigned __int64*)v19[1];
        } while (v19 != nullptr);
      }
      else {
        do {
          v18 = v20[2];
          v22 = v20 == (unsigned __int64**)*v18;
          v20 = (unsigned __int64**)v18;
        } while (v22);
      }
      v21 = *((unsigned __int8*)v18 + 32);
      v22 = (v21 & 1) == 0;
      v23 = v21 >> 1;
      if (v22) {
        v24 = v23;
      }
      else {
        v24 = v18[5];
      }
      v25 = *((unsigned __int8*)v13 + 32);
      if (v22) {
        v26 = (char*)v18 + 33;
      }
      else {
        v26 = (char*)v18[6];
      }
      v27 = (v25 & 1) == 0;
      v28 = v25 >> 1;
      if (v27) {
        v29 = v28;
      }
      else {
        v29 = v13[5];
      }
      if (v27) {
        v30 = (char*)v13 + 33;
      }
      else {
        v30 = (char*)v13[6];
      }
      if (v29 >= v24) {
        v31 = v24;
      }
      else {
        v31 = v29;
      }
      v32 = memcmp_plt(v26, v30, v31);
      if (v32 == 0) {
        if (v24 < v29) {
          goto LABEL_31;
        }
      LABEL_40:
        v34 = v10;
        v33 = v10;
        if (v16 == nullptr) {
          goto LABEL_62;
        }
        while (1) {
          v35 = *((unsigned __int8*)v16 + 32);
          v33 = (unsigned __int64**)v16;
          v36 = (v35 & 1) == 0;
          v37 = v35 >> 1;
          if (v36) {
            v38 = v37;
          }
          else {
            v38 = v16[5];
          }
          if (v36) {
            v39 = (unsigned __int64)v16 + 33;
          }
          else {
            v39 = v16[6];
          }
          if (v38 >= v29) {
            v40 = v29;
          }
          else {
            v40 = v38;
          }
          v41 = memcmp_plt(v30, v39, v40);
          if (v41 != 0) {
            if (v41 < 0) {
              goto LABEL_42;
            }
          }
          else if (v29 < v38) {
          LABEL_42:
            v16 = *v33;
            v34 = v33;
            if (*v33 == nullptr) {
              goto LABEL_62;
            }
            continue;
          }
          v42 = memcmp_plt(v39, v30, v40);
          if (v42 != 0) {
            if ((v42 & 0x80000000) == 0) {
              goto LABEL_107;
            }
          }
          else if (v38 >= v29) {
            goto LABEL_107;
          }
          v16 = v33[1];
          if (v16 == nullptr) {
            v34 = v33 + 1;
            goto LABEL_62;
          }
        }
      }
      if ((v32 & 0x80000000) == 0) {
        goto LABEL_40;
      }
    LABEL_31:
      if (v16 != nullptr) {
        v33 = (unsigned __int64**)v18;
      }
      else {
        v33 = v10;
      }
      if (v16 != nullptr) {
        v34 = (unsigned __int64**)(v18 + 1);
      }
      else {
        v34 = v10;
      }
      if (*v34 != nullptr) {
        goto LABEL_107;
      }
    LABEL_62:
      v43 = (unsigned __int64*)nn_movie_detail_AllocateMemory(80);
      v44 = v43;
      if ((v13[4] & 1) != 0) {
        nandroid_extractors_mp4_4f61b0(v43 + 4, v13[6], v13[5]);
        v47 = (unsigned __int64*)(v13 + 7);
        if ((v13[7] & 1) != 0) {
          goto LABEL_64;
        }
      LABEL_66:
        v48 = *v47;
        v49 = v47[1];
        v50 = v47[2];
        v44[8] = v49;
        v44[9] = v50;
        v44[7] = v48;
        goto LABEL_67;
      }
      v45 = v13[4];
      v46 = v13[6];
      v43[5] = v13[5];
      v43[6] = v46;
      v43[4] = v45;
      v47 = (unsigned __int64*)(v13 + 7);
      if ((v13[7] & 1) == 0) {
        goto LABEL_66;
      }
    LABEL_64:
      nandroid_extractors_mp4_4f61b0(v44 + 7, v13[9], v13[8]);
    LABEL_67:
      *v44 = 0;
      v44[1] = 0;
      v44[2] = (unsigned __int64)v33;
      *v34 = v44;
      v51 = (_QWORD*)**v17;
      if (v51 != nullptr) {
        *v17 = v51;
        v44 = *v34;
      }
      v52 = *v10;
      v22 = v44 == *v10;
      *((_BYTE*)v44 + 24) = v22;
      if (!v22) {
        do {
          v53 = v44[2];
          if ((*(_BYTE*)(v53 + 24) & 1) != 0) {
            break;
          }
          v54 = *(_QWORD*)(v53 + 16);
          v55 = *(unsigned __int64**)v54;
          if (v53 == *(_QWORD*)v54) {
            v55 = *(unsigned __int64**)(v54 + 8);
            if (v55 == nullptr || (v55[3] & 1) != 0) {
              if (v44 == *(unsigned __int64**)v53) {
                *(_BYTE*)(v53 + 24) = 1;
                *(_BYTE*)(v54 + 24) = 0;
                v59 = *(unsigned __int64**)v54;
                v63 = *(_QWORD*)(*(_QWORD*)v54 + 8LL);
                *(_QWORD*)v54 = v63;
                if (v63 != 0) {
                  goto LABEL_100;
                }
              }
              else {
                v56 = *(unsigned __int64**)(v53 + 8);
                v57 = *v56;
                *(_QWORD*)(v53 + 8) = *v56;
                if (v57 != 0) {
                  *(_QWORD*)(v57 + 16) = v53;
                  v54 = *(_QWORD*)(v53 + 16);
                }
                v56[2] = v54;
                if (v53 == *(_QWORD*)v54) {
                  *(_QWORD*)v54 = v56;
                }
                else {
                  *(_QWORD*)(v54 + 8) = v56;
                }
                *v56 = v53;
                *(_QWORD*)(v53 + 16) = v56;
                v54 = v56[2];
                *((_BYTE*)v56 + 24) = 1;
                *(_BYTE*)(v54 + 24) = 0;
                v59 = *(unsigned __int64**)v54;
                v63 = *(_QWORD*)(*(_QWORD*)v54 + 8LL);
                *(_QWORD*)v54 = v63;
                if (v63 != 0) {
                LABEL_100:
                  *(_QWORD*)(v63 + 16) = v54;
                }
              }
              v64 = *(unsigned __int64***)(v54 + 16);
              v59[2] = (unsigned __int64)v64;
              if ((unsigned __int64*)v54 == *v64) {
                *v64 = v59;
              }
              else {
                v64[1] = v59;
              }
              v59[1] = v54;
            LABEL_105:
              *(_QWORD*)(v54 + 16) = v59;
              break;
            }
          }
          else if (v55 == nullptr || (v55[3] & 1) != 0) {
            v58 = *(unsigned __int64**)v53;
            if (v44 == *(unsigned __int64**)v53) {
              v62 = v58[1];
              *(_QWORD*)v53 = v62;
              if (v62 != 0) {
                *(_QWORD*)(v62 + 16) = v53;
                v54 = *(_QWORD*)(v53 + 16);
              }
              v58[2] = v54;
              if (v53 == *(_QWORD*)v54) {
                *(_QWORD*)v54 = v58;
              }
              else {
                *(_QWORD*)(v54 + 8) = v58;
              }
              v58[1] = v53;
              *(_QWORD*)(v53 + 16) = v58;
              v54 = v58[2];
              *((_BYTE*)v58 + 24) = 1;
              *(_BYTE*)(v54 + 24) = 0;
              v59 = *(unsigned __int64**)(v54 + 8);
              v60 = *v59;
              *(_QWORD*)(v54 + 8) = *v59;
              if (v60 != 0) {
              LABEL_87:
                *(_QWORD*)(v60 + 16) = v54;
              }
            }
            else {
              *(_BYTE*)(v53 + 24) = 1;
              *(_BYTE*)(v54 + 24) = 0;
              v59 = *(unsigned __int64**)(v54 + 8);
              v60 = *v59;
              *(_QWORD*)(v54 + 8) = *v59;
              if (v60 != 0) {
                goto LABEL_87;
              }
            }
            v61 = *(unsigned __int64***)(v54 + 16);
            v59[2] = (unsigned __int64)v61;
            if ((unsigned __int64*)v54 == *v61) {
              *v61 = v59;
            }
            else {
              v61[1] = v59;
            }
            *v59 = v54;
            goto LABEL_105;
          }
          *(_BYTE*)(v53 + 24) = 1;
          v44 = (unsigned __int64*)v54;
          *(_BYTE*)(v54 + 24) = v54 == (_QWORD)v52;
          *((_BYTE*)v55 + 24) = 1;
        } while ((unsigned __int64*)v54 != v52);
      }
      ++v70[5];
    LABEL_107:
      v65 = (__int64*)v13[1];
      if (v65 != nullptr) {
        do {
          v66 = v65;
          v65 = (__int64*)*v65;
        } while (v65 != nullptr);
      }
      else {
        do {
          v66 = (__int64*)v13[2];
          v22 = v13 == (__int64*)*v66;
          v13 = v66;
        } while (!v22);
      }
      v13 = v66;
      v11 = v17;
    } while (v66 != v71);
  LABEL_6:
    if ((v69[6] & 1) != 0) {
      v6 = v70;
      nandroid_extractors_mp4_4f61b0(v70 + 6, v69[8], v69[7]);
    }
    else {
      v14 = v69[6];
      v15 = v69[8];
      v6 = v70;
      v70[7] = v69[7];
      v70[8] = v15;
      v70[6] = v14;
    }
    v7 = *((_DWORD*)v69 + 18);
    v5 = v69 + 10;
    *(_DWORD*)((char*)v6 + 75) = *(_DWORD*)((char*)v69 + 75);
    *((_DWORD*)v6 + 18) = v7;
    a4 = v6 + 10;
  } while (v69 + 10 != a3);
  return a4;
}

__int64* std___1___tree___assign_multi(__int64* result, _QWORD* a2, _QWORD* a3)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* i;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  bool v15;
  _QWORD* v16;
  _QWORD* j;
  _QWORD* v18;
  __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  _QWORD* v22;

  v4 = a2;
  v5 = (__int64)result;
  if (result[3] != 0) {
    v6 = result[1];
    v7 = *result;
    *result = (__int64)(result + 1);
    *(_QWORD*)(v6 + 16) = 0;
    result[1] = 0;
    result[3] = 0;
    if (*(_QWORD*)(v7 + 8) != 0) {
      v8 = *(_QWORD*)(v7 + 8);
    }
    else {
      v8 = v7;
    }
    if (v8 != 0) {
      v9 = *(_QWORD**)(v8 + 16);
      if (v9 != nullptr) {
        if (v8 == *v9) {
          *v9 = 0;
          v10 = *(_QWORD**)(v8 + 16);
          while (1) {
            v20 = (_QWORD*)v10[1];
            if (v20 == nullptr) {
              break;
            }
            do {
              v10 = v20;
              v20 = (_QWORD*)*v20;
            } while (v20 != nullptr);
          }
        }
        else {
          v9[1] = 0;
          v10 = *(_QWORD**)(v8 + 16);
          for (i = (_QWORD*)*v10; i != nullptr; i = (_QWORD*)v10[1]) {
            do {
              v10 = i;
              i = (_QWORD*)*i;
            } while (i != nullptr);
          }
        }
      }
      else {
        v10 = nullptr;
      }
      if (a2 == a3) {
        v14 = a2;
        v12 = v8;
      }
      else {
        do {
          v12 = (__int64)v10;
          ATSParser_53c140_alt1(v8 + 32, v4 + 4);
          ATSParser_53c240_alt1(v5, v8);
          if (v10 != nullptr) {
            v16 = (_QWORD*)v10[2];
            if (v16 != nullptr) {
              if (v10 == (_QWORD*)*v16) {
                *v16 = 0;
                v10 = (_QWORD*)v10[2];
                while (1) {
                  v18 = (_QWORD*)v10[1];
                  if (v18 == nullptr) {
                    break;
                  }
                  do {
                    v10 = v18;
                    v18 = (_QWORD*)*v18;
                  } while (v18 != nullptr);
                }
              }
              else {
                v16[1] = 0;
                v10 = (_QWORD*)v10[2];
                for (j = (_QWORD*)*v10; j != nullptr; j = (_QWORD*)v10[1]) {
                  do {
                    v10 = j;
                    j = (_QWORD*)*j;
                  } while (j != nullptr);
                }
              }
            }
            else {
              v10 = nullptr;
            }
          }
          v13 = (_QWORD*)v4[1];
          if (v13 != nullptr) {
            do {
              v14 = v13;
              v13 = (_QWORD*)*v13;
            } while (v13 != nullptr);
          }
          else {
            do {
              v14 = (_QWORD*)v4[2];
              v15 = v4 == (_QWORD*)*v14;
              v4 = v14;
            } while (!v15);
          }
          if (v12 == 0) {
            break;
          }
          v8 = v12;
          v4 = v14;
        } while (v14 != a3);
      }
      result = (__int64*)nandroid_extractors_mp4_4f4ab0(v5, v12);
      if (v10 == nullptr) {
        v4 = v14;
        goto LABEL_47;
      }
      v19 = v10[2];
      if (v19 != 0) {
        do {
          v8 = v19;
          v19 = *(_QWORD*)(v19 + 16);
        } while (v19 != 0);
      }
      else {
        v8 = (__int64)v10;
      }
      v4 = v14;
    }
    result = (__int64*)nandroid_extractors_mp4_4f4ab0(v5, v8);
  }
LABEL_47:
  if (v4 != a3) {
    do {
      result = (__int64*)SdkRoutine_870bd0(v5, v5 + 8, v4 + 4);
      v21 = (_QWORD*)v4[1];
      if (v21 != nullptr) {
        do {
          v22 = v21;
          v21 = (_QWORD*)*v21;
        } while (v21 != nullptr);
      }
      else {
        do {
          v22 = (_QWORD*)v4[2];
          v15 = v4 == (_QWORD*)*v22;
          v4 = v22;
        } while (!v15);
      }
      v4 = v22;
    } while (v22 != a3);
  }
  return result;
}

unsigned __int64* ATSParser_53c140(unsigned __int64* result,
                                   unsigned __int64* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64* v7;
  char v8;
  bool v9;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64* v17;
  bool v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;

  if (result == a2) {
    return result;
  }
  v2 = *(unsigned __int8*)a2;
  if ((*(_BYTE*)result & 1) != 0) {
    v9 = (v2 & 1) == 0;
    v10 = v2 >> 1;
    v11 = result;
    if (v9) {
      v12 = (__int64)a2 + 1;
    }
    else {
      v12 = a2[2];
    }
    if (v9) {
      v13 = v10;
    }
    else {
      v13 = a2[1];
    }
    ATSParser_53c680(result, v12, v13);
    v7 = a2 + 3;
    v6 = *((unsigned __int8*)a2 + 24);
    result = v11 + 3;
    if ((v11[3] & 1) != 0) {
      goto LABEL_17;
    }
    goto LABEL_13;
  }
  if ((v2 & 1) == 0) {
    v4 = *a2;
    v5 = a2[2];
    result[1] = a2[1];
    result[2] = v5;
    *result = v4;
    v7 = a2 + 3;
    v6 = *((unsigned __int8*)a2 + 24);
    v8 = *((_BYTE*)result + 24);
    result += 3;
    if ((v8 & 1) != 0) {
      goto LABEL_17;
    }
  LABEL_13:
    if ((v6 & 1) != 0) {
      return ATSParser_53c7b0(result, a2[5], a2[4]);
    }
    v14 = *v7;
    v15 = v7[1];
    v16 = v7[2];
    result[1] = v15;
    result[2] = v16;
    *result = v14;
    return result;
  }
  v17 = result;
  ATSParser_53c7b0(result, a2[2], a2[1]);
  v7 = a2 + 3;
  v6 = *((unsigned __int8*)a2 + 24);
  result = v17 + 3;
  if ((v17[3] & 1) == 0) {
    goto LABEL_13;
  }
LABEL_17:
  v18 = (v6 & 1) == 0;
  v19 = v6 >> 1;
  if (v18) {
    v20 = (__int64)a2 + 25;
  }
  else {
    v20 = a2[5];
  }
  if (v18) {
    v21 = v19;
  }
  else {
    v21 = a2[4];
  }
  return ATSParser_53c680(result, v20, v21);
}

__int64 ATSParser_53c240(__int64** a1, __int64 a2)
{
  __int64* v2;
  __int64* v3;
  unsigned __int64 v6;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  bool v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64* v18;
  __int64 v19;
  __int64* v20;

  v3 = (__int64*)(a1 + 1);
  v2 = a1[1];
  if (v2 == nullptr) {
    v18 = (__int64*)(a1 + 1);
    goto LABEL_26;
  }
  v6 = *(unsigned __int8*)(a2 + 32);
  v7 = (v6 & 1) == 0;
  v8 = v6 >> 1;
  if (v7) {
    v9 = a2 + 33;
  }
  else {
    v9 = *(_QWORD*)(a2 + 48);
  }
  if (v7) {
    v10 = v8;
  }
  else {
    v10 = *(_QWORD*)(a2 + 40);
  }
  do {
    while (1) {
      v3 = v2;
      v11 = *((unsigned __int8*)v2 + 32);
      v12 = (v11 & 1) == 0;
      v13 = v11 >> 1;
      v14 = v12 ? v13 : v3[5];
      v15 = v12 ? (__int64)v3 + 33 : v3[6];
      v16 = v14 >= v10 ? v10 : v14;
      v17 = memcmp_plt(v9, v15, v16);
      if (v17 != 0) {
        break;
      }
      if (v10 >= v14) {
        goto LABEL_8;
      }
    LABEL_22:
      v2 = (__int64*)*v3;
      v18 = v3;
      if (*v3 == 0) {
        goto LABEL_26;
      }
    }
    if (v17 < 0) {
      goto LABEL_22;
    }
  LABEL_8:
    v2 = (__int64*)v3[1];
  } while (v2 != nullptr);
  v18 = v3 + 1;
LABEL_26:
  *(_QWORD*)a2 = 0;
  *(_QWORD*)(a2 + 8) = 0;
  *(_QWORD*)(a2 + 16) = v3;
  v19 = a2;
  *v18 = a2;
  v20 = (__int64*)**a1;
  if (v20 != nullptr) {
    *a1 = v20;
    v19 = *v18;
  }
  nn_fs_dc120(a1[1], v19);
  a1[3] = (__int64*)((char*)a1[3] + 1);
  return a2;
}

unsigned __int64* std___1___tree___emplace_hint_multi(__int64** a1, __int64 a2,
                                                      unsigned __int64* a3)
{
  unsigned __int64* v6;
  unsigned __int64* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64** v14;
  unsigned __int64 v15;
  unsigned __int64* v16;
  __int64* v17;
  unsigned __int64 v19;

  v6 = (unsigned __int64*)nn_movie_detail_AllocateMemory(80);
  v7 = v6;
  if ((*(_BYTE*)a3 & 1) != 0) {
    nandroid_extractors_mp4_4f61b0(v6 + 4, a3[2], a3[1]);
    v10 = a3 + 3;
    if ((a3[3] & 1) != 0) {
      goto LABEL_3;
    }
  }
  else {
    v8 = *a3;
    v9 = a3[2];
    v6[5] = a3[1];
    v6[6] = v9;
    v6[4] = v8;
    v10 = a3 + 3;
    if ((a3[3] & 1) != 0) {
    LABEL_3:
      nandroid_extractors_mp4_4f61b0(v7 + 7, a3[5], a3[4]);
      goto LABEL_6;
    }
  }
  v11 = *v10;
  v12 = v10[1];
  v13 = v10[2];
  v7[8] = v12;
  v7[9] = v13;
  v7[7] = v11;
LABEL_6:
  v19 = 0;
  v14 = (unsigned __int64**)ATSParser_53c460_alt1(a1, a2, &v19, v7 + 4);
  v15 = v19;
  *v7 = 0;
  v7[1] = 0;
  v16 = v7;
  v7[2] = v15;
  *v14 = v7;
  v17 = (__int64*)**a1;
  if (v17 != nullptr) {
    *a1 = v17;
    v16 = *v14;
  }
  nn_fs_dc120(a1[1], v16);
  a1[3] = (__int64*)((char*)a1[3] + 1);
  return v7;
}

_QWORD* ATSParser_53c460(_QWORD* a1, __int64 a2, _QWORD* a3,
                         unsigned __int8* a4)
{
  _QWORD* v4;
  _QWORD* v7;
  unsigned __int64 v9;
  bool v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  bool v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int8* v18;
  unsigned __int64 v19;
  int v20;
  __int64 v21;
  unsigned __int64 v22;
  bool v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  char* v26;
  unsigned __int64 v27;
  int v28;
  _QWORD* v29;
  __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  _QWORD* v33;
  unsigned __int64 v34;
  bool v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int8* v39;
  bool v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  char* v43;
  unsigned __int64 v44;
  int v45;
  __int64 v46;
  unsigned __int64 v47;
  bool v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  char* v51;
  unsigned __int64 v52;
  int v53;

  v4 = a1 + 1;
  v7 = (_QWORD*)a2;
  if ((_QWORD*)a2 != a1 + 1) {
    v9 = *(unsigned __int8*)(a2 + 32);
    v10 = (v9 & 1) == 0;
    v11 = v9 >> 1;
    if (v10) {
      v12 = v11;
    }
    else {
      v12 = *(_QWORD*)(a2 + 40);
    }
    v13 = *a4;
    if (v10) {
      v14 = a2 + 33;
    }
    else {
      v14 = *(_QWORD*)(a2 + 48);
    }
    v15 = (v13 & 1) == 0;
    v16 = v13 >> 1;
    if (v15) {
      v17 = v16;
    }
    else {
      v17 = *((_QWORD*)a4 + 1);
    }
    if (v15) {
      v18 = a4 + 1;
    }
    else {
      v18 = *((unsigned __int8**)a4 + 2);
    }
    if (v17 >= v12) {
      v19 = v12;
    }
    else {
      v19 = v17;
    }
    v20 = memcmp_plt(v14, v18, v19);
    if (v20 != 0) {
      if (v20 < 0) {
        goto LABEL_19;
      }
    }
    else if (v12 < v17) {
    LABEL_19:
      v21 = *v4;
      v7 = v4;
      if (*v4 != 0) {
        do {
          v4 = (_QWORD*)v21;
          v22 = *(unsigned __int8*)(v21 + 32);
          v23 = (v22 & 1) == 0;
          v24 = v22 >> 1;
          if (v23) {
            v25 = v24;
          }
          else {
            v25 = v4[5];
          }
          if (v23) {
            v26 = (char*)v4 + 33;
          }
          else {
            v26 = (char*)v4[6];
          }
          if (v17 >= v25) {
            v27 = v25;
          }
          else {
            v27 = v17;
          }
          v28 = memcmp_plt(v26, v18, v27);
          if (v28 != 0) {
            if ((v28 & 0x80000000) == 0) {
              goto LABEL_19;
            }
          }
          else if (v25 >= v17) {
            goto LABEL_19;
          }
          v21 = v4[1];
        } while (v21 != 0);
      LABEL_75:
        v7 = v4 + 1;
        goto LABEL_76;
      }
      goto LABEL_76;
    }
  }
  v29 = (_QWORD*)*a1;
  v30 = *v7;
  v31 = v7;
  if (v7 != v29) {
    if (v30 != 0) {
      v32 = (_QWORD*)*v7;
      do {
        v31 = v32;
        v32 = (_QWORD*)v32[1];
      } while (v32 != nullptr);
    }
    else {
      v33 = v7;
      do {
        v31 = (_QWORD*)v33[2];
        v10 = v33 == (_QWORD*)*v31;
        v33 = v31;
      } while (v10);
    }
    v34 = *a4;
    v35 = (v34 & 1) == 0;
    v36 = v34 >> 1;
    if (v35) {
      v37 = v36;
    }
    else {
      v37 = *((_QWORD*)a4 + 1);
    }
    v38 = *((unsigned __int8*)v31 + 32);
    if (v35) {
      v39 = a4 + 1;
    }
    else {
      v39 = *((unsigned __int8**)a4 + 2);
    }
    v40 = (v38 & 1) == 0;
    v41 = v38 >> 1;
    if (v40) {
      v42 = v41;
    }
    else {
      v42 = v31[5];
    }
    if (v40) {
      v43 = (char*)v31 + 33;
    }
    else {
      v43 = (char*)v31[6];
    }
    if (v42 >= v37) {
      v44 = v37;
    }
    else {
      v44 = v42;
    }
    v45 = memcmp_plt(v39, v43, v44);
    if (v45 != 0) {
      if (v45 < 0) {
        goto LABEL_60;
      }
    }
    else if (v37 < v42) {
    LABEL_60:
      v46 = *v4;
      v7 = v4;
      if (*v4 != 0) {
        do {
          v4 = (_QWORD*)v46;
          v47 = *(unsigned __int8*)(v46 + 32);
          v48 = (v47 & 1) == 0;
          v49 = v47 >> 1;
          if (v48) {
            v50 = v49;
          }
          else {
            v50 = v4[5];
          }
          if (v48) {
            v51 = (char*)v4 + 33;
          }
          else {
            v51 = (char*)v4[6];
          }
          if (v50 >= v37) {
            v52 = v37;
          }
          else {
            v52 = v50;
          }
          v53 = memcmp_plt(v39, v51, v52);
          if (v53 != 0) {
            if (v53 < 0) {
              goto LABEL_60;
            }
          }
          else if (v37 < v50) {
            goto LABEL_60;
          }
          v46 = v4[1];
        } while (v46 != 0);
        goto LABEL_75;
      }
    LABEL_76:
      *a3 = v4;
      return v7;
    }
  }
  if (v30 != 0) {
    *a3 = v31;
    return v31 + 1;
  }
  else {
    *a3 = v7;
  }
  return v7;
}

unsigned __int64* ATSParser_53c680(unsigned __int64* a1, __int64 a2,
                                   unsigned __int64 a3)
{
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  char* v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;

  v5 = *a1 & 0xFFFFFFFFFFFFFFFELL;
  if (a3 >= v5) {
    if (a3 - v5 + 1 > -9LL - v5) {
      nn_fs_dc4d0(a1, a2);
    }
    v7 = v5 - 1;
    if ((*a1 & 1) != 0) {
      v9 = (char*)a1[2];
    }
    else {
      v9 = (char*)a1 + 1;
    }
    if (v7 > 0x7FFFFFFFFFFFFFF2LL) {
      v12 = -9;
      v6 = SdkRoutine_85e050(0xFFFFFFFFFFFFFFF7LL);
      if (a3 == 0) {
      LABEL_21:
        SdkRoutine_857220(v9, v5);
        a1[1] = a3;
        a1[2] = v6;
        *a1 = v12 | 1;
        goto LABEL_22;
      }
    }
    else {
      v10 = 2 * v7;
      if (a3 > 2 * v7) {
        v10 = a3;
      }
      if ((v10 | 7) == 0x17) {
        v11 = 26;
      }
      else {
        v11 = (v10 | 7) + 1;
      }
      if (v10 >= 0x17) {
        v12 = v11;
      }
      else {
        v12 = 23;
      }
      v6 = SdkRoutine_85e050(v12);
      if (a3 == 0) {
        goto LABEL_21;
      }
    }
    memcpy_plt(v6, a2, a3);
    goto LABEL_21;
  }
  v6 = a1[2];
  a1[1] = a3;
  if (a3 != 0) {
    memmove_plt(v6, a2, a3);
  }
LABEL_22:
  *(_BYTE*)(v6 + a3) = 0;
  return a1;
}

_QWORD* ATSParser_53c7b0(_QWORD* a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v8;

  if (a3 > 0x16) {
    if (a3 + 9 <= 0x1E) {
      nn_fs_dc4d0(a1, a2);
    }
    v6 = 44;
    if (a3 > 0x2C) {
      v6 = a3;
    }
    v8 = v6 | 7;
    v5 = SdkRoutine_85e050((v6 | 7) + 1);
    memcpy_plt(v5, a2, a3);
    a1[1] = a3;
    a1[2] = v5;
    *a1 = v8 + 2;
  }
  else {
    *(_BYTE*)a1 = 2 * a3;
    v5 = (__int64)a1 + 1;
    if (a3 != 0) {
      memmove_plt((char*)a1 + 1, a2, a3);
    }
  }
  *(_BYTE*)(v5 + a3) = 0;
  return a1;
}

__int64 ATSParser_53c860(_QWORD* a1)
{
  __int64 v2;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v4)();
  _QWORD* v5;
  int v7;

  *a1 = SdkData_e88b70 + 16;
  ATSParser_53ca20((__int64)a1);
  v2 = a1[1];
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v4 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v7 = __cxa_guard_acquire_plt(SdkData_e88330);
    v4 = SdkData_e88338[0];
    if (v7 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v4 = SdkData_e88338[0];
    }
  }
  v5 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
  return nn_movie_detail_FreeMemory(v2, v5);
}

__int64 ATSParser_53c900(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  atomic_uchar* v4;
  void(__attribute__((noreturn)) * v5)();
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;

  *a1 = SdkData_e88ba0 + 16;
  v2 = a1[1];
  v3 = *(_QWORD*)(v2 + 32);
  v4 = (atomic_uchar*)SdkData_e88330;
  v5 = SdkData_e88338[0];
  if (v3 != v2) {
    do {
      v6 = *(_QWORD*)(v3 + 32);
      if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(v4) != 0) {
        *(_DWORD*)v5 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
        __cxa_guard_release_plt(v4);
      }
      v7 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
      nn_movie_detail_FreeMemory(v3, v7);
      v2 = a1[1];
      v3 = v6;
    } while (v6 != v2);
  }
  *(_QWORD*)(v2 + 24) = v2;
  v8 = a1[1];
  *(_QWORD*)(v8 + 32) = v8;
  if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v9 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  return nn_movie_detail_FreeMemory(v8, v9);
}

__int64 ATSParser_53ca20(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  _QWORD* v3;
  atomic_uchar* v4;
  void(__attribute__((noreturn)) * v5)();
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;

  v1 = *(_QWORD**)(result + 8);
  v2 = result;
  v3 = (_QWORD*)v1[6];
  if (v3 != v1) {
    v4 = (atomic_uchar*)SdkData_e88330;
    v5 = SdkData_e88338[0];
    do {
      v6 = v3[4];
      v7 = (_QWORD*)v3[6];
      if (v6 != 0) {
        nandroid_RefBase_decStrong_plt(v6, v3 + 4);
      }
      v8 = v3[3];
      if (v8 != 0) {
        nandroid_RefBase_decStrong_plt(v8, v3 + 3);
      }
      if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(v4) != 0) {
        *(_DWORD*)v5 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
        __cxa_guard_release_plt(v4);
      }
      v9 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
      result = nn_movie_detail_FreeMemory((__int64)v3, v9);
      v1 = *(_QWORD**)(v2 + 8);
      v3 = v7;
    } while (v7 != v1);
  }
  v1[5] = v1;
  *(_QWORD*)(*(_QWORD*)(v2 + 8) + 48LL) = *(_QWORD*)(v2 + 8);
  return result;
}

__int64 ATSParser_53cb00(_QWORD* a1)
{
  __int64 v2;
  atomic_uchar* v3;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v5)();
  _QWORD* v6;
  _QWORD* v7;

  *a1 = SdkData_e88b70 + 16;
  ATSParser_53ca20((__int64)a1);
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

__int64 ATSParser_53cbe0(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  ATSParser_53c900(a1);
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

__int64 ATSParser_53ccb0(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88b88 + 16;
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

__int64 ATSParser_53d0c0(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88b20 + 16;
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

__int64 ATSParser_53d4a0(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88b28 + 16;
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

void nandroid_Vector_do_destroy(__int64 a1, _QWORD* a2, __int64 a3)
{
  __int64 i;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if (a3 != 0) {
    for (i = a3; i != 0; --i) {
      v5 = a2[6];
      if (v5 != 0) {
        v6 = a2[7];
        v7 = a2[6];
        if (v5 != v6) {
          do {
            if ((*(_BYTE*)(v6 - 32) & 1) != 0) {
              SdkRoutine_857220(*(_QWORD*)(v6 - 16),
                                *(_QWORD*)(v6 - 32) & 0xFFFFFFFFFFFFFFFELL);
            }
            nandroid_extractors_mp4_4f4ab0(v6 - 64, *(_QWORD*)(v6 - 56));
            v6 -= 80;
          } while (v6 != v5);
          v7 = a2[6];
        }
        v8 = a2[8];
        a2[7] = v5;
        SdkRoutine_857220(v7, v8 - v7);
      }
      v9 = a2[3];
      if (v9 != 0) {
        v10 = a2[5];
        a2[4] = v9;
        SdkRoutine_857220(v9, v10 - v9);
      }
      a2 += 9;
    }
  }
}

_QWORD* nandroid_Vector_do_copy(_QWORD* result, __int64 a2, __int64* a3,
                                __int64 a4)
{
  _QWORD* v4;
  __int64 i;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  _QWORD* v17;

  if (a4 != 0) {
    v4 = (_QWORD*)(a2 + 64);
    for (i = a4; i != 0; --i) {
      v7 = *a3;
      *((_DWORD*)v4 - 14) = *((_DWORD*)a3 + 2);
      *(v4 - 8) = v7;
      v8 = a3[2];
      *(v4 - 4) = 0;
      *(v4 - 3) = 0;
      *(v4 - 6) = v8;
      *(v4 - 5) = 0;
      v10 = a3[3];
      v9 = a3[4];
      v11 = v9 - v10;
      if (v9 != v10) {
        if (v11 < 0) {
          nn_fs_10de70_alt1(result);
        }
        v12 = SdkRoutine_85e050(v9 - v10);
        v13 = v12 + v11;
        *(v4 - 5) = v12;
        *(v4 - 4) = v12;
        *(v4 - 3) = v12 + v11;
        result = (_QWORD*)memcpy_plt(v12, v10, v11);
        *(v4 - 4) = v13;
      }
      *(v4 - 1) = 0;
      *v4 = 0;
      *(v4 - 2) = 0;
      v14 = (__int64*)a3[6];
      v15 = (__int64*)a3[7];
      v16 = (char*)v15 - (char*)v14;
      if (v15 != v14) {
        if (0xCCCCCCCCCCCCCCCDLL * (v16 >> 4) >= 0x333333333333334LL) {
          nn_fs_10de70_alt1(result);
        }
        v17 = (_QWORD*)SdkRoutine_85e050((char*)v15 - (char*)v14);
        *(v4 - 2) = v17;
        *(v4 - 1) = v17;
        *v4 = (char*)v17 + v16;
        result = ATSParser_53b960((__int64)v4, v14, v15, v17);
        *(v4 - 1) = result;
      }
      a3 += 9;
      v4 += 9;
    }
  }
  return result;
}

_QWORD* nandroid_Vector_do_splat(_QWORD* result, __int64 a2, __int64* a3,
                                 __int64 a4)
{
  _QWORD* v4;
  __int64 i;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  _QWORD* v17;

  if (a4 != 0) {
    v4 = (_QWORD*)(a2 + 64);
    for (i = a4; i != 0; --i) {
      v7 = *a3;
      *((_DWORD*)v4 - 14) = *((_DWORD*)a3 + 2);
      *(v4 - 8) = v7;
      v8 = a3[2];
      *(v4 - 4) = 0;
      *(v4 - 3) = 0;
      *(v4 - 6) = v8;
      *(v4 - 5) = 0;
      v10 = a3[3];
      v9 = a3[4];
      v11 = v9 - v10;
      if (v9 != v10) {
        if (v11 < 0) {
          nn_fs_10de70_alt1(result);
        }
        v12 = SdkRoutine_85e050(v9 - v10);
        v13 = v12 + v11;
        *(v4 - 5) = v12;
        *(v4 - 4) = v12;
        *(v4 - 3) = v12 + v11;
        result = (_QWORD*)memcpy_plt(v12, v10, v11);
        *(v4 - 4) = v13;
      }
      *(v4 - 1) = 0;
      *v4 = 0;
      *(v4 - 2) = 0;
      v14 = (__int64*)a3[6];
      v15 = (__int64*)a3[7];
      v16 = (char*)v15 - (char*)v14;
      if (v15 != v14) {
        if (0xCCCCCCCCCCCCCCCDLL * (v16 >> 4) >= 0x333333333333334LL) {
          nn_fs_10de70_alt1(result);
        }
        v17 = (_QWORD*)SdkRoutine_85e050((char*)v15 - (char*)v14);
        *(v4 - 2) = v17;
        *(v4 - 1) = v17;
        *v4 = (char*)v17 + v16;
        result = ATSParser_53b960((__int64)v4, v14, v15, v17);
        *(v4 - 1) = result;
      }
      v4 += 9;
    }
  }
  return result;
}

__int64 nandroid_Vector_do_move_backward(__int64 a1, __int64 a2, __int64* a3,
                                         __int64 a4)
{
  return ATSParser_53db80(a2, a3, a4);
}

__int64 ATSParser_53db80(__int64 result, __int64* a2, __int64 a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  _QWORD* v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;

  if (a3 != 0) {
    v3 = a3;
    v5 = result;
    do {
      v6 = *a2;
      *(_DWORD*)(v5 + 8) = *((_DWORD*)a2 + 2);
      *(_QWORD*)v5 = v6;
      v7 = a2[2];
      *(_QWORD*)(v5 + 32) = 0;
      *(_QWORD*)(v5 + 40) = 0;
      *(_QWORD*)(v5 + 16) = v7;
      *(_QWORD*)(v5 + 24) = 0;
      v9 = a2[3];
      v8 = a2[4];
      v10 = v8 - v9;
      if (v8 != v9) {
        if (v10 < 0) {
          nn_fs_10de70_alt1(result);
        }
        v11 = SdkRoutine_85e050(v8 - v9);
        v12 = v11 + v10;
        *(_QWORD*)(v5 + 24) = v11;
        *(_QWORD*)(v5 + 32) = v11;
        *(_QWORD*)(v5 + 40) = v11 + v10;
        result = memcpy_plt(v11, v9, v10);
        *(_QWORD*)(v5 + 32) = v12;
      }
      *(_QWORD*)(v5 + 64) = 0;
      *(_QWORD*)(v5 + 48) = 0;
      *(_QWORD*)(v5 + 56) = 0;
      v13 = (__int64*)a2[6];
      v14 = (__int64*)a2[7];
      v15 = (char*)v14 - (char*)v13;
      if (v14 != v13) {
        if (0xCCCCCCCCCCCCCCCDLL * (v15 >> 4) >= 0x333333333333334LL) {
          nn_fs_10de70_alt1(result);
        }
        v16 = (_QWORD*)SdkRoutine_85e050((char*)v14 - (char*)v13);
        *(_QWORD*)(v5 + 48) = v16;
        *(_QWORD*)(v5 + 56) = v16;
        *(_QWORD*)(v5 + 64) = (char*)v16 + v15;
        *(_QWORD*)(v5 + 56) = ATSParser_53b960(v5 + 64, v13, v14, v16);
        v13 = (__int64*)a2[6];
      }
      if (v13 != nullptr) {
        v17 = (__int64*)a2[7];
        v18 = v13;
        if (v13 != v17) {
          do {
            if ((*(_BYTE*)(v17 - 4) & 1) != 0) {
              SdkRoutine_857220(*(v17 - 2), *(v17 - 4) & 0xFFFFFFFFFFFFFFFELL);
            }
            nandroid_extractors_mp4_4f4ab0((__int64)(v17 - 8), *(v17 - 7));
            v17 -= 10;
          } while (v17 != v13);
          v18 = (__int64*)a2[6];
        }
        v19 = a2[8];
        a2[7] = (__int64)v13;
        SdkRoutine_857220(v18, v19 - (_QWORD)v18);
      }
      result = a2[3];
      if (result != 0) {
        v20 = a2[5];
        a2[4] = result;
        result = SdkRoutine_857220(result, v20 - result);
      }
      --v3;
      v5 += 72;
      a2 += 9;
    } while (v3 != 0);
  }
  return result;
}

__int64 ATSParser_53dd40(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  ATSParser_537600(a1);
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

__int64 ATSParser_53ddd0(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88b80 + 16;
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
