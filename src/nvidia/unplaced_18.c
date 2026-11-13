#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* NgxRoutine_bf700(_QWORD* result);
__attribute__((swiftcall)) void nvidia_be650(PSEUDO_X8, __int64);
__int64* NgxRoutine_bf140(__int64*, unsigned __int64, unsigned int);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_baf00(_QWORD);
__int64 NgxRoutine_baf00_alt1() __asm__("NgxRoutine_baf00");
__int64 NgxRoutine_d6d40(__int64, __int64, __int64, __int64, __int64,
                         unsigned int);
__int64 NgxRoutine_d7f40(__int64, __int64, __int64, __int64, __int64, int);
__int64 NgxRoutine_daf20();
__int64 NgxRoutine_db240(__int64*);
__int64 NgxRoutine_dfc20(__int64*);
__int64 NgxRoutine_e0c40();
__int64 NgxRoutine_e0d60(__int64, __int64, _DWORD*, unsigned int);
__int64 NgxRoutine_e0e80(__int64, __int64, _DWORD*, unsigned int);
__int64 NgxRoutine_e0e80_alt1(__int64) __asm__("NgxRoutine_e0e80");
__int64 NgxRoutine_e21e0(unsigned __int64*, __int64, void (*)(__int64));
__int64 _Unwind_Resume_plt(_QWORD);
__int64 __cxa_guard_abort_plt(_QWORD);
__int64 free_plt_alt1(_QWORD) __asm__("free_plt");
__int64 malloc_plt(unsigned __int64);
__int64 memchr_plt(_QWORD, _QWORD, _QWORD);
__int64 nvidia_c97d0(__int64);
__int64 nvidia_cd0e0(unsigned __int8*, unsigned __int8*, unsigned __int8*,
                     __int64, _QWORD*, _QWORD*, __int64*);
__int64 nvidia_cdb60(unsigned __int8*, unsigned __int8*, unsigned __int8*,
                     __int64, _QWORD*, _QWORD*, __int64*);
__int64 nvidia_e0c70(__int64, _BYTE*);
char* nvidia_e1af0(_WORD*, char*, unsigned __int64, unsigned int);
char* nvidia_e1af0_alt1(_WORD*) __asm__("nvidia_e1af0");
extern _UNKNOWN* NgxData_9511b8;
extern _UNKNOWN* NgxData_9511c0;
extern _UNKNOWN NgxData_2b89de8;
extern char* NgxData_9511c8;
unsigned __int64 NgxRoutine_e0fa0(unsigned __int8*, unsigned __int8*, _DWORD*,
                                  unsigned int);
unsigned __int64
NgxRoutine_e0fa0_alt1(unsigned __int8*) __asm__("NgxRoutine_e0fa0");
unsigned __int8* NgxRoutine_c0ac0(_QWORD**, _QWORD*, unsigned __int8*,
                                  unsigned __int8*, __int64, _DWORD*, char);
void __attribute__((noreturn)) NgxRoutine_baf40(__int64);
void __attribute__((noreturn)) NgxRoutine_db120();
void __attribute__((noreturn)) NgxRoutine_e2320();
void free_plt(__int64);
_QWORD* nvidia_c07e0(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     char* a6);
void __attribute__((noreturn))
nvidia_c0a20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14);
_QWORD* nvidia_c0f70(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64* a6);
void __attribute__((noreturn)) nvidia_c15c0(__int64 a1);
_QWORD* nvidia_c1620(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64* a6);
void __attribute__((noreturn)) nvidia_c1c80(__int64 a1);
_QWORD* nvidia_c1ce0(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     _WORD* a6);
void __attribute__((noreturn)) nvidia_c2340(__int64 a1);
void __attribute__((noreturn)) nvidia_c2a00(__int64 a1);
void __attribute__((noreturn)) nvidia_c30c0(__int64 a1);
void __attribute__((noreturn)) nvidia_c3780(__int64 a1);
void __attribute__((noreturn)) nvidia_c3da4(__int64 a1);
void __attribute__((noreturn)) nvidia_c43c4(__int64 a1);
void __attribute__((noreturn)) nvidia_c49e4(__int64 a1);
void __attribute__((noreturn)) nvidia_c5238(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9);
unsigned __int8* nvidia_c52a0(_QWORD** a1, _QWORD* a2, unsigned __int8* a3,
                              unsigned __int8* a4, __int64 a5, _DWORD* a6,
                              char a7);
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
__int64 nvidia_ca54c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9);
__int64 nvidia_ca88c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9);
void __attribute__((noreturn)) nvidia_cb280(__int64 a1);
void __attribute__((noreturn)) nvidia_cb75c(__int64 a1);
__int64 nvidia_cba24(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                     __int64 a10, __int64 a11, __int64 a12);
__int64 nvidia_cbd9c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9);
__int64 nvidia_cc0dc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9);
void __attribute__((noreturn)) nvidia_ccb00(__int64 a1);
void __attribute__((noreturn)) nvidia_ccfdc(__int64 a1);
void __attribute__((noreturn)) nvidia_d0e64(__int64 a1);
void __attribute__((noreturn)) nvidia_d18f8(__int64 a1);
void __attribute__((noreturn)) nvidia_d1c74(__int64 a1);
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
void __attribute__((noreturn)) nvidia_d8b18(__int64 a1);
void __attribute__((noreturn)) nvidia_dbcac(__int64 a1);
void __attribute__((noreturn)) nvidia_dc0c8(__int64 a1);
void __attribute__((noreturn)) nvidia_dc47c(__int64 a1);
void __attribute__((noreturn)) nvidia_dc868(__int64 a1);
__int64 nvidia_e0e68(__int64 a1);
unsigned __int64 nvidia_e0f88(__int64 a1);
char* nvidia_e1adc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                   __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10);
void __attribute__((noreturn)) nvidia_e21bc(__int64 a1);

