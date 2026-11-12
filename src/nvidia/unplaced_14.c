#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* NgxRoutine_bf700(_QWORD* result);
_QWORD* NgxRoutine_cf600(__int64, _QWORD**, _QWORD*, _DWORD*, __int64);
_QWORD* NgxRoutine_cf800(__int64, _QWORD*, _QWORD*, _DWORD*, __int64);
_QWORD* NgxRoutine_d5990(_QWORD*, unsigned __int64, __int64);
__attribute__((swiftcall)) void nvidia_be650(PSEUDO_X8, __int64);
__int64* NgxRoutine_bf140(__int64*, unsigned __int64, unsigned int);
__int64* NgxRoutine_d3800(__int64*, unsigned __int64, __int64);
__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_bfa50(__int64, unsigned __int64, unsigned __int64, __int64,
                         __int64, __int64, __int64);
__int64 NgxRoutine_cfa00(_QWORD*, _QWORD*, _DWORD*, _QWORD*, int);
__int64 NgxRoutine_d0e80(__int64, __int64*, _QWORD*, _DWORD*, __int64);
__int64 NgxRoutine_d10a0(__int64, __int64*, _QWORD*, _DWORD*, __int64);
__int64 NgxRoutine_d12e0(_QWORD*, _QWORD*, _DWORD*, __int64, int);
__int64 NgxRoutine_d1ce0();
__int64 NgxRoutine_d1d00(_QWORD*, _QWORD*, char, __int64, __int16, _DWORD*,
                         bool*, __int64, __int64*, __int64*, __int64);
__int64 NgxRoutine_d4040(_QWORD*, _QWORD*, char, __int64, __int16, _DWORD*,
                         bool*, __int64, __int64*, __int64*, unsigned __int64);
__int64 NgxRoutine_d6370(char, char, __int64*, _DWORD*, _BYTE*, _BYTE*, _QWORD*,
                         _QWORD*, __int64, _DWORD*);
__int64 NgxRoutine_d65c0(__int64 result, __int64*, __int64*, __int16, __int64,
                         char*, _QWORD*, char, __int64, char, char,
                         unsigned __int8*, unsigned __int8*, unsigned __int8*,
                         int);
__int64 NgxRoutine_d6d40(__int64, __int64, __int64, __int64, __int64,
                         unsigned int);
__int64 NgxRoutine_d77e0(char, char, __int64*, _DWORD*, _DWORD*, _DWORD*,
                         _QWORD*, _QWORD*, __int64, _DWORD*);
__int64 NgxRoutine_d7a40(__int64 result, _QWORD*, __int64*, __int16,
                         unsigned int*, unsigned __int64, __int64, char,
                         __int64, int, int, unsigned __int8*, unsigned __int8*,
                         unsigned __int8*, int);
__int64 NgxRoutine_d7f40(__int64, __int64, __int64, __int64, __int64, int);
__int64 NgxRoutine_db240(__int64*);
__int64 NgxRoutine_dfc20(__int64*);
__int64 NgxRoutine_e0c40();
__int64 NgxRoutine_e1240(unsigned __int8*, unsigned __int8*, _DWORD*,
                         unsigned int);
__int64 NgxRoutine_e1380(unsigned __int8*, unsigned __int8*, _DWORD*,
                         unsigned int);
__int64 NgxRoutine_e2100(__int64, __int64, __int64, ...);
__int64 NgxRoutine_e21e0(unsigned __int64*, __int64, void (*)(__int64));
__int64 _Unwind_Resume_plt(_QWORD);
__int64 __cxa_guard_abort_plt(_QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 free_plt(_QWORD);
__int64 isdigit_l_plt(_QWORD, _QWORD);
__int64 isxdigit_l_plt(_QWORD, _QWORD);
__int64 malloc_plt(_QWORD);
__int64 memchr_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 newlocale_plt(_QWORD, _QWORD, _QWORD);
__int64 nvidia_c97d0_alt1(__int64) __asm__("nvidia_c97d0");
__int64 nvidia_e0c70(__int64, _BYTE*);
__int64 snprintf_plt(_QWORD, _QWORD, const char*, ...);
char* nvidia_e1af0(_WORD*, char*, unsigned __int64, unsigned int);
extern _UNKNOWN* NgxData_9511b8;
extern _UNKNOWN* NgxData_9511c0;
extern _UNKNOWN* NgxData_9511d0;
extern _UNKNOWN* NgxData_9511d8;
extern _UNKNOWN NgxData_2b89de8;
extern __int64 NgxData_2b89de0;
extern char* NgxData_9511c8;
unsigned __int64 NgxRoutine_e10f0(unsigned __int8*, unsigned __int8*, _DWORD*,
                                  unsigned int);
unsigned __int8* NgxRoutine_c0ac0(_QWORD**, _QWORD*, unsigned __int8*,
                                  unsigned __int8*, __int64, _DWORD*, char);
unsigned __int8* NgxRoutine_c52a0(_QWORD**, _QWORD*, unsigned __int8*,
                                  unsigned __int8*, __int64, _DWORD*, char);
void NgxRoutine_ca8c0();
void NgxRoutine_cc100();
void NgxRoutine_ce600();
void __attribute__((noreturn)) NgxRoutine_baf40(__int64);
void __attribute__((noreturn)) NgxRoutine_db120();
void __attribute__((noreturn)) NgxRoutine_e2320();
void __attribute__((noreturn)) nvidia_c2340(__int64 a1);
_QWORD* nvidia_c23a0(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     _DWORD* a6);
void __attribute__((noreturn)) nvidia_c2a00(__int64 a1);
_QWORD* nvidia_c2a60(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64* a6);
void __attribute__((noreturn)) nvidia_c30c0(__int64 a1);
_QWORD* nvidia_c3120(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64* a6);
void __attribute__((noreturn)) nvidia_c3780(__int64 a1);
void __attribute__((noreturn)) nvidia_c3da4(__int64 a1);
void __attribute__((noreturn)) nvidia_c43c4(__int64 a1);
void __attribute__((noreturn)) nvidia_c49e4(__int64 a1);
_QWORD* nvidia_c4ff0(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     char* a6);
void __attribute__((noreturn)) nvidia_c5238(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9);
void __attribute__((noreturn)) nvidia_c5d9c(__int64 a1);
void __attribute__((noreturn)) nvidia_c645c(__int64 a1);
void __attribute__((noreturn)) nvidia_c6b1c(__int64 a1);
void __attribute__((noreturn)) nvidia_c71dc(__int64 a1);
void __attribute__((noreturn)) nvidia_c789c(__int64 a1);
void __attribute__((noreturn)) nvidia_c7f5c(__int64 a1);
void __attribute__((noreturn)) nvidia_c8580(__int64 a1);
void __attribute__((noreturn)) nvidia_c8ba0(__int64 a1);
void __attribute__((noreturn)) nvidia_c91c0(__int64 a1);
__int64 nvidia_c9770(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                     __int64 a10, __int64 a11, __int64 a12);
__int64 nvidia_c97d0(__int64 a1, __int64 a2, _BYTE* a3, _BYTE* a4);
__int64 nvidia_c9be0(__int64 a1, __int64 a2, _DWORD* a3, _DWORD* a4);
__int64 nvidia_c9fe0(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4, char a5);
__int64 nvidia_ca220(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                     unsigned __int64 a5);
__int64 nvidia_ca54c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9);
__int64 nvidia_ca88c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9);
__int64 nvidia_cab90(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                     unsigned __int64 a5);
void __attribute__((noreturn)) nvidia_cb280(__int64 a1);
void __attribute__((noreturn)) nvidia_cb75c(__int64 a1);
__int64 nvidia_cb820(__int64 a1, __int64 a2, __int64 a3);
__int64 nvidia_cb860(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4, char a5);
__int64 nvidia_cba24(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                     __int64 a10, __int64 a11, __int64 a12);
__int64 nvidia_cbd9c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9);
__int64 nvidia_cc0dc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9);
__int64 nvidia_cc3f0(__int64 a1, __int64 a2, __int64 a3, int a4,
                     unsigned __int64 a5);
void __attribute__((noreturn)) nvidia_ccb00(__int64 a1);
void __attribute__((noreturn)) nvidia_ccfdc(__int64 a1);
__int64 nvidia_cd0a0(__int64 a1, __int64 a2, __int64 a3);
__int64 nvidia_cd0e0(unsigned __int8* a1, unsigned __int8* a2,
                     unsigned __int8* a3, __int64 a4, _QWORD* a5, _QWORD* a6,
                     __int64* a7);
__int64 nvidia_cd500(unsigned __int8* a1, __int64 a2, unsigned __int8* a3,
                     unsigned __int64 a4, unsigned __int64* a5,
                     unsigned __int64* a6, __int64* a7);
__int64 nvidia_cdb60(unsigned __int8* a1, unsigned __int8* a2,
                     unsigned __int8* a3, __int64 a4, _QWORD* a5, _QWORD* a6,
                     __int64* a7);
__int64 nvidia_cdfa0(unsigned __int8* a1, __int64 a2, unsigned __int8* a3,
                     __int64 a4, __int64* a5, __int64* a6, __int64* a7);
_QWORD* nvidia_ce5ac(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                     __int64 a10, __int64 a11, __int64 a12, __int64 a13,
                     __int64 a14, __int64 a15, __int64 a16);
__int64 nvidia_ceb20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6);
_QWORD* nvidia_cebf0(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64 a6);
_QWORD* nvidia_ced50(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64 a6);
__int64 nvidia_ceea0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64 a6);
_QWORD* nvidia_cefc0(__int64 (***a1)(_QWORD), _QWORD* a2, _QWORD* a3,
                     __int64 a4, int* a5, int* a6, char a7);
_QWORD* nvidia_cfd80(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64 a6, unsigned int* a7, unsigned int* a8);
_QWORD* nvidia_d0410(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64 a6);
_QWORD* nvidia_d0570(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64 a6);
__int64 nvidia_d06c0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64 a6);
_QWORD* nvidia_d07e0(__int64 (***a1)(_QWORD), _QWORD* a2, _QWORD* a3,
                     __int64 a4, int* a5, int* a6, char a7);
