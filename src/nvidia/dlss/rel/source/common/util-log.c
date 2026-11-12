#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void NgxRoutine_33440(PSEUDO_X8, _DWORD*, char*);
__int64* nvidia_dlss_rel_source_b52a0(__int64*, __int64);
__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_b4150(__int64, __int64, __int64, ...);
__int64 NgxRoutine_b5230(__int64, const char*, ...);
__int64 NgxRoutine_baf00(_QWORD, _QWORD);
__int64 NgxRoutine_bc9e0(_QWORD);
__int64 NgxRoutine_be820(__int64, __int64);
__int64 NgxRoutine_bfc00(char*, _QWORD*, unsigned int);
__int64 NgxRoutine_db160(__int64 result);
__int64 NgxRoutine_db240(__int64*);
__int64 NgxRoutine_e2c70();
__int64 NgxRoutine_e2ca0();
__int64 __errno_location_plt(void);
__int64 close_plt(_QWORD);
__int64 fcntl_plt(_QWORD, _QWORD, _QWORD);
__int64 fdopen_plt(_QWORD, _QWORD);
__int64 fflush_plt(_QWORD);
__int64 fopen_plt(_QWORD, _QWORD);
__int64 fputs_plt(_QWORD);
__int64 ftruncate_plt(_QWORD, _QWORD);
__int64 localtime_r_plt(_QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 nvidia_dlss_rel_source_b5580(__int64 result);
__int64 open_plt(_QWORD, _QWORD, _QWORD);
__int64 pthread_self_plt(_QWORD);
__int64 strftime_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 time_plt(_QWORD);
__int64 vsnprintf_plt(_QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN** NgxData_954780[2];
extern _UNKNOWN** NgxData_954788;
extern __int64 (***NgxData_951160[2])();
extern __int64* NgxData_951118;
extern __int64* NgxData_951148[3];
extern __int64* NgxData_951150[2];
extern __int64* NgxData_954770;
extern char* NgxData_954760[4];
extern char* NgxData_954790[2];
extern char* NgxData_954798;
extern char NgxData_2b78b30[];
extern char NgxData_2b80b30[];
extern char NgxData_2b88b2f;
extern int* NgxData_954768[3];
extern void (*NgxData_9513b8[26])();
void NgxRoutine_b4b90(__int64, __int64, __int64, __int64, ...);
void __attribute__((noreturn)) NgxRoutine_27cb0();
__int64 util_log_b49c0(_DWORD* a1, _DWORD* a2, int a3);
void util_log_b4d10(__int64 a1, int a2, const char* a3, __int64 a4,
                    unsigned int a5, __int64** a6);
__int64 prepareMessage(__int64 a1, int a2, const char* a3, __int64 a4,
                       __int64** a5);

__int64 util_log_b49c0(_DWORD* a1, _DWORD* a2, int a3)
{
  char* v3;
  unsigned int v4;
  __int64 result;
  char* v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  struct {
    __int64 v12[2];
    char* v13;
  } v12_;
  struct {
    __int64 v14[2];
    char* v15;
    __int64 v16;
  } v14_;

  if (a3 != 1) {
    NgxRoutine_33440((void*)(v14_.v14), a1, nullptr);
    if ((v14_.v14[0] & 1) != 0) {
      v7 = v14_.v15;
    }
    else {
      v7 = (char*)v14_.v14 + 1;
    }
    NgxRoutine_33440((void*)(v12_.v12), a2, nullptr);
    if ((v12_.v12[0] & 1) != 0) {
      v8 = v12_.v13;
    }
    else {
      v8 = (char*)v12_.v12 + 1;
    }
    result = fopen_plt(v7, v8);
    if ((v12_.v12[0] & 1) != 0) {
      v9 = result;
      NgxRoutine_430(v12_.v13, v12_.v12[0] & 0xFFFFFFFFFFFFFFFELL);
      result = v9;
      if ((v14_.v14[0] & 1) == 0) {
        return result;
      }
    }
    else if ((v14_.v14[0] & 1) == 0) {
      return result;
    }
    v10 = result;
    NgxRoutine_430(v14_.v15, v14_.v14[0] & 0xFFFFFFFFFFFFFFFELL);
    return v10;
  }
  NgxRoutine_33440((void*)(v14_.v14), a1, nullptr);
  if ((v14_.v14[0] & 1) != 0) {
    v3 = v14_.v15;
  }
  else {
    v3 = (char*)v14_.v14 + 1;
  }
  v4 = open_plt(v3, 65, 420);
  if ((v14_.v14[0] & 1) != 0) {
    NgxRoutine_430(v14_.v15, v14_.v14[0] & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((int)v4 >= 1) {
    v14_.v14[1] = 0;
    v14_.v15 = nullptr;
    v14_.v16 = 0;
    LODWORD(v14_.v14[0]) = 1;
    if (((unsigned int)fcntl_plt(v4, 6, v14_.v14) != -1 ||
         (v11 = *(_DWORD*)__errno_location_plt()) != 13 && v11 != 11) &&
        (ftruncate_plt(v4, 0) & 0x80000000) == 0) {
      return fdopen_plt(v4, "w");
    }
    close_plt(v4);
  }
  return 0;
}

void util_log_b4d10(__int64 a1, int a2, const char* a3, __int64 a4,
                    unsigned int a5, __int64** a6)
{
  __int64* v8;
  void (**v9)(char*);
  char* v10;
  _UNKNOWN** v11;
  bool v12;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  void (*v19)(char*, _QWORD, _QWORD);
  __int64* v20[4];

  v8 = NgxData_954770;
  v9 = (void (**)(char*))NgxData_954780[0];
  v10 = NgxData_954798;
  v11 = NgxData_954788;
  v12 = *NgxData_954770 == 0 && *NgxData_954780[0] == nullptr;
  if (!v12 || (*NgxData_954798 & 1) != 0 || *NgxData_954788 != nullptr) {
    v16 = NgxRoutine_e2c70();
    v17 = a6[1];
    v20[0] = *a6;
    v20[1] = v17;
    v18 = a6[3];
    v20[2] = a6[2];
    v20[3] = v18;
    prepareMessage(v16, a2, a3, a4, v20);
    if (*v8 != 0) {
      fputs_plt(NgxData_2b78b30);
      fflush_plt(*v8);
    }
    if (*v9 != nullptr) {
      (*v9)(NgxData_2b78b30);
    }
    if (*NgxData_954790[0] == 1) {
      __udf(0x8002u);
    }
    if (*v10 == 1) {
      NgxRoutine_b5230(*(_QWORD*)NgxData_9513b8[0], "%s", NgxData_2b78b30);
      v19 = (void (*)(char*, _QWORD, _QWORD))*v11;
      if (*v11 == nullptr) {
        goto LABEL_16;
      }
    }
    else {
      v19 = (void (*)(char*, _QWORD, _QWORD))*v11;
      if (*v11 == nullptr) {
      LABEL_16:
        NgxRoutine_e2ca0();
        return;
      }
    }
    v19(NgxData_2b78b30, a5, (unsigned int)*NgxData_954768[0]);
    goto LABEL_16;
  }
}

__int64 prepareMessage(__int64 a1, int a2, const char* a3, __int64 a4,
                       __int64** a5)
{
  __int64* v5;
  __int64* v8;
  __int64* v9;
  __int64* v10;
  __int64* v11;
  __int64 (***v12)();
  __int64* v13;
  char* v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  char* v22;
  unsigned __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64* v29;
  struct {
    _QWORD v31[2];
    char* v32;
  } v31_;
  struct {
    __int64* v33;
    __int64* v34;
    __int64* v35;
    __int64* v36;
    __int64 v37;
    _QWORD v38[2];
    unsigned __int64 v39;
    __int64 v40;
    unsigned __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    unsigned __int64 v46;
    int v47;
    char gap156_[4];
    _QWORD v48[19];
    _BYTE v49[56];
    __int64 v50;
  } v33_;

  v5 = a5[1];
  v33_.v33 = *a5;
  v33_.v34 = v5;
  v8 = a5[3];
  v33_.v35 = a5[2];
  v33_.v36 = v8;
  vsnprintf_plt(NgxData_2b80b30, 0x8000, a4, &v33_.v33);
  NgxData_2b88b2f = 0;
  v33_.v50 = time_plt(0);
  if (localtime_r_plt(&v33_.v50, v33_.v49) == 0) {
    NgxRoutine_b4b90(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/common/util-log.cpp",
        431, (__int64)"prepareMessage",
        (__int64)"Warning: assertion failed: %s",
        "nvLocaltime(&curTime, &curTm) != nullptr");
    if (*NgxData_954760[0] == 1) {
      __udf(0x8002u);
    }
  }
  strftime_plt(NgxData_2b78b30, 0x8000, "[%Y-%m-%d %H:%M:%S] ", v33_.v49);
  v9 = NgxData_951150[0];
  v33_.v48[6] = 0;
  v10 = NgxData_951150[0] + 13;
  v11 = NgxData_951150[0] + 8;
  v33_.v48[0] = NgxData_951150[0] + 13;
  v12 = NgxData_951160[0];
  v33_.v35 = NgxData_951150[0] + 8;
  v13 = *(__int64**)((char*)NgxData_951160[0] +
                     (unsigned __int64)(*(_BYTE(*)[16])0x10LL) + 8);
  v33_.v33 = *(__int64**)((char*)NgxData_951160[0] +
                          (unsigned __int64)(*(_BYTE(*)[16])0x10LL));
  *(__int64**)((char*)&v33_.v33 + *(v33_.v33 - 3)) = v13;
  v33_.v34 = nullptr;
  v14 = (char*)&v33_.v33 + *(v33_.v33 - 3);
  NgxRoutine_be820((__int64)v14, (__int64)&v33_.v36);
  *((_QWORD*)v14 + 17) = 0;
  *((_DWORD*)v14 + 36) = -1;
  v15 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v12 + 8);
  v33_.v35 = *(__int64**)((char*)((char*)0x20LL) + (_QWORD)v12);
  *(__int64**)((char*)&v33_.v35 + *(v33_.v35 - 3)) = (__int64*)v15;
  v16 = *(__int64**)&(*(_BYTE(*)[28])0x24LL)[(_QWORD)v12 + 12];
  v33_.v33 = *(__int64**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12);
  *(__int64**)((char*)&v33_.v33 + *(v33_.v33 - 3)) = v16;
  v33_.v35 = v11;
  v33_.v33 = v9 + 3;
  v17 = NgxData_951118;
  v33_.v48[0] = v10;
  v33_.v36 = NgxData_951118 + 2;
  NgxRoutine_db160((__int64)&v33_.v37);
  v33_.v38[1] = 0;
  v33_.v39 = 0;
  v33_.v40 = 0;
  v33_.v41 = 0;
  v18 = NgxData_951148[0];
  v33_.v38[0] = 0;
  v33_.v42 = 0;
  v33_.v43 = 0;
  v33_.v44 = 0;
  v33_.v45 = 0;
  v33_.v46 = 0;
  v33_.v36 = NgxData_951148[0] + 2;
  v33_.v47 = 24;
  v19 = nvidia_dlss_rel_source_b5580((__int64)&v33_.v36);
  v20 = pthread_self_plt(v19);
  nvidia_dlss_rel_source_b52a0((__int64*)&v33_.v35, v20);
  if ((v33_.v47 & 0x10) != 0) {
    v23 = v33_.v46;
    v24 = &v33_.v40;
    if (v33_.v46 < v33_.v41) {
      v33_.v46 = v33_.v41;
      v23 = v33_.v41;
    }
  }
  else {
    if ((v33_.v47 & 8) == 0) {
      v21 = 0;
      LOBYTE(v31_.v31[0]) = 0;
      v22 = (char*)v31_.v31 + 1;
      goto LABEL_19;
    }
    v23 = v33_.v39;
    v24 = v33_.v38;
  }
  v25 = *v24;
  v21 = v23 - *v24;
  if (v21 >= 0xFFFFFFFFFFFFFFF7LL) {
    NgxRoutine_27cb0();
  }
  if (v21 >= 0x17) {
    if ((v21 | 7) == 0x17) {
      v26 = 26;
    }
    else {
      v26 = (v21 | 7) + 1;
    }
    v22 = (char*)NgxRoutine_420(v26);
    v31_.v31[1] = v21;
    v31_.v32 = v22;
    v31_.v31[0] = v26 | 1;
    goto LABEL_18;
  }
  LOBYTE(v31_.v31[0]) = 2 * v21;
  v22 = (char*)v31_.v31 + 1;
  if (v21 != 0) {
  LABEL_18:
    memmove_plt(v22, v25, v21);
  }
LABEL_19:
  v22[v21] = 0;
  v27 = NgxRoutine_bfc00((char*)v31_.v31, nullptr, 0xAu);
  if ((v31_.v31[0] & 1) != 0) {
    NgxRoutine_430(v31_.v32, v31_.v31[0] & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_b4150((__int64)NgxData_2b78b30, 0x8000,
                   (__int64)"%s[tid:%llu][%s:%d] %s\n", NgxData_2b78b30, v27,
                   a3, a2, NgxData_2b80b30);
  v28 = *(__int64**)((char*)((char*)0x40LL) + (_QWORD)v12);
  v29 = *(__int64**)((char*)((char*)0x40LL) + (_QWORD)v12 + 8);
  v33_.v33 = (__int64*)*v12;
  *(__int64**)((char*)&v33_.v33 + *(v33_.v33 - 3)) = v28;
  v33_.v35 = v29;
  v33_.v36 = v18 + 2;
  if ((v33_.v43 & 1) != 0) {
    NgxRoutine_430(v33_.v45, v33_.v43 & 0xFFFFFFFFFFFFFFFELL);
  }
  v33_.v36 = v17 + 2;
  NgxRoutine_db240(&v33_.v37);
  NgxRoutine_baf00(&v33_.v33, v12 + 1);
  return NgxRoutine_bc9e0(v33_.v48);
}

#pragma GCC visibility pop