_QWORD* nvidia_c07e0(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
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
    v13 = NgxData_9511b8;
    v30 = NgxData_9511b8;
    if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511b8,
                             memory_order_acquire) != -1) {
      v26[0] = &v30;
      v31 = v26;
      NgxRoutine_e21e0((unsigned __int64*)NgxData_9511b8, (__int64)&v31,
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
    v18 = NgxData_9511c0;
    v30 = NgxData_9511c0;
    if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511c0,
                             memory_order_acquire) != -1) {
      v26[0] = &v30;
      v31 = v26;
      NgxRoutine_e21e0((unsigned __int64*)NgxData_9511c0, (__int64)&v31,
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
    v22 = NgxRoutine_c0ac0(&v29, a3, (unsigned __int8*)v26,
                           (unsigned __int8*)&v28, v16, a5,
                           1) == (unsigned __int8*)v26;
    result = v29;
    v23 = v22;
    *a6 = v23;
    if ((v27[0] & 1) != 0) {
      v24 = result;
      NgxRoutine_430(v27[2], v27[0] & 0xFFFFFFFFFFFFFFFELL);
      result = v24;
    }
    if ((v26[0] & 1) != 0) {
      v25 = result;
      NgxRoutine_430(v26[2], v26[0] & 0xFFFFFFFFFFFFFFFELL);
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

void __attribute__((noreturn))

nvidia_c0a20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14)
{
  __int64 v14;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  if ((a12 & 1) != 0) {
    goto LABEL_4;
  }
  while ((a9 & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(a14, a12 & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(a11, a9 & 0xFFFFFFFFFFFFFFFELL);
  v16 = _Unwind_Resume_plt(a1);
  v17 = _Unwind_Resume_plt(v16);
  NgxRoutine_db240((__int64*)(v14 - 32));
  v18 = _Unwind_Resume_plt(v17);
  NgxRoutine_db240((__int64*)(v14 - 32));
  _Unwind_Resume_plt(v18);
  __udf(0);
}

_QWORD* nvidia_c0f70(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64* a6)
{
  __int64 v6;
  int v10;
  int v11;
  _BYTE* v12;
  int v13;
  char* v14;
  __int64 v15;
  char* v16;
  _BOOL4 v17;
  int v18;
  int v19;
  __int64 v20;
  unsigned __int8* v21;
  __int64 v22;
  int v23;
  char* v24;
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
  char* v59;
  _BYTE v60[4];
  int v61;
  struct {
    __int64 v62;
    __int64 v63;
    char* v64;
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
  v59 = (char*)&v62_.v62 + 1;
  if ((v62_.v62 & 1) != 0) {
    v14 = v62_.v64;
  }
  else {
    v14 = (char*)&v62_.v62 + 1;
  }
  v15 = (__int64)v14;
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
    if (v14 == (char*)(v15 + v20)) {
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
        v15 = (__int64)v59;
        if ((v62_.v62 & 1) == 0) {
          goto LABEL_48;
        }
      LABEL_47:
        v15 = (__int64)v62_.v64;
        goto LABEL_48;
      }
      if ((v62_.v62 & 1) != 0) {
        v62_.v63 = v26;
        v62_.v64[v26] = 0;
        v15 = (__int64)v59;
        if ((v62_.v62 & 1) != 0) {
          goto LABEL_47;
        }
      }
      else {
        LOBYTE(v62_.v62) = 2 * v26;
        v59[v26] = 0;
        v15 = (__int64)v59;
        if ((v62_.v62 & 1) != 0) {
          goto LABEL_47;
        }
      }
    LABEL_48:
      v14 = (char*)(v15 + v20);
      v21 = (unsigned __int8*)a2[3];
      if (v21 == (unsigned __int8*)a2[4]) {
        goto LABEL_49;
      }
    LABEL_34:
      v22 = *v21;
      v23 = (unsigned __int8)v66_.v66[0];
      if (v14 == (char*)v15) {
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
        if (v14 == (char*)v15 || (__int64)&v14[-v15] > 2 || *(v14 - 1) != 48) {
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
      if (v14 != (char*)v15) {
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
  v38 = NgxRoutine_e0d60(v15, (__int64)v14, a5, v36);
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

void __attribute__((noreturn)) nvidia_c15c0(__int64 a1)
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

_QWORD* nvidia_c1620(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     __int64* a6)
{
  __int64 v6;
  int v10;
  int v11;
  _BYTE* v12;
  int v13;
  char* v14;
  __int64 v15;
  char* v16;
  _BOOL4 v17;
  int v18;
  int v19;
  __int64 v20;
  unsigned __int8* v21;
  __int64 v22;
  int v23;
  char* v24;
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
  char* v59;
  _BYTE v60[4];
  int v61;
  struct {
    __int64 v62;
    __int64 v63;
    char* v64;
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
  v59 = (char*)&v62_.v62 + 1;
  if ((v62_.v62 & 1) != 0) {
    v14 = v62_.v64;
  }
  else {
    v14 = (char*)&v62_.v62 + 1;
  }
  v15 = (__int64)v14;
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
    if (v14 == (char*)(v15 + v20)) {
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
        v15 = (__int64)v59;
        if ((v62_.v62 & 1) == 0) {
          goto LABEL_48;
        }
      LABEL_47:
        v15 = (__int64)v62_.v64;
        goto LABEL_48;
      }
      if ((v62_.v62 & 1) != 0) {
        v62_.v63 = v26;
        v62_.v64[v26] = 0;
        v15 = (__int64)v59;
        if ((v62_.v62 & 1) != 0) {
          goto LABEL_47;
        }
      }
      else {
        LOBYTE(v62_.v62) = 2 * v26;
        v59[v26] = 0;
        v15 = (__int64)v59;
        if ((v62_.v62 & 1) != 0) {
          goto LABEL_47;
        }
      }
    LABEL_48:
      v14 = (char*)(v15 + v20);
      v21 = (unsigned __int8*)a2[3];
      if (v21 == (unsigned __int8*)a2[4]) {
        goto LABEL_49;
      }
    LABEL_34:
      v22 = *v21;
      v23 = (unsigned __int8)v66_.v66[0];
      if (v14 == (char*)v15) {
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
        if (v14 == (char*)v15 || (__int64)&v14[-v15] > 2 || *(v14 - 1) != 48) {
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
      if (v14 != (char*)v15) {
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
  v38 = NgxRoutine_e0e80(v15, (__int64)v14, a5, v36);
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

void __attribute__((noreturn)) nvidia_c1c80(__int64 a1)
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

_QWORD* nvidia_c1ce0(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4, _DWORD* a5,
                     _WORD* a6)
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
  __int16 v38;
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
  v38 = NgxRoutine_e0fa0(v15, v14, a5, v36);
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

unsigned __int8* nvidia_c52a0(_QWORD** a1, _QWORD* a2, unsigned __int8* a3,
                              unsigned __int8* a4, __int64 a5, _DWORD* a6,
                              char a7)
{
  unsigned __int8* v10;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  unsigned __int8* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  bool v22;
  __int64 v23;
  char v24;
  __int64 v25;
  _QWORD* v26;
  int* v27;
  int v28;
  int v29;
  _QWORD* v30;
  int* v31;
  int v32;
  int v33;
  unsigned int* v34;
  unsigned int v35;
  unsigned __int8* v36;
  char* v37;
  char v38;
  unsigned __int8* v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  _QWORD* v43;
  __int64 v44;
  char* v45;
  unsigned __int8* v46;
  unsigned __int64 v47;
  __int64 v48;
  int* v49;
  _DWORD* v50;
  int v51;
  _BOOL4 v52;
  int* v53;
  int v54;
  char* v55;
  int v56;
  _DWORD* v58;
  __int64 v59;
  unsigned __int8* v60;
  char* v61;
  _QWORD** v62;
  char v64;

  v10 = a3;
  v13 = (a4 - a3) >> 3;
  v14 = 0xAAAAAAAAAAAAAAABLL * v13;
  if (0xAAAAAAAAAAAAAAABLL * v13 < 0x65) {
    v61 = &v64;
    v58 = a6;
    v59 = 0;
    if (a3 != a4) {
    LABEL_4:
      v16 = v61;
      v17 = 0;
      v18 = v10;
      do {
        v19 = *v18;
        v20 = *((_QWORD*)v18 + 1);
        v18 += 24;
        if ((v19 & 1) != 0) {
          v21 = v20;
        }
        else {
          v21 = v19 >> 1;
        }
        v22 = v21 == 0;
        v23 = v21 == 0;
        if (v22) {
          v24 = 2;
        }
        else {
          v24 = 1;
        }
        if (v22) {
          ++v17;
        }
        v14 -= v23;
        *v16++ = v24;
      } while (v18 != a4);
      goto LABEL_17;
    }
  }
  else {
    v15 = malloc_plt(0xAAAAAAAAAAAAAAABLL * v13);
    v61 = (char*)v15;
    if (v15 == 0) {
      NgxRoutine_e2320();
    }
    v58 = a6;
    v59 = v15;
    if (v10 != a4) {
      goto LABEL_4;
    }
  }
  v14 = 0;
  v17 = 0;
LABEL_17:
  v25 = 0;
  v62 = a1;
  v60 = v10;
  while (1) {
    v26 = *a1;
    if (*a1 == nullptr) {
      break;
    }
    v27 = (int*)v26[3];
    if (v27 == (int*)v26[4]) {
      v28 = (*(__int64 (**)(_QWORD*))(*v26 + 72LL))(v26);
    }
    else {
      v28 = *v27;
    }
    if (v28 == -1) {
      *a1 = nullptr;
      break;
    }
    v29 = *a1 == nullptr;
    if (a2 != nullptr) {
      goto LABEL_29;
    }
  LABEL_25:
    v30 = *a1;
    if (v29 == 1) {
      goto LABEL_73;
    }
  LABEL_35:
    if (v14 == 0) {
      goto LABEL_73;
    }
    v34 = (unsigned int*)v30[3];
    if (v34 != (unsigned int*)v30[4]) {
      v35 = *v34;
      if ((a7 & 1) != 0) {
        goto LABEL_41;
      }
    LABEL_40:
      v35 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a5 + 56LL))(a5, v35);
      goto LABEL_41;
    }
    v35 = (*(__int64 (**)(_QWORD*))(*v30 + 72LL))(v30);
    if ((a7 & 1) == 0) {
      goto LABEL_40;
    }
  LABEL_41:
    if (v10 == a4) {
      a1 = v62;
      ++v25;
    }
    else {
      v36 = v10;
      v37 = v61;
      v38 = 0;
      do {
        if (*v37 == 1) {
          if ((*v36 & 1) != 0) {
            v39 = *((unsigned __int8**)v36 + 2);
          }
          else {
            v39 = v36 + 4;
          }
          v40 = *(unsigned int*)&v39[4 * v25];
          if ((a7 & 1) == 0) {
            LODWORD(v40) = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a5 +
                                                              56LL))(a5, v40);
          }
          if (v35 == (_DWORD)v40) {
            v41 = *v36;
            if ((v41 & 1) != 0) {
              v42 = *((_QWORD*)v36 + 1);
            }
            else {
              v42 = v41 >> 1;
            }
            if (v42 == v25 + 1) {
              --v14;
              ++v17;
              v38 = 1;
              *v37 = 2;
            }
            else {
              v38 = 1;
            }
          }
          else {
            --v14;
            *v37 = 0;
          }
        }
        v36 += 24;
        ++v37;
      } while (v36 != a4);
      if ((v38 & 1) != 0) {
        a1 = v62;
        v10 = v60;
        v43 = *v62;
        v44 = (*v62)[3];
        if (v44 == (*v62)[4]) {
          (*(void (**)(_QWORD*))(*v43 + 80LL))(v43);
        }
        else {
          v43[3] = v44 + 4;
        }
        if (v17 + v14 >= 2) {
          v45 = v61;
          v46 = v60;
          do {
            if (*v45 == 2) {
              v47 = *v46;
              v48 = (v47 & 1) != 0 ? *((_QWORD*)v46 + 1) : v47 >> 1;
              if (v48 != v25 + 1) {
                --v17;
                *v45 = 0;
              }
            }
            v46 += 24;
            ++v45;
          } while (v46 != a4);
        }
        ++v25;
      }
      else {
        v10 = v60;
        a1 = v62;
        ++v25;
      }
    }
  }
  v29 = 1;
  if (a2 == nullptr) {
    goto LABEL_25;
  }
LABEL_29:
  v31 = (int*)a2[3];
  if (v31 == (int*)a2[4]) {
    v32 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
  }
  else {
    v32 = *v31;
  }
  v33 = v32 == -1;
  if (v32 == -1) {
    a2 = nullptr;
  }
  v30 = *a1;
  if (v29 != v33) {
    goto LABEL_35;
  }
LABEL_73:
  if (v30 == nullptr) {
    v50 = v58;
    v52 = true;
    if (a2 != nullptr) {
      goto LABEL_81;
    }
    goto LABEL_95;
  }
  v49 = (int*)v30[3];
  v50 = v58;
  if (v49 == (int*)v30[4]) {
    v51 = (*(__int64 (**)(_QWORD*))(*v30 + 72LL))(v30);
  }
  else {
    v51 = *v49;
  }
  if (v51 == -1) {
    v52 = true;
    *a1 = nullptr;
    if (a2 == nullptr) {
      goto LABEL_95;
    }
  LABEL_81:
    v53 = (int*)a2[3];
    if (v53 == (int*)a2[4]) {
      v54 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
    }
    else {
      v54 = *v53;
    }
    if (((v52 ^ (v54 == -1)) & 1) != 0) {
      goto LABEL_86;
    }
  LABEL_85:
    *v50 |= 2u;
    goto LABEL_86;
  }
  v52 = *a1 == nullptr;
  if (a2 != nullptr) {
    goto LABEL_81;
  }
LABEL_95:
  if (v52) {
    goto LABEL_85;
  }
LABEL_86:
  if (v10 == a4) {
  LABEL_90:
    *v50 |= 4u;
  }
  else {
    v55 = v61;
    while (1) {
      v56 = (unsigned __int8)*v55++;
      if (v56 == 2) {
        break;
      }
      v10 += 24;
      if (v10 == a4) {
        goto LABEL_90;
      }
    }
  }
  if (v59 != 0) {
    free_plt(v59);
  }
  return v10;
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
  return nvidia_c97d0(v13);
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
      free_plt_alt1(v2);
    }
  }
  free_plt_alt1(v1);
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
      free_plt_alt1(v2);
    }
  }
  free_plt_alt1(v1);
  _Unwind_Resume_plt(v9);
  __udf(0);
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
      free_plt_alt1(v2);
    }
  }
  free_plt_alt1(v1);
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
      free_plt_alt1(v2);
    }
  }
  free_plt_alt1(v1);
  _Unwind_Resume_plt(v9);
  __udf(0);
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
          free_plt_alt1(v43);
        }
        free_plt_alt1(a17);
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

void __attribute__((noreturn)) nvidia_d8b18(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  __cxa_guard_abort_plt(v3);
  NgxRoutine_baf00(v3 + 760);
  if ((*(_BYTE*)(v1 + 288) & 1) != 0) {
    NgxRoutine_430(*(_QWORD*)(v1 + 304),
                   *(_QWORD*)(v1 + 288) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_daf20();
  NgxRoutine_baf00(v1);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_dbcac(__int64 a1)
{

  __cxa_guard_abort_plt(&NgxData_2b89de8);
  NgxRoutine_baf00_alt1();
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_dc0c8(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_dc47c(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_dc868(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 + 24));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 nvidia_e0e68(__int64 a1)
{
  __int64 v2;

  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v2 = _Unwind_Resume_plt(a1);
  return NgxRoutine_e0e80_alt1(v2);
}

unsigned __int64 nvidia_e0f88(__int64 a1)
{
  unsigned __int8* v2;

  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v2 = (unsigned __int8*)_Unwind_Resume_plt(a1);
  return NgxRoutine_e0fa0_alt1(v2);
}

char* nvidia_e1adc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                   __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10)
{
  _WORD* v11;

  NgxRoutine_db240(&a10);
  v11 = (_WORD*)_Unwind_Resume_plt(a1);
  return nvidia_e1af0_alt1(v11);
}

void __attribute__((noreturn)) nvidia_e21bc(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 - 40));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

#pragma GCC visibility pop