void __attribute__((noreturn)) nvidia_d0e64(__int64 a1);
void __attribute__((noreturn)) nvidia_d18f8(__int64 a1);
__attribute__((swiftcall)) void nvidia_d1920(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void nvidia_d1930(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void nvidia_d1950(PSEUDO_X8 x8_);
void __attribute__((noreturn)) nvidia_d1c74(__int64 a1);
_QWORD* nvidia_d33c0(__int64 a1, _QWORD* a2, _QWORD* a3, char a4, __int64 a5,
                     _DWORD* a6, unsigned __int8* a7);
void __attribute__((noreturn))
nvidia_d5510(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
             __int64 a16, __int64 a17, __int64 a18, void (*a19)(__int64),
             __int64 a20, __int64 a21, __int64 a22, __int64 a23, __int64 a24,
             __int64 a25, __int64 a26, __int64 a27, __int64 a28, __int64 a29,
             __int64 a30, __int64 a31, __int64 a32, __int64 a33, __int64 a34,
             __int64 a35, __int64 a36, __int64 a37, __int64 a38, __int64 a39,
             __int64 a40, __int64 a41);
_QWORD* nvidia_d5660(__int64 a1, _QWORD* a2, _QWORD* a3, char a4, __int64 a5,
                     _DWORD* a6, unsigned __int8* a7);
__int64 nvidia_d5e80(long double a1, __int64 a2, __int64 a3, char a4,
                     __int64 a5, unsigned int a6);
void __attribute__((noreturn))
nvidia_d6260(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
             __int64 a16, __int64 a17, __int64 a18, __int64 a19, __int64 a20,
             __int64 a21, __int64 a22, __int64 a23, __int64 a24, __int64 a25,
             __int64 a26, __int64 a27, __int64 a28, __int64 a29, __int64 a30,
             __int64 a31, __int64 a32, __int64 a33, __int64 a34, __int64 a35,
             __int64 a36, __int64 a37, __int64 a38, __int64 a39, __int64 a40,
             __int64 a41, __int64 a42, __int64 a43);
__int64 nvidia_d6ee0(__int64 a1, __int64 a2, char a3, __int64 a4,
                     unsigned int a5, unsigned __int8* a6);
__int64 nvidia_d72d0(long double a1, __int64 a2, __int64 a3, char a4,
                     __int64 a5, int a6);
__int64 nvidia_d8138(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                     __int64 a10, __int64 a11, __int64 a12);

void __attribute__((noreturn)) nvidia_c2340(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 48),
                   *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 24),
                 *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

_QWORD* nvidia_c23a0(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     _DWORD* a6)
{
  __int64 v6;
  int v10;
  int v11;
  _BYTE* v12;
  int v13;
  unsigned __int8* v14;
  unsigned __int8* v15;
  char* v16;
  _BOOL4 v17;
  int v18;
  int v19;
  __int64 v20;
  unsigned __int8* v21;
  __int64 v22;
  int v23;
  unsigned __int8* v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  int v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v33;
  char* v34;
  __int64 v35;
  unsigned int v36;
  unsigned __int64 v37;
  int v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  int v41;
  _DWORD* v42;
  int* v43;
  int* v44;
  int v45;
  _BYTE* v47;
  __int64 v48;
  _DWORD* v49;
  _BYTE* v50;
  int v51;
  unsigned int v52;
  _BOOL4 v53;
  int v55;
  unsigned int v58;
  unsigned __int8* v59;
  _BYTE v60[4];
  int v61;
  struct {
    __int64 v62;
    __int64 v63;
    unsigned __int8* v64;
  } v62_;
  _QWORD v65[3];
  struct {
    char gap256_[4];
    char v66[12];
    __int64 v67;
  } v66_;

  v66_.v67 = v6;
  v10 = *(_DWORD*)(a4 + 8) & 0x4A;
  if (v10 != 0) {
    if (v10 == 64) {
      v11 = 8;
    }
    else if (v10 == 8) {
      v11 = 16;
    }
    else {
      v11 = 10;
    }
    v58 = v11;
  }
  else {
    v58 = 0;
  }
  nvidia_e0c70(a4, v66_.v66);
  v62_.v63 = 0;
  v62_.v64 = nullptr;
  v62_.v62 = 0;
  NgxRoutine_bf140(&v62_.v62, 0x16u, 0);
  v12 = v60;
  v13 = 0;
  v59 = (unsigned __int8*)&v62_.v62 + 1;
  if ((v62_.v62 & 1) != 0) {
    v14 = v62_.v64;
  }
  else {
    v14 = (unsigned __int8*)&v62_.v62 + 1;
  }
  v15 = v14;
  v16 = NgxData_9511c8;
  while (1) {
    if (a2 != nullptr) {
      if (a2[3] == a2[4]) {
        v18 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
        v17 = v18 == -1;
        if (v18 == -1) {
          a2 = nullptr;
        }
      }
      else {
        v17 = false;
      }
    }
    else {
      v17 = true;
    }
    if (a3 == nullptr) {
      if (v17) {
        break;
      }
      goto LABEL_29;
    }
    if (a3[3] != a3[4]) {
      if (!v17) {
        break;
      }
      goto LABEL_29;
    }
    v19 = (*(__int64 (**)(_QWORD*))(*a3 + 72LL))(a3);
    if (v19 == -1) {
      a3 = nullptr;
    }
    if (((v17 ^ (v19 == -1)) & 1) == 0) {
      break;
    }
  LABEL_29:
    if ((v62_.v62 & 1) != 0) {
      v20 = v62_.v63;
    }
    else {
      v20 = (unsigned __int64)(unsigned __int8)v62_.v62 >> 1;
    }
    if (v14 == &v15[v20]) {
      if (v20 < 1) {
        if ((v62_.v62 & 1) != 0) {
          v24 = v62_.v64;
          v62_.v63 = 2 * v20;
        }
        else {
          LOBYTE(v62_.v62) = 4 * v20;
          v24 = v59;
        }
        v24[2 * v20] = 0;
      }
      else {
        NgxRoutine_bf140(&v62_.v62, v20, 0);
      }
      v25 = v62_.v63;
      v26 = 22;
      if ((v62_.v62 & 1) != 0) {
        v26 = (v62_.v62 & 0xFFFFFFFFFFFFFFFELL) - 1;
      }
      else {
        v25 = (unsigned __int8)v62_.v62 >> 1;
      }
      if (v26 > v25) {
        NgxRoutine_bf140(&v62_.v62, v26 - v25, 0);
        v15 = v59;
        if ((v62_.v62 & 1) == 0) {
          goto LABEL_48;
        }
      LABEL_47:
        v15 = v62_.v64;
        goto LABEL_48;
      }
      if ((v62_.v62 & 1) != 0) {
        v62_.v63 = v26;
        v62_.v64[v26] = 0;
        v15 = v59;
        if ((v62_.v62 & 1) != 0) {
          goto LABEL_47;
        }
      }
      else {
        LOBYTE(v62_.v62) = 2 * v26;
        v59[v26] = 0;
        v15 = v59;
        if ((v62_.v62 & 1) != 0) {
          goto LABEL_47;
        }
      }
    LABEL_48:
      v14 = &v15[v20];
      v21 = (unsigned __int8*)a2[3];
      if (v21 == (unsigned __int8*)a2[4]) {
        goto LABEL_49;
      }
    LABEL_34:
      v22 = *v21;
      v23 = (unsigned __int8)v66_.v66[0];
      if (v14 == v15) {
        goto LABEL_50;
      }
    LABEL_54:
      v28 = v65[1];
      v29 = v65[0] & 1;
      v30 = (unsigned __int64)LOBYTE(v65[0]) >> 1;
      if (v29 != 0) {
        v31 = v65[1];
      }
      else {
        v31 = (unsigned __int64)LOBYTE(v65[0]) >> 1;
      }
      if ((_DWORD)v22 != v23 || v31 == 0) {
        v33 = memchr_plt(v16, v22, 26);
        v34 = v16 + 26;
        if (v33 != 0) {
          v34 = (char*)v33;
        }
        v35 = v34 - v16;
        if (v35 > 23) {
          goto LABEL_88;
        }
        v36 = v58;
        if (v58 == 8) {
          goto LABEL_68;
        }
        if (v58 != 16) {
          if (v58 == 10) {
          LABEL_68:
            if (v35 >= v58) {
              goto LABEL_89;
            }
          }
        LABEL_79:
          ++v13;
          *v14++ = v16[v35];
        LABEL_80:
          v27 = a2[3];
          if (v27 == a2[4]) {
            goto LABEL_81;
          }
          goto LABEL_13;
        }
        if (v35 < 22) {
          goto LABEL_79;
        }
        if (v14 == v15 || v14 - v15 > 2 || *(v14 - 1) != 48) {
          goto LABEL_88;
        }
        v13 = 0;
        *v14++ = v16[v35];
        v27 = a2[3];
        if (v27 != a2[4]) {
          goto LABEL_13;
        }
      }
      else {
        if (v12 - v60 > 159) {
          goto LABEL_80;
        }
        *(_DWORD*)v12 = v13;
        v12 += 4;
        v13 = 0;
        v27 = a2[3];
        if (v27 != a2[4]) {
          goto LABEL_13;
        }
      }
    LABEL_81:
      (*(void (**)(_QWORD*))(*a2 + 80LL))(a2);
    }
    else {
      v21 = (unsigned __int8*)a2[3];
      if (v21 != (unsigned __int8*)a2[4]) {
        goto LABEL_34;
      }
    LABEL_49:
      v22 = (*(unsigned __int8 (**)(_QWORD*))(*a2 + 72LL))(a2);
      v23 = (unsigned __int8)v66_.v66[0];
      if (v14 != v15) {
        goto LABEL_54;
      }
    LABEL_50:
      if ((_DWORD)v22 != 45 && (_DWORD)v22 != 43) {
        goto LABEL_54;
      }
      v13 = 0;
      *v14++ = v22;
      v27 = a2[3];
      if (v27 == a2[4]) {
        goto LABEL_81;
      }
    LABEL_13:
      a2[3] = v27 + 1;
    }
  }
  v28 = v65[1];
  v29 = v65[0] & 1;
  v30 = (unsigned __int64)LOBYTE(v65[0]) >> 1;
LABEL_88:
  v36 = v58;
LABEL_89:
  if (v29 != 0) {
    v37 = v28;
  }
  else {
    v37 = v30;
  }
  if (v37 != 0 && v12 - v60 <= 159) {
    *(_DWORD*)v12 = v13;
    v12 += 4;
  }
  v38 = NgxRoutine_e10f0(v15, v14, a5, v36);
  v39 = LOBYTE(v65[0]);
  *a6 = v38;
  v40 = v65[1];
  v41 = v39 & 1;
  if ((v39 & 1) == 0) {
    v40 = v39 >> 1;
  }
  if (v12 - v60 >= 5 && v40 != 0) {
    v42 = v12 - 4;
    if (v60 != v12 && v60 < v12 - 4) {
      v43 = (int*)(v12 - 4);
      v44 = &v61;
      do {
        v45 = *(v44 - 1);
        *(v44 - 1) = *v43;
        *v43-- = v45;
      } while (v44++ < v43);
      LODWORD(v39) = LOBYTE(v65[0]);
      v41 = v65[0] & 1;
    }
    v47 = (_BYTE*)v65[2];
    if (v41 == 0) {
      v47 = (char*)v65 + 1;
    }
    if (v60 >= (_BYTE*)v42) {
    LABEL_118:
      v52 = (unsigned __int8)*v47;
      if (*v47 != 0 && v52 != 255 && *v42 - 1 >= v52) {
        goto LABEL_121;
      }
    }
    else {
      v48 = (unsigned int)v39 >> 1;
      if (v41 != 0) {
        v48 = v65[1];
      }
      v49 = v60;
      v50 = &v47[v48];
      while (1) {
        v51 = (unsigned __int8)*v47;
        if (*v47 != 0 && v51 != 255 && *v49 != v51) {
          break;
        }
        ++v49;
        if (v50 - v47 > 1) {
          ++v47;
        }
        if (v49 >= v42) {
          goto LABEL_118;
        }
      }
    LABEL_121:
      *a5 = 4;
    }
  }
  if (a2 == nullptr) {
    v53 = true;
    if (a3 == nullptr) {
      goto LABEL_138;
    }
    goto LABEL_127;
  }
  if (a2[3] == a2[4]) {
    v55 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
    v53 = v55 == -1;
    if (v55 == -1) {
      a2 = nullptr;
    }
    if (a3 != nullptr) {
      goto LABEL_127;
    }
  LABEL_138:
    if (!v53) {
      goto LABEL_130;
    }
  LABEL_129:
    *a5 |= 2u;
    goto LABEL_130;
  }
  v53 = false;
  if (a3 == nullptr) {
    goto LABEL_138;
  }
LABEL_127:
  if (a3[3] == a3[4]) {
    if (((v53 ^ ((*(unsigned int (**)(_QWORD*))(*a3 + 72LL))(a3) == -1)) & 1) !=
        0) {
      goto LABEL_130;
    }
    goto LABEL_129;
  }
  if (!v53) {
    goto LABEL_129;
  }
LABEL_130:
  if ((v62_.v62 & 1) != 0) {
    NgxRoutine_430(v62_.v64, v62_.v62 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((v65[0] & 1) != 0) {
    NgxRoutine_430(v65[2], v65[0] & 0xFFFFFFFFFFFFFFFELL);
  }
  return a2;
}

void __attribute__((noreturn)) nvidia_c2a00(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 48),
                   *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 24),
                 *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

_QWORD* nvidia_c2a60(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64* a6)
{
  __int64 v6;
  int v10;
  int v11;
  _BYTE* v12;
  int v13;
  unsigned __int8* v14;
  unsigned __int8* v15;
  char* v16;
  _BOOL4 v17;
  int v18;
  int v19;
  __int64 v20;
  unsigned __int8* v21;
  __int64 v22;
  int v23;
  unsigned __int8* v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  int v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v33;
  char* v34;
  __int64 v35;
  unsigned int v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  int v41;
  _DWORD* v42;
  int* v43;
  int* v44;
  int v45;
  _BYTE* v47;
  __int64 v48;
  _DWORD* v49;
  _BYTE* v50;
  int v51;
  unsigned int v52;
  _BOOL4 v53;
  int v55;
  unsigned int v58;
  unsigned __int8* v59;
  _BYTE v60[4];
  int v61;
  struct {
    __int64 v62;
    __int64 v63;
    unsigned __int8* v64;
  } v62_;
  _QWORD v65[3];
  struct {
    char gap256_[4];
    char v66[12];
    __int64 v67;
  } v66_;

  v66_.v67 = v6;
  v10 = *(_DWORD*)(a4 + 8) & 0x4A;
  if (v10 != 0) {
    if (v10 == 64) {
      v11 = 8;
    }
    else if (v10 == 8) {
      v11 = 16;
    }
    else {
      v11 = 10;
    }
    v58 = v11;
  }
  else {
    v58 = 0;
  }
  nvidia_e0c70(a4, v66_.v66);
  v62_.v63 = 0;
  v62_.v64 = nullptr;
  v62_.v62 = 0;
  NgxRoutine_bf140(&v62_.v62, 0x16u, 0);
  v12 = v60;
  v13 = 0;
  v59 = (unsigned __int8*)&v62_.v62 + 1;
  if ((v62_.v62 & 1) != 0) {
    v14 = v62_.v64;
  }
  else {
    v14 = (unsigned __int8*)&v62_.v62 + 1;
  }
  v15 = v14;
  v16 = NgxData_9511c8;
  while (1) {
    if (a2 != nullptr) {
      if (a2[3] == a2[4]) {
        v18 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
        v17 = v18 == -1;
        if (v18 == -1) {
          a2 = nullptr;
        }
      }
      else {
        v17 = false;
      }
    }
    else {
      v17 = true;
    }
    if (a3 == nullptr) {
      if (v17) {
        break;
      }
      goto LABEL_29;
    }
    if (a3[3] != a3[4]) {
      if (!v17) {
        break;
      }
      goto LABEL_29;
    }
    v19 = (*(__int64 (**)(_QWORD*))(*a3 + 72LL))(a3);
    if (v19 == -1) {
      a3 = nullptr;
    }
    if (((v17 ^ (v19 == -1)) & 1) == 0) {
      break;
    }
  LABEL_29:
    if ((v62_.v62 & 1) != 0) {
      v20 = v62_.v63;
    }
    else {
      v20 = (unsigned __int64)(unsigned __int8)v62_.v62 >> 1;
    }
    if (v14 == &v15[v20]) {
      if (v20 < 1) {
        if ((v62_.v62 & 1) != 0) {
          v24 = v62_.v64;
          v62_.v63 = 2 * v20;
        }
        else {
          LOBYTE(v62_.v62) = 4 * v20;
          v24 = v59;
        }
        v24[2 * v20] = 0;
      }
      else {
        NgxRoutine_bf140(&v62_.v62, v20, 0);
      }
      v25 = v62_.v63;
      v26 = 22;
      if ((v62_.v62 & 1) != 0) {
        v26 = (v62_.v62 & 0xFFFFFFFFFFFFFFFELL) - 1;
      }
      else {
        v25 = (unsigned __int8)v62_.v62 >> 1;
      }
      if (v26 > v25) {
        NgxRoutine_bf140(&v62_.v62, v26 - v25, 0);
        v15 = v59;
        if ((v62_.v62 & 1) == 0) {
          goto LABEL_48;
        }
      LABEL_47:
        v15 = v62_.v64;
        goto LABEL_48;
      }
      if ((v62_.v62 & 1) != 0) {
        v62_.v63 = v26;
        v62_.v64[v26] = 0;
        v15 = v59;
        if ((v62_.v62 & 1) != 0) {
          goto LABEL_47;
        }
      }
      else {
        LOBYTE(v62_.v62) = 2 * v26;
        v59[v26] = 0;
        v15 = v59;
        if ((v62_.v62 & 1) != 0) {
          goto LABEL_47;
        }
      }
    LABEL_48:
      v14 = &v15[v20];
      v21 = (unsigned __int8*)a2[3];
      if (v21 == (unsigned __int8*)a2[4]) {
        goto LABEL_49;
      }
    LABEL_34:
      v22 = *v21;
      v23 = (unsigned __int8)v66_.v66[0];
      if (v14 == v15) {
        goto LABEL_50;
      }
    LABEL_54:
      v28 = v65[1];
      v29 = v65[0] & 1;
      v30 = (unsigned __int64)LOBYTE(v65[0]) >> 1;
      if (v29 != 0) {
        v31 = v65[1];
      }
      else {
        v31 = (unsigned __int64)LOBYTE(v65[0]) >> 1;
      }
      if ((_DWORD)v22 != v23 || v31 == 0) {
        v33 = memchr_plt(v16, v22, 26);
        v34 = v16 + 26;
        if (v33 != 0) {
          v34 = (char*)v33;
        }
        v35 = v34 - v16;
        if (v35 > 23) {
          goto LABEL_88;
        }
        v36 = v58;
        if (v58 == 8) {
          goto LABEL_68;
        }
        if (v58 != 16) {
          if (v58 == 10) {
          LABEL_68:
            if (v35 >= v58) {
              goto LABEL_89;
            }
          }
        LABEL_79:
          ++v13;
          *v14++ = v16[v35];
        LABEL_80:
          v27 = a2[3];
          if (v27 == a2[4]) {
            goto LABEL_81;
          }
          goto LABEL_13;
        }
        if (v35 < 22) {
          goto LABEL_79;
        }
        if (v14 == v15 || v14 - v15 > 2 || *(v14 - 1) != 48) {
          goto LABEL_88;
        }
        v13 = 0;
        *v14++ = v16[v35];
        v27 = a2[3];
        if (v27 != a2[4]) {
          goto LABEL_13;
        }
      }
      else {
        if (v12 - v60 > 159) {
          goto LABEL_80;
        }
        *(_DWORD*)v12 = v13;
        v12 += 4;
        v13 = 0;
        v27 = a2[3];
        if (v27 != a2[4]) {
          goto LABEL_13;
        }
      }
    LABEL_81:
      (*(void (**)(_QWORD*))(*a2 + 80LL))(a2);
    }
    else {
      v21 = (unsigned __int8*)a2[3];
      if (v21 != (unsigned __int8*)a2[4]) {
        goto LABEL_34;
      }
    LABEL_49:
      v22 = (*(unsigned __int8 (**)(_QWORD*))(*a2 + 72LL))(a2);
      v23 = (unsigned __int8)v66_.v66[0];
      if (v14 != v15) {
        goto LABEL_54;
      }
    LABEL_50:
      if ((_DWORD)v22 != 45 && (_DWORD)v22 != 43) {
        goto LABEL_54;
      }
      v13 = 0;
      *v14++ = v22;
      v27 = a2[3];
      if (v27 == a2[4]) {
        goto LABEL_81;
      }
    LABEL_13:
      a2[3] = v27 + 1;
    }
  }
  v28 = v65[1];
  v29 = v65[0] & 1;
  v30 = (unsigned __int64)LOBYTE(v65[0]) >> 1;
LABEL_88:
  v36 = v58;
LABEL_89:
  if (v29 != 0) {
    v37 = v28;
  }
  else {
    v37 = v30;
  }
  if (v37 != 0 && v12 - v60 <= 159) {
    *(_DWORD*)v12 = v13;
    v12 += 4;
  }
  v38 = NgxRoutine_e1240(v15, v14, a5, v36);
  v39 = LOBYTE(v65[0]);
  *a6 = v38;
  v40 = v65[1];
  v41 = v39 & 1;
  if ((v39 & 1) == 0) {
    v40 = v39 >> 1;
  }
  if (v12 - v60 >= 5 && v40 != 0) {
    v42 = v12 - 4;
    if (v60 != v12 && v60 < v12 - 4) {
      v43 = (int*)(v12 - 4);
      v44 = &v61;
      do {
        v45 = *(v44 - 1);
        *(v44 - 1) = *v43;
        *v43-- = v45;
      } while (v44++ < v43);
      LODWORD(v39) = LOBYTE(v65[0]);
      v41 = v65[0] & 1;
    }
    v47 = (_BYTE*)v65[2];
    if (v41 == 0) {
      v47 = (char*)v65 + 1;
    }
    if (v60 >= (_BYTE*)v42) {
    LABEL_118:
      v52 = (unsigned __int8)*v47;
      if (*v47 != 0 && v52 != 255 && *v42 - 1 >= v52) {
        goto LABEL_121;
      }
    }
    else {
      v48 = (unsigned int)v39 >> 1;
      if (v41 != 0) {
        v48 = v65[1];
      }
      v49 = v60;
      v50 = &v47[v48];
      while (1) {
        v51 = (unsigned __int8)*v47;
        if (*v47 != 0 && v51 != 255 && *v49 != v51) {
          break;
        }
        ++v49;
        if (v50 - v47 > 1) {
          ++v47;
        }
        if (v49 >= v42) {
          goto LABEL_118;
        }
      }
    LABEL_121:
      *a5 = 4;
    }
  }
  if (a2 == nullptr) {
    v53 = true;
    if (a3 == nullptr) {
      goto LABEL_138;
    }
    goto LABEL_127;
  }
  if (a2[3] == a2[4]) {
    v55 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
    v53 = v55 == -1;
    if (v55 == -1) {
      a2 = nullptr;
    }
    if (a3 != nullptr) {
      goto LABEL_127;
    }
  LABEL_138:
    if (!v53) {
      goto LABEL_130;
    }
  LABEL_129:
    *a5 |= 2u;
    goto LABEL_130;
  }
  v53 = false;
  if (a3 == nullptr) {
    goto LABEL_138;
  }
LABEL_127:
  if (a3[3] == a3[4]) {
    if (((v53 ^ ((*(unsigned int (**)(_QWORD*))(*a3 + 72LL))(a3) == -1)) & 1) !=
        0) {
      goto LABEL_130;
    }
    goto LABEL_129;
  }
  if (!v53) {
    goto LABEL_129;
  }
LABEL_130:
  if ((v62_.v62 & 1) != 0) {
    NgxRoutine_430(v62_.v64, v62_.v62 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((v65[0] & 1) != 0) {
    NgxRoutine_430(v65[2], v65[0] & 0xFFFFFFFFFFFFFFFELL);
  }
  return a2;
}

void __attribute__((noreturn)) nvidia_c30c0(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 48),
                   *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 24),
                 *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

_QWORD* nvidia_c3120(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64* a6)
{
  __int64 v6;
  int v10;
  int v11;
  _BYTE* v12;
  int v13;
  unsigned __int8* v14;
  unsigned __int8* v15;
  char* v16;
  _BOOL4 v17;
  int v18;
  int v19;
  __int64 v20;
  unsigned __int8* v21;
  __int64 v22;
  int v23;
  unsigned __int8* v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  int v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v33;
  char* v34;
  __int64 v35;
  unsigned int v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  int v41;
  _DWORD* v42;
  int* v43;
  int* v44;
  int v45;
  _BYTE* v47;
  __int64 v48;
  _DWORD* v49;
  _BYTE* v50;
  int v51;
  unsigned int v52;
  _BOOL4 v53;
  int v55;
  unsigned int v58;
  unsigned __int8* v59;
  _BYTE v60[4];
  int v61;
  struct {
    __int64 v62;
    __int64 v63;
    unsigned __int8* v64;
  } v62_;
  _QWORD v65[3];
  struct {
    char gap256_[4];
    char v66[12];
    __int64 v67;
  } v66_;

  v66_.v67 = v6;
  v10 = *(_DWORD*)(a4 + 8) & 0x4A;
  if (v10 != 0) {
    if (v10 == 64) {
      v11 = 8;
    }
    else if (v10 == 8) {
      v11 = 16;
    }
    else {
      v11 = 10;
    }
    v58 = v11;
  }
  else {
    v58 = 0;
  }
  nvidia_e0c70(a4, v66_.v66);
  v62_.v63 = 0;
  v62_.v64 = nullptr;
  v62_.v62 = 0;
  NgxRoutine_bf140(&v62_.v62, 0x16u, 0);
  v12 = v60;
  v13 = 0;
  v59 = (unsigned __int8*)&v62_.v62 + 1;
  if ((v62_.v62 & 1) != 0) {
    v14 = v62_.v64;
  }
  else {
    v14 = (unsigned __int8*)&v62_.v62 + 1;
  }
  v15 = v14;
  v16 = NgxData_9511c8;
  while (1) {
    if (a2 != nullptr) {
      if (a2[3] == a2[4]) {
        v18 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
        v17 = v18 == -1;
        if (v18 == -1) {
          a2 = nullptr;
        }
      }
      else {
        v17 = false;
      }
    }
    else {
      v17 = true;
    }
    if (a3 == nullptr) {
      if (v17) {
        break;
      }
      goto LABEL_29;
    }
    if (a3[3] != a3[4]) {
      if (!v17) {
        break;
      }
      goto LABEL_29;
    }
    v19 = (*(__int64 (**)(_QWORD*))(*a3 + 72LL))(a3);
    if (v19 == -1) {
      a3 = nullptr;
    }
    if (((v17 ^ (v19 == -1)) & 1) == 0) {
      break;
    }
  LABEL_29:
    if ((v62_.v62 & 1) != 0) {
      v20 = v62_.v63;
    }
    else {
      v20 = (unsigned __int64)(unsigned __int8)v62_.v62 >> 1;
    }
    if (v14 == &v15[v20]) {
      if (v20 < 1) {
        if ((v62_.v62 & 1) != 0) {
          v24 = v62_.v64;
          v62_.v63 = 2 * v20;
        }
        else {
          LOBYTE(v62_.v62) = 4 * v20;
          v24 = v59;
        }
        v24[2 * v20] = 0;
      }
      else {
        NgxRoutine_bf140(&v62_.v62, v20, 0);
      }
      v25 = v62_.v63;
      v26 = 22;
      if ((v62_.v62 & 1) != 0) {
        v26 = (v62_.v62 & 0xFFFFFFFFFFFFFFFELL) - 1;
      }
      else {
        v25 = (unsigned __int8)v62_.v62 >> 1;
      }
      if (v26 > v25) {
        NgxRoutine_bf140(&v62_.v62, v26 - v25, 0);
        v15 = v59;
        if ((v62_.v62 & 1) == 0) {
          goto LABEL_48;
        }
      LABEL_47:
        v15 = v62_.v64;
        goto LABEL_48;
      }
      if ((v62_.v62 & 1) != 0) {
        v62_.v63 = v26;
        v62_.v64[v26] = 0;
        v15 = v59;
        if ((v62_.v62 & 1) != 0) {
          goto LABEL_47;
        }
      }
      else {
        LOBYTE(v62_.v62) = 2 * v26;
        v59[v26] = 0;
        v15 = v59;
        if ((v62_.v62 & 1) != 0) {
          goto LABEL_47;
        }
      }
    LABEL_48:
      v14 = &v15[v20];
      v21 = (unsigned __int8*)a2[3];
      if (v21 == (unsigned __int8*)a2[4]) {
        goto LABEL_49;
      }
    LABEL_34:
      v22 = *v21;
      v23 = (unsigned __int8)v66_.v66[0];
      if (v14 == v15) {
        goto LABEL_50;
      }
    LABEL_54:
      v28 = v65[1];
      v29 = v65[0] & 1;
      v30 = (unsigned __int64)LOBYTE(v65[0]) >> 1;
      if (v29 != 0) {
        v31 = v65[1];
      }
      else {
        v31 = (unsigned __int64)LOBYTE(v65[0]) >> 1;
      }
      if ((_DWORD)v22 != v23 || v31 == 0) {
        v33 = memchr_plt(v16, v22, 26);
        v34 = v16 + 26;
        if (v33 != 0) {
          v34 = (char*)v33;
        }
        v35 = v34 - v16;
        if (v35 > 23) {
          goto LABEL_88;
        }
        v36 = v58;
        if (v58 == 8) {
          goto LABEL_68;
        }
        if (v58 != 16) {
          if (v58 == 10) {
          LABEL_68:
            if (v35 >= v58) {
              goto LABEL_89;
            }
          }
        LABEL_79:
          ++v13;
          *v14++ = v16[v35];
        LABEL_80:
          v27 = a2[3];
          if (v27 == a2[4]) {
            goto LABEL_81;
          }
          goto LABEL_13;
        }
        if (v35 < 22) {
          goto LABEL_79;
        }
        if (v14 == v15 || v14 - v15 > 2 || *(v14 - 1) != 48) {
          goto LABEL_88;
        }
        v13 = 0;
        *v14++ = v16[v35];
        v27 = a2[3];
        if (v27 != a2[4]) {
          goto LABEL_13;
        }
      }
      else {
        if (v12 - v60 > 159) {
          goto LABEL_80;
        }
        *(_DWORD*)v12 = v13;
        v12 += 4;
        v13 = 0;
        v27 = a2[3];
        if (v27 != a2[4]) {
          goto LABEL_13;
        }
      }
    LABEL_81:
      (*(void (**)(_QWORD*))(*a2 + 80LL))(a2);
    }
    else {
      v21 = (unsigned __int8*)a2[3];
      if (v21 != (unsigned __int8*)a2[4]) {
        goto LABEL_34;
      }
    LABEL_49:
      v22 = (*(unsigned __int8 (**)(_QWORD*))(*a2 + 72LL))(a2);
      v23 = (unsigned __int8)v66_.v66[0];
      if (v14 != v15) {
        goto LABEL_54;
      }
    LABEL_50:
      if ((_DWORD)v22 != 45 && (_DWORD)v22 != 43) {
        goto LABEL_54;
      }
      v13 = 0;
      *v14++ = v22;
      v27 = a2[3];
      if (v27 == a2[4]) {
        goto LABEL_81;
      }
    LABEL_13:
      a2[3] = v27 + 1;
    }
  }
  v28 = v65[1];
  v29 = v65[0] & 1;
  v30 = (unsigned __int64)LOBYTE(v65[0]) >> 1;
LABEL_88:
  v36 = v58;
LABEL_89:
  if (v29 != 0) {
    v37 = v28;
  }
  else {
    v37 = v30;
  }
  if (v37 != 0 && v12 - v60 <= 159) {
    *(_DWORD*)v12 = v13;
    v12 += 4;
  }
  v38 = NgxRoutine_e1380(v15, v14, a5, v36);
  v39 = LOBYTE(v65[0]);
  *a6 = v38;
  v40 = v65[1];
  v41 = v39 & 1;
  if ((v39 & 1) == 0) {
    v40 = v39 >> 1;
  }
  if (v12 - v60 >= 5 && v40 != 0) {
    v42 = v12 - 4;
    if (v60 != v12 && v60 < v12 - 4) {
      v43 = (int*)(v12 - 4);
      v44 = &v61;
      do {
        v45 = *(v44 - 1);
        *(v44 - 1) = *v43;
        *v43-- = v45;
      } while (v44++ < v43);
      LODWORD(v39) = LOBYTE(v65[0]);
      v41 = v65[0] & 1;
    }
    v47 = (_BYTE*)v65[2];
    if (v41 == 0) {
      v47 = (char*)v65 + 1;
    }
    if (v60 >= (_BYTE*)v42) {
    LABEL_118:
      v52 = (unsigned __int8)*v47;
      if (*v47 != 0 && v52 != 255 && *v42 - 1 >= v52) {
        goto LABEL_121;
      }
    }
    else {
      v48 = (unsigned int)v39 >> 1;
      if (v41 != 0) {
        v48 = v65[1];
      }
      v49 = v60;
      v50 = &v47[v48];
      while (1) {
        v51 = (unsigned __int8)*v47;
        if (*v47 != 0 && v51 != 255 && *v49 != v51) {
          break;
        }
        ++v49;
        if (v50 - v47 > 1) {
          ++v47;
        }
        if (v49 >= v42) {
          goto LABEL_118;
        }
      }
    LABEL_121:
      *a5 = 4;
    }
  }
  if (a2 == nullptr) {
    v53 = true;
    if (a3 == nullptr) {
      goto LABEL_138;
    }
    goto LABEL_127;
  }
  if (a2[3] == a2[4]) {
    v55 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
    v53 = v55 == -1;
    if (v55 == -1) {
      a2 = nullptr;
    }
    if (a3 != nullptr) {
      goto LABEL_127;
    }
  LABEL_138:
    if (!v53) {
      goto LABEL_130;
    }
  LABEL_129:
    *a5 |= 2u;
    goto LABEL_130;
  }
  v53 = false;
  if (a3 == nullptr) {
    goto LABEL_138;
  }
LABEL_127:
  if (a3[3] == a3[4]) {
    if (((v53 ^ ((*(unsigned int (**)(_QWORD*))(*a3 + 72LL))(a3) == -1)) & 1) !=
        0) {
      goto LABEL_130;
    }
    goto LABEL_129;
  }
  if (!v53) {
    goto LABEL_129;
  }
LABEL_130:
  if ((v62_.v62 & 1) != 0) {
    NgxRoutine_430(v62_.v64, v62_.v62 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((v65[0] & 1) != 0) {
    NgxRoutine_430(v65[2], v65[0] & 0xFFFFFFFFFFFFFFFELL);
  }
  return a2;
}

void __attribute__((noreturn)) nvidia_c3780(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 48),
                   *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 24),
                 *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c3da4(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 96) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 72) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c43c4(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 96) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 72) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c49e4(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 96) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 72) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

_QWORD* nvidia_c4ff0(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     char* a6)
{
  char v6;
  _QWORD* result;
  __int64 v12;
  void* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  void* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  bool v22;
  char v23;
  _QWORD* v24;
  _QWORD* v25;
  _QWORD v26[3];
  _QWORD v27[3];
  __int64 v28;
  _QWORD* v29;
  void* v30;
  _QWORD* v31;

  v6 = *(_BYTE*)(a4 + 8);
  v29 = a2;
  if ((v6 & 1) != 0) {
    nvidia_be650((void*)(&v28), a4);
    v12 = v28;
    v13 = NgxData_9511d0;
    v30 = NgxData_9511d0;
    if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511d0,
                             memory_order_acquire) != -1) {
      v26[0] = &v30;
      v31 = v26;
      NgxRoutine_e21e0((unsigned __int64*)NgxData_9511d0, (__int64)&v31,
                       (void (*)(__int64))NgxRoutine_e0c40);
    }
    v14 = *(_QWORD*)(v12 + 16);
    v15 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v13) - 1LL;
    if (v15 >= (*(_QWORD*)(v12 + 24) - v14) >> 3 ||
        (v16 = *(_QWORD*)(v14 + 8 * v15)) == 0) {
      NgxRoutine_db120();
    }
    NgxRoutine_db240(&v28);
    nvidia_be650((void*)(&v28), a4);
    v17 = v28;
    v18 = NgxData_9511d8;
    v30 = NgxData_9511d8;
    if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511d8,
                             memory_order_acquire) != -1) {
      v26[0] = &v30;
      v31 = v26;
      NgxRoutine_e21e0((unsigned __int64*)NgxData_9511d8, (__int64)&v31,
                       (void (*)(__int64))NgxRoutine_e0c40);
    }
    v19 = *(_QWORD*)(v17 + 16);
    v20 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v18) - 1LL;
    if (v20 >= (*(_QWORD*)(v17 + 24) - v19) >> 3 ||
        (v21 = *(_QWORD*)(v19 + 8 * v20)) == 0) {
      NgxRoutine_db120();
    }
    NgxRoutine_db240(&v28);
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)v21 + 48LL))((void*)(v26), v21);
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)v21 + 56LL))((void*)(v27), v21);
    v22 = NgxRoutine_c52a0(&v29, a3, (unsigned __int8*)v26,
                           (unsigned __int8*)&v28, v16, a5,
                           1) == (unsigned __int8*)v26;
    result = v29;
    v23 = v22;
    *a6 = v23;
    if ((v27[0] & 1) != 0) {
      v24 = result;
      NgxRoutine_430(v27[2], (4LL * v27[0]) & 0xFFFFFFFFFFFFFFF8LL);
      result = v24;
    }
    if ((v26[0] & 1) != 0) {
      v25 = result;
      NgxRoutine_430(v26[2], (4LL * v26[0]) & 0xFFFFFFFFFFFFFFF8LL);
      return v25;
    }
  }
  else {
    v26[0] = -1;
    result = (_QWORD*)(*(__int64 (**)(__int64, _QWORD*, _QWORD*, __int64,
                                      _DWORD*, _QWORD*))(*(_QWORD*)a1 + 32LL))(
        a1, a2, a3, a4, a5, v26);
    if (v26[0] == 1) {
      *a6 = 1;
    }
    else if (v26[0] != 0) {
      *a6 = 1;
      *a5 = 4;
    }
    else {
      *a6 = 0;
    }
  }
  return result;
}

void __attribute__((noreturn)) nvidia_c5238(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  NgxRoutine_bf700((_QWORD*)(v9 + 24));
  NgxRoutine_bf700(&a9);
  v12 = _Unwind_Resume_plt(a1);
  NgxRoutine_bf700(&a9);
  v13 = _Unwind_Resume_plt(v12);
  v14 = _Unwind_Resume_plt(v13);
  NgxRoutine_db240((__int64*)(v10 - 32));
  v15 = _Unwind_Resume_plt(v14);
  NgxRoutine_db240((__int64*)(v10 - 32));
  _Unwind_Resume_plt(v15);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c5d9c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 152),
                   *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 128),
                 *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c645c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 152),
                   *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 128),
                 *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c6b1c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 152),
                   *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 128),
                 *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c71dc(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 152),
                   *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 128),
                 *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c789c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 152),
                   *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 128),
                 *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c7f5c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 152),
                   *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 128),
                 *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c8580(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 176) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 152) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c8ba0(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 176) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 152) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c91c0(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 176) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 152) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 nvidia_c9770(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                     __int64 a10, __int64 a11, __int64 a12)
{
  __int64 v13;

  __cxa_guard_abort_plt(&NgxData_2b89de8);
  if ((a10 & 1) != 0) {
    NgxRoutine_430(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  }
  v13 = _Unwind_Resume_plt(a1);
  return nvidia_c97d0_alt1(v13);
}

__int64 nvidia_c97d0(__int64 a1, __int64 a2, _BYTE* a3, _BYTE* a4)
{
  __int64 v7;
  void* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  void* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v18;
  void* v19;
  void*** v20;
  void** v21;

  nvidia_be650((void*)(&v18), a1);
  v7 = v18;
  v8 = NgxData_9511b8;
  v19 = NgxData_9511b8;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511b8,
                           memory_order_acquire) != -1) {
    v21 = &v19;
    v20 = &v21;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511b8, (__int64)&v20,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v9 = *(_QWORD*)(v7 + 16);
  v10 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8) - 1LL;
  if (v10 >= (*(_QWORD*)(v7 + 24) - v9) >> 3 ||
      (v11 = *(_QWORD*)(v9 + 8 * v10)) == 0) {
    NgxRoutine_db120();
  }
  (*(void (**)(__int64, char*, char*, __int64))(*(_QWORD*)v11 + 64LL))(
      v11, NgxData_9511c8, NgxData_9511c8 + 28, a2);
  v12 = v18;
  v13 = NgxData_9511c0;
  v19 = NgxData_9511c0;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511c0,
                           memory_order_acquire) != -1) {
    v21 = &v19;
    v20 = &v21;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511c0, (__int64)&v20,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v14 = *(_QWORD*)(v12 + 16);
  v15 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v13) - 1LL;
  if (v15 >= (*(_QWORD*)(v12 + 24) - v14) >> 3 ||
      (v16 = *(_QWORD*)(v14 + 8 * v15)) == 0) {
    NgxRoutine_db120();
  }
  *a3 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 24LL))(v16);
  *a4 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 32LL))(v16);
  (*(void (**)(__int64))(*(_QWORD*)v16 + 40LL))(v16);
  return NgxRoutine_db240(&v18);
}

__int64 nvidia_c9be0(__int64 a1, __int64 a2, _DWORD* a3, _DWORD* a4)
{
  __int64 v7;
  void* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  void* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v18;
  void* v19;
  void*** v20;
  void** v21;

  nvidia_be650((void*)(&v18), a1);
  v7 = v18;
  v8 = NgxData_9511d0;
  v19 = NgxData_9511d0;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511d0,
                           memory_order_acquire) != -1) {
    v21 = &v19;
    v20 = &v21;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511d0, (__int64)&v20,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v9 = *(_QWORD*)(v7 + 16);
  v10 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8) - 1LL;
  if (v10 >= (*(_QWORD*)(v7 + 24) - v9) >> 3 ||
      (v11 = *(_QWORD*)(v9 + 8 * v10)) == 0) {
    NgxRoutine_db120();
  }
  (*(void (**)(__int64, char*, char*, __int64))(*(_QWORD*)v11 + 96LL))(
      v11, NgxData_9511c8, NgxData_9511c8 + 28, a2);
  v12 = v18;
  v13 = NgxData_9511d8;
  v19 = NgxData_9511d8;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511d8,
                           memory_order_acquire) != -1) {
    v21 = &v19;
    v20 = &v21;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511d8, (__int64)&v20,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v14 = *(_QWORD*)(v12 + 16);
  v15 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v13) - 1LL;
  if (v15 >= (*(_QWORD*)(v12 + 24) - v14) >> 3 ||
      (v16 = *(_QWORD*)(v14 + 8 * v15)) == 0) {
    NgxRoutine_db120();
  }
  *a3 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 24LL))(v16);
  *a4 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 32LL))(v16);
  (*(void (**)(__int64))(*(_QWORD*)v16 + 40LL))(v16);
  return NgxRoutine_db240(&v18);
}

__int64 nvidia_c9fe0(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD* v6;
  __int64 v8;
  void* v9;
  __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  __int64 v13;
  char* v14;
  unsigned __int64 v15;
  char* v16;
  int v17;
  unsigned __int64 v18;
  __int64 v19;
  _BYTE* v20;
  unsigned __int64 v21;
  char* v22;
  struct {
    unsigned __int64 v23;
    unsigned __int64 v24;
    char* v25;
  } v23_;
  __int64 v26;
  void* v27;
  unsigned __int64* v28;

  v6 = a2;
  if ((*(_BYTE*)(a3 + 8) & 1) == 0) {
    return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)a1 + 48LL))(a1, a2);
  }
  nvidia_be650((void*)(&v26), a3);
  v8 = v26;
  v9 = NgxData_9511c0;
  v27 = NgxData_9511c0;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511c0,
                           memory_order_acquire) != -1) {
    v23_.v23 = (unsigned __int64)&v27;
    v28 = &v23_.v23;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511c0, (__int64)&v28,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v10 = *(_QWORD*)(v8 + 16);
  v11 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9) - 1LL;
  if (v11 >= (*(_QWORD*)(v8 + 24) - v10) >> 3 ||
      (v12 = *(_QWORD**)(v10 + 8 * v11)) == nullptr) {
    NgxRoutine_db120();
  }
  NgxRoutine_db240(&v26);
  v13 = 56;
  if ((a5 & 1) != 0) {
    v13 = 48;
  }
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v12 + v13))(
      (void*)(&v23_.v23), v12);
  v15 = v23_.v24;
  v14 = v23_.v25;
  if ((v23_.v23 & 1) == 0) {
    v15 = (unsigned __int64)(unsigned __int8)v23_.v23 >> 1;
  }
  if (v15 != 0) {
    if ((v23_.v23 & 1) != 0) {
      v16 = v23_.v25;
    }
    else {
      v16 = (char*)&v23_.v23 + 1;
    }
    while (1) {
      if (v6 != nullptr) {
        v19 = (unsigned __int8)*v16;
        v20 = (_BYTE*)v6[6];
        if (v20 != (_BYTE*)v6[7]) {
          *v20 = v19;
          ++v6[6];
          v21 = (unsigned __int8)v23_.v23;
          v14 = v23_.v25;
          v22 = (char*)&v23_.v23 + 1;
          if ((v23_.v23 & 1) == 0) {
            goto LABEL_15;
          }
          goto LABEL_24;
        }
        if ((*(unsigned int (**)(_QWORD*, __int64))(*v6 + 104LL))(v6, v19) ==
            -1) {
          v6 = nullptr;
          v21 = (unsigned __int8)v23_.v23;
          v14 = v23_.v25;
          v22 = (char*)&v23_.v23 + 1;
          if ((v23_.v23 & 1) == 0) {
            goto LABEL_15;
          }
        LABEL_24:
          v22 = v14;
          goto LABEL_15;
        }
      }
      v21 = (unsigned __int8)v23_.v23;
      v14 = v23_.v25;
      v22 = (char*)&v23_.v23 + 1;
      if ((v23_.v23 & 1) != 0) {
        goto LABEL_24;
      }
    LABEL_15:
      v17 = v21 & 1;
      v18 = v21 >> 1;
      ++v16;
      if (v17 != 0) {
        v18 = v23_.v24;
      }
      if (v16 == &v22[v18]) {
        if (v17 != 0) {
          goto LABEL_28;
        }
        return (__int64)v6;
      }
    }
  }
  if ((v23_.v23 & 1) != 0) {
  LABEL_28:
    NgxRoutine_430(v14, v23_.v23 & 0xFFFFFFFFFFFFFFFELL);
  }
  return (__int64)v6;
}

