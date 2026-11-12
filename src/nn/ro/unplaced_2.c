#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_1a5360(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1a5368(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_85e090(_QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_ro_detail_LookupGlobalManual_plt(_QWORD, _QWORD);
__int64 nn_ro_detail_Unexpected_plt(_QWORD);
extern void (*SdkData_e86fc0[255])();
unsigned int* ro_api_175060(__int64, void* this_, const char*);
void SdkRoutine_1a5380(__int64, _DWORD*);
void nn_ro_175dc0(__int64 a1, __int64 a2, const char* a3);

void nn_ro_175dc0(__int64 a1, __int64 a2, const char* a3)
{
  unsigned __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int* v26;
  __int64 v27;
  char v28;
  unsigned int* v29;
  __int64 (*v30)(__int64);
  int v31;
  int v32;
  struct {
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
  } v33_;
  _QWORD v38[2];
  __int64 v39;

  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v3 = *(_QWORD*)(a1 + 56);
  if ((*(_BYTE*)(a1 + 195) & 2) == 0) {
    if (v3 < 0x10) {
      goto LABEL_5;
    }
    nn_ro_detail_Unexpected_plt("RoModule::FixPltRel is called"),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  if (v3 >= 0x18) {
    v15 = 0;
    v16 = 0;
    v30 = *(__int64 (**)(__int64))SdkData_e86fc0[0],
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    while (1) {
      v19 = *(_QWORD*)(a1 + 16);
      v20 = (__int64*)(v19 + v15);
      v21 = *(_QWORD*)(v19 + v15 + 8);
      if ((_DWORD)v21 == 1026) {
        v22 = *(_QWORD*)(a1 + 200);
        if (v22 == 0) {
          v6 = nn_ro_detail_Unexpected_plt("m_ArchData.defaultPltGot == 0"),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        LABEL_44:
          nn_diag_detail_AbortImpl_plt_856170(v6),
              v9 = COERCE_AS(__typeof__(v9),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
        v23 = *(_QWORD*)(a1 + 40);
        v24 = *v20;
        if (v22 == *(_QWORD*)(*v20 + v23)) {
          break;
        }
      }
    LABEL_28:
      ++v16;
      v15 += 24;
      if (v16 >= v3 / 0x18) {
        goto LABEL_5;
      }
    }
    v25 = *(_QWORD*)(a1 + 96);
    v26 = (unsigned int*)(*(_QWORD*)(a1 + 104) + 24LL * HIDWORD(v21));
    v27 = *v26;
    v28 = *((_BYTE*)v26 + 4);
    if ((*((_BYTE*)v26 + 5) & 3) != 0) {
      v29 = ro_api_175060(a1, (void*)(v25 + v27), a3),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v29 == nullptr) {
        goto LABEL_37;
      }
      v17 = *((_QWORD*)v29 + 1) + *(_QWORD*)(a1 + 40);
      if (v17 == 0) {
        goto LABEL_37;
      }
    }
    else {
      v17 = v30(v25 + v27),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v17 == 0) {
        v17 = nn_ro_detail_LookupGlobalManual_plt(a1, v25 + v27),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        if (v17 == 0) {
        LABEL_37:
          v17 = 0;
          v18 = 0;
          if ((v28 & 0xF0) != 0x20) {
            goto LABEL_27;
          }
        }
      }
    }
    v18 = *(_QWORD*)(v19 + v15 + 16) + v17;
  LABEL_27:
    *(_QWORD*)(v24 + v23) = v18;
    v3 = *(_QWORD*)(a1 + 56);
    goto LABEL_28;
  }
LABEL_5:
  v5 = *(_QWORD*)(a1 + 40);
  v38[1] = 0;
  v39 = 0;
  v38[0] = 0;
  v6 = SdkRoutine_85e090(&v39, v38, v5),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((v6 & 1) == 0) {
    goto LABEL_44;
  }
  if (v39 == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v6),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v7 = *(unsigned int*)(v39 + 28) + v39;
  v8 = *(unsigned int*)(v39 + 32) + v39;
  while (v7 < v8) {
    v33_.v36 = 0;
    v33_.v37 = 0;
    v33_.v34 = 0;
    v33_.v35 = 0;
    v33_.v33 = 0;
    v32 = 0;
    SdkRoutine_1a5380((__int64)&v33_.v33, &v32),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v31 = v9;
    if ((_DWORD)v9 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v31),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    v10 = v33_.v33;
    v11 = v33_.v34;
    if (v33_.v33 + v33_.v34 == 0) {
      nn_diag_detail_AbortImpl_plt_856170(v9),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    if ((_DWORD)v33_.v35 != 4 && (_DWORD)v33_.v35 != 9) {
      nn_diag_detail_AbortImpl_plt_856170(v9),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    if ((v33_.v35 & 0x1000000000LL) == 0) {
      v13 = v33_.v34 + v33_.v33;
      if (v8 < v33_.v34 + v33_.v33) {
        v13 = v8;
      }
      v14 = v13 - v7;
      v31 = SdkRoutine_1a5360(v7, v13 - v7, 1),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v31 != 0) {
        nn_diag_detail_AbortImpl_plt_858db0(&v31),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      v31 = SdkRoutine_1a5368(v7, v14, 16, 16),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v31 != 0) {
        nn_diag_detail_AbortImpl_plt_858db0(&v31),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      v10 = v33_.v33;
      v11 = v33_.v34;
    }
    v7 = v11 + v10;
  }
}

#pragma GCC visibility pop
