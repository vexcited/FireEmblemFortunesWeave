#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_4d3f20(__int64*, __int64);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 nandroid_AMessage_findBuffer_plt(__int64, const char*, __int64);
__int64 nandroid_AString_AString_plt_86d9f0(__int64);
__int64 nandroid_AString_AString_plt_86db80(__int64, const char*,
                                            unsigned __int64);
__int64 nandroid_AString_AString_plt_86dba0(__int64, __int64);
__int64 nandroid_AString_Destroy_AString_plt(__int64);
__int64 nandroid_AString_append_plt_86dbb0(__int64, __int64);
__int64 nandroid_AString_c_str_plt(__int64);
__int64 nandroid_ESDS_Destroy_ESDS_plt(__int64);
__int64 nandroid_ESDS_ESDS_plt(__int64, __int64, unsigned __int64);
__int64 nandroid_ESDS_InitCheck_plt(__int64);
__int64 nandroid_ESDS_getCodecSpecificInfo_plt(__int64, __int64, __int64);
__int64 nandroid_RefBase_decStrong_plt(__int64, __int64);
__int64 nn_movie_detail_AllocateMemory(unsigned __int64, __int64);
__int64 nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(__int64,
                                                                     int);
__int64 nn_movie_detail_ParseAvccCodecSpecificData_plt(__int64,
                                                       unsigned __int64,
                                                       __int64, __int64,
                                                       unsigned __int64);
extern void (*SdkData_e88350[490])();
extern void (*SdkData_e88370[486])();
extern void (*SdkData_e88378[485])();
void __attribute__((noreturn)) nn_fs_10de70();
void nn_movie_detail_FreeMemory(__int64, _DWORD*);
__int64 nn_movie_detail_4d6ac0(void* this_, __int64 a2, unsigned __int64 a3,
                               unsigned int a4);