__int64 nvidia_ca220(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                     unsigned __int64 a5)
{
  __int64 v5;
  __int64 v6;
  int v7;
  unsigned __int8* v9;
  int v12;
  int v13;
  unsigned int v14;
  unsigned __int64 v15;
  char v16;
  char* v17;
  unsigned __int8* v18;
  unsigned __int64 v19;
  __int64 i;
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
  unsigned __int8* v31;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _BYTE v36[45];
  unsigned __int8 v37;
  unsigned __int8 v38;
  _BYTE v39[6];
  _QWORD v40[2];

  v40[0] = v5;
  v40[1] = v6;
  v7 = *(_DWORD*)(a3 + 8);
  v9 = &v37;
  v12 = v7 & 0x4A;
  if (v12 == 8) {
    v13 = 16;
  }
  else {
    v13 = 10;
  }
  if (v12 == 64) {
    v14 = 8;
  }
  else {
    v14 = v13;
  }
  if ((a5 & 0x8000000000000000LL) != 0) {
    if (v12 == 8) {
      goto LABEL_15;
    }
    v15 = a5;
    if (v12 != 64) {
      v15 = -(__int64)a5;
      v9 = &v38;
      v37 = 45;
    }
  }
  else {
    if ((v7 & 0x800) == 0 || v12 == 8) {
      goto LABEL_15;
    }
    v15 = a5;
    if (v12 != 64) {
      v9 = &v38;
      v37 = 43;
    LABEL_15:
      v15 = a5;
    }
  }
  if (a5 != 0 && (v7 & 0x200) != 0) {
    if (v12 == 64) {
      *v9++ = 48;
    }
    else if (v12 == 8) {
      *v9 = 48;
      if ((v7 & 0x4000) != 0) {
        v16 = 88;
      }
      else {
        v16 = 120;
      }
      v9[1] = v16;
      v9 += 2;
    }
  }
  v17 = nvidia_e1af0(v9, (char*)v40, v15, v14);
  v18 = (unsigned __int8*)v17;
  if ((~v7 & 0x4008) == 0) {
    v19 = v9 - (unsigned __int8*)v17;
    if (v9 != (unsigned __int8*)v17) {
      for (i = ((_BYTE)v17 - (_BYTE)v9) & 7; i != 0; *v9++ = v21) {
        v21 = *v9;
        if ((unsigned int)(v21 - 97) < 6) {
          LOBYTE(v21) = v21 - 32;
        }
        --i;
      }
      if (v19 <= 0xFFFFFFFFFFFFFFF8LL) {
        do {
          v22 = *v9;
          if ((unsigned int)(v22 - 97) < 6) {
            LOBYTE(v22) = v22 - 32;
          }
          *v9 = v22;
          v23 = v9[1];
          if ((unsigned int)(v23 - 97) < 6) {
            LOBYTE(v23) = v23 - 32;
          }
          v9[1] = v23;
          v24 = v9[2];
          if ((unsigned int)(v24 - 97) < 6) {
            LOBYTE(v24) = v24 - 32;
          }
          v9[2] = v24;
          v25 = v9[3];
          if ((unsigned int)(v25 - 97) < 6) {
            LOBYTE(v25) = v25 - 32;
          }
          v9[3] = v25;
          v26 = v9[4];
          if ((unsigned int)(v26 - 97) < 6) {
            LOBYTE(v26) = v26 - 32;
          }
          v9[4] = v26;
          v27 = v9[5];
          if ((unsigned int)(v27 - 97) < 6) {
            LOBYTE(v27) = v27 - 32;
          }
          v9[5] = v27;
          v28 = v9[6];
          if ((unsigned int)(v28 - 97) < 6) {
            LOBYTE(v28) = v28 - 32;
          }
          v9[6] = v28;
          v29 = v9[7];
          if ((unsigned int)(v29 - 97) < 6) {
            LOBYTE(v29) = v29 - 32;
          }
          v9[7] = v29;
          v9 += 8;
        } while (v9 != (unsigned __int8*)v17);
      }
    }
  }
  v30 = *(_DWORD*)(a3 + 8) & 0xB0;
  if (v30 == 32) {
    v31 = (unsigned __int8*)v17;
    goto LABEL_60;
  }
  if (v30 != 16) {
  LABEL_59:
    v31 = &v37;
    goto LABEL_60;
  }
  if (v37 != 45 && v37 != 43) {
    if (v17 - (char*)&v37 >= 2 && v37 == 48 && (v38 | 0x20) == 0x78) {
      v31 = v39;
      goto LABEL_60;
    }
    goto LABEL_59;
  }
  v31 = &v38;
LABEL_60:
  nvidia_be650((void*)(&v33), a3);
  nvidia_cd0e0(&v37, v31, v18, (__int64)v36, &v35, &v34, &v33);
  NgxRoutine_db240(&v33);
  return NgxRoutine_d6d40(a2, (__int64)v36, v35, v34, a3, a4);
}

__int64 nvidia_ca54c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned __int8* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  unsigned int v23;
  unsigned __int64 v24;
  char v25;
  char* v26;
  unsigned __int8* v27;
  unsigned __int64 v28;
  __int64 i;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  unsigned __int8* v40;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _BYTE v45[45];
  unsigned __int8 v46;
  unsigned __int8 v47;
  _BYTE v48[6];
  _QWORD v49[8];

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&a9),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  _Unwind_Resume_plt(a1),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v49[0] = v9;
  v49[1] = v12;
  v49[7] = a1;
  v14 = *(_DWORD*)(v13 + 8);
  v16 = v15;
  v17 = &v46;
  v18 = v13;
  v20 = v19;
  v21 = v14 & 0x4A;
  if (v21 == 8) {
    v22 = 16;
  }
  else {
    v22 = 10;
  }
  if (v21 == 64) {
    v23 = 8;
  }
  else {
    v23 = v22;
  }
  if ((v11 & 0x8000000000000000LL) != 0) {
    if (v21 == 8) {
      goto LABEL_15;
    }
    v24 = v11;
    if (v21 != 64) {
      v24 = -(__int64)v11;
      v17 = &v47;
      v46 = 45;
    }
  }
  else {
    if ((v14 & 0x800) == 0 || v21 == 8) {
      goto LABEL_15;
    }
    v24 = v11;
    if (v21 != 64) {
      v17 = &v47;
      v46 = 43;
    LABEL_15:
      v24 = v11;
    }
  }
  if (v11 != 0 && (v14 & 0x200) != 0) {
    if (v21 == 64) {
      *v17++ = 48;
    }
    else if (v21 == 8) {
      *v17 = 48;
      if ((v14 & 0x4000) != 0) {
        v25 = 88;
      }
      else {
        v25 = 120;
      }
      v17[1] = v25;
      v17 += 2;
    }
  }
  v26 = nvidia_e1af0(v17, (char*)v49, v24, v23),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = (unsigned __int8*)v26;
  if ((~v14 & 0x4008) == 0) {
    v28 = v17 - (unsigned __int8*)v26;
    if (v17 != (unsigned __int8*)v26) {
      for (i = ((_BYTE)v26 - (_BYTE)v17) & 7; i != 0; *v17++ = v30) {
        v30 = *v17;
        if ((unsigned int)(v30 - 97) < 6) {
          LOBYTE(v30) = v30 - 32;
        }
        --i;
      }
      if (v28 <= 0xFFFFFFFFFFFFFFF8LL) {
        do {
          v31 = *v17;
          if ((unsigned int)(v31 - 97) < 6) {
            LOBYTE(v31) = v31 - 32;
          }
          *v17 = v31;
          v32 = v17[1];
          if ((unsigned int)(v32 - 97) < 6) {
            LOBYTE(v32) = v32 - 32;
          }
          v17[1] = v32;
          v33 = v17[2];
          if ((unsigned int)(v33 - 97) < 6) {
            LOBYTE(v33) = v33 - 32;
          }
          v17[2] = v33;
          v34 = v17[3];
          if ((unsigned int)(v34 - 97) < 6) {
            LOBYTE(v34) = v34 - 32;
          }
          v17[3] = v34;
          v35 = v17[4];
          if ((unsigned int)(v35 - 97) < 6) {
            LOBYTE(v35) = v35 - 32;
          }
          v17[4] = v35;
          v36 = v17[5];
          if ((unsigned int)(v36 - 97) < 6) {
            LOBYTE(v36) = v36 - 32;
          }
          v17[5] = v36;
          v37 = v17[6];
          if ((unsigned int)(v37 - 97) < 6) {
            LOBYTE(v37) = v37 - 32;
          }
          v17[6] = v37;
          v38 = v17[7];
          if ((unsigned int)(v38 - 97) < 6) {
            LOBYTE(v38) = v38 - 32;
          }
          v17[7] = v38;
          v17 += 8;
        } while (v17 != (unsigned __int8*)v26);
      }
    }
  }
  v39 = *(_DWORD*)(v18 + 8) & 0xB0;
  if (v39 == 32) {
    v40 = (unsigned __int8*)v26;
    goto LABEL_60;
  }
  if (v39 != 16) {
  LABEL_59:
    v40 = &v46;
    goto LABEL_60;
  }
  if (v46 != 45 && v46 != 43) {
    if (v26 - (char*)&v46 >= 2 && v46 == 48 && (v47 | 0x20) == 0x78) {
      v40 = v48;
      goto LABEL_60;
    }
    goto LABEL_59;
  }
  v40 = &v47;
LABEL_60:
  nvidia_be650((void*)(&v42), v18),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nvidia_cd0e0(&v46, v40, v27, (__int64)v45, &v44, &v43, &v42),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&v42),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return NgxRoutine_d6d40(v20, (__int64)v45, v44, v43, v18, v16);
}

__int64 nvidia_ca88c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned __int8* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  unsigned int v23;
  char v24;
  char* v25;
  unsigned __int8* v26;
  __int64 v28;
  unsigned __int8* v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  unsigned __int8* v40;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _BYTE v45[45];
  unsigned __int8 v46;
  unsigned __int8 v47;
  _BYTE v48[22];
  _QWORD v49[8];

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&a9),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  _Unwind_Resume_plt(a1),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v49[0] = v9;
  v49[1] = v12;
  v49[7] = a1;
  v14 = *(_DWORD*)(v13 + 8);
  v16 = v15;
  v17 = &v46;
  v18 = v13;
  v20 = v19;
  v21 = v14 & 0x4A;
  if (v21 == 8) {
    v22 = 16;
  }
  else {
    v22 = 10;
  }
  if (v21 == 64) {
    v23 = 8;
  }
  else {
    v23 = v22;
  }
  if (v11 != 0 && (v14 & 0x200) != 0) {
    if (v21 == 64) {
      v17 = &v47;
      v46 = 48;
    }
    else if (v21 == 8) {
      v17 = v48;
      v46 = 48;
      if ((v14 & 0x4000) != 0) {
        v24 = 88;
      }
      else {
        v24 = 120;
      }
      v47 = v24;
    }
  }
  v25 = nvidia_e1af0(v17, (char*)v49, v11, v23),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v26 = (unsigned __int8*)v25;
  if ((~v14 & 0x4008) == 0 && v17 != (unsigned __int8*)v25) {
    v28 = ((_BYTE)v25 - (_BYTE)v17) & 7;
    v29 = v17;
    if ((((_BYTE)v25 - (_BYTE)v17) & 7) != 0) {
      v29 = v17;
      do {
        v30 = *v29;
        if ((unsigned int)(v30 - 97) < 6) {
          LOBYTE(v30) = v30 - 32;
        }
        --v28;
        *v29++ = v30;
      } while (v28 != 0);
    }
    if ((unsigned __int64)(v17 - (unsigned __int8*)v25) <=
        0xFFFFFFFFFFFFFFF8LL) {
      do {
        v31 = *v29;
        if ((unsigned int)(v31 - 97) < 6) {
          LOBYTE(v31) = v31 - 32;
        }
        *v29 = v31;
        v32 = v29[1];
        if ((unsigned int)(v32 - 97) < 6) {
          LOBYTE(v32) = v32 - 32;
        }
        v29[1] = v32;
        v33 = v29[2];
        if ((unsigned int)(v33 - 97) < 6) {
          LOBYTE(v33) = v33 - 32;
        }
        v29[2] = v33;
        v34 = v29[3];
        if ((unsigned int)(v34 - 97) < 6) {
          LOBYTE(v34) = v34 - 32;
        }
        v29[3] = v34;
        v35 = v29[4];
        if ((unsigned int)(v35 - 97) < 6) {
          LOBYTE(v35) = v35 - 32;
        }
        v29[4] = v35;
        v36 = v29[5];
        if ((unsigned int)(v36 - 97) < 6) {
          LOBYTE(v36) = v36 - 32;
        }
        v29[5] = v36;
        v37 = v29[6];
        if ((unsigned int)(v37 - 97) < 6) {
          LOBYTE(v37) = v37 - 32;
        }
        v29[6] = v37;
        v38 = v29[7];
        if ((unsigned int)(v38 - 97) < 6) {
          LOBYTE(v38) = v38 - 32;
        }
        v29[7] = v38;
        v29 += 8;
      } while (v29 != (unsigned __int8*)v25);
    }
  }
  v39 = *(_DWORD*)(v18 + 8) & 0xB0;
  if (v39 == 32) {
    v40 = (unsigned __int8*)v25;
    goto LABEL_54;
  }
  if (v39 != 16) {
  LABEL_53:
    v40 = &v46;
    goto LABEL_54;
  }
  if (v46 != 45 && v46 != 43) {
    if (v25 - (char*)&v46 >= 2 && v46 == 48 && (v47 | 0x20) == 0x78) {
      v40 = v48;
      goto LABEL_54;
    }
    goto LABEL_53;
  }
  v40 = &v47;
LABEL_54:
  nvidia_be650((void*)(&v42), v18),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nvidia_cd0e0(&v46, v40, v26, (__int64)v45, &v44, &v43, &v42),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&v42),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return NgxRoutine_d6d40(v20, (__int64)v45, v44, v43, v18, v16);
}

__int64 nvidia_cab90(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                     unsigned __int64 a5)
{
  __int64 v5;
  __int64 v6;
  int v7;
  unsigned __int8* v9;
  int v12;
  int v13;
  unsigned int v14;
  char v15;
  char* v16;
  unsigned __int8* v17;
  __int64 v19;
  unsigned __int8* v20;
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
  unsigned __int8* v31;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _BYTE v36[45];
  unsigned __int8 v37;
  unsigned __int8 v38;
  _BYTE v39[22];
  _QWORD v40[2];

  v40[0] = v5;
  v40[1] = v6;
  v7 = *(_DWORD*)(a3 + 8);
  v9 = &v37;
  v12 = v7 & 0x4A;
  if (v12 == 8) {
    v13 = 16;
  }
  else {
    v13 = 10;
  }
  if (v12 == 64) {
    v14 = 8;
  }
  else {
    v14 = v13;
  }
  if (a5 != 0 && (v7 & 0x200) != 0) {
    if (v12 == 64) {
      v9 = &v38;
      v37 = 48;
    }
    else if (v12 == 8) {
      v9 = v39;
      v37 = 48;
      if ((v7 & 0x4000) != 0) {
        v15 = 88;
      }
      else {
        v15 = 120;
      }
      v38 = v15;
    }
  }
  v16 = nvidia_e1af0(v9, (char*)v40, a5, v14);
  v17 = (unsigned __int8*)v16;
  if ((~v7 & 0x4008) == 0 && v9 != (unsigned __int8*)v16) {
    v19 = ((_BYTE)v16 - (_BYTE)v9) & 7;
    v20 = v9;
    if ((((_BYTE)v16 - (_BYTE)v9) & 7) != 0) {
      v20 = v9;
      do {
        v21 = *v20;
        if ((unsigned int)(v21 - 97) < 6) {
          LOBYTE(v21) = v21 - 32;
        }
        --v19;
        *v20++ = v21;
      } while (v19 != 0);
    }
    if ((unsigned __int64)(v9 - (unsigned __int8*)v16) <=
        0xFFFFFFFFFFFFFFF8LL) {
      do {
        v22 = *v20;
        if ((unsigned int)(v22 - 97) < 6) {
          LOBYTE(v22) = v22 - 32;
        }
        *v20 = v22;
        v23 = v20[1];
        if ((unsigned int)(v23 - 97) < 6) {
          LOBYTE(v23) = v23 - 32;
        }
        v20[1] = v23;
        v24 = v20[2];
        if ((unsigned int)(v24 - 97) < 6) {
          LOBYTE(v24) = v24 - 32;
        }
        v20[2] = v24;
        v25 = v20[3];
        if ((unsigned int)(v25 - 97) < 6) {
          LOBYTE(v25) = v25 - 32;
        }
        v20[3] = v25;
        v26 = v20[4];
        if ((unsigned int)(v26 - 97) < 6) {
          LOBYTE(v26) = v26 - 32;
        }
        v20[4] = v26;
        v27 = v20[5];
        if ((unsigned int)(v27 - 97) < 6) {
          LOBYTE(v27) = v27 - 32;
        }
        v20[5] = v27;
        v28 = v20[6];
        if ((unsigned int)(v28 - 97) < 6) {
          LOBYTE(v28) = v28 - 32;
        }
        v20[6] = v28;
        v29 = v20[7];
        if ((unsigned int)(v29 - 97) < 6) {
          LOBYTE(v29) = v29 - 32;
        }
        v20[7] = v29;
        v20 += 8;
      } while (v20 != (unsigned __int8*)v16);
    }
  }
  v30 = *(_DWORD*)(a3 + 8) & 0xB0;
  if (v30 == 32) {
    v31 = (unsigned __int8*)v16;
    goto LABEL_54;
  }
  if (v30 != 16) {
  LABEL_53:
    v31 = &v37;
    goto LABEL_54;
  }
  if (v37 != 45 && v37 != 43) {
    if (v16 - (char*)&v37 >= 2 && v37 == 48 && (v38 | 0x20) == 0x78) {
      v31 = v39;
      goto LABEL_54;
    }
    goto LABEL_53;
  }
  v31 = &v38;
LABEL_54:
  nvidia_be650((void*)(&v33), a3);
  nvidia_cd0e0(&v37, v31, v17, (__int64)v36, &v35, &v34, &v33);
  NgxRoutine_db240(&v33);
  return NgxRoutine_d6d40(a2, (__int64)v36, v35, v34, a3, a4);
}

void __attribute__((noreturn)) nvidia_cb280(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v4 = _Unwind_Resume_plt(a1);
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v5 = _Unwind_Resume_plt(v4);
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v6 = _Unwind_Resume_plt(v5);
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v7 = _Unwind_Resume_plt(v6);
  v8 = _Unwind_Resume_plt(v7);
  v9 = _Unwind_Resume_plt(v8);
  if (v1 == 0) {
    while (1) {
      _Unwind_Resume_plt(v9);
      free_plt(v2);
    }
  }
  free_plt(v1);
  _Unwind_Resume_plt(v9);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_cb75c(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v4 = _Unwind_Resume_plt(a1);
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v5 = _Unwind_Resume_plt(v4);
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v6 = _Unwind_Resume_plt(v5);
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v7 = _Unwind_Resume_plt(v6);
  v8 = _Unwind_Resume_plt(v7);
  v9 = _Unwind_Resume_plt(v8);
  if (v1 == 0) {
    while (1) {
      _Unwind_Resume_plt(v9);
      free_plt(v2);
    }
  }
  free_plt(v1);
  _Unwind_Resume_plt(v9);
  __udf(0);
}

__int64 nvidia_cb820(__int64 a1, __int64 a2, __int64 a3)
{
  int v3;
  __int64 result;

  v3 = *(_DWORD*)(a3 + 8);
  *(_DWORD*)(a3 + 8) = v3 & 0xFFFFBDB5 | 0x208;
  result = ((__int64 (*)(void))NgxRoutine_ca8c0)();
  *(_DWORD*)(a3 + 8) = v3;
  return result;
}

__int64 nvidia_cb860(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD* v6;
  __int64 v8;
  void* v9;
  __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  __int64 v13;
  unsigned int v14;
  char* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  _DWORD* v22;
  struct {
    void** v23;
    unsigned __int64 v24;
    char* v25;
  } v23_;
  __int64 v26;
  void* v27;
  void*** v28;

  v6 = a2;
  if ((*(_BYTE*)(a3 + 8) & 1) == 0) {
    return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)a1 + 48LL))(a1, a2);
  }
  nvidia_be650((void*)(&v26), a3);
  v8 = v26;
  v9 = NgxData_9511d8;
  v27 = NgxData_9511d8;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511d8,
                           memory_order_acquire) != -1) {
    v23_.v23 = &v27;
    v28 = &v23_.v23;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511d8, (__int64)&v28,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v10 = *(_QWORD*)(v8 + 16);
  v11 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9) - 1LL;
  if (v11 >= (*(_QWORD*)(v8 + 24) - v10) >> 3 ||
      (v12 = *(_QWORD**)(v10 + 8 * v11)) == nullptr) {
    NgxRoutine_db120();
  }
  NgxRoutine_db240(&v26);
  v13 = 56;
  if ((a5 & 1) != 0) {
    v13 = 48;
  }
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v12 + v13))(
      (void*)(&v23_.v23), v12);
  v14 = (unsigned __int8)v23_.v23;
  v16 = v23_.v24;
  v15 = v23_.v25;
  v17 = (unsigned __int64)(unsigned __int8)v23_.v23 >> 1;
  if (((unsigned __int8)v23_.v23 & 1) != 0) {
    v17 = v23_.v24;
  }
  if (v17 != 0) {
    if (((unsigned __int8)v23_.v23 & 1) != 0) {
      v18 = v23_.v25;
    }
    else {
      v18 = (char*)&v23_.v23 + 4;
    }
    do {
      if (v6 != nullptr) {
        v21 = *(unsigned int*)v18;
        v22 = (_DWORD*)v6[6];
        if (v22 == (_DWORD*)v6[7]) {
          LODWORD(v21) =
              (*(__int64 (**)(_QWORD*, __int64))(*v6 + 104LL))(v6, v21);
        }
        else {
          *v22 = v21;
          v6[6] = v22 + 1;
        }
        v14 = (unsigned __int8)v23_.v23;
        v16 = v23_.v24;
        v15 = v23_.v25;
        if ((_DWORD)v21 == -1) {
          v6 = nullptr;
        }
      }
      v19 = v14 >> 1;
      v18 += 4;
      if ((v14 & 1) != 0) {
        v20 = v15;
      }
      else {
        v20 = (char*)&v23_.v23 + 4;
      }
      if ((v14 & 1) != 0) {
        v19 = v16;
      }
    } while (v18 != &v20[4 * v19]);
    if ((v14 & 1) == 0) {
      return (__int64)v6;
    }
  }
  else if (((unsigned __int8)v23_.v23 & 1) == 0) {
    return (__int64)v6;
  }
  NgxRoutine_430(v15, (4LL * (_QWORD)v23_.v23) & 0xFFFFFFFFFFFFFFF8LL);
  return (__int64)v6;
}

__int64 nvidia_cba24(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                     __int64 a10, __int64 a11, __int64 a12)
{
  __int64 v12;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  int v20;
  unsigned __int8* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  unsigned int v27;
  unsigned __int64 v28;
  char v29;
  char* v30;
  unsigned __int8* v31;
  unsigned __int64 v32;
  __int64 i;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  unsigned __int8* v44;
  __int64 v46;
  __int64 v47;
  _BYTE v48[180];
  unsigned __int8 v49;
  unsigned __int8 v50;
  _BYTE v51[6];
  _QWORD v52[2];
  __int64 v53[7];

  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&a12),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v14 = _Unwind_Resume_plt(a1),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((a9 & 1) != 0) {
    NgxRoutine_430(a11, (4 * a9) & 0xFFFFFFFFFFFFFFF8LL),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  _Unwind_Resume_plt(v14),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v52[0] = v12;
  v52[1] = v16;
  v53[6] = v14;
  v18 = *(_DWORD*)(v17 + 8);
  v20 = v19;
  v21 = &v49;
  v22 = v17;
  v24 = v23;
  v25 = v18 & 0x4A;
  if (v25 == 8) {
    v26 = 16;
  }
  else {
    v26 = 10;
  }
  if (v25 == 64) {
    v27 = 8;
  }
  else {
    v27 = v26;
  }
  if ((v15 & 0x8000000000000000LL) != 0) {
    if (v25 == 8) {
      goto LABEL_17;
    }
    v28 = v15;
    if (v25 != 64) {
      v28 = -(__int64)v15;
      v21 = &v50;
      v49 = 45;
    }
  }
  else {
    if ((v18 & 0x800) == 0 || v25 == 8) {
      goto LABEL_17;
    }
    v28 = v15;
    if (v25 != 64) {
      v21 = &v50;
      v49 = 43;
    LABEL_17:
      v28 = v15;
    }
  }
  if (v15 != 0 && (v18 & 0x200) != 0) {
    if (v25 == 64) {
      *v21++ = 48;
    }
    else if (v25 == 8) {
      *v21 = 48;
      if ((v18 & 0x4000) != 0) {
        v29 = 88;
      }
      else {
        v29 = 120;
      }
      v21[1] = v29;
      v21 += 2;
    }
  }
  v30 = nvidia_e1af0(v21, (char*)v52, v28, v27),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v31 = (unsigned __int8*)v30;
  if ((~v18 & 0x4008) == 0) {
    v32 = v21 - (unsigned __int8*)v30;
    if (v21 != (unsigned __int8*)v30) {
      for (i = ((_BYTE)v30 - (_BYTE)v21) & 7; i != 0; *v21++ = v34) {
        v34 = *v21;
        if ((unsigned int)(v34 - 97) < 6) {
          LOBYTE(v34) = v34 - 32;
        }
        --i;
      }
      if (v32 <= 0xFFFFFFFFFFFFFFF8LL) {
        do {
          v35 = *v21;
          if ((unsigned int)(v35 - 97) < 6) {
            LOBYTE(v35) = v35 - 32;
          }
          *v21 = v35;
          v36 = v21[1];
          if ((unsigned int)(v36 - 97) < 6) {
            LOBYTE(v36) = v36 - 32;
          }
          v21[1] = v36;
          v37 = v21[2];
          if ((unsigned int)(v37 - 97) < 6) {
            LOBYTE(v37) = v37 - 32;
          }
          v21[2] = v37;
          v38 = v21[3];
          if ((unsigned int)(v38 - 97) < 6) {
            LOBYTE(v38) = v38 - 32;
          }
          v21[3] = v38;
          v39 = v21[4];
          if ((unsigned int)(v39 - 97) < 6) {
            LOBYTE(v39) = v39 - 32;
          }
          v21[4] = v39;
          v40 = v21[5];
          if ((unsigned int)(v40 - 97) < 6) {
            LOBYTE(v40) = v40 - 32;
          }
          v21[5] = v40;
          v41 = v21[6];
          if ((unsigned int)(v41 - 97) < 6) {
            LOBYTE(v41) = v41 - 32;
          }
          v21[6] = v41;
          v42 = v21[7];
          if ((unsigned int)(v42 - 97) < 6) {
            LOBYTE(v42) = v42 - 32;
          }
          v21[7] = v42;
          v21 += 8;
        } while (v21 != (unsigned __int8*)v30);
      }
    }
  }
  v43 = *(_DWORD*)(v22 + 8) & 0xB0;
  if (v43 == 32) {
    v44 = (unsigned __int8*)v30;
    goto LABEL_62;
  }
  if (v43 != 16) {
  LABEL_61:
    v44 = &v49;
    goto LABEL_62;
  }
  if (v49 != 45 && v49 != 43) {
    if (v30 - (char*)&v49 >= 2 && v49 == 48 && (v50 | 0x20) == 0x78) {
      v44 = v51;
      goto LABEL_62;
    }
    goto LABEL_61;
  }
  v44 = &v50;
LABEL_62:
  nvidia_be650((void*)(&v46), v22),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nvidia_cdb60(&v49, v44, v31, (__int64)v48, v53, &v47, &v46),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&v46),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return NgxRoutine_d7f40(v24, (__int64)v48, v53[0], v47, v22, v20);
}

