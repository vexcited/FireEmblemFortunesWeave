#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_b4c00(__int64 result, __int64, __int64, __int64, __int64,
                         __int64, __int64, __int64, char);
__int64 freelocale_plt(_QWORD);
__int64 mbstowcs_plt(_QWORD, _QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 newlocale_plt(_QWORD, _QWORD, _QWORD);
__int64 uselocale_plt(_QWORD);
__int64 wcslen_plt(_QWORD);
extern _UNKNOWN NgxData_f555c;
void __attribute__((noreturn)) NgxRoutine_27cb0();
void __attribute__((noreturn)) nvidia_dlss_rel_source_common_33410();
__attribute__((swiftcall)) void UTF8StrToWStr(PSEUDO_X8 x8_, _BYTE* a1,
                                              void* a2);

__attribute__((swiftcall)) void UTF8StrToWStr(PSEUDO_X8 x8_, _BYTE* a1,
                                              void* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  void* v5;
  unsigned __int64 result;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  char* v31;
  const char* v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  char v38;
  struct {
    __int64 v39;
    unsigned __int64 v40;
    __int64 v41;
  } v39_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (a2 != nullptr) {
    v5 = a2;
  }
  else {
    v5 = &NgxData_f555c;
  }
  result = wcslen_plt(v5),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (result > 0x3FFFFFFFFFFFFFF5LL) {
    goto LABEL_42;
  }
  v7 = result;
  if (result >= 5) {
    if ((result | 1) == 5) {
      v8 = 8;
    }
    else {
      v8 = (result | 1) + 1;
    }
    v39_.v40 = result;
    v39_.v41 = NgxRoutine_420(4 * v8),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v39_.v39 = v8 | 1;
    result = memcpy_plt(v39_.v41, v5, 4 * v7),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    *(_DWORD*)(v39_.v41 + 4 * v7) = 0;
    if (a1 == nullptr) {
      goto LABEL_32;
    }
  }
  else {
    LOBYTE(v39_.v39) = 2 * result;
    if (result != 0) {
      result = memcpy_plt((char*)&v39_.v39 + 4, v5, 4 * result),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      *((_DWORD*)&v39_.v39 + v7 + 1) = 0;
      if (a1 == nullptr) {
        goto LABEL_32;
      }
    }
    else {
      HIDWORD(v39_.v39) = 0;
      if (a1 == nullptr) {
        goto LABEL_32;
      }
    }
  }
  if (*a1 == 0) {
  LABEL_32:
    v34 = v39_.v40;
    *a3 = v39_.v39;
    a3[1] = v34;
    a3[2] = v39_.v41;
    {
      result;
      return;
    }
  }
  v9 = newlocale_plt(6, "C", 0),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v9 == 0) {
    v32 = "newlocale(LC_ALL, \"C\") failed";
    v33 = 80;
  LABEL_31:
    result = NgxRoutine_b4c00(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/common/util-str_unix.cpp",
        v33, (__int64)"UTF8StrToWStr", (__int64)v32, v10, v11, v12, v13, v38),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    goto LABEL_32;
  }
  v14 = v9;
  v15 = uselocale_plt(v9),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v16 = mbstowcs_plt(0, a1, 0),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v16 == -1) {
    uselocale_plt(v15),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    freelocale_plt(v14),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v32 = "mbstowcs failed";
    v33 = 92;
    goto LABEL_31;
  }
  v17 = v16;
  if (v16 >= 0x3FFFFFFFFFFFFFFFLL) {
    nvidia_dlss_rel_source_common_33410(),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v18 = ~(_BYTE)v16;
  v19 = 4 * v16 + 4;
  v20 = NgxRoutine_420(v19),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v21 = v20;
  v22 = v20;
  if ((v18 & 7) != 0) {
    v23 = ((_BYTE)v17 + 1) & 7;
    v22 = v20;
    do {
      *(_DWORD*)v22 = 0;
      v22 += 4;
      --v23;
    } while (v23 != 0);
  }
  if (v17 >= 7) {
    do {
      *(_QWORD*)v22 = 0;
      *(_QWORD*)(v22 + 8) = 0;
      *(_QWORD*)(v22 + 16) = 0;
      *(_QWORD*)(v22 + 24) = 0;
      v22 += 32;
    } while (v22 != v20 + v19);
  }
  v24 = mbstowcs_plt(v20, a1, v19 >> 2),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  uselocale_plt(v15),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  freelocale_plt(v14),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v24 == -1) {
    NgxRoutine_b4c00(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/common/util-str_unix.cpp",
        106, (__int64)"UTF8StrToWStr", (__int64)"mbstowcs failed", v25, v26,
        v27, v28, v38),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v35 = v39_.v40;
    *a3 = v39_.v39;
    a3[1] = v35;
    a3[2] = v39_.v41;
    {
      NgxRoutine_430(v21, 4 * v17 + 4),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      return;
    }
  }
  v29 = wcslen_plt(v21),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v29 > 0x3FFFFFFFFFFFFFF5LL) {
  LABEL_42:
    NgxRoutine_27cb0(),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v30 = v29;
  if (v29 >= 5) {
    if ((v29 | 1) == 5) {
      v36 = 8;
    }
    else {
      v36 = (v29 | 1) + 1;
    }
    v37 = NgxRoutine_420(4 * v36),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    a3[1] = v30;
    a3[2] = v37;
    *a3 = v36 | 1;
    v31 = (char*)v37;
    goto LABEL_39;
  }
  *(_BYTE*)a3 = 2 * v29;
  v31 = (char*)a3 + 4;
  if (v29 != 0) {
  LABEL_39:
    memcpy_plt(v31, v21, 4 * v30),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  *(_DWORD*)&v31[4 * v30] = 0;
  result = NgxRoutine_430(v21, 4 * v17 + 4),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v39_.v39 & 1) != 0) {
    NgxRoutine_430(v39_.v41, (4 * v39_.v39) & 0xFFFFFFFFFFFFFFF8LL),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    return;
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