__int64 nn_movie_detail_4d6ac0(void* this_, __int64 a2, unsigned __int64 a3,
                               unsigned int a4)
{
  void* v5;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  _DWORD* v12;
  __int64 v13;
  unsigned __int64 v14;
  void(__attribute__((noreturn)) * v15)();
  char* v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  char v22;
  unsigned __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  unsigned int v27;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned int v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _DWORD* v59;
  __int64 i;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  void* v68;
  unsigned int v69;
  unsigned __int64 v70;
  struct {
    __int64 v71;
    __int64 v72;
    __int64 v73;
  } v71_;
  unsigned __int64 v74;
  char* v75;
  struct {
    __int64 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
  } v76_;
  __int64 v83;
  struct {
    __int64 v84;
    unsigned __int64 v85;
    unsigned __int64 v86;
    _DWORD* v87;
  } v84_;
  __int64 v88[2];

  v5 = this_;
  v8 = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (__int64)this_ + 48, 17);
  if (v8 != 0 && (v8 & 0x3FFFFF) != 0x40100) {
    return v8;
  }
  {
    v10 = *((_QWORD*)v5 + 176);
    __asm__ volatile("" ::"r"(v10));
  }
  if (v10 == 0) {
    return 518912;
  }
  v9 = 261376;
  if ((a4 & 0x80000000) == 0 &&
      (signed int)a4 < (signed __int32)*((_DWORD*)v5 + 340)) {
    v88[0] = 0;
    if (a4 == 1) {
      if (*((_BYTE*)v5 + 1448) == 1 && (*((_BYTE*)v5 + 1449) & 1) != 0) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64))(
            *(_QWORD*)v10 + 128LL))((void*)(v88), v10, 1);
        goto LABEL_16;
      }
    }
    else if (a4 == 0) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, bool))(
          *(_QWORD*)v10 + 128LL))((void*)(v88), v10,
                                  (*((_BYTE*)v5 + 1448) & 1) == 0);
    LABEL_16:
      if (v88[0] == 0) {
        return 259840;
      }
      {
        v12 = *((_DWORD**)v5 + 171);
        __asm__ volatile("" ::"r"(v12));
      }
      v66 = a2;
      v67 = a3;
      v84_.v84 = 0;
      v84_.v85 = 0;
      v13 = 0;
      v14 = 0;
      v84_.v86 = 0;
      v84_.v87 = v12;
      v15 = SdkData_e88350[0];
      v68 = v5;
      while (1) {
        {
          v16 = *((const char**)v15 + v13);
          __asm__ volatile("" ::"r"(v16));
        }
        v83 = 0;
        if ((nandroid_AMessage_findBuffer_plt(v88[0], v16, (__int64)&v83) &
             1) == 0) {
          goto LABEL_68;
        }
        {
          v17 = *((_QWORD*)v15 + v13);
          __asm__ volatile("" ::"r"(v17));
        }
        if (v17 == *(_QWORD*)SdkData_e88378[0]) {
          v76_.v81 = 0;
          v76_.v82 = 0;
          v76_.v79 = 0;
          v76_.v80 = 0;
          {
            v20 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) + v83);
            __asm__ volatile("" ::"r"(v20));
          }
          {
            v21 = *(unsigned __int64*)((char*)&(*(void*(*)[1])0x18LL)[1] + v83);
            __asm__ volatile("" ::"r"(v21));
          }
          v76_.v77 = 0;
          v76_.v78 = 0;
          v76_.v76 = 0;
          nandroid_ESDS_ESDS_plt((__int64)&v76_.v76, v20, v21);
          if ((unsigned int)nandroid_ESDS_InitCheck_plt((__int64)&v76_.v76) ==
              0) {
            v74 = 0;
            v75 = nullptr;
            nandroid_ESDS_getCodecSpecificInfo_plt(
                (__int64)&v76_.v76, (__int64)&v75, (__int64)&v74);
            v44 = v74;
            v71_.v72 = 0;
            v71_.v73 = 0;
            v71_.v71 = 0;
            nandroid_AString_AString_plt_86db80((__int64)&v71_.v71, v75, v74);
            v45 = v84_.v85;
            if (v84_.v85 >= v84_.v86) {
              v70 = v14;
              v48 = v84_.v85 - v84_.v84;
              v49 = 1 - 0x5555555555555555LL *
                            ((__int64)(v84_.v85 - v84_.v84) >> 3);
              if (v49 > 0xAAAAAAAAAAAAAAALL) {
              LABEL_89:
                nn_fs_10de70();
              }
              if (0x5555555555555556LL * ((__int64)(v84_.v86 - v84_.v84) >> 3) >
                  v49) {
                v49 = 0x5555555555555556LL *
                      ((__int64)(v84_.v86 - v84_.v84) >> 3);
              }
              if (0xAAAAAAAAAAAAAAABLL *
                      ((__int64)(v84_.v86 - v84_.v84) >> 3) >=
                  0x555555555555555LL) {
                v50 = 0xAAAAAAAAAAAAAAALL;
              }
              else {
                v50 = v49;
              }
              v65 = 3 * v50;
              v51 = nn_movie_detail_AllocateMemory(24 * v50, (__int64)v84_.v87);
              v52 = v51 + v48;
              v53 = v51;
              nandroid_AString_AString_plt_86dba0(v51 + v48,
                                                  (__int64)&v71_.v71);
              v55 = v84_.v84;
              v54 = v84_.v85;
              v56 = v52 + v84_.v84 - v84_.v85;
              if (v84_.v85 != v84_.v84) {
                v57 = v84_.v84;
                v58 = v52 + v84_.v84 - v84_.v85;
                do {
                  nandroid_AString_AString_plt_86dba0(v58, v57);
                  v57 += 24;
                  v58 += 24;
                } while (v57 != v54);
                v5 = v68;
                do {
                  nandroid_AString_Destroy_AString_plt(v55);
                  v55 += 24;
                } while (v55 != v54);
                v55 = v84_.v84;
              }
              v14 = v70;
              v46 = v52 + 24;
              v84_.v84 = v56;
              v84_.v85 = v52 + 24;
              v84_.v86 = v53 + 8 * v65;
              if (v55 != 0) {
                nn_movie_detail_FreeMemory(v55, v84_.v87);
              }
              v15 = SdkData_e88350[0];
            }
            else {
              nandroid_AString_AString_plt_86dba0(v84_.v85, (__int64)&v71_.v71);
              v46 = v45 + 24;
            }
            v14 += v44;
            v84_.v85 = v46;
            nandroid_AString_Destroy_AString_plt((__int64)&v71_.v71);
            nandroid_ESDS_Destroy_ESDS_plt((__int64)&v76_.v76);
            goto LABEL_68;
          }
          nandroid_ESDS_Destroy_ESDS_plt((__int64)&v76_.v76);
          v22 = 0;
          v8 = 517376;
        }
        else {
          if (v17 != *(_QWORD*)SdkData_e88370[0]) {
            v76_.v77 = 0;
            v76_.v78 = 0;
            v76_.v76 = 0;
            nandroid_AString_AString_plt_86db80(
                (__int64)&v76_.v76,
                *(const char**)((char*)(*(void*(*)[1])0x18LL) + v83) +
                    *(__int64*)((char*)((__int64*)0x28LL) + v83),
                *(__int64*)((char*)((__int64*)0x28LL) + v83 + 8));
            v18 = v84_.v85;
            if (v84_.v85 >= v84_.v86) {
              v69 = v8;
              v31 = v84_.v85 - v84_.v84;
              v32 = 1 - 0x5555555555555555LL *
                            ((__int64)(v84_.v85 - v84_.v84) >> 3);
              if (v32 > 0xAAAAAAAAAAAAAAALL) {
                goto LABEL_89;
              }
              v33 = v14;
              if (0x5555555555555556LL * ((__int64)(v84_.v86 - v84_.v84) >> 3) >
                  v32) {
                v32 = 0x5555555555555556LL *
                      ((__int64)(v84_.v86 - v84_.v84) >> 3);
              }
              if (0xAAAAAAAAAAAAAAABLL *
                      ((__int64)(v84_.v86 - v84_.v84) >> 3) >=
                  0x555555555555555LL) {
                v34 = 0xAAAAAAAAAAAAAAALL;
              }
              else {
                v34 = v32;
              }
              v35 = 3 * v34;
              v36 = nn_movie_detail_AllocateMemory(24 * v34, (__int64)v84_.v87);
              v37 = v36 + v31;
              v38 = v36;
              nandroid_AString_AString_plt_86dba0(v36 + v31,
                                                  (__int64)&v76_.v76);
              v40 = v84_.v84;
              v39 = v84_.v85;
              v41 = v37 + v84_.v84 - v84_.v85;
              if (v84_.v85 != v84_.v84) {
                v42 = v84_.v84;
                v43 = v37 + v84_.v84 - v84_.v85;
                do {
                  nandroid_AString_AString_plt_86dba0(v43, v42);
                  v42 += 24;
                  v43 += 24;
                } while (v42 != v39);
                do {
                  nandroid_AString_Destroy_AString_plt(v40);
                  v40 += 24;
                } while (v40 != v39);
                v40 = v84_.v84;
              }
              v19 = v37 + 24;
              v14 = v33;
              v84_.v84 = v41;
              v84_.v85 = v37 + 24;
              v84_.v86 = v38 + 8 * v35;
              if (v40 != 0) {
                nn_movie_detail_FreeMemory(v40, v84_.v87);
              }
              v5 = v68;
              v8 = v69;
              v15 = SdkData_e88350[0];
            }
            else {
              nandroid_AString_AString_plt_86dba0(v84_.v85, (__int64)&v76_.v76);
              v19 = v18 + 24;
            }
            v84_.v85 = v19;
            v14 += *(__int64*)((char*)((__int64*)0x30LL) + v83);
          LABEL_48:
            nandroid_AString_Destroy_AString_plt((__int64)&v76_.v76);
          LABEL_68:
            v22 = 1;
            goto LABEL_69;
          }
          v76_.v77 = 0;
          v76_.v78 = 0;
          v76_.v76 = 0;
          nandroid_AString_AString_plt_86db80(
              (__int64)&v76_.v76,
              *(const char**)((char*)(*(void*(*)[1])0x18LL) + v83) +
                  *(__int64*)((char*)((__int64*)0x28LL) + v83),
              *(__int64*)((char*)((__int64*)0x28LL) + v83 + 8));
          {
            v23 = 2 * *(__int64*)((char*)((__int64*)0x30LL) + v83);
            __asm__ volatile("" ::"r"(v23));
          }
          v24 = nn_movie_detail_AllocateMemory(v23, *((_QWORD*)v5 + 171));
          if (v24 != 0) {
            v25 = (const char*)v24;
            v75 = nullptr;
            v26 = nandroid_AString_c_str_plt((__int64)&v76_.v76);
            v27 = nn_movie_detail_ParseAvccCodecSpecificData_plt(
                (__int64)v25, v23, (__int64)&v75, v26,
                *(__int64*)((char*)((__int64*)0x30LL) + v83));
            if (v27 == 0 || (v27 & 0x3FFFFF) == 262400) {
              v71_.v72 = 0;
              v71_.v73 = 0;
              v71_.v71 = 0;
              nandroid_AString_AString_plt_86db80((__int64)&v71_.v71, v25,
                                                  (unsigned __int64)v75);
              v29 = v84_.v85;
              v15 = SdkData_e88350[0];
              if (v84_.v85 >= v84_.v86) {
                v30 = SdkRoutine_4d3f20(&v84_.v84, (__int64)&v71_.v71);
              }
              else {
                nandroid_AString_AString_plt_86dba0(v84_.v85,
                                                    (__int64)&v71_.v71);
                v30 = v29 + 24;
              }
              {
                v59 = *((_DWORD**)v5 + 171);
                __asm__ volatile("" ::"r"(v59));
              }
              v84_.v85 = v30;
              v14 += (unsigned __int64)v75;
              nn_movie_detail_FreeMemory((__int64)v25, v59);
              nandroid_AString_Destroy_AString_plt((__int64)&v71_.v71);
              goto LABEL_48;
            }
            v47 = v27;
            nandroid_AString_Destroy_AString_plt((__int64)&v76_.v76);
            v22 = 0;
            v8 = v47;
            v15 = SdkData_e88350[0];
          }
          else {
            nandroid_AString_Destroy_AString_plt((__int64)&v76_.v76);
            v22 = 0;
            v15 = SdkData_e88350[0];
            v8 = 259840;
          }
        }
      LABEL_69:
        if (v83 != 0) {
          nandroid_RefBase_decStrong_plt(v83, (__int64)&v83);
        }
        if ((v22 & 1) == 0) {
          goto LABEL_82;
        }
        if (++v13 == 6) {
          if (v14 <= v67) {
            v76_.v77 = 0;
            v76_.v78 = 0;
            v76_.v76 = 0;
            nandroid_AString_AString_plt_86d9f0((__int64)&v76_.v76);
            for (i = v84_.v84; i != v84_.v85; i += 24) {
              nandroid_AString_append_plt_86dbb0((__int64)&v76_.v76, i);
            }
            v61 = nandroid_AString_c_str_plt((__int64)&v76_.v76);
            memcpy_plt(v66, v61, v14);
            nandroid_AString_Destroy_AString_plt((__int64)&v76_.v76);
            v8 = 0;
          }
          else {
            v8 = 262912;
          }
        LABEL_82:
          v62 = v84_.v84;
          if (v84_.v84 != 0) {
            v63 = v84_.v85;
            v64 = v84_.v84;
            if (v84_.v84 != v84_.v85) {
              do {
                v63 -= 24;
                nandroid_AString_Destroy_AString_plt(v63);
              } while (v63 != v62);
              v64 = v84_.v84;
            }
            v84_.v85 = v62;
            nn_movie_detail_FreeMemory(v64, v84_.v87);
          }
          if (v88[0] != 0) {
            nandroid_RefBase_decStrong_plt(v88[0], (__int64)v88);
          }
          return v8;
        }
      }
    }
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, _QWORD))(
        *(_QWORD*)v10 + 176LL))((void*)(v88), v10, a4 - *((_QWORD*)v5 + 183));
    goto LABEL_16;
  }
  return v9;
}

#pragma GCC visibility pop