__int64 nvidia_cbd9c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  unsigned __int8* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  unsigned int v23;
  unsigned __int64 v24;
  char v25;
  char* v26;
  unsigned __int8* v27;
  unsigned __int64 v28;
  __int64 i;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  unsigned __int8* v40;
  __int64 v42;
  __int64 v43;
  _BYTE v44[180];
  unsigned __int8 v45;
  unsigned __int8 v46;
  _BYTE v47[6];
  _QWORD v48[2];
  __int64 v49[7];

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&a9),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  _Unwind_Resume_plt(a1),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v48[0] = v9;
  v48[1] = v12;
  v49[6] = a1;
  v14 = *(_DWORD*)(v13 + 8);
  v16 = v15;
  v17 = &v45;
  v18 = v13;
  v20 = v19;
  v21 = v14 & 0x4A;
  if (v21 == 8) {
    v22 = 16;
  }
  else {
    v22 = 10;
  }
  if (v21 == 64) {
    v23 = 8;
  }
  else {
    v23 = v22;
  }
  if ((v11 & 0x8000000000000000LL) != 0) {
    if (v21 == 8) {
      goto LABEL_15;
    }
    v24 = v11;
    if (v21 != 64) {
      v24 = -(__int64)v11;
      v17 = &v46;
      v45 = 45;
    }
  }
  else {
    if ((v14 & 0x800) == 0 || v21 == 8) {
      goto LABEL_15;
    }
    v24 = v11;
    if (v21 != 64) {
      v17 = &v46;
      v45 = 43;
    LABEL_15:
      v24 = v11;
    }
  }
  if (v11 != 0 && (v14 & 0x200) != 0) {
    if (v21 == 64) {
      *v17++ = 48;
    }
    else if (v21 == 8) {
      *v17 = 48;
      if ((v14 & 0x4000) != 0) {
        v25 = 88;
      }
      else {
        v25 = 120;
      }
      v17[1] = v25;
      v17 += 2;
    }
  }
  v26 = nvidia_e1af0(v17, (char*)v48, v24, v23),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = (unsigned __int8*)v26;
  if ((~v14 & 0x4008) == 0) {
    v28 = v17 - (unsigned __int8*)v26;
    if (v17 != (unsigned __int8*)v26) {
      for (i = ((_BYTE)v26 - (_BYTE)v17) & 7; i != 0; *v17++ = v30) {
        v30 = *v17;
        if ((unsigned int)(v30 - 97) < 6) {
          LOBYTE(v30) = v30 - 32;
        }
        --i;
      }
      if (v28 <= 0xFFFFFFFFFFFFFFF8LL) {
        do {
          v31 = *v17;
          if ((unsigned int)(v31 - 97) < 6) {
            LOBYTE(v31) = v31 - 32;
          }
          *v17 = v31;
          v32 = v17[1];
          if ((unsigned int)(v32 - 97) < 6) {
            LOBYTE(v32) = v32 - 32;
          }
          v17[1] = v32;
          v33 = v17[2];
          if ((unsigned int)(v33 - 97) < 6) {
            LOBYTE(v33) = v33 - 32;
          }
          v17[2] = v33;
          v34 = v17[3];
          if ((unsigned int)(v34 - 97) < 6) {
            LOBYTE(v34) = v34 - 32;
          }
          v17[3] = v34;
          v35 = v17[4];
          if ((unsigned int)(v35 - 97) < 6) {
            LOBYTE(v35) = v35 - 32;
          }
          v17[4] = v35;
          v36 = v17[5];
          if ((unsigned int)(v36 - 97) < 6) {
            LOBYTE(v36) = v36 - 32;
          }
          v17[5] = v36;
          v37 = v17[6];
          if ((unsigned int)(v37 - 97) < 6) {
            LOBYTE(v37) = v37 - 32;
          }
          v17[6] = v37;
          v38 = v17[7];
          if ((unsigned int)(v38 - 97) < 6) {
            LOBYTE(v38) = v38 - 32;
          }
          v17[7] = v38;
          v17 += 8;
        } while (v17 != (unsigned __int8*)v26);
      }
    }
  }
  v39 = *(_DWORD*)(v18 + 8) & 0xB0;
  if (v39 == 32) {
    v40 = (unsigned __int8*)v26;
    goto LABEL_60;
  }
  if (v39 != 16) {
  LABEL_59:
    v40 = &v45;
    goto LABEL_60;
  }
  if (v45 != 45 && v45 != 43) {
    if (v26 - (char*)&v45 >= 2 && v45 == 48 && (v46 | 0x20) == 0x78) {
      v40 = v47;
      goto LABEL_60;
    }
    goto LABEL_59;
  }
  v40 = &v46;
LABEL_60:
  nvidia_be650((void*)(&v42), v18),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nvidia_cdb60(&v45, v40, v27, (__int64)v44, v49, &v43, &v42),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&v42),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return NgxRoutine_d7f40(v20, (__int64)v44, v49[0], v43, v18, v16);
}

__int64 nvidia_cc0dc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  unsigned __int8* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  unsigned int v23;
  char v24;
  char* v25;
  unsigned __int8* v26;
  __int64 v28;
  unsigned __int8* v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  unsigned __int8* v40;
  __int64 v42;
  __int64 v43;
  _BYTE v44[180];
  unsigned __int8 v45;
  unsigned __int8 v46;
  _BYTE v47[22];
  _QWORD v48[2];
  __int64 v49[7];

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&a9),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  _Unwind_Resume_plt(a1),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v48[0] = v9;
  v48[1] = v12;
  v49[6] = a1;
  v14 = *(_DWORD*)(v13 + 8);
  v16 = v15;
  v17 = &v45;
  v18 = v13;
  v20 = v19;
  v21 = v14 & 0x4A;
  if (v21 == 8) {
    v22 = 16;
  }
  else {
    v22 = 10;
  }
  if (v21 == 64) {
    v23 = 8;
  }
  else {
    v23 = v22;
  }
  if (v11 != 0 && (v14 & 0x200) != 0) {
    if (v21 == 64) {
      v17 = &v46;
      v45 = 48;
    }
    else if (v21 == 8) {
      v17 = v47;
      v45 = 48;
      if ((v14 & 0x4000) != 0) {
        v24 = 88;
      }
      else {
        v24 = 120;
      }
      v46 = v24;
    }
  }
  v25 = nvidia_e1af0(v17, (char*)v48, v11, v23),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v26 = (unsigned __int8*)v25;
  if ((~v14 & 0x4008) == 0 && v17 != (unsigned __int8*)v25) {
    v28 = ((_BYTE)v25 - (_BYTE)v17) & 7;
    v29 = v17;
    if ((((_BYTE)v25 - (_BYTE)v17) & 7) != 0) {
      v29 = v17;
      do {
        v30 = *v29;
        if ((unsigned int)(v30 - 97) < 6) {
          LOBYTE(v30) = v30 - 32;
        }
        --v28;
        *v29++ = v30;
      } while (v28 != 0);
    }
    if ((unsigned __int64)(v17 - (unsigned __int8*)v25) <=
        0xFFFFFFFFFFFFFFF8LL) {
      do {
        v31 = *v29;
        if ((unsigned int)(v31 - 97) < 6) {
          LOBYTE(v31) = v31 - 32;
        }
        *v29 = v31;
        v32 = v29[1];
        if ((unsigned int)(v32 - 97) < 6) {
          LOBYTE(v32) = v32 - 32;
        }
        v29[1] = v32;
        v33 = v29[2];
        if ((unsigned int)(v33 - 97) < 6) {
          LOBYTE(v33) = v33 - 32;
        }
        v29[2] = v33;
        v34 = v29[3];
        if ((unsigned int)(v34 - 97) < 6) {
          LOBYTE(v34) = v34 - 32;
        }
        v29[3] = v34;
        v35 = v29[4];
        if ((unsigned int)(v35 - 97) < 6) {
          LOBYTE(v35) = v35 - 32;
        }
        v29[4] = v35;
        v36 = v29[5];
        if ((unsigned int)(v36 - 97) < 6) {
          LOBYTE(v36) = v36 - 32;
        }
        v29[5] = v36;
        v37 = v29[6];
        if ((unsigned int)(v37 - 97) < 6) {
          LOBYTE(v37) = v37 - 32;
        }
        v29[6] = v37;
        v38 = v29[7];
        if ((unsigned int)(v38 - 97) < 6) {
          LOBYTE(v38) = v38 - 32;
        }
        v29[7] = v38;
        v29 += 8;
      } while (v29 != (unsigned __int8*)v25);
    }
  }
  v39 = *(_DWORD*)(v18 + 8) & 0xB0;
  if (v39 == 32) {
    v40 = (unsigned __int8*)v25;
    goto LABEL_54;
  }
  if (v39 != 16) {
  LABEL_53:
    v40 = &v45;
    goto LABEL_54;
  }
  if (v45 != 45 && v45 != 43) {
    if (v25 - (char*)&v45 >= 2 && v45 == 48 && (v46 | 0x20) == 0x78) {
      v40 = v47;
      goto LABEL_54;
    }
    goto LABEL_53;
  }
  v40 = &v46;
LABEL_54:
  nvidia_be650((void*)(&v42), v18),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nvidia_cdb60(&v45, v40, v26, (__int64)v44, v49, &v43, &v42),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&v42),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return NgxRoutine_d7f40(v20, (__int64)v44, v49[0], v43, v18, v16);
}

__int64 nvidia_cc3f0(__int64 a1, __int64 a2, __int64 a3, int a4,
                     unsigned __int64 a5)
{
  __int64 v5;
  __int64 v6;
  int v7;
  unsigned __int8* v9;
  int v12;
  int v13;
  unsigned int v14;
  char v15;
  char* v16;
  unsigned __int8* v17;
  __int64 v19;
  unsigned __int8* v20;
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
  unsigned __int8* v31;
  __int64 v33;
  __int64 v34;
  _BYTE v35[180];
  unsigned __int8 v36;
  unsigned __int8 v37;
  _BYTE v38[22];
  _QWORD v39[2];
  __int64 v40;

  v39[0] = v5;
  v39[1] = v6;
  v7 = *(_DWORD*)(a3 + 8);
  v9 = &v36;
  v12 = v7 & 0x4A;
  if (v12 == 8) {
    v13 = 16;
  }
  else {
    v13 = 10;
  }
  if (v12 == 64) {
    v14 = 8;
  }
  else {
    v14 = v13;
  }
  if (a5 != 0 && (v7 & 0x200) != 0) {
    if (v12 == 64) {
      v9 = &v37;
      v36 = 48;
    }
    else if (v12 == 8) {
      v9 = v38;
      v36 = 48;
      if ((v7 & 0x4000) != 0) {
        v15 = 88;
      }
      else {
        v15 = 120;
      }
      v37 = v15;
    }
  }
  v16 = nvidia_e1af0(v9, (char*)v39, a5, v14);
  v17 = (unsigned __int8*)v16;
  if ((~v7 & 0x4008) == 0 && v9 != (unsigned __int8*)v16) {
    v19 = ((_BYTE)v16 - (_BYTE)v9) & 7;
    v20 = v9;
    if ((((_BYTE)v16 - (_BYTE)v9) & 7) != 0) {
      v20 = v9;
      do {
        v21 = *v20;
        if ((unsigned int)(v21 - 97) < 6) {
          LOBYTE(v21) = v21 - 32;
        }
        --v19;
        *v20++ = v21;
      } while (v19 != 0);
    }
    if ((unsigned __int64)(v9 - (unsigned __int8*)v16) <=
        0xFFFFFFFFFFFFFFF8LL) {
      do {
        v22 = *v20;
        if ((unsigned int)(v22 - 97) < 6) {
          LOBYTE(v22) = v22 - 32;
        }
        *v20 = v22;
        v23 = v20[1];
        if ((unsigned int)(v23 - 97) < 6) {
          LOBYTE(v23) = v23 - 32;
        }
        v20[1] = v23;
        v24 = v20[2];
        if ((unsigned int)(v24 - 97) < 6) {
          LOBYTE(v24) = v24 - 32;
        }
        v20[2] = v24;
        v25 = v20[3];
        if ((unsigned int)(v25 - 97) < 6) {
          LOBYTE(v25) = v25 - 32;
        }
        v20[3] = v25;
        v26 = v20[4];
        if ((unsigned int)(v26 - 97) < 6) {
          LOBYTE(v26) = v26 - 32;
        }
        v20[4] = v26;
        v27 = v20[5];
        if ((unsigned int)(v27 - 97) < 6) {
          LOBYTE(v27) = v27 - 32;
        }
        v20[5] = v27;
        v28 = v20[6];
        if ((unsigned int)(v28 - 97) < 6) {
          LOBYTE(v28) = v28 - 32;
        }
        v20[6] = v28;
        v29 = v20[7];
        if ((unsigned int)(v29 - 97) < 6) {
          LOBYTE(v29) = v29 - 32;
        }
        v20[7] = v29;
        v20 += 8;
      } while (v20 != (unsigned __int8*)v16);
    }
  }
  v30 = *(_DWORD*)(a3 + 8) & 0xB0;
  if (v30 == 32) {
    v31 = (unsigned __int8*)v16;
    goto LABEL_54;
  }
  if (v30 != 16) {
  LABEL_53:
    v31 = &v36;
    goto LABEL_54;
  }
  if (v36 != 45 && v36 != 43) {
    if (v16 - (char*)&v36 >= 2 && v36 == 48 && (v37 | 0x20) == 0x78) {
      v31 = v38;
      goto LABEL_54;
    }
    goto LABEL_53;
  }
  v31 = &v37;
LABEL_54:
  nvidia_be650((void*)(&v33), a3);
  nvidia_cdb60(&v36, v31, v17, (__int64)v35, &v40, &v34, &v33);
  NgxRoutine_db240(&v33);
  return NgxRoutine_d7f40(a2, (__int64)v35, v40, v34, a3, a4);
}

void __attribute__((noreturn)) nvidia_ccb00(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v4 = _Unwind_Resume_plt(a1);
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v5 = _Unwind_Resume_plt(v4);
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v6 = _Unwind_Resume_plt(v5);
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v7 = _Unwind_Resume_plt(v6);
  v8 = _Unwind_Resume_plt(v7);
  v9 = _Unwind_Resume_plt(v8);
  if (v1 == 0) {
    while (1) {
      _Unwind_Resume_plt(v9);
      free_plt(v2);
    }
  }
  free_plt(v1);
  _Unwind_Resume_plt(v9);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_ccfdc(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v4 = _Unwind_Resume_plt(a1);
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v5 = _Unwind_Resume_plt(v4);
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v6 = _Unwind_Resume_plt(v5);
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v7 = _Unwind_Resume_plt(v6);
  v8 = _Unwind_Resume_plt(v7);
  v9 = _Unwind_Resume_plt(v8);
  if (v1 == 0) {
    while (1) {
      _Unwind_Resume_plt(v9);
      free_plt(v2);
    }
  }
  free_plt(v1);
  _Unwind_Resume_plt(v9);
  __udf(0);
}

__int64 nvidia_cd0a0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3;
  __int64 result;

  v3 = *(_DWORD*)(a3 + 8);
  *(_DWORD*)(a3 + 8) = v3 & 0xFFFFBDB5 | 0x208;
  result = ((__int64 (*)(void))NgxRoutine_cc100)();
  *(_DWORD*)(a3 + 8) = v3;
  return result;
}

__int64 nvidia_cd0e0(unsigned __int8* a1, unsigned __int8* a2,
                     unsigned __int8* a3, __int64 a4, _QWORD* a5, _QWORD* a6,
                     __int64* a7)
{
  __int64 v7;
  void* v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  void* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  int v25;
  unsigned __int8* v26;
  char v27;
  _BYTE* v28;
  char v29;
  _BYTE* v30;
  char v31;
  _BYTE* v32;
  unsigned __int8* v33;
  unsigned __int8* v34;
  unsigned __int8 v35;
  __int64 result;
  char v37;
  unsigned int v38;
  int v39;
  unsigned __int8* v40;
  char* v41;
  char* v42;
  _BYTE* v43;
  unsigned __int64 v44;
  unsigned int v45;
  _BYTE* v46;
  _BYTE* v47;
  _BYTE* v48;
  unsigned __int64 v49;
  bool v50;
  unsigned __int64 v51;
  char v52;
  _BYTE* v53;
  __int64 v54;
  unsigned __int8* v55;
  unsigned __int8* v56;
  struct {
    unsigned __int64 v57;
    unsigned __int64 v58;
    char* v59;
  } v57_;
  void* v60;
  unsigned __int64* v61;

  v7 = *a7;
  v15 = NgxData_9511b8;
  v60 = NgxData_9511b8;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511b8,
                           memory_order_acquire) != -1) {
    v57_.v57 = (unsigned __int64)&v60;
    v61 = &v57_.v57;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511b8, (__int64)&v61,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v16 = *(_QWORD*)(v7 + 16);
  v17 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v15) - 1LL;
  if (v17 < (*(_QWORD*)(v7 + 24) - v16) >> 3) {
    v18 = *(_QWORD*)(v16 + 8 * v17);
    if (v18 != 0) {
      v19 = *a7;
      v20 = NgxData_9511c0;
      v60 = NgxData_9511c0;
      if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511c0,
                               memory_order_acquire) != -1) {
        v57_.v57 = (unsigned __int64)&v60;
        v61 = &v57_.v57;
        NgxRoutine_e21e0((unsigned __int64*)NgxData_9511c0, (__int64)&v61,
                         (void (*)(__int64))NgxRoutine_e0c40);
      }
      v21 = *(_QWORD*)(v19 + 16);
      v22 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v20) - 1LL;
      if (v22 < (*(_QWORD*)(v19 + 24) - v21) >> 3) {
        v23 = *(_QWORD*)(v21 + 8 * v22);
        if (v23 != 0) {
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
              *(_QWORD*)v23 + 40LL))((void*)(&v57_.v57),
                                     *(_QWORD*)(v21 + 8 * v22));
          if ((v57_.v57 & 1) != 0) {
            v24 = v57_.v58;
          }
          else {
            v24 = (unsigned __int64)(unsigned __int8)v57_.v57 >> 1;
          }
          if (v24 != 0) {
            *a6 = a4;
            v55 = a2;
            v25 = *a1;
            if (v25 == 45 || (v26 = a1, v25 == 43)) {
              v27 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 56LL))(v18);
              v28 = (_BYTE*)*a6;
              v26 = a1 + 1;
              ++*a6;
              *v28 = v27;
            }
            if (a3 - v26 >= 2 && *v26 == 48 && (v26[1] | 0x20) == 0x78) {
              v29 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v18 + 56LL))(
                  v18, 48);
              v30 = (_BYTE*)(*a6)++;
              *v30 = v29;
              v31 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v18 + 56LL))(
                  v18, v26[1]);
              v32 = (_BYTE*)*a6;
              v26 += 2;
              ++*a6;
              *v32 = v31;
            }
            v56 = v26;
            v54 = a4;
            if (v26 != a3) {
              v33 = a3 - 1;
              if (v26 < a3 - 1) {
                v34 = v26 + 1;
                do {
                  v35 = *(v34 - 1);
                  *(v34 - 1) = *v33;
                  *v33-- = v35;
                  v50 = v34++ >= v33;
                } while (!v50);
              }
            }
            result = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 32LL))(v23);
            if (v26 < a3) {
              v37 = result;
              v38 = 0;
              v39 = 0;
              v40 = (unsigned __int8*)(a3 - v26);
              do {
                v41 = (char*)&v57_.v57 + 1;
                if ((v57_.v57 & 1) != 0) {
                  v41 = v57_.v59;
                }
                if (v41[v38] != 0) {
                  v42 = (char*)&v57_.v57 + 1;
                  if ((v57_.v57 & 1) != 0) {
                    v42 = v57_.v59;
                  }
                  if (v39 == (unsigned __int8)v42[v38]) {
                    v43 = (_BYTE*)(*a6)++;
                    *v43 = v37;
                    if ((v57_.v57 & 1) != 0) {
                      v44 = v57_.v58;
                    }
                    else {
                      v44 = (unsigned __int64)(unsigned __int8)v57_.v57 >> 1;
                    }
                    if (v44 - 1 > v38) {
                      ++v38;
                    }
                    v39 = 0;
                  }
                }
                v45 = *v26++;
                result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v18 +
                                                           56LL))(v18, v45);
                v46 = (_BYTE*)*a6;
                ++v39;
                --v40;
                ++*a6;
                *v46 = result;
              } while (v40 != nullptr);
            }
            a2 = v55;
            a4 = v54;
            v47 = (_BYTE*)*a6;
            v48 = (_BYTE*)(*a6 - 1LL);
            v49 = v54 + v56 - a1;
            v50 = v49 == *a6 || v49 >= (unsigned __int64)v48;
            if (!v50) {
              v51 = v56 - a1 + v54 + 1;
              do {
                v52 = *(_BYTE*)(v51 - 1);
                *(_BYTE*)(v51 - 1) = *v48;
                *v48-- = v52;
                v50 = v51++ >= (unsigned __int64)v48;
              } while (!v50);
              v47 = (_BYTE*)*a6;
            }
          }
          else {
            result =
                (*(__int64 (**)(__int64, unsigned __int8*, unsigned __int8*,
                                __int64))(*(_QWORD*)v18 + 64LL))(v18, a1, a3,
                                                                 a4);
            v47 = (_BYTE*)(a4 + a3 - a1);
            *a6 = v47;
          }
          v53 = (_BYTE*)(a4 + a2 - a1);
          if (a2 == a3) {
            v53 = v47;
          }
          *a5 = v53;
          if ((v57_.v57 & 1) != 0) {
            return NgxRoutine_430(v57_.v59, v57_.v57 & 0xFFFFFFFFFFFFFFFELL);
          }
          return result;
        }
      }
    }
  }
  NgxRoutine_db120();
}

__int64 nvidia_cd500(unsigned __int8* a1, __int64 a2, unsigned __int8* a3,
                     unsigned __int64 a4, unsigned __int64* a5,
                     unsigned __int64* a6, __int64* a7)
{
  __int64 v7;
  void* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  void* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int8* v23;
  int v24;
  unsigned __int8* v25;
  char v26;
  _BYTE* v27;
  char v28;
  _BYTE* v29;
  char v30;
  _BYTE* v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int8* v34;
  unsigned int v35;
  unsigned int v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int8* v39;
  unsigned __int64 v40;
  unsigned __int8 v41;
  char v42;
  char v43;
  unsigned int v44;
  int v45;
  unsigned __int8* v46;
  char* v47;
  char* v48;
  _BYTE* v49;
  unsigned __int64 v50;
  unsigned int v51;
  char v52;
  _BYTE* v53;
  _BYTE* v54;
  unsigned __int64 v55;
  bool v56;
  unsigned __int64 v57;
  char v58;
  char v59;
  _BYTE* v60;
  char v61;
  _BYTE* v62;
  __int64 result;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64* v69;
  struct {
    unsigned __int64 v71;
    unsigned __int64 v72;
    char* v73;
  } v71_;
  void* v74;
  unsigned __int64* v75;

  v7 = *a7;
  v14 = NgxData_9511b8;
  v74 = NgxData_9511b8;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511b8,
                           memory_order_acquire) != -1) {
    v71_.v71 = (unsigned __int64)&v74;
    v75 = &v71_.v71;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511b8, (__int64)&v75,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v15 = *(_QWORD*)(v7 + 16);
  v16 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14) - 1LL;
  if (v16 < (*(_QWORD*)(v7 + 24) - v15) >> 3) {
    v17 = *(_QWORD*)(v15 + 8 * v16);
    if (v17 != 0) {
      v18 = *a7;
      v19 = NgxData_9511c0;
      v74 = NgxData_9511c0;
      if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511c0,
                               memory_order_acquire) != -1) {
        v71_.v71 = (unsigned __int64)&v74;
        v75 = &v71_.v71;
        NgxRoutine_e21e0((unsigned __int64*)NgxData_9511c0, (__int64)&v75,
                         (void (*)(__int64))NgxRoutine_e0c40);
      }
      v20 = *(_QWORD*)(v18 + 16);
      v21 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v19) - 1LL;
      if (v21 < (*(_QWORD*)(v18 + 24) - v20) >> 3) {
        v22 = *(_QWORD*)(v20 + 8 * v21);
        if (v22 != 0) {
          v67 = *(_QWORD*)(v20 + 8 * v21);
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
              *(_QWORD*)v22 + 40LL))((void*)(&v71_.v71), (__int64)v22);
          v23 = a1;
          *a6 = a4;
          v24 = *a1;
          if (v24 == 45 || (v25 = a1, v24 == 43)) {
            v26 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 56LL))(v17);
            v27 = (_BYTE*)*a6;
            v25 = a1 + 1;
            ++*a6;
            *v27 = v26;
          }
          v68 = a2;
          v69 = a5;
          if (a3 - v25 >= 2 && *v25 == 48 && (v25[1] | 0x20) == 0x78) {
            v28 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v17 + 56LL))(v17,
                                                                            48);
            v29 = (_BYTE*)(*a6)++;
            *v29 = v28;
            v30 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v17 + 56LL))(
                v17, v25[1]);
            v31 = (_BYTE*)*a6;
            v32 = (unsigned __int64)(v25 + 2);
            ++*a6;
            *v31 = v30;
            if (v25 + 2 < a3) {
              v33 = a4;
              v34 = v25 + 2;
              while (1) {
                v35 = *v34;
                if ((atomic_load_explicit(
                         (atomic_uchar* volatile)&NgxData_2b89de8,
                         memory_order_acquire) &
                     1) == 0 &&
                    (unsigned int)__cxa_guard_acquire_plt(&NgxData_2b89de8) !=
                        0) {
                  NgxData_2b89de0 = newlocale_plt(0x7FFFFFFF, "C", 0);
                  __cxa_guard_release_plt(&NgxData_2b89de8);
                }
                if ((unsigned int)isxdigit_l_plt(v35, NgxData_2b89de0) == 0) {
                  goto LABEL_38;
                }
                if (++v34 == a3) {
                  v34 = a3;
                  goto LABEL_38;
                }
              }
            }
            v34 = v25 + 2;
            if ((v71_.v71 & 1) != 0) {
              v65 = v71_.v72;
            }
            else {
              v65 = (unsigned __int64)(unsigned __int8)v71_.v71 >> 1;
            }
            if (v65 == 0) {
              goto LABEL_35;
            }
          }
          else {
            if (v25 < a3) {
              v33 = a4;
              v34 = v25;
              while (1) {
                v36 = *v34;
                if ((atomic_load_explicit(
                         (atomic_uchar* volatile)&NgxData_2b89de8,
                         memory_order_acquire) &
                     1) == 0 &&
                    (unsigned int)__cxa_guard_acquire_plt(&NgxData_2b89de8) !=
                        0) {
                  NgxData_2b89de0 = newlocale_plt(0x7FFFFFFF, "C", 0);
                  __cxa_guard_release_plt(&NgxData_2b89de8);
                }
                if ((unsigned int)isdigit_l_plt(v36, NgxData_2b89de0) == 0) {
                  break;
                }
                if (++v34 == a3) {
                  v34 = a3;
                  break;
                }
              }
              v32 = (unsigned __int64)v25;
            LABEL_38:
              a4 = v33;
              v23 = a1;
              if ((v71_.v71 & 1) != 0) {
                v38 = v71_.v72;
              }
              else {
                v38 = (unsigned __int64)(unsigned __int8)v71_.v71 >> 1;
              }
              if (v38 != 0) {
                goto LABEL_42;
              }
            LABEL_35:
              (*(void (**)(__int64, unsigned __int64, unsigned __int8*,
                           _QWORD))(*(_QWORD*)v17 + 64LL))(v17, v32, v34, *a6);
              *a6 += (unsigned __int64)&v34[-v32];
              if (v34 < a3) {
                goto LABEL_70;
              }
              goto LABEL_74;
            }
            v34 = v25;
            v32 = (unsigned __int64)v25;
            if ((v71_.v71 & 1) != 0) {
              v37 = v71_.v72;
            }
            else {
              v37 = (unsigned __int64)(unsigned __int8)v71_.v71 >> 1;
            }
            if (v37 == 0) {
              goto LABEL_35;
            }
          }
        LABEL_42:
          v66 = a4;
          if ((unsigned __int8*)v32 != v34) {
            v39 = v34 - 1;
            if (v32 < (unsigned __int64)(v34 - 1)) {
              v40 = v32 + 1;
              do {
                v41 = *(_BYTE*)(v40 - 1);
                *(_BYTE*)(v40 - 1) = *v39;
                *v39-- = v41;
                v56 = v40++ >= (unsigned __int64)v39;
              } while (!v56);
            }
          }
          v42 = (*(__int64 (**)(__int64))(*(_QWORD*)v67 + 32LL))(v67);
          if (v32 < (unsigned __int64)v34) {
            v43 = v42;
            v44 = 0;
            v45 = 0;
            v46 = (unsigned __int8*)v32;
            do {
              v47 = (char*)&v71_.v71 + 1;
              if ((v71_.v71 & 1) != 0) {
                v47 = v71_.v73;
              }
              if (v47[v44] != 0) {
                v48 = (char*)&v71_.v71 + 1;
                if ((v71_.v71 & 1) != 0) {
                  v48 = v71_.v73;
                }
                if (v45 == (unsigned __int8)v48[v44]) {
                  v49 = (_BYTE*)(*a6)++;
                  *v49 = v43;
                  if ((v71_.v71 & 1) != 0) {
                    v50 = v71_.v72;
                  }
                  else {
                    v50 = (unsigned __int64)(unsigned __int8)v71_.v71 >> 1;
                  }
                  if (v50 - 1 > v44) {
                    ++v44;
                  }
                  v45 = 0;
                }
              }
              v51 = *v46++;
              v52 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v17 + 56LL))(
                  v17, v51);
              v53 = (_BYTE*)*a6;
              ++v45;
              ++*a6;
              *v53 = v52;
            } while (v46 != v34);
          }
          v23 = a1;
          a4 = v66;
          v54 = (_BYTE*)(*a6 - 1);
          v55 = v66 + v32 - (_QWORD)a1;
          v56 = v55 == *a6 || v55 >= (unsigned __int64)v54;
          if (!v56) {
            v57 = v32 - (_QWORD)a1 + v66 + 1;
            do {
              v58 = *(_BYTE*)(v57 - 1);
              *(_BYTE*)(v57 - 1) = *v54;
              *v54-- = v58;
              v56 = v57++ >= (unsigned __int64)v54;
            } while (!v56);
          }
          if (v34 < a3) {
          LABEL_70:
            while (*v34 != 46) {
              v59 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 56LL))(v17);
              v60 = (_BYTE*)*a6;
              ++v34;
              ++*a6;
              *v60 = v59;
              if (v34 == a3) {
                goto LABEL_74;
              }
            }
            v61 = (*(__int64 (**)(__int64))(*(_QWORD*)v67 + 24LL))(v67);
            v62 = (_BYTE*)*a6;
            ++v34;
            ++*a6;
            *v62 = v61;
          }
        LABEL_74:
          result = (*(__int64 (**)(__int64, unsigned __int8*, unsigned __int8*,
                                   _QWORD))(*(_QWORD*)v17 + 64LL))(v17, v34, a3,
                                                                   *a6);
          v64 = *a6 + a3 - v34;
          *a6 = v64;
          if ((unsigned __int8*)v68 != a3) {
            v64 = a4 + v68 - (_QWORD)v23;
          }
          *v69 = v64;
          if ((v71_.v71 & 1) != 0) {
            return NgxRoutine_430(v71_.v73, v71_.v71 & 0xFFFFFFFFFFFFFFFELL);
          }
          return result;
        }
      }
    }
  }
  NgxRoutine_db120();
}

__int64 nvidia_cdb60(unsigned __int8* a1, unsigned __int8* a2,
                     unsigned __int8* a3, __int64 a4, _QWORD* a5, _QWORD* a6,
                     __int64* a7)
{
  __int64 v7;
  void* v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  void* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  int v25;
  unsigned __int8* v26;
  int v27;
  _DWORD* v28;
  int v29;
  _DWORD* v30;
  int v31;
  _DWORD* v32;
  unsigned __int8* v33;
  unsigned __int8* v34;
  unsigned __int8* v35;
  unsigned __int8 v36;
  bool v37;
  __int64 result;
  unsigned __int8* v39;
  unsigned __int8* v40;
  int v41;
  unsigned int v42;
  int v43;
  char* v44;
  char* v45;
  _DWORD* v46;
  unsigned __int64 v47;
  unsigned int v48;
  _DWORD* v49;
  _DWORD* v50;
  _DWORD* v51;
  unsigned __int64 v52;
  _DWORD* v53;
  unsigned __int64 v54;
  int v55;
  _DWORD* v56;
  unsigned __int8* v57;
  unsigned __int8* v58;
  _QWORD* v59;
  __int64 v60;
  struct {
    unsigned __int64 v61;
    unsigned __int64 v62;
    char* v63;
  } v61_;
  void* v64;
  unsigned __int64* v65;

  v7 = *a7;
  v15 = NgxData_9511d0;
  v64 = NgxData_9511d0;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511d0,
                           memory_order_acquire) != -1) {
    v61_.v61 = (unsigned __int64)&v64;
    v65 = &v61_.v61;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511d0, (__int64)&v65,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v16 = *(_QWORD*)(v7 + 16);
  v17 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v15) - 1LL;
  if (v17 < (*(_QWORD*)(v7 + 24) - v16) >> 3) {
    v18 = *(_QWORD*)(v16 + 8 * v17);
    if (v18 != 0) {
      v19 = *a7;
      v20 = NgxData_9511d8;
      v64 = NgxData_9511d8;
      if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511d8,
                               memory_order_acquire) != -1) {
        v61_.v61 = (unsigned __int64)&v64;
        v65 = &v61_.v61;
        NgxRoutine_e21e0((unsigned __int64*)NgxData_9511d8, (__int64)&v65,
                         (void (*)(__int64))NgxRoutine_e0c40);
      }
      v21 = *(_QWORD*)(v19 + 16);
      v22 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v20) - 1LL;
      if (v22 < (*(_QWORD*)(v19 + 24) - v21) >> 3) {
        v23 = *(_QWORD*)(v21 + 8 * v22);
        if (v23 != 0) {
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
              *(_QWORD*)v23 + 40LL))((void*)(&v61_.v61),
                                     *(_QWORD*)(v21 + 8 * v22));
          if ((v61_.v61 & 1) != 0) {
            v24 = v61_.v62;
          }
          else {
            v24 = (unsigned __int64)(unsigned __int8)v61_.v61 >> 1;
          }
          if (v24 == 0) {
            result =
                (*(__int64 (**)(__int64, unsigned __int8*, unsigned __int8*,
                                __int64))(*(_QWORD*)v18 + 96LL))(v18, a1, a3,
                                                                 a4);
            *a6 = a4 + 4 * (a3 - a1);
            goto LABEL_49;
          }
          *a6 = a4;
          v60 = a4;
          v25 = *a1;
          if (v25 == 45 || (v26 = a1, v25 == 43)) {
            v27 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 88LL))(v18);
            v28 = (_DWORD*)*a6;
            v26 = a1 + 1;
            *v28 = v27;
            *a6 = v28 + 1;
          }
          if (a3 - v26 >= 2 && *v26 == 48 && (v26[1] | 0x20) == 0x78) {
            v29 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v18 + 88LL))(v18,
                                                                            48);
            v30 = (_DWORD*)*a6;
            *v30 = v29;
            *a6 = v30 + 1;
            v31 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v18 + 88LL))(
                v18, v26[1]);
            v32 = (_DWORD*)*a6;
            v33 = v26 + 2;
            v26 = v33;
            *v32 = v31;
            *a6 = v32 + 1;
            if (v33 == a3) {
              goto LABEL_26;
            }
          }
          else {
            v33 = v26;
            if (v26 == a3) {
              goto LABEL_26;
            }
          }
          v34 = a3 - 1;
          if (v26 < a3 - 1) {
            v35 = v26 + 1;
            do {
              v36 = *(v35 - 1);
              *(v35 - 1) = *v34;
              *v34-- = v36;
              v37 = v35++ >= v34;
            } while (!v37);
          }
        LABEL_26:
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 32LL))(v23);
          if (v26 >= a3) {
            v51 = (_DWORD*)*a6;
            a4 = v60;
            v52 = v60 + 4 * (v33 - a1);
            if (v52 == *a6) {
              goto LABEL_49;
            }
            goto LABEL_45;
          }
          v58 = a2;
          v59 = a5;
          v39 = v33;
          v40 = (unsigned __int8*)(a3 - v33);
          v41 = result;
          v42 = 0;
          v43 = 0;
          v57 = v39;
          do {
            v44 = (char*)&v61_.v61 + 1;
            if ((v61_.v61 & 1) != 0) {
              v44 = v61_.v63;
            }
            if (v44[v42] != 0) {
              v45 = (char*)&v61_.v61 + 1;
              if ((v61_.v61 & 1) != 0) {
                v45 = v61_.v63;
              }
              if (v43 == (unsigned __int8)v45[v42]) {
                v46 = (_DWORD*)*a6;
                *v46 = v41;
                *a6 = v46 + 1;
                if ((v61_.v61 & 1) != 0) {
                  v47 = v61_.v62;
                }
                else {
                  v47 = (unsigned __int64)(unsigned __int8)v61_.v61 >> 1;
                }
                if (v47 - 1 > v42) {
                  ++v42;
                }
                v43 = 0;
              }
            }
            v48 = *v26++;
            result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v18 + 88LL))(
                v18, v48);
            v49 = (_DWORD*)*a6;
            ++v43;
            --v40;
            v50 = (_DWORD*)*a6;
            *v50 = result;
            *a6 = v50 + 1;
          } while (v40 != nullptr);
          a2 = v58;
          a5 = v59;
          v33 = v57;
          v51 = v49 + 1;
          a4 = v60;
          v52 = v60 + 4 * (v57 - a1);
          if ((_DWORD*)v52 != v51) {
          LABEL_45:
            v53 = v51 - 1;
            if (v52 < (unsigned __int64)v53) {
              v54 = a4 - 4LL * (_QWORD)a1 + 4LL * (_QWORD)v33 + 4;
              do {
                v55 = *(_DWORD*)(v54 - 4);
                *(_DWORD*)(v54 - 4) = *v53;
                *v53-- = v55;
                v37 = v54 >= (unsigned __int64)v53;
                v54 += 4LL;
              } while (!v37);
            }
          }
        LABEL_49:
          v56 = (_DWORD*)(a4 + 4 * (a2 - a1));
          if (a2 == a3) {
            v56 = (_DWORD*)*a6;
          }
          *a5 = v56;
          if ((v61_.v61 & 1) != 0) {
            return NgxRoutine_430(v61_.v63, v61_.v61 & 0xFFFFFFFFFFFFFFFELL);
          }
          return result;
        }
      }
    }
  }
  NgxRoutine_db120();
}

__int64 nvidia_cdfa0(unsigned __int8* a1, __int64 a2, unsigned __int8* a3,
                     __int64 a4, __int64* a5, __int64* a6, __int64* a7)
{
  __int64 v7;
  void* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  void* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  unsigned __int8* v25;
  int v26;
  _DWORD* v27;
  int v28;
  _DWORD* v29;
  int v30;
  _DWORD* v31;
  unsigned __int64 v32;
  __int64* v33;
  unsigned __int8* v34;
  unsigned int v35;
  unsigned int v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int8* v40;
  unsigned __int64 v41;
  unsigned __int8 v42;
  bool v43;
  int v44;
  int v45;
  unsigned int v46;
  int v47;
  unsigned __int8* v48;
  char* v49;
  char* v50;
  _DWORD* v51;
  unsigned __int64 v52;
  unsigned int v53;
  int v54;
  __int64 v55;
  _DWORD* v56;
  unsigned __int64 v57;
  _DWORD* v58;
  unsigned __int64 v59;
  int v60;
  int v61;
  __int64 v62;
  _DWORD* v63;
  int v64;
  _DWORD* v65;
  __int64 result;
  unsigned __int64 v67;
  unsigned __int64 v68;
  __int64* v69;
  __int64 v70;
  __int64 v71;
  unsigned __int8* v73;
  struct {
    unsigned __int64 v74;
    unsigned __int64 v75;
    char* v76;
  } v74_;
  void* v77;
  unsigned __int64* v78;

  v7 = *a7;
  v14 = NgxData_9511d0;
  v77 = NgxData_9511d0;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511d0,
                           memory_order_acquire) != -1) {
    v74_.v74 = (unsigned __int64)&v77;
    v78 = &v74_.v74;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511d0, (__int64)&v78,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v15 = *(_QWORD*)(v7 + 16);
  v16 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14) - 1LL;
  if (v16 < (*(_QWORD*)(v7 + 24) - v15) >> 3) {
    v17 = *(_QWORD*)(v15 + 8 * v16);
    if (v17 != 0) {
      v18 = *a7;
      v19 = NgxData_9511d8;
      v77 = NgxData_9511d8;
      if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511d8,
                               memory_order_acquire) != -1) {
        v74_.v74 = (unsigned __int64)&v77;
        v78 = &v74_.v74;
        NgxRoutine_e21e0((unsigned __int64*)NgxData_9511d8, (__int64)&v78,
                         (void (*)(__int64))NgxRoutine_e0c40);
      }
      v20 = *(_QWORD*)(v18 + 16);
      v21 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v19) - 1LL;
      if (v21 < (*(_QWORD*)(v18 + 24) - v20) >> 3) {
        v22 = *(_QWORD*)(v20 + 8 * v21);
        if (v22 != 0) {
          v70 = *(_QWORD*)(v20 + 8 * v21);
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
              *(_QWORD*)v22 + 40LL))((void*)(&v74_.v74), (__int64)v22);
          v23 = a4;
          *a6 = a4;
          v24 = *a1;
          if (v24 == 45 || (v25 = a1, v24 == 43)) {
            v26 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 88LL))(v17);
            v27 = (_DWORD*)*a6;
            v25 = a1 + 1;
            *v27 = v26;
            *a6 = (__int64)(v27 + 1);
          }
          v71 = a2;
          v73 = a1;
          if (a3 - v25 >= 2 && *v25 == 48 && (v25[1] | 0x20) == 0x78) {
            v28 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v17 + 88LL))(v17,
                                                                            48);
            v29 = (_DWORD*)*a6;
            *v29 = v28;
            *a6 = (__int64)(v29 + 1);
            v30 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v17 + 88LL))(
                v17, v25[1]);
            v31 = (_DWORD*)*a6;
            v32 = (unsigned __int64)(v25 + 2);
            *v31 = v30;
            *a6 = (__int64)(v31 + 1);
            if (v25 + 2 < a3) {
              v33 = a5;
              v34 = v25 + 2;
              while (1) {
                v35 = *v34;
                if ((atomic_load_explicit(
                         (atomic_uchar* volatile)&NgxData_2b89de8,
                         memory_order_acquire) &
                     1) == 0 &&
                    (unsigned int)__cxa_guard_acquire_plt(&NgxData_2b89de8) !=
                        0) {
                  NgxData_2b89de0 = newlocale_plt(0x7FFFFFFF, "C", 0);
                  __cxa_guard_release_plt(&NgxData_2b89de8);
                }
                if ((unsigned int)isxdigit_l_plt(v35, NgxData_2b89de0) == 0) {
                  goto LABEL_38;
                }
                if (++v34 == a3) {
                  v34 = a3;
                  goto LABEL_38;
                }
              }
            }
            v34 = v25 + 2;
            if ((v74_.v74 & 1) != 0) {
              v68 = v74_.v75;
            }
            else {
              v68 = (unsigned __int64)(unsigned __int8)v74_.v74 >> 1;
            }
            if (v68 == 0) {
              goto LABEL_35;
            }
          LABEL_42:
            if ((unsigned __int8*)v32 != v34) {
              v40 = v34 - 1;
              if (v32 < (unsigned __int64)(v34 - 1)) {
                v41 = v32 + 1;
                do {
                  v42 = *(_BYTE*)(v41 - 1);
                  *(_BYTE*)(v41 - 1) = *v40;
                  *v40-- = v42;
                  v43 = v41++ >= (unsigned __int64)v40;
                } while (!v43);
              }
            }
            v44 = (*(__int64 (**)(__int64))(*(_QWORD*)v70 + 32LL))(v70);
            if (v32 >= (unsigned __int64)v34) {
              v38 = *a6;
              v57 = v23 + 4 * (v32 - (_QWORD)v73);
              if (v57 == *a6) {
                goto LABEL_69;
              }
            }
            else {
              v45 = v44;
              v69 = a5;
              v46 = 0;
              v47 = 0;
              v48 = (unsigned __int8*)v32;
              do {
                v49 = (char*)&v74_.v74 + 1;
                if ((v74_.v74 & 1) != 0) {
                  v49 = v74_.v76;
                }
                if (v49[v46] != 0) {
                  v50 = (char*)&v74_.v74 + 1;
                  if ((v74_.v74 & 1) != 0) {
                    v50 = v74_.v76;
                  }
                  if (v47 == (unsigned __int8)v50[v46]) {
                    v51 = (_DWORD*)*a6;
                    *v51 = v45;
                    *a6 = (__int64)(v51 + 1);
                    if ((v74_.v74 & 1) != 0) {
                      v52 = v74_.v75;
                    }
                    else {
                      v52 = (unsigned __int64)(unsigned __int8)v74_.v74 >> 1;
                    }
                    if (v52 - 1 > v46) {
                      ++v46;
                    }
                    v47 = 0;
                  }
                }
                v53 = *v48++;
                v54 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v17 + 88LL))(
                    v17, v53);
                v55 = *a6;
                ++v47;
                v56 = (_DWORD*)*a6;
                *v56 = v54;
                *a6 = (__int64)(v56 + 1);
              } while (v48 != v34);
              a5 = v69;
              v38 = v55 + 4;
              v23 = a4;
              v57 = a4 + 4 * (v32 - (_QWORD)v73);
              if (v57 == v55 + 4) {
              LABEL_69:
                if (v34 < a3) {
                  goto LABEL_70;
                }
                goto LABEL_74;
              }
            }
            v58 = (_DWORD*)(v38 - 4);
            if (v57 < v38 - 4) {
              v59 = v23 - 4LL * (_QWORD)v73 + 4 * v32 + 4;
              do {
                v60 = *(_DWORD*)(v59 - 4);
                *(_DWORD*)(v59 - 4) = *v58;
                *v58-- = v60;
                v43 = v59 >= (unsigned __int64)v58;
                v59 += 4LL;
              } while (!v43);
            }
            goto LABEL_69;
          }
          if (v25 >= a3) {
            v34 = v25;
            v32 = (unsigned __int64)v25;
            if ((v74_.v74 & 1) != 0) {
              v37 = v74_.v75;
            }
            else {
              v37 = (unsigned __int64)(unsigned __int8)v74_.v74 >> 1;
            }
            if (v37 == 0) {
              goto LABEL_35;
            }
            goto LABEL_42;
          }
          v33 = a5;
          v34 = v25;
          while (1) {
            v36 = *v34;
            if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b89de8,
                                      memory_order_acquire) &
                 1) == 0 &&
                (unsigned int)__cxa_guard_acquire_plt(&NgxData_2b89de8) != 0) {
              NgxData_2b89de0 = newlocale_plt(0x7FFFFFFF, "C", 0);
              __cxa_guard_release_plt(&NgxData_2b89de8);
            }
            if ((unsigned int)isdigit_l_plt(v36, NgxData_2b89de0) == 0) {
              break;
            }
            if (++v34 == a3) {
              v34 = a3;
              break;
            }
          }
          v32 = (unsigned __int64)v25;
        LABEL_38:
          a5 = v33;
          v23 = a4;
          if ((v74_.v74 & 1) != 0) {
            v39 = v74_.v75;
          }
          else {
            v39 = (unsigned __int64)(unsigned __int8)v74_.v74 >> 1;
          }
          if (v39 != 0) {
            goto LABEL_42;
          }
        LABEL_35:
          (*(void (**)(__int64, unsigned __int64, unsigned __int8*, _QWORD))(
              *(_QWORD*)v17 + 96LL))(v17, v32, v34, *a6);
          v38 = *a6 + 4LL * (_QWORD)&v34[-v32];
          *a6 = v38;
          if (v34 < a3) {
          LABEL_70:
            while (*v34 != 46) {
              v61 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 88LL))(v17);
              v62 = *a6;
              ++v34;
              v63 = (_DWORD*)*a6;
              *v63 = v61;
              *a6 = (__int64)(v63 + 1);
              if (v34 == a3) {
                v38 = v62 + 4;
                goto LABEL_74;
              }
            }
            v64 = (*(__int64 (**)(__int64))(*(_QWORD*)v70 + 24LL))(v70);
            v65 = (_DWORD*)*a6;
            ++v34;
            *v65 = v64;
            v38 = (__int64)(v65 + 1);
            *a6 = v38;
          }
        LABEL_74:
          result = (*(__int64 (**)(__int64, unsigned __int8*, unsigned __int8*,
                                   __int64))(*(_QWORD*)v17 + 96LL))(v17, v34,
                                                                    a3, v38);
          v67 = *a6 + 4 * (a3 - v34);
          *a6 = v67;
          if ((unsigned __int8*)v71 != a3) {
            v67 = v23 + 4 * (v71 - (_QWORD)v73);
          }
          *a5 = v67;
          if ((v74_.v74 & 1) != 0) {
            return NgxRoutine_430(v74_.v76, v74_.v74 & 0xFFFFFFFFFFFFFFFELL);
          }
          return result;
        }
      }
    }
  }
  NgxRoutine_db120();
}

_QWORD* nvidia_ce5ac(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                     __int64 a10, __int64 a11, __int64 a12, __int64 a13,
                     __int64 a14, __int64 a15, __int64 a16)
{
  __int64 v16;
  __int64 v18;
  __int64 v19;
  unsigned __int8* v20;
  unsigned __int8* v21;
  char* v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  _DWORD* v26;
  _DWORD* v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  _QWORD* v31;
  _QWORD* v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  void* v36;
  __int64 v37;
  unsigned __int64 v38;
  _QWORD* v39;
  _BOOL4 v40;
  int v41;
  int v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int8* v50;
  __int64 v51;
  char* v52;
  __int64 v53;
  int v54;
  __int64 v55;
  _BOOL4 v56;
  int v57;
  int v58;
  unsigned __int8* v59;
  __int64 v60;
  unsigned __int8 v61;
  __int64 v62;
  _BOOL4 v63;
  int v65;
  __int64 v66;
  void* v67;
  _QWORD* v68;
  _QWORD v69[13];

  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  __cxa_guard_abort_plt(&NgxData_2b89de8),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((a14 & 1) != 0) {
    NgxRoutine_430(a16, a14 & 0xFFFFFFFFFFFFFFFELL),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v18 = _Unwind_Resume_plt(a1),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v69[1] = v16;
  v69[2] = v19;
  v69[12] = a1;
  v21 = v20;
  v23 = v22;
  v25 = v24;
  v27 = v26;
  v29 = v28;
  v31 = v30;
  v33 = v32;
  v34 = v18;
  nvidia_be650((void*)(&v66), v28),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v35 = v66;
  v36 = NgxData_9511b8;
  v67 = NgxData_9511b8;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511b8,
                           memory_order_acquire) != -1) {
    v69[0] = &v67;
    v68 = v69;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511b8, (__int64)&v68,
                     (void (*)(__int64))NgxRoutine_e0c40),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v37 = *(_QWORD*)(v35 + 16);
  v38 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v36) - 1LL;
  if (v38 >= (*(_QWORD*)(v35 + 24) - v37) >> 3 ||
      (v39 = *(_QWORD**)(v37 + 8 * v38)) == nullptr) {
    NgxRoutine_db120(),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  NgxRoutine_db240(&v66),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *v27 = 0;
  if (v23 != (char*)v21) {
    do {
      if (v33 != nullptr) {
        if (v33[3] == v33[4]) {
          v41 = (*(__int64 (**)(_QWORD*))(*v33 + 72LL))(v33),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v40 = v41 == -1;
          if (v41 == -1) {
            v33 = nullptr;
          }
          if (v31 == nullptr) {
          LABEL_15:
            if (v40) {
              goto LABEL_79;
            }
            goto LABEL_24;
          }
        }
        else {
          v40 = false;
          if (v31 == nullptr) {
            goto LABEL_15;
          }
        }
      }
      else {
        v40 = true;
        if (v31 == nullptr) {
          goto LABEL_15;
        }
      }
      if (v31[3] == v31[4]) {
        v42 = (*(__int64 (**)(_QWORD*))(*v31 + 72LL))(v31),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v42 == -1) {
          v31 = nullptr;
        }
        if (((v40 ^ (v42 == -1)) & 1) == 0) {
        LABEL_79:
          *v27 = 4;
          break;
        }
      }
      else if (!v40) {
        goto LABEL_79;
      }
    LABEL_24:
      if ((*(unsigned __int8 (**)(_QWORD*, _QWORD, _QWORD))(*v39 + 72LL))(
              v39, (unsigned __int8)*v23, 0) == 37) {
        if (v23 + 1 == (char*)v21) {
          goto LABEL_79;
        }
        v43 = (*(__int64 (**)(_QWORD*, _QWORD, _QWORD))(*v39 + 72LL))(
            v39, (unsigned __int8)v23[1], 0),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v44 = v43;
        if ((unsigned __int8)v43 == 69 || (unsigned __int8)v43 == 48) {
          if (v23 + 2 == (char*)v21) {
            goto LABEL_79;
          }
          v45 = (*(__int64 (**)(_QWORD*, _QWORD, _QWORD))(*v39 + 72LL))(
              v39, (unsigned __int8)v23[2], 0),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v46 = 2;
          v47 = v44;
          v44 = v45;
        }
        else {
          v47 = 0;
          v46 = 1;
        }
        v23 += v46;
        v33 = (_QWORD*)(*(__int64 (**)(__int64, _QWORD*, _QWORD*, __int64,
                                       _DWORD*, __int64, _QWORD, __int64))(
            *(_QWORD*)v34 + 72LL))(v34, v33, v31, v29, v27, v25, v44, v47),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        goto LABEL_36;
      }
      v48 = *v23;
      if ((v48 & 0x8000000000000000LL) == 0) {
        v49 = v39[2];
        if ((*(_WORD*)(v49 + 2 * v48) & 0x2000) != 0) {
          v52 = v23 + 1;
          while (1) {
            if (v52 == (char*)v21) {
              v23 = (char*)v21;
              if (v33 == nullptr) {
                goto LABEL_77;
              }
              goto LABEL_57;
            }
            v53 = *v52;
            if (v53 < 0) {
              break;
            }
            ++v23;
            ++v52;
            if ((*(_WORD*)(v49 + 2 * v53) & 0x2000) == 0) {
              goto LABEL_56;
            }
          }
          v23 = v52;
          if (v33 == nullptr) {
            goto LABEL_77;
          }
        LABEL_57:
          while (v33[3] == v33[4]) {
            v57 = (*(__int64 (**)(_QWORD*))(*v33 + 72LL))(v33),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v32 = COERCE_AS(__typeof__(v32),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v56 = v57 == -1;
            if (v57 == -1) {
              v33 = nullptr;
            }
            if (v31 == nullptr) {
              goto LABEL_59;
            }
            while (1) {
            LABEL_64:
              if (v31[3] == v31[4]) {
                v58 = (*(__int64 (**)(_QWORD*))(*v31 + 72LL))(v31),
                v20 =
                    COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v22 =
                    COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v24 =
                    COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v26 =
                    COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v28 =
                    COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v30 =
                    COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v32 =
                    COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                if (v58 == -1) {
                  v31 = nullptr;
                }
                if (v56 == (v58 == -1)) {
                  goto LABEL_47;
                }
              }
              else if (!v56) {
                goto LABEL_47;
              }
            LABEL_70:
              v59 = (unsigned __int8*)v33[3];
              if (v59 == (unsigned __int8*)v33[4]) {
                v61 = (*(__int64 (**)(_QWORD*))(*v33 + 72LL))(v33),
                v20 =
                    COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v22 =
                    COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v24 =
                    COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v26 =
                    COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v28 =
                    COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v30 =
                    COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v32 =
                    COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v60 = v61;
                if ((v61 & 0x80) != 0) {
                  goto LABEL_47;
                }
              }
              else {
                v60 = *v59;
                if ((v60 & 0x80) != 0) {
                  goto LABEL_47;
                }
              }
              if ((*(_WORD*)(v39[2] + 2 * v60) & 0x2000) == 0) {
                goto LABEL_47;
              }
              v62 = v33[3];
              if (v62 == v33[4]) {
                break;
              }
              v33[3] = v62 + 1;
            LABEL_56:
              if (v33 != nullptr) {
                goto LABEL_57;
              }
            LABEL_77:
              v56 = true;
              if (v31 == nullptr) {
                goto LABEL_59;
              }
            }
            (*(void (**)(_QWORD*))(*v33 + 80LL))(v33),
                v20 =
                    COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v22 =
                    COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v24 =
                    COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v26 =
                    COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v28 =
                    COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v30 =
                    COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v32 =
                    COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (v33 == nullptr) {
              goto LABEL_77;
            }
          }
          v56 = false;
          if (v31 != nullptr) {
            goto LABEL_64;
          }
        LABEL_59:
          if (v56) {
            continue;
          }
          goto LABEL_70;
        }
      }
      v50 = (unsigned __int8*)v33[3];
      if (v50 == (unsigned __int8*)v33[4]) {
        v51 = (*(unsigned int (**)(_QWORD*))(*v33 + 72LL))(v33),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v51 = *v50;
      }
      v54 = (*(unsigned __int8 (**)(_QWORD*, __int64))(*v39 + 24LL))(v39, v51),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v54 == (*(unsigned __int8 (**)(_QWORD*, _QWORD))(*v39 + 24LL))(
                     v39, (unsigned __int8)*v23)) {
        v55 = v33[3];
        if (v55 == v33[4]) {
          (*(void (**)(_QWORD*))(*v33 + 80LL))(v33),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v32 = COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        LABEL_36:
          ++v23;
          continue;
        }
        ++v23;
        v33[3] = v55 + 1;
      }
      else {
        *v27 = 4;
      }
    LABEL_47:;
    } while (v23 != (char*)v21 && *v27 == 0);
  }
  if (v33 != nullptr) {
    if (v33[3] != v33[4]) {
      v63 = false;
      if (v31 != nullptr) {
        goto LABEL_83;
      }
    LABEL_88:
      if (!v63) {
        return v33;
      }
      goto LABEL_85;
    }
    v65 = (*(__int64 (**)(_QWORD*))(*v33 + 72LL))(v33),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v32 = COERCE_AS(__typeof__(v32),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v63 = v65 == -1;
    if (v65 == -1) {
      v33 = nullptr;
    }
    if (v31 == nullptr) {
      goto LABEL_88;
    }
  }
  else {
    v63 = true;
    if (v31 == nullptr) {
      goto LABEL_88;
    }
  }
LABEL_83:
  if (v31[3] == v31[4]) {
    if (((v63 ^ ((*(unsigned int (**)(_QWORD*))(*v31 + 72LL))(v31) == -1)) &
         1) != 0) {
      return v33;
    }
    goto LABEL_85;
  }
  if (!v63) {
  LABEL_85:
    *v27 |= 2u;
  }
  return v33;
}

__int64 nvidia_ceb20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6)
{
  __int64 v7;
  __int64 vars0;

  v7 = 0x53253A4D253A4825LL;
  return ((__int64 (*)(__int64, __int64, __int64, __int64, __int64, __int64,
                       __int64*, __int64*))NgxRoutine_ce600)(a1, a2, a3, a4, a5,
                                                             a6, &v7, &vars0);
}

_QWORD* nvidia_cebf0(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64 a6)
{
  __int64 v10;
  void* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  __int64 v18;
  _QWORD* v19;
  void* v20;
  void*** v21;
  void** v22;

  v19 = a2;
  nvidia_be650((void*)(&v18), a4);
  v10 = v18;
  v11 = NgxData_9511b8;
  v20 = NgxData_9511b8;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511b8,
                           memory_order_acquire) != -1) {
    v22 = &v20;
    v21 = &v22;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511b8, (__int64)&v21,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v12 = *(_QWORD*)(v10 + 16);
  v13 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11) - 1LL;
  if (v13 >= (*(_QWORD*)(v10 + 24) - v12) >> 3 ||
      (v14 = *(_QWORD*)(v12 + 8 * v13)) == 0) {
    NgxRoutine_db120();
  }
  NgxRoutine_db240(&v18);
  v15 = (unsigned __int8*)(**(__int64 (***)(__int64))(a1 + 16))(a1 + 16);
  v16 = NgxRoutine_c0ac0(&v19, a3, v15, v15 + 336, v14, a5, 0);
  if (v16 - v15 <= 335) {
    *(_DWORD*)(a6 + 24) =
        (__int64)(0xAAAAAAAAAAAAAAABLL * ((v16 - v15) >> 3)) % 7;
  }
  return v19;
}

_QWORD* nvidia_ced50(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64 a6)
{
  __int64 v10;
  void* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  __int64 v18;
  _QWORD* v19;
  void* v20;
  void*** v21;
  void** v22;

  v19 = a2;
  nvidia_be650((void*)(&v18), a4);
  v10 = v18;
  v11 = NgxData_9511b8;
  v20 = NgxData_9511b8;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511b8,
                           memory_order_acquire) != -1) {
    v22 = &v20;
    v21 = &v22;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511b8, (__int64)&v21,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v12 = *(_QWORD*)(v10 + 16);
  v13 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11) - 1LL;
  if (v13 >= (*(_QWORD*)(v10 + 24) - v12) >> 3 ||
      (v14 = *(_QWORD*)(v12 + 8 * v13)) == 0) {
    NgxRoutine_db120();
  }
  NgxRoutine_db240(&v18);
  v15 = (unsigned __int8*)(*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 16) + 8LL))(
      a1 + 16);
  v16 = NgxRoutine_c0ac0(&v19, a3, v15, v15 + 576, v14, a5, 0);
  if (v16 - v15 <= 575) {
    *(_DWORD*)(a6 + 16) =
        -1431655765 * ((v16 - v15) >> 3) -
        12 *
            (((unsigned __int64)((unsigned __int128)((__int64)(0xAAAAAAAAAAAAAAABLL *
                                                               ((v16 - v15) >>
                                                                3)) *
                                                     (__int128)0x2AAAAAAAAAAAAAABLL) >>
                                 64) >>
              63) +
             ((unsigned int)((unsigned __int128)((__int64)(0xAAAAAAAAAAAAAAABLL *
                                                           ((v16 - v15) >> 3)) *
                                                 (__int128)0x2AAAAAAAAAAAAAABLL) >>
                             64) >>
              1));
  }
  return v19;
}

__int64 nvidia_ceea0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64 a6)
{
  __int64 v9;
  void* v10;
  __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  int v14;
  int v15;
  int v16;
  __int64 v18;
  __int64 v19;
  void* v20;
  void*** v21;
  void** v22;

  v19 = a2;
  nvidia_be650((void*)(&v18), a4);
  v9 = v18;
  v10 = NgxData_9511b8;
  v20 = NgxData_9511b8;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511b8,
                           memory_order_acquire) != -1) {
    v22 = &v20;
    v21 = &v22;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511b8, (__int64)&v21,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v11 = *(_QWORD*)(v9 + 16);
  v12 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v10) - 1LL;
  if (v12 >= (*(_QWORD*)(v9 + 24) - v11) >> 3 ||
      (v13 = *(_QWORD**)(v11 + 8 * v12)) == nullptr) {
    NgxRoutine_db120();
  }
  NgxRoutine_db240(&v18);
  v14 = NgxRoutine_cfa00(&v19, a3, a5, v13, 4);
  if ((*(_BYTE*)a5 & 4) == 0) {
    v15 = v14 + 1900;
    v16 = v14 + 2000;
    if ((unsigned int)v14 >= 0x64) {
      v15 = v14;
    }
    if (v14 >= 69) {
      v16 = v15;
    }
    *(_DWORD*)(a6 + 20) = v16 - 1900;
  }
  return v19;
}

_QWORD* nvidia_cefc0(__int64 (***a1)(_QWORD), _QWORD* a2, _QWORD* a3,
                     __int64 a4, int* a5, int* a6, char a7)
{
  __int64 v13;
  void* v14;
  __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  unsigned __int8* v18;
  unsigned __int8* v19;
  int v20;
  int v21;
  unsigned __int8* v23;
  unsigned __int8* v24;
  _QWORD* v25;
  _BYTE* v26;
  _BYTE* v27;
  unsigned __int8* v28;
  int v29;
  int v30;
  unsigned __int64 v32;
  bool v33;
  unsigned __int64 v34;
  __int64 v35;
  int v36;
  int v38;
  int v41;
  int v43;
  int v44;
  int v45;
  int v47;
  unsigned __int8* v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  int v54;
  unsigned __int8* v56;
  unsigned __int8* v57;
  int v58;
  _BYTE v61[11];
  _BYTE v62[5];
  __int64 v63;
  _QWORD* v64;
  void* v65;
  _BYTE* v66;

  v64 = a2;
  *a5 = 0;
  nvidia_be650((void*)(&v63), a4);
  v13 = v63;
  v14 = NgxData_9511b8;
  v65 = NgxData_9511b8;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511b8,
                           memory_order_acquire) != -1) {
    *(_QWORD*)v61 = &v65;
    v66 = v61;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511b8, (__int64)&v66,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v15 = *(_QWORD*)(v13 + 16);
  v16 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14) - 1LL;
  if (v16 >= (*(_QWORD*)(v13 + 24) - v15) >> 3 ||
      (v17 = *(_QWORD**)(v15 + 8 * v16)) == nullptr) {
    NgxRoutine_db120();
  }
  NgxRoutine_db240(&v63);
  switch (a7) {
  case '%':
    NgxRoutine_cf800((__int64)a1, &v64, a3, a5, (__int64)v17);
    return v64;
  case 'A':
  case 'a':
    v23 = (unsigned __int8*)(*a1[2])(a1 + 2);
    v24 = NgxRoutine_c0ac0(&v64, a3, v23, v23 + 336, (__int64)v17, a5, 0);
    if (v24 - v23 <= 335) {
      a6[6] = (__int64)(0xAAAAAAAAAAAAAAABLL * ((v24 - v23) >> 3)) % 7;
    }
    return v64;
  case 'B':
  case 'b':
  case 'h':
    v18 = (unsigned __int8*)a1[2][1](a1 + 2);
    v19 = NgxRoutine_c0ac0(&v64, a3, v18, v18 + 576, (__int64)v17, a5, 0);
    if (v19 - v18 <= 575) {
      a6[4] =
          -1431655765 * ((v19 - v18) >> 3) -
          12 *
              (((unsigned __int64)((unsigned __int128)((__int64)(0xAAAAAAAAAAAAAAABLL *
                                                                 ((v19 - v18) >>
                                                                  3)) *
                                                       (__int128)0x2AAAAAAAAAAAAAABLL) >>
                                   64) >>
                63) +
               ((unsigned int)((unsigned __int128)((__int64)(0xAAAAAAAAAAAAAAABLL *
                                                             ((v19 - v18) >>
                                                              3)) *
                                                   (__int128)0x2AAAAAAAAAAAAAABLL) >>
                               64) >>
                1));
    }
    return v64;
  case 'D':
    v35 = 0x79252F64252F6D25LL;
    goto LABEL_63;
  case 'F':
    v35 = 0x64252D6D252D5925LL;
    goto LABEL_63;
  case 'H':
    v38 = NgxRoutine_cfa00(&v64, a3, a5, v17, 2);
    v21 = *a5;
    if (v38 > 23 || (*a5 & 4) != 0) {
      goto LABEL_90;
    }
    goto LABEL_54;
  case 'I':
    v38 = NgxRoutine_cfa00(&v64, a3, a5, v17, 2);
    v21 = *a5;
    if ((unsigned int)(v38 - 1) > 0xB || (*a5 & 4) != 0) {
      goto LABEL_90;
    }
  LABEL_54:
    a6[2] = v38;
    return v64;
  case 'M':
    v30 = NgxRoutine_cfa00(&v64, a3, a5, v17, 2);
    v21 = *a5;
    if (v30 > 59 || (*a5 & 4) != 0) {
      goto LABEL_90;
    }
    a6[1] = v30;
    return v64;
  case 'R':
    v25 = v64;
    v26 = v61;
    qmemcpy(v61, "%H:%M", 5);
    v27 = &v61[5];
    return (_QWORD*)((__int64 (*)(
        __int64 (***)(_QWORD), _QWORD*, _QWORD*, __int64, int*, int*, _BYTE*,
        _BYTE*))NgxRoutine_ce600)(a1, v25, a3, a4, a5, a6, v26, v27);
  case 'S':
    v41 = NgxRoutine_cfa00(&v64, a3, a5, v17, 2);
    v21 = *a5;
    if (v41 > 60 || (*a5 & 4) != 0) {
      goto LABEL_90;
    }
    *a6 = v41;
    return v64;
  case 'T':
    v35 = 0x53253A4D253A4825LL;
  LABEL_63:
    v25 = v64;
    *(_QWORD*)v61 = v35;
    v26 = v61;
    v27 = &v61[8];
    return (_QWORD*)((__int64 (*)(
        __int64 (***)(_QWORD), _QWORD*, _QWORD*, __int64, int*, int*, _BYTE*,
        _BYTE*))NgxRoutine_ce600)(a1, v25, a3, a4, a5, a6, v26, v27);
  case 'X':
    v28 = (unsigned __int8*)a1[2][6](a1 + 2);
    goto LABEL_28;
  case 'Y':
    v29 = NgxRoutine_cfa00(&v64, a3, a5, v17, 4);
    if ((*(_BYTE*)a5 & 4) == 0) {
      a6[5] = v29 - 1900;
    }
    return v64;
  case 'c':
    v28 = (unsigned __int8*)a1[2][3](a1 + 2);
  LABEL_28:
    v32 = *v28;
    v33 = (v32 & 1) == 0;
    v25 = v64;
    v34 = v32 >> 1;
    if (v33) {
      v26 = v28 + 1;
    }
    else {
      v26 = *((_BYTE**)v28 + 2);
    }
    if (!v33) {
      v34 = *((_QWORD*)v28 + 1);
    }
    v27 = &v26[v34];
    return (_QWORD*)((__int64 (*)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD, _QWORD, _QWORD))NgxRoutine_ce600)(
        a1, v25, a3, a4, a5, a6, v26, v27);
  case 'd':
  case 'e':
    v20 = NgxRoutine_cfa00(&v64, a3, a5, v17, 2);
    v21 = *a5;
    if ((unsigned int)(v20 - 1) > 0x1E || (*a5 & 4) != 0) {
      goto LABEL_90;
    }
    a6[3] = v20;
    return v64;
  case 'j':
    v47 = NgxRoutine_cfa00(&v64, a3, a5, v17, 3);
    v21 = *a5;
    if (v47 > 365 || (*a5 & 4) != 0) {
      goto LABEL_90;
    }
    a6[7] = v47;
    return v64;
  case 'm':
    v36 = NgxRoutine_cfa00(&v64, a3, a5, v17, 2);
    v21 = *a5;
    if ((unsigned int)(v36 - 1) > 0xB || (*a5 & 4) != 0) {
      goto LABEL_90;
    }
    a6[4] = v36 - 1;
    return v64;
  case 'n':
  case 't':
    NgxRoutine_cf600((__int64)a1, &v64, a3, a5, (__int64)v17);
    return v64;
  case 'p':
    v49 = (unsigned __int8*)a1[2][2](a1 + 2);
    v50 = *v49;
    if ((v50 & 1) != 0) {
      v51 = *((_QWORD*)v49 + 1);
    }
    else {
      v51 = v50 >> 1;
    }
    v52 = v49[24];
    if ((v52 & 1) != 0) {
      v53 = *((_QWORD*)v49 + 4);
    }
    else {
      v53 = v52 >> 1;
    }
    if (v51 + v53 == 0) {
      goto LABEL_85;
    }
    v56 = v49;
    v57 = NgxRoutine_c0ac0(&v64, a3, v56, v56 + 48, (__int64)v17, a5, 0);
    v58 = a6[2];
    if (v57 == v56 && v58 == 12) {
      a6[2] = 0;
    }
    else if (v57 - v56 == 24 && v58 <= 11) {
      a6[2] = v58 + 12;
    }
    return v64;
  case 'r':
    v25 = v64;
    v26 = v61;
    qmemcpy(v61, "%I:%M:%S %p", sizeof(v61));
    v27 = v62;
    return (_QWORD*)((__int64 (*)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD, _QWORD, _QWORD))NgxRoutine_ce600)(
        a1, v25, a3, a4, a5, a6, v26, v27);
  case 'w':
    v54 = NgxRoutine_cfa00(&v64, a3, a5, v17, 1);
    v21 = *a5;
    if (v54 > 6 || (*a5 & 4) != 0) {
      goto LABEL_90;
    }
    a6[6] = v54;
    break;
  case 'x':
    return (_QWORD*)((__int64 (*)(__int64 (***)(_QWORD), _QWORD*, _QWORD*,
                                  __int64, int*, int*))(*a1)[5])(a1, v64, a3,
                                                                 a4, a5, a6);
  case 'y':
    v43 = NgxRoutine_cfa00(&v64, a3, a5, v17, 4);
    if ((*(_BYTE*)a5 & 4) == 0) {
      v44 = v43 + 1900;
      v45 = v43 + 2000;
      if ((unsigned int)v43 >= 0x64) {
        v44 = v43;
      }
      if (v43 >= 69) {
        v45 = v44;
      }
      a6[5] = v45 - 1900;
    }
    return v64;
  default:
  LABEL_85:
    v21 = *a5;
  LABEL_90:
    *a5 = v21 | 4;
    break;
  }
  return v64;
}

_QWORD* nvidia_cfd80(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64 a6, unsigned int* a7, unsigned int* a8)
{
  __int64 v16;
  void* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  int* v21;
  int v22;
  _BOOL4 v23;
  int* v24;
  int v25;
  _BOOL4 v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  unsigned int* v33;
  _DWORD* v34;
  _BOOL4 v35;
  int v36;
  int* v37;
  int v38;
  unsigned int* v39;
  unsigned int v40;
  __int64 v41;
  unsigned int* v42;
  __int64 v43;
  unsigned int* v44;
  int v45;
  __int64 v46;
  int* v47;
  int v48;
  _QWORD* result;
  _BOOL4 v50;
  _DWORD* v51;
  _QWORD* v52;
  int v53;
  __int64 v54;
  void* v55;
  void*** v56;
  void** v57;

  nvidia_be650((void*)(&v54), a4);
  v16 = v54;
  v17 = NgxData_9511d0;
  v55 = NgxData_9511d0;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511d0,
                           memory_order_acquire) != -1) {
    v57 = &v55;
    v56 = &v57;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511d0, (__int64)&v56,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v18 = *(_QWORD*)(v16 + 16);
  v19 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v17) - 1LL;
  if (v19 >= (*(_QWORD*)(v16 + 24) - v18) >> 3 ||
      (v20 = *(_QWORD*)(v18 + 8 * v19)) == 0) {
    NgxRoutine_db120();
  }
  NgxRoutine_db240(&v54);
  *a5 = 0;
  if (a7 != a8) {
    do {
      if (a2 != nullptr) {
        v21 = (int*)a2[3];
        if (v21 == (int*)a2[4]) {
          v22 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
        }
        else {
          v22 = *v21;
        }
        v23 = v22 == -1;
        if (v22 == -1) {
          a2 = nullptr;
        }
        if (a3 == nullptr) {
        LABEL_10:
          if (v23) {
            goto LABEL_75;
          }
          goto LABEL_24;
        }
      }
      else {
        v23 = true;
        if (a3 == nullptr) {
          goto LABEL_10;
        }
      }
      v24 = (int*)a3[3];
      if (v24 == (int*)a3[4]) {
        v27 = (*(__int64 (**)(_QWORD*))(*a3 + 72LL))(a3);
        if (v27 == -1) {
          a3 = nullptr;
        }
        if (((v23 ^ (v27 == -1)) & 1) == 0) {
        LABEL_75:
          *a5 = 4;
          break;
        }
      }
      else {
        v25 = *v24;
        v26 = *v24 == -1;
        if (v25 == -1) {
          a3 = nullptr;
        }
        if (((v23 ^ v26) & 1) == 0) {
          goto LABEL_75;
        }
      }
    LABEL_24:
      if ((*(unsigned __int8 (**)(__int64, _QWORD, _QWORD))(
              *(_QWORD*)v20 + 104LL))(v20, *a7, 0) == 37) {
        if (a7 + 1 == a8) {
          goto LABEL_75;
        }
        v28 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v20 + 104LL))(
            v20, a7[1], 0);
        v29 = v28;
        if ((unsigned __int8)v28 == 69 || (unsigned __int8)v28 == 48) {
          if (a7 + 2 == a8) {
            goto LABEL_75;
          }
          v30 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(
              *(_QWORD*)v20 + 104LL))(v20, a7[2], 0);
          v31 = 2;
          v32 = v29;
          v29 = v30;
        }
        else {
          v32 = 0;
          v31 = 1;
        }
        v44 = &a7[v31];
        a2 = (_QWORD*)(*(__int64 (**)(__int64, _QWORD*, _QWORD*, __int64,
                                      _DWORD*, __int64, _QWORD, __int64))(
            *(_QWORD*)a1 + 72LL))(a1, a2, a3, a4, a5, a6, v29, v32);
        a7 = v44 + 1;
        if (a7 == a8) {
          break;
        }
      }
      else {
        if (((*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)v20 + 24LL))(
                 v20, 0x2000, *a7) &
             1) != 0) {
          v33 = a7 + 1;
          do {
            a7 = v33;
            if (v33 == a8) {
              break;
            }
            ++v33;
          } while (((*(__int64 (**)(__int64, __int64, _QWORD))(
                        *(_QWORD*)v20 + 24LL))(v20, 0x2000, *a7) &
                    1) != 0);
          while (a2 == nullptr) {
            while (1) {
              v35 = true;
              if (a3 != nullptr) {
                goto LABEL_43;
              }
            LABEL_51:
              if (v35) {
                goto LABEL_70;
              }
            LABEL_52:
              v39 = (unsigned int*)a2[3];
              if (v39 == (unsigned int*)a2[4]) {
                v40 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
                if (((*(__int64 (**)(__int64, __int64, _QWORD))(
                         *(_QWORD*)v20 + 24LL))(v20, 0x2000, v40) &
                     1) == 0) {
                  goto LABEL_70;
                }
              }
              else if (((*(__int64 (**)(__int64, __int64, _QWORD))(
                            *(_QWORD*)v20 + 24LL))(v20, 0x2000, *v39) &
                        1) == 0) {
                goto LABEL_70;
              }
              v41 = a2[3];
              if (v41 == a2[4]) {
                break;
              }
              a2[3] = v41 + 4;
              if (a2 != nullptr) {
                goto LABEL_37;
              }
            }
            (*(void (**)(_QWORD*))(*a2 + 80LL))(a2);
          }
        LABEL_37:
          v34 = (_DWORD*)a2[3];
          if (v34 == (_DWORD*)a2[4]) {
            v36 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
            v35 = v36 == -1;
            if (v36 != -1) {
              goto LABEL_42;
            }
          }
          else {
            v35 = *v34 == -1;
            if (*v34 != -1) {
            LABEL_42:
              if (a3 == nullptr) {
                goto LABEL_51;
              }
            LABEL_43:
              v37 = (int*)a3[3];
              if (v37 == (int*)a3[4]) {
                v38 = (*(__int64 (**)(_QWORD*))(*a3 + 72LL))(a3);
                if (v38 == -1) {
                LABEL_45:
                  a3 = nullptr;
                }
              }
              else {
                v38 = *v37;
                if (*v37 == -1) {
                  goto LABEL_45;
                }
              }
              if (v35 == (v38 == -1)) {
                goto LABEL_70;
              }
              goto LABEL_52;
            }
          }
          a2 = nullptr;
          goto LABEL_42;
        }
        v42 = (unsigned int*)a2[3];
        if (v42 == (unsigned int*)a2[4]) {
          v43 = (*(unsigned int (**)(_QWORD*))(*a2 + 72LL))(a2);
        }
        else {
          v43 = *v42;
        }
        v45 =
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v20 + 56LL))(v20, v43);
        if (v45 == (*(unsigned int (**)(__int64, _QWORD))(*(_QWORD*)v20 +
                                                          56LL))(v20, *a7)) {
          v46 = a2[3];
          if (v46 == a2[4]) {
            (*(void (**)(_QWORD*))(*a2 + 80LL))(a2);
            if (++a7 == a8) {
              break;
            }
          }
          else {
            ++a7;
            a2[3] = v46 + 4;
            if (a7 == a8) {
              break;
            }
          }
        }
        else {
          *a5 = 4;
        LABEL_70:
          if (a7 == a8) {
            break;
          }
        }
      }
    } while (*a5 == 0);
  }
  if (a2 == nullptr) {
    result = nullptr;
    v50 = true;
    if (a3 != nullptr) {
      goto LABEL_87;
    }
  LABEL_80:
    if (!v50) {
      return result;
    }
    goto LABEL_89;
  }
  v47 = (int*)a2[3];
  if (v47 == (int*)a2[4]) {
    v48 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
  }
  else {
    v48 = *v47;
  }
  v50 = v48 == -1;
  if (v48 == -1) {
    result = nullptr;
  }
  else {
    result = a2;
  }
  if (a3 == nullptr) {
    goto LABEL_80;
  }
LABEL_87:
  v51 = (_DWORD*)a3[3];
  if (v51 != (_DWORD*)a3[4]) {
    if (((v50 ^ (*v51 == -1)) & 1) != 0) {
      return result;
    }
    goto LABEL_89;
  }
  v52 = result;
  v53 = (*(__int64 (**)(_QWORD*))(*a3 + 72LL))(a3);
  result = v52;
  if (((v50 ^ (v53 == -1)) & 1) == 0) {
  LABEL_89:
    *a5 |= 2u;
  }
  return result;
}

_QWORD* nvidia_d0410(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64 a6)
{
  __int64 v10;
  void* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  __int64 v18;
  _QWORD* v19;
  void* v20;
  void*** v21;
  void** v22;

  v19 = a2;
  nvidia_be650((void*)(&v18), a4);
  v10 = v18;
  v11 = NgxData_9511d0;
  v20 = NgxData_9511d0;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511d0,
                           memory_order_acquire) != -1) {
    v22 = &v20;
    v21 = &v22;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511d0, (__int64)&v21,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v12 = *(_QWORD*)(v10 + 16);
  v13 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11) - 1LL;
  if (v13 >= (*(_QWORD*)(v10 + 24) - v12) >> 3 ||
      (v14 = *(_QWORD*)(v12 + 8 * v13)) == 0) {
    NgxRoutine_db120();
  }
  NgxRoutine_db240(&v18);
  v15 = (unsigned __int8*)(**(__int64 (***)(__int64))(a1 + 16))(a1 + 16);
  v16 = NgxRoutine_c52a0(&v19, a3, v15, v15 + 336, v14, a5, 0);
  if (v16 - v15 <= 335) {
    *(_DWORD*)(a6 + 24) =
        (__int64)(0xAAAAAAAAAAAAAAABLL * ((v16 - v15) >> 3)) % 7;
  }
  return v19;
}

_QWORD* nvidia_d0570(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64 a6)
{
  __int64 v10;
  void* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  __int64 v18;
  _QWORD* v19;
  void* v20;
  void*** v21;
  void** v22;

  v19 = a2;
  nvidia_be650((void*)(&v18), a4);
  v10 = v18;
  v11 = NgxData_9511d0;
  v20 = NgxData_9511d0;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511d0,
                           memory_order_acquire) != -1) {
    v22 = &v20;
    v21 = &v22;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511d0, (__int64)&v21,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v12 = *(_QWORD*)(v10 + 16);
  v13 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11) - 1LL;
  if (v13 >= (*(_QWORD*)(v10 + 24) - v12) >> 3 ||
      (v14 = *(_QWORD*)(v12 + 8 * v13)) == 0) {
    NgxRoutine_db120();
  }
  NgxRoutine_db240(&v18);
  v15 = (unsigned __int8*)(*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 16) + 8LL))(
      a1 + 16);
  v16 = NgxRoutine_c52a0(&v19, a3, v15, v15 + 576, v14, a5, 0);
  if (v16 - v15 <= 575) {
    *(_DWORD*)(a6 + 16) =
        -1431655765 * ((v16 - v15) >> 3) -
        12 *
            (((unsigned __int64)((unsigned __int128)((__int64)(0xAAAAAAAAAAAAAAABLL *
                                                               ((v16 - v15) >>
                                                                3)) *
                                                     (__int128)0x2AAAAAAAAAAAAAABLL) >>
                                 64) >>
              63) +
             ((unsigned int)((unsigned __int128)((__int64)(0xAAAAAAAAAAAAAAABLL *
                                                           ((v16 - v15) >> 3)) *
                                                 (__int128)0x2AAAAAAAAAAAAAABLL) >>
                             64) >>
              1));
  }
  return v19;
}

__int64 nvidia_d06c0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64 a6)
{
  __int64 v9;
  void* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  __int64 v18;
  __int64 v19;
  void* v20;
  void*** v21;
  void** v22;

  v19 = a2;
  nvidia_be650((void*)(&v18), a4);
  v9 = v18;
  v10 = NgxData_9511d0;
  v20 = NgxData_9511d0;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511d0,
                           memory_order_acquire) != -1) {
    v22 = &v20;
    v21 = &v22;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511d0, (__int64)&v21,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v11 = *(_QWORD*)(v9 + 16);
  v12 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v10) - 1LL;
  if (v12 >= (*(_QWORD*)(v9 + 24) - v11) >> 3 ||
      (v13 = *(_QWORD*)(v11 + 8 * v12)) == 0) {
    NgxRoutine_db120();
  }
  NgxRoutine_db240(&v18);
  v14 = NgxRoutine_d12e0(&v19, a3, a5, v13, 4);
  if ((*(_BYTE*)a5 & 4) == 0) {
    v15 = v14 + 1900;
    v16 = v14 + 2000;
    if ((unsigned int)v14 >= 0x64) {
      v15 = v14;
    }
    if (v14 >= 69) {
      v16 = v15;
    }
    *(_DWORD*)(a6 + 20) = v16 - 1900;
  }
  return v19;
}

_QWORD* nvidia_d07e0(__int64 (***a1)(_QWORD), _QWORD* a2, _QWORD* a3,
                     __int64 a4, int* a5, int* a6, char a7)
{
  __int64 v13;
  void* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int8* v18;
  unsigned __int8* v19;
  int v20;
  int v21;
  unsigned __int8* v23;
  unsigned __int8* v24;
  _QWORD* v25;
  unsigned int* v26;
  unsigned int* v27;
  unsigned __int8* v28;
  int v29;
  int v30;
  unsigned __int64 v32;
  bool v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  int v39;
  int v42;
  int v44;
  int v45;
  int v46;
  int v48;
  unsigned __int8* v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  int v55;
  unsigned __int8* v57;
  unsigned __int8* v58;
  int v59;
  _QWORD v62[2];
  _QWORD v63[2];
  struct {
    __int64 v64;
    int v65;
  } v64_;
  int v66;
  __int64 v67;
  _QWORD* v68;
  void* v69;
  _QWORD* v70;

  v68 = a2;
  *a5 = 0;
  nvidia_be650((void*)(&v67), a4);
  v13 = v67;
  v14 = NgxData_9511d0;
  v69 = NgxData_9511d0;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511d0,
                           memory_order_acquire) != -1) {
    v62[0] = &v69;
    v70 = v62;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511d0, (__int64)&v70,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v15 = *(_QWORD*)(v13 + 16);
  v16 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14) - 1LL;
  if (v16 >= (*(_QWORD*)(v13 + 24) - v15) >> 3 ||
      (v17 = *(_QWORD*)(v15 + 8 * v16)) == 0) {
    NgxRoutine_db120();
  }
  NgxRoutine_db240(&v67);
  switch (a7) {
  case '%':
    NgxRoutine_d10a0((__int64)a1, (__int64*)&v68, a3, a5, v17);
    return v68;
  case 'A':
  case 'a':
    v23 = (unsigned __int8*)(*a1[2])(a1 + 2);
    v24 = NgxRoutine_c52a0(&v68, a3, v23, v23 + 336, v17, a5, 0);
    if (v24 - v23 <= 335) {
      a6[6] = (__int64)(0xAAAAAAAAAAAAAAABLL * ((v24 - v23) >> 3)) % 7;
    }
    return v68;
  case 'B':
  case 'b':
  case 'h':
    v18 = (unsigned __int8*)a1[2][1](a1 + 2);
    v19 = NgxRoutine_c52a0(&v68, a3, v18, v18 + 576, v17, a5, 0);
    if (v19 - v18 <= 575) {
      a6[4] =
          -1431655765 * ((v19 - v18) >> 3) -
          12 *
              (((unsigned __int64)((unsigned __int128)((__int64)(0xAAAAAAAAAAAAAAABLL *
                                                                 ((v19 - v18) >>
                                                                  3)) *
                                                       (__int128)0x2AAAAAAAAAAAAAABLL) >>
                                   64) >>
                63) +
               ((unsigned int)((unsigned __int128)((__int64)(0xAAAAAAAAAAAAAAABLL *
                                                             ((v19 - v18) >>
                                                              3)) *
                                                   (__int128)0x2AAAAAAAAAAAAAABLL) >>
                               64) >>
                1));
    }
    return v68;
  case 'D':
    v63[0] = 0x2F00000064LL;
    v63[1] = 0x7900000025LL;
    v35 = 0x250000002FLL;
    v36 = 0x6D00000025LL;
    goto LABEL_63;
  case 'F':
    v63[0] = 0x2D0000006DLL;
    v63[1] = 0x6400000025LL;
    v35 = 0x250000002DLL;
    v36 = 0x5900000025LL;
    goto LABEL_63;
  case 'H':
    v39 = NgxRoutine_d12e0(&v68, a3, a5, v17, 2);
    v21 = *a5;
    if (v39 > 23 || (*a5 & 4) != 0) {
      goto LABEL_90;
    }
    goto LABEL_54;
  case 'I':
    v39 = NgxRoutine_d12e0(&v68, a3, a5, v17, 2);
    v21 = *a5;
    if ((unsigned int)(v39 - 1) > 0xB || (*a5 & 4) != 0) {
      goto LABEL_90;
    }
  LABEL_54:
    a6[2] = v39;
    return v68;
  case 'M':
    v30 = NgxRoutine_d12e0(&v68, a3, a5, v17, 2);
    v21 = *a5;
    if (v30 > 59 || (*a5 & 4) != 0) {
      goto LABEL_90;
    }
    a6[1] = v30;
    return v68;
  case 'R':
    v25 = v68;
    v26 = (unsigned int*)v62;
    LODWORD(v63[0]) = 77;
    v62[0] = 0x4800000025LL;
    v62[1] = 0x250000003ALL;
    v27 = (unsigned int*)v63 + 1;
    return nvidia_cfd80((__int64)a1, v25, a3, a4, a5, (__int64)a6, v26, v27);
  case 'S':
    v42 = NgxRoutine_d12e0(&v68, a3, a5, v17, 2);
    v21 = *a5;
    if (v42 > 60 || (*a5 & 4) != 0) {
      goto LABEL_90;
    }
    *a6 = v42;
    return v68;
  case 'T':
    v63[0] = 0x3A0000004DLL;
    v63[1] = 0x5300000025LL;
    v35 = 0x250000003ALL;
    v36 = 0x4800000025LL;
  LABEL_63:
    v25 = v68;
    v62[0] = v36;
    v62[1] = v35;
    v26 = (unsigned int*)v62;
    v27 = (unsigned int*)&v64_.v64;
    return nvidia_cfd80((__int64)a1, v25, a3, a4, a5, (__int64)a6, v26, v27);
  case 'X':
    v28 = (unsigned __int8*)a1[2][6](a1 + 2);
    goto LABEL_28;
  case 'Y':
    v29 = NgxRoutine_d12e0(&v68, a3, a5, v17, 4);
    if ((*(_BYTE*)a5 & 4) == 0) {
      a6[5] = v29 - 1900;
    }
    return v68;
  case 'c':
    v28 = (unsigned __int8*)a1[2][3](a1 + 2);
  LABEL_28:
    v32 = *v28;
    v33 = (v32 & 1) == 0;
    v25 = v68;
    v34 = v32 >> 1;
    if (v33) {
      v26 = (unsigned int*)(v28 + 4);
    }
    else {
      v26 = *((unsigned int**)v28 + 2);
    }
    if (!v33) {
      v34 = *((_QWORD*)v28 + 1);
    }
    v27 = &v26[v34];
    return nvidia_cfd80((__int64)a1, v25, a3, a4, a5, (__int64)a6, v26, v27);
  case 'd':
  case 'e':
    v20 = NgxRoutine_d12e0(&v68, a3, a5, v17, 2);
    v21 = *a5;
    if ((unsigned int)(v20 - 1) > 0x1E || (*a5 & 4) != 0) {
      goto LABEL_90;
    }
    a6[3] = v20;
    return v68;
  case 'j':
    v48 = NgxRoutine_d12e0(&v68, a3, a5, v17, 3);
    v21 = *a5;
    if (v48 > 365 || (*a5 & 4) != 0) {
      goto LABEL_90;
    }
    a6[7] = v48;
    return v68;
  case 'm':
    v37 = NgxRoutine_d12e0(&v68, a3, a5, v17, 2);
    v21 = *a5;
    if ((unsigned int)(v37 - 1) > 0xB || (*a5 & 4) != 0) {
      goto LABEL_90;
    }
    a6[4] = v37 - 1;
    return v68;
  case 'n':
  case 't':
    NgxRoutine_d0e80((__int64)a1, (__int64*)&v68, a3, a5, v17);
    return v68;
  case 'p':
    v50 = (unsigned __int8*)a1[2][2](a1 + 2);
    v51 = *v50;
    if ((v51 & 1) != 0) {
      v52 = *((_QWORD*)v50 + 1);
    }
    else {
      v52 = v51 >> 1;
    }
    v53 = v50[24];
    if ((v53 & 1) != 0) {
      v54 = *((_QWORD*)v50 + 4);
    }
    else {
      v54 = v53 >> 1;
    }
    if (v52 + v54 == 0) {
      goto LABEL_85;
    }
    v57 = v50;
    v58 = NgxRoutine_c52a0(&v68, a3, v57, v57 + 48, v17, a5, 0);
    v59 = a6[2];
    if (v58 == v57 && v59 == 12) {
      a6[2] = 0;
    }
    else if (v58 - v57 == 24 && v59 <= 11) {
      a6[2] = v59 + 12;
    }
    return v68;
  case 'r':
    v25 = v68;
    v26 = (unsigned int*)v62;
    v64_.v65 = 112;
    v27 = (unsigned int*)&v66;
    v64_.v64 = 0x2500000020LL;
    v63[0] = 0x3A0000004DLL;
    v63[1] = 0x5300000025LL;
    v62[0] = 0x4900000025LL;
    v62[1] = 0x250000003ALL;
    return nvidia_cfd80((__int64)a1, v25, a3, a4, a5, (__int64)a6, v26, v27);
  case 'w':
    v55 = NgxRoutine_d12e0(&v68, a3, a5, v17, 1);
    v21 = *a5;
    if (v55 > 6 || (*a5 & 4) != 0) {
      goto LABEL_90;
    }
    a6[6] = v55;
    break;
  case 'x':
    return (_QWORD*)((__int64 (*)(__int64 (***)(_QWORD), _QWORD*, _QWORD*,
                                  __int64, int*, int*))(*a1)[5])(a1, v68, a3,
                                                                 a4, a5, a6);
  case 'y':
    v44 = NgxRoutine_d12e0(&v68, a3, a5, v17, 4);
    if ((*(_BYTE*)a5 & 4) == 0) {
      v45 = v44 + 1900;
      v46 = v44 + 2000;
      if ((unsigned int)v44 >= 0x64) {
        v45 = v44;
      }
      if (v44 >= 69) {
        v46 = v45;
      }
      a6[5] = v46 - 1900;
    }
    return v68;
  default:
  LABEL_85:
    v21 = *a5;
  LABEL_90:
    *a5 = v21 | 4;
    break;
  }
  return v68;
}

void __attribute__((noreturn)) nvidia_d0e64(__int64 a1)
{
  __int64 v1;

  NgxRoutine_db240((__int64*)(v1 - 32));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_d18f8(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__attribute__((swiftcall)) void nvidia_d1920(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
}

__attribute__((swiftcall)) void nvidia_d1930(PSEUDO_X8 x8_)
{
  __int64 a1 = (__int64)PSEUDO_X8_VALUE(x8_);
  *(_BYTE*)(a1 + 2) = 0;
  *(_WORD*)a1 = 11522;
}

__attribute__((swiftcall)) void nvidia_d1950(PSEUDO_X8 x8_)
{
  __int64 a1 = (__int64)PSEUDO_X8_VALUE(x8_);
  *(_BYTE*)a1 = 2;
  *(_QWORD*)(a1 + 4) = 45;
}

void __attribute__((noreturn)) nvidia_d1c74(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;

  NgxRoutine_db240((__int64*)(v1 - 152));
  v3 = *(_QWORD*)(v1 - 136);
  *(_QWORD*)(v1 - 136) = 0;
  if (v3 != 0) {
    (*(void (**)(void))(v1 - 128))();
  }
  v4 = _Unwind_Resume_plt(a1);
  NgxRoutine_baf40(v4);
}

_QWORD* nvidia_d33c0(__int64 a1, _QWORD* a2, _QWORD* a3, char a4, __int64 a5,
                     _DWORD* a6, unsigned __int8* a7)
{
  __int64 v12;
  void* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  int v17;
  unsigned __int8 v18;
  unsigned __int64 v19;
  unsigned __int8 v20;
  unsigned __int8* v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int8* v28;
  __int64 v29;
  unsigned __int8* v30;
  unsigned __int8 v31;
  unsigned __int8* v32;
  unsigned __int8* v33;
  __int64 v34;
  unsigned __int8* v35;
  unsigned __int8* v36;
  _BOOL4 v37;
  _QWORD* v38;
  unsigned __int64 v39;
  __int64 v41;
  __int64 v42;
  struct {
    unsigned __int64 v43;
    void (*v44)(void);
  } v43_;
  char v45;
  _QWORD* v46;
  void* v47;
  unsigned __int8* v48;
  unsigned __int8 v49[16];

  v46 = a2;
  v43_.v43 = (unsigned __int64)&v45;
  v43_.v44 = (void (*)(void))NgxRoutine_d1ce0;
  nvidia_be650((void*)(&v41), a5);
  v12 = v41;
  v13 = NgxData_9511b8;
  v47 = NgxData_9511b8;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511b8,
                           memory_order_acquire) != -1) {
    *(_QWORD*)v49 = &v47;
    v48 = v49;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511b8, (__int64)&v48,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v14 = *(_QWORD*)(v12 + 16);
  v15 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v13) - 1LL;
  if (v15 >= (*(_QWORD*)(v12 + 24) - v14) >> 3 ||
      (v16 = *(_QWORD*)(v14 + 8 * v15)) == 0) {
    NgxRoutine_db120();
  }
  v17 = *(_DWORD*)(a5 + 8);
  v49[0] = 0;
  if ((NgxRoutine_d1d00(&v46, a3, a4 & 1, (__int64)&v41, v17, a6, (bool*)v49,
                        v16, (__int64*)&v43_.v43, &v42, (__int64)&v46) &
       1) != 0) {
    if ((*a7 & 1) != 0) {
      **((_BYTE**)a7 + 2) = 0;
      *((_QWORD*)a7 + 1) = 0;
      if (v49[0] != 1) {
        goto LABEL_29;
      }
    }
    else {
      *(_WORD*)a7 = 0;
      if (v49[0] != 1) {
      LABEL_29:
        v31 =
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v16 + 56LL))(v16, 48);
        v32 = (unsigned __int8*)v43_.v43;
        v33 = (unsigned __int8*)(v42 - 1);
        if (v43_.v43 < v42 - 1) {
          v34 = ~((int)v43_.v43 - (int)v42) & 3LL;
          if (v34 != 0) {
            v35 = (unsigned __int8*)v43_.v43;
            do {
              if (*v35 != v31) {
                v32 = v35;
                goto LABEL_45;
              }
              ++v35;
              --v34;
            } while (v34 != 0);
            if ((unsigned __int64)&v33[~v43_.v43] >= 3) {
              goto LABEL_37;
            }
          }
          else {
            v35 = (unsigned __int8*)v43_.v43;
            if ((unsigned __int64)&v33[~v43_.v43] >= 3) {
            LABEL_37:
              v32 = v35 + 3;
              while (1) {
                if (*(v32 - 3) != v31) {
                  v32 -= 3;
                  goto LABEL_45;
                }
                if (*(v32 - 2) != v31) {
                  v32 -= 2;
                  goto LABEL_45;
                }
                if (*(v32 - 1) != v31) {
                  break;
                }
                if (*v32 != v31) {
                  goto LABEL_45;
                }
                v36 = v32 + 1;
                v32 += 4;
                if (v36 == v33) {
                  goto LABEL_43;
                }
              }
              --v32;
              goto LABEL_45;
            }
          }
        LABEL_43:
          v32 = (unsigned __int8*)(v42 - 1);
        }
      LABEL_45:
        NgxRoutine_d3800((__int64*)a7, (unsigned __int64)v32, v42);
        goto LABEL_46;
      }
    }
    v18 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v16 + 56LL))(v16, 45);
    v19 = *a7;
    v20 = v18;
    if ((v19 & 1) != 0) {
      v24 = *((_QWORD*)a7 + 1);
      v25 = *(_QWORD*)a7 & 0xFFFFFFFFFFFFFFFELL;
      v23 = v25 - 1;
      if (v24 != v25 - 1) {
      LABEL_27:
        v28 = *((unsigned __int8**)a7 + 2);
        *((_QWORD*)a7 + 1) = v24 + 1;
        goto LABEL_28;
      }
      v21 = *((unsigned __int8**)a7 + 2);
      if (v23 > 0x7FFFFFFFFFFFFFF2LL) {
        v22 = -9;
        goto LABEL_24;
      }
      v26 = (2 * v23) | 7;
      if (v26 == 23) {
        v27 = 26;
      }
      else {
        v27 = v26 + 1;
      }
      if (v23 >= 0xC) {
        v22 = v27;
      }
      else {
        v22 = 23;
      }
    }
    else {
      if ((_DWORD)v19 != 44) {
        v24 = v19 >> 1;
        *a7 = v19 + 2;
        v28 = a7 + 1;
      LABEL_28:
        v30 = &v28[v24];
        *v30 = v20;
        v30[1] = 0;
        goto LABEL_29;
      }
      v21 = a7 + 1;
      v22 = 48;
      v23 = 22;
    }
    v25 = v23 + 1;
  LABEL_24:
    v24 = v23;
    v29 = NgxRoutine_420(v22);
    memmove_plt(v29, v21, v24);
    if (v25 != 23) {
      NgxRoutine_430(v21, v25);
    }
    *((_QWORD*)a7 + 2) = v29;
    *(_QWORD*)a7 = v22 | 1;
    goto LABEL_27;
  }
LABEL_46:
  if (v46 == nullptr) {
    goto LABEL_55;
  }
  if (v46[3] == v46[4]) {
    if ((*(unsigned int (**)(_QWORD*))(*v46 + 72LL))(v46) != -1) {
      v37 = v46 == nullptr;
      if (a3 != nullptr) {
        goto LABEL_56;
      }
      goto LABEL_49;
    }
    v46 = nullptr;
  LABEL_55:
    v37 = true;
    if (a3 != nullptr) {
      goto LABEL_56;
    }
  LABEL_49:
    if (!v37) {
      goto LABEL_59;
    }
    goto LABEL_58;
  }
  v37 = false;
  if (a3 == nullptr) {
    goto LABEL_49;
  }
LABEL_56:
  if (a3[3] != a3[4]) {
    if (v37) {
      goto LABEL_59;
    }
    goto LABEL_58;
  }
  if (((v37 ^ ((*(unsigned int (**)(_QWORD*))(*a3 + 72LL))(a3) == -1)) & 1) ==
      0) {
  LABEL_58:
    *a6 |= 2u;
  }
LABEL_59:
  v38 = v46;
  NgxRoutine_db240(&v41);
  v39 = v43_.v43;
  v43_.v43 = 0;
  if (v39 != 0) {
    v43_.v44();
  }
  return v38;
}

void __attribute__((noreturn))

nvidia_d5510(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
             __int64 a16, __int64 a17, __int64 a18, void (*a19)(__int64),
             __int64 a20, __int64 a21, __int64 a22, __int64 a23, __int64 a24,
             __int64 a25, __int64 a26, __int64 a27, __int64 a28, __int64 a29,
             __int64 a30, __int64 a31, __int64 a32, __int64 a33, __int64 a34,
             __int64 a35, __int64 a36, __int64 a37, __int64 a38, __int64 a39,
             __int64 a40, __int64 a41)
{
  __int64 v41;
  __int64 v43;

  if ((a27 & 1) != 0) {
    NgxRoutine_430(a29, (4 * a27) & 0xFFFFFFFFFFFFFFF8LL);
    if ((a30 & 1) == 0) {
    LABEL_3:
      if ((a33 & 1) == 0) {
        goto LABEL_4;
      }
      goto LABEL_10;
    }
  }
  else if ((a30 & 1) == 0) {
    goto LABEL_3;
  }
  NgxRoutine_430(a32, (4 * a30) & 0xFFFFFFFFFFFFFFF8LL);
  if ((a33 & 1) == 0) {
  LABEL_4:
    if ((a36 & 1) == 0) {
      goto LABEL_5;
    }
    goto LABEL_11;
  }
LABEL_10:
  NgxRoutine_430(a35, (4 * a33) & 0xFFFFFFFFFFFFFFF8LL);
  if ((a36 & 1) == 0) {
  LABEL_5:
    if ((a39 & 1) == 0) {
      goto LABEL_6;
    }
    goto LABEL_12;
  }
LABEL_11:
  NgxRoutine_430(a38, (4 * a36) & 0xFFFFFFFFFFFFFFF8LL);
  if ((a39 & 1) == 0) {
  LABEL_6:
    if (v41 == 0) {
    LABEL_14:
      v43 = _Unwind_Resume_plt(a1);
      NgxRoutine_baf40(v43);
    }
  LABEL_13:
    a19(v41);
    goto LABEL_14;
  }
LABEL_12:
  NgxRoutine_430(a41, a39 & 0xFFFFFFFFFFFFFFFELL);
  if (v41 == 0) {
    goto LABEL_14;
  }
  goto LABEL_13;
}

_QWORD* nvidia_d5660(__int64 a1, _QWORD* a2, _QWORD* a3, char a4, __int64 a5,
                     _DWORD* a6, unsigned __int8* a7)
{
  __int64 v12;
  void* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  unsigned __int64 v19;
  int v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int8* v23;
  unsigned __int8* v24;
  int v25;
  char* i;
  int* v27;
  int v28;
  _BOOL4 v29;
  int* v30;
  int v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v35;
  __int64 v36;
  struct {
    char* v37;
    void (*v38)(void);
  } v37_;
  char v39;
  _QWORD* v40;
  void* v41;
  void*** v42;
  void** v43;

  v40 = a2;
  v37_.v37 = &v39;
  v37_.v38 = (void (*)(void))NgxRoutine_d1ce0;
  nvidia_be650((void*)(&v35), a5);
  v12 = v35;
  v13 = NgxData_9511d0;
  v41 = NgxData_9511d0;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511d0,
                           memory_order_acquire) != -1) {
    v43 = &v41;
    v42 = &v43;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511d0, (__int64)&v42,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v14 = *(_QWORD*)(v12 + 16);
  v15 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v13) - 1LL;
  if (v15 >= (*(_QWORD*)(v12 + 24) - v14) >> 3 ||
      (v16 = *(_QWORD*)(v14 + 8 * v15)) == 0) {
    NgxRoutine_db120();
  }
  v17 = *(_DWORD*)(a5 + 8);
  LOBYTE(v43) = 0;
  if ((NgxRoutine_d4040(&v40, a3, a4 & 1, (__int64)&v35, v17, a6, (bool*)&v43,
                        v16, (__int64*)&v37_.v37, &v36,
                        (unsigned __int64)&v40) &
       1) != 0) {
    if ((*a7 & 1) != 0) {
      **((_DWORD**)a7 + 2) = 0;
      *((_QWORD*)a7 + 1) = 0;
      if ((unsigned __int8)v43 != 1) {
      LABEL_18:
        v25 =
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v16 + 88LL))(v16, 48);
        for (i = v37_.v37; (unsigned __int64)i < v36 - 4; i += 4) {
          if (*(_DWORD*)i != v25) {
            break;
          }
        }
        NgxRoutine_d5990(a7, (unsigned __int64)i, v36);
        goto LABEL_22;
      }
    }
    else {
      *((_DWORD*)a7 + 1) = 0;
      *a7 = 0;
      if ((unsigned __int8)v43 != 1) {
        goto LABEL_18;
      }
    }
    v18 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v16 + 88LL))(v16, 45);
    v19 = *a7;
    v20 = v18;
    if ((v19 & 1) != 0) {
      v22 = *((_QWORD*)a7 + 1);
      v21 = (*(_QWORD*)a7 & 0xFFFFFFFFFFFFFFFELL) - 1;
      if (v22 != v21) {
      LABEL_15:
        v23 = *((unsigned __int8**)a7 + 2);
        *((_QWORD*)a7 + 1) = v22 + 1;
      LABEL_17:
        v24 = &v23[4 * v22];
        *(_DWORD*)v24 = v20;
        *((_DWORD*)v24 + 1) = 0;
        goto LABEL_18;
      }
    }
    else {
      if ((_DWORD)v19 != 8) {
        v22 = v19 >> 1;
        *a7 = v19 + 2;
        v23 = a7 + 4;
        goto LABEL_17;
      }
      v21 = 4;
    }
    NgxRoutine_bfa50((__int64)a7, v21, 1u, v21, v21, 0, 0);
    v22 = v21;
    goto LABEL_15;
  }
LABEL_22:
  if (v40 != nullptr) {
    v27 = (int*)v40[3];
    if (v27 == (int*)v40[4]) {
      v28 = (*(__int64 (**)(_QWORD*))(*v40 + 72LL))(v40);
    }
    else {
      v28 = *v27;
    }
    if (v28 != -1) {
      v29 = v40 == nullptr;
      if (a3 == nullptr) {
        goto LABEL_28;
      }
    LABEL_32:
      v30 = (int*)a3[3];
      if (v30 == (int*)a3[4]) {
        v31 = (*(__int64 (**)(_QWORD*))(*a3 + 72LL))(a3);
      }
      else {
        v31 = *v30;
      }
      if (((v29 ^ (v31 == -1)) & 1) != 0) {
        goto LABEL_37;
      }
      goto LABEL_36;
    }
    v40 = nullptr;
  }
  v29 = true;
  if (a3 != nullptr) {
    goto LABEL_32;
  }
LABEL_28:
  if (v29) {
  LABEL_36:
    *a6 |= 2u;
  }
LABEL_37:
  v32 = v40;
  NgxRoutine_db240(&v35);
  v33 = (__int64)v37_.v37;
  v37_.v37 = nullptr;
  if (v33 != 0) {
    v37_.v38();
  }
  return v32;
}

__int64 nvidia_d5e80(long double a1, __int64 a2, __int64 a3, char a4,
                     __int64 a5, unsigned int a6)
{

#pragma clang fp contract(off)
  unsigned int v10;
  int v11;
  _BYTE* v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  void* v17;
  __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  __int64 v21;
  char v22;
  int v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  _QWORD* v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v34;
  _BYTE* v36;
  __int64 v37;
  __int64 v38;
  _QWORD v39[12];
  int v40;
  struct {
    __int64 v41;
    unsigned __int64 v42;
    __int64 v43;
  } v41_;
  struct {
    unsigned __int64 v44;
    unsigned __int64 v45;
    __int64 v46;
  } v44_;
  struct {
    _QWORD v47[2];
    __int64 v48;
  } v47_;
  char v49[4];
  char v50[4];
  int v51;
  __int64 v52;
  char v53;
  _BYTE* v54;
  _BYTE v55[108];

  v54 = v55;
  v10 = snprintf_plt(v55, 100, "%.0Lf", a1);
  if (v10 < 0x64) {
    v15 = &v53;
    v11 = v10;
    v14 = 0;
    v12 = nullptr;
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b89de8,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(&NgxData_2b89de8) != 0) {
      NgxData_2b89de0 = newlocale_plt(0x7FFFFFFF, "C", 0);
      __cxa_guard_release_plt(&NgxData_2b89de8);
    }
    v11 =
        NgxRoutine_e2100((__int64)&v54, NgxData_2b89de0, (__int64)"%.0Lf", a1);
    if (v11 == -1) {
      NgxRoutine_e2320();
    }
    v12 = v54;
    v13 = malloc_plt(v11);
    if (v13 == 0) {
      NgxRoutine_e2320();
    }
    v14 = v13;
    v15 = (char*)v13;
  }
  v34 = a3;
  v36 = v12;
  nvidia_be650((void*)(&v52), a5);
  v16 = v52;
  v17 = NgxData_9511b8;
  v44_.v44 = (unsigned __int64)NgxData_9511b8;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511b8,
                           memory_order_acquire) != -1) {
    v39[0] = &v44_.v44;
    v47_.v47[0] = v39;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511b8, (__int64)v47_.v47,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v18 = *(_QWORD*)(v16 + 16);
  v19 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v17) - 1LL;
  if (v19 >= (*(_QWORD*)(v16 + 24) - v18) >> 3 ||
      (v20 = *(_QWORD**)(v18 + 8 * v19)) == nullptr) {
    NgxRoutine_db120();
  }
  v21 = v11;
  (*(void (**)(_QWORD*, _BYTE*, _BYTE*, char*))(*v20 + 64LL))(v20, v54,
                                                              &v54[v11], v15);
  v22 = v11 >= 1 && *v54 == 45;
  v47_.v47[1] = 0;
  v47_.v48 = 0;
  v44_.v46 = 0;
  v47_.v47[0] = 0;
  v44_.v44 = 0;
  v44_.v45 = 0;
  v41_.v42 = 0;
  v41_.v43 = 0;
  v41_.v41 = 0;
  NgxRoutine_d6370(a4 & 1, v22, &v52, &v51, v50, v49, v47_.v47, &v44_.v44,
                   (__int64)&v41_.v41, &v40);
  v23 = v40;
  if (v11 <= v40) {
    if ((v41_.v41 & 1) != 0) {
      v29 = v41_.v42;
    }
    else {
      v29 = (unsigned __int64)(unsigned __int8)v41_.v41 >> 1;
    }
    v30 = v40 + v29;
    if ((v44_.v44 & 1) != 0) {
      v31 = v44_.v45;
    }
    else {
      v31 = (unsigned __int64)(unsigned __int8)v44_.v44 >> 1;
    }
    v26 = v30 + v31 + 2;
    if (v26 < 0x65) {
      goto LABEL_22;
    }
  }
  else {
    if ((v41_.v41 & 1) != 0) {
      v24 = v41_.v42;
    }
    else {
      v24 = (unsigned __int64)(unsigned __int8)v41_.v41 >> 1;
    }
    if ((v44_.v44 & 1) != 0) {
      v25 = v44_.v45;
    }
    else {
      v25 = (unsigned __int64)(unsigned __int8)v44_.v44 >> 1;
    }
    v26 = v40 + 2 * (v11 - (__int64)v40) + v24 + v25 + 1;
    if (v26 < 0x65) {
    LABEL_22:
      v27 = v39;
      v28 = 0;
      goto LABEL_31;
    }
  }
  v28 = malloc_plt(v26);
  v27 = (_QWORD*)v28;
  if (v28 == 0) {
    NgxRoutine_e2320();
  }
LABEL_31:
  NgxRoutine_d65c0((__int64)v27, &v38, &v37, *(_DWORD*)(a5 + 8), (__int64)v15,
                   &v15[v21], v20, v22, (__int64)&v51, v50[0], v49[0],
                   (unsigned __int8*)v47_.v47, (unsigned __int8*)&v44_.v44,
                   (unsigned __int8*)&v41_.v41, v23);
  v32 = NgxRoutine_d6d40(v34, (__int64)v27, v38, v37, a5, a6);
  if (v28 != 0) {
    free_plt(v28);
  }
  if ((v41_.v41 & 1) != 0) {
    NgxRoutine_430(v41_.v43, v41_.v41 & 0xFFFFFFFFFFFFFFFELL);
    if ((v44_.v44 & 1) == 0) {
    LABEL_35:
      if ((v47_.v47[0] & 1) == 0) {
        goto LABEL_36;
      }
      goto LABEL_43;
    }
  }
  else if ((v44_.v44 & 1) == 0) {
    goto LABEL_35;
  }
  NgxRoutine_430(v44_.v46, v44_.v44 & 0xFFFFFFFFFFFFFFFELL);
  if ((v47_.v47[0] & 1) == 0) {
  LABEL_36:
    NgxRoutine_db240(&v52);
    if (v14 == 0) {
      goto LABEL_38;
    }
    goto LABEL_37;
  }
LABEL_43:
  NgxRoutine_430(v47_.v48, v47_.v47[0] & 0xFFFFFFFFFFFFFFFELL);
  NgxRoutine_db240(&v52);
  if (v14 != 0) {
  LABEL_37:
    free_plt(v14);
  }
LABEL_38:
  if (v36 != nullptr) {
    free_plt(v36);
  }
  return v32;
}

void __attribute__((noreturn))

nvidia_d6260(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
             __int64 a16, __int64 a17, __int64 a18, __int64 a19, __int64 a20,
             __int64 a21, __int64 a22, __int64 a23, __int64 a24, __int64 a25,
             __int64 a26, __int64 a27, __int64 a28, __int64 a29, __int64 a30,
             __int64 a31, __int64 a32, __int64 a33, __int64 a34, __int64 a35,
             __int64 a36, __int64 a37, __int64 a38, __int64 a39, __int64 a40,
             __int64 a41, __int64 a42, __int64 a43)
{
  __int64 v43;
  __int64 v44;
  __int64 v46;

  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v46 = _Unwind_Resume_plt(a1);
  if ((a35 & 1) != 0) {
    NgxRoutine_430(a37, a35 & 0xFFFFFFFFFFFFFFFELL);
    if ((a38 & 1) == 0) {
    LABEL_3:
      if ((a41 & 1) == 0) {
      LABEL_8:
        NgxRoutine_db240((__int64*)(v44 - 232));
        if (v43 != 0) {
          goto LABEL_11;
        }
        while (a17 == 0) {
          _Unwind_Resume_plt(v46);
        LABEL_11:
          free_plt(v43);
        }
        free_plt(a17);
        _Unwind_Resume_plt(v46);
        __udf(0);
      }
    LABEL_7:
      NgxRoutine_430(a43, a41 & 0xFFFFFFFFFFFFFFFELL);
      goto LABEL_8;
    }
  }
  else if ((a38 & 1) == 0) {
    goto LABEL_3;
  }
  NgxRoutine_430(a40, a38 & 0xFFFFFFFFFFFFFFFELL);
  if ((a41 & 1) == 0) {
    goto LABEL_8;
  }
  goto LABEL_7;
}

__int64 nvidia_d6ee0(__int64 a1, __int64 a2, char a3, __int64 a4,
                     unsigned int a5, unsigned __int8* a6)
{
  __int64 v11;
  void* v12;
  __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int8* v18;
  int v19;
  char v20;
  unsigned __int64 v21;
  int v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned int v27;
  _QWORD* v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD v39[12];
  int v40;
  struct {
    __int64 v41;
    unsigned __int64 v42;
    __int64 v43;
  } v41_;
  struct {
    unsigned __int64 v44;
    unsigned __int64 v45;
    __int64 v46;
  } v44_;
  struct {
    _QWORD v47[2];
    __int64 v48;
  } v47_;
  char v49[4];
  char v50[4];
  int v51;
  __int64 v52[2];

  nvidia_be650((void*)(v52), a4);
  v11 = v52[0];
  v12 = NgxData_9511b8;
  v44_.v44 = (unsigned __int64)NgxData_9511b8;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511b8,
                           memory_order_acquire) != -1) {
    v39[0] = &v44_.v44;
    v47_.v47[0] = v39;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511b8, (__int64)v47_.v47,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v13 = *(_QWORD*)(v11 + 16);
  v14 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12) - 1LL;
  if (v14 >= (*(_QWORD*)(v11 + 24) - v13) >> 3 ||
      (v15 = *(_QWORD**)(v13 + 8 * v14)) == nullptr) {
    NgxRoutine_db120();
  }
  v16 = *a6;
  v17 = *((_QWORD*)a6 + 1);
  if ((v16 & 1) == 0) {
    v17 = v16 >> 1;
  }
  if (v17 != 0) {
    if ((v16 & 1) != 0) {
      v18 = *((unsigned __int8**)a6 + 2);
    }
    else {
      v18 = a6 + 1;
    }
    v19 = *v18;
    v20 = v19 ==
          (*(unsigned __int8 (**)(_QWORD*, __int64))(*v15 + 56LL))(v15, 45);
  }
  else {
    v20 = 0;
  }
  v47_.v47[1] = 0;
  v47_.v48 = 0;
  v44_.v46 = 0;
  v47_.v47[0] = 0;
  v44_.v44 = 0;
  v44_.v45 = 0;
  v41_.v42 = 0;
  v41_.v43 = 0;
  v41_.v41 = 0;
  NgxRoutine_d6370(a3 & 1, v20, v52, &v51, v50, v49, v47_.v47, &v44_.v44,
                   (__int64)&v41_.v41, &v40);
  v21 = *a6;
  v22 = v40;
  v36 = a2;
  if ((v21 & 1) != 0) {
    v23 = *((_QWORD*)a6 + 1);
  }
  else {
    v23 = v21 >> 1;
  }
  if (v40 >= (int)v23) {
    if ((v41_.v41 & 1) != 0) {
      v30 = v41_.v42;
    }
    else {
      v30 = (unsigned __int64)(unsigned __int8)v41_.v41 >> 1;
    }
    v31 = v40 + v30;
    if ((v44_.v44 & 1) != 0) {
      v32 = v44_.v45;
    }
    else {
      v32 = (unsigned __int64)(unsigned __int8)v44_.v44 >> 1;
    }
    v26 = v31 + v32 + 2;
    v27 = a5;
    if (v26 < 0x65) {
      goto LABEL_24;
    }
  }
  else {
    if ((v41_.v41 & 1) != 0) {
      v24 = v41_.v42;
    }
    else {
      v24 = (unsigned __int64)(unsigned __int8)v41_.v41 >> 1;
    }
    if ((v44_.v44 & 1) != 0) {
      v25 = v44_.v45;
    }
    else {
      v25 = (unsigned __int64)(unsigned __int8)v44_.v44 >> 1;
    }
    v26 = v40 + 2 * (v23 - v40) + v24 + v25 + 1;
    v27 = a5;
    if (v26 < 0x65) {
    LABEL_24:
      v28 = v39;
      v29 = 0;
      goto LABEL_33;
    }
  }
  v29 = malloc_plt(v26);
  v28 = (_QWORD*)v29;
  if (v29 == 0) {
    NgxRoutine_e2320();
  }
LABEL_33:
  if ((v21 & 1) != 0) {
    v33 = *((_QWORD*)a6 + 2);
  }
  else {
    v33 = (__int64)(a6 + 1);
  }
  NgxRoutine_d65c0((__int64)v28, &v38, &v37, *(_DWORD*)(a4 + 8), v33,
                   (char*)(v33 + v23), v15, v20, (__int64)&v51, v50[0], v49[0],
                   (unsigned __int8*)v47_.v47, (unsigned __int8*)&v44_.v44,
                   (unsigned __int8*)&v41_.v41, v22);
  v34 = NgxRoutine_d6d40(v36, (__int64)v28, v38, v37, a4, v27);
  if (v29 != 0) {
    free_plt(v29);
  }
  if ((v41_.v41 & 1) == 0) {
    if ((v44_.v44 & 1) == 0) {
      goto LABEL_40;
    }
  LABEL_44:
    NgxRoutine_430(v44_.v46, v44_.v44 & 0xFFFFFFFFFFFFFFFELL);
    if ((v47_.v47[0] & 1) == 0) {
      goto LABEL_42;
    }
    goto LABEL_41;
  }
  NgxRoutine_430(v41_.v43, v41_.v41 & 0xFFFFFFFFFFFFFFFELL);
  if ((v44_.v44 & 1) != 0) {
    goto LABEL_44;
  }
LABEL_40:
  if ((v47_.v47[0] & 1) != 0) {
  LABEL_41:
    NgxRoutine_430(v47_.v48, v47_.v47[0] & 0xFFFFFFFFFFFFFFFELL);
  }
LABEL_42:
  NgxRoutine_db240(v52);
  return v34;
}

__int64 nvidia_d72d0(long double a1, __int64 a2, __int64 a3, char a4,
                     __int64 a5, int a6)
{

#pragma clang fp contract(off)
  unsigned int v10;
  int v11;
  _BYTE* v12;
  __int64 v13;
  __int64 v14;
  unsigned int* v15;
  __int64 v16;
  void* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  int v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  _QWORD* v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v34;
  _BYTE* v36;
  __int64 v37;
  __int64 v38;
  _QWORD v39[50];
  int v40;
  struct {
    __int64 v41;
    unsigned __int64 v42;
    __int64 v43;
  } v41_;
  struct {
    void* v44;
    unsigned __int64 v45;
    __int64 v46;
  } v44_;
  struct {
    _QWORD v47[2];
    __int64 v48;
  } v47_;
  int v49;
  int v50;
  int v51;
  __int64 v52;
  char v53;
  _BYTE* v54;
  _BYTE v55[108];

  v54 = v55;
  v10 = snprintf_plt(v55, 100, "%.0Lf", a1);
  if (v10 < 0x64) {
    v15 = (unsigned int*)&v53;
    v11 = v10;
    v14 = 0;
    v12 = nullptr;
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b89de8,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(&NgxData_2b89de8) != 0) {
      NgxData_2b89de0 = newlocale_plt(0x7FFFFFFF, "C", 0);
      __cxa_guard_release_plt(&NgxData_2b89de8);
    }
    v11 =
        NgxRoutine_e2100((__int64)&v54, NgxData_2b89de0, (__int64)"%.0Lf", a1);
    if (v11 == -1) {
      NgxRoutine_e2320();
    }
    v12 = v54;
    v13 = malloc_plt(4LL * v11);
    if (v13 == 0) {
      NgxRoutine_e2320();
    }
    v14 = v13;
    v15 = (unsigned int*)v13;
  }
  v34 = a3;
  v36 = v12;
  nvidia_be650((void*)(&v52), a5);
  v16 = v52;
  v17 = NgxData_9511d0;
  v44_.v44 = NgxData_9511d0;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511d0,
                           memory_order_acquire) != -1) {
    v39[0] = &v44_.v44;
    v47_.v47[0] = v39;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511d0, (__int64)v47_.v47,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v18 = *(_QWORD*)(v16 + 16);
  v19 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v17) - 1LL;
  if (v19 >= (*(_QWORD*)(v16 + 24) - v18) >> 3 ||
      (v20 = *(_QWORD*)(v18 + 8 * v19)) == 0) {
    NgxRoutine_db120();
  }
  v21 = v11;
  (*(void (**)(__int64, _BYTE*, _BYTE*, unsigned int*))(*(_QWORD*)v20 + 96LL))(
      v20, v54, &v54[v11], v15);
  v22 = v11 >= 1 && *v54 == 45;
  v47_.v48 = 0;
  v47_.v47[1] = 0;
  v47_.v47[0] = 0;
  v44_.v46 = 0;
  v44_.v45 = 0;
  v44_.v44 = nullptr;
  v41_.v43 = 0;
  v41_.v41 = 0;
  v41_.v42 = 0;
  NgxRoutine_d77e0(a4 & 1, v22, &v52, &v51, &v50, &v49, v47_.v47, &v44_.v44,
                   (__int64)&v41_.v41, &v40);
  v23 = v40;
  if (v11 <= v40) {
    if ((v41_.v41 & 1) != 0) {
      v29 = v41_.v42;
    }
    else {
      v29 = (unsigned __int64)(unsigned __int8)v41_.v41 >> 1;
    }
    v30 = v40 + v29;
    if (((unsigned __int8)v44_.v44 & 1) != 0) {
      v31 = v44_.v45;
    }
    else {
      v31 = (unsigned __int64)(unsigned __int8)v44_.v44 >> 1;
    }
    v26 = v30 + v31 + 2;
    if (v26 < 0x65) {
      goto LABEL_22;
    }
  }
  else {
    if ((v41_.v41 & 1) != 0) {
      v24 = v41_.v42;
    }
    else {
      v24 = (unsigned __int64)(unsigned __int8)v41_.v41 >> 1;
    }
    if (((unsigned __int8)v44_.v44 & 1) != 0) {
      v25 = v44_.v45;
    }
    else {
      v25 = (unsigned __int64)(unsigned __int8)v44_.v44 >> 1;
    }
    v26 = v40 + 2 * (v11 - (__int64)v40) + v24 + v25 + 1;
    if (v26 < 0x65) {
    LABEL_22:
      v27 = v39;
      v28 = 0;
      goto LABEL_31;
    }
  }
  v28 = malloc_plt(4 * v26);
  v27 = (_QWORD*)v28;
  if (v28 == 0) {
    NgxRoutine_e2320();
  }
LABEL_31:
  NgxRoutine_d7a40((__int64)v27, &v38, &v37, *(_DWORD*)(a5 + 8), v15,
                   (unsigned __int64)&v15[v21], v20, v22, (__int64)&v51, v50,
                   v49, (unsigned __int8*)v47_.v47, (unsigned __int8*)&v44_.v44,
                   (unsigned __int8*)&v41_.v41, v23);
  v32 = NgxRoutine_d7f40(v34, (__int64)v27, v38, v37, a5, a6);
  if (v28 != 0) {
    free_plt(v28);
  }
  if ((v41_.v41 & 1) != 0) {
    NgxRoutine_430(v41_.v43, (4 * v41_.v41) & 0xFFFFFFFFFFFFFFF8LL);
    if (((unsigned __int8)v44_.v44 & 1) == 0) {
    LABEL_35:
      if ((v47_.v47[0] & 1) == 0) {
        goto LABEL_36;
      }
      goto LABEL_43;
    }
  }
  else if (((unsigned __int8)v44_.v44 & 1) == 0) {
    goto LABEL_35;
  }
  NgxRoutine_430(v44_.v46, (4LL * (_QWORD)v44_.v44) & 0xFFFFFFFFFFFFFFF8LL);
  if ((v47_.v47[0] & 1) == 0) {
  LABEL_36:
    NgxRoutine_db240(&v52);
    if (v14 == 0) {
      goto LABEL_38;
    }
    goto LABEL_37;
  }
LABEL_43:
  NgxRoutine_430(v47_.v48, v47_.v47[0] & 0xFFFFFFFFFFFFFFFELL);
  NgxRoutine_db240(&v52);
  if (v14 != 0) {
  LABEL_37:
    free_plt(v14);
  }
LABEL_38:
  if (v36 != nullptr) {
    free_plt(v36);
  }
  return v32;
}

__int64 nvidia_d8138(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                     __int64 a10, __int64 a11, __int64 a12)
{
  __int64 v12;
  __int64 v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  char v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  void* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  int* v32;
  int v33;
  char v34;
  unsigned __int64 v35;
  int v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  int v41;
  _QWORD* v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned int* v47;
  __int64 v48;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  _QWORD v53[50];
  int v54;
  struct {
    __int64 v55;
    unsigned __int64 v56;
    __int64 v57;
  } v55_;
  struct {
    void* v58;
    unsigned __int64 v59;
    __int64 v60;
  } v58_;
  struct {
    _QWORD v61[2];
    __int64 v62;
  } v61_;
  int v63;
  int v64;
  int v65;
  __int64 v66[14];

  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((a10 & 1) != 0) {
    NgxRoutine_430(a12, (4 * a10) & 0xFFFFFFFFFFFFFFF8LL),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  _Unwind_Resume_plt(a1),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v66[2] = v12;
  v66[3] = v14;
  v66[13] = a1;
  v16 = v15;
  v18 = v17;
  v20 = v19;
  v22 = v21;
  v24 = v23;
  nvidia_be650((void*)(v66), v19),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v25 = v66[0];
  v26 = NgxData_9511d0;
  v58_.v58 = NgxData_9511d0;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511d0,
                           memory_order_acquire) != -1) {
    v53[0] = &v58_.v58;
    v61_.v61[0] = v53;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511d0, (__int64)v61_.v61,
                     (void (*)(__int64))NgxRoutine_e0c40),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v27 = *(_QWORD*)(v25 + 16);
  v28 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v26) - 1LL;
  if (v28 >= (*(_QWORD*)(v25 + 24) - v27) >> 3 ||
      (v29 = *(_QWORD*)(v27 + 8 * v28)) == 0) {
    NgxRoutine_db120(),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v30 = *v16;
  v31 = *((_QWORD*)v16 + 1);
  if ((v30 & 1) == 0) {
    v31 = v30 >> 1;
  }
  if (v31 != 0) {
    if ((v30 & 1) != 0) {
      v32 = *((int**)v16 + 2);
    }
    else {
      v32 = (int*)(v16 + 4);
    }
    v33 = *v32;
    v34 = v33 == (*(unsigned int (**)(__int64, __int64))(*(_QWORD*)v29 + 88LL))(
                     v29, 45),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v34 = 0;
  }
  v61_.v61[1] = 0;
  v61_.v62 = 0;
  v58_.v60 = 0;
  v61_.v61[0] = 0;
  v58_.v58 = nullptr;
  v58_.v59 = 0;
  v55_.v56 = 0;
  v55_.v57 = 0;
  v55_.v55 = 0;
  NgxRoutine_d77e0(v22 & 1, v34, v66, &v65, &v64, &v63, v61_.v61, &v58_.v58,
                   (__int64)&v55_.v55, &v54),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v35 = *v16;
  v36 = v54;
  v50 = v24;
  if ((v35 & 1) != 0) {
    v37 = *((_QWORD*)v16 + 1);
  }
  else {
    v37 = v35 >> 1;
  }
  if (v54 >= (int)v37) {
    if ((v55_.v55 & 1) != 0) {
      v44 = v55_.v56;
    }
    else {
      v44 = (unsigned __int64)(unsigned __int8)v55_.v55 >> 1;
    }
    v45 = v54 + v44;
    if (((unsigned __int8)v58_.v58 & 1) != 0) {
      v46 = v58_.v59;
    }
    else {
      v46 = (unsigned __int64)(unsigned __int8)v58_.v58 >> 1;
    }
    v40 = v45 + v46 + 2;
    v41 = v18;
    if (v40 < 0x65) {
      goto LABEL_26;
    }
  }
  else {
    if ((v55_.v55 & 1) != 0) {
      v38 = v55_.v56;
    }
    else {
      v38 = (unsigned __int64)(unsigned __int8)v55_.v55 >> 1;
    }
    if (((unsigned __int8)v58_.v58 & 1) != 0) {
      v39 = v58_.v59;
    }
    else {
      v39 = (unsigned __int64)(unsigned __int8)v58_.v58 >> 1;
    }
    v40 = v54 + 2 * (v37 - v54) + v38 + v39 + 1;
    v41 = v18;
    if (v40 < 0x65) {
    LABEL_26:
      v42 = v53;
      v43 = 0;
      goto LABEL_35;
    }
  }
  v43 = malloc_plt(4 * v40),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v42 = (_QWORD*)v43;
  if (v43 == 0) {
    NgxRoutine_e2320(),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_35:
  if ((v35 & 1) != 0) {
    v47 = *((unsigned int**)v16 + 2);
  }
  else {
    v47 = (unsigned int*)(v16 + 4);
  }
  NgxRoutine_d7a40((__int64)v42, &v52, &v51, *(_DWORD*)(v20 + 8), v47,
                   (unsigned __int64)&v47[v37], v29, v34, (__int64)&v65, v64,
                   v63, (unsigned __int8*)v61_.v61, (unsigned __int8*)&v58_.v58,
                   (unsigned __int8*)&v55_.v55, v36),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v48 = NgxRoutine_d7f40(v50, (__int64)v42, v52, v51, v20, v41),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v43 != 0) {
    free_plt(v43),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((v55_.v55 & 1) == 0) {
    if (((unsigned __int8)v58_.v58 & 1) == 0) {
      goto LABEL_42;
    }
  LABEL_46:
    NgxRoutine_430(v58_.v60, (4LL * (_QWORD)v58_.v58) & 0xFFFFFFFFFFFFFFF8LL),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v61_.v61[0] & 1) == 0) {
      goto LABEL_44;
    }
    goto LABEL_43;
  }
  NgxRoutine_430(v55_.v57, (4 * v55_.v55) & 0xFFFFFFFFFFFFFFF8LL),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (((unsigned __int8)v58_.v58 & 1) != 0) {
    goto LABEL_46;
  }
LABEL_42:
  if ((v61_.v61[0] & 1) != 0) {
  LABEL_43:
    NgxRoutine_430(v61_.v62, v61_.v61[0] & 0xFFFFFFFFFFFFFFFELL),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_44:
  NgxRoutine_db240(v66),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return v48;
}

#pragma GCC visibility pop
